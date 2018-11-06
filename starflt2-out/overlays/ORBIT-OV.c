// ====== OVERLAY 'ORBIT-OV' ======
// store offset = 0xdb20
// overlay size   = 0x1a40

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WDB36  codep:0x2214 parp:0xdb36 size:0x0002 C-string:'WDB36'
//           WDB3A  codep:0x2214 parp:0xdb3a size:0x0002 C-string:'WDB3A'
//           WDB3E  codep:0x2214 parp:0xdb3e size:0x0002 C-string:'WDB3E'
//           WDB42  codep:0x1d29 parp:0xdb42 size:0x000c C-string:'WDB42'
//           WDB50  codep:0x1d29 parp:0xdb50 size:0x0002 C-string:'WDB50'
//           WDB54  codep:0x1d29 parp:0xdb54 size:0x0002 C-string:'WDB54'
//           WDB58  codep:0x1d29 parp:0xdb58 size:0x0002 C-string:'WDB58'
//           WDB5C  codep:0x1d29 parp:0xdb5c size:0x0002 C-string:'WDB5C'
//           WDB60  codep:0x1d29 parp:0xdb60 size:0x0002 C-string:'WDB60'
//           WDB64  codep:0x1d29 parp:0xdb64 size:0x0002 C-string:'WDB64'
//           WDB68  codep:0x1d29 parp:0xdb68 size:0x0002 C-string:'WDB68'
//           WDB6C  codep:0x1d29 parp:0xdb6c size:0x0002 C-string:'WDB6C'
//           WDB70  codep:0x1d29 parp:0xdb70 size:0x0002 C-string:'WDB70'
//           WDB74  codep:0x1d29 parp:0xdb74 size:0x0002 C-string:'WDB74'
//           WDB78  codep:0x1d29 parp:0xdb78 size:0x0002 C-string:'WDB78'
//           WDB7C  codep:0x1d29 parp:0xdb7c size:0x0002 C-string:'WDB7C'
//           WDB80  codep:0x1d29 parp:0xdb80 size:0x0002 C-string:'WDB80'
//           WDB84  codep:0x1d29 parp:0xdb84 size:0x0002 C-string:'WDB84'
//           WDB88  codep:0x1d29 parp:0xdb88 size:0x0002 C-string:'WDB88'
//           WDB8C  codep:0x1d29 parp:0xdb8c size:0x0002 C-string:'WDB8C'
//           WDB90  codep:0x1d29 parp:0xdb90 size:0x0002 C-string:'WDB90'
//           WDB94  codep:0x1d29 parp:0xdb94 size:0x0002 C-string:'WDB94'
//           WDB98  codep:0x1d29 parp:0xdb98 size:0x0002 C-string:'WDB98'
//           WDB9C  codep:0x1d29 parp:0xdb9c size:0x0002 C-string:'WDB9C'
//           WDBA0  codep:0x1d29 parp:0xdba0 size:0x0002 C-string:'WDBA0'
//           WDBA4  codep:0x1d29 parp:0xdba4 size:0x0002 C-string:'WDBA4'
//           WDBA8  codep:0x1d29 parp:0xdba8 size:0x0002 C-string:'WDBA8'
//           WDBAC  codep:0x1d29 parp:0xdbac size:0x0002 C-string:'WDBAC'
//           WDBB0  codep:0x1d29 parp:0xdbb0 size:0x0002 C-string:'WDBB0'
//           WDBB4  codep:0x1d29 parp:0xdbb4 size:0x0002 C-string:'WDBB4'
//           WDBB8  codep:0x1d29 parp:0xdbb8 size:0x0002 C-string:'WDBB8'
//           WDBBC  codep:0x1d29 parp:0xdbbc size:0x0002 C-string:'WDBBC'
//           WDBC0  codep:0x1d29 parp:0xdbc0 size:0x0002 C-string:'WDBC0'
//           WDBC4  codep:0x1d29 parp:0xdbc4 size:0x0002 C-string:'WDBC4'
//           WDBC8  codep:0x1d29 parp:0xdbc8 size:0x0002 C-string:'WDBC8'
//           WDBCC  codep:0x1d29 parp:0xdbcc size:0x0002 C-string:'WDBCC'
//           WDBD0  codep:0x1d29 parp:0xdbd0 size:0x0002 C-string:'WDBD0'
//           WDBD4  codep:0x1d29 parp:0xdbd4 size:0x0002 C-string:'WDBD4'
//           WDBD8  codep:0x1d29 parp:0xdbd8 size:0x0002 C-string:'WDBD8'
//           WDBDC  codep:0x1d29 parp:0xdbdc size:0x0002 C-string:'WDBDC'
//           WDBE0  codep:0x1d29 parp:0xdbe0 size:0x0002 C-string:'WDBE0'
//           WDBE4  codep:0x1d29 parp:0xdbe4 size:0x0002 C-string:'WDBE4'
//           WDBE8  codep:0x1d29 parp:0xdbe8 size:0x0020 C-string:'WDBE8'
//           WDC0A  codep:0x1d29 parp:0xdc0a size:0x0008 C-string:'WDC0A'
//           WDC14  codep:0x1d29 parp:0xdc14 size:0x0020 C-string:'WDC14'
//           WDC36  codep:0x1d29 parp:0xdc36 size:0x0008 C-string:'WDC36'
//           WDC40  codep:0x1d29 parp:0xdc40 size:0x0030 C-string:'WDC40'
//           WDC72  codep:0x1d29 parp:0xdc72 size:0x0018 C-string:'WDC72'
//           WDC8C  codep:0x7394 parp:0xdc8c size:0x0006 C-string:'WDC8C'
//           WDC94  codep:0x1d29 parp:0xdc94 size:0x003a C-string:'WDC94'
//           WDCD0  codep:0x1d29 parp:0xdcd0 size:0x000a C-string:'WDCD0'
//           WDCDC  codep:0xdcdc parp:0xdcdc size:0x0076 C-string:'WDCDC'
//           WDD54  codep:0x224c parp:0xdd54 size:0x0020 C-string:'WDD54'
//           WDD76  codep:0x224c parp:0xdd76 size:0x0026 C-string:'WDD76'
//           WDD9E  codep:0x224c parp:0xdd9e size:0x004c C-string:'WDD9E'
//           WDDEC  codep:0x224c parp:0xddec size:0x004e C-string:'WDDEC'
//         SETQUAD  codep:0xde46 parp:0xde46 size:0x0009 C-string:'SETQUAD'
//             C*/  codep:0xde57 parp:0xde57 size:0x000e C-string:'C_star__slash_'
//           WDE67  codep:0x224c parp:0xde67 size:0x002c C-string:'WDE67'
//           WDE95  codep:0x224c parp:0xde95 size:0x0022 C-string:'WDE95'
//           WDEB9  codep:0x224c parp:0xdeb9 size:0x001e C-string:'WDEB9'
//           WDED9  codep:0x224c parp:0xded9 size:0x0016 C-string:'WDED9'
//           WDEF1  codep:0x224c parp:0xdef1 size:0x0016 C-string:'WDEF1'
//           WDF09  codep:0x224c parp:0xdf09 size:0x0016 C-string:'WDF09'
//           WDF21  codep:0x224c parp:0xdf21 size:0x0012 C-string:'WDF21'
//           WDF35  codep:0x224c parp:0xdf35 size:0x0028 C-string:'WDF35'
//           WDF5F  codep:0x224c parp:0xdf5f size:0x0016 C-string:'WDF5F'
//           WDF77  codep:0x224c parp:0xdf77 size:0x002e C-string:'WDF77'
//           WDFA7  codep:0x224c parp:0xdfa7 size:0x002c C-string:'WDFA7'
//           WDFD5  codep:0x224c parp:0xdfd5 size:0x0018 C-string:'WDFD5'
//           WDFEF  codep:0x224c parp:0xdfef size:0x0030 C-string:'WDFEF'
//           WE021  codep:0x224c parp:0xe021 size:0x001a C-string:'WE021'
//           WE03D  codep:0x224c parp:0xe03d size:0x0012 C-string:'WE03D'
//           WE051  codep:0x224c parp:0xe051 size:0x001a C-string:'WE051'
//           WE06D  codep:0x224c parp:0xe06d size:0x0010 C-string:'WE06D'
//           WE07F  codep:0x224c parp:0xe07f size:0x002e C-string:'WE07F'
//           WE0AF  codep:0xe0af parp:0xe0af size:0x0049 C-string:'WE0AF'
//           WE0FA  codep:0xe0fa parp:0xe0fa size:0x0070 C-string:'WE0FA'
//           WE16C  codep:0xe16c parp:0xe16c size:0x0050 C-string:'WE16C'
//           WE1BE  codep:0x224c parp:0xe1be size:0x006a C-string:'WE1BE'
//           WE22A  codep:0x224c parp:0xe22a size:0x0070 C-string:'WE22A'
//           WE29C  codep:0x224c parp:0xe29c size:0x002e C-string:'WE29C'
//           WE2CC  codep:0x224c parp:0xe2cc size:0x001e C-string:'WE2CC'
//           WE2EC  codep:0x224c parp:0xe2ec size:0x0016 C-string:'WE2EC'
//           WE304  codep:0x224c parp:0xe304 size:0x004e C-string:'WE304'
//           WE354  codep:0x224c parp:0xe354 size:0x0050 C-string:'WE354'
//           WE3A6  codep:0x224c parp:0xe3a6 size:0x0028 C-string:'WE3A6'
//           WE3D0  codep:0xe3d0 parp:0xe3d0 size:0x001c C-string:'WE3D0'
//           WE3EE  codep:0xe3ee parp:0xe3ee size:0x0008 C-string:'WE3EE'
//           WE3F8  codep:0x224c parp:0xe3f8 size:0x009a C-string:'WE3F8'
//           WE494  codep:0x224c parp:0xe494 size:0x0012 C-string:'WE494'
//           WE4A8  codep:0x224c parp:0xe4a8 size:0x0036 C-string:'WE4A8'
//           WE4E0  codep:0x224c parp:0xe4e0 size:0x005c C-string:'WE4E0'
//           WE53E  codep:0x1d29 parp:0xe53e size:0x0002 C-string:'WE53E'
//           WE542  codep:0x224c parp:0xe542 size:0x0054 C-string:'WE542'
//           WE598  codep:0x224c parp:0xe598 size:0x001a C-string:'WE598'
//           WE5B4  codep:0x224c parp:0xe5b4 size:0x001c C-string:'WE5B4'
//           WE5D2  codep:0x224c parp:0xe5d2 size:0x004c C-string:'WE5D2'
//           WE620  codep:0x224c parp:0xe620 size:0x001a C-string:'WE620'
//        SHOWSITE  codep:0x224c parp:0xe647 size:0x0016 C-string:'SHOWSITE'
//       >VIEWSITE  codep:0x224c parp:0xe66b size:0x0040 C-string:'_gt_VIEWSITE'
//           WE6AD  codep:0x224c parp:0xe6ad size:0x003c C-string:'WE6AD'
//           WE6EB  codep:0x224c parp:0xe6eb size:0x0064 C-string:'WE6EB'
//           WE751  codep:0x224c parp:0xe751 size:0x0056 C-string:'WE751'
//           WE7A9  codep:0x224c parp:0xe7a9 size:0x003a C-string:'WE7A9'
//           WE7E5  codep:0x224c parp:0xe7e5 size:0x0042 C-string:'WE7E5'
//           WE829  codep:0x224c parp:0xe829 size:0x0060 C-string:'WE829'
//           WE88B  codep:0x224c parp:0xe88b size:0x0030 C-string:'WE88B'
//           WE8BD  codep:0x224c parp:0xe8bd size:0x0024 C-string:'WE8BD'
//           WE8E3  codep:0x224c parp:0xe8e3 size:0x0012 C-string:'WE8E3'
//           WE8F7  codep:0x224c parp:0xe8f7 size:0x0038 C-string:'WE8F7'
//           WE931  codep:0x224c parp:0xe931 size:0x003c C-string:'WE931'
//           WE96F  codep:0x224c parp:0xe96f size:0x002c C-string:'WE96F'
//           WE99D  codep:0x224c parp:0xe99d size:0x002e C-string:'WE99D'
//           WE9CD  codep:0x224c parp:0xe9cd size:0x002c C-string:'WE9CD'
//           WE9FB  codep:0x224c parp:0xe9fb size:0x0038 C-string:'WE9FB'
//           WEA35  codep:0x224c parp:0xea35 size:0x0052 C-string:'WEA35'
//           WEA89  codep:0x224c parp:0xea89 size:0x0018 C-string:'WEA89'
//           WEAA3  codep:0x224c parp:0xeaa3 size:0x006e C-string:'WEAA3'
//           WEB13  codep:0x224c parp:0xeb13 size:0x0088 C-string:'WEB13'
//         SEEGRID  codep:0x224c parp:0xeba7 size:0x0016 C-string:'SEEGRID'
//           WEBBF  codep:0x224c parp:0xebbf size:0x0018 C-string:'WEBBF'
//           WEBD9  codep:0x224c parp:0xebd9 size:0x003c C-string:'WEBD9'
//           WEC17  codep:0x224c parp:0xec17 size:0x0040 C-string:'WEC17'
//           WEC59  codep:0x224c parp:0xec59 size:0x0098 C-string:'WEC59'
//           WECF3  codep:0x224c parp:0xecf3 size:0x001c C-string:'WECF3'
//           WED11  codep:0x224c parp:0xed11 size:0x002a C-string:'WED11'
//           WED3D  codep:0x224c parp:0xed3d size:0x0068 C-string:'WED3D'
//           WEDA7  codep:0x224c parp:0xeda7 size:0x0034 C-string:'WEDA7'
//           WEDDD  codep:0x224c parp:0xeddd size:0x0034 C-string:'WEDDD'
//           WEE13  codep:0x224c parp:0xee13 size:0x0060 C-string:'WEE13'
//           WEE75  codep:0x224c parp:0xee75 size:0x003a C-string:'WEE75'
//           WEEB1  codep:0x224c parp:0xeeb1 size:0x0026 C-string:'WEEB1'
//           WEED9  codep:0x224c parp:0xeed9 size:0x0042 C-string:'WEED9'
//           WEF1D  codep:0x224c parp:0xef1d size:0x001e C-string:'WEF1D'
//           WEF3D  codep:0x224c parp:0xef3d size:0x0026 C-string:'WEF3D'
//           WEF65  codep:0x224c parp:0xef65 size:0x001e C-string:'WEF65'
//           WEF85  codep:0x224c parp:0xef85 size:0x0026 C-string:'WEF85'
//           WEFAD  codep:0x224c parp:0xefad size:0x001a C-string:'WEFAD'
//           WEFC9  codep:0x224c parp:0xefc9 size:0x000e C-string:'WEFC9'
//           WEFD9  codep:0x224c parp:0xefd9 size:0x000a C-string:'WEFD9'
//           WEFE5  codep:0x224c parp:0xefe5 size:0x000a C-string:'WEFE5'
//           WEFF1  codep:0x224c parp:0xeff1 size:0x000a C-string:'WEFF1'
//           WEFFD  codep:0x224c parp:0xeffd size:0x00c2 C-string:'WEFFD'
//           WF0C1  codep:0x224c parp:0xf0c1 size:0x000e C-string:'WF0C1'
//         DESCEND  codep:0x224c parp:0xf0db size:0x008d C-string:'DESCEND'
//           WF16A  codep:0x224c parp:0xf16a size:0x006c C-string:'WF16A'
//           WF1D8  codep:0x224c parp:0xf1d8 size:0x0046 C-string:'WF1D8'
//           WF220  codep:0x224c parp:0xf220 size:0x0012 C-string:'WF220'
//           WF234  codep:0x1d29 parp:0xf234 size:0x0002 C-string:'WF234'
//           WF238  codep:0x224c parp:0xf238 size:0x0068 C-string:'WF238'
//          ASCEND  codep:0x224c parp:0xf2ab size:0x0008 C-string:'ASCEND'
//           WF2B5  codep:0x224c parp:0xf2b5 size:0x0006 C-string:'WF2B5'
//           WF2BD  codep:0x224c parp:0xf2bd size:0x002a C-string:'WF2BD'
//           WF2E9  codep:0x224c parp:0xf2e9 size:0x0026 C-string:'WF2E9'
//         SKYCASE  codep:0x4b3b parp:0xf31b size:0x0014 C-string:'SKYCASE'
//           WF331  codep:0x224c parp:0xf331 size:0x000c C-string:'WF331'
//      INIT-ORBIT  codep:0x224c parp:0xf34c size:0x0024 C-string:'INIT_dash_ORBIT'
//          ROTATE  codep:0x224c parp:0xf37b size:0x0000 C-string:'ROTATE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_POLYSEG; // POLYSEG
extern const unsigned short int pp_SEED_3; // SEED_3
extern const unsigned short int pp_SPHEREW; // SPHEREW
extern const unsigned short int pp_SIGNEXT; // SIGNEXT
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp_XUR; // XUR
extern const unsigned short int pp_YUR; // YUR
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_DCOLOR; // DCOLOR
extern const unsigned short int pp_Y1; // Y1
extern const unsigned short int pp_X1; // X1
extern const unsigned short int pp__n_IN; // #IN
extern const unsigned short int pp_VIN; // VIN
extern const unsigned short int pp_VOUT; // VOUT
extern const unsigned short int pp_OIN; // OIN
extern const unsigned short int pp_OOUT; // OOUT
extern const unsigned short int pp_IsOPEN; // ?OPEN
extern const unsigned short int pp_IsFUEL_dash_D; // ?FUEL-D
extern const unsigned short int pp_DXVIS; // DXVIS
extern const unsigned short int pp_DYVIS; // DYVIS
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_DXCON; // DXCON
extern const unsigned short int pp_DYCON; // DYCON
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_GLOBALS; // GLOBALS
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp__3DSEG; // 3DSEG
extern const unsigned short int pp_VIN_i_; // VIN'
extern const unsigned short int pp_YSCREEN; // YSCREEN
extern const unsigned short int pp_XSCREEN; // XSCREEN
extern const unsigned short int pp__n_CLRMAP; // #CLRMAP
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern Color BLACK; // BLACK
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color LT_dash_BLUE; // LT-BLUE
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern ArrayType CONTOUR; // CONTOUR
extern ArrayType FACET; // FACET
extern ArrayType FACE; // FACE
extern ArrayType GVERTEX; // GVERTEX
extern ArrayType GPOLY; // GPOLY
extern ArrayType GRIDCOL; // GRIDCOL
extern ArrayType _9X9COAR; // 9X9COAR
extern ArrayType _9X9FINE; // 9X9FINE
extern ArrayType XFORMVE; // XFORMVE
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void RRND(); // RRND
void SQRT(); // SQRT
void _n_COLZ(); // #COLZ
void ACELLAD(); // ACELLAD
void A_ex_(); // A!
void A_at_(); // A@
void SETLARR(); // SETLARR
void SETREGI(); // SETREGI
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void GetINST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void _1PIX(); // 1PIX
void _2PIX(); // 2PIX
void NBCLR(); // NBCLR
void StoreCOLOR(); // !COLOR
void BFILL(); // BFILL
void DARK(); // DARK
void LLINE(); // LLINE
void DrawCIRCLE_1(); // .CIRCLE_1
void LFILLPO(); // LFILLPO
void SETCLIP(); // SETCLIP
void VCLIPSE(); // VCLIPSE
void DCLIPSE(); // DCLIPSE
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void SET_dash_COL(); // SET-COL
void COLORMA_2(); // COLORMA_2
void StoreXYSEED(); // !XYSEED
void CTERASE(); // CTERASE
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void L_at_(); // L@
void L_ex_(); // L!
void LC_at_(); // LC@
void LC_ex_(); // LC!
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void L_plus__dash__at_(); // L+-@
void LPLOT(); // LPLOT
void CLIPPER(); // CLIPPER
void SCANPOL(); // SCANPOL
void WDCDC(); // WDCDC
void SETQUAD(); // SETQUAD
void C_star__slash_(); // C*/
void WE0AF(); // WE0AF
void WE0FA(); // WE0FA
void WE16C(); // WE16C
void WE3D0(); // WE3D0
void WE3EE(); // WE3EE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WDB42 = 0xdb42; // WDB42 size: 12
// {0x08, 0x19, 0x29, 0x38, 0x47, 0x54, 0x5f, 0x6a, 0x72, 0x78, 0x7d, 0x7f}

