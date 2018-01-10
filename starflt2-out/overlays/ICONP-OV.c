// ====== OVERLAY 'ICONP-OV' ======
// store offset = 0xf0b0
// overlay size   = 0x04b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf0cb  codep:0x7420 parp:0xf0cb size:0x0003 C-string:'UNK_0xf0cb'
//      UNK_0xf0d0  codep:0x7394 parp:0xf0d0 size:0x0006 C-string:'UNK_0xf0d0'
//      UNK_0xf0d8  codep:0x7420 parp:0xf0d8 size:0x0003 C-string:'UNK_0xf0d8'
//      UNK_0xf0dd  codep:0x7394 parp:0xf0dd size:0x0006 C-string:'UNK_0xf0dd'
//      UNK_0xf0e5  codep:0x7420 parp:0xf0e5 size:0x0003 C-string:'UNK_0xf0e5'
//      UNK_0xf0ea  codep:0x7420 parp:0xf0ea size:0x0003 C-string:'UNK_0xf0ea'
//      UNK_0xf0ef  codep:0x7394 parp:0xf0ef size:0x000b C-string:'UNK_0xf0ef'
//      UNK_0xf0fc  codep:0x7394 parp:0xf0fc size:0x0006 C-string:'UNK_0xf0fc'
//      UNK_0xf104  codep:0x7420 parp:0xf104 size:0x0010 C-string:'UNK_0xf104'
//      UNK_0xf116  codep:0x2214 parp:0xf116 size:0x0002 C-string:'UNK_0xf116'
//      UNK_0xf11a  codep:0x2214 parp:0xf11a size:0x0002 C-string:'UNK_0xf11a'
//      UNK_0xf11e  codep:0x2214 parp:0xf11e size:0x0002 C-string:'UNK_0xf11e'
//      UNK_0xf122  codep:0x2214 parp:0xf122 size:0x0002 C-string:'UNK_0xf122'
//      UNK_0xf126  codep:0x2214 parp:0xf126 size:0x0002 C-string:'UNK_0xf126'
//      UNK_0xf12a  codep:0x2214 parp:0xf12a size:0x0002 C-string:'UNK_0xf12a'
//      UNK_0xf12e  codep:0x2214 parp:0xf12e size:0x0002 C-string:'UNK_0xf12e'
//      UNK_0xf132  codep:0x2214 parp:0xf132 size:0x0002 C-string:'UNK_0xf132'
//      UNK_0xf136  codep:0x2214 parp:0xf136 size:0x0002 C-string:'UNK_0xf136'
//      UNK_0xf13a  codep:0x2214 parp:0xf13a size:0x0002 C-string:'UNK_0xf13a'
//      UNK_0xf13e  codep:0x2214 parp:0xf13e size:0x0002 C-string:'UNK_0xf13e'
//      UNK_0xf142  codep:0x2214 parp:0xf142 size:0x0002 C-string:'UNK_0xf142'
//      UNK_0xf146  codep:0x2214 parp:0xf146 size:0x0002 C-string:'UNK_0xf146'
//      UNK_0xf14a  codep:0x2214 parp:0xf14a size:0x0002 C-string:'UNK_0xf14a'
//      UNK_0xf14e  codep:0x2214 parp:0xf14e size:0x0002 C-string:'UNK_0xf14e'
//      UNK_0xf152  codep:0x2214 parp:0xf152 size:0x0002 C-string:'UNK_0xf152'
//      UNK_0xf156  codep:0x2214 parp:0xf156 size:0x0002 C-string:'UNK_0xf156'
//      UNK_0xf15a  codep:0x2214 parp:0xf15a size:0x0002 C-string:'UNK_0xf15a'
//      UNK_0xf15e  codep:0x2214 parp:0xf15e size:0x0002 C-string:'UNK_0xf15e'
//      UNK_0xf162  codep:0x2214 parp:0xf162 size:0x0002 C-string:'UNK_0xf162'
//      UNK_0xf166  codep:0x2214 parp:0xf166 size:0x0002 C-string:'UNK_0xf166'
//      UNK_0xf16a  codep:0x224c parp:0xf16a size:0x0006 C-string:'UNK_0xf16a'
//      UNK_0xf172  codep:0x224c parp:0xf172 size:0x0010 C-string:'UNK_0xf172'
//      UNK_0xf184  codep:0x224c parp:0xf184 size:0x000c C-string:'UNK_0xf184'
//      UNK_0xf192  codep:0x224c parp:0xf192 size:0x003c C-string:'UNK_0xf192'
//    STAR-ID-CASE  codep:0x4b3b parp:0xf1df size:0x0008 C-string:'STAR_dash_ID_dash_CASE'
//      UNK_0xf1e9  codep:0x224c parp:0xf1e9 size:0x0008 C-string:'UNK_0xf1e9'
//    PLANET-ID-CA  codep:0x4b3b parp:0xf202 size:0x0008 C-string:'PLANET_dash_ID_dash_CA'
//      UNK_0xf20c  codep:0x224c parp:0xf20c size:0x0008 C-string:'UNK_0xf20c'
//      UNK_0xf216  codep:0x224c parp:0xf216 size:0x000a C-string:'UNK_0xf216'
//          BOX-ID  codep:0x4b3b parp:0xf22b size:0x000c C-string:'BOX_dash_ID'
//      UNK_0xf239  codep:0x224c parp:0xf239 size:0x000a C-string:'UNK_0xf239'
//      UNK_0xf245  codep:0x224c parp:0xf245 size:0x0012 C-string:'UNK_0xf245'
//        SPACE-ID  codep:0x4b3b parp:0xf264 size:0x0028 C-string:'SPACE_dash_ID'
//      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x0016 C-string:'UNK_0xf28e'
//    RUIN-ID-CASE  codep:0x4b3b parp:0xf2b5 size:0x0014 C-string:'RUIN_dash_ID_dash_CASE'
//      UNK_0xf2cb  codep:0x224c parp:0xf2cb size:0x001a C-string:'UNK_0xf2cb'
//      UNK_0xf2e7  codep:0x224c parp:0xf2e7 size:0x0006 C-string:'UNK_0xf2e7'
//      UNK_0xf2ef  codep:0x224c parp:0xf2ef size:0x002e C-string:'UNK_0xf2ef'
//      UNK_0xf31f  codep:0x224c parp:0xf31f size:0x0006 C-string:'UNK_0xf31f'
//       PLANET-ID  codep:0x4b3b parp:0xf333 size:0x0030 C-string:'PLANET_dash_ID'
//      UNK_0xf365  codep:0x224c parp:0xf365 size:0x0014 C-string:'UNK_0xf365'
//    STAR-IC-CASE  codep:0x4b3b parp:0xf38a size:0x001c C-string:'STAR_dash_IC_dash_CASE'
//      UNK_0xf3a8  codep:0x224c parp:0xf3a8 size:0x0006 C-string:'UNK_0xf3a8'
//      UNK_0xf3b0  codep:0x224c parp:0xf3b0 size:0x0010 C-string:'UNK_0xf3b0'
//      UNK_0xf3c2  codep:0x224c parp:0xf3c2 size:0x0022 C-string:'UNK_0xf3c2'
//      UNK_0xf3e6  codep:0x224c parp:0xf3e6 size:0x0010 C-string:'UNK_0xf3e6'
//    PLAN-IC-CASE  codep:0x4b3b parp:0xf407 size:0x0018 C-string:'PLAN_dash_IC_dash_CASE'
//      UNK_0xf421  codep:0x224c parp:0xf421 size:0x0008 C-string:'UNK_0xf421'
//      UNK_0xf42b  codep:0x224c parp:0xf42b size:0x0010 C-string:'UNK_0xf42b'
//          BOX-IC  codep:0x4b3b parp:0xf446 size:0x000c C-string:'BOX_dash_IC'
//      UNK_0xf454  codep:0x224c parp:0xf454 size:0x000a C-string:'UNK_0xf454'
//      UNK_0xf460  codep:0x224c parp:0xf460 size:0x0020 C-string:'UNK_0xf460'
//       #IC-CASES  codep:0x4b3b parp:0xf48e size:0x0024 C-string:'_n_IC_dash_CASES'
//      UNK_0xf4b4  codep:0x224c parp:0xf4b4 size:0x0046 C-string:'UNK_0xf4b4'
//       ICON-PARM  codep:0x224c parp:0xf508 size:0x001e C-string:'ICON_dash_PARM'
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
void _st_(); // <
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================

