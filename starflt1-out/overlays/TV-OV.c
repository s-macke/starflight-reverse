// ====== OVERLAY 'TV-OV' ======
// store offset = 0xe7d0
// overlay size   = 0x0d90

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xe7e6  codep:0x2214 parp:0xe7e6 size:0x0002 C-string:'UNK_0xe7e6'
//      UNK_0xe7ea  codep:0x744d parp:0xe7ea size:0x0003 C-string:'UNK_0xe7ea'
//      UNK_0xe7ef  codep:0x744d parp:0xe7ef size:0x0003 C-string:'UNK_0xe7ef'
//      UNK_0xe7f4  codep:0x744d parp:0xe7f4 size:0x0003 C-string:'UNK_0xe7f4'
//      UNK_0xe7f9  codep:0x224c parp:0xe7f9 size:0x000c C-string:'UNK_0xe7f9'
//      UNK_0xe807  codep:0x224c parp:0xe807 size:0x000c C-string:'UNK_0xe807'
//      UNK_0xe815  codep:0x224c parp:0xe815 size:0x0012 C-string:'UNK_0xe815'
//      UNK_0xe829  codep:0x224c parp:0xe829 size:0x0010 C-string:'UNK_0xe829'
//      UNK_0xe83b  codep:0x224c parp:0xe83b size:0x002c C-string:'UNK_0xe83b'
//      UNK_0xe869  codep:0x744d parp:0xe869 size:0x0003 C-string:'UNK_0xe869'
//      UNK_0xe86e  codep:0x744d parp:0xe86e size:0x0003 C-string:'UNK_0xe86e'
//      UNK_0xe873  codep:0x224c parp:0xe873 size:0x0018 C-string:'UNK_0xe873'
//      UNK_0xe88d  codep:0x224c parp:0xe88d size:0x0016 C-string:'UNK_0xe88d'
//      UNK_0xe8a5  codep:0x224c parp:0xe8a5 size:0x0018 C-string:'UNK_0xe8a5'
//      UNK_0xe8bf  codep:0x224c parp:0xe8bf size:0x0008 C-string:'UNK_0xe8bf'
//      UNK_0xe8c9  codep:0x224c parp:0xe8c9 size:0x0014 C-string:'UNK_0xe8c9'
//      UNK_0xe8df  codep:0x224c parp:0xe8df size:0x0014 C-string:'UNK_0xe8df'
//      UNK_0xe8f5  codep:0x224c parp:0xe8f5 size:0x0016 C-string:'UNK_0xe8f5'
//      UNK_0xe90d  codep:0x224c parp:0xe90d size:0x0014 C-string:'UNK_0xe90d'
//      UNK_0xe923  codep:0x224c parp:0xe923 size:0x001e C-string:'UNK_0xe923'
//      UNK_0xe943  codep:0x224c parp:0xe943 size:0x0026 C-string:'UNK_0xe943'
//      UNK_0xe96b  codep:0x224c parp:0xe96b size:0x0022 C-string:'UNK_0xe96b'
//      UNK_0xe98f  codep:0x224c parp:0xe98f size:0x0022 C-string:'UNK_0xe98f'
//      UNK_0xe9b3  codep:0x224c parp:0xe9b3 size:0x001e C-string:'UNK_0xe9b3'
//      UNK_0xe9d3  codep:0x224c parp:0xe9d3 size:0x0010 C-string:'UNK_0xe9d3'
//      UNK_0xe9e5  codep:0x224c parp:0xe9e5 size:0x000a C-string:'UNK_0xe9e5'
//      UNK_0xe9f1  codep:0x224c parp:0xe9f1 size:0x0048 C-string:'UNK_0xe9f1'
//      UNK_0xea3b  codep:0x1d29 parp:0xea3b size:0x0002 C-string:'UNK_0xea3b'
//      UNK_0xea3f  codep:0x224c parp:0xea3f size:0x0026 C-string:'UNK_0xea3f'
//      UNK_0xea67  codep:0x224c parp:0xea67 size:0x0028 C-string:'UNK_0xea67'
//      UNK_0xea91  codep:0x224c parp:0xea91 size:0x0082 C-string:'UNK_0xea91'
//      UNK_0xeb15  codep:0x224c parp:0xeb15 size:0x0014 C-string:'UNK_0xeb15'
//      UNK_0xeb2b  codep:0x224c parp:0xeb2b size:0x0078 C-string:'UNK_0xeb2b'
//      UNK_0xeba5  codep:0x224c parp:0xeba5 size:0x004c C-string:'UNK_0xeba5'
//      UNK_0xebf3  codep:0x224c parp:0xebf3 size:0x0028 C-string:'UNK_0xebf3'
//      UNK_0xec1d  codep:0x224c parp:0xec1d size:0x000c C-string:'UNK_0xec1d'
//      UNK_0xec2b  codep:0x224c parp:0xec2b size:0x0026 C-string:'UNK_0xec2b'
//      UNK_0xec53  codep:0x224c parp:0xec53 size:0x0006 C-string:'UNK_0xec53'
//      UNK_0xec5b  codep:0x224c parp:0xec5b size:0x0024 C-string:'UNK_0xec5b'
//       FUNCTIONS  codep:0x1d29 parp:0xec8d size:0x002d C-string:'FUNCTIONS'
//      UNK_0xecbc  codep:0x1d29 parp:0xecbc size:0x0006 C-string:'UNK_0xecbc'
//      UNK_0xecc4  codep:0x224c parp:0xecc4 size:0x0026 C-string:'UNK_0xecc4'
//      UNK_0xecec  codep:0x224c parp:0xecec size:0x0006 C-string:'UNK_0xecec'
//      UNK_0xecf4  codep:0x224c parp:0xecf4 size:0x001c C-string:'UNK_0xecf4'
//      UNK_0xed12  codep:0x224c parp:0xed12 size:0x0066 C-string:'UNK_0xed12'
//         HEAVEHO  codep:0x224c parp:0xed84 size:0x000a C-string:'HEAVEHO'
//      UNK_0xed90  codep:0x2214 parp:0xed90 size:0x0002 C-string:'UNK_0xed90'
//      UNK_0xed94  codep:0x73ea parp:0xed94 size:0x0006 C-string:'UNK_0xed94'
//      UNK_0xed9c  codep:0x224c parp:0xed9c size:0x002c C-string:'UNK_0xed9c'
//        TV-SETUP  codep:0x224c parp:0xedd5 size:0x000e C-string:'TV_dash_SETUP'
//      UNK_0xede5  codep:0x224c parp:0xede5 size:0x0010 C-string:'UNK_0xede5'
//      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x0026 C-string:'UNK_0xedf7'
//      UNK_0xee1f  codep:0x224c parp:0xee1f size:0x000a C-string:'UNK_0xee1f'
//      UNK_0xee2b  codep:0x224c parp:0xee2b size:0x000c C-string:'UNK_0xee2b'
//      UNK_0xee39  codep:0x224c parp:0xee39 size:0x0070 C-string:'UNK_0xee39'
//      UNK_0xeeab  codep:0x224c parp:0xeeab size:0x0050 C-string:'UNK_0xeeab'
//      UNK_0xeefd  codep:0x224c parp:0xeefd size:0x0046 C-string:'UNK_0xeefd'
//      UNK_0xef45  codep:0x224c parp:0xef45 size:0x001c C-string:'UNK_0xef45'
//      UNK_0xef63  codep:0x224c parp:0xef63 size:0x002a C-string:'UNK_0xef63'
//      UNK_0xef8f  codep:0x224c parp:0xef8f size:0x005a C-string:'UNK_0xef8f'
//      UNK_0xefeb  codep:0x224c parp:0xefeb size:0x0012 C-string:'UNK_0xefeb'
//      UNK_0xefff  codep:0x224c parp:0xefff size:0x00a4 C-string:'UNK_0xefff'
//      UNK_0xf0a5  codep:0x224c parp:0xf0a5 size:0x003c C-string:'UNK_0xf0a5'
//      UNK_0xf0e3  codep:0x224c parp:0xf0e3 size:0x0014 C-string:'UNK_0xf0e3'
//      UNK_0xf0f9  codep:0x224c parp:0xf0f9 size:0x002c C-string:'UNK_0xf0f9'
//          EYECON  codep:0x1d29 parp:0xf130 size:0x0006 C-string:'EYECON'
//      UNK_0xf138  codep:0x224c parp:0xf138 size:0x004a C-string:'UNK_0xf138'
//      UNK_0xf184  codep:0x224c parp:0xf184 size:0x0034 C-string:'UNK_0xf184'
//      UNK_0xf1ba  codep:0x224c parp:0xf1ba size:0x0016 C-string:'UNK_0xf1ba'
//      UNK_0xf1d2  codep:0x224c parp:0xf1d2 size:0x0028 C-string:'UNK_0xf1d2'
//      UNK_0xf1fc  codep:0x224c parp:0xf1fc size:0x0050 C-string:'UNK_0xf1fc'
//      UNK_0xf24e  codep:0x224c parp:0xf24e size:0x0026 C-string:'UNK_0xf24e'
//       WALK&TALK  codep:0x224c parp:0xf282 size:0x0012 C-string:'WALK_and_TALK'
//      UNK_0xf296  codep:0x224c parp:0xf296 size:0x0036 C-string:'UNK_0xf296'
//      UNK_0xf2ce  codep:0x224c parp:0xf2ce size:0x0010 C-string:'UNK_0xf2ce'
//         TV-DISP  codep:0x224c parp:0xf2ea size:0x007d C-string:'TV_dash_DISP'
//       TV-CLEANU  codep:0x224c parp:0xf375 size:0x0004 C-string:'TV_dash_CLEANU'
//      UNK_0xf37b  codep:0x224c parp:0xf37b size:0x002e C-string:'UNK_0xf37b'
//      UNK_0xf3ab  codep:0x224c parp:0xf3ab size:0x0008 C-string:'UNK_0xf3ab'
//      UNK_0xf3b5  codep:0x224c parp:0xf3b5 size:0x007e C-string:'UNK_0xf3b5'
//      UNK_0xf435  codep:0x1d29 parp:0xf435 size:0x0002 C-string:'UNK_0xf435'
//      UNK_0xf439  codep:0x224c parp:0xf439 size:0x0012 C-string:'UNK_0xf439'
//      UNK_0xf44d  codep:0x224c parp:0xf44d size:0x001c C-string:'UNK_0xf44d'
//       DO.WEAPON  codep:0x224c parp:0xf477 size:0x0000 C-string:'DO_dot_WEAPON'

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
extern const unsigned short int pp__ro_PLANET; // (PLANET
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
const unsigned short int pp_UNK_0xea3b = 0xea3b; // UNK_0xea3b size: 2
// {0x3a, 0x20}

