// ====== OVERLAY 'CONFIG-OV' ======
// store offset = 0xe960
// overlay size   = 0x0c00

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE976  codep:0x224c wordp:0xe976 size:0x0008 C-string:'WE976'
//           WE980  codep:0x224c wordp:0xe980 size:0x0008 C-string:'WE980'
//           WE98A  codep:0x224c wordp:0xe98a size:0x0008 C-string:'WE98A'
//           WE994  codep:0x224c wordp:0xe994 size:0x0008 C-string:'WE994'
//           WE99E  codep:0x224c wordp:0xe99e size:0x0008 C-string:'WE99E'
//           WE9A8  codep:0x224c wordp:0xe9a8 size:0x0008 C-string:'WE9A8'
//           WE9B2  codep:0x224c wordp:0xe9b2 size:0x0008 C-string:'WE9B2'
//           WE9BC  codep:0x224c wordp:0xe9bc size:0x0008 C-string:'WE9BC'
//           WE9C6  codep:0x224c wordp:0xe9c6 size:0x0008 C-string:'WE9C6'
//           WE9D0  codep:0x224c wordp:0xe9d0 size:0x0008 C-string:'WE9D0'
//           WE9DA  codep:0x744d wordp:0xe9da size:0x0003 C-string:'WE9DA'
//           WE9DF  codep:0x744d wordp:0xe9df size:0x0003 C-string:'WE9DF'
//           WE9E4  codep:0x744d wordp:0xe9e4 size:0x0003 C-string:'WE9E4'
//           WE9E9  codep:0x744d wordp:0xe9e9 size:0x0003 C-string:'WE9E9'
//           WE9EE  codep:0x744d wordp:0xe9ee size:0x0003 C-string:'WE9EE'
//           WE9F3  codep:0x744d wordp:0xe9f3 size:0x0003 C-string:'WE9F3'
//           WE9F8  codep:0x744d wordp:0xe9f8 size:0x0003 C-string:'WE9F8'
//           WE9FD  codep:0x744d wordp:0xe9fd size:0x0003 C-string:'WE9FD'
//           WEA02  codep:0x744d wordp:0xea02 size:0x0003 C-string:'WEA02'
//           WEA07  codep:0x744d wordp:0xea07 size:0x0003 C-string:'WEA07'
//           WEA0C  codep:0x744d wordp:0xea0c size:0x0003 C-string:'WEA0C'
//           WEA11  codep:0x744d wordp:0xea11 size:0x0003 C-string:'WEA11'
//           WEA16  codep:0x744d wordp:0xea16 size:0x0003 C-string:'WEA16'
//           WEA1B  codep:0x224c wordp:0xea1b size:0x000a C-string:'WEA1B'
//           WEA27  codep:0x224c wordp:0xea27 size:0x000a C-string:'WEA27'
//           WEA33  codep:0x1d29 wordp:0xea33 size:0x0015 C-string:'WEA33'
//           WEA4A  codep:0x1d29 wordp:0xea4a size:0x0019 C-string:'WEA4A'
//           WEA65  codep:0x224c wordp:0xea65 size:0x0042 C-string:'WEA65'
//           WEAA9  codep:0x224c wordp:0xeaa9 size:0x0032 C-string:'WEAA9'
//           WEADD  codep:0x224c wordp:0xeadd size:0x003c C-string:'WEADD'
//           WEB1B  codep:0x224c wordp:0xeb1b size:0x003e C-string:'WEB1B'
//           WEB5B  codep:0x224c wordp:0xeb5b size:0x0020 C-string:'WEB5B'
//           WEB7D  codep:0x1d29 wordp:0xeb7d size:0x0002 C-string:'WEB7D'
//           WEB81  codep:0x1d29 wordp:0xeb81 size:0x0032 C-string:'WEB81'
//           WEBB5  codep:0x224c wordp:0xebb5 size:0x0032 C-string:'WEBB5'
//           WEBE9  codep:0x224c wordp:0xebe9 size:0x006a C-string:'WEBE9'
//      (PARTADDR)  codep:0x4a4f wordp:0xec62 size:0x0014 C-string:'_ro_PARTADDR_rc_'
//           WEC78  codep:0x224c wordp:0xec78 size:0x0006 C-string:'WEC78'
//           (PTS)  codep:0x4a4f wordp:0xec88 size:0x000c C-string:'_ro_PTS_rc_'
//           WEC96  codep:0x224c wordp:0xec96 size:0x0012 C-string:'WEC96'
//           WECAA  codep:0x1d29 wordp:0xecaa size:0x0004 C-string:'WECAA'
//           WECB0  codep:0x224c wordp:0xecb0 size:0x006e C-string:'WECB0'
//           WED20  codep:0x224c wordp:0xed20 size:0x0048 C-string:'WED20'
//           WED6A  codep:0x224c wordp:0xed6a size:0x00a8 C-string:'WED6A'
//           WEE14  codep:0x224c wordp:0xee14 size:0x000a C-string:'WEE14'
//           WEE20  codep:0x224c wordp:0xee20 size:0x0130 C-string:'WEE20'
//           WEF52  codep:0x224c wordp:0xef52 size:0x0078 C-string:'WEF52'
//           WEFCC  codep:0x224c wordp:0xefcc size:0x0073 C-string:'WEFCC'
//           WF041  codep:0x224c wordp:0xf041 size:0x0097 C-string:'WF041'
//           WF0DA  codep:0x224c wordp:0xf0da size:0x006c C-string:'WF0DA'
//           WF148  codep:0x1d29 wordp:0xf148 size:0x0002 C-string:'WF148'
//           WF14C  codep:0x224c wordp:0xf14c size:0x0088 C-string:'WF14C'
//           WF1D6  codep:0x224c wordp:0xf1d6 size:0x004e C-string:'WF1D6'
//           WF226  codep:0x224c wordp:0xf226 size:0x0060 C-string:'WF226'
//           WF288  codep:0x224c wordp:0xf288 size:0x003b C-string:'WF288'
//           WF2C5  codep:0x224c wordp:0xf2c5 size:0x0033 C-string:'WF2C5'
//           WF2FA  codep:0x224c wordp:0xf2fa size:0x004a C-string:'WF2FA'
//           WF346  codep:0x224c wordp:0xf346 size:0x0070 C-string:'WF346'
//           WF3B8  codep:0x224c wordp:0xf3b8 size:0x001d C-string:'WF3B8'
//           WF3D7  codep:0x224c wordp:0xf3d7 size:0x0024 C-string:'WF3D7'
//           WF3FD  codep:0x224c wordp:0xf3fd size:0x006e C-string:'WF3FD'
//           WF46D  codep:0x224c wordp:0xf46d size:0x0008 C-string:'WF46D'
//           WF477  codep:0x224c wordp:0xf477 size:0x0008 C-string:'WF477'
// CONFIG-FUNCTION  codep:0x4a4f wordp:0xf493 size:0x0018 C-string:'CONFIG_dash_FUNCTION'
//      (U-CONFIG)  codep:0x224c wordp:0xf4ba size:0x0000 C-string:'_ro_U_dash_CONFIG_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_IsREPAIR; // ?REPAIR
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern Color BLACK; // BLACK
extern Color DK_dash_GREEN; // DK-GREEN
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
extern IFieldType _pe_NAME; // %NAME
void _star__slash_(); // */
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void Draw(); // .
void DrawR(); // .R
void D_dot_(); // D.
void D_dot_R(); // D.R
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMAX(); // DMAX
void BIT(); // BIT
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void FILL_1(); // FILL_1
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void StoreCOLOR(); // !COLOR
void _gt_DISPLAY(); // >DISPLAY
void _gt_HIDDEN(); // >HIDDEN
void SCR_dash_RES(); // SCR-RES
void DARK(); // DARK
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void POS_dot_(); // POS.
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsQUIT(); // ?QUIT
void Y_slash_N(); // Y/N
void BLD_dash_CRS(); // BLD-CRS
void SET_dash_CRS(); // SET-CRS
void _do__ex_(); // $!
void CMESS(); // CMESS
void _0MESS(); // 0MESS
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void DNEGATE(); // DNEGATE
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void TIME(); // TIME
void _plus_BIT(); // +BIT
void LLINE(); // LLINE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEA33 = 0xea33; // WEA33 size: 21
// {0x04, 0x0a, 0x02, 0x09, 0x13, 0x0a, 0x16, 0x09, 0x25, 0x0a, 0x3c, 0x09, 0x27, 0x0a, 0x64, 0x09, 0x1b, 0x0a, 0x80, 0x09, 0x1e}

