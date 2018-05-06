// ====== OVERLAY 'SCIENCE' ======
// store offset = 0xe5f0
// overlay size   = 0x0f70

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xe606  codep:0x1d29 parp:0xe606 size:0x0002 C-string:'UNK_0xe606'
//      UNK_0xe60a  codep:0x744d parp:0xe60a size:0x0003 C-string:'UNK_0xe60a'
//      UNK_0xe60f  codep:0x744d parp:0xe60f size:0x0003 C-string:'UNK_0xe60f'
//      UNK_0xe614  codep:0x744d parp:0xe614 size:0x0003 C-string:'UNK_0xe614'
//      UNK_0xe619  codep:0x744d parp:0xe619 size:0x0003 C-string:'UNK_0xe619'
//      UNK_0xe61e  codep:0x744d parp:0xe61e size:0x0003 C-string:'UNK_0xe61e'
//      UNK_0xe623  codep:0x744d parp:0xe623 size:0x0003 C-string:'UNK_0xe623'
//      UNK_0xe628  codep:0x744d parp:0xe628 size:0x0003 C-string:'UNK_0xe628'
//      UNK_0xe62d  codep:0x744d parp:0xe62d size:0x0003 C-string:'UNK_0xe62d'
//      UNK_0xe632  codep:0x744d parp:0xe632 size:0x0003 C-string:'UNK_0xe632'
//      UNK_0xe637  codep:0x744d parp:0xe637 size:0x0003 C-string:'UNK_0xe637'
//      UNK_0xe63c  codep:0x73ea parp:0xe63c size:0x0006 C-string:'UNK_0xe63c'
//      UNK_0xe644  codep:0x73ea parp:0xe644 size:0x0006 C-string:'UNK_0xe644'
//      UNK_0xe64c  codep:0x73ea parp:0xe64c size:0x0006 C-string:'UNK_0xe64c'
//      UNK_0xe654  codep:0x73ea parp:0xe654 size:0x0006 C-string:'UNK_0xe654'
//      UNK_0xe65c  codep:0x744d parp:0xe65c size:0x0003 C-string:'UNK_0xe65c'
//      UNK_0xe661  codep:0x73ea parp:0xe661 size:0x0006 C-string:'UNK_0xe661'
//      UNK_0xe669  codep:0x744d parp:0xe669 size:0x0003 C-string:'UNK_0xe669'
//      UNK_0xe66e  codep:0x73ea parp:0xe66e size:0x0006 C-string:'UNK_0xe66e'
//      UNK_0xe676  codep:0x73ea parp:0xe676 size:0x0006 C-string:'UNK_0xe676'
//      UNK_0xe67e  codep:0x73ea parp:0xe67e size:0x0006 C-string:'UNK_0xe67e'
//      UNK_0xe686  codep:0x73ea parp:0xe686 size:0x0006 C-string:'UNK_0xe686'
//      UNK_0xe68e  codep:0x73ea parp:0xe68e size:0x0006 C-string:'UNK_0xe68e'
//      UNK_0xe696  codep:0x73ea parp:0xe696 size:0x0006 C-string:'UNK_0xe696'
//      UNK_0xe69e  codep:0x224c parp:0xe69e size:0x00a2 C-string:'UNK_0xe69e'
//      UNK_0xe742  codep:0x224c parp:0xe742 size:0x0010 C-string:'UNK_0xe742'
//      UNK_0xe754  codep:0x224c parp:0xe754 size:0x000a C-string:'UNK_0xe754'
//      UNK_0xe760  codep:0x224c parp:0xe760 size:0x0052 C-string:'UNK_0xe760'
//          ?HEAVY  codep:0x224c parp:0xe7bd size:0x0010 C-string:'IsHEAVY'
//      UNK_0xe7cf  codep:0x224c parp:0xe7cf size:0x000e C-string:'UNK_0xe7cf'
//       .STARDATE  codep:0x224c parp:0xe7eb size:0x007e C-string:'DrawSTARDATE'
//      UNK_0xe86b  codep:0x224c parp:0xe86b size:0x0021 C-string:'UNK_0xe86b'
//      UNK_0xe88e  codep:0x224c parp:0xe88e size:0x0024 C-string:'UNK_0xe88e'
//      UNK_0xe8b4  codep:0x224c parp:0xe8b4 size:0x0018 C-string:'UNK_0xe8b4'
//      UNK_0xe8ce  codep:0x224c parp:0xe8ce size:0x003e C-string:'UNK_0xe8ce'
//      UNK_0xe90e  codep:0x224c parp:0xe90e size:0x0040 C-string:'UNK_0xe90e'
//      UNK_0xe950  codep:0x224c parp:0xe950 size:0x0022 C-string:'UNK_0xe950'
//      UNK_0xe974  codep:0x224c parp:0xe974 size:0x002a C-string:'UNK_0xe974'
//      UNK_0xe9a0  codep:0x224c parp:0xe9a0 size:0x0038 C-string:'UNK_0xe9a0'
//      UNK_0xe9da  codep:0x224c parp:0xe9da size:0x004a C-string:'UNK_0xe9da'
//      UNK_0xea26  codep:0x224c parp:0xea26 size:0x0006 C-string:'UNK_0xea26'
//      UNK_0xea2e  codep:0x1d29 parp:0xea2e size:0x0010 C-string:'UNK_0xea2e'
//      UNK_0xea40  codep:0x224c parp:0xea40 size:0x0010 C-string:'UNK_0xea40'
//      UNK_0xea52  codep:0x224c parp:0xea52 size:0x00a6 C-string:'UNK_0xea52'
//      .STAT-TEXT  codep:0x224c parp:0xeb07 size:0x00f7 C-string:'DrawSTAT_dash_TEXT'
//      UNK_0xec00  codep:0x224c parp:0xec00 size:0x000a C-string:'UNK_0xec00'
//       (/STATUS)  codep:0x224c parp:0xec18 size:0x000a C-string:'_ro__slash_STATUS_rc_'
//      UNK_0xec24  codep:0x1d29 parp:0xec24 size:0x0002 C-string:'UNK_0xec24'
//      UNK_0xec28  codep:0x1d29 parp:0xec28 size:0x0002 C-string:'UNK_0xec28'
//      UNK_0xec2c  codep:0x1d29 parp:0xec2c size:0x0008 C-string:'UNK_0xec2c'
//      UNK_0xec36  codep:0x224c parp:0xec36 size:0x0038 C-string:'UNK_0xec36'
//      UNK_0xec70  codep:0x224c parp:0xec70 size:0x0042 C-string:'UNK_0xec70'
//      UNK_0xecb4  codep:0x224c parp:0xecb4 size:0x007a C-string:'UNK_0xecb4'
//      UNK_0xed30  codep:0x224c parp:0xed30 size:0x009e C-string:'UNK_0xed30'
//      UNK_0xedd0  codep:0x224c parp:0xedd0 size:0x00b4 C-string:'UNK_0xedd0'
//      UNK_0xee86  codep:0x224c parp:0xee86 size:0x0030 C-string:'UNK_0xee86'
//      UNK_0xeeb8  codep:0x224c parp:0xeeb8 size:0x0026 C-string:'UNK_0xeeb8'
//      UNK_0xeee0  codep:0x224c parp:0xeee0 size:0x001c C-string:'UNK_0xeee0'
//      UNK_0xeefe  codep:0x224c parp:0xeefe size:0x000c C-string:'UNK_0xeefe'
//      UNK_0xef0c  codep:0x1d29 parp:0xef0c size:0x0009 C-string:'UNK_0xef0c'
//      UNK_0xef17  codep:0x224c parp:0xef17 size:0x0018 C-string:'UNK_0xef17'
//      UNK_0xef31  codep:0x224c parp:0xef31 size:0x00a0 C-string:'UNK_0xef31'
//      UNK_0xefd3  codep:0x1d29 parp:0xefd3 size:0x0005 C-string:'UNK_0xefd3'
//      UNK_0xefda  codep:0x1d29 parp:0xefda size:0x0005 C-string:'UNK_0xefda'
//      UNK_0xefe1  codep:0x1d29 parp:0xefe1 size:0x0002 C-string:'UNK_0xefe1'
//      UNK_0xefe5  codep:0x1d29 parp:0xefe5 size:0x0002 C-string:'UNK_0xefe5'
//      UNK_0xefe9  codep:0x224c parp:0xefe9 size:0x0058 C-string:'UNK_0xefe9'
//      UNK_0xf043  codep:0x224c parp:0xf043 size:0x0058 C-string:'UNK_0xf043'
//      UNK_0xf09d  codep:0x224c parp:0xf09d size:0x001e C-string:'UNK_0xf09d'
//      UNK_0xf0bd  codep:0x224c parp:0xf0bd size:0x000f C-string:'UNK_0xf0bd'
//      UNK_0xf0ce  codep:0x224c parp:0xf0ce size:0x000e C-string:'UNK_0xf0ce'
//      UNK_0xf0de  codep:0x224c parp:0xf0de size:0x008b C-string:'UNK_0xf0de'
//      UNK_0xf16b  codep:0x224c parp:0xf16b size:0x0066 C-string:'UNK_0xf16b'
//      UNK_0xf1d3  codep:0x224c parp:0xf1d3 size:0x0064 C-string:'UNK_0xf1d3'
//      UNK_0xf239  codep:0x224c parp:0xf239 size:0x008f C-string:'UNK_0xf239'
//      UNK_0xf2ca  codep:0x224c parp:0xf2ca size:0x0010 C-string:'UNK_0xf2ca'
//      UNK_0xf2dc  codep:0x224c parp:0xf2dc size:0x00b2 C-string:'UNK_0xf2dc'
//      UNK_0xf390  codep:0x224c parp:0xf390 size:0x000a C-string:'UNK_0xf390'
//      UNK_0xf39c  codep:0x224c parp:0xf39c size:0x0064 C-string:'UNK_0xf39c'
//      UNK_0xf402  codep:0x224c parp:0xf402 size:0x0008 C-string:'UNK_0xf402'
//       .READINGS  codep:0x4a4f parp:0xf418 size:0x000c C-string:'DrawREADINGS'
//      (/SENSORS)  codep:0x224c parp:0xf433 size:0x0000 C-string:'_ro__slash_SENSORS_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_HYDRO; // HYDRO
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_IsPORT; // ?PORT
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_VSTIME; // VSTIME
extern const unsigned short int pp__10_star_CARGO; // 10*CARGO
extern const unsigned short int pp_SENSE_dash_ADDR; // SENSE-ADDR
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_LKEYTIM; // LKEYTIM
extern const unsigned short int pp_XWLD_c_XPIX; // XWLD:XPIX
extern const unsigned short int pp_YWLD_c_YPIX; // YWLD:YPIX
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern LoadDataType ELEM_dash_NAME; // ELEM-NAME
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color DK_dash_GREEN; // DK-GREEN
extern Color GREEN; // GREEN
extern Color RED; // RED
extern Color VIOLET; // VIOLET
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color LT_dash_GREEN; // LT-GREEN
extern Color LT_dash_BLUE; // LT-BLUE
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void M_star_(); // M*
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void _n_(); // #
void _n__gt_(); // #>
void _st__n_(); // <#
void PAD(); // PAD
void Draw(); // .
void DrawR(); // .R
void D_dot_(); // D.
void D_dot_R(); // D.R
void SPACES(); // SPACES
void MS(); // MS
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void VA_gt_BUF(); // VA>BUF
void GetRECORD(); // @RECORD
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void FILLCIRC(); // FILLCIRC
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_ICON(); // POINT>ICON
void IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void BEEPON(); // BEEPON
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _dash_XTRAILING(); // -XTRAILING
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void D_plus_(); // D+
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void _plus_BIT(); // +BIT
void LPLOT(); // LPLOT
void LLINE(); // LLINE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe606 = 0xe606; // UNK_0xe606 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xea2e = 0xea2e; // UNK_0xea2e size: 16
// {0xe7, 0x31, 0x30, 0x9e, 0x0c, 0xc3, 0xc3, 0x30, 0xff, 0x1e, 0xf3, 0xff, 0x3c, 0xcf, 0x00, 0xc0}