const unsigned short int pp_FUNCTIONS = 0xec8d; // FUNCTIONS size: 45
// {0x06, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x13, 0x0c, 0x57, 0x0c, 0x13, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16, 0x4c, 0x22, 0xf0, 0x0d, 0x5f, 0x12, 0xb4, 0x0d, 0x2d, 0x12, 0x90, 0x0e, 0x3e, 0x13, 0x90, 0x16}

const unsigned short int pp_UNK_0xecbc = 0xecbc; // UNK_0xecbc size: 6
// {0x56, 0x3a, 0x20, 0x20, 0x05, 0x41}

const unsigned short int pp_EYECON = 0xf130; // EYECON size: 6
// {0x00, 0x42, 0x99, 0x99, 0x42, 0x00}

const unsigned short int pp_UNK_0xf435 = 0xf435; // UNK_0xf435 size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xe7e6 = 0xe7e6; // UNK_0xe7e6
const unsigned short int cc_UNK_0xed90 = 0xed90; // UNK_0xed90


// 0xe7e2: db 0xd3 0x00 '  '

// ================================================
// 0xe7e4: WORD 'UNK_0xe7e6' codep=0x2214 parp=0xe7e6
// ================================================
// orphan
// 0xe7e6: dw 0x0044

// ================================================
// 0xe7e8: WORD 'UNK_0xe7ea' codep=0x744d parp=0xe7ea
// ================================================
IFieldType UNK_0xe7ea = {TVEHICLEIDX, 0x11, 0x01};

