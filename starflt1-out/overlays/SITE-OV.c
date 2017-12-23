// ====== OVERLAY 'SITE-OV' ======
// store offset = 0xee00
// overlay size   = 0x0760

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//            WLON  codep:0x1d29 parp:0xee1d size:0x0004 C-string:'WLON'
//            ELON  codep:0x1d29 parp:0xee2a size:0x0004 C-string:'ELON'
//            NLAT  codep:0x1d29 parp:0xee37 size:0x0004 C-string:'NLAT'
//            SLAT  codep:0x1d29 parp:0xee44 size:0x0004 C-string:'SLAT'
//         LTLNBLT  codep:0x1d29 parp:0xee54 size:0x000c C-string:'LTLNBLT'
//       .LATFRAME  codep:0x224c parp:0xee6e size:0x0063 C-string:'DrawLATFRAME'
//      UNK_0xeed3  codep:0x224c parp:0xeed3 size:0x0048 C-string:'UNK_0xeed3'
//      UNK_0xef1d  codep:0x1d29 parp:0xef1d size:0x0002 C-string:'UNK_0xef1d'
//            .LON  codep:0x224c parp:0xef28 size:0x0072 C-string:'DrawLON'
//      UNK_0xef9c  codep:0x1d29 parp:0xef9c size:0x0002 C-string:'UNK_0xef9c'
//      UNK_0xefa0  codep:0x224c parp:0xefa0 size:0x0072 C-string:'UNK_0xefa0'
//      UNK_0xf014  codep:0x224c parp:0xf014 size:0x002e C-string:'UNK_0xf014'
//       (|REGION)  codep:0xf050 parp:0xf050 size:0x0068 C-string:'_ro__v_REGION_rc_'
//            |EGA  codep:0xf0c1 parp:0xf0c1 size:0x0034 C-string:'_v_EGA'
//         |REGION  codep:0x224c parp:0xf101 size:0x0016 C-string:'_v_REGION'
//      UNK_0xf119  codep:0x224c parp:0xf119 size:0x0006 C-string:'UNK_0xf119'
//      UNK_0xf121  codep:0x224c parp:0xf121 size:0x000c C-string:'UNK_0xf121'
//      UNK_0xf12f  codep:0x224c parp:0xf12f size:0x0028 C-string:'UNK_0xf12f'
//      UNK_0xf159  codep:0x224c parp:0xf159 size:0x0026 C-string:'UNK_0xf159'
//      UNK_0xf181  codep:0x224c parp:0xf181 size:0x0042 C-string:'UNK_0xf181'
//          >XHAIR  codep:0x224c parp:0xf1ce size:0x003c C-string:'_gt_XHAIR'
//          <XHAIR  codep:0x224c parp:0xf215 size:0x0022 C-string:'_st_XHAIR'
//      UNK_0xf239  codep:0x224c parp:0xf239 size:0x0026 C-string:'UNK_0xf239'
//      UNK_0xf261  codep:0x1d29 parp:0xf261 size:0x0029 C-string:'UNK_0xf261'
//      UNK_0xf28c  codep:0x1d29 parp:0xf28c size:0x0002 C-string:'UNK_0xf28c'
//      UNK_0xf290  codep:0x224c parp:0xf290 size:0x007f C-string:'UNK_0xf290'
//      UNK_0xf311  codep:0x224c parp:0xf311 size:0x0076 C-string:'UNK_0xf311'
//      UNK_0xf389  codep:0x224c parp:0xf389 size:0x007a C-string:'UNK_0xf389'
//      UNK_0xf405  codep:0x224c parp:0xf405 size:0x0012 C-string:'UNK_0xf405'
//       GETSITE_1  codep:0x224c parp:0xf423 size:0x009e C-string:'GETSITE_1'
//       .MERCATOR  codep:0x224c parp:0xf4cf size:0x005c C-string:'DrawMERCATOR'
//       GETSITE_2  codep:0x224c parp:0xf537 size:0x0000 C-string:'GETSITE_2'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_HBUF_dash_SEG; // HBUF-SEG
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp__i__dot_CELL; // '.CELL
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_LKEYTIM; // LKEYTIM
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_CMAP; // CMAP
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern Color WHITE; // WHITE
extern IFieldType INST_dash_X; // INST-X
void COUNT(); // COUNT
void _star__slash_(); // */
void MAX(); // MAX
void MIN(); // MIN
void Draw(); // .
void D_dot_R(); // D.R
void MS(); // MS
void D_dash_(); // D-
void D0_eq_(); // D0=
void WITHIN(); // WITHIN
void SETLARRAY(); // SETLARRAY
void FULLARRAY(); // FULLARRAY
void SETREGION(); // SETREGION
void Store_3(); // !_3
void _plus__ex_(); // +!
void StoreD(); // D!
void OFF(); // OFF
void FILL_1(); // FILL_1
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void IsCHILD(); // ?CHILD
void ICLOSE(); // ICLOSE
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void StoreCOLOR(); // !COLOR
void _gt_DISPLAY(); // >DISPLAY
void BLT(); // BLT
void DrawREGION_plus_(); // .REGION+
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void CURSORSPACE(); // CURSORSPACE
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _st_(); // <
void _0_st_(); // 0<
void GetDS(); // @DS
void LPLOT(); // LPLOT
void LLINE(); // LLINE
void _ro__v_REGION_rc_(); // (|REGION)
void _v_EGA(); // |EGA


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WLON = 0xee1d; // WLON size: 4
// {0x6b, 0x8c, 0x00, 0xf5}

