// ====== OVERLAY 'CONFIG-OV' ======
// store offset = 0xe6e0
// overlay size   = 0x0e80

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE6F6  codep:0x224c parp:0xe6f6 size:0x0008 C-string:'WE6F6'
//           WE700  codep:0x224c parp:0xe700 size:0x0008 C-string:'WE700'
//           WE70A  codep:0x224c parp:0xe70a size:0x0008 C-string:'WE70A'
//           WE714  codep:0x224c parp:0xe714 size:0x0008 C-string:'WE714'
//           WE71E  codep:0x224c parp:0xe71e size:0x0008 C-string:'WE71E'
//           WE728  codep:0x224c parp:0xe728 size:0x0008 C-string:'WE728'
//           WE732  codep:0x224c parp:0xe732 size:0x0008 C-string:'WE732'
//           WE73C  codep:0x224c parp:0xe73c size:0x0008 C-string:'WE73C'
//           WE746  codep:0x224c parp:0xe746 size:0x0008 C-string:'WE746'
//           WE750  codep:0x224c parp:0xe750 size:0x0008 C-string:'WE750'
//           WE75A  codep:0x7420 parp:0xe75a size:0x0003 C-string:'WE75A'
//           WE75F  codep:0x7420 parp:0xe75f size:0x0003 C-string:'WE75F'
//           WE764  codep:0x7420 parp:0xe764 size:0x0003 C-string:'WE764'
//           WE769  codep:0x7420 parp:0xe769 size:0x0003 C-string:'WE769'
//           WE76E  codep:0x7420 parp:0xe76e size:0x0003 C-string:'WE76E'
//           WE773  codep:0x7420 parp:0xe773 size:0x0003 C-string:'WE773'
//           WE778  codep:0x7420 parp:0xe778 size:0x0003 C-string:'WE778'
//           WE77D  codep:0x7420 parp:0xe77d size:0x0003 C-string:'WE77D'
//           WE782  codep:0x7420 parp:0xe782 size:0x0003 C-string:'WE782'
//           WE787  codep:0x7420 parp:0xe787 size:0x0003 C-string:'WE787'
//           WE78C  codep:0x7420 parp:0xe78c size:0x0003 C-string:'WE78C'
//           WE791  codep:0x7420 parp:0xe791 size:0x0003 C-string:'WE791'
//           WE796  codep:0x7420 parp:0xe796 size:0x0003 C-string:'WE796'
//         #JUMPOS  codep:0x7420 parp:0xe7a5 size:0x0003 C-string:'_n_JUMPOS'
//        #BLASTOS  codep:0x7420 parp:0xe7b5 size:0x0003 C-string:'_n_BLASTOS'
//           WE7BA  codep:0x1d29 parp:0xe7ba size:0x0002 C-string:'WE7BA'
//           WE7BE  codep:0x224c parp:0xe7be size:0x0014 C-string:'WE7BE'
//           WE7D4  codep:0x224c parp:0xe7d4 size:0x001a C-string:'WE7D4'
//           WE7F0  codep:0x224c parp:0xe7f0 size:0x0018 C-string:'WE7F0'
//           WE80A  codep:0x224c parp:0xe80a size:0x001a C-string:'WE80A'
//           WE826  codep:0x224c parp:0xe826 size:0x003e C-string:'WE826'
//           WE866  codep:0x224c parp:0xe866 size:0x0020 C-string:'WE866'
//           WE888  codep:0x224c parp:0xe888 size:0x002e C-string:'WE888'
//           WE8B8  codep:0x224c parp:0xe8b8 size:0x0032 C-string:'WE8B8'
//           WE8EC  codep:0x1d29 parp:0xe8ec size:0x0015 C-string:'WE8EC'
//           WE903  codep:0x1d29 parp:0xe903 size:0x0021 C-string:'WE903'
//           WE926  codep:0x224c parp:0xe926 size:0x0082 C-string:'WE926'
//           WE9AA  codep:0x224c parp:0xe9aa size:0x0082 C-string:'WE9AA'
//           WEA2E  codep:0x224c parp:0xea2e size:0x0022 C-string:'WEA2E'
//           WEA52  codep:0x224c parp:0xea52 size:0x0022 C-string:'WEA52'
//           WEA76  codep:0x1d29 parp:0xea76 size:0x0032 C-string:'WEA76'
//           WEAAA  codep:0x224c parp:0xeaaa size:0x005b C-string:'WEAAA'
//           WEB07  codep:0x224c parp:0xeb07 size:0x003c C-string:'WEB07'
//           WEB45  codep:0x224c parp:0xeb45 size:0x0014 C-string:'WEB45'
//           WEB5B  codep:0x224c parp:0xeb5b size:0x0014 C-string:'WEB5B'
//           WEB71  codep:0x224c parp:0xeb71 size:0x0014 C-string:'WEB71'
//           WEB87  codep:0x224c parp:0xeb87 size:0x0042 C-string:'WEB87'
//           WEBCB  codep:0x224c parp:0xebcb size:0x004e C-string:'WEBCB'
//             #>.  codep:0x4b3b parp:0xec21 size:0x0010 C-string:'_n__gt__dot_'
//           WEC33  codep:0x224c parp:0xec33 size:0x0012 C-string:'WEC33'
//      (PARTADDR)  codep:0x4b3b parp:0xec54 size:0x0014 C-string:'_ro_PARTADDR_rc_'
//           WEC6A  codep:0x224c parp:0xec6a size:0x0006 C-string:'WEC6A'
//           (PTS)  codep:0x4b3b parp:0xec7a size:0x000c C-string:'_ro_PTS_rc_'
//           WEC88  codep:0x224c parp:0xec88 size:0x0012 C-string:'WEC88'
//           WEC9C  codep:0x1d29 parp:0xec9c size:0x0004 C-string:'WEC9C'
//           WECA2  codep:0x224c parp:0xeca2 size:0x007e C-string:'WECA2'
//           WED22  codep:0x224c parp:0xed22 size:0x0022 C-string:'WED22'
//           WED46  codep:0x224c parp:0xed46 size:0x002c C-string:'WED46'
//           WED74  codep:0x224c parp:0xed74 size:0x0020 C-string:'WED74'
//         #>VALUE  codep:0x4b3b parp:0xeda0 size:0x0010 C-string:'_n__gt_VALUE'
//           WEDB2  codep:0x224c parp:0xedb2 size:0x001e C-string:'WEDB2'
//           WEDD2  codep:0x224c parp:0xedd2 size:0x000a C-string:'WEDD2'
//           WEDDE  codep:0x224c parp:0xedde size:0x009a C-string:'WEDDE'
//           #>BUY  codep:0x4b3b parp:0xee82 size:0x0010 C-string:'_n__gt_BUY'
//           WEE94  codep:0x224c parp:0xee94 size:0x00bc C-string:'WEE94'
//           WEF52  codep:0x224c parp:0xef52 size:0x0078 C-string:'WEF52'
//           WEFCC  codep:0x224c parp:0xefcc size:0x0079 C-string:'WEFCC'
//           WF047  codep:0x224c parp:0xf047 size:0x0097 C-string:'WF047'
//          #>SELL  codep:0x4b3b parp:0xf0e9 size:0x0010 C-string:'_n__gt_SELL'
//           WF0FB  codep:0x224c parp:0xf0fb size:0x0072 C-string:'WF0FB'
//           WF16F  codep:0x1d29 parp:0xf16f size:0x0002 C-string:'WF16F'
//           WF173  codep:0x224c parp:0xf173 size:0x0088 C-string:'WF173'
//           WF1FD  codep:0x224c parp:0xf1fd size:0x004e C-string:'WF1FD'
//           WF24D  codep:0x224c parp:0xf24d size:0x0060 C-string:'WF24D'
//           WF2AF  codep:0x224c parp:0xf2af size:0x003b C-string:'WF2AF'
//           WF2EC  codep:0x224c parp:0xf2ec size:0x0033 C-string:'WF2EC'
//           WF321  codep:0x224c parp:0xf321 size:0x004a C-string:'WF321'
//           WF36D  codep:0x224c parp:0xf36d size:0x0070 C-string:'WF36D'
//           WF3DF  codep:0x224c parp:0xf3df size:0x001d C-string:'WF3DF'
//           WF3FE  codep:0x224c parp:0xf3fe size:0x0024 C-string:'WF3FE'
//           WF424  codep:0x224c parp:0xf424 size:0x006e C-string:'WF424'
//           WF494  codep:0x224c parp:0xf494 size:0x0008 C-string:'WF494'
//           WF49E  codep:0x224c parp:0xf49e size:0x0008 C-string:'WF49E'
// CONFIG-FUNCTION  codep:0x4b3b parp:0xf4ba size:0x0018 C-string:'CONFIG_dash_FUNCTION'
//      (U-CONFIG)  codep:0x224c parp:0xf4e1 size:0x0000 C-string:'_ro_U_dash_CONFIG_rc_'

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
extern Color DK_dash_GREE; // DK-GREE
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
void U_dot_(); // U.
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMAX(); // DMAX
void BIT(); // BIT
void _gt_FLAG(); // >FLAG
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void StoreCOLOR(); // !COLOR
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SCR_dash_RES(); // SCR-RES
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
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE7BA = 0xe7ba; // WE7BA size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE8EC = 0xe8ec; // WE8EC size: 21
// {0x04, 0x0a, 0x02, 0x09, 0x13, 0x0a, 0x16, 0x09, 0x25, 0x0a, 0x3c, 0x09, 0x27, 0x0a, 0x64, 0x09, 0x1b, 0x0a, 0x80, 0x09, 0x1e}

