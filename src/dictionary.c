#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"dictionary.h"
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
    dict[ndict].addr = addr-2;
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
    memset(&dict[ndict], 0, sizeof(DICTENTRY));
    dict[ndict].addr = addr;
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

static int
cmpdictp(const void *p1, const void *p2)
{
    DICTENTRY *a = (DICTENTRY*)p1;
    DICTENTRY *b = (DICTENTRY*)p2;

    return (a->parp-b->parp) + (a->ovidx-b->ovidx)*0x10000;
}

void SortDictionary()
{
    qsort(dict, ndict, sizeof(DICTENTRY), cmpdictp);

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
