// ====== OVERLAY 'ASSCREW-OV' ======
// store offset = 0xeab0
// overlay size   = 0x0ab0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEAC6  codep:0x224c wordp:0xeac6 size:0x0008 C-string:'WEAC6'
//           WEAD0  codep:0x2214 wordp:0xead0 size:0x0002 C-string:'WEAD0'
//           WEAD4  codep:0x2214 wordp:0xead4 size:0x0002 C-string:'WEAD4'
//           WEAD8  codep:0x1d29 wordp:0xead8 size:0x0002 C-string:'WEAD8'
//           WEADC  codep:0x224c wordp:0xeadc size:0x0020 C-string:'WEADC'
//           WEAFE  codep:0x1d29 wordp:0xeafe size:0x0004 C-string:'WEAFE'
//           WEB04  codep:0x224c wordp:0xeb04 size:0x001a C-string:'WEB04'
//           WEB20  codep:0x224c wordp:0xeb20 size:0x0027 C-string:'WEB20'
//           WEB49  codep:0x224c wordp:0xeb49 size:0x0018 C-string:'WEB49'
//           WEB63  codep:0x7394 wordp:0xeb63 size:0x0006 C-string:'WEB63'
//           WEB6B  codep:0x7394 wordp:0xeb6b size:0x0006 C-string:'WEB6B'
//           WEB73  codep:0x7394 wordp:0xeb73 size:0x0006 C-string:'WEB73'
//           WEB7B  codep:0x7420 wordp:0xeb7b size:0x0003 C-string:'WEB7B'
//           WEB80  codep:0x7420 wordp:0xeb80 size:0x0003 C-string:'WEB80'
//           WEB85  codep:0x7420 wordp:0xeb85 size:0x0003 C-string:'WEB85'
//           WEB8A  codep:0x7420 wordp:0xeb8a size:0x0003 C-string:'WEB8A'
//           WEB8F  codep:0x7420 wordp:0xeb8f size:0x0003 C-string:'WEB8F'
//           WEB94  codep:0x7420 wordp:0xeb94 size:0x0003 C-string:'WEB94'
//           WEB99  codep:0x7420 wordp:0xeb99 size:0x0003 C-string:'WEB99'
//           WEB9E  codep:0x7420 wordp:0xeb9e size:0x0003 C-string:'WEB9E'
//           WEBA3  codep:0x7420 wordp:0xeba3 size:0x0003 C-string:'WEBA3'
//           WEBA8  codep:0x7420 wordp:0xeba8 size:0x0003 C-string:'WEBA8'
//           WEBAD  codep:0x224c wordp:0xebad size:0x0012 C-string:'WEBAD'
//           WEBC1  codep:0x224c wordp:0xebc1 size:0x00f0 C-string:'WEBC1'
//           WECB3  codep:0x1d29 wordp:0xecb3 size:0x0002 C-string:'WECB3'
//           WECB7  codep:0x224c wordp:0xecb7 size:0x0006 C-string:'WECB7'
//           WECBF  codep:0x224c wordp:0xecbf size:0x0112 C-string:'WECBF'
//           WEDD3  codep:0x224c wordp:0xedd3 size:0x0028 C-string:'WEDD3'
//           WEDFD  codep:0x224c wordp:0xedfd size:0x0032 C-string:'WEDFD'
//           WEE31  codep:0x224c wordp:0xee31 size:0x014d C-string:'WEE31'
//           WEF80  codep:0x224c wordp:0xef80 size:0x00d0 C-string:'WEF80'
//           WF052  codep:0x224c wordp:0xf052 size:0x010d C-string:'WF052'
//           WF161  codep:0x224c wordp:0xf161 size:0x0034 C-string:'WF161'
//           WF197  codep:0x224c wordp:0xf197 size:0x0032 C-string:'WF197'
//           WF1CB  codep:0x224c wordp:0xf1cb size:0x003a C-string:'WF1CB'
//           WF207  codep:0x224c wordp:0xf207 size:0x001c C-string:'WF207'
//           WF225  codep:0x224c wordp:0xf225 size:0x004a C-string:'WF225'
//           WF271  codep:0x224c wordp:0xf271 size:0x0069 C-string:'WF271'
//           WF2DC  codep:0x224c wordp:0xf2dc size:0x000c C-string:'WF2DC'
//           WF2EA  codep:0x224c wordp:0xf2ea size:0x007b C-string:'WF2EA'
//           WF367  codep:0x224c wordp:0xf367 size:0x0065 C-string:'WF367'
//           WF3CE  codep:0x224c wordp:0xf3ce size:0x0040 C-string:'WF3CE'
//           WF410  codep:0x224c wordp:0xf410 size:0x0030 C-string:'WF410'
//           WF442  codep:0x224c wordp:0xf442 size:0x0046 C-string:'WF442'
//     (U-ASSCREW)  codep:0x224c wordp:0xf498 size:0x0000 C-string:'_ro_U_dash_ASSCREW_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_IsEGA; // ?EGA
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color DK_dash_GREE; // DK-GREE
extern Color RED; // RED
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
void DrawR(); // .R
void _2OVER(); // 2OVER
void D_gt_(); // D>
void KEY_2(); // KEY_2
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void StoreCOLOR(); // !COLOR
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_3FONT(); // >3FONT
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SC(); // SAVE-SC
void SCR_dash_RES(); // SCR-RES
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void POLY_dash_WI(); // POLY-WI
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void CURSORS(); // CURSORS
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void CI(); // CI
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEAD8 = 0xead8; // WEAD8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEAFE = 0xeafe; // WEAFE size: 4
// {0xd5, 0x57, 0x00, 0xf5}

