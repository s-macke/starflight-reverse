// ====== OVERLAY 'FX' ======
// store offset = 0xf060
// overlay size   = 0x0500

#include"cpu.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xb16b C-string:'UNK_0x3f09'
// 1870:      UNK_0xf076  codep:0x7394 parp:0xf076 size:0x0006 C-string:'UNK_0xf076'
// 1871:      UNK_0xf07e  codep:0x224c parp:0xf07e size:0x000c C-string:'UNK_0xf07e'
// 1872:      UNK_0xf08c  codep:0x1d29 parp:0xf08c size:0x0002 C-string:'UNK_0xf08c'
// 1873:      UNK_0xf090  codep:0x224c parp:0xf090 size:0x000a C-string:'UNK_0xf090'
// 1874:          N>STAT  codep:0x4b3b parp:0xf0a5 size:0x0014 C-string:'N_gt_STAT'
// 1875:      UNK_0xf0bb  codep:0x224c parp:0xf0bb size:0x0008 C-string:'UNK_0xf0bb'
// 1876:      UNK_0xf0c5  codep:0x224c parp:0xf0c5 size:0x0012 C-string:'UNK_0xf0c5'
// 1877:      UNK_0xf0d9  codep:0x224c parp:0xf0d9 size:0x0008 C-string:'UNK_0xf0d9'
// 1878:      UNK_0xf0e3  codep:0x224c parp:0xf0e3 size:0x0010 C-string:'UNK_0xf0e3'
// 1879:      UNK_0xf0f5  codep:0x224c parp:0xf0f5 size:0x0010 C-string:'UNK_0xf0f5'
// 1880:      UNK_0xf107  codep:0x224c parp:0xf107 size:0x0034 C-string:'UNK_0xf107'
// 1881:      UNK_0xf13d  codep:0x224c parp:0xf13d size:0x005e C-string:'UNK_0xf13d'
// 1882:          #>.COL  codep:0x4b3b parp:0xf1a6 size:0x0014 C-string:'_n__gt__dot_COL'
// 1883:      UNK_0xf1bc  codep:0x224c parp:0xf1bc size:0x0030 C-string:'UNK_0xf1bc'
// 1884:      UNK_0xf1ee  codep:0x224c parp:0xf1ee size:0x001a C-string:'UNK_0xf1ee'
// 1885:      UNK_0xf20a  codep:0x224c parp:0xf20a size:0x0026 C-string:'UNK_0xf20a'
// 1886:           PSYCH  codep:0x224c parp:0xf23a size:0x004e C-string:'PSYCH'
// 1887:      UNK_0xf28a  codep:0x224c parp:0xf28a size:0x0038 C-string:'UNK_0xf28a'
// 1888:      UNK_0xf2c4  codep:0x224c parp:0xf2c4 size:0x0012 C-string:'UNK_0xf2c4'
// 1889:      UNK_0xf2d8  codep:0x224c parp:0xf2d8 size:0x000c C-string:'UNK_0xf2d8'
// 1890:      UNK_0xf2e6  codep:0x224c parp:0xf2e6 size:0x000a C-string:'UNK_0xf2e6'
// 1891:      UNK_0xf2f2  codep:0x224c parp:0xf2f2 size:0x000a C-string:'UNK_0xf2f2'
// 1892:      UNK_0xf2fe  codep:0x224c parp:0xf2fe size:0x000a C-string:'UNK_0xf2fe'
// 1893:      UNK_0xf30a  codep:0x224c parp:0xf30a size:0x000a C-string:'UNK_0xf30a'
// 1894:      UNK_0xf316  codep:0x224c parp:0xf316 size:0x000a C-string:'UNK_0xf316'
// 1895:      UNK_0xf322  codep:0x224c parp:0xf322 size:0x0006 C-string:'UNK_0xf322'
// 1896:      UNK_0xf32a  codep:0x224c parp:0xf32a size:0x008c C-string:'UNK_0xf32a'
// 1897:      UNK_0xf3b8  codep:0x224c parp:0xf3b8 size:0x0014 C-string:'UNK_0xf3b8'
// 1898:      UNK_0xf3ce  codep:0x224c parp:0xf3ce size:0x000e C-string:'UNK_0xf3ce'
// 1899:      UNK_0xf3de  codep:0x224c parp:0xf3de size:0x00ac C-string:'UNK_0xf3de'
// 1900:      UNK_0xf48c  codep:0x224c parp:0xf48c size:0x0030 C-string:'UNK_0xf48c'
// 1901:      UNK_0xf4be  codep:0x224c parp:0xf4be size:0x002c C-string:'UNK_0xf4be'
// 1902:      UNK_0xf4ec  codep:0x224c parp:0xf4ec size:0x004e C-string:'UNK_0xf4ec'
// 1903:           .TMAP  codep:0x224c parp:0xf544 size:0x001c C-string:'_dot_TMAP'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf08c[2] = {0x3a, 0x20}; // UNK_0xf08c



