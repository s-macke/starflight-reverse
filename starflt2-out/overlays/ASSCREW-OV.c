// ====== OVERLAY 'ASSCREW-OV' ======
// store offset = 0xeab0
// overlay size   = 0x0ab0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xeac6  codep:0x224c parp:0xeac6 size:0x0008 C-string:'UNK_0xeac6'
//      UNK_0xead0  codep:0x2214 parp:0xead0 size:0x0002 C-string:'UNK_0xead0'
//      UNK_0xead4  codep:0x2214 parp:0xead4 size:0x0002 C-string:'UNK_0xead4'
//      UNK_0xead8  codep:0x1d29 parp:0xead8 size:0x0002 C-string:'UNK_0xead8'
//      UNK_0xeadc  codep:0x224c parp:0xeadc size:0x0020 C-string:'UNK_0xeadc'
//      UNK_0xeafe  codep:0x1d29 parp:0xeafe size:0x0020 C-string:'UNK_0xeafe'
//      UNK_0xeb20  codep:0x224c parp:0xeb20 size:0x0027 C-string:'UNK_0xeb20'
//      UNK_0xeb49  codep:0x224c parp:0xeb49 size:0x0018 C-string:'UNK_0xeb49'
//      UNK_0xeb63  codep:0x7394 parp:0xeb63 size:0x0006 C-string:'UNK_0xeb63'
//      UNK_0xeb6b  codep:0x7394 parp:0xeb6b size:0x0006 C-string:'UNK_0xeb6b'
//      UNK_0xeb73  codep:0x7394 parp:0xeb73 size:0x0006 C-string:'UNK_0xeb73'
//      UNK_0xeb7b  codep:0x7420 parp:0xeb7b size:0x0003 C-string:'UNK_0xeb7b'
//      UNK_0xeb80  codep:0x7420 parp:0xeb80 size:0x0003 C-string:'UNK_0xeb80'
//      UNK_0xeb85  codep:0x7420 parp:0xeb85 size:0x0003 C-string:'UNK_0xeb85'
//      UNK_0xeb8a  codep:0x7420 parp:0xeb8a size:0x0003 C-string:'UNK_0xeb8a'
//      UNK_0xeb8f  codep:0x7420 parp:0xeb8f size:0x0003 C-string:'UNK_0xeb8f'
//      UNK_0xeb94  codep:0x7420 parp:0xeb94 size:0x0003 C-string:'UNK_0xeb94'
//      UNK_0xeb99  codep:0x7420 parp:0xeb99 size:0x0003 C-string:'UNK_0xeb99'
//      UNK_0xeb9e  codep:0x7420 parp:0xeb9e size:0x0003 C-string:'UNK_0xeb9e'
//      UNK_0xeba3  codep:0x7420 parp:0xeba3 size:0x0003 C-string:'UNK_0xeba3'
//      UNK_0xeba8  codep:0x7420 parp:0xeba8 size:0x0003 C-string:'UNK_0xeba8'
//      UNK_0xebad  codep:0x224c parp:0xebad size:0x0012 C-string:'UNK_0xebad'
//      UNK_0xebc1  codep:0x224c parp:0xebc1 size:0x00f0 C-string:'UNK_0xebc1'
//      UNK_0xecb3  codep:0x1d29 parp:0xecb3 size:0x0002 C-string:'UNK_0xecb3'
//      UNK_0xecb7  codep:0x224c parp:0xecb7 size:0x0006 C-string:'UNK_0xecb7'
//      UNK_0xecbf  codep:0x224c parp:0xecbf size:0x0112 C-string:'UNK_0xecbf'
//      UNK_0xedd3  codep:0x224c parp:0xedd3 size:0x0028 C-string:'UNK_0xedd3'
//      UNK_0xedfd  codep:0x224c parp:0xedfd size:0x0032 C-string:'UNK_0xedfd'
//      UNK_0xee31  codep:0x224c parp:0xee31 size:0x014d C-string:'UNK_0xee31'
//      UNK_0xef80  codep:0x224c parp:0xef80 size:0x00d0 C-string:'UNK_0xef80'
//      UNK_0xf052  codep:0x224c parp:0xf052 size:0x010d C-string:'UNK_0xf052'
//      UNK_0xf161  codep:0x224c parp:0xf161 size:0x0034 C-string:'UNK_0xf161'
//      UNK_0xf197  codep:0x224c parp:0xf197 size:0x0032 C-string:'UNK_0xf197'
//      UNK_0xf1cb  codep:0x224c parp:0xf1cb size:0x003a C-string:'UNK_0xf1cb'
//      UNK_0xf207  codep:0x224c parp:0xf207 size:0x001c C-string:'UNK_0xf207'
//      UNK_0xf225  codep:0x224c parp:0xf225 size:0x004a C-string:'UNK_0xf225'
//      UNK_0xf271  codep:0x224c parp:0xf271 size:0x0069 C-string:'UNK_0xf271'
//      UNK_0xf2dc  codep:0x224c parp:0xf2dc size:0x000c C-string:'UNK_0xf2dc'
//      UNK_0xf2ea  codep:0x224c parp:0xf2ea size:0x007b C-string:'UNK_0xf2ea'
//      UNK_0xf367  codep:0x224c parp:0xf367 size:0x0065 C-string:'UNK_0xf367'
//      UNK_0xf3ce  codep:0x224c parp:0xf3ce size:0x0040 C-string:'UNK_0xf3ce'
//      UNK_0xf410  codep:0x224c parp:0xf410 size:0x0030 C-string:'UNK_0xf410'
//      UNK_0xf442  codep:0x224c parp:0xf442 size:0x0046 C-string:'UNK_0xf442'
//     (U-ASSCREW)  codep:0x224c parp:0xf498 size:0x0000 C-string:'_ro_U_dash_ASSCREW_rc_'

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
const unsigned short int pp_UNK_0xead8 = 0xead8; // UNK_0xead8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xeafe = 0xeafe; // UNK_0xeafe size: 32
// {0xd5, 0x57, 0x00, 0xf5, 0x4c, 0x22, 0x88, 0x9d, 0x8f, 0x3b, 0x6a, 0x5a, 0x16, 0x6d, 0xfc, 0xea, 0x75, 0x5a, 0x16, 0x6d, 0xbd, 0x8b, 0x97, 0x3b, 0x46, 0x5a, 0x23, 0x6d, 0xbd, 0x9d, 0x90, 0x16}

