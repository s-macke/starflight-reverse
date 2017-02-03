// ====== OVERLAY 'SHIPGRPH-OV' ======
// store offset = 0xed20
// overlay size   = 0x0840

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xed36  codep:0x744d parp:0xed36 size:0x0003 C-string:'UNK_0xed36'
//      UNK_0xed3b  codep:0x744d parp:0xed3b size:0x0003 C-string:'UNK_0xed3b'
//      UNK_0xed40  codep:0x744d parp:0xed40 size:0x0003 C-string:'UNK_0xed40'
//      UNK_0xed45  codep:0x744d parp:0xed45 size:0x0003 C-string:'UNK_0xed45'
//      UNK_0xed4a  codep:0x744d parp:0xed4a size:0x0003 C-string:'UNK_0xed4a'
//      UNK_0xed4f  codep:0x744d parp:0xed4f size:0x0003 C-string:'UNK_0xed4f'
//      UNK_0xed54  codep:0x744d parp:0xed54 size:0x0003 C-string:'UNK_0xed54'
//      UNK_0xed59  codep:0x744d parp:0xed59 size:0x0008 C-string:'UNK_0xed59'
//      UNK_0xed63  codep:0x224c parp:0xed63 size:0x000a C-string:'UNK_0xed63'
//      UNK_0xed6f  codep:0x1d29 parp:0xed6f size:0x0044 C-string:'UNK_0xed6f'
//      UNK_0xedb5  codep:0x1d29 parp:0xedb5 size:0x0044 C-string:'UNK_0xedb5'
//      UNK_0xedfb  codep:0x1d29 parp:0xedfb size:0x0032 C-string:'UNK_0xedfb'
//      UNK_0xee2f  codep:0x1d29 parp:0xee2f size:0x0022 C-string:'UNK_0xee2f'
//      UNK_0xee53  codep:0x1d29 parp:0xee53 size:0x0002 C-string:'UNK_0xee53'
//         (.MASS)  codep:0x224c parp:0xee61 size:0x0074 C-string:'_ro__dot_MASS_rc_'
//          (.ACC)  codep:0x224c parp:0xeee0 size:0x0038 C-string:'_ro__dot_ACC_rc_'
//      UNK_0xef1a  codep:0x224c parp:0xef1a size:0x0074 C-string:'UNK_0xef1a'
//      UNK_0xef90  codep:0x224c parp:0xef90 size:0x0082 C-string:'UNK_0xef90'
//      UNK_0xf014  codep:0x224c parp:0xf014 size:0x0010 C-string:'UNK_0xf014'
//      UNK_0xf026  codep:0x224c parp:0xf026 size:0x0070 C-string:'UNK_0xf026'
//      UNK_0xf098  codep:0x224c parp:0xf098 size:0x001e C-string:'UNK_0xf098'
//         (.PODS)  codep:0x224c parp:0xf0c2 size:0x0058 C-string:'_ro__dot_PODS_rc_'
//      UNK_0xf11c  codep:0x1d29 parp:0xf11c size:0x0004 C-string:'UNK_0xf11c'
//      UNK_0xf122  codep:0x1d29 parp:0xf122 size:0x0004 C-string:'UNK_0xf122'
//      UNK_0xf128  codep:0x1d29 parp:0xf128 size:0x0008 C-string:'UNK_0xf128'
//      UNK_0xf132  codep:0x224c parp:0xf132 size:0x0040 C-string:'UNK_0xf132'
//      UNK_0xf174  codep:0x224c parp:0xf174 size:0x0036 C-string:'UNK_0xf174'
//         (.SHIP)  codep:0x224c parp:0xf1b6 size:0x0016 C-string:'_ro__dot_SHIP_rc_'
//   (BALANCEMESS)  codep:0x224c parp:0xf1de size:0x003d C-string:'_ro_BALANCEMESS_rc_'
//      UNK_0xf21d  codep:0x224c parp:0xf21d size:0x00f1 C-string:'UNK_0xf21d'
//      UNK_0xf310  codep:0x224c parp:0xf310 size:0x00fd C-string:'UNK_0xf310'
//      UNK_0xf40f  codep:0x224c parp:0xf40f size:0x00dc C-string:'UNK_0xf40f'
//       (.CONFIG)  codep:0x224c parp:0xf4f9 size:0x0000 C-string:'_ro__dot_CONFIG_rc_'