const unsigned short int pp_WE903 = 0xe903; // WE903 size: 33
// {0x07, 0xb0, 0x06, 0x09, 0x29, 0xa6, 0x06, 0x09, 0x1d, 0x9c, 0x06, 0x09, 0x25, 0x92, 0x06, 0x09, 0x15, 0x88, 0x06, 0x09, 0x41, 0x7e, 0x06, 0x09, 0x31, 0x74, 0x06, 0x09, 0x2d, 0x6a, 0x06, 0x09, 0x25}

const unsigned short int pp_WEA76 = 0xea76; // WEA76 size: 50
// {0xe8, 0x03, 0x90, 0x01, 0xc8, 0x00, 0x50, 0x00, 0x0a, 0x00, 0xe2, 0x04, 0xbc, 0x02, 0x40, 0x01, 0x78, 0x00, 0x28, 0x00, 0xfa, 0x00, 0x7d, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x0f, 0x00, 0xd0, 0x07, 0xb0, 0x04, 0x58, 0x02, 0x18, 0x01, 0x78, 0x00, 0xdc, 0x05, 0x84, 0x03, 0x1c, 0x02, 0xc8, 0x00, 0x50, 0x00}

const unsigned short int pp_WEC9C = 0xec9c; // WEC9C size: 4
// {0x56, 0x3a, 0x20, 0x70}

const unsigned short int pp_WF16F = 0xf16f; // WF16F size: 2
// {0x3a, 0x20}




// 0xe6f2: db 0xe7 0x00 '  '

// ================================================
// 0xe6f4: WORD 'WE6F6' codep=0x224c parp=0xe6f6 params=0 returns=0
// ================================================

void WE6F6() // WE6F6
{
  Push(0xc261); // 'OVINIT-_1'
  MODULE(); // MODULE
}


// ================================================
// 0xe6fe: WORD 'WE700' codep=0x224c parp=0xe700 params=0 returns=0
// ================================================

void WE700() // WE700
{
  Push(0xc273); // 'OVTRANS'
  MODULE(); // MODULE
}


// ================================================
// 0xe708: WORD 'WE70A' codep=0x224c parp=0xe70a params=0 returns=0
// ================================================
// orphan

void WE70A() // WE70A
{
  Push(0xc285); // 'OVD@BAL'
  MODULE(); // MODULE
}


// ================================================
// 0xe712: WORD 'WE714' codep=0x224c parp=0xe714 params=0 returns=0
// ================================================

void WE714() // WE714
{
  Push(0xc2a9); // 'OV?BALA'
  MODULE(); // MODULE
}


// ================================================
// 0xe71c: WORD 'WE71E' codep=0x224c parp=0xe71e params=0 returns=0
// ================================================

void WE71E() // WE71E
{
  Push(0xc2ed); // 'T+BALAN'
  MODULE(); // MODULE
}


// ================================================
// 0xe726: WORD 'WE728' codep=0x224c parp=0xe728 params=0 returns=0
// ================================================

void WE728() // WE728
{
  Push(0xb6fd); // 'OV#IN$'
  MODULE(); // MODULE
}


// ================================================
// 0xe730: WORD 'WE732' codep=0x224c parp=0xe732 params=0 returns=0
// ================================================

void WE732() // WE732
{
  Push(0xb70e); // 'OVQUIT'
  MODULE(); // MODULE
}


// ================================================
// 0xe73a: WORD 'WE73C' codep=0x224c parp=0xe73c params=0 returns=0
// ================================================