const unsigned short int pp_UNK_0xec24 = 0xec24; // UNK_0xec24 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xec28 = 0xec28; // UNK_0xec28 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xec2c = 0xec2c; // UNK_0xec2c size: 8
// {0x81, 0xc3, 0x81, 0x81, 0x81, 0x81, 0xc3, 0x81}

const unsigned short int pp_UNK_0xef0c = 0xef0c; // UNK_0xef0c size: 9
// {0x44, 0xcc, 0xdd, 0x33, 0x77, 0x99, 0x88, 0xaa, 0x55}

const unsigned short int pp_UNK_0xefd3 = 0xefd3; // UNK_0xefd3 size: 5
// {0x01, 0x01, 0x16, 0x1b, 0x00}

const unsigned short int pp_UNK_0xefda = 0xefda; // UNK_0xefda size: 5
// {0x02, 0x01, 0x16, 0x1b, 0x00}

const unsigned short int pp_UNK_0xefe1 = 0xefe1; // UNK_0xefe1 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xefe5 = 0xefe5; // UNK_0xefe5 size: 2
// {0x3a, 0x20}




// 0xe602: db 0xf0 0x00 '  '

// ================================================
// 0xe604: WORD 'UNK_0xe606' codep=0x1d29 parp=0xe606
// ================================================
// 0xe606: db 0x3a 0x20 ': '

// ================================================
// 0xe608: WORD 'UNK_0xe60a' codep=0x744d parp=0xe60a
// ================================================
IFieldType UNK_0xe60a = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xe60d: WORD 'UNK_0xe60f' codep=0x744d parp=0xe60f
// ================================================
IFieldType UNK_0xe60f = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xe612: WORD 'UNK_0xe614' codep=0x744d parp=0xe614
// ================================================
IFieldType UNK_0xe614 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xe617: WORD 'UNK_0xe619' codep=0x744d parp=0xe619
// ================================================
IFieldType UNK_0xe619 = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xe61c: WORD 'UNK_0xe61e' codep=0x744d parp=0xe61e
// ================================================
IFieldType UNK_0xe61e = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xe621: WORD 'UNK_0xe623' codep=0x744d parp=0xe623
// ================================================
IFieldType UNK_0xe623 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe626: WORD 'UNK_0xe628' codep=0x744d parp=0xe628
// ================================================
IFieldType UNK_0xe628 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xe62b: WORD 'UNK_0xe62d' codep=0x744d parp=0xe62d
// ================================================
// orphan
IFieldType UNK_0xe62d = {SHIPIDX, 0x15, 0x02};

