#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"extract.h"

DIRENTRY dir[512];
int ndir = 0;

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

    FILE *file = fopen(FILESTARA, "rb");

    for(k=0; k<=3; k++)
    {
        fseek(file, 1024*k, SEEK_SET);
        for(i=0; i<48; i++)
        {
            int pos = ftell(file);
            memset(&de, 0, sizeof(de));
            fread(de.name, 12, 1, file);
            fread(&de.fileno, 1, 1, file);
            fread(&de.start, 2, 1, file);
            fread(&de.end, 2, 1, file);
            fread(&de.nblocks, 2, 1, file);
            fread(&de.blocksize, 1, 1, file);
            fread(&de.lsize, 1, 1, file);
            de.idx = ndir;
            memcpy((void*)&dir[ndir], (void*)&de, sizeof(DIRENTRY));
            ndir++;
        }
    }

    fclose(file);

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

char* Extract(int fileidx, int *size)
{
    int i, j;
    DIRENTRY *de = GetDirByIdx(fileidx);
    if (de == NULL) exit(1);
    FILE *file;
    int start = de->start*16;
    if (start >= 256000)
    {
        file = fopen(FILESTARB, "rb");
        start -= 256000;
    } else
    {
        file = fopen(FILESTARA, "rb");
    }
    int l = ((de->end - de->start)+1)*16;
    *size = l;

    char *buf = malloc(l);
    memset(buf, 0, l);

    fseek(file, start, SEEK_SET);
    fread(buf, l, 1, file);
    fclose(file);
    if (l == 0) return buf;

    return buf;
}

char* ExtractRecord(int fileidx, int recordidx)
{
    int i;
    static char record[512];
    memset(record, 0, 512);

    DIRENTRY *de = GetDirByIdx(fileidx);
    if (de == NULL) exit(1);
    FILE *file;
    int start = de->start*16;
    if (start >= 256000)
    {
        file = fopen(FILESTARB, "rb");
        start -= 256000;
    } else
    {
        file = fopen(FILESTARA, "rb");
    }

    if ((start&(~1023)) != ((start+de->blocksize-1)&(~1023)))
    {
        start = (start+de->blocksize)&(~1023);
    }
    for(i=0; i<recordidx; i++)
    {
        start = start+de->blocksize;
        if ((start&(~1023)) != ((start+de->blocksize-1)&(~1023)))
        {
            start = (start+de->blocksize)&(~1023);
        }
    }

    fseek(file, start, SEEK_SET);
    fread(record, de->blocksize, 1, file);
    fclose(file);
    return record;
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

    memcpy(&mem[head->storeofs], head->buf, head->ovlsize);
}

#ifdef STARFLT1
    unsigned char huffmantable[100] =
    {
        0x9c, 0x81, 0x96, 0x81, 0x81, 0x20, 0x83, 0x81,
        0x81, 0x48, 0x59, 0x43, 0x82, 0x81, 0x4d, 0x57,
        0x81, 0x2e, 0x81, 0x42, 0x84, 0x81, 0x31, 0x81,
        0x5a, 0x81, 0x34, 0x33, 0x86, 0x81, 0x51, 0x81,
        0x81, 0x32, 0x81, 0x25, 0x2b, 0x81, 0x23, 0x28,
        0x81, 0x3f, 0x39, 0x81, 0x37, 0x2a, 0x84, 0x81,
        0x54, 0x81, 0x81, 0x4c, 0x50, 0x46, 0x53, 0x4f,
        0x8d, 0x81, 0x82, 0x81, 0x4e, 0x41, 0x49, 0x81,
        0x81, 0x55, 0x81, 0x47, 0x2c, 0x81, 0x81, 0x58,
        0x27, 0x81, 0x81, 0x21, 0x35, 0x81, 0x26, 0x81,
        0x29, 0x2f, 0x81, 0x45, 0x81, 0x52, 0x81, 0x44,
        0x81, 0x56, 0x4b, 0x81, 0x81, 0x30, 0x81, 0x2d,
        0x81, 0x4a, 0x36, 0x38
    };