const unsigned short int pp_ELON = 0xee2a; // ELON size: 4
// {0x39, 0xf4, 0x00, 0x0f}

const unsigned short int pp_NLAT = 0xee37; // NLAT size: 4
// {0xb9, 0x9d, 0x00, 0x90}

const unsigned short int pp_SLAT = 0xee44; // SLAT size: 4
// {0xf1, 0x78, 0x00, 0xe0}

const unsigned short int pp_LTLNBLT = 0xee54; // LTLNBLT size: 12
// {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff}

const unsigned short int pp_UNK_0xef1d = 0xef1d; // UNK_0xef1d size: 2
// {0x80, 0x04}

const unsigned short int pp_UNK_0xef9c = 0xef9c; // UNK_0xef9c size: 2
// {0xe0, 0x01}

const unsigned short int pp_UNK_0xf261 = 0xf261; // UNK_0xf261 size: 41
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x72, 0x66, 0x67, 0x32, 0x32, 0x73, 0x65, 0x70, 0x38, 0x37, 0x29, 0x22, 0x14, 0x38, 0x32, 0x34, 0x15, 0x00, 0x14, 0x22, 0x16, 0x00, 0x14, 0x22, 0x17, 0x00, 0x14, 0x22, 0x18, 0x00, 0x14}

const unsigned short int pp_UNK_0xf28c = 0xf28c; // UNK_0xf28c size: 2
// {0xa4, 0x4a}




// 0xee12: db 0x75 0x00 'u '

// ================================================
// 0xee14: WORD 'WLON' codep=0x1d29 parp=0xee1d
// ================================================
// 0xee1d: db 0x6b 0x8c 0x00 0xf5 'k   '

// ================================================
// 0xee21: WORD 'ELON' codep=0x1d29 parp=0xee2a
// ================================================
// 0xee2a: db 0x39 0xf4 0x00 0x0f '9   '

// ================================================
// 0xee2e: WORD 'NLAT' codep=0x1d29 parp=0xee37
// ================================================
// 0xee37: db 0xb9 0x9d 0x00 0x90 '    '

// ================================================
// 0xee3b: WORD 'SLAT' codep=0x1d29 parp=0xee44
// ================================================
// 0xee44: db 0xf1 0x78 0x00 0xe0 ' x  '

// ================================================
// 0xee48: WORD 'LTLNBLT' codep=0x1d29 parp=0xee54
// ================================================
// 0xee54: db 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff '            '

// ================================================
// 0xee60: WORD '.LATFRAME' codep=0x224c parp=0xee6e
// ================================================

