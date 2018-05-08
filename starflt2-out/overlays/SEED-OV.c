// ====== OVERLAY 'SEED-OV' ======
// store offset = 0xec10
// overlay size   = 0x0950

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xec26  codep:0x2214 parp:0xec26 size:0x0002 C-string:'UNK_0xec26'
//      UNK_0xec2a  codep:0x2214 parp:0xec2a size:0x0002 C-string:'UNK_0xec2a'
//      UNK_0xec2e  codep:0x2214 parp:0xec2e size:0x0002 C-string:'UNK_0xec2e'
//      UNK_0xec32  codep:0x2214 parp:0xec32 size:0x0002 C-string:'UNK_0xec32'
//      UNK_0xec36  codep:0x2214 parp:0xec36 size:0x0002 C-string:'UNK_0xec36'
//      UNK_0xec3a  codep:0x2214 parp:0xec3a size:0x0002 C-string:'UNK_0xec3a'
//      UNK_0xec3e  codep:0x2214 parp:0xec3e size:0x0002 C-string:'UNK_0xec3e'
//      UNK_0xec42  codep:0x1d29 parp:0xec42 size:0x0002 C-string:'UNK_0xec42'
//      UNK_0xec46  codep:0x1d29 parp:0xec46 size:0x0002 C-string:'UNK_0xec46'
//      UNK_0xec4a  codep:0x7394 parp:0xec4a size:0x0006 C-string:'UNK_0xec4a'
//      UNK_0xec52  codep:0x7394 parp:0xec52 size:0x0006 C-string:'UNK_0xec52'
//      UNK_0xec5a  codep:0x7394 parp:0xec5a size:0x0006 C-string:'UNK_0xec5a'
//      UNK_0xec62  codep:0x7394 parp:0xec62 size:0x0006 C-string:'UNK_0xec62'
//      UNK_0xec6a  codep:0x7394 parp:0xec6a size:0x0006 C-string:'UNK_0xec6a'
//      UNK_0xec72  codep:0x7394 parp:0xec72 size:0x0006 C-string:'UNK_0xec72'
//      UNK_0xec7a  codep:0x7394 parp:0xec7a size:0x0006 C-string:'UNK_0xec7a'
//      UNK_0xec82  codep:0x7394 parp:0xec82 size:0x0006 C-string:'UNK_0xec82'
//      UNK_0xec8a  codep:0x7394 parp:0xec8a size:0x0006 C-string:'UNK_0xec8a'
//      UNK_0xec92  codep:0x7394 parp:0xec92 size:0x0006 C-string:'UNK_0xec92'
//      UNK_0xec9a  codep:0x7420 parp:0xec9a size:0x0003 C-string:'UNK_0xec9a'
//      UNK_0xec9f  codep:0x7420 parp:0xec9f size:0x0003 C-string:'UNK_0xec9f'
//      UNK_0xeca4  codep:0x7420 parp:0xeca4 size:0x0003 C-string:'UNK_0xeca4'
//      UNK_0xeca9  codep:0x7394 parp:0xeca9 size:0x0006 C-string:'UNK_0xeca9'
//      UNK_0xecb1  codep:0x7394 parp:0xecb1 size:0x0006 C-string:'UNK_0xecb1'
//      UNK_0xecb9  codep:0x7394 parp:0xecb9 size:0x0006 C-string:'UNK_0xecb9'
//      UNK_0xecc1  codep:0x7394 parp:0xecc1 size:0x0006 C-string:'UNK_0xecc1'
//      UNK_0xecc9  codep:0x7420 parp:0xecc9 size:0x0003 C-string:'UNK_0xecc9'
//      UNK_0xecce  codep:0x7420 parp:0xecce size:0x0003 C-string:'UNK_0xecce'
//      UNK_0xecd3  codep:0x7420 parp:0xecd3 size:0x0003 C-string:'UNK_0xecd3'
//      UNK_0xecd8  codep:0x7420 parp:0xecd8 size:0x0003 C-string:'UNK_0xecd8'
//      UNK_0xecdd  codep:0x7420 parp:0xecdd size:0x0003 C-string:'UNK_0xecdd'
//      UNK_0xece2  codep:0x224c parp:0xece2 size:0x000a C-string:'UNK_0xece2'
//      UNK_0xecee  codep:0x224c parp:0xecee size:0x0008 C-string:'UNK_0xecee'
//      UNK_0xecf8  codep:0x224c parp:0xecf8 size:0x000a C-string:'UNK_0xecf8'
//      UNK_0xed04  codep:0x224c parp:0xed04 size:0x0010 C-string:'UNK_0xed04'
//      UNK_0xed16  codep:0x224c parp:0xed16 size:0x000c C-string:'UNK_0xed16'
//      UNK_0xed24  codep:0x224c parp:0xed24 size:0x0006 C-string:'UNK_0xed24'
//      UNK_0xed2c  codep:0x224c parp:0xed2c size:0x0006 C-string:'UNK_0xed2c'
//      UNK_0xed34  codep:0x224c parp:0xed34 size:0x0010 C-string:'UNK_0xed34'
//      UNK_0xed46  codep:0x224c parp:0xed46 size:0x000a C-string:'UNK_0xed46'
//      UNK_0xed52  codep:0x224c parp:0xed52 size:0x001c C-string:'UNK_0xed52'
//      UNK_0xed70  codep:0x224c parp:0xed70 size:0x001c C-string:'UNK_0xed70'
//      UNK_0xed8e  codep:0x224c parp:0xed8e size:0x0006 C-string:'UNK_0xed8e'
//      UNK_0xed96  codep:0x224c parp:0xed96 size:0x0016 C-string:'UNK_0xed96'
//      UNK_0xedae  codep:0x224c parp:0xedae size:0x000a C-string:'UNK_0xedae'
//      UNK_0xedba  codep:0x224c parp:0xedba size:0x000a C-string:'UNK_0xedba'
//      UNK_0xedc6  codep:0x224c parp:0xedc6 size:0x0010 C-string:'UNK_0xedc6'
//      UNK_0xedd8  codep:0x224c parp:0xedd8 size:0x001c C-string:'UNK_0xedd8'
//      UNK_0xedf6  codep:0x224c parp:0xedf6 size:0x0010 C-string:'UNK_0xedf6'
//      UNK_0xee08  codep:0x224c parp:0xee08 size:0x0010 C-string:'UNK_0xee08'
//      UNK_0xee1a  codep:0x224c parp:0xee1a size:0x0010 C-string:'UNK_0xee1a'
//      UNK_0xee2c  codep:0x224c parp:0xee2c size:0x0030 C-string:'UNK_0xee2c'
//      UNK_0xee5e  codep:0x224c parp:0xee5e size:0x001e C-string:'UNK_0xee5e'
//      UNK_0xee7e  codep:0x224c parp:0xee7e size:0x0012 C-string:'UNK_0xee7e'
//      UNK_0xee92  codep:0x224c parp:0xee92 size:0x002c C-string:'UNK_0xee92'
//      UNK_0xeec0  codep:0x224c parp:0xeec0 size:0x001c C-string:'UNK_0xeec0'
//      UNK_0xeede  codep:0x1d29 parp:0xeede size:0x000e C-string:'UNK_0xeede'
//      UNK_0xeeee  codep:0x224c parp:0xeeee size:0x001a C-string:'UNK_0xeeee'
//      UNK_0xef0a  codep:0x224c parp:0xef0a size:0x0008 C-string:'UNK_0xef0a'
//      UNK_0xef14  codep:0x224c parp:0xef14 size:0x0038 C-string:'UNK_0xef14'
//      UNK_0xef4e  codep:0x224c parp:0xef4e size:0x0044 C-string:'UNK_0xef4e'
//      UNK_0xef94  codep:0x224c parp:0xef94 size:0x003e C-string:'UNK_0xef94'
//      UNK_0xefd4  codep:0x224c parp:0xefd4 size:0x0010 C-string:'UNK_0xefd4'
//      UNK_0xefe6  codep:0x224c parp:0xefe6 size:0x002e C-string:'UNK_0xefe6'
//      UNK_0xf016  codep:0x224c parp:0xf016 size:0x0012 C-string:'UNK_0xf016'
//      UNK_0xf02a  codep:0x224c parp:0xf02a size:0x0018 C-string:'UNK_0xf02a'
//      UNK_0xf044  codep:0x224c parp:0xf044 size:0x004a C-string:'UNK_0xf044'
//      UNK_0xf090  codep:0x224c parp:0xf090 size:0x0020 C-string:'UNK_0xf090'
//      UNK_0xf0b2  codep:0x224c parp:0xf0b2 size:0x0026 C-string:'UNK_0xf0b2'
//      UNK_0xf0da  codep:0x224c parp:0xf0da size:0x0044 C-string:'UNK_0xf0da'
//      UNK_0xf120  codep:0x224c parp:0xf120 size:0x003c C-string:'UNK_0xf120'
//      UNK_0xf15e  codep:0x224c parp:0xf15e size:0x0002 C-string:'UNK_0xf15e'
//      UNK_0xf162  codep:0x224c parp:0xf162 size:0x002c C-string:'UNK_0xf162'
//      UNK_0xf190  codep:0x224c parp:0xf190 size:0x0010 C-string:'UNK_0xf190'
//      UNK_0xf1a2  codep:0x224c parp:0xf1a2 size:0x0016 C-string:'UNK_0xf1a2'
//      UNK_0xf1ba  codep:0x224c parp:0xf1ba size:0x001e C-string:'UNK_0xf1ba'
//      UNK_0xf1da  codep:0x224c parp:0xf1da size:0x000c C-string:'UNK_0xf1da'
//      UNK_0xf1e8  codep:0x224c parp:0xf1e8 size:0x000a C-string:'UNK_0xf1e8'
//      UNK_0xf1f4  codep:0x224c parp:0xf1f4 size:0x0026 C-string:'UNK_0xf1f4'
//      UNK_0xf21c  codep:0x224c parp:0xf21c size:0x0084 C-string:'UNK_0xf21c'
//      UNK_0xf2a2  codep:0x224c parp:0xf2a2 size:0x0018 C-string:'UNK_0xf2a2'
//      UNK_0xf2bc  codep:0x224c parp:0xf2bc size:0x001c C-string:'UNK_0xf2bc'
//      UNK_0xf2da  codep:0x224c parp:0xf2da size:0x000e C-string:'UNK_0xf2da'
//      UNK_0xf2ea  codep:0x224c parp:0xf2ea size:0x000e C-string:'UNK_0xf2ea'
//      UNK_0xf2fa  codep:0x224c parp:0xf2fa size:0x0004 C-string:'UNK_0xf2fa'
//      UNK_0xf300  codep:0x224c parp:0xf300 size:0x002c C-string:'UNK_0xf300'
//      UNK_0xf32e  codep:0x224c parp:0xf32e size:0x000a C-string:'UNK_0xf32e'
//      UNK_0xf33a  codep:0x224c parp:0xf33a size:0x000e C-string:'UNK_0xf33a'
//      UNK_0xf34a  codep:0x224c parp:0xf34a size:0x0028 C-string:'UNK_0xf34a'
//      UNK_0xf374  codep:0x224c parp:0xf374 size:0x0042 C-string:'UNK_0xf374'
//      UNK_0xf3b8  codep:0x224c parp:0xf3b8 size:0x0006 C-string:'UNK_0xf3b8'
//      UNK_0xf3c0  codep:0x224c parp:0xf3c0 size:0x0012 C-string:'UNK_0xf3c0'
//      UNK_0xf3d4  codep:0x224c parp:0xf3d4 size:0x0024 C-string:'UNK_0xf3d4'
//      UNK_0xf3fa  codep:0x224c parp:0xf3fa size:0x0022 C-string:'UNK_0xf3fa'
//      UNK_0xf41e  codep:0x224c parp:0xf41e size:0x001a C-string:'UNK_0xf41e'
//      UNK_0xf43a  codep:0x224c parp:0xf43a size:0x0044 C-string:'UNK_0xf43a'
//      UNK_0xf480  codep:0x224c parp:0xf480 size:0x000c C-string:'UNK_0xf480'
//      UNK_0xf48e  codep:0x224c parp:0xf48e size:0x0030 C-string:'UNK_0xf48e'
//      UNK_0xf4c0  codep:0x224c parp:0xf4c0 size:0x0044 C-string:'UNK_0xf4c0'
//      UNK_0xf506  codep:0x224c parp:0xf506 size:0x001a C-string:'UNK_0xf506'
//          POPULA  codep:0x224c parp:0xf52b size:0x0000 C-string:'POPULA'

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
const unsigned short int pp_UNK_0xec42 = 0xec42; // UNK_0xec42 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xec46 = 0xec46; // UNK_0xec46 size: 2
// {0x01, 0x00}

