#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"dictionary.h"
#include"utils.h"
#include"../emul/cpu.h"

struct WORD dictionary[10000];
int nwords = 0;

char* GetWordName(WORD *word)
{
    int i;
    for(i = 0; renamewords[i].newword != NULL; i++)
    {
        if ((word->ovidx == (signed char)renamewords[i].ovidx) && (word->wordp == renamewords[i].wordp))
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
        if ((dictionary[i].ovidx != ovidx) && (dictionary[i].ovidx != -1)) continue;
        if (dictionary[i].wordp == addr) return &dictionary[i];
    }
    unsigned short codep = Read16(addr-2);
    if (codep == 0x0) return NULL;

    memset(&dictionary[nwords], 0, sizeof(WORD));
    snprintf(dictionary[nwords].r, 64, "W%04X", addr);
    dictionary[nwords].codep = codep;
    dictionary[nwords].wordp = addr;
    dictionary[nwords].addr = addr-2;
    dictionary[nwords].ovidx = ovidx;
    dictionary[nwords].stackin = STACKINVALID;
    dictionary[nwords].stackout = STACKINVALID;
    nwords++;
    return &dictionary[nwords-1];
}

char* GetWordNameByAddr(unsigned short addr, int ovidx)
{
    return GetWordName(GetWordByAddr(addr, ovidx));
}

int GetDictionaryStart(int addr)
{
    int i = 0;
    for(i=0; i<nwords; i++)
    {
        if (dictionary[i].addr == addr) return i;
    }
    return -1;
}


// --------------------------------------------

int AddVocabulary(int addr, unsigned char *mem, int decrypt, int ovidx)
{
    unsigned short linkp = Read16(addr);
    unsigned char bitfield = Read8(addr+2);
    unsigned int length = bitfield & 0x3F;
    int i = 0;
    memset(&dictionary[nwords], 0, sizeof(WORD));
    dictionary[nwords].addr = addr;
    dictionary[nwords].linkp = linkp;
    dictionary[nwords].bits = bitfield;
    dictionary[nwords].ovidx = ovidx;
    dictionary[nwords].size = -1;
    dictionary[nwords].stackin = STACKINVALID;
    dictionary[nwords].stackout = STACKINVALID;

    int n = 0;
    do
    {
        i++;
        if (decrypt)
        {
            if (length == 1)
            {
                dictionary[nwords].r[n] = Read8(addr+2+i) & 0x7F;
            } else
            {
                dictionary[nwords].r[n] = (Read8(addr+2+i) ^ 0x7F) & 0x7F;
                mem[addr+2+i] = ((Read8(addr+2+i)^0x7F)&0x7F) | (Read8(addr+2+i)&0x80); // restore upper bit
            }
        } else
        {
            dictionary[nwords].r[n] = (Read8(addr+2+i)) & 0x7F;
            mem[addr+2+i] = ((Read8(addr+2+i))&0x7F) | (Read8(addr+2+i)&0x80); // restore upper bit
        }

        n++;
    } while ((Read8(addr+2+i)&128) == 0);
    int varp = addr + i + 3;
    dictionary[nwords].codep = (mem[varp+1]<<8) | mem[varp+0];
    dictionary[nwords].wordp = addr+5+n;

    // find duplicate word labels
    /*
    for(i=0; i<nwords; i++) {
        if ((dictionary[i].ovidx == ovidx) && (strcmp(GetWordName(&dictionary[i]), GetWordName(&dictionary[nwords])) == 0)) {
            fprintf(stderr, "found duplicate:\n", ovidx, dictionary[i].r, dictionary[nwords].wordp, dictionary[i].wordp);
            fprintf(stderr, "{0x%02x, 0x%04x, \"%s_1\" }, // %s\n",
            (unsigned char)ovidx, dictionary[nwords].wordp, GetWordName(&dictionary[nwords]), dictionary[nwords].r);
            fprintf(stderr, "{0x%02x, 0x%04x, \"%s_2\" }, // %s\n",
            (unsigned char)ovidx, dictionary[i].wordp, GetWordName(&dictionary[i]), dictionary[i].r);
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
            if (dictionary[j].addr == linkp)
            if (dictionary[j].ovidx == ovidx)
            {
                fprintf(stderr, "duplicate\n");
                exit(1);
                return;
            }
        }
        linkp = AddVocabulary(linkp, mem, decrypt, ovidx);
        if (linkp <= 0) return;
    }
}

void WriteDictionary(unsigned char *mem, FILE *fp, int ovidx)
{
    int i;
    unsigned int bitfield = 0;
    fprintf(fp, "\n// =================================\n");
    fprintf(fp, "// =========== Dictionary ==========\n");
    fprintf(fp, "// =================================\n");

    for(i=0; i<nwords; i++)
    {
        if (dictionary[i].ovidx != ovidx) continue;
        fprintf(fp, "// %15s", GetWordName(&dictionary[i]));
        fprintf(fp, "  codep:0x%04x wordp:0x%04x size:0x%04x C-string:'%s'",
        dictionary[i].codep, dictionary[i].wordp, dictionary[i].size, Forth2CString(GetWordName(&dictionary[i])));
/*
        fprintf(fp, " bitfield: %i %i %i  codep:0x%04x wordp:0x%04x size:0x%04x",
        (bitfield>>7)&1, (bitfield>>6)&1, (bitfield>>5)&1,
        dictionary[i].codep, dictionary[i].wordp, dictionary[i].size);
*/
        fprintf(fp, "\n");
    }
}

