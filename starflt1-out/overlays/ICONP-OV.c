// ====== OVERLAY 'ICONP-OV' ======
// store offset = 0xf220
// overlay size   = 0x0340

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WF236  codep:0x744d parp:0xf236 size:0x0003 C-string:'WF236'
//           WF23B  codep:0x73ea parp:0xf23b size:0x0006 C-string:'WF23B'
//           WF243  codep:0x744d parp:0xf243 size:0x0003 C-string:'WF243'
//           WF248  codep:0x73ea parp:0xf248 size:0x0006 C-string:'WF248'
//           WF250  codep:0x744d parp:0xf250 size:0x0003 C-string:'WF250'
//           WF255  codep:0x744d parp:0xf255 size:0x0003 C-string:'WF255'
//           WF25A  codep:0x73ea parp:0xf25a size:0x0006 C-string:'WF25A'
//           WF262  codep:0x744d parp:0xf262 size:0x0003 C-string:'WF262'
//           WF267  codep:0x2214 parp:0xf267 size:0x0002 C-string:'WF267'
//           WF26B  codep:0x2214 parp:0xf26b size:0x0002 C-string:'WF26B'
//           WF26F  codep:0x2214 parp:0xf26f size:0x0002 C-string:'WF26F'
//           WF273  codep:0x2214 parp:0xf273 size:0x0002 C-string:'WF273'
//           WF277  codep:0x2214 parp:0xf277 size:0x0002 C-string:'WF277'
//           WF27B  codep:0x2214 parp:0xf27b size:0x0002 C-string:'WF27B'
//           WF27F  codep:0x2214 parp:0xf27f size:0x0002 C-string:'WF27F'
//           WF283  codep:0x2214 parp:0xf283 size:0x0002 C-string:'WF283'
//           WF287  codep:0x2214 parp:0xf287 size:0x0002 C-string:'WF287'
//           WF28B  codep:0x2214 parp:0xf28b size:0x0002 C-string:'WF28B'
//           WF28F  codep:0x2214 parp:0xf28f size:0x0002 C-string:'WF28F'
//           WF293  codep:0x224c parp:0xf293 size:0x000c C-string:'WF293'
//           WF2A1  codep:0x224c parp:0xf2a1 size:0x001c C-string:'WF2A1'
//   STAR-ID-CASES  codep:0x4a4f parp:0xf2cf size:0x0008 C-string:'STAR_dash_ID_dash_CASES'
//           WF2D9  codep:0x224c parp:0xf2d9 size:0x0008 C-string:'WF2D9'
// PLANET-ID-CASES  codep:0x4a4f parp:0xf2f5 size:0x0008 C-string:'PLANET_dash_ID_dash_CASES'
//           WF2FF  codep:0x224c parp:0xf2ff size:0x0008 C-string:'WF2FF'
//           WF309  codep:0x224c parp:0xf309 size:0x000a C-string:'WF309'
//          BOX-ID  codep:0x4a4f parp:0xf31e size:0x000c C-string:'BOX_dash_ID'
//           WF32C  codep:0x224c parp:0xf32c size:0x000a C-string:'WF32C'
//        SPACE-ID  codep:0x4a4f parp:0xf343 size:0x0024 C-string:'SPACE_dash_ID'
//   RUIN-ID-CASES  codep:0x4a4f parp:0xf379 size:0x000c C-string:'RUIN_dash_ID_dash_CASES'
//           WF387  codep:0x224c parp:0xf387 size:0x0006 C-string:'WF387'
//           WF38F  codep:0x224c parp:0xf38f size:0x001a C-string:'WF38F'
//           WF3AB  codep:0x224c parp:0xf3ab size:0x0016 C-string:'WF3AB'
//       PLANET-ID  codep:0x4a4f parp:0xf3cf size:0x0020 C-string:'PLANET_dash_ID'
//           WF3F1  codep:0x224c parp:0xf3f1 size:0x0014 C-string:'WF3F1'
//   STAR-IC-CASES  codep:0x4a4f parp:0xf417 size:0x001c C-string:'STAR_dash_IC_dash_CASES'
//           WF435  codep:0x224c parp:0xf435 size:0x0006 C-string:'WF435'
//           WF43D  codep:0x224c parp:0xf43d size:0x0012 C-string:'WF43D'
//   PLAN-IC-CASES  codep:0x4a4f parp:0xf461 size:0x0018 C-string:'PLAN_dash_IC_dash_CASES'
//           WF47B  codep:0x224c parp:0xf47b size:0x0008 C-string:'WF47B'
//           WF485  codep:0x224c parp:0xf485 size:0x0010 C-string:'WF485'
//          BOX-IC  codep:0x4a4f parp:0xf4a0 size:0x000c C-string:'BOX_dash_IC'
//           WF4AE  codep:0x224c parp:0xf4ae size:0x000a C-string:'WF4AE'
//       #IC-CASES  codep:0x4a4f parp:0xf4c6 size:0x0020 C-string:'_n_IC_dash_CASES'
//           WF4E8  codep:0x224c parp:0xf4e8 size:0x0006 C-string:'WF4E8'
//       ICON-PARM  codep:0x224c parp:0xf4fc size:0x0010 C-string:'ICON_dash_PARM'
//            +ICP  codep:0x224c parp:0xf515 size:0x0006 C-string:'_plus_ICP'
//        +ICONBOX  codep:0x224c parp:0xf528 size:0x0000 C-string:'_plus_ICONBOX'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_SYS_dash_ICO; // SYS-ICO
extern const unsigned short int cc_INVIS_dash_I; // INVIS-I
extern const unsigned short int cc_FLUX_dash_IC; // FLUX-IC
extern const unsigned short int cc_DEAD_dash_IC; // DEAD-IC
extern const unsigned short int cc_DEFAULT; // DEFAULT
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern Color DK_dash_GREEN; // DK-GREEN
extern Color GREEN; // GREEN
extern Color RED; // RED
extern Color VIOLET; // VIOLET
extern Color BROWN; // BROWN
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color ORANGE; // ORANGE
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void UNRAVEL(); // UNRAVEL
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void ICLOSE(); // ICLOSE
void IOPEN(); // IOPEN
void ALL(); // ALL
void _plus_ICON(); // +ICON
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================

