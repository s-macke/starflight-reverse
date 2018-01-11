// ====== OVERLAY 'PERSONNEL-OV' ======
// store offset = 0xe500
// overlay size   = 0x1060

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe516  codep:0x224c parp:0xe516 size:0x0008 C-string:'UNK_0xe516'
//      UNK_0xe520  codep:0x224c parp:0xe520 size:0x0008 C-string:'UNK_0xe520'
//      UNK_0xe52a  codep:0x224c parp:0xe52a size:0x0008 C-string:'UNK_0xe52a'
//      UNK_0xe534  codep:0x224c parp:0xe534 size:0x0008 C-string:'UNK_0xe534'
//      UNK_0xe53e  codep:0x224c parp:0xe53e size:0x0008 C-string:'UNK_0xe53e'
//      UNK_0xe548  codep:0x2214 parp:0xe548 size:0x0002 C-string:'UNK_0xe548'
//      UNK_0xe54c  codep:0x2214 parp:0xe54c size:0x0002 C-string:'UNK_0xe54c'
//      UNK_0xe550  codep:0x224c parp:0xe550 size:0x000a C-string:'UNK_0xe550'
//      UNK_0xe55c  codep:0x224c parp:0xe55c size:0x0008 C-string:'UNK_0xe55c'
//      UNK_0xe566  codep:0x224c parp:0xe566 size:0x0008 C-string:'UNK_0xe566'
//      UNK_0xe570  codep:0x224c parp:0xe570 size:0x0008 C-string:'UNK_0xe570'
//      UNK_0xe57a  codep:0x224c parp:0xe57a size:0x0008 C-string:'UNK_0xe57a'
//      UNK_0xe584  codep:0x224c parp:0xe584 size:0x000a C-string:'UNK_0xe584'
//      UNK_0xe590  codep:0x224c parp:0xe590 size:0x0014 C-string:'UNK_0xe590'
//      UNK_0xe5a6  codep:0x224c parp:0xe5a6 size:0x0008 C-string:'UNK_0xe5a6'
//      UNK_0xe5b0  codep:0x1d29 parp:0xe5b0 size:0x0004 C-string:'UNK_0xe5b0'
//      UNK_0xe5b6  codep:0x224c parp:0xe5b6 size:0x001a C-string:'UNK_0xe5b6'
//      UNK_0xe5d2  codep:0x224c parp:0xe5d2 size:0x000e C-string:'UNK_0xe5d2'
//      UNK_0xe5e2  codep:0x224c parp:0xe5e2 size:0x0017 C-string:'UNK_0xe5e2'
//      UNK_0xe5fb  codep:0x224c parp:0xe5fb size:0x001a C-string:'UNK_0xe5fb'
//      UNK_0xe617  codep:0x224c parp:0xe617 size:0x0025 C-string:'UNK_0xe617'
//      UNK_0xe63e  codep:0x224c parp:0xe63e size:0x0018 C-string:'UNK_0xe63e'
//      UNK_0xe658  codep:0x73ea parp:0xe658 size:0x0006 C-string:'UNK_0xe658'
//      UNK_0xe660  codep:0x73ea parp:0xe660 size:0x0006 C-string:'UNK_0xe660'
//      UNK_0xe668  codep:0x73ea parp:0xe668 size:0x0006 C-string:'UNK_0xe668'
//      UNK_0xe670  codep:0x73ea parp:0xe670 size:0x0006 C-string:'UNK_0xe670'
//      UNK_0xe678  codep:0x73ea parp:0xe678 size:0x0006 C-string:'UNK_0xe678'
//      UNK_0xe680  codep:0x744d parp:0xe680 size:0x0003 C-string:'UNK_0xe680'
//      UNK_0xe685  codep:0x744d parp:0xe685 size:0x0003 C-string:'UNK_0xe685'
//      UNK_0xe68a  codep:0x744d parp:0xe68a size:0x0003 C-string:'UNK_0xe68a'
//      UNK_0xe68f  codep:0x744d parp:0xe68f size:0x0003 C-string:'UNK_0xe68f'
//      UNK_0xe694  codep:0x744d parp:0xe694 size:0x0003 C-string:'UNK_0xe694'
//      UNK_0xe699  codep:0x744d parp:0xe699 size:0x0003 C-string:'UNK_0xe699'
//      UNK_0xe69e  codep:0x744d parp:0xe69e size:0x0003 C-string:'UNK_0xe69e'
//      UNK_0xe6a3  codep:0x744d parp:0xe6a3 size:0x0003 C-string:'UNK_0xe6a3'
//      UNK_0xe6a8  codep:0x744d parp:0xe6a8 size:0x0003 C-string:'UNK_0xe6a8'
//      UNK_0xe6ad  codep:0x73ea parp:0xe6ad size:0x0006 C-string:'UNK_0xe6ad'
//      UNK_0xe6b5  codep:0x73ea parp:0xe6b5 size:0x0006 C-string:'UNK_0xe6b5'
//      UNK_0xe6bd  codep:0x73ea parp:0xe6bd size:0x0006 C-string:'UNK_0xe6bd'
//      UNK_0xe6c5  codep:0x224c parp:0xe6c5 size:0x013f C-string:'UNK_0xe6c5'
//      UNK_0xe806  codep:0x224c parp:0xe806 size:0x0022 C-string:'UNK_0xe806'
//      UNK_0xe82a  codep:0x224c parp:0xe82a size:0x0038 C-string:'UNK_0xe82a'
//      UNK_0xe864  codep:0x1d29 parp:0xe864 size:0x0011 C-string:'UNK_0xe864'
//      UNK_0xe877  codep:0x224c parp:0xe877 size:0x00a5 C-string:'UNK_0xe877'
//      UNK_0xe91e  codep:0x1d29 parp:0xe91e size:0x0002 C-string:'UNK_0xe91e'
//      UNK_0xe922  codep:0x224c parp:0xe922 size:0x0006 C-string:'UNK_0xe922'
//      UNK_0xe92a  codep:0x224c parp:0xe92a size:0x0118 C-string:'UNK_0xe92a'
//      UNK_0xea44  codep:0x224c parp:0xea44 size:0x0037 C-string:'UNK_0xea44'
//      UNK_0xea7d  codep:0x224c parp:0xea7d size:0x00c6 C-string:'UNK_0xea7d'
//      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x0086 C-string:'UNK_0xeb45'
//      UNK_0xebcd  codep:0x224c parp:0xebcd size:0x008e C-string:'UNK_0xebcd'
//      UNK_0xec5d  codep:0x224c parp:0xec5d size:0x00fa C-string:'UNK_0xec5d'
//      UNK_0xed59  codep:0x224c parp:0xed59 size:0x000c C-string:'UNK_0xed59'
//      UNK_0xed67  codep:0x224c parp:0xed67 size:0x0084 C-string:'UNK_0xed67'
//      UNK_0xeded  codep:0x224c parp:0xeded size:0x002e C-string:'UNK_0xeded'
//      UNK_0xee1d  codep:0x224c parp:0xee1d size:0x0020 C-string:'UNK_0xee1d'
//      UNK_0xee3f  codep:0x224c parp:0xee3f size:0x0020 C-string:'UNK_0xee3f'
//      UNK_0xee61  codep:0x1d29 parp:0xee61 size:0x0002 C-string:'UNK_0xee61'
//      UNK_0xee65  codep:0x224c parp:0xee65 size:0x00ec C-string:'UNK_0xee65'
//      UNK_0xef53  codep:0x224c parp:0xef53 size:0x00aa C-string:'UNK_0xef53'
//      UNK_0xefff  codep:0x224c parp:0xefff size:0x002c C-string:'UNK_0xefff'
//      UNK_0xf02d  codep:0x224c parp:0xf02d size:0x0024 C-string:'UNK_0xf02d'
//      UNK_0xf053  codep:0x224c parp:0xf053 size:0x0048 C-string:'UNK_0xf053'
//      UNK_0xf09d  codep:0x224c parp:0xf09d size:0x00c5 C-string:'UNK_0xf09d'
//      UNK_0xf164  codep:0x224c parp:0xf164 size:0x002c C-string:'UNK_0xf164'
//      UNK_0xf192  codep:0x224c parp:0xf192 size:0x0063 C-string:'UNK_0xf192'
//      UNK_0xf1f7  codep:0x224c parp:0xf1f7 size:0x0039 C-string:'UNK_0xf1f7'
//      UNK_0xf232  codep:0x224c parp:0xf232 size:0x0082 C-string:'UNK_0xf232'
//      UNK_0xf2b6  codep:0x1d29 parp:0xf2b6 size:0x0015 C-string:'UNK_0xf2b6'
//      UNK_0xf2cd  codep:0x224c parp:0xf2cd size:0x009c C-string:'UNK_0xf2cd'
//      UNK_0xf36b  codep:0x224c parp:0xf36b size:0x0036 C-string:'UNK_0xf36b'
//      UNK_0xf3a3  codep:0x224c parp:0xf3a3 size:0x0042 C-string:'UNK_0xf3a3'
//      UNK_0xf3e7  codep:0x224c parp:0xf3e7 size:0x0010 C-string:'UNK_0xf3e7'
//      UNK_0xf3f9  codep:0x224c parp:0xf3f9 size:0x009c C-string:'UNK_0xf3f9'
//      UNK_0xf497  codep:0x224c parp:0xf497 size:0x003e C-string:'UNK_0xf497'
//  PFILE-FUNCTION  codep:0x4a4f parp:0xf4e8 size:0x0014 C-string:'PFILE_dash_FUNCTION'
//       (U-PFILE)  codep:0x224c parp:0xf50a size:0x0000 C-string:'_ro_U_dash_PFILE_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp_IsTANDRG; // ?TANDRG
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SPECIES; // INST-SPECIES
void COUNT(); // COUNT
void MOD(); // MOD
void MIN(); // MIN
void PAD(); // PAD
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void DrawR(); // .R
void D_dot_R(); // D.R
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_gt_(); // D>
void DMIN(); // DMIN
void KEY_2(); // KEY_2
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex_(); // +!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void _do__eq_(); // $=
void FILE_st_(); // FILE<
void StoreINST_dash_SPECIES(); // !INST-SPECIES
void GetINST_dash_SPECIES(); // @INST-SPECIES
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void INEXT(); // INEXT
void IPREV(); // IPREV
void StoreCOLOR(); // !COLOR
void _gt_DISPLAY(); // >DISPLAY
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SCR(); // SAVE-SCR
void SCR_dash_RES(); // SCR-RES
void DARK(); // DARK
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_0FONT(); // >0FONT
void _gt_3FONT(); // >3FONT
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void CURSORSPACE(); // CURSORSPACE
void BLD_dash_CRS(); // BLD-CRS
void SET_dash_CRS(); // SET-CRS
void _do__ex_(); // $!
void CMESS(); // CMESS
void _0MESS(); // 0MESS
void _2_at_(); // 2@
void ADDR_gt_SEG(); // ADDR>SEG
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_MOD(); // /MOD
void _dash_(); // -
void DNEGATE(); // DNEGATE
void U_star_(); // U*
void U_slash_MOD(); // U/MOD
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _gt_C(); // >C
void CI(); // CI
void LLINE(); // LLINE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe5b0 = 0xe5b0; // UNK_0xe5b0 size: 4
// {0xd5, 0x57, 0x00, 0xf5}

