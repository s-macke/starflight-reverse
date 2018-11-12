// ====== OVERLAY 'OP-OV' ======
// store offset = 0xe430
// overlay size   = 0x1130

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE446  codep:0x1d29 wordp:0xe446 size:0x0002 C-string:'WE446'
//           WE44A  codep:0x224c wordp:0xe44a size:0x0006 C-string:'WE44A'
//           WE452  codep:0x744d wordp:0xe452 size:0x0003 C-string:'WE452'
//           WE457  codep:0x744d wordp:0xe457 size:0x0003 C-string:'WE457'
//           WE45C  codep:0x744d wordp:0xe45c size:0x0003 C-string:'WE45C'
//           WE461  codep:0x744d wordp:0xe461 size:0x0003 C-string:'WE461'
//           WE466  codep:0x744d wordp:0xe466 size:0x0003 C-string:'WE466'
//           WE46B  codep:0x744d wordp:0xe46b size:0x0003 C-string:'WE46B'
//           WE470  codep:0x744d wordp:0xe470 size:0x0003 C-string:'WE470'
//           WE475  codep:0x744d wordp:0xe475 size:0x0003 C-string:'WE475'
//           WE47A  codep:0x224c wordp:0xe47a size:0x0008 C-string:'WE47A'
//           WE484  codep:0x224c wordp:0xe484 size:0x000e C-string:'WE484'
//           WE494  codep:0x224c wordp:0xe494 size:0x0010 C-string:'WE494'
//           WE4A6  codep:0x1d29 wordp:0xe4a6 size:0x003a C-string:'WE4A6'
//           WE4E2  codep:0x224c wordp:0xe4e2 size:0x002a C-string:'WE4E2'
//           WE50E  codep:0x224c wordp:0xe50e size:0x007c C-string:'WE50E'
//           WE58C  codep:0x1d29 wordp:0xe58c size:0x000d C-string:'WE58C'
//           WE59B  codep:0x224c wordp:0xe59b size:0x005a C-string:'WE59B'
//           WE5F7  codep:0x224c wordp:0xe5f7 size:0x003e C-string:'WE5F7'
//           WE637  codep:0x224c wordp:0xe637 size:0x002c C-string:'WE637'
//           WE665  codep:0x224c wordp:0xe665 size:0x006c C-string:'WE665'
//           WE6D3  codep:0x224c wordp:0xe6d3 size:0x0060 C-string:'WE6D3'
//           WE735  codep:0x224c wordp:0xe735 size:0x0054 C-string:'WE735'
//           WE78B  codep:0x224c wordp:0xe78b size:0x003d C-string:'WE78B'
//           WE7CA  codep:0x224c wordp:0xe7ca size:0x0050 C-string:'WE7CA'
//           WE81C  codep:0x224c wordp:0xe81c size:0x0024 C-string:'WE81C'
//           WE842  codep:0x224c wordp:0xe842 size:0x000e C-string:'WE842'
//           WE852  codep:0x1d29 wordp:0xe852 size:0x0002 C-string:'WE852'
//           WE856  codep:0x224c wordp:0xe856 size:0x000e C-string:'WE856'
//           WE866  codep:0x224c wordp:0xe866 size:0x0022 C-string:'WE866'
//           WE88A  codep:0x224c wordp:0xe88a size:0x002a C-string:'WE88A'
//           WE8B6  codep:0x224c wordp:0xe8b6 size:0x001c C-string:'WE8B6'
//           WE8D4  codep:0x224c wordp:0xe8d4 size:0x0028 C-string:'WE8D4'
//           WE8FE  codep:0x1d29 wordp:0xe8fe size:0x0002 C-string:'WE8FE'
//           WE902  codep:0x224c wordp:0xe902 size:0x000e C-string:'WE902'
//           WE912  codep:0x224c wordp:0xe912 size:0x00ce C-string:'WE912'
//           WE9E2  codep:0x224c wordp:0xe9e2 size:0x0018 C-string:'WE9E2'
//           WE9FC  codep:0x224c wordp:0xe9fc size:0x0010 C-string:'WE9FC'
//       (NOTICES)  codep:0x4a4f wordp:0xea1a size:0x000c C-string:'_ro_NOTICES_rc_'
//           WEA28  codep:0x224c wordp:0xea28 size:0x00df C-string:'WEA28'
//           WEB09  codep:0x224c wordp:0xeb09 size:0x00b6 C-string:'WEB09'
//           WEBC1  codep:0x224c wordp:0xebc1 size:0x006d C-string:'WEBC1'
//           WEC30  codep:0x224c wordp:0xec30 size:0x002e C-string:'WEC30'
//           WEC60  codep:0x224c wordp:0xec60 size:0x0012 C-string:'WEC60'
//           WEC74  codep:0x224c wordp:0xec74 size:0x0012 C-string:'WEC74'
//           WEC88  codep:0x224c wordp:0xec88 size:0x0016 C-string:'WEC88'
//           WECA0  codep:0x224c wordp:0xeca0 size:0x0014 C-string:'WECA0'
//           WECB6  codep:0x224c wordp:0xecb6 size:0x0014 C-string:'WECB6'
//           WECCC  codep:0x224c wordp:0xeccc size:0x0013 C-string:'WECCC'
//      (BAD-PLAN)  codep:0x4a4f wordp:0xecee size:0x001c C-string:'_ro_BAD_dash_PLAN_rc_'
//           WED0C  codep:0x224c wordp:0xed0c size:0x010b C-string:'WED0C'
//           WEE19  codep:0x224c wordp:0xee19 size:0x003a C-string:'WEE19'
//           WEE55  codep:0x224c wordp:0xee55 size:0x0035 C-string:'WEE55'
//           WEE8C  codep:0x224c wordp:0xee8c size:0x0055 C-string:'WEE8C'
//           WEEE3  codep:0x224c wordp:0xeee3 size:0x0052 C-string:'WEEE3'
//           WEF37  codep:0x224c wordp:0xef37 size:0x0083 C-string:'WEF37'
//           WEFBC  codep:0x224c wordp:0xefbc size:0x003a C-string:'WEFBC'
//           WEFF8  codep:0x224c wordp:0xeff8 size:0x0031 C-string:'WEFF8'
//           WF02B  codep:0x224c wordp:0xf02b size:0x0018 C-string:'WF02B'
//           WF045  codep:0x224c wordp:0xf045 size:0x00e5 C-string:'WF045'
//           WF12C  codep:0x224c wordp:0xf12c size:0x0146 C-string:'WF12C'
//           WF274  codep:0x224c wordp:0xf274 size:0x01da C-string:'WF274'
//           WF450  codep:0x224c wordp:0xf450 size:0x0028 C-string:'WF450'
//           WF47A  codep:0x224c wordp:0xf47a size:0x005a C-string:'WF47A'
//         OP-CASE  codep:0x4a4f wordp:0xf4e0 size:0x0010 C-string:'OP_dash_CASE'
//          (U-OP)  codep:0x224c wordp:0xf4fb size:0x0000 C-string:'_ro_U_dash_OP_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc__star_MAPSCALE; // *MAPSCALE
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_IsEVAL; // ?EVAL
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_IsRECALL; // ?RECALL
extern const unsigned short int pp_WMSG; // WMSG
extern const unsigned short int pp_CTX; // CTX
extern const unsigned short int pp_CTY; // CTY
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp_Is_gt_OP; // ?>OP
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_TOWFINE; // TOWFINE
extern const unsigned short int pp_LSCAN; // LSCAN
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color BROWN; // BROWN
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void COUNT(); // COUNT
void M_star_(); // M*
void MAX(); // MAX
void _n__gt_(); // #>
void _n_S(); // #S
void _st__n_(); // <#
void PAD(); // PAD
void Draw(); // .
void DrawR(); // .R
void Is(); // ?
void D_dot_(); // D.
void SPACE(); // SPACE
void MS(); // MS
void NOP(); // NOP
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_gt_(); // D>
void DMAX(); // DMAX
void KEY_2(); // KEY_2
void BIT(); // BIT
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void ON_3(); // ON_3
void OFF(); // OFF
void CDROP(); // CDROP
void IsCHILD(); // ?CHILD
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void ILAST(); // ILAST
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void _gt_DISPLAY(); // >DISPLAY
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SCR(); // SAVE-SCR
void SCR_dash_RES(); // SCR-RES
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _gt_3FONT(); // >3FONT
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void SFILL(); // SFILL
void _gt_SND(); // >SND
void StoreCRS(); // !CRS
void IsMRC(); // ?MRC
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsQUIT(); // ?QUIT
void Y_slash_N(); // Y/N
void BLD_dash_CRS(); // BLD-CRS
void SET_dash_CRS(); // SET-CRS
void CMESS(); // CMESS
void X0MESS(); // X0MESS
void DATE_do__gt_ADR(); // DATE$>ADR
void HUFF_gt_(); // HUFF>
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void DNEGATE(); // DNEGATE
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _plus_BIT(); // +BIT
void LLINE(); // LLINE
void LCOPYBLK(); // LCOPYBLK


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE446 = 0xe446; // WE446 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE4A6 = 0xe4a6; // WE4A6 size: 58
// {0x41, 0x9d, 0x61, 0x9d, 0x6f, 0x8f, 0x6f, 0x79, 0x64, 0x79, 0x64, 0x87, 0x60, 0x8b, 0x58, 0x8b, 0x58, 0x5d, 0x60, 0x5d, 0x64, 0x61, 0x64, 0x6f, 0x6f, 0x6f, 0x6f, 0x58, 0x61, 0x4a, 0x41, 0x4a, 0x33, 0x58, 0x33, 0x6f, 0x3e, 0x6f, 0x3e, 0x61, 0x42, 0x5d, 0x4a, 0x5d, 0x4a, 0x8b, 0x42, 0x8b, 0x3e, 0x87, 0x3e, 0x79, 0x33, 0x79, 0x33, 0x8f, 0x41, 0x9d}