const unsigned short int cc_WF267 = 0xf267; // WF267
const unsigned short int cc_WF26B = 0xf26b; // WF26B
const unsigned short int cc_WF26F = 0xf26f; // WF26F
const unsigned short int cc_WF273 = 0xf273; // WF273
const unsigned short int cc_WF277 = 0xf277; // WF277
const unsigned short int cc_WF27B = 0xf27b; // WF27B
const unsigned short int cc_WF27F = 0xf27f; // WF27F
const unsigned short int cc_WF283 = 0xf283; // WF283
const unsigned short int cc_WF287 = 0xf287; // WF287
const unsigned short int cc_WF28B = 0xf28b; // WF28B
const unsigned short int cc_WF28F = 0xf28f; // WF28F


// 0xf232: db 0x32 0x00 '2 '

// ================================================
// 0xf234: WORD 'WF236' codep=0x744d parp=0xf236
// ================================================
IFieldType WF236 = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xf239: WORD 'WF23B' codep=0x73ea parp=0xf23b
// ================================================
LoadDataType WF23B = {VESSELIDX, 0x1c, 0x01, 0x49, 0x6491};

// ================================================
// 0xf241: WORD 'WF243' codep=0x744d parp=0xf243
// ================================================
IFieldType WF243 = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xf246: WORD 'WF248' codep=0x73ea parp=0xf248
// ================================================
LoadDataType WF248 = {CREATUREIDX, 0x90, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xf24e: WORD 'WF250' codep=0x744d parp=0xf250
// ================================================
IFieldType WF250 = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xf253: WORD 'WF255' codep=0x744d parp=0xf255
// ================================================
IFieldType WF255 = {CREATUREIDX, 0x11, 0x01};

// ================================================
// 0xf258: WORD 'WF25A' codep=0x73ea parp=0xf25a
// ================================================
LoadDataType WF25A = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};

// ================================================
// 0xf260: WORD 'WF262' codep=0x744d parp=0xf262
// ================================================
// orphan
IFieldType WF262 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xf265: WORD 'WF267' codep=0x2214 parp=0xf267
// ================================================
// 0xf267: dw 0x0034

// ================================================
// 0xf269: WORD 'WF26B' codep=0x2214 parp=0xf26b
// ================================================
// 0xf26b: dw 0x0034

// ================================================
// 0xf26d: WORD 'WF26F' codep=0x2214 parp=0xf26f
// ================================================
// 0xf26f: dw 0x0033

