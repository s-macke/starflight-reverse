// ====== OVERLAY 'ASSCREW-OV' ======
// store offset = 0xea70
// overlay size   = 0x0af0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xea86  codep:0x224c parp:0xea86 size:0x0008 C-string:'UNK_0xea86'
//      UNK_0xea90  codep:0x2214 parp:0xea90 size:0x0002 C-string:'UNK_0xea90'
//      UNK_0xea94  codep:0x2214 parp:0xea94 size:0x0002 C-string:'UNK_0xea94'
//      UNK_0xea98  codep:0x1d29 parp:0xea98 size:0x0002 C-string:'UNK_0xea98'
//      UNK_0xea9c  codep:0x224c parp:0xea9c size:0x0020 C-string:'UNK_0xea9c'
//      UNK_0xeabe  codep:0x1d29 parp:0xeabe size:0x0004 C-string:'UNK_0xeabe'
//      UNK_0xeac4  codep:0x224c parp:0xeac4 size:0x001a C-string:'UNK_0xeac4'
//      UNK_0xeae0  codep:0x224c parp:0xeae0 size:0x0027 C-string:'UNK_0xeae0'
//      UNK_0xeb09  codep:0x224c parp:0xeb09 size:0x0018 C-string:'UNK_0xeb09'
//      UNK_0xeb23  codep:0x73ea parp:0xeb23 size:0x0006 C-string:'UNK_0xeb23'
//      UNK_0xeb2b  codep:0x73ea parp:0xeb2b size:0x0006 C-string:'UNK_0xeb2b'
//      UNK_0xeb33  codep:0x73ea parp:0xeb33 size:0x0006 C-string:'UNK_0xeb33'
//      UNK_0xeb3b  codep:0x744d parp:0xeb3b size:0x0003 C-string:'UNK_0xeb3b'
//      UNK_0xeb40  codep:0x744d parp:0xeb40 size:0x0003 C-string:'UNK_0xeb40'
//      UNK_0xeb45  codep:0x744d parp:0xeb45 size:0x0003 C-string:'UNK_0xeb45'
//      UNK_0xeb4a  codep:0x744d parp:0xeb4a size:0x0003 C-string:'UNK_0xeb4a'
//      UNK_0xeb4f  codep:0x744d parp:0xeb4f size:0x0003 C-string:'UNK_0xeb4f'
//      UNK_0xeb54  codep:0x744d parp:0xeb54 size:0x0003 C-string:'UNK_0xeb54'
//      UNK_0xeb59  codep:0x744d parp:0xeb59 size:0x0003 C-string:'UNK_0xeb59'
//      UNK_0xeb5e  codep:0x744d parp:0xeb5e size:0x0003 C-string:'UNK_0xeb5e'
//      UNK_0xeb63  codep:0x744d parp:0xeb63 size:0x0003 C-string:'UNK_0xeb63'
//      UNK_0xeb68  codep:0x744d parp:0xeb68 size:0x0003 C-string:'UNK_0xeb68'
//      UNK_0xeb6d  codep:0x224c parp:0xeb6d size:0x0012 C-string:'UNK_0xeb6d'
//      UNK_0xeb81  codep:0x224c parp:0xeb81 size:0x00f7 C-string:'UNK_0xeb81'
//      UNK_0xec7a  codep:0x1d29 parp:0xec7a size:0x0002 C-string:'UNK_0xec7a'
//      UNK_0xec7e  codep:0x224c parp:0xec7e size:0x0006 C-string:'UNK_0xec7e'
//      UNK_0xec86  codep:0x224c parp:0xec86 size:0x0112 C-string:'UNK_0xec86'
//      UNK_0xed9a  codep:0x224c parp:0xed9a size:0x0028 C-string:'UNK_0xed9a'
//      UNK_0xedc4  codep:0x224c parp:0xedc4 size:0x0032 C-string:'UNK_0xedc4'
//      UNK_0xedf8  codep:0x224c parp:0xedf8 size:0x014d C-string:'UNK_0xedf8'
//      UNK_0xef47  codep:0x224c parp:0xef47 size:0x00d0 C-string:'UNK_0xef47'
//      UNK_0xf019  codep:0x224c parp:0xf019 size:0x010d C-string:'UNK_0xf019'
//      UNK_0xf128  codep:0x224c parp:0xf128 size:0x0068 C-string:'UNK_0xf128'
//      UNK_0xf192  codep:0x224c parp:0xf192 size:0x003a C-string:'UNK_0xf192'
//      UNK_0xf1ce  codep:0x224c parp:0xf1ce size:0x001c C-string:'UNK_0xf1ce'
//      UNK_0xf1ec  codep:0x224c parp:0xf1ec size:0x004a C-string:'UNK_0xf1ec'
//      UNK_0xf238  codep:0x224c parp:0xf238 size:0x0069 C-string:'UNK_0xf238'
//      UNK_0xf2a3  codep:0x224c parp:0xf2a3 size:0x000c C-string:'UNK_0xf2a3'
//      UNK_0xf2b1  codep:0x224c parp:0xf2b1 size:0x007b C-string:'UNK_0xf2b1'
//      UNK_0xf32e  codep:0x224c parp:0xf32e size:0x0065 C-string:'UNK_0xf32e'
//      UNK_0xf395  codep:0x224c parp:0xf395 size:0x0040 C-string:'UNK_0xf395'
//      UNK_0xf3d7  codep:0x224c parp:0xf3d7 size:0x0030 C-string:'UNK_0xf3d7'
//      UNK_0xf409  codep:0x224c parp:0xf409 size:0x0046 C-string:'UNK_0xf409'
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
void _plus__ex_(); // +!
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
const unsigned short int pp_UNK_0xea98 = 0xea98; // UNK_0xea98 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xeabe = 0xeabe; // UNK_0xeabe size: 4
// {0xd5, 0x57, 0x00, 0xf5}

