// ====== OVERLAY 'FLUX-EFFECT' ======

#include"interface.h"

// store offset = 0xf390
// overlay size   = 0x01d0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf3a6  codep:0x1d29 parp:0xf3a6 size:0x0032 C-string:'UNK_0xf3a6'
// 1704:      UNK_0xf3da  codep:0x1d29 parp:0xf3da size:0x0002 C-string:'UNK_0xf3da'
// 1705:      UNK_0xf3de  codep:0x224c parp:0xf3de size:0x0010 C-string:'UNK_0xf3de'
// 1706:      UNK_0xf3f0  codep:0x224c parp:0xf3f0 size:0x0064 C-string:'UNK_0xf3f0'
// 1707:      UNK_0xf456  codep:0x224c parp:0xf456 size:0x0018 C-string:'UNK_0xf456'
// 1708:      UNK_0xf470  codep:0x224c parp:0xf470 size:0x005e C-string:'UNK_0xf470'
// 1709:      UNK_0xf4d0  codep:0x224c parp:0xf4d0 size:0x002c C-string:'UNK_0xf4d0'
// 1710:            FLUX  codep:0x224c parp:0xf505 size:0x005b C-string:'FLUX'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf3a6[50] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x53, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x41, 0x57, 0x4b}; // UNK_0xf3a6
unsigned char UNK_0xf3da[2] = {0x3a, 0x20}; // UNK_0xf3da



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
  Push(0); // 0
  Push(2); // 2
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
  _gt_R(); // >R
  Push(cc__5); // 5
  Push(0x0014);
  RRND(); // RRND
  Push(h); // I
  C_ex_(); // C!
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  DUP(); // DUP
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
  Push(h); // I
  Push(Pop()+1); // 1+
  _ex_(); // !
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
  R_gt_(); // R>
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  _ex_(); // !
}


// ================================================
// 0xf454: WORD 'UNK_0xf456' codep=0x224c parp=0xf456
// ================================================

void UNK_0xf456() // UNK_0xf456
{
  Push(0x0032);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_UNK_0xf3a6); // UNK_0xf3a6
  Push(i); // I
  Push(Pop() + Pop()); // +
  UNK_0xf3f0(); // UNK_0xf3f0
  Push(cc__5); // 5
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff4

}


// ================================================
// 0xf46e: WORD 'UNK_0xf470' codep=0x224c parp=0xf470
// ================================================

void UNK_0xf470() // UNK_0xf470
{
  Push(pp_UNK_0xf3a6); // UNK_0xf3a6
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(h); // I
  C_at_(); // C@
  _slash_(); // /
  Push(0x0024);
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0047);
  MIN(); // MIN
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(Read16(Pop())); // @
  Push(h); // I
  C_at_(); // C@
  _slash_(); // /
  Push(0x003c);
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0077);
  MIN(); // MIN
  LPLOT(); // LPLOT
  Push(h); // I
  C_at_(); // C@
  Push(Pop()-1); // 1-
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  R_gt_(); // R>
  UNK_0xf3f0(); // UNK_0xf3f0
  return;

  label1:
  R_gt_(); // R>
  C_ex_(); // C!
}


// ================================================
// 0xf4ce: WORD 'UNK_0xf4d0' codep=0x224c parp=0xf4d0
// ================================================

void UNK_0xf4d0() // UNK_0xf4d0
{
  Push(pp_UNK_0xf3da); // UNK_0xf3da
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  DARK(); // DARK

  label1:
  Push(0x0032);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf470(); // UNK_0xf470
  Push(0xfff6);
  Push(0x0028);
  RRND(); // RRND
  TONE(); // TONE
  Push(cc__5); // 5
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffec

  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf4fc: WORD 'FLUX' codep=0x224c parp=0xf505
// ================================================

void FLUX() // FLUX
{
  _gt_MAINVI(); // >MAINVI
  Push(pp_UNK_0xf3da); // UNK_0xf3da
  ON(); // ON
  UNK_0xf456(); // UNK_0xf456
  GREY1(); // GREY1
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x0096);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xf4d0(); // UNK_0xf4d0
  i++;
  } while(i<imax); // (LOOP) 0xfffc

  BEEPOFF(); // BEEPOFF
  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}

// 0xf52f: db 0x46 0x4c 0x55 0x58 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x65 0x72 0x6c 0x61 0x79 0x20 0x53 0x75 0x66 0x66 0x69 0x78 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'FLUX-VOC________________________erlay Suffix----- '
  