const unsigned short int cc_UNK_0xf116 = 0xf116; // UNK_0xf116
const unsigned short int cc_UNK_0xf11a = 0xf11a; // UNK_0xf11a
const unsigned short int cc_UNK_0xf11e = 0xf11e; // UNK_0xf11e
const unsigned short int cc_UNK_0xf122 = 0xf122; // UNK_0xf122
const unsigned short int cc_UNK_0xf126 = 0xf126; // UNK_0xf126
const unsigned short int cc_UNK_0xf12a = 0xf12a; // UNK_0xf12a
const unsigned short int cc_UNK_0xf12e = 0xf12e; // UNK_0xf12e
const unsigned short int cc_UNK_0xf132 = 0xf132; // UNK_0xf132
const unsigned short int cc_UNK_0xf136 = 0xf136; // UNK_0xf136
const unsigned short int cc_UNK_0xf13a = 0xf13a; // UNK_0xf13a
const unsigned short int cc_UNK_0xf13e = 0xf13e; // UNK_0xf13e
const unsigned short int cc_UNK_0xf142 = 0xf142; // UNK_0xf142
const unsigned short int cc_UNK_0xf146 = 0xf146; // UNK_0xf146
const unsigned short int cc_UNK_0xf14a = 0xf14a; // UNK_0xf14a
const unsigned short int cc_UNK_0xf14e = 0xf14e; // UNK_0xf14e
const unsigned short int cc_UNK_0xf152 = 0xf152; // UNK_0xf152
const unsigned short int cc_UNK_0xf156 = 0xf156; // UNK_0xf156
const unsigned short int cc_UNK_0xf15a = 0xf15a; // UNK_0xf15a
const unsigned short int cc_UNK_0xf15e = 0xf15e; // UNK_0xf15e
const unsigned short int cc_UNK_0xf162 = 0xf162; // UNK_0xf162
const unsigned short int cc_UNK_0xf166 = 0xf166; // UNK_0xf166


