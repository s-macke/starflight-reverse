// ====== OVERLAY 'PERSONNEL-OV' ======
// store offset = 0xe500
// overlay size   = 0x1060

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE516  codep:0x224c wordp:0xe516 size:0x0008 C-string:'WE516'
//           WE520  codep:0x224c wordp:0xe520 size:0x0008 C-string:'WE520'
//           WE52A  codep:0x224c wordp:0xe52a size:0x0008 C-string:'WE52A'
//           WE534  codep:0x224c wordp:0xe534 size:0x0008 C-string:'WE534'
//           WE53E  codep:0x224c wordp:0xe53e size:0x0008 C-string:'WE53E'
//           WE548  codep:0x2214 wordp:0xe548 size:0x0002 C-string:'WE548'
//           WE54C  codep:0x2214 wordp:0xe54c size:0x0002 C-string:'WE54C'
//           WE550  codep:0x224c wordp:0xe550 size:0x000a C-string:'WE550'
//           WE55C  codep:0x224c wordp:0xe55c size:0x0008 C-string:'WE55C'
//           WE566  codep:0x224c wordp:0xe566 size:0x0008 C-string:'WE566'
//           WE570  codep:0x224c wordp:0xe570 size:0x0008 C-string:'WE570'
//           WE57A  codep:0x224c wordp:0xe57a size:0x0008 C-string:'WE57A'
//           WE584  codep:0x224c wordp:0xe584 size:0x000a C-string:'WE584'
//           WE590  codep:0x224c wordp:0xe590 size:0x0014 C-string:'WE590'
//           WE5A6  codep:0x224c wordp:0xe5a6 size:0x0008 C-string:'WE5A6'
//           WE5B0  codep:0x1d29 wordp:0xe5b0 size:0x0004 C-string:'WE5B0'
//           WE5B6  codep:0x224c wordp:0xe5b6 size:0x001a C-string:'WE5B6'
//           WE5D2  codep:0x224c wordp:0xe5d2 size:0x000e C-string:'WE5D2'
//           WE5E2  codep:0x224c wordp:0xe5e2 size:0x0017 C-string:'WE5E2'
//           WE5FB  codep:0x224c wordp:0xe5fb size:0x001a C-string:'WE5FB'
//           WE617  codep:0x224c wordp:0xe617 size:0x0025 C-string:'WE617'
//           WE63E  codep:0x224c wordp:0xe63e size:0x0018 C-string:'WE63E'
//           WE658  codep:0x73ea wordp:0xe658 size:0x0006 C-string:'WE658'
//           WE660  codep:0x73ea wordp:0xe660 size:0x0006 C-string:'WE660'
//           WE668  codep:0x73ea wordp:0xe668 size:0x0006 C-string:'WE668'
//           WE670  codep:0x73ea wordp:0xe670 size:0x0006 C-string:'WE670'
//           WE678  codep:0x73ea wordp:0xe678 size:0x0006 C-string:'WE678'
//           WE680  codep:0x744d wordp:0xe680 size:0x0003 C-string:'WE680'
//           WE685  codep:0x744d wordp:0xe685 size:0x0003 C-string:'WE685'
//           WE68A  codep:0x744d wordp:0xe68a size:0x0003 C-string:'WE68A'
//           WE68F  codep:0x744d wordp:0xe68f size:0x0003 C-string:'WE68F'
//           WE694  codep:0x744d wordp:0xe694 size:0x0003 C-string:'WE694'
//           WE699  codep:0x744d wordp:0xe699 size:0x0003 C-string:'WE699'
//           WE69E  codep:0x744d wordp:0xe69e size:0x0003 C-string:'WE69E'
//           WE6A3  codep:0x744d wordp:0xe6a3 size:0x0003 C-string:'WE6A3'
//           WE6A8  codep:0x744d wordp:0xe6a8 size:0x0003 C-string:'WE6A8'
//           WE6AD  codep:0x73ea wordp:0xe6ad size:0x0006 C-string:'WE6AD'
//           WE6B5  codep:0x73ea wordp:0xe6b5 size:0x0006 C-string:'WE6B5'
//           WE6BD  codep:0x73ea wordp:0xe6bd size:0x0006 C-string:'WE6BD'
//           WE6C5  codep:0x224c wordp:0xe6c5 size:0x013f C-string:'WE6C5'
//           WE806  codep:0x224c wordp:0xe806 size:0x0022 C-string:'WE806'
//           WE82A  codep:0x224c wordp:0xe82a size:0x0038 C-string:'WE82A'
//           WE864  codep:0x1d29 wordp:0xe864 size:0x0011 C-string:'WE864'
//           WE877  codep:0x224c wordp:0xe877 size:0x00a5 C-string:'WE877'
//           WE91E  codep:0x1d29 wordp:0xe91e size:0x0002 C-string:'WE91E'
//           WE922  codep:0x224c wordp:0xe922 size:0x0006 C-string:'WE922'
//           WE92A  codep:0x224c wordp:0xe92a size:0x0118 C-string:'WE92A'
//           WEA44  codep:0x224c wordp:0xea44 size:0x0037 C-string:'WEA44'
//           WEA7D  codep:0x224c wordp:0xea7d size:0x00c6 C-string:'WEA7D'
//           WEB45  codep:0x224c wordp:0xeb45 size:0x0086 C-string:'WEB45'
//           WEBCD  codep:0x224c wordp:0xebcd size:0x008e C-string:'WEBCD'
//           WEC5D  codep:0x224c wordp:0xec5d size:0x00fa C-string:'WEC5D'
//           WED59  codep:0x224c wordp:0xed59 size:0x000c C-string:'WED59'
//           WED67  codep:0x224c wordp:0xed67 size:0x0084 C-string:'WED67'
//           WEDED  codep:0x224c wordp:0xeded size:0x002e C-string:'WEDED'
//           WEE1D  codep:0x224c wordp:0xee1d size:0x0020 C-string:'WEE1D'
//           WEE3F  codep:0x224c wordp:0xee3f size:0x0020 C-string:'WEE3F'
//           WEE61  codep:0x1d29 wordp:0xee61 size:0x0002 C-string:'WEE61'
//           WEE65  codep:0x224c wordp:0xee65 size:0x00ec C-string:'WEE65'
//           WEF53  codep:0x224c wordp:0xef53 size:0x00aa C-string:'WEF53'
//           WEFFF  codep:0x224c wordp:0xefff size:0x002c C-string:'WEFFF'
//           WF02D  codep:0x224c wordp:0xf02d size:0x0024 C-string:'WF02D'
//           WF053  codep:0x224c wordp:0xf053 size:0x0048 C-string:'WF053'
//           WF09D  codep:0x224c wordp:0xf09d size:0x00c5 C-string:'WF09D'
//           WF164  codep:0x224c wordp:0xf164 size:0x002c C-string:'WF164'
//           WF192  codep:0x224c wordp:0xf192 size:0x0063 C-string:'WF192'
//           WF1F7  codep:0x224c wordp:0xf1f7 size:0x0039 C-string:'WF1F7'
//           WF232  codep:0x224c wordp:0xf232 size:0x0082 C-string:'WF232'
//           WF2B6  codep:0x1d29 wordp:0xf2b6 size:0x0015 C-string:'WF2B6'
//           WF2CD  codep:0x224c wordp:0xf2cd size:0x009c C-string:'WF2CD'
//           WF36B  codep:0x224c wordp:0xf36b size:0x0036 C-string:'WF36B'
//           WF3A3  codep:0x224c wordp:0xf3a3 size:0x0042 C-string:'WF3A3'
//           WF3E7  codep:0x224c wordp:0xf3e7 size:0x0010 C-string:'WF3E7'
//           WF3F9  codep:0x224c wordp:0xf3f9 size:0x009c C-string:'WF3F9'
//           WF497  codep:0x224c wordp:0xf497 size:0x003e C-string:'WF497'
//  PFILE-FUNCTION  codep:0x4a4f wordp:0xf4e8 size:0x0014 C-string:'PFILE_dash_FUNCTION'
//       (U-PFILE)  codep:0x224c wordp:0xf50a size:0x0000 C-string:'_ro_U_dash_PFILE_rc_'

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
void _plus__ex__2(); // +!_2
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
const unsigned short int pp_WE5B0 = 0xe5b0; // WE5B0 size: 4
// {0xd5, 0x57, 0x00, 0xf5}

