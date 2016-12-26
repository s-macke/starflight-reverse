#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"dictionary.h"
#include"extract.h"
#include"utils.h"
#include"../emul/cpu.h"



struct DICTENTRY dict[10000];
int ndict = 0;

char* GetWordName(DICTENTRY *dict)
{
    int i;
    for(i = 0; renamewords[i].newword != NULL; i++)
    {
        if ((dict->ovidx == (signed char)renamewords[i].ovidx) && (dict->parp == renamewords[i].parp))
            return renamewords[i].newword;
    }

    return dict->r;
}

DICTENTRY* GetDictEntry(unsigned short addr, int ovidx)
{
    int i = 0;
    if (addr < 0x100+FILESTAR0SIZE) ovidx = -1;
    for(i=0; i<ndict; i++)
    {
        if ((dict[i].ovidx != ovidx) && (dict[i].ovidx != -1)) continue;
        if (dict[i].parp == addr) return &dict[i];
    }
    unsigned short codep = Read16(addr-2);
    if (codep == 0x0) return NULL;

    snprintf(dict[ndict].r, STRINGLEN, "UNK_0x%04x", addr);
    dict[ndict].codep = codep;
    dict[ndict].parp = addr;
    dict[ndict].ofs = addr-2;
    dict[ndict].ovidx = ovidx;
    ndict++;
    return &dict[ndict-1];
}

char* GetDictWord(unsigned short addr, int ovidx)
{
    return GetWordName(GetDictEntry(addr, ovidx));
}

int GetDictStart(int addr)
{
    int i = 0;
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ofs == addr) return i;
    }
    return -1;
}


// --------------------------------------------

int AddDirectory(int ofs, unsigned char *mem, int decrypt, int ovidx)
{
    unsigned short linkp = Read16(ofs);
    unsigned char bitfield = Read8(ofs+2);
    unsigned int length = bitfield & 0x3F;
    int i = 0;
    memset(&dict[ndict], 0, sizeof(DICTENTRY));
    dict[ndict].ofs = ofs;
    dict[ndict].linkp = linkp;
    dict[ndict].bits = bitfield;
    dict[ndict].ovidx = ovidx;
    dict[ndict].size = -1;

    int n = 0;
    do
    {
        i++;
        if (decrypt)
        {
            if (length == 1)
            {
                dict[ndict].r[n] = Read8(ofs+2+i) & 0x7F;
            } else
            {
                dict[ndict].r[n] = (Read8(ofs+2+i) ^ 0x7F) & 0x7F;
                mem[ofs+2+i] = ((Read8(ofs+2+i)^0x7F)&0x7F) | (Read8(ofs+2+i)&0x80); // restore upper bit
            }
        } else
        {
            dict[ndict].r[n] = (Read8(ofs+2+i)) & 0x7F;
            mem[ofs+2+i] = ((Read8(ofs+2+i))&0x7F) | (Read8(ofs+2+i)&0x80); // restore upper bit
        }

        n++;
    } while ((Read8(ofs+2+i)&128) == 0);
    int varp = ofs + i + 3;
    dict[ndict].codep = (mem[varp+1]<<8) | mem[varp+0];
    dict[ndict].parp = ofs+5+n;

    // find duplicate word labels
    /*
    for(i=0; i<ndict; i++) {
        if ((dict[i].ovidx == ovidx) && (strcmp(GetWordName(&dict[i]), GetWordName(&dict[ndict])) == 0)) {
            fprintf(stderr, "found duplicate:\n", ovidx, dict[i].r, dict[ndict].parp, dict[i].parp);
            fprintf(stderr, "{0x%02x, 0x%04x, \"%s_1\" }, // %s\n", 
            (unsigned char)ovidx, dict[ndict].parp, GetWordName(&dict[ndict]), dict[ndict].r);
            fprintf(stderr, "{0x%02x, 0x%04x, \"%s_2\" }, // %s\n", 
            (unsigned char)ovidx, dict[i].parp, GetWordName(&dict[i]), dict[i].r);
        }
    }
    */
    ndict++;
    return linkp - 2;
}