// =================================
// ============= EXTERN ============
// =================================
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
extern IFieldType INST_dash_QTY; // INST-QTY
void Draw(); // .
void DrawR(); // .R
void D_dot_(); // D.
void _2OVER(); // 2OVER
void Store_3(); // !_3
void _plus__ex_(); // +!
void OFF(); // OFF
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void BLT(); // BLT
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
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void GetDS(); // @DS
void _plus_BIT(); // +BIT
void LLINE(); // LLINE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xed6f = 0xed6f; // UNK_0xed6f size: 68
// {0x00, 0x7c, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0xff, 0x7f, 0x00, 0xf8, 0xff, 0x7f, 0x00, 0xfc, 0x86, 0x61, 0x00, 0x1e, 0xff, 0x7f, 0x00, 0xff, 0xff, 0x7f, 0x80, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x07, 0xfc, 0xff, 0x3f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xfe, 0x3f}

const unsigned short int pp_UNK_0xedb5 = 0xedb5; // UNK_0xedb5 size: 68
// {0x00, 0x00, 0xfe, 0x3f, 0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xfc, 0x3f, 0x3f, 0x00, 0xfc, 0xff, 0xff, 0x07, 0xfc, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0x80, 0xff, 0xff, 0x7f, 0x00, 0xff, 0x86, 0x61, 0x00, 0x1e, 0xff, 0x7f, 0x00, 0xfc, 0xff, 0x7f, 0x00, 0xf8, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00}

const unsigned short int pp_UNK_0xedfb = 0xedfb; // UNK_0xedfb size: 50
// {0xfe, 0x7f, 0x00, 0x00, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0xfc, 0x7f, 0x00, 0x00, 0xfe, 0x00, 0x00}

const unsigned short int pp_UNK_0xee2f = 0xee2f; // UNK_0xee2f size: 34
// {0x01, 0x1e, 0x1f, 0xf0, 0xdc, 0x83, 0xc3, 0x3c, 0x7c, 0xc6, 0xe3, 0x37, 0x3f, 0xff, 0xff, 0xf3, 0xf3, 0x3f, 0x3f, 0xff, 0x7e, 0xf3, 0xc3, 0x37, 0x63, 0x3c, 0x3d, 0xcc, 0xf8, 0xc1, 0x01, 0x1f, 0x00, 0xe0}

const unsigned short int pp_UNK_0xee53 = 0xee53; // UNK_0xee53 size: 2
// {0x00, 0xf0}

const unsigned short int pp_UNK_0xf11c = 0xf11c; // UNK_0xf11c size: 4
// {0x3f, 0x38, 0x00, 0xff}

const unsigned short int pp_UNK_0xf122 = 0xf122; // UNK_0xf122 size: 4
// {0x3f, 0xfc, 0x00, 0xce}

const unsigned short int pp_UNK_0xf128 = 0xf128; // UNK_0xf128 size: 8
// {0x78, 0x30, 0xf8, 0xff, 0xff, 0xf8, 0x30, 0x78}




// 0xed32: db 0x7f 0x00 ' '

