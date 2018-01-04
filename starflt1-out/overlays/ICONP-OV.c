// ====== OVERLAY 'ICONP-OV' ======
// store offset = 0xf220
// overlay size   = 0x0340

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf236  codep:0x744d parp:0xf236 size:0x0003 C-string:'UNK_0xf236'
//      UNK_0xf23b  codep:0x73ea parp:0xf23b size:0x0006 C-string:'UNK_0xf23b'
//      UNK_0xf243  codep:0x744d parp:0xf243 size:0x0003 C-string:'UNK_0xf243'
//      UNK_0xf248  codep:0x73ea parp:0xf248 size:0x0006 C-string:'UNK_0xf248'
//      UNK_0xf250  codep:0x744d parp:0xf250 size:0x0003 C-string:'UNK_0xf250'
//      UNK_0xf255  codep:0x744d parp:0xf255 size:0x0003 C-string:'UNK_0xf255'
//      UNK_0xf25a  codep:0x73ea parp:0xf25a size:0x000b C-string:'UNK_0xf25a'
//      UNK_0xf267  codep:0x2214 parp:0xf267 size:0x0002 C-string:'UNK_0xf267'
//      UNK_0xf26b  codep:0x2214 parp:0xf26b size:0x0002 C-string:'UNK_0xf26b'
//      UNK_0xf26f  codep:0x2214 parp:0xf26f size:0x0002 C-string:'UNK_0xf26f'
//      UNK_0xf273  codep:0x2214 parp:0xf273 size:0x0002 C-string:'UNK_0xf273'
//      UNK_0xf277  codep:0x2214 parp:0xf277 size:0x0002 C-string:'UNK_0xf277'
//      UNK_0xf27b  codep:0x2214 parp:0xf27b size:0x0002 C-string:'UNK_0xf27b'
//      UNK_0xf27f  codep:0x2214 parp:0xf27f size:0x0002 C-string:'UNK_0xf27f'
//      UNK_0xf283  codep:0x2214 parp:0xf283 size:0x0002 C-string:'UNK_0xf283'
//      UNK_0xf287  codep:0x2214 parp:0xf287 size:0x0002 C-string:'UNK_0xf287'
//      UNK_0xf28b  codep:0x2214 parp:0xf28b size:0x0002 C-string:'UNK_0xf28b'
//      UNK_0xf28f  codep:0x2214 parp:0xf28f size:0x0002 C-string:'UNK_0xf28f'
//      UNK_0xf293  codep:0x224c parp:0xf293 size:0x000c C-string:'UNK_0xf293'
//      UNK_0xf2a1  codep:0x224c parp:0xf2a1 size:0x001c C-string:'UNK_0xf2a1'
//   STAR-ID-CASES  codep:0x4a4f parp:0xf2cf size:0x0008 C-string:'STAR_dash_ID_dash_CASES'
//      UNK_0xf2d9  codep:0x224c parp:0xf2d9 size:0x0008 C-string:'UNK_0xf2d9'
// PLANET-ID-CASES  codep:0x4a4f parp:0xf2f5 size:0x0008 C-string:'PLANET_dash_ID_dash_CASES'
//      UNK_0xf2ff  codep:0x224c parp:0xf2ff size:0x0008 C-string:'UNK_0xf2ff'
//      UNK_0xf309  codep:0x224c parp:0xf309 size:0x000a C-string:'UNK_0xf309'
//          BOX-ID  codep:0x4a4f parp:0xf31e size:0x000c C-string:'BOX_dash_ID'
//      UNK_0xf32c  codep:0x224c parp:0xf32c size:0x000a C-string:'UNK_0xf32c'
//        SPACE-ID  codep:0x4a4f parp:0xf343 size:0x0024 C-string:'SPACE_dash_ID'
//   RUIN-ID-CASES  codep:0x4a4f parp:0xf379 size:0x000c C-string:'RUIN_dash_ID_dash_CASES'
//      UNK_0xf387  codep:0x224c parp:0xf387 size:0x0006 C-string:'UNK_0xf387'
//      UNK_0xf38f  codep:0x224c parp:0xf38f size:0x001a C-string:'UNK_0xf38f'
//      UNK_0xf3ab  codep:0x224c parp:0xf3ab size:0x0016 C-string:'UNK_0xf3ab'
//       PLANET-ID  codep:0x4a4f parp:0xf3cf size:0x0020 C-string:'PLANET_dash_ID'
//      UNK_0xf3f1  codep:0x224c parp:0xf3f1 size:0x0014 C-string:'UNK_0xf3f1'
//   STAR-IC-CASES  codep:0x4a4f parp:0xf417 size:0x001c C-string:'STAR_dash_IC_dash_CASES'
//      UNK_0xf435  codep:0x224c parp:0xf435 size:0x0006 C-string:'UNK_0xf435'
//      UNK_0xf43d  codep:0x224c parp:0xf43d size:0x0012 C-string:'UNK_0xf43d'
//   PLAN-IC-CASES  codep:0x4a4f parp:0xf461 size:0x0018 C-string:'PLAN_dash_IC_dash_CASES'
//      UNK_0xf47b  codep:0x224c parp:0xf47b size:0x0008 C-string:'UNK_0xf47b'
//      UNK_0xf485  codep:0x224c parp:0xf485 size:0x0010 C-string:'UNK_0xf485'
//          BOX-IC  codep:0x4a4f parp:0xf4a0 size:0x000c C-string:'BOX_dash_IC'
//      UNK_0xf4ae  codep:0x224c parp:0xf4ae size:0x000a C-string:'UNK_0xf4ae'
//       #IC-CASES  codep:0x4a4f parp:0xf4c6 size:0x0020 C-string:'_n_IC_dash_CASES'
//      UNK_0xf4e8  codep:0x224c parp:0xf4e8 size:0x0006 C-string:'UNK_0xf4e8'
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