const unsigned short int pp_WECB3 = 0xecb3; // WECB3 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WEAD0 = 0xead0; // WEAD0
const unsigned short int cc_WEAD4 = 0xead4; // WEAD4


// 0xeac2: db 0xab 0x00 '  '

// ================================================
// 0xeac4: WORD 'WEAC6' codep=0x224c wordp=0xeac6 params=0 returns=0
// ================================================

void WEAC6() // WEAC6
{
  Push(0xb752); // 'OVTRIM_1'
  MODULE(); // MODULE
}


// ================================================
// 0xeace: WORD 'WEAD0' codep=0x2214 wordp=0xead0
// ================================================
// 0xead0: dw 0x0003

// ================================================
// 0xead2: WORD 'WEAD4' codep=0x2214 wordp=0xead4
// ================================================
// 0xead4: dw 0x0004

// ================================================
// 0xead6: WORD 'WEAD8' codep=0x1d29 wordp=0xead8
// ================================================
// 0xead8: db 0x3a 0x20 ': '

// ================================================
// 0xeada: WORD 'WEADC' codep=0x224c wordp=0xeadc
// ================================================

void WEADC() // WEADC
{
  Push(0x1194); Push(0x0000);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    _i_KEY(); // 'KEY
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeafc: WORD 'WEAFE' codep=0x1d29 wordp=0xeafe
// ================================================
// orphan
// 0xeafe: db 0xd5 0x57 0x00 0xf5 ' W  '

// ================================================
// 0xeb02: WORD 'WEB04' codep=0x224c wordp=0xeb04
// ================================================
// orphan

void WEB04() // WEB04
{
  GetCRS(); // @CRS
  Push(5);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(pp_WEAFE); // WEAFE
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(6);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  StoreCRS(); // !CRS
}


// ================================================
// 0xeb1e: WORD 'WEB20' codep=0x224c wordp=0xeb20 params=0 returns=0
// ================================================

void WEB20() // WEB20
{
  Push(Read16(pp_WEAD8)); // WEAD8 @
  Push(1);
  _gt_(); // >
  if (Pop() == 0) return;
  PRINT("PAGE THROUGH FILES: ^\\", 22); // (.")
}


// ================================================
// 0xeb47: WORD 'WEB49' codep=0x224c wordp=0xeb49
// ================================================

void WEB49() // WEB49
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xeb61: WORD 'WEB63' codep=0x7394 wordp=0xeb63
// ================================================
LoadDataType WEB63 = {CREWMEMBERIDX, 0x00, 0x08, 0x14, 0x6ac8};

// ================================================
// 0xeb69: WORD 'WEB6B' codep=0x7394 wordp=0xeb6b
// ================================================
LoadDataType WEB6B = {CREWMEMBERIDX, 0x12, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xeb71: WORD 'WEB73' codep=0x7394 wordp=0xeb73
// ================================================
LoadDataType WEB73 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xeb79: WORD 'WEB7B' codep=0x7420 wordp=0xeb7b
// ================================================
IFieldType WEB7B = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xeb7e: WORD 'WEB80' codep=0x7420 wordp=0xeb80
// ================================================
IFieldType WEB80 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xeb83: WORD 'WEB85' codep=0x7420 wordp=0xeb85
// ================================================
IFieldType WEB85 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xeb88: WORD 'WEB8A' codep=0x7420 wordp=0xeb8a
// ================================================
IFieldType WEB8A = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xeb8d: WORD 'WEB8F' codep=0x7420 wordp=0xeb8f
// ================================================
IFieldType WEB8F = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xeb92: WORD 'WEB94' codep=0x7420 wordp=0xeb94
// ================================================
IFieldType WEB94 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xeb97: WORD 'WEB99' codep=0x7420 wordp=0xeb99
// ================================================
IFieldType WEB99 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xeb9c: WORD 'WEB9E' codep=0x7420 wordp=0xeb9e
// ================================================
IFieldType WEB9E = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xeba1: WORD 'WEBA3' codep=0x7420 wordp=0xeba3
// ================================================
IFieldType WEBA3 = {CREWMEMBERIDX, 0x22, 0x01};

// ================================================
// 0xeba6: WORD 'WEBA8' codep=0x7420 wordp=0xeba8
// ================================================
IFieldType WEBA8 = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xebab: WORD 'WEBAD' codep=0x224c wordp=0xebad params=0 returns=1
// ================================================

void WEBAD() // WEBAD
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    GetColor(BLUE);
    return;
  }
  GetColor(DK_dash_BLUE);
}


