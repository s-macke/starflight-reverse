// ====== OVERLAY 'VITA-OV' ======
// store offset = 0xe780
// overlay size   = 0x0de0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xe796  codep:0x2214 parp:0xe796 size:0x0002 C-string:'UNK_0xe796'
//      UNK_0xe79a  codep:0x2214 parp:0xe79a size:0x0002 C-string:'UNK_0xe79a'
//      UNK_0xe79e  codep:0x2214 parp:0xe79e size:0x0002 C-string:'UNK_0xe79e'
//      UNK_0xe7a2  codep:0x73ea parp:0xe7a2 size:0x0006 C-string:'UNK_0xe7a2'
//      UNK_0xe7aa  codep:0x73ea parp:0xe7aa size:0x0006 C-string:'UNK_0xe7aa'
//      UNK_0xe7b2  codep:0x73ea parp:0xe7b2 size:0x0006 C-string:'UNK_0xe7b2'
//      UNK_0xe7ba  codep:0x73ea parp:0xe7ba size:0x0006 C-string:'UNK_0xe7ba'
//      UNK_0xe7c2  codep:0x73ea parp:0xe7c2 size:0x0006 C-string:'UNK_0xe7c2'
//      UNK_0xe7ca  codep:0x73ea parp:0xe7ca size:0x0006 C-string:'UNK_0xe7ca'
//      UNK_0xe7d2  codep:0x73ea parp:0xe7d2 size:0x0006 C-string:'UNK_0xe7d2'
//      UNK_0xe7da  codep:0x73ea parp:0xe7da size:0x0006 C-string:'UNK_0xe7da'
//      UNK_0xe7e2  codep:0x73ea parp:0xe7e2 size:0x0006 C-string:'UNK_0xe7e2'
//      UNK_0xe7ea  codep:0x73ea parp:0xe7ea size:0x0006 C-string:'UNK_0xe7ea'
//      UNK_0xe7f2  codep:0x73ea parp:0xe7f2 size:0x0006 C-string:'UNK_0xe7f2'
//      UNK_0xe7fa  codep:0x73ea parp:0xe7fa size:0x0006 C-string:'UNK_0xe7fa'
//      UNK_0xe802  codep:0x73ea parp:0xe802 size:0x0006 C-string:'UNK_0xe802'
//      UNK_0xe80a  codep:0x73ea parp:0xe80a size:0x0006 C-string:'UNK_0xe80a'
//      UNK_0xe812  codep:0x73ea parp:0xe812 size:0x0006 C-string:'UNK_0xe812'
//      UNK_0xe81a  codep:0x73ea parp:0xe81a size:0x0006 C-string:'UNK_0xe81a'
//      UNK_0xe822  codep:0x73ea parp:0xe822 size:0x0006 C-string:'UNK_0xe822'
//      UNK_0xe82a  codep:0x73ea parp:0xe82a size:0x0006 C-string:'UNK_0xe82a'
//      UNK_0xe832  codep:0x73ea parp:0xe832 size:0x0006 C-string:'UNK_0xe832'
//      UNK_0xe83a  codep:0x73ea parp:0xe83a size:0x0006 C-string:'UNK_0xe83a'
//      UNK_0xe842  codep:0x73ea parp:0xe842 size:0x0006 C-string:'UNK_0xe842'
//      UNK_0xe84a  codep:0x73ea parp:0xe84a size:0x0006 C-string:'UNK_0xe84a'
//      UNK_0xe852  codep:0x73ea parp:0xe852 size:0x0006 C-string:'UNK_0xe852'
//      UNK_0xe85a  codep:0x73ea parp:0xe85a size:0x0006 C-string:'UNK_0xe85a'
//      UNK_0xe862  codep:0x73ea parp:0xe862 size:0x0006 C-string:'UNK_0xe862'
//      UNK_0xe86a  codep:0x73ea parp:0xe86a size:0x0006 C-string:'UNK_0xe86a'
//      UNK_0xe872  codep:0x73ea parp:0xe872 size:0x0006 C-string:'UNK_0xe872'
//      UNK_0xe87a  codep:0x744d parp:0xe87a size:0x0003 C-string:'UNK_0xe87a'
//      UNK_0xe87f  codep:0x73ea parp:0xe87f size:0x0006 C-string:'UNK_0xe87f'
//      UNK_0xe887  codep:0x73ea parp:0xe887 size:0x0006 C-string:'UNK_0xe887'
//      UNK_0xe88f  codep:0x73ea parp:0xe88f size:0x0006 C-string:'UNK_0xe88f'
//      UNK_0xe897  codep:0x73ea parp:0xe897 size:0x0006 C-string:'UNK_0xe897'
//      UNK_0xe89f  codep:0x73ea parp:0xe89f size:0x0006 C-string:'UNK_0xe89f'
//      UNK_0xe8a7  codep:0x73ea parp:0xe8a7 size:0x0006 C-string:'UNK_0xe8a7'
//      UNK_0xe8af  codep:0x224c parp:0xe8af size:0x0012 C-string:'UNK_0xe8af'
//      UNK_0xe8c3  codep:0x224c parp:0xe8c3 size:0x0006 C-string:'UNK_0xe8c3'
//      UNK_0xe8cb  codep:0x224c parp:0xe8cb size:0x000a C-string:'UNK_0xe8cb'
//      UNK_0xe8d7  codep:0x224c parp:0xe8d7 size:0x0008 C-string:'UNK_0xe8d7'
//      UNK_0xe8e1  codep:0x224c parp:0xe8e1 size:0x000a C-string:'UNK_0xe8e1'
//      UNK_0xe8ed  codep:0x224c parp:0xe8ed size:0x0014 C-string:'UNK_0xe8ed'
//      UNK_0xe903  codep:0x224c parp:0xe903 size:0x0015 C-string:'UNK_0xe903'
//      UNK_0xe91a  codep:0x224c parp:0xe91a size:0x000c C-string:'UNK_0xe91a'
//      UNK_0xe928  codep:0x224c parp:0xe928 size:0x0096 C-string:'UNK_0xe928'
//      UNK_0xe9c0  codep:0x224c parp:0xe9c0 size:0x0026 C-string:'UNK_0xe9c0'
//      UNK_0xe9e8  codep:0x224c parp:0xe9e8 size:0x000c C-string:'UNK_0xe9e8'
//      UNK_0xe9f6  codep:0x224c parp:0xe9f6 size:0x0012 C-string:'UNK_0xe9f6'
//      UNK_0xea0a  codep:0x224c parp:0xea0a size:0x0036 C-string:'UNK_0xea0a'
//        A.DENSIT  codep:0xe90b parp:0xea4d size:0x000e C-string:'A_dot_DENSIT'
//        PLANET.G  codep:0xe90b parp:0xea68 size:0x000e C-string:'PLANET_dot_G'
//      UNK_0xea78  codep:0x224c parp:0xea78 size:0x0026 C-string:'UNK_0xea78'
//      UNK_0xeaa0  codep:0x224c parp:0xeaa0 size:0x001c C-string:'UNK_0xeaa0'
//      UNK_0xeabe  codep:0x224c parp:0xeabe size:0x002c C-string:'UNK_0xeabe'
//      UNK_0xeaec  codep:0x224c parp:0xeaec size:0x0008 C-string:'UNK_0xeaec'
//            NICE  codep:0xe940 parp:0xeafd size:0x00a6 C-string:'NICE'
//      UNK_0xeba5  codep:0x224c parp:0xeba5 size:0x0006 C-string:'UNK_0xeba5'
//      UNK_0xebad  codep:0x224c parp:0xebad size:0x000e C-string:'UNK_0xebad'
//      UNK_0xebbd  codep:0x224c parp:0xebbd size:0x0014 C-string:'UNK_0xebbd'
//      UNK_0xebd3  codep:0x224c parp:0xebd3 size:0x0044 C-string:'UNK_0xebd3'
//      UNK_0xec19  codep:0x224c parp:0xec19 size:0x0022 C-string:'UNK_0xec19'
//      UNK_0xec3d  codep:0x224c parp:0xec3d size:0x0010 C-string:'UNK_0xec3d'
//      UNK_0xec4f  codep:0x224c parp:0xec4f size:0x001a C-string:'UNK_0xec4f'
//      UNK_0xec6b  codep:0x224c parp:0xec6b size:0x0036 C-string:'UNK_0xec6b'
//      UNK_0xeca3  codep:0x224c parp:0xeca3 size:0x0006 C-string:'UNK_0xeca3'
//      UNK_0xecab  codep:0x224c parp:0xecab size:0x000e C-string:'UNK_0xecab'
//      UNK_0xecbb  codep:0x224c parp:0xecbb size:0x000e C-string:'UNK_0xecbb'
//      UNK_0xeccb  codep:0x224c parp:0xeccb size:0x0046 C-string:'UNK_0xeccb'
//      UNK_0xed13  codep:0x224c parp:0xed13 size:0x0012 C-string:'UNK_0xed13'
//      UNK_0xed27  codep:0x224c parp:0xed27 size:0x0034 C-string:'UNK_0xed27'
//      UNK_0xed5d  codep:0x1d29 parp:0xed5d size:0x0002 C-string:'UNK_0xed5d'
//      UNK_0xed61  codep:0x1d29 parp:0xed61 size:0x0002 C-string:'UNK_0xed61'
//      UNK_0xed65  codep:0x1d29 parp:0xed65 size:0x0002 C-string:'UNK_0xed65'
//      UNK_0xed69  codep:0x224c parp:0xed69 size:0x000a C-string:'UNK_0xed69'
//      UNK_0xed75  codep:0x224c parp:0xed75 size:0x0022 C-string:'UNK_0xed75'
//      UNK_0xed99  codep:0x224c parp:0xed99 size:0x0014 C-string:'UNK_0xed99'
//      UNK_0xedaf  codep:0x224c parp:0xedaf size:0x001e C-string:'UNK_0xedaf'
//      UNK_0xedcf  codep:0x224c parp:0xedcf size:0x0016 C-string:'UNK_0xedcf'
//      UNK_0xede7  codep:0x224c parp:0xede7 size:0x0046 C-string:'UNK_0xede7'
//      UNK_0xee2f  codep:0x224c parp:0xee2f size:0x0012 C-string:'UNK_0xee2f'
//      UNK_0xee43  codep:0x224c parp:0xee43 size:0x0058 C-string:'UNK_0xee43'
//      UNK_0xee9d  codep:0x224c parp:0xee9d size:0x000e C-string:'UNK_0xee9d'
//      UNK_0xeead  codep:0x224c parp:0xeead size:0x0012 C-string:'UNK_0xeead'
//      UNK_0xeec1  codep:0x224c parp:0xeec1 size:0x000e C-string:'UNK_0xeec1'
//      UNK_0xeed1  codep:0x224c parp:0xeed1 size:0x0014 C-string:'UNK_0xeed1'
//      UNK_0xeee7  codep:0x224c parp:0xeee7 size:0x003c C-string:'UNK_0xeee7'
//      UNK_0xef25  codep:0x224c parp:0xef25 size:0x0010 C-string:'UNK_0xef25'
//      UNK_0xef37  codep:0x1d29 parp:0xef37 size:0x0002 C-string:'UNK_0xef37'
//      UNK_0xef3b  codep:0x224c parp:0xef3b size:0x000a C-string:'UNK_0xef3b'
//      UNK_0xef47  codep:0x224c parp:0xef47 size:0x000a C-string:'UNK_0xef47'
//      UNK_0xef53  codep:0x1d29 parp:0xef53 size:0x0002 C-string:'UNK_0xef53'
//      UNK_0xef57  codep:0x224c parp:0xef57 size:0x003c C-string:'UNK_0xef57'
//      UNK_0xef95  codep:0x224c parp:0xef95 size:0x0012 C-string:'UNK_0xef95'
//      UNK_0xefa9  codep:0x224c parp:0xefa9 size:0x001a C-string:'UNK_0xefa9'
//      UNK_0xefc5  codep:0x224c parp:0xefc5 size:0x001a C-string:'UNK_0xefc5'
//      UNK_0xefe1  codep:0x224c parp:0xefe1 size:0x0012 C-string:'UNK_0xefe1'
//      UNK_0xeff5  codep:0x224c parp:0xeff5 size:0x004a C-string:'UNK_0xeff5'
//      UNK_0xf041  codep:0x224c parp:0xf041 size:0x0012 C-string:'UNK_0xf041'
//      UNK_0xf055  codep:0x224c parp:0xf055 size:0x0010 C-string:'UNK_0xf055'
//      UNK_0xf067  codep:0x224c parp:0xf067 size:0x0018 C-string:'UNK_0xf067'
//      UNK_0xf081  codep:0x224c parp:0xf081 size:0x0010 C-string:'UNK_0xf081'
//      UNK_0xf093  codep:0x224c parp:0xf093 size:0x000a C-string:'UNK_0xf093'
//      UNK_0xf09f  codep:0x224c parp:0xf09f size:0x0026 C-string:'UNK_0xf09f'
//      UNK_0xf0c7  codep:0x224c parp:0xf0c7 size:0x0020 C-string:'UNK_0xf0c7'
//      UNK_0xf0e9  codep:0x224c parp:0xf0e9 size:0x0014 C-string:'UNK_0xf0e9'
//      UNK_0xf0ff  codep:0x224c parp:0xf0ff size:0x0006 C-string:'UNK_0xf0ff'
//      UNK_0xf107  codep:0x224c parp:0xf107 size:0x0010 C-string:'UNK_0xf107'
//      UNK_0xf119  codep:0x224c parp:0xf119 size:0x003a C-string:'UNK_0xf119'
//      UNK_0xf155  codep:0x224c parp:0xf155 size:0x0022 C-string:'UNK_0xf155'
//      UNK_0xf179  codep:0x224c parp:0xf179 size:0x000e C-string:'UNK_0xf179'
//      UNK_0xf189  codep:0x224c parp:0xf189 size:0x000e C-string:'UNK_0xf189'
//      UNK_0xf199  codep:0x224c parp:0xf199 size:0x001a C-string:'UNK_0xf199'
//      UNK_0xf1b5  codep:0x224c parp:0xf1b5 size:0x001c C-string:'UNK_0xf1b5'
//      UNK_0xf1d3  codep:0x224c parp:0xf1d3 size:0x0067 C-string:'UNK_0xf1d3'
//      UNK_0xf23c  codep:0x224c parp:0xf23c size:0x0048 C-string:'UNK_0xf23c'
//      UNK_0xf286  codep:0x224c parp:0xf286 size:0x0052 C-string:'UNK_0xf286'
//      UNK_0xf2da  codep:0x224c parp:0xf2da size:0x0044 C-string:'UNK_0xf2da'
//      UNK_0xf320  codep:0x224c parp:0xf320 size:0x0012 C-string:'UNK_0xf320'
//      UNK_0xf334  codep:0x224c parp:0xf334 size:0x004c C-string:'UNK_0xf334'
//      UNK_0xf382  codep:0x224c parp:0xf382 size:0x0066 C-string:'UNK_0xf382'
//      UNK_0xf3ea  codep:0x224c parp:0xf3ea size:0x0020 C-string:'UNK_0xf3ea'
//      UNK_0xf40c  codep:0x224c parp:0xf40c size:0x0024 C-string:'UNK_0xf40c'
//      UNK_0xf432  codep:0x224c parp:0xf432 size:0x0014 C-string:'UNK_0xf432'
//      UNK_0xf448  codep:0x224c parp:0xf448 size:0x004c C-string:'UNK_0xf448'
//             DIO  codep:0x224c parp:0xf49c size:0x0000 C-string:'DIO'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_SEED; // SEED
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_PLANTS; // PLANTS
extern const unsigned short int pp_ANIMALS; // ANIMALS
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp_SUPER_dash_BOX; // SUPER-BOX
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern const unsigned short int pp__ro_SURFACE_rc_; // (SURFACE)
extern Color WHITE; // WHITE
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
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void OFF(); // OFF
void FILL_1(); // FILL_1
void GetRECORD(); // @RECORD
void CDROP(); // CDROP
void CI_i_(); // CI'
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IINSERT(); // IINSERT
void IFLD_at_(); // IFLD@
void IFIND(); // IFIND
void EACH(); // EACH
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void StoreCOLOR(); // !COLOR
void DrawTTY(); // .TTY
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _1_dot_5_at_(); // 1.5@
void CI(); // CI
void A_dot_DENSIT(); // A.DENSIT
void PLANET_dot_G(); // PLANET.G
void NICE(); // NICE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xed5d = 0xed5d; // UNK_0xed5d size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xed61 = 0xed61; // UNK_0xed61 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xed65 = 0xed65; // UNK_0xed65 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xef37 = 0xef37; // UNK_0xef37 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xef53 = 0xef53; // UNK_0xef53 size: 2
// {0x00, 0x00}