const unsigned short int pp_WE58C = 0xe58c; // WE58C size: 13
// {0x02, 0x0a, 0x02, 0x09, 0x34, 0x0a, 0x37, 0x09, 0x40, 0x0a, 0x78, 0x09, 0x26}

const unsigned short int pp_WE852 = 0xe852; // WE852 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE8FE = 0xe8fe; // WE8FE size: 2
// {0xff, 0xff}




// 0xe442: db 0x11 0x01 '  '

// ================================================
// 0xe444: WORD 'WE446' codep=0x1d29 wordp=0xe446
// ================================================
// 0xe446: db 0x3a 0x20 ': '

// ================================================
// 0xe448: WORD 'WE44A' codep=0x224c wordp=0xe44a params=0 returns=1
// ================================================

void WE44A() // WE44A
{
  Push(Read16(pp_WE446)); // WE446 @
}


// ================================================
// 0xe450: WORD 'WE452' codep=0x744d wordp=0xe452
// ================================================
IFieldType WE452 = {NOTICEIDX, 0x0a, 0x02};

// ================================================
// 0xe455: WORD 'WE457' codep=0x744d wordp=0xe457
// ================================================
IFieldType WE457 = {STRINGIDX, 0x0b, 0xff};

// ================================================
// 0xe45a: WORD 'WE45C' codep=0x744d wordp=0xe45c
// ================================================
IFieldType WE45C = {EVALUATIONIDX, 0x0a, 0x01};

// ================================================
// 0xe45f: WORD 'WE461' codep=0x744d wordp=0xe461
// ================================================
IFieldType WE461 = {EVALUATIONIDX, 0x0b, 0x02};