void WE73C() // WE73C
{
  Push(0xb71f); // 'OV.0$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe744: WORD 'WE746' codep=0x224c parp=0xe746 params=0 returns=0
// ================================================

void WE746() // WE746
{
  Push(0xb730); // 'OV0$$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe74e: WORD 'WE750' codep=0x224c parp=0xe750 params=0 returns=0
// ================================================

void WE750() // WE750
{
  Push(0xcc56); // 'OVBALAN'
  MODULE(); // MODULE
}


// ================================================
// 0xe758: WORD 'WE75A' codep=0x7420 parp=0xe75a
// ================================================
IFieldType WE75A = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xe75d: WORD 'WE75F' codep=0x7420 parp=0xe75f
// ================================================
IFieldType WE75F = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xe762: WORD 'WE764' codep=0x7420 parp=0xe764
// ================================================
IFieldType WE764 = {SHIPIDX, 0x15, 0x02};

// ================================================
// 0xe767: WORD 'WE769' codep=0x7420 parp=0xe769
// ================================================
IFieldType WE769 = {SHIPIDX, 0x17, 0x02};

// ================================================
// 0xe76c: WORD 'WE76E' codep=0x7420 parp=0xe76e
// ================================================
IFieldType WE76E = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xe771: WORD 'WE773' codep=0x7420 parp=0xe773
// ================================================
IFieldType WE773 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xe776: WORD 'WE778' codep=0x7420 parp=0xe778
// ================================================
IFieldType WE778 = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xe77b: WORD 'WE77D' codep=0x7420 parp=0xe77d
// ================================================
IFieldType WE77D = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xe780: WORD 'WE782' codep=0x7420 parp=0xe782
// ================================================
IFieldType WE782 = {SHIPIDX, 0x29, 0x07};

// ================================================
// 0xe785: WORD 'WE787' codep=0x7420 parp=0xe787
// ================================================
IFieldType WE787 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xe78a: WORD 'WE78C' codep=0x7420 parp=0xe78c
// ================================================
IFieldType WE78C = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xe78f: WORD 'WE791' codep=0x7420 parp=0xe791
// ================================================
IFieldType WE791 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe794: WORD 'WE796' codep=0x7420 parp=0xe796
// ================================================
// orphan
IFieldType WE796 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xe799: WORD '#JUMPOS' codep=0x7420 parp=0xe7a5
// ================================================
IFieldType _n_JUMPOS = {SHIPIDX, 0x56, 0x01};

// ================================================
// 0xe7a8: WORD '#BLASTOS' codep=0x7420 parp=0xe7b5
// ================================================
IFieldType _n_BLASTOS = {SHIPIDX, 0x57, 0x01};

// ================================================
// 0xe7b8: WORD 'WE7BA' codep=0x1d29 parp=0xe7ba
// ================================================
// 0xe7ba: db 0x3a 0x20 ': '

// ================================================
// 0xe7bc: WORD 'WE7BE' codep=0x224c parp=0xe7be params=0 returns=1
// ================================================

void WE7BE() // WE7BE
{
  Push(Read16(pp_WE7BA)); // WE7BA @
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  Push(6);
  Push(8);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe7d2: WORD 'WE7D4' codep=0x224c parp=0xe7d4 params=1 returns=1
// ================================================

void WE7D4() // WE7D4
{
  WE7BE(); // WE7BE
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0x0064);
    return;
  }
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
}


// ================================================
// 0xe7ee: WORD 'WE7F0' codep=0x224c parp=0xe7f0 params=1 returns=1
// ================================================

void WE7F0() // WE7F0
{
  WE7BE(); // WE7BE
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(7);
    return;
  }
  Push((Read16(Pop() + 1)&0xFF) & 7); //  1+ C@ 7 AND
}


// ================================================
// 0xe808: WORD 'WE80A' codep=0x224c parp=0xe80a params=0 returns=1
// ================================================

void WE80A() // WE80A
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WE77D.offset)); // WE77D<IFIELD> @
  _plus_BIT(); // +BIT
  Push((Pop() + (Read16(0x65e1+_n_JUMPOS.offset)&0xFF)) + (Read16(0x65e1+_n_BLASTOS.offset)&0xFF)); //  #JUMPOS<IFIELD> C@ + #BLASTOS<IFIELD> C@ +
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe824: WORD 'WE826' codep=0x224c parp=0xe826
// ================================================

void WE826() // WE826
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
// 0xe864: WORD 'WE866' codep=0x224c parp=0xe866
// ================================================

void WE866() // WE866
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
// 0xe886: WORD 'WE888' codep=0x224c parp=0xe888
// ================================================

void WE888() // WE888
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
  WE80A(); // WE80A
  Push(2);
  DrawR(); // .R
  StoreCRS(); // !CRS
  Push(0xcc0f); // 'OV.MASS'
  MODULE(); // MODULE
  Push(0xcc20); // 'OV.ACC'
  MODULE(); // MODULE
}


// ================================================
// 0xe8b6: WORD 'WE8B8' codep=0x224c parp=0xe8b8
// ================================================

void WE8B8() // WE8B8
{
  Push(1);
  _0MESS(); // 0MESS
  Push(1);
  Push(0x001a);
  CMESS(); // CMESS
  PRINT("SHIP CAN'T HANDLE THIS LOAD", 27); // (.")
  StoreCRS(); // !CRS
  WE866(); // WE866
  WE732(); // WE732
}


// ================================================
// 0xe8ea: WORD 'WE8EC' codep=0x1d29 parp=0xe8ec
// ================================================
// 0xe8ec: db 0x04 0x0a 0x02 0x09 0x13 0x0a 0x16 0x09 0x25 0x0a 0x3c 0x09 0x27 0x0a 0x64 0x09 0x1b 0x0a 0x80 0x09 0x1e '        % < ' d      '

// ================================================
// 0xe901: WORD 'WE903' codep=0x1d29 parp=0xe903
// ================================================
// 0xe903: db 0x07 0xb0 0x06 0x09 0x29 0xa6 0x06 0x09 0x1d 0x9c 0x06 0x09 0x25 0x92 0x06 0x09 0x15 0x88 0x06 0x09 0x41 0x7e 0x06 0x09 0x31 0x74 0x06 0x09 0x2d 0x6a 0x06 0x09 0x25 '    )       %       A~  1t  -j  %'

// ================================================
// 0xe924: WORD 'WE926' codep=0x224c parp=0xe926
// ================================================

void WE926() // WE926
{
  WE80A(); // WE80A
  Push(0x0010);
  _st_(); // <
  Push(0xc350); Push(0x0000);
  WE714(); // WE714
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+_n_BLASTOS.offset)&0xFF); // #BLASTOS<IFIELD> C@
    Push(1);
    _gt_(); // >
    if (Pop() != 0)
    {
      WE8B8(); // WE8B8
    } else
    {
      Push(0x3cb0); Push(0xffff);
      WE71E(); // WE71E
      WE750(); // WE750
      Push(1);
      Push(0x65e1+_n_BLASTOS.offset); // #BLASTOS<IFIELD>
      _plus__ex__2(); // +!_2
      Push(0xcc32); // 'OV.PODS'
      MODULE(); // MODULE
      WE888(); // WE888
    }
    return;
  }
  Push(1);
  _0MESS(); // 0MESS
  WE80A(); // WE80A
  Push(Pop()==0x0010?1:0); //  0x0010 =
  if (Pop() != 0)
  {
    Push(1);
    Push(0x001b);
    CMESS(); // CMESS
    PRINT("NO POD BAYS AVAILABLE", 21); // (.")
    StoreCRS(); // !CRS
  } else
  {
    WE746(); // WE746
  }
  WE866(); // WE866
  WE732(); // WE732
}