void DrawLATFRAME() // .LATFRAME
{
  Push(0x00c5);
  Push(0x0053);
  Push(0x007e);
  Push(0x009c);
  SetColor(GREY1);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  CTINIT(); // CTINIT
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x0066);
  Push(0x008a);
  POS_dot_(); // POS.
  PRINT("LAT", 3); // (.")
  Push(0x007d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("LONG", 4); // (.")
  Push(0x00c1);
  Push(0x005f);
  Push(0x008e);
  Push(0x0090);
  SetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0x00c1);
  Push(0x0093);
  Push(0x008e);
  Push(0x0098);
  SetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xeed1: WORD 'UNK_0xeed3' codep=0x224c parp=0xeed3 params=0 returns=0
// ================================================

void UNK_0xeed3() // UNK_0xeed3
{
  unsigned short int i, imax;
  GetCRS(); // @CRS
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(4);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(6);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(8);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_CMAP); // CMAP
    Push(i); // I
    Push(8);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    StoreCOLOR(); // !COLOR
    Push(0x0094);
    Push(0x0095);
    Push(i); // I
    Push(6);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    POS_dot_(); // POS.
    BLT(); // BLT
    i++;
  } while(i<imax); // (LOOP)

  StoreCRS(); // !CRS
}


// ================================================
// 0xef1b: WORD 'UNK_0xef1d' codep=0x1d29 parp=0xef1d
// ================================================
// 0xef1d: db 0x80 0x04 '  '

// ================================================
// 0xef1f: WORD '.LON' codep=0x224c parp=0xef28 params=1 returns=0
// ================================================

void DrawLON() // .LON
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x0480);
  _dash_(); // -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x007c);
  Push(0x0083);
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); // NEGATE
    Push(0);
    Push(3);
    D_dot_R(); // D.R
    Push(pp_WLON); // WLON
    Push(pp_ABLT); // ABLT
    Store_3(); // !_3
    Push(5);
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    BLT(); // BLT
    return;
  }
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
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
  Push(pp_ELON); // ELON
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(5);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xef9a: WORD 'UNK_0xef9c' codep=0x1d29 parp=0xef9c
// ================================================
// 0xef9c: db 0xe0 0x01 '  '

// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x224c parp=0xefa0 params=1 returns=0
// ================================================

void UNK_0xefa0() // UNK_0xefa0
{
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x01e0);
  _dash_(); // -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x0066);
  Push(0x0083);
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); // NEGATE
    Push(0);
    Push(2);
    D_dot_R(); // D.R
    Push(pp_SLAT); // SLAT
    Push(pp_ABLT); // ABLT
    Store_3(); // !_3
    Push(4);
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    BLT(); // BLT
    return;
  }
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
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
  Push(pp_NLAT); // NLAT
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(4);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xf012: WORD 'UNK_0xf014' codep=0x224c parp=0xf014 params=0 returns=0
// ================================================

void UNK_0xf014() // UNK_0xf014
{
  Push(pp_PLHI); // PLHI
  Push(Read16(Pop())); // @
  Push(-1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0x01e0);
    Push(pp_UNK_0xef9c); // UNK_0xef9c
    Store_3(); // !_3
    Push(0x0480);
    Push(pp_UNK_0xef1d); // UNK_0xef1d
    Store_3(); // !_3
  }
  Push(pp_UNK_0xef1d); // UNK_0xef1d
  Push(Read16(Pop())); // @
  Push(pp_XABS); // XABS
  Store_3(); // !_3
  Push(pp_UNK_0xef9c); // UNK_0xef9c
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Store_3(); // !_3
}