// ================================================
// 0xe7ed: WORD 'UNK_0xe7ef' codep=0x744d parp=0xe7ef
// ================================================
IFieldType UNK_0xe7ef = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xe7f2: WORD 'UNK_0xe7f4' codep=0x744d parp=0xe7f4
// ================================================
IFieldType UNK_0xe7f4 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe7f7: WORD 'UNK_0xe7f9' codep=0x224c parp=0xe7f9 params=1 returns=2
// ================================================
// orphan

void UNK_0xe7f9() // UNK_0xe7f9
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  PICK(); // PICK
  Push(a); // R>
  PICK(); // PICK
}


// ================================================
// 0xe805: WORD 'UNK_0xe807' codep=0x224c parp=0xe807 params=2 returns=2
// ================================================
// orphan

void UNK_0xe807() // UNK_0xe807
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xe813: WORD 'UNK_0xe815' codep=0x224c parp=0xe815 params=0 returns=0
// ================================================
// orphan

void UNK_0xe815() // UNK_0xe815
{
  Push(Read16(cc_UNK_0xe7e6)); // UNK_0xe7e6
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xe827: WORD 'UNK_0xe829' codep=0x224c parp=0xe829 params=1 returns=0
// ================================================

void UNK_0xe829() // UNK_0xe829
{
  Push(Read16(pp_WTOP)); // WTOP @
  OVER(); // OVER
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  LLINE(); // LLINE
}


// ================================================
// 0xe839: WORD 'UNK_0xe83b' codep=0x224c parp=0xe83b params=0 returns=0
// ================================================

void UNK_0xe83b() // UNK_0xe83b
{
  Push(0x0016);
  UNK_0xe829(); // UNK_0xe829
  Push(0x002a);
  UNK_0xe829(); // UNK_0xe829
  Push(0x0042);
  UNK_0xe829(); // UNK_0xe829
  Push(0x0056);
  UNK_0xe829(); // UNK_0xe829
  Push(0x006a);
  UNK_0xe829(); // UNK_0xe829
  Push(0x0086);
  UNK_0xe829(); // UNK_0xe829
  Push(0x009e);
  UNK_0xe829(); // UNK_0xe829
}


// ================================================
// 0xe867: WORD 'UNK_0xe869' codep=0x744d parp=0xe869
// ================================================
IFieldType UNK_0xe869 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xe86c: WORD 'UNK_0xe86e' codep=0x744d parp=0xe86e
// ================================================
IFieldType UNK_0xe86e = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xe871: WORD 'UNK_0xe873' codep=0x224c parp=0xe873 params=1 returns=0
// ================================================

void UNK_0xe873() // UNK_0xe873
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
// 0xe88b: WORD 'UNK_0xe88d' codep=0x224c parp=0xe88d params=0 returns=1
// ================================================

void UNK_0xe88d() // UNK_0xe88d
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
// 0xe8a3: WORD 'UNK_0xe8a5' codep=0x224c parp=0xe8a5 params=0 returns=1
// ================================================

void UNK_0xe8a5() // UNK_0xe8a5
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xe86e.offset); // UNK_0xe86e<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+UNK_0xe869.offset)&0xFF); // UNK_0xe869<IFIELD> C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xe8bd: WORD 'UNK_0xe8bf' codep=0x224c parp=0xe8bf params=0 returns=0
// ================================================