// ================================================
// 0xe630: WORD 'UNK_0xe632' codep=0x744d parp=0xe632
// ================================================
// orphan
IFieldType UNK_0xe632 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xe635: WORD 'UNK_0xe637' codep=0x744d parp=0xe637
// ================================================
// orphan
IFieldType UNK_0xe637 = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xe63a: WORD 'UNK_0xe63c' codep=0x73ea parp=0xe63c
// ================================================
LoadDataType UNK_0xe63c = {VESSELIDX, 0x1d, 0x2a, 0x49, 0x6491};

// ================================================
// 0xe642: WORD 'UNK_0xe644' codep=0x73ea parp=0xe644
// ================================================
LoadDataType UNK_0xe644 = {VESSELIDX, 0x07, 0x02, 0x49, 0x6491};

// ================================================
// 0xe64a: WORD 'UNK_0xe64c' codep=0x73ea parp=0xe64c
// ================================================
LoadDataType UNK_0xe64c = {VESSELIDX, 0x18, 0x01, 0x49, 0x6491};

// ================================================
// 0xe652: WORD 'UNK_0xe654' codep=0x73ea parp=0xe654
// ================================================
LoadDataType UNK_0xe654 = {VESSELIDX, 0x15, 0x01, 0x49, 0x6491};

// ================================================
// 0xe65a: WORD 'UNK_0xe65c' codep=0x744d parp=0xe65c
// ================================================
IFieldType UNK_0xe65c = {VESSELIDX, 0x12, 0x02};

// ================================================
// 0xe65f: WORD 'UNK_0xe661' codep=0x73ea parp=0xe661
// ================================================
LoadDataType UNK_0xe661 = {VESSELIDX, 0x0c, 0x02, 0x49, 0x6491};

// ================================================
// 0xe667: WORD 'UNK_0xe669' codep=0x744d parp=0xe669
// ================================================
// orphan
IFieldType UNK_0xe669 = {VESSELIDX, 0x14, 0x02};

// ================================================
// 0xe66c: WORD 'UNK_0xe66e' codep=0x73ea parp=0xe66e
// ================================================
// orphan
LoadDataType UNK_0xe66e = {VESSELIDX, 0x0e, 0x02, 0x49, 0x6491};

// ================================================
// 0xe674: WORD 'UNK_0xe676' codep=0x73ea parp=0xe676
// ================================================
LoadDataType UNK_0xe676 = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xe67c: WORD 'UNK_0xe67e' codep=0x73ea parp=0xe67e
// ================================================
LoadDataType UNK_0xe67e = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xe684: WORD 'UNK_0xe686' codep=0x73ea parp=0xe686
// ================================================
LoadDataType UNK_0xe686 = {PLANETIDX, 0x09, 0x01, 0x16, 0x658f};

// ================================================
// 0xe68c: WORD 'UNK_0xe68e' codep=0x73ea parp=0xe68e
// ================================================
LoadDataType UNK_0xe68e = {PLANETIDX, 0x0c, 0x01, 0x16, 0x658f};

// ================================================
// 0xe694: WORD 'UNK_0xe696' codep=0x73ea parp=0xe696
// ================================================
LoadDataType UNK_0xe696 = {COMPOUNDSIDX, 0x00, 0x03, 0x07, 0x93a8};

// ================================================
// 0xe69c: WORD 'UNK_0xe69e' codep=0x224c parp=0xe69e params=1 returns=0
// ================================================

void UNK_0xe69e() // UNK_0xe69e
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(0);
  Push(0x0014);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  PRINT("CRITICAL", 8); // (.")
  goto label2;

  label1:
  Push(a); // I
  Push(0x0014);
  Push(0x0032);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    PRINT("HEAVY", 5); // (.")
  } else
  {
    Push(a); // I
    Push(0x0032);
    Push(0x0050);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      PRINT("MODERATE", 8); // (.")
    } else
    {
      Push(a); // I
      Push(0x0050);
      Push(0x005f);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        PRINT("SLIGHT", 6); // (.")
      } else
      {
        Push(a); // I
        Push(0x005f);
        Push(0x0064);
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          PRINT("MINIMAL", 7); // (.")
        } else
        {
          PRINT("NONE", 4); // (.")
        }
      }
    }
  }

  label2:
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe740: WORD 'UNK_0xe742' codep=0x224c parp=0xe742 params=1 returns=0
// ================================================