const unsigned short int cc_UNK_0xf267 = 0xf267; // UNK_0xf267
const unsigned short int cc_UNK_0xf26b = 0xf26b; // UNK_0xf26b
const unsigned short int cc_UNK_0xf26f = 0xf26f; // UNK_0xf26f
const unsigned short int cc_UNK_0xf273 = 0xf273; // UNK_0xf273
const unsigned short int cc_UNK_0xf277 = 0xf277; // UNK_0xf277
const unsigned short int cc_UNK_0xf27b = 0xf27b; // UNK_0xf27b
const unsigned short int cc_UNK_0xf27f = 0xf27f; // UNK_0xf27f
const unsigned short int cc_UNK_0xf283 = 0xf283; // UNK_0xf283
const unsigned short int cc_UNK_0xf287 = 0xf287; // UNK_0xf287
const unsigned short int cc_UNK_0xf28b = 0xf28b; // UNK_0xf28b
const unsigned short int cc_UNK_0xf28f = 0xf28f; // UNK_0xf28f


// 0xf232: db 0x32 0x00 '2 '

// ================================================
// 0xf234: WORD 'UNK_0xf236' codep=0x744d parp=0xf236
// ================================================
IFieldType UNK_0xf236 = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xf239: WORD 'UNK_0xf23b' codep=0x73ea parp=0xf23b
// ================================================
LoadDataType UNK_0xf23b = {VESSELIDX, 0x1c, 0x01, 0x49, 0x6491};

// ================================================
// 0xf241: WORD 'UNK_0xf243' codep=0x744d parp=0xf243
// ================================================
IFieldType UNK_0xf243 = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xf246: WORD 'UNK_0xf248' codep=0x73ea parp=0xf248
// ================================================
LoadDataType UNK_0xf248 = {CREATUREIDX, 0x90, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x744d parp=0xf250
// ================================================
IFieldType UNK_0xf250 = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xf253: WORD 'UNK_0xf255' codep=0x744d parp=0xf255
// ================================================
IFieldType UNK_0xf255 = {CREATUREIDX, 0x11, 0x01};

// ================================================
// 0xf258: WORD 'UNK_0xf25a' codep=0x73ea parp=0xf25a
// ================================================
LoadDataType UNK_0xf25a = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};
// 0xf260: db 0x4d 0x74 0x3d 0x1b 0x01 'Mt=  '

// ================================================
// 0xf265: WORD 'UNK_0xf267' codep=0x2214 parp=0xf267
// ================================================
// 0xf267: dw 0x0034

// ================================================
// 0xf269: WORD 'UNK_0xf26b' codep=0x2214 parp=0xf26b
// ================================================
// 0xf26b: dw 0x0034

// ================================================
// 0xf26d: WORD 'UNK_0xf26f' codep=0x2214 parp=0xf26f
// ================================================
// 0xf26f: dw 0x0033

// ================================================
// 0xf271: WORD 'UNK_0xf273' codep=0x2214 parp=0xf273
// ================================================
// 0xf273: dw 0x0033

// ================================================
// 0xf275: WORD 'UNK_0xf277' codep=0x2214 parp=0xf277
// ================================================
// 0xf277: dw 0x0014

// ================================================
// 0xf279: WORD 'UNK_0xf27b' codep=0x2214 parp=0xf27b
// ================================================
// 0xf27b: dw 0x0015

// ================================================
// 0xf27d: WORD 'UNK_0xf27f' codep=0x2214 parp=0xf27f
// ================================================
// 0xf27f: dw 0x0016

// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x2214 parp=0xf283
// ================================================
// 0xf283: dw 0x0017

// ================================================
// 0xf285: WORD 'UNK_0xf287' codep=0x2214 parp=0xf287
// ================================================
// 0xf287: dw 0x0018