// 0xf0c2: db 0x49 0x00 0x20 0x74 0x2e 0x11 0x01 'I  t.  '

// ================================================
// 0xf0c9: WORD 'UNK_0xf0cb' codep=0x7420 parp=0xf0cb
// ================================================
IFieldType UNK_0xf0cb = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xf0ce: WORD 'UNK_0xf0d0' codep=0x7394 parp=0xf0d0
// ================================================
LoadDataType UNK_0xf0d0 = {VESSELIDX, 0x1c, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xf0d6: WORD 'UNK_0xf0d8' codep=0x7420 parp=0xf0d8
// ================================================
IFieldType UNK_0xf0d8 = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xf0db: WORD 'UNK_0xf0dd' codep=0x7394 parp=0xf0dd
// ================================================
LoadDataType UNK_0xf0dd = {CREATUREIDX, 0x1a, 0x01, 0x22, 0x6f07};

// ================================================
// 0xf0e3: WORD 'UNK_0xf0e5' codep=0x7420 parp=0xf0e5
// ================================================
IFieldType UNK_0xf0e5 = {CREATUREIDX, 0x19, 0x01};

// ================================================
// 0xf0e8: WORD 'UNK_0xf0ea' codep=0x7420 parp=0xf0ea
// ================================================
IFieldType UNK_0xf0ea = {CREATUREIDX, 0x18, 0x01};

// ================================================
// 0xf0ed: WORD 'UNK_0xf0ef' codep=0x7394 parp=0xf0ef
// ================================================
LoadDataType UNK_0xf0ef = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};
// 0xf0f5: db 0x20 0x74 0x3d 0x1b 0x01 ' t=  '

// ================================================
// 0xf0fa: WORD 'UNK_0xf0fc' codep=0x7394 parp=0xf0fc
// ================================================
LoadDataType UNK_0xf0fc = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xf102: WORD 'UNK_0xf104' codep=0x7420 parp=0xf104
// ================================================
IFieldType UNK_0xf104 = {TRADERSIDX, 0x0c, 0x01};
// 0xf107: db 0x20 0x74 0x17 0x0b 0x01 0x94 0x73 0x19 0x04 0x01 0x24 0x5d 0x6b ' t    s   $]k'

// ================================================
// 0xf114: WORD 'UNK_0xf116' codep=0x2214 parp=0xf116
// ================================================
// 0xf116: dw 0x0032

// ================================================
// 0xf118: WORD 'UNK_0xf11a' codep=0x2214 parp=0xf11a
// ================================================
// 0xf11a: dw 0x0034