const unsigned short int pp_WDB50 = 0xdb50; // WDB50 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB54 = 0xdb54; // WDB54 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB58 = 0xdb58; // WDB58 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB5C = 0xdb5c; // WDB5C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB60 = 0xdb60; // WDB60 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB64 = 0xdb64; // WDB64 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB68 = 0xdb68; // WDB68 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB6C = 0xdb6c; // WDB6C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB70 = 0xdb70; // WDB70 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB74 = 0xdb74; // WDB74 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB78 = 0xdb78; // WDB78 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB7C = 0xdb7c; // WDB7C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB80 = 0xdb80; // WDB80 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB84 = 0xdb84; // WDB84 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB88 = 0xdb88; // WDB88 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB8C = 0xdb8c; // WDB8C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB90 = 0xdb90; // WDB90 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB94 = 0xdb94; // WDB94 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB98 = 0xdb98; // WDB98 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDB9C = 0xdb9c; // WDB9C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBA0 = 0xdba0; // WDBA0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBA4 = 0xdba4; // WDBA4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBA8 = 0xdba8; // WDBA8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBAC = 0xdbac; // WDBAC size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBB0 = 0xdbb0; // WDBB0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBB4 = 0xdbb4; // WDBB4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBB8 = 0xdbb8; // WDBB8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBBC = 0xdbbc; // WDBBC size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBC0 = 0xdbc0; // WDBC0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBC4 = 0xdbc4; // WDBC4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBC8 = 0xdbc8; // WDBC8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBCC = 0xdbcc; // WDBCC size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBD0 = 0xdbd0; // WDBD0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBD4 = 0xdbd4; // WDBD4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBD8 = 0xdbd8; // WDBD8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBDC = 0xdbdc; // WDBDC size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBE0 = 0xdbe0; // WDBE0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBE4 = 0xdbe4; // WDBE4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBE8 = 0xdbe8; // WDBE8 size: 32
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x43, 0x4f, 0x4e, 0x41, 0x4e, 0x43, 0x48, 0x4f, 0x52, 0x2d, 0x56, 0x45, 0xd2, 0xac, 0x3c, 0xf5, 0x37, 0x33, 0x33, 0xce, 0x43, 0x4f, 0x4e, 0x41, 0x4e}

const unsigned short int pp_WDC0A = 0xdc0a; // WDC0A size: 8
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xac}

const unsigned short int pp_WDC14 = 0xdc14; // WDC14 size: 32
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x41, 0x4e, 0x43, 0x48, 0x4f, 0x52, 0x2d, 0x43, 0x4e, 0x54, 0xb2, 0xac, 0x3c, 0x4d, 0xe9, 0x58, 0xdb, 0xcc, 0x53, 0x45, 0x54, 0x52, 0x45, 0x4c, 0x4f}

const unsigned short int pp_WDC36 = 0xdc36; // WDC36 size: 8
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xa3}

const unsigned short int pp_WDC40 = 0xdc40; // WDC40 size: 48
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x52, 0x3e, 0x43, 0x4f, 0x4e, 0x54, 0x4f, 0x55, 0xd2, 0xac, 0x3c, 0x83, 0xe9, 0x2c, 0xdc, 0xce, 0x41, 0x4e, 0x43, 0x48, 0x4f, 0x52, 0x2d, 0x43, 0x4f, 0x4e, 0x54, 0x4f, 0x55, 0xd2, 0xac, 0x3c, 0x1f, 0xea, 0x17, 0xdc, 0xcd, 0x53, 0x55, 0x42}

const unsigned short int pp_WDC72 = 0xdc72; // WDC72 size: 24
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xd4, 0xac, 0x3c, 0x35, 0xea, 0xb6, 0xdb, 0xcd, 0x46, 0x52, 0x41, 0x43, 0x54, 0x2d, 0x43, 0x4f, 0x4e}

const unsigned short int pp_WDC94 = 0xdc94; // WDC94 size: 58
// {0x8b, 0xc1, 0xc3, 0x29, 0x1d, 0x8b, 0xc2, 0x03, 0xc1, 0x40, 0xd1, 0xf8, 0x03, 0xc1, 0x40, 0xd1, 0xf8, 0xc3, 0x29, 0x1d, 0x8b, 0xc2, 0x03, 0xc1, 0x40, 0xd1, 0xf8, 0xc3, 0x29, 0x1d, 0x8b, 0xc2, 0x03, 0xc1, 0x40, 0xd1, 0xf8, 0x03, 0xc2, 0x40, 0xd1, 0xf8, 0xc3, 0x29, 0x1d, 0x8b, 0xc2, 0xc3, 0x94, 0xdc, 0x99, 0xdc, 0xa8, 0xdc, 0xb2, 0xdc, 0xc1, 0xdc}

const unsigned short int pp_WDCD0 = 0xdcd0; // WDCD0 size: 10
// {0xd1, 0xe3, 0x81, 0xc3, 0xc4, 0xdc, 0x8b, 0x07, 0xff, 0xe0}

const unsigned short int pp_WE53E = 0xe53e; // WE53E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF234 = 0xf234; // WF234 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WDB36 = 0xdb36; // WDB36
const unsigned short int cc_WDB3A = 0xdb3a; // WDB3A
const unsigned short int cc_WDB3E = 0xdb3e; // WDB3E


// 0xdb32: db 0x87 0x01 '  '

// ================================================
// 0xdb34: WORD 'WDB36' codep=0x2214 parp=0xdb36
// ================================================
// 0xdb36: dw 0x007f

// ================================================
// 0xdb38: WORD 'WDB3A' codep=0x2214 parp=0xdb3a
// ================================================
// 0xdb3a: dw 0x0032

// ================================================
// 0xdb3c: WORD 'WDB3E' codep=0x2214 parp=0xdb3e
// ================================================
// 0xdb3e: dw 0x0042

// ================================================
// 0xdb40: WORD 'WDB42' codep=0x1d29 parp=0xdb42
// ================================================
// 0xdb42: db 0x08 0x19 0x29 0x38 0x47 0x54 0x5f 0x6a 0x72 0x78 0x7d 0x7f '  )8GT_jrx}'

// ================================================
// 0xdb4e: WORD 'WDB50' codep=0x1d29 parp=0xdb50
// ================================================
// 0xdb50: db 0x3a 0x20 ': '

// ================================================
// 0xdb52: WORD 'WDB54' codep=0x1d29 parp=0xdb54
// ================================================
// 0xdb54: db 0x3a 0x20 ': '

// ================================================
// 0xdb56: WORD 'WDB58' codep=0x1d29 parp=0xdb58
// ================================================
// 0xdb58: db 0x3a 0x20 ': '

// ================================================
// 0xdb5a: WORD 'WDB5C' codep=0x1d29 parp=0xdb5c
// ================================================
// 0xdb5c: db 0x3a 0x20 ': '

// ================================================
// 0xdb5e: WORD 'WDB60' codep=0x1d29 parp=0xdb60
// ================================================
// 0xdb60: db 0x3a 0x20 ': '

// ================================================
// 0xdb62: WORD 'WDB64' codep=0x1d29 parp=0xdb64
// ================================================
// 0xdb64: db 0x3a 0x20 ': '

// ================================================
// 0xdb66: WORD 'WDB68' codep=0x1d29 parp=0xdb68
// ================================================
// 0xdb68: db 0x3a 0x20 ': '

// ================================================
// 0xdb6a: WORD 'WDB6C' codep=0x1d29 parp=0xdb6c
// ================================================
// 0xdb6c: db 0x3a 0x20 ': '

// ================================================
// 0xdb6e: WORD 'WDB70' codep=0x1d29 parp=0xdb70
// ================================================
// 0xdb70: db 0x3a 0x20 ': '

// ================================================
// 0xdb72: WORD 'WDB74' codep=0x1d29 parp=0xdb74
// ================================================
// 0xdb74: db 0x3a 0x20 ': '

// ================================================
// 0xdb76: WORD 'WDB78' codep=0x1d29 parp=0xdb78
// ================================================
// 0xdb78: db 0x3a 0x20 ': '

// ================================================
// 0xdb7a: WORD 'WDB7C' codep=0x1d29 parp=0xdb7c
// ================================================
// 0xdb7c: db 0x3a 0x20 ': '

// ================================================
// 0xdb7e: WORD 'WDB80' codep=0x1d29 parp=0xdb80
// ================================================
// 0xdb80: db 0x3a 0x20 ': '

// ================================================
// 0xdb82: WORD 'WDB84' codep=0x1d29 parp=0xdb84
// ================================================
// 0xdb84: db 0x3a 0x20 ': '

// ================================================
// 0xdb86: WORD 'WDB88' codep=0x1d29 parp=0xdb88
// ================================================
// 0xdb88: db 0x3a 0x20 ': '

// ================================================
// 0xdb8a: WORD 'WDB8C' codep=0x1d29 parp=0xdb8c
// ================================================
// 0xdb8c: db 0x3a 0x20 ': '

// ================================================
// 0xdb8e: WORD 'WDB90' codep=0x1d29 parp=0xdb90
// ================================================
// 0xdb90: db 0x3a 0x20 ': '

// ================================================
// 0xdb92: WORD 'WDB94' codep=0x1d29 parp=0xdb94
// ================================================
// 0xdb94: db 0x3a 0x20 ': '

// ================================================
// 0xdb96: WORD 'WDB98' codep=0x1d29 parp=0xdb98
// ================================================
// 0xdb98: db 0x3a 0x20 ': '

