#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"dictionary.h"
#include"extract.h"
#include"cpu.h"


#include"disasm/debugger.h"

// TODO:
// some dicts might have the same name.
// Check and add _1, _2, _3, ...
// Check tt_ cc_ pp_
//

// ---------------------------------

int DisasmRange(int offset, int size, FILE *fp)
{
    char buffer[0x80];
    int i;
    if (pline[offset].done) return 0;
    //fprintf(stderr, "disasm start 0x%04x\n", offset);
    while (size > 0)
    {
        //fprintf(stderr, "Disasm %04x\n", offset);
        if (offset > 0xFFFF)
        {
           fprintf(stderr, "Warning: outside of segment\n");
           return 0;
           //exit(1);
        }
        if (pline[offset].done)
        {
            return 0;
        }

        buffer[0] = 0x0;
        int currentoffset = offset;
        int newoffset = disasm(0x0, (unsigned)offset, mem, buffer);
        int len = newoffset-offset;
        //fprintf(stderr, "Disasm done %04x\n", offset);
        snprintf(pline[currentoffset].strasm, STRINGLEN, "// 0x%04x: %s\n", currentoffset, buffer);
        for(i=0; i<len; i++)
        {
            pline[offset].done = 1;
            size--;
            offset++;
        }

        if (Read8(currentoffset) == 0xc3) // ret
        {
            snprintf(pline[currentoffset].str, STRINGLEN, "\n");
            return 0;
        }

        if (Read8(currentoffset) == 0xe8) // 16 bit call
        {
            //fprintf(stderr, "call from 0x%04x\n", currentoffset);
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

void LoadOverlay(int id, FILE *fpc, FILE *fph)
{
    int i, j;
    unsigned char *buf;
    // first two byte contain offset in file and then two bytes with size of overlay

    fprintf(fpc, "// ====== OVERLAY '%s' ======\n", overlays[id].name);

    fprintf(fph, "// ====== OVERLAY '%s' ======\n\n", overlays[id].name);
    fprintf(fph, "#ifndef %s_H\n", overlays[id].name);
    fprintf(fph, "#define %s_H\n\n", overlays[id].name);

    int size = 0;
    buf = (unsigned char*)Extract(overlays[id].id, &size);

    int storeofs = buf[0x4] | (buf[0x5]<<8);
    int ovlsize = (buf[0x2] | (buf[0x3]<<8))*16;

    fprintf(fpc, "// store offset = 0x%04x\n", storeofs);
    fprintf(fpc, "// overlay size   = 0x%04x\n", ovlsize);
    memcpy(&mem[storeofs], buf, ovlsize);
    int namep = (buf[0x6] | (buf[0x7]<<8));

    int ndictstart = ndict;
    for(i=0; i<8; i+=2)
    {
        int vocofs = (buf[0xa+i] | (buf[0xb+i]<<8));
        if (vocofs == 0) continue;
        ParseDict(mem, vocofs - 2, 0);
    }

    fprintf(fpc, "\n#include\"cpu.h\"\n\n");

    InitParseFunction2();

    for(i=0; i<overlays[id].nentrypoints; i++)
    {
        unsigned short par = overlays[id].entrypoints[i];
        unsigned short codep = Read16(par);
        char *s = FindDictPar(par+2);
        pline[par].isentry = 1;
        //fprintf(stderr, "0x%04x\n", codep);
        fprintf(fph, "void %s(); // %s\n", Forth2CString(s), s);
    }

    fprintf(fph, "\n#endif\n");


    /*
    overlays[currentovidx].entrypoints[overlays[currentovidx].nentrypoints] = par;
    */

    for(i=ndictstart; i<ndict; i++)
    {
        if (dict[i].codep == CODECALL)
            ParseFunction2(dict[i].parp, storeofs+0x8+0xa, storeofs+ovlsize);
    }
    SortDictionary(ndictstart, ndict);
    dict[ndict-1].size = storeofs+ovlsize-dict[ndict-1].parp;

    WriteDict(mem, fpc, ndictstart, ndict);

    for(i=0; i<ndict; i++)
    {
        int wordofs = dict[i].ofs;
        snprintf(pline[wordofs].strword, STRINGLEN,
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
    for(i=ndictstart; i<ndict; i++)
    {
        if ((dict[i].codep < storeofs+0x8+0xa) || (dict[i].codep >= storeofs+ovlsize)) continue;
        //printf("disasm dict entry %i\n", i);
        DisasmRange(dict[i].codep, 0x100000, fpc);
    }

    WriteVariables(storeofs+0x8+0xa, storeofs+ovlsize, fpc, ndictstart, ndict);
    WriteParsedFunctions(storeofs+0x8+0xa, storeofs+ovlsize, fpc);
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

    SortDictionary(0, ndict);
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
    SortDictionary(0, ndict);
    dict[ndict-1].size = FILESTAR0SIZE+0x100-dict[ndict-1].parp;
    WriteDict(mem, fp, 0, ndict);

    for(i=0; i<ndict; i++)
    {
        int wordofs = dict[i].ofs;
        snprintf(pline[wordofs].strword, STRINGLEN,
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
    FILE *fpc;
    FILE *fph;

    fph = fopen(OUTDIR"/directory.txt", "w");
    if (fph == NULL)
    {
        fprintf(stderr, "Error: Cannot create file\n");
        exit(1);
    }
    LoadDir(fph);
    fclose(fph);

    for(i=0; overlays[i].name != NULL; i++)
    {
        overlays[i].startaddress = GetStartAddress(overlays[i].id);
        overlays[i].nentrypoints = 0;
    }

    LoadSTARFLT();
    fpc = fopen(OUTDIR"/starflt.c", "w");
    if (fpc == NULL)
    {
        fprintf(stderr, "Error: Cannot create file\n");
        exit(1);
    }
    DisasStarflt(fpc);
    fclose(fpc);

    // for starflt2
    //dir[0x78].end = dir[0x78].start+0x810;
    char filename[512];
    for(i=0; overlays[i].name != NULL; i++)
    {
        //reload dictionary
        memset(dict, 0, sizeof(dict));
        ndict = 0;
        LoadSTARFLT();

        sprintf(filename, OUTDIR"/%s.c", overlays[i].name);
        printf("Generate %s\n", filename);
        fpc = fopen(filename, "w");
        if (fpc == NULL)
        {
            fprintf(stderr, "Error: Cannot create file '%s'\n", filename);
            exit(1);
        }
        sprintf(filename, OUTDIR"/%s.h", overlays[i].name);
        fph = fopen(filename, "w");
        if (fph == NULL)
        {
            fprintf(stderr, "Error: Cannot create file '%s'\n", filename);
            exit(1);
        }
        LoadOverlay(i, fpc, fph);
        fclose(fpc);
        fclose(fph);
    }

    return 0;
}