void UNK_0xe8bf() // UNK_0xe8bf
{
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe8c7: WORD 'UNK_0xe8c9' codep=0x224c parp=0xe8c9 params=0 returns=0
// ================================================

void UNK_0xe8c9() // UNK_0xe8c9
{
  Push(0x0083);
  Push(0x0053);
  Push(9);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe8dd: WORD 'UNK_0xe8df' codep=0x224c parp=0xe8df params=0 returns=0
// ================================================

void UNK_0xe8df() // UNK_0xe8df
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xe8bf(); // UNK_0xe8bf
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe8f3: WORD 'UNK_0xe8f5' codep=0x224c parp=0xe8f5 params=0 returns=0
// ================================================

void UNK_0xe8f5() // UNK_0xe8f5
{
  Push(0x00c1);
  Push(0x0053);
  Push(8);
  Push(0x0012);
  WINDOW(); // WINDOW
  UNK_0xe8bf(); // UNK_0xe8bf
}


// ================================================
// 0xe90b: WORD 'UNK_0xe90d' codep=0x224c parp=0xe90d params=0 returns=0
// ================================================

void UNK_0xe90d() // UNK_0xe90d
{
  Push(0x00bf);
  Push(3);
  Push(0x0011);
  Push(0x0012);
  WINDOW(); // WINDOW
  UNK_0xe8bf(); // UNK_0xe8bf
}


// ================================================
// 0xe921: WORD 'UNK_0xe923' codep=0x224c parp=0xe923 params=0 returns=0
// ================================================

void UNK_0xe923() // UNK_0xe923
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
// 0xe941: WORD 'UNK_0xe943' codep=0x224c parp=0xe943 params=2 returns=2
// ================================================

void UNK_0xe943() // UNK_0xe943
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
// 0xe969: WORD 'UNK_0xe96b' codep=0x224c parp=0xe96b params=1 returns=0
// ================================================

void UNK_0xe96b() // UNK_0xe96b
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
// 0xe98d: WORD 'UNK_0xe98f' codep=0x224c parp=0xe98f params=1 returns=0
// ================================================

void UNK_0xe98f() // UNK_0xe98f
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
// 0xe9b1: WORD 'UNK_0xe9b3' codep=0x224c parp=0xe9b3 params=2 returns=0
// ================================================

void UNK_0xe9b3() // UNK_0xe9b3
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
// 0xe9d1: WORD 'UNK_0xe9d3' codep=0x224c parp=0xe9d3 params=0 returns=2
// ================================================

void UNK_0xe9d3() // UNK_0xe9d3
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe9e3: WORD 'UNK_0xe9e5' codep=0x224c parp=0xe9e5 params=2 returns=0
// ================================================
// orphan

void UNK_0xe9e5() // UNK_0xe9e5
{
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xe9ef: WORD 'UNK_0xe9f1' codep=0x224c parp=0xe9f1 params=0 returns=0
// ================================================

void UNK_0xe9f1() // UNK_0xe9f1
{
  UNK_0xe88d(); // UNK_0xe88d
  UNK_0xe8a5(); // UNK_0xe8a5
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  UNK_0xe9d3(); // UNK_0xe9d3
  UNK_0xe943(); // UNK_0xe943
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
  UNK_0xe98f(); // UNK_0xe98f
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
  UNK_0xe96b(); // UNK_0xe96b
}


// ================================================
// 0xea39: WORD 'UNK_0xea3b' codep=0x1d29 parp=0xea3b
// ================================================
// 0xea3b: db 0x3a 0x20 ': '

// ================================================
// 0xea3d: WORD 'UNK_0xea3f' codep=0x224c parp=0xea3f params=0 returns=0
// ================================================

void UNK_0xea3f() // UNK_0xea3f
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
  UNK_0xe9b3(); // UNK_0xe9b3
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xea65: WORD 'UNK_0xea67' codep=0x224c parp=0xea67 params=0 returns=0
// ================================================

void UNK_0xea67() // UNK_0xea67
{
  unsigned short int i, imax;
  Push(0x2001);
  PAD(); // PAD
  _st__ex__gt_(); // <!>
  Push(Read16(pp_UNK_0xea3b)); // UNK_0xea3b @
  Push(Read16(pp_WLINES)); // WLINES @
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    PAD(); // PAD
    WLINE_dash_UP(); // WLINE-UP
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_UNK_0xea3b); // UNK_0xea3b
  OFF(); // OFF
}


// ================================================
// 0xea8f: WORD 'UNK_0xea91' codep=0x224c parp=0xea91 params=0 returns=0
// ================================================

void UNK_0xea91() // UNK_0xea91
{
  unsigned short int i, imax;
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
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
// 0xeb13: WORD 'UNK_0xeb15' codep=0x224c parp=0xeb15 params=0 returns=0
// ================================================

void UNK_0xeb15() // UNK_0xeb15
{
  UNK_0xe90d(); // UNK_0xe90d
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(-1);
  UNK_0xe9b3(); // UNK_0xe9b3
  GetColor(BLACK);
  UNK_0xe873(); // UNK_0xe873
  UNK_0xe9f1(); // UNK_0xe9f1
}


// ================================================
// 0xeb29: WORD 'UNK_0xeb2b' codep=0x224c parp=0xeb2b params=0 returns=0
// ================================================

void UNK_0xeb2b() // UNK_0xeb2b
{
  UNK_0xe8f5(); // UNK_0xe8f5
  UNK_0xea3f(); // UNK_0xea3f
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  UNK_0xea91(); // UNK_0xea91
  _gt_2FONT(); // >2FONT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0);
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  Push(0);
  Push(2);
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("DATE  : ", 8); // (.")
  Push(0);
  Push(3);
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("ENERGY: ", 8); // (.")
  Push(0);
  Push(4);
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("EFF.  : ", 8); // (.")
  Push(0);
  Push(5);
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("CARGO : ", 8); // (.")
  Push(0);
  Push(6);
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("SHIP  : ", 8); // (.")
}


// ================================================
// 0xeba3: WORD 'UNK_0xeba5' codep=0x224c parp=0xeba5 params=0 returns=0
// ================================================

void UNK_0xeba5() // UNK_0xeba5
{
  UNK_0xe923(); // UNK_0xe923
  UNK_0xea3f(); // UNK_0xea3f
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  UNK_0xea91(); // UNK_0xea91
  UNK_0xe83b(); // UNK_0xe83b
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(-3);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(0);
  Push(0);
  UNK_0xe9b3(); // UNK_0xe9b3
  _gt_1FONT(); // >1FONT
  PRINT("MAPS MOVE CARGO LOOK SCAN WEAPON ICONS ", 39); // (.")
}


// ================================================
// 0xebf1: WORD 'UNK_0xebf3' codep=0x224c parp=0xebf3 params=0 returns=0
// ================================================

void UNK_0xebf3() // UNK_0xebf3
{
  UNK_0xe8c9(); // UNK_0xe8c9
  UNK_0xea3f(); // UNK_0xea3f
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  UNK_0xea91(); // UNK_0xea91
  _gt_2FONT(); // >2FONT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(0);
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("CREW VITALITY", 13); // (.")
}


// ================================================
// 0xec1b: WORD 'UNK_0xec1d' codep=0x224c parp=0xec1d params=0 returns=0
// ================================================

void UNK_0xec1d() // UNK_0xec1d
{
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xea3f(); // UNK_0xea3f
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  UNK_0xea91(); // UNK_0xea91
}


// ================================================
// 0xec29: WORD 'UNK_0xec2b' codep=0x224c parp=0xec2b
// ================================================

void UNK_0xec2b() // UNK_0xec2b
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
  UNK_0xeb15(); // UNK_0xeb15
  UNK_0xeb2b(); // UNK_0xeb2b
  UNK_0xebf3(); // UNK_0xebf3
  UNK_0xeba5(); // UNK_0xeba5
  UNK_0xec1d(); // UNK_0xec1d
}


// ================================================
// 0xec51: WORD 'UNK_0xec53' codep=0x224c parp=0xec53 params=0 returns=0
// ================================================
// orphan

void UNK_0xec53() // UNK_0xec53
{
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xea67(); // UNK_0xea67
}


// ================================================
// 0xec59: WORD 'UNK_0xec5b' codep=0x224c parp=0xec5b
// ================================================

void UNK_0xec5b() // UNK_0xec5b
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
// 0xec7f: WORD 'FUNCTIONS' codep=0x1d29 parp=0xec8d
// ================================================
// 0xec8d: db 0x06 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x13 0x0c 0x57 0x0c 0x13 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 0x4c 0x22 0xf0 0x0d 0x5f 0x12 0xb4 0x0d 0x2d 0x12 0x90 0x0e 0x3e 0x13 0x90 0x16 '          +   C   W   k      L"  _   -   >   '

// ================================================
// 0xecba: WORD 'UNK_0xecbc' codep=0x1d29 parp=0xecbc
// ================================================
// 0xecbc: db 0x56 0x3a 0x20 0x20 0x05 0x41 'V:   A'

// ================================================
// 0xecc2: WORD 'UNK_0xecc4' codep=0x224c parp=0xecc4 params=0 returns=1
// ================================================

void UNK_0xecc4() // UNK_0xecc4
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
// 0xecea: WORD 'UNK_0xecec' codep=0x224c parp=0xecec
// ================================================

void UNK_0xecec() // UNK_0xecec
{
  _dash_ICON(); // -ICON
  IDELETE(); // IDELETE
}


// ================================================
// 0xecf2: WORD 'UNK_0xecf4' codep=0x224c parp=0xecf4
// ================================================

void UNK_0xecf4() // UNK_0xecf4
{
  Push(pp_UNK_0xecbc); // UNK_0xecbc
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label2:
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  UNK_0xecec(); // UNK_0xecec
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed10: WORD 'UNK_0xed12' codep=0x224c parp=0xed12 params=0 returns=0
// ================================================

void UNK_0xed12() // UNK_0xed12
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_UNK_0xecbc); // UNK_0xecbc
  _1_dot_5_ex_(); // 1.5!
  Push(0);
  Push(pp_UNK_0xecbc + 4); // UNK_0xecbc 4 +
  _st__ex__gt_(); // <!>
  Push(0x000b);
  Push(0x000b);

  label4:
  Push(pp_SUPER_dash_BOX); // SUPER-BOX
  _1_dot_5_at_(); // 1.5@
  CI(); // CI
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  IsCLASS_slash_SPECIES(); // ?CLASS/SPECIES
  if (Pop() != 0)
  {
    UNK_0xecc4(); // UNK_0xecc4
    Push(Read16(pp_UNK_0xecbc + 4)); // UNK_0xecbc 4 + @
    OVER(); // OVER
    _st_(); // <
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp_UNK_0xecbc); // UNK_0xecbc
      _1_dot_5_ex_(); // 1.5!
      Push(pp_UNK_0xecbc + 4); // UNK_0xecbc 4 +
      _st__ex__gt_(); // <!>
    } else
    {
      Pop(); // DROP
    }
  }
  INEXT(); // INEXT
  goto label4;

  label1:
  Pop(); Pop(); // 2DROP
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed78: WORD 'HEAVEHO' codep=0x224c parp=0xed84
// ================================================
// entry

