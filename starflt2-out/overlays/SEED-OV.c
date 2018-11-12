// ====== OVERLAY 'SEED-OV' ======
// store offset = 0xec10
// overlay size   = 0x0950

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEC26  codep:0x2214 wordp:0xec26 size:0x0002 C-string:'WEC26'
//           WEC2A  codep:0x2214 wordp:0xec2a size:0x0002 C-string:'WEC2A'
//           WEC2E  codep:0x2214 wordp:0xec2e size:0x0002 C-string:'WEC2E'
//           WEC32  codep:0x2214 wordp:0xec32 size:0x0002 C-string:'WEC32'
//           WEC36  codep:0x2214 wordp:0xec36 size:0x0002 C-string:'WEC36'
//           WEC3A  codep:0x2214 wordp:0xec3a size:0x0002 C-string:'WEC3A'
//           WEC3E  codep:0x2214 wordp:0xec3e size:0x0002 C-string:'WEC3E'
//           WEC42  codep:0x1d29 wordp:0xec42 size:0x0002 C-string:'WEC42'
//           WEC46  codep:0x1d29 wordp:0xec46 size:0x0002 C-string:'WEC46'
//           WEC4A  codep:0x7394 wordp:0xec4a size:0x0006 C-string:'WEC4A'
//           WEC52  codep:0x7394 wordp:0xec52 size:0x0006 C-string:'WEC52'
//           WEC5A  codep:0x7394 wordp:0xec5a size:0x0006 C-string:'WEC5A'
//           WEC62  codep:0x7394 wordp:0xec62 size:0x0006 C-string:'WEC62'
//           WEC6A  codep:0x7394 wordp:0xec6a size:0x0006 C-string:'WEC6A'
//           WEC72  codep:0x7394 wordp:0xec72 size:0x0006 C-string:'WEC72'
//           WEC7A  codep:0x7394 wordp:0xec7a size:0x0006 C-string:'WEC7A'
//           WEC82  codep:0x7394 wordp:0xec82 size:0x0006 C-string:'WEC82'
//           WEC8A  codep:0x7394 wordp:0xec8a size:0x0006 C-string:'WEC8A'
//           WEC92  codep:0x7394 wordp:0xec92 size:0x0006 C-string:'WEC92'
//           WEC9A  codep:0x7420 wordp:0xec9a size:0x0003 C-string:'WEC9A'
//           WEC9F  codep:0x7420 wordp:0xec9f size:0x0003 C-string:'WEC9F'
//           WECA4  codep:0x7420 wordp:0xeca4 size:0x0003 C-string:'WECA4'
//           WECA9  codep:0x7394 wordp:0xeca9 size:0x0006 C-string:'WECA9'
//           WECB1  codep:0x7394 wordp:0xecb1 size:0x0006 C-string:'WECB1'
//           WECB9  codep:0x7394 wordp:0xecb9 size:0x0006 C-string:'WECB9'
//           WECC1  codep:0x7394 wordp:0xecc1 size:0x0006 C-string:'WECC1'
//           WECC9  codep:0x7420 wordp:0xecc9 size:0x0003 C-string:'WECC9'
//           WECCE  codep:0x7420 wordp:0xecce size:0x0003 C-string:'WECCE'
//           WECD3  codep:0x7420 wordp:0xecd3 size:0x0003 C-string:'WECD3'
//           WECD8  codep:0x7420 wordp:0xecd8 size:0x0003 C-string:'WECD8'
//           WECDD  codep:0x7420 wordp:0xecdd size:0x0003 C-string:'WECDD'
//           WECE2  codep:0x224c wordp:0xece2 size:0x000a C-string:'WECE2'
//           WECEE  codep:0x224c wordp:0xecee size:0x0008 C-string:'WECEE'
//           WECF8  codep:0x224c wordp:0xecf8 size:0x000a C-string:'WECF8'
//           WED04  codep:0x224c wordp:0xed04 size:0x0010 C-string:'WED04'
//           WED16  codep:0x224c wordp:0xed16 size:0x000c C-string:'WED16'
//           WED24  codep:0x224c wordp:0xed24 size:0x0006 C-string:'WED24'
//           WED2C  codep:0x224c wordp:0xed2c size:0x0006 C-string:'WED2C'
//           WED34  codep:0x224c wordp:0xed34 size:0x0010 C-string:'WED34'
//           WED46  codep:0x224c wordp:0xed46 size:0x000a C-string:'WED46'
//           WED52  codep:0x224c wordp:0xed52 size:0x001c C-string:'WED52'
//           WED70  codep:0x224c wordp:0xed70 size:0x001c C-string:'WED70'
//           WED8E  codep:0x224c wordp:0xed8e size:0x0006 C-string:'WED8E'
//           WED96  codep:0x224c wordp:0xed96 size:0x0016 C-string:'WED96'
//           WEDAE  codep:0x224c wordp:0xedae size:0x000a C-string:'WEDAE'
//           WEDBA  codep:0x224c wordp:0xedba size:0x000a C-string:'WEDBA'
//           WEDC6  codep:0x224c wordp:0xedc6 size:0x0010 C-string:'WEDC6'
//           WEDD8  codep:0x224c wordp:0xedd8 size:0x001c C-string:'WEDD8'
//           WEDF6  codep:0x224c wordp:0xedf6 size:0x0010 C-string:'WEDF6'
//           WEE08  codep:0x224c wordp:0xee08 size:0x0010 C-string:'WEE08'
//           WEE1A  codep:0x224c wordp:0xee1a size:0x0010 C-string:'WEE1A'
//           WEE2C  codep:0x224c wordp:0xee2c size:0x0030 C-string:'WEE2C'
//           WEE5E  codep:0x224c wordp:0xee5e size:0x001e C-string:'WEE5E'
//           WEE7E  codep:0x224c wordp:0xee7e size:0x0012 C-string:'WEE7E'
//           WEE92  codep:0x224c wordp:0xee92 size:0x002c C-string:'WEE92'
//           WEEC0  codep:0x224c wordp:0xeec0 size:0x001c C-string:'WEEC0'
//           WEEDE  codep:0x1d29 wordp:0xeede size:0x000e C-string:'WEEDE'
//           WEEEE  codep:0x224c wordp:0xeeee size:0x001a C-string:'WEEEE'
//           WEF0A  codep:0x224c wordp:0xef0a size:0x0008 C-string:'WEF0A'
//           WEF14  codep:0x224c wordp:0xef14 size:0x0038 C-string:'WEF14'
//           WEF4E  codep:0x224c wordp:0xef4e size:0x0044 C-string:'WEF4E'
//           WEF94  codep:0x224c wordp:0xef94 size:0x003e C-string:'WEF94'
//           WEFD4  codep:0x224c wordp:0xefd4 size:0x0010 C-string:'WEFD4'
//           WEFE6  codep:0x224c wordp:0xefe6 size:0x002e C-string:'WEFE6'
//           WF016  codep:0x224c wordp:0xf016 size:0x0012 C-string:'WF016'
//           WF02A  codep:0x224c wordp:0xf02a size:0x0018 C-string:'WF02A'
//           WF044  codep:0x224c wordp:0xf044 size:0x004a C-string:'WF044'
//           WF090  codep:0x224c wordp:0xf090 size:0x0020 C-string:'WF090'
//           WF0B2  codep:0x224c wordp:0xf0b2 size:0x0026 C-string:'WF0B2'
//           WF0DA  codep:0x224c wordp:0xf0da size:0x0044 C-string:'WF0DA'
//           WF120  codep:0x224c wordp:0xf120 size:0x003c C-string:'WF120'
//           WF15E  codep:0x224c wordp:0xf15e size:0x0002 C-string:'WF15E'
//           WF162  codep:0x224c wordp:0xf162 size:0x002c C-string:'WF162'
//           WF190  codep:0x224c wordp:0xf190 size:0x0010 C-string:'WF190'
//           WF1A2  codep:0x224c wordp:0xf1a2 size:0x0016 C-string:'WF1A2'
//           WF1BA  codep:0x224c wordp:0xf1ba size:0x001e C-string:'WF1BA'
//           WF1DA  codep:0x224c wordp:0xf1da size:0x000c C-string:'WF1DA'
//           WF1E8  codep:0x224c wordp:0xf1e8 size:0x000a C-string:'WF1E8'
//           WF1F4  codep:0x224c wordp:0xf1f4 size:0x0026 C-string:'WF1F4'
//           WF21C  codep:0x224c wordp:0xf21c size:0x0084 C-string:'WF21C'
//           WF2A2  codep:0x224c wordp:0xf2a2 size:0x0018 C-string:'WF2A2'
//           WF2BC  codep:0x224c wordp:0xf2bc size:0x001c C-string:'WF2BC'
//           WF2DA  codep:0x224c wordp:0xf2da size:0x000e C-string:'WF2DA'
//           WF2EA  codep:0x224c wordp:0xf2ea size:0x000e C-string:'WF2EA'
//           WF2FA  codep:0x224c wordp:0xf2fa size:0x0004 C-string:'WF2FA'
//           WF300  codep:0x224c wordp:0xf300 size:0x002c C-string:'WF300'
//           WF32E  codep:0x224c wordp:0xf32e size:0x000a C-string:'WF32E'
//           WF33A  codep:0x224c wordp:0xf33a size:0x000e C-string:'WF33A'
//           WF34A  codep:0x224c wordp:0xf34a size:0x0028 C-string:'WF34A'
//           WF374  codep:0x224c wordp:0xf374 size:0x0042 C-string:'WF374'
//           WF3B8  codep:0x224c wordp:0xf3b8 size:0x0006 C-string:'WF3B8'
//           WF3C0  codep:0x224c wordp:0xf3c0 size:0x0012 C-string:'WF3C0'
//           WF3D4  codep:0x224c wordp:0xf3d4 size:0x0024 C-string:'WF3D4'
//           WF3FA  codep:0x224c wordp:0xf3fa size:0x0022 C-string:'WF3FA'
//           WF41E  codep:0x224c wordp:0xf41e size:0x001a C-string:'WF41E'
//           WF43A  codep:0x224c wordp:0xf43a size:0x0044 C-string:'WF43A'
//           WF480  codep:0x224c wordp:0xf480 size:0x000c C-string:'WF480'
//           WF48E  codep:0x224c wordp:0xf48e size:0x0030 C-string:'WF48E'
//           WF4C0  codep:0x224c wordp:0xf4c0 size:0x0044 C-string:'WF4C0'
//           WF506  codep:0x224c wordp:0xf506 size:0x001a C-string:'WF506'
//          POPULA  codep:0x224c wordp:0xf52b size:0x0000 C-string:'POPULA'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp_MOVED; // MOVED
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType INST_dash_DA; // INST-DA
void MAX(); // MAX
void D_st_(); // D<
void _2OVER(); // 2OVER
void D_eq_(); // D=
void _3_star_(); // 3*
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void ACELLAD(); // ACELLAD
void A_at_(); // A@
void SETLARR(); // SETLARR
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void GetRECORD(); // @RECORD
void StoreINST_dash_S(); // !INST-S
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void CI_i_(); // CI'
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IINSERT(); // IINSERT
void IEXTRAC(); // IEXTRAC
void GetNEWSPA(); // @NEWSPA
void MAXSPAC(); // MAXSPAC
void IFLD_at_(); // IFLD@
void IsCLASS_slash_(); // ?CLASS/
void IFIND(); // IFIND
void ALL(); // ALL
void ICREATE(); // ICREATE
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _1_dot_5_at_(); // 1.5@
void CI(); // CI
void IsINVIS(); // ?INVIS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEC42 = 0xec42; // WEC42 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEC46 = 0xec46; // WEC46 size: 2
// {0x01, 0x00}

