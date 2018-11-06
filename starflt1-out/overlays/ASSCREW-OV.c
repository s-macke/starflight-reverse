// ====== OVERLAY 'ASSCREW-OV' ======
// store offset = 0xea70
// overlay size   = 0x0af0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WEA86  codep:0x224c parp:0xea86 size:0x0008 C-string:'WEA86'
//           WEA90  codep:0x2214 parp:0xea90 size:0x0002 C-string:'WEA90'
//           WEA94  codep:0x2214 parp:0xea94 size:0x0002 C-string:'WEA94'
//           WEA98  codep:0x1d29 parp:0xea98 size:0x0002 C-string:'WEA98'
//           WEA9C  codep:0x224c parp:0xea9c size:0x0020 C-string:'WEA9C'
//           WEABE  codep:0x1d29 parp:0xeabe size:0x0004 C-string:'WEABE'
//           WEAC4  codep:0x224c parp:0xeac4 size:0x001a C-string:'WEAC4'
//           WEAE0  codep:0x224c parp:0xeae0 size:0x0027 C-string:'WEAE0'
//           WEB09  codep:0x224c parp:0xeb09 size:0x0018 C-string:'WEB09'
//           WEB23  codep:0x73ea parp:0xeb23 size:0x0006 C-string:'WEB23'
//           WEB2B  codep:0x73ea parp:0xeb2b size:0x0006 C-string:'WEB2B'
//           WEB33  codep:0x73ea parp:0xeb33 size:0x0006 C-string:'WEB33'
//           WEB3B  codep:0x744d parp:0xeb3b size:0x0003 C-string:'WEB3B'
//           WEB40  codep:0x744d parp:0xeb40 size:0x0003 C-string:'WEB40'
//           WEB45  codep:0x744d parp:0xeb45 size:0x0003 C-string:'WEB45'
//           WEB4A  codep:0x744d parp:0xeb4a size:0x0003 C-string:'WEB4A'
//           WEB4F  codep:0x744d parp:0xeb4f size:0x0003 C-string:'WEB4F'
//           WEB54  codep:0x744d parp:0xeb54 size:0x0003 C-string:'WEB54'
//           WEB59  codep:0x744d parp:0xeb59 size:0x0003 C-string:'WEB59'
//           WEB5E  codep:0x744d parp:0xeb5e size:0x0003 C-string:'WEB5E'
//           WEB63  codep:0x744d parp:0xeb63 size:0x0003 C-string:'WEB63'
//           WEB68  codep:0x744d parp:0xeb68 size:0x0003 C-string:'WEB68'
//           WEB6D  codep:0x224c parp:0xeb6d size:0x0012 C-string:'WEB6D'
//           WEB81  codep:0x224c parp:0xeb81 size:0x00f7 C-string:'WEB81'
//           WEC7A  codep:0x1d29 parp:0xec7a size:0x0002 C-string:'WEC7A'
//           WEC7E  codep:0x224c parp:0xec7e size:0x0006 C-string:'WEC7E'
//           WEC86  codep:0x224c parp:0xec86 size:0x0112 C-string:'WEC86'
//           WED9A  codep:0x224c parp:0xed9a size:0x0028 C-string:'WED9A'
//           WEDC4  codep:0x224c parp:0xedc4 size:0x0032 C-string:'WEDC4'
//           WEDF8  codep:0x224c parp:0xedf8 size:0x014d C-string:'WEDF8'
//           WEF47  codep:0x224c parp:0xef47 size:0x00d0 C-string:'WEF47'
//           WF019  codep:0x224c parp:0xf019 size:0x010d C-string:'WF019'
//           WF128  codep:0x224c parp:0xf128 size:0x0034 C-string:'WF128'
//           WF15E  codep:0x224c parp:0xf15e size:0x0032 C-string:'WF15E'
//           WF192  codep:0x224c parp:0xf192 size:0x003a C-string:'WF192'
//           WF1CE  codep:0x224c parp:0xf1ce size:0x001c C-string:'WF1CE'
//           WF1EC  codep:0x224c parp:0xf1ec size:0x004a C-string:'WF1EC'
//           WF238  codep:0x224c parp:0xf238 size:0x0069 C-string:'WF238'
//           WF2A3  codep:0x224c parp:0xf2a3 size:0x000c C-string:'WF2A3'
//           WF2B1  codep:0x224c parp:0xf2b1 size:0x007b C-string:'WF2B1'
//           WF32E  codep:0x224c parp:0xf32e size:0x0065 C-string:'WF32E'
//           WF395  codep:0x224c parp:0xf395 size:0x0040 C-string:'WF395'
//           WF3D7  codep:0x224c parp:0xf3d7 size:0x0030 C-string:'WF3D7'
//           WF409  codep:0x224c parp:0xf409 size:0x0046 C-string:'WF409'
//     (U-ASSCREW)  codep:0x224c parp:0xf45f size:0x0000 C-string:'_ro_U_dash_ASSCREW_rc_'

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
extern Color DK_dash_GREEN; // DK-GREEN
extern Color RED; // RED
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
void DrawR(); // .R
void _2OVER(); // 2OVER
void D_gt_(); // D>
void KEY_2(); // KEY_2
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void ON_3(); // ON_3
void OFF(); // OFF
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
void _gt_DISPLAY(); // >DISPLAY
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SCR(); // SAVE-SCR
void SCR_dash_RES(); // SCR-RES
void DARK(); // DARK
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_3FONT(); // >3FONT
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void CURSORSPACE(); // CURSORSPACE
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
void LLINE(); // LLINE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEA98 = 0xea98; // WEA98 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEABE = 0xeabe; // WEABE size: 4
// {0xd5, 0x57, 0x00, 0xf5}