void WriteAllDictionary(char* filename)
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
    fprintf(fp, "// =========== Dictionary ==========\n");
    fprintf(fp, "// =================================\n\n");

    fprintf(fp, "typedef struct { int ov; unsigned short code, word; char* name; } WORD;\n\n");

    fprintf(fp, "WORD dictionary[]=\n{\n");
    for(i=0; i<nwords; i++)
    {
        char *name = GetWordName(&dictionary[i]);
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
            dictionary[i].ovidx,
            dictionary[i].codep,
            dictionary[i].wordp,
            escapedname);
            fprintf(fp, " },\n");
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

    return (a->wordp-b->wordp) + (a->ovidx-b->ovidx)*0x10000;
}

void SortDictionary()
{
    qsort(dictionary, nwords, sizeof(WORD), cmpdictp);

    int i = 0;
    for(i=0; i<nwords-1; i++)
    {
        if (dictionary[i].ovidx == dictionary[i+1].ovidx)
        {
            dictionary[i].size = dictionary[i+1].addr - dictionary[i].wordp;
        } else
        {
            dictionary[i].size = 0;
        }
    }
    dictionary[nwords-1].size = 0;
}

void DictionaryConsistencyCheck()
{
    int nunknowns = 0;

    for(int i=0; i<nwords; i++)
    {
        // This is not the best check
        if (strlen(dictionary[i].r) == 5)
        if (strncmp(dictionary[i].r, "W", 1) == 0)
            nunknowns++;
    }
    printf("Found %i words, %i of the words are unknown\n", nwords, nunknowns);

    for(int i=0; i<nwords; i++)
    for(int j=i+1; j<nwords; j++)
    {
        if (dictionary[i].wordp == dictionary[j].wordp)
        if (dictionary[i].ovidx == dictionary[j].ovidx)
        {
            fprintf(stderr, "Error: Found duplicate word\n");
        }

        if (strlen(dictionary[i].r) == 5 && strncmp(dictionary[i].r, "W", 1) == 0) continue;
        if (strlen(dictionary[j].r) == 5 && strncmp(dictionary[j].r, "W", 1) == 0) continue;
        if (dictionary[i].ovidx != dictionary[j].ovidx) continue;

        if (strcmp(GetWordName(&dictionary[i]), GetWordName(&dictionary[j])) == 0)
        {
            fprintf(stderr, "Error: Found duplicate word name '%s': ov1=%i ov2=%i \n", GetWordName(&dictionary[i]), dictionary[i].ovidx, dictionary[j].ovidx);
        }
    }
}