const unsigned short int pp_WEEDE = 0xeede; // WEEDE size: 14
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x3b, 0x2d, 0x12, 0x41, 0x5c, 0xae, 0x0b}


const unsigned short int cc_WEC26 = 0xec26; // WEC26
const unsigned short int cc_WEC2A = 0xec2a; // WEC2A
const unsigned short int cc_WEC2E = 0xec2e; // WEC2E
const unsigned short int cc_WEC32 = 0xec32; // WEC32
const unsigned short int cc_WEC36 = 0xec36; // WEC36
const unsigned short int cc_WEC3A = 0xec3a; // WEC3A
const unsigned short int cc_WEC3E = 0xec3e; // WEC3E


// 0xec22: db 0x95 0x00 '  '

// ================================================
// 0xec24: WORD 'WEC26' codep=0x2214 wordp=0xec26
// ================================================
// orphan
// 0xec26: dw 0x0020

// ================================================
// 0xec28: WORD 'WEC2A' codep=0x2214 wordp=0xec2a
// ================================================
// orphan
// 0xec2a: dw 0x0043

// ================================================
// 0xec2c: WORD 'WEC2E' codep=0x2214 wordp=0xec2e
// ================================================
// orphan
// 0xec2e: dw 0x0044

// ================================================
// 0xec30: WORD 'WEC32' codep=0x2214 wordp=0xec32
// ================================================
// orphan
// 0xec32: dw 0x001c

