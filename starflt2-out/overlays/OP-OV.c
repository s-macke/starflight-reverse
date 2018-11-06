// ====== OVERLAY 'OP-OV' ======
// store offset = 0xe580
// overlay size   = 0x0fe0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE596  codep:0x1d29 parp:0xe596 size:0x0002 C-string:'WE596'
//           WE59A  codep:0x224c parp:0xe59a size:0x0006 C-string:'WE59A'
//           WE5A2  codep:0x7420 parp:0xe5a2 size:0x0003 C-string:'WE5A2'
//           WE5A7  codep:0x7420 parp:0xe5a7 size:0x0003 C-string:'WE5A7'
//           WE5AC  codep:0x7420 parp:0xe5ac size:0x0003 C-string:'WE5AC'
//           WE5B1  codep:0x7420 parp:0xe5b1 size:0x0003 C-string:'WE5B1'
//           WE5B6  codep:0x7420 parp:0xe5b6 size:0x0003 C-string:'WE5B6'
//           WE5BB  codep:0x7420 parp:0xe5bb size:0x0003 C-string:'WE5BB'
//           WE5C0  codep:0x7420 parp:0xe5c0 size:0x0003 C-string:'WE5C0'
//           WE5C5  codep:0x7420 parp:0xe5c5 size:0x0003 C-string:'WE5C5'
//           WE5CA  codep:0x224c parp:0xe5ca size:0x0008 C-string:'WE5CA'
//           WE5D4  codep:0x224c parp:0xe5d4 size:0x0016 C-string:'WE5D4'
//           WE5EC  codep:0x224c parp:0xe5ec size:0x0010 C-string:'WE5EC'
//           WE5FE  codep:0x224c parp:0xe5fe size:0x0025 C-string:'WE5FE'
//           WE625  codep:0x224c parp:0xe625 size:0x000f C-string:'WE625'
//           WE636  codep:0x1d29 parp:0xe636 size:0x003a C-string:'WE636'
//           WE672  codep:0x224c parp:0xe672 size:0x002a C-string:'WE672'
//           WE69E  codep:0x224c parp:0xe69e size:0x007c C-string:'WE69E'
//           WE71C  codep:0x1d29 parp:0xe71c size:0x000d C-string:'WE71C'
//           WE72B  codep:0x224c parp:0xe72b size:0x005a C-string:'WE72B'
//           WE787  codep:0x224c parp:0xe787 size:0x0033 C-string:'WE787'
//           WE7BC  codep:0x224c parp:0xe7bc size:0x002c C-string:'WE7BC'
//           WE7EA  codep:0x224c parp:0xe7ea size:0x0062 C-string:'WE7EA'
//           WE84E  codep:0x224c parp:0xe84e size:0x0040 C-string:'WE84E'
//           WE890  codep:0x224c parp:0xe890 size:0x0054 C-string:'WE890'
//           WE8E6  codep:0x224c parp:0xe8e6 size:0x0032 C-string:'WE8E6'
//           WE91A  codep:0x224c parp:0xe91a size:0x0050 C-string:'WE91A'
//           WE96C  codep:0x224c parp:0xe96c size:0x0024 C-string:'WE96C'
//           WE992  codep:0x224c parp:0xe992 size:0x0008 C-string:'WE992'
//           WE99C  codep:0x224c parp:0xe99c size:0x000e C-string:'WE99C'
//           WE9AC  codep:0x1d29 parp:0xe9ac size:0x0002 C-string:'WE9AC'
//           WE9B0  codep:0x224c parp:0xe9b0 size:0x000e C-string:'WE9B0'
//           WE9C0  codep:0x224c parp:0xe9c0 size:0x0022 C-string:'WE9C0'
//           WE9E4  codep:0x224c parp:0xe9e4 size:0x002a C-string:'WE9E4'
//           WEA10  codep:0x224c parp:0xea10 size:0x001c C-string:'WEA10'
//           WEA2E  codep:0x224c parp:0xea2e size:0x0028 C-string:'WEA2E'
//           WEA58  codep:0x1d29 parp:0xea58 size:0x0002 C-string:'WEA58'
//           WEA5C  codep:0x224c parp:0xea5c size:0x000e C-string:'WEA5C'
//           WEA6C  codep:0x224c parp:0xea6c size:0x00cc C-string:'WEA6C'
//           WEB3A  codep:0x224c parp:0xeb3a size:0x0018 C-string:'WEB3A'
//           WEB54  codep:0x224c parp:0xeb54 size:0x0010 C-string:'WEB54'
//       (NOTICES)  codep:0x4b3b parp:0xeb72 size:0x000c C-string:'_ro_NOTICES_rc_'
//           WEB80  codep:0x224c parp:0xeb80 size:0x00ed C-string:'WEB80'
//           WEC6F  codep:0x224c parp:0xec6f size:0x00ae C-string:'WEC6F'
//           WED1F  codep:0x224c parp:0xed1f size:0x006d C-string:'WED1F'
//           WED8E  codep:0x224c parp:0xed8e size:0x0038 C-string:'WED8E'
//           WEDC8  codep:0x224c parp:0xedc8 size:0x002e C-string:'WEDC8'
//           WEDF8  codep:0x224c parp:0xedf8 size:0x0016 C-string:'WEDF8'
//           WEE10  codep:0x224c parp:0xee10 size:0x0014 C-string:'WEE10'
//           WEE26  codep:0x224c parp:0xee26 size:0x0012 C-string:'WEE26'
//           WEE3A  codep:0x224c parp:0xee3a size:0x0012 C-string:'WEE3A'
//           WEE4E  codep:0x224c parp:0xee4e size:0x0016 C-string:'WEE4E'
//           WEE66  codep:0x224c parp:0xee66 size:0x0014 C-string:'WEE66'
//           WEE7C  codep:0x224c parp:0xee7c size:0x0014 C-string:'WEE7C'
//           WEE92  codep:0x224c parp:0xee92 size:0x0013 C-string:'WEE92'
//           WEEA7  codep:0x224c parp:0xeea7 size:0x0018 C-string:'WEEA7'
//           WEEC1  codep:0x224c parp:0xeec1 size:0x001b C-string:'WEEC1'
//      (BAD-PLAN)  codep:0x4b3b parp:0xeeeb size:0x0024 C-string:'_ro_BAD_dash_PLAN_rc_'
//           WEF11  codep:0x224c parp:0xef11 size:0x001a C-string:'WEF11'
//           WEF2D  codep:0x224c parp:0xef2d size:0x00f5 C-string:'WEF2D'
//           WF024  codep:0x224c parp:0xf024 size:0x003a C-string:'WF024'
//           WF060  codep:0x224c parp:0xf060 size:0x0035 C-string:'WF060'
//           WF097  codep:0x224c parp:0xf097 size:0x0055 C-string:'WF097'
//           WF0EE  codep:0x224c parp:0xf0ee size:0x0052 C-string:'WF0EE'
//           WF142  codep:0x224c parp:0xf142 size:0x0094 C-string:'WF142'
//           WF1D8  codep:0x224c parp:0xf1d8 size:0x003a C-string:'WF1D8'
//           WF214  codep:0x224c parp:0xf214 size:0x0010 C-string:'WF214'
//           WF226  codep:0x224c parp:0xf226 size:0x0018 C-string:'WF226'
//           WF240  codep:0x224c parp:0xf240 size:0x0038 C-string:'WF240'
//           WF27A  codep:0x224c parp:0xf27a size:0x0012 C-string:'WF27A'
//           WF28E  codep:0x224c parp:0xf28e size:0x002c C-string:'WF28E'
//           WF2BC  codep:0x224c parp:0xf2bc size:0x007b C-string:'WF2BC'
//           WF339  codep:0x224c parp:0xf339 size:0x0050 C-string:'WF339'
//           WF38B  codep:0x224c parp:0xf38b size:0x0027 C-string:'WF38B'
//           WF3B4  codep:0x224c parp:0xf3b4 size:0x0034 C-string:'WF3B4'
//           WF3EA  codep:0x224c parp:0xf3ea size:0x004c C-string:'WF3EA'
//           WF438  codep:0x224c parp:0xf438 size:0x0014 C-string:'WF438'
//           WF44E  codep:0x224c parp:0xf44e size:0x002a C-string:'WF44E'
//           WF47A  codep:0x224c parp:0xf47a size:0x0060 C-string:'WF47A'
//         OP-CASE  codep:0x4b3b parp:0xf4e6 size:0x0010 C-string:'OP_dash_CASE'
//          (U-OP)  codep:0x224c parp:0xf501 size:0x0000 C-string:'_ro_U_dash_OP_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_IsEVAL; // ?EVAL
extern const unsigned short int pp_Is3; // ?3
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_IsRECALL; // ?RECALL
extern const unsigned short int pp_CTX; // CTX
extern const unsigned short int pp_CTY; // CTY
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp_Is_gt_OP; // ?>OP
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_TOWFINE; // TOWFINE
extern const unsigned short int pp_LSCAN; // LSCAN
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color BROWN; // BROWN
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHRASE; // PHRASE
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
void _3_star_(); // 3*
void _gt_FLAG(); // >FLAG
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void ON_2(); // ON_2
void _099(); // 099
void CDROP(); // CDROP
void CI_i_(); // CI'
void IsNULL(); // ?NULL
void IsCHILD(); // ?CHILD
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void ILAST(); // ILAST
void IFIND(); // IFIND
void _gt_INACTI(); // >INACTI
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void StoreCOLOR(); // !COLOR
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _gt_3FONT(); // >3FONT
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SC(); // SAVE-SC
void SCR_dash_RES(); // SCR-RES
void LCOPYBL(); // LCOPYBL
void SFILL(); // SFILL
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void _gt_SND(); // >SND
void StoreCRS(); // !CRS
void POS_dot_PXT(); // POS.PXT
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
void DATE_do__gt_A(); // DATE$>A
void _gt_BOX(); // >BOX
void BOX_gt_(); // BOX>
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
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE596 = 0xe596; // WE596 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE636 = 0xe636; // WE636 size: 58
// {0x41, 0x9d, 0x61, 0x9d, 0x6f, 0x8f, 0x6f, 0x79, 0x64, 0x79, 0x64, 0x87, 0x60, 0x8b, 0x58, 0x8b, 0x58, 0x5d, 0x60, 0x5d, 0x64, 0x61, 0x64, 0x6f, 0x6f, 0x6f, 0x6f, 0x58, 0x61, 0x4a, 0x41, 0x4a, 0x33, 0x58, 0x33, 0x6f, 0x3e, 0x6f, 0x3e, 0x61, 0x42, 0x5d, 0x4a, 0x5d, 0x4a, 0x8b, 0x42, 0x8b, 0x3e, 0x87, 0x3e, 0x79, 0x33, 0x79, 0x33, 0x8f, 0x41, 0x9d}