const unsigned short int pp_WEA4A = 0xea4a; // WEA4A size: 25
// {0x05, 0xb0, 0x06, 0x09, 0x29, 0xa1, 0x06, 0x09, 0x1d, 0x97, 0x06, 0x09, 0x25, 0x8d, 0x06, 0x09, 0x15, 0x83, 0x06, 0x09, 0x41, 0x79, 0x06, 0x09, 0x31}

const unsigned short int pp_WEB7D = 0xeb7d; // WEB7D size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEB81 = 0xeb81; // WEB81 size: 50
// {0xe8, 0x03, 0x90, 0x01, 0xc8, 0x00, 0x50, 0x00, 0x0a, 0x00, 0xe2, 0x04, 0xbc, 0x02, 0x40, 0x01, 0x78, 0x00, 0x28, 0x00, 0xfa, 0x00, 0x7d, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x0f, 0x00, 0xd0, 0x07, 0xb0, 0x04, 0x58, 0x02, 0x18, 0x01, 0x78, 0x00, 0xdc, 0x05, 0x84, 0x03, 0x1c, 0x02, 0xc8, 0x00, 0x50, 0x00}

const unsigned short int pp_WECAA = 0xecaa; // WECAA size: 4
// {0x56, 0x3a, 0x20, 0x70}

const unsigned short int pp_WF148 = 0xf148; // WF148 size: 2
// {0x3a, 0x20}




// 0xe972: db 0xbc 0x00 '  '

// ================================================
// 0xe974: WORD 'WE976' codep=0x224c wordp=0xe976 params=0 returns=0
// ================================================

