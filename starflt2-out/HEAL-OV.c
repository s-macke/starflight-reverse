// ====== OVERLAY 'HEAL-OV' ======
// store offset = 0xf070
// overlay size   = 0x04f0

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf086  codep:0x224c parp:0xf086 size:0x0014 C-string:'UNK_0xf086'
//      UNK_0xf09c  codep:0x224c parp:0xf09c size:0x0020 C-string:'UNK_0xf09c'
//      UNK_0xf0be  codep:0x7420 parp:0xf0be size:0x0003 C-string:'UNK_0xf0be'
//      UNK_0xf0c3  codep:0x7420 parp:0xf0c3 size:0x0003 C-string:'UNK_0xf0c3'
//      UNK_0xf0c8  codep:0x7420 parp:0xf0c8 size:0x0003 C-string:'UNK_0xf0c8'
//      UNK_0xf0cd  codep:0x7420 parp:0xf0cd size:0x0003 C-string:'UNK_0xf0cd'
//      UNK_0xf0d2  codep:0x7420 parp:0xf0d2 size:0x0003 C-string:'UNK_0xf0d2'
//      UNK_0xf0d7  codep:0x7420 parp:0xf0d7 size:0x0003 C-string:'UNK_0xf0d7'
//      UNK_0xf0dc  codep:0x7420 parp:0xf0dc size:0x0003 C-string:'UNK_0xf0dc'
//      UNK_0xf0e1  codep:0x7420 parp:0xf0e1 size:0x0003 C-string:'UNK_0xf0e1'
//      UNK_0xf0e6  codep:0x7420 parp:0xf0e6 size:0x0003 C-string:'UNK_0xf0e6'
//      UNK_0xf0eb  codep:0x7420 parp:0xf0eb size:0x0003 C-string:'UNK_0xf0eb'
//      UNK_0xf0f0  codep:0x7420 parp:0xf0f0 size:0x000b C-string:'UNK_0xf0f0'
//      UNK_0xf0fd  codep:0x224c parp:0xf0fd size:0x0008 C-string:'UNK_0xf0fd'
//      UNK_0xf107  codep:0x224c parp:0xf107 size:0x000c C-string:'UNK_0xf107'
//      UNK_0xf115  codep:0x224c parp:0xf115 size:0x003a C-string:'UNK_0xf115'
//      UNK_0xf151  codep:0x224c parp:0xf151 size:0x006a C-string:'UNK_0xf151'
//          ROLE-C  codep:0x224c parp:0xf1c6 size:0x004a C-string:'ROLE_dash_C'
//      UNK_0xf212  codep:0x224c parp:0xf212 size:0x0042 C-string:'UNK_0xf212'
//      UNK_0xf256  codep:0x224c parp:0xf256 size:0x0010 C-string:'UNK_0xf256'
//      UNK_0xf268  codep:0x224c parp:0xf268 size:0x0020 C-string:'UNK_0xf268'
//      UNK_0xf28a  codep:0x224c parp:0xf28a size:0x0017 C-string:'UNK_0xf28a'
//      UNK_0xf2a3  codep:0x224c parp:0xf2a3 size:0x0084 C-string:'UNK_0xf2a3'
//           .VITS  codep:0x224c parp:0xf331 size:0x0096 C-string:'_dot_VITS'
//          >SKILL  codep:0x4b3b parp:0xf3d2 size:0x0018 C-string:'_gt_SKILL'
//      UNK_0xf3ec  codep:0x224c parp:0xf3ec size:0x001e C-string:'UNK_0xf3ec'
//      UNK_0xf40c  codep:0x224c parp:0xf40c size:0x0012 C-string:'UNK_0xf40c'
//      UNK_0xf420  codep:0x1d29 parp:0xf420 size:0x0002 C-string:'UNK_0xf420'
//      UNK_0xf424  codep:0x1d29 parp:0xf424 size:0x0003 C-string:'UNK_0xf424'
//      UNK_0xf429  codep:0x224c parp:0xf429 size:0x0058 C-string:'UNK_0xf429'
//      UNK_0xf483  codep:0x224c parp:0xf483 size:0x001c C-string:'UNK_0xf483'
//      UNK_0xf4a1  codep:0x224c parp:0xf4a1 size:0x000a C-string:'UNK_0xf4a1'
//      UNK_0xf4ad  codep:0x224c parp:0xf4ad size:0x0024 C-string:'UNK_0xf4ad'
//      UNK_0xf4d3  codep:0x224c parp:0xf4d3 size:0x0050 C-string:'UNK_0xf4d3'
//           OBITS  codep:0x224c parp:0xf52d size:0x0006 C-string:'OBITS'
//            KILL  codep:0x224c parp:0xf53c size:0x000c C-string:'KILL'
//            HEAL  codep:0x224c parp:0xf551 size:0x0000 C-string:'HEAL'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xf420 = 0xf420; // UNK_0xf420 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf424 = 0xf424; // UNK_0xf424 size: 3
// {0x3a, 0x20, 0x05}




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
  Push(pp_WLEFT); // WLEFT size: 2
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(Pop() + Pop()); // +
  Push(pp_WTOP); // WTOP size: 2
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
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
// 0xf0d2: db 0x10 0x1a 0x01 '   '

