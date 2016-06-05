// ====== OVERLAY 'HEAL-OV' ======

#include"cpu.h"

// store offset = 0xf070
// overlay size   = 0x04f0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf086  codep:0x224c parp:0xf086 size:0x0014 C-string:'UNK_0xf086'
// 1870:      UNK_0xf09c  codep:0x224c parp:0xf09c size:0x0020 C-string:'UNK_0xf09c'
// 1871:      UNK_0xf0be  codep:0x7420 parp:0xf0be size:0x0003 C-string:'UNK_0xf0be'
// 1872:      UNK_0xf0c3  codep:0x7420 parp:0xf0c3 size:0x0003 C-string:'UNK_0xf0c3'
// 1873:      UNK_0xf0c8  codep:0x7420 parp:0xf0c8 size:0x0003 C-string:'UNK_0xf0c8'
// 1874:      UNK_0xf0cd  codep:0x7420 parp:0xf0cd size:0x0003 C-string:'UNK_0xf0cd'
// 1875:      UNK_0xf0d2  codep:0x7420 parp:0xf0d2 size:0x0012 C-string:'UNK_0xf0d2'
// 1876:      UNK_0xf0e6  codep:0x7420 parp:0xf0e6 size:0x0003 C-string:'UNK_0xf0e6'
// 1877:      UNK_0xf0eb  codep:0x7420 parp:0xf0eb size:0x0003 C-string:'UNK_0xf0eb'
// 1878:      UNK_0xf0f0  codep:0x7420 parp:0xf0f0 size:0x000b C-string:'UNK_0xf0f0'
// 1879:      UNK_0xf0fd  codep:0x224c parp:0xf0fd size:0x0008 C-string:'UNK_0xf0fd'
// 1880:      UNK_0xf107  codep:0x224c parp:0xf107 size:0x000c C-string:'UNK_0xf107'
// 1881:      UNK_0xf115  codep:0x224c parp:0xf115 size:0x003a C-string:'UNK_0xf115'
// 1882:      UNK_0xf151  codep:0x224c parp:0xf151 size:0x006a C-string:'UNK_0xf151'
// 1883:          ROLE-C  codep:0x224c parp:0xf1c6 size:0x004a C-string:'ROLE_minus_C'
// 1884:      UNK_0xf212  codep:0x224c parp:0xf212 size:0x0042 C-string:'UNK_0xf212'
// 1885:      UNK_0xf256  codep:0x224c parp:0xf256 size:0x0010 C-string:'UNK_0xf256'
// 1886:      UNK_0xf268  codep:0x224c parp:0xf268 size:0x0020 C-string:'UNK_0xf268'
// 1887:      UNK_0xf28a  codep:0x224c parp:0xf28a size:0x0017 C-string:'UNK_0xf28a'
// 1888:      UNK_0xf2a3  codep:0x224c parp:0xf2a3 size:0x0084 C-string:'UNK_0xf2a3'
// 1889:           .VITS  codep:0x224c parp:0xf331 size:0x0096 C-string:'_dot_VITS'
// 1890:          >SKILL  codep:0x4b3b parp:0xf3d2 size:0x0018 C-string:'_gt_SKILL'
// 1891:      UNK_0xf3ec  codep:0x224c parp:0xf3ec size:0x001e C-string:'UNK_0xf3ec'
// 1892:      UNK_0xf40c  codep:0x224c parp:0xf40c size:0x0012 C-string:'UNK_0xf40c'
// 1893:      UNK_0xf420  codep:0x1d29 parp:0xf420 size:0x0002 C-string:'UNK_0xf420'
// 1894:      UNK_0xf424  codep:0x1d29 parp:0xf424 size:0x0003 C-string:'UNK_0xf424'
// 1895:      UNK_0xf429  codep:0x224c parp:0xf429 size:0x0058 C-string:'UNK_0xf429'
// 1896:      UNK_0xf483  codep:0x224c parp:0xf483 size:0x001c C-string:'UNK_0xf483'
// 1897:      UNK_0xf4a1  codep:0x224c parp:0xf4a1 size:0x000a C-string:'UNK_0xf4a1'
// 1898:      UNK_0xf4ad  codep:0x224c parp:0xf4ad size:0x0024 C-string:'UNK_0xf4ad'
// 1899:      UNK_0xf4d3  codep:0x224c parp:0xf4d3 size:0x0050 C-string:'UNK_0xf4d3'
// 1900:           OBITS  codep:0x224c parp:0xf52d size:0x0006 C-string:'OBITS'
// 1901:            KILL  codep:0x224c parp:0xf53c size:0x000c C-string:'KILL'
// 1902:            HEAL  codep:0x224c parp:0xf551 size:0x000f C-string:'HEAL'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf420[2] = {0x3a, 0x20}; // UNK_0xf420
unsigned char UNK_0xf424[3] = {0x3a, 0x20, 0x05}; // UNK_0xf424