// 0xf072: db 0x50 0x00 'P '

// ================================================
// 0xf074: WORD 'UNK_0xf076' codep=0x7394 parp=0xf076
// ================================================
// 0xf076: db 0x15 0x2a 0x01 0x32 0xd1 0x6a ' * 2 j'

// ================================================
// 0xf07c: WORD 'UNK_0xf07e' codep=0x224c parp=0xf07e
// ================================================

void UNK_0xf07e() // UNK_0xf07e
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf076(); // UNK_0xf076
  C_at_(); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf08a: WORD 'UNK_0xf08c' codep=0x1d29 parp=0xf08c
// ================================================
// 0xf08c: db 0x3a 0x20 ': '

// ================================================
// 0xf08e: WORD 'UNK_0xf090' codep=0x224c parp=0xf090
// ================================================

void UNK_0xf090() // UNK_0xf090
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _eq_(); // =
}


// ================================================
// 0xf09a: WORD 'N>STAT' codep=0x4b3b parp=0xf0a5
// ================================================
// 0xf0a5: db 0x04 0x00 0x30 0x0f 0x04 0x00 0x3f 0x0f 0x08 0x00 0x81 0x3b 0x10 0x00 0x89 0x3b 0x01 0x00 0x89 0x3b '  0   ?    ;   ;   ;'

// ================================================
// 0xf0b9: WORD 'UNK_0xf0bb' codep=0x224c parp=0xf0bb
// ================================================

void UNK_0xf0bb() // UNK_0xf0bb
{
  Push(pp_A_dash_POSTU); // A-POSTU
  C_at_(); // C@
  N_gt_STAT(); // N>STAT
}


// ================================================
// 0xf0c3: WORD 'UNK_0xf0c5' codep=0x224c parp=0xf0c5
// ================================================

