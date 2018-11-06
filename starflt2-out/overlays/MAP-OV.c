// ====== OVERLAY 'MAP-OV' ======
// store offset = 0xe340
// overlay size   = 0x1220

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE356  codep:0x7420 parp:0xe356 size:0x0003 C-string:'WE356'
//           WE35B  codep:0x7420 parp:0xe35b size:0x0003 C-string:'WE35B'
//           WE360  codep:0x7420 parp:0xe360 size:0x0003 C-string:'WE360'
//           WE365  codep:0x7420 parp:0xe365 size:0x0003 C-string:'WE365'
//           WE36A  codep:0x1d29 parp:0xe36a size:0x0002 C-string:'WE36A'
//           WE36E  codep:0x2214 parp:0xe36e size:0x0002 C-string:'WE36E'
//           WE372  codep:0x1d29 parp:0xe372 size:0x0002 C-string:'WE372'
//           WE376  codep:0x1d29 parp:0xe376 size:0x0002 C-string:'WE376'
//           WE37A  codep:0x1d29 parp:0xe37a size:0x0002 C-string:'WE37A'
//           WE37E  codep:0x1d29 parp:0xe37e size:0x0002 C-string:'WE37E'
//           WE382  codep:0x1d29 parp:0xe382 size:0x0002 C-string:'WE382'
//           WE386  codep:0x1d29 parp:0xe386 size:0x0002 C-string:'WE386'
//           WE38A  codep:0x1d29 parp:0xe38a size:0x0002 C-string:'WE38A'
//           WE38E  codep:0x1d29 parp:0xe38e size:0x0002 C-string:'WE38E'
//           WE392  codep:0x7420 parp:0xe392 size:0x0003 C-string:'WE392'
//           WE397  codep:0x7420 parp:0xe397 size:0x0003 C-string:'WE397'
//           WE39C  codep:0x7420 parp:0xe39c size:0x0003 C-string:'WE39C'
//           WE3A1  codep:0x7420 parp:0xe3a1 size:0x0003 C-string:'WE3A1'
//           WE3A6  codep:0x7420 parp:0xe3a6 size:0x0003 C-string:'WE3A6'
//           WE3AB  codep:0x7394 parp:0xe3ab size:0x0006 C-string:'WE3AB'
//           WE3B3  codep:0x1d29 parp:0xe3b3 size:0x000c C-string:'WE3B3'
//           WE3C1  codep:0x1d29 parp:0xe3c1 size:0x0002 C-string:'WE3C1'
//           WE3C5  codep:0x224c parp:0xe3c5 size:0x002c C-string:'WE3C5'
//           WE3F3  codep:0x224c parp:0xe3f3 size:0x007c C-string:'WE3F3'
//           WE471  codep:0x224c parp:0xe471 size:0x0024 C-string:'WE471'
//           WE497  codep:0x224c parp:0xe497 size:0x0012 C-string:'WE497'
//           WE4AB  codep:0x1d29 parp:0xe4ab size:0x0002 C-string:'WE4AB'
//           WE4AF  codep:0x1d29 parp:0xe4af size:0x0002 C-string:'WE4AF'
//           WE4B3  codep:0x1d29 parp:0xe4b3 size:0x0002 C-string:'WE4B3'
//           WE4B7  codep:0x1d29 parp:0xe4b7 size:0x0002 C-string:'WE4B7'
//           WE4BB  codep:0x224c parp:0xe4bb size:0x0020 C-string:'WE4BB'
//           WE4DD  codep:0x224c parp:0xe4dd size:0x0014 C-string:'WE4DD'
//           WE4F3  codep:0x224c parp:0xe4f3 size:0x003a C-string:'WE4F3'
//           WE52F  codep:0x224c parp:0xe52f size:0x0018 C-string:'WE52F'
//           WE549  codep:0x224c parp:0xe549 size:0x003a C-string:'WE549'
//           WE585  codep:0x224c parp:0xe585 size:0x00a2 C-string:'WE585'
//           WE629  codep:0x224c parp:0xe629 size:0x000a C-string:'WE629'
//           WE635  codep:0x224c parp:0xe635 size:0x00eb C-string:'WE635'
//           WE722  codep:0x224c parp:0xe722 size:0x0042 C-string:'WE722'
//           WE766  codep:0x224c parp:0xe766 size:0x004c C-string:'WE766'
//           WE7B4  codep:0x224c parp:0xe7b4 size:0x0048 C-string:'WE7B4'
//           WE7FE  codep:0x224c parp:0xe7fe size:0x004e C-string:'WE7FE'
//           WE84E  codep:0x224c parp:0xe84e size:0x0014 C-string:'WE84E'
//           WE864  codep:0x224c parp:0xe864 size:0x0036 C-string:'WE864'
//           WE89C  codep:0x224c parp:0xe89c size:0x0048 C-string:'WE89C'
//           WE8E6  codep:0x224c parp:0xe8e6 size:0x0062 C-string:'WE8E6'
//           WE94A  codep:0x224c parp:0xe94a size:0x0006 C-string:'WE94A'
//           WE952  codep:0x224c parp:0xe952 size:0x008c C-string:'WE952'
//           WE9E0  codep:0x224c parp:0xe9e0 size:0x0022 C-string:'WE9E0'
//           WEA04  codep:0x224c parp:0xea04 size:0x0034 C-string:'WEA04'
//           WEA3A  codep:0x224c parp:0xea3a size:0x0016 C-string:'WEA3A'
//           WEA52  codep:0x224c parp:0xea52 size:0x0028 C-string:'WEA52'
//           WEA7C  codep:0x224c parp:0xea7c size:0x000e C-string:'WEA7C'
//           WEA8C  codep:0x224c parp:0xea8c size:0x0042 C-string:'WEA8C'
//           WEAD0  codep:0x224c parp:0xead0 size:0x001e C-string:'WEAD0'
//           WEAF0  codep:0x224c parp:0xeaf0 size:0x0055 C-string:'WEAF0'
//           WEB47  codep:0x224c parp:0xeb47 size:0x003c C-string:'WEB47'
//           WEB85  codep:0x224c parp:0xeb85 size:0x0040 C-string:'WEB85'
//           WEBC7  codep:0x224c parp:0xebc7 size:0x0046 C-string:'WEBC7'
//           WEC0F  codep:0x224c parp:0xec0f size:0x002b C-string:'WEC0F'
//           WEC3C  codep:0x224c parp:0xec3c size:0x002a C-string:'WEC3C'
//           NOMAP  codep:0x224c parp:0xec70 size:0x0012 C-string:'NOMAP'
//           WEC84  codep:0x224c parp:0xec84 size:0x0024 C-string:'WEC84'
//           WECAA  codep:0x224c parp:0xecaa size:0x0044 C-string:'WECAA'
//           WECF0  codep:0x1d29 parp:0xecf0 size:0x0002 C-string:'WECF0'
//      FLUX-ARRAY  codep:0x1d29 parp:0xed01 size:0x007a C-string:'FLUX_dash_ARRAY'
//           WED7D  codep:0x224c parp:0xed7d size:0x000c C-string:'WED7D'
//           WED8B  codep:0x224c parp:0xed8b size:0x0006 C-string:'WED8B'
//           WED93  codep:0x224c parp:0xed93 size:0x0006 C-string:'WED93'
//           WED9B  codep:0x224c parp:0xed9b size:0x0008 C-string:'WED9B'
//           WEDA5  codep:0x224c parp:0xeda5 size:0x0008 C-string:'WEDA5'
//           WEDAF  codep:0x224c parp:0xedaf size:0x0006 C-string:'WEDAF'
//           WEDB7  codep:0x224c parp:0xedb7 size:0x001c C-string:'WEDB7'
//           WEDD5  codep:0x224c parp:0xedd5 size:0x0012 C-string:'WEDD5'
//           WEDE9  codep:0x224c parp:0xede9 size:0x0018 C-string:'WEDE9'
//           WEE03  codep:0x224c parp:0xee03 size:0x0016 C-string:'WEE03'
//           WEE1B  codep:0x224c parp:0xee1b size:0x000a C-string:'WEE1B'
//           WEE27  codep:0x224c parp:0xee27 size:0x0016 C-string:'WEE27'
//           WEE3F  codep:0x224c parp:0xee3f size:0x0010 C-string:'WEE3F'
//           WEE51  codep:0x224c parp:0xee51 size:0x005a C-string:'WEE51'
//           WEEAD  codep:0x224c parp:0xeead size:0x0008 C-string:'WEEAD'
//           WEEB7  codep:0x224c parp:0xeeb7 size:0x0018 C-string:'WEEB7'
//           WEED1  codep:0x224c parp:0xeed1 size:0x0018 C-string:'WEED1'
//           WEEEB  codep:0x224c parp:0xeeeb size:0x003c C-string:'WEEEB'
//           WEF29  codep:0x224c parp:0xef29 size:0x0050 C-string:'WEF29'
//        DO-TMAPS  codep:0x224c parp:0xef86 size:0x005a C-string:'DO_dash_TMAPS'
//           WEFE2  codep:0x224c parp:0xefe2 size:0x000a C-string:'WEFE2'
//           WEFEE  codep:0x224c parp:0xefee size:0x0006 C-string:'WEFEE'
//           WEFF6  codep:0x224c parp:0xeff6 size:0x0010 C-string:'WEFF6'
//           WF008  codep:0x224c parp:0xf008 size:0x0010 C-string:'WF008'
//           WF01A  codep:0x224c parp:0xf01a size:0x0022 C-string:'WF01A'
//      KEY>ACTION  codep:0x4b3b parp:0xf04b size:0x0010 C-string:'KEY_gt_ACTION'
//           WF05D  codep:0x224c parp:0xf05d size:0x0026 C-string:'WF05D'
//           WF085  codep:0x224c parp:0xf085 size:0x0094 C-string:'WF085'
//           WF11B  codep:0x224c parp:0xf11b size:0x0014 C-string:'WF11B'
//           WF131  codep:0x224c parp:0xf131 size:0x0020 C-string:'WF131'
//      (/STARMAP)  codep:0x224c parp:0xf160 size:0x0000 C-string:'_ro__slash_STARMAP_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int cc_NULL_dash_IC; // NULL-IC
extern const unsigned short int cc_SYS_dash_ICO; // SYS-ICO
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp__n_IN; // #IN
extern const unsigned short int pp_VIN; // VIN
extern const unsigned short int pp_VOUT; // VOUT
extern const unsigned short int pp_OIN; // OIN
extern const unsigned short int pp_OOUT; // OOUT
extern const unsigned short int pp_IsOPEN; // ?OPEN
extern const unsigned short int pp_LOCRADI; // LOCRADI
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_IINDEX; // IINDEX
extern const unsigned short int pp__star_GLOBAL; // *GLOBAL
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_BVIS; // BVIS
extern const unsigned short int pp_LVIS; // LVIS
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_TMAP; // TMAP
extern const unsigned short int pp_EYEXY; // EYEXY
extern const unsigned short int pp_NAV_dash_TIM; // NAV-TIM
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_LKEYTIM; // LKEYTIM
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_YWLD_c_YP; // YWLD:YP
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern const unsigned short int pp_LSCAN; // LSCAN
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color PINK; // PINK
extern Color ORANGE; // ORANGE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void _n_(); // #
void _n__gt_(); // #>
void _st__n_(); // <#
void DrawR(); // .R
void MS(); // MS
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _2_ex__2(); // 2!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void GetRECORD(); // @RECORD
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void ILAST(); // ILAST
void _gt_INSERT(); // >INSERT
void IEXTRAC(); // IEXTRAC
void SELECT_dash_(); // SELECT-
void IFIND(); // IFIND
void _1PIX(); // 1PIX
void _2PIX(); // 2PIX
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void RNDCLR(); // RNDCLR
void DARK(); // DARK
void LLINE(); // LLINE
void DrawCIRCLE_1(); // .CIRCLE_1
void _gt_1FONT(); // >1FONT
void SETCLIP(); // SETCLIP
void DCLIPSE(); // DCLIPSE
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SC(); // SAVE-SC
void SCR_dash_RES(); // SCR-RES
void StoreVISWIN(); // !VISWIN
void _gt_1ICONF(); // >1ICONF
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIC(); // @IC
void GetIL(); // @IL
void GetIH(); // @IH
void DrawCIRCLE_2(); // .CIRCLE_2
void POINT_gt_I(); // POINT>I
void IsICONS_dash__1(); // ?ICONS-_1
void IsICON_eq_I(); // ?ICON=I
void IsICONSI(); // ?ICONSI
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void CLICK(); // CLICK
void POLY_dash_ER(); // POLY-ER
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _0_st_(); // 0<
void TOGGLE(); // TOGGLE
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void CI(); // CI
void LPLOT(); // LPLOT
void LXPLOT(); // LXPLOT
void CLIPPER(); // CLIPPER
void BLT(); // BLT
void IsINVIS(); // ?INVIS
void WLD_gt_SCR(); // WLD>SCR


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE36A = 0xe36a; // WE36A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE372 = 0xe372; // WE372 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE376 = 0xe376; // WE376 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE37A = 0xe37a; // WE37A size: 2
// {0x18, 0x01}