const unsigned short int cc_UNK_0xe796 = 0xe796; // UNK_0xe796
const unsigned short int cc_UNK_0xe79a = 0xe79a; // UNK_0xe79a
const unsigned short int cc_UNK_0xe79e = 0xe79e; // UNK_0xe79e


// 0xe792: db 0xda 0x00 '  '

// ================================================
// 0xe794: WORD 'UNK_0xe796' codep=0x2214 parp=0xe796
// ================================================
// orphan
// 0xe796: dw 0x0020

// ================================================
// 0xe798: WORD 'UNK_0xe79a' codep=0x2214 parp=0xe79a
// ================================================
// 0xe79a: dw 0x0043

// ================================================
// 0xe79c: WORD 'UNK_0xe79e' codep=0x2214 parp=0xe79e
// ================================================
// 0xe79e: dw 0x0044

// ================================================
// 0xe7a0: WORD 'UNK_0xe7a2' codep=0x73ea parp=0xe7a2
// ================================================
// orphan
LoadDataType UNK_0xe7a2 = {PLANETIDX, 0x0c, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7a8: WORD 'UNK_0xe7aa' codep=0x73ea parp=0xe7aa
// ================================================
// orphan
LoadDataType UNK_0xe7aa = {PLANETIDX, 0x0d, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7b0: WORD 'UNK_0xe7b2' codep=0x73ea parp=0xe7b2
// ================================================
// orphan
LoadDataType UNK_0xe7b2 = {PLANETIDX, 0x0e, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7b8: WORD 'UNK_0xe7ba' codep=0x73ea parp=0xe7ba
// ================================================
// orphan
LoadDataType UNK_0xe7ba = {PLANETIDX, 0x09, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7c0: WORD 'UNK_0xe7c2' codep=0x73ea parp=0xe7c2
// ================================================
LoadDataType UNK_0xe7c2 = {BOXIDX, 0x11, 0x02, 0x10, 0x6440};

// ================================================
// 0xe7c8: WORD 'UNK_0xe7ca' codep=0x73ea parp=0xe7ca
// ================================================
// orphan
LoadDataType UNK_0xe7ca = {PLANETIDX, 0x00, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7d0: WORD 'UNK_0xe7d2' codep=0x73ea parp=0xe7d2
// ================================================
LoadDataType UNK_0xe7d2 = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xe7d8: WORD 'UNK_0xe7da' codep=0x73ea parp=0xe7da
// ================================================
LoadDataType UNK_0xe7da = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7e0: WORD 'UNK_0xe7e2' codep=0x73ea parp=0xe7e2
// ================================================
LoadDataType UNK_0xe7e2 = {PLANETIDX, 0x05, 0x02, 0x16, 0x658f};

// ================================================
// 0xe7e8: WORD 'UNK_0xe7ea' codep=0x73ea parp=0xe7ea
// ================================================
LoadDataType UNK_0xe7ea = {PLANETIDX, 0x0f, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7f0: WORD 'UNK_0xe7f2' codep=0x73ea parp=0xe7f2
// ================================================
LoadDataType UNK_0xe7f2 = {PLANETIDX, 0x10, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7f8: WORD 'UNK_0xe7fa' codep=0x73ea parp=0xe7fa
// ================================================
// orphan
LoadDataType UNK_0xe7fa = {PLANETIDX, 0x11, 0x02, 0x16, 0x658f};

// ================================================
// 0xe800: WORD 'UNK_0xe802' codep=0x73ea parp=0xe802
// ================================================
LoadDataType UNK_0xe802 = {PLANETIDX, 0x13, 0x01, 0x16, 0x658f};

// ================================================
// 0xe808: WORD 'UNK_0xe80a' codep=0x73ea parp=0xe80a
// ================================================
// orphan
LoadDataType UNK_0xe80a = {PLANETIDX, 0x14, 0x01, 0x16, 0x658f};

// ================================================
// 0xe810: WORD 'UNK_0xe812' codep=0x73ea parp=0xe812
// ================================================
// orphan
LoadDataType UNK_0xe812 = {PLANETIDX, 0x15, 0x01, 0x16, 0x658f};

// ================================================
// 0xe818: WORD 'UNK_0xe81a' codep=0x73ea parp=0xe81a
// ================================================
LoadDataType UNK_0xe81a = {REGIONSIDX, 0x02, 0x02, 0x1c, 0x69cd};

// ================================================
// 0xe820: WORD 'UNK_0xe822' codep=0x73ea parp=0xe822
// ================================================
LoadDataType UNK_0xe822 = {REGIONSIDX, 0x07, 0x08, 0x1c, 0x69cd};

// ================================================
// 0xe828: WORD 'UNK_0xe82a' codep=0x73ea parp=0xe82a
// ================================================
LoadDataType UNK_0xe82a = {REGIONSIDX, 0x0f, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe830: WORD 'UNK_0xe832' codep=0x73ea parp=0xe832
// ================================================
LoadDataType UNK_0xe832 = {REGIONSIDX, 0x0f, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe838: WORD 'UNK_0xe83a' codep=0x73ea parp=0xe83a
// ================================================
LoadDataType UNK_0xe83a = {REGIONSIDX, 0x10, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe840: WORD 'UNK_0xe842' codep=0x73ea parp=0xe842
// ================================================
LoadDataType UNK_0xe842 = {REGIONSIDX, 0x10, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe848: WORD 'UNK_0xe84a' codep=0x73ea parp=0xe84a
// ================================================
LoadDataType UNK_0xe84a = {REGIONSIDX, 0x11, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe850: WORD 'UNK_0xe852' codep=0x73ea parp=0xe852
// ================================================
LoadDataType UNK_0xe852 = {REGIONSIDX, 0x11, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe858: WORD 'UNK_0xe85a' codep=0x73ea parp=0xe85a
// ================================================
LoadDataType UNK_0xe85a = {REGIONSIDX, 0x12, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe860: WORD 'UNK_0xe862' codep=0x73ea parp=0xe862
// ================================================
LoadDataType UNK_0xe862 = {REGIONSIDX, 0x12, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe868: WORD 'UNK_0xe86a' codep=0x73ea parp=0xe86a
// ================================================
LoadDataType UNK_0xe86a = {REGIONSIDX, 0x13, 0x08, 0x1c, 0x69cd};

// ================================================
// 0xe870: WORD 'UNK_0xe872' codep=0x73ea parp=0xe872
// ================================================
LoadDataType UNK_0xe872 = {REGIONSIDX, 0x1b, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe878: WORD 'UNK_0xe87a' codep=0x744d parp=0xe87a
// ================================================
IFieldType UNK_0xe87a = {REGIONSIDX, 0x0b, 0x02};

// ================================================
// 0xe87d: WORD 'UNK_0xe87f' codep=0x73ea parp=0xe87f
// ================================================
LoadDataType UNK_0xe87f = {CREATUREIDX, 0x00, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe885: WORD 'UNK_0xe887' codep=0x73ea parp=0xe887
// ================================================
LoadDataType UNK_0xe887 = {CREATUREIDX, 0x02, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe88d: WORD 'UNK_0xe88f' codep=0x73ea parp=0xe88f
// ================================================
LoadDataType UNK_0xe88f = {CREATUREIDX, 0x2c, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe895: WORD 'UNK_0xe897' codep=0x73ea parp=0xe897
// ================================================
LoadDataType UNK_0xe897 = {CREATUREIDX, 0x2e, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe89d: WORD 'UNK_0xe89f' codep=0x73ea parp=0xe89f
// ================================================
LoadDataType UNK_0xe89f = {CREATUREIDX, 0x0a, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe8a5: WORD 'UNK_0xe8a7' codep=0x73ea parp=0xe8a7
// ================================================
LoadDataType UNK_0xe8a7 = {CREATUREIDX, 0x0c, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe8ad: WORD 'UNK_0xe8af' codep=0x224c parp=0xe8af params=0 returns=0
// ================================================

void UNK_0xe8af() // UNK_0xe8af
{
  Push(Read16(cc_UNK_0xe79e)); // UNK_0xe79e
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xe8c1: WORD 'UNK_0xe8c3' codep=0x224c parp=0xe8c3
// ================================================
// orphan

void UNK_0xe8c3() // UNK_0xe8c3
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xe8c9: WORD 'UNK_0xe8cb' codep=0x224c parp=0xe8cb params=0 returns=1
// ================================================
// orphan

void UNK_0xe8cb() // UNK_0xe8cb
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xe8d5: WORD 'UNK_0xe8d7' codep=0x224c parp=0xe8d7 params=0 returns=1
// ================================================

void UNK_0xe8d7() // UNK_0xe8d7
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe8df: WORD 'UNK_0xe8e1' codep=0x224c parp=0xe8e1 params=0 returns=1
// ================================================

void UNK_0xe8e1() // UNK_0xe8e1
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe8eb: WORD 'UNK_0xe8ed' codep=0x224c parp=0xe8ed params=3 returns=1
// ================================================
// orphan

void UNK_0xe8ed() // UNK_0xe8ed
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
// 0xe901: WORD 'UNK_0xe903' codep=0x224c parp=0xe903
// ================================================
// orphan

void UNK_0xe903() // UNK_0xe903
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(0);
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xe90b: call   1649
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xe918: WORD 'UNK_0xe91a' codep=0x224c parp=0xe91a params=1 returns=2
// ================================================

void UNK_0xe91a() // UNK_0xe91a
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 2); //  @ 2+
  RANGE(); // RANGE
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xe926: WORD 'UNK_0xe928' codep=0x224c parp=0xe928
// ================================================

void UNK_0xe928() // UNK_0xe928
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
// 0xe940: call   1649
  Push(0);
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  UNK_0xe91a(); // UNK_0xe91a

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
// 0xe9be: WORD 'UNK_0xe9c0' codep=0x224c parp=0xe9c0 params=2 returns=2
// ================================================

void UNK_0xe9c0() // UNK_0xe9c0
{
  unsigned short int a;
  do
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
  } while(1);
}


// ================================================
// 0xe9e6: WORD 'UNK_0xe9e8' codep=0x224c parp=0xe9e8 params=2 returns=2
// ================================================

void UNK_0xe9e8() // UNK_0xe9e8
{
  UNK_0xe9c0(); // UNK_0xe9c0
  Push(Pop() + 1); //  1+
  _1_dot_5_at_(); // 1.5@
  ROT(); // ROT
  Pop(); // DROP
}


// ================================================
// 0xe9f4: WORD 'UNK_0xe9f6' codep=0x224c parp=0xe9f6 params=1 returns=1
// ================================================

void UNK_0xe9f6() // UNK_0xe9f6
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
// 0xea08: WORD 'UNK_0xea0a' codep=0x224c parp=0xea0a
// ================================================

void UNK_0xea0a() // UNK_0xea0a
{
  unsigned short int i, imax;
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  Push(0xe7f2); // probable 'UNK_0xe7f2'
  IFLD_at_(); // IFLD@
  Push(Pop() + 1); //  1+
  Push(0xe7ea); // probable 'UNK_0xe7ea'
  IFLD_at_(); // IFLD@
  IOPEN(); // IOPEN

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
    Push(i); // I
    Push(1);
    _star_CREATE(); // *CREATE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xea40: WORD 'A.DENSIT' codep=0xe90b parp=0xea4d
// ================================================
// 0xea4d: db 0x00 0x00 0x9c 0xff 0xe2 0xff 0xf1 0xff 0x00 0x00 0x00 0x00 0xe2 0xff '              '

// ================================================
// 0xea5b: WORD 'PLANET.G' codep=0xe90b parp=0xea68
// ================================================
// 0xea68: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xf6 0xff 0xe2 0xff 0xb0 0xff '              '

// ================================================
// 0xea76: WORD 'UNK_0xea78' codep=0x224c parp=0xea78
// ================================================

void UNK_0xea78() // UNK_0xea78
{
  Push(0);
  Push(0x63ef+UNK_0xe87a.offset); // UNK_0xe87a<IFIELD>
  Store_3(); // !_3
  LoadData(UNK_0xe82a); // from 'REGIONS'
  Push(4);
  Push(0);
  FILL_1(); // FILL_1
  LoadData(UNK_0xe822); // from 'REGIONS'
  Push(8);
  Push(0);
  FILL_1(); // FILL_1
  LoadData(UNK_0xe86a); // from 'REGIONS'
  Push(8);
  Push(0);
  FILL_1(); // FILL_1
  Push(0);
  LoadData(UNK_0xe872); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xea9e: WORD 'UNK_0xeaa0' codep=0x224c parp=0xeaa0
// ================================================

void UNK_0xeaa0() // UNK_0xeaa0
{
  unsigned short int i, imax;
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_RECORD_n_); // RECORD#
    Store_3(); // !_3
    UNK_0xea78(); // UNK_0xea78
    i++;
  } while(i<imax); // (LOOP)

  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xeabc: WORD 'UNK_0xeabe' codep=0x224c parp=0xeabe
// ================================================
// orphan

void UNK_0xeabe() // UNK_0xeabe
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(UNK_0xe802); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  A_dot_DENSIT(); // A.DENSIT
  LoadData(UNK_0xe7fa); // from 'PLANET'
  Push(Read16(Pop())); //  @
  LoadData(UNK_0xe7d2); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(0x0064);
  _slash_(); // /
  Push(5);
  MIN(); // MIN
  Push(Pop() + 1); //  1+
  PLANET_dot_G(); // PLANET.G
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeaea: WORD 'UNK_0xeaec' codep=0x224c parp=0xeaec params=1 returns=1
// ================================================

void UNK_0xeaec() // UNK_0xeaec
{
  Push(Pop() & 0x000e); //  0x000e AND
}


// ================================================
// 0xeaf4: WORD 'NICE' codep=0xe940 parp=0xeafd
// ================================================
// 0xeafd: db 0x60 0x00 0x00 0x00 0x01 0x00 0x5f 0xeb 0x00 0x00 0x02 0x00 0x63 0xeb 0x00 0x00 0x04 0x00 0x67 0xeb 0x00 0x00 0x06 0x00 0x6b 0xeb 0x00 0x00 0x08 0x00 0x77 0xeb 0x00 0x00 0x0a 0x00 0x7b 0xeb 0x00 0x00 0x0c 0x00 0x7f 0xeb 0x00 0x00 0x0e 0x00 0x8b 0xeb 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x64 0x00 0x00 0x00 0x64 0x02 0x00 0x00 0x64 0x04 0x00 0x00 0x2d 0x04 0x00 0x00 0x5a 0x02 0x00 0x00 0x64 0x06 0x00 0x00 0x64 0x00 0x00 0x00 0x64 0x00 0x00 0x00 0x32 0x04 0x00 0x00 0x46 0x0c 0x00 0x00 0x64 0x08 0x00 0x00 0x19 0x02 0x00 0x00 0x1d 0x06 0x00 0x00 0x24 0x0a 0x00 0x00 0x3a 0x04 0x00 0x00 0x49 0x0c 0x00 0x00 0x64 0x08 0x00 0x00 '`     _     c     g     k     w     {                                                            d   d   d   -   Z   d   d   d   2   F   d           $   :   I   d   '

// ================================================
// 0xeba3: WORD 'UNK_0xeba5' codep=0x224c parp=0xeba5
// ================================================

void UNK_0xeba5() // UNK_0xeba5
{
  NICE(); // NICE
  UNK_0xe9e8(); // UNK_0xe9e8
}


// ================================================
// 0xebab: WORD 'UNK_0xebad' codep=0x224c parp=0xebad
// ================================================
// orphan

void UNK_0xebad() // UNK_0xebad
{
  ROT(); // ROT
  LoadData(UNK_0xe81a); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  MAX(); // MAX
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xebbb: WORD 'UNK_0xebbd' codep=0x224c parp=0xebbd
// ================================================
// orphan

void UNK_0xebbd() // UNK_0xebbd
{
  Push(0);
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  Push(0xe8c3); // probable 'UNK_0xe8c3'
  Push(0xebad); // probable 'UNK_0xebad'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xebd1: WORD 'UNK_0xebd3' codep=0x224c parp=0xebd3
// ================================================

void UNK_0xebd3() // UNK_0xebd3
{
  LoadData(UNK_0xe81a); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    LoadData(UNK_0xe81a); // from 'REGIONS'
    Push(Read16(Pop())&0xFF); //  C@
    Push(pp__ro_PLANET_rc_); // (PLANET)
    _1_dot_5_at_(); // 1.5@
    _gt_C_plus_S(); // >C+S
    LoadData(UNK_0xe7da); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    ICLOSE(); // ICLOSE
    Push(4);
    _slash_(); // /
    Push(Pop() + Pop()); // +
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    Push(Pop() + Pop()); // +
    RRND(); // RRND
    Push(0x0100);
    MIN(); // MIN
  } else
  {
    Push(0);
  }
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0);
  }
  Push(0x63ef+UNK_0xe87a.offset); // UNK_0xe87a<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xec17: WORD 'UNK_0xec19' codep=0x224c parp=0xec19
// ================================================

void UNK_0xec19() // UNK_0xec19
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(UNK_0xe7e2); // from 'PLANET'
  Push(Read16(Pop())); //  @
  ICLOSE(); // ICLOSE
  Push(pp_SEED); // SEED
  Store_3(); // !_3
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  Push(0xe8c3); // probable 'UNK_0xe8c3'
  Push(0xebd3); // probable 'UNK_0xebd3'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xec3b: WORD 'UNK_0xec3d' codep=0x224c parp=0xec3d
// ================================================

void UNK_0xec3d() // UNK_0xec3d
{
  Push(Read16(0x63ef+UNK_0xe87a.offset)); // UNK_0xe87a<IFIELD> @
  Push(0x000f);
  _st_(); // <
  LoadData(UNK_0xe82a); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xec4d: WORD 'UNK_0xec4f' codep=0x224c parp=0xec4f
// ================================================

void UNK_0xec4f() // UNK_0xec4f
{
  Push(Read16(0x63ef+UNK_0xe87a.offset) * 2); // UNK_0xe87a<IFIELD> @ 2 *
  UNK_0xe8e1(); // UNK_0xe8e1
  _gt_(); // >
  Push(Read16(regsp)); // DUP
  LoadData(UNK_0xe83a); // from 'REGIONS'
  C_ex_(); // C!
  Push(Read16(regsp)); // DUP
  LoadData(UNK_0xe82a); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xec69: WORD 'UNK_0xec6b' codep=0x224c parp=0xec6b params=1 returns=0
// ================================================

void UNK_0xec6b() // UNK_0xec6b
{
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  UNK_0xe8d7(); // UNK_0xe8d7
  Push(0x0064 - Read16(0x63ef+UNK_0xe87a.offset) * 2); // 0x0064 UNK_0xe87a<IFIELD> @ 2 * -
  Push(0);
  MAX(); // MAX
  Push(2);
  _slash_(); // /
  UNK_0xe8e1(); // UNK_0xe8e1
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop()==0?1:0); //  0=
  }
  Push(Read16(regsp)); // DUP
  LoadData(UNK_0xe83a); // from 'REGIONS'
  C_ex_(); // C!
  Push(Pop()==0?1:0); //  0=
  LoadData(UNK_0xe82a); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xeca1: WORD 'UNK_0xeca3' codep=0x224c parp=0xeca3
// ================================================

void UNK_0xeca3() // UNK_0xeca3
{
  UNK_0xec4f(); // UNK_0xec4f
  UNK_0xec6b(); // UNK_0xec6b
}


// ================================================
// 0xeca9: WORD 'UNK_0xecab' codep=0x224c parp=0xecab
// ================================================

void UNK_0xecab() // UNK_0xecab
{
  Push(Read16(0x63ef+UNK_0xe87a.offset)); // UNK_0xe87a<IFIELD> @
  UNK_0xe8e1(); // UNK_0xe8e1
  _gt_(); // >
  LoadData(UNK_0xe84a); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xecb9: WORD 'UNK_0xecbb' codep=0x224c parp=0xecbb
// ================================================

void UNK_0xecbb() // UNK_0xecbb
{
  Push(Read16(0x63ef+UNK_0xe87a.offset)); // UNK_0xe87a<IFIELD> @
  UNK_0xe8e1(); // UNK_0xe8e1
  _gt_(); // >
  LoadData(UNK_0xe85a); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xecc9: WORD 'UNK_0xeccb' codep=0x224c parp=0xeccb
// ================================================

void UNK_0xeccb() // UNK_0xeccb
{
  UNK_0xec3d(); // UNK_0xec3d
  LoadData(UNK_0xe82a); // from 'REGIONS'
  Push(!(Read16(Pop())&0xFF)); //  C@ NOT
  if (Pop() != 0)
  {
    Push(Read16(0x63ef+UNK_0xe87a.offset)); // UNK_0xe87a<IFIELD> @
    Push(Read16(regsp)); // DUP
    Push(0x000e);
    _gt_(); // >
    SWAP(); // SWAP
    Push(0x0032);
    _st_(); // <
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      UNK_0xeca3(); // UNK_0xeca3
    } else
    {
      Push(1);
      LoadData(UNK_0xe82a); // from 'REGIONS'
      C_ex_(); // C!
      Push(1);
      LoadData(UNK_0xe83a); // from 'REGIONS'
      C_ex_(); // C!
    }
  }
  UNK_0xecab(); // UNK_0xecab
  LoadData(UNK_0xe84a); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() == 0) return;
  UNK_0xecbb(); // UNK_0xecbb
}


// ================================================
// 0xed11: WORD 'UNK_0xed13' codep=0x224c parp=0xed13
// ================================================

void UNK_0xed13() // UNK_0xed13
{
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  Push(0xe8c3); // probable 'UNK_0xe8c3'
  Push(0xeccb); // probable 'UNK_0xeccb'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xed25: WORD 'UNK_0xed27' codep=0x224c parp=0xed27
// ================================================

void UNK_0xed27() // UNK_0xed27
{
  Push(0);
  LoadData(UNK_0xe82a); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(Pop() | 1); //  1 OR
  }
  LoadData(UNK_0xe83a); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(Pop() | 2); //  2 OR
  }
  LoadData(UNK_0xe84a); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(Pop() | 4); //  4 OR
  }
  LoadData(UNK_0xe85a); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() == 0) return;
  Push(Pop() | 8); //  8 OR
}


// ================================================
// 0xed5b: WORD 'UNK_0xed5d' codep=0x1d29 parp=0xed5d
// ================================================
// 0xed5d: db 0x3a 0x20 ': '

// ================================================
// 0xed5f: WORD 'UNK_0xed61' codep=0x1d29 parp=0xed61
// ================================================
// 0xed61: db 0x3a 0x20 ': '

// ================================================
// 0xed63: WORD 'UNK_0xed65' codep=0x1d29 parp=0xed65
// ================================================
// 0xed65: db 0x3a 0x20 ': '

// ================================================
// 0xed67: WORD 'UNK_0xed69' codep=0x224c parp=0xed69 params=1 returns=2
// ================================================

void UNK_0xed69() // UNK_0xed69
{
  Push(Pop() >> 1); //  2/
  Push(Read16(regsp)); // DUP
  Push(Pop() & 1); //  1 AND
}


// ================================================
// 0xed73: WORD 'UNK_0xed75' codep=0x224c parp=0xed75 params=1 returns=0
// ================================================

void UNK_0xed75() // UNK_0xed75
{
  UNK_0xed69(); // UNK_0xed69
  Push(Pop() * 2); //  2 *
  Push(pp_UNK_0xed5d); // UNK_0xed5d
  Store_3(); // !_3
  UNK_0xed69(); // UNK_0xed69
  Push(Pop() * 2); //  2 *
  Push(pp_UNK_0xed61); // UNK_0xed61
  Store_3(); // !_3
  UNK_0xed69(); // UNK_0xed69
  Push(Pop() * 2); //  2 *
  Push(pp_UNK_0xed65); // UNK_0xed65
  Store_3(); // !_3
  Pop(); // DROP
}


// ================================================
// 0xed97: WORD 'UNK_0xed99' codep=0x224c parp=0xed99 params=0 returns=1
// ================================================

void UNK_0xed99() // UNK_0xed99
{
  Push(!(Read16(pp_UNK_0xed5d) | (Read16(pp_UNK_0xed61) | Read16(pp_UNK_0xed65)))); // UNK_0xed5d @ UNK_0xed61 @ UNK_0xed65 @ OR OR NOT
}


// ================================================
// 0xedad: WORD 'UNK_0xedaf' codep=0x224c parp=0xedaf params=2 returns=0
// ================================================

void UNK_0xedaf() // UNK_0xedaf
{
  Push(Read16(regsp)); // DUP
  Push(!(Read16(Pop())==0?1:0)); //  @ 0= NOT
  if (Pop() != 0)
  {
    Push(0);
    ROT(); // ROT
    _dash_(); // -
    SWAP(); // SWAP
    _plus__ex__2(); // +!_2
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xedcd: WORD 'UNK_0xedcf' codep=0x224c parp=0xedcf params=1 returns=0
// ================================================

void UNK_0xedcf() // UNK_0xedcf
{
  UNK_0xed69(); // UNK_0xed69
  Push(pp_UNK_0xed5d); // UNK_0xed5d
  UNK_0xedaf(); // UNK_0xedaf
  UNK_0xed69(); // UNK_0xed69
  Push(pp_UNK_0xed61); // UNK_0xed61
  UNK_0xedaf(); // UNK_0xedaf
  UNK_0xed69(); // UNK_0xed69
  Push(pp_UNK_0xed65); // UNK_0xed65
  UNK_0xedaf(); // UNK_0xedaf
  Pop(); // DROP
}


// ================================================
// 0xede5: WORD 'UNK_0xede7' codep=0x224c parp=0xede7 params=1 returns=1
// ================================================

void UNK_0xede7() // UNK_0xede7
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    LoadData(UNK_0xe822); // from 'REGIONS'
    Push(Read16(regsp)); // DUP
    Push(Pop() + 8); //  8 +
    SWAP(); // SWAP

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push((Read16(i)&0xFF)==0?1:0); // I C@ 0=
      if (Pop() != 0)
      {
        Push(i); // I
        C_ex_(); // C!
        Push(1);
        imax = i; // LEAVE
      } else
      {
        Push(Read16(i)&0xFF); // I C@
        OVER(); // OVER
        Push((Pop()==Pop())?1:0); // =
        if (Pop() != 0)
        {
          Pop(); // DROP
          Push(0);
          imax = i; // LEAVE
        }
      }
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  Push(0);
}


// ================================================
// 0xee2d: WORD 'UNK_0xee2f' codep=0x224c parp=0xee2f params=1 returns=0
// ================================================

void UNK_0xee2f() // UNK_0xee2f
{
  UNK_0xeaec(); // UNK_0xeaec
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(1);
  SWAP(); // SWAP
  UNK_0xe9f6(); // UNK_0xe9f6
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xee41: WORD 'UNK_0xee43' codep=0x224c parp=0xee43 params=1 returns=0
// ================================================

void UNK_0xee43() // UNK_0xee43
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  Push(Pop() & 1); //  1 AND
  a = Pop(); // >R
  UNK_0xeaec(); // UNK_0xeaec
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    UNK_0xed75(); // UNK_0xed75
    do
    {
      UNK_0xe8e1(); // UNK_0xe8e1
      OVER(); // OVER
      Push(0);
      UNK_0xeba5(); // UNK_0xeba5
      Pop(); // DROP
      Push(Read16(regsp)); // DUP
      Push(Pop()==0?1:0); //  0=
      ABORT("SOURCE NICHE ERROR ", 19);// (ABORT")
      Push(Read16(a)); // R@
      Push(Pop() | Pop()); // OR
      Push(Read16(regsp)); // DUP
      UNK_0xede7(); // UNK_0xede7
      if (Pop() != 0)
      {
        Push(Read16(regsp)); // DUP
        UNK_0xee2f(); // UNK_0xee2f
      }
      UNK_0xedcf(); // UNK_0xedcf
      UNK_0xed99(); // UNK_0xed99
    } while(Pop() == 0);
    Pop(); // DROP
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xee9b: WORD 'UNK_0xee9d' codep=0x224c parp=0xee9d
// ================================================

void UNK_0xee9d() // UNK_0xee9d
{
  LoadData(UNK_0xe81a); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() == 0) return;
  UNK_0xed27(); // UNK_0xed27
  UNK_0xee43(); // UNK_0xee43
}


// ================================================
// 0xeeab: WORD 'UNK_0xeead' codep=0x224c parp=0xeead
// ================================================

void UNK_0xeead() // UNK_0xeead
{
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  Push(0xe8c3); // probable 'UNK_0xe8c3'
  Push(0xee9d); // probable 'UNK_0xee9d'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeebf: WORD 'UNK_0xeec1' codep=0x224c parp=0xeec1 params=3 returns=3
// ================================================

void UNK_0xeec1() // UNK_0xeec1
{
  ROT(); // ROT
  Push(Read16(0x63ef+UNK_0xe87a.offset)); // UNK_0xe87a<IFIELD> @
  MAX(); // MAX
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xeecf: WORD 'UNK_0xeed1' codep=0x224c parp=0xeed1
// ================================================

void UNK_0xeed1() // UNK_0xeed1
{
  Push(0);
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  Push(0xe8c3); // probable 'UNK_0xe8c3'
  Push(0xeec1); // probable 'UNK_0xeec1'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeee5: WORD 'UNK_0xeee7' codep=0x224c parp=0xeee7 params=2 returns=0
// ================================================

void UNK_0xeee7() // UNK_0xeee7
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  if (Pop() != 0)
  {
    Push(Read16(a)); // R@
    Push(0x0050);
    _gt_(); // >
    if (Pop() != 0)
    {
      Push(2);
      Push(5);
    } else
    {
      Push(Read16(a)); // R@
      Push(0x000f);
      _slash_(); // /
      Push(1);
      MAX(); // MAX
      Push(1);
      SWAP(); // SWAP
    }
    RRND(); // RRND
    OVER(); // OVER
    Store_3(); // !_3
  }
  Pop(); // DROP
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xef23: WORD 'UNK_0xef25' codep=0x224c parp=0xef25
// ================================================

void UNK_0xef25() // UNK_0xef25
{
  UNK_0xeed1(); // UNK_0xeed1
  Push(pp_PLANTS); // PLANTS
  OVER(); // OVER
  UNK_0xeee7(); // UNK_0xeee7
  Push(pp_ANIMALS); // ANIMALS
  SWAP(); // SWAP
  UNK_0xeee7(); // UNK_0xeee7
}


// ================================================
// 0xef35: WORD 'UNK_0xef37' codep=0x1d29 parp=0xef37
// ================================================
// 0xef37: db 0x3a 0x20 ': '

// ================================================
// 0xef39: WORD 'UNK_0xef3b' codep=0x224c parp=0xef3b
// ================================================

void UNK_0xef3b() // UNK_0xef3b
{
  LoadData(UNK_0xe822); // from 'REGIONS'
  Push(Pop() + Read16(pp_UNK_0xef37)); //  UNK_0xef37 @ +
}


// ================================================
// 0xef45: WORD 'UNK_0xef47' codep=0x224c parp=0xef47
// ================================================

void UNK_0xef47() // UNK_0xef47
{
  LoadData(UNK_0xe86a); // from 'REGIONS'
  Push(Pop() + Read16(pp_UNK_0xef37)); //  UNK_0xef37 @ +
}


// ================================================
// 0xef51: WORD 'UNK_0xef53' codep=0x1d29 parp=0xef53
// ================================================
// 0xef53: db 0x00 0x00 '  '

// ================================================
// 0xef55: WORD 'UNK_0xef57' codep=0x224c parp=0xef57
// ================================================

void UNK_0xef57() // UNK_0xef57
{
  unsigned short int i, imax;
  Push(8);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_UNK_0xef37); // UNK_0xef37
    Store_3(); // !_3
    UNK_0xef3b(); // UNK_0xef3b
    Push(Read16(Pop())&0xFF); //  C@
    UNK_0xeaec(); // UNK_0xeaec
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+UNK_0xe87a.offset)); // UNK_0xe87a<IFIELD> @
      Push(0x000a);
      _slash_(); // /
      Push(5);
      MIN(); // MIN
      Push(Pop() + 1); //  1+
      Push(1);
      SWAP(); // SWAP
      RRND(); // RRND
    } else
    {
      Push(0);
    }
    UNK_0xef47(); // UNK_0xef47
    C_ex_(); // C!
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xef93: WORD 'UNK_0xef95' codep=0x224c parp=0xef95
// ================================================

void UNK_0xef95() // UNK_0xef95
{
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  Push(0xe8c3); // probable 'UNK_0xe8c3'
  Push(0xef57); // probable 'UNK_0xef57'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xefa7: WORD 'UNK_0xefa9' codep=0x224c parp=0xefa9
// ================================================

void UNK_0xefa9() // UNK_0xefa9
{
  unsigned short int i, imax;
  Push(0);
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_UNK_0xef37); // UNK_0xef37
    Store_3(); // !_3
    UNK_0xef47(); // UNK_0xef47
    Push(Read16(Pop())&0xFF); //  C@
    Push(Pop() + Pop()); // +
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xefc3: WORD 'UNK_0xefc5' codep=0x224c parp=0xefc5
// ================================================

void UNK_0xefc5() // UNK_0xefc5
{
  UNK_0xefa9(); // UNK_0xefa9
  Push(Read16(regsp)); // DUP
  Push(Read16(0x63ef+UNK_0xe87a.offset)); // UNK_0xe87a<IFIELD> @
  Push(0x0028);
  MIN(); // MIN
  RRND(); // RRND
  SWAP(); // SWAP
  _slash_(); // /
  LoadData(UNK_0xe872); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xefdf: WORD 'UNK_0xefe1' codep=0x224c parp=0xefe1
// ================================================

void UNK_0xefe1() // UNK_0xefe1
{
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  Push(0xe8c3); // probable 'UNK_0xe8c3'
  Push(0xefc5); // probable 'UNK_0xefc5'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeff3: WORD 'UNK_0xeff5' codep=0x224c parp=0xeff5
// ================================================

void UNK_0xeff5() // UNK_0xeff5
{
  unsigned short int i, imax;
  LoadData(UNK_0xe82a); // from 'REGIONS'
  Push(4);
  Push(0);
  FILL_1(); // FILL_1
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_UNK_0xef37); // UNK_0xef37
    Store_3(); // !_3
    UNK_0xef3b(); // UNK_0xef3b
    Push(Read16(Pop())&0xFF); //  C@
    UNK_0xeaec(); // UNK_0xeaec
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      UNK_0xe9f6(); // UNK_0xe9f6
      Push(Pop()==pp_PLANTS?1:0); //  PLANTS =
      if (Pop() != 0)
      {
        LoadData(UNK_0xe832); // from 'REGIONS'
        LoadData(UNK_0xe852); // from 'REGIONS'
      } else
      {
        LoadData(UNK_0xe842); // from 'REGIONS'
        LoadData(UNK_0xe862); // from 'REGIONS'
      }
      UNK_0xef47(); // UNK_0xef47
      Push(Read16(Pop())&0xFF); //  C@
      Push(Read16(regsp)); // DUP
      ROT(); // ROT
      _plus__ex__2(); // +!_2
      SWAP(); // SWAP
      _plus__ex__2(); // +!_2
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf03f: WORD 'UNK_0xf041' codep=0x224c parp=0xf041
// ================================================

void UNK_0xf041() // UNK_0xf041
{
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  Push(0xe8c3); // probable 'UNK_0xe8c3'
  Push(0xeff5); // probable 'UNK_0xeff5'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf053: WORD 'UNK_0xf055' codep=0x224c parp=0xf055
// ================================================

void UNK_0xf055() // UNK_0xf055
{
  UNK_0xec19(); // UNK_0xec19
  UNK_0xed13(); // UNK_0xed13
  UNK_0xeead(); // UNK_0xeead
  UNK_0xef25(); // UNK_0xef25
  UNK_0xef95(); // UNK_0xef95
  UNK_0xefe1(); // UNK_0xefe1
  UNK_0xf041(); // UNK_0xf041
}


// ================================================
// 0xf065: WORD 'UNK_0xf067' codep=0x224c parp=0xf067
// ================================================

void UNK_0xf067() // UNK_0xf067
{
  Push(Read16(pp_FILE_n_)); // FILE# @
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Push(0x0044);
  Func6("FILE-RLEN");
  Push(Read16(Pop())&0xFF); //  C@
  Push(0);
  FILL_1(); // FILL_1
}


// ================================================
// 0xf07f: WORD 'UNK_0xf081' codep=0x224c parp=0xf081 params=1 returns=0
// ================================================

void UNK_0xf081() // UNK_0xf081
{
  Push(Pop() - 1); //  1 -
  if (Pop() == 0) return;
  Push(1);
  Push(pp_UNK_0xef53); // UNK_0xef53
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf091: WORD 'UNK_0xf093' codep=0x224c parp=0xf093 params=0 returns=0
// ================================================

void UNK_0xf093() // UNK_0xf093
{
  Push(Read16(pp_UNK_0xef53)); // UNK_0xef53 @
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
}


// ================================================
// 0xf09d: WORD 'UNK_0xf09f' codep=0x224c parp=0xf09f
// ================================================

void UNK_0xf09f() // UNK_0xf09f
{
  Push(4);
  PICK(); // PICK
  Push(Pop()==pp_PLANTS?1:0); //  PLANTS =
  if (Pop() != 0)
  {
    Push(0xe832); // probable 'UNK_0xe832'
  } else
  {
    Push(0xe842); // probable 'UNK_0xe842'
  }
  IFLD_at_(); // IFLD@
  Push(4);
  ROLL(); // ROLL
  Push(Pop() + Pop()); // +
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xf0c5: WORD 'UNK_0xf0c7' codep=0x224c parp=0xf0c7
// ================================================

void UNK_0xf0c7() // UNK_0xf0c7
{
  Push(0);
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  Push(0xe8c3); // probable 'UNK_0xe8c3'
  Push(0xf09f); // probable 'UNK_0xf09f'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
  Push(3);
  PICK(); // PICK
  _slash_(); // /
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Store_3(); // !_3
}


// ================================================
// 0xf0e7: WORD 'UNK_0xf0e9' codep=0x224c parp=0xf0e9
// ================================================

void UNK_0xf0e9() // UNK_0xf0e9
{
  Push(Read16(regsp)); // DUP
  Push(Pop()==pp_PLANTS?1:0); //  PLANTS =
  if (Pop() != 0)
  {
    LoadData(UNK_0xe852); // from 'REGIONS'
    return;
  }
  LoadData(UNK_0xe862); // from 'REGIONS'
}


// ================================================
// 0xf0fd: WORD 'UNK_0xf0ff' codep=0x224c parp=0xf0ff
// ================================================

void UNK_0xf0ff() // UNK_0xf0ff
{
  UNK_0xf0e9(); // UNK_0xf0e9
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xf105: WORD 'UNK_0xf107' codep=0x224c parp=0xf107
// ================================================

void UNK_0xf107() // UNK_0xf107
{
  UNK_0xf0e9(); // UNK_0xf0e9
  Push(-1);
  SWAP(); // SWAP
  _plus__ex__2(); // +!_2
  Push(-1);
  UNK_0xef47(); // UNK_0xef47
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf117: WORD 'UNK_0xf119' codep=0x224c parp=0xf119
// ================================================

void UNK_0xf119() // UNK_0xf119
{
  UNK_0xf0ff(); // UNK_0xf0ff
  if (Pop() != 0)
  {
    do
    {
      Push(0);
      Push(7);
      RRND(); // RRND
      Push(pp_UNK_0xef37); // UNK_0xef37
      Store_3(); // !_3
      UNK_0xef3b(); // UNK_0xef3b
      Push(Read16(Pop())&0xFF); //  C@
      UNK_0xeaec(); // UNK_0xeaec
      UNK_0xe9f6(); // UNK_0xe9f6
      OVER(); // OVER
      Push((Pop()==Pop())?1:0); // =
      UNK_0xef47(); // UNK_0xef47
      Push(((Read16(Pop())&0xFF)==0?1:0)==0?1:0); //  C@ 0= 0=
      Push(Pop() & Pop()); // AND
    } while(Pop() == 0);
    UNK_0xf107(); // UNK_0xf107
    UNK_0xef3b(); // UNK_0xef3b
    Push(Read16(Pop())&0xFF); //  C@
    UNK_0xeaec(); // UNK_0xeaec
    return;
  }
  Push(0);
}


// ================================================
// 0xf153: WORD 'UNK_0xf155' codep=0x224c parp=0xf155
// ================================================

void UNK_0xf155() // UNK_0xf155
{
  do
  {
    Push(pp__ro_PLANET_rc_); // (PLANET)
    _1_dot_5_at_(); // 1.5@
    _gt_C_plus_S(); // >C+S
    LoadData(UNK_0xe7ea); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    LoadData(UNK_0xe7f2); // from 'PLANET'
    Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
    RRND(); // RRND
    ICLOSE(); // ICLOSE
    Push(pp_RECORD_n_); // RECORD#
    Store_3(); // !_3
    UNK_0xf119(); // UNK_0xf119
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
}


// ================================================
// 0xf177: WORD 'UNK_0xf179' codep=0x224c parp=0xf179
// ================================================

void UNK_0xf179() // UNK_0xf179
{
  Push(0);
  LoadData(UNK_0xe897); // from 'CREATURE'
  Store_3(); // !_3
  Push(0);
  LoadData(UNK_0xe88f); // from 'CREATURE'
  Store_3(); // !_3
}


// ================================================
// 0xf187: WORD 'UNK_0xf189' codep=0x224c parp=0xf189
// ================================================

void UNK_0xf189() // UNK_0xf189
{
  Push(0);
  LoadData(UNK_0xe87f); // from 'CREATURE'
  Store_3(); // !_3
  Push(0);
  LoadData(UNK_0xe887); // from 'CREATURE'
  Store_3(); // !_3
}


// ================================================
// 0xf197: WORD 'UNK_0xf199' codep=0x224c parp=0xf199
// ================================================

void UNK_0xf199() // UNK_0xf199
{
  unsigned short int a;
  Push(4);
  PICK(); // PICK
  UNK_0xf0e9(); // UNK_0xf0e9
  SWAP(); // SWAP
  Pop(); // DROP
  Push(Read16(Pop())&0xFF); //  C@
  a = Pop(); // >R
  ROT(); // ROT
  Push(Pop() + a); //  R> +
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xf1b3: WORD 'UNK_0xf1b5' codep=0x224c parp=0xf1b5
// ================================================

void UNK_0xf1b5() // UNK_0xf1b5
{
  Push(0);
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  Push(0xe8c3); // probable 'UNK_0xe8c3'
  Push(0xf199); // probable 'UNK_0xf199'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
  Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf1d1: WORD 'UNK_0xf1d3' codep=0x224c parp=0xf1d3 params=0 returns=0
// ================================================

void UNK_0xf1d3() // UNK_0xf1d3
{
  Push(Read16(pp_UNK_0xef53)); // UNK_0xef53 @
  Push(0x0063);
  _gt_(); // >
  if (Pop() == 0) return;
  SET_STR_AS_PARAM("PROGRAMMER ERROR ");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("#SPECIES OVERFLOW ");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("SO SORRY- WHERE WERE YOU, ANYWAY\?");
  DrawTTY(); // .TTY

  label1:
  goto label1;
}


// ================================================
// 0xf23a: WORD 'UNK_0xf23c' codep=0x224c parp=0xf23c
// ================================================

void UNK_0xf23c() // UNK_0xf23c
{
  unsigned short int i, imax;
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  Push(Read16(pp_UNK_0xef53)); // UNK_0xef53 @
  LoadData(UNK_0xe88f); // from 'CREATURE'
  Store_3(); // !_3
  LoadData(UNK_0xe89f); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  SET_dash_CURRENT(); // SET-CURRENT
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(UNK_0xe872); // from 'REGIONS'
  Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0xf081(); // UNK_0xf081
    UNK_0xf093(); // UNK_0xf093
    UNK_0xe8af(); // UNK_0xe8af
    Push(i - 1); // I 1 -
    if (Pop() != 0)
    {
      UNK_0xf067(); // UNK_0xf067
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(Read16(pp_UNK_0xef53)); // UNK_0xef53 @
  UNK_0xf1d3(); // UNK_0xf1d3
  LoadData(UNK_0xe897); // from 'CREATURE'
  Store_3(); // !_3
}


// ================================================
// 0xf284: WORD 'UNK_0xf286' codep=0x224c parp=0xf286
// ================================================

void UNK_0xf286() // UNK_0xf286
{
  unsigned short int i, imax;
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 1); //  @ 1+
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xf1b5(); // UNK_0xf1b5
    if (Pop() != 0)
    {
      Push(i); // I
      UNK_0xf081(); // UNK_0xf081
      UNK_0xf155(); // UNK_0xf155
      Push(Read16(pp_RECORD_n_)); // RECORD# @
      ROT(); // ROT
      ROT(); // ROT
      UNK_0xf093(); // UNK_0xf093
      UNK_0xe8af(); // UNK_0xe8af
      Push(i - 1); // I 1 -
      if (Pop() != 0)
      {
        UNK_0xf067(); // UNK_0xf067
      }
      UNK_0xeaec(); // UNK_0xeaec
      LoadData(UNK_0xe8a7); // from 'CREATURE'
      C_ex_(); // C!
      UNK_0xf093(); // UNK_0xf093
      UNK_0xe8af(); // UNK_0xe8af
      SWAP(); // SWAP
      LoadData(UNK_0xe89f); // from 'CREATURE'
      Store_3(); // !_3
      UNK_0xf23c(); // UNK_0xf23c
    } else
    {
      UNK_0xf093(); // UNK_0xf093
      UNK_0xe8af(); // UNK_0xe8af
      imax = i; // LEAVE
    }
    UNK_0xf1d3(); // UNK_0xf1d3
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf2d8: WORD 'UNK_0xf2da' codep=0x224c parp=0xf2da
// ================================================

void UNK_0xf2da() // UNK_0xf2da
{
  unsigned short int i, imax;
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xf1b5(); // UNK_0xf1b5
    if (Pop() != 0)
    {
      Push(i); // I
      UNK_0xf081(); // UNK_0xf081
      UNK_0xf093(); // UNK_0xf093
      UNK_0xe8af(); // UNK_0xe8af
      UNK_0xf067(); // UNK_0xf067
      Push(Read16(pp_UNK_0xef53)); // UNK_0xef53 @
      LoadData(UNK_0xe87f); // from 'CREATURE'
      Store_3(); // !_3
      Push(Read16(pp_RECORD_n_)); // RECORD# @
      SWAP(); // SWAP
      UNK_0xf286(); // UNK_0xf286
      SWAP(); // SWAP
      Push(pp_RECORD_n_); // RECORD#
      Store_3(); // !_3
      UNK_0xe8af(); // UNK_0xe8af
      Push(Read16(pp_UNK_0xef53)); // UNK_0xef53 @
      LoadData(UNK_0xe887); // from 'CREATURE'
      Store_3(); // !_3
    } else
    {
      imax = i; // LEAVE
    }
    UNK_0xf1d3(); // UNK_0xf1d3
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf31e: WORD 'UNK_0xf320' codep=0x224c parp=0xf320 params=0 returns=0
// ================================================

void UNK_0xf320() // UNK_0xf320
{
  Push(Read16(cc_UNK_0xe79e)); // UNK_0xe79e
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xf332: WORD 'UNK_0xf334' codep=0x224c parp=0xf334
// ================================================

void UNK_0xf334() // UNK_0xf334
{
  Push(pp_UNK_0xef53); // UNK_0xef53
  OFF(); // OFF
  Push(pp_PLANTS); // PLANTS
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  OVER(); // OVER
  UNK_0xf0c7(); // UNK_0xf0c7
  Push(pp_ANIMALS); // ANIMALS
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  OVER(); // OVER
  UNK_0xf0c7(); // UNK_0xf0c7
  Push(0);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  UNK_0xe8af(); // UNK_0xe8af
  UNK_0xf189(); // UNK_0xf189
  UNK_0xf179(); // UNK_0xf179
  UNK_0xf2da(); // UNK_0xf2da
  Push(Read16(pp_UNK_0xef53)); // UNK_0xef53 @
  if (Pop() != 0)
  {
    Push(1);
    Push(pp_UNK_0xef53); // UNK_0xef53
    _plus__ex__2(); // +!_2
    UNK_0xf093(); // UNK_0xf093
    UNK_0xe8af(); // UNK_0xe8af
    UNK_0xf189(); // UNK_0xf189
    UNK_0xf179(); // UNK_0xf179
  }
  UNK_0xf093(); // UNK_0xf093
  UNK_0xf320(); // UNK_0xf320
  UNK_0xf2da(); // UNK_0xf2da
  Push(Read16(pp_UNK_0xef53)); // UNK_0xef53 @
  Push(pp_PLHI); // PLHI
  Store_3(); // !_3
}


// ================================================
// 0xf380: WORD 'UNK_0xf382' codep=0x224c parp=0xf382 params=0 returns=0
// ================================================

void UNK_0xf382() // UNK_0xf382
{
  unsigned short int i, imax;
  Push(Read16(pp_PLHI) + 1); // PLHI @ 1+
  Push(0);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3

  label4:
  UNK_0xe8af(); // UNK_0xe8af
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  OVER(); // OVER
  _st_(); // <
  if (Pop() == 0) goto label1;
  LoadData(UNK_0xe8a7); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xe89f); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xe897); // from 'CREATURE'
  Push(Read16(Pop()) + 1); //  @ 1+
  LoadData(UNK_0xe88f); // from 'CREATURE'
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
      UNK_0xe8af(); // UNK_0xe8af
      Push(Read16(regsp)); // DUP
      LoadData(UNK_0xe89f); // from 'CREATURE'
      C_ex_(); // C!
      OVER(); // OVER
      LoadData(UNK_0xe8a7); // from 'CREATURE'
      C_ex_(); // C!
      i++;
    } while(i<imax); // (LOOP)

  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Pop(); Pop(); // 2DROP
  Push(1);
  Push(pp_RECORD_n_); // RECORD#
  _plus__ex__2(); // +!_2
  goto label4;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf3e8: WORD 'UNK_0xf3ea' codep=0x224c parp=0xf3ea
// ================================================

void UNK_0xf3ea() // UNK_0xf3ea
{
  Push(Read16(0x63ef+UNK_0xe87a.offset)); // UNK_0xe87a<IFIELD> @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(pp_PLHI) + 0x000a); // PLHI @ 0x000a +
    _slash_(); // /
    Push(2);
    MAX(); // MAX
  }
  LoadData(UNK_0xe872); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xf40a: WORD 'UNK_0xf40c' codep=0x224c parp=0xf40c
// ================================================

void UNK_0xf40c() // UNK_0xf40c
{
  unsigned short int i, imax;
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_UNK_0xe79a)); // UNK_0xe79a
    Push(i); // I
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      UNK_0xf3ea(); // UNK_0xf3ea
    }
    i++;
  } while(i<imax); // (LOOP)

  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf430: WORD 'UNK_0xf432' codep=0x224c parp=0xf432
// ================================================

void UNK_0xf432() // UNK_0xf432
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002e);
  IFIND(); // IFIND
}


// ================================================
// 0xf446: WORD 'UNK_0xf448' codep=0x224c parp=0xf448
// ================================================

void UNK_0xf448() // UNK_0xf448
{
  UNK_0xf432(); // UNK_0xf432
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0x000b);
    Push(0x002e);
    ICREATE(); // ICREATE
    _2DUP(); // 2DUP
    Push(pp__ro_PLANET_rc_); // (PLANET)
    _1_dot_5_at_(); // 1.5@
    IINSERT(); // IINSERT
    Push(0x000b);
    Push(0x002c);
    ICREATE(); // ICREATE
    _2SWAP(); // 2SWAP
    IINSERT(); // IINSERT
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    UNK_0xf432(); // UNK_0xf432
    Pop(); // DROP
  }
  CI(); // CI
  Push(pp_SUPER_dash_BOX); // SUPER-BOX
  _1_dot_5_ex_(); // 1.5!
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  _1_dot_5_ex_(); // 1.5!
  Push(0);
  LoadData(UNK_0xe7c2); // from 'BOX'
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf494: WORD 'DIO' codep=0x224c parp=0xf49c
// ================================================
// entry

void DIO() // DIO
{
  Push(pp_PLHI); // PLHI
  OFF(); // OFF
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("AUTO SAMPLING DEVICES ACTIVATED");
  DrawTTY(); // .TTY
  UNK_0xea0a(); // UNK_0xea0a
  UNK_0xeaa0(); // UNK_0xeaa0
  UNK_0xf448(); // UNK_0xf448
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  LoadData(UNK_0xe7da); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    UNK_0xf055(); // UNK_0xf055
    UNK_0xf334(); // UNK_0xf334
    UNK_0xf382(); // UNK_0xf382
    UNK_0xf40c(); // UNK_0xf40c
  } else
  {
    Push(0x1388);
    MS(); // MS
  }
  SET_STR_AS_PARAM("INITIATING HULL INTEGRITY CHECK");
  DrawTTY(); // .TTY
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xf518: db 0x56 0x49 0x54 0x41 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x32 0x32 0x31 0x38 0x2d 0x2d 0x2d 0x2d 0x00 'VITA___________________________________________________---------2218---- '

