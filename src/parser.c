#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"global.h"
#include"parser.h"
#include"extract.h"
#include"utils.h"
#include"../emul/cpu.h"
#include"disasm/debugger.h"
#include"postfix2infix.h"

LineDesc pline[0x10000];

// -----------------------------------------

Variables GetEmptyVariables()
{
    Variables vars;
    memset(&vars, 0, sizeof(Variables));
    return vars;
}

char* GetVariable(Variables *vars, WORD *e, int stackidxfromtop)
{
    static char *def = "h";
    static char *default1 = "unknown";
    static char *default2 = "callp1";
    static char *default3 = "callp0";
    int varidx;
    int stackidx = vars->nstack - 1 - stackidxfromtop;
    if (stackidx < 0)
    {
        return def;
    }
    varidx = vars->stack[stackidx];
    if (varidx >= 0) return &e->vars[varidx][0];

    if (varidx == -1) return default1;
    if (varidx == -2) return default2;
    if (varidx == -3) return default3;
}

void AddLoopVariables(Variables *vars, WORD *e)
{
    e->vars[e->nvars+0][0] = 'i' + e->nloopvars;
    e->vars[e->nvars+1][0] = 'i' + e->nloopvars;
    strcpy(&e->vars[e->nvars+1][1], "max");
    e->nloopvars++;

    vars->stack[vars->nstack+0] = e->nvars+1;
    vars->stack[vars->nstack+1] = e->nvars+0;
    vars->nstack += 2;

    e->nvars += 2;
}

void RemoveLoopVariables(Variables *vars)
{
    if (vars->nstack < 2)
    {
        fprintf(stderr, "Error: no loop variables found\n");
        exit(1);
    }
    vars->nstack -= 2;
}

void AddVariable(Variables *vars, WORD *e)
{
    e->vars[e->nvars][0] = 'a' + e->nstackvariables;
    e->nstackvariables++;

    vars->stack[vars->nstack] = e->nvars;
    vars->nstack++;

    e->nvars++;
}

void AddUnnamedVariable(Variables *vars, WORD *e, int idx)
{
    vars->stack[vars->nstack] = idx;
    vars->nstack++;
}

void RemoveVariable(Variables *vars)
{
    if (vars->nstack < 1)
    {
        fprintf(stderr, "Error: no variables found\n");
        exit(1);
        return;
    }
    vars->nstack--;
}

// -----------------------------------------

// Analyzes strings such as [ABCD], for example "mov ax, [0B3F]"
void AnalyzeDisasmString(char* buffer, int ovidx, int currentoffset)
{
    int n = strlen(buffer);
    for(int i=0; i<n-5; i++)
    {
        if (!((buffer[i] == '[') && (buffer[i+5] == ']'))) continue;
        int offset = (int)strtol(&buffer[i+1], NULL, 16);
        if ((Read16(offset-2) == CODEPOINTER) || (Read16(offset-2) == CODECONSTANT))
        {
            GetWordByAddr(offset, ovidx);
            pline[currentoffset].asmaccessesword = offset;
        } else
        if (Read16(offset-4) == CODEPOINTER)
        {
            GetWordByAddr(offset-2, ovidx);
            pline[currentoffset].asmaccessesword = offset-2;
        } else
        {
            //printf("%04x\n", offset);
        }
    }
}


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

        AnalyzeDisasmString(buffer, ovidx, currentoffset);

        if (Read8(currentoffset) == 0xc3) return 0; // ret
        if (Read8(currentoffset) == 0xcb) return 0; // retf
        if (Read8(currentoffset) == 0xcf) return 0; // iret

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

            // the assembler is usually also written in forth and is a word
            if (Read16(addr-2) == CODEPOINTER) GetWordByAddr(addr, ovidx);

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

int GetWordInstructionLength(int addr, WORD *e, int ovidx)
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
    if (e->wordp == wordpRINT)
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
    return 2;
}