const unsigned short int pp_WE37E = 0xe37e; // WE37E size: 2
// {0x48, 0x02}

const unsigned short int pp_WE382 = 0xe382; // WE382 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE386 = 0xe386; // WE386 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE38A = 0xe38a; // WE38A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE38E = 0xe38e; // WE38E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE3B3 = 0xe3b3; // WE3B3 size: 12
// {0x20, 0x10, 0x81, 0x40, 0x3b, 0x02, 0x10, 0x88, 0x40, 0x20, 0x00, 0x81}

const unsigned short int pp_WE3C1 = 0xe3c1; // WE3C1 size: 2
// {0x80, 0xf7}

const unsigned short int pp_WE4AB = 0xe4ab; // WE4AB size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4AF = 0xe4af; // WE4AF size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4B3 = 0xe4b3; // WE4B3 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4B7 = 0xe4b7; // WE4B7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WECF0 = 0xecf0; // WECF0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_FLUX_dash_ARRAY = 0xed01; // FLUX-ARRAY size: 122
// {0x00, 0x00, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x1b, 0x06, 0x44, 0x45, 0x42, 0x52, 0x49, 0x53, 0x90, 0x16, 0x00, 0x00, 0x89, 0x28, 0x2e, 0x56, 0x45, 0x53, 0x53, 0x45, 0x4c, 0xa9, 0x3b, 0x4b, 0x04, 0x00, 0xfc, 0xec, 0x1d, 0x00, 0xef, 0xec, 0x20, 0x00, 0xef, 0xec, 0x32, 0x38, 0x30, 0x34, 0x14, 0x00, 0xef, 0xec, 0x4c, 0x22, 0x34, 0x75, 0x20, 0xed, 0x90, 0x16, 0x4c, 0x22, 0xdc, 0x1b, 0x06, 0x44, 0x45, 0x42, 0x52, 0x49, 0x53, 0x90, 0x16, 0x4c, 0x22, 0xdc, 0x1b, 0x06, 0x50, 0x4c, 0x41, 0x4e, 0x45, 0x54, 0x90, 0x16, 0x4c, 0x22, 0x0c, 0x50, 0x9d, 0x86, 0xdc, 0x1b, 0x12, 0x53, 0x54, 0x45, 0x4c, 0x4c, 0x41, 0x52, 0x20, 0x50, 0x41, 0x52, 0x41, 0x4d, 0x45, 0x54, 0x45, 0x52, 0x53, 0xd2, 0x9f, 0x90, 0x16, 0x16, 0xed, 0x89, 0x28}


const unsigned short int cc_WE36E = 0xe36e; // WE36E


// 0xe352: db 0xf0 0x00 '  '

// ================================================
// 0xe354: WORD 'WE356' codep=0x7420 parp=0xe356
// ================================================
IFieldType WE356 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xe359: WORD 'WE35B' codep=0x7420 parp=0xe35b
// ================================================
IFieldType WE35B = {ENCOUNTERIDX, 0x1c, 0x01};

// ================================================
// 0xe35e: WORD 'WE360' codep=0x7420 parp=0xe360
// ================================================
IFieldType WE360 = {ENCOUNTERIDX, 0x1d, 0x01};

// ================================================
// 0xe363: WORD 'WE365' codep=0x7420 parp=0xe365
// ================================================
IFieldType WE365 = {ENCOUNTERIDX, 0x1a, 0x01};

// ================================================
// 0xe368: WORD 'WE36A' codep=0x1d29 parp=0xe36a
// ================================================
// 0xe36a: db 0x3a 0x20 ': '

// ================================================
// 0xe36c: WORD 'WE36E' codep=0x2214 parp=0xe36e
// ================================================
// 0xe36e: dw 0x00a8

// ================================================
// 0xe370: WORD 'WE372' codep=0x1d29 parp=0xe372
// ================================================
// 0xe372: db 0x3a 0x20 ': '

// ================================================
// 0xe374: WORD 'WE376' codep=0x1d29 parp=0xe376
// ================================================
// 0xe376: db 0x3a 0x20 ': '

// ================================================
// 0xe378: WORD 'WE37A' codep=0x1d29 parp=0xe37a
// ================================================
// 0xe37a: db 0x18 0x01 '  '

// ================================================
// 0xe37c: WORD 'WE37E' codep=0x1d29 parp=0xe37e
// ================================================
// 0xe37e: db 0x48 0x02 'H '

// ================================================
// 0xe380: WORD 'WE382' codep=0x1d29 parp=0xe382
// ================================================
// 0xe382: db 0x3a 0x20 ': '

// ================================================
// 0xe384: WORD 'WE386' codep=0x1d29 parp=0xe386
// ================================================
// 0xe386: db 0x3a 0x20 ': '

// ================================================
// 0xe388: WORD 'WE38A' codep=0x1d29 parp=0xe38a
// ================================================
// 0xe38a: db 0x3a 0x20 ': '

// ================================================
// 0xe38c: WORD 'WE38E' codep=0x1d29 parp=0xe38e
// ================================================
// 0xe38e: db 0x3a 0x20 ': '

// ================================================
// 0xe390: WORD 'WE392' codep=0x7420 parp=0xe392
// ================================================
IFieldType WE392 = {FLUX_NODEIDX, 0x0b, 0x02};

// ================================================
// 0xe395: WORD 'WE397' codep=0x7420 parp=0xe397
// ================================================
IFieldType WE397 = {FLUX_NODEIDX, 0x11, 0x02};