// ================================================
// 0xebbf: WORD 'WEBC1' codep=0x224c wordp=0xebc1
// ================================================

void WEBC1() // WEBC1
{
  unsigned short int i, imax;
  Push(0x0049);
  Push(1);
  Push(8);
  Push(0x0043);
  GetColor(GREY2);
  POLY_dash_WI(); // POLY-WI
  Push(0x003c);
  Push(0x0044);
  Push(8);
  Push(0x009d);
  GetColor(GREY2);
  POLY_dash_WI(); // POLY-WI
  GetColor(WHITE);
  GetColor(WHITE);
  WEBAD(); // WEBAD
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(8);
    OVER(); // OVER
    Push(0x0049);
    LLINE(); // LLINE
    Push(0x009d + i); // 0x009d I +
    Push(8);
    OVER(); // OVER
    Push(0x003c);
    LLINE(); // LLINE
    Push(2);
    Push(6 + i); // 6 I +
    Push(0x009c);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x0044);
    Push(0x003d + i); // 0x003d I +
    Push(0x009c);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(2);
    Push(0x004a + i); // 0x004a I +
    Push(0x0041);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x0042 + i); // 0x0042 I +
    Push(0x003f);
    OVER(); // OVER
    Push(0x0049);
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  _gt_1FONT(); // >1FONT
  Push(0x000a);
  Push(0x0047);
  POS_dot_(); // POS.
  PRINT("FILE#", 5); // (.")
  Push(1);
  Push(8);
  Push(Read16(cc_WEAD0)); // WEAD0
  Push(1);
  Push(0x004a);
  Push(Read16(cc_WEAD4)); // WEAD4
  Push(0x0041);
  Push(0x004a);
  Push(Read16(cc_WEAD0)); // WEAD0
  Push(0x009c);
  Push(8);
  Push(Read16(cc_WEAD4)); // WEAD4
  Push(0x009c);
  Push(0x003d);
  Push(Read16(cc_WEAD0)); // WEAD0
  Push(0x0043);
  Push(0x003f);
  Push(Read16(cc_WEAD0)); // WEAD0
  Push(6);
  WEAC6(); // WEAC6
}


