// ====== OVERLAY 'STORM-OV' ======
// store offset = 0xf110
// overlay size   = 0x0450

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf1cc  codep:0x224c parp:0xf1cc size:0x0026 C-string:'UNK_0xf1cc'
// 1870:      UNK_0xf1f4  codep:0x224c parp:0xf1f4 size:0x000c C-string:'UNK_0xf1f4'
// 1871:          STORMS  codep:0xf14c parp:0xf20b size:0x00b6 C-string:'STORMS'
// 1872:      UNK_0xf2c3  codep:0x7420 parp:0xf2c3 size:0x0003 C-string:'UNK_0xf2c3'
// 1873:      UNK_0xf2c8  codep:0x7420 parp:0xf2c8 size:0x0003 C-string:'UNK_0xf2c8'
// 1874:      UNK_0xf2cd  codep:0x7394 parp:0xf2cd size:0x0006 C-string:'UNK_0xf2cd'
// 1875:      UNK_0xf2d5  codep:0x7394 parp:0xf2d5 size:0x000a C-string:'UNK_0xf2d5'
// 1876:      UNK_0xf2e1  codep:0x224c parp:0xf2e1 size:0x0012 C-string:'UNK_0xf2e1'
// 1877:      UNK_0xf2f5  codep:0x224c parp:0xf2f5 size:0x000a C-string:'UNK_0xf2f5'
// 1878:      UNK_0xf301  codep:0x7420 parp:0xf301 size:0x0003 C-string:'UNK_0xf301'
// 1879:      UNK_0xf306  codep:0x7420 parp:0xf306 size:0x0003 C-string:'UNK_0xf306'
// 1880:      UNK_0xf30b  codep:0x7420 parp:0xf30b size:0x0003 C-string:'UNK_0xf30b'
// 1881:      UNK_0xf310  codep:0x7394 parp:0xf310 size:0x0006 C-string:'UNK_0xf310'
// 1882:      UNK_0xf318  codep:0x224c parp:0xf318 size:0x0018 C-string:'UNK_0xf318'
// 1883:      UNK_0xf332  codep:0x224c parp:0xf332 size:0x0026 C-string:'UNK_0xf332'
// 1884:      UNK_0xf35a  codep:0x224c parp:0xf35a size:0x0018 C-string:'UNK_0xf35a'
// 1885:      UNK_0xf374  codep:0x224c parp:0xf374 size:0x0036 C-string:'UNK_0xf374'
// 1886:       INJURE-PL  codep:0x224c parp:0xf3b8 size:0x0062 C-string:'INJURE_dash_PL'
// 1887:      UNK_0xf41c  codep:0x224c parp:0xf41c size:0x004a C-string:'UNK_0xf41c'
// 1888:      UNK_0xf468  codep:0x224c parp:0xf468 size:0x003c C-string:'UNK_0xf468'
// 1889:      UNK_0xf4a6  codep:0x224c parp:0xf4a6 size:0x003a C-string:'UNK_0xf4a6'
// 1890:      UNK_0xf4e2  codep:0x224c parp:0xf4e2 size:0x0012 C-string:'UNK_0xf4e2'
// 1891:       (DO.STORM  codep:0x224c parp:0xf502 size:0x0000 C-string:'_ro_DO_dot_STORM'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf122: db 0x44 0x00 0x4c 0x22 'D L"'

void UNK_0xf126() // UNK_0xf126
{
  DUP(); // DUP
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  RANGE(); // RANGE
  Push(Pop()+2); // 2+
}

