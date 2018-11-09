// ====== OVERLAY 'HP-OV' ======
// store offset = 0xe280
// overlay size   = 0x12e0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//          planet  codep:0x2214 wordp:0xe296 size:0x0002 C-string:'planet'
//            star  codep:0x2214 wordp:0xe29a size:0x0002 C-string:'star'
//         regions  codep:0x2214 wordp:0xe29e size:0x0002 C-string:'regions'
//        creature  codep:0x2214 wordp:0xe2a2 size:0x0002 C-string:'creature'
//        crowding  codep:0x744d wordp:0xe2a6 size:0x0003 C-string:'crowding'
//          difind  codep:0x224c wordp:0xe2ab size:0x0006 C-string:'difind'
//            rput  codep:0x224c wordp:0xe2b3 size:0x000a C-string:'rput'
//            rget  codep:0x224c wordp:0xe2bf size:0x000a C-string:'rget'
//            1.5,  codep:0x224c wordp:0xe2cb size:0x000a C-string:'_1_dot_5_co_'
//     iaddr-array  codep:0x224c wordp:0xe2d7 size:0x000f C-string:'iaddr_dash_array'
//          ?COLOR  codep:0xe2db wordp:0xe2f1 size:0x0051 C-string:'IsCOLOR'
//              ?s  codep:0x224c wordp:0xe344 size:0x002e C-string:'Iss'
//           WE374  codep:0x224c wordp:0xe374 size:0x001a C-string:'WE374'
//           WE390  codep:0x224c wordp:0xe390 size:0x001a C-string:'WE390'
//           WE3AC  codep:0x224c wordp:0xe3ac size:0x000a C-string:'WE3AC'
//           WE3B8  codep:0x224c wordp:0xe3b8 size:0x0008 C-string:'WE3B8'
//           WE3C2  codep:0x224c wordp:0xe3c2 size:0x000a C-string:'WE3C2'
//           WE3CE  codep:0x224c wordp:0xe3ce size:0x0006 C-string:'WE3CE'
//           WE3D6  codep:0x224c wordp:0xe3d6 size:0x0014 C-string:'WE3D6'
//           WE3EC  codep:0x224c wordp:0xe3ec size:0x0006 C-string:'WE3EC'
//           WE3F4  codep:0x224c wordp:0xe3f4 size:0x000a C-string:'WE3F4'
//           WE400  codep:0x1d29 wordp:0xe400 size:0x0002 C-string:'WE400'
//           WE404  codep:0x224c wordp:0xe404 size:0x0006 C-string:'WE404'
//           WE40C  codep:0x224c wordp:0xe40c size:0x000a C-string:'WE40C'
//           WE418  codep:0x224c wordp:0xe418 size:0x0015 C-string:'WE418'
//       plan-life  codep:0x73ea wordp:0xe42f size:0x0006 C-string:'plan_dash_life'
//    atmo.density  codep:0x73ea wordp:0xe437 size:0x0006 C-string:'atmo_dot_density'
//       narrowest  codep:0x73ea wordp:0xe43f size:0x0006 C-string:'narrowest'
//        flattest  codep:0x73ea wordp:0xe447 size:0x0006 C-string:'flattest'
//       plan-mass  codep:0x73ea wordp:0xe44f size:0x0006 C-string:'plan_dash_mass'
//            cllo  codep:0x73ea wordp:0xe457 size:0x0006 C-string:'cllo'
//            clhi  codep:0x73ea wordp:0xe45f size:0x0006 C-string:'clhi'
//           shape  codep:0x73ea wordp:0xe467 size:0x0006 C-string:'shape'
//        exterior  codep:0x73ea wordp:0xe46f size:0x0006 C-string:'exterior'
//      size.index  codep:0x73ea wordp:0xe477 size:0x0006 C-string:'size_dot_index'
//           niche  codep:0x73ea wordp:0xe47f size:0x0006 C-string:'niche'
//         reddest  codep:0x73ea wordp:0xe487 size:0x0006 C-string:'reddest'
//          bluest  codep:0x73ea wordp:0xe48f size:0x0006 C-string:'bluest'
//         texture  codep:0x73ea wordp:0xe497 size:0x0006 C-string:'texture'
//        w.append  codep:0x73ea wordp:0xe49f size:0x0006 C-string:'w_dot_append'
//              w#  codep:0x73ea wordp:0xe4a7 size:0x0006 C-string:'w_n_'
//        d.append  codep:0x73ea wordp:0xe4af size:0x0006 C-string:'d_dot_append'
//              d#  codep:0x73ea wordp:0xe4b7 size:0x0006 C-string:'d_n_'
//        a.append  codep:0x73ea wordp:0xe4bf size:0x0006 C-string:'a_dot_append'
//              a#  codep:0x73ea wordp:0xe4c7 size:0x0006 C-string:'a_n_'
//        g.append  codep:0x73ea wordp:0xe4cf size:0x0006 C-string:'g_dot_append'
//              g#  codep:0x73ea wordp:0xe4d7 size:0x0006 C-string:'g_n_'
//      g.mobility  codep:0x73ea wordp:0xe4df size:0x0006 C-string:'g_dot_mobility'
//      a.mobility  codep:0x73ea wordp:0xe4e7 size:0x0006 C-string:'a_dot_mobility'
//            orlo  codep:0x73ea wordp:0xe4ef size:0x0006 C-string:'orlo'
//            orhi  codep:0x73ea wordp:0xe4f7 size:0x0006 C-string:'orhi'
//      spec>color  codep:0x224c wordp:0xe4ff size:0x000c C-string:'spec_gt_color'
//           ?2dup  codep:0x224c wordp:0xe50d size:0x000c C-string:'Is2dup'
//        whichguy  codep:0x224c wordp:0xe51b size:0x0012 C-string:'whichguy'
//            MAPS  codep:0x224c wordp:0xe52f size:0x000c C-string:'MAPS'
//           PROBS  codep:0x224c wordp:0xe53d size:0x0096 C-string:'PROBS'
//          CHANCE  codep:0x224c wordp:0xe5d5 size:0x0026 C-string:'CHANCE'
//          RESULT  codep:0x224c wordp:0xe5fd size:0x000c C-string:'RESULT'
//           (kng)  codep:0x224c wordp:0xe60b size:0x0012 C-string:'_ro_kng_rc_'
//          SHAPES  codep:0xe555 wordp:0xe628 size:0x0036 C-string:'SHAPES'
//         EPIDERM  codep:0xe555 wordp:0xe66a size:0x008c C-string:'EPIDERM'
//          shaper  codep:0x224c wordp:0xe6f8 size:0x0014 C-string:'shaper'
//          outfit  codep:0x224c wordp:0xe70e size:0x0030 C-string:'outfit'
//           pelts  codep:0x224c wordp:0xe740 size:0x0020 C-string:'pelts'
//     class.parms  codep:0x224c wordp:0xe762 size:0x006a C-string:'class_dot_parms'
// ANIMAL.APPENDAGE  codep:0xe555 wordp:0xe7e1 size:0x0084 C-string:'ANIMAL_dot_APPENDAGE'
//      APPEARANCE  codep:0xe555 wordp:0xe874 size:0x02f4 C-string:'APPEARANCE'
//        WEAPONRY  codep:0xe555 wordp:0xeb75 size:0x004e C-string:'WEAPONRY'
//     DECORATIONS  codep:0xe555 wordp:0xebd3 size:0x008e C-string:'DECORATIONS'
//           #LEGS  codep:0xe555 wordp:0xec6b size:0x00e4 C-string:'_n_LEGS'
//            LEGG  codep:0xe555 wordp:0xed58 size:0x0086 C-string:'LEGG'
//          sizing  codep:0x224c wordp:0xede0 size:0x0056 C-string:'sizing'
//      spec>color  codep:0x224c wordp:0xee38 size:0x00cb C-string:'spec_gt_color'
//           WEF05  codep:0x224c wordp:0xef05 size:0x0034 C-string:'WEF05'
//           WEF3B  codep:0x224c wordp:0xef3b size:0x0038 C-string:'WEF3B'
//             dye  codep:0x224c wordp:0xef75 size:0x003e C-string:'dye'
//           WEFB5  codep:0x224c wordp:0xefb5 size:0x001a C-string:'WEFB5'
//         fortify  codep:0x224c wordp:0xefd1 size:0x0042 C-string:'fortify'
//        decorate  codep:0x224c wordp:0xf015 size:0x0014 C-string:'decorate'
//        trimming  codep:0x224c wordp:0xf02b size:0x0050 C-string:'trimming'
//        GROUNDED  codep:0xe420 wordp:0xf088 size:0x000e C-string:'GROUNDED'
//         BOUYANT  codep:0xe420 wordp:0xf0a2 size:0x000c C-string:'BOUYANT'
//           WF0B0  codep:0x1d29 wordp:0xf0b0 size:0x0002 C-string:'WF0B0'
//           WF0B4  codep:0x1d29 wordp:0xf0b4 size:0x0002 C-string:'WF0B4'
//           WF0B8  codep:0x224c wordp:0xf0b8 size:0x000c C-string:'WF0B8'
//           WF0C6  codep:0x224c wordp:0xf0c6 size:0x0054 C-string:'WF0C6'
//           WF11C  codep:0x224c wordp:0xf11c size:0x000c C-string:'WF11C'
//           WF12A  codep:0x224c wordp:0xf12a size:0x000a C-string:'WF12A'
//         elevate  codep:0x224c wordp:0xf136 size:0x00ae C-string:'elevate'
//           WF1E6  codep:0x1d29 wordp:0xf1e6 size:0x0002 C-string:'WF1E6'
//           WF1EA  codep:0x224c wordp:0xf1ea size:0x0024 C-string:'WF1EA'
//          nubile  codep:0x224c wordp:0xf210 size:0x0058 C-string:'nubile'
//           WF26A  codep:0x224c wordp:0xf26a size:0x000c C-string:'WF26A'
//          stroll  codep:0x224c wordp:0xf278 size:0x0058 C-string:'stroll'
//           WF2D2  codep:0x224c wordp:0xf2d2 size:0x00ee C-string:'WF2D2'
//           WF3C2  codep:0x224c wordp:0xf3c2 size:0x001c C-string:'WF3C2'
//           WF3E0  codep:0x224c wordp:0xf3e0 size:0x0022 C-string:'WF3E0'
//           movem  codep:0x224c wordp:0xf404 size:0x002a C-string:'movem'
//         animate  codep:0x224c wordp:0xf430 size:0x0062 C-string:'animate'
//       texturize  codep:0x224c wordp:0xf494 size:0x0010 C-string:'texturize'
//           WF4A6  codep:0x224c wordp:0xf4a6 size:0x0018 C-string:'WF4A6'
//     order.parms  codep:0x224c wordp:0xf4c0 size:0x002c C-string:'order_dot_parms'
//        C+OPARMS  codep:0x224c wordp:0xf4f9 size:0x0000 C-string:'C_plus_OPARMS'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_PEAK; // PEAK
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_PLANTS; // PLANTS
extern const unsigned short int pp_ANIMALS; // ANIMALS
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp__ro_SYSTEM_rc_; // (SYSTEM)
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern IFieldType PHR_dash_CNT; // PHR-CNT
extern IFieldType PHRASE_dash_MEM; // PHRASE-MEM
void _star__slash_(); // */
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void _co_(); // ,
void ALLOT(); // ALLOT
void HERE(); // HERE
void QUIT(); // QUIT
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void RANGE(); // RANGE
void PICK(); // PICK
void ROLL(); // ROLL
void _2OVER(); // 2OVER
void D_eq_(); // D=
void _3_star_(); // 3*
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void OFF(); // OFF
void FILL_1(); // FILL_1
void GetRECORD(); // @RECORD
void GetINST_dash_SPECIES(); // @INST-SPECIES
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IFIND(); // IFIND
void DrawTTY(); // .TTY
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void _1_dot_5_at_(); // 1.5@
void _ro_SLIPPER_rc_(); // (SLIPPER)
void SHAPES(); // SHAPES
void EPIDERM(); // EPIDERM
void ANIMAL_dot_APPENDAGE(); // ANIMAL.APPENDAGE
void APPEARANCE(); // APPEARANCE
void WEAPONRY(); // WEAPONRY
void DECORATIONS(); // DECORATIONS
void _n_LEGS(); // #LEGS
void LEGG(); // LEGG
void GROUNDED(); // GROUNDED
void BOUYANT(); // BOUYANT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE400 = 0xe400; // WE400 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF0B0 = 0xf0b0; // WF0B0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF0B4 = 0xf0b4; // WF0B4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF1E6 = 0xf1e6; // WF1E6 size: 2
// {0x3a, 0x20}