void UNK_0xe742() // UNK_0xe742
{
  Push(0x0028);
  _st_(); // <
  if (Pop() == 0) return;
  GetColor(PINK);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe752: WORD 'UNK_0xe754' codep=0x224c parp=0xe754 params=1 returns=0
// ================================================

void UNK_0xe754() // UNK_0xe754
{
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe75e: WORD 'UNK_0xe760' codep=0x224c parp=0xe760 params=0 returns=2
// ================================================

void UNK_0xe760() // UNK_0xe760
{
  unsigned short int i, imax;
  Push2Words("NULL");
  Push(0x000e);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(((0x63ef+UNK_0xe60a.offset) + i) + 1)&0xFF); // UNK_0xe60a<IFIELD> I + 1+ C@
    _0_gt_(); // 0>
    Push(i==0?1:0); // I 0=
    MAX(); // MAX
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
    Push(Pop() + ((Read16((0x63ef+UNK_0xe60a.offset) + i)&0xFF) & 0x007f)); //  UNK_0xe60a<IFIELD> I + C@ 0x007f AND +
    SWAP(); // SWAP
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(1);
  MAX(); // MAX
  _slash_(); // /
  Push((Read16(0x63ef+UNK_0xe60a.offset)&0xFF) & 0x007f); // UNK_0xe60a<IFIELD> C@ 0x007f AND
  Push(0x0013);
  _gt_(); // >
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe7b2: WORD '?HEAVY' codep=0x224c parp=0xe7bd params=0 returns=2
// ================================================
// entry

void IsHEAVY() // ?HEAVY
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe760(); // UNK_0xe760
  Push(0x0032);
  _st_(); // <
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7cd: WORD 'UNK_0xe7cf' codep=0x224c parp=0xe7cf params=0 returns=1
// ================================================

void UNK_0xe7cf() // UNK_0xe7cf
{
  Push(8);
  UNK_0xe754(); // UNK_0xe754
  UNK_0xe760(); // UNK_0xe760
  Push(Read16(regsp)); // DUP
  UNK_0xe742(); // UNK_0xe742
  UNK_0xe69e(); // UNK_0xe69e
}


// ================================================
// 0xe7dd: WORD '.STARDATE' codep=0x224c parp=0xe7eb params=1 returns=0
// ================================================
// entry

void DrawSTARDATE() // .STARDATE
{
  Push(Pop() | (Read16(pp__n_AUX)==1?1:0)); //  #AUX @ 1 = OR
  if (Pop() == 0) return;
  Push(0x0068);
  Push(0x00b7);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  Push(0x000d);
  UNK_0xe754(); // UNK_0xe754
  Push(1);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(Pop() + 0x120c); //  0x120c +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  Push(0);
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(".", 1); // (.")
  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(0);
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("-", 1); // (.")
  Push(0);
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("-", 1); // (.")
  Push(0);
  DrawR(); // .R
}


// ================================================
// 0xe869: WORD 'UNK_0xe86b' codep=0x224c parp=0xe86b params=0 returns=0
// ================================================

void UNK_0xe86b() // UNK_0xe86b
{
  Push(7);
  UNK_0xe754(); // UNK_0xe754
  Push(!(Read16(0x63ef+UNK_0xe628.offset) & 3)); // UNK_0xe628<IFIELD> @ 3 AND NOT
  if (Pop() != 0)
  {
    PRINT("UN", 2); // (.")
  }
  PRINT("ARMED", 5); // (.")
}


// ================================================
// 0xe88c: WORD 'UNK_0xe88e' codep=0x224c parp=0xe88e params=0 returns=0
// ================================================

void UNK_0xe88e() // UNK_0xe88e
{
  Push(4);
  UNK_0xe754(); // UNK_0xe754
  Push(Read16(0x63ef+UNK_0xe628.offset) & 8); // UNK_0xe628<IFIELD> @ 8 AND
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("UP");
  } else
  {
    SET_STR_AS_PARAM("DOWN");
  }
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe8b2: WORD 'UNK_0xe8b4' codep=0x224c parp=0xe8b4 params=2 returns=0
// ================================================

void UNK_0xe8b4() // UNK_0xe8b4
{
  Push(Read16(pp__dash_END)); // -END @
  Push(0x004b);
  M_star_(); // M*
  D_gt_(); // D>
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  GetColor(PINK);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe8cc: WORD 'UNK_0xe8ce' codep=0x224c parp=0xe8ce params=0 returns=0
// ================================================

void UNK_0xe8ce() // UNK_0xe8ce
{
  Push(5);
  UNK_0xe754(); // UNK_0xe754
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  UNK_0xe8b4(); // UNK_0xe8b4
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  Push(0);
  DrawR(); // .R
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0);
  DrawR(); // .R
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(0x2710); Push(0x0000);
  D_st_(); // D<
  if (Pop() != 0)
  {
    Draw(); // .
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xe90c: WORD 'UNK_0xe90e' codep=0x224c parp=0xe90e params=0 returns=0
// ================================================

void UNK_0xe90e() // UNK_0xe90e
{
  Push(6);
  UNK_0xe754(); // UNK_0xe754
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+UNK_0xe619.offset)); // UNK_0xe619<IFIELD> @
  _plus_BIT(); // +BIT
  Push((Pop() + 1) * 0x01f4); //  1+ 0x01f4 *
  Push(Read16(regsp)); // DUP
  Push(Read16(0x63ef+UNK_0xe623.offset)); // UNK_0xe623<IFIELD> @
  Push(pp__10_star_CARGO); // 10*CARGO
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  MAX(); // MAX
  _dash_(); // -
  Push(0x0064);
  ROT(); // ROT
  _star__slash_(); // */
  Draw(); // .
  PRINT("%", 1); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe94e: WORD 'UNK_0xe950' codep=0x224c parp=0xe950 params=2 returns=0
// ================================================

void UNK_0xe950() // UNK_0xe950
{
  unsigned short int i, imax;
  SWAP(); // SWAP
  Push(Pop() + 0x0088); //  0x0088 +
  Push(0x0088);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    OVER(); // OVER
    Push(Pop() + 2); //  2+
    Push(i); // I
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe972: WORD 'UNK_0xe974' codep=0x224c parp=0xe974 params=2 returns=0
// ================================================

void UNK_0xe974() // UNK_0xe974
{
  unsigned short int i, imax;
  SWAP(); // SWAP
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x00a4);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x00a3);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    OVER(); // OVER
    Push(Pop() + 2); //  2+
    Push(i); // I
    LLINE(); // LLINE
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe99e: WORD 'UNK_0xe9a0' codep=0x224c parp=0xe9a0 params=0 returns=2
// ================================================

void UNK_0xe9a0() // UNK_0xe9a0
{
  GetColor(YELLOW);
  StoreCOLOR(); // !COLOR
  Push(Read16(0x63ef+UNK_0xe61e.offset)); // UNK_0xe61e<IFIELD> @
  Push(0x0035);
  _slash_(); // /
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0065);
    UNK_0xe950(); // UNK_0xe950
  }
  Push(0x001c);
  Push(Read16(0x63ef+UNK_0xe61e.offset)); // UNK_0xe61e<IFIELD> @
  Push(0x0035);
  _slash_(); // /
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x0065);
  UNK_0xe974(); // UNK_0xe974
}


// ================================================
// 0xe9d8: WORD 'UNK_0xe9da' codep=0x224c parp=0xe9da params=0 returns=0
// ================================================

void UNK_0xe9da() // UNK_0xe9da
{
  Push(Read16((0x63ef+UNK_0xe60f.offset) + 1)&0xFF); // UNK_0xe60f<IFIELD> 1+ C@
  Push(1);
  Push(0x0065);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(Read16(0x63ef+UNK_0xe614.offset)); // UNK_0xe614<IFIELD> @
  Push(0x0059);
  _slash_(); // /
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0056);
    UNK_0xe950(); // UNK_0xe950
  }
  Push(0x001c);
  Push(Read16(0x63ef+UNK_0xe614.offset)); // UNK_0xe614<IFIELD> @
  Push(0x0059);
  _slash_(); // /
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x0056);
  UNK_0xe974(); // UNK_0xe974
}


// ================================================
// 0xea24: WORD 'UNK_0xea26' codep=0x224c parp=0xea26 params=0 returns=2
// ================================================

void UNK_0xea26() // UNK_0xea26
{
  UNK_0xe9a0(); // UNK_0xe9a0
  UNK_0xe9da(); // UNK_0xe9da
}


// ================================================
// 0xea2c: WORD 'UNK_0xea2e' codep=0x1d29 parp=0xea2e
// ================================================
// 0xea2e: db 0xe7 0x31 0x30 0x9e 0x0c 0xc3 0xc3 0x30 0xff 0x1e 0xf3 0xff 0x3c 0xcf 0x00 0xc0 ' 10    0    <   '

// ================================================
// 0xea3e: WORD 'UNK_0xea40' codep=0x224c parp=0xea40 params=5 returns=0
// ================================================