// ================================================
// 0xf11c: WORD 'UNK_0xf11e' codep=0x2214 parp=0xf11e
// ================================================
// 0xf11e: dw 0x0034

// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x2214 parp=0xf122
// ================================================
// 0xf122: dw 0x0033

// ================================================
// 0xf124: WORD 'UNK_0xf126' codep=0x2214 parp=0xf126
// ================================================
// 0xf126: dw 0x0033

// ================================================
// 0xf128: WORD 'UNK_0xf12a' codep=0x2214 parp=0xf12a
// ================================================
// 0xf12a: dw 0x0015

// ================================================
// 0xf12c: WORD 'UNK_0xf12e' codep=0x2214 parp=0xf12e
// ================================================
// 0xf12e: dw 0x0016

// ================================================
// 0xf130: WORD 'UNK_0xf132' codep=0x2214 parp=0xf132
// ================================================
// 0xf132: dw 0x0017

// ================================================
// 0xf134: WORD 'UNK_0xf136' codep=0x2214 parp=0xf136
// ================================================
// 0xf136: dw 0x0018

// ================================================
// 0xf138: WORD 'UNK_0xf13a' codep=0x2214 parp=0xf13a
// ================================================
// 0xf13a: dw 0x0019

// ================================================
// 0xf13c: WORD 'UNK_0xf13e' codep=0x2214 parp=0xf13e
// ================================================
// 0xf13e: dw 0x001a

// ================================================
// 0xf140: WORD 'UNK_0xf142' codep=0x2214 parp=0xf142
// ================================================
// 0xf142: dw 0x00fe

// ================================================
// 0xf144: WORD 'UNK_0xf146' codep=0x2214 parp=0xf146
// ================================================
// 0xf146: dw 0x0014

// ================================================
// 0xf148: WORD 'UNK_0xf14a' codep=0x2214 parp=0xf14a
// ================================================
// 0xf14a: dw 0x002c

// ================================================
// 0xf14c: WORD 'UNK_0xf14e' codep=0x2214 parp=0xf14e
// ================================================
// 0xf14e: dw 0x002d

// ================================================
// 0xf150: WORD 'UNK_0xf152' codep=0x2214 parp=0xf152
// ================================================
// 0xf152: dw 0x002e

// ================================================
// 0xf154: WORD 'UNK_0xf156' codep=0x2214 parp=0xf156
// ================================================
// 0xf156: dw 0x002f

// ================================================
// 0xf158: WORD 'UNK_0xf15a' codep=0x2214 parp=0xf15a
// ================================================
// 0xf15a: dw 0x0030

// ================================================
// 0xf15c: WORD 'UNK_0xf15e' codep=0x2214 parp=0xf15e
// ================================================
// 0xf15e: dw 0x005f

// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x2214 parp=0xf162
// ================================================
// 0xf162: dw 0x0060

// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x2214 parp=0xf166
// ================================================
// 0xf166: dw 0x0062

// ================================================
// 0xf168: WORD 'UNK_0xf16a' codep=0x224c parp=0xf16a params=0 returns=0
// ================================================

void UNK_0xf16a() // UNK_0xf16a
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xf170: WORD 'UNK_0xf172' codep=0x224c parp=0xf172
// ================================================

void UNK_0xf172() // UNK_0xf172
{
  UNK_0xf16a(); // UNK_0xf16a
  LoadData(UNK_0xf0fc); // from 'TRADERS'
  Push(Read8(Pop())&0xFF); // C@
  Push(0x005a);
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf182: WORD 'UNK_0xf184' codep=0x224c parp=0xf184 params=0 returns=1
// ================================================

void UNK_0xf184() // UNK_0xf184
{
  Push((Read16(0x65e1+UNK_0xf0cb.offset)&0xFF) + 0x001b); // UNK_0xf0cb<IFIELD> C@ 0x001b +
}


// ================================================
// 0xf190: WORD 'UNK_0xf192' codep=0x224c parp=0xf192
// ================================================

void UNK_0xf192() // UNK_0xf192
{
  LoadData(UNK_0xf0d0); // from 'VESSEL'
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    Push(0x0014);
    _eq_SPECIE(); // =SPECIE
    if (Pop() != 0)
    {
      Push(Read16(cc_UNK_0xf162)); // UNK_0xf162
    } else
    {
      Push(0x001d);
      _eq_SPECIE(); // =SPECIE
      if (Pop() != 0)
      {
        Push(Read16(cc_UNK_0xf166)); // UNK_0xf166
      } else
      {
        Push((Read16(0x65e1+UNK_0xf0d8.offset)&0xFF) + 0x0023); // UNK_0xf0d8<IFIELD> C@ 0x0023 +
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
    Push(Read16(cc_UNK_0xf11e)); // UNK_0xf11e
    break;
  default:
    Push(Read16(cc_UNK_0xf11a)); // UNK_0xf11a
    break;

  }
}

// ================================================
// 0xf1e7: WORD 'UNK_0xf1e9' codep=0x224c parp=0xf1e9
// ================================================

void UNK_0xf1e9() // UNK_0xf1e9
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
    Push(Read16(cc_UNK_0xf126)); // UNK_0xf126
    break;
  default:
    Push(Read16(cc_UNK_0xf122)); // UNK_0xf122
    break;

  }
}

