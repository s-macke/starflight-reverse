// ====== OVERLAY 'SHIPGRPH-OV' ======
// store offset = 0xed20
// overlay size   = 0x0840

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WED36  codep:0x744d parp:0xed36 size:0x0003 C-string:'WED36'
//           WED3B  codep:0x744d parp:0xed3b size:0x0003 C-string:'WED3B'
//           WED40  codep:0x744d parp:0xed40 size:0x0003 C-string:'WED40'
//           WED45  codep:0x744d parp:0xed45 size:0x0003 C-string:'WED45'
//           WED4A  codep:0x744d parp:0xed4a size:0x0003 C-string:'WED4A'
//           WED4F  codep:0x744d parp:0xed4f size:0x0003 C-string:'WED4F'
//           WED54  codep:0x744d parp:0xed54 size:0x0003 C-string:'WED54'
//           WED59  codep:0x744d parp:0xed59 size:0x0003 C-string:'WED59'
//           WED5E  codep:0x744d parp:0xed5e size:0x0003 C-string:'WED5E'
//           WED63  codep:0x224c parp:0xed63 size:0x000a C-string:'WED63'
//           WED6F  codep:0x1d29 parp:0xed6f size:0x0044 C-string:'WED6F'
//           WEDB5  codep:0x1d29 parp:0xedb5 size:0x0044 C-string:'WEDB5'
//           WEDFB  codep:0x1d29 parp:0xedfb size:0x0032 C-string:'WEDFB'
//           WEE2F  codep:0x1d29 parp:0xee2f size:0x0022 C-string:'WEE2F'
//           WEE53  codep:0x1d29 parp:0xee53 size:0x0002 C-string:'WEE53'
//         (.MASS)  codep:0x224c parp:0xee61 size:0x0074 C-string:'_ro__dot_MASS_rc_'
//          (.ACC)  codep:0x224c parp:0xeee0 size:0x0038 C-string:'_ro__dot_ACC_rc_'
//           WEF1A  codep:0x224c parp:0xef1a size:0x0074 C-string:'WEF1A'
//           WEF90  codep:0x224c parp:0xef90 size:0x0082 C-string:'WEF90'
//           WF014  codep:0x224c parp:0xf014 size:0x0010 C-string:'WF014'
//           WF026  codep:0x224c parp:0xf026 size:0x0070 C-string:'WF026'
//           WF098  codep:0x224c parp:0xf098 size:0x001e C-string:'WF098'
//         (.PODS)  codep:0x224c parp:0xf0c2 size:0x0058 C-string:'_ro__dot_PODS_rc_'
//           WF11C  codep:0x1d29 parp:0xf11c size:0x0004 C-string:'WF11C'
//           WF122  codep:0x1d29 parp:0xf122 size:0x0004 C-string:'WF122'
//           WF128  codep:0x1d29 parp:0xf128 size:0x0008 C-string:'WF128'
//           WF132  codep:0x224c parp:0xf132 size:0x0040 C-string:'WF132'
//           WF174  codep:0x224c parp:0xf174 size:0x0036 C-string:'WF174'
//         (.SHIP)  codep:0x224c parp:0xf1b6 size:0x0016 C-string:'_ro__dot_SHIP_rc_'
//   (BALANCEMESS)  codep:0x224c parp:0xf1de size:0x003d C-string:'_ro_BALANCEMESS_rc_'
//           WF21D  codep:0x224c parp:0xf21d size:0x00f1 C-string:'WF21D'
//           WF310  codep:0x224c parp:0xf310 size:0x00fd C-string:'WF310'
//           WF40F  codep:0x224c parp:0xf40f size:0x00dc C-string:'WF40F'
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
void _plus__ex__2(); // +!_2
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
const unsigned short int pp_WED6F = 0xed6f; // WED6F size: 68
// {0x00, 0x7c, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0xff, 0x7f, 0x00, 0xf8, 0xff, 0x7f, 0x00, 0xfc, 0x86, 0x61, 0x00, 0x1e, 0xff, 0x7f, 0x00, 0xff, 0xff, 0x7f, 0x80, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x07, 0xfc, 0xff, 0x3f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xfe, 0x3f}

