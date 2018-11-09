// ====== OVERLAY 'VITA-OV' ======
// store offset = 0xe780
// overlay size   = 0x0de0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE796  codep:0x2214 wordp:0xe796 size:0x0002 C-string:'WE796'
//           WE79A  codep:0x2214 wordp:0xe79a size:0x0002 C-string:'WE79A'
//           WE79E  codep:0x2214 wordp:0xe79e size:0x0002 C-string:'WE79E'
//           WE7A2  codep:0x73ea wordp:0xe7a2 size:0x0006 C-string:'WE7A2'
//           WE7AA  codep:0x73ea wordp:0xe7aa size:0x0006 C-string:'WE7AA'
//           WE7B2  codep:0x73ea wordp:0xe7b2 size:0x0006 C-string:'WE7B2'
//           WE7BA  codep:0x73ea wordp:0xe7ba size:0x0006 C-string:'WE7BA'
//           WE7C2  codep:0x73ea wordp:0xe7c2 size:0x0006 C-string:'WE7C2'
//           WE7CA  codep:0x73ea wordp:0xe7ca size:0x0006 C-string:'WE7CA'
//           WE7D2  codep:0x73ea wordp:0xe7d2 size:0x0006 C-string:'WE7D2'
//           WE7DA  codep:0x73ea wordp:0xe7da size:0x0006 C-string:'WE7DA'
//           WE7E2  codep:0x73ea wordp:0xe7e2 size:0x0006 C-string:'WE7E2'
//           WE7EA  codep:0x73ea wordp:0xe7ea size:0x0006 C-string:'WE7EA'
//           WE7F2  codep:0x73ea wordp:0xe7f2 size:0x0006 C-string:'WE7F2'
//           WE7FA  codep:0x73ea wordp:0xe7fa size:0x0006 C-string:'WE7FA'
//           WE802  codep:0x73ea wordp:0xe802 size:0x0006 C-string:'WE802'
//           WE80A  codep:0x73ea wordp:0xe80a size:0x0006 C-string:'WE80A'
//           WE812  codep:0x73ea wordp:0xe812 size:0x0006 C-string:'WE812'
//           WE81A  codep:0x73ea wordp:0xe81a size:0x0006 C-string:'WE81A'
//           WE822  codep:0x73ea wordp:0xe822 size:0x0006 C-string:'WE822'
//           WE82A  codep:0x73ea wordp:0xe82a size:0x0006 C-string:'WE82A'
//           WE832  codep:0x73ea wordp:0xe832 size:0x0006 C-string:'WE832'
//           WE83A  codep:0x73ea wordp:0xe83a size:0x0006 C-string:'WE83A'
//           WE842  codep:0x73ea wordp:0xe842 size:0x0006 C-string:'WE842'
//           WE84A  codep:0x73ea wordp:0xe84a size:0x0006 C-string:'WE84A'
//           WE852  codep:0x73ea wordp:0xe852 size:0x0006 C-string:'WE852'
//           WE85A  codep:0x73ea wordp:0xe85a size:0x0006 C-string:'WE85A'
//           WE862  codep:0x73ea wordp:0xe862 size:0x0006 C-string:'WE862'
//           WE86A  codep:0x73ea wordp:0xe86a size:0x0006 C-string:'WE86A'
//           WE872  codep:0x73ea wordp:0xe872 size:0x0006 C-string:'WE872'
//           WE87A  codep:0x744d wordp:0xe87a size:0x0003 C-string:'WE87A'
//           WE87F  codep:0x73ea wordp:0xe87f size:0x0006 C-string:'WE87F'
//           WE887  codep:0x73ea wordp:0xe887 size:0x0006 C-string:'WE887'
//           WE88F  codep:0x73ea wordp:0xe88f size:0x0006 C-string:'WE88F'
//           WE897  codep:0x73ea wordp:0xe897 size:0x0006 C-string:'WE897'
//           WE89F  codep:0x73ea wordp:0xe89f size:0x0006 C-string:'WE89F'
//           WE8A7  codep:0x73ea wordp:0xe8a7 size:0x0006 C-string:'WE8A7'
//           WE8AF  codep:0x224c wordp:0xe8af size:0x0012 C-string:'WE8AF'
//           WE8C3  codep:0x224c wordp:0xe8c3 size:0x0006 C-string:'WE8C3'
//           WE8CB  codep:0x224c wordp:0xe8cb size:0x000a C-string:'WE8CB'
//           WE8D7  codep:0x224c wordp:0xe8d7 size:0x0008 C-string:'WE8D7'
//           WE8E1  codep:0x224c wordp:0xe8e1 size:0x000a C-string:'WE8E1'
//           WE8ED  codep:0x224c wordp:0xe8ed size:0x0014 C-string:'WE8ED'
//           WE903  codep:0x224c wordp:0xe903 size:0x0015 C-string:'WE903'
//           WE91A  codep:0x224c wordp:0xe91a size:0x000c C-string:'WE91A'
//           WE928  codep:0x224c wordp:0xe928 size:0x0096 C-string:'WE928'
//           WE9C0  codep:0x224c wordp:0xe9c0 size:0x0026 C-string:'WE9C0'
//           WE9E8  codep:0x224c wordp:0xe9e8 size:0x000c C-string:'WE9E8'
//           WE9F6  codep:0x224c wordp:0xe9f6 size:0x0012 C-string:'WE9F6'
//           WEA0A  codep:0x224c wordp:0xea0a size:0x0036 C-string:'WEA0A'
//        A.DENSIT  codep:0xe90b wordp:0xea4d size:0x000e C-string:'A_dot_DENSIT'
//        PLANET.G  codep:0xe90b wordp:0xea68 size:0x000e C-string:'PLANET_dot_G'
//           WEA78  codep:0x224c wordp:0xea78 size:0x0026 C-string:'WEA78'
//           WEAA0  codep:0x224c wordp:0xeaa0 size:0x001c C-string:'WEAA0'
//           WEABE  codep:0x224c wordp:0xeabe size:0x002c C-string:'WEABE'
//           WEAEC  codep:0x224c wordp:0xeaec size:0x0008 C-string:'WEAEC'
//            NICE  codep:0xe940 wordp:0xeafd size:0x00a6 C-string:'NICE'
//           WEBA5  codep:0x224c wordp:0xeba5 size:0x0006 C-string:'WEBA5'
//           WEBAD  codep:0x224c wordp:0xebad size:0x000e C-string:'WEBAD'
//           WEBBD  codep:0x224c wordp:0xebbd size:0x0014 C-string:'WEBBD'
//           WEBD3  codep:0x224c wordp:0xebd3 size:0x0044 C-string:'WEBD3'
//           WEC19  codep:0x224c wordp:0xec19 size:0x0022 C-string:'WEC19'
//           WEC3D  codep:0x224c wordp:0xec3d size:0x0010 C-string:'WEC3D'
//           WEC4F  codep:0x224c wordp:0xec4f size:0x001a C-string:'WEC4F'
//           WEC6B  codep:0x224c wordp:0xec6b size:0x0036 C-string:'WEC6B'
//           WECA3  codep:0x224c wordp:0xeca3 size:0x0006 C-string:'WECA3'
//           WECAB  codep:0x224c wordp:0xecab size:0x000e C-string:'WECAB'
//           WECBB  codep:0x224c wordp:0xecbb size:0x000e C-string:'WECBB'
//           WECCB  codep:0x224c wordp:0xeccb size:0x0046 C-string:'WECCB'
//           WED13  codep:0x224c wordp:0xed13 size:0x0012 C-string:'WED13'
//           WED27  codep:0x224c wordp:0xed27 size:0x0034 C-string:'WED27'
//           WED5D  codep:0x1d29 wordp:0xed5d size:0x0002 C-string:'WED5D'
//           WED61  codep:0x1d29 wordp:0xed61 size:0x0002 C-string:'WED61'
//           WED65  codep:0x1d29 wordp:0xed65 size:0x0002 C-string:'WED65'
//           WED69  codep:0x224c wordp:0xed69 size:0x000a C-string:'WED69'
//           WED75  codep:0x224c wordp:0xed75 size:0x0022 C-string:'WED75'
//           WED99  codep:0x224c wordp:0xed99 size:0x0014 C-string:'WED99'
//           WEDAF  codep:0x224c wordp:0xedaf size:0x001e C-string:'WEDAF'
//           WEDCF  codep:0x224c wordp:0xedcf size:0x0016 C-string:'WEDCF'
//           WEDE7  codep:0x224c wordp:0xede7 size:0x0046 C-string:'WEDE7'
//           WEE2F  codep:0x224c wordp:0xee2f size:0x0012 C-string:'WEE2F'
//           WEE43  codep:0x224c wordp:0xee43 size:0x0058 C-string:'WEE43'
//           WEE9D  codep:0x224c wordp:0xee9d size:0x000e C-string:'WEE9D'
//           WEEAD  codep:0x224c wordp:0xeead size:0x0012 C-string:'WEEAD'
//           WEEC1  codep:0x224c wordp:0xeec1 size:0x000e C-string:'WEEC1'
//           WEED1  codep:0x224c wordp:0xeed1 size:0x0014 C-string:'WEED1'
//           WEEE7  codep:0x224c wordp:0xeee7 size:0x003c C-string:'WEEE7'
//           WEF25  codep:0x224c wordp:0xef25 size:0x0010 C-string:'WEF25'
//           WEF37  codep:0x1d29 wordp:0xef37 size:0x0002 C-string:'WEF37'
//           WEF3B  codep:0x224c wordp:0xef3b size:0x000a C-string:'WEF3B'
//           WEF47  codep:0x224c wordp:0xef47 size:0x000a C-string:'WEF47'
//           WEF53  codep:0x1d29 wordp:0xef53 size:0x0002 C-string:'WEF53'
//           WEF57  codep:0x224c wordp:0xef57 size:0x003c C-string:'WEF57'
//           WEF95  codep:0x224c wordp:0xef95 size:0x0012 C-string:'WEF95'
//           WEFA9  codep:0x224c wordp:0xefa9 size:0x001a C-string:'WEFA9'
//           WEFC5  codep:0x224c wordp:0xefc5 size:0x001a C-string:'WEFC5'
//           WEFE1  codep:0x224c wordp:0xefe1 size:0x0012 C-string:'WEFE1'
//           WEFF5  codep:0x224c wordp:0xeff5 size:0x004a C-string:'WEFF5'
//           WF041  codep:0x224c wordp:0xf041 size:0x0012 C-string:'WF041'
//           WF055  codep:0x224c wordp:0xf055 size:0x0010 C-string:'WF055'
//           WF067  codep:0x224c wordp:0xf067 size:0x0018 C-string:'WF067'
//           WF081  codep:0x224c wordp:0xf081 size:0x0010 C-string:'WF081'
//           WF093  codep:0x224c wordp:0xf093 size:0x000a C-string:'WF093'
//           WF09F  codep:0x224c wordp:0xf09f size:0x0026 C-string:'WF09F'
//           WF0C7  codep:0x224c wordp:0xf0c7 size:0x0020 C-string:'WF0C7'
//           WF0E9  codep:0x224c wordp:0xf0e9 size:0x0014 C-string:'WF0E9'
//           WF0FF  codep:0x224c wordp:0xf0ff size:0x0006 C-string:'WF0FF'
//           WF107  codep:0x224c wordp:0xf107 size:0x0010 C-string:'WF107'
//           WF119  codep:0x224c wordp:0xf119 size:0x003a C-string:'WF119'
//           WF155  codep:0x224c wordp:0xf155 size:0x0022 C-string:'WF155'
//           WF179  codep:0x224c wordp:0xf179 size:0x000e C-string:'WF179'
//           WF189  codep:0x224c wordp:0xf189 size:0x000e C-string:'WF189'
//           WF199  codep:0x224c wordp:0xf199 size:0x001a C-string:'WF199'
//           WF1B5  codep:0x224c wordp:0xf1b5 size:0x001c C-string:'WF1B5'
//           WF1D3  codep:0x224c wordp:0xf1d3 size:0x0067 C-string:'WF1D3'
//           WF23C  codep:0x224c wordp:0xf23c size:0x0048 C-string:'WF23C'
//           WF286  codep:0x224c wordp:0xf286 size:0x0052 C-string:'WF286'
//           WF2DA  codep:0x224c wordp:0xf2da size:0x0044 C-string:'WF2DA'
//           WF320  codep:0x224c wordp:0xf320 size:0x0012 C-string:'WF320'
//           WF334  codep:0x224c wordp:0xf334 size:0x004c C-string:'WF334'
//           WF382  codep:0x224c wordp:0xf382 size:0x0066 C-string:'WF382'
//           WF3EA  codep:0x224c wordp:0xf3ea size:0x0020 C-string:'WF3EA'
//           WF40C  codep:0x224c wordp:0xf40c size:0x0024 C-string:'WF40C'
//           WF432  codep:0x224c wordp:0xf432 size:0x0014 C-string:'WF432'
//           WF448  codep:0x224c wordp:0xf448 size:0x004c C-string:'WF448'
//             DIO  codep:0x224c wordp:0xf49c size:0x0000 C-string:'DIO'

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
const unsigned short int pp_WED5D = 0xed5d; // WED5D size: 2
// {0x3a, 0x20}

