// ====== OVERLAY 'SITE-OV' ======
// store offset = 0xf140
// overlay size   = 0x0420

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//         LTLNBLT  codep:0x1d29 wordp:0xf160 size:0x000c C-string:'LTLNBLT'
//           WF16E  codep:0x224c wordp:0xf16e size:0x0006 C-string:'WF16E'
//           WF176  codep:0x224c wordp:0xf176 size:0x0006 C-string:'WF176'
//           WF17E  codep:0x224c wordp:0xf17e size:0x0061 C-string:'WF17E'
//           WF1E1  codep:0x224c wordp:0xf1e1 size:0x0048 C-string:'WF1E1'
//           WF22B  codep:0x1d29 wordp:0xf22b size:0x0002 C-string:'WF22B'
//           WF22F  codep:0x1d29 wordp:0xf22f size:0x0002 C-string:'WF22F'
//           WF233  codep:0x224c wordp:0xf233 size:0x0072 C-string:'WF233'
//           WF2A7  codep:0x224c wordp:0xf2a7 size:0x0072 C-string:'WF2A7'
//           WF31B  codep:0x224c wordp:0xf31b size:0x0030 C-string:'WF31B'
//           WF34D  codep:0x224c wordp:0xf34d size:0x003e C-string:'WF34D'
//           WF38D  codep:0x224c wordp:0xf38d size:0x0028 C-string:'WF38D'
//           WF3B7  codep:0x224c wordp:0xf3b7 size:0x0026 C-string:'WF3B7'
//           WF3DF  codep:0x224c wordp:0xf3df size:0x0044 C-string:'WF3DF'
//           WF425  codep:0x224c wordp:0xf425 size:0x0008 C-string:'WF425'
//           WF42F  codep:0x224c wordp:0xf42f size:0x0006 C-string:'WF42F'
//       GETSITE_1  codep:0x224c wordp:0xf441 size:0x00a6 C-string:'GETSITE_1'
//       .MERCATOR  codep:0x224c wordp:0xf4f5 size:0x0046 C-string:'DrawMERCATOR'
//       GETSITE_2  codep:0x224c wordp:0xf547 size:0x0000 C-string:'GETSITE_2'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_AX; // AX
extern const unsigned short int cc_BX; // BX
extern const unsigned short int cc_CX; // CX
extern const unsigned short int cc_DX; // DX
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp__i__dot_CELL; // '.CELL
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_LKEYTIM; // LKEYTIM
extern const unsigned short int pp_CMAP; // CMAP
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern Color WHITE; // WHITE
void _star__slash_(); // */
void MAX(); // MAX
void MIN(); // MIN
void Draw(); // .
void D_dot_R(); // D.R
void D_dash_(); // D-
void SETLARR(); // SETLARR
void FULLARR(); // FULLARR
void SETREGI(); // SETREGI
void C_ex__2(); // C!_2
void Store_2(); // !_2
void ON_2(); // ON_2
void _099(); // 099
void SAVE_dash_OV(); // SAVE-OV
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_DISPLA(); // >DISPLA
void D_gt_H(); // D>H
void H_gt_D(); // H>D
void DrawREGION(); // .REGION
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void POLY_dash_ER(); // POLY-ER
void CTINIT(); // CTINIT
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void CURSORS(); // CURSORS
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _0_st_(); // 0<
void GRCALL(); // GRCALL
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_LTLNBLT = 0xf160; // LTLNBLT size: 12
// {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}

const unsigned short int pp_WF22B = 0xf22b; // WF22B size: 2
// {0x80, 0x04}

const unsigned short int pp_WF22F = 0xf22f; // WF22F size: 2
// {0xe0, 0x01}




// 0xf152: db 0x42 0x00 'B '

// ================================================
// 0xf154: WORD 'LTLNBLT' codep=0x1d29 wordp=0xf160
// ================================================
// 0xf160: db 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff '            '