// ================================================
// 0xe39a: WORD 'WE39C' codep=0x7420 parp=0xe39c
// ================================================
IFieldType WE39C = {NEBULAIDX, 0x11, 0x01};

// ================================================
// 0xe39f: WORD 'WE3A1' codep=0x7420 parp=0xe3a1
// ================================================
IFieldType WE3A1 = {STARSYSTEMIDX, 0x0b, 0x01};

// ================================================
// 0xe3a4: WORD 'WE3A6' codep=0x7420 parp=0xe3a6
// ================================================
IFieldType WE3A6 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xe3a9: WORD 'WE3AB' codep=0x7394 parp=0xe3ab
// ================================================
// orphan
LoadDataType WE3AB = {TRADE_MAPIDX, 0x14, 0x04, 0x74, 0x6d54};

// ================================================
// 0xe3b1: WORD 'WE3B3' codep=0x1d29 parp=0xe3b3
// ================================================
// 0xe3b3: db 0x20 0x10 0x81 0x40 0x3b 0x02 0x10 0x88 0x40 0x20 0x00 0x81 '   @;   @   '

// ================================================
// 0xe3bf: WORD 'WE3C1' codep=0x1d29 parp=0xe3c1
// ================================================
// 0xe3c1: db 0x80 0xf7 '  '

// ================================================
// 0xe3c3: WORD 'WE3C5' codep=0x224c parp=0xe3c5 params=0 returns=1
// ================================================

void WE3C5() // WE3C5
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(regsp)); // DUP
  Push(pp_WE382); // WE382
  Store_2(); // !_2
  Push(pp_WE37A); // WE37A
  Store_2(); // !_2
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(8);
  _slash_(); // /
  Push(Pop() * 8); //  8 *
  Push(Read16(regsp)); // DUP
  Push(pp_WE386); // WE386
  Store_2(); // !_2
  Push(pp_WE37E); // WE37E
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe3f1: WORD 'WE3F3' codep=0x224c parp=0xe3f3 params=0 returns=0
// ================================================

