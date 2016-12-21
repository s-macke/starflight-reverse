// ====== OVERLAY 'DEPART' ======
// store offset = 0xf390
// overlay size   = 0x01d0

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf3a6  codep:0x7394 parp:0xf3a6 size:0x0006 C-string:'UNK_0xf3a6'
// 1870:      UNK_0xf3ae  codep:0x224c parp:0xf3ae size:0x000a C-string:'UNK_0xf3ae'
// 1871:      UNK_0xf3ba  codep:0x224c parp:0xf3ba size:0x0036 C-string:'UNK_0xf3ba'
// 1872:        DISPOSAL  codep:0x4b3b parp:0xf3fd size:0x0024 C-string:'DISPOSAL'
// 1873:      UNK_0xf423  codep:0x224c parp:0xf423 size:0x0014 C-string:'UNK_0xf423'
// 1874:      UNK_0xf439  codep:0x224c parp:0xf439 size:0x000c C-string:'UNK_0xf439'
// 1875:      UNK_0xf447  codep:0x224c parp:0xf447 size:0x0044 C-string:'UNK_0xf447'
// 1876:      UNK_0xf48d  codep:0x224c parp:0xf48d size:0x0028 C-string:'UNK_0xf48d'
// 1877:      UNK_0xf4b7  codep:0x7420 parp:0xf4b7 size:0x0003 C-string:'UNK_0xf4b7'
// 1878:      UNK_0xf4bc  codep:0x224c parp:0xf4bc size:0x004a C-string:'UNK_0xf4bc'
// 1879:          DEPART  codep:0x224c parp:0xf511 size:0x0000 C-string:'DEPART'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf3a2: db 0x1d 0x00 '  '

// ================================================
// 0xf3a4: WORD 'UNK_0xf3a6' codep=0x7394 parp=0xf3a6
// ================================================
// 0xf3a6: db 0x1c 0x1e 0x01 0x20 0xcd 0x6b '     k'

// ================================================
// 0xf3ac: WORD 'UNK_0xf3ae' codep=0x224c parp=0xf3ae
// ================================================

void UNK_0xf3ae() // UNK_0xf3ae
{
  LoadData("UNK_0xf3a6"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _eq_(); // =
}


// ================================================
// 0xf3b8: WORD 'UNK_0xf3ba' codep=0x224c parp=0xf3ba
// ================================================

void UNK_0xf3ba() // UNK_0xf3ba
{
  _at_INST_dash_S(); // @INST-S
  Push(cc__3); // 3
  _st_(); // <
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001b);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  IFIRST(); // IFIRST
  Push(0x001c);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _at_INST_dash_S(); // @INST-S
  Push(cc__3); // 3
  Push(cc__5); // 5
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


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
  if (Pop() == 0) goto label1;
  _at_INST_dash_C(); // @INST-C
  switch(Pop()) // DISPOSAL
  {
  case 68:
    FALSE(); // FALSE
    break;
  case 26:
    TRUE(); // TRUE
    break;
  case 21:
    TRUE(); // TRUE
    break;
  case 31:
    TRUE(); // TRUE
    break;
  case 33:
    TRUE(); // TRUE
    break;
  case 28:
    TRUE(); // TRUE
    break;
  case 41:
    UNK_0xf3ae(); // UNK_0xf3ae
    break;
  case 9:
    UNK_0xf3ba(); // UNK_0xf3ba
    break;
  }
  return;

  label1:
  Push(cc_FALSE); // FALSE
}


// ================================================
// 0xf437: WORD 'UNK_0xf439' codep=0x224c parp=0xf439
// ================================================

void UNK_0xf439() // UNK_0xf439
{
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE
  IPREV(); // IPREV

  label1:
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

  label5:
  Push(0x000b);
  Push(0x000b);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN

  label3:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xf423(); // UNK_0xf423
  UNK_0xf439(); // UNK_0xf439
  goto label3;

  label2:
  UNK_0xf423(); // UNK_0xf423
  if (Pop() == 0) goto label4;
  IDELETE(); // IDELETE

  label4:
  _ask_NULL(); // ?NULL
  ICLOSE(); // ICLOSE
  UNK_0xf439(); // UNK_0xf439
  goto label5;

  label1:
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
  Push(pp_SUPER_dash_B); // SUPER-B
  _at__gt_C_plus_S(); // @>C+S
  IDELETE(); // IDELETE
  IFIRST(); // IFIRST

  label2:
  Push(0x0043);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE
  goto label2;

  label1:
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
  Func8("UNK_0xf4b7");
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
  Push(Read16(sp)); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) goto label1;
  Push(Read16(sp)); // DUP
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
  Func8("UNK_0xf4b7");
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(0x0064);
  MIN(); // MIN
  Push(0); // 0
  MAX(); // MAX
  Func8("UNK_0xf4b7");
  C_ex_(); // C!
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf506: WORD 'DEPART' codep=0x224c parp=0xf511
// ================================================
// entry

void DEPART() // DEPART
{
  Push(pp__ask_CRITIC); // ?CRITIC
  _099(); // 099
  Push(0x3a48);
  Push(pp__i_THROW_dash_); // 'THROW-
  _ex_(); // !
  Push(pp__ask_LANDED); // ?LANDED
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf447(); // UNK_0xf447
  UNK_0xf48d(); // UNK_0xf48d

  label1:
  Push(cc__dash_1); // -1
  Push(pp_PLHI); // PLHI
  _ex_(); // !
  Push(pp__ask_LANDED); // ?LANDED
  _099(); // 099
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  UNK_0xf4bc(); // UNK_0xf4bc

  label2:
  Push2Words("NULL");
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_ex_(); // 1.5!
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  Push(0); // 0
  _ex_INST_dash_S(); // !INST-S
  ICLOSE(); // ICLOSE
}

// 0xf551: db 0x44 0x50 0x41 0x52 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DPART-VOC______ '
  