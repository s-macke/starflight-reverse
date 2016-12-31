// ====== OVERLAY 'SITE-OV' ======
// store offset = 0xf140
// overlay size   = 0x0420

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//         LTLNBLT  codep:0x1d29 parp:0xf160 size:0x000c C-string:'LTLNBLT'
//      UNK_0xf16e  codep:0x224c parp:0xf16e size:0x0006 C-string:'UNK_0xf16e'
//      UNK_0xf176  codep:0x224c parp:0xf176 size:0x0006 C-string:'UNK_0xf176'
//      UNK_0xf17e  codep:0x224c parp:0xf17e size:0x0061 C-string:'UNK_0xf17e'
//      UNK_0xf1e1  codep:0x224c parp:0xf1e1 size:0x0048 C-string:'UNK_0xf1e1'
//      UNK_0xf22b  codep:0x1d29 parp:0xf22b size:0x0002 C-string:'UNK_0xf22b'
//      UNK_0xf22f  codep:0x1d29 parp:0xf22f size:0x0002 C-string:'UNK_0xf22f'
//      UNK_0xf233  codep:0x224c parp:0xf233 size:0x0072 C-string:'UNK_0xf233'
//      UNK_0xf2a7  codep:0x224c parp:0xf2a7 size:0x0072 C-string:'UNK_0xf2a7'
//      UNK_0xf31b  codep:0x224c parp:0xf31b size:0x0030 C-string:'UNK_0xf31b'
//      UNK_0xf34d  codep:0x224c parp:0xf34d size:0x003e C-string:'UNK_0xf34d'
//      UNK_0xf38d  codep:0x224c parp:0xf38d size:0x0028 C-string:'UNK_0xf38d'
//      UNK_0xf3b7  codep:0x224c parp:0xf3b7 size:0x0026 C-string:'UNK_0xf3b7'
//      UNK_0xf3df  codep:0x224c parp:0xf3df size:0x0044 C-string:'UNK_0xf3df'
//      UNK_0xf425  codep:0x224c parp:0xf425 size:0x0008 C-string:'UNK_0xf425'
//      UNK_0xf42f  codep:0x224c parp:0xf42f size:0x0006 C-string:'UNK_0xf42f'
//       GETSITE_1  codep:0x224c parp:0xf441 size:0x00a6 C-string:'GETSITE_1'
//       .MERCATOR  codep:0x224c parp:0xf4f5 size:0x0046 C-string:'_dot_MERCATOR'
//       GETSITE_2  codep:0x224c parp:0xf547 size:0x0000 C-string:'GETSITE_2'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_LTLNBLT = 0xf160; // LTLNBLT size: 12
// {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}

const unsigned short int pp_UNK_0xf22b = 0xf22b; // UNK_0xf22b size: 2
// {0x80, 0x04}

const unsigned short int pp_UNK_0xf22f = 0xf22f; // UNK_0xf22f size: 2
// {0xe0, 0x01}




// 0xf152: db 0x42 0x00 'B '

// ================================================
// 0xf154: WORD 'LTLNBLT' codep=0x1d29 parp=0xf160
// ================================================
// 0xf160: db 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff '            '

// ================================================
// 0xf16c: WORD 'UNK_0xf16e' codep=0x224c parp=0xf16e
// ================================================

void UNK_0xf16e() // UNK_0xf16e
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf174: WORD 'UNK_0xf176' codep=0x224c parp=0xf176
// ================================================

void UNK_0xf176() // UNK_0xf176
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf17c: WORD 'UNK_0xf17e' codep=0x224c parp=0xf17e
// ================================================

void UNK_0xf17e() // UNK_0xf17e
{
  Push(0x00c5);
  Push(0x0053);
  Push(0x007e);
  Push(0x009c);
  SetColor("GREY1");
  POLY_dash_WI(); // POLY-WI
  CTINIT(); // CTINIT
  UNK_0xf176(); // UNK_0xf176
  Push(0x0066);
  Push(0x008a);
  POS_dot_(); // POS.
  PRINT("LAT", 3); // (.")
  Push(0x007d);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  PRINT("LONG", 4); // (.")
  Push(0x00c1);
  Push(0x005f);
  Push(0x008e);
  Push(0x0090);
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
  Push(0x00c1);
  Push(0x0093);
  Push(0x008e);
  Push(0x0098);
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xf1df: WORD 'UNK_0xf1e1' codep=0x224c parp=0xf1e1
// ================================================

void UNK_0xf1e1() // UNK_0xf1e1
{
  _at_CRS(); // @CRS
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  Push(cc__4); // 4
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(cc__6); // 6
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(cc__8); // 8
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_CMAP); // CMAP
  Push(i); // I
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _ex_COLOR(); // !COLOR
  Push(0x0094);
  Push(0x0095);
  Push(i); // I
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  BLT(); // BLT
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  _ex_CRS(); // !CRS
}


// ================================================
// 0xf229: WORD 'UNK_0xf22b' codep=0x1d29 parp=0xf22b
// ================================================
// 0xf22b: db 0x80 0x04 '  '