void HEAVEHO() // HEAVEHO
{
  Push(pp_IsCRITIC); // ?CRITIC
  ON_3(); // ON_3
  UNK_0xed12(); // UNK_0xed12
  UNK_0xecf4(); // UNK_0xecf4
}


// ================================================
// 0xed8e: WORD 'UNK_0xed90' codep=0x2214 parp=0xed90
// ================================================
// 0xed90: dw 0x7fff

// ================================================
// 0xed92: WORD 'UNK_0xed94' codep=0x73ea parp=0xed94
// ================================================
// orphan
LoadDataType UNK_0xed94 = {CREATUREIDX, 0x90, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xed9a: WORD 'UNK_0xed9c' codep=0x224c parp=0xed9c params=0 returns=0
// ================================================

void UNK_0xed9c() // UNK_0xed9c
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_XABS)); // XABS @
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  Push(Read16(pp_YABS)); // YABS @
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(Read16(cc_UNK_0xed90)); // UNK_0xed90
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
// 0xedc8: WORD 'TV-SETUP' codep=0x224c parp=0xedd5
// ================================================
// entry

void TV_dash_SETUP() // TV-SETUP
{
  UNK_0xec2b(); // UNK_0xec2b
  GetColor(DK_dash_BLUE);
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
  Push(pp_FUNCTIONS); // FUNCTIONS
  BLD_dash_CRS(); // BLD-CRS
}


