// ====== OVERLAY 'TV-OV' ======
// store offset = 0xe7d0
// overlay size   = 0x0d90

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE7E6  codep:0x2214 wordp:0xe7e6 size:0x0002 C-string:'WE7E6'
//           WE7EA  codep:0x744d wordp:0xe7ea size:0x0003 C-string:'WE7EA'
//           WE7EF  codep:0x744d wordp:0xe7ef size:0x0003 C-string:'WE7EF'
//           WE7F4  codep:0x744d wordp:0xe7f4 size:0x0003 C-string:'WE7F4'
//           WE7F9  codep:0x224c wordp:0xe7f9 size:0x000c C-string:'WE7F9'
//           WE807  codep:0x224c wordp:0xe807 size:0x000c C-string:'WE807'
//           WE815  codep:0x224c wordp:0xe815 size:0x0012 C-string:'WE815'
//           WE829  codep:0x224c wordp:0xe829 size:0x0010 C-string:'WE829'
//           WE83B  codep:0x224c wordp:0xe83b size:0x002c C-string:'WE83B'
//           WE869  codep:0x744d wordp:0xe869 size:0x0003 C-string:'WE869'
//           WE86E  codep:0x744d wordp:0xe86e size:0x0003 C-string:'WE86E'
//           WE873  codep:0x224c wordp:0xe873 size:0x0018 C-string:'WE873'
//           WE88D  codep:0x224c wordp:0xe88d size:0x0016 C-string:'WE88D'
//           WE8A5  codep:0x224c wordp:0xe8a5 size:0x0018 C-string:'WE8A5'
//           WE8BF  codep:0x224c wordp:0xe8bf size:0x0008 C-string:'WE8BF'
//           WE8C9  codep:0x224c wordp:0xe8c9 size:0x0014 C-string:'WE8C9'
//           WE8DF  codep:0x224c wordp:0xe8df size:0x0014 C-string:'WE8DF'
//           WE8F5  codep:0x224c wordp:0xe8f5 size:0x0016 C-string:'WE8F5'
//           WE90D  codep:0x224c wordp:0xe90d size:0x0014 C-string:'WE90D'
//           WE923  codep:0x224c wordp:0xe923 size:0x001e C-string:'WE923'
//           WE943  codep:0x224c wordp:0xe943 size:0x0026 C-string:'WE943'
//           WE96B  codep:0x224c wordp:0xe96b size:0x0022 C-string:'WE96B'
//           WE98F  codep:0x224c wordp:0xe98f size:0x0022 C-string:'WE98F'
//           WE9B3  codep:0x224c wordp:0xe9b3 size:0x001e C-string:'WE9B3'
//           WE9D3  codep:0x224c wordp:0xe9d3 size:0x0010 C-string:'WE9D3'
//           WE9E5  codep:0x224c wordp:0xe9e5 size:0x000a C-string:'WE9E5'
//           WE9F1  codep:0x224c wordp:0xe9f1 size:0x0048 C-string:'WE9F1'
//           WEA3B  codep:0x1d29 wordp:0xea3b size:0x0002 C-string:'WEA3B'
//           WEA3F  codep:0x224c wordp:0xea3f size:0x0026 C-string:'WEA3F'
//           WEA67  codep:0x224c wordp:0xea67 size:0x0028 C-string:'WEA67'
//           WEA91  codep:0x224c wordp:0xea91 size:0x0082 C-string:'WEA91'
//           WEB15  codep:0x224c wordp:0xeb15 size:0x0014 C-string:'WEB15'
//           WEB2B  codep:0x224c wordp:0xeb2b size:0x0078 C-string:'WEB2B'
//           WEBA5  codep:0x224c wordp:0xeba5 size:0x004c C-string:'WEBA5'
//           WEBF3  codep:0x224c wordp:0xebf3 size:0x0028 C-string:'WEBF3'
//           WEC1D  codep:0x224c wordp:0xec1d size:0x000c C-string:'WEC1D'
//           WEC2B  codep:0x224c wordp:0xec2b size:0x0026 C-string:'WEC2B'
//           WEC53  codep:0x224c wordp:0xec53 size:0x0006 C-string:'WEC53'
//           WEC5B  codep:0x224c wordp:0xec5b size:0x0024 C-string:'WEC5B'
//       FUNCTIONS  codep:0x1d29 wordp:0xec8d size:0x002d C-string:'FUNCTIONS'
//           WECBC  codep:0x1d29 wordp:0xecbc size:0x0006 C-string:'WECBC'
//           WECC4  codep:0x224c wordp:0xecc4 size:0x0026 C-string:'WECC4'
//           WECEC  codep:0x224c wordp:0xecec size:0x0006 C-string:'WECEC'
//           WECF4  codep:0x224c wordp:0xecf4 size:0x001c C-string:'WECF4'
//           WED12  codep:0x224c wordp:0xed12 size:0x0066 C-string:'WED12'
//         HEAVEHO  codep:0x224c wordp:0xed84 size:0x000a C-string:'HEAVEHO'
//           WED90  codep:0x2214 wordp:0xed90 size:0x0002 C-string:'WED90'
//           WED94  codep:0x73ea wordp:0xed94 size:0x0006 C-string:'WED94'
//           WED9C  codep:0x224c wordp:0xed9c size:0x002c C-string:'WED9C'
//        TV-SETUP  codep:0x224c wordp:0xedd5 size:0x000e C-string:'TV_dash_SETUP'
//           WEDE5  codep:0x224c wordp:0xede5 size:0x0010 C-string:'WEDE5'
//           WEDF7  codep:0x224c wordp:0xedf7 size:0x0026 C-string:'WEDF7'
//           WEE1F  codep:0x224c wordp:0xee1f size:0x000a C-string:'WEE1F'
//           WEE2B  codep:0x224c wordp:0xee2b size:0x000c C-string:'WEE2B'
//           WEE39  codep:0x224c wordp:0xee39 size:0x0070 C-string:'WEE39'
//           WEEAB  codep:0x224c wordp:0xeeab size:0x0050 C-string:'WEEAB'
//           WEEFD  codep:0x224c wordp:0xeefd size:0x0046 C-string:'WEEFD'
//           WEF45  codep:0x224c wordp:0xef45 size:0x001c C-string:'WEF45'
//           WEF63  codep:0x224c wordp:0xef63 size:0x002a C-string:'WEF63'
//           WEF8F  codep:0x224c wordp:0xef8f size:0x005a C-string:'WEF8F'
//           WEFEB  codep:0x224c wordp:0xefeb size:0x0012 C-string:'WEFEB'
//           WEFFF  codep:0x224c wordp:0xefff size:0x00a4 C-string:'WEFFF'
//           WF0A5  codep:0x224c wordp:0xf0a5 size:0x003c C-string:'WF0A5'
//           WF0E3  codep:0x224c wordp:0xf0e3 size:0x0014 C-string:'WF0E3'
//           WF0F9  codep:0x224c wordp:0xf0f9 size:0x002c C-string:'WF0F9'
//          EYECON  codep:0x1d29 wordp:0xf130 size:0x0006 C-string:'EYECON'
//           WF138  codep:0x224c wordp:0xf138 size:0x004a C-string:'WF138'
//           WF184  codep:0x224c wordp:0xf184 size:0x0034 C-string:'WF184'
//           WF1BA  codep:0x224c wordp:0xf1ba size:0x0016 C-string:'WF1BA'
//           WF1D2  codep:0x224c wordp:0xf1d2 size:0x0028 C-string:'WF1D2'
//           WF1FC  codep:0x224c wordp:0xf1fc size:0x0050 C-string:'WF1FC'
//           WF24E  codep:0x224c wordp:0xf24e size:0x0026 C-string:'WF24E'
//       WALK&TALK  codep:0x224c wordp:0xf282 size:0x0012 C-string:'WALK_and_TALK'
//           WF296  codep:0x224c wordp:0xf296 size:0x0036 C-string:'WF296'
//           WF2CE  codep:0x224c wordp:0xf2ce size:0x0010 C-string:'WF2CE'
//         TV-DISP  codep:0x224c wordp:0xf2ea size:0x007d C-string:'TV_dash_DISP'
//       TV-CLEANU  codep:0x224c wordp:0xf375 size:0x0004 C-string:'TV_dash_CLEANU'
//           WF37B  codep:0x224c wordp:0xf37b size:0x002e C-string:'WF37B'
//           WF3AB  codep:0x224c wordp:0xf3ab size:0x0008 C-string:'WF3AB'
//           WF3B5  codep:0x224c wordp:0xf3b5 size:0x007e C-string:'WF3B5'
//           WF435  codep:0x1d29 wordp:0xf435 size:0x0002 C-string:'WF435'
//           WF439  codep:0x224c wordp:0xf439 size:0x0012 C-string:'WF439'
//           WF44D  codep:0x224c wordp:0xf44d size:0x001c C-string:'WF44D'
//       DO.WEAPON  codep:0x224c wordp:0xf477 size:0x0000 C-string:'DO_dot_WEAPON'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_IsNEW; // ?NEW
extern const unsigned short int pp_MOVED; // MOVED
extern const unsigned short int pp_LOCRADIUS; // LOCRADIUS
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp__i__dot_BACKG; // '.BACKG
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp__n_STORM; // #STORM
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_WEAPON_dash_; // WEAPON-
extern const unsigned short int pp_IsFLAT; // ?FLAT
extern const unsigned short int pp_EYEXY; // EYEXY
extern const unsigned short int pp_WEAPXY; // WEAPXY
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_LKEYTIM; // LKEYTIM
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp_XWLD_c_XPIX; // XWLD:XPIX
extern const unsigned short int pp_YWLD_c_YPIX; // YWLD:YPIX
extern const unsigned short int pp_ANCHOR_dash_CONTOUR; // ANCHOR-CONTOUR
extern const unsigned short int pp__ro_SHIP_rc_; // (SHIP)
extern const unsigned short int pp_TVEHICLE; // TVEHICLE
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp_SUPER_dash_BOX; // SUPER-BOX
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void PAD(); // PAD
void DrawR(); // .R
void MS(); // MS
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_eq_(); // D=
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void _2_ex_(); // 2!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void GetRECORD(); // @RECORD
void CDROP(); // CDROP
void IsNULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void INEXT(); // INEXT
void IINSERT(); // IINSERT
void _gt_INSERT(); // >INSERT
void IEXTRACT(); // IEXTRACT
void IsCLASS_slash_SPECIES(); // ?CLASS/SPECIES
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void _gt_LORES_2(); // >LORES_2
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void StoreVISWINDOW(); // !VISWINDOW
void _gt_1ICONFONT(); // >1ICONFONT
void INIT_dash_ICONLIST(); // INIT-ICONLIST
void DrawBACKGROUND(); // .BACKGROUND
void DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
void IsICONS_dash_AT(); // ?ICONS-AT
void IsICON_dash_IADDR(); // ?ICON-IADDR
void _dash_ICON(); // -ICON
void _plus_ICON(); // +ICON
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void SFILL(); // SFILL
void _gt_TVCT(); // >TVCT
void CLICK(); // CLICK
void BEEPON(); // BEEPON
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void WINDOW(); // WINDOW
void WLINE_dash_UP(); // WLINE-UP
void GCR(); // GCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void VIEWSCR(); // VIEWSCR
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void CURSORSPACE(); // CURSORSPACE
void BLD_dash_CRS(); // BLD-CRS
void _gt_BOX(); // >BOX
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void _4_star_(); // 4*
void D_plus_(); // D+
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void _st_D_ex__gt_(); // <D!>
void _gt_C(); // >C
void CI(); // CI
void LLINE(); // LLINE
void V_gt_DISPLAY(); // V>DISPLAY
void WLD_gt_SCR(); // WLD>SCR


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEA3B = 0xea3b; // WEA3B size: 2
// {0x3a, 0x20}

