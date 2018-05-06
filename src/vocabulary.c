#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"vocabulary.h"
#include"utils.h"
#include"../emul/cpu.h"

struct WORD vocabulary[10000];
int nwords = 0;

char* GetWordName(WORD *word)
{
    int i;
    for(i = 0; renamewords[i].newword != NULL; i++)
    {
        if ((word->ovidx == (signed char)renamewords[i].ovidx) && (word->parp == renamewords[i].parp))
            return renamewords[i].newword;
    }

    return word->r;
}

WORD* GetWordByAddr(unsigned short addr, int ovidx)
{
    int i = 0;
    if (addr < 0x100+FILESTAR0SIZE) ovidx = -1;
    for(i=0; i<nwords; i++)
    {
        if ((vocabulary[i].ovidx != ovidx) && (vocabulary[i].ovidx != -1)) continue;
        if (vocabulary[i].parp == addr) return &vocabulary[i];
    }
    unsigned short codep = Read16(addr-2);
    if (codep == 0x0) return NULL;

    snprintf(vocabulary[nwords].r, 64, "UNK_0x%04x", addr);
    vocabulary[nwords].codep = codep;
    vocabulary[nwords].parp = addr;
    vocabulary[nwords].addr = addr-2;
    vocabulary[nwords].ovidx = ovidx;
    vocabulary[nwords].stackin = STACKINVALID;
    vocabulary[nwords].stackout = STACKINVALID;
    nwords++;
    return &vocabulary[nwords-1];
}

char* GetWordNameByAddr(unsigned short addr, int ovidx)
{
    return GetWordName(GetWordByAddr(addr, ovidx));
}

int GetVocabularyStart(int addr)
{
    int i = 0;
    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].addr == addr) return i;
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
    memset(&vocabulary[nwords], 0, sizeof(WORD));
    vocabulary[nwords].addr = addr;
    vocabulary[nwords].linkp = linkp;
    vocabulary[nwords].bits = bitfield;
    vocabulary[nwords].ovidx = ovidx;
    vocabulary[nwords].size = -1;
    vocabulary[nwords].stackin = STACKINVALID;
    vocabulary[nwords].stackout = STACKINVALID;

    int n = 0;
    do
    {
        i++;
        if (decrypt)
        {
            if (length == 1)
            {
                vocabulary[nwords].r[n] = Read8(addr+2+i) & 0x7F;
            } else
            {
                vocabulary[nwords].r[n] = (Read8(addr+2+i) ^ 0x7F) & 0x7F;
                mem[addr+2+i] = ((Read8(addr+2+i)^0x7F)&0x7F) | (Read8(addr+2+i)&0x80); // restore upper bit
            }
        } else
        {
            vocabulary[nwords].r[n] = (Read8(addr+2+i)) & 0x7F;
            mem[addr+2+i] = ((Read8(addr+2+i))&0x7F) | (Read8(addr+2+i)&0x80); // restore upper bit
        }

        n++;
    } while ((Read8(addr+2+i)&128) == 0);
    int varp = addr + i + 3;
    vocabulary[nwords].codep = (mem[varp+1]<<8) | mem[varp+0];
    vocabulary[nwords].parp = addr+5+n;

    // find duplicate word labels
    /*
    for(i=0; i<nwords; i++) {
        if ((vocabulary[i].ovidx == ovidx) && (strcmp(GetWordName(&vocabulary[i]), GetWordName(&vocabulary[nwords])) == 0)) {
            fprintf(stderr, "found duplicate:\n", ovidx, vocabulary[i].r, vocabulary[nwords].parp, vocabulary[i].parp);
            fprintf(stderr, "{0x%02x, 0x%04x, \"%s_1\" }, // %s\n",
            (unsigned char)ovidx, vocabulary[nwords].parp, GetWordName(&vocabulary[nwords]), vocabulary[nwords].r);
            fprintf(stderr, "{0x%02x, 0x%04x, \"%s_2\" }, // %s\n",
            (unsigned char)ovidx, vocabulary[i].parp, GetWordName(&vocabulary[i]), vocabulary[i].r);
        }
    }
    */
    nwords++;
    return linkp - 2;
}

