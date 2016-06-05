// ====== OVERLAY 'SHIPCON' ======

#include"interface.h"

// store offset = 0xf360
// overlay size   = 0x0200

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x74bd  codep:0x7420 parp:0x74bd size:0x04e3 C-string:'UNK_0x74bd'
// 1870:      UNK_0x79a2  codep:0x224c parp:0x79a2 size:0x003d C-string:'UNK_0x79a2'
// 1871:      UNK_0x79e1  codep:0x224c parp:0x79e1 size:0x003e C-string:'UNK_0x79e1'
// 1872:      UNK_0x7a21  codep:0x224c parp:0x7a21 size:0x0ab8 C-string:'UNK_0x7a21'
// 1873:      UNK_0x84db  codep:0x224c parp:0x84db size:0x16ca C-string:'UNK_0x84db'
// 1874:      UNK_0x9ba7  codep:0x224c parp:0x9ba7 size:0x0034 C-string:'UNK_0x9ba7'
// 1875:      UNK_0x9bdd  codep:0x224c parp:0x9bdd size:0x0069 C-string:'UNK_0x9bdd'
// 1876:      UNK_0x9c48  codep:0x224c parp:0x9c48 size:0x0355 C-string:'UNK_0x9c48'
// 1877:      UNK_0x9f9f  codep:0x224c parp:0x9f9f size:0x0033 C-string:'UNK_0x9f9f'
// 1878:      UNK_0x9fd4  codep:0x224c parp:0x9fd4 size:0x001d C-string:'UNK_0x9fd4'
// 1879:      UNK_0x9ff3  codep:0x224c parp:0x9ff3 size:0x0345 C-string:'UNK_0x9ff3'
// 1880:      UNK_0xa33a  codep:0x224c parp:0xa33a size:0x0326 C-string:'UNK_0xa33a'
// 1881:      UNK_0xa662  codep:0x224c parp:0xa662 size:0x0239 C-string:'UNK_0xa662'
// 1882:      UNK_0xa89d  codep:0x224c parp:0xa89d size:0x00cb C-string:'UNK_0xa89d'
// 1883:      UNK_0xa96a  codep:0x7394 parp:0xa96a size:0x4a0a C-string:'UNK_0xa96a'
// 1884:      UNK_0xf376  codep:0x7420 parp:0xf376 size:0x0003 C-string:'UNK_0xf376'
// 1885:      UNK_0xf37b  codep:0x224c parp:0xf37b size:0x0010 C-string:'UNK_0xf37b'
// 1886:          .NOFUN  codep:0x224c parp:0xf396 size:0x0030 C-string:'_dot_NOFUN'
// 1887:      UNK_0xf3c8  codep:0x224c parp:0xf3c8 size:0x002c C-string:'UNK_0xf3c8'
// 1888:      UNK_0xf3f6  codep:0x224c parp:0xf3f6 size:0x003e C-string:'UNK_0xf3f6'
// 1889:      UNK_0xf436  codep:0x224c parp:0xf436 size:0x0034 C-string:'UNK_0xf436'
// 1890:      UNK_0xf46c  codep:0x224c parp:0xf46c size:0x000c C-string:'UNK_0xf46c'
// 1891:      UNK_0xf47a  codep:0x224c parp:0xf47a size:0x0024 C-string:'UNK_0xf47a'
// 1892:      UNK_0xf4a0  codep:0x224c parp:0xf4a0 size:0x0010 C-string:'UNK_0xf4a0'
// 1893:      UNK_0xf4b2  codep:0x224c parp:0xf4b2 size:0x000c C-string:'UNK_0xf4b2'
// 1894:      UNK_0xf4c0  codep:0x224c parp:0xf4c0 size:0x000c C-string:'UNK_0xf4c0'
// 1895:          TOW-US  codep:0x224c parp:0xf4d7 size:0x0089 C-string:'TOW_minus_US'

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
  UNK_0x7a21(); // UNK_0x7a21
  UNK_0xf376(); // UNK_0xf376
  Push(pp_LSCAN); // LSCAN
  UNK_0xa89d(); // UNK_0xa89d
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  UNK_0x79e1(); // UNK_0x79e1
}


// ================================================
// 0xf38b: WORD '.NOFUN' codep=0x224c parp=0xf396
// ================================================

