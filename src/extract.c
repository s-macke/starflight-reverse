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

    fprintf(fp, "// =================================\n");
    fprintf(fp, "// ==== Directory of Star Files ====\n");
    fprintf(fp, "// =================================\n");

    int idx = 0;
    for(idx = 0; idx<ndir; idx++)
    {
        fprintf(fp, "// idx: 0x%02x name:'", dir[idx].idx);
        for(j=0; j<12; j++) fprintf(fp, "%c", dir[idx].name[j]);
        fprintf(fp, "' fileno:%2i  start:0x%06x end:0x%06x size:0x%05x nblocks:%4i blocksize:%4i lsize:0x%02x gap:0x%06x",
            dir[idx].fileno,
            dir[idx].start*16,
            dir[idx].end*16,
            ((dir[idx].end-dir[idx].start)+1)*16,
            dir[idx].nblocks,
            dir[idx].blocksize,
            dir[idx].lsize,
            dir[idx+1].start*16 - dir[idx].end*16
            );
        fprintf(fp, "\n");
    }

}

char* Extract(int diridx, int *size)
{
    int i, j;

    int idx = -1;
    for(i = 0; i<ndir; i++)
    {
        if (dir[i].idx == diridx)
        {
            idx = i;
            break;
        }
    }
    if (idx == -1) exit(1);
    FILE *file;
    int start = dir[idx].start*16;
    if (start >= 256000)
    {
        file = fopen(FILESTARB, "rb");
        start -= 256000;
    } else
    {
        file = fopen(FILESTARA, "rb");
    }
    int l = ((dir[idx].end - dir[idx].start)+1)*16;
    *size = l;

    char *buf = malloc(l);
    memset(buf, 0, l);

    fseek(file, start, SEEK_SET);
    fread(buf, l, 1, file);
    fclose(file);
    if (l == 0) return buf;

    return buf;
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
        for(i=0; i<iter; i++) fprintf(fp, "  ");
        //fprintf(fp, "0x%06x: 0x%06x 0x%06x 0x%06x 0x%02x 0x%02x %s\n", addr, next, previous, children, class, species, GetDirByIdx(class));
        fprintf(fp, "%s species:%i size:%i   ", de->name, species, de->lsize);
        if (class == 0x17) // starsystem lsize=8 for starflt1, lsize=9 for starflt2
        {
            fprintf(fp, "%i %i %i %i %i %i %i", buf[a+11], buf[a+12], buf[a+13], buf[a+14], buf[a+15], buf[a+16], buf[a+17]);
        }
        if (class == 0x0e) // bank-trans lsize=6
        {
            fprintf(fp, "%i %i amount:%i %i %i", buf[a+11], buf[a+12], buf[a+13]|(buf[a+14]<<8), buf[a+15], buf[a+16]);
        }
        fprintf(fp, "\n");

        if (children != 0)
            IterSibling(fp, buf, iter+1, children);
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