const unsigned short int pp_WE864 = 0xe864; // WE864 size: 17
// {0x03, 0x0a, 0x02, 0x09, 0x29, 0x0a, 0x2c, 0x09, 0x25, 0x0a, 0x52, 0x09, 0x29, 0x0a, 0x7c, 0x09, 0x23}

const unsigned short int pp_WE91E = 0xe91e; // WE91E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEE61 = 0xee61; // WEE61 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF2B6 = 0xf2b6; // WF2B6 size: 21
// {0x04, 0xa5, 0x0d, 0x09, 0x1f, 0x9e, 0x0d, 0x09, 0x2b, 0x97, 0x0d, 0x09, 0x2f, 0x90, 0x0d, 0x09, 0x3b, 0x89, 0x0d, 0x09, 0x23}


const unsigned short int cc_WE548 = 0xe548; // WE548
const unsigned short int cc_WE54C = 0xe54c; // WE54C


// 0xe512: db 0x05 0x01 '  '

// ================================================
// 0xe514: WORD 'WE516' codep=0x224c wordp=0xe516 params=0 returns=0
// ================================================

void WE516() // WE516
{
  Push(0xbd5b); // 'OV#IN$'
  MODULE(); // MODULE
}


// ================================================
// 0xe51e: WORD 'WE520' codep=0x224c wordp=0xe520 params=0 returns=0
// ================================================
// orphan

