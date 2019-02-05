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

/*
 ./extractplanetsdata1 | grep '===\|TYPE' | grep -v "(TYPE):  OK"
*/

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

    // 123 101 1 (ORBIT) 0x1dc1 0x6502
    // 123 101 2 (ORBIT) 0x1dae 0x6502
    // 123 101 3 (ORBIT) 0x1d9b 0x6502
    // 123 101 4 (ORBIT) 0x1d88 0x6502
    // 125 100 5 (ORBIT) 0x1d9b 0x6502
    // 123 101 6 (ORBIT) 0x1d75 0x6502
    // 123 101 7 (ORBIT) 0x1dd4 0x6502
    // 123 101 8 (ORBIT) 0x1de7 0x6502

    FillKeyboardBufferString("7541 25858 (ORBIT) 1.5!\n");

    sprintf(str, "(ORBIT) @>C+S %i INST-QTY !_3 ICLOSE\n", planets[idx].orbit);
    FillKeyboardBufferString(str);
    Continue();
/*
    FillKeyboardBufferString("(ORBIT) @>C+S INST-QTY @ . ICLOSE\n");
    Continue();
*/
/*
    // random generator if (ORBIT)=0
    FillKeyboardBufferString("PLSET-OV (PLANET) @>C+S WEC62\n");
    Continue();
*/

    FillKeyboardBufferString("PLSET-OV\n");
    Continue();

    //if (idx == 235) EnableDebug();
    FillKeyboardBufferString("PLAN-RUL\n");
    Continue();
    /*
    FillKeyboardBufferString("SET-PLANET\n");
    Continue();
    */

    printf("=== SCIENCE READING ===\n");
    FillKeyboardBufferString("SCI-OV 32 .READINGS\n");
    Continue();

    sprintf(str, "%i %i SENSE-ADDR 1.5!\n",
      planets[idx].instanceoffset&0xFFFF, planets[idx].instanceoffset>>16
    );
    FillKeyboardBufferString(str);
    Continue();

    FillKeyboardBufferString("AN-OV\n");
    Continue();

    // Patch science level
    Write16(0xedc9, 0x0f30-2); // 1
    Write16(0xedc9+2, 0x1692-2); // EXIT

    printf("=== SENSOR READING ===\n");
    FillKeyboardBufferString("32 (/ANALYSIS)\n");
    Continue();

    idx++;
  }
  return 0;
}