const unsigned short int pp_UNK_0xecb3 = 0xecb3; // UNK_0xecb3 size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xead0 = 0xead0; // UNK_0xead0
const unsigned short int cc_UNK_0xead4 = 0xead4; // UNK_0xead4


// 0xeac2: db 0xab 0x00 '  '

// ================================================
// 0xeac4: WORD 'UNK_0xeac6' codep=0x224c parp=0xeac6 params=0 returns=0
// ================================================

void UNK_0xeac6() // UNK_0xeac6
{
  Push(0xb752); // probable 'OVTRIM_1'
  MODULE(); // MODULE
}


// ================================================
// 0xeace: WORD 'UNK_0xead0' codep=0x2214 parp=0xead0
// ================================================
// 0xead0: dw 0x0003

// ================================================
// 0xead2: WORD 'UNK_0xead4' codep=0x2214 parp=0xead4
// ================================================
// 0xead4: dw 0x0004

// ================================================
// 0xead6: WORD 'UNK_0xead8' codep=0x1d29 parp=0xead8
// ================================================
// 0xead8: db 0x3a 0x20 ': '

// ================================================
// 0xeada: WORD 'UNK_0xeadc' codep=0x224c parp=0xeadc
// ================================================

void UNK_0xeadc() // UNK_0xeadc
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
// 0xeafc: WORD 'UNK_0xeafe' codep=0x1d29 parp=0xeafe
// ================================================
// orphan
// 0xeafe: db 0xd5 0x57 0x00 0xf5 0x4c 0x22 0x88 0x9d 0x8f 0x3b 0x6a 0x5a 0x16 0x6d 0xfc 0xea 0x75 0x5a 0x16 0x6d 0xbd 0x8b 0x97 0x3b 0x46 0x5a 0x23 0x6d 0xbd 0x9d 0x90 0x16 ' W  L"   ;jZ m  uZ m   ;FZ#m    '

// ================================================
// 0xeb1e: WORD 'UNK_0xeb20' codep=0x224c parp=0xeb20 params=0 returns=0
// ================================================

void UNK_0xeb20() // UNK_0xeb20
{
  Push(Read16(pp_UNK_0xead8)); // UNK_0xead8 @
  Push(1);
  _gt_(); // >
  if (Pop() == 0) return;
  PRINT("PAGE THROUGH FILES: ^\\", 22); // (.")
}


