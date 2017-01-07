#include<stdlib.h>
#include"transpile2C.h"
#include"global.h"
#include"dictionary.h"
#include"utils.h"
#include"parser.h"
#include"../emul/cpu.h"
#include"disasm/debugger.h"

void WriteExtern(FILE *fp, int ovidx);
void WriteVariables(FILE *fp, int ovidx);
void WriteParsedFunctions(int minaddr, int maxaddr, FILE *fp);
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
    WriteParsedFunctions(minaddr, maxaddr, fpc);

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
    int i = 0;
    int j = 0;

    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// ============= EXTERN ============\n");
    fprintf(fp, "// =================================\n");

    for(i=0; i<ndict; i++)
    {
        if (dict[i].codep != CODECONSTANT) continue;
        if (!dict[i].doextern) continue;
        fprintf(fp, "extern const unsigned short int cc_%s; // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
        dict[i].doextern = 0;
    }
    for(i=0; i<ndict; i++)
    {
        if (dict[i].codep != CODEPOINTER) continue;
        if (!dict[i].doextern) continue;
        fprintf(fp, "extern const unsigned short int pp_%s; // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
        dict[i].doextern = 0;
    }
    for(i=0; i<ndict; i++)
    {
        if (dict[i].codep != CODEDI) continue;
        if (!dict[i].doextern) continue;
        fprintf(fp, "extern const unsigned short int user_%s; // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
        dict[i].doextern = 0;
    }
    for(i=0; i<ndict; i++)
    {
        if (dict[i].codep != CODECALL) continue;
        if (!dict[i].doextern) continue;
        fprintf(fp, "void %s(); // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
        dict[i].doextern = 0;
    }
    for(i=0; i<ndict; i++)
    {
        if (!dict[i].doextern) continue;
        fprintf(fp, "void %s(); // %s\n", Forth2CString(GetWordName(&dict[i])), GetWordName(&dict[i]));
        dict[i].doextern = 0;
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
