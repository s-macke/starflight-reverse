#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"dictionary.h"
#include"parser.h"
#include"transpile2C.h"
#include"extract.h"
#include"utils.h"
#include"stack.h"
#include"../emul/cpu.h"

// ---------------------------------

void LoadOverlayDict(int ovidx)
{
    OVLHeader head;
    ExtractOverlay(ovidx, &head, mem);
    int i;
    for(i=0; i<8; i+=2)
    {
        int vocofs = (head.buf[0xa+i] | (head.buf[0xb+i]<<8));
        if (vocofs == 0) continue;
        ParseDict(mem, vocofs - 2, 0, ovidx);
    }
    SortDictionary();
}

void ParseOverlay(int ovidx)
{
    int i, j;
    char filename[512];
    // first two byte contain offset in file and then two bytes with size of overlay

    OVLHeader head;
    ExtractOverlay(ovidx, &head, mem);
    int namep = (head.buf[0x6] | (head.buf[0x7]<<8));
    int minaddr = head.storeofs+0x8+0xa;
    int maxaddr = head.storeofs+head.ovlsize;

    InitParser();

    SortDictionary();
    ParseForthFunctions(ovidx, minaddr, maxaddr);
    SortDictionary();
    ParseAsmFunctions(ovidx, minaddr, maxaddr);
    ParseForthFunctions(ovidx, minaddr, maxaddr);
    SortDictionary();
    sprintf(filename, OUTDIR"/overlays/%s", overlays[ovidx].name);
    StackAnalysis(ovidx);
    Transpile(filename, &head, ovidx, minaddr, maxaddr, WRITE_DICT | WRITE_HEADER | WRITE_EXTERN | WRITE_VARIABLES);
}

void LoadSTARFLT()
{
    memset(mem, 0, 0x10000);
    FILE *fp = fopen(FILESTAR0, "rb");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot find file %s\n", FILESTAR0);
        exit(1);
    }
    fread(&mem[0x100], FILESTAR0SIZE, 1, fp);
    fclose(fp);
}

void ParseStarFltDict()
{
    // these addresses are in the "FORTH" dict entry
    ndict = 0;
    ParseDict(mem, DICTLIST1-2, 1, -1);
    ParseDict(mem, DICTLIST2-2, 1, -1);
    ParseDict(mem, DICTLIST3-2, 1, -1);
    ParseDict(mem, DICTLIST4-2, 1, -1);

    SortDictionary();
    dict[ndict-1].size = FILESTAR0SIZE+0x100-dict[ndict-1].parp;
}

void DisasStarflt()
{
    int i, j;
    char filename[512];
    const int ovidx = -1;
    int minaddr = 0x100;
    int maxaddr = FILESTAR0SIZE+0x100;
    InitParser();

    ParseForthFunctions(ovidx, minaddr, maxaddr);

    SortDictionary();
    dict[ndict-1].size = maxaddr-dict[ndict-1].parp;

    ParseAsmFunctions(ovidx, minaddr, maxaddr);
    ParseForthFunctions(ovidx, minaddr, maxaddr);
    SortDictionary();
    StackAnalysis(ovidx);
    Transpile(OUTDIR"/starflt", NULL, ovidx, minaddr, maxaddr, WRITE_DICT | WRITE_VARIABLES);

#ifdef STARFLT1
    Transpile(OUTDIR"/common/init",     NULL, ovidx, 0x08d1, 0x0993-1, WRITE_EXTERN | WRITE_VARIABLES);
    Transpile(OUTDIR"/common/main",     NULL, ovidx, 0xd47e, FILESTAR0SIZE+0x100, WRITE_EXTERN | WRITE_VARIABLES);
    Transpile(OUTDIR"/common/overlay",  NULL, ovidx, 0xba1f, 0xd47e - 1, WRITE_EXTERN | WRITE_VARIABLES);
    Transpile(OUTDIR"/common/rule",     NULL, ovidx, 0xb680, 0xba1f - 1, WRITE_EXTERN | WRITE_VARIABLES);
    Transpile(OUTDIR"/common/instance", NULL, ovidx, 0x7980, 0x81a3 - 1, WRITE_EXTERN | WRITE_VARIABLES);
    Transpile(OUTDIR"/common/dos",      NULL, ovidx, 0x40c6, 0x4864 - 1, WRITE_EXTERN | WRITE_VARIABLES);
#endif

#ifdef STARFLT2
    Transpile(OUTDIR"/common/main",     NULL, ovidx, 0xd5c0, FILESTAR0SIZE+0x100, WRITE_EXTERN | WRITE_VARIABLES);
    Transpile(OUTDIR"/common/overlay",  NULL, ovidx, 0xb3e7, 0xd5c0 - 1, WRITE_EXTERN | WRITE_VARIABLES);
    Transpile(OUTDIR"/common/rule",     NULL, ovidx, 0xab55, 0xae75 - 1, WRITE_EXTERN | WRITE_VARIABLES);
    Transpile(OUTDIR"/common/instance", NULL, ovidx, 0x79d6, 0x81f3 - 1, WRITE_EXTERN | WRITE_VARIABLES);
    Transpile(OUTDIR"/common/dos",      NULL, ovidx, 0x4094, 0x4952 - 1, WRITE_EXTERN | WRITE_VARIABLES);
#endif
}

