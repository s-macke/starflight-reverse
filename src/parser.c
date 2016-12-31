#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"global.h"
#include"parser.h"
#include"extract.h"
#include"utils.h"
#include"../emul/cpu.h"


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


int PutEasyMacro(unsigned short addr, DICTENTRY *e, char *ret, int currentovidx)
{
    ret[0] = 0;
    char *s = GetWordName(e);

    if (e->codep == CODELIT) // constant number
    {
        int value = Read16(addr + 2);
        int i=0;
        for(i=0; i<ndict; i++)
        {
            if ((dict[i].ovidx == -1) || (dict[i].ovidx == currentovidx))
            if (dict[i].parp == value)
            {
                snprintf(ret, STRINGLEN, "  Push(0x%04x); // probable '%s'\n", value, GetWordName(&dict[i]));
                break;
            }
        }
        if (ret[0] == 0)
        {
            snprintf(ret, STRINGLEN, "  Push(0x%04x);\n", value);
        }
        return 4;
    }
    if (e->codep == CODE2LIT) // constant number
    {
        snprintf(ret, STRINGLEN, "  Push(0x%04x); Push(0x%04x);\n", Read16(addr + 2), Read16(addr + 4));
        return 6;
    }
    if (e->codep == CODEPOINTER) // pointer to variable or table
    {
        snprintf(ret, STRINGLEN, "  Push(pp_%s); // %s\n", Forth2CString(s), s);
        return 2;
    }
    if (e->codep == CODECONSTANT)
    {
        snprintf(ret, STRINGLEN, "  Push(cc_%s); // %s\n", Forth2CString(s), s); // TODO: check
        return 2;
    }
    if (e->codep == CODEDI) // load from fixed table?
    {
        snprintf(ret, STRINGLEN, "  Push(tt_%s); // %s\n", Forth2CString(s), s); // TODO: check4
        return 2;
    }
    if (e->codep == CODELOADDATA)
    {
        int addr = Read16(e->parp+4);
        snprintf(ret, STRINGLEN, "  LoadData(\"%s\"); // from '%s'\n", s, FindDirEntry(addr));
        return 2;
    }
    if (e->codep == CODETABLE)
    {
        snprintf(ret, STRINGLEN, "  GetTableEntry(%s);\n", s);
        return 2;
    }
    if (e->codep == CODESETCOLOR)
    {
        snprintf(ret, STRINGLEN, "  SetColor(\"%s\");\n", s);
        return 2;
    }
    if (e->codep == CODEFUNC3)
    {
        snprintf(ret, STRINGLEN, "  Func3(\"%s\");\n", s);
        return 2;
    }
    if (e->codep == CODEPUSH2WORDS)
    {
        snprintf(ret, STRINGLEN, "  Push2Words(\"%s\");\n", s);
        return 2;
    }
    if (e->codep == CODEFUNC5)
    {
        snprintf(ret, STRINGLEN, "  Func5(\"%s\");\n", s);
        return 2;
    }
    if (e->codep == CODEFUNC6)
    {
        snprintf(ret, STRINGLEN, "  Func6(\"%s\");\n", s);
        return 2;
    }
    if (e->codep == CODESETVOCABULARY)
    {
        snprintf(ret, STRINGLEN, "  SetVocabulary(\"%s\");\n", s);
        return 2;
    }
    if (e->codep == CODEIFIELD)
    {
        snprintf(ret, STRINGLEN, "  Push(0x%04x); // IFIELD(%s)\n", IFIELDOFFSET + Read8(e->parp+1), s);
        //snprintf(pline[ofs].str, STRINGLEN, "  IFIELD(%s);\n", s);
        return 2;
    }
    if (e->codep == CODEFUNC9)
    {
        snprintf(ret, STRINGLEN, "  Func9(\"%s\");\n", s);
        return 2;
    }
    if (e->codep == CODECASE)
    {
        snprintf(ret, STRINGLEN, "  %s(); // %s case\n", Forth2CString(s), s);
        return 2;
    }
    if (e->codep == CODEARRAY)
    {/*
        unsigned short ds = Read16(par + 6);
        unsigned short bx = Read16(par + 4);
        unsigned short bx = bx + (Pop()<<1);
        unsigned short cx = Read16(ds, bx) + Pop();
        Push(ds);
        Push(dx);
        */
        snprintf(ret, STRINGLEN, "  ReadArray(Read16(0x%04x+6), 0x%04x); // %s\n", e->parp, Read16(e->parp + 4), s);
        return 2;
    }
    if (e->codep == CODEFUNC12)
    {
        snprintf(ret, STRINGLEN, "  Func12(\"%s\");\n", s);
        return 2;
    }
    if (e->codep == CODERULE)
    {
        snprintf(ret, STRINGLEN, "  Rule(%s);\n", s);
        return 2;
    }
    if (e->codep == CODEEXEC)
    {
        int par = Read16(Read16(e->parp)+REGDI);
        snprintf(ret, STRINGLEN, "  Exec(%s); // call of word 0x%04x '%s'\n",
            s, par, GetDictWord(par, currentovidx));
        return 2;
    }
    if (strcmp(s, "0") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(0); // 0\n");
        return 2;
    }
    if (strcmp(s, "1") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(1); // 1\n");
        return 2;
    }
    if (strcmp(s, "2") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(2); // 2\n");
        return 2;
    }
    if (strcmp(s, "0=") == 0)
    {
        snprintf(ret, STRINGLEN, "  if (Pop() == 0) Push(1); else Push(0); // 0=\n");
        return 2;
    }
    if (strcmp(s, "OR") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() | Pop()); // OR\n");
        return 2;
    }
    if (strcmp(s, "AND") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() & Pop()); // AND\n");
        return 2;
    }
    if (strcmp(s, "XOR") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() ^ Pop()); // XOR\n");
        return 2;
    }
    if (strcmp(s, "=") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push((Pop()==Pop())?1:0); // =\n");
        return 2;
    }
    if (strcmp(s, "+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() + Pop()); // +\n");
        return 2;
    }
    if (strcmp(s, "*") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() * Pop()); // *\n");
        return 2;
    }
    if (strcmp(s, "NEGATE") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(-Pop()); // NEGATE\n");
        return 2;
    }
    if (strcmp(s, "NOT") == 0)
    {
        snprintf(ret, STRINGLEN, "  if (Pop() == 0) Push(1); else Push(0); // NOT\n");
        return 2;
    }
    if (strcmp(s, "DROP") == 0)
    {
        snprintf(ret, STRINGLEN, "  Pop(); // DROP\n");
        return 2;
    }
    if (strcmp(s, "2DROP") == 0)
    {
        snprintf(ret, STRINGLEN, "  Pop(); Pop();// 2DROP\n");
        return 2;
    }
    if (strcmp(s, "2*") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()*2); // 2*\n");
        return 2;
    }
    if (strcmp(s, "3+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()+3); // 3+\n");
        return 2;
    }
    if (strcmp(s, "1+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()+1); // 1+\n");
        return 2;
    }
    if (strcmp(s, "2+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()+2); // 2+\n");
        return 2;
    }
    if (strcmp(s, "1-") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()-1); // 1-\n");
        return 2;
    }
    if (strcmp(s, "2-") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()-2); // 2-\n");
        return 2;
    }
    if (strcmp(s, "16/") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()>>4); // 16/\n"); // TODO check for signed and unsigned
        return 2;
    }
    if (strcmp(s, "2/") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()>>1); // 2/\n");
        return 2;
    }
    if (strcmp(s, "16*") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()<<4); // 16*\n");
        return 2;
    }
    if (strcmp(s, "@") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Read16(Pop())); // @\n");
        return 2;
    }
    if (strcmp(s, "C@") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Read8(Pop())&0xFF); // C@\n");
        return 2;
    }
    if (strcmp(s, "DUP") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Read16(regsp)); // DUP\n");
        return 2;
    }
    if (strcmp(s, "?DUP") == 0)
    {
        snprintf(ret, STRINGLEN, "  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP\n");
        return 2;
    }

    snprintf(ret, STRINGLEN, "  %s(); // %s\n", Forth2CString(s), s);
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
void ParseRuleFunction(int minaddr, int maxaddr, DICTENTRY *d, int currentovidx)
{
    int i = 0;
    int j = 0;
    unsigned char RULEIM = Read8(d->parp+0);
    unsigned char CONDLIM = Read8(d->parp+1);
    unsigned char RULECNT = Read8(d->parp+2);
    unsigned short RULEARRp = d->parp+3;
    unsigned short CONDARRp = RULEARRp + 2*RULEIM;
    unsigned short CFLGARRp = CONDARRp + 2*CONDLIM;

    /*
    0xeab7: WORD 'LIFE-SIM' codep=0xb869 parp=0xeac4
    0xeac4  0x01
    0xeac5  0x03
    0xeac6  0x01  RULECNT

    0xeac7  0xd2 0xea  RULEARRp

    0xeac9  0x88 0xe3
    0xeacb  0x82 0xe4
    0xeacd  0x08 0xe3

    0xeacf  0xe9 0x5b 0xae

    0xead2  0x03
    0xead3  0xd0 0xe6
    0xead5  0x80 0x01 0x82
    */
    /*
    0xeaf8: WORD '?REDUCE-PO' codep=0xb869 parp=0xeb07
    0xeb07  0x03
    0xeb08  0x05
            0x02  RULECNT

    0xeb0a  0x1f 0xeb  RULEARRp
            0x24 0xeb

            0x52 0x52

    0xeb10  0xa5 0xe2
            0x2e 0xe4
            0xee 0xe2
            0x38 0xe4
            0x31 0x38

    0xeb1a  0x34 0x30 0x3b 0xac 0x3b
    0xeb1f  0x02
            0x3e 0xe7
            0x80 0x81
    0xeb24  0x02
            0x79 0xe7
            0x82 0x83

    */

    //printf("0x%04x: %20s RULEIM:%2i CONDLIM:%2i RULECNT:%2i\n", d->parp, GetWordName(d), RULEIM, CONDLIM, RULECNT);

    for(i=0; i<RULECNT; i++)
    {
        unsigned short rulep = Read16(RULEARRp + i*2);
        unsigned char n = Read8(rulep + 0);
        unsigned short p = Read16(rulep + 1);
        GetDictEntry(p, currentovidx);
        for(j=0; j<n; j++)
        {
            unsigned char x = Read8(rulep + 3 + j)&0x7F;
            p = CFLGARRp + x;

            if (Read8(p) != 0xFF)
            {
                p = CONDARRp + x*2;
                //DICTENTRY *e = GetDictEntry(Read16(p), currentovidx);
                //if (e == NULL) continue;
                /*
                int dofs = PutEasyMacro(p, e, ret, e->ovidx);
                if (dofs != 2) {
                    fprintf(stderr, "Error: no additional data is allowed for this word");
                    exit(1);
                }
                */

            }
        }
    }

    char ret[STRINGLEN];
    for(i=0; i<CONDLIM; i++)
    {
        DICTENTRY *e = GetDictEntry(Read16(CONDARRp + i*2), currentovidx);
        //if (e == NULL) continue;
        //int dofs = PutEasyMacro(CONDARRp + i*2, e, ret, e->ovidx);
        //snprintf(pline[d->parp+i+1].str, STRINGLEN, "%s", ret);
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
        int dofs = PutEasyMacro(par + i*4 + 6, e, ret, currentovidx);
        if (dofs != 2) {
            fprintf(stderr, "Error: no additional data is allowed for this word");
            exit(1);
        }
        sprintf(temp, "  case %i:\n  %s    break;\n", Read16(par + i*4 + 4), ret);
        pline[par + i*4 + 4].done = 1;
        pline[par + i*4 + 5].done = 1;
        strcat(pline[ofs].str, temp);
    }
    DICTENTRY *e = GetDictEntry(Read16(par + 2), currentovidx);
    pline[par + 2].done = 1;
    pline[par + 3].done = 1;

    char ret[STRINGLEN];
    int dofs = PutEasyMacro(par + 2, e, ret, currentovidx);
    if (dofs != 2) {
        fprintf(stderr, "Error: no additional data is allowed for this word");
        exit(1);
    }
    sprintf(temp, "  default:\n  %s    break;\n", ret);
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

    if (ofs == d->parp)
    {
        char *s = GetWordName(d);
        snprintf(pline[ofs-1].str, STRINGLEN, "\nvoid %s() // %s\n{\n", Forth2CString(s), s);
        AddNamedVariable(&vars, d, "callp1");
        AddNamedVariable(&vars, d, "callp0");
    }
    while(1)
    {
        if (ofs < minaddr) return;
        if (ofs > maxaddr) return;
        if (pline[ofs].done) return;

        int par = Read16(ofs)+2;
        pline[ofs+0].done = 1;
        pline[ofs+1].done = 1;
        DICTENTRY *e = GetDictEntry(par, currentovidx);
        if (e == NULL)
        {
            sprintf(pline[ofs].str, "  UNK_0x%04x(); // Unknown overlay function\n", par);
            ofs += 2;
            continue;
        }

        char *s = GetWordName(e);

        if (ofs < 0x100+FILESTAR0SIZE)
        if (currentovidx != -1)
        if (par >= maxaddr)
        {
            e->isentry = 1;
            snprintf(pline[ofs].str, STRINGLEN, "  %s(); // Overlay %s\n", s, overlays[currentovidx].name);
            ofs += 2;
            continue;
        }

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
                snprintf(pline[ofs].str, STRINGLEN, "  DOTASKS(%s, %s, %s);\n", s1, s2, s3);
            } else
            if ((codep1 == CODELIT) && (codep2 != CODELIT) && (codep3 != CODELIT)) // for DOTASKS in SHIPBUTTONS
            {
                int c1 = Read16(ofs-2);
                int c3 = Read16(ofs-8);
                int c4 = Read16(ofs-12);
                int c5 = Read16(ofs-16);

                char* s1 = GetDictWord(c1, currentovidx);
                char* s3 = GetDictWord(c3, currentovidx);
                char* s4 = GetDictWord(c4, currentovidx);
                char* s5 = GetDictWord(c5, currentovidx);
                snprintf(pline[ofs].str, STRINGLEN, "  DOTASKS(%s, %s, %s, %s);\n", s1, s3, s4, s5);
            } else
            {
                fprintf(stderr, "Error: DOTASKS without specifying tasks in ov:%i\n", currentovidx);
                exit(1);
            }
            ofs += 2;
        } else
        if (strcmp(s, "(;CODE)") == 0) // maybe inlined code
        {
            snprintf(pline[ofs].str, STRINGLEN, "  %s();\n// inlined assembler code\n", s);
            ofs += 2;
            return;
        } else
        if (strcmp(s, "COMPILE") == 0) // maybe inlined code
        {
            snprintf(pline[ofs].str, STRINGLEN, "  %s(0x%04x); // compile?\n", s, Read16(ofs+2));
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            ofs += 4;
            //return;
        } else
        if (strcmp(s, "(ABORT\")") == 0)
        {
            int ofstemp = ofs;
            int length = Read8(ofs+2);
            char str[0x100];
            memset(str, 0, 0x100);
            int ll = 0;

            if (length >= 128)
            {
                ofs += 2;
                snprintf(pline[ofstemp].str, STRINGLEN, "\n  (ABORT\") // string %i\n", length);
            } else
            {
                pline[ofs+2].done = 1;
                ofs += 3;
                for(ll=0; ll<length; ll++)
                {
                    str[ll] = Read8(ofs);
                    pline[ofs].done = 1;
                    ofs++;
                }
                snprintf(pline[ofstemp].str, STRINGLEN, "  ABORT(\"%s\", %i);// (ABORT\")\n", str, length);
            }
        } else
        if (strcmp(s, "(.\")") == 0) // print string
        {
            int ofstemp = ofs;
            int length = Read8(ofs+2);

            char str[0x100];
            memset(str, 0, 0x100);
            int ll = 0;
/*
            if ((length == 253) || (length == 141))
            {
                ofs += 2;
                snprintf(pline[ofstemp].str, STRINGLEN, "\n  (.\\\") string %i\n", length);
            } else
*/
            if (length >= 128)
            {
                ofs += 2;
                snprintf(pline[ofstemp].str, STRINGLEN, "  (.\") // string %i\n", length);
            } else
            {
                pline[ofs+2].done = 1;
                ofs += 3;
                for(ll=0; ll<length; ll++)
                {
                    str[ll] = Read8(ofs);
                    pline[ofs].done = 1;
                    ofs++;
                }
                snprintf(pline[ofstemp].str, STRINGLEN, "  PRINT(\"%s\", %i); // (.\")\n", str, length);
            }

        } else
        if (par == PARPRINT) // a call, but gets a string as input? , TODO for STARFLIGHT2?
        {
            int ofstemp = ofs;
            pline[ofs+2].done = 1;
            int length = Read8(ofs+2);

            char str[0x200];
            memset(str, 0, 0x200);
            int ll = 0;

            ofs += 3;
            for(ll=0; ll<length; ll++)
            {
                str[ll] = Read8(ofs);
                pline[ofs].done = 1;
                ofs++;
            }
            snprintf(pline[ofstemp].str, STRINGLEN, "\n  UNK_0x%04x(\"%s\");\n", par, str);
            /*
            snprintf(pline[ofs].str, STRINGLEN, "\n  dw3f39() string %i\n", length);
            ofs += length;
            */
        } else
        if (e->codep == CODECALL) // call
        {
            DICTENTRY *dcall = GetDictEntry(par, currentovidx);
            snprintf(pline[ofs].str, STRINGLEN, "  %s(); // %s\n", Forth2CString(s), s);
            ofs += 2;
        } else
        if (e->codep == CODELOADOVERLAY) // This code loads the overlay
        {
            if (currentovidx != -1)
            {
                fprintf(stderr, "Error: Change of overlay inside overlay\n");
                exit(1);
            }
            //int codep = Read16(par-2);
            unsigned short startaddress = Read16(par);
            int i=0;
            //fprintf(stderr, "LoadOverlay(\"%s\");\n", s);
            for(i=0; overlays[i].name != NULL; i++)
            {
                if (overlays[i].startaddress != startaddress) continue;
                //fprintf(stderr, "0x%04x\n", i);
                currentovidx = i;
            }
            if (currentovidx == -1)
            {
                fprintf(stderr, "Error: Cannot find overlay\n");
                exit(1);
            }
            snprintf(pline[ofs].str, STRINGLEN, "  LoadOverlay(\"%s\");\n", s);
            ofs += 2;
        } else
        if (strcmp(s, "EXIT") == 0)
        {
            if (pline[ofs+2].labelid)
            {
                snprintf(pline[ofs].str, STRINGLEN, "  return;\n\n");
            } else
            {
                snprintf(pline[ofs].str, STRINGLEN, "}\n\n");
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
                snprintf(pline[ofs].str, STRINGLEN, "  return;\n");
            } else
            {
                if (pline[addr].labelid == 0)
                {
                    //fprintf(stderr, "jump at 0x%04x to 0x%04x\n", ofs, addr);
                    pline[addr].labelid = ++d->nlabel;
                }

                snprintf(pline[ofs].str, STRINGLEN, "  goto label%i;\n", pline[addr].labelid);
            }
            ParsePartFunction(addr, minaddr, maxaddr, d, currentovidx, vars);

            if (!pline[ofs+4].done && !pline[ofs+4].labelid)
            {
                DICTENTRY *next = GetDictEntry(Read16(ofs+4)+2, currentovidx);
                if (strcmp(next->r, "EXIT") == 0)
                {
                    pline[ofs+4].done = 1;
                    pline[ofs+5].done = 1;
                    snprintf(pline[ofs+4].str, STRINGLEN, "}\n\n");
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
                snprintf(pline[ofs].str, STRINGLEN, "  if (Pop() == 0) return;\n");
            } else
            {
                if (pline[addr].labelid == 0)
                {
                    pline[addr].labelid = ++d->nlabel;
                }
                snprintf(pline[ofs].str, STRINGLEN, "  if (Pop() == 0) goto label%i;\n", pline[addr].labelid);
            }
            ParsePartFunction(ofs+4, minaddr, maxaddr, d, currentovidx, vars);
            ParsePartFunction(addr, minaddr, maxaddr, d, currentovidx, vars);
            ofs += 4;
        } else
        if (strcmp(s, ">R") == 0) // doesn't work for function (EXPECT)
        {
            AddVariable(&vars, d);
            snprintf(pline[ofs].str, STRINGLEN, "  unsigned short int %s = Pop(); // >R\n", GetVariable(&vars, 0));
            ofs += 2;
        } else
        if (strcmp(s, "R>") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push(%s); // R>\n", GetVariable(&vars, 0));
            RemoveVariable(&vars);
            ofs += 2;
        } else
        if (strcmp(s, "R@") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push(Read16(%s)); // R@\n", GetVariable(&vars, 0));
            ofs += 2;
        } else
        if (strcmp(s, "(DO)") == 0)
        {
            AddLoopVariables(&vars, d);
            snprintf(pline[ofs].str, STRINGLEN, "\n  signed short int %s = Pop();\n  signed short int %s = Pop();\n  do // (DO)\n  {\n",
                GetVariable(&vars, 0),
                GetVariable(&vars, 1));
            ofs += 2;
        } else
        if (strcmp(s, "(/LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            snprintf(pline[ofs].str, STRINGLEN,
                "  %s += Pop();\n"
                "  } while(%s<%s); // (/LOOP) 0x%04x\n\n",
                GetVariable(&vars, 0),
                GetVariable(&vars, 0),
                GetVariable(&vars, 1),
                par);
            RemoveLoopVariables(&vars);
            ofs += 4;
        } else
        if (strcmp(s, "(LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            snprintf(pline[ofs].str, STRINGLEN, "  %s++;\n  } while(%s<%s); // (LOOP) 0x%04x\n\n",
                GetVariable(&vars, 0),
                GetVariable(&vars, 0),
                GetVariable(&vars, 1),
                par);
            RemoveLoopVariables(&vars);
            ofs += 4;
        } else
        if (strcmp(s, "(+LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            snprintf(pline[ofs].str, STRINGLEN,
                "  int step = Pop();\n  %s += step;\n"
                "  } while(((step>=0) && (%s<%s)) || ((step<0) && (%s>%s))); // (+LOOP) 0x%04x\n\n",
                GetVariable(&vars, 0),
                GetVariable(&vars, 0),
                GetVariable(&vars, 1),
                GetVariable(&vars, 0),
                GetVariable(&vars, 1),
                par);
            RemoveLoopVariables(&vars);
            ofs += 4;
        } else
        if (strcmp(s, "I") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push(%s); // I\n", GetVariable(&vars, 0));
            ofs += 2;
        } else
        if (strcmp(s, "I'") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push(%s); // I'\n", GetVariable(&vars, 1));
            ofs += 2;
        } else
        if (strcmp(s, "J") == 0)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push(%s); // J\n", GetVariable(&vars, 2));
            ofs += 2;
        } else
        {
            char ret[STRINGLEN];
            int dofs = PutEasyMacro(ofs, e, ret, currentovidx);
            int i;
            for(i=0; i<dofs; i++)
            {
                pline[ofs+i].done = 1;
            }
            snprintf(pline[ofs].str, STRINGLEN, "%s", ret);
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
    }
    for(i=0; i<ndict; i++)
    {
        dict[i].nlabel = 0;
        dict[i].nloopvars = 0;
        dict[i].nstackvariables = 0;
    }
}

