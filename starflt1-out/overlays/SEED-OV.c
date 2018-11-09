// ====== OVERLAY 'SEED-OV' ======
// store offset = 0xec00
// overlay size   = 0x0960

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEC16  codep:0x2214 wordp:0xec16 size:0x0002 C-string:'WEC16'
//           WEC1A  codep:0x2214 wordp:0xec1a size:0x0002 C-string:'WEC1A'
//           WEC1E  codep:0x2214 wordp:0xec1e size:0x0002 C-string:'WEC1E'
//           WEC22  codep:0x2214 wordp:0xec22 size:0x0002 C-string:'WEC22'
//           WEC26  codep:0x73ea wordp:0xec26 size:0x0006 C-string:'WEC26'
//           WEC2E  codep:0x73ea wordp:0xec2e size:0x0006 C-string:'WEC2E'
//           WEC36  codep:0x1d29 wordp:0xec36 size:0x0002 C-string:'WEC36'
//           WEC3A  codep:0x73ea wordp:0xec3a size:0x0006 C-string:'WEC3A'
//           WEC42  codep:0x73ea wordp:0xec42 size:0x0006 C-string:'WEC42'
//           WEC4A  codep:0x73ea wordp:0xec4a size:0x0006 C-string:'WEC4A'
//           WEC52  codep:0x73ea wordp:0xec52 size:0x0006 C-string:'WEC52'
//           WEC5A  codep:0x73ea wordp:0xec5a size:0x0006 C-string:'WEC5A'
//           WEC62  codep:0x744d wordp:0xec62 size:0x0003 C-string:'WEC62'
//           WEC67  codep:0x73ea wordp:0xec67 size:0x0006 C-string:'WEC67'
//           WEC6F  codep:0x73ea wordp:0xec6f size:0x0006 C-string:'WEC6F'
//           WEC77  codep:0x744d wordp:0xec77 size:0x0003 C-string:'WEC77'
//           WEC7C  codep:0x744d wordp:0xec7c size:0x0003 C-string:'WEC7C'
//           WEC81  codep:0x73ea wordp:0xec81 size:0x0006 C-string:'WEC81'
//           WEC89  codep:0x744d wordp:0xec89 size:0x0003 C-string:'WEC89'
//           WEC8E  codep:0x744d wordp:0xec8e size:0x0003 C-string:'WEC8E'
//           WEC93  codep:0x744d wordp:0xec93 size:0x0003 C-string:'WEC93'
//           WEC98  codep:0x73ea wordp:0xec98 size:0x0006 C-string:'WEC98'
//           WECA0  codep:0x73ea wordp:0xeca0 size:0x0006 C-string:'WECA0'
//           WECA8  codep:0x744d wordp:0xeca8 size:0x0003 C-string:'WECA8'
//           WECAD  codep:0x224c wordp:0xecad size:0x000a C-string:'WECAD'
//           WECB9  codep:0x224c wordp:0xecb9 size:0x0008 C-string:'WECB9'
//           WECC3  codep:0x224c wordp:0xecc3 size:0x000a C-string:'WECC3'
//           WECCF  codep:0x224c wordp:0xeccf size:0x000c C-string:'WECCF'
//           WECDD  codep:0x224c wordp:0xecdd size:0x001c C-string:'WECDD'
//           WECFB  codep:0x224c wordp:0xecfb size:0x001c C-string:'WECFB'
//           WED19  codep:0x224c wordp:0xed19 size:0x0016 C-string:'WED19'
//           WED31  codep:0x224c wordp:0xed31 size:0x000a C-string:'WED31'
//           WED3D  codep:0x224c wordp:0xed3d size:0x000a C-string:'WED3D'
//           WED49  codep:0x224c wordp:0xed49 size:0x0010 C-string:'WED49'
//           WED5B  codep:0x224c wordp:0xed5b size:0x001c C-string:'WED5B'
//           WED79  codep:0x224c wordp:0xed79 size:0x0010 C-string:'WED79'
//           WED8B  codep:0x224c wordp:0xed8b size:0x0010 C-string:'WED8B'
//           WED9D  codep:0x224c wordp:0xed9d size:0x0010 C-string:'WED9D'
//           WEDAF  codep:0x224c wordp:0xedaf size:0x0030 C-string:'WEDAF'
//           WEDE1  codep:0x224c wordp:0xede1 size:0x001e C-string:'WEDE1'
//           WEE01  codep:0x224c wordp:0xee01 size:0x0012 C-string:'WEE01'
//           WEE15  codep:0x224c wordp:0xee15 size:0x0036 C-string:'WEE15'
//           WEE4D  codep:0x224c wordp:0xee4d size:0x0042 C-string:'WEE4D'
//           WEE91  codep:0x224c wordp:0xee91 size:0x003a C-string:'WEE91'
//           WEECD  codep:0x73ea wordp:0xeecd size:0x0006 C-string:'WEECD'
//           WEED5  codep:0x73ea wordp:0xeed5 size:0x0006 C-string:'WEED5'
//           WEEDD  codep:0x73ea wordp:0xeedd size:0x0006 C-string:'WEEDD'
//           WEEE5  codep:0x73ea wordp:0xeee5 size:0x0006 C-string:'WEEE5'
//           WEEED  codep:0x73ea wordp:0xeeed size:0x0006 C-string:'WEEED'
//           WEEF5  codep:0x73ea wordp:0xeef5 size:0x0006 C-string:'WEEF5'
//           WEEFD  codep:0x73ea wordp:0xeefd size:0x0006 C-string:'WEEFD'
//           WEF05  codep:0x73ea wordp:0xef05 size:0x0006 C-string:'WEF05'
//           WEF0D  codep:0x73ea wordp:0xef0d size:0x0006 C-string:'WEF0D'
//           WEF15  codep:0x73ea wordp:0xef15 size:0x0006 C-string:'WEF15'
//           WEF1D  codep:0x73ea wordp:0xef1d size:0x0006 C-string:'WEF1D'
//           WEF25  codep:0x73ea wordp:0xef25 size:0x0006 C-string:'WEF25'
//           WEF2D  codep:0x73ea wordp:0xef2d size:0x0006 C-string:'WEF2D'
//           WEF35  codep:0x73ea wordp:0xef35 size:0x0006 C-string:'WEF35'
//           WEF3D  codep:0x73ea wordp:0xef3d size:0x0006 C-string:'WEF3D'
//           WEF45  codep:0x73ea wordp:0xef45 size:0x0006 C-string:'WEF45'
//           WEF4D  codep:0x73ea wordp:0xef4d size:0x0006 C-string:'WEF4D'
//           WEF55  codep:0x73ea wordp:0xef55 size:0x0006 C-string:'WEF55'
//           WEF5D  codep:0x73ea wordp:0xef5d size:0x0006 C-string:'WEF5D'
//           WEF65  codep:0x73ea wordp:0xef65 size:0x0006 C-string:'WEF65'
//           WEF6D  codep:0x73ea wordp:0xef6d size:0x0006 C-string:'WEF6D'
//           WEF75  codep:0x224c wordp:0xef75 size:0x0012 C-string:'WEF75'
//           WEF89  codep:0x224c wordp:0xef89 size:0x003a C-string:'WEF89'
//           WEFC5  codep:0x224c wordp:0xefc5 size:0x003a C-string:'WEFC5'
//           WF001  codep:0x224c wordp:0xf001 size:0x0008 C-string:'WF001'
//           WF00B  codep:0x224c wordp:0xf00b size:0x001e C-string:'WF00B'
//           WF02B  codep:0x224c wordp:0xf02b size:0x004c C-string:'WF02B'
//           WF079  codep:0x224c wordp:0xf079 size:0x004c C-string:'WF079'
//           WF0C7  codep:0x224c wordp:0xf0c7 size:0x002e C-string:'WF0C7'
//           WF0F7  codep:0x224c wordp:0xf0f7 size:0x004a C-string:'WF0F7'
//           WF143  codep:0x224c wordp:0xf143 size:0x001e C-string:'WF143'
//           WF163  codep:0x224c wordp:0xf163 size:0x0024 C-string:'WF163'
//           WF189  codep:0x224c wordp:0xf189 size:0x0010 C-string:'WF189'
//           WF19B  codep:0x224c wordp:0xf19b size:0x0024 C-string:'WF19B'
//           WF1C1  codep:0x224c wordp:0xf1c1 size:0x0044 C-string:'WF1C1'
//           WF207  codep:0x224c wordp:0xf207 size:0x003c C-string:'WF207'
//           WF245  codep:0x224c wordp:0xf245 size:0x0024 C-string:'WF245'
//           WF26B  codep:0x224c wordp:0xf26b size:0x0032 C-string:'WF26B'
//           WF29F  codep:0x224c wordp:0xf29f size:0x001a C-string:'WF29F'
//           WF2BB  codep:0x224c wordp:0xf2bb size:0x0030 C-string:'WF2BB'
//           WF2ED  codep:0x224c wordp:0xf2ed size:0x001e C-string:'WF2ED'
//           WF30D  codep:0x224c wordp:0xf30d size:0x000c C-string:'WF30D'
//           WF31B  codep:0x224c wordp:0xf31b size:0x000a C-string:'WF31B'
//           WF327  codep:0x224c wordp:0xf327 size:0x002a C-string:'WF327'
//          ?EXIST  codep:0x224c wordp:0xf35c size:0x0084 C-string:'IsEXIST'
//           WF3E2  codep:0x224c wordp:0xf3e2 size:0x0008 C-string:'WF3E2'
//           WF3EC  codep:0x224c wordp:0xf3ec size:0x0008 C-string:'WF3EC'
//           WF3F6  codep:0x224c wordp:0xf3f6 size:0x0008 C-string:'WF3F6'
//           WF400  codep:0x224c wordp:0xf400 size:0x002a C-string:'WF400'
//           WF42C  codep:0x224c wordp:0xf42c size:0x0014 C-string:'WF42C'
//           WF442  codep:0x224c wordp:0xf442 size:0x0010 C-string:'WF442'
//           WF454  codep:0x224c wordp:0xf454 size:0x0012 C-string:'WF454'
//           WF468  codep:0x224c wordp:0xf468 size:0x0028 C-string:'WF468'
//           WF492  codep:0x224c wordp:0xf492 size:0x0036 C-string:'WF492'
//          POPULA  codep:0x224c wordp:0xf4d3 size:0x0000 C-string:'POPULA'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_MOVED; // MOVED
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern LoadDataType ART_dash_VOL; // ART-VOL
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType INST_dash_DATE; // INST-DATE
void D_st_(); // D<
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_eq_(); // D=
void RRND(); // RRND
void ACELLADDR(); // ACELLADDR
void A_at_(); // A@
void SETLARRAY(); // SETLARRAY
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void _2_ex_(); // 2!
void OFF(); // OFF
void GetRECORD(); // @RECORD
void StoreINST_dash_SPECIES(); // !INST-SPECIES
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void INEXT(); // INEXT
void IPREV(); // IPREV
void ILAST(); // ILAST
void IINSERT(); // IINSERT
void IEXTRACT(); // IEXTRACT
void GetNEWSPACE(); // @NEWSPACE
void MAXSPACE(); // MAXSPACE
void IFLD_at_(); // IFLD@
void IsCLASS_slash_SPECIES(); // ?CLASS/SPECIES
void IFIND(); // IFIND
void ALL(); // ALL
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void IsINVIS(); // ?INVIS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEC36 = 0xec36; // WEC36 size: 2
// {0x01, 0x00}