// ================================================
// 0xede3: WORD 'UNK_0xede5' codep=0x224c parp=0xede5 params=0 returns=0
// ================================================

void UNK_0xede5() // UNK_0xede5
{
  IsNULL(); // ?NULL
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  Push2Words("0.");
  _gt_C(); // >C
}


// ================================================
// 0xedf5: WORD 'UNK_0xedf7' codep=0x224c parp=0xedf7
// ================================================

void UNK_0xedf7() // UNK_0xedf7
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
// 0xee1d: WORD 'UNK_0xee1f' codep=0x224c parp=0xee1f
// ================================================

void UNK_0xee1f() // UNK_0xee1f
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xedf7(); // UNK_0xedf7
}


// ================================================
// 0xee29: WORD 'UNK_0xee2b' codep=0x224c parp=0xee2b params=1 returns=0
// ================================================

void UNK_0xee2b() // UNK_0xee2b
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xe7f4.offset); // UNK_0xe7f4<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee37: WORD 'UNK_0xee39' codep=0x224c parp=0xee39
// ================================================

void UNK_0xee39() // UNK_0xee39
{
  UNK_0xee1f(); // UNK_0xee1f
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
    UNK_0xede5(); // UNK_0xede5
    ICLOSE(); // ICLOSE
    Push(pp_TV_dash_HOLD); // TV-HOLD
    Get_gt_C_plus_S(); // @>C+S
    _gt_BOX(); // >BOX
    Push(3);
    Push(0x63ef+UNK_0xe7ef.offset); // UNK_0xe7ef<IFIELD>
    _plus__ex__2(); // +!_2
    ICLOSE(); // ICLOSE
    Push(-3);
    UNK_0xee2b(); // UNK_0xee2b
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
      UNK_0xede5(); // UNK_0xede5
      Push(pp_TV_dash_HOLD); // TV-HOLD
      Get_gt_C_plus_S(); // @>C+S
      _gt_BOX(); // >BOX
      Push(1);
      Push(0x63ef+UNK_0xe7ef.offset); // UNK_0xe7ef<IFIELD>
      _plus__ex__2(); // +!_2
      ICLOSE(); // ICLOSE
      Push(-1);
      UNK_0xee2b(); // UNK_0xee2b
    }
    ICLOSE(); // ICLOSE
  }
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeea9: WORD 'UNK_0xeeab' codep=0x224c parp=0xeeab
// ================================================

void UNK_0xeeab() // UNK_0xeeab
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xed9c(); // UNK_0xed9c
  Push(0xc437); // probable 'ICON-PARM'
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
  Push(0xc437); // probable 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  ICLOSE(); // ICLOSE
  UNK_0xee39(); // UNK_0xee39
}


// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x224c parp=0xeefd params=0 returns=0
// ================================================

void UNK_0xeefd() // UNK_0xeefd
{
  Push(Read16(pp_IsTV)); // ?TV @
  if (Pop() == 0) return;
  PRINT("REFUELING TERRAIN VEHICLE ", 26); // (.")
  GCR(); // GCR
  PRINT("AND TRANSFERRING ALL CARGO", 26); // (.")
}


// ================================================
// 0xef43: WORD 'UNK_0xef45' codep=0x224c parp=0xef45 params=0 returns=0
// ================================================

void UNK_0xef45() // UNK_0xef45
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
// 0xef61: WORD 'UNK_0xef63' codep=0x224c parp=0xef63 params=0 returns=1
// ================================================

void UNK_0xef63() // UNK_0xef63
{
  Push(Read16(0x63ef+UNK_0xe7ef.offset)); // UNK_0xe7ef<IFIELD> @
  Push(Read16(regsp)); // DUP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+UNK_0xe7f4.offset)); // UNK_0xe7f4<IFIELD> @
  _st_(); // <
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    SWAP(); // SWAP
    Push(-Pop()); //  NEGATE
    Push(0x63ef+UNK_0xe7f4.offset); // UNK_0xe7f4<IFIELD>
    _plus__ex__2(); // +!_2
  } else
  {
    SWAP(); // SWAP
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef8d: WORD 'UNK_0xef8f' codep=0x224c parp=0xef8f
// ================================================

void UNK_0xef8f() // UNK_0xef8f
{
  IOPEN(); // IOPEN

  label2:
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  IEXTRACT(); // IEXTRACT
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
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
// 0xefe9: WORD 'UNK_0xefeb' codep=0x224c parp=0xefeb params=0 returns=0
// ================================================

void UNK_0xefeb() // UNK_0xefeb
{
  do
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) return;
    UNK_0xef8f(); // UNK_0xef8f
    IDELETE(); // IDELETE
  } while(1);
}


