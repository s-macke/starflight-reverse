#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"extract.h"

DIRENTRY dir[512];
int ndir = 0;

unsigned char STARA[256000];
unsigned char STARB[362496];

void InitExtract()
{
  FILE *fp;
  int ret;
  //printf("Load files\n");
  fp = fopen(FILESTARA, "rb");
  if (fp == NULL)
  {
      fprintf(stderr, "Cannot open file %s\n", FILESTARA);
      exit(1);
  }
  ret = fread(STARA, 256000, 1, fp);
  fclose(fp);

  fp = fopen(FILESTARB, "rb");
  if (fp == NULL)
  {
      fprintf(stderr, "Cannot open file %s\n", FILESTARB);
      exit(1);
  }
  ret = fread(STARB, 362496, 1, fp);
  fclose(fp);
}

void SortDirectory()
{
    DIRENTRY temp;
    int i = 0;
    int j = 0;
    for(i=0; i<ndir; i++)
    for(j=0; j<ndir-1; j++)
    {
        if (dir[j].start > dir[j+1].start)
        {
            memcpy((void*)&temp,      (void*)&dir[j], sizeof(DIRENTRY));
            memcpy((void*)&dir[j],   (void*)&dir[j+1], sizeof(DIRENTRY));
            memcpy((void*)&dir[j+1], (void*)&temp, sizeof(DIRENTRY));
        }
    }
}

DIRENTRY* GetDirByIdx(int idx)
{
    int i=0;
    for(i=0; i<ndir; i++)
    {
        if (idx == dir[i].idx) return &dir[i];
    }
    return NULL;
}

char* GetDirNameByIdx(int idx)
{
    int i, j;
    static char ret[13];
    memset(ret, 0, 13);

#ifdef STARFLT2
    if (idx == 149) return "MARKET2";
    if (idx == 89) return "ECOSYSTEM2";
#endif

    for(i=0; i<ndir; i++)
    {
        if (idx == dir[i].idx)
        {
            for(j=0; j<12; j++)
            {
                if (dir[i].name[j] == ' ') return ret;
                if
                (
                (dir[i].name[j] == '-') ||
                (dir[i].name[j] == '*') ||
                (dir[i].name[j] == ':') ||
                (dir[i].name[j] == '/') ||
                (dir[i].name[j] == '\'')
                )
                ret[j] = '_'; else ret[j] = dir[i].name[j];
            }
            return ret;
        }
    }
    return ret;
}

DIRENTRY* GetDirByAddr(int startaddr)
{
    int i=0;
    for(i=0; i<ndir; i++)
    {
        if (startaddr == dir[i].start) return &dir[i];
    }
    return NULL;
}

void LoadDir(FILE *fp)
{
    int i,j, k;
    DIRENTRY de;

    for(k=0; k<=3; k++)
    {
        for(i=0; i<48; i++)
        {
            memset(&de, 0, sizeof(de));
            int ret;
            memcpy(&de.name,      &STARA[k*1024 + i*21 +  0], 12);
            memcpy(&de.fileno,    &STARA[k*1024 + i*21 + 12], 1);
            memcpy(&de.start,     &STARA[k*1024 + i*21 + 13], 2);
            memcpy(&de.end,       &STARA[k*1024 + i*21 + 15], 2);
            memcpy(&de.nblocks,   &STARA[k*1024 + i*21 + 17], 2);
            memcpy(&de.blocksize, &STARA[k*1024 + i*21 + 19], 1);
            memcpy(&de.lsize,     &STARA[k*1024 + i*21 + 20], 1);
            de.idx = ndir;
            memcpy((void*)&dir[ndir], (void*)&de, sizeof(DIRENTRY));
            ndir++;
        }
    }

    if (fp == NULL) return;
    //SortDirectory();

    fprintf(fp, "// =====================================\n");
    fprintf(fp, "// ==== Directory of the STAR files ====\n");
    fprintf(fp, "// =====================================\n\n");

    fprintf(fp, "typedef struct { int idx; char* name; int fileno, start, end, size, nblocks, blocksize, lsize; } DIRENTRY;\n\n");

    fprintf(fp, "DIRENTRY dir[]=\n{\n");

    int idx = 0;
    for(idx = 0; idx<ndir; idx++)
    {
        fprintf(fp, "  { .idx=0x%02x, .name=\"", dir[idx].idx);
        for(j=0; j<12; j++) fprintf(fp, "%c", dir[idx].name[j]);
        fprintf(fp, "\", .fileno=%1i, .start=0x%06x, .end=0x%06x, .size=0x%05x, .nblocks=%4i, .blocksize=%4i, .lsize=0x%02x },",
            dir[idx].fileno,
            dir[idx].start*16,
            dir[idx].end*16,
            ((dir[idx].end-dir[idx].start)+1)*16,
            dir[idx].nblocks,
            dir[idx].blocksize,
            dir[idx].lsize
            );
        fprintf(fp, "\n");
    }
    fprintf(fp, "  { .idx= -1, .name=NULL, .fileno=0, .start=0x0, .end=0x0, .size=0x0, .nblocks=0x0, .blocksize=0x0, .lsize=0x0 }");
    fprintf(fp, "};\n");
}