const unsigned short int pp_FUNCTIONS = 0xec8d; // FUNCTIONS size: 45
// {0x06, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x13, 0x0c, 0x57, 0x0c, 0x13, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16, 0x4c, 0x22, 0xf0, 0x0d, 0x5f, 0x12, 0xb4, 0x0d, 0x2d, 0x12, 0x90, 0x0e, 0x3e, 0x13, 0x90, 0x16}

const unsigned short int pp_WECBC = 0xecbc; // WECBC size: 6
// {0x56, 0x3a, 0x20, 0x20, 0x05, 0x41}

const unsigned short int pp_EYECON = 0xf130; // EYECON size: 6
// {0x00, 0x42, 0x99, 0x99, 0x42, 0x00}

const unsigned short int pp_WF435 = 0xf435; // WF435 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WE7E6 = 0xe7e6; // WE7E6
const unsigned short int cc_WED90 = 0xed90; // WED90


// 0xe7e2: db 0xd3 0x00 '  '

// ================================================
// 0xe7e4: WORD 'WE7E6' codep=0x2214 wordp=0xe7e6
// ================================================
// orphan
// 0xe7e6: dw 0x0044

// ================================================
// 0xe7e8: WORD 'WE7EA' codep=0x744d wordp=0xe7ea
// ================================================
IFieldType WE7EA = {TVEHICLEIDX, 0x11, 0x01};

