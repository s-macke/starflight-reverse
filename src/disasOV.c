#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"dictionary.c"
#include"extract.c"
#include"disasm/debugger.h"

// TODO:
// some dicts might have the same name.
// Check and add _1, _2, _3, ...
// Check tt_ cc_ pp_
//

unsigned char mem[0x10000];

unsigned char Read8(unsigned short ofs)
{
    return mem[ofs];
}

unsigned short Read16(unsigned short ofs)
{
    return mem[ofs+0] | (mem[ofs+1]<<8);
}

// ---------------------------------

int DisasmRange(int offset, int size, FILE *fp)
{
    char buffer[0x80];
    int i;
    while (size > 0)
    {
        //fprintf(fp, "Disasm %04x\n", offset);
        if (offset > 0xFFFF)
        {
            fprintf(fp, "Warning: outside of segment\n");
           exit(1);
        }
        if (pline[offset].done)
        {
            return 0;
        }
        
        buffer[0] = 0x0;
        int currentoffset = offset;
        int newoffset = disasm(0x0, (unsigned)offset, mem, buffer);
        int len = newoffset-offset;
        //fprintf(fp, "Disasm done %04x\n", offset);
        sprintf(pline[currentoffset].strasm, "// 0x%04x: %s\n", currentoffset, buffer);
        for(i=0; i<len; i++)
        {
            pline[offset].done = 1;
            size--;
            offset++;
        }

        if (Read8(currentoffset) == 0xc3) // ret
        {
            sprintf(pline[currentoffset].str, "\n");
            return 0;
        }
        
        if (Read8(currentoffset) == 0xe8) // 16 bit call
        {
            //fprintf(fp, "call from 0x%04x\n", currentoffset);
            unsigned short addr = (offset+(short int)Read16(currentoffset+1));
            DisasmRange(addr&0xffff, 0x10000, fp);
            if (addr == 0x1649)
            {
                //ParsePartFunction(newoffset, pline, 0x0, 0x10000);
                return 0;
            }
        }


    }
    return 0;
}

// ---------------------------------

void LoadOverlay(int id, FILE *fp)
{
    int i, j;
    unsigned char *buf;
    // first two byte contain offset in file and then two bytes with size of overlay
    
    //fprintf(fp, "\n// ==== %s ====\n", dir[id].name);
    int size = 0;
    buf = Extract(id, &size);
    
    int storeofs = buf[0x4] | (buf[0x5]<<8);
    int ovlsize = (buf[0x2] | (buf[0x3]<<8))*16;
    
    fprintf(fp, "// store offset = 0x%04x\n", storeofs);
    fprintf(fp, "// overlay size   = 0x%04x\n", ovlsize);    
    memcpy(&mem[storeofs], buf, ovlsize);
    int namep = (buf[0x6] | (buf[0x7]<<8));
    fprintf(fp, "// name = '%s'\n", &mem[namep]);
    int ndictstart = ndict;
    for(i=0; i<8; i+=2)
    {
        int vocofs = (buf[0xa+i] | (buf[0xb+i]<<8));
        if (vocofs == 0) continue;
        ParseDict(mem, vocofs - 2, 0);        
    }
    
    InitParseFunction2();        
    for(i=ndictstart; i<ndict; i++) 
    {
        if (dict[i].codep == CODECALL)
            ParseFunction2(dict[i].parp, storeofs+0x8+0xa, storeofs+ovlsize);
    }
    SortDictionary();
    dict[ndict-1].size = storeofs+ovlsize-dict[ndict-1].parp;
    
    WriteDict(mem, fp, ndictstart, ndict);
    
    for(i=0; i<ndict; i++)
    {
        int wordofs = dict[i].ofs;
        sprintf(pline[wordofs].strword, 
            "\n// ================================================\n"
            "// 0x%04x: WORD '%s' codep=0x%04x parp=0x%04x\n"
            "// ================================================\n", 
            wordofs, dict[i].r, dict[i].codep, dict[i].parp);
        pline[wordofs+0].done = 1; // linkp
        pline[wordofs+1].done = 1; // linkp
        if (strncmp(dict[i].r, "UNK_", 4) != 0)
        {
            pline[wordofs+2].done = 1; // bitfield + length
            for(j=0; j<strlen(dict[i].r)+2; j++) pline[wordofs+3+j].done = 1; // and the whole string
        }
    }
    
    for(i=0; i<ndict; i++)
    {
        if ((dict[i].codep < storeofs+0x8+0xa) || (dict[i].codep >= storeofs+ovlsize)) continue;
        DisasmRange(dict[i].codep, 0x100000, fp);
    }
    
    WriteVariables(storeofs+0x8+0xa, storeofs+ovlsize, fp, ndictstart, ndict);
    WriteParsedFunctions(storeofs+0x8+0xa, storeofs+ovlsize, fp);
}

