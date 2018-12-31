
#include<stdio.h>
#include<string.h>

#include"cpu.h"
#include"call.h"
#include"findword.h"
#include"graphics.h"


void Step()
{
    int i;

    unsigned short ax = Read16(si); // si is the forth program counter
    si += 2;
    unsigned short bx = ax;
    unsigned short execaddr = Read16(bx);
#ifdef DEBUG
    printf("pc=0x%04x si=0x%04x word=0x%04x sp=0x%04x", execaddr, si-2, bx+2, regsp);
    printf(" %s\n", FindWord(bx+2, -1));
#endif
    Call(execaddr, bx);
}

int main()
{
    setvbuf(stdout, NULL, _IONBF, 0);
    printf("Try the following commands:\n");
    printf("'2 3 + .'\n");
    printf("'STARTER'\n");
    printf("'mountb bank-ov d@balance d.'\n");
    printf("'?ega on mounta PM-OV PORT-PIC'\n");
    printf("'?ega on mounta music-OV 141 cscr>ega'\n");
    printf("'?ega on mounta u-b\n");

    InitCPU();
    InitEmulator();
    GraphicsInit();

#ifndef SDL
    EnableInterpreter();
#endif

    /*
    // default interrupt vector
    Write16Long(0, 0x1C*4+2, 0xF000);
    Write16Long(0, 0x1C*4+0, 0x1280);
    */
    while(1)
    {
        Step();
    }

    //GraphicsWait();
    GraphicsQuit();

    return 0;
}
