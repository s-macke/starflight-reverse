#include<stdlib.h>
#include<string.h>
#include"transpile2C.h"
#include"global.h"
#include"utils.h"
#include"parser.h"
#include"../emul/cpu.h"
#include"disasm/debugger.h"

void WriteExtern(FILE *fp, int ovidx);
void WriteVariables(FILE *fp, int ovidx);
void WriteParsedFile(FILE *fp, int ovidx, int minaddr, int maxaddr);
void WriteHeaderFile(FILE *fph, int ovidx);

void Transpile(OVLHeader *head, int ovidx, int minaddr, int maxaddr)
{
    char filename[512];
    FILE *fpc = NULL;
    FILE *fph = NULL;

    if (ovidx != -1)
    {
        sprintf(filename, OUTDIR"/overlays/%s.c", overlays[ovidx].name);
        fpc = fopen(filename, "w");
        if (fpc == NULL)
        {
            fprintf(stderr, "Error: Cannot create file '%s'\n", filename);
            exit(1);
        }

        fprintf(fpc, "// ====== OVERLAY '%s' ======\n", overlays[ovidx].name);
        fprintf(fpc, "// store offset = 0x%04x\n", head->storeofs);
        fprintf(fpc, "// overlay size   = 0x%04x\n", head->ovlsize);
        fprintf(fpc, "\n#include\"../../emul/cpu.h\"\n");
        fprintf(fpc, "#include\"../../emul/starflt1.h\"\n\n");

        sprintf(filename, OUTDIR"/overlays/%s.h", overlays[ovidx].name);
        fph = fopen(filename, "w");
        if (fph == NULL)
        {
            fprintf(stderr, "Error: Cannot create file '%s'\n", filename);
            exit(1);
        }

        WriteHeaderFile(fph, ovidx);
        fclose(fph);
    }
    else
    {
        fpc = fopen(OUTDIR"/starflt.c", "w");
        if (fpc == NULL)
        {
            fprintf(stderr, "Error: Cannot create file\n");
            exit(1);
        }
    }

    WriteDict(mem, fpc, ovidx);
    if (ovidx != -1) WriteExtern(fpc, ovidx);
    WriteVariables(fpc, ovidx);
    WriteParsedFile(fpc, ovidx, minaddr, maxaddr);

    if (fpc != NULL) fclose(fpc);
}

unsigned int IsPushNumber(int addr, DICTENTRY *e)
{
    if (e->codep == CODELIT) return Read16(addr + 2);
    if (e->codep == CODECONSTANT)
    {
        if (strcmp(e->r, "3") == 0) return 3;
        if (strcmp(e->r, "4") == 0) return 4;
        if (strcmp(e->r, "5") == 0) return 5;
        if (strcmp(e->r, "6") == 0) return 6;
        if (strcmp(e->r, "7") == 0) return 7;
        if (strcmp(e->r, "8") == 0) return 8;
        if (strcmp(e->r, "9") == 0) return 9;
        if (strcmp(e->r, "-1") == 0) return -1;
        if (strcmp(e->r, "-2") == 0) return -2;
    }

    if (strcmp(e->r, "0") == 0) return 0;
    if (strcmp(e->r, "1") == 0) return 1;
    if (strcmp(e->r, "2") == 0) return 2;
    return 0x10000; // Invalid
}


void WriteHeaderFile(FILE *fph, int ovidx)
{
    int i = 0;
    fprintf(fph, "// ====== OVERLAY '%s' ======\n\n", overlays[ovidx].name);
    fprintf(fph, "#ifndef %s_H\n", overlays[ovidx].name);
    fprintf(fph, "#define %s_H\n\n", overlays[ovidx].name);

    // write header file
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (!dict[i].isentry) continue;
        char *s = GetWordName(&dict[i]);
        fprintf(fph, "void %s(); // %s\n", Forth2CString(s), s);
    }

    fprintf(fph, "\n#endif\n");
}

