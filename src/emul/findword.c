#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"cpu.h"
#include"callstack.h"
#include"../disasOV/global.h"

#include"../../starflt1-out/data/dictionary.h"
#include"../../starflt1-out/data/directory.h"


char* GetOverlayName(int word, int ovidx)
{
    if (word < (FILESTAR0SIZE+0x100)) return "STARFLT";
    return (ovidx==-1)?"STARFLT":overlays[ovidx].name;
}

int FindClosestWord(int si, int ovidx)
{
    int dist = 0x10000;
    int i = 0;
    int word = -1;
    do
    {
        if ((dictionary[i].ov != ovidx) && (dictionary[i].ov != -1)) continue;
        int d = si - dictionary[i].word;
        if (d < 0) continue;
        if (d < dist)
        {
            dist = d;
            word = dictionary[i].word;
        }
    } while(dictionary[++i].name != NULL);
    return word;
}

// ugly code to get our own overlay index from the address in the star file
int GetOverlayIndex(int address)
{
    if (address == 0) return -1;
    //printf("Find overlay for address 0x%04x\n", address);
    int i = 0;
    do
    {
        if ((address<<4) == dir[i].start)
        {
            int idx = dir[i].idx;
            int j = 0;
            do
            {
                if (overlays[j].id == idx) return j;
            } while(overlays[++j].name != NULL);
        }
    } while(dir[++i].name != NULL);
    fprintf(stderr, "Error: Cannot find index for address 0x%04x\n", address);
    exit(1);
}

char* FindWord(int word, int ovidx)
{
    if (ovidx == -1) ovidx = GetOverlayIndex(Read16(0x55a5)); // "OV#"

    int i = 0;
    do
    {
        if ((dictionary[i].ov != ovidx) && (dictionary[i].ov != -1)) continue;
        if (word == dictionary[i].word) return dictionary[i].name;
    } while(dictionary[++i].name != NULL);
    if (word == 0x0) return "";
    fprintf(stderr, "Error: Cannot find word 0x%04x\n", word);
    exit(1);
}

int FindWordByName(char* s, int n)
{
    if (n == 0) return 0;
    int ovidx = GetOverlayIndex(Read16(0x55a5)); // "OV#"

    char temp[256];
    for(int i=0; i<n; i++)
        temp[i] = s[i];
    temp[n] = 0;

    int i = 0;
    do
    {
        if ((dictionary[i].ov != ovidx) && (dictionary[i].ov != -1)) continue;
        if (strcasecmp(dictionary[i].name, temp) == 0) return dictionary[i].word;
    } while(dictionary[++i].name != NULL);
    //fprintf(stderr, "Error: Cannot find string %s\n", s);
    return 0;
}

char *FindDirectoryName(int idx)
{
    int i = 0;
    do
    {
        if (idx == dir[i].idx) return dir[i].name;
    } while(dir[++i].name != NULL);
    fprintf(stderr, "Error: Cannot find directory entry %i\n", idx);
    return NULL;
}