// ================================================
// 0xf271: WORD 'WF273' codep=0x2214 parp=0xf273
// ================================================
// 0xf273: dw 0x0033

// ================================================
// 0xf275: WORD 'WF277' codep=0x2214 parp=0xf277
// ================================================
// 0xf277: dw 0x0014

// ================================================
// 0xf279: WORD 'WF27B' codep=0x2214 parp=0xf27b
// ================================================
// 0xf27b: dw 0x0015

// ================================================
// 0xf27d: WORD 'WF27F' codep=0x2214 parp=0xf27f
// ================================================
// 0xf27f: dw 0x0016

// ================================================
// 0xf281: WORD 'WF283' codep=0x2214 parp=0xf283
// ================================================
// 0xf283: dw 0x0017

// ================================================
// 0xf285: WORD 'WF287' codep=0x2214 parp=0xf287
// ================================================
// 0xf287: dw 0x0018

// ================================================
// 0xf289: WORD 'WF28B' codep=0x2214 parp=0xf28b
// ================================================
// 0xf28b: dw 0x0019

// ================================================
// 0xf28d: WORD 'WF28F' codep=0x2214 parp=0xf28f
// ================================================
// 0xf28f: dw 0x001a

// ================================================
// 0xf291: WORD 'WF293' codep=0x224c parp=0xf293 params=0 returns=1
// ================================================

void WF293() // WF293
{
  Push((Read16(0x63ef+WF236.offset)&0xFF) + 0x001b); // WF236<IFIELD> C@ 0x001b +
}


// ================================================
// 0xf29f: WORD 'WF2A1' codep=0x224c parp=0xf2a1
// ================================================

void WF2A1() // WF2A1
{
  LoadData(WF23B); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push((Read16(0x63ef+WF243.offset)&0xFF) + 0x0023); // WF243<IFIELD> C@ 0x0023 +
    return;
  }
  Push(0x002b);
}


// ================================================
// 0xf2bd: WORD 'STAR-ID-CASES' codep=0x4a4f parp=0xf2cf
// ================================================

void STAR_dash_ID_dash_CASES() // STAR-ID-CASES
{
  switch(Pop()) // STAR-ID-CASES
  {
  case 2:
    Push(Read16(cc_WF26B)); // WF26B
    break;
  default:
    Push(Read16(cc_WF267)); // WF267
    break;

  }
}

// ================================================
// 0xf2d7: WORD 'WF2D9' codep=0x224c parp=0xf2d9
// ================================================

void WF2D9() // WF2D9
{
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  STAR_dash_ID_dash_CASES(); // STAR-ID-CASES case
}


// ================================================
// 0xf2e1: WORD 'PLANET-ID-CASES' codep=0x4a4f parp=0xf2f5
// ================================================

void PLANET_dash_ID_dash_CASES() // PLANET-ID-CASES
{
  switch(Pop()) // PLANET-ID-CASES
  {
  case 2:
    Push(Read16(cc_WF273)); // WF273
    break;
  default:
    Push(Read16(cc_WF26F)); // WF26F
    break;

  }
}

// ================================================
// 0xf2fd: WORD 'WF2FF' codep=0x224c parp=0xf2ff
// ================================================

void WF2FF() // WF2FF
{
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  PLANET_dash_ID_dash_CASES(); // PLANET-ID-CASES case
}


// ================================================
// 0xf307: WORD 'WF309' codep=0x224c parp=0xf309 params=0 returns=1
// ================================================

void WF309() // WF309
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop() + 0x0032); //  0x0032 +
}


// ================================================
// 0xf313: WORD 'BOX-ID' codep=0x4a4f parp=0xf31e
// ================================================

void BOX_dash_ID() // BOX-ID
{
  switch(Pop()) // BOX-ID
  {
  case 24:
    WF2D9(); // WF2D9
    break;
  case 32:
    WF2FF(); // WF2FF
    break;
  default:
    Push(Read16(cc_INVIS_dash_I)); // INVIS-I
    break;

  }
}

// ================================================
// 0xf32a: WORD 'WF32C' codep=0x224c parp=0xf32c
// ================================================