void UNK_0xf0c5() // UNK_0xf0c5
{
  Push(pp_PATIENC); // PATIENC
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _gt_(); // >
  UNK_0xf07e(); // UNK_0xf07e
  Push(cc__4); // 4
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf0d7: WORD 'UNK_0xf0d9' codep=0x224c parp=0xf0d9
// ================================================

void UNK_0xf0d9() // UNK_0xf0d9
{
  UNK_0xf07e(); // UNK_0xf07e
  Push(cc__7); // 7
  _gt_(); // >
}


// ================================================
// 0xf0e1: WORD 'UNK_0xf0e3' codep=0x224c parp=0xf0e3
// ================================================

void UNK_0xf0e3() // UNK_0xf0e3
{
  Push(pp_PATIENC); // PATIENC
  Push(Read16(Pop())); // @
  Push(2); // 2
  _gt_(); // >
  UNK_0xf0d9(); // UNK_0xf0d9
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf0f3: WORD 'UNK_0xf0f5' codep=0x224c parp=0xf0f5
// ================================================

void UNK_0xf0f5() // UNK_0xf0f5
{
  Push(pp_PATIENC); // PATIENC
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _st_(); // <
  UNK_0xf0d9(); // UNK_0xf0d9
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf105: WORD 'UNK_0xf107' codep=0x224c parp=0xf107
// ================================================

void UNK_0xf107() // UNK_0xf107
{
  UNK_0xf0c5(); // UNK_0xf0c5
  if (Pop() == 0) goto label1;
  Push(1); // 1
  return;

  label1:
  UNK_0xf0e3(); // UNK_0xf0e3
  if (Pop() == 0) goto label2;
  Push(2); // 2
  return;

  label2:
  UNK_0xf0d9(); // UNK_0xf0d9
  if (Pop() == 0) goto label3;
  Push(cc__4); // 4
  return;

  label3:
  UNK_0xf0f5(); // UNK_0xf0f5
  if (Pop() == 0) goto label4;
  Push(cc__3); // 3
  return;

  label4:
  Push(0); // 0
}


// ================================================
// 0xf13b: WORD 'UNK_0xf13d' codep=0x224c parp=0xf13d
// ================================================

void UNK_0xf13d() // UNK_0xf13d
{
  UNK_0xf090(); // UNK_0xf090
  if (Pop() == 0) goto label1;
  UNK_0xf107(); // UNK_0xf107
  return;

  label1:
  UNK_0xf0bb(); // UNK_0xf0bb
}

// 0xf14d: db 0x4c 0x22 0xdc 0x1b 0x07 0x47 0x4c 0x4f 0x57 0x49 0x4e 0x47 0x87 0x3b 0x46 0x5a 0x23 0x6d 0x90 0x16 0x4c 0x22 0x4d 0xf1 0xdc 0x1b 0x05 0x47 0x52 0x45 0x45 0x4e 0x90 0x16 0x4c 0x22 0x4d 0xf1 0xdc 0x1b 0x06 0x59 0x45 0x4c 0x4c 0x4f 0x57 0x90 0x16 0x4c 0x22 0x4d 0xf1 0xdc 0x1b 0x03 0x52 0x45 0x44 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x0a 0x42 0x52 0x49 0x47 0x48 0x54 0x20 0x52 0x45 0x44 0x90 0x16 'L"   GLOWING ;FZ#m  L"M    GREEN  L"M    YELLOW  L"M    RED  L"   BRIGHT RED  '

// ================================================
// 0xf19b: WORD '#>.COL' codep=0x4b3b parp=0xf1a6
// ================================================
// 0xf1a6: db 0x04 0x00 0x48 0x3a 0x01 0x00 0x63 0xf1 0x02 0x00 0x71 0xf1 0x03 0x00 0x80 0xf1 0x04 0x00 0x8c 0xf1 '  H:  c   q         '

// ================================================
// 0xf1ba: WORD 'UNK_0xf1bc' codep=0x224c parp=0xf1bc
// ================================================

void UNK_0xf1bc() // UNK_0xf1bc
{
  DUP(); // DUP
  DUP(); // DUP
  Push(0x00c8);
  _st_(); // <
  SWAP(); // SWAP
  Push(0xffd8);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  _gt_R(); // >R
  OVER(); // OVER
  DUP(); // DUP
  Push(0x00c8);
  _st_(); // <
  SWAP(); // SWAP
  Push(0xffd8);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf1ec: WORD 'UNK_0xf1ee' codep=0x224c parp=0xf1ee
// ================================================

void UNK_0xf1ee() // UNK_0xf1ee
{
  Push(0x000e);
  UNK_0xf090(); // UNK_0xf090
  if (Pop() == 0) goto label1;
  Push(0xb78d);
  goto label2;

  label1:
  Push(0xb76b);

  label2:
  MODULE(); // MODULE
}


// ================================================
// 0xf208: WORD 'UNK_0xf20a' codep=0x224c parp=0xf20a
// ================================================

void UNK_0xf20a() // UNK_0xf20a
{
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0013);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x0018);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x0016);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf230: WORD 'PSYCH' codep=0x224c parp=0xf23a
// ================================================
// entry

void PSYCH() // PSYCH
{
  UNK_0xf1ee(); // UNK_0xf1ee
  UNK_0xf20a(); // UNK_0xf20a
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  UNK_0xf13d(); // UNK_0xf13d
  Push(pp_UNK_0xf08c); // UNK_0xf08c
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xf13d(); // UNK_0xf13d
  DUP(); // DUP
  Push(pp_UNK_0xf08c); // UNK_0xf08c
  _ex_(); // !

  UNK_0x3f09("THE PSYCHIC PROBE IS ");
  _dot_TTY(); // .TTY
  _n__gt__dot_COL(); // #>.COL
  PRINT(".", 1); // (.")

  label2:
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf288: WORD 'UNK_0xf28a' codep=0x224c parp=0xf28a
// ================================================

void UNK_0xf28a() // UNK_0xf28a
{
  Push(0x00c7);
  Push(0x009f);
  Push(0x0021);
  Push(0x0014);
  SETCLIP(); // SETCLIP
}

// 0xf29e: db 0x4c 0x22 0x5d 0x17 0x13 0x00 0x20 0x0f 0x20 0x0f 0x5d 0x17 0x9f 0x00 0xa7 0x4f 0x93 0x9b 0x90 0x16 0x94 0x73 0x15 0x21 0x01 0x32 0xd1 0x6a 0x94 0x73 0x20 0x16 0x01 0x17 0x49 0x6c 'L"]       ]    O     s ! 2 j s    Il'

// ================================================
// 0xf2c2: WORD 'UNK_0xf2c4' codep=0x224c parp=0xf2c4
// ================================================

void UNK_0xf2c4() // UNK_0xf2c4
{
  _at_INST_dash_S(); // @INST-S
  Push(0x002e);
  _dash_(); // -
  Push(0x0028);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
}


// ================================================
// 0xf2d6: WORD 'UNK_0xf2d8' codep=0x224c parp=0xf2d8
// ================================================

void UNK_0xf2d8() // UNK_0xf2d8
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0012);
  Push(Pop() + Pop()); // +
  C_at_(); // C@
}


// ================================================
// 0xf2e4: WORD 'UNK_0xf2e6' codep=0x224c parp=0xf2e6
// ================================================

void UNK_0xf2e6() // UNK_0xf2e6
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0014);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf2f0: WORD 'UNK_0xf2f2' codep=0x224c parp=0xf2f2
// ================================================