// ================================================
// 0xf22d: WORD 'UNK_0xf22f' codep=0x1d29 parp=0xf22f
// ================================================
// 0xf22f: db 0xe0 0x01 '  '

// ================================================
// 0xf231: WORD 'UNK_0xf233' codep=0x224c parp=0xf233
// ================================================

void UNK_0xf233() // UNK_0xf233
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x0480);
  _dash_(); // -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x007c);
  Push(0x0083);
  POS_dot_(); // POS.
  Push(cc__7); // 7
  SetColor("GREY1");
  POLY_dash_ER(); // POLY-ER
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label1;
  UNK_0xf176(); // UNK_0xf176
  goto label2;

  label1:
  UNK_0xf16e(); // UNK_0xf16e

  label2:
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label3;
  Push(-Pop()); // NEGATE
  Push(0); // 0
  Push(cc__3); // 3
  D_dot_R(); // D.R
  PRINT("W", 1); // (.")
  return;

  label3:
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label4;
  Push(0x0082);
  Push(0x0083);
  POS_dot_(); // POS.
  _dot_(); // .
  return;

  label4:
  Push(0); // 0
  Push(cc__3); // 3
  D_dot_R(); // D.R
  PRINT("E", 1); // (.")
}


// ================================================
// 0xf2a5: WORD 'UNK_0xf2a7' codep=0x224c parp=0xf2a7
// ================================================

void UNK_0xf2a7() // UNK_0xf2a7
{
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x01e0);
  _dash_(); // -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0066);
  Push(0x0083);
  POS_dot_(); // POS.
  Push(cc__7); // 7
  SetColor("GREY1");
  POLY_dash_ER(); // POLY-ER
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label1;
  UNK_0xf176(); // UNK_0xf176
  goto label2;

  label1:
  UNK_0xf16e(); // UNK_0xf16e

  label2:
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label3;
  Push(-Pop()); // NEGATE
  Push(0); // 0
  Push(2); // 2
  D_dot_R(); // D.R
  PRINT("S", 1); // (.")
  return;

  label3:
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label4;
  Push(0x006a);
  Push(0x0083);
  POS_dot_(); // POS.
  _dot_(); // .
  return;

  label4:
  Push(0); // 0
  Push(2); // 2
  D_dot_R(); // D.R
  PRINT("N", 1); // (.")
}


// ================================================
// 0xf319: WORD 'UNK_0xf31b' codep=0x224c parp=0xf31b
// ================================================

void UNK_0xf31b() // UNK_0xf31b
{
  Push(pp_PLHI); // PLHI
  Push(Read16(Pop())); // @
  Push(cc__dash_1); // -1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x01e0);
  Push(pp_UNK_0xf22f); // UNK_0xf22f
  _ex__2(); // !_2
  Push(0x0480);
  Push(pp_UNK_0xf22b); // UNK_0xf22b
  _ex__2(); // !_2

  label1:
  Push(pp_UNK_0xf22b); // UNK_0xf22b
  Push(Read16(Pop())); // @
  Push(pp_XABS); // XABS
  _ex__2(); // !_2
  Push(pp_UNK_0xf22f); // UNK_0xf22f
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  _ex__2(); // !_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf34b: WORD 'UNK_0xf34d' codep=0x224c parp=0xf34d
// ================================================

void UNK_0xf34d() // UNK_0xf34d
{
  Push(cc_AX); // AX
  _099(); // 099
  Push(0x00c5);
  Push(cc_BX); // BX
  Push(Pop()+1); // 1+
  C_ex__2(); // C!_2
  Push(0x0053);
  Push(cc_BX); // BX
  C_ex__2(); // C!_2
  Push(0x0090);
  Push(cc_CX); // CX
  Push(Pop()+1); // 1+
  C_ex__2(); // C!_2
  Push(0x009d);
  Push(cc_CX); // CX
  C_ex__2(); // C!_2
  Push(0x00c5);
  Push(cc_DX); // DX
  Push(Pop()+1); // 1+
  C_ex__2(); // C!_2
  Push(0x0053);
  Push(cc_DX); // DX
  C_ex__2(); // C!_2
  GRCALL(); // GRCALL
}


// ================================================
// 0xf38b: WORD 'UNK_0xf38d' codep=0x224c parp=0xf38d
// ================================================

void UNK_0xf38d() // UNK_0xf38d
{
  Push(0x0060);
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x0028);
  _slash_(); // /
  Push(Pop()*2); // 2*
  Push(0x0091);
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  Push(0x0030);
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(2); // 2
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
}


// ================================================
// 0xf3b5: WORD 'UNK_0xf3b7' codep=0x224c parp=0xf3b7
// ================================================

void UNK_0xf3b7() // UNK_0xf3b7
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x0030);
  _slash_(); // /
  Push(0x0060);
  Push(Pop() + Pop()); // +
  Push(0x00bf);
  POS_dot_(); // POS.
  Push(1); // 1
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(0x0032);
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
}


// ================================================
// 0xf3dd: WORD 'UNK_0xf3df' codep=0x224c parp=0xf3df
// ================================================