void ParseVocabulary(unsigned char *mem, int linkp, int decrypt, int ovidx)
{
    int i = 0;
    int j = 0;

    for(i=0; i<5000; i++)
    {
        for(j=0; j<nwords; j++)
        {
            if (vocabulary[j].addr == linkp)
            if (vocabulary[j].ovidx == ovidx)
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

void WriteVocabulary(unsigned char *mem, FILE *fp, int ovidx)
{
    int i;
    unsigned int bitfield = 0;
    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// =========== VOCABULARY ==========\n");
    fprintf(fp, "// =================================\n");

    for(i=0; i<nwords; i++)
    {
        if (vocabulary[i].ovidx != ovidx) continue;
        fprintf(fp, "// %15s", GetWordName(&vocabulary[i]));
        fprintf(fp, "  codep:0x%04x parp:0x%04x size:0x%04x C-string:'%s'",
        vocabulary[i].codep, vocabulary[i].parp, vocabulary[i].size, Forth2CString(GetWordName(&vocabulary[i])));
/*
        fprintf(fp, " bitfield: %i %i %i  codep:0x%04x parp:0x%04x size:0x%04x",
        (bitfield>>7)&1, (bitfield>>6)&1, (bitfield>>5)&1,
        vocabulary[i].codep, vocabulary[i].parp, vocabulary[i].size);
*/
        fprintf(fp, "\n");
    }
}

void WriteAllVocabulary(char* filename)
{
    int i;
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot open file for writing\n");
        exit(1);
    }

    SortVocabulary();

    fprintf(fp, "// =================================\n");
    fprintf(fp, "// =========== VOCABULARY ==========\n");
    fprintf(fp, "// =================================\n\n");

    fprintf(fp, "typedef struct { int ov; unsigned short code, word; char* name; } WORD;\n\n");

    fprintf(fp, "WORD vocabulary[]=\n{\n");
    for(i=0; i<nwords; i++)
    {
        char *name = GetWordName(&vocabulary[i]);
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
            vocabulary[i].ovidx,
            vocabulary[i].codep,
            vocabulary[i].parp,
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

void SortVocabulary()
{
    qsort(vocabulary, nwords, sizeof(WORD), cmpdictp);

    int i = 0;
    for(i=0; i<nwords-1; i++)
    {
        if (vocabulary[i].ovidx == vocabulary[i+1].ovidx)
        {
            vocabulary[i].size = vocabulary[i+1].addr - vocabulary[i].parp;
        } else
        {
            vocabulary[i].size = 0;
        }
    }
    vocabulary[nwords-1].size = 0;
}

void VocabularyConsistencyCheck()
{
    int nunknowns = 0;

    for(int i=0; i<nwords; i++)
    {
        if (strncmp(vocabulary[i].r, "UNK_", 4) == 0)
            nunknowns++;
    }
    printf("Found %i words, %i of the words are unknown\n", nwords, nunknowns);

    for(int i=0; i<nwords; i++)
    for(int j=i+1; j<nwords; j++)
    {
        if (vocabulary[i].parp == vocabulary[j].parp)
        if (vocabulary[i].ovidx == vocabulary[j].ovidx)
        {
            fprintf(stderr, "Error: Found duplicate word\n");
        }

        if (strncmp(vocabulary[i].r, "UNK_", 4) == 0) continue;
        if (strncmp(vocabulary[j].r, "UNK_", 4) == 0) continue;
        if (vocabulary[i].ovidx != vocabulary[j].ovidx) continue;

        if (strcmp(GetWordName(&vocabulary[i]), GetWordName(&vocabulary[j])) == 0)
        {


            fprintf(stderr, "Error: Found duplicate word name '%s': ov1=%i ov2=%i \n", GetWordName(&vocabulary[i]), vocabulary[i].ovidx, vocabulary[j].ovidx);
        }

    }

}
