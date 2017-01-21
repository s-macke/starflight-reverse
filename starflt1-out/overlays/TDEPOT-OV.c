// ====== OVERLAY 'TDEPOT-OV' ======
// store offset = 0xe2a0
// overlay size   = 0x12c0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe2b6  codep:0x1d29 parp:0xe2b6 size:0x0002 C-string:'UNK_0xe2b6'
//      UNK_0xe2ba  codep:0x1d29 parp:0xe2ba size:0x0002 C-string:'UNK_0xe2ba'
//      UNK_0xe2be  codep:0x1d29 parp:0xe2be size:0x000c C-string:'UNK_0xe2be'
//      UNK_0xe2cc  codep:0x224c parp:0xe2cc size:0x0012 C-string:'UNK_0xe2cc'
//      UNK_0xe2e0  codep:0x224c parp:0xe2e0 size:0x0008 C-string:'UNK_0xe2e0'
//      UNK_0xe2ea  codep:0x224c parp:0xe2ea size:0x000e C-string:'UNK_0xe2ea'
//      UNK_0xe2fa  codep:0x224c parp:0xe2fa size:0x001c C-string:'UNK_0xe2fa'
//      UNK_0xe318  codep:0x224c parp:0xe318 size:0x0012 C-string:'UNK_0xe318'
//      UNK_0xe32c  codep:0x224c parp:0xe32c size:0x0018 C-string:'UNK_0xe32c'
//      UNK_0xe346  codep:0x224c parp:0xe346 size:0x0027 C-string:'UNK_0xe346'
//      UNK_0xe36f  codep:0x224c parp:0xe36f size:0x0012 C-string:'UNK_0xe36f'
//      UNK_0xe383  codep:0x73ea parp:0xe383 size:0x0006 C-string:'UNK_0xe383'
//      UNK_0xe38b  codep:0x73ea parp:0xe38b size:0x0006 C-string:'UNK_0xe38b'
//      UNK_0xe393  codep:0x73ea parp:0xe393 size:0x0006 C-string:'UNK_0xe393'
//      UNK_0xe39b  codep:0x744d parp:0xe39b size:0x0003 C-string:'UNK_0xe39b'
//      UNK_0xe3a0  codep:0x224c parp:0xe3a0 size:0x0006 C-string:'UNK_0xe3a0'
//      UNK_0xe3a8  codep:0x224c parp:0xe3a8 size:0x000a C-string:'UNK_0xe3a8'
//      UNK_0xe3b4  codep:0x224c parp:0xe3b4 size:0x000a C-string:'UNK_0xe3b4'
//      UNK_0xe3c0  codep:0x224c parp:0xe3c0 size:0x0008 C-string:'UNK_0xe3c0'
//      UNK_0xe3ca  codep:0x224c parp:0xe3ca size:0x0014 C-string:'UNK_0xe3ca'
//      UNK_0xe3e0  codep:0x224c parp:0xe3e0 size:0x0008 C-string:'UNK_0xe3e0'
//      UNK_0xe3ea  codep:0x224c parp:0xe3ea size:0x000e C-string:'UNK_0xe3ea'
//      UNK_0xe3fa  codep:0x224c parp:0xe3fa size:0x000c C-string:'UNK_0xe3fa'
//      UNK_0xe408  codep:0x224c parp:0xe408 size:0x00aa C-string:'UNK_0xe408'
//      UNK_0xe4b4  codep:0x1d29 parp:0xe4b4 size:0x0011 C-string:'UNK_0xe4b4'
//      UNK_0xe4c7  codep:0x224c parp:0xe4c7 size:0x0032 C-string:'UNK_0xe4c7'
//      UNK_0xe4fb  codep:0x224c parp:0xe4fb size:0x003a C-string:'UNK_0xe4fb'
//      UNK_0xe537  codep:0x224c parp:0xe537 size:0x00cd C-string:'UNK_0xe537'
//      UNK_0xe606  codep:0x224c parp:0xe606 size:0x0020 C-string:'UNK_0xe606'
//      UNK_0xe628  codep:0x224c parp:0xe628 size:0x004f C-string:'UNK_0xe628'
//      UNK_0xe679  codep:0x224c parp:0xe679 size:0x0018 C-string:'UNK_0xe679'
//      UNK_0xe693  codep:0x224c parp:0xe693 size:0x0028 C-string:'UNK_0xe693'
//      UNK_0xe6bd  codep:0x224c parp:0xe6bd size:0x004a C-string:'UNK_0xe6bd'
//      UNK_0xe709  codep:0x224c parp:0xe709 size:0x002a C-string:'UNK_0xe709'
//      UNK_0xe735  codep:0x224c parp:0xe735 size:0x0012 C-string:'UNK_0xe735'
//      UNK_0xe749  codep:0x224c parp:0xe749 size:0x0051 C-string:'UNK_0xe749'
//      UNK_0xe79c  codep:0x224c parp:0xe79c size:0x0035 C-string:'UNK_0xe79c'
//      UNK_0xe7d3  codep:0x224c parp:0xe7d3 size:0x0013 C-string:'UNK_0xe7d3'
//      UNK_0xe7e8  codep:0x224c parp:0xe7e8 size:0x001a C-string:'UNK_0xe7e8'
//      UNK_0xe804  codep:0x224c parp:0xe804 size:0x002f C-string:'UNK_0xe804'
//      UNK_0xe835  codep:0x224c parp:0xe835 size:0x0008 C-string:'UNK_0xe835'
//      UNK_0xe83f  codep:0x224c parp:0xe83f size:0x0006 C-string:'UNK_0xe83f'
//      UNK_0xe847  codep:0x224c parp:0xe847 size:0x0010 C-string:'UNK_0xe847'
//      UNK_0xe859  codep:0x224c parp:0xe859 size:0x0010 C-string:'UNK_0xe859'
//      UNK_0xe86b  codep:0x224c parp:0xe86b size:0x000e C-string:'UNK_0xe86b'
//      UNK_0xe87b  codep:0x224c parp:0xe87b size:0x006c C-string:'UNK_0xe87b'
//      UNK_0xe8e9  codep:0x224c parp:0xe8e9 size:0x002c C-string:'UNK_0xe8e9'
//      UNK_0xe917  codep:0x224c parp:0xe917 size:0x0008 C-string:'UNK_0xe917'
//      UNK_0xe921  codep:0x224c parp:0xe921 size:0x0034 C-string:'UNK_0xe921'
//      UNK_0xe957  codep:0x224c parp:0xe957 size:0x0040 C-string:'UNK_0xe957'
//      UNK_0xe999  codep:0x224c parp:0xe999 size:0x0032 C-string:'UNK_0xe999'
//      UNK_0xe9cd  codep:0x224c parp:0xe9cd size:0x001c C-string:'UNK_0xe9cd'
//      UNK_0xe9eb  codep:0x224c parp:0xe9eb size:0x002e C-string:'UNK_0xe9eb'
//      UNK_0xea1b  codep:0x224c parp:0xea1b size:0x001c C-string:'UNK_0xea1b'
//       TD-SCROLL  codep:0x4a4f parp:0xea45 size:0x000c C-string:'TD_dash_SCROLL'
//      UNK_0xea53  codep:0x224c parp:0xea53 size:0x002d C-string:'UNK_0xea53'
//      UNK_0xea82  codep:0x224c parp:0xea82 size:0x0014 C-string:'UNK_0xea82'
//      UNK_0xea98  codep:0x224c parp:0xea98 size:0x0032 C-string:'UNK_0xea98'
//      UNK_0xeacc  codep:0x224c parp:0xeacc size:0x0098 C-string:'UNK_0xeacc'
//      UNK_0xeb66  codep:0x224c parp:0xeb66 size:0x000c C-string:'UNK_0xeb66'
//      UNK_0xeb74  codep:0x224c parp:0xeb74 size:0x006e C-string:'UNK_0xeb74'
//    KEY-ELEM-AMT  codep:0x224c parp:0xebf3 size:0x00db C-string:'KEY_dash_ELEM_dash_AMT'
//      UNK_0xecd0  codep:0x224c parp:0xecd0 size:0x002a C-string:'UNK_0xecd0'
//      UNK_0xecfc  codep:0x224c parp:0xecfc size:0x008b C-string:'UNK_0xecfc'
//      UNK_0xed89  codep:0x224c parp:0xed89 size:0x002e C-string:'UNK_0xed89'
//      UNK_0xedb9  codep:0x224c parp:0xedb9 size:0x00b8 C-string:'UNK_0xedb9'
//      UNK_0xee73  codep:0x224c parp:0xee73 size:0x00c3 C-string:'UNK_0xee73'
//      UNK_0xef38  codep:0x224c parp:0xef38 size:0x0028 C-string:'UNK_0xef38'
//      UNK_0xef62  codep:0x224c parp:0xef62 size:0x003c C-string:'UNK_0xef62'
//      UNK_0xefa0  codep:0x224c parp:0xefa0 size:0x003e C-string:'UNK_0xefa0'
//      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x0072 C-string:'UNK_0xefe0'
//      UNK_0xf054  codep:0x224c parp:0xf054 size:0x0054 C-string:'UNK_0xf054'
//      UNK_0xf0aa  codep:0x224c parp:0xf0aa size:0x0052 C-string:'UNK_0xf0aa'
//      UNK_0xf0fe  codep:0x224c parp:0xf0fe size:0x001c C-string:'UNK_0xf0fe'
//      UNK_0xf11c  codep:0x224c parp:0xf11c size:0x001c C-string:'UNK_0xf11c'
//       SELL-WHAT  codep:0x4a4f parp:0xf146 size:0x0010 C-string:'SELL_dash_WHAT'
//         SELL-IT  codep:0x224c parp:0xf162 size:0x0042 C-string:'SELL_dash_IT'
//      UNK_0xf1a6  codep:0x224c parp:0xf1a6 size:0x0030 C-string:'UNK_0xf1a6'
//      UNK_0xf1d8  codep:0x224c parp:0xf1d8 size:0x00e7 C-string:'UNK_0xf1d8'
//      UNK_0xf2c1  codep:0x224c parp:0xf2c1 size:0x0036 C-string:'UNK_0xf2c1'
//      UNK_0xf2f9  codep:0x224c parp:0xf2f9 size:0x0072 C-string:'UNK_0xf2f9'
//        BUY-WHAT  codep:0x4a4f parp:0xf378 size:0x000c C-string:'BUY_dash_WHAT'
//      UNK_0xf386  codep:0x224c parp:0xf386 size:0x0042 C-string:'UNK_0xf386'
//      UNK_0xf3ca  codep:0x224c parp:0xf3ca size:0x005e C-string:'UNK_0xf3ca'
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
void _plus__ex_(); // +!
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
const unsigned short int pp_UNK_0xe2b6 = 0xe2b6; // UNK_0xe2b6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe2ba = 0xe2ba; // UNK_0xe2ba size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe2be = 0xe2be; // UNK_0xe2be size: 12
// {0x3a, 0x20, 0x4c, 0x22, 0x5d, 0x17, 0x2d, 0xc5, 0xce, 0x84, 0x90, 0x16}