const unsigned short int cc_planet = 0xe296; // planet
const unsigned short int cc_star = 0xe29a; // star
const unsigned short int cc_regions = 0xe29e; // regions
const unsigned short int cc_creature = 0xe2a2; // creature


// 0xe292: db 0x2b 0x01 '+ '

// ================================================
// 0xe294: WORD 'planet' codep=0x2214 wordp=0xe296
// ================================================
// orphan
// 0xe296: dw 0x0020

// ================================================
// 0xe298: WORD 'star' codep=0x2214 wordp=0xe29a
// ================================================
// orphan
// 0xe29a: dw 0x0018

// ================================================
// 0xe29c: WORD 'regions' codep=0x2214 wordp=0xe29e
// ================================================
// orphan
// 0xe29e: dw 0x0043

// ================================================
// 0xe2a0: WORD 'creature' codep=0x2214 wordp=0xe2a2
// ================================================
// 0xe2a2: dw 0x0044

// ================================================
// 0xe2a4: WORD 'crowding' codep=0x744d wordp=0xe2a6
// ================================================
// orphan
IFieldType crowding = {REGIONSIDX, 0x0b, 0x02};

// ================================================
// 0xe2a9: WORD 'difind' codep=0x224c wordp=0xe2ab
// ================================================
// orphan

void difind() // difind
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xe2b1: WORD 'rput' codep=0x224c wordp=0xe2b3 params=0 returns=2
// ================================================

void rput() // rput
{
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  Push(Read16(pp_FILE_n_)); // FILE# @
}


// ================================================
// 0xe2bd: WORD 'rget' codep=0x224c wordp=0xe2bf params=2 returns=0
// ================================================

void rget() // rget
{
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
}


// ================================================
// 0xe2c9: WORD '1.5,' codep=0x224c wordp=0xe2cb params=2 returns=0
// ================================================
// orphan

void _1_dot_5_co_() // 1.5,
{
  HERE(); // HERE
  Push(3);
  ALLOT(); // ALLOT
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xe2d5: WORD 'iaddr-array' codep=0x224c wordp=0xe2d7
// ================================================
// orphan

void iaddr_dash_array() // iaddr-array
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  CODE(); // (;CODE) inlined assembler code
// 0xe2db: call   1649
  SWAP(); // SWAP
  _3_star_(); // 3*
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe2e6: WORD '?COLOR' codep=0xe2db wordp=0xe2f1
// ================================================
// 0xe2f1: db 0x27 0xe3 0x01 0x27 0xe3 0x01 0x4d 0xe4 0x01 0x61 0xe4 0x01 0x7a 0xe4 0x01 0x37 0xe3 0x01 0x8b 0xe4 0x01 0x9d 0xe4 0x01 0xaf 0xe4 0x01 0x52 0xe3 0x01 0x65 0xe3 0x01 0x82 0xe3 0x01 0x95 0xe3 0x01 0xae 0xe3 0x01 0xca 0xe4 0x01 0xca 0xe3 0x01 0xe5 0xe4 0x01 0xdc 0xe3 0x01 0xfc 0xe4 0x01 0x00 0xe4 0x01 0x12 0xe5 0x01 0x27 0xe4 0x01 0x3a 0xe4 0x01 0x41 0xe5 0x01 0x53 0xe5 0x01 0x64 0xe5 0x01 0x11 0xe4 0x01 ''  '  M  a  z  7           R  e                                '  :  A  S  d     '

// ================================================
// 0xe342: WORD '?s' codep=0x224c wordp=0xe344 params=2 returns=3
// ================================================

void Iss() // ?s
{
  unsigned short int a, b;
  rput(); // rput
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push((Read16(((Read16(0x63ef+PHR_dash_CNT.offset)&0xFF) - 1) + (0x63ef+PHRASE_dash_MEM.offset))&0xFF)==0x0053?1:0); // PHR-CNT<IFIELD> C@ 1- PHRASE-MEM<IFIELD> + C@ 0x0053 =
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==4?1:0); //  4 =
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  rget(); // rget
}


// ================================================
// 0xe372: WORD 'WE374' codep=0x224c wordp=0xe374 params=2 returns=3
// ================================================

void WE374() // WE374
{
  unsigned short int a, b;
  rput(); // rput
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==5?1:0); //  5 =
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  rget(); // rget
}


// ================================================
// 0xe38e: WORD 'WE390' codep=0x224c wordp=0xe390 params=2 returns=3
// ================================================

void WE390() // WE390
{
  unsigned short int a, b;
  rput(); // rput
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==3?1:0); //  3 =
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  rget(); // rget
}


// ================================================
// 0xe3aa: WORD 'WE3AC' codep=0x224c wordp=0xe3ac params=0 returns=1
// ================================================

void WE3AC() // WE3AC
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xe3b6: WORD 'WE3B8' codep=0x224c wordp=0xe3b8 params=0 returns=1
// ================================================

void WE3B8() // WE3B8
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe3c0: WORD 'WE3C2' codep=0x224c wordp=0xe3c2 params=0 returns=1
// ================================================

void WE3C2() // WE3C2
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe3cc: WORD 'WE3CE' codep=0x224c wordp=0xe3ce params=3 returns=1
// ================================================

void WE3CE() // WE3CE
{
  MIN(); // MIN
  MAX(); // MAX
}


// ================================================
// 0xe3d4: WORD 'WE3D6' codep=0x224c wordp=0xe3d6 params=3 returns=1
// ================================================

