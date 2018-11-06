// ====== OVERLAY 'ICONP-OV' ======
// store offset = 0xf0b0
// overlay size   = 0x04b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WF0C6  codep:0x7420 parp:0xf0c6 size:0x0003 C-string:'WF0C6'
//           WF0CB  codep:0x7420 parp:0xf0cb size:0x0003 C-string:'WF0CB'
//           WF0D0  codep:0x7394 parp:0xf0d0 size:0x0006 C-string:'WF0D0'
//           WF0D8  codep:0x7420 parp:0xf0d8 size:0x0003 C-string:'WF0D8'
//           WF0DD  codep:0x7394 parp:0xf0dd size:0x0006 C-string:'WF0DD'
//           WF0E5  codep:0x7420 parp:0xf0e5 size:0x0003 C-string:'WF0E5'
//           WF0EA  codep:0x7420 parp:0xf0ea size:0x0003 C-string:'WF0EA'
//           WF0EF  codep:0x7394 parp:0xf0ef size:0x0006 C-string:'WF0EF'
//           WF0F7  codep:0x7420 parp:0xf0f7 size:0x0003 C-string:'WF0F7'
//           WF0FC  codep:0x7394 parp:0xf0fc size:0x0006 C-string:'WF0FC'
//           WF104  codep:0x7420 parp:0xf104 size:0x0003 C-string:'WF104'
//           WF109  codep:0x7420 parp:0xf109 size:0x0003 C-string:'WF109'
//           WF10E  codep:0x7394 parp:0xf10e size:0x0006 C-string:'WF10E'
//           WF116  codep:0x2214 parp:0xf116 size:0x0002 C-string:'WF116'
//           WF11A  codep:0x2214 parp:0xf11a size:0x0002 C-string:'WF11A'
//           WF11E  codep:0x2214 parp:0xf11e size:0x0002 C-string:'WF11E'
//           WF122  codep:0x2214 parp:0xf122 size:0x0002 C-string:'WF122'
//           WF126  codep:0x2214 parp:0xf126 size:0x0002 C-string:'WF126'
//           WF12A  codep:0x2214 parp:0xf12a size:0x0002 C-string:'WF12A'
//           WF12E  codep:0x2214 parp:0xf12e size:0x0002 C-string:'WF12E'
//           WF132  codep:0x2214 parp:0xf132 size:0x0002 C-string:'WF132'
//           WF136  codep:0x2214 parp:0xf136 size:0x0002 C-string:'WF136'
//           WF13A  codep:0x2214 parp:0xf13a size:0x0002 C-string:'WF13A'
//           WF13E  codep:0x2214 parp:0xf13e size:0x0002 C-string:'WF13E'
//           WF142  codep:0x2214 parp:0xf142 size:0x0002 C-string:'WF142'
//           WF146  codep:0x2214 parp:0xf146 size:0x0002 C-string:'WF146'
//           WF14A  codep:0x2214 parp:0xf14a size:0x0002 C-string:'WF14A'
//           WF14E  codep:0x2214 parp:0xf14e size:0x0002 C-string:'WF14E'
//           WF152  codep:0x2214 parp:0xf152 size:0x0002 C-string:'WF152'
//           WF156  codep:0x2214 parp:0xf156 size:0x0002 C-string:'WF156'
//           WF15A  codep:0x2214 parp:0xf15a size:0x0002 C-string:'WF15A'
//           WF15E  codep:0x2214 parp:0xf15e size:0x0002 C-string:'WF15E'
//           WF162  codep:0x2214 parp:0xf162 size:0x0002 C-string:'WF162'
//           WF166  codep:0x2214 parp:0xf166 size:0x0002 C-string:'WF166'
//           WF16A  codep:0x224c parp:0xf16a size:0x0006 C-string:'WF16A'
//           WF172  codep:0x224c parp:0xf172 size:0x0010 C-string:'WF172'
//           WF184  codep:0x224c parp:0xf184 size:0x000c C-string:'WF184'
//           WF192  codep:0x224c parp:0xf192 size:0x003c C-string:'WF192'
//    STAR-ID-CASE  codep:0x4b3b parp:0xf1df size:0x0008 C-string:'STAR_dash_ID_dash_CASE'
//           WF1E9  codep:0x224c parp:0xf1e9 size:0x0008 C-string:'WF1E9'
//    PLANET-ID-CA  codep:0x4b3b parp:0xf202 size:0x0008 C-string:'PLANET_dash_ID_dash_CA'
//           WF20C  codep:0x224c parp:0xf20c size:0x0008 C-string:'WF20C'
//           WF216  codep:0x224c parp:0xf216 size:0x000a C-string:'WF216'
//          BOX-ID  codep:0x4b3b parp:0xf22b size:0x000c C-string:'BOX_dash_ID'
//           WF239  codep:0x224c parp:0xf239 size:0x000a C-string:'WF239'
//           WF245  codep:0x224c parp:0xf245 size:0x0012 C-string:'WF245'
//        SPACE-ID  codep:0x4b3b parp:0xf264 size:0x0028 C-string:'SPACE_dash_ID'
//           WF28E  codep:0x224c parp:0xf28e size:0x0016 C-string:'WF28E'
//    RUIN-ID-CASE  codep:0x4b3b parp:0xf2b5 size:0x0014 C-string:'RUIN_dash_ID_dash_CASE'
//           WF2CB  codep:0x224c parp:0xf2cb size:0x001a C-string:'WF2CB'
//           WF2E7  codep:0x224c parp:0xf2e7 size:0x0006 C-string:'WF2E7'
//           WF2EF  codep:0x224c parp:0xf2ef size:0x002e C-string:'WF2EF'
//           WF31F  codep:0x224c parp:0xf31f size:0x0006 C-string:'WF31F'
//       PLANET-ID  codep:0x4b3b parp:0xf333 size:0x0030 C-string:'PLANET_dash_ID'
//           WF365  codep:0x224c parp:0xf365 size:0x0014 C-string:'WF365'
//    STAR-IC-CASE  codep:0x4b3b parp:0xf38a size:0x001c C-string:'STAR_dash_IC_dash_CASE'
//           WF3A8  codep:0x224c parp:0xf3a8 size:0x0006 C-string:'WF3A8'
//           WF3B0  codep:0x224c parp:0xf3b0 size:0x0010 C-string:'WF3B0'
//           WF3C2  codep:0x224c parp:0xf3c2 size:0x0022 C-string:'WF3C2'
//           WF3E6  codep:0x224c parp:0xf3e6 size:0x0010 C-string:'WF3E6'
//    PLAN-IC-CASE  codep:0x4b3b parp:0xf407 size:0x0018 C-string:'PLAN_dash_IC_dash_CASE'
//           WF421  codep:0x224c parp:0xf421 size:0x0008 C-string:'WF421'
//           WF42B  codep:0x224c parp:0xf42b size:0x0010 C-string:'WF42B'
//          BOX-IC  codep:0x4b3b parp:0xf446 size:0x000c C-string:'BOX_dash_IC'
//           WF454  codep:0x224c parp:0xf454 size:0x000a C-string:'WF454'
//           WF460  codep:0x224c parp:0xf460 size:0x0020 C-string:'WF460'
//       #IC-CASES  codep:0x4b3b parp:0xf48e size:0x0024 C-string:'_n_IC_dash_CASES'
//           WF4B4  codep:0x224c parp:0xf4b4 size:0x0006 C-string:'WF4B4'
//           WF4BC  codep:0x224c parp:0xf4bc size:0x003e C-string:'WF4BC'
//       ICON-PARM  codep:0x224c parp:0xf508 size:0x0010 C-string:'ICON_dash_PARM'
//           WF51A  codep:0x224c parp:0xf51a size:0x000c C-string:'WF51A'
//        +ICONBOX  codep:0x224c parp:0xf533 size:0x0000 C-string:'_plus_ICONBOX'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_SYS_dash_ICO; // SYS-ICO
extern const unsigned short int cc_INVIS_dash_I; // INVIS-I
extern const unsigned short int cc_FLUX_dash_IC; // FLUX-IC
extern const unsigned short int cc_DEAD_dash_IC; // DEAD-IC
extern const unsigned short int cc_DEFAULT; // DEFAULT
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_FSTUN; // FSTUN
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern Color DK_dash_GREE; // DK-GREE
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
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void ICLOSE(); // ICLOSE
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void ALL(); // ALL
void IsCGA(); // ?CGA
void _plus_ICON_2(); // +ICON_2
void _st_(); // <
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================

