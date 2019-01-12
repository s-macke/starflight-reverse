#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"../emul/cpu.h"
#include"../emul/call.h"
#include"../emul/findword.h"
#include"../emul/graphics.h"
#include"../disasOV/global.h"
#include"../../starflt1-out/data/instance.h"

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

  EnableInterpreter();
  FillKeyboardBufferString("STARTER\n");
  Continue();
  FillKeyboardBufferString("MOUNTA\nLDFONTS\n");
  Continue();
  FillKeyboardBufferString("GAME-OV\nMOUNTB\n?EGA ON\nGDE\n");
  Continue();
  FillKeyboardBufferString("?EGA ON STARTER\nMOUNTB\n");
  Continue();


  FillKeyboardBufferString("4291 0 (PLANET) 1.5! 4291 0 (ORBIT) 1.5! SET-PLANET\n");
  Continue();
  FillKeyboardBufferString("SCI-OV 32 .READINGS\n");
  Continue();
}