const unsigned short int pp_WEC7A = 0xec7a; // WEC7A size: 2
// {0x3a, 0x20}


const unsigned short int cc_WEA90 = 0xea90; // WEA90
const unsigned short int cc_WEA94 = 0xea94; // WEA94


// 0xea82: db 0xab 0x00 '  '

// ================================================
// 0xea84: WORD 'WEA86' codep=0x224c parp=0xea86 params=0 returns=0
// ================================================

void WEA86() // WEA86
{
  Push(0xbdba); // 'OVTRIMS'
  MODULE(); // MODULE
}


// ================================================
// 0xea8e: WORD 'WEA90' codep=0x2214 parp=0xea90
// ================================================
// 0xea90: dw 0x0003

// ================================================
// 0xea92: WORD 'WEA94' codep=0x2214 parp=0xea94
// ================================================
// 0xea94: dw 0x0004

// ================================================
// 0xea96: WORD 'WEA98' codep=0x1d29 parp=0xea98
// ================================================
// 0xea98: db 0x3a 0x20 ': '

// ================================================
// 0xea9a: WORD 'WEA9C' codep=0x224c parp=0xea9c
// ================================================

void WEA9C() // WEA9C
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
// 0xeabc: WORD 'WEABE' codep=0x1d29 parp=0xeabe
// ================================================
// 0xeabe: db 0xd5 0x57 0x00 0xf5 ' W  '

// ================================================
// 0xeac2: WORD 'WEAC4' codep=0x224c parp=0xeac4 params=0 returns=0
// ================================================
// orphan

void WEAC4() // WEAC4
{
  GetCRS(); // @CRS
  Push(5);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_WEABE); // WEABE
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(6);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  StoreCRS(); // !CRS
}


// ================================================
// 0xeade: WORD 'WEAE0' codep=0x224c parp=0xeae0 params=0 returns=0
// ================================================

void WEAE0() // WEAE0
{
  Push(Read16(pp_WEA98)); // WEA98 @
  Push(1);
  _gt_(); // >
  if (Pop() == 0) return;
  PRINT("PAGE THROUGH FILES: ^\\", 22); // (.")
}


// ================================================
// 0xeb07: WORD 'WEB09' codep=0x224c parp=0xeb09 params=11 returns=0
// ================================================

void WEB09() // WEB09
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xeb21: WORD 'WEB23' codep=0x73ea parp=0xeb23
// ================================================
LoadDataType WEB23 = {CREWMEMBERIDX, 0x00, 0x08, 0x14, 0x6489};

// ================================================
// 0xeb29: WORD 'WEB2B' codep=0x73ea parp=0xeb2b
// ================================================
LoadDataType WEB2B = {CREWMEMBERIDX, 0x12, 0x01, 0x14, 0x6489};

