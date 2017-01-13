// ====== OVERLAY 'CONFIG-OV' ======
// store offset = 0xe6e0
// overlay size   = 0x0e80

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe6f6  codep:0x224c parp:0xe6f6 size:0x0008 C-string:'UNK_0xe6f6'
//      UNK_0xe700  codep:0x224c parp:0xe700 size:0x0012 C-string:'UNK_0xe700'
//      UNK_0xe714  codep:0x224c parp:0xe714 size:0x0008 C-string:'UNK_0xe714'
//      UNK_0xe71e  codep:0x224c parp:0xe71e size:0x0008 C-string:'UNK_0xe71e'
//      UNK_0xe728  codep:0x224c parp:0xe728 size:0x0008 C-string:'UNK_0xe728'
//      UNK_0xe732  codep:0x224c parp:0xe732 size:0x0008 C-string:'UNK_0xe732'
//      UNK_0xe73c  codep:0x224c parp:0xe73c size:0x0008 C-string:'UNK_0xe73c'
//      UNK_0xe746  codep:0x224c parp:0xe746 size:0x0008 C-string:'UNK_0xe746'
//      UNK_0xe750  codep:0x224c parp:0xe750 size:0x0008 C-string:'UNK_0xe750'
//      UNK_0xe75a  codep:0x7420 parp:0xe75a size:0x0003 C-string:'UNK_0xe75a'
//      UNK_0xe75f  codep:0x7420 parp:0xe75f size:0x0003 C-string:'UNK_0xe75f'
//      UNK_0xe764  codep:0x7420 parp:0xe764 size:0x0003 C-string:'UNK_0xe764'
//      UNK_0xe769  codep:0x7420 parp:0xe769 size:0x0003 C-string:'UNK_0xe769'
//      UNK_0xe76e  codep:0x7420 parp:0xe76e size:0x0003 C-string:'UNK_0xe76e'
//      UNK_0xe773  codep:0x7420 parp:0xe773 size:0x0003 C-string:'UNK_0xe773'
//      UNK_0xe778  codep:0x7420 parp:0xe778 size:0x0003 C-string:'UNK_0xe778'
//      UNK_0xe77d  codep:0x7420 parp:0xe77d size:0x0003 C-string:'UNK_0xe77d'
//      UNK_0xe782  codep:0x7420 parp:0xe782 size:0x0003 C-string:'UNK_0xe782'
//      UNK_0xe787  codep:0x7420 parp:0xe787 size:0x0003 C-string:'UNK_0xe787'
//      UNK_0xe78c  codep:0x7420 parp:0xe78c size:0x0003 C-string:'UNK_0xe78c'
//      UNK_0xe791  codep:0x7420 parp:0xe791 size:0x0008 C-string:'UNK_0xe791'
//         #JUMPOS  codep:0x7420 parp:0xe7a5 size:0x0003 C-string:'_n_JUMPOS'
//        #BLASTOS  codep:0x7420 parp:0xe7b5 size:0x0003 C-string:'_n_BLASTOS'
//      UNK_0xe7ba  codep:0x1d29 parp:0xe7ba size:0x0002 C-string:'UNK_0xe7ba'
//      UNK_0xe7be  codep:0x224c parp:0xe7be size:0x0014 C-string:'UNK_0xe7be'
//      UNK_0xe7d4  codep:0x224c parp:0xe7d4 size:0x001a C-string:'UNK_0xe7d4'
//      UNK_0xe7f0  codep:0x224c parp:0xe7f0 size:0x0018 C-string:'UNK_0xe7f0'
//      UNK_0xe80a  codep:0x224c parp:0xe80a size:0x001a C-string:'UNK_0xe80a'
//      UNK_0xe826  codep:0x224c parp:0xe826 size:0x003e C-string:'UNK_0xe826'
//      UNK_0xe866  codep:0x224c parp:0xe866 size:0x0020 C-string:'UNK_0xe866'
//      UNK_0xe888  codep:0x224c parp:0xe888 size:0x002e C-string:'UNK_0xe888'
//      UNK_0xe8b8  codep:0x224c parp:0xe8b8 size:0x0032 C-string:'UNK_0xe8b8'
//      UNK_0xe8ec  codep:0x1d29 parp:0xe8ec size:0x0015 C-string:'UNK_0xe8ec'
//      UNK_0xe903  codep:0x1d29 parp:0xe903 size:0x0021 C-string:'UNK_0xe903'
//      UNK_0xe926  codep:0x224c parp:0xe926 size:0x0082 C-string:'UNK_0xe926'
//      UNK_0xe9aa  codep:0x224c parp:0xe9aa size:0x0082 C-string:'UNK_0xe9aa'
//      UNK_0xea2e  codep:0x224c parp:0xea2e size:0x0022 C-string:'UNK_0xea2e'
//      UNK_0xea52  codep:0x224c parp:0xea52 size:0x0022 C-string:'UNK_0xea52'
//      UNK_0xea76  codep:0x1d29 parp:0xea76 size:0x0032 C-string:'UNK_0xea76'
//      UNK_0xeaaa  codep:0x224c parp:0xeaaa size:0x005b C-string:'UNK_0xeaaa'
//      UNK_0xeb07  codep:0x224c parp:0xeb07 size:0x003c C-string:'UNK_0xeb07'
//      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x0014 C-string:'UNK_0xeb45'
//      UNK_0xeb5b  codep:0x224c parp:0xeb5b size:0x0014 C-string:'UNK_0xeb5b'
//      UNK_0xeb71  codep:0x224c parp:0xeb71 size:0x0014 C-string:'UNK_0xeb71'
//      UNK_0xeb87  codep:0x224c parp:0xeb87 size:0x0042 C-string:'UNK_0xeb87'
//      UNK_0xebcb  codep:0x224c parp:0xebcb size:0x004e C-string:'UNK_0xebcb'
//             #>.  codep:0x4b3b parp:0xec21 size:0x0010 C-string:'_n__gt__dot_'
//      UNK_0xec33  codep:0x224c parp:0xec33 size:0x0012 C-string:'UNK_0xec33'
//      (PARTADDR)  codep:0x4b3b parp:0xec54 size:0x0014 C-string:'_ro_PARTADDR_rc_'
//      UNK_0xec6a  codep:0x224c parp:0xec6a size:0x0006 C-string:'UNK_0xec6a'
//           (PTS)  codep:0x4b3b parp:0xec7a size:0x000c C-string:'_ro_PTS_rc_'
//      UNK_0xec88  codep:0x224c parp:0xec88 size:0x0012 C-string:'UNK_0xec88'
//      UNK_0xec9c  codep:0x1d29 parp:0xec9c size:0x0004 C-string:'UNK_0xec9c'
//      UNK_0xeca2  codep:0x224c parp:0xeca2 size:0x007e C-string:'UNK_0xeca2'
//      UNK_0xed22  codep:0x224c parp:0xed22 size:0x0022 C-string:'UNK_0xed22'
//      UNK_0xed46  codep:0x224c parp:0xed46 size:0x002c C-string:'UNK_0xed46'
//      UNK_0xed74  codep:0x224c parp:0xed74 size:0x0020 C-string:'UNK_0xed74'
//         #>VALUE  codep:0x4b3b parp:0xeda0 size:0x0010 C-string:'_n__gt_VALUE'
//      UNK_0xedb2  codep:0x224c parp:0xedb2 size:0x001e C-string:'UNK_0xedb2'
//      UNK_0xedd2  codep:0x224c parp:0xedd2 size:0x000a C-string:'UNK_0xedd2'
//      UNK_0xedde  codep:0x224c parp:0xedde size:0x009a C-string:'UNK_0xedde'
//           #>BUY  codep:0x4b3b parp:0xee82 size:0x0010 C-string:'_n__gt_BUY'
//      UNK_0xee94  codep:0x224c parp:0xee94 size:0x00bc C-string:'UNK_0xee94'
//      UNK_0xef52  codep:0x224c parp:0xef52 size:0x0078 C-string:'UNK_0xef52'
//      UNK_0xefcc  codep:0x224c parp:0xefcc size:0x0079 C-string:'UNK_0xefcc'
//      UNK_0xf047  codep:0x224c parp:0xf047 size:0x0097 C-string:'UNK_0xf047'
//          #>SELL  codep:0x4b3b parp:0xf0e9 size:0x0010 C-string:'_n__gt_SELL'
//      UNK_0xf0fb  codep:0x224c parp:0xf0fb size:0x0072 C-string:'UNK_0xf0fb'
//      UNK_0xf16f  codep:0x1d29 parp:0xf16f size:0x0002 C-string:'UNK_0xf16f'
//      UNK_0xf173  codep:0x224c parp:0xf173 size:0x0088 C-string:'UNK_0xf173'
//      UNK_0xf1fd  codep:0x224c parp:0xf1fd size:0x004e C-string:'UNK_0xf1fd'
//      UNK_0xf24d  codep:0x224c parp:0xf24d size:0x0060 C-string:'UNK_0xf24d'
//      UNK_0xf2af  codep:0x224c parp:0xf2af size:0x003b C-string:'UNK_0xf2af'
//      UNK_0xf2ec  codep:0x224c parp:0xf2ec size:0x0033 C-string:'UNK_0xf2ec'
//      UNK_0xf321  codep:0x224c parp:0xf321 size:0x004a C-string:'UNK_0xf321'
//      UNK_0xf36d  codep:0x224c parp:0xf36d size:0x0070 C-string:'UNK_0xf36d'
//      UNK_0xf3df  codep:0x224c parp:0xf3df size:0x001d C-string:'UNK_0xf3df'
//      UNK_0xf3fe  codep:0x224c parp:0xf3fe size:0x0024 C-string:'UNK_0xf3fe'
//      UNK_0xf424  codep:0x224c parp:0xf424 size:0x006e C-string:'UNK_0xf424'
//      UNK_0xf494  codep:0x224c parp:0xf494 size:0x0008 C-string:'UNK_0xf494'
//      UNK_0xf49e  codep:0x224c parp:0xf49e size:0x0008 C-string:'UNK_0xf49e'
// CONFIG-FUNCTION  codep:0x4b3b parp:0xf4ba size:0x0018 C-string:'CONFIG_dash_FUNCTION'
//      (U-CONFIG)  codep:0x224c parp:0xf4e1 size:0x0000 C-string:'_ro_U_dash_CONFIG_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp__ask_REPAIR; // ?REPAIR
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
void _star__slash_(); // */
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void _dot_(); // .
void _dot_R(); // .R
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
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void D_ex_(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void _ex_COLOR(); // !COLOR
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SCR_dash_RES(); // SCR-RES
void POS_dot_(); // POS.
void _at_CRS(); // @CRS
void _ex_CRS(); // !CRS
void _do__dot_(); // $.
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void _ask_MRC(); // ?MRC
void XYSCAN(); // XYSCAN
void _ask_TRIG(); // ?TRIG
void _ask_QUIT(); // ?QUIT
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
const unsigned short int pp_UNK_0xe7ba = 0xe7ba; // UNK_0xe7ba size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe8ec = 0xe8ec; // UNK_0xe8ec size: 21
// {0x04, 0x0a, 0x02, 0x09, 0x13, 0x0a, 0x16, 0x09, 0x25, 0x0a, 0x3c, 0x09, 0x27, 0x0a, 0x64, 0x09, 0x1b, 0x0a, 0x80, 0x09, 0x1e}

const unsigned short int pp_UNK_0xe903 = 0xe903; // UNK_0xe903 size: 33
// {0x07, 0xb0, 0x06, 0x09, 0x29, 0xa6, 0x06, 0x09, 0x1d, 0x9c, 0x06, 0x09, 0x25, 0x92, 0x06, 0x09, 0x15, 0x88, 0x06, 0x09, 0x41, 0x7e, 0x06, 0x09, 0x31, 0x74, 0x06, 0x09, 0x2d, 0x6a, 0x06, 0x09, 0x25}

const unsigned short int pp_UNK_0xea76 = 0xea76; // UNK_0xea76 size: 50
// {0xe8, 0x03, 0x90, 0x01, 0xc8, 0x00, 0x50, 0x00, 0x0a, 0x00, 0xe2, 0x04, 0xbc, 0x02, 0x40, 0x01, 0x78, 0x00, 0x28, 0x00, 0xfa, 0x00, 0x7d, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x0f, 0x00, 0xd0, 0x07, 0xb0, 0x04, 0x58, 0x02, 0x18, 0x01, 0x78, 0x00, 0xdc, 0x05, 0x84, 0x03, 0x1c, 0x02, 0xc8, 0x00, 0x50, 0x00}

const unsigned short int pp_UNK_0xec9c = 0xec9c; // UNK_0xec9c size: 4
// {0x56, 0x3a, 0x20, 0x70}

const unsigned short int pp_UNK_0xf16f = 0xf16f; // UNK_0xf16f size: 2
// {0x3a, 0x20}




// 0xe6f2: db 0xe7 0x00 '  '

// ================================================
// 0xe6f4: WORD 'UNK_0xe6f6' codep=0x224c parp=0xe6f6
// ================================================

void UNK_0xe6f6() // UNK_0xe6f6
{
  Push(0xc261); // probable 'OVINIT-_1'
  MODULE(); // MODULE
}


// ================================================
// 0xe6fe: WORD 'UNK_0xe700' codep=0x224c parp=0xe700
// ================================================

void UNK_0xe700() // UNK_0xe700
{
  Push(0xc273); // probable 'OVTRANS'
  MODULE(); // MODULE
}

// 0xe708: db 0x4c 0x22 0x5d 0x17 0x85 0xc2 0xd9 0x84 0x90 0x16 'L"]       '

// ================================================
// 0xe712: WORD 'UNK_0xe714' codep=0x224c parp=0xe714
// ================================================

void UNK_0xe714() // UNK_0xe714
{
  Push(0xc2a9); // probable 'OV?BALA'
  MODULE(); // MODULE
}


// ================================================
// 0xe71c: WORD 'UNK_0xe71e' codep=0x224c parp=0xe71e
// ================================================

void UNK_0xe71e() // UNK_0xe71e
{
  Push(0xc2ed); // probable 'T+BALAN'
  MODULE(); // MODULE
}


// ================================================
// 0xe726: WORD 'UNK_0xe728' codep=0x224c parp=0xe728
// ================================================

void UNK_0xe728() // UNK_0xe728
{
  Push(0xb6fd); // probable 'OV#IN$'
  MODULE(); // MODULE
}


// ================================================
// 0xe730: WORD 'UNK_0xe732' codep=0x224c parp=0xe732
// ================================================

void UNK_0xe732() // UNK_0xe732
{
  Push(0xb70e); // probable 'OVQUIT'
  MODULE(); // MODULE
}


// ================================================
// 0xe73a: WORD 'UNK_0xe73c' codep=0x224c parp=0xe73c
// ================================================

void UNK_0xe73c() // UNK_0xe73c
{
  Push(0xb71f); // probable 'OV.0$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe744: WORD 'UNK_0xe746' codep=0x224c parp=0xe746
// ================================================

void UNK_0xe746() // UNK_0xe746
{
  Push(0xb730); // probable 'OV0$$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe74e: WORD 'UNK_0xe750' codep=0x224c parp=0xe750
// ================================================

void UNK_0xe750() // UNK_0xe750
{
  Push(0xcc56); // probable 'OVBALAN'
  MODULE(); // MODULE
}


// ================================================
// 0xe758: WORD 'UNK_0xe75a' codep=0x7420 parp=0xe75a
// ================================================
// 0xe75a: db 0x14 0x11 0x02 '   '

// ================================================
// 0xe75d: WORD 'UNK_0xe75f' codep=0x7420 parp=0xe75f
// ================================================
// 0xe75f: db 0x14 0x13 0x02 '   '

// ================================================
// 0xe762: WORD 'UNK_0xe764' codep=0x7420 parp=0xe764
// ================================================
// 0xe764: db 0x14 0x15 0x02 '   '

// ================================================
// 0xe767: WORD 'UNK_0xe769' codep=0x7420 parp=0xe769
// ================================================
// 0xe769: db 0x14 0x17 0x02 '   '

// ================================================
// 0xe76c: WORD 'UNK_0xe76e' codep=0x7420 parp=0xe76e
// ================================================
// 0xe76e: db 0x14 0x19 0x02 '   '

// ================================================
// 0xe771: WORD 'UNK_0xe773' codep=0x7420 parp=0xe773
// ================================================
// 0xe773: db 0x14 0x1b 0x02 '   '

// ================================================
// 0xe776: WORD 'UNK_0xe778' codep=0x7420 parp=0xe778
// ================================================
// 0xe778: db 0x14 0x1d 0x02 '   '

// ================================================
// 0xe77b: WORD 'UNK_0xe77d' codep=0x7420 parp=0xe77d
// ================================================
// 0xe77d: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xe780: WORD 'UNK_0xe782' codep=0x7420 parp=0xe782
// ================================================
// 0xe782: db 0x14 0x29 0x07 ' ) '

// ================================================
// 0xe785: WORD 'UNK_0xe787' codep=0x7420 parp=0xe787
// ================================================
// 0xe787: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xe78a: WORD 'UNK_0xe78c' codep=0x7420 parp=0xe78c
// ================================================
// 0xe78c: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xe78f: WORD 'UNK_0xe791' codep=0x7420 parp=0xe791
// ================================================
// 0xe791: db 0x14 0x43 0x02 0x20 0x74 0x14 0x45 0x04 ' C  t E '

// ================================================
// 0xe799: WORD '#JUMPOS' codep=0x7420 parp=0xe7a5
// ================================================
// 0xe7a5: db 0x14 0x56 0x01 ' V '

// ================================================
// 0xe7a8: WORD '#BLASTOS' codep=0x7420 parp=0xe7b5
// ================================================
// 0xe7b5: db 0x14 0x57 0x01 ' W '

// ================================================
// 0xe7b8: WORD 'UNK_0xe7ba' codep=0x1d29 parp=0xe7ba
// ================================================
// 0xe7ba: db 0x3a 0x20 ': '

// ================================================
// 0xe7bc: WORD 'UNK_0xe7be' codep=0x224c parp=0xe7be
// ================================================

void UNK_0xe7be() // UNK_0xe7be
{
  Push(pp_UNK_0xe7ba); // UNK_0xe7ba
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  Push(6);
  Push(8);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe7d2: WORD 'UNK_0xe7d4' codep=0x224c parp=0xe7d4
// ================================================

void UNK_0xe7d4() // UNK_0xe7d4
{
  UNK_0xe7be(); // UNK_0xe7be
  if (Pop() != 0)
  {
  Pop(); // DROP
  Push(0x0064);
  return;
  }
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe7ee: WORD 'UNK_0xe7f0' codep=0x224c parp=0xe7f0
// ================================================

void UNK_0xe7f0() // UNK_0xe7f0
{
  UNK_0xe7be(); // UNK_0xe7be
  if (Pop() != 0)
  {
  Pop(); // DROP
  Push(7);
  return;
  }
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(7);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe808: WORD 'UNK_0xe80a' codep=0x224c parp=0xe80a
// ================================================

void UNK_0xe80a() // UNK_0xe80a
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6600); // IFIELD(UNK_0xe77d)
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(0x6637); // IFIELD(#JUMPOS)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(0x6638); // IFIELD(#BLASTOS)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe824: WORD 'UNK_0xe826' codep=0x224c parp=0xe826
// ================================================

void UNK_0xe826() // UNK_0xe826
{
  _ex_COLOR(); // !COLOR
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
// 0xe864: WORD 'UNK_0xe866' codep=0x224c parp=0xe866
// ================================================

void UNK_0xe866() // UNK_0xe866
{
  TIME(); // TIME
  _2_at_(); // 2@

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_dash_(); // D-
  Push(0x09c4); Push(0x0000);
  D_gt_(); // D>
  Exec("?TERMINAL"); // call of word 0x25bc '(?TERMINAL)'
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe886: WORD 'UNK_0xe888' codep=0x224c parp=0xe888
// ================================================

void UNK_0xe888() // UNK_0xe888
{
  _at_CRS(); // @CRS
  Push(2);
  SetColor("BLACK");
  Push(0x00ae);
  Push(0x0085);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  UNK_0xe80a(); // UNK_0xe80a
  Push(2);
  _dot_R(); // .R
  _ex_CRS(); // !CRS
  Push(0xcc0f); // probable 'OV.MASS'
  MODULE(); // MODULE
  Push(0xcc20); // probable 'OV.ACC'
  MODULE(); // MODULE
}


// ================================================
// 0xe8b6: WORD 'UNK_0xe8b8' codep=0x224c parp=0xe8b8
// ================================================

void UNK_0xe8b8() // UNK_0xe8b8
{
  Push(1);
  _0MESS(); // 0MESS
  Push(1);
  Push(0x001a);
  CMESS(); // CMESS
  PRINT("SHIP CAN'T HANDLE THIS LOAD", 27); // (.")
  _ex_CRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xe8ea: WORD 'UNK_0xe8ec' codep=0x1d29 parp=0xe8ec
// ================================================
// 0xe8ec: db 0x04 0x0a 0x02 0x09 0x13 0x0a 0x16 0x09 0x25 0x0a 0x3c 0x09 0x27 0x0a 0x64 0x09 0x1b 0x0a 0x80 0x09 0x1e '        % < ' d      '

// ================================================
// 0xe901: WORD 'UNK_0xe903' codep=0x1d29 parp=0xe903
// ================================================
// 0xe903: db 0x07 0xb0 0x06 0x09 0x29 0xa6 0x06 0x09 0x1d 0x9c 0x06 0x09 0x25 0x92 0x06 0x09 0x15 0x88 0x06 0x09 0x41 0x7e 0x06 0x09 0x31 0x74 0x06 0x09 0x2d 0x6a 0x06 0x09 0x25 '    )       %       A~  1t  -j  %'

// ================================================
// 0xe924: WORD 'UNK_0xe926' codep=0x224c parp=0xe926
// ================================================

void UNK_0xe926() // UNK_0xe926
{
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  _st_(); // <
  Push(0xc350); Push(0x0000);
  UNK_0xe714(); // UNK_0xe714
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
  Push(0x6638); // IFIELD(#BLASTOS)
  Push(Read8(Pop())&0xFF); // C@
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {
  UNK_0xe8b8(); // UNK_0xe8b8
  } else
  {
  Push(0x3cb0); Push(0xffff);
  UNK_0xe71e(); // UNK_0xe71e
  UNK_0xe750(); // UNK_0xe750
  Push(1);
  Push(0x6638); // IFIELD(#BLASTOS)
  _plus__ex__2(); // +!_2
  Push(0xcc32); // probable 'OV.PODS'
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  }
  return;
  }
  Push(1);
  _0MESS(); // 0MESS
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
  Push(1);
  Push(0x001b);
  CMESS(); // CMESS
  PRINT("NO POD BAYS AVAILABLE", 21); // (.")
  _ex_CRS(); // !CRS
  } else
  {
  UNK_0xe746(); // UNK_0xe746
  }
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xe9a8: WORD 'UNK_0xe9aa' codep=0x224c parp=0xe9aa
// ================================================

void UNK_0xe9aa() // UNK_0xe9aa
{
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  _st_(); // <
  Push(0x4e20); Push(0x0000);
  UNK_0xe714(); // UNK_0xe714
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
  Push(0x6637); // IFIELD(#JUMPOS)
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  _gt_(); // >
  if (Pop() != 0)
  {
  UNK_0xe8b8(); // UNK_0xe8b8
  } else
  {
  Push(0xb1e0); Push(0xffff);
  UNK_0xe71e(); // UNK_0xe71e
  UNK_0xe750(); // UNK_0xe750
  Push(1);
  Push(0x6637); // IFIELD(#JUMPOS)
  _plus__ex__2(); // +!_2
  Push(0xcc32); // probable 'OV.PODS'
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  }
  return;
  }
  Push(1);
  _0MESS(); // 0MESS
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
  Push(1);
  Push(0x001b);
  CMESS(); // CMESS
  PRINT("NO POD BAYS AVAILABLE", 21); // (.")
  _ex_CRS(); // !CRS
  } else
  {
  UNK_0xe746(); // UNK_0xe746
  }
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xea2c: WORD 'UNK_0xea2e' codep=0x224c parp=0xea2e
// ================================================

void UNK_0xea2e() // UNK_0xea2e
{
  Push(0x6638); // IFIELD(#BLASTOS)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) return;
  Push(-1);
  Push(0x6638); // IFIELD(#BLASTOS)
  _plus__ex__2(); // +!_2
  Push(0xafc8); Push(0x0000);
  UNK_0xe71e(); // UNK_0xe71e
  Push(0xcc32); // probable 'OV.PODS'
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  UNK_0xe750(); // UNK_0xe750
}


// ================================================
// 0xea50: WORD 'UNK_0xea52' codep=0x224c parp=0xea52
// ================================================

void UNK_0xea52() // UNK_0xea52
{
  Push(0x6637); // IFIELD(#JUMPOS)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) return;
  Push(-1);
  Push(0x6637); // IFIELD(#JUMPOS)
  _plus__ex__2(); // +!_2
  Push(0x1194); Push(0x0000);
  UNK_0xe71e(); // UNK_0xe71e
  Push(0xcc32); // probable 'OV.PODS'
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  UNK_0xe750(); // UNK_0xe750
}


// ================================================
// 0xea74: WORD 'UNK_0xea76' codep=0x1d29 parp=0xea76
// ================================================
// 0xea76: db 0xe8 0x03 0x90 0x01 0xc8 0x00 0x50 0x00 0x0a 0x00 0xe2 0x04 0xbc 0x02 0x40 0x01 0x78 0x00 0x28 0x00 0xfa 0x00 0x7d 0x00 0x3e 0x00 0x1f 0x00 0x0f 0x00 0xd0 0x07 0xb0 0x04 0x58 0x02 0x18 0x01 0x78 0x00 0xdc 0x05 0x84 0x03 0x1c 0x02 0xc8 0x00 0x50 0x00 '      P       @ x (   } >         X   x         P '

// ================================================
// 0xeaa8: WORD 'UNK_0xeaaa' codep=0x224c parp=0xeaaa
// ================================================

void UNK_0xeaaa() // UNK_0xeaaa
{
  Push(7);
  SetColor("BLACK");
  ROT(); // ROT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x007c);
  Push(Pop() + Pop()); // +
  Push(0x007d);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  Push(7);
  Push(Pop() & Pop()); // AND
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
  Push(Read16(regsp)); // DUP
  Push(6);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
  PRINT("PLASMA", 6); // (.")
  Pop(); // DROP
  } else
  {
  PRINT("CLASS ", 6); // (.")
  _dot_(); // .
  }
  return;
  }
  PRINT("NONE", 4); // (.")
}


// ================================================
// 0xeb05: WORD 'UNK_0xeb07' codep=0x224c parp=0xeb07
// ================================================

void UNK_0xeb07() // UNK_0xeb07
{
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(0x65f4); // IFIELD(UNK_0xe75f)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(4);
  UNK_0xeaaa(); // UNK_0xeaaa
  Push(0x65fa); // IFIELD(UNK_0xe76e)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  UNK_0xeaaa(); // UNK_0xeaaa
  Push(0x65f2); // IFIELD(UNK_0xe75a)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(2);
  UNK_0xeaaa(); // UNK_0xeaaa
  Push(0x65fc); // IFIELD(UNK_0xe773)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(1);
  UNK_0xeaaa(); // UNK_0xeaaa
  Push(0x65fe); // IFIELD(UNK_0xe778)
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0);
  UNK_0xeaaa(); // UNK_0xeaaa
  UNK_0xe888(); // UNK_0xe888
  _ex_CRS(); // !CRS
}


// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x00ae);
  POS_dot_(); // POS.
  Push(0x01f4);
  _dot_(); // .
}


// ================================================
// 0xeb59: WORD 'UNK_0xeb5b' codep=0x224c parp=0xeb5b
// ================================================

void UNK_0xeb5b() // UNK_0xeb5b
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x0072);
  POS_dot_(); // POS.
  Push(0xc350);
  U_dot_(); // U.
}