void WE976() // WE976
{
  Push(0xc52d); // 'OVINIT-BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe97e: WORD 'WE980' codep=0x224c wordp=0xe980 params=0 returns=0
// ================================================

void WE980() // WE980
{
  Push(0xc542); // 'OVTRANSACT'
  MODULE(); // MODULE
}


// ================================================
// 0xe988: WORD 'WE98A' codep=0x224c wordp=0xe98a params=0 returns=0
// ================================================
// orphan

void WE98A() // WE98A
{
  Push(0xc558); // 'OVD@BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe992: WORD 'WE994' codep=0x224c wordp=0xe994 params=0 returns=0
// ================================================

void WE994() // WE994
{
  Push(0xc583); // 'OV?BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe99c: WORD 'WE99E' codep=0x224c wordp=0xe99e params=0 returns=0
// ================================================

void WE99E() // WE99E
{
  Push(0xc5ca); // 'T+BALANCE'
  MODULE(); // MODULE
}


// ================================================
// 0xe9a6: WORD 'WE9A8' codep=0x224c wordp=0xe9a8 params=0 returns=0
// ================================================

void WE9A8() // WE9A8
{
  Push(0xbd5b); // 'OV#IN$'
  MODULE(); // MODULE
}


// ================================================
// 0xe9b0: WORD 'WE9B2' codep=0x224c wordp=0xe9b2 params=0 returns=0
// ================================================

void WE9B2() // WE9B2
{
  Push(0xbd70); // 'OVQUITMESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe9ba: WORD 'WE9BC' codep=0x224c wordp=0xe9bc params=0 returns=0
// ================================================

void WE9BC() // WE9BC
{
  Push(0xbd82); // 'OV.0$$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe9c4: WORD 'WE9C6' codep=0x224c wordp=0xe9c6 params=0 returns=0
// ================================================

void WE9C6() // WE9C6
{
  Push(0xbd97); // 'OV0$$$MESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe9ce: WORD 'WE9D0' codep=0x224c wordp=0xe9d0 params=0 returns=0
// ================================================

void WE9D0() // WE9D0
{
  Push(0xc6e4); // 'OVBALANCEMESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe9d8: WORD 'WE9DA' codep=0x744d wordp=0xe9da
// ================================================
IFieldType WE9DA = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xe9dd: WORD 'WE9DF' codep=0x744d wordp=0xe9df
// ================================================
IFieldType WE9DF = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xe9e2: WORD 'WE9E4' codep=0x744d wordp=0xe9e4
// ================================================
IFieldType WE9E4 = {SHIPIDX, 0x15, 0x02};

// ================================================
// 0xe9e7: WORD 'WE9E9' codep=0x744d wordp=0xe9e9
// ================================================
IFieldType WE9E9 = {SHIPIDX, 0x17, 0x02};

// ================================================
// 0xe9ec: WORD 'WE9EE' codep=0x744d wordp=0xe9ee
// ================================================
IFieldType WE9EE = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xe9f1: WORD 'WE9F3' codep=0x744d wordp=0xe9f3
// ================================================
IFieldType WE9F3 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xe9f6: WORD 'WE9F8' codep=0x744d wordp=0xe9f8
// ================================================
IFieldType WE9F8 = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xe9fb: WORD 'WE9FD' codep=0x744d wordp=0xe9fd
// ================================================
IFieldType WE9FD = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xea00: WORD 'WEA02' codep=0x744d wordp=0xea02
// ================================================
IFieldType WEA02 = {SHIPIDX, 0x29, 0x07};

// ================================================
// 0xea05: WORD 'WEA07' codep=0x744d wordp=0xea07
// ================================================
IFieldType WEA07 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xea0a: WORD 'WEA0C' codep=0x744d wordp=0xea0c
// ================================================
IFieldType WEA0C = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xea0f: WORD 'WEA11' codep=0x744d wordp=0xea11
// ================================================
IFieldType WEA11 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xea14: WORD 'WEA16' codep=0x744d wordp=0xea16
// ================================================
// orphan
IFieldType WEA16 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xea19: WORD 'WEA1B' codep=0x224c wordp=0xea1b params=1 returns=1
// ================================================

void WEA1B() // WEA1B
{
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
}


// ================================================
// 0xea25: WORD 'WEA27' codep=0x224c wordp=0xea27 params=1 returns=1
// ================================================

void WEA27() // WEA27
{
  Push((Read16(Pop() + 1)&0xFF) & 7); //  1+ C@ 7 AND
}


// ================================================
// 0xea31: WORD 'WEA33' codep=0x1d29 wordp=0xea33
// ================================================
// 0xea33: db 0x04 0x0a 0x02 0x09 0x13 0x0a 0x16 0x09 0x25 0x0a 0x3c 0x09 0x27 0x0a 0x64 0x09 0x1b 0x0a 0x80 0x09 0x1e '        % < ' d      '

// ================================================
// 0xea48: WORD 'WEA4A' codep=0x1d29 wordp=0xea4a
// ================================================
// 0xea4a: db 0x05 0xb0 0x06 0x09 0x29 0xa1 0x06 0x09 0x1d 0x97 0x06 0x09 0x25 0x8d 0x06 0x09 0x15 0x83 0x06 0x09 0x41 0x79 0x06 0x09 0x31 '    )       %       Ay  1'

// ================================================
// 0xea63: WORD 'WEA65' codep=0x224c wordp=0xea65 params=2 returns=0
// ================================================

void WEA65() // WEA65
{
  Push(7);
  GetColor(BLACK);
  ROT(); // ROT
  Push(Pop() * 0x000a + 0x0077); //  0x000a * 0x0077 +
  Push(0x007d);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  Push(Pop() & 7); //  7 AND
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    PRINT("CLASS ", 6); // (.")
    Draw(); // .
    return;
  }
  PRINT("NONE", 4); // (.")
}


// ================================================
// 0xeaa7: WORD 'WEAA9' codep=0x224c wordp=0xeaa9 params=0 returns=0
// ================================================

void WEAA9() // WEAA9
{
  GetCRS(); // @CRS
  Push(2);
  GetColor(BLACK);
  Push(0x00ae);
  Push(0x0085);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  Push(Read16(0x63ef+WE9FD.offset)); // WE9FD<IFIELD> @
  _plus_BIT(); // +BIT
  Push(2);
  DrawR(); // .R
  StoreCRS(); // !CRS
  Push(0xc697); // 'OV.MASS'
  MODULE(); // MODULE
  Push(0xc6a8); // 'OV.ACC'
  MODULE(); // MODULE
}


// ================================================
// 0xeadb: WORD 'WEADD' codep=0x224c wordp=0xeadd params=0 returns=0
// ================================================

void WEADD() // WEADD
{
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(Read16((0x63ef+WE9DF.offset) + 1)&0xFF); // WE9DF<IFIELD> 1+ C@
  Push(4);
  WEA65(); // WEA65
  Push(Read16((0x63ef+WE9EE.offset) + 1)&0xFF); // WE9EE<IFIELD> 1+ C@
  Push(3);
  WEA65(); // WEA65
  Push(Read16((0x63ef+WE9DA.offset) + 1)&0xFF); // WE9DA<IFIELD> 1+ C@
  Push(2);
  WEA65(); // WEA65
  Push(Read16((0x63ef+WE9F3.offset) + 1)&0xFF); // WE9F3<IFIELD> 1+ C@
  Push(1);
  WEA65(); // WEA65
  Push(Read16((0x63ef+WE9F8.offset) + 1)&0xFF); // WE9F8<IFIELD> 1+ C@
  Push(0);
  WEA65(); // WEA65
  WEAA9(); // WEAA9
  StoreCRS(); // !CRS
}


// ================================================
// 0xeb19: WORD 'WEB1B' codep=0x224c wordp=0xeb1b params=1 returns=0
// ================================================

void WEB1B() // WEB1B
{
  StoreCOLOR(); // !COLOR
  Push(2);
  Push(0x00b5);
  Push(0x004f);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2);
  Push(0x001b);
  Push(0x004f);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2);
  Push(0x00b5);
  Push(2);
  Push(0x001b);
  LLINE(); // LLINE
  Push(0x004f);
  Push(0x00b5);
  OVER(); // OVER
  Push(0x001b);
  LLINE(); // LLINE
}


// ================================================
// 0xeb59: WORD 'WEB5B' codep=0x224c wordp=0xeb5b
// ================================================

void WEB5B() // WEB5B
{
  TIME(); // TIME
  _2_at_(); // 2@
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_dash_(); // D-
    Push(0x09c4); Push(0x0000);
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeb7b: WORD 'WEB7D' codep=0x1d29 wordp=0xeb7d
// ================================================
// 0xeb7d: db 0x3a 0x20 ': '

// ================================================
// 0xeb7f: WORD 'WEB81' codep=0x1d29 wordp=0xeb81
// ================================================
// 0xeb81: db 0xe8 0x03 0x90 0x01 0xc8 0x00 0x50 0x00 0x0a 0x00 0xe2 0x04 0xbc 0x02 0x40 0x01 0x78 0x00 0x28 0x00 0xfa 0x00 0x7d 0x00 0x3e 0x00 0x1f 0x00 0x0f 0x00 0xd0 0x07 0xb0 0x04 0x58 0x02 0x18 0x01 0x78 0x00 0xdc 0x05 0x84 0x03 0x1c 0x02 0xc8 0x00 0x50 0x00 '      P       @ x (   } >         X   x         P '

// ================================================
// 0xebb3: WORD 'WEBB5' codep=0x224c wordp=0xebb5 params=0 returns=0
// ================================================

void WEBB5() // WEBB5
{
  unsigned short int i, imax;
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(6);
    Push(0);
    Push(0x0036 + i * 0x000a); // 0x0036 I 0x000a * +
    Push(0x0036);
    POS_dot_PXT(); // POS.PXT
    i++;
  } while(i<imax); // (LOOP)

  Push(4);
  GetColor(BLACK);
  Push(0x00ae);
  Push(0x0037);
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xebe7: WORD 'WEBE9' codep=0x224c wordp=0xebe9 params=2 returns=0
// ================================================

void WEBE9() // WEBE9
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(a); // R>
  CTINIT(); // CTINIT
  WEBB5(); // WEBB5
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0x003b);
    Push(0x00ae);
    POS_dot_(); // POS.
    Push(0x01f4);
    Draw(); // .
  } else
  {
    Push((Pop() - 1) * 5); //  1- 5 *
    Push(5);
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(0x0037);
      Push(i); // I
      Push(5);
      MOD(); // MOD
      Push(Pop() * 0x000a + 0x0036); //  0x000a * 0x0036 +
      POS_dot_(); // POS.
      Push(Read16(pp_WEB81 + i * 2)); // WEB81 I 2* + @
      Push(0x0064);
      M_star_(); // M*
      Push(6);
      D_dot_R(); // D.R
      i++;
    } while(i<imax); // (LOOP)

  }
  StoreCRS(); // !CRS
}


// ================================================
// 0xec53: WORD '(PARTADDR)' codep=0x4a4f wordp=0xec62
// ================================================

void _ro_PARTADDR_rc_() // (PARTADDR)
{
  switch(Pop()) // (PARTADDR)
  {
  case 1:
    Push(0x63ef+WE9DF.offset); // IFIELD
    break;
  case 2:
    Push(0x63ef+WE9EE.offset); // IFIELD
    break;
  case 3:
    Push(0x63ef+WE9DA.offset); // IFIELD
    break;
  case 4:
    Push(0x63ef+WE9F3.offset); // IFIELD
    break;
  default:
    Push(0x63ef+WE9F8.offset); // IFIELD
    break;

  }
}

// ================================================
// 0xec76: WORD 'WEC78' codep=0x224c wordp=0xec78
// ================================================

void WEC78() // WEC78
{
  Push(Read16(regsp)); // DUP
  _ro_PARTADDR_rc_(); // (PARTADDR) case
}


// ================================================
// 0xec7e: WORD '(PTS)' codep=0x4a4f wordp=0xec88
// ================================================

void _ro_PTS_rc_() // (PTS)
{
  switch(Pop()) // (PTS)
  {
  case 2:
    Push(0x63ef+WEA07.offset); // IFIELD
    break;
  case 3:
    Push(0x63ef+WEA0C.offset); // IFIELD
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xec94: WORD 'WEC96' codep=0x224c wordp=0xec96
// ================================================

void WEC96() // WEC96
{
  _ro_PTS_rc_(); // (PTS) case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Store_3(); // !_3
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xeca8: WORD 'WECAA' codep=0x1d29 wordp=0xecaa
// ================================================
// 0xecaa: db 0x56 0x3a 0x20 0x70 'V: p'

// ================================================
// 0xecae: WORD 'WECB0' codep=0x224c wordp=0xecb0 params=2 returns=0
// ================================================
// orphan

void WECB0() // WECB0
{
  Push(Read16(regsp)); // DUP
  WEA27(); // WEA27
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(5);
    SWAP(); // SWAP
    _dash_(); // -
    Push(Pop() * 0x000a + 0x0036); //  0x000a * 0x0036 +
    Push(pp_YBLT); // YBLT
    Store_3(); // !_3
    SWAP(); // SWAP
    Push((Pop() - 1) * 0x000a); //  1- 0x000a *
    OVER(); // OVER
    WEA27(); // WEA27
    Push(5);
    SWAP(); // SWAP
    _dash_(); // -
    Push(Pop() * 2); //  2*
    Push(Pop() + Pop()); // +
    Push(Read16(Pop() + pp_WEB81)); //  WEB81 + @
    SWAP(); // SWAP
    WEA1B(); // WEA1B
    Push(0x0069);
    _star__slash_(); // */
    Push(0x0064);
    U_star_(); // U*
    Push(0x0005); Push(0x0000);
    DMAX(); // DMAX
    _2DUP(); // 2DUP
    Push(pp_WECAA); // WECAA
    StoreD(); // D!
    Push(6);
    D_dot_R(); // D.R
    return;
  }
  Pop(); Pop(); // 2DROP
  Push2Words("NULL");
  Push(pp_WECAA); // WECAA
  StoreD(); // D!
}


// ================================================
// 0xed1e: WORD 'WED20' codep=0x224c wordp=0xed20
// ================================================

void WED20() // WED20
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(a); // R>
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  WEBB5(); // WEBB5
  Push(0x0037);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0x00ae);
    Push(pp_YBLT); // YBLT
    Store_3(); // !_3
    Push(Read16(0x63ef+WE9FD.offset)); // WE9FD<IFIELD> @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      _plus_BIT(); // +BIT
      Push(Pop() * 0x01f4); //  0x01f4 *
      Push(4);
      DrawR(); // .R
    }
  } else
  {
    WEC78(); // WEC78
    WECB0(); // WECB0
  }
  StoreCRS(); // !CRS
}