// 0xf132: db 0x4c 0x22 0x4f 0x06 0x97 0x3b 0xb3 0x0f 0x41 0x0e 0x93 0x1f 0xed 0x22 0x7f 0x0e 0x8c 0x21 0xf2 0x0e 0x20 0x0f 0x9d 0x6d 0xfa 0x1b 'L"O  ;  A    "  !     m  '
// 0xf14c: call   1649
  Push(0); // 0
  Push(cc__4); // 4
  ROLL(); // ROLL
  Push(cc__4); // 4
  ROLL(); // ROLL
  Push(cc__4); // 4
  ROLL(); // ROLL
  UNK_0xf126(); // UNK_0xf126

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _2_at_(); // 2@
  Push(cc__3); // 3
  PICK(); // PICK
  _eq_(); // =
  _gt_R(); // >R
  Push(cc__3); // 3
  PICK(); // PICK
  _eq_(); // =
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(i); // I
  Push(cc__4); // 4
  ROLL(); // ROLL
  Pop(); // DROP
  ROT(); // ROT
  ROT(); // ROT
  LEAVE(); // LEAVE

  label1:
  Push(cc__6); // 6
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffd4

  Pop(); Pop();// 2DROP
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  return;

  label2:
  PRINT("INDEX NOT IN PROBABILITY ARRAY! ", 32); // (.")
  UNRAVEL(); // UNRAVEL
  QUIT(); // QUIT
}


// ================================================
// 0xf1ca: WORD 'UNK_0xf1cc' codep=0x224c parp=0xf1cc
// ================================================

void UNK_0xf1cc() // UNK_0xf1cc
{

  label1:
  OVER(); // OVER
  OVER(); // OVER
  C_at_(); // C@
  DUP(); // DUP
  Push(0x0064);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_R(); // >R
  _gt_(); // >
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(Pop()+1); // 1+
  Push(Pop()+3); // 3+
  goto label1;
}


// ================================================
// 0xf1f2: WORD 'UNK_0xf1f4' codep=0x224c parp=0xf1f4
// ================================================

void UNK_0xf1f4() // UNK_0xf1f4
{
  UNK_0xf1cc(); // UNK_0xf1cc
  Push(Pop()+1); // 1+
  _1_dot_5_at_(); // 1.5@
  ROT(); // ROT
  Pop(); // DROP
}


// ================================================
// 0xf200: WORD 'STORMS' codep=0xf14c parp=0xf20b
// ================================================
// 0xf20b: db 0x3c 0x00 0x00 0x00 0x08 0x00 0x49 0xf2 0x00 0x00 0x09 0x00 0x4d 0xf2 0x00 0x00 0x06 0x00 0x59 0xf2 0x00 0x00 0x07 0x00 0x6d 0xf2 0x00 0x00 0x04 0x00 0x81 0xf2 0x00 0x00 0x05 0x00 0x91 0xf2 0x00 0x00 0x0a 0x00 0xa5 0xf2 0x00 0x00 0x0b 0x00 0xad 0xf2 0x00 0x00 0x02 0x00 0xb9 0xf2 0x00 0x00 0x03 0x00 0xbd 0xf2 0x64 0x01 0x00 0x00 0x1a 0x06 0x00 0x00 0x33 0x07 0x00 0x00 0x64 0x08 0x00 0x00 0x10 0x01 0x00 0x00 0x1f 0x02 0x00 0x00 0x2e 0x03 0x00 0x00 0x3d 0x04 0x00 0x00 0x64 0x05 0x00 0x00 0x10 0x06 0x00 0x00 0x1f 0x07 0x00 0x00 0x2e 0x0b 0x00 0x00 0x3d 0x09 0x00 0x00 0x64 0x0a 0x00 0x00 0x14 0x01 0x00 0x00 0x27 0x02 0x00 0x00 0x39 0x03 0x00 0x00 0x64 0x05 0x00 0x00 0x10 0x06 0x00 0x00 0x1f 0x07 0x00 0x00 0x2e 0x0a 0x00 0x00 0x3d 0x0c 0x00 0x00 0x64 0x0d 0x00 0x00 0x27 0x01 0x00 0x00 0x64 0x02 0x00 0x00 0x21 0x06 0x00 0x00 0x42 0x07 0x00 0x00 0x64 0x0a 0x00 0x00 0x64 0x00 0x00 0x00 0x64 0x00 0x00 0x00 '<     I     M     Y     m                                     d       3   d           .   =   d           .   =   d       '   9   d           .   =   d   '   d   !   B   d   d   d   '

