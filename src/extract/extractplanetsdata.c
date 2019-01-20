#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"../emul/cpu.h"
#include"../emul/call.h"
#include"../emul/findword.h"
#include"../emul/graphics.h"
#include"../disasOV/global.h"
#include"../emul/callstack.h"
#include"data.h"
#include"../../starflt1-out/data/starsystem.h"

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
  EnableInterpreter();
  Continue();

  FillKeyboardBufferString("CCLR\n");
  Continue();
  FillKeyboardBufferString("STARTER\n");
  Continue();
  FillKeyboardBufferString("MOUNTA\nLDFONTS\n");
  Continue();
  FillKeyboardBufferString("GAME-OV\nMOUNTB\n?EGA ON\nGDE\n");
  Continue();

  int idx = 0;
  for(;;)
  {
      if (planets[idx].species == -1) return 0;

      printf("=== Generate planet %i x=%3i y=%3i orbit=%i offset=0x%06x ===\n",
        idx,
        planets[idx].x,
        planets[idx].y,
        planets[idx].orbit,
        planets[idx].instanceoffset
      );

    char str[1024];
/*
    sprintf(str, "CDEPTH .\n", planets[idx].seed);
    FillKeyboardBufferString(str);
    Continue();
*/
    sprintf(str, "%i GLOBALSEED !\n", planets[idx].seed);
    FillKeyboardBufferString(str);
    Continue();

    sprintf(str, "%i %i (SYSTEM) 1.5!\n",
      planets[idx].starsystemoffset&0xFFFF, planets[idx].starsystemoffset>>16
    );
    FillKeyboardBufferString(str);
    Continue();

    sprintf(str, "%i %i (PLANET) 1.5!\n",
      planets[idx].instanceoffset&0xFFFF, planets[idx].instanceoffset>>16
    );
    FillKeyboardBufferString(str);
    Continue();

    sprintf(str, "%i %i (ORBIT) 1.5!\n",
      planets[idx].instanceoffset&0xFFFF, planets[idx].instanceoffset>>16
    );
    FillKeyboardBufferString(str);
    Continue();
/*
    FillKeyboardBufferString("(ORBIT) @>C+S INST-QTY . ICLOSE\n");
    Continue();
*/
/*
    FillKeyboardBufferString("PLSET-OV (PLANET) @>C+S WEC62\n");
    Continue();
*/
//    FillKeyboardBufferString("PLSET-OV\n");
//    Continue();
/*
    FillKeyboardBufferString("PLAN-RUL\n");
*/
    FillKeyboardBufferString("SET-PLANET CCLR\n");
    Continue();
    //EnableDebug();
/*
    FillKeyboardBufferString("(PLANET) @>C+S\n");
    Continue();
    FillKeyboardBufferString("(SYSTEM) @>C+S\n");
    Continue();
    FillKeyboardBufferString("ICLOSE\n");
    Continue();
    FillKeyboardBufferString("ICLOSE\n");
    Continue();
*/
/*
    FillKeyboardBufferString("SCI-OV 32 .READINGS\n");
    Continue();
*/
/*
    FillKeyboardBufferString("ATMO @ .\nHYDRO @ .\n");
    Continue();
*/
    idx++;
  }
  return 0;
}
