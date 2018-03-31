#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"dictionary.h"
#include"utils.h"
#include"../emul/cpu.h"

struct WORD dict[10000];
int ndict = 0;

char* GetWordName(WORD *dict)
{
    int i;
    for(i = 0; renamewords[i].newword != NULL; i++)
    {
        if ((dict->ovidx == (signed char)renamewords[i].ovidx) && (dict->parp == renamewords[i].parp))
            return renamewords[i].newword;
    }

    return dict->r;
}

WORD* GetWordByAddr(unsigned short addr, int ovidx)
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
    dict[ndict].addr = addr-2;
    dict[ndict].ovidx = ovidx;
    dict[ndict].stackin = STACKINVALID;
    dict[ndict].stackout = STACKINVALID;
    ndict++;
    return &dict[ndict-1];
}

char* GetWordNameByAddr(unsigned short addr, int ovidx)
{
    return GetWordName(GetWordByAddr(addr, ovidx));
}

int GetDictStart(int addr)
{
    int i = 0;
    for(i=0; i<ndict; i++)
    {
        if (dict[i].addr == addr) return i;
    }
    return -1;
}


// --------------------------------------------

int AddDirectory(int addr, unsigned char *mem, int decrypt, int ovidx)
{
    unsigned short linkp = Read16(addr);
    unsigned char bitfield = Read8(addr+2);
    unsigned int length = bitfield & 0x3F;
    int i = 0;
    memset(&dict[ndict], 0, sizeof(WORD));
    dict[ndict].addr = addr;
    dict[ndict].linkp = linkp;
    dict[ndict].bits = bitfield;
    dict[ndict].ovidx = ovidx;
    dict[ndict].size = -1;
    dict[ndict].stackin = STACKINVALID;
    dict[ndict].stackout = STACKINVALID;

    int n = 0;
    do
    {
        i++;
        if (decrypt)
        {
            if (length == 1)
            {
                dict[ndict].r[n] = Read8(addr+2+i) & 0x7F;
            } else
            {
                dict[ndict].r[n] = (Read8(addr+2+i) ^ 0x7F) & 0x7F;
                mem[addr+2+i] = ((Read8(addr+2+i)^0x7F)&0x7F) | (Read8(addr+2+i)&0x80); // restore upper bit
            }
        } else
        {
            dict[ndict].r[n] = (Read8(addr+2+i)) & 0x7F;
            mem[addr+2+i] = ((Read8(addr+2+i))&0x7F) | (Read8(addr+2+i)&0x80); // restore upper bit
        }

        n++;
    } while ((Read8(addr+2+i)&128) == 0);
    int varp = addr + i + 3;
    dict[ndict].codep = (mem[varp+1]<<8) | mem[varp+0];
    dict[ndict].parp = addr+5+n;

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
            if (dict[j].addr == linkp)
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

void WriteAllDict(char* filename)
{
    int i;
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot open file for writing\n");
        exit(1);
    }

    SortDictionary();

    fprintf(fp, "// =================================\n");
    fprintf(fp, "// =========== DICTIONARY ==========\n");
    fprintf(fp, "// =================================\n\n");

    fprintf(fp, "typedef struct { int ov; unsigned short code, word; char* name; } WORD;\n\n");

    fprintf(fp, "WORD dict[]=\n{\n");
    for(i=0; i<ndict; i++)
    {
        char *name = GetWordName(&dict[i]);
        char escapedname[512];
        int offset = 0;
        for(int j=0; j<strlen(name); j++)
        {
            if (name[j] == '"')
            {
                escapedname[offset++] = '\\';
            } else
            if (name[j] == '\\')
            {
                escapedname[offset++] = '\\';
            }
            escapedname[offset++] = name[j];
        }
        escapedname[offset] = 0;

        fprintf(fp, "  { .ov = %2i, .code = 0x%04x, .word = 0x%04x, .name = \"%s\"",
            dict[i].ovidx,
            dict[i].codep,
            dict[i].parp,
            escapedname);
            fprintf(fp, " }, \n");
    }
    fprintf(fp, "  { .ov = -2, .code = 0x0000, .word = 0x0000, .name = NULL }\n");

    fprintf(fp, "};\n");
    fclose(fp);
}

static int
cmpdictp(const void *p1, const void *p2)
{
    WORD *a = (WORD*)p1;
    WORD *b = (WORD*)p2;

    return (a->parp-b->parp) + (a->ovidx-b->ovidx)*0x10000;
}

void SortDictionary()
{
    qsort(dict, ndict, sizeof(WORD), cmpdictp);

    int i = 0;
    for(i=0; i<ndict-1; i++)
    {
        if (dict[i].ovidx == dict[i+1].ovidx)
        {
            dict[i].size = dict[i+1].addr - dict[i].parp;
        } else
        {
            dict[i].size = 0;
        }
    }
    dict[ndict-1].size = 0;
}

void DictConsistencyCheck()
{
    int nunknowns = 0;
    
    for(int i=0; i<ndict; i++)
    {
        if (strncmp(dict[i].r, "UNK_", 4) == 0)
            nunknowns++;
    }
    printf("Found %i words, %i of the words are unknown", ndict, nunknowns);

    for(int i=0; i<ndict; i++)
    for(int j=i+1; j<ndict; j++)
    {
        if (dict[i].parp == dict[j].parp)
        if (dict[i].ovidx == dict[j].ovidx)
        {
            fprintf(stderr, "Error: Found duplicate word\n");
        }

        if (strncmp(dict[i].r, "UNK_", 4) == 0) continue;
        if (strncmp(dict[j].r, "UNK_", 4) == 0) continue;
        if (dict[i].ovidx != dict[j].ovidx) continue;

        if (strcmp(GetWordName(&dict[i]), GetWordName(&dict[j])) == 0)
        {
            
                
            fprintf(stderr, "Error: Found duplicate word name '%s': ov1=%i ov2=%i \n", GetWordName(&dict[i]), dict[i].ovidx, dict[j].ovidx);
        }
        
    }

}