// ================================================
// 0xe7ed: WORD 'WE7EF' codep=0x744d wordp=0xe7ef
// ================================================
IFieldType WE7EF = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xe7f2: WORD 'WE7F4' codep=0x744d wordp=0xe7f4
// ================================================
IFieldType WE7F4 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe7f7: WORD 'WE7F9' codep=0x224c wordp=0xe7f9 params=1 returns=2
// ================================================
// orphan

void WE7F9() // WE7F9
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  PICK(); // PICK
  Push(a); // R>
  PICK(); // PICK
}


// ================================================
// 0xe805: WORD 'WE807' codep=0x224c wordp=0xe807 params=2 returns=2
// ================================================
// orphan

void WE807() // WE807
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xe813: WORD 'WE815' codep=0x224c wordp=0xe815 params=0 returns=0
// ================================================
// orphan

void WE815() // WE815
{
  Push(Read16(cc_WE7E6)); // WE7E6
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xe827: WORD 'WE829' codep=0x224c wordp=0xe829 params=1 returns=0
// ================================================

void WE829() // WE829
{
  Push(Read16(pp_WTOP)); // WTOP @
  OVER(); // OVER
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  LLINE(); // LLINE
}


// ================================================
// 0xe839: WORD 'WE83B' codep=0x224c wordp=0xe83b params=0 returns=0
// ================================================

void WE83B() // WE83B
{
  Push(0x0016);
  WE829(); // WE829
  Push(0x002a);
  WE829(); // WE829
  Push(0x0042);
  WE829(); // WE829
  Push(0x0056);
  WE829(); // WE829
  Push(0x006a);
  WE829(); // WE829
  Push(0x0086);
  WE829(); // WE829
  Push(0x009e);
  WE829(); // WE829
}


// ================================================
// 0xe867: WORD 'WE869' codep=0x744d wordp=0xe869
// ================================================
IFieldType WE869 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xe86c: WORD 'WE86E' codep=0x744d wordp=0xe86e
// ================================================
IFieldType WE86E = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xe871: WORD 'WE873' codep=0x224c wordp=0xe873 params=1 returns=0
// ================================================

void WE873() // WE873
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x00c5);
  Push(0x000c);
  Push(0x00c1);
  Push(0x0044);
  Push(a); // R>
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xe88b: WORD 'WE88D' codep=0x224c wordp=0xe88d params=0 returns=1
// ================================================

void WE88D() // WE88D
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe8a3: WORD 'WE8A5' codep=0x224c wordp=0xe8a5 params=0 returns=1
// ================================================

void WE8A5() // WE8A5
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WE86E.offset); // WE86E<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+WE869.offset)&0xFF); // WE869<IFIELD> C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xe8bd: WORD 'WE8BF' codep=0x224c wordp=0xe8bf params=0 returns=0
// ================================================

void WE8BF() // WE8BF
{
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe8c7: WORD 'WE8C9' codep=0x224c wordp=0xe8c9 params=0 returns=0
// ================================================

void WE8C9() // WE8C9
{
  Push(0x0083);
  Push(0x0053);
  Push(9);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe8dd: WORD 'WE8DF' codep=0x224c wordp=0xe8df params=0 returns=0
// ================================================

void WE8DF() // WE8DF
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
  WE8BF(); // WE8BF
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe8f3: WORD 'WE8F5' codep=0x224c wordp=0xe8f5 params=0 returns=0
// ================================================

void WE8F5() // WE8F5
{
  Push(0x00c1);
  Push(0x0053);
  Push(8);
  Push(0x0012);
  WINDOW(); // WINDOW
  WE8BF(); // WE8BF
}


// ================================================
// 0xe90b: WORD 'WE90D' codep=0x224c wordp=0xe90d params=0 returns=0
// ================================================

void WE90D() // WE90D
{
  Push(0x00bf);
  Push(3);
  Push(0x0011);
  Push(0x0012);
  WINDOW(); // WINDOW
  WE8BF(); // WE8BF
}


// ================================================
// 0xe921: WORD 'WE923' codep=0x224c wordp=0xe923 params=0 returns=0
// ================================================

void WE923() // WE923
{
  Push(0x000c);
  Push(pp_WTOP); // WTOP
  _st__ex__gt_(); // <!>
  Push(3);
  Push(pp_WLEFT); // WLEFT
  _st__ex__gt_(); // <!>
  Push(0x009b);
  Push(pp_WRIGHT); // WRIGHT
  _st__ex__gt_(); // <!>
  Push(2);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe941: WORD 'WE943' codep=0x224c wordp=0xe943 params=2 returns=2
// ================================================

void WE943() // WE943
{
  Push(Pop() - 0x01e0); //  0x01e0 -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(Pop() - 0x0480); //  0x0480 -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xe969: WORD 'WE96B' codep=0x224c wordp=0xe96b params=1 returns=0
// ================================================

void WE96B() // WE96B
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      PRINT("W", 1); // (.")
    } else
    {
      PRINT("E", 1); // (.")
    }
    return;
  }
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xe98d: WORD 'WE98F' codep=0x224c wordp=0xe98f params=1 returns=0
// ================================================

void WE98F() // WE98F
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      PRINT("S", 1); // (.")
    } else
    {
      PRINT("N", 1); // (.")
    }
    return;
  }
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xe9b1: WORD 'WE9B3' codep=0x224c wordp=0xe9b3 params=2 returns=0
// ================================================