// ================================================
// 0xf289: WORD 'UNK_0xf28b' codep=0x2214 parp=0xf28b
// ================================================
// 0xf28b: dw 0x0019

// ================================================
// 0xf28d: WORD 'UNK_0xf28f' codep=0x2214 parp=0xf28f
// ================================================
// 0xf28f: dw 0x001a

// ================================================
// 0xf291: WORD 'UNK_0xf293' codep=0x224c parp=0xf293 params=0 returns=1
// ================================================

void UNK_0xf293() // UNK_0xf293
{
  Push(0x63ef+UNK_0xf236.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(0x001b);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf29f: WORD 'UNK_0xf2a1' codep=0x224c parp=0xf2a1
// ================================================

void UNK_0xf2a1() // UNK_0xf2a1
{
  LoadData(UNK_0xf23b); // from 'VESSEL'
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    Push(0x63ef+UNK_0xf243.offset); // IFIELD
    Push(Read8(Pop())&0xFF); // C@
    Push(0x0023);
    Push(Pop() + Pop()); // +
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
    Push(Read16(cc_UNK_0xf26b)); // UNK_0xf26b
    break;
  default:
    Push(Read16(cc_UNK_0xf267)); // UNK_0xf267
    break;

  }
}

// ================================================
// 0xf2d7: WORD 'UNK_0xf2d9' codep=0x224c parp=0xf2d9
// ================================================

void UNK_0xf2d9() // UNK_0xf2d9
{
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
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
    Push(Read16(cc_UNK_0xf273)); // UNK_0xf273
    break;
  default:
    Push(Read16(cc_UNK_0xf26f)); // UNK_0xf26f
    break;

  }
}

// ================================================
// 0xf2fd: WORD 'UNK_0xf2ff' codep=0x224c parp=0xf2ff
// ================================================

void UNK_0xf2ff() // UNK_0xf2ff
{
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  PLANET_dash_ID_dash_CASES(); // PLANET-ID-CASES case
}


// ================================================
// 0xf307: WORD 'UNK_0xf309' codep=0x224c parp=0xf309 params=0 returns=1
// ================================================

void UNK_0xf309() // UNK_0xf309
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0032);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf313: WORD 'BOX-ID' codep=0x4a4f parp=0xf31e
// ================================================

void BOX_dash_ID() // BOX-ID
{
  switch(Pop()) // BOX-ID
  {
  case 24:
    UNK_0xf2d9(); // UNK_0xf2d9
    break;
  case 32:
    UNK_0xf2ff(); // UNK_0xf2ff
    break;
  default:
    Push(Read16(cc_INVIS_dash_I)); // INVIS-I
    break;

  }
}

// ================================================
// 0xf32a: WORD 'UNK_0xf32c' codep=0x224c parp=0xf32c
// ================================================

void UNK_0xf32c() // UNK_0xf32c
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
    UNK_0xf32c(); // UNK_0xf32c
    break;
  case 20:
    UNK_0xf293(); // UNK_0xf293
    break;
  case 23:
    Push(Read16(cc_SYS_dash_ICO)); // SYS-ICO
    break;
  case 24:
    UNK_0xf2d9(); // UNK_0xf2d9
    break;
  case 25:
    UNK_0xf2a1(); // UNK_0xf2a1
    break;
  case 32:
    UNK_0xf2ff(); // UNK_0xf2ff
    break;
  case 45:
    Push(Read16(cc_FLUX_dash_IC)); // FLUX-IC
    break;
  case 46:
    UNK_0xf309(); // UNK_0xf309
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
    Push(Read16(cc_UNK_0xf287)); // UNK_0xf287
    break;
  case 4:
    Push(Read16(cc_UNK_0xf287)); // UNK_0xf287
    break;
  default:
    Push(Read16(cc_UNK_0xf283)); // UNK_0xf283
    break;

  }
}

// ================================================
// 0xf385: WORD 'UNK_0xf387' codep=0x224c parp=0xf387
// ================================================

void UNK_0xf387() // UNK_0xf387
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  RUIN_dash_ID_dash_CASES(); // RUIN-ID-CASES case
}


// ================================================
// 0xf38d: WORD 'UNK_0xf38f' codep=0x224c parp=0xf38f
// ================================================

void UNK_0xf38f() // UNK_0xf38f
{
  Push(0x63ef+UNK_0xf250.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0010);
    Push(Pop() + Pop()); // +
    return;
  }
  LoadData(UNK_0xf248); // from 'CREATURE'
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf3a9: WORD 'UNK_0xf3ab' codep=0x224c parp=0xf3ab params=0 returns=1
// ================================================

void UNK_0xf3ab() // UNK_0xf3ab
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(6);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0x002c);
    return;
  }
  Push(Read16(cc_UNK_0xf27b)); // UNK_0xf27b
}