// ================================================
// 0xf042: WORD '(|REGION)' codep=0xf050 parp=0xf050
// ================================================
// 0xf050: pop    word ptr [561C]
// 0xf054: pop    cx
// 0xf055: push   es
// 0xf056: mov    es,cx
// 0xf058: push   si
// 0xf059: push   di
// 0xf05a: push   bp
// 0xf05b: push   ds
// 0xf05c: mov    dx,[5892]
// 0xf060: shr    dx,1
// 0xf062: shr    dx,1
// 0xf064: inc    dx
// 0xf065: inc    dx
// 0xf066: mov    bp,[586E]
// 0xf06a: shr    bp,1
// 0xf06c: xor    di,di
// 0xf06e: mov    ax,[5887]
// 0xf072: mov    cx,ax
// 0xf074: mov    ax,cx
// 0xf076: pop    ds
// 0xf077: push   ds
// 0xf078: mov    bx,[5863]
// 0xf07c: sub    bx,cx
// 0xf07e: inc    bx
// 0xf07f: shl    bx,1
// 0xf081: add    bx,[563A]
// 0xf085: mov    si,[bx]
// 0xf087: add    si,bp
// 0xf089: mov    cx,dx
// 0xf08b: mov    bx,[561C]
// 0xf08f: push   word ptr [5648]
// 0xf093: pop    ds
// 0xf094: or     bx,bx
// 0xf096: jz     F09E
// 0xf098: push   ds
// 0xf099: push   es
// 0xf09a: pop    ds
// 0xf09b: pop    es
// 0xf09c: xchg   si,di
// 0xf09e: repz   
// 0xf09f: movsw
// 0xf0a0: mov    cx,ax
// 0xf0a2: or     bx,bx
// 0xf0a4: jz     F0AC
// 0xf0a6: push   ds
// 0xf0a7: push   es
// 0xf0a8: pop    ds
// 0xf0a9: pop    es
// 0xf0aa: xchg   si,di
// 0xf0ac: loop   F074
// 0xf0ae: pop    ds
// 0xf0af: pop    bp
// 0xf0b0: pop    di
// 0xf0b1: pop    si
// 0xf0b2: pop    es
// 0xf0b3: lodsw
// 0xf0b4: mov    bx,ax
// 0xf0b6: jmp    word ptr [bx]

// ================================================
// 0xf0b8: WORD '|EGA' codep=0xf0c1 parp=0xf0c1
// ================================================
// 0xf0c1: pop    cx
// 0xf0c2: push   ds
// 0xf0c3: push   es
// 0xf0c4: push   di
// 0xf0c5: push   si
// 0xf0c6: mov    ax,[55E6]
// 0xf0ca: mov    dx,[55D8]
// 0xf0ce: mov    bx,00C5
// 0xf0d1: shl    bx,1
// 0xf0d3: add    bx,[563A]
// 0xf0d7: mov    si,[bx]
// 0xf0d9: mov    di,si
// 0xf0db: test   cx,0001
// 0xf0df: jnz    F0E2
// 0xf0e1: xchg   ax,dx
// 0xf0e2: mov    es,ax
// 0xf0e4: mov    ds,dx
// 0xf0e6: mov    cx,0A28
// 0xf0e9: call   8E32
// 0xf0ec: pop    si
// 0xf0ed: pop    di
// 0xf0ee: pop    es
// 0xf0ef: pop    ds
// 0xf0f0: lodsw
// 0xf0f1: mov    bx,ax
// 0xf0f3: jmp    word ptr [bx]

// ================================================
// 0xf0f5: WORD '|REGION' codep=0x224c parp=0xf101
// ================================================

void _v_REGION() // |REGION
{
  Push(pp_IsEGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    SWAP(); // SWAP
    Pop(); // DROP
    _v_EGA(); // |EGA
    return;
  }
  _ro__v_REGION_rc_(); // (|REGION)
}


// ================================================
// 0xf117: WORD 'UNK_0xf119' codep=0x224c parp=0xf119 params=0 returns=1
// ================================================