// ================================================
// 0xeb47: WORD 'UNK_0xeb49' codep=0x224c parp=0xeb49
// ================================================

void UNK_0xeb49() // UNK_0xeb49
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xeb61: WORD 'UNK_0xeb63' codep=0x7394 parp=0xeb63
// ================================================
LoadDataType UNK_0xeb63 = {CREWMEMBERIDX, 0x00, 0x08, 0x14, 0x6ac8};

// ================================================
// 0xeb69: WORD 'UNK_0xeb6b' codep=0x7394 parp=0xeb6b
// ================================================
LoadDataType UNK_0xeb6b = {CREWMEMBERIDX, 0x12, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xeb71: WORD 'UNK_0xeb73' codep=0x7394 parp=0xeb73
// ================================================
LoadDataType UNK_0xeb73 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xeb79: WORD 'UNK_0xeb7b' codep=0x7420 parp=0xeb7b
// ================================================
IFieldType UNK_0xeb7b = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xeb7e: WORD 'UNK_0xeb80' codep=0x7420 parp=0xeb80
// ================================================
IFieldType UNK_0xeb80 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xeb83: WORD 'UNK_0xeb85' codep=0x7420 parp=0xeb85
// ================================================
IFieldType UNK_0xeb85 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xeb88: WORD 'UNK_0xeb8a' codep=0x7420 parp=0xeb8a
// ================================================
IFieldType UNK_0xeb8a = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xeb8d: WORD 'UNK_0xeb8f' codep=0x7420 parp=0xeb8f
// ================================================
IFieldType UNK_0xeb8f = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xeb92: WORD 'UNK_0xeb94' codep=0x7420 parp=0xeb94
// ================================================
IFieldType UNK_0xeb94 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xeb97: WORD 'UNK_0xeb99' codep=0x7420 parp=0xeb99
// ================================================
IFieldType UNK_0xeb99 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xeb9c: WORD 'UNK_0xeb9e' codep=0x7420 parp=0xeb9e
// ================================================
IFieldType UNK_0xeb9e = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xeba1: WORD 'UNK_0xeba3' codep=0x7420 parp=0xeba3
// ================================================
IFieldType UNK_0xeba3 = {CREWMEMBERIDX, 0x22, 0x01};

// ================================================
// 0xeba6: WORD 'UNK_0xeba8' codep=0x7420 parp=0xeba8
// ================================================
IFieldType UNK_0xeba8 = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xebab: WORD 'UNK_0xebad' codep=0x224c parp=0xebad params=0 returns=1
// ================================================

void UNK_0xebad() // UNK_0xebad
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
// 0xebbf: WORD 'UNK_0xebc1' codep=0x224c parp=0xebc1
// ================================================

void UNK_0xebc1() // UNK_0xebc1
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
  UNK_0xebad(); // UNK_0xebad
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
  Push(Read16(cc_UNK_0xead0)); // UNK_0xead0
  Push(1);
  Push(0x004a);
  Push(Read16(cc_UNK_0xead4)); // UNK_0xead4
  Push(0x0041);
  Push(0x004a);
  Push(Read16(cc_UNK_0xead0)); // UNK_0xead0
  Push(0x009c);
  Push(8);
  Push(Read16(cc_UNK_0xead4)); // UNK_0xead4
  Push(0x009c);
  Push(0x003d);
  Push(Read16(cc_UNK_0xead0)); // UNK_0xead0
  Push(0x0043);
  Push(0x003f);
  Push(Read16(cc_UNK_0xead0)); // UNK_0xead0
  Push(6);
  UNK_0xeac6(); // UNK_0xeac6
}


// ================================================
// 0xecb1: WORD 'UNK_0xecb3' codep=0x1d29 parp=0xecb3
// ================================================
// 0xecb3: db 0x3a 0x20 ': '

// ================================================
// 0xecb5: WORD 'UNK_0xecb7' codep=0x224c parp=0xecb7 params=3 returns=0
// ================================================

void UNK_0xecb7() // UNK_0xecb7
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xecbd: WORD 'UNK_0xecbf' codep=0x224c parp=0xecbf
// ================================================

void UNK_0xecbf() // UNK_0xecbf
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(pp_UNK_0xecb3); // UNK_0xecb3
  Store_2(); // !_2
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x000a);
  Push(0x0029);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(6);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  Push(a); // R>
  UNK_0xecb7(); // UNK_0xecb7
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xedd1: WORD 'UNK_0xedd3' codep=0x224c parp=0xedd3 params=0 returns=1
// ================================================

