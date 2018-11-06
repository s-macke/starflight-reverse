// ====== OVERLAY 'TDEPOT-OV' ======
// store offset = 0xe2a0
// overlay size   = 0x12c0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE2B6  codep:0x1d29 parp:0xe2b6 size:0x0002 C-string:'WE2B6'
//           WE2BA  codep:0x1d29 parp:0xe2ba size:0x0002 C-string:'WE2BA'
//           WE2BE  codep:0x1d29 parp:0xe2be size:0x0002 C-string:'WE2BE'
//           WE2C2  codep:0x224c parp:0xe2c2 size:0x0008 C-string:'WE2C2'
//           WE2CC  codep:0x224c parp:0xe2cc size:0x0008 C-string:'WE2CC'
//           WE2D6  codep:0x224c parp:0xe2d6 size:0x0008 C-string:'WE2D6'
//           WE2E0  codep:0x224c parp:0xe2e0 size:0x0008 C-string:'WE2E0'
//           WE2EA  codep:0x224c parp:0xe2ea size:0x000e C-string:'WE2EA'
//           WE2FA  codep:0x224c parp:0xe2fa size:0x0012 C-string:'WE2FA'
//           WE30E  codep:0x224c parp:0xe30e size:0x0008 C-string:'WE30E'
//           WE318  codep:0x224c parp:0xe318 size:0x0008 C-string:'WE318'
//           WE322  codep:0x224c parp:0xe322 size:0x0008 C-string:'WE322'
//           WE32C  codep:0x224c parp:0xe32c size:0x0018 C-string:'WE32C'
//           WE346  codep:0x224c parp:0xe346 size:0x0027 C-string:'WE346'
//           WE36F  codep:0x224c parp:0xe36f size:0x0012 C-string:'WE36F'
//           WE383  codep:0x73ea parp:0xe383 size:0x0006 C-string:'WE383'
//           WE38B  codep:0x73ea parp:0xe38b size:0x0006 C-string:'WE38B'
//           WE393  codep:0x73ea parp:0xe393 size:0x0006 C-string:'WE393'
//           WE39B  codep:0x744d parp:0xe39b size:0x0003 C-string:'WE39B'
//           WE3A0  codep:0x224c parp:0xe3a0 size:0x0006 C-string:'WE3A0'
//           WE3A8  codep:0x224c parp:0xe3a8 size:0x000a C-string:'WE3A8'
//           WE3B4  codep:0x224c parp:0xe3b4 size:0x000a C-string:'WE3B4'
//           WE3C0  codep:0x224c parp:0xe3c0 size:0x0008 C-string:'WE3C0'
//           WE3CA  codep:0x224c parp:0xe3ca size:0x0014 C-string:'WE3CA'
//           WE3E0  codep:0x224c parp:0xe3e0 size:0x0008 C-string:'WE3E0'
//           WE3EA  codep:0x224c parp:0xe3ea size:0x000e C-string:'WE3EA'
//           WE3FA  codep:0x224c parp:0xe3fa size:0x000c C-string:'WE3FA'
//           WE408  codep:0x224c parp:0xe408 size:0x00aa C-string:'WE408'
//           WE4B4  codep:0x1d29 parp:0xe4b4 size:0x0011 C-string:'WE4B4'
//           WE4C7  codep:0x224c parp:0xe4c7 size:0x0032 C-string:'WE4C7'
//           WE4FB  codep:0x224c parp:0xe4fb size:0x003a C-string:'WE4FB'
//           WE537  codep:0x224c parp:0xe537 size:0x00cd C-string:'WE537'
//           WE606  codep:0x224c parp:0xe606 size:0x0020 C-string:'WE606'
//           WE628  codep:0x224c parp:0xe628 size:0x004f C-string:'WE628'
//           WE679  codep:0x224c parp:0xe679 size:0x0018 C-string:'WE679'
//           WE693  codep:0x224c parp:0xe693 size:0x0028 C-string:'WE693'
//           WE6BD  codep:0x224c parp:0xe6bd size:0x004a C-string:'WE6BD'
//           WE709  codep:0x224c parp:0xe709 size:0x002a C-string:'WE709'
//           WE735  codep:0x224c parp:0xe735 size:0x0012 C-string:'WE735'
//           WE749  codep:0x224c parp:0xe749 size:0x0051 C-string:'WE749'
//           WE79C  codep:0x224c parp:0xe79c size:0x0035 C-string:'WE79C'
//           WE7D3  codep:0x224c parp:0xe7d3 size:0x0013 C-string:'WE7D3'
//           WE7E8  codep:0x224c parp:0xe7e8 size:0x001a C-string:'WE7E8'
//           WE804  codep:0x224c parp:0xe804 size:0x002f C-string:'WE804'
//           WE835  codep:0x224c parp:0xe835 size:0x0008 C-string:'WE835'
//           WE83F  codep:0x224c parp:0xe83f size:0x0006 C-string:'WE83F'
//           WE847  codep:0x224c parp:0xe847 size:0x0010 C-string:'WE847'
//           WE859  codep:0x224c parp:0xe859 size:0x0010 C-string:'WE859'
//           WE86B  codep:0x224c parp:0xe86b size:0x000e C-string:'WE86B'
//           WE87B  codep:0x224c parp:0xe87b size:0x006c C-string:'WE87B'
//           WE8E9  codep:0x224c parp:0xe8e9 size:0x002c C-string:'WE8E9'
//           WE917  codep:0x224c parp:0xe917 size:0x0008 C-string:'WE917'
//           WE921  codep:0x224c parp:0xe921 size:0x0034 C-string:'WE921'
//           WE957  codep:0x224c parp:0xe957 size:0x0040 C-string:'WE957'
//           WE999  codep:0x224c parp:0xe999 size:0x0032 C-string:'WE999'
//           WE9CD  codep:0x224c parp:0xe9cd size:0x001c C-string:'WE9CD'
//           WE9EB  codep:0x224c parp:0xe9eb size:0x002e C-string:'WE9EB'
//           WEA1B  codep:0x224c parp:0xea1b size:0x001c C-string:'WEA1B'
//       TD-SCROLL  codep:0x4a4f parp:0xea45 size:0x000c C-string:'TD_dash_SCROLL'
//           WEA53  codep:0x224c parp:0xea53 size:0x002d C-string:'WEA53'
//           WEA82  codep:0x224c parp:0xea82 size:0x0014 C-string:'WEA82'
//           WEA98  codep:0x224c parp:0xea98 size:0x0032 C-string:'WEA98'
//           WEACC  codep:0x224c parp:0xeacc size:0x0098 C-string:'WEACC'
//           WEB66  codep:0x224c parp:0xeb66 size:0x000c C-string:'WEB66'
//           WEB74  codep:0x224c parp:0xeb74 size:0x006e C-string:'WEB74'
//    KEY-ELEM-AMT  codep:0x224c parp:0xebf3 size:0x00db C-string:'KEY_dash_ELEM_dash_AMT'
//           WECD0  codep:0x224c parp:0xecd0 size:0x002a C-string:'WECD0'
//           WECFC  codep:0x224c parp:0xecfc size:0x008b C-string:'WECFC'
//           WED89  codep:0x224c parp:0xed89 size:0x002e C-string:'WED89'
//           WEDB9  codep:0x224c parp:0xedb9 size:0x00b8 C-string:'WEDB9'
//           WEE73  codep:0x224c parp:0xee73 size:0x00c3 C-string:'WEE73'
//           WEF38  codep:0x224c parp:0xef38 size:0x0028 C-string:'WEF38'
//           WEF62  codep:0x224c parp:0xef62 size:0x003c C-string:'WEF62'
//           WEFA0  codep:0x224c parp:0xefa0 size:0x003e C-string:'WEFA0'
//           WEFE0  codep:0x224c parp:0xefe0 size:0x0072 C-string:'WEFE0'
//           WF054  codep:0x224c parp:0xf054 size:0x0054 C-string:'WF054'
//           WF0AA  codep:0x224c parp:0xf0aa size:0x0052 C-string:'WF0AA'
//           WF0FE  codep:0x224c parp:0xf0fe size:0x001c C-string:'WF0FE'
//           WF11C  codep:0x224c parp:0xf11c size:0x001c C-string:'WF11C'
//       SELL-WHAT  codep:0x4a4f parp:0xf146 size:0x0010 C-string:'SELL_dash_WHAT'
//         SELL-IT  codep:0x224c parp:0xf162 size:0x0042 C-string:'SELL_dash_IT'
//           WF1A6  codep:0x224c parp:0xf1a6 size:0x0030 C-string:'WF1A6'
//           WF1D8  codep:0x224c parp:0xf1d8 size:0x00e7 C-string:'WF1D8'
//           WF2C1  codep:0x224c parp:0xf2c1 size:0x0036 C-string:'WF2C1'
//           WF2F9  codep:0x224c parp:0xf2f9 size:0x0072 C-string:'WF2F9'
//        BUY-WHAT  codep:0x4a4f parp:0xf378 size:0x000c C-string:'BUY_dash_WHAT'
//           WF386  codep:0x224c parp:0xf386 size:0x0042 C-string:'WF386'
//           WF3CA  codep:0x224c parp:0xf3ca size:0x005e C-string:'WF3CA'
//  DEPOT-FUNCTION  codep:0x4a4f parp:0xf43b size:0x0014 C-string:'DEPOT_dash_FUNCTION'
//       (U-DEPOT)  codep:0x224c parp:0xf45d size:0x0062 C-string:'_ro_U_dash_DEPOT_rc_'
//          <TDART  codep:0x224c parp:0xf4ca size:0x0000 C-string:'_st_TDART'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_Is_ask__ask_IT; // ???IT
extern const unsigned short int pp_IsTD; // ?TD
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
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp__ro_THIS_dash_I; // (THIS-I
extern const unsigned short int pp_IsTANDRG; // ?TANDRG
extern LoadDataType ELEM_dash_VAL; // ELEM-VAL
extern LoadDataType ART_dash_VAL; // ART-VAL
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color BROWN; // BROWN
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_VAL; // INST-VAL
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
void SPACES(); // SPACES
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void SET_dash_CURRENT(); // SET-CURRENT
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
void _gt_INACTIVE(); // >INACTIVE
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void StoreCOLOR(); // !COLOR
void GetCOLOR(); // @COLOR
void _gt_DISPLAY(); // >DISPLAY
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SCR(); // SAVE-SCR
void SCR_dash_RES(); // SCR-RES
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _gt_3FONT(); // >3FONT
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void SFILL(); // SFILL
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void POS_dot_PXT(); // POS.PXT
void WINDOW(); // WINDOW
void WLINE_dash_UP(); // WLINE-UP
void WLINE_dash_D(); // WLINE-D
void GCR(); // GCR
void WSHORTE(); // WSHORTE
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsQUIT(); // ?QUIT
void Y_slash_N(); // Y/N
void CURSORSPACE(); // CURSORSPACE
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
void delete_dash_scroll_dash_box(); // delete-scroll-box
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
void LLINE(); // LLINE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE2B6 = 0xe2b6; // WE2B6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE2BA = 0xe2ba; // WE2BA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE2BE = 0xe2be; // WE2BE size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4B4 = 0xe4b4; // WE4B4 size: 17
// {0x03, 0x0a, 0x02, 0x09, 0x20, 0x0a, 0x23, 0x09, 0x24, 0x0a, 0x48, 0x09, 0x30, 0x0a, 0x79, 0x09, 0x25}