void WE520() // WE520
{
  Push(0xbd70); // 'OVQUITMESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe528: WORD 'WE52A' codep=0x224c wordp=0xe52a params=0 returns=0
// ================================================
// orphan

void WE52A() // WE52A
{
  Push(0xbd82); // 'OV.0$$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe532: WORD 'WE534' codep=0x224c wordp=0xe534 params=0 returns=0
// ================================================
// orphan

void WE534() // WE534
{
  Push(0xbd97); // 'OV0$$$MESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe53c: WORD 'WE53E' codep=0x224c wordp=0xe53e params=0 returns=0
// ================================================

void WE53E() // WE53E
{
  Push(0xbdba); // 'OVTRIMS'
  MODULE(); // MODULE
}


// ================================================
// 0xe546: WORD 'WE548' codep=0x2214 wordp=0xe548
// ================================================
// 0xe548: dw 0x0003

// ================================================
// 0xe54a: WORD 'WE54C' codep=0x2214 wordp=0xe54c
// ================================================
// 0xe54c: dw 0x0004

// ================================================
// 0xe54e: WORD 'WE550' codep=0x224c wordp=0xe550 params=0 returns=0
// ================================================

void WE550() // WE550
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
}


// ================================================
// 0xe55a: WORD 'WE55C' codep=0x224c wordp=0xe55c params=0 returns=0
// ================================================

void WE55C() // WE55C
{
  Push(0xc52d); // 'OVINIT-BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe564: WORD 'WE566' codep=0x224c wordp=0xe566 params=0 returns=0
// ================================================

void WE566() // WE566
{
  Push(0xc542); // 'OVTRANSACT'
  MODULE(); // MODULE
}


// ================================================
// 0xe56e: WORD 'WE570' codep=0x224c wordp=0xe570 params=0 returns=0
// ================================================

void WE570() // WE570
{
  Push(0xc558); // 'OVD@BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe578: WORD 'WE57A' codep=0x224c wordp=0xe57a params=0 returns=0
// ================================================

void WE57A() // WE57A
{
  Push(0xc583); // 'OV?BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe582: WORD 'WE584' codep=0x224c wordp=0xe584 params=0 returns=1
// ================================================
// orphan

void WE584() // WE584
{
  PAD(); // PAD
  Push(Pop() + 0x0080); //  0x0080 +
}


// ================================================
// 0xe58e: WORD 'WE590' codep=0x224c wordp=0xe590 params=1 returns=1
// ================================================

void WE590() // WE590
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
// 0xe5a4: WORD 'WE5A6' codep=0x224c wordp=0xe5a6 params=0 returns=0
// ================================================
// orphan

void WE5A6() // WE5A6
{
  Push(4);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe5ae: WORD 'WE5B0' codep=0x1d29 wordp=0xe5b0
// ================================================
// 0xe5b0: db 0xd5 0x57 0x00 0xf5 ' W  '

// ================================================
// 0xe5b4: WORD 'WE5B6' codep=0x224c wordp=0xe5b6 params=0 returns=0
// ================================================
// orphan

void WE5B6() // WE5B6
{
  GetCRS(); // @CRS
  Push(5);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_WE5B0); // WE5B0
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(6);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  StoreCRS(); // !CRS
}


// ================================================
// 0xe5d0: WORD 'WE5D2' codep=0x224c wordp=0xe5d2 params=0 returns=0
// ================================================
// orphan

void WE5D2() // WE5D2
{
  do
  {
    KEY_2(); // KEY_2
    Push(Pop()==0x000d?1:0); //  0x000d =
  } while(Pop() == 0);
}


// ================================================
// 0xe5e0: WORD 'WE5E2' codep=0x224c wordp=0xe5e2 params=0 returns=0
// ================================================

void WE5E2() // WE5E2
{
  PRINT("AND PRESS SPACEBAR", 18); // (.")
}


// ================================================
// 0xe5f9: WORD 'WE5FB' codep=0x224c wordp=0xe5fb params=0 returns=0
// ================================================

void WE5FB() // WE5FB
{
  PRINT("PAGE THROUGH FILES ^\\", 21); // (.")
}


// ================================================
// 0xe615: WORD 'WE617' codep=0x224c wordp=0xe617 params=1 returns=0
// ================================================

void WE617() // WE617
{
  Push(Read16(regsp)); // DUP
  _0MESS(); // 0MESS
  Push(0x0025);
  CMESS(); // CMESS
  PRINT("SELECT OPTIONS [] ", 18); // (.")
  WE5E2(); // WE5E2
  StoreCRS(); // !CRS
}


// ================================================
// 0xe63c: WORD 'WE63E' codep=0x224c wordp=0xe63e params=11 returns=0
// ================================================

void WE63E() // WE63E
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe656: WORD 'WE658' codep=0x73ea wordp=0xe658
// ================================================
LoadDataType WE658 = {CREWMEMBERIDX, 0x00, 0x08, 0x14, 0x6489};

// ================================================
// 0xe65e: WORD 'WE660' codep=0x73ea wordp=0xe660
// ================================================
LoadDataType WE660 = {CREWMEMBERIDX, 0x08, 0x01, 0x14, 0x6489};

// ================================================
// 0xe666: WORD 'WE668' codep=0x73ea wordp=0xe668
// ================================================
LoadDataType WE668 = {CREWMEMBERIDX, 0x0d, 0x01, 0x14, 0x6489};

// ================================================
// 0xe66e: WORD 'WE670' codep=0x73ea wordp=0xe670
// ================================================
LoadDataType WE670 = {CREWMEMBERIDX, 0x12, 0x01, 0x14, 0x6489};

// ================================================
// 0xe676: WORD 'WE678' codep=0x73ea wordp=0xe678
// ================================================
LoadDataType WE678 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xe67e: WORD 'WE680' codep=0x744d wordp=0xe680
// ================================================
IFieldType WE680 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe683: WORD 'WE685' codep=0x744d wordp=0xe685
// ================================================
IFieldType WE685 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xe688: WORD 'WE68A' codep=0x744d wordp=0xe68a
// ================================================
IFieldType WE68A = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xe68d: WORD 'WE68F' codep=0x744d wordp=0xe68f
// ================================================
IFieldType WE68F = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xe692: WORD 'WE694' codep=0x744d wordp=0xe694
// ================================================
IFieldType WE694 = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xe697: WORD 'WE699' codep=0x744d wordp=0xe699
// ================================================
IFieldType WE699 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xe69c: WORD 'WE69E' codep=0x744d wordp=0xe69e
// ================================================
IFieldType WE69E = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe6a1: WORD 'WE6A3' codep=0x744d wordp=0xe6a3
// ================================================
IFieldType WE6A3 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xe6a6: WORD 'WE6A8' codep=0x744d wordp=0xe6a8
// ================================================
IFieldType WE6A8 = {CREWMEMBERIDX, 0x22, 0x01};

// ================================================
// 0xe6ab: WORD 'WE6AD' codep=0x73ea wordp=0xe6ad
// ================================================
LoadDataType WE6AD = {PSTATSIDX, 0x00, 0x09, 0x0b, 0x969f};

// ================================================
// 0xe6b3: WORD 'WE6B5' codep=0x73ea wordp=0xe6b5
// ================================================
LoadDataType WE6B5 = {PSTATSIDX, 0x09, 0x01, 0x0b, 0x969f};

// ================================================
// 0xe6bb: WORD 'WE6BD' codep=0x73ea wordp=0xe6bd
// ================================================
LoadDataType WE6BD = {PSTATSIDX, 0x0a, 0x01, 0x0b, 0x969f};

// ================================================
// 0xe6c3: WORD 'WE6C5' codep=0x224c wordp=0xe6c5 params=0 returns=19
// ================================================

void WE6C5() // WE6C5
{
  unsigned short int i, imax;
  Push(0x00c3);
  Push(1);
  Push(0x001c);
  Push(0x0043);
  GetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0x00b6);
  Push(0x0044);
  Push(0x001c);
  Push(0x009d);
  GetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  GetColor(WHITE);
  GetColor(WHITE);
  GetColor(DK_dash_BLUE);
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
  GetColor(DK_dash_BLUE);
  Draw1LOGO(); // .1LOGO
  _gt_3FONT(); // >3FONT
  Push(0x005f);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("PERSONNEL", 9); // (.")
  GetColor(BLACK);
  GetColor(BLACK);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x000a);
  Push(0x00bd);
  POS_dot_(); // POS.
  PRINT("FILE", 4); // (.")
  Push(2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  WE5B6(); // WE5B6
  GetColor(WHITE);
  GetColor(WHITE);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(2);
  Push(0x001c);
  Push(Read16(cc_WE548)); // WE548
  Push(2);
  Push(0x00c4);
  Push(Read16(cc_WE54C)); // WE54C
  Push(0x0041);
  Push(0x00c4);
  Push(Read16(cc_WE548)); // WE548
  Push(0x009c);
  Push(0x001c);
  Push(Read16(cc_WE54C)); // WE54C
  Push(0x009c);
  Push(0x00b7);
  Push(Read16(cc_WE548)); // WE548
  Push(0x0043);
  Push(0x00b9);
  Push(Read16(cc_WE548)); // WE548
  Push(6);
  WE53E(); // WE53E
}


// ================================================
// 0xe804: WORD 'WE806' codep=0x224c wordp=0xe806 params=0 returns=1
// ================================================

void WE806() // WE806
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0);
  while(1)
  {
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    INEXT(); // INEXT
    Push(Read16(0x63ef+WE6A3.offset)&0xFF); // WE6A3<IFIELD> C@
    _0_gt_(); // 0>
    Push(Pop() + Pop()); // +
  }
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xe828: WORD 'WE82A' codep=0x224c wordp=0xe82a params=1 returns=0
// ================================================

void WE82A() // WE82A
{
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(Read16(0x63ef+WE6A8.offset)&0xFF); // WE6A8<IFIELD> C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    IPREV(); // IPREV
    return;
  }
  _0_gt_(); // 0>
  Push(Read16(0x63ef+WE6A3.offset)&0xFF); // WE6A3<IFIELD> C@
  WE806(); // WE806
  Push(Pop() | Pop()); // OR
  Push(Read16(0x63ef+WE6A8.offset)&0xFF); // WE6A8<IFIELD> C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xe862: WORD 'WE864' codep=0x1d29 wordp=0xe864
// ================================================
// 0xe864: db 0x03 0x0a 0x02 0x09 0x29 0x0a 0x2c 0x09 0x25 0x0a 0x52 0x09 0x29 0x0a 0x7c 0x09 0x23 '    ) , % R ) | #'

// ================================================
// 0xe875: WORD 'WE877' codep=0x224c wordp=0xe877 params=0 returns=0
// ================================================

void WE877() // WE877
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
// 0xe91c: WORD 'WE91E' codep=0x1d29 wordp=0xe91e
// ================================================
// 0xe91e: db 0x3a 0x20 ': '

// ================================================
// 0xe920: WORD 'WE922' codep=0x224c wordp=0xe922 params=3 returns=0
// ================================================

void WE922() // WE922
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xe928: WORD 'WE92A' codep=0x224c wordp=0xe92a params=1 returns=0
// ================================================

void WE92A() // WE92A
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(pp_WE91E); // WE91E
  Store_3(); // !_3
  CTINIT(); // CTINIT
  GetColor(BLACK);
  GetColor(BLACK);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x000a);
  Push(0x0029);
  Push(a); // I
  WE922(); // WE922
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(a); // I
  WE922(); // WE922
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(a); // I
  WE922(); // WE922
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(a); // I
  WE922(); // WE922
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(a); // I
  WE922(); // WE922
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(6);
  Push(a); // I
  WE922(); // WE922
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  Push(a); // R>
  WE922(); // WE922
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xea42: WORD 'WEA44' codep=0x224c wordp=0xea44 params=0 returns=0
// ================================================

void WEA44() // WEA44
{
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push((Read16(0x63ef+WE6A3.offset)&0xFF) & 2); // WE6A3<IFIELD> C@ 2 AND
  if (Pop() != 0)
  {
    GetColor(RED);
  } else
  {
    GetColor(GREY2);
  }
  StoreCOLOR(); // !COLOR
  Push(0x0041);
  Push(Read16(pp_WE91E)); // WE91E @
  Push(0x0033);
  WE922(); // WE922
  _gt_3FONT(); // >3FONT
  PRINT("DEAD", 4); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xea7b: WORD 'WEA7D' codep=0x224c wordp=0xea7d
// ================================================

void WEA7D() // WEA7D
{
  unsigned short int a;
  Push(Read16(pp_WE91E)); // WE91E @
  a = Pop(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(a); // I
  WE922(); // WE922
  CTINIT(); // CTINIT
  Push(0x63ef+WE680.offset); // WE680<IFIELD>
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
  Push(Read16(0x63ef+WE69E.offset)&0xFF); // WE69E<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(a); // I
  WE922(); // WE922
  Push(Read16(0x63ef+WE685.offset)&0xFF); // WE685<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(WE658); // from 'CREWMEMBER'
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(a); // I
  WE922(); // WE922
  Push(Read16(0x63ef+WE68A.offset)&0xFF); // WE68A<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(a); // I
  WE922(); // WE922
  Push(Read16(0x63ef+WE68F.offset)&0xFF); // WE68F<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(WE678); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(a); // I
  WE922(); // WE922
  Push(Read16(0x63ef+WE694.offset)&0xFF); // WE694<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(6);
  Push(a); // R>
  WE922(); // WE922
  Push(Read16(0x63ef+WE699.offset)&0xFF); // WE699<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  LoadData(WE670); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
}


// ================================================
// 0xeb43: WORD 'WEB45' codep=0x224c wordp=0xeb45
// ================================================

void WEB45() // WEB45
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
  GetColor(GREY2);
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
    Push(0xbeb2); // '.EGARUNBIT'
  } else
  {
    Push(0xbe8a); // '.RUNBIT'
  }
  MODULE(); // MODULE
  Push((Read16(0x63ef+WE6A3.offset)&0xFF) & 2); // WE6A3<IFIELD> C@ 2 AND
  if (Pop() == 0) return;
  GetCRS(); // @CRS
  GetColor(RED);
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
// 0xebcb: WORD 'WEBCD' codep=0x224c wordp=0xebcd
// ================================================

void WEBCD() // WEBCD
{
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x0087);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  GetColor(WHITE);
  GetColor(WHITE);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x000a);
  Push(0x005c);
  POS_dot_(); // POS.
  PRINT("TYPE    : ", 10); // (.")
  LoadData(WE6AD); // from 'PSTATS'
  Push(9);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x000a);
  Push(0x0050);
  POS_dot_(); // POS.
  PRINT("AVG. HT.: ", 10); // (.")
  LoadData(WE6B5); // from 'PSTATS'
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
  LoadData(WE6BD); // from 'PSTATS'
  Push(Read16(Pop())&0xFF); //  C@
  Draw(); // .
  PRINT("KG", 2); // (.")
  StoreCRS(); // !CRS
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xec5b: WORD 'WEC5D' codep=0x224c wordp=0xec5d params=0 returns=0
// ================================================

void WEC5D() // WEC5D
{
  unsigned short int a, i, imax;
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  GetCRS(); // @CRS
  Push(0x0080);
  Push(5);
  Push(0x001e);
  Push(0x0099);
  GetColor(GREY2);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(Read16(pp_WE91E)); // WE91E @
  a = Pop(); // >R
  Push(0x000e);
  GetColor(GREY2);
  Push(0x0030 + a); // 0x0030 I +
  Push(0x000a);
  POS_dot_PXT(); // POS.PXT
  Push(3);
  GetColor(GREY2);
  Push(0x0030 + a); // 0x0030 I +
  Push(0x007a);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(3);
    GetColor(GREY2);
    Push((i * 7 + 6) + a); // I 7 * 6 + J +
    Push(0x004a);
    POS_dot_PXT(); // POS.PXT
    Push(2 + (i==4?1:0) * 5); // 2 I 4 = 5 * +
    GetColor(GREY2);
    Push((i * 7 + 6) + a); // I 7 * 6 + J +
    Push(0x008d + (i==4?1:0) * 0xffea); // 0x008d I 4 = 0xffea * +
    POS_dot_PXT(); // POS.PXT
    i++;
  } while(i<imax); // (LOOP)

  Push(2);
  GetColor(GREY2);
  Push(0x003d + a); // 0x003d I +
  Push(0x0028);
  POS_dot_PXT(); // POS.PXT
  Push(0x0028);
  Push(0x003d);
  Push(a); // R>
  WE922(); // WE922
  Push((Read16(0x63ef+WE6A8.offset)&0xFF) + 1); // WE6A8<IFIELD> C@ 1+
  Push(2);
  DrawR(); // .R
  Push(Read16(0x63ef+WE6A3.offset) & 1); // WE6A3<IFIELD> @ 1 AND
  if (Pop() != 0)
  {
    Push(0x0080);
    Push(0x0064);
    Push(0x001e);
    Push(0x0099);
    GetColor(BLACK);
    POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Read16(regsp)); // DUP
    WEB45(); // WEB45
    WEBCD(); // WEBCD
    WEA7D(); // WEA7D
  }
  WEA44(); // WEA44
  StoreCRS(); // !CRS
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xed57: WORD 'WED59' codep=0x224c wordp=0xed59 params=1 returns=0
// ================================================

