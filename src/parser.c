#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"global.h"
#include"parser.h"
#include"extract.h"
#include"utils.h"
#include"../emul/cpu.h"
#include"disasm/debugger.h"
#include"transpile2C.h"


LineDesc pline[0x10000];

// -----------------------------------------

Variables GetEmptyVariables()
{
    Variables vars;
    memset(&vars, 0, sizeof(Variables));
    return vars;
}

void AddLoopVariables(Variables *vars, DICTENTRY *e)
{
    vars->name[vars->nvars+0][0] = 'i' + e->nloopvars;
    strcpy(&vars->name[vars->nvars+0][1], "max");
    vars->name[vars->nvars+1][0] = 'i' + e->nloopvars;
    vars->name[vars->nvars+1][1] = 0;
    vars->nvars += 2;
    e->nloopvars++;
}

void RemoveLoopVariables(Variables *vars)
{
    if (vars->nvars < 2)
    {
        fprintf(stderr, "Error: no loop variables found\n");
        exit(1);
    }
    vars->nvars -= 2;
}

void AddVariable(Variables *vars, DICTENTRY *e)
{
    vars->name[vars->nvars][0] = 'a' + e->nstackvariables;
    vars->name[vars->nvars][1] = 0;
    vars->nvars++;
    e->nstackvariables++;
}

void AddNamedVariable(Variables *vars, DICTENTRY *e, const char* name)
{
    strcpy(&vars->name[vars->nvars][0], name);
    vars->nvars++;
}

void RemoveVariable(Variables *vars)
{
    if (vars->nvars < 1)
    {
        fprintf(stderr, "Error: no variables found\n");
        //exit(1);
        return;
    }
    vars->nvars--;
}


char* GetVariable(Variables *vars, int idx)
{
    static char *def = "h";
    if ((vars->nvars - 1 - idx) < 0)
    {
        return def;
    }
    return &vars->name[vars->nvars - 1 - idx][0];
}

// -----------------------------------------

int DisasmRange(int offset, int size, int ovidx, int minaddr, int maxaddr)
{
    char buffer[0x80];
    int i;
    if (pline[offset].done) return 0;
    //fprintf(stderr, "disasm start 0x%04x\n", offset);
    while (size > 0)
    {
        //fprintf(stderr, "Disasm %04x\n", offset);
        if ((offset < minaddr) || (offset >= maxaddr)) return 0;
        if (offset > 0xFFFF)
        {
           fprintf(stderr, "Warning: outside of segment\n");
           exit(1);
        }

        if (pline[offset].done) return 0;

        buffer[0] = 0x0;
        int currentoffset = offset;
        int newoffset = disasm(0x0, (unsigned)offset, mem, buffer);
        int len = newoffset-offset;
        pline[currentoffset].isasm = TRUE;
        for(i=0; i<len; i++)
        {
            pline[offset].done = TRUE;
            size--;
            offset++;
        }

        if (Read8(currentoffset) == 0xc3) return 0; // ret

        if ((Read8(currentoffset) >= 0x70) && (Read8(currentoffset) <= 0x7f)) // conditional jump
        {
            unsigned short addr = (offset+(short int)((char)Read8(currentoffset+1)));
            DisasmRange(addr&0xffff, 0x10000, ovidx, minaddr, maxaddr);
        }

        if (strcmp(buffer, "jmp    word ptr [bx]") == 0) // jmp
        {
            return 0;
        }

        if (Read8(currentoffset) == 0xe8) // 16 bit call
        {
            //fprintf(stderr, "call from 0x%04x\n", currentoffset);
            unsigned short addr = (offset+(short int)Read16(currentoffset+1));
            DisasmRange(addr&0xffff, 0x10000, ovidx, minaddr, maxaddr);
            if (addr == 0x1649)
            {
                Variables vars = GetEmptyVariables();
                ParsePartFunction(newoffset, 0x0, 0x10000, NULL, ovidx, vars);
                return 0;
            }
        }
    }
    return 0;
}

// -----------------------------------------