// ================================================
// 0xf0d5: WORD 'UNK_0xf0d7' codep=0x7420 parp=0xf0d7
// ================================================
// 0xf0d7: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xf0da: WORD 'UNK_0xf0dc' codep=0x7420 parp=0xf0dc
// ================================================
// 0xf0dc: db 0x10 0x1c 0x01 '   '

// ================================================
// 0xf0df: WORD 'UNK_0xf0e1' codep=0x7420 parp=0xf0e1
// ================================================
// 0xf0e1: db 0x10 0x1d 0x01 '   '

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
  Push(pp_ROSTER); // ROSTER size: 18
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf105: WORD 'UNK_0xf107' codep=0x224c parp=0xf107
// ================================================

void UNK_0xf107() // UNK_0xf107
{
  Push(pp_ROSTER); // ROSTER size: 18
  Push(0x0012);
  Push(0); // 0
  FILL_2(); // FILL_2
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
  Push(pp_ROSTER); // ROSTER size: 18
  _1_dot_5_at_(); // 1.5@
  Push2Words("NULL");
  D_eq_(); // D=
  if (Pop() == 0) return;
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA size: 2
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  _gt_TVCT(); // >TVCT
  goto label2;

  label1:
  _gt_SSCT(); // >SSCT

  label2:
  _gt_DISPLA(); // >DISPLA
  SetColor("YELLOW");
  Push(0x4fa9);
  _ex__2(); // !_2
  CTERASE(); // CTERASE
  SetColor("RED");
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
  KEY_2(); // KEY_2
  BYE_2(); // BYE_2
}


// ================================================
// 0xf1bb: WORD 'ROLE-C' codep=0x224c parp=0xf1c6
// ================================================
// entry

void ROLE_dash_C() // ROLE-C
{
  UNK_0xf107(); // UNK_0xf107
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1); // IFIELD(INST-SI)
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
  Push(0x6600); // IFIELD(UNK_0xf0eb)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x6601); // IFIELD(UNK_0xf0f0)
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
  Push(pp_ROSTER); // ROSTER size: 18
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
  Push(0x6600); // IFIELD(UNK_0xf0eb)
  Push(Read8(Pop())&0xFF); // C@
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
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp__ask_HEAL); // ?HEAL size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xf266: WORD 'UNK_0xf268' codep=0x224c parp=0xf268
// ================================================

void UNK_0xf268() // UNK_0xf268
{
  Push2Words("*ASSIGN");
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
  Push(0x6601); // IFIELD(UNK_0xf0c8)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0104);
  Push(0x65ff); // IFIELD(UNK_0xf0e6)
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
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
  Push(0x65ec); // IFIELD(UNK_0xf0cd)
  COUNT(); // COUNT
  _dot_TTY(); // .TTY
  PRINT(" IS HEALED", 10); // (.")
}