// ================================================
// 0xdb9a: WORD 'WDB9C' codep=0x1d29 parp=0xdb9c
// ================================================
// 0xdb9c: db 0x3a 0x20 ': '

// ================================================
// 0xdb9e: WORD 'WDBA0' codep=0x1d29 parp=0xdba0
// ================================================
// 0xdba0: db 0x3a 0x20 ': '

// ================================================
// 0xdba2: WORD 'WDBA4' codep=0x1d29 parp=0xdba4
// ================================================
// 0xdba4: db 0x3a 0x20 ': '

// ================================================
// 0xdba6: WORD 'WDBA8' codep=0x1d29 parp=0xdba8
// ================================================
// 0xdba8: db 0x3a 0x20 ': '

// ================================================
// 0xdbaa: WORD 'WDBAC' codep=0x1d29 parp=0xdbac
// ================================================
// 0xdbac: db 0x3a 0x20 ': '

// ================================================
// 0xdbae: WORD 'WDBB0' codep=0x1d29 parp=0xdbb0
// ================================================
// 0xdbb0: db 0x3a 0x20 ': '

// ================================================
// 0xdbb2: WORD 'WDBB4' codep=0x1d29 parp=0xdbb4
// ================================================
// 0xdbb4: db 0x3a 0x20 ': '

// ================================================
// 0xdbb6: WORD 'WDBB8' codep=0x1d29 parp=0xdbb8
// ================================================
// 0xdbb8: db 0x3a 0x20 ': '

// ================================================
// 0xdbba: WORD 'WDBBC' codep=0x1d29 parp=0xdbbc
// ================================================
// orphan
// 0xdbbc: db 0x3a 0x20 ': '

// ================================================
// 0xdbbe: WORD 'WDBC0' codep=0x1d29 parp=0xdbc0
// ================================================
// 0xdbc0: db 0x3a 0x20 ': '

// ================================================
// 0xdbc2: WORD 'WDBC4' codep=0x1d29 parp=0xdbc4
// ================================================
// 0xdbc4: db 0x3a 0x20 ': '

// ================================================
// 0xdbc6: WORD 'WDBC8' codep=0x1d29 parp=0xdbc8
// ================================================
// 0xdbc8: db 0x3a 0x20 ': '

// ================================================
// 0xdbca: WORD 'WDBCC' codep=0x1d29 parp=0xdbcc
// ================================================
// 0xdbcc: db 0x3a 0x20 ': '

// ================================================
// 0xdbce: WORD 'WDBD0' codep=0x1d29 parp=0xdbd0
// ================================================
// orphan
// 0xdbd0: db 0x3a 0x20 ': '

// ================================================
// 0xdbd2: WORD 'WDBD4' codep=0x1d29 parp=0xdbd4
// ================================================
// orphan
// 0xdbd4: db 0x3a 0x20 ': '

// ================================================
// 0xdbd6: WORD 'WDBD8' codep=0x1d29 parp=0xdbd8
// ================================================
// orphan
// 0xdbd8: db 0x3a 0x20 ': '

// ================================================
// 0xdbda: WORD 'WDBDC' codep=0x1d29 parp=0xdbdc
// ================================================
// orphan
// 0xdbdc: db 0x3a 0x20 ': '

// ================================================
// 0xdbde: WORD 'WDBE0' codep=0x1d29 parp=0xdbe0
// ================================================
// orphan
// 0xdbe0: db 0x3a 0x20 ': '

// ================================================
// 0xdbe2: WORD 'WDBE4' codep=0x1d29 parp=0xdbe4
// ================================================
// 0xdbe4: db 0x3a 0x20 ': '

// ================================================
// 0xdbe6: WORD 'WDBE8' codep=0x1d29 parp=0xdbe8
// ================================================
// 0xdbe8: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x43 0x4f 0x4e 0x41 0x4e 0x43 0x48 0x4f 0x52 0x2d 0x56 0x45 0xd2 0xac 0x3c 0xf5 0x37 0x33 0x33 0xce 0x43 0x4f 0x4e 0x41 0x4e ' ALLOT CONANCHOR-VE  < 733 CONAN'

// ================================================
// 0xdc08: WORD 'WDC0A' codep=0x1d29 parp=0xdc0a
// ================================================
// 0xdc0a: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xac ' ALLOT  '

// ================================================
// 0xdc12: WORD 'WDC14' codep=0x1d29 parp=0xdc14
// ================================================
// 0xdc14: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x41 0x4e 0x43 0x48 0x4f 0x52 0x2d 0x43 0x4e 0x54 0xb2 0xac 0x3c 0x4d 0xe9 0x58 0xdb 0xcc 0x53 0x45 0x54 0x52 0x45 0x4c 0x4f ' ALLOT ANCHOR-CNT  <M X  SETRELO'

// ================================================
// 0xdc34: WORD 'WDC36' codep=0x1d29 parp=0xdc36
// ================================================
// 0xdc36: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xa3 ' ALLOT  '

// ================================================
// 0xdc3e: WORD 'WDC40' codep=0x1d29 parp=0xdc40
// ================================================
// 0xdc40: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4f 0x52 0x3e 0x43 0x4f 0x4e 0x54 0x4f 0x55 0xd2 0xac 0x3c 0x83 0xe9 0x2c 0xdc 0xce 0x41 0x4e 0x43 0x48 0x4f 0x52 0x2d 0x43 0x4f 0x4e 0x54 0x4f 0x55 0xd2 0xac 0x3c 0x1f 0xea 0x17 0xdc 0xcd 0x53 0x55 0x42 ' ALLOT OR>CONTOU  <  ,  ANCHOR-CONTOU  <     SUB'

// ================================================
// 0xdc70: WORD 'WDC72' codep=0x1d29 parp=0xdc72
// ================================================
// 0xdc72: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xd4 0xac 0x3c 0x35 0xea 0xb6 0xdb 0xcd 0x46 0x52 0x41 0x43 0x54 0x2d 0x43 0x4f 0x4e ' ALLOT   <5    FRACT-CON'

// ================================================
// 0xdc8a: WORD 'WDC8C' codep=0x7394 parp=0xdc8c
// ================================================
LoadDataType WDC8C = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xdc92: WORD 'WDC94' codep=0x1d29 parp=0xdc94
// ================================================
// orphan
// 0xdc94: db 0x8b 0xc1 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0x03 0xc1 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0x03 0xc2 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0xc3 0x94 0xdc 0x99 0xdc 0xa8 0xdc 0xb2 0xdc 0xc1 0xdc '   )     @    @   )     @   )     @    @   )              '

// ================================================
// 0xdcce: WORD 'WDCD0' codep=0x1d29 parp=0xdcd0 params=0 returns=1
// ================================================
// 0xdcd0: shl    bx,1
// 0xdcd2: add    bx,DCC4
// 0xdcd6: mov    ax,[bx]
// 0xdcd8: jmp    ax

// ================================================
// 0xdcda: WORD 'WDCDC' codep=0xdcdc parp=0xdcdc
// ================================================
// 0xdcdc: pop    word ptr [DBD4] // WDBD4
// 0xdce0: pop    word ptr [DBD8] // WDBD8
// 0xdce4: mov    bx,[DBD0] // WDBD0
// 0xdce8: add    bx,0E
// 0xdceb: mov    cx,[bx]
// 0xdced: sub    bx,04
// 0xdcf0: mov    dx,[bx]
// 0xdcf2: mov    bx,[DBD8] // WDBD8
// 0xdcf6: call   DCD0
// 0xdcf9: push   ax
// 0xdcfa: mov    bx,[DBD0] // WDBD0
// 0xdcfe: add    bx,02
// 0xdd01: mov    cx,[bx]
// 0xdd03: add    bx,04
// 0xdd06: mov    dx,[bx]
// 0xdd08: mov    bx,[DBD8] // WDBD8
// 0xdd0c: call   DCD0
// 0xdd0f: mov    dx,ax
// 0xdd11: pop    cx
// 0xdd12: mov    bx,[DBD4] // WDBD4
// 0xdd16: call   DCD0
// 0xdd19: push   ax
// 0xdd1a: mov    bx,[DBD0] // WDBD0
// 0xdd1e: mov    dx,[bx]
// 0xdd20: add    bx,0C
// 0xdd23: mov    cx,[bx]
// 0xdd25: mov    bx,[DBD4] // WDBD4
// 0xdd29: call   DCD0
// 0xdd2c: push   ax
// 0xdd2d: mov    bx,[DBD0] // WDBD0
// 0xdd31: add    bx,04
// 0xdd34: mov    dx,[bx]
// 0xdd36: add    bx,04
// 0xdd39: mov    cx,[bx]
// 0xdd3b: mov    bx,[DBD4] // WDBD4
// 0xdd3f: call   DCD0
// 0xdd42: mov    dx,ax
// 0xdd44: pop    cx
// 0xdd45: mov    bx,[DBD8] // WDBD8
// 0xdd49: call   DCD0
// 0xdd4c: push   ax
// 0xdd4d: lodsw
// 0xdd4e: mov    bx,ax
// 0xdd50: jmp    word ptr [bx]

// ================================================
// 0xdd52: WORD 'WDD54' codep=0x224c parp=0xdd54
// ================================================
// orphan

void WDD54() // WDD54
{
  unsigned short int i, imax, j, jmax;
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _n_COLZ(); // #COLZ
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ACELLAD(); // ACELLAD
      A_at_(); // A@
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xdd74: WORD 'WDD76' codep=0x224c parp=0xdd76
// ================================================

void WDD76() // WDD76
{
  unsigned short int i, imax, j, jmax;
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop() - 1); //  1-

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    _n_COLZ(); // #COLZ
    Push(Pop() - 1); //  1-

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ACELLAD(); // ACELLAD
      A_ex_(); // A!
      Push(-1);
      int step = Pop();
      j += step;
      if (((step>=0) && (j>=jmax)) || ((step<0) && (j<=jmax))) break;
    } while(1); // (+LOOP)

    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xdd9c: WORD 'WDD9E' codep=0x224c parp=0xdd9e
// ================================================

void WDD9E() // WDD9E
{
  unsigned short int i, imax, j, jmax;
  Push(pp_SPHEREW); // SPHEREW
  _099(); // 099
  Push(0x6af2); // 'GVERTEX'
  SETLARR(); // SETLARR
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(6);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j * 0x0020 - 0x004e); // I 0x0020 * 0x004e -
      Push(0);
      Push(i * 0x0020 - 0x004e); // J 0x0020 * 0x004e -
      Push(i * 6 + j); // J 6 * I +
      Push(1);
      WDD76(); // WDD76
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xddea: WORD 'WDDEC' codep=0x224c parp=0xddec
// ================================================

void WDDEC() // WDDEC
{
  unsigned short int i, imax, j, jmax;
  Push(pp_SPHEREW); // SPHEREW
  _099(); // 099
  Push(0x6af2); // 'GVERTEX'
  SETLARR(); // SETLARR
  Push(9);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(9);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j * 4 - 0x000e); // I 4 * 0x000e -
      Push(0);
      Push(i * 4 - 0x000e); // J 4 * 0x000e -
      Push((i * 9 + j) + 0x0024); // J 9 * I + 0x0024 +
      Push(1);
      WDD76(); // WDD76
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xde3a: WORD 'SETQUAD' codep=0xde46 parp=0xde46
// ================================================
// 0xde46: mov    [DBD0],sp // WDBD0
// 0xde4a: lodsw
// 0xde4b: mov    bx,ax
// 0xde4d: jmp    word ptr [bx]

// ================================================
// 0xde4f: WORD 'C*/' codep=0xde57 parp=0xde57
// ================================================
// 0xde57: pop    dx
// 0xde58: pop    cx
// 0xde59: pop    ax
// 0xde5a: imul   cl
// 0xde5c: idiv   dl
// 0xde5e: cbw    
// 0xde5f: push   ax
// 0xde60: lodsw
// 0xde61: mov    bx,ax
// 0xde63: jmp    word ptr [bx]

// ================================================
// 0xde65: WORD 'WDE67' codep=0x224c parp=0xde67 params=0 returns=0
// ================================================

void WDE67() // WDE67
{
  Push(Read16(pp_WDB78) - Read16(pp_WDB84)); // WDB78 @ WDB84 @ -
  Push(pp_WDB90); // WDB90
  Store_2(); // !_2
  Push(Read16(pp_WDB7C) - Read16(pp_WDB88)); // WDB7C @ WDB88 @ -
  Push(pp_WDB94); // WDB94
  Store_2(); // !_2
  Push(Read16(pp_WDB80) - Read16(pp_WDB8C)); // WDB80 @ WDB8C @ -
  Push(pp_WDB98); // WDB98
  Store_2(); // !_2
}


// ================================================
// 0xde93: WORD 'WDE95' codep=0x224c parp=0xde95 params=0 returns=0
// ================================================

void WDE95() // WDE95
{
  Push(Read16(pp_WDB98) * Read16(cc_WDB36)); // WDB98 @ WDB36 *
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  Push(Read16(pp_WDB90) * Read16(cc_WDB36)); // WDB90 @ WDB36 *
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_WDB9C); // WDB9C
  Store_2(); // !_2
}


// ================================================
// 0xdeb7: WORD 'WDEB9' codep=0x224c parp=0xdeb9 params=0 returns=0
// ================================================

void WDEB9() // WDEB9
{
  Push(Read16(pp_WDB9C)); // WDB9C @
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  Push(Read16(pp_WDB94) * Read16(cc_WDB36)); // WDB94 @ WDB36 *
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_WDBA8); // WDBA8
  Store_2(); // !_2
}


// ================================================
// 0xded7: WORD 'WDED9' codep=0x224c parp=0xded9 params=0 returns=0
// ================================================

void WDED9() // WDED9
{
  Push(Read16(pp_WDB90)); // WDB90 @
  Push(Read16(cc_WDB36)); // WDB36
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Read16(pp_WDB9C)); // WDB9C @
  _star__slash_(); // */
  Push(pp_WDBA0); // WDBA0
  Store_2(); // !_2
}


// ================================================
// 0xdeef: WORD 'WDEF1' codep=0x224c parp=0xdef1 params=0 returns=0
// ================================================

void WDEF1() // WDEF1
{
  Push(Read16(pp_WDB98)); // WDB98 @
  Push(Read16(cc_WDB36)); // WDB36
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Read16(pp_WDB9C)); // WDB9C @
  _star__slash_(); // */
  Push(pp_WDBA4); // WDBA4
  Store_2(); // !_2
}


// ================================================
// 0xdf07: WORD 'WDF09' codep=0x224c parp=0xdf09 params=0 returns=0
// ================================================

void WDF09() // WDF09
{
  Push(Read16(pp_WDB94)); // WDB94 @
  Push(Read16(cc_WDB36)); // WDB36
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Read16(pp_WDBA8)); // WDBA8 @
  _star__slash_(); // */
  Push(pp_WDBAC); // WDBAC
  Store_2(); // !_2
}