void _dot_NOFUN() // .NOFUN
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(pp__ask_ON_minus_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0x9bdd(); // UNK_0x9bdd
  goto label3;

  label2:
  UNK_0x9ba7(); // UNK_0x9ba7

  label3:
  UNK_0x9fd4(); // UNK_0x9fd4
  Push(0x5242); Pust(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  UNK_0x9ff3(); // UNK_0x9ff3
  return;

  label1:
  BEEP(); // BEEP
}


// ================================================
// 0xf3c6: WORD 'UNK_0xf3c8' codep=0x224c parp=0xf3c8
// ================================================

void UNK_0xf3c8() // UNK_0xf3c8
{
  DUP(); // DUP
  if (Pop() == 0) return;
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0x5265); Pust(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(0x528c); Pust(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(0x07d0);
  MS(); // MS
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf3f4: WORD 'UNK_0xf3f6' codep=0x224c parp=0xf3f6
// ================================================

void UNK_0xf3f6() // UNK_0xf3f6
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  _star_SHIP(); // *SHIP

  label1:
  UNK_0x7a21(); // UNK_0x7a21
  UNK_0x74bd(); // UNK_0x74bd
  _2_at_(); // 2@
  UNK_0x79e1(); // UNK_0x79e1
  Push(0x0118);
  _minus_(); // -
  ABS(); // ABS
  _gt_R(); // >R
  Push(0x0248);
  _minus_(); // -
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
  Push(pp__minus_END); // -END
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _star__slash_(); // */
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  Push(cc__6); // 6
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
  UNK_0xa96a(); // UNK_0xa96a
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  U_star_(); // U*
  UNK_0x79a2(); // UNK_0x79a2
  Push(0x3a98); Pust(0x0000);
  DMAX(); // DMAX
  Push(pp_TOWFINE); // TOWFINE
  D_ex_(); // D!
}


// ================================================
// 0xf46a: WORD 'UNK_0xf46c' codep=0x224c parp=0xf46c
// ================================================

void UNK_0xf46c() // UNK_0xf46c
{
  Push(0x52a8); Pust(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  UNK_0x9ff3(); // UNK_0x9ff3
}


// ================================================
// 0xf478: WORD 'UNK_0xf47a' codep=0x224c parp=0xf47a
// ================================================

void UNK_0xf47a() // UNK_0xf47a
{
  DUP(); // DUP
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0x52d5); Pust(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(0x07d0);
  MS(); // MS
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf49e: WORD 'UNK_0xf4a0' codep=0x224c parp=0xf4a0
// ================================================

void UNK_0xf4a0() // UNK_0xf4a0
{
  UNK_0x9fd4(); // UNK_0x9fd4
  UNK_0x9c48(); // UNK_0x9c48
  Push(0x52f5); Pust(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  TYPE(); // TYPE
}


// ================================================
// 0xf4b0: WORD 'UNK_0xf4b2' codep=0x224c parp=0xf4b2
// ================================================

void UNK_0xf4b2() // UNK_0xf4b2
{
  Push(0x5322); Pust(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  UNK_0x9ff3(); // UNK_0x9ff3
}


// ================================================
// 0xf4be: WORD 'UNK_0xf4c0' codep=0x224c parp=0xf4c0
// ================================================

void UNK_0xf4c0() // UNK_0xf4c0
{
  Push(0x534b); Pust(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  UNK_0x9ff3(); // UNK_0x9ff3
}


// ================================================
// 0xf4cc: WORD 'TOW-US' codep=0x224c parp=0xf4d7
// ================================================

void TOW_minus_US() // TOW-US
{
  UNK_0xf4a0(); // UNK_0xf4a0
  UNK_0x9f9f(); // UNK_0x9f9f
  Push(0x5373); Pust(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  TYPE(); // TYPE
  UNK_0xa662(); // UNK_0xa662
  UNK_0xf47a(); // UNK_0xf47a
  UNK_0xf3c8(); // UNK_0xf3c8
  if (Pop() == 0) goto label1;
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  Push(pp__n_VESS); // #VESS
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(cc__ask_CALLED); // ?CALLED
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xf4b2(); // UNK_0xf4b2
  goto label4;

  label2:
  UNK_0xf4c0(); // UNK_0xf4c0
  UNK_0xf436(); // UNK_0xf436
  Push(0x09c4);
  MS(); // MS
  Push(pp__i_YANK); // 'YANK
  Push(Read16(Pop())); // @
  UNK_0x84db(); // UNK_0x84db
  UNK_0x9fd4(); // UNK_0x9fd4
  UNK_0xf46c(); // UNK_0xf46c
  Push(pp__ro_STOP_minus_C); // (STOP-C
  ON(); // ON
  Push(pp__ask_RECALL); // ?RECALL
  ON(); // ON
  Push(pp__ask_NEB); // ?NEB
  _099(); // 099

  label4:
  goto label3;

  label1:
  UNK_0x9c48(); // UNK_0x9c48
  Push(0x538e); Pust(0x0002);
  UNK_0xf37b(); // UNK_0xf37b
  TYPE(); // TYPE

  label3:
  BLACK(); // BLACK
  Push(1); // 1
  UNK_0xa33a(); // UNK_0xa33a
}

// 0xf547: db 0x53 0x43 0x4f 0x4e 0x2d 0x56 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SCON-V___________________ '
  