int SetWordExtern(int addr, WORD *e, int ovidx)
{
    if (e->ovidx == -1) e->isextern = 1;
    if (e->codep > (0x100+FILESTAR0SIZE)) e->isextern = 1;
    return 2;
}

// unsafe test to find closest dict entry
WORD* FindClosestFunction(unsigned short int addr, int ovidx)
{
    int i = 0;
    int dist = 0xFFFF;
    WORD *result = NULL;
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].wordp > addr) continue;
        if (vocabulary[i].codep != CODECALL) continue;
        if ((vocabulary[i].ovidx != ovidx) && (vocabulary[i].ovidx != -1)) continue;

        if (dist > (addr-vocabulary[i].wordp)) {
            result = &vocabulary[i];
            dist = addr-vocabulary[i].wordp;
        }
    }

    if (result == NULL) {
        fprintf(stderr, "Error: Cannot find function header at offset 0x%04x\n", addr);
        exit(1);
    }

    //test if there is another function in between not yet analyzed
    WORD *result2 = result;
    for(i=result->wordp; i<addr-2; i+=2) {
        if (Read16(i) == CODECALL) {
            result2 = GetWordByAddr(i+2, ovidx);
        }
    }

    return result2;
}

// TODO: Analysis of EXECUTE-RULE and EXPERT
// Execute ruls uses a kind of cache which can be reset with the function DISTRACT
void ParseRuleFunction(int minaddr, int maxaddr, WORD *d, int ovidx)
{
    int i = 0;
    int j = 0;
    unsigned char RULEIM = Read8(d->wordp+0);
    unsigned char CONDLIM = Read8(d->wordp+1);
    unsigned char RULECNT = Read8(d->wordp+2);
    unsigned short RULEARRp = d->wordp+3;
    unsigned short CONDARRp = RULEARRp + 2*RULEIM;

    // following array has size of CONDLIM
    // flag array, seems to act as a cache for the function results
    // Set by the function DISTRACT
    unsigned short CFLGARRp = CONDARRp + 2*CONDLIM;

    pline[d->wordp+0].done = 1;
    pline[d->wordp+1].done = 1;
    pline[d->wordp+2].done = 1;
    pline[d->wordp+0].str = malloc(STRINGLEN);
    snprintf(pline[d->wordp+0].str, STRINGLEN, "\nvoid %s() // %s rule\n{\n  int b;\n\n", Forth2CString(GetWordName(d)), GetWordName(d));

    /*
    0xeab7: WORD 'LIFE-SIM' codep=0xb869 wordp=0xeac4
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
    0xeaf8: WORD '?REDUCE-PO' codep=0xb869 wordp=0xeb07
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

    //printf("0x%04x: %20s RULEIM:%2i CONDLIM:%2i RULECNT:%2i\n", d->wordp, GetWordName(d), RULEIM, CONDLIM, RULECNT);

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
        pline[rulep+1].word = Read16(rulep + 1);

        WORD *e = GetWordByAddr(p, ovidx);
        if (e == NULL)
        {
            fprintf(stderr, "Error: No invalid dict entry allowed here");
            exit(1);
        }
        char ifthen[STRINGLEN*2];
        char func[STRINGLEN*2];

        SetWordExtern(rulep + 1, e, e->ovidx);
        GetMacro(e->wordp, e, d, func, e->ovidx);
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
            pline[p+0].word = Read16(p);
            WORD *e = GetWordByAddr(Read16(p), ovidx);
            if (e == NULL)
            {
                fprintf(stderr, "Error: No invalid dict entry allowed here");
                exit(1);
            }
            SetWordExtern(p, e, e->ovidx);
            GetMacro(p, e, d, func, e->ovidx);
            strcat(try, "  ");
            strcat(try, func);
            // TODO, might be the exchanged
            if (flag) strcat(try, "  b = b && Pop();\n"); else strcat(try, "  b = b && !Pop();\n");
        }
        pline[RULEARRp + i*2].str = malloc(strlen(try)+STRINGLEN);
        sprintf(pline[RULEARRp + i*2].str, "  b = 1;\n%s%s", try, ifthen);
    }
}

void ParseCaseFunction(int minaddr, int maxaddr, WORD *d, int ovidx)
{
    int par = d->wordp;
    int ofs = d->wordp;
    char *s = GetWordName(d);
    pline[ofs].str = (char*)malloc(4096);
    pline[ofs].str[0] = 0;
    int n = Read16(par);
    pline[ofs+0].done = 1;
    pline[ofs+1].done = 1;
    int i;
    char temp[256];
    pline[ofs-1].str = malloc(STRINGLEN);
    snprintf(pline[ofs-1].str, STRINGLEN, "\nvoid %s() // %s\n{\n", Forth2CString(s), s);
    sprintf(pline[ofs].str, "  switch(Pop()) // %s\n  {\n", s);
    for(i=0; i<n; i++)
    {
        WORD *e = GetWordByAddr(Read16(par + i*4 + 6), ovidx);
        pline[par + i*4 + 6].word = Read16(par + i*4 + 6);
        pline[par + i*4 + 6].done = 1;
        pline[par + i*4 + 7].done = 1;

        char ret[STRINGLEN];
        SetWordExtern(par + i*4 + 6, e, ovidx);
        GetMacro(par + i*4 + 6, e, d, ret, ovidx);
        sprintf(temp, "  case %i:\n    %s    break;\n", Read16(par + i*4 + 4), ret);
        pline[par + i*4 + 4].done = 1;
        pline[par + i*4 + 5].done = 1;
        strcat(pline[ofs].str, temp);
    }
    WORD *e = GetWordByAddr(Read16(par + 2), ovidx);
    pline[par + 2].word = Read16(par + 2);
    pline[par + 2].done = 1;
    pline[par + 3].done = 1;

    char ret[STRINGLEN];
    SetWordExtern(par + 2, e, ovidx);
    GetMacro(par + 2, e, d, ret, ovidx);
    sprintf(temp, "  default:\n    %s    break;\n", ret);
    strcat(pline[ofs].str, temp);
    strcat(pline[ofs].str, "\n  }\n}\n");
}

void ParsePartFunction(int offset, int minaddr, int maxaddr, WORD *d, int ovidx, Variables vars)
{
    if (d == NULL)
    {
        d = FindClosestFunction(offset, ovidx);
        AddUnnamedVariable(&vars, d, -1);
    }

    if (d->codep != CODECALL)
    {
        fprintf(stderr, "Error: not a Forth function call");
        exit(1);
    }

    if (offset == d->wordp) // is head of function
    {
        AddUnnamedVariable(&vars, d, -2);
        AddUnnamedVariable(&vars, d, -3);
    }

    while(1)
    {
        if (offset < minaddr) return;
        if (offset > maxaddr) return;
        if (pline[offset].done) return;

        pline[offset].word = Read16(offset)+2;
        int par = Read16(offset)+2;
        pline[offset+0].done = 1;
        pline[offset+1].done = 1;
        WORD *e = GetWordByAddr(par, ovidx);

        if (e == NULL)
        {
            pline[offset].str = malloc(STRINGLEN);
            sprintf(pline[offset].str, "W%04X(); // Unknown overlay function\n", par);
            offset += 2;
            continue;
        }

        char *s = GetWordName(e);

        if (offset < 0x100+FILESTAR0SIZE)
        if (ovidx != -1)
        if (par >= maxaddr)
        {
            e->isentry = 1;
            pline[offset].str = malloc(STRINGLEN);
            snprintf(pline[offset].str, STRINGLEN, "%s(); // Overlay %s\n", Forth2CString(s), overlays[ovidx].name);
            offset += 2;
            continue;
        }

        // add new word which is executed to the list
        if (e->codep == CODEEXEC)
        {
            int par = Read16(Read16(e->wordp)+REGDI);
            GetWordNameByAddr(par, ovidx);
        }

        // find words, which are executed by this words
        if (strcmp(s, "MODULE") == 0 || strcmp(s, "EACH") == 0 || strcmp(s, "ALL") == 0)
        {
            if (Read16(Read16(offset-4)) == CODELIT)
                GetWordNameByAddr(Read16(offset-2), ovidx);
        }

        if (strcmp(s, "DOTASKS") == 0)
        {
            int codep1 = Read16(Read16(offset-4));
            int codep2 = Read16(Read16(offset-8));
            int codep3 = Read16(Read16(offset-12));
            if ((codep1 == CODELIT) && (codep2 == CODELIT) && (codep3 == CODELIT))
            {
                int c1 = Read16(offset-2);
                int c2 = Read16(offset-6);
                int c3 = Read16(offset-10);
                char *s1 = NULL, *s2 = NULL, *s3 = NULL;
                if (c1 != 0) s1 = GetWordNameByAddr(Read16(offset-2), ovidx);
                if (c2 != 0) s2 = GetWordNameByAddr(Read16(offset-6), ovidx);
                if (c3 != 0) s3 = GetWordNameByAddr(Read16(offset-10), ovidx);
                pline[offset].str = malloc(STRINGLEN);
                snprintf(pline[offset].str, STRINGLEN, "DOTASKS(%s, %s, %s);\n", Forth2CString(s1), Forth2CString(s2), Forth2CString(s3));
            } else
            if ((codep1 == CODELIT) && (codep2 != CODELIT) && (codep3 != CODELIT)) // for DOTASKS in SHIPBUTTONS
            {
                // TODO: a number is missing here: Look at SHIPBUTTONS.c
                int c1 = Read16(offset-2);
                int c3 = Read16(offset-8);
                int c4 = Read16(offset-12);
                int c5 = Read16(offset-16);

                char* s1 = GetWordNameByAddr(c1, ovidx);
                char* s3 = GetWordNameByAddr(c3, ovidx);
                char* s4 = GetWordNameByAddr(c4, ovidx);
                char* s5 = GetWordNameByAddr(c5, ovidx);
                pline[offset].str = malloc(STRINGLEN);
                snprintf(pline[offset].str, STRINGLEN, "DOTASKS2(%s, %s, %s, %s);\n", Forth2CString(s1), Forth2CString(s3), Forth2CString(s4), Forth2CString(s5));
            } else
            {
                fprintf(stderr, "Error: DOTASKS without specifying tasks in ov:%i\n", ovidx);
                exit(1);
            }
            offset += 2;
        } else
        if (strcmp(s, "(;CODE)") == 0) // maybe inlined code
        {
            pline[offset].str = malloc(STRINGLEN);
            snprintf(pline[offset].str, STRINGLEN, "CODE(); // %s inlined assembler code\n", s);
            offset += 2;
            DisasmRange(offset, 0x100000, ovidx, minaddr, maxaddr);
            return;
        } else
        if (strcmp(s, "COMPILE") == 0) // maybe inlined code
        {
            pline[offset].str = malloc(STRINGLEN);
            snprintf(pline[offset].str, STRINGLEN, "%s(0x%04x); // compile?\n", s, Read16(offset+2));
            pline[offset+2].done = 1;
            pline[offset+3].done = 1;
            offset += 4;
            //return;
        } else
        if (e->codep == CODELOADOVERLAY) // This code loads the overlay
        {
            if (ovidx != -1)
            {
                fprintf(stderr, "Error: Change of overlay inside overlay\n");
                exit(1);
            }

            unsigned short startaddress = Read16(par);
            int i=0;
            for(i=0; overlays[i].name != NULL; i++)
            {
                if (overlays[i].startaddress != startaddress) continue;
                ovidx = i;
            }
            if (ovidx == -1)
            {
                fprintf(stderr, "Error: Cannot find overlay\n");
                exit(1);
            }
            pline[offset].str = malloc(STRINGLEN);
            snprintf(pline[offset].str, STRINGLEN, "LoadOverlay(%s); // %s\n", Forth2CString(s), s);
            offset += 2;
        } else
        if (strcmp(s, "EXIT") == 0)
        {
            AddFlow(&pline[offset], FUNCEND);
            if (pline[offset+2].labelid != 0)
            {
                AddFlow(&pline[offset], EXIT);
            }
            offset += 2;
            return;
        } else
        if (strcmp(s, "BRANCH") == 0)
        {
            par = Read16(offset + 2);
            pline[offset+2].done = 1;
            pline[offset+3].done = 1;
            int addr = (offset + 2 + par)&0xFFFF;
            if (Read16(Read16(addr)) == CODEEXIT)
            {
                pline[offset].gotoaddr = -1;
                AddFlow(&pline[offset], EXIT);
            } else
            {
                if (pline[addr].labelid == 0)
                {
                    pline[addr].labelid = ++d->nlabel;
                }
                pline[offset].gotoaddr = addr;
                AddFlow(&pline[offset], GOTO);
            }
            ParsePartFunction(addr, minaddr, maxaddr, d, ovidx, vars);

            if (!pline[offset+4].done && !pline[offset+4].labelid)
            {
                WORD *next = GetWordByAddr(Read16(offset+4)+2, ovidx);
                if (strcmp(next->r, "EXIT") == 0)
                {
                    pline[offset+4].done = 1;
                    pline[offset+5].done = 1;
                    pline[offset+4].word = Read16(offset+4)+2;
                    AddFlow(&pline[offset+4], FUNCEND);
                } else
                {
                    fprintf(stderr, "Error: unexpected continuance of function after branch");
                    exit(1);
                }
            }
            return;
            offset += 4;
        } else
        if (strcmp(s, "0BRANCH") == 0)
        {
            par = Read16(offset+2);
            pline[offset+2].done = 1;
            pline[offset+3].done = 1;
            int addr = (offset + 2 + par)&0xFFFF;
            if (Read16(Read16(addr)) == CODEEXIT)
            {
                pline[offset].gotoaddr = -1;
                AddFlow(&pline[offset], IFEXIT);
            } else
            {
                if (pline[addr].labelid == 0)
                {
                    pline[addr].labelid = ++d->nlabel;
                }
                pline[offset].gotoaddr = addr;
                AddFlow(&pline[offset], IFGOTO);
            }
            ParsePartFunction(offset+4, minaddr, maxaddr, d, ovidx, vars);
            ParsePartFunction(addr, minaddr, maxaddr, d, ovidx, vars);
            offset += 4;
        } else
        if (strcmp(s, ">R") == 0) // doesn't work for function (EXPECT)
        {
            AddVariable(&vars, d);
            pline[offset].variableidx = vars.stack[vars.nstack-1];
            pline[offset].istrivialword = TRUE;
            offset += 2;
        } else
        if (strcmp(s, "R>") == 0)
        {
            pline[offset].variableidx = vars.stack[vars.nstack-1];
            pline[offset].istrivialword = TRUE;
            RemoveVariable(&vars);
            offset += 2;
        } else
        if (strcmp(s, "R@") == 0)
        {
            pline[offset].variableidx = vars.stack[vars.nstack-1];
            pline[offset].istrivialword = TRUE;
            offset += 2;
        } else
        if (strcmp(s, "LEAVE") == 0)
        {
            pline[offset].variableidx = vars.stack[vars.nstack-1];
            pline[offset].istrivialword = TRUE;
            offset += 2;
        } else
        if (strcmp(s, "(DO)") == 0)
        {
            AddLoopVariables(&vars, d);
            pline[offset].variableidx = vars.stack[vars.nstack-1];
            AddFlow(&pline[offset], DO);
            offset += 2;
        } else
        if (strcmp(s, "(/LOOP)") == 0)
        {
            par = Read16(offset + 2);
            pline[offset+2].done = 1;
            pline[offset+3].done = 1;
            int addr = (offset + par)&0xFFFF;
            if (!ContainsFlow(&pline[addr], DO)) { fprintf(stderr, "Error: No Do\n"); exit(1); }
            pline[addr].loopaddr = offset;
            pline[offset].variableidx = vars.stack[vars.nstack-1];
            RemoveLoopVariables(&vars);
            AddFlow(&pline[offset], LOOP);
            offset += 4;
        } else
        if (strcmp(s, "(LOOP)") == 0)
        {
            par = Read16(offset + 2);
            pline[offset+2].done = 1;
            pline[offset+3].done = 1;
            int addr = (offset + par)&0xFFFF;
            if (!ContainsFlow(&pline[addr], DO)) { fprintf(stderr, "Error: No Do\n"); exit(1); }
            pline[addr].loopaddr = offset;
            pline[offset].variableidx = vars.stack[vars.nstack-1];
            RemoveLoopVariables(&vars);
            AddFlow(&pline[offset], LOOP);
            offset += 4;
        } else
        if (strcmp(s, "(+LOOP)") == 0)
        {
            par = Read16(offset + 2);
            pline[offset+2].done = 1;
            pline[offset+3].done = 1;
            int addr = (offset + par)&0xFFFF;
            if (!ContainsFlow(&pline[addr], DO)) {fprintf(stderr, "Error: No Do\n"); exit(1);}
            pline[addr].loopaddr = offset;
            pline[offset].variableidx = vars.stack[vars.nstack-1];
            RemoveLoopVariables(&vars);
            AddFlow(&pline[offset], LOOP);
            offset += 4;
        } else
        if (strcmp(s, "I") == 0)
        {
            pline[offset].variableidx = vars.stack[vars.nstack-1];
            pline[offset].istrivialword = TRUE;
            offset += 2;
        } else
        if (strcmp(s, "I'") == 0)
        {
            pline[offset].variableidx = vars.stack[vars.nstack-2];
            pline[offset].istrivialword = TRUE;
            offset += 2;
        } else
        if (strcmp(s, "J") == 0)
        {
            pline[offset].variableidx = vars.stack[vars.nstack-3];
            pline[offset].istrivialword = TRUE;
            offset += 2;
        } else
        {
            pline[offset].istrivialword = TRUE;
            pline[offset].ovidx = ovidx;
            int doffset = GetWordInstructionLength(offset, e, ovidx);
            for(int i=0; i<doffset; i++) pline[offset+i].done = 1;
            offset += doffset;
        }
    }
}

void InitParser()
{
    int i;
    memset(pline, 0, 0x10000*sizeof(LineDesc));
    for(i=0; i<nwords; i++)
    {
        vocabulary[i].nlabel = 0;
        vocabulary[i].nloopvars = 0;
        vocabulary[i].nstackvariables = 0;
        vocabulary[i].isextern = 0;
    }
}

void SetWordHeader(int ovidx)
{
    int i, j;
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].ovidx != ovidx) continue;
        for(j=vocabulary[i].addr; j<vocabulary[i].wordp; j++) pline[j].done = 1;
        pline[vocabulary[i].wordp-2].iswordheader = TRUE;
    }
}

void SetStructDone(int ovidx)
{
    int i;
    for(i=0; i<nwords; i++)
    {
        int wordp = vocabulary[i].wordp;
        if (vocabulary[i].ovidx != ovidx) continue;
        if (vocabulary[i].codep == CODELOADDATA)
        {
            for(int i=0; i<=5; i++) pline[wordp+i].done = 1;
        }
        if (vocabulary[i].codep == CODEIFIELD)
        {
            for(int i=0; i<=2; i++) pline[wordp+i].done = 1;
        }
        if (vocabulary[i].codep == CODECONSTANT)
        {
            pline[wordp+0].done = TRUE;
            pline[wordp+1].done = TRUE;
        }
        if (vocabulary[i].codep == CODELOADOVERLAY)
        {
            pline[wordp+0].done = TRUE;
            pline[wordp+1].done = TRUE;
        }
        if (vocabulary[i].codep == CODEEXEC)
        {
            pline[wordp+0].done = TRUE;
            pline[wordp+1].done = TRUE;
        }
        if (vocabulary[i].codep == CODEGETCOLOR)
        {
            pline[wordp+0].done = TRUE;
        }
        if (vocabulary[i].codep == CODEPUSH2WORDS)
        {
            for(int i=0; i<=3; i++) pline[wordp+i].done = 1;
        }
        if (vocabulary[i].codep == CODE2DARRAY)
        {
            for(int i=0; i<=7; i++) pline[wordp+i].done = 1;
        }
    }
}

void FindOrphanWords(int minaddr, int maxaddr, int ovidx);

void ParseForthFunctions(int ovidx, int minaddr, int maxaddr)
{
    int i;
    SetWordHeader(ovidx);
    SetStructDone(ovidx);
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].ovidx != ovidx) continue;
        if (vocabulary[i].codep == CODECALL)
        {
            Variables vars = GetEmptyVariables();
            ParsePartFunction(vocabulary[i].wordp, minaddr, maxaddr, &vocabulary[i], vocabulary[i].ovidx, vars);
        }
        if (vocabulary[i].codep == CODECASE)
        {
            ParseCaseFunction(minaddr, maxaddr, &vocabulary[i], vocabulary[i].ovidx);
        }
        if (vocabulary[i].codep == CODERULE)
        {
            ParseRuleFunction(minaddr, maxaddr, &vocabulary[i], vocabulary[i].ovidx);
        }
    }
    SetWordHeader(ovidx);
    SetStructDone(ovidx);
    FindOrphanWords(minaddr, maxaddr, ovidx);
}

void FindOrphanWords(int minaddr, int maxaddr, int ovidx)
{

// STEP 1: nanually found words
#ifdef STARFLT1
    int j;
    GetWordByAddr(0x8a2d, -1);
    GetWordByAddr(0x63a3, -1); // not sure about this
    switch(ovidx)
    {
        /*
        case 0x2F: // COMBAT-OV
            GetWordByAddr(0xe460-4, 0x2F); // not sure about this
            break;
        */
        case 0x15:  // COMMSPEC-OV
            for(j=0; j<4; j++) GetWordByAddr(Read16(0xf454+1+j*2), 0x15);
            for(j=0; j<5; j++) GetWordByAddr(Read16(0xf45f+1+j*2), 0x15);
            for(j=0; j<3; j++) GetWordByAddr(Read16(0xf46c+1+j*2), 0x15);
            for(j=0; j<1; j++) GetWordByAddr(Read16(0xf475+1+j*2), 0x15);
            for(j=0; j<1; j++) GetWordByAddr(Read16(0xf47a+1+j*2), 0x15);
            for(j=0; j<1; j++) GetWordByAddr(Read16(0xf47f+1+j*2), 0x15);
            break;
    }