const unsigned short int pp_UNK_0xec7a = 0xec7a; // UNK_0xec7a size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xea90 = 0xea90; // UNK_0xea90
const unsigned short int cc_UNK_0xea94 = 0xea94; // UNK_0xea94


// 0xea82: db 0xab 0x00 '  '

// ================================================
// 0xea84: WORD 'UNK_0xea86' codep=0x224c parp=0xea86 params=10 returns=1
// ================================================

void UNK_0xea86() // UNK_0xea86
{
  Push(0xbdba); // probable 'OVTRIMS'
  MODULE(); // MODULE
}


// ================================================
// 0xea8e: WORD 'UNK_0xea90' codep=0x2214 parp=0xea90
// ================================================
// 0xea90: dw 0x0003

// ================================================
// 0xea92: WORD 'UNK_0xea94' codep=0x2214 parp=0xea94
// ================================================
// 0xea94: dw 0x0004

// ================================================
// 0xea96: WORD 'UNK_0xea98' codep=0x1d29 parp=0xea98
// ================================================
// 0xea98: db 0x3a 0x20 ': '

// ================================================
// 0xea9a: WORD 'UNK_0xea9c' codep=0x224c parp=0xea9c
// ================================================

void UNK_0xea9c() // UNK_0xea9c
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
// 0xeabc: WORD 'UNK_0xeabe' codep=0x1d29 parp=0xeabe
// ================================================
// 0xeabe: db 0xd5 0x57 0x00 0xf5 ' W  '

// ================================================
// 0xeac2: WORD 'UNK_0xeac4' codep=0x224c parp=0xeac4 params=0 returns=0
// ================================================

void UNK_0xeac4() // UNK_0xeac4
{
  GetCRS(); // @CRS
  Push(5);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_UNK_0xeabe); // UNK_0xeabe
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(6);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  StoreCRS(); // !CRS
}


// ================================================
// 0xeade: WORD 'UNK_0xeae0' codep=0x224c parp=0xeae0 params=0 returns=0
// ================================================

void UNK_0xeae0() // UNK_0xeae0
{
  Push(pp_UNK_0xea98); // UNK_0xea98
  Push(Read16(Pop())); // @
  Push(1);
  _gt_(); // >
  if (Pop() == 0) return;
  PRINT("PAGE THROUGH FILES: ^\\", 22); // (.")
}