// ================================================
// 0xf3c1: WORD 'PLANET-ID' codep=0x4a4f parp=0xf3cf
// ================================================

void PLANET_dash_ID() // PLANET-ID
{
  switch(Pop()) // PLANET-ID
  {
  case 40:
    Push(Read16(cc_UNK_0xf277)); // UNK_0xf277
    break;
  case 41:
    UNK_0xf387(); // UNK_0xf387
    break;
  case 42:
    Push(Read16(cc_UNK_0xf28f)); // UNK_0xf28f
    break;
  case 68:
    UNK_0xf38f(); // UNK_0xf38f
    break;
  case 20:
    Push(Read16(cc_UNK_0xf28b)); // UNK_0xf28b
    break;
  case 26:
    UNK_0xf3ab(); // UNK_0xf3ab
    break;
  case 28:
    Push(Read16(cc_UNK_0xf27f)); // UNK_0xf27f
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf3ef: WORD 'UNK_0xf3f1' codep=0x224c parp=0xf3f1
// ================================================

void UNK_0xf3f1() // UNK_0xf3f1
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
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
    SetColor(RED);
    break;
  case 75:
    SetColor(ORANGE);
    break;
  case 71:
    SetColor(YELLOW);
    break;
  case 70:
    SetColor(WHITE);
    break;
  case 65:
    SetColor(GREEN);
    break;
  case 66:
    SetColor(BLUE);
    break;
  default:
    SetColor(LT_dash_BLUE);
    break;

  }
}

// ================================================
// 0xf433: WORD 'UNK_0xf435' codep=0x224c parp=0xf435
// ================================================

void UNK_0xf435() // UNK_0xf435
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  STAR_dash_IC_dash_CASES(); // STAR-IC-CASES case
}


// ================================================
// 0xf43b: WORD 'UNK_0xf43d' codep=0x224c parp=0xf43d params=0 returns=1
// ================================================

void UNK_0xf43d() // UNK_0xf43d
{
  Push(0x63ef+UNK_0xf255.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
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
    SetColor(GREY1);
    break;
  case 1:
    SetColor(VIOLET);
    break;
  case 2:
    SetColor(BLUE);
    break;
  case 3:
    SetColor(WHITE);
    break;
  case 4:
    SetColor(ORANGE);
    break;
  default:
    SetColor(BROWN);
    break;

  }
}

// ================================================
// 0xf479: WORD 'UNK_0xf47b' codep=0x224c parp=0xf47b
// ================================================

void UNK_0xf47b() // UNK_0xf47b
{
  LoadData(UNK_0xf25a); // from 'PLANET'
  Push(Read8(Pop())&0xFF); // C@
  PLAN_dash_IC_dash_CASES(); // PLAN-IC-CASES case
}


// ================================================
// 0xf483: WORD 'UNK_0xf485' codep=0x224c parp=0xf485 params=0 returns=1
// ================================================

void UNK_0xf485() // UNK_0xf485
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
    UNK_0xf435(); // UNK_0xf435
    break;
  case 32:
    UNK_0xf47b(); // UNK_0xf47b
    break;
  default:
    Push(Read16(cc_DEFAULT)); // DEFAULT
    break;

  }
}

// ================================================
// 0xf4ac: WORD 'UNK_0xf4ae' codep=0x224c parp=0xf4ae
// ================================================

void UNK_0xf4ae() // UNK_0xf4ae
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
    UNK_0xf4ae(); // UNK_0xf4ae
    break;
  case 23:
    UNK_0xf435(); // UNK_0xf435
    break;
  case 32:
    UNK_0xf47b(); // UNK_0xf47b
    break;
  case 24:
    UNK_0xf435(); // UNK_0xf435
    break;
  case 68:
    UNK_0xf43d(); // UNK_0xf43d
    break;
  case 45:
    UNK_0xf485(); // UNK_0xf485
    break;
  case 46:
    SetColor(DK_dash_GREEN);
    break;
  default:
    Push(Read16(cc_DEFAULT)); // DEFAULT
    break;

  }
}

// ================================================
// 0xf4e6: WORD 'UNK_0xf4e8' codep=0x224c parp=0xf4e8
// ================================================

void UNK_0xf4e8() // UNK_0xf4e8
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
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
  UNK_0xf3f1(); // UNK_0xf3f1
  UNK_0xf4e8(); // UNK_0xf4e8
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
// 0xf51b: WORD '+ICONBOX' codep=0x224c parp=0xf528 params=3 returns=0
// ================================================
// entry

void _plus_ICONBOX() // +ICONBOX
{
  Push(0xf515); // probable '+ICP'
  ALL(); // ALL
}

// 0xf530: db 0x56 0x49 0x43 0x4f 0x4e 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x46 0x49 0x58 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'VICONP__________________________FIX ------------ '

