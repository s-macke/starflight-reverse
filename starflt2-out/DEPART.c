// ====== OVERLAY 'DEPART' ======

#include"interface.h"

// store offset = 0xf390
// overlay size   = 0x01d0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:        DISPOSAL  codep:0x4b3b parp:0xf3fd size:0x0024 C-string:'DISPOSAL'
// 1870:      UNK_0xf423  codep:0x224c parp:0xf423 size:0x0014 C-string:'UNK_0xf423'
// 1871:      UNK_0xf439  codep:0x224c parp:0xf439 size:0x000c C-string:'UNK_0xf439'
// 1872:      UNK_0xf447  codep:0x224c parp:0xf447 size:0x0044 C-string:'UNK_0xf447'
// 1873:      UNK_0xf48d  codep:0x224c parp:0xf48d size:0x0028 C-string:'UNK_0xf48d'
// 1874:      UNK_0xf4b7  codep:0x7420 parp:0xf4b7 size:0x0003 C-string:'UNK_0xf4b7'
// 1875:      UNK_0xf4bc  codep:0x224c parp:0xf4bc size:0x004a C-string:'UNK_0xf4bc'
// 1876:          DEPART  codep:0x224c parp:0xf511 size:0x004f C-string:'DEPART'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf3a2: db 0x1d 0x00 0x94 0x73 0x1c 0x1e 0x01 0x20 0xcd 0x6b 0x4c 0x22 0xa4 0xf3 0x92 0x0c 0x3d 0x0f 0x5f 0x12 0x90 0x16 0x4c 0x22 0x34 0x75 0x7f 0x3b 0x46 0x12 0xb5 0x75 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x1b 0x00 0x20 0x0f 0x4c 0x7e 0x07 0x13 0xe2 0x7a 0x5d 0x17 0x1c 0x00 0x20 0x0f 0x4c 0x7e 0x07 0x13 0xf5 0x12 0x34 0x75 0x7f 0x3b 0x8f 0x3b 0x25 0x40 0xf5 0x12 0x3e 0x13 0x3d 0x0f 0x0a 0x7a 0x90 0x16 '   s     kL"    = _   L"4u;F  u z?z]     L~   z]     L~    4u; ;%@  > =  z  '

// ================================================
// 0xf3f0: WORD 'DISPOSAL' codep=0x4b3b parp=0xf3fd
// ================================================
// 0xf3fd: db 0x08 0x00 0xd1 0x51 0x44 0x00 0xc5 0x51 0x1a 0x00 0xc5 0x51 0x15 0x00 0xc5 0x51 0x1f 0x00 0xc5 0x51 0x21 0x00 0xc5 0x51 0x1c 0x00 0xae 0xf3 0x29 0x00 0xba 0xf3 0x09 0x00 0xc5 0x51 '   QD  Q   Q   Q   Q!  Q    )      Q'

// ================================================
// 0xf421: WORD 'UNK_0xf423' codep=0x224c parp=0xf423
// ================================================

void UNK_0xf423() // UNK_0xf423
{
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label479;

  _at_INST_minus_C(); // @INST-C
  DISPOSAL(); // DISPOSAL
  goto label480;

  label479:
  Push(cc_FALSE); // FALSE

  label480:
}


// ================================================
// 0xf437: WORD 'UNK_0xf439' codep=0x224c parp=0xf439
// ================================================

void UNK_0xf439() // UNK_0xf439
{
  if (Pop() == 0) goto label482;

  IDELETE(); // IDELETE
  IPREV(); // IPREV

  label482:
  INEXT(); // INEXT
}


// ================================================
// 0xf445: WORD 'UNK_0xf447' codep=0x224c parp=0xf447
// ================================================

void UNK_0xf447() // UNK_0xf447
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label483:
  Push(0x000b);
  Push(0x000b);
  IFIND(); // IFIND
  if (Pop() == 0) goto label477;

  IOPEN(); // IOPEN

  label484:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label478;

  UNK_0xf423(); // UNK_0xf423
  UNK_0xf439(); // UNK_0xf439
  goto label484;

  label478:
  UNK_0xf423(); // UNK_0xf423
  if (Pop() == 0) goto label481;

  IDELETE(); // IDELETE

  label481:
  _ask_NULL(); // ?NULL
  ICLOSE(); // ICLOSE
  UNK_0xf439(); // UNK_0xf439
  goto label483;

  label477:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf48b: WORD 'UNK_0xf48d' codep=0x224c parp=0xf48d
// ================================================

void UNK_0xf48d() // UNK_0xf48d
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_SUPER_minus_B); // SUPER-B
  _at__gt_C_plus_S(); // @>C+S
  IDELETE(); // IDELETE
  IFIRST(); // IFIRST

  label486:
  Push(0x0043);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) goto label485;

  IDELETE(); // IDELETE
  goto label486;

  label485:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4b5: WORD 'UNK_0xf4b7' codep=0x7420 parp=0xf4b7
// ================================================
// 0xf4b7: db 0x34 0x12 0x01 '4  '

// ================================================
// 0xf4ba: WORD 'UNK_0xf4bc' codep=0x224c parp=0xf4bc
// ================================================

void UNK_0xf4bc() // UNK_0xf4bc
{
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  Push(pp_EDL); // EDL
  Push(Read16(Pop())); // @
  UNK_0xf4b7(); // UNK_0xf4b7
  C_at_(); // C@
  _minus_(); // -
  DUP(); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) goto label475;

  DUP(); // DUP
  _0_gt_(); // 0>
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  ABS(); // ABS
  Push(cc__3); // 3
  _slash_(); // /
  Push(cc__5); // 5
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  UNK_0xf4b7(); // UNK_0xf4b7
  C_at_(); // C@
  Push(Pop() + Pop()); // +
  Push(0x0064);
  MIN(); // MIN
  Push(0); // 0
  MAX(); // MAX
  UNK_0xf4b7(); // UNK_0xf4b7
  C_ex_(); // C!
  goto label476;

  label475:
  Pop(); // DROP

  label476:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf506: WORD 'DEPART' codep=0x224c parp=0xf511
// ================================================

void DEPART() // DEPART
{
  Push(pp__ask_CRITIC); // ?CRITIC
  _099(); // 099
  Push(0x3a48);
  Push(pp__i_THROW_minus_); // 'THROW-
  _ex_(); // !
  Push(pp__ask_LANDED); // ?LANDED
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label473;

  UNK_0xf447(); // UNK_0xf447
  UNK_0xf48d(); // UNK_0xf48d

  label473:
  Push(cc__minus_1); // -1
  Push(pp_PLHI); // PLHI
  _ex_(); // !
  Push(pp__ask_LANDED); // ?LANDED
  _099(); // 099
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label474;

  UNK_0xf4bc(); // UNK_0xf4bc

  label474:
  NULL(); // NULL
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_ex_(); // 1.5!
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  Push(0); // 0
  _ex_INST_minus_S(); // !INST-S
  ICLOSE(); // ICLOSE
}

// 0xf551: db 0x44 0x50 0x41 0x52 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DPART-VOC______ '
  