// ================================================
// 0xe9a8: WORD 'WE9AA' codep=0x224c parp=0xe9aa
// ================================================

void WE9AA() // WE9AA
{
  WE80A(); // WE80A
  Push(0x0010);
  _st_(); // <
  Push(0x4e20); Push(0x0000);
  WE714(); // WE714
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+_n_JUMPOS.offset)&0xFF); // #JUMPOS<IFIELD> C@
    Push(3);
    _gt_(); // >
    if (Pop() != 0)
    {
      WE8B8(); // WE8B8
    } else
    {
      Push(0xb1e0); Push(0xffff);
      WE71E(); // WE71E
      WE750(); // WE750
      Push(1);
      Push(0x65e1+_n_JUMPOS.offset); // #JUMPOS<IFIELD>
      _plus__ex__2(); // +!_2
      Push(0xcc32); // 'OV.PODS'
      MODULE(); // MODULE
      WE888(); // WE888
    }
    return;
  }
  Push(1);
  _0MESS(); // 0MESS
  WE80A(); // WE80A
  Push(Pop()==0x0010?1:0); //  0x0010 =
  if (Pop() != 0)
  {
    Push(1);
    Push(0x001b);
    CMESS(); // CMESS
    PRINT("NO POD BAYS AVAILABLE", 21); // (.")
    StoreCRS(); // !CRS
  } else
  {
    WE746(); // WE746
  }
  WE866(); // WE866
  WE732(); // WE732
}


// ================================================
// 0xea2c: WORD 'WEA2E' codep=0x224c parp=0xea2e params=0 returns=0
// ================================================

void WEA2E() // WEA2E
{
  Push(Read16(0x65e1+_n_BLASTOS.offset)&0xFF); // #BLASTOS<IFIELD> C@
  if (Pop() == 0) return;
  Push(-1);
  Push(0x65e1+_n_BLASTOS.offset); // #BLASTOS<IFIELD>
  _plus__ex__2(); // +!_2
  Push(0xafc8); Push(0x0000);
  WE71E(); // WE71E
  Push(0xcc32); // 'OV.PODS'
  MODULE(); // MODULE
  WE888(); // WE888
  WE750(); // WE750
}


// ================================================
// 0xea50: WORD 'WEA52' codep=0x224c parp=0xea52 params=0 returns=0
// ================================================

void WEA52() // WEA52
{
  Push(Read16(0x65e1+_n_JUMPOS.offset)&0xFF); // #JUMPOS<IFIELD> C@
  if (Pop() == 0) return;
  Push(-1);
  Push(0x65e1+_n_JUMPOS.offset); // #JUMPOS<IFIELD>
  _plus__ex__2(); // +!_2
  Push(0x1194); Push(0x0000);
  WE71E(); // WE71E
  Push(0xcc32); // 'OV.PODS'
  MODULE(); // MODULE
  WE888(); // WE888
  WE750(); // WE750
}


// ================================================
// 0xea74: WORD 'WEA76' codep=0x1d29 parp=0xea76
// ================================================
// 0xea76: db 0xe8 0x03 0x90 0x01 0xc8 0x00 0x50 0x00 0x0a 0x00 0xe2 0x04 0xbc 0x02 0x40 0x01 0x78 0x00 0x28 0x00 0xfa 0x00 0x7d 0x00 0x3e 0x00 0x1f 0x00 0x0f 0x00 0xd0 0x07 0xb0 0x04 0x58 0x02 0x18 0x01 0x78 0x00 0xdc 0x05 0x84 0x03 0x1c 0x02 0xc8 0x00 0x50 0x00 '      P       @ x (   } >         X   x         P '

// ================================================
// 0xeaa8: WORD 'WEAAA' codep=0x224c parp=0xeaaa
// ================================================

void WEAAA() // WEAAA
{
  Push(7);
  GetColor(BLACK);
  ROT(); // ROT
  Push(Pop() * 0x000a + 0x007c); //  0x000a * 0x007c +
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
    Push(Read16(regsp)); // DUP
    Push(Pop()==6?1:0); //  6 =
    if (Pop() != 0)
    {
      PRINT("PLASMA", 6); // (.")
      Pop(); // DROP
    } else
    {
      PRINT("CLASS ", 6); // (.")
      Draw(); // .
    }
    return;
  }
  PRINT("NONE", 4); // (.")
}


// ================================================
// 0xeb05: WORD 'WEB07' codep=0x224c parp=0xeb07
// ================================================

void WEB07() // WEB07
{
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  Push(Read16((0x65e1+WE75F.offset) + 1)&0xFF); // WE75F<IFIELD> 1+ C@
  Push(4);
  WEAAA(); // WEAAA
  Push(Read16((0x65e1+WE76E.offset) + 1)&0xFF); // WE76E<IFIELD> 1+ C@
  Push(3);
  WEAAA(); // WEAAA
  Push(Read16((0x65e1+WE75A.offset) + 1)&0xFF); // WE75A<IFIELD> 1+ C@
  Push(2);
  WEAAA(); // WEAAA
  Push(Read16((0x65e1+WE773.offset) + 1)&0xFF); // WE773<IFIELD> 1+ C@
  Push(1);
  WEAAA(); // WEAAA
  Push(Read16((0x65e1+WE778.offset) + 1)&0xFF); // WE778<IFIELD> 1+ C@
  Push(0);
  WEAAA(); // WEAAA
  WE888(); // WE888
  StoreCRS(); // !CRS
}


// ================================================
// 0xeb43: WORD 'WEB45' codep=0x224c parp=0xeb45
// ================================================

void WEB45() // WEB45
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x00ae);
  POS_dot_(); // POS.
  Push(0x01f4);
  Draw(); // .
}


// ================================================
// 0xeb59: WORD 'WEB5B' codep=0x224c parp=0xeb5b
// ================================================

void WEB5B() // WEB5B
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x0072);
  POS_dot_(); // POS.
  Push(0xc350);
  U_dot_(); // U.
}


// ================================================
// 0xeb6f: WORD 'WEB71' codep=0x224c parp=0xeb71
// ================================================

void WEB71() // WEB71
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x0068);
  POS_dot_(); // POS.
  Push(0x4e20);
  U_dot_(); // U.
}


// ================================================
// 0xeb85: WORD 'WEB87' codep=0x224c parp=0xeb87
// ================================================