// ================================================
// 0xed34: WORD 'UNK_0xed36' codep=0x744d parp=0xed36
// ================================================
IFieldType UNK_0xed36 = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xed39: WORD 'UNK_0xed3b' codep=0x744d parp=0xed3b
// ================================================
IFieldType UNK_0xed3b = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xed3e: WORD 'UNK_0xed40' codep=0x744d parp=0xed40
// ================================================
IFieldType UNK_0xed40 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xed43: WORD 'UNK_0xed45' codep=0x744d parp=0xed45
// ================================================
IFieldType UNK_0xed45 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xed48: WORD 'UNK_0xed4a' codep=0x744d parp=0xed4a
// ================================================
IFieldType UNK_0xed4a = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xed4d: WORD 'UNK_0xed4f' codep=0x744d parp=0xed4f
// ================================================
IFieldType UNK_0xed4f = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xed52: WORD 'UNK_0xed54' codep=0x744d parp=0xed54
// ================================================
IFieldType UNK_0xed54 = {SHIPIDX, 0x25, 0x02};

// ================================================
// 0xed57: WORD 'UNK_0xed59' codep=0x744d parp=0xed59
// ================================================
IFieldType UNK_0xed59 = {SHIPIDX, 0x27, 0x02};
// 0xed5c: db 0x4d 0x74 0x14 0x45 0x04 'Mt E '

// ================================================
// 0xed61: WORD 'UNK_0xed63' codep=0x224c parp=0xed63
// ================================================

void UNK_0xed63() // UNK_0xed63
{
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(7);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xed6d: WORD 'UNK_0xed6f' codep=0x1d29 parp=0xed6f
// ================================================
// 0xed6f: db 0x00 0x7c 0x00 0x00 0x80 0x7f 0x00 0x00 0xff 0x7f 0x00 0xf8 0xff 0x7f 0x00 0xfc 0x86 0x61 0x00 0x1e 0xff 0x7f 0x00 0xff 0xff 0x7f 0x80 0xff 0xff 0x7f 0xc0 0xff 0xff 0x7f 0xe0 0xff 0xff 0x7f 0xf0 0xff 0xff 0x7f 0xf8 0xff 0xff 0x7f 0xfc 0xff 0xff 0x07 0xfc 0xff 0x3f 0x00 0xfc 0xff 0x00 0x00 0xfc 0x3f 0x00 0x00 0xfc 0x1f 0x00 0x00 0xfe 0x3f ' |            a                           ?      ?       ?'

// ================================================
// 0xedb3: WORD 'UNK_0xedb5' codep=0x1d29 parp=0xedb5
// ================================================
// 0xedb5: db 0x00 0x00 0xfe 0x3f 0x00 0x00 0xfc 0x1f 0x00 0x00 0xfc 0x3f 0x3f 0x00 0xfc 0xff 0xff 0x07 0xfc 0xff 0xff 0x7f 0xfc 0xff 0xff 0x7f 0xf8 0xff 0xff 0x7f 0xf0 0xff 0xff 0x7f 0xe0 0xff 0xff 0x7f 0xc0 0xff 0xff 0x7f 0x80 0xff 0xff 0x7f 0x00 0xff 0x86 0x61 0x00 0x1e 0xff 0x7f 0x00 0xfc 0xff 0x7f 0x00 0xf8 0x80 0x7f 0x00 0x00 0x00 0x7c 0x00 0x00 '   ?       ??                             a            |  '

// ================================================
// 0xedf9: WORD 'UNK_0xedfb' codep=0x1d29 parp=0xedfb
// ================================================
// 0xedfb: db 0xfe 0x7f 0x00 0x00 0x7f 0x00 0xfc 0xff 0x00 0x00 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0x00 0xfc 0x7f 0x00 0x00 0xfe 0x00 0x00 '                                        '

// ================================================
// 0xee2d: WORD 'UNK_0xee2f' codep=0x1d29 parp=0xee2f
// ================================================
// 0xee2f: db 0x01 0x1e 0x1f 0xf0 0xdc 0x83 0xc3 0x3c 0x7c 0xc6 0xe3 0x37 0x3f 0xff 0xff 0xf3 0xf3 0x3f 0x3f 0xff 0x7e 0xf3 0xc3 0x37 0x63 0x3c 0x3d 0xcc 0xf8 0xc1 0x01 0x1f 0x00 0xe0 '       <|  7?    ?? ~  7c<=       '

// ================================================
// 0xee51: WORD 'UNK_0xee53' codep=0x1d29 parp=0xee53
// ================================================
// 0xee53: db 0x00 0xf0 '  '

// ================================================
// 0xee55: WORD '(.MASS)' codep=0x224c parp=0xee61
// ================================================
// entry

void _ro__dot_MASS_rc_() // (.MASS)
{
  Push(0x0032);
  Push(0x63ef+UNK_0xed3b.offset); // IFIELD
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x0032);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x63ef+UNK_0xed36.offset); // IFIELD
  UNK_0xed63(); // UNK_0xed63
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(9);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x63ef+UNK_0xed4f.offset); // IFIELD
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x63ef+UNK_0xed4a.offset); // IFIELD
  UNK_0xed63(); // UNK_0xed63
  _0_gt_(); // 0>
  Push(0x63ef+UNK_0xed45.offset); // IFIELD
  UNK_0xed63(); // UNK_0xed63
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Push(0x63ef+UNK_0xed40.offset); // IFIELD
  UNK_0xed63(); // UNK_0xed63
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Push(5);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x63ef+UNK_0xed59.offset); // IFIELD
  Store_3(); // !_3
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
  Push(0x63ef+UNK_0xed59.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(4);
  DrawR(); // .R
  StoreCRS(); // !CRS
}