// ================================================
// 0xe464: WORD 'WE466' codep=0x744d wordp=0xe466
// ================================================
IFieldType WE466 = {EVALUATIONIDX, 0x11, 0x02};

// ================================================
// 0xe469: WORD 'WE46B' codep=0x744d wordp=0xe46b
// ================================================
IFieldType WE46B = {EVALUATIONIDX, 0x13, 0x01};

// ================================================
// 0xe46e: WORD 'WE470' codep=0x744d wordp=0xe470
// ================================================
IFieldType WE470 = {EVALUATIONIDX, 0x14, 0x01};

// ================================================
// 0xe473: WORD 'WE475' codep=0x744d wordp=0xe475
// ================================================
IFieldType WE475 = {EVALUATIONIDX, 0x15, 0x0f};

// ================================================
// 0xe478: WORD 'WE47A' codep=0x224c wordp=0xe47a params=0 returns=0
// ================================================
// orphan

void WE47A() // WE47A
{
  Push(0xbd70); // 'OVQUITMESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe482: WORD 'WE484' codep=0x224c wordp=0xe484 params=0 returns=0
// ================================================

void WE484() // WE484
{
  Push(0);
  WE44A(); // WE44A
  X0MESS(); // X0MESS
  Push(1);
  WE44A(); // WE44A
  X0MESS(); // X0MESS
}


// ================================================
// 0xe492: WORD 'WE494' codep=0x224c wordp=0xe494 params=5 returns=0
// ================================================

void WE494() // WE494
{
  unsigned short int i, imax;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    _2OVER(); // 2OVER
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe4a4: WORD 'WE4A6' codep=0x1d29 wordp=0xe4a6
// ================================================
// 0xe4a6: db 0x41 0x9d 0x61 0x9d 0x6f 0x8f 0x6f 0x79 0x64 0x79 0x64 0x87 0x60 0x8b 0x58 0x8b 0x58 0x5d 0x60 0x5d 0x64 0x61 0x64 0x6f 0x6f 0x6f 0x6f 0x58 0x61 0x4a 0x41 0x4a 0x33 0x58 0x33 0x6f 0x3e 0x6f 0x3e 0x61 0x42 0x5d 0x4a 0x5d 0x4a 0x8b 0x42 0x8b 0x3e 0x87 0x3e 0x79 0x33 0x79 0x33 0x8f 0x41 0x9d 'A a o oydyd ` X X]`]dadooooXaJAJ3X3o>o>aB]J]J B > >y3y3 A '

// ================================================
// 0xe4e0: WORD 'WE4E2' codep=0x224c wordp=0xe4e2 params=2 returns=0
// ================================================

void WE4E2() // WE4E2
{
  unsigned short int i, imax;
  GetColor(BROWN);
  StoreCOLOR(); // !COLOR
  Push(pp_WE4A6); // WE4A6
  Push(0x003a);
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(i)&0xFF); // I C@
    Push(Read16(i + 1)&0xFF); // I 1+ C@
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(0x001c);
  WE494(); // WE494
}


// ================================================
// 0xe50c: WORD 'WE50E' codep=0x224c wordp=0xe50e params=2 returns=0
// ================================================

void WE50E() // WE50E
{
  GetColor(WHITE);
  GetColor(WHITE);
  GetColor(LT_dash_BLUE);
  IsMRC(); // ?MRC
  Push(Read16(regsp)); // DUP
  Push(pp_WE446); // WE446
  Store_3(); // !_3
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(2);
  Push(1);
  Push(0x009d);
  Push(1);
  LLINE(); // LLINE
  Push(2);
  Push(0x000b);
  Push(0x009d);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2);
  Push(0x00c6);
  Push(0x009d);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(1);
  Push(0x00c6);
  Push(1);
  Push(1);
  LLINE(); // LLINE
  Push(0x009e);
  Push(0x00c6);
  OVER(); // OVER
  Push(1);
  LLINE(); // LLINE
  Push(0x0036);
  Push(2);
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x0077);
  Push(2);
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  WE4E2(); // WE4E2
}


// ================================================
// 0xe58a: WORD 'WE58C' codep=0x1d29 wordp=0xe58c
// ================================================
// 0xe58c: db 0x02 0x0a 0x02 0x09 0x34 0x0a 0x37 0x09 0x40 0x0a 0x78 0x09 0x26 '    4 7 @ x &'

// ================================================
// 0xe599: WORD 'WE59B' codep=0x224c wordp=0xe59b params=0 returns=0
// ================================================