// ================================================
// 0xf20a: WORD 'UNK_0xf20c' codep=0x224c parp=0xf20c
// ================================================

void UNK_0xf20c() // UNK_0xf20c
{
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  PLANET_dash_ID_dash_CA(); // PLANET-ID-CA case
}


// ================================================
// 0xf214: WORD 'UNK_0xf216' codep=0x224c parp=0xf216 params=0 returns=1
// ================================================

void UNK_0xf216() // UNK_0xf216
{
  GetINST_dash_S(); // @INST-S
  Push(0x0032);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf220: WORD 'BOX-ID' codep=0x4b3b parp=0xf22b
// ================================================

void BOX_dash_ID() // BOX-ID
{
  switch(Pop()) // BOX-ID
  {
  case 24:
    UNK_0xf1e9(); // UNK_0xf1e9
    break;
  case 32:
    UNK_0xf20c(); // UNK_0xf20c
    break;
  default:
    Push(Read16(cc_INVIS_dash_I)); // INVIS-I
    break;

  }
}

// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  IOPEN(); // IOPEN
  GetINST_dash_C(); // @INST-C
  BOX_dash_ID(); // BOX-ID case
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf243: WORD 'UNK_0xf245' codep=0x224c parp=0xf245 params=0 returns=1
// ================================================

void UNK_0xf245() // UNK_0xf245
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    Push(Read16(cc_UNK_0xf14a)); // UNK_0xf14a
    return;
  }
  Push(Read16(cc_UNK_0xf132)); // UNK_0xf132
}


// ================================================
// 0xf257: WORD 'SPACE-ID' codep=0x4b3b parp=0xf264
// ================================================

void SPACE_dash_ID() // SPACE-ID
{
  switch(Pop()) // SPACE-ID
  {
  case 11:
    UNK_0xf239(); // UNK_0xf239
    break;
  case 20:
    UNK_0xf184(); // UNK_0xf184
    break;
  case 23:
    Push(Read16(cc_SYS_dash_ICO)); // SYS-ICO
    break;
  case 24:
    UNK_0xf1e9(); // UNK_0xf1e9
    break;
  case 25:
    UNK_0xf192(); // UNK_0xf192
    break;
  case 32:
    UNK_0xf20c(); // UNK_0xf20c
    break;
  case 45:
    Push(Read16(cc_FLUX_dash_IC)); // FLUX-IC
    break;
  case 46:
    UNK_0xf216(); // UNK_0xf216
    break;
  case 60:
    Push(Read16(cc_UNK_0xf116)); // UNK_0xf116
    break;
  default:
    Push(Read16(cc_INVIS_dash_I)); // INVIS-I
    break;

  }
}

// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e params=0 returns=1
// ================================================

void UNK_0xf28e() // UNK_0xf28e
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
    Push(Read16(cc_UNK_0xf136)); // UNK_0xf136
    break;
  case 4:
    Push(Read16(cc_UNK_0xf136)); // UNK_0xf136
    break;
  case 5:
    UNK_0xf28e(); // UNK_0xf28e
    break;
  case 6:
    Push(Read16(cc_UNK_0xf15e)); // UNK_0xf15e
    break;
  default:
    UNK_0xf245(); // UNK_0xf245
    break;

  }
}

// ================================================
// 0xf2c9: WORD 'UNK_0xf2cb' codep=0x224c parp=0xf2cb
// ================================================

