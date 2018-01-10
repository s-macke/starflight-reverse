// ====== OVERLAY 'SHIPGRPH-OV' ======
// store offset = 0xecb0
// overlay size   = 0x08b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xecc6  codep:0x224c parp:0xecc6 size:0x000e C-string:'UNK_0xecc6'
//      UNK_0xecd6  codep:0x224c parp:0xecd6 size:0x0009 C-string:'UNK_0xecd6'
//      UNK_0xece1  codep:0x224c parp:0xece1 size:0x000d C-string:'UNK_0xece1'
//      UNK_0xecf0  codep:0x224c parp:0xecf0 size:0x0009 C-string:'UNK_0xecf0'
//      UNK_0xecfb  codep:0x224c parp:0xecfb size:0x000e C-string:'UNK_0xecfb'
//          A>TEXT  codep:0x4b3b parp:0xed14 size:0x0018 C-string:'A_gt_TEXT'
//      UNK_0xed2e  codep:0x7420 parp:0xed2e size:0x0003 C-string:'UNK_0xed2e'
//      UNK_0xed33  codep:0x7420 parp:0xed33 size:0x0003 C-string:'UNK_0xed33'
//      UNK_0xed38  codep:0x7420 parp:0xed38 size:0x0003 C-string:'UNK_0xed38'
//      UNK_0xed3d  codep:0x7420 parp:0xed3d size:0x0003 C-string:'UNK_0xed3d'
//      UNK_0xed42  codep:0x7420 parp:0xed42 size:0x0003 C-string:'UNK_0xed42'
//      UNK_0xed47  codep:0x7420 parp:0xed47 size:0x0003 C-string:'UNK_0xed47'
//      UNK_0xed4c  codep:0x7420 parp:0xed4c size:0x0003 C-string:'UNK_0xed4c'
//      UNK_0xed51  codep:0x7420 parp:0xed51 size:0x0008 C-string:'UNK_0xed51'
//      UNK_0xed5b  codep:0x7420 parp:0xed5b size:0x0003 C-string:'UNK_0xed5b'
//      UNK_0xed60  codep:0x7420 parp:0xed60 size:0x0003 C-string:'UNK_0xed60'
//      UNK_0xed65  codep:0x224c parp:0xed65 size:0x000a C-string:'UNK_0xed65'
//      UNK_0xed71  codep:0x1d29 parp:0xed71 size:0x0044 C-string:'UNK_0xed71'
//      UNK_0xedb7  codep:0x1d29 parp:0xedb7 size:0x0044 C-string:'UNK_0xedb7'
//      UNK_0xedfd  codep:0x1d29 parp:0xedfd size:0x0032 C-string:'UNK_0xedfd'
//      UNK_0xee31  codep:0x1d29 parp:0xee31 size:0x0022 C-string:'UNK_0xee31'
//      UNK_0xee55  codep:0x1d29 parp:0xee55 size:0x0002 C-string:'UNK_0xee55'
//      UNK_0xee59  codep:0x1d29 parp:0xee59 size:0x0006 C-string:'UNK_0xee59'
//         (.MASS)  codep:0x224c parp:0xee6b size:0x008c C-string:'_ro__dot_MASS_rc_'
//          (.ACC)  codep:0x224c parp:0xef02 size:0x0036 C-string:'_ro__dot_ACC_rc_'
//      UNK_0xef3a  codep:0x224c parp:0xef3a size:0x0074 C-string:'UNK_0xef3a'
//      UNK_0xefb0  codep:0x224c parp:0xefb0 size:0x0082 C-string:'UNK_0xefb0'
//      UNK_0xf034  codep:0x224c parp:0xf034 size:0x0010 C-string:'UNK_0xf034'
//      UNK_0xf046  codep:0x224c parp:0xf046 size:0x0070 C-string:'UNK_0xf046'
//      UNK_0xf0b8  codep:0x1d29 parp:0xf0b8 size:0x0010 C-string:'UNK_0xf0b8'
//      UNK_0xf0ca  codep:0x1d29 parp:0xf0ca size:0x0010 C-string:'UNK_0xf0ca'
//      UNK_0xf0dc  codep:0x1d29 parp:0xf0dc size:0x0002 C-string:'UNK_0xf0dc'
//      UNK_0xf0e0  codep:0x224c parp:0xf0e0 size:0x0024 C-string:'UNK_0xf0e0'
//      UNK_0xf106  codep:0x224c parp:0xf106 size:0x0012 C-string:'UNK_0xf106'
//         (.PODS)  codep:0x224c parp:0xf124 size:0x0056 C-string:'_ro__dot_PODS_rc_'
//      UNK_0xf17c  codep:0x1d29 parp:0xf17c size:0x0004 C-string:'UNK_0xf17c'
//      UNK_0xf182  codep:0x1d29 parp:0xf182 size:0x0004 C-string:'UNK_0xf182'
//      UNK_0xf188  codep:0x1d29 parp:0xf188 size:0x0008 C-string:'UNK_0xf188'
//      UNK_0xf192  codep:0x224c parp:0xf192 size:0x0040 C-string:'UNK_0xf192'
//      UNK_0xf1d4  codep:0x224c parp:0xf1d4 size:0x0036 C-string:'UNK_0xf1d4'
//         (.SHIP)  codep:0x224c parp:0xf216 size:0x0016 C-string:'_ro__dot_SHIP_rc_'
//         (BALANC  codep:0x224c parp:0xf238 size:0x003d C-string:'_ro_BALANC'
//      UNK_0xf277  codep:0x224c parp:0xf277 size:0x00f1 C-string:'UNK_0xf277'
//      UNK_0xf36a  codep:0x224c parp:0xf36a size:0x000a C-string:'UNK_0xf36a'
//      UNK_0xf376  codep:0x224c parp:0xf376 size:0x0100 C-string:'UNK_0xf376'
//      UNK_0xf478  codep:0x224c parp:0xf478 size:0x00d1 C-string:'UNK_0xf478'
//         (.CONFI  codep:0x224c parp:0xf555 size:0x0000 C-string:'_ro__dot_CONFI'

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
const unsigned short int pp_UNK_0xed71 = 0xed71; // UNK_0xed71 size: 68
// {0x00, 0x7c, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0xff, 0x7f, 0x00, 0xf8, 0xff, 0x7f, 0x00, 0xfc, 0x86, 0x61, 0x00, 0x1e, 0xff, 0x7f, 0x00, 0xff, 0xff, 0x7f, 0x80, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x07, 0xfc, 0xff, 0x3f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xfe, 0x3f}