// ================================================
// 0xf2c1: WORD 'UNK_0xf2c3' codep=0x7420 parp=0xf2c3
// ================================================
// 0xf2c3: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xf2c6: WORD 'UNK_0xf2c8' codep=0x7420 parp=0xf2c8
// ================================================
// 0xf2c8: db 0x11 0x17 0x03 '   '

// ================================================
// 0xf2cb: WORD 'UNK_0xf2cd' codep=0x7394 parp=0xf2cd
// ================================================
// 0xf2cd: db 0x20 0x11 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xf2d3: WORD 'UNK_0xf2d5' codep=0x7394 parp=0xf2d5
// ================================================
// 0xf2d5: db 0x20 0x01 0x01 0x17 0x49 0x6c 0x29 0x1d 0x3a 0x20 '    Il) : '

// ================================================
// 0xf2df: WORD 'UNK_0xf2e1' codep=0x224c parp=0xf2e1
// ================================================

void UNK_0xf2e1() // UNK_0xf2e1
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xf2c8(); // UNK_0xf2c8
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf2c3(); // UNK_0xf2c3
  C_at_(); // C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2f3: WORD 'UNK_0xf2f5' codep=0x224c parp=0xf2f5
// ================================================

void UNK_0xf2f5() // UNK_0xf2f5
{
  UNK_0xf2e1(); // UNK_0xf2e1
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xf2ff: WORD 'UNK_0xf301' codep=0x7420 parp=0xf301
// ================================================
// 0xf301: db 0x11 0x11 0x03 '   '

// ================================================
// 0xf304: WORD 'UNK_0xf306' codep=0x7420 parp=0xf306
// ================================================
// 0xf306: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xf309: WORD 'UNK_0xf30b' codep=0x7420 parp=0xf30b
// ================================================
// 0xf30b: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xf30e: WORD 'UNK_0xf310' codep=0x7394 parp=0xf310
// ================================================
// 0xf310: db 0x10 0x13 0x01 0x14 0xc8 0x6a '     j'

// ================================================
// 0xf316: WORD 'UNK_0xf318' codep=0x224c parp=0xf318
// ================================================

void UNK_0xf318() // UNK_0xf318
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xf301(); // UNK_0xf301
  Push(0); // 0
  Push(cc__6); // 6
  RRND(); // RRND
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf330: WORD 'UNK_0xf332' codep=0x224c parp=0xf332
// ================================================

void UNK_0xf332() // UNK_0xf332
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  Push(0x000b);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xf358: WORD 'UNK_0xf35a' codep=0x224c parp=0xf35a
// ================================================

void UNK_0xf35a() // UNK_0xf35a
{
  Push(1); // 1
  Push(pp_E_slash_M); // E/M
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  _3_star_(); // 3*
  Push(2); // 2
  MAX(); // MAX
  Push(0x001e);
  MIN(); // MIN
  RRND(); // RRND
}


// ================================================
// 0xf372: WORD 'UNK_0xf374' codep=0x224c parp=0xf374
// ================================================

void UNK_0xf374() // UNK_0xf374
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  UNK_0xf30b(); // UNK_0xf30b
  _do__dot_(); // $.
  PRINT(" IS ", 4); // (.")
  UNK_0xf306(); // UNK_0xf306
  C_at_(); // C@
  if (Pop() == 0) goto label1;
  PRINT("INJURED", 7); // (.")
  goto label2;

  label1:
  PRINT("KILLED", 6); // (.")

  label2:
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf3aa: WORD 'INJURE-PL' codep=0x224c parp=0xf3b8
// ================================================
// entry

void INJURE_dash_PL() // INJURE-PL
{
  Push(0x03e8);
  MS(); // MS
  UNK_0xf35a(); // UNK_0xf35a
  UNK_0xf318(); // UNK_0xf318
  _gt_C_plus_S(); // >C+S
  UNK_0xf310(); // UNK_0xf310
  C_at_(); // C@
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  Push(pp_E_slash_M); // E/M
  Push(Read16(Pop())); // @
  _3_star_(); // 3*
  ABS(); // ABS
  Push(pp__pe_EFF); // %EFF
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  UNK_0xf306(); // UNK_0xf306
  C_at_(); // C@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  UNK_0xf306(); // UNK_0xf306
  C_ex_(); // C!
  UNK_0xf374(); // UNK_0xf374
  ICLOSE(); // ICLOSE
  Push(pp__ask_HEAL); // ?HEAL
  ON(); // ON
  Push(0x01f4);
  MS(); // MS
  Push(0xc18b);
  MODULE(); // MODULE
  Push(0xc1b8);
  MODULE(); // MODULE
  Push(0xc19a);
  MODULE(); // MODULE
}


// ================================================
// 0xf41a: WORD 'UNK_0xf41c' codep=0x224c parp=0xf41c
// ================================================

void UNK_0xf41c() // UNK_0xf41c
{
  Push(pp_STORM); // STORM
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xf2f5(); // UNK_0xf2f5
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0x00c5);
  Push(0x000c);
  Push(0x00c1);
  Push(0x0044);
  Push(pp_LCOLOR); // LCOLOR
  Push(Read16(Pop())); // @
  POLY_dash_WI(); // POLY-WI
  Push(0x0074);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(cc__7); // 7
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
  Push(0x0074);
  Push(0x008f);
  POS_dot_(); // POS.
  Push(0x0009);
  BLACK(); // BLACK
  POLY_dash_ER(); // POLY-ER
}


