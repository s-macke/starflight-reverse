// ====== OVERLAY 'ORBIT-OV' ======
// store offset = 0xdb70
// overlay size   = 0x19f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WDB86  codep:0x2214 wordp:0xdb86 size:0x0002 C-string:'WDB86'
//           WDB8A  codep:0x2214 wordp:0xdb8a size:0x0002 C-string:'WDB8A'
//           WDB8E  codep:0x2214 wordp:0xdb8e size:0x0002 C-string:'WDB8E'
//           WDB92  codep:0x1d29 wordp:0xdb92 size:0x000c C-string:'WDB92'
//           WDBA0  codep:0x1d29 wordp:0xdba0 size:0x0002 C-string:'WDBA0'
//           WDBA4  codep:0x1d29 wordp:0xdba4 size:0x0002 C-string:'WDBA4'
//           WDBA8  codep:0x1d29 wordp:0xdba8 size:0x0002 C-string:'WDBA8'
//           WDBAC  codep:0x1d29 wordp:0xdbac size:0x0002 C-string:'WDBAC'
//           WDBB0  codep:0x1d29 wordp:0xdbb0 size:0x0002 C-string:'WDBB0'
//           WDBB4  codep:0x1d29 wordp:0xdbb4 size:0x0002 C-string:'WDBB4'
//           WDBB8  codep:0x1d29 wordp:0xdbb8 size:0x0002 C-string:'WDBB8'
//           WDBBC  codep:0x1d29 wordp:0xdbbc size:0x0002 C-string:'WDBBC'
//           WDBC0  codep:0x1d29 wordp:0xdbc0 size:0x0002 C-string:'WDBC0'
//           WDBC4  codep:0x1d29 wordp:0xdbc4 size:0x0002 C-string:'WDBC4'
//           WDBC8  codep:0x1d29 wordp:0xdbc8 size:0x0002 C-string:'WDBC8'
//           WDBCC  codep:0x1d29 wordp:0xdbcc size:0x0002 C-string:'WDBCC'
//           WDBD0  codep:0x1d29 wordp:0xdbd0 size:0x0002 C-string:'WDBD0'
//           WDBD4  codep:0x1d29 wordp:0xdbd4 size:0x0002 C-string:'WDBD4'
//           WDBD8  codep:0x1d29 wordp:0xdbd8 size:0x0002 C-string:'WDBD8'
//           WDBDC  codep:0x1d29 wordp:0xdbdc size:0x0002 C-string:'WDBDC'
//           WDBE0  codep:0x1d29 wordp:0xdbe0 size:0x0002 C-string:'WDBE0'
//           WDBE4  codep:0x1d29 wordp:0xdbe4 size:0x0002 C-string:'WDBE4'
//           WDBE8  codep:0x1d29 wordp:0xdbe8 size:0x0002 C-string:'WDBE8'
//           WDBEC  codep:0x1d29 wordp:0xdbec size:0x0002 C-string:'WDBEC'
//           WDBF0  codep:0x1d29 wordp:0xdbf0 size:0x0002 C-string:'WDBF0'
//           WDBF4  codep:0x1d29 wordp:0xdbf4 size:0x0002 C-string:'WDBF4'
//           WDBF8  codep:0x1d29 wordp:0xdbf8 size:0x0002 C-string:'WDBF8'
//           WDBFC  codep:0x1d29 wordp:0xdbfc size:0x0002 C-string:'WDBFC'
//           WDC00  codep:0x1d29 wordp:0xdc00 size:0x0002 C-string:'WDC00'
//           WDC04  codep:0x1d29 wordp:0xdc04 size:0x0002 C-string:'WDC04'
//           WDC08  codep:0x1d29 wordp:0xdc08 size:0x0002 C-string:'WDC08'
//           WDC0C  codep:0x1d29 wordp:0xdc0c size:0x0002 C-string:'WDC0C'
//           WDC10  codep:0x1d29 wordp:0xdc10 size:0x0002 C-string:'WDC10'
//           WDC14  codep:0x1d29 wordp:0xdc14 size:0x0002 C-string:'WDC14'
//           WDC18  codep:0x1d29 wordp:0xdc18 size:0x0002 C-string:'WDC18'
//           WDC1C  codep:0x1d29 wordp:0xdc1c size:0x0002 C-string:'WDC1C'
//           WDC20  codep:0x1d29 wordp:0xdc20 size:0x0002 C-string:'WDC20'
//           WDC24  codep:0x1d29 wordp:0xdc24 size:0x0002 C-string:'WDC24'
//           WDC28  codep:0x1d29 wordp:0xdc28 size:0x0002 C-string:'WDC28'
//           WDC2C  codep:0x1d29 wordp:0xdc2c size:0x0002 C-string:'WDC2C'
//           WDC30  codep:0x1d29 wordp:0xdc30 size:0x0002 C-string:'WDC30'
//           WDC34  codep:0x1d29 wordp:0xdc34 size:0x0002 C-string:'WDC34'
//           WDC38  codep:0x1d29 wordp:0xdc38 size:0x0020 C-string:'WDC38'
//           WDC5A  codep:0x1d29 wordp:0xdc5a size:0x0008 C-string:'WDC5A'
//           WDC64  codep:0x1d29 wordp:0xdc64 size:0x0020 C-string:'WDC64'
//           WDC86  codep:0x1d29 wordp:0xdc86 size:0x0008 C-string:'WDC86'
//           WDC90  codep:0x1d29 wordp:0xdc90 size:0x0030 C-string:'WDC90'
//           WDCC2  codep:0x1d29 wordp:0xdcc2 size:0x0018 C-string:'WDCC2'
//           WDCDC  codep:0x73ea wordp:0xdcdc size:0x0006 C-string:'WDCDC'
//           WDCE4  codep:0x1d29 wordp:0xdce4 size:0x003a C-string:'WDCE4'
//           WDD20  codep:0x1d29 wordp:0xdd20 size:0x000a C-string:'WDD20'
//           WDD2C  codep:0xdd2c wordp:0xdd2c size:0x0076 C-string:'WDD2C'
//           WDDA4  codep:0x224c wordp:0xdda4 size:0x0020 C-string:'WDDA4'
//           WDDC6  codep:0x224c wordp:0xddc6 size:0x0026 C-string:'WDDC6'
//           WDDEE  codep:0x224c wordp:0xddee size:0x004c C-string:'WDDEE'
//           WDE3C  codep:0x224c wordp:0xde3c size:0x004e C-string:'WDE3C'
//           WDE8C  codep:0x224c wordp:0xde8c size:0x0022 C-string:'WDE8C'
//           WDEB0  codep:0x224c wordp:0xdeb0 size:0x0022 C-string:'WDEB0'
//           WDED4  codep:0x224c wordp:0xded4 size:0x0022 C-string:'WDED4'
//         SETQUAD  codep:0xdf02 wordp:0xdf02 size:0x0009 C-string:'SETQUAD'
//             C*/  codep:0xdf13 wordp:0xdf13 size:0x000e C-string:'C_star__slash_'
//           WDF23  codep:0x224c wordp:0xdf23 size:0x002c C-string:'WDF23'
//           WDF51  codep:0x224c wordp:0xdf51 size:0x0022 C-string:'WDF51'
//           WDF75  codep:0x224c wordp:0xdf75 size:0x001e C-string:'WDF75'
//           WDF95  codep:0x224c wordp:0xdf95 size:0x0016 C-string:'WDF95'
//           WDFAD  codep:0x224c wordp:0xdfad size:0x0016 C-string:'WDFAD'
//           WDFC5  codep:0x224c wordp:0xdfc5 size:0x0016 C-string:'WDFC5'
//           WDFDD  codep:0x224c wordp:0xdfdd size:0x0012 C-string:'WDFDD'
//           WDFF1  codep:0x224c wordp:0xdff1 size:0x0028 C-string:'WDFF1'
//           WE01B  codep:0x224c wordp:0xe01b size:0x0016 C-string:'WE01B'
//           WE033  codep:0x224c wordp:0xe033 size:0x002e C-string:'WE033'
//           WE063  codep:0x224c wordp:0xe063 size:0x002c C-string:'WE063'
//           WE091  codep:0x224c wordp:0xe091 size:0x0018 C-string:'WE091'
//           WE0AB  codep:0x224c wordp:0xe0ab size:0x0030 C-string:'WE0AB'
//           WE0DD  codep:0x224c wordp:0xe0dd size:0x001a C-string:'WE0DD'
//           WE0F9  codep:0x224c wordp:0xe0f9 size:0x0012 C-string:'WE0F9'
//           WE10D  codep:0x224c wordp:0xe10d size:0x001a C-string:'WE10D'
//           WE129  codep:0x224c wordp:0xe129 size:0x0010 C-string:'WE129'
//           WE13B  codep:0x224c wordp:0xe13b size:0x002e C-string:'WE13B'
//           WE16B  codep:0xe16b wordp:0xe16b size:0x0049 C-string:'WE16B'
//           WE1B6  codep:0xe1b6 wordp:0xe1b6 size:0x0070 C-string:'WE1B6'
//           WE228  codep:0xe228 wordp:0xe228 size:0x0050 C-string:'WE228'
//           WE27A  codep:0x224c wordp:0xe27a size:0x006a C-string:'WE27A'
//           WE2E6  codep:0x224c wordp:0xe2e6 size:0x0070 C-string:'WE2E6'
//           WE358  codep:0x224c wordp:0xe358 size:0x002e C-string:'WE358'
//           WE388  codep:0x224c wordp:0xe388 size:0x001e C-string:'WE388'
//           WE3A8  codep:0x224c wordp:0xe3a8 size:0x0016 C-string:'WE3A8'
//           WE3C0  codep:0x224c wordp:0xe3c0 size:0x004e C-string:'WE3C0'
//           WE410  codep:0x224c wordp:0xe410 size:0x0050 C-string:'WE410'
//           WE462  codep:0x224c wordp:0xe462 size:0x0028 C-string:'WE462'
//           WE48C  codep:0xe48c wordp:0xe48c size:0x001c C-string:'WE48C'
//           WE4AA  codep:0xe4aa wordp:0xe4aa size:0x0008 C-string:'WE4AA'
//           WE4B4  codep:0x224c wordp:0xe4b4 size:0x009a C-string:'WE4B4'
//           WE550  codep:0x224c wordp:0xe550 size:0x0012 C-string:'WE550'
//           WE564  codep:0x224c wordp:0xe564 size:0x0036 C-string:'WE564'
//           WE59C  codep:0x224c wordp:0xe59c size:0x005c C-string:'WE59C'
//           WE5FA  codep:0x1d29 wordp:0xe5fa size:0x0002 C-string:'WE5FA'
//           WE5FE  codep:0x224c wordp:0xe5fe size:0x0054 C-string:'WE5FE'
//           WE654  codep:0x224c wordp:0xe654 size:0x001a C-string:'WE654'
//           WE670  codep:0x224c wordp:0xe670 size:0x001c C-string:'WE670'
//           WE68E  codep:0x224c wordp:0xe68e size:0x004c C-string:'WE68E'
//           WE6DC  codep:0x224c wordp:0xe6dc size:0x001a C-string:'WE6DC'
//        SHOWSITE  codep:0x224c wordp:0xe703 size:0x0016 C-string:'SHOWSITE'
//       >VIEWSITE  codep:0x224c wordp:0xe727 size:0x0040 C-string:'_gt_VIEWSITE'
//           WE769  codep:0x224c wordp:0xe769 size:0x003c C-string:'WE769'
//           WE7A7  codep:0x224c wordp:0xe7a7 size:0x0064 C-string:'WE7A7'
//           WE80D  codep:0x224c wordp:0xe80d size:0x0056 C-string:'WE80D'
//           WE865  codep:0x224c wordp:0xe865 size:0x003a C-string:'WE865'
//           WE8A1  codep:0x224c wordp:0xe8a1 size:0x0042 C-string:'WE8A1'
//           WE8E5  codep:0x224c wordp:0xe8e5 size:0x0060 C-string:'WE8E5'
//           WE947  codep:0x224c wordp:0xe947 size:0x0030 C-string:'WE947'
//           WE979  codep:0x224c wordp:0xe979 size:0x0024 C-string:'WE979'
//           WE99F  codep:0x224c wordp:0xe99f size:0x0012 C-string:'WE99F'
//           WE9B3  codep:0x224c wordp:0xe9b3 size:0x0038 C-string:'WE9B3'
//           WE9ED  codep:0x224c wordp:0xe9ed size:0x003c C-string:'WE9ED'
//           WEA2B  codep:0x224c wordp:0xea2b size:0x002c C-string:'WEA2B'
//           WEA59  codep:0x224c wordp:0xea59 size:0x002e C-string:'WEA59'
//           WEA89  codep:0x224c wordp:0xea89 size:0x002c C-string:'WEA89'
//           WEAB7  codep:0x224c wordp:0xeab7 size:0x0038 C-string:'WEAB7'
//           WEAF1  codep:0x224c wordp:0xeaf1 size:0x0052 C-string:'WEAF1'
//           WEB45  codep:0x224c wordp:0xeb45 size:0x001a C-string:'WEB45'
//           WEB61  codep:0x224c wordp:0xeb61 size:0x006e C-string:'WEB61'
//           WEBD1  codep:0x224c wordp:0xebd1 size:0x0088 C-string:'WEBD1'
//         SEEGRID  codep:0x224c wordp:0xec65 size:0x0016 C-string:'SEEGRID'
//           WEC7D  codep:0x224c wordp:0xec7d size:0x0018 C-string:'WEC7D'
//           WEC97  codep:0x224c wordp:0xec97 size:0x003c C-string:'WEC97'
//           WECD5  codep:0x224c wordp:0xecd5 size:0x0040 C-string:'WECD5'
//           WED17  codep:0x224c wordp:0xed17 size:0x0098 C-string:'WED17'
//           WEDB1  codep:0x224c wordp:0xedb1 size:0x001c C-string:'WEDB1'
//           WEDCF  codep:0x224c wordp:0xedcf size:0x002a C-string:'WEDCF'
//           WEDFB  codep:0x224c wordp:0xedfb size:0x0068 C-string:'WEDFB'
//           WEE65  codep:0x224c wordp:0xee65 size:0x0034 C-string:'WEE65'
//           WEE9B  codep:0x224c wordp:0xee9b size:0x0034 C-string:'WEE9B'
//           WEED1  codep:0x224c wordp:0xeed1 size:0x0060 C-string:'WEED1'
//           WEF33  codep:0x224c wordp:0xef33 size:0x003a C-string:'WEF33'
//           WEF6F  codep:0x224c wordp:0xef6f size:0x0026 C-string:'WEF6F'
//           WEF97  codep:0x224c wordp:0xef97 size:0x0042 C-string:'WEF97'
//           WEFDB  codep:0x224c wordp:0xefdb size:0x001e C-string:'WEFDB'
//           WEFFB  codep:0x224c wordp:0xeffb size:0x0026 C-string:'WEFFB'
//           WF023  codep:0x224c wordp:0xf023 size:0x001e C-string:'WF023'
//           WF043  codep:0x224c wordp:0xf043 size:0x0026 C-string:'WF043'
//           WF06B  codep:0x224c wordp:0xf06b size:0x001a C-string:'WF06B'
//           WF087  codep:0x224c wordp:0xf087 size:0x000e C-string:'WF087'
//           WF097  codep:0x224c wordp:0xf097 size:0x000a C-string:'WF097'
//           WF0A3  codep:0x224c wordp:0xf0a3 size:0x000a C-string:'WF0A3'
//           WF0AF  codep:0x224c wordp:0xf0af size:0x000a C-string:'WF0AF'
//           WF0BB  codep:0x224c wordp:0xf0bb size:0x000a C-string:'WF0BB'
//           WF0C7  codep:0x224c wordp:0xf0c7 size:0x000a C-string:'WF0C7'
//           WF0D3  codep:0x224c wordp:0xf0d3 size:0x00c8 C-string:'WF0D3'
//           WF19D  codep:0x224c wordp:0xf19d size:0x000e C-string:'WF19D'
//         DESCEND  codep:0x224c wordp:0xf1b7 size:0x008d C-string:'DESCEND'
//           WF246  codep:0x224c wordp:0xf246 size:0x006c C-string:'WF246'
//           WF2B4  codep:0x224c wordp:0xf2b4 size:0x0046 C-string:'WF2B4'
//           WF2FC  codep:0x224c wordp:0xf2fc size:0x0012 C-string:'WF2FC'
//           WF310  codep:0x1d29 wordp:0xf310 size:0x0002 C-string:'WF310'
//           WF314  codep:0x224c wordp:0xf314 size:0x0068 C-string:'WF314'
//          ASCEND  codep:0x224c wordp:0xf387 size:0x0008 C-string:'ASCEND'
//           WF391  codep:0x224c wordp:0xf391 size:0x000c C-string:'WF391'
//           WF39F  codep:0x224c wordp:0xf39f size:0x002a C-string:'WF39F'
//           WF3CB  codep:0x224c wordp:0xf3cb size:0x0026 C-string:'WF3CB'
//         SKYCASE  codep:0x4a4f wordp:0xf3fd size:0x0014 C-string:'SKYCASE'
//           WF413  codep:0x224c wordp:0xf413 size:0x000c C-string:'WF413'
//      INIT-ORBIT  codep:0x224c wordp:0xf42e size:0x0058 C-string:'INIT_dash_ORBIT'
//          ROTATE  codep:0x224c wordp:0xf491 size:0x0000 C-string:'ROTATE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_POLYSEG; // POLYSEG
extern const unsigned short int pp_SEED; // SEED
extern const unsigned short int pp_SPHEREWRAP; // SPHEREWRAP
extern const unsigned short int pp_SIGNEXTEND; // SIGNEXTEND
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
extern const unsigned short int pp_IsFUEL_dash_DIE; // ?FUEL-DIE
extern const unsigned short int pp_DXVIS; // DXVIS
extern const unsigned short int pp_DYVIS; // DYVIS
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_DXCON; // DXCON
extern const unsigned short int pp_DYCON; // DYCON
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_GLOBALSEED; // GLOBALSEED
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp__3DSEG; // 3DSEG
extern const unsigned short int pp_VIN_i_; // VIN'
extern const unsigned short int pp_YSCREEN; // YSCREEN
extern const unsigned short int pp_XSCREEN; // XSCREEN
extern const unsigned short int pp__n_CLRMAP; // #CLRMAP
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern Color BLACK; // BLACK
extern Color DK_dash_GREEN; // DK-GREEN
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color LT_dash_BLUE; // LT-BLUE
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern ArrayType CONTOUR; // CONTOUR
extern ArrayType FACET; // FACET
extern ArrayType FACE; // FACE
extern ArrayType GVERTEX_gt_GRIDCOLOR; // GVERTEX>GRIDCOLOR
extern ArrayType GPOLY; // GPOLY
extern ArrayType GRIDCOLOR; // GRIDCOLOR
extern ArrayType _9X9COARSE; // 9X9COARSE
extern ArrayType _9X9FINE_gt_GVERTEX; // 9X9FINE>GVERTEX
extern ArrayType XFORMVERT; // XFORMVERT
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void RRND(); // RRND
void SQRT(); // SQRT
void _n_COLZ(); // #COLZ
void ACELLADDR(); // ACELLADDR
void A_ex_(); // A!
void A_at_(); // A@
void SETLARRAY(); // SETLARRAY
void FULLARRAY(); // FULLARRAY
void SETREGION(); // SETREGION
void FILLREGION(); // FILLREGION
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void ON_3(); // ON_3
void OFF(); // OFF
void FILL_1(); // FILL_1
void FILE_st_(); // FILE<
void GetINST_dash_SPECIES(); // @INST-SPECIES
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void SETCLIPWINDOW(); // SETCLIPWINDOW
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void DARK(); // DARK
void DrawCIRCLE(); // .CIRCLE
void SET_dash_COLORMAP(); // SET-COLORMAP
void StoreXYSEED(); // !XYSEED
void CTERASE(); // CTERASE
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void XHBUF_dash_SEG(); // XHBUF-SEG
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
void LCMOVE(); // LCMOVE
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void L_plus__dash__at_(); // L+-@
void CLIPPER(); // CLIPPER
void SCANPOLY(); // SCANPOLY
void BFILL(); // BFILL
void LPLOT(); // LPLOT
void LLINE(); // LLINE
void LFILLPOLY(); // LFILLPOLY
void V_gt_DISPLAY(); // V>DISPLAY
void COLORMAP(); // COLORMAP
void WDD2C(); // WDD2C
void SETQUAD(); // SETQUAD
void C_star__slash_(); // C*/
void WE16B(); // WE16B
void WE1B6(); // WE1B6
void WE228(); // WE228
void WE48C(); // WE48C
void WE4AA(); // WE4AA


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WDB92 = 0xdb92; // WDB92 size: 12
// {0x08, 0x19, 0x29, 0x38, 0x47, 0x54, 0x5f, 0x6a, 0x72, 0x78, 0x7d, 0x7f}

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