// ================================================
// 0xed68: WORD 'WED6A' codep=0x224c wordp=0xed6a
// ================================================

void WED6A() // WED6A
{
  unsigned short int i, imax;
  Push(Read16(0x63ef+WE9FD.offset)); // WE9FD<IFIELD> @
  _plus_BIT(); // +BIT
  Push(0x0010);
  _st_(); // <
  Push(0x01f4); Push(0x0000);
  WE994(); // WE994
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0xfe0c); Push(0xffff);
    WE99E(); // WE99E
    WE9D0(); // WE9D0
    Push(1);
    Push(0x0010);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      Push((Pop() & Read16(0x63ef+WE9FD.offset))==0?1:0); //  WE9FD<IFIELD> @ AND 0=
      if (Pop() != 0)
      {
        Push(0x63ef+WE9FD.offset); // WE9FD<IFIELD>
        _plus__ex__2(); // +!_2
        Push(0x01f4);
        Push(0x63ef+WEA11.offset); // WEA11<IFIELD>
        _plus__ex__2(); // +!_2
        imax = i; // LEAVE
      } else
      {
        Push(Pop() * 2); //  2*
      }
      i++;
    } while(i<imax); // (LOOP)

    Push(0xc6ba); // 'OV.PODS'
    MODULE(); // MODULE
    WEAA9(); // WEAA9
    return;
  }
  Push(1);
  _0MESS(); // 0MESS
  Push(Read16(0x63ef+WE9FD.offset)); // WE9FD<IFIELD> @
  _plus_BIT(); // +BIT
  Push(Pop()==0x0010?1:0); //  0x0010 =
  if (Pop() != 0)
  {
    Push(1);
    Push(0x001b);
    CMESS(); // CMESS
    PRINT("NO CARGO POD BAYS AVAILABLE", 27); // (.")
    StoreCRS(); // !CRS
  } else
  {
    WE9C6(); // WE9C6
  }
  WEB5B(); // WEB5B
  WE9B2(); // WE9B2
}