void UNK_0xedd3() // UNK_0xedd3
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0);

  label2:
  Push(Read16(0x65e1+UNK_0xeba3.offset)&0xFF); // UNK_0xeba3<IFIELD> C@
  Push(0x0018);
  _st_(); // <
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  Push(Read16(0x65e1+UNK_0xeb9e.offset)&0xFF); // UNK_0xeb9e<IFIELD> C@
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xedfb: WORD 'UNK_0xedfd' codep=0x224c parp=0xedfd params=1 returns=0
// ================================================

void UNK_0xedfd() // UNK_0xedfd
{
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(Read16(0x65e1+UNK_0xeba3.offset)&0xFF); // UNK_0xeba3<IFIELD> C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    IPREV(); // IPREV
    return;
  }
  _0_gt_(); // 0>
  UNK_0xedd3(); // UNK_0xedd3
  Push(Read16(0x65e1+UNK_0xeba3.offset)&0xFF); // UNK_0xeba3<IFIELD> C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xee2f: WORD 'UNK_0xee31' codep=0x224c parp=0xee31
// ================================================

void UNK_0xee31() // UNK_0xee31
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
  Push(Read16(cc_UNK_0xead4)); // UNK_0xead4
  Push(0x009c);
  Push(0x00c6);
  Push(Read16(cc_UNK_0xead0)); // UNK_0xead0
  Push(2);
  Push(0x00b8);
  Push(Read16(cc_UNK_0xead0)); // UNK_0xead0
  Push(0x009c);
  Push(0x00b8);
  Push(Read16(cc_UNK_0xead4)); // UNK_0xead4
  Push(4);
  UNK_0xeac6(); // UNK_0xeac6
  UNK_0xebc1(); // UNK_0xebc1
  Push(9);
  UNK_0xecbf(); // UNK_0xecbf
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xef7e: WORD 'UNK_0xef80' codep=0x224c parp=0xef80
// ================================================

void UNK_0xef80() // UNK_0xef80
{
  unsigned short int a;
  Push(Read16(pp_UNK_0xecb3)); // UNK_0xecb3 @
  a = Pop(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  CTINIT(); // CTINIT
  GetColor(BLACK);
  GetColor(WHITE);
  GetColor(WHITE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x65e1+UNK_0xeb7b.offset); // UNK_0xeb7b<IFIELD>
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
  Push(Read16(0x65e1+UNK_0xeb99.offset)&0xFF); // UNK_0xeb99<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  Push(Read16(0x65e1+UNK_0xeb80.offset)&0xFF); // UNK_0xeb80<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(UNK_0xeb63); // from 'CREWMEMBER'
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  Push(Read16(0x65e1+UNK_0xeb85.offset)&0xFF); // UNK_0xeb85<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  Push(Read16(0x65e1+UNK_0xeb8a.offset)&0xFF); // UNK_0xeb8a<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(UNK_0xeb73); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(a); // I
  UNK_0xecb7(); // UNK_0xecb7
  Push(Read16(0x65e1+UNK_0xeb8f.offset)&0xFF); // UNK_0xeb8f<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(6);
  Push(a); // R>
  UNK_0xecb7(); // UNK_0xecb7
  Push(Read16(0x65e1+UNK_0xeb94.offset)&0xFF); // UNK_0xeb94<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(UNK_0xeb6b); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
}


// ================================================
// 0xf050: WORD 'UNK_0xf052' codep=0x224c parp=0xf052
// ================================================

void UNK_0xf052() // UNK_0xf052
{
  unsigned short int a, i, imax;
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  GetCRS(); // @CRS
  _gt_1FONT(); // >1FONT
  Push(Read16(pp_UNK_0xecb3)); // UNK_0xecb3 @
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
  UNK_0xecb7(); // UNK_0xecb7
  Push((Read16(0x65e1+UNK_0xeba3.offset)&0xFF) + 1); // UNK_0xeba3<IFIELD> C@ 1+
  Push(2);
  DrawR(); // .R
  Push(Read16(0x65e1+UNK_0xeb9e.offset) & 3); // UNK_0xeb9e<IFIELD> @ 3 AND
  if (Pop() != 0)
  {
    UNK_0xef80(); // UNK_0xef80
  }
  Push((Read16(0x65e1+UNK_0xeb9e.offset)&0xFF) & 2); // UNK_0xeb9e<IFIELD> C@ 2 AND
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
  Push(Read16(pp_UNK_0xecb3) + 0x0033); // UNK_0xecb3 @ 0x0033 +
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
// 0xf15f: WORD 'UNK_0xf161' codep=0x224c parp=0xf161
// ================================================

void UNK_0xf161() // UNK_0xf161
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
  Push(0x65e1+UNK_0xeb7b.offset); // UNK_0xeb7b<IFIELD>
  _do__dot_(); // $.
  StoreCRS(); // !CRS
}


// ================================================
// 0xf195: WORD 'UNK_0xf197' codep=0x224c parp=0xf197 params=1 returns=0
// ================================================
// orphan

void UNK_0xf197() // UNK_0xf197
{
  unsigned short int i, imax;
  Push(0x65e1+UNK_0xeba8.offset); // UNK_0xeba8<IFIELD>
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
      Push((Read16(0x65e1+UNK_0xeb9e.offset)&0xFF) & 0x00f7); // UNK_0xeb9e<IFIELD> C@ 0x00f7 AND
      Push(0x65e1+UNK_0xeb9e.offset); // UNK_0xeb9e<IFIELD>
      C_ex__2(); // C!_2
    }
    ICLOSE(); // ICLOSE
    Push(3);
    i += Pop();
  } while(i<imax); // (/LOOP)

}


