#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"../cpu/cpu.h"
#include"call.h"
#include"findword.h"
#include"graphics.h"
#include"../patch/patch.h"

void Continue()
{
    while(1)
    {
       enum RETURNCODE ret = Step();
       if (ret == ERROR) exit(1);
       if (ret != OK) return;
    }
}


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
    printf("'mounta u-b'\n");
    printf("'mountb\n 1234 mercator-gen'\n");
    printf("'SCI-OV 32 .READINGS'\n"); // 32 is the planet class
    printf("-----------------------------\n");

    EnableInterpreter();
    SaveSTARFLT();
    //FillKeyboardBufferString("STARTER\nMOUNTA\nLDFONTS\nMOUNTB\n?EGA ON\nSET.COLORS\nLOAD-CO\nSETDBUF\n>DISPLAY\n");
    FillKeyboardBufferString("STARTER\n");
    Continue();
    //FillKeyboardBufferString("RELAXTIME ON\n");
    //Continue();

    FillKeyboardBufferString("MOUNTA\nLDFONTS\n");
    Continue();

    //FillKeyboardBufferString("RELAXTIME OFF\n");
    //Continue();
    FillKeyboardBufferString("GAME-OV\nMOUNTB\n?EGA ON\nGDE\n");
    Continue();

#endif

// Load Compound
/*
FillKeyboardBufferString("130 FILE# ! 40 RECORD# !\n");
Continue();
FillKeyboardBufferString("SCI-OV WE696 @ .\n");
Continue();
*/
/*
FillKeyboardBufferString("SCI-OV WE696 @ .\n");
Continue();
*/
/*
// planet data earth
FillKeyboardBufferString("32 FILE# ! 18 RECORD# !\n");
Continue();

// Load mass
FillKeyboardBufferString("SCI-OV WE676 @ .\n");
Continue();
*/
/*
FillKeyboardBufferString("(SYSTEM) 1.5@ >C+S @INST-SPECIES\n");
Continue();
*/
/*
// Load one element from a starsystem
FillKeyboardBufferString("4195 0 >C+S @INST-SPECIES\n");
Continue();
*/

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