const unsigned short int pp_UNK_0xe864 = 0xe864; // UNK_0xe864 size: 17
// {0x03, 0x0a, 0x02, 0x09, 0x29, 0x0a, 0x2c, 0x09, 0x25, 0x0a, 0x52, 0x09, 0x29, 0x0a, 0x7c, 0x09, 0x23}

const unsigned short int pp_UNK_0xe91e = 0xe91e; // UNK_0xe91e size: 2
// {0x81, 0x00}

const unsigned short int pp_UNK_0xee61 = 0xee61; // UNK_0xee61 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf2b6 = 0xf2b6; // UNK_0xf2b6 size: 21
// {0x04, 0xa5, 0x0d, 0x09, 0x1f, 0x9e, 0x0d, 0x09, 0x2b, 0x97, 0x0d, 0x09, 0x2f, 0x90, 0x0d, 0x09, 0x3b, 0x89, 0x0d, 0x09, 0x23}


const unsigned short int cc_UNK_0xe548 = 0xe548; // UNK_0xe548
const unsigned short int cc_UNK_0xe54c = 0xe54c; // UNK_0xe54c


// 0xe512: db 0x05 0x01 '  '

// ================================================
// 0xe514: WORD 'UNK_0xe516' codep=0x224c parp=0xe516 params=0 returns=0
// ================================================

void UNK_0xe516() // UNK_0xe516
{
  Push(0xbd5b); // probable 'OV#IN$'
  MODULE(); // MODULE
}


// ================================================
// 0xe51e: WORD 'UNK_0xe520' codep=0x224c parp=0xe520 orphan params=0 returns=0
// ================================================