void UNK_0xea40() // UNK_0xea40
{
  unsigned short int i, imax;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _2OVER(); // 2OVER
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea50: WORD 'UNK_0xea52' codep=0x224c parp=0xea52 params=0 returns=12
// ================================================

void UNK_0xea52() // UNK_0xea52
{
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  Push(0x0055);
  Push(0x0087);
  Push(0x0055);
  Push(0x00a4);
  Push(0x0059);
  Push(0x00a4);
  Push(0x0059);
  Push(0x0087);
  Push(0x0055);
  Push(0x0087);
  Push(4);
  UNK_0xea40(); // UNK_0xea40
  Push(0x0064);
  Push(0x0087);
  Push(0x0064);
  Push(0x00a4);
  Push(0x0068);
  Push(0x00a4);
  Push(0x0068);
  Push(0x0087);
  Push(0x0064);
  Push(0x0087);
  Push(4);
  UNK_0xea40(); // UNK_0xea40
  _gt_1FONT(); // >1FONT
  Push(0x0056);
  Push(0x0085);
  POS_dot_(); // POS.
  PRINT("S", 1); // (.")
  Push(0x0065);
  Push(0x0085);
  POS_dot_(); // POS.
  PRINT("A", 1); // (.")
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(pp_UNK_0xea2e); // UNK_0xea2e
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(6);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(0x0014);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(0x005c);
  Push(0x009c);
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xeaf8: WORD '.STAT-TEXT' codep=0x224c parp=0xeb07 params=0 returns=3
// ================================================
// entry

void DrawSTAT_dash_TEXT() // .STAT-TEXT
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x0069);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  GetColor(WHITE);
  GetColor(WHITE);
  GetColor(LT_dash_GREEN);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x0055);
  Push(0x00b7);
  POS_dot_(); // POS.
  PRINT("DATE:", 5); // (.")
  GetCRS(); // @CRS
  Push(1);
  DrawSTARDATE(); // .STARDATE
  StoreCRS(); // !CRS
  Push(0x0055);
  Push(0x00ad);
  POS_dot_(); // POS.
  PRINT("DAMAGE:", 7); // (.")
  GetCRS(); // @CRS
  UNK_0xe7cf(); // UNK_0xe7cf
  StoreCRS(); // !CRS
  Push(0x006b);
  Push(0x00a3);
  POS_dot_(); // POS.
  PRINT("CARGO:", 6); // (.")
  GetCRS(); // @CRS
  UNK_0xe90e(); // UNK_0xe90e
  StoreCRS(); // !CRS
  Push(0x006b);
  Push(0x0099);
  POS_dot_(); // POS.
  PRINT("ENERGY:", 7); // (.")
  GetCRS(); // @CRS
  UNK_0xe8ce(); // UNK_0xe8ce
  StoreCRS(); // !CRS
  Push(0x006b);
  Push(0x008f);
  POS_dot_(); // POS.
  PRINT("SHIELDS:", 8); // (.")
  GetCRS(); // @CRS
  UNK_0xe88e(); // UNK_0xe88e
  StoreCRS(); // !CRS
  Push(0x006b);
  Push(0x0085);
  POS_dot_(); // POS.
  PRINT("WEAP:", 5); // (.")
  GetCRS(); // @CRS
  UNK_0xe86b(); // UNK_0xe86b
  StoreCRS(); // !CRS
  GetCRS(); // @CRS
  UNK_0xea26(); // UNK_0xea26
  StoreCRS(); // !CRS
  ICLOSE(); // ICLOSE
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(3);
  M_star_(); // M*
  D_st_(); // D<
  if (Pop() != 0)
  {
    Push(0x0dac); Push(0x0000);
  } else
  {
    Push(0x1d4c); Push(0x0000);
  }
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_VSTIME); // VSTIME
  StoreD(); // D!
}


// ================================================
// 0xebfe: WORD 'UNK_0xec00' codep=0x224c parp=0xec00 params=0 returns=15
// ================================================

void UNK_0xec00() // UNK_0xec00
{
  GetColor(BLACK);
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  UNK_0xea52(); // UNK_0xea52
  DrawSTAT_dash_TEXT(); // .STAT-TEXT
}


// ================================================
// 0xec0a: WORD '(/STATUS)' codep=0x224c parp=0xec18 params=0 returns=15
// ================================================
// entry

void _ro__slash_STATUS_rc_() // (/STATUS)
{
  UNK_0xec00(); // UNK_0xec00
  Push(1);
  Push(pp__n_AUX); // #AUX
  Store_3(); // !_3
}


// ================================================
// 0xec22: WORD 'UNK_0xec24' codep=0x1d29 parp=0xec24
// ================================================
// 0xec24: db 0x3a 0x20 ': '

// ================================================
// 0xec26: WORD 'UNK_0xec28' codep=0x1d29 parp=0xec28
// ================================================
// 0xec28: db 0x3a 0x20 ': '

// ================================================
// 0xec2a: WORD 'UNK_0xec2c' codep=0x1d29 parp=0xec2c
// ================================================
// 0xec2c: db 0x81 0xc3 0x81 0x81 0x81 0x81 0xc3 0x81 '        '

// ================================================
// 0xec34: WORD 'UNK_0xec36' codep=0x224c parp=0xec36 params=3 returns=0
// ================================================

void UNK_0xec36() // UNK_0xec36
{
  StoreCOLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xec24); // UNK_0xec24
  Store_3(); // !_3
  Push(Pop() + 0x004c); //  0x004c +
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xec28); // UNK_0xec28
  Store_3(); // !_3
  Push(Pop() + 1); //  1+
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  Push(8);
  Push(Read16(regsp)); // DUP
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_UNK_0xec2c); // UNK_0xec2c
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
}


// ================================================
// 0xec6e: WORD 'UNK_0xec70' codep=0x224c parp=0xec70 params=2 returns=0
// ================================================

void UNK_0xec70() // UNK_0xec70
{
  Push(Read16(pp_UNK_0xec28)); // UNK_0xec28 @
  Push(Read16(pp_UNK_0xec24)); // UNK_0xec24 @
  GetColor(RED);
  UNK_0xec36(); // UNK_0xec36
  Push(Pop() + Read16(pp_UNK_0xec28)); //  UNK_0xec28 @ +
  Push(3);
  MAX(); // MAX
  Push(0x0043);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xec28); // UNK_0xec28
  Store_3(); // !_3
  SWAP(); // SWAP
  Push(Pop() + Read16(pp_UNK_0xec24)); //  UNK_0xec24 @ +
  Push(3);
  MAX(); // MAX
  Push(0x0072);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xec24); // UNK_0xec24
  Store_3(); // !_3
  GetColor(RED);
  UNK_0xec36(); // UNK_0xec36
  CLICK(); // CLICK
}


// ================================================
// 0xecb2: WORD 'UNK_0xecb4' codep=0x224c parp=0xecb4
// ================================================

void UNK_0xecb4() // UNK_0xecb4
{
  unsigned short int a;
  XYSCAN(); // XYSCAN
  Push(pp_KEYTIME); // KEYTIME
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x00c8); Push(0x0000);
  D_st_(); // D<
  a = Pop(); // >R
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(4 * a); // 4 I *
    Push(1);
    MAX(); // MAX
    Push(Pop() * Pop()); // *
    SWAP(); // SWAP
    Push(4 * a); // 4 I *
    Push(1);
    MAX(); // MAX
    Push(Pop() * Pop()); // *
    SWAP(); // SWAP
    OVER(); // OVER
    Push(Pop() + Read16(pp_UNK_0xec24)); //  UNK_0xec24 @ +
    Push(3);
    Push(0x0073);
    WITHIN(); // WITHIN
    OVER(); // OVER
    Push(Pop() + Read16(pp_UNK_0xec28)); //  UNK_0xec28 @ +
    Push(3);
    Push(0x0044);
    WITHIN(); // WITHIN
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      UNK_0xec70(); // UNK_0xec70
      Push(0x0032);
      MS(); // MS
    } else
    {
      Pop(); Pop(); // 2DROP
    }
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xed2e: WORD 'UNK_0xed30' codep=0x224c parp=0xed30 params=2 returns=0
// ================================================