const unsigned short int pp_WEDB5 = 0xedb5; // WEDB5 size: 68
// {0x00, 0x00, 0xfe, 0x3f, 0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xfc, 0x3f, 0x3f, 0x00, 0xfc, 0xff, 0xff, 0x07, 0xfc, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0x80, 0xff, 0xff, 0x7f, 0x00, 0xff, 0x86, 0x61, 0x00, 0x1e, 0xff, 0x7f, 0x00, 0xfc, 0xff, 0x7f, 0x00, 0xf8, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00}

const unsigned short int pp_WEDFB = 0xedfb; // WEDFB size: 50
// {0xfe, 0x7f, 0x00, 0x00, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0xfc, 0x7f, 0x00, 0x00, 0xfe, 0x00, 0x00}

const unsigned short int pp_WEE2F = 0xee2f; // WEE2F size: 34
// {0x01, 0x1e, 0x1f, 0xf0, 0xdc, 0x83, 0xc3, 0x3c, 0x7c, 0xc6, 0xe3, 0x37, 0x3f, 0xff, 0xff, 0xf3, 0xf3, 0x3f, 0x3f, 0xff, 0x7e, 0xf3, 0xc3, 0x37, 0x63, 0x3c, 0x3d, 0xcc, 0xf8, 0xc1, 0x01, 0x1f, 0x00, 0xe0}

const unsigned short int pp_WEE53 = 0xee53; // WEE53 size: 2
// {0x00, 0xf0}

const unsigned short int pp_WF11C = 0xf11c; // WF11C size: 4
// {0x3f, 0x38, 0x00, 0xff}

const unsigned short int pp_WF122 = 0xf122; // WF122 size: 4
// {0x3f, 0xfc, 0x00, 0xce}

const unsigned short int pp_WF128 = 0xf128; // WF128 size: 8
// {0x78, 0x30, 0xf8, 0xff, 0xff, 0xf8, 0x30, 0x78}




// 0xed32: db 0x7f 0x00 ' '

// ================================================
// 0xed34: WORD 'WED36' codep=0x744d parp=0xed36
// ================================================
IFieldType WED36 = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xed39: WORD 'WED3B' codep=0x744d parp=0xed3b
// ================================================
IFieldType WED3B = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xed3e: WORD 'WED40' codep=0x744d parp=0xed40
// ================================================
IFieldType WED40 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xed43: WORD 'WED45' codep=0x744d parp=0xed45
// ================================================
IFieldType WED45 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xed48: WORD 'WED4A' codep=0x744d parp=0xed4a
// ================================================
IFieldType WED4A = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xed4d: WORD 'WED4F' codep=0x744d parp=0xed4f
// ================================================
IFieldType WED4F = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xed52: WORD 'WED54' codep=0x744d parp=0xed54
// ================================================
IFieldType WED54 = {SHIPIDX, 0x25, 0x02};

// ================================================
// 0xed57: WORD 'WED59' codep=0x744d parp=0xed59
// ================================================
IFieldType WED59 = {SHIPIDX, 0x27, 0x02};

// ================================================
// 0xed5c: WORD 'WED5E' codep=0x744d parp=0xed5e
// ================================================
// orphan
IFieldType WED5E = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xed61: WORD 'WED63' codep=0x224c parp=0xed63 params=1 returns=1
// ================================================

void WED63() // WED63
{
  Push((Read16(Pop() + 1)&0xFF) & 7); //  1+ C@ 7 AND
}