// ================================================
// 0xdf1f: WORD 'WDF21' codep=0x224c parp=0xdf21 params=0 returns=0
// ================================================

void WDF21() // WDF21
{
  Push(Read16(pp_WDB9C)); // WDB9C @
  Push(Read16(cc_WDB36)); // WDB36
  Push(Read16(pp_WDBA8)); // WDBA8 @
  _star__slash_(); // */
  Push(pp_WDBB0); // WDBB0
  Store_2(); // !_2
}


// ================================================
// 0xdf33: WORD 'WDF35' codep=0x224c parp=0xdf35
// ================================================

void WDF35() // WDF35
{
  Push(Read16(pp_WDBA4)); // WDBA4 @
  Push(Read16(pp_WDBB8)); // WDBB8 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(Read16(pp_WDBA0)); // WDBA0 @
  Push(Read16(pp_WDBAC)); // WDBAC @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(Read16(pp_WDBB4)); // WDBB4 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(Pop() + Pop()); // +
  Push(pp_WDC72); // WDC72
  C_ex__2(); // C!_2
}


// ================================================
// 0xdf5d: WORD 'WDF5F' codep=0x224c parp=0xdf5f
// ================================================

void WDF5F() // WDF5F
{
  Push(Read16(pp_WDBB0)); // WDBB0 @
  Push(Read16(pp_WDBB4)); // WDBB4 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(-Pop()); //  NEGATE
  Push(pp_WDC72 + 2); // WDC72 2+
  C_ex__2(); // C!_2
}


// ================================================
// 0xdf75: WORD 'WDF77' codep=0x224c parp=0xdf77
// ================================================

void WDF77() // WDF77
{
  Push(Read16(pp_WDBA0)); // WDBA0 @
  Push(Read16(pp_WDBB8)); // WDBB8 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(-Pop()); //  NEGATE
  Push(Read16(pp_WDBA4)); // WDBA4 @
  Push(Read16(pp_WDBAC)); // WDBAC @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(Read16(pp_WDBB4)); // WDBB4 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(Pop() + Pop()); // +
  Push(pp_WDC72 + 4); // WDC72 4 +
  C_ex__2(); // C!_2
}


// ================================================
// 0xdfa5: WORD 'WDFA7' codep=0x224c parp=0xdfa7
// ================================================

void WDFA7() // WDFA7
{
  Push(Read16(pp_WDBA4)); // WDBA4 @
  Push(Read16(pp_WDBB4)); // WDBB4 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(Read16(pp_WDBA0)); // WDBA0 @
  Push(Read16(pp_WDBAC)); // WDBAC @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(Read16(pp_WDBB8)); // WDBB8 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  _dash_(); // -
  Push(pp_WDC72 + 8); // WDC72 8 +
  C_ex__2(); // C!_2
}


// ================================================
// 0xdfd3: WORD 'WDFD5' codep=0x224c parp=0xdfd5
// ================================================

void WDFD5() // WDFD5
{
  Push(Read16(pp_WDBB0)); // WDBB0 @
  Push(Read16(pp_WDBB8)); // WDBB8 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(pp_WDC72 + 0x000a); // WDC72 0x000a +
  C_ex__2(); // C!_2
}


// ================================================
// 0xdfed: WORD 'WDFEF' codep=0x224c parp=0xdfef
// ================================================

void WDFEF() // WDFEF
{
  Push(Read16(pp_WDBA0)); // WDBA0 @
  Push(Read16(pp_WDBB4)); // WDBB4 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(-Pop()); //  NEGATE
  Push(Read16(pp_WDBA4)); // WDBA4 @
  Push(Read16(pp_WDBAC)); // WDBAC @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(Read16(pp_WDBB8)); // WDBB8 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  _dash_(); // -
  Push(pp_WDC72 + 0x000c); // WDC72 0x000c +
  C_ex__2(); // C!_2
}


// ================================================
// 0xe01f: WORD 'WE021' codep=0x224c parp=0xe021
// ================================================

void WE021() // WE021
{
  Push(Read16(pp_WDBA0)); // WDBA0 @
  Push(Read16(pp_WDBB0)); // WDBB0 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(-Pop()); //  NEGATE
  Push(pp_WDC72 + 0x0010); // WDC72 0x0010 +
  C_ex__2(); // C!_2
}


// ================================================
// 0xe03b: WORD 'WE03D' codep=0x224c parp=0xe03d params=0 returns=0
// ================================================

void WE03D() // WE03D
{
  Push(-Read16(pp_WDBAC)); // WDBAC @ NEGATE
  Push(pp_WDC72 + 0x0012); // WDC72 0x0012 +
  C_ex__2(); // C!_2
}


// ================================================
// 0xe04f: WORD 'WE051' codep=0x224c parp=0xe051
// ================================================

void WE051() // WE051
{
  Push(Read16(pp_WDBA4)); // WDBA4 @
  Push(Read16(pp_WDBB0)); // WDBB0 @
  Push(Read16(cc_WDB36)); // WDB36
  C_star__slash_(); // C*/
  Push(-Pop()); //  NEGATE
  Push(pp_WDC72 + 0x0014); // WDC72 0x0014 +
  C_ex__2(); // C!_2
}


// ================================================
// 0xe06b: WORD 'WE06D' codep=0x224c parp=0xe06d params=0 returns=0
// ================================================

void WE06D() // WE06D
{
  Push(Read16(pp_WDBA8)); // WDBA8 @
  Push(pp_WDC72 + 0x0016); // WDC72 0x0016 +
  Store_2(); // !_2
}


// ================================================
// 0xe07d: WORD 'WE07F' codep=0x224c parp=0xe07f
// ================================================

void WE07F() // WE07F
{
  Push(pp_WDC72); // WDC72
  Push(0x0018);
  Push(0);
  FILL_2(); // FILL_2
  WDE67(); // WDE67
  WDE95(); // WDE95
  WDEB9(); // WDEB9
  WDED9(); // WDED9
  WDEF1(); // WDEF1
  WDF09(); // WDF09
  WDF21(); // WDF21
  WDF35(); // WDF35
  WDF5F(); // WDF5F
  WDF77(); // WDF77
  WDFA7(); // WDFA7
  WDFD5(); // WDFD5
  WDFEF(); // WDFEF
  WE021(); // WE021
  WE03D(); // WE03D
  WE051(); // WE051
  WE06D(); // WE06D
}


// ================================================
// 0xe0ad: WORD 'WE0AF' codep=0xe0af parp=0xe0af
// ================================================
// 0xe0af: push   si
// 0xe0b0: push   di
// 0xe0b1: push   es
// 0xe0b2: mov    cx,[5F56] // 3DSEG
// 0xe0b6: mov    es,cx
// 0xe0b8: mov    si,[57D4] // VIN
// 0xe0bc: mov    di,[5F61] // VIN'
// 0xe0c0: mov    cx,[57BF] // #IN
// 0xe0c4: mov    dl,[DB84] // WDB84
// 0xe0c8: mov    dh,[DB88] // WDB88
// 0xe0cc: mov    bl,[DB8C] // WDB8C
// 0xe0d0: es:    
// 0xe0d1: mov    al,[si]
// 0xe0d3: sub    al,dl
// 0xe0d5: es:    
// 0xe0d6: mov    [di],al
// 0xe0d8: inc    si
// 0xe0d9: inc    di
// 0xe0da: es:    
// 0xe0db: mov    al,[si]
// 0xe0dd: sub    al,dh
// 0xe0df: es:    
// 0xe0e0: mov    [di],al
// 0xe0e2: inc    si
// 0xe0e3: inc    di
// 0xe0e4: es:    
// 0xe0e5: mov    al,[si]
// 0xe0e7: sub    al,bl
// 0xe0e9: es:    
// 0xe0ea: mov    [di],al
// 0xe0ec: inc    si
// 0xe0ed: inc    di
// 0xe0ee: loop   E0D0
// 0xe0f0: pop    es
// 0xe0f1: pop    di
// 0xe0f2: pop    si
// 0xe0f3: lodsw
// 0xe0f4: mov    bx,ax
// 0xe0f6: jmp    word ptr [bx]

// ================================================
// 0xe0f8: WORD 'WE0FA' codep=0xe0fa parp=0xe0fa
// ================================================
// 0xe0fa: push   di
// 0xe0fb: push   bp
// 0xe0fc: push   si
// 0xe0fd: mov    si,DC72
// 0xe100: mov    cx,0003
// 0xe103: mov    dh,[si]
// 0xe105: add    si,02
// 0xe108: mov    dl,[si]
// 0xe10a: add    si,02
// 0xe10d: mov    bh,[si]
// 0xe10f: add    si,02
// 0xe112: mov    ax,[si]
// 0xe114: mov    [DBBC],ax // WDBBC
// 0xe118: add    si,02
// 0xe11b: push   si
// 0xe11c: push   cx
// 0xe11d: sub    cx,03
// 0xe120: neg    cx
// 0xe122: shl    cx,1
// 0xe124: add    cx,[57DF] // VOUT
// 0xe128: mov    di,cx
// 0xe12a: mov    si,[5F61] // VIN'
// 0xe12e: push   es
// 0xe12f: mov    cx,[5F56] // 3DSEG
// 0xe133: mov    es,cx
// 0xe135: mov    cx,[57BF] // #IN
// 0xe139: mov    bp,[DBBC] // WDBBC
// 0xe13d: es:    
// 0xe13e: mov    al,[si]
// 0xe140: inc    si
// 0xe141: imul   dh
// 0xe143: add    bp,ax
// 0xe145: es:    
// 0xe146: mov    al,[si]
// 0xe148: inc    si
// 0xe149: imul   dl
// 0xe14b: add    bp,ax
// 0xe14d: es:    
// 0xe14e: mov    al,[si]
// 0xe150: inc    si
// 0xe151: imul   bh
// 0xe153: add    bp,ax
// 0xe155: es:    
// 0xe156: mov    [di],bp
// 0xe158: add    di,06
// 0xe15b: loop   E139
// 0xe15d: pop    es
// 0xe15e: pop    cx
// 0xe15f: pop    si
// 0xe160: loop   E103
// 0xe162: pop    si
// 0xe163: pop    bp
// 0xe164: pop    di
// 0xe165: lodsw
// 0xe166: mov    bx,ax
// 0xe168: jmp    word ptr [bx]

// ================================================
// 0xe16a: WORD 'WE16C' codep=0xe16c parp=0xe16c
// ================================================
// 0xe16c: push   di
// 0xe16d: push   bp
// 0xe16e: push   si
// 0xe16f: push   es
// 0xe170: mov    di,[57DF] // VOUT
// 0xe174: add    di,04
// 0xe177: mov    si,[5F6F] // YSCREEN
// 0xe17b: mov    cx,[5F56] // 3DSEG
// 0xe17f: mov    es,cx
// 0xe181: mov    bp,[DBC4] // WDBC4
// 0xe185: mov    cx,[57BF] // #IN
// 0xe189: es:    
// 0xe18a: mov    bx,[di]
// 0xe18c: sub    di,02
// 0xe18f: es:    
// 0xe190: mov    ax,[di]
// 0xe192: imul   bp
// 0xe194: idiv   bx
// 0xe196: add    ax,si
// 0xe198: es:    
// 0xe199: mov    [di],ax
// 0xe19b: sub    di,02
// 0xe19e: es:    
// 0xe19f: mov    ax,[di]
// 0xe1a1: imul   word ptr [DBC0] // WDBC0
// 0xe1a5: idiv   bx
// 0xe1a7: add    ax,[5F7D] // XSCREEN
// 0xe1ab: es:    
// 0xe1ac: mov    [di],ax
// 0xe1ae: add    di,0A
// 0xe1b1: loop   E189
// 0xe1b3: pop    es
// 0xe1b4: pop    si
// 0xe1b5: pop    bp
// 0xe1b6: pop    di
// 0xe1b7: lodsw
// 0xe1b8: mov    bx,ax
// 0xe1ba: jmp    word ptr [bx]

// ================================================
// 0xe1bc: WORD 'WE1BE' codep=0x224c parp=0xe1be params=1 returns=1
// ================================================

void WE1BE() // WE1BE
{
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(1);
    SWAP(); // SWAP
  } else
  {
    Push(Read16(regsp)); // DUP
    Push(0x0018);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(1);
      SWAP(); // SWAP
      Push(-(Pop() - 0x0017)); //  0x0017 - NEGATE
    } else
    {
      Push(Read16(regsp)); // DUP
      Push(0x0024);
      _st_(); // <
      if (Pop() != 0)
      {
        Push(-1);
        SWAP(); // SWAP
        Push(Pop() - 0x0018); //  0x0018 -
      } else
      {
        Push(-1);
        SWAP(); // SWAP
        Push(-(Pop() - 0x002f)); //  0x002f - NEGATE
      }
    }
  }
  Push(Read16(Pop() + pp_WDB42)&0xFF); //  WDB42 + C@
  SWAP(); // SWAP
  Push(Pop()==-1?1:0); //  -1 =
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe228: WORD 'WE22A' codep=0x224c parp=0xe22a params=1 returns=1
// ================================================

void WE22A() // WE22A
{
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(1);
    SWAP(); // SWAP
    Push(-(Pop() - 0x000b)); //  0x000b - NEGATE
  } else
  {
    Push(Read16(regsp)); // DUP
    Push(0x0018);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(-1);
      SWAP(); // SWAP
      Push(Pop() - 0x000c); //  0x000c -
    } else
    {
      Push(Read16(regsp)); // DUP
      Push(0x0024);
      _st_(); // <
      if (Pop() != 0)
      {
        Push(-1);
        SWAP(); // SWAP
        Push(-(Pop() - 0x0023)); //  0x0023 - NEGATE
      } else
      {
        Push(1);
        SWAP(); // SWAP
        Push(Pop() - 0x0024); //  0x0024 -
      }
    }
  }
  Push(Read16(Pop() + pp_WDB42)&0xFF); //  WDB42 + C@
  SWAP(); // SWAP
  Push(Pop()==-1?1:0); //  -1 =
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe29a: WORD 'WE29C' codep=0x224c parp=0xe29c params=1 returns=1
// ================================================

void WE29C() // WE29C
{
  Push(Read16(regsp)); // DUP
  Push(Pop() - 0x000b); //  0x000b -
  ABS(); // ABS
  OVER(); // OVER
  Push(0x000b);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop() - 1); //  1-
  }
  Push(Read16(Pop() + pp_WDB42)&0xFF); //  WDB42 + C@
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe2ca: WORD 'WE2CC' codep=0x224c parp=0xe2cc params=1 returns=1
// ================================================

void WE2CC() // WE2CC
{
  Push(Read16(regsp)); // DUP
  Push(0x000b);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x0017);
    SWAP(); // SWAP
    _dash_(); // -
    ABS(); // ABS
  }
  Push(Read16(Pop() + pp_WDB42)&0xFF); //  WDB42 + C@
}