// 0xe2b2: db 0x28 0x01 '( '

// ================================================
// 0xe2b4: WORD 'WE2B6' codep=0x1d29 parp=0xe2b6
// ================================================
// 0xe2b6: db 0x3a 0x20 ': '

// ================================================
// 0xe2b8: WORD 'WE2BA' codep=0x1d29 parp=0xe2ba
// ================================================
// 0xe2ba: db 0x3a 0x20 ': '

// ================================================
// 0xe2bc: WORD 'WE2BE' codep=0x1d29 parp=0xe2be
// ================================================
// 0xe2be: db 0x3a 0x20 ': '

// ================================================
// 0xe2c0: WORD 'WE2C2' codep=0x224c parp=0xe2c2 params=0 returns=0
// ================================================
// orphan

void WE2C2() // WE2C2
{
  Push(0xc52d); // 'OVINIT-BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe2ca: WORD 'WE2CC' codep=0x224c parp=0xe2cc params=0 returns=0
// ================================================

void WE2CC() // WE2CC
{
  Push(0xc542); // 'OVTRANSACT'
  MODULE(); // MODULE
}


// ================================================
// 0xe2d4: WORD 'WE2D6' codep=0x224c parp=0xe2d6 params=0 returns=0
// ================================================
// orphan

void WE2D6() // WE2D6
{
  Push(0xc596); // 'OV!TFLAG'
  MODULE(); // MODULE
}


// ================================================
// 0xe2de: WORD 'WE2E0' codep=0x224c parp=0xe2e0 params=0 returns=0
// ================================================

void WE2E0() // WE2E0
{
  Push(0xc5ca); // 'T+BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe2e8: WORD 'WE2EA' codep=0x224c parp=0xe2ea params=2 returns=0
// ================================================

void WE2EA() // WE2EA
{
  _gt_C_plus_S(); // >C+S
  Push2Words("*EOL");
  _gt_C_plus_S(); // >C+S
  BOX_gt_LIS(); // BOX>LIS
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe2f8: WORD 'WE2FA' codep=0x224c parp=0xe2fa params=0 returns=1
// ================================================

void WE2FA() // WE2FA
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    GetColor(BLUE);
    return;
  }
  GetColor(DK_dash_BLUE);
}


// ================================================
// 0xe30c: WORD 'WE30E' codep=0x224c parp=0xe30e params=0 returns=0
// ================================================
// orphan

void WE30E() // WE30E
{
  Push(0xbd70); // 'OVQUITMESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe316: WORD 'WE318' codep=0x224c parp=0xe318 params=0 returns=0
// ================================================

void WE318() // WE318
{
  Push(0xbd82); // 'OV.0$$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe320: WORD 'WE322' codep=0x224c parp=0xe322 params=0 returns=0
// ================================================
// orphan

void WE322() // WE322
{
  Push(0xbd97); // 'OV0$$$MESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe32a: WORD 'WE32C' codep=0x224c parp=0xe32c params=0 returns=0
// ================================================

void WE32C() // WE32C
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
// 0xe344: WORD 'WE346' codep=0x224c parp=0xe346 params=0 returns=0
// ================================================

void WE346() // WE346
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
// 0xe36d: WORD 'WE36F' codep=0x224c parp=0xe36f params=0 returns=0
// ================================================

void WE36F() // WE36F
{
  Push(0x0012);
  GetColor(GREY2);
  Push(0x0064);
  Push(0x002c);
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xe381: WORD 'WE383' codep=0x73ea parp=0xe383
// ================================================
LoadDataType WE383 = {ANALYZE_TEXTIDX, 0x00, 0xbe, 0xbe, 0x6790};

// ================================================
// 0xe389: WORD 'WE38B' codep=0x73ea parp=0xe38b
// ================================================
LoadDataType WE38B = {ARTIFACTIDX, 0x18, 0x01, 0x1e, 0x652c};

// ================================================
// 0xe391: WORD 'WE393' codep=0x73ea parp=0xe393
// ================================================
LoadDataType WE393 = {ARTIFACTIDX, 0x1d, 0x01, 0x1e, 0x652c};

// ================================================
// 0xe399: WORD 'WE39B' codep=0x744d parp=0xe39b
// ================================================
IFieldType WE39B = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe39e: WORD 'WE3A0' codep=0x224c parp=0xe3a0 params=0 returns=0
// ================================================

void WE3A0() // WE3A0
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe3a6: WORD 'WE3A8' codep=0x224c parp=0xe3a8 params=0 returns=1
// ================================================

void WE3A8() // WE3A8
{
  WE3A0(); // WE3A0
  Push(Read16(0x63ef+WE39B.offset)); // WE39B<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe3b2: WORD 'WE3B4' codep=0x224c parp=0xe3b4 params=1 returns=0
// ================================================

void WE3B4() // WE3B4
{
  WE3A0(); // WE3A0
  Push(0x63ef+WE39B.offset); // WE39B<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe3be: WORD 'WE3C0' codep=0x224c parp=0xe3c0 params=1 returns=1
// ================================================

void WE3C0() // WE3C0
{
  WE3A8(); // WE3A8
  _gt_(); // >
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe3c8: WORD 'WE3CA' codep=0x224c parp=0xe3ca params=1 returns=1
// ================================================

void WE3CA() // WE3CA
{
  PAD(); // PAD
  _do__ex_(); // $!
  PAD(); // PAD
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
  OVER(); // OVER
  Push(Pop() - 1); //  1-
  C_ex_(); // C!
  Push(Pop() - 1); //  1-
}


// ================================================
// 0xe3de: WORD 'WE3E0' codep=0x224c parp=0xe3e0 params=0 returns=0
// ================================================

void WE3E0() // WE3E0
{
  Push(4);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe3e8: WORD 'WE3EA' codep=0x224c parp=0xe3ea params=2 returns=1
// ================================================

void WE3EA() // WE3EA
{
  U_star_(); // U*
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xe3f8: WORD 'WE3FA' codep=0x224c parp=0xe3fa params=0 returns=0
// ================================================

void WE3FA() // WE3FA
{
  GetColor(WHITE);
  GetColor(DK_dash_BLUE);
  WE2FA(); // WE2FA
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe406: WORD 'WE408' codep=0x224c parp=0xe408 params=0 returns=0
// ================================================

void WE408() // WE408
{
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  WE3FA(); // WE3FA
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
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
  Push(0x0022);
  Push(2);
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x0047);
  Push(2);
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x0078);
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
// 0xe4b2: WORD 'WE4B4' codep=0x1d29 parp=0xe4b4
// ================================================
// 0xe4b4: db 0x03 0x0a 0x02 0x09 0x20 0x0a 0x23 0x09 0x24 0x0a 0x48 0x09 0x30 0x0a 0x79 0x09 0x25 '      # $ H 0 y %'

// ================================================
// 0xe4c5: WORD 'WE4C7' codep=0x224c parp=0xe4c7 params=2 returns=0
// ================================================

void WE4C7() // WE4C7
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
  OFF(); // OFF
  GetCOLOR(); // @COLOR
  GetColor(BLACK);
  GetColor(DK_dash_BLUE);
  GetColor(BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0xc558); // 'OVD@BALANCE'
  MODULE(); // MODULE
  Push(7);
  D_dot_R(); // D.R
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe4f9: WORD 'WE4FB' codep=0x224c parp=0xe4fb params=2 returns=0
// ================================================

void WE4FB() // WE4FB
{
  Push(-1);
  Push(0x0023);
  CMESS(); // CMESS
  GetColor(BLACK);
  GetColor(DK_dash_BLUE);
  GetColor(BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  PRINT("YOUR ACCOUNT BALANCE IS: ", 25); // (.")
  WE4C7(); // WE4C7
  PRINT(" MU", 3); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe535: WORD 'WE537' codep=0x224c parp=0xe537 params=0 returns=0
// ================================================

void WE537() // WE537
{
  _gt_2FONT(); // >2FONT
  WE3FA(); // WE3FA
  Push(0x002b);
  Push(0x00b3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  PRINT("WELCOME", 7); // (.")
  WE3E0(); // WE3E0
  PRINT("TO", 2); // (.")
  WE3E0(); // WE3E0
  PRINT("THE", 3); // (.")
  _gt_3FONT(); // >3FONT
  Push(0x0035);
  Push(0x00a5);
  POS_dot_(); // POS.
  PRINT("TRADE", 5); // (.")
  WE3E0(); // WE3E0
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
// 0xe604: WORD 'WE606' codep=0x224c parp=0xe606
// ================================================

void WE606() // WE606
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
// 0xe626: WORD 'WE628' codep=0x224c parp=0xe628 params=0 returns=0
// ================================================

void WE628() // WE628
{
  CTINIT(); // CTINIT
  Push(Read16(pp_IsTANDRG)); // ?TANDRG @
  if (Pop() != 0)
  {
    GetColor(DK_dash_BLUE);
    StoreCOLOR(); // !COLOR
  }
  Push(0x000c);
  Push(8);
  POS_dot_(); // POS.
  PRINT("BUY", 3); // (.")
  Push(0x002d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("SELL", 4); // (.")
  Push(0x0052);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("ANALYZE ", 8); // (.")
  Push(0x0084);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe677: WORD 'WE679' codep=0x224c parp=0xe679 params=0 returns=0
// ================================================

void WE679() // WE679
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x00b8);
  Push(2);
  Push(0x000c);
  Push(0x009d);
  GetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xe691: WORD 'WE693' codep=0x224c parp=0xe693 params=0 returns=0
// ================================================

void WE693() // WE693
{
  Push(0);
  Push(0x001a);
  CMESS(); // CMESS
  PRINT("^ SCROLL INVENTORY LIST \\", 25); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe6bb: WORD 'WE6BD' codep=0x224c parp=0xe6bd params=2 returns=0
// ================================================

void WE6BD() // WE6BD
{
  WE679(); // WE679
  WE3FA(); // WE3FA
  _gt_1FONT(); // >1FONT
  Push(4);
  Push(0x00a0);
  POS_dot_(); // POS.
  PRINT("ITEM", 4); // (.")
  Push(0x006c);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
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
  WE4FB(); // WE4FB
  WE693(); // WE693
}


// ================================================
// 0xe707: WORD 'WE709' codep=0x224c parp=0xe709 params=13 returns=0
// ================================================

void WE709() // WE709
{
  PRINT("PRESS SPACEBAR TO ", 18); // (.")
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" OR [ QUIT ]", 12); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe733: WORD 'WE735' codep=0x224c parp=0xe735 params=0 returns=0
// ================================================

void WE735() // WE735
{
  Push(1);
  Push(0x0022);
  CMESS(); // CMESS
  SET_STR_AS_PARAM("BUY");
  WE709(); // WE709
}


// ================================================
// 0xe747: WORD 'WE749' codep=0x224c parp=0xe749 params=2 returns=0
// ================================================

void WE749() // WE749
{
  WE6BD(); // WE6BD
  Push(0x008c);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
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
  WE3E0(); // WE3E0
  PRINT("SALE", 4); // (.")
  WE735(); // WE735
}


// ================================================
// 0xe79a: WORD 'WE79C' codep=0x224c parp=0xe79c params=2 returns=0
// ================================================

void WE79C() // WE79C
{
  WE6BD(); // WE6BD
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
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
// 0xe7d1: WORD 'WE7D3' codep=0x224c parp=0xe7d3 params=0 returns=0
// ================================================

void WE7D3() // WE7D3
{
  Push(1);
  Push(0x0021);
  CMESS(); // CMESS
  SET_STR_AS_PARAM("SELL");
  WE709(); // WE709
}


// ================================================
// 0xe7e6: WORD 'WE7E8' codep=0x224c parp=0xe7e8 params=2 returns=0
// ================================================

void WE7E8() // WE7E8
{
  WE79C(); // WE79C
  _gt_2FONT(); // >2FONT
  Push(0x0042);
  Push(0x00b3);
  POS_dot_(); // POS.
  PRINT("CARGO", 5); // (.")
  WE7D3(); // WE7D3
}


// ================================================
// 0xe802: WORD 'WE804' codep=0x224c parp=0xe804 params=2 returns=0
// ================================================

void WE804() // WE804
{
  WE79C(); // WE79C
  _gt_2FONT(); // >2FONT
  Push(0x003a);
  Push(0x00b3);
  POS_dot_(); // POS.
  PRINT("ANALYSIS", 8); // (.")
  Push(1);
  Push(0x0026);
  CMESS(); // CMESS
  SET_STR_AS_PARAM("ANALYZE");
  WE709(); // WE709
}


// ================================================
// 0xe833: WORD 'WE835' codep=0x224c parp=0xe835 params=0 returns=0
// ================================================

void WE835() // WE835
{
  WE408(); // WE408
  WE628(); // WE628
  WE537(); // WE537
}


// ================================================
// 0xe83d: WORD 'WE83F' codep=0x224c parp=0xe83f params=0 returns=2
// ================================================

void WE83F() // WE83F
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xe845: WORD 'WE847' codep=0x224c parp=0xe847 params=0 returns=0
// ================================================

void WE847() // WE847
{
  WE83F(); // WE83F
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe857: WORD 'WE859' codep=0x224c parp=0xe859 params=0 returns=0
// ================================================

void WE859() // WE859
{
  WE83F(); // WE83F
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe869: WORD 'WE86B' codep=0x224c parp=0xe86b params=0 returns=0
// ================================================

void WE86B() // WE86B
{
  WE83F(); // WE83F
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe879: WORD 'WE87B' codep=0x224c parp=0xe87b
// ================================================

void WE87B() // WE87B
{
  PAD(); // PAD
  Push(5);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  WE86B(); // WE86B
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
  CMOVE(); // CMOVE
  PAD(); // PAD
  WE83F(); // WE83F
  _gt_C_plus_S(); // >C+S
  Push((0x63ef+TEXT_dash_TE.offset) + 0x0021); // TEXT-TE<IFIELD> 0x0021 +
  Push(5);
  CMOVE(); // CMOVE
  ICLOSE(); // ICLOSE
  Push(0x0088);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(5);
  GetColor(BLUE);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
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
// 0xe8e7: WORD 'WE8E9' codep=0x224c parp=0xe8e9 params=1 returns=0
// ================================================

void WE8E9() // WE8E9
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
  Store_3(); // !_3
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  WE2FA(); // WE2FA
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  BLT(); // BLT
  StoreCRS(); // !CRS
}


// ================================================
// 0xe915: WORD 'WE917' codep=0x224c parp=0xe917 params=0 returns=0
// ================================================

void WE917() // WE917
{
  Push(0x0097);
  WE8E9(); // WE8E9
}


// ================================================
// 0xe91f: WORD 'WE921' codep=0x224c parp=0xe921 params=0 returns=0
// ================================================

void WE921() // WE921
{
  unsigned short int i, imax;
  WE36F(); // WE36F
  GetColor(BLACK);
  GetColor(GREY1);
  WE2FA(); // WE2FA
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
// 0xe955: WORD 'WE957' codep=0x224c parp=0xe957 params=0 returns=0
// ================================================

void WE957() // WE957
{
  unsigned short int a;
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
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
  WE921(); // WE921
  IPREV(); // IPREV
  WE917(); // WE917
  IsLAST(); // ?LAST
  Push(!Pop()); //  NOT
  Push(pp_WE2BA); // WE2BA
  Store_3(); // !_3
}


// ================================================
// 0xe997: WORD 'WE999' codep=0x224c parp=0xe999 params=0 returns=0
// ================================================

void WE999() // WE999
{
  INEXT(); // INEXT
  WE847(); // WE847
  Push(Read16(pp_WE2BA)); // WE2BA @
  if (Pop() != 0)
  {
    TEXT_gt_PA(); // TEXT>PA
  } else
  {
    Push(0x2001);
    PAD(); // PAD
    Store_3(); // !_3
  }
  PAD(); // PAD
  WE917(); // WE917
  WLINE_dash_UP(); // WLINE-UP
  WE917(); // WE917
  IsLAST(); // ?LAST
  Push(!Pop() & Read16(pp_WE2BA)); //  NOT WE2BA @ AND
  Push(pp_WE2BA); // WE2BA
  Store_3(); // !_3
}


// ================================================
// 0xe9cb: WORD 'WE9CD' codep=0x224c parp=0xe9cd params=0 returns=0
// ================================================

void WE9CD() // WE9CD
{
  unsigned short int a;
  CI(); // CI
  CDROP(); // CDROP
  WE83F(); // WE83F
  _gt_C_plus_S(); // >C+S
  IsLAST(); // ?LAST
  Push(!Pop()); //  NOT
  a = Pop(); // >R
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push(a); // R>
  if (Pop() == 0) return;
  WE999(); // WE999
}


// ================================================
// 0xe9e9: WORD 'WE9EB' codep=0x224c parp=0xe9eb params=0 returns=0
// ================================================

void WE9EB() // WE9EB
{
  IsLAST(); // ?LAST
  Push(Read16(pp_WE2BA)); // WE2BA @
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  Push(Read16(pp_WLINES)); // WLINES @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(pp_WE2BA); // WE2BA
  Store_3(); // !_3
  IPREV(); // IPREV
  WE859(); // WE859
  WE83F(); // WE83F
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  PAD(); // PAD
  WE917(); // WE917
  WLINE_dash_D(); // WLINE-D
  WE917(); // WE917
}


// ================================================
// 0xea19: WORD 'WEA1B' codep=0x224c parp=0xea1b params=0 returns=0
// ================================================

void WEA1B() // WEA1B
{
  unsigned short int a;
  CI(); // CI
  CDROP(); // CDROP
  WE83F(); // WE83F
  _gt_C_plus_S(); // >C+S
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  a = Pop(); // >R
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push(a); // R>
  if (Pop() == 0) return;
  WE9EB(); // WE9EB
}


// ================================================
// 0xea37: WORD 'TD-SCROLL' codep=0x4a4f parp=0xea45
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 1:
    WE9CD(); // WE9CD
    break;
  case 65535:
    WEA1B(); // WEA1B
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xea51: WORD 'WEA53' codep=0x224c parp=0xea53 params=0 returns=0
// ================================================

void WEA53() // WEA53
{
  WE32C(); // WE32C
  Push(1);
  Push(0x0018);
  CMESS(); // CMESS
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("INSUFFICIENT CARGO SPACE", 24); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xea80: WORD 'WEA82' codep=0x224c parp=0xea82 params=0 returns=0
// ================================================

void WEA82() // WEA82
{
  WE32C(); // WE32C
  Push(1);
  Push(0x0012);
  CMESS(); // CMESS
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  WE318(); // WE318
  StoreCRS(); // !CRS
}


// ================================================
// 0xea96: WORD 'WEA98' codep=0x224c parp=0xea98 params=1 returns=1
// ================================================

void WEA98() // WEA98
{
  SAVE_dash_SCR(); // SAVE-SCR
  Push(0);
  Push(0xc583); // 'OV?BALANCE'
  MODULE(); // MODULE
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WEA82(); // WEA82
    BEEP(); // BEEP
    WE606(); // WE606
    Pop(); // DROP
    Push(0);
  } else
  {
    WE3C0(); // WE3C0
    Push(Read16(regsp)); // DUP
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WEA53(); // WEA53
      BEEP(); // BEEP
      WE606(); // WE606
    }
  }
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xeaca: WORD 'WEACC' codep=0x224c parp=0xeacc params=0 returns=1
// ================================================

void WEACC() // WEACC
{
  unsigned short int i, imax;
  Push(Read16(pp_IsTD)); // ?TD @
  if (Pop() != 0)
  {
    WE2FA(); // WE2FA
  } else
  {
    GetColor(BLUE);
  }
  StoreCOLOR(); // !COLOR
  Push(pp_WE2BE); // WE2BE
  ON_3(); // ON_3
  Push(0x002e);
  Push(pp__dash_AIN); // -AIN
  Store_3(); // !_3
  Push(6);
  Push(0xbd5b); // 'OV#IN$'
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
        Push(pp_WE2BE); // WE2BE
        OFF(); // OFF
      }
    } else
    {
      Push(Pop() * 0x000a + ((Read16(i)&0xFF) - 0x0030)); //  0x000a * I C@ 0x0030 - +
      Push(Read16(pp_WE2BE)==0?1:0); // WE2BE @ 0=
      if (Pop() != 0)
      {
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_WE2BE)); // WE2BE @
  if (Pop() != 0)
  {
    Push(Pop() * 0x000a); //  0x000a *
  }
  ABS(); // ABS
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  MIN(); // MIN
}


// ================================================
// 0xeb64: WORD 'WEB66' codep=0x224c parp=0xeb66
// ================================================

void WEB66() // WEB66
{
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop())); //  @
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xeb72: WORD 'WEB74' codep=0x224c parp=0xeb74
// ================================================

void WEB74() // WEB74
{
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
    MIN(); // MIN
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_3(); // !_3
    return;
  }
  Push(0xc558); // 'OVD@BALANCE'
  MODULE(); // MODULE
  _2DUP(); // 2DUP
  WEB66(); // WEB66
  ROT(); // ROT
  ROT(); // ROT
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop()) * 0x0064); //  @ 0x0064 *
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Store_3(); // !_3
  WEB66(); // WEB66
  MAX(); // MAX
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop())); //  @
  Push(0x0064);
  _slash_(); // /
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Store_3(); // !_3
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
  Store_3(); // !_3
}


// ================================================
// 0xebe2: WORD 'KEY-ELEM-AMT' codep=0x224c parp=0xebf3
// ================================================
// entry

void KEY_dash_ELEM_dash_AMT() // KEY-ELEM-AMT
{
  Push(Read16(pp_WE2B6) | !Read16(pp_IsTD)); // WE2B6 @ ?TD @ NOT OR
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_3(); // !_3
  } else
  {
    WE3A8(); // WE3A8
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_3(); // !_3
    WEB74(); // WEB74
  }
  WE32C(); // WE32C
  Push(0);
  Push(0x001f);
  CMESS(); // CMESS
  Push(Read16(pp_IsTD)); // ?TD @
  if (Pop() != 0)
  {
    PRINT("TRANSFER", 8); // (.")
  } else
  {
    Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
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
  WEACC(); // WEACC
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_3(); // !_3
  StoreCRS(); // !CRS
  WE32C(); // WE32C
}


// ================================================
// 0xecce: WORD 'WECD0' codep=0x224c parp=0xecd0
// ================================================

void WECD0() // WECD0
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    do
    {
      INEXT(); // INEXT
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(Pop()==0x000f?1:0); //  0x000f =
    } while(Pop() == 0);
    BOX_gt_LIS(); // BOX>LIS
  }
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xecfa: WORD 'WECFC' codep=0x224c parp=0xecfc
// ================================================

void WECFC() // WECFC
{
  unsigned short int i, imax;
  WE87B(); // WE87B
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x0039);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 0x000e); // WTOP @ 0x000e -
  POS_dot_(); // POS.
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    LoadData(WE383); // from 'ANALYZE_TEXT'
    Push(Pop() + i * 0x0026); //  I 0x0026 * +
    PAD(); // PAD
    Push(Pop() + 1); //  1+
    Push(0x0026);
    CMOVE(); // CMOVE
    Push(0x0026);
    PAD(); // PAD
    C_ex_(); // C!
    PAD(); // PAD
    WE3CA(); // WE3CA
    Push(0x0026);
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    _dash_(); // -
    Push(Pop() >> 1); //  2/
    SPACES(); // SPACES
    _do__dot_(); // $.
    GCR(); // GCR
    i++;
  } while(i<imax); // (LOOP)

  GCR(); // GCR
  GCR(); // GCR
  Push(0x003f);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("[ QUIT ]", 8); // (.")
  Push(0);
  GetColor(GREY2);
  X0MESS(); // X0MESS
  Push(1);
  GetColor(GREY2);
  X0MESS(); // X0MESS
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); Pop(); // 2DROP
    IsQUIT(); // ?QUIT
  } while(Pop() == 0);
}


// ================================================
// 0xed87: WORD 'WED89' codep=0x224c parp=0xed89
// ================================================

void WED89() // WED89
{
  Push(Read16(pp_WTOP) - 7); // WTOP @ 7 -
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM)); // WBOTTOM @
  Push(Read16(pp_WRIGHT)); // WRIGHT @
  GetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  CTINIT(); // CTINIT
  WE86B(); // WE86B
  LoadData(WE38B); // from 'ARTIFACT'
  Push(Read16(Pop())&0xFF); //  C@
  WECFC(); // WECFC
  ICLOSE(); // ICLOSE
  Push(0x00ff);
  LoadData(WE393); // from 'ARTIFACT'
  C_ex_(); // C!
}


// ================================================
// 0xedb7: WORD 'WEDB9' codep=0x224c parp=0xedb9 params=0 returns=0
// ================================================

void WEDB9() // WEDB9
{
  WE86B(); // WE86B
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x001c?1:0); //  0x001c =
  if (Pop() != 0)
  {
    SAVE_dash_SCR(); // SAVE-SCR
    LoadData(WE393); // from 'ARTIFACT'
    Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
    if (Pop() != 0)
    {
      Push(0xff38);
      Push(0x01f4);
      WEA98(); // WEA98
      if (Pop() != 0)
      {
        WE32C(); // WE32C
        Push(0);
        Push(0x0012);
        CMESS(); // CMESS
        PRINT("ANALYSIS IS 500 MU", 18); // (.")
        StoreCRS(); // !CRS
        Push(1);
        Push(0x001c);
        CMESS(); // CMESS
        PRINT("ANALYZE THIS ARTIFACT\? [N Y]", 28); // (.")
        StoreCRS(); // !CRS
        Y_slash_N(); // Y/N
      } else
      {
        Push(0);
      }
      Push(pp_FQUIT); // FQUIT
      OFF(); // OFF
    } else
    {
      Push(1);
    }
    if (Pop() != 0)
    {
      LoadData(WE393); // from 'ARTIFACT'
      Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
      Push(0xfe0c);
      M_star_(); // M*
      _2DUP(); // 2DUP
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        WE2E0(); // WE2E0
      } else
      {
        Pop(); Pop(); // 2DROP
      }
      GetCRS(); // @CRS
      WED89(); // WED89
      _gt_HIDDEN(); // >HIDDEN
      WE87B(); // WE87B
      _gt_DISPLAY(); // >DISPLAY
      StoreCRS(); // !CRS
    }
    SCR_dash_RES(); // SCR-RES
    WE4C7(); // WE4C7
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee71: WORD 'WEE73' codep=0x224c parp=0xee73
// ================================================

void WEE73() // WEE73
{
  WE804(); // WE804
  WE346(); // WE346
  MAKE_dash_SC(); // MAKE-SC
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  Store_3(); // !_3
  Push(pp_Is_ask__ask_IT); // ???IT
  OFF(); // OFF
  Push(0);
  Push2Words("*STARSHIP-HOLD");
  WECD0(); // WECD0
  Push(Pop() + Pop()); // +
  Push2Words("*ITEMS-");
  WECD0(); // WECD0
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push2Words("*ITEMS-");
    WE2EA(); // WE2EA
    WE957(); // WE957
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      TD_dash_SCROLL(); // TD-SCROLL case
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        WEDB9(); // WEDB9
      }
      IsQUIT(); // ?QUIT
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
    ICLOSE(); // ICLOSE
  } else
  {
    GetCRS(); // @CRS
    CTINIT(); // CTINIT
    WE36F(); // WE36F
    Push(0x001e);
    Push(0x0068);
    POS_dot_(); // POS.
    PRINT("THERE ARE NO ARTIFACTS IN", 25); // (.")
    Push(0x0028);
    Push(0x0061);
    POS_dot_(); // POS.
    PRINT("STARSHIP OR STARPORT", 20); // (.")
    WE606(); // WE606
    StoreCRS(); // !CRS
    Push(0x0019);
    GetColor(GREY2);
    Push(0x0068);
    Push(0x001e);
    POS_dot_PXT(); // POS.PXT
    Push(0x0015);
    GetColor(GREY2);
    Push(0x0061);
    Push(0x0026);
    POS_dot_PXT(); // POS.PXT
  }
  delete_dash_scroll_dash_box(); // delete-scroll-box
  if (Pop() == 0) return;
  WE917(); // WE917
}


// ================================================
// 0xef36: WORD 'WEF38' codep=0x224c parp=0xef38 params=3 returns=1
// ================================================

void WEF38() // WEF38
{
  Push(Read16(pp_IsTD)); // ?TD @
  if (Pop() != 0)
  {
    Push(Read16(0x63ef+INST_dash_VAL.offset)); // INST-VAL<IFIELD> @
    Push(Read16(pp__pe_VAL)); // %VAL @
    WE3EA(); // WE3EA
    Push(0);
    WE2E0(); // WE2E0
  }
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  WE3A8(); // WE3A8
  Push(Pop() + Pop()); // +
  WE3B4(); // WE3B4
  BOX_gt_(); // BOX>
  _gt_INACTIVE(); // >INACTIVE
  Push(Pop() + 1); //  1+
}


// ================================================
// 0xef60: WORD 'WEF62' codep=0x224c parp=0xef62
// ================================================

void WEF62() // WEF62
{
  Push(Read16(pp_IsTD)); // ?TD @
  if (Pop() != 0)
  {
    LoadData(ART_dash_VAL); // from 'ARTIFACT'
    Push(Read16(Pop())); //  @
    Push(Read16(pp__pe_VAL)); // %VAL @
    WE3EA(); // WE3EA
    Push(0);
    WE2E0(); // WE2E0
  }
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  WE3A8(); // WE3A8
  Push(Pop() + Pop()); // +
  WE3B4(); // WE3B4
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
    _gt_INACTIVE(); // >INACTIVE
  }
  Push(Pop() + 1); //  1+
}


// ================================================
// 0xef9e: WORD 'WEFA0' codep=0x224c parp=0xefa0
// ================================================

void WEFA0() // WEFA0
{
  KEY_dash_ELEM_dash_AMT(); // KEY-ELEM-AMT
  Push(Read16(pp_IsTD)); // ?TD @
  if (Pop() != 0)
  {
    LoadData(ELEM_dash_VAL); // from 'ELEMENT'
    Push(Read16(Pop())); //  @
    Push(Read16(pp__pe_VAL)); // %VAL @
    WE3EA(); // WE3EA
    Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    MIN(); // MIN
    M_star_(); // M*
    WE2E0(); // WE2E0
  }
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(Read16(regsp)); // DUP
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  MIN(); // MIN
  WE3A8(); // WE3A8
  Push(Pop() + Pop()); // +
  WE3B4(); // WE3B4
  _0_st_(); // 0<
  BOX_gt_(); // BOX>
  _gt_INACTIVE(); // >INACTIVE
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xefde: WORD 'WEFE0' codep=0x224c parp=0xefe0 params=0 returns=0
// ================================================

void WEFE0() // WEFE0
{
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  WE86B(); // WE86B
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(0x000a);
  _slash_MOD(); // /MOD
  ICLOSE(); // ICLOSE
  WE83F(); // WE83F
  _gt_C_plus_S(); // >C+S
  Push((0x63ef+TEXT_dash_TE.offset) + 0x001a); // TEXT-TE<IFIELD> 0x001a +
  Push(6);
  Push(0x002e);
  FILL_1(); // FILL_1
  U_gt__do_(); // U>$
  Push((0x63ef+TEXT_dash_TE.offset) + 0x001e); // TEXT-TE<IFIELD> 0x001e +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read16(Pop())&0xFF); //  C@
  Push((0x63ef+TEXT_dash_TE.offset) + 0x001f); // TEXT-TE<IFIELD> 0x001f +
  C_ex_(); // C!
  WE917(); // WE917
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(0x0026);
  GetColor(GREY2);
  _2OVER(); // 2OVER
  POS_dot_PXT(); // POS.PXT
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x63ef+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  Push(0x0026);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
  WE917(); // WE917
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xf052: WORD 'WF054' codep=0x224c parp=0xf054
// ================================================

void WF054() // WF054
{
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
    OVER(); // OVER
    IFIND(); // IFIND
    Push(Pop() * Read16(0x63ef+INST_dash_QTY.offset)); //  INST-QTY<IFIELD> @ *
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
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
  CDROP(); // CDROP
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0a8: WORD 'WF0AA' codep=0x224c parp=0xf0aa params=1 returns=0
// ================================================

void WF0AA() // WF0AA
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    SAVE_dash_SCR(); // SAVE-SCR
    _gt_HIDDEN(); // >HIDDEN
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      WE83F(); // WE83F
      WE859(); // WE859
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
      WE9EB(); // WE9EB
      WE999(); // WE999
      i++;
    } while(i<imax); // (LOOP)

    _gt_DISPLAY(); // >DISPLAY
    SCR_dash_RES(); // SCR-RES
    WE9CD(); // WE9CD
    return;
  }
  WE86B(); // WE86B
  GetINST_dash_CLASS(); // @INST-CLASS
  ICLOSE(); // ICLOSE
  Push(Pop()==0x001a?1:0); //  0x001a =
  if (Pop() == 0) return;
  WEFE0(); // WEFE0
}


// ================================================
// 0xf0fc: WORD 'WF0FE' codep=0x224c parp=0xf0fe
// ================================================

void WF0FE() // WF0FE
{
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop()) * 2); //  @ 2*
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Store_3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf11a: WORD 'WF11C' codep=0x224c parp=0xf11c
// ================================================

void WF11C() // WF11C
{
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop()) >> 1); //  @ 2/
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Store_3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf138: WORD 'SELL-WHAT' codep=0x4a4f parp=0xf146
// ================================================

