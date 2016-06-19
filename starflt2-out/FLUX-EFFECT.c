// ====== OVERLAY 'FLUX-EFFECT' ======
// store offset = 0xf330
// overlay size   = 0x0230

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf346  codep:0x224c parp:0xf346 size:0x000e C-string:'UNK_0xf346'
// 1870:      UNK_0xf356  codep:0x1d29 parp:0xf356 size:0x0032 C-string:'UNK_0xf356'
// 1871:      UNK_0xf38a  codep:0x1d29 parp:0xf38a size:0x0002 C-string:'UNK_0xf38a'
// 1872:      UNK_0xf38e  codep:0x224c parp:0xf38e size:0x0010 C-string:'UNK_0xf38e'
// 1873:      UNK_0xf3a0  codep:0x224c parp:0xf3a0 size:0x0064 C-string:'UNK_0xf3a0'
// 1874:      UNK_0xf406  codep:0x224c parp:0xf406 size:0x0018 C-string:'UNK_0xf406'
// 1875:      UNK_0xf420  codep:0x224c parp:0xf420 size:0x005e C-string:'UNK_0xf420'
// 1876:     HYPER-FRAME  codep:0x224c parp:0xf48e size:0x0022 C-string:'HYPER_dash_FRAME'
// 1877:            FLUX  codep:0x224c parp:0xf4b9 size:0x002a C-string:'FLUX'
// 1878:      UNK_0xf4e5  codep:0x224c parp:0xf4e5 size:0x0024 C-string:'UNK_0xf4e5'
// 1879:          JUMPFX  codep:0x224c parp:0xf514 size:0x0000 C-string:'JUMPFX'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf356[50] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x53, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x41, 0x57, 0x4b}; // UNK_0xf356
unsigned char UNK_0xf38a[2] = {0x3a, 0x20}; // UNK_0xf38a



// 0xf342: db 0x21 0x00 '! '

// ================================================
// 0xf344: WORD 'UNK_0xf346' codep=0x224c parp=0xf346
// ================================================

void UNK_0xf346() // UNK_0xf346
{
  Push(0xfff6);
  Push(0x0028);
  RRND(); // RRND
  TONE(); // TONE
}


// ================================================
// 0xf354: WORD 'UNK_0xf356' codep=0x1d29 parp=0xf356
// ================================================
// 0xf356: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4f 0x53 0x48 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x41 0x57 0x4b ':  ALLOT OSH                                   AWK'

// ================================================
// 0xf388: WORD 'UNK_0xf38a' codep=0x1d29 parp=0xf38a
// ================================================
// 0xf38a: db 0x3a 0x20 ': '

// ================================================
// 0xf38c: WORD 'UNK_0xf38e' codep=0x224c parp=0xf38e
// ================================================

void UNK_0xf38e() // UNK_0xf38e
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
// 0xf39e: WORD 'UNK_0xf3a0' codep=0x224c parp=0xf3a0
// ================================================

void UNK_0xf3a0() // UNK_0xf3a0
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
  Push(Read16(sp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x0048);
  UNK_0xf38e(); // UNK_0xf38e
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
  UNK_0xf38e(); // UNK_0xf38e
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
// 0xf404: WORD 'UNK_0xf406' codep=0x224c parp=0xf406
// ================================================

void UNK_0xf406() // UNK_0xf406
{
  Push(0x0032);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_UNK_0xf356); // UNK_0xf356
  Push(i); // I
  Push(Pop() + Pop()); // +
  UNK_0xf3a0(); // UNK_0xf3a0
  Push(cc__5); // 5
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff4

}


// ================================================
// 0xf41e: WORD 'UNK_0xf420' codep=0x224c parp=0xf420
// ================================================

void UNK_0xf420() // UNK_0xf420
{
  Push(pp_UNK_0xf356); // UNK_0xf356
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Read8(Pop())&0xFF); // C@
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
  Push(Read8(Pop())&0xFF); // C@
  _slash_(); // /
  Push(0x003c);
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0077);
  MIN(); // MIN
  LPLOT(); // LPLOT
  Push(h); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  R_gt_(); // R>
  UNK_0xf3a0(); // UNK_0xf3a0
  return;

  label1:
  R_gt_(); // R>
  C_ex_(); // C!
}


// ================================================
// 0xf47e: WORD 'HYPER-FRAME' codep=0x224c parp=0xf48e
// ================================================

void HYPER_dash_FRAME() // HYPER-FRAME
{
  Push(pp_UNK_0xf38a); // UNK_0xf38a
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
  UNK_0xf420(); // UNK_0xf420
  UNK_0xf346(); // UNK_0xf346
  Push(cc__5); // 5
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff6

  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf4b0: WORD 'FLUX' codep=0x224c parp=0xf4b9
// ================================================
// entry

void FLUX() // FLUX
{
  _gt_MAINVI(); // >MAINVI
  Push(pp_UNK_0xf38a); // UNK_0xf38a
  ON(); // ON
  UNK_0xf406(); // UNK_0xf406
  SetColor("GREY1");
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
  HYPER_dash_FRAME(); // HYPER-FRAME
  i++;
  } while(i<imax); // (LOOP) 0xfffc

  BEEPOFF(); // BEEPOFF
  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf4e3: WORD 'UNK_0xf4e5' codep=0x224c parp=0xf4e5
// ================================================

void UNK_0xf4e5() // UNK_0xf4e5
{
  Push(pp_UNK_0xf38a); // UNK_0xf38a
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
  RNDCLR(); // RNDCLR
  Push(i); // I
  UNK_0xf420(); // UNK_0xf420
  UNK_0xf346(); // UNK_0xf346
  Push(cc__5); // 5
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff4

  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf509: WORD 'JUMPFX' codep=0x224c parp=0xf514
// ================================================
// entry

void JUMPFX() // JUMPFX
{
  _gt_MAINVI(); // >MAINVI
  UNK_0xf406(); // UNK_0xf406
  Push(0); // 0
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(Pop()*2); // 2*
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xf4e5(); // UNK_0xf4e5
  Push(0); // 0
  Push(cc__6); // 6
  RRND(); // RRND
  Push(pp_UNK_0xf38a); // UNK_0xf38a
  _ex_(); // !
  i++;
  } while(i<imax); // (LOOP) 0xfff2

  BEEPOFF(); // BEEPOFF
  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}

// 0xf53e: db 0x46 0x4c 0x55 0x58 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x65 0x72 0x00 'FLUX-VOC________________________er '
  