// ================================================
// 0xf1c9: WORD 'UNK_0xf1cb' codep=0x224c parp=0xf1cb
// ================================================

void UNK_0xf1cb() // UNK_0xf1cb
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
    Push((0x65e1+UNK_0xeba8.offset) + i * 3); // UNK_0xeba8<IFIELD> I 3 * +
    Get_gt_C_plus_S(); // @>C+S
    CI(); // CI
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+UNK_0xeb9e.offset) & 8); // UNK_0xeb9e<IFIELD> @ 8 AND
      if (Pop() != 0)
      {
        Push(i); // I
        UNK_0xf161(); // UNK_0xf161
      }
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf205: WORD 'UNK_0xf207' codep=0x224c parp=0xf207
// ================================================

void UNK_0xf207() // UNK_0xf207
{
  unsigned short int a;
  a = Pop(); // >R
  CI(); // CI
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+UNK_0xeba8.offset) + a * 3); // UNK_0xeba8<IFIELD> I 3 * +
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
  Push(a); // R>
  UNK_0xf161(); // UNK_0xf161
}


// ================================================
// 0xf223: WORD 'UNK_0xf225' codep=0x224c parp=0xf225
// ================================================

void UNK_0xf225() // UNK_0xf225
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
  UNK_0xeb20(); // UNK_0xeb20
  Push(0x000a);
  Push(0x0055);
  POS_dot_(); // POS.
  PRINT("PRESS SPACEBAR TO ASSIGN CREWMEMBER", 35); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf26f: WORD 'UNK_0xf271' codep=0x224c parp=0xf271
// ================================================

void UNK_0xf271() // UNK_0xf271
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
    UNK_0xf225(); // UNK_0xf225
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
// 0xf2da: WORD 'UNK_0xf2dc' codep=0x224c parp=0xf2dc params=1 returns=0
// ================================================

void UNK_0xf2dc() // UNK_0xf2dc
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xedfd(); // UNK_0xedfd
  UNK_0xf052(); // UNK_0xf052
}


// ================================================
// 0xf2e8: WORD 'UNK_0xf2ea' codep=0x224c parp=0xf2ea
// ================================================

