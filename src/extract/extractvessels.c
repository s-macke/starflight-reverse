#include<stdio.h>
#include<stdlib.h>

#include"../cpu/cpu.h"
#include"../emul/call.h"
#include"../emul/graphics.h"
#include"../patch/patch.h"

/*
cat stdout | grep -a '===\|TYPE' | grep -a -v "(TYPE):  OK"
montage vessel*.ppm -tile 6x -geometry 320x240 out.png
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

void GetScienceAndSensorReading(int idx)
{
  char str[1024];
  char filename[1024];

  sprintf(str, "2984 2 >C+S %i INST-SPECIES !_3\n", idx);
  FillKeyboardBufferString(str);
  Continue();

  FillKeyboardBufferString("SCI-OV\n");
  Continue();

  printf("=== SCIENCE READING ===\n");
  GraphicsClear(0);
  FillKeyboardBufferString("25 .READINGS\n");
  Continue();
  sprintf(filename, "vessel%02d_science.ppm", idx);
  GraphicsSave(filename);

  FillKeyboardBufferString("ICLOSE\n");
  Continue();

  sprintf(str, "2984 2 SENSE-ADDR 1.5!\n");
  FillKeyboardBufferString(str);
  Continue();

  FillKeyboardBufferString("AN-OV\n");
  Continue();
  fflush(stdout);

  // set mass for ship to prevent division by 0
  FillKeyboardBufferString("*SHIP >C+S 1 %MASS !_3 ICLOSE\n");
  Continue();
  fflush(stdout);

  // Patch science level
  Write16(0xedc9, 0x0f30-2); // 1
  Write16(0xedc9+2, 0x1692-2); // EXIT

  printf("=== SENSOR READING ===\n");
  GraphicsClear(0);
  FillKeyboardBufferString("0 0 POS.\n");
  Continue();
  FillKeyboardBufferString("25 (/ANALYSIS)\n");
  Continue();
  sprintf(filename, "vessel%02d_analysis.ppm", idx);
  GraphicsSave(filename);
  fflush(stdout);
}

int main()
{
  InitCPU();
  InitEmulator();
  GraphicsInit();
  EnableInterpreter();
  DisableInterpreterOutput();
  Continue();

  FillKeyboardBufferString("CCLR\n");
  Continue();
  FillKeyboardBufferString("STARTER\n");
  Continue();
  FillKeyboardBufferString("MOUNTA\nLDFONTS\n");
  Continue();
  FillKeyboardBufferString("GAME-OV\nMOUNTB\nGDE\n");
  Continue();
  FillKeyboardBufferString("?EGA ON\n3 MONITOR !\nSETDBUF\n");
  Continue();
  FillKeyboardBufferString("ESC-EN OFF\n");
  Continue();

for(int i=1; i<=25; i++)
{
  printf("=== VESSEL %2i ===\n", i);

  GraphicsClear(0);
  GetScienceAndSensorReading(i);
}


  GraphicsWait();
  return 0;
}