// ================================================
// 0xf2a1: WORD 'UNK_0xf2a3' codep=0x224c parp=0xf2a3
// ================================================

void UNK_0xf2a3() // UNK_0xf2a3
{
  ROLE_dash_C(); // ROLE-C
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
  Push(0x6600); // IFIELD(UNK_0xf0eb)
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label3;
  Push(0x6601); // IFIELD(UNK_0xf0f0)
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  Push(pp_CONTEXT_3); // CONTEXT_3 size: 2
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label4;
  Push(Pop()+2); // 2+
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label5;
  Push(0x6601); // IFIELD(UNK_0xf0f0)
  Push(Read16(Pop())); // @
  Push(0x00fb);
  Push(Pop() & Pop()); // AND
  Push(0x6601); // IFIELD(UNK_0xf0f0)
  C_ex__2(); // C!_2
  UNK_0xf28a(); // UNK_0xf28a

  label5:
  goto label6;

  label4:
  Push(Pop()+1); // 1+

  label6:
  Push(0x0064);
  MIN(); // MIN
  Push(0x6600); // IFIELD(UNK_0xf0eb)
  C_ex__2(); // C!_2

  label3:
  ICLOSE(); // ICLOSE
  goto label7;

  label2:
  Pop(); Pop();// 2DROP

  label7:
  i++;
  } while(i<imax); // (LOOP) 0xff96


  label1:
  UNK_0xf268(); // UNK_0xf268
  Push(pp_HEALTI); // HEALTI size: 2
  _ex__2(); // !_2
}


// ================================================
// 0xf327: WORD '.VITS' codep=0x224c parp=0xf331
// ================================================
// entry

void _dot_VITS() // .VITS
{
  Push(pp_XORMODE); // XORMODE size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(pp_XORMODE); // XORMODE size: 2
  _099(); // 099
  Push(pp_COLOR); // COLOR size: 2
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  SetColor("WHITE");
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
  Push(pp_WCHARS); // WCHARS size: 2
  Push(Read16(Pop())); // @
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  Push(i); // I
  UNK_0xf0fd(); // UNK_0xf0fd
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex__2(); // +!_2
  Push(0x65ec); // IFIELD(UNK_0xf0cd)
  _do__dot_(); // $.
  Push(0x000e);
  Push(0x65ec); // IFIELD(UNK_0xf0cd)
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
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
  Push(pp_XBLT); // XBLT size: 2
  Push(Read16(Pop())); // @
  Push(cc__dash_1); // -1
  Push(pp_XBLT); // XBLT size: 2
  _plus__ex__2(); // +!_2
  Push(cc__4); // 4
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  Push(pp_XBLT); // XBLT size: 2
  _ex__2(); // !_2
  Push(0x6600); // IFIELD(UNK_0xf0eb)
  Push(Read8(Pop())&0xFF); // C@
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
  Push(pp_XORMODE); // XORMODE size: 2
  _ex__2(); // !_2
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xf3c7: WORD '>SKILL' codep=0x4b3b parp=0xf3d2
// ================================================

void _gt_SKILL() // >SKILL
{
  switch(Pop()) // >SKILL
  {
  case 1:
    UNK_0xf0d2(); // UNK_0xf0d2
    break;
  case 2:
    UNK_0xf0d7(); // UNK_0xf0d7
    break;
  case 3:
    UNK_0xf0dc(); // UNK_0xf0dc
    break;
  case 4:
    UNK_0xf0e1(); // UNK_0xf0e1
    break;
  case 5:
    UNK_0xf0e6(); // UNK_0xf0e6
    break;
  default:
    ABORT(); // ABORT
    break;

  }
}

// ================================================
// 0xf3ea: WORD 'UNK_0xf3ec' codep=0x224c parp=0xf3ec
// ================================================

void UNK_0xf3ec() // UNK_0xf3ec
{
  Push(0x6601); // IFIELD(UNK_0xf0f0)
  Push(Read16(Pop())); // @
  Push(0x0010);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0x6601); // IFIELD(UNK_0xf0f0)
  Push(Read16(Pop())); // @
  Push(2); // 2
  Push(Pop() | Pop()); // OR
  Push(0x6601); // IFIELD(UNK_0xf0f0)
  _ex__2(); // !_2
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
  Push(pp__ask_10); // ?10 size: 2
  _ex__2(); // !_2
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
  Push(pp_UNK_0xf420); // UNK_0xf420 size: 0
  _ex__2(); // !_2
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f2); // IFIELD(UNK_0xf0be)
  _1_dot_5_at_(); // 1.5@
  Push(pp_UNK_0xf424); // UNK_0xf424 size: 0
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0x65e1); // IFIELD(INST-SI)
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
  _gt_SKILL(); // >SKILL case
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xf420); // UNK_0xf420 size: 0
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) goto label1;
  CI(); // CI
  Push(pp_UNK_0xf424); // UNK_0xf424 size: 0
  _st_1_dot_5_ex__gt_(); // <1.5!>
  Push(pp_UNK_0xf420); // UNK_0xf420 size: 0
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
  Push(0x6600); // IFIELD(UNK_0xf0eb)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x6601); // IFIELD(UNK_0xf0f0)
  Push(Read16(Pop())); // @
  Push(0x0010);
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  UNK_0xf40c(); // UNK_0xf40c
}


