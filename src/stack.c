#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"global.h"
#include"stack.h"

#include"vocabulary.h"
#include"parser.h"
#include"stack.h"
#include"../emul/cpu.h"

void FunctionStackAnalysis(int parp, int ovidx)
{
    WORD *dd = GetWordByAddr(parp, ovidx);

    int addr = dd->parp;
    char *s = GetWordName(dd);
    if (dd->codep != CODECALL) return;
    if (dd->stackin != STACKINVALID) return;
    if (dd->stackout != STACKINVALID) return;

    //printf("Analyze %s of ov=%i parp=0x%04x\n", GetWordName(dd), ovidx, dd->parp);

    int stack = 0;
    int stackmin = 0;
    while(1)
    {
        if (pline[addr].done == FALSE || pline[addr].isasm)
        {
            // Analysis failed. Just return
            return;
        }
        if (pline[addr].iswordheader)
        {
            printf("reached new word header. exit\n");
            exit(1);
            return;
        }

        if (pline[addr].word == 0)
        {
            addr++;
            continue;
        }

        WORD *d = GetWordByAddr(pline[addr].word, ovidx);
        if (d == NULL)
        {
            return;
        }
        //printf("word %20s codep=%04x parp=%04x stack=%i in=%i out=%i \n", GetWordName(d), d->codep, d->parp, stack, d->stackin, d->stackout);

        if (d->codep == CODEEXEC)
        {
            int par = Read16(Read16(d->parp)+REGDI);
            d = GetWordByAddr(par, ovidx);
            if (d == NULL)
            {
                fprintf(stderr, "Error: Something went wrong\n");
                exit(1);
            }
        }
/*
        if (strcmp(GetWordName(dd), "?.CERTAIN") == 0)
        {
            printf("%s %i %i\n", GetWordName(d), d->stackin, d->stackout);
        }
*/
        if (d->stackin  == STACKINVALID) return;
        if (d->stackout == STACKINVALID) return;

        stack -= d->stackin;
        if (stack < stackmin) stackmin = stack;
        stack += d->stackout;
        if ((strcmp(d->r, "EXIT")==0) || (pline[addr].flow == IFEXIT))
        {
            dd->stackin = -stackmin;
            dd->stackout = stack-stackmin;
            //printf("Success %s %i %i\n", GetWordName(dd), dd->stackin, dd->stackout);

            return;
        }
        if (strcmp(d->r, "0BRANCH")==0)
        {
            if (pline[addr].gotoaddr > addr)
            {
                addr = pline[addr].gotoaddr;
                continue;
            }
        }
        if (strcmp(d->r, "BRANCH")==0)
        {
            if (pline[addr].gotoaddr <= addr)
            {
                //printf("reached dead end. Cannot analyze %s\n", GetWordName(dd));
                return;
            }
            addr = pline[addr].gotoaddr;
            continue;
        }


        addr++;
    }
}

void Set(const char *name, int stackin, int stackout)
{
    for(int i=0; i<nwords; i++)
    {
        if (strcmp(GetWordName(&vocabulary[i]), name) == 0)
        {
            vocabulary[i].stackin = stackin;
            vocabulary[i].stackout = stackout;
            return;
        }
    }
    fprintf(stderr, "Error: No word found with name %s\n", name);
    exit(1);

}

void IterateFunctions(int ovidx)
{
    int n = 0;
    for(int i=0; i<nwords; i++)
    {
        if (vocabulary[i].ovidx != ovidx) continue;
        if ((vocabulary[i].codep == CODECALL) && (vocabulary[i].stackin != STACKINVALID)) n++;
        FunctionStackAnalysis(vocabulary[i].parp, ovidx);
    }

    //printf("%i\n", n);
}