const unsigned short int pp_WED61 = 0xed61; // WED61 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WED65 = 0xed65; // WED65 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEF37 = 0xef37; // WEF37 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEF53 = 0xef53; // WEF53 size: 2
// {0x00, 0x00}


const unsigned short int cc_WE796 = 0xe796; // WE796
const unsigned short int cc_WE79A = 0xe79a; // WE79A
const unsigned short int cc_WE79E = 0xe79e; // WE79E


// 0xe792: db 0xda 0x00 '  '

// ================================================
// 0xe794: WORD 'WE796' codep=0x2214 wordp=0xe796
// ================================================
// orphan
// 0xe796: dw 0x0020

// ================================================
// 0xe798: WORD 'WE79A' codep=0x2214 wordp=0xe79a
// ================================================
// 0xe79a: dw 0x0043

// ================================================
// 0xe79c: WORD 'WE79E' codep=0x2214 wordp=0xe79e
// ================================================
// 0xe79e: dw 0x0044

// ================================================
// 0xe7a0: WORD 'WE7A2' codep=0x73ea wordp=0xe7a2
// ================================================
// orphan
LoadDataType WE7A2 = {PLANETIDX, 0x0c, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7a8: WORD 'WE7AA' codep=0x73ea wordp=0xe7aa
// ================================================
// orphan
LoadDataType WE7AA = {PLANETIDX, 0x0d, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7b0: WORD 'WE7B2' codep=0x73ea wordp=0xe7b2
// ================================================
// orphan
LoadDataType WE7B2 = {PLANETIDX, 0x0e, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7b8: WORD 'WE7BA' codep=0x73ea wordp=0xe7ba
// ================================================
// orphan
LoadDataType WE7BA = {PLANETIDX, 0x09, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7c0: WORD 'WE7C2' codep=0x73ea wordp=0xe7c2
// ================================================
LoadDataType WE7C2 = {BOXIDX, 0x11, 0x02, 0x10, 0x6440};

// ================================================
// 0xe7c8: WORD 'WE7CA' codep=0x73ea wordp=0xe7ca
// ================================================
// orphan
LoadDataType WE7CA = {PLANETIDX, 0x00, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7d0: WORD 'WE7D2' codep=0x73ea wordp=0xe7d2
// ================================================
LoadDataType WE7D2 = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xe7d8: WORD 'WE7DA' codep=0x73ea wordp=0xe7da
// ================================================
LoadDataType WE7DA = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7e0: WORD 'WE7E2' codep=0x73ea wordp=0xe7e2
// ================================================
LoadDataType WE7E2 = {PLANETIDX, 0x05, 0x02, 0x16, 0x658f};

// ================================================
// 0xe7e8: WORD 'WE7EA' codep=0x73ea wordp=0xe7ea
// ================================================
LoadDataType WE7EA = {PLANETIDX, 0x0f, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7f0: WORD 'WE7F2' codep=0x73ea wordp=0xe7f2
// ================================================
LoadDataType WE7F2 = {PLANETIDX, 0x10, 0x01, 0x16, 0x658f};

// ================================================
// 0xe7f8: WORD 'WE7FA' codep=0x73ea wordp=0xe7fa
// ================================================
// orphan
LoadDataType WE7FA = {PLANETIDX, 0x11, 0x02, 0x16, 0x658f};

// ================================================
// 0xe800: WORD 'WE802' codep=0x73ea wordp=0xe802
// ================================================
LoadDataType WE802 = {PLANETIDX, 0x13, 0x01, 0x16, 0x658f};

// ================================================
// 0xe808: WORD 'WE80A' codep=0x73ea wordp=0xe80a
// ================================================
// orphan
LoadDataType WE80A = {PLANETIDX, 0x14, 0x01, 0x16, 0x658f};

// ================================================
// 0xe810: WORD 'WE812' codep=0x73ea wordp=0xe812
// ================================================
// orphan
LoadDataType WE812 = {PLANETIDX, 0x15, 0x01, 0x16, 0x658f};

// ================================================
// 0xe818: WORD 'WE81A' codep=0x73ea wordp=0xe81a
// ================================================
LoadDataType WE81A = {REGIONSIDX, 0x02, 0x02, 0x1c, 0x69cd};

// ================================================
// 0xe820: WORD 'WE822' codep=0x73ea wordp=0xe822
// ================================================
LoadDataType WE822 = {REGIONSIDX, 0x07, 0x08, 0x1c, 0x69cd};

// ================================================
// 0xe828: WORD 'WE82A' codep=0x73ea wordp=0xe82a
// ================================================
LoadDataType WE82A = {REGIONSIDX, 0x0f, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe830: WORD 'WE832' codep=0x73ea wordp=0xe832
// ================================================
LoadDataType WE832 = {REGIONSIDX, 0x0f, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe838: WORD 'WE83A' codep=0x73ea wordp=0xe83a
// ================================================
LoadDataType WE83A = {REGIONSIDX, 0x10, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe840: WORD 'WE842' codep=0x73ea wordp=0xe842
// ================================================
LoadDataType WE842 = {REGIONSIDX, 0x10, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe848: WORD 'WE84A' codep=0x73ea wordp=0xe84a
// ================================================
LoadDataType WE84A = {REGIONSIDX, 0x11, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe850: WORD 'WE852' codep=0x73ea wordp=0xe852
// ================================================
LoadDataType WE852 = {REGIONSIDX, 0x11, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe858: WORD 'WE85A' codep=0x73ea wordp=0xe85a
// ================================================
LoadDataType WE85A = {REGIONSIDX, 0x12, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe860: WORD 'WE862' codep=0x73ea wordp=0xe862
// ================================================
LoadDataType WE862 = {REGIONSIDX, 0x12, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe868: WORD 'WE86A' codep=0x73ea wordp=0xe86a
// ================================================
LoadDataType WE86A = {REGIONSIDX, 0x13, 0x08, 0x1c, 0x69cd};

// ================================================
// 0xe870: WORD 'WE872' codep=0x73ea wordp=0xe872
// ================================================
LoadDataType WE872 = {REGIONSIDX, 0x1b, 0x01, 0x1c, 0x69cd};

// ================================================
// 0xe878: WORD 'WE87A' codep=0x744d wordp=0xe87a
// ================================================
IFieldType WE87A = {REGIONSIDX, 0x0b, 0x02};

// ================================================
// 0xe87d: WORD 'WE87F' codep=0x73ea wordp=0xe87f
// ================================================
LoadDataType WE87F = {CREATUREIDX, 0x00, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe885: WORD 'WE887' codep=0x73ea wordp=0xe887
// ================================================
LoadDataType WE887 = {CREATUREIDX, 0x02, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe88d: WORD 'WE88F' codep=0x73ea wordp=0xe88f
// ================================================
LoadDataType WE88F = {CREATUREIDX, 0x2c, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe895: WORD 'WE897' codep=0x73ea wordp=0xe897
// ================================================
LoadDataType WE897 = {CREATUREIDX, 0x2e, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe89d: WORD 'WE89F' codep=0x73ea wordp=0xe89f
// ================================================
LoadDataType WE89F = {CREATUREIDX, 0x0a, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe8a5: WORD 'WE8A7' codep=0x73ea wordp=0xe8a7
// ================================================
LoadDataType WE8A7 = {CREATUREIDX, 0x0c, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe8ad: WORD 'WE8AF' codep=0x224c wordp=0xe8af params=0 returns=0
// ================================================

void WE8AF() // WE8AF
{
  Push(Read16(cc_WE79E)); // WE79E
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xe8c1: WORD 'WE8C3' codep=0x224c wordp=0xe8c3
// ================================================

void WE8C3() // WE8C3
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xe8c9: WORD 'WE8CB' codep=0x224c wordp=0xe8cb params=0 returns=1
// ================================================
// orphan

void WE8CB() // WE8CB
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xe8d5: WORD 'WE8D7' codep=0x224c wordp=0xe8d7 params=0 returns=1
// ================================================

void WE8D7() // WE8D7
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe8df: WORD 'WE8E1' codep=0x224c wordp=0xe8e1 params=0 returns=1
// ================================================

void WE8E1() // WE8E1
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe8eb: WORD 'WE8ED' codep=0x224c wordp=0xe8ed params=3 returns=1
// ================================================
// orphan

void WE8ED() // WE8ED
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
// 0xe901: WORD 'WE903' codep=0x224c wordp=0xe903
// ================================================
// orphan

void WE903() // WE903
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
// 0xe918: WORD 'WE91A' codep=0x224c wordp=0xe91a params=1 returns=2
// ================================================
// orphan

void WE91A() // WE91A
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 2); //  @ 2+
  RANGE(); // RANGE
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xe926: WORD 'WE928' codep=0x224c wordp=0xe928
// ================================================
// orphan

void WE928() // WE928
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
  WE91A(); // WE91A

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
// 0xe9be: WORD 'WE9C0' codep=0x224c wordp=0xe9c0 params=2 returns=2
// ================================================

void WE9C0() // WE9C0
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
// 0xe9e6: WORD 'WE9E8' codep=0x224c wordp=0xe9e8 params=2 returns=2
// ================================================

void WE9E8() // WE9E8
{
  WE9C0(); // WE9C0
  Push(Pop() + 1); //  1+
  _1_dot_5_at_(); // 1.5@
  ROT(); // ROT
  Pop(); // DROP
}


// ================================================
// 0xe9f4: WORD 'WE9F6' codep=0x224c wordp=0xe9f6 params=1 returns=1
// ================================================

void WE9F6() // WE9F6
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
// 0xea08: WORD 'WEA0A' codep=0x224c wordp=0xea0a
// ================================================

void WEA0A() // WEA0A
{
  unsigned short int i, imax;
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  Push(0xe7f2); // 'WE7F2'
  IFLD_at_(); // IFLD@
  Push(Pop() + 1); //  1+
  Push(0xe7ea); // 'WE7EA'
  IFLD_at_(); // IFLD@
  IOPEN(); // IOPEN

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_WE79A)); // WE79A
    Push(i); // I
    Push(1);
    _star_CREATE(); // *CREATE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xea40: WORD 'A.DENSIT' codep=0xe90b wordp=0xea4d
// ================================================
// 0xea4d: db 0x00 0x00 0x9c 0xff 0xe2 0xff 0xf1 0xff 0x00 0x00 0x00 0x00 0xe2 0xff '              '

// ================================================
// 0xea5b: WORD 'PLANET.G' codep=0xe90b wordp=0xea68
// ================================================
// 0xea68: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xf6 0xff 0xe2 0xff 0xb0 0xff '              '

// ================================================
// 0xea76: WORD 'WEA78' codep=0x224c wordp=0xea78
// ================================================

void WEA78() // WEA78
{
  Push(0);
  Push(0x63ef+WE87A.offset); // WE87A<IFIELD>
  Store_3(); // !_3
  LoadData(WE82A); // from 'REGIONS'
  Push(4);
  Push(0);
  FILL_1(); // FILL_1
  LoadData(WE822); // from 'REGIONS'
  Push(8);
  Push(0);
  FILL_1(); // FILL_1
  LoadData(WE86A); // from 'REGIONS'
  Push(8);
  Push(0);
  FILL_1(); // FILL_1
  Push(0);
  LoadData(WE872); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xea9e: WORD 'WEAA0' codep=0x224c wordp=0xeaa0
// ================================================

void WEAA0() // WEAA0
{
  unsigned short int i, imax;
  Push(Read16(cc_WE79A)); // WE79A
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
    WEA78(); // WEA78
    i++;
  } while(i<imax); // (LOOP)

  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xeabc: WORD 'WEABE' codep=0x224c wordp=0xeabe
// ================================================
// orphan

void WEABE() // WEABE
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(WE802); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  A_dot_DENSIT(); // A.DENSIT
  LoadData(WE7FA); // from 'PLANET'
  Push(Read16(Pop())); //  @
  LoadData(WE7D2); // from 'PLANET'
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
// 0xeaea: WORD 'WEAEC' codep=0x224c wordp=0xeaec params=1 returns=1
// ================================================

void WEAEC() // WEAEC
{
  Push(Pop() & 0x000e); //  0x000e AND
}


// ================================================
// 0xeaf4: WORD 'NICE' codep=0xe940 wordp=0xeafd
// ================================================
// 0xeafd: db 0x60 0x00 0x00 0x00 0x01 0x00 0x5f 0xeb 0x00 0x00 0x02 0x00 0x63 0xeb 0x00 0x00 0x04 0x00 0x67 0xeb 0x00 0x00 0x06 0x00 0x6b 0xeb 0x00 0x00 0x08 0x00 0x77 0xeb 0x00 0x00 0x0a 0x00 0x7b 0xeb 0x00 0x00 0x0c 0x00 0x7f 0xeb 0x00 0x00 0x0e 0x00 0x8b 0xeb 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x64 0x00 0x00 0x00 0x64 0x02 0x00 0x00 0x64 0x04 0x00 0x00 0x2d 0x04 0x00 0x00 0x5a 0x02 0x00 0x00 0x64 0x06 0x00 0x00 0x64 0x00 0x00 0x00 0x64 0x00 0x00 0x00 0x32 0x04 0x00 0x00 0x46 0x0c 0x00 0x00 0x64 0x08 0x00 0x00 0x19 0x02 0x00 0x00 0x1d 0x06 0x00 0x00 0x24 0x0a 0x00 0x00 0x3a 0x04 0x00 0x00 0x49 0x0c 0x00 0x00 0x64 0x08 0x00 0x00 '`     _     c     g     k     w     {                                                            d   d   d   -   Z   d   d   d   2   F   d           $   :   I   d   '

// ================================================
// 0xeba3: WORD 'WEBA5' codep=0x224c wordp=0xeba5
// ================================================

void WEBA5() // WEBA5
{
  NICE(); // NICE
  WE9E8(); // WE9E8
}


// ================================================
// 0xebab: WORD 'WEBAD' codep=0x224c wordp=0xebad
// ================================================
// orphan

void WEBAD() // WEBAD
{
  ROT(); // ROT
  LoadData(WE81A); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  MAX(); // MAX
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xebbb: WORD 'WEBBD' codep=0x224c wordp=0xebbd
// ================================================
// orphan

void WEBBD() // WEBBD
{
  Push(0);
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  Push(0xe8c3); // 'WE8C3'
  Push(0xebad); // 'WEBAD'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xebd1: WORD 'WEBD3' codep=0x224c wordp=0xebd3
// ================================================

void WEBD3() // WEBD3
{
  LoadData(WE81A); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    LoadData(WE81A); // from 'REGIONS'
    Push(Read16(Pop())&0xFF); //  C@
    Push(pp__ro_PLANET_rc_); // (PLANET)
    _1_dot_5_at_(); // 1.5@
    _gt_C_plus_S(); // >C+S
    LoadData(WE7DA); // from 'PLANET'
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
  Push(0x63ef+WE87A.offset); // WE87A<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xec17: WORD 'WEC19' codep=0x224c wordp=0xec19
// ================================================

void WEC19() // WEC19
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(WE7E2); // from 'PLANET'
  Push(Read16(Pop())); //  @
  ICLOSE(); // ICLOSE
  Push(pp_SEED); // SEED
  Store_3(); // !_3
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  Push(0xe8c3); // 'WE8C3'
  Push(0xebd3); // 'WEBD3'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xec3b: WORD 'WEC3D' codep=0x224c wordp=0xec3d
// ================================================

void WEC3D() // WEC3D
{
  Push(Read16(0x63ef+WE87A.offset)); // WE87A<IFIELD> @
  Push(0x000f);
  _st_(); // <
  LoadData(WE82A); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xec4d: WORD 'WEC4F' codep=0x224c wordp=0xec4f
// ================================================

void WEC4F() // WEC4F
{
  Push(Read16(0x63ef+WE87A.offset) * 2); // WE87A<IFIELD> @ 2 *
  WE8E1(); // WE8E1
  _gt_(); // >
  Push(Read16(regsp)); // DUP
  LoadData(WE83A); // from 'REGIONS'
  C_ex_(); // C!
  Push(Read16(regsp)); // DUP
  LoadData(WE82A); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xec69: WORD 'WEC6B' codep=0x224c wordp=0xec6b params=1 returns=0
// ================================================

void WEC6B() // WEC6B
{
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  WE8D7(); // WE8D7
  Push(0x0064 - Read16(0x63ef+WE87A.offset) * 2); // 0x0064 WE87A<IFIELD> @ 2 * -
  Push(0);
  MAX(); // MAX
  Push(2);
  _slash_(); // /
  WE8E1(); // WE8E1
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop()==0?1:0); //  0=
  }
  Push(Read16(regsp)); // DUP
  LoadData(WE83A); // from 'REGIONS'
  C_ex_(); // C!
  Push(Pop()==0?1:0); //  0=
  LoadData(WE82A); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xeca1: WORD 'WECA3' codep=0x224c wordp=0xeca3
// ================================================

void WECA3() // WECA3
{
  WEC4F(); // WEC4F
  WEC6B(); // WEC6B
}


// ================================================
// 0xeca9: WORD 'WECAB' codep=0x224c wordp=0xecab
// ================================================

void WECAB() // WECAB
{
  Push(Read16(0x63ef+WE87A.offset)); // WE87A<IFIELD> @
  WE8E1(); // WE8E1
  _gt_(); // >
  LoadData(WE84A); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xecb9: WORD 'WECBB' codep=0x224c wordp=0xecbb
// ================================================

void WECBB() // WECBB
{
  Push(Read16(0x63ef+WE87A.offset)); // WE87A<IFIELD> @
  WE8E1(); // WE8E1
  _gt_(); // >
  LoadData(WE85A); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xecc9: WORD 'WECCB' codep=0x224c wordp=0xeccb
// ================================================

void WECCB() // WECCB
{
  WEC3D(); // WEC3D
  LoadData(WE82A); // from 'REGIONS'
  Push(!(Read16(Pop())&0xFF)); //  C@ NOT
  if (Pop() != 0)
  {
    Push(Read16(0x63ef+WE87A.offset)); // WE87A<IFIELD> @
    Push(Read16(regsp)); // DUP
    Push(0x000e);
    _gt_(); // >
    SWAP(); // SWAP
    Push(0x0032);
    _st_(); // <
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      WECA3(); // WECA3
    } else
    {
      Push(1);
      LoadData(WE82A); // from 'REGIONS'
      C_ex_(); // C!
      Push(1);
      LoadData(WE83A); // from 'REGIONS'
      C_ex_(); // C!
    }
  }
  WECAB(); // WECAB
  LoadData(WE84A); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() == 0) return;
  WECBB(); // WECBB
}


// ================================================
// 0xed11: WORD 'WED13' codep=0x224c wordp=0xed13
// ================================================

void WED13() // WED13
{
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  Push(0xe8c3); // 'WE8C3'
  Push(0xeccb); // 'WECCB'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xed25: WORD 'WED27' codep=0x224c wordp=0xed27
// ================================================

void WED27() // WED27
{
  Push(0);
  LoadData(WE82A); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(Pop() | 1); //  1 OR
  }
  LoadData(WE83A); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(Pop() | 2); //  2 OR
  }
  LoadData(WE84A); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(Pop() | 4); //  4 OR
  }
  LoadData(WE85A); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() == 0) return;
  Push(Pop() | 8); //  8 OR
}


// ================================================
// 0xed5b: WORD 'WED5D' codep=0x1d29 wordp=0xed5d
// ================================================
// 0xed5d: db 0x3a 0x20 ': '

// ================================================
// 0xed5f: WORD 'WED61' codep=0x1d29 wordp=0xed61
// ================================================
// 0xed61: db 0x3a 0x20 ': '

// ================================================
// 0xed63: WORD 'WED65' codep=0x1d29 wordp=0xed65
// ================================================
// 0xed65: db 0x3a 0x20 ': '

// ================================================
// 0xed67: WORD 'WED69' codep=0x224c wordp=0xed69 params=1 returns=2
// ================================================

void WED69() // WED69
{
  Push(Pop() >> 1); //  2/
  Push(Read16(regsp)); // DUP
  Push(Pop() & 1); //  1 AND
}


// ================================================
// 0xed73: WORD 'WED75' codep=0x224c wordp=0xed75 params=1 returns=0
// ================================================

void WED75() // WED75
{
  WED69(); // WED69
  Push(Pop() * 2); //  2 *
  Push(pp_WED5D); // WED5D
  Store_3(); // !_3
  WED69(); // WED69
  Push(Pop() * 2); //  2 *
  Push(pp_WED61); // WED61
  Store_3(); // !_3
  WED69(); // WED69
  Push(Pop() * 2); //  2 *
  Push(pp_WED65); // WED65
  Store_3(); // !_3
  Pop(); // DROP
}


// ================================================
// 0xed97: WORD 'WED99' codep=0x224c wordp=0xed99 params=0 returns=1
// ================================================

void WED99() // WED99
{
  Push(!(Read16(pp_WED5D) | (Read16(pp_WED61) | Read16(pp_WED65)))); // WED5D @ WED61 @ WED65 @ OR OR NOT
}


// ================================================
// 0xedad: WORD 'WEDAF' codep=0x224c wordp=0xedaf params=2 returns=0
// ================================================

void WEDAF() // WEDAF
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
// 0xedcd: WORD 'WEDCF' codep=0x224c wordp=0xedcf params=1 returns=0
// ================================================

void WEDCF() // WEDCF
{
  WED69(); // WED69
  Push(pp_WED5D); // WED5D
  WEDAF(); // WEDAF
  WED69(); // WED69
  Push(pp_WED61); // WED61
  WEDAF(); // WEDAF
  WED69(); // WED69
  Push(pp_WED65); // WED65
  WEDAF(); // WEDAF
  Pop(); // DROP
}


// ================================================
// 0xede5: WORD 'WEDE7' codep=0x224c wordp=0xede7 params=1 returns=1
// ================================================

void WEDE7() // WEDE7
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    LoadData(WE822); // from 'REGIONS'
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
// 0xee2d: WORD 'WEE2F' codep=0x224c wordp=0xee2f params=1 returns=0
// ================================================

void WEE2F() // WEE2F
{
  WEAEC(); // WEAEC
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(1);
  SWAP(); // SWAP
  WE9F6(); // WE9F6
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xee41: WORD 'WEE43' codep=0x224c wordp=0xee43 params=1 returns=0
// ================================================

void WEE43() // WEE43
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  Push(Pop() & 1); //  1 AND
  a = Pop(); // >R
  WEAEC(); // WEAEC
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    WED75(); // WED75
    do
    {
      WE8E1(); // WE8E1
      OVER(); // OVER
      Push(0);
      WEBA5(); // WEBA5
      Pop(); // DROP
      Push(Read16(regsp)); // DUP
      Push(Pop()==0?1:0); //  0=
      ABORT("SOURCE NICHE ERROR ", 19);// (ABORT")
      Push(Read16(a)); // R@
      Push(Pop() | Pop()); // OR
      Push(Read16(regsp)); // DUP
      WEDE7(); // WEDE7
      if (Pop() != 0)
      {
        Push(Read16(regsp)); // DUP
        WEE2F(); // WEE2F
      }
      WEDCF(); // WEDCF
      WED99(); // WED99
    } while(Pop() == 0);
    Pop(); // DROP
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xee9b: WORD 'WEE9D' codep=0x224c wordp=0xee9d
// ================================================

void WEE9D() // WEE9D
{
  LoadData(WE81A); // from 'REGIONS'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() == 0) return;
  WED27(); // WED27
  WEE43(); // WEE43
}


// ================================================
// 0xeeab: WORD 'WEEAD' codep=0x224c wordp=0xeead
// ================================================

void WEEAD() // WEEAD
{
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  Push(0xe8c3); // 'WE8C3'
  Push(0xee9d); // 'WEE9D'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeebf: WORD 'WEEC1' codep=0x224c wordp=0xeec1 params=3 returns=3
// ================================================

void WEEC1() // WEEC1
{
  ROT(); // ROT
  Push(Read16(0x63ef+WE87A.offset)); // WE87A<IFIELD> @
  MAX(); // MAX
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xeecf: WORD 'WEED1' codep=0x224c wordp=0xeed1
// ================================================

void WEED1() // WEED1
{
  Push(0);
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  Push(0xe8c3); // 'WE8C3'
  Push(0xeec1); // 'WEEC1'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeee5: WORD 'WEEE7' codep=0x224c wordp=0xeee7 params=2 returns=0
// ================================================

void WEEE7() // WEEE7
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
// 0xef23: WORD 'WEF25' codep=0x224c wordp=0xef25
// ================================================

void WEF25() // WEF25
{
  WEED1(); // WEED1
  Push(pp_PLANTS); // PLANTS
  OVER(); // OVER
  WEEE7(); // WEEE7
  Push(pp_ANIMALS); // ANIMALS
  SWAP(); // SWAP
  WEEE7(); // WEEE7
}


// ================================================
// 0xef35: WORD 'WEF37' codep=0x1d29 wordp=0xef37
// ================================================
// 0xef37: db 0x3a 0x20 ': '

// ================================================
// 0xef39: WORD 'WEF3B' codep=0x224c wordp=0xef3b
// ================================================

void WEF3B() // WEF3B
{
  LoadData(WE822); // from 'REGIONS'
  Push(Pop() + Read16(pp_WEF37)); //  WEF37 @ +
}


// ================================================
// 0xef45: WORD 'WEF47' codep=0x224c wordp=0xef47
// ================================================

void WEF47() // WEF47
{
  LoadData(WE86A); // from 'REGIONS'
  Push(Pop() + Read16(pp_WEF37)); //  WEF37 @ +
}


// ================================================
// 0xef51: WORD 'WEF53' codep=0x1d29 wordp=0xef53
// ================================================
// 0xef53: db 0x00 0x00 '  '

// ================================================
// 0xef55: WORD 'WEF57' codep=0x224c wordp=0xef57
// ================================================

void WEF57() // WEF57
{
  unsigned short int i, imax;
  Push(8);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_WEF37); // WEF37
    Store_3(); // !_3
    WEF3B(); // WEF3B
    Push(Read16(Pop())&0xFF); //  C@
    WEAEC(); // WEAEC
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+WE87A.offset)); // WE87A<IFIELD> @
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
    WEF47(); // WEF47
    C_ex_(); // C!
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xef93: WORD 'WEF95' codep=0x224c wordp=0xef95
// ================================================

void WEF95() // WEF95
{
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  Push(0xe8c3); // 'WE8C3'
  Push(0xef57); // 'WEF57'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xefa7: WORD 'WEFA9' codep=0x224c wordp=0xefa9
// ================================================

void WEFA9() // WEFA9
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
    Push(pp_WEF37); // WEF37
    Store_3(); // !_3
    WEF47(); // WEF47
    Push(Read16(Pop())&0xFF); //  C@
    Push(Pop() + Pop()); // +
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xefc3: WORD 'WEFC5' codep=0x224c wordp=0xefc5
// ================================================

void WEFC5() // WEFC5
{
  WEFA9(); // WEFA9
  Push(Read16(regsp)); // DUP
  Push(Read16(0x63ef+WE87A.offset)); // WE87A<IFIELD> @
  Push(0x0028);
  MIN(); // MIN
  RRND(); // RRND
  SWAP(); // SWAP
  _slash_(); // /
  LoadData(WE872); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xefdf: WORD 'WEFE1' codep=0x224c wordp=0xefe1
// ================================================

void WEFE1() // WEFE1
{
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  Push(0xe8c3); // 'WE8C3'
  Push(0xefc5); // 'WEFC5'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeff3: WORD 'WEFF5' codep=0x224c wordp=0xeff5
// ================================================

void WEFF5() // WEFF5
{
  unsigned short int i, imax;
  LoadData(WE82A); // from 'REGIONS'
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
    Push(pp_WEF37); // WEF37
    Store_3(); // !_3
    WEF3B(); // WEF3B
    Push(Read16(Pop())&0xFF); //  C@
    WEAEC(); // WEAEC
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      WE9F6(); // WE9F6
      Push(Pop()==pp_PLANTS?1:0); //  PLANTS =
      if (Pop() != 0)
      {
        LoadData(WE832); // from 'REGIONS'
        LoadData(WE852); // from 'REGIONS'
      } else
      {
        LoadData(WE842); // from 'REGIONS'
        LoadData(WE862); // from 'REGIONS'
      }
      WEF47(); // WEF47
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
// 0xf03f: WORD 'WF041' codep=0x224c wordp=0xf041
// ================================================

void WF041() // WF041
{
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  Push(0xe8c3); // 'WE8C3'
  Push(0xeff5); // 'WEFF5'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf053: WORD 'WF055' codep=0x224c wordp=0xf055
// ================================================

void WF055() // WF055
{
  WEC19(); // WEC19
  WED13(); // WED13
  WEEAD(); // WEEAD
  WEF25(); // WEF25
  WEF95(); // WEF95
  WEFE1(); // WEFE1
  WF041(); // WF041
}


// ================================================
// 0xf065: WORD 'WF067' codep=0x224c wordp=0xf067
// ================================================

void WF067() // WF067
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
// 0xf07f: WORD 'WF081' codep=0x224c wordp=0xf081 params=1 returns=0
// ================================================

void WF081() // WF081
{
  Push(Pop() - 1); //  1 -
  if (Pop() == 0) return;
  Push(1);
  Push(pp_WEF53); // WEF53
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf091: WORD 'WF093' codep=0x224c wordp=0xf093 params=0 returns=0
// ================================================

void WF093() // WF093
{
  Push(Read16(pp_WEF53)); // WEF53 @
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
}


// ================================================
// 0xf09d: WORD 'WF09F' codep=0x224c wordp=0xf09f
// ================================================

void WF09F() // WF09F
{
  Push(4);
  PICK(); // PICK
  Push(Pop()==pp_PLANTS?1:0); //  PLANTS =
  if (Pop() != 0)
  {
    Push(0xe832); // 'WE832'
  } else
  {
    Push(0xe842); // 'WE842'
  }
  IFLD_at_(); // IFLD@
  Push(4);
  ROLL(); // ROLL
  Push(Pop() + Pop()); // +
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xf0c5: WORD 'WF0C7' codep=0x224c wordp=0xf0c7
// ================================================

void WF0C7() // WF0C7
{
  Push(0);
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  Push(0xe8c3); // 'WE8C3'
  Push(0xf09f); // 'WF09F'
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
// 0xf0e7: WORD 'WF0E9' codep=0x224c wordp=0xf0e9
// ================================================

void WF0E9() // WF0E9
{
  Push(Read16(regsp)); // DUP
  Push(Pop()==pp_PLANTS?1:0); //  PLANTS =
  if (Pop() != 0)
  {
    LoadData(WE852); // from 'REGIONS'
    return;
  }
  LoadData(WE862); // from 'REGIONS'
}


// ================================================
// 0xf0fd: WORD 'WF0FF' codep=0x224c wordp=0xf0ff
// ================================================

void WF0FF() // WF0FF
{
  WF0E9(); // WF0E9
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xf105: WORD 'WF107' codep=0x224c wordp=0xf107
// ================================================

void WF107() // WF107
{
  WF0E9(); // WF0E9
  Push(-1);
  SWAP(); // SWAP
  _plus__ex__2(); // +!_2
  Push(-1);
  WEF47(); // WEF47
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf117: WORD 'WF119' codep=0x224c wordp=0xf119
// ================================================

void WF119() // WF119
{
  WF0FF(); // WF0FF
  if (Pop() != 0)
  {
    do
    {
      Push(0);
      Push(7);
      RRND(); // RRND
      Push(pp_WEF37); // WEF37
      Store_3(); // !_3
      WEF3B(); // WEF3B
      Push(Read16(Pop())&0xFF); //  C@
      WEAEC(); // WEAEC
      WE9F6(); // WE9F6
      OVER(); // OVER
      Push((Pop()==Pop())?1:0); // =
      WEF47(); // WEF47
      Push(((Read16(Pop())&0xFF)==0?1:0)==0?1:0); //  C@ 0= 0=
      Push(Pop() & Pop()); // AND
    } while(Pop() == 0);
    WF107(); // WF107
    WEF3B(); // WEF3B
    Push(Read16(Pop())&0xFF); //  C@
    WEAEC(); // WEAEC
    return;
  }
  Push(0);
}


// ================================================
// 0xf153: WORD 'WF155' codep=0x224c wordp=0xf155
// ================================================

void WF155() // WF155
{
  do
  {
    Push(pp__ro_PLANET_rc_); // (PLANET)
    _1_dot_5_at_(); // 1.5@
    _gt_C_plus_S(); // >C+S
    LoadData(WE7EA); // from 'PLANET'
    Push(Read16(Pop())&0xFF); //  C@
    LoadData(WE7F2); // from 'PLANET'
    Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
    RRND(); // RRND
    ICLOSE(); // ICLOSE
    Push(pp_RECORD_n_); // RECORD#
    Store_3(); // !_3
    WF119(); // WF119
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
}


// ================================================
// 0xf177: WORD 'WF179' codep=0x224c wordp=0xf179
// ================================================

void WF179() // WF179
{
  Push(0);
  LoadData(WE897); // from 'CREATURE'
  Store_3(); // !_3
  Push(0);
  LoadData(WE88F); // from 'CREATURE'
  Store_3(); // !_3
}


// ================================================
// 0xf187: WORD 'WF189' codep=0x224c wordp=0xf189
// ================================================

void WF189() // WF189
{
  Push(0);
  LoadData(WE87F); // from 'CREATURE'
  Store_3(); // !_3
  Push(0);
  LoadData(WE887); // from 'CREATURE'
  Store_3(); // !_3
}


// ================================================
// 0xf197: WORD 'WF199' codep=0x224c wordp=0xf199
// ================================================

void WF199() // WF199
{
  unsigned short int a;
  Push(4);
  PICK(); // PICK
  WF0E9(); // WF0E9
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
// 0xf1b3: WORD 'WF1B5' codep=0x224c wordp=0xf1b5
// ================================================

void WF1B5() // WF1B5
{
  Push(0);
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  Push(0xe8c3); // 'WE8C3'
  Push(0xf199); // 'WF199'
  EACH(); // EACH
  Pop(); Pop(); // 2DROP
  Push(Read16(cc_WE79A)); // WE79A
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf1d1: WORD 'WF1D3' codep=0x224c wordp=0xf1d3 params=0 returns=0
// ================================================

void WF1D3() // WF1D3
{
  Push(Read16(pp_WEF53)); // WEF53 @
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
// 0xf23a: WORD 'WF23C' codep=0x224c wordp=0xf23c
// ================================================

void WF23C() // WF23C
{
  unsigned short int i, imax;
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  Push(Read16(pp_WEF53)); // WEF53 @
  LoadData(WE88F); // from 'CREATURE'
  Store_3(); // !_3
  LoadData(WE89F); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  SET_dash_CURRENT(); // SET-CURRENT
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(WE872); // from 'REGIONS'
  Push((Read16(Pop())&0xFF) + 1); //  C@ 1+
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WF081(); // WF081
    WF093(); // WF093
    WE8AF(); // WE8AF
    Push(i - 1); // I 1 -
    if (Pop() != 0)
    {
      WF067(); // WF067
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(Read16(pp_WEF53)); // WEF53 @
  WF1D3(); // WF1D3
  LoadData(WE897); // from 'CREATURE'
  Store_3(); // !_3
}


// ================================================
// 0xf284: WORD 'WF286' codep=0x224c wordp=0xf286
// ================================================

void WF286() // WF286
{
  unsigned short int i, imax;
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 1); //  @ 1+
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WF1B5(); // WF1B5
    if (Pop() != 0)
    {
      Push(i); // I
      WF081(); // WF081
      WF155(); // WF155
      Push(Read16(pp_RECORD_n_)); // RECORD# @
      ROT(); // ROT
      ROT(); // ROT
      WF093(); // WF093
      WE8AF(); // WE8AF
      Push(i - 1); // I 1 -
      if (Pop() != 0)
      {
        WF067(); // WF067
      }
      WEAEC(); // WEAEC
      LoadData(WE8A7); // from 'CREATURE'
      C_ex_(); // C!
      WF093(); // WF093
      WE8AF(); // WE8AF
      SWAP(); // SWAP
      LoadData(WE89F); // from 'CREATURE'
      Store_3(); // !_3
      WF23C(); // WF23C
    } else
    {
      WF093(); // WF093
      WE8AF(); // WE8AF
      imax = i; // LEAVE
    }
    WF1D3(); // WF1D3
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf2d8: WORD 'WF2DA' codep=0x224c wordp=0xf2da
// ================================================

void WF2DA() // WF2DA
{
  unsigned short int i, imax;
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WF1B5(); // WF1B5
    if (Pop() != 0)
    {
      Push(i); // I
      WF081(); // WF081
      WF093(); // WF093
      WE8AF(); // WE8AF
      WF067(); // WF067
      Push(Read16(pp_WEF53)); // WEF53 @
      LoadData(WE87F); // from 'CREATURE'
      Store_3(); // !_3
      Push(Read16(pp_RECORD_n_)); // RECORD# @
      SWAP(); // SWAP
      WF286(); // WF286
      SWAP(); // SWAP
      Push(pp_RECORD_n_); // RECORD#
      Store_3(); // !_3
      WE8AF(); // WE8AF
      Push(Read16(pp_WEF53)); // WEF53 @
      LoadData(WE887); // from 'CREATURE'
      Store_3(); // !_3
    } else
    {
      imax = i; // LEAVE
    }
    WF1D3(); // WF1D3
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf31e: WORD 'WF320' codep=0x224c wordp=0xf320 params=0 returns=0
// ================================================

void WF320() // WF320
{
  Push(Read16(cc_WE79E)); // WE79E
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xf332: WORD 'WF334' codep=0x224c wordp=0xf334
// ================================================

void WF334() // WF334
{
  Push(pp_WEF53); // WEF53
  OFF(); // OFF
  Push(pp_PLANTS); // PLANTS
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  OVER(); // OVER
  WF0C7(); // WF0C7
  Push(pp_ANIMALS); // ANIMALS
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  OVER(); // OVER
  WF0C7(); // WF0C7
  Push(0);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  WE8AF(); // WE8AF
  WF189(); // WF189
  WF179(); // WF179
  WF2DA(); // WF2DA
  Push(Read16(pp_WEF53)); // WEF53 @
  if (Pop() != 0)
  {
    Push(1);
    Push(pp_WEF53); // WEF53
    _plus__ex__2(); // +!_2
    WF093(); // WF093
    WE8AF(); // WE8AF
    WF189(); // WF189
    WF179(); // WF179
  }
  WF093(); // WF093
  WF320(); // WF320
  WF2DA(); // WF2DA
  Push(Read16(pp_WEF53)); // WEF53 @
  Push(pp_PLHI); // PLHI
  Store_3(); // !_3
}


// ================================================
// 0xf380: WORD 'WF382' codep=0x224c wordp=0xf382 params=0 returns=0
// ================================================

void WF382() // WF382
{
  unsigned short int i, imax;
  Push(Read16(pp_PLHI) + 1); // PLHI @ 1+
  Push(0);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  while(1)
  {
    WE8AF(); // WE8AF
    Push(Read16(pp_RECORD_n_)); // RECORD# @
    OVER(); // OVER
    _st_(); // <
    if (Pop() == 0) break;

    LoadData(WE8A7); // from 'CREATURE'
    Push(Read16(Pop())&0xFF); //  C@
    LoadData(WE89F); // from 'CREATURE'
    Push(Read16(Pop())&0xFF); //  C@
    LoadData(WE897); // from 'CREATURE'
    Push(Read16(Pop()) + 1); //  @ 1+
    LoadData(WE88F); // from 'CREATURE'
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
        WE8AF(); // WE8AF
        Push(Read16(regsp)); // DUP
        LoadData(WE89F); // from 'CREATURE'
        C_ex_(); // C!
        OVER(); // OVER
        LoadData(WE8A7); // from 'CREATURE'
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
  }
  Pop(); // DROP
}


// ================================================
// 0xf3e8: WORD 'WF3EA' codep=0x224c wordp=0xf3ea
// ================================================

void WF3EA() // WF3EA
{
  Push(Read16(0x63ef+WE87A.offset)); // WE87A<IFIELD> @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(pp_PLHI) + 0x000a); // PLHI @ 0x000a +
    _slash_(); // /
    Push(2);
    MAX(); // MAX
  }
  LoadData(WE872); // from 'REGIONS'
  C_ex_(); // C!
}


// ================================================
// 0xf40a: WORD 'WF40C' codep=0x224c wordp=0xf40c
// ================================================

void WF40C() // WF40C
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
    Push(Read16(cc_WE79A)); // WE79A
    Push(i); // I
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      WF3EA(); // WF3EA
    }
    i++;
  } while(i<imax); // (LOOP)

  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf430: WORD 'WF432' codep=0x224c wordp=0xf432
// ================================================

void WF432() // WF432
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
// 0xf446: WORD 'WF448' codep=0x224c wordp=0xf448
// ================================================

void WF448() // WF448
{
  WF432(); // WF432
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
    WF432(); // WF432
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
  LoadData(WE7C2); // from 'BOX'
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf494: WORD 'DIO' codep=0x224c wordp=0xf49c
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
  WEA0A(); // WEA0A
  WEAA0(); // WEAA0
  WF448(); // WF448
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  LoadData(WE7DA); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    WF055(); // WF055
    WF334(); // WF334
    WF382(); // WF382
    WF40C(); // WF40C
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