// ================================================
// 0xec34: WORD 'WEC36' codep=0x2214 wordp=0xec36
// ================================================
// 0xec36: dw 0x001f

// ================================================
// 0xec38: WORD 'WEC3A' codep=0x2214 wordp=0xec3a
// ================================================
// 0xec3a: dw 0x0015

// ================================================
// 0xec3c: WORD 'WEC3E' codep=0x2214 wordp=0xec3e
// ================================================
// 0xec3e: dw 0x0021

// ================================================
// 0xec40: WORD 'WEC42' codep=0x1d29 wordp=0xec42
// ================================================
// 0xec42: db 0x3a 0x20 ': '

// ================================================
// 0xec44: WORD 'WEC46' codep=0x1d29 wordp=0xec46
// ================================================
// 0xec46: db 0x01 0x00 '  '

// ================================================
// 0xec48: WORD 'WEC4A' codep=0x7394 wordp=0xec4a
// ================================================
LoadDataType WEC4A = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec50: WORD 'WEC52' codep=0x7394 wordp=0xec52
// ================================================
// orphan
LoadDataType WEC52 = {PLANETIDX, 0x0a, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec58: WORD 'WEC5A' codep=0x7394 wordp=0xec5a
// ================================================
// orphan
LoadDataType WEC5A = {PLANETIDX, 0x0b, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec60: WORD 'WEC62' codep=0x7394 wordp=0xec62
// ================================================
LoadDataType WEC62 = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec68: WORD 'WEC6A' codep=0x7394 wordp=0xec6a
// ================================================
LoadDataType WEC6A = {PLANETIDX, 0x0d, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec70: WORD 'WEC72' codep=0x7394 wordp=0xec72
// ================================================
LoadDataType WEC72 = {PLANETIDX, 0x0e, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec78: WORD 'WEC7A' codep=0x7394 wordp=0xec7a
// ================================================
// orphan
LoadDataType WEC7A = {PLANETIDX, 0x0f, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec80: WORD 'WEC82' codep=0x7394 wordp=0xec82
// ================================================
LoadDataType WEC82 = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec88: WORD 'WEC8A' codep=0x7394 wordp=0xec8a
// ================================================
LoadDataType WEC8A = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec90: WORD 'WEC92' codep=0x7394 wordp=0xec92
// ================================================
LoadDataType WEC92 = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec98: WORD 'WEC9A' codep=0x7420 wordp=0xec9a
// ================================================
IFieldType WEC9A = {TRADERSIDX, 0x0b, 0x01};

// ================================================
// 0xec9d: WORD 'WEC9F' codep=0x7420 wordp=0xec9f
// ================================================
IFieldType WEC9F = {TRADERSIDX, 0x0c, 0x01};

// ================================================
// 0xeca2: WORD 'WECA4' codep=0x7420 wordp=0xeca4
// ================================================
IFieldType WECA4 = {TRADERSIDX, 0x11, 0x03};

// ================================================
// 0xeca7: WORD 'WECA9' codep=0x7394 wordp=0xeca9
// ================================================
LoadDataType WECA9 = {TRADERSIDX, 0x16, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xecaf: WORD 'WECB1' codep=0x7394 wordp=0xecb1
// ================================================
LoadDataType WECB1 = {TRADERSIDX, 0x14, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xecb7: WORD 'WECB9' codep=0x7394 wordp=0xecb9
// ================================================
LoadDataType WECB9 = {CREATUREIDX, 0x1c, 0x01, 0x22, 0x6f07};

// ================================================
// 0xecbf: WORD 'WECC1' codep=0x7394 wordp=0xecc1
// ================================================
LoadDataType WECC1 = {CREATUREIDX, 0x1b, 0x01, 0x22, 0x6f07};

// ================================================
// 0xecc7: WORD 'WECC9' codep=0x7420 wordp=0xecc9
// ================================================
IFieldType WECC9 = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xeccc: WORD 'WECCE' codep=0x7420 wordp=0xecce
// ================================================
IFieldType WECCE = {CREATUREIDX, 0x16, 0x01};

// ================================================
// 0xecd1: WORD 'WECD3' codep=0x7420 wordp=0xecd3
// ================================================
IFieldType WECD3 = {CREATUREIDX, 0x17, 0x01};

// ================================================
// 0xecd6: WORD 'WECD8' codep=0x7420 wordp=0xecd8
// ================================================
IFieldType WECD8 = {CREATUREIDX, 0x18, 0x01};

// ================================================
// 0xecdb: WORD 'WECDD' codep=0x7420 wordp=0xecdd
// ================================================
IFieldType WECDD = {CREATUREIDX, 0x19, 0x01};

// ================================================
// 0xece0: WORD 'WECE2' codep=0x224c wordp=0xece2 params=0 returns=1
// ================================================
// orphan

void WECE2() // WECE2
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xecec: WORD 'WECEE' codep=0x224c wordp=0xecee params=0 returns=1
// ================================================

void WECEE() // WECEE
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xecf6: WORD 'WECF8' codep=0x224c wordp=0xecf8 params=0 returns=1
// ================================================

void WECF8() // WECF8
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xed02: WORD 'WED04' codep=0x224c wordp=0xed04 params=0 returns=1
// ================================================
// orphan

void WED04() // WED04
{
  WECEE(); // WECEE
  if (Pop() != 0)
  {
    Push(-1);
    return;
  }
  Push(1);
}


// ================================================
// 0xed14: WORD 'WED16' codep=0x224c wordp=0xed16 params=2 returns=2
// ================================================

void WED16() // WED16
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xed22: WORD 'WED24' codep=0x224c wordp=0xed24 params=0 returns=0
// ================================================

void WED24() // WED24
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xed2a: WORD 'WED2C' codep=0x224c wordp=0xed2c params=0 returns=0
// ================================================

void WED2C() // WED2C
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xed32: WORD 'WED34' codep=0x224c wordp=0xed34 params=2 returns=0
// ================================================

void WED34() // WED34
{
  WED16(); // WED16
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
}


// ================================================
// 0xed44: WORD 'WED46' codep=0x224c wordp=0xed46
// ================================================

void WED46() // WED46
{
  WED24(); // WED24
  LoadData(WECB1); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed50: WORD 'WED52' codep=0x224c wordp=0xed52 params=0 returns=2
// ================================================

void WED52() // WED52
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
// 0xed6e: WORD 'WED70' codep=0x224c wordp=0xed70 params=0 returns=2
// ================================================

void WED70() // WED70
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
// 0xed8c: WORD 'WED8E' codep=0x224c wordp=0xed8e params=0 returns=4
// ================================================

void WED8E() // WED8E
{
  WED52(); // WED52
  WED70(); // WED70
}


// ================================================
// 0xed94: WORD 'WED96' codep=0x224c wordp=0xed96
// ================================================
// orphan

void WED96() // WED96
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WEC7A); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEC82); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedac: WORD 'WEDAE' codep=0x224c wordp=0xedae params=0 returns=2
// ================================================

void WEDAE() // WEDAE
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xedb8: WORD 'WEDBA' codep=0x224c wordp=0xedba params=2 returns=0
// ================================================

void WEDBA() // WEDBA
{
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xedc4: WORD 'WEDC6' codep=0x224c wordp=0xedc6
// ================================================

void WEDC6() // WEDC6
{
  _2DUP(); // 2DUP
  IsINVIS(); // ?INVIS
  Push(!Pop() | !Read16(pp_MOVED)); //  NOT MOVED @ NOT OR
}


// ================================================
// 0xedd6: WORD 'WEDD8' codep=0x224c wordp=0xedd8 params=2 returns=2
// ================================================

void WEDD8() // WEDD8
{
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  SWAP(); // SWAP
  Push(Pop() - (Read16(pp_XCON) + 1)); //  XCON @ 1+ -
  SWAP(); // SWAP
  Push(Pop() - (Read16(pp_YCON) + 1)); //  YCON @ 1+ -
}


// ================================================
// 0xedf4: WORD 'WEDF6' codep=0x224c wordp=0xedf6
// ================================================

void WEDF6() // WEDF6
{
  _2DUP(); // 2DUP
  WEDD8(); // WEDD8
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x001f);
  _gt_(); // >
}


// ================================================
// 0xee06: WORD 'WEE08' codep=0x224c wordp=0xee08
// ================================================

void WEE08() // WEE08
{
  _2DUP(); // 2DUP
  WEDD8(); // WEDD8
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x0040);
  _st_(); // <
}


// ================================================
// 0xee18: WORD 'WEE1A' codep=0x224c wordp=0xee1a
// ================================================

void WEE1A() // WEE1A
{
  _2DUP(); // 2DUP
  WEDD8(); // WEDD8
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x003f);
  _gt_(); // >
}


// ================================================
// 0xee2a: WORD 'WEE2C' codep=0x224c wordp=0xee2c
// ================================================
// orphan

void WEE2C() // WEE2C
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
  WED96(); // WED96
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
// 0xee5c: WORD 'WEE5E' codep=0x224c wordp=0xee5e params=0 returns=0
// ================================================

void WEE5E() // WEE5E
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0029?1:0); //  0x0029 =
  if (Pop() == 0) return;
  GetINST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  Push(3);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Pop() + 2); //  2+
  }
  StoreINST_dash_S(); // !INST-S
}