const unsigned short int pp_UNK_0xe4b4 = 0xe4b4; // UNK_0xe4b4 size: 17
// {0x03, 0x0a, 0x02, 0x09, 0x20, 0x0a, 0x23, 0x09, 0x24, 0x0a, 0x48, 0x09, 0x30, 0x0a, 0x79, 0x09, 0x25}




// 0xe2b2: db 0x28 0x01 '( '

// ================================================
// 0xe2b4: WORD 'UNK_0xe2b6' codep=0x1d29 parp=0xe2b6
// ================================================
// 0xe2b6: db 0x3a 0x20 ': '

// ================================================
// 0xe2b8: WORD 'UNK_0xe2ba' codep=0x1d29 parp=0xe2ba
// ================================================
// 0xe2ba: db 0x3a 0x20 ': '

// ================================================
// 0xe2bc: WORD 'UNK_0xe2be' codep=0x1d29 parp=0xe2be
// ================================================
// 0xe2be: db 0x3a 0x20 0x4c 0x22 0x5d 0x17 0x2d 0xc5 0xce 0x84 0x90 0x16 ': L"] -     '

// ================================================
// 0xe2ca: WORD 'UNK_0xe2cc' codep=0x224c parp=0xe2cc
// ================================================

void UNK_0xe2cc() // UNK_0xe2cc
{
  Push(0xc542); // probable 'OVTRANSACT'
  MODULE(); // MODULE
}

// 0xe2d4: db 0x4c 0x22 0x5d 0x17 0x96 0xc5 0xce 0x84 0x90 0x16 'L"]       '

// ================================================
// 0xe2de: WORD 'UNK_0xe2e0' codep=0x224c parp=0xe2e0
// ================================================