void UNK_0xe520() // UNK_0xe520
{
  Push(0xbd70); // probable 'OVQUITMESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe528: WORD 'UNK_0xe52a' codep=0x224c parp=0xe52a orphan params=0 returns=0
// ================================================

void UNK_0xe52a() // UNK_0xe52a
{
  Push(0xbd82); // probable 'OV.0$$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe532: WORD 'UNK_0xe534' codep=0x224c parp=0xe534 orphan params=0 returns=0
// ================================================

void UNK_0xe534() // UNK_0xe534
{
  Push(0xbd97); // probable 'OV0$$$MESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe53c: WORD 'UNK_0xe53e' codep=0x224c parp=0xe53e params=0 returns=0
// ================================================

void UNK_0xe53e() // UNK_0xe53e
{
  Push(0xbdba); // probable 'OVTRIMS'
  MODULE(); // MODULE
}


// ================================================
// 0xe546: WORD 'UNK_0xe548' codep=0x2214 parp=0xe548
// ================================================
// 0xe548: dw 0x0003

// ================================================
// 0xe54a: WORD 'UNK_0xe54c' codep=0x2214 parp=0xe54c
// ================================================
// 0xe54c: dw 0x0004

// ================================================
// 0xe54e: WORD 'UNK_0xe550' codep=0x224c parp=0xe550
// ================================================

void UNK_0xe550() // UNK_0xe550
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
}


// ================================================
// 0xe55a: WORD 'UNK_0xe55c' codep=0x224c parp=0xe55c params=0 returns=0
// ================================================

void UNK_0xe55c() // UNK_0xe55c
{
  Push(0xc52d); // probable 'OVINIT-BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe564: WORD 'UNK_0xe566' codep=0x224c parp=0xe566 params=0 returns=0
// ================================================

void UNK_0xe566() // UNK_0xe566
{
  Push(0xc542); // probable 'OVTRANSACT'
  MODULE(); // MODULE
}


// ================================================
// 0xe56e: WORD 'UNK_0xe570' codep=0x224c parp=0xe570 params=0 returns=0
// ================================================

void UNK_0xe570() // UNK_0xe570
{
  Push(0xc558); // probable 'OVD@BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe578: WORD 'UNK_0xe57a' codep=0x224c parp=0xe57a params=0 returns=0
// ================================================

void UNK_0xe57a() // UNK_0xe57a
{
  Push(0xc583); // probable 'OV?BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe582: WORD 'UNK_0xe584' codep=0x224c parp=0xe584 orphan params=0 returns=1
// ================================================

void UNK_0xe584() // UNK_0xe584
{
  PAD(); // PAD
  Push(Pop() + 0x0080); //  0x0080 +
}


// ================================================
// 0xe58e: WORD 'UNK_0xe590' codep=0x224c parp=0xe590 params=1 returns=1
// ================================================

void UNK_0xe590() // UNK_0xe590
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
// 0xe5a4: WORD 'UNK_0xe5a6' codep=0x224c parp=0xe5a6 orphan params=0 returns=0
// ================================================

void UNK_0xe5a6() // UNK_0xe5a6
{
  Push(4);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
}


// ================================================
// 0xe5ae: WORD 'UNK_0xe5b0' codep=0x1d29 parp=0xe5b0
// ================================================
// 0xe5b0: db 0xd5 0x57 0x00 0xf5 ' W  '

// ================================================
// 0xe5b4: WORD 'UNK_0xe5b6' codep=0x224c parp=0xe5b6 params=0 returns=0
// ================================================

void UNK_0xe5b6() // UNK_0xe5b6
{
  GetCRS(); // @CRS
  Push(5);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_UNK_0xe5b0); // UNK_0xe5b0
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(6);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  StoreCRS(); // !CRS
}


// ================================================
// 0xe5d0: WORD 'UNK_0xe5d2' codep=0x224c parp=0xe5d2 orphan
// ================================================

void UNK_0xe5d2() // UNK_0xe5d2
{
  do
  {
    KEY_2(); // KEY_2
    Push(Pop()==0x000d?1:0); //  0x000d =
  } while(Pop() == 0);
}


// ================================================
// 0xe5e0: WORD 'UNK_0xe5e2' codep=0x224c parp=0xe5e2 params=0 returns=0
// ================================================

void UNK_0xe5e2() // UNK_0xe5e2
{
  PRINT("AND PRESS SPACEBAR", 18); // (.")
}


// ================================================
// 0xe5f9: WORD 'UNK_0xe5fb' codep=0x224c parp=0xe5fb params=0 returns=0
// ================================================

void UNK_0xe5fb() // UNK_0xe5fb
{
  PRINT("PAGE THROUGH FILES ^\\", 21); // (.")
}


// ================================================
// 0xe615: WORD 'UNK_0xe617' codep=0x224c parp=0xe617
// ================================================

void UNK_0xe617() // UNK_0xe617
{
  Push(Read16(regsp)); // DUP
  _0MESS(); // 0MESS
  Push(0x0025);
  CMESS(); // CMESS
  PRINT("SELECT OPTIONS [] ", 18); // (.")
  UNK_0xe5e2(); // UNK_0xe5e2
  StoreCRS(); // !CRS
}


// ================================================
// 0xe63c: WORD 'UNK_0xe63e' codep=0x224c parp=0xe63e params=11 returns=0
// ================================================

void UNK_0xe63e() // UNK_0xe63e
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe656: WORD 'UNK_0xe658' codep=0x73ea parp=0xe658
// ================================================
LoadDataType UNK_0xe658 = {CREWMEMBERIDX, 0x00, 0x08, 0x14, 0x6489};

// ================================================
// 0xe65e: WORD 'UNK_0xe660' codep=0x73ea parp=0xe660
// ================================================
LoadDataType UNK_0xe660 = {CREWMEMBERIDX, 0x08, 0x01, 0x14, 0x6489};

// ================================================
// 0xe666: WORD 'UNK_0xe668' codep=0x73ea parp=0xe668
// ================================================
LoadDataType UNK_0xe668 = {CREWMEMBERIDX, 0x0d, 0x01, 0x14, 0x6489};

// ================================================
// 0xe66e: WORD 'UNK_0xe670' codep=0x73ea parp=0xe670
// ================================================
LoadDataType UNK_0xe670 = {CREWMEMBERIDX, 0x12, 0x01, 0x14, 0x6489};

// ================================================
// 0xe676: WORD 'UNK_0xe678' codep=0x73ea parp=0xe678
// ================================================
LoadDataType UNK_0xe678 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xe67e: WORD 'UNK_0xe680' codep=0x744d parp=0xe680
// ================================================
IFieldType UNK_0xe680 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe683: WORD 'UNK_0xe685' codep=0x744d parp=0xe685
// ================================================
IFieldType UNK_0xe685 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xe688: WORD 'UNK_0xe68a' codep=0x744d parp=0xe68a
// ================================================
IFieldType UNK_0xe68a = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xe68d: WORD 'UNK_0xe68f' codep=0x744d parp=0xe68f
// ================================================
IFieldType UNK_0xe68f = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xe692: WORD 'UNK_0xe694' codep=0x744d parp=0xe694
// ================================================
IFieldType UNK_0xe694 = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xe697: WORD 'UNK_0xe699' codep=0x744d parp=0xe699
// ================================================
IFieldType UNK_0xe699 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xe69c: WORD 'UNK_0xe69e' codep=0x744d parp=0xe69e
// ================================================
IFieldType UNK_0xe69e = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe6a1: WORD 'UNK_0xe6a3' codep=0x744d parp=0xe6a3
// ================================================
IFieldType UNK_0xe6a3 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xe6a6: WORD 'UNK_0xe6a8' codep=0x744d parp=0xe6a8
// ================================================
IFieldType UNK_0xe6a8 = {CREWMEMBERIDX, 0x22, 0x01};

// ================================================
// 0xe6ab: WORD 'UNK_0xe6ad' codep=0x73ea parp=0xe6ad
// ================================================
LoadDataType UNK_0xe6ad = {PSTATSIDX, 0x00, 0x09, 0x0b, 0x969f};

// ================================================
// 0xe6b3: WORD 'UNK_0xe6b5' codep=0x73ea parp=0xe6b5
// ================================================
LoadDataType UNK_0xe6b5 = {PSTATSIDX, 0x09, 0x01, 0x0b, 0x969f};

// ================================================
// 0xe6bb: WORD 'UNK_0xe6bd' codep=0x73ea parp=0xe6bd
// ================================================
LoadDataType UNK_0xe6bd = {PSTATSIDX, 0x0a, 0x01, 0x0b, 0x969f};

// ================================================
// 0xe6c3: WORD 'UNK_0xe6c5' codep=0x224c parp=0xe6c5
// ================================================

void UNK_0xe6c5() // UNK_0xe6c5
{
  unsigned short int i, imax;
  Push(0x00c3);
  Push(1);
  Push(0x001c);
  Push(0x0043);
  SetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0x00b6);
  Push(0x0044);
  Push(0x001c);
  Push(0x009d);
  SetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  SetColor(WHITE);
  SetColor(WHITE);
  SetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i + 1); // I 1+
    Push(0x001c);
    OVER(); // OVER
    Push(0x00c3);
    LLINE(); // LLINE
    Push(0x009d + i); // 0x009d I +
    Push(0x001c);
    OVER(); // OVER
    Push(0x00b6);
    LLINE(); // LLINE
    Push(3);
    Push(0x001a + i); // 0x001a I +
    Push(0x009c);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x0044);
    Push(0x00b7 + i); // 0x00b7 I +
    Push(0x009c);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(3);
    Push(0x00c4 + i); // 0x00c4 I +
    Push(0x0041);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x0042 + i); // 0x0042 I +
    Push(0x00b9);
    OVER(); // OVER
    Push(0x00c3);
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(0x004e);
  Push(0x00c5);
  SetColor(DK_dash_BLUE);
  Draw1LOGO(); // .1LOGO
  _gt_3FONT(); // >3FONT
  Push(0x005f);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("PERSONNEL", 9); // (.")
  SetColor(BLACK);
  SetColor(BLACK);
  SetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x000a);
  Push(0x00bd);
  POS_dot_(); // POS.
  PRINT("FILE", 4); // (.")
  Push(2);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  UNK_0xe5b6(); // UNK_0xe5b6
  SetColor(WHITE);
  SetColor(WHITE);
  SetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(2);
  Push(0x001c);
  Push(Read16(cc_UNK_0xe548)); // UNK_0xe548
  Push(2);
  Push(0x00c4);
  Push(Read16(cc_UNK_0xe54c)); // UNK_0xe54c
  Push(0x0041);
  Push(0x00c4);
  Push(Read16(cc_UNK_0xe548)); // UNK_0xe548
  Push(0x009c);
  Push(0x001c);
  Push(Read16(cc_UNK_0xe54c)); // UNK_0xe54c
  Push(0x009c);
  Push(0x00b7);
  Push(Read16(cc_UNK_0xe548)); // UNK_0xe548
  Push(0x0043);
  Push(0x00b9);
  Push(Read16(cc_UNK_0xe548)); // UNK_0xe548
  Push(6);
  UNK_0xe53e(); // UNK_0xe53e
}