// ================================================
// 0xed6d: WORD 'WED6F' codep=0x1d29 parp=0xed6f
// ================================================
// 0xed6f: db 0x00 0x7c 0x00 0x00 0x80 0x7f 0x00 0x00 0xff 0x7f 0x00 0xf8 0xff 0x7f 0x00 0xfc 0x86 0x61 0x00 0x1e 0xff 0x7f 0x00 0xff 0xff 0x7f 0x80 0xff 0xff 0x7f 0xc0 0xff 0xff 0x7f 0xe0 0xff 0xff 0x7f 0xf0 0xff 0xff 0x7f 0xf8 0xff 0xff 0x7f 0xfc 0xff 0xff 0x07 0xfc 0xff 0x3f 0x00 0xfc 0xff 0x00 0x00 0xfc 0x3f 0x00 0x00 0xfc 0x1f 0x00 0x00 0xfe 0x3f ' |            a                           ?      ?       ?'

// ================================================
// 0xedb3: WORD 'WEDB5' codep=0x1d29 parp=0xedb5
// ================================================
// 0xedb5: db 0x00 0x00 0xfe 0x3f 0x00 0x00 0xfc 0x1f 0x00 0x00 0xfc 0x3f 0x3f 0x00 0xfc 0xff 0xff 0x07 0xfc 0xff 0xff 0x7f 0xfc 0xff 0xff 0x7f 0xf8 0xff 0xff 0x7f 0xf0 0xff 0xff 0x7f 0xe0 0xff 0xff 0x7f 0xc0 0xff 0xff 0x7f 0x80 0xff 0xff 0x7f 0x00 0xff 0x86 0x61 0x00 0x1e 0xff 0x7f 0x00 0xfc 0xff 0x7f 0x00 0xf8 0x80 0x7f 0x00 0x00 0x00 0x7c 0x00 0x00 '   ?       ??                             a            |  '

// ================================================
// 0xedf9: WORD 'WEDFB' codep=0x1d29 parp=0xedfb
// ================================================
// 0xedfb: db 0xfe 0x7f 0x00 0x00 0x7f 0x00 0xfc 0xff 0x00 0x00 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0x00 0xfc 0x7f 0x00 0x00 0xfe 0x00 0x00 '                                        '

// ================================================
// 0xee2d: WORD 'WEE2F' codep=0x1d29 parp=0xee2f
// ================================================
// 0xee2f: db 0x01 0x1e 0x1f 0xf0 0xdc 0x83 0xc3 0x3c 0x7c 0xc6 0xe3 0x37 0x3f 0xff 0xff 0xf3 0xf3 0x3f 0x3f 0xff 0x7e 0xf3 0xc3 0x37 0x63 0x3c 0x3d 0xcc 0xf8 0xc1 0x01 0x1f 0x00 0xe0 '       <|  7?    ?? ~  7c<=       '

// ================================================
// 0xee51: WORD 'WEE53' codep=0x1d29 parp=0xee53
// ================================================
// 0xee53: db 0x00 0xf0 '  '

// ================================================
// 0xee55: WORD '(.MASS)' codep=0x224c parp=0xee61 params=0 returns=0
// ================================================
// entry

void _ro__dot_MASS_rc_() // (.MASS)
{
  Push(0x0032 + ((Read16(0x63ef+WED3B.offset)==0?1:0)==0?1:0) * 0x0032); // 0x0032 WED3B<IFIELD> @ 0= 0= 0x0032 * +
  Push(0x63ef+WED36.offset); // WED36<IFIELD>
  WED63(); // WED63
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Pop() * 9); //  9 *
  Push(Pop() + Pop()); // +
  Push(Read16(0x63ef+WED4F.offset)); // WED4F<IFIELD> @
  _plus_BIT(); // +BIT
  Push(Pop() * 0x000a); //  0x000a *
  Push(Pop() + Pop()); // +
  Push(0x63ef+WED4A.offset); // WED4A<IFIELD>
  WED63(); // WED63
  _0_gt_(); // 0>
  Push(0x63ef+WED45.offset); // WED45<IFIELD>
  WED63(); // WED63
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Push(0x63ef+WED40.offset); // WED40<IFIELD>
  WED63(); // WED63
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Push(Pop() * 5); //  5 *
  Push(Pop() + Pop()); // +
  Push(0x63ef+WED59.offset); // WED59<IFIELD>
  Store_3(); // !_3
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
  Push(Read16(0x63ef+WED59.offset)); // WED59<IFIELD> @
  Push(4);
  DrawR(); // .R
  StoreCRS(); // !CRS
}