void UNK_0xf119() // UNK_0xf119
{
  Push(pp_HBUF_dash_SEG); // HBUF-SEG
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf11f: WORD 'UNK_0xf121' codep=0x224c parp=0xf121 params=0 returns=1
// ================================================

void UNK_0xf121() // UNK_0xf121
{
  Push(pp_HBUF_dash_SEG); // HBUF-SEG
  Push(Read16(Pop())); // @
  Push(0x0014);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf12d: WORD 'UNK_0xf12f' codep=0x224c parp=0xf12f params=0 returns=1
// ================================================

void UNK_0xf12f() // UNK_0xf12f
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
  Store_3(); // !_3
  Push(2);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
}


// ================================================
// 0xf157: WORD 'UNK_0xf159' codep=0x224c parp=0xf159 params=0 returns=1
// ================================================

void UNK_0xf159() // UNK_0xf159
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x0030);
  _slash_(); // /
  Push(0x0060);
  Push(Pop() + Pop()); // +
  Push(0x00bf);
  POS_dot_(); // POS.
  Push(1);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(0x0030);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
}


// ================================================
// 0xf17f: WORD 'UNK_0xf181' codep=0x224c parp=0xf181 params=0 returns=2
// ================================================

void UNK_0xf181() // UNK_0xf181
{
  unsigned short int a;
  UNK_0xf159(); // UNK_0xf159
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(0x00c1);
  OVER(); // OVER
  Push(0x0091);
  LLINE(); // LLINE
  UNK_0xf12f(); // UNK_0xf12f
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(0x005f);
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(0x0090);
  SWAP(); // SWAP
  LLINE(); // LLINE
  Push(a); // R>
  Push(Pop()+1); // 1+
  Push(0x005f);
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(0x0090);
  SWAP(); // SWAP
  LLINE(); // LLINE
}


// ================================================
// 0xf1c3: WORD '>XHAIR' codep=0x224c parp=0xf1ce
// ================================================

void _gt_XHAIR() // >XHAIR
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(pp_LTLNBLT); // LTLNBLT
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(pp_IsEGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(0);
    _v_EGA(); // |EGA
    UNK_0xf181(); // UNK_0xf181
    return;
  }
  UNK_0xf12f(); // UNK_0xf12f
  UNK_0xf119(); // UNK_0xf119
  Push(0);
  _v_REGION(); // |REGION
  BLT(); // BLT
  UNK_0xf159(); // UNK_0xf159
  UNK_0xf121(); // UNK_0xf121
  Push(0);
  _v_REGION(); // |REGION
  BLT(); // BLT
}


// ================================================
// 0xf20a: WORD '<XHAIR' codep=0x224c parp=0xf215
// ================================================

void _st_XHAIR() // <XHAIR
{
  Push(pp_IsEGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(1);
    _v_EGA(); // |EGA
    return;
  }
  UNK_0xf159(); // UNK_0xf159
  UNK_0xf121(); // UNK_0xf121
  Push(1);
  _v_REGION(); // |REGION
  UNK_0xf12f(); // UNK_0xf12f
  UNK_0xf119(); // UNK_0xf119
  Push(1);
  _v_REGION(); // |REGION
}


// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239 params=2 returns=2
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  SWAP(); // SWAP
  Push(0x0030);
  Push(0x0900);
  _star__slash_(); // */
  Push(0x0060);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x0030);
  Push(0x03c0);
  _star__slash_(); // */
  Push(0x0090);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf25f: WORD 'UNK_0xf261' codep=0x1d29 parp=0xf261
// ================================================
// 0xf261: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x20 0x72 0x66 0x67 0x32 0x32 0x73 0x65 0x70 0x38 0x37 0x29 0x22 0x14 0x38 0x32 0x34 0x15 0x00 0x14 0x22 0x16 0x00 0x14 0x22 0x17 0x00 0x14 0x22 0x18 0x00 0x14 ':  ALLOT  rfg22sep87)" 824   "   "   "   '

// ================================================
// 0xf28a: WORD 'UNK_0xf28c' codep=0x1d29 parp=0xf28c
// ================================================
// 0xf28c: db 0xa4 0x4a ' J'

// ================================================
// 0xf28e: WORD 'UNK_0xf290' codep=0x224c parp=0xf290
// ================================================