// 0xf082: db 0x4f 0x00 'O '

// ================================================
// 0xf084: WORD 'UNK_0xf086' codep=0x224c parp=0xf086
// ================================================

void UNK_0xf086() // UNK_0xf086
{
  Push(0x0083);
  Push(0x0053);
  Push(0x0009);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xf09a: WORD 'UNK_0xf09c' codep=0x224c parp=0xf09c
// ================================================

void UNK_0xf09c() // UNK_0xf09c
{
  SWAP(); // SWAP
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(Pop() + Pop()); // +
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _minus_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf0bc: WORD 'UNK_0xf0be' codep=0x7420 parp=0xf0be
// ================================================
// 0xf0be: db 0x11 0x11 0x03 '   '

// ================================================
// 0xf0c1: WORD 'UNK_0xf0c3' codep=0x7420 parp=0xf0c3
// ================================================
// 0xf0c3: db 0x11 0x14 0x03 '   '

// ================================================
// 0xf0c6: WORD 'UNK_0xf0c8' codep=0x7420 parp=0xf0c8
// ================================================
// 0xf0c8: db 0x11 0x20 0x03 '   '

// ================================================
// 0xf0cb: WORD 'UNK_0xf0cd' codep=0x7420 parp=0xf0cd
// ================================================
// 0xf0cd: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xf0d0: WORD 'UNK_0xf0d2' codep=0x7420 parp=0xf0d2
// ================================================
// 0xf0d2: db 0x10 0x1a 0x01 0x20 0x74 0x10 0x1b 0x01 0x20 0x74 0x10 0x1c 0x01 0x20 0x74 0x10 0x1d 0x01 '    t    t    t   '

// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x7420 parp=0xf0e6
// ================================================
// 0xf0e6: db 0x10 0x1e 0x01 '   '

// ================================================
// 0xf0e9: WORD 'UNK_0xf0eb' codep=0x7420 parp=0xf0eb
// ================================================
// 0xf0eb: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xf0ee: WORD 'UNK_0xf0f0' codep=0x7420 parp=0xf0f0
// ================================================
// 0xf0f0: db 0x10 0x20 0x02 0x94 0x73 0x10 0x13 0x01 0x14 0xc8 0x6a '    s     j'

// ================================================
// 0xf0fb: WORD 'UNK_0xf0fd' codep=0x224c parp=0xf0fd
// ================================================

void UNK_0xf0fd() // UNK_0xf0fd
{
  _3_star_(); // 3*
  Push(pp_ROSTER); // ROSTER
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf105: WORD 'UNK_0xf107' codep=0x224c parp=0xf107
// ================================================

void UNK_0xf107() // UNK_0xf107
{
  Push(pp_ROSTER); // ROSTER
  Push(0x0012);
  Push(0); // 0
  FILL(); // FILL
}


// ================================================
// 0xf113: WORD 'UNK_0xf115' codep=0x224c parp=0xf115
// ================================================

void UNK_0xf115() // UNK_0xf115
{
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf0fd(); // UNK_0xf0fd
  _1_dot_5_at_(); // 1.5@
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  LEAVE(); // LEAVE
  goto label2;

  label1:
  Push(i); // I
  UNK_0xf0fd(); // UNK_0xf0fd
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  _2DUP(); // 2DUP
  Push(i); // I
  UNK_0xf0fd(); // UNK_0xf0fd
  _st_1_dot_5_ex__gt_(); // <1.5!>
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffd2

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf14f: WORD 'UNK_0xf151' codep=0x224c parp=0xf151
// ================================================

void UNK_0xf151() // UNK_0xf151
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  NULL(); // NULL
  D_eq_(); // D=
  if (Pop() == 0) return;
  Push(pp__ask_ON_minus_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  _gt_TVCT(); // >TVCT
  goto label2;

  label1:
  _gt_SSCT(); // >SSCT

  label2:
  _gt_DISPLA(); // >DISPLA
  YELLOW(); // YELLOW
  Push(0x4fa9);
  _ex_(); // !
  CTERASE(); // CTERASE
  RED(); // RED
  _ex_COLOR(); // !COLOR
  Push(1); // 1
  Push(1); // 1
  UNK_0xf09c(); // UNK_0xf09c
  _gt_1FONT(); // >1FONT
  GCR(); // GCR
  PRINT("!!CREW DECEASED!! ", 18); // (.")
  GCR(); // GCR
  PRINT("  **GAME OVER** ", 16); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY(); // KEY
  BYE(); // BYE
}


// ================================================
// 0xf1bb: WORD 'ROLE-C' codep=0x224c parp=0xf1c6
// ================================================

void ROLE_minus_C() // ROLE-C
{
  UNK_0xf107(); // UNK_0xf107
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  INST_minus_SI(); // INST-SI
  Push(0x0011);
  Push(Pop() + Pop()); // +
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _3_star_(); // 3*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf0eb(); // UNK_0xf0eb
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf0f0(); // UNK_0xf0f0
  Push(Read16(Pop())); // @
  Push(0x0010);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CI(); // CI
  UNK_0xf115(); // UNK_0xf115

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffd4

  Pop(); // DROP
  ICLOSE(); // ICLOSE
  UNK_0xf151(); // UNK_0xf151
}


// ================================================
// 0xf210: WORD 'UNK_0xf212' codep=0x224c parp=0xf212
// ================================================

void UNK_0xf212() // UNK_0xf212
{
  _gt_R(); // >R
  Push(1); // 1
  Push(pp_ROSTER); // ROSTER
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _3_star_(); // 3*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  _gt_C_plus_S(); // >C+S
  UNK_0xf0eb(); // UNK_0xf0eb
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  Push(h); // J
  _eq_(); // =
  goto label2;

  label1:
  Pop(); Pop();// 2DROP
  Push(1); // 1

  label2:
  ROT(); // ROT
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  i++;
  } while(i<imax); // (LOOP) 0xffd2

  R_gt_(); // R>
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf254: WORD 'UNK_0xf256' codep=0x224c parp=0xf256
// ================================================

void UNK_0xf256() // UNK_0xf256
{
  Push(0x0064);
  UNK_0xf212(); // UNK_0xf212
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp__ask_HEAL); // ?HEAL
  _ex_(); // !
}


// ================================================
// 0xf266: WORD 'UNK_0xf268' codep=0x224c parp=0xf268
// ================================================

void UNK_0xf268() // UNK_0xf268
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C(); // >C
  SET_minus_CUR(); // SET-CUR
  UNK_0xf0c8(); // UNK_0xf0c8
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0104);
  UNK_0xf0e6(); // UNK_0xf0e6
  C_at_(); // C@
  _minus_(); // -
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf288: WORD 'UNK_0xf28a' codep=0x224c parp=0xf28a
// ================================================

void UNK_0xf28a() // UNK_0xf28a
{
  CTINIT(); // CTINIT
  UNK_0xf0cd(); // UNK_0xf0cd
  COUNT(); // COUNT
  _dot_TTY(); // .TTY
  PRINT(" IS HEALED", 10); // (.")
}


// ================================================
// 0xf2a1: WORD 'UNK_0xf2a3' codep=0x224c parp=0xf2a3
// ================================================

void UNK_0xf2a3() // UNK_0xf2a3
{
  ROLE_minus_C(); // ROLE-C
  UNK_0xf256(); // UNK_0xf256
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf0fd(); // UNK_0xf0fd
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  _gt_C_plus_S(); // >C+S
  UNK_0xf0eb(); // UNK_0xf0eb
  C_at_(); // C@
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label3;
  UNK_0xf0f0(); // UNK_0xf0f0
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  Push(Pop()+2); // 2+
  DUP(); // DUP
  Push(0x0064);
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label6;
  UNK_0xf0f0(); // UNK_0xf0f0
  Push(Read16(Pop())); // @
  Push(0x00fb);
  Push(Pop() & Pop()); // AND
  UNK_0xf0f0(); // UNK_0xf0f0
  C_ex_(); // C!
  UNK_0xf28a(); // UNK_0xf28a

  label6:
  goto label7;

  label5:
  Push(Pop()+1); // 1+

  label7:
  Push(0x0064);
  MIN(); // MIN
  UNK_0xf0eb(); // UNK_0xf0eb
  C_ex_(); // C!

  label3:
  ICLOSE(); // ICLOSE
  goto label4;

  label2:
  Pop(); Pop();// 2DROP

  label4:
  i++;
  } while(i<imax); // (LOOP) 0xff96


  label1:
  UNK_0xf268(); // UNK_0xf268
  Push(pp_HEALTI); // HEALTI
  _ex_(); // !
}


// ================================================
// 0xf327: WORD '.VITS' codep=0x224c parp=0xf331
// ================================================

void _dot_VITS() // .VITS
{
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xf086(); // UNK_0xf086
  Push(0); // 0
  Push(1); // 1
  UNK_0xf09c(); // UNK_0xf09c
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  GCR(); // GCR
  Push(pp_WCHARS); // WCHARS
  Push(Read16(Pop())); // @
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
  Push(i); // I
  UNK_0xf0fd(); // UNK_0xf0fd
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  UNK_0xf0cd(); // UNK_0xf0cd
  _do__dot_(); // $.
  Push(0x000e);
  UNK_0xf0cd(); // UNK_0xf0cd
  C_at_(); // C@
  _minus_(); // -
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  PRINT(".", 1); // (.")
  j++;
  } while(j<jmax); // (LOOP) 0xfffa


  label2:
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(cc__minus_1); // -1
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  Push(cc__4); // 4
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  UNK_0xf0eb(); // UNK_0xf0eb
  C_at_(); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  PRINT("%", 1); // (.")

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xff9c

  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
  R_gt_(); // R>
  Push(pp_XORMODE); // XORMODE
  _ex_(); // !
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xf3c7: WORD '>SKILL' codep=0x4b3b parp=0xf3d2
// ================================================
// 0xf3d2: db 0x05 0x00 0x27 0x06 0x01 0x00 0xd2 0xf0 0x02 0x00 0xd7 0xf0 0x03 0x00 0xdc 0xf0 0x04 0x00 0xe1 0xf0 0x05 0x00 0xe6 0xf0 '  '                     '

// ================================================
// 0xf3ea: WORD 'UNK_0xf3ec' codep=0x224c parp=0xf3ec
// ================================================

void UNK_0xf3ec() // UNK_0xf3ec
{
  UNK_0xf0f0(); // UNK_0xf0f0
  Push(Read16(Pop())); // @
  Push(0x0010);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf0f0(); // UNK_0xf0f0
  Push(Read16(Pop())); // @
  Push(2); // 2
  Push(Pop() | Pop()); // OR
  UNK_0xf0f0(); // UNK_0xf0f0
  _ex_(); // !
}


// ================================================
// 0xf40a: WORD 'UNK_0xf40c' codep=0x224c parp=0xf40c
// ================================================

void UNK_0xf40c() // UNK_0xf40c
{
  Push(cc__6); // 6
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) return;
  Push(0x000a);
  Push(pp__ask_10); // ?10
  _ex_(); // !
}