void ParseForthFunctions(int ovidx, int minaddr, int maxaddr)
{
    int i;
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
}

void WriteVariables(FILE *fp, int ovidx)
{
    int i = 0;
    int j = 0;

    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// =========== VARIABLES ===========\n");
    fprintf(fp, "// =================================\n");

    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (dict[i].codep != CODEPOINTER) continue;
        fprintf(fp, "const unsigned short int pp_%s = 0x%04x; // %s size: %i\n// {", 
            Forth2CString(GetWordName(&dict[i])),
            dict[i].parp,
            GetWordName(&dict[i]),
            dict[i].size
        );
        for(j=0; j<dict[i].size-1 ; j++) fprintf(fp, "0x%02x, ", Read8(dict[i].parp+j));
        fprintf(fp, "0x%02x}\n\n", Read8(dict[i].parp+j));
    }
    fprintf(fp, "\n");
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (dict[i].codep != CODECONSTANT) continue;
        fprintf(fp, "const unsigned short int cc_%s = 0x%04x; // %s\n", Forth2CString(GetWordName(&dict[i])), Read16(dict[i].parp), GetWordName(&dict[i]));
    }
    fprintf(fp, "\n");
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (dict[i].codep != CODEDI) continue;
        fprintf(fp, "const unsigned short int %s = 0x%04x; // %s // accessed via di (in WORD OPERATOR)\n", Forth2CString(GetWordName(&dict[i])), Read16(Read16(dict[i].parp)+REGDI), GetWordName(&dict[i]));
    }
    fprintf(fp, "\n");
    /*
    for(i=startidx; i<endidx; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (dict[i].codep != CODELOADDATA) continue;
        fprintf(fp, "const unsigned short int %s = { 0x%04x, 0x%04x, addr: 0x%04x } // struct to load data from directory\n",
            dict[i].r,
            Read16(dict[i].parp+0),
            Read16(dict[i].parp+2),
            Read16(dict[i].parp+4));
    }
    fprintf(fp, "\n");
*/
}

void WriteParsedFunctions(int minaddr, int maxaddr, FILE *fp)
{
    int i = 0;

    int dbmode = 0; // bool
    char str[0x10000];
    int nstr = 0;
    for(i=minaddr; i<=maxaddr; i++)
    {
        if (pline[i].labelid)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "\n  label%i:\n", pline[i].labelid);
            dbmode = 0;
        }
        if (pline[i].str[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].str);
            dbmode = 0;
        }
        if (!pline[i].done)
        {
            if (!dbmode) fprintf(fp, "// 0x%04x: db ", i);
            dbmode = 1;
            fprintf(fp, "0x%02x ", Read8(i));
            str[nstr+0] = 0x20;
            str[nstr+1] = 0x0;
            nstr++;
            if ((Read8(i) >= 0x20) && (Read8(i) < 128))
            {
                str[nstr-1] = Read8(i);
            }
        }
    }
    if (dbmode) fprintf(fp, "'%s'\n  ", str);
}