// ================================================
// 0xeb6f: WORD 'UNK_0xeb71' codep=0x224c parp=0xeb71
// ================================================

void UNK_0xeb71() // UNK_0xeb71
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x0068);
  POS_dot_(); // POS.
  Push(0x4e20);
  U_dot_(); // U.
}


// ================================================
// 0xeb85: WORD 'UNK_0xeb87' codep=0x224c parp=0xeb87
// ================================================

void UNK_0xeb87() // UNK_0xeb87
{
  signed short int i, imax;
  Push(Pop()-1); // 1-
  Push(5);
  Push(Pop() * Pop()); // *
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
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x002c);
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  Push(pp_UNK_0xea76); // UNK_0xea76
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x0064);
  M_star_(); // M*
  Push(6);
  D_dot_R(); // D.R
  i++;
  } while(i<imax); // (LOOP) 0xffd2

}


// ================================================
// 0xebc9: WORD 'UNK_0xebcb' codep=0x224c parp=0xebcb
// ================================================

void UNK_0xebcb() // UNK_0xebcb
{
  signed short int i, imax;
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(6);
  SetColor("BLACK");
  Push(0x002c);
  Push(i); // I
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x0036);
  POS_dot_PXT(); // POS.PXT
  i++;
  } while(i<imax); // (LOOP) 0xffe6

  Push(4);
  SetColor("BLACK");
  Push(0x00ae);
  Push(0x0037);
  POS_dot_PXT(); // POS.PXT
  Push(6);
  SetColor("BLACK");
  Push(0x0072);
  Push(0x0036);
  POS_dot_PXT(); // POS.PXT
  Push(6);
  SetColor("BLACK");
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
    UNK_0xeb45(); // UNK_0xeb45
    break;
  case 6:
    UNK_0xeb5b(); // UNK_0xeb5b
    break;
  case 7:
    UNK_0xeb71(); // UNK_0xeb71
    break;
  default:
    UNK_0xeb87(); // UNK_0xeb87
    break;

  }
}