unsigned char* Extract(int fileidx, int *size)
{
    int i, j;
    DIRENTRY *de = GetDirByIdx(fileidx);
    if (de == NULL) exit(1);

    int start = de->start*16;
    unsigned char *filedata;
    if (start >= 256000)
    {
        filedata = STARB;
        start -= 256000;
    } else
    {
        filedata = STARA;
    }
    int l = ((de->end - de->start)+1)*16;
    *size = l;
    return &filedata[start];
}

char* ExtractRecord(int fileidx, int recordidx)
{
    DIRENTRY *de = GetDirByIdx(fileidx);
    //printf("de blocksize=%i start=0x%04x\n", de->blocksize, de->start);
    if (de == NULL) exit(1);
    int start = de->start*16;
    unsigned char *filedata;
    if (start >= 256000)
    {
        filedata = STARB;
        start -= 256000;
    } else
    {
        filedata = STARA;
    }
    // code in RECADD
    int offset = start & (~0x3FF);
    unsigned short sp2 = start & 0x3FF;
    //printf("start=0x%04x sp2=0x%04x\n", start, sp2);

    unsigned short ax = 1024 - sp2;
    ax = ax / de->blocksize;
    if (ax > recordidx)
    {
        sp2 += recordidx * de->blocksize;
    } else
    {
        recordidx -= ax;
        offset += 1024;
        sp2 = 0;
        ax = 1024 / de->blocksize;
        unsigned short cx = ax;
        ax = recordidx / cx;
        offset += (int)ax*1024;
        sp2 = (recordidx%cx) * de->blocksize;
    }

/*
    if ((start&(~1023)) != ((start + de->blocksize-1)&(~1023)))
    {
        start = (start + de->blocksize) & (~1023);
    }
    for(i=0; i<recordidx; i++)
    {
        start = start + de->blocksize;
        if ((start&(~1023)) != ((start + de->blocksize-1)&(~1023)))
        {
            start = (start + de->blocksize) & (~1023);
        }
    }
*/

    return &filedata[offset+sp2];
/*
    fseek(file, offset+sp2, SEEK_SET);
    int ret = fread(record, de->blocksize, 1, file);
    fclose(file);
    return record;
    */
}

unsigned short GetStartAddress(int diridx)
{
    return dir[diridx].start;
}

void ExtractOverlay(int ovidx, OVLHeader *head, unsigned char *mem)
{
    head->size = 0;
    head->buf = (unsigned char*)Extract(overlays[ovidx].id, &head->size);

    head->storeofs = head->buf[0x4] | (head->buf[0x5]<<8);
    head->ovlsize = (head->buf[0x2] | (head->buf[0x3]<<8))*16;
    if (head->ovlsize != head->size)
    {
      fprintf(stderr, "sizes don't match for directory idx=%i\n", overlays[ovidx].id);
      exit(1);
    }

    memcpy(&mem[head->storeofs], head->buf, head->ovlsize);
}

// only in starflt2
// code in pp_DICT, Load-DI, >XOR
void ExtractDictionary(const char* filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot write file %s\n", filename);
        exit(1);
    }

    int i;
    int size;
    unsigned char* buf = Extract(0x6, &size);
    for(i=0; i<size; i++)
    {
        buf[i] = buf[i] ^ 0x7F;
    }

    int addr = 0x10;
    for(i=0; i<4597; i++)
    {
        int n = buf[addr+2];
        fprintf(fp, "0x%04x: '", addr);
        for(int j=0; j<n; j++)
        {
            fprintf(fp, "%c", buf[addr+j+3]);
        }
        fprintf(fp, "' 0x%04x\n", buf[addr+0]|(buf[addr+1]<<8));
        addr += n+3;
    }
    fclose(fp);
}

void ExtractTextRecords(FILE *fp, int idx, const char *label, int containslength)
{
    int i;
    fprintf(fp, "char *%s_STRINGS[] =\n{\n", label);
    DIRENTRY *de = GetDirByIdx(idx);
    int size;

    for(int i=0; i<de->nblocks; i++)
    {
        char* buf = ExtractRecord(de->idx, i);
        if (containslength)
        {
            int n = buf[0];
            fprintf(fp, "  \"");
            for(int j=1; j<=n; j++)
                fprintf(fp, "%c", buf[j]);
        } else
        {
            fprintf(fp, "  \"");
            for(int j=0; j<de->blocksize; j++)
                fprintf(fp, "%c", buf[j]);
        }

        if (i != de->nblocks-1) fprintf(fp, "\",\n"); else fprintf(fp, "\"\n");
    }
    fprintf(fp, "};\n\n");
}