void UNK_0xed30() // UNK_0xed30
{
  unsigned short int a, b;
  GetColor(DK_dash_GREEN);
  StoreCOLOR(); // !COLOR
  Push(0x0054);
  Push(0x00b4);
  POS_dot_(); // POS.
  PRINT("MASS", 4); // (.")
  Push(0x0054);
  Push(0x00a5);
  POS_dot_(); // POS.
  PRINT("TONS", 4); // (.")
  a = Pop(); // >R
  Push(0);
  _2DUP(); // 2DUP
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0);
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x00ac);
  POS_dot_(); // POS.

  label2:
  _2DUP(); // 2DUP
  Push2Words("NULL");
  D_gt_(); // D>
  if (Pop() == 0) goto label1;
  Push(a + 1); // R> 1+
  b = Pop(); // >R
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0);
  _2SWAP(); // 2SWAP
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0);
  _2SWAP(); // 2SWAP
  goto label2;

  label1:
  Pop(); Pop(); // 2DROP
  Push(a); // R>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    ROT(); // ROT
    ROT(); // ROT
    Push(0);
    D_dot_R(); // D.R
    PRINT("*", 1); // (.")
    Push(0x000a);
    Push(0);
    DrawR(); // .R
    Push(3);
    Push(pp_YBLT); // YBLT
    _plus__ex__2(); // +!_2
    Push(0);
  }
  D_dot_(); // D.
}


// ================================================
// 0xedce: WORD 'UNK_0xedd0' codep=0x224c parp=0xedd0
// ================================================

void UNK_0xedd0() // UNK_0xedd0
{
  unsigned short int i, imax, j, jmax;
  Push2Words("NULL");
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  Push(Read16(pp_UNK_0xec28)); // UNK_0xec28 @
  Push(Read16(pp_UNK_0xec24)); // UNK_0xec24 @
  Push(0);
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x0032);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0xfffb);
    Push(0x0019);
    RRND(); // RRND
    TONE(); // TONE
    _2DUP(); // 2DUP
    GetColor(GREEN);
    UNK_0xec36(); // UNK_0xec36
    Push(5);
    MS(); // MS
    _2DUP(); // 2DUP
    GetColor(RED);
    UNK_0xec36(); // UNK_0xec36
    Push(5);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
  Pop(); Pop(); // 2DROP
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_UNK_0xec28) - 0x001f); // UNK_0xec28 @ 0x001f -
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _2_at_(); // 2@
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(pp_UNK_0xec24) - 0x003f); // UNK_0xec24 @ 0x003f -
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _2_at_(); // 2@
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(4);
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _2_at_(); // 2@
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + 1); //  1+
  Push(0);
  SQRT(); // SQRT
  _dash_(); // -
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      POINT_gt_ICON(); // POINT>ICON
      GetIL(); // @IL
      GetIH(); // @IH
      Push2Words("*SHIP");
      D_eq_(); // D=
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        GetIL(); // @IL
        GetIH(); // @IH
        Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
        _1_dot_5_ex_(); // 1.5!
      }
      j++;
    } while(j<jmax); // (LOOP)

  }
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xee84: WORD 'UNK_0xee86' codep=0x224c parp=0xee86 params=0 returns=0
// ================================================

void UNK_0xee86() // UNK_0xee86
{
  Push(0x00b6);
  Push(0x006f);
  Push(0x007e);
  Push(0x009b);
  GetColor(GREY1);
  GetColor(GREY1);
  GetColor(VIOLET);
  IsMRC(); // ?MRC
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0x00b4);
  Push(0x0071);
  Push(0x0080);
  Push(0x0099);
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xeeb6: WORD 'UNK_0xeeb8' codep=0x224c parp=0xeeb8 params=0 returns=0
// ================================================

void UNK_0xeeb8() // UNK_0xeeb8
{
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(0x009c);
  Push(0x00b7);
  Push(0x0053);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x006e);
  Push(0x007e);
  OVER(); // OVER
  Push(0x00b6);
  LLINE(); // LLINE
}


// ================================================
// 0xeede: WORD 'UNK_0xeee0' codep=0x224c parp=0xeee0 params=0 returns=0
// ================================================

void UNK_0xeee0() // UNK_0xeee0
{
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x0067);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("SENSORS", 7); // (.")
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xeefc: WORD 'UNK_0xeefe' codep=0x224c parp=0xeefe params=0 returns=0
// ================================================

void UNK_0xeefe() // UNK_0xeefe
{
  GetColor(BLACK);
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  UNK_0xeeb8(); // UNK_0xeeb8
  UNK_0xee86(); // UNK_0xee86
  UNK_0xeee0(); // UNK_0xeee0
}


// ================================================
// 0xef0a: WORD 'UNK_0xef0c' codep=0x1d29 parp=0xef0c
// ================================================
// 0xef0c: db 0x44 0xcc 0xdd 0x33 0x77 0x99 0x88 0xaa 0x55 'D  3w   U'

// ================================================
// 0xef15: WORD 'UNK_0xef17' codep=0x224c parp=0xef17 params=1 returns=0
// ================================================

void UNK_0xef17() // UNK_0xef17
{
  Push((Read16(Pop())&0xFF) * 3 + pp_UNK_0xef0c); //  C@ 3 * UNK_0xef0c +
  Push(0);
  Push(3);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())&0xFF); //  C@
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xef2f: WORD 'UNK_0xef31' codep=0x224c parp=0xef31 params=1 returns=2
// ================================================

void UNK_0xef31() // UNK_0xef31
{
  unsigned short int a, b;
  a = Pop(); // >R
  Push(Read16(a + 1)&0xFF); // I 1+ C@
  if (Pop() != 0)
  {
    Push(0);
    Push((Read16(a + 4)&0xFF) + 1); // I 4 + C@ 1+
    RRND(); // RRND
    Push(Read16(a + 4)&0xFF); // I 4 + C@
    Push(Read16(regsp)); // DUP
    Push(Pop() * Pop()); // *
    OVER(); // OVER
    Push(Read16(regsp)); // DUP
    Push(Pop() * Pop()); // *
    _dash_(); // -
    Push(0);
    SQRT(); // SQRT
    Push(Pop() + 1); //  1+
    Push(0);
    SWAP(); // SWAP
    RRND(); // RRND
    Push(0);
    Push(2);
    RRND(); // RRND
    if (Pop() != 0)
    {
      Push(-Pop()); //  NEGATE
    }
    b = Pop(); // >R
    Push(0);
    Push(2);
    RRND(); // RRND
    if (Pop() != 0)
    {
      Push(-Pop()); //  NEGATE
    }
    Push(9);
    Push(0x000f);
    _star__slash_(); // */
    Push(Pop() + (Read16(a + 2)&0xFF)); //  I' 2+ C@ +
    Push(b + (Read16(a + 3)&0xFF)); // R> I 3 + C@ +
  } else
  {
    Push(Read16(a + 2)&0xFF); // I 2+ C@
    Push((Read16(a + 4)&0xFF) + 1); // I 4 + C@ 1+
    RRND(); // RRND
    Push(Read16(a + 5)&0xFF); // I 5 + C@
    Push((Read16(a + 3)&0xFF) + 1); // I 3 + C@ 1+
    RRND(); // RRND
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xefd1: WORD 'UNK_0xefd3' codep=0x1d29 parp=0xefd3
// ================================================
// 0xefd3: db 0x01 0x01 0x16 0x1b 0x00 '     '

// ================================================
// 0xefd8: WORD 'UNK_0xefda' codep=0x1d29 parp=0xefda
// ================================================
// 0xefda: db 0x02 0x01 0x16 0x1b 0x00 '     '

// ================================================
// 0xefdf: WORD 'UNK_0xefe1' codep=0x1d29 parp=0xefe1
// ================================================
// 0xefe1: db 0x3a 0x20 ': '

// ================================================
// 0xefe3: WORD 'UNK_0xefe5' codep=0x1d29 parp=0xefe5
// ================================================
// 0xefe5: db 0x3a 0x20 ': '

// ================================================
// 0xefe7: WORD 'UNK_0xefe9' codep=0x224c parp=0xefe9 params=1 returns=0
// ================================================

void UNK_0xefe9() // UNK_0xefe9
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x00ff);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push((Read16(Pop())&0xFF)==1?1:0); //  C@ 1 =
    if (Pop() != 0)
    {
      Push(pp_UNK_0xefe1); // UNK_0xefe1
      ON_3(); // ON_3
    } else
    {
      Push(pp_UNK_0xefe5); // UNK_0xefe5
      ON_3(); // ON_3
    }
    Push(Read16(regsp)); // DUP
    UNK_0xef17(); // UNK_0xef17
    UNK_0xef31(); // UNK_0xef31
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      a = Pop(); // >R
      Push(Pop() + 0x0071); //  0x0071 +
      Push(a + 0x007f); // R> 0x007f +
      BEEPON(); // BEEPON
      LPLOT(); // LPLOT
      BEEPOFF(); // BEEPOFF
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf041: WORD 'UNK_0xf043' codep=0x224c parp=0xf043 params=1 returns=3
// ================================================

void UNK_0xf043() // UNK_0xf043
{
  Push(0x0071);
  Push(0x00b5);
  POS_dot_(); // POS.
  Push(0x0037);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(0x0029);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  GetColor(GREY1);
  GetColor(GREY1);
  GetColor(VIOLET);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x0019);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(Pop() + 1); //  1+
  _1_dot_5_at_(); // 1.5@
  VA_gt_BUF(); // VA>BUF
  PAD(); // PAD
  OVER(); // OVER
  Push(Read16(Pop()) + 2); //  @ 2+
  CMOVE(); // CMOVE
  GetDS(); // @DS
  PAD(); // PAD
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(0xbeb2); // probable '.EGARUNBIT'
  } else
  {
    Push(0xbe8a); // probable '.RUNBIT'
  }
  MODULE(); // MODULE
}