void UNK_0xe2e0() // UNK_0xe2e0
{
  Push(0xc5ca); // probable 'T+BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe2e8: WORD 'UNK_0xe2ea' codep=0x224c parp=0xe2ea
// ================================================

void UNK_0xe2ea() // UNK_0xe2ea
{
  _gt_C_plus_S(); // >C+S
  Push2Words("*EOL");
  _gt_C_plus_S(); // >C+S
  BOX_gt_LIS(); // BOX>LIS
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe2f8: WORD 'UNK_0xe2fa' codep=0x224c parp=0xe2fa
// ================================================

void UNK_0xe2fa() // UNK_0xe2fa
{
  Push(pp_IsEGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    SetColor("BLUE");
    return;
  }
  SetColor("DK-BLUE");
}

// 0xe30c: db 0x4c 0x22 0x5d 0x17 0x70 0xbd 0xce 0x84 0x90 0x16 'L"] p     '

// ================================================
// 0xe316: WORD 'UNK_0xe318' codep=0x224c parp=0xe318
// ================================================

void UNK_0xe318() // UNK_0xe318
{
  Push(0xbd82); // probable 'OV.0$$$'
  MODULE(); // MODULE
}

// 0xe320: db 0x4c 0x22 0x5d 0x17 0x97 0xbd 0xce 0x84 0x90 0x16 'L"]       '

// ================================================
// 0xe32a: WORD 'UNK_0xe32c' codep=0x224c parp=0xe32c
// ================================================

void UNK_0xe32c() // UNK_0xe32c
{
  unsigned short int a;
  Push(pp_IsTD); // ?TD
  Push(Read16(Pop())); // @
  SetColor("GREY2");
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
// 0xe344: WORD 'UNK_0xe346' codep=0x224c parp=0xe346
// ================================================

void UNK_0xe346() // UNK_0xe346
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
// 0xe36d: WORD 'UNK_0xe36f' codep=0x224c parp=0xe36f
// ================================================

void UNK_0xe36f() // UNK_0xe36f
{
  Push(0x0012);
  SetColor("GREY2");
  Push(0x0064);
  Push(0x002c);
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xe381: WORD 'UNK_0xe383' codep=0x73ea parp=0xe383
// ================================================
LoadDataType UNK_0xe383 = {ANALYZE_TEXTIDX, 0x00, 0xbe, 0xbe, 0x6790};

// ================================================
// 0xe389: WORD 'UNK_0xe38b' codep=0x73ea parp=0xe38b
// ================================================
LoadDataType UNK_0xe38b = {ARTIFACTIDX, 0x18, 0x01, 0x1e, 0x652c};

// ================================================
// 0xe391: WORD 'UNK_0xe393' codep=0x73ea parp=0xe393
// ================================================
LoadDataType UNK_0xe393 = {ARTIFACTIDX, 0x1d, 0x01, 0x1e, 0x652c};

// ================================================
// 0xe399: WORD 'UNK_0xe39b' codep=0x744d parp=0xe39b
// ================================================
IFieldType UNK_0xe39b = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe39e: WORD 'UNK_0xe3a0' codep=0x224c parp=0xe3a0
// ================================================

void UNK_0xe3a0() // UNK_0xe3a0
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe3a6: WORD 'UNK_0xe3a8' codep=0x224c parp=0xe3a8
// ================================================

void UNK_0xe3a8() // UNK_0xe3a8
{
  UNK_0xe3a0(); // UNK_0xe3a0
  Push(0x63ef+UNK_0xe39b.offset); // IFIELD
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe3b2: WORD 'UNK_0xe3b4' codep=0x224c parp=0xe3b4
// ================================================

void UNK_0xe3b4() // UNK_0xe3b4
{
  UNK_0xe3a0(); // UNK_0xe3a0
  Push(0x63ef+UNK_0xe39b.offset); // IFIELD
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe3be: WORD 'UNK_0xe3c0' codep=0x224c parp=0xe3c0
// ================================================

void UNK_0xe3c0() // UNK_0xe3c0
{
  UNK_0xe3a8(); // UNK_0xe3a8
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe3c8: WORD 'UNK_0xe3ca' codep=0x224c parp=0xe3ca
// ================================================

void UNK_0xe3ca() // UNK_0xe3ca
{
  PAD(); // PAD
  _do__ex_(); // $!
  PAD(); // PAD
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
  OVER(); // OVER
  Push(Pop()-1); // 1-
  C_ex_(); // C!
  Push(Pop()-1); // 1-
}


// ================================================
// 0xe3de: WORD 'UNK_0xe3e0' codep=0x224c parp=0xe3e0
// ================================================

void UNK_0xe3e0() // UNK_0xe3e0
{
  Push(4);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
}


// ================================================
// 0xe3e8: WORD 'UNK_0xe3ea' codep=0x224c parp=0xe3ea
// ================================================

void UNK_0xe3ea() // UNK_0xe3ea
{
  U_star_(); // U*
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xe3f8: WORD 'UNK_0xe3fa' codep=0x224c parp=0xe3fa
// ================================================

void UNK_0xe3fa() // UNK_0xe3fa
{
  SetColor("WHITE");
  SetColor("DK-BLUE");
  UNK_0xe2fa(); // UNK_0xe2fa
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe406: WORD 'UNK_0xe408' codep=0x224c parp=0xe408
// ================================================

void UNK_0xe408() // UNK_0xe408
{
  SetColor("GREY2");
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  UNK_0xe3fa(); // UNK_0xe3fa
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
  _plus__ex_(); // +!
  PRINT("DEPOT", 5); // (.")
  Push(0x004b);
  Push(0x00c5);
  GetCOLOR(); // @COLOR
  Draw1LOGO(); // .1LOGO
}


// ================================================
// 0xe4b2: WORD 'UNK_0xe4b4' codep=0x1d29 parp=0xe4b4
// ================================================
// 0xe4b4: db 0x03 0x0a 0x02 0x09 0x20 0x0a 0x23 0x09 0x24 0x0a 0x48 0x09 0x30 0x0a 0x79 0x09 0x25 '      # $ H 0 y %'

// ================================================
// 0xe4c5: WORD 'UNK_0xe4c7' codep=0x224c parp=0xe4c7
// ================================================

void UNK_0xe4c7() // UNK_0xe4c7
{
  Push(7);
  SetColor("GREY2");
  Push(0x001d);
  Push(0x006e);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  GetCOLOR(); // @COLOR
  SetColor("BLACK");
  SetColor("DK-BLUE");
  SetColor("BLUE");
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0xc558); // probable 'OVD@BALANCE'
  MODULE(); // MODULE
  Push(7);
  D_dot_R(); // D.R
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe4f9: WORD 'UNK_0xe4fb' codep=0x224c parp=0xe4fb
// ================================================

void UNK_0xe4fb() // UNK_0xe4fb
{
  Push(-1);
  Push(0x0023);
  CMESS(); // CMESS
  SetColor("BLACK");
  SetColor("DK-BLUE");
  SetColor("BLUE");
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  PRINT("YOUR ACCOUNT BALANCE IS: ", 25); // (.")
  UNK_0xe4c7(); // UNK_0xe4c7
  PRINT(" MU", 3); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe535: WORD 'UNK_0xe537' codep=0x224c parp=0xe537
// ================================================

void UNK_0xe537() // UNK_0xe537
{
  _gt_2FONT(); // >2FONT
  UNK_0xe3fa(); // UNK_0xe3fa
  Push(0x002b);
  Push(0x00b3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  PRINT("WELCOME", 7); // (.")
  UNK_0xe3e0(); // UNK_0xe3e0
  PRINT("TO", 2); // (.")
  UNK_0xe3e0(); // UNK_0xe3e0
  PRINT("THE", 3); // (.")
  _gt_3FONT(); // >3FONT
  Push(0x0035);
  Push(0x00a5);
  POS_dot_(); // POS.
  PRINT("TRADE", 5); // (.")
  UNK_0xe3e0(); // UNK_0xe3e0
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
// 0xe604: WORD 'UNK_0xe606' codep=0x224c parp=0xe606
// ================================================

void UNK_0xe606() // UNK_0xe606
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
    Exec("?TERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe626: WORD 'UNK_0xe628' codep=0x224c parp=0xe628
// ================================================

void UNK_0xe628() // UNK_0xe628
{
  CTINIT(); // CTINIT
  Push(pp_IsTANDRG); // ?TANDRG
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    SetColor("DK-BLUE");
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
// 0xe677: WORD 'UNK_0xe679' codep=0x224c parp=0xe679
// ================================================

void UNK_0xe679() // UNK_0xe679
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x00b8);
  Push(2);
  Push(0x000c);
  Push(0x009d);
  SetColor("GREY2");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xe691: WORD 'UNK_0xe693' codep=0x224c parp=0xe693
// ================================================

void UNK_0xe693() // UNK_0xe693
{
  Push(0);
  Push(0x001a);
  CMESS(); // CMESS
  PRINT("^ SCROLL INVENTORY LIST \\", 25); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe6bb: WORD 'UNK_0xe6bd' codep=0x224c parp=0xe6bd
// ================================================

void UNK_0xe6bd() // UNK_0xe6bd
{
  UNK_0xe679(); // UNK_0xe679
  UNK_0xe3fa(); // UNK_0xe3fa
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
  UNK_0xe4fb(); // UNK_0xe4fb
  UNK_0xe693(); // UNK_0xe693
}


// ================================================
// 0xe707: WORD 'UNK_0xe709' codep=0x224c parp=0xe709
// ================================================

void UNK_0xe709() // UNK_0xe709
{
  PRINT("PRESS SPACEBAR TO ", 18); // (.")
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" OR [ QUIT ]", 12); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe733: WORD 'UNK_0xe735' codep=0x224c parp=0xe735
// ================================================

void UNK_0xe735() // UNK_0xe735
{
  Push(1);
  Push(0x0022);
  CMESS(); // CMESS
  UNK_0x3f3b("BUY");
  UNK_0xe709(); // UNK_0xe709
}


// ================================================
// 0xe747: WORD 'UNK_0xe749' codep=0x224c parp=0xe749
// ================================================

void UNK_0xe749() // UNK_0xe749
{
  UNK_0xe6bd(); // UNK_0xe6bd
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
  UNK_0xe3e0(); // UNK_0xe3e0
  PRINT("SALE", 4); // (.")
  UNK_0xe735(); // UNK_0xe735
}


// ================================================
// 0xe79a: WORD 'UNK_0xe79c' codep=0x224c parp=0xe79c
// ================================================

void UNK_0xe79c() // UNK_0xe79c
{
  UNK_0xe6bd(); // UNK_0xe6bd
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
// 0xe7d1: WORD 'UNK_0xe7d3' codep=0x224c parp=0xe7d3
// ================================================

void UNK_0xe7d3() // UNK_0xe7d3
{
  Push(1);
  Push(0x0021);
  CMESS(); // CMESS
  UNK_0x3f3b("SELL");
  UNK_0xe709(); // UNK_0xe709
}


// ================================================
// 0xe7e6: WORD 'UNK_0xe7e8' codep=0x224c parp=0xe7e8
// ================================================

void UNK_0xe7e8() // UNK_0xe7e8
{
  UNK_0xe79c(); // UNK_0xe79c
  _gt_2FONT(); // >2FONT
  Push(0x0042);
  Push(0x00b3);
  POS_dot_(); // POS.
  PRINT("CARGO", 5); // (.")
  UNK_0xe7d3(); // UNK_0xe7d3
}


// ================================================
// 0xe802: WORD 'UNK_0xe804' codep=0x224c parp=0xe804
// ================================================

void UNK_0xe804() // UNK_0xe804
{
  UNK_0xe79c(); // UNK_0xe79c
  _gt_2FONT(); // >2FONT
  Push(0x003a);
  Push(0x00b3);
  POS_dot_(); // POS.
  PRINT("ANALYSIS", 8); // (.")
  Push(1);
  Push(0x0026);
  CMESS(); // CMESS
  UNK_0x3f3b("ANALYZE");
  UNK_0xe709(); // UNK_0xe709
}


// ================================================
// 0xe833: WORD 'UNK_0xe835' codep=0x224c parp=0xe835
// ================================================

void UNK_0xe835() // UNK_0xe835
{
  UNK_0xe408(); // UNK_0xe408
  UNK_0xe628(); // UNK_0xe628
  UNK_0xe537(); // UNK_0xe537
}


// ================================================
// 0xe83d: WORD 'UNK_0xe83f' codep=0x224c parp=0xe83f
// ================================================

void UNK_0xe83f() // UNK_0xe83f
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xe845: WORD 'UNK_0xe847' codep=0x224c parp=0xe847
// ================================================

void UNK_0xe847() // UNK_0xe847
{
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe857: WORD 'UNK_0xe859' codep=0x224c parp=0xe859
// ================================================

void UNK_0xe859() // UNK_0xe859
{
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe869: WORD 'UNK_0xe86b' codep=0x224c parp=0xe86b
// ================================================

void UNK_0xe86b() // UNK_0xe86b
{
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_IN.offset); // IFIELD
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe879: WORD 'UNK_0xe87b' codep=0x224c parp=0xe87b
// ================================================

void UNK_0xe87b() // UNK_0xe87b
{
  PAD(); // PAD
  Push(5);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  UNK_0xe86b(); // UNK_0xe86b
  LoadData(ART_dash_VAL); // from 'ARTIFACT'
  Push(Read16(Pop())); // @
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
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_TE.offset); // IFIELD
  Push(0x0021);
  Push(Pop() + Pop()); // +
  Push(5);
  CMOVE(); // CMOVE
  ICLOSE(); // ICLOSE
  Push(0x0088);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(5);
  SetColor("BLUE");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  SetColor("BROWN");
  SetColor("BROWN");
  SetColor("BLACK");
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  PAD(); // PAD
  Push(5);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  StoreCRS(); // !CRS
}


// ================================================
// 0xe8e7: WORD 'UNK_0xe8e9' codep=0x224c parp=0xe8e9
// ================================================

void UNK_0xe8e9() // UNK_0xe8e9
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
  UNK_0xe2fa(); // UNK_0xe2fa
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  BLT(); // BLT
  StoreCRS(); // !CRS
}


// ================================================
// 0xe915: WORD 'UNK_0xe917' codep=0x224c parp=0xe917
// ================================================

void UNK_0xe917() // UNK_0xe917
{
  Push(0x0097);
  UNK_0xe8e9(); // UNK_0xe8e9
}


// ================================================
// 0xe91f: WORD 'UNK_0xe921' codep=0x224c parp=0xe921
// ================================================

void UNK_0xe921() // UNK_0xe921
{
  unsigned short int i, imax;
  UNK_0xe36f(); // UNK_0xe36f
  SetColor("BLACK");
  SetColor("GREY1");
  UNK_0xe2fa(); // UNK_0xe2fa
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_WLEFT); // WLEFT
    Push(Read16(Pop())); // @
    Push(pp_WTOP); // WTOP
    Push(Read16(Pop())); // @
    Push(i); // I
    Push(7);
    Push(Pop() * Pop()); // *
    _dash_(); // -
    POS_dot_(); // POS.
    TEXT_gt_PA(); // TEXT>PA
    PAD(); // PAD
    _do__dot_(); // $.
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe955: WORD 'UNK_0xe957' codep=0x224c parp=0xe957
// ================================================

void UNK_0xe957() // UNK_0xe957
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
    Push(Pop()+1); // 1+
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
  UNK_0xe921(); // UNK_0xe921
  IPREV(); // IPREV
  UNK_0xe917(); // UNK_0xe917
  IsLAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xe2ba); // UNK_0xe2ba
  Store_3(); // !_3
}


// ================================================
// 0xe997: WORD 'UNK_0xe999' codep=0x224c parp=0xe999
// ================================================

void UNK_0xe999() // UNK_0xe999
{
  INEXT(); // INEXT
  UNK_0xe847(); // UNK_0xe847
  Push(pp_UNK_0xe2ba); // UNK_0xe2ba
  Push(Read16(Pop())); // @
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
  UNK_0xe917(); // UNK_0xe917
  WLINE_dash_UP(); // WLINE-UP
  UNK_0xe917(); // UNK_0xe917
  IsLAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xe2ba); // UNK_0xe2ba
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(pp_UNK_0xe2ba); // UNK_0xe2ba
  Store_3(); // !_3
}


// ================================================
// 0xe9cb: WORD 'UNK_0xe9cd' codep=0x224c parp=0xe9cd
// ================================================

void UNK_0xe9cd() // UNK_0xe9cd
{
  unsigned short int a;
  CI(); // CI
  CDROP(); // CDROP
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  IsLAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  a = Pop(); // >R
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push(a); // R>
  if (Pop() == 0) return;
  UNK_0xe999(); // UNK_0xe999
}


// ================================================
// 0xe9e9: WORD 'UNK_0xe9eb' codep=0x224c parp=0xe9eb
// ================================================

void UNK_0xe9eb() // UNK_0xe9eb
{
  IsLAST(); // ?LAST
  Push(pp_UNK_0xe2ba); // UNK_0xe2ba
  Push(Read16(Pop())); // @
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(pp_UNK_0xe2ba); // UNK_0xe2ba
  Store_3(); // !_3
  IPREV(); // IPREV
  UNK_0xe859(); // UNK_0xe859
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  PAD(); // PAD
  UNK_0xe917(); // UNK_0xe917
  WLINE_dash_D(); // WLINE-D
  UNK_0xe917(); // UNK_0xe917
}


// ================================================
// 0xea19: WORD 'UNK_0xea1b' codep=0x224c parp=0xea1b
// ================================================

void UNK_0xea1b() // UNK_0xea1b
{
  unsigned short int a;
  CI(); // CI
  CDROP(); // CDROP
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  IsFIRST(); // ?FIRST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  a = Pop(); // >R
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push(a); // R>
  if (Pop() == 0) return;
  UNK_0xe9eb(); // UNK_0xe9eb
}


// ================================================
// 0xea37: WORD 'TD-SCROLL' codep=0x4a4f parp=0xea45
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 1:
    UNK_0xe9cd(); // UNK_0xe9cd
    break;
  case 65535:
    UNK_0xea1b(); // UNK_0xea1b
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xea51: WORD 'UNK_0xea53' codep=0x224c parp=0xea53
// ================================================

void UNK_0xea53() // UNK_0xea53
{
  UNK_0xe32c(); // UNK_0xe32c
  Push(1);
  Push(0x0018);
  CMESS(); // CMESS
  SetColor("BLUE");
  StoreCOLOR(); // !COLOR
  PRINT("INSUFFICIENT CARGO SPACE", 24); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xea80: WORD 'UNK_0xea82' codep=0x224c parp=0xea82
// ================================================

void UNK_0xea82() // UNK_0xea82
{
  UNK_0xe32c(); // UNK_0xe32c
  Push(1);
  Push(0x0012);
  CMESS(); // CMESS
  SetColor("BLUE");
  StoreCOLOR(); // !COLOR
  UNK_0xe318(); // UNK_0xe318
  StoreCRS(); // !CRS
}


// ================================================
// 0xea96: WORD 'UNK_0xea98' codep=0x224c parp=0xea98
// ================================================

void UNK_0xea98() // UNK_0xea98
{
  SAVE_dash_SCR(); // SAVE-SCR
  Push(0);
  Push(0xc583); // probable 'OV?BALANCE'
  MODULE(); // MODULE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    UNK_0xea82(); // UNK_0xea82
    BEEP(); // BEEP
    UNK_0xe606(); // UNK_0xe606
    Pop(); // DROP
    Push(0);
  } else
  {
    UNK_0xe3c0(); // UNK_0xe3c0
    Push(Read16(regsp)); // DUP
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      UNK_0xea53(); // UNK_0xea53
      BEEP(); // BEEP
      UNK_0xe606(); // UNK_0xe606
    }
  }
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xeaca: WORD 'UNK_0xeacc' codep=0x224c parp=0xeacc
// ================================================

void UNK_0xeacc() // UNK_0xeacc
{
  unsigned short int i, imax;
  Push(pp_IsTD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xe2fa(); // UNK_0xe2fa
  } else
  {
    SetColor("BLUE");
  }
  StoreCOLOR(); // !COLOR
  Push(pp_UNK_0xe2be); // UNK_0xe2be
  ON_3(); // ON_3
  Push(0x002e);
  Push(pp__dash_AIN); // -AIN
  Store_3(); // !_3
  Push(6);
  Push(0xbd5b); // probable 'OV#IN$'
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
    Push(i); // I
    Push(Read8(Pop())&0xFF); // C@
    Push(0x002e);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(i); // I
      Push(Pop()+1); // 1+
      Push(Read8(Pop())&0xFF); // C@
      Push(0x0030);
      Push(0x003a);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        Push(pp_UNK_0xe2be); // UNK_0xe2be
        OFF(); // OFF
      }
    } else
    {
      Push(0x000a);
      Push(Pop() * Pop()); // *
      Push(i); // I
      Push(Read8(Pop())&0xFF); // C@
      Push(0x0030);
      _dash_(); // -
      Push(Pop() + Pop()); // +
      Push(pp_UNK_0xe2be); // UNK_0xe2be
      Push(Read16(Pop())); // @
      if (Pop() == 0) Push(1); else Push(0); // 0=
      if (Pop() != 0)
      {
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_UNK_0xe2be); // UNK_0xe2be
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(0x000a);
    Push(Pop() * Pop()); // *
  }
  ABS(); // ABS
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  MIN(); // MIN
}


// ================================================
// 0xeb64: WORD 'UNK_0xeb66' codep=0x224c parp=0xeb66
// ================================================

void UNK_0xeb66() // UNK_0xeb66
{
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop())); // @
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xeb72: WORD 'UNK_0xeb74' codep=0x224c parp=0xeb74
// ================================================

void UNK_0xeb74() // UNK_0xeb74
{
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Push(Read16(Pop())); // @
    Push(0x63ef+INST_dash_QTY.offset); // IFIELD
    Push(Read16(Pop())); // @
    MIN(); // MIN
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_3(); // !_3
    return;
  }
  Push(0xc558); // probable 'OVD@BALANCE'
  MODULE(); // MODULE
  _2DUP(); // 2DUP
  UNK_0xeb66(); // UNK_0xeb66
  ROT(); // ROT
  ROT(); // ROT
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(Pop() * Pop()); // *
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Store_3(); // !_3
  UNK_0xeb66(); // UNK_0xeb66
  MAX(); // MAX
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop())); // @
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
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
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
  Push(pp_UNK_0xe2b6); // UNK_0xe2b6
  Push(Read16(Pop())); // @
  Push(pp_IsTD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0x63ef+INST_dash_QTY.offset); // IFIELD
    Push(Read16(Pop())); // @
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_3(); // !_3
  } else
  {
    UNK_0xe3a8(); // UNK_0xe3a8
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Store_3(); // !_3
    UNK_0xeb74(); // UNK_0xeb74
  }
  UNK_0xe32c(); // UNK_0xe32c
  Push(0);
  Push(0x001f);
  CMESS(); // CMESS
  Push(pp_IsTD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    PRINT("TRANSFER", 8); // (.")
  } else
  {
    Push(0x63ef+INST_dash_X.offset); // IFIELD
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
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0);
  DrawR(); // .R
  PRINT(".", 1); // (.")
  Push(0);
  DrawR(); // .R
  PRINT(")", 1); // (.")
  UNK_0xeacc(); // UNK_0xeacc
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_3(); // !_3
  StoreCRS(); // !CRS
  UNK_0xe32c(); // UNK_0xe32c
}


// ================================================
// 0xecce: WORD 'UNK_0xecd0' codep=0x224c parp=0xecd0
// ================================================

void UNK_0xecd0() // UNK_0xecd0
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
      Push(0x000f);
      Push((Pop()==Pop())?1:0); // =
    } while(Pop() == 0);
    BOX_gt_LIS(); // BOX>LIS
  }
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xecfa: WORD 'UNK_0xecfc' codep=0x224c parp=0xecfc
// ================================================

void UNK_0xecfc() // UNK_0xecfc
{
  unsigned short int i, imax;
  UNK_0xe87b(); // UNK_0xe87b
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x0039);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(0x000e);
  _dash_(); // -
  POS_dot_(); // POS.
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    LoadData(UNK_0xe383); // from 'ANALYZE_TEXT'
    Push(i); // I
    Push(0x0026);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    PAD(); // PAD
    Push(Pop()+1); // 1+
    Push(0x0026);
    CMOVE(); // CMOVE
    Push(0x0026);
    PAD(); // PAD
    C_ex_(); // C!
    PAD(); // PAD
    UNK_0xe3ca(); // UNK_0xe3ca
    Push(0x0026);
    OVER(); // OVER
    Push(Read8(Pop())&0xFF); // C@
    _dash_(); // -
    Push(Pop()>>1); // 2/
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
  SetColor("GREY2");
  X0MESS(); // X0MESS
  Push(1);
  SetColor("GREY2");
  X0MESS(); // X0MESS
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); Pop(); // 2DROP
    IsQUIT(); // ?QUIT
  } while(Pop() == 0);
}


