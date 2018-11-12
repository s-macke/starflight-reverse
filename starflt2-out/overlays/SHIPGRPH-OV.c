// ====== OVERLAY 'SHIPGRPH-OV' ======
// store offset = 0xecb0
// overlay size   = 0x08b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WECC6  codep:0x224c wordp:0xecc6 size:0x000e C-string:'WECC6'
//           WECD6  codep:0x224c wordp:0xecd6 size:0x0009 C-string:'WECD6'
//           WECE1  codep:0x224c wordp:0xece1 size:0x000d C-string:'WECE1'
//           WECF0  codep:0x224c wordp:0xecf0 size:0x0009 C-string:'WECF0'
//           WECFB  codep:0x224c wordp:0xecfb size:0x000e C-string:'WECFB'
//          A>TEXT  codep:0x4b3b wordp:0xed14 size:0x0018 C-string:'A_gt_TEXT'
//           WED2E  codep:0x7420 wordp:0xed2e size:0x0003 C-string:'WED2E'
//           WED33  codep:0x7420 wordp:0xed33 size:0x0003 C-string:'WED33'
//           WED38  codep:0x7420 wordp:0xed38 size:0x0003 C-string:'WED38'
//           WED3D  codep:0x7420 wordp:0xed3d size:0x0003 C-string:'WED3D'
//           WED42  codep:0x7420 wordp:0xed42 size:0x0003 C-string:'WED42'
//           WED47  codep:0x7420 wordp:0xed47 size:0x0003 C-string:'WED47'
//           WED4C  codep:0x7420 wordp:0xed4c size:0x0003 C-string:'WED4C'
//           WED51  codep:0x7420 wordp:0xed51 size:0x0003 C-string:'WED51'
//           WED56  codep:0x7420 wordp:0xed56 size:0x0003 C-string:'WED56'
//           WED5B  codep:0x7420 wordp:0xed5b size:0x0003 C-string:'WED5B'
//           WED60  codep:0x7420 wordp:0xed60 size:0x0003 C-string:'WED60'
//           WED65  codep:0x224c wordp:0xed65 size:0x000a C-string:'WED65'
//           WED71  codep:0x1d29 wordp:0xed71 size:0x0044 C-string:'WED71'
//           WEDB7  codep:0x1d29 wordp:0xedb7 size:0x0044 C-string:'WEDB7'
//           WEDFD  codep:0x1d29 wordp:0xedfd size:0x0032 C-string:'WEDFD'
//           WEE31  codep:0x1d29 wordp:0xee31 size:0x0022 C-string:'WEE31'
//           WEE55  codep:0x1d29 wordp:0xee55 size:0x0002 C-string:'WEE55'
//           WEE59  codep:0x1d29 wordp:0xee59 size:0x0006 C-string:'WEE59'
//         (.MASS)  codep:0x224c wordp:0xee6b size:0x008c C-string:'_ro__dot_MASS_rc_'
//          (.ACC)  codep:0x224c wordp:0xef02 size:0x0036 C-string:'_ro__dot_ACC_rc_'
//           WEF3A  codep:0x224c wordp:0xef3a size:0x0074 C-string:'WEF3A'
//           WEFB0  codep:0x224c wordp:0xefb0 size:0x0082 C-string:'WEFB0'
//           WF034  codep:0x224c wordp:0xf034 size:0x0010 C-string:'WF034'
//           WF046  codep:0x224c wordp:0xf046 size:0x0070 C-string:'WF046'
//           WF0B8  codep:0x1d29 wordp:0xf0b8 size:0x0010 C-string:'WF0B8'
//           WF0CA  codep:0x1d29 wordp:0xf0ca size:0x0010 C-string:'WF0CA'
//           WF0DC  codep:0x1d29 wordp:0xf0dc size:0x0002 C-string:'WF0DC'
//           WF0E0  codep:0x224c wordp:0xf0e0 size:0x0024 C-string:'WF0E0'
//           WF106  codep:0x224c wordp:0xf106 size:0x0012 C-string:'WF106'
//         (.PODS)  codep:0x224c wordp:0xf124 size:0x0056 C-string:'_ro__dot_PODS_rc_'
//           WF17C  codep:0x1d29 wordp:0xf17c size:0x0004 C-string:'WF17C'
//           WF182  codep:0x1d29 wordp:0xf182 size:0x0004 C-string:'WF182'
//           WF188  codep:0x1d29 wordp:0xf188 size:0x0008 C-string:'WF188'
//           WF192  codep:0x224c wordp:0xf192 size:0x0040 C-string:'WF192'
//           WF1D4  codep:0x224c wordp:0xf1d4 size:0x0036 C-string:'WF1D4'
//         (.SHIP)  codep:0x224c wordp:0xf216 size:0x0016 C-string:'_ro__dot_SHIP_rc_'
//         (BALANC  codep:0x224c wordp:0xf238 size:0x003d C-string:'_ro_BALANC'
//           WF277  codep:0x224c wordp:0xf277 size:0x00f1 C-string:'WF277'
//           WF36A  codep:0x224c wordp:0xf36a size:0x000a C-string:'WF36A'
//           WF376  codep:0x224c wordp:0xf376 size:0x0100 C-string:'WF376'
//           WF478  codep:0x224c wordp:0xf478 size:0x00d1 C-string:'WF478'
//         (.CONFI  codep:0x224c wordp:0xf555 size:0x0000 C-string:'_ro__dot_CONFI'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
void Draw(); // .
void DrawR(); // .R
void D_dot_(); // D.
void NOP(); // NOP
void _2OVER(); // 2OVER
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _099(); // 099
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void LLINE(); // LLINE
void _gt_3FONT(); // >3FONT
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void _0MESS(); // 0MESS
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_MOD(); // /MOD
void _dash_(); // -
void _0_gt_(); // 0>
void GetDS(); // @DS
void _plus_BIT(); // +BIT
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WED71 = 0xed71; // WED71 size: 68
// {0x00, 0x7c, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0xff, 0x7f, 0x00, 0xf8, 0xff, 0x7f, 0x00, 0xfc, 0x86, 0x61, 0x00, 0x1e, 0xff, 0x7f, 0x00, 0xff, 0xff, 0x7f, 0x80, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x07, 0xfc, 0xff, 0x3f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xfe, 0x3f}