// ================================================
// 0xecb1: WORD 'WECB3' codep=0x1d29 wordp=0xecb3
// ================================================
// 0xecb3: db 0x3a 0x20 ': '

// ================================================
// 0xecb5: WORD 'WECB7' codep=0x224c wordp=0xecb7 params=3 returns=0
// ================================================

void WECB7() // WECB7
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xecbd: WORD 'WECBF' codep=0x224c wordp=0xecbf
// ================================================

void WECBF() // WECBF
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(pp_WECB3); // WECB3
  Store_2(); // !_2
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x000a);
  Push(0x0029);
  Push(a); // I
  WECB7(); // WECB7
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(a); // I
  WECB7(); // WECB7
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(a); // I
  WECB7(); // WECB7
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(a); // I
  WECB7(); // WECB7
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(a); // I
  WECB7(); // WECB7
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(6);
  Push(a); // I
  WECB7(); // WECB7
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  Push(a); // R>
  WECB7(); // WECB7
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xedd1: WORD 'WEDD3' codep=0x224c wordp=0xedd3 params=0 returns=1
// ================================================

void WEDD3() // WEDD3
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0);
  while(1)
  {
    Push(Read16(0x65e1+WEBA3.offset)&0xFF); // WEBA3<IFIELD> C@
    Push(0x0018);
    _st_(); // <
    if (Pop() == 0) break;

    INEXT(); // INEXT
    Push(Read16(0x65e1+WEB9E.offset)&0xFF); // WEB9E<IFIELD> C@
    _0_gt_(); // 0>
    Push(Pop() + Pop()); // +
  }
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xedfb: WORD 'WEDFD' codep=0x224c wordp=0xedfd params=1 returns=0
// ================================================

void WEDFD() // WEDFD
{
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(Read16(0x65e1+WEBA3.offset)&0xFF); // WEBA3<IFIELD> C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    IPREV(); // IPREV
    return;
  }
  _0_gt_(); // 0>
  WEDD3(); // WEDD3
  Push(Read16(0x65e1+WEBA3.offset)&0xFF); // WEBA3<IFIELD> C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xee2f: WORD 'WEE31' codep=0x224c wordp=0xee31
// ================================================

void WEE31() // WEE31
{
  unsigned short int i, imax;
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0x001c);
  Push(0x00c3);
  GetColor(BLUE);
  Draw1LOGO(); // .1LOGO
  CTINIT(); // CTINIT
  Push(0x000a);
  Push(0x00a7);
  POS_dot_(); // POS.
  PRINT("CAPTAIN", 7); // (.")
  Push(0x000a);
  Push(0x0093);
  POS_dot_(); // POS.
  PRINT("NAVIGATOR", 9); // (.")
  Push(0x000a);
  Push(0x009d);
  POS_dot_(); // POS.
  PRINT("SCIENCE OFFICER", 15); // (.")
  Push(0x000a);
  Push(0x0089);
  POS_dot_(); // POS.
  PRINT("ENGINEER", 8); // (.")
  Push(0x000a);
  Push(0x007f);
  POS_dot_(); // POS.
  PRINT("COMMUNICATIONS", 14); // (.")
  Push(0x000a);
  Push(0x0075);
  POS_dot_(); // POS.
  PRINT("DOCTOR", 6); // (.")
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  _gt_3FONT(); // >3FONT
  Push(0x0030);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("CREW", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("ASSIGNMENT", 10); // (.")
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x009c);
    Push(0x00c6 + i); // 0x00c6 I +
    Push(3);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(i + 1); // I 1+
    Push(0x00b8);
    OVER(); // OVER
    Push(0x00c5);
    LLINE(); // LLINE
    Push(0x009d + i); // 0x009d I +
    Push(0x00b8);
    OVER(); // OVER
    Push(0x00c5);
    LLINE(); // LLINE
    Push(0x009c);
    Push(0x00b6 + i); // 0x00b6 I +
    Push(3);
    OVER(); // OVER
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(2);
  Push(0x00c6);
  Push(Read16(cc_WEAD4)); // WEAD4
  Push(0x009c);
  Push(0x00c6);
  Push(Read16(cc_WEAD0)); // WEAD0
  Push(2);
  Push(0x00b8);
  Push(Read16(cc_WEAD0)); // WEAD0
  Push(0x009c);
  Push(0x00b8);
  Push(Read16(cc_WEAD4)); // WEAD4
  Push(4);
  WEAC6(); // WEAC6
  WEBC1(); // WEBC1
  Push(9);
  WECBF(); // WECBF
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xef7e: WORD 'WEF80' codep=0x224c wordp=0xef80
// ================================================