// ================================================
// 0xe804: WORD 'UNK_0xe806' codep=0x224c parp=0xe806 params=0 returns=1
// ================================================

void UNK_0xe806() // UNK_0xe806
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0);

  label2:
  IsLAST(); // ?LAST
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  Push(Read16(0x63ef+UNK_0xe6a3.offset)&0xFF); // UNK_0xe6a3<IFIELD> C@
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xe828: WORD 'UNK_0xe82a' codep=0x224c parp=0xe82a params=1 returns=0
// ================================================

void UNK_0xe82a() // UNK_0xe82a
{
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(Read16(0x63ef+UNK_0xe6a8.offset)&0xFF); // UNK_0xe6a8<IFIELD> C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    IPREV(); // IPREV
    return;
  }
  _0_gt_(); // 0>
  Push(Read16(0x63ef+UNK_0xe6a3.offset)&0xFF); // UNK_0xe6a3<IFIELD> C@
  UNK_0xe806(); // UNK_0xe806
  Push(Pop() | Pop()); // OR
  Push(Read16(0x63ef+UNK_0xe6a8.offset)&0xFF); // UNK_0xe6a8<IFIELD> C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xe862: WORD 'UNK_0xe864' codep=0x1d29 parp=0xe864
// ================================================
// 0xe864: db 0x03 0x0a 0x02 0x09 0x29 0x0a 0x2c 0x09 0x25 0x0a 0x52 0x09 0x29 0x0a 0x7c 0x09 0x23 '    ) , % R ) | #'

// ================================================
// 0xe875: WORD 'UNK_0xe877' codep=0x224c parp=0xe877 params=0 returns=0
// ================================================

void UNK_0xe877() // UNK_0xe877
{
  CTINIT(); // CTINIT
  Push(0x009f);
  Push(1);
  Push(1);
  Push(1);
  LLINE(); // LLINE
  Push(0x009f);
  Push(0x000b);
  Push(1);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(1);
  Push(1);
  Push(1);
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x002b);
  Push(1);
  Push(0x002b);
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x0051);
  Push(1);
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x007b);
  Push(1);
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x009f);
  Push(1);
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x000b);
  Push(8);
  POS_dot_(); // POS.
  PRINT("CREATE", 6); // (.")
  Push(0x0035);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("TRAIN", 5); // (.")
  Push(0x005b);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("DELETE", 6); // (.")
  Push(0x0085);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe91c: WORD 'UNK_0xe91e' codep=0x1d29 parp=0xe91e
// ================================================
// 0xe91e: db 0x81 0x00 '  '

// ================================================
// 0xe920: WORD 'UNK_0xe922' codep=0x224c parp=0xe922 params=3 returns=0
// ================================================

void UNK_0xe922() // UNK_0xe922
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xe928: WORD 'UNK_0xe92a' codep=0x224c parp=0xe92a params=1 returns=0
// ================================================

void UNK_0xe92a() // UNK_0xe92a
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  Store_3(); // !_3
  CTINIT(); // CTINIT
  SetColor(BLACK);
  SetColor(BLACK);
  SetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x000a);
  Push(0x0029);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(6);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  Push(a); // R>
  UNK_0xe922(); // UNK_0xe922
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xea42: WORD 'UNK_0xea44' codep=0x224c parp=0xea44 params=0 returns=0
// ================================================