// ================================================
// 0xf41e: WORD 'UNK_0xf420' codep=0x1d29 parp=0xf420
// ================================================
// 0xf420: db 0x3a 0x20 ': '

// ================================================
// 0xf422: WORD 'UNK_0xf424' codep=0x1d29 parp=0xf424
// ================================================
// 0xf424: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xf427: WORD 'UNK_0xf429' codep=0x224c parp=0xf429
// ================================================

void UNK_0xf429() // UNK_0xf429
{
  Push(0); // 0
  Push(pp_UNK_0xf420); // UNK_0xf420
  _ex_(); // !
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xf0be(); // UNK_0xf0be
  _1_dot_5_at_(); // 1.5@
  Push(pp_UNK_0xf424); // UNK_0xf424
  _1_dot_5_ex_(); // 1.5!
  INST_minus_SI(); // INST-SI
  Push(0x0011);
  Push(Pop() + Pop()); // +
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _3_star_(); // 3*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  OVER(); // OVER
  _gt_SKILL(); // >SKILL
  C_at_(); // C@
  DUP(); // DUP
  Push(pp_UNK_0xf420); // UNK_0xf420
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) goto label1;
  CI(); // CI
  Push(pp_UNK_0xf424); // UNK_0xf424
  _st_1_dot_5_ex__gt_(); // <1.5!>
  Push(pp_UNK_0xf420); // UNK_0xf420
  _st__ex__gt_(); // <!>
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffd0

  Pop(); Pop();// 2DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf481: WORD 'UNK_0xf483' codep=0x224c parp=0xf483