void ExtractDirectory()
{
    FILE *fp;
    fp = fopen(OUTDIR"/data/directory.h", "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot create file\n");
        exit(1);
    }
    LoadDir(fp);
    fclose(fp);

}

int main()
{
    int i = 0;
    int j = 0;
    FILE *fpc;
    FILE *fph;

    InitCPU();

    ExtractDirectory();
    ExtractDataFile(OUTDIR"/data.h");
    ExtractInstance(OUTDIR"/data/instance.txt");
#ifdef STARFLT2
    ExtractDictionary(OUTDIR"/data/dictionary.txt");
#endif
// ---------------------
    fflush(stdout);
    fflush(stderr);
    for(i=0; overlays[i].name != NULL; i++)
    {
        overlays[i].startaddress = GetStartAddress(overlays[i].id);
    }

// ---------------------
// Load words with a valid name

    LoadSTARFLT();
    ParseStarFltDict();
    for(i=0; overlays[i].name != NULL; i++)
    {
        LoadOverlayDict(i);
#ifdef STARFLT1
        GetDictEntry(0x8a2d, -1);
        GetDictEntry(0x602f, -1);
        GetDictEntry(0x63a3, -1);
        GetDictEntry(0x4c5b, -1);
        switch(i)
        {
            case 0x0F: // VITA-OV
                GetDictEntry(0xe928, 0x0F);
                break;
            case 0x30: // DAMAGE-OV
                GetDictEntry(0xee65, 0x30);
                break;
            case 0x2D: // STORM-OV
                GetDictEntry(0xf0b4, 0x2D);
                break;
            case 0x2B: // PLSET-OV
                GetDictEntry(0xec9a, 0x2B);
                break;
            case 0x33:  // STP-OV
                for(j=0; j<9; j++) GetDictEntry(Read16(0xf287+j*2), 0x33);
                for(j=0; j<24; j++) GetDictEntry(Read16(0xf29b+j*2), 0x33);
                break;
            case 0x15:  // COMMSPEC-OV
                for(j=0; j<4; j++) GetDictEntry(Read16(0xf454+1+j*2), 0x15);
                for(j=0; j<5; j++) GetDictEntry(Read16(0xf45f+1+j*2), 0x15);
                for(j=0; j<3; j++) GetDictEntry(Read16(0xf46c+1+j*2), 0x15);
                for(j=0; j<1; j++) GetDictEntry(Read16(0xf475+1+j*2), 0x15);
                for(j=0; j<1; j++) GetDictEntry(Read16(0xf47a+1+j*2), 0x15);
                for(j=0; j<1; j++) GetDictEntry(Read16(0xf47f+1+j*2), 0x15);
                break;
        }
#else
        if (i == 0x13) GetDictEntry(0xf277, 0x13); // VITA-OV
#endif
        fflush(stdout);
        fflush(stderr);
    }

// ---------------------

    LoadSTARFLT();
    DisasStarflt();
    fflush(stdout);
    fflush(stderr);

    for(i=0; overlays[i].name != NULL; i++)
    {
        printf("Generate %s\n", overlays[i].name);
        //reset memory
        LoadSTARFLT();
        ParseOverlay(i);
        fflush(stdout);
        fflush(stderr);
    }
    WriteAllDict(OUTDIR"/data/dict.h");
    DictConsistencyCheck();
    return 0;
}
