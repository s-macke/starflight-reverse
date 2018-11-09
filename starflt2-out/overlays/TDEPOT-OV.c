// ====== OVERLAY 'TDEPOT-OV' ======
// store offset = 0xe5d0
// overlay size   = 0x0f90

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE5E6  codep:0x1d29 wordp:0xe5e6 size:0x0002 C-string:'WE5E6'
//           WE5EA  codep:0x1d29 wordp:0xe5ea size:0x0002 C-string:'WE5EA'
//           WE5EE  codep:0x1d29 wordp:0xe5ee size:0x0002 C-string:'WE5EE'
//           WE5F2  codep:0x224c wordp:0xe5f2 size:0x0018 C-string:'WE5F2'
//           WE60C  codep:0x224c wordp:0xe60c size:0x0008 C-string:'WE60C'
//           WE616  codep:0x224c wordp:0xe616 size:0x0008 C-string:'WE616'
//           WE620  codep:0x224c wordp:0xe620 size:0x0008 C-string:'WE620'
//           WE62A  codep:0x224c wordp:0xe62a size:0x0008 C-string:'WE62A'
//           WE634  codep:0x224c wordp:0xe634 size:0x000e C-string:'WE634'
//           WE644  codep:0x224c wordp:0xe644 size:0x0004 C-string:'WE644'
//           WE64A  codep:0x224c wordp:0xe64a size:0x0008 C-string:'WE64A'
//           WE654  codep:0x224c wordp:0xe654 size:0x0008 C-string:'WE654'
//           WE65E  codep:0x224c wordp:0xe65e size:0x0008 C-string:'WE65E'
//           WE668  codep:0x224c wordp:0xe668 size:0x0018 C-string:'WE668'
//           WE682  codep:0x224c wordp:0xe682 size:0x0027 C-string:'WE682'
//           WE6AB  codep:0x224c wordp:0xe6ab size:0x0012 C-string:'WE6AB'
//           WE6BF  codep:0x7420 wordp:0xe6bf size:0x0003 C-string:'WE6BF'
//           WE6C4  codep:0x7394 wordp:0xe6c4 size:0x0006 C-string:'WE6C4'
//           WE6CC  codep:0x224c wordp:0xe6cc size:0x0006 C-string:'WE6CC'
//           WE6D4  codep:0x224c wordp:0xe6d4 size:0x000a C-string:'WE6D4'
//           WE6E0  codep:0x224c wordp:0xe6e0 size:0x000a C-string:'WE6E0'
//           WE6EC  codep:0x224c wordp:0xe6ec size:0x0008 C-string:'WE6EC'
//           WE6F6  codep:0x224c wordp:0xe6f6 size:0x0014 C-string:'WE6F6'
//           WE70C  codep:0x224c wordp:0xe70c size:0x0008 C-string:'WE70C'
//           WE716  codep:0x224c wordp:0xe716 size:0x000e C-string:'WE716'
//           WE726  codep:0x224c wordp:0xe726 size:0x000c C-string:'WE726'
//           WE734  codep:0x224c wordp:0xe734 size:0x009c C-string:'WE734'
//           WE7D2  codep:0x1d29 wordp:0xe7d2 size:0x000d C-string:'WE7D2'
//           WE7E1  codep:0x224c wordp:0xe7e1 size:0x0032 C-string:'WE7E1'
//           WE815  codep:0x224c wordp:0xe815 size:0x003a C-string:'WE815'
//           WE851  codep:0x224c wordp:0xe851 size:0x00cd C-string:'WE851'
//           WE920  codep:0x224c wordp:0xe920 size:0x0020 C-string:'WE920'
//           WE942  codep:0x224c wordp:0xe942 size:0x0030 C-string:'WE942'
//           WE974  codep:0x224c wordp:0xe974 size:0x0018 C-string:'WE974'
//           WE98E  codep:0x224c wordp:0xe98e size:0x0028 C-string:'WE98E'
//           WE9B8  codep:0x224c wordp:0xe9b8 size:0x004a C-string:'WE9B8'
//           WEA04  codep:0x224c wordp:0xea04 size:0x002a C-string:'WEA04'
//           WEA30  codep:0x224c wordp:0xea30 size:0x0012 C-string:'WEA30'
//           WEA44  codep:0x224c wordp:0xea44 size:0x0051 C-string:'WEA44'
//           WEA97  codep:0x224c wordp:0xea97 size:0x0035 C-string:'WEA97'
//           WEACE  codep:0x224c wordp:0xeace size:0x0013 C-string:'WEACE'
//           WEAE3  codep:0x224c wordp:0xeae3 size:0x001a C-string:'WEAE3'
//           WEAFF  codep:0x224c wordp:0xeaff size:0x0008 C-string:'WEAFF'
//           WEB09  codep:0x224c wordp:0xeb09 size:0x0006 C-string:'WEB09'
//           WEB11  codep:0x224c wordp:0xeb11 size:0x0010 C-string:'WEB11'
//           WEB23  codep:0x224c wordp:0xeb23 size:0x0010 C-string:'WEB23'
//           WEB35  codep:0x224c wordp:0xeb35 size:0x000e C-string:'WEB35'
//           WEB45  codep:0x224c wordp:0xeb45 size:0x006c C-string:'WEB45'
//           WEBB3  codep:0x224c wordp:0xebb3 size:0x002c C-string:'WEBB3'
//           WEBE1  codep:0x224c wordp:0xebe1 size:0x0008 C-string:'WEBE1'
//           WEBEB  codep:0x224c wordp:0xebeb size:0x0034 C-string:'WEBEB'
//           WEC21  codep:0x224c wordp:0xec21 size:0x0040 C-string:'WEC21'
//           WEC63  codep:0x224c wordp:0xec63 size:0x0032 C-string:'WEC63'
//           WEC97  codep:0x224c wordp:0xec97 size:0x001c C-string:'WEC97'
//           WECB5  codep:0x224c wordp:0xecb5 size:0x002e C-string:'WECB5'
//           WECE5  codep:0x224c wordp:0xece5 size:0x001c C-string:'WECE5'
//       TD-SCROLL  codep:0x4b3b wordp:0xed0f size:0x000c C-string:'TD_dash_SCROLL'
//           WED1D  codep:0x224c wordp:0xed1d size:0x002d C-string:'WED1D'
//           WED4C  codep:0x224c wordp:0xed4c size:0x0014 C-string:'WED4C'
//           WED62  codep:0x224c wordp:0xed62 size:0x0032 C-string:'WED62'
//           WED96  codep:0x224c wordp:0xed96 size:0x0098 C-string:'WED96'
//           WEE30  codep:0x224c wordp:0xee30 size:0x0048 C-string:'WEE30'
//    KEY-ELEM-AMT  codep:0x224c wordp:0xee89 size:0x00f3 C-string:'KEY_dash_ELEM_dash_AMT'
//           WEF7E  codep:0x224c wordp:0xef7e size:0x0018 C-string:'WEF7E'
//           WEF98  codep:0x224c wordp:0xef98 size:0x0044 C-string:'WEF98'
//           WEFDE  codep:0x224c wordp:0xefde size:0x000a C-string:'WEFDE'
//           WEFEA  codep:0x224c wordp:0xefea size:0x0092 C-string:'WEFEA'
//           WF07E  codep:0x224c wordp:0xf07e size:0x0072 C-string:'WF07E'
//           WF0F2  codep:0x224c wordp:0xf0f2 size:0x0054 C-string:'WF0F2'
//           WF148  codep:0x224c wordp:0xf148 size:0x0018 C-string:'WF148'
//           WF162  codep:0x224c wordp:0xf162 size:0x0010 C-string:'WF162'
//           WF174  codep:0x224c wordp:0xf174 size:0x0046 C-string:'WF174'
//       SELL-WHAT  codep:0x4b3b wordp:0xf1c8 size:0x0010 C-string:'SELL_dash_WHAT'
//         SELL-IT  codep:0x224c wordp:0xf1e4 size:0x0042 C-string:'SELL_dash_IT'
//           WF228  codep:0x224c wordp:0xf228 size:0x0030 C-string:'WF228'
//           WF25A  codep:0x224c wordp:0xf25a size:0x00b6 C-string:'WF25A'
//           WF312  codep:0x224c wordp:0xf312 size:0x0048 C-string:'WF312'
//           WF35C  codep:0x224c wordp:0xf35c size:0x0096 C-string:'WF35C'
//        BUY-WHAT  codep:0x4b3b wordp:0xf3ff size:0x000c C-string:'BUY_dash_WHAT'
//           WF40D  codep:0x224c wordp:0xf40d size:0x0042 C-string:'WF40D'
//           WF451  codep:0x224c wordp:0xf451 size:0x005a C-string:'WF451'
//  DEPOT-FUNCTION  codep:0x4b3b wordp:0xf4be size:0x0010 C-string:'DEPOT_dash_FUNCTION'
//       (U-DEPOT)  codep:0x224c wordp:0xf4dc size:0x0000 C-string:'_ro_U_dash_DEPOT_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_IsTD; // ?TD
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp__ro_THIS_dash_I; // (THIS-I
extern LoadDataType ELEM_dash_VA; // ELEM-VA
extern LoadDataType ART_dash_VAL; // ART-VAL
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color BROWN; // BROWN
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType TEXT_dash_CO; // TEXT-CO
extern IFieldType TEXT_dash_IN; // TEXT-IN
extern IFieldType TEXT_dash_TE; // TEXT-TE
void COUNT(); // COUNT
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MIN(); // MIN
void _n__gt_(); // #>
void _n_S(); // #S
void _st__n_(); // <#
void PAD(); // PAD
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void DrawR(); // .R
void D_dot_R(); // D.R
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _gt_FLAG(); // >FLAG
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void _gt_C_plus_(); // >C+
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIND(); // IFIND
void _gt_INACTI(); // >INACTI
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void StoreCOLOR(); // !COLOR
void GetCOLOR(); // @COLOR
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _gt_3FONT(); // >3FONT
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SC(); // SAVE-SC
void SCR_dash_RES(); // SCR-RES
void SFILL(); // SFILL
void POS_dot_(); // POS.
void WINDOW(); // WINDOW
void Draw1LOGO(); // .1LOGO
void POLY_dash_WI(); // POLY-WI
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POLY_dash_ER(); // POLY-ER
void POS_dot_PXT(); // POS.PXT
void WLINE_dash_U(); // WLINE-U
void WLINE_dash_D(); // WLINE-D
void WSHORTE(); // WSHORTE
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsQUIT(); // ?QUIT
void Y_slash_N(); // Y/N
void CURSORS(); // CURSORS
void BLD_dash_CRS(); // BLD-CRS
void SET_dash_CRS(); // SET-CRS
void _do__ex_(); // $!
void U_gt__do_(); // U>$
void TEXT_gt_PA(); // TEXT>PA
void CMESS(); // CMESS
void X0MESS(); // X0MESS
void BOX_gt_LIS(); // BOX>LIS
void GET_dash_BOX(); // GET-BOX
void MAKE_dash_SC(); // MAKE-SC
void DELETE_dash_(); // DELETE-
void BOX_gt_TOC(); // BOX>TOC
void _gt_BOX(); // >BOX
void BOX_gt_(); // BOX>
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void DNEGATE(); // DNEGATE
void U_star_(); // U*
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void _gt_C(); // >C
void CI(); // CI
void CDEPTH(); // CDEPTH
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE5E6 = 0xe5e6; // WE5E6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE5EA = 0xe5ea; // WE5EA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE5EE = 0xe5ee; // WE5EE size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE7D2 = 0xe7d2; // WE7D2 size: 13
// {0x02, 0x0a, 0x02, 0x09, 0x33, 0x0a, 0x36, 0x09, 0x34, 0x0a, 0x6b, 0x09, 0x33}