// ================================================
// 0xeffd: WORD 'UNK_0xefff' codep=0x224c parp=0xefff params=0 returns=2
// ================================================

void UNK_0xefff() // UNK_0xefff
{
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xea3f(); // UNK_0xea3f
  Push(-2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  CTINIT(); // CTINIT
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xef63(); // UNK_0xef63
  if (Pop() != 0)
  {
    UNK_0xeefd(); // UNK_0xeefd
    IOPEN(); // IOPEN
    UNK_0xefeb(); // UNK_0xefeb
    ICLOSE(); // ICLOSE
    Push(0);
    Push(0x63ef+UNK_0xe7ef.offset); // UNK_0xe7ef<IFIELD>
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
      UNK_0xec5b(); // UNK_0xec5b
    }
  }
  Push(0x05dc);
  MS(); // MS
  ICLOSE(); // ICLOSE
  UNK_0xef45(); // UNK_0xef45
}


// ================================================
// 0xf0a3: WORD 'UNK_0xf0a5' codep=0x224c parp=0xf0a5 params=0 returns=0
// ================================================

void UNK_0xf0a5() // UNK_0xf0a5
{
  UNK_0xe90d(); // UNK_0xe90d
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
  Push(0xce3c); // probable '8X8CO'
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
// 0xf0e1: WORD 'UNK_0xf0e3' codep=0x224c parp=0xf0e3
// ================================================

void UNK_0xf0e3() // UNK_0xf0e3
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
// 0xf0f7: WORD 'UNK_0xf0f9' codep=0x224c parp=0xf0f9 params=0 returns=0
// ================================================

void UNK_0xf0f9() // UNK_0xf0f9
{
  Push(Read16(pp_XVIS) + 0x000e); // XVIS @ 0x000e +
  Push(Read16(pp_YVIS) + 0x0016); // YVIS @ 0x0016 +
  Push(Read16(pp_XVIS) + 0x0016); // XVIS @ 0x0016 +
  Push(Read16(pp_YVIS) + 0x0029); // YVIS @ 0x0029 +
  StoreVISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xf125: WORD 'EYECON' codep=0x1d29 parp=0xf130
// ================================================
// 0xf130: db 0x00 0x42 0x99 0x99 0x42 0x00 ' B  B '

// ================================================
// 0xf136: WORD 'UNK_0xf138' codep=0x224c parp=0xf138 params=0 returns=0
// ================================================

void UNK_0xf138() // UNK_0xf138
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
// 0xf182: WORD 'UNK_0xf184' codep=0x224c parp=0xf184
// ================================================

void UNK_0xf184() // UNK_0xf184
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
  UNK_0xe9d3(); // UNK_0xe9d3
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
// 0xf1b8: WORD 'UNK_0xf1ba' codep=0x224c parp=0xf1ba params=0 returns=2
// ================================================

void UNK_0xf1ba() // UNK_0xf1ba
{
  unsigned short int i, imax;
  Push(0x000b);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    BLT(); // BLT
    Push(0x0032);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf1d0: WORD 'UNK_0xf1d2' codep=0x224c parp=0xf1d2 params=0 returns=2
// ================================================

void UNK_0xf1d2() // UNK_0xf1d2
{
  unsigned short int i, imax;
  BEEPON(); // BEEPON
  Push(0x0064);
  Push(Read16(regsp)); // DUP
  Push(0);

  i = Pop();
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
// 0xf1fa: WORD 'UNK_0xf1fc' codep=0x224c parp=0xf1fc
// ================================================

void UNK_0xf1fc() // UNK_0xf1fc
{
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _st__ex__gt_(); // <!>
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  UNK_0xf184(); // UNK_0xf184
  UNK_0xf1ba(); // UNK_0xf1ba
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
      UNK_0xf138(); // UNK_0xf138
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
// 0xf24c: WORD 'UNK_0xf24e' codep=0x224c parp=0xf24e
// ================================================

void UNK_0xf24e() // UNK_0xf24e
{
  Push(Read16(pp_NCRS)==4?1:0); // NCRS @ 4 =
  if (Pop() != 0)
  {
    UNK_0xf1d2(); // UNK_0xf1d2
  }
  GetCRS(); // @CRS
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_AT(); // ?ICONS-AT
  UNK_0xea67(); // UNK_0xea67
  Push(0xcd7c); // probable '?TALK'
  MODULE(); // MODULE
  StoreCRS(); // !CRS
}


// ================================================
// 0xf274: WORD 'WALK&TALK' codep=0x224c parp=0xf282
// ================================================
// entry

void WALK_and_TALK() // WALK&TALK
{
  UNK_0xf1fc(); // UNK_0xf1fc
  GetCRS(); // @CRS
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xf24e(); // UNK_0xf24e
  StoreCRS(); // !CRS
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
}


// ================================================
// 0xf294: WORD 'UNK_0xf296' codep=0x224c parp=0xf296
// ================================================

void UNK_0xf296() // UNK_0xf296
{
  unsigned short int a;
  Push(Read16(pp_COLOR)); // COLOR @
  a = Pop(); // >R
  StoreCOLOR(); // !COLOR
  UNK_0xe9d3(); // UNK_0xe9d3
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
// 0xf2cc: WORD 'UNK_0xf2ce' codep=0x224c parp=0xf2ce
// ================================================

void UNK_0xf2ce() // UNK_0xf2ce
{
  if (Pop() != 0)
  {
    GetColor(RED);
  } else
  {
    GetColor(BLUE);
  }
  UNK_0xf296(); // UNK_0xf296
}


// ================================================
// 0xf2de: WORD 'TV-DISP' codep=0x224c parp=0xf2ea
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
  Push(pp_UNK_0xea3b); // UNK_0xea3b
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
  UNK_0xf0f9(); // UNK_0xf0f9
  UNK_0xf0a5(); // UNK_0xf0a5
  Push2Words("0.");
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex_(); // 1.5!
  Push(0xcf62); // probable '?POPULA'
  MODULE(); // MODULE
  UNK_0xeeab(); // UNK_0xeeab
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _st_D_ex__gt_(); // <D!>
  ORGLIST(); // ORGLIST
  TV_dash_SETUP(); // TV-SETUP
  UNK_0xf0e3(); // UNK_0xf0e3
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf367: WORD 'TV-CLEANU' codep=0x224c parp=0xf375 params=0 returns=2
// ================================================
// entry

void TV_dash_CLEANU() // TV-CLEANU
{
  UNK_0xefff(); // UNK_0xefff
}


// ================================================
// 0xf379: WORD 'UNK_0xf37b' codep=0x224c parp=0xf37b params=1 returns=0
// ================================================

void UNK_0xf37b() // UNK_0xf37b
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
// 0xf3a9: WORD 'UNK_0xf3ab' codep=0x224c parp=0xf3ab params=0 returns=0
// ================================================
// orphan

void UNK_0xf3ab() // UNK_0xf3ab
{
  Push(Read16(pp_WTOP)); // WTOP @
  UNK_0xf37b(); // UNK_0xf37b
}


// ================================================
// 0xf3b3: WORD 'UNK_0xf3b5' codep=0x224c parp=0xf3b5 params=0 returns=1
// ================================================

void UNK_0xf3b5() // UNK_0xf3b5
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
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xea3f(); // UNK_0xea3f
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(1);
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("STUNNER", 7); // (.")
  Push(0);
  Push(2);
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("LASER", 5); // (.")
  Push(5);
  Push(6);
  UNK_0xe9b3(); // UNK_0xe9b3
  PRINT("CHOOSE WEAPON ^\\  RETURN= AIM", 29); // (.")
  Push(Read16(pp_WTOP) - 7); // WTOP @ 7 -
  UNK_0xf37b(); // UNK_0xf37b
}


// ================================================
// 0xf433: WORD 'UNK_0xf435' codep=0x1d29 parp=0xf435
// ================================================
// 0xf435: db 0x3a 0x20 ': '

// ================================================
// 0xf437: WORD 'UNK_0xf439' codep=0x224c parp=0xf439 params=0 returns=0
// ================================================

void UNK_0xf439() // UNK_0xf439
{
  Push(Read16(pp_WTOP) - Read16(pp_UNK_0xf435) * 7); // WTOP @ UNK_0xf435 @ 7 * -
  UNK_0xf37b(); // UNK_0xf37b
}


// ================================================
// 0xf44b: WORD 'UNK_0xf44d' codep=0x224c parp=0xf44d params=1 returns=0
// ================================================

void UNK_0xf44d() // UNK_0xf44d
{
  UNK_0xf439(); // UNK_0xf439
  Push(pp_UNK_0xf435); // UNK_0xf435
  _plus__ex__2(); // +!_2
  Push(pp_UNK_0xf435); // UNK_0xf435
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  Push(1);
  MAX(); // MAX
  Push(2);
  MIN(); // MIN
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
  UNK_0xf439(); // UNK_0xf439
}


// ================================================
// 0xf469: WORD 'DO.WEAPON' codep=0x224c parp=0xf477
// ================================================
// entry

void DO_dot_WEAPON() // DO.WEAPON
{
  unsigned short int a, b;
  UNK_0xf3b5(); // UNK_0xf3b5
  Push(1);
  Push(pp_UNK_0xf435); // UNK_0xf435
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
      UNK_0xf44d(); // UNK_0xf44d
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
        UNK_0xf44d(); // UNK_0xf44d
      } else
      {
        Pop(); // DROP
        Pop(); // DROP
      }
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  Push(Read16(pp_UNK_0xf435) - 1); // UNK_0xf435 @ 1-
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(0x63ef+UNK_0xe7ea.offset); // UNK_0xe7ea<IFIELD>
  C_ex_(); // C!
  Push((Pop() + 1) * 0xfed4); //  1+ 0xfed4 *
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  UNK_0xf1fc(); // UNK_0xf1fc
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(pp_WEAPXY); // WEAPXY
  _st_D_ex__gt_(); // <D!>
  UNK_0xf2ce(); // UNK_0xf2ce
  UNK_0xf439(); // UNK_0xf439
  Push(b); // R>
  Push(a); // R>
  Push(pp_EYEXY); // EYEXY
  _st_D_ex__gt_(); // <D!>
}

// 0xf4f7: db 0x54 0x2e 0x56 0x2e 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x52 0x41 0x47 0x45 0x20 0x46 0x4f 0x52 0x20 0x46 0x55 0x4e 0x43 0x54 0x49 0x4f 0x4e 0x31 0x32 0x31 0x31 0xef 0x2a 0xb3 0xe0 0x90 0x16 0x49 0x54 0x45 0x4d 0x53 0x31 0x36 0x37 0x32 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'T.V.___________________________________________RAGE FOR FUNCTION1211 *    ITEMS1672______________________ '