const unsigned short int pp_WDBE8 = 0xdbe8; // WDBE8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBEC = 0xdbec; // WDBEC size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBF0 = 0xdbf0; // WDBF0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBF4 = 0xdbf4; // WDBF4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBF8 = 0xdbf8; // WDBF8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDBFC = 0xdbfc; // WDBFC size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC00 = 0xdc00; // WDC00 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC04 = 0xdc04; // WDC04 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC08 = 0xdc08; // WDC08 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC0C = 0xdc0c; // WDC0C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC10 = 0xdc10; // WDC10 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC14 = 0xdc14; // WDC14 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC18 = 0xdc18; // WDC18 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC1C = 0xdc1c; // WDC1C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC20 = 0xdc20; // WDC20 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC24 = 0xdc24; // WDC24 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC28 = 0xdc28; // WDC28 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC2C = 0xdc2c; // WDC2C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC30 = 0xdc30; // WDC30 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC34 = 0xdc34; // WDC34 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDC38 = 0xdc38; // WDC38 size: 32
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xd1, 0x43, 0x4f, 0x4e, 0x41, 0x4e, 0x43, 0x48, 0x4f, 0x52, 0x3e, 0x43, 0x4f, 0x4e, 0x54, 0x4f, 0x37, 0x31, 0x37, 0x3c, 0x83, 0xe9, 0x2c, 0xdc, 0xce}

const unsigned short int pp_WDC5A = 0xdc5a; // WDC5A size: 8
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4e}

const unsigned short int pp_WDC64 = 0xdc64; // WDC64 size: 32
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xdc, 0xcd, 0x53, 0x55, 0x42, 0x2d, 0x43, 0x4f, 0x4e, 0x2d, 0x46, 0x52, 0x41, 0x43, 0xd4, 0xa0, 0x3c, 0x35, 0xea, 0xb6, 0xdb, 0xcd, 0x46, 0x52, 0x41}

const unsigned short int pp_WDC86 = 0xdc86; // WDC86 size: 8
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xd2}

const unsigned short int pp_WDC90 = 0xdc90; // WDC90 size: 48
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x41, 0x4d, 0xc5, 0xa0, 0x3c, 0xcb, 0xea, 0x6c, 0xdc, 0xc6, 0x2b, 0x46, 0x52, 0x41, 0x4d, 0xc5, 0xa0, 0x3c, 0xcf, 0xea, 0x94, 0xdc, 0xc6, 0x2d, 0x46, 0x52, 0x41, 0x4d, 0xc5, 0xa0, 0x3c, 0xda, 0xea, 0x57, 0xdc, 0xc6, 0x40, 0x46, 0x52, 0x41, 0x4d}

const unsigned short int pp_WDCC2 = 0xdcc2; // WDCC2 size: 24
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x46, 0x52, 0x41, 0x4d, 0xc5, 0xa0, 0x3c, 0xf6, 0xea, 0xad, 0xdc, 0xc3, 0x40, 0x58, 0xb1, 0xa0, 0x3c}

const unsigned short int pp_WDCE4 = 0xdce4; // WDCE4 size: 58
// {0x8b, 0xc1, 0xc3, 0x29, 0x1d, 0x8b, 0xc2, 0x03, 0xc1, 0x40, 0xd1, 0xf8, 0x03, 0xc1, 0x40, 0xd1, 0xf8, 0xc3, 0x29, 0x1d, 0x8b, 0xc2, 0x03, 0xc1, 0x40, 0xd1, 0xf8, 0xc3, 0x29, 0x1d, 0x8b, 0xc2, 0x03, 0xc1, 0x40, 0xd1, 0xf8, 0x03, 0xc2, 0x40, 0xd1, 0xf8, 0xc3, 0x29, 0x1d, 0x8b, 0xc2, 0xc3, 0xe4, 0xdc, 0xe9, 0xdc, 0xf8, 0xdc, 0x02, 0xdd, 0x11, 0xdd}

const unsigned short int pp_WDD20 = 0xdd20; // WDD20 size: 10
// {0xd1, 0xe3, 0x81, 0xc3, 0x14, 0xdd, 0x8b, 0x07, 0xff, 0xe0}

const unsigned short int pp_WE5FA = 0xe5fa; // WE5FA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF310 = 0xf310; // WF310 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WDB86 = 0xdb86; // WDB86
const unsigned short int cc_WDB8A = 0xdb8a; // WDB8A
const unsigned short int cc_WDB8E = 0xdb8e; // WDB8E


// 0xdb82: db 0x93 0x01 '  '

// ================================================
// 0xdb84: WORD 'WDB86' codep=0x2214 wordp=0xdb86
// ================================================
// 0xdb86: dw 0x007f

// ================================================
// 0xdb88: WORD 'WDB8A' codep=0x2214 wordp=0xdb8a
// ================================================
// 0xdb8a: dw 0x0032

// ================================================
// 0xdb8c: WORD 'WDB8E' codep=0x2214 wordp=0xdb8e
// ================================================
// 0xdb8e: dw 0x0042

// ================================================
// 0xdb90: WORD 'WDB92' codep=0x1d29 wordp=0xdb92
// ================================================
// 0xdb92: db 0x08 0x19 0x29 0x38 0x47 0x54 0x5f 0x6a 0x72 0x78 0x7d 0x7f '  )8GT_jrx}'

// ================================================
// 0xdb9e: WORD 'WDBA0' codep=0x1d29 wordp=0xdba0
// ================================================
// 0xdba0: db 0x3a 0x20 ': '

// ================================================
// 0xdba2: WORD 'WDBA4' codep=0x1d29 wordp=0xdba4
// ================================================
// 0xdba4: db 0x3a 0x20 ': '

// ================================================
// 0xdba6: WORD 'WDBA8' codep=0x1d29 wordp=0xdba8
// ================================================
// 0xdba8: db 0x3a 0x20 ': '

// ================================================
// 0xdbaa: WORD 'WDBAC' codep=0x1d29 wordp=0xdbac
// ================================================
// 0xdbac: db 0x3a 0x20 ': '

// ================================================
// 0xdbae: WORD 'WDBB0' codep=0x1d29 wordp=0xdbb0
// ================================================
// 0xdbb0: db 0x3a 0x20 ': '

// ================================================
// 0xdbb2: WORD 'WDBB4' codep=0x1d29 wordp=0xdbb4
// ================================================
// 0xdbb4: db 0x3a 0x20 ': '

// ================================================
// 0xdbb6: WORD 'WDBB8' codep=0x1d29 wordp=0xdbb8
// ================================================
// 0xdbb8: db 0x3a 0x20 ': '

// ================================================
// 0xdbba: WORD 'WDBBC' codep=0x1d29 wordp=0xdbbc
// ================================================
// 0xdbbc: db 0x3a 0x20 ': '

// ================================================
// 0xdbbe: WORD 'WDBC0' codep=0x1d29 wordp=0xdbc0
// ================================================
// 0xdbc0: db 0x3a 0x20 ': '

// ================================================
// 0xdbc2: WORD 'WDBC4' codep=0x1d29 wordp=0xdbc4
// ================================================
// 0xdbc4: db 0x3a 0x20 ': '

// ================================================
// 0xdbc6: WORD 'WDBC8' codep=0x1d29 wordp=0xdbc8
// ================================================
// 0xdbc8: db 0x3a 0x20 ': '

// ================================================
// 0xdbca: WORD 'WDBCC' codep=0x1d29 wordp=0xdbcc
// ================================================
// 0xdbcc: db 0x3a 0x20 ': '

// ================================================
// 0xdbce: WORD 'WDBD0' codep=0x1d29 wordp=0xdbd0
// ================================================
// 0xdbd0: db 0x3a 0x20 ': '

// ================================================
// 0xdbd2: WORD 'WDBD4' codep=0x1d29 wordp=0xdbd4
// ================================================
// 0xdbd4: db 0x3a 0x20 ': '

// ================================================
// 0xdbd6: WORD 'WDBD8' codep=0x1d29 wordp=0xdbd8
// ================================================
// 0xdbd8: db 0x3a 0x20 ': '