void UNK_0xea44() // UNK_0xea44
{
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push((Read16(0x63ef+UNK_0xe6a3.offset)&0xFF) & 2); // UNK_0xe6a3<IFIELD> C@ 2 AND
  if (Pop() != 0)
  {
    SetColor(RED);
  } else
  {
    SetColor(GREY2);
  }
  StoreCOLOR(); // !COLOR
  Push(0x0041);
  Push(Read16(pp_UNK_0xe91e)); // UNK_0xe91e @
  Push(0x0033);
  UNK_0xe922(); // UNK_0xe922
  _gt_3FONT(); // >3FONT
  PRINT("DEAD", 4); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xea7b: WORD 'UNK_0xea7d' codep=0x224c parp=0xea7d
// ================================================

void UNK_0xea7d() // UNK_0xea7d
{
  unsigned short int a;
  Push(Read16(pp_UNK_0xe91e)); // UNK_0xe91e @
  a = Pop(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  CTINIT(); // CTINIT
  Push(0x63ef+UNK_0xe680.offset); // UNK_0xe680<IFIELD>
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    _do__dot_(); // $.
  } else
  {
    Pop(); // DROP
  }
  Push(0x007a);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Push(Read16(0x63ef+UNK_0xe69e.offset)&0xFF); // UNK_0xe69e<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  Push(Read16(0x63ef+UNK_0xe685.offset)&0xFF); // UNK_0xe685<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(UNK_0xe658); // from 'CREWMEMBER'
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  Push(Read16(0x63ef+UNK_0xe68a.offset)&0xFF); // UNK_0xe68a<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  Push(Read16(0x63ef+UNK_0xe68f.offset)&0xFF); // UNK_0xe68f<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(UNK_0xe678); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(a); // I
  UNK_0xe922(); // UNK_0xe922
  Push(Read16(0x63ef+UNK_0xe694.offset)&0xFF); // UNK_0xe694<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(6);
  Push(a); // R>
  UNK_0xe922(); // UNK_0xe922
  Push(Read16(0x63ef+UNK_0xe699.offset)&0xFF); // UNK_0xe699<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(UNK_0xe670); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
}


// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  Push(0x0064);
  Push(0x0080);
  POS_dot_(); // POS.
  Push(0x0064);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(0x0036);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  SetColor(GREY2);
  StoreCOLOR(); // !COLOR
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Push(Pop() + 0x007d); //  0x007d +
  FILE_st_(); // FILE<
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop() + 1); //  1+
  Push(0);
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(0xbeb2); // probable '.EGARUNBIT'
  } else
  {
    Push(0xbe8a); // probable '.RUNBIT'
  }
  MODULE(); // MODULE
  Push((Read16(0x63ef+UNK_0xe6a3.offset)&0xFF) & 2); // UNK_0xe6a3<IFIELD> C@ 2 AND
  if (Pop() == 0) return;
  GetCRS(); // @CRS
  SetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(0x0064);
  Push(0x0080);
  Push(0x0099);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x0064);
  Push(0x001e);
  Push(0x0099);
  Push(0x0080);
  LLINE(); // LLINE
  StoreCRS(); // !CRS
}


// ================================================
// 0xebcb: WORD 'UNK_0xebcd' codep=0x224c parp=0xebcd
// ================================================

void UNK_0xebcd() // UNK_0xebcd
{
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x0087);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  SetColor(WHITE);
  SetColor(WHITE);
  SetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x000a);
  Push(0x005c);
  POS_dot_(); // POS.
  PRINT("TYPE    : ", 10); // (.")
  LoadData(UNK_0xe6ad); // from 'PSTATS'
  Push(9);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x000a);
  Push(0x0050);
  POS_dot_(); // POS.
  PRINT("AVG. HT.: ", 10); // (.")
  LoadData(UNK_0xe6b5); // from 'PSTATS'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0);
  DrawR(); // .R
  PRINT(".", 1); // (.")
  Draw(); // .
  PRINT("M", 1); // (.")
  Push(0x000a);
  Push(0x0044);
  POS_dot_(); // POS.
  PRINT("AVG. WT.: ", 10); // (.")
  LoadData(UNK_0xe6bd); // from 'PSTATS'
  Push(Read16(Pop())&0xFF); //  C@
  Draw(); // .
  PRINT("KG", 2); // (.")
  StoreCRS(); // !CRS
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xec5b: WORD 'UNK_0xec5d' codep=0x224c parp=0xec5d
// ================================================

void UNK_0xec5d() // UNK_0xec5d
{
  unsigned short int a, i, imax;
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  GetCRS(); // @CRS
  Push(0x0080);
  Push(5);
  Push(0x001e);
  Push(0x0099);
  SetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(Read16(pp_UNK_0xe91e)); // UNK_0xe91e @
  a = Pop(); // >R
  Push(0x000e);
  SetColor(GREY2);
  Push(0x0030 + a); // 0x0030 I +
  Push(0x000a);
  POS_dot_PXT(); // POS.PXT
  Push(3);
  SetColor(GREY2);
  Push(0x0030 + a); // 0x0030 I +
  Push(0x007a);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(3);
    SetColor(GREY2);
    Push((i * 7 + 6) + a); // I 7 * 6 + J +
    Push(0x004a);
    POS_dot_PXT(); // POS.PXT
    Push(2);
    Push(i + (i==4?1:0) * 5); // I I 4 = 5 * +
    SetColor(GREY2);
    Push((i * 7 + 6) + a); // I 7 * 6 + J +
    Push(0x008d);
    Push(i + (i==4?1:0) * 0xffea); // I I 4 = 0xffea * +
    POS_dot_PXT(); // POS.PXT
    i++;
  } while(i<imax); // (LOOP)

  Push(2);
  SetColor(GREY2);
  Push(0x003d + a); // 0x003d I +
  Push(0x0028);
  POS_dot_PXT(); // POS.PXT
  Push(0x0028);
  Push(0x003d);
  Push(a); // R>
  UNK_0xe922(); // UNK_0xe922
  Push((Read16(0x63ef+UNK_0xe6a8.offset)&0xFF) + 1); // UNK_0xe6a8<IFIELD> C@ 1+
  Push(2);
  DrawR(); // .R
  Push(Read16(0x63ef+UNK_0xe6a3.offset) & 1); // UNK_0xe6a3<IFIELD> @ 1 AND
  if (Pop() != 0)
  {
    Push(0x0080);
    Push(0x0064);
    Push(0x001e);
    Push(0x0099);
    SetColor(BLACK);
    POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Read16(regsp)); // DUP
    UNK_0xeb45(); // UNK_0xeb45
    UNK_0xebcd(); // UNK_0xebcd
    UNK_0xea7d(); // UNK_0xea7d
  }
  UNK_0xea44(); // UNK_0xea44
  StoreCRS(); // !CRS
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xed57: WORD 'UNK_0xed59' codep=0x224c parp=0xed59 params=1 returns=0
// ================================================

void UNK_0xed59() // UNK_0xed59
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xe82a(); // UNK_0xe82a
  UNK_0xec5d(); // UNK_0xec5d
}


// ================================================
// 0xed65: WORD 'UNK_0xed67' codep=0x224c parp=0xed67
// ================================================

void UNK_0xed67() // UNK_0xed67
{
  unsigned short int a;
  Push(Read16(pp_NCRS)); // NCRS @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(4);
  } else
  {
    Push(5);
    MOD(); // MOD
  }
  a = Pop(); // >R
  Push(a); // I
  Push(pp_OCRS); // OCRS
  Store_3(); // !_3
  Push(a); // I
  Push(pp_NCRS); // NCRS
  Store_3(); // !_3
  SetColor(GREY1);
  SetColor(GREY1);
  Push(Read16(pp_IsTANDRG)); // ?TANDRG @
  if (Pop() != 0)
  {
    SetColor(GREY1);
  } else
  {
    SetColor(RED);
  }
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(a); // I
  Push(0x63ef+INST_dash_SPECIES.offset); // INST-SPECIES<IFIELD>
  Store_3(); // !_3
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(UNK_0xe660); // from 'CREWMEMBER'
  Push(0x63ef+UNK_0xe685.offset); // UNK_0xe685<IFIELD>
  Push(5);
  CMOVE(); // CMOVE
  Push(1);
  Push(0x63ef+UNK_0xe6a3.offset); // UNK_0xe6a3<IFIELD>
  Store_3(); // !_3
  Push(0x0064);
  Push(0x63ef+UNK_0xe69e.offset); // UNK_0xe69e<IFIELD>
  C_ex_(); // C!
  Push(Read16(pp_XORMODE)); // XORMODE @
  if (Pop() != 0)
  {
    BLT(); // BLT
  }
  UNK_0xec5d(); // UNK_0xec5d
  LoadData(UNK_0xe658); // from 'CREWMEMBER'
  Push((Read16(Pop())&0xFF) * 4 + 4); //  C@ 4 * 4 +
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  BLT(); // BLT
}