// ================================================
// 0xeb07: WORD 'UNK_0xeb09' codep=0x224c parp=0xeb09 params=11 returns=0
// ================================================

void UNK_0xeb09() // UNK_0xeb09
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xeb21: WORD 'UNK_0xeb23' codep=0x73ea parp=0xeb23
// ================================================
LoadDataType UNK_0xeb23 = {CREWMEMBERIDX, 0x00, 0x08, 0x14, 0x6489};

// ================================================
// 0xeb29: WORD 'UNK_0xeb2b' codep=0x73ea parp=0xeb2b
// ================================================
LoadDataType UNK_0xeb2b = {CREWMEMBERIDX, 0x12, 0x01, 0x14, 0x6489};

// ================================================
// 0xeb31: WORD 'UNK_0xeb33' codep=0x73ea parp=0xeb33
// ================================================
LoadDataType UNK_0xeb33 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xeb39: WORD 'UNK_0xeb3b' codep=0x744d parp=0xeb3b
// ================================================
IFieldType UNK_0xeb3b = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xeb3e: WORD 'UNK_0xeb40' codep=0x744d parp=0xeb40
// ================================================
IFieldType UNK_0xeb40 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x744d parp=0xeb45
// ================================================
IFieldType UNK_0xeb45 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xeb48: WORD 'UNK_0xeb4a' codep=0x744d parp=0xeb4a
// ================================================
IFieldType UNK_0xeb4a = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xeb4d: WORD 'UNK_0xeb4f' codep=0x744d parp=0xeb4f
// ================================================
IFieldType UNK_0xeb4f = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xeb52: WORD 'UNK_0xeb54' codep=0x744d parp=0xeb54
// ================================================
IFieldType UNK_0xeb54 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xeb57: WORD 'UNK_0xeb59' codep=0x744d parp=0xeb59
// ================================================
IFieldType UNK_0xeb59 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xeb5c: WORD 'UNK_0xeb5e' codep=0x744d parp=0xeb5e
// ================================================
IFieldType UNK_0xeb5e = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xeb61: WORD 'UNK_0xeb63' codep=0x744d parp=0xeb63
// ================================================
IFieldType UNK_0xeb63 = {CREWMEMBERIDX, 0x22, 0x01};

// ================================================
// 0xeb66: WORD 'UNK_0xeb68' codep=0x744d parp=0xeb68
// ================================================
IFieldType UNK_0xeb68 = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xeb6b: WORD 'UNK_0xeb6d' codep=0x224c parp=0xeb6d params=0 returns=1
// ================================================

void UNK_0xeb6d() // UNK_0xeb6d
{
  Push(pp_IsEGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    SetColor(BLUE);
    return;
  }
  SetColor(DK_dash_BLUE);
}


// ================================================
// 0xeb7f: WORD 'UNK_0xeb81' codep=0x224c parp=0xeb81
// ================================================

void UNK_0xeb81() // UNK_0xeb81
{
  unsigned short int i, imax;
  Push(0x0049);
  Push(1);
  Push(8);
  Push(0x0043);
  SetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0x003c);
  Push(0x0044);
  Push(8);
  Push(0x009d);
  SetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  SetColor(WHITE);
  SetColor(WHITE);
  UNK_0xeb6d(); // UNK_0xeb6d
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
    Push(0x009d);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(8);
    OVER(); // OVER
    Push(0x003c);
    LLINE(); // LLINE
    Push(2);
    Push(6);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x009c);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x0044);
    Push(0x003d);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x009c);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(2);
    Push(0x004a);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x0041);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x0042);
    Push(i); // I
    Push(Pop() + Pop()); // +
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
  _plus__ex_(); // +!
  UNK_0xeac4(); // UNK_0xeac4
  Push(1);
  Push(8);
  Push(Read16(cc_UNK_0xea90)); // UNK_0xea90
  Push(1);
  Push(0x004a);
  Push(Read16(cc_UNK_0xea94)); // UNK_0xea94
  Push(0x0041);
  Push(0x004a);
  Push(Read16(cc_UNK_0xea90)); // UNK_0xea90
  Push(0x009c);
  Push(8);
  Push(Read16(cc_UNK_0xea94)); // UNK_0xea94
  Push(0x009c);
  Push(0x003d);
  Push(Read16(cc_UNK_0xea90)); // UNK_0xea90
  Push(0x0043);
  Push(0x003f);
  Push(Read16(cc_UNK_0xea90)); // UNK_0xea90
  Push(6);
  UNK_0xea86(); // UNK_0xea86
}