void ParseDict(unsigned char *mem, int linkp, int decrypt, int ovidx)
{
    int i = 0;
    int j = 0;

    for(i=0; i<5000; i++)
    {
        for(j=0; j<ndict; j++)
        {
            if (dict[j].ofs == linkp)
            if (dict[j].ovidx == ovidx)
            {
                fprintf(stderr, "duplicate\n");
                exit(1);
                return;
            }
        }
        linkp = AddDirectory(linkp, mem, decrypt, ovidx);
        if (linkp <= 0) return;
    }
}

void WriteDict(unsigned char *mem, FILE *fp, int ovidx)
{
    int i;
    unsigned int bitfield = 0;
    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// =========== DICTIONARY ==========\n");
    fprintf(fp, "// =================================\n");

    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        fprintf(fp, "// %15s", GetWordName(&dict[i]));
        fprintf(fp, "  codep:0x%04x parp:0x%04x size:0x%04x C-string:'%s'",
        dict[i].codep, dict[i].parp, dict[i].size, Forth2CString(GetWordName(&dict[i])));
/*
        fprintf(fp, " bitfield: %i %i %i  codep:0x%04x parp:0x%04x size:0x%04x",
        (bitfield>>7)&1, (bitfield>>6)&1, (bitfield>>5)&1,
        dict[i].codep, dict[i].parp, dict[i].size);
*/
        fprintf(fp, "\n");
    }
}

void SortDictionary()
{
    struct DICTENTRY temp;
    int i = 0;
    int j = 0;
    for(i=0; i<ndict; i++)
    for(j=0; j<ndict-1; j++)
    {
        if (dict[j].ovidx > dict[j+1].ovidx)
        {
            memcpy((void*)&temp,      (void*)&dict[j], sizeof(DICTENTRY));
            memcpy((void*)&dict[j],   (void*)&dict[j+1], sizeof(DICTENTRY));
            memcpy((void*)&dict[j+1], (void*)&temp, sizeof(DICTENTRY));
            continue;
        }

        if (dict[j].ovidx == dict[j+1].ovidx)
        if (dict[j].ofs > dict[j+1].ofs)
        {
            memcpy((void*)&temp,      (void*)&dict[j], sizeof(DICTENTRY));
            memcpy((void*)&dict[j],   (void*)&dict[j+1], sizeof(DICTENTRY));
            memcpy((void*)&dict[j+1], (void*)&temp, sizeof(DICTENTRY));
        }
    }

    for(i=0; i<ndict-1; i++)
    {
        if (dict[i].ovidx == dict[i+1].ovidx)
        {
            dict[i].size = dict[i+1].ofs - dict[i].parp;
        } else
        {
            dict[i].size = 0;
        }
    }
    dict[ndict-1].size = 0;
}

// --------------------------------------------

LineDesc pline[0x10000];