const unsigned short int pp_WEDB7 = 0xedb7; // WEDB7 size: 68
// {0x00, 0x00, 0xfe, 0x3f, 0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xfc, 0x3f, 0x3f, 0x00, 0xfc, 0xff, 0xff, 0x07, 0xfc, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0x80, 0xff, 0xff, 0x7f, 0x00, 0xff, 0x86, 0x61, 0x00, 0x1e, 0xff, 0x7f, 0x00, 0xfc, 0xff, 0x7f, 0x00, 0xf8, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00}

const unsigned short int pp_WEDFD = 0xedfd; // WEDFD size: 50
// {0xfe, 0x7f, 0x00, 0x00, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0xfc, 0x7f, 0x00, 0x00, 0xfe, 0x00, 0x00}

const unsigned short int pp_WEE31 = 0xee31; // WEE31 size: 34
// {0x01, 0x1e, 0x1f, 0xf0, 0xdc, 0x83, 0xc3, 0x3c, 0x7c, 0xc6, 0xe3, 0x37, 0x3f, 0xff, 0xff, 0xf3, 0xf3, 0x3f, 0x3f, 0xff, 0x7e, 0xf3, 0xc3, 0x37, 0x63, 0x3c, 0x3d, 0xcc, 0xf8, 0xc1, 0x01, 0x1f, 0x00, 0xe0}

const unsigned short int pp_WEE55 = 0xee55; // WEE55 size: 2
// {0x00, 0xf0}

const unsigned short int pp_WEE59 = 0xee59; // WEE59 size: 6
// {0x00, 0x04, 0x04, 0x03, 0x03, 0x02}