// ================================================
// 0xec31: WORD 'UNK_0xec33' codep=0x224c parp=0xec33
// ================================================

void UNK_0xec33() // UNK_0xec33
{
  unsigned short int a;
  a = Pop(); // >R
  _at_CRS(); // @CRS
  Push(a); // R>
  CTINIT(); // CTINIT
  UNK_0xebcb(); // UNK_0xebcb
  Push(Read16(regsp)); // DUP
  _n__gt__dot_(); // #>. case
  _ex_CRS(); // !CRS
}


// ================================================
// 0xec45: WORD '(PARTADDR)' codep=0x4b3b parp=0xec54
// ================================================

void _ro_PARTADDR_rc_() // (PARTADDR)
{
  switch(Pop()) // (PARTADDR)
  {
  case 1:
    Push(0x65f4); // IFIELD(UNK_0xe75f)
    break;
  case 2:
    Push(0x65fa); // IFIELD(UNK_0xe76e)
    break;
  case 3:
    Push(0x65f2); // IFIELD(UNK_0xe75a)
    break;
  case 4:
    Push(0x65fc); // IFIELD(UNK_0xe773)
    break;
  default:
    Push(0x65fe); // IFIELD(UNK_0xe778)
    break;

  }
}

// ================================================
// 0xec68: WORD 'UNK_0xec6a' codep=0x224c parp=0xec6a
// ================================================