void ExtractElements(FILE *fp, int idx)
{
    int i;
    fprintf(fp, "char *elements[] =\n{ // 7 bytes of information are missing here\n");
    DIRENTRY *de = GetDirByIdx(idx);
    int size;

    for(int i=0; i<de->nblocks; i++)
    {
        char* buf = ExtractRecord(de->idx, i);
        fprintf(fp, "  \"");
        for(int j=0; j<16; j++)
            fprintf(fp, "%c", buf[j]);
        if (i != de->nblocks-1) fprintf(fp, "\",\n"); else fprintf(fp, "\"\n");
    }
    fprintf(fp, "};\n\n");
}

void ExtractCompounds(FILE *fp, int idx)
{
    int i;
    fprintf(fp, "char *compounds[] =\n{\n");
    DIRENTRY *de = GetDirByIdx(idx);
    int size;

    for(int i=0; i<de->nblocks; i++)
    {
        unsigned char* buf1 = ExtractRecord(de->idx, i);
        fprintf(fp, "  \"");
        int offset = buf1[0] | (buf1[1]<<8) | (buf1[2]<<16);
        unsigned char* buf2 = &STARB[offset];

        for(int i=0; i<buf2[11]; i++)
        {
          fprintf(fp, "%c", buf2[12+i]);
        }
        if (i != de->nblocks-1) fprintf(fp, "\",\n"); else fprintf(fp, "\"\n");
    }
    fprintf(fp, "};\n\n");
}

void ExtractPlanets(FILE *fp, int idx)
{
    fprintf(fp, "typedef struct { int idx; int d1, surftype, mass, lseed, tseed, d8, min, d2, d3, element1, element2, element1, coldest, warmest, atmoactivity, atmodensity, d7; } PLANETENTRY;\n");

    fprintf(fp, "\nPLANETENTRY planets[]=\n{\n");

    DIRENTRY *de = GetDirByIdx(idx);
    for(int i=0; i<de->nblocks; i++)
    {
        unsigned char* buf = ExtractRecord(idx, i);
        fprintf(fp, "  {.idx=%2i, .d1=%2i, .surftype=%2i, .mass=%4i, .lseed=%3i, .d8=%5i, .tseed=0x%04x, .d8=%3i, .min=%3i, .d2=%3i, .d3=%3i, .element1=%2i, .element2=%2i, .element3=%2i, .coldest=%2i, .warmest=%2i, .atmoactivity=%2i, .atmodensity=%2i, .d7=%2i},\n",
        i,
        buf[0x0],
        buf[0x1], // surftype
        buf[0x2] + (buf[0x3]<<8), // mass
        buf[0x4],               // life or lseed
        buf[0x5] + (buf[0x6]<<8),
        buf[0x7] + (buf[0x8]<<8), // tseed
        buf[0x9],  // min
        buf[0xa],
        buf[0xb],
        buf[0xc],
        buf[0xd],
        buf[0xe],
        buf[0xf], // coldest
        buf[0x10], // warmest
        buf[0x11] + (buf[0x12]<<8), // atmo.activity
        buf[0x13], // atmo.density
        buf[0x14],
        buf[0x15]
        );
    }
    fprintf(fp, "};\n\n");
}

void ExtractColorMap(FILE *fp, int idx)
{
    fprintf(fp, "\nchar cmap[][0x40]=\n{\n");

    DIRENTRY *de = GetDirByIdx(idx);
    for(int i=0; i<de->nblocks; i++)
    {
        unsigned char* buf = ExtractRecord(idx, i);
        fprintf(fp, "  {");
        for(int j=0; j<64; j++)
        {
            fprintf(fp, "0x%02x", buf[j]);
            if (j != 63) fprintf(fp, ", ");
        }
        fprintf(fp, "},\n");
    }
    fprintf(fp, "};\n\n");
}

void ExtractCreatures(FILE *fp, int idx)
{
    fprintf(fp, "\nchar creatures[][156]=\n{\n");

    DIRENTRY *de = GetDirByIdx(idx);
    for(int i=0; i<de->nblocks; i++)
    {
        unsigned char* buf = ExtractRecord(idx, i);
        fprintf(fp, "  {");
        for(int j=0; j<156; j++)
        {
            fprintf(fp, "0x%02x", buf[j]);
            if (j != 155) fprintf(fp, ", ");
        }
        fprintf(fp, "},\n");
    }
    fprintf(fp, "};\n\n");
}