const unsigned short int pp_UNK_0xedb7 = 0xedb7; // UNK_0xedb7 size: 68
// {0x00, 0x00, 0xfe, 0x3f, 0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xfc, 0x3f, 0x3f, 0x00, 0xfc, 0xff, 0xff, 0x07, 0xfc, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0x80, 0xff, 0xff, 0x7f, 0x00, 0xff, 0x86, 0x61, 0x00, 0x1e, 0xff, 0x7f, 0x00, 0xfc, 0xff, 0x7f, 0x00, 0xf8, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00}

const unsigned short int pp_UNK_0xedfd = 0xedfd; // UNK_0xedfd size: 50
// {0xfe, 0x7f, 0x00, 0x00, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0xfc, 0x7f, 0x00, 0x00, 0xfe, 0x00, 0x00}

const unsigned short int pp_UNK_0xee31 = 0xee31; // UNK_0xee31 size: 34
// {0x01, 0x1e, 0x1f, 0xf0, 0xdc, 0x83, 0xc3, 0x3c, 0x7c, 0xc6, 0xe3, 0x37, 0x3f, 0xff, 0xff, 0xf3, 0xf3, 0x3f, 0x3f, 0xff, 0x7e, 0xf3, 0xc3, 0x37, 0x63, 0x3c, 0x3d, 0xcc, 0xf8, 0xc1, 0x01, 0x1f, 0x00, 0xe0}

const unsigned short int pp_UNK_0xee55 = 0xee55; // UNK_0xee55 size: 2
// {0x00, 0xf0}

const unsigned short int pp_UNK_0xee59 = 0xee59; // UNK_0xee59 size: 6
// {0x00, 0x04, 0x04, 0x03, 0x03, 0x02}

const unsigned short int pp_UNK_0xf0b8 = 0xf0b8; // UNK_0xf0b8 size: 16
// {0x76, 0x76, 0x79, 0x79, 0x7c, 0x7c, 0x7f, 0x7f, 0x82, 0x82, 0x85, 0x85, 0x88, 0x88, 0x8b, 0x8b}