int PutEasyMacro(DICTENTRY *e, char *ret)
{
    ret[0] = 0;
    char *s = GetWordName(e);

    if (e->codep == CODEPOINTER) // pointer to variable or table
    {
        snprintf(ret, STRINGLEN, "  Push(0x%04x); // pointer to %s\n", e->parp, s);
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

unsigned short int FindLoopID(unsigned short int addr)
{
    int i;
    for(i=addr; i >= 0; i--)
    {
        if (pline[i].isfunction) return pline[i].nloop;
        if (pline[i].loopid != 0) return pline[i].loopid;
    }
    fprintf(stderr, "Error: Cannot find loop header at offset 0x%04x\n", addr);
    exit(1);
    return 0;
}


void ParsePartFunction(int ofs, LineDesc *l, int minaddr, int maxaddr, DICTENTRY *d, int currentovidx)
{
    if (d == NULL) {
        d = FindClosestFunction(ofs, currentovidx);
    }

    if (d->codep != CODECALL) {
        fprintf(stderr, "Error: not a forth function call");
        exit(1);
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
            overlays[currentovidx].entrypoints[overlays[currentovidx].nentrypoints] = par-2;
            overlays[currentovidx].nentrypoints++;

            snprintf(pline[ofs].str, STRINGLEN, "  %s(); // Overlay %s\n", s, overlays[currentovidx].name);
            ofs += 2;
            continue;
        }

        if (e->codep == CODELIT) // constant number
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            snprintf(pline[ofs].str, STRINGLEN, "  Push(0x%04x);\n", par);
            ofs += 4;
        } else
        if (e->codep == CODE2LIT) // constant number
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            pline[ofs+4].done = 1;
            pline[ofs+5].done = 1;
            snprintf(pline[ofs].str, STRINGLEN, "  Push(0x%04x); Push(0x%04x);\n", Read16(ofs + 2), Read16(ofs + 4));
            ofs += 6;
        } else
        if (strcmp(s, "DOTASKS") == 0)
        {
            int codep1 = Read16(Read16(ofs-4));
            int codep2 = Read16(Read16(ofs-8));
            int codep3 = Read16(Read16(ofs-12));
            if ((codep1 != CODELIT) && (codep2 != CODELIT) && (codep3 != CODELIT))
            {
                fprintf(stderr, "Error: DOTASKS without specifying tasks in ov:%i\n", currentovidx);
                exit(1);
            } else
            {
                int c1 = Read16(ofs-2);
                int c2 = Read16(ofs-6);
                int c3 = Read16(ofs-10);
                char *s1 = NULL, *s2 = NULL, *s3 = NULL;
                if (c1 != 0) s1 = GetDictWord(Read16(ofs-2), currentovidx);
                if (c2 != 0) s2 = GetDictWord(Read16(ofs-6), currentovidx);
                if (c3 != 0) s3 = GetDictWord(Read16(ofs-10), currentovidx);
                snprintf(pline[ofs].str, STRINGLEN, "  DOTASKS(%s, %s, %s);\n", s1, s2, s3);
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
            if ((par >= minaddr) && (par <= maxaddr))
            {
                DICTENTRY *dcall = GetDictEntry(par, currentovidx);
                pline[par].isfunction = 1;
                snprintf(pline[par].strfunc, STRINGLEN, "\nvoid %s() // %s\n{\n", Forth2CString(s), s);
                ParsePartFunction(ofs+2, l, minaddr, maxaddr, d, currentovidx);
                ParsePartFunction(par, l, minaddr, maxaddr, dcall, currentovidx);
            }
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
        if (e->codep == CODELOADDATA)
        {
            int addr = Read16(par+4);
            snprintf(pline[ofs].str, STRINGLEN, "  LoadData(\"%s\"); // from '%s'\n", s, FindDirEntry(addr));
            ofs += 2;
        } else
        if (e->codep == CODETABLE)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  GetTableEntry(%s);\n", s);
            ofs += 2;
        } else
        if (e->codep == CODESETCOLOR)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  SetColor(\"%s\");\n", s);
            ofs += 2;
        } else
        if (e->codep == CODEFUNC3)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func3(\"%s\");\n", s);
            ofs += 2;
        } else
        if (e->codep == CODEPUSH2WORDS)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push2Words(\"%s\");\n", s);
            ofs += 2;
        } else
        if (e->codep == CODEFUNC5)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func5(\"%s\");\n", s);
            ofs += 2;
        } else
        if (e->codep == CODEFUNC6)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func6(\"%s\");\n", s);
            ofs += 2;
        } else
        if (e->codep == CODESETVOCABULARY)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  SetVocabulary(\"%s\");\n", s);
            ofs += 2;
        } else
        if (e->codep == CODEIFIELD)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Push(0x%04x); // IFIELD(%s)\n", IFIELDOFFSET + Read8(par+1), s);
            //snprintf(pline[ofs].str, STRINGLEN, "  IFIELD(%s);\n", s);
            ofs += 2;
        } else
        if (e->codep == CODEFUNC9)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func9(\"%s\");\n", s);
            ofs += 2;
        } else
        if (e->codep == CODECASE)
        {
            pline[ofs].str = (char*)malloc(4096);
            pline[ofs].str[0] = 0;
            int n = Read16(par);
            int i;
            char temp[256];
            sprintf(pline[ofs].str, "  Pop();\n  switch(Pop()) // %s\n  {\n", s);
            for(i=0; i<n; i++) {
                DICTENTRY *e = GetDictEntry(Read16(par + i*4 + 6), currentovidx);
                char ret[STRINGLEN];
                int dofs = PutEasyMacro(e, ret);
                if (dofs != 2) {
                    fprintf(stderr, "Error: no additional data is allowed for this word");
                    exit(1);
                }
                sprintf(temp, "  case %i:\n  %s    break;\n",
                    Read16(par + i*4 + 4), ret);
                strcat(pline[ofs].str, temp);
            }
            DICTENTRY *e = GetDictEntry(Read16(par + 2), currentovidx);
            char ret[STRINGLEN];
            int dofs = PutEasyMacro(e, ret);
            if (dofs != 2) {
                fprintf(stderr, "Error: no additional data is allowed for this word");
                exit(1);
            }
            sprintf(temp, "  default:\n  %s    break;\n", ret);
            strcat(pline[ofs].str, temp);

            strcat(pline[ofs].str, "\n  }\n");
            ofs += 2;
        } else
        if (e->codep == CODEARRAY)
        {/*
            unsigned short ds = Read16(par + 6);
            unsigned short bx = Read16(par + 4);
            unsigned short bx = bx + (Pop()<<1);
            unsigned short cx = Read16(ds, bx) + Pop();
            Push(ds);
            Push(dx);
            */
            snprintf(pline[ofs].str, STRINGLEN, "  ReadArray(Read16(0x%04x+6), 0x%04x); // %s\n",
            par, Read16(par + 4), s);
            ofs += 2;
        } else
        if (e->codep == CODEFUNC12)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func12(\"%s\");\n", s);
            ofs += 2;
        } else
        if (e->codep == CODEFUNC13)
        {
            snprintf(pline[ofs].str, STRINGLEN, "  Func13(\"%s\");\n", s);
            ofs += 2;
        } else
        if (e->codep == CODEEXEC)
        {
            par = Read16(Read16(par)+REGDI);
            snprintf(pline[ofs].str, STRINGLEN, "  Exec(%s); // call of word 0x%04x '%s'\n",
                s, par, GetDictWord(par, currentovidx));
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
                    pline[addr].labelid = ++pline[d->parp].nlabel;
                }

                snprintf(pline[ofs].str, STRINGLEN, "  goto label%i;\n", pline[addr].labelid);
            }
            ParsePartFunction(ofs+4, l, minaddr, maxaddr, d, currentovidx);
            ParsePartFunction(addr, l, minaddr, maxaddr, d, currentovidx);
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
                    pline[addr].labelid = ++pline[d->parp].nlabel;
                }
                snprintf(pline[ofs].str, STRINGLEN, "  if (Pop() == 0) goto label%i;\n", pline[addr].labelid);
            }
            ParsePartFunction(ofs+4, l, minaddr, maxaddr, d, currentovidx);
            ParsePartFunction(addr, l, minaddr, maxaddr, d, currentovidx);
            ofs += 4;
        } else
        if (strcmp(s, "(DO)") == 0)
        {
            pline[d->parp].nloop++;
            pline[ofs].loopid = pline[d->parp].nloop;
            snprintf(pline[ofs].str, STRINGLEN, "\n  signed short int %c = Pop();\n  signed short int %cmax = Pop();\n  do // (DO)\n  {\n",
                'h'+pline[d->parp].nloop,
                'h'+pline[d->parp].nloop);
            ofs += 2;
        } else
        if (strcmp(s, "(/LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            int loopid = pline[addr].loopid;
            if (loopid == 0)
            {
                fprintf(stderr, "no do found from 0x%04x to 0x%04x\n", ofs, addr);
            }
            snprintf(pline[ofs].str, STRINGLEN,
                "  %c += Pop();\n"
                "  } while(%c<%cmax); // (/LOOP) 0x%04x\n\n",
                'h' + loopid,
                'h' + loopid,
                'h' + loopid,
                par);
            ofs += 4;
        } else
        if (strcmp(s, "(LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            int loopid = pline[addr].loopid;
            if (loopid == 0)
            {
                fprintf(stderr, "no do found from 0x%04x to 0x%04x\n", ofs, addr);
            }

            snprintf(pline[ofs].str, STRINGLEN, "  %c++;\n  } while(%c<%cmax); // (LOOP) 0x%04x\n\n",
                'h' + loopid,
                'h' + loopid,
                'h' + loopid,
                par);
            ofs += 4;
        } else
        if (strcmp(s, "(+LOOP)") == 0)
        {
            par = Read16(ofs + 2);
            pline[ofs+2].done = 1;
            pline[ofs+3].done = 1;
            int addr = (ofs + par)&0xFFFF;
            int loopid = pline[addr].loopid;
            if (loopid == 0)
            {
                fprintf(stderr, "no do found from 0x%04x to 0x%04x\n", ofs, addr);
            }
            snprintf(pline[ofs].str, STRINGLEN,
                "  int step = Pop();\n  %c += step;\n"
                "  } while(((step>=0) && (%c<%cmax)) || ((step<0) && (%c>%cmax))); // (+LOOP) 0x%04x\n\n",
                'h' + loopid,
                'h' + loopid,
                'h' + loopid,
                'h' + loopid,
                'h' + loopid,
                par);
            ofs += 4;
        } else
        if (strcmp(s, "I") == 0)
        {
            int id = FindLoopID(ofs);
            snprintf(pline[ofs].str, STRINGLEN, "  Push(%c); // I\n", 'h'+id);
            ofs += 2;
        } else
        if (strcmp(s, "I'") == 0)
        {
            int id = FindLoopID(ofs);
            snprintf(pline[ofs].str, STRINGLEN, "  Push(%c); // I'\n", 'h'+id);
            ofs += 2;
        } else
        if (strcmp(s, "J") == 0)
        {
            int id = FindLoopID(ofs);
            snprintf(pline[ofs].str, STRINGLEN, "  Push(%c); // J\n", 'h'+id-1);
            ofs += 2;
        } else
        {
            char ret[STRINGLEN];
            int dofs = PutEasyMacro(e, ret);
            if (dofs != 2) {
                fprintf(stderr, "Error: no additional data is allowed for this word");
                exit(1);
            }
            snprintf(pline[ofs].str, STRINGLEN, "%s", ret);
            ofs += dofs;
        }

    }
}