const unsigned short int pp_WE71C = 0xe71c; // WE71C size: 13
// {0x02, 0x0a, 0x02, 0x09, 0x34, 0x0a, 0x37, 0x09, 0x40, 0x0a, 0x78, 0x09, 0x26}

const unsigned short int pp_WE9AC = 0xe9ac; // WE9AC size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEA58 = 0xea58; // WEA58 size: 2
// {0xff, 0xff}




// 0xe592: db 0xfc 0x00 '  '

// ================================================
// 0xe594: WORD 'WE596' codep=0x1d29 parp=0xe596
// ================================================
// 0xe596: db 0x3a 0x20 ': '

// ================================================
// 0xe598: WORD 'WE59A' codep=0x224c parp=0xe59a params=0 returns=1
// ================================================

void WE59A() // WE59A
{
  Push(Read16(pp_WE596)); // WE596 @
}


// ================================================
// 0xe5a0: WORD 'WE5A2' codep=0x7420 parp=0xe5a2
// ================================================
IFieldType WE5A2 = {NOTICEIDX, 0x0a, 0x02};

// ================================================
// 0xe5a5: WORD 'WE5A7' codep=0x7420 parp=0xe5a7
// ================================================
IFieldType WE5A7 = {STRINGIDX, 0x0b, 0xff};

