// ====== OVERLAY 'CULTURE' ======
// store offset = 0xef40
// overlay size   = 0x0620

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xef56  codep:0x224c parp:0xef56 size:0x003c C-string:'UNK_0xef56'
//      UNK_0xef94  codep:0x2214 parp:0xef94 size:0x0002 C-string:'UNK_0xef94'
//      UNK_0xef98  codep:0x7394 parp:0xef98 size:0x0006 C-string:'UNK_0xef98'
//      UNK_0xefa0  codep:0x7394 parp:0xefa0 size:0x0006 C-string:'UNK_0xefa0'
//      UNK_0xefa8  codep:0x7394 parp:0xefa8 size:0x0006 C-string:'UNK_0xefa8'
//      UNK_0xefb0  codep:0x7394 parp:0xefb0 size:0x0006 C-string:'UNK_0xefb0'
//        ATTITUDE  codep:0x7394 parp:0xefc3 size:0x0006 C-string:'ATTITUDE'
//      UNK_0xefcb  codep:0x7394 parp:0xefcb size:0x0006 C-string:'UNK_0xefcb'
//      UNK_0xefd3  codep:0x7394 parp:0xefd3 size:0x0006 C-string:'UNK_0xefd3'
//      UNK_0xefdb  codep:0x7394 parp:0xefdb size:0x0006 C-string:'UNK_0xefdb'
//      UNK_0xefe3  codep:0x7394 parp:0xefe3 size:0x0006 C-string:'UNK_0xefe3'
//      UNK_0xefeb  codep:0x7394 parp:0xefeb size:0x0006 C-string:'UNK_0xefeb'
//      UNK_0xeff3  codep:0x7394 parp:0xeff3 size:0x0006 C-string:'UNK_0xeff3'
//      UNK_0xeffb  codep:0x7394 parp:0xeffb size:0x0006 C-string:'UNK_0xeffb'
//      UNK_0xf003  codep:0x7394 parp:0xf003 size:0x0006 C-string:'UNK_0xf003'
//      UNK_0xf00b  codep:0x224c parp:0xf00b size:0x000a C-string:'UNK_0xf00b'
//      UNK_0xf017  codep:0x224c parp:0xf017 size:0x000a C-string:'UNK_0xf017'
//      UNK_0xf023  codep:0x224c parp:0xf023 size:0x0006 C-string:'UNK_0xf023'
//      UNK_0xf02b  codep:0x7394 parp:0xf02b size:0x0006 C-string:'UNK_0xf02b'
//      UNK_0xf033  codep:0x224c parp:0xf033 size:0x000e C-string:'UNK_0xf033'
//      UNK_0xf043  codep:0x224c parp:0xf043 size:0x000a C-string:'UNK_0xf043'
//      UNK_0xf04f  codep:0x224c parp:0xf04f size:0x000d C-string:'UNK_0xf04f'
//      UNK_0xf05e  codep:0x224c parp:0xf05e size:0x0009 C-string:'UNK_0xf05e'
//            >ECO  codep:0x4b3b parp:0xf070 size:0x0010 C-string:'_gt_ECO'
//      UNK_0xf082  codep:0x224c parp:0xf082 size:0x001e C-string:'UNK_0xf082'
//      UNK_0xf0a2  codep:0x224c parp:0xf0a2 size:0x0006 C-string:'UNK_0xf0a2'
//      UNK_0xf0aa  codep:0x224c parp:0xf0aa size:0x0008 C-string:'UNK_0xf0aa'
//      UNK_0xf0b4  codep:0x224c parp:0xf0b4 size:0x0006 C-string:'UNK_0xf0b4'
//      UNK_0xf0bc  codep:0x224c parp:0xf0bc size:0x001e C-string:'UNK_0xf0bc'
//      UNK_0xf0dc  codep:0x224c parp:0xf0dc size:0x0030 C-string:'UNK_0xf0dc'
//      UNK_0xf10e  codep:0x224c parp:0xf10e size:0x0089 C-string:'UNK_0xf10e'
//      UNK_0xf199  codep:0x224c parp:0xf199 size:0x0020 C-string:'UNK_0xf199'
//      UNK_0xf1bb  codep:0x224c parp:0xf1bb size:0x001c C-string:'UNK_0xf1bb'
//      UNK_0xf1d9  codep:0x224c parp:0xf1d9 size:0x0012 C-string:'UNK_0xf1d9'
//      UNK_0xf1ed  codep:0x224c parp:0xf1ed size:0x000f C-string:'UNK_0xf1ed'
//          >EXTRA  codep:0x4b3b parp:0xf207 size:0x000c C-string:'_gt_EXTRA'
//           .RACE  codep:0x224c parp:0xf21d size:0x001e C-string:'DrawRACE'
//      UNK_0xf23d  codep:0x224c parp:0xf23d size:0x000b C-string:'UNK_0xf23d'
//      UNK_0xf24a  codep:0x224c parp:0xf24a size:0x000d C-string:'UNK_0xf24a'
//      UNK_0xf259  codep:0x224c parp:0xf259 size:0x000a C-string:'UNK_0xf259'
//      UNK_0xf265  codep:0x224c parp:0xf265 size:0x000f C-string:'UNK_0xf265'
//      UNK_0xf276  codep:0x224c parp:0xf276 size:0x000e C-string:'UNK_0xf276'
//      UNK_0xf286  codep:0x224c parp:0xf286 size:0x000e C-string:'UNK_0xf286'
//      UNK_0xf296  codep:0x224c parp:0xf296 size:0x000f C-string:'UNK_0xf296'
//      UNK_0xf2a7  codep:0x224c parp:0xf2a7 size:0x0010 C-string:'UNK_0xf2a7'
//      UNK_0xf2b9  codep:0x224c parp:0xf2b9 size:0x000f C-string:'UNK_0xf2b9'
//      UNK_0xf2ca  codep:0x224c parp:0xf2ca size:0x0011 C-string:'UNK_0xf2ca'
//      UNK_0xf2dd  codep:0x224c parp:0xf2dd size:0x0015 C-string:'UNK_0xf2dd'
//      UNK_0xf2f4  codep:0x224c parp:0xf2f4 size:0x0012 C-string:'UNK_0xf2f4'
//           >TECH  codep:0x4b3b parp:0xf310 size:0x0014 C-string:'_gt_TECH'
//      UNK_0xf326  codep:0x224c parp:0xf326 size:0x001f C-string:'UNK_0xf326'
//          >DENSE  codep:0x4b3b parp:0xf350 size:0x0014 C-string:'_gt_DENSE'
//      UNK_0xf366  codep:0x224c parp:0xf366 size:0x0027 C-string:'UNK_0xf366'
//            >ATT  codep:0x4b3b parp:0xf396 size:0x0014 C-string:'_gt_ATT'
//      UNK_0xf3ac  codep:0x224c parp:0xf3ac size:0x0022 C-string:'UNK_0xf3ac'
//      UNK_0xf3d0  codep:0x224c parp:0xf3d0 size:0x0040 C-string:'UNK_0xf3d0'
//      UNK_0xf412  codep:0x224c parp:0xf412 size:0x001c C-string:'UNK_0xf412'
//      UNK_0xf430  codep:0x224c parp:0xf430 size:0x0012 C-string:'UNK_0xf430'
//      UNK_0xf444  codep:0x224c parp:0xf444 size:0x002c C-string:'UNK_0xf444'
//      UNK_0xf472  codep:0x224c parp:0xf472 size:0x0012 C-string:'UNK_0xf472'
//      UNK_0xf486  codep:0x224c parp:0xf486 size:0x002c C-string:'UNK_0xf486'
//      UNK_0xf4b4  codep:0x224c parp:0xf4b4 size:0x0030 C-string:'UNK_0xf4b4'
//        .CULTURE  codep:0x224c parp:0xf4f1 size:0x0000 C-string:'DrawCULTURE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp__i__dot_HUFF; // '.HUFF
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern LoadDataType ELEM_dash_NA; // ELEM-NA
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color PINK; // PINK
extern Color WHITE; // WHITE
void _dash_TRAILING(); // -TRAILING
void NOP(); // NOP
void _gt_FLAG(); // >FLAG
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _099(); // 099
void GetRECORD(); // @RECORD
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void EACH(); // EACH
void StoreCOLOR(); // !COLOR
void WUP(); // WUP
void _gt_BOTT(); // >BOTT
void DrawTTY(); // .TTY
void TXT_dash_WIN(); // TXT-WIN
void _i_KEY(); // 'KEY
void _dash_XTRAIL(); // -XTRAIL
void SWAP(); // SWAP
void _gt_(); // >
void _1_dot_5_at_(); // 1.5@
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================