void WE3F3() // WE3F3
{
  Push(Read16(pp_WE37A) - 0x0044 * Read16(cc__star_MAPSCA)); // WE37A @ 0x0044 *MAPSCA * -
  Push(0);
  MAX(); // MAX
  Push(Read16(cc__star_MAPSCA) * 0x006f); // *MAPSCA 0x006f *
  MIN(); // MIN
  Push(Read16(pp_WE37E) - 0x0029 * Read16(cc__star_MAPSCA)); // WE37E @ 0x0029 *MAPSCA * -
  Push(0);
  MAX(); // MAX
  Push(Read16(cc__star_MAPSCA) * 0x0089); // *MAPSCA 0x0089 *
  MIN(); // MIN
  OVER(); // OVER
  Push(Pop() + 0x008b * Read16(cc__star_MAPSCA)); //  0x008b *MAPSCA * +
  OVER(); // OVER
  Push(Pop() + 0x0053 * Read16(cc__star_MAPSCA)); //  0x0053 *MAPSCA * +
  StoreVISWIN(); // !VISWIN
  Push(0x00c8 * Read16(cc__star_MAPSCA)); // 0x00c8 *MAPSCA *
  Push(pp_LOCRADI); // LOCRADI
  Store_2(); // !_2
  Push(Read16(pp_WE37A)); // WE37A @
  Push(pp_XABS); // XABS
  Store_2(); // !_2
  Push(Read16(pp_WE37E)); // WE37E @
  Push(pp_YABS); // YABS
  Store_2(); // !_2
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe46f: WORD 'WE471' codep=0x224c parp=0xe471
// ================================================

void WE471() // WE471
{
  Push(0x00c7);
  Push(0x009f);
  Push(0x0021);
  Push(0x0014);
  SETCLIP(); // SETCLIP
  Push(0x0014);
  Push(pp_XLLDEST); // XLLDEST
  Store_2(); // !_2
  Push(0x0021);
  Push(pp_YLLDEST); // YLLDEST
  Store_2(); // !_2
}


// ================================================
// 0xe495: WORD 'WE497' codep=0x224c parp=0xe497 params=0 returns=0
// ================================================

void WE497() // WE497
{
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  Push(2);
  Push(pp_YWLD_c_YP); // YWLD:YP
  _2_ex__2(); // 2!_2
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  Push(1);
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xe4a9: WORD 'WE4AB' codep=0x1d29 parp=0xe4ab
// ================================================
// 0xe4ab: db 0x3a 0x20 ': '

// ================================================
// 0xe4ad: WORD 'WE4AF' codep=0x1d29 parp=0xe4af
// ================================================
// 0xe4af: db 0x3a 0x20 ': '

// ================================================
// 0xe4b1: WORD 'WE4B3' codep=0x1d29 parp=0xe4b3
// ================================================
// 0xe4b3: db 0x3a 0x20 ': '

// ================================================
// 0xe4b5: WORD 'WE4B7' codep=0x1d29 parp=0xe4b7
// ================================================
// 0xe4b7: db 0x3a 0x20 ': '

// ================================================
// 0xe4b9: WORD 'WE4BB' codep=0x224c parp=0xe4bb params=0 returns=1
// ================================================

void WE4BB() // WE4BB
{
  Push(Read16(pp_WE4B3)); // WE4B3 @
  if (Pop() != 0)
  {
    Push(-1);
    return;
  }
  Push(Read16(pp_WE4B7)); // WE4B7 @
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xe4db: WORD 'WE4DD' codep=0x224c parp=0xe4dd
// ================================================

void WE4DD() // WE4DD
{
  WE4BB(); // WE4BB
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    GetColor(WHITE);
  } else
  {
    GetColor(PINK);
  }
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe4f1: WORD 'WE4F3' codep=0x224c parp=0xe4f3 params=2 returns=0
// ================================================

void WE4F3() // WE4F3
{
  SWAP(); // SWAP
  Push(Pop() - 0x0014); //  0x0014 -
  SWAP(); // SWAP
  Push(Pop() + 0x0038); //  0x0038 +
  POS_dot_(); // POS.
  WE4BB(); // WE4BB
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    PRINT("FLUX-NODES", 10); // (.")
    return;
  }
  PRINT("ENCOUNTERS", 10); // (.")
}


// ================================================
// 0xe52d: WORD 'WE52F' codep=0x224c parp=0xe52f params=0 returns=1
// ================================================

void WE52F() // WE52F
{
  Push(Read16(pp_WE4B3) & Read16(pp_WE4AB) | Read16(pp_WE4B7) & Read16(pp_WE4AF)); // WE4B3 @ WE4AB @ AND WE4B7 @ WE4AF @ AND OR
}


// ================================================
// 0xe547: WORD 'WE549' codep=0x224c parp=0xe549 params=0 returns=0
// ================================================

void WE549() // WE549
{
  WE52F(); // WE52F
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _1PIX(); // 1PIX
  if (Pop() != 0)
  {
    WE471(); // WE471
    Push(Read16(pp_WE382)); // WE382 @
    Push(Read16(pp_WE386)); // WE386 @
    WLD_gt_SCR(); // WLD>SCR
    WE4BB(); // WE4BB
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      GetColor(GREY1);
    } else
    {
      GetColor(PINK);
    }
    StoreCOLOR(); // !COLOR
    _2DUP(); // 2DUP
    Push(0x0032);
    DrawCIRCLE_1(); // .CIRCLE_1
    WE4F3(); // WE4F3
    DCLIPSE(); // DCLIPSE
  }
  _2PIX(); // 2PIX
}


// ================================================
// 0xe583: WORD 'WE585' codep=0x224c parp=0xe585
// ================================================

void WE585() // WE585
{
  unsigned short int i, imax, j, jmax, k, kmax, l, lmax;
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    GetColor(WHITE);
  } else
  {
    GetColor(GREY2);
  }
  StoreCOLOR(); // !COLOR
  Push(0x0011);
  Push(0x00c7);
  Push(0x0011);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x00c7);
  Push(0x002b);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0012);
    Push(i); // I
    LPLOT(); // LPLOT
    Push(0x000a);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(0x00c7);
  Push(0x0053);

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    Push(0x0013);
    Push(j); // I
    LPLOT(); // LPLOT
    Push(0x0032);
    int step = Pop();
    j += step;
    if (((step>=0) && (j>=jmax)) || ((step<0) && (j<=jmax))) break;
  } while(1); // (+LOOP)

  Push(0x009c);
  Push(0x001d);
  Push(0x0011);
  Push(0x001d);
  LLINE(); // LLINE
  Push(0x009c);
  Push(0x0019);

  k = Pop();
  kmax = Pop();
  do // (DO)
  {
    Push(k); // I
    Push(0x001e);
    Push(k); // I
    Push(0x001f);
    LLINE(); // LLINE
    Push(5);
    int step = Pop();
    k += step;
    if (((step>=0) && (k>=kmax)) || ((step<0) && (k<=kmax))) break;
  } while(1); // (+LOOP)

  Push(0x009c);
  Push(0x002d);

  l = Pop();
  lmax = Pop();
  do // (DO)
  {
    Push(l); // I
    Push(0x0020);
    LPLOT(); // LPLOT
    Push(0x0019);
    int step = Pop();
    l += step;
    if (((step>=0) && (l>=lmax)) || ((step<0) && (l<=lmax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe627: WORD 'WE629' codep=0x224c parp=0xe629
// ================================================

void WE629() // WE629
{
  GetColor(GREY1);
  GetColor(GREY1);
  GetColor(LT_dash_BLUE);
  IsMRC(); // ?MRC
}


// ================================================
// 0xe633: WORD 'WE635' codep=0x224c parp=0xe635
// ================================================

void WE635() // WE635
{
  Push(0x0013);
  Push(4);
  Push(1);
  Push(0x009b);
  WE629(); // WE629
  POLY_dash_WI(); // POLY-WI
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  Push(0x009b);
  Push(0);
  Push(5);
  Push(0);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x0013);
  Push(5);
  Push(0x0013);
  LLINE(); // LLINE
  Push(0x0017);
  Push(9);
  Push(0x0017);
  Push(0);
  LLINE(); // LLINE
  Push(0x0044);
  Push(9);
  Push(0x0044);
  Push(0);
  LLINE(); // LLINE
  Push(4);
  Push(0x0013);
  Push(4);
  Push(0);
  LLINE(); // LLINE
  Push(0x002b);
  Push(0x0013);
  Push(0x002b);
  Push(0);
  LLINE(); // LLINE
  Push(0x005d);
  Push(0x0013);
  Push(0x005d);
  Push(0);
  LLINE(); // LLINE
  Push(0x0083);
  Push(0x0013);
  Push(0x0083);
  Push(0);
  LLINE(); // LLINE
  Push(0x009c);
  Push(0x0013);
  Push(0x009c);
  Push(0);
  LLINE(); // LLINE
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(9);
  Push(0x0010);
  POS_dot_(); // POS.
  PRINT("POSITION", 8); // (.")
  Push(0x002f);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("DESTINATION", 11); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("DISTANCE", 8); // (.")
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("FUEL", 4); // (.")
}


// ================================================
// 0xe720: WORD 'WE722' codep=0x224c parp=0xe722
// ================================================

void WE722() // WE722
{
  Push(Read16(pp_WE37A)); // WE37A @
  Push(Read16(pp_WE37E)); // WE37E @
  WLD_gt_SCR(); // WLD>SCR
  Push(Pop() + 6); //  6 +
  SWAP(); // SWAP
  Push(Pop() - 3); //  3 -
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x000d);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(7);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(pp_WE3B3); // WE3B3
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  GetColor(ORANGE);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xe764: WORD 'WE766' codep=0x224c parp=0xe766
// ================================================

void WE766() // WE766
{
  Push(Read16(pp_WE382)); // WE382 @
  Push(Read16(pp_WE386)); // WE386 @
  _2DUP(); // 2DUP
  IsINVIS(); // ?INVIS
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  if (Pop() != 0)
  {
    WLD_gt_SCR(); // WLD>SCR
    Push(Pop() + 1); //  1+
    SWAP(); // SWAP
    Push(Pop() - 1); //  1-
    SWAP(); // SWAP
    POS_dot_(); // POS.
    Push(3);
    Push(pp_LBLT); // LBLT
    Store_2(); // !_2
    Push(3);
    Push(pp_WBLT); // WBLT
    Store_2(); // !_2
    Push(pp_WE3C1); // WE3C1
    Push(pp_ABLT); // ABLT
    Store_2(); // !_2
    GetColor(BLUE);
    StoreCOLOR(); // !COLOR
    Push(pp_XORMODE); // XORMODE
    _099(); // 099
    BLT(); // BLT
    Push(pp_XORMODE); // XORMODE
    ON_2(); // ON_2
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  WE549(); // WE549
}


// ================================================
// 0xe7b2: WORD 'WE7B4' codep=0x224c parp=0xe7b4
// ================================================

void WE7B4() // WE7B4
{
  unsigned short int i, imax;
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x009c);
  Push(0x0028);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(0x001a);
    POS_dot_(); // POS.
    Push(3);
    GetColor(BLACK);
    POLY_dash_ER(); // POLY-ER
    Push(Read16(pp_LVIS)); // LVIS @
    Push(Read16(cc__star_MAPSCA)); // *MAPSCA
    _slash_(); // /
    Push((Pop() + i) - 0x000f); //  I + 0x000f -
    Push(0);
    _st__n_(); // <#
    _n_(); // #
    _n_(); // #
    _n_(); // #
    _n__gt_(); // #>
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x0019);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe7fc: WORD 'WE7FE' codep=0x224c parp=0xe7fe
// ================================================

void WE7FE() // WE7FE
{
  unsigned short int i, imax;
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x00c7);
  Push(0x0055);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(4);
    Push(i); // I
    POS_dot_(); // POS.
    Push(3);
    GetColor(BLACK);
    POLY_dash_ER(); // POLY-ER
    Push(1);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    Push(Read16(pp_BVIS)); // BVIS @
    Push(Read16(cc__star_MAPSCA)); // *MAPSCA
    _slash_(); // /
    Push(Pop() + (i - 0x0023 >> 1)); //  I 0x0023 - 2/ +
    Push(0);
    _st__n_(); // <#
    _n_(); // #
    _n_(); // #
    _n_(); // #
    _n__gt_(); // #>
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x0032);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe84c: WORD 'WE84E' codep=0x224c parp=0xe84e params=0 returns=1
// ================================================

void WE84E() // WE84E
{
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe862: WORD 'WE864' codep=0x224c parp=0xe864 params=0 returns=2
// ================================================

void WE864() // WE864
{
  Push2Words("*EYE");
  IsICON_eq_I(); // ?ICON=I
  if (Pop() == 0) return;
  POINT_gt_I(); // POINT>I
  GetIX(); // @IX
  GetIY(); // @IY
  IsINVIS(); // ?INVIS
  if (Pop() == 0) return;
  RNDCLR(); // RNDCLR
  GetIX(); // @IX
  GetIY(); // @IY
  WLD_gt_SCR(); // WLD>SCR
  WE84E(); // WE84E
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop() + Pop()); // +
  } else
  {
    WE84E(); // WE84E
    ROT(); // ROT
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
  }
  LPLOT(); // LPLOT
}


// ================================================
// 0xe89a: WORD 'WE89C' codep=0x224c parp=0xe89c
// ================================================

void WE89C() // WE89C
{
  unsigned short int i, imax;
  Push(Read16(cc_NULL_dash_IC)); // NULL-IC
  Push(Read16(cc_SYS_dash_ICO)); // SYS-ICO
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONSI(); // ?ICONSI
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    GetIL(); // @IL
    GetIH(); // @IH
    _gt_C_plus_S(); // >C+S
    GetINST_dash_C(); // @INST-C
    Push(Pop()==0x002e?1:0); //  0x002e =
    if (Pop() != 0)
    {
      Push(!Read16(pp_PAST) | Read16(0x65e1+WE39C.offset)&0xFF); // PAST @ NOT WE39C<IFIELD> C@ OR
    } else
    {
      Push(1);
    }
    if (Pop() != 0)
    {
      DrawCIRCLE_2(); // .CIRCLE_2
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe8e4: WORD 'WE8E6' codep=0x224c parp=0xe8e6
// ================================================

void WE8E6() // WE8E6
{
  unsigned short int i, imax;
  _1PIX(); // 1PIX
  Push(Read16(cc_SYS_dash_ICO) - 1); // SYS-ICO 1-
  Push(Read16(cc_SYS_dash_ICO) + 1); // SYS-ICO 1+
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONSI(); // ?ICONSI
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      POINT_gt_I(); // POINT>I
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      GetINST_dash_C(); // @INST-C
      Push(Pop()==0x0017?1:0); //  0x0017 =
      if (Pop() != 0)
      {
        Push(Read16(pp_PAST) | Read16(0x65e1+WE3A1.offset)&0xFF); // PAST @ WE3A1<IFIELD> C@ OR
      } else
      {
        Push(1);
      }
      if (Pop() != 0)
      {
        GetIC(); // @IC
        StoreCOLOR(); // !COLOR
        GetIX(); // @IX
        GetIY(); // @IY
        IsINVIS(); // ?INVIS
        if (Pop() != 0)
        {
          GetIX(); // @IX
          GetIY(); // @IY
          WLD_gt_SCR(); // WLD>SCR
          LPLOT(); // LPLOT
        }
      }
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

  }
  _2PIX(); // 2PIX
}


// ================================================
// 0xe948: WORD 'WE94A' codep=0x224c parp=0xe94a params=1 returns=1
// ================================================

void WE94A() // WE94A
{
  Push(Pop() + pp_LSCAN); //  LSCAN +
}


// ================================================
// 0xe950: WORD 'WE952' codep=0x224c parp=0xe952
// ================================================

void WE952() // WE952
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_st_(); // D<
  if (Pop() != 0)
  {
    _2SWAP(); // 2SWAP
  }
  Push(0);
  WE94A(); // WE94A
  Store_2(); // !_2
  Push(2);
  WE94A(); // WE94A
  Store_2(); // !_2
  Push(4);
  WE94A(); // WE94A
  Store_2(); // !_2
  Push(6);
  WE94A(); // WE94A
  Store_2(); // !_2
  Push(2);
  Push(pp__n_IN); // #IN
  Store_2(); // !_2
  Push(0);
  WE94A(); // WE94A
  Push(pp_VIN); // VIN
  Store_2(); // !_2
  Push(0x0014);
  WE94A(); // WE94A
  Push(pp_VOUT); // VOUT
  Store_2(); // !_2
  Push(0x0028);
  WE94A(); // WE94A
  Push(pp_OIN); // OIN
  Store_2(); // !_2
  Push(0x003c);
  WE94A(); // WE94A
  Push(pp_OOUT); // OOUT
  Store_2(); // !_2
  Push(pp_IsOPEN); // ?OPEN
  ON_2(); // ON_2
  CLIPPER(); // CLIPPER
  Push(Read16(pp__n_IN)); // #IN @
  Push(pp_IsOPEN); // ?OPEN
  _099(); // 099
  if (Pop() != 0)
  {
    Push(Read16(pp_VIN)); // VIN @
    a = Pop(); // >R
    Push(Read16(a + 2)); // I 2+ @
    Push(Read16(a)); // I @
    Push(Read16(a + 6)); // I 6 + @
    Push(Read16(a + 4)); // R> 4 + @
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xe9de: WORD 'WE9E0' codep=0x224c parp=0xe9e0
// ================================================

void WE9E0() // WE9E0
{
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  WLD_gt_SCR(); // WLD>SCR
  Push(Read16(0x65e1+WE392.offset)); // WE392<IFIELD> @
  Push(Read16(0x65e1+WE397.offset)); // WE397<IFIELD> @
  WLD_gt_SCR(); // WLD>SCR
  ICLOSE(); // ICLOSE
  WE952(); // WE952
  if (Pop() == 0) return;
  LLINE(); // LLINE
}


// ================================================
// 0xea02: WORD 'WEA04' codep=0x224c parp=0xea04
// ================================================

void WEA04() // WEA04
{
  unsigned short int i, imax;
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  _1PIX(); // 1PIX
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_I(); // POINT>I
    GetID(); // @ID
    Push(Pop()==0x00ff?1:0); //  0x00ff =
    GetIC(); // @IC
    Push(Pop()==3?1:0); //  3 =
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      WE9E0(); // WE9E0
    }
    i++;
  } while(i<imax); // (LOOP)

  _2PIX(); // 2PIX
}


// ================================================
// 0xea38: WORD 'WEA3A' codep=0x224c parp=0xea3a
// ================================================

void WEA3A() // WEA3A
{
  Push(0x00c7);
  Push(0x0014);
  Push(0x0021);
  Push(0x009f);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xea50: WORD 'WEA52' codep=0x224c parp=0xea52
// ================================================

void WEA52() // WEA52
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  WE471(); // WE471
  WEA3A(); // WEA3A
  WE8E6(); // WE8E6
  WE89C(); // WE89C
  WEA04(); // WEA04
  WE864(); // WE864
  WE766(); // WE766
  Push(pp_TMAP); // TMAP
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(0xb834); // '.TMAP'
    MODULE(); // MODULE
  }
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xea7a: WORD 'WEA7C' codep=0x224c parp=0xea7c
// ================================================

void WEA7C() // WEA7C
{
  WE3F3(); // WE3F3
  WE471(); // WE471
  WEA52(); // WEA52
  DCLIPSE(); // DCLIPSE
  WE7B4(); // WE7B4
  WE7FE(); // WE7FE
}


// ================================================
// 0xea8a: WORD 'WEA8C' codep=0x224c parp=0xea8c
// ================================================

void WEA8C() // WEA8C
{
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x0033);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE629(); // WE629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_WE37A) + 3); // WE37A @ 3+
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(3);
  DrawR(); // .R
  Push(0x004b);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE629(); // WE629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_WE37E) + 5); // WE37E @ 5 +
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xeace: WORD 'WEAD0' codep=0x224c parp=0xead0
// ================================================

void WEAD0() // WEAD0
{
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x006b);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE629(); // WE629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_WE38A)); // WE38A @
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xeaee: WORD 'WEAF0' codep=0x224c parp=0xeaf0
// ================================================

void WEAF0() // WEAF0
{
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x008a);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE629(); // WE629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_WE38A) * Read16(cc__star_MAPSCA)); // WE38A @ *MAPSCA *
  Push(Read16(pp__dash_END)); // -END @
  Push(0x0064);
  _star__slash_(); // */
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(3);
    DrawR(); // .R
    return;
  }
  Push(Read16(pp_WE38A)); // WE38A @
  if (Pop() != 0)
  {
    Push(0x008e);
    Push(7);
    POS_dot_(); // POS.
    PRINT("<1", 2); // (.")
    return;
  }
  Push(0);
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xeb45: WORD 'WEB47' codep=0x224c parp=0xeb47
// ================================================