void WE3D6() // WE3D6
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Pop() + 1); //  1+
  OVER(); // OVER
  _dash_(); // -
  Push(a); // R>
  Push(0x0100);
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe3ea: WORD 'WE3EC' codep=0x224c wordp=0xe3ec
// ================================================

void WE3EC() // WE3EC
{
  WE3AC(); // WE3AC
  _ro_SLIPPER_rc_(); // (SLIPPER)
}


// ================================================
// 0xe3f2: WORD 'WE3F4' codep=0x224c wordp=0xe3f4
// ================================================

void WE3F4() // WE3F4
{
  do
  {
    WE3EC(); // WE3EC
  } while(Pop() == 0);
  WE3D6(); // WE3D6
}


// ================================================
// 0xe3fe: WORD 'WE400' codep=0x1d29 wordp=0xe400
// ================================================
// orphan
// 0xe400: db 0x3a 0x20 ': '

// ================================================
// 0xe402: WORD 'WE404' codep=0x224c wordp=0xe404 params=1 returns=0
// ================================================
// orphan

void WE404() // WE404
{
  Push(pp_WE400); // WE400
  Store_3(); // !_3
}


// ================================================
// 0xe40a: WORD 'WE40C' codep=0x224c wordp=0xe40c params=0 returns=1
// ================================================
// orphan

void WE40C() // WE40C
{
  WE3C2(); // WE3C2
  Push(Read16(pp_WE400)); // WE400 @
  _st_(); // <
}


// ================================================
// 0xe416: WORD 'WE418' codep=0x224c wordp=0xe418
// ================================================
// orphan

void WE418() // WE418
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(0);
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xe420: call   1649
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xe42d: WORD 'plan-life' codep=0x73ea wordp=0xe42f
// ================================================
// orphan
LoadDataType plan_dash_life = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xe435: WORD 'atmo.density' codep=0x73ea wordp=0xe437
// ================================================
LoadDataType atmo_dot_density = {PLANETIDX, 0x13, 0x01, 0x16, 0x658f};

// ================================================
// 0xe43d: WORD 'narrowest' codep=0x73ea wordp=0xe43f
// ================================================
// orphan
LoadDataType narrowest = {PLANETIDX, 0x14, 0x03, 0x16, 0x658f};

// ================================================
// 0xe445: WORD 'flattest' codep=0x73ea wordp=0xe447
// ================================================
// orphan
LoadDataType flattest = {PLANETIDX, 0x15, 0x02, 0x16, 0x658f};