// 0xe5e2: db 0xf8 0x00 '  '

// ================================================
// 0xe5e4: WORD 'WE5E6' codep=0x1d29 wordp=0xe5e6
// ================================================
// 0xe5e6: db 0x3a 0x20 ': '

// ================================================
// 0xe5e8: WORD 'WE5EA' codep=0x1d29 wordp=0xe5ea
// ================================================
// 0xe5ea: db 0x3a 0x20 ': '

// ================================================
// 0xe5ec: WORD 'WE5EE' codep=0x1d29 wordp=0xe5ee
// ================================================
// 0xe5ee: db 0x3a 0x20 ': '

// ================================================
// 0xe5f0: WORD 'WE5F2' codep=0x224c wordp=0xe5f2
// ================================================

void WE5F2() // WE5F2
{
  LoadData(ELEM_dash_VA); // from 'ELEMENT'
  Push(Read16(Pop())); //  @
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0x2134);
  MIN(); // MIN
  Push(Pop() * 0x000a); //  0x000a *
}


// ================================================
// 0xe60a: WORD 'WE60C' codep=0x224c wordp=0xe60c params=0 returns=0
// ================================================
// orphan

void WE60C() // WE60C
{
  Push(0xc261); // 'OVINIT-_1'
  MODULE(); // MODULE
}


// ================================================
// 0xe614: WORD 'WE616' codep=0x224c wordp=0xe616 params=0 returns=0
// ================================================

void WE616() // WE616
{
  Push(0xc273); // 'OVTRANS'
  MODULE(); // MODULE
}


// ================================================
// 0xe61e: WORD 'WE620' codep=0x224c wordp=0xe620 params=0 returns=0
// ================================================
// orphan

void WE620() // WE620
{
  Push(0xc2bb); // 'OV!TFLA'
  MODULE(); // MODULE
}


// ================================================
// 0xe628: WORD 'WE62A' codep=0x224c wordp=0xe62a params=0 returns=0
// ================================================

void WE62A() // WE62A
{
  Push(0xc2ed); // 'T+BALAN'
  MODULE(); // MODULE
}


// ================================================
// 0xe632: WORD 'WE634' codep=0x224c wordp=0xe634 params=2 returns=0
// ================================================