void WEB87() // WEB87
{
  unsigned short int i, imax;
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
    Push(Pop() * 0x000a + 0x002c); //  0x000a * 0x002c +
    POS_dot_(); // POS.
    Push(Read16(pp_WEA76 + i * 2)); // WEA76 I 2* + @
    Push(0x0064);
    M_star_(); // M*
    Push(6);
    D_dot_R(); // D.R
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xebc9: WORD 'WEBCB' codep=0x224c parp=0xebcb
// ================================================

void WEBCB() // WEBCB
{
  unsigned short int i, imax;
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(6);
    GetColor(BLACK);
    Push(0x002c + i * 0x000a); // 0x002c I 0x000a * +
    Push(0x0036);
    POS_dot_PXT(); // POS.PXT
    i++;
  } while(i<imax); // (LOOP)

  Push(4);
  GetColor(BLACK);
  Push(0x00ae);
  Push(0x0037);
  POS_dot_PXT(); // POS.PXT
  Push(6);
  GetColor(BLACK);
  Push(0x0072);
  Push(0x0036);
  POS_dot_PXT(); // POS.PXT
  Push(6);
  GetColor(BLACK);
  Push(0x0068);
  Push(0x0036);
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xec19: WORD '#>.' codep=0x4b3b parp=0xec21
// ================================================

void _n__gt__dot_() // #>.
{
  switch(Pop()) // #>.
  {
  case 0:
    WEB45(); // WEB45
    break;
  case 6:
    WEB5B(); // WEB5B
    break;
  case 7:
    WEB71(); // WEB71
    break;
  default:
    WEB87(); // WEB87
    break;

  }
}

// ================================================
// 0xec31: WORD 'WEC33' codep=0x224c parp=0xec33
// ================================================

void WEC33() // WEC33
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(a); // R>
  CTINIT(); // CTINIT
  WEBCB(); // WEBCB
  Push(Read16(regsp)); // DUP
  _n__gt__dot_(); // #>. case
  StoreCRS(); // !CRS
}


// ================================================
// 0xec45: WORD '(PARTADDR)' codep=0x4b3b parp=0xec54
// ================================================

void _ro_PARTADDR_rc_() // (PARTADDR)
{
  switch(Pop()) // (PARTADDR)
  {
  case 1:
    Push(0x65e1+WE75F.offset); // IFIELD
    break;
  case 2:
    Push(0x65e1+WE76E.offset); // IFIELD
    break;
  case 3:
    Push(0x65e1+WE75A.offset); // IFIELD
    break;
  case 4:
    Push(0x65e1+WE773.offset); // IFIELD
    break;
  default:
    Push(0x65e1+WE778.offset); // IFIELD
    break;

  }
}

// ================================================
// 0xec68: WORD 'WEC6A' codep=0x224c parp=0xec6a
// ================================================

void WEC6A() // WEC6A
{
  Push(Read16(regsp)); // DUP
  _ro_PARTADDR_rc_(); // (PARTADDR) case
}


// ================================================
// 0xec70: WORD '(PTS)' codep=0x4b3b parp=0xec7a
// ================================================

void _ro_PTS_rc_() // (PTS)
{
  switch(Pop()) // (PTS)
  {
  case 2:
    Push(0x65e1+WE787.offset); // IFIELD
    break;
  case 3:
    Push(0x65e1+WE78C.offset); // IFIELD
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xec86: WORD 'WEC88' codep=0x224c parp=0xec88
// ================================================

void WEC88() // WEC88
{
  _ro_PTS_rc_(); // (PTS) case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Store_2(); // !_2
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xec9a: WORD 'WEC9C' codep=0x1d29 parp=0xec9c
// ================================================
// 0xec9c: db 0x56 0x3a 0x20 0x70 'V: p'

// ================================================
// 0xeca0: WORD 'WECA2' codep=0x224c parp=0xeca2
// ================================================
// orphan

void WECA2() // WECA2
{
  WEC6A(); // WEC6A
  Push(Read16(regsp)); // DUP
  WE7F0(); // WE7F0
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(6);
  _st_(); // <
  SWAP(); // SWAP
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(5);
    SWAP(); // SWAP
    _dash_(); // -
    Push(Pop() * 0x000a + 0x002c); //  0x000a * 0x002c +
    Push(pp_YBLT); // YBLT
    Store_2(); // !_2
    SWAP(); // SWAP
    Push((Pop() - 1) * 0x000a); //  1- 0x000a *
    OVER(); // OVER
    WE7F0(); // WE7F0
    Push(5);
    SWAP(); // SWAP
    _dash_(); // -
    Push(Pop() * 2); //  2*
    Push(Pop() + Pop()); // +
    Push(Read16(Pop() + pp_WEA76)); //  WEA76 + @
    SWAP(); // SWAP
    WE7D4(); // WE7D4
    Push(0x0069);
    _star__slash_(); // */
    Push(0x0064);
    U_star_(); // U*
    Push(0x0005); Push(0x0000);
    DMAX(); // DMAX
    _2DUP(); // 2DUP
    Push(pp_WEC9C); // WEC9C
    StoreD(); // D!
    Push(6);
    D_dot_R(); // D.R
    return;
  }
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
  Push2Words("NULL");
  Push(pp_WEC9C); // WEC9C
  StoreD(); // D!
}


// ================================================
// 0xed20: WORD 'WED22' codep=0x224c parp=0xed22 params=1 returns=0
// ================================================

void WED22() // WED22
{
  Pop(); // DROP
  Push(0x00ae);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(Read16(0x65e1+WE77D.offset)); // WE77D<IFIELD> @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  _plus_BIT(); // +BIT
  Push(Pop() * 0x01f4); //  0x01f4 *
  Push(4);
  DrawR(); // .R
}


// ================================================
// 0xed44: WORD 'WED46' codep=0x224c parp=0xed46 params=1 returns=0
// ================================================

void WED46() // WED46
{
  Pop(); // DROP
  Push(0x0072);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(Read16(0x65e1+_n_BLASTOS.offset)&0xFF); // #BLASTOS<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x1194);
  M_star_(); // M*
  Push(6);
  D_dot_R(); // D.R
  PRINT("0", 1); // (.")
}


// ================================================
// 0xed72: WORD 'WED74' codep=0x224c parp=0xed74 params=1 returns=0
// ================================================

void WED74() // WED74
{
  Pop(); // DROP
  Push(0x0068);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(Read16(0x65e1+_n_JUMPOS.offset)&0xFF); // #JUMPOS<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x1194);
  M_star_(); // M*
  Push(6);
  D_dot_R(); // D.R
}


// ================================================
// 0xed94: WORD '#>VALUE' codep=0x4b3b parp=0xeda0
// ================================================

void _n__gt_VALUE() // #>VALUE
{
  switch(Pop()) // #>VALUE
  {
  case 0:
    WED22(); // WED22
    break;
  case 6:
    WED46(); // WED46
    break;
  case 7:
    WED74(); // WED74
    break;
  default:
    WECA2(); // WECA2
    break;

  }
}

// ================================================
// 0xedb0: WORD 'WEDB2' codep=0x224c parp=0xedb2
// ================================================

void WEDB2() // WEDB2
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(a); // R>
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  WEBCB(); // WEBCB
  Push(0x0037);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(Read16(regsp)); // DUP
  _n__gt_VALUE(); // #>VALUE case
  StoreCRS(); // !CRS
}


// ================================================
// 0xedd0: WORD 'WEDD2' codep=0x224c parp=0xedd2
// ================================================

void WEDD2() // WEDD2
{
  WEC6A(); // WEC6A
  WE7F0(); // WE7F0
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xeddc: WORD 'WEDDE' codep=0x224c parp=0xedde
// ================================================

void WEDDE() // WEDDE
{
  unsigned short int i, imax;
  WE80A(); // WE80A
  Push(0x0010);
  _st_(); // <
  Push(0x01f4); Push(0x0000);
  WE714(); // WE714
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0xfe0c); Push(0xffff);
    WE71E(); // WE71E
    WE750(); // WE750
    Push(1);
    Push(0x0010);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      Push((Pop() & Read16(0x65e1+WE77D.offset))==0?1:0); //  WE77D<IFIELD> @ AND 0=
      if (Pop() != 0)
      {
        Push(0x65e1+WE77D.offset); // WE77D<IFIELD>
        _plus__ex__2(); // +!_2
        Push(0x01f4);
        Push(0x65e1+WE791.offset); // WE791<IFIELD>
        _plus__ex__2(); // +!_2
        imax = i; // LEAVE
      } else
      {
        Push(Pop() * 2); //  2*
      }
      i++;
    } while(i<imax); // (LOOP)

    Push(0xcc32); // 'OV.PODS'
    MODULE(); // MODULE
    WE888(); // WE888
    return;
  }
  Push(1);
  _0MESS(); // 0MESS
  WE80A(); // WE80A
  Push(Pop()==0x0010?1:0); //  0x0010 =
  if (Pop() != 0)
  {
    Push(1);
    Push(0x001b);
    CMESS(); // CMESS
    PRINT("NO POD BAYS AVAILABLE", 21); // (.")
    StoreCRS(); // !CRS
  } else
  {
    WE746(); // WE746
  }
  WE866(); // WE866
  WE732(); // WE732
}