// ================================================
// 0xeb31: WORD 'WEB33' codep=0x73ea parp=0xeb33
// ================================================
LoadDataType WEB33 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xeb39: WORD 'WEB3B' codep=0x744d parp=0xeb3b
// ================================================
IFieldType WEB3B = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xeb3e: WORD 'WEB40' codep=0x744d parp=0xeb40
// ================================================
IFieldType WEB40 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xeb43: WORD 'WEB45' codep=0x744d parp=0xeb45
// ================================================
IFieldType WEB45 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xeb48: WORD 'WEB4A' codep=0x744d parp=0xeb4a
// ================================================
IFieldType WEB4A = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xeb4d: WORD 'WEB4F' codep=0x744d parp=0xeb4f
// ================================================
IFieldType WEB4F = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xeb52: WORD 'WEB54' codep=0x744d parp=0xeb54
// ================================================
IFieldType WEB54 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xeb57: WORD 'WEB59' codep=0x744d parp=0xeb59
// ================================================
IFieldType WEB59 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xeb5c: WORD 'WEB5E' codep=0x744d parp=0xeb5e
// ================================================
IFieldType WEB5E = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xeb61: WORD 'WEB63' codep=0x744d parp=0xeb63
// ================================================
IFieldType WEB63 = {CREWMEMBERIDX, 0x22, 0x01};

// ================================================
// 0xeb66: WORD 'WEB68' codep=0x744d parp=0xeb68
// ================================================
IFieldType WEB68 = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xeb6b: WORD 'WEB6D' codep=0x224c parp=0xeb6d params=0 returns=1
// ================================================

void WEB6D() // WEB6D
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
// 0xeb7f: WORD 'WEB81' codep=0x224c parp=0xeb81 params=0 returns=19
// ================================================

void WEB81() // WEB81
{
  unsigned short int i, imax;
  Push(0x0049);
  Push(1);
  Push(8);
  Push(0x0043);
  GetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0x003c);
  Push(0x0044);
  Push(8);
  Push(0x009d);
  GetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  GetColor(WHITE);
  GetColor(WHITE);
  WEB6D(); // WEB6D
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
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
  PRINT("FILE", 4); // (.")
  Push(2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  WEAC4(); // WEAC4
  Push(1);
  Push(8);
  Push(Read16(cc_WEA90)); // WEA90
  Push(1);
  Push(0x004a);
  Push(Read16(cc_WEA94)); // WEA94
  Push(0x0041);
  Push(0x004a);
  Push(Read16(cc_WEA90)); // WEA90
  Push(0x009c);
  Push(8);
  Push(Read16(cc_WEA94)); // WEA94
  Push(0x009c);
  Push(0x003d);
  Push(Read16(cc_WEA90)); // WEA90
  Push(0x0043);
  Push(0x003f);
  Push(Read16(cc_WEA90)); // WEA90
  Push(6);
  WEA86(); // WEA86
}


// ================================================
// 0xec78: WORD 'WEC7A' codep=0x1d29 parp=0xec7a
// ================================================
// 0xec7a: db 0x3a 0x20 ': '

// ================================================
// 0xec7c: WORD 'WEC7E' codep=0x224c parp=0xec7e params=3 returns=0
// ================================================

void WEC7E() // WEC7E
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xec84: WORD 'WEC86' codep=0x224c parp=0xec86 params=1 returns=0
// ================================================

void WEC86() // WEC86
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(pp_WEC7A); // WEC7A
  Store_3(); // !_3
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x000a);
  Push(0x0029);
  Push(a); // I
  WEC7E(); // WEC7E
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(a); // I
  WEC7E(); // WEC7E
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(a); // I
  WEC7E(); // WEC7E
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(a); // I
  WEC7E(); // WEC7E
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(a); // I
  WEC7E(); // WEC7E
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(6);
  Push(a); // I
  WEC7E(); // WEC7E
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  Push(a); // R>
  WEC7E(); // WEC7E
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xed98: WORD 'WED9A' codep=0x224c parp=0xed9a params=0 returns=1
// ================================================

void WED9A() // WED9A
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0);
  while(1)
  {
    Push(Read16(0x63ef+WEB63.offset)&0xFF); // WEB63<IFIELD> C@
    Push(0x0018);
    _st_(); // <
    if (Pop() == 0) break;

    INEXT(); // INEXT
    Push(Read16(0x63ef+WEB5E.offset)&0xFF); // WEB5E<IFIELD> C@
    _0_gt_(); // 0>
    Push(Pop() + Pop()); // +
  }
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xedc2: WORD 'WEDC4' codep=0x224c parp=0xedc4 params=1 returns=0
// ================================================