void UNK_0xf290() // UNK_0xf290
{
  unsigned short int i, imax, j, jmax, k, kmax;
  CTINIT(); // CTINIT
  UNK_0x3f3b("THE RED CYLINDER IS FLASHING");
  DrawTTY(); // .TTY
  Push(0x0050);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0010);
    Push(0x000c);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(Pop()<<4); // 16*
      Push(j); // I
      Push(Pop() + Pop()); // +
      Push(Read16(regsp)); // DUP
      Push(0x00fe);
      _st_(); // <
      Push(Pop() * Pop()); // *
      StoreCOLOR(); // !COLOR
      Push(pp_UNK_0xf261); // UNK_0xf261
      COUNT(); // COUNT
      Push(4);
      Push(Pop() * Pop()); // *
      OVER(); // OVER
      Push(Pop() + Pop()); // +
      SWAP(); // SWAP

      k = Pop();
      kmax = Pop();
      do // (DO)
      {
        Push(k); // I
        _2_at_(); // 2@
        _2DUP(); // 2DUP
        LPLOT(); // LPLOT
        Push(Pop()-1); // 1-
        LPLOT(); // LPLOT
        Push(4);
        int step = Pop();
        k += step;
        if (((step>=0) && (k>=kmax)) || ((step<0) && (k<=kmax))) break;
      } while(1); // (+LOOP)

      Push(5);
      MS(); // MS
      j++;
    } while(j<jmax); // (LOOP)

    Push(0x0014);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf30f: WORD 'UNK_0xf311' codep=0x224c parp=0xf311
// ================================================

void UNK_0xf311() // UNK_0xf311
{
  unsigned short int i, imax, j, jmax;
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0017);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(pp_UNK_0xf28c); // UNK_0xf28c
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(3);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(5);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x05a0);
  Push(0x02da);
  UNK_0xf239(); // UNK_0xf239
  SWAP(); // SWAP
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
  POS_dot_(); // POS.
  Push(0x0050);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0010);
    Push(0x000c);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(Pop()<<4); // 16*
      Push(j); // I
      Push(Pop() + Pop()); // +
      Push(Read16(regsp)); // DUP
      Push(0x00fe);
      _st_(); // <
      Push(Pop() * Pop()); // *
      StoreCOLOR(); // !COLOR
      BLT(); // BLT
      Push(5);
      MS(); // MS
      j++;
    } while(j<jmax); // (LOOP)

    Push(0x0014);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf387: WORD 'UNK_0xf389' codep=0x224c parp=0xf389
// ================================================

void UNK_0xf389() // UNK_0xf389
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0017);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  IsCHILD(); // ?CHILD
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(pp_UNK_0xf261); // UNK_0xf261
    Push(0x0029);
    Push(0);
    FILL_1(); // FILL_1
    do
    {
      GetINST_dash_CLASS(); // @INST-CLASS
      Push(0x001b);
      Push(0x001d);
      WITHIN(); // WITHIN
      Push(0x63ef+INST_dash_X.offset); // IFIELD
      _2_at_(); // 2@
      D0_eq_(); // D0=
      if (Pop() == 0) Push(1); else Push(0); // NOT
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        Push(0x63ef+INST_dash_X.offset); // IFIELD
        _2_at_(); // 2@
        SWAP(); // SWAP
        UNK_0xf239(); // UNK_0xf239
        Push(pp_UNK_0xf261); // UNK_0xf261
        COUNT(); // COUNT
        Push(4);
        Push(Pop() * Pop()); // *
        Push(Pop() + Pop()); // +
        StoreD(); // D!
        Push(1);
        Push(pp_UNK_0xf261); // UNK_0xf261
        _plus__ex_(); // +!
      }
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
      Push(pp_UNK_0xf261); // UNK_0xf261
      Push(Read8(Pop())&0xFF); // C@
      Push(0x000a);
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
    CDROP(); // CDROP
    Push(pp_UNK_0xf261); // UNK_0xf261
    Push(Read8(Pop())&0xFF); // C@
    if (Pop() != 0)
    {
      UNK_0xf290(); // UNK_0xf290
    }
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf403: WORD 'UNK_0xf405' codep=0x224c parp=0xf405 params=10 returns=1
// ================================================