const unsigned short int pp_WF0B8 = 0xf0b8; // WF0B8 size: 16
// {0x76, 0x76, 0x79, 0x79, 0x7c, 0x7c, 0x7f, 0x7f, 0x82, 0x82, 0x85, 0x85, 0x88, 0x88, 0x8b, 0x8b}

const unsigned short int pp_WF0CA = 0xf0ca; // WF0CA size: 16
// {0x50, 0x5a, 0x50, 0x5a, 0x51, 0x59, 0x51, 0x59, 0x51, 0x59, 0x51, 0x59, 0x51, 0x59, 0x51, 0x59}

const unsigned short int pp_WF0DC = 0xf0dc; // WF0DC size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF17C = 0xf17c; // WF17C size: 4
// {0x3f, 0x38, 0x00, 0xff}

const unsigned short int pp_WF182 = 0xf182; // WF182 size: 4
// {0x3f, 0xfc, 0x00, 0xce}

const unsigned short int pp_WF188 = 0xf188; // WF188 size: 8
// {0x78, 0x30, 0xf8, 0xff, 0xff, 0xf8, 0x30, 0x78}




// 0xecc2: db 0x8b 0x00 '  '

// ================================================
// 0xecc4: WORD 'WECC6' codep=0x224c wordp=0xecc6 params=0 returns=0
// ================================================

void WECC6() // WECC6
{
  PRINT("VERY POOR", 9); // (.")
}


// ================================================
// 0xecd4: WORD 'WECD6' codep=0x224c wordp=0xecd6 params=0 returns=0
// ================================================

void WECD6() // WECD6
{
  PRINT("POOR", 4); // (.")
}


// ================================================
// 0xecdf: WORD 'WECE1' codep=0x224c wordp=0xece1 params=0 returns=0
// ================================================

void WECE1() // WECE1
{
  PRINT("MODERATE", 8); // (.")
}


// ================================================
// 0xecee: WORD 'WECF0' codep=0x224c wordp=0xecf0 params=0 returns=0
// ================================================

void WECF0() // WECF0
{
  PRINT("GOOD", 4); // (.")
}


// ================================================
// 0xecf9: WORD 'WECFB' codep=0x224c wordp=0xecfb params=0 returns=0
// ================================================

void WECFB() // WECFB
{
  PRINT("EXCELLENT", 9); // (.")
}


// ================================================
// 0xed09: WORD 'A>TEXT' codep=0x4b3b wordp=0xed14
// ================================================

