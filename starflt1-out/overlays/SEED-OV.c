// ====== OVERLAY 'SEED-OV' ======
// store offset = 0xec00
// overlay size   = 0x0960

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xec16  codep:0x2214 parp:0xec16 size:0x0002 C-string:'UNK_0xec16'
//      UNK_0xec1a  codep:0x2214 parp:0xec1a size:0x0002 C-string:'UNK_0xec1a'
//      UNK_0xec1e  codep:0x2214 parp:0xec1e size:0x0002 C-string:'UNK_0xec1e'
//      UNK_0xec22  codep:0x2214 parp:0xec22 size:0x0002 C-string:'UNK_0xec22'
//      UNK_0xec26  codep:0x73ea parp:0xec26 size:0x0006 C-string:'UNK_0xec26'
//      UNK_0xec2e  codep:0x73ea parp:0xec2e size:0x0006 C-string:'UNK_0xec2e'
//      UNK_0xec36  codep:0x1d29 parp:0xec36 size:0x0002 C-string:'UNK_0xec36'
//      UNK_0xec3a  codep:0x73ea parp:0xec3a size:0x0006 C-string:'UNK_0xec3a'
//      UNK_0xec42  codep:0x73ea parp:0xec42 size:0x0006 C-string:'UNK_0xec42'
//      UNK_0xec4a  codep:0x73ea parp:0xec4a size:0x0006 C-string:'UNK_0xec4a'
//      UNK_0xec52  codep:0x73ea parp:0xec52 size:0x0006 C-string:'UNK_0xec52'
//      UNK_0xec5a  codep:0x73ea parp:0xec5a size:0x0006 C-string:'UNK_0xec5a'
//      UNK_0xec62  codep:0x744d parp:0xec62 size:0x0003 C-string:'UNK_0xec62'
//      UNK_0xec67  codep:0x73ea parp:0xec67 size:0x0006 C-string:'UNK_0xec67'
//      UNK_0xec6f  codep:0x73ea parp:0xec6f size:0x0006 C-string:'UNK_0xec6f'
//      UNK_0xec77  codep:0x744d parp:0xec77 size:0x0003 C-string:'UNK_0xec77'
//      UNK_0xec7c  codep:0x744d parp:0xec7c size:0x0003 C-string:'UNK_0xec7c'
//      UNK_0xec81  codep:0x73ea parp:0xec81 size:0x0006 C-string:'UNK_0xec81'
//      UNK_0xec89  codep:0x744d parp:0xec89 size:0x0003 C-string:'UNK_0xec89'
//      UNK_0xec8e  codep:0x744d parp:0xec8e size:0x0003 C-string:'UNK_0xec8e'
//      UNK_0xec93  codep:0x744d parp:0xec93 size:0x0003 C-string:'UNK_0xec93'
//      UNK_0xec98  codep:0x73ea parp:0xec98 size:0x0006 C-string:'UNK_0xec98'
//      UNK_0xeca0  codep:0x73ea parp:0xeca0 size:0x0006 C-string:'UNK_0xeca0'
//      UNK_0xeca8  codep:0x744d parp:0xeca8 size:0x0003 C-string:'UNK_0xeca8'
//      UNK_0xecad  codep:0x224c parp:0xecad size:0x000a C-string:'UNK_0xecad'
//      UNK_0xecb9  codep:0x224c parp:0xecb9 size:0x0008 C-string:'UNK_0xecb9'
//      UNK_0xecc3  codep:0x224c parp:0xecc3 size:0x000a C-string:'UNK_0xecc3'
//      UNK_0xeccf  codep:0x224c parp:0xeccf size:0x000c C-string:'UNK_0xeccf'
//      UNK_0xecdd  codep:0x224c parp:0xecdd size:0x001c C-string:'UNK_0xecdd'
//      UNK_0xecfb  codep:0x224c parp:0xecfb size:0x001c C-string:'UNK_0xecfb'
//      UNK_0xed19  codep:0x224c parp:0xed19 size:0x0016 C-string:'UNK_0xed19'
//      UNK_0xed31  codep:0x224c parp:0xed31 size:0x000a C-string:'UNK_0xed31'
//      UNK_0xed3d  codep:0x224c parp:0xed3d size:0x000a C-string:'UNK_0xed3d'
//      UNK_0xed49  codep:0x224c parp:0xed49 size:0x0010 C-string:'UNK_0xed49'
//      UNK_0xed5b  codep:0x224c parp:0xed5b size:0x001c C-string:'UNK_0xed5b'
//      UNK_0xed79  codep:0x224c parp:0xed79 size:0x0010 C-string:'UNK_0xed79'
//      UNK_0xed8b  codep:0x224c parp:0xed8b size:0x0010 C-string:'UNK_0xed8b'
//      UNK_0xed9d  codep:0x224c parp:0xed9d size:0x0010 C-string:'UNK_0xed9d'
//      UNK_0xedaf  codep:0x224c parp:0xedaf size:0x0030 C-string:'UNK_0xedaf'
//      UNK_0xede1  codep:0x224c parp:0xede1 size:0x001e C-string:'UNK_0xede1'
//      UNK_0xee01  codep:0x224c parp:0xee01 size:0x0012 C-string:'UNK_0xee01'
//      UNK_0xee15  codep:0x224c parp:0xee15 size:0x0036 C-string:'UNK_0xee15'
//      UNK_0xee4d  codep:0x224c parp:0xee4d size:0x0042 C-string:'UNK_0xee4d'
//      UNK_0xee91  codep:0x224c parp:0xee91 size:0x003a C-string:'UNK_0xee91'
//      UNK_0xeecd  codep:0x73ea parp:0xeecd size:0x0006 C-string:'UNK_0xeecd'
//      UNK_0xeed5  codep:0x73ea parp:0xeed5 size:0x0006 C-string:'UNK_0xeed5'
//      UNK_0xeedd  codep:0x73ea parp:0xeedd size:0x0006 C-string:'UNK_0xeedd'
//      UNK_0xeee5  codep:0x73ea parp:0xeee5 size:0x0006 C-string:'UNK_0xeee5'
//      UNK_0xeeed  codep:0x73ea parp:0xeeed size:0x0006 C-string:'UNK_0xeeed'
//      UNK_0xeef5  codep:0x73ea parp:0xeef5 size:0x0006 C-string:'UNK_0xeef5'
//      UNK_0xeefd  codep:0x73ea parp:0xeefd size:0x0006 C-string:'UNK_0xeefd'
//      UNK_0xef05  codep:0x73ea parp:0xef05 size:0x0006 C-string:'UNK_0xef05'
//      UNK_0xef0d  codep:0x73ea parp:0xef0d size:0x0006 C-string:'UNK_0xef0d'
//      UNK_0xef15  codep:0x73ea parp:0xef15 size:0x0006 C-string:'UNK_0xef15'
//      UNK_0xef1d  codep:0x73ea parp:0xef1d size:0x0006 C-string:'UNK_0xef1d'
//      UNK_0xef25  codep:0x73ea parp:0xef25 size:0x0006 C-string:'UNK_0xef25'
//      UNK_0xef2d  codep:0x73ea parp:0xef2d size:0x0006 C-string:'UNK_0xef2d'
//      UNK_0xef35  codep:0x73ea parp:0xef35 size:0x0006 C-string:'UNK_0xef35'
//      UNK_0xef3d  codep:0x73ea parp:0xef3d size:0x0006 C-string:'UNK_0xef3d'
//      UNK_0xef45  codep:0x73ea parp:0xef45 size:0x0006 C-string:'UNK_0xef45'
//      UNK_0xef4d  codep:0x73ea parp:0xef4d size:0x0006 C-string:'UNK_0xef4d'
//      UNK_0xef55  codep:0x73ea parp:0xef55 size:0x0006 C-string:'UNK_0xef55'
//      UNK_0xef5d  codep:0x73ea parp:0xef5d size:0x0006 C-string:'UNK_0xef5d'
//      UNK_0xef65  codep:0x73ea parp:0xef65 size:0x0006 C-string:'UNK_0xef65'
//      UNK_0xef6d  codep:0x73ea parp:0xef6d size:0x0006 C-string:'UNK_0xef6d'
//      UNK_0xef75  codep:0x224c parp:0xef75 size:0x0012 C-string:'UNK_0xef75'
//      UNK_0xef89  codep:0x224c parp:0xef89 size:0x003a C-string:'UNK_0xef89'
//      UNK_0xefc5  codep:0x224c parp:0xefc5 size:0x003a C-string:'UNK_0xefc5'
//      UNK_0xf001  codep:0x224c parp:0xf001 size:0x0008 C-string:'UNK_0xf001'
//      UNK_0xf00b  codep:0x224c parp:0xf00b size:0x001e C-string:'UNK_0xf00b'
//      UNK_0xf02b  codep:0x224c parp:0xf02b size:0x004c C-string:'UNK_0xf02b'
//      UNK_0xf079  codep:0x224c parp:0xf079 size:0x004c C-string:'UNK_0xf079'
//      UNK_0xf0c7  codep:0x224c parp:0xf0c7 size:0x002e C-string:'UNK_0xf0c7'
//      UNK_0xf0f7  codep:0x224c parp:0xf0f7 size:0x004a C-string:'UNK_0xf0f7'
//      UNK_0xf143  codep:0x224c parp:0xf143 size:0x001e C-string:'UNK_0xf143'
//      UNK_0xf163  codep:0x224c parp:0xf163 size:0x0024 C-string:'UNK_0xf163'
//      UNK_0xf189  codep:0x224c parp:0xf189 size:0x0010 C-string:'UNK_0xf189'
//      UNK_0xf19b  codep:0x224c parp:0xf19b size:0x0024 C-string:'UNK_0xf19b'
//      UNK_0xf1c1  codep:0x224c parp:0xf1c1 size:0x0044 C-string:'UNK_0xf1c1'
//      UNK_0xf207  codep:0x224c parp:0xf207 size:0x003c C-string:'UNK_0xf207'
//      UNK_0xf245  codep:0x224c parp:0xf245 size:0x0024 C-string:'UNK_0xf245'
//      UNK_0xf26b  codep:0x224c parp:0xf26b size:0x0032 C-string:'UNK_0xf26b'
//      UNK_0xf29f  codep:0x224c parp:0xf29f size:0x001a C-string:'UNK_0xf29f'
//      UNK_0xf2bb  codep:0x224c parp:0xf2bb size:0x0030 C-string:'UNK_0xf2bb'
//      UNK_0xf2ed  codep:0x224c parp:0xf2ed size:0x001e C-string:'UNK_0xf2ed'
//      UNK_0xf30d  codep:0x224c parp:0xf30d size:0x000c C-string:'UNK_0xf30d'
//      UNK_0xf31b  codep:0x224c parp:0xf31b size:0x000a C-string:'UNK_0xf31b'
//      UNK_0xf327  codep:0x224c parp:0xf327 size:0x002a C-string:'UNK_0xf327'
//          ?EXIST  codep:0x224c parp:0xf35c size:0x0084 C-string:'IsEXIST'
//      UNK_0xf3e2  codep:0x224c parp:0xf3e2 size:0x0008 C-string:'UNK_0xf3e2'
//      UNK_0xf3ec  codep:0x224c parp:0xf3ec size:0x0008 C-string:'UNK_0xf3ec'
//      UNK_0xf3f6  codep:0x224c parp:0xf3f6 size:0x0008 C-string:'UNK_0xf3f6'
//      UNK_0xf400  codep:0x224c parp:0xf400 size:0x002a C-string:'UNK_0xf400'
//      UNK_0xf42c  codep:0x224c parp:0xf42c size:0x0014 C-string:'UNK_0xf42c'
//      UNK_0xf442  codep:0x224c parp:0xf442 size:0x0010 C-string:'UNK_0xf442'
//      UNK_0xf454  codep:0x224c parp:0xf454 size:0x0012 C-string:'UNK_0xf454'
//      UNK_0xf468  codep:0x224c parp:0xf468 size:0x0028 C-string:'UNK_0xf468'
//      UNK_0xf492  codep:0x224c parp:0xf492 size:0x0036 C-string:'UNK_0xf492'
//          POPULA  codep:0x224c parp:0xf4d3 size:0x0000 C-string:'POPULA'

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
const unsigned short int pp_UNK_0xec36 = 0xec36; // UNK_0xec36 size: 2
// {0x01, 0x00}