const char* ignorewordlist[] =
{
    "0","1","2","3","4","5","6","7","8","9",
    "-1","-2","0=","OR","AND","XOR",
    "=","+","*","NEGATE","NOT","DROP",
    "2DROP","2*","3+","1+","2+","1-",
    "2-","16/","2/","16*","@","C@","DUP",
    "?DUP",NULL
};

int IgnoreWord(char *s)
{
    int j = 0;
    while(ignorewordlist[j] != NULL)
    {
        if (strcmp(ignorewordlist[j], s) == 0) return TRUE;
        j++;
    }
    return FALSE;
}

void WriteExtern(FILE *fp, int ovidx)
{
    int i = 0;
    int j = 0;

    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// ============= EXTERN ============\n");
    fprintf(fp, "// =================================\n");

    for(i=0; i<ndict; i++)
    {
        if (!dict[i].doextern) continue;
        if
        (
        (dict[i].codep == CODELOADOVERLAY) ||
        (dict[i].codep == CODETABLE) ||
        (dict[i].codep == CODESETCOLOR) ||
        (dict[i].codep == CODEFUNC3) ||
        (dict[i].codep == CODEPUSH2WORDS) ||
        (dict[i].codep == CODEFUNC5) ||
        (dict[i].codep == CODEFUNC6) ||
        (dict[i].codep == CODESETVOCABULARY) ||
        (dict[i].codep == IFIELDOFFSET) ||
        (dict[i].codep == CODEFUNC9) ||
        (dict[i].codep == CODEARRAY) ||
        (dict[i].codep == CODEFUNC12) ||
        (dict[i].codep == CODEEXEC)
        ) dict[i].doextern = FALSE;
    }

    for(i=0; i<ndict; i++)
    {
        if (dict[i].codep != CODECONSTANT) continue;
        if (!dict[i].doextern) continue;
        if (!IgnoreWord(dict[i].r)) fprintf(fp, "extern const unsigned short int cc_%s; // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
        dict[i].doextern = FALSE;
    }
    for(i=0; i<ndict; i++)
    {
        if (dict[i].codep != CODEPOINTER) continue;
        if (!dict[i].doextern) continue;
        fprintf(fp, "extern const unsigned short int pp_%s; // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
        dict[i].doextern = FALSE;
    }
    for(i=0; i<ndict; i++)
    {
        if (dict[i].codep != CODEDI) continue;
        if (!dict[i].doextern) continue;
        fprintf(fp, "extern const unsigned short int user_%s; // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
        dict[i].doextern = FALSE;
    }
    for(i=0; i<ndict; i++)
    {
        if (dict[i].codep != CODELOADDATA) continue;
        if (!dict[i].doextern) continue;
        fprintf(fp, "extern LoadDataType %s; // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
        dict[i].doextern = FALSE;
    }
    for(i=0; i<ndict; i++)
    {
        if (dict[i].codep != CODEIFIELD) continue;
        if (!dict[i].doextern) continue;
        fprintf(fp, "extern IFieldType %s; // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
        dict[i].doextern = FALSE;
    }
    for(i=0; i<ndict; i++)
    {
        if (dict[i].codep != CODECALL) continue;
        if (!dict[i].doextern) continue;
        char *s = GetWordName(&dict[i]);
        if (!IgnoreWord(s)) fprintf(fp, "void %s(); // %s\n", Forth2CString(s), s);
        dict[i].doextern = FALSE;
    }
    for(i=0; i<ndict; i++)
    {
        if (!dict[i].doextern) continue;
        char *s = GetWordName(&dict[i]);
        if (!IgnoreWord(s)) fprintf(fp, "void %s(); // %s\n", Forth2CString(s), s);
        dict[i].doextern = FALSE;
    }
    fprintf(fp, "\n");
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
        fprintf(fp, "const unsigned short int cc_%s = 0x%04x; // %s\n", Forth2CString(GetWordName(&dict[i])), dict[i].parp, GetWordName(&dict[i]));
    }
    fprintf(fp, "\n");
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (dict[i].codep != CODEDI) continue;
        fprintf(fp, "const unsigned short int user_%s = 0x%04x; // %s\n", Forth2CString(GetWordName(&dict[i])), Read16(dict[i].parp)+REGDI, GetWordName(&dict[i]));
    }
    fprintf(fp, "\n");
}

char* GetVariableName(DICTENTRY *efunc, int varidx)
{
    static char *def = "h";
    static char *default1 = "unknown";
    static char *default2 = "callp1";
    static char *default3 = "callp0";
    if (varidx >= 0) return &efunc->vars[varidx][0];

    if (varidx == -1) return default1;
    if (varidx == -2) return default2;
    if (varidx == -3) return default3;
}


typedef struct
{
    char *word;
    char *text;
} BasicWords;

BasicWords basicwords[] =
{
    {"OR",     "Push(Pop() | Pop())"},
    {"AND",    "Push(Pop() & Pop())"},
    {"XOR",    "Push(Pop() ^ Pop())"},
    {"+",      "Push(Pop() + Pop())"},
    {"*",      "Push(Pop() * Pop())"},
    {"NEGATE", "Push(-Pop())"},
    {"2*",     "Push(Pop()*2)"},
    {"1+",     "Push(Pop()+1)"},
    {"2+",     "Push(Pop()+2)"},
    {"3+",     "Push(Pop()+3)"},
    {"1-",     "Push(Pop()-1)"},
    {"2-",     "Push(Pop()-2)"},
    {"16/",    "Push(Pop()>>4)"}, // TODO check for signed and unsigned
    {"2/",     "Push(Pop()>>1)"},
    {"16*",    "Push(Pop()<<4)"},
    {"@",      "Push(Read16(Pop()))"},
    {"C@",     "Push(Read8(Pop())&0xFF)"},
    {"DROP",   "Pop()"},
    {"2DROP",  "Pop(); Pop()"},
    {"DUP",    "Push(Read16(regsp))"},
    {NULL, NULL}
};

void GetMacro(unsigned short addr, DICTENTRY *e, DICTENTRY *efunc, char *ret, int currentovidx)
{
    int i=0;
    ret[0] = 0;
    char *s = GetWordName(e);

    int value = IsPushNumber(addr, e); // check if this is just a push of a number
    if (value != 0x10000)
    {
        char numberstring[16];
        if (value < 10) sprintf(numberstring, "%i", value);
        else if (value > 0xfffc) sprintf(numberstring, "%i", (short signed int)value);
        else sprintf(numberstring, "0x%04x", value);

        int i = 0;
        for(i=0; i<ndict; i++)
        {
            if ((dict[i].ovidx == -1) || (dict[i].ovidx == currentovidx))
            if (dict[i].parp == value)
            {
                snprintf(ret, STRINGLEN, "Push(%s); // probable '%s'\n", numberstring, GetWordName(&dict[i]));
                break;
            }
        }
        if (ret[0] == 0)
        {
            snprintf(ret, STRINGLEN, "Push(%s);\n", numberstring, value);
        }
        return;
    }
    
    BasicWords *word = &basicwords[0];
    while(word->word != NULL)
    {
        if (strcmp(s, word->word) == 0)
        {
            snprintf(ret, STRINGLEN, "%s; // %s\n", word->text, word->word);
            return;
        }
        word++;
    }
    
    if (e->codep == CODE2LIT) // constant number
    {
        snprintf(ret, STRINGLEN, "Push(0x%04x); Push(0x%04x);\n", Read16(addr + 2), Read16(addr + 4));
        return;
    }
    if (e->codep == CODEPOINTER) // pointer to variable or table
    {
        snprintf(ret, STRINGLEN, "Push(pp_%s); // %s\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODECONSTANT)
    {
        snprintf(ret, STRINGLEN, "Push(Read16(cc_%s)); // %s\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODEDI) // User data
    {
        snprintf(ret, STRINGLEN, "Push(user_%s); // %s\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODELOADDATA)
    {
        int idx = Read8(e->parp);
        snprintf(ret, STRINGLEN, "LoadData(%s); // from '%s'\n", Forth2CString(s), GetDirByIdx(idx)->name);
        return;
    }
    if (e->codep == CODETABLE)
    {
        snprintf(ret, STRINGLEN, "GetTableEntry(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODESETCOLOR)
    {
        snprintf(ret, STRINGLEN, "SetColor(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEFUNC3)
    {
        snprintf(ret, STRINGLEN, "Func3(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEPUSH2WORDS)
    {
        snprintf(ret, STRINGLEN, "Push2Words(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEFUNC5)
    {
        snprintf(ret, STRINGLEN, "Func5(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEFUNC6)
    {
        snprintf(ret, STRINGLEN, "Func6(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODESETVOCABULARY)
    {
        snprintf(ret, STRINGLEN, "SetVocabulary(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEIFIELD)
    {
        snprintf(ret, STRINGLEN, "Push(0x%04x+%s.offset); // IFIELD\n", IFIELDOFFSET, Forth2CString(s));
        return;
    }
    if (e->codep == CODEFUNC9)
    {
        snprintf(ret, STRINGLEN, "Func9(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODECASE)
    {
        snprintf(ret, STRINGLEN, "%s(); // %s case\n", Forth2CString(s), s);
        return;
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
        snprintf(ret, STRINGLEN, "ReadArray(Read16(0x%04x + 6), 0x%04x); // %s\n", e->parp, Read16(e->parp + 4), s);
        return;
    }
    if (e->codep == CODEFUNC12)
    {
        snprintf(ret, STRINGLEN, "Func12(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODERULE)
    {
        snprintf(ret, STRINGLEN, "%s(); // %s rule\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODEEXEC)
    {
        int par = Read16(Read16(e->parp)+REGDI);
        snprintf(ret, STRINGLEN, "Exec(\"%s\"); // call of word 0x%04x '%s'\n",
            s, par, GetDictWord(par, currentovidx));
        return;
    }
    if (strcmp(s, ">R") == 0)
    {
        snprintf(ret, STRINGLEN, "%s = Pop(); // >R\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "R>") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(%s); // R>\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "R@") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Read16(%s)); // R@\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "LEAVE") == 0) // TODO: Check if assignment is vice versa
    {
        snprintf(ret, STRINGLEN, "%s = %s; // LEAVE\n",
        GetVariableName(efunc, pline[addr].variableidx+1),
        GetVariableName(efunc, pline[addr].variableidx+0));
        return;
    }
    if (strcmp(s, "I") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(%s); // I\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "I'") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(%s); // I'\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "J") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(%s); // J\n", GetVariableName(efunc, pline[addr].variableidx));
        return;
    }
    if (strcmp(s, "0=") == 0)
    {
        snprintf(ret, STRINGLEN, "if (Pop() == 0) Push(1); else Push(0); // 0=\n");
        return ;
    }
    if (strcmp(s, "=") == 0)
    {
        snprintf(ret, STRINGLEN, "Push((Pop()==Pop())?1:0); // =\n");
        return;
    }
    if (strcmp(s, "NOT") == 0)
    {
        snprintf(ret, STRINGLEN, "if (Pop() == 0) Push(1); else Push(0); // NOT\n");
        return;
    }
    if (strcmp(s, "?DUP") == 0)
    {
        snprintf(ret, STRINGLEN, "if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP\n");
        return;
    }
    if (strcmp(s, "(ABORT\")") == 0)
    {
        int length = Read8(addr+2);
        char str[0x100];
        memset(str, 0, 0x100);
        int ll = 0;
        for(ll=0; ll<length; ll++)
        {
            str[ll] = Read8(addr+3+ll);
        }
        snprintf(ret, STRINGLEN, "ABORT(\"%s\", %i);// (ABORT\")\n", Escape(str), length);
        return;
    }
    if (strcmp(s, "(.\")") == 0)
    {
        int length = Read8(addr+2);
        char str[0x100];
        memset(str, 0, 0x100);
        int ll = 0;
        for(ll=0; ll<length; ll++)
        {
            str[ll] = Read8(addr+3+ll);
        }
        snprintf(ret, STRINGLEN, "PRINT(\"%s\", %i); // (.\")\n", Escape(str), length);
        return;
    }
    if (e->parp == PARPRINT)
    {
        int length = Read8(addr+2);
        char str[0x100];
        memset(str, 0, 0x100);
        int ll = 0;
        for(ll=0; ll<length; ll++)
        {
            str[ll] = Read8(addr+3+ll);
        }
        snprintf(ret, STRINGLEN, "UNK_0x%04x(\"%s\");\n", PARPRINT, Escape(str));
        return;
    }

    snprintf(ret, STRINGLEN, "%s(); // %s\n", Forth2CString(s), s);
    return;
}

// ----------------------------------------------------

int IsLabelStillInUse(DICTENTRY *e, int labeladdr)
{
    int addr = e->parp;
    while(pline[addr].flow != FUNCEND)
    {
        if ((pline[addr].flow == IFGOTO) || (pline[addr].flow == GOTO))
        {
            if (pline[addr].gotoaddr == labeladdr) return TRUE;
        }
        addr++;
    }
    return FALSE;
}

void AddFlow(controlflowenum *oldflow, controlflowenum newflow)
{
    if ((*oldflow == IFCLOSE) && (newflow == IFCLOSE))
    {
        *oldflow = IFCLOSE2;
        return;
    }
    if ((*oldflow == IFCLOSE2) && (newflow == IFCLOSE))
    {
        *oldflow = IFCLOSE3;
        return;
    }
    if ((*oldflow == IFCLOSE3) && (newflow == IFCLOSE))
    {
        *oldflow = IFCLOSE4;
        return;
    }
    if ((*oldflow == IFCLOSE4) && (newflow == IFCLOSE))
    {
        fprintf(stderr, "Error: Too much closing brackets");
        exit(1);
    }
    if ((*oldflow == DOSIMPLE) && (newflow == DOSIMPLE))
    {
        fprintf(stderr, "Error: flow already full");
        exit(1);
    }
    *oldflow = newflow;
}

int ContainsFlow(int startaddr, int endaddr)
{
    int addr;
    for(addr = startaddr; addr < endaddr; addr++)
    {
        controlflowenum flow = pline[addr].flow;
        if (flow == DO) addr = pline[addr].loopaddr;
        if ((flow == LOOP) || (flow == GOTO) || (flow == IFGOTO) || (pline[addr].labelid > 0)) return TRUE;
    }
    return FALSE;
}

void TreatIfGoto(DICTENTRY *e, int ifgotoaddr)
{
    int labeladdr = pline[ifgotoaddr].gotoaddr;
    if (labeladdr < ifgotoaddr) return;
    if (ContainsFlow(ifgotoaddr+1, labeladdr)) return;

    AddFlow(&pline[ifgotoaddr].flow, IFNOT);
    AddFlow(&pline[labeladdr-1].flow, IFCLOSE);
    if (!IsLabelStillInUse(e, labeladdr)) pline[labeladdr].labelid = 0;
}

void TreatLoop(DICTENTRY *e, int ifgotoaddr)
{
    int labeladdr = pline[ifgotoaddr].gotoaddr;
    if (labeladdr > ifgotoaddr) return;
    if (pline[labeladdr].flow != NONE) return;
    if (ContainsFlow(labeladdr+1, ifgotoaddr)) return;

    AddFlow(&pline[labeladdr].flow, DOSIMPLE);
    AddFlow(&pline[ifgotoaddr].flow, LOOPTEST);
    if (!IsLabelStillInUse(e, labeladdr)) pline[labeladdr].labelid = 0;
}

void TreatEndlessLoop(DICTENTRY *e, int gotoaddr)
{
    int labeladdr = pline[gotoaddr].gotoaddr;
    if (labeladdr > gotoaddr) return;
    if (pline[labeladdr].flow != NONE) return;
    if (ContainsFlow(labeladdr+1, gotoaddr)) return;

    AddFlow(&pline[labeladdr].flow, DOSIMPLE);
    AddFlow(&pline[gotoaddr].flow, LOOPENDLESS);
    if (!IsLabelStillInUse(e, labeladdr)) pline[labeladdr].labelid = 0;
}


void TreatIfElseGoto(DICTENTRY *e, int ifgotoaddr)
{
    int labeladdr = pline[ifgotoaddr].gotoaddr;

    if (labeladdr < ifgotoaddr) return;
    int elsegotoaddr = labeladdr-4;
    if (pline[elsegotoaddr].flow != GOTO) return;
    if (ContainsFlow(ifgotoaddr+1, elsegotoaddr)) return;
    int elselabeladdr = pline[elsegotoaddr].gotoaddr;
    if (elselabeladdr == labeladdr) return;
    if (elselabeladdr < elsegotoaddr) return;
    if (pline[labeladdr].flow != NONE) return;
    if (ContainsFlow(labeladdr+1, elselabeladdr)) return;

    AddFlow(&pline[ifgotoaddr].flow, IFNOT);
    AddFlow(&pline[elsegotoaddr].flow, IFELSE);
    AddFlow(&pline[elselabeladdr-1].flow, IFCLOSE);
    if (!IsLabelStillInUse(e, elselabeladdr)) pline[elselabeladdr].labelid = 0;
    if (IsLabelStillInUse(e, labeladdr))
    {
        fprintf(stderr, "Error: label still in use\n");
        exit(1);
    }
    pline[labeladdr].labelid = 0;
}

void RemoveGotos(DICTENTRY *e)
{
    int addr = e->parp;
    while(pline[addr].flow != FUNCEND)
    {
        if (pline[addr].flow == IFGOTO)
        {
            TreatIfGoto(e, addr);
            TreatIfElseGoto(e, addr);
            TreatLoop(e, addr);
        }
        if (pline[addr].flow == GOTO)
        {
            TreatEndlessLoop(e, addr);
        }
        addr++;
    }
}

// ----------------------------------------------------

void Spc(FILE *fp, int spc)
{
    int i;
    for(i=0; i<spc; i++)
    {
        fprintf(fp, "  ");
    }
}

// ----------------------------------------------------

void WriteWordHeader(FILE *fp, DICTENTRY *e)
{
    int i = 0;
    if (e == NULL)
    {
        fprintf(stderr, "Error: No dictentry found");
        exit(1);
    }
    char *s = GetWordName(e);
    fprintf(fp,
    "\n// ================================================\n"
    "// 0x%04x: WORD '%s' codep=0x%04x parp=0x%04x\n"
    "// ================================================\n",
    e->addr, s, e->codep, e->parp);
    if (e->isentry) fprintf(fp, "// entry\n");
}

int WriteParsedFunction(FILE *fp, DICTENTRY *efunc, int ovidx)
{
    int j;
    int addr = efunc->parp;
    char *s = GetWordName(efunc);
    fprintf(fp, "\nvoid %s() // %s\n{\n", Forth2CString(s), s);
    RemoveGotos(efunc);
    RemoveGotos(efunc);
    RemoveGotos(efunc);
    RemoveGotos(efunc);
    //RemoveGotos(e);
    if (efunc->nvars > 0)
    {
        fprintf(fp, "  unsigned short int ");
        for(j=0; j<efunc->nvars-1; j++)
        {
            fprintf(fp, "%s, ", efunc->vars[j]);
        }
        fprintf(fp, "%s;\n", efunc->vars[efunc->nvars-1]);
    }

    int nspc = 1;
    while(1)
    {
        if (pline[addr].done == FALSE)
        {
            fprintf(fp, "// db 0x%02x\n", Read8(addr));
        }
        if (pline[addr].iswordheader)
        {
            fprintf(fp, "}\n\n");
            return addr;
        }

        if (pline[addr].labelid)
        {
            fprintf(fp, "\n");
            Spc(fp, nspc);
            fprintf(fp, "label%i:\n", pline[addr].labelid);
        }

        switch(pline[addr].flow)
        {
            case DO:
                fprintf(fp, "\n");
                Spc(fp, nspc);
                fprintf(fp, "%s = Pop();\n", GetVariableName(efunc, pline[addr].variableidx+0));
                Spc(fp, nspc);
                fprintf(fp, "%s = Pop();\n", GetVariableName(efunc, pline[addr].variableidx+1));
                Spc(fp, nspc);
                fprintf(fp, "do // (DO)\n");
                Spc(fp, nspc);
                fprintf(fp, "{\n");
                nspc++;
                break;

            case DOSIMPLE:
                Spc(fp, nspc);
                fprintf(fp, "do\n");
                Spc(fp, nspc);
                fprintf(fp, "{\n");
                nspc++;
                break;

            case LOOPTEST:
                nspc--;
                Spc(fp, nspc);
                fprintf(fp, "} while(Pop() == 0);\n");
                break;

            case LOOPENDLESS:
                nspc--;
                Spc(fp, nspc);
                fprintf(fp, "} while(1);\n");
                break;

            case LOOP:
            {
                DICTENTRY *e = GetDictEntry(Read16(addr)+2, pline[addr].ovidx);
                if (strcmp(e->r, "(/LOOP)") == 0)
                {
                    Spc(fp, nspc);
                    fprintf(fp,"%s += Pop();\n", GetVariableName(efunc, pline[addr].variableidx+0));
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "} while(%s<%s); // (/LOOP)\n\n",
                    GetVariableName(efunc, pline[addr].variableidx+0),
                    GetVariableName(efunc, pline[addr].variableidx+1));
                } else
                if (strcmp(e->r, "(LOOP)") == 0)
                {
                    Spc(fp, nspc);
                    fprintf(fp, "%s++;\n", GetVariableName(efunc, pline[addr].variableidx+0));
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "} while(%s<%s); // (LOOP)\n\n",
                    GetVariableName(efunc, pline[addr].variableidx+0),
                    GetVariableName(efunc, pline[addr].variableidx+1));
                } else
                if (strcmp(e->r, "(+LOOP)") == 0)
                {
                    Spc(fp, nspc);
                    fprintf(fp, "int step = Pop();\n");
                    Spc(fp, nspc);
                    fprintf(fp, "%s += step;\n", GetVariableName(efunc, pline[addr].variableidx+0));
                    Spc(fp, nspc);
                    fprintf(fp, "if (((step>=0) && (%s>=%s)) || ((step<0) && (%s<=%s))) break;\n",
                    GetVariableName(efunc, pline[addr].variableidx+0),
                    GetVariableName(efunc, pline[addr].variableidx+1),
                    GetVariableName(efunc, pline[addr].variableidx+0),
                    GetVariableName(efunc, pline[addr].variableidx+1));
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "} while(1); // (+LOOP)\n\n");
                } else
                {
                    exit(1);
                }
                break;
            }
            case IFGOTO:
                Spc(fp, nspc);
                fprintf(fp, "if (Pop() == 0) goto label%i;\n", pline[pline[addr].gotoaddr].labelid);
                break;

            case IFEXIT:
                Spc(fp, nspc);
                fprintf(fp, "if (Pop() == 0) return;\n");
                break;

            case GOTO:
                Spc(fp, nspc);
                fprintf(fp, "goto label%i;\n", pline[pline[addr].gotoaddr].labelid);
                break;

            case FUNCEND:
                fprintf(fp, "}\n\n");
                return addr;
                break;

            case EXIT:
                Spc(fp, nspc);
                fprintf(fp, "return;\n");
                break;

            case IFNOT:
                Spc(fp, nspc);
                fprintf(fp, "if (Pop() != 0)\n", pline[pline[addr].gotoaddr].labelid);
                Spc(fp, nspc);
                fprintf(fp, "{\n");
                nspc++;
                break;

            case IFELSE:
                nspc--;
                Spc(fp, nspc);
                fprintf(fp, "} else\n");
                Spc(fp, nspc);
                fprintf(fp, "{\n");
                nspc++;
                break;

            case IFCLOSE:
                nspc--;
                Spc(fp, nspc);
                fprintf(fp, "}\n");
                break;

            case IFCLOSE2:
                for(j=0; j<2; j++)
                {
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "}\n");
                }
                break;

            case IFCLOSE3:
                for(j=0; j<3; j++)
                {
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "}\n");
                }
                break;

            case IFCLOSE4:
                for(j=0; j<4; j++)
                {
                    nspc--;
                    Spc(fp, nspc);
                    fprintf(fp, "}\n");
                }
                break;
        }

        if (pline[addr].istrivialword)
        {
            char func[STRINGLEN*2];
            DICTENTRY *e = GetDictEntry(Read16(addr)+2, pline[addr].ovidx);
            GetMacro(addr, e, efunc, func, pline[addr].ovidx);
            Spc(fp, nspc);
            fprintf(fp, "%s", func);
        }
        if ((pline[addr].str != NULL) && (pline[addr].str[0] != 0))
        {
            Spc(fp, nspc);
            fprintf(fp, "%s", pline[addr].str);
        }
        if (pline[addr].isasm)
        {
            char buffer[0x80];
            disasm(0x0, (unsigned)addr, mem, buffer);
            fprintf(fp, "// 0x%04x: %s\n", addr, buffer);
            if (Read8(addr) == 0xc3) // ret
            {
                fprintf(fp, "\n");
            }
        }
        addr++;
    }

    return addr;
}

void WriteParsedFile(FILE *fp, int ovidx, int minaddr, int maxaddr)
{
    int addr = 0;
    int j = 0;
    char str[0x10000];
    DICTENTRY *efunc = NULL;

    for(addr=minaddr; addr<=maxaddr; addr++)
    {
        if (pline[addr].iswordheader)
        {
            efunc = GetDictEntry(addr+2, ovidx);
            WriteWordHeader(fp, efunc);
            char *s = GetWordName(efunc);
            if (efunc->codep == CODECALL)
            {
                addr = WriteParsedFunction(fp, efunc, ovidx)-1;
                continue;
            }

            switch(efunc->codep)
            {
                case CODELOADDATA:
                    fprintf(fp, "LoadDataType %s = {0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%04x};\n",
                    Forth2CString(s),
                    Read8(efunc->parp+0),
                    Read8(efunc->parp+1),
                    Read8(efunc->parp+2),
                    Read8(efunc->parp+3),
                    Read16(efunc->parp+4));

                    addr = efunc->parp+6-1;
                    continue;

                case CODEIFIELD:
                    fprintf(fp, "IFieldType %s = {0x%02x, 0x%02x, 0x%02x};\n",
                    Forth2CString(s),
                    Read8(efunc->parp+0),
                    Read8(efunc->parp+1),
                    Read8(efunc->parp+2));

                    addr = efunc->parp+3-1;
                    continue;

                case CODECONSTANT:
                    fprintf(fp, "// 0x%04x: dw 0x%04x\n", efunc->parp, Read16(efunc->parp+0));
                    addr = efunc->parp+2-1;
                    continue;

                case CODEPUSH2WORDS:
                    fprintf(fp, "// 0x%04x: dw 0x%04x 0x%04x\n", efunc->parp, Read16(efunc->parp+0), Read16(efunc->parp+2));
                    addr = efunc->parp+4-1;
                    continue;
            }
        }
        if (pline[addr].isasm)
        {
            char buffer[0x80];
            disasm(0x0, (unsigned)addr, mem, buffer);
            fprintf(fp, "// 0x%04x: %s\n", addr, buffer);
            if (Read8(addr) == 0xc3) // ret
            {
                fprintf(fp, "\n");
            }
        }
        if ((pline[addr].str != NULL) && (pline[addr].str[0] != 0))
        {
            fprintf(fp, "%s", pline[addr].str);
        }
        if (!pline[addr].done)
        {
            int nstr = 0;
            fprintf(fp, "// 0x%04x: db ", addr);
            while((!pline[addr].done) && (addr <= maxaddr))
            {
                fprintf(fp, "0x%02x ", Read8(addr));

                str[nstr+0] = 0x20;
                str[nstr+1] = 0x0;
                nstr++;
                if ((Read8(addr) >= 0x20) && (Read8(addr) < 128))
                {
                    str[nstr-1] = Read8(addr);
                }
                addr++;
            }
            fprintf(fp, "'%s'\n", str);
            addr--;
        }
    }
    fprintf(fp, "\n");
}