// ================================================
// 0xed87: WORD 'UNK_0xed89' codep=0x224c parp=0xed89
// ================================================

void UNK_0xed89() // UNK_0xed89
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(7);
  _dash_(); // -
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  SetColor("GREY2");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  CTINIT(); // CTINIT
  UNK_0xe86b(); // UNK_0xe86b
  LoadData(UNK_0xe38b); // from 'ARTIFACT'
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xecfc(); // UNK_0xecfc
  ICLOSE(); // ICLOSE
  Push(0x00ff);
  LoadData(UNK_0xe393); // from 'ARTIFACT'
  C_ex_(); // C!
}


// ================================================
// 0xedb7: WORD 'UNK_0xedb9' codep=0x224c parp=0xedb9
// ================================================

void UNK_0xedb9() // UNK_0xedb9
{
  UNK_0xe86b(); // UNK_0xe86b
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(0x001c);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    SAVE_dash_SCR(); // SAVE-SCR
    LoadData(UNK_0xe393); // from 'ARTIFACT'
    Push(Read8(Pop())&0xFF); // C@
    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() != 0)
    {
      Push(0xff38);
      Push(0x01f4);
      UNK_0xea98(); // UNK_0xea98
      if (Pop() != 0)
      {
        UNK_0xe32c(); // UNK_0xe32c
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
      LoadData(UNK_0xe393); // from 'ARTIFACT'
      Push(Read8(Pop())&0xFF); // C@
      if (Pop() == 0) Push(1); else Push(0); // 0=
      Push(0xfe0c);
      M_star_(); // M*
      _2DUP(); // 2DUP
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        UNK_0xe2e0(); // UNK_0xe2e0
      } else
      {
        Pop(); Pop(); // 2DROP
      }
      GetCRS(); // @CRS
      UNK_0xed89(); // UNK_0xed89
      _gt_HIDDEN(); // >HIDDEN
      UNK_0xe87b(); // UNK_0xe87b
      _gt_DISPLAY(); // >DISPLAY
      StoreCRS(); // !CRS
    }
    SCR_dash_RES(); // SCR-RES
    UNK_0xe4c7(); // UNK_0xe4c7
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee71: WORD 'UNK_0xee73' codep=0x224c parp=0xee73
// ================================================