void WED59() // WED59
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  WE82A(); // WE82A
  WEC5D(); // WEC5D
}


// ================================================
// 0xed65: WORD 'WED67' codep=0x224c wordp=0xed67
// ================================================

void WED67() // WED67
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
  GetColor(GREY1);
  GetColor(GREY1);
  Push(Read16(pp_IsTANDRG)); // ?TANDRG @
  if (Pop() != 0)
  {
    GetColor(GREY1);
  } else
  {
    GetColor(RED);
  }
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(a); // I
  Push(0x63ef+INST_dash_SPECIES.offset); // INST-SPECIES<IFIELD>
  Store_3(); // !_3
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(WE660); // from 'CREWMEMBER'
  Push(0x63ef+WE685.offset); // WE685<IFIELD>
  Push(5);
  CMOVE(); // CMOVE
  Push(1);
  Push(0x63ef+WE6A3.offset); // WE6A3<IFIELD>
  Store_3(); // !_3
  Push(0x0064);
  Push(0x63ef+WE69E.offset); // WE69E<IFIELD>
  C_ex_(); // C!
  Push(Read16(pp_XORMODE)); // XORMODE @
  if (Pop() != 0)
  {
    BLT(); // BLT
  }
  WEC5D(); // WEC5D
  LoadData(WE658); // from 'CREWMEMBER'
  Push((Read16(Pop())&0xFF) * 4 + 4); //  C@ 4 * 4 +
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  BLT(); // BLT
}