// ================================================
// 0xec78: WORD 'UNK_0xec7a' codep=0x1d29 parp=0xec7a
// ================================================
// 0xec7a: db 0x3a 0x20 ': '

// ================================================
// 0xec7c: WORD 'UNK_0xec7e' codep=0x224c parp=0xec7e params=3 returns=0
// ================================================

void UNK_0xec7e() // UNK_0xec7e
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xec84: WORD 'UNK_0xec86' codep=0x224c parp=0xec86 params=1 returns=0
// ================================================

void UNK_0xec86() // UNK_0xec86
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(pp_UNK_0xec7a); // UNK_0xec7a
  Store_3(); // !_3
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x000a);
  Push(0x0029);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(6);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  Push(a); // R>
  UNK_0xec7e(); // UNK_0xec7e
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xed98: WORD 'UNK_0xed9a' codep=0x224c parp=0xed9a
// ================================================

void UNK_0xed9a() // UNK_0xed9a
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0);

  label2:
  Push(0x63ef+UNK_0xeb63.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0018);
  _st_(); // <
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x224c parp=0xedc4
// ================================================

void UNK_0xedc4() // UNK_0xedc4
{
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(0x63ef+UNK_0xeb63.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    IPREV(); // IPREV
    return;
  }
  _0_gt_(); // 0>
  UNK_0xed9a(); // UNK_0xed9a
  Push(0x63ef+UNK_0xeb63.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xedf6: WORD 'UNK_0xedf8' codep=0x224c parp=0xedf8
// ================================================

void UNK_0xedf8() // UNK_0xedf8
{
  unsigned short int i, imax;
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0x001c);
  Push(0x00c3);
  SetColor(BLUE);
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
  SetColor(BLUE);
  StoreCOLOR(); // !COLOR
  _gt_3FONT(); // >3FONT
  Push(0x0030);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("CREW", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("ASSIGNMENT", 10); // (.")
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x009c);
    Push(0x00c6);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(3);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(i); // I
    Push(Pop()+1); // 1+
    Push(0x00b8);
    OVER(); // OVER
    Push(0x00c5);
    LLINE(); // LLINE
    Push(0x009d);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x00b8);
    OVER(); // OVER
    Push(0x00c5);
    LLINE(); // LLINE
    Push(0x009c);
    Push(0x00b6);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(3);
    OVER(); // OVER
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(2);
  Push(0x00c6);
  Push(Read16(cc_UNK_0xea94)); // UNK_0xea94
  Push(0x009c);
  Push(0x00c6);
  Push(Read16(cc_UNK_0xea90)); // UNK_0xea90
  Push(2);
  Push(0x00b8);
  Push(Read16(cc_UNK_0xea90)); // UNK_0xea90
  Push(0x009c);
  Push(0x00b8);
  Push(Read16(cc_UNK_0xea94)); // UNK_0xea94
  Push(4);
  UNK_0xea86(); // UNK_0xea86
  UNK_0xeb81(); // UNK_0xeb81
  Push(9);
  UNK_0xec86(); // UNK_0xec86
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xef45: WORD 'UNK_0xef47' codep=0x224c parp=0xef47
// ================================================

void UNK_0xef47() // UNK_0xef47
{
  unsigned short int a;
  Push(pp_UNK_0xec7a); // UNK_0xec7a
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  CTINIT(); // CTINIT
  SetColor(BLACK);
  SetColor(BLACK);
  SetColor(WHITE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x63ef+UNK_0xeb3b.offset); // IFIELD
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
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
  Push(0x63ef+UNK_0xeb59.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x63ef+UNK_0xeb40.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  DrawR(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(UNK_0xeb23); // from 'CREWMEMBER'
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x63ef+UNK_0xeb45.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x63ef+UNK_0xeb4a.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(UNK_0xeb33); // from 'CREWMEMBER'
  Push(Read8(Pop())&0xFF); // C@
  Push(2);
  DrawR(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(a); // I
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x63ef+UNK_0xeb4f.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(6);
  Push(a); // R>
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x63ef+UNK_0xeb54.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(UNK_0xeb2b); // from 'CREWMEMBER'
  Push(Read8(Pop())&0xFF); // C@
  Push(2);
  DrawR(); // .R
}


// ================================================
// 0xf017: WORD 'UNK_0xf019' codep=0x224c parp=0xf019
// ================================================

void UNK_0xf019() // UNK_0xf019
{
  unsigned short int a, i, imax;
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  GetCRS(); // @CRS
  _gt_1FONT(); // >1FONT
  Push(pp_UNK_0xec7a); // UNK_0xec7a
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(0x000e);
  SetColor(GREY2);
  Push(0x0030);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x000a);
  POS_dot_PXT(); // POS.PXT
  Push(3);
  SetColor(GREY2);
  Push(0x0030);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x007a);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  SetColor(BLACK);
  SetColor(BLACK);
  SetColor(WHITE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(3);
    SetColor(GREY2);
    Push(i); // I
    Push(7);
    Push(Pop() * Pop()); // *
    Push(6);
    Push(Pop() + Pop()); // +
    Push(a); // J
    Push(Pop() + Pop()); // +
    Push(0x004a);
    POS_dot_PXT(); // POS.PXT
    Push(2);
    Push(i); // I
    Push(4);
    Push((Pop()==Pop())?1:0); // =
    Push(5);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    SetColor(GREY2);
    Push(i); // I
    Push(7);
    Push(Pop() * Pop()); // *
    Push(6);
    Push(Pop() + Pop()); // +
    Push(a); // J
    Push(Pop() + Pop()); // +
    Push(0x008d);
    Push(i); // I
    Push(4);
    Push((Pop()==Pop())?1:0); // =
    Push(0xffea);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    POS_dot_PXT(); // POS.PXT
    i++;
  } while(i<imax); // (LOOP)

  Push(2);
  SetColor(GREY2);
  Push(0x003d);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x0028);
  POS_dot_PXT(); // POS.PXT
  Push(0x0028);
  Push(0x003d);
  Push(a); // R>
  UNK_0xec7e(); // UNK_0xec7e
  Push(0x63ef+UNK_0xeb63.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  Push(2);
  DrawR(); // .R
  Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(3);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xef47(); // UNK_0xef47
  }
  Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(2);
  Push(Pop() & Pop()); // AND
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  if (Pop() != 0)
  {
    SetColor(RED);
  } else
  {
    SetColor(GREY2);
  }
  StoreCOLOR(); // !COLOR
  Push(pp_UNK_0xec7a); // UNK_0xec7a
  Push(Read16(Pop())); // @
  Push(0x0033);
  Push(Pop() + Pop()); // +
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
// 0xf126: WORD 'UNK_0xf128' codep=0x224c parp=0xf128
// ================================================

void UNK_0xf128() // UNK_0xf128
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(a); // R>
  Push(0x00a7);
  SWAP(); // SWAP
  Push(0x000a);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0x005f);
  _2DUP(); // 2DUP
  Push(0x000e);
  Push(0);
  _2SWAP(); // 2SWAP
  POS_dot_PXT(); // POS.PXT
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x63ef+UNK_0xeb3b.offset); // IFIELD
  _do__dot_(); // $.
  StoreCRS(); // !CRS
}