// ================================================
// 0xeed5: WORD '(.ACC)' codep=0x224c parp=0xeee0 params=0 returns=1
// ================================================
// entry

void _ro__dot_ACC_rc_() // (.ACC)
{
  Push(0x63ef+WED3B.offset); // WED3B<IFIELD>
  WED63(); // WED63
  Push(Pop() * 0x01f4); //  0x01f4 *
  Push(Read16(0x63ef+WED59.offset)); // WED59<IFIELD> @
  _slash_(); // /
  Push(0x63ef+WED54.offset); // WED54<IFIELD>
  Store_3(); // !_3
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(2);
  GetColor(BLACK);
  Push(0x008b);
  Push(0x002c);
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  SWAP(); // SWAP
  POS_dot_PXT(); // POS.PXT
  Push(Read16(0x63ef+WED54.offset)); // WED54<IFIELD> @
  Push(2);
  DrawR(); // .R
  StoreCRS(); // !CRS
}


// ================================================
// 0xef18: WORD 'WEF1A' codep=0x224c parp=0xef1a
// ================================================

void WEF1A() // WEF1A
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
      Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
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
// 0xef8e: WORD 'WEF90' codep=0x224c parp=0xef90 params=0 returns=0
// ================================================

void WEF90() // WEF90
{
  GetColor(DK_dash_BLUE);
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
  Push(pp_WED6F); // WED6F
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(0x0055);
  Push(0x004f);
  POS_dot_(); // POS.
  Push(pp_WEDB5); // WEDB5
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
  Push(pp_WEDFB); // WEDFB
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
  Push(pp_WEE2F); // WEE2F
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xf012: WORD 'WF014' codep=0x224c parp=0xf014 params=5 returns=0
// ================================================

void WF014() // WF014
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
// 0xf024: WORD 'WF026' codep=0x224c parp=0xf026 params=0 returns=18
// ================================================

void WF026() // WF026
{
  Push(0x63ef+WED40.offset); // WED40<IFIELD>
  WED63(); // WED63
  _0_gt_(); // 0>
  GetColor(RED);
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
  WF014(); // WF014
}


// ================================================
// 0xf096: WORD 'WF098' codep=0x224c parp=0xf098 params=3 returns=1
// ================================================

void WF098() // WF098
{
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(((Pop() & Read16(0x63ef+WED4F.offset))==0?1:0)==0?1:0); //  WED4F<IFIELD> @ AND 0= 0=
  GetColor(GREY1);
  Push(Pop() * Pop()); // *
  StoreCOLOR(); // !COLOR
  BLT(); // BLT
  Push(Pop() * 2); //  2*
}


// ================================================
// 0xf0b6: WORD '(.PODS)' codep=0x224c parp=0xf0c2 params=0 returns=0
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
  Push(pp_WEE53); // WEE53
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
    Push(i * 3 + 0x0076); // I 3 * 0x0076 +
    Push(pp_XBLT); // XBLT
    Store_3(); // !_3
    Push(0x0050);
    Push(i); // I
    Push(1);
    _gt_(); // >
    WF098(); // WF098
    Push(0x0059);
    Push(i); // I
    Push(2);
    _st_(); // <
    WF098(); // WF098
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  StoreCRS(); // !CRS
}


// ================================================
// 0xf11a: WORD 'WF11C' codep=0x1d29 parp=0xf11c
// ================================================
// 0xf11c: db 0x3f 0x38 0x00 0xff '?8  '