void UNK_0xf2ea() // UNK_0xf2ea
{
  Push(0);
  UNK_0xf225(); // UNK_0xf225
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(Read16(0x65e1+UNK_0xeb9e.offset) & 2); // UNK_0xeb9e<IFIELD> @ 2 AND
  if (Pop() != 0)
  {
    Push(0x005b);
    Push(0x000a);
    _2DUP(); // 2DUP
    SWAP(); // SWAP
    POS_dot_(); // POS.
    PRINT("YOU CAN'T ASSIGN ", 17); // (.")
    GetCRS(); // @CRS
    UNK_0xeb49(); // UNK_0xeb49
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
  UNK_0xeadc(); // UNK_0xeadc
  GetColor(BLACK);
  _2SWAP(); // 2SWAP
  POS_dot_PXT(); // POS.PXT
  StoreCRS(); // !CRS
  GetColor(WHITE);
  UNK_0xf225(); // UNK_0xf225
  Push(0);
}


// ================================================
// 0xf365: WORD 'UNK_0xf367' codep=0x224c parp=0xf367
// ================================================

void UNK_0xf367() // UNK_0xf367
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
// 0xf3cc: WORD 'UNK_0xf3ce' codep=0x224c parp=0xf3ce
// ================================================

void UNK_0xf3ce() // UNK_0xf3ce
{
  unsigned short int a;
  a = Pop(); // >R
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    UNK_0xf2dc(); // UNK_0xf2dc
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Push(((Read16(0x65e1+UNK_0xeb9e.offset)&0xFF) & 3) + 1==0?1:0); // UNK_0xeb9e<IFIELD> C@ 3 AND 1 XOR 0=
      if (Pop() != 0)
      {
        Push(a); // I
        UNK_0xf271(); // UNK_0xf271
        Push(a); // I
        UNK_0xf207(); // UNK_0xf207
        Push(1);
      } else
      {
        UNK_0xf2ea(); // UNK_0xf2ea
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
// 0xf40e: WORD 'UNK_0xf410' codep=0x224c parp=0xf410 params=0 returns=1
// ================================================

void UNK_0xf410() // UNK_0xf410
{
  unsigned short int i, imax;
  Push(pp_UNK_0xead8); // UNK_0xead8
  _099(); // 099
  IFIRST(); // IFIRST
  Push(0);
  Push(0x0019);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(((Read16(0x65e1+UNK_0xeb9e.offset)&0xFF) & 3) + 3==2?1:0); // UNK_0xeb9e<IFIELD> C@ 3 AND 3 XOR 2 =
    Push(Read16(regsp)); // DUP
    Push(pp_UNK_0xead8); // UNK_0xead8
    _plus__ex__2(); // +!_2
    Push(Pop() | Pop()); // OR
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf440: WORD 'UNK_0xf442' codep=0x224c parp=0xf442 params=0 returns=0
// ================================================

void UNK_0xf442() // UNK_0xf442
{
  unsigned short int i, imax;
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  do
  {
    Push((Read16(0x65e1+UNK_0xeb9e.offset)&0xFF) & 0x00f7); // UNK_0xeb9e<IFIELD> C@ 0x00f7 AND
    Push(0x65e1+UNK_0xeb9e.offset); // UNK_0xeb9e<IFIELD>
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
    Push((0x65e1+UNK_0xeba8.offset) + i); // UNK_0xeba8<IFIELD> I +
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x65e1+UNK_0xeb9e.offset)&0xFF | 8); // UNK_0xeb9e<IFIELD> C@ 8 OR
    Push(0x65e1+UNK_0xeb9e.offset); // UNK_0xeb9e<IFIELD>
    C_ex__2(); // C!_2
    ICLOSE(); // ICLOSE
    Push(3);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf488: WORD '(U-ASSCREW)' codep=0x224c parp=0xf498
// ================================================
// entry

void _ro_U_dash_ASSCREW_rc_() // (U-ASSCREW)
{
  unsigned short int i, imax;
  UNK_0xee31(); // UNK_0xee31
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf410(); // UNK_0xf410
  if (Pop() != 0)
  {
    UNK_0xf1cb(); // UNK_0xf1cb
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
    UNK_0xf225(); // UNK_0xf225
    Push2Words("*ASSIGN");
    _gt_C_plus_S(); // >C+S
    Push(6);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push((0x65e1+UNK_0xeba8.offset) + i * 3); // UNK_0xeba8<IFIELD> I 3 * +
      Get_gt_C_plus_S(); // @>C+S
      Push(!((Read16(0x65e1+UNK_0xeb9e.offset)&0xFF) & 8)); // UNK_0xeb9e<IFIELD> C@ 8 AND NOT
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
          Push((0x65e1+UNK_0xeba8.offset) + (i - 1) * 3); // UNK_0xeba8<IFIELD> I 1- 3 * +
          Get_gt_C_plus_S(); // @>C+S
        }
      }
      UNK_0xf052(); // UNK_0xf052
      Push(i); // I
      UNK_0xf3ce(); // UNK_0xf3ce
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

    UNK_0xf442(); // UNK_0xf442
    ICLOSE(); // ICLOSE
    KEY_2(); // KEY_2
    Pop(); // DROP
  } else
  {
    UNK_0xf367(); // UNK_0xf367
    UNK_0xeadc(); // UNK_0xeadc
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xf550: db 0x41 0x43 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ACR_____________ '