// 0xf15c: db 0x4c 0x22 0x66 0xeb 0x5d 0x17 0x12 0x00 0x7f 0x0e 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x50 0x0e 0xf2 0x79 0x75 0x75 0x3e 0x13 0xfa 0x15 0x10 0x00 0x5c 0xeb 0x92 0x0c 0x5d 0x17 0xf7 0x00 0xf5 0x12 0x5c 0xeb 0x6a 0x6d 0xc9 0x79 0x73 0x3b 0x91 0x15 0xe0 0xff 0x90 0x16 'L"f ]    r     P  yuu>     \   ]     \ jm ys;      '

// ================================================
// 0xf190: WORD 'UNK_0xf192' codep=0x224c parp=0xf192
// ================================================

void UNK_0xf192() // UNK_0xf192
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
    Push(0x63ef+UNK_0xeb68.offset); // IFIELD
    Push(i); // I
    Push(3);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    CI(); // CI
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
      Push(Read16(Pop())); // @
      Push(8);
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        Push(i); // I
        UNK_0xf128(); // UNK_0xf128
      }
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1cc: WORD 'UNK_0xf1ce' codep=0x224c parp=0xf1ce
// ================================================

void UNK_0xf1ce() // UNK_0xf1ce
{
  unsigned short int a;
  a = Pop(); // >R
  CI(); // CI
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xeb68.offset); // IFIELD
  Push(a); // I
  Push(3);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
  Push(a); // R>
  UNK_0xf128(); // UNK_0xf128
}