void UNK_0xec6a() // UNK_0xec6a
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
    Push(0x6611); // IFIELD(UNK_0xe787)
    break;
  case 3:
    Push(0x6613); // IFIELD(UNK_0xe78c)
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xec86: WORD 'UNK_0xec88' codep=0x224c parp=0xec88
// ================================================

void UNK_0xec88() // UNK_0xec88
{
  _ro_PTS_rc_(); // (PTS) case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
  _ex__2(); // !_2
  return;
  }
  Pop(); // DROP
}


// ================================================
// 0xec9a: WORD 'UNK_0xec9c' codep=0x1d29 parp=0xec9c
// ================================================
// 0xec9c: db 0x56 0x3a 0x20 0x70 'V: p'

// ================================================
// 0xeca0: WORD 'UNK_0xeca2' codep=0x224c parp=0xeca2
// ================================================

void UNK_0xeca2() // UNK_0xeca2
{
  UNK_0xec6a(); // UNK_0xec6a
  Push(Read16(regsp)); // DUP
  UNK_0xe7f0(); // UNK_0xe7f0
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
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x002c);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  SWAP(); // SWAP
  Push(Pop()-1); // 1-
  Push(0x000a);
  Push(Pop() * Pop()); // *
  OVER(); // OVER
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(5);
  SWAP(); // SWAP
  _dash_(); // -
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xea76); // UNK_0xea76
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  UNK_0xe7d4(); // UNK_0xe7d4
  Push(0x0069);
  _star__slash_(); // */
  Push(0x0064);
  U_star_(); // U*
  Push(0x0005); Push(0x0000);
  DMAX(); // DMAX
  _2DUP(); // 2DUP
  Push(pp_UNK_0xec9c); // UNK_0xec9c
  D_ex_(); // D!
  Push(6);
  D_dot_R(); // D.R
  return;
  }
  Pop(); // DROP
  Pop(); Pop();// 2DROP
  Push2Words("NULL");
  Push(pp_UNK_0xec9c); // UNK_0xec9c
  D_ex_(); // D!
}