const unsigned short int cc_WF116 = 0xf116; // WF116
const unsigned short int cc_WF11A = 0xf11a; // WF11A
const unsigned short int cc_WF11E = 0xf11e; // WF11E
const unsigned short int cc_WF122 = 0xf122; // WF122
const unsigned short int cc_WF126 = 0xf126; // WF126
const unsigned short int cc_WF12A = 0xf12a; // WF12A
const unsigned short int cc_WF12E = 0xf12e; // WF12E
const unsigned short int cc_WF132 = 0xf132; // WF132
const unsigned short int cc_WF136 = 0xf136; // WF136
const unsigned short int cc_WF13A = 0xf13a; // WF13A
const unsigned short int cc_WF13E = 0xf13e; // WF13E
const unsigned short int cc_WF142 = 0xf142; // WF142
const unsigned short int cc_WF146 = 0xf146; // WF146
const unsigned short int cc_WF14A = 0xf14a; // WF14A
const unsigned short int cc_WF14E = 0xf14e; // WF14E
const unsigned short int cc_WF152 = 0xf152; // WF152
const unsigned short int cc_WF156 = 0xf156; // WF156
const unsigned short int cc_WF15A = 0xf15a; // WF15A
const unsigned short int cc_WF15E = 0xf15e; // WF15E
const unsigned short int cc_WF162 = 0xf162; // WF162
const unsigned short int cc_WF166 = 0xf166; // WF166