// ================================================
// 0xee12: WORD 'WEE14' codep=0x224c wordp=0xee14
// ================================================

void WEE14() // WEE14
{
  WEC78(); // WEC78
  WEA27(); // WEA27
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xee1e: WORD 'WEE20' codep=0x224c wordp=0xee20 params=0 returns=2
// ================================================

void WEE20() // WEE20
{
  unsigned short int a;
  Push(Read16((pp_WEB81 + (Read16(pp_WEB7D) - 1) * 0x000a) + (4 - Read16(pp_OCRS)) * 2)); // WEB81 WEB7D @ 1- 0x000a * + 4 OCRS @ - 2* + @
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  U_star_(); // U*
  WE994(); // WE994
  if (Pop() != 0)
  {
    Push(0x0064);
    U_star_(); // U*
    DNEGATE(); // DNEGATE
    WE99E(); // WE99E
    Push(Read16(pp_OCRS) + 1); // OCRS @ 1+
    Push(Read16(pp_WEB7D)); // WEB7D @
    WEC78(); // WEC78
    SWAP(); // SWAP
    Pop(); // DROP
    Push(0x0064);
    OVER(); // OVER
    C_ex_(); // C!
    Push(Pop() + 1); //  1+
    C_ex_(); // C!
    Push((Read16(pp_OCRS) + 1) * 0x01f4); // OCRS @ 1+ 0x01f4 *
    Push(Read16(pp_WEB7D)); // WEB7D @
    a = Pop(); // >R
    Push(a==3?1:0); // I 3 =
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+WEA0C.offset)); // WEA0C<IFIELD> @
      Push(0x00fa);
      _st_(); // <
      if (Pop() != 0)
      {
        Push(0);
        _0MESS(); // 0MESS
        Push(1);
        _0MESS(); // 0MESS
        Push(0);
        Push(0x0025);
        CMESS(); // CMESS
        PRINT("WARNING: ARMOR CLASS EQUIVALENCY WILL", 37); // (.")
        StoreCRS(); // !CRS
        Push(1);
        Push(0x0021);
        CMESS(); // CMESS
        PRINT("BE LOWER DUE TO UNREPAIRED DAMAGE", 33); // (.")
        StoreCRS(); // !CRS
        WEB5B(); // WEB5B
        WEB5B(); // WEB5B
        Push(0);
        _0MESS(); // 0MESS
        Push(1);
        _0MESS(); // 0MESS
      }
      Push((Pop() >> 1) + Read16(0x63ef+WEA0C.offset)); //  2/ WEA0C<IFIELD> @ +
      Push(Read16(regsp)); // DUP
      Push(0x63ef+WE9DA.offset); // WE9DA<IFIELD>
      WEA27(); // WEA27
      Push(Read16(regsp)); // DUP
      Push((Pop() + 1) * 0x00fa); //  1+ 0x00fa *
      _star__slash_(); // */
      Push((0x63ef+WE9DA.offset) + 1); // WE9DA<IFIELD> 1+
      C_ex_(); // C!
    }
    Push(a); // R>
    WEC96(); // WEC96
    Push(0xc6cc); // 'OV.SHIP'
    MODULE(); // MODULE
    WEADD(); // WEADD
    WE9D0(); // WE9D0
    Push(1);
    return;
  }
  Pop(); // DROP
  WE9C6(); // WE9C6
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  Push(0);
}