const unsigned short int cc_WEC16 = 0xec16; // WEC16
const unsigned short int cc_WEC1A = 0xec1a; // WEC1A
const unsigned short int cc_WEC1E = 0xec1e; // WEC1E
const unsigned short int cc_WEC22 = 0xec22; // WEC22


// 0xec12: db 0x93 0x00 '  '

// ================================================
// 0xec14: WORD 'WEC16' codep=0x2214 wordp=0xec16
// ================================================
// orphan
// 0xec16: dw 0x0020

// ================================================
// 0xec18: WORD 'WEC1A' codep=0x2214 wordp=0xec1a
// ================================================
// 0xec1a: dw 0x0043

// ================================================
// 0xec1c: WORD 'WEC1E' codep=0x2214 wordp=0xec1e
// ================================================
// 0xec1e: dw 0x0044

// ================================================
// 0xec20: WORD 'WEC22' codep=0x2214 wordp=0xec22
// ================================================
// 0xec22: dw 0x001c

// ================================================
// 0xec24: WORD 'WEC26' codep=0x73ea wordp=0xec26
// ================================================
LoadDataType WEC26 = {PLANETIDX, 0x0f, 0x01, 0x16, 0x658f};

// ================================================
// 0xec2c: WORD 'WEC2E' codep=0x73ea wordp=0xec2e
// ================================================
LoadDataType WEC2E = {PLANETIDX, 0x10, 0x01, 0x16, 0x658f};