void SELL_dash_WHAT() // SELL-WHAT
{
  switch(Pop()) // SELL-WHAT
  {
  case 11:
    Push(0);
    break;
  case 28:
    WEF62(); // WEF62
    break;
  case 26:
    WEFA0(); // WEFA0
    break;
  default:
    WEF38(); // WEF38
    break;

  }
}

// ================================================
// 0xf156: WORD 'SELL-IT' codep=0x224c parp=0xf162
// ================================================
// entry

void SELL_dash_IT() // SELL-IT
{
  unsigned short int a;
  CDEPTH(); // CDEPTH
  WE83F(); // WE83F
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push(0x63ef+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push2Words("*STARSHIP-HOLD");
  _gt_C(); // >C
  _gt_C(); // >C
  _gt_C_plus_(); // >C+
  SET_dash_CURRENT(); // SET-CURRENT
  GetINST_dash_CLASS(); // @INST-CLASS
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
// 0xf1a4: WORD 'WF1A6' codep=0x224c parp=0xf1a6
// ================================================

void WF1A6() // WF1A6
{
  SELL_dash_IT(); // SELL-IT
  if (Pop() != 0)
  {
    WF0AA(); // WF0AA
  } else
  {
    Pop(); // DROP
    WE917(); // WE917
    Push(Read16(pp_WTOP)); // WTOP @
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push(Read16(pp_WBOTTOM) - 8); // WBOTTOM @ 8 -
    Push(Read16(pp_WRIGHT)); // WRIGHT @
    GetColor(GREY2);
    POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
    WE917(); // WE917
  }
  WE693(); // WE693
  WE7D3(); // WE7D3
}


// ================================================
// 0xf1d6: WORD 'WF1D8' codep=0x224c parp=0xf1d8
// ================================================

void WF1D8() // WF1D8
{
  Push(pp_WE2B6); // WE2B6
  ON_3(); // ON_3
  WE7E8(); // WE7E8
  MAKE_dash_SC(); // MAKE-SC
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  Store_3(); // !_3
  Push(pp_Is_ask__ask_IT); // ???IT
  OFF(); // OFF
  WF0FE(); // WF0FE
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0);
  CI(); // CI
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x0011?1:0); //  0x0011 =
  IPREV(); // IPREV
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x001b?1:0); //  0x001b =
  Push(Pop() & Pop()); // AND
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  INEXT(); // INEXT
  if (Pop() != 0)
  {
    WE346(); // WE346
    do
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(!(Pop()==0x0011?1:0)); //  0x0011 = NOT
      GetINST_dash_CLASS(); // @INST-CLASS
      Push(Pop()==0x000b?1:0); //  0x000b =
      Push(Pop() & Pop()); // AND
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
    Push2Words("*STARSHIP-HOLD");
    WE2EA(); // WE2EA
    WE957(); // WE957
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      TD_dash_SCROLL(); // TD-SCROLL case
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        WF1A6(); // WF1A6
        WE4C7(); // WE4C7
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
    Push(0x0024);
    Push(0x0064);
    POS_dot_(); // POS.
    PRINT("STARSHIP HOLD IS EMPTY", 22); // (.")
    WE606(); // WE606
    StoreCRS(); // !CRS
    Push(0x0017);
    GetColor(GREY2);
    Push(0x006b);
    Push(0x0022);
    POS_dot_PXT(); // POS.PXT
  }
  delete_dash_scroll_dash_box(); // delete-scroll-box
  if (Pop() != 0)
  {
    WE917(); // WE917
  }
  WF11C(); // WF11C
}