void UNK_0xf405() // UNK_0xf405
{
  Push(0xbdd8); // probable 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf417: WORD 'GETSITE_1' codep=0x224c parp=0xf423
// ================================================

void GETSITE_1() // GETSITE_1
{
  unsigned short int a;
  Push(8);
  Push(pp__n_AUX); // #AUX
  Store_3(); // !_3
  _gt_DISPLAY(); // >DISPLAY
  UNK_0xf014(); // UNK_0xf014
  CTINIT(); // CTINIT
  UNK_0xefa0(); // UNK_0xefa0
  DrawLON(); // .LON
  _gt_XHAIR(); // >XHAIR
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
    Push(a); // I
    Push(Pop() * Pop()); // *
    SWAP(); // SWAP
    Push(a); // R>
    Push(Pop() * Pop()); // *
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      SetColor(GREY1);
      StoreCOLOR(); // !COLOR
      UNK_0xefa0(); // UNK_0xefa0
      DrawLON(); // .LON
      _st_XHAIR(); // <XHAIR
      Push(pp_YABS); // YABS
      Push(Read16(Pop())); // @
      Push(Pop() + Pop()); // +
      Push(0);
      MAX(); // MAX
      Push(0x03bf);
      MIN(); // MIN
      Push(pp_YABS); // YABS
      Store_3(); // !_3
      Push(pp_XABS); // XABS
      Push(Read16(Pop())); // @
      Push(Pop() + Pop()); // +
      Push(0);
      MAX(); // MAX
      Push(0x08ff);
      MIN(); // MIN
      Push(pp_XABS); // XABS
      Store_3(); // !_3
      _gt_XHAIR(); // >XHAIR
      SetColor(WHITE);
      StoreCOLOR(); // !COLOR
      UNK_0xefa0(); // UNK_0xefa0
      DrawLON(); // .LON
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xef1d); // UNK_0xef1d
  Store_3(); // !_3
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xef9c); // UNK_0xef9c
  Store_3(); // !_3
}


// ================================================
// 0xf4c1: WORD '.MERCATOR' codep=0x224c parp=0xf4cf
// ================================================
// entry

void DrawMERCATOR() // .MERCATOR
{
  Push(4);
  Push(pp__n_AUX); // #AUX
  Store_3(); // !_3
  UNK_0xf014(); // UNK_0xf014
  _gt_DISPLAY(); // >DISPLAY
  DrawLATFRAME(); // .LATFRAME
  UNK_0xeed3(); // UNK_0xeed3
  Push(0x0060);
  Push(pp_XLLDEST); // XLLDEST
  Store_3(); // !_3
  Push(0x0090);
  Push(pp_YLLDEST); // YLLDEST
  Store_3(); // !_3
  Push(0x9880); // probable '.1X2CELL'
  Push(pp__i__dot_CELL); // '.CELL
  Store_3(); // !_3
  Push(0x6a99); // probable 'MERCATOR'
  SETLARRAY(); // SETLARRAY
  FULLARRAY(); // FULLARRAY
  SETREGION(); // SETREGION
  DrawREGION_plus_(); // .REGION+
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    UNK_0xefa0(); // UNK_0xefa0
    DrawLON(); // .LON
  }
  Push(0x000b);
  UNK_0xf405(); // UNK_0xf405
  if (Pop() != 0)
  {
    UNK_0xf389(); // UNK_0xf389
  }
  Push(2);
  UNK_0xf405(); // UNK_0xf405
  if (Pop() != 0)
  {
    UNK_0xf311(); // UNK_0xf311
  }
  CTINIT(); // CTINIT
}


// ================================================
// 0xf52b: WORD 'GETSITE_2' codep=0x224c parp=0xf537
// ================================================
// entry

void GETSITE_2() // GETSITE_2
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(4);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    DrawMERCATOR(); // .MERCATOR
  }
  GETSITE_1(); // GETSITE_1
}

// 0xf54b: db 0x53 0x49 0x54 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SITE-VOC_____________ '