int GetWordLength(int addr, DICTENTRY *e, int currentovidx)
{
    char *s = GetWordName(e);

    if (strcmp(s, "(ABORT\")") == 0)
    {
        return Read8(addr+2) + 3;
    }
    if (strcmp(s, "(.\")") == 0)
    {
        return Read8(addr+2) + 3;
    }
    if (e->parp == PARPRINT)
    {
        return Read8(addr+2) + 3;
    }
    if (e->codep == CODELIT) // constant number
    {
        return 4;
    }
    if (e->codep == CODE2LIT) // constant number
    {
        return 6;
    }
    if (e->codep == CODEPOINTER) // pointer to variable or table
    {
        if (e->ovidx == -1) e->doextern = 1;
        return 2;
    }
    if (e->codep == CODECONSTANT)
    {
        if (e->ovidx == -1) e->doextern = 1;
        return 2;
    }
    if (e->codep == CODEDI) // User data
    {
        if (e->ovidx == -1) e->doextern = 1;
        return 2;
    }
    if (e->codep == CODERULE)
    {
        if (e->ovidx == -1) e->doextern = 1;
        return 2;
    }
    if (e->codep == CODEEXEC)
    {
        int par = Read16(Read16(e->parp)+REGDI);
        GetDictWord(par, currentovidx);
        return 2;
    }
    if (e->ovidx == -1) e->doextern = 1;
    if (e->codep > (0x100+FILESTAR0SIZE)) e->doextern = 1;
    return 2;
}

// unsafe test to find closest dict entry
DICTENTRY* FindClosestFunction(unsigned short int addr, int ovidx)
{
    int i = 0;
    int dist = 0xFFFF;
    DICTENTRY *result = NULL;
    for(i=0; i<ndict; i++)
    {
        if (dict[i].parp > addr) continue;
        if (dict[i].codep != CODECALL) continue;
        if ((dict[i].ovidx != ovidx) && (dict[i].ovidx != -1)) continue;

        if (dist > (addr-dict[i].parp)) {
            result = &dict[i];
            dist = addr-dict[i].parp;
        }
    }

    if (result == NULL) {
        fprintf(stderr, "Error: Cannot find function header at offset 0x%04x\n", addr);
        exit(1);
    }

    //test if there is another function in between not yet analyzed
    DICTENTRY *result2 = result;
    for(i=result->parp; i<addr-2; i+=2) {
        if (Read16(i) == CODECALL) {
            result2 = GetDictEntry(i+2, ovidx);
        }
    }

    return result2;
}