// ================================================
// 0xed20: WORD 'UNK_0xed22' codep=0x224c parp=0xed22
// ================================================

void UNK_0xed22() // UNK_0xed22
{
  Pop(); // DROP
  Push(0x00ae);
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  Push(0x6600); // IFIELD(UNK_0xe77d)
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  _plus_BIT(); // +BIT
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(4);
  _dot_R(); // .R
}


// ================================================
// 0xed44: WORD 'UNK_0xed46' codep=0x224c parp=0xed46
// ================================================

void UNK_0xed46() // UNK_0xed46
{
  Pop(); // DROP
  Push(0x0072);
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(0x6638); // IFIELD(#BLASTOS)
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x1194);
  M_star_(); // M*
  Push(6);
  D_dot_R(); // D.R
  PRINT("0", 1); // (.")
}


// ================================================
// 0xed72: WORD 'UNK_0xed74' codep=0x224c parp=0xed74
// ================================================

void UNK_0xed74() // UNK_0xed74
{
  Pop(); // DROP
  Push(0x0068);
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  Push(0x6637); // IFIELD(#JUMPOS)
  Push(Read8(Pop())&0xFF); // C@
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
    UNK_0xed22(); // UNK_0xed22
    break;
  case 6:
    UNK_0xed46(); // UNK_0xed46
    break;
  case 7:
    UNK_0xed74(); // UNK_0xed74
    break;
  default:
    UNK_0xeca2(); // UNK_0xeca2
    break;

  }
}