const unsigned short int cc_UNK_0xef94 = 0xef94; // UNK_0xef94


// 0xef52: db 0x61 0x00 'a '

// ================================================
// 0xef54: WORD 'UNK_0xef56' codep=0x224c parp=0xef56
// ================================================

void UNK_0xef56() // UNK_0xef56
{
  unsigned short int a, b;
  Push(Read16(pp_COLOR)); // COLOR @
  a = Pop(); // >R
  Push(Read16(pp_IsON_dash_PLA)); // ?ON-PLA @
  b = Pop(); // >R
  Push(b); // I
  if (Pop() != 0)
  {
    SetColor(PINK);
  } else
  {
    SetColor(BLUE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  do
  {
    _i_KEY(); // 'KEY
  } while(Pop() == 0);
  Push(b); // R>
  if (Pop() != 0)
  {
    SetColor(RED);
  } else
  {
    SetColor(DK_dash_BLUE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xef92: WORD 'UNK_0xef94' codep=0x2214 parp=0xef94 orphan
// ================================================
// 0xef94: dw 0x0015

// ================================================
// 0xef96: WORD 'UNK_0xef98' codep=0x7394 parp=0xef98
// ================================================
LoadDataType UNK_0xef98 = {TRADERSIDX, 0x00, 0x10, 0x32, 0x6ad1};

// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x7394 parp=0xefa0
// ================================================
LoadDataType UNK_0xefa0 = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefa6: WORD 'UNK_0xefa8' codep=0x7394 parp=0xefa8
// ================================================
LoadDataType UNK_0xefa8 = {TRADERSIDX, 0x14, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefae: WORD 'UNK_0xefb0' codep=0x7394 parp=0xefb0
// ================================================
LoadDataType UNK_0xefb0 = {TRADERSIDX, 0x15, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefb6: WORD 'ATTITUDE' codep=0x7394 parp=0xefc3
// ================================================
LoadDataType ATTITUDE = {TRADERSIDX, 0x16, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefc9: WORD 'UNK_0xefcb' codep=0x7394 parp=0xefcb
// ================================================
LoadDataType UNK_0xefcb = {TRADERSIDX, 0x17, 0x03, 0x32, 0x6ad1};

// ================================================
// 0xefd1: WORD 'UNK_0xefd3' codep=0x7394 parp=0xefd3
// ================================================
LoadDataType UNK_0xefd3 = {TRADERSIDX, 0x1d, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x7394 parp=0xefdb
// ================================================
LoadDataType UNK_0xefdb = {TRADERSIDX, 0x1f, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefe1: WORD 'UNK_0xefe3' codep=0x7394 parp=0xefe3
// ================================================
LoadDataType UNK_0xefe3 = {TRADERSIDX, 0x20, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefe9: WORD 'UNK_0xefeb' codep=0x7394 parp=0xefeb
// ================================================
LoadDataType UNK_0xefeb = {TRADERSIDX, 0x21, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xeff1: WORD 'UNK_0xeff3' codep=0x7394 parp=0xeff3
// ================================================
LoadDataType UNK_0xeff3 = {TRADERSIDX, 0x22, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xeff9: WORD 'UNK_0xeffb' codep=0x7394 parp=0xeffb
// ================================================
LoadDataType UNK_0xeffb = {TRADERSIDX, 0x23, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xf001: WORD 'UNK_0xf003' codep=0x7394 parp=0xf003 orphan
// ================================================
LoadDataType UNK_0xf003 = {TRADERSIDX, 0x29, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xf009: WORD 'UNK_0xf00b' codep=0x224c parp=0xf00b
// ================================================

void UNK_0xf00b() // UNK_0xf00b
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf015: WORD 'UNK_0xf017' codep=0x224c parp=0xf017
// ================================================

void UNK_0xf017() // UNK_0xf017
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf021: WORD 'UNK_0xf023' codep=0x224c parp=0xf023 params=0 returns=0
// ================================================

void UNK_0xf023() // UNK_0xf023
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xf029: WORD 'UNK_0xf02b' codep=0x7394 parp=0xf02b orphan
// ================================================
LoadDataType UNK_0xf02b = {CREATUREIDX, 0x00, 0x14, 0x22, 0x6f07};

// ================================================
// 0xf031: WORD 'UNK_0xf033' codep=0x224c parp=0xf033 params=0 returns=2
// ================================================

void UNK_0xf033() // UNK_0xf033
{
  SET_STR_AS_PARAM("DEPRESSED");
}


// ================================================
// 0xf041: WORD 'UNK_0xf043' codep=0x224c parp=0xf043 params=0 returns=2
// ================================================

void UNK_0xf043() // UNK_0xf043
{
  SET_STR_AS_PARAM("LEVEL");
}


// ================================================
// 0xf04d: WORD 'UNK_0xf04f' codep=0x224c parp=0xf04f params=0 returns=2
// ================================================

void UNK_0xf04f() // UNK_0xf04f
{
  SET_STR_AS_PARAM("INFLATED");
}


// ================================================
// 0xf05c: WORD 'UNK_0xf05e' codep=0x224c parp=0xf05e params=0 returns=2
// ================================================

void UNK_0xf05e() // UNK_0xf05e
{
  SET_STR_AS_PARAM("NONE");
}


// ================================================
// 0xf067: WORD '>ECO' codep=0x4b3b parp=0xf070
// ================================================

void _gt_ECO() // >ECO
{
  switch(Pop()) // >ECO
  {
  case 1:
    UNK_0xf033(); // UNK_0xf033
    break;
  case 2:
    UNK_0xf043(); // UNK_0xf043
    break;
  case 3:
    UNK_0xf04f(); // UNK_0xf04f
    break;
  default:
    UNK_0xf05e(); // UNK_0xf05e
    break;

  }
}

// ================================================
// 0xf080: WORD 'UNK_0xf082' codep=0x224c parp=0xf082 params=0 returns=0
// ================================================

void UNK_0xf082() // UNK_0xf082
{
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
  Push(Read16(pp_LINE_dash_CO)); // LINE-CO @
  Push(Read16(pp_WLINES) - 1); // WLINES @ 1-
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xef56(); // UNK_0xef56
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
}


// ================================================
// 0xf0a0: WORD 'UNK_0xf0a2' codep=0x224c parp=0xf0a2
// ================================================

void UNK_0xf0a2() // UNK_0xf0a2
{
  UNK_0xf00b(); // UNK_0xf00b
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf0a8: WORD 'UNK_0xf0aa' codep=0x224c parp=0xf0aa
// ================================================

void UNK_0xf0aa() // UNK_0xf0aa
{
  UNK_0xf082(); // UNK_0xf082
  _gt_BOTT(); // >BOTT
  WUP(); // WUP
}


// ================================================
// 0xf0b2: WORD 'UNK_0xf0b4' codep=0x224c parp=0xf0b4
// ================================================

void UNK_0xf0b4() // UNK_0xf0b4
{
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf0aa(); // UNK_0xf0aa
}


// ================================================
// 0xf0ba: WORD 'UNK_0xf0bc' codep=0x224c parp=0xf0bc params=1 returns=0
// ================================================

void UNK_0xf0bc() // UNK_0xf0bc
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xf0aa(); // UNK_0xf0aa
  Push(0x001c);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf0da: WORD 'UNK_0xf0dc' codep=0x224c parp=0xf0dc
// ================================================

void UNK_0xf0dc() // UNK_0xf0dc
{
  UNK_0xf023(); // UNK_0xf023
  LoadData(UNK_0xefeb); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xefa0); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(0);
  IFIND(); // IFIND
  Push(Pop() | Pop()); // OR
  Push(0x0044);
  Push(0);
  IFIND(); // IFIND
  Push(Pop() | Pop()); // OR
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf10c: WORD 'UNK_0xf10e' codep=0x224c parp=0xf10e
// ================================================

void UNK_0xf10e() // UNK_0xf10e
{
  UNK_0xf023(); // UNK_0xf023
  LoadData(UNK_0xefd3); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    UNK_0xf0b4(); // UNK_0xf0b4
    UNK_0xf017(); // UNK_0xf017
    PRINT("WILL SELL (AT TRADING CENTER)", 29); // (.")
    UNK_0xf00b(); // UNK_0xf00b
  }
  LoadData(UNK_0xefd3); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xf0bc(); // UNK_0xf0bc
  LoadData(UNK_0xefdb); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xf0bc(); // UNK_0xf0bc
  LoadData(UNK_0xefe3); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xf0bc(); // UNK_0xf0bc
  UNK_0xf0dc(); // UNK_0xf0dc
  if (Pop() != 0)
  {
    UNK_0xf0b4(); // UNK_0xf0b4
    UNK_0xf017(); // UNK_0xf017
    PRINT("WILL BUY (AT TRADING CENTER)", 28); // (.")
    UNK_0xf00b(); // UNK_0xf00b
  }
  LoadData(UNK_0xefeb); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xf0bc(); // UNK_0xf0bc
  LoadData(UNK_0xeff3); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    PRINT("*", 1); // (.")
  }
  LoadData(UNK_0xeffb); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xf0bc(); // UNK_0xf0bc
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf197: WORD 'UNK_0xf199' codep=0x224c parp=0xf199
// ================================================

void UNK_0xf199() // UNK_0xf199
{
  UNK_0xf00b(); // UNK_0xf00b
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xefcb); // from 'TRADERS'
  Get_gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(Read16(pp__i__dot_HUFF)); // '.HUFF @
  MODULE(); // MODULE
  Push(2);
  _star_CLOSE(); // *CLOSE
  UNK_0xef56(); // UNK_0xef56
}


// ================================================
// 0xf1b9: WORD 'UNK_0xf1bb' codep=0x224c parp=0xf1bb
// ================================================

void UNK_0xf1bb() // UNK_0xf1bb
{
  UNK_0xf017(); // UNK_0xf017
  PRINT("ECONOMY: ", 9); // (.")
  UNK_0xf023(); // UNK_0xf023
  LoadData(UNK_0xefb0); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  _gt_ECO(); // >ECO case
  UNK_0xf0a2(); // UNK_0xf0a2
}


// ================================================
// 0xf1d7: WORD 'UNK_0xf1d9' codep=0x224c parp=0xf1d9 params=0 returns=0
// ================================================

void UNK_0xf1d9() // UNK_0xf1d9
{
  PRINT(" TRADE CENTER", 13); // (.")
}


// ================================================
// 0xf1eb: WORD 'UNK_0xf1ed' codep=0x224c parp=0xf1ed params=0 returns=0
// ================================================

void UNK_0xf1ed() // UNK_0xf1ed
{
  PRINT(" DWELLINGS", 10); // (.")
}


// ================================================
// 0xf1fc: WORD '>EXTRA' codep=0x4b3b parp=0xf207
// ================================================

void _gt_EXTRA() // >EXTRA
{
  switch(Pop()) // >EXTRA
  {
  case 31:
    UNK_0xf1ed(); // UNK_0xf1ed
    break;
  case 33:
    UNK_0xf1d9(); // UNK_0xf1d9
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf213: WORD '.RACE' codep=0x224c parp=0xf21d
// ================================================
// entry

void DrawRACE() // .RACE
{
  UNK_0xf023(); // UNK_0xf023
  LoadData(UNK_0xef98); // from 'TRADERS'
  Push(0x0010);
  _dash_TRAILING(); // -TRAILING
  UNK_0xf0a2(); // UNK_0xf0a2
  ICLOSE(); // ICLOSE
  Push(Read16(pp_CONTEXT_3)==0?1:0); // CONTEXT_3 @ 0=
  if (Pop() == 0) return;
  GetINST_dash_C(); // @INST-C
  _gt_EXTRA(); // >EXTRA case
}


// ================================================
// 0xf23b: WORD 'UNK_0xf23d' codep=0x224c parp=0xf23d params=0 returns=2
// ================================================

void UNK_0xf23d() // UNK_0xf23d
{
  SET_STR_AS_PARAM("SPARSE");
}


// ================================================
// 0xf248: WORD 'UNK_0xf24a' codep=0x224c parp=0xf24a params=0 returns=2
// ================================================

void UNK_0xf24a() // UNK_0xf24a
{
  SET_STR_AS_PARAM("MODERATE");
}


// ================================================
// 0xf257: WORD 'UNK_0xf259' codep=0x224c parp=0xf259 params=0 returns=2
// ================================================

void UNK_0xf259() // UNK_0xf259
{
  SET_STR_AS_PARAM("DENSE");
}


// ================================================
// 0xf263: WORD 'UNK_0xf265' codep=0x224c parp=0xf265 params=0 returns=2
// ================================================

void UNK_0xf265() // UNK_0xf265
{
  SET_STR_AS_PARAM("VERY DENSE");
}


// ================================================
// 0xf274: WORD 'UNK_0xf276' codep=0x224c parp=0xf276 params=0 returns=2
// ================================================

void UNK_0xf276() // UNK_0xf276
{
  SET_STR_AS_PARAM("STONE AGE");
}


// ================================================
// 0xf284: WORD 'UNK_0xf286' codep=0x224c parp=0xf286 params=0 returns=2
// ================================================

void UNK_0xf286() // UNK_0xf286
{
  SET_STR_AS_PARAM("METAL ERA");
}


// ================================================
// 0xf294: WORD 'UNK_0xf296' codep=0x224c parp=0xf296 params=0 returns=2
// ================================================

void UNK_0xf296() // UNK_0xf296
{
  SET_STR_AS_PARAM("INDUSTRIAL");
}


// ================================================
// 0xf2a5: WORD 'UNK_0xf2a7' codep=0x224c parp=0xf2a7 params=0 returns=2
// ================================================

void UNK_0xf2a7() // UNK_0xf2a7
{
  SET_STR_AS_PARAM("SPACEFARING");
}


// ================================================
// 0xf2b7: WORD 'UNK_0xf2b9' codep=0x224c parp=0xf2b9 params=0 returns=2
// ================================================

void UNK_0xf2b9() // UNK_0xf2b9
{
  SET_STR_AS_PARAM("NO TRADING");
}


// ================================================
// 0xf2c8: WORD 'UNK_0xf2ca' codep=0x224c parp=0xf2ca params=0 returns=2
// ================================================

void UNK_0xf2ca() // UNK_0xf2ca
{
  SET_STR_AS_PARAM("NO BARTERING");
}


// ================================================
// 0xf2db: WORD 'UNK_0xf2dd' codep=0x224c parp=0xf2dd params=0 returns=2
// ================================================

void UNK_0xf2dd() // UNK_0xf2dd
{
  SET_STR_AS_PARAM("BARGAIN A LITTLE");
}


// ================================================
// 0xf2f2: WORD 'UNK_0xf2f4' codep=0x224c parp=0xf2f4 params=0 returns=2
// ================================================

void UNK_0xf2f4() // UNK_0xf2f4
{
  SET_STR_AS_PARAM("BARGAIN A LOT");
}


// ================================================
// 0xf306: WORD '>TECH' codep=0x4b3b parp=0xf310
// ================================================

void _gt_TECH() // >TECH
{
  switch(Pop()) // >TECH
  {
  case 1:
    UNK_0xf276(); // UNK_0xf276
    break;
  case 2:
    UNK_0xf286(); // UNK_0xf286
    break;
  case 3:
    UNK_0xf296(); // UNK_0xf296
    break;
  case 4:
    UNK_0xf2a7(); // UNK_0xf2a7
    break;
  default:
    UNK_0xf05e(); // UNK_0xf05e
    break;

  }
}

// ================================================
// 0xf324: WORD 'UNK_0xf326' codep=0x224c parp=0xf326
// ================================================

void UNK_0xf326() // UNK_0xf326
{
  UNK_0xf017(); // UNK_0xf017
  PRINT("TECH LEVEL: ", 12); // (.")
  UNK_0xf023(); // UNK_0xf023
  LoadData(UNK_0xefa0); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  _gt_TECH(); // >TECH case
  UNK_0xf0a2(); // UNK_0xf0a2
}


// ================================================
// 0xf345: WORD '>DENSE' codep=0x4b3b parp=0xf350
// ================================================

void _gt_DENSE() // >DENSE
{
  switch(Pop()) // >DENSE
  {
  case 1:
    UNK_0xf23d(); // UNK_0xf23d
    break;
  case 2:
    UNK_0xf24a(); // UNK_0xf24a
    break;
  case 3:
    UNK_0xf259(); // UNK_0xf259
    break;
  case 4:
    UNK_0xf265(); // UNK_0xf265
    break;
  default:
    UNK_0xf05e(); // UNK_0xf05e
    break;

  }
}

// ================================================
// 0xf364: WORD 'UNK_0xf366' codep=0x224c parp=0xf366
// ================================================

void UNK_0xf366() // UNK_0xf366
{
  UNK_0xf017(); // UNK_0xf017
  PRINT("POPULATION DENSITY: ", 20); // (.")
  UNK_0xf023(); // UNK_0xf023
  LoadData(UNK_0xefa8); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  _gt_DENSE(); // >DENSE case
  UNK_0xf0a2(); // UNK_0xf0a2
}


// ================================================
// 0xf38d: WORD '>ATT' codep=0x4b3b parp=0xf396
// ================================================

void _gt_ATT() // >ATT
{
  switch(Pop()) // >ATT
  {
  case 0:
    UNK_0xf2b9(); // UNK_0xf2b9
    break;
  case 1:
    UNK_0xf2ca(); // UNK_0xf2ca
    break;
  case 2:
    UNK_0xf2dd(); // UNK_0xf2dd
    break;
  case 3:
    UNK_0xf2f4(); // UNK_0xf2f4
    break;
  default:
    UNK_0xf05e(); // UNK_0xf05e
    break;

  }
}

// ================================================
// 0xf3aa: WORD 'UNK_0xf3ac' codep=0x224c parp=0xf3ac
// ================================================

void UNK_0xf3ac() // UNK_0xf3ac
{
  UNK_0xf017(); // UNK_0xf017
  PRINT("TRADING STYLE: ", 15); // (.")
  UNK_0xf023(); // UNK_0xf023
  LoadData(ATTITUDE); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  _gt_ATT(); // >ATT case
  UNK_0xf0a2(); // UNK_0xf0a2
}


// ================================================
// 0xf3ce: WORD 'UNK_0xf3d0' codep=0x224c parp=0xf3d0
// ================================================

void UNK_0xf3d0() // UNK_0xf3d0
{
  UNK_0xf0aa(); // UNK_0xf0aa
  Push(!Read16(pp_IsON_dash_PLA)); // ?ON-PLA @ NOT
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("INHABITED BY ");
  } else
  {
    SET_STR_AS_PARAM(" ");
  }
  DrawTTY(); // .TTY
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
  DrawRACE(); // .RACE
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf326(); // UNK_0xf326
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf366(); // UNK_0xf366
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf1bb(); // UNK_0xf1bb
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf3ac(); // UNK_0xf3ac
}


// ================================================
// 0xf410: WORD 'UNK_0xf412' codep=0x224c parp=0xf412
// ================================================

void UNK_0xf412() // UNK_0xf412
{
  UNK_0xf0b4(); // UNK_0xf0b4
  UNK_0xf017(); // UNK_0xf017
  PRINT("CULTURAL ANALYSIS", 17); // (.")
  UNK_0xf199(); // UNK_0xf199
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430 orphan
// ================================================

void UNK_0xf430() // UNK_0xf430
{
  UNK_0xf0aa(); // UNK_0xf0aa
  LoadData(UNK_0xf02b); // from 'CREATURE'
  Push(0x0014);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf442: WORD 'UNK_0xf444' codep=0x224c parp=0xf444 params=3 returns=0
// ================================================

void UNK_0xf444() // UNK_0xf444
{
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x0044);
  Push(0);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    UNK_0xf0aa(); // UNK_0xf0aa
    Push(0x0044);
    Push(0);
    Push(0x7d51); // probable '?CLASS/'
    Push(0xf430); // probable 'UNK_0xf430'
    EACH(); // EACH
    Pop(); Pop(); // 2DROP
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf470: WORD 'UNK_0xf472' codep=0x224c parp=0xf472 orphan
// ================================================

void UNK_0xf472() // UNK_0xf472
{
  UNK_0xf0aa(); // UNK_0xf0aa
  LoadData(ELEM_dash_NA); // from 'ELEMENT'
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf484: WORD 'UNK_0xf486' codep=0x224c parp=0xf486 orphan params=3 returns=0
// ================================================

void UNK_0xf486() // UNK_0xf486
{
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(0);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    UNK_0xf0aa(); // UNK_0xf0aa
    Push(0x001a);
    Push(0);
    Push(0x7d51); // probable '?CLASS/'
    Push(0xf472); // probable 'UNK_0xf472'
    EACH(); // EACH
    Pop(); Pop(); // 2DROP
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf4b2: WORD 'UNK_0xf4b4' codep=0x224c parp=0xf4b4 orphan
// ================================================

void UNK_0xf4b4() // UNK_0xf4b4
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xefa0); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  _gt_(); // >
  if (Pop() != 0)
  {
    UNK_0xf0aa(); // UNK_0xf0aa
    UNK_0xf0aa(); // UNK_0xf0aa
    PRINT("ANY ARTIFACTS", 13); // (.")
  }
  ICLOSE(); // ICLOSE
  UNK_0xf0dc(); // UNK_0xf0dc
  if (Pop() == 0) return;
  UNK_0xef56(); // UNK_0xef56
}


// ================================================
// 0xf4e4: WORD '.CULTURE' codep=0x224c parp=0xf4f1 params=0 returns=0
// ================================================
// entry

void DrawCULTURE() // .CULTURE
{
  Push(!Read16(pp_PAST)); // PAST @ NOT
  if (Pop() == 0) return;
  SetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf023(); // UNK_0xf023
  LoadData(UNK_0xefcb); // from 'TRADERS'
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  _gt_FLAG(); // >FLAG
  GetINST_dash_S(); // @INST-S
  Push(!(Pop()==0?1:0)); //  0= NOT
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    Push(pp_LINE_dash_CO); // LINE-CO
    _099(); // 099
    UNK_0xf3d0(); // UNK_0xf3d0
    UNK_0xef56(); // UNK_0xef56
    Push(pp_LINE_dash_CO); // LINE-CO
    _099(); // 099
    UNK_0xf412(); // UNK_0xf412
    Push(pp_LINE_dash_CO); // LINE-CO
    _099(); // 099
    UNK_0xf023(); // UNK_0xf023
    LoadData(ATTITUDE); // from 'TRADERS'
    Push(Read16(Pop())&0xFF); //  C@
    ICLOSE(); // ICLOSE
    if (Pop() != 0)
    {
      UNK_0xf10e(); // UNK_0xf10e
      UNK_0xf444(); // UNK_0xf444
    }
    return;
  }
  DrawRACE(); // .RACE
}

// 0xf549: db 0x43 0x55 0x4c 0x54 0x55 0x52 0x45 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CULTURE________________ '