// ================================================
// 0xedeb: WORD 'WEDED' codep=0x224c wordp=0xeded
// ================================================

void WEDED() // WEDED
{
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Push(!(Read16(pp_NCRS)==Read16(pp_OCRS)?1:0)); // NCRS @ OCRS @ = NOT
    if (Pop() != 0)
    {
      WED67(); // WED67
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
// 0xee1b: WORD 'WEE1D' codep=0x224c wordp=0xee1d params=0 returns=0
// ================================================

void WEE1D() // WEE1D
{
  PRINT("TYPE THIS CREWMEMBER'S NAME", 27); // (.")
}


// ================================================
// 0xee3d: WORD 'WEE3F' codep=0x224c wordp=0xee3f
// ================================================

void WEE3F() // WEE3F
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
// 0xee5f: WORD 'WEE61' codep=0x1d29 wordp=0xee61
// ================================================
// 0xee61: db 0x3a 0x20 ': '

// ================================================
// 0xee63: WORD 'WEE65' codep=0x224c wordp=0xee65
// ================================================

void WEE65() // WEE65
{
  unsigned short int a, i, imax;
  LoadData(WE668); // from 'CREWMEMBER'
  Push((Read16(Pop() + Read16(pp_OCRS))&0xFF) - (Read16((0x63ef+WE685.offset) + Read16(pp_OCRS))&0xFF)); //  OCRS @ + C@ WE685<IFIELD> OCRS @ + C@ -
  LoadData(WE670); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  WE570(); // WE570
  Push(0x86a0); Push(0x0001);
  DMIN(); // DMIN
  Push(0x012c);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  MIN(); // MIN
  Push(pp_WEE61); // WEE61
  Store_3(); // !_3
  WE550(); // WE550
  Push(0);
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("BALANCE:", 8); // (.")
  WE570(); // WE570
  Push(7);
  D_dot_R(); // D.R
  PRINT(" COST: 300 MU/SESSION", 21); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("HOW MANY TRAINING SESSIONS (0-", 30); // (.")
  Push(Read16(pp_WEE61)); // WEE61 @
  Push(0);
  DrawR(); // .R
  PRINT(")\? ", 3); // (.")
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(-1);
  Push(pp__dash_AIN); // -AIN
  Store_3(); // !_3
  Push(3);
  WE516(); // WE516
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

  Push(Read16(pp_WEE61)); // WEE61 @
  MIN(); // MIN
  Push(pp_WEE61); // WEE61
  Store_3(); // !_3
}


// ================================================
// 0xef51: WORD 'WEF53' codep=0x224c wordp=0xef53
// ================================================

void WEF53() // WEF53
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
    WEE1D(); // WEE1D
    StoreCRS(); // !CRS
    Push(0);
  } else
  {
    Push(0x63ef+WE6A3.offset); // WE6A3<IFIELD>
    OFF(); // OFF
    WEC5D(); // WEC5D
    Push(1);
  }
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  BLT(); // BLT
  StoreCRS(); // !CRS
  BLT(); // BLT
}