// TODO: Analysis of EXECUTE-RULE and EXPERT
// Execute ruls uses a kind of cache which can be reset with the function DISTRACT
void ParseRuleFunction(int minaddr, int maxaddr, DICTENTRY *d, int currentovidx)
{
    int i = 0;
    int j = 0;
    unsigned char RULEIM = Read8(d->parp+0);
    unsigned char CONDLIM = Read8(d->parp+1);
    unsigned char RULECNT = Read8(d->parp+2);
    unsigned short RULEARRp = d->parp+3;
    unsigned short CONDARRp = RULEARRp + 2*RULEIM;

    // following array has size of CONDLIM
    // flag array, seems to act as a cache for the function results
    // Set by the function DISTRACT
    unsigned short CFLGARRp = CONDARRp + 2*CONDLIM;

    pline[d->parp+0].done = 1;
    pline[d->parp+1].done = 1;
    pline[d->parp+2].done = 1;
    snprintf(pline[d->parp+0].str, STRINGLEN, "\nvoid %s() // %s rule\n{\n  int b;\n\n", Forth2CString(GetWordName(d)), GetWordName(d));

    /*
    0xeab7: WORD 'LIFE-SIM' codep=0xb869 parp=0xeac4
    0xeac4  0x01
    0xeac5  0x03
    0xeac6  0x01  RULECNT

    0xeac7  0xd2 0xea  RULEARRp

    0xeac9  0x88 0xe3  CONDARRp
    0xeacb  0x82 0xe4
    0xeacd  0x08 0xe3

    0xeacf  0xe9 0x5b 0xae  CFLGARRp

    0xead2  0x03
    0xead3  0xd0 0xe6
    0xead5  0x80
            0x01
            0x82
    */

    /*
    0xeaf8: WORD '?REDUCE-PO' codep=0xb869 parp=0xeb07
    0xeb07  0x03
    0xeb08  0x05
            0x02  RULECNT

    0xeb0a  0x1f 0xeb  RULEARRp
            0x24 0xeb

            0x52 0x52

    0xeb10  0xa5 0xe2  CONDARRp
            0x2e 0xe4
            0xee 0xe2
            0x38 0xe4
            0x31 0x38

    0xeb1a  0x34 0x30 0x3b 0xac 0x3b

    0xeb1f  0x02
            0x3e 0xe7
            0x80
            0x81

    0xeb24  0x02
            0x79 0xe7
            0x82
            0x83

    */

    //printf("0x%04x: %20s RULEIM:%2i CONDLIM:%2i RULECNT:%2i\n", d->parp, GetWordName(d), RULEIM, CONDLIM, RULECNT);

    for(i=0; i<RULECNT; i++)
    {
        unsigned short rulep = Read16(RULEARRp + i*2);
        pline[RULEARRp + i*2+0].done = 1;
        pline[RULEARRp + i*2+1].done = 1;
        unsigned char n = Read8(rulep + 0);
        unsigned short p = Read16(rulep + 1);
        pline[rulep+0].done = 1;
        pline[rulep+1].done = 1;
        pline[rulep+2].done = 1;

        DICTENTRY *e = GetDictEntry(p, currentovidx);
        if (e == NULL)
        {
            fprintf(stderr, "Error: No invalid dict entry allowed here");
            exit(1);
        }
        char ifthen[STRINGLEN*2];
        char func[STRINGLEN*2];

        GetWordLength(rulep + 1, e, e->ovidx);
        GetMacro(e->parp, e, func, e->ovidx);
        if (i < RULECNT-1) sprintf(ifthen, "  if (b)\n  {\n    %s  }\n\n", func);
        else sprintf(ifthen, "  if (b)\n  {\n    %s  }\n}\n\n", func);

        char try[8192];
        try[0] = 0;

        for(j=0; j<n; j++)
        {
            unsigned char x = Read8(rulep + 3 + j)&0x7F;
            unsigned char flag = Read8(rulep + 3 + j)&0x80;
            pline[rulep + 3 + j].done = 1;

            pline[CFLGARRp + x].done = 1;
            //if (Read8(CFLGARRp + x) != 0xFF) //look in cache 0xFF is "UNKNOWN"

            p = CONDARRp + x*2;
            pline[p+0].done = 1;
            pline[p+1].done = 1;
            DICTENTRY *e = GetDictEntry(Read16(p), currentovidx);
            if (e == NULL)
            {
                fprintf(stderr, "Error: No invalid dict entry allowed here");
                exit(1);
            }
            GetWordLength(p, e, e->ovidx);
            GetMacro(p, e, func, e->ovidx);
            strcat(try, "  ");
            strcat(try, func);
            // TODO, might be the exchanged
            if (flag) strcat(try, "  b = b && Pop();\n"); else strcat(try, "  b = b && !Pop();\n");
        }
        pline[RULEARRp + i*2].str = malloc(strlen(try)+STRINGLEN);
        sprintf(pline[RULEARRp + i*2].str, "  b = 1;\n%s%s", try, ifthen);
    }
}