void WEF80() // WEF80
{
  unsigned short int a;
  Push(Read16(pp_WECB3)); // WECB3 @
  a = Pop(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(a); // I
  WECB7(); // WECB7
  CTINIT(); // CTINIT
  GetColor(BLACK);
  GetColor(WHITE);
  GetColor(WHITE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x65e1+WEB7B.offset); // WEB7B<IFIELD>
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    _do__dot_(); // $.
  } else
  {
    Pop(); // DROP
  }
  Push(0x007a);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(Read16(0x65e1+WEB99.offset)&0xFF); // WEB99<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(a); // I
  WECB7(); // WECB7
  Push(Read16(0x65e1+WEB80.offset)&0xFF); // WEB80<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(WEB63); // from 'CREWMEMBER'
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(a); // I
  WECB7(); // WECB7
  Push(Read16(0x65e1+WEB85.offset)&0xFF); // WEB85<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(a); // I
  WECB7(); // WECB7
  Push(Read16(0x65e1+WEB8A.offset)&0xFF); // WEB8A<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(WEB73); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(a); // I
  WECB7(); // WECB7
  Push(Read16(0x65e1+WEB8F.offset)&0xFF); // WEB8F<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(6);
  Push(a); // R>
  WECB7(); // WECB7
  Push(Read16(0x65e1+WEB94.offset)&0xFF); // WEB94<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(WEB6B); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
}


// ================================================
// 0xf050: WORD 'WF052' codep=0x224c wordp=0xf052
// ================================================

void WF052() // WF052
{
  unsigned short int a, i, imax;
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  GetCRS(); // @CRS
  _gt_1FONT(); // >1FONT
  Push(Read16(pp_WECB3)); // WECB3 @
  a = Pop(); // >R
  Push(0x000e);
  GetColor(GREY2);
  Push(0x0030 + a); // 0x0030 I +
  Push(0x000a);
  POS_dot_PXT(); // POS.PXT
  Push(3);
  GetColor(GREY2);
  Push(0x0030 + a); // 0x0030 I +
  Push(0x007a);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  GetColor(BLACK);
  GetColor(WHITE);
  GetColor(WHITE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(3);
    GetColor(GREY2);
    Push((i * 7 + 6) + a); // I 7 * 6 + J +
    Push(0x004a);
    POS_dot_PXT(); // POS.PXT
    Push(2 + (i==4?1:0) * 5); // 2 I 4 = 5 * +
    GetColor(GREY2);
    Push((i * 7 + 6) + a); // I 7 * 6 + J +
    Push(0x008d + (i==4?1:0) * 0xffea); // 0x008d I 4 = 0xffea * +
    POS_dot_PXT(); // POS.PXT
    i++;
  } while(i<imax); // (LOOP)

  Push(2);
  GetColor(GREY2);
  Push(0x003d + a); // 0x003d I +
  Push(0x0028);
  POS_dot_PXT(); // POS.PXT
  Push(0x0028);
  Push(0x003d);
  Push(a); // R>
  WECB7(); // WECB7
  Push((Read16(0x65e1+WEBA3.offset)&0xFF) + 1); // WEBA3<IFIELD> C@ 1+
  Push(2);
  DrawR(); // .R
  Push(Read16(0x65e1+WEB9E.offset) & 3); // WEB9E<IFIELD> @ 3 AND
  if (Pop() != 0)
  {
    WEF80(); // WEF80
  }
  Push((Read16(0x65e1+WEB9E.offset)&0xFF) & 2); // WEB9E<IFIELD> C@ 2 AND
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  if (Pop() != 0)
  {
    GetColor(RED);
  } else
  {
    GetColor(GREY2);
  }
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WECB3) + 0x0033); // WECB3 @ 0x0033 +
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(0x0041);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  _gt_3FONT(); // >3FONT
  PRINT("DEAD", 4); // (.")
  StoreCRS(); // !CRS
  _gt_1FONT(); // >1FONT
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xf15f: WORD 'WF161' codep=0x224c wordp=0xf161
// ================================================