// ================================================
// 0xeffd: WORD 'WEFFF' codep=0x224c wordp=0xefff params=0 returns=1
// ================================================

void WEFFF() // WEFFF
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
    Push(0x63ef+WE680.offset); // WE680<IFIELD>
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
// 0xf02b: WORD 'WF02D' codep=0x224c wordp=0xf02d params=0 returns=0
// ================================================

void WF02D() // WF02D
{
  Push(0);
  Push(0x001b);
  CMESS(); // CMESS
  WEE1D(); // WEE1D
  StoreCRS(); // !CRS
  Push(0x003c);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(8);
  Push(0x0032);
  Push(Read16(pp_WE91E)); // WE91E @
  WE922(); // WE922
  BLT(); // BLT
}


// ================================================
// 0xf051: WORD 'WF053' codep=0x224c wordp=0xf053
// ================================================

void WF053() // WF053
{
  WF02D(); // WF02D
  do
  {
    GetCRS(); // @CRS
    CTINIT(); // CTINIT
    GetColor(GREY1);
    StoreCOLOR(); // !COLOR
    Push(0x000a);
    Push(0x0030);
    Push(Read16(pp_WE91E)); // WE91E @
    WE922(); // WE922
    Push(pp__dash_AIN); // -AIN
    OFF(); // OFF
    Push(0x000e);
    WE516(); // WE516
    WE590(); // WE590
    Pop(); // DROP
    StoreCRS(); // !CRS
    WEFFF(); // WEFFF
    if (Pop() != 0)
    {
      PAD(); // PAD
      Push(0x63ef+WE680.offset); // WE680<IFIELD>
      _do__ex_(); // $!
      Push(1);
    } else
    {
      WEF53(); // WEF53
    }
  } while(Pop() == 0);
  BLT(); // BLT
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf09b: WORD 'WF09D' codep=0x224c wordp=0xf09d
// ================================================

void WF09D() // WF09D
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  GetCRS(); // @CRS
  Push((Read16(0x63ef+WE6A3.offset)&0xFF)==0?1:0); // WE6A3<IFIELD> C@ 0=
  if (Pop() != 0)
  {
    Push(0x63ef+WE680.offset); // WE680<IFIELD>
    OFF(); // OFF
    Push(0x63ef+WE685.offset); // WE685<IFIELD>
    Push(5);
    Push(0);
    FILL_1(); // FILL_1
    Push(pp_NCRS); // NCRS
    OFF(); // OFF
    Push(pp_OCRS); // OCRS
    OFF(); // OFF
    Push(0x0075);
    Push(0x0024);
    Push(Read16(pp_WE91E)); // WE91E @
    WE922(); // WE922
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
    WE5E2(); // WE5E2
    StoreCRS(); // !CRS
    Push(pp_XORMODE); // XORMODE
    OFF(); // OFF
    Push(0);
    StoreINST_dash_SPECIES(); // !INST-SPECIES
    Push(pp_RECORD_n_); // RECORD#
    OFF(); // OFF
    GetCRS(); // @CRS
    WED67(); // WED67
    WEDED(); // WEDED
    WF053(); // WF053
    StoreCRS(); // !CRS
  } else
  {
    Push(0);
    Push(0x0016);
    CMESS(); // CMESS
    PRINT("THIS FILE IS NOT EMPTY", 22); // (.")
    StoreCRS(); // !CRS
    WEE3F(); // WEE3F
    Push(0);
    _0MESS(); // 0MESS
  }
  StoreCRS(); // !CRS
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  WE5FB(); // WE5FB
  StoreCRS(); // !CRS
  Push(1);
  WE617(); // WE617
}