const unsigned short int cc_UNK_0xec16 = 0xec16; // UNK_0xec16
const unsigned short int cc_UNK_0xec1a = 0xec1a; // UNK_0xec1a
const unsigned short int cc_UNK_0xec1e = 0xec1e; // UNK_0xec1e
const unsigned short int cc_UNK_0xec22 = 0xec22; // UNK_0xec22


// 0xec12: db 0x93 0x00 '  '

// ================================================
// 0xec14: WORD 'UNK_0xec16' codep=0x2214 parp=0xec16
// ================================================
// orphan
// 0xec16: dw 0x0020

// ================================================
// 0xec18: WORD 'UNK_0xec1a' codep=0x2214 parp=0xec1a
// ================================================
// 0xec1a: dw 0x0043

// ================================================
// 0xec1c: WORD 'UNK_0xec1e' codep=0x2214 parp=0xec1e
// ================================================
// 0xec1e: dw 0x0044

// ================================================
// 0xec20: WORD 'UNK_0xec22' codep=0x2214 parp=0xec22
// ================================================
// 0xec22: dw 0x001c

// ================================================
// 0xec24: WORD 'UNK_0xec26' codep=0x73ea parp=0xec26
// ================================================
LoadDataType UNK_0xec26 = {PLANETIDX, 0x0f, 0x01, 0x16, 0x658f};