// ================================================
// 0xe5aa: WORD 'WE5AC' codep=0x7420 parp=0xe5ac
// ================================================
IFieldType WE5AC = {EVALUATIONIDX, 0x0a, 0x01};

// ================================================
// 0xe5af: WORD 'WE5B1' codep=0x7420 parp=0xe5b1
// ================================================
IFieldType WE5B1 = {EVALUATIONIDX, 0x0b, 0x02};

// ================================================
// 0xe5b4: WORD 'WE5B6' codep=0x7420 parp=0xe5b6
// ================================================
IFieldType WE5B6 = {EVALUATIONIDX, 0x11, 0x02};

// ================================================
// 0xe5b9: WORD 'WE5BB' codep=0x7420 parp=0xe5bb
// ================================================
IFieldType WE5BB = {EVALUATIONIDX, 0x13, 0x01};

// ================================================
// 0xe5be: WORD 'WE5C0' codep=0x7420 parp=0xe5c0
// ================================================
IFieldType WE5C0 = {EVALUATIONIDX, 0x14, 0x01};

// ================================================
// 0xe5c3: WORD 'WE5C5' codep=0x7420 parp=0xe5c5
// ================================================
IFieldType WE5C5 = {EVALUATIONIDX, 0x15, 0x0f};

// ================================================
// 0xe5c8: WORD 'WE5CA' codep=0x224c parp=0xe5ca params=0 returns=0
// ================================================
// orphan

void WE5CA() // WE5CA
{
  Push(0xb70e); // 'OVQUIT'
  MODULE(); // MODULE
}


// ================================================
// 0xe5d2: WORD 'WE5D4' codep=0x224c parp=0xe5d4
// ================================================

void WE5D4() // WE5D4
{
  Push(0x0026);
  WE59A(); // WE59A
  Push(0x0017);
  Push(2);
  POS_dot_PXT(); // POS.PXT
  Push(1);
  WE59A(); // WE59A
  X0MESS(); // X0MESS
}


// ================================================
// 0xe5ea: WORD 'WE5EC' codep=0x224c parp=0xe5ec params=5 returns=0
// ================================================