// ================================================
// 0xf09b: WORD 'UNK_0xf09d' codep=0x224c parp=0xf09d
// ================================================

void UNK_0xf09d() // UNK_0xf09d
{
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  LoadData(ELEM_dash_NAME); // from 'ELEMENT'
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAILING(); // -XTRAILING
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf0bb: WORD 'UNK_0xf0bd' codep=0x224c parp=0xf0bd params=2 returns=0
// ================================================

void UNK_0xf0bd() // UNK_0xf0bd
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(": ", 2); // (.")
  CTINIT(); // CTINIT
}


// ================================================
// 0xf0cc: WORD 'UNK_0xf0ce' codep=0x224c parp=0xf0ce
// ================================================

void UNK_0xf0ce() // UNK_0xf0ce
{
  UNK_0xf09d(); // UNK_0xf09d
  CTCR(); // CTCR
  Push(0x000d);
  SPACES(); // SPACES
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf0dc: WORD 'UNK_0xf0de' codep=0x224c parp=0xf0de
// ================================================

void UNK_0xf0de() // UNK_0xf0de
{
  unsigned short int i, imax;
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("ATMOSPHERE");
  UNK_0xf0bd(); // UNK_0xf0bd
  Push(Read16(pp_ATMO)); // ATMO @
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x0082);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  LoadData(UNK_0xe696); // from 'COMPOUNDS'
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+PHRASE_do_.offset); // PHRASE$<IFIELD>
  COUNT(); // COUNT
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  ICLOSE(); // ICLOSE
  SET_STR_AS_PARAM("HYDROSPHERE");
  UNK_0xf0bd(); // UNK_0xf0bd
  Push(Read16(pp_HYDRO)); // HYDRO @
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x0082);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  LoadData(UNK_0xe696); // from 'COMPOUNDS'
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+PHRASE_do_.offset); // PHRASE$<IFIELD>
  COUNT(); // COUNT
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  ICLOSE(); // ICLOSE
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  SET_STR_AS_PARAM("LITHOSPHERE");
  UNK_0xf0bd(); // UNK_0xf0bd
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    LoadData(UNK_0xe68e); // from 'PLANET'
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    UNK_0xf0ce(); // UNK_0xf0ce
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf169: WORD 'UNK_0xf16b' codep=0x224c parp=0xf16b
// ================================================

void UNK_0xf16b() // UNK_0xf16b
{
  GetColor(GREY1);
  GetColor(GREY1);
  GetColor(DK_dash_GREEN);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x0054);
  Push(0x009a);
  POS_dot_(); // POS.
  PRINT("BIO", 3); // (.")
  Push(0x0054);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("MIN", 3); // (.")
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x0093);
  POS_dot_(); // POS.
  LoadData(UNK_0xe67e); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0064);
  Push(0x00ff);
  _star__slash_(); // */
  Push(3);
  DrawR(); // .R
  Push(0x0055);
  Push(0x0085);
  POS_dot_(); // POS.
  LoadData(UNK_0xe686); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0064);
  Push(0x00ff);
  _star__slash_(); // */
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xf1d1: WORD 'UNK_0xf1d3' codep=0x224c parp=0xf1d3
// ================================================

void UNK_0xf1d3() // UNK_0xf1d3
{
  unsigned short int i, imax;
  LoadData(UNK_0xe64c); // from 'VESSEL'
  _2_at_(); // 2@
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("OBJECT CONSTITUENTS");
  UNK_0xf0bd(); // UNK_0xf0bd
  LoadData(UNK_0xe64c); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    CTCR(); // CTCR
    Push(6);
    UNK_0xf09d(); // UNK_0xf09d
  }
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    LoadData(UNK_0xe654); // from 'VESSEL'
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      CTCR(); // CTCR
      UNK_0xf09d(); // UNK_0xf09d
    }
    i++;
  } while(i<imax); // (LOOP)

  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x0fa0); Push(0x0000);
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
}


// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239 params=0 returns=0
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  GetColor(DK_dash_GREEN);
  StoreCOLOR(); // !COLOR
  Push(0x0054);
  Push(0x009a);
  POS_dot_(); // POS.
  PRINT("BIO", 3); // (.")
  Push(0x0054);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("ENERGY", 6); // (.")
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x0018?1:0); //  0x0018 =
  if (Pop() != 0)
  {
    Push(pp_UNK_0xe606); // UNK_0xe606
    OFF(); // OFF
  }
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x0093);
  POS_dot_(); // POS.
  Push(Read16(pp_UNK_0xe606) * Read16(pp_UNK_0xefe1)); // UNK_0xe606 @ UNK_0xefe1 @ *
  Push(3);
  DrawR(); // .R
  Push(0x0055);
  Push(0x0085);
  POS_dot_(); // POS.
  Push(Read16(pp_UNK_0xe606) * Read16(pp_UNK_0xefe5)); // UNK_0xe606 @ UNK_0xefe5 @ *
  Push(Read16(pp_UNK_0xefe1)); // UNK_0xefe1 @
  Push(Read16(pp_UNK_0xe606)); // UNK_0xe606 @
  Push(0x0064);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0x004b);
    Push(0x0056);
    RRND(); // RRND
    Push(0x0064);
    _star__slash_(); // */
  }
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xf2c8: WORD 'UNK_0xf2ca' codep=0x224c parp=0xf2ca
// ================================================