// ================================================
// 0xdbda: WORD 'WDBDC' codep=0x1d29 wordp=0xdbdc
// ================================================
// 0xdbdc: db 0x3a 0x20 ': '

// ================================================
// 0xdbde: WORD 'WDBE0' codep=0x1d29 wordp=0xdbe0
// ================================================
// 0xdbe0: db 0x3a 0x20 ': '

// ================================================
// 0xdbe2: WORD 'WDBE4' codep=0x1d29 wordp=0xdbe4
// ================================================
// 0xdbe4: db 0x3a 0x20 ': '

// ================================================
// 0xdbe6: WORD 'WDBE8' codep=0x1d29 wordp=0xdbe8
// ================================================
// 0xdbe8: db 0x3a 0x20 ': '

// ================================================
// 0xdbea: WORD 'WDBEC' codep=0x1d29 wordp=0xdbec
// ================================================
// 0xdbec: db 0x3a 0x20 ': '

// ================================================
// 0xdbee: WORD 'WDBF0' codep=0x1d29 wordp=0xdbf0
// ================================================
// 0xdbf0: db 0x3a 0x20 ': '

// ================================================
// 0xdbf2: WORD 'WDBF4' codep=0x1d29 wordp=0xdbf4
// ================================================
// 0xdbf4: db 0x3a 0x20 ': '

// ================================================
// 0xdbf6: WORD 'WDBF8' codep=0x1d29 wordp=0xdbf8
// ================================================
// 0xdbf8: db 0x3a 0x20 ': '

// ================================================
// 0xdbfa: WORD 'WDBFC' codep=0x1d29 wordp=0xdbfc
// ================================================
// 0xdbfc: db 0x3a 0x20 ': '

// ================================================
// 0xdbfe: WORD 'WDC00' codep=0x1d29 wordp=0xdc00
// ================================================
// 0xdc00: db 0x3a 0x20 ': '

// ================================================
// 0xdc02: WORD 'WDC04' codep=0x1d29 wordp=0xdc04
// ================================================
// 0xdc04: db 0x3a 0x20 ': '

// ================================================
// 0xdc06: WORD 'WDC08' codep=0x1d29 wordp=0xdc08
// ================================================
// 0xdc08: db 0x3a 0x20 ': '

// ================================================
// 0xdc0a: WORD 'WDC0C' codep=0x1d29 wordp=0xdc0c
// ================================================
// orphan
// 0xdc0c: db 0x3a 0x20 ': '

// ================================================
// 0xdc0e: WORD 'WDC10' codep=0x1d29 wordp=0xdc10
// ================================================
// 0xdc10: db 0x3a 0x20 ': '

// ================================================
// 0xdc12: WORD 'WDC14' codep=0x1d29 wordp=0xdc14
// ================================================
// 0xdc14: db 0x3a 0x20 ': '

// ================================================
// 0xdc16: WORD 'WDC18' codep=0x1d29 wordp=0xdc18
// ================================================
// 0xdc18: db 0x3a 0x20 ': '

// ================================================
// 0xdc1a: WORD 'WDC1C' codep=0x1d29 wordp=0xdc1c
// ================================================
// 0xdc1c: db 0x3a 0x20 ': '

// ================================================
// 0xdc1e: WORD 'WDC20' codep=0x1d29 wordp=0xdc20
// ================================================
// orphan
// 0xdc20: db 0x3a 0x20 ': '

// ================================================
// 0xdc22: WORD 'WDC24' codep=0x1d29 wordp=0xdc24
// ================================================
// orphan
// 0xdc24: db 0x3a 0x20 ': '

// ================================================
// 0xdc26: WORD 'WDC28' codep=0x1d29 wordp=0xdc28
// ================================================
// orphan
// 0xdc28: db 0x3a 0x20 ': '

// ================================================
// 0xdc2a: WORD 'WDC2C' codep=0x1d29 wordp=0xdc2c
// ================================================
// orphan
// 0xdc2c: db 0x3a 0x20 ': '

// ================================================
// 0xdc2e: WORD 'WDC30' codep=0x1d29 wordp=0xdc30
// ================================================
// orphan
// 0xdc30: db 0x3a 0x20 ': '

// ================================================
// 0xdc32: WORD 'WDC34' codep=0x1d29 wordp=0xdc34
// ================================================
// 0xdc34: db 0x3a 0x20 ': '

// ================================================
// 0xdc36: WORD 'WDC38' codep=0x1d29 wordp=0xdc38
// ================================================
// 0xdc38: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xd1 0x43 0x4f 0x4e 0x41 0x4e 0x43 0x48 0x4f 0x52 0x3e 0x43 0x4f 0x4e 0x54 0x4f 0x37 0x31 0x37 0x3c 0x83 0xe9 0x2c 0xdc 0xce ' ALLOT  CONANCHOR>CONTO717<  ,  '

// ================================================
// 0xdc58: WORD 'WDC5A' codep=0x1d29 wordp=0xdc5a
// ================================================
// 0xdc5a: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4e ' ALLOT N'

// ================================================
// 0xdc62: WORD 'WDC64' codep=0x1d29 wordp=0xdc64
// ================================================
// 0xdc64: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xdc 0xcd 0x53 0x55 0x42 0x2d 0x43 0x4f 0x4e 0x2d 0x46 0x52 0x41 0x43 0xd4 0xa0 0x3c 0x35 0xea 0xb6 0xdb 0xcd 0x46 0x52 0x41 ' ALLOT   SUB-CON-FRAC  <5    FRA'

// ================================================
// 0xdc84: WORD 'WDC86' codep=0x1d29 wordp=0xdc86
// ================================================
// 0xdc86: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xd2 ' ALLOT  '

// ================================================
// 0xdc8e: WORD 'WDC90' codep=0x1d29 wordp=0xdc90
// ================================================
// 0xdc90: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x41 0x4d 0xc5 0xa0 0x3c 0xcb 0xea 0x6c 0xdc 0xc6 0x2b 0x46 0x52 0x41 0x4d 0xc5 0xa0 0x3c 0xcf 0xea 0x94 0xdc 0xc6 0x2d 0x46 0x52 0x41 0x4d 0xc5 0xa0 0x3c 0xda 0xea 0x57 0xdc 0xc6 0x40 0x46 0x52 0x41 0x4d ' ALLOT AM  <  l  +FRAM  <     -FRAM  <  W  @FRAM'

// ================================================
// 0xdcc0: WORD 'WDCC2' codep=0x1d29 wordp=0xdcc2
// ================================================
// 0xdcc2: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x46 0x52 0x41 0x4d 0xc5 0xa0 0x3c 0xf6 0xea 0xad 0xdc 0xc3 0x40 0x58 0xb1 0xa0 0x3c ' ALLOT FRAM  <     @X  <'

// ================================================
// 0xdcda: WORD 'WDCDC' codep=0x73ea wordp=0xdcdc
// ================================================
LoadDataType WDCDC = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xdce2: WORD 'WDCE4' codep=0x1d29 wordp=0xdce4
// ================================================
// orphan
// 0xdce4: db 0x8b 0xc1 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0x03 0xc1 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0x03 0xc2 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0xc3 0xe4 0xdc 0xe9 0xdc 0xf8 0xdc 0x02 0xdd 0x11 0xdd '   )     @    @   )     @   )     @    @   )              '

// ================================================
// 0xdd1e: WORD 'WDD20' codep=0x1d29 wordp=0xdd20 params=0 returns=1
// ================================================
// 0xdd20: shl    bx,1
// 0xdd22: add    bx,DD14
// 0xdd26: mov    ax,[bx]
// 0xdd28: jmp    ax

// ================================================
// 0xdd2a: WORD 'WDD2C' codep=0xdd2c wordp=0xdd2c
// ================================================
// 0xdd2c: pop    word ptr [DC24] // WDC24
// 0xdd30: pop    word ptr [DC28] // WDC28
// 0xdd34: mov    bx,[DC20] // WDC20
// 0xdd38: add    bx,0E
// 0xdd3b: mov    cx,[bx]
// 0xdd3d: sub    bx,04
// 0xdd40: mov    dx,[bx]
// 0xdd42: mov    bx,[DC28] // WDC28
// 0xdd46: call   DD20
// 0xdd49: push   ax
// 0xdd4a: mov    bx,[DC20] // WDC20
// 0xdd4e: add    bx,02
// 0xdd51: mov    cx,[bx]
// 0xdd53: add    bx,04
// 0xdd56: mov    dx,[bx]
// 0xdd58: mov    bx,[DC28] // WDC28
// 0xdd5c: call   DD20
// 0xdd5f: mov    dx,ax
// 0xdd61: pop    cx
// 0xdd62: mov    bx,[DC24] // WDC24
// 0xdd66: call   DD20
// 0xdd69: push   ax
// 0xdd6a: mov    bx,[DC20] // WDC20
// 0xdd6e: mov    dx,[bx]
// 0xdd70: add    bx,0C
// 0xdd73: mov    cx,[bx]
// 0xdd75: mov    bx,[DC24] // WDC24
// 0xdd79: call   DD20
// 0xdd7c: push   ax
// 0xdd7d: mov    bx,[DC20] // WDC20
// 0xdd81: add    bx,04
// 0xdd84: mov    dx,[bx]
// 0xdd86: add    bx,04
// 0xdd89: mov    cx,[bx]
// 0xdd8b: mov    bx,[DC24] // WDC24
// 0xdd8f: call   DD20
// 0xdd92: mov    dx,ax
// 0xdd94: pop    cx
// 0xdd95: mov    bx,[DC28] // WDC28
// 0xdd99: call   DD20
// 0xdd9c: push   ax
// 0xdd9d: lodsw
// 0xdd9e: mov    bx,ax
// 0xdda0: jmp    word ptr [bx]

// ================================================
// 0xdda2: WORD 'WDDA4' codep=0x224c wordp=0xdda4
// ================================================
// orphan

void WDDA4() // WDDA4
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

    j = 0;
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ACELLADDR(); // ACELLADDR
      A_at_(); // A@
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xddc4: WORD 'WDDC6' codep=0x224c wordp=0xddc6
// ================================================