// ================================================
// 0xf466: WORD 'UNK_0xf468' codep=0x224c parp=0xf468
// ================================================

void UNK_0xf468() // UNK_0xf468
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(cc__3); // 3
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(cc__6); // 6
  Push(0x000b);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  Push(0x0032);
  goto label3;

  label2:
  Push(0x004b);

  label3:
  goto label4;

  label1:
  Pop(); // DROP
  Push(0x0064);

  label4:
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
  Push(pp_FORCED); // FORCED
  ON(); // ON
  UNK_0xf41c(); // UNK_0xf41c
}


// ================================================
// 0xf4a4: WORD 'UNK_0xf4a6' codep=0x224c parp=0xf4a6
// ================================================

void UNK_0xf4a6() // UNK_0xf4a6
{
  Push(cc__5); // 5
  SWAP(); // SWAP
  _dash_(); // -
  _3_star_(); // 3*
  Push(1); // 1
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0x000c);
  MIN(); // MIN
  Push(0); // 0
  MAX(); // MAX
  Push(pp_STORM); // STORM
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  UNK_0xf2d5(); // UNK_0xf2d5
  C_at_(); // C@
  Push(Pop()*2); // 2*
  Push(Pop()+1); // 1+
  Push(0); // 0
  STORMS(); // STORMS
  UNK_0xf1f4(); // UNK_0xf1f4
  Pop(); // DROP
  Push(pp__n_STORM); // #STORM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf4e0: WORD 'UNK_0xf4e2' codep=0x224c parp=0xf4e2
// ================================================

void UNK_0xf4e2() // UNK_0xf4e2
{
  Push(1); // 1
  Push(pp_STORM); // STORM
  _st__ex__gt_(); // <!>
  Push(0); // 0
  Push(0); // 0
  RRND(); // RRND
  Push(pp__n_STORM); // #STORM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf4f4: WORD '(DO.STORM' codep=0x224c parp=0xf502
// ================================================
// entry

void _ro_DO_dot_STORM() // (DO.STORM
{
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf2cd(); // UNK_0xf2cd
  C_at_(); // C@
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  UNK_0xf4a6(); // UNK_0xf4a6
  goto label2;

  label1:
  UNK_0xf4e2(); // UNK_0xf4e2

  label2:
  ICLOSE(); // ICLOSE
  UNK_0xf468(); // UNK_0xf468
  R_gt_(); // R>
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(0xcdc0);
  MODULE(); // MODULE

  label3:
  UNK_0xf332(); // UNK_0xf332
  if (Pop() == 0) return;
  INJURE_dash_PL(); // INJURE-PL
}

// 0xf540: db 0x53 0x54 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'STO_____________________________ '
  