void UNK_0xf3df() // UNK_0xf3df
{
  UNK_0xf176(); // UNK_0xf176
  UNK_0xf3b7(); // UNK_0xf3b7
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(0x00c1);
  OVER(); // OVER
  Push(0x008f);
  LLINE(); // LLINE
  UNK_0xf38d(); // UNK_0xf38d
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  unsigned short int a = Pop(); // >R
  Push(0x005f);
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(0x0090);
  SWAP(); // SWAP
  LLINE(); // LLINE
  Push(a); // R>
  Push(Pop()-1); // 1-
  Push(0x005f);
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(0x0090);
  SWAP(); // SWAP
  LLINE(); // LLINE
}


// ================================================
// 0xf423: WORD 'UNK_0xf425' codep=0x224c parp=0xf425
// ================================================

void UNK_0xf425() // UNK_0xf425
{
  D_gt_H(); // D>H
  UNK_0xf34d(); // UNK_0xf34d
  UNK_0xf3df(); // UNK_0xf3df
}


// ================================================
// 0xf42d: WORD 'UNK_0xf42f' codep=0x224c parp=0xf42f
// ================================================

void UNK_0xf42f() // UNK_0xf42f
{
  H_gt_D(); // H>D
  UNK_0xf34d(); // UNK_0xf34d
}


// ================================================
// 0xf435: WORD 'GETSITE_1' codep=0x224c parp=0xf441
// ================================================

void GETSITE_1() // GETSITE_1
{
  Push(cc__8); // 8
  Push(pp__n_AUX); // #AUX
  _ex__2(); // !_2
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  _gt_DISPLA(); // >DISPLA
  UNK_0xf31b(); // UNK_0xf31b
  _gt_1FONT(); // >1FONT
  UNK_0xf176(); // UNK_0xf176
  UNK_0xf2a7(); // UNK_0xf2a7
  UNK_0xf233(); // UNK_0xf233
  UNK_0xf425(); // UNK_0xf425

  label3:
  XYSCAN(); // XYSCAN
  Push(0x1388);
  Push(pp_KEYTIME); // KEYTIME
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM
  _2_at_(); // 2@
  D_dash_(); // D-
  Pop(); // DROP
  _slash_(); // /
  Push(cc__5); // 5
  MAX(); // MAX
  Push(0x00c8);
  MIN(); // MIN
  unsigned short int a = Pop(); // >R
  Push(a); // I
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(a); // R>
  Push(Pop() * Pop()); // *
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  UNK_0xf2a7(); // UNK_0xf2a7
  UNK_0xf233(); // UNK_0xf233
  UNK_0xf42f(); // UNK_0xf42f
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x03bf);
  MIN(); // MIN
  Push(pp_YABS); // YABS
  _ex__2(); // !_2
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x08ff);
  MIN(); // MIN
  Push(pp_XABS); // XABS
  _ex__2(); // !_2
  UNK_0xf425(); // UNK_0xf425
  UNK_0xf176(); // UNK_0xf176
  UNK_0xf2a7(); // UNK_0xf2a7
  UNK_0xf233(); // UNK_0xf233
  goto label2;

  label1:
  Pop(); Pop();// 2DROP

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf22b); // UNK_0xf22b
  _ex__2(); // !_2
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf22f); // UNK_0xf22f
  _ex__2(); // !_2
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}


// ================================================
// 0xf4e7: WORD '.MERCATOR' codep=0x224c parp=0xf4f5
// ================================================
// entry

void _dot_MERCATOR() // .MERCATOR
{
  Push(cc__4); // 4
  Push(pp__n_AUX); // #AUX
  _ex__2(); // !_2
  UNK_0xf31b(); // UNK_0xf31b
  _gt_DISPLA(); // >DISPLA
  UNK_0xf17e(); // UNK_0xf17e
  UNK_0xf1e1(); // UNK_0xf1e1
  Push(0x0060);
  Push(pp_XLLDEST); // XLLDEST
  _ex__2(); // !_2
  Push(0x0090);
  Push(pp_YLLDEST); // YLLDEST
  _ex__2(); // !_2
  Push(0x9199); // probable '.1X2CEL'
  Push(pp__i__dot_CELL); // '.CELL
  _ex__2(); // !_2
  Push(0x6a5a); // probable 'MERCATO'
  SETLARR(); // SETLARR
  FULLARR(); // FULLARR
  SETREGI(); // SETREGI
  _dot_REGION(); // .REGION
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  UNK_0xf2a7(); // UNK_0xf2a7
  UNK_0xf233(); // UNK_0xf233

  label1:
  CTINIT(); // CTINIT
}


// ================================================
// 0xf53b: WORD 'GETSITE_2' codep=0x224c parp=0xf547
// ================================================
// entry

void GETSITE_2() // GETSITE_2
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _dot_MERCATOR(); // .MERCATOR

  label1:
  GETSITE_1(); // GETSITE_1
}

// 0xf55b: db 0x53 0x49 0x54 0x45 0x2d 0x00 'SITE- '
  