// ================================================
// 0xedeb: WORD 'UNK_0xeded' codep=0x224c parp=0xeded
// ================================================

void UNK_0xeded() // UNK_0xeded
{
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    Push(pp_NCRS); // NCRS
    _plus__ex_(); // +!
    Push(Read16(pp_NCRS)); // NCRS @
    Push(!(Read16(pp_NCRS)==Read16(pp_OCRS)?1:0)); // NCRS @ OCRS @ = NOT
    if (Pop() != 0)
    {
      UNK_0xed67(); // UNK_0xed67
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  BLT(); // BLT
  Push(Read16(regsp)); // DUP
  Push(pp_NCRS); // NCRS
  Store_3(); // !_3
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xee1b: WORD 'UNK_0xee1d' codep=0x224c parp=0xee1d params=0 returns=0
// ================================================

void UNK_0xee1d() // UNK_0xee1d
{
  PRINT("TYPE THIS CREWMEMBER'S NAME", 27); // (.")
}


// ================================================
// 0xee3d: WORD 'UNK_0xee3f' codep=0x224c parp=0xee3f
// ================================================

void UNK_0xee3f() // UNK_0xee3f
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
// 0xee5f: WORD 'UNK_0xee61' codep=0x1d29 parp=0xee61
// ================================================
// 0xee61: db 0x3a 0x20 ': '

// ================================================
// 0xee63: WORD 'UNK_0xee65' codep=0x224c parp=0xee65
// ================================================

void UNK_0xee65() // UNK_0xee65
{
  unsigned short int a, i, imax;
  LoadData(UNK_0xe668); // from 'CREWMEMBER'
  Push((Read16(Pop() + Read16(pp_OCRS))&0xFF) - (Read16((0x63ef+UNK_0xe685.offset) + Read16(pp_OCRS))&0xFF)); //  OCRS @ + C@ UNK_0xe685<IFIELD> OCRS @ + C@ -
  LoadData(UNK_0xe670); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  UNK_0xe570(); // UNK_0xe570
  Push(0x86a0); Push(0x0001);
  DMIN(); // DMIN
  Push(0x012c);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  MIN(); // MIN
  Push(pp_UNK_0xee61); // UNK_0xee61
  Store_3(); // !_3
  UNK_0xe550(); // UNK_0xe550
  Push(0);
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("BALANCE:", 8); // (.")
  UNK_0xe570(); // UNK_0xe570
  Push(7);
  D_dot_R(); // D.R
  PRINT(" COST: 300 MU/SESSION", 21); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("HOW MANY TRAINING SESSIONS (0-", 30); // (.")
  Push(Read16(pp_UNK_0xee61)); // UNK_0xee61 @
  Push(0);
  DrawR(); // .R
  PRINT(")\? ", 3); // (.")
  SetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(-1);
  Push(pp__dash_AIN); // -AIN
  Store_3(); // !_3
  Push(3);
  UNK_0xe516(); // UNK_0xe516
  a = Pop(); // >R
  StoreCRS(); // !CRS
  Push(a); // R>
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
    Push(Pop() * 0x000a + ((Read16(i)&0xFF) - 0x0030)); //  0x000a * I C@ 0x0030 - +
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_UNK_0xee61)); // UNK_0xee61 @
  MIN(); // MIN
  Push(pp_UNK_0xee61); // UNK_0xee61
  Store_3(); // !_3
}


// ================================================
// 0xef51: WORD 'UNK_0xef53' codep=0x224c parp=0xef53
// ================================================

void UNK_0xef53() // UNK_0xef53
{
  Push(0);
  _0MESS(); // 0MESS
  Push(0);
  Push(0x001c);
  CMESS(); // CMESS
  PRINT("THIS NAME IS ALREADY ON FILE", 28); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0024);
  CMESS(); // CMESS
  PRINT("[ CHOOSE ANOTHER OR ABORT CREATION ]", 36); // (.")
  StoreCRS(); // !CRS
  do
  {
    XYSCAN(); // XYSCAN
    SWAP(); // SWAP
    Pop(); // DROP
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(0);
    Push(0x001c);
    CMESS(); // CMESS
    PRINT("RE-", 3); // (.")
    UNK_0xee1d(); // UNK_0xee1d
    StoreCRS(); // !CRS
    Push(0);
  } else
  {
    Push(0x63ef+UNK_0xe6a3.offset); // UNK_0xe6a3<IFIELD>
    OFF(); // OFF
    UNK_0xec5d(); // UNK_0xec5d
    Push(1);
  }
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  SetColor(GREY2);
  StoreCOLOR(); // !COLOR
  BLT(); // BLT
  StoreCRS(); // !CRS
  BLT(); // BLT
}


// ================================================
// 0xeffd: WORD 'UNK_0xefff' codep=0x224c parp=0xefff params=0 returns=1
// ================================================

void UNK_0xefff() // UNK_0xefff
{
  unsigned short int i, imax;
  CI(); // CI
  _gt_C(); // >C
  Push(1);
  Push(0x0019);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x63ef+UNK_0xe680.offset); // UNK_0xe680<IFIELD>
    PAD(); // PAD
    _do__eq_(); // $=
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(0);
      imax = i; // LEAVE
    } else
    {
      INEXT(); // INEXT
    }
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf02b: WORD 'UNK_0xf02d' codep=0x224c parp=0xf02d params=0 returns=0
// ================================================

void UNK_0xf02d() // UNK_0xf02d
{
  Push(0);
  Push(0x001b);
  CMESS(); // CMESS
  UNK_0xee1d(); // UNK_0xee1d
  StoreCRS(); // !CRS
  Push(0x003c);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(8);
  Push(0x0032);
  Push(Read16(pp_UNK_0xe91e)); // UNK_0xe91e @
  UNK_0xe922(); // UNK_0xe922
  BLT(); // BLT
}


// ================================================
// 0xf051: WORD 'UNK_0xf053' codep=0x224c parp=0xf053
// ================================================