void WEB47() // WEB47
{
  Push(Read16(pp_WE382) - Read16(pp_WE37A)); // WE382 @ WE37A @ -
  ABS(); // ABS
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(Read16(pp_WE386) - Read16(pp_WE37E)); // WE386 @ WE37E @ -
  ABS(); // ABS
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_WE38A); // WE38A
  Store_2(); // !_2
  WEA8C(); // WEA8C
  WEAD0(); // WEAD0
  WEAF0(); // WEAF0
}


// ================================================
// 0xeb83: WORD 'WEB85' codep=0x224c parp=0xeb85
// ================================================

void WEB85() // WEB85
{
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(9);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE629(); // WE629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_WE382) + 3); // WE382 @ 3+
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(3);
  DrawR(); // .R
  Push(0x001d);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE629(); // WE629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_WE386) + 5); // WE386 @ 5 +
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xebc5: WORD 'WEBC7' codep=0x224c parp=0xebc7 params=0 returns=0
// ================================================

void WEBC7() // WEBC7
{
  Push(Read16(pp_WE37A) + Read16(pp_WE372)); // WE37A @ WE372 @ +
  Push(0);
  MAX(); // MAX
  Push(0x00f9 * Read16(cc__star_MAPSCA)); // 0x00f9 *MAPSCA *
  MIN(); // MIN
  Push(Pop() - Read16(pp_WE37A)); //  WE37A @ -
  Push(pp_WE372); // WE372
  Store_2(); // !_2
  Push(Read16(pp_WE37E) + Read16(pp_WE376)); // WE37E @ WE376 @ +
  Push(0);
  MAX(); // MAX
  Push(0x00db * Read16(cc__star_MAPSCA)); // 0x00db *MAPSCA *
  MIN(); // MIN
  Push(Pop() - Read16(pp_WE37E)); //  WE37E @ -
  Push(pp_WE376); // WE376
  Store_2(); // !_2
}


// ================================================
// 0xec0d: WORD 'WEC0F' codep=0x224c parp=0xec0f
// ================================================

void WEC0F() // WEC0F
{
  SET_STR_AS_PARAM("I CAN'T GET OUR BEARINGS, COMMANDER.");
  DrawTTY(); // .TTY
}


// ================================================
// 0xec3a: WORD 'WEC3C' codep=0x224c parp=0xec3c
// ================================================

void WEC3C() // WEC3C
{
  SET_STR_AS_PARAM("WE'RE NOT IN HYPERSPACE, COMMANDER.");
  DrawTTY(); // .TTY
}


// ================================================
// 0xec66: WORD 'NOMAP' codep=0x224c parp=0xec70
// ================================================

void NOMAP() // NOMAP
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  if (Pop() != 0)
  {
    WEC3C(); // WEC3C
    return;
  }
  WEC0F(); // WEC0F
}


// ================================================
// 0xec82: WORD 'WEC84' codep=0x224c parp=0xec84 params=0 returns=0
// ================================================

void WEC84() // WEC84
{
  Push(9);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  Push(pp_WE4AB); // WE4AB
  Store_2(); // !_2
  Push(0x000a);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  Push(pp_WE4AF); // WE4AF
  Store_2(); // !_2
  Push(pp_WE4B3); // WE4B3
  _099(); // 099
  Push(pp_WE4B7); // WE4B7
  _099(); // 099
}


// ================================================
// 0xeca8: WORD 'WECAA' codep=0x224c parp=0xecaa params=0 returns=1
// ================================================

void WECAA() // WECAA
{
  unsigned short int a, b;
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(pp_WE382) + Read16(cc_WE36E)); // WE382 @ WE36E +
  OVER(); // OVER
  _gt_(); // >
  a = Pop(); // >R
  Push(Read16(pp_WE382) - Read16(cc_WE36E)); // WE382 @ WE36E -
  _gt_(); // >
  Push(Pop() & a); //  R> AND
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(Read16(pp_WE386) + Read16(cc_WE36E)); // WE386 @ WE36E +
  OVER(); // OVER
  _gt_(); // >
  b = Pop(); // >R
  Push(Read16(pp_WE386) - Read16(cc_WE36E)); // WE386 @ WE36E -
  _gt_(); // >
  Push(Pop() & b); //  R> AND
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xecee: WORD 'WECF0' codep=0x1d29 parp=0xecf0
// ================================================
// 0xecf0: db 0x3a 0x20 ': '