void UNK_0xee73() // UNK_0xee73
{
  UNK_0xe804(); // UNK_0xe804
  UNK_0xe346(); // UNK_0xe346
  MAKE_dash_SC(); // MAKE-SC
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  Store_3(); // !_3
  Push(pp_Is_ask__ask_IT); // ???IT
  OFF(); // OFF
  Push(0);
  Push2Words("*STARSHIP-HOLD");
  UNK_0xecd0(); // UNK_0xecd0
  Push(Pop() + Pop()); // +
  Push2Words("*ITEMS-");
  UNK_0xecd0(); // UNK_0xecd0
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push2Words("*ITEMS-");
    UNK_0xe2ea(); // UNK_0xe2ea
    UNK_0xe957(); // UNK_0xe957
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      TD_dash_SCROLL(); // TD-SCROLL case
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        UNK_0xedb9(); // UNK_0xedb9
      }
      IsQUIT(); // ?QUIT
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
    ICLOSE(); // ICLOSE
  } else
  {
    GetCRS(); // @CRS
    CTINIT(); // CTINIT
    UNK_0xe36f(); // UNK_0xe36f
    Push(0x001e);
    Push(0x0068);
    POS_dot_(); // POS.
    PRINT("THERE ARE NO ARTIFACTS IN", 25); // (.")
    Push(0x0028);
    Push(0x0061);
    POS_dot_(); // POS.
    PRINT("STARSHIP OR STARPORT", 20); // (.")
    UNK_0xe606(); // UNK_0xe606
    StoreCRS(); // !CRS
    Push(0x0019);
    SetColor("GREY2");
    Push(0x0068);
    Push(0x001e);
    POS_dot_PXT(); // POS.PXT
    Push(0x0015);
    SetColor("GREY2");
    Push(0x0061);
    Push(0x0026);
    POS_dot_PXT(); // POS.PXT
  }
  delete_dash_scroll_dash_box(); // delete-scroll-box
  if (Pop() == 0) return;
  UNK_0xe917(); // UNK_0xe917
}


