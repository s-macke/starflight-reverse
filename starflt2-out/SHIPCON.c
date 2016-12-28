// ====== OVERLAY 'SHIPCON' ======
// store offset = 0xf360
// overlay size   = 0x0200

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf376  codep:0x7420 parp:0xf376 size:0x0003 C-string:'UNK_0xf376'
//      UNK_0xf37b  codep:0x224c parp:0xf37b size:0x0010 C-string:'UNK_0xf37b'
//          .NOFUN  codep:0x224c parp:0xf396 size:0x0030 C-string:'_dot_NOFUN'
//      UNK_0xf3c8  codep:0x224c parp:0xf3c8 size:0x002c C-string:'UNK_0xf3c8'
//      UNK_0xf3f6  codep:0x224c parp:0xf3f6 size:0x003e C-string:'UNK_0xf3f6'
//      UNK_0xf436  codep:0x224c parp:0xf436 size:0x0034 C-string:'UNK_0xf436'
//      UNK_0xf46c  codep:0x224c parp:0xf46c size:0x000c C-string:'UNK_0xf46c'
//      UNK_0xf47a  codep:0x224c parp:0xf47a size:0x0024 C-string:'UNK_0xf47a'
//      UNK_0xf4a0  codep:0x224c parp:0xf4a0 size:0x0010 C-string:'UNK_0xf4a0'
//      UNK_0xf4b2  codep:0x224c parp:0xf4b2 size:0x000c C-string:'UNK_0xf4b2'
//      UNK_0xf4c0  codep:0x224c parp:0xf4c0 size:0x000c C-string:'UNK_0xf4c0'
//          TOW-US  codep:0x224c parp:0xf4d7 size:0x0000 C-string:'TOW_dash_US'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf372: db 0x1f 0x00 '  '

// ================================================
// 0xf374: WORD 'UNK_0xf376' codep=0x7420 parp=0xf376
// ================================================
// 0xf376: db 0x30 0x0b 0x00 '0  '

// ================================================
// 0xf379: WORD 'UNK_0xf37b' codep=0x224c parp=0xf37b
// ================================================

void UNK_0xf37b() // UNK_0xf37b
{
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(UNK_0xf376)
  Push(pp_LSCAN); // LSCAN size: 400
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN size: 400
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf38b: WORD '.NOFUN' codep=0x224c parp=0xf396
// ================================================
// entry

void _dot_NOFUN() // .NOFUN
{
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  _gt_TVCT(); // >TVCT
  goto label3;

  label2:
  _gt_SSCT(); // >SSCT

  label3:
  CTINIT(); // CTINIT
  Push(0x5242); Push(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  _dot_TTY(); // .TTY
  return;

  label1:
  BEEP(); // BEEP
}


// ================================================
// 0xf3c6: WORD 'UNK_0xf3c8' codep=0x224c parp=0xf3c8
// ================================================

void UNK_0xf3c8() // UNK_0xf3c8
{
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(pp_PAST); // PAST size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0x5265); Push(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  _dot_TTY(); // .TTY
  Push(0x528c); Push(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf3f4: WORD 'UNK_0xf3f6' codep=0x224c parp=0xf3f6
// ================================================

void UNK_0xf3f6() // UNK_0xf3f6
{
  Push(pp__ro_SYSTEM); // (SYSTEM size: 4
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(pp__ro_ENCOUN); // (ENCOUN size: 4
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push2Words("*SHIP");

  label1:
  _gt_C_plus_S(); // >C+S
  Push(0x65ee); // IFIELD(INST-X)
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
  Push(0x0118);
  _dash_(); // -
  ABS(); // ABS
  _gt_R(); // >R
  Push(0x0248);
  _dash_(); // -
  ABS(); // ABS
  R_gt_(); // R>
  MAX(); // MAX
}


// ================================================
// 0xf434: WORD 'UNK_0xf436' codep=0x224c parp=0xf436
// ================================================

void UNK_0xf436() // UNK_0xf436
{
  UNK_0xf3f6(); // UNK_0xf3f6
  Push(pp__dash_END); // -END size: 2
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _star__slash_(); // */
  Push(0x001a);
  Push(pp_FILE_n_); // FILE# size: 2
  _ex__2(); // !_2
  Push(cc__6); // 6
  Push(pp_RECORD_n_); // RECORD# size: 2
  _ex__2(); // !_2
  LoadData("ELEM-VA"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  U_star_(); // U*
  SET_dash_CUR(); // SET-CUR
  Push(0x3a98); Push(0x0000);
  DMAX(); // DMAX
  Push(pp_TOWFINE); // TOWFINE size: 4
  D_ex_(); // D!
}


// ================================================
// 0xf46a: WORD 'UNK_0xf46c' codep=0x224c parp=0xf46c
// ================================================

void UNK_0xf46c() // UNK_0xf46c
{
  Push(0x52a8); Push(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf478: WORD 'UNK_0xf47a' codep=0x224c parp=0xf47a
// ================================================

void UNK_0xf47a() // UNK_0xf47a
{
  Push(Read16(regsp)); // DUP
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0x52d5); Push(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf49e: WORD 'UNK_0xf4a0' codep=0x224c parp=0xf4a0
// ================================================

void UNK_0xf4a0() // UNK_0xf4a0
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(0x52f5); Push(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf4b0: WORD 'UNK_0xf4b2' codep=0x224c parp=0xf4b2
// ================================================

void UNK_0xf4b2() // UNK_0xf4b2
{
  Push(0x5322); Push(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf4be: WORD 'UNK_0xf4c0' codep=0x224c parp=0xf4c0
// ================================================

void UNK_0xf4c0() // UNK_0xf4c0
{
  Push(0x534b); Push(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf4cc: WORD 'TOW-US' codep=0x224c parp=0xf4d7
// ================================================
// entry

void TOW_dash_US() // TOW-US
{
  UNK_0xf4a0(); // UNK_0xf4a0
  CTCR(); // CTCR
  Push(0x5373); Push(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Y_slash_N(); // Y/N
  UNK_0xf47a(); // UNK_0xf47a
  UNK_0xf3c8(); // UNK_0xf3c8
  if (Pop() == 0) goto label1;
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  Push(pp__n_VESS); // #VESS size: 2
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(cc__ask_CALLED); // ?CALLED
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xf4b2(); // UNK_0xf4b2
  goto label3;

  label2:
  UNK_0xf4c0(); // UNK_0xf4c0
  UNK_0xf436(); // UNK_0xf436
  Push(0x09c4);
  MS(); // MS
  Push(pp__i_YANK); // 'YANK size: 2
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  UNK_0xf46c(); // UNK_0xf46c
  Push(pp__ro_STOP_dash_C); // (STOP-C size: 2
  ON_2(); // ON_2
  Push(pp__ask_RECALL); // ?RECALL size: 2
  ON_2(); // ON_2
  Push(pp__ask_NEB); // ?NEB size: 2
  _099(); // 099

  label3:
  goto label4;

  label1:
  CTERASE(); // CTERASE
  Push(0x538e); Push(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'

  label4:
  SetColor("BLACK");
  Push(1); // 1
  _dot_ON(); // .ON
}

// 0xf547: db 0x53 0x43 0x4f 0x4e 0x2d 0x56 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SCON-V___________________ '
  