void A_gt_TEXT() // A>TEXT
{
  switch(Pop()) // A>TEXT
  {
  case 1:
    WECC6(); // WECC6
    break;
  case 2:
    WECD6(); // WECD6
    break;
  case 3:
    WECE1(); // WECE1
    break;
  case 4:
    WECF0(); // WECF0
    break;
  case 5:
    WECFB(); // WECFB
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed2c: WORD 'WED2E' codep=0x7420 wordp=0xed2e
// ================================================
IFieldType WED2E = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xed31: WORD 'WED33' codep=0x7420 wordp=0xed33
// ================================================
IFieldType WED33 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xed36: WORD 'WED38' codep=0x7420 wordp=0xed38
// ================================================
IFieldType WED38 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xed3b: WORD 'WED3D' codep=0x7420 wordp=0xed3d
// ================================================
IFieldType WED3D = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xed40: WORD 'WED42' codep=0x7420 wordp=0xed42
// ================================================
IFieldType WED42 = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xed45: WORD 'WED47' codep=0x7420 wordp=0xed47
// ================================================
IFieldType WED47 = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xed4a: WORD 'WED4C' codep=0x7420 wordp=0xed4c
// ================================================
IFieldType WED4C = {SHIPIDX, 0x25, 0x02};

// ================================================
// 0xed4f: WORD 'WED51' codep=0x7420 wordp=0xed51
// ================================================
IFieldType WED51 = {SHIPIDX, 0x27, 0x02};

// ================================================
// 0xed54: WORD 'WED56' codep=0x7420 wordp=0xed56
// ================================================
// orphan
IFieldType WED56 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xed59: WORD 'WED5B' codep=0x7420 wordp=0xed5b
// ================================================
IFieldType WED5B = {SHIPIDX, 0x56, 0x01};

// ================================================
// 0xed5e: WORD 'WED60' codep=0x7420 wordp=0xed60
// ================================================
IFieldType WED60 = {SHIPIDX, 0x57, 0x01};

// ================================================
// 0xed63: WORD 'WED65' codep=0x224c wordp=0xed65 params=1 returns=1
// ================================================

void WED65() // WED65
{
  Push((Read16(Pop() + 1)&0xFF) & 7); //  1+ C@ 7 AND
}


// ================================================
// 0xed6f: WORD 'WED71' codep=0x1d29 wordp=0xed71
// ================================================
// 0xed71: db 0x00 0x7c 0x00 0x00 0x80 0x7f 0x00 0x00 0xff 0x7f 0x00 0xf8 0xff 0x7f 0x00 0xfc 0x86 0x61 0x00 0x1e 0xff 0x7f 0x00 0xff 0xff 0x7f 0x80 0xff 0xff 0x7f 0xc0 0xff 0xff 0x7f 0xe0 0xff 0xff 0x7f 0xf0 0xff 0xff 0x7f 0xf8 0xff 0xff 0x7f 0xfc 0xff 0xff 0x07 0xfc 0xff 0x3f 0x00 0xfc 0xff 0x00 0x00 0xfc 0x3f 0x00 0x00 0xfc 0x1f 0x00 0x00 0xfe 0x3f ' |            a                           ?      ?       ?'

// ================================================
// 0xedb5: WORD 'WEDB7' codep=0x1d29 wordp=0xedb7
// ================================================
// 0xedb7: db 0x00 0x00 0xfe 0x3f 0x00 0x00 0xfc 0x1f 0x00 0x00 0xfc 0x3f 0x3f 0x00 0xfc 0xff 0xff 0x07 0xfc 0xff 0xff 0x7f 0xfc 0xff 0xff 0x7f 0xf8 0xff 0xff 0x7f 0xf0 0xff 0xff 0x7f 0xe0 0xff 0xff 0x7f 0xc0 0xff 0xff 0x7f 0x80 0xff 0xff 0x7f 0x00 0xff 0x86 0x61 0x00 0x1e 0xff 0x7f 0x00 0xfc 0xff 0x7f 0x00 0xf8 0x80 0x7f 0x00 0x00 0x00 0x7c 0x00 0x00 '   ?       ??                             a            |  '

// ================================================
// 0xedfb: WORD 'WEDFD' codep=0x1d29 wordp=0xedfd
// ================================================
// 0xedfd: db 0xfe 0x7f 0x00 0x00 0x7f 0x00 0xfc 0xff 0x00 0x00 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0x00 0xfc 0x7f 0x00 0x00 0xfe 0x00 0x00 '                                        '

// ================================================
// 0xee2f: WORD 'WEE31' codep=0x1d29 wordp=0xee31
// ================================================
// 0xee31: db 0x01 0x1e 0x1f 0xf0 0xdc 0x83 0xc3 0x3c 0x7c 0xc6 0xe3 0x37 0x3f 0xff 0xff 0xf3 0xf3 0x3f 0x3f 0xff 0x7e 0xf3 0xc3 0x37 0x63 0x3c 0x3d 0xcc 0xf8 0xc1 0x01 0x1f 0x00 0xe0 '       <|  7?    ?? ~  7c<=       '

// ================================================
// 0xee53: WORD 'WEE55' codep=0x1d29 wordp=0xee55
// ================================================
// 0xee55: db 0x00 0xf0 '  '

// ================================================
// 0xee57: WORD 'WEE59' codep=0x1d29 wordp=0xee59
// ================================================
// 0xee59: db 0x00 0x04 0x04 0x03 0x03 0x02 '      '

// ================================================
// 0xee5f: WORD '(.MASS)' codep=0x224c wordp=0xee6b
// ================================================
// entry

void _ro__dot_MASS_rc_() // (.MASS)
{
  Push(0x0032 + ((Read16(0x65e1+WED33.offset)==0?1:0)==0?1:0) * 0x0032); // 0x0032 WED33<IFIELD> @ 0= 0= 0x0032 * +
  Push(0x65e1+WED2E.offset); // WED2E<IFIELD>
  WED65(); // WED65
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Pop() * 9); //  9 *
  Push(Pop() + Pop()); // +
  Push(Read16(0x65e1+WED47.offset)); // WED47<IFIELD> @
  _plus_BIT(); // +BIT
  Push(Pop() * 0x000a); //  0x000a *
  Push(Pop() + Pop()); // +
  Push((Pop() + (Read16(0x65e1+WED60.offset)&0xFF) * 0x000a) + (Read16(0x65e1+WED5B.offset)&0xFF) * 0x000a); //  WED60<IFIELD> C@ 0x000a * + WED5B<IFIELD> C@ 0x000a * +
  Push(0x65e1+WED42.offset); // WED42<IFIELD>
  WED65(); // WED65
  _0_gt_(); // 0>
  Push(0x65e1+WED3D.offset); // WED3D<IFIELD>
  WED65(); // WED65
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Push(0x65e1+WED38.offset); // WED38<IFIELD>
  WED65(); // WED65
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Push(Pop() * 5); //  5 *
  Push(Pop() + Pop()); // +
  Push(0x65e1+WED51.offset); // WED51<IFIELD>
  Store_2(); // !_2
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(4);
  GetColor(BLACK);
  Push(0x0069);
  Push(0x0036);
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  SWAP(); // SWAP
  POS_dot_PXT(); // POS.PXT
  Push(Read16(0x65e1+WED51.offset)); // WED51<IFIELD> @
  Push(4);
  DrawR(); // .R
  StoreCRS(); // !CRS
}


// ================================================
// 0xeef7: WORD '(.ACC)' codep=0x224c wordp=0xef02
// ================================================
// entry

void _ro__dot_ACC_rc_() // (.ACC)
{
  Push(0x65e1+WED33.offset); // WED33<IFIELD>
  WED65(); // WED65
  Push(Read16(regsp)); // DUP
  Push(0x65e1+WED4C.offset); // WED4C<IFIELD>
  Store_2(); // !_2
  Push(Read16(Pop() + pp_WEE59)&0xFF); //  WEE59 + C@
  Push(pp__dash_END); // -END
  Store_2(); // !_2
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(9);
  GetColor(BLACK);
  Push(0x0072);
  Push(0x002c);
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  SWAP(); // SWAP
  POS_dot_PXT(); // POS.PXT
  Push(Read16(0x65e1+WED4C.offset)); // WED4C<IFIELD> @
  A_gt_TEXT(); // A>TEXT case
  StoreCRS(); // !CRS
}


// ================================================
// 0xef38: WORD 'WEF3A' codep=0x224c wordp=0xef3a
// ================================================

void WEF3A() // WEF3A
{
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(6);
  GetColor(BLACK);
  Push(0x007e);
  Push(0x0022);
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  SWAP(); // SWAP
  POS_dot_PXT(); // POS.PXT
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
    } else
    {
      Push(0);
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0);
  }
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(3);
  DrawR(); // .R
  PRINT(".", 1); // (.")
  Push(0);
  DrawR(); // .R
  PRINT("M", 1); // (.")
  Push(3);
  Push(Read16(regsp)); // DUP
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Draw(); // .
  StoreCRS(); // !CRS
}