// ================================================
// 0xef36: WORD 'UNK_0xef38' codep=0x224c parp=0xef38
// ================================================

void UNK_0xef38() // UNK_0xef38
{
  Push(pp_IsTD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(0x63ef+INST_dash_VAL.offset); // IFIELD
    Push(Read16(Pop())); // @
    Push(pp__pe_VAL); // %VAL
    Push(Read16(Pop())); // @
    UNK_0xe3ea(); // UNK_0xe3ea
    Push(0);
    UNK_0xe2e0(); // UNK_0xe2e0
  }
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  UNK_0xe3a8(); // UNK_0xe3a8
  Push(Pop() + Pop()); // +
  UNK_0xe3b4(); // UNK_0xe3b4
  BOX_gt_(); // BOX>
  _gt_INACTIVE(); // >INACTIVE
  Push(Pop()+1); // 1+
}


// ================================================
// 0xef60: WORD 'UNK_0xef62' codep=0x224c parp=0xef62
// ================================================

void UNK_0xef62() // UNK_0xef62
{
  Push(pp_IsTD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    LoadData(ART_dash_VAL); // from 'ARTIFACT'
    Push(Read16(Pop())); // @
    Push(pp__pe_VAL); // %VAL
    Push(Read16(Pop())); // @
    UNK_0xe3ea(); // UNK_0xe3ea
    Push(0);
    UNK_0xe2e0(); // UNK_0xe2e0
  }
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); // @
  UNK_0xe3a8(); // UNK_0xe3a8
  Push(Pop() + Pop()); // +
  UNK_0xe3b4(); // UNK_0xe3b4
  BOX_gt_(); // BOX>
  Push(pp_IsTD); // ?TD
  Push(Read16(Pop())); // @
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
  Push(Pop()+1); // 1+
}


// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x224c parp=0xefa0
// ================================================