void UNK_0xf053() // UNK_0xf053
{
  UNK_0xf02d(); // UNK_0xf02d
  do
  {
    GetCRS(); // @CRS
    CTINIT(); // CTINIT
    SetColor(GREY1);
    StoreCOLOR(); // !COLOR
    Push(0x000a);
    Push(0x0030);
    Push(Read16(pp_UNK_0xe91e)); // UNK_0xe91e @
    UNK_0xe922(); // UNK_0xe922
    Push(pp__dash_AIN); // -AIN
    OFF(); // OFF
    Push(0x000e);
    UNK_0xe516(); // UNK_0xe516
    UNK_0xe590(); // UNK_0xe590
    Pop(); // DROP
    StoreCRS(); // !CRS
    UNK_0xefff(); // UNK_0xefff
    if (Pop() != 0)
    {
      PAD(); // PAD
      Push(0x63ef+UNK_0xe680.offset); // UNK_0xe680<IFIELD>
      _do__ex_(); // $!
      Push(1);
    } else
    {
      UNK_0xef53(); // UNK_0xef53
    }
  } while(Pop() == 0);
  BLT(); // BLT
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf09b: WORD 'UNK_0xf09d' codep=0x224c parp=0xf09d
// ================================================

void UNK_0xf09d() // UNK_0xf09d
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  GetCRS(); // @CRS
  Push((Read16(0x63ef+UNK_0xe6a3.offset)&0xFF)==0?1:0); // UNK_0xe6a3<IFIELD> C@ 0=
  if (Pop() != 0)
  {
    Push(0x63ef+UNK_0xe680.offset); // UNK_0xe680<IFIELD>
    OFF(); // OFF
    Push(0x63ef+UNK_0xe685.offset); // UNK_0xe685<IFIELD>
    Push(5);
    Push(0);
    FILL_1(); // FILL_1
    Push(pp_NCRS); // NCRS
    OFF(); // OFF
    Push(pp_OCRS); // OCRS
    OFF(); // OFF
    Push(0x0075);
    Push(0x0024);
    Push(Read16(pp_UNK_0xe91e)); // UNK_0xe91e @
    UNK_0xe922(); // UNK_0xe922
    Push(0x0018);
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    Push(9);
    Push(pp_LBLT); // LBLT
    Store_3(); // !_3
    Push(pp_XORMODE); // XORMODE
    OFF(); // OFF
    CURSORSPACE(); // CURSORSPACE
    Push(pp_ABLT); // ABLT
    Store_3(); // !_3
    Push(0);
    Push(0x0020);
    CMESS(); // CMESS
    CTINIT(); // CTINIT
    PRINT("SELECT RACE ^\\ ", 15); // (.")
    UNK_0xe5e2(); // UNK_0xe5e2
    StoreCRS(); // !CRS
    Push(pp_XORMODE); // XORMODE
    OFF(); // OFF
    Push(0);
    StoreINST_dash_SPECIES(); // !INST-SPECIES
    Push(pp_RECORD_n_); // RECORD#
    OFF(); // OFF
    GetCRS(); // @CRS
    UNK_0xed67(); // UNK_0xed67
    UNK_0xeded(); // UNK_0xeded
    UNK_0xf053(); // UNK_0xf053
    StoreCRS(); // !CRS
  } else
  {
    Push(0);
    Push(0x0016);
    CMESS(); // CMESS
    PRINT("THIS FILE IS NOT EMPTY", 22); // (.")
    StoreCRS(); // !CRS
    UNK_0xee3f(); // UNK_0xee3f
    Push(0);
    _0MESS(); // 0MESS
  }
  StoreCRS(); // !CRS
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe5fb(); // UNK_0xe5fb
  StoreCRS(); // !CRS
  Push(1);
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xf162: WORD 'UNK_0xf164' codep=0x224c parp=0xf164
// ================================================

void UNK_0xf164() // UNK_0xf164
{
  UNK_0xe550(); // UNK_0xe550
  Push(0);
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("SELECT SKILL ^\\", 15); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0012);
  CMESS(); // CMESS
  UNK_0xe5e2(); // UNK_0xe5e2
  StoreCRS(); // !CRS
}


// ================================================
// 0xf190: WORD 'UNK_0xf192' codep=0x224c parp=0xf192
// ================================================

void UNK_0xf192() // UNK_0xf192
{
  Push(Read16(0x63ef+UNK_0xe6a3.offset) & 2); // UNK_0xe6a3<IFIELD> @ 2 AND
  if (Pop() != 0)
  {
    Push(0);
    _0MESS(); // 0MESS
    Push(0);
    Push(0x0021);
    CMESS(); // CMESS
    PRINT("YOU CAN'T TRAIN ", 16); // (.")
    UNK_0xe63e(); // UNK_0xe63e
  } else
  {
    Push(0);
    Push(0x001d);
    CMESS(); // CMESS
    PRINT("THERE IS NO ONE HERE TO TRAIN", 29); // (.")
    StoreCRS(); // !CRS
  }
  UNK_0xee3f(); // UNK_0xee3f
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1f5: WORD 'UNK_0xf1f7' codep=0x224c parp=0xf1f7
// ================================================

void UNK_0xf1f7() // UNK_0xf1f7
{
  Push(0x012c); Push(0x0000);
  UNK_0xe57a(); // UNK_0xe57a
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0);
  Push(0x0012);
  CMESS(); // CMESS
  PRINT("INSUFFICIENT FUNDS", 18); // (.")
  BEEP(); // BEEP
  StoreCRS(); // !CRS
  UNK_0xee3f(); // UNK_0xee3f
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf230: WORD 'UNK_0xf232' codep=0x224c parp=0xf232
// ================================================

void UNK_0xf232() // UNK_0xf232
{
  LoadData(UNK_0xe668); // from 'CREWMEMBER'
  Push(Read16(Pop() + Read16(pp_OCRS))&0xFF); //  OCRS @ + C@
  Push((Read16(Pop() + Read16(pp_OCRS))&0xFF)==(Read16((0x63ef+UNK_0xe685.offset) + Read16(pp_OCRS))&0xFF)?1:0); //  OCRS @ + C@ UNK_0xe685<IFIELD> OCRS @ + C@ =
  if (Pop() != 0)
  {
    UNK_0xe550(); // UNK_0xe550
    Push(0);
    Push(0x0022);
    CMESS(); // CMESS
    PRINT("MAXIMUM TRAINING LEVEL HAS ALREADY", 34); // (.")
    StoreCRS(); // !CRS
    Push(1);
    Push(0x001c);
    CMESS(); // CMESS
    PRINT("BEEN ATTAINED FOR THIS SKILL", 28); // (.")
    StoreCRS(); // !CRS
    UNK_0xee3f(); // UNK_0xee3f
    UNK_0xe550(); // UNK_0xe550
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xf2b4: WORD 'UNK_0xf2b6' codep=0x1d29 parp=0xf2b6
// ================================================
// 0xf2b6: db 0x04 0xa5 0x0d 0x09 0x1f 0x9e 0x0d 0x09 0x2b 0x97 0x0d 0x09 0x2f 0x90 0x0d 0x09 0x3b 0x89 0x0d 0x09 0x23 '        +   /   ;   #'

// ================================================
// 0xf2cb: WORD 'UNK_0xf2cd' codep=0x224c parp=0xf2cd
// ================================================

void UNK_0xf2cd() // UNK_0xf2cd
{
  SetColor(GREY1);
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
  UNK_0xf164(); // UNK_0xf164
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  Push(pp_UNK_0xf2b6); // UNK_0xf2b6
  BLD_dash_CRS(); // BLD-CRS
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    Push(Pop() * -1); //  -1 *
    Push(pp_NCRS); // NCRS
    _plus__ex_(); // +!
    Push(pp_UNK_0xf2b6); // UNK_0xf2b6
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  UNK_0xf232(); // UNK_0xf232
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    UNK_0xee65(); // UNK_0xee65
    Push(0x012c);
    Push(Read16(pp_UNK_0xee61)); // UNK_0xee61 @
    U_star_(); // U*
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      DNEGATE(); // DNEGATE
      Push(0xc5ca); // probable 'T+BALANCE'
      MODULE(); // MODULE
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    Push(Read16((0x63ef+UNK_0xe685.offset) + Read16(pp_OCRS))&0xFF); // UNK_0xe685<IFIELD> OCRS @ + C@
    LoadData(UNK_0xe670); // from 'CREWMEMBER'
    Push((Read16(Pop())&0xFF) * Read16(pp_UNK_0xee61)); //  C@ UNK_0xee61 @ *
    Push(Pop() + Pop()); // +
    LoadData(UNK_0xe668); // from 'CREWMEMBER'
    Push(Read16(Pop() + Read16(pp_OCRS))&0xFF); //  OCRS @ + C@
    MIN(); // MIN
    Push((0x63ef+UNK_0xe685.offset) + Read16(pp_OCRS)); // UNK_0xe685<IFIELD> OCRS @ +
    C_ex_(); // C!
    UNK_0xec5d(); // UNK_0xec5d
  }
  SetColor(GREY1);
  StoreCOLOR(); // !COLOR
  BLT(); // BLT
  Push(0);
  _0MESS(); // 0MESS
  SetColor(WHITE);
  SetColor(GREY1);
  SetColor(RED);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
}


// ================================================
// 0xf369: WORD 'UNK_0xf36b' codep=0x224c parp=0xf36b params=0 returns=1
// ================================================

void UNK_0xf36b() // UNK_0xf36b
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==4?1:0); //  4 =
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0);
  Push(0x0019);
  CMESS(); // CMESS
  PRINT("ANDROIDS CAN'T BE TRAINED", 25); // (.")
  StoreCRS(); // !CRS
  UNK_0xee3f(); // UNK_0xee3f
}