void UNK_0xf2cb() // UNK_0xf2cb
{
  UNK_0xf16a(); // UNK_0xf16a
  LoadData(UNK_0xf0fc); // from 'TRADERS'
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(cc_UNK_0xf156)); // UNK_0xf156
  } else
  {
    Push(Read16(cc_UNK_0xf15a)); // UNK_0xf15a
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2e5: WORD 'UNK_0xf2e7' codep=0x224c parp=0xf2e7
// ================================================

void UNK_0xf2e7() // UNK_0xf2e7
{
  LoadData(UNK_0xf0dd); // from 'CREATURE'
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xf2ed: WORD 'UNK_0xf2ef' codep=0x224c parp=0xf2ef params=0 returns=1
// ================================================

void UNK_0xf2ef() // UNK_0xf2ef
{
  unsigned short int a;
  GetINST_dash_S(); // @INST-S
  a = Pop(); // >R
  Push(a); // I
  Push(6);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(Read16(cc_UNK_0xf14e)); // UNK_0xf14e
  } else
  {
    Push(a); // I
    Push(0x0017);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(Read16(cc_UNK_0xf146)); // UNK_0xf146
    } else
    {
      Push(Read16(cc_UNK_0xf12a)); // UNK_0xf12a
    }
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf31d: WORD 'UNK_0xf31f' codep=0x224c parp=0xf31f
// ================================================

void UNK_0xf31f() // UNK_0xf31f
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
    UNK_0xf31f(); // UNK_0xf31f
    break;
  case 42:
    Push(Read16(cc_UNK_0xf13e)); // UNK_0xf13e
    break;
  case 68:
    UNK_0xf2e7(); // UNK_0xf2e7
    break;
  case 20:
    Push(Read16(cc_UNK_0xf13a)); // UNK_0xf13a
    break;
  case 26:
    UNK_0xf2ef(); // UNK_0xf2ef
    break;
  case 28:
    Push(Read16(cc_UNK_0xf12e)); // UNK_0xf12e
    break;
  case 31:
    UNK_0xf172(); // UNK_0xf172
    break;
  case 33:
    Push(Read16(cc_UNK_0xf152)); // UNK_0xf152
    break;
  case 21:
    UNK_0xf2cb(); // UNK_0xf2cb
    break;
  case 27:
    Push(Read16(cc_UNK_0xf142)); // UNK_0xf142
    break;
  case 48:
    Push(Read16(cc_UNK_0xf142)); // UNK_0xf142
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf363: WORD 'UNK_0xf365' codep=0x224c parp=0xf365
// ================================================

void UNK_0xf365() // UNK_0xf365
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
// 0xf3a6: WORD 'UNK_0xf3a8' codep=0x224c parp=0xf3a8
// ================================================

void UNK_0xf3a8() // UNK_0xf3a8
{
  GetINST_dash_S(); // @INST-S
  STAR_dash_IC_dash_CASE(); // STAR-IC-CASE case
}


// ================================================
// 0xf3ae: WORD 'UNK_0xf3b0' codep=0x224c parp=0xf3b0
// ================================================

void UNK_0xf3b0() // UNK_0xf3b0
{
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    SetColor(RED);
    return;
  }
  SetColor(DK_dash_GREE);
}


// ================================================
// 0xf3c0: WORD 'UNK_0xf3c2' codep=0x224c parp=0xf3c2 params=0 returns=1
// ================================================

void UNK_0xf3c2() // UNK_0xf3c2
{
  Push(Read16(0x65e1+UNK_0xf0e5.offset)&0xFF); // UNK_0xf0e5<IFIELD> C@
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+UNK_0xf0ea.offset)&0xFF); // UNK_0xf0ea<IFIELD> C@
    if (Pop() == 0) Push(1); else Push(0); // 0=
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
// 0xf3e4: WORD 'UNK_0xf3e6' codep=0x224c parp=0xf3e6
// ================================================

void UNK_0xf3e6() // UNK_0xf3e6
{
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    SetColor(BROWN);
    return;
  }
  SetColor(RED);
}


// ================================================
// 0xf3f6: WORD 'PLAN-IC-CASE' codep=0x4b3b parp=0xf407
// ================================================

void PLAN_dash_IC_dash_CASE() // PLAN-IC-CASE
{
  switch(Pop()) // PLAN-IC-CASE
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
    UNK_0xf3e6(); // UNK_0xf3e6
    break;
  default:
    SetColor(BROWN);
    break;

  }
}