void ExtractEarthMap(FILE *fp, int idx)
{
    fprintf(fp, "\nchar earthmap[]=\n{\n");

    DIRENTRY *de = GetDirByIdx(idx);
    for(int i=0; i<de->nblocks; i++)
    {
        unsigned char* buf = ExtractRecord(idx, i);
        for(int j=0; j<16; j++)
        {
            fprintf(fp, "0x%02x", buf[j]);
            if (j != 15 || i != de->nblocks-1) fprintf(fp, ", ");
        }
        fprintf(fp, "\n");
    }
    fprintf(fp, "};\n\n");
}

void ExtractVessels(FILE *fp, int idx)
{
fprintf(fp, "typedef struct { int idx; int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15; } VESSELENTRY;\n");

fprintf(fp, "\n//not complete\n");
fprintf(fp, "VESSELENTRY vessels[]=\n{\n");

DIRENTRY *de = GetDirByIdx(idx);
for(int i=0; i<de->nblocks; i++)
{
    unsigned char* buf = ExtractRecord(idx, i);
    fprintf(fp, "  {.idx=%2i, .d1=%2i, .d2=%2i, .d3=%3i, .d4=%2i, .d5=%5i, .d6=%2i, .d7=%5i, .d8=%5i, .d9=%2i, .d10=%2i, .d11=%2i, .d12=%2i, .element1=%2i, .element2=%2i, .element3=%2i, .d16=%4i, .d17=%3i},\n",
    i,
    buf[0x0],
    buf[0x4],
    buf[0x5],
    buf[0x6],
    buf[0x7] + (buf[0x8]<<8),
    buf[0xb],
    buf[0xc] + (buf[0xd]<<8),
    buf[0xe] + (buf[0xf]<<8),
    buf[0x10],
    buf[0x12],
    buf[0x13],
    buf[0x14],
    buf[0x15], // element1
    buf[0x16], // element2
    buf[0x17], // element3
    buf[0x18],
    buf[0x1c]
    );
}
fprintf(fp, "};\n\n");

}


void ExtractDataFile(const char* filename)
{
    int idx, j;

    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot write file %s\n", filename);
        exit(1);
    }

    fprintf(fp, "#ifndef DATA_H\n");
    fprintf(fp, "#define DATA_H\n\n");

    fprintf(fp, "typedef enum\n{\n");
#ifdef STARFLT1
    int n = 144;
#else
    int n = 155;
#endif
    for(idx = 0; idx<n; idx++)
    {
        char *name = GetDirNameByIdx(idx);
        if (name[0] == '<') continue;
        fprintf(fp, "  ");
        fprintf(fp, "%s", name);
        fprintf(fp, "IDX = %i,\n", dir[idx].idx);
    }
    fprintf(fp, "} FILEINDEXES;\n\n");

    ExtractTextRecords(fp, 0x0b, "BOX", 0);
    ExtractTextRecords(fp, 0x0e, "BANKTRANS", 1);

    //ExtractTextRecords(fp, 0x3a, "BUTTONS", 0);

    //ExtractTextRecords(fp, 0x1c, "ARTIFACT", 0);
    //ExtractTextRecords(fp, 0x10, "CREWMEMBER", 0);
    //ExtractTextRecords(fp, 0x19, "VESSEL", 0);
    //ExtractTextRecords(fp, 0x43, "REGIONS", 0);
    //ExtractTextRecords(fp, 0x87, "PSTATS", 0);

#ifdef STARFLT1
    ExtractTextRecords(fp, 0x39, "ANALYZETEXT", 0);
    ExtractTextRecords(fp, 0x28, "SPECIMEN", 0);
    ExtractTextRecords(fp, 0x2b, "BIODATA", 0);
    ExtractPlanets(fp, 0x20);
    ExtractColorMap(fp, 0x74);
    ExtractEarthMap(fp, 0x8a);
    //ExtractTextRecords(fp, 0x2b, "BIODATA", 0); // points to the same data as specimen
    ExtractCompounds(fp, 0x82);
    ExtractElements(fp, 0x1a);
    ExtractVessels(fp, 0x19);
    //ExtractTextRecords(fp, 0x39, "ANALYZE_TEXT", 0);
    //ExtractCreatures(fp, 0x44);

    //ExtractTextRecords(fp, 0x45, "PHAZES", 0);

#else
    //ExtractPlanets(fp, 0x20);
    //ExtractTextRecords(fp, 0x09, "STIS", 0);
    //ExtractTextRecords(fp, 0x15, "TRADERS", 0);
    //ExtractTextRecords(fp, 0x1e, "COMPOUNDS", 0);
    //ExtractTextRecords(fp, 0x28, "TRADEMAP", 0);
    // Nebula???
#endif

    fprintf(fp, "#endif\n");
    fclose(fp);
}