const unsigned short int pp_UNK_0xeede = 0xeede; // UNK_0xeede size: 14
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x3b, 0x2d, 0x12, 0x41, 0x5c, 0xae, 0x0b}


const unsigned short int cc_UNK_0xec26 = 0xec26; // UNK_0xec26
const unsigned short int cc_UNK_0xec2a = 0xec2a; // UNK_0xec2a
const unsigned short int cc_UNK_0xec2e = 0xec2e; // UNK_0xec2e
const unsigned short int cc_UNK_0xec32 = 0xec32; // UNK_0xec32
const unsigned short int cc_UNK_0xec36 = 0xec36; // UNK_0xec36
const unsigned short int cc_UNK_0xec3a = 0xec3a; // UNK_0xec3a
const unsigned short int cc_UNK_0xec3e = 0xec3e; // UNK_0xec3e


// 0xec22: db 0x95 0x00 '  '

// ================================================
// 0xec24: WORD 'UNK_0xec26' codep=0x2214 parp=0xec26
// ================================================
// orphan
// 0xec26: dw 0x0020

// ================================================
// 0xec28: WORD 'UNK_0xec2a' codep=0x2214 parp=0xec2a
// ================================================
// orphan
// 0xec2a: dw 0x0043

// ================================================
// 0xec2c: WORD 'UNK_0xec2e' codep=0x2214 parp=0xec2e
// ================================================
// orphan
// 0xec2e: dw 0x0044