// ================================================
// 0xecf2: WORD 'FLUX-ARRAY' codep=0x1d29 parp=0xed01
// ================================================
// 0xed01: db 0x00 0x00 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x1b 0x06 0x44 0x45 0x42 0x52 0x49 0x53 0x90 0x16 0x00 0x00 0x89 0x28 0x2e 0x56 0x45 0x53 0x53 0x45 0x4c 0xa9 0x3b 0x4b 0x04 0x00 0xfc 0xec 0x1d 0x00 0xef 0xec 0x20 0x00 0xef 0xec 0x32 0x38 0x30 0x34 0x14 0x00 0xef 0xec 0x4c 0x22 0x34 0x75 0x20 0xed 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x44 0x45 0x42 0x52 0x49 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x50 0x4c 0x41 0x4e 0x45 0x54 0x90 0x16 0x4c 0x22 0x0c 0x50 0x9d 0x86 0xdc 0x1b 0x12 0x53 0x54 0x45 0x4c 0x4c 0x41 0x52 0x20 0x50 0x41 0x52 0x41 0x4d 0x45 0x54 0x45 0x52 0x53 0xd2 0x9f 0x90 0x16 0x16 0xed 0x89 0x28 '   ALLOT   DEBRIS     (.VESSEL ;K            2804    L"4u    L"   DEBRIS  L"   PLANET  L" P     STELLAR PARAMETERS       ('

// ================================================
// 0xed7b: WORD 'WED7D' codep=0x224c parp=0xed7d params=0 returns=0
// ================================================

void WED7D() // WED7D
{
  Push(pp_FLUX_dash_ARRAY); // FLUX-ARRAY
  Push(0x007a);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0xed89: WORD 'WED8B' codep=0x224c parp=0xed8b params=1 returns=0
// ================================================

void WED8B() // WED8B
{
  Push(pp_FLUX_dash_ARRAY); // FLUX-ARRAY
  C_ex__2(); // C!_2
}


// ================================================
// 0xed91: WORD 'WED93' codep=0x224c parp=0xed93 params=0 returns=1
// ================================================

void WED93() // WED93
{
  Push(Read16(pp_FLUX_dash_ARRAY)&0xFF); // FLUX-ARRAY C@
}


// ================================================
// 0xed99: WORD 'WED9B' codep=0x224c parp=0xed9b params=0 returns=1
// ================================================

void WED9B() // WED9B
{
  Push(Read16(pp_FLUX_dash_ARRAY + 1)&0xFF); // FLUX-ARRAY 1+ C@
}


// ================================================
// 0xeda3: WORD 'WEDA5' codep=0x224c parp=0xeda5 params=1 returns=0
// ================================================

void WEDA5() // WEDA5
{
  Push(pp_FLUX_dash_ARRAY + 1); // FLUX-ARRAY 1+
  C_ex__2(); // C!_2
}


// ================================================
// 0xedad: WORD 'WEDAF' codep=0x224c parp=0xedaf params=0 returns=1
// ================================================

void WEDAF() // WEDAF
{
  Push(pp_FLUX_dash_ARRAY + 2); // FLUX-ARRAY 2+
}


// ================================================
// 0xedb5: WORD 'WEDB7' codep=0x224c parp=0xedb7 params=1 returns=2
// ================================================

void WEDB7() // WEDB7
{
  WEDAF(); // WEDAF
  Push(Pop() + Pop()); // +
  WE4BB(); // WE4BB
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(Read16(Pop())&0xFF); //  C@
    POINT_gt_I(); // POINT>I
    GetIX(); // @IX
    GetIY(); // @IY
    return;
  }
  _2_at_(); // 2@
}


// ================================================
// 0xedd3: WORD 'WEDD5' codep=0x224c parp=0xedd5 params=0 returns=0
// ================================================

void WEDD5() // WEDD5
{
  WED9B(); // WED9B
  Push(Pop() + Read16(pp_WECF0)); //  WECF0 @ +
  Push(0x0074);
  MIN(); // MIN
  WEDA5(); // WEDA5
}


// ================================================
// 0xede7: WORD 'WEDE9' codep=0x224c parp=0xede9
// ================================================