void WE9B3() // WE9B3
{
  SWAP(); // SWAP
  _4_star_(); // 4*
  Push(Pop() + (Read16(pp_WLEFT) + 2)); //  WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe9d1: WORD 'WE9D3' codep=0x224c wordp=0xe9d3 params=0 returns=2
// ================================================

void WE9D3() // WE9D3
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe9e3: WORD 'WE9E5' codep=0x224c wordp=0xe9e5 params=2 returns=0
// ================================================
// orphan

void WE9E5() // WE9E5
{
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xe9ef: WORD 'WE9F1' codep=0x224c wordp=0xe9f1 params=0 returns=0
// ================================================

void WE9F1() // WE9F1
{
  WE88D(); // WE88D
  WE8A5(); // WE8A5
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WE9D3(); // WE9D3
  WE943(); // WE943
  Push(0x0010);
  Push(0x00c5);
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(4);
  DrawR(); // .R
  WE98F(); // WE98F
  PRINT(" * ", 3); // (.")
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(0);
  DrawR(); // .R
  WE96B(); // WE96B
}


// ================================================
// 0xea39: WORD 'WEA3B' codep=0x1d29 wordp=0xea3b
// ================================================
// 0xea3b: db 0x3a 0x20 ': '

// ================================================
// 0xea3d: WORD 'WEA3F' codep=0x224c wordp=0xea3f params=0 returns=0
// ================================================

void WEA3F() // WEA3F
{
  Push(Read16(pp_COLOR)); // COLOR @
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0);
  Push(0);
  WE9B3(); // WE9B3
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xea65: WORD 'WEA67' codep=0x224c wordp=0xea67 params=0 returns=0
// ================================================

void WEA67() // WEA67
{
  unsigned short int i, imax;
  Push(0x2001);
  PAD(); // PAD
  _st__ex__gt_(); // <!>
  Push(Read16(pp_WEA3B)); // WEA3B @
  Push(Read16(pp_WLINES)); // WLINES @
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + Pop()); // +

  i = 0;
  imax = Pop();
  do // (DO)
  {
    PAD(); // PAD
    WLINE_dash_UP(); // WLINE-UP
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_WEA3B); // WEA3B
  OFF(); // OFF
}


// ================================================
// 0xea8f: WORD 'WEA91' codep=0x224c wordp=0xea91 params=0 returns=0
// ================================================

void WEA91() // WEA91
{
  unsigned short int i, imax;

  i = 0;
  imax = 2;
  do // (DO)
  {
    Push((Read16(pp_WLEFT) - 2) + i); // WLEFT @ 2- I +
    Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
    OVER(); // OVER
    Push(Read16(pp_WTOP) + 2); // WTOP @ 2+
    LLINE(); // LLINE
    Push((Read16(pp_WRIGHT) + 2) + i); // WRIGHT @ 2+ I +
    Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
    OVER(); // OVER
    Push(Read16(pp_WTOP) + 2); // WTOP @ 2+
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_WLEFT) - 2); // WLEFT @ 2-
  Push(Read16(pp_WTOP) + 2); // WTOP @ 2+
  Push(Read16(pp_WRIGHT) + 3); // WRIGHT @ 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(Read16(pp_WLEFT) - 2); // WLEFT @ 2-
  Push(Read16(pp_WTOP) + 1); // WTOP @ 1+
  Push(Read16(pp_WRIGHT) + 3); // WRIGHT @ 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(Read16(pp_WLEFT) - 2); // WLEFT @ 2-
  Push(Read16(pp_WBOTTOM) - 2); // WBOTTOM @ 2-
  Push(Read16(pp_WRIGHT) + 3); // WRIGHT @ 3+
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xeb13: WORD 'WEB15' codep=0x224c wordp=0xeb15 params=0 returns=0
// ================================================

void WEB15() // WEB15
{
  WE90D(); // WE90D
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(-1);
  WE9B3(); // WE9B3
  GetColor(BLACK);
  WE873(); // WE873
  WE9F1(); // WE9F1
}


// ================================================
// 0xeb29: WORD 'WEB2B' codep=0x224c wordp=0xeb2b params=0 returns=0
// ================================================

void WEB2B() // WEB2B
{
  WE8F5(); // WE8F5
  WEA3F(); // WEA3F
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  WEA91(); // WEA91
  _gt_2FONT(); // >2FONT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0);
  WE9B3(); // WE9B3
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  Push(0);
  Push(2);
  WE9B3(); // WE9B3
  PRINT("DATE  : ", 8); // (.")
  Push(0);
  Push(3);
  WE9B3(); // WE9B3
  PRINT("ENERGY: ", 8); // (.")
  Push(0);
  Push(4);
  WE9B3(); // WE9B3
  PRINT("EFF.  : ", 8); // (.")
  Push(0);
  Push(5);
  WE9B3(); // WE9B3
  PRINT("CARGO : ", 8); // (.")
  Push(0);
  Push(6);
  WE9B3(); // WE9B3
  PRINT("SHIP  : ", 8); // (.")
}


// ================================================
// 0xeba3: WORD 'WEBA5' codep=0x224c wordp=0xeba5 params=0 returns=0
// ================================================

void WEBA5() // WEBA5
{
  WE923(); // WE923
  WEA3F(); // WEA3F
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  WEA91(); // WEA91
  WE83B(); // WE83B
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(-3);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(0);
  Push(0);
  WE9B3(); // WE9B3
  _gt_1FONT(); // >1FONT
  PRINT("MAPS MOVE CARGO LOOK SCAN WEAPON ICONS ", 39); // (.")
}


// ================================================
// 0xebf1: WORD 'WEBF3' codep=0x224c wordp=0xebf3 params=0 returns=0
// ================================================

void WEBF3() // WEBF3
{
  WE8C9(); // WE8C9
  WEA3F(); // WEA3F
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  WEA91(); // WEA91
  _gt_2FONT(); // >2FONT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(0);
  WE9B3(); // WE9B3
  PRINT("CREW VITALITY", 13); // (.")
}


// ================================================
// 0xec1b: WORD 'WEC1D' codep=0x224c wordp=0xec1d params=0 returns=0
// ================================================

void WEC1D() // WEC1D
{
  WE8DF(); // WE8DF
  WEA3F(); // WEA3F
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  WEA91(); // WEA91
}


// ================================================
// 0xec29: WORD 'WEC2B' codep=0x224c wordp=0xec2b
// ================================================

void WEC2B() // WEC2B
{
  _gt_DISPLAY(); // >DISPLAY
  _gt_1FONT(); // >1FONT
  _gt_LORES_2(); // >LORES_2
  Push(0);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  GetColor(BLACK);
  VIEWSCR(); // VIEWSCR
  WEB15(); // WEB15
  WEB2B(); // WEB2B
  WEBF3(); // WEBF3
  WEBA5(); // WEBA5
  WEC1D(); // WEC1D
}


// ================================================
// 0xec51: WORD 'WEC53' codep=0x224c wordp=0xec53 params=0 returns=0
// ================================================
// orphan

void WEC53() // WEC53
{
  WE8DF(); // WE8DF
  WEA67(); // WEA67
}


// ================================================
// 0xec59: WORD 'WEC5B' codep=0x224c wordp=0xec5b
// ================================================

void WEC5B() // WEC5B
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM
  _2_ex_(); // 2!
  do
  {
    Push(Read16(regsp)); // DUP
    Push(0);
    Push(pp_LKEYTIM); // LKEYTIM
    _2_at_(); // 2@
    D_plus_(); // D+
    TIME(); // TIME
    _2_at_(); // 2@
    D_st_(); // D<
    _i_KEY(); // 'KEY
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); // DROP
}