// ================================================
// 0xefae: WORD 'WEFB0' codep=0x224c wordp=0xefb0
// ================================================

void WEFB0() // WEFB0
{
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0011);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(0x0020);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(0x0055);
  Push(0x006a);
  POS_dot_(); // POS.
  Push(pp_WED71); // WED71
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(0x0055);
  Push(0x004f);
  POS_dot_(); // POS.
  Push(pp_WEDB7); // WEDB7
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(0x000a);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(0x0028);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(0x0065);
  Push(0x0059);
  POS_dot_(); // POS.
  Push(pp_WEDFD); // WEDFD
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(0x0016);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(0x000c);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(0x008d);
  Push(0x005f);
  POS_dot_(); // POS.
  Push(pp_WEE31); // WEE31
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xf032: WORD 'WF034' codep=0x224c wordp=0xf034 params=5 returns=0
// ================================================

void WF034() // WF034
{
  unsigned short int i, imax;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    _2OVER(); // 2OVER
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf044: WORD 'WF046' codep=0x224c wordp=0xf046
// ================================================

void WF046() // WF046
{
  Push(0x65e1+WED38.offset); // WED38<IFIELD>
  WED65(); // WED65
  _0_gt_(); // 0>
  GetColor(RED);
  Push(Pop() * Pop()); // *
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0053);
  Push(0x003c);
  Push(0x0053);
  Push(0x006d);
  Push(0x0069);
  Push(0x006d);
  Push(0x0086);
  Push(0x0063);
  Push(0x0096);
  Push(0x0063);
  Push(0x009b);
  Push(0x005e);
  Push(0x009b);
  Push(0x004b);
  Push(0x0096);
  Push(0x0046);
  Push(0x0084);
  Push(0x0046);
  Push(0x0068);
  Push(0x003c);
  Push(0x0053);
  Push(0x003c);
  Push(0x000a);
  WF034(); // WF034
}