void LoadSTARFLT()
{
    FILE *fp = fopen(FILESTAR0, "rb");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot find file %s\n", FILESTAR0);
        exit(1);
    }
    fread(&mem[0x100], FILESTAR0SIZE, 1, fp);
    fclose(fp);
    // these addresses are in the "FORTH" dict entry
    ndict = 0;
    ParseDict(mem, DICTLIST1-2, 1);
    ParseDict(mem, DICTLIST2-2, 1);
    ParseDict(mem, DICTLIST3-2, 1);
    ParseDict(mem, DICTLIST4-2, 1);
    //if (DICTLIST5 != 0) ParseDict(mem, DICTLIST5-2, 1);
    
    SortDictionary();  
    dict[ndict-1].size = FILESTAR0SIZE+0x100-dict[ndict-1].parp;
}

void DisasStarflt(FILE *fp)
{
    int i, j;
    InitParseFunction2();
    for(i=0; i<ndict; i++) 
    {
        if (dict[i].codep == CODECALL)
            ParseFunction2(dict[i].parp, 0x100, FILESTAR0SIZE+0x100);
    }    
    SortDictionary();
    dict[ndict-1].size = FILESTAR0SIZE+0x100-dict[ndict-1].parp;
    WriteDict(mem, fp, 0, ndict);
    
    for(i=0; i<ndict; i++) 
    {
        int wordofs = dict[i].ofs;
        sprintf(pline[wordofs].strword, 
            "\n// ====================================================\n"
            "// 0x%04x: WORD '%s' codep=0x%04x parp=0x%04x\n"
            "// ====================================================\n", wordofs, dict[i].r, dict[i].codep, dict[i].parp);
        pline[wordofs+0].done = 1; // linkp or codep
        pline[wordofs+1].done = 1; // linkp or codep
        if (strncmp(dict[i].r, "UNK_", 4) != 0)
        {
            pline[wordofs+2].done = 1; // bitfield + length
            for(j=0; j<strlen(dict[i].r)+2; j++) pline[wordofs+3+j].done = 1; // and the whole string
        }
        
    }
    for(i=0; i<ndict; i++) 
    {
        if ((dict[i].codep < 0x100) || (dict[i].codep >= FILESTAR0SIZE+0x100)) continue;
        DisasmRange(dict[i].codep, /*dict[i].size*/0x100000, fp);
    }
    
    WriteVariables(0x100, FILESTAR0SIZE+0x100, fp, 0, ndict);
    WriteParsedFunctions(0x100, FILESTAR0SIZE+0x100, fp);
}


int main()
{
    int i = 0;
    FILE *fp;

    LoadSTARFLT();
    
    fp = fopen(OUTDIR"/directory.txt", "w");
    LoadDir(fp);
    fclose(fp);

    fp = fopen(OUTDIR"/starflt.c", "w");
    DisasStarflt(fp);
    fclose(fp);

    //reset list
    ndict = 0;
    LoadSTARFLT();
    
   
    // for starflt2
    //dir[0x78].end = dir[0x78].start+0x810;
    char filename[512];
    int ndictstart = ndict;    
    for(i=0; overlays[i].name != NULL; i++)
    {
        sprintf(filename, OUTDIR"/%s.c", overlays[i].name);
        printf("Generate %s\n", filename);
        fp = fopen(filename, "w");
        ndict = ndictstart;
        LoadOverlay(overlays[i].id, fp);
        fclose(fp);
    }

    return 0;
}