void WF32C() // WF32C
{
  IOPEN(); // IOPEN
  GetINST_dash_CLASS(); // @INST-CLASS
  BOX_dash_ID(); // BOX-ID case
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf336: WORD 'SPACE-ID' codep=0x4a4f parp=0xf343
// ================================================

void SPACE_dash_ID() // SPACE-ID
{
  switch(Pop()) // SPACE-ID
  {
  case 11:
    WF32C(); // WF32C
    break;
  case 20:
    WF293(); // WF293
    break;
  case 23:
    Push(Read16(cc_SYS_dash_ICO)); // SYS-ICO
    break;
  case 24:
    WF2D9(); // WF2D9
    break;
  case 25:
    WF2A1(); // WF2A1
    break;
  case 32:
    WF2FF(); // WF2FF
    break;
  case 45:
    Push(Read16(cc_FLUX_dash_IC)); // FLUX-IC
    break;
  case 46:
    WF309(); // WF309
    break;
  default:
    Push(Read16(cc_INVIS_dash_I)); // INVIS-I
    break;

  }
}

// ================================================
// 0xf367: WORD 'RUIN-ID-CASES' codep=0x4a4f parp=0xf379
// ================================================

void RUIN_dash_ID_dash_CASES() // RUIN-ID-CASES
{
  switch(Pop()) // RUIN-ID-CASES
  {
  case 2:
    Push(Read16(cc_WF287)); // WF287
    break;
  case 4:
    Push(Read16(cc_WF287)); // WF287
    break;
  default:
    Push(Read16(cc_WF283)); // WF283
    break;

  }
}

// ================================================
// 0xf385: WORD 'WF387' codep=0x224c parp=0xf387
// ================================================

void WF387() // WF387
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  RUIN_dash_ID_dash_CASES(); // RUIN-ID-CASES case
}


// ================================================
// 0xf38d: WORD 'WF38F' codep=0x224c parp=0xf38f
// ================================================

void WF38F() // WF38F
{
  Push(Read16(0x63ef+WF250.offset)&0xFF); // WF250<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop() + 0x0010); //  0x0010 +
    return;
  }
  LoadData(WF248); // from 'CREATURE'
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xf3a9: WORD 'WF3AB' codep=0x224c parp=0xf3ab params=0 returns=1
// ================================================

void WF3AB() // WF3AB
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==6?1:0); //  6 =
  if (Pop() != 0)
  {
    Push(0x002c);
    return;
  }
  Push(Read16(cc_WF27B)); // WF27B
}


// ================================================
// 0xf3c1: WORD 'PLANET-ID' codep=0x4a4f parp=0xf3cf
// ================================================

void PLANET_dash_ID() // PLANET-ID
{
  switch(Pop()) // PLANET-ID
  {
  case 40:
    Push(Read16(cc_WF277)); // WF277
    break;
  case 41:
    WF387(); // WF387
    break;
  case 42:
    Push(Read16(cc_WF28F)); // WF28F
    break;
  case 68:
    WF38F(); // WF38F
    break;
  case 20:
    Push(Read16(cc_WF28B)); // WF28B
    break;
  case 26:
    WF3AB(); // WF3AB
    break;
  case 28:
    Push(Read16(cc_WF27F)); // WF27F
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf3ef: WORD 'WF3F1' codep=0x224c parp=0xf3f1
// ================================================

void WF3F1() // WF3F1
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  if (Pop() != 0)
  {
    SPACE_dash_ID(); // SPACE-ID case
    return;
  }
  PLANET_dash_ID(); // PLANET-ID case
}


// ================================================
// 0xf405: WORD 'STAR-IC-CASES' codep=0x4a4f parp=0xf417
// ================================================

void STAR_dash_IC_dash_CASES() // STAR-IC-CASES
{
  switch(Pop()) // STAR-IC-CASES
  {
  case 77:
    GetColor(RED);
    break;
  case 75:
    GetColor(ORANGE);
    break;
  case 71:
    GetColor(YELLOW);
    break;
  case 70:
    GetColor(WHITE);
    break;
  case 65:
    GetColor(GREEN);
    break;
  case 66:
    GetColor(BLUE);
    break;
  default:
    GetColor(LT_dash_BLUE);
    break;

  }
}

// ================================================
// 0xf433: WORD 'WF435' codep=0x224c parp=0xf435
// ================================================

void WF435() // WF435
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  STAR_dash_IC_dash_CASES(); // STAR-IC-CASES case
}


// ================================================
// 0xf43b: WORD 'WF43D' codep=0x224c parp=0xf43d params=0 returns=1
// ================================================