// ================================================
// 0xe2ea: WORD 'WE2EC' codep=0x224c parp=0xe2ec params=1 returns=0
// ================================================

void WE2EC() // WE2EC
{
  Push(Read16(regsp)); // DUP
  Push(pp_WDBC0); // WDBC0
  Store_2(); // !_2
  Push(0x00b0);
  Push(0x0064);
  _star__slash_(); // */
  Push(pp_WDBC4); // WDBC4
  Store_2(); // !_2
}


// ================================================
// 0xe302: WORD 'WE304' codep=0x224c parp=0xe304
// ================================================

void WE304() // WE304
{
  Push(Read16(pp_WDBC8)); // WDBC8 @
  Push(Read16(regsp)); // DUP
  WE29C(); // WE29C
  Push(pp_WDBAC); // WDBAC
  Store_2(); // !_2
  WE2CC(); // WE2CC
  Push(pp_WDBB0); // WDBB0
  Store_2(); // !_2
  Push(Read16(pp_WDBCC)); // WDBCC @
  Push(Read16(regsp)); // DUP
  WE1BE(); // WE1BE
  Push(pp_WDBA0); // WDBA0
  Store_2(); // !_2
  WE22A(); // WE22A
  Push(pp_WDBA4); // WDBA4
  Store_2(); // !_2
  Push(Read16(cc_WDB3A) * Read16(cc_WDB36)); // WDB3A WDB36 *
  Push(pp_WDBA8); // WDBA8
  Store_2(); // !_2
  Push(pp_WDC72); // WDC72
  Push(0x0018);
  Push(0);
  FILL_2(); // FILL_2
  WDF35(); // WDF35
  WDF5F(); // WDF5F
  WDF77(); // WDF77
  WDFA7(); // WDFA7
  WDFD5(); // WDFD5
  WDFEF(); // WDFEF
  WE021(); // WE021
  WE03D(); // WE03D
  WE051(); // WE051
  WE06D(); // WE06D
}


// ================================================
// 0xe352: WORD 'WE354' codep=0x224c parp=0xe354
// ================================================

void WE354() // WE354
{
  Push(0x0086);
  Push(pp__n_IN); // #IN
  Store_2(); // !_2
  Push(0x6b67); // 'XFORMVE'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(pp__3DSEG); // 3DSEG
  Store_2(); // !_2
  Push(0);
  Push(pp_VOUT); // VOUT
  Store_2(); // !_2
  Push(0x6aa9); // 'VERTEX'
  Push(Read16(Pop() + 6) - Read16(pp__3DSEG) >> 4); //  6 + @ 3DSEG @ - 16*
  Push(pp_VIN_i_); // VIN'
  Store_2(); // !_2
  Push(0x003c);
  Push(pp_YSCREEN); // YSCREEN
  Store_2(); // !_2
  Push(0x0024);
  Push(pp_XSCREEN); // XSCREEN
  Store_2(); // !_2
  WE0FA(); // WE0FA
  Push(0x003e);
  Push(pp__n_IN); // #IN
  Store_2(); // !_2
  WE16C(); // WE16C
}


// ================================================
// 0xe3a4: WORD 'WE3A6' codep=0x224c parp=0xe3a6 params=1 returns=1
// ================================================

void WE3A6() // WE3A6
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(0);
  SWAP(); // SWAP
  ReadArray(FACET); // FACET
  LC_at_(); // LC@
  Push(4);
  SWAP(); // SWAP
  ReadArray(XFORMVE); // XFORMVE
  L_at_(); // L@
  Push(a + 0x003e); // R> 0x003e +
  Push(4);
  SWAP(); // SWAP
  ReadArray(XFORMVE); // XFORMVE
  L_at_(); // L@
  _gt_(); // >
}


// ================================================
// 0xe3ce: WORD 'WE3D0' codep=0xe3d0 parp=0xe3d0
// ================================================
// 0xe3d0: mov    cx,0004
// 0xe3d3: mov    bx,DBE8
// 0xe3d6: add    bx,0E
// 0xe3d9: pop    ax
// 0xe3da: pop    dx
// 0xe3db: mov    [bx],dx
// 0xe3dd: sub    bx,02
// 0xe3e0: mov    [bx],ax
// 0xe3e2: sub    bx,02
// 0xe3e5: loop   E3D9
// 0xe3e7: lodsw
// 0xe3e8: mov    bx,ax
// 0xe3ea: jmp    word ptr [bx]

// ================================================
// 0xe3ec: WORD 'WE3EE' codep=0xe3ee parp=0xe3ee
// ================================================
// 0xe3ee: add    sp,10
// 0xe3f1: lodsw
// 0xe3f2: mov    bx,ax
// 0xe3f4: jmp    word ptr [bx]

// ================================================
// 0xe3f6: WORD 'WE3F8' codep=0x224c parp=0xe3f8
// ================================================

void WE3F8() // WE3F8
{
  unsigned short int a, b;
  Push(Read16(cc_POLYSEG)); // POLYSEG
  a = Pop(); // >R
  b = Pop(); // >R
  Push(a); // I'
  Push(b); // I
  LC_at_(); // LC@
  StoreCOLOR(); // !COLOR
  Push(a); // I'
  Push(b + 1); // I 1+
  LC_at_(); // LC@
  Push(a); // I'
  Push(b + 2); // I 2+
  LC_at_(); // LC@
  WDCDC(); // WDCDC
  Push(a); // I'
  Push(b + 3); // I 3 +
  LC_at_(); // LC@
  Push(a); // I'
  Push(b + 2); // I 2+
  LC_at_(); // LC@
  WDCDC(); // WDCDC
  Push(a); // I'
  Push(b + 3); // I 3 +
  LC_at_(); // LC@
  Push(a); // I'
  Push(b + 4); // I 4 +
  LC_at_(); // LC@
  WDCDC(); // WDCDC
  Push(a); // I'
  Push(b + 1); // I 1+
  LC_at_(); // LC@
  Push(b); // R>
  Push(a); // R>
  SWAP(); // SWAP
  Push(Pop() + 4); //  4 +
  LC_at_(); // LC@
  WDCDC(); // WDCDC
  WE3D0(); // WE3D0
  Push(pp_WDBE8); // WDBE8
  Push(pp_VIN); // VIN
  Store_2(); // !_2
  Push(pp_WDC14); // WDC14
  Push(pp_VOUT); // VOUT
  Store_2(); // !_2
  Push(pp_WDC0A); // WDC0A
  Push(pp_OIN); // OIN
  Store_2(); // !_2
  Push(pp_WDC36); // WDC36
  Push(pp_OOUT); // OOUT
  Store_2(); // !_2
  Push(0);
  Push(pp_IsOPEN); // ?OPEN
  Store_2(); // !_2
  Push(4);
  Push(pp__n_IN); // #IN
  Store_2(); // !_2
  CLIPPER(); // CLIPPER
  Push(Read16(pp__n_IN)); // #IN @
  Push(2);
  _gt_(); // >
  if (Pop() == 0) return;
  SCANPOL(); // SCANPOL
  LFILLPO(); // LFILLPO
}


// ================================================
// 0xe492: WORD 'WE494' codep=0x224c parp=0xe494 params=1 returns=2
// ================================================

void WE494() // WE494
{
  Push(0);
  OVER(); // OVER
  ReadArray(XFORMVE); // XFORMVE
  L_at_(); // L@
  Push(2);
  ROT(); // ROT
  ReadArray(XFORMVE); // XFORMVE
  L_at_(); // L@
}


// ================================================
// 0xe4a6: WORD 'WE4A8' codep=0x224c parp=0xe4a8
// ================================================

void WE4A8() // WE4A8
{
  unsigned short int a, b;
  Push(0);
  SWAP(); // SWAP
  ReadArray(FACET); // FACET
  a = Pop(); // >R
  b = Pop(); // >R
  Push(b); // I
  Push(a); // I'
  LC_at_(); // LC@
  WE494(); // WE494
  Push(b); // I
  Push(a + 1); // I' 1+
  LC_at_(); // LC@
  WE494(); // WE494
  Push(b); // I
  Push(a + 2); // I' 2+
  LC_at_(); // LC@
  WE494(); // WE494
  Push(b); // R>
  Push(a + 3); // R> 3 +
  LC_at_(); // LC@
  WE494(); // WE494
  SETQUAD(); // SETQUAD
}


// ================================================
// 0xe4de: WORD 'WE4E0' codep=0x224c parp=0xe4e0
// ================================================

void WE4E0() // WE4E0
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_IsNEB)); // ?NEB @
  if (Pop() != 0)
  {
    NBCLR(); // NBCLR
  } else
  {
    GetColor(BLACK);
  }
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WDBC0)); // WDBC0 @
  Push(6);
  Push(0x000b);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  Push(Pop() + 4); //  4 +
  Push(Read16(pp_WDBC0)); // WDBC0 @
  Push(0x0032);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  _2DUP(); // 2DUP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0024);
    Push(0x003c);
    Push(i); // I
    DrawCIRCLE_1(); // .CIRCLE_1
    i++;
  } while(i<imax); // (LOOP)


  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    Push(0x0024);
    Push(0x003d);
    Push(j); // I
    DrawCIRCLE_1(); // .CIRCLE_1
    j++;
  } while(j<jmax); // (LOOP)

}


// ================================================
// 0xe53c: WORD 'WE53E' codep=0x1d29 parp=0xe53e
// ================================================
// 0xe53e: db 0x3a 0x20 ': '

// ================================================
// 0xe540: WORD 'WE542' codep=0x224c parp=0xe542
// ================================================