// ================================================
// 0xe44d: WORD 'plan-mass' codep=0x73ea wordp=0xe44f
// ================================================
LoadDataType plan_dash_mass = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xe455: WORD 'cllo' codep=0x73ea wordp=0xe457
// ================================================
LoadDataType cllo = {CREATUREIDX, 0x00, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe45d: WORD 'clhi' codep=0x73ea wordp=0xe45f
// ================================================
LoadDataType clhi = {CREATUREIDX, 0x02, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe465: WORD 'shape' codep=0x73ea wordp=0xe467
// ================================================
LoadDataType shape = {CREATUREIDX, 0x04, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe46d: WORD 'exterior' codep=0x73ea wordp=0xe46f
// ================================================
LoadDataType exterior = {CREATUREIDX, 0x07, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe475: WORD 'size.index' codep=0x73ea wordp=0xe477
// ================================================
LoadDataType size_dot_index = {CREATUREIDX, 0x0b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe47d: WORD 'niche' codep=0x73ea wordp=0xe47f
// ================================================
LoadDataType niche = {CREATUREIDX, 0x0c, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe485: WORD 'reddest' codep=0x73ea wordp=0xe487
// ================================================
LoadDataType reddest = {CREATUREIDX, 0x0d, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe48d: WORD 'bluest' codep=0x73ea wordp=0xe48f
// ================================================
LoadDataType bluest = {CREATUREIDX, 0x10, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe495: WORD 'texture' codep=0x73ea wordp=0xe497
// ================================================
LoadDataType texture = {CREATUREIDX, 0x13, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe49d: WORD 'w.append' codep=0x73ea wordp=0xe49f
// ================================================
LoadDataType w_dot_append = {CREATUREIDX, 0x16, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4a5: WORD 'w#' codep=0x73ea wordp=0xe4a7
// ================================================
LoadDataType w_n_ = {CREATUREIDX, 0x19, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe4ad: WORD 'd.append' codep=0x73ea wordp=0xe4af
// ================================================
LoadDataType d_dot_append = {CREATUREIDX, 0x1a, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4b5: WORD 'd#' codep=0x73ea wordp=0xe4b7
// ================================================
LoadDataType d_n_ = {CREATUREIDX, 0x1d, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe4bd: WORD 'a.append' codep=0x73ea wordp=0xe4bf
// ================================================
LoadDataType a_dot_append = {CREATUREIDX, 0x1e, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4c5: WORD 'a#' codep=0x73ea wordp=0xe4c7
// ================================================
LoadDataType a_n_ = {CREATUREIDX, 0x21, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe4cd: WORD 'g.append' codep=0x73ea wordp=0xe4cf
// ================================================
LoadDataType g_dot_append = {CREATUREIDX, 0x22, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4d5: WORD 'g#' codep=0x73ea wordp=0xe4d7
// ================================================
LoadDataType g_n_ = {CREATUREIDX, 0x25, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe4dd: WORD 'g.mobility' codep=0x73ea wordp=0xe4df
// ================================================
LoadDataType g_dot_mobility = {CREATUREIDX, 0x26, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4e5: WORD 'a.mobility' codep=0x73ea wordp=0xe4e7
// ================================================
LoadDataType a_dot_mobility = {CREATUREIDX, 0x29, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4ed: WORD 'orlo' codep=0x73ea wordp=0xe4ef
// ================================================
// orphan
LoadDataType orlo = {CREATUREIDX, 0x2c, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe4f5: WORD 'orhi' codep=0x73ea wordp=0xe4f7
// ================================================
LoadDataType orhi = {CREATUREIDX, 0x2e, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe4fd: WORD 'spec>color' codep=0x224c wordp=0xe4ff params=1 returns=2
// ================================================
// orphan

void spec_gt_color() // spec>color
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  PICK(); // PICK
  Push(a); // R>
  PICK(); // PICK
}


// ================================================
// 0xe50b: WORD '?2dup' codep=0x224c wordp=0xe50d params=2 returns=2
// ================================================
// orphan

void Is2dup() // ?2dup
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xe519: WORD 'whichguy' codep=0x224c wordp=0xe51b params=0 returns=0
// ================================================

void whichguy() // whichguy
{
  Push(Read16(cc_creature)); // creature
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xe52d: WORD 'MAPS' codep=0x224c wordp=0xe52f params=1 returns=2
// ================================================
// orphan

void MAPS() // MAPS
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 2); //  @ 2+
  RANGE(); // RANGE
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xe53b: WORD 'PROBS' codep=0x224c wordp=0xe53d
// ================================================
// orphan

void PROBS() // PROBS
{
  unsigned short int i, imax, a;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(Pop() * 6); //  6 *
  Push(Read16(regsp)); // DUP
  _co_(); // ,
  HERE(); // HERE
  OVER(); // OVER
  ALLOT(); // ALLOT
  SWAP(); // SWAP
  Push(0);
  FILL_1(); // FILL_1
  CODE(); // (;CODE) inlined assembler code
// 0xe555: call   1649
  Push(0);
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  MAPS(); // MAPS

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _2_at_(); // 2@
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    a = Pop(); // >R
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() & a); //  R> AND
    if (Pop() != 0)
    {
      Push(i); // I
      Push(4);
      ROLL(); // ROLL
      Pop(); // DROP
      ROT(); // ROT
      ROT(); // ROT
      imax = i; // LEAVE
    }
    Push(6);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); Pop(); // 2DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(Pop() + 4)); //  4 + @
    return;
  }
  PRINT("INDEX NOT IN PROBABILITY ARRAY! ", 32); // (.")
  UNRAVEL(); // UNRAVEL
  QUIT(); // QUIT
}


// ================================================
// 0xe5d3: WORD 'CHANCE' codep=0x224c wordp=0xe5d5 params=2 returns=2
// ================================================

void CHANCE() // CHANCE
{
  unsigned short int a;
  while(1)
  {
    OVER(); // OVER
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(!(Pop()==0x0064?1:0)); //  0x0064 = NOT
    a = Pop(); // >R
    _gt_(); // >
    Push(Pop() & a); //  R> AND
    if (Pop() == 0) return;
    Push((Pop() + 1) + 3); //  1+ 3+
  }
}


// ================================================
// 0xe5fb: WORD 'RESULT' codep=0x224c wordp=0xe5fd params=2 returns=2
// ================================================

void RESULT() // RESULT
{
  CHANCE(); // CHANCE
  Push(Pop() + 1); //  1+
  _1_dot_5_at_(); // 1.5@
  ROT(); // ROT
  Pop(); // DROP
}


// ================================================
// 0xe609: WORD '(kng)' codep=0x224c wordp=0xe60b params=1 returns=1
// ================================================

void _ro_kng_rc_() // (kng)
{
  Push(4);
  MOD(); // MOD
  if (Pop() != 0)
  {
    Push(pp_PLANTS); // PLANTS
    return;
  }
  Push(pp_ANIMALS); // ANIMALS
}


// ================================================
// 0xe61d: WORD 'SHAPES' codep=0xe555 wordp=0xe628
// ================================================
// 0xe628: db 0x0c 0x00 0x00 0x00 0x22 0x58 0x36 0xe6 0x00 0x00 0x14 0x58 0x4a 0xe6 0x0a 0x87 0xdd 0x01 0x14 0x9d 0xdd 0x01 0x23 0xb3 0xdd 0x01 0x3c 0xc9 0xdd 0x01 0x64 0xdc 0xdd 0x01 0x05 0x87 0xdd 0x01 0x0a 0x9d 0xdd 0x01 0x0f 0xb3 0xdd 0x01 0x2d 0xc9 0xdd 0x01 0x64 0xdc 0xdd 0x01 '    "X6    XJ         #   <   d               -   d   '

// ================================================
// 0xe65e: WORD 'EPIDERM' codep=0xe555 wordp=0xe66a
// ================================================
// 0xe66a: db 0x1e 0x00 0x01 0x00 0xdc 0xdd 0x8a 0xe6 0x01 0x00 0xc9 0xdd 0xb2 0xe6 0x01 0x00 0xb3 0xdd 0xd6 0xe6 0x01 0x00 0x9d 0xdd 0xee 0xe6 0x01 0x00 0x87 0xdd 0xf2 0xe6 0x0a 0xf2 0xdd 0x01 0x14 0x1f 0xdd 0x01 0x19 0xd3 0xdf 0x01 0x1e 0x10 0xe0 0x01 0x23 0x37 0xdd 0x01 0x28 0xe4 0xdf 0x01 0x32 0x55 0xdd 0x01 0x39 0x69 0xdd 0x01 0x43 0x00 0xe0 0x01 0x64 0xff 0xff 0xff 0x0a 0xf2 0xdd 0x01 0x14 0x1f 0xdd 0x01 0x1e 0x00 0xe0 0x01 0x23 0xd3 0xdf 0x01 0x28 0x10 0xe0 0x01 0x2d 0xe4 0xdf 0x01 0x37 0x55 0xdd 0x01 0x3e 0x69 0xdd 0x01 0x64 0xff 0xff 0xff 0x0a 0xf2 0xdd 0x01 0x0a 0x00 0xe0 0x01 0x0f 0x10 0xe0 0x01 0x14 0xe4 0xdf 0x01 0x1e 0x55 0xdd 0x01 0x64 0xff 0xff 0xff 0x64 0x55 0xdd 0x01 0x64 0x55 0xdd 0x01 '                                                #7  (   2U  9i  C   d               #   (   -   7U  >i  d                    U  d   dU  dU  '

// ================================================
// 0xe6f6: WORD 'shaper' codep=0x224c wordp=0xe6f8
// ================================================

void shaper() // shaper
{
  WE3C2(); // WE3C2
  LoadData(niche); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_kng_rc_(); // (kng)
  Push(0);
  SHAPES(); // SHAPES
  RESULT(); // RESULT
  LoadData(shape); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xe70c: WORD 'outfit' codep=0x224c wordp=0xe70e
// ================================================

void outfit() // outfit
{
  unsigned short int a, b;
  LoadData(shape); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  do
  {
    _2DUP(); // 2DUP
    WE3C2(); // WE3C2
    ROT(); // ROT
    ROT(); // ROT
    EPIDERM(); // EPIDERM
    RESULT(); // RESULT
    OVER(); // OVER
    Push(Pop() + 1); //  1+
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(Pop() + 1); //  1+
    }
  } while(Pop() == 0);
  a = Pop(); // >R
  b = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(b); // R>
  Push(a); // R>
}


// ================================================
// 0xe73e: WORD 'pelts' codep=0x224c wordp=0xe740
// ================================================

void pelts() // pelts
{
  LoadData(niche); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_kng_rc_(); // (kng)
  Push(Pop()==pp_ANIMALS?1:0); //  ANIMALS =
  if (Pop() != 0)
  {
    outfit(); // outfit
  } else
  {
    Push(0xdd55); Push(0x0001);
  }
  LoadData(exterior); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xe760: WORD 'class.parms' codep=0x224c wordp=0xe762 params=0 returns=0
// ================================================

void class_dot_parms() // class.parms
{
  unsigned short int i, imax;
  Push(Read16(pp_PLHI) + 1); // PLHI @ 1+
  Push(pp_RECORD_n_); // RECORD#
  OFF(); // OFF
  while(1)
  {
    whichguy(); // whichguy
    Push(Read16(pp_RECORD_n_)); // RECORD# @
    OVER(); // OVER
    _st_(); // <
    if (Pop() == 0) break;

    shaper(); // shaper
    pelts(); // pelts
    LoadData(shape); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
    LoadData(exterior); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
    LoadData(clhi); // from 'CREATURE'
    Push(Read16(Pop()) + 1); //  @ 1+
    LoadData(cllo); // from 'CREATURE'
    Push(Read16(Pop()) + 1); //  @ 1+
    _2DUP(); // 2DUP
    _dash_(); // -
    if (Pop() != 0)
    {

      i = Pop();
      imax = Pop();
      do // (DO)
      {
        Push(i); // I
        Push(pp_RECORD_n_); // RECORD#
        Store_3(); // !_3
        whichguy(); // whichguy
        _2DUP(); // 2DUP
        LoadData(exterior); // from 'CREATURE'
        _1_dot_5_ex_(); // 1.5!
        _2OVER(); // 2OVER
        LoadData(shape); // from 'CREATURE'
        _1_dot_5_ex_(); // 1.5!
        i++;
      } while(i<imax); // (LOOP)

    } else
    {
      Pop(); Pop(); // 2DROP
    }
    Pop(); Pop(); // 2DROP
    Pop(); Pop(); // 2DROP
    Push(1);
    Push(pp_RECORD_n_); // RECORD#
    _plus__ex__2(); // +!_2
  }
  Pop(); // DROP
}


// ================================================
// 0xe7cc: WORD 'ANIMAL.APPENDAGE' codep=0xe555 wordp=0xe7e1
// ================================================
// 0xe7e1: db 0x1e 0x00 0x01 0x00 0xdc 0xdd 0x01 0xe8 0x01 0x00 0xc9 0xdd 0x15 0xe8 0x01 0x00 0xb3 0xdd 0x29 0xe8 0x01 0x00 0x87 0xdd 0x3d 0xe8 0x01 0x00 0x9d 0xdd 0x51 0xe8 0x14 0x00 0x00 0x00 0x3c 0x17 0xcd 0x01 0x5a 0x62 0xcd 0x01 0x5f 0x4c 0xcd 0x01 0x64 0x0f 0xdf 0x01 0x05 0x00 0x00 0x00 0x23 0x17 0xcd 0x01 0x4b 0x62 0xcd 0x01 0x5f 0x4c 0xcd 0x01 0x64 0x0f 0xdf 0x01 0x28 0x00 0x00 0x00 0x2d 0x17 0xcd 0x01 0x32 0x62 0xcd 0x01 0x50 0x4c 0xcd 0x01 0x64 0x0f 0xdf 0x01 0x14 0x00 0x00 0x00 0x19 0x17 0xcd 0x01 0x1e 0x62 0xcd 0x01 0x46 0x4c 0xcd 0x01 0x64 0x0f 0xdf 0x01 0x14 0x00 0x00 0x00 0x19 0x17 0xcd 0x01 0x1e 0x62 0xcd 0x01 0x3c 0x4c 0xcd 0x01 0x64 0x0f 0xdf 0x01 '                  )     =     Q     <   Zb  _L  d       #   Kb  _L  d   (   -   2b  PL  d            b  FL  d            b  <L  d   '

// ================================================
// 0xe865: WORD 'APPEARANCE' codep=0xe555 wordp=0xe874
// ================================================
// 0xe874: db 0x36 0x00 0x01 0x00 0x55 0xdd 0xac 0xe8 0x01 0x00 0xd3 0xdf 0x44 0xe9 0x01 0x00 0x10 0xe0 0xc4 0xe9 0x01 0x00 0x00 0xe0 0xf4 0xe9 0x01 0x00 0x37 0xdd 0x20 0xea 0x01 0x00 0xf2 0xdd 0x58 0xea 0x01 0x00 0xe4 0xdf 0xc8 0xea 0x01 0x00 0x1f 0xdd 0x18 0xeb 0x01 0x00 0x69 0xdd 0x64 0xeb 0x03 0x36 0xce 0x01 0x05 0x47 0xce 0x01 0x07 0x59 0xce 0x01 0x09 0x6b 0xce 0x01 0x0b 0xca 0xce 0x01 0x0d 0xe0 0xce 0x01 0x0f 0xf5 0xce 0x01 0x11 0x0a 0xcf 0x01 0x13 0x1e 0xcf 0x01 0x15 0x30 0xcf 0x01 0x17 0x42 0xcf 0x01 0x19 0x54 0xcf 0x01 0x1b 0x7a 0xcf 0x01 0x1d 0x93 0xcf 0x01 0x1f 0xa4 0xcf 0x01 0x21 0xb7 0xcf 0x01 0x22 0xdc 0xcf 0x01 0x23 0x00 0xd0 0x01 0x24 0x14 0xd0 0x01 0x25 0x25 0xd0 0x01 0x26 0xcf 0xd0 0x01 0x27 0x85 0xd0 0x01 0x28 0xbd 0xd0 0x01 0x29 0x2b 0xd1 0x01 0x2a 0x51 0xd1 0x01 0x2b 0x66 0xd1 0x01 0x2c 0x7a 0xd1 0x01 0x2d 0x32 0xd2 0x01 0x2e 0x83 0xd2 0x01 0x2f 0x96 0xd2 0x01 0x30 0xa8 0xd2 0x01 0x31 0xcc 0xcf 0x01 0x32 0x68 0xcf 0x01 0x34 0xb6 0xce 0x01 0x36 0xba 0xd2 0x01 0x38 0x3e 0xd1 0x01 0x3a 0x8d 0xd1 0x01 0x64 0x38 0xd0 0x01 0x03 0x36 0xce 0x01 0x06 0x59 0xce 0x01 0x08 0x6b 0xce 0x01 0x0a 0xa4 0xce 0x01 0x0d 0xb6 0xce 0x01 0x0f 0x30 0xcf 0x01 0x11 0x42 0xcf 0x01 0x14 0x68 0xcf 0x01 0x16 0x7a 0xcf 0x01 0x18 0x93 0xcf 0x01 0x1b 0xa4 0xcf 0x01 0x1d 0xcc 0xcf 0x01 0x1f 0xdc 0xcf 0x01 0x22 0x14 0xd0 0x01 0x24 0xcf 0xd0 0x01 0x26 0x85 0xd0 0x01 0x29 0xaa 0xd0 0x01 0x2b 0xbd 0xd0 0x01 0x2d 0xf3 0xd0 0x01 0x30 0x19 0xd1 0x01 0x32 0x66 0xd1 0x01 0x34 0x7a 0xd1 0x01 0x37 0xe5 0xd1 0x01 0x39 0x20 0xd2 0x01 0x3c 0xba 0xd2 0x01 0x3f 0x51 0xd1 0x01 0x41 0x83 0xd2 0x01 0x44 0x96 0xd2 0x01 0x47 0xa8 0xd2 0x01 0x49 0x8e 0xce 0x01 0x4c 0xb7 0xcf 0x01 0x64 0x54 0xcf 0x01 0x07 0xc3 0xcd 0x01 0x0e 0xd7 0xcd 0x01 0x15 0xe9 0xcd 0x01 0x1b 0x0f 0xce 0x01 0x21 0x0a 0xcf 0x01 0x28 0x1e 0xcf 0x01 0x2f 0x14 0xd0 0x01 0x35 0xfd 0xcd 0x01 0x3b 0x7a 0xd1 0x01 0x42 0x32 0xd2 0x01 0x49 0xba 0xd2 0x01 0x64 0xaa 0xd0 0x01 0x08 0xd7 0xcd 0x01 0x0f 0xe9 0xcd 0x01 0x15 0xfd 0xcd 0x01 0x1b 0x0f 0xce 0x01 0x21 0x0a 0xcf 0x01 0x28 0x1e 0xcf 0x01 0x2f 0x14 0xd0 0x01 0x35 0xaa 0xd0 0x01 0x3b 0x7a 0xd1 0x01 0x41 0x32 0xd2 0x01 0x64 0xba 0xd2 0x01 0x06 0xfd 0xcd 0x01 0x0c 0x0f 0xce 0x01 0x11 0xfd 0xcd 0x01 0x16 0x0f 0xce 0x01 0x1c 0x47 0xce 0x01 0x21 0x0a 0xcf 0x01 0x26 0x0a 0xcf 0x01 0x2c 0x1e 0xcf 0x01 0x31 0xa4 0xcf 0x01 0x37 0xb7 0xcf 0x01 0x3d 0xaa 0xd0 0x01 0x42 0x7a 0xd1 0x01 0x48 0xba 0xd2 0x01 0x64 0xa4 0xce 0x01 0x04 0x59 0xce 0x01 0x06 0x6b 0xce 0x01 0x08 0x7c 0xce 0x01 0x0b 0x8e 0xce 0x01 0x0d 0xa4 0xce 0x01 0x0f 0xf5 0xce 0x01 0x12 0x1e 0xcf 0x01 0x14 0x54 0xcf 0x01 0x16 0x68 0xcf 0x01 0x19 0x7a 0xcf 0x01 0x1b 0x93 0xcf 0x01 0x1d 0xa4 0xcf 0x01 0x20 0xb7 0xcf 0x01 0x22 0xcc 0xcf 0x01 0x24 0xdc 0xcf 0x01 0x27 0x14 0xd0 0x01 0x29 0x38 0xd0 0x01 0x2b 0x70 0xd0 0x01 0x2e 0xbd 0xd0 0x01 0x30 0xf3 0xd0 0x01 0x32 0x19 0xd1 0x01 0x35 0x2b 0xd1 0x01 0x37 0x3e 0xd1 0x01 0x39 0x7a 0xd1 0x01 0x3c 0x8d 0xd1 0x01 0x3e 0x20 0xd2 0x01 0x40 0xba 0xd2 0x01 0x64 0x32 0xd2 0x01 0x05 0x59 0xce 0x01 0x09 0x6b 0xce 0x01 0x0c 0x7c 0xce 0x01 0x0f 0x8e 0xce 0x01 0x13 0x68 0xcf 0x01 0x17 0x7a 0xcf 0x01 0x1a 0x93 0xcf 0x01 0x1d 0xb7 0xcf 0x01 0x21 0xcc 0xcf 0x01 0x25 0x25 0xd0 0x01 0x28 0x38 0xd0 0x01 0x2b 0x70 0xd0 0x01 0x2f 0x85 0xd0 0x01 0x33 0xbd 0xd0 0x01 0x36 0xf3 0xd0 0x01 0x39 0x7a 0xd1 0x01 0x3d 0x8d 0xd1 0x01 0x41 0xa5 0xd1 0x01 0x44 0x20 0xd2 0x01 0x64 0x32 0xd2 0x01 0x05 0x59 0xce 0x01 0x09 0x6b 0xce 0x01 0x0d 0x7c 0xce 0x01 0x11 0x8e 0xce 0x01 0x15 0x68 0xcf 0x01 0x19 0x7a 0xcf 0x01 0x1d 0x93 0xcf 0x01 0x21 0xb7 0xcf 0x01 0x24 0xcc 0xcf 0x01 0x27 0x25 0xd0 0x01 0x2a 0x38 0xd0 0x01 0x2d 0x70 0xd0 0x01 0x30 0x85 0xd0 0x01 0x33 0xbd 0xd0 0x01 0x36 0xf3 0xd0 0x01 0x39 0x7a 0xd1 0x01 0x3d 0x8d 0xd1 0x01 0x41 0x20 0xd2 0x01 0x64 0x32 0xd2 0x01 0x64 0x00 0x00 0x00 '6   U       D               7       X               i d  6   G   Y   k                       0   B   T   z          !   "   #   $   %%  &   '   (   )+  *Q  +f  ,z  -2  .   /   0   1   2h  4   6   8>  :   d8   6   Y   k           0   B   h   z                  "   $   &   )   +   -   0   2f  4z  7   9   <   ?Q  A   D   G   I   L   dT                  !   (   /   5   ;z  B2  I   d                   !   (   /   5   ;z  A2  d                    G  !   &   ,   1   7   =   Bz  H   d    Y   k   |                   T   h   z              "   $   '   )8  +p  .   0   2   5+  7>  9z  <   >   @   d2   Y   k   |       h   z          !   %%  (8  +p  /   3   6   9z  =   A   D   d2   Y   k   |       h   z      !   $   '%  *8  -p  0   3   6   9z  =   A   d2  d   '

// ================================================
// 0xeb68: WORD 'WEAPONRY' codep=0xe555 wordp=0xeb75
// ================================================
// 0xeb75: db 0x0c 0x00 0x00 0x00 0x22 0x58 0x83 0xeb 0x00 0x00 0x14 0x58 0xb3 0xeb 0x1e 0x00 0x00 0x00 0x23 0x9b 0xcc 0x01 0x28 0x18 0xde 0x01 0x2d 0x87 0xcb 0x01 0x32 0x52 0xde 0x01 0x37 0x64 0xde 0x01 0x3c 0x39 0xcd 0x01 0x41 0x98 0xcb 0x01 0x46 0xa9 0xcb 0x01 0x4b 0x77 0xcd 0x01 0x50 0x6f 0xcc 0x01 0x64 0x86 0xcc 0x01 0x14 0x00 0x00 0x00 0x32 0x05 0xde 0x01 0x46 0x6f 0xcc 0x01 0x64 0x86 0xcc 0x01 '    "X     X      #   (   -   2R  7d  <9  A   F   Kw  Po  d       2   Fo  d   '

// ================================================
// 0xebc3: WORD 'DECORATIONS' codep=0xe555 wordp=0xebd3
// ================================================
// 0xebd3: db 0x0c 0x00 0x00 0x00 0x14 0x58 0xe1 0xeb 0x00 0x00 0x22 0x58 0x0d 0xec 0x05 0xe1 0xcb 0x01 0x14 0x77 0xde 0x01 0x18 0x8b 0xde 0x01 0x1c 0x9e 0xde 0x01 0x21 0x10 0xcc 0x01 0x25 0xb1 0xdf 0x01 0x2a 0xb2 0xde 0x01 0x3e 0xc4 0xde 0x01 0x48 0xd7 0xde 0x01 0x52 0x8e 0xdf 0x01 0x64 0xe9 0xde 0x01 0x05 0x21 0xdf 0x01 0x08 0xb0 0xcc 0x01 0x0d 0x59 0xdf 0x01 0x11 0xe1 0xcb 0x01 0x13 0x6b 0xdf 0x01 0x15 0x7d 0xdf 0x01 0x1c 0x00 0xcc 0x01 0x25 0xc3 0xcc 0x01 0x2c 0xdc 0xcc 0x01 0x33 0xf1 0xcc 0x01 0x3d 0x07 0xcd 0x01 0x46 0xc2 0xdf 0x01 0x4b 0x27 0xcd 0x01 0x4e 0x2a 0xde 0x01 0x50 0x3f 0xde 0x01 0x54 0x10 0xcc 0x01 0x55 0x27 0xcc 0x01 0x56 0x38 0xcc 0x01 0x57 0x33 0xdf 0x01 0x5a 0x4b 0xcc 0x01 0x64 0x48 0xdf 0x01 '     X    "X       w          !   %   *   >   H   R   d    !       Y       k   }      %   ,   3   =   F   K'  N*  P?  T   U'  V8  W3  ZK  dH  '

// ================================================
// 0xec61: WORD '#LEGS' codep=0xe555 wordp=0xec6b
// ================================================
// 0xec6b: db 0x1e 0x00 0x01 0x00 0xdc 0xdd 0x8b 0xec 0x01 0x00 0xc9 0xdd 0xbf 0xec 0x01 0x00 0xb3 0xdd 0xf3 0xec 0x01 0x00 0x9d 0xdd 0x2b 0xed 0x01 0x00 0x87 0xdd 0x4b 0xed 0x0a 0x01 0x00 0x00 0x0f 0x01 0x00 0x00 0x21 0x02 0x00 0x00 0x2b 0x04 0x00 0x00 0x37 0x06 0x00 0x00 0x43 0x08 0x00 0x00 0x4d 0x0c 0x00 0x00 0x4e 0x03 0x00 0x00 0x4f 0x05 0x00 0x00 0x52 0x07 0x00 0x00 0x55 0x09 0x00 0x00 0x58 0x0b 0x00 0x00 0x64 0x0a 0x00 0x00 0x02 0x02 0x00 0x00 0x04 0x04 0x00 0x00 0x10 0x06 0x00 0x00 0x1c 0x08 0x00 0x00 0x28 0x0a 0x00 0x00 0x2a 0x0c 0x00 0x00 0x2c 0x01 0x00 0x00 0x2e 0x03 0x00 0x00 0x30 0x05 0x00 0x00 0x3c 0x07 0x00 0x00 0x48 0x09 0x00 0x00 0x54 0x0b 0x00 0x00 0x64 0xff 0x7f 0x00 0x1e 0x00 0x00 0x00 0x28 0x02 0x00 0x00 0x2a 0x04 0x00 0x00 0x2f 0x06 0x00 0x00 0x34 0x08 0x00 0x00 0x39 0x0a 0x00 0x00 0x3b 0x0c 0x00 0x00 0x3d 0x01 0x00 0x00 0x3f 0x03 0x00 0x00 0x41 0x05 0x00 0x00 0x46 0x07 0x00 0x00 0x4b 0x09 0x00 0x00 0x50 0x0b 0x00 0x00 0x64 0xff 0x7f 0x00 0x14 0x00 0x00 0x00 0x18 0x06 0x00 0x00 0x1c 0x07 0x00 0x00 0x20 0x08 0x00 0x00 0x24 0x09 0x00 0x00 0x28 0x0a 0x00 0x00 0x2c 0x0b 0x00 0x00 0x64 0xff 0x7f 0x00 0x64 0x00 0x00 0x00 '                        +     K         !   +   7   C   M   N   O   R   U   X   d                   (   *   ,   .   0   <   H   T   d      (   *   /   4   9   ;   =   ?   A   F   K   P   d                  $   (   ,   d  d   '

// ================================================
// 0xed4f: WORD 'LEGG' codep=0xe555 wordp=0xed58
// ================================================
// 0xed58: db 0x24 0x00 0x00 0x00 0x01 0x00 0x7e 0xed 0x00 0x00 0x02 0x00 0x8e 0xed 0x00 0x00 0x03 0x00 0x9e 0xed 0x00 0x00 0x04 0x00 0xae 0xed 0x00 0x00 0x05 0x00 0xbe 0xed 0x00 0x00 0x06 0x00 0xce 0xed 0x05 0x98 0xe1 0x01 0x0f 0xac 0xe1 0x01 0x2d 0xc0 0xe1 0x01 0x64 0xd4 0xe1 0x01 0x0a 0x98 0xe1 0x01 0x19 0xac 0xe1 0x01 0x37 0xc0 0xe1 0x01 0x64 0xd4 0xe1 0x01 0x0f 0x98 0xe1 0x01 0x23 0xac 0xe1 0x01 0x41 0xc0 0xe1 0x01 0x64 0xd4 0xe1 0x01 0x23 0x98 0xe1 0x01 0x41 0xac 0xe1 0x01 0x55 0xc0 0xe1 0x01 0x64 0xd4 0xe1 0x01 0x2d 0x98 0xe1 0x01 0x4b 0xac 0xe1 0x01 0x5a 0xc0 0xe1 0x01 0x64 0xd4 0xe1 0x01 0x37 0x98 0xe1 0x01 0x55 0xac 0xe1 0x01 0x5f 0xc0 0xe1 0x01 0x64 0xd4 0xe1 0x01 '$     ~                                       -   d           7   d       #   A   d   #   A   U   d   -   K   Z   d   7   U   _   d   '

// ================================================
// 0xedde: WORD 'sizing' codep=0x224c wordp=0xede0
// ================================================

void sizing() // sizing
{
  unsigned short int a;
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  a = Pop(); // >R
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(plan_dash_mass); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(0x0064);
  _slash_(); // /
  Push(5);
  MIN(); // MIN
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
  Push(6);
  SWAP(); // SWAP
  _dash_(); // -
  Push(Pop() * 0x0014); //  0x0014 *
  Push(pp_PEAK); // PEAK
  Store_3(); // !_3
  Push(0x000a);
  Push(0x0064);
  WE3F4(); // WE3F4
  Push(0x000c);
  _slash_(); // /
  Push(Pop() + 1); //  1+
  Push(1);
  MAX(); // MAX
  Push(9);
  MIN(); // MIN
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  whichguy(); // whichguy
  LoadData(size_dot_index); // from 'CREATURE'
  C_ex_(); // C!
}


// ================================================
// 0xee36: WORD 'spec>color' codep=0x224c wordp=0xee38 params=1 returns=0
// ================================================

void spec_gt_color() // spec>color
{
  unsigned short int a, b;
  rput(); // rput
  a = Pop(); // >R
  b = Pop(); // >R
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(0x004d);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(1);
  } else
  {
    Push(0x004b);
    OVER(); // OVER
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(9);
    } else
    {
      Push(0x0047);
      OVER(); // OVER
      Push((Pop()==Pop())?1:0); // =
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(0x000b);
      } else
      {
        Push(0x0046);
        OVER(); // OVER
        Push((Pop()==Pop())?1:0); // =
        if (Pop() != 0)
        {
          Pop(); // DROP
          Push(0x0018);
        } else
        {
          Push(0x0041);
          OVER(); // OVER
          Push((Pop()==Pop())?1:0); // =
          if (Pop() != 0)
          {
            Pop(); // DROP
            Push(0x000f);
          } else
          {
            Push(0x0042);
            OVER(); // OVER
            Push((Pop()==Pop())?1:0); // =
            if (Pop() != 0)
            {
              Pop(); // DROP
              Push(0x0013);
            } else
            {
              Push(0x004f);
              OVER(); // OVER
              Push((Pop()==Pop())?1:0); // =
              if (Pop() != 0)
              {
                Pop(); // DROP
                Push(0x001b);
              } else
              {
                ABORT("Spectral class not found", 24);// (ABORT")
                Pop(); // DROP
              }
            }
          }
        }
      }
    }
  }
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  rget(); // rget
}


// ================================================
// 0xef03: WORD 'WEF05' codep=0x224c wordp=0xef05
// ================================================

void WEF05() // WEF05
{
  unsigned short int a;
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  a = Pop(); // >R
  _2DUP(); // 2DUP
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Read16(a)); // R@
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  whichguy(); // whichguy
  LoadData(reddest); // from 'CREATURE'
  C_ex_(); // C!
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  Push(0x001b);
  MIN(); // MIN
  RRND(); // RRND
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  whichguy(); // whichguy
  LoadData(bluest); // from 'CREATURE'
  C_ex_(); // C!
  Pop(); // DROP
}


// ================================================
// 0xef39: WORD 'WEF3B' codep=0x224c wordp=0xef3b params=2 returns=2
// ================================================

void WEF3B() // WEF3B
{
  spec_gt_color(); // spec>color
  Push(0x000d);
  OVER(); // OVER
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0x000e);
    Push(0x0016);
    return;
  }
  Push(0x000b);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(1);
    Push(0x000a);
    return;
  }
  Push(8);
  Push(0x0013);
}


// ================================================
// 0xef73: WORD 'dye' codep=0x224c wordp=0xef75
// ================================================

void dye() // dye
{
  unsigned short int a, b;
  rput(); // rput
  a = Pop(); // >R
  b = Pop(); // >R
  LoadData(niche); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_kng_rc_(); // (kng)
  Push(Pop()==pp_ANIMALS?1:0); //  ANIMALS =
  if (Pop() != 0)
  {
    Push(1);
    Push(0x001a);
  } else
  {
    WE3B8(); // WE3B8
    if (Pop() != 0)
    {
      Push(0x0017);
      Push(0x001a);
    } else
    {
      WEF3B(); // WEF3B
    }
  }
  Push(b); // R>
  Push(a); // R>
  rget(); // rget
  whichguy(); // whichguy
  WEF05(); // WEF05
}


// ================================================
// 0xefb3: WORD 'WEFB5' codep=0x224c wordp=0xefb5 params=2 returns=3
// ================================================
// orphan

void WEFB5() // WEFB5
{
  unsigned short int a, b;
  rput(); // rput
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==7?1:0); //  7 =
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  rget(); // rget
}


// ================================================
// 0xefcf: WORD 'fortify' codep=0x224c wordp=0xefd1
// ================================================

void fortify() // fortify
{
  WE3C2(); // WE3C2
  LoadData(niche); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_kng_rc_(); // (kng)
  Push(0);
  WEAPONRY(); // WEAPONRY
  RESULT(); // RESULT
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Iss(); // ?s
    if (Pop() != 0)
    {
      Push(0x00ff);
    } else
    {
      WE374(); // WE374
      if (Pop() != 0)
      {
        Push(0);
      } else
      {
        Push(1);
      }
    }
  } else
  {
    Push(Read16(regsp)); // DUP
  }
  LoadData(w_n_); // from 'CREATURE'
  C_ex_(); // C!
  LoadData(w_dot_append); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf013: WORD 'decorate' codep=0x224c wordp=0xf015
// ================================================

void decorate() // decorate
{
  WE3C2(); // WE3C2
  LoadData(niche); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_kng_rc_(); // (kng)
  Push(0);
  DECORATIONS(); // DECORATIONS
  RESULT(); // RESULT
  LoadData(d_dot_append); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf029: WORD 'trimming' codep=0x224c wordp=0xf02b
// ================================================

void trimming() // trimming
{
  LoadData(d_dot_append); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WE390(); // WE390
    if (Pop() != 0)
    {
      Push(1);
    } else
    {
      Iss(); // ?s
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        WE3C2(); // WE3C2
        LoadData(shape); // from 'CREATURE'
        _1_dot_5_at_(); // 1.5@
        _n_LEGS(); // #LEGS
        RESULT(); // RESULT
        Pop(); // DROP
        Push(Read16(regsp)); // DUP
        Push(0x0010);
        _slash_(); // /
        Push(Pop()==0?1:0); //  0=
        if (Pop() != 0)
        {
          Push(Pop() + 1); //  1+
        }
      } else
      {
        Push(0);
      }
    }
  } else
  {
    Push(0);
  }
  LoadData(d_n_); // from 'CREATURE'
  C_ex_(); // C!
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf07b: WORD 'GROUNDED' codep=0xe420 wordp=0xf088
// ================================================
// 0xf088: db 0x00 0x00 0x1e 0x00 0x0a 0x00 0x00 0x00 0xe2 0xff 0x9c 0xff 0x9c 0xff '              '

// ================================================
// 0xf096: WORD 'BOUYANT' codep=0xe420 wordp=0xf0a2
// ================================================
// 0xf0a2: db 0x00 0x00 0xce 0xff 0x00 0x00 0x14 0x00 0x28 0x00 0x32 0x00 '        ( 2 '

// ================================================
// 0xf0ae: WORD 'WF0B0' codep=0x1d29 wordp=0xf0b0
// ================================================
// 0xf0b0: db 0x3a 0x20 ': '

// ================================================
// 0xf0b2: WORD 'WF0B4' codep=0x1d29 wordp=0xf0b4
// ================================================
// 0xf0b4: db 0x3a 0x20 ': '

// ================================================
// 0xf0b6: WORD 'WF0B8' codep=0x224c wordp=0xf0b8 params=0 returns=5
// ================================================

void WF0B8() // WF0B8
{
  Push(0);
  Push(0);
  Push(0);
  Push(0);
  Push(0);
}


// ================================================
// 0xf0c4: WORD 'WF0C6' codep=0x224c wordp=0xf0c6
// ================================================

void WF0C6() // WF0C6
{
  unsigned short int a, b, c;
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  a = Pop(); // >R
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(plan_dash_mass); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(0x0064);
  _slash_(); // /
  Push(5);
  MIN(); // MIN
  Push(Pop() + 1); //  1+
  Push(Read16(regsp)); // DUP
  b = Pop(); // >R
  GROUNDED(); // GROUNDED
  LoadData(atmo_dot_density); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  c = Pop(); // >R
  BOUYANT(); // BOUYANT
  Push(Pop() + Pop()); // +
  Push(0);
  Push(0x0064);
  WE3CE(); // WE3CE
  Push((c - b) + 5); // R> R> - 5 +
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(9);
  _slash_(); // /
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  whichguy(); // whichguy
}


// ================================================
// 0xf11a: WORD 'WF11C' codep=0x224c wordp=0xf11c
// ================================================

void WF11C() // WF11C
{
  LoadData(size_dot_index); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(pp_WF0B4)); // WF0B4 @
  _st_(); // <
}


// ================================================
// 0xf128: WORD 'WF12A' codep=0x224c wordp=0xf12a params=0 returns=1
// ================================================

void WF12A() // WF12A
{
  Push(Read16(pp_WF0B0)); // WF0B0 @
  WE3C2(); // WE3C2
  _st_(); // <
}


// ================================================
// 0xf134: WORD 'elevate' codep=0x224c wordp=0xf136
// ================================================

void elevate() // elevate
{
  unsigned short int a;
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  a = Pop(); // >R
  WF0C6(); // WF0C6
  Push(pp_WF0B4); // WF0B4
  Store_3(); // !_3
  Push(pp_WF0B0); // WF0B0
  Store_3(); // !_3
  LoadData(niche); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_kng_rc_(); // (kng)
  Push(Pop()==pp_ANIMALS?1:0); //  ANIMALS =
  WF11C(); // WF11C
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Read16(pp_WF0B0)); // WF0B0 @
    WE3C2(); // WE3C2
    _st_(); // <
    if (Pop() != 0)
    {
      WE3C2(); // WE3C2
      Push(0x0050);
      _st_(); // <
      if (Pop() != 0)
      {
        Push(0xcbba); Push(0x0001);
        Push(0xe1e8); Push(0x0001);
      } else
      {
        Push(0xcbcb); Push(0x0001);
        Push(0xe1fb); Push(0x0001);
      }
      WE3B8(); // WE3B8
      Push((Pop() + 1) * 2); //  1+ 2*
    } else
    {
      WF0B8(); // WF0B8
    }
  } else
  {
    WF11C(); // WF11C
    if (Pop() != 0)
    {
      WF12A(); // WF12A
      if (Pop() != 0)
      {
        WE3B8(); // WE3B8
        if (Pop() != 0)
        {
          Push(0xcbcb); Push(0x0001);
          Push(0xe1fb); Push(0x0001);
          Push(1);
        } else
        {
          WF0B8(); // WF0B8
        }
      } else
      {
        WF0B8(); // WF0B8
      }
    } else
    {
      WF0B8(); // WF0B8
    }
  }
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  whichguy(); // whichguy
  LoadData(a_n_); // from 'CREATURE'
  C_ex_(); // C!
  LoadData(a_dot_mobility); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(a_dot_append); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf1e4: WORD 'WF1E6' codep=0x1d29 wordp=0xf1e6
// ================================================
// 0xf1e6: db 0x3a 0x20 ': '

// ================================================
// 0xf1e8: WORD 'WF1EA' codep=0x224c wordp=0xf1ea params=0 returns=1
// ================================================

void WF1EA() // WF1EA
{
  Push(Read16(pp_PLANTS)); // PLANTS @
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0x001e);
  Push(pp_PEAK); // PEAK
  Store_3(); // !_3
  Push(0);
  Push(0x0028);
  WE3F4(); // WE3F4
  Push(Pop() + 0x0019); //  0x0019 +
}


// ================================================
// 0xf20e: WORD 'nubile' codep=0x224c wordp=0xf210
// ================================================

void nubile() // nubile
{
  WF1EA(); // WF1EA
  Push(pp_WF1E6); // WF1E6
  Store_3(); // !_3
  LoadData(niche); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_kng_rc_(); // (kng)
  Push(Pop()==pp_PLANTS?1:0); //  PLANTS =
  if (Pop() != 0)
  {
    Push(Read16(pp_WF1E6)); // WF1E6 @
    LoadData(niche); // from 'CREATURE'
    Push((Read16(Pop())&0xFF)==2?1:0); //  C@ 2 =
    if (Pop() != 0)
    {
      Push(Pop() - 0x0019); //  0x0019 -
      Push(0);
      MAX(); // MAX
    }
    WE3C2(); // WE3C2
    _gt_(); // >
    if (Pop() != 0)
    {
      Push(0xe225); Push(0x0001);
    } else
    {
      Push(0xe238); Push(0x0001);
    }
  } else
  {
    Push(0xe225); Push(0x0001);
  }
  LoadData(g_dot_mobility); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf268: WORD 'WF26A' codep=0x224c wordp=0xf26a
// ================================================

void WF26A() // WF26A
{
  WE3C2(); // WE3C2
  LoadData(shape); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  ANIMAL_dot_APPENDAGE(); // ANIMAL.APPENDAGE
  RESULT(); // RESULT
}


// ================================================
// 0xf276: WORD 'stroll' codep=0x224c wordp=0xf278
// ================================================

void stroll() // stroll
{
  LoadData(niche); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_kng_rc_(); // (kng)
  Push(Pop()==pp_ANIMALS?1:0); //  ANIMALS =
  if (Pop() != 0)
  {
    WF26A(); // WF26A
  } else
  {
    LoadData(g_dot_mobility); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
    Push(0xe225); Push(0x0001);
    D_eq_(); // D=
    if (Pop() != 0)
    {
      WE3C2(); // WE3C2
      Push(0x0023);
      _st_(); // <
      if (Pop() != 0)
      {
        Push(0xe238); Push(0x0001);
        LoadData(g_dot_mobility); // from 'CREATURE'
        _1_dot_5_ex_(); // 1.5!
        Push(0);
        Push(0);
      } else
      {
        Push(0xcd62); Push(0x0001);
      }
    } else
    {
      Push(0);
      Push(0);
    }
  }
  whichguy(); // whichguy
  LoadData(g_dot_append); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf2d0: WORD 'WF2D2' codep=0x224c wordp=0xf2d2 params=2 returns=0
// ================================================

void WF2D2() // WF2D2
{
  Push(0xcd62); Push(0x0001);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0xe15c); Push(0x0001);
    return;
  }
  Push(0xcd4c); Push(0x0001);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0xe11d); Push(0x0001);
    return;
  }
  Push(0xdf0f); Push(0x0001);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0xe130); Push(0x0001);
    return;
  }
  Push(0xcd17); Push(0x0001);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    WE3C2(); // WE3C2
    Push(pp__ro_PLANET_rc_); // (PLANET)
    _1_dot_5_at_(); // 1.5@
    _gt_C_plus_S(); // >C+S
    LoadData(plan_dash_mass); // from 'PLANET'
    Push(Read16(Pop())); //  @
    Push(0x0064);
    _slash_(); // /
    Push(5);
    MIN(); // MIN
    Push(Pop() + 1); //  1+
    ICLOSE(); // ICLOSE
    Push(0);
    LEGG(); // LEGG
    RESULT(); // RESULT
    return;
  }
  Push(0);
  Push(0);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    LoadData(shape); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(0xddb3); Push(0x0001);
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      Push(0xe171); Push(0x0001);
    } else
    {
      Push(0xdddc); Push(0x0001);
      D_eq_(); // D=
      if (Pop() != 0)
      {
        Push(0xe145); Push(0x0001);
      } else
      {
        Push(0xe185); Push(0x0001);
      }
    }
    return;
  }
  ABORT("something wrong in \?move ", 25);// (ABORT")
  Pop(); // DROP
}


