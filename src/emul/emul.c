
#include<stdio.h>
#include<string.h>

#include"cpu.h"
#include"call.h"
#include"findword.h"
#include"graphics.h"

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