// ================================================
// 0xec2c: WORD 'UNK_0xec2e' codep=0x73ea parp=0xec2e
// ================================================
LoadDataType UNK_0xec2e = {PLANETIDX, 0x10, 0x01, 0x16, 0x658f};

// ================================================
// 0xec34: WORD 'UNK_0xec36' codep=0x1d29 parp=0xec36
// ================================================
// 0xec36: db 0x01 0x00 '  '

// ================================================
// 0xec38: WORD 'UNK_0xec3a' codep=0x73ea parp=0xec3a
// ================================================
LoadDataType UNK_0xec3a = {PLANETIDX, 0x0c, 0x01, 0x16, 0x658f};

// ================================================
// 0xec40: WORD 'UNK_0xec42' codep=0x73ea parp=0xec42
// ================================================
LoadDataType UNK_0xec42 = {PLANETIDX, 0x0d, 0x01, 0x16, 0x658f};

// ================================================
// 0xec48: WORD 'UNK_0xec4a' codep=0x73ea parp=0xec4a
// ================================================
LoadDataType UNK_0xec4a = {PLANETIDX, 0x0e, 0x01, 0x16, 0x658f};

// ================================================
// 0xec50: WORD 'UNK_0xec52' codep=0x73ea parp=0xec52
// ================================================
LoadDataType UNK_0xec52 = {PLANETIDX, 0x09, 0x01, 0x16, 0x658f};