// 0xf0c2: db 0x49 0x00 'I '

// ================================================
// 0xf0c4: WORD 'WF0C6' codep=0x7420 parp=0xf0c6
// ================================================
IFieldType WF0C6 = {NEBULAIDX, 0x11, 0x01};

// ================================================
// 0xf0c9: WORD 'WF0CB' codep=0x7420 parp=0xf0cb
// ================================================
IFieldType WF0CB = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xf0ce: WORD 'WF0D0' codep=0x7394 parp=0xf0d0
// ================================================
LoadDataType WF0D0 = {VESSELIDX, 0x1c, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xf0d6: WORD 'WF0D8' codep=0x7420 parp=0xf0d8
// ================================================
IFieldType WF0D8 = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xf0db: WORD 'WF0DD' codep=0x7394 parp=0xf0dd
// ================================================
LoadDataType WF0DD = {CREATUREIDX, 0x1a, 0x01, 0x22, 0x6f07};

// ================================================
// 0xf0e3: WORD 'WF0E5' codep=0x7420 parp=0xf0e5
// ================================================
IFieldType WF0E5 = {CREATUREIDX, 0x19, 0x01};

// ================================================
// 0xf0e8: WORD 'WF0EA' codep=0x7420 parp=0xf0ea
// ================================================
IFieldType WF0EA = {CREATUREIDX, 0x18, 0x01};

// ================================================
// 0xf0ed: WORD 'WF0EF' codep=0x7394 parp=0xf0ef
// ================================================
LoadDataType WF0EF = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xf0f5: WORD 'WF0F7' codep=0x7420 parp=0xf0f7
// ================================================
// orphan
IFieldType WF0F7 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xf0fa: WORD 'WF0FC' codep=0x7394 parp=0xf0fc
// ================================================
LoadDataType WF0FC = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xf102: WORD 'WF104' codep=0x7420 parp=0xf104
// ================================================
IFieldType WF104 = {TRADERSIDX, 0x0c, 0x01};

// ================================================
// 0xf107: WORD 'WF109' codep=0x7420 parp=0xf109
// ================================================
IFieldType WF109 = {STARSYSTEMIDX, 0x0b, 0x01};

// ================================================
// 0xf10c: WORD 'WF10E' codep=0x7394 parp=0xf10e
// ================================================
// orphan
LoadDataType WF10E = {VESSELIDX, 0x04, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xf114: WORD 'WF116' codep=0x2214 parp=0xf116
// ================================================
// 0xf116: dw 0x0032

// ================================================
// 0xf118: WORD 'WF11A' codep=0x2214 parp=0xf11a
// ================================================
// 0xf11a: dw 0x0034

// ================================================
// 0xf11c: WORD 'WF11E' codep=0x2214 parp=0xf11e
// ================================================
// 0xf11e: dw 0x0034

// ================================================
// 0xf120: WORD 'WF122' codep=0x2214 parp=0xf122
// ================================================
// 0xf122: dw 0x0033

// ================================================
// 0xf124: WORD 'WF126' codep=0x2214 parp=0xf126
// ================================================
// 0xf126: dw 0x0033

// ================================================
// 0xf128: WORD 'WF12A' codep=0x2214 parp=0xf12a
// ================================================
// 0xf12a: dw 0x0015

// ================================================
// 0xf12c: WORD 'WF12E' codep=0x2214 parp=0xf12e
// ================================================
// 0xf12e: dw 0x0016

// ================================================
// 0xf130: WORD 'WF132' codep=0x2214 parp=0xf132
// ================================================
// 0xf132: dw 0x0017

// ================================================
// 0xf134: WORD 'WF136' codep=0x2214 parp=0xf136
// ================================================
// 0xf136: dw 0x0018

// ================================================
// 0xf138: WORD 'WF13A' codep=0x2214 parp=0xf13a
// ================================================
// 0xf13a: dw 0x0019

// ================================================
// 0xf13c: WORD 'WF13E' codep=0x2214 parp=0xf13e
// ================================================
// 0xf13e: dw 0x001a

// ================================================
// 0xf140: WORD 'WF142' codep=0x2214 parp=0xf142
// ================================================
// 0xf142: dw 0x00fe

// ================================================
// 0xf144: WORD 'WF146' codep=0x2214 parp=0xf146
// ================================================
// 0xf146: dw 0x0014

// ================================================
// 0xf148: WORD 'WF14A' codep=0x2214 parp=0xf14a
// ================================================
// 0xf14a: dw 0x002c

// ================================================
// 0xf14c: WORD 'WF14E' codep=0x2214 parp=0xf14e
// ================================================
// 0xf14e: dw 0x002d

// ================================================
// 0xf150: WORD 'WF152' codep=0x2214 parp=0xf152
// ================================================
// 0xf152: dw 0x002e

// ================================================
// 0xf154: WORD 'WF156' codep=0x2214 parp=0xf156
// ================================================
// 0xf156: dw 0x002f

// ================================================
// 0xf158: WORD 'WF15A' codep=0x2214 parp=0xf15a
// ================================================
// 0xf15a: dw 0x0030

// ================================================
// 0xf15c: WORD 'WF15E' codep=0x2214 parp=0xf15e
// ================================================
// 0xf15e: dw 0x005f

// ================================================
// 0xf160: WORD 'WF162' codep=0x2214 parp=0xf162
// ================================================
// 0xf162: dw 0x0060

// ================================================
// 0xf164: WORD 'WF166' codep=0x2214 parp=0xf166
// ================================================
// 0xf166: dw 0x0062

// ================================================
// 0xf168: WORD 'WF16A' codep=0x224c parp=0xf16a params=0 returns=0
// ================================================

void WF16A() // WF16A
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xf170: WORD 'WF172' codep=0x224c parp=0xf172
// ================================================

void WF172() // WF172
{
  WF16A(); // WF16A
  LoadData(WF0FC); // from 'TRADERS'
  Push((Read16(Pop())&0xFF) + 0x005a); //  C@ 0x005a +
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf182: WORD 'WF184' codep=0x224c parp=0xf184 params=0 returns=1
// ================================================

void WF184() // WF184
{
  Push((Read16(0x65e1+WF0CB.offset)&0xFF) + 0x001b); // WF0CB<IFIELD> C@ 0x001b +
}


// ================================================
// 0xf190: WORD 'WF192' codep=0x224c parp=0xf192
// ================================================

void WF192() // WF192
{
  LoadData(WF0D0); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(0x0014);
    _eq_SPECIE(); // =SPECIE
    if (Pop() != 0)
    {
      Push(Read16(cc_WF162)); // WF162
    } else
    {
      Push(0x001d);
      _eq_SPECIE(); // =SPECIE
      if (Pop() != 0)
      {
        Push(Read16(cc_WF166)); // WF166
      } else
      {
        Push((Read16(0x65e1+WF0D8.offset)&0xFF) + 0x0023); // WF0D8<IFIELD> C@ 0x0023 +
      }
    }
    return;
  }
  Push(0x002b);
}


// ================================================
// 0xf1ce: WORD 'STAR-ID-CASE' codep=0x4b3b parp=0xf1df
// ================================================

void STAR_dash_ID_dash_CASE() // STAR-ID-CASE
{
  switch(Pop()) // STAR-ID-CASE
  {
  case 2:
    Push(Read16(cc_WF11E)); // WF11E
    break;
  default:
    Push(Read16(cc_WF11A)); // WF11A
    break;

  }
}

// ================================================
// 0xf1e7: WORD 'WF1E9' codep=0x224c parp=0xf1e9
// ================================================

void WF1E9() // WF1E9
{
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  STAR_dash_ID_dash_CASE(); // STAR-ID-CASE case
}


// ================================================
// 0xf1f1: WORD 'PLANET-ID-CA' codep=0x4b3b parp=0xf202
// ================================================

void PLANET_dash_ID_dash_CA() // PLANET-ID-CA
{
  switch(Pop()) // PLANET-ID-CA
  {
  case 2:
    Push(Read16(cc_WF126)); // WF126
    break;
  default:
    Push(Read16(cc_WF122)); // WF122
    break;

  }
}

// ================================================
// 0xf20a: WORD 'WF20C' codep=0x224c parp=0xf20c
// ================================================

void WF20C() // WF20C
{
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  PLANET_dash_ID_dash_CA(); // PLANET-ID-CA case
}


// ================================================
// 0xf214: WORD 'WF216' codep=0x224c parp=0xf216 params=0 returns=1
// ================================================

void WF216() // WF216
{
  GetINST_dash_S(); // @INST-S
  Push(Pop() + 0x0032); //  0x0032 +
}


// ================================================
// 0xf220: WORD 'BOX-ID' codep=0x4b3b parp=0xf22b
// ================================================

void BOX_dash_ID() // BOX-ID
{
  switch(Pop()) // BOX-ID
  {
  case 24:
    WF1E9(); // WF1E9
    break;
  case 32:
    WF20C(); // WF20C
    break;
  default:
    Push(Read16(cc_INVIS_dash_I)); // INVIS-I
    break;

  }
}

// ================================================
// 0xf237: WORD 'WF239' codep=0x224c parp=0xf239
// ================================================

void WF239() // WF239
{
  IOPEN(); // IOPEN
  GetINST_dash_C(); // @INST-C
  BOX_dash_ID(); // BOX-ID case
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf243: WORD 'WF245' codep=0x224c parp=0xf245 params=0 returns=1
// ================================================

void WF245() // WF245
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    Push(Read16(cc_WF14A)); // WF14A
    return;
  }
  Push(Read16(cc_WF132)); // WF132
}


// ================================================
// 0xf257: WORD 'SPACE-ID' codep=0x4b3b parp=0xf264
// ================================================

void SPACE_dash_ID() // SPACE-ID
{
  switch(Pop()) // SPACE-ID
  {
  case 11:
    WF239(); // WF239
    break;
  case 20:
    WF184(); // WF184
    break;
  case 23:
    Push(Read16(cc_SYS_dash_ICO)); // SYS-ICO
    break;
  case 24:
    WF1E9(); // WF1E9
    break;
  case 25:
    WF192(); // WF192
    break;
  case 32:
    WF20C(); // WF20C
    break;
  case 45:
    Push(Read16(cc_FLUX_dash_IC)); // FLUX-IC
    break;
  case 46:
    WF216(); // WF216
    break;
  case 60:
    Push(Read16(cc_WF116)); // WF116
    break;
  default:
    Push(Read16(cc_INVIS_dash_I)); // INVIS-I
    break;

  }
}

// ================================================
// 0xf28c: WORD 'WF28E' codep=0x224c parp=0xf28e params=0 returns=1
// ================================================

void WF28E() // WF28E
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    Push(0x0031);
    return;
  }
  Push(0x0061);
}


