#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"../cpu/cpu.h"
#include"../emul/call.h"
#include"../emul/findword.h"
#include"../emul/graphics.h"
#include"../patch/patch.h"
#include"../disasOV/global.h"
#include"../emul/callstack.h"
#include"data.h"

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
  /*
  { .instanceoffset=0x01c155, .sib=0x01bc55, .prev=0x00d441, .off=0x01c207, .class=0x34, .species=0x15 }, // ORIGINATOR
  { .instanceoffset=0x01bc55, .sib=0x01b896, .prev=0x01c155, .off=0x01bd1b, .class=0x34, .species=0x05 }, // ORIGINATOR
  { .instanceoffset=0x01b896, .sib=0x01ad88, .prev=0x01bc55, .off=0x01bbb9, .class=0x34, .species=0x04 }, // ORIGINATOR
  { .instanceoffset=0x01ad88, .sib=0x018272, .prev=0x01b896, .off=0x01b37e, .class=0x34, .species=0x02 }, // ORIGINATOR
  { .instanceoffset=0x018272, .sib=0x016090, .prev=0x01ad88, .off=0x01acdc, .class=0x34, .species=0x07 }, // ORIGINATOR
  { .instanceoffset=0x016090, .sib=0x01307c, .prev=0x018272, .off=0x018204, .class=0x34, .species=0x01 }, // ORIGINATOR
  { .instanceoffset=0x01307c, .sib=0x011277, .prev=0x016090, .off=0x015f32, .class=0x34, .species=0x06 }, // ORIGINATOR
  { .instanceoffset=0x011277, .sib=0x0111fb, .prev=0x01307c, .off=0x01303f, .class=0x34, .species=0x03 }, // ORIGINATOR
  { .instanceoffset=0x0111fb, .sib=0x0111dd, .prev=0x011277, .off=0x011248, .class=0x34, .species=0x0a }, // ORIGINATOR
  { .instanceoffset=0x0111dd, .sib=0x0111bf, .prev=0x0111fb, .off=0x000000, .class=0x34, .species=0x12 }, // ORIGINATOR
  { .instanceoffset=0x0111bf, .sib=0x010512, .prev=0x0111dd, .off=0x000000, .class=0x34, .species=0x09 }, // ORIGINATOR
  { .instanceoffset=0x010512, .sib=0x00dac0, .prev=0x0111bf, .off=0x010fd8, .class=0x34, .species=0x10 }, // ORIGINATOR
  { .instanceoffset=0x00dac0, .sib=0x00d66e, .prev=0x010512, .off=0x010442, .class=0x34, .species=0x08 }, // ORIGINATOR
  { .instanceoffset=0x00d66e, .sib=0x00d441, .prev=0x00dac0, .off=0x00d762, .class=0x34, .species=0x0b }, // ORIGINATOR
  { .instanceoffset=0x00d441, .sib=0x01c155, .prev=0x00d66e, .off=0x00d53b, .class=0x34, .species=0x13 }, // ORIGINATOR
  { .instanceoffset=0x006a68, .sib=0x006a84, .prev=0x00135c, .off=0x000000, .class=0x3d, .species=0x07 }, // ENCOUNTER
  */
  FillKeyboardBufferString("0 0 (SYSTEM) 1.5!\n");
  Continue();

  FillKeyboardBufferString("27240 0 (ENCOUNTER) 1.5!\n");
  Continue();

  FillKeyboardBufferString("48213 1 (AORIGINATOR) 1.5!\n");
  Continue();
  FillKeyboardBufferString("0 A-POSTU !\n"); // Friendly?
  Continue();
  FillKeyboardBufferString("0 A-SUBJECT !\n");
  Continue();

  FillKeyboardBufferString("A>ORIGINATOR\n");
  Continue();

  FillKeyboardBufferString("DA-STR\n");
  Continue();

  /*

  FillKeyboardBufferString("0 OVINIT-COMM\n");
  Continue();
  */
  //FillKeyboardBufferString("XCOMM\n");
  //Continue();

  GraphicsWait();
  return 0;
}