// ================================================
// 0xee78: WORD '#>BUY' codep=0x4b3b parp=0xee82
// ================================================

void _n__gt_BUY() // #>BUY
{
  switch(Pop()) // #>BUY
  {
  case 0:
    WEDDE(); // WEDDE
    break;
  case 6:
    WE926(); // WE926
    break;
  case 7:
    WE9AA(); // WE9AA
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xee92: WORD 'WEE94' codep=0x224c parp=0xee94 params=0 returns=2
// ================================================

void WEE94() // WEE94
{
  unsigned short int a;
  Push(Read16((pp_WEA76 + (Read16(pp_WE7BA) - 1) * 0x000a) + (4 - Read16(pp_OCRS)) * 2)); // WEA76 WE7BA @ 1- 0x000a * + 4 OCRS @ - 2* + @
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  U_star_(); // U*
  WE714(); // WE714
  if (Pop() != 0)
  {
    Push(0x0064);
    U_star_(); // U*
    DNEGATE(); // DNEGATE
    WE71E(); // WE71E
    Push(Read16(pp_OCRS) + 1); // OCRS @ 1+
    Push(Read16(pp_WE7BA)); // WE7BA @
    WEC6A(); // WEC6A
    SWAP(); // SWAP
    Pop(); // DROP
    Push(0x0064);
    OVER(); // OVER
    C_ex__2(); // C!_2
    Push(Pop() + 1); //  1+
    C_ex__2(); // C!_2
    Push((Read16(pp_OCRS) + 1) * 0x01f4); // OCRS @ 1+ 0x01f4 *
    Push(Read16(pp_WE7BA)); // WE7BA @
    a = Pop(); // >R
    Push(a==3?1:0); // I 3 =
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+WE78C.offset)); // WE78C<IFIELD> @
      Push(0x00fa);
      MAX(); // MAX
      Push(0x65e1+WE78C.offset); // WE78C<IFIELD>
      Store_2(); // !_2
      Push((Pop() >> 1) + Read16(0x65e1+WE78C.offset)); //  2/ WE78C<IFIELD> @ +
      Push(Read16(regsp)); // DUP
      Push(0x65e1+WE75A.offset); // WE75A<IFIELD>
      WE7F0(); // WE7F0
      Push(Read16(regsp)); // DUP
      Push((Pop() + 1) * 0x00fa); //  1+ 0x00fa *
      _star__slash_(); // */
      Push((0x65e1+WE75A.offset) + 1); // WE75A<IFIELD> 1+
      C_ex__2(); // C!_2
    }
    Push(a); // R>
    WEC88(); // WEC88
    Push(0xcc44); // 'OV.SHIP'
    MODULE(); // MODULE
    WEB07(); // WEB07
    WE750(); // WE750
    Push(1);
    return;
  }
  Pop(); // DROP
  WE746(); // WE746
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(0);
}


// ================================================
// 0xef50: WORD 'WEF52' codep=0x224c parp=0xef52
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
        Push(0x0056);
        Push(Read16(pp_NCRS)); // NCRS @
        Push(Read16(regsp)); // DUP
        Push(pp_OCRS); // OCRS
        Store_2(); // !_2
        Push(Pop() * 0x000a); //  0x000a *
        _dash_(); // -
        Push(pp_YBLT); // YBLT
        Store_2(); // !_2
        BLT(); // BLT
      } else
      {
        Push(Read16(pp_OCRS)); // OCRS @
        Push(pp_NCRS); // NCRS
        Store_2(); // !_2
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
      WEE94(); // WEE94
    }
  } while(Pop() == 0);
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(pp_FQUIT); // FQUIT
  _099(); // 099
}


// ================================================
// 0xefca: WORD 'WEFCC' codep=0x224c parp=0xefcc
// ================================================

void WEFCC() // WEFCC
{
  Push(Read16(pp_OCRS)); // OCRS @
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(pp_WE7BA); // WE7BA
    Store_2(); // !_2
    WEDD2(); // WEDD2
    if (Pop() != 0)
    {
      Push(1);
      _0MESS(); // 0MESS
      Push(1);
      Push(0x000e);
      CMESS(); // CMESS
      PRINT("DE-EQUIP FIRST", 14); // (.")
      StoreCRS(); // !CRS
      WE866(); // WE866
      WE732(); // WE732
    } else
    {
      GetCRS(); // @CRS
      Push(0x000e);
      Push(0x0056);
      POS_dot_(); // POS.
      Push(0x001d);
      Push(pp_WBLT); // WBLT
      Store_2(); // !_2
      Push(pp_NCRS); // NCRS
      _099(); // 099
      Push(pp_OCRS); // OCRS
      _099(); // 099
      Push(pp_XORMODE); // XORMODE
      ON_2(); // ON_2
      Push(Read16(pp_CRSCOLO)); // CRSCOLO @
      StoreCOLOR(); // !COLOR
      BLT(); // BLT
      WEF52(); // WEF52
      BLT(); // BLT
      StoreCRS(); // !CRS
    }
    return;
  }
  _n__gt_BUY(); // #>BUY case
}


// ================================================
// 0xf045: WORD 'WF047' codep=0x224c parp=0xf047 params=0 returns=0
// ================================================

