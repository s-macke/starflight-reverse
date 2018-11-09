// ====== OVERLAY 'CULTURE' ======
// store offset = 0xef40
// overlay size   = 0x0620

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEF56  codep:0x224c wordp:0xef56 size:0x003c C-string:'WEF56'
//           WEF94  codep:0x2214 wordp:0xef94 size:0x0002 C-string:'WEF94'
//           WEF98  codep:0x7394 wordp:0xef98 size:0x0006 C-string:'WEF98'
//           WEFA0  codep:0x7394 wordp:0xefa0 size:0x0006 C-string:'WEFA0'
//           WEFA8  codep:0x7394 wordp:0xefa8 size:0x0006 C-string:'WEFA8'
//           WEFB0  codep:0x7394 wordp:0xefb0 size:0x0006 C-string:'WEFB0'
//        ATTITUDE  codep:0x7394 wordp:0xefc3 size:0x0006 C-string:'ATTITUDE'
//           WEFCB  codep:0x7394 wordp:0xefcb size:0x0006 C-string:'WEFCB'
//           WEFD3  codep:0x7394 wordp:0xefd3 size:0x0006 C-string:'WEFD3'
//           WEFDB  codep:0x7394 wordp:0xefdb size:0x0006 C-string:'WEFDB'
//           WEFE3  codep:0x7394 wordp:0xefe3 size:0x0006 C-string:'WEFE3'
//           WEFEB  codep:0x7394 wordp:0xefeb size:0x0006 C-string:'WEFEB'
//           WEFF3  codep:0x7394 wordp:0xeff3 size:0x0006 C-string:'WEFF3'
//           WEFFB  codep:0x7394 wordp:0xeffb size:0x0006 C-string:'WEFFB'
//           WF003  codep:0x7394 wordp:0xf003 size:0x0006 C-string:'WF003'
//           WF00B  codep:0x224c wordp:0xf00b size:0x000a C-string:'WF00B'
//           WF017  codep:0x224c wordp:0xf017 size:0x000a C-string:'WF017'
//           WF023  codep:0x224c wordp:0xf023 size:0x0006 C-string:'WF023'
//           WF02B  codep:0x7394 wordp:0xf02b size:0x0006 C-string:'WF02B'
//           WF033  codep:0x224c wordp:0xf033 size:0x000e C-string:'WF033'
//           WF043  codep:0x224c wordp:0xf043 size:0x000a C-string:'WF043'
//           WF04F  codep:0x224c wordp:0xf04f size:0x000d C-string:'WF04F'
//           WF05E  codep:0x224c wordp:0xf05e size:0x0009 C-string:'WF05E'
//            >ECO  codep:0x4b3b wordp:0xf070 size:0x0010 C-string:'_gt_ECO'
//           WF082  codep:0x224c wordp:0xf082 size:0x001e C-string:'WF082'
//           WF0A2  codep:0x224c wordp:0xf0a2 size:0x0006 C-string:'WF0A2'
//           WF0AA  codep:0x224c wordp:0xf0aa size:0x0008 C-string:'WF0AA'
//           WF0B4  codep:0x224c wordp:0xf0b4 size:0x0006 C-string:'WF0B4'
//           WF0BC  codep:0x224c wordp:0xf0bc size:0x001e C-string:'WF0BC'
//           WF0DC  codep:0x224c wordp:0xf0dc size:0x0030 C-string:'WF0DC'
//           WF10E  codep:0x224c wordp:0xf10e size:0x0089 C-string:'WF10E'
//           WF199  codep:0x224c wordp:0xf199 size:0x0020 C-string:'WF199'
//           WF1BB  codep:0x224c wordp:0xf1bb size:0x001c C-string:'WF1BB'
//           WF1D9  codep:0x224c wordp:0xf1d9 size:0x0012 C-string:'WF1D9'
//           WF1ED  codep:0x224c wordp:0xf1ed size:0x000f C-string:'WF1ED'
//          >EXTRA  codep:0x4b3b wordp:0xf207 size:0x000c C-string:'_gt_EXTRA'
//           .RACE  codep:0x224c wordp:0xf21d size:0x001e C-string:'DrawRACE'
//           WF23D  codep:0x224c wordp:0xf23d size:0x000b C-string:'WF23D'
//           WF24A  codep:0x224c wordp:0xf24a size:0x000d C-string:'WF24A'
//           WF259  codep:0x224c wordp:0xf259 size:0x000a C-string:'WF259'
//           WF265  codep:0x224c wordp:0xf265 size:0x000f C-string:'WF265'
//           WF276  codep:0x224c wordp:0xf276 size:0x000e C-string:'WF276'
//           WF286  codep:0x224c wordp:0xf286 size:0x000e C-string:'WF286'
//           WF296  codep:0x224c wordp:0xf296 size:0x000f C-string:'WF296'
//           WF2A7  codep:0x224c wordp:0xf2a7 size:0x0010 C-string:'WF2A7'
//           WF2B9  codep:0x224c wordp:0xf2b9 size:0x000f C-string:'WF2B9'
//           WF2CA  codep:0x224c wordp:0xf2ca size:0x0011 C-string:'WF2CA'
//           WF2DD  codep:0x224c wordp:0xf2dd size:0x0015 C-string:'WF2DD'
//           WF2F4  codep:0x224c wordp:0xf2f4 size:0x0012 C-string:'WF2F4'
//           >TECH  codep:0x4b3b wordp:0xf310 size:0x0014 C-string:'_gt_TECH'
//           WF326  codep:0x224c wordp:0xf326 size:0x001f C-string:'WF326'
//          >DENSE  codep:0x4b3b wordp:0xf350 size:0x0014 C-string:'_gt_DENSE'
//           WF366  codep:0x224c wordp:0xf366 size:0x0027 C-string:'WF366'
//            >ATT  codep:0x4b3b wordp:0xf396 size:0x0014 C-string:'_gt_ATT'
//           WF3AC  codep:0x224c wordp:0xf3ac size:0x0022 C-string:'WF3AC'
//           WF3D0  codep:0x224c wordp:0xf3d0 size:0x0040 C-string:'WF3D0'
//           WF412  codep:0x224c wordp:0xf412 size:0x001c C-string:'WF412'
//           WF430  codep:0x224c wordp:0xf430 size:0x0012 C-string:'WF430'
//           WF444  codep:0x224c wordp:0xf444 size:0x002c C-string:'WF444'
//           WF472  codep:0x224c wordp:0xf472 size:0x0012 C-string:'WF472'
//           WF486  codep:0x224c wordp:0xf486 size:0x002c C-string:'WF486'
//           WF4B4  codep:0x224c wordp:0xf4b4 size:0x0030 C-string:'WF4B4'
//        .CULTURE  codep:0x224c wordp:0xf4f1 size:0x0000 C-string:'DrawCULTURE'

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