// ================================================
// 0xf162: WORD 'WF164' codep=0x224c wordp=0xf164 params=0 returns=0
// ================================================

void WF164() // WF164
{
  WE550(); // WE550
  Push(0);
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("SELECT SKILL ^\\", 15); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0012);
  CMESS(); // CMESS
  WE5E2(); // WE5E2
  StoreCRS(); // !CRS
}


// ================================================
// 0xf190: WORD 'WF192' codep=0x224c wordp=0xf192
// ================================================

void WF192() // WF192
{
  Push(Read16(0x63ef+WE6A3.offset) & 2); // WE6A3<IFIELD> @ 2 AND
  if (Pop() != 0)
  {
    Push(0);
    _0MESS(); // 0MESS
    Push(0);
    Push(0x0021);
    CMESS(); // CMESS
    PRINT("YOU CAN'T TRAIN ", 16); // (.")
    WE63E(); // WE63E
  } else
  {
    Push(0);
    Push(0x001d);
    CMESS(); // CMESS
    PRINT("THERE IS NO ONE HERE TO TRAIN", 29); // (.")
    StoreCRS(); // !CRS
  }
  WEE3F(); // WEE3F
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1f5: WORD 'WF1F7' codep=0x224c wordp=0xf1f7 params=0 returns=2
// ================================================

void WF1F7() // WF1F7
{
  Push(0x012c); Push(0x0000);
  WE57A(); // WE57A
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0);
  Push(0x0012);
  CMESS(); // CMESS
  PRINT("INSUFFICIENT FUNDS", 18); // (.")
  BEEP(); // BEEP
  StoreCRS(); // !CRS
  WEE3F(); // WEE3F
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf230: WORD 'WF232' codep=0x224c wordp=0xf232
// ================================================

void WF232() // WF232
{
  LoadData(WE668); // from 'CREWMEMBER'
  Push((Read16(Pop() + Read16(pp_OCRS))&0xFF)==(Read16((0x63ef+WE685.offset) + Read16(pp_OCRS))&0xFF)?1:0); //  OCRS @ + C@ WE685<IFIELD> OCRS @ + C@ =
  if (Pop() != 0)
  {
    WE550(); // WE550
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
    WEE3F(); // WEE3F
    WE550(); // WE550
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xf2b4: WORD 'WF2B6' codep=0x1d29 wordp=0xf2b6
// ================================================
// 0xf2b6: db 0x04 0xa5 0x0d 0x09 0x1f 0x9e 0x0d 0x09 0x2b 0x97 0x0d 0x09 0x2f 0x90 0x0d 0x09 0x3b 0x89 0x0d 0x09 0x23 '        +   /   ;   #'

// ================================================
// 0xf2cb: WORD 'WF2CD' codep=0x224c wordp=0xf2cd
// ================================================

void WF2CD() // WF2CD
{
  GetColor(GREY1);
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
  WF164(); // WF164
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  Push(pp_WF2B6); // WF2B6
  BLD_dash_CRS(); // BLD-CRS
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    Push(Pop() * -1); //  -1 *
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Push(pp_WF2B6); // WF2B6
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  WF232(); // WF232
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WEE65(); // WEE65
    Push(0x012c);
    Push(Read16(pp_WEE61)); // WEE61 @
    U_star_(); // U*
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      DNEGATE(); // DNEGATE
      Push(0xc5ca); // 'T+BALANCE'
      MODULE(); // MODULE
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    Push(Read16((0x63ef+WE685.offset) + Read16(pp_OCRS))&0xFF); // WE685<IFIELD> OCRS @ + C@
    LoadData(WE670); // from 'CREWMEMBER'
    Push((Read16(Pop())&0xFF) * Read16(pp_WEE61)); //  C@ WEE61 @ *
    Push(Pop() + Pop()); // +
    LoadData(WE668); // from 'CREWMEMBER'
    Push(Read16(Pop() + Read16(pp_OCRS))&0xFF); //  OCRS @ + C@
    MIN(); // MIN
    Push((0x63ef+WE685.offset) + Read16(pp_OCRS)); // WE685<IFIELD> OCRS @ +
    C_ex_(); // C!
    WEC5D(); // WEC5D
  }
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  BLT(); // BLT
  Push(0);
  _0MESS(); // 0MESS
  GetColor(WHITE);
  GetColor(GREY1);
  GetColor(RED);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
}


// ================================================
// 0xf369: WORD 'WF36B' codep=0x224c wordp=0xf36b params=0 returns=1
// ================================================

void WF36B() // WF36B
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
  WEE3F(); // WEE3F
}


// ================================================
// 0xf3a1: WORD 'WF3A3' codep=0x224c wordp=0xf3a3 params=0 returns=0
// ================================================

void WF3A3() // WF3A3
{
  WE550(); // WE550
  Push(Read16(0x63ef+WE6A3.offset) + 1 & 3); // WE6A3<IFIELD> @ 1 XOR 3 AND
  if (Pop() != 0)
  {
    WF192(); // WF192
  } else
  {
    WF36B(); // WF36B
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WF1F7(); // WF1F7
      if (Pop() != 0)
      {
        GetCRS(); // @CRS
        WF2CD(); // WF2CD
        StoreCRS(); // !CRS
      }
    }
  }
  Push(0);
  _0MESS(); // 0MESS
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  WE5FB(); // WE5FB
  StoreCRS(); // !CRS
  Push(1);
  WE617(); // WE617
}