// ================================================
// 0xec7f: WORD 'FUNCTIONS' codep=0x1d29 wordp=0xec8d
// ================================================
// 0xec8d: db 0x06 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x13 0x0c 0x57 0x0c 0x13 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 0x4c 0x22 0xf0 0x0d 0x5f 0x12 0xb4 0x0d 0x2d 0x12 0x90 0x0e 0x3e 0x13 0x90 0x16 '          +   C   W   k      L"  _   -   >   '

// ================================================
// 0xecba: WORD 'WECBC' codep=0x1d29 wordp=0xecbc
// ================================================
// 0xecbc: db 0x56 0x3a 0x20 0x20 0x05 0x41 'V:   A'

// ================================================
// 0xecc2: WORD 'WECC4' codep=0x224c wordp=0xecc4 params=0 returns=1
// ================================================

void WECC4() // WECC4
{
  Push(Read16(0x63ef+INST_dash_X.offset) - Read16(pp_XABS)); // INST-X<IFIELD> @ XABS @ -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  Push(Read16(0x63ef+INST_dash_Y.offset) - Read16(pp_YABS)); // INST-Y<IFIELD> @ YABS @ -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xecea: WORD 'WECEC' codep=0x224c wordp=0xecec
// ================================================

void WECEC() // WECEC
{
  _dash_ICON(); // -ICON
  IDELETE(); // IDELETE
}


// ================================================
// 0xecf2: WORD 'WECF4' codep=0x224c wordp=0xecf4
// ================================================

void WECF4() // WECF4
{
  Push(pp_WECBC); // WECBC
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    WECEC(); // WECEC
  }
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed10: WORD 'WED12' codep=0x224c wordp=0xed12 params=0 returns=0
// ================================================

void WED12() // WED12
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_WECBC); // WECBC
  _1_dot_5_ex_(); // 1.5!
  Push(0);
  Push(pp_WECBC + 4); // WECBC 4 +
  _st__ex__gt_(); // <!>
  Push(0x000b);
  Push(0x000b);
  while(1)
  {
    Push(pp_SUPER_dash_BOX); // SUPER-BOX
    _1_dot_5_at_(); // 1.5@
    CI(); // CI
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    IsCLASS_slash_SPECIES(); // ?CLASS/SPECIES
    if (Pop() != 0)
    {
      WECC4(); // WECC4
      Push(Read16(pp_WECBC + 4)); // WECBC 4 + @
      OVER(); // OVER
      _st_(); // <
      if (Pop() != 0)
      {
        CI(); // CI
        Push(pp_WECBC); // WECBC
        _1_dot_5_ex_(); // 1.5!
        Push(pp_WECBC + 4); // WECBC 4 +
        _st__ex__gt_(); // <!>
      } else
      {
        Pop(); // DROP
      }
    }
    INEXT(); // INEXT
  }
  Pop(); Pop(); // 2DROP
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed78: WORD 'HEAVEHO' codep=0x224c wordp=0xed84
// ================================================
// entry

void HEAVEHO() // HEAVEHO
{
  Push(pp_IsCRITIC); // ?CRITIC
  ON_3(); // ON_3
  WED12(); // WED12
  WECF4(); // WECF4
}


// ================================================
// 0xed8e: WORD 'WED90' codep=0x2214 wordp=0xed90
// ================================================
// 0xed90: dw 0x7fff

// ================================================
// 0xed92: WORD 'WED94' codep=0x73ea wordp=0xed94
// ================================================
// orphan
LoadDataType WED94 = {CREATUREIDX, 0x90, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xed9a: WORD 'WED9C' codep=0x224c wordp=0xed9c params=0 returns=0
// ================================================

void WED9C() // WED9C
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_XABS)); // XABS @
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  Push(Read16(pp_YABS)); // YABS @
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(Read16(cc_WED90)); // WED90
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x01f4);
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedc8: WORD 'TV-SETUP' codep=0x224c wordp=0xedd5
// ================================================
// entry

void TV_dash_SETUP() // TV-SETUP
{
  WEC2B(); // WEC2B
  GetColor(DK_dash_BLUE);
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
  Push(pp_FUNCTIONS); // FUNCTIONS
  BLD_dash_CRS(); // BLD-CRS
}


// ================================================
// 0xede3: WORD 'WEDE5' codep=0x224c wordp=0xede5 params=0 returns=0
// ================================================

void WEDE5() // WEDE5
{
  IsNULL(); // ?NULL
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  Push2Words("0.");
  _gt_C(); // >C
}


// ================================================
// 0xedf5: WORD 'WEDF7' codep=0x224c wordp=0xedf7
// ================================================

void WEDF7() // WEDF7
{
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001c);
    Push(5);
    IFIND(); // IFIND
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0);
  }
  Push(pp_IsFLAT); // ?FLAT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xee1d: WORD 'WEE1F' codep=0x224c wordp=0xee1f
// ================================================

void WEE1F() // WEE1F
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WEDF7(); // WEDF7
}


// ================================================
// 0xee29: WORD 'WEE2B' codep=0x224c wordp=0xee2b params=1 returns=0
// ================================================

void WEE2B() // WEE2B
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WE7F4.offset); // WE7F4<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee37: WORD 'WEE39' codep=0x224c wordp=0xee39
// ================================================