void WE59B() // WE59B
{
  _gt_3FONT(); // >3FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x003a);
  Push(0x00b3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  PRINT("INTERSTEL", 9); // (.")
  _gt_2FONT(); // >2FONT
  Push(0x0036);
  Push(0x003c);
  POS_dot_(); // POS.
  PRINT("OPERATIONS", 10); // (.")
  _gt_1FONT(); // >1FONT
  Push(0x0031);
  Push(0x0028);
  POS_dot_(); // POS.
  PRINT("ORBITAL DIVISION", 16); // (.")
}


// ================================================
// 0xe5f5: WORD 'WE5F7' codep=0x224c wordp=0xe5f7 params=0 returns=0
// ================================================

void WE5F7() // WE5F7
{
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x000d);
  Push(8);
  POS_dot_(); // POS.
  PRINT("NOTICES", 7); // (.")
  Push(0x0042);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("EVALUATION", 10); // (.")
  Push(0x0083);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe635: WORD 'WE637' codep=0x224c wordp=0xe637 params=2 returns=0
// ================================================

void WE637() // WE637
{
  _gt_HIDDEN(); // >HIDDEN
  WE50E(); // WE50E
  WE5F7(); // WE5F7
  WE59B(); // WE59B
  GetColor(WHITE);
  GetColor(BLUE);
  GetColor(BLUE);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_3(); // !_3
  Push(Read16(pp_Is_gt_OP)); // ?>OP @
  Push(Read16(regsp)); // DUP
  Push(pp_NCRS); // NCRS
  Store_3(); // !_3
  Push(pp_OCRS); // OCRS
  Store_3(); // !_3
  Push(pp_WE58C); // WE58C
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xe663: WORD 'WE665' codep=0x224c wordp=0xe665 params=0 returns=0
// ================================================

void WE665() // WE665
{
  WE484(); // WE484
  Push(0);
  Push(0x0023);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("\\ NEXT MESSAGE  PREVIOUS MESSAGE ^", 34); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0025);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS SPACEBAR TO REPLAY OR [ QUIT ]", 36); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe6d1: WORD 'WE6D3' codep=0x224c wordp=0xe6d3 params=0 returns=0
// ================================================

void WE6D3() // WE6D3
{
  WE484(); // WE484
  Push(0);
  Push(0x001a);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS SPACEBAR TO CONTINUE", 26); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0021);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS [] TO ABORT CURRENT NOTICE", 32); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe733: WORD 'WE735' codep=0x224c wordp=0xe735 params=0 returns=2
// ================================================

void WE735() // WE735
{
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  Push(0x00c5);
  Push(2);
  Push(0x000c);
  Push(0x009d);
  WE44A(); // WE44A
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  _gt_2FONT(); // >2FONT
  Push(3);
  Push(0x00c3);
  POS_dot_(); // POS.
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  PRINT("NOTICES", 7); // (.")
  _gt_1FONT(); // >1FONT
  Push(0x002d);
  Push(0x00c1);
  POS_dot_(); // POS.
  Push(Read16(pp_STARDATE)); // STARDATE @
  PAD(); // PAD
  DATE_do__gt_ADR(); // DATE$>ADR
  PAD(); // PAD
  Push(0x000a);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xe789: WORD 'WE78B' codep=0x224c wordp=0xe78b params=0 returns=0
// ================================================

void WE78B() // WE78B
{
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  Push(0x00c5);
  Push(3);
  Push(0x000c);
  Push(0x009c);
  WE44A(); // WE44A
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  _gt_2FONT(); // >2FONT
  Push(3);
  Push(0x00c3);
  POS_dot_(); // POS.
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  PRINT("EVALUATION", 10); // (.")
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe7c8: WORD 'WE7CA' codep=0x224c wordp=0xe7ca params=2 returns=4
// ================================================

void WE7CA() // WE7CA
{
  unsigned short int i, imax;
  _2DUP(); // 2DUP
  Push(Pop() + 1); //  1+
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0);
  ROT(); // ROT
  ROT(); // ROT

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(((Read16(i)&0xFF)==Read16(cc_BL)?1:0) | (i + 1==imax?1:0)); // I C@ BL = I 1+ I' = OR
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(i); // I
      Push(3);
      PICK(); // PICK
      _dash_(); // -
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(regsp)); // DUP
  Push(4);
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  Push(3);
  PICK(); // PICK
  _dash_(); // -
  Push(Pop() - 1); //  1-
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe81a: WORD 'WE81C' codep=0x224c wordp=0xe81c params=2 returns=0
// ================================================

void WE81C() // WE81C
{
  _2DUP(); // 2DUP
  Push(pp_CTY); // CTY
  Store_3(); // !_3
  Push(pp_CTX); // CTX
  Store_3(); // !_3
  SWAP(); // SWAP
  Push(Pop() * 4 + 4); //  4 * 4 +
  Push(0x00b4);
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe840: WORD 'WE842' codep=0x224c wordp=0xe842 params=0 returns=0
// ================================================

void WE842() // WE842
{
  Push(0);
  Push(1 + Read16(pp_CTY)); // 1 CTY @ +
  WE81C(); // WE81C
}


// ================================================
// 0xe850: WORD 'WE852' codep=0x1d29 wordp=0xe852
// ================================================
// 0xe852: db 0x3a 0x20 ': '

// ================================================
// 0xe854: WORD 'WE856' codep=0x224c wordp=0xe856 params=1 returns=1
// ================================================

void WE856() // WE856
{
  Push(Pop() + Read16(pp_CTX)); //  CTX @ +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe864: WORD 'WE866' codep=0x224c wordp=0xe866 params=0 returns=0
// ================================================

void WE866() // WE866
{
  unsigned short int i, imax;

  i = 0;
  imax = 7;
  do // (DO)
  {
    Push(0);
    Push(0x00b4);
    Push(0x00a0);
    Push(0x001a);
    Push(0);
    Push(0x00b5);
    LCOPYBLK(); // LCOPYBLK
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe888: WORD 'WE88A' codep=0x224c wordp=0xe88a params=2 returns=0
// ================================================

void WE88A() // WE88A
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    WE856(); // WE856
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      WE866(); // WE866
      Push(0);
      Push(0x0015);
      WE81C(); // WE81C
    }
    Push(Read16(regsp)); // DUP
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xe8b4: WORD 'WE8B6' codep=0x224c wordp=0xe8b6 params=0 returns=0
// ================================================

void WE8B6() // WE8B6
{
  Push(Read16(pp_COLOR)); // COLOR @
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(1);
  Push(0x001d);
  Push(0x009e);
  Push(0x001d);
  LLINE(); // LLINE
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe8d2: WORD 'WE8D4' codep=0x224c wordp=0xe8d4 params=3 returns=0
// ================================================

void WE8D4() // WE8D4
{
  Push(Pop() * 3); //  3 *
  Push(0x0015);
  WE81C(); // WE81C
  Push(pp_WE852); // WE852
  OFF(); // OFF
  do
  {
    WE7CA(); // WE7CA
    WE88A(); // WE88A
    SPACE(); // SPACE
    Push(1);
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
  WE866(); // WE866
}


// ================================================
// 0xe8fc: WORD 'WE8FE' codep=0x1d29 wordp=0xe8fe
// ================================================
// 0xe8fe: db 0xff 0xff '  '

// ================================================
// 0xe900: WORD 'WE902' codep=0x224c wordp=0xe902 params=0 returns=1
// ================================================

void WE902() // WE902
{
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(Read16(0x63ef+WE452.offset)); // WE452<IFIELD> @
  _st_(); // <
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe910: WORD 'WE912' codep=0x224c wordp=0xe912
// ================================================

void WE912() // WE912
{
  WE6D3(); // WE6D3
  WE8B6(); // WE8B6
  WE866(); // WE866
  Push(Read16(0x63ef+WE452.offset)); // WE452<IFIELD> @
  PAD(); // PAD
  DATE_do__gt_ADR(); // DATE$>ADR
  PAD(); // PAD
  Push(0x000a);
  Push(0);
  WE8D4(); // WE8D4
  IOPEN(); // IOPEN
  do
  {
    Push((0x63ef+WE457.offset) + 1); // WE457<IFIELD> 1+
    COUNT(); // COUNT
    HUFF_gt_(); // HUFF>
    Push(pp_LSCAN); // LSCAN
    COUNT(); // COUNT
    Push(1);
    WE8D4(); // WE8D4
    Push(Read16(0x63ef+WE457.offset)&0xFF); // WE457<IFIELD> C@
    IsLAST(); // ?LAST
    Push((Pop()==0?1:0) * 0x012c); //  0= 0x012c *
    U_star_(); // U*
    TIME(); // TIME
    _2_at_(); // 2@
    D_plus_(); // D+
    do
    {
      TIME(); // TIME
      _2_at_(); // 2@
      _2OVER(); // 2OVER
      D_gt_(); // D>
      XYSCAN(); // XYSCAN
      Pop(); Pop(); // 2DROP
      IsTRIG(); // ?TRIG
      Push(Pop() | Pop()); // OR
      Push(Pop() | Read16(pp_FQUIT)); //  FQUIT @ OR
    } while(Pop() == 0);
    Pop(); Pop(); // 2DROP
    IsQUIT(); // ?QUIT
    if (Pop() != 0)
    {
      ILAST(); // ILAST
      SET_STR_AS_PARAM("***NOTICE ABORTED***");
      Push(0x000d);
      WE8D4(); // WE8D4
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
  Push(Read16(pp_WE8FE)); // WE8FE @
  Push(Read16(0x63ef+WE452.offset)); // WE452<IFIELD> @
  MAX(); // MAX
  Push(pp_WE8FE); // WE8FE
  Store_3(); // !_3
  WE8B6(); // WE8B6
  INEXT(); // INEXT
  WE902(); // WE902
  Push(!Pop()); //  NOT
  IsFIRST(); // ?FIRST
  Push(Pop() | Pop()); // OR
  IPREV(); // IPREV
  if (Pop() != 0)
  {
    WE866(); // WE866
    SET_STR_AS_PARAM("***END OF NOTICES***");
    Push(0x000d);
    WE8D4(); // WE8D4
  }
  WE665(); // WE665
}


// ================================================
// 0xe9e0: WORD 'WE9E2' codep=0x224c wordp=0xe9e2 params=0 returns=0
// ================================================

void WE9E2() // WE9E2
{
  INEXT(); // INEXT
  WE902(); // WE902
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WE912(); // WE912
    return;
  }
  IPREV(); // IPREV
}


// ================================================
// 0xe9fa: WORD 'WE9FC' codep=0x224c wordp=0xe9fc params=0 returns=0
// ================================================

void WE9FC() // WE9FC
{
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  WE735(); // WE735
  IPREV(); // IPREV
  WE912(); // WE912
}


// ================================================
// 0xea0c: WORD '(NOTICES)' codep=0x4a4f wordp=0xea1a
// ================================================

void _ro_NOTICES_rc_() // (NOTICES)
{
  switch(Pop()) // (NOTICES)
  {
  case 1:
    WE9FC(); // WE9FC
    break;
  case 65535:
    WE9E2(); // WE9E2
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xea26: WORD 'WEA28' codep=0x224c wordp=0xea28
// ================================================

void WEA28() // WEA28
{
  WE735(); // WE735
  _gt_1FONT(); // >1FONT
  Push2Words("*OP");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x001c);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  while(1)
  {
    Push(Read16(0x63ef+WE452.offset)); // WE452<IFIELD> @
    Push(Read16(pp_WE8FE)); // WE8FE @
    _gt_(); // >
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    INEXT(); // INEXT
  }
  WE902(); // WE902
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(0xfff2);
    Push(0x000e);
    CMESS(); // CMESS
    GetColor(BLACK);
    StoreCOLOR(); // !COLOR
    PRINT("NO NEW NOTICES", 14); // (.")
    StoreCRS(); // !CRS
    Push(0xfff3);
    Push(0x001a);
    CMESS(); // CMESS
    GetColor(BLACK);
    StoreCOLOR(); // !COLOR
    PRINT("REPEAT LAST NOTICE\? [N Y]", 25); // (.")
    StoreCRS(); // !CRS
    Y_slash_N(); // Y/N
    Push(Read16(regsp)); // DUP
  } else
  {
    Push(1);
    Push(0);
  }
  if (Pop() != 0)
  {
    IPREV(); // IPREV
    SET_STR_AS_PARAM("***REPEATING LAST NOTICE***");
    Push(9);
    WE8D4(); // WE8D4
  }
  if (Pop() != 0)
  {
    WE912(); // WE912
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      _ro_NOTICES_rc_(); // (NOTICES) case
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        WE735(); // WE735
        WE912(); // WE912
      }
      IsQUIT(); // ?QUIT
    } while(Pop() == 0);
  }
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  WE735(); // WE735
  WE484(); // WE484
}


// ================================================
// 0xeb07: WORD 'WEB09' codep=0x224c wordp=0xeb09 params=0 returns=4
// ================================================

void WEB09() // WEB09
{
  Push(4);
  Push(0x00ac);
  POS_dot_(); // POS.
  PRINT("RECOMMENDATION: ", 16); // (.")
  Push(0x63ef+WE466.offset); // WE466<IFIELD>
  Is(); // ?
  Push(4);
  Push(0x00a4);
  POS_dot_(); // POS.
  PRINT("DATE: ", 6); // (.")
  Push(Read16(0x63ef+WE461.offset)); // WE461<IFIELD> @
  PAD(); // PAD
  DATE_do__gt_ADR(); // DATE$>ADR
  PAD(); // PAD
  Push(0x000a);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(4);
  Push(0x009c);
  POS_dot_(); // POS.
  PRINT("SYSTEM: ", 8); // (.")
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(0);
  DrawR(); // .R
  PRINT(",", 1); // (.")
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Draw(); // .
  Push(4);
  Push(0x0094);
  POS_dot_(); // POS.
  PRINT("ORBIT: ", 7); // (.")
  Push(Read16(0x63ef+WE46B.offset)&0xFF); // WE46B<IFIELD> C@
  Draw(); // .
  Push(4);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("NAME: ", 6); // (.")
  Push(0x63ef+WE475.offset); // WE475<IFIELD>
  Push(0x000f);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(4);
  Push(0x007a);
  POS_dot_(); // POS.
  PRINT("EVALUATION:", 11); // (.")
}


// ================================================
// 0xebbf: WORD 'WEBC1' codep=0x224c wordp=0xebc1 params=0 returns=0
// ================================================

void WEBC1() // WEBC1
{
  unsigned short int a;
  WE78B(); // WE78B
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  _0_gt_(); // 0>
  a = Pop(); // >R
  Push(0x0022 - a * 8); // 0x0022 I 8 * -
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("YOU HAVE NOT FILED ANY", 22); // (.")
  Push(a); // R>
  if (Pop() != 0)
  {
    PRINT(" NEW", 4); // (.")
  }
  Push(0x0018);
  Push(0x005c);
  POS_dot_(); // POS.
  PRINT("COLONY WORLD RECOMMENDATIONS", 28); // (.")
}


// ================================================
// 0xec2e: WORD 'WEC30' codep=0x224c wordp=0xec30 params=2 returns=0
// ================================================

void WEC30() // WEC30
{
  do
  {
    WE7CA(); // WE7CA
    Push(Read16(regsp)); // DUP
    WE856(); // WE856
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      Push(Pop() + 1); //  1+
      Push(pp_CTX); // CTX
      _plus__ex__2(); // +!_2
    } else
    {
      WE842(); // WE842
      Push(Read16(regsp)); // DUP
      Push(pp_CTX); // CTX
      _plus__ex__2(); // +!_2
    }
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    SPACE(); // SPACE
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xec5e: WORD 'WEC60' codep=0x224c wordp=0xec60 params=0 returns=2
// ================================================

void WEC60() // WEC60
{
  SET_STR_AS_PARAM("EXTREME HEAT,");
}


// ================================================
// 0xec72: WORD 'WEC74' codep=0x224c wordp=0xec74 params=0 returns=2
// ================================================

void WEC74() // WEC74
{
  SET_STR_AS_PARAM("EXTREME COLD,");
}


// ================================================
// 0xec86: WORD 'WEC88' codep=0x224c wordp=0xec88 params=0 returns=2
// ================================================

void WEC88() // WEC88
{
  SET_STR_AS_PARAM("CRUSHING GRAVITY,");
}


// ================================================
// 0xec9e: WORD 'WECA0' codep=0x224c wordp=0xeca0 params=0 returns=2
// ================================================

void WECA0() // WECA0
{
  SET_STR_AS_PARAM("VIOLENT STORMS,");
}


// ================================================
// 0xecb4: WORD 'WECB6' codep=0x224c wordp=0xecb6 params=0 returns=2
// ================================================

void WECB6() // WECB6
{
  SET_STR_AS_PARAM("LACK OF OXYGEN,");
}


// ================================================
// 0xecca: WORD 'WECCC' codep=0x224c wordp=0xeccc params=0 returns=2
// ================================================

void WECCC() // WECCC
{
  SET_STR_AS_PARAM("LACK OF WATER,");
}


// ================================================
// 0xecdf: WORD '(BAD-PLAN)' codep=0x4a4f wordp=0xecee
// ================================================

void _ro_BAD_dash_PLAN_rc_() // (BAD-PLAN)
{
  switch(Pop()) // (BAD-PLAN)
  {
  case 1:
    WEC60(); // WEC60
    break;
  case 2:
    WEC74(); // WEC74
    break;
  case 3:
    WEC88(); // WEC88
    break;
  case 4:
    WECA0(); // WECA0
    break;
  case 5:
    WECB6(); // WECB6
    break;
  case 6:
    WECCC(); // WECCC
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed0a: WORD 'WED0C' codep=0x224c wordp=0xed0c params=1 returns=0
// ================================================

void WED0C() // WED0C
{
  unsigned short int i, imax;
  Push(0);
  Push(0x000b);
  WE81C(); // WE81C
  SET_STR_AS_PARAM("DUE TO");
  WEC30(); // WEC30

  i = 1;
  imax = 7;
  do // (DO)
  {
    Push(i); // I
    BIT(); // BIT
    OVER(); // OVER
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(i); // I
      _ro_BAD_dash_PLAN_rc_(); // (BAD-PLAN) case
      Push(i + 1); // I 1+
      BIT(); // BIT
      Push(Read16(0x63ef+WE470.offset)&0xFF); // WE470<IFIELD> C@
      _st_(); // <
      Push(!Pop()); //  NOT
      Push(Read16(0x63ef+WE470.offset)&0xFF); // WE470<IFIELD> C@
      _plus_BIT(); // +BIT
      Push(1);
      _gt_(); // >
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        SET_STR_AS_PARAM("AND");
        WEC30(); // WEC30
      }
      WEC30(); // WEC30
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  SET_STR_AS_PARAM("THIS PLANET PROVED UNSUITABLE FOR COLONIZATION.");
  WEC30(); // WEC30
  SET_STR_AS_PARAM("YOU HAVE BEEN FINED");
  WEC30(); // WEC30
  Push(Read16(0x63ef+WE45C.offset)&0xFF); // WE45C<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(0x03e8);
  M_star_(); // M*
  Push(0x0064); Push(0x0000);
  DMAX(); // DMAX
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  WEC30(); // WEC30
  SET_STR_AS_PARAM("MU'S.");
  WEC30(); // WEC30
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  SET_STR_AS_PARAM("THIS IS ONLY A WARNING, YOUR NEXT FINE WILL BE HEAVY.");
  WEC30(); // WEC30
}


// ================================================
// 0xee17: WORD 'WEE19' codep=0x224c wordp=0xee19 params=0 returns=0
// ================================================

void WEE19() // WEE19
{
  SET_STR_AS_PARAM("THIS PLANET PROVED TO BE SUITABLE FOR COLONIZATION.");
  WEC30(); // WEC30
}


// ================================================
// 0xee53: WORD 'WEE55' codep=0x224c wordp=0xee55 params=0 returns=0
// ================================================

void WEE55() // WEE55
{
  SET_STR_AS_PARAM("GOOD WORK! YOU HAVE LOCATED AN OPTIMAL PLANET.");
  WEC30(); // WEC30
}


// ================================================
// 0xee8a: WORD 'WEE8C' codep=0x224c wordp=0xee8c params=0 returns=0
// ================================================

void WEE8C() // WEE8C
{
  SET_STR_AS_PARAM("YOU HAVE EARNED A BONUS OF");
  WEC30(); // WEC30
  Push(Read16(0x63ef+WE45C.offset)&0xFF); // WE45C<IFIELD> C@
  Push(0x03e8);
  U_star_(); // U*
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  WEC30(); // WEC30
  SET_STR_AS_PARAM("MU'S FOR THIS RECOMMENDATION.");
  WEC30(); // WEC30
}


// ================================================
// 0xeee1: WORD 'WEEE3' codep=0x224c wordp=0xeee3 params=0 returns=0
// ================================================

void WEEE3() // WEEE3
{
  Push(0);
  Push(0x000b);
  WE81C(); // WE81C
  Push(Read16(0x63ef+WE45C.offset)&0xFF); // WE45C<IFIELD> C@
  Push(0x0028);
  _gt_(); // >
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    WEE55(); // WEE55
  } else
  {
    WEE19(); // WEE19
  }
  WEE8C(); // WEE8C
  if (Pop() == 0) return;
  Push(0x01f4);
  Push(0x03e8);
  Push(0x000a);
  Push(1);
  Push(0x0087);
  Push(0x07d0);
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(0x0087);
  Push(1);
  OVER(); // OVER
  Push(0x07d0);
  Push(7);
  _gt_SND(); // >SND
}


// ================================================
// 0xef35: WORD 'WEF37' codep=0x224c wordp=0xef37 params=0 returns=0
// ================================================

void WEF37() // WEF37
{
  Push(Read16(0x63ef+WE470.offset)&0xFF); // WE470<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    WED0C(); // WED0C
  } else
  {
    WEEE3(); // WEEE3
  }
  IsLAST(); // ?LAST
  if (Pop() != 0)
  {
    WE842(); // WE842
    WE842(); // WE842
    SET_STR_AS_PARAM("END OF EVALUATIONS");
    WEC30(); // WEC30
    return;
  }
  Push(0);
  Push(0x0022);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS SPACEBAR FOR NEXT EVALUATION", 34); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(9);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("[ QUIT ]", 8); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xefba: WORD 'WEFBC' codep=0x224c wordp=0xefbc params=0 returns=0
// ================================================

void WEFBC() // WEFBC
{
  WE78B(); // WE78B
  Push(4);
  Push(0x00ac);
  POS_dot_(); // POS.
  PRINT("SUPPLEMENTAL EVALUATION", 23); // (.")
  Push(4);
  Push(0x00a4);
  POS_dot_(); // POS.
  PRINT("SUBJECT: ", 9); // (.")
}


// ================================================
// 0xeff6: WORD 'WEFF8' codep=0x224c wordp=0xeff8 params=0 returns=0
// ================================================

void WEFF8() // WEFF8
{
  Push(0);
  Push(0x001a);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS SPACEBAR TO CONTINUE", 26); // (.")
  StoreCRS(); // !CRS
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xf029: WORD 'WF02B' codep=0x224c wordp=0xf02b params=0 returns=1
// ================================================

void WF02B() // WF02B
{
  Push(0xc52d); // 'OVINIT-BALANCE'
  MODULE(); // MODULE
  Push(0xc5ca); // 'T+BALANCE'
  MODULE(); // MODULE
  Push(0);
  Push(0xc542); // 'OVTRANSACT'
  MODULE(); // MODULE
  WEFF8(); // WEFF8
}


// ================================================
// 0xf043: WORD 'WF045' codep=0x224c wordp=0xf045 params=0 returns=3
// ================================================

void WF045() // WF045
{
  WEFBC(); // WEFBC
  PRINT("LOSS OF TERRAIN VEHICLE", 23); // (.")
  Push(0);
  Push(6);
  WE81C(); // WE81C
  SET_STR_AS_PARAM("DUE TO YOUR NEGLIGENCE, YOUR SHIP IS NO LONGER EQUIPPED WITH A TERRAIN VEHICLE. A NEW TERRAIN VEHICLE IS CURRENTLY BEING INSTALLED. CONSEQUENTLY, YOU HAVE BEEN FINED 10,000 MU.");
  WEC30(); // WEC30
  Push(0xd8f0); Push(0xffff);
  WF02B(); // WF02B
  Push(pp_IsTV); // ?TV
  ON_3(); // ON_3
}


// ================================================
// 0xf12a: WORD 'WF12C' codep=0x224c wordp=0xf12c params=0 returns=3
// ================================================

void WF12C() // WF12C
{
  WEFBC(); // WEFBC
  PRINT("TOWING CHARGES", 14); // (.")
  Push(0);
  Push(6);
  WE81C(); // WE81C
  SET_STR_AS_PARAM("I.S. CORP. REG. 12A-7312 EMERGENCY DISTRESS CALLS: CAPTAIN AND CREW OF ANY VESSEL INVOKING AN EMERGENCY DISTRESS CALL SHALL BE LIABLE FOR ALL COSTS INCURRED BY INTERSTEL CORP. AS A RESULT OF RESCUE OPERATIONS INITIATED ON BEHALF OF SAID CREW.");
  WEC30(); // WEC30
  WE842(); // WE842
  SET_STR_AS_PARAM("YOU HAVE BEEN FINED");
  WEC30(); // WEC30
  SPACE(); // SPACE
  Push(pp_TOWFINE); // TOWFINE
  _2_at_(); // 2@
  D_dot_(); // D.
  PRINT("MU.", 3); // (.")
  Push(pp_TOWFINE); // TOWFINE
  _2_at_(); // 2@
  DNEGATE(); // DNEGATE
  WF02B(); // WF02B
  Push(pp_IsRECALL); // ?RECALL
  OFF(); // OFF
}


// ================================================
// 0xf272: WORD 'WF274' codep=0x224c wordp=0xf274 params=0 returns=0
// ================================================

void WF274() // WF274
{
  WEFBC(); // WEFBC
  PRINT("COMPLETION OF MISSION", 21); // (.")
  Push(0);
  Push(6);
  WE81C(); // WE81C
  SET_STR_AS_PARAM("CONGRATULATIONS! AS A RESULT OF YOUR EFFORTS, OUR SUN IS ONCE AGAIN STABLE. ALL OF ARTH, AND INDEED THE ENTIRE GALAXY OWES YOU A DEBT WHICH CAN NEVER BE FULLY REPAID. YOUR HEROIC EXPLOITS WILL SURELY BECOME INTER-GALACTIC LEGEND.");
  WEC30(); // WEC30
  WE842(); // WE842
  SET_STR_AS_PARAM("OUR TOKEN BONUS OF 500,000 MU WILL ALLOW YOU TO LIVE HERE ON ARTH IN LUXURY FOR MANY YEARS TO COME, ALTHOUGH WE SUSPECT YOU MAY USE IT TO FURTHER YOUR EXPLORATIONS.");
  WEC30(); // WEC30
  WE842(); // WE842
  SET_STR_AS_PARAM("ONCE AGAIN, THANK YOU!");
  WEC30(); // WEC30
  Push(pp_WMSG); // WMSG
  OFF(); // OFF
  WEFF8(); // WEFF8
}


// ================================================
// 0xf44e: WORD 'WF450' codep=0x224c wordp=0xf450
// ================================================

void WF450() // WF450
{
  do
  {
    WE78B(); // WE78B
    WEB09(); // WEB09
    WEF37(); // WEF37
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); Pop(); // 2DROP
      IsTRIG(); // ?TRIG
      Push(Pop() | Read16(pp_FQUIT)); //  FQUIT @ OR
      IsLAST(); // ?LAST
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
    IsQUIT(); // ?QUIT
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
}


// ================================================
// 0xf478: WORD 'WF47A' codep=0x224c wordp=0xf47a
// ================================================

void WF47A() // WF47A
{
  WE78B(); // WE78B
  _gt_1FONT(); // >1FONT
  Push(pp_IsEVAL); // ?EVAL
  OFF(); // OFF
  Push(pp_Is_gt_OP); // ?>OP
  OFF(); // OFF
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push(!Read16(pp_IsTV)); // ?TV @ NOT
  if (Pop() != 0)
  {
    WF045(); // WF045
  }
  Push(Read16(pp_IsRECALL)); // ?RECALL @
  if (Pop() != 0)
  {
    WF12C(); // WF12C
  }
  Push(Read16(pp_WMSG)); // WMSG @
  if (Pop() != 0)
  {
    WF274(); // WF274
  }
  Push2Words("*OP");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002d);
  IFIND(); // IFIND
  Pop(); // DROP
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    WF450(); // WF450
    CDROP(); // CDROP
  } else
  {
    WEBC1(); // WEBC1
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4d4: WORD 'OP-CASE' codep=0x4a4f wordp=0xf4e0
// ================================================

void OP_dash_CASE() // OP-CASE
{
  switch(Pop()) // OP-CASE
  {
  case 0:
    WEA28(); // WEA28
    break;
  case 1:
    WF47A(); // WF47A
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
// 0xf4f0: WORD '(U-OP)' codep=0x224c wordp=0xf4fb
// ================================================
// entry

void _ro_U_dash_OP_rc_() // (U-OP)
{
  WE637(); // WE637
  Push(Read16(pp_Is_gt_OP)); // ?>OP @
  if (Pop() != 0)
  {
    Push(0x03e8);
    MS(); // MS
    WF47A(); // WF47A
  }
  do
  {
    XYSCAN(); // XYSCAN
    SWAP(); // SWAP
    Pop(); // DROP
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(pp_NCRS); // NCRS
      _plus__ex__2(); // +!_2
      Push(pp_WE58C); // WE58C
      SET_dash_CRS(); // SET-CRS
      Pop(); // DROP
    }
    Push(0);
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      Push(Read16(pp_NCRS)); // NCRS @
      OP_dash_CASE(); // OP-CASE case
    }
  } while(Pop() == 0);
}

// 0xf537: db 0x4f 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'OP-VOC__________________________          '