void WF43D() // WF43D
{
  Push(Read16(0x63ef+WF255.offset)&0xFF); // WF255<IFIELD> C@
  if (Pop() != 0)
  {
    Push(Read16(cc_DEFAULT)); // DEFAULT
    return;
  }
  Push(Read16(cc_DEAD_dash_IC)); // DEAD-IC
}


// ================================================
// 0xf44f: WORD 'PLAN-IC-CASES' codep=0x4a4f parp=0xf461
// ================================================

void PLAN_dash_IC_dash_CASES() // PLAN-IC-CASES
{
  switch(Pop()) // PLAN-IC-CASES
  {
  case 0:
    GetColor(GREY1);
    break;
  case 1:
    GetColor(VIOLET);
    break;
  case 2:
    GetColor(BLUE);
    break;
  case 3:
    GetColor(WHITE);
    break;
  case 4:
    GetColor(ORANGE);
    break;
  default:
    GetColor(BROWN);
    break;

  }
}

// ================================================
// 0xf479: WORD 'WF47B' codep=0x224c parp=0xf47b
// ================================================

void WF47B() // WF47B
{
  LoadData(WF25A); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  PLAN_dash_IC_dash_CASES(); // PLAN-IC-CASES case
}


// ================================================
// 0xf483: WORD 'WF485' codep=0x224c parp=0xf485 params=0 returns=1
// ================================================

void WF485() // WF485
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  if (Pop() != 0)
  {
    Push(3);
    return;
  }
  Push(Read16(cc_DEFAULT)); // DEFAULT
}


// ================================================
// 0xf495: WORD 'BOX-IC' codep=0x4a4f parp=0xf4a0
// ================================================

void BOX_dash_IC() // BOX-IC
{
  switch(Pop()) // BOX-IC
  {
  case 24:
    WF435(); // WF435
    break;
  case 32:
    WF47B(); // WF47B
    break;
  default:
    Push(Read16(cc_DEFAULT)); // DEFAULT
    break;

  }
}

// ================================================
// 0xf4ac: WORD 'WF4AE' codep=0x224c parp=0xf4ae
// ================================================

void WF4AE() // WF4AE
{
  IOPEN(); // IOPEN
  GetINST_dash_CLASS(); // @INST-CLASS
  BOX_dash_IC(); // BOX-IC case
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4b8: WORD '#IC-CASES' codep=0x4a4f parp=0xf4c6
// ================================================

void _n_IC_dash_CASES() // #IC-CASES
{
  switch(Pop()) // #IC-CASES
  {
  case 11:
    WF4AE(); // WF4AE
    break;
  case 23:
    WF435(); // WF435
    break;
  case 32:
    WF47B(); // WF47B
    break;
  case 24:
    WF435(); // WF435
    break;
  case 68:
    WF43D(); // WF43D
    break;
  case 45:
    WF485(); // WF485
    break;
  case 46:
    GetColor(DK_dash_GREEN);
    break;
  default:
    Push(Read16(cc_DEFAULT)); // DEFAULT
    break;

  }
}

// ================================================
// 0xf4e6: WORD 'WF4E8' codep=0x224c parp=0xf4e8
// ================================================

void WF4E8() // WF4E8
{
  GetINST_dash_CLASS(); // @INST-CLASS
  _n_IC_dash_CASES(); // #IC-CASES case
}


// ================================================
// 0xf4ee: WORD 'ICON-PARM' codep=0x224c parp=0xf4fc
// ================================================
// entry

void ICON_dash_PARM() // ICON-PARM
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  WF3F1(); // WF3F1
  WF4E8(); // WF4E8
  CI(); // CI
}


// ================================================
// 0xf50c: WORD '+ICP' codep=0x224c parp=0xf515
// ================================================

void _plus_ICP() // +ICP
{
  ICON_dash_PARM(); // ICON-PARM
  _plus_ICON(); // +ICON
}


// ================================================
// 0xf51b: WORD '+ICONBOX' codep=0x224c parp=0xf528
// ================================================
// entry

void _plus_ICONBOX() // +ICONBOX
{
  Push(0xf515); // '+ICP'
  ALL(); // ALL
}

// 0xf530: db 0x56 0x49 0x43 0x4f 0x4e 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x46 0x49 0x58 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'VICONP__________________________FIX ------------ '

