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

void WriteExtern(FILE *fp, int ovidx)
{
    const char* ignorewords[] =
    {
        "0","1","2","0=","OR","AND","XOR",
        "=","+","*","NEGATE","NOT","DROP",
        "2DROP","2*","3+","1+","2+","1-",
        "2-","16/","2/","16*","@","C@","DUP",
        "?DUP",NULL
    };

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
        fprintf(fp, "extern const unsigned short int cc_%s; // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
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
        fprintf(fp, "void %s(); // %s\n", Forth2CString(s), s);
        dict[i].doextern = FALSE;
    }
    for(i=0; i<ndict; i++)
    {
        if (!dict[i].doextern) continue;
        char *s = GetWordName(&dict[i]);
        j = 0;
        while(ignorewords[j] != NULL)
        {
            if (strcmp(ignorewords[j], s) == 0) break;
            j++;
        }
        if (ignorewords[j] == NULL) fprintf(fp, "void %s(); // %s\n", Forth2CString(s), s);
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
        return;
    }
    if (e->codep == CODE2LIT) // constant number
    {
        snprintf(ret, STRINGLEN, "  Push(0x%04x); Push(0x%04x);\n", Read16(addr + 2), Read16(addr + 4));
        return;
    }
    if (e->codep == CODEPOINTER) // pointer to variable or table
    {
        snprintf(ret, STRINGLEN, "  Push(pp_%s); // %s\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODECONSTANT)
    {
        snprintf(ret, STRINGLEN, "  Push(Read16(cc_%s)); // %s\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODEDI) // User data
    {
        snprintf(ret, STRINGLEN, "  Push(user_%s); // %s\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODELOADDATA)
    {
        int addr = Read16(e->parp+4);
        snprintf(ret, STRINGLEN, "  LoadData(\"%s\"); // from '%s'\n", s, FindDirEntry(addr));
        return;
    }
    if (e->codep == CODETABLE)
    {
        snprintf(ret, STRINGLEN, "  GetTableEntry(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODESETCOLOR)
    {
        snprintf(ret, STRINGLEN, "  SetColor(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEFUNC3)
    {
        snprintf(ret, STRINGLEN, "  Func3(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEPUSH2WORDS)
    {
        snprintf(ret, STRINGLEN, "  Push2Words(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEFUNC5)
    {
        snprintf(ret, STRINGLEN, "  Func5(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEFUNC6)
    {
        snprintf(ret, STRINGLEN, "  Func6(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODESETVOCABULARY)
    {
        snprintf(ret, STRINGLEN, "  SetVocabulary(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODEIFIELD)
    {
        snprintf(ret, STRINGLEN, "  Push(0x%04x); // IFIELD(%s)\n", IFIELDOFFSET + Read8(e->parp+1), s);
        return;
    }
    if (e->codep == CODEFUNC9)
    {
        snprintf(ret, STRINGLEN, "  Func9(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODECASE)
    {
        snprintf(ret, STRINGLEN, "  %s(); // %s case\n", Forth2CString(s), s);
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
        snprintf(ret, STRINGLEN, "  ReadArray(Read16(0x%04x + 6), 0x%04x); // %s\n", e->parp, Read16(e->parp + 4), s);
        return;
    }
    if (e->codep == CODEFUNC12)
    {
        snprintf(ret, STRINGLEN, "  Func12(\"%s\");\n", s);
        return;
    }
    if (e->codep == CODERULE)
    {
        snprintf(ret, STRINGLEN, "  %s(); // %s rule\n", Forth2CString(s), s);
        return;
    }
    if (e->codep == CODEEXEC)
    {
        int par = Read16(Read16(e->parp)+REGDI);
        snprintf(ret, STRINGLEN, "  Exec(\"%s\"); // call of word 0x%04x '%s'\n",
            s, par, GetDictWord(par, currentovidx));
        return;
    }
    if (strcmp(s, "0") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(0); // 0\n");
        return;
    }
    if (strcmp(s, "1") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(1); // 1\n");
        return;
    }
    if (strcmp(s, "2") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(2); // 2\n");
        return;
    }
    if (strcmp(s, "0=") == 0)
    {
        snprintf(ret, STRINGLEN, "  if (Pop() == 0) Push(1); else Push(0); // 0=\n");
        return ;
    }
    if (strcmp(s, "OR") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() | Pop()); // OR\n");
        return;
    }
    if (strcmp(s, "AND") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() & Pop()); // AND\n");
        return;
    }
    if (strcmp(s, "XOR") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() ^ Pop()); // XOR\n");
        return;
    }
    if (strcmp(s, "=") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push((Pop()==Pop())?1:0); // =\n");
        return;
    }
    if (strcmp(s, "+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() + Pop()); // +\n");
        return;
    }
    if (strcmp(s, "*") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop() * Pop()); // *\n");
        return;
    }
    if (strcmp(s, "NEGATE") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(-Pop()); // NEGATE\n");
        return;
    }
    if (strcmp(s, "NOT") == 0)
    {
        snprintf(ret, STRINGLEN, "  if (Pop() == 0) Push(1); else Push(0); // NOT\n");
        return;
    }
    if (strcmp(s, "DROP") == 0)
    {
        snprintf(ret, STRINGLEN, "  Pop(); // DROP\n");
        return;
    }
    if (strcmp(s, "2DROP") == 0)
    {
        snprintf(ret, STRINGLEN, "  Pop(); Pop();// 2DROP\n");
        return;
    }
    if (strcmp(s, "2*") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()*2); // 2*\n");
        return;
    }
    if (strcmp(s, "3+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()+3); // 3+\n");
        return;
    }
    if (strcmp(s, "1+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()+1); // 1+\n");
        return;
    }
    if (strcmp(s, "2+") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()+2); // 2+\n");
        return;
    }
    if (strcmp(s, "1-") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()-1); // 1-\n");
        return;
    }
    if (strcmp(s, "2-") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()-2); // 2-\n");
        return;
    }
    if (strcmp(s, "16/") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()>>4); // 16/\n"); // TODO check for signed and unsigned
        return;
    }
    if (strcmp(s, "2/") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()>>1); // 2/\n");
        return;
    }
    if (strcmp(s, "16*") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Pop()<<4); // 16*\n");
        return;
    }
    if (strcmp(s, "@") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Read16(Pop())); // @\n");
        return;
    }
    if (strcmp(s, "C@") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Read8(Pop())&0xFF); // C@\n");
        return;
    }
    if (strcmp(s, "DUP") == 0)
    {
        snprintf(ret, STRINGLEN, "  Push(Read16(regsp)); // DUP\n");
        return;
    }
    if (strcmp(s, "?DUP") == 0)
    {
        snprintf(ret, STRINGLEN, "  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP\n");
        return;
    }

    snprintf(ret, STRINGLEN, "  %s(); // %s\n", Forth2CString(s), s);
    return;
}

void WriteParsedFunctions(FILE *fp, int ovidx, int minaddr, int maxaddr)
{
    int i = 0;

    int dbmode = 0; // bool
    char str[0x10000];
    int nstr = 0;
    for(i=minaddr; i<=maxaddr; i++)
    {
        if (pline[i].wordheader)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            dbmode = 0;
            DICTENTRY *e = GetDictEntry(i+2, ovidx);
            if (e == NULL) {
                exit(1);
            }
            fprintf(fp,
            "\n// ================================================\n"
            "// 0x%04x: WORD '%s' codep=0x%04x parp=0x%04x\n"
            "// ================================================\n",
            e->addr, GetWordName(e), e->codep, e->parp);
            if (e->isentry) fprintf(fp, "// entry\n");
        }
        if (pline[i].labelid)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "\n  label%i:\n", pline[i].labelid);
            dbmode = 0;
        }
        if (pline[i].istrivialword)
        {
            char func[STRINGLEN*2];
            DICTENTRY *e = GetDictEntry(Read16(i)+2, pline[i].ovidx);
            GetMacro(i, e, func, pline[i].ovidx);
            fprintf(fp, "%s", func);
        }
        if (pline[i].str[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].str);
            dbmode = 0;
        }
        if (pline[i].initvarstr != NULL)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].initvarstr);
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