void WF161() // WF161
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(a); // R>
  Push(0x00a7);
  SWAP(); // SWAP
  Push(Pop() * 0x000a); //  0x000a *
  _dash_(); // -
  Push(0x005f);
  _2DUP(); // 2DUP
  Push(0x000e);
  Push(0);
  _2SWAP(); // 2SWAP
  POS_dot_PXT(); // POS.PXT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x65e1+WEB7B.offset); // WEB7B<IFIELD>
  _do__dot_(); // $.
  StoreCRS(); // !CRS
}


// ================================================
// 0xf195: WORD 'WF197' codep=0x224c wordp=0xf197 params=1 returns=0
// ================================================
// orphan

void WF197() // WF197
{
  unsigned short int i, imax;
  Push(0x65e1+WEBA8.offset); // WEBA8<IFIELD>
  Push(0x0012);
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _gt_C_plus_S(); // >C+S
    CI(); // CI
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push((Read16(0x65e1+WEB9E.offset)&0xFF) & 0x00f7); // WEB9E<IFIELD> C@ 0x00f7 AND
      Push(0x65e1+WEB9E.offset); // WEB9E<IFIELD>
      C_ex__2(); // C!_2
    }
    ICLOSE(); // ICLOSE
    Push(3);
    i += Pop();
  } while(i<imax); // (/LOOP)

}


// ================================================
// 0xf1c9: WORD 'WF1CB' codep=0x224c wordp=0xf1cb
// ================================================

void WF1CB() // WF1CB
{
  unsigned short int i, imax;
  CTINIT(); // CTINIT
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x65e1+WEBA8.offset) + i * 3); // WEBA8<IFIELD> I 3 * +
    Get_gt_C_plus_S(); // @>C+S
    CI(); // CI
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+WEB9E.offset) & 8); // WEB9E<IFIELD> @ 8 AND
      if (Pop() != 0)
      {
        Push(i); // I
        WF161(); // WF161
      }
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf205: WORD 'WF207' codep=0x224c wordp=0xf207
// ================================================

void WF207() // WF207
{
  unsigned short int a;
  a = Pop(); // >R
  CI(); // CI
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+WEBA8.offset) + a * 3); // WEBA8<IFIELD> I 3 * +
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
  Push(a); // R>
  WF161(); // WF161
}


// ================================================
// 0xf223: WORD 'WF225' codep=0x224c wordp=0xf225
// ================================================

void WF225() // WF225
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(a); // R>
  StoreCOLOR(); // !COLOR
  Push(0x0022);
  Push(0x005b);
  POS_dot_(); // POS.
  WEB20(); // WEB20
  Push(0x000a);
  Push(0x0055);
  POS_dot_(); // POS.
  PRINT("PRESS SPACEBAR TO ASSIGN CREWMEMBER", 35); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf26f: WORD 'WF271' codep=0x224c wordp=0xf271
