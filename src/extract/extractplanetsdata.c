#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"../cpu/cpu.h"
#include"../emul/call.h"
#include"../emul/graphics.h"
#include"../patch/patch.h"
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

void GetAtmosphere(int idx)
{
  char str[1024];

  FillKeyboardBufferString("ATMO @ .\n");
  Continue();

  //FillKeyboardBufferString("PLSET-OV ATMO.ACTIVITY @ ATMO.DENSITY C@\n");
  FillKeyboardBufferString("PLSET-OV SURFTYPE C@ ATMO @ ATMO.DENSITY C@ ATMO.ACTIVITY @\n");
  Continue();
  printf("planet %i x=%3i y=%3i orbit=%i surftype=%i atmo=%2i atmospheric_density=%2i atmospheric_activity=%2i\n",
    idx,
    planets[idx].x,
    planets[idx].y,
    planets[idx].orbit,
    Read16(regsp+8),
    Read16(regsp+6),
    Read16(regsp+4),
    Read16(regsp+2)
  );
  Pop();
  Pop();
  Pop();
  Pop();
}

void GetAtmosphericActivity()
{
  int histogramsky[20];
  int histogramstorm[20];
  memset(histogramsky, 0, sizeof(histogramsky));
  memset(histogramstorm, 0, sizeof(histogramstorm));
  FillKeyboardBufferString("STORM-OV\n");
  Continue();
  for(int i=0; i<10000; i++)
  {
    FillKeyboardBufferString("4 WF46C STORM @ #STORM @\n");
    Continue();
    histogramsky[Read16(regsp+2)]++;
    histogramstorm[Read16(regsp+4)]++;
    Pop();
    Pop();
  }
  for(int i=0; i<13; i++)
  {
    printf("%-2i %-3i %-3i\n", i, histogramsky[i], histogramstorm[i]);
  }
}

void GetScienceAndSensorReading(int idx)
{
  char str[1024];
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
  fflush(stdout);
}

void GetRegions()
{
  FillKeyboardBufferString("BIO\n");
  Continue();

  printf("=== MAPS READING ===\n");
  FillKeyboardBufferString("MAPS- WF4F4\n");
  Continue();

  FillKeyboardBufferString("DPART-OV WF166 OTHER-DELETE\n");
  Continue();
  fflush(stdout);
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

      printf("=== Generate planet %i x=%3i y=%3i orbit=%i species=%i ===\n",
        idx,
        planets[idx].x,
        planets[idx].y,
        planets[idx].orbit,
        planets[idx].species
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
    Continue();

    sprintf(str, "(ORBIT) @>C+S %i INST-QTY !_3 ICLOSE\n", planets[idx].orbit);
    FillKeyboardBufferString(str);
    Continue();
    //PrintCStack();
    //exit(1);

/*
    FillKeyboardBufferString("(ORBIT) @>C+S INST-QTY @ . ICLOSE\n");
    Continue();

    still needs, because it doesn't work
    // random generator if (ORBIT)=0
    FillKeyboardBufferString("PLSET-OV (PLANET) @>C+S WEC62\n");
    Continue();
*/

    FillKeyboardBufferString("SET-PLANET\n");
    Continue();


/*
    GetAtmosphericActivity();
    exit(1);
*/
    //GetAtmosphere(idx);
    GetScienceAndSensorReading(idx);
    GetRegions();
/*
    FillKeyboardBufferString("MAPS- WF4F4\n");
    Continue();
    exit(1);
*/
/*
    FillKeyboardBufferString("?POPULA\n");
    Continue();
*/
/*
FillKeyboardBufferString("POPULA\n");
Continue();
*/

/*
    FillKeyboardBufferString("BIO\n");
    Continue();

    FillKeyboardBufferString("0. THIS-REGION 1.5!\n");
    Continue();

    FillKeyboardBufferString("POPULA\n");
    Continue();
    */
/*
    FillKeyboardBufferString("?POPULA\n");
    Continue();
*/
/*
    FillKeyboardBufferString("32 RECORD# ! 68 SAYIT\n");
    Continue();

    exit(1);

    FillKeyboardBufferString("DPART-OV WF166 OTHER-DELETE\n");
    Continue();
*/
/*
    FillKeyboardBufferString("SAVE-BUFFERS\n");
    Continue();
*/
/*
    FillKeyboardBufferString("POPULA\n");
    Continue();
    */
/*
    FillKeyboardBufferString("0 RECORD# !\n");
    Continue();

    FillKeyboardBufferString("OTHER-PAR\n"); // LP-OV
    Continue();
*/
    //exit(1);

    idx++;
  }
  return 0;
}