// ================================================
// 0xf0b6: WORD 'WF0B8' codep=0x1d29 wordp=0xf0b8
// ================================================
// 0xf0b8: db 0x76 0x76 0x79 0x79 0x7c 0x7c 0x7f 0x7f 0x82 0x82 0x85 0x85 0x88 0x88 0x8b 0x8b 'vvyy||        '

// ================================================
// 0xf0c8: WORD 'WF0CA' codep=0x1d29 wordp=0xf0ca
// ================================================
// 0xf0ca: db 0x50 0x5a 0x50 0x5a 0x51 0x59 0x51 0x59 0x51 0x59 0x51 0x59 0x51 0x59 0x51 0x59 'PZPZQYQYQYQYQYQY'

// ================================================
// 0xf0da: WORD 'WF0DC' codep=0x1d29 wordp=0xf0dc
// ================================================
// 0xf0dc: db 0x3a 0x20 ': '

// ================================================
// 0xf0de: WORD 'WF0E0' codep=0x224c wordp=0xf0e0
// ================================================

void WF0E0() // WF0E0
{
  Push(Read16(pp_WF0DC)); // WF0DC @
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + pp_WF0B8)&0xFF); //  WF0B8 + C@
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(Read16(Pop() + pp_WF0CA)&0xFF); //  WF0CA + C@
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(1);
  Push(pp_WF0DC); // WF0DC
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf104: WORD 'WF106' codep=0x224c wordp=0xf106 params=1 returns=0
// ================================================

void WF106() // WF106
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    WF0E0(); // WF0E0
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf118: WORD '(.PODS)' codep=0x224c wordp=0xf124
// ================================================
// entry

void _ro__dot_PODS_rc_() // (.PODS)
{
  GetCRS(); // @CRS
  Push(pp_WF0DC); // WF0DC
  _099(); // 099
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  Push(pp_WEE55); // WEE55
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  Push(Read16(0x65e1+WED47.offset)); // WED47<IFIELD> @
  _plus_BIT(); // +BIT
  WF106(); // WF106
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(0x65e1+WED5B.offset)&0xFF); // WED5B<IFIELD> C@
  WF106(); // WF106
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(Read16(0x65e1+WED60.offset)&0xFF); // WED60<IFIELD> C@
  WF106(); // WF106
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x0010 - Read16(pp_WF0DC)); // 0x0010 WF0DC @ -
  WF106(); // WF106
  StoreCRS(); // !CRS
}


// ================================================
// 0xf17a: WORD 'WF17C' codep=0x1d29 wordp=0xf17c
// ================================================
// 0xf17c: db 0x3f 0x38 0x00 0xff '?8  '

// ================================================
// 0xf180: WORD 'WF182' codep=0x1d29 wordp=0xf182
// ================================================
// 0xf182: db 0x3f 0xfc 0x00 0xce '?   '