void ParseCaseFunction(int minaddr, int maxaddr, DICTENTRY *d, int currentovidx)
{
    int par = d->parp;
    int ofs = d->parp;
    char *s = GetWordName(d);
    pline[ofs].str = (char*)malloc(4096);
    pline[ofs].str[0] = 0;
    int n = Read16(par);
    pline[ofs+0].done = 1;
    pline[ofs+1].done = 1;
    int i;
    char temp[256];
    snprintf(pline[ofs-1].str, STRINGLEN, "\nvoid %s() // %s\n{\n", Forth2CString(s), s);
    sprintf(pline[ofs].str, "  switch(Pop()) // %s\n  {\n", s);
    for(i=0; i<n; i++) {
        DICTENTRY *e = GetDictEntry(Read16(par + i*4 + 6), currentovidx);
        pline[par + i*4 + 6].done = 1;
        pline[par + i*4 + 7].done = 1;

        char ret[STRINGLEN];
        GetWordLength(par + i*4 + 6, e, currentovidx);
        GetMacro(par + i*4 + 6, e, ret, currentovidx);
        sprintf(temp, "  case %i:\n    %s    break;\n", Read16(par + i*4 + 4), ret);
        pline[par + i*4 + 4].done = 1;
        pline[par + i*4 + 5].done = 1;
        strcat(pline[ofs].str, temp);
    }
    DICTENTRY *e = GetDictEntry(Read16(par + 2), currentovidx);
    pline[par + 2].done = 1;
    pline[par + 3].done = 1;

    char ret[STRINGLEN];
    GetWordLength(par + 2, e, currentovidx);
    GetMacro(par + 2, e, ret, currentovidx);
    sprintf(temp, "  default:\n    %s    break;\n", ret);
    strcat(pline[ofs].str, temp);
    strcat(pline[ofs].str, "\n  }\n}\n");
}