// ================================================

void WF271() // WF271
{
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
  Push(Read16(regsp)); // DUP
  Push(Pop()==5?1:0); //  5 =
  if (Pop() != 0)
  {
    Push(Pop() + 1); //  1+
    Push(0x0012);
    Push(pp_WBLT); // WBLT
    Store_2(); // !_2
    GetColor(BLACK);
    WF225(); // WF225
    GetCRS(); // @CRS
    Push(0x0025);
    Push(0x0055);
    POS_dot_(); // POS.
    CTINIT(); // CTINIT
    PRINT("PRESS SPACEBAR TO EXIT", 22); // (.")
    StoreCRS(); // !CRS
    GetColor(BLACK);
    StoreCOLOR(); // !COLOR
  }
  Push((Pop() + 1) * 0x000a); //  1+ 0x000a *
  Push(0x00a9);
  SWAP(); // SWAP
  _dash_(); // -
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xf2da: WORD 'WF2DC' codep=0x224c wordp=0xf2dc params=1 returns=0
// ================================================

void WF2DC() // WF2DC
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  WEDFD(); // WEDFD
  WF052(); // WF052
}


// ================================================
// 0xf2e8: WORD 'WF2EA' codep=0x224c wordp=0xf2ea
// ================================================

void WF2EA() // WF2EA
{
  Push(0);
  WF225(); // WF225
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(Read16(0x65e1+WEB9E.offset) & 2); // WEB9E<IFIELD> @ 2 AND
  if (Pop() != 0)
  {
    Push(0x005b);
    Push(0x000a);
    _2DUP(); // 2DUP
    SWAP(); // SWAP
    POS_dot_(); // POS.
    PRINT("YOU CAN'T ASSIGN ", 17); // (.")
    GetCRS(); // @CRS
    WEB49(); // WEB49
    Push(0x0022);
  } else
  {
    Push(0x005b);
    Push(0x002c);
    _2DUP(); // 2DUP
    SWAP(); // SWAP
    POS_dot_(); // POS.
    PRINT("THIS FILE IS EMPTY", 18); // (.")
    Push(0x0012);
  }
  WEADC(); // WEADC
  GetColor(BLACK);
  _2SWAP(); // 2SWAP
  POS_dot_PXT(); // POS.PXT
  StoreCRS(); // !CRS
  GetColor(WHITE);
  WF225(); // WF225
  Push(0);
}


// ================================================
// 0xf365: WORD 'WF367' codep=0x224c wordp=0xf367
// ================================================

void WF367() // WF367
{
  CTINIT(); // CTINIT
  Push(0x0029);
  Push(0x006e);
  POS_dot_(); // POS.
  PRINT("REPORT TO PERSONNEL:", 20); // (.")
  Push(0x002a);
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("THERE ARE NO LIVING", 19); // (.")
  Push(0x002a);
  Push(0x005a);
  POS_dot_(); // POS.
  PRINT("CREWMEMBERS ON FILE", 19); // (.")
}


// ================================================
// 0xf3cc: WORD 'WF3CE' codep=0x224c wordp=0xf3ce
// ================================================

void WF3CE() // WF3CE
{
  unsigned short int a;
  a = Pop(); // >R
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    WF2DC(); // WF2DC
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Push(((Read16(0x65e1+WEB9E.offset)&0xFF) & 3) + 1==0?1:0); // WEB9E<IFIELD> C@ 3 AND 1 XOR 0=
      if (Pop() != 0)
      {
        Push(a); // I
        WF271(); // WF271
        Push(a); // I
        WF207(); // WF207
        Push(1);
      } else
      {
        WF2EA(); // WF2EA
      }
    } else
    {
      Push(0);
    }
  } while(Pop() == 0);
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf40e: WORD 'WF410' codep=0x224c wordp=0xf410 params=0 returns=1
// ================================================