void WE542() // WE542
{
  unsigned short int i, imax, j, jmax;
  WE304(); // WE304
  WE354(); // WE354
  Push(pp_WE53E); // WE53E
  _099(); // 099
  Push(0x0048);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WE3A6(); // WE3A6
    if (Pop() != 0)
    {
      Push(i); // I
      WE4A8(); // WE4A8
      Push(0);
      Push(i); // I
      ReadArray(FACE); // FACE
      L_at_(); // L@
      Push(2);
      Push(i); // I
      ReadArray(FACE); // FACE
      LC_at_(); // LC@
      Push(0);

      j = Pop();
      jmax = Pop();
      do // (DO)
      {
        Push(Read16(regsp)); // DUP
        WE3F8(); // WE3F8
        Push(Pop() + 5); //  5 +
        j++;
      } while(j<jmax); // (LOOP)

      Pop(); // DROP
      WE3EE(); // WE3EE
    }
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    if (Pop() != 0)
    {
      Push(pp_WE53E); // WE53E
      ON_2(); // ON_2
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  WE4E0(); // WE4E0
}


// ================================================
// 0xe596: WORD 'WE598' codep=0x224c parp=0xe598 params=1 returns=3
// ================================================

void WE598() // WE598
{
  Push(0x0028);
  _slash_(); // /
  Push(0x0017);
  SWAP(); // SWAP
  _dash_(); // -
  SWAP(); // SWAP
  Push(0x0030);
  _slash_(); // /
  SWAP(); // SWAP
}


// ================================================
// 0xe5b2: WORD 'WE5B4' codep=0x224c parp=0xe5b4 params=1 returns=0
// ================================================

void WE5B4() // WE5B4
{
  unsigned short int i, imax;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(0x0047);
    RRND(); // RRND
    Push(0);
    Push(0x0077);
    RRND(); // RRND
    LPLOT(); // LPLOT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe5d0: WORD 'WE5D2' codep=0x224c parp=0xe5d2
// ================================================

void WE5D2() // WE5D2
{
  NBCLR(); // NBCLR
  StoreCOLOR(); // !COLOR
  Push(!Read16(pp_IsNEB)); // ?NEB @ NOT
  if (Pop() != 0)
  {
    DARK(); // DARK
    Push(Read16(pp_GLOBALS)); // GLOBALS @
    Push(pp_SEED_3); // SEED_3
    Store_2(); // !_2
    Push(1);
    Push(4);
    RRND(); // RRND
    WE5B4(); // WE5B4
    GetColor(WHITE);
    StoreCOLOR(); // !COLOR
    Push(2);
    Push(5);
    RRND(); // RRND
    WE5B4(); // WE5B4
    GetColor(RED);
    StoreCOLOR(); // !COLOR
    Push(2);
    Push(5);
    RRND(); // RRND
    WE5B4(); // WE5B4
    GetColor(GREY1);
    StoreCOLOR(); // !COLOR
    Push(4);
    Push(9);
    RRND(); // RRND
    WE5B4(); // WE5B4
    return;
  }
  BFILL(); // BFILL
}


// ================================================
// 0xe61e: WORD 'WE620' codep=0x224c parp=0xe620
// ================================================

void WE620() // WE620
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
  WE5D2(); // WE5D2
  WE542(); // WE542
  Push(Read16(pp_WE53E)==0?1:0); // WE53E @ 0=
  if (Pop() != 0)
  {
    V_gt_DISPL(); // V>DISPL
  }
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xe63a: WORD 'SHOWSITE' codep=0x224c parp=0xe647
// ================================================
// entry

void SHOWSITE() // SHOWSITE
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  WE598(); // WE598
  Push(pp_WDBC8); // WDBC8
  Store_2(); // !_2
  Push(pp_WDBCC); // WDBCC
  Store_2(); // !_2
  WE620(); // WE620
}


// ================================================
// 0xe65d: WORD '>VIEWSITE' codep=0x224c parp=0xe66b
// ================================================

void _gt_VIEWSITE() // >VIEWSITE
{
  Push(0x012c - Read16(pp_WDBC0)); // 0x012c WDBC0 @ -
  Push(5);
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(pp_WDBE4); // WDBE4
  Store_2(); // !_2
  while(1)
  {
    SHOWSITE(); // SHOWSITE
    Push(Read16(pp_WDBC0)); // WDBC0 @
    Push(Read16(regsp)); // DUP
    Push(!(Pop()==0x012c?1:0)); //  0x012c = NOT
    if (Pop() == 0) break;

    Push(Pop() + Read16(pp_WDBE4)); //  WDBE4 @ +
    Push(0x012c);
    MIN(); // MIN
    WE2EC(); // WE2EC
  }
  Pop(); // DROP
}


// ================================================
// 0xe6ab: WORD 'WE6AD' codep=0x224c parp=0xe6ad
// ================================================

void WE6AD() // WE6AD
{
  Push(Read16(pp_XLL)); // XLL @
  Push(Read16(pp_YLL)); // YLL @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(Read16(pp_XUR)); // XUR @
  Push(Read16(pp_YLL)); // YLL @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(Read16(pp_XUR)); // XUR @
  Push(Read16(pp_YUR)); // YUR @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(Read16(pp_XLL)); // XLL @
  Push(Read16(pp_YLL)); // YLL @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push((Pop() >> 1) >> 1); //  2/ 2/
}


// ================================================
// 0xe6e9: WORD 'WE6EB' codep=0x224c parp=0xe6eb
// ================================================

void WE6EB() // WE6EB
{
  unsigned short int i, imax, j, jmax;
  Push(pp_SIGNEXT); // SIGNEXT
  ON_2(); // ON_2
  Push(pp_SPHEREW); // SPHEREW
  _099(); // 099
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  Push(9);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(9);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push((j * 8 + 1) + (Read16(pp_XVIS) - Read16(pp_XCON))); // I 8 * 1+ XVIS @ XCON @ - +
      Push((i * 6 + 1) + (Read16(pp_YVIS) - Read16(pp_YCON))); // J 6 * 1+ YVIS @ YCON @ - +
      OVER(); // OVER
      Push(Pop() + 8); //  8 +
      OVER(); // OVER
      Push(Pop() + 6); //  6 +
      SETREGI(); // SETREGI
      WE6AD(); // WE6AD
      Push(j); // I
      Push(i); // J
      ReadArray(_9X9COAR); // 9X9COAR
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe74f: WORD 'WE751' codep=0x224c parp=0xe751 params=0 returns=0
// ================================================

void WE751() // WE751
{
  unsigned short int i, imax, j, jmax;
  Push((Read16(pp_XABS) - 3) - Read16(pp_XCON)); // XABS @ 3 - XCON @ -
  Push(pp_X1); // X1
  Store_2(); // !_2
  Push((Read16(pp_YABS) + 3) - Read16(pp_YCON)); // YABS @ 3 + YCON @ -
  Push(pp_Y1); // Y1
  Store_2(); // !_2
  Push(9);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(9);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j + Read16(pp_X1)); // I X1 @ +
      Push(Read16(pp_Y1) - i); // Y1 @ J -
      ReadArray(CONTOUR); // CONTOUR
      LC_at_(); // LC@
      Push(j); // I
      Push(i); // J
      ReadArray(_9X9FINE); // 9X9FINE
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe7a7: WORD 'WE7A9' codep=0x224c parp=0xe7a9 params=1 returns=0
// ================================================

void WE7A9() // WE7A9
{
  unsigned short int i, imax, j, jmax;
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    OVER(); // OVER
    ReadArray(GPOLY); // GPOLY
    LC_at_(); // LC@
    Push(3);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      OVER(); // OVER
      ReadArray(GVERTEX); // GVERTEX
      LC_at_(); // LC@
      Push((i * 3 + j) + pp_WDC14); // J 3 * I + WDC14 +
      C_ex__2(); // C!_2
      j++;
    } while(j<jmax); // (LOOP)

    Pop(); // DROP
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe7e3: WORD 'WE7E5' codep=0x224c parp=0xe7e5 params=1 returns=0
// ================================================

void WE7E5() // WE7E5
{
  unsigned short int i, imax, j, jmax;
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    OVER(); // OVER
    ReadArray(GPOLY); // GPOLY
    LC_at_(); // LC@
    Push(2);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j * 2); // I 2*
      OVER(); // OVER
      ReadArray(XFORMVE); // XFORMVE
      L_at_(); // L@
      Push((i * 4 + pp_WDBE8) + -(j - 1) * 2); // J 4 * WDBE8 + I 1- NEGATE 2* +
      Store_2(); // !_2
      j++;
    } while(j<jmax); // (LOOP)

    Pop(); // DROP
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe827: WORD 'WE829' codep=0x224c parp=0xe829
// ================================================

void WE829() // WE829
{
  Push(0x0075);
  Push(pp__n_IN); // #IN
  Store_2(); // !_2
  Push(0x6b67); // 'XFORMVE'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(pp__3DSEG); // 3DSEG
  Store_2(); // !_2
  Push(0);
  Push(pp_VOUT); // VOUT
  Store_2(); // !_2
  Push(0x6b2b); // 'G1VERT'
  Push(Read16(Pop() + 6) - Read16(pp__3DSEG) >> 4); //  6 + @ 3DSEG @ - 16*
  Push(pp_VIN_i_); // VIN'
  Store_2(); // !_2
  Push(0x6af2); // 'GVERTEX'
  Push(Read16(Pop() + 6) - Read16(pp__3DSEG) >> 4); //  6 + @ 3DSEG @ - 16*
  Push(pp_VIN); // VIN
  Store_2(); // !_2
  Push(0x003c);
  Push(pp_YSCREEN); // YSCREEN
  Store_2(); // !_2
  Push(0x0024);
  Push(pp_XSCREEN); // XSCREEN
  Store_2(); // !_2
  WE0AF(); // WE0AF
  WE0FA(); // WE0FA
  WE16C(); // WE16C
}


// ================================================
// 0xe889: WORD 'WE88B' codep=0x224c parp=0xe88b params=1 returns=1
// ================================================

void WE88B() // WE88B
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(0);
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(a); // J
    ReadArray(GPOLY); // GPOLY
    LC_at_(); // LC@
    Push(4);
    SWAP(); // SWAP
    ReadArray(XFORMVE); // XFORMVE
    L_at_(); // L@
    Push(Pop() - Read16(cc_WDB36)); //  WDB36 -
    _0_gt_(); // 0>
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe8bb: WORD 'WE8BD' codep=0x224c parp=0xe8bd
// ================================================

void WE8BD() // WE8BD
{
  Push(4);
  Push(pp__n_IN); // #IN
  Store_2(); // !_2
  Push(pp_WDC14); // WDC14
  Push(pp_VIN); // VIN
  Store_2(); // !_2
  Push(pp_WDBE8); // WDBE8
  Push(pp_VIN_i_); // VIN'
  Store_2(); // !_2
  Push(pp_WDC40); // WDC40
  Push(pp_VOUT); // VOUT
  Store_2(); // !_2
  GetDS(); // @DS
  Push(pp__3DSEG); // 3DSEG
  Store_2(); // !_2
  WE0AF(); // WE0AF
  WE0FA(); // WE0FA
}


// ================================================
// 0xe8e1: WORD 'WE8E3' codep=0x224c parp=0xe8e3
// ================================================

void WE8E3() // WE8E3
{
  Push(0x3e80);
  Push(0x3e80);
  Push(Read16(cc_WDB36)); // WDB36
  Push(0xc180); // 'HEAL-O'
  SETCLIP(); // SETCLIP
}


// ================================================
// 0xe8f5: WORD 'WE8F7' codep=0x224c parp=0xe8f7 params=0 returns=0
// ================================================

void WE8F7() // WE8F7
{
  unsigned short int i, imax, a;
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i * 6 + pp_WDC40); // I 6 * WDC40 +
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())); //  @
    SWAP(); // SWAP
    Push(Read16(Pop() + 4)); //  4 + @
    Push((i * 2) * 2 + pp_WDBE8); // I 2* 2* WDBE8 +
    a = Pop(); // >R
    Push(a); // I
    Store_2(); // !_2
    Push(a + 2); // R> 2+
    Store_2(); // !_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe92f: WORD 'WE931' codep=0x224c parp=0xe931 params=0 returns=0
// ================================================

void WE931() // WE931
{
  unsigned short int i, imax, a;
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i * 6 + pp_WDC40); // I 6 * WDC40 +
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() + 2)); //  2 + @
    SWAP(); // SWAP
    Push(Read16(Pop() + 4)); //  4 + @
    Push((i * 2) * 2 + pp_WDBE8); // I 2* 2* WDBE8 +
    a = Pop(); // >R
    Push(a); // I
    Store_2(); // !_2
    Push(a + 2); // R> 2+
    Store_2(); // !_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe96d: WORD 'WE96F' codep=0x224c parp=0xe96f params=0 returns=0
// ================================================

void WE96F() // WE96F
{
  unsigned short int i, imax;
  Push(Read16(pp__n_IN)); // #IN @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16((Read16(pp_VIN) + (i * 2) * 2) + 2)); // VIN @ I 2* 2* + 2 + @
    Push(pp_WDC40 + i * 6); // WDC40 I 6 * +
    Store_2(); // !_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe99b: WORD 'WE99D' codep=0x224c parp=0xe99d params=0 returns=0
// ================================================

void WE99D() // WE99D
{
  unsigned short int i, imax;
  Push(Read16(pp__n_IN)); // #IN @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16((Read16(pp_VIN) + (i * 2) * 2) + 2)); // VIN @ I 2* 2* + 2 + @
    Push((pp_WDC40 + i * 6) + 2); // WDC40 I 6 * + 2+
    Store_2(); // !_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe9cb: WORD 'WE9CD' codep=0x224c parp=0xe9cd params=0 returns=0
// ================================================

void WE9CD() // WE9CD
{
  unsigned short int i, imax;
  Push(Read16(pp__n_IN)); // #IN @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(Read16(pp_VIN) + (i * 2) * 2)); // VIN @ I 2* 2* + @
    Push((pp_WDC40 + i * 6) + 4); // WDC40 I 6 * + 4 +
    Store_2(); // !_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe9f9: WORD 'WE9FB' codep=0x224c parp=0xe9fb params=0 returns=0
// ================================================

void WE9FB() // WE9FB
{
  unsigned short int i, imax, a;
  Push(Read16(pp__n_IN)); // #IN @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i * 6 + pp_WDC40); // I 6 * WDC40 +
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())); //  @
    SWAP(); // SWAP
    Push(Read16(Pop() + 2)); //  2+ @
    Push((i * 2) * 2 + pp_WDBE8); // I 2* 2* WDBE8 +
    a = Pop(); // >R
    Push(a); // I
    Store_2(); // !_2
    Push(a + 2); // R> 2+
    Store_2(); // !_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xea33: WORD 'WEA35' codep=0x224c parp=0xea35
// ================================================

void WEA35() // WEA35
{
  WE7A9(); // WE7A9
  WE8BD(); // WE8BD
  WE8E3(); // WE8E3
  WE8F7(); // WE8F7
  Push(4);
  Push(pp__n_IN); // #IN
  Store_2(); // !_2
  Push(pp_WDBE8); // WDBE8
  Push(pp_VIN); // VIN
  Store_2(); // !_2
  Push(pp_WDC14); // WDC14
  Push(pp_VOUT); // VOUT
  Store_2(); // !_2
  Push(pp_WDC0A); // WDC0A
  Push(pp_OIN); // OIN
  Store_2(); // !_2
  Push(pp_WDC36); // WDC36
  Push(pp_OOUT); // OOUT
  Store_2(); // !_2
  CLIPPER(); // CLIPPER
  WE96F(); // WE96F
  WE931(); // WE931
  Push(4);
  Push(pp__n_IN); // #IN
  Store_2(); // !_2
  Push(pp_WDBE8); // WDBE8
  Push(pp_VIN); // VIN
  Store_2(); // !_2
  Push(pp_WDC14); // WDC14
  Push(pp_VOUT); // VOUT
  Store_2(); // !_2
  CLIPPER(); // CLIPPER
  WE99D(); // WE99D
  WE9CD(); // WE9CD
  VCLIPSE(); // VCLIPSE
  Push(pp_WDC40); // WDC40
  Push(pp_VOUT); // VOUT
  Store_2(); // !_2
  WE16C(); // WE16C
  WE9FB(); // WE9FB
}


// ================================================
// 0xea87: WORD 'WEA89' codep=0x224c parp=0xea89
// ================================================

void WEA89() // WEA89
{
  Push(0);
  SWAP(); // SWAP
  ReadArray(GRIDCOL); // GRIDCOL
  OVER(); // OVER
  OVER(); // OVER
  LC_at_(); // LC@
  StoreCOLOR(); // !COLOR
  Push(Pop() + 1); //  1+
  LC_at_(); // LC@
  Push(pp_DCOLOR); // DCOLOR
  Store_2(); // !_2
}


// ================================================
// 0xeaa1: WORD 'WEAA3' codep=0x224c parp=0xeaa3
// ================================================

void WEAA3() // WEAA3
{
  unsigned short int a, i, imax;
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_VIN)); // VIN @
  a = Pop(); // >R
  Push(Read16(a + 2)); // I 2+ @
  Push(Read16(a)); // I @
  Push(a + (Read16(pp__n_IN) - 1) * 4); // I #IN @ 1- 4 * +
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + 2)); //  2+ @
  SWAP(); // SWAP
  Push(Read16(Pop())); //  @
  LLINE(); // LLINE
  Push(Read16(pp__n_IN) - 1); // #IN @ 1-
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i * 4 + a); // I 4 * J +
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() + 2)); //  2+ @
    SWAP(); // SWAP
    Push(Read16(Pop())); //  @
    Push((i + 1) * 4 + a); // I 1+ 4 * J +
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() + 2)); //  2+ @
    SWAP(); // SWAP
    Push(Read16(Pop())); //  @
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xeb11: WORD 'WEB13' codep=0x224c parp=0xeb13
// ================================================

void WEB13() // WEB13
{
  unsigned short int i, imax;
  WE07F(); // WE07F
  WE829(); // WE829
  Push(0x0059);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WE88B(); // WE88B
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Pop()==4?1:0); //  4 =
      if (Pop() != 0)
      {
        Push(i); // I
        WE7E5(); // WE7E5
        Push(4);
        Push(pp__n_IN); // #IN
        Store_2(); // !_2
      } else
      {
        Push(i); // I
        WEA35(); // WEA35
      }
      Push(Read16(pp__n_IN)); // #IN @
      Push(2);
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(pp_WDBE8); // WDBE8
        Push(pp_VIN); // VIN
        Store_2(); // !_2
        Push(pp_WDC14); // WDC14
        Push(pp_VOUT); // VOUT
        Store_2(); // !_2
        Push(pp_WDC0A); // WDC0A
        Push(pp_OIN); // OIN
        Store_2(); // !_2
        Push(pp_WDC36); // WDC36
        Push(pp_OOUT); // OOUT
        Store_2(); // !_2
        Push(pp_IsOPEN); // ?OPEN
        _099(); // 099
        CLIPPER(); // CLIPPER
      }
      Push(Read16(pp__n_IN)); // #IN @
      Push(2);
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(i); // I
        WEA89(); // WEA89
        SCANPOL(); // SCANPOL
        LFILLPO(); // LFILLPO
        Push(i); // I
        Push(0x0018);
        _gt_(); // >
        Push(Pop() & Read16(pp_WDB70)); //  WDB70 @ AND
        if (Pop() != 0)
        {
          WEAA3(); // WEAA3
        }
      }
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeb9b: WORD 'SEEGRID' codep=0x224c parp=0xeba7
// ================================================
// entry

void SEEGRID() // SEEGRID
{
  _gt_MAINVI(); // >MAINVI
  Push(Read16(pp_WDB50)); // WDB50 @
  StoreCOLOR(); // !COLOR
  BFILL(); // BFILL
  _1PIX(); // 1PIX
  WEB13(); // WEB13
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  _2PIX(); // 2PIX
}


// ================================================
// 0xebbd: WORD 'WEBBF' codep=0x224c parp=0xebbf params=0 returns=0
// ================================================