void WF047() // WF047
{
  unsigned short int i, imax;
  Push(Read16(0x65e1+WE791.offset)); // WE791<IFIELD> @
  Push(0x01f3);
  _gt_(); // >
  Push(Pop() & Read16(0x65e1+WE77D.offset)); //  WE77D<IFIELD> @ AND
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
      Push(Pop() & Read16(0x65e1+WE77D.offset)); //  WE77D<IFIELD> @ AND
      Push(Read16(0x65e1+WE791.offset)); // WE791<IFIELD> @
      Push(0x01f3);
      _gt_(); // >
      Push(Pop() * Pop()); // *
      if (Pop() != 0)
      {
        Push(i); // I
        BIT(); // BIT
        Push(Pop() * -1); //  -1 *
        Push(0x65e1+WE77D.offset); // WE77D<IFIELD>
        _plus__ex__2(); // +!_2
        Push(0x01f4); Push(0x0000);
        WE71E(); // WE71E
        Push(0xcc32); // 'OV.PODS'
        MODULE(); // MODULE
        WE888(); // WE888
        WE750(); // WE750
        imax = i; // LEAVE
        Push(0xfe0c);
        Push(0x65e1+WE791.offset); // WE791<IFIELD>
        _plus__ex__2(); // +!_2
      }
      Push(-1);
      int step = Pop();
      i += step;
      if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
    } while(1); // (+LOOP)

    return;
  }
  Push(Read16(0x65e1+WE77D.offset)); // WE77D<IFIELD> @
  if (Pop() == 0) return;
  Push(1);
  _0MESS(); // 0MESS
  Push(1);
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("POD IS NOT EMPTY", 16); // (.")
  StoreCRS(); // !CRS
  WE866(); // WE866
  WE732(); // WE732
}


// ================================================
// 0xf0de: WORD '#>SELL' codep=0x4b3b parp=0xf0e9
// ================================================

void _n__gt_SELL() // #>SELL
{
  switch(Pop()) // #>SELL
  {
  case 0:
    WF047(); // WF047
    break;
  case 6:
    WEA2E(); // WEA2E
    break;
  case 7:
    WEA52(); // WEA52
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf0f9: WORD 'WF0FB' codep=0x224c parp=0xf0fb
// ================================================

void WF0FB() // WF0FB
{
  Push(Read16(pp_OCRS)); // OCRS @
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(pp_WEC9C); // WEC9C
    _2_at_(); // 2@
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      WEC6A(); // WEC6A
      Push(Read16(regsp)); // DUP
      Push(Pop()==0x65e1+WE75A.offset?1:0); //  WE75A<IFIELD> =
      OVER(); // OVER
      Push(Read16(Pop())&0xFF); //  C@
      Push(Pop() * Pop()); // *
      SWAP(); // SWAP
      Store_2(); // !_2
      Pop(); // DROP
      Push((Read16(pp_OCRS)==3?1:0) * 0x00fa); // OCRS @ 3 = 0x00fa *
      Push(Read16(0x65e1+WE78C.offset)); // WE78C<IFIELD> @
      MIN(); // MIN
      Push(Read16(pp_OCRS)); // OCRS @
      WEC88(); // WEC88
      Push(pp_WEC9C); // WEC9C
      _2_at_(); // 2@
      WE71E(); // WE71E
      Push(0xcc44); // 'OV.SHIP'
      MODULE(); // MODULE
      WEB07(); // WEB07
      WE750(); // WE750
      Push(Read16(pp_OCRS)); // OCRS @
      WEDB2(); // WEDB2
    } else
    {
      Pop(); // DROP
    }
    return;
  }
  _n__gt_SELL(); // #>SELL case
  Push(Read16(pp_OCRS)); // OCRS @
  WEDB2(); // WEDB2
}


// ================================================
// 0xf16d: WORD 'WF16F' codep=0x1d29 parp=0xf16f
// ================================================
// 0xf16f: db 0x3a 0x20 ': '

// ================================================
// 0xf171: WORD 'WF173' codep=0x224c parp=0xf173
// ================================================

void WF173() // WF173
{
  WE732(); // WE732
  GetColor(BLUE);
  WE826(); // WE826
  GetCRS(); // @CRS
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_WE903); // WE903
  BLD_dash_CRS(); // BLD-CRS
  Push(0);
  Push(Read16(pp_WF16F)); // WF16F @
  if (Pop() != 0)
  {
    WEC33(); // WEC33
  } else
  {
    WEDB2(); // WEDB2
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
      Push(pp_WE903); // WE903
      SET_dash_CRS(); // SET-CRS
      if (Pop() != 0)
      {
        Push(Read16(pp_OCRS)); // OCRS @
        Push(Read16(pp_WF16F)); // WF16F @
        if (Pop() != 0)
        {
          WEC33(); // WEC33
        } else
        {
          WEDB2(); // WEDB2
        }
      }
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        Push(Read16(pp_WF16F)); // WF16F @
        if (Pop() != 0)
        {
          WEFCC(); // WEFCC
        } else
        {
          WF0FB(); // WF0FB
        }
      }
    } else
    {
      Pop(); // DROP
    }
    IsQUIT(); // ?QUIT
  } while(Pop() == 0);
  _gt_1FONT(); // >1FONT
  WEBCB(); // WEBCB
  GetColor(BLACK);
  WE826(); // WE826
  Push(pp_WE903); // WE903
  BLD_dash_CRS(); // BLD-CRS
  StoreCRS(); // !CRS
  Push(1);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1fb: WORD 'WF1FD' codep=0x224c parp=0xf1fd
// ================================================

void WF1FD() // WF1FD
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  _ro_PARTADDR_rc_(); // (PARTADDR) case
  WE7F0(); // WE7F0
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x000a);
    SWAP(); // SWAP
    Push(Pop() * 2); //  2*
    _dash_(); // -
    Push(Read16((Pop() + pp_WEA76) + (a - 1) * 0x000a)); //  WEA76 + I 1- 0x000a * + @
    Push(0x0064);
    Push(a); // I
    _ro_PARTADDR_rc_(); // (PARTADDR) case
    WE7D4(); // WE7D4
    _dash_(); // -
    Push(0x0019);
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
// 0xf24b: WORD 'WF24D' codep=0x224c parp=0xf24d
// ================================================

void WF24D() // WF24D
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
    WF1FD(); // WF1FD
    D_plus_(); // D+
    i++;
  } while(i<imax); // (LOOP)

  Push(3);
  WF1FD(); // WF1FD
  D_dash_(); // D-
  Push(0x0064);
  Push(0x65e1+WE75A.offset); // WE75A<IFIELD>
  WE7D4(); // WE7D4
  _dash_(); // -
  Push(0x003c);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x00c8);
  Push(0x65e1+WE764.offset); // WE764<IFIELD>
  WE7D4(); // WE7D4
  Push(0x65e1+WE769.offset); // WE769<IFIELD>
  WE7D4(); // WE7D4
  Push(Pop() + Pop()); // +
  _dash_(); // -
  Push(0x0019);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x65e1+WE75A.offset); // WE75A<IFIELD>
  WE7F0(); // WE7F0
  Push((Pop() + 1) * 0x003c - Read16(0x65e1+WE78C.offset)); //  1+ 0x003c * WE78C<IFIELD> @ -
  Push(0);
  MAX(); // MAX
  Push(2);
  U_star_(); // U*
  D_plus_(); // D+
}