void StackAnalysis(int ovidx)
{
    int nwordsbefore = nwords;
    for(int i=0; i<nwords; i++)
    {
        if (vocabulary[i].codep == CODEPOINTER)
        {
            vocabulary[i].stackin = 0;
            vocabulary[i].stackout = 1;
        }
        if (vocabulary[i].codep == CODELIT || vocabulary[i].codep == CODEDI || vocabulary[i].codep == CODECONSTANT)
        {
            vocabulary[i].stackin = 0;
            vocabulary[i].stackout = 1;
        }
        if (vocabulary[i].codep == CODE2LIT)
        {
            vocabulary[i].stackin = 0;
            vocabulary[i].stackout = 2;
        }
        if (vocabulary[i].codep == CODELOADOVERLAY) // not sure, call 1649
        {
            vocabulary[i].stackin = 0;
            vocabulary[i].stackout = 0;
        }
        if (vocabulary[i].codep == CODEGETCOLOR)
        {
            vocabulary[i].stackin = 0;
            vocabulary[i].stackout = 1;
        }
        if (vocabulary[i].codep == CODEIFIELD)
        {
            vocabulary[i].stackin = 0;
            vocabulary[i].stackout = 1;
        }
        if (vocabulary[i].codep == CODEPUSH2WORDS)
        {
            vocabulary[i].stackin = 0;
            vocabulary[i].stackout = 2;
        }
        if (vocabulary[i].codep == CODESIGFLD) // not sure, call 1649
        {
            vocabulary[i].stackin = 0;
            vocabulary[i].stackout = 0;
        }
        if (vocabulary[i].codep == CODETABLE) // call 1649, probably right
        {
            vocabulary[i].stackin = 1;
            vocabulary[i].stackout = 1;
        }
        if (vocabulary[i].codep == CODE2DARRAY)
        {
            vocabulary[i].stackin = 2;
            vocabulary[i].stackout = 2;
        }
        /*
        if (vocabulary[i].codep == CODEFUNC6)
        {
            vocabulary[i].stackin = 1;
            vocabulary[i].stackout = 1;
        }
        */
    }
    Set("@", 1, 1);
    Set("C@", 1, 1);
    Set("2!_2", 3, 0);
    Set("C!_2", 2, 0);
    Set("D+", 4, 2);
    Set("DNEGATE", 2, 2);
    Set("SWAP", 2, 2);
    Set("2SWAP", 4, 4);
    Set("1+", 1, 1);
    Set("2+", 1, 1);
    Set("1-", 1, 1);
    Set("2-", 1, 1);
    Set("2*", 1, 1);
    Set("4*", 1, 1);
    Set("2/", 1, 1);
    Set("16/", 1, 1);
    Set("+", 2, 1);
    Set("-", 2, 1);
    Set("*", 2, 1);
    Set("/", 2, 2);
    Set("/MOD", 2, 2);
    Set(">", 2, 1);
    Set("<", 2, 1);
    Set("=", 2, 1);
    Set("0>", 1, 1);
    Set("0<", 1, 1);
    Set("0=", 1, 1);
    Set("NEGATE", 1, 1);
    Set("2^N", 1, 1);
    Set("OR", 2, 1);
    Set("AND", 2, 1);
    Set("XOR", 2, 1);
    Set("NOT", 1, 1);
    Set("TOGGLE", 2, 0);
    Set("2@", 1, 2);
    Set("0=", 1, 1);
    Set("0BRANCH", 1, 0);
    Set("0", 0, 1);
    Set("1", 0, 1);
    Set("2", 0, 1);
    Set("DUP", 1, 2);
    Set("2DUP", 2, 4);
    Set("(!SET)", 3, 0);
    Set("(!OLD)", 1, 2);
    Set("CMOVE_2", 3, 0);
    Set("FILL_2", 3, 0);
    Set("EXIT", 0, 0);
    Set("GO", 1, 0);
    Set("EXECUTE", 1, 0);
    //Set("@EXECUTE", 1, 0); Need special logic
    Set("ADDR>SEG", 1, 1);
    Set("SEG>ADDR", 1, 1);
    Set("P!", 2, 0);
    Set("P@", 1, 1);
    Set("U/MOD", 3, 2);
    Set("U*", 2, 2);
    Set("U<", 2, 1);
    Set("DROP", 1, 0);
    Set("2DROP", 2, 0);
    Set("ROT", 3, 3);
    Set("ME", 0, 1);
    Set("S->D", 1, 2);
    Set("OVER", 2, 3);
    Set(">R", 1, 0);
    Set("R>", 0, 1);
    Set("R@", 0, 1);
    Set("I", 0, 1);
    Set("I'", 0, 1);
    Set("J", 0, 1);
    Set("(DO)", 2, 0);
    Set("(LOOP)", 0, 0);
    Set("(/LOOP)", 1, 0);
    Set("(+LOOP)", 1, 0);
    Set("BRANCH", 0, 0);
    Set("INTERRUPT", 1, 0);
    Set("L@", 2, 1);
    Set("L!", 3, 0);
    Set("LC@", 2, 1);
    Set("LC!", 3, 0);
    Set("LCMOVE", 5, 0);
    Set("+!_2", 2, 0);
    Set("?UPDATE", 1, 1); // not sure
    Set("!OFFSETS", 1, 0);
    Set("OFF_2", 1, 0);
    Set("ON_2", 1, 0);
    Set("BFILL", 0, 0);
    Set(">V", 1, 0);
    Set("V>", 0, 1);
    Set("VI", 0, 1);
    Set("D16*", 2, 2);
    Set("16*", 1, 1);
    Set("<D!>", 3, 0);
    Set("<!>", 2, 0);
    Set("<+!>", 2, 0);
    Set("(.\")", 0, 0); // maybe not necessary. But to stay on the safe side
    Set("<C!>", 2, 0);
    Set("VA>BLK", 2, 2);
    Set("PICK", 1, 1); // recursion because of unravel
    Set("(BUFFER)", 1, 2); // not sure
    Set("LWSCAN", 4, 2); // absolutely not sure
    Set("@DS", 0, 1);
    Set("SP@", 0, 1);
    Set("SP!", 0, 0);
    Set("RP@", 0, 1);
    Set("RP!", 0, 0);
    Set("BEEPOFF", 0, 0);
    Set("TONE", 1, 0);
    Set("BEEPON_2", 0, 0);
    Set("MS", 0, 1);
    Set("QUIT", 0, 0); // No sure, but probably right
    Set("UNRAVEL", 0, 0); // No sure, but probably right
    Set("<1.5!>", 3, 0);
    Set("1.5@", 1, 2);
    Set(">C", 2, 0);
    Set("C>", 0, 2);
    Set("CI", 0, 2);
    //Set("(ABORT\")", 1, 0);
    Set("CDEPTH", 0, 1);
    Set("LLINE", 4, 0);
    Set("UNK_0x3672", 1, 1); // in both starflight the same
    Set("BINSTALLS", 0, 0);
    Set("(POSITION)", 2, 0);
    Set("POSITION", 2, 0);
    Set("SCROLLUP", 1, 0);
    Set("?POSITION", 0, 2);
    Set("CUR>ADDR", 0, 1);
    Set("V!", 2, 0);
    Set("V@", 1, 0);
    Set("VFILL", 3, 0);
    Set("VMOVE", 3, 0);
    //Set("(FIND)", 2, 1); // 1 in unsuccessful, 3 if successfull
    Set("ENCLOSE", 2, 4);
    Set(">UPPERCASE", 2, 0);
    //Set("DIGIT", 2, 1); // output dependent
    Set("!", 2, 0);
    Set("+!", 2, 0);
    Set("?ENOUGH", 1, 0); // Because of abort dependent on path
    Set("FRND", 0, 1);
    //Set("*CREATE", 1, 1); // output dependent on input
    Set("LPLOT", 2, 0);
    Set("(KEY)", 0, 1);
    Set("L1.5@", 2, 2);
    Set("+-@", 1, 1);
    Set("EASY-BITS", 4, 3);
    Set("D2*", 2, 2);
    Set("+BIT", 1, 1);
    Set("FRND", 0, 1);
    Set("L+-@", 2, 1);
    Set("1.5!_2", 3, 0);
    Set("3+", 1, 1);
    Set("<LCMOVE", 5, 0);
    Set("@L", 2, 1);
    Set("!L", 3, 0);
    Set("(CS?)", 0, 1);
    Set("C!L", 3, 0);
    Set("C@L", 2, 1);
    Set("CMOVE>", 3, 0);
    Set("CMOVE_2", 3, 0);
    Set("2LIT", 0, 2);
    Set("DIGIT", 2, 2);
    Set("TIME", 0, 1);

#ifdef STARFLT1

    //Set("UNK_0x8332", 1, 1); // Seems recursive
    Set(">ALPHACODE", 0, 0); // Something with graphics
    Set(">LORES", 0, 0); // set video mode
    Set("BEXTENT", 0, 4);
    Set("?EXTENTX", 4, 0);
    Set("ADVANCE>DEF", 1, 0);
    Set("LCOPYBLK", 6, 0); // left, top, right, bottom, left top
    Set("V>DISPLAY", 0, 0); // not sure
    Set("{BLT}", 0, 0); // not sure
    Set("LFILLPOLY", 0, 0); // probably
    Set("DISPLAY-WAIT", 0, 0);
    Set("PLOT", 3, 1);
    Set("SCANPOLY", 0, 0);
    Set("LFILLPOLY", 0, 0);
    Set("CAPSON", 0, 0);
    Set("PRTSCR", 0, 0);
#endif
#ifdef STARFLT2
    Set("UNK_0x7650", 0, 1);
    Set("CMOVE_1", 3, 0);
#endif

    /*
    Set("LXPLOT", 0, 0);
    Set("TILEFILL", 0, 0);
    Set("SQLPLOT", 0, 0);
    Set("EEXTENT", 0, 0);
    Set("ARC", 0, 0);
    Set("L@PIXEL", 0, 0);
    */

    Set("?DUP", 1, 1); // depends

    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);
    IterateFunctions(ovidx);

    if (nwordsbefore != nwords)
    {
        printf("nwords change from %i to %i\n", nwordsbefore, nwords);
    }
}