// ================================================
// 0xf186: WORD 'WF188' codep=0x1d29 wordp=0xf188
// ================================================
// 0xf188: db 0x78 0x30 0xf8 0xff 0xff 0xf8 0x30 0x78 'x0    0x'

// ================================================
// 0xf190: WORD 'WF192' codep=0x224c wordp=0xf192
// ================================================

void WF192() // WF192
{
  Push(0x65e1+WED3D.offset); // WED3D<IFIELD>
  WED65(); // WED65
  _0_gt_(); // 0>
  GetColor(LT_dash_BLUE);
  Push(Pop() * Pop()); // *
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(3);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(9);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(0x0060);
  Push(0x006b);
  POS_dot_(); // POS.
  Push(pp_WF17C); // WF17C
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(0x0040);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(pp_WF182); // WF182
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xf1d2: WORD 'WF1D4' codep=0x224c wordp=0xf1d4
// ================================================

void WF1D4() // WF1D4
{
  Push(0x65e1+WED42.offset); // WED42<IFIELD>
  WED65(); // WED65
  if (Pop() != 0)
  {
    GetColor(LT_dash_BLUE);
  } else
  {
    GetColor(DK_dash_BLUE);
  }
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(8);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(8);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(pp_WF188); // WF188
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(0x006b);
  Push(0x0058);
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xf20a: WORD '(.SHIP)' codep=0x224c wordp=0xf216
// ================================================
// entry

void _ro__dot_SHIP_rc_() // (.SHIP)
{
  GetCRS(); // @CRS
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  WEFB0(); // WEFB0
  WF046(); // WF046
  WF1D4(); // WF1D4
  WF192(); // WF192
  _ro__dot_PODS_rc_(); // (.PODS)
  StoreCRS(); // !CRS
}


// ================================================
// 0xf22c: WORD '(BALANC' codep=0x224c wordp=0xf238
// ================================================
// entry

void _ro_BALANC() // (BALANC
{
  GetCRS(); // @CRS
  Push(0);
  _0MESS(); // 0MESS
  Push(5);
  Push(0x0017);
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  PRINT("YOUR ACCOUNT BALANCE IS: ", 25); // (.")
  Push(0xc285); // 'OVD@BAL'
  MODULE(); // MODULE
  D_dot_(); // D.
  PRINT("SP", 2); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf275: WORD 'WF277' codep=0x224c wordp=0xf277
// ================================================

void WF277() // WF277
{
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(0x009d);
  Push(1);
  Push(2);
  Push(1);
  LLINE(); // LLINE
  Push(0x009d);
  Push(0x000b);
  Push(2);
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x009d);
  Push(0x001a);
  Push(2);
  Push(0x001a);
  LLINE(); // LLINE
  Push(0x009d);
  Push(0x00b6);
  Push(2);
  Push(0x00b6);
  LLINE(); // LLINE
  Push(2);
  Push(0x00c6);
  Push(0x009d);
  Push(0x00c6);
  LLINE(); // LLINE
  Push(1);
  Push(0x00c6);
  Push(1);
  Push(1);
  LLINE(); // LLINE
  Push(0x009e);
  Push(0x00c6);
  Push(0x009e);
  Push(1);
  LLINE(); // LLINE
  Push(0x0050);
  Push(0x00b5);
  Push(0x0050);
  Push(0x001b);
  LLINE(); // LLINE
  Push(0x0015);
  Push(2);
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x003b);
  Push(2);
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x0063);
  Push(2);
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x007f);
  Push(2);
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x0015);
  Push(0x00c3);
  GetColor(DK_dash_BLUE);
  Draw1LOGO(); // .1LOGO
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  _gt_3FONT(); // >3FONT
  Push(0x0027);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("SHIP", 4); // (.")
  Push(6);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("CONFIGURATION", 13); // (.")
}


// ================================================
// 0xf368: WORD 'WF36A' codep=0x224c wordp=0xf36a params=0 returns=0
// ================================================

void WF36A() // WF36A
{
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
}


