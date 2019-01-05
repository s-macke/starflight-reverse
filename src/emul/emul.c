#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"cpu.h"
#include"call.h"
#include"findword.h"
#include"graphics.h"

int main()
{
    InitCPU();
    InitEmulator();
    GraphicsInit();

#ifndef SDL
    //setvbuf(stdout, NULL, _IONBF, 0);
    printf("Try the following commands:\n");
    printf("'2 3 + .'\n");
    printf("'mountb bank-ov d@balance d.'\n");
    printf("'mounta PM-OV PORT-PIC'\n");
    printf("'mounta music-OV 141 cscr>ega'\n");
    printf("'mounta u-b\n");
    printf("'mountb\n mercator-gen\n");

    EnableInterpreter();
    //FillKeyboardBufferString("MOUNTB CFIGARRAYS\n");
    FillKeyboardBufferString("?EGA ON STARTER\nMOUNTB\n");
#endif

    /*
    // default interrupt vector
    Write16Long(0, 0x1C*4+2, 0xF000);
    Write16Long(0, 0x1C*4+0, 0x1280);
    */
    enum RETURNCODE ret;
    do
    {
       ret = Step();
       if (ret == INPUT)
       {
            // 1. either low byte ascii, high byte 0
            // 2. or low byte scancode, high byte 1
#ifdef SDL
            FillKeyboardBufferKey(GraphicsGetChar());
#else
            char input[256];
            input[0] = 0;
            printf("input: ");
            fflush(stdout);
            int n = 0;
            int c;
            do {
                c = getchar();
                input[n] = c;
                input[n+1] = 0;
                n++;
            } while(c != '\n');
            input[n+1] = 0;
            FillKeyboardBufferString(input);
#endif
        }

    } while (ret == OK || ret == INPUT);

    //GraphicsWait();
    GraphicsQuit();
    return 0;
}