// ================================================
// 0xf2a4: WORD 'RUIN-ID-CASE' codep=0x4b3b parp=0xf2b5
// ================================================

void RUIN_dash_ID_dash_CASE() // RUIN-ID-CASE
{
  switch(Pop()) // RUIN-ID-CASE
  {
  case 2:
    Push(Read16(cc_WF136)); // WF136
    break;
  case 4:
    Push(Read16(cc_WF136)); // WF136
    break;
  case 5:
    WF28E(); // WF28E
    break;
  case 6:
    Push(Read16(cc_WF15E)); // WF15E
    break;
  default:
    WF245(); // WF245
    break;

  }
}

// ================================================
// 0xf2c9: WORD 'WF2CB' codep=0x224c parp=0xf2cb
// ================================================

void WF2CB() // WF2CB
{
  WF16A(); // WF16A
  LoadData(WF0FC); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push(3);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(cc_WF156)); // WF156
  } else
  {
    Push(Read16(cc_WF15A)); // WF15A
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2e5: WORD 'WF2E7' codep=0x224c parp=0xf2e7
// ================================================

void WF2E7() // WF2E7
{
  LoadData(WF0DD); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xf2ed: WORD 'WF2EF' codep=0x224c parp=0xf2ef params=0 returns=1
// ================================================

void WF2EF() // WF2EF
{
  unsigned short int a;
  GetINST_dash_S(); // @INST-S
  a = Pop(); // >R
  Push(a==6?1:0); // I 6 =
  if (Pop() != 0)
  {
    Push(Read16(cc_WF14E)); // WF14E
  } else
  {
    Push(a==0x0017?1:0); // I 0x0017 =
    if (Pop() != 0)
    {
      Push(Read16(cc_WF146)); // WF146
    } else
    {
      Push(Read16(cc_WF12A)); // WF12A
    }
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf31d: WORD 'WF31F' codep=0x224c parp=0xf31f
// ================================================

void WF31F() // WF31F
{
  GetINST_dash_S(); // @INST-S
  RUIN_dash_ID_dash_CASE(); // RUIN-ID-CASE case
}


// ================================================
// 0xf325: WORD 'PLANET-ID' codep=0x4b3b parp=0xf333
// ================================================

void PLANET_dash_ID() // PLANET-ID
{
  switch(Pop()) // PLANET-ID
  {
  case 41:
    WF31F(); // WF31F
    break;
  case 42:
    Push(Read16(cc_WF13E)); // WF13E
    break;
  case 68:
    WF2E7(); // WF2E7
    break;
  case 20:
    Push(Read16(cc_WF13A)); // WF13A
    break;
  case 26:
    WF2EF(); // WF2EF
    break;
  case 28:
    Push(Read16(cc_WF12E)); // WF12E
    break;
  case 31:
    WF172(); // WF172
    break;
  case 33:
    Push(Read16(cc_WF152)); // WF152
    break;
  case 21:
    WF2CB(); // WF2CB
    break;
  case 27:
    Push(Read16(cc_WF142)); // WF142
    break;
  case 48:
    Push(Read16(cc_WF142)); // WF142
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf363: WORD 'WF365' codep=0x224c parp=0xf365
// ================================================

void WF365() // WF365
{
  GetINST_dash_C(); // @INST-C
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  if (Pop() != 0)
  {
    SPACE_dash_ID(); // SPACE-ID case
    return;
  }
  PLANET_dash_ID(); // PLANET-ID case
}


// ================================================
// 0xf379: WORD 'STAR-IC-CASE' codep=0x4b3b parp=0xf38a
// ================================================

void STAR_dash_IC_dash_CASE() // STAR-IC-CASE
{
  switch(Pop()) // STAR-IC-CASE
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
// 0xf3a6: WORD 'WF3A8' codep=0x224c parp=0xf3a8
// ================================================

void WF3A8() // WF3A8
{
  GetINST_dash_S(); // @INST-S
  STAR_dash_IC_dash_CASE(); // STAR-IC-CASE case
}


// ================================================
// 0xf3ae: WORD 'WF3B0' codep=0x224c parp=0xf3b0
// ================================================

void WF3B0() // WF3B0
{
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    GetColor(RED);
    return;
  }
  GetColor(DK_dash_GREE);
}


// ================================================
// 0xf3c0: WORD 'WF3C2' codep=0x224c parp=0xf3c2 params=0 returns=1
// ================================================

void WF3C2() // WF3C2
{
  Push(Read16(0x65e1+WF0E5.offset)&0xFF); // WF0E5<IFIELD> C@
  if (Pop() != 0)
  {
    Push((Read16(0x65e1+WF0EA.offset)&0xFF)==0?1:0); // WF0EA<IFIELD> C@ 0=
    if (Pop() != 0)
    {
      Push(Read16(cc_DEFAULT)); // DEFAULT
    } else
    {
      Push(4);
    }
    return;
  }
  Push(Read16(cc_DEAD_dash_IC)); // DEAD-IC
}


// ================================================
// 0xf3e4: WORD 'WF3E6' codep=0x224c parp=0xf3e6
// ================================================

void WF3E6() // WF3E6
{
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    GetColor(BROWN);
    return;
  }
  GetColor(RED);
}


// ================================================
// 0xf3f6: WORD 'PLAN-IC-CASE' codep=0x4b3b parp=0xf407
// ================================================

void PLAN_dash_IC_dash_CASE() // PLAN-IC-CASE
{
  switch(Pop()) // PLAN-IC-CASE
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
    WF3E6(); // WF3E6
    break;
  default:
    GetColor(BROWN);
    break;

  }
}

// ================================================
// 0xf41f: WORD 'WF421' codep=0x224c parp=0xf421
// ================================================

void WF421() // WF421
{
  LoadData(WF0EF); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  PLAN_dash_IC_dash_CASE(); // PLAN-IC-CASE case
}


// ================================================
// 0xf429: WORD 'WF42B' codep=0x224c parp=0xf42b params=0 returns=1
// ================================================

void WF42B() // WF42B
{
  GetINST_dash_S(); // @INST-S
  if (Pop() != 0)
  {
    Push(3);
    return;
  }
  Push(Read16(cc_DEFAULT)); // DEFAULT
}


// ================================================
// 0xf43b: WORD 'BOX-IC' codep=0x4b3b parp=0xf446
// ================================================

void BOX_dash_IC() // BOX-IC
{
  switch(Pop()) // BOX-IC
  {
  case 24:
    WF3A8(); // WF3A8
    break;
  case 32:
    WF421(); // WF421
    break;
  default:
    Push(Read16(cc_DEFAULT)); // DEFAULT
    break;

  }
}

// ================================================
// 0xf452: WORD 'WF454' codep=0x224c parp=0xf454
// ================================================

void WF454() // WF454
{
  IOPEN(); // IOPEN
  GetINST_dash_C(); // @INST-C
  BOX_dash_IC(); // BOX-IC case
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf45e: WORD 'WF460' codep=0x224c parp=0xf460 params=0 returns=1
// ================================================

void WF460() // WF460
{
  Push(Read16(0x65e1+WF104.offset)&0xFF); // WF104<IFIELD> C@
  if (Pop() != 0)
  {
    Push(Read16(pp_FSTUN)); // FSTUN @
    if (Pop() != 0)
    {
      Push(4);
    } else
    {
      Push(Read16(cc_DEFAULT)); // DEFAULT
    }
    return;
  }
  Push(Read16(cc_DEAD_dash_IC)); // DEAD-IC
}


// ================================================
// 0xf480: WORD '#IC-CASES' codep=0x4b3b parp=0xf48e
// ================================================

void _n_IC_dash_CASES() // #IC-CASES
{
  switch(Pop()) // #IC-CASES
  {
  case 11:
    WF454(); // WF454
    break;
  case 23:
    WF3A8(); // WF3A8
    break;
  case 32:
    WF421(); // WF421
    break;
  case 24:
    WF3A8(); // WF3A8
    break;
  case 68:
    WF3C2(); // WF3C2
    break;
  case 45:
    WF42B(); // WF42B
    break;
  case 46:
    WF3B0(); // WF3B0
    break;
  case 21:
    WF460(); // WF460
    break;
  default:
    Push(Read16(cc_DEFAULT)); // DEFAULT
    break;

  }
}

// ================================================
// 0xf4b2: WORD 'WF4B4' codep=0x224c parp=0xf4b4
// ================================================

void WF4B4() // WF4B4
{
  GetINST_dash_C(); // @INST-C
  _n_IC_dash_CASES(); // #IC-CASES case
}


// ================================================
// 0xf4ba: WORD 'WF4BC' codep=0x224c parp=0xf4bc params=0 returns=1
// ================================================

void WF4BC() // WF4BC
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0017?1:0); //  0x0017 =
  if (Pop() != 0)
  {
    Push(Read16(pp_PAST) | (Read16(0x65e1+WF109.offset)&0xFF) & 1); // PAST @ WF109<IFIELD> C@ 1 AND OR
    return;
  }
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x002e?1:0); //  0x002e =
  if (Pop() != 0)
  {
    Push(!Read16(pp_PAST) | Read16(0x65e1+WF0C6.offset)&0xFF); // PAST @ NOT WF0C6<IFIELD> C@ OR
    return;
  }
  Push(1);
}


// ================================================
// 0xf4fa: WORD 'ICON-PARM' codep=0x224c parp=0xf508
// ================================================
// entry

void ICON_dash_PARM() // ICON-PARM
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  WF365(); // WF365
  WF4B4(); // WF4B4
  CI(); // CI
}


// ================================================
// 0xf518: WORD 'WF51A' codep=0x224c parp=0xf51a params=0 returns=0
// ================================================

void WF51A() // WF51A
{
  WF4BC(); // WF4BC
  if (Pop() == 0) return;
  ICON_dash_PARM(); // ICON-PARM
  _plus_ICON_2(); // +ICON_2
}


// ================================================
// 0xf526: WORD '+ICONBOX' codep=0x224c parp=0xf533
// ================================================
// entry

void _plus_ICONBOX() // +ICONBOX
{
  Push(0xf51a); // 'WF51A'
  ALL(); // ALL
}

// 0xf53b: db 0x56 0x49 0x43 0x4f 0x4e 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x46 0x49 0x58 0x20 0x5c 0x00 'VICONP__________________________FIX \ '