void WDDC6() // WDDC6
{
  unsigned short int i, imax, j, jmax;
  OVER(); // OVER
  Push(Pop() + Pop()); // +

  i = Pop() - 1; //  1-
  imax = Pop();
  do // (DO)
  {
    Push(0);
    _n_COLZ(); // #COLZ

    j = Pop() - 1; //  1-
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ACELLADDR(); // ACELLADDR
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
// 0xddec: WORD 'WDDEE' codep=0x224c wordp=0xddee
// ================================================

void WDDEE() // WDDEE
{
  unsigned short int i, imax, j, jmax;
  Push(pp_SPHEREWRAP); // SPHEREWRAP
  OFF(); // OFF
  Push(0x6b31); // 'GVERTEX>GRIDCOLOR'
  SETLARRAY(); // SETLARRAY

  i = 0;
  imax = 6;
  do // (DO)
  {

    j = 0;
    jmax = 6;
    do // (DO)
    {
      Push(j * 0x0020 - 0x004e); // I 0x0020 * 0x004e -
      Push(0);
      Push(i * 0x0020 - 0x004e); // J 0x0020 * 0x004e -
      Push(i * 6 + j); // J 6 * I +
      Push(1);
      WDDC6(); // WDDC6
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xde3a: WORD 'WDE3C' codep=0x224c wordp=0xde3c
// ================================================

void WDE3C() // WDE3C
{
  unsigned short int i, imax, j, jmax;
  Push(pp_SPHEREWRAP); // SPHEREWRAP
  OFF(); // OFF
  Push(0x6b31); // 'GVERTEX>GRIDCOLOR'
  SETLARRAY(); // SETLARRAY

  i = 0;
  imax = 9;
  do // (DO)
  {

    j = 0;
    jmax = 9;
    do // (DO)
    {
      Push(j * 4 - 0x000e); // I 4 * 0x000e -
      Push(0);
      Push(i * 4 - 0x000e); // J 4 * 0x000e -
      Push((i * 9 + j) + 0x0024); // J 9 * I + 0x0024 +
      Push(1);
      WDDC6(); // WDDC6
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xde8a: WORD 'WDE8C' codep=0x224c wordp=0xde8c
// ================================================

void WDE8C() // WDE8C
{
  XHBUF_dash_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  FILE_st_(); // FILE<
  Push(0);
  Push(0x6b43); // 'GPOLY'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(0);
  Push(0x0164);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xdeae: WORD 'WDEB0' codep=0x224c wordp=0xdeb0
// ================================================

void WDEB0() // WDEB0
{
  XHBUF_dash_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x004c);
  FILE_st_(); // FILE<
  Push(0);
  Push(0x6afa); // 'FACET'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(0);
  Push(0x0120);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xded2: WORD 'WDED4' codep=0x224c wordp=0xded4
// ================================================

void WDED4() // WDED4
{
  XHBUF_dash_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x004d);
  FILE_st_(); // FILE<
  Push(0);
  Push(0x6ae8); // 'VERTEX'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(0);
  Push(0x0192);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xdef6: WORD 'SETQUAD' codep=0xdf02 wordp=0xdf02
// ================================================
// 0xdf02: mov    [DC20],sp // WDC20
// 0xdf06: lodsw
// 0xdf07: mov    bx,ax
// 0xdf09: jmp    word ptr [bx]

// ================================================
// 0xdf0b: WORD 'C*/' codep=0xdf13 wordp=0xdf13
// ================================================
// 0xdf13: pop    dx
// 0xdf14: pop    cx
// 0xdf15: pop    ax
// 0xdf16: imul   cl
// 0xdf18: idiv   dl
// 0xdf1a: cbw    
// 0xdf1b: push   ax
// 0xdf1c: lodsw
// 0xdf1d: mov    bx,ax
// 0xdf1f: jmp    word ptr [bx]

// ================================================
// 0xdf21: WORD 'WDF23' codep=0x224c wordp=0xdf23 params=0 returns=0
// ================================================

void WDF23() // WDF23
{
  Push(Read16(pp_WDBC8) - Read16(pp_WDBD4)); // WDBC8 @ WDBD4 @ -
  Push(pp_WDBE0); // WDBE0
  Store_3(); // !_3
  Push(Read16(pp_WDBCC) - Read16(pp_WDBD8)); // WDBCC @ WDBD8 @ -
  Push(pp_WDBE4); // WDBE4
  Store_3(); // !_3
  Push(Read16(pp_WDBD0) - Read16(pp_WDBDC)); // WDBD0 @ WDBDC @ -
  Push(pp_WDBE8); // WDBE8
  Store_3(); // !_3
}


// ================================================
// 0xdf4f: WORD 'WDF51' codep=0x224c wordp=0xdf51 params=0 returns=0
// ================================================

void WDF51() // WDF51
{
  Push(Read16(pp_WDBE8) * Read16(cc_WDB86)); // WDBE8 @ WDB86 *
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  Push(Read16(pp_WDBE0) * Read16(cc_WDB86)); // WDBE0 @ WDB86 *
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_WDBEC); // WDBEC
  Store_3(); // !_3
}


// ================================================
// 0xdf73: WORD 'WDF75' codep=0x224c wordp=0xdf75 params=0 returns=0
// ================================================

void WDF75() // WDF75
{
  Push(Read16(pp_WDBEC)); // WDBEC @
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  Push(Read16(pp_WDBE4) * Read16(cc_WDB86)); // WDBE4 @ WDB86 *
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_WDBF8); // WDBF8
  Store_3(); // !_3
}


// ================================================
// 0xdf93: WORD 'WDF95' codep=0x224c wordp=0xdf95 params=0 returns=0
// ================================================

void WDF95() // WDF95
{
  Push(Read16(pp_WDBE0)); // WDBE0 @
  Push(Read16(cc_WDB86)); // WDB86
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Read16(pp_WDBEC)); // WDBEC @
  _star__slash_(); // */
  Push(pp_WDBF0); // WDBF0
  Store_3(); // !_3
}


// ================================================
// 0xdfab: WORD 'WDFAD' codep=0x224c wordp=0xdfad params=0 returns=0
// ================================================

void WDFAD() // WDFAD
{
  Push(Read16(pp_WDBE8)); // WDBE8 @
  Push(Read16(cc_WDB86)); // WDB86
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Read16(pp_WDBEC)); // WDBEC @
  _star__slash_(); // */
  Push(pp_WDBF4); // WDBF4
  Store_3(); // !_3
}


// ================================================
// 0xdfc3: WORD 'WDFC5' codep=0x224c wordp=0xdfc5 params=0 returns=0
// ================================================

void WDFC5() // WDFC5
{
  Push(Read16(pp_WDBE4)); // WDBE4 @
  Push(Read16(cc_WDB86)); // WDB86
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Read16(pp_WDBF8)); // WDBF8 @
  _star__slash_(); // */
  Push(pp_WDBFC); // WDBFC
  Store_3(); // !_3
}


// ================================================
// 0xdfdb: WORD 'WDFDD' codep=0x224c wordp=0xdfdd params=0 returns=0
// ================================================

void WDFDD() // WDFDD
{
  Push(Read16(pp_WDBEC)); // WDBEC @
  Push(Read16(cc_WDB86)); // WDB86
  Push(Read16(pp_WDBF8)); // WDBF8 @
  _star__slash_(); // */
  Push(pp_WDC00); // WDC00
  Store_3(); // !_3
}


// ================================================
// 0xdfef: WORD 'WDFF1' codep=0x224c wordp=0xdff1
// ================================================

void WDFF1() // WDFF1
{
  Push(Read16(pp_WDBF4)); // WDBF4 @
  Push(Read16(pp_WDC08)); // WDC08 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(Read16(pp_WDBF0)); // WDBF0 @
  Push(Read16(pp_WDBFC)); // WDBFC @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(Read16(pp_WDC04)); // WDC04 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(Pop() + Pop()); // +
  Push(pp_WDCC2); // WDCC2
  C_ex_(); // C!
}


// ================================================
// 0xe019: WORD 'WE01B' codep=0x224c wordp=0xe01b
// ================================================

void WE01B() // WE01B
{
  Push(Read16(pp_WDC00)); // WDC00 @
  Push(Read16(pp_WDC04)); // WDC04 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(-Pop()); //  NEGATE
  Push(pp_WDCC2 + 2); // WDCC2 2+
  C_ex_(); // C!
}


// ================================================
// 0xe031: WORD 'WE033' codep=0x224c wordp=0xe033
// ================================================

void WE033() // WE033
{
  Push(Read16(pp_WDBF0)); // WDBF0 @
  Push(Read16(pp_WDC08)); // WDC08 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(-Pop()); //  NEGATE
  Push(Read16(pp_WDBF4)); // WDBF4 @
  Push(Read16(pp_WDBFC)); // WDBFC @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(Read16(pp_WDC04)); // WDC04 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(Pop() + Pop()); // +
  Push(pp_WDCC2 + 4); // WDCC2 4 +
  C_ex_(); // C!
}


// ================================================
// 0xe061: WORD 'WE063' codep=0x224c wordp=0xe063
// ================================================

void WE063() // WE063
{
  Push(Read16(pp_WDBF4)); // WDBF4 @
  Push(Read16(pp_WDC04)); // WDC04 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(Read16(pp_WDBF0)); // WDBF0 @
  Push(Read16(pp_WDBFC)); // WDBFC @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(Read16(pp_WDC08)); // WDC08 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  _dash_(); // -
  Push(pp_WDCC2 + 8); // WDCC2 8 +
  C_ex_(); // C!
}


// ================================================
// 0xe08f: WORD 'WE091' codep=0x224c wordp=0xe091
// ================================================

void WE091() // WE091
{
  Push(Read16(pp_WDC00)); // WDC00 @
  Push(Read16(pp_WDC08)); // WDC08 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(pp_WDCC2 + 0x000a); // WDCC2 0x000a +
  C_ex_(); // C!
}


// ================================================
// 0xe0a9: WORD 'WE0AB' codep=0x224c wordp=0xe0ab
// ================================================

void WE0AB() // WE0AB
{
  Push(Read16(pp_WDBF0)); // WDBF0 @
  Push(Read16(pp_WDC04)); // WDC04 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(-Pop()); //  NEGATE
  Push(Read16(pp_WDBF4)); // WDBF4 @
  Push(Read16(pp_WDBFC)); // WDBFC @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(Read16(pp_WDC08)); // WDC08 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  _dash_(); // -
  Push(pp_WDCC2 + 0x000c); // WDCC2 0x000c +
  C_ex_(); // C!
}


// ================================================
// 0xe0db: WORD 'WE0DD' codep=0x224c wordp=0xe0dd
// ================================================

void WE0DD() // WE0DD
{
  Push(Read16(pp_WDBF0)); // WDBF0 @
  Push(Read16(pp_WDC00)); // WDC00 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(-Pop()); //  NEGATE
  Push(pp_WDCC2 + 0x0010); // WDCC2 0x0010 +
  C_ex_(); // C!
}


// ================================================
// 0xe0f7: WORD 'WE0F9' codep=0x224c wordp=0xe0f9 params=0 returns=0
// ================================================

void WE0F9() // WE0F9
{
  Push(-Read16(pp_WDBFC)); // WDBFC @ NEGATE
  Push(pp_WDCC2 + 0x0012); // WDCC2 0x0012 +
  C_ex_(); // C!
}


// ================================================
// 0xe10b: WORD 'WE10D' codep=0x224c wordp=0xe10d
// ================================================

void WE10D() // WE10D
{
  Push(Read16(pp_WDBF4)); // WDBF4 @
  Push(Read16(pp_WDC00)); // WDC00 @
  Push(Read16(cc_WDB86)); // WDB86
  C_star__slash_(); // C*/
  Push(-Pop()); //  NEGATE
  Push(pp_WDCC2 + 0x0014); // WDCC2 0x0014 +
  C_ex_(); // C!
}


// ================================================
// 0xe127: WORD 'WE129' codep=0x224c wordp=0xe129 params=0 returns=0
// ================================================

void WE129() // WE129
{
  Push(Read16(pp_WDBF8)); // WDBF8 @
  Push(pp_WDCC2 + 0x0016); // WDCC2 0x0016 +
  Store_3(); // !_3
}


// ================================================
// 0xe139: WORD 'WE13B' codep=0x224c wordp=0xe13b
// ================================================

void WE13B() // WE13B
{
  Push(pp_WDCC2); // WDCC2
  Push(0x0018);
  Push(0);
  FILL_1(); // FILL_1
  WDF23(); // WDF23
  WDF51(); // WDF51
  WDF75(); // WDF75
  WDF95(); // WDF95
  WDFAD(); // WDFAD
  WDFC5(); // WDFC5
  WDFDD(); // WDFDD
  WDFF1(); // WDFF1
  WE01B(); // WE01B
  WE033(); // WE033
  WE063(); // WE063
  WE091(); // WE091
  WE0AB(); // WE0AB
  WE0DD(); // WE0DD
  WE0F9(); // WE0F9
  WE10D(); // WE10D
  WE129(); // WE129
}


// ================================================
// 0xe169: WORD 'WE16B' codep=0xe16b wordp=0xe16b
// ================================================
// 0xe16b: push   si
// 0xe16c: push   di
// 0xe16d: push   es
// 0xe16e: mov    cx,[5DD3] // 3DSEG
// 0xe172: mov    es,cx
// 0xe174: mov    si,[569B] // VIN
// 0xe178: mov    di,[5DDE] // VIN'
// 0xe17c: mov    cx,[5686] // #IN
// 0xe180: mov    dl,[DBD4] // WDBD4
// 0xe184: mov    dh,[DBD8] // WDBD8
// 0xe188: mov    bl,[DBDC] // WDBDC
// 0xe18c: es:    
// 0xe18d: mov    al,[si]
// 0xe18f: sub    al,dl
// 0xe191: es:    
// 0xe192: mov    [di],al
// 0xe194: inc    si
// 0xe195: inc    di
// 0xe196: es:    
// 0xe197: mov    al,[si]
// 0xe199: sub    al,dh
// 0xe19b: es:    
// 0xe19c: mov    [di],al
// 0xe19e: inc    si
// 0xe19f: inc    di
// 0xe1a0: es:    
// 0xe1a1: mov    al,[si]
// 0xe1a3: sub    al,bl
// 0xe1a5: es:    
// 0xe1a6: mov    [di],al
// 0xe1a8: inc    si
// 0xe1a9: inc    di
// 0xe1aa: loop   E18C
// 0xe1ac: pop    es
// 0xe1ad: pop    di
// 0xe1ae: pop    si
// 0xe1af: lodsw
// 0xe1b0: mov    bx,ax
// 0xe1b2: jmp    word ptr [bx]

// ================================================
// 0xe1b4: WORD 'WE1B6' codep=0xe1b6 wordp=0xe1b6
// ================================================
// 0xe1b6: push   di
// 0xe1b7: push   bp
// 0xe1b8: push   si
// 0xe1b9: mov    si,DCC2
// 0xe1bc: mov    cx,0003
// 0xe1bf: mov    dh,[si]
// 0xe1c1: add    si,02
// 0xe1c4: mov    dl,[si]
// 0xe1c6: add    si,02
// 0xe1c9: mov    bh,[si]
// 0xe1cb: add    si,02
// 0xe1ce: mov    ax,[si]
// 0xe1d0: mov    [DC0C],ax // WDC0C
// 0xe1d4: add    si,02
// 0xe1d7: push   si
// 0xe1d8: push   cx
// 0xe1d9: sub    cx,03
// 0xe1dc: neg    cx
// 0xe1de: shl    cx,1
// 0xe1e0: add    cx,[56A6] // VOUT
// 0xe1e4: mov    di,cx
// 0xe1e6: mov    si,[5DDE] // VIN'
// 0xe1ea: push   es
// 0xe1eb: mov    cx,[5DD3] // 3DSEG
// 0xe1ef: mov    es,cx
// 0xe1f1: mov    cx,[5686] // #IN
// 0xe1f5: mov    bp,[DC0C] // WDC0C
// 0xe1f9: es:    
// 0xe1fa: mov    al,[si]
// 0xe1fc: inc    si
// 0xe1fd: imul   dh
// 0xe1ff: add    bp,ax
// 0xe201: es:    
// 0xe202: mov    al,[si]
// 0xe204: inc    si
// 0xe205: imul   dl
// 0xe207: add    bp,ax
// 0xe209: es:    
// 0xe20a: mov    al,[si]
// 0xe20c: inc    si
// 0xe20d: imul   bh
// 0xe20f: add    bp,ax
// 0xe211: es:    
// 0xe212: mov    [di],bp
// 0xe214: add    di,06
// 0xe217: loop   E1F5
// 0xe219: pop    es
// 0xe21a: pop    cx
// 0xe21b: pop    si
// 0xe21c: loop   E1BF
// 0xe21e: pop    si
// 0xe21f: pop    bp
// 0xe220: pop    di
// 0xe221: lodsw
// 0xe222: mov    bx,ax
// 0xe224: jmp    word ptr [bx]

// ================================================
// 0xe226: WORD 'WE228' codep=0xe228 wordp=0xe228
// ================================================
// 0xe228: push   di
// 0xe229: push   bp
// 0xe22a: push   si
// 0xe22b: push   es
// 0xe22c: mov    di,[56A6] // VOUT
// 0xe230: add    di,04
// 0xe233: mov    si,[5DEC] // YSCREEN
// 0xe237: mov    cx,[5DD3] // 3DSEG
// 0xe23b: mov    es,cx
// 0xe23d: mov    bp,[DC14] // WDC14
// 0xe241: mov    cx,[5686] // #IN
// 0xe245: es:    
// 0xe246: mov    bx,[di]
// 0xe248: sub    di,02
// 0xe24b: es:    
// 0xe24c: mov    ax,[di]
// 0xe24e: imul   bp
// 0xe250: idiv   bx
// 0xe252: add    ax,si
// 0xe254: es:    
// 0xe255: mov    [di],ax
// 0xe257: sub    di,02
// 0xe25a: es:    
// 0xe25b: mov    ax,[di]
// 0xe25d: imul   word ptr [DC10] // WDC10
// 0xe261: idiv   bx
// 0xe263: add    ax,[5DFA] // XSCREEN
// 0xe267: es:    
// 0xe268: mov    [di],ax
// 0xe26a: add    di,0A
// 0xe26d: loop   E245
// 0xe26f: pop    es
// 0xe270: pop    si
// 0xe271: pop    bp
// 0xe272: pop    di
// 0xe273: lodsw
// 0xe274: mov    bx,ax
// 0xe276: jmp    word ptr [bx]

// ================================================
// 0xe278: WORD 'WE27A' codep=0x224c wordp=0xe27a params=1 returns=1
// ================================================

void WE27A() // WE27A
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
  Push(Read16(Pop() + pp_WDB92)&0xFF); //  WDB92 + C@
  SWAP(); // SWAP
  Push(Pop()==-1?1:0); //  -1 =
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe2e4: WORD 'WE2E6' codep=0x224c wordp=0xe2e6 params=1 returns=1
// ================================================

void WE2E6() // WE2E6
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
  Push(Read16(Pop() + pp_WDB92)&0xFF); //  WDB92 + C@
  SWAP(); // SWAP
  Push(Pop()==-1?1:0); //  -1 =
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe356: WORD 'WE358' codep=0x224c wordp=0xe358 params=1 returns=1
// ================================================

void WE358() // WE358
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
  Push(Read16(Pop() + pp_WDB92)&0xFF); //  WDB92 + C@
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe386: WORD 'WE388' codep=0x224c wordp=0xe388 params=1 returns=1
// ================================================

void WE388() // WE388
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
  Push(Read16(Pop() + pp_WDB92)&0xFF); //  WDB92 + C@
}


// ================================================
// 0xe3a6: WORD 'WE3A8' codep=0x224c wordp=0xe3a8 params=1 returns=0
// ================================================

void WE3A8() // WE3A8
{
  Push(Read16(regsp)); // DUP
  Push(pp_WDC10); // WDC10
  Store_3(); // !_3
  Push(0x00b0);
  Push(0x0064);
  _star__slash_(); // */
  Push(pp_WDC14); // WDC14
  Store_3(); // !_3
}


// ================================================
// 0xe3be: WORD 'WE3C0' codep=0x224c wordp=0xe3c0
// ================================================

void WE3C0() // WE3C0
{
  Push(Read16(pp_WDC18)); // WDC18 @
  Push(Read16(regsp)); // DUP
  WE358(); // WE358
  Push(pp_WDBFC); // WDBFC
  Store_3(); // !_3
  WE388(); // WE388
  Push(pp_WDC00); // WDC00
  Store_3(); // !_3
  Push(Read16(pp_WDC1C)); // WDC1C @
  Push(Read16(regsp)); // DUP
  WE27A(); // WE27A
  Push(pp_WDBF0); // WDBF0
  Store_3(); // !_3
  WE2E6(); // WE2E6
  Push(pp_WDBF4); // WDBF4
  Store_3(); // !_3
  Push(Read16(cc_WDB8A) * Read16(cc_WDB86)); // WDB8A WDB86 *
  Push(pp_WDBF8); // WDBF8
  Store_3(); // !_3
  Push(pp_WDCC2); // WDCC2
  Push(0x0018);
  Push(0);
  FILL_1(); // FILL_1
  WDFF1(); // WDFF1
  WE01B(); // WE01B
  WE033(); // WE033
  WE063(); // WE063
  WE091(); // WE091
  WE0AB(); // WE0AB
  WE0DD(); // WE0DD
  WE0F9(); // WE0F9
  WE10D(); // WE10D
  WE129(); // WE129
}


// ================================================
// 0xe40e: WORD 'WE410' codep=0x224c wordp=0xe410
// ================================================

void WE410() // WE410
{
  Push(0x0086);
  Push(pp__n_IN); // #IN
  Store_3(); // !_3
  Push(0x6ba6); // 'XFORMVERT'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(pp__3DSEG); // 3DSEG
  Store_3(); // !_3
  Push(0);
  Push(pp_VOUT); // VOUT
  Store_3(); // !_3
  Push(0x6ae8); // 'VERTEX'
  Push(Read16(Pop() + 6) - Read16(pp__3DSEG) >> 4); //  6 + @ 3DSEG @ - 16*
  Push(pp_VIN_i_); // VIN'
  Store_3(); // !_3
  Push(0x003c);
  Push(pp_YSCREEN); // YSCREEN
  Store_3(); // !_3
  Push(0x0024);
  Push(pp_XSCREEN); // XSCREEN
  Store_3(); // !_3
  WE1B6(); // WE1B6
  Push(0x003e);
  Push(pp__n_IN); // #IN
  Store_3(); // !_3
  WE228(); // WE228
}


// ================================================
// 0xe460: WORD 'WE462' codep=0x224c wordp=0xe462 params=1 returns=1
// ================================================

void WE462() // WE462
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
  ReadArray(XFORMVERT); // XFORMVERT
  L_at_(); // L@
  Push(a + 0x003e); // R> 0x003e +
  Push(4);
  SWAP(); // SWAP
  ReadArray(XFORMVERT); // XFORMVERT
  L_at_(); // L@
  _gt_(); // >
}


// ================================================
// 0xe48a: WORD 'WE48C' codep=0xe48c wordp=0xe48c
// ================================================
// 0xe48c: mov    cx,0004
// 0xe48f: mov    bx,DC38
// 0xe492: add    bx,0E
// 0xe495: pop    ax
// 0xe496: pop    dx
// 0xe497: mov    [bx],dx
// 0xe499: sub    bx,02
// 0xe49c: mov    [bx],ax
// 0xe49e: sub    bx,02
// 0xe4a1: loop   E495
// 0xe4a3: lodsw
// 0xe4a4: mov    bx,ax
// 0xe4a6: jmp    word ptr [bx]

// ================================================
// 0xe4a8: WORD 'WE4AA' codep=0xe4aa wordp=0xe4aa
// ================================================
// 0xe4aa: add    sp,10
// 0xe4ad: lodsw
// 0xe4ae: mov    bx,ax
// 0xe4b0: jmp    word ptr [bx]

// ================================================
// 0xe4b2: WORD 'WE4B4' codep=0x224c wordp=0xe4b4
// ================================================

void WE4B4() // WE4B4
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
  WDD2C(); // WDD2C
  Push(a); // I'
  Push(b + 3); // I 3 +
  LC_at_(); // LC@
  Push(a); // I'
  Push(b + 2); // I 2+
  LC_at_(); // LC@
  WDD2C(); // WDD2C
  Push(a); // I'
  Push(b + 3); // I 3 +
  LC_at_(); // LC@
  Push(a); // I'
  Push(b + 4); // I 4 +
  LC_at_(); // LC@
  WDD2C(); // WDD2C
  Push(a); // I'
  Push(b + 1); // I 1+
  LC_at_(); // LC@
  Push(b); // R>
  Push(a); // R>
  SWAP(); // SWAP
  Push(Pop() + 4); //  4 +
  LC_at_(); // LC@
  WDD2C(); // WDD2C
  WE48C(); // WE48C
  Push(pp_WDC38); // WDC38
  Push(pp_VIN); // VIN
  Store_3(); // !_3
  Push(pp_WDC64); // WDC64
  Push(pp_VOUT); // VOUT
  Store_3(); // !_3
  Push(pp_WDC5A); // WDC5A
  Push(pp_OIN); // OIN
  Store_3(); // !_3
  Push(pp_WDC86); // WDC86
  Push(pp_OOUT); // OOUT
  Store_3(); // !_3
  Push(0);
  Push(pp_IsOPEN); // ?OPEN
  Store_3(); // !_3
  Push(4);
  Push(pp__n_IN); // #IN
  Store_3(); // !_3
  CLIPPER(); // CLIPPER
  Push(Read16(pp__n_IN)); // #IN @
  Push(2);
  _gt_(); // >
  if (Pop() == 0) return;
  SCANPOLY(); // SCANPOLY
  LFILLPOLY(); // LFILLPOLY
}


// ================================================
// 0xe54e: WORD 'WE550' codep=0x224c wordp=0xe550 params=1 returns=2
// ================================================

void WE550() // WE550
{
  Push(0);
  OVER(); // OVER
  ReadArray(XFORMVERT); // XFORMVERT
  L_at_(); // L@
  Push(2);
  ROT(); // ROT
  ReadArray(XFORMVERT); // XFORMVERT
  L_at_(); // L@
}


// ================================================
// 0xe562: WORD 'WE564' codep=0x224c wordp=0xe564
// ================================================

void WE564() // WE564
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
  WE550(); // WE550
  Push(b); // I
  Push(a + 1); // I' 1+
  LC_at_(); // LC@
  WE550(); // WE550
  Push(b); // I
  Push(a + 2); // I' 2+
  LC_at_(); // LC@
  WE550(); // WE550
  Push(b); // R>
  Push(a + 3); // R> 3 +
  LC_at_(); // LC@
  WE550(); // WE550
  SETQUAD(); // SETQUAD
}