// ================================================
// 0xedb0: WORD 'UNK_0xedb2' codep=0x224c parp=0xedb2
// ================================================

void UNK_0xedb2() // UNK_0xedb2
{
  unsigned short int a;
  a = Pop(); // >R
  _at_CRS(); // @CRS
  Push(a); // R>
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  UNK_0xebcb(); // UNK_0xebcb
  Push(0x0037);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  Push(Read16(regsp)); // DUP
  _n__gt_VALUE(); // #>VALUE case
  _ex_CRS(); // !CRS
}


// ================================================
// 0xedd0: WORD 'UNK_0xedd2' codep=0x224c parp=0xedd2
// ================================================

void UNK_0xedd2() // UNK_0xedd2
{
  UNK_0xec6a(); // UNK_0xec6a
  UNK_0xe7f0(); // UNK_0xe7f0
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xeddc: WORD 'UNK_0xedde' codep=0x224c parp=0xedde
// ================================================

void UNK_0xedde() // UNK_0xedde
{
  signed short int i, imax;
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  _st_(); // <
  Push(0x01f4); Push(0x0000);
  UNK_0xe714(); // UNK_0xe714
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
  Push(0xfe0c); Push(0xffff);
  UNK_0xe71e(); // UNK_0xe71e
  UNK_0xe750(); // UNK_0xe750
  Push(1);
  Push(0x0010);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(0x6600); // IFIELD(UNK_0xe77d)
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
  Push(0x6600); // IFIELD(UNK_0xe77d)
  _plus__ex__2(); // +!_2
  Push(0x01f4);
  Push(0x6624); // IFIELD(UNK_0xe791)
  _plus__ex__2(); // +!_2
  imax = i; // LEAVE
  } else
  {
  Push(Pop()*2); // 2*
  }
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Push(0xcc32); // probable 'OV.PODS'
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  return;
  }
  Push(1);
  _0MESS(); // 0MESS
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
  Push(1);
  Push(0x001b);
  CMESS(); // CMESS
  PRINT("NO POD BAYS AVAILABLE", 21); // (.")
  _ex_CRS(); // !CRS
  } else
  {
  UNK_0xe746(); // UNK_0xe746
  }
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xee78: WORD '#>BUY' codep=0x4b3b parp=0xee82
// ================================================

void _n__gt_BUY() // #>BUY
{
  switch(Pop()) // #>BUY
  {
  case 0:
    UNK_0xedde(); // UNK_0xedde
    break;
  case 6:
    UNK_0xe926(); // UNK_0xe926
    break;
  case 7:
    UNK_0xe9aa(); // UNK_0xe9aa
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xee92: WORD 'UNK_0xee94' codep=0x224c parp=0xee94
// ================================================

void UNK_0xee94() // UNK_0xee94
{
  unsigned short int a;
  Push(pp_UNK_0xea76); // UNK_0xea76
  Push(pp_UNK_0xe7ba); // UNK_0xe7ba
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(4);
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  U_star_(); // U*
  UNK_0xe714(); // UNK_0xe714
  if (Pop() != 0)
  {
  Push(0x0064);
  U_star_(); // U*
  DNEGATE(); // DNEGATE
  UNK_0xe71e(); // UNK_0xe71e
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xe7ba); // UNK_0xe7ba
  Push(Read16(Pop())); // @
  UNK_0xec6a(); // UNK_0xec6a
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0x0064);
  OVER(); // OVER
  C_ex__2(); // C!_2
  Push(Pop()+1); // 1+
  C_ex__2(); // C!_2
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xe7ba); // UNK_0xe7ba
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(a); // I
  Push(3);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
  Push(0x6613); // IFIELD(UNK_0xe78c)
  Push(Read16(Pop())); // @
  Push(0x00fa);
  MAX(); // MAX
  Push(0x6613); // IFIELD(UNK_0xe78c)
  _ex__2(); // !_2
  Push(Pop()>>1); // 2/
  Push(0x6613); // IFIELD(UNK_0xe78c)
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(0x65f2); // IFIELD(UNK_0xe75a)
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  _star__slash_(); // */
  Push(0x65f2); // IFIELD(UNK_0xe75a)
  Push(Pop()+1); // 1+
  C_ex__2(); // C!_2
  }
  Push(a); // R>
  UNK_0xec88(); // UNK_0xec88
  Push(0xcc44); // probable 'OV.SHIP'
  MODULE(); // MODULE
  UNK_0xeb07(); // UNK_0xeb07
  UNK_0xe750(); // UNK_0xe750
  Push(1);
  return;
  }
  Pop(); // DROP
  UNK_0xe746(); // UNK_0xe746
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(0);
}


// ================================================
// 0xef50: WORD 'UNK_0xef52' codep=0x224c parp=0xef52
// ================================================

void UNK_0xef52() // UNK_0xef52
{

  label6:
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
  Push(-1);
  Push(Pop() * Pop()); // *
  Push(pp_NCRS); // NCRS
  _plus__ex__2(); // +!_2
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Push(0);
  Push(5);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
  BLT(); // BLT
  Push(0x0056);
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_OCRS); // OCRS
  _ex__2(); // !_2
  Push(0x000a);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  BLT(); // BLT
  } else
  {
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(pp_NCRS); // NCRS
  _ex__2(); // !_2
  }
  Push(0);
  } else
  {
  Pop(); // DROP
  Push(1);
  }
  _ask_TRIG(); // ?TRIG
  if (Pop() != 0)
  {
  Pop(); // DROP
  UNK_0xee94(); // UNK_0xee94
  }
  if (Pop() == 0) goto label6;
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(pp_FQUIT); // FQUIT
  _099(); // 099
}


// ================================================
// 0xefca: WORD 'UNK_0xefcc' codep=0x224c parp=0xefcc
// ================================================

void UNK_0xefcc() // UNK_0xefcc
{
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe7ba); // UNK_0xe7ba
  _ex__2(); // !_2
  UNK_0xedd2(); // UNK_0xedd2
  if (Pop() != 0)
  {
  Push(1);
  _0MESS(); // 0MESS
  Push(1);
  Push(0x000e);
  CMESS(); // CMESS
  PRINT("DE-EQUIP FIRST", 14); // (.")
  _ex_CRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
  } else
  {
  _at_CRS(); // @CRS
  Push(0x000e);
  Push(0x0056);
  POS_dot_(); // POS.
  Push(0x001d);
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(pp_CRSCOLO); // CRSCOLO
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
  BLT(); // BLT
  UNK_0xef52(); // UNK_0xef52
  BLT(); // BLT
  _ex_CRS(); // !CRS
  }
  return;
  }
  _n__gt_BUY(); // #>BUY case
}


// ================================================
// 0xf045: WORD 'UNK_0xf047' codep=0x224c parp=0xf047
// ================================================