// ================================================
// 0xf1ea: WORD 'UNK_0xf1ec' codep=0x224c parp=0xf1ec params=1 returns=0
// ================================================

void UNK_0xf1ec() // UNK_0xf1ec
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
  UNK_0xeae0(); // UNK_0xeae0
  Push(0x000a);
  Push(0x0055);
  POS_dot_(); // POS.
  PRINT("PRESS SPACEBAR TO ASSIGN CREWMEMBER", 35); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf236: WORD 'UNK_0xf238' codep=0x224c parp=0xf238 params=1 returns=0
// ================================================

void UNK_0xf238() // UNK_0xf238
{
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  BLT(); // BLT
  Push(Read16(regsp)); // DUP
  Push(5);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(Pop()+1); // 1+
    Push(0x0012);
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    SetColor(BLACK);
    UNK_0xf1ec(); // UNK_0xf1ec
    GetCRS(); // @CRS
    Push(0x0025);
    Push(0x0055);
    POS_dot_(); // POS.
    CTINIT(); // CTINIT
    PRINT("PRESS SPACEBAR TO EXIT", 22); // (.")
    StoreCRS(); // !CRS
    SetColor(BLACK);
    StoreCOLOR(); // !COLOR
  }
  Push(Pop()+1); // 1+
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x00a9);
  SWAP(); // SWAP
  _dash_(); // -
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xf2a1: WORD 'UNK_0xf2a3' codep=0x224c parp=0xf2a3
// ================================================

void UNK_0xf2a3() // UNK_0xf2a3
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xedc4(); // UNK_0xedc4
  UNK_0xf019(); // UNK_0xf019
}


// ================================================
// 0xf2af: WORD 'UNK_0xf2b1' codep=0x224c parp=0xf2b1
// ================================================

void UNK_0xf2b1() // UNK_0xf2b1
{
  Push(0);
  UNK_0xf1ec(); // UNK_0xf1ec
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(2);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0x005b);
    Push(0x000a);
    _2DUP(); // 2DUP
    SWAP(); // SWAP
    POS_dot_(); // POS.
    PRINT("YOU CAN'T ASSIGN ", 17); // (.")
    GetCRS(); // @CRS
    UNK_0xeb09(); // UNK_0xeb09
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
  UNK_0xea9c(); // UNK_0xea9c
  SetColor(BLACK);
  _2SWAP(); // 2SWAP
  POS_dot_PXT(); // POS.PXT
  StoreCRS(); // !CRS
  SetColor(WHITE);
  UNK_0xf1ec(); // UNK_0xf1ec
  Push(0);
}


// ================================================
// 0xf32c: WORD 'UNK_0xf32e' codep=0x224c parp=0xf32e params=0 returns=0
// ================================================

void UNK_0xf32e() // UNK_0xf32e
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
// 0xf393: WORD 'UNK_0xf395' codep=0x224c parp=0xf395
// ================================================