// ================================================
// 0xf2ad: WORD 'WF2AF' codep=0x224c parp=0xf2af
// ================================================

void WF2AF() // WF2AF
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
  PRINT(" SP", 3); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf2ea: WORD 'WF2EC' codep=0x224c parp=0xf2ec
// ================================================

void WF2EC() // WF2EC
{
  WF2AF(); // WF2AF
  Push(1);
  Push(0x0021);
  CMESS(); // CMESS
  PRINT("SHALL WE REPAIR THE SHIP\?  [N Y]", 32); // (.")
  StoreCRS(); // !CRS
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf31f: WORD 'WF321' codep=0x224c parp=0xf321 params=2 returns=2
// ================================================

void WF321() // WF321
{
  unsigned short int i, imax, a;
  DNEGATE(); // DNEGATE
  WE71E(); // WE71E
  Push(0x65e1+WE782.offset); // WE782<IFIELD>
  Push(7);
  Push(0);
  FILL_2(); // FILL_2
  Push(pp_IsREPAIR); // ?REPAIR
  _099(); // 099
  Push(0x000e);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((0x65e1+WE75A.offset) + i); // WE75A<IFIELD> I +
    a = Pop(); // >R
    Push(a); // I
    WE7F0(); // WE7F0
    Push(a + 1); // I 1+
    C_ex__2(); // C!_2
    Push(0x0064);
    Push(a); // R>
    C_ex__2(); // C!_2
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(0x65e1+WE75A.offset); // WE75A<IFIELD>
  WE7F0(); // WE7F0
  Push((Pop() + 1) * 0x00fa); //  1+ 0x00fa *
  Push(0x65e1+WE78C.offset); // WE78C<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf36b: WORD 'WF36D' codep=0x224c parp=0xf36d
// ================================================

void WF36D() // WF36D
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  WF24D(); // WF24D
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    WE714(); // WE714
    if (Pop() != 0)
    {
      _2DUP(); // 2DUP
      WF2EC(); // WF2EC
      if (Pop() != 0)
      {
        WF321(); // WF321
      } else
      {
        Pop(); Pop(); // 2DROP
      }
    } else
    {
      WF2AF(); // WF2AF
      Push(1);
      Push(0x0012);
      CMESS(); // CMESS
      WE73C(); // WE73C
      StoreCRS(); // !CRS
      WE866(); // WE866
    }
  } else
  {
    Pop(); Pop(); // 2DROP
    Push(0);
    Push(0x0015);
    CMESS(); // CMESS
    PRINT("NO REPAIRS ARE NEEDED", 21); // (.")
    StoreCRS(); // !CRS
    WE866(); // WE866
  }
  Push(1);
  _0MESS(); // 0MESS
  WE750(); // WE750
}


// ================================================
// 0xf3dd: WORD 'WF3DF' codep=0x224c parp=0xf3df params=2 returns=0
// ================================================

void WF3DF() // WF3DF
{
  PRINT("TYPE", 4); // (.")
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("SHIP NAME: ISS ", 15); // (.")
}


// ================================================
// 0xf3fc: WORD 'WF3FE' codep=0x224c parp=0xf3fe
// ================================================

void WF3FE() // WF3FE
{
  Push(0);
  SWAP(); // SWAP
  CMESS(); // CMESS
  PRINT("SHIP IS NAMED: ISS ", 19); // (.")
  Push(0x65e1+_pe_NAME.offset); // %NAME<IFIELD>
  _do__dot_(); // $.
  StoreCRS(); // !CRS
}


// ================================================
// 0xf422: WORD 'WF424' codep=0x224c parp=0xf424
// ================================================

void WF424() // WF424
{
  Push(pp__dash_AIN); // -AIN
  _099(); // 099
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  Push(Read16(0x65e1+_pe_NAME.offset)&0xFF); // %NAME<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop() + 0x0013); //  0x0013 +
    WF3FE(); // WF3FE
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
  WF3DF(); // WF3DF
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(pp__dash_AIN); // -AIN
  _099(); // 099
  Push(0x000d);
  WE728(); // WE728
  Push(0x65e1+_pe_NAME.offset); // %NAME<IFIELD>
  _do__ex_(); // $!
  StoreCRS(); // !CRS
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  Push((Read16(0x65e1+_pe_NAME.offset)&0xFF) + 0x0013); // %NAME<IFIELD> C@ 0x0013 +
  WF3FE(); // WF3FE
  WE866(); // WE866
  WE750(); // WE750
}


// ================================================
// 0xf492: WORD 'WF494' codep=0x224c parp=0xf494
// ================================================

void WF494() // WF494
{
  Push(pp_WF16F); // WF16F
  ON_2(); // ON_2
  WF173(); // WF173
}


// ================================================
// 0xf49c: WORD 'WF49E' codep=0x224c parp=0xf49e
// ================================================

void WF49E() // WF49E
{
  Push(pp_WF16F); // WF16F
  _099(); // 099
  WF173(); // WF173
}


// ================================================
// 0xf4a6: WORD 'CONFIG-FUNCTION' codep=0x4b3b parp=0xf4ba
// ================================================

void CONFIG_dash_FUNCTION() // CONFIG-FUNCTION
{
  switch(Pop()) // CONFIG-FUNCTION
  {
  case 0:
    WF494(); // WF494
    break;
  case 1:
    WF49E(); // WF49E
    break;
  case 2:
    WF36D(); // WF36D
    break;
  case 3:
    WF424(); // WF424
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
// 0xf4d2: WORD '(U-CONFIG)' codep=0x224c parp=0xf4e1
// ================================================
// entry

void _ro_U_dash_CONFIG_rc_() // (U-CONFIG)
{
  Push(0xc8c3); // '?FRE'
  MODULE(); // MODULE
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WE6F6(); // WE6F6
  GetColor(WHITE);
  GetColor(GREY1);
  GetColor(DK_dash_GREE);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_NCRS); // NCRS
  _099(); // 099
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0xcc68); // 'OV.CONF'
  MODULE(); // MODULE
  WEB07(); // WEB07
  Push(pp_WE8EC); // WE8EC
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  do
  {
    XYSCAN(); // XYSCAN
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Pop(); // DROP
    Push(pp_WE8EC); // WE8EC
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
  WE700(); // WE700
  ICLOSE(); // ICLOSE
}

// 0xf543: db 0x43 0x4f 0x4e 0x46 0x49 0x47 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CONFIG-______________________ '