const unsigned short int pp_UNK_0xf0ca = 0xf0ca; // UNK_0xf0ca size: 16
// {0x50, 0x5a, 0x50, 0x5a, 0x51, 0x59, 0x51, 0x59, 0x51, 0x59, 0x51, 0x59, 0x51, 0x59, 0x51, 0x59}

const unsigned short int pp_UNK_0xf0dc = 0xf0dc; // UNK_0xf0dc size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf17c = 0xf17c; // UNK_0xf17c size: 4
// {0x3f, 0x38, 0x00, 0xff}

const unsigned short int pp_UNK_0xf182 = 0xf182; // UNK_0xf182 size: 4
// {0x3f, 0xfc, 0x00, 0xce}

const unsigned short int pp_UNK_0xf188 = 0xf188; // UNK_0xf188 size: 8
// {0x78, 0x30, 0xf8, 0xff, 0xff, 0xf8, 0x30, 0x78}




// 0xecc2: db 0x8b 0x00 '  '

// ================================================
// 0xecc4: WORD 'UNK_0xecc6' codep=0x224c parp=0xecc6 params=0 returns=0
// ================================================

void UNK_0xecc6() // UNK_0xecc6
{
  PRINT("VERY POOR", 9); // (.")
}


// ================================================
// 0xecd4: WORD 'UNK_0xecd6' codep=0x224c parp=0xecd6 params=0 returns=0
// ================================================

void UNK_0xecd6() // UNK_0xecd6
{
  PRINT("POOR", 4); // (.")
}


// ================================================
// 0xecdf: WORD 'UNK_0xece1' codep=0x224c parp=0xece1 params=0 returns=0
// ================================================

void UNK_0xece1() // UNK_0xece1
{
  PRINT("MODERATE", 8); // (.")
}


// ================================================
// 0xecee: WORD 'UNK_0xecf0' codep=0x224c parp=0xecf0 params=0 returns=0
// ================================================

void UNK_0xecf0() // UNK_0xecf0
{
  PRINT("GOOD", 4); // (.")
}


// ================================================
// 0xecf9: WORD 'UNK_0xecfb' codep=0x224c parp=0xecfb params=0 returns=0
// ================================================

void UNK_0xecfb() // UNK_0xecfb
{
  PRINT("EXCELLENT", 9); // (.")
}


// ================================================
// 0xed09: WORD 'A>TEXT' codep=0x4b3b parp=0xed14
// ================================================