void UNK_0xf395() // UNK_0xf395
{
  unsigned short int a;
  a = Pop(); // >R
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    UNK_0xf2a3(); // UNK_0xf2a3
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
      Push(Read8(Pop())&0xFF); // C@
      Push(3);
      Push(Pop() & Pop()); // AND
      Push(1);
      Push(Pop() ^ Pop()); // XOR
      if (Pop() == 0) Push(1); else Push(0); // 0=
      if (Pop() != 0)
      {
        Push(a); // I
        UNK_0xf238(); // UNK_0xf238
        Push(a); // I
        UNK_0xf1ce(); // UNK_0xf1ce
        Push(1);
      } else
      {
        UNK_0xf2b1(); // UNK_0xf2b1
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
// 0xf3d5: WORD 'UNK_0xf3d7' codep=0x224c parp=0xf3d7
// ================================================

void UNK_0xf3d7() // UNK_0xf3d7
{
  unsigned short int i, imax;
  Push(pp_UNK_0xea98); // UNK_0xea98
  OFF(); // OFF
  IFIRST(); // IFIRST
  Push(0);
  Push(0x0019);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
    Push(Read8(Pop())&0xFF); // C@
    Push(3);
    Push(Pop() & Pop()); // AND
    Push(3);
    Push(Pop() ^ Pop()); // XOR
    Push(2);
    Push((Pop()==Pop())?1:0); // =
    Push(Read16(regsp)); // DUP
    Push(pp_UNK_0xea98); // UNK_0xea98
    _plus__ex_(); // +!
    Push(Pop() | Pop()); // OR
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf407: WORD 'UNK_0xf409' codep=0x224c parp=0xf409
// ================================================

void UNK_0xf409() // UNK_0xf409
{
  unsigned short int i, imax;
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  do
  {
    Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
    Push(Read8(Pop())&0xFF); // C@
    Push(0x00f7);
    Push(Pop() & Pop()); // AND
    Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
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
    Push(0x63ef+UNK_0xeb68.offset); // IFIELD
    Push(i); // I
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
    Push(Read8(Pop())&0xFF); // C@
    Push(8);
    Push(Pop() | Pop()); // OR
    Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
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
  UNK_0xedf8(); // UNK_0xedf8
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf3d7(); // UNK_0xf3d7
  if (Pop() != 0)
  {
    UNK_0xf192(); // UNK_0xf192
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
    SetColor(WHITE);
    SetColor(GREY2);
    SetColor(DK_dash_GREEN);
    IsMRC(); // ?MRC
    StoreCOLOR(); // !COLOR
    Push(pp_XORMODE); // XORMODE
    ON_3(); // ON_3
    BLT(); // BLT
    SetColor(WHITE);
    UNK_0xf1ec(); // UNK_0xf1ec
    Push2Words("*ASSIGN-CREW");
    _gt_C_plus_S(); // >C+S
    Push(6);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(0x63ef+UNK_0xeb68.offset); // IFIELD
      Push(i); // I
      Push(3);
      Push(Pop() * Pop()); // *
      Push(Pop() + Pop()); // +
      Get_gt_C_plus_S(); // @>C+S
      Push(0x63ef+UNK_0xeb5e.offset); // IFIELD
      Push(Read8(Pop())&0xFF); // C@
      Push(8);
      Push(Pop() & Pop()); // AND
      if (Pop() == 0) Push(1); else Push(0); // NOT
      if (Pop() != 0)
      {
        ICLOSE(); // ICLOSE
        Push(i); // I
        if (Pop() == 0) Push(1); else Push(0); // 0=
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
          Push(0x63ef+UNK_0xeb68.offset); // IFIELD
          Push(i); // I
          Push(Pop()-1); // 1-
          Push(3);
          Push(Pop() * Pop()); // *
          Push(Pop() + Pop()); // +
          Get_gt_C_plus_S(); // @>C+S
        }
      }
      UNK_0xf019(); // UNK_0xf019
      Push(i); // I
      UNK_0xf395(); // UNK_0xf395
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

    UNK_0xf409(); // UNK_0xf409
    ICLOSE(); // ICLOSE
    KEY_2(); // KEY_2
    Pop(); // DROP
  } else
  {
    UNK_0xf32e(); // UNK_0xf32e
    UNK_0xea9c(); // UNK_0xea9c
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xf517: db 0x41 0x43 0x52 0x45 0x57 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x41 0x53 0x53 0x49 0x47 0x4e 0x2d 0x43 0x52 0x45 0x57 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x2d 0x2d 0x31 0x37 0x31 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'ACREW-VOC_______________________for ASSIGN-CREW-------------- )--171----- '