// ================================================
// 0xe59a: WORD 'WE59C' codep=0x224c wordp=0xe59c params=0 returns=1
// ================================================

void WE59C() // WE59C
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_IsNEB)); // ?NEB @
  if (Pop() != 0)
  {
    GetColor(DK_dash_GREEN);
  } else
  {
    GetColor(BLACK);
  }
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WDC10)); // WDC10 @
  Push(6);
  Push(0x000b);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  Push(Pop() + 4); //  4 +
  Push(Read16(pp_WDC10)); // WDC10 @
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
    DrawCIRCLE(); // .CIRCLE
    i++;
  } while(i<imax); // (LOOP)


  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    Push(0x0024);
    Push(0x003d);
    Push(j); // I
    DrawCIRCLE(); // .CIRCLE
    j++;
  } while(j<jmax); // (LOOP)

}


// ================================================
// 0xe5f8: WORD 'WE5FA' codep=0x1d29 wordp=0xe5fa
// ================================================
// 0xe5fa: db 0x3a 0x20 ': '

// ================================================
// 0xe5fc: WORD 'WE5FE' codep=0x224c wordp=0xe5fe
// ================================================

void WE5FE() // WE5FE
{
  unsigned short int i, imax, j, jmax;
  WE3C0(); // WE3C0
  WE410(); // WE410
  Push(pp_WE5FA); // WE5FA
  OFF(); // OFF

  i = 0;
  imax = 0x0048;
  do // (DO)
  {
    Push(i); // I
    WE462(); // WE462
    if (Pop() != 0)
    {
      Push(i); // I
      WE564(); // WE564
      Push(0);
      Push(i); // I
      ReadArray(FACE); // FACE
      L_at_(); // L@
      Push(2);
      Push(i); // I
      ReadArray(FACE); // FACE
      LC_at_(); // LC@

      j = 0;
      jmax = Pop();
      do // (DO)
      {
        Push(Read16(regsp)); // DUP
        WE4B4(); // WE4B4
        Push(Pop() + 5); //  5 +
        j++;
      } while(j<jmax); // (LOOP)

      Pop(); // DROP
      WE4AA(); // WE4AA
    }
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    if (Pop() != 0)
    {
      Push(pp_WE5FA); // WE5FA
      ON_3(); // ON_3
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  WE59C(); // WE59C
}


// ================================================
// 0xe652: WORD 'WE654' codep=0x224c wordp=0xe654 params=1 returns=3
// ================================================

void WE654() // WE654
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
// 0xe66e: WORD 'WE670' codep=0x224c wordp=0xe670 params=1 returns=0
// ================================================

void WE670() // WE670
{
  unsigned short int i, imax;

  i = 0;
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
// 0xe68c: WORD 'WE68E' codep=0x224c wordp=0xe68e params=0 returns=0
// ================================================

void WE68E() // WE68E
{
  GetColor(DK_dash_GREEN);
  StoreCOLOR(); // !COLOR
  Push(!Read16(pp_IsNEB)); // ?NEB @ NOT
  if (Pop() != 0)
  {
    DARK(); // DARK
    Push(Read16(pp_GLOBALSEED)); // GLOBALSEED @
    Push(pp_SEED); // SEED
    Store_3(); // !_3
    Push(1);
    Push(4);
    RRND(); // RRND
    WE670(); // WE670
    GetColor(WHITE);
    StoreCOLOR(); // !COLOR
    Push(2);
    Push(5);
    RRND(); // RRND
    WE670(); // WE670
    GetColor(RED);
    StoreCOLOR(); // !COLOR
    Push(2);
    Push(5);
    RRND(); // RRND
    WE670(); // WE670
    GetColor(GREY1);
    StoreCOLOR(); // !COLOR
    Push(4);
    Push(9);
    RRND(); // RRND
    WE670(); // WE670
    return;
  }
  BFILL(); // BFILL
}


// ================================================
// 0xe6da: WORD 'WE6DC' codep=0x224c wordp=0xe6dc
// ================================================

void WE6DC() // WE6DC
{
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  WE68E(); // WE68E
  WE5FE(); // WE5FE
  Push(Read16(pp_WE5FA)==0?1:0); // WE5FA @ 0=
  if (Pop() != 0)
  {
    V_gt_DISPLAY(); // V>DISPLAY
  }
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xe6f6: WORD 'SHOWSITE' codep=0x224c wordp=0xe703
// ================================================
// entry

void SHOWSITE() // SHOWSITE
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  WE654(); // WE654
  Push(pp_WDC18); // WDC18
  Store_3(); // !_3
  Push(pp_WDC1C); // WDC1C
  Store_3(); // !_3
  WE6DC(); // WE6DC
}


// ================================================
// 0xe719: WORD '>VIEWSITE' codep=0x224c wordp=0xe727
// ================================================

void _gt_VIEWSITE() // >VIEWSITE
{
  Push(0x012c - Read16(pp_WDC10)); // 0x012c WDC10 @ -
  Push(5);
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(pp_WDC34); // WDC34
  Store_3(); // !_3
  while(1)
  {
    SHOWSITE(); // SHOWSITE
    Push(Read16(pp_WDC10)); // WDC10 @
    Push(Read16(regsp)); // DUP
    Push(!(Pop()==0x012c?1:0)); //  0x012c = NOT
    if (Pop() == 0) break;

    Push(Pop() + Read16(pp_WDC34)); //  WDC34 @ +
    Push(0x012c);
    MIN(); // MIN
    WE3A8(); // WE3A8
  }
  Pop(); // DROP
}


// ================================================
// 0xe767: WORD 'WE769' codep=0x224c wordp=0xe769
// ================================================

void WE769() // WE769
{
  Push(Read16(pp_XLL)); // XLL @
  Push(Read16(pp_YLL)); // YLL @
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(Read16(pp_XUR)); // XUR @
  Push(Read16(pp_YLL)); // YLL @
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(Read16(pp_XUR)); // XUR @
  Push(Read16(pp_YUR)); // YUR @
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(Read16(pp_XLL)); // XLL @
  Push(Read16(pp_YLL)); // YLL @
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push((Pop() >> 1) >> 1); //  2/ 2/
}


// ================================================
// 0xe7a5: WORD 'WE7A7' codep=0x224c wordp=0xe7a7
// ================================================

void WE7A7() // WE7A7
{
  unsigned short int i, imax, j, jmax;
  Push(pp_SIGNEXTEND); // SIGNEXTEND
  ON_3(); // ON_3
  Push(pp_SPHEREWRAP); // SPHEREWRAP
  OFF(); // OFF
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY

  i = 0;
  imax = 9;
  do // (DO)
  {

    j = 0;
    jmax = 9;
    do // (DO)
    {
      Push((j * 8 + 1) + (Read16(pp_XVIS) - Read16(pp_XCON))); // I 8 * 1+ XVIS @ XCON @ - +
      Push((i * 6 + 1) + (Read16(pp_YVIS) - Read16(pp_YCON))); // J 6 * 1+ YVIS @ YCON @ - +
      OVER(); // OVER
      Push(Pop() + 8); //  8 +
      OVER(); // OVER
      Push(Pop() + 6); //  6 +
      SETREGION(); // SETREGION
      WE769(); // WE769
      Push(j); // I
      Push(i); // J
      ReadArray(_9X9COARSE); // 9X9COARSE
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe80b: WORD 'WE80D' codep=0x224c wordp=0xe80d params=0 returns=0
// ================================================

void WE80D() // WE80D
{
  unsigned short int i, imax, j, jmax;
  Push((Read16(pp_XABS) - 3) - Read16(pp_XCON)); // XABS @ 3 - XCON @ -
  Push(pp_X1); // X1
  Store_3(); // !_3
  Push((Read16(pp_YABS) + 3) - Read16(pp_YCON)); // YABS @ 3 + YCON @ -
  Push(pp_Y1); // Y1
  Store_3(); // !_3

  i = 0;
  imax = 9;
  do // (DO)
  {

    j = 0;
    jmax = 9;
    do // (DO)
    {
      Push(j + Read16(pp_X1)); // I X1 @ +
      Push(Read16(pp_Y1) - i); // Y1 @ J -
      ReadArray(CONTOUR); // CONTOUR
      LC_at_(); // LC@
      Push(j); // I
      Push(i); // J
      ReadArray(_9X9FINE_gt_GVERTEX); // 9X9FINE>GVERTEX
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe863: WORD 'WE865' codep=0x224c wordp=0xe865 params=1 returns=0
// ================================================

void WE865() // WE865
{
  unsigned short int i, imax, j, jmax;

  i = 0;
  imax = 4;
  do // (DO)
  {
    Push(i); // I
    OVER(); // OVER
    ReadArray(GPOLY); // GPOLY
    LC_at_(); // LC@

    j = 0;
    jmax = 3;
    do // (DO)
    {
      Push(j); // I
      OVER(); // OVER
      ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
      LC_at_(); // LC@
      Push((i * 3 + j) + pp_WDC64); // J 3 * I + WDC64 +
      C_ex_(); // C!
      j++;
    } while(j<jmax); // (LOOP)

    Pop(); // DROP
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe89f: WORD 'WE8A1' codep=0x224c wordp=0xe8a1 params=1 returns=0
// ================================================

void WE8A1() // WE8A1
{
  unsigned short int i, imax, j, jmax;

  i = 0;
  imax = 4;
  do // (DO)
  {
    Push(i); // I
    OVER(); // OVER
    ReadArray(GPOLY); // GPOLY
    LC_at_(); // LC@

    j = 0;
    jmax = 2;
    do // (DO)
    {
      Push(j * 2); // I 2*
      OVER(); // OVER
      ReadArray(XFORMVERT); // XFORMVERT
      L_at_(); // L@
      Push((i * 4 + pp_WDC38) + -(j - 1) * 2); // J 4 * WDC38 + I 1- NEGATE 2* +
      Store_3(); // !_3
      j++;
    } while(j<jmax); // (LOOP)

    Pop(); // DROP
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe8e3: WORD 'WE8E5' codep=0x224c wordp=0xe8e5
// ================================================

void WE8E5() // WE8E5
{
  Push(0x0075);
  Push(pp__n_IN); // #IN
  Store_3(); // !_3
  Push(0x6ba6); // 'XFORMVERT'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(pp__3DSEG); // 3DSEG
  Store_3(); // !_3
  Push(0);
  Push(pp_VOUT); // VOUT
  Store_3(); // !_3
  Push(0x6b6a); // 'G1VERT'
  Push(Read16(Pop() + 6) - Read16(pp__3DSEG) >> 4); //  6 + @ 3DSEG @ - 16*
  Push(pp_VIN_i_); // VIN'
  Store_3(); // !_3
  Push(0x6b31); // 'GVERTEX>GRIDCOLOR'
  Push(Read16(Pop() + 6) - Read16(pp__3DSEG) >> 4); //  6 + @ 3DSEG @ - 16*
  Push(pp_VIN); // VIN
  Store_3(); // !_3
  Push(0x003c);
  Push(pp_YSCREEN); // YSCREEN
  Store_3(); // !_3
  Push(0x0024);
  Push(pp_XSCREEN); // XSCREEN
  Store_3(); // !_3
  WE16B(); // WE16B
  WE1B6(); // WE1B6
  WE228(); // WE228
}


// ================================================
// 0xe945: WORD 'WE947' codep=0x224c wordp=0xe947 params=1 returns=1
// ================================================

void WE947() // WE947
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(0);

  i = 0;
  imax = 4;
  do // (DO)
  {
    Push(i); // I
    Push(a); // J
    ReadArray(GPOLY); // GPOLY
    LC_at_(); // LC@
    Push(4);
    SWAP(); // SWAP
    ReadArray(XFORMVERT); // XFORMVERT
    L_at_(); // L@
    Push(Pop() - Read16(cc_WDB86)); //  WDB86 -
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
// 0xe977: WORD 'WE979' codep=0x224c wordp=0xe979
// ================================================

void WE979() // WE979
{
  Push(4);
  Push(pp__n_IN); // #IN
  Store_3(); // !_3
  Push(pp_WDC64); // WDC64
  Push(pp_VIN); // VIN
  Store_3(); // !_3
  Push(pp_WDC38); // WDC38
  Push(pp_VIN_i_); // VIN'
  Store_3(); // !_3
  Push(pp_WDC90); // WDC90
  Push(pp_VOUT); // VOUT
  Store_3(); // !_3
  GetDS(); // @DS
  Push(pp__3DSEG); // 3DSEG
  Store_3(); // !_3
  WE16B(); // WE16B
  WE1B6(); // WE1B6
}


// ================================================
// 0xe99d: WORD 'WE99F' codep=0x224c wordp=0xe99f params=0 returns=0
// ================================================

void WE99F() // WE99F
{
  Push(0x3e80);
  Push(0x3e80);
  Push(Read16(cc_WDB86)); // WDB86
  Push(0xc180);
  SETCLIPWINDOW(); // SETCLIPWINDOW
}


// ================================================
// 0xe9b1: WORD 'WE9B3' codep=0x224c wordp=0xe9b3 params=0 returns=0
// ================================================

void WE9B3() // WE9B3
{
  unsigned short int i, imax, a;

  i = 0;
  imax = 4;
  do // (DO)
  {
    Push(i * 6 + pp_WDC90); // I 6 * WDC90 +
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())); //  @
    SWAP(); // SWAP
    Push(Read16(Pop() + 4)); //  4 + @
    Push((i * 2) * 2 + pp_WDC38); // I 2* 2* WDC38 +
    a = Pop(); // >R
    Push(a); // I
    Store_3(); // !_3
    Push(a + 2); // R> 2+
    Store_3(); // !_3
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe9eb: WORD 'WE9ED' codep=0x224c wordp=0xe9ed params=0 returns=0
// ================================================

void WE9ED() // WE9ED
{
  unsigned short int i, imax, a;

  i = 0;
  imax = 4;
  do // (DO)
  {
    Push(i * 6 + pp_WDC90); // I 6 * WDC90 +
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() + 2)); //  2 + @
    SWAP(); // SWAP
    Push(Read16(Pop() + 4)); //  4 + @
    Push((i * 2) * 2 + pp_WDC38); // I 2* 2* WDC38 +
    a = Pop(); // >R
    Push(a); // I
    Store_3(); // !_3
    Push(a + 2); // R> 2+
    Store_3(); // !_3
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xea29: WORD 'WEA2B' codep=0x224c wordp=0xea2b params=0 returns=0
// ================================================

void WEA2B() // WEA2B
{
  unsigned short int i, imax;

  i = 0;
  imax = Read16(pp__n_IN); // #IN @
  do // (DO)
  {
    Push(Read16((Read16(pp_VIN) + (i * 2) * 2) + 2)); // VIN @ I 2* 2* + 2 + @
    Push(pp_WDC90 + i * 6); // WDC90 I 6 * +
    Store_3(); // !_3
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xea57: WORD 'WEA59' codep=0x224c wordp=0xea59 params=0 returns=0
// ================================================

void WEA59() // WEA59
{
  unsigned short int i, imax;

  i = 0;
  imax = Read16(pp__n_IN); // #IN @
  do // (DO)
  {
    Push(Read16((Read16(pp_VIN) + (i * 2) * 2) + 2)); // VIN @ I 2* 2* + 2 + @
    Push((pp_WDC90 + i * 6) + 2); // WDC90 I 6 * + 2+
    Store_3(); // !_3
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xea87: WORD 'WEA89' codep=0x224c wordp=0xea89 params=0 returns=0
// ================================================

void WEA89() // WEA89
{
  unsigned short int i, imax;

  i = 0;
  imax = Read16(pp__n_IN); // #IN @
  do // (DO)
  {
    Push(Read16(Read16(pp_VIN) + (i * 2) * 2)); // VIN @ I 2* 2* + @
    Push((pp_WDC90 + i * 6) + 4); // WDC90 I 6 * + 4 +
    Store_3(); // !_3
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeab5: WORD 'WEAB7' codep=0x224c wordp=0xeab7 params=0 returns=0
// ================================================

void WEAB7() // WEAB7
{
  unsigned short int i, imax, a;

  i = 0;
  imax = Read16(pp__n_IN); // #IN @
  do // (DO)
  {
    Push(i * 6 + pp_WDC90); // I 6 * WDC90 +
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())); //  @
    SWAP(); // SWAP
    Push(Read16(Pop() + 2)); //  2+ @
    Push((i * 2) * 2 + pp_WDC38); // I 2* 2* WDC38 +
    a = Pop(); // >R
    Push(a); // I
    Store_3(); // !_3
    Push(a + 2); // R> 2+
    Store_3(); // !_3
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeaef: WORD 'WEAF1' codep=0x224c wordp=0xeaf1
// ================================================

void WEAF1() // WEAF1
{
  WE865(); // WE865
  WE979(); // WE979
  WE99F(); // WE99F
  WE9B3(); // WE9B3
  Push(4);
  Push(pp__n_IN); // #IN
  Store_3(); // !_3
  Push(pp_WDC38); // WDC38
  Push(pp_VIN); // VIN
  Store_3(); // !_3
  Push(pp_WDC64); // WDC64
  Push(pp_VOUT); // VOUT
  Store_3(); // !_3
  Push(pp_WDC5A); // WDC5A
  Push(pp_OIN); // OIN
  Store_3(); // !_3
  Push(pp_WDC86); // WDC86
  Push(pp_OOUT); // OOUT
  Store_3(); // !_3
  CLIPPER(); // CLIPPER
  WEA2B(); // WEA2B
  WE9ED(); // WE9ED
  Push(4);
  Push(pp__n_IN); // #IN
  Store_3(); // !_3
  Push(pp_WDC38); // WDC38
  Push(pp_VIN); // VIN
  Store_3(); // !_3
  Push(pp_WDC64); // WDC64
  Push(pp_VOUT); // VOUT
  Store_3(); // !_3
  CLIPPER(); // CLIPPER
  WEA59(); // WEA59
  WEA89(); // WEA89
  VCLIPSET(); // VCLIPSET
  Push(pp_WDC90); // WDC90
  Push(pp_VOUT); // VOUT
  Store_3(); // !_3
  WE228(); // WE228
  WEAB7(); // WEAB7
}


// ================================================
// 0xeb43: WORD 'WEB45' codep=0x224c wordp=0xeb45 params=1 returns=0
// ================================================

void WEB45() // WEB45
{
  Push(0);
  SWAP(); // SWAP
  ReadArray(GRIDCOLOR); // GRIDCOLOR
  OVER(); // OVER
  OVER(); // OVER
  LC_at_(); // LC@
  Push(pp_COLOR); // COLOR
  Store_3(); // !_3
  Push(Pop() + 1); //  1+
  LC_at_(); // LC@
  Push(pp_DCOLOR); // DCOLOR
  Store_3(); // !_3
}


// ================================================
// 0xeb5f: WORD 'WEB61' codep=0x224c wordp=0xeb61 params=0 returns=0
// ================================================

void WEB61() // WEB61
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

  i = 0;
  imax = Read16(pp__n_IN) - 1; // #IN @ 1-
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
// 0xebcf: WORD 'WEBD1' codep=0x224c wordp=0xebd1
// ================================================

void WEBD1() // WEBD1
{
  unsigned short int i, imax;
  WE13B(); // WE13B
  WE8E5(); // WE8E5

  i = 0;
  imax = 0x0059;
  do // (DO)
  {
    Push(i); // I
    WE947(); // WE947
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Pop()==4?1:0); //  4 =
      if (Pop() != 0)
      {
        Push(i); // I
        WE8A1(); // WE8A1
        Push(4);
        Push(pp__n_IN); // #IN
        Store_3(); // !_3
      } else
      {
        Push(i); // I
        WEAF1(); // WEAF1
      }
      Push(Read16(pp__n_IN)); // #IN @
      Push(2);
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(pp_WDC38); // WDC38
        Push(pp_VIN); // VIN
        Store_3(); // !_3
        Push(pp_WDC64); // WDC64
        Push(pp_VOUT); // VOUT
        Store_3(); // !_3
        Push(pp_WDC5A); // WDC5A
        Push(pp_OIN); // OIN
        Store_3(); // !_3
        Push(pp_WDC86); // WDC86
        Push(pp_OOUT); // OOUT
        Store_3(); // !_3
        Push(pp_IsOPEN); // ?OPEN
        OFF(); // OFF
        CLIPPER(); // CLIPPER
      }
      Push(Read16(pp__n_IN)); // #IN @
      Push(2);
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(i); // I
        WEB45(); // WEB45
        SCANPOLY(); // SCANPOLY
        LFILLPOLY(); // LFILLPOLY
        Push(i); // I
        Push(0x0018);
        _gt_(); // >
        Push(Pop() & Read16(pp_WDBC0)); //  WDBC0 @ AND
        if (Pop() != 0)
        {
          WEB61(); // WEB61
        }
      }
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xec59: WORD 'SEEGRID' codep=0x224c wordp=0xec65
// ================================================
// entry

void SEEGRID() // SEEGRID
{
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  Push(Read16(pp_WDBA0)); // WDBA0 @
  StoreCOLOR(); // !COLOR
  BFILL(); // BFILL
  WEBD1(); // WEBD1
  V_gt_DISPLAY(); // V>DISPLAY
  DCLIPSET(); // DCLIPSET
  _gt_DISPLAY(); // >DISPLAY
}


// ================================================
// 0xec7b: WORD 'WEC7D' codep=0x224c wordp=0xec7d params=0 returns=0
// ================================================

void WEC7D() // WEC7D
{
  unsigned short int i, imax;

  i = 0;
  imax = 0x0075;
  do // (DO)
  {
    Push(0);
    Push(1);
    Push(i); // I
    ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
    LC_ex_(); // LC!
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xec95: WORD 'WEC97' codep=0x224c wordp=0xec97 params=0 returns=0
// ================================================

void WEC97() // WEC97
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  StoreXYSEED(); // !XYSEED

  i = 0;
  imax = 7;
  do // (DO)
  {

    j = 0;
    jmax = 7;
    do // (DO)
    {
      Push(0);
      Push(2);
      RRND(); // RRND
      Push(1);
      Push((i * 9 + 0x002e) + j); // J 9 * 0x002e + I +
      ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xecd3: WORD 'WECD5' codep=0x224c wordp=0xecd5
// ================================================

void WECD5() // WECD5
{
  unsigned short int i, imax, j, jmax;
  Push(0);
  COLORMAP(); // COLORMAP

  i = 0x0019;
  imax = 0x0059;
  do // (DO)
  {
    Push(0);
    Push(i); // I
    ReadArray(GRIDCOLOR); // GRIDCOLOR
    LC_at_(); // LC@
    Push(Pop()==Read16(pp_COLOR)?1:0); //  COLOR @ =
    if (Pop() != 0)
    {

      j = 0;
      jmax = 4;
      do // (DO)
      {
        Push(0);
        Push(1);
        Push(j); // I
        Push(i); // J
        ReadArray(GPOLY); // GPOLY
        LC_at_(); // LC@
        ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
        LC_ex_(); // LC!
        j++;
      } while(j<jmax); // (LOOP)

    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xed15: WORD 'WED17' codep=0x224c wordp=0xed17
// ================================================

void WED17() // WED17
{
  unsigned short int i, imax, j, jmax, k, kmax, l, lmax;

  i = 0;
  imax = 5;
  do // (DO)
  {

    j = 0;
    jmax = 5;
    do // (DO)
    {
      Push(1);
      Push(i * 6 + j); // J 6 * I +
      ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
      L_plus__dash__at_(); // L+-@
      COLORMAP(); // COLORMAP
      Push(Read16(pp_COLOR)); // COLOR @
      Push(Read16(regsp)); // DUP
      Push(Pop() * 0x0100); //  0x0100 *
      Push(Pop() + Pop()); // +
      Push(0);
      Push(i * 5 + j); // J 5 * I +
      ReadArray(GRIDCOLOR); // GRIDCOLOR
      L_ex_(); // L!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)


  k = 0;
  kmax = 8;
  do // (DO)
  {

    l = 0;
    lmax = 8;
    do // (DO)
    {
      Push(1);
      Push((k * 9 + l) + 0x0024); // J 9 * I + 0x0024 +
      ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
      L_plus__dash__at_(); // L+-@
      COLORMAP(); // COLORMAP
      Push(Read16(pp_COLOR)); // COLOR @
      Push(Read16(regsp)); // DUP
      Push(Pop() * 0x0100); //  0x0100 *
      Push(Pop() + Pop()); // +
      Push(0);
      Push((k * 8 + l) + 0x0019); // J 8 * I + 0x0019 +
      ReadArray(GRIDCOLOR); // GRIDCOLOR
      L_ex_(); // L!
      l++;
    } while(l<lmax); // (LOOP)

    k++;
  } while(k<kmax); // (LOOP)

  WEC7D(); // WEC7D
}


// ================================================
// 0xedaf: WORD 'WEDB1' codep=0x224c wordp=0xedb1 params=1 returns=0
// ================================================

void WEDB1() // WEDB1
{
  unsigned short int i, imax;

  i = 0x0024;
  imax = 0x0075;
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(1);
    Push(i); // I
    ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
    LC_ex_(); // LC!
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xedcd: WORD 'WEDCF' codep=0x224c wordp=0xedcf params=0 returns=1
// ================================================

void WEDCF() // WEDCF
{
  unsigned short int i, imax, j, jmax;
  Push(0);

  i = 0;
  imax = 9;
  do // (DO)
  {

    j = 0;
    jmax = 9;
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ReadArray(_9X9COARSE); // 9X9COARSE
      L_plus__dash__at_(); // L+-@
      Push(Pop() + Pop()); // +
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  Push(0x0051);
  _slash_(); // /
  WEDB1(); // WEDB1
}


// ================================================
// 0xedf9: WORD 'WEDFB' codep=0x224c wordp=0xedfb
// ================================================

void WEDFB() // WEDFB
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  WE654(); // WE654
  Push(0x0017);
  SWAP(); // SWAP
  _dash_(); // -
  Push(Pop() + 2); //  2+
  Push(pp_Y1); // Y1
  Store_3(); // !_3
  Push(Pop() - 2); //  2 -
  Push(pp_X1); // X1
  Store_3(); // !_3
  Push(pp_SPHEREWRAP); // SPHEREWRAP
  ON_3(); // ON_3
  Push(pp_SIGNEXTEND); // SIGNEXTEND
  ON_3(); // ON_3
  Push(0x6a99); // 'MERCATOR'
  SETLARRAY(); // SETLARRAY

  i = 0;
  imax = 6;
  do // (DO)
  {

    j = 0;
    jmax = 6;
    do // (DO)
    {
      Push(j + Read16(pp_X1)); // I X1 @ +
      Push(Read16(pp_Y1) - i); // Y1 @ J -
      ACELLADDR(); // ACELLADDR
      A_at_(); // A@
      Push(1);
      Push(i * 6 + j); // J 6 * I +
      ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xee63: WORD 'WEE65' codep=0x224c wordp=0xee65 params=0 returns=0
// ================================================

void WEE65() // WEE65
{
  unsigned short int i, imax, j, jmax;

  i = 0;
  imax = 9;
  do // (DO)
  {

    j = 0;
    jmax = 9;
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ReadArray(_9X9COARSE); // 9X9COARSE
      LC_at_(); // LC@
      Push(1);
      Push((i * 9 + j) + 0x0024); // J 9 * I + 0x0024 +
      ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xee99: WORD 'WEE9B' codep=0x224c wordp=0xee9b params=0 returns=0
// ================================================

void WEE9B() // WEE9B
{
  unsigned short int i, imax, j, jmax;

  i = 0;
  imax = 9;
  do // (DO)
  {

    j = 0;
    jmax = 9;
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ReadArray(_9X9FINE_gt_GVERTEX); // 9X9FINE>GVERTEX
      LC_at_(); // LC@
      Push(1);
      Push((i * 9 + j) + 0x0024); // J 9 * I + 0x0024 +
      ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeecf: WORD 'WEED1' codep=0x224c wordp=0xeed1
// ================================================

void WEED1() // WEED1
{
  unsigned short int i, imax;
  WEDFB(); // WEDFB
  WEDCF(); // WEDCF
  WED17(); // WED17
  Push(pp_WDC04); // WDC04
  OFF(); // OFF
  Push(Read16(cc_WDB86)); // WDB86
  Push(pp_WDC08); // WDC08
  Store_3(); // !_3
  Push(pp_WDBC0); // WDBC0
  OFF(); // OFF
  Push(pp_WDBC8); // WDBC8
  OFF(); // OFF
  Push(0x0032);
  Push(pp_WDBCC); // WDBCC
  Store_3(); // !_3
  Push(pp_WDBD0); // WDBD0
  ON_3(); // ON_3
  Push(pp_WDBD4); // WDBD4
  OFF(); // OFF
  Push(pp_WDBD8); // WDBD8
  OFF(); // OFF
  Push(pp_WDBDC); // WDBDC
  OFF(); // OFF
  Push(0x001e);
  WE3A8(); // WE3A8
  SEEGRID(); // SEEGRID
  Push(0x0023);
  WE3A8(); // WE3A8
  SEEGRID(); // SEEGRID
  WEDFB(); // WEDFB
  WEE65(); // WEE65
  WED17(); // WED17

  i = 0x0028;
  imax = 0x008c;
  do // (DO)
  {
    Push(i); // I
    WE3A8(); // WE3A8
    SEEGRID(); // SEEGRID
    Push(0x001e);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xef31: WORD 'WEF33' codep=0x224c wordp=0xef33 params=0 returns=0
// ================================================

void WEF33() // WEF33
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  MOD(); // MOD
  _dash_(); // -
  Push(Pop() - 0x0018); //  0x0018 -
  Push(pp_XCON); // XCON
  Store_3(); // !_3
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(regsp)); // DUP
  Push(0x0014);
  MOD(); // MOD
  _dash_(); // -
  Push(Pop() - 0x0028); //  0x0028 -
  Push(pp_YCON); // YCON
  Store_3(); // !_3
  Push(pp_DXCON); // DXCON
  OFF(); // OFF
  Push(pp_DYCON); // DYCON
  OFF(); // OFF
}


// ================================================
// 0xef6d: WORD 'WEF6F' codep=0x224c wordp=0xef6f params=0 returns=0
// ================================================

void WEF6F() // WEF6F
{
  Push(Read16(pp_XABS) - 0x0012); // XABS @ 0x0012 -
  Push(pp_XVIS); // XVIS
  Store_3(); // !_3
  Push(Read16(pp_YABS) - 0x001e); // YABS @ 0x001e -
  Push(pp_YVIS); // YVIS
  Store_3(); // !_3
  Push(pp_DXVIS); // DXVIS
  OFF(); // OFF
  Push(pp_DYVIS); // DYVIS
  OFF(); // OFF
}


// ================================================
// 0xef95: WORD 'WEF97' codep=0x224c wordp=0xef97 params=1 returns=0
// ================================================

void WEF97() // WEF97
{
  unsigned short int i, imax, j, jmax;
  Push(Pop() - 0x0014); //  0x0014 -

  i = 0;
  imax = 6;
  do // (DO)
  {

    j = 0;
    jmax = 6;
    do // (DO)
    {
      Push(1);
      OVER(); // OVER
      Push(Pop() + (i * 9 + j)); //  J 9 * I + +
      ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
      LC_at_(); // LC@
      Push(1);
      Push(i * 6 + j); // J 6 * I +
      ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xefd9: WORD 'WEFDB' codep=0x224c wordp=0xefdb params=0 returns=0
// ================================================

void WEFDB() // WEFDB
{
  Push(Read16(pp_WDBA4)); // WDBA4 @
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Read16(pp_WDBB0)); // WDBB0 @
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  ABS(); // ABS
  Push(0);
  SQRT(); // SQRT
  Push(pp_WDBA8); // WDBA8
  Store_3(); // !_3
}


// ================================================
// 0xeff9: WORD 'WEFFB' codep=0x224c wordp=0xeffb params=0 returns=0
// ================================================

void WEFFB() // WEFFB
{
  Push(Read16(pp_WDBAC)); // WDBAC @
  Push(0x002f);
  Push(0x0167);
  _star__slash_(); // */
  Push(0x0030);
  MOD(); // MOD
  WE27A(); // WE27A
  Push(Read16(pp_WDBA8)); // WDBA8 @
  Push(0x007f);
  _star__slash_(); // */
  Push(pp_WDBC8); // WDBC8
  Store_3(); // !_3
}


// ================================================
// 0xf021: WORD 'WF023' codep=0x224c wordp=0xf023 params=0 returns=0
// ================================================

void WF023() // WF023
{
  Push(Read16(pp_WDBB8)); // WDBB8 @
  Push(pp_WDBB0); // WDBB0
  _plus__ex__2(); // +!_2
  Push(Read16(pp_WDBB0)); // WDBB0 @
  Push(0x0018);
  MIN(); // MIN
  Push(0xffe9);
  MAX(); // MAX
  Push(pp_WDBB0); // WDBB0
  Store_3(); // !_3
}


// ================================================
// 0xf041: WORD 'WF043' codep=0x224c wordp=0xf043 params=0 returns=0
// ================================================

void WF043() // WF043
{
  Push(Read16(pp_WDBAC)); // WDBAC @
  Push(0x002f);
  Push(0x0167);
  _star__slash_(); // */
  Push(0x0030);
  MOD(); // MOD
  WE2E6(); // WE2E6
  Push(Read16(pp_WDBA8)); // WDBA8 @
  Push(0x007f);
  _star__slash_(); // */
  Push(pp_WDBD0); // WDBD0
  Store_3(); // !_3
}


// ================================================
// 0xf069: WORD 'WF06B' codep=0x224c wordp=0xf06b params=0 returns=0
// ================================================

void WF06B() // WF06B
{
  Push(Read16(pp_WDBB0) + Read16(pp_WDBA4)); // WDBB0 @ WDBA4 @ +
  Push(2);
  MAX(); // MAX
  Push(0x0031);
  MIN(); // MIN
  Push(pp_WDBCC); // WDBCC
  Store_3(); // !_3
}


// ================================================
// 0xf085: WORD 'WF087' codep=0x224c wordp=0xf087 params=0 returns=0
// ================================================

void WF087() // WF087
{
  Push(Read16(pp_WDC10) + Read16(pp_WDBBC)); // WDC10 @ WDBBC @ +
  WE3A8(); // WE3A8
}


// ================================================
// 0xf095: WORD 'WF097' codep=0x224c wordp=0xf097 params=0 returns=0
// ================================================

void WF097() // WF097
{
  Push(Read16(pp_WDBB4)); // WDBB4 @
  Push(pp_WDBAC); // WDBAC
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf0a1: WORD 'WF0A3' codep=0x224c wordp=0xf0a3 params=0 returns=0
// ================================================

void WF0A3() // WF0A3
{
  WEFDB(); // WEFDB
  WEFFB(); // WEFFB
  WF06B(); // WF06B
  WF043(); // WF043
}


// ================================================
// 0xf0ad: WORD 'WF0AF' codep=0x224c wordp=0xf0af params=0 returns=1
// ================================================

void WF0AF() // WF0AF
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0b9: WORD 'WF0BB' codep=0x224c wordp=0xf0bb params=0 returns=1
// ================================================

void WF0BB() // WF0BB
{
  WF0AF(); // WF0AF
  Push(Pop()==0x0017?1:0); //  0x0017 =
}


// ================================================
// 0xf0c5: WORD 'WF0C7' codep=0x224c wordp=0xf0c7 params=0 returns=1
// ================================================

void WF0C7() // WF0C7
{
  WF0AF(); // WF0AF
  Push(Pop()==0x0012?1:0); //  0x0012 =
}


// ================================================
// 0xf0d1: WORD 'WF0D3' codep=0x224c wordp=0xf0d3
// ================================================

void WF0D3() // WF0D3
{
  Push(0x0167);
  Push(pp_WDBAC); // WDBAC
  Store_3(); // !_3
  Push(0x0019);
  Push(Read16(regsp)); // DUP
  Push(pp_WDBA4); // WDBA4
  Store_3(); // !_3
  Push(Pop() - 1); //  1-
  Push(pp_WDBB0); // WDBB0
  Store_3(); // !_3
  Push(7);
  Push(pp_WDBB4); // WDBB4
  Store_3(); // !_3
  Push(1);
  Push(pp_WDBD8); // WDBD8
  Store_3(); // !_3
  Push(0xfffb);
  Push(pp_WDBB8); // WDBB8
  Store_3(); // !_3
  Push(8);
  Push(pp_WDBBC); // WDBBC
  Store_3(); // !_3
  Push(0x0019);
  WE3A8(); // WE3A8
  SEEGRID(); // SEEGRID
  Push(1);
  Push(pp_WDBD0); // WDBD0
  _plus__ex__2(); // +!_2
  Push(0x0023);
  WE3A8(); // WE3A8
  SEEGRID(); // SEEGRID
  Push(pp_WDBC0); // WDBC0
  ON_3(); // ON_3
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("TOPOGRAPHY NET LOCKED ON");
  DrawTTY(); // .TTY
  WF0BB(); // WF0BB
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WEC97(); // WEC97
    WECD5(); // WECD5
  }
  do
  {
    WF0A3(); // WF0A3
    SEEGRID(); // SEEGRID
    WF087(); // WF087
    WF023(); // WF023
    WF097(); // WF097
    Push(Read16(pp_WDBCC)); // WDBCC @
    Push(Read16(regsp)); // DUP
    Push(0x000a);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(-2);
      Push(pp_WDBB8); // WDBB8
      Store_3(); // !_3
    }
    Push(Pop()==2?1:0); //  2 =
  } while(Pop() == 0);
  Push(!Read16(pp_IsFUEL_dash_DIE)); // ?FUEL-DIE @ NOT
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("SAFE LANDING, CAPTAIN.");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf19b: WORD 'WF19D' codep=0x224c wordp=0xf19d
// ================================================

void WF19D() // WF19D
{
  WEE65(); // WEE65
  Push(Read16(cc_WDB8E)); // WDB8E
  WEF97(); // WEF97
  WEE9B(); // WEE9B
  WED17(); // WED17
  WF0D3(); // WF0D3
}


// ================================================
// 0xf1ab: WORD 'DESCEND' codep=0x224c wordp=0xf1b7
// ================================================
// entry

void DESCEND() // DESCEND
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("COMPUTING DESCENT PROFILE...");
  DrawTTY(); // .TTY
  WEF33(); // WEF33
  WEF6F(); // WEF6F
  Push(0xc317); // 'NEWCONTOUR'
  MODULE(); // MODULE
  WE7A7(); // WE7A7
  WE80D(); // WE80D
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("AUTOPILOT ENGAGED. DESCENDING...");
  DrawTTY(); // .TTY
  _gt_VIEWSITE(); // >VIEWSITE
  WEED1(); // WEED1
  Push(Read16(pp_IsFUEL_dash_DIE)); // ?FUEL-DIE @
  if (Pop() != 0)
  {
    CTERASE(); // CTERASE
    CTINIT(); // CTINIT
    SET_STR_AS_PARAM("OUT OF FUEL! CRASH IMMINENT!");
    DrawTTY(); // .TTY
  }
  WF19D(); // WF19D
}


// ================================================
// 0xf244: WORD 'WF246' codep=0x224c wordp=0xf246
// ================================================

void WF246() // WF246
{
  Push(5);
  Push(pp_WDBB8); // WDBB8
  Store_3(); // !_3
  Push(-Read16(pp_WDBBC)); // WDBBC @ NEGATE
  Push(pp_WDBBC); // WDBBC
  Store_3(); // !_3
  Push(-Read16(pp_WDBB4)); // WDBB4 @ NEGATE
  Push(pp_WDBB4); // WDBB4
  Store_3(); // !_3
  do
  {
    WF0A3(); // WF0A3
    SEEGRID(); // SEEGRID
    WF087(); // WF087
    WF023(); // WF023
    Push(!(Read16(pp_WDBAC)==0x0167?1:0)); // WDBAC @ 0x0167 = NOT
    if (Pop() != 0)
    {
      WF097(); // WF097
    }
    Push((Read16(pp_WDBCC)==0x0031?1:0) & (Read16(pp_WDBAC)==0x0167?1:0)); // WDBCC @ 0x0031 = WDBAC @ 0x0167 = AND
  } while(Pop() == 0);
  Push(pp_WDBC0); // WDBC0
  OFF(); // OFF
  Push(pp_WDBC8); // WDBC8
  OFF(); // OFF
  Push(0x0032);
  Push(pp_WDBCC); // WDBCC
  Store_3(); // !_3
  Push(1);
  Push(pp_WDBD0); // WDBD0
  Store_3(); // !_3
  WEC7D(); // WEC7D
  WF087(); // WF087
  SEEGRID(); // SEEGRID
}


// ================================================
// 0xf2b2: WORD 'WF2B4' codep=0x224c wordp=0xf2b4
// ================================================

void WF2B4() // WF2B4
{
  unsigned short int i, imax;
  WEDFB(); // WEDFB
  WEE65(); // WEE65
  WED17(); // WED17

  i = 0x008c;
  imax = 0x0028;
  do // (DO)
  {
    Push(i); // I
    WE3A8(); // WE3A8
    SEEGRID(); // SEEGRID
    Push(0xffe2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  WEDFB(); // WEDFB
  WEDCF(); // WEDCF
  WED17(); // WED17
  Push(0x0023);
  WE3A8(); // WE3A8
  SEEGRID(); // SEEGRID
  WEDFB(); // WEDFB
  Push(1);
  Push(0x000e);
  ReadArray(GVERTEX_gt_GRIDCOLOR); // GVERTEX>GRIDCOLOR
  LC_at_(); // LC@
  WEDB1(); // WEDB1
  WED17(); // WED17
  Push(0x001e);
  WE3A8(); // WE3A8
  SEEGRID(); // SEEGRID
}


// ================================================
// 0xf2fa: WORD 'WF2FC' codep=0x224c wordp=0xf2fc params=0 returns=0
// ================================================

void WF2FC() // WF2FC
{
  Push(Read16(pp_WDC1C) + 1); // WDC1C @ 1+
  Push(0x0030);
  MOD(); // MOD
  Push(pp_WDC1C); // WDC1C
  Store_3(); // !_3
}


// ================================================
// 0xf30e: WORD 'WF310' codep=0x1d29 wordp=0xf310
// ================================================
// 0xf310: db 0x3a 0x20 ': '

// ================================================
// 0xf312: WORD 'WF314' codep=0x224c wordp=0xf314
// ================================================

void WF314() // WF314
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  WE654(); // WE654
  Push(pp_WDC18); // WDC18
  Store_3(); // !_3
  Push(pp_WDC1C); // WDC1C
  Store_3(); // !_3
  Push(0x012c);
  Push(Read16(regsp)); // DUP
  WE3A8(); // WE3A8
  Push(Pop() - Read16(pp_WDBC4)); //  WDBC4 @ -
  Push(6);
  _slash_(); // /
  Push(pp_WDC34); // WDC34
  Store_3(); // !_3
  do
  {
    Push(Read16(pp_WDC10) - Read16(pp_WDC34)); // WDC10 @ WDC34 @ -
    Push(Read16(pp_WDBC4)); // WDBC4 @
    MAX(); // MAX
    WE3A8(); // WE3A8
    Push(Read16(pp_WDC18)); // WDC18 @
    Push(Read16(pp_WF310)); // WF310 @
    _st_(); // <
    if (Pop() != 0)
    {
      Push(1);
    } else
    {
      Push(-1);
    }
    Push(pp_WDC18); // WDC18
    _plus__ex__2(); // +!_2
    WE6DC(); // WE6DC
    WF2FC(); // WF2FC
    Push(Read16(pp_WDC10)==Read16(pp_WDBC4)?1:0); // WDC10 @ WDBC4 @ =
  } while(Pop() == 0);
}


// ================================================
// 0xf37c: WORD 'ASCEND' codep=0x224c wordp=0xf387
// ================================================
// entry

void ASCEND() // ASCEND
{
  WF246(); // WF246
  WF2B4(); // WF2B4
  WF314(); // WF314
}


// ================================================
// 0xf38f: WORD 'WF391' codep=0x224c wordp=0xf391
// ================================================

void WF391() // WF391
{
  WDEB0(); // WDEB0
  WDED4(); // WDED4
  WDE8C(); // WDE8C
  WDDEE(); // WDDEE
  WDE3C(); // WDE3C
}


// ================================================
// 0xf39d: WORD 'WF39F' codep=0x224c wordp=0xf39f params=0 returns=0
// ================================================

void WF39F() // WF39F
{
  Push(Read16(pp_GLOBALSEED)); // GLOBALSEED @
  Push(pp_SEED); // SEED
  Store_3(); // !_3
  Push(5);
  Push(0x0013);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(pp_WF310); // WF310
  Store_3(); // !_3
  Push(pp_WDC18); // WDC18
  Store_3(); // !_3
  Push(pp_WDC1C); // WDC1C
  OFF(); // OFF
  Push(pp_WDC04); // WDC04
  OFF(); // OFF
  Push(Read16(cc_WDB86)); // WDB86
  Push(pp_WDC08); // WDC08
  Store_3(); // !_3
}


// ================================================
// 0xf3c9: WORD 'WF3CB' codep=0x224c wordp=0xf3cb
// ================================================

void WF3CB() // WF3CB
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(WDCDC); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(3);
  _slash_(); // /
  ICLOSE(); // ICLOSE
  Push(0x0014);
  MAX(); // MAX
  Push(0x0078);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_WDBC4); // WDBC4
  Store_3(); // !_3
  WE3A8(); // WE3A8
}


// ================================================
// 0xf3f1: WORD 'SKYCASE' codep=0x4a4f wordp=0xf3fd
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
// 0xf411: WORD 'WF413' codep=0x224c wordp=0xf413
// ================================================

void WF413() // WF413
{
  Push(Read16(pp_ATMO)); // ATMO @
  SKYCASE(); // SKYCASE case
  Push(pp_WDBA0); // WDBA0
  Store_3(); // !_3
}


// ================================================
// 0xf41f: WORD 'INIT-ORBIT' codep=0x224c wordp=0xf42e
// ================================================
// entry

void INIT_dash_ORBIT() // INIT-ORBIT
{
  Push(pp_GLOBALSEED); // GLOBALSEED
  Store_3(); // !_3
  Push(pp__n_CLRMAP); // #CLRMAP
  Store_3(); // !_3
  SET_dash_COLORMAP(); // SET-COLORMAP
  WF3CB(); // WF3CB
  WF413(); // WF413
  WF0BB(); // WF0BB
  if (Pop() != 0)
  {
    Push(0x6a99); // 'MERCATOR'
    SETLARRAY(); // SETLARRAY
    FULLARRAY(); // FULLARRAY
    SETREGION(); // SETREGION
    Push(0x0061);
    FILLREGION(); // FILLREGION
  } else
  {
    WF0C7(); // WF0C7
    if (Pop() != 0)
    {
      Push(0x6a99); // 'MERCATOR'
      Push(Read16(Pop() + 6)); //  6 + @
      Push(0x008a);
      FILE_st_(); // FILE<
    } else
    {
      Push(Read16(pp_GLOBALSEED)); // GLOBALSEED @
      Push(0xc302); // 'MERCATOR-GEN'
      MODULE(); // MODULE
    }
  }
  Push(0xc32c); // 'MAKE-GLOBE'
  MODULE(); // MODULE
  WF391(); // WF391
  WF39F(); // WF39F
}


// ================================================
// 0xf486: WORD 'ROTATE' codep=0x224c wordp=0xf491
// ================================================
// entry

void ROTATE() // ROTATE
{
  WF2FC(); // WF2FC
  WE6DC(); // WE6DC
}

// 0xf497: db 0x4f 0x52 0x42 0x49 0x54 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x29 0x41 0x2d 0x43 0x41 0x53 0xc5 0x4f 0x4a 0x06 0x00 0x22 0x0f 0x01 0x00 0x54 0xf4 0x07 0x00 0x5f 0xf4 0x08 0x00 0x6c 0xf4 0x03 0x00 0x75 0xf4 0x0a 0x00 0x7a 0x32 0x34 0x30 0x33 0xf4 0x4c 0x22 0x98 0x2a 0x38 0x0c 0x3e 0x62 0x38 0x0c 0x46 0x40 0x19 0x06 0x3e 0x13 0xfa 0x15 0xf0 0xff 0x90 0x16 0x00 0x00 0x87 0x28 0x58 0x43 0x4f 0x4d 0x4d 0xa9 0x4c 0x22 0xdc 0xf4 0xfd 0x62 0x02 0x7a 0x30 0x75 0xc9 0x79 0xbe 0xf4 0x84 0xf4 0xdc 0xf4 0x90 0x16 0x58 0x43 0x4f 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x53 0x50 0x45 0x43 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x38 0x2f 0x31 0x33 0x2f 0x38 0x35 0x20 0x41 0x57 0x4b 0x20 0x29 0x31 0x31 0x37 0x35 0xcf 0x8b 0x90 0x16 0x43 0x4f 0x4d 0x4d 0x2d 0x56 0x4f 0x43 0x00 'ORBIT___________________________)A-CAS OJ  "   T   _   l   u   z2403 L" *8 >b8 F@  >          (XCOMM L"   b z0u y        XCOM-VOC________________________ SPEC -------------8/13/85 AWK )1175    COMM-VOC '