// ================================================
// 0xf3c0: WORD 'WF3C2' codep=0x224c wordp=0xf3c2
// ================================================

void WF3C2() // WF3C2
{
  LoadData(g_n_); // from 'CREATURE'
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() != 0)
  {
    Push(0xe185); Push(0x0001);
    return;
  }
  LoadData(g_dot_append); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  WF2D2(); // WF2D2
}


// ================================================
// 0xf3de: WORD 'WF3E0' codep=0x224c wordp=0xf3e0
// ================================================

void WF3E0() // WF3E0
{
  LoadData(g_dot_mobility); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  Push(0xe225); Push(0x0001);
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(0xe15c); Push(0x0001);
    return;
  }
  Push(0xe238); Push(0x0001);
}


// ================================================
// 0xf402: WORD 'movem' codep=0x224c wordp=0xf404
// ================================================

void movem() // movem
{
  unsigned short int a;
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  a = Pop(); // >R
  LoadData(niche); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_kng_rc_(); // (kng)
  Push(Pop()==pp_ANIMALS?1:0); //  ANIMALS =
  if (Pop() != 0)
  {
    WF3C2(); // WF3C2
  } else
  {
    WF3E0(); // WF3E0
  }
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  whichguy(); // whichguy
  LoadData(g_dot_mobility); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf42e: WORD 'animate' codep=0x224c wordp=0xf430
// ================================================

void animate() // animate
{
  unsigned short int a, b, c;
  LoadData(g_dot_append); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  a = Pop(); // >R
  b = Pop(); // >R
  Push(b | a); // I I' OR
  if (Pop() != 0)
  {
    Push(b); // I
    Push(a); // I'
    Iss(); // ?s
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WE374(); // WE374
      if (Pop() != 0)
      {
        Push(0x00ff);
      } else
      {
        WE3C2(); // WE3C2
        LoadData(shape); // from 'CREATURE'
        _1_dot_5_at_(); // 1.5@
        _n_LEGS(); // #LEGS
        RESULT(); // RESULT
        Pop(); // DROP
      }
    } else
    {
      Push(0x00ff);
    }
    c = Pop(); // >R
    Pop(); Pop(); // 2DROP
    Push(c); // R>
    Push(Read16(regsp)); // DUP
    LoadData(g_n_); // from 'CREATURE'
    C_ex_(); // C!
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Push(0);
      Push(0);
      LoadData(g_dot_append); // from 'CREATURE'
      _1_dot_5_ex_(); // 1.5!
    }
  }
  Push(b); // R>
  Push(a); // R>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf492: WORD 'texturize' codep=0x224c wordp=0xf494