// ================================================
// 0xeed5: WORD '(.ACC)' codep=0x224c parp=0xeee0
// ================================================
// entry

void _ro__dot_ACC_rc_() // (.ACC)
{
  Push(0x63ef+UNK_0xed3b.offset); // IFIELD
  UNK_0xed63(); // UNK_0xed63
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(0x63ef+UNK_0xed59.offset); // IFIELD
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(0x63ef+UNK_0xed54.offset); // IFIELD
  Store_3(); // !_3
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(2);
  SetColor(BLACK);
  Push(0x008b);
  Push(0x002c);
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  SWAP(); // SWAP
  POS_dot_PXT(); // POS.PXT
  Push(0x63ef+UNK_0xed54.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(2);
  DrawR(); // .R
  StoreCRS(); // !CRS
}


// ================================================
// 0xef18: WORD 'UNK_0xef1a' codep=0x224c parp=0xef1a
// ================================================

void UNK_0xef1a() // UNK_0xef1a
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
  Push2Words("*STARSHIP-HOLD");
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
      Push(0x63ef+INST_dash_QTY.offset); // IFIELD
      Push(Read16(Pop())); // @
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
  _plus__ex_(); // +!
  Draw(); // .
  StoreCRS(); // !CRS
}


// ================================================
// 0xef8e: WORD 'UNK_0xef90' codep=0x224c parp=0xef90
// ================================================

void UNK_0xef90() // UNK_0xef90
{
  SetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x0011);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(0x0020);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(0x0055);
  Push(0x006a);
  POS_dot_(); // POS.
  Push(pp_UNK_0xed6f); // UNK_0xed6f
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(0x0055);
  Push(0x004f);
  POS_dot_(); // POS.
  Push(pp_UNK_0xedb5); // UNK_0xedb5
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(0x000a);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(0x0028);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(0x0065);
  Push(0x0059);
  POS_dot_(); // POS.
  Push(pp_UNK_0xedfb); // UNK_0xedfb
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(0x0016);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(0x000c);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(0x008d);
  Push(0x005f);
  POS_dot_(); // POS.
  Push(pp_UNK_0xee2f); // UNK_0xee2f
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xf012: WORD 'UNK_0xf014' codep=0x224c parp=0xf014
// ================================================

void UNK_0xf014() // UNK_0xf014
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
// 0xf024: WORD 'UNK_0xf026' codep=0x224c parp=0xf026
// ================================================