#else
    if (ovidx == 0x18) GetWordByAddr(0xf40a, 0x18); // COMMSPEC-OV
    if (ovidx == 0x39) GetWordByAddr(0xe4c2, 0x39); // BARTER
#endif

    SetWordHeader(ovidx);
    SetStructDone(ovidx);

    // STEP 2: some constants might point to words. So check all of them.
    for(int i=minaddr; i<maxaddr-3; i++)
    {
        if (!pline[i].word) continue;
        if (!(Read16(Read16(i)) == CODELIT)) continue;

        if ((Read16(Read16(i+2)-2)) == CODECALL)
        {
            WORD *e = GetWordByAddr(Read16(i+2), ovidx);
            Variables vars = GetEmptyVariables();
            ParsePartFunction(e->wordp, minaddr, maxaddr, e, e->ovidx, vars);
        }
        if ((Read16(Read16(i+2)-2)) == CODEPOINTER)
            GetWordByAddr(Read16(i+2), ovidx);

        if ((Read16(Read16(i+2)-2)) == CODECONSTANT)
            GetWordByAddr(Read16(i+2), ovidx);

    }

    SetWordHeader(ovidx);
    SetStructDone(ovidx);

    // STEP 3: find word, which start after the end of other words
    while(1)
    {
        int nwordstemp = nwords;

        for(int i=minaddr; i<maxaddr-3; i++)
        {
            if (pline[i+1].done || pline[i+2].done)
            {

              // search for very special orphan words, e. g.
              // 0xf03a: db 0x3a 0x20 0x29 0x1d 0x3a 0x20 ': ) : '
              //                      ^^^^^^^^^
              if ((Read16(i+1) == CODEPOINTER) && (!pline[i+1+4].done) && (!pline[i+1+5].done))
              {
                if (Read16(i+1+4) == CODEPOINTER)
                {
                    WORD *e = GetWordByAddr(i+3+4, ovidx);
                    e->isorphan = 1;
                }
                if (Read16(i+1+4) == CODECONSTANT)
                {
                    WORD *e = GetWordByAddr(i+3+4, ovidx);
                    e->isorphan = 1;
                }
                if (Read16(i+1+4) == CODECALL)
                {
                    WORD *e = GetWordByAddr(i+3+4, ovidx);
                    e->isorphan = 1;
                    Variables vars = GetEmptyVariables();
                    ParsePartFunction(e->wordp, minaddr, maxaddr, e, e->ovidx, vars);
                }
                if (Read16(i+1+6) == CODECALL)
                {
                    WORD *e = GetWordByAddr(i+3+6, ovidx);
                    e->isorphan = 1;
                    Variables vars = GetEmptyVariables();
                    ParsePartFunction(e->wordp, minaddr, maxaddr, e, e->ovidx, vars);
                }
              }

              continue;
            }
            if ((!(i==minaddr+1)) && (!pline[i+0].done)) continue;

            if (Read16(i+1) == CODECALL)
            {
                WORD *e = GetWordByAddr(i+3, ovidx);
                e->isorphan = 1;
                Variables vars = GetEmptyVariables();
                ParsePartFunction(e->wordp, minaddr, maxaddr, e, e->ovidx, vars);
            }
            if (Read16(i+1) == CODEGETCOLOR)
            {
                WORD *e = GetWordByAddr(i+3, ovidx);
                e->isorphan = 1;
            }
            if (Read16(i+1) == CODELOADDATA)
            {
                WORD *e = GetWordByAddr(i+3, ovidx);
                e->isorphan = 1;
            }
            if (Read16(i+1) == CODEPOINTER)
            {
                WORD *e = GetWordByAddr(i+3, ovidx);
                e->isorphan = 1;
            }
            if (Read16(i+1) == CODECONSTANT)
            {
                WORD *e = GetWordByAddr(i+3, ovidx);
                e->isorphan = 1;
            }
            if (Read16(i+1) == CODEIFIELD)
            {
                WORD *e = GetWordByAddr(i+3, ovidx);
                e->isorphan = 1;
            }
            if (Read16(i+1) == CODE2DARRAY)
            {
                WORD *e = GetWordByAddr(i+3, ovidx);
                e->isorphan = 1;
            }
            if (Read16(i+1) == CODEEXEC)
            {
                WORD *e = GetWordByAddr(i+3, ovidx);
                e->isorphan = 1;
            }
        }
        SetWordHeader(ovidx);
        SetStructDone(ovidx);
        if (nwordstemp == nwords) break;
    }

    SetWordHeader(ovidx);
    SetStructDone(ovidx);
}

void ParseAsmFunctions(int ovidx, int minaddr, int maxaddr)
{
    int i;
    for(i=0; i<nwords; i++)
    {
        if ((vocabulary[i].ovidx != ovidx) && (ovidx != -1)) continue;
        //printf("disasm dict entry %i\n", i);
        DisasmRange(vocabulary[i].codep, 0x100000, ovidx, minaddr, maxaddr);
    }
    if (ovidx == -1)
    {
        DisasmRange(0x100, 0x100000, ovidx, minaddr, maxaddr); // start of program
        DisasmRange(0x1d1, 0x100000, ovidx, minaddr, maxaddr); // timer interrupt maybe
    }
}