void WEE39() // WEE39
{
  WEE1F(); // WEE1F
  Push(Read16(pp_IsFLAT)); // ?FLAT @
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001c);
    Push(5);
    IFIND(); // IFIND
    Pop(); // DROP
    Push(3);
    Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
    Store_3(); // !_3
    IEXTRACT(); // IEXTRACT
    WEDE5(); // WEDE5
    ICLOSE(); // ICLOSE
    Push(pp_TV_dash_HOLD); // TV-HOLD
    Get_gt_C_plus_S(); // @>C+S
    _gt_BOX(); // >BOX
    Push(3);
    Push(0x63ef+WE7EF.offset); // WE7EF<IFIELD>
    _plus__ex__2(); // +!_2
    ICLOSE(); // ICLOSE
    Push(-3);
    WEE2B(); // WEE2B
  }
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001c);
    Push(3);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(1);
      Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
      Store_3(); // !_3
      IEXTRACT(); // IEXTRACT
      WEDE5(); // WEDE5
      Push(pp_TV_dash_HOLD); // TV-HOLD
      Get_gt_C_plus_S(); // @>C+S
      _gt_BOX(); // >BOX
      Push(1);
      Push(0x63ef+WE7EF.offset); // WE7EF<IFIELD>
      _plus__ex__2(); // +!_2
      ICLOSE(); // ICLOSE
      Push(-1);
      WEE2B(); // WEE2B
    }
    ICLOSE(); // ICLOSE
  }
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeea9: WORD 'WEEAB' codep=0x224c wordp=0xeeab
// ================================================

void WEEAB() // WEEAB
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  WED9C(); // WED9C
  Push(0xc437); // 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  IEXTRACT(); // IEXTRACT
  Push(pp_SUPER_dash_BOX); // SUPER-BOX
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _gt_INSERT(); // >INSERT
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp__ro_SHIP_rc_); // (SHIP)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_XABS)); // XABS @
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  Push(Read16(pp_YABS) + 1); // YABS @ 1+
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(0xc437); // 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  ICLOSE(); // ICLOSE
  WEE39(); // WEE39
}


// ================================================
// 0xeefb: WORD 'WEEFD' codep=0x224c wordp=0xeefd params=0 returns=0
// ================================================

void WEEFD() // WEEFD
{
  Push(Read16(pp_IsTV)); // ?TV @
  if (Pop() == 0) return;
  PRINT("REFUELING TERRAIN VEHICLE ", 26); // (.")
  GCR(); // GCR
  PRINT("AND TRANSFERRING ALL CARGO", 26); // (.")
}


// ================================================
// 0xef43: WORD 'WEF45' codep=0x224c wordp=0xef45 params=0 returns=0
// ================================================

void WEF45() // WEF45
{
  Push(pp_SUPER_dash_BOX); // SUPER-BOX
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  IEXTRACT(); // IEXTRACT
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp_TVEHICLE); // TVEHICLE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  INIT_dash_ICONLIST(); // INIT-ICONLIST
}


// ================================================
// 0xef61: WORD 'WEF63' codep=0x224c wordp=0xef63 params=0 returns=1
// ================================================

void WEF63() // WEF63
{
  Push(Read16(0x63ef+WE7EF.offset)); // WE7EF<IFIELD> @
  Push(Read16(regsp)); // DUP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+WE7F4.offset)); // WE7F4<IFIELD> @
  _st_(); // <
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    SWAP(); // SWAP
    Push(-Pop()); //  NEGATE
    Push(0x63ef+WE7F4.offset); // WE7F4<IFIELD>
    _plus__ex__2(); // +!_2
  } else
  {
    SWAP(); // SWAP
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef8d: WORD 'WEF8F' codep=0x224c wordp=0xef8f
// ================================================

void WEF8F() // WEF8F
{
  IOPEN(); // IOPEN
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    IEXTRACT(); // IEXTRACT
    Push2Words("*STARSHIP-HOLD");
    _gt_C_plus_S(); // >C+S
    IOPEN(); // IOPEN
    CDROP(); // CDROP
    _gt_BOX(); // >BOX
    ICLOSE(); // ICLOSE
  }
  ICLOSE(); // ICLOSE
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    Push(Pop() * Read16(0x63ef+INST_dash_QTY.offset)); //  INST-QTY<IFIELD> @ *
    Push(0x000a);
    U_star_(); // U*
    CDROP(); // CDROP
  } else
  {
    Push2Words("NULL");
  }
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefe9: WORD 'WEFEB' codep=0x224c wordp=0xefeb params=0 returns=0
// ================================================

void WEFEB() // WEFEB
{
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) return;
    WEF8F(); // WEF8F
    IDELETE(); // IDELETE
  }
}


// ================================================
// 0xeffd: WORD 'WEFFF' codep=0x224c wordp=0xefff params=0 returns=2
// ================================================

void WEFFF() // WEFFF
{
  WE8DF(); // WE8DF
  WEA3F(); // WEA3F
  Push(-2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  CTINIT(); // CTINIT
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  WEF63(); // WEF63
  if (Pop() != 0)
  {
    WEEFD(); // WEEFD
    IOPEN(); // IOPEN
    WEFEB(); // WEFEB
    ICLOSE(); // ICLOSE
    Push(0);
    Push(0x63ef+WE7EF.offset); // WE7EF<IFIELD>
    Store_3(); // !_3
  } else
  {
    Push(Read16(pp_IsTV)); // ?TV @
    if (Pop() != 0)
    {
      PRINT("NOT ENOUGH ROOM IN SHIP HOLD. TO", 32); // (.")
      GCR(); // GCR
      PRINT("TRANSFER FROM TERRAIN VEHICLE", 29); // (.")
      GCR(); // GCR
      PRINT("EXIT AND DROP SOMETHING.", 24); // (.")
      Push(0x09c4);
      WEC5B(); // WEC5B
    }
  }
  Push(0x05dc);
  MS(); // MS
  ICLOSE(); // ICLOSE
  WEF45(); // WEF45
}


// ================================================
// 0xf0a3: WORD 'WF0A5' codep=0x224c wordp=0xf0a5 params=0 returns=0
// ================================================

void WF0A5() // WF0A5
{
  WE90D(); // WE90D
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  OFF(); // OFF
  _gt_1ICONFONT(); // >1ICONFONT
  Push(pp_MOVED); // MOVED
  OFF(); // OFF
  Push(0xce3c); // '8X8CO'
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(8);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1);
  Push(Read16(regsp)); // DUP
  Push(pp_XWLD_c_XPIX + 2); // XWLD:XPIX 2+
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX + 2); // YWLD:YPIX 2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf0e1: WORD 'WF0E3' codep=0x224c wordp=0xf0e3
// ================================================