#else
    unsigned char huffmantable[102] =
    {
        0xa1, 0x81, 0x8b, 0x81, 0x5e, 0x81, 0x81, 0x45,
        0x81, 0x52, 0x81, 0x44, 0x81, 0x56, 0x4b, 0x81,
        0x81, 0x30, 0x81, 0x2d, 0x81, 0x4a, 0x36, 0x38,
        0x81, 0x20, 0x83, 0x81, 0x81, 0x48, 0x59, 0x43,
        0x82, 0x81, 0x4d, 0x57, 0x81, 0x2e, 0x81, 0x42,
        0x84, 0x81, 0x31, 0x81, 0x5a, 0x81, 0x34, 0x33,
        0x86, 0x81, 0x51, 0x81, 0x81, 0x32, 0x81, 0x25,
        0x2b, 0x81, 0x23, 0x28, 0x81, 0x3f, 0x39, 0x81,
        0x37, 0x2a, 0x86, 0x81, 0x84, 0x81, 0x54, 0x81,
        0x81, 0x4c, 0x50, 0x46, 0x53, 0x4f, 0x82, 0x81,
        0x4e, 0x41, 0x49, 0x81, 0x81, 0x55, 0x81, 0x47,
        0x2c, 0x81, 0x81, 0x58, 0x27, 0x81, 0x81, 0x21,
        0x35, 0x81, 0x26, 0x81, 0x29, 0x2f
    };

#endif

char HuffmanDecodeChar(unsigned char *buf, int *byteoffset, int *bits)
{
    int huffoffset = 0;
    while(1)
    {
        int bit = ((buf[*byteoffset] & (*bits))!=0)?1:0;
        if ((*bits) == 0x80)
        {
            (*byteoffset)++;
        }
        (*bits) >>= 1;
        if (*bits == 0)
        {
            *bits = 0x80;
        }
        //printf("%i\n", *bits);
        if ((huffmantable[huffoffset+bit]&0x80) == 0)
            return huffmantable[huffoffset+bit];
        huffoffset += (huffmantable[huffoffset+bit] & 0x7F) * 2;
    }
}

void HuffmanDecode(FILE* fp, char* buf, int n)
{
    int bits = 0x80;
    int byteoffset = 0;
    for(int i=0; i<n; i++)
    {
        char c = HuffmanDecodeChar(buf, &byteoffset, &bits);
        fprintf(fp, "%c", c);
    }
}


/*
standard instands fields:
IFieldType INST_dash_SIB     = {DIRECTORYIDX, 0x00, 0x03};
IFieldType INST_dash_PREV    = {DIRECTORYIDX, 0x03, 0x03};
IFieldType INST_dash_OFF     = {DIRECTORYIDX, 0x06, 0x03};
IFieldType INST_dash_CLASS   = {DIRECTORYIDX, 0x09, 0x01};
IFieldType INST_dash_SPECIES = {DIRECTORYIDX, 0x0a, 0x01};
IFieldType INST_dash_QTY     = {DIRECTORYIDX, 0x0b, 0x02};
IFieldType INST_dash_X       = {DIRECTORYIDX, 0x0d, 0x02};
IFieldType INST_dash_Y       = {DIRECTORYIDX, 0x0f, 0x02};
IBFR
LENINST
IHEADLEN
QTYINST
IADDR
@INST-CLASS
@INST-SPECIES
*/

//char instancedone[1024*1024];