// ================================================
// 0xf49f: WORD 'UNK_0xf4a1' codep=0x224c parp=0xf4a1
// ================================================

void UNK_0xf4a1() // UNK_0xf4a1
{
  Push(0x65fb); // IFIELD(UNK_0xf0d2)
  Push(cc__6); // 6
  Push(0); // 0
  FILL_2(); // FILL_2
}


// ================================================
// 0xf4ab: WORD 'UNK_0xf4ad' codep=0x224c parp=0xf4ad
// ================================================

void UNK_0xf4ad() // UNK_0xf4ad
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f2); // IFIELD(UNK_0xf0be)
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf483(); // UNK_0xf483
  if (Pop() == 0) goto label1;
  UNK_0xf4a1(); // UNK_0xf4a1
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(0x65f5); // IFIELD(UNK_0xf0c3)
  _1_dot_5_at_(); // 1.5@
  Push(0x65f2); // IFIELD(UNK_0xf0be)
  _1_dot_5_ex__2(); // 1.5!_2
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
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f2); // IFIELD(UNK_0xf0be)
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
  Push(0x6600); // IFIELD(UNK_0xf0eb)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xf3ec(); // UNK_0xf3ec

  label2:
  ICLOSE(); // ICLOSE
  Push(i); // I
  UNK_0xf429(); // UNK_0xf429
  Push(pp_UNK_0xf424); // UNK_0xf424 size: 0
  _1_dot_5_at_(); // 1.5@
  Push(i); // I
  _3_star_(); // 3*
  Push(cc__4); // 4
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  _1_dot_5_ex__2(); // 1.5!_2
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
// entry

void OBITS() // OBITS
{
  UNK_0xf4d3(); // UNK_0xf4d3
  UNK_0xf4ad(); // UNK_0xf4ad
}


// ================================================
// 0xf533: WORD 'KILL' codep=0x224c parp=0xf53c
// ================================================
// entry

void KILL() // KILL
{
  Push(0); // 0
  Push(0x6600); // IFIELD(UNK_0xf0eb)
  C_ex__2(); // C!_2
  OBITS(); // OBITS
  UNK_0xf40c(); // UNK_0xf40c
}


// ================================================
// 0xf548: WORD 'HEAL' codep=0x224c parp=0xf551
// ================================================
// entry

void HEAL() // HEAL
{
  OBITS(); // OBITS
  UNK_0xf2a3(); // UNK_0xf2a3
}

// 0xf557: db 0x48 0x45 0x41 0x4c 0x45 0x52 0x5f 0x5f 0x5f 0x00 'HEALER___ '
  