void WEDE9() // WEDE9
{
  _2DUP(); // 2DUP
  IsINVIS(); // ?INVIS
  if (Pop() != 0)
  {
    WLD_gt_SCR(); // WLD>SCR
    LXPLOT(); // LXPLOT
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xee01: WORD 'WEE03' codep=0x224c parp=0xee03 params=1 returns=2
// ================================================

void WEE03() // WEE03
{
  WED93(); // WED93
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    WED9B(); // WED9B
  }
  Push(Pop() - Read16(pp_WECF0)); //  WECF0 @ -
  WEDB7(); // WEDB7
}


// ================================================
// 0xee19: WORD 'WEE1B' codep=0x224c parp=0xee1b
// ================================================

void WEE1B() // WEE1B
{
  WE4DD(); // WE4DD
  WEDE9(); // WEDE9
  WEE03(); // WEE03
  WEDE9(); // WEDE9
}


// ================================================
// 0xee25: WORD 'WEE27' codep=0x224c parp=0xee27 params=0 returns=0
// ================================================

void WEE27() // WEE27
{
  IsFIRST(); // ?FIRST
  IsLAST(); // ?LAST
  Push(Pop() & Pop()); // AND
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  IEXTRAC(); // IEXTRAC
  ILAST(); // ILAST
  CI(); // CI
  _gt_INSERT(); // >INSERT
}


// ================================================
// 0xee3d: WORD 'WEE3F' codep=0x224c parp=0xee3f params=0 returns=0
// ================================================

void WEE3F() // WEE3F
{
  WED93(); // WED93
  Push(Pop() + Read16(pp_WECF0)); //  WECF0 @ +
  WED9B(); // WED9B
  MOD(); // MOD
  WED8B(); // WED8B
}


// ================================================
// 0xee4f: WORD 'WEE51' codep=0x224c parp=0xee51 params=0 returns=0
// ================================================

void WEE51() // WEE51
{
  unsigned short int i, imax;
  Push(Read16(pp_WE4B3)); // WE4B3 @
  if (Pop() == 0) return;
  WED7D(); // WED7D
  Push(1);
  Push(pp_WECF0); // WECF0
  Store_2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(Read16(cc_WE36E)); // WE36E
  Push(Read16(pp__star_GLOBAL)); // *GLOBAL @
  IsICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    GetIL(); // @IL
    GetIH(); // @IH
    _gt_C_plus_S(); // >C+S
    GetINST_dash_C(); // @INST-C
    Push(Pop()==0x002d?1:0); //  0x002d =
    ICLOSE(); // ICLOSE
    if (Pop() != 0)
    {
      Push(Read16(pp_IINDEX)); // IINDEX @
      WED9B(); // WED9B
      WEDAF(); // WEDAF
      Push(Pop() + Pop()); // +
      C_ex__2(); // C!_2
      WEDD5(); // WEDD5
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeeab: WORD 'WEEAD' codep=0x224c parp=0xeead params=0 returns=0
// ================================================

void WEEAD() // WEEAD
{
  Push2Words("NULL");
  Push(pp_TMAP); // TMAP
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xeeb5: WORD 'WEEB7' codep=0x224c parp=0xeeb7 params=0 returns=0
// ================================================

void WEEB7() // WEEB7
{
  WE52F(); // WE52F
  WED9B(); // WED9B
  Push(!(Pop()==0?1:0)); //  0= NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  WED93(); // WED93
  WEDB7(); // WEDB7
  WEE1B(); // WEE1B
  WEE3F(); // WEE3F
}


// ================================================
// 0xeecf: WORD 'WEED1' codep=0x224c parp=0xeed1 params=0 returns=1
// ================================================

void WEED1() // WEED1
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  GetINST_dash_S(); // @INST-S
  Push(0x002e);
  Push(0x0034);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xeee9: WORD 'WEEEB' codep=0x224c parp=0xeeeb params=0 returns=1
// ================================================

void WEEEB() // WEEEB
{
  Push(Read16(pp_PAST)); // PAST @
  _gt_FLAG(); // >FLAG
  Push(Read16(0x65e1+WE35B.offset)&0xFF); // WE35B<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(!Read16(pp_PAST)); // PAST @ NOT
  Push(Read16(0x65e1+WE360.offset)&0xFF); // WE360<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Read16(0x65e1+WE365.offset)&0xFF); // WE365<IFIELD> C@
  if (Pop() != 0)
  {
    CI(); // CI
    Push(Pop() | Pop()); // OR
    Push(Pop() & Read16(pp_STARDAT)); //  STARDAT @ AND
    _gt_FLAG(); // >FLAG
    Push(Pop() & Pop()); // AND
  }
  Push(Pop() & (Read16(0x65e1+WE356.offset)&0xFF)); //  WE356<IFIELD> C@ AND
}


// ================================================
// 0xef27: WORD 'WEF29' codep=0x224c parp=0xef29 params=0 returns=0
// ================================================

void WEF29() // WEF29
{
  Push(Read16(pp_WE4B7)); // WE4B7 @
  if (Pop() == 0) return;
  WED7D(); // WED7D
  Push(4);
  Push(pp_WECF0); // WECF0
  Store_2(); // !_2
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x003d);
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
  IPREV(); // IPREV
  do
  {
    INEXT(); // INEXT
    WECAA(); // WECAA
    WEEEB(); // WEEEB
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
      Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
      WED9B(); // WED9B
      WEDAF(); // WEDAF
      Push(Pop() + Pop()); // +
      StoreD(); // D!
      WEDD5(); // WEDD5
    }
    IsLAST(); // ?LAST
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xef79: WORD 'DO-TMAPS' codep=0x224c parp=0xef86
// ================================================

void DO_dash_TMAPS() // DO-TMAPS
{
  WEEAD(); // WEEAD
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  IOPEN(); // IOPEN
  if (Pop() != 0)
  {
    Push2Words("NULL");
    Push(0xeed1); // 'WEED1'
    SELECT_dash_(); // SELECT-
    if (Pop() != 0)
    {
      GetINST_dash_S(); // @INST-S
      Push(Pop() - 0x002e); //  0x002e -
      Push(0x0028);
      SWAP(); // SWAP
      GetRECORD(); // @RECORD
      Push(Pop() + 0x0014); //  0x0014 +
      _2_at_(); // 2@
      Push(pp_WE37A); // WE37A
      Store_2(); // !_2
      Push(pp_WE37E); // WE37E
      Store_2(); // !_2
      CI(); // CI
      Push(pp_TMAP); // TMAP
      _1_dot_5_ex__2(); // 1.5!_2
      WEA7C(); // WEA7C
      WEE51(); // WEE51
      WE722(); // WE722
      WEB47(); // WEB47
      WEE27(); // WEE27
    }
  }
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xefe0: WORD 'WEFE2' codep=0x224c parp=0xefe2
// ================================================

void WEFE2() // WEFE2
{
  WE471(); // WE471
  WEA52(); // WEA52
  DCLIPSE(); // DCLIPSE
  WE722(); // WE722
}


// ================================================
// 0xefec: WORD 'WEFEE' codep=0x224c parp=0xefee
// ================================================

void WEFEE() // WEFEE
{
  WEEAD(); // WEEAD
  WEFE2(); // WEFE2
}


// ================================================
// 0xeff4: WORD 'WEFF6' codep=0x224c parp=0xeff6
// ================================================

void WEFF6() // WEFF6
{
  Push(pp_WE4B7); // WE4B7
  _099(); // 099
  Push(pp_WE4B3); // WE4B3
  Push(1);
  TOGGLE(); // TOGGLE
  WEFE2(); // WEFE2
  WEE51(); // WEE51
}


// ================================================
// 0xf006: WORD 'WF008' codep=0x224c parp=0xf008
// ================================================

void WF008() // WF008
{
  Push(pp_WE4B3); // WE4B3
  _099(); // 099
  Push(pp_WE4B7); // WE4B7
  Push(1);
  TOGGLE(); // TOGGLE
  WEFE2(); // WEFE2
  WEF29(); // WEF29
}


// ================================================
// 0xf018: WORD 'WF01A' codep=0x224c parp=0xf01a params=0 returns=2
// ================================================

void WF01A() // WF01A
{
  Push(Read16(pp_WE37A)); // WE37A @
  Push(8);
  _slash_(); // /
  Push(Pop() * 8); //  8 *
  Push(pp_WE37A); // WE37A
  Store_2(); // !_2
  Push(Read16(pp_WE37E)); // WE37E @
  Push(8);
  _slash_(); // /
  Push(Pop() * 8); //  8 *
  Push(pp_WE37E); // WE37E
  Store_2(); // !_2
}


// ================================================
// 0xf03c: WORD 'KEY>ACTION' codep=0x4b3b parp=0xf04b
// ================================================

void KEY_gt_ACTION() // KEY>ACTION
{
  switch(Pop()) // KEY>ACTION
  {
  case 315:
    WEFF6(); // WEFF6
    break;
  case 319:
    WF008(); // WF008
    break;
  case 321:
    DO_dash_TMAPS(); // DO-TMAPS
    break;
  default:
    WEFEE(); // WEFEE
    break;

  }
}

// ================================================
// 0xf05b: WORD 'WF05D' codep=0x224c parp=0xf05d params=0 returns=0
// ================================================

void WF05D() // WF05D
{
  Push(Read16(pp_LKEY)); // LKEY @
  Push(Read16(regsp)); // DUP
  Push(0x013b);
  Push(0x0145);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(pp_FTRIG); // FTRIG
    _099(); // 099
    KEY_gt_ACTION(); // KEY>ACTION case
    Push(pp_LKEY); // LKEY
    _099(); // 099
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf083: WORD 'WF085' codep=0x224c parp=0xf085
// ================================================

void WF085() // WF085
{
  do
  {
    XYSCAN(); // XYSCAN
    Push(0x00fa); Push(0x0000);
    Push(pp_KEYTIME); // KEYTIME
    _2_at_(); // 2@
    Push(pp_LKEYTIM); // LKEYTIM
    _2_at_(); // 2@
    D_dash_(); // D-
    D_gt_(); // D>
    Push((Pop() * Read16(pp_WE36A)) * 2); //  WE36A @ * 2*
    Push(1);
    MAX(); // MAX
    Push(0x000a);
    MIN(); // MIN
    Push(pp_WE36A); // WE36A
    Store_2(); // !_2
    Push((Pop() * Read16(pp_WE36A)) * Read16(cc__star_MAPSCA)); //  WE36A @ * *MAPSCA *
    Push(pp_WE372); // WE372
    Store_2(); // !_2
    Push((Pop() * Read16(pp_WE36A)) * Read16(cc__star_MAPSCA)); //  WE36A @ * *MAPSCA *
    Push(pp_WE376); // WE376
    Store_2(); // !_2
    WEBC7(); // WEBC7
    Push(Read16(pp_WE372)); // WE372 @
    Push(Read16(pp_WE376)); // WE376 @
    D0_eq_(); // D0=
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WE722(); // WE722
      Push(Read16(pp_WE372)); // WE372 @
      Push(pp_WE37A); // WE37A
      _plus__ex__2(); // +!_2
      Push(Read16(pp_WE376)); // WE376 @
      Push(pp_WE37E); // WE37E
      _plus__ex__2(); // +!_2
      WF01A(); // WF01A
      Push(Read16(pp_WE37A)); // WE37A @
      Push(Read16(pp_WE37E)); // WE37E @
      IsINVIS(); // ?INVIS
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        WEA7C(); // WEA7C
        WEE51(); // WEE51
      }
      WE722(); // WE722
      WEB47(); // WEB47
      CLICK(); // CLICK
    }
    WEEB7(); // WEEB7
    WE864(); // WE864
    WF05D(); // WF05D
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
}


// ================================================
// 0xf119: WORD 'WF11B' codep=0x224c parp=0xf11b
// ================================================

void WF11B() // WF11B
{
  unsigned short int i, imax;
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WE722(); // WE722
    Push(0x00c8);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf12f: WORD 'WF131' codep=0x224c parp=0xf131 params=0 returns=0
// ================================================

void WF131() // WF131
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16((0x65e1+WE3A6.offset) + 1)&0xFF) & 7); // WE3A6<IFIELD> 1+ C@ 7 AND
  Push(Read16(0x65e1+WE3A6.offset)&0xFF); // WE3A6<IFIELD> C@
  Push(0x0064);
  _star__slash_(); // */
  ICLOSE(); // ICLOSE
  Push(pp_WE38E); // WE38E
  Store_2(); // !_2
}


// ================================================
// 0xf151: WORD '(/STARMAP)' codep=0x224c parp=0xf160
// ================================================
// entry

void _ro__slash_STARMAP_rc_() // (/STARMAP)
{
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIM); // NAV-TIM
  _2_at_(); // 2@
  D_gt_(); // D>
  Push(Pop() & (Read16(pp_CONTEXT_3)==3?1:0)); //  CONTEXT_3 @ 3 = AND
  if (Pop() != 0)
  {
    WF131(); // WF131
    WEC84(); // WEC84
    Push(Read16(pp_BVIS)); // BVIS @
    Push(Read16(pp_LVIS)); // LVIS @
    WEEAD(); // WEEAD
    Push(7);
    Push(pp_CONTEXT_3); // CONTEXT_3
    Store_2(); // !_2
    Push(Read16(pp_LOCRADI)); // LOCRADI @
    Push(Read16(pp_XABS)); // XABS @
    Push(Read16(pp_YABS)); // YABS @
    WE3C5(); // WE3C5
    DCLIPSE(); // DCLIPSE
    WE497(); // WE497
    _gt_DISPLA(); // >DISPLA
    DARK(); // DARK
    _gt_HIDDEN(); // >HIDDEN
    DARK(); // DARK
    WE585(); // WE585
    WE635(); // WE635
    _gt_DISPLA(); // >DISPLA
    SCR_dash_RES(); // SCR-RES
    WEA7C(); // WEA7C
    WEB47(); // WEB47
    DCLIPSE(); // DCLIPSE
    Push(pp_XORMODE); // XORMODE
    _099(); // 099
    WEB85(); // WEB85
    WEA8C(); // WEA8C
    WEAD0(); // WEAD0
    WEAF0(); // WEAF0
    WF11B(); // WF11B
    WF085(); // WF085
    Push(Read16(pp_WE37A)); // WE37A @
    Push(Read16(pp_WE37E)); // WE37E @
    Push(pp_EYEXY); // EYEXY
    StoreD(); // D!
    Push(pp_YABS); // YABS
    Store_2(); // !_2
    Push(pp_XABS); // XABS
    Store_2(); // !_2
    Push(pp_LOCRADI); // LOCRADI
    Store_2(); // !_2
    Push(3);
    Push(pp_CONTEXT_3); // CONTEXT_3
    Store_2(); // !_2
    Push(0xec78);
    Push(Read16(regsp)); // DUP
    Push(pp_ANCHOR); // ANCHOR
    StoreD(); // D!
    ORGLIST(); // ORGLIST
    _gt_1ICONF(); // >1ICONF
    Push(8);
    Push(0x0030);
    Push(pp_YWLD_c_YP); // YWLD:YP
    StoreD(); // D!
    Push(8);
    Push(0x0020);
    Push(pp_XWLD_c_XP); // XWLD:XP
    StoreD(); // D!
    Push(pp_LVIS); // LVIS
    Store_2(); // !_2
    Push(pp_BVIS); // BVIS
    Store_2(); // !_2
    Push(pp_XLLDEST); // XLLDEST
    _099(); // 099
    Push(pp_YLLDEST); // YLLDEST
    _099(); // 099
    Push(1);
  } else
  {
    Push(!(Read16(pp_CONTEXT_3)==3?1:0)); // CONTEXT_3 @ 3 = NOT
    NOMAP(); // NOMAP
    Push(0);
  }
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}

// 0xf232: db 0x2a 0x4d 0x41 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x5c 0x20 0x53 0x54 0x41 0x52 0x4d 0x41 0x50 0x20 0x4f 0x56 0x52 0x2d 0x28 0x20 0x72 0x66 0x67 0x30 0x39 0x73 0x65 0x70 0x38 0x38 0x29 0x0a 0x31 0x32 0x35 0x30 0x0f 0xe1 0x27 0xb8 0x27 0xdc 0x1b 0x01 0x47 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x54 0x48 0x49 0x4e 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0x81 0xf2 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x54 0x48 0x49 0x43 0x4b 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0xa9 0xf2 0x90 0x16 0xd3 0xf1 0x87 0x28 0x2e 0x41 0x54 0x4d 0x4f 0xa9 0x3b 0x4b 0x05 0x00 0x08 0xef 0x01 0x00 0x8e 0xf2 0x02 0x00 0x83 0xf2 0x03 0x00 0x9c 0xf2 0x04 0x00 0xab 0xf2 0x05 0x00 0xb7 0xf2 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x15 0x41 0x54 0x4d 0x4f 0x53 0x50 0x48 0x45 0x52 0x49 0x43 0x20 0x44 0x45 0x4e 0x53 0x49 0x54 0x59 0x3a 0x20 0x59 0xee 0xfa 0x15 0x08 0x00 0xd5 0xec 0x92 0x0c 0xcd 0xf2 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x43 0x41 0x4c 0x4d 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x56 0x49 0x4f 0x4c 0x45 0x4e 0x54 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0x2b 0xf3 0x90 0x16 0x79 0xed 0x88 0x28 0x2e 0x57 0x45 0x41 0x54 0x48 0xa9 0x3b 0x4b 0x04 0x00 0x08 0xef 0x01 0x00 0x13 0xf3 0x02 0x00 0x1e 0xf3 0x03 0x00 0x2d 0xf3 0x04 0x00 0x3b 0xf3 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x10 0x47 0x4c 0x4f 0x42 0x41 0x4c 0x20 0x57 0x45 0x41 0x54 0x48 0x45 0x52 0x3a 0x20 0x59 0xee 0xfa 0x15 0x08 0x00 0xcd 0xec 0xae 0x0b 0x52 0xf3 0x90 0x16 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x11 0x20 0x53 0x50 0x45 0x43 0x54 0x52 0x41 0x4c 0x20 0x43 0x4c 0x41 0x53 0x53 0x3a 0x20 0xd2 0x9f 0x34 0x75 0x6b 0x06 0x90 0x16 0x29 0x1d 0x4d 0x4b 0x47 0x46 0x41 0x42 0x4f 0x4c 0x22 0xb4 0x0d 0x3d 0x0f 0x9f 0x3b 0x20 0x0f 0xb8 0x15 0xe7 0x0f 0xad 0xf3 0x50 0x0e 0x72 0x0f 0x92 0x0c 0x6e 0x0e 0x5f 0x12 0xfa 0x15 0x04 0x00 0x4a 0x17 0xd0 0x15 0xea 0xff 0x90 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x0c 0x20 0x45 0x43 0x4f 0x53 0x50 0x48 0x45 0x52 0x45 0x3a 0x20 0x34 0x75 0xb6 0xf3 0x41 0x0e 0xd2 0x9f 0x7f 0x3b 0x92 0x0f 0x2e 0x0f 0x89 0x11 0xb8 0x27 0xdc 0x1b 0x02 0x2d 0x20 0xa7 0x3b 0xad 0x11 0xb8 0x27 0x90 0x16 0x4c 0x22 0x2d 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0xf2 0x0e 0x4c 0x7e 0x32 0x0e 0x3f 0x7a 0xd2 0x9f 0x5d 0x17 0x45 0xbe 0xd9 0x84 0x7f 0x3b 0x0a 0x7a 0x90 0x16 0x4c 0x22 0xd2 0x9f 0x5d 0x17 0xd6 0x00 0x12 0xf4 0x90 0x16 0x4c 0x22 0x02 0xee 0x90 0x16 0x4c 0x22 0x7c 0xf0 0x90 0x16 0x4c 0x22 0xeb 0xee 0x02 0xee 0x51 0xef 0xf5 0xef 0x90 0x16 0x00 0x00 0x8a 0x28 0x2e 0x56 0x2f 0x50 0x2d 0x4f 0x42 0x4a 0xa9 0x3b 0x4b 0x02 0x00 0x4e 0xf4 0x16 0x00 0x42 0xf4 0x00 0x00 0x48 0xf4 0x4c 0x22 0x34 0x75 0x65 0xf4 0x90 0x16 0x4c 0x22 0xb3 0xf0 0xf5 0xf1 0x1f 0xf2 0xe7 0xf2 0x56 0xf1 0x68 0xf3 0x90 0x16 0x4c 0x22 0x8d 0xf3 0xe0 0xf3 0x90 0x16 0x5a 0xf4 0x8b 0x28 0x2e 0x41 0x4e 0x41 0x4c 0x59 0x53 0x49 0x53 0xa9 0x3b 0x4b 0x04 0x00 0x6e 0x3a 0x20 0x00 0x7d 0xf4 0x17 0x00 0x8d 0xf4 0x19 0x00 0x75 0xf4 0x3c 0x00 0x36 0xf4 0x95 0xf4 0x8b 0x28 0x2f 0x41 0x4e 0x41 0x4c 0x59 0x53 0x49 0x53 0xa9 0x4c 0x22 0xd2 0x9f 0x46 0x9c 0x0c 0x63 0x83 0x4a 0xf0 0x0d 0xa5 0x10 0x16 0x16 0x02 0x00 0x00 0x00 0x14 0x40 0xfa 0x15 0x16 0x00 0x1f 0x7a 0x9d 0xed 0x22 0x75 0xa1 0xf4 0xdf 0x79 0x16 0x16 0x58 0x1b 0x00 0x00 0x60 0x16 0x57 0x00 0x3e 0x13 0xfa 0x15 0x26 0x00 0xdc 0x1b 0x1d 0x49 0x20 0x53 0x41 0x49 0x44 0x20 0x54 0x48 0x45 0x52 0x45 0x27 0x53 0x20 0x4e 0x4f 0x54 0x48 0x49 0x4e 0x47 0x20 0x54 0x48 0x45 0x52 0x45 0x21 0x60 0x16 0x25 0x00 0xdc 0x1b 0x20 0x49 0x20 0x4e 0x45 0x45 0x44 0x20 0x41 0x20 0x43 0x55 0x52 0x52 0x45 0x4e 0x54 0x20 0x53 0x45 0x4e 0x53 0x4f 0x52 0x20 0x52 0x45 0x41 0x44 0x49 0x4e 0x47 0x2e 0x32 0x0e 0x16 0x16 0xdc 0x05 0x00 0x00 0x98 0x2a 0x38 0x0c 0x65 0x10 0x4f 0x64 0x4c 0x6d 0xa6 0x49 0x0c 0x63 0x32 0x6d 0x90 0x16 0x41 0x4e 0x2d 0x56 0x4f 0x43 0x00 '*MAP____________________________----\ STARMAP OVR-( rfg09sep88) 1250  ' '   G  L"   THIN  L"   VERY     L"   MODERATE  L"   THICK  L"   VERY        (.ATMO ;K                        L"     ATMOSPHERIC DENSITY: Y             L"   CALM  L"   MODERATE  L"   VIOLENT  L"   VERY +   y  (.WEATH ;K              -   ; L"     GLOBAL WEATHER: Y         R   L"      SPECTRAL CLASS:   4uk   ) MKGFABOL"  =  ;        P r   n _     J       2   L"      ECOSPHERE: 4u  A   ;  .    '   -  ;   '  L"-l z?z]     L~2 ?z  ] E   ; z  L"  ]       L"    L"|   L"    Q        (.V/P-OBJ ;K  N   B   H L"4ue   L"        V h   L"      Z  (.ANALYSIS ;K  n:  }       u < 6    (/ANALYSIS L"  F  c J           @     z  "u   y  X   ` W >   &    I SAID THERE'S NOTHING THERE!` %    I NEED A CURRENT SENSOR READING.2        *8 e OdLm I c2m  AN-VOC '