void ParsePartFunction(int ofs, int minaddr, int maxaddr, DICTENTRY *d, int currentovidx, Variables vars)
{
    if (d == NULL) {
        d = FindClosestFunction(ofs, currentovidx);
        AddNamedVariable(&vars, d, "unknown");
    }

    if (d->codep != CODECALL) {
        fprintf(stderr, "Error: not a forth function call");
        exit(1);
    }

    if (ofs == d->parp) // is head of function
    {
        AddNamedVariable(&vars, d, "callp1");
        AddNamedVariable(&vars, d, "callp0");
    }

    while(1)
    {
        if (ofs < minaddr) return;
        if (ofs > maxaddr) return;
        if (pline[ofs].done) return;

        pline[ofs].isword = TRUE;
        int par = Read16(ofs)+2;
        pline[ofs+0].done = 1;
        pline[ofs+1].done = 1;
        DICTENTRY *e = GetDictEntry(par, currentovidx);
        if (e == NULL)
        {
            sprintf(pline[ofs].str, "UNK_0x%04x(); // Unknown overlay function\n", par);
            ofs += 2;
            continue;
        }

        char *s = GetWordName(e);

        if (ofs < 0x100+FILESTAR0SIZE)
        if (currentovidx != -1)
        if (par >= maxaddr)
        {
            e->isentry = 1;
            snprintf(pline[ofs].str, STRINGLEN, "%s(); // Overlay %s\n", s, overlays[currentovidx].name);
            ofs += 2;
            continue;
        }

        if (strcmp(s, "MODULE") == 0)
        {
            if (Read16(Read16(ofs-4)) == CODELIT)
            {
                char *s = GetDictWord(Read16(ofs-2), currentovidx);
            }
            snprintf(pline[ofs].str, STRINGLEN, "MODULE(); // MODULE\n");
            ofs += 2;
        } else
        if (strcmp(s, "DOTASKS") == 0)
        {
            int codep1 = Read16(Read16(ofs-4));
            int codep2 = Read16(Read16(ofs-8));
            int codep3 = Read16(Read16(ofs-12));
            if ((codep1 == CODELIT) && (codep2 == CODELIT) && (codep3 == CODELIT))
            {
                int c1 = Read16(ofs-2);
                int c2 = Read16(ofs-6);
                int c3 = Read16(ofs-10);
                char *s1 = NULL, *s2 = NULL, *s3 = NULL;
                if (c1 != 0) s1 = GetDictWord(Read16(ofs-2), currentovidx);
                if (c2 != 0) s2 = GetDictWord(Read16(ofs-6), currentovidx);
                if (c3 != 0) s3 = GetDictWord(Read16(ofs-10), currentovidx);
                snprintf(pline[ofs].str, STRINGLEN, "DOTASKS(%s, %s, %s);\n", Forth2CString(s1), Forth2CString(s2), Forth2CString(s3));
            } else
            if ((codep1 == CODELIT) && (codep2 != CODELIT) && (codep3 != CODELIT)) // for DOTASKS in SHIPBUTTONS
            {
                // TODO: a number is missing here: Look at SHIPBUTTONS.c
                int c1 = Read16(ofs-2);
                int c3 = Read16(ofs-8);
                int c4 = Read16(ofs-12);
                int c5 = Read16(ofs-16);

                char* s1 = GetDictWord(c1, currentovidx);
                char* s3 = GetDictWord(c3, currentovidx);
                char* s4 = GetDictWord(c4, currentovidx);
                char* s5 = GetDictWord(c5, currentovidx);
                snprintf(pline[ofs].str, STRINGLEN, "DOTASKS2(%s, %s, %s, %s);\n", Forth2CString(s1), Forth2CString(s3), Forth2CString(s4), Forth2CString(s5));
            } else
            {
                fprintf(stderr, "Error: DOTASKS without specifying tasks in ov:%i\n", currentovidx);
                exit(1);
            }
            ofs += 2;
        } else
        if (strcmp(s, "(;CODE)") == 0) // maybe inlined code
        {
            snprintf(pline[ofs].str, STRINGLEN, "CODE(); // %s inlined assembler code\n", s);
            ofs += 2;
            return;
        } else
        if (strcmp(s, "COMPILE") == 0) // maybe inlined code
        {
            snprintf(pline[ofs].str, STRINGLEN, "%s(0x%04x); // compile?\n", s, Read16(ofs+2));
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            ofs += 4;
            //return;
        } else
        if (e->codep == CODELOADOVERLAY) // This code loads the overlay
        {
            if (currentovidx != -1)
            {
                fprintf(stderr, "Error: Change of overlay inside overlay\n");
                exit(1);
            }

            unsigned short startaddress = Read16(par);
            int i=0;
            //fprintf(stderr, "LoadOverlay(\"%s\");\n", s);
            for(i=0; overlays[i].name != NULL; i++)
            {
                if (overlays[i].startaddress != startaddress) continue;
                currentovidx = i;
            }
            if (currentovidx == -1)
            {
                fprintf(stderr, "Error: Cannot find overlay\n");
                exit(1);
            }
            snprintf(pline[ofs].str, STRINGLEN, "LoadOverlay(\"%s\");\n", s);
            ofs += 2;
        } else
        if (strcmp(s, "EXIT") == 0)
        {
            pline[ofs].flow = FUNCEND;
            if (pline[ofs+2].labelid != 0)
            {
                pline[ofs].flow = EXIT;
            }
            ofs += 2;
            return;
        } else
        if (strcmp(s, "BRANCH") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + 2 + par)&0xFFFF;
            if (Read16(Read16(addr)) == CODEEXIT)
            {
                pline[ofs].gotoid = -1;
                pline[ofs].flow = EXIT;
            } else
            {
                if (pline[addr].labelid == 0)
                {
                    pline[addr].labelid = ++d->nlabel;
                }
                pline[ofs].gotoid = pline[addr].labelid;
                pline[ofs].flow = GOTO;
            }
            ParsePartFunction(addr, minaddr, maxaddr, d, currentovidx, vars);

            if (!pline[ofs+4].done && !pline[ofs+4].labelid)
            {
                DICTENTRY *next = GetDictEntry(Read16(ofs+4)+2, currentovidx);
                if (strcmp(next->r, "EXIT") == 0)
                {
                    pline[ofs+4].done = 1;
                    pline[ofs+5].done = 1;
                    pline[ofs+4].isword = TRUE;
                    pline[ofs+4].flow = FUNCEND;
                } else
                {
                    fprintf(stderr, "Error: unexpected continuance of function after branch");
                    exit(1);
                }
            }
            return;
            ofs += 4;
        } else
        if (strcmp(s, "0BRANCH") == 0)
        {
            par = Read16(ofs+2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + 2 + par)&0xFFFF;
            if (Read16(Read16(addr)) == CODEEXIT)
            {
                pline[ofs].gotoid = -1;
                pline[ofs].flow = IFEXIT;
            } else
            {
                if (pline[addr].labelid == 0)
                {
                    pline[addr].labelid = ++d->nlabel;
                }
                pline[ofs].gotoid = pline[addr].labelid;
                pline[ofs].flow = IFGOTO;
            }
            ParsePartFunction(ofs+4, minaddr, maxaddr, d, currentovidx, vars);
            ParsePartFunction(addr, minaddr, maxaddr, d, currentovidx, vars);
            ofs += 4;
        } else
        if (strcmp(s, ">R") == 0) // doesn't work for function (EXPECT)
        {
            AddVariable(&vars, d);
            if (pline[d->parp-1].initvarstr == NULL) pline[d->parp-1].initvarstr = malloc(STRINGLEN*2);
            strcat(pline[d->parp-1].initvarstr, "  unsigned short int ");
            strcat(pline[d->parp-1].initvarstr, GetVariable(&vars, 0));
            strcat(pline[d->parp-1].initvarstr, ";\n");
            snprintf(pline[ofs].str, STRINGLEN, "%s = Pop(); // >R\n", GetVariable(&vars, 0));
            ofs += 2;
        } else
        if (strcmp(s, "R>") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "Push(%s); // R>\n", GetVariable(&vars, 0));
            RemoveVariable(&vars);
            ofs += 2;
        } else
        if (strcmp(s, "R@") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "Push(Read16(%s)); // R@\n", GetVariable(&vars, 0));
            ofs += 2;
        } else
        if (strcmp(s, "LEAVE") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "%s = %s; // LEAVE\n", GetVariable(&vars, 1), GetVariable(&vars, 0));
            ofs += 2;
        } else
        if (strcmp(s, "(DO)") == 0)
        {
            AddLoopVariables(&vars, d);
            if (pline[d->parp-1].initvarstr == NULL) pline[d->parp-1].initvarstr = malloc(STRINGLEN*2);
            strcat(pline[d->parp-1].initvarstr, "  signed short int ");
            strcat(pline[d->parp-1].initvarstr, GetVariable(&vars, 0));
            strcat(pline[d->parp-1].initvarstr, ", ");
            strcat(pline[d->parp-1].initvarstr, GetVariable(&vars, 1));
            strcat(pline[d->parp-1].initvarstr, ";\n");

            snprintf(pline[ofs].str, STRINGLEN, "\n  %s = Pop();\n  %s = Pop();\n  do // (DO)\n  {\n",
                GetVariable(&vars, 0),
                GetVariable(&vars, 1));
            pline[ofs].flow = DO;
            ofs += 2;
        } else
        if (strcmp(s, "(/LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            if (pline[addr].flow != DO){fprintf(stderr, "Error: No do"); exit(1);}
            pline[addr].loopaddr = ofs;
            snprintf(pline[ofs].str, STRINGLEN,
                "%s += Pop();\n"
                "} while(%s<%s); // (/LOOP) 0x%04x\n\n",
                GetVariable(&vars, 0),
                GetVariable(&vars, 0),
                GetVariable(&vars, 1),
                par);
            RemoveLoopVariables(&vars);
            pline[ofs].flow = LOOP;
            ofs += 4;
        } else
        if (strcmp(s, "(LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            if (pline[addr].flow != DO){fprintf(stderr, "Error: No do"); exit(1);}
            pline[addr].loopaddr = ofs;
            snprintf(pline[ofs].str, STRINGLEN, "%s++;\n  } while(%s<%s); // (LOOP) 0x%04x\n\n",
                GetVariable(&vars, 0),
                GetVariable(&vars, 0),
                GetVariable(&vars, 1),
                par);
            RemoveLoopVariables(&vars);
            pline[ofs].flow = LOOP;
            ofs += 4;
        } else
        if (strcmp(s, "(+LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            if (pline[addr].flow != DO){fprintf(stderr, "Error: No do"); exit(1);}
            pline[addr].loopaddr = ofs;
            snprintf(pline[ofs].str, STRINGLEN,
                "int step = Pop();\n  %s += step;\n"
                "if (((step>=0) && (%s>=%s)) || ((step<0) && (%s<=%s))) break;\n"
                "} while(1); // (+LOOP) 0x%04x\n\n",
                GetVariable(&vars, 0),
                GetVariable(&vars, 0),
                GetVariable(&vars, 1),
                GetVariable(&vars, 0),
                GetVariable(&vars, 1),
                par);
            RemoveLoopVariables(&vars);
            pline[ofs].flow = LOOP;
            ofs += 4;
        } else
        if (strcmp(s, "I") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "Push(%s); // I\n", GetVariable(&vars, 0));
            ofs += 2;
        } else
        if (strcmp(s, "I'") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "Push(%s); // I'\n", GetVariable(&vars, 1));
            ofs += 2;
        } else
        if (strcmp(s, "J") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "Push(%s); // J\n", GetVariable(&vars, 2));
            ofs += 2;
        } else
        {
            pline[ofs].istrivialword = TRUE;
            pline[ofs].ovidx = currentovidx;
            int dofs = GetWordLength(ofs, e, currentovidx);
            int i;
            for(i=0; i<dofs; i++) pline[ofs+i].done = 1;
            ofs += dofs;
        }
    }
}