void UNK_0xf2f2() // UNK_0xf2f2
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0044);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf2fc: WORD 'UNK_0xf2fe' codep=0x224c parp=0xf2fe
// ================================================

void UNK_0xf2fe() // UNK_0xf2fe
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0050);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf308: WORD 'UNK_0xf30a' codep=0x224c parp=0xf30a
// ================================================

void UNK_0xf30a() // UNK_0xf30a
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0068);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf314: WORD 'UNK_0xf316' codep=0x224c parp=0xf316
// ================================================

void UNK_0xf316() // UNK_0xf316
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x006e);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf320: WORD 'UNK_0xf322' codep=0x224c parp=0xf322
// ================================================

void UNK_0xf322() // UNK_0xf322
{
  Push(pp_LSCAN); // LSCAN
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf328: WORD 'UNK_0xf32a' codep=0x224c parp=0xf32a
// ================================================

void UNK_0xf32a() // UNK_0xf32a
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_st_(); // D<
  if (Pop() == 0) goto label1;
  _2SWAP(); // 2SWAP

  label1:
  Push(0); // 0
  UNK_0xf322(); // UNK_0xf322
  _ex_(); // !
  Push(2); // 2
  UNK_0xf322(); // UNK_0xf322
  _ex_(); // !
  Push(cc__4); // 4
  UNK_0xf322(); // UNK_0xf322
  _ex_(); // !
  Push(cc__6); // 6
  UNK_0xf322(); // UNK_0xf322
  _ex_(); // !
  Push(2); // 2
  Push(pp__n_IN); // #IN
  _ex_(); // !
  Push(0); // 0
  UNK_0xf322(); // UNK_0xf322
  Push(pp_VIN); // VIN
  _ex_(); // !
  Push(0x0014);
  UNK_0xf322(); // UNK_0xf322
  Push(pp_VOUT); // VOUT
  _ex_(); // !
  Push(0x0028);
  UNK_0xf322(); // UNK_0xf322
  Push(pp_OIN); // OIN
  _ex_(); // !
  Push(0x003c);
  UNK_0xf322(); // UNK_0xf322
  Push(pp_OOUT); // OOUT
  _ex_(); // !
  Push(pp__ask_OPEN); // ?OPEN
  ON(); // ON
  CLIPPER(); // CLIPPER
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(pp__ask_OPEN); // ?OPEN
  _099(); // 099
  if (Pop() == 0) goto label2;
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(h); // I
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  R_gt_(); // R>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(1); // 1
  return;

  label2:
  Push(0); // 0
}


// ================================================
// 0xf3b6: WORD 'UNK_0xf3b8' codep=0x224c parp=0xf3b8
// ================================================

void UNK_0xf3b8() // UNK_0xf3b8
{
  WLD_gt_SCR(); // WLD>SCR
  _2SWAP(); // 2SWAP
  WLD_gt_SCR(); // WLD>SCR
  _1PIX(); // 1PIX
  UNK_0xf32a(); // UNK_0xf32a
  if (Pop() == 0) goto label1;
  LLINE(); // LLINE

  label1:
  _2PIX(); // 2PIX
}


// ================================================
// 0xf3cc: WORD 'UNK_0xf3ce' codep=0x224c parp=0xf3ce
// ================================================

void UNK_0xf3ce() // UNK_0xf3ce
{
  Push(0x0015);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
  Push(0x0010);
}


// ================================================
// 0xf3dc: WORD 'UNK_0xf3de' codep=0x224c parp=0xf3de
// ================================================