// ================================================
// 0xee7c: WORD 'WEE7E' codep=0x224c wordp=0xee7e
// ================================================

void WEE7E() // WEE7E
{
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xee5e); // 'WEE5E'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee90: WORD 'WEE92' codep=0x224c wordp=0xee92 params=2 returns=3
// ================================================

void WEE92() // WEE92
{
  unsigned short int a, b;
  Push(Read16(cc_TRUE)); // TRUE
  a = Pop(); // >R
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  do
  {
    _2DUP(); // 2DUP
    WEDAE(); // WEDAE
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Push(a); // R>
      Pop(); // DROP
      Push(Read16(cc_FALSE)); // FALSE
      b = Pop(); // >R
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(b); // R>
}


// ================================================
// 0xeebe: WORD 'WEEC0' codep=0x224c wordp=0xeec0
// ================================================

void WEEC0() // WEEC0
{
  unsigned short int a, b;
  WEDF6(); // WEDF6
  a = Pop(); // >R
  WEDC6(); // WEDC6
  Push(Pop() & a); //  R> AND
  b = Pop(); // >R
  WEDF6(); // WEDF6
  Push(Pop() & !Read16(pp_MOVED) | b); //  MOVED @ NOT AND R> OR
}


// ================================================
// 0xeedc: WORD 'WEEDE' codep=0x1d29 wordp=0xeede
// ================================================
// 0xeede: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x3b 0x2d 0x12 0x41 0x5c 0xae 0x0b ' ALLOT ;- A\  '

// ================================================
// 0xeeec: WORD 'WEEEE' codep=0x224c wordp=0xeeee
// ================================================

void WEEEE() // WEEEE
{
  WED2C(); // WED2C
  LoadData(WEC8A); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  Push(0x0059);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(pp_WEEDE); // WEEDE
  Push(0x000e);
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xef08: WORD 'WEF0A' codep=0x224c wordp=0xef0a params=0 returns=1
// ================================================

void WEF0A() // WEF0A
{
  Push(-2);
  Push(3);
  RRND(); // RRND
}


// ================================================
// 0xef12: WORD 'WEF14' codep=0x224c wordp=0xef14
// ================================================

void WEF14() // WEF14
{
  WEDBA(); // WEDBA
  LoadData(WECB9); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  Push(1);
  Push(0x65e1+WECDD.offset); // WECDD<IFIELD>
  C_ex__2(); // C!_2
  Push(0);
  Push(0x65e1+WECD8.offset); // WECD8<IFIELD>
  C_ex__2(); // C!_2
  Push(1);
  Push(0x65e1+WECD3.offset); // WECD3<IFIELD>
  C_ex__2(); // C!_2
  LoadData(WECC1); // from 'CREATURE'
  Push(((Read16(Pop())&0xFF) & 1)==0?1:0); //  C@ 1 AND 0=
  if (Pop() == 0) return;
  WEF0A(); // WEF0A
  Push(0x65e1+WECC9.offset); // WECC9<IFIELD>
  C_ex__2(); // C!_2
  WEF0A(); // WEF0A
  Push(0x65e1+WECCE.offset); // WECCE<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xef4c: WORD 'WEF4E' codep=0x224c wordp=0xef4e params=1 returns=2
// ================================================

void WEF4E() // WEF4E
{
  Push(0x000d);
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + pp_WEEDE)&0xFF); //  WEEDE + C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    SWAP(); // SWAP
    Push(Read16((Pop() + 7) + pp_WEEDE)&0xFF); //  7 + WEEDE + C@
    WECF8(); // WECF8
    _gt_(); // >
    if (Pop() != 0)
    {
      Push(0x0044);
      SWAP(); // SWAP
      ICREATE(); // ICREATE
      Push(1);
    } else
    {
      Pop(); // DROP
      Push(0);
    }
    return;
  }
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xef92: WORD 'WEF94' codep=0x224c wordp=0xef94
// ================================================

void WEF94() // WEF94
{
  unsigned short int i, imax, a;
  WEEEE(); // WEEEE

  i = 0;
  imax = 0x005b;
  do // (DO)
  {
    WED8E(); // WED8E
    WEEC0(); // WEEC0
    a = Pop(); // >R
    WEE08(); // WEE08
    Push(Pop() & a); //  R> AND
    if (Pop() != 0)
    {
      Push(i); // I
      WEF4E(); // WEF4E
      if (Pop() != 0)
      {
        _2DUP(); // 2DUP
        _gt_C_plus_S(); // >C+S
        WED34(); // WED34
        WEF14(); // WEF14
        ICLOSE(); // ICLOSE
      } else
      {
        Pop(); Pop(); // 2DROP
      }
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xefd2: WORD 'WEFD4' codep=0x224c wordp=0xefd4
// ================================================

void WEFD4() // WEFD4
{
  WED2C(); // WED2C
  LoadData(WEC8A); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  if (Pop() == 0) return;
  WEF94(); // WEF94
}


// ================================================
// 0xefe4: WORD 'WEFE6' codep=0x224c wordp=0xefe6
// ================================================

void WEFE6() // WEFE6
{
  LoadData(WEC62); // from 'PLANET'
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
// 0xf014: WORD 'WF016' codep=0x224c wordp=0xf016 params=1 returns=1
// ================================================

void WF016() // WF016
{
  Push(1);
  WECEE(); // WECEE
  if (Pop() != 0)
  {
    _dash_(); // -
    return;
  }
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf028: WORD 'WF02A' codep=0x224c wordp=0xf02a params=0 returns=0
// ================================================

void WF02A() // WF02A
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    Push(-1);
  } else
  {
    Push(Read16(pp_STARDAT)); // STARDAT @
  }
  Push(0x65e1+INST_dash_DA.offset); // INST-DA<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf042: WORD 'WF044' codep=0x224c wordp=0xf044
// ================================================

void WF044() // WF044
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
    LoadData(WEC62); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    LoadData(WEC6A); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  Push(0x005a);
  _st_(); // <
  if (Pop() != 0)
  {
    LoadData(WEC72); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  WEFE6(); // WEFE6
}


// ================================================
// 0xf08e: WORD 'WF090' codep=0x224c wordp=0xf090
// ================================================

void WF090() // WF090
{
  Push(0x001a);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  WED34(); // WED34
  _gt_C_plus_S(); // >C+S
  WEDBA(); // WEDBA
  Push(0x000a);
  Push(0x0064);
  RRND(); // RRND
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf0b0: WORD 'WF0B2' codep=0x224c wordp=0xf0b2 params=2 returns=0
// ================================================

void WF0B2() // WF0B2
{
  Push(0);
  Push(Read16(pp_WEC46)); // WEC46 @
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    WF016(); // WF016
    SWAP(); // SWAP
    WF016(); // WF016
    SWAP(); // SWAP
    Push(0x0017);
    WF090(); // WF090
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf0d8: WORD 'WF0DA' codep=0x224c wordp=0xf0da
// ================================================

void WF0DA() // WF0DA
{
  unsigned short int i, imax, a;
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WEC4A); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x000a);
    _slash_(); // /
    Push(0);
    SWAP(); // SWAP
    RRND(); // RRND

    i = 0;
    imax = Pop();
    do // (DO)
    {
      WED52(); // WED52
      WED70(); // WED70
      WEE1A(); // WEE1A
      a = Pop(); // >R
      WEDC6(); // WEDC6
      Push(Pop() & a); //  R> AND
      if (Pop() != 0)
      {
        WF044(); // WF044
        WF090(); // WF090
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
// 0xf11e: WORD 'WF120' codep=0x224c wordp=0xf120
// ================================================

void WF120() // WF120
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
    WEDAE(); // WEDAE
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
// 0xf15c: WORD 'WF15E' codep=0x224c wordp=0xf15e params=0 returns=0
// ================================================

void WF15E() // WF15E
{
}


// ================================================
// 0xf160: WORD 'WF162' codep=0x224c wordp=0xf162
// ================================================

void WF162() // WF162
{
  unsigned short int a;
  WED8E(); // WED8E
  WEDF6(); // WEDF6
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  if (Pop() != 0)
  {
    ROT(); // ROT
    Push(0x0029);
    SWAP(); // SWAP
    ICREATE(); // ICREATE
    _2DUP(); // 2DUP
    WED34(); // WED34
    _gt_C_plus_S(); // >C+S
    _2DUP(); // 2DUP
    WEDBA(); // WEDBA
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); // DROP
  }
  Push(a); // R>
}


// ================================================
// 0xf18e: WORD 'WF190' codep=0x224c wordp=0xf190 params=0 returns=0
// ================================================

void WF190() // WF190
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001b?1:0); //  0x001b =
  if (Pop() == 0) return;
  WF02A(); // WF02A
}


// ================================================
// 0xf1a0: WORD 'WF1A2' codep=0x224c wordp=0xf1a2 params=0 returns=1
// ================================================

void WF1A2() // WF1A2
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  Push(0x0027);
  _eq_SPECIE(); // =SPECIE
  Push(0x003a);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1b8: WORD 'WF1BA' codep=0x224c wordp=0xf1ba params=1 returns=3
// ================================================

void WF1BA() // WF1BA
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
// 0xf1d8: WORD 'WF1DA' codep=0x224c wordp=0xf1da params=0 returns=4
// ================================================

void WF1DA() // WF1DA
{
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  WEDAE(); // WEDAE
  WF1BA(); // WF1BA
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1e6: WORD 'WF1E8' codep=0x224c wordp=0xf1e8 params=0 returns=3
// ================================================

void WF1E8() // WF1E8
{
  WEDAE(); // WEDAE
  WF1BA(); // WF1BA
  _2OVER(); // 2OVER
  D_eq_(); // D=
}


// ================================================
// 0xf1f2: WORD 'WF1F4' codep=0x224c wordp=0xf1f4
// ================================================

void WF1F4() // WF1F4
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
  WED34(); // WED34
  _gt_C_plus_S(); // >C+S
  WEDBA(); // WEDBA
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf21a: WORD 'WF21C' codep=0x224c wordp=0xf21c params=1 returns=0
// ================================================

void WF21C() // WF21C
{
  unsigned short int a, b, c, d;
  a = Pop(); // >R
  Push(1);
  Push(pp__ro_PLANET); // (PLANET
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
      WF1DA(); // WF1DA
      WF1E8(); // WF1E8
      if (Pop() != 0)
      {
        WEDAE(); // WEDAE
        Push(0x0029);
        Push(4);
        IsCLASS_slash_(); // ?CLASS/
        c = Pop(); // >R
        Pop(); Pop(); // 2DROP
        Push(c); // R>
        if (Pop() != 0)
        {
          _2DUP(); // 2DUP
          WF0B2(); // WF0B2
        }
        WF190(); // WF190
        IEXTRAC(); // IEXTRAC
        IPREV(); // IPREV
        Push(pp_THIS_dash_RE); // THIS-RE
        _1_dot_5_at_(); // 1.5@
        IINSERT(); // IINSERT
        Push(!(a==0x0029?1:0)); // I' 0x0029 = NOT
        d = Pop(); // >R
        WF120(); // WF120
        Push(!Pop() & d); //  NOT R> AND
        if (Pop() != 0)
        {
          Push(a); // I'
          WF1F4(); // WF1F4
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
// 0xf2a0: WORD 'WF2A2' codep=0x224c wordp=0xf2a2 params=0 returns=1
// ================================================

void WF2A2() // WF2A2
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push2Words("*GD");
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(Read16(pp_PAST)); // PAST @
    return;
  }
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xf2ba: WORD 'WF2BC' codep=0x224c wordp=0xf2bc params=0 returns=0
// ================================================

void WF2BC() // WF2BC
{
  WF2A2(); // WF2A2
  WF1A2(); // WF1A2
  if (Pop() != 0)
  {
    Push(Pop() & !Read16(pp_PAST)); //  PAST @ NOT AND
  }
  if (Pop() == 0) return;
  Push(0x001b);
  WF21C(); // WF21C
}


// ================================================
// 0xf2d8: WORD 'WF2DA' codep=0x224c wordp=0xf2da params=0 returns=0
// ================================================

void WF2DA() // WF2DA
{
  WF2A2(); // WF2A2
  if (Pop() == 0) return;
  Push(0x001c);
  WF21C(); // WF21C
}


// ================================================
// 0xf2e8: WORD 'WF2EA' codep=0x224c wordp=0xf2ea params=0 returns=0
// ================================================

void WF2EA() // WF2EA
{
  WF2A2(); // WF2A2
  if (Pop() == 0) return;
  Push(0x0029);
  WF21C(); // WF21C
}


// ================================================
// 0xf2f8: WORD 'WF2FA' codep=0x224c wordp=0xf2fa params=0 returns=1
// ================================================

void WF2FA() // WF2FA
{
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xf2fe: WORD 'WF300' codep=0x224c wordp=0xf300
// ================================================

void WF300() // WF300
{
  Push2Words("*ARTH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001b);
  Push(0);
  IFIND(); // IFIND
  WF1A2(); // WF1A2
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WEDBA(); // WEDBA
    IEXTRAC(); // IEXTRAC
    WED34(); // WED34
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  WF02A(); // WF02A
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf32c: WORD 'WF32E' codep=0x224c wordp=0xf32e params=2 returns=2
// ================================================

void WF32E() // WF32E
{
  WF016(); // WF016
  SWAP(); // SWAP
  WF016(); // WF016
  SWAP(); // SWAP
}


// ================================================
// 0xf338: WORD 'WF33A' codep=0x224c wordp=0xf33a params=0 returns=0
// ================================================

void WF33A() // WF33A
{
  WF2FA(); // WF2FA
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
  WF300(); // WF300
  WEE7E(); // WEE7E
}


// ================================================
// 0xf348: WORD 'WF34A' codep=0x224c wordp=0xf34a
// ================================================

void WF34A() // WF34A
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
// 0xf372: WORD 'WF374' codep=0x224c wordp=0xf374
// ================================================

void WF374() // WF374
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  Push(0xec52); // 'WEC52'
  WF34A(); // WF34A
  if (Pop() != 0)
  {
    Push(2);
    WF162(); // WF162
    if (Pop() != 0)
    {
      WF15E(); // WF15E
    }
    WF0B2(); // WF0B2
  }
  Push(0xec5a); // 'WEC5A'
  WF34A(); // WF34A
  if (Pop() != 0)
  {
    WF1A2(); // WF1A2
    if (Pop() != 0)
    {
      Push(6);
    } else
    {
      Push(1);
    }
    WF162(); // WF162
    if (Pop() != 0)
    {
      WF15E(); // WF15E
      WF33A(); // WF33A
    }
    Pop(); Pop(); // 2DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3b6: WORD 'WF3B8' codep=0x224c wordp=0xf3b8
// ================================================

void WF3B8() // WF3B8
{
  WF32E(); // WF32E
  WEEC0(); // WEEC0
}


// ================================================
// 0xf3be: WORD 'WF3C0' codep=0x224c wordp=0xf3c0
// ================================================

void WF3C0() // WF3C0
{
  Push(pp_WEC42); // WEC42
  ON_2(); // ON_2
  Push(Read16(cc_WEC36)); // WEC36
  WED24(); // WED24
  LoadData(WEC92); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  ICREATE(); // ICREATE
}


// ================================================
// 0xf3d2: WORD 'WF3D4' codep=0x224c wordp=0xf3d4
// ================================================

void WF3D4() // WF3D4
{
  unsigned short int a;
  WF3B8(); // WF3B8
  a = Pop(); // >R
  WEE92(); // WEE92
  Push(Pop() & a); //  R> AND
  if (Pop() != 0)
  {
    WF3C0(); // WF3C0
    _2DUP(); // 2DUP
    _gt_C_plus_S(); // >C+S
    _2SWAP(); // 2SWAP
    WEDBA(); // WEDBA
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
  Push2Words("0.");
}


// ================================================
// 0xf3f8: WORD 'WF3FA' codep=0x224c wordp=0xf3fa
// ================================================

void WF3FA() // WF3FA
{
  Push(0);
  WED46(); // WED46
  Push(Pop() * 4); //  4 *
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  _gt_FLAG(); // >FLAG
  WED24(); // WED24
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() & !Read16(pp_PAST)); //  PAST @ NOT AND
}


// ================================================
// 0xf41c: WORD 'WF41E' codep=0x224c wordp=0xf41e
// ================================================

void WF41E() // WF41E
{
  unsigned short int i, imax;
  Push(pp_WEC42); // WEC42
  _099(); // 099
  WED8E(); // WED8E
  ROT(); // ROT

  i = 0;
  imax = Pop();
  do // (DO)
  {
    WF32E(); // WF32E
    _2DUP(); // 2DUP
    WF3D4(); // WF3D4
    WED34(); // WED34
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf438: WORD 'WF43A' codep=0x224c wordp=0xf43a
// ================================================

void WF43A() // WF43A
{
  unsigned short int a, b;
  WECF8(); // WECF8
  Push(0x003c);
  _st_(); // <
  a = Pop(); // >R
  WF3B8(); // WF3B8
  Push(Pop() & a); //  R> AND
  WED24(); // WED24
  LoadData(WECA9); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  GetINST_dash_S(); // @INST-S
  b = Pop(); // >R
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | (b==7?1:0)); //  R> 7 = OR
  if (Pop() != 0)
  {
    Push(Read16(cc_WEC3E)); // WEC3E
    Push(0);
    ICREATE(); // ICREATE
    _2DUP(); // 2DUP
    WED34(); // WED34
    _gt_C_plus_S(); // >C+S
    WEDBA(); // WEDBA
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf47e: WORD 'WF480' codep=0x224c wordp=0xf480
// ================================================

void WF480() // WF480
{
  Push(Read16(cc_WEC3A)); // WEC3A
  WED24(); // WED24
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  ICREATE(); // ICREATE
}


// ================================================
// 0xf48c: WORD 'WF48E' codep=0x224c wordp=0xf48e
// ================================================

void WF48E() // WF48E
{
  Push(1);
  Push(0x65e1+WEC9F.offset); // WEC9F<IFIELD>
  C_ex__2(); // C!_2
  LoadData(WEC92); // from 'TRADERS'
  Push((Read16(Pop())&0xFF) - 1); //  C@ 1-
  Push(1);
  MAX(); // MAX
  Push(0x65e1+WEC9A.offset); // WEC9A<IFIELD>
  C_ex__2(); // C!_2
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x001f);
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(0x65e1+WECA4.offset); // WECA4<IFIELD>
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf4be: WORD 'WF4C0' codep=0x224c wordp=0xf4c0
// ================================================

void WF4C0() // WF4C0
{
  unsigned short int i, imax;
  Push(0);
  WED46(); // WED46
  _3_star_(); // 3*
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(!(Pop()==0?1:0) & Read16(pp_WEC42)); //  0= NOT WEC42 @ AND
  if (Pop() != 0)
  {

    i = 0;
    imax = Pop();
    do // (DO)
    {
      WED8E(); // WED8E
      WF3B8(); // WF3B8
      if (Pop() != 0)
      {
        WF480(); // WF480
        _2DUP(); // 2DUP
        WED34(); // WED34
        _gt_C_plus_S(); // >C+S
        WEDBA(); // WEDBA
        WF48E(); // WF48E
        ICLOSE(); // ICLOSE
      } else
      {
        Pop(); Pop(); // 2DROP
      }
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf504: WORD 'WF506' codep=0x224c wordp=0xf506 params=0 returns=3
// ================================================

void WF506() // WF506
{
  MAXSPAC(); // MAXSPAC
  _1_dot_5_at_(); // 1.5@
  GetNEWSPA(); // @NEWSPA
  Push(0x017c);
  Push(0);
  D_plus_(); // D+
  D_st_(); // D<
  Push(!(Pop() & Read16(pp_IsCRITIC))); //  ?CRITIC @ AND NOT
}


// ================================================
// 0xf520: WORD 'POPULA' codep=0x224c wordp=0xf52b params=0 returns=2
// ================================================
// entry

void POPULA() // POPULA
{
  WF2EA(); // WF2EA
  WF2DA(); // WF2DA
  WF2BC(); // WF2BC
  WF506(); // WF506
  if (Pop() == 0) return;
  WF374(); // WF374
  WF3FA(); // WF3FA
  if (Pop() != 0)
  {
    WF41E(); // WF41E
    WF43A(); // WF43A
    WF4C0(); // WF4C0
  } else
  {
    Pop(); // DROP
  }
  WF0DA(); // WF0DA
  Push(Read16(pp_PLHI)); // PLHI @
  if (Pop() == 0) return;
  WEFD4(); // WEFD4
}

// 0xf559: db 0x53 0x45 0x45 0x44 0x5f 0x5f 0x5f 0x00 'SEED___ '