void WF0E3() // WF0E3
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  DrawBACKGROUND(); // .BACKGROUND
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xf0f7: WORD 'WF0F9' codep=0x224c wordp=0xf0f9 params=0 returns=0
// ================================================

void WF0F9() // WF0F9
{
  Push(Read16(pp_XVIS) + 0x000e); // XVIS @ 0x000e +
  Push(Read16(pp_YVIS) + 0x0016); // YVIS @ 0x0016 +
  Push(Read16(pp_XVIS) + 0x0016); // XVIS @ 0x0016 +
  Push(Read16(pp_YVIS) + 0x0029); // YVIS @ 0x0029 +
  StoreVISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xf125: WORD 'EYECON' codep=0x1d29 wordp=0xf130
// ================================================
// 0xf130: db 0x00 0x42 0x99 0x99 0x42 0x00 ' B  B '

// ================================================
// 0xf136: WORD 'WF138' codep=0x224c wordp=0xf138 params=0 returns=0
// ================================================

void WF138() // WF138
{
  unsigned short int a, b;
  Push(Read16(pp_EYEXY + 2)); // EYEXY 2+ @
  Push(Read16(pp_XVIS)); // XVIS @
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() + 0x0016); //  0x0016 +
  MIN(); // MIN
  Push(a + 0x000e); // R> 0x000e +
  MAX(); // MAX
  Push(pp_EYEXY + 2); // EYEXY 2+
  _st__ex__gt_(); // <!>
  Push(Read16(pp_EYEXY)); // EYEXY @
  Push(Read16(pp_YVIS)); // YVIS @
  Push(Read16(regsp)); // DUP
  b = Pop(); // >R
  Push(Pop() + 0x0024); //  0x0024 +
  MIN(); // MIN
  Push(b + 0x0016); // R> 0x0016 +
  MAX(); // MAX
  Push(pp_EYEXY); // EYEXY
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf182: WORD 'WF184' codep=0x224c wordp=0xf184
// ================================================

void WF184() // WF184
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(6);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(8);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  Push(pp_EYECON); // EYECON
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  WE9D3(); // WE9D3
  _2DUP(); // 2DUP
  Push(pp_EYEXY); // EYEXY
  _st_D_ex__gt_(); // <D!>
  WLD_gt_SCR(); // WLD>SCR
  Push(Pop() + 0x004e); //  0x004e +
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(Pop() + 4); //  4 +
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf1b8: WORD 'WF1BA' codep=0x224c wordp=0xf1ba params=0 returns=2
// ================================================

void WF1BA() // WF1BA
{
  unsigned short int i, imax;

  i = 0;
  imax = 0x000b;
  do // (DO)
  {
    BLT(); // BLT
    Push(0x0032);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf1d0: WORD 'WF1D2' codep=0x224c wordp=0xf1d2 params=0 returns=2
// ================================================

void WF1D2() // WF1D2
{
  unsigned short int i, imax;
  BEEPON(); // BEEPON
  Push(0x0064);
  Push(Read16(regsp)); // DUP

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    Push(Pop() + 0x00c8); //  0x00c8 +
    RRND(); // RRND
    TONE(); // TONE
    Push(2);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf1fa: WORD 'WF1FC' codep=0x224c wordp=0xf1fc
// ================================================

void WF1FC() // WF1FC
{
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _st__ex__gt_(); // <!>
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  WF184(); // WF184
  WF1BA(); // WF1BA
  do
  {
    XYSCAN(); // XYSCAN
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      CLICK(); // CLICK
      BLT(); // BLT
      Push(pp_EYEXY + 2); // EYEXY 2+
      _st__plus__ex__gt_(); // <+!>
      Push(pp_EYEXY); // EYEXY
      _st__plus__ex__gt_(); // <+!>
      WF138(); // WF138
      Push(pp_EYEXY); // EYEXY
      _2_at_(); // 2@
      WLD_gt_SCR(); // WLD>SCR
      Push(Pop() + 0x004e); //  0x004e +
      Push(pp_YBLT); // YBLT
      _st__ex__gt_(); // <!>
      Push(Pop() + 4); //  4 +
      Push(pp_XBLT); // XBLT
      _st__ex__gt_(); // <!>
      BLT(); // BLT
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
}


// ================================================
// 0xf24c: WORD 'WF24E' codep=0x224c wordp=0xf24e
// ================================================

void WF24E() // WF24E
{
  Push(Read16(pp_NCRS)==4?1:0); // NCRS @ 4 =
  if (Pop() != 0)
  {
    WF1D2(); // WF1D2
  }
  GetCRS(); // @CRS
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_AT(); // ?ICONS-AT
  WEA67(); // WEA67
  Push(0xcd7c); // '?TALK'
  MODULE(); // MODULE
  StoreCRS(); // !CRS
}


// ================================================
// 0xf274: WORD 'WALK&TALK' codep=0x224c wordp=0xf282
// ================================================
// entry

void WALK_and_TALK() // WALK&TALK
{
  WF1FC(); // WF1FC
  GetCRS(); // @CRS
  WE8DF(); // WE8DF
  WF24E(); // WF24E
  StoreCRS(); // !CRS
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
}


// ================================================
// 0xf294: WORD 'WF296' codep=0x224c wordp=0xf296
// ================================================

void WF296() // WF296
{
  unsigned short int a;
  Push(Read16(pp_COLOR)); // COLOR @
  a = Pop(); // >R
  StoreCOLOR(); // !COLOR
  WE9D3(); // WE9D3
  WLD_gt_SCR(); // WLD>SCR
  SWAP(); // SWAP
  Push(Pop() + 8); //  8 +
  SWAP(); // SWAP
  Push(Pop() + 0x0049); //  0x0049 +
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  SWAP(); // SWAP
  Push(Pop() + 8); //  8 +
  SWAP(); // SWAP
  Push(Pop() + 0x0049); //  0x0049 +
  LLINE(); // LLINE
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf2cc: WORD 'WF2CE' codep=0x224c wordp=0xf2ce
// ================================================

void WF2CE() // WF2CE
{
  if (Pop() != 0)
  {
    GetColor(RED);
  } else
  {
    GetColor(BLUE);
  }
  WF296(); // WF296
}


// ================================================
// 0xf2de: WORD 'TV-DISP' codep=0x224c wordp=0xf2ea
// ================================================
// entry

void TV_dash_DISP() // TV-DISP
{
  DCLIPSET(); // DCLIPSET
  _gt_DISPLAY(); // >DISPLAY
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("ACTIVATING TERRAIN VEHICLE");
  DrawTTY(); // .TTY
  Push2Words("0.");
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _1_dot_5_ex_(); // 1.5!
  Push(pp_IsNEW); // ?NEW
  ON_3(); // ON_3
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(pp_WEA3B); // WEA3B
  OFF(); // OFF
  Push2Words("0.");
  Push(pp_NCRS); // NCRS
  _st__ex__gt_(); // <!>
  Push(pp_OCRS); // OCRS
  _st__ex__gt_(); // <!>
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  Push(0x0014);
  Push(pp_LOCRADIUS); // LOCRADIUS
  _st__ex__gt_(); // <!>
  WF0F9(); // WF0F9
  WF0A5(); // WF0A5
  Push2Words("0.");
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex_(); // 1.5!
  Push(0xcf62); // '?POPULA'
  MODULE(); // MODULE
  WEEAB(); // WEEAB
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _st_D_ex__gt_(); // <D!>
  ORGLIST(); // ORGLIST
  TV_dash_SETUP(); // TV-SETUP
  WF0E3(); // WF0E3
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf367: WORD 'TV-CLEANU' codep=0x224c wordp=0xf375 params=0 returns=2
// ================================================
// entry

void TV_dash_CLEANU() // TV-CLEANU
{
  WEFFF(); // WEFFF
}


// ================================================
// 0xf379: WORD 'WF37B' codep=0x224c wordp=0xf37b params=1 returns=0
// ================================================

void WF37B() // WF37B
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(3);
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(7);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(1);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  StoreCRS(); // !CRS
}


// ================================================
// 0xf3a9: WORD 'WF3AB' codep=0x224c wordp=0xf3ab params=0 returns=0
// ================================================
// orphan

void WF3AB() // WF3AB
{
  Push(Read16(pp_WTOP)); // WTOP @
  WF37B(); // WF37B
}


// ================================================
// 0xf3b3: WORD 'WF3B5' codep=0x224c wordp=0xf3b5 params=0 returns=1
// ================================================

void WF3B5() // WF3B5
{
  Push2Words("*SHIP");
  IsICON_dash_IADDR(); // ?ICON-IADDR
  Pop(); // DROP
  Push(Read16(pp_ILOCAL) - 1); // ILOCAL @ 1-
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0);
  } else
  {
    Push(-1);
  }
  Push(Pop() + (Read16(pp_ILOCAL) - 1)); //  ILOCAL @ 1- +
  Push(pp_WEAPON_dash_); // WEAPON-
  _st__plus__ex__gt_(); // <+!>
  WE8DF(); // WE8DF
  WEA3F(); // WEA3F
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(1);
  WE9B3(); // WE9B3
  PRINT("STUNNER", 7); // (.")
  Push(0);
  Push(2);
  WE9B3(); // WE9B3
  PRINT("LASER", 5); // (.")
  Push(5);
  Push(6);
  WE9B3(); // WE9B3
  PRINT("CHOOSE WEAPON ^\\  RETURN= AIM", 29); // (.")
  Push(Read16(pp_WTOP) - 7); // WTOP @ 7 -
  WF37B(); // WF37B
}


// ================================================
// 0xf433: WORD 'WF435' codep=0x1d29 wordp=0xf435
// ================================================
// 0xf435: db 0x3a 0x20 ': '

// ================================================
// 0xf437: WORD 'WF439' codep=0x224c wordp=0xf439 params=0 returns=0
// ================================================

void WF439() // WF439
{
  Push(Read16(pp_WTOP) - Read16(pp_WF435) * 7); // WTOP @ WF435 @ 7 * -
  WF37B(); // WF37B
}


// ================================================
// 0xf44b: WORD 'WF44D' codep=0x224c wordp=0xf44d params=1 returns=0
// ================================================

void WF44D() // WF44D
{
  WF439(); // WF439
  Push(pp_WF435); // WF435
  _plus__ex__2(); // +!_2
  Push(pp_WF435); // WF435
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  Push(1);
  MAX(); // MAX
  Push(2);
  MIN(); // MIN
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
  WF439(); // WF439
}


// ================================================
// 0xf469: WORD 'DO.WEAPON' codep=0x224c wordp=0xf477
// ================================================
// entry

void DO_dot_WEAPON() // DO.WEAPON
{
  unsigned short int a, b;
  WF3B5(); // WF3B5
  Push(1);
  Push(pp_WF435); // WF435
  _st__ex__gt_(); // <!>
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  a = Pop(); // >R
  b = Pop(); // >R
  do
  {
    XYSCAN(); // XYSCAN
    Push(1);
    Push(0);
    _2OVER(); // 2OVER
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      Push(-1);
      WF44D(); // WF44D
    } else
    {
      Push(-1);
      Push(0);
      _2OVER(); // 2OVER
      D_eq_(); // D=
      if (Pop() != 0)
      {
        Pop(); Pop(); // 2DROP
        Push(1);
        WF44D(); // WF44D
      } else
      {
        Pop(); // DROP
        Pop(); // DROP
      }
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  Push(Read16(pp_WF435) - 1); // WF435 @ 1-
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(0x63ef+WE7EA.offset); // WE7EA<IFIELD>
  C_ex_(); // C!
  Push((Pop() + 1) * 0xfed4); //  1+ 0xfed4 *
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  WF1FC(); // WF1FC
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(pp_WEAPXY); // WEAPXY
  _st_D_ex__gt_(); // <D!>
  WF2CE(); // WF2CE
  WF439(); // WF439
  Push(b); // R>
  Push(a); // R>
  Push(pp_EYEXY); // EYEXY
  _st_D_ex__gt_(); // <D!>
}

// 0xf4f7: db 0x54 0x2e 0x56 0x2e 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x52 0x41 0x47 0x45 0x20 0x46 0x4f 0x52 0x20 0x46 0x55 0x4e 0x43 0x54 0x49 0x4f 0x4e 0x31 0x32 0x31 0x31 0xef 0x2a 0xb3 0xe0 0x90 0x16 0x49 0x54 0x45 0x4d 0x53 0x31 0x36 0x37 0x32 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'T.V.___________________________________________RAGE FOR FUNCTION1211 *    ITEMS1672______________________ '