// ================================================
// 0xec58: WORD 'UNK_0xec5a' codep=0x73ea parp=0xec5a
// ================================================
LoadDataType UNK_0xec5a = {REGIONSIDX, 0x1b, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xec60: WORD 'UNK_0xec62' codep=0x744d parp=0xec62
// ================================================
// orphan
IFieldType UNK_0xec62 = {REGIONSIDX, 0x0b, 0x02};

// ================================================
// 0xec65: WORD 'UNK_0xec67' codep=0x73ea parp=0xec67
// ================================================
LoadDataType UNK_0xec67 = {CREATUREIDX, 0x0a, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xec6d: WORD 'UNK_0xec6f' codep=0x73ea parp=0xec6f
// ================================================
LoadDataType UNK_0xec6f = {CREATUREIDX, 0x34, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xec75: WORD 'UNK_0xec77' codep=0x744d parp=0xec77
// ================================================
IFieldType UNK_0xec77 = {CREATUREIDX, 0x11, 0x01};

// ================================================
// 0xec7a: WORD 'UNK_0xec7c' codep=0x744d parp=0xec7c
// ================================================
IFieldType UNK_0xec7c = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xec7f: WORD 'UNK_0xec81' codep=0x73ea parp=0xec81
// ================================================
LoadDataType UNK_0xec81 = {CREATUREIDX, 0x33, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xec87: WORD 'UNK_0xec89' codep=0x744d parp=0xec89
// ================================================
IFieldType UNK_0xec89 = {CREATUREIDX, 0x12, 0x01};

// ================================================
// 0xec8c: WORD 'UNK_0xec8e' codep=0x744d parp=0xec8e
// ================================================
IFieldType UNK_0xec8e = {CREATUREIDX, 0x18, 0x03};

// ================================================
// 0xec91: WORD 'UNK_0xec93' codep=0x744d parp=0xec93
// ================================================
IFieldType UNK_0xec93 = {CREATUREIDX, 0x13, 0x01};

// ================================================
// 0xec96: WORD 'UNK_0xec98' codep=0x73ea parp=0xec98
// ================================================
LoadDataType UNK_0xec98 = {CREATUREIDX, 0x37, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xec9e: WORD 'UNK_0xeca0' codep=0x73ea parp=0xeca0
// ================================================
LoadDataType UNK_0xeca0 = {CREATUREIDX, 0x3a, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xeca6: WORD 'UNK_0xeca8' codep=0x744d parp=0xeca8
// ================================================
IFieldType UNK_0xeca8 = {CREATUREIDX, 0x1b, 0x01};

// ================================================
// 0xecab: WORD 'UNK_0xecad' codep=0x224c parp=0xecad params=0 returns=1
// ================================================
// orphan

void UNK_0xecad() // UNK_0xecad
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xecb7: WORD 'UNK_0xecb9' codep=0x224c parp=0xecb9 params=0 returns=1
// ================================================
// orphan

void UNK_0xecb9() // UNK_0xecb9
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xecc1: WORD 'UNK_0xecc3' codep=0x224c parp=0xecc3 params=0 returns=1
// ================================================
// orphan

void UNK_0xecc3() // UNK_0xecc3
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xeccd: WORD 'UNK_0xeccf' codep=0x224c parp=0xeccf params=2 returns=2
// ================================================
// orphan

void UNK_0xeccf() // UNK_0xeccf
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xecdb: WORD 'UNK_0xecdd' codep=0x224c parp=0xecdd params=0 returns=2
// ================================================

void UNK_0xecdd() // UNK_0xecdd
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
// 0xecf9: WORD 'UNK_0xecfb' codep=0x224c parp=0xecfb params=0 returns=2
// ================================================

void UNK_0xecfb() // UNK_0xecfb
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
// 0xed17: WORD 'UNK_0xed19' codep=0x224c parp=0xed19
// ================================================

void UNK_0xed19() // UNK_0xed19
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xec26); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xec2e); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed2f: WORD 'UNK_0xed31' codep=0x224c parp=0xed31 params=0 returns=2
// ================================================

void UNK_0xed31() // UNK_0xed31
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xed3b: WORD 'UNK_0xed3d' codep=0x224c parp=0xed3d params=2 returns=0
// ================================================

void UNK_0xed3d() // UNK_0xed3d
{
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xed47: WORD 'UNK_0xed49' codep=0x224c parp=0xed49
// ================================================

void UNK_0xed49() // UNK_0xed49
{
  _2DUP(); // 2DUP
  IsINVIS(); // ?INVIS
  Push((Pop()==0?1:0) | (Read16(pp_MOVED)==0?1:0)); //  0= MOVED @ 0= OR
}


// ================================================
// 0xed59: WORD 'UNK_0xed5b' codep=0x224c parp=0xed5b params=2 returns=2
// ================================================

void UNK_0xed5b() // UNK_0xed5b
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  SWAP(); // SWAP
  Push(Pop() - (Read16(pp_XCON) + 1)); //  XCON @ 1+ -
  SWAP(); // SWAP
  Push(Pop() - (Read16(pp_YCON) + 1)); //  YCON @ 1+ -
}


// ================================================
// 0xed77: WORD 'UNK_0xed79' codep=0x224c parp=0xed79
// ================================================

void UNK_0xed79() // UNK_0xed79
{
  _2DUP(); // 2DUP
  UNK_0xed5b(); // UNK_0xed5b
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0020);
  _gt_(); // >
}


// ================================================
// 0xed89: WORD 'UNK_0xed8b' codep=0x224c parp=0xed8b
// ================================================

void UNK_0xed8b() // UNK_0xed8b
{
  _2DUP(); // 2DUP
  UNK_0xed5b(); // UNK_0xed5b
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0040);
  _st_(); // <
}


// ================================================
// 0xed9b: WORD 'UNK_0xed9d' codep=0x224c parp=0xed9d
// ================================================

void UNK_0xed9d() // UNK_0xed9d
{
  _2DUP(); // 2DUP
  UNK_0xed5b(); // UNK_0xed5b
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x003f);
  _gt_(); // >
}


// ================================================
// 0xedad: WORD 'UNK_0xedaf' codep=0x224c parp=0xedaf
// ================================================

void UNK_0xedaf() // UNK_0xedaf
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
  UNK_0xed19(); // UNK_0xed19
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
// 0xeddf: WORD 'UNK_0xede1' codep=0x224c parp=0xede1 params=0 returns=0
// ================================================
// orphan

void UNK_0xede1() // UNK_0xede1
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
// 0xedff: WORD 'UNK_0xee01' codep=0x224c parp=0xee01
// ================================================

void UNK_0xee01() // UNK_0xee01
{
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xede1); // probable 'UNK_0xede1'
  ALL(); // ALL
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee13: WORD 'UNK_0xee15' codep=0x224c parp=0xee15
// ================================================

void UNK_0xee15() // UNK_0xee15
{
  LoadData(UNK_0xec6f); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x63ef+UNK_0xec77.offset); // UNK_0xec77<IFIELD>
  C_ex_(); // C!
  Push(0);
  Push(0x63ef+UNK_0xec7c.offset); // UNK_0xec7c<IFIELD>
  C_ex_(); // C!
  LoadData(UNK_0xeca0); // from 'CREATURE'
  Push(Read16(Pop())); //  @
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  LoadData(UNK_0xec98); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x63ef+UNK_0xec93.offset); // UNK_0xec93<IFIELD>
  C_ex_(); // C!
  Push2Words("0.");
  Push(0x63ef+UNK_0xec8e.offset); // UNK_0xec8e<IFIELD>
  _1_dot_5_ex_(); // 1.5!
  Push(0);
  Push(0x63ef+UNK_0xeca8.offset); // UNK_0xeca8<IFIELD>
  C_ex_(); // C!
  LoadData(UNK_0xec81); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x63ef+UNK_0xec89.offset); // UNK_0xec89<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee4b: WORD 'UNK_0xee4d' codep=0x224c parp=0xee4d
