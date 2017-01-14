// ====== OVERLAY 'CULTURE' ======
// store offset = 0xef40
// overlay size   = 0x0620

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xef56  codep:0x224c parp:0xef56 size:0x0040 C-string:'UNK_0xef56'
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
//      UNK_0xeffb  codep:0x7394 parp:0xeffb size:0x000e C-string:'UNK_0xeffb'
//      UNK_0xf00b  codep:0x224c parp:0xf00b size:0x000a C-string:'UNK_0xf00b'
//      UNK_0xf017  codep:0x224c parp:0xf017 size:0x000a C-string:'UNK_0xf017'
//      UNK_0xf023  codep:0x224c parp:0xf023 size:0x000e C-string:'UNK_0xf023'
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
//           .RACE  codep:0x224c parp:0xf21d size:0x001e C-string:'_dot_RACE'
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
//      UNK_0xf412  codep:0x224c parp:0xf412 size:0x0030 C-string:'UNK_0xf412'
//      UNK_0xf444  codep:0x224c parp:0xf444 size:0x00a0 C-string:'UNK_0xf444'
//        .CULTURE  codep:0x224c parp:0xf4f1 size:0x0000 C-string:'_dot_CULTURE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp__i__dot_HUFF; // '.HUFF
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp__ask_ON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp__ro_TRADER; // (TRADER
void _dash_TRAILING(); // -TRAILING
void NOP(); // NOP
void _gt_FLAG(); // >FLAG
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void _099(); // 099
void _at_RECORD(); // @RECORD
void _at_INST_dash_C(); // @INST-C
void _at_INST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void EACH(); // EACH
void _ex_COLOR(); // !COLOR
void WUP(); // WUP
void _gt_BOTT(); // >BOTT
void _dot_TTY(); // .TTY
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



// 0xef52: db 0x61 0x00 'a '

// ================================================
// 0xef54: WORD 'UNK_0xef56' codep=0x224c parp=0xef56
// ================================================

void UNK_0xef56() // UNK_0xef56
{
  unsigned short int a, b;
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  b = Pop(); // >R
  Push(b); // I
  if (Pop() != 0)
  {
    SetColor("PINK");
  } else
  {
    SetColor("BLUE");
  }
  _ex_COLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  do
  {
    _i_KEY(); // 'KEY
  } while(Pop() == 0);
  Push(b); // R>
  if (Pop() != 0)
  {
    SetColor("RED");
  } else
  {
    SetColor("DK-BLUE");
  }
  _ex_COLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  Push(a); // R>
  _ex_COLOR(); // !COLOR
}

// 0xef92: db 0x14 0x22 0x15 0x00 ' "  '

// ================================================
// 0xef96: WORD 'UNK_0xef98' codep=0x7394 parp=0xef98
// ================================================
// 0xef98: db 0x15 0x00 0x10 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x7394 parp=0xefa0
// ================================================
// 0xefa0: db 0x15 0x13 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefa6: WORD 'UNK_0xefa8' codep=0x7394 parp=0xefa8
// ================================================
// 0xefa8: db 0x15 0x14 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefae: WORD 'UNK_0xefb0' codep=0x7394 parp=0xefb0
// ================================================
// 0xefb0: db 0x15 0x15 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefb6: WORD 'ATTITUDE' codep=0x7394 parp=0xefc3
// ================================================
// 0xefc3: db 0x15 0x16 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefc9: WORD 'UNK_0xefcb' codep=0x7394 parp=0xefcb
// ================================================
// 0xefcb: db 0x15 0x17 0x03 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefd1: WORD 'UNK_0xefd3' codep=0x7394 parp=0xefd3
// ================================================
// 0xefd3: db 0x15 0x1d 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x7394 parp=0xefdb
// ================================================
// 0xefdb: db 0x15 0x1f 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefe1: WORD 'UNK_0xefe3' codep=0x7394 parp=0xefe3
// ================================================
// 0xefe3: db 0x15 0x20 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xefe9: WORD 'UNK_0xefeb' codep=0x7394 parp=0xefeb
// ================================================
// 0xefeb: db 0x15 0x21 0x01 0x32 0xd1 0x6a ' ! 2 j'

// ================================================
// 0xeff1: WORD 'UNK_0xeff3' codep=0x7394 parp=0xeff3
// ================================================
// 0xeff3: db 0x15 0x22 0x01 0x32 0xd1 0x6a ' " 2 j'

// ================================================
// 0xeff9: WORD 'UNK_0xeffb' codep=0x7394 parp=0xeffb
// ================================================
// 0xeffb: db 0x15 0x23 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x29 0x01 0x32 0xd1 0x6a ' # 2 j s ) 2 j'

// ================================================
// 0xf009: WORD 'UNK_0xf00b' codep=0x224c parp=0xf00b
// ================================================

void UNK_0xf00b() // UNK_0xf00b
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf015: WORD 'UNK_0xf017' codep=0x224c parp=0xf017
// ================================================

void UNK_0xf017() // UNK_0xf017
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf021: WORD 'UNK_0xf023' codep=0x224c parp=0xf023
// ================================================