const unsigned short int cc_WEF94 = 0xef94; // WEF94


// 0xef52: db 0x61 0x00 'a '

// ================================================
// 0xef54: WORD 'WEF56' codep=0x224c wordp=0xef56
// ================================================

void WEF56() // WEF56
{
  unsigned short int a, b;
  Push(Read16(pp_COLOR)); // COLOR @
  a = Pop(); // >R
  Push(Read16(pp_IsON_dash_PLA)); // ?ON-PLA @
  b = Pop(); // >R
  Push(b); // I
  if (Pop() != 0)
  {
    GetColor(PINK);
  } else
  {
    GetColor(BLUE);
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
    GetColor(RED);
  } else
  {
    GetColor(DK_dash_BLUE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xef92: WORD 'WEF94' codep=0x2214 wordp=0xef94
// ================================================
// orphan
// 0xef94: dw 0x0015

// ================================================
// 0xef96: WORD 'WEF98' codep=0x7394 wordp=0xef98
// ================================================
LoadDataType WEF98 = {TRADERSIDX, 0x00, 0x10, 0x32, 0x6ad1};

// ================================================
// 0xef9e: WORD 'WEFA0' codep=0x7394 wordp=0xefa0
// ================================================
LoadDataType WEFA0 = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefa6: WORD 'WEFA8' codep=0x7394 wordp=0xefa8
// ================================================
LoadDataType WEFA8 = {TRADERSIDX, 0x14, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefae: WORD 'WEFB0' codep=0x7394 wordp=0xefb0
// ================================================
LoadDataType WEFB0 = {TRADERSIDX, 0x15, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefb6: WORD 'ATTITUDE' codep=0x7394 wordp=0xefc3
// ================================================
LoadDataType ATTITUDE = {TRADERSIDX, 0x16, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefc9: WORD 'WEFCB' codep=0x7394 wordp=0xefcb
// ================================================
LoadDataType WEFCB = {TRADERSIDX, 0x17, 0x03, 0x32, 0x6ad1};

// ================================================
// 0xefd1: WORD 'WEFD3' codep=0x7394 wordp=0xefd3
// ================================================
LoadDataType WEFD3 = {TRADERSIDX, 0x1d, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefd9: WORD 'WEFDB' codep=0x7394 wordp=0xefdb
// ================================================
LoadDataType WEFDB = {TRADERSIDX, 0x1f, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefe1: WORD 'WEFE3' codep=0x7394 wordp=0xefe3
// ================================================
LoadDataType WEFE3 = {TRADERSIDX, 0x20, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xefe9: WORD 'WEFEB' codep=0x7394 wordp=0xefeb
// ================================================
LoadDataType WEFEB = {TRADERSIDX, 0x21, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xeff1: WORD 'WEFF3' codep=0x7394 wordp=0xeff3
// ================================================
LoadDataType WEFF3 = {TRADERSIDX, 0x22, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xeff9: WORD 'WEFFB' codep=0x7394 wordp=0xeffb
// ================================================
LoadDataType WEFFB = {TRADERSIDX, 0x23, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xf001: WORD 'WF003' codep=0x7394 wordp=0xf003
// ================================================
// orphan
LoadDataType WF003 = {TRADERSIDX, 0x29, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xf009: WORD 'WF00B' codep=0x224c wordp=0xf00b
// ================================================

void WF00B() // WF00B
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf015: WORD 'WF017' codep=0x224c wordp=0xf017
// ================================================

void WF017() // WF017
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf021: WORD 'WF023' codep=0x224c wordp=0xf023 params=0 returns=0
// ================================================

void WF023() // WF023
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xf029: WORD 'WF02B' codep=0x7394 wordp=0xf02b
// ================================================
LoadDataType WF02B = {CREATUREIDX, 0x00, 0x14, 0x22, 0x6f07};

// ================================================
// 0xf031: WORD 'WF033' codep=0x224c wordp=0xf033 params=0 returns=2
// ================================================

void WF033() // WF033
{
  SET_STR_AS_PARAM("DEPRESSED");
}


// ================================================
// 0xf041: WORD 'WF043' codep=0x224c wordp=0xf043 params=0 returns=2
// ================================================

void WF043() // WF043
{
  SET_STR_AS_PARAM("LEVEL");
}


// ================================================
// 0xf04d: WORD 'WF04F' codep=0x224c wordp=0xf04f params=0 returns=2
// ================================================

void WF04F() // WF04F
{
  SET_STR_AS_PARAM("INFLATED");
}


// ================================================
// 0xf05c: WORD 'WF05E' codep=0x224c wordp=0xf05e params=0 returns=2
// ================================================

void WF05E() // WF05E
{
  SET_STR_AS_PARAM("NONE");
}


// ================================================
// 0xf067: WORD '>ECO' codep=0x4b3b wordp=0xf070
// ================================================

void _gt_ECO() // >ECO
{
  switch(Pop()) // >ECO
  {
  case 1:
    WF033(); // WF033
    break;
  case 2:
    WF043(); // WF043
    break;
  case 3:
    WF04F(); // WF04F
    break;
  default:
    WF05E(); // WF05E
    break;

  }
}

// ================================================
// 0xf080: WORD 'WF082' codep=0x224c wordp=0xf082 params=0 returns=0
// ================================================

void WF082() // WF082
{
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
  Push(Read16(pp_LINE_dash_CO)); // LINE-CO @
  Push(Read16(pp_WLINES) - 1); // WLINES @ 1-
  _gt_(); // >
  if (Pop() == 0) return;
  WEF56(); // WEF56
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
}


// ================================================
// 0xf0a0: WORD 'WF0A2' codep=0x224c wordp=0xf0a2
// ================================================

void WF0A2() // WF0A2
{
  WF00B(); // WF00B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf0a8: WORD 'WF0AA' codep=0x224c wordp=0xf0aa
// ================================================

void WF0AA() // WF0AA
{
  WF082(); // WF082
  _gt_BOTT(); // >BOTT
  WUP(); // WUP
}


// ================================================
// 0xf0b2: WORD 'WF0B4' codep=0x224c wordp=0xf0b4
// ================================================

void WF0B4() // WF0B4
{
  WF0AA(); // WF0AA
  WF0AA(); // WF0AA
}


// ================================================
// 0xf0ba: WORD 'WF0BC' codep=0x224c wordp=0xf0bc params=1 returns=0
// ================================================

void WF0BC() // WF0BC
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  WF0AA(); // WF0AA
  Push(0x001c);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf0da: WORD 'WF0DC' codep=0x224c wordp=0xf0dc
// ================================================

void WF0DC() // WF0DC
{
  WF023(); // WF023
  LoadData(WEFEB); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEFA0); // from 'TRADERS'
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
// 0xf10c: WORD 'WF10E' codep=0x224c wordp=0xf10e
// ================================================

void WF10E() // WF10E
{
  WF023(); // WF023
  LoadData(WEFD3); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    WF0B4(); // WF0B4
    WF017(); // WF017
    PRINT("WILL SELL (AT TRADING CENTER)", 29); // (.")
    WF00B(); // WF00B
  }
  LoadData(WEFD3); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WF0BC(); // WF0BC
  LoadData(WEFDB); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WF0BC(); // WF0BC
  LoadData(WEFE3); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WF0BC(); // WF0BC
  WF0DC(); // WF0DC
  if (Pop() != 0)
  {
    WF0B4(); // WF0B4
    WF017(); // WF017
    PRINT("WILL BUY (AT TRADING CENTER)", 28); // (.")
    WF00B(); // WF00B
  }
  LoadData(WEFEB); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WF0BC(); // WF0BC
  LoadData(WEFF3); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    PRINT("*", 1); // (.")
  }
  LoadData(WEFFB); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WF0BC(); // WF0BC
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf197: WORD 'WF199' codep=0x224c wordp=0xf199
// ================================================

void WF199() // WF199
{
  WF00B(); // WF00B
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WEFCB); // from 'TRADERS'
  Get_gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(Read16(pp__i__dot_HUFF)); // '.HUFF @
  MODULE(); // MODULE
  Push(2);
  _star_CLOSE(); // *CLOSE
  WEF56(); // WEF56
}


// ================================================
// 0xf1b9: WORD 'WF1BB' codep=0x224c wordp=0xf1bb
// ================================================

void WF1BB() // WF1BB
{
  WF017(); // WF017
  PRINT("ECONOMY: ", 9); // (.")
  WF023(); // WF023
  LoadData(WEFB0); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  _gt_ECO(); // >ECO case
  WF0A2(); // WF0A2
}


// ================================================
// 0xf1d7: WORD 'WF1D9' codep=0x224c wordp=0xf1d9 params=0 returns=0
// ================================================

void WF1D9() // WF1D9
{
  PRINT(" TRADE CENTER", 13); // (.")
}


// ================================================
// 0xf1eb: WORD 'WF1ED' codep=0x224c wordp=0xf1ed params=0 returns=0
// ================================================

void WF1ED() // WF1ED
{
  PRINT(" DWELLINGS", 10); // (.")
}


// ================================================
// 0xf1fc: WORD '>EXTRA' codep=0x4b3b wordp=0xf207
// ================================================

void _gt_EXTRA() // >EXTRA
{
  switch(Pop()) // >EXTRA
  {
  case 31:
    WF1ED(); // WF1ED
    break;
  case 33:
    WF1D9(); // WF1D9
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf213: WORD '.RACE' codep=0x224c wordp=0xf21d
// ================================================
// entry

void DrawRACE() // .RACE
{
  WF023(); // WF023
  LoadData(WEF98); // from 'TRADERS'
  Push(0x0010);
  _dash_TRAILING(); // -TRAILING
  WF0A2(); // WF0A2
  ICLOSE(); // ICLOSE
  Push(Read16(pp_CONTEXT_3)==0?1:0); // CONTEXT_3 @ 0=
  if (Pop() == 0) return;
  GetINST_dash_C(); // @INST-C
  _gt_EXTRA(); // >EXTRA case
}


// ================================================
// 0xf23b: WORD 'WF23D' codep=0x224c wordp=0xf23d params=0 returns=2
// ================================================

void WF23D() // WF23D
{
  SET_STR_AS_PARAM("SPARSE");
}


// ================================================
// 0xf248: WORD 'WF24A' codep=0x224c wordp=0xf24a params=0 returns=2
// ================================================

void WF24A() // WF24A
{
  SET_STR_AS_PARAM("MODERATE");
}


// ================================================
// 0xf257: WORD 'WF259' codep=0x224c wordp=0xf259 params=0 returns=2
// ================================================

void WF259() // WF259
{
  SET_STR_AS_PARAM("DENSE");
}


// ================================================
// 0xf263: WORD 'WF265' codep=0x224c wordp=0xf265 params=0 returns=2
// ================================================

void WF265() // WF265
{
  SET_STR_AS_PARAM("VERY DENSE");
}


// ================================================
// 0xf274: WORD 'WF276' codep=0x224c wordp=0xf276 params=0 returns=2
// ================================================

void WF276() // WF276
{
  SET_STR_AS_PARAM("STONE AGE");
}


// ================================================
// 0xf284: WORD 'WF286' codep=0x224c wordp=0xf286 params=0 returns=2
// ================================================

void WF286() // WF286
{
  SET_STR_AS_PARAM("METAL ERA");
}


// ================================================
// 0xf294: WORD 'WF296' codep=0x224c wordp=0xf296 params=0 returns=2
// ================================================

void WF296() // WF296
{
  SET_STR_AS_PARAM("INDUSTRIAL");
}


// ================================================
// 0xf2a5: WORD 'WF2A7' codep=0x224c wordp=0xf2a7 params=0 returns=2
// ================================================

void WF2A7() // WF2A7
{
  SET_STR_AS_PARAM("SPACEFARING");
}


// ================================================
// 0xf2b7: WORD 'WF2B9' codep=0x224c wordp=0xf2b9 params=0 returns=2
// ================================================

void WF2B9() // WF2B9
{
  SET_STR_AS_PARAM("NO TRADING");
}


// ================================================
// 0xf2c8: WORD 'WF2CA' codep=0x224c wordp=0xf2ca params=0 returns=2
// ================================================

void WF2CA() // WF2CA
{
  SET_STR_AS_PARAM("NO BARTERING");
}


// ================================================
// 0xf2db: WORD 'WF2DD' codep=0x224c wordp=0xf2dd params=0 returns=2
// ================================================

void WF2DD() // WF2DD
{
  SET_STR_AS_PARAM("BARGAIN A LITTLE");
}


// ================================================
// 0xf2f2: WORD 'WF2F4' codep=0x224c wordp=0xf2f4 params=0 returns=2
// ================================================

void WF2F4() // WF2F4
{
  SET_STR_AS_PARAM("BARGAIN A LOT");
}


// ================================================
// 0xf306: WORD '>TECH' codep=0x4b3b wordp=0xf310
// ================================================

void _gt_TECH() // >TECH
{
  switch(Pop()) // >TECH
  {
  case 1:
    WF276(); // WF276
    break;
  case 2:
    WF286(); // WF286
    break;
  case 3:
    WF296(); // WF296
    break;
  case 4:
    WF2A7(); // WF2A7
    break;
  default:
    WF05E(); // WF05E
    break;

  }
}

// ================================================
// 0xf324: WORD 'WF326' codep=0x224c wordp=0xf326
// ================================================

void WF326() // WF326
{
  WF017(); // WF017
  PRINT("TECH LEVEL: ", 12); // (.")
  WF023(); // WF023
  LoadData(WEFA0); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  _gt_TECH(); // >TECH case
  WF0A2(); // WF0A2
}


// ================================================
// 0xf345: WORD '>DENSE' codep=0x4b3b wordp=0xf350
// ================================================

void _gt_DENSE() // >DENSE
{
  switch(Pop()) // >DENSE
  {
  case 1:
    WF23D(); // WF23D
    break;
  case 2:
    WF24A(); // WF24A
    break;
  case 3:
    WF259(); // WF259
    break;
  case 4:
    WF265(); // WF265
    break;
  default:
    WF05E(); // WF05E
    break;

  }
}

// ================================================
// 0xf364: WORD 'WF366' codep=0x224c wordp=0xf366
// ================================================

void WF366() // WF366
{
  WF017(); // WF017
  PRINT("POPULATION DENSITY: ", 20); // (.")
  WF023(); // WF023
  LoadData(WEFA8); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  _gt_DENSE(); // >DENSE case
  WF0A2(); // WF0A2
}


// ================================================
// 0xf38d: WORD '>ATT' codep=0x4b3b wordp=0xf396
// ================================================

void _gt_ATT() // >ATT
{
  switch(Pop()) // >ATT
  {
  case 0:
    WF2B9(); // WF2B9
    break;
  case 1:
    WF2CA(); // WF2CA
    break;
  case 2:
    WF2DD(); // WF2DD
    break;
  case 3:
    WF2F4(); // WF2F4
    break;
  default:
    WF05E(); // WF05E
    break;

  }
}

// ================================================
// 0xf3aa: WORD 'WF3AC' codep=0x224c wordp=0xf3ac
// ================================================

void WF3AC() // WF3AC
{
  WF017(); // WF017
  PRINT("TRADING STYLE: ", 15); // (.")
  WF023(); // WF023
  LoadData(ATTITUDE); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  _gt_ATT(); // >ATT case
  WF0A2(); // WF0A2
}


// ================================================
// 0xf3ce: WORD 'WF3D0' codep=0x224c wordp=0xf3d0
// ================================================

void WF3D0() // WF3D0
{
  WF0AA(); // WF0AA
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
  WF0AA(); // WF0AA
  WF326(); // WF326
  WF0AA(); // WF0AA
  WF366(); // WF366
  WF0AA(); // WF0AA
  WF1BB(); // WF1BB
  WF0AA(); // WF0AA
  WF3AC(); // WF3AC
}


// ================================================
// 0xf410: WORD 'WF412' codep=0x224c wordp=0xf412
// ================================================

void WF412() // WF412
{
  WF0B4(); // WF0B4
  WF017(); // WF017
  PRINT("CULTURAL ANALYSIS", 17); // (.")
  WF199(); // WF199
}


// ================================================
// 0xf42e: WORD 'WF430' codep=0x224c wordp=0xf430
// ================================================

void WF430() // WF430
{
  WF0AA(); // WF0AA
  LoadData(WF02B); // from 'CREATURE'
  Push(0x0014);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf442: WORD 'WF444' codep=0x224c wordp=0xf444
// ================================================

void WF444() // WF444
{
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x0044);
  Push(0);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    WF0AA(); // WF0AA
    Push(0x0044);
    Push(0);
    Push(0x7d51); // '?CLASS/'
    Push(0xf430); // 'WF430'
    EACH(); // EACH
    Pop(); Pop(); // 2DROP
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf470: WORD 'WF472' codep=0x224c wordp=0xf472
// ================================================
// orphan

void WF472() // WF472
{
  WF0AA(); // WF0AA
  LoadData(ELEM_dash_NA); // from 'ELEMENT'
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf484: WORD 'WF486' codep=0x224c wordp=0xf486
// ================================================
// orphan

void WF486() // WF486
{
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(0);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    WF0AA(); // WF0AA
    Push(0x001a);
    Push(0);
    Push(0x7d51); // '?CLASS/'
    Push(0xf472); // 'WF472'
    EACH(); // EACH
    Pop(); Pop(); // 2DROP
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf4b2: WORD 'WF4B4' codep=0x224c wordp=0xf4b4
// ================================================
// orphan

void WF4B4() // WF4B4
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WEFA0); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  _gt_(); // >
  if (Pop() != 0)
  {
    WF0AA(); // WF0AA
    WF0AA(); // WF0AA
    PRINT("ANY ARTIFACTS", 13); // (.")
  }
  ICLOSE(); // ICLOSE
  WF0DC(); // WF0DC
  if (Pop() == 0) return;
  WEF56(); // WEF56
}


// ================================================
// 0xf4e4: WORD '.CULTURE' codep=0x224c wordp=0xf4f1 params=0 returns=0
// ================================================
// entry

void DrawCULTURE() // .CULTURE
{
  Push(!Read16(pp_PAST)); // PAST @ NOT
  if (Pop() == 0) return;
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  WF0AA(); // WF0AA
  WF023(); // WF023
  LoadData(WEFCB); // from 'TRADERS'
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
    WF3D0(); // WF3D0
    WEF56(); // WEF56
    Push(pp_LINE_dash_CO); // LINE-CO
    _099(); // 099
    WF412(); // WF412
    Push(pp_LINE_dash_CO); // LINE-CO
    _099(); // 099
    WF023(); // WF023
    LoadData(ATTITUDE); // from 'TRADERS'
    Push(Read16(Pop())&0xFF); //  C@
    ICLOSE(); // ICLOSE
    if (Pop() != 0)
    {
      WF10E(); // WF10E
      WF444(); // WF444
    }
    return;
  }
  DrawRACE(); // .RACE
}

// 0xf549: db 0x43 0x55 0x4c 0x54 0x55 0x52 0x45 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CULTURE________________ '

