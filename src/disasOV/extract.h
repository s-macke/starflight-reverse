#ifndef EXTRACT_H
#define EXTRACT_H

typedef struct DIRENTRY
{
    int idx;
    char name[13];
    unsigned char fileno; // STARA = 1, STARB = 2
    unsigned short start, end, nblocks;
    unsigned char blocksize;
    unsigned char lsize;
} DIRENTRY;

extern DIRENTRY dir[512];
extern int ndir;

typedef struct
{
    int storeofs;
    int ovlsize;
    int size;
    unsigned char *buf;
} OVLHeader;

void InitExtract();

void LoadDir(FILE *fp);
unsigned char* Extract(int diridx, int *size);
unsigned short GetStartAddress(int diridx);
DIRENTRY* GetDirByAddr(int startaddr);
DIRENTRY* GetDirByIdx(int idx);
char* GetDirNameByIdx(int idx);

void ExtractOverlay(int ovidx, OVLHeader *head, unsigned char *mem);
void ExtractDictionary(const char* filename);
void ExtractDataFile(const char* filename);
char* ExtractString(int offset, int ovidx);

#endif