void UNK_0xf026() // UNK_0xf026
{
  Push(0x63ef+UNK_0xed40.offset); // IFIELD
  UNK_0xed63(); // UNK_0xed63
  _0_gt_(); // 0>
  SetColor(RED);
  Push(Pop() * Pop()); // *
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
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
  UNK_0xf014(); // UNK_0xf014
}


// ================================================
// 0xf096: WORD 'UNK_0xf098' codep=0x224c parp=0xf098
// ================================================

void UNK_0xf098() // UNK_0xf098
{
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(0x63ef+UNK_0xed4f.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SetColor(GREY1);
  Push(Pop() * Pop()); // *
  StoreCOLOR(); // !COLOR
  BLT(); // BLT
  Push(Pop()*2); // 2*
}


// ================================================
// 0xf0b6: WORD '(.PODS)' codep=0x224c parp=0xf0c2
// ================================================
// entry

void _ro__dot_PODS_rc_() // (.PODS)
{
  unsigned short int i, imax;
  GetCRS(); // @CRS
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(2);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(2);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_UNK_0xee53); // UNK_0xee53
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(1);
  Push(8);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(3);
    Push(Pop() * Pop()); // *
    Push(0x0076);
    Push(Pop() + Pop()); // +
    Push(pp_XBLT); // XBLT
    Store_3(); // !_3
    Push(0x0050);
    Push(i); // I
    Push(1);
    _gt_(); // >
    UNK_0xf098(); // UNK_0xf098
    Push(0x0059);
    Push(i); // I
    Push(2);
    _st_(); // <
    UNK_0xf098(); // UNK_0xf098
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  StoreCRS(); // !CRS
}


// ================================================
// 0xf11a: WORD 'UNK_0xf11c' codep=0x1d29 parp=0xf11c
// ================================================
// 0xf11c: db 0x3f 0x38 0x00 0xff '?8  '

// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x1d29 parp=0xf122
// ================================================
// 0xf122: db 0x3f 0xfc 0x00 0xce '?   '

// ================================================
// 0xf126: WORD 'UNK_0xf128' codep=0x1d29 parp=0xf128
// ================================================
// 0xf128: db 0x78 0x30 0xf8 0xff 0xff 0xf8 0x30 0x78 'x0    0x'

// ================================================
// 0xf130: WORD 'UNK_0xf132' codep=0x224c parp=0xf132
// ================================================