void WE634() // WE634
{
  _gt_C_plus_S(); // >C+S
  Push2Words("*EOL");
  _gt_C_plus_S(); // >C+S
  BOX_gt_LIS(); // BOX>LIS
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe642: WORD 'WE644' codep=0x224c wordp=0xe644 params=0 returns=1
// ================================================

void WE644() // WE644
{
  GetColor(BLUE);
}


// ================================================
// 0xe648: WORD 'WE64A' codep=0x224c wordp=0xe64a params=0 returns=0
// ================================================
// orphan

void WE64A() // WE64A
{
  Push(0xb70e); // 'OVQUIT'
  MODULE(); // MODULE
}


// ================================================
// 0xe652: WORD 'WE654' codep=0x224c wordp=0xe654 params=0 returns=0
// ================================================

void WE654() // WE654
{
  Push(0xb71f); // 'OV.0$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe65c: WORD 'WE65E' codep=0x224c wordp=0xe65e params=0 returns=0
// ================================================
// orphan

void WE65E() // WE65E
{
  Push(0xb730); // 'OV0$$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe666: WORD 'WE668' codep=0x224c wordp=0xe668
// ================================================

void WE668() // WE668
{
  unsigned short int a;
  Push(Read16(pp_IsTD)); // ?TD @
  GetColor(GREY2);
  Push(Pop() * Pop()); // *
  a = Pop(); // >R
  Push(0);
  Push(a); // I
  X0MESS(); // X0MESS
  Push(1);
  Push(a); // R>
  X0MESS(); // X0MESS
}


// ================================================
// 0xe680: WORD 'WE682' codep=0x224c wordp=0xe682
// ================================================

void WE682() // WE682
{
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(0x002c);
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("CHECKING INVENTORY", 18); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe6a9: WORD 'WE6AB' codep=0x224c wordp=0xe6ab
// ================================================

void WE6AB() // WE6AB
{
  Push(0x0012);
  GetColor(GREY2);
  Push(0x0064);
  Push(0x002c);
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xe6bd: WORD 'WE6BF' codep=0x7420 wordp=0xe6bf
// ================================================
IFieldType WE6BF = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe6c2: WORD 'WE6C4' codep=0x7394 wordp=0xe6c4
// ================================================
LoadDataType WE6C4 = {ARTIFACTIDX, 0x1e, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe6ca: WORD 'WE6CC' codep=0x224c wordp=0xe6cc params=0 returns=0
// ================================================

void WE6CC() // WE6CC
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe6d2: WORD 'WE6D4' codep=0x224c wordp=0xe6d4 params=0 returns=1
// ================================================

void WE6D4() // WE6D4
{
  WE6CC(); // WE6CC
  Push(Read16(0x65e1+WE6BF.offset)); // WE6BF<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe6de: WORD 'WE6E0' codep=0x224c wordp=0xe6e0 params=1 returns=0
// ================================================

void WE6E0() // WE6E0
{
  WE6CC(); // WE6CC
  Push(0x65e1+WE6BF.offset); // WE6BF<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe6ea: WORD 'WE6EC' codep=0x224c wordp=0xe6ec params=1 returns=1
// ================================================

void WE6EC() // WE6EC
{
  WE6D4(); // WE6D4
  _gt_(); // >
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe6f4: WORD 'WE6F6' codep=0x224c wordp=0xe6f6 params=1 returns=1
// ================================================
// orphan

void WE6F6() // WE6F6
{
  PAD(); // PAD
  _do__ex_(); // $!
  PAD(); // PAD
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
  OVER(); // OVER
  Push(Pop() - 1); //  1-
  C_ex__2(); // C!_2
  Push(Pop() - 1); //  1-
}


// ================================================
// 0xe70a: WORD 'WE70C' codep=0x224c wordp=0xe70c params=0 returns=0
// ================================================

void WE70C() // WE70C
{
  Push(4);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe714: WORD 'WE716' codep=0x224c wordp=0xe716 params=2 returns=1
// ================================================

void WE716() // WE716
{
  U_star_(); // U*
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xe724: WORD 'WE726' codep=0x224c wordp=0xe726
// ================================================

void WE726() // WE726
{
  GetColor(WHITE);
  GetColor(DK_dash_BLUE);
  GetColor(LT_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe732: WORD 'WE734' codep=0x224c wordp=0xe734
// ================================================

void WE734() // WE734
{
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  WE726(); // WE726
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(2);
  Push(1);
  Push(0x009d);
  Push(1);
  LLINE(); // LLINE
  Push(2);
  Push(0x000b);
  Push(0x009d);
  Push(0x000b);
  LLINE(); // LLINE
  Push(2);
  Push(0x00b9);
  Push(0x009d);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(1);
  Push(0x00b9);
  Push(1);
  Push(1);
  LLINE(); // LLINE
  Push(0x009e);
  Push(0x00b9);
  OVER(); // OVER
  Push(1);
  LLINE(); // LLINE
  Push(0x0035);
  Push(2);
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x006a);
  Push(2);
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  _gt_3FONT(); // >3FONT
  Push(0x005c);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("TRADE", 5); // (.")
  Push(6);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("DEPOT", 5); // (.")
  Push(0x004b);
  Push(0x00c5);
  GetCOLOR(); // @COLOR
  Draw1LOGO(); // .1LOGO
}


// ================================================
// 0xe7d0: WORD 'WE7D2' codep=0x1d29 wordp=0xe7d2
// ================================================
// 0xe7d2: db 0x02 0x0a 0x02 0x09 0x33 0x0a 0x36 0x09 0x34 0x0a 0x6b 0x09 0x33 '    3 6 4 k 3'

// ================================================
// 0xe7df: WORD 'WE7E1' codep=0x224c wordp=0xe7e1
// ================================================

void WE7E1() // WE7E1
{
  Push(7);
  GetColor(GREY2);
  Push(0x001d);
  Push(0x006e);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetCOLOR(); // @COLOR
  GetColor(BLACK);
  GetColor(DK_dash_BLUE);
  GetColor(WHITE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0xc285); // 'OVD@BAL'
  MODULE(); // MODULE
  Push(7);
  D_dot_R(); // D.R
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe813: WORD 'WE815' codep=0x224c wordp=0xe815
// ================================================

void WE815() // WE815
{
  Push(-1);
  Push(0x0023);
  CMESS(); // CMESS
  GetColor(BLACK);
  GetColor(DK_dash_BLUE);
  GetColor(GREY1);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  PRINT("YOUR ACCOUNT BALANCE IS: ", 25); // (.")
  WE7E1(); // WE7E1
  PRINT(" SP", 3); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe84f: WORD 'WE851' codep=0x224c wordp=0xe851
// ================================================

void WE851() // WE851
{
  _gt_2FONT(); // >2FONT
  WE726(); // WE726
  Push(0x002b);
  Push(0x00b3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  PRINT("WELCOME", 7); // (.")
  WE70C(); // WE70C
  PRINT("TO", 2); // (.")
  WE70C(); // WE70C
  PRINT("THE", 3); // (.")
  _gt_3FONT(); // >3FONT
  Push(0x0035);
  Push(0x00a5);
  POS_dot_(); // POS.
  PRINT("TRADE", 5); // (.")
  WE70C(); // WE70C
  PRINT("DEPOT", 5); // (.")
  CTINIT(); // CTINIT
  Push(0x0016);
  Push(0x0078);
  POS_dot_(); // POS.
  PRINT("WE OFFER THE WIDEST SELECTION", 29); // (.")
  Push(0x000d);
  Push(0x006e);
  POS_dot_(); // POS.
  PRINT("AND THE LOWEST PRICES IN STARPORT.", 34); // (.")
  Push(0x001b);
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("HOW MAY WE HELP YOU TODAY\?", 26); // (.")
}


// ================================================
// 0xe91e: WORD 'WE920' codep=0x224c wordp=0xe920
// ================================================

void WE920() // WE920
{
  TIME(); // TIME
  _2_at_(); // 2@
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_dash_(); // D-
    Push(0x0dac); Push(0x0000);
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe940: WORD 'WE942' codep=0x224c wordp=0xe942
// ================================================

void WE942() // WE942
{
  CTINIT(); // CTINIT
  Push(0x0016);
  Push(8);
  POS_dot_(); // POS.
  PRINT("BUY", 3); // (.")
  Push(0x0048);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("SELL", 4); // (.")
  Push(0x007d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe972: WORD 'WE974' codep=0x224c wordp=0xe974
// ================================================

void WE974() // WE974
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x00b8);
  Push(2);
  Push(0x000c);
  Push(0x009d);
  GetColor(GREY2);
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xe98c: WORD 'WE98E' codep=0x224c wordp=0xe98e
// ================================================

void WE98E() // WE98E
{
  Push(0);
  Push(0x001a);
  CMESS(); // CMESS
  PRINT("^ SCROLL INVENTORY LIST \\", 25); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe9b6: WORD 'WE9B8' codep=0x224c wordp=0xe9b8
// ================================================

void WE9B8() // WE9B8
{
  WE974(); // WE974
  WE726(); // WE726
  _gt_1FONT(); // >1FONT
  Push(4);
  Push(0x00a0);
  POS_dot_(); // POS.
  PRINT("ITEM", 4); // (.")
  Push(0x006c);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("VOLUME", 6); // (.")
  Push(4);
  Push(0x009a);
  Push(0x0012);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0082);
  Push(0x009a);
  Push(0x006c);
  OVER(); // OVER
  LLINE(); // LLINE
  WE815(); // WE815
  WE98E(); // WE98E
}


// ================================================
// 0xea02: WORD 'WEA04' codep=0x224c wordp=0xea04
// ================================================

void WEA04() // WEA04
{
  PRINT("PRESS SPACEBAR TO ", 18); // (.")
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" OR [ QUIT ]", 12); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xea2e: WORD 'WEA30' codep=0x224c wordp=0xea30
// ================================================

void WEA30() // WEA30
{
  Push(1);
  Push(0x0022);
  CMESS(); // CMESS
  SET_STR_AS_PARAM("BUY");
  WEA04(); // WEA04
}


// ================================================
// 0xea42: WORD 'WEA44' codep=0x224c wordp=0xea44
// ================================================

void WEA44() // WEA44
{
  WE9B8(); // WE9B8
  Push(0x008c);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("COST", 4); // (.")
  Push(0x008c);
  Push(0x00a7);
  POS_dot_(); // POS.
  PRINT("UNIT", 4); // (.")
  Push(0x008c);
  Push(0x009a);
  Push(0x009a);
  OVER(); // OVER
  LLINE(); // LLINE
  _gt_2FONT(); // >2FONT
  Push(0x003e);
  Push(0x00b3);
  POS_dot_(); // POS.
  PRINT("FOR", 3); // (.")
  WE70C(); // WE70C
  PRINT("SALE", 4); // (.")
  WEA30(); // WEA30
}


// ================================================
// 0xea95: WORD 'WEA97' codep=0x224c wordp=0xea97
// ================================================

void WEA97() // WEA97
{
  WE9B8(); // WE9B8
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("VALUE", 5); // (.")
  Push(0x008a);
  Push(0x00a7);
  POS_dot_(); // POS.
  PRINT("UNIT", 4); // (.")
  Push(0x0088);
  Push(0x009a);
  Push(0x009a);
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xeacc: WORD 'WEACE' codep=0x224c wordp=0xeace
// ================================================

void WEACE() // WEACE
{
  Push(1);
  Push(0x0021);
  CMESS(); // CMESS
  SET_STR_AS_PARAM("SELL");
  WEA04(); // WEA04
}


// ================================================
// 0xeae1: WORD 'WEAE3' codep=0x224c wordp=0xeae3
// ================================================

void WEAE3() // WEAE3
{
  WEA97(); // WEA97
  _gt_2FONT(); // >2FONT
  Push(0x0042);
  Push(0x00b3);
  POS_dot_(); // POS.
  PRINT("CARGO", 5); // (.")
  WEACE(); // WEACE
}


// ================================================
// 0xeafd: WORD 'WEAFF' codep=0x224c wordp=0xeaff
// ================================================

void WEAFF() // WEAFF
{
  WE734(); // WE734
  WE942(); // WE942
  WE851(); // WE851
}


// ================================================
// 0xeb07: WORD 'WEB09' codep=0x224c wordp=0xeb09 params=0 returns=2
// ================================================

void WEB09() // WEB09
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xeb0f: WORD 'WEB11' codep=0x224c wordp=0xeb11 params=0 returns=0
// ================================================

void WEB11() // WEB11
{
  WEB09(); // WEB09
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb21: WORD 'WEB23' codep=0x224c wordp=0xeb23 params=0 returns=0
// ================================================

void WEB23() // WEB23
{
  WEB09(); // WEB09
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb33: WORD 'WEB35' codep=0x224c wordp=0xeb35 params=0 returns=0
// ================================================

void WEB35() // WEB35
{
  WEB09(); // WEB09
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeb43: WORD 'WEB45' codep=0x224c wordp=0xeb45
// ================================================
// orphan

void WEB45() // WEB45
{
  PAD(); // PAD
  Push(5);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  WEB35(); // WEB35
  LoadData(ART_dash_VAL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  Push(0);
  ICLOSE(); // ICLOSE
  Push(2);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0);
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  Push(5);
  OVER(); // OVER
  _dash_(); // -
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  PAD(); // PAD
  WEB09(); // WEB09
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+TEXT_dash_TE.offset) + 0x0021); // TEXT-TE<IFIELD> 0x0021 +
  Push(5);
  CMOVE_2(); // CMOVE_2
  ICLOSE(); // ICLOSE
  Push(0x0088);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(5);
  GetColor(BLUE);
  POLY_dash_ER(); // POLY-ER
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  GetColor(BROWN);
  GetColor(BROWN);
  GetColor(BLACK);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  PAD(); // PAD
  Push(5);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  StoreCRS(); // !CRS
}


// ================================================
// 0xebb1: WORD 'WEBB3' codep=0x224c wordp=0xebb3
// ================================================

void WEBB3() // WEBB3
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(3);
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(7);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  WE644(); // WE644
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
  StoreCRS(); // !CRS
}


// ================================================
// 0xebdf: WORD 'WEBE1' codep=0x224c wordp=0xebe1
// ================================================

void WEBE1() // WEBE1
{
  Push(0x0097);
  WEBB3(); // WEBB3
}


// ================================================
// 0xebe9: WORD 'WEBEB' codep=0x224c wordp=0xebeb
// ================================================

void WEBEB() // WEBEB
{
  unsigned short int i, imax;
  WE6AB(); // WE6AB
  GetColor(BLACK);
  GetColor(GREY1);
  WE644(); // WE644
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WLINES)); // WLINES @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push(Read16(pp_WTOP) - i * 7); // WTOP @ I 7 * -
    POS_dot_(); // POS.
    TEXT_gt_PA(); // TEXT>PA
    PAD(); // PAD
    _do__dot_(); // $.
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xec1f: WORD 'WEC21' codep=0x224c wordp=0xec21
// ================================================

void WEC21() // WEC21
{
  unsigned short int a;
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0);
  do
  {
    Push(Pop() + 1); //  1+
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  a = Pop(); // >R
  _gt_1FONT(); // >1FONT
  Push(0x0096);
  Push(4);
  Push(0x0010);
  Push(a); // R>
  MIN(); // MIN
  Push(0x0026);
  WINDOW(); // WINDOW
  WEBEB(); // WEBEB
  IPREV(); // IPREV
  WEBE1(); // WEBE1
  IsLAST(); // ?LAST
  Push(!Pop()); //  NOT
  Push(pp_WE5EA); // WE5EA
  Store_2(); // !_2
}


// ================================================
// 0xec61: WORD 'WEC63' codep=0x224c wordp=0xec63
// ================================================

void WEC63() // WEC63
{
  INEXT(); // INEXT
  WEB11(); // WEB11
  Push(Read16(pp_WE5EA)); // WE5EA @
  if (Pop() != 0)
  {
    TEXT_gt_PA(); // TEXT>PA
  } else
  {
    Push(0x2001);
    PAD(); // PAD
    Store_2(); // !_2
  }
  PAD(); // PAD
  WEBE1(); // WEBE1
  WLINE_dash_U(); // WLINE-U
  WEBE1(); // WEBE1
  IsLAST(); // ?LAST
  Push(!Pop() & Read16(pp_WE5EA)); //  NOT WE5EA @ AND
  Push(pp_WE5EA); // WE5EA
  Store_2(); // !_2
}


// ================================================
// 0xec95: WORD 'WEC97' codep=0x224c wordp=0xec97 params=0 returns=0
// ================================================

void WEC97() // WEC97
{
  unsigned short int a;
  CI(); // CI
  CDROP(); // CDROP
  WEB09(); // WEB09
  _gt_C_plus_S(); // >C+S
  IsLAST(); // ?LAST
  Push(!Pop()); //  NOT
  a = Pop(); // >R
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push(a); // R>
  if (Pop() == 0) return;
  WEC63(); // WEC63
}


// ================================================
// 0xecb3: WORD 'WECB5' codep=0x224c wordp=0xecb5
// ================================================

void WECB5() // WECB5
{
  IsLAST(); // ?LAST
  Push(Read16(pp_WE5EA)); // WE5EA @
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  Push(Read16(pp_WLINES)); // WLINES @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(pp_WE5EA); // WE5EA
  Store_2(); // !_2
  IPREV(); // IPREV
  WEB23(); // WEB23
  WEB09(); // WEB09
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  PAD(); // PAD
  WEBE1(); // WEBE1
  WLINE_dash_D(); // WLINE-D
  WEBE1(); // WEBE1
}


// ================================================
// 0xece3: WORD 'WECE5' codep=0x224c wordp=0xece5 params=0 returns=0
// ================================================

void WECE5() // WECE5
{
  unsigned short int a;
  CI(); // CI
  CDROP(); // CDROP
  WEB09(); // WEB09
  _gt_C_plus_S(); // >C+S
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  a = Pop(); // >R
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push(a); // R>
  if (Pop() == 0) return;
  WECB5(); // WECB5
}


// ================================================
// 0xed01: WORD 'TD-SCROLL' codep=0x4b3b wordp=0xed0f
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 1:
    WEC97(); // WEC97
    break;
  case 65535:
    WECE5(); // WECE5
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed1b: WORD 'WED1D' codep=0x224c wordp=0xed1d
// ================================================

void WED1D() // WED1D
{
  WE668(); // WE668
  Push(1);
  Push(0x0018);
  CMESS(); // CMESS
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("INSUFFICIENT CARGO SPACE", 24); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xed4a: WORD 'WED4C' codep=0x224c wordp=0xed4c
// ================================================

void WED4C() // WED4C
{
  WE668(); // WE668
  Push(1);
  Push(0x0012);
  CMESS(); // CMESS
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  WE654(); // WE654
  StoreCRS(); // !CRS
}


// ================================================
// 0xed60: WORD 'WED62' codep=0x224c wordp=0xed62
// ================================================

void WED62() // WED62
{
  SAVE_dash_SC(); // SAVE-SC
  Push(0);
  Push(0xc2a9); // 'OV?BALA'
  MODULE(); // MODULE
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WED4C(); // WED4C
    BEEP(); // BEEP
    WE920(); // WE920
    Pop(); // DROP
    Push(0);
  } else
  {
    WE6EC(); // WE6EC
    Push(Read16(regsp)); // DUP
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WED1D(); // WED1D
      BEEP(); // BEEP
      WE920(); // WE920
    }
  }
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xed94: WORD 'WED96' codep=0x224c wordp=0xed96
// ================================================

void WED96() // WED96
{
  unsigned short int i, imax;
  Push(Read16(pp_IsTD)); // ?TD @
  if (Pop() != 0)
  {
    WE644(); // WE644
  } else
  {
    GetColor(BLUE);
  }
  StoreCOLOR(); // !COLOR
  Push(pp_WE5EE); // WE5EE
  ON_2(); // ON_2
  Push(0x002e);
  Push(pp__dash_AIN); // -AIN
  Store_2(); // !_2
  Push(6);
  Push(0xb6fd); // 'OV#IN$'
  MODULE(); // MODULE
  Push(0);
  SWAP(); // SWAP
  COUNT(); // COUNT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((Read16(i)&0xFF)==0x002e?1:0); // I C@ 0x002e =
    if (Pop() != 0)
    {
      Push(Read16(i + 1)&0xFF); // I 1+ C@
      Push(0x0030);
      Push(0x003a);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        Push(pp_WE5EE); // WE5EE
        _099(); // 099
      }
    } else
    {
      Push(Pop() * 0x000a + ((Read16(i)&0xFF) - 0x0030)); //  0x000a * I C@ 0x0030 - +
      Push(Read16(pp_WE5EE)==0?1:0); // WE5EE @ 0=
      if (Pop() != 0)
      {
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_WE5EE)); // WE5EE @
  if (Pop() != 0)
  {
    Push(Pop() * 0x000a); //  0x000a *
  }
  ABS(); // ABS
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  MIN(); // MIN
}


// ================================================
// 0xee2e: WORD 'WEE30' codep=0x224c wordp=0xee30
// ================================================

void WEE30() // WEE30
{
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
    MIN(); // MIN
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_2(); // !_2
    return;
  }
  Push(0xc285); // 'OVD@BAL'
  MODULE(); // MODULE
  WE5F2(); // WE5F2
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0x2134);
  }
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  MIN(); // MIN
  Push(1);
  MAX(); // MAX
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
}


// ================================================
// 0xee78: WORD 'KEY-ELEM-AMT' codep=0x224c wordp=0xee89
// ================================================
// entry

void KEY_dash_ELEM_dash_AMT() // KEY-ELEM-AMT
{
  Push(Read16(pp_WE5E6) | !Read16(pp_IsTD)); // WE5E6 @ ?TD @ NOT OR
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_2(); // !_2
  } else
  {
    WE6D4(); // WE6D4
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_2(); // !_2
    WEE30(); // WEE30
  }
  WE668(); // WE668
  Push(0);
  Push(0x001f);
  CMESS(); // CMESS
  Push(Read16(pp_IsTD)); // ?TD @
  if (Pop() != 0)
  {
    PRINT("TRANSFER", 8); // (.")
  } else
  {
    Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
    _2_at_(); // 2@
    Push(0xffff); Push(0xffff);
    D_eq_(); // D=
    if (Pop() != 0)
    {
      PRINT("PICK UP", 7); // (.")
    } else
    {
      PRINT("JETTISON", 8); // (.")
    }
  }
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    PRINT(" HOW MANY CUBIC METERS\?", 23); // (.")
    StoreCRS(); // !CRS
    Push(1);
    Push(0x0016);
    CMESS(); // CMESS
    PRINT("ENTER VOLUME (0-", 16); // (.")
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    Push(0x000a);
    _slash_MOD(); // /MOD
    Push(0);
    DrawR(); // .R
    PRINT(".", 1); // (.")
    Push(0);
    DrawR(); // .R
    PRINT(")", 1); // (.")
    WED96(); // WED96
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_2(); // !_2
    StoreCRS(); // !CRS
    WE668(); // WE668
    return;
  }
  StoreCRS(); // !CRS
}


// ================================================
// 0xef7c: WORD 'WEF7E' codep=0x224c wordp=0xef7e params=3 returns=1
// ================================================

void WEF7E() // WEF7E
{
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(Read16(regsp)); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
  WE6D4(); // WE6D4
  Push(Pop() + Pop()); // +
  WE6E0(); // WE6E0
  BOX_gt_(); // BOX>
  _gt_INACTI(); // >INACTI
  Push(Pop() + 1); //  1+
}


// ================================================
// 0xef96: WORD 'WEF98' codep=0x224c wordp=0xef98
// ================================================

void WEF98() // WEF98
{
  KEY_dash_ELEM_dash_AMT(); // KEY-ELEM-AMT
  Push(Read16(pp_IsTD)); // ?TD @
  if (Pop() != 0)
  {
    LoadData(ELEM_dash_VA); // from 'ELEMENT'
    Push(Read16(Pop())); //  @
    Push(0x000a);
    _slash_(); // /
    Push(Read16(pp__pe_VAL)); // %VAL @
    WE716(); // WE716
    Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    MIN(); // MIN
    M_star_(); // M*
    WE62A(); // WE62A
  }
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(Read16(regsp)); // DUP
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  MIN(); // MIN
  WE6D4(); // WE6D4
  Push(Pop() + Pop()); // +
  WE6E0(); // WE6E0
  _0_st_(); // 0<
  BOX_gt_(); // BOX>
  _gt_INACTI(); // >INACTI
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xefdc: WORD 'WEFDE' codep=0x224c wordp=0xefde
// ================================================

void WEFDE() // WEFDE
{
  LoadData(WE6C4); // from 'ARTIFACT'
  Push((Read16(Pop())&0xFF) - 1); //  C@ 1-
  _gt_FLAG(); // >FLAG
}


// ================================================
// 0xefe8: WORD 'WEFEA' codep=0x224c wordp=0xefea
// ================================================

void WEFEA() // WEFEA
{
  Push(Read16(pp_IsTD)); // ?TD @
  if (Pop() != 0)
  {
    LoadData(ART_dash_VAL); // from 'ARTIFACT'
    Push(Read16(Pop())); //  @
    Push(Read16(pp__pe_VAL)); // %VAL @
    WE716(); // WE716
    Push(0);
    WE62A(); // WE62A
    Push(Read16(cc_TRUE)); // TRUE
  } else
  {
    WEFDE(); // WEFDE
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      Push(0);
      Push(0x0015);
      CMESS(); // CMESS
      PRINT("ARE YOU SURE [NO YES]", 21); // (.")
      StoreCRS(); // !CRS
      Y_slash_N(); // Y/N
    } else
    {
      Push(Read16(cc_TRUE)); // TRUE
    }
  }
  if (Pop() != 0)
  {
    WEFDE(); // WEFDE
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
    } else
    {
      LoadData(ART_dash_VOL); // from 'ARTIFACT'
      Push(Read16(Pop())); //  @
    }
    Push(Read16(regsp)); // DUP
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_2(); // !_2
    WE6D4(); // WE6D4
    Push(Pop() + Pop()); // +
    WE6E0(); // WE6E0
    BOX_gt_(); // BOX>
    Push(Read16(pp_IsTD)); // ?TD @
    if (Pop() != 0)
    {
      Push2Words("*ITEMS-");
      _gt_C_plus_S(); // >C+S
      _gt_BOX(); // >BOX
      ICLOSE(); // ICLOSE
    } else
    {
      _gt_INACTI(); // >INACTI
    }
    Push(Pop() + 1); //  1+
    return;
  }
  Push(0);
}


// ================================================
// 0xf07c: WORD 'WF07E' codep=0x224c wordp=0xf07e
// ================================================

void WF07E() // WF07E
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  WEB35(); // WEB35
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(0x000a);
  _slash_MOD(); // /MOD
  ICLOSE(); // ICLOSE
  WEB09(); // WEB09
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+TEXT_dash_TE.offset) + 0x001a); // TEXT-TE<IFIELD> 0x001a +
  Push(6);
  Push(0x002e);
  FILL_2(); // FILL_2
  U_gt__do_(); // U>$
  Push((0x65e1+TEXT_dash_TE.offset) + 0x001e); // TEXT-TE<IFIELD> 0x001e +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read16(Pop())&0xFF); //  C@
  Push((0x65e1+TEXT_dash_TE.offset) + 0x001f); // TEXT-TE<IFIELD> 0x001f +
  C_ex__2(); // C!_2
  WEBE1(); // WEBE1
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(0x0026);
  GetColor(GREY2);
  _2OVER(); // 2OVER
  POS_dot_PXT(); // POS.PXT
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  Push(0x0026);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
  WEBE1(); // WEBE1
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xf0f0: WORD 'WF0F2' codep=0x224c wordp=0xf0f2
// ================================================

void WF0F2() // WF0F2
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    OVER(); // OVER
    IFIND(); // IFIND
    Push(Pop() * Read16(0x65e1+INST_dash_QT.offset)); //  INST-QT<IFIELD> @ *
    CDROP(); // CDROP
  } else
  {
    Push(0);
  }
  Push2Words("*ITEMS-");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x001a);
  BOX_gt_TOC(); // BOX>TOC
  IOPEN(); // IOPEN
  Push(0x001a);
  ROT(); // ROT
  IFIND(); // IFIND
  Pop(); // DROP
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
  CDROP(); // CDROP
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf146: WORD 'WF148' codep=0x224c wordp=0xf148 params=0 returns=1
// ================================================

void WF148() // WF148
{
  unsigned short int a;
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x000b?1:0); //  0x000b =
  a = Pop(); // >R
  Push(a); // R>
  GetINST_dash_S(); // @INST-S
  Push(Pop()==0x000f?1:0); //  0x000f =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf160: WORD 'WF162' codep=0x224c wordp=0xf162
// ================================================

void WF162() // WF162
{
  Push(0x0025);
  GetColor(GREY2);
  Push(0x0064);
  Push(2);
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xf172: WORD 'WF174' codep=0x224c wordp=0xf174 params=1 returns=0
// ================================================

void WF174() // WF174
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      WEB09(); // WEB09
      WEB23(); // WEB23
      _gt_C_plus_S(); // >C+S
      IDELETE(); // IDELETE
      ICLOSE(); // ICLOSE
      Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
      Push(Read16(pp_WLINES)); // WLINES @
      _st_(); // <
      if (Pop() != 0)
      {
        IPREV(); // IPREV
        GetColor(GREY2);
        WSHORTE(); // WSHORTE
      }
      i++;
    } while(i<imax); // (LOOP)

    WEC97(); // WEC97
    return;
  }
  WEB35(); // WEB35
  GetINST_dash_C(); // @INST-C
  ICLOSE(); // ICLOSE
  Push(Pop()==0x001a?1:0); //  0x001a =
  if (Pop() == 0) return;
  WF07E(); // WF07E
}


// ================================================
// 0xf1ba: WORD 'SELL-WHAT' codep=0x4b3b wordp=0xf1c8
// ================================================

void SELL_dash_WHAT() // SELL-WHAT
{
  switch(Pop()) // SELL-WHAT
  {
  case 11:
    Push(0);
    break;
  case 28:
    WEFEA(); // WEFEA
    break;
  case 26:
    WEF98(); // WEF98
    break;
  default:
    WEF7E(); // WEF7E
    break;

  }
}

// ================================================
// 0xf1d8: WORD 'SELL-IT' codep=0x224c wordp=0xf1e4
// ================================================
// entry

void SELL_dash_IT() // SELL-IT
{
  unsigned short int a;
  CDEPTH(); // CDEPTH
  WEB09(); // WEB09
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push2Words("*STARSH");
  _gt_C(); // >C
  _gt_C(); // >C
  _gt_C_plus_(); // >C+
  SET_dash_CUR(); // SET-CUR
  GetINST_dash_C(); // @INST-C
  SELL_dash_WHAT(); // SELL-WHAT case
  a = Pop(); // >R
  Push(a * -1); // I -1 *
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2
  while(1)
  {
    Push(Read16(regsp)); // DUP
    CDEPTH(); // CDEPTH
    _st_(); // <
    if (Pop() == 0) break;

    ICLOSE(); // ICLOSE
  }
  Pop(); // DROP
  Push(a); // R>
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
}


// ================================================
// 0xf226: WORD 'WF228' codep=0x224c wordp=0xf228
// ================================================

void WF228() // WF228
{
  SELL_dash_IT(); // SELL-IT
  if (Pop() != 0)
  {
    WF174(); // WF174
  } else
  {
    Pop(); // DROP
    WEBE1(); // WEBE1
    Push(Read16(pp_WTOP)); // WTOP @
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push(Read16(pp_WBOTTOM) - 8); // WBOTTOM @ 8 -
    Push(Read16(pp_WRIGHT)); // WRIGHT @
    GetColor(GREY2);
    POLY_dash_WI(); // POLY-WI
    WEBE1(); // WEBE1
  }
  WE98E(); // WE98E
  WEACE(); // WEACE
}


// ================================================
// 0xf258: WORD 'WF25A' codep=0x224c wordp=0xf25a
// ================================================

void WF25A() // WF25A
{
  Push(pp_WE5E6); // WE5E6
  ON_2(); // ON_2
  WEAE3(); // WEAE3
  MAKE_dash_SC(); // MAKE-SC
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  Store_2(); // !_2
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0);
  CI(); // CI
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WE682(); // WE682
    do
    {
      WF148(); // WF148
      if (Pop() != 0)
      {
        BOX_gt_LIS(); // BOX>LIS
        Push(Pop() + 1); //  1+
      }
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
  }
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push2Words("*STARSH");
    WE634(); // WE634
    WEC21(); // WEC21
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      TD_dash_SCROLL(); // TD-SCROLL case
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        WF228(); // WF228
        WE7E1(); // WE7E1
      }
      IsQUIT(); // ?QUIT
      Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
      Push(2);
      _st_(); // <
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
    ICLOSE(); // ICLOSE
  } else
  {
    GetCRS(); // @CRS
    CTINIT(); // CTINIT
    WF162(); // WF162
    Push(9);
    Push(0x001d);
    CMESS(); // CMESS
    Push(0x0064);
    Push(pp_YBLT); // YBLT
    Store_2(); // !_2
    PRINT("NO ARTIFACTS IN STARSHIP HOLD", 29); // (.")
    StoreCRS(); // !CRS
    WE920(); // WE920
    StoreCRS(); // !CRS
    WF162(); // WF162
  }
  DELETE_dash_(); // DELETE-
  if (Pop() == 0) return;
  WEBE1(); // WEBE1
}


// ================================================
// 0xf310: WORD 'WF312' codep=0x224c wordp=0xf312
// ================================================

void WF312() // WF312
{
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  LoadData(ART_dash_VAL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  Push(Read16(pp__pe_VAL)); // %VAL @
  WE716(); // WE716
  WED62(); // WED62
  if (Pop() != 0)
  {
    LoadData(ART_dash_VAL); // from 'ARTIFACT'
    Push(Read16(Pop())); //  @
    Push(Read16(pp__pe_VAL)); // %VAL @
    WE716(); // WE716
    Push(0);
    DNEGATE(); // DNEGATE
    WE62A(); // WE62A
    WE6D4(); // WE6D4
    LoadData(ART_dash_VOL); // from 'ARTIFACT'
    Push(Read16(Pop())); //  @
    Push(Read16(pp__pe_VAL)); // %VAL @
    WE716(); // WE716
    _dash_(); // -
    WE6E0(); // WE6E0
    BOX_gt_(); // BOX>
    Push2Words("*STARSH");
    _gt_C_plus_S(); // >C+S
    _gt_BOX(); // >BOX
    ICLOSE(); // ICLOSE
    Push(Pop() + 1); //  1+
    return;
  }
  Push(0);
}


// ================================================
// 0xf35a: WORD 'WF35C' codep=0x224c wordp=0xf35c
// ================================================

void WF35C() // WF35C
{
  unsigned short int a;
  Push(1);
  LoadData(ELEM_dash_VA); // from 'ELEMENT'
  Push(Read16(Pop())); //  @
  Push(0x000a);
  _slash_(); // /
  Push(Read16(pp__pe_VAL)); // %VAL @
  WE716(); // WE716
  WED62(); // WED62
  if (Pop() != 0)
  {
    KEY_dash_ELEM_dash_AMT(); // KEY-ELEM-AMT
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    LoadData(ELEM_dash_VA); // from 'ELEMENT'
    Push(Read16(Pop())); //  @
    Push(0x000a);
    _slash_(); // /
    Push(Read16(pp__pe_VAL)); // %VAL @
    WE716(); // WE716
    Push(Pop() * Pop()); // *
    WED62(); // WED62
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      a = Pop(); // >R
      LoadData(ELEM_dash_VA); // from 'ELEMENT'
      Push(Read16(Pop())); //  @
      Push(0x000a);
      _slash_(); // /
      Push(Read16(pp__pe_VAL)); // %VAL @
      WE716(); // WE716
      Push(a); // I
      U_star_(); // U*
      DNEGATE(); // DNEGATE
      WE62A(); // WE62A
      WE6D4(); // WE6D4
      Push(Pop() - a); //  I -
      WE6E0(); // WE6E0
      Push(a); // I
      Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
      _plus__ex__2(); // +!_2
      Push(0x001a);
      GetINST_dash_S(); // @INST-S
      ICREATE(); // ICREATE
      _gt_C_plus_S(); // >C+S
      Push(a); // R>
      Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
      Store_2(); // !_2
      CI(); // CI
      ICLOSE(); // ICLOSE
      Push2Words("*STARSH");
      _gt_C_plus_S(); // >C+S
      _gt_BOX(); // >BOX
      ICLOSE(); // ICLOSE
    } else
    {
      Pop(); // DROP
    }
    Push(0);
    return;
  }
  Push(0);
}


// ================================================
// 0xf3f2: WORD 'BUY-WHAT' codep=0x4b3b wordp=0xf3ff
// ================================================

void BUY_dash_WHAT() // BUY-WHAT
{
  switch(Pop()) // BUY-WHAT
  {
  case 28:
    WF312(); // WF312
    break;
  case 26:
    WF35C(); // WF35C
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf40b: WORD 'WF40D' codep=0x224c wordp=0xf40d
// ================================================

void WF40D() // WF40D
{
  unsigned short int a;
  CDEPTH(); // CDEPTH
  WEB09(); // WEB09
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ITEMS-");
  _gt_C(); // >C
  _gt_C(); // >C
  _gt_C_plus_(); // >C+
  SET_dash_CUR(); // SET-CUR
  GetINST_dash_C(); // @INST-C
  BUY_dash_WHAT(); // BUY-WHAT case
  a = Pop(); // >R
  Push(-a); // I NEGATE
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2
  while(1)
  {
    Push(Read16(regsp)); // DUP
    CDEPTH(); // CDEPTH
    _st_(); // <
    if (Pop() == 0) break;

    ICLOSE(); // ICLOSE
  }
  Pop(); // DROP
  Push(a); // R>
  WF174(); // WF174
  WE98E(); // WE98E
  WEA30(); // WEA30
}


// ================================================
// 0xf44f: WORD 'WF451' codep=0x224c wordp=0xf451
// ================================================

void WF451() // WF451
{
  Push(pp_WE5E6); // WE5E6
  _099(); // 099
  WEA44(); // WEA44
  WE682(); // WE682
  MAKE_dash_SC(); // MAKE-SC
  Push(0x00c8);
  Push(pp__pe_VAL); // %VAL
  Store_2(); // !_2
  Push(6);
  WF0F2(); // WF0F2
  Push(1);
  WF0F2(); // WF0F2
  Push(4);
  WF0F2(); // WF0F2
  Push(0x000c);
  WF0F2(); // WF0F2
  Push(0x0010);
  WF0F2(); // WF0F2
  Push(0x0014);
  WF0F2(); // WF0F2
  Push2Words("*ITEMS-");
  GET_dash_BOX(); // GET-BOX
  Push2Words("*ITEMS-");
  WE634(); // WE634
  WEC21(); // WEC21
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    TD_dash_SCROLL(); // TD-SCROLL case
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      WF40D(); // WF40D
      WE7E1(); // WE7E1
    }
    IsQUIT(); // ?QUIT
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  DELETE_dash_(); // DELETE-
  WEBE1(); // WEBE1
}


// ================================================
// 0xf4ab: WORD 'DEPOT-FUNCTION' codep=0x4b3b wordp=0xf4be
// ================================================

void DEPOT_dash_FUNCTION() // DEPOT-FUNCTION
{
  switch(Pop()) // DEPOT-FUNCTION
  {
  case 0:
    WF451(); // WF451
    break;
  case 1:
    WF25A(); // WF25A
    break;
  case 2:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4ce: WORD '(U-DEPOT)' codep=0x224c wordp=0xf4dc
// ================================================
// entry

void _ro_U_dash_DEPOT_rc_() // (U-DEPOT)
{
  unsigned short int a;
  Push(pp_IsTD); // ?TD
  ON_2(); // ON_2
  _gt_HIDDEN(); // >HIDDEN
  WEAFF(); // WEAFF
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  GetColor(GREY2);
  GetColor(GREY1);
  WE644(); // WE644
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
  Push(pp_WE7D2); // WE7D2
  BLD_dash_CRS(); // BLD-CRS
  do
  {
    XYSCAN(); // XYSCAN
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Push(pp_WE7D2); // WE7D2
    SET_dash_CRS(); // SET-CRS
    Pop(); Pop(); // 2DROP
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      GetCRS(); // @CRS
      Push(0);
      Push(Read16(pp_OCRS)); // OCRS @
      DEPOT_dash_FUNCTION(); // DEPOT-FUNCTION case
      a = Pop(); // >R
      Push(-1);
      GetColor(GREY2);
      X0MESS(); // X0MESS
      WE668(); // WE668
      StoreCRS(); // !CRS
      Push(a); // R>
    } else
    {
      Push(0);
    }
  } while(Pop() == 0);
  Push(2);
  WE616(); // WE616
  Push(pp_IsTD); // ?TD
  _099(); // 099
  Push(0x0064);
  Push(pp__pe_VAL); // %VAL
  Store_2(); // !_2
}

// 0xf546: db 0x54 0x44 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'TD-VOC____________________ '