// ================================================
// 0xef50: WORD 'WEF52' codep=0x224c wordp=0xef52
// ================================================

void WEF52() // WEF52
{
  do
  {
    XYSCAN(); // XYSCAN
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Push(Pop() * -1); //  -1 *
      Push(pp_NCRS); // NCRS
      _plus__ex__2(); // +!_2
      Push(!(Read16(pp_NCRS)==Read16(pp_OCRS)?1:0)); // NCRS @ OCRS @ = NOT
      Push(Read16(pp_NCRS)); // NCRS @
      Push(0);
      Push(5);
      WITHIN(); // WITHIN
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        BLT(); // BLT
        Push(0x0060);
        Push(Read16(pp_NCRS)); // NCRS @
        Push(Read16(regsp)); // DUP
        Push(pp_OCRS); // OCRS
        Store_3(); // !_3
        Push(Pop() * 0x000a); //  0x000a *
        _dash_(); // -
        Push(pp_YBLT); // YBLT
        Store_3(); // !_3
        BLT(); // BLT
      } else
      {
        Push(Read16(pp_OCRS)); // OCRS @
        Push(pp_NCRS); // NCRS
        Store_3(); // !_3
      }
      Push(0);
    } else
    {
      Pop(); // DROP
      Push(1);
    }
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Pop(); // DROP
      WEE20(); // WEE20
    }
  } while(Pop() == 0);
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
}


// ================================================
// 0xefca: WORD 'WEFCC' codep=0x224c wordp=0xefcc
// ================================================

void WEFCC() // WEFCC
{
  Push(Read16(pp_OCRS)); // OCRS @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(pp_WEB7D); // WEB7D
    Store_3(); // !_3
    WEE14(); // WEE14
    if (Pop() != 0)
    {
      Push(1);
      _0MESS(); // 0MESS
      Push(1);
      Push(0x000e);
      CMESS(); // CMESS
      PRINT("DE-EQUIP FIRST", 14); // (.")
      StoreCRS(); // !CRS
      WEB5B(); // WEB5B
      WE9B2(); // WE9B2
    } else
    {
      GetCRS(); // @CRS
      Push(0x000e);
      Push(0x0060);
      POS_dot_(); // POS.
      Push(0x001d);
      Push(pp_WBLT); // WBLT
      Store_3(); // !_3
      Push(pp_NCRS); // NCRS
      OFF(); // OFF
      Push(pp_OCRS); // OCRS
      OFF(); // OFF
      Push(pp_XORMODE); // XORMODE
      ON_3(); // ON_3
      Push(Read16(pp_CRSCOLO)); // CRSCOLO @
      StoreCOLOR(); // !COLOR
      BLT(); // BLT
      WEF52(); // WEF52
      BLT(); // BLT
      StoreCRS(); // !CRS
    }
    return;
  }
  WED6A(); // WED6A
}


// ================================================
// 0xf03f: WORD 'WF041' codep=0x224c wordp=0xf041 params=0 returns=0
// ================================================

void WF041() // WF041
{
  unsigned short int i, imax;
  Push(Read16(0x63ef+WEA11.offset)); // WEA11<IFIELD> @
  Push(0x01f3);
  _gt_(); // >
  Push(Pop() & Read16(0x63ef+WE9FD.offset)); //  WE9FD<IFIELD> @ AND
  if (Pop() != 0)
  {
    Push(1);
    Push(0x0010);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      BIT(); // BIT
      Push(Pop() & Read16(0x63ef+WE9FD.offset)); //  WE9FD<IFIELD> @ AND
      Push(Read16(0x63ef+WEA11.offset)); // WEA11<IFIELD> @
      Push(0x01f3);
      _gt_(); // >
      Push(Pop() * Pop()); // *
      if (Pop() != 0)
      {
        Push(i); // I
        BIT(); // BIT
        Push(Pop() * -1); //  -1 *
        Push(0x63ef+WE9FD.offset); // WE9FD<IFIELD>
        _plus__ex__2(); // +!_2
        Push(0x01f4); Push(0x0000);
        WE99E(); // WE99E
        Push(0xc6ba); // 'OV.PODS'
        MODULE(); // MODULE
        WEAA9(); // WEAA9
        WE9D0(); // WE9D0
        imax = i; // LEAVE
        Push(0xfe0c);
        Push(0x63ef+WEA11.offset); // WEA11<IFIELD>
        _plus__ex__2(); // +!_2
      }
      Push(-1);
      int step = Pop();
      i += step;
      if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
    } while(1); // (+LOOP)

    return;
  }
  Push(Read16(0x63ef+WE9FD.offset)); // WE9FD<IFIELD> @
  if (Pop() == 0) return;
  Push(1);
  _0MESS(); // 0MESS
  Push(1);
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("POD IS NOT EMPTY", 16); // (.")
  StoreCRS(); // !CRS
  WEB5B(); // WEB5B
  WE9B2(); // WE9B2
}


// ================================================
// 0xf0d8: WORD 'WF0DA' codep=0x224c wordp=0xf0da
// ================================================

void WF0DA() // WF0DA
{
  Push(Read16(pp_OCRS)); // OCRS @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(pp_WECAA); // WECAA
    _2_at_(); // 2@
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      WEC78(); // WEC78
      Push(Read16(regsp)); // DUP
      Push(Pop()==0x63ef+WE9DA.offset?1:0); //  WE9DA<IFIELD> =
      OVER(); // OVER
      Push(Read16(Pop())&0xFF); //  C@
      Push(Pop() * Pop()); // *
      SWAP(); // SWAP
      Store_3(); // !_3
      Pop(); // DROP
      Push((Read16(pp_OCRS)==3?1:0) * 0x00fa); // OCRS @ 3 = 0x00fa *
      Push(Read16(0x63ef+WEA0C.offset)); // WEA0C<IFIELD> @
      MIN(); // MIN
      Push(Read16(pp_OCRS)); // OCRS @
      WEC96(); // WEC96
      Push(pp_WECAA); // WECAA
      _2_at_(); // 2@
      WE99E(); // WE99E
      Push(0xc6cc); // 'OV.SHIP'
      MODULE(); // MODULE
      WEADD(); // WEADD
      WE9D0(); // WE9D0
      Push(Read16(pp_OCRS)); // OCRS @
      WED20(); // WED20
    } else
    {
      Pop(); // DROP
    }
    return;
  }
  WF041(); // WF041
  Push(Read16(pp_OCRS)); // OCRS @
  WED20(); // WED20
}