// ================================================
// 0xec34: WORD 'WEC36' codep=0x1d29 wordp=0xec36
// ================================================
// 0xec36: db 0x01 0x00 '  '

// ================================================
// 0xec38: WORD 'WEC3A' codep=0x73ea wordp=0xec3a
// ================================================
LoadDataType WEC3A = {PLANETIDX, 0x0c, 0x01, 0x16, 0x658f};

// ================================================
// 0xec40: WORD 'WEC42' codep=0x73ea wordp=0xec42
// ================================================
LoadDataType WEC42 = {PLANETIDX, 0x0d, 0x01, 0x16, 0x658f};

// ================================================
// 0xec48: WORD 'WEC4A' codep=0x73ea wordp=0xec4a
// ================================================
LoadDataType WEC4A = {PLANETIDX, 0x0e, 0x01, 0x16, 0x658f};

// ================================================
// 0xec50: WORD 'WEC52' codep=0x73ea wordp=0xec52
// ================================================
LoadDataType WEC52 = {PLANETIDX, 0x09, 0x01, 0x16, 0x658f};

// ================================================
// 0xec58: WORD 'WEC5A' codep=0x73ea wordp=0xec5a
// ================================================
LoadDataType WEC5A = {REGIONSIDX, 0x1b, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xec60: WORD 'WEC62' codep=0x744d wordp=0xec62
// ================================================
// orphan
IFieldType WEC62 = {REGIONSIDX, 0x0b, 0x02};

// ================================================
// 0xec65: WORD 'WEC67' codep=0x73ea wordp=0xec67
// ================================================
LoadDataType WEC67 = {CREATUREIDX, 0x0a, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xec6d: WORD 'WEC6F' codep=0x73ea wordp=0xec6f
// ================================================
LoadDataType WEC6F = {CREATUREIDX, 0x34, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xec75: WORD 'WEC77' codep=0x744d wordp=0xec77
// ================================================
IFieldType WEC77 = {CREATUREIDX, 0x11, 0x01};

// ================================================
// 0xec7a: WORD 'WEC7C' codep=0x744d wordp=0xec7c
// ================================================
IFieldType WEC7C = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xec7f: WORD 'WEC81' codep=0x73ea wordp=0xec81
// ================================================
LoadDataType WEC81 = {CREATUREIDX, 0x33, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xec87: WORD 'WEC89' codep=0x744d wordp=0xec89
// ================================================
IFieldType WEC89 = {CREATUREIDX, 0x12, 0x01};

// ================================================
// 0xec8c: WORD 'WEC8E' codep=0x744d wordp=0xec8e
// ================================================
IFieldType WEC8E = {CREATUREIDX, 0x18, 0x03};

// ================================================
// 0xec91: WORD 'WEC93' codep=0x744d wordp=0xec93
// ================================================
IFieldType WEC93 = {CREATUREIDX, 0x13, 0x01};

// ================================================
// 0xec96: WORD 'WEC98' codep=0x73ea wordp=0xec98
// ================================================
LoadDataType WEC98 = {CREATUREIDX, 0x37, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xec9e: WORD 'WECA0' codep=0x73ea wordp=0xeca0
// ================================================
LoadDataType WECA0 = {CREATUREIDX, 0x3a, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xeca6: WORD 'WECA8' codep=0x744d wordp=0xeca8
// ================================================
IFieldType WECA8 = {CREATUREIDX, 0x1b, 0x01};

// ================================================
// 0xecab: WORD 'WECAD' codep=0x224c wordp=0xecad params=0 returns=1
// ================================================
// orphan

void WECAD() // WECAD
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xecb7: WORD 'WECB9' codep=0x224c wordp=0xecb9 params=0 returns=1
// ================================================
// orphan

void WECB9() // WECB9
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xecc1: WORD 'WECC3' codep=0x224c wordp=0xecc3 params=0 returns=1
// ================================================
// orphan

void WECC3() // WECC3
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xeccd: WORD 'WECCF' codep=0x224c wordp=0xeccf params=2 returns=2
// ================================================
// orphan

void WECCF() // WECCF
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xecdb: WORD 'WECDD' codep=0x224c wordp=0xecdd params=0 returns=2
// ================================================

void WECDD() // WECDD
{
  Push(Read16(pp_XABS)); // XABS @
  Push(0x0012);
  _slash_(); // /
  Push(Pop() * 0x0012); //  0x0012 *
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x0013); //  0x0013 +
  RRND(); // RRND
}


// ================================================
// 0xecf9: WORD 'WECFB' codep=0x224c wordp=0xecfb params=0 returns=2
// ================================================

void WECFB() // WECFB
{
  Push(Read16(pp_YABS)); // YABS @
  Push(0x001e);
  _slash_(); // /
  Push(Pop() * 0x001e); //  0x001e *
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x001f); //  0x001f +
  RRND(); // RRND
}


// ================================================
// 0xed17: WORD 'WED19' codep=0x224c wordp=0xed19
// ================================================

void WED19() // WED19
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WEC26); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEC2E); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed2f: WORD 'WED31' codep=0x224c wordp=0xed31 params=0 returns=2
// ================================================

void WED31() // WED31
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xed3b: WORD 'WED3D' codep=0x224c wordp=0xed3d params=2 returns=0
// ================================================

void WED3D() // WED3D
{
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xed47: WORD 'WED49' codep=0x224c wordp=0xed49
// ================================================

void WED49() // WED49
{
  _2DUP(); // 2DUP
  IsINVIS(); // ?INVIS
  Push((Pop()==0?1:0) | (Read16(pp_MOVED)==0?1:0)); //  0= MOVED @ 0= OR
}


// ================================================
// 0xed59: WORD 'WED5B' codep=0x224c wordp=0xed5b params=2 returns=2
// ================================================

void WED5B() // WED5B
{
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  SWAP(); // SWAP
  Push(Pop() - (Read16(pp_XCON) + 1)); //  XCON @ 1+ -
  SWAP(); // SWAP
  Push(Pop() - (Read16(pp_YCON) + 1)); //  YCON @ 1+ -
}


// ================================================
// 0xed77: WORD 'WED79' codep=0x224c wordp=0xed79
// ================================================

void WED79() // WED79
{
  _2DUP(); // 2DUP
  WED5B(); // WED5B
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0020);
  _gt_(); // >
}


// ================================================
// 0xed89: WORD 'WED8B' codep=0x224c wordp=0xed8b
// ================================================

void WED8B() // WED8B
{
  _2DUP(); // 2DUP
  WED5B(); // WED5B
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0040);
  _st_(); // <
}


// ================================================
// 0xed9b: WORD 'WED9D' codep=0x224c wordp=0xed9d
// ================================================

void WED9D() // WED9D
{
  _2DUP(); // 2DUP
  WED5B(); // WED5B
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x003f);
  _gt_(); // >
}