// ================================================
// 0xf2bf: WORD 'WF2C1' codep=0x224c parp=0xf2c1
// ================================================

void WF2C1() // WF2C1
{
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  LoadData(ART_dash_VAL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  WEA98(); // WEA98
  if (Pop() != 0)
  {
    LoadData(ART_dash_VAL); // from 'ARTIFACT'
    Push(Read16(Pop())); //  @
    Push(0);
    DNEGATE(); // DNEGATE
    WE2E0(); // WE2E0
    WE3A8(); // WE3A8
    LoadData(ART_dash_VOL); // from 'ARTIFACT'
    Push(Read16(Pop())); //  @
    _dash_(); // -
    WE3B4(); // WE3B4
    BOX_gt_(); // BOX>
    Push2Words("*STARSHIP-HOLD");
    _gt_C_plus_S(); // >C+S
    _gt_BOX(); // >BOX
    ICLOSE(); // ICLOSE
    Push(Pop() + 1); //  1+
    return;
  }
  Push(0);
}


// ================================================
// 0xf2f7: WORD 'WF2F9' codep=0x224c parp=0xf2f9
// ================================================

void WF2F9() // WF2F9
{
  unsigned short int a;
  Push(1);
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop())); //  @
  WEA98(); // WEA98
  if (Pop() != 0)
  {
    KEY_dash_ELEM_dash_AMT(); // KEY-ELEM-AMT
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    LoadData(ELEM_dash_VAL); // from 'ELEMENT'
    Push(Read16(Pop())); //  @
    Push(Pop() * Pop()); // *
    WEA98(); // WEA98
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      a = Pop(); // >R
      LoadData(ELEM_dash_VAL); // from 'ELEMENT'
      Push(Read16(Pop())); //  @
      Push(a); // I
      U_star_(); // U*
      DNEGATE(); // DNEGATE
      WE2E0(); // WE2E0
      WE3A8(); // WE3A8
      Push(Pop() - a); //  I -
      WE3B4(); // WE3B4
      Push(a); // I
      Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
      _plus__ex__2(); // +!_2
      Push(0x001a);
      GetINST_dash_SPECIES(); // @INST-SPECIES
      ICREATE(); // ICREATE
      _gt_C_plus_S(); // >C+S
      Push(a); // R>
      Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
      Store_3(); // !_3
      CI(); // CI
      ICLOSE(); // ICLOSE
      Push2Words("*STARSHIP-HOLD");
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
// 0xf36b: WORD 'BUY-WHAT' codep=0x4a4f parp=0xf378
// ================================================

void BUY_dash_WHAT() // BUY-WHAT
{
  switch(Pop()) // BUY-WHAT
  {
  case 28:
    WF2C1(); // WF2C1
    break;
  case 26:
    WF2F9(); // WF2F9
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf384: WORD 'WF386' codep=0x224c parp=0xf386
// ================================================

void WF386() // WF386
{
  unsigned short int a;
  CDEPTH(); // CDEPTH
  WE83F(); // WE83F
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push(0x63ef+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ITEMS-");
  _gt_C(); // >C
  _gt_C(); // >C
  _gt_C_plus_(); // >C+
  SET_dash_CURRENT(); // SET-CURRENT
  GetINST_dash_CLASS(); // @INST-CLASS
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
  WF0AA(); // WF0AA
  WE693(); // WE693
  WE735(); // WE735
}


// ================================================
// 0xf3c8: WORD 'WF3CA' codep=0x224c parp=0xf3ca
// ================================================

void WF3CA() // WF3CA
{
  Push(pp_WE2B6); // WE2B6
  OFF(); // OFF
  WE749(); // WE749
  WE346(); // WE346
  MAKE_dash_SC(); // MAKE-SC
  Push(0x0064);
  Push(pp__pe_VAL); // %VAL
  Store_3(); // !_3
  Push(pp_Is_ask__ask_IT); // ???IT
  ON_3(); // ON_3
  Push(6);
  WF054(); // WF054
  Push(1);
  WF054(); // WF054
  Push(4);
  WF054(); // WF054
  Push(0x000c);
  WF054(); // WF054
  Push(0x0010);
  WF054(); // WF054
  Push(0x0014);
  WF054(); // WF054
  Push2Words("*ITEMS-");
  GET_dash_BOX(); // GET-BOX
  Push2Words("*ITEMS-");
  WE2EA(); // WE2EA
  WE957(); // WE957
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    TD_dash_SCROLL(); // TD-SCROLL case
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      WF386(); // WF386
      WE4C7(); // WE4C7
    }
    IsQUIT(); // ?QUIT
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  delete_dash_scroll_dash_box(); // delete-scroll-box
  WE917(); // WE917
}


// ================================================
// 0xf428: WORD 'DEPOT-FUNCTION' codep=0x4a4f parp=0xf43b
// ================================================

void DEPOT_dash_FUNCTION() // DEPOT-FUNCTION
{
  switch(Pop()) // DEPOT-FUNCTION
  {
  case 0:
    WF3CA(); // WF3CA
    break;
  case 1:
    WF1D8(); // WF1D8
    break;
  case 2:
    WEE73(); // WEE73
    break;
  case 3:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf44f: WORD '(U-DEPOT)' codep=0x224c parp=0xf45d
// ================================================
// entry

void _ro_U_dash_DEPOT_rc_() // (U-DEPOT)
{
  unsigned short int a;
  Push(pp_IsTD); // ?TD
  ON_3(); // ON_3
  _gt_HIDDEN(); // >HIDDEN
  WE835(); // WE835
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  GetColor(GREY2);
  GetColor(GREY1);
  WE2FA(); // WE2FA
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
  Push(pp_WE4B4); // WE4B4
  BLD_dash_CRS(); // BLD-CRS
  do
  {
    XYSCAN(); // XYSCAN
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Push(pp_WE4B4); // WE4B4
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
      WE32C(); // WE32C
      StoreCRS(); // !CRS
      Push(a); // R>
    } else
    {
      Push(0);
    }
  } while(Pop() == 0);
  Push(2);
  WE2CC(); // WE2CC
  Push(pp_IsTD); // ?TD
  OFF(); // OFF
}


// ================================================
// 0xf4bf: WORD '<TDART' codep=0x224c parp=0xf4ca
// ================================================
// entry

void _st_TDART() // <TDART
{
  Push2Words("*ITEMS-");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0);
    do
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(0x000f);
      _gt_(); // >
      Push(Pop() + Pop()); // +
      Push(Read16(regsp)); // DUP
      Push(0x000a);
      _gt_(); // >
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(0x000f);
      _gt_(); // >
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        IDELETE(); // IDELETE
      } else
      {
        INEXT(); // INEXT
      }
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    Pop(); // DROP
    ICLOSE(); // ICLOSE
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xf51a: db 0x54 0x44 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x69 0x78 0x20 0x66 0x6f 0x72 0x20 0x54 0x52 0x41 0x44 0x45 0x20 0x44 0x45 0x50 0x4f 0x54 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x38 0x31 0x32 0x39 0x36 0x5f 0x5f 0x00 'TD-VOC__________________________fix for TRADE DEPOT---------- )81296__ '