// ================================================
// 0xf146: WORD 'WF148' codep=0x1d29 wordp=0xf148
// ================================================
// 0xf148: db 0x3a 0x20 ': '

// ================================================
// 0xf14a: WORD 'WF14C' codep=0x224c wordp=0xf14c
// ================================================

void WF14C() // WF14C
{
  WE9B2(); // WE9B2
  GetColor(BLUE);
  WEB1B(); // WEB1B
  GetCRS(); // @CRS
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  Push(pp_WEA4A); // WEA4A
  BLD_dash_CRS(); // BLD-CRS
  Push(0);
  Push(Read16(pp_WF148)); // WF148 @
  if (Pop() != 0)
  {
    WEBE9(); // WEBE9
  } else
  {
    WED20(); // WED20
  }
  do
  {
    XYSCAN(); // XYSCAN
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Push(Pop() * -1); //  -1 *
      Push(pp_NCRS); // NCRS
      _plus__ex__2(); // +!_2
      Push(pp_WEA4A); // WEA4A
      SET_dash_CRS(); // SET-CRS
      if (Pop() != 0)
      {
        Push(Read16(pp_OCRS)); // OCRS @
        Push(Read16(pp_WF148)); // WF148 @
        if (Pop() != 0)
        {
          WEBE9(); // WEBE9
        } else
        {
          WED20(); // WED20
        }
      }
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        Push(Read16(pp_WF148)); // WF148 @
        if (Pop() != 0)
        {
          WEFCC(); // WEFCC
        } else
        {
          WF0DA(); // WF0DA
        }
      }
    } else
    {
      Pop(); // DROP
    }
    IsQUIT(); // ?QUIT
  } while(Pop() == 0);
  _gt_1FONT(); // >1FONT
  WEBB5(); // WEBB5
  GetColor(BLACK);
  WEB1B(); // WEB1B
  Push(pp_WEA4A); // WEA4A
  BLD_dash_CRS(); // BLD-CRS
  StoreCRS(); // !CRS
  Push(1);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1d4: WORD 'WF1D6' codep=0x224c wordp=0xf1d6
// ================================================

void WF1D6() // WF1D6
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  _ro_PARTADDR_rc_(); // (PARTADDR) case
  WEA27(); // WEA27
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x000a);
    SWAP(); // SWAP
    Push(Pop() * 2); //  2*
    _dash_(); // -
    Push(Read16((Pop() + pp_WEB81) + (a - 1) * 0x000a)); //  WEB81 + I 1- 0x000a * + @
    Push(0x0064);
    Push(a); // I
    _ro_PARTADDR_rc_(); // (PARTADDR) case
    WEA1B(); // WEA1B
    _dash_(); // -
    Push(0x0069);
    Push(0x0064);
    _star__slash_(); // */
    U_star_(); // U*
  } else
  {
    Push2Words("NULL");
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf224: WORD 'WF226' codep=0x224c wordp=0xf226
// ================================================

void WF226() // WF226
{
  unsigned short int i, imax;
  Push2Words("NULL");
  Push(6);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WF1D6(); // WF1D6
    D_plus_(); // D+
    i++;
  } while(i<imax); // (LOOP)

  Push(3);
  WF1D6(); // WF1D6
  D_dash_(); // D-
  Push(0x0064);
  Push(0x63ef+WE9DA.offset); // WE9DA<IFIELD>
  WEA1B(); // WEA1B
  _dash_(); // -
  Push(0x00fa);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x00c8);
  Push(0x63ef+WE9E4.offset); // WE9E4<IFIELD>
  WEA1B(); // WEA1B
  Push(0x63ef+WE9E9.offset); // WE9E9<IFIELD>
  WEA1B(); // WEA1B
  Push(Pop() + Pop()); // +
  _dash_(); // -
  Push(0x0064);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x63ef+WE9DA.offset); // WE9DA<IFIELD>
  WEA27(); // WEA27
  Push((Pop() + 1) * 0x00fa - Read16(0x63ef+WEA0C.offset)); //  1+ 0x00fa * WEA0C<IFIELD> @ -
  Push(0);
  MAX(); // MAX
  Push(4);
  U_star_(); // U*
  D_plus_(); // D+
}


// ================================================
// 0xf286: WORD 'WF288' codep=0x224c wordp=0xf288 params=2 returns=0
// ================================================