// ================================================

void UNK_0xf483() // UNK_0xf483
{
  UNK_0xf0eb(); // UNK_0xf0eb
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xf0f0(); // UNK_0xf0f0
  Push(Read16(Pop())); // @
  Push(0x0010);
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  DUP(); // DUP
  if (Pop() == 0) return;
  UNK_0xf40c(); // UNK_0xf40c
}


// ================================================
// 0xf49f: WORD 'UNK_0xf4a1' codep=0x224c parp=0xf4a1
// ================================================

void UNK_0xf4a1() // UNK_0xf4a1
{
  UNK_0xf0d2(); // UNK_0xf0d2
  Push(cc__6); // 6
  Push(0); // 0
  FILL(); // FILL
}


// ================================================
// 0xf4ab: WORD 'UNK_0xf4ad' codep=0x224c parp=0xf4ad
// ================================================

void UNK_0xf4ad() // UNK_0xf4ad
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xf0be(); // UNK_0xf0be
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf483(); // UNK_0xf483
  if (Pop() == 0) goto label1;
  UNK_0xf4a1(); // UNK_0xf4a1
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  UNK_0xf0c3(); // UNK_0xf0c3
  _1_dot_5_at_(); // 1.5@
  UNK_0xf0be(); // UNK_0xf0be
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4d1: WORD 'UNK_0xf4d3' codep=0x224c parp=0xf4d3
// ================================================