void InitParser()
{
    int i;
    memset(pline, 0, 0x10000*sizeof(LineDesc));
    for(i=0; i<0x10000; i++)
    {
        pline[i].str = malloc(STRINGLEN);
        pline[i].str[0] = 0;
        pline[i].initvarstr = NULL;
    }
    for(i=0; i<ndict; i++)
    {
        dict[i].nlabel = 0;
        dict[i].nloopvars = 0;
        dict[i].nstackvariables = 0;
        dict[i].doextern = 0;
    }
}

void SetWordHeader(int ovidx)
{
    int i, j;
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        for(j=dict[i].addr; j<dict[i].parp; j++) pline[j].done = 1;
        pline[dict[i].parp-2].iswordheader = TRUE;
    }
}

void ParseForthFunctions(int ovidx, int minaddr, int maxaddr)
{
    int i;
    SetWordHeader(ovidx);
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (dict[i].codep == CODECALL)
        {
            Variables vars = GetEmptyVariables();
            ParsePartFunction(dict[i].parp, minaddr, maxaddr, &dict[i], dict[i].ovidx, vars);
        }
        if (dict[i].codep == CODECASE)
        {
            ParseCaseFunction(minaddr, maxaddr, &dict[i], dict[i].ovidx);
        }
        if (dict[i].codep == CODERULE)
        {
            ParseRuleFunction(minaddr, maxaddr, &dict[i], dict[i].ovidx);
        }
    }
/* Find orphaned functions */
/*
    for(int i=minaddr; i<maxaddr-3; i++)
    {
        if (pline[i+0].done)
        if (!pline[i+1].done)
        if (!pline[i+2].done)
        if (Read16(i+1) == CODECALL)
        {
            DICTENTRY *e = GetDictEntry(i+3, ovidx);
            ParsePartFunction(e->parp, minaddr, maxaddr, e, e->ovidx, 0);
        }
    }
*/
    SetWordHeader(ovidx);
}

void ParseAsmFunctions(int ovidx, int minaddr, int maxaddr)
{
    int i;
    for(i=0; i<ndict; i++)
    {
        if ((dict[i].ovidx != ovidx) && (ovidx != -1)) continue;
        //printf("disasm dict entry %i\n", i);
        DisasmRange(dict[i].codep, 0x100000, ovidx, minaddr, maxaddr);
    }
}