// ================================================
// 0xf16c: WORD 'WF16E' codep=0x224c wordp=0xf16e
// ================================================

void WF16E() // WF16E
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf174: WORD 'WF176' codep=0x224c wordp=0xf176
// ================================================

void WF176() // WF176
{
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf17c: WORD 'WF17E' codep=0x224c wordp=0xf17e
// ================================================

void WF17E() // WF17E
{
  Push(0x00c5);
  Push(0x0053);
  Push(0x007e);
  Push(0x009c);
  GetColor(GREY1);
  POLY_dash_WI(); // POLY-WI
  CTINIT(); // CTINIT
  WF176(); // WF176
  Push(0x0066);
  Push(0x008a);
  POS_dot_(); // POS.
  PRINT("LAT", 3); // (.")
  Push(0x007d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("LONG", 4); // (.")
  Push(0x00c1);
  Push(0x005f);
  Push(0x008e);
  Push(0x0090);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
  Push(0x00c1);
  Push(0x0093);
  Push(0x008e);
  Push(0x0098);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xf1df: WORD 'WF1E1' codep=0x224c wordp=0xf1e1
// ================================================

void WF1E1() // WF1E1
{
  unsigned short int i, imax;
  GetCRS(); // @CRS
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(4);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(6);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(pp_XORMODE); // XORMODE
  _099(); // 099

  i = 0;
  imax = 8;
  do // (DO)
  {
    Push(Read16(pp_CMAP + i * 8)&0xFF); // CMAP I 8 * + C@
    StoreCOLOR(); // !COLOR
    Push(0x0094);
    Push(0x0095 + i * 6); // 0x0095 I 6 * +
    POS_dot_(); // POS.
    BLT(); // BLT
    i++;
  } while(i<imax); // (LOOP)

  StoreCRS(); // !CRS
}


// ================================================
// 0xf229: WORD 'WF22B' codep=0x1d29 wordp=0xf22b
// ================================================
// 0xf22b: db 0x80 0x04 '  '

// ================================================
// 0xf22d: WORD 'WF22F' codep=0x1d29 wordp=0xf22f
// ================================================
// 0xf22f: db 0xe0 0x01 '  '

// ================================================
// 0xf231: WORD 'WF233' codep=0x224c wordp=0xf233
// ================================================

void WF233() // WF233
{
  Push(Read16(pp_XABS) - 0x0480); // XABS @ 0x0480 -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x007c);
  Push(0x0083);
  POS_dot_(); // POS.
  Push(7);
  GetColor(GREY1);
  POLY_dash_ER(); // POLY-ER
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    WF176(); // WF176
  } else
  {
    WF16E(); // WF16E
  }
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
    Push(0);
    Push(3);
    D_dot_R(); // D.R
    PRINT("W", 1); // (.")
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0x0082);
    Push(0x0083);
    POS_dot_(); // POS.
    Draw(); // .
    return;
  }
  Push(0);
  Push(3);
  D_dot_R(); // D.R
  PRINT("E", 1); // (.")
}


// ================================================
// 0xf2a5: WORD 'WF2A7' codep=0x224c wordp=0xf2a7
// ================================================

void WF2A7() // WF2A7
{
  Push(Read16(pp_YABS) - 0x01e0); // YABS @ 0x01e0 -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0066);
  Push(0x0083);
  POS_dot_(); // POS.
  Push(7);
  GetColor(GREY1);
  POLY_dash_ER(); // POLY-ER
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    WF176(); // WF176
  } else
  {
    WF16E(); // WF16E
  }
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
    Push(0);
    Push(2);
    D_dot_R(); // D.R
    PRINT("S", 1); // (.")
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0x006a);
    Push(0x0083);
    POS_dot_(); // POS.
    Draw(); // .
    return;
  }
  Push(0);
  Push(2);
  D_dot_R(); // D.R
  PRINT("N", 1); // (.")
}


