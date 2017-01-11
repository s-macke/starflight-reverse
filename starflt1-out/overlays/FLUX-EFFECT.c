// ====== OVERLAY 'FLUX-EFFECT' ======
// store offset = 0xf390
// overlay size   = 0x01d0

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf3a6  codep:0x1d29 parp:0xf3a6 size:0x0032 C-string:'UNK_0xf3a6'
//      UNK_0xf3da  codep:0x1d29 parp:0xf3da size:0x0002 C-string:'UNK_0xf3da'
//      UNK_0xf3de  codep:0x224c parp:0xf3de size:0x0010 C-string:'UNK_0xf3de'
//      UNK_0xf3f0  codep:0x224c parp:0xf3f0 size:0x0064 C-string:'UNK_0xf3f0'
//      UNK_0xf456  codep:0x224c parp:0xf456 size:0x0018 C-string:'UNK_0xf456'
//      UNK_0xf470  codep:0x224c parp:0xf470 size:0x005e C-string:'UNK_0xf470'
//      UNK_0xf4d0  codep:0x224c parp:0xf4d0 size:0x002c C-string:'UNK_0xf4d0'
//            FLUX  codep:0x224c parp:0xf505 size:0x0000 C-string:'FLUX'

// =================================
// ============= EXTERN ============
// =================================
void MAX(); // MAX
void MIN(); // MIN
void RRND(); // RRND
void C_ex_(); // C!
void _ex__3(); // !_3
void ON_3(); // ON_3
void _ex_COLOR(); // !COLOR
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void DARK(); // DARK
void BEEPON(); // BEEPON
void _slash_(); // /
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void LPLOT(); // LPLOT
void V_gt_DISPLAY(); // V>DISPLAY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xf3a6 = 0xf3a6; // UNK_0xf3a6 size: 50
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x53, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x41, 0x57, 0x4b}

const unsigned short int pp_UNK_0xf3da = 0xf3da; // UNK_0xf3da size: 2
// {0x3a, 0x20}




// 0xf3a2: db 0x1a 0x00 '  '

// ================================================
// 0xf3a4: WORD 'UNK_0xf3a6' codep=0x1d29 parp=0xf3a6
// ================================================
// 0xf3a6: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4f 0x53 0x48 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x41 0x57 0x4b ':  ALLOT OSH                                   AWK'

// ================================================
// 0xf3d8: WORD 'UNK_0xf3da' codep=0x1d29 parp=0xf3da
// ================================================
// 0xf3da: db 0x3a 0x20 ': '

// ================================================
// 0xf3dc: WORD 'UNK_0xf3de' codep=0x224c parp=0xf3de
// ================================================

void UNK_0xf3de() // UNK_0xf3de
{
  Push(Pop() * Pop()); // *
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf3ee: WORD 'UNK_0xf3f0' codep=0x224c parp=0xf3f0
// ================================================

void UNK_0xf3f0() // UNK_0xf3f0
{
  unsigned short int a;
  a = Pop(); // >R
  Push(5);
  Push(0x0014);
  RRND(); // RRND
  Push(a); // I
  C_ex_(); // C!
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x0048);
  UNK_0xf3de(); // UNK_0xf3de
  Push(0xffdc);
  Push(0x0024);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffdc);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(a); // I
  Push(Pop()+1); // 1+
  _ex__3(); // !_3
  Push(0x0078);
  UNK_0xf3de(); // UNK_0xf3de
  Push(0xffc4);
  Push(0x003c);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffc4);
  MAX(); // MAX
  Push(0x003b);
  MIN(); // MIN
  Push(a); // R>
  Push(3);
  Push(Pop() + Pop()); // +
  _ex__3(); // !_3
}


// ================================================
// 0xf454: WORD 'UNK_0xf456' codep=0x224c parp=0xf456
// ================================================

void UNK_0xf456() // UNK_0xf456
{
  signed short int i, imax;
  Push(0x0032);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(pp_UNK_0xf3a6); // UNK_0xf3a6
  Push(i); // I
  Push(Pop() + Pop()); // +
  UNK_0xf3f0(); // UNK_0xf3f0
  Push(5);
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xfff4

}


// ================================================
// 0xf46e: WORD 'UNK_0xf470' codep=0x224c parp=0xf470
// ================================================

void UNK_0xf470() // UNK_0xf470
{
  unsigned short int a;
  Push(pp_UNK_0xf3a6); // UNK_0xf3a6
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(a); // I
  Push(3);
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  _slash_(); // /
  Push(0x0024);
  Push(Pop() + Pop()); // +
  Push(0);
  MAX(); // MAX
  Push(0x0047);
  MIN(); // MIN
  Push(a); // I
  Push(Pop()+1); // 1+
  Push(Read16(Pop())); // @
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  _slash_(); // /
  Push(0x003c);
  Push(Pop() + Pop()); // +
  Push(0);
  MAX(); // MAX
  Push(0x0077);
  MIN(); // MIN
  LPLOT(); // LPLOT
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(a); // R>
  UNK_0xf3f0(); // UNK_0xf3f0
  return;

  label1:
  Push(a); // R>
  C_ex_(); // C!
}


// ================================================
// 0xf4ce: WORD 'UNK_0xf4d0' codep=0x224c parp=0xf4d0
// ================================================

void UNK_0xf4d0() // UNK_0xf4d0
{
  signed short int i, imax;
  Push(pp_UNK_0xf3da); // UNK_0xf3da
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  DARK(); // DARK

  label1:
  Push(0x0032);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf470(); // UNK_0xf470
  Push(0xfff6);
  Push(0x0028);
  RRND(); // RRND
  TONE(); // TONE
  Push(5);
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xffec

  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf4fc: WORD 'FLUX' codep=0x224c parp=0xf505
// ================================================
// entry

void FLUX() // FLUX
{
  signed short int i, imax;
  _gt_MAINVIEW(); // >MAINVIEW
  Push(pp_UNK_0xf3da); // UNK_0xf3da
  ON_3(); // ON_3
  UNK_0xf456(); // UNK_0xf456
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  Push(0);
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x0096);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  UNK_0xf4d0(); // UNK_0xf4d0
  i++;
  } while(i<imax); // (LOOP) 0xfffc

  BEEPOFF(); // BEEPOFF
  DARK(); // DARK
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
}

// 0xf52f: db 0x46 0x4c 0x55 0x58 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x65 0x72 0x6c 0x61 0x79 0x20 0x53 0x75 0x66 0x66 0x69 0x78 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'FLUX-VOC________________________erlay Suffix----- '
  