// ================================================
// 0xf41f: WORD 'UNK_0xf421' codep=0x224c parp=0xf421
// ================================================

void UNK_0xf421() // UNK_0xf421
{
  LoadData(UNK_0xf0ef); // from 'PLANET'
  Push(Read8(Pop())&0xFF); // C@
  PLAN_dash_IC_dash_CASE(); // PLAN-IC-CASE case
}


// ================================================
// 0xf429: WORD 'UNK_0xf42b' codep=0x224c parp=0xf42b params=0 returns=1
// ================================================

void UNK_0xf42b() // UNK_0xf42b
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
    UNK_0xf3a8(); // UNK_0xf3a8
    break;
  case 32:
    UNK_0xf421(); // UNK_0xf421
    break;
  default:
    Push(Read16(cc_DEFAULT)); // DEFAULT
    break;

  }
}

// ================================================
// 0xf452: WORD 'UNK_0xf454' codep=0x224c parp=0xf454
// ================================================

void UNK_0xf454() // UNK_0xf454
{
  IOPEN(); // IOPEN
  GetINST_dash_C(); // @INST-C
  BOX_dash_IC(); // BOX-IC case
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf45e: WORD 'UNK_0xf460' codep=0x224c parp=0xf460 params=0 returns=1
// ================================================

void UNK_0xf460() // UNK_0xf460
{
  Push(Read16(0x65e1+UNK_0xf104.offset)&0xFF); // UNK_0xf104<IFIELD> C@
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
    UNK_0xf454(); // UNK_0xf454
    break;
  case 23:
    UNK_0xf3a8(); // UNK_0xf3a8
    break;
  case 32:
    UNK_0xf421(); // UNK_0xf421
    break;
  case 24:
    UNK_0xf3a8(); // UNK_0xf3a8
    break;
  case 68:
    UNK_0xf3c2(); // UNK_0xf3c2
    break;
  case 45:
    UNK_0xf42b(); // UNK_0xf42b
    break;
  case 46:
    UNK_0xf3b0(); // UNK_0xf3b0
    break;
  case 21:
    UNK_0xf460(); // UNK_0xf460
    break;
  default:
    Push(Read16(cc_DEFAULT)); // DEFAULT
    break;

  }
}

// ================================================
// 0xf4b2: WORD 'UNK_0xf4b4' codep=0x224c parp=0xf4b4
// ================================================

void UNK_0xf4b4() // UNK_0xf4b4
{
  GetINST_dash_C(); // @INST-C
  _n_IC_dash_CASES(); // #IC-CASES case
}

// 0xf4ba: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x17 0x00 0x5f 0x12 0xfa 0x15 0x14 0x00 0x32 0x62 0xae 0x0b 0x07 0xf1 0x92 0x0c 0x2e 0x0f 0xf5 0x12 0x3e 0x13 0x60 0x16 0x20 0x00 0x22 0x75 0x5d 0x17 0x2e 0x00 0x5f 0x12 0xfa 0x15 0x12 0x00 0x32 0x62 0xae 0x0b 0x07 0x13 0xc4 0xf0 0x92 0x0c 0x3e 0x13 0x60 0x16 0x04 0x00 0x2e 0x0f 0x90 0x16 'L""u]   _     2b      .   > `   "u] . _     2b        > `   .   '

// ================================================
// 0xf4fa: WORD 'ICON-PARM' codep=0x224c parp=0xf508
// ================================================
// entry

void ICON_dash_PARM() // ICON-PARM
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  UNK_0xf365(); // UNK_0xf365
  UNK_0xf4b4(); // UNK_0xf4b4
  CI(); // CI
}

// 0xf518: db 0x4c 0x22 0xba 0xf4 0xfa 0x15 0x06 0x00 0x06 0xf5 0x50 0x99 0x90 0x16 'L"        P   '

// ================================================
// 0xf526: WORD '+ICONBOX' codep=0x224c parp=0xf533 params=3 returns=0
// ================================================
// entry

void _plus_ICONBOX() // +ICONBOX
{
  Push(0xf51a);
  ALL(); // ALL
}

// 0xf53b: db 0x56 0x49 0x43 0x4f 0x4e 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x46 0x49 0x58 0x20 0x5c 0x00 'VICONP__________________________FIX \ '