void UNK_0xf3de() // UNK_0xf3de
{
  _gt_R(); // >R
  Push(h); // I
  DUP(); // DUP
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(Pop()-1); // 1-
  Push(cc__8); // 8
  goto label5;

  label1:
  Push(0); // 0

  label5:
  Push(Pop() * Pop()); // *
  UNK_0xf2e6(); // UNK_0xf2e6
  Push(Pop() + Pop()); // +
  Push(h); // I
  _0_gt_(); // 0>
  if (Pop() == 0) goto label2;
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +

  label2:
  _2_at_(); // 2@
  SWAP(); // SWAP
  WLD_gt_SCR(); // WLD>SCR
  Push(h); // I
  _4_star_(); // 4*
  UNK_0xf2fe(); // UNK_0xf2fe
  Push(Pop() + Pop()); // +
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(h); // I
  _4_star_(); // 4*
  UNK_0xf2fe(); // UNK_0xf2fe
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  UNK_0xf1bc(); // UNK_0xf1bc
  if (Pop() == 0) goto label3;
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  Push(h); // I
  Push(Pop()*2); // 2*
  UNK_0xf2f2(); // UNK_0xf2f2
  Push(Pop() + Pop()); // +
  Push(2); // 2
  TYPE(); // TYPE
  Push(h); // I
  UNK_0xf30a(); // UNK_0xf30a
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  UNK_0xf3ce(); // UNK_0xf3ce
  _dash_TRAILING(); // -TRAILING
  _2OVER(); // 2OVER
  Push(cc__6); // 6
  _dash_(); // -
  POS_dot_(); // POS.
  TYPE(); // TYPE
  R_at_(); // R@
  UNK_0xf316(); // UNK_0xf316
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(0x001c);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  _2SWAP(); // 2SWAP
  Push(0x000c);
  _dash_(); // -
  POS_dot_(); // POS.
  TYPE(); // TYPE
  goto label4;

  label3:
  Pop(); Pop();// 2DROP

  label4:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf48a: WORD 'UNK_0xf48c' codep=0x224c parp=0xf48c
// ================================================

void UNK_0xf48c() // UNK_0xf48c
{
  _gt_R(); // >R
  _gt_R(); // >R
  _at_CRS(); // @CRS
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  DUP(); // DUP
  Push(cc__6); // 6
  _dash_(); // -
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(2); // 2
  _dash_(); // -
  SWAP(); // SWAP
  OVER(); // OVER
  R_gt_(); // R>
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Pop()+2); // 2+
  R_gt_(); // R>
  POLY_dash_WI(); // POLY-WI
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf4bc: WORD 'UNK_0xf4be' codep=0x224c parp=0xf4be
// ================================================

void UNK_0xf4be() // UNK_0xf4be
{
  UNK_0xf2c4(); // UNK_0xf2c4
  Push(0x0012);
  _dash_TRAILING(); // -TRAILING
  DUP(); // DUP
  Push(Pop()>>1); // 2/
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(0x005c);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x00c4);
  POS_dot_(); // POS.
  DUP(); // DUP
  BLACK(); // BLACK
  UNK_0xf48c(); // UNK_0xf48c
  YELLOW(); // YELLOW
  _ex_COLOR(); // !COLOR
  TYPE(); // TYPE
}


// ================================================
// 0xf4ea: WORD 'UNK_0xf4ec' codep=0x224c parp=0xf4ec
// ================================================

void UNK_0xf4ec() // UNK_0xf4ec
{
  UNK_0xf28a(); // UNK_0xf28a
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xf2d8(); // UNK_0xf2d8
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xf2e6(); // UNK_0xf2e6
  Push(i); // I
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
  SWAP(); // SWAP
  UNK_0xf2e6(); // UNK_0xf2e6
  Push(i); // I
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
  SWAP(); // SWAP
  UNK_0xf3b8(); // UNK_0xf3b8
  Push(i); // I
  Push(Pop()+1); // 1+
  UNK_0xf3de(); // UNK_0xf3de
  Push(i); // I
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xf3de(); // UNK_0xf3de
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffc4

  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xf53a: WORD '.TMAP' codep=0x224c parp=0xf544
// ================================================
// entry

void _dot_TMAP() // .TMAP
{
  Push(pp_TMAP); // TMAP
  _at__gt_C_plus_S(); // @>C+S
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xf4ec(); // UNK_0xf4ec
  UNK_0xf4be(); // UNK_0xf4be
  ICLOSE(); // ICLOSE
}

// 0xf558: db 0x46 0x58 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x00 'FX-VOC__ '
  