void WF410() // WF410
{
  unsigned short int i, imax;
  Push(pp_WEAD8); // WEAD8
  _099(); // 099
  IFIRST(); // IFIRST
  Push(0);
  Push(0x0019);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(((Read16(0x65e1+WEB9E.offset)&0xFF) & 3) + 3==2?1:0); // WEB9E<IFIELD> C@ 3 AND 3 XOR 2 =
    Push(Read16(regsp)); // DUP
    Push(pp_WEAD8); // WEAD8
    _plus__ex__2(); // +!_2
    Push(Pop() | Pop()); // OR
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf440: WORD 'WF442' codep=0x224c wordp=0xf442 params=0 returns=0
// ================================================

void WF442() // WF442
{
  unsigned short int i, imax;
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  do
  {
    Push((Read16(0x65e1+WEB9E.offset)&0xFF) & 0x00f7); // WEB9E<IFIELD> C@ 0x00f7 AND
    Push(0x65e1+WEB9E.offset); // WEB9E<IFIELD>
    C_ex__2(); // C!_2
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x0012);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x65e1+WEBA8.offset) + i); // WEBA8<IFIELD> I +
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x65e1+WEB9E.offset)&0xFF | 8); // WEB9E<IFIELD> C@ 8 OR
    Push(0x65e1+WEB9E.offset); // WEB9E<IFIELD>
    C_ex__2(); // C!_2
    ICLOSE(); // ICLOSE
    Push(3);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf488: WORD '(U-ASSCREW)' codep=0x224c wordp=0xf498
// ================================================
// entry

void _ro_U_dash_ASSCREW_rc_() // (U-ASSCREW)
{
  unsigned short int i, imax;
  WEE31(); // WEE31
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WF410(); // WF410
  if (Pop() != 0)
  {
    WF1CB(); // WF1CB
    Push(pp_NCRS); // NCRS
    _099(); // 099
    Push(pp_OCRS); // OCRS
    _099(); // 099
    CURSORS(); // CURSORS
    Push(pp_ABLT); // ABLT
    Store_2(); // !_2
    Push(9);
    Push(pp_LBLT); // LBLT
    Store_2(); // !_2
    Push(0x0090);
    Push(pp_WBLT); // WBLT
    Store_2(); // !_2
    Push(8);
    Push(0x00a9);
    POS_dot_(); // POS.
    GetColor(WHITE);
    GetColor(RED);
    GetColor(DK_dash_GREE);
    IsMRC(); // ?MRC
    StoreCOLOR(); // !COLOR
    Push(pp_XORMODE); // XORMODE
    ON_2(); // ON_2
    BLT(); // BLT
    GetColor(WHITE);
    WF225(); // WF225
    Push2Words("*ASSIGN");
    _gt_C_plus_S(); // >C+S
    Push(6);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push((0x65e1+WEBA8.offset) + i * 3); // WEBA8<IFIELD> I 3 * +
      Get_gt_C_plus_S(); // @>C+S
      Push(!((Read16(0x65e1+WEB9E.offset)&0xFF) & 8)); // WEB9E<IFIELD> C@ 8 AND NOT
      if (Pop() != 0)
      {
        ICLOSE(); // ICLOSE
        Push(i==0?1:0); // I 0=
        if (Pop() != 0)
        {
          Push2Words("*PERSON");
          _gt_C_plus_S(); // >C+S
          IOPEN(); // IOPEN
          CI(); // CI
          CDROP(); // CDROP
          ICLOSE(); // ICLOSE
          _gt_C_plus_S(); // >C+S
        } else
        {
          Push((0x65e1+WEBA8.offset) + (i - 1) * 3); // WEBA8<IFIELD> I 1- 3 * +
          Get_gt_C_plus_S(); // @>C+S
        }
      }
      WF052(); // WF052
      Push(i); // I
      WF3CE(); // WF3CE
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

    WF442(); // WF442
    ICLOSE(); // ICLOSE
    KEY_2(); // KEY_2
    Pop(); // DROP
  } else
  {
    WF367(); // WF367
    WEADC(); // WEADC
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xf550: db 0x41 0x43 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ACR_____________ '