void UNK_0xefa0() // UNK_0xefa0
{
  KEY_dash_ELEM_dash_AMT(); // KEY-ELEM-AMT
  Push(pp_IsTD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    LoadData(ELEM_dash_VAL); // from 'ELEMENT'
    Push(Read16(Pop())); // @
    Push(pp__pe_VAL); // %VAL
    Push(Read16(Pop())); // @
    UNK_0xe3ea(); // UNK_0xe3ea
    Push(0x63ef+INST_dash_QTY.offset); // IFIELD
    Push(Read16(Pop())); // @
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Push(Read16(Pop())); // @
    MIN(); // MIN
    M_star_(); // M*
    UNK_0xe2e0(); // UNK_0xe2e0
  }
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  MIN(); // MIN
  UNK_0xe3a8(); // UNK_0xe3a8
  Push(Pop() + Pop()); // +
  UNK_0xe3b4(); // UNK_0xe3b4
  _0_st_(); // 0<
  BOX_gt_(); // BOX>
  _gt_INACTIVE(); // >INACTIVE
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x224c parp=0xefe0
// ================================================

void UNK_0xefe0() // UNK_0xefe0
{
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xe86b(); // UNK_0xe86b
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_MOD(); // /MOD
  ICLOSE(); // ICLOSE
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_TE.offset); // IFIELD
  Push(0x001a);
  Push(Pop() + Pop()); // +
  Push(6);
  Push(0x002e);
  FILL_1(); // FILL_1
  U_gt__do_(); // U>$
  Push(0x63ef+TEXT_dash_TE.offset); // IFIELD
  Push(0x001e);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x63ef+TEXT_dash_TE.offset); // IFIELD
  Push(0x001f);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  UNK_0xe917(); // UNK_0xe917
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(0x0026);
  SetColor("GREY2");
  _2OVER(); // 2OVER
  POS_dot_PXT(); // POS.PXT
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x63ef+TEXT_dash_TE.offset); // IFIELD
  Push(0x0026);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
  UNK_0xe917(); // UNK_0xe917
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xf052: WORD 'UNK_0xf054' codep=0x224c parp=0xf054
// ================================================

void UNK_0xf054() // UNK_0xf054
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
    Push(0x63ef+INST_dash_QTY.offset); // IFIELD
    Push(Read16(Pop())); // @
    Push(Pop() * Pop()); // *
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
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
  CDROP(); // CDROP
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0a8: WORD 'UNK_0xf0aa' codep=0x224c parp=0xf0aa
// ================================================

void UNK_0xf0aa() // UNK_0xf0aa
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
      UNK_0xe83f(); // UNK_0xe83f
      UNK_0xe859(); // UNK_0xe859
      _gt_C_plus_S(); // >C+S
      IDELETE(); // IDELETE
      ICLOSE(); // ICLOSE
      Push(pp_SCROLL_dash_); // SCROLL-
      Push(Read16(Pop())); // @
      Push(pp_WLINES); // WLINES
      Push(Read16(Pop())); // @
      _st_(); // <
      if (Pop() != 0)
      {
        IPREV(); // IPREV
        SetColor("GREY2");
        WSHORTE(); // WSHORTE
      }
      UNK_0xe9eb(); // UNK_0xe9eb
      UNK_0xe999(); // UNK_0xe999
      i++;
    } while(i<imax); // (LOOP)

    _gt_DISPLAY(); // >DISPLAY
    SCR_dash_RES(); // SCR-RES
    UNK_0xe9cd(); // UNK_0xe9cd
    return;
  }
  UNK_0xe86b(); // UNK_0xe86b
  GetINST_dash_CLASS(); // @INST-CLASS
  ICLOSE(); // ICLOSE
  Push(0x001a);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  UNK_0xefe0(); // UNK_0xefe0
}


// ================================================
// 0xf0fc: WORD 'UNK_0xf0fe' codep=0x224c parp=0xf0fe
// ================================================

void UNK_0xf0fe() // UNK_0xf0fe
{
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Store_3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf11a: WORD 'UNK_0xf11c' codep=0x224c parp=0xf11c
// ================================================

void UNK_0xf11c() // UNK_0xf11c
{
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop())); // @
  Push(Pop()>>1); // 2/
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
    UNK_0xef62(); // UNK_0xef62
    break;
  case 26:
    UNK_0xefa0(); // UNK_0xefa0
    break;
  default:
    UNK_0xef38(); // UNK_0xef38
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
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_IN.offset); // IFIELD
  _1_dot_5_at_(); // 1.5@
  Push(0x63ef+TEXT_dash_CO.offset); // IFIELD
  _1_dot_5_at_(); // 1.5@
  Push2Words("*STARSHIP-HOLD");
  _gt_C(); // >C
  _gt_C(); // >C
  _gt_C_plus_(); // >C+
  SET_dash_CURRENT(); // SET-CURRENT
  GetINST_dash_CLASS(); // @INST-CLASS
  SELL_dash_WHAT(); // SELL-WHAT case
  a = Pop(); // >R
  Push(a); // I
  Push(-1);
  Push(Pop() * Pop()); // *
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex_(); // +!

  label2:
  Push(Read16(regsp)); // DUP
  CDEPTH(); // CDEPTH
  _st_(); // <
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Pop(); // DROP
  Push(a); // R>
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x224c parp=0xf1a6
// ================================================

void UNK_0xf1a6() // UNK_0xf1a6
{
  SELL_dash_IT(); // SELL-IT
  if (Pop() != 0)
  {
    UNK_0xf0aa(); // UNK_0xf0aa
  } else
  {
    Pop(); // DROP
    UNK_0xe917(); // UNK_0xe917
    Push(pp_WTOP); // WTOP
    Push(Read16(Pop())); // @
    Push(pp_WLEFT); // WLEFT
    Push(Read16(Pop())); // @
    Push(pp_WBOTTOM); // WBOTTOM
    Push(Read16(Pop())); // @
    Push(8);
    _dash_(); // -
    Push(pp_WRIGHT); // WRIGHT
    Push(Read16(Pop())); // @
    SetColor("GREY2");
    POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
    UNK_0xe917(); // UNK_0xe917
  }
  UNK_0xe693(); // UNK_0xe693
  UNK_0xe7d3(); // UNK_0xe7d3
}


// ================================================
// 0xf1d6: WORD 'UNK_0xf1d8' codep=0x224c parp=0xf1d8
// ================================================

void UNK_0xf1d8() // UNK_0xf1d8
{
  Push(pp_UNK_0xe2b6); // UNK_0xe2b6
  ON_3(); // ON_3
  UNK_0xe7e8(); // UNK_0xe7e8
  MAKE_dash_SC(); // MAKE-SC
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  Store_3(); // !_3
  Push(pp_Is_ask__ask_IT); // ???IT
  OFF(); // OFF
  UNK_0xf0fe(); // UNK_0xf0fe
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0);
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0011);
  Push((Pop()==Pop())?1:0); // =
  IPREV(); // IPREV
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(0x001b);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  INEXT(); // INEXT
  if (Pop() != 0)
  {
    UNK_0xe346(); // UNK_0xe346
    do
    {
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(0x0011);
      Push((Pop()==Pop())?1:0); // =
      if (Pop() == 0) Push(1); else Push(0); // NOT
      GetINST_dash_CLASS(); // @INST-CLASS
      Push(0x000b);
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        BOX_gt_LIS(); // BOX>LIS
        Push(Pop()+1); // 1+
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
    UNK_0xe2ea(); // UNK_0xe2ea
    UNK_0xe957(); // UNK_0xe957
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      TD_dash_SCROLL(); // TD-SCROLL case
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        UNK_0xf1a6(); // UNK_0xf1a6
        UNK_0xe4c7(); // UNK_0xe4c7
      }
      IsQUIT(); // ?QUIT
      Push(pp_SCROLL_dash_); // SCROLL-
      Push(Read16(Pop())); // @
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
    UNK_0xe606(); // UNK_0xe606
    StoreCRS(); // !CRS
    Push(0x0017);
    SetColor("GREY2");
    Push(0x006b);
    Push(0x0022);
    POS_dot_PXT(); // POS.PXT
  }
  delete_dash_scroll_dash_box(); // delete-scroll-box
  if (Pop() != 0)
  {
    UNK_0xe917(); // UNK_0xe917
  }
  UNK_0xf11c(); // UNK_0xf11c
}