// ================================================
// 0xedad: WORD 'WEDAF' codep=0x224c wordp=0xedaf
// ================================================

void WEDAF() // WEDAF
{
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(regsp)); // DUP
  Push(0x01e0);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x03c0);
    SWAP(); // SWAP
    _dash_(); // -
  }
  Push(0x01e0);
  WED19(); // WED19
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xeddf: WORD 'WEDE1' codep=0x224c wordp=0xede1 params=0 returns=0
// ================================================

void WEDE1() // WEDE1
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x0029?1:0); //  0x0029 =
  if (Pop() == 0) return;
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Read16(regsp)); // DUP
  Push(3);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Pop() + 2); //  2+
  }
  StoreINST_dash_SPECIES(); // !INST-SPECIES
}


// ================================================
// 0xedff: WORD 'WEE01' codep=0x224c wordp=0xee01
// ================================================

void WEE01() // WEE01
{
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xede1); // 'WEDE1'
  ALL(); // ALL
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee13: WORD 'WEE15' codep=0x224c wordp=0xee15
// ================================================

void WEE15() // WEE15
{
  LoadData(WEC6F); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x63ef+WEC77.offset); // WEC77<IFIELD>
  C_ex_(); // C!
  Push(0);
  Push(0x63ef+WEC7C.offset); // WEC7C<IFIELD>
  C_ex_(); // C!
  LoadData(WECA0); // from 'CREATURE'
  Push(Read16(Pop())); //  @
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  LoadData(WEC98); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x63ef+WEC93.offset); // WEC93<IFIELD>
  C_ex_(); // C!
  Push2Words("0.");
  Push(0x63ef+WEC8E.offset); // WEC8E<IFIELD>
  _1_dot_5_ex_(); // 1.5!
  Push(0);
  Push(0x63ef+WECA8.offset); // WECA8<IFIELD>
  C_ex_(); // C!
  LoadData(WEC81); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x63ef+WEC89.offset); // WEC89<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee4b: WORD 'WEE4D' codep=0x224c wordp=0xee4d
// ================================================

