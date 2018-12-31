#include<stdio.h>

#include"callstack.h"
#include"findword.h"
#include"cpu.h"

// ------------------------------------------------
// Functions to print the call stack properly
// ------------------------------------------------

unsigned short int bpbase = 0;

void SetBPBase(int bp)
{
    const unsigned short int bpbase1 = 0xd4a7 + 0x100 + 0x80; // early call stack base
    const unsigned short int bpbase2 = 0xd4a7 + 0x100 + 0x80+8615; // late call stack base

    bpbase = bpbase1;
    if (regbp > bpbase)
    {
        bpbase = bpbase2;
    }
}

int iscall[20000];
int iscallovidx[20000];

void DefineCallStack(int bp, int value)
{
    SetBPBase(bp);
    //printf("%i\n", bpbase-bp);
    if (bpbase-bp > 0)
    {
        iscall[(bpbase-bp)>>1] = value;
        if (value) iscallovidx[(bpbase-bp)>>1] = GetOverlayIndex(Read16(0x55a5));
    }
}

void PrintCallstacktrace(int bx)
{
    int ovidx = GetOverlayIndex(Read16(0x55a5));
    SetBPBase(regbp);
    printf("========================================\n");
    printf("              Callstack\n");
    printf("  Address         Overlay   Word \n");
    printf("========================================\n");
    printf("  0x%04x  %15s   %s\n", si, GetOverlayName(si, ovidx), FindWord(bx+2, ovidx));

    int word = FindClosestWord(si, ovidx);
    printf("  0x%04x  %15s   %s\n", word, GetOverlayName(word, ovidx), FindWord(word, ovidx));
    for(int i=regbp; i<bpbase; i += 2)
    {
        if (iscall[(bpbase-i)>>1])
        {
            ovidx = iscallovidx[(bpbase-i)>>1];
            int word = FindClosestWord(Read16(i), ovidx);
            char* ovname = GetOverlayName(word, ovidx);
            printf("  0x%04x  %15s   %s\n", word, ovname, FindWord(word, ovidx));
        }
    }
    printf("==================================\n");
    fflush(stdout);
}