void UNK_0xf132() // UNK_0xf132
{
  Push(0x63ef+UNK_0xed45.offset); // IFIELD
  UNK_0xed63(); // UNK_0xed63
  _0_gt_(); // 0>
  SetColor(LT_dash_BLUE);
  Push(Pop() * Pop()); // *
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(3);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(9);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(0x0060);
  Push(0x006b);
  POS_dot_(); // POS.
  Push(pp_UNK_0xf11c); // UNK_0xf11c
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(0x0040);
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(pp_UNK_0xf122); // UNK_0xf122
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xf172: WORD 'UNK_0xf174' codep=0x224c parp=0xf174
// ================================================

void UNK_0xf174() // UNK_0xf174
{
  Push(0x63ef+UNK_0xed4a.offset); // IFIELD
  UNK_0xed63(); // UNK_0xed63
  if (Pop() != 0)
  {
    SetColor(LT_dash_BLUE);
  } else
  {
    SetColor(DK_dash_BLUE);
  }
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(8);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(8);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_UNK_0xf128); // UNK_0xf128
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(0x006b);
  Push(0x0058);
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xf1aa: WORD '(.SHIP)' codep=0x224c parp=0xf1b6
// ================================================
// entry

void _ro__dot_SHIP_rc_() // (.SHIP)
{
  GetCRS(); // @CRS
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  UNK_0xef90(); // UNK_0xef90
  UNK_0xf026(); // UNK_0xf026
  UNK_0xf174(); // UNK_0xf174
  UNK_0xf132(); // UNK_0xf132
  _ro__dot_PODS_rc_(); // (.PODS)
  StoreCRS(); // !CRS
}


// ================================================
// 0xf1cc: WORD '(BALANCEMESS)' codep=0x224c parp=0xf1de
// ================================================
// entry

void _ro_BALANCEMESS_rc_() // (BALANCEMESS)
{
  GetCRS(); // @CRS
  Push(0);
  _0MESS(); // 0MESS
  Push(5);
  Push(0x0017);
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  PRINT("YOUR ACCOUNT BALANCE IS: ", 25); // (.")
  Push(0xc558); // probable 'OVD@BALANCE'
  MODULE(); // MODULE
  D_dot_(); // D.
  PRINT("MU", 2); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf21b: WORD 'UNK_0xf21d' codep=0x224c parp=0xf21d
// ================================================

void UNK_0xf21d() // UNK_0xf21d
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
  _plus__ex_(); // +!
  PRINT("CONFIGURATION", 13); // (.")
}


// ================================================
// 0xf30e: WORD 'UNK_0xf310' codep=0x224c parp=0xf310
// ================================================

void UNK_0xf310() // UNK_0xf310
{
  CTINIT(); // CTINIT
  Push(7);
  Push(0x00ae);
  POS_dot_(); // POS.
  PRINT("CARGO PODS..", 12); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("CARGO PODS:", 11); // (.")
  Push(7);
  Push(0x009f);
  POS_dot_(); // POS.
  PRINT("ENGINES", 7); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("ENGINES :", 9); // (.")
  Push(7);
  Push(0x0095);
  POS_dot_(); // POS.
  PRINT("SHIELDING", 9); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("SHIELDS :", 9); // (.")
  Push(7);
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("ARMOR", 5); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("ARMOR   :", 9); // (.")
  Push(7);
  Push(0x0081);
  POS_dot_(); // POS.
  PRINT("MISSILE LAUNCHER", 16); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("MISSILES:", 9); // (.")
  Push(7);
  Push(0x0077);
  POS_dot_(); // POS.
  PRINT("LASER CANNON", 12); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("LASERS  :", 9); // (.")
}


// ================================================
// 0xf40d: WORD 'UNK_0xf40f' codep=0x224c parp=0xf40f
// ================================================

void UNK_0xf40f() // UNK_0xf40f
{
  unsigned short int i, imax;
  UNK_0xf310(); // UNK_0xf310
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
    Push(0x0036);
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
  PRINT("ACCELERATION:   G", 17); // (.")
  Push(0x0056);
  Push(0x0022);
  POS_dot_(); // POS.
  PRINT("ENDURIUM:", 9); // (.")
  _ro__dot_MASS_rc_(); // (.MASS)
  _ro__dot_ACC_rc_(); // (.ACC)
  UNK_0xef1a(); // UNK_0xef1a
  _ro_BALANCEMESS_rc_(); // (BALANCEMESS)
}


// ================================================
// 0xf4eb: WORD '(.CONFIG)' codep=0x224c parp=0xf4f9
// ================================================
// entry

void _ro__dot_CONFIG_rc_() // (.CONFIG)
{
  UNK_0xf21d(); // UNK_0xf21d
  UNK_0xf40f(); // UNK_0xf40f
  _ro__dot_SHIP_rc_(); // (.SHIP)
}

// 0xf501: db 0x53 0x48 0x49 0x50 0x2d 0x47 0x52 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x53 0x48 0x49 0x50 0x2d 0x43 0x4f 0x4e 0x46 0x49 0x47 0x55 0x52 0x41 0x54 0x49 0x4f 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x90 0x16 0x31 0x32 0x37 0x4c 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SHIP-GR-VOC_____________________for SHIP-CONFIGURATION------- )  127LE-VOC_____________________ '