void WEE4D() // WEE4D
{
  unsigned short int a, b, c, d;
  WECDD(); // WECDD
  WECFB(); // WECFB
  WED79(); // WED79
  a = Pop(); // >R
  WED49(); // WED49
  b = Pop(); // >R
  WED8B(); // WED8B
  Push(Pop() & (b & a)); //  R> R> AND AND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    c = Pop(); // >R
    d = Pop(); // >R
    Push(Read16(cc_WEC1E)); // WEC1E
    Push(3);
    PICK(); // PICK
    Push(1);
    _star_CREATE(); // *CREATE
    ILAST(); // ILAST
    Push(d); // R>
    Push(c); // R>
    WED3D(); // WED3D
    WEE15(); // WEE15
    Push(1);
    Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
    _plus__ex__2(); // +!_2
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xee8f: WORD 'WEE91' codep=0x224c wordp=0xee91
// ================================================

void WEE91() // WEE91
{
  unsigned short int i, imax, a;
  Push(Read16(cc_WEC1E)); // WEC1E
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  Push(0);
  Push(Read16(pp_PLHI)); // PLHI @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_RECORD_n_); // RECORD#
    _st__ex__gt_(); // <!>
    LoadData(WEC67); // from 'CREATURE'
    Push(Read16(Pop())&0xFF); //  C@
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(i); // I
      SWAP(); // SWAP
      a = Pop(); // >R
      SWAP(); // SWAP
      Push(a + 1); // R> 1+
    }
    i++;
  } while(i<imax); // (LOOP)

  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xeecb: WORD 'WEECD' codep=0x73ea wordp=0xeecd