// ================================================

void texturize() // texturize
{
  WE3C2(); // WE3C2
  LoadData(exterior); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  APPEARANCE(); // APPEARANCE
  RESULT(); // RESULT
  LoadData(texture); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf4a4: WORD 'WF4A6' codep=0x224c wordp=0xf4a6
// ================================================

void WF4A6() // WF4A6
{
  sizing(); // sizing
  dye(); // dye
  fortify(); // fortify
  decorate(); // decorate
  trimming(); // trimming
  elevate(); // elevate
  nubile(); // nubile
  stroll(); // stroll
  animate(); // animate
  movem(); // movem
  texturize(); // texturize
}


// ================================================
// 0xf4be: WORD 'order.parms' codep=0x224c wordp=0xf4c0 params=0 returns=0
// ================================================

void order_dot_parms() // order.parms
{
  Push(Read16(pp_PLHI) + 1); // PLHI @ 1+
  Push(pp_RECORD_n_); // RECORD#
  OFF(); // OFF
  while(1)
  {
    whichguy(); // whichguy
    Push(Read16(pp_RECORD_n_)); // RECORD# @
    OVER(); // OVER
    _st_(); // <
    if (Pop() == 0) break;

    WF4A6(); // WF4A6
    LoadData(orhi); // from 'CREATURE'
    Push(Read16(Pop()) + 1); //  @ 1+
    Push(pp_RECORD_n_); // RECORD#
    Store_3(); // !_3
  }
  Pop(); // DROP
}


// ================================================
// 0xf4ec: WORD 'C+OPARMS' codep=0x224c wordp=0xf4f9 params=0 returns=2
// ================================================
// entry

void C_plus_OPARMS() // C+OPARMS
{
  Push(Read16(pp_PLHI)); // PLHI @
  if (Pop() != 0)
  {
    class_dot_parms(); // class.parms
    order_dot_parms(); // order.parms
  } else
  {
    Push(0x1388);
    MS(); // MS
  }
  SET_STR_AS_PARAM("HULL CHECK COMPLETE");
  DrawTTY(); // .TTY
}

// 0xf529: db 0x48 0x49 0x50 0x41 0x52 0x4d 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x32 0x32 0x31 0x38 0x2d 0x2d 0x2d 0x2d 0x00 'HIPARMS_______________________________---------2218---- '