// ================================================

void UNK_0xee4d() // UNK_0xee4d
{
  unsigned short int a, b, c, d;
  UNK_0xecdd(); // UNK_0xecdd
  UNK_0xecfb(); // UNK_0xecfb
  UNK_0xed79(); // UNK_0xed79
  a = Pop(); // >R
  UNK_0xed49(); // UNK_0xed49
  b = Pop(); // >R
  UNK_0xed8b(); // UNK_0xed8b
  Push(Pop() & (b & a)); //  R> R> AND AND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    c = Pop(); // >R
    d = Pop(); // >R
    Push(Read16(cc_UNK_0xec1e)); // UNK_0xec1e
    Push(3);
    PICK(); // PICK
    Push(1);
    _star_CREATE(); // *CREATE
    ILAST(); // ILAST
    Push(d); // R>
    Push(c); // R>
    UNK_0xed3d(); // UNK_0xed3d
    UNK_0xee15(); // UNK_0xee15
    Push(1);
    Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
    _plus__ex__2(); // +!_2
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xee8f: WORD 'UNK_0xee91' codep=0x224c parp=0xee91
// ================================================

void UNK_0xee91() // UNK_0xee91
{
  unsigned short int i, imax, a;
  Push(Read16(cc_UNK_0xec1e)); // UNK_0xec1e
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
    LoadData(UNK_0xec67); // from 'CREATURE'
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
// 0xeecb: WORD 'UNK_0xeecd' codep=0x73ea parp=0xeecd
// ================================================
// orphan
LoadDataType UNK_0xeecd = {CREATUREIDX, 0x02, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xeed3: WORD 'UNK_0xeed5' codep=0x73ea parp=0xeed5
// ================================================
// orphan
LoadDataType UNK_0xeed5 = {CREATUREIDX, 0x04, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xeedb: WORD 'UNK_0xeedd' codep=0x73ea parp=0xeedd
// ================================================
// orphan
LoadDataType UNK_0xeedd = {CREATUREIDX, 0x07, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xeee3: WORD 'UNK_0xeee5' codep=0x73ea parp=0xeee5
// ================================================
LoadDataType UNK_0xeee5 = {CREATUREIDX, 0x0b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xeeeb: WORD 'UNK_0xeeed' codep=0x73ea parp=0xeeed
// ================================================
LoadDataType UNK_0xeeed = {CREATUREIDX, 0x0d, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xeef3: WORD 'UNK_0xeef5' codep=0x73ea parp=0xeef5
// ================================================
LoadDataType UNK_0xeef5 = {CREATUREIDX, 0x10, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x73ea parp=0xeefd
// ================================================
LoadDataType UNK_0xeefd = {CREATUREIDX, 0x13, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef03: WORD 'UNK_0xef05' codep=0x73ea parp=0xef05
// ================================================
LoadDataType UNK_0xef05 = {CREATUREIDX, 0x16, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef0b: WORD 'UNK_0xef0d' codep=0x73ea parp=0xef0d
// ================================================
LoadDataType UNK_0xef0d = {CREATUREIDX, 0x19, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xef13: WORD 'UNK_0xef15' codep=0x73ea parp=0xef15
// ================================================
LoadDataType UNK_0xef15 = {CREATUREIDX, 0x1a, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef1b: WORD 'UNK_0xef1d' codep=0x73ea parp=0xef1d
// ================================================
LoadDataType UNK_0xef1d = {CREATUREIDX, 0x1d, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xef23: WORD 'UNK_0xef25' codep=0x73ea parp=0xef25
// ================================================
LoadDataType UNK_0xef25 = {CREATUREIDX, 0x1e, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef2b: WORD 'UNK_0xef2d' codep=0x73ea parp=0xef2d
// ================================================
LoadDataType UNK_0xef2d = {CREATUREIDX, 0x21, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xef33: WORD 'UNK_0xef35' codep=0x73ea parp=0xef35
// ================================================
LoadDataType UNK_0xef35 = {CREATUREIDX, 0x22, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef3b: WORD 'UNK_0xef3d' codep=0x73ea parp=0xef3d
// ================================================
LoadDataType UNK_0xef3d = {CREATUREIDX, 0x25, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xef43: WORD 'UNK_0xef45' codep=0x73ea parp=0xef45
// ================================================
LoadDataType UNK_0xef45 = {CREATUREIDX, 0x26, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef4b: WORD 'UNK_0xef4d' codep=0x73ea parp=0xef4d
// ================================================
LoadDataType UNK_0xef4d = {CREATUREIDX, 0x29, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xef53: WORD 'UNK_0xef55' codep=0x73ea parp=0xef55
// ================================================
LoadDataType UNK_0xef55 = {CREATUREIDX, 0x2e, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xef5b: WORD 'UNK_0xef5d' codep=0x73ea parp=0xef5d
// ================================================
LoadDataType UNK_0xef5d = {CREATUREIDX, 0x9b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xef63: WORD 'UNK_0xef65' codep=0x73ea parp=0xef65
// ================================================
// orphan
LoadDataType UNK_0xef65 = {PLANETIDX, 0x0a, 0x01, 0x16, 0x658f};

// ================================================
// 0xef6b: WORD 'UNK_0xef6d' codep=0x73ea parp=0xef6d
// ================================================
// orphan
LoadDataType UNK_0xef6d = {PLANETIDX, 0x0b, 0x01, 0x16, 0x658f};

// ================================================
// 0xef73: WORD 'UNK_0xef75' codep=0x224c parp=0xef75 params=0 returns=0
// ================================================

void UNK_0xef75() // UNK_0xef75
{
  Push(Read16(cc_UNK_0xec1e)); // UNK_0xec1e
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xef87: WORD 'UNK_0xef89' codep=0x224c parp=0xef89
// ================================================

void UNK_0xef89() // UNK_0xef89
{
  LoadData(UNK_0xeee5); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xef0d); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xef05); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(UNK_0xeeed); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(UNK_0xeef5); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(UNK_0xef1d); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xef15); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(UNK_0xef4d); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(UNK_0xef2d); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xef25); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(UNK_0xef45); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(UNK_0xef3d); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xef35); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  LoadData(UNK_0xeefd); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xefc3: WORD 'UNK_0xefc5' codep=0x224c parp=0xefc5
// ================================================

void UNK_0xefc5() // UNK_0xefc5
{
  LoadData(UNK_0xeefd); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(UNK_0xef35); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(UNK_0xef3d); // from 'CREATURE'
  C_ex_(); // C!
  LoadData(UNK_0xef45); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(UNK_0xef25); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(UNK_0xef2d); // from 'CREATURE'
  C_ex_(); // C!
  LoadData(UNK_0xef4d); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(UNK_0xef15); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(UNK_0xef1d); // from 'CREATURE'
  C_ex_(); // C!
  LoadData(UNK_0xeef5); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(UNK_0xeeed); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(UNK_0xef05); // from 'CREATURE'
  _1_dot_5_ex_(); // 1.5!
  LoadData(UNK_0xef0d); // from 'CREATURE'
  C_ex_(); // C!
  LoadData(UNK_0xeee5); // from 'CREATURE'
  C_ex_(); // C!
}


// ================================================
// 0xefff: WORD 'UNK_0xf001' codep=0x224c parp=0xf001
// ================================================

void UNK_0xf001() // UNK_0xf001
{
  LoadData(UNK_0xef55); // from 'CREATURE'
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
}


// ================================================
// 0xf009: WORD 'UNK_0xf00b' codep=0x224c parp=0xf00b
// ================================================

void UNK_0xf00b() // UNK_0xf00b
{
  Push(0xef55); // probable 'UNK_0xef55'

  label2:
  Push(Read16(regsp)); // DUP
  IFLD_at_(); // IFLD@
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) goto label1;
  Push(-1);
  Push(pp_RECORD_n_); // RECORD#
  _st__plus__ex__gt_(); // <+!>
  UNK_0xef75(); // UNK_0xef75
  goto label2;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf029: WORD 'UNK_0xf02b' codep=0x224c parp=0xf02b
// ================================================

void UNK_0xf02b() // UNK_0xf02b
{
  unsigned short int a;
  OVER(); // OVER
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  UNK_0xef75(); // UNK_0xef75
  LoadData(UNK_0xef5d); // from 'CREATURE'
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() == 0) return;
  UNK_0xf001(); // UNK_0xf001
  Push(Pop() & !(Read16(pp_RECORD_n_)==0?1:0)); //  RECORD# @ 0= NOT AND
  if (Pop() != 0)
  {
    Push(Read16(pp_RECORD_n_)); // RECORD# @
    a = Pop(); // >R
    UNK_0xf00b(); // UNK_0xf00b
    UNK_0xef89(); // UNK_0xef89
    Push(a); // R>
    Push(pp_RECORD_n_); // RECORD#
    _st__ex__gt_(); // <!>
    UNK_0xef75(); // UNK_0xef75
    UNK_0xefc5(); // UNK_0xefc5
  }
  Push(0xcd40); // probable 'OTHER-PAR'
  MODULE(); // MODULE
  OVER(); // OVER
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  UNK_0xef75(); // UNK_0xef75
  Push(1);
  LoadData(UNK_0xef5d); // from 'CREATURE'
  C_ex_(); // C!
}


// ================================================
// 0xf077: WORD 'UNK_0xf079' codep=0x224c parp=0xf079
// ================================================

void UNK_0xf079() // UNK_0xf079
{
  unsigned short int a, i, imax, b, j, jmax;
  UNK_0xedaf(); // UNK_0xedaf
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  UNK_0xee91(); // UNK_0xee91
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  Push(Read16(cc_UNK_0xec1a)); // UNK_0xec1a
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  LoadData(UNK_0xec5a); // from 'REGIONS'
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
      UNK_0xf02b(); // UNK_0xf02b
      Push(b); // R>
      Push(0);

      j = Pop();
      jmax = Pop();
      do // (DO)
      {
        UNK_0xee4d(); // UNK_0xee4d
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
// 0xf0c5: WORD 'UNK_0xf0c7' codep=0x224c parp=0xf0c7
// ================================================

void UNK_0xf0c7() // UNK_0xf0c7
{
  LoadData(UNK_0xec3a); // from 'PLANET'
  Push(!((Read16(Pop())&0xFF)==6?1:0)); //  C@ 6 = NOT
  if (Pop() == 0) goto label1;

  label3:
  Push(1);
  Push(0x0017);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Pop()==6?1:0); //  6 =
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  goto label3;

  label2:
  return;

  label1:
  Push(6);
}


// ================================================
// 0xf0f5: WORD 'UNK_0xf0f7' codep=0x224c parp=0xf0f7
// ================================================

void UNK_0xf0f7() // UNK_0xf0f7
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
    LoadData(UNK_0xec3a); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    LoadData(UNK_0xec42); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  Push(0x005a);
  _st_(); // <
  if (Pop() != 0)
  {
    LoadData(UNK_0xec4a); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  UNK_0xf0c7(); // UNK_0xf0c7
}


// ================================================
// 0xf141: WORD 'UNK_0xf143' codep=0x224c parp=0xf143 params=0 returns=0
// ================================================

void UNK_0xf143() // UNK_0xf143
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
  Push(0x5239); // probable '*SP'
  _2_ex_(); // 2!
}


// ================================================
// 0xf161: WORD 'UNK_0xf163' codep=0x224c parp=0xf163
// ================================================

void UNK_0xf163() // UNK_0xf163
{
  Push(0x001a);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  UNK_0xed3d(); // UNK_0xed3d
  Push(0x000a);
  Push(0x0064);
  RRND(); // RRND
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xf187: WORD 'UNK_0xf189' codep=0x224c parp=0xf189 params=2 returns=1
// ================================================

void UNK_0xf189() // UNK_0xf189
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
// 0xf199: WORD 'UNK_0xf19b' codep=0x224c parp=0xf19b params=2 returns=0
// ================================================

void UNK_0xf19b() // UNK_0xf19b
{
  Push(0);
  Push(Read16(pp_UNK_0xec36)); // UNK_0xec36 @
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    UNK_0xf189(); // UNK_0xf189
    SWAP(); // SWAP
    UNK_0xf189(); // UNK_0xf189
    SWAP(); // SWAP
    Push(6);
    UNK_0xf163(); // UNK_0xf163
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf1bf: WORD 'UNK_0xf1c1' codep=0x224c parp=0xf1c1
// ================================================

void UNK_0xf1c1() // UNK_0xf1c1
{
  unsigned short int i, imax, a;
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xec52); // from 'PLANET'
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
      UNK_0xecdd(); // UNK_0xecdd
      UNK_0xecfb(); // UNK_0xecfb
      UNK_0xed9d(); // UNK_0xed9d
      a = Pop(); // >R
      UNK_0xed49(); // UNK_0xed49
      Push(Pop() & a); //  R> AND
      if (Pop() != 0)
      {
        UNK_0xf0f7(); // UNK_0xf0f7
        UNK_0xf163(); // UNK_0xf163
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
// 0xf205: WORD 'UNK_0xf207' codep=0x224c parp=0xf207
// ================================================

void UNK_0xf207() // UNK_0xf207
{
  unsigned short int a, b;
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0);
  a = Pop(); // >R

  label3:
  Push(0x0029);
  Push(0);
  IFIND(); // IFIND
  Push(Read16(a)); // R@
  Push(Pop()==0?1:0); //  0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  UNK_0xed31(); // UNK_0xed31
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(a); // R>
    Pop(); // DROP
    Push(1);
    b = Pop(); // >R
  }
  INEXT(); // INEXT
  goto label3;

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(a); // R>
}


// ================================================
// 0xf243: WORD 'UNK_0xf245' codep=0x224c parp=0xf245 params=0 returns=1
// ================================================

void UNK_0xf245() // UNK_0xf245
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
// 0xf269: WORD 'UNK_0xf26b' codep=0x224c parp=0xf26b params=0 returns=0
// ================================================

void UNK_0xf26b() // UNK_0xf26b
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) return;
  Push(Read16(cc_UNK_0xec22)); // UNK_0xec22
  UNK_0xf245(); // UNK_0xf245
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  _2DUP(); // 2DUP
  UNK_0xed3d(); // UNK_0xed3d
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf29d: WORD 'UNK_0xf29f' codep=0x224c parp=0xf29f
// ================================================

void UNK_0xf29f() // UNK_0xf29f
{
  unsigned short int a;
  do
  {
    UNK_0xecdd(); // UNK_0xecdd
    UNK_0xecfb(); // UNK_0xecfb
    UNK_0xed49(); // UNK_0xed49
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
// 0xf2b9: WORD 'UNK_0xf2bb' codep=0x224c parp=0xf2bb
// ================================================

void UNK_0xf2bb() // UNK_0xf2bb
{
  unsigned short int a;
  UNK_0xf29f(); // UNK_0xf29f
  UNK_0xed79(); // UNK_0xed79
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
    UNK_0xed3d(); // UNK_0xed3d
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); // DROP
  }
  Push(a); // R>
}


// ================================================
// 0xf2eb: WORD 'UNK_0xf2ed' codep=0x224c parp=0xf2ed params=1 returns=3
// ================================================

void UNK_0xf2ed() // UNK_0xf2ed
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
// 0xf30b: WORD 'UNK_0xf30d' codep=0x224c parp=0xf30d params=0 returns=4
// ================================================

void UNK_0xf30d() // UNK_0xf30d
{
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xed31(); // UNK_0xed31
  UNK_0xf2ed(); // UNK_0xf2ed
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf319: WORD 'UNK_0xf31b' codep=0x224c parp=0xf31b params=0 returns=3
// ================================================

void UNK_0xf31b() // UNK_0xf31b
{
  UNK_0xed31(); // UNK_0xed31
  UNK_0xf2ed(); // UNK_0xf2ed
  _2OVER(); // 2OVER
  D_eq_(); // D=
}


// ================================================
// 0xf325: WORD 'UNK_0xf327' codep=0x224c parp=0xf327
// ================================================

void UNK_0xf327() // UNK_0xf327
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
  UNK_0xed3d(); // UNK_0xed3d
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf351: WORD '?EXIST' codep=0x224c parp=0xf35c params=1 returns=0
// ================================================

void IsEXIST() // ?EXIST
{
  unsigned short int a, b, c, d;
  a = Pop(); // >R
  Push(1);
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label6:
  IsLAST(); // ?LAST
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(Read16(a)); // R@
  Push(0);
  IFIND(); // IFIND
  Push(Read16(regsp)); // DUP
  b = Pop(); // >R
  if (Pop() != 0)
  {
    UNK_0xf30d(); // UNK_0xf30d
    UNK_0xf31b(); // UNK_0xf31b
    if (Pop() != 0)
    {
      UNK_0xed31(); // UNK_0xed31
      Push(0x0029);
      Push(4);
      IsCLASS_slash_SPECIES(); // ?CLASS/SPECIES
      c = Pop(); // >R
      Pop(); Pop(); // 2DROP
      Push(c); // R>
      if (Pop() != 0)
      {
        _2DUP(); // 2DUP
        UNK_0xf19b(); // UNK_0xf19b
      }
      UNK_0xf143(); // UNK_0xf143
      IEXTRACT(); // IEXTRACT
      IPREV(); // IPREV
      Push(pp_THIS_dash_RE); // THIS-RE
      _1_dot_5_at_(); // 1.5@
      IINSERT(); // IINSERT
      Push(!(a==0x0029?1:0)); // I' 0x0029 = NOT
      d = Pop(); // >R
      UNK_0xf207(); // UNK_0xf207
      Push(!Pop() & d); //  NOT R> AND
      if (Pop() != 0)
      {
        Push(a); // I'
        UNK_0xf327(); // UNK_0xf327
      } else
      {
        Pop(); Pop(); // 2DROP
      }
    }
    Pop(); Pop(); // 2DROP
  }
  INEXT(); // INEXT
  Push(b); // R>
  goto label6;

  label1:
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf3e0: WORD 'UNK_0xf3e2' codep=0x224c parp=0xf3e2 params=0 returns=0
// ================================================

void UNK_0xf3e2() // UNK_0xf3e2
{
  Push(0x001b);
  IsEXIST(); // ?EXIST
}


// ================================================
// 0xf3ea: WORD 'UNK_0xf3ec' codep=0x224c parp=0xf3ec params=0 returns=0
// ================================================

void UNK_0xf3ec() // UNK_0xf3ec
{
  Push(0x001c);
  IsEXIST(); // ?EXIST
}


// ================================================
// 0xf3f4: WORD 'UNK_0xf3f6' codep=0x224c parp=0xf3f6 params=0 returns=0
// ================================================

void UNK_0xf3f6() // UNK_0xf3f6
{
  Push(0x0029);
  IsEXIST(); // ?EXIST
}


// ================================================
// 0xf3fe: WORD 'UNK_0xf400' codep=0x224c parp=0xf400
// ================================================

void UNK_0xf400() // UNK_0xf400
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label2:
  Push(0x001b);
  Push(0);
  IFIND(); // IFIND
  UNK_0xed31(); // UNK_0xed31
  Push2Words("NULL");
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  goto label2;

  label1:
  UNK_0xed31(); // UNK_0xed31
  Push2Words("NULL");
  D_eq_(); // D=
}


// ================================================
// 0xf42a: WORD 'UNK_0xf42c' codep=0x224c parp=0xf42c
// ================================================

void UNK_0xf42c() // UNK_0xf42c
{
  UNK_0xf400(); // UNK_0xf400
  Push(1);
  Push(0x0064);
  RRND(); // RRND
  Push(0x0032);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf440: WORD 'UNK_0xf442' codep=0x224c parp=0xf442 params=2 returns=0
// ================================================

void UNK_0xf442() // UNK_0xf442
{
  UNK_0xed3d(); // UNK_0xed3d
  Push(0x63ef+INST_dash_DATE.offset); // INST-DATE<IFIELD>
  OFF(); // OFF
  IEXTRACT(); // IEXTRACT
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
}


// ================================================
// 0xf452: WORD 'UNK_0xf454' codep=0x224c parp=0xf454
// ================================================

void UNK_0xf454() // UNK_0xf454
{
  UNK_0xf42c(); // UNK_0xf42c
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    UNK_0xf442(); // UNK_0xf442
    UNK_0xee01(); // UNK_0xee01
  }
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf466: WORD 'UNK_0xf468' codep=0x224c parp=0xf468
// ================================================

void UNK_0xf468() // UNK_0xf468
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
// 0xf490: WORD 'UNK_0xf492' codep=0x224c parp=0xf492
// ================================================

void UNK_0xf492() // UNK_0xf492
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  Push(0xef65); // probable 'UNK_0xef65'
  UNK_0xf468(); // UNK_0xf468
  if (Pop() != 0)
  {
    Push(2);
    UNK_0xf2bb(); // UNK_0xf2bb
    if (Pop() != 0)
    {
      UNK_0xf26b(); // UNK_0xf26b
    }
    UNK_0xf19b(); // UNK_0xf19b
  }
  Push(0xef6d); // probable 'UNK_0xef6d'
  UNK_0xf468(); // UNK_0xf468
  if (Pop() != 0)
  {
    Push(1);
    UNK_0xf2bb(); // UNK_0xf2bb
    if (Pop() != 0)
    {
      UNK_0xf26b(); // UNK_0xf26b
      UNK_0xf454(); // UNK_0xf454
    }
    Pop(); Pop(); // 2DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c8: WORD 'POPULA' codep=0x224c parp=0xf4d3 params=0 returns=4
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
      UNK_0xf079(); // UNK_0xf079
    }
    UNK_0xf1c1(); // UNK_0xf1c1
  }
  UNK_0xf3f6(); // UNK_0xf3f6
  UNK_0xf3ec(); // UNK_0xf3ec
  UNK_0xf3e2(); // UNK_0xf3e2
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  GetNEWSPACE(); // @NEWSPACE
  Push(0x017c);
  Push(0);
  D_plus_(); // D+
  D_st_(); // D<
  Push(!(Pop() & Read16(pp_IsCRITIC))); //  ?CRITIC @ AND NOT
  if (Pop() == 0) return;
  UNK_0xf492(); // UNK_0xf492
}

// 0xf521: db 0x53 0x45 0x45 0x44 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0xf1 0xf3 0x86 0x2e 0x53 0x54 0x4f 0x52 0xcd 0x4c 0x22 0x83 0xf4 0x36 0xf4 0xfc 0xf2 0x90 0x16 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x00 'SEEDER__________________________   .STOR L"  6     MAPS-VOC____ '