void UNK_0xf047() // UNK_0xf047
{
  signed short int i, imax;
  Push(0x6624); // IFIELD(UNK_0xe791)
  Push(Read16(Pop())); // @
  Push(0x01f3);
  _gt_(); // >
  Push(0x6600); // IFIELD(UNK_0xe77d)
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
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
  Push(0x6600); // IFIELD(UNK_0xe77d)
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(0x6624); // IFIELD(UNK_0xe791)
  Push(Read16(Pop())); // @
  Push(0x01f3);
  _gt_(); // >
  Push(Pop() * Pop()); // *
  if (Pop() != 0)
  {
  Push(i); // I
  BIT(); // BIT
  Push(-1);
  Push(Pop() * Pop()); // *
  Push(0x6600); // IFIELD(UNK_0xe77d)
  _plus__ex__2(); // +!_2
  Push(0x01f4); Push(0x0000);
  UNK_0xe71e(); // UNK_0xe71e
  Push(0xcc32); // probable 'OV.PODS'
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  UNK_0xe750(); // UNK_0xe750
  imax = i; // LEAVE
  Push(0xfe0c);
  Push(0x6624); // IFIELD(UNK_0xe791)
  _plus__ex__2(); // +!_2
  }
  Push(-1);
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xffba

  return;
  }
  Push(0x6600); // IFIELD(UNK_0xe77d)
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(1);
  _0MESS(); // 0MESS
  Push(1);
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("POD IS NOT EMPTY", 16); // (.")
  _ex_CRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xf0de: WORD '#>SELL' codep=0x4b3b parp=0xf0e9
// ================================================

void _n__gt_SELL() // #>SELL
{
  switch(Pop()) // #>SELL
  {
  case 0:
    UNK_0xf047(); // UNK_0xf047
    break;
  case 6:
    UNK_0xea2e(); // UNK_0xea2e
    break;
  case 7:
    UNK_0xea52(); // UNK_0xea52
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf0f9: WORD 'UNK_0xf0fb' codep=0x224c parp=0xf0fb
// ================================================

void UNK_0xf0fb() // UNK_0xf0fb
{
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
  Push(pp_UNK_0xec9c); // UNK_0xec9c
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
  UNK_0xec6a(); // UNK_0xec6a
  Push(Read16(regsp)); // DUP
  Push(0x65f2); // IFIELD(UNK_0xe75a)
  Push((Pop()==Pop())?1:0); // =
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  _ex__2(); // !_2
  Pop(); // DROP
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(3);
  Push((Pop()==Pop())?1:0); // =
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  Push(0x6613); // IFIELD(UNK_0xe78c)
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xec88(); // UNK_0xec88
  Push(pp_UNK_0xec9c); // UNK_0xec9c
  _2_at_(); // 2@
  UNK_0xe71e(); // UNK_0xe71e
  Push(0xcc44); // probable 'OV.SHIP'
  MODULE(); // MODULE
  UNK_0xeb07(); // UNK_0xeb07
  UNK_0xe750(); // UNK_0xe750
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xedb2(); // UNK_0xedb2
  } else
  {
  Pop(); // DROP
  }
  return;
  }
  _n__gt_SELL(); // #>SELL case
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xedb2(); // UNK_0xedb2
}


// ================================================
// 0xf16d: WORD 'UNK_0xf16f' codep=0x1d29 parp=0xf16f
// ================================================
// 0xf16f: db 0x3a 0x20 ': '

// ================================================
// 0xf171: WORD 'UNK_0xf173' codep=0x224c parp=0xf173
// ================================================

void UNK_0xf173() // UNK_0xf173
{
  UNK_0xe732(); // UNK_0xe732
  SetColor("BLUE");
  UNK_0xe826(); // UNK_0xe826
  _at_CRS(); // @CRS
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_UNK_0xe903); // UNK_0xe903
  BLD_dash_CRS(); // BLD-CRS
  Push(0);
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
  UNK_0xec33(); // UNK_0xec33
  } else
  {
  UNK_0xedb2(); // UNK_0xedb2
  }

  label2:
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
  Push(-1);
  Push(Pop() * Pop()); // *
  Push(pp_NCRS); // NCRS
  _plus__ex__2(); // +!_2
  Push(pp_UNK_0xe903); // UNK_0xe903
  SET_dash_CRS(); // SET-CRS
  if (Pop() != 0)
  {
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
  UNK_0xec33(); // UNK_0xec33
  } else
  {
  UNK_0xedb2(); // UNK_0xedb2
  }
  }
  _ask_TRIG(); // ?TRIG
  if (Pop() != 0)
  {
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
  UNK_0xefcc(); // UNK_0xefcc
  } else
  {
  UNK_0xf0fb(); // UNK_0xf0fb
  }
  }
  } else
  {
  Pop(); // DROP
  }
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) goto label2;
  _gt_1FONT(); // >1FONT
  UNK_0xebcb(); // UNK_0xebcb
  SetColor("BLACK");
  UNK_0xe826(); // UNK_0xe826
  Push(pp_UNK_0xe903); // UNK_0xe903
  BLD_dash_CRS(); // BLD-CRS
  _ex_CRS(); // !CRS
  Push(1);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1fb: WORD 'UNK_0xf1fd' codep=0x224c parp=0xf1fd
// ================================================

void UNK_0xf1fd() // UNK_0xf1fd
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  _ro_PARTADDR_rc_(); // (PARTADDR) case
  UNK_0xe7f0(); // UNK_0xe7f0
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
  Push(0x000a);
  SWAP(); // SWAP
  Push(Pop()*2); // 2*
  _dash_(); // -
  Push(pp_UNK_0xea76); // UNK_0xea76
  Push(Pop() + Pop()); // +
  Push(a); // I
  Push(Pop()-1); // 1-
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(a); // I
  _ro_PARTADDR_rc_(); // (PARTADDR) case
  UNK_0xe7d4(); // UNK_0xe7d4
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
// 0xf24b: WORD 'UNK_0xf24d' codep=0x224c parp=0xf24d
// ================================================

void UNK_0xf24d() // UNK_0xf24d
{
  signed short int i, imax;
  Push2Words("NULL");
  Push(6);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf1fd(); // UNK_0xf1fd
  D_plus_(); // D+
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  Push(3);
  UNK_0xf1fd(); // UNK_0xf1fd
  D_dash_(); // D-
  Push(0x0064);
  Push(0x65f2); // IFIELD(UNK_0xe75a)
  UNK_0xe7d4(); // UNK_0xe7d4
  _dash_(); // -
  Push(0x003c);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x00c8);
  Push(0x65f6); // IFIELD(UNK_0xe764)
  UNK_0xe7d4(); // UNK_0xe7d4
  Push(0x65f8); // IFIELD(UNK_0xe769)
  UNK_0xe7d4(); // UNK_0xe7d4
  Push(Pop() + Pop()); // +
  _dash_(); // -
  Push(0x0019);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x65f2); // IFIELD(UNK_0xe75a)
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(Pop()+1); // 1+
  Push(0x003c);
  Push(Pop() * Pop()); // *
  Push(0x6613); // IFIELD(UNK_0xe78c)
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(2);
  U_star_(); // U*
  D_plus_(); // D+
}


// ================================================
// 0xf2ad: WORD 'UNK_0xf2af' codep=0x224c parp=0xf2af
// ================================================