void WEDC4() // WEDC4
{
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(Read16(0x63ef+WEB63.offset)&0xFF); // WEB63<IFIELD> C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    IPREV(); // IPREV
    return;
  }
  _0_gt_(); // 0>
  WED9A(); // WED9A
  Push(Read16(0x63ef+WEB63.offset)&0xFF); // WEB63<IFIELD> C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xedf6: WORD 'WEDF8' codep=0x224c parp=0xedf8 params=0 returns=32
// ================================================

void WEDF8() // WEDF8
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
  Push(Read16(cc_WEA94)); // WEA94
  Push(0x009c);
  Push(0x00c6);
  Push(Read16(cc_WEA90)); // WEA90
  Push(2);
  Push(0x00b8);
  Push(Read16(cc_WEA90)); // WEA90
  Push(0x009c);
  Push(0x00b8);
  Push(Read16(cc_WEA94)); // WEA94
  Push(4);
  WEA86(); // WEA86
  WEB81(); // WEB81
  Push(9);
  WEC86(); // WEC86
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xef45: WORD 'WEF47' codep=0x224c parp=0xef47
// ================================================

void WEF47() // WEF47
{
  unsigned short int a;
  Push(Read16(pp_WEC7A)); // WEC7A @
  a = Pop(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(a); // I
  WEC7E(); // WEC7E
  CTINIT(); // CTINIT
  GetColor(BLACK);
  GetColor(BLACK);
  GetColor(WHITE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x63ef+WEB3B.offset); // WEB3B<IFIELD>
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
  Store_3(); // !_3
  Push(Read16(0x63ef+WEB59.offset)&0xFF); // WEB59<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(a); // I
  WEC7E(); // WEC7E
  Push(Read16(0x63ef+WEB40.offset)&0xFF); // WEB40<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(WEB23); // from 'CREWMEMBER'
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(a); // I
  WEC7E(); // WEC7E
  Push(Read16(0x63ef+WEB45.offset)&0xFF); // WEB45<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(a); // I
  WEC7E(); // WEC7E
  Push(Read16(0x63ef+WEB4A.offset)&0xFF); // WEB4A<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(WEB33); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(a); // I
  WEC7E(); // WEC7E
  Push(Read16(0x63ef+WEB4F.offset)&0xFF); // WEB4F<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(6);
  Push(a); // R>
  WEC7E(); // WEC7E
  Push(Read16(0x63ef+WEB54.offset)&0xFF); // WEB54<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(WEB2B); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
}


// ================================================
// 0xf017: WORD 'WF019' codep=0x224c parp=0xf019 params=0 returns=0
// ================================================

void WF019() // WF019
{
  unsigned short int a, i, imax;
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  GetCRS(); // @CRS
  _gt_1FONT(); // >1FONT
  Push(Read16(pp_WEC7A)); // WEC7A @
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
  GetColor(BLACK);
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
  WEC7E(); // WEC7E
  Push((Read16(0x63ef+WEB63.offset)&0xFF) + 1); // WEB63<IFIELD> C@ 1+
  Push(2);
  DrawR(); // .R
  Push(Read16(0x63ef+WEB5E.offset) & 3); // WEB5E<IFIELD> @ 3 AND
  if (Pop() != 0)
  {
    WEF47(); // WEF47
  }
  Push((Read16(0x63ef+WEB5E.offset)&0xFF) & 2); // WEB5E<IFIELD> C@ 2 AND
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  if (Pop() != 0)
  {
    GetColor(RED);
  } else
  {
    GetColor(GREY2);
  }
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WEC7A) + 0x0033); // WEC7A @ 0x0033 +
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(0x0041);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  _gt_3FONT(); // >3FONT
  PRINT("DEAD", 4); // (.")
  StoreCRS(); // !CRS
  _gt_1FONT(); // >1FONT
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xf126: WORD 'WF128' codep=0x224c parp=0xf128 params=1 returns=0
// ================================================

void WF128() // WF128
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
  Push(0x63ef+WEB3B.offset); // WEB3B<IFIELD>
  _do__dot_(); // $.
  StoreCRS(); // !CRS
}