// ================================================
// 0xf3e5: WORD 'WF3E7' codep=0x224c wordp=0xf3e7 params=0 returns=0
// ================================================

void WF3E7() // WF3E7
{
  Push(0x63ef+WE6A3.offset); // WE6A3<IFIELD>
  OFF(); // OFF
  Push(0x63ef+WE680.offset); // WE680<IFIELD>
  Push(0x000f);
  Push(0);
  FILL_1(); // FILL_1
}


// ================================================
// 0xf3f7: WORD 'WF3F9' codep=0x224c wordp=0xf3f9
// ================================================

void WF3F9() // WF3F9
{
  WE550(); // WE550
  Push((Read16(0x63ef+WE6A3.offset)&0xFF)==0?1:0); // WE6A3<IFIELD> C@ 0=
  if (Pop() != 0)
  {
    Push(0);
    Push(0x001a);
    CMESS(); // CMESS
    PRINT("THIS FILE IS ALREADY EMPTY", 26); // (.")
    StoreCRS(); // !CRS
    WEE3F(); // WEE3F
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
      WF3E7(); // WF3E7
      WEC5D(); // WEC5D
    }
    WE550(); // WE550
  }
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  WE5FB(); // WE5FB
  StoreCRS(); // !CRS
  Push(1);
  WE617(); // WE617
}


// ================================================
// 0xf495: WORD 'WF497' codep=0x224c wordp=0xf497 params=0 returns=19
// ================================================

void WF497() // WF497
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  GetColor(WHITE);
  GetColor(GREY1);
  GetColor(RED);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  WE6C5(); // WE6C5
  WE877(); // WE877
  Push(pp_WE864); // WE864
  BLD_dash_CRS(); // BLD-CRS
  Push(0x0081);
  WE92A(); // WE92A
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  WEC5D(); // WEC5D
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  WE5FB(); // WE5FB
  StoreCRS(); // !CRS
  Push(1);
  WE617(); // WE617
}


// ================================================
// 0xf4d5: WORD 'PFILE-FUNCTION' codep=0x4a4f wordp=0xf4e8
// ================================================

void PFILE_dash_FUNCTION() // PFILE-FUNCTION
{
  switch(Pop()) // PFILE-FUNCTION
  {
  case 0:
    WF09D(); // WF09D
    break;
  case 1:
    WF3A3(); // WF3A3
    break;
  case 2:
    WF3F9(); // WF3F9
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
// 0xf4fc: WORD '(U-PFILE)' codep=0x224c wordp=0xf50a
// ================================================
// entry

void _ro_U_dash_PFILE_rc_() // (U-PFILE)
{
  WE55C(); // WE55C
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WF497(); // WF497
  do
  {
    XYSCAN(); // XYSCAN
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    WED59(); // WED59
    Push(pp_WE864); // WE864
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
  WE566(); // WE566
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}

// 0xf542: db 0x50 0x46 0x49 0x4c 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'PFILE-VOC_____________________ '