// ================================================
// 0xf2bf: WORD 'UNK_0xf2c1' codep=0x224c parp=0xf2c1
// ================================================

void UNK_0xf2c1() // UNK_0xf2c1
{
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); // @
  LoadData(ART_dash_VAL); // from 'ARTIFACT'
  Push(Read16(Pop())); // @
  UNK_0xea98(); // UNK_0xea98
  if (Pop() != 0)
  {
    LoadData(ART_dash_VAL); // from 'ARTIFACT'
    Push(Read16(Pop())); // @
    Push(0);
    DNEGATE(); // DNEGATE
    UNK_0xe2e0(); // UNK_0xe2e0
    UNK_0xe3a8(); // UNK_0xe3a8
    LoadData(ART_dash_VOL); // from 'ARTIFACT'
    Push(Read16(Pop())); // @
    _dash_(); // -
    UNK_0xe3b4(); // UNK_0xe3b4
    BOX_gt_(); // BOX>
    Push2Words("*STARSHIP-HOLD");
    _gt_C_plus_S(); // >C+S
    _gt_BOX(); // >BOX
    ICLOSE(); // ICLOSE
    Push(Pop()+1); // 1+
    return;
  }
  Push(0);
}


// ================================================
// 0xf2f7: WORD 'UNK_0xf2f9' codep=0x224c parp=0xf2f9
// ================================================

void UNK_0xf2f9() // UNK_0xf2f9
{
  unsigned short int a;
  Push(1);
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop())); // @
  UNK_0xea98(); // UNK_0xea98
  if (Pop() != 0)
  {
    KEY_dash_ELEM_dash_AMT(); // KEY-ELEM-AMT
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Push(Read16(Pop())); // @
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    LoadData(ELEM_dash_VAL); // from 'ELEMENT'
    Push(Read16(Pop())); // @
    Push(Pop() * Pop()); // *
    UNK_0xea98(); // UNK_0xea98
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Push(Read16(Pop())); // @
    _0_gt_(); // 0>
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      a = Pop(); // >R
      LoadData(ELEM_dash_VAL); // from 'ELEMENT'
      Push(Read16(Pop())); // @
      Push(a); // I
      U_star_(); // U*
      DNEGATE(); // DNEGATE
      UNK_0xe2e0(); // UNK_0xe2e0
      UNK_0xe3a8(); // UNK_0xe3a8
      Push(a); // I
      _dash_(); // -
      UNK_0xe3b4(); // UNK_0xe3b4
      Push(a); // I
      Push(0x63ef+INST_dash_QTY.offset); // IFIELD
      _plus__ex_(); // +!
      Push(0x001a);
      GetINST_dash_SPECIES(); // @INST-SPECIES
      ICREATE(); // ICREATE
      _gt_C_plus_S(); // >C+S
      Push(a); // R>
      Push(0x63ef+INST_dash_QTY.offset); // IFIELD
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
    UNK_0xf2c1(); // UNK_0xf2c1
    break;
  case 26:
    UNK_0xf2f9(); // UNK_0xf2f9
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf384: WORD 'UNK_0xf386' codep=0x224c parp=0xf386
// ================================================

void UNK_0xf386() // UNK_0xf386
{
  unsigned short int a;
  CDEPTH(); // CDEPTH
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_IN.offset); // IFIELD
  _1_dot_5_at_(); // 1.5@
  Push(0x63ef+TEXT_dash_CO.offset); // IFIELD
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ITEMS-");
  _gt_C(); // >C
  _gt_C(); // >C
  _gt_C_plus_(); // >C+
  SET_dash_CURRENT(); // SET-CURRENT
  GetINST_dash_CLASS(); // @INST-CLASS
  BUY_dash_WHAT(); // BUY-WHAT case
  a = Pop(); // >R
  Push(a); // I
  Push(-Pop()); // NEGATE
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex_(); // +!

  label2:
  Push(Read16(regsp)); // DUP
  CDEPTH(); // CDEPTH
  _st_(); // <
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Pop(); // DROP
  Push(a); // R>
  UNK_0xf0aa(); // UNK_0xf0aa
  UNK_0xe693(); // UNK_0xe693
  UNK_0xe735(); // UNK_0xe735
}


// ================================================
// 0xf3c8: WORD 'UNK_0xf3ca' codep=0x224c parp=0xf3ca
// ================================================

void UNK_0xf3ca() // UNK_0xf3ca
{
  Push(pp_UNK_0xe2b6); // UNK_0xe2b6
  OFF(); // OFF
  UNK_0xe749(); // UNK_0xe749
  UNK_0xe346(); // UNK_0xe346
  MAKE_dash_SC(); // MAKE-SC
  Push(0x0064);
  Push(pp__pe_VAL); // %VAL
  Store_3(); // !_3
  Push(pp_Is_ask__ask_IT); // ???IT
  ON_3(); // ON_3
  Push(6);
  UNK_0xf054(); // UNK_0xf054
  Push(1);
  UNK_0xf054(); // UNK_0xf054
  Push(4);
  UNK_0xf054(); // UNK_0xf054
  Push(0x000c);
  UNK_0xf054(); // UNK_0xf054
  Push(0x0010);
  UNK_0xf054(); // UNK_0xf054
  Push(0x0014);
  UNK_0xf054(); // UNK_0xf054
  Push2Words("*ITEMS-");
  GET_dash_BOX(); // GET-BOX
  Push2Words("*ITEMS-");
  UNK_0xe2ea(); // UNK_0xe2ea
  UNK_0xe957(); // UNK_0xe957
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    TD_dash_SCROLL(); // TD-SCROLL case
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      UNK_0xf386(); // UNK_0xf386
      UNK_0xe4c7(); // UNK_0xe4c7
    }
    IsQUIT(); // ?QUIT
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  delete_dash_scroll_dash_box(); // delete-scroll-box
  UNK_0xe917(); // UNK_0xe917
}


// ================================================
// 0xf428: WORD 'DEPOT-FUNCTION' codep=0x4a4f parp=0xf43b
// ================================================

void DEPOT_dash_FUNCTION() // DEPOT-FUNCTION
{
  switch(Pop()) // DEPOT-FUNCTION
  {
  case 0:
    UNK_0xf3ca(); // UNK_0xf3ca
    break;
  case 1:
    UNK_0xf1d8(); // UNK_0xf1d8
    break;
  case 2:
    UNK_0xee73(); // UNK_0xee73
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
  UNK_0xe835(); // UNK_0xe835
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  SetColor("GREY2");
  SetColor("GREY1");
  UNK_0xe2fa(); // UNK_0xe2fa
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
  Push(pp_UNK_0xe4b4); // UNK_0xe4b4
  BLD_dash_CRS(); // BLD-CRS
  do
  {
    XYSCAN(); // XYSCAN
    Push(pp_NCRS); // NCRS
    _plus__ex_(); // +!
    Push(pp_UNK_0xe4b4); // UNK_0xe4b4
    SET_dash_CRS(); // SET-CRS
    Pop(); Pop(); // 2DROP
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      GetCRS(); // @CRS
      Push(0);
      Push(pp_OCRS); // OCRS
      Push(Read16(Pop())); // @
      DEPOT_dash_FUNCTION(); // DEPOT-FUNCTION case
      a = Pop(); // >R
      Push(-1);
      SetColor("GREY2");
      X0MESS(); // X0MESS
      UNK_0xe32c(); // UNK_0xe32c
      StoreCRS(); // !CRS
      Push(a); // R>
    } else
    {
      Push(0);
    }
  } while(Pop() == 0);
  Push(2);
  UNK_0xe2cc(); // UNK_0xe2cc
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