void IterSibling(FILE *fp, unsigned char *buf, int iter, int first)
{
    int addr = first;
    unsigned int next, previous, children;
    int i;
    do
    {
        int a = addr - 0x1000;
        next = ((buf[a+0])<<0) | ((buf[a+1])<<8) | ((buf[a+2])<<16);
        previous = ((buf[a+3])<<0) | ((buf[a+4])<<8) | ((buf[a+5])<<16);
        children = ((buf[a+6])<<0) | ((buf[a+7])<<8) | ((buf[a+8])<<16);
        unsigned int class = buf[a+9];
        unsigned int species = buf[a+10];
        DIRENTRY *de = GetDirByIdx(class);
        char dummy[256];
        sprintf(dummy, "%02x %02x %02x ", class, species, buf[a+11]);
        /*
        for(int i=0; i<=10; i++)
            instancedone[a+i] = 1;
        for(int i=11; i<de->lsize+11; i++)
            instancedone[a+i] = 2;
        instancedone[a+0] = 3;
        instancedone[a+1] = dummy[0];
        instancedone[a+2] = dummy[1];
        instancedone[a+4] = dummy[3];
        instancedone[a+5] = dummy[4];
        instancedone[a+7] = dummy[6];
        instancedone[a+8] = dummy[7];
    */
        for(i=0; i<iter; i++) fprintf(fp, "  ");
        //fprintf(fp, "0x%06x: 0x%06x 0x%06x 0x%06x 0x%02x 0x%02x %s\n", addr, next, previous, children, class, species, GetDirByIdx(class));
        fprintf(fp, "%s species:%i size:%i   ", de->name, species, de->lsize);
        if (class == 0x17) // starsystem lsize=8 for starflt1, lsize=9 for starflt2
        {
            fprintf(fp, "%i %i %i %i %i %i %i", buf[a+11], buf[a+12], buf[a+13], buf[a+14], buf[a+15], buf[a+16], buf[a+17]);
        }
        if (class == 0x0d) // bank lsize=9
        {
            fprintf(fp, "%i %i balance:%i %i %i", buf[a+11], buf[a+12], buf[a+13]|(buf[a+14]<<8), buf[a+15], buf[a+16]);
        }
        if (class == 0x0e) // bank-trans lsize=6
        {
            fprintf(fp, "%i %i amount:%i %i %i", buf[a+11], buf[a+12], buf[a+13]|(buf[a+14]<<8), buf[a+15], buf[a+16]);
        }
#ifdef STARFLT1
        if (class == 0x30) // string
        {
            HuffmanDecode(fp, &buf[a+13], buf[a+12]);
        }
#endif
        fprintf(fp, "\n");

        if (children != 0) IterSibling(fp, buf, iter+1, children);
        addr = next;
        if (next == 0) return;

    } while(next != first);
}

void ExtractInstance(const char* filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot write file %s\n", filename);
        exit(1);
    }

    int size;
    unsigned char* buf = Extract(0x1, &size);
    IterSibling(fp, buf, 0, 0x1006);
    fclose(fp);
    /*
    for(int i=0; i<size; i++)
    {
        if (instancedone[i] == 0)
            printf("-");
        if (instancedone[i] == 3)
            printf("\nX");
        if (instancedone[i] == 1)
            printf("X");
        if (instancedone[i] == 2)
            printf("D");
        if (instancedone[i] >= 0x20)
            printf("%c", instancedone[i]);

    }
    printf("\n");
    */
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
    //ExtractTextRecords(fp, 0x44, "CREATURE", 0);
    //ExtractTextRecords(fp, 0x1a, "ELEMENT", 0);
    //ExtractTextRecords(fp, 0x1c, "ARTIFACT", 0);
    //ExtractTextRecords(fp, 0x10, "CREWMEMBER", 0);
    //ExtractTextRecords(fp, 0x19, "VESSEL", 0);
    //ExtractTextRecords(fp, 0x20, "PLANET", 0);
    //ExtractTextRecords(fp, 0x43, "REGIONS", 0);
    //ExtractTextRecords(fp, 0x87, "PSTATS", 0);

#ifdef STARFLT1
    ExtractTextRecords(fp, 0x39, "ANALYZETEXT", 0);
    ExtractTextRecords(fp, 0x28, "SPECIMEN", 0);
    //ExtractTextRecords(fp, 0x2b, "BIODATA", 0); // points to the same data as specimen
    //ExtractTextRecords(fp, 0x82, "COMPOUNDS", 0);
#else
    //ExtractTextRecords(fp, 0x09, "STIS", 0);
    //ExtractTextRecords(fp, 0x15, "TRADERS", 0);
    //ExtractTextRecords(fp, 0x1e, "COMPOUNDS", 0);
    //ExtractTextRecords(fp, 0x28, "TRADEMAP", 0);
    // Nebula???
#endif

    fprintf(fp, "#endif\n");
    fclose(fp);
}

