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
void WriteParsedFunctions(FILE *fp, int ovidx, int minaddr, int maxaddr);
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
    WriteParsedFunctions(fpc, ovidx, minaddr, maxaddr);

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
        (dict[i].codep == CODELOADDATA) ||
        (dict[i].codep == CODELOADOVERLAY) ||
        (dict[i].codep == CODETABLE) ||
        (dict[i].codep == CODESETCOLOR) ||
        (dict[i].codep == CODEFUNC3) ||
        (dict[i].codep == CODEPUSH2WORDS) ||
        (dict[i].codep == CODEFUNC5) ||
        (dict[i].codep == CODEFUNC6) ||
        (dict[i].codep == CODESETVOCABULARY) ||
        (dict[i].codep == CODEIFIELD) ||
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

void GetMacro(unsigned short addr, DICTENTRY *e, char *ret, int currentovidx)
{
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
        int addr = Read16(e->parp+4);
        snprintf(ret, STRINGLEN, "LoadData(\"%s\"); // from '%s'\n", s, FindDirEntry(addr));
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
        snprintf(ret, STRINGLEN, "Push(0x%04x); // IFIELD(%s)\n", IFIELDOFFSET + Read8(e->parp+1), s);
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
    if (strcmp(s, "0") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(0); // 0\n");
        return;
    }
    if (strcmp(s, "1") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(1); // 1\n");
        return;
    }
    if (strcmp(s, "2") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(2); // 2\n");
        return;
    }
    if (strcmp(s, "0=") == 0)
    {
        snprintf(ret, STRINGLEN, "if (Pop() == 0) Push(1); else Push(0); // 0=\n");
        return ;
    }
    if (strcmp(s, "OR") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop() | Pop()); // OR\n");
        return;
    }
    if (strcmp(s, "AND") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop() & Pop()); // AND\n");
        return;
    }
    if (strcmp(s, "XOR") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop() ^ Pop()); // XOR\n");
        return;
    }
    if (strcmp(s, "=") == 0)
    {
        snprintf(ret, STRINGLEN, "Push((Pop()==Pop())?1:0); // =\n");
        return;
    }
    if (strcmp(s, "+") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop() + Pop()); // +\n");
        return;
    }
    if (strcmp(s, "*") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop() * Pop()); // *\n");
        return;
    }
    if (strcmp(s, "NEGATE") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(-Pop()); // NEGATE\n");
        return;
    }
    if (strcmp(s, "NOT") == 0)
    {
        snprintf(ret, STRINGLEN, "if (Pop() == 0) Push(1); else Push(0); // NOT\n");
        return;
    }
    if (strcmp(s, "DROP") == 0)
    {
        snprintf(ret, STRINGLEN, "Pop(); // DROP\n");
        return;
    }
    if (strcmp(s, "2DROP") == 0)
    {
        snprintf(ret, STRINGLEN, "Pop(); Pop();// 2DROP\n");
        return;
    }
    if (strcmp(s, "2*") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop()*2); // 2*\n");
        return;
    }
    if (strcmp(s, "3+") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop()+3); // 3+\n");
        return;
    }
    if (strcmp(s, "1+") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop()+1); // 1+\n");
        return;
    }
    if (strcmp(s, "2+") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop()+2); // 2+\n");
        return;
    }
    if (strcmp(s, "1-") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop()-1); // 1-\n");
        return;
    }
    if (strcmp(s, "2-") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop()-2); // 2-\n");
        return;
    }
    if (strcmp(s, "16/") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop()>>4); // 16/\n"); // TODO check for signed and unsigned
        return;
    }
    if (strcmp(s, "2/") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop()>>1); // 2/\n");
        return;
    }
    if (strcmp(s, "16*") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Pop()<<4); // 16*\n");
        return;
    }
    if (strcmp(s, "@") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Read16(Pop())); // @\n");
        return;
    }
    if (strcmp(s, "C@") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Read8(Pop())&0xFF); // C@\n");
        return;
    }
    if (strcmp(s, "DUP") == 0)
    {
        snprintf(ret, STRINGLEN, "Push(Read16(regsp)); // DUP\n");
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

int IsLabelStillInUse(DICTENTRY *e, int labelid)
{
    int addr = e->parp;
    while(pline[addr].flow != FUNCEND)
    {
        if ((pline[addr].flow == IFGOTO) || (pline[addr].flow == GOTO))
        {
            if (pline[addr].gotoid == labelid) return TRUE;
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
    *oldflow = newflow;
}

void TreatIfGoto(DICTENTRY *e, int ifgotoaddr)
{
    int addr = ifgotoaddr;
    int labelid = pline[ifgotoaddr].gotoid;
    addr++;
    while(pline[addr].flow != FUNCEND)
    {
        if (pline[addr].labelid == labelid)
        {
            AddFlow(&pline[ifgotoaddr].flow, IFNOT);
            AddFlow(&pline[addr-1].flow, IFCLOSE);
            if (!IsLabelStillInUse(e, labelid)) pline[addr].labelid = 0;
            return;
        }
        controlflowenum flow = pline[addr].flow;
        if (flow == DO) addr = pline[addr].loopaddr;
        if ((flow == LOOP) || (flow == GOTO) || (flow == IFGOTO) || (pline[addr].labelid > 0)) return;
        addr++;
    }
}

void TreatIfElseGoto(DICTENTRY *e, int ifgotoaddr)
{
    int addr = ifgotoaddr;
    int labelid = pline[ifgotoaddr].gotoid;

    int elsegotoaddr = 0;
    int elselabelid = 0;

    addr++;
    while(pline[addr].flow != FUNCEND)
    {
        controlflowenum flow = pline[addr].flow;
        if (elsegotoaddr == 0)
        {
            if ((flow == GOTO) && (pline[addr+4].labelid == labelid))
            {
                elsegotoaddr = addr;
                elselabelid = pline[addr].gotoid;
                addr += 4;
                if (pline[addr].flow != NONE) return;
                addr++;
                flow = pline[addr].flow;
            }
        } else
        {
            if (pline[addr].labelid == elselabelid)
            {
                AddFlow(&pline[ifgotoaddr].flow, IFNOT);
                AddFlow(&pline[elsegotoaddr].flow, IFELSE);
                AddFlow(&pline[addr-1].flow, IFCLOSE);
                if (!IsLabelStillInUse(e, elselabelid)) pline[addr].labelid = 0;
                if (IsLabelStillInUse(e, labelid))
                {
                    fprintf(stderr, "Error: label still in use\n");
                    exit(1);
                }
                pline[elsegotoaddr+4].labelid = 0;
                return;
            }
        }
        if (flow == DO) addr = pline[addr].loopaddr;
        if ((flow == LOOP) || (flow == GOTO) || (flow == IFGOTO) || (pline[addr].labelid > 0)) return;
        addr++;
    }
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

void WriteWordHeader(FILE *fp, DICTENTRY *e)
{
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
    if (e->codep == CODECALL)
    {
        fprintf(fp, "\nvoid %s() // %s\n{\n", Forth2CString(s), s);
        RemoveGotos(e);
        RemoveGotos(e);
        RemoveGotos(e);
        RemoveGotos(e);
        //RemoveGotos(e);
        if (pline[e->parp-2].initvarstr != NULL) fprintf(fp, "%s", pline[e->parp-2].initvarstr);
    }
}


void WriteParsedFunctions(FILE *fp, int ovidx, int minaddr, int maxaddr)
{
    int i = 0;
    int j = 0;

    int dbmode = 0; // bool
    char str[0x10000];
    int nstr = 0;
    int nspc = 0;

    for(i=minaddr; i<=maxaddr; i++)
    {
        if (pline[i].iswordheader)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            dbmode = 0;
            DICTENTRY *e = GetDictEntry(i+2, ovidx);
            WriteWordHeader(fp, e);
            if (e->codep == CODECALL) nspc = 1;
        }

        if (pline[i].labelid)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            dbmode = 0;
            fprintf(fp, "\n");
            Spc(fp, nspc);
            fprintf(fp, "label%i:\n", pline[i].labelid);
        }

        switch(pline[i].flow)
        {
            case DO:
                nspc++;
                break;

            case LOOP:
                nspc--;
                break;

            case IFGOTO:
                Spc(fp, nspc);
                fprintf(fp, "if (Pop() == 0) goto label%i;\n", pline[i].gotoid);
                break;

            case IFEXIT:
                Spc(fp, nspc);
                fprintf(fp, "if (Pop() == 0) return;\n");
                break;

            case GOTO:
                Spc(fp, nspc);
                fprintf(fp, "goto label%i;\n", pline[i].gotoid);
                break;

            case FUNCEND:
                fprintf(fp, "}\n\n");
                nspc = 0;
                break;

            case EXIT:
                Spc(fp, nspc);
                fprintf(fp, "return;\n");
                break;

            case IFNOT:
                Spc(fp, nspc);
                fprintf(fp, "if (Pop() != 0)\n", pline[i].gotoid);
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
                break;        }

        if (pline[i].istrivialword)
        {
            char func[STRINGLEN*2];
            DICTENTRY *e = GetDictEntry(Read16(i)+2, pline[i].ovidx);
            GetMacro(i, e, func, pline[i].ovidx);
            Spc(fp, nspc);
            fprintf(fp, "%s", func);
        }
        if (pline[i].str[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            Spc(fp, nspc);
            fprintf(fp, "%s", pline[i].str);
            dbmode = 0;
        }

        if (pline[i].isasm)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            dbmode = 0;
            char buffer[0x80];
            disasm(0x0, (unsigned)i, mem, buffer);
            fprintf(fp, "// 0x%04x: %s\n", i, buffer);
            if (Read8(i) == 0xc3) // ret
            {
                fprintf(fp, "\n");
            }
        }

        if (pline[i].done)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
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