// ================================================
// 0xf319: WORD 'WF31B' codep=0x224c wordp=0xf31b params=0 returns=0
// ================================================

void WF31B() // WF31B
{
  Push(Read16(pp_PLHI)==-1?1:0); // PLHI @ -1 =
  if (Pop() != 0)
  {
    Push(0x01e0);
    Push(pp_WF22F); // WF22F
    Store_2(); // !_2
    Push(0x0480);
    Push(pp_WF22B); // WF22B
    Store_2(); // !_2
  }
  Push(Read16(pp_WF22B)); // WF22B @
  Push(pp_XABS); // XABS
  Store_2(); // !_2
  Push(Read16(pp_WF22F)); // WF22F @
  Push(pp_YABS); // YABS
  Store_2(); // !_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf34b: WORD 'WF34D' codep=0x224c wordp=0xf34d
// ================================================

void WF34D() // WF34D
{
  Push(Read16(cc_AX)); // AX
  _099(); // 099
  Push(0x00c5);
  Push(Read16(cc_BX) + 1); // BX 1+
  C_ex__2(); // C!_2
  Push(0x0053);
  Push(Read16(cc_BX)); // BX
  C_ex__2(); // C!_2
  Push(0x0090);
  Push(Read16(cc_CX) + 1); // CX 1+
  C_ex__2(); // C!_2
  Push(0x009d);
  Push(Read16(cc_CX)); // CX
  C_ex__2(); // C!_2
  Push(0x00c5);
  Push(Read16(cc_DX) + 1); // DX 1+
  C_ex__2(); // C!_2
  Push(0x0053);
  Push(Read16(cc_DX)); // DX
  C_ex__2(); // C!_2
  GRCALL(); // GRCALL
}


// ================================================
// 0xf38b: WORD 'WF38D' codep=0x224c wordp=0xf38d params=0 returns=1
// ================================================

void WF38D() // WF38D
{
  Push(0x0060);
  Push(Read16(pp_YABS)); // YABS @
  Push(0x0028);
  _slash_(); // /
  Push(Pop() * 2 + 0x0091); //  2* 0x0091 +
  POS_dot_(); // POS.
  Push(0x0030);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(2);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
}


// ================================================
// 0xf3b5: WORD 'WF3B7' codep=0x224c wordp=0xf3b7 params=0 returns=1
// ================================================

void WF3B7() // WF3B7
{
  Push(Read16(pp_XABS)); // XABS @
  Push(0x0030);
  _slash_(); // /
  Push(Pop() + 0x0060); //  0x0060 +
  Push(0x00bf);
  POS_dot_(); // POS.
  Push(1);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(0x0032);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
}


// ================================================
// 0xf3dd: WORD 'WF3DF' codep=0x224c wordp=0xf3df
// ================================================

void WF3DF() // WF3DF
{
  unsigned short int a;
  WF176(); // WF176
  WF3B7(); // WF3B7
  Push(Read16(pp_XBLT)); // XBLT @
  Push(0x00c1);
  OVER(); // OVER
  Push(0x008f);
  LLINE(); // LLINE
  WF38D(); // WF38D
  Push(Read16(pp_YBLT)); // YBLT @
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(0x005f);
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(0x0090);
  SWAP(); // SWAP
  LLINE(); // LLINE
  Push(a - 1); // R> 1-
  Push(0x005f);
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(0x0090);
  SWAP(); // SWAP
  LLINE(); // LLINE
}


// ================================================
// 0xf423: WORD 'WF425' codep=0x224c wordp=0xf425
// ================================================

void WF425() // WF425
{
  D_gt_H(); // D>H
  WF34D(); // WF34D
  WF3DF(); // WF3DF
}


// ================================================
// 0xf42d: WORD 'WF42F' codep=0x224c wordp=0xf42f
// ================================================

void WF42F() // WF42F
{
  H_gt_D(); // H>D
  WF34D(); // WF34D
}


// ================================================
// 0xf435: WORD 'GETSITE_1' codep=0x224c wordp=0xf441
// ================================================

void GETSITE_1() // GETSITE_1
{
  unsigned short int a;
  Push(8);
  Push(pp__n_AUX); // #AUX
  Store_2(); // !_2
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  _gt_DISPLA(); // >DISPLA
  WF31B(); // WF31B
  _gt_1FONT(); // >1FONT
  WF176(); // WF176
  WF2A7(); // WF2A7
  WF233(); // WF233
  WF425(); // WF425
  do
  {
    XYSCAN(); // XYSCAN
    Push(0x1388);
    Push(pp_KEYTIME); // KEYTIME
    _2_at_(); // 2@
    Push(pp_LKEYTIM); // LKEYTIM
    _2_at_(); // 2@
    D_dash_(); // D-
    Pop(); // DROP
    _slash_(); // /
    Push(5);
    MAX(); // MAX
    Push(0x00c8);
    MIN(); // MIN
    a = Pop(); // >R
    Push(Pop() * a); //  I *
    SWAP(); // SWAP
    Push(Pop() * a); //  R> *
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      GetColor(GREY1);
      StoreCOLOR(); // !COLOR
      WF2A7(); // WF2A7
      WF233(); // WF233
      WF42F(); // WF42F
      Push(Pop() + Read16(pp_YABS)); //  YABS @ +
      Push(0);
      MAX(); // MAX
      Push(0x03bf);
      MIN(); // MIN
      Push(pp_YABS); // YABS
      Store_2(); // !_2
      Push(Pop() + Read16(pp_XABS)); //  XABS @ +
      Push(0);
      MAX(); // MAX
      Push(0x08ff);
      MIN(); // MIN
      Push(pp_XABS); // XABS
      Store_2(); // !_2
      WF425(); // WF425
      WF176(); // WF176
      WF2A7(); // WF2A7
      WF233(); // WF233
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  Push(Read16(pp_XABS)); // XABS @
  Push(pp_WF22B); // WF22B
  Store_2(); // !_2
  Push(Read16(pp_YABS)); // YABS @
  Push(pp_WF22F); // WF22F
  Store_2(); // !_2
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}


// ================================================
// 0xf4e7: WORD '.MERCATOR' codep=0x224c wordp=0xf4f5
// ================================================
// entry

void DrawMERCATOR() // .MERCATOR
{
  Push(4);
  Push(pp__n_AUX); // #AUX
  Store_2(); // !_2
  WF31B(); // WF31B
  _gt_DISPLA(); // >DISPLA
  WF17E(); // WF17E
  WF1E1(); // WF1E1
  Push(0x0060);
  Push(pp_XLLDEST); // XLLDEST
  Store_2(); // !_2
  Push(0x0090);
  Push(pp_YLLDEST); // YLLDEST
  Store_2(); // !_2
  Push(0x9199); // '.1X2CEL'
  Push(pp__i__dot_CELL); // '.CELL
  Store_2(); // !_2
  Push(0x6a5a); // 'MERCATO'
  SETLARR(); // SETLARR
  FULLARR(); // FULLARR
  SETREGI(); // SETREGI
  DrawREGION(); // .REGION
  Push(Read16(pp_CONTEXT_3)==0?1:0); // CONTEXT_3 @ 0=
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    WF2A7(); // WF2A7
    WF233(); // WF233
  }
  CTINIT(); // CTINIT
}


// ================================================
// 0xf53b: WORD 'GETSITE_2' codep=0x224c wordp=0xf547
// ================================================
// entry

void GETSITE_2() // GETSITE_2
{
  Push(!(Read16(pp__n_AUX)==4?1:0)); // #AUX @ 4 = NOT
  if (Pop() != 0)
  {
    DrawMERCATOR(); // .MERCATOR
  }
  GETSITE_1(); // GETSITE_1
}

// 0xf55b: db 0x53 0x49 0x54 0x45 0x2d 0x00 'SITE- '