void UNK_0xf2af() // UNK_0xf2af
{
  unsigned short int a;
  unsigned short int b;
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
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf2ea: WORD 'UNK_0xf2ec' codep=0x224c parp=0xf2ec
// ================================================

void UNK_0xf2ec() // UNK_0xf2ec
{
  UNK_0xf2af(); // UNK_0xf2af
  Push(1);
  Push(0x0021);
  CMESS(); // CMESS
  PRINT("SHALL WE REPAIR THE SHIP\?  [N Y]", 32); // (.")
  _ex_CRS(); // !CRS
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf31f: WORD 'UNK_0xf321' codep=0x224c parp=0xf321
// ================================================

void UNK_0xf321() // UNK_0xf321
{
  signed short int i, imax;
  unsigned short int a;
  DNEGATE(); // DNEGATE
  UNK_0xe71e(); // UNK_0xe71e
  Push(0x660a); // IFIELD(UNK_0xe782)
  Push(7);
  Push(0);
  FILL_2(); // FILL_2
  Push(pp__ask_REPAIR); // ?REPAIR
  _099(); // 099
  Push(0x000e);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0x65f2); // IFIELD(UNK_0xe75a)
  Push(i); // I
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(a); // I
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(a); // I
  Push(Pop()+1); // 1+
  C_ex__2(); // C!_2
  Push(0x0064);
  Push(a); // R>
  C_ex__2(); // C!_2
  Push(2);
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xffe2

  Push(0x65f2); // IFIELD(UNK_0xe75a)
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(Pop()+1); // 1+
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  Push(0x6613); // IFIELD(UNK_0xe78c)
  _ex__2(); // !_2
}


// ================================================
// 0xf36b: WORD 'UNK_0xf36d' codep=0x224c parp=0xf36d
// ================================================

void UNK_0xf36d() // UNK_0xf36d
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  UNK_0xf24d(); // UNK_0xf24d
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
  _2DUP(); // 2DUP
  UNK_0xe714(); // UNK_0xe714
  if (Pop() != 0)
  {
  _2DUP(); // 2DUP
  UNK_0xf2ec(); // UNK_0xf2ec
  if (Pop() != 0)
  {
  UNK_0xf321(); // UNK_0xf321
  } else
  {
  Pop(); Pop();// 2DROP
  }
  } else
  {
  UNK_0xf2af(); // UNK_0xf2af
  Push(1);
  Push(0x0012);
  CMESS(); // CMESS
  UNK_0xe73c(); // UNK_0xe73c
  _ex_CRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866
  }
  } else
  {
  Pop(); Pop();// 2DROP
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  PRINT("NO REPAIRS ARE NEEDED", 21); // (.")
  _ex_CRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866
  }
  Push(1);
  _0MESS(); // 0MESS
  UNK_0xe750(); // UNK_0xe750
}


// ================================================
// 0xf3dd: WORD 'UNK_0xf3df' codep=0x224c parp=0xf3df
// ================================================

void UNK_0xf3df() // UNK_0xf3df
{
  PRINT("TYPE", 4); // (.")
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("SHIP NAME: ISS ", 15); // (.")
}


// ================================================
// 0xf3fc: WORD 'UNK_0xf3fe' codep=0x224c parp=0xf3fe
// ================================================

void UNK_0xf3fe() // UNK_0xf3fe
{
  Push(0);
  SWAP(); // SWAP
  CMESS(); // CMESS
  PRINT("SHIP IS NAMED: ISS ", 19); // (.")
  Push(0x6615); // IFIELD(%NAME)
  _do__dot_(); // $.
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf422: WORD 'UNK_0xf424' codep=0x224c parp=0xf424
// ================================================

void UNK_0xf424() // UNK_0xf424
{
  Push(pp__dash_AIN); // -AIN
  _099(); // 099
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  Push(0x6615); // IFIELD(%NAME)
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
  Push(0x0013);
  Push(Pop() + Pop()); // +
  UNK_0xf3fe(); // UNK_0xf3fe
  Push(1);
  Push(0x0026);
  CMESS(); // CMESS

  UNK_0x3f09(" NEW ");
  } else
  {
  Push(0);
  Push(0x0022);
  CMESS(); // CMESS

  UNK_0x3f09(" ");
  }
  UNK_0xf3df(); // UNK_0xf3df
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(pp__dash_AIN); // -AIN
  _099(); // 099
  Push(0x000d);
  UNK_0xe728(); // UNK_0xe728
  Push(0x6615); // IFIELD(%NAME)
  _do__ex_(); // $!
  _ex_CRS(); // !CRS
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  Push(0x6615); // IFIELD(%NAME)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0013);
  Push(Pop() + Pop()); // +
  UNK_0xf3fe(); // UNK_0xf3fe
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe750(); // UNK_0xe750
}


// ================================================
// 0xf492: WORD 'UNK_0xf494' codep=0x224c parp=0xf494
// ================================================

void UNK_0xf494() // UNK_0xf494
{
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  ON_2(); // ON_2
  UNK_0xf173(); // UNK_0xf173
}


// ================================================
// 0xf49c: WORD 'UNK_0xf49e' codep=0x224c parp=0xf49e
// ================================================

void UNK_0xf49e() // UNK_0xf49e
{
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  _099(); // 099
  UNK_0xf173(); // UNK_0xf173
}


// ================================================
// 0xf4a6: WORD 'CONFIG-FUNCTION' codep=0x4b3b parp=0xf4ba
// ================================================

void CONFIG_dash_FUNCTION() // CONFIG-FUNCTION
{
  switch(Pop()) // CONFIG-FUNCTION
  {
  case 0:
    UNK_0xf494(); // UNK_0xf494
    break;
  case 1:
    UNK_0xf49e(); // UNK_0xf49e
    break;
  case 2:
    UNK_0xf36d(); // UNK_0xf36d
    break;
  case 3:
    UNK_0xf424(); // UNK_0xf424
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
  Push(0xc8c3); // probable '?FRE'
  MODULE(); // MODULE
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe6f6(); // UNK_0xe6f6
  SetColor("WHITE");
  SetColor("GREY1");
  SetColor("DK-GREE");
  _ask_MRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  _ex__2(); // !_2
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_NCRS); // NCRS
  _099(); // 099
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0xcc68); // probable 'OV.CONF'
  MODULE(); // MODULE
  UNK_0xeb07(); // UNK_0xeb07
  Push(pp_UNK_0xe8ec); // UNK_0xe8ec
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES

  label3:
  XYSCAN(); // XYSCAN
  Push(pp_NCRS); // NCRS
  _plus__ex__2(); // +!_2
  Pop(); // DROP
  Push(pp_UNK_0xe8ec); // UNK_0xe8ec
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
  _ask_TRIG(); // ?TRIG
  if (Pop() != 0)
  {
  Push(0);
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  CONFIG_dash_FUNCTION(); // CONFIG-FUNCTION case
  } else
  {
  Push(0);
  }
  if (Pop() == 0) goto label3;
  Push(1);
  UNK_0xe700(); // UNK_0xe700
  ICLOSE(); // ICLOSE
}

// 0xf543: db 0x43 0x4f 0x4e 0x46 0x49 0x47 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CONFIG-______________________ '
  