void UNK_0xf2ca() // UNK_0xf2ca
{
  LoadData(UNK_0xe676); // from 'PLANET'
  Push(Read16(Pop()) * 6); //  @ 6 *
  Push(0x0013);
  UNK_0xed30(); // UNK_0xed30
}


// ================================================
// 0xf2da: WORD 'UNK_0xf2dc' codep=0x224c parp=0xf2dc
// ================================================

void UNK_0xf2dc() // UNK_0xf2dc
{
  unsigned short int a, i, imax;
  Push(0x00b6);
  Push(0x006f);
  Push(0x007e);
  Push(0x009c);
  GetColor(GREY1);
  GetColor(GREY1);
  GetColor(VIOLET);
  IsMRC(); // ?MRC
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x0087);
  Push(0x009a);
  LoadData(UNK_0xe676); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(0x000a);
  _slash_(); // /
  Push(0x0019);
  MIN(); // MIN
  Push(4);
  MAX(); // MAX
  a = Pop(); // >R
  Push(a); // I
  FILLCIRC(); // FILLCIRC
  Push(a); // R>
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xefd3 + 4); // UNK_0xefd3 4 +
  C_ex_(); // C!
  Push(pp_UNK_0xefda + 4); // UNK_0xefda 4 +
  C_ex_(); // C!
  LoadData(UNK_0xe67e); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(1);
  } else
  {
    Push(0x00ff);
  }
  Push(pp_UNK_0xefd3); // UNK_0xefd3
  C_ex_(); // C!
  LoadData(UNK_0xe686); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(2);
  } else
  {
    Push(0x00ff);
  }
  Push(pp_UNK_0xefda); // UNK_0xefda
  C_ex_(); // C!
  MAX(); // MAX
  Push(Pop() * 3); //  3 *
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0096);
    MAX(); // MAX
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(pp_UNK_0xefd3); // UNK_0xefd3
      UNK_0xefe9(); // UNK_0xefe9
      Push(pp_UNK_0xefda); // UNK_0xefda
      UNK_0xefe9(); // UNK_0xefe9
      i++;
    } while(i<imax); // (LOOP)

  }
  UNK_0xf2ca(); // UNK_0xf2ca
  UNK_0xf16b(); // UNK_0xf16b
  UNK_0xf0de(); // UNK_0xf0de
}


// ================================================
// 0xf38e: WORD 'UNK_0xf390' codep=0x224c parp=0xf390
// ================================================

void UNK_0xf390() // UNK_0xf390
{
  LoadData(UNK_0xe644); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  Push(0);
  UNK_0xed30(); // UNK_0xed30
}


// ================================================
// 0xf39a: WORD 'UNK_0xf39c' codep=0x224c parp=0xf39c
// ================================================

void UNK_0xf39c() // UNK_0xf39c
{
  unsigned short int i, imax, j, jmax;
  Push(pp_UNK_0xefe1); // UNK_0xefe1
  OFF(); // OFF
  Push(pp_UNK_0xefe5); // UNK_0xefe5
  OFF(); // OFF
  GetINST_dash_SPECIES(); // @INST-SPECIES
  UNK_0xf043(); // UNK_0xf043
  Push(0x63ef+UNK_0xe65c.offset); // UNK_0xe65c<IFIELD>
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  Push(0);
  MAX(); // MAX
  Push(0x0064);
  LoadData(UNK_0xe661); // from 'VESSEL'
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  Push(1);
  MAX(); // MAX
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
  Push(pp_UNK_0xe606); // UNK_0xe606
  Store_3(); // !_3
  Push(0x0096);
  Push(Read16(pp_UNK_0xe606)); // UNK_0xe606 @
  Push(0x0064);
  _star__slash_(); // */
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    LoadData(UNK_0xe63c); // from 'VESSEL'
    Push(Pop() + 0x002a); //  0x002a +
    LoadData(UNK_0xe63c); // from 'VESSEL'

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      UNK_0xefe9(); // UNK_0xefe9
      Push(6);
      j += Pop();
    } while(j<jmax); // (/LOOP)

    i++;
  } while(i<imax); // (LOOP)

  UNK_0xf390(); // UNK_0xf390
  UNK_0xf239(); // UNK_0xf239
  UNK_0xf1d3(); // UNK_0xf1d3
}


// ================================================
// 0xf400: WORD 'UNK_0xf402' codep=0x224c parp=0xf402 params=0 returns=0
// ================================================

void UNK_0xf402() // UNK_0xf402
{
  Push2Words("NULL");
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xf40a: WORD '.READINGS' codep=0x4a4f parp=0xf418
// ================================================

void DrawREADINGS() // .READINGS
{
  switch(Pop()) // .READINGS
  {
  case 25:
    UNK_0xf39c(); // UNK_0xf39c
    break;
  case 32:
    UNK_0xf2dc(); // UNK_0xf2dc
    break;
  default:
    UNK_0xf402(); // UNK_0xf402
    break;

  }
}

// ================================================
// 0xf424: WORD '(/SENSORS)' codep=0x224c parp=0xf433 params=0 returns=0
// ================================================
// entry

void _ro__slash_SENSORS_rc_() // (/SENSORS)
{
  Push(1);
  Push(0xbdef); // probable 'OV?.EQUIP-OK'
  MODULE(); // MODULE
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  _0_gt_(); // 0>
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  Push(2);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  Push(Pop() & !Read16(pp_IsPORT)); //  ?PORT @ NOT AND
  if (Pop() == 0) return;
  Push(2);
  Push(pp__n_AUX); // #AUX
  Store_3(); // !_3
  UNK_0xeefe(); // UNK_0xeefe
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  Push(2);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(pp__ro_PLANET_rc_); // (PLANET)
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
    _1_dot_5_ex_(); // 1.5!
  } else
  {
    Push(0x0023);
    Push(0x003b);
    GetColor(RED);
    UNK_0xec36(); // UNK_0xec36
    do
    {
      UNK_0xecb4(); // UNK_0xecb4
      IsTRIG(); // ?TRIG
    } while(Pop() == 0);
    UNK_0xedd0(); // UNK_0xedd0
    Push(Read16(pp_UNK_0xec28)); // UNK_0xec28 @
    Push(Read16(pp_UNK_0xec24)); // UNK_0xec24 @
    GetColor(RED);
    UNK_0xec36(); // UNK_0xec36
  }
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    _gt_C_plus_S(); // >C+S
    GetINST_dash_CLASS(); // @INST-CLASS
    DrawREADINGS(); // .READINGS case
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("THERE'S NOTHING THERE.", 22); // (.")
  Push(0x0001); Push(0x0000);
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
}

// 0xf4e6: db 0x53 0x43 0x49 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x43 0x49 0x45 0x4e 0x43 0x45 0x20 0x4f 0x46 0x46 0x49 0x43 0x45 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x16 0x31 0x32 0x34 0x30 0x45 0x54 0x55 0xd0 0x4c 0x22 0xe5 0x8e 0x7f 0x8d 0x20 0x8e 0xbf 0x8f 0x20 0x0f 0x5d 0x17 0xc7 0x00 0x2b 0xa0 0x0b 0x35 0xfa 0x6f 0x1d 0x70 0x90 0x16 0x42 0x4c 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SCI-VOC_________________________CIENCE OFFICER----------------) 1240ETU L"         ]   +  5 o p  BLT-VOC_________________ '