// ================================================
// orphan
LoadDataType WEECD = {CREATUREIDX, 0x02, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xeed3: WORD 'WEED5' codep=0x73ea wordp=0xeed5
// ================================================
// orphan
LoadDataType WEED5 = {CREATUREIDX, 0x04, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xeedb: WORD 'WEEDD' codep=0x73ea wordp=0xeedd
// ================================================
// orphan
LoadDataType WEEDD = {CREATUREIDX, 0x07, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xeee3: WORD 'WEEE5' codep=0x73ea wordp=0xeee5
// ================================================
LoadDataType WEEE5 = {CREATUREIDX, 0x0b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xeeeb: WORD 'WEEED' codep=0x73ea wordp=0xeeed
// ================================================
LoadDataType WEEED = {CREATUREIDX, 0x0d, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xeef3: WORD 'WEEF5' codep=0x73ea wordp=0xeef5
// ================================================
LoadDataType WEEF5 = {CREATUREIDX, 0x10, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xeefb: WORD 'WEEFD' codep=0x73ea wordp=0xeefd
// ================================================
LoadDataType WEEFD = {CREATUREIDX, 0x13, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef03: WORD 'WEF05' codep=0x73ea wordp=0xef05
// ================================================
LoadDataType WEF05 = {CREATUREIDX, 0x16, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef0b: WORD 'WEF0D' codep=0x73ea wordp=0xef0d
// ================================================
LoadDataType WEF0D = {CREATUREIDX, 0x19, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xef13: WORD 'WEF15' codep=0x73ea wordp=0xef15
// ================================================
LoadDataType WEF15 = {CREATUREIDX, 0x1a, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef1b: WORD 'WEF1D' codep=0x73ea wordp=0xef1d
// ================================================
LoadDataType WEF1D = {CREATUREIDX, 0x1d, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xef23: WORD 'WEF25' codep=0x73ea wordp=0xef25
// ================================================
LoadDataType WEF25 = {CREATUREIDX, 0x1e, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef2b: WORD 'WEF2D' codep=0x73ea wordp=0xef2d
// ================================================
LoadDataType WEF2D = {CREATUREIDX, 0x21, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xef33: WORD 'WEF35' codep=0x73ea wordp=0xef35
// ================================================
LoadDataType WEF35 = {CREATUREIDX, 0x22, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef3b: WORD 'WEF3D' codep=0x73ea wordp=0xef3d
// ================================================
LoadDataType WEF3D = {CREATUREIDX, 0x25, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xef43: WORD 'WEF45' codep=0x73ea wordp=0xef45
// ================================================
LoadDataType WEF45 = {CREATUREIDX, 0x26, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef4b: WORD 'WEF4D' codep=0x73ea wordp=0xef4d
// ================================================
LoadDataType WEF4D = {CREATUREIDX, 0x29, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef53: WORD 'WEF55' codep=0x73ea wordp=0xef55
// ================================================
LoadDataType WEF55 = {CREATUREIDX, 0x2e, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xef5b: WORD 'WEF5D' codep=0x73ea wordp=0xef5d
// ================================================
LoadDataType WEF5D = {CREATUREIDX, 0x9b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xef63: WORD 'WEF65' codep=0x73ea wordp=0xef65
// ================================================
// orphan
LoadDataType WEF65 = {PLANETIDX, 0x0a, 0x01, 0x16, 0x658f};

// ================================================
// 0xef6b: WORD 'WEF6D' codep=0x73ea wordp=0xef6d
// ================================================
// orphan
LoadDataType WEF6D = {PLANETIDX, 0x0b, 0x01, 0x16, 0x658f};

// ================================================
// 0xef73: WORD 'WEF75' codep=0x224c wordp=0xef75 params=0 returns=0
// ================================================

void WEF75() // WEF75
{
  Push(Read16(cc_WEC1E)); // WEC1E
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xef87: WORD 'WEF89' codep=0x224c wordp=0xef89
// ================================================

void WEF89() // WEF89
{
  LoadData(WEEE5); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEF0D); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEF05); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(WEEED); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(WEEF5); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(WEF1D); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEF15); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(WEF4D); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(WEF2D); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEF25); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(WEF45); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(WEF3D); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEF35); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(WEEFD); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xefc3: WORD 'WEFC5' codep=0x224c wordp=0xefc5
// ================================================

void WEFC5() // WEFC5
{
  LoadData(WEEFD); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(WEF35); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(WEF3D); // from 'CREATURE'
  C_ex_(); // C!
  LoadData(WEF45); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(WEF25); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(WEF2D); // from 'CREATURE'
  C_ex_(); // C!
  LoadData(WEF4D); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(WEF15); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(WEF1D); // from 'CREATURE'
  C_ex_(); // C!
  LoadData(WEEF5); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(WEEED); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(WEF05); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(WEF0D); // from 'CREATURE'
  C_ex_(); // C!
  LoadData(WEEE5); // from 'CREATURE'
  C_ex_(); // C!
}


// ================================================
// 0xefff: WORD 'WF001' codep=0x224c wordp=0xf001
// ================================================

void WF001() // WF001
{
  LoadData(WEF55); // from 'CREATURE'
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
}


// ================================================
// 0xf009: WORD 'WF00B' codep=0x224c wordp=0xf00b
// ================================================

void WF00B() // WF00B
{
  Push(0xef55); // 'WEF55'
  while(1)
  {
    Push(Read16(regsp)); // DUP
    IFLD_at_(); // IFLD@
    Push(Pop()==0?1:0); //  0=
    if (Pop() == 0) break;

    Push(-1);
    Push(pp_RECORD_n_); // RECORD#
    _st__plus__ex__gt_(); // <+!>
    WEF75(); // WEF75
  }
  Pop(); // DROP
}


// ================================================
// 0xf029: WORD 'WF02B' codep=0x224c wordp=0xf02b
// ================================================

void WF02B() // WF02B
{
  unsigned short int a;
  OVER(); // OVER
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  WEF75(); // WEF75
  LoadData(WEF5D); // from 'CREATURE'
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() == 0) return;
  WF001(); // WF001
  Push(Pop() & !(Read16(pp_RECORD_n_)==0?1:0)); //  RECORD# @ 0= NOT AND
  if (Pop() != 0)
  {
    Push(Read16(pp_RECORD_n_)); // RECORD# @
    a = Pop(); // >R
    WF00B(); // WF00B
    WEF89(); // WEF89
    Push(a); // R>
    Push(pp_RECORD_n_); // RECORD#
    _st__ex__gt_(); // <!>
    WEF75(); // WEF75
    WEFC5(); // WEFC5
  }
  Push(0xcd40); // 'OTHER-PAR'
  MODULE(); // MODULE
  OVER(); // OVER
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  WEF75(); // WEF75
  Push(1);
  LoadData(WEF5D); // from 'CREATURE'
  C_ex_(); // C!
}


// ================================================
// 0xf077: WORD 'WF079' codep=0x224c wordp=0xf079
// ================================================

void WF079() // WF079
{
  unsigned short int a, i, imax, b, j, jmax;
  WEDAF(); // WEDAF
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  WEE91(); // WEE91
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  Push(Read16(cc_WEC1A)); // WEC1A
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  LoadData(WEC5A); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  SWAP(); // SWAP
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    OVER(); // OVER
    RRND(); // RRND
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      b = Pop(); // >R
      WF02B(); // WF02B
      Push(b); // R>
      Push(0);

      j = Pop();
      jmax = Pop();
      do // (DO)
      {
        WEE4D(); // WEE4D
        j++;
      } while(j<jmax); // (LOOP)

    }
    SWAP(); // SWAP
    Pop(); // DROP
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf0c5: WORD 'WF0C7' codep=0x224c wordp=0xf0c7
// ================================================

void WF0C7() // WF0C7
{
  LoadData(WEC3A); // from 'PLANET'
  Push(!((Read16(Pop())&0xFF)==6?1:0)); //  C@ 6 = NOT
  if (Pop() != 0)
  {
    while(1)
    {
      Push(1);
      Push(0x0017);
      RRND(); // RRND
      Push(Read16(regsp)); // DUP
      Push(Pop()==6?1:0); //  6 =
      if (Pop() == 0) break;

      Pop(); // DROP
    }
    return;
  }
  Push(6);
}


// ================================================
// 0xf0f5: WORD 'WF0F7' codep=0x224c wordp=0xf0f7
// ================================================

void WF0F7() // WF0F7
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(0x0032);
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    LoadData(WEC3A); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    LoadData(WEC42); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  Push(0x005a);
  _st_(); // <
  if (Pop() != 0)
  {
    LoadData(WEC4A); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  WF0C7(); // WF0C7
}


// ================================================
// 0xf141: WORD 'WF143' codep=0x224c wordp=0xf143 params=0 returns=0
// ================================================

void WF143() // WF143
{
  unsigned short int a;
  Push(0x001c);
  Push(1);
  IsCLASS_slash_SPECIES(); // ?CLASS/SPECIES
  a = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(a); // R>
  if (Pop() == 0) return;
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  Push(0x5239); // '*SP'
  _2_ex_(); // 2!
}


// ================================================
// 0xf161: WORD 'WF163' codep=0x224c wordp=0xf163
// ================================================

void WF163() // WF163
{
  Push(0x001a);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  WED3D(); // WED3D
  Push(0x000a);
  Push(0x0064);
  RRND(); // RRND
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xf187: WORD 'WF189' codep=0x224c wordp=0xf189 params=2 returns=1
// ================================================

void WF189() // WF189
{
  do
  {
    Push(-1);
    Push(2);
    RRND(); // RRND
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf199: WORD 'WF19B' codep=0x224c wordp=0xf19b params=2 returns=0
// ================================================

void WF19B() // WF19B
{
  Push(0);
  Push(Read16(pp_WEC36)); // WEC36 @
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    WF189(); // WF189
    SWAP(); // SWAP
    WF189(); // WF189
    SWAP(); // SWAP
    Push(6);
    WF163(); // WF163
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf1bf: WORD 'WF1C1' codep=0x224c wordp=0xf1c1
// ================================================

void WF1C1() // WF1C1
{
  unsigned short int i, imax, a;
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WEC52); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x000a);
    _slash_(); // /
    Push(0);
    SWAP(); // SWAP
    RRND(); // RRND
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      WECDD(); // WECDD
      WECFB(); // WECFB
      WED9D(); // WED9D
      a = Pop(); // >R
      WED49(); // WED49
      Push(Pop() & a); //  R> AND
      if (Pop() != 0)
      {
        WF0F7(); // WF0F7
        WF163(); // WF163
        ICLOSE(); // ICLOSE
      } else
      {
        Pop(); Pop(); // 2DROP
      }
      i++;
    } while(i<imax); // (LOOP)

  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf205: WORD 'WF207' codep=0x224c wordp=0xf207
// ================================================

void WF207() // WF207
{
  unsigned short int a, b;
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0);
  a = Pop(); // >R
  while(1)
  {
    Push(0x0029);
    Push(0);
    IFIND(); // IFIND
    Push(Read16(a)); // R@
    Push(Pop()==0?1:0); //  0=
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) break;

    _2DUP(); // 2DUP
    WED31(); // WED31
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Push(a); // R>
      Pop(); // DROP
      Push(1);
      b = Pop(); // >R
    }
    INEXT(); // INEXT
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(a); // R>
}


// ================================================
// 0xf243: WORD 'WF245' codep=0x224c wordp=0xf245 params=0 returns=1
// ================================================

void WF245() // WF245
{
  Push(0x0010);
  Push(0x0030);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(0x002e);
  _gt_(); // >
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0x002f);
  Push(0x0033);
  RRND(); // RRND
}


// ================================================
// 0xf269: WORD 'WF26B' codep=0x224c wordp=0xf26b params=0 returns=0
// ================================================

void WF26B() // WF26B
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) return;
  Push(Read16(cc_WEC22)); // WEC22
  WF245(); // WF245
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  _2DUP(); // 2DUP
  WED3D(); // WED3D
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf29d: WORD 'WF29F' codep=0x224c wordp=0xf29f
// ================================================

void WF29F() // WF29F
{
  unsigned short int a;
  do
  {
    WECDD(); // WECDD
    WECFB(); // WECFB
    WED49(); // WED49
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
    }
    Push(a); // R>
  } while(Pop() == 0);
}


// ================================================
// 0xf2b9: WORD 'WF2BB' codep=0x224c wordp=0xf2bb
// ================================================

void WF2BB() // WF2BB
{
  unsigned short int a;
  WF29F(); // WF29F
  WED79(); // WED79
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  if (Pop() != 0)
  {
    ROT(); // ROT
    Push(0x0029);
    SWAP(); // SWAP
    ICREATE(); // ICREATE
    _2DUP(); // 2DUP
    Push(pp_THIS_dash_RE); // THIS-RE
    _1_dot_5_at_(); // 1.5@
    IINSERT(); // IINSERT
    _gt_C_plus_S(); // >C+S
    _2DUP(); // 2DUP
    WED3D(); // WED3D
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); // DROP
  }
  Push(a); // R>
}


// ================================================
// 0xf2eb: WORD 'WF2ED' codep=0x224c wordp=0xf2ed params=1 returns=3
// ================================================

void WF2ED() // WF2ED
{
  Push(0x001e);
  _slash_(); // /
  Push(Pop() * 0x001e); //  0x001e *
  SWAP(); // SWAP
  Push(0x0012);
  _slash_(); // /
  Push(Pop() * 0x0012); //  0x0012 *
  SWAP(); // SWAP
}


// ================================================
// 0xf30b: WORD 'WF30D' codep=0x224c wordp=0xf30d params=0 returns=4
// ================================================

void WF30D() // WF30D
{
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  WED31(); // WED31
  WF2ED(); // WF2ED
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf319: WORD 'WF31B' codep=0x224c wordp=0xf31b params=0 returns=3
// ================================================

void WF31B() // WF31B
{
  WED31(); // WED31
  WF2ED(); // WF2ED
  _2OVER(); // 2OVER
  D_eq_(); // D=
}


// ================================================
// 0xf325: WORD 'WF327' codep=0x224c wordp=0xf327
// ================================================

void WF327() // WF327
{
  Push(Pop()==0x001c?1:0); //  0x001c =
  if (Pop() != 0)
  {
    Push(3);
  } else
  {
    Push(3);
  }
  Push(0x0029);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  WED3D(); // WED3D
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf351: WORD '?EXIST' codep=0x224c wordp=0xf35c params=1 returns=0
// ================================================

void IsEXIST() // ?EXIST
{
  unsigned short int a, b, c, d;
  a = Pop(); // >R
  Push(1);
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  while(1)
  {
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) break;

    Push(Read16(a)); // R@
    Push(0);
    IFIND(); // IFIND
    Push(Read16(regsp)); // DUP
    b = Pop(); // >R
    if (Pop() != 0)
    {
      WF30D(); // WF30D
      WF31B(); // WF31B
      if (Pop() != 0)
      {
        WED31(); // WED31
        Push(0x0029);
        Push(4);
        IsCLASS_slash_SPECIES(); // ?CLASS/SPECIES
        c = Pop(); // >R
        Pop(); Pop(); // 2DROP
        Push(c); // R>
        if (Pop() != 0)
        {
          _2DUP(); // 2DUP
          WF19B(); // WF19B
        }
        WF143(); // WF143
        IEXTRACT(); // IEXTRACT
        IPREV(); // IPREV
        Push(pp_THIS_dash_RE); // THIS-RE
        _1_dot_5_at_(); // 1.5@
        IINSERT(); // IINSERT
        Push(!(a==0x0029?1:0)); // I' 0x0029 = NOT
        d = Pop(); // >R
        WF207(); // WF207
        Push(!Pop() & d); //  NOT R> AND
        if (Pop() != 0)
        {
          Push(a); // I'
          WF327(); // WF327
        } else
        {
          Pop(); Pop(); // 2DROP
        }
      }
      Pop(); Pop(); // 2DROP
    }
    INEXT(); // INEXT
    Push(b); // R>
  }
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf3e0: WORD 'WF3E2' codep=0x224c wordp=0xf3e2 params=0 returns=0
// ================================================

void WF3E2() // WF3E2
{
  Push(0x001b);
  IsEXIST(); // ?EXIST
}


// ================================================
// 0xf3ea: WORD 'WF3EC' codep=0x224c wordp=0xf3ec params=0 returns=0
// ================================================

void WF3EC() // WF3EC
{
  Push(0x001c);
  IsEXIST(); // ?EXIST
}


// ================================================
// 0xf3f4: WORD 'WF3F6' codep=0x224c wordp=0xf3f6 params=0 returns=0
// ================================================

void WF3F6() // WF3F6
{
  Push(0x0029);
  IsEXIST(); // ?EXIST
}


// ================================================
// 0xf3fe: WORD 'WF400' codep=0x224c wordp=0xf400
// ================================================

void WF400() // WF400
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  while(1)
  {
    Push(0x001b);
    Push(0);
    IFIND(); // IFIND
    WED31(); // WED31
    Push2Words("NULL");
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) break;

    INEXT(); // INEXT
  }
  WED31(); // WED31
  Push2Words("NULL");
  D_eq_(); // D=
}


// ================================================
// 0xf42a: WORD 'WF42C' codep=0x224c wordp=0xf42c
// ================================================

void WF42C() // WF42C
{
  WF400(); // WF400
  Push(1);
  Push(0x0064);
  RRND(); // RRND
  Push(0x0032);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf440: WORD 'WF442' codep=0x224c wordp=0xf442 params=2 returns=0
// ================================================

void WF442() // WF442
{
  WED3D(); // WED3D
  Push(0x63ef+INST_dash_DATE.offset); // INST-DATE<IFIELD>
  OFF(); // OFF
  IEXTRACT(); // IEXTRACT
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
}


// ================================================
// 0xf452: WORD 'WF454' codep=0x224c wordp=0xf454
// ================================================

void WF454() // WF454
{
  WF42C(); // WF42C
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    WF442(); // WF442
    WEE01(); // WEE01
  }
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf466: WORD 'WF468' codep=0x224c wordp=0xf468
// ================================================

void WF468() // WF468
{
  unsigned short int a;
  Push(0);
  Push(0x0140);
  ROT(); // ROT
  IFLD_at_(); // IFLD@
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    _dash_(); // -
    Push(0x0040);
    _slash_(); // /
    RRND(); // RRND
    Push(Pop()==0?1:0); //  0=
    return;
  }
  a = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(a); // R>
}


// ================================================
// 0xf490: WORD 'WF492' codep=0x224c wordp=0xf492
// ================================================

void WF492() // WF492
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  Push(0xef65); // 'WEF65'
  WF468(); // WF468
  if (Pop() != 0)
  {
    Push(2);
    WF2BB(); // WF2BB
    if (Pop() != 0)
    {
      WF26B(); // WF26B
    }
    WF19B(); // WF19B
  }
  Push(0xef6d); // 'WEF6D'
  WF468(); // WF468
  if (Pop() != 0)
  {
    Push(1);
    WF2BB(); // WF2BB
    if (Pop() != 0)
    {
      WF26B(); // WF26B
      WF454(); // WF454
    }
    Pop(); Pop(); // 2DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c8: WORD 'POPULA' codep=0x224c wordp=0xf4d3 params=0 returns=4
// ================================================
// entry

void POPULA() // POPULA
{
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  GetNEWSPACE(); // @NEWSPACE
  Push(0x017c);
  Push(0);
  D_plus_(); // D+
  D_st_(); // D<
  Push(!(Pop() & Read16(pp_IsCRITIC))); //  ?CRITIC @ AND NOT
  if (Pop() != 0)
  {
    Push(Read16(pp_PLHI)); // PLHI @
    if (Pop() != 0)
    {
      WF079(); // WF079
    }
    WF1C1(); // WF1C1
  }
  WF3F6(); // WF3F6
  WF3EC(); // WF3EC
  WF3E2(); // WF3E2
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  GetNEWSPACE(); // @NEWSPACE
  Push(0x017c);
  Push(0);
  D_plus_(); // D+
  D_st_(); // D<
  Push(!(Pop() & Read16(pp_IsCRITIC))); //  ?CRITIC @ AND NOT
  if (Pop() == 0) return;
  WF492(); // WF492
}

// 0xf521: db 0x53 0x45 0x45 0x44 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0xf1 0xf3 0x86 0x2e 0x53 0x54 0x4f 0x52 0xcd 0x4c 0x22 0x83 0xf4 0x36 0xf4 0xfc 0xf2 0x90 0x16 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x00 'SEEDER__________________________   .STOR L"  6     MAPS-VOC____ '