// ================================================
// 0xec30: WORD 'UNK_0xec32' codep=0x2214 parp=0xec32
// ================================================
// orphan
// 0xec32: dw 0x001c

// ================================================
// 0xec34: WORD 'UNK_0xec36' codep=0x2214 parp=0xec36
// ================================================
// 0xec36: dw 0x001f

// ================================================
// 0xec38: WORD 'UNK_0xec3a' codep=0x2214 parp=0xec3a
// ================================================
// 0xec3a: dw 0x0015

// ================================================
// 0xec3c: WORD 'UNK_0xec3e' codep=0x2214 parp=0xec3e
// ================================================
// 0xec3e: dw 0x0021

// ================================================
// 0xec40: WORD 'UNK_0xec42' codep=0x1d29 parp=0xec42
// ================================================
// 0xec42: db 0x3a 0x20 ': '

// ================================================
// 0xec44: WORD 'UNK_0xec46' codep=0x1d29 parp=0xec46
// ================================================
// 0xec46: db 0x01 0x00 '  '

// ================================================
// 0xec48: WORD 'UNK_0xec4a' codep=0x7394 parp=0xec4a
// ================================================
LoadDataType UNK_0xec4a = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec50: WORD 'UNK_0xec52' codep=0x7394 parp=0xec52
// ================================================
// orphan
LoadDataType UNK_0xec52 = {PLANETIDX, 0x0a, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec58: WORD 'UNK_0xec5a' codep=0x7394 parp=0xec5a
// ================================================
// orphan
LoadDataType UNK_0xec5a = {PLANETIDX, 0x0b, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec60: WORD 'UNK_0xec62' codep=0x7394 parp=0xec62
// ================================================
LoadDataType UNK_0xec62 = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec68: WORD 'UNK_0xec6a' codep=0x7394 parp=0xec6a
// ================================================
LoadDataType UNK_0xec6a = {PLANETIDX, 0x0d, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec70: WORD 'UNK_0xec72' codep=0x7394 parp=0xec72
// ================================================
LoadDataType UNK_0xec72 = {PLANETIDX, 0x0e, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec78: WORD 'UNK_0xec7a' codep=0x7394 parp=0xec7a
// ================================================
// orphan
LoadDataType UNK_0xec7a = {PLANETIDX, 0x0f, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec80: WORD 'UNK_0xec82' codep=0x7394 parp=0xec82
// ================================================
LoadDataType UNK_0xec82 = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec88: WORD 'UNK_0xec8a' codep=0x7394 parp=0xec8a
// ================================================
LoadDataType UNK_0xec8a = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec90: WORD 'UNK_0xec92' codep=0x7394 parp=0xec92
// ================================================
LoadDataType UNK_0xec92 = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec98: WORD 'UNK_0xec9a' codep=0x7420 parp=0xec9a
// ================================================
IFieldType UNK_0xec9a = {TRADERSIDX, 0x0b, 0x01};

// ================================================
// 0xec9d: WORD 'UNK_0xec9f' codep=0x7420 parp=0xec9f
// ================================================
IFieldType UNK_0xec9f = {TRADERSIDX, 0x0c, 0x01};

// ================================================
// 0xeca2: WORD 'UNK_0xeca4' codep=0x7420 parp=0xeca4
// ================================================
IFieldType UNK_0xeca4 = {TRADERSIDX, 0x11, 0x03};

// ================================================
// 0xeca7: WORD 'UNK_0xeca9' codep=0x7394 parp=0xeca9
// ================================================
LoadDataType UNK_0xeca9 = {TRADERSIDX, 0x16, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xecaf: WORD 'UNK_0xecb1' codep=0x7394 parp=0xecb1
// ================================================
LoadDataType UNK_0xecb1 = {TRADERSIDX, 0x14, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xecb7: WORD 'UNK_0xecb9' codep=0x7394 parp=0xecb9
// ================================================
LoadDataType UNK_0xecb9 = {CREATUREIDX, 0x1c, 0x01, 0x22, 0x6f07};

// ================================================
// 0xecbf: WORD 'UNK_0xecc1' codep=0x7394 parp=0xecc1
// ================================================
LoadDataType UNK_0xecc1 = {CREATUREIDX, 0x1b, 0x01, 0x22, 0x6f07};

// ================================================
// 0xecc7: WORD 'UNK_0xecc9' codep=0x7420 parp=0xecc9
// ================================================
IFieldType UNK_0xecc9 = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xeccc: WORD 'UNK_0xecce' codep=0x7420 parp=0xecce
// ================================================
IFieldType UNK_0xecce = {CREATUREIDX, 0x16, 0x01};

// ================================================
// 0xecd1: WORD 'UNK_0xecd3' codep=0x7420 parp=0xecd3
// ================================================
IFieldType UNK_0xecd3 = {CREATUREIDX, 0x17, 0x01};

// ================================================
// 0xecd6: WORD 'UNK_0xecd8' codep=0x7420 parp=0xecd8
// ================================================
IFieldType UNK_0xecd8 = {CREATUREIDX, 0x18, 0x01};

// ================================================
// 0xecdb: WORD 'UNK_0xecdd' codep=0x7420 parp=0xecdd
// ================================================
IFieldType UNK_0xecdd = {CREATUREIDX, 0x19, 0x01};

// ================================================
// 0xece0: WORD 'UNK_0xece2' codep=0x224c parp=0xece2 params=0 returns=1
// ================================================
// orphan

void UNK_0xece2() // UNK_0xece2
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xecec: WORD 'UNK_0xecee' codep=0x224c parp=0xecee params=0 returns=1
// ================================================

void UNK_0xecee() // UNK_0xecee
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xecf6: WORD 'UNK_0xecf8' codep=0x224c parp=0xecf8 params=0 returns=1
// ================================================

void UNK_0xecf8() // UNK_0xecf8
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xed02: WORD 'UNK_0xed04' codep=0x224c parp=0xed04 params=0 returns=1
// ================================================
// orphan

void UNK_0xed04() // UNK_0xed04
{
  UNK_0xecee(); // UNK_0xecee
  if (Pop() != 0)
  {
    Push(-1);
    return;
  }
  Push(1);
}


// ================================================
// 0xed14: WORD 'UNK_0xed16' codep=0x224c parp=0xed16 params=2 returns=2
// ================================================

void UNK_0xed16() // UNK_0xed16
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xed22: WORD 'UNK_0xed24' codep=0x224c parp=0xed24 params=0 returns=0
// ================================================

void UNK_0xed24() // UNK_0xed24
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xed2a: WORD 'UNK_0xed2c' codep=0x224c parp=0xed2c params=0 returns=0
// ================================================

void UNK_0xed2c() // UNK_0xed2c
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xed32: WORD 'UNK_0xed34' codep=0x224c parp=0xed34 params=2 returns=0
// ================================================

void UNK_0xed34() // UNK_0xed34
{
  UNK_0xed16(); // UNK_0xed16
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
}


// ================================================
// 0xed44: WORD 'UNK_0xed46' codep=0x224c parp=0xed46
// ================================================

void UNK_0xed46() // UNK_0xed46
{
  UNK_0xed24(); // UNK_0xed24
  LoadData(UNK_0xecb1); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed50: WORD 'UNK_0xed52' codep=0x224c parp=0xed52 params=0 returns=2
// ================================================

void UNK_0xed52() // UNK_0xed52
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
// 0xed6e: WORD 'UNK_0xed70' codep=0x224c parp=0xed70 params=0 returns=2
// ================================================

void UNK_0xed70() // UNK_0xed70
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
// 0xed8c: WORD 'UNK_0xed8e' codep=0x224c parp=0xed8e params=0 returns=4
// ================================================

void UNK_0xed8e() // UNK_0xed8e
{
  UNK_0xed52(); // UNK_0xed52
  UNK_0xed70(); // UNK_0xed70
}


// ================================================
// 0xed94: WORD 'UNK_0xed96' codep=0x224c parp=0xed96
// ================================================
// orphan

void UNK_0xed96() // UNK_0xed96
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xec7a); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xec82); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedac: WORD 'UNK_0xedae' codep=0x224c parp=0xedae params=0 returns=2
// ================================================

void UNK_0xedae() // UNK_0xedae
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xedb8: WORD 'UNK_0xedba' codep=0x224c parp=0xedba params=2 returns=0
// ================================================

void UNK_0xedba() // UNK_0xedba
{
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xedc4: WORD 'UNK_0xedc6' codep=0x224c parp=0xedc6
// ================================================

void UNK_0xedc6() // UNK_0xedc6
{
  _2DUP(); // 2DUP
  IsINVIS(); // ?INVIS
  Push(!Pop() | !Read16(pp_MOVED)); //  NOT MOVED @ NOT OR
}


// ================================================
// 0xedd6: WORD 'UNK_0xedd8' codep=0x224c parp=0xedd8 params=2 returns=2
// ================================================

void UNK_0xedd8() // UNK_0xedd8
{
  Push(0x6a82); // probable 'CONTOUR'
  SETLARR(); // SETLARR
  SWAP(); // SWAP
  Push(Pop() - (Read16(pp_XCON) + 1)); //  XCON @ 1+ -
  SWAP(); // SWAP
  Push(Pop() - (Read16(pp_YCON) + 1)); //  YCON @ 1+ -
}


// ================================================
// 0xedf4: WORD 'UNK_0xedf6' codep=0x224c parp=0xedf6
// ================================================

void UNK_0xedf6() // UNK_0xedf6
{
  _2DUP(); // 2DUP
  UNK_0xedd8(); // UNK_0xedd8
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x001f);
  _gt_(); // >
}


// ================================================
// 0xee06: WORD 'UNK_0xee08' codep=0x224c parp=0xee08
// ================================================

void UNK_0xee08() // UNK_0xee08
{
  _2DUP(); // 2DUP
  UNK_0xedd8(); // UNK_0xedd8
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x0040);
  _st_(); // <
}


// ================================================
// 0xee18: WORD 'UNK_0xee1a' codep=0x224c parp=0xee1a
// ================================================

void UNK_0xee1a() // UNK_0xee1a
{
  _2DUP(); // 2DUP
  UNK_0xedd8(); // UNK_0xedd8
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x003f);
  _gt_(); // >
}


// ================================================
// 0xee2a: WORD 'UNK_0xee2c' codep=0x224c parp=0xee2c
// ================================================
// orphan

void UNK_0xee2c() // UNK_0xee2c
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
  UNK_0xed96(); // UNK_0xed96
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
// 0xee5c: WORD 'UNK_0xee5e' codep=0x224c parp=0xee5e params=0 returns=0
// ================================================

void UNK_0xee5e() // UNK_0xee5e
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
// 0xee7c: WORD 'UNK_0xee7e' codep=0x224c parp=0xee7e
// ================================================

void UNK_0xee7e() // UNK_0xee7e
{
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xee5e); // probable 'UNK_0xee5e'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee90: WORD 'UNK_0xee92' codep=0x224c parp=0xee92 params=2 returns=3
// ================================================

void UNK_0xee92() // UNK_0xee92
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
    UNK_0xedae(); // UNK_0xedae
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
// 0xeebe: WORD 'UNK_0xeec0' codep=0x224c parp=0xeec0
// ================================================

void UNK_0xeec0() // UNK_0xeec0
{
  unsigned short int a, b;
  UNK_0xedf6(); // UNK_0xedf6
  a = Pop(); // >R
  UNK_0xedc6(); // UNK_0xedc6
  Push(Pop() & a); //  R> AND
  b = Pop(); // >R
  UNK_0xedf6(); // UNK_0xedf6
  Push(Pop() & !Read16(pp_MOVED) | b); //  MOVED @ NOT AND R> OR
}


// ================================================
// 0xeedc: WORD 'UNK_0xeede' codep=0x1d29 parp=0xeede
// ================================================
// 0xeede: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x3b 0x2d 0x12 0x41 0x5c 0xae 0x0b ' ALLOT ;- A\  '

// ================================================
// 0xeeec: WORD 'UNK_0xeeee' codep=0x224c parp=0xeeee
// ================================================

void UNK_0xeeee() // UNK_0xeeee
{
  UNK_0xed2c(); // UNK_0xed2c
  LoadData(UNK_0xec8a); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  Push(0x0059);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(pp_UNK_0xeede); // UNK_0xeede
  Push(0x000e);
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xef08: WORD 'UNK_0xef0a' codep=0x224c parp=0xef0a params=0 returns=1
// ================================================

void UNK_0xef0a() // UNK_0xef0a
{
  Push(-2);
  Push(3);
  RRND(); // RRND
}


// ================================================
// 0xef12: WORD 'UNK_0xef14' codep=0x224c parp=0xef14
// ================================================

void UNK_0xef14() // UNK_0xef14
{
  UNK_0xedba(); // UNK_0xedba
  LoadData(UNK_0xecb9); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  Push(1);
  Push(0x65e1+UNK_0xecdd.offset); // UNK_0xecdd<IFIELD>
  C_ex__2(); // C!_2
  Push(0);
  Push(0x65e1+UNK_0xecd8.offset); // UNK_0xecd8<IFIELD>
  C_ex__2(); // C!_2
  Push(1);
  Push(0x65e1+UNK_0xecd3.offset); // UNK_0xecd3<IFIELD>
  C_ex__2(); // C!_2
  LoadData(UNK_0xecc1); // from 'CREATURE'
  Push(((Read16(Pop())&0xFF) & 1)==0?1:0); //  C@ 1 AND 0=
  if (Pop() == 0) return;
  UNK_0xef0a(); // UNK_0xef0a
  Push(0x65e1+UNK_0xecc9.offset); // UNK_0xecc9<IFIELD>
  C_ex__2(); // C!_2
  UNK_0xef0a(); // UNK_0xef0a
  Push(0x65e1+UNK_0xecce.offset); // UNK_0xecce<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xef4c: WORD 'UNK_0xef4e' codep=0x224c parp=0xef4e params=1 returns=2
// ================================================

void UNK_0xef4e() // UNK_0xef4e
{
  Push(0x000d);
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + pp_UNK_0xeede)&0xFF); //  UNK_0xeede + C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    SWAP(); // SWAP
    Push(Read16((Pop() + 7) + pp_UNK_0xeede)&0xFF); //  7 + UNK_0xeede + C@
    UNK_0xecf8(); // UNK_0xecf8
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
// 0xef92: WORD 'UNK_0xef94' codep=0x224c parp=0xef94
// ================================================

void UNK_0xef94() // UNK_0xef94
{
  unsigned short int i, imax, a;
  UNK_0xeeee(); // UNK_0xeeee
  Push(0x005b);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xed8e(); // UNK_0xed8e
    UNK_0xeec0(); // UNK_0xeec0
    a = Pop(); // >R
    UNK_0xee08(); // UNK_0xee08
    Push(Pop() & a); //  R> AND
    if (Pop() != 0)
    {
      Push(i); // I
      UNK_0xef4e(); // UNK_0xef4e
      if (Pop() != 0)
      {
        _2DUP(); // 2DUP
        _gt_C_plus_S(); // >C+S
        UNK_0xed34(); // UNK_0xed34
        UNK_0xef14(); // UNK_0xef14
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
// 0xefd2: WORD 'UNK_0xefd4' codep=0x224c parp=0xefd4
// ================================================

void UNK_0xefd4() // UNK_0xefd4
{
  UNK_0xed2c(); // UNK_0xed2c
  LoadData(UNK_0xec8a); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  if (Pop() == 0) return;
  UNK_0xef94(); // UNK_0xef94
}


// ================================================
// 0xefe4: WORD 'UNK_0xefe6' codep=0x224c parp=0xefe6
// ================================================

void UNK_0xefe6() // UNK_0xefe6
{
  LoadData(UNK_0xec62); // from 'PLANET'
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
// 0xf014: WORD 'UNK_0xf016' codep=0x224c parp=0xf016 params=1 returns=1
// ================================================

void UNK_0xf016() // UNK_0xf016
{
  Push(1);
  UNK_0xecee(); // UNK_0xecee
  if (Pop() != 0)
  {
    _dash_(); // -
    return;
  }
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf028: WORD 'UNK_0xf02a' codep=0x224c parp=0xf02a params=0 returns=0
// ================================================

void UNK_0xf02a() // UNK_0xf02a
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
// 0xf042: WORD 'UNK_0xf044' codep=0x224c parp=0xf044
// ================================================

void UNK_0xf044() // UNK_0xf044
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
    LoadData(UNK_0xec62); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  _st_(); // <
  if (Pop() != 0)
  {
    Pop(); // DROP
    LoadData(UNK_0xec6a); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  Push(0x005a);
  _st_(); // <
  if (Pop() != 0)
  {
    LoadData(UNK_0xec72); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    return;
  }
  UNK_0xefe6(); // UNK_0xefe6
}


// ================================================
// 0xf08e: WORD 'UNK_0xf090' codep=0x224c parp=0xf090
// ================================================

void UNK_0xf090() // UNK_0xf090
{
  Push(0x001a);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  UNK_0xed34(); // UNK_0xed34
  _gt_C_plus_S(); // >C+S
  UNK_0xedba(); // UNK_0xedba
  Push(0x000a);
  Push(0x0064);
  RRND(); // RRND
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf0b0: WORD 'UNK_0xf0b2' codep=0x224c parp=0xf0b2 params=2 returns=0
// ================================================

void UNK_0xf0b2() // UNK_0xf0b2
{
  Push(0);
  Push(Read16(pp_UNK_0xec46)); // UNK_0xec46 @
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    UNK_0xf016(); // UNK_0xf016
    SWAP(); // SWAP
    UNK_0xf016(); // UNK_0xf016
    SWAP(); // SWAP
    Push(0x0017);
    UNK_0xf090(); // UNK_0xf090
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf0d8: WORD 'UNK_0xf0da' codep=0x224c parp=0xf0da
// ================================================

void UNK_0xf0da() // UNK_0xf0da
{
  unsigned short int i, imax, a;
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xec4a); // from 'PLANET'
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
      UNK_0xed52(); // UNK_0xed52
      UNK_0xed70(); // UNK_0xed70
      UNK_0xee1a(); // UNK_0xee1a
      a = Pop(); // >R
      UNK_0xedc6(); // UNK_0xedc6
      Push(Pop() & a); //  R> AND
      if (Pop() != 0)
      {
        UNK_0xf044(); // UNK_0xf044
        UNK_0xf090(); // UNK_0xf090
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
// 0xf11e: WORD 'UNK_0xf120' codep=0x224c parp=0xf120
// ================================================

void UNK_0xf120() // UNK_0xf120
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
    UNK_0xedae(); // UNK_0xedae
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
// 0xf15c: WORD 'UNK_0xf15e' codep=0x224c parp=0xf15e params=0 returns=0
// ================================================

void UNK_0xf15e() // UNK_0xf15e
{
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162() // UNK_0xf162
{
  unsigned short int a;
  UNK_0xed8e(); // UNK_0xed8e
  UNK_0xedf6(); // UNK_0xedf6
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  if (Pop() != 0)
  {
    ROT(); // ROT
    Push(0x0029);
    SWAP(); // SWAP
    ICREATE(); // ICREATE
    _2DUP(); // 2DUP
    UNK_0xed34(); // UNK_0xed34
    _gt_C_plus_S(); // >C+S
    _2DUP(); // 2DUP
    UNK_0xedba(); // UNK_0xedba
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); // DROP
  }
  Push(a); // R>
}


// ================================================
// 0xf18e: WORD 'UNK_0xf190' codep=0x224c parp=0xf190 params=0 returns=0
// ================================================

void UNK_0xf190() // UNK_0xf190
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001b?1:0); //  0x001b =
  if (Pop() == 0) return;
  UNK_0xf02a(); // UNK_0xf02a
}


// ================================================
// 0xf1a0: WORD 'UNK_0xf1a2' codep=0x224c parp=0xf1a2 params=0 returns=1
// ================================================

void UNK_0xf1a2() // UNK_0xf1a2
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
// 0xf1b8: WORD 'UNK_0xf1ba' codep=0x224c parp=0xf1ba params=1 returns=3
// ================================================

void UNK_0xf1ba() // UNK_0xf1ba
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
// 0xf1d8: WORD 'UNK_0xf1da' codep=0x224c parp=0xf1da params=0 returns=4
// ================================================

void UNK_0xf1da() // UNK_0xf1da
{
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xedae(); // UNK_0xedae
  UNK_0xf1ba(); // UNK_0xf1ba
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1e6: WORD 'UNK_0xf1e8' codep=0x224c parp=0xf1e8 params=0 returns=3
// ================================================

void UNK_0xf1e8() // UNK_0xf1e8
{
  UNK_0xedae(); // UNK_0xedae
  UNK_0xf1ba(); // UNK_0xf1ba
  _2OVER(); // 2OVER
  D_eq_(); // D=
}


// ================================================
// 0xf1f2: WORD 'UNK_0xf1f4' codep=0x224c parp=0xf1f4
// ================================================

void UNK_0xf1f4() // UNK_0xf1f4
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
  UNK_0xed34(); // UNK_0xed34
  _gt_C_plus_S(); // >C+S
  UNK_0xedba(); // UNK_0xedba
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf21a: WORD 'UNK_0xf21c' codep=0x224c parp=0xf21c params=1 returns=0
// ================================================

void UNK_0xf21c() // UNK_0xf21c
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
      UNK_0xf1da(); // UNK_0xf1da
      UNK_0xf1e8(); // UNK_0xf1e8
      if (Pop() != 0)
      {
        UNK_0xedae(); // UNK_0xedae
        Push(0x0029);
        Push(4);
        IsCLASS_slash_(); // ?CLASS/
        c = Pop(); // >R
        Pop(); Pop(); // 2DROP
        Push(c); // R>
        if (Pop() != 0)
        {
          _2DUP(); // 2DUP
          UNK_0xf0b2(); // UNK_0xf0b2
        }
        UNK_0xf190(); // UNK_0xf190
        IEXTRAC(); // IEXTRAC
        IPREV(); // IPREV
        Push(pp_THIS_dash_RE); // THIS-RE
        _1_dot_5_at_(); // 1.5@
        IINSERT(); // IINSERT
        Push(!(a==0x0029?1:0)); // I' 0x0029 = NOT
        d = Pop(); // >R
        UNK_0xf120(); // UNK_0xf120
        Push(!Pop() & d); //  NOT R> AND
        if (Pop() != 0)
        {
          Push(a); // I'
          UNK_0xf1f4(); // UNK_0xf1f4
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
// 0xf2a0: WORD 'UNK_0xf2a2' codep=0x224c parp=0xf2a2 params=0 returns=1
// ================================================

void UNK_0xf2a2() // UNK_0xf2a2
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
// 0xf2ba: WORD 'UNK_0xf2bc' codep=0x224c parp=0xf2bc params=0 returns=0
// ================================================

void UNK_0xf2bc() // UNK_0xf2bc
{
  UNK_0xf2a2(); // UNK_0xf2a2
  UNK_0xf1a2(); // UNK_0xf1a2
  if (Pop() != 0)
  {
    Push(Pop() & !Read16(pp_PAST)); //  PAST @ NOT AND
  }
  if (Pop() == 0) return;
  Push(0x001b);
  UNK_0xf21c(); // UNK_0xf21c
}


// ================================================
// 0xf2d8: WORD 'UNK_0xf2da' codep=0x224c parp=0xf2da params=0 returns=0
// ================================================

void UNK_0xf2da() // UNK_0xf2da
{
  UNK_0xf2a2(); // UNK_0xf2a2
  if (Pop() == 0) return;
  Push(0x001c);
  UNK_0xf21c(); // UNK_0xf21c
}


// ================================================
// 0xf2e8: WORD 'UNK_0xf2ea' codep=0x224c parp=0xf2ea params=0 returns=0
// ================================================

void UNK_0xf2ea() // UNK_0xf2ea
{
  UNK_0xf2a2(); // UNK_0xf2a2
  if (Pop() == 0) return;
  Push(0x0029);
  UNK_0xf21c(); // UNK_0xf21c
}


// ================================================
// 0xf2f8: WORD 'UNK_0xf2fa' codep=0x224c parp=0xf2fa params=0 returns=1
// ================================================

void UNK_0xf2fa() // UNK_0xf2fa
{
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xf2fe: WORD 'UNK_0xf300' codep=0x224c parp=0xf300
// ================================================

void UNK_0xf300() // UNK_0xf300
{
  Push2Words("*ARTH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001b);
  Push(0);
  IFIND(); // IFIND
  UNK_0xf1a2(); // UNK_0xf1a2
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xedba(); // UNK_0xedba
    IEXTRAC(); // IEXTRAC
    UNK_0xed34(); // UNK_0xed34
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  UNK_0xf02a(); // UNK_0xf02a
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf32c: WORD 'UNK_0xf32e' codep=0x224c parp=0xf32e params=2 returns=2
// ================================================

void UNK_0xf32e() // UNK_0xf32e
{
  UNK_0xf016(); // UNK_0xf016
  SWAP(); // SWAP
  UNK_0xf016(); // UNK_0xf016
  SWAP(); // SWAP
}


// ================================================
// 0xf338: WORD 'UNK_0xf33a' codep=0x224c parp=0xf33a params=0 returns=0
// ================================================

void UNK_0xf33a() // UNK_0xf33a
{
  UNK_0xf2fa(); // UNK_0xf2fa
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
  UNK_0xf300(); // UNK_0xf300
  UNK_0xee7e(); // UNK_0xee7e
}


// ================================================
// 0xf348: WORD 'UNK_0xf34a' codep=0x224c parp=0xf34a
// ================================================

void UNK_0xf34a() // UNK_0xf34a
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
// 0xf372: WORD 'UNK_0xf374' codep=0x224c parp=0xf374
// ================================================

void UNK_0xf374() // UNK_0xf374
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  Push(0xec52); // probable 'UNK_0xec52'
  UNK_0xf34a(); // UNK_0xf34a
  if (Pop() != 0)
  {
    Push(2);
    UNK_0xf162(); // UNK_0xf162
    if (Pop() != 0)
    {
      UNK_0xf15e(); // UNK_0xf15e
    }
    UNK_0xf0b2(); // UNK_0xf0b2
  }
  Push(0xec5a); // probable 'UNK_0xec5a'
  UNK_0xf34a(); // UNK_0xf34a
  if (Pop() != 0)
  {
    UNK_0xf1a2(); // UNK_0xf1a2
    if (Pop() != 0)
    {
      Push(6);
    } else
    {
      Push(1);
    }
    UNK_0xf162(); // UNK_0xf162
    if (Pop() != 0)
    {
      UNK_0xf15e(); // UNK_0xf15e
      UNK_0xf33a(); // UNK_0xf33a
    }
    Pop(); Pop(); // 2DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3b6: WORD 'UNK_0xf3b8' codep=0x224c parp=0xf3b8
// ================================================

void UNK_0xf3b8() // UNK_0xf3b8
{
  UNK_0xf32e(); // UNK_0xf32e
  UNK_0xeec0(); // UNK_0xeec0
}


// ================================================
// 0xf3be: WORD 'UNK_0xf3c0' codep=0x224c parp=0xf3c0
// ================================================

void UNK_0xf3c0() // UNK_0xf3c0
{
  Push(pp_UNK_0xec42); // UNK_0xec42
  ON_2(); // ON_2
  Push(Read16(cc_UNK_0xec36)); // UNK_0xec36
  UNK_0xed24(); // UNK_0xed24
  LoadData(UNK_0xec92); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  ICREATE(); // ICREATE
}


// ================================================
// 0xf3d2: WORD 'UNK_0xf3d4' codep=0x224c parp=0xf3d4
// ================================================

void UNK_0xf3d4() // UNK_0xf3d4
{
  unsigned short int a;
  UNK_0xf3b8(); // UNK_0xf3b8
  a = Pop(); // >R
  UNK_0xee92(); // UNK_0xee92
  Push(Pop() & a); //  R> AND
  if (Pop() != 0)
  {
    UNK_0xf3c0(); // UNK_0xf3c0
    _2DUP(); // 2DUP
    _gt_C_plus_S(); // >C+S
    _2SWAP(); // 2SWAP
    UNK_0xedba(); // UNK_0xedba
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
  Push2Words("0.");
}


// ================================================
// 0xf3f8: WORD 'UNK_0xf3fa' codep=0x224c parp=0xf3fa
// ================================================

void UNK_0xf3fa() // UNK_0xf3fa
{
  Push(0);
  UNK_0xed46(); // UNK_0xed46
  Push(Pop() * 4); //  4 *
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  _gt_FLAG(); // >FLAG
  UNK_0xed24(); // UNK_0xed24
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() & !Read16(pp_PAST)); //  PAST @ NOT AND
}


// ================================================
// 0xf41c: WORD 'UNK_0xf41e' codep=0x224c parp=0xf41e
// ================================================

void UNK_0xf41e() // UNK_0xf41e
{
  unsigned short int i, imax;
  Push(pp_UNK_0xec42); // UNK_0xec42
  _099(); // 099
  UNK_0xed8e(); // UNK_0xed8e
  ROT(); // ROT
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xf32e(); // UNK_0xf32e
    _2DUP(); // 2DUP
    UNK_0xf3d4(); // UNK_0xf3d4
    UNK_0xed34(); // UNK_0xed34
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf438: WORD 'UNK_0xf43a' codep=0x224c parp=0xf43a
// ================================================

void UNK_0xf43a() // UNK_0xf43a
{
  unsigned short int a, b;
  UNK_0xecf8(); // UNK_0xecf8
  Push(0x003c);
  _st_(); // <
  a = Pop(); // >R
  UNK_0xf3b8(); // UNK_0xf3b8
  Push(Pop() & a); //  R> AND
  UNK_0xed24(); // UNK_0xed24
  LoadData(UNK_0xeca9); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  GetINST_dash_S(); // @INST-S
  b = Pop(); // >R
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | (b==7?1:0)); //  R> 7 = OR
  if (Pop() != 0)
  {
    Push(Read16(cc_UNK_0xec3e)); // UNK_0xec3e
    Push(0);
    ICREATE(); // ICREATE
    _2DUP(); // 2DUP
    UNK_0xed34(); // UNK_0xed34
    _gt_C_plus_S(); // >C+S
    UNK_0xedba(); // UNK_0xedba
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf47e: WORD 'UNK_0xf480' codep=0x224c parp=0xf480
// ================================================

void UNK_0xf480() // UNK_0xf480
{
  Push(Read16(cc_UNK_0xec3a)); // UNK_0xec3a
  UNK_0xed24(); // UNK_0xed24
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  ICREATE(); // ICREATE
}


// ================================================
// 0xf48c: WORD 'UNK_0xf48e' codep=0x224c parp=0xf48e
// ================================================

void UNK_0xf48e() // UNK_0xf48e
{
  Push(1);
  Push(0x65e1+UNK_0xec9f.offset); // UNK_0xec9f<IFIELD>
  C_ex__2(); // C!_2
  LoadData(UNK_0xec92); // from 'TRADERS'
  Push((Read16(Pop())&0xFF) - 1); //  C@ 1-
  Push(1);
  MAX(); // MAX
  Push(0x65e1+UNK_0xec9a.offset); // UNK_0xec9a<IFIELD>
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
  Push(0x65e1+UNK_0xeca4.offset); // UNK_0xeca4<IFIELD>
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf4be: WORD 'UNK_0xf4c0' codep=0x224c parp=0xf4c0
// ================================================

void UNK_0xf4c0() // UNK_0xf4c0
{
  unsigned short int i, imax;
  Push(0);
  UNK_0xed46(); // UNK_0xed46
  _3_star_(); // 3*
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(!(Pop()==0?1:0) & Read16(pp_UNK_0xec42)); //  0= NOT UNK_0xec42 @ AND
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      UNK_0xed8e(); // UNK_0xed8e
      UNK_0xf3b8(); // UNK_0xf3b8
      if (Pop() != 0)
      {
        UNK_0xf480(); // UNK_0xf480
        _2DUP(); // 2DUP
        UNK_0xed34(); // UNK_0xed34
        _gt_C_plus_S(); // >C+S
        UNK_0xedba(); // UNK_0xedba
        UNK_0xf48e(); // UNK_0xf48e
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
// 0xf504: WORD 'UNK_0xf506' codep=0x224c parp=0xf506 params=0 returns=3
// ================================================

void UNK_0xf506() // UNK_0xf506
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
// 0xf520: WORD 'POPULA' codep=0x224c parp=0xf52b params=0 returns=2
// ================================================
// entry

void POPULA() // POPULA
{
  UNK_0xf2ea(); // UNK_0xf2ea
  UNK_0xf2da(); // UNK_0xf2da
  UNK_0xf2bc(); // UNK_0xf2bc
  UNK_0xf506(); // UNK_0xf506
  if (Pop() == 0) return;
  UNK_0xf374(); // UNK_0xf374
  UNK_0xf3fa(); // UNK_0xf3fa
  if (Pop() != 0)
  {
    UNK_0xf41e(); // UNK_0xf41e
    UNK_0xf43a(); // UNK_0xf43a
    UNK_0xf4c0(); // UNK_0xf4c0
  } else
  {
    Pop(); // DROP
  }
  UNK_0xf0da(); // UNK_0xf0da
  Push(Read16(pp_PLHI)); // PLHI @
  if (Pop() == 0) return;
  UNK_0xefd4(); // UNK_0xefd4
}

// 0xf559: db 0x53 0x45 0x45 0x44 0x5f 0x5f 0x5f 0x00 'SEED___ '