// ================================================
// 0xf15c: WORD 'WF15E' codep=0x224c parp=0xf15e params=1 returns=0
// ================================================
// orphan

void WF15E() // WF15E
{
  unsigned short int i, imax;
  Push(0x63ef+WEB68.offset); // WEB68<IFIELD>
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
      Push((Read16(0x63ef+WEB5E.offset)&0xFF) & 0x00f7); // WEB5E<IFIELD> C@ 0x00f7 AND
      Push(0x63ef+WEB5E.offset); // WEB5E<IFIELD>
      C_ex_(); // C!
    }
    ICLOSE(); // ICLOSE
    Push(3);
    i += Pop();
  } while(i<imax); // (/LOOP)

}


// ================================================
// 0xf190: WORD 'WF192' codep=0x224c parp=0xf192 params=0 returns=0
// ================================================

void WF192() // WF192
{
  unsigned short int i, imax;
  CTINIT(); // CTINIT
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x63ef+WEB68.offset) + i * 3); // WEB68<IFIELD> I 3 * +
    Get_gt_C_plus_S(); // @>C+S
    CI(); // CI
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+WEB5E.offset) & 8); // WEB5E<IFIELD> @ 8 AND
      if (Pop() != 0)
      {
        Push(i); // I
        WF128(); // WF128
      }
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1cc: WORD 'WF1CE' codep=0x224c parp=0xf1ce params=1 returns=0
// ================================================

void WF1CE() // WF1CE
{
  unsigned short int a;
  a = Pop(); // >R
  CI(); // CI
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push((0x63ef+WEB68.offset) + a * 3); // WEB68<IFIELD> I 3 * +
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
  Push(a); // R>
  WF128(); // WF128
}


// ================================================
// 0xf1ea: WORD 'WF1EC' codep=0x224c parp=0xf1ec params=1 returns=0
// ================================================

void WF1EC() // WF1EC
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
  WEAE0(); // WEAE0
  Push(0x000a);
  Push(0x0055);
  POS_dot_(); // POS.
  PRINT("PRESS SPACEBAR TO ASSIGN CREWMEMBER", 35); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf236: WORD 'WF238' codep=0x224c parp=0xf238 params=1 returns=0
// ================================================