// ================================================
// 0xf120: WORD 'WF122' codep=0x1d29 parp=0xf122
// ================================================
// 0xf122: db 0x3f 0xfc 0x00 0xce '?   '

// ================================================
// 0xf126: WORD 'WF128' codep=0x1d29 parp=0xf128
// ================================================
// 0xf128: db 0x78 0x30 0xf8 0xff 0xff 0xf8 0x30 0x78 'x0    0x'

// ================================================
// 0xf130: WORD 'WF132' codep=0x224c parp=0xf132 params=0 returns=0
// ================================================

void WF132() // WF132
{
  Push(0x63ef+WED45.offset); // WED45<IFIELD>
  WED63(); // WED63
  _0_gt_(); // 0>
  GetColor(LT_dash_BLUE);
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
  Push(pp_WF11C); // WF11C
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(0x0040);
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(pp_WF122); // WF122
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xf172: WORD 'WF174' codep=0x224c parp=0xf174 params=0 returns=0
// ================================================

void WF174() // WF174
{
  Push(0x63ef+WED4A.offset); // WED4A<IFIELD>
  WED63(); // WED63
  if (Pop() != 0)
  {
    GetColor(LT_dash_BLUE);
  } else
  {
    GetColor(DK_dash_BLUE);
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
  Push(pp_WF128); // WF128
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(0x006b);
  Push(0x0058);
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xf1aa: WORD '(.SHIP)' codep=0x224c parp=0xf1b6 params=0 returns=18
// ================================================
// entry

void _ro__dot_SHIP_rc_() // (.SHIP)
{
  GetCRS(); // @CRS
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  WEF90(); // WEF90
  WF026(); // WF026
  WF174(); // WF174
  WF132(); // WF132
  _ro__dot_PODS_rc_(); // (.PODS)
  StoreCRS(); // !CRS
}


// ================================================
// 0xf1cc: WORD '(BALANCEMESS)' codep=0x224c parp=0xf1de params=2 returns=0
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
  Push(0xc558); // 'OVD@BALANCE'
  MODULE(); // MODULE
  D_dot_(); // D.
  PRINT("MU", 2); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf21b: WORD 'WF21D' codep=0x224c parp=0xf21d params=0 returns=0
// ================================================

void WF21D() // WF21D
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
// 0xf30e: WORD 'WF310' codep=0x224c parp=0xf310 params=0 returns=0
// ================================================

void WF310() // WF310
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
// 0xf40d: WORD 'WF40F' codep=0x224c parp=0xf40f
// ================================================

void WF40F() // WF40F
{
  unsigned short int i, imax;
  WF310(); // WF310
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x000f);
    Push(i * 0x000a + 0x0036); // I 0x000a * 0x0036 +
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
  PRINT("ACCELERATION:   G", 17); // (.")
  Push(0x0056);
  Push(0x0022);
  POS_dot_(); // POS.
  PRINT("ENDURIUM:", 9); // (.")
  _ro__dot_MASS_rc_(); // (.MASS)
  _ro__dot_ACC_rc_(); // (.ACC)
  WEF1A(); // WEF1A
  _ro_BALANCEMESS_rc_(); // (BALANCEMESS)
}


// ================================================
// 0xf4eb: WORD '(.CONFIG)' codep=0x224c parp=0xf4f9
// ================================================
// entry

void _ro__dot_CONFIG_rc_() // (.CONFIG)
{
  WF21D(); // WF21D
  WF40F(); // WF40F
  _ro__dot_SHIP_rc_(); // (.SHIP)
}

// 0xf501: db 0x53 0x48 0x49 0x50 0x2d 0x47 0x52 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x53 0x48 0x49 0x50 0x2d 0x43 0x4f 0x4e 0x46 0x49 0x47 0x55 0x52 0x41 0x54 0x49 0x4f 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x90 0x16 0x31 0x32 0x37 0x4c 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SHIP-GR-VOC_____________________for SHIP-CONFIGURATION------- )  127LE-VOC_____________________ '

