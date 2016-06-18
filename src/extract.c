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

char* FindDirEntry(int startaddr)
{
    static char str[15];
    memset(str, 15, 0);

    int i=0;

    for(i=0; i<ndir; i++)
    {
        if (startaddr == dir[i].start)
        {
            for(int j=0; j<12; j++)
            {
                if (dir[i].name[j] < 0x20) return str;
                str[j] = dir[i].name[j];

            }
            return str;
        }
    }
    return str;
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
    static char buf[0x100000];
    memset(buf, 0, 0x100000);

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