void UNK_0xf023() // UNK_0xf023
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
}

// 0xf029: db 0x94 0x73 0x44 0x00 0x14 0x22 0x07 0x6f ' sD  " o'

// ================================================
// 0xf031: WORD 'UNK_0xf033' codep=0x224c parp=0xf033
// ================================================

void UNK_0xf033() // UNK_0xf033
{
  UNK_0x3f09("DEPRESSED");
}


// ================================================
// 0xf041: WORD 'UNK_0xf043' codep=0x224c parp=0xf043
// ================================================

void UNK_0xf043() // UNK_0xf043
{
  UNK_0x3f09("LEVEL");
}


// ================================================
// 0xf04d: WORD 'UNK_0xf04f' codep=0x224c parp=0xf04f
// ================================================

void UNK_0xf04f() // UNK_0xf04f
{
  UNK_0x3f09("INFLATED");
}


// ================================================
// 0xf05c: WORD 'UNK_0xf05e' codep=0x224c parp=0xf05e
// ================================================

void UNK_0xf05e() // UNK_0xf05e
{
  UNK_0x3f09("NONE");
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
// 0xf080: WORD 'UNK_0xf082' codep=0x224c parp=0xf082
// ================================================

void UNK_0xf082() // UNK_0xf082
{
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
  Push(pp_LINE_dash_CO); // LINE-CO
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
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
// 0xf0ba: WORD 'UNK_0xf0bc' codep=0x224c parp=0xf0bc
// ================================================

void UNK_0xf0bc() // UNK_0xf0bc
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xf0aa(); // UNK_0xf0aa
  Push(0x001c);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
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
  LoadData("UNK_0xefeb"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xefa0"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
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
  LoadData("UNK_0xefd3"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    UNK_0xf0b4(); // UNK_0xf0b4
    UNK_0xf017(); // UNK_0xf017
    PRINT("WILL SELL (AT TRADING CENTER)", 29); // (.")
    UNK_0xf00b(); // UNK_0xf00b
  }
  LoadData("UNK_0xefd3"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xf0bc(); // UNK_0xf0bc
  LoadData("UNK_0xefdb"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xf0bc(); // UNK_0xf0bc
  LoadData("UNK_0xefe3"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xf0bc(); // UNK_0xf0bc
  UNK_0xf0dc(); // UNK_0xf0dc
  if (Pop() != 0)
  {
    UNK_0xf0b4(); // UNK_0xf0b4
    UNK_0xf017(); // UNK_0xf017
    PRINT("WILL BUY (AT TRADING CENTER)", 28); // (.")
    UNK_0xf00b(); // UNK_0xf00b
  }
  LoadData("UNK_0xefeb"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xf0bc(); // UNK_0xf0bc
  LoadData("UNK_0xeff3"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    PRINT("*", 1); // (.")
  }
  LoadData("UNK_0xeffb"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
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
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xefcb"); // from 'TRADERS     '
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp__i__dot_HUFF); // '.HUFF
  Push(Read16(Pop())); // @
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
  LoadData("UNK_0xefb0"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
  _gt_ECO(); // >ECO case
  UNK_0xf0a2(); // UNK_0xf0a2
}


// ================================================
// 0xf1d7: WORD 'UNK_0xf1d9' codep=0x224c parp=0xf1d9
// ================================================

void UNK_0xf1d9() // UNK_0xf1d9
{
  PRINT(" TRADE CENTER", 13); // (.")
}


// ================================================
// 0xf1eb: WORD 'UNK_0xf1ed' codep=0x224c parp=0xf1ed
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

void _dot_RACE() // .RACE
{
  UNK_0xf023(); // UNK_0xf023
  LoadData("UNK_0xef98"); // from 'TRADERS     '
  Push(0x0010);
  _dash_TRAILING(); // -TRAILING
  UNK_0xf0a2(); // UNK_0xf0a2
  ICLOSE(); // ICLOSE
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  _at_INST_dash_C(); // @INST-C
  _gt_EXTRA(); // >EXTRA case
}


// ================================================
// 0xf23b: WORD 'UNK_0xf23d' codep=0x224c parp=0xf23d
// ================================================

void UNK_0xf23d() // UNK_0xf23d
{
  UNK_0x3f09("SPARSE");
}


// ================================================
// 0xf248: WORD 'UNK_0xf24a' codep=0x224c parp=0xf24a
// ================================================

void UNK_0xf24a() // UNK_0xf24a
{
  UNK_0x3f09("MODERATE");
}


// ================================================
// 0xf257: WORD 'UNK_0xf259' codep=0x224c parp=0xf259
// ================================================

void UNK_0xf259() // UNK_0xf259
{
  UNK_0x3f09("DENSE");
}


// ================================================
// 0xf263: WORD 'UNK_0xf265' codep=0x224c parp=0xf265
// ================================================

void UNK_0xf265() // UNK_0xf265
{
  UNK_0x3f09("VERY DENSE");
}


// ================================================
// 0xf274: WORD 'UNK_0xf276' codep=0x224c parp=0xf276
// ================================================

void UNK_0xf276() // UNK_0xf276
{
  UNK_0x3f09("STONE AGE");
}


// ================================================
// 0xf284: WORD 'UNK_0xf286' codep=0x224c parp=0xf286
// ================================================

void UNK_0xf286() // UNK_0xf286
{
  UNK_0x3f09("METAL ERA");
}


// ================================================
// 0xf294: WORD 'UNK_0xf296' codep=0x224c parp=0xf296
// ================================================

void UNK_0xf296() // UNK_0xf296
{
  UNK_0x3f09("INDUSTRIAL");
}


// ================================================
// 0xf2a5: WORD 'UNK_0xf2a7' codep=0x224c parp=0xf2a7
// ================================================

void UNK_0xf2a7() // UNK_0xf2a7
{
  UNK_0x3f09("SPACEFARING");
}


// ================================================
// 0xf2b7: WORD 'UNK_0xf2b9' codep=0x224c parp=0xf2b9
// ================================================

void UNK_0xf2b9() // UNK_0xf2b9
{
  UNK_0x3f09("NO TRADING");
}


// ================================================
// 0xf2c8: WORD 'UNK_0xf2ca' codep=0x224c parp=0xf2ca
// ================================================

void UNK_0xf2ca() // UNK_0xf2ca
{
  UNK_0x3f09("NO BARTERING");
}


// ================================================
// 0xf2db: WORD 'UNK_0xf2dd' codep=0x224c parp=0xf2dd
// ================================================

void UNK_0xf2dd() // UNK_0xf2dd
{
  UNK_0x3f09("BARGAIN A LITTLE");
}


// ================================================
// 0xf2f2: WORD 'UNK_0xf2f4' codep=0x224c parp=0xf2f4
// ================================================

void UNK_0xf2f4() // UNK_0xf2f4
{
  UNK_0x3f09("BARGAIN A LOT");
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
  LoadData("UNK_0xefa0"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
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
  LoadData("UNK_0xefa8"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
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
  LoadData("ATTITUDE"); // from 'TRADERS     '
  Push(Read8(Pop())&0xFF); // C@
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
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    UNK_0x3f09("INHABITED BY ");
  } else
  {
    UNK_0x3f09(" ");
  }
  _dot_TTY(); // .TTY
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
  _dot_RACE(); // .RACE
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

// 0xf42e: db 0x4c 0x22 0xa8 0xf0 0x29 0xf0 0x5d 0x17 0x14 0x00 0x5d 0x17 0x2e 0x00 0x25 0xab 0xe6 0x06 0x90 0x16 'L"  ) ]   ] . %     '

// ================================================
// 0xf442: WORD 'UNK_0xf444' codep=0x224c parp=0xf444
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
    Push(0xf430);
    EACH(); // EACH
    Pop(); Pop();// 2DROP
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}

// 0xf470: db 0x4c 0x22 0xa8 0xf0 0x56 0xa9 0x5d 0x17 0x10 0x00 0x5d 0x17 0x2e 0x00 0x25 0xab 0xe6 0x06 0x90 0x16 0x4c 0x22 0x9b 0x53 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x1a 0x00 0x20 0x0f 0x4c 0x7e 0xfa 0x15 0x16 0x00 0xa8 0xf0 0x5d 0x17 0x1a 0x00 0x20 0x0f 0x5d 0x17 0x51 0x7d 0x5d 0x17 0x72 0xf4 0xa9 0x7f 0xde 0x0d 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x00 0x6a 0x2f 0x7a 0x9e 0xef 0x92 0x0c 0x3d 0x0f 0x2d 0x12 0xfa 0x15 0x16 0x00 0xa8 0xf0 0xa8 0xf0 0xdc 0x1b 0x0d 0x41 0x4e 0x59 0x20 0x41 0x52 0x54 0x49 0x46 0x41 0x43 0x54 0x53 0xdf 0x79 0xda 0xf0 0xfa 0x15 0x04 0x00 0x54 0xef 0x90 0x16 'L"  V ]   ] . %     L" S z?z]     L~      ]     ] Q}] r    =  z  L" j/z    = -            ANY ARTIFACTS y      T   '

// ================================================
// 0xf4e4: WORD '.CULTURE' codep=0x224c parp=0xf4f1
// ================================================
// entry

void _dot_CULTURE() // .CULTURE
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  SetColor("WHITE");
  Push(pp_CTCOLOR); // CTCOLOR
  _ex__2(); // !_2
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xf023(); // UNK_0xf023
  LoadData("UNK_0xefcb"); // from 'TRADERS     '
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  _gt_FLAG(); // >FLAG
  _at_INST_dash_S(); // @INST-S
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
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
    LoadData("ATTITUDE"); // from 'TRADERS     '
    Push(Read8(Pop())&0xFF); // C@
    ICLOSE(); // ICLOSE
    if (Pop() != 0)
    {
      UNK_0xf10e(); // UNK_0xf10e
      UNK_0xf444(); // UNK_0xf444
    }
    return;
  }
  _dot_RACE(); // .RACE
}

// 0xf549: db 0x43 0x55 0x4c 0x54 0x55 0x52 0x45 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CULTURE________________ '
  