void WEBBF() // WEBBF
{
  unsigned short int i, imax;
  Push(0x0075);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(1);
    Push(i); // I
    ReadArray(GVERTEX); // GVERTEX
    LC_ex_(); // LC!
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xebd7: WORD 'WEBD9' codep=0x224c parp=0xebd9 params=0 returns=0
// ================================================

void WEBD9() // WEBD9
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  StoreXYSEED(); // !XYSEED
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(7);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(0);
      Push(2);
      RRND(); // RRND
      Push(1);
      Push((i * 9 + 0x002e) + j); // J 9 * 0x002e + I +
      ReadArray(GVERTEX); // GVERTEX
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xec15: WORD 'WEC17' codep=0x224c parp=0xec17
// ================================================

void WEC17() // WEC17
{
  unsigned short int i, imax, j, jmax;
  Push(0);
  COLORMA_2(); // COLORMA_2
  Push(0x0059);
  Push(0x0019);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(i); // I
    ReadArray(GRIDCOL); // GRIDCOL
    LC_at_(); // LC@
    Push(Pop()==Read16(pp_COLOR)?1:0); //  COLOR @ =
    if (Pop() != 0)
    {
      Push(4);
      Push(0);

      j = Pop();
      jmax = Pop();
      do // (DO)
      {
        Push(0);
        Push(1);
        Push(j); // I
        Push(i); // J
        ReadArray(GPOLY); // GPOLY
        LC_at_(); // LC@
        ReadArray(GVERTEX); // GVERTEX
        LC_ex_(); // LC!
        j++;
      } while(j<jmax); // (LOOP)

    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xec57: WORD 'WEC59' codep=0x224c parp=0xec59
// ================================================

void WEC59() // WEC59
{
  unsigned short int i, imax, j, jmax, k, kmax, l, lmax;
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(5);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(1);
      Push(i * 6 + j); // J 6 * I +
      ReadArray(GVERTEX); // GVERTEX
      L_plus__dash__at_(); // L+-@
      COLORMA_2(); // COLORMA_2
      Push(Read16(pp_COLOR)); // COLOR @
      Push(Read16(regsp)); // DUP
      Push(Pop() * 0x0100); //  0x0100 *
      Push(Pop() + Pop()); // +
      Push(0);
      Push(i * 5 + j); // J 5 * I +
      ReadArray(GRIDCOL); // GRIDCOL
      L_ex_(); // L!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  Push(8);
  Push(0);

  k = Pop();
  kmax = Pop();
  do // (DO)
  {
    Push(8);
    Push(0);

    l = Pop();
    lmax = Pop();
    do // (DO)
    {
      Push(1);
      Push((k * 9 + l) + 0x0024); // J 9 * I + 0x0024 +
      ReadArray(GVERTEX); // GVERTEX
      L_plus__dash__at_(); // L+-@
      COLORMA_2(); // COLORMA_2
      Push(Read16(pp_COLOR)); // COLOR @
      Push(Read16(regsp)); // DUP
      Push(Pop() * 0x0100); //  0x0100 *
      Push(Pop() + Pop()); // +
      Push(0);
      Push((k * 8 + l) + 0x0019); // J 8 * I + 0x0019 +
      ReadArray(GRIDCOL); // GRIDCOL
      L_ex_(); // L!
      l++;
    } while(l<lmax); // (LOOP)

    k++;
  } while(k<kmax); // (LOOP)

  WEBBF(); // WEBBF
}


// ================================================
// 0xecf1: WORD 'WECF3' codep=0x224c parp=0xecf3 params=1 returns=0
// ================================================

void WECF3() // WECF3
{
  unsigned short int i, imax;
  Push(0x0075);
  Push(0x0024);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(1);
    Push(i); // I
    ReadArray(GVERTEX); // GVERTEX
    LC_ex_(); // LC!
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xed0f: WORD 'WED11' codep=0x224c parp=0xed11 params=0 returns=1
// ================================================

void WED11() // WED11
{
  unsigned short int i, imax, j, jmax;
  Push(0);
  Push(9);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(9);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ReadArray(_9X9COAR); // 9X9COAR
      L_plus__dash__at_(); // L+-@
      Push(Pop() + Pop()); // +
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  Push(0x0051);
  _slash_(); // /
  WECF3(); // WECF3
}


// ================================================
// 0xed3b: WORD 'WED3D' codep=0x224c parp=0xed3d
// ================================================

void WED3D() // WED3D
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  WE598(); // WE598
  Push(0x0017);
  SWAP(); // SWAP
  _dash_(); // -
  Push(Pop() + 2); //  2+
  Push(pp_Y1); // Y1
  Store_2(); // !_2
  Push(Pop() - 2); //  2 -
  Push(pp_X1); // X1
  Store_2(); // !_2
  Push(pp_SPHEREW); // SPHEREW
  ON_2(); // ON_2
  Push(pp_SIGNEXT); // SIGNEXT
  ON_2(); // ON_2
  Push(0x6a5a); // 'MERCATO'
  SETLARR(); // SETLARR
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(6);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j + Read16(pp_X1)); // I X1 @ +
      Push(Read16(pp_Y1) - i); // Y1 @ J -
      ACELLAD(); // ACELLAD
      A_at_(); // A@
      Push(1);
      Push(i * 6 + j); // J 6 * I +
      ReadArray(GVERTEX); // GVERTEX
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeda5: WORD 'WEDA7' codep=0x224c parp=0xeda7 params=0 returns=0
// ================================================

void WEDA7() // WEDA7
{
  unsigned short int i, imax, j, jmax;
  Push(9);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(9);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ReadArray(_9X9COAR); // 9X9COAR
      LC_at_(); // LC@
      Push(1);
      Push((i * 9 + j) + 0x0024); // J 9 * I + 0x0024 +
      ReadArray(GVERTEX); // GVERTEX
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeddb: WORD 'WEDDD' codep=0x224c parp=0xeddd params=0 returns=0
// ================================================

void WEDDD() // WEDDD
{
  unsigned short int i, imax, j, jmax;
  Push(9);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(9);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ReadArray(_9X9FINE); // 9X9FINE
      LC_at_(); // LC@
      Push(1);
      Push((i * 9 + j) + 0x0024); // J 9 * I + 0x0024 +
      ReadArray(GVERTEX); // GVERTEX
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xee11: WORD 'WEE13' codep=0x224c parp=0xee13
// ================================================

void WEE13() // WEE13
{
  unsigned short int i, imax;
  WED3D(); // WED3D
  WED11(); // WED11
  WEC59(); // WEC59
  Push(pp_WDBB4); // WDBB4
  _099(); // 099
  Push(Read16(cc_WDB36)); // WDB36
  Push(pp_WDBB8); // WDBB8
  Store_2(); // !_2
  Push(pp_WDB70); // WDB70
  _099(); // 099
  Push(pp_WDB78); // WDB78
  _099(); // 099
  Push(0x0032);
  Push(pp_WDB7C); // WDB7C
  Store_2(); // !_2
  Push(pp_WDB80); // WDB80
  ON_2(); // ON_2
  Push(pp_WDB84); // WDB84
  _099(); // 099
  Push(pp_WDB88); // WDB88
  _099(); // 099
  Push(pp_WDB8C); // WDB8C
  _099(); // 099
  Push(0x001e);
  WE2EC(); // WE2EC
  SEEGRID(); // SEEGRID
  Push(0x0023);
  WE2EC(); // WE2EC
  SEEGRID(); // SEEGRID
  WED3D(); // WED3D
  WEDA7(); // WEDA7
  WEC59(); // WEC59
  Push(0x008c);
  Push(0x0028);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WE2EC(); // WE2EC
    SEEGRID(); // SEEGRID
    Push(0x001e);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xee73: WORD 'WEE75' codep=0x224c parp=0xee75 params=0 returns=0
// ================================================

void WEE75() // WEE75
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  MOD(); // MOD
  _dash_(); // -
  Push(Pop() - 0x0018); //  0x0018 -
  Push(pp_XCON); // XCON
  Store_2(); // !_2
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(regsp)); // DUP
  Push(0x0014);
  MOD(); // MOD
  _dash_(); // -
  Push(Pop() - 0x0028); //  0x0028 -
  Push(pp_YCON); // YCON
  Store_2(); // !_2
  Push(pp_DXCON); // DXCON
  _099(); // 099
  Push(pp_DYCON); // DYCON
  _099(); // 099
}


// ================================================
// 0xeeaf: WORD 'WEEB1' codep=0x224c parp=0xeeb1 params=0 returns=0
// ================================================

void WEEB1() // WEEB1
{
  Push(Read16(pp_XABS) - 0x0012); // XABS @ 0x0012 -
  Push(pp_XVIS); // XVIS
  Store_2(); // !_2
  Push(Read16(pp_YABS) - 0x001e); // YABS @ 0x001e -
  Push(pp_YVIS); // YVIS
  Store_2(); // !_2
  Push(pp_DXVIS); // DXVIS
  _099(); // 099
  Push(pp_DYVIS); // DYVIS
  _099(); // 099
}


// ================================================
// 0xeed7: WORD 'WEED9' codep=0x224c parp=0xeed9 params=1 returns=0
// ================================================

void WEED9() // WEED9
{
  unsigned short int i, imax, j, jmax;
  Push(Pop() - 0x0014); //  0x0014 -
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(6);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(1);
      OVER(); // OVER
      Push(Pop() + (i * 9 + j)); //  J 9 * I + +
      ReadArray(GVERTEX); // GVERTEX
      LC_at_(); // LC@
      Push(1);
      Push(i * 6 + j); // J 6 * I +
      ReadArray(GVERTEX); // GVERTEX
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xef1b: WORD 'WEF1D' codep=0x224c parp=0xef1d params=0 returns=0
// ================================================

void WEF1D() // WEF1D
{
  Push(Read16(pp_WDB54)); // WDB54 @
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Read16(pp_WDB60)); // WDB60 @
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  ABS(); // ABS
  Push(0);
  SQRT(); // SQRT
  Push(pp_WDB58); // WDB58
  Store_2(); // !_2
}


// ================================================
// 0xef3b: WORD 'WEF3D' codep=0x224c parp=0xef3d params=0 returns=0
// ================================================

void WEF3D() // WEF3D
{
  Push(Read16(pp_WDB5C)); // WDB5C @
  Push(0x002f);
  Push(0x0167);
  _star__slash_(); // */
  Push(0x0030);
  MOD(); // MOD
  WE1BE(); // WE1BE
  Push(Read16(pp_WDB58)); // WDB58 @
  Push(0x007f);
  _star__slash_(); // */
  Push(pp_WDB78); // WDB78
  Store_2(); // !_2
}


// ================================================
// 0xef63: WORD 'WEF65' codep=0x224c parp=0xef65 params=0 returns=0
// ================================================

void WEF65() // WEF65
{
  Push(Read16(pp_WDB68)); // WDB68 @
  Push(pp_WDB60); // WDB60
  _plus__ex__2(); // +!_2
  Push(Read16(pp_WDB60)); // WDB60 @
  Push(0x0018);
  MIN(); // MIN
  Push(0xffe9);
  MAX(); // MAX
  Push(pp_WDB60); // WDB60
  Store_2(); // !_2
}


// ================================================
// 0xef83: WORD 'WEF85' codep=0x224c parp=0xef85 params=0 returns=0
// ================================================

void WEF85() // WEF85
{
  Push(Read16(pp_WDB5C)); // WDB5C @
  Push(0x002f);
  Push(0x0167);
  _star__slash_(); // */
  Push(0x0030);
  MOD(); // MOD
  WE22A(); // WE22A
  Push(Read16(pp_WDB58)); // WDB58 @
  Push(0x007f);
  _star__slash_(); // */
  Push(pp_WDB80); // WDB80
  Store_2(); // !_2
}


// ================================================
// 0xefab: WORD 'WEFAD' codep=0x224c parp=0xefad params=0 returns=0
// ================================================

void WEFAD() // WEFAD
{
  Push(Read16(pp_WDB60) + Read16(pp_WDB54)); // WDB60 @ WDB54 @ +
  Push(2);
  MAX(); // MAX
  Push(0x0031);
  MIN(); // MIN
  Push(pp_WDB7C); // WDB7C
  Store_2(); // !_2
}


// ================================================
// 0xefc7: WORD 'WEFC9' codep=0x224c parp=0xefc9 params=0 returns=0
// ================================================

void WEFC9() // WEFC9
{
  Push(Read16(pp_WDBC0) + Read16(pp_WDB6C)); // WDBC0 @ WDB6C @ +
  WE2EC(); // WE2EC
}


// ================================================
// 0xefd7: WORD 'WEFD9' codep=0x224c parp=0xefd9 params=0 returns=0
// ================================================

void WEFD9() // WEFD9
{
  Push(Read16(pp_WDB64)); // WDB64 @
  Push(pp_WDB5C); // WDB5C
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xefe3: WORD 'WEFE5' codep=0x224c parp=0xefe5 params=0 returns=0
// ================================================

void WEFE5() // WEFE5
{
  WEF1D(); // WEF1D
  WEF3D(); // WEF3D
  WEFAD(); // WEFAD
  WEF85(); // WEF85
}


// ================================================
// 0xefef: WORD 'WEFF1' codep=0x224c parp=0xeff1 params=0 returns=1
// ================================================
// orphan

void WEFF1() // WEFF1
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeffb: WORD 'WEFFD' codep=0x224c parp=0xeffd
// ================================================

void WEFFD() // WEFFD
{
  Push(0x0167);
  Push(pp_WDB5C); // WDB5C
  Store_2(); // !_2
  Push(0x0019);
  Push(Read16(regsp)); // DUP
  Push(pp_WDB54); // WDB54
  Store_2(); // !_2
  Push(Pop() - 1); //  1-
  Push(pp_WDB60); // WDB60
  Store_2(); // !_2
  Push(7);
  Push(pp_WDB64); // WDB64
  Store_2(); // !_2
  Push(1);
  Push(pp_WDB88); // WDB88
  Store_2(); // !_2
  Push(0xfffb);
  Push(pp_WDB68); // WDB68
  Store_2(); // !_2
  Push(8);
  Push(pp_WDB6C); // WDB6C
  Store_2(); // !_2
  Push(0x0019);
  WE2EC(); // WE2EC
  SEEGRID(); // SEEGRID
  Push(1);
  Push(pp_WDB80); // WDB80
  _plus__ex__2(); // +!_2
  Push(0x0023);
  WE2EC(); // WE2EC
  SEEGRID(); // SEEGRID
  Push(pp_WDB70); // WDB70
  ON_2(); // ON_2
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("TOPOGRAPHY NET LOCKED ON");
  DrawTTY(); // .TTY
  WEBD9(); // WEBD9
  WEC17(); // WEC17
  do
  {
    WEFE5(); // WEFE5
    SEEGRID(); // SEEGRID
    WEFC9(); // WEFC9
    WEF65(); // WEF65
    WEFD9(); // WEFD9
    Push(Read16(pp_WDB7C)); // WDB7C @
    Push(Read16(regsp)); // DUP
    Push(0x000a);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(-2);
      Push(pp_WDB68); // WDB68
      Store_2(); // !_2
    }
    Push(Pop()==2?1:0); //  2 =
  } while(Pop() == 0);
  Push(!Read16(pp_IsFUEL_dash_D)); // ?FUEL-D @ NOT
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("SAFE LANDING, COMMANDER.");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf0bf: WORD 'WF0C1' codep=0x224c parp=0xf0c1
// ================================================

void WF0C1() // WF0C1
{
  WEDA7(); // WEDA7
  Push(Read16(cc_WDB3E)); // WDB3E
  WEED9(); // WEED9
  WEDDD(); // WEDDD
  WEC59(); // WEC59
  WEFFD(); // WEFFD
}


// ================================================
// 0xf0cf: WORD 'DESCEND' codep=0x224c parp=0xf0db
// ================================================
// entry

void DESCEND() // DESCEND
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("COMPUTING DESCENT PROFILE...");
  DrawTTY(); // .TTY
  WEE75(); // WEE75
  WEEB1(); // WEEB1
  Push(0xbab2); // 'NEWCO'
  MODULE(); // MODULE
  WE6EB(); // WE6EB
  WE751(); // WE751
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("AUTOPILOT ENGAGED. DESCENDING...");
  DrawTTY(); // .TTY
  _gt_VIEWSITE(); // >VIEWSITE
  WEE13(); // WEE13
  Push(Read16(pp_IsFUEL_dash_D)); // ?FUEL-D @
  if (Pop() != 0)
  {
    CTERASE(); // CTERASE
    CTINIT(); // CTINIT
    SET_STR_AS_PARAM("OUT OF FUEL! CRASH IMMINENT!");
    DrawTTY(); // .TTY
  }
  WF0C1(); // WF0C1
}


// ================================================
// 0xf168: WORD 'WF16A' codep=0x224c parp=0xf16a
// ================================================

void WF16A() // WF16A
{
  Push(5);
  Push(pp_WDB68); // WDB68
  Store_2(); // !_2
  Push(-Read16(pp_WDB6C)); // WDB6C @ NEGATE
  Push(pp_WDB6C); // WDB6C
  Store_2(); // !_2
  Push(-Read16(pp_WDB64)); // WDB64 @ NEGATE
  Push(pp_WDB64); // WDB64
  Store_2(); // !_2
  do
  {
    WEFE5(); // WEFE5
    SEEGRID(); // SEEGRID
    WEFC9(); // WEFC9
    WEF65(); // WEF65
    Push(!(Read16(pp_WDB5C)==0x0167?1:0)); // WDB5C @ 0x0167 = NOT
    if (Pop() != 0)
    {
      WEFD9(); // WEFD9
    }
    Push((Read16(pp_WDB7C)==0x0031?1:0) & (Read16(pp_WDB5C)==0x0167?1:0)); // WDB7C @ 0x0031 = WDB5C @ 0x0167 = AND
  } while(Pop() == 0);
  Push(pp_WDB70); // WDB70
  _099(); // 099
  Push(pp_WDB78); // WDB78
  _099(); // 099
  Push(0x0032);
  Push(pp_WDB7C); // WDB7C
  Store_2(); // !_2
  Push(1);
  Push(pp_WDB80); // WDB80
  Store_2(); // !_2
  WEBBF(); // WEBBF
  WEFC9(); // WEFC9
  SEEGRID(); // SEEGRID
}


// ================================================
// 0xf1d6: WORD 'WF1D8' codep=0x224c parp=0xf1d8
// ================================================

void WF1D8() // WF1D8
{
  unsigned short int i, imax;
  WED3D(); // WED3D
  WEDA7(); // WEDA7
  WEC59(); // WEC59
  Push(0x0028);
  Push(0x008c);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WE2EC(); // WE2EC
    SEEGRID(); // SEEGRID
    Push(0xffe2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  WED3D(); // WED3D
  WED11(); // WED11
  WEC59(); // WEC59
  Push(0x0023);
  WE2EC(); // WE2EC
  SEEGRID(); // SEEGRID
  WED3D(); // WED3D
  Push(1);
  Push(0x000e);
  ReadArray(GVERTEX); // GVERTEX
  LC_at_(); // LC@
  WECF3(); // WECF3
  WEC59(); // WEC59
  Push(0x001e);
  WE2EC(); // WE2EC
  SEEGRID(); // SEEGRID
}


// ================================================
// 0xf21e: WORD 'WF220' codep=0x224c parp=0xf220 params=0 returns=0
// ================================================

void WF220() // WF220
{
  Push(Read16(pp_WDBCC) + 1); // WDBCC @ 1+
  Push(0x0030);
  MOD(); // MOD
  Push(pp_WDBCC); // WDBCC
  Store_2(); // !_2
}


// ================================================
// 0xf232: WORD 'WF234' codep=0x1d29 parp=0xf234
// ================================================
// 0xf234: db 0x3a 0x20 ': '

// ================================================
// 0xf236: WORD 'WF238' codep=0x224c parp=0xf238
// ================================================

void WF238() // WF238
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  WE598(); // WE598
  Push(pp_WDBC8); // WDBC8
  Store_2(); // !_2
  Push(pp_WDBCC); // WDBCC
  Store_2(); // !_2
  Push(0x012c);
  Push(Read16(regsp)); // DUP
  WE2EC(); // WE2EC
  Push(Pop() - Read16(pp_WDB74)); //  WDB74 @ -
  Push(6);
  _slash_(); // /
  Push(pp_WDBE4); // WDBE4
  Store_2(); // !_2
  do
  {
    Push(Read16(pp_WDBC0) - Read16(pp_WDBE4)); // WDBC0 @ WDBE4 @ -
    Push(Read16(pp_WDB74)); // WDB74 @
    MAX(); // MAX
    WE2EC(); // WE2EC
    Push(Read16(pp_WDBC8)); // WDBC8 @
    Push(Read16(pp_WF234)); // WF234 @
    _st_(); // <
    if (Pop() != 0)
    {
      Push(1);
    } else
    {
      Push(-1);
    }
    Push(pp_WDBC8); // WDBC8
    _plus__ex__2(); // +!_2
    WE620(); // WE620
    WF220(); // WF220
    Push(Read16(pp_WDBC0)==Read16(pp_WDB74)?1:0); // WDBC0 @ WDB74 @ =
  } while(Pop() == 0);
}


// ================================================
// 0xf2a0: WORD 'ASCEND' codep=0x224c parp=0xf2ab
// ================================================
// entry

void ASCEND() // ASCEND
{
  WF16A(); // WF16A
  WF1D8(); // WF1D8
  WF238(); // WF238
}


// ================================================
// 0xf2b3: WORD 'WF2B5' codep=0x224c parp=0xf2b5
// ================================================

void WF2B5() // WF2B5
{
  WDD9E(); // WDD9E
  WDDEC(); // WDDEC
}


// ================================================
// 0xf2bb: WORD 'WF2BD' codep=0x224c parp=0xf2bd params=0 returns=0
// ================================================

void WF2BD() // WF2BD
{
  Push(Read16(pp_GLOBALS)); // GLOBALS @
  Push(pp_SEED_3); // SEED_3
  Store_2(); // !_2
  Push(5);
  Push(0x0013);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(pp_WF234); // WF234
  Store_2(); // !_2
  Push(pp_WDBC8); // WDBC8
  Store_2(); // !_2
  Push(pp_WDBCC); // WDBCC
  _099(); // 099
  Push(pp_WDBB4); // WDBB4
  _099(); // 099
  Push(Read16(cc_WDB36)); // WDB36
  Push(pp_WDBB8); // WDBB8
  Store_2(); // !_2
}


// ================================================
// 0xf2e7: WORD 'WF2E9' codep=0x224c parp=0xf2e9
// ================================================

void WF2E9() // WF2E9
{
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(WDC8C); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(3);
  _slash_(); // /
  ICLOSE(); // ICLOSE
  Push(0x0014);
  MAX(); // MAX
  Push(0x0078);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_WDB74); // WDB74
  Store_2(); // !_2
  WE2EC(); // WE2EC
}


// ================================================
// 0xf30f: WORD 'SKYCASE' codep=0x4b3b parp=0xf31b
// ================================================

void SKYCASE() // SKYCASE
{
  switch(Pop()) // SKYCASE
  {
  case 0:
    GetColor(BLACK);
    break;
  case 7:
    GetColor(YELLOW);
    break;
  case 12:
    GetColor(YELLOW);
    break;
  case 19:
    GetColor(YELLOW);
    break;
  default:
    GetColor(LT_dash_BLUE);
    break;

  }
}

// ================================================
// 0xf32f: WORD 'WF331' codep=0x224c parp=0xf331
// ================================================

void WF331() // WF331
{
  Push(Read16(pp_ATMO)); // ATMO @
  SKYCASE(); // SKYCASE case
  Push(pp_WDB50); // WDB50
  Store_2(); // !_2
}


// ================================================
// 0xf33d: WORD 'INIT-ORBIT' codep=0x224c parp=0xf34c
// ================================================
// entry

void INIT_dash_ORBIT() // INIT-ORBIT
{
  Push(pp_GLOBALS); // GLOBALS
  Store_2(); // !_2
  Push(pp__n_CLRMAP); // #CLRMAP
  Store_2(); // !_2
  SET_dash_COL(); // SET-COL
  WF2E9(); // WF2E9
  WF331(); // WF331
  Push(Read16(pp_GLOBALS)); // GLOBALS @
  Push(0xbaa2); // 'MERCA'
  MODULE(); // MODULE
  Push(0xbac2); // 'MAKE-'
  MODULE(); // MODULE
  WF2B5(); // WF2B5
  WF2BD(); // WF2BD
}


// ================================================
// 0xf370: WORD 'ROTATE' codep=0x224c parp=0xf37b
// ================================================
// entry

void ROTATE() // ROTATE
{
  WF220(); // WF220
  WE620(); // WE620
}

// 0xf381: db 0x4f 0x52 0x42 0x49 0x54 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x29 0x05 0x10 0x72 0x0f 0x38 0x0c 0x90 0x16 0xbe 0xf1 0x86 0x43 0x4c 0x49 0x53 0x37 0x38 0x34 0x1d 0x02 0x00 0xcf 0x49 0x02 0x00 0xae 0x4b 0x02 0x00 0xdb 0x4b 0x32 0x33 0x32 0x39 0x02 0x00 0x3e 0x4c 0xac 0xf3 0x86 0x43 0x4c 0x49 0x53 0x54 0xb2 0x29 0x1d 0x02 0x00 0xf2 0x49 0x02 0x00 0x93 0x4c 0x02 0x00 0x8a 0x49 0x02 0x00 0x65 0x48 0x02 0x00 0x6b 0x4c 0xcb 0xf3 0x86 0x43 0x4c 0x49 0x53 0x54 0xb3 0x29 0x1d 0x02 0x00 0xe1 0x49 0x02 0x00 0x00 0x4c 0x02 0x00 0x2b 0x4c 0x02 0x00 0x57 0x4c 0x02 0x00 0xf2 0x49 0x4c 0x22 0x16 0x16 0x89 0x4a 0x02 0x00 0x84 0x55 0x32 0x6d 0xb3 0xf3 0x98 0xf3 0x75 0x55 0x32 0x6d 0x90 0x16 0x37 0xf3 0x86 0x28 0x53 0x41 0x4e 0x44 0xa9 0x29 0x1d 0x02 0x00 0x04 0x4b 0x02 0x00 0x1a 0x4b 0x02 0x00 0x49 0x4b 0x02 0x00 0x31 0x4b 0x4c 0x22 0xb9 0x55 0xae 0x0b 0xfa 0x15 0x3a 0x00 0xf1 0xf3 0x98 0xf3 0x75 0x55 0x32 0x6d 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x5d 0x17 0x1f 0x00 0x46 0x12 0xfa 0x15 0x16 0x00 0x20 0x0f 0x87 0x3b 0xc4 0x4b 0x05 0x10 0x05 0x10 0x26 0xf4 0x72 0x0f 0x38 0x0c 0x60 0x16 0x08 0x00 0x16 0x16 0x70 0x4a 0x02 0x00 0x60 0x16 0x0e 0x00 0x16 0x16 0x3e 0x4a 0x02 0x00 0xc4 0x52 0x75 0x55 0x32 0x6d 0x84 0x55 0x32 0x6d 0x90 0x16 0x4c 0x22 0xd2 0xf3 0x98 0xf3 0xa1 0x55 0x32 0x6d 0x38 0xf4 0x90 0x16 0x4c 0x22 0x16 0x16 0xb0 0x4a 0x02 0x00 0x84 0x55 0x32 0x6d 0x16 0x16 0xda 0x4a 0x02 0x00 0x75 0x55 0x32 0x6d 0x90 0x16 0x4c 0x22 0x16 0x16 0x77 0x4b 0x02 0x00 0x84 0x55 0x32 0x6d 0xa6 0x49 0x75 0x55 0x32 0x6d 0x90 0x16 0xea 0xf3 0x89 0x28 0x54 0x45 0x52 0x52 0x41 0x49 0xce 0x3b 0x4b 0x05 0x00 0xb4 0xf4 0x01 0x00 0x8a 0xf3 0x02 0x00 0x8e 0xf4 0x03 0x00 0x09 0xf4 0x04 0x00 0x9c 0xf4 0x05 0x00 0x3a 0xf4 0x4c 0x22 0xa8 0xed 0x92 0x0c 0xd1 0xf4 0x90 0x16 0x4c 0x22 0x20 0x0f 0x57 0xaa 0x16 0x6d 0x90 0x16 0x4c 0x22 0x18 0x5a 0x2f 0x7a 0x3f 0x7a 0x5d 0x17 0xf7 0xf4 0x8c 0x7f 0xe2 0x7a 0x2e 0x0f 0x57 0xaa 0x16 0x6d 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x97 0xf1 0x8a 0x50 0x4c 0x41 0x4e 0x2d 0x52 0x55 0xcc 0x4c 0x22 0xff 0xf4 0xa2 0xee 0xaf 0x64 0x2f 0x7a 0x34 0x75 0x5d 0x17 0x11 0x00 0x2d 0x12 0xfa 0x15 0x08 0x00 0x3e 0xf1 0x60 0x16 0x04 0x00 0x4a 0xf1 0x9f 0xf2 0xeb 0xf4 0x72 0xf3 0xdf 0x79 0x90 0x16 0x53 0x45 0x54 0x54 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ORBIT___________________________)  r 8      CLIS784    I   K   K2329  >L   CLIST )    I   L   I  eH  kL   CLIST )    I   L  +L  WL   IL"   J   U2m    uU2m  7  (SAND )    K   K  IK  1KL" U    :     uU2m. ] d  K]   F        ; K    & r 8 `     pJ  `     >J   RuU2m U2m  L"     U2m8   L"   J   U2m   J  uU2m  L"  wK   U2m IuU2m     (TERRAI ;K                      : L"        L"  W  m  L" Z/z?z]     z. W  m=  z     PLAN-RU L"     d/z4u]   -     > `   J     r  y  SETTER____________ '