// ================================================
// 0xf3a1: WORD 'UNK_0xf3a3' codep=0x224c parp=0xf3a3
// ================================================

void UNK_0xf3a3() // UNK_0xf3a3
{
  UNK_0xe550(); // UNK_0xe550
  Push(Read16(0x63ef+UNK_0xe6a3.offset) + 1 & 3); // UNK_0xe6a3<IFIELD> @ 1 XOR 3 AND
  if (Pop() != 0)
  {
    UNK_0xf192(); // UNK_0xf192
  } else
  {
    UNK_0xf36b(); // UNK_0xf36b
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      UNK_0xf1f7(); // UNK_0xf1f7
      if (Pop() != 0)
      {
        GetCRS(); // @CRS
        UNK_0xf2cd(); // UNK_0xf2cd
        StoreCRS(); // !CRS
      }
    }
  }
  Push(0);
  _0MESS(); // 0MESS
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe5fb(); // UNK_0xe5fb
  StoreCRS(); // !CRS
  Push(1);
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xf3e5: WORD 'UNK_0xf3e7' codep=0x224c parp=0xf3e7 params=0 returns=0
// ================================================

void UNK_0xf3e7() // UNK_0xf3e7
{
  Push(0x63ef+UNK_0xe6a3.offset); // UNK_0xe6a3<IFIELD>
  OFF(); // OFF
  Push(0x63ef+UNK_0xe680.offset); // UNK_0xe680<IFIELD>
  Push(0x000f);
  Push(0);
  FILL_1(); // FILL_1
}


// ================================================
// 0xf3f7: WORD 'UNK_0xf3f9' codep=0x224c parp=0xf3f9
// ================================================

void UNK_0xf3f9() // UNK_0xf3f9
{
  UNK_0xe550(); // UNK_0xe550
  Push((Read16(0x63ef+UNK_0xe6a3.offset)&0xFF)==0?1:0); // UNK_0xe6a3<IFIELD> C@ 0=
  if (Pop() != 0)
  {
    Push(0);
    Push(0x001a);
    CMESS(); // CMESS
    PRINT("THIS FILE IS ALREADY EMPTY", 26); // (.")
    StoreCRS(); // !CRS
    UNK_0xee3f(); // UNK_0xee3f
    Push(0);
    _0MESS(); // 0MESS
  } else
  {
    Push(0);
    Push(0x0017);
    CMESS(); // CMESS
    PRINT("DELETE THIS CREWMEMBER\?", 23); // (.")
    StoreCRS(); // !CRS
    Push(1);
    Push(7);
    CMESS(); // CMESS
    PRINT("[N  Y]", 6); // (.")
    StoreCRS(); // !CRS
    do
    {
      XYSCAN(); // XYSCAN
      SWAP(); // SWAP
      Pop(); // DROP
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    } while(Pop() == 0);
    _0_gt_(); // 0>
    if (Pop() != 0)
    {
      UNK_0xf3e7(); // UNK_0xf3e7
      UNK_0xec5d(); // UNK_0xec5d
    }
    UNK_0xe550(); // UNK_0xe550
  }
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe5fb(); // UNK_0xe5fb
  StoreCRS(); // !CRS
  Push(1);
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xf495: WORD 'UNK_0xf497' codep=0x224c parp=0xf497
// ================================================

void UNK_0xf497() // UNK_0xf497
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  SetColor(WHITE);
  SetColor(GREY1);
  SetColor(RED);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  UNK_0xe6c5(); // UNK_0xe6c5
  UNK_0xe877(); // UNK_0xe877
  Push(pp_UNK_0xe864); // UNK_0xe864
  BLD_dash_CRS(); // BLD-CRS
  Push(0x0081);
  UNK_0xe92a(); // UNK_0xe92a
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  UNK_0xec5d(); // UNK_0xec5d
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe5fb(); // UNK_0xe5fb
  StoreCRS(); // !CRS
  Push(1);
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xf4d5: WORD 'PFILE-FUNCTION' codep=0x4a4f parp=0xf4e8
// ================================================

void PFILE_dash_FUNCTION() // PFILE-FUNCTION
{
  switch(Pop()) // PFILE-FUNCTION
  {
  case 0:
    UNK_0xf09d(); // UNK_0xf09d
    break;
  case 1:
    UNK_0xf3a3(); // UNK_0xf3a3
    break;
  case 2:
    UNK_0xf3f9(); // UNK_0xf3f9
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
// 0xf4fc: WORD '(U-PFILE)' codep=0x224c parp=0xf50a
// ================================================
// entry

void _ro_U_dash_PFILE_rc_() // (U-PFILE)
{
  UNK_0xe55c(); // UNK_0xe55c
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf497(); // UNK_0xf497
  do
  {
    XYSCAN(); // XYSCAN
    Push(pp_NCRS); // NCRS
    _plus__ex_(); // +!
    UNK_0xed59(); // UNK_0xed59
    Push(pp_UNK_0xe864); // UNK_0xe864
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
    IsTRIG(); // ?TRIG
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(!Pop()); //  NOT
      Push(Read16(pp_OCRS)); // OCRS @
      PFILE_dash_FUNCTION(); // PFILE-FUNCTION case
    }
  } while(Pop() == 0);
  _gt_0FONT(); // >0FONT
  Push(4);
  UNK_0xe566(); // UNK_0xe566
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}

// 0xf542: db 0x50 0x46 0x49 0x4c 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'PFILE-VOC_____________________ '