void WE5EC() // WE5EC
{
  unsigned short int i, imax;
  Push(0);

  i = Pop();
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
// 0xe5fc: WORD 'WE5FE' codep=0x224c parp=0xe5fe
// ================================================

void WE5FE() // WE5FE
{
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS SPACEBAR TO CONTINUE", 26); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe623: WORD 'WE625' codep=0x224c parp=0xe625 params=0 returns=0
// ================================================

void WE625() // WE625
{
  PRINT("EVALUATION", 10); // (.")
}


// ================================================
// 0xe634: WORD 'WE636' codep=0x1d29 parp=0xe636
// ================================================
// 0xe636: db 0x41 0x9d 0x61 0x9d 0x6f 0x8f 0x6f 0x79 0x64 0x79 0x64 0x87 0x60 0x8b 0x58 0x8b 0x58 0x5d 0x60 0x5d 0x64 0x61 0x64 0x6f 0x6f 0x6f 0x6f 0x58 0x61 0x4a 0x41 0x4a 0x33 0x58 0x33 0x6f 0x3e 0x6f 0x3e 0x61 0x42 0x5d 0x4a 0x5d 0x4a 0x8b 0x42 0x8b 0x3e 0x87 0x3e 0x79 0x33 0x79 0x33 0x8f 0x41 0x9d 'A a o oydyd ` X X]`]dadooooXaJAJ3X3o>o>aB]J]J B > >y3y3 A '

// ================================================
// 0xe670: WORD 'WE672' codep=0x224c parp=0xe672
// ================================================

void WE672() // WE672
{
  unsigned short int i, imax;
  GetColor(BROWN);
  StoreCOLOR(); // !COLOR
  Push(pp_WE636); // WE636
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
  WE5EC(); // WE5EC
}


// ================================================
// 0xe69c: WORD 'WE69E' codep=0x224c parp=0xe69e
// ================================================

void WE69E() // WE69E
{
  GetColor(WHITE);
  GetColor(WHITE);
  GetColor(LT_dash_BLUE);
  IsMRC(); // ?MRC
  Push(Read16(regsp)); // DUP
  Push(pp_WE596); // WE596
  Store_2(); // !_2
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
  _099(); // 099
  WE672(); // WE672
}


// ================================================
// 0xe71a: WORD 'WE71C' codep=0x1d29 parp=0xe71c
// ================================================
// 0xe71c: db 0x02 0x0a 0x02 0x09 0x34 0x0a 0x37 0x09 0x40 0x0a 0x78 0x09 0x26 '    4 7 @ x &'

// ================================================
// 0xe729: WORD 'WE72B' codep=0x224c parp=0xe72b
// ================================================

void WE72B() // WE72B
{
  _gt_3FONT(); // >3FONT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x003a);
  Push(0x00b3);
  POS_dot_(); // POS.
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
// 0xe785: WORD 'WE787' codep=0x224c parp=0xe787
// ================================================

void WE787() // WE787
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
  Store_2(); // !_2
  WE625(); // WE625
  Push(0x0083);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe7ba: WORD 'WE7BC' codep=0x224c parp=0xe7bc
// ================================================

void WE7BC() // WE7BC
{
  _gt_HIDDEN(); // >HIDDEN
  WE69E(); // WE69E
  WE787(); // WE787
  WE72B(); // WE72B
  GetColor(WHITE);
  GetColor(BLUE);
  GetColor(BLUE);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
  Push(Read16(pp_Is_gt_OP)); // ?>OP @
  Push(Read16(regsp)); // DUP
  Push(pp_NCRS); // NCRS
  Store_2(); // !_2
  Push(pp_OCRS); // OCRS
  Store_2(); // !_2
  Push(pp_WE71C); // WE71C
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xe7e8: WORD 'WE7EA' codep=0x224c parp=0xe7ea
// ================================================

void WE7EA() // WE7EA
{
  WE5D4(); // WE5D4
  Push(0);
  Push(0x0019);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("SPACEBAR FOR NEXT MESSAGE", 25); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x001e);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("^ FOR PRIOR MESSAGE  [] TO QUIT", 31); // (.")
  StoreCRS(); // !CRS
  Push(pp_LKEY); // LKEY
  _099(); // 099
}


// ================================================
// 0xe84c: WORD 'WE84E' codep=0x224c parp=0xe84e
// ================================================

void WE84E() // WE84E
{
  WE5D4(); // WE5D4
  Push(0);
  Push(0x001a);
  CMESS(); // CMESS
  WE5FE(); // WE5FE
  Push(1);
  Push(0x0022);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS [] TO CANCEL CURRENT NOTICE", 33); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe88e: WORD 'WE890' codep=0x224c parp=0xe890
// ================================================

void WE890() // WE890
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  Push(0x00c5);
  Push(2);
  Push(0x000c);
  Push(0x009d);
  WE59A(); // WE59A
  POLY_dash_WI(); // POLY-WI
  _gt_2FONT(); // >2FONT
  Push(3);
  Push(0x00c3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("NOTICES", 7); // (.")
  _gt_1FONT(); // >1FONT
  Push(0x002d);
  Push(0x00c1);
  POS_dot_(); // POS.
  Push(Read16(pp_STARDAT)); // STARDAT @
  PAD(); // PAD
  DATE_do__gt_A(); // DATE$>A
  PAD(); // PAD
  Push(0x000a);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xe8e4: WORD 'WE8E6' codep=0x224c parp=0xe8e6
// ================================================

void WE8E6() // WE8E6
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  Push(0x00c5);
  Push(3);
  Push(0x000c);
  Push(0x009c);
  WE59A(); // WE59A
  POLY_dash_WI(); // POLY-WI
  _gt_2FONT(); // >2FONT
  Push(3);
  Push(0x00c3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  WE625(); // WE625
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe918: WORD 'WE91A' codep=0x224c parp=0xe91a params=2 returns=4
// ================================================

void WE91A() // WE91A
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
// 0xe96a: WORD 'WE96C' codep=0x224c parp=0xe96c params=2 returns=0
// ================================================

void WE96C() // WE96C
{
  _2DUP(); // 2DUP
  Push(pp_CTY); // CTY
  Store_2(); // !_2
  Push(pp_CTX); // CTX
  Store_2(); // !_2
  SWAP(); // SWAP
  Push(Pop() * 4 + 4); //  4 * 4 +
  Push(0x00b4);
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe990: WORD 'WE992' codep=0x224c parp=0xe992 params=0 returns=0
// ================================================

void WE992() // WE992
{
  Push(0);
  Push(6);
  WE96C(); // WE96C
}


// ================================================
// 0xe99a: WORD 'WE99C' codep=0x224c parp=0xe99c params=0 returns=0
// ================================================

void WE99C() // WE99C
{
  Push(0);
  Push(1 + Read16(pp_CTY)); // 1 CTY @ +
  WE96C(); // WE96C
}


// ================================================
// 0xe9aa: WORD 'WE9AC' codep=0x1d29 parp=0xe9ac
// ================================================
// 0xe9ac: db 0x3a 0x20 ': '

// ================================================
// 0xe9ae: WORD 'WE9B0' codep=0x224c parp=0xe9b0 params=1 returns=1
// ================================================

void WE9B0() // WE9B0
{
  Push(Pop() + Read16(pp_CTX)); //  CTX @ +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe9be: WORD 'WE9C0' codep=0x224c parp=0xe9c0
// ================================================

void WE9C0() // WE9C0
{
  unsigned short int i, imax;
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(0x00b4);
    Push(0x00a0);
    Push(0x001a);
    Push(0);
    Push(0x00b5);
    LCOPYBL(); // LCOPYBL
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe9e2: WORD 'WE9E4' codep=0x224c parp=0xe9e4 params=2 returns=0
// ================================================

void WE9E4() // WE9E4
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    WE9B0(); // WE9B0
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      WE9C0(); // WE9C0
      Push(0);
      Push(0x0015);
      WE96C(); // WE96C
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
// 0xea0e: WORD 'WEA10' codep=0x224c parp=0xea10
// ================================================

void WEA10() // WEA10
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
// 0xea2c: WORD 'WEA2E' codep=0x224c parp=0xea2e
// ================================================

void WEA2E() // WEA2E
{
  Push(Pop() * 3); //  3 *
  Push(0x0015);
  WE96C(); // WE96C
  Push(pp_WE9AC); // WE9AC
  _099(); // 099
  do
  {
    WE91A(); // WE91A
    WE9E4(); // WE9E4
    SPACE(); // SPACE
    Push(1);
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
  WE9C0(); // WE9C0
}


// ================================================
// 0xea56: WORD 'WEA58' codep=0x1d29 parp=0xea58
// ================================================
// 0xea58: db 0xff 0xff '  '

// ================================================
// 0xea5a: WORD 'WEA5C' codep=0x224c parp=0xea5c params=0 returns=1
// ================================================

void WEA5C() // WEA5C
{
  Push(Read16(pp_STARDAT)); // STARDAT @
  Push(Read16(0x65e1+WE5A2.offset)); // WE5A2<IFIELD> @
  _st_(); // <
  Push(!Pop()); //  NOT
}


// ================================================
// 0xea6a: WORD 'WEA6C' codep=0x224c parp=0xea6c
// ================================================

void WEA6C() // WEA6C
{
  WE84E(); // WE84E
  WEA10(); // WEA10
  WE9C0(); // WE9C0
  Push(Read16(0x65e1+WE5A2.offset)); // WE5A2<IFIELD> @
  PAD(); // PAD
  DATE_do__gt_A(); // DATE$>A
  PAD(); // PAD
  Push(0x000a);
  Push(0);
  WEA2E(); // WEA2E
  IOPEN(); // IOPEN
  do
  {
    Push((0x65e1+WE5A7.offset) + 1); // WE5A7<IFIELD> 1+
    COUNT(); // COUNT
    HUFF_gt_(); // HUFF>
    Push(pp_LSCAN); // LSCAN
    COUNT(); // COUNT
    Push(1);
    WEA2E(); // WEA2E
    Push(Read16(0x65e1+WE5A7.offset)&0xFF); // WE5A7<IFIELD> C@
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
      SET_STR_AS_PARAM("**NOTICE CANCELLED**");
      Push(0x000d);
      WEA2E(); // WEA2E
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
  Push(Read16(pp_WEA58)); // WEA58 @
  Push(Read16(0x65e1+WE5A2.offset)); // WE5A2<IFIELD> @
  MAX(); // MAX
  Push(pp_WEA58); // WEA58
  Store_2(); // !_2
  WEA10(); // WEA10
  INEXT(); // INEXT
  WEA5C(); // WEA5C
  Push(!Pop()); //  NOT
  IsFIRST(); // ?FIRST
  Push(Pop() | Pop()); // OR
  IPREV(); // IPREV
  if (Pop() != 0)
  {
    WE9C0(); // WE9C0
    SET_STR_AS_PARAM("**END OF NOTICES**");
    Push(0x000d);
    WEA2E(); // WEA2E
  }
  WE7EA(); // WE7EA
}


// ================================================
// 0xeb38: WORD 'WEB3A' codep=0x224c parp=0xeb3a params=0 returns=0
// ================================================

void WEB3A() // WEB3A
{
  INEXT(); // INEXT
  WEA5C(); // WEA5C
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WEA6C(); // WEA6C
    return;
  }
  IPREV(); // IPREV
}


// ================================================
// 0xeb52: WORD 'WEB54' codep=0x224c parp=0xeb54 params=0 returns=0
// ================================================

void WEB54() // WEB54
{
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  WE890(); // WE890
  IPREV(); // IPREV
  WEA6C(); // WEA6C
}


// ================================================
// 0xeb64: WORD '(NOTICES)' codep=0x4b3b parp=0xeb72
// ================================================

void _ro_NOTICES_rc_() // (NOTICES)
{
  switch(Pop()) // (NOTICES)
  {
  case 328:
    WEB54(); // WEB54
    break;
  case 32:
    WEB3A(); // WEB3A
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeb7e: WORD 'WEB80' codep=0x224c parp=0xeb80
// ================================================

void WEB80() // WEB80
{
  WE890(); // WE890
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
    Push(Read16(0x65e1+WE5A2.offset)); // WE5A2<IFIELD> @
    Push(Read16(pp_WEA58)); // WEA58 @
    _gt_(); // >
    Push(!Pop()); //  NOT
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) break;

    INEXT(); // INEXT
  }
  WEA5C(); // WEA5C
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
    SET_STR_AS_PARAM("**REPEATING LAST NOTICE**");
    Push(9);
    WEA2E(); // WEA2E
  }
  if (Pop() != 0)
  {
    WEA6C(); // WEA6C
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); Pop(); // 2DROP
      Push(Read16(pp_LKEY)); // LKEY @
      _ro_NOTICES_rc_(); // (NOTICES) case
      Push(Read16(pp_LKEY)==0x0150?1:0); // LKEY @ 0x0150 =
      if (Pop() != 0)
      {
        WE890(); // WE890
        WEA6C(); // WEA6C
      }
      IsQUIT(); // ?QUIT
    } while(Pop() == 0);
  }
  Push(3);
  _star_CLOSE(); // *CLOSE
  WE890(); // WE890
  WE5D4(); // WE5D4
}


// ================================================
// 0xec6d: WORD 'WEC6F' codep=0x224c parp=0xec6f
// ================================================

void WEC6F() // WEC6F
{
  Push(4);
  Push(0x00ac);
  POS_dot_(); // POS.
  PRINT("RECOMMENDATION: ", 16); // (.")
  Push(0x65e1+WE5B6.offset); // WE5B6<IFIELD>
  Is(); // ?
  Push(4);
  Push(0x00a4);
  POS_dot_(); // POS.
  PRINT("DATE: ", 6); // (.")
  Push(Read16(0x65e1+WE5B1.offset)); // WE5B1<IFIELD> @
  PAD(); // PAD
  DATE_do__gt_A(); // DATE$>A
  PAD(); // PAD
  Push(0x000a);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(4);
  Push(0x009c);
  POS_dot_(); // POS.
  PRINT("SYSTEM: ", 8); // (.")
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(0);
  DrawR(); // .R
  PRINT(",", 1); // (.")
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Draw(); // .
  Push(4);
  Push(0x0094);
  POS_dot_(); // POS.
  PRINT("ORBIT: ", 7); // (.")
  Push(Read16(0x65e1+WE5BB.offset)&0xFF); // WE5BB<IFIELD> C@
  Draw(); // .
  Push(4);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("NAME: ", 6); // (.")
  Push(0x65e1+WE5C5.offset); // WE5C5<IFIELD>
  Push(0x000f);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(4);
  Push(0x007a);
  POS_dot_(); // POS.
  WE625(); // WE625
  PRINT(":", 1); // (.")
}


// ================================================
// 0xed1d: WORD 'WED1F' codep=0x224c parp=0xed1f
// ================================================

void WED1F() // WED1F
{
  unsigned short int a;
  WE8E6(); // WE8E6
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
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
// 0xed8c: WORD 'WED8E' codep=0x224c parp=0xed8e params=0 returns=3
// ================================================

void WED8E() // WED8E
{
  Push(0xc261); // 'OVINIT-_1'
  MODULE(); // MODULE
  Push(Read16(0x65e1+WE5AC.offset)&0xFF); // WE5AC<IFIELD> C@
  Push(0x03e8);
  U_star_(); // U*
  Push(0x0064); Push(0x0000);
  DMAX(); // DMAX
  Push(Read16(0x65e1+WE5C0.offset)&0xFF); // WE5C0<IFIELD> C@
  if (Pop() != 0)
  {
    DNEGATE(); // DNEGATE
  }
  Push(0xc2ed); // 'T+BALAN'
  MODULE(); // MODULE
  Push((Read16(0x65e1+WE5C0.offset)&0xFF)==0?1:0); // WE5C0<IFIELD> C@ 0=
  _3_star_(); // 3*
  Push(0xc273); // 'OVTRANS'
  MODULE(); // MODULE
}


// ================================================
// 0xedc6: WORD 'WEDC8' codep=0x224c parp=0xedc8 params=2 returns=0
// ================================================

void WEDC8() // WEDC8
{
  do
  {
    WE91A(); // WE91A
    Push(Read16(regsp)); // DUP
    WE9B0(); // WE9B0
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      Push(Pop() + 1); //  1+
      Push(pp_CTX); // CTX
      _plus__ex__2(); // +!_2
    } else
    {
      WE99C(); // WE99C
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
// 0xedf6: WORD 'WEDF8' codep=0x224c parp=0xedf8 params=0 returns=0
// ================================================

void WEDF8() // WEDF8
{
  Push(pp_CTX); // CTX
  _099(); // 099
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  WEDC8(); // WEDC8
}


// ================================================
// 0xee0e: WORD 'WEE10' codep=0x224c parp=0xee10
// ================================================

void WEE10() // WEE10
{
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
}


// ================================================
// 0xee24: WORD 'WEE26' codep=0x224c parp=0xee26 params=0 returns=2
// ================================================

void WEE26() // WEE26
{
  SET_STR_AS_PARAM("EXTREME HEAT,");
}


// ================================================
// 0xee38: WORD 'WEE3A' codep=0x224c parp=0xee3a params=0 returns=2
// ================================================

void WEE3A() // WEE3A
{
  SET_STR_AS_PARAM("EXTREME COLD,");
}


// ================================================
// 0xee4c: WORD 'WEE4E' codep=0x224c parp=0xee4e params=0 returns=2
// ================================================

void WEE4E() // WEE4E
{
  SET_STR_AS_PARAM("CRUSHING GRAVITY,");
}


// ================================================
// 0xee64: WORD 'WEE66' codep=0x224c parp=0xee66 params=0 returns=2
// ================================================

void WEE66() // WEE66
{
  SET_STR_AS_PARAM("VIOLENT STORMS,");
}


// ================================================
// 0xee7a: WORD 'WEE7C' codep=0x224c parp=0xee7c params=0 returns=2
// ================================================

void WEE7C() // WEE7C
{
  SET_STR_AS_PARAM("LACK OF OXYGEN,");
}


// ================================================
// 0xee90: WORD 'WEE92' codep=0x224c parp=0xee92 params=0 returns=2
// ================================================

void WEE92() // WEE92
{
  SET_STR_AS_PARAM("LACK OF WATER,");
}


// ================================================
// 0xeea5: WORD 'WEEA7' codep=0x224c parp=0xeea7 params=0 returns=2
// ================================================

void WEEA7() // WEEA7
{
  SET_STR_AS_PARAM("EXISTING SENTIENTS,");
}


// ================================================
// 0xeebf: WORD 'WEEC1' codep=0x224c parp=0xeec1 params=0 returns=2
// ================================================

void WEEC1() // WEEC1
{
  SET_STR_AS_PARAM("TEMPORAL DISPLACEMENT,");
}


// ================================================
// 0xeedc: WORD '(BAD-PLAN)' codep=0x4b3b parp=0xeeeb
// ================================================

void _ro_BAD_dash_PLAN_rc_() // (BAD-PLAN)
{
  switch(Pop()) // (BAD-PLAN)
  {
  case 1:
    WEE26(); // WEE26
    break;
  case 2:
    WEE3A(); // WEE3A
    break;
  case 3:
    WEE4E(); // WEE4E
    break;
  case 4:
    WEE66(); // WEE66
    break;
  case 5:
    WEE7C(); // WEE7C
    break;
  case 6:
    WEE92(); // WEE92
    break;
  case 7:
    WEEA7(); // WEEA7
    break;
  case 8:
    WEEC1(); // WEEC1
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xef0f: WORD 'WEF11' codep=0x224c parp=0xef11 params=0 returns=0
// ================================================

void WEF11() // WEF11
{
  SET_STR_AS_PARAM("YOU HAVE BEEN FINED");
  WEDC8(); // WEDC8
}


// ================================================
// 0xef2b: WORD 'WEF2D' codep=0x224c parp=0xef2d
// ================================================

void WEF2D() // WEF2D
{
  unsigned short int i, imax;
  Push(0);
  Push(0x000b);
  WE96C(); // WE96C
  SET_STR_AS_PARAM("DUE TO");
  WEDC8(); // WEDC8
  Push(9);
  Push(1);

  i = Pop();
  imax = Pop();
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
      Push(Read16(0x65e1+WE5C0.offset)&0xFF); // WE5C0<IFIELD> C@
      _st_(); // <
      Push(!Pop()); //  NOT
      Push(Read16(0x65e1+WE5C0.offset)&0xFF); // WE5C0<IFIELD> C@
      _plus_BIT(); // +BIT
      Push(1);
      _gt_(); // >
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        SET_STR_AS_PARAM("AND");
        WEDC8(); // WEDC8
      }
      WEDC8(); // WEDC8
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  SET_STR_AS_PARAM("THIS PLANET PROVED UNSUITABLE FOR COLONIZATION.");
  WEDC8(); // WEDC8
  WEF11(); // WEF11
  Push(Read16(0x65e1+WE5AC.offset)&0xFF); // WE5AC<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(0x03e8);
  M_star_(); // M*
  Push(0x0064); Push(0x0000);
  DMAX(); // DMAX
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  WEDC8(); // WEDC8
  SET_STR_AS_PARAM("SP'S.");
  WEDC8(); // WEDC8
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  SET_STR_AS_PARAM("THIS IS ONLY A WARNING, YOUR NEXT FINE WILL BE HEAVY.");
  WEDC8(); // WEDC8
}


// ================================================
// 0xf022: WORD 'WF024' codep=0x224c parp=0xf024 params=0 returns=0
// ================================================

void WF024() // WF024
{
  SET_STR_AS_PARAM("THIS PLANET PROVED TO BE SUITABLE FOR COLONIZATION.");
  WEDC8(); // WEDC8
}


// ================================================
// 0xf05e: WORD 'WF060' codep=0x224c parp=0xf060 params=0 returns=0
// ================================================

void WF060() // WF060
{
  SET_STR_AS_PARAM("GOOD WORK! YOU HAVE LOCATED AN OPTIMAL PLANET.");
  WEDC8(); // WEDC8
}


// ================================================
// 0xf095: WORD 'WF097' codep=0x224c parp=0xf097
// ================================================

void WF097() // WF097
{
  SET_STR_AS_PARAM("YOU HAVE EARNED A BONUS OF");
  WEDC8(); // WEDC8
  Push(Read16(0x65e1+WE5AC.offset)&0xFF); // WE5AC<IFIELD> C@
  Push(0x03e8);
  U_star_(); // U*
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  WEDC8(); // WEDC8
  SET_STR_AS_PARAM("SP'S FOR THIS RECOMMENDATION.");
  WEDC8(); // WEDC8
}


// ================================================
// 0xf0ec: WORD 'WF0EE' codep=0x224c parp=0xf0ee
// ================================================

void WF0EE() // WF0EE
{
  Push(0);
  Push(0x000b);
  WE96C(); // WE96C
  Push(Read16(0x65e1+WE5AC.offset)&0xFF); // WE5AC<IFIELD> C@
  Push(0x0028);
  _gt_(); // >
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    WF060(); // WF060
  } else
  {
    WF024(); // WF024
  }
  WF097(); // WF097
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
// 0xf140: WORD 'WF142' codep=0x224c parp=0xf142
// ================================================

void WF142() // WF142
{
  Push(Read16(0x65e1+WE5C0.offset)&0xFF); // WE5C0<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    WEF2D(); // WEF2D
  } else
  {
    WF0EE(); // WF0EE
  }
  WED8E(); // WED8E
  IsLAST(); // ?LAST
  if (Pop() != 0)
  {
    WE99C(); // WE99C
    WE99C(); // WE99C
    SET_STR_AS_PARAM("END OF EVALUATIONS");
    WEDC8(); // WEDC8
    Push2Words("*OP");
    _gt_C_plus_S(); // >C+S
    IOPEN(); // IOPEN
    Push(0x000b);
    Push(0x002d);
    IFIND(); // IFIND
    Pop(); // DROP
    IOPEN(); // IOPEN
    while(1)
    {
      IsNULL(); // ?NULL
      Push(!Pop()); //  NOT
      if (Pop() == 0) break;

      IDELETE(); // IDELETE
    }
    Push(3);
    _star_CLOSE(); // *CLOSE
    return;
  }
  Push(0);
  Push(0x0022);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS SPACEBAR FOR NEXT EVALUATION", 34); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf1d6: WORD 'WF1D8' codep=0x224c parp=0xf1d8
// ================================================

void WF1D8() // WF1D8
{
  WE8E6(); // WE8E6
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
// 0xf212: WORD 'WF214' codep=0x224c parp=0xf214
// ================================================

void WF214() // WF214
{
  Push(0);
  Push(0x001a);
  CMESS(); // CMESS
  WE5FE(); // WE5FE
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xf224: WORD 'WF226' codep=0x224c parp=0xf226
// ================================================

void WF226() // WF226
{
  Push(0xc261); // 'OVINIT-_1'
  MODULE(); // MODULE
  Push(0xc2ed); // 'T+BALAN'
  MODULE(); // MODULE
  Push(0);
  Push(0xc273); // 'OVTRANS'
  MODULE(); // MODULE
  WF214(); // WF214
}


// ================================================
// 0xf23e: WORD 'WF240' codep=0x224c parp=0xf240
// ================================================

void WF240() // WF240
{
  WF1D8(); // WF1D8
  PRINT("LOSS OF TERRAIN VEHICLE", 23); // (.")
  WE992(); // WE992
  Push(0x00d2);
  WEE10(); // WEE10
  WEDF8(); // WEDF8
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(0xd8f0); Push(0xffff);
  WF226(); // WF226
  Push(pp_IsTV); // ?TV
  ON_2(); // ON_2
}


// ================================================
// 0xf278: WORD 'WF27A' codep=0x224c parp=0xf27a
// ================================================

void WF27A() // WF27A
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
}


// ================================================
// 0xf28c: WORD 'WF28E' codep=0x224c parp=0xf28e
// ================================================

void WF28E() // WF28E
{
  WF27A(); // WF27A
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Pop(); // DROP
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
      _gt_FLAG(); // >FLAG
      Push(Pop() & Pop()); // AND
      ICLOSE(); // ICLOSE
    }
  }
  Push(Pop()==0?1:0); //  0=
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf2ba: WORD 'WF2BC' codep=0x224c parp=0xf2bc
// ================================================

void WF2BC() // WF2BC
{
  WF1D8(); // WF1D8
  PRINT("TOWING CHARGES", 14); // (.")
  WE992(); // WE992
  Push(0x00d3);
  WEE10(); // WEE10
  WEDF8(); // WEDF8
  Push(3);
  _star_CLOSE(); // *CLOSE
  WE99C(); // WE99C
  WEF11(); // WEF11
  SPACE(); // SPACE
  Push(pp_TOWFINE); // TOWFINE
  _2_at_(); // 2@
  D_dot_(); // D.
  PRINT("SP.", 3); // (.")
  WF28E(); // WF28E
  if (Pop() != 0)
  {
    WE99C(); // WE99C
    Push(0x00d3);
    WEE10(); // WEE10
    ILAST(); // ILAST
    WEDF8(); // WEDF8
    Push(3);
    _star_CLOSE(); // *CLOSE
    Push(0x001a);
    Push(6);
    ICREATE(); // ICREATE
    _gt_C_plus_S(); // >C+S
    Push(0x0064);
    Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
    Store_2(); // !_2
    CI(); // CI
    ICLOSE(); // ICLOSE
    Push2Words("*STARSH");
    _gt_C_plus_S(); // >C+S
    _gt_BOX(); // >BOX
    ICLOSE(); // ICLOSE
    Push(0xb6ec); // '=CARGO'
    MODULE(); // MODULE
  }
  Push(pp_TOWFINE); // TOWFINE
  _2_at_(); // 2@
  DNEGATE(); // DNEGATE
  WF226(); // WF226
  Push(pp_IsRECALL); // ?RECALL
  _099(); // 099
}


// ================================================
// 0xf337: WORD 'WF339' codep=0x224c parp=0xf339
// ================================================

void WF339() // WF339
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001c);
  Push(0x0037);
  IFIND(); // IFIND
  Pop(); // DROP
  BOX_gt_(); // BOX>
  ROT(); // ROT
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
  _gt_INACTI(); // >INACTI
  Push(0x86a0); Push(0x0001);
  Push(0xc261); // 'OVINIT-_1'
  MODULE(); // MODULE
  Push(0xc2ed); // 'T+BALAN'
  MODULE(); // MODULE
  Push(3);
  Push(0xc273); // 'OVTRANS'
  MODULE(); // MODULE
  WF214(); // WF214
}


// ================================================
// 0xf389: WORD 'WF38B' codep=0x224c parp=0xf38b
// ================================================

void WF38B() // WF38B
{
  WF1D8(); // WF1D8
  PRINT("ENDURIUM", 8); // (.")
  WE992(); // WE992
  Push(0x00d4);
  WEE10(); // WEE10
  WEDF8(); // WEDF8
  Push(3);
  _star_CLOSE(); // *CLOSE
  WE99C(); // WE99C
  Push(0x3cb0); Push(0xffff);
  WF226(); // WF226
}


// ================================================
// 0xf3b2: WORD 'WF3B4' codep=0x224c parp=0xf3b4
// ================================================

void WF3B4() // WF3B4
{
  WF27A(); // WF27A
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(0x0017);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      IDELETE(); // IDELETE
      Push(Read16(cc_TRUE)); // TRUE
      Push(0xb6ec); // '=CARGO'
      MODULE(); // MODULE
    } else
    {
      Push(Read16(cc_FALSE)); // FALSE
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Push(Read16(cc_FALSE)); // FALSE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf3e8: WORD 'WF3EA' codep=0x224c parp=0xf3ea
// ================================================

void WF3EA() // WF3EA
{
  WF1D8(); // WF1D8
  PRINT("DATA CUBE", 9); // (.")
  WE992(); // WE992
  Push(0x00d5);
  WEE10(); // WEE10
  WEDF8(); // WEDF8
  WE99C(); // WE99C
  INEXT(); // INEXT
  WEDF8(); // WEDF8
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(0x001c);
  Push(0x0035);
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  Push(pp_Is3); // ?3
  ON_2(); // ON_2
  WF214(); // WF214
  WF339(); // WF339
}


// ================================================
// 0xf436: WORD 'WF438' codep=0x224c parp=0xf438 params=0 returns=1
// ================================================

void WF438() // WF438
{
  Push(0x0037);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  Push(Pop() & (Read16(pp_Is3)==0?1:0)); //  ?3 @ 0= AND
}


// ================================================
// 0xf44c: WORD 'WF44E' codep=0x224c parp=0xf44e
// ================================================

void WF44E() // WF44E
{
  do
  {
    WE8E6(); // WE8E6
    WEC6F(); // WEC6F
    WF142(); // WF142
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); Pop(); // 2DROP
      IsTRIG(); // ?TRIG
      IsLAST(); // ?LAST
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
    CI_i_(); // CI'
    _gt_C_plus_S(); // >C+S
    IsCHILD(); // ?CHILD
    ICLOSE(); // ICLOSE
    Push(!Pop()); //  NOT
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
}


// ================================================
// 0xf478: WORD 'WF47A' codep=0x224c parp=0xf47a
// ================================================

void WF47A() // WF47A
{
  WE8E6(); // WE8E6
  _gt_1FONT(); // >1FONT
  Push(pp_IsEVAL); // ?EVAL
  _099(); // 099
  Push(pp_Is_gt_OP); // ?>OP
  _099(); // 099
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push(!Read16(pp_IsTV)); // ?TV @ NOT
  if (Pop() != 0)
  {
    WF240(); // WF240
  }
  Push(Read16(pp_IsRECALL)); // ?RECALL @
  if (Pop() != 0)
  {
    WF2BC(); // WF2BC
  }
  WF3B4(); // WF3B4
  if (Pop() != 0)
  {
    WF38B(); // WF38B
  }
  WF438(); // WF438
  if (Pop() != 0)
  {
    WF3EA(); // WF3EA
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
    WF44E(); // WF44E
    CDROP(); // CDROP
  } else
  {
    WED1F(); // WED1F
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4da: WORD 'OP-CASE' codep=0x4b3b parp=0xf4e6
// ================================================

void OP_dash_CASE() // OP-CASE
{
  switch(Pop()) // OP-CASE
  {
  case 0:
    WEB80(); // WEB80
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
// 0xf4f6: WORD '(U-OP)' codep=0x224c parp=0xf501
// ================================================
// entry

void _ro_U_dash_OP_rc_() // (U-OP)
{
  WE7BC(); // WE7BC
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
      Push(pp_WE71C); // WE71C
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

// 0xf53d: db 0x4f 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x20 0x20 0x00 'OP-VOC__________________________    '