void InitOutput()
{
    int i;
    memset(pline, 0, 0x10000*sizeof(LineDesc));
    for(i=0; i<0x10000; i++)
    {
        pline[i].str = malloc(STRINGLEN);
        pline[i].str[0] = 0;
    }
}

void ParseForthFunctions(int ovidx, int minaddr, int maxaddr)
{
    int i;
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (dict[i].codep != CODECALL) continue;
        char *s = GetWordName(&dict[i]);
        pline[dict[i].parp].isfunction = 1;
        snprintf(pline[dict[i].parp].strfunc, STRINGLEN, "\nvoid %s() // %s\n{\n", Forth2CString(s), s);
        ParsePartFunction(dict[i].parp, pline, minaddr, maxaddr, &dict[i], dict[i].ovidx);
    }

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
        fprintf(fp, "unsigned char %s[%i] = {", Forth2CString(GetWordName(&dict[i])), dict[i].size);
        for(j=0; j<dict[i].size-1 ; j++) fprintf(fp, "0x%02x, ", Read8(dict[i].parp+j));
        fprintf(fp, "0x%02x", Read8(dict[i].parp+j));
        fprintf(fp, "}; // %s\n", GetWordName(&dict[i]));
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
        if (pline[i].isentry)
        {
            fprintf(fp, "// entry\n");
        }

        if (pline[i].strword[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].strword);
            dbmode = 0;
        }
        if (pline[i].strfunc[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].strfunc);
            dbmode = 0;
        }
        if (pline[i].labelid)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "\n  label%i:\n", pline[i].labelid);
            dbmode = 0;
        }
        if (pline[i].strasm[0] != 0)
        {
            if (dbmode) {fprintf(fp, "'%s'\n", str); nstr = 0;}
            fprintf(fp, "%s", pline[i].strasm);
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
                //fprintf(fp, "'%c' ", Read8(i));
            }
        }
    }
    if (dbmode) fprintf(fp, "'%s'\n  ", str);
}