void WF288() // WF288
{
  unsigned short int a, b;
  a = Pop(); // >R
  b = Pop(); // >R
  Push(0);
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("COST TO REPAIR ENTIRE SHIP: ", 28); // (.")
  Push(b); // R>
  Push(a); // R>
  D_dot_(); // D.
  PRINT(" MU", 3); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf2c3: WORD 'WF2C5' codep=0x224c wordp=0xf2c5
// ================================================

void WF2C5() // WF2C5
{
  WF288(); // WF288
  Push(1);
  Push(0x0021);
  CMESS(); // CMESS
  PRINT("SHALL WE REPAIR THE SHIP\?  [N Y]", 32); // (.")
  StoreCRS(); // !CRS
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf2f8: WORD 'WF2FA' codep=0x224c wordp=0xf2fa params=2 returns=2
// ================================================

void WF2FA() // WF2FA
{
  unsigned short int i, imax, a;
  DNEGATE(); // DNEGATE
  WE99E(); // WE99E
  Push(0x63ef+WEA02.offset); // WEA02<IFIELD>
  Push(7);
  Push(0);
  FILL_1(); // FILL_1
  Push(pp_IsREPAIR); // ?REPAIR
  OFF(); // OFF
  Push(0x000e);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x63ef+WE9DA.offset) + i); // WE9DA<IFIELD> I +
    a = Pop(); // >R
    Push(a); // I
    WEA27(); // WEA27
    Push(a + 1); // I 1+
    C_ex_(); // C!
    Push(0x0064);
    Push(a); // R>
    C_ex_(); // C!
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(0x63ef+WE9DA.offset); // WE9DA<IFIELD>
  WEA27(); // WEA27
  Push((Pop() + 1) * 0x00fa); //  1+ 0x00fa *
  Push(0x63ef+WEA0C.offset); // WEA0C<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xf344: WORD 'WF346' codep=0x224c wordp=0xf346
// ================================================

void WF346() // WF346
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  WF226(); // WF226
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    WE994(); // WE994
    if (Pop() != 0)
    {
      _2DUP(); // 2DUP
      WF2C5(); // WF2C5
      if (Pop() != 0)
      {
        WF2FA(); // WF2FA
      } else
      {
        Pop(); Pop(); // 2DROP
      }
    } else
    {
      WF288(); // WF288
      Push(1);
      Push(0x0012);
      CMESS(); // CMESS
      WE9BC(); // WE9BC
      StoreCRS(); // !CRS
      WEB5B(); // WEB5B
    }
  } else
  {
    Pop(); Pop(); // 2DROP
    Push(0);
    Push(0x0015);
    CMESS(); // CMESS
    PRINT("NO REPAIRS ARE NEEDED", 21); // (.")
    StoreCRS(); // !CRS
    WEB5B(); // WEB5B
  }
  Push(1);
  _0MESS(); // 0MESS
  WE9D0(); // WE9D0
}


// ================================================
// 0xf3b6: WORD 'WF3B8' codep=0x224c wordp=0xf3b8 params=2 returns=0
// ================================================

void WF3B8() // WF3B8
{
  PRINT("TYPE", 4); // (.")
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("SHIP NAME: ISS ", 15); // (.")
}


// ================================================
// 0xf3d5: WORD 'WF3D7' codep=0x224c wordp=0xf3d7 params=1 returns=0
// ================================================

void WF3D7() // WF3D7
{
  Push(0);
  SWAP(); // SWAP
  CMESS(); // CMESS
  PRINT("SHIP IS NAMED: ISS ", 19); // (.")
  Push(0x63ef+_pe_NAME.offset); // %NAME<IFIELD>
  _do__dot_(); // $.
  StoreCRS(); // !CRS
}


// ================================================
// 0xf3fb: WORD 'WF3FD' codep=0x224c wordp=0xf3fd
// ================================================

void WF3FD() // WF3FD
{
  Push(pp__dash_AIN); // -AIN
  OFF(); // OFF
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  Push(Read16(0x63ef+_pe_NAME.offset)&0xFF); // %NAME<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop() + 0x0013); //  0x0013 +
    WF3D7(); // WF3D7
    Push(1);
    Push(0x0026);
    CMESS(); // CMESS
    SET_STR_AS_PARAM(" NEW ");
  } else
  {
    Push(0);
    Push(0x0022);
    CMESS(); // CMESS
    SET_STR_AS_PARAM(" ");
  }
  WF3B8(); // WF3B8
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  Push(pp__dash_AIN); // -AIN
  OFF(); // OFF
  Push(0x000e);
  WE9A8(); // WE9A8
  Push(0x63ef+_pe_NAME.offset); // %NAME<IFIELD>
  _do__ex_(); // $!
  StoreCRS(); // !CRS
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  Push((Read16(0x63ef+_pe_NAME.offset)&0xFF) + 0x0013); // %NAME<IFIELD> C@ 0x0013 +
  WF3D7(); // WF3D7
  WEB5B(); // WEB5B
  WE9D0(); // WE9D0
}


// ================================================
// 0xf46b: WORD 'WF46D' codep=0x224c wordp=0xf46d
// ================================================

void WF46D() // WF46D
{
  Push(pp_WF148); // WF148
  ON_3(); // ON_3
  WF14C(); // WF14C
}


// ================================================
// 0xf475: WORD 'WF477' codep=0x224c wordp=0xf477
// ================================================

void WF477() // WF477
{
  Push(pp_WF148); // WF148
  OFF(); // OFF
  WF14C(); // WF14C
}


// ================================================
// 0xf47f: WORD 'CONFIG-FUNCTION' codep=0x4a4f wordp=0xf493
// ================================================

void CONFIG_dash_FUNCTION() // CONFIG-FUNCTION
{
  switch(Pop()) // CONFIG-FUNCTION
  {
  case 0:
    WF46D(); // WF46D
    break;
  case 1:
    WF477(); // WF477
    break;
  case 2:
    WF346(); // WF346
    break;
  case 3:
    WF3FD(); // WF3FD
    break;
  case 4:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4ab: WORD '(U-CONFIG)' codep=0x224c wordp=0xf4ba
// ================================================
// entry

void _ro_U_dash_CONFIG_rc_() // (U-CONFIG)
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WE976(); // WE976
  GetColor(WHITE);
  GetColor(GREY1);
  GetColor(DK_dash_GREEN);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0xc6f8); // 'OV.CONFIG'
  MODULE(); // MODULE
  WEADD(); // WEADD
  Push(pp_WEA33); // WEA33
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  do
  {
    XYSCAN(); // XYSCAN
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Pop(); // DROP
    Push(pp_WEA33); // WEA33
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Push(0);
      Push(Read16(pp_OCRS)); // OCRS @
      CONFIG_dash_FUNCTION(); // CONFIG-FUNCTION case
    } else
    {
      Push(0);
    }
  } while(Pop() == 0);
  Push(1);
  WE980(); // WE980
  ICLOSE(); // ICLOSE
}

// 0xf516: db 0x43 0x4f 0x4e 0x46 0x49 0x47 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x53 0x48 0x49 0x50 0x2d 0x43 0x4f 0x4e 0x46 0x49 0x47 0x55 0x52 0x41 0x54 0x49 0x4f 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x5f 0x5f 0x31 0x38 0x38 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CONFIG-VOC______________________for SHIP-CONFIGURATION------- )__188______ '