void WF238() // WF238
{
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  BLT(); // BLT
  Push(Read16(regsp)); // DUP
  Push(Pop()==5?1:0); //  5 =
  if (Pop() != 0)
  {
    Push(Pop() + 1); //  1+
    Push(0x0012);
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    GetColor(BLACK);
    WF1EC(); // WF1EC
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
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xf2a1: WORD 'WF2A3' codep=0x224c parp=0xf2a3 params=1 returns=0
// ================================================

void WF2A3() // WF2A3
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  WEDC4(); // WEDC4
  WF019(); // WF019
}


// ================================================
// 0xf2af: WORD 'WF2B1' codep=0x224c parp=0xf2b1
// ================================================

void WF2B1() // WF2B1
{
  Push(0);
  WF1EC(); // WF1EC
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(Read16(0x63ef+WEB5E.offset) & 2); // WEB5E<IFIELD> @ 2 AND
  if (Pop() != 0)
  {
    Push(0x005b);
    Push(0x000a);
    _2DUP(); // 2DUP
    SWAP(); // SWAP
    POS_dot_(); // POS.
    PRINT("YOU CAN'T ASSIGN ", 17); // (.")
    GetCRS(); // @CRS
    WEB09(); // WEB09
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
  WEA9C(); // WEA9C
  GetColor(BLACK);
  _2SWAP(); // 2SWAP
  POS_dot_PXT(); // POS.PXT
  StoreCRS(); // !CRS
  GetColor(WHITE);
  WF1EC(); // WF1EC
  Push(0);
}


// ================================================
// 0xf32c: WORD 'WF32E' codep=0x224c parp=0xf32e params=0 returns=0
// ================================================

void WF32E() // WF32E
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
// 0xf393: WORD 'WF395' codep=0x224c parp=0xf395
// ================================================

void WF395() // WF395
{
  unsigned short int a;
  a = Pop(); // >R
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    WF2A3(); // WF2A3
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Push(((Read16(0x63ef+WEB5E.offset)&0xFF) & 3) + 1==0?1:0); // WEB5E<IFIELD> C@ 3 AND 1 XOR 0=
      if (Pop() != 0)
      {
        Push(a); // I
        WF238(); // WF238
        Push(a); // I
        WF1CE(); // WF1CE
        Push(1);
      } else
      {
        WF2B1(); // WF2B1
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
// 0xf3d5: WORD 'WF3D7' codep=0x224c parp=0xf3d7 params=0 returns=1
// ================================================

void WF3D7() // WF3D7
{
  unsigned short int i, imax;
  Push(pp_WEA98); // WEA98
  OFF(); // OFF
  IFIRST(); // IFIRST
  Push(0);
  Push(0x0019);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(((Read16(0x63ef+WEB5E.offset)&0xFF) & 3) + 3==2?1:0); // WEB5E<IFIELD> C@ 3 AND 3 XOR 2 =
    Push(Read16(regsp)); // DUP
    Push(pp_WEA98); // WEA98
    _plus__ex__2(); // +!_2
    Push(Pop() | Pop()); // OR
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf407: WORD 'WF409' codep=0x224c parp=0xf409 params=0 returns=0
// ================================================

void WF409() // WF409
{
  unsigned short int i, imax;
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  do
  {
    Push((Read16(0x63ef+WEB5E.offset)&0xFF) & 0x00f7); // WEB5E<IFIELD> C@ 0x00f7 AND
    Push(0x63ef+WEB5E.offset); // WEB5E<IFIELD>
    C_ex_(); // C!
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
    Push((0x63ef+WEB68.offset) + i); // WEB68<IFIELD> I +
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x63ef+WEB5E.offset)&0xFF | 8); // WEB5E<IFIELD> C@ 8 OR
    Push(0x63ef+WEB5E.offset); // WEB5E<IFIELD>
    C_ex_(); // C!
    ICLOSE(); // ICLOSE
    Push(3);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf44f: WORD '(U-ASSCREW)' codep=0x224c parp=0xf45f
// ================================================
// entry

void _ro_U_dash_ASSCREW_rc_() // (U-ASSCREW)
{
  unsigned short int i, imax;
  WEDF8(); // WEDF8
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WF3D7(); // WF3D7
  if (Pop() != 0)
  {
    WF192(); // WF192
    Push(pp_NCRS); // NCRS
    OFF(); // OFF
    Push(pp_OCRS); // OCRS
    OFF(); // OFF
    CURSORSPACE(); // CURSORSPACE
    Push(pp_ABLT); // ABLT
    Store_3(); // !_3
    Push(9);
    Push(pp_LBLT); // LBLT
    Store_3(); // !_3
    Push(0x0090);
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    Push(8);
    Push(0x00a9);
    POS_dot_(); // POS.
    GetColor(WHITE);
    GetColor(GREY2);
    GetColor(DK_dash_GREEN);
    IsMRC(); // ?MRC
    StoreCOLOR(); // !COLOR
    Push(pp_XORMODE); // XORMODE
    ON_3(); // ON_3
    BLT(); // BLT
    GetColor(WHITE);
    WF1EC(); // WF1EC
    Push2Words("*ASSIGN-CREW");
    _gt_C_plus_S(); // >C+S
    Push(6);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push((0x63ef+WEB68.offset) + i * 3); // WEB68<IFIELD> I 3 * +
      Get_gt_C_plus_S(); // @>C+S
      Push(!((Read16(0x63ef+WEB5E.offset)&0xFF) & 8)); // WEB5E<IFIELD> C@ 8 AND NOT
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
          Push((0x63ef+WEB68.offset) + (i - 1) * 3); // WEB68<IFIELD> I 1- 3 * +
          Get_gt_C_plus_S(); // @>C+S
        }
      }
      WF019(); // WF019
      Push(i); // I
      WF395(); // WF395
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

    WF409(); // WF409
    ICLOSE(); // ICLOSE
    KEY_2(); // KEY_2
    Pop(); // DROP
  } else
  {
    WF32E(); // WF32E
    WEA9C(); // WEA9C
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xf517: db 0x41 0x43 0x52 0x45 0x57 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x41 0x53 0x53 0x49 0x47 0x4e 0x2d 0x43 0x52 0x45 0x57 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x2d 0x2d 0x31 0x37 0x31 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'ACREW-VOC_______________________for ASSIGN-CREW-------------- )--171----- '