void A_gt_TEXT() // A>TEXT
{
  switch(Pop()) // A>TEXT
  {
  case 1:
    UNK_0xecc6(); // UNK_0xecc6
    break;
  case 2:
    UNK_0xecd6(); // UNK_0xecd6
    break;
  case 3:
    UNK_0xece1(); // UNK_0xece1
    break;
  case 4:
    UNK_0xecf0(); // UNK_0xecf0
    break;
  case 5:
    UNK_0xecfb(); // UNK_0xecfb
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed2c: WORD 'UNK_0xed2e' codep=0x7420 parp=0xed2e
// ================================================
IFieldType UNK_0xed2e = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xed31: WORD 'UNK_0xed33' codep=0x7420 parp=0xed33
// ================================================
IFieldType UNK_0xed33 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xed36: WORD 'UNK_0xed38' codep=0x7420 parp=0xed38
// ================================================
IFieldType UNK_0xed38 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xed3b: WORD 'UNK_0xed3d' codep=0x7420 parp=0xed3d
// ================================================
IFieldType UNK_0xed3d = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xed40: WORD 'UNK_0xed42' codep=0x7420 parp=0xed42
// ================================================
IFieldType UNK_0xed42 = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xed45: WORD 'UNK_0xed47' codep=0x7420 parp=0xed47
// ================================================
IFieldType UNK_0xed47 = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xed4a: WORD 'UNK_0xed4c' codep=0x7420 parp=0xed4c
// ================================================
IFieldType UNK_0xed4c = {SHIPIDX, 0x25, 0x02};

// ================================================
// 0xed4f: WORD 'UNK_0xed51' codep=0x7420 parp=0xed51
// ================================================
IFieldType UNK_0xed51 = {SHIPIDX, 0x27, 0x02};
// 0xed54: db 0x20 0x74 0x14 0x45 0x04 ' t E '

// ================================================
// 0xed59: WORD 'UNK_0xed5b' codep=0x7420 parp=0xed5b
// ================================================
IFieldType UNK_0xed5b = {SHIPIDX, 0x56, 0x01};

// ================================================
// 0xed5e: WORD 'UNK_0xed60' codep=0x7420 parp=0xed60
// ================================================
IFieldType UNK_0xed60 = {SHIPIDX, 0x57, 0x01};

// ================================================
// 0xed63: WORD 'UNK_0xed65' codep=0x224c parp=0xed65 params=1 returns=1
// ================================================

void UNK_0xed65() // UNK_0xed65
{
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(7);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xed6f: WORD 'UNK_0xed71' codep=0x1d29 parp=0xed71
// ================================================
// 0xed71: db 0x00 0x7c 0x00 0x00 0x80 0x7f 0x00 0x00 0xff 0x7f 0x00 0xf8 0xff 0x7f 0x00 0xfc 0x86 0x61 0x00 0x1e 0xff 0x7f 0x00 0xff 0xff 0x7f 0x80 0xff 0xff 0x7f 0xc0 0xff 0xff 0x7f 0xe0 0xff 0xff 0x7f 0xf0 0xff 0xff 0x7f 0xf8 0xff 0xff 0x7f 0xfc 0xff 0xff 0x07 0xfc 0xff 0x3f 0x00 0xfc 0xff 0x00 0x00 0xfc 0x3f 0x00 0x00 0xfc 0x1f 0x00 0x00 0xfe 0x3f ' |            a                           ?      ?       ?'

// ================================================
// 0xedb5: WORD 'UNK_0xedb7' codep=0x1d29 parp=0xedb7
// ================================================
// 0xedb7: db 0x00 0x00 0xfe 0x3f 0x00 0x00 0xfc 0x1f 0x00 0x00 0xfc 0x3f 0x3f 0x00 0xfc 0xff 0xff 0x07 0xfc 0xff 0xff 0x7f 0xfc 0xff 0xff 0x7f 0xf8 0xff 0xff 0x7f 0xf0 0xff 0xff 0x7f 0xe0 0xff 0xff 0x7f 0xc0 0xff 0xff 0x7f 0x80 0xff 0xff 0x7f 0x00 0xff 0x86 0x61 0x00 0x1e 0xff 0x7f 0x00 0xfc 0xff 0x7f 0x00 0xf8 0x80 0x7f 0x00 0x00 0x00 0x7c 0x00 0x00 '   ?       ??                             a            |  '

// ================================================
// 0xedfb: WORD 'UNK_0xedfd' codep=0x1d29 parp=0xedfd
// ================================================
// 0xedfd: db 0xfe 0x7f 0x00 0x00 0x7f 0x00 0xfc 0xff 0x00 0x00 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0x00 0xfc 0x7f 0x00 0x00 0xfe 0x00 0x00 '                                        '

// ================================================
// 0xee2f: WORD 'UNK_0xee31' codep=0x1d29 parp=0xee31
// ================================================
// 0xee31: db 0x01 0x1e 0x1f 0xf0 0xdc 0x83 0xc3 0x3c 0x7c 0xc6 0xe3 0x37 0x3f 0xff 0xff 0xf3 0xf3 0x3f 0x3f 0xff 0x7e 0xf3 0xc3 0x37 0x63 0x3c 0x3d 0xcc 0xf8 0xc1 0x01 0x1f 0x00 0xe0 '       <|  7?    ?? ~  7c<=       '

// ================================================
// 0xee53: WORD 'UNK_0xee55' codep=0x1d29 parp=0xee55
// ================================================
// 0xee55: db 0x00 0xf0 '  '

// ================================================
// 0xee57: WORD 'UNK_0xee59' codep=0x1d29 parp=0xee59
// ================================================
// 0xee59: db 0x00 0x04 0x04 0x03 0x03 0x02 '      '

// ================================================
// 0xee5f: WORD '(.MASS)' codep=0x224c parp=0xee6b
// ================================================
// entry

void _ro__dot_MASS_rc_() // (.MASS)
{
  Push(0x0032);
  Push(Read16(0x65e1+UNK_0xed33.offset)); // UNK_0xed33<IFIELD> @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x0032);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x65e1+UNK_0xed2e.offset); // UNK_0xed2e<IFIELD>
  UNK_0xed65(); // UNK_0xed65
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(9);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Read16(0x65e1+UNK_0xed47.offset)); // UNK_0xed47<IFIELD> @
  _plus_BIT(); // +BIT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push((Read16(0x65e1+UNK_0xed60.offset)&0xFF) * 0x000a); // UNK_0xed60<IFIELD> C@ 0x000a *
  Push(Pop() + Pop()); // +
  Push((Read16(0x65e1+UNK_0xed5b.offset)&0xFF) * 0x000a); // UNK_0xed5b<IFIELD> C@ 0x000a *
  Push(Pop() + Pop()); // +
  Push(0x65e1+UNK_0xed42.offset); // UNK_0xed42<IFIELD>
  UNK_0xed65(); // UNK_0xed65
  _0_gt_(); // 0>
  Push(0x65e1+UNK_0xed3d.offset); // UNK_0xed3d<IFIELD>
  UNK_0xed65(); // UNK_0xed65
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Push(0x65e1+UNK_0xed38.offset); // UNK_0xed38<IFIELD>
  UNK_0xed65(); // UNK_0xed65
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Push(5);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x65e1+UNK_0xed51.offset); // UNK_0xed51<IFIELD>
  Store_2(); // !_2
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(4);
  SetColor(BLACK);
  Push(0x0069);
  Push(0x0036);
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  SWAP(); // SWAP
  POS_dot_PXT(); // POS.PXT
  Push(Read16(0x65e1+UNK_0xed51.offset)); // UNK_0xed51<IFIELD> @
  Push(4);
  DrawR(); // .R
  StoreCRS(); // !CRS
}


// ================================================
// 0xeef7: WORD '(.ACC)' codep=0x224c parp=0xef02
// ================================================
// entry

void _ro__dot_ACC_rc_() // (.ACC)
{
  Push(0x65e1+UNK_0xed33.offset); // UNK_0xed33<IFIELD>
  UNK_0xed65(); // UNK_0xed65
  Push(Read16(regsp)); // DUP
  Push(0x65e1+UNK_0xed4c.offset); // UNK_0xed4c<IFIELD>
  Store_2(); // !_2
  Push(pp_UNK_0xee59); // UNK_0xee59
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(pp__dash_END); // -END
  Store_2(); // !_2
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(9);
  SetColor(BLACK);
  Push(0x0072);
  Push(0x002c);
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  SWAP(); // SWAP
  POS_dot_PXT(); // POS.PXT
  Push(Read16(0x65e1+UNK_0xed4c.offset)); // UNK_0xed4c<IFIELD> @
  A_gt_TEXT(); // A>TEXT case
  StoreCRS(); // !CRS
}


// ================================================
// 0xef38: WORD 'UNK_0xef3a' codep=0x224c parp=0xef3a
// ================================================

void UNK_0xef3a() // UNK_0xef3a
{
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(6);
  SetColor(BLACK);
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
// 0xefae: WORD 'UNK_0xefb0' codep=0x224c parp=0xefb0
// ================================================

void UNK_0xefb0() // UNK_0xefb0
{
  SetColor(DK_dash_BLUE);
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
  Push(pp_UNK_0xed71); // UNK_0xed71
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(0x0055);
  Push(0x004f);
  POS_dot_(); // POS.
  Push(pp_UNK_0xedb7); // UNK_0xedb7
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
  Push(pp_UNK_0xedfd); // UNK_0xedfd
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
  Push(pp_UNK_0xee31); // UNK_0xee31
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xf032: WORD 'UNK_0xf034' codep=0x224c parp=0xf034 params=5 returns=0
// ================================================

void UNK_0xf034() // UNK_0xf034
{
  unsigned short int i, imax;
  Push(0);

  i = Pop();
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
// 0xf044: WORD 'UNK_0xf046' codep=0x224c parp=0xf046
// ================================================

void UNK_0xf046() // UNK_0xf046
{
  Push(0x65e1+UNK_0xed38.offset); // UNK_0xed38<IFIELD>
  UNK_0xed65(); // UNK_0xed65
  _0_gt_(); // 0>
  SetColor(RED);
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
  UNK_0xf034(); // UNK_0xf034
}


// ================================================
// 0xf0b6: WORD 'UNK_0xf0b8' codep=0x1d29 parp=0xf0b8
// ================================================
// 0xf0b8: db 0x76 0x76 0x79 0x79 0x7c 0x7c 0x7f 0x7f 0x82 0x82 0x85 0x85 0x88 0x88 0x8b 0x8b 'vvyy||        '

// ================================================
// 0xf0c8: WORD 'UNK_0xf0ca' codep=0x1d29 parp=0xf0ca
// ================================================
// 0xf0ca: db 0x50 0x5a 0x50 0x5a 0x51 0x59 0x51 0x59 0x51 0x59 0x51 0x59 0x51 0x59 0x51 0x59 'PZPZQYQYQYQYQYQY'

// ================================================
// 0xf0da: WORD 'UNK_0xf0dc' codep=0x1d29 parp=0xf0dc
// ================================================
// 0xf0dc: db 0x3a 0x20 ': '

// ================================================
// 0xf0de: WORD 'UNK_0xf0e0' codep=0x224c parp=0xf0e0
// ================================================

void UNK_0xf0e0() // UNK_0xf0e0
{
  Push(Read16(pp_UNK_0xf0dc)); // UNK_0xf0dc @
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xf0b8); // UNK_0xf0b8
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(pp_UNK_0xf0ca); // UNK_0xf0ca
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(1);
  Push(pp_UNK_0xf0dc); // UNK_0xf0dc
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf104: WORD 'UNK_0xf106' codep=0x224c parp=0xf106 params=1 returns=0
// ================================================

void UNK_0xf106() // UNK_0xf106
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xf0e0(); // UNK_0xf0e0
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf118: WORD '(.PODS)' codep=0x224c parp=0xf124
// ================================================
// entry

void _ro__dot_PODS_rc_() // (.PODS)
{
  GetCRS(); // @CRS
  Push(pp_UNK_0xf0dc); // UNK_0xf0dc
  _099(); // 099
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  Push(pp_UNK_0xee55); // UNK_0xee55
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(2);
  Push(Read16(regsp)); // DUP
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  SetColor(GREY1);
  StoreCOLOR(); // !COLOR
  Push(Read16(0x65e1+UNK_0xed47.offset)); // UNK_0xed47<IFIELD> @
  _plus_BIT(); // +BIT
  UNK_0xf106(); // UNK_0xf106
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(0x65e1+UNK_0xed5b.offset)&0xFF); // UNK_0xed5b<IFIELD> C@
  UNK_0xf106(); // UNK_0xf106
  SetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(Read16(0x65e1+UNK_0xed60.offset)&0xFF); // UNK_0xed60<IFIELD> C@
  UNK_0xf106(); // UNK_0xf106
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x0010 - Read16(pp_UNK_0xf0dc)); // 0x0010 UNK_0xf0dc @ -
  UNK_0xf106(); // UNK_0xf106
  StoreCRS(); // !CRS
}


// ================================================
// 0xf17a: WORD 'UNK_0xf17c' codep=0x1d29 parp=0xf17c
// ================================================
// 0xf17c: db 0x3f 0x38 0x00 0xff '?8  '

// ================================================
// 0xf180: WORD 'UNK_0xf182' codep=0x1d29 parp=0xf182
// ================================================
// 0xf182: db 0x3f 0xfc 0x00 0xce '?   '

// ================================================
// 0xf186: WORD 'UNK_0xf188' codep=0x1d29 parp=0xf188
// ================================================
// 0xf188: db 0x78 0x30 0xf8 0xff 0xff 0xf8 0x30 0x78 'x0    0x'

// ================================================
// 0xf190: WORD 'UNK_0xf192' codep=0x224c parp=0xf192
// ================================================

void UNK_0xf192() // UNK_0xf192
{
  Push(0x65e1+UNK_0xed3d.offset); // UNK_0xed3d<IFIELD>
  UNK_0xed65(); // UNK_0xed65
  _0_gt_(); // 0>
  SetColor(LT_dash_BLUE);
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
  Push(pp_UNK_0xf17c); // UNK_0xf17c
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(0x0040);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(pp_UNK_0xf182); // UNK_0xf182
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xf1d2: WORD 'UNK_0xf1d4' codep=0x224c parp=0xf1d4
// ================================================

void UNK_0xf1d4() // UNK_0xf1d4
{
  Push(0x65e1+UNK_0xed42.offset); // UNK_0xed42<IFIELD>
  UNK_0xed65(); // UNK_0xed65
  if (Pop() != 0)
  {
    SetColor(LT_dash_BLUE);
  } else
  {
    SetColor(DK_dash_BLUE);
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
  Push(pp_UNK_0xf188); // UNK_0xf188
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(0x006b);
  Push(0x0058);
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xf20a: WORD '(.SHIP)' codep=0x224c parp=0xf216
// ================================================
// entry

void _ro__dot_SHIP_rc_() // (.SHIP)
{
  GetCRS(); // @CRS
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  UNK_0xefb0(); // UNK_0xefb0
  UNK_0xf046(); // UNK_0xf046
  UNK_0xf1d4(); // UNK_0xf1d4
  UNK_0xf192(); // UNK_0xf192
  _ro__dot_PODS_rc_(); // (.PODS)
  StoreCRS(); // !CRS
}


// ================================================
// 0xf22c: WORD '(BALANC' codep=0x224c parp=0xf238
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
  Push(0xc285); // probable 'OVD@BAL'
  MODULE(); // MODULE
  D_dot_(); // D.
  PRINT("SP", 2); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf275: WORD 'UNK_0xf277' codep=0x224c parp=0xf277
// ================================================

void UNK_0xf277() // UNK_0xf277
{
  SetColor(DK_dash_BLUE);
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
  SetColor(DK_dash_BLUE);
  Draw1LOGO(); // .1LOGO
  SetColor(BLUE);
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
// 0xf368: WORD 'UNK_0xf36a' codep=0x224c parp=0xf36a params=0 returns=0
// ================================================

void UNK_0xf36a() // UNK_0xf36a
{
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
}


// ================================================
// 0xf374: WORD 'UNK_0xf376' codep=0x224c parp=0xf376
// ================================================

void UNK_0xf376() // UNK_0xf376
{
  CTINIT(); // CTINIT
  Push(7);
  Push(0x00ae);
  POS_dot_(); // POS.
  PRINT("CARGO PODS", 10); // (.")
  UNK_0xf36a(); // UNK_0xf36a
  PRINT("TOTAL PODS:", 11); // (.")
  Push(7);
  Push(0x00a4);
  POS_dot_(); // POS.
  PRINT("ENGINES", 7); // (.")
  UNK_0xf36a(); // UNK_0xf36a
  PRINT("ENGINES:", 8); // (.")
  Push(7);
  Push(0x009a);
  POS_dot_(); // POS.
  PRINT("SHIELDING", 9); // (.")
  UNK_0xf36a(); // UNK_0xf36a
  PRINT("SHIELDS :", 9); // (.")
  Push(7);
  Push(0x0090);
  POS_dot_(); // POS.
  PRINT("ARMOR", 5); // (.")
  UNK_0xf36a(); // UNK_0xf36a
  PRINT("ARMOR   :", 9); // (.")
  Push(7);
  Push(0x0086);
  POS_dot_(); // POS.
  PRINT("MISSILE LAUNCHER", 16); // (.")
  UNK_0xf36a(); // UNK_0xf36a
  PRINT("MISSILES:", 9); // (.")
  Push(7);
  Push(0x007c);
  POS_dot_(); // POS.
  PRINT("LASER CANNON", 12); // (.")
  UNK_0xf36a(); // UNK_0xf36a
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
// 0xf476: WORD 'UNK_0xf478' codep=0x224c parp=0xf478
// ================================================

void UNK_0xf478() // UNK_0xf478
{
  unsigned short int i, imax;
  UNK_0xf376(); // UNK_0xf376
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x000f);
    Push(i); // I
    Push(0x000a);
    Push(Pop() * Pop()); // *
    Push(0x002c);
    Push(Pop() + Pop()); // +
    POS_dot_(); // POS.
    PRINT("CLASS ", 6); // (.")
    Push(5);
    Push(i); // I
    _dash_(); // -
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
  UNK_0xef3a(); // UNK_0xef3a
  _ro_BALANC(); // (BALANC
}


// ================================================
// 0xf549: WORD '(.CONFI' codep=0x224c parp=0xf555
// ================================================
// entry

void _ro__dot_CONFI() // (.CONFI
{
  UNK_0xf277(); // UNK_0xf277
  UNK_0xf478(); // UNK_0xf478
  _ro__dot_SHIP_rc_(); // (.SHIP)
}

// 0xf55d: db 0x53 0x48 0x49 0x00 'SHI '