void UNK_0xf4d3() // UNK_0xf4d3
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xf0be(); // UNK_0xf0be
  Push(cc__6); // 6
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _3_star_(); // 3*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf483(); // UNK_0xf483
  if (Pop() == 0) goto label1;
  UNK_0xf4a1(); // UNK_0xf4a1
  UNK_0xf0eb(); // UNK_0xf0eb
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xf3ec(); // UNK_0xf3ec

  label2:
  ICLOSE(); // ICLOSE
  Push(i); // I
  UNK_0xf429(); // UNK_0xf429
  Push(pp_UNK_0xf424); // UNK_0xf424
  _1_dot_5_at_(); // 1.5@
  Push(i); // I
  _3_star_(); // 3*
  Push(cc__4); // 4
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  _1_dot_5_ex_(); // 1.5!
  goto label3;

  label1:
  ICLOSE(); // ICLOSE

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffc4

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf523: WORD 'OBITS' codep=0x224c parp=0xf52d
// ================================================

void OBITS() // OBITS
{
  UNK_0xf4d3(); // UNK_0xf4d3
  UNK_0xf4ad(); // UNK_0xf4ad
}


// ================================================
// 0xf533: WORD 'KILL' codep=0x224c parp=0xf53c
// ================================================

void KILL() // KILL
{
  Push(0); // 0
  UNK_0xf0eb(); // UNK_0xf0eb
  C_ex_(); // C!
  OBITS(); // OBITS
  UNK_0xf40c(); // UNK_0xf40c
}


// ================================================
// 0xf548: WORD 'HEAL' codep=0x224c parp=0xf551
// ================================================

void HEAL() // HEAL
{
  OBITS(); // OBITS
  UNK_0xf2a3(); // UNK_0xf2a3
}

// 0xf557: db 0x48 0x45 0x41 0x4c 0x45 0x52 0x5f 0x5f 0x5f 0x00 'HEALER___ '
  