// ================================================
// 0xf374: WORD 'WF376' codep=0x224c wordp=0xf376
// ================================================

void WF376() // WF376
{
  CTINIT(); // CTINIT
  Push(7);
  Push(0x00ae);
  POS_dot_(); // POS.
  PRINT("CARGO PODS", 10); // (.")
  WF36A(); // WF36A
  PRINT("TOTAL PODS:", 11); // (.")
  Push(7);
  Push(0x00a4);
  POS_dot_(); // POS.
  PRINT("ENGINES", 7); // (.")
  WF36A(); // WF36A
  PRINT("ENGINES:", 8); // (.")
  Push(7);
  Push(0x009a);
  POS_dot_(); // POS.
  PRINT("SHIELDING", 9); // (.")
  WF36A(); // WF36A
  PRINT("SHIELDS :", 9); // (.")
  Push(7);
  Push(0x0090);
  POS_dot_(); // POS.
  PRINT("ARMOR", 5); // (.")
  WF36A(); // WF36A
  PRINT("ARMOR   :", 9); // (.")
  Push(7);
  Push(0x0086);
  POS_dot_(); // POS.
  PRINT("MISSILE LAUNCHER", 16); // (.")
  WF36A(); // WF36A
  PRINT("MISSILES:", 9); // (.")
  Push(7);
  Push(0x007c);
  POS_dot_(); // POS.
  PRINT("LASER CANNON", 12); // (.")
  WF36A(); // WF36A
  PRINT("LASERS  :", 9); // (.")
  Push(7);
  Push(0x0072);
  POS_dot_(); // POS.
  PRINT("BLASTO PODS", 11); // (.")
  Push(7);
  Push(0x0068);
  POS_dot_(); // POS.
  PRINT("JUMP PODS", 9); // (.")
}


// ================================================
// 0xf476: WORD 'WF478' codep=0x224c wordp=0xf478
// ================================================

void WF478() // WF478
{
  unsigned short int i, imax;
  WF376(); // WF376

  i = 0;
  imax = 5;
  do // (DO)
  {
    Push(0x000f);
    Push(i * 0x000a + 0x002c); // I 0x000a * 0x002c +
    POS_dot_(); // POS.
    PRINT("CLASS ", 6); // (.")
    Push(5 - i); // 5 I -
    Push(0);
    DrawR(); // .R
    PRINT("...", 3); // (.")
    i++;
  } while(i<imax); // (LOOP)

  Push(6);
  Push(8);
  POS_dot_(); // POS.
  PRINT("BUY", 3); // (.")
  Push(0x0020);
  Push(8);
  POS_dot_(); // POS.
  PRINT("SELL", 4); // (.")
  Push(0x0044);
  Push(8);
  POS_dot_(); // POS.
  PRINT("REPAIR", 6); // (.")
  Push(0x006a);
  Push(8);
  POS_dot_(); // POS.
  PRINT("NAME", 4); // (.")
  Push(0x0087);
  Push(8);
  POS_dot_(); // POS.
  PRINT("EXIT", 4); // (.")
  Push(0x0056);
  Push(0x0036);
  POS_dot_(); // POS.
  PRINT("MASS:     TONS", 14); // (.")
  Push(0x0056);
  Push(0x002c);
  POS_dot_(); // POS.
  PRINT("ACCEL: ", 7); // (.")
  Push(0x0056);
  Push(0x0022);
  POS_dot_(); // POS.
  PRINT("SHYNEUM:", 8); // (.")
  _ro__dot_MASS_rc_(); // (.MASS)
  _ro__dot_ACC_rc_(); // (.ACC)
  WEF3A(); // WEF3A
  _ro_BALANC(); // (BALANC
}


// ================================================
// 0xf549: WORD '(.CONFI' codep=0x224c wordp=0xf555
// ================================================
// entry

void _ro__dot_CONFI() // (.CONFI
{
  WF277(); // WF277
  WF478(); // WF478
  _ro__dot_SHIP_rc_(); // (.SHIP)
}

// 0xf55d: db 0x53 0x48 0x49 0x00 'SHI '

