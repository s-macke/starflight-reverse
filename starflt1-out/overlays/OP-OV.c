// ====== OVERLAY 'OP-OV' ======
// store offset = 0xe430
// overlay size   = 0x1130

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe446  codep:0x1d29 parp:0xe446 size:0x0002 C-string:'UNK_0xe446'
//      UNK_0xe44a  codep:0x224c parp:0xe44a size:0x0006 C-string:'UNK_0xe44a'
//      UNK_0xe452  codep:0x744d parp:0xe452 size:0x0003 C-string:'UNK_0xe452'
//      UNK_0xe457  codep:0x744d parp:0xe457 size:0x0003 C-string:'UNK_0xe457'
//      UNK_0xe45c  codep:0x744d parp:0xe45c size:0x0003 C-string:'UNK_0xe45c'
//      UNK_0xe461  codep:0x744d parp:0xe461 size:0x0003 C-string:'UNK_0xe461'
//      UNK_0xe466  codep:0x744d parp:0xe466 size:0x0003 C-string:'UNK_0xe466'
//      UNK_0xe46b  codep:0x744d parp:0xe46b size:0x0003 C-string:'UNK_0xe46b'
//      UNK_0xe470  codep:0x744d parp:0xe470 size:0x0003 C-string:'UNK_0xe470'
//      UNK_0xe475  codep:0x744d parp:0xe475 size:0x0003 C-string:'UNK_0xe475'
//      UNK_0xe47a  codep:0x224c parp:0xe47a size:0x0008 C-string:'UNK_0xe47a'
//      UNK_0xe484  codep:0x224c parp:0xe484 size:0x000e C-string:'UNK_0xe484'
//      UNK_0xe494  codep:0x224c parp:0xe494 size:0x0010 C-string:'UNK_0xe494'
//      UNK_0xe4a6  codep:0x1d29 parp:0xe4a6 size:0x003a C-string:'UNK_0xe4a6'
//      UNK_0xe4e2  codep:0x224c parp:0xe4e2 size:0x002a C-string:'UNK_0xe4e2'
//      UNK_0xe50e  codep:0x224c parp:0xe50e size:0x007c C-string:'UNK_0xe50e'
//      UNK_0xe58c  codep:0x1d29 parp:0xe58c size:0x000d C-string:'UNK_0xe58c'
//      UNK_0xe59b  codep:0x224c parp:0xe59b size:0x005a C-string:'UNK_0xe59b'
//      UNK_0xe5f7  codep:0x224c parp:0xe5f7 size:0x003e C-string:'UNK_0xe5f7'
//      UNK_0xe637  codep:0x224c parp:0xe637 size:0x002c C-string:'UNK_0xe637'
//      UNK_0xe665  codep:0x224c parp:0xe665 size:0x006c C-string:'UNK_0xe665'
//      UNK_0xe6d3  codep:0x224c parp:0xe6d3 size:0x0060 C-string:'UNK_0xe6d3'
//      UNK_0xe735  codep:0x224c parp:0xe735 size:0x0054 C-string:'UNK_0xe735'
//      UNK_0xe78b  codep:0x224c parp:0xe78b size:0x003d C-string:'UNK_0xe78b'
//      UNK_0xe7ca  codep:0x224c parp:0xe7ca size:0x0050 C-string:'UNK_0xe7ca'
//      UNK_0xe81c  codep:0x224c parp:0xe81c size:0x0024 C-string:'UNK_0xe81c'
//      UNK_0xe842  codep:0x224c parp:0xe842 size:0x000e C-string:'UNK_0xe842'
//      UNK_0xe852  codep:0x1d29 parp:0xe852 size:0x0002 C-string:'UNK_0xe852'
//      UNK_0xe856  codep:0x224c parp:0xe856 size:0x000e C-string:'UNK_0xe856'
//      UNK_0xe866  codep:0x224c parp:0xe866 size:0x0022 C-string:'UNK_0xe866'
//      UNK_0xe88a  codep:0x224c parp:0xe88a size:0x002a C-string:'UNK_0xe88a'
//      UNK_0xe8b6  codep:0x224c parp:0xe8b6 size:0x001c C-string:'UNK_0xe8b6'
//      UNK_0xe8d4  codep:0x224c parp:0xe8d4 size:0x0028 C-string:'UNK_0xe8d4'
//      UNK_0xe8fe  codep:0x1d29 parp:0xe8fe size:0x0002 C-string:'UNK_0xe8fe'
//      UNK_0xe902  codep:0x224c parp:0xe902 size:0x000e C-string:'UNK_0xe902'
//      UNK_0xe912  codep:0x224c parp:0xe912 size:0x00ce C-string:'UNK_0xe912'
//      UNK_0xe9e2  codep:0x224c parp:0xe9e2 size:0x0018 C-string:'UNK_0xe9e2'
//      UNK_0xe9fc  codep:0x224c parp:0xe9fc size:0x0010 C-string:'UNK_0xe9fc'
//       (NOTICES)  codep:0x4a4f parp:0xea1a size:0x000c C-string:'_ro_NOTICES_rc_'
//      UNK_0xea28  codep:0x224c parp:0xea28 size:0x00df C-string:'UNK_0xea28'
//      UNK_0xeb09  codep:0x224c parp:0xeb09 size:0x00b6 C-string:'UNK_0xeb09'
//      UNK_0xebc1  codep:0x224c parp:0xebc1 size:0x006d C-string:'UNK_0xebc1'
//      UNK_0xec30  codep:0x224c parp:0xec30 size:0x002e C-string:'UNK_0xec30'
//      UNK_0xec60  codep:0x224c parp:0xec60 size:0x0012 C-string:'UNK_0xec60'
//      UNK_0xec74  codep:0x224c parp:0xec74 size:0x0012 C-string:'UNK_0xec74'
//      UNK_0xec88  codep:0x224c parp:0xec88 size:0x0016 C-string:'UNK_0xec88'
//      UNK_0xeca0  codep:0x224c parp:0xeca0 size:0x0014 C-string:'UNK_0xeca0'
//      UNK_0xecb6  codep:0x224c parp:0xecb6 size:0x0014 C-string:'UNK_0xecb6'
//      UNK_0xeccc  codep:0x224c parp:0xeccc size:0x0013 C-string:'UNK_0xeccc'
//      (BAD-PLAN)  codep:0x4a4f parp:0xecee size:0x001c C-string:'_ro_BAD_dash_PLAN_rc_'
//      UNK_0xed0c  codep:0x224c parp:0xed0c size:0x010b C-string:'UNK_0xed0c'
//      UNK_0xee19  codep:0x224c parp:0xee19 size:0x003a C-string:'UNK_0xee19'
//      UNK_0xee55  codep:0x224c parp:0xee55 size:0x0035 C-string:'UNK_0xee55'
//      UNK_0xee8c  codep:0x224c parp:0xee8c size:0x0055 C-string:'UNK_0xee8c'
//      UNK_0xeee3  codep:0x224c parp:0xeee3 size:0x0052 C-string:'UNK_0xeee3'
//      UNK_0xef37  codep:0x224c parp:0xef37 size:0x0083 C-string:'UNK_0xef37'
//      UNK_0xefbc  codep:0x224c parp:0xefbc size:0x003a C-string:'UNK_0xefbc'
//      UNK_0xeff8  codep:0x224c parp:0xeff8 size:0x0031 C-string:'UNK_0xeff8'
//      UNK_0xf02b  codep:0x224c parp:0xf02b size:0x0018 C-string:'UNK_0xf02b'
//      UNK_0xf045  codep:0x224c parp:0xf045 size:0x00e5 C-string:'UNK_0xf045'
//      UNK_0xf12c  codep:0x224c parp:0xf12c size:0x0146 C-string:'UNK_0xf12c'
//      UNK_0xf274  codep:0x224c parp:0xf274 size:0x01da C-string:'UNK_0xf274'
//      UNK_0xf450  codep:0x224c parp:0xf450 size:0x0028 C-string:'UNK_0xf450'
//      UNK_0xf47a  codep:0x224c parp:0xf47a size:0x005a C-string:'UNK_0xf47a'
//         OP-CASE  codep:0x4a4f parp:0xf4e0 size:0x0010 C-string:'OP_dash_CASE'
//          (U-OP)  codep:0x224c parp:0xf4fb size:0x0000 C-string:'_ro_U_dash_OP_rc_'

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
const unsigned short int pp_UNK_0xe446 = 0xe446; // UNK_0xe446 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4a6 = 0xe4a6; // UNK_0xe4a6 size: 58
// {0x41, 0x9d, 0x61, 0x9d, 0x6f, 0x8f, 0x6f, 0x79, 0x64, 0x79, 0x64, 0x87, 0x60, 0x8b, 0x58, 0x8b, 0x58, 0x5d, 0x60, 0x5d, 0x64, 0x61, 0x64, 0x6f, 0x6f, 0x6f, 0x6f, 0x58, 0x61, 0x4a, 0x41, 0x4a, 0x33, 0x58, 0x33, 0x6f, 0x3e, 0x6f, 0x3e, 0x61, 0x42, 0x5d, 0x4a, 0x5d, 0x4a, 0x8b, 0x42, 0x8b, 0x3e, 0x87, 0x3e, 0x79, 0x33, 0x79, 0x33, 0x8f, 0x41, 0x9d}

const unsigned short int pp_UNK_0xe58c = 0xe58c; // UNK_0xe58c size: 13
// {0x02, 0x0a, 0x02, 0x09, 0x34, 0x0a, 0x37, 0x09, 0x40, 0x0a, 0x78, 0x09, 0x26}

const unsigned short int pp_UNK_0xe852 = 0xe852; // UNK_0xe852 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe8fe = 0xe8fe; // UNK_0xe8fe size: 2
// {0xff, 0xff}




// 0xe442: db 0x11 0x01 '  '

// ================================================
// 0xe444: WORD 'UNK_0xe446' codep=0x1d29 parp=0xe446
// ================================================
// 0xe446: db 0x3a 0x20 ': '

// ================================================
// 0xe448: WORD 'UNK_0xe44a' codep=0x224c parp=0xe44a params=0 returns=1
// ================================================

void UNK_0xe44a() // UNK_0xe44a
{
  Push(Read16(pp_UNK_0xe446)); // UNK_0xe446 @
}


// ================================================
// 0xe450: WORD 'UNK_0xe452' codep=0x744d parp=0xe452
// ================================================
IFieldType UNK_0xe452 = {NOTICEIDX, 0x0a, 0x02};

// ================================================
// 0xe455: WORD 'UNK_0xe457' codep=0x744d parp=0xe457
// ================================================
IFieldType UNK_0xe457 = {STRINGIDX, 0x0b, 0xff};

// ================================================
// 0xe45a: WORD 'UNK_0xe45c' codep=0x744d parp=0xe45c
// ================================================
IFieldType UNK_0xe45c = {EVALUATIONIDX, 0x0a, 0x01};

// ================================================
// 0xe45f: WORD 'UNK_0xe461' codep=0x744d parp=0xe461
// ================================================
IFieldType UNK_0xe461 = {EVALUATIONIDX, 0x0b, 0x02};

// ================================================
// 0xe464: WORD 'UNK_0xe466' codep=0x744d parp=0xe466
// ================================================
IFieldType UNK_0xe466 = {EVALUATIONIDX, 0x11, 0x02};

// ================================================
// 0xe469: WORD 'UNK_0xe46b' codep=0x744d parp=0xe46b
// ================================================
IFieldType UNK_0xe46b = {EVALUATIONIDX, 0x13, 0x01};

// ================================================
// 0xe46e: WORD 'UNK_0xe470' codep=0x744d parp=0xe470
// ================================================
IFieldType UNK_0xe470 = {EVALUATIONIDX, 0x14, 0x01};

// ================================================
// 0xe473: WORD 'UNK_0xe475' codep=0x744d parp=0xe475
// ================================================
IFieldType UNK_0xe475 = {EVALUATIONIDX, 0x15, 0x0f};

// ================================================
// 0xe478: WORD 'UNK_0xe47a' codep=0x224c parp=0xe47a params=0 returns=0
// ================================================
// orphan

void UNK_0xe47a() // UNK_0xe47a
{
  Push(0xbd70); // probable 'OVQUITMESS'
  MODULE(); // MODULE
}


// ================================================
// 0xe482: WORD 'UNK_0xe484' codep=0x224c parp=0xe484 params=0 returns=0
// ================================================

void UNK_0xe484() // UNK_0xe484
{
  Push(0);
  UNK_0xe44a(); // UNK_0xe44a
  X0MESS(); // X0MESS
  Push(1);
  UNK_0xe44a(); // UNK_0xe44a
  X0MESS(); // X0MESS
}


// ================================================
// 0xe492: WORD 'UNK_0xe494' codep=0x224c parp=0xe494 params=5 returns=0
// ================================================

void UNK_0xe494() // UNK_0xe494
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
// 0xe4a4: WORD 'UNK_0xe4a6' codep=0x1d29 parp=0xe4a6
// ================================================
// 0xe4a6: db 0x41 0x9d 0x61 0x9d 0x6f 0x8f 0x6f 0x79 0x64 0x79 0x64 0x87 0x60 0x8b 0x58 0x8b 0x58 0x5d 0x60 0x5d 0x64 0x61 0x64 0x6f 0x6f 0x6f 0x6f 0x58 0x61 0x4a 0x41 0x4a 0x33 0x58 0x33 0x6f 0x3e 0x6f 0x3e 0x61 0x42 0x5d 0x4a 0x5d 0x4a 0x8b 0x42 0x8b 0x3e 0x87 0x3e 0x79 0x33 0x79 0x33 0x8f 0x41 0x9d 'A a o oydyd ` X X]`]dadooooXaJAJ3X3o>o>aB]J]J B > >y3y3 A '

// ================================================
// 0xe4e0: WORD 'UNK_0xe4e2' codep=0x224c parp=0xe4e2 params=2 returns=0
// ================================================

void UNK_0xe4e2() // UNK_0xe4e2
{
  unsigned short int i, imax;
  GetColor(BROWN);
  StoreCOLOR(); // !COLOR
  Push(pp_UNK_0xe4a6); // UNK_0xe4a6
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
  UNK_0xe494(); // UNK_0xe494
}


// ================================================
// 0xe50c: WORD 'UNK_0xe50e' codep=0x224c parp=0xe50e params=2 returns=0
// ================================================

void UNK_0xe50e() // UNK_0xe50e
{
  GetColor(WHITE);
  GetColor(WHITE);
  GetColor(LT_dash_BLUE);
  IsMRC(); // ?MRC
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe446); // UNK_0xe446
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
  UNK_0xe4e2(); // UNK_0xe4e2
}


// ================================================
// 0xe58a: WORD 'UNK_0xe58c' codep=0x1d29 parp=0xe58c
// ================================================
// 0xe58c: db 0x02 0x0a 0x02 0x09 0x34 0x0a 0x37 0x09 0x40 0x0a 0x78 0x09 0x26 '    4 7 @ x &'

// ================================================
// 0xe599: WORD 'UNK_0xe59b' codep=0x224c parp=0xe59b params=0 returns=0
// ================================================

void UNK_0xe59b() // UNK_0xe59b
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
// 0xe5f5: WORD 'UNK_0xe5f7' codep=0x224c parp=0xe5f7 params=0 returns=0
// ================================================

void UNK_0xe5f7() // UNK_0xe5f7
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
// 0xe635: WORD 'UNK_0xe637' codep=0x224c parp=0xe637 params=2 returns=0
// ================================================

void UNK_0xe637() // UNK_0xe637
{
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xe50e(); // UNK_0xe50e
  UNK_0xe5f7(); // UNK_0xe5f7
  UNK_0xe59b(); // UNK_0xe59b
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
  Push(pp_UNK_0xe58c); // UNK_0xe58c
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xe663: WORD 'UNK_0xe665' codep=0x224c parp=0xe665 params=0 returns=0
// ================================================

void UNK_0xe665() // UNK_0xe665
{
  UNK_0xe484(); // UNK_0xe484
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
// 0xe6d1: WORD 'UNK_0xe6d3' codep=0x224c parp=0xe6d3 params=0 returns=0
// ================================================

void UNK_0xe6d3() // UNK_0xe6d3
{
  UNK_0xe484(); // UNK_0xe484
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
// 0xe733: WORD 'UNK_0xe735' codep=0x224c parp=0xe735 params=0 returns=2
// ================================================

void UNK_0xe735() // UNK_0xe735
{
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  Push(0x00c5);
  Push(2);
  Push(0x000c);
  Push(0x009d);
  UNK_0xe44a(); // UNK_0xe44a
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
// 0xe789: WORD 'UNK_0xe78b' codep=0x224c parp=0xe78b params=0 returns=0
// ================================================

void UNK_0xe78b() // UNK_0xe78b
{
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  Push(0x00c5);
  Push(3);
  Push(0x000c);
  Push(0x009c);
  UNK_0xe44a(); // UNK_0xe44a
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
// 0xe7c8: WORD 'UNK_0xe7ca' codep=0x224c parp=0xe7ca params=2 returns=4
// ================================================

void UNK_0xe7ca() // UNK_0xe7ca
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
// 0xe81a: WORD 'UNK_0xe81c' codep=0x224c parp=0xe81c params=2 returns=0
// ================================================

void UNK_0xe81c() // UNK_0xe81c
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
// 0xe840: WORD 'UNK_0xe842' codep=0x224c parp=0xe842 params=0 returns=0
// ================================================

void UNK_0xe842() // UNK_0xe842
{
  Push(0);
  Push(1 + Read16(pp_CTY)); // 1 CTY @ +
  UNK_0xe81c(); // UNK_0xe81c
}


// ================================================
// 0xe850: WORD 'UNK_0xe852' codep=0x1d29 parp=0xe852
// ================================================
// 0xe852: db 0x3a 0x20 ': '

// ================================================
// 0xe854: WORD 'UNK_0xe856' codep=0x224c parp=0xe856 params=1 returns=1
// ================================================

void UNK_0xe856() // UNK_0xe856
{
  Push(Pop() + Read16(pp_CTX)); //  CTX @ +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe864: WORD 'UNK_0xe866' codep=0x224c parp=0xe866 params=0 returns=0
// ================================================

void UNK_0xe866() // UNK_0xe866
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
    LCOPYBLK(); // LCOPYBLK
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe888: WORD 'UNK_0xe88a' codep=0x224c parp=0xe88a params=2 returns=0
// ================================================

void UNK_0xe88a() // UNK_0xe88a
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    UNK_0xe856(); // UNK_0xe856
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      UNK_0xe866(); // UNK_0xe866
      Push(0);
      Push(0x0015);
      UNK_0xe81c(); // UNK_0xe81c
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
// 0xe8b4: WORD 'UNK_0xe8b6' codep=0x224c parp=0xe8b6 params=0 returns=0
// ================================================

void UNK_0xe8b6() // UNK_0xe8b6
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
// 0xe8d2: WORD 'UNK_0xe8d4' codep=0x224c parp=0xe8d4 params=3 returns=0
// ================================================

void UNK_0xe8d4() // UNK_0xe8d4
{
  Push(Pop() * 3); //  3 *
  Push(0x0015);
  UNK_0xe81c(); // UNK_0xe81c
  Push(pp_UNK_0xe852); // UNK_0xe852
  OFF(); // OFF
  do
  {
    UNK_0xe7ca(); // UNK_0xe7ca
    UNK_0xe88a(); // UNK_0xe88a
    SPACE(); // SPACE
    Push(1);
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
  UNK_0xe866(); // UNK_0xe866
}


// ================================================
// 0xe8fc: WORD 'UNK_0xe8fe' codep=0x1d29 parp=0xe8fe
// ================================================
// 0xe8fe: db 0xff 0xff '  '

// ================================================
// 0xe900: WORD 'UNK_0xe902' codep=0x224c parp=0xe902 params=0 returns=1
// ================================================

void UNK_0xe902() // UNK_0xe902
{
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(Read16(0x63ef+UNK_0xe452.offset)); // UNK_0xe452<IFIELD> @
  _st_(); // <
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe910: WORD 'UNK_0xe912' codep=0x224c parp=0xe912
// ================================================

void UNK_0xe912() // UNK_0xe912
{
  UNK_0xe6d3(); // UNK_0xe6d3
  UNK_0xe8b6(); // UNK_0xe8b6
  UNK_0xe866(); // UNK_0xe866
  Push(Read16(0x63ef+UNK_0xe452.offset)); // UNK_0xe452<IFIELD> @
  PAD(); // PAD
  DATE_do__gt_ADR(); // DATE$>ADR
  PAD(); // PAD
  Push(0x000a);
  Push(0);
  UNK_0xe8d4(); // UNK_0xe8d4
  IOPEN(); // IOPEN
  do
  {
    Push((0x63ef+UNK_0xe457.offset) + 1); // UNK_0xe457<IFIELD> 1+
    COUNT(); // COUNT
    HUFF_gt_(); // HUFF>
    Push(pp_LSCAN); // LSCAN
    COUNT(); // COUNT
    Push(1);
    UNK_0xe8d4(); // UNK_0xe8d4
    Push(Read16(0x63ef+UNK_0xe457.offset)&0xFF); // UNK_0xe457<IFIELD> C@
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
      UNK_0xe8d4(); // UNK_0xe8d4
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
  Push(Read16(pp_UNK_0xe8fe)); // UNK_0xe8fe @
  Push(Read16(0x63ef+UNK_0xe452.offset)); // UNK_0xe452<IFIELD> @
  MAX(); // MAX
  Push(pp_UNK_0xe8fe); // UNK_0xe8fe
  Store_3(); // !_3
  UNK_0xe8b6(); // UNK_0xe8b6
  INEXT(); // INEXT
  UNK_0xe902(); // UNK_0xe902
  Push(!Pop()); //  NOT
  IsFIRST(); // ?FIRST
  Push(Pop() | Pop()); // OR
  IPREV(); // IPREV
  if (Pop() != 0)
  {
    UNK_0xe866(); // UNK_0xe866
    SET_STR_AS_PARAM("***END OF NOTICES***");
    Push(0x000d);
    UNK_0xe8d4(); // UNK_0xe8d4
  }
  UNK_0xe665(); // UNK_0xe665
}


// ================================================
// 0xe9e0: WORD 'UNK_0xe9e2' codep=0x224c parp=0xe9e2 params=0 returns=0
// ================================================

void UNK_0xe9e2() // UNK_0xe9e2
{
  INEXT(); // INEXT
  UNK_0xe902(); // UNK_0xe902
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xe912(); // UNK_0xe912
    return;
  }
  IPREV(); // IPREV
}


// ================================================
// 0xe9fa: WORD 'UNK_0xe9fc' codep=0x224c parp=0xe9fc params=0 returns=0
// ================================================

void UNK_0xe9fc() // UNK_0xe9fc
{
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  UNK_0xe735(); // UNK_0xe735
  IPREV(); // IPREV
  UNK_0xe912(); // UNK_0xe912
}


// ================================================
// 0xea0c: WORD '(NOTICES)' codep=0x4a4f parp=0xea1a
// ================================================

void _ro_NOTICES_rc_() // (NOTICES)
{
  switch(Pop()) // (NOTICES)
  {
  case 1:
    UNK_0xe9fc(); // UNK_0xe9fc
    break;
  case 65535:
    UNK_0xe9e2(); // UNK_0xe9e2
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xea26: WORD 'UNK_0xea28' codep=0x224c parp=0xea28
// ================================================

void UNK_0xea28() // UNK_0xea28
{
  UNK_0xe735(); // UNK_0xe735
  _gt_1FONT(); // >1FONT
  Push2Words("*OP");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x001c);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN

  label2:
  Push(Read16(0x63ef+UNK_0xe452.offset)); // UNK_0xe452<IFIELD> @
  Push(Read16(pp_UNK_0xe8fe)); // UNK_0xe8fe @
  _gt_(); // >
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  goto label2;

  label1:
  UNK_0xe902(); // UNK_0xe902
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
    UNK_0xe8d4(); // UNK_0xe8d4
  }
  if (Pop() != 0)
  {
    UNK_0xe912(); // UNK_0xe912
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      _ro_NOTICES_rc_(); // (NOTICES) case
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        UNK_0xe735(); // UNK_0xe735
        UNK_0xe912(); // UNK_0xe912
      }
      IsQUIT(); // ?QUIT
    } while(Pop() == 0);
  }
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  UNK_0xe735(); // UNK_0xe735
  UNK_0xe484(); // UNK_0xe484
}


// ================================================
// 0xeb07: WORD 'UNK_0xeb09' codep=0x224c parp=0xeb09 params=0 returns=4
// ================================================

void UNK_0xeb09() // UNK_0xeb09
{
  Push(4);
  Push(0x00ac);
  POS_dot_(); // POS.
  PRINT("RECOMMENDATION: ", 16); // (.")
  Push(0x63ef+UNK_0xe466.offset); // UNK_0xe466<IFIELD>
  Is(); // ?
  Push(4);
  Push(0x00a4);
  POS_dot_(); // POS.
  PRINT("DATE: ", 6); // (.")
  Push(Read16(0x63ef+UNK_0xe461.offset)); // UNK_0xe461<IFIELD> @
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
  Push(Read16(0x63ef+UNK_0xe46b.offset)&0xFF); // UNK_0xe46b<IFIELD> C@
  Draw(); // .
  Push(4);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("NAME: ", 6); // (.")
  Push(0x63ef+UNK_0xe475.offset); // UNK_0xe475<IFIELD>
  Push(0x000f);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(4);
  Push(0x007a);
  POS_dot_(); // POS.
  PRINT("EVALUATION:", 11); // (.")
}


// ================================================
// 0xebbf: WORD 'UNK_0xebc1' codep=0x224c parp=0xebc1 params=0 returns=0
// ================================================

void UNK_0xebc1() // UNK_0xebc1
{
  unsigned short int a;
  UNK_0xe78b(); // UNK_0xe78b
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
// 0xec2e: WORD 'UNK_0xec30' codep=0x224c parp=0xec30 params=2 returns=0
// ================================================

void UNK_0xec30() // UNK_0xec30
{
  do
  {
    UNK_0xe7ca(); // UNK_0xe7ca
    Push(Read16(regsp)); // DUP
    UNK_0xe856(); // UNK_0xe856
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      Push(Pop() + 1); //  1+
      Push(pp_CTX); // CTX
      _plus__ex__2(); // +!_2
    } else
    {
      UNK_0xe842(); // UNK_0xe842
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
// 0xec5e: WORD 'UNK_0xec60' codep=0x224c parp=0xec60 params=0 returns=2
// ================================================

void UNK_0xec60() // UNK_0xec60
{
  SET_STR_AS_PARAM("EXTREME HEAT,");
}


// ================================================
// 0xec72: WORD 'UNK_0xec74' codep=0x224c parp=0xec74 params=0 returns=2
// ================================================

void UNK_0xec74() // UNK_0xec74
{
  SET_STR_AS_PARAM("EXTREME COLD,");
}


// ================================================
// 0xec86: WORD 'UNK_0xec88' codep=0x224c parp=0xec88 params=0 returns=2
// ================================================

void UNK_0xec88() // UNK_0xec88
{
  SET_STR_AS_PARAM("CRUSHING GRAVITY,");
}


// ================================================
// 0xec9e: WORD 'UNK_0xeca0' codep=0x224c parp=0xeca0 params=0 returns=2
// ================================================

void UNK_0xeca0() // UNK_0xeca0
{
  SET_STR_AS_PARAM("VIOLENT STORMS,");
}


// ================================================
// 0xecb4: WORD 'UNK_0xecb6' codep=0x224c parp=0xecb6 params=0 returns=2
// ================================================

void UNK_0xecb6() // UNK_0xecb6
{
  SET_STR_AS_PARAM("LACK OF OXYGEN,");
}


// ================================================
// 0xecca: WORD 'UNK_0xeccc' codep=0x224c parp=0xeccc params=0 returns=2
// ================================================

void UNK_0xeccc() // UNK_0xeccc
{
  SET_STR_AS_PARAM("LACK OF WATER,");
}


// ================================================
// 0xecdf: WORD '(BAD-PLAN)' codep=0x4a4f parp=0xecee
// ================================================

void _ro_BAD_dash_PLAN_rc_() // (BAD-PLAN)
{
  switch(Pop()) // (BAD-PLAN)
  {
  case 1:
    UNK_0xec60(); // UNK_0xec60
    break;
  case 2:
    UNK_0xec74(); // UNK_0xec74
    break;
  case 3:
    UNK_0xec88(); // UNK_0xec88
    break;
  case 4:
    UNK_0xeca0(); // UNK_0xeca0
    break;
  case 5:
    UNK_0xecb6(); // UNK_0xecb6
    break;
  case 6:
    UNK_0xeccc(); // UNK_0xeccc
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed0a: WORD 'UNK_0xed0c' codep=0x224c parp=0xed0c params=1 returns=0
// ================================================

void UNK_0xed0c() // UNK_0xed0c
{
  unsigned short int i, imax;
  Push(0);
  Push(0x000b);
  UNK_0xe81c(); // UNK_0xe81c
  SET_STR_AS_PARAM("DUE TO");
  UNK_0xec30(); // UNK_0xec30
  Push(7);
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
      Push(Read16(0x63ef+UNK_0xe470.offset)&0xFF); // UNK_0xe470<IFIELD> C@
      _st_(); // <
      Push(!Pop()); //  NOT
      Push(Read16(0x63ef+UNK_0xe470.offset)&0xFF); // UNK_0xe470<IFIELD> C@
      _plus_BIT(); // +BIT
      Push(1);
      _gt_(); // >
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        SET_STR_AS_PARAM("AND");
        UNK_0xec30(); // UNK_0xec30
      }
      UNK_0xec30(); // UNK_0xec30
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  SET_STR_AS_PARAM("THIS PLANET PROVED UNSUITABLE FOR COLONIZATION.");
  UNK_0xec30(); // UNK_0xec30
  SET_STR_AS_PARAM("YOU HAVE BEEN FINED");
  UNK_0xec30(); // UNK_0xec30
  Push(Read16(0x63ef+UNK_0xe45c.offset)&0xFF); // UNK_0xe45c<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(0x03e8);
  M_star_(); // M*
  Push(0x0064); Push(0x0000);
  DMAX(); // DMAX
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  UNK_0xec30(); // UNK_0xec30
  SET_STR_AS_PARAM("MU'S.");
  UNK_0xec30(); // UNK_0xec30
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  SET_STR_AS_PARAM("THIS IS ONLY A WARNING, YOUR NEXT FINE WILL BE HEAVY.");
  UNK_0xec30(); // UNK_0xec30
}


// ================================================
// 0xee17: WORD 'UNK_0xee19' codep=0x224c parp=0xee19 params=0 returns=0
// ================================================

void UNK_0xee19() // UNK_0xee19
{
  SET_STR_AS_PARAM("THIS PLANET PROVED TO BE SUITABLE FOR COLONIZATION.");
  UNK_0xec30(); // UNK_0xec30
}


// ================================================
// 0xee53: WORD 'UNK_0xee55' codep=0x224c parp=0xee55 params=0 returns=0
// ================================================

void UNK_0xee55() // UNK_0xee55
{
  SET_STR_AS_PARAM("GOOD WORK! YOU HAVE LOCATED AN OPTIMAL PLANET.");
  UNK_0xec30(); // UNK_0xec30
}


// ================================================
// 0xee8a: WORD 'UNK_0xee8c' codep=0x224c parp=0xee8c params=0 returns=0
// ================================================

void UNK_0xee8c() // UNK_0xee8c
{
  SET_STR_AS_PARAM("YOU HAVE EARNED A BONUS OF");
  UNK_0xec30(); // UNK_0xec30
  Push(Read16(0x63ef+UNK_0xe45c.offset)&0xFF); // UNK_0xe45c<IFIELD> C@
  Push(0x03e8);
  U_star_(); // U*
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  UNK_0xec30(); // UNK_0xec30
  SET_STR_AS_PARAM("MU'S FOR THIS RECOMMENDATION.");
  UNK_0xec30(); // UNK_0xec30
}


// ================================================
// 0xeee1: WORD 'UNK_0xeee3' codep=0x224c parp=0xeee3 params=0 returns=0
// ================================================

void UNK_0xeee3() // UNK_0xeee3
{
  Push(0);
  Push(0x000b);
  UNK_0xe81c(); // UNK_0xe81c
  Push(Read16(0x63ef+UNK_0xe45c.offset)&0xFF); // UNK_0xe45c<IFIELD> C@
  Push(0x0028);
  _gt_(); // >
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    UNK_0xee55(); // UNK_0xee55
  } else
  {
    UNK_0xee19(); // UNK_0xee19
  }
  UNK_0xee8c(); // UNK_0xee8c
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
// 0xef35: WORD 'UNK_0xef37' codep=0x224c parp=0xef37 params=0 returns=0
// ================================================

void UNK_0xef37() // UNK_0xef37
{
  Push(Read16(0x63ef+UNK_0xe470.offset)&0xFF); // UNK_0xe470<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    UNK_0xed0c(); // UNK_0xed0c
  } else
  {
    UNK_0xeee3(); // UNK_0xeee3
  }
  IsLAST(); // ?LAST
  if (Pop() != 0)
  {
    UNK_0xe842(); // UNK_0xe842
    UNK_0xe842(); // UNK_0xe842
    SET_STR_AS_PARAM("END OF EVALUATIONS");
    UNK_0xec30(); // UNK_0xec30
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
// 0xefba: WORD 'UNK_0xefbc' codep=0x224c parp=0xefbc params=0 returns=0
// ================================================

void UNK_0xefbc() // UNK_0xefbc
{
  UNK_0xe78b(); // UNK_0xe78b
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
// 0xeff6: WORD 'UNK_0xeff8' codep=0x224c parp=0xeff8 params=0 returns=0
// ================================================

void UNK_0xeff8() // UNK_0xeff8
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
// 0xf029: WORD 'UNK_0xf02b' codep=0x224c parp=0xf02b params=0 returns=1
// ================================================

void UNK_0xf02b() // UNK_0xf02b
{
  Push(0xc52d); // probable 'OVINIT-BALANCE'
  MODULE(); // MODULE
  Push(0xc5ca); // probable 'T+BALANCE'
  MODULE(); // MODULE
  Push(0);
  Push(0xc542); // probable 'OVTRANSACT'
  MODULE(); // MODULE
  UNK_0xeff8(); // UNK_0xeff8
}


// ================================================
// 0xf043: WORD 'UNK_0xf045' codep=0x224c parp=0xf045 params=0 returns=3
// ================================================

void UNK_0xf045() // UNK_0xf045
{
  UNK_0xefbc(); // UNK_0xefbc
  PRINT("LOSS OF TERRAIN VEHICLE", 23); // (.")
  Push(0);
  Push(6);
  UNK_0xe81c(); // UNK_0xe81c
  SET_STR_AS_PARAM("DUE TO YOUR NEGLIGENCE, YOUR SHIP IS NO LONGER EQUIPPED WITH A TERRAIN VEHICLE. A NEW TERRAIN VEHICLE IS CURRENTLY BEING INSTALLED. CONSEQUENTLY, YOU HAVE BEEN FINED 10,000 MU.");
  UNK_0xec30(); // UNK_0xec30
  Push(0xd8f0); Push(0xffff);
  UNK_0xf02b(); // UNK_0xf02b
  Push(pp_IsTV); // ?TV
  ON_3(); // ON_3
}


// ================================================
// 0xf12a: WORD 'UNK_0xf12c' codep=0x224c parp=0xf12c params=0 returns=3
// ================================================

void UNK_0xf12c() // UNK_0xf12c
{
  UNK_0xefbc(); // UNK_0xefbc
  PRINT("TOWING CHARGES", 14); // (.")
  Push(0);
  Push(6);
  UNK_0xe81c(); // UNK_0xe81c
  SET_STR_AS_PARAM("I.S. CORP. REG. 12A-7312 EMERGENCY DISTRESS CALLS: CAPTAIN AND CREW OF ANY VESSEL INVOKING AN EMERGENCY DISTRESS CALL SHALL BE LIABLE FOR ALL COSTS INCURRED BY INTERSTEL CORP. AS A RESULT OF RESCUE OPERATIONS INITIATED ON BEHALF OF SAID CREW.");
  UNK_0xec30(); // UNK_0xec30
  UNK_0xe842(); // UNK_0xe842
  SET_STR_AS_PARAM("YOU HAVE BEEN FINED");
  UNK_0xec30(); // UNK_0xec30
  SPACE(); // SPACE
  Push(pp_TOWFINE); // TOWFINE
  _2_at_(); // 2@
  D_dot_(); // D.
  PRINT("MU.", 3); // (.")
  Push(pp_TOWFINE); // TOWFINE
  _2_at_(); // 2@
  DNEGATE(); // DNEGATE
  UNK_0xf02b(); // UNK_0xf02b
  Push(pp_IsRECALL); // ?RECALL
  OFF(); // OFF
}


// ================================================
// 0xf272: WORD 'UNK_0xf274' codep=0x224c parp=0xf274 params=0 returns=0
// ================================================

void UNK_0xf274() // UNK_0xf274
{
  UNK_0xefbc(); // UNK_0xefbc
  PRINT("COMPLETION OF MISSION", 21); // (.")
  Push(0);
  Push(6);
  UNK_0xe81c(); // UNK_0xe81c
  SET_STR_AS_PARAM("CONGRATULATIONS! AS A RESULT OF YOUR EFFORTS, OUR SUN IS ONCE AGAIN STABLE. ALL OF ARTH, AND INDEED THE ENTIRE GALAXY OWES YOU A DEBT WHICH CAN NEVER BE FULLY REPAID. YOUR HEROIC EXPLOITS WILL SURELY BECOME INTER-GALACTIC LEGEND.");
  UNK_0xec30(); // UNK_0xec30
  UNK_0xe842(); // UNK_0xe842
  SET_STR_AS_PARAM("OUR TOKEN BONUS OF 500,000 MU WILL ALLOW YOU TO LIVE HERE ON ARTH IN LUXURY FOR MANY YEARS TO COME, ALTHOUGH WE SUSPECT YOU MAY USE IT TO FURTHER YOUR EXPLORATIONS.");
  UNK_0xec30(); // UNK_0xec30
  UNK_0xe842(); // UNK_0xe842
  SET_STR_AS_PARAM("ONCE AGAIN, THANK YOU!");
  UNK_0xec30(); // UNK_0xec30
  Push(pp_WMSG); // WMSG
  OFF(); // OFF
  UNK_0xeff8(); // UNK_0xeff8
}


// ================================================
// 0xf44e: WORD 'UNK_0xf450' codep=0x224c parp=0xf450
// ================================================

void UNK_0xf450() // UNK_0xf450
{
  do
  {
    UNK_0xe78b(); // UNK_0xe78b
    UNK_0xeb09(); // UNK_0xeb09
    UNK_0xef37(); // UNK_0xef37
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
// 0xf478: WORD 'UNK_0xf47a' codep=0x224c parp=0xf47a
// ================================================

void UNK_0xf47a() // UNK_0xf47a
{
  UNK_0xe78b(); // UNK_0xe78b
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
    UNK_0xf045(); // UNK_0xf045
  }
  Push(Read16(pp_IsRECALL)); // ?RECALL @
  if (Pop() != 0)
  {
    UNK_0xf12c(); // UNK_0xf12c
  }
  Push(Read16(pp_WMSG)); // WMSG @
  if (Pop() != 0)
  {
    UNK_0xf274(); // UNK_0xf274
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
    UNK_0xf450(); // UNK_0xf450
    CDROP(); // CDROP
  } else
  {
    UNK_0xebc1(); // UNK_0xebc1
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4d4: WORD 'OP-CASE' codep=0x4a4f parp=0xf4e0
// ================================================

void OP_dash_CASE() // OP-CASE
{
  switch(Pop()) // OP-CASE
  {
  case 0:
    UNK_0xea28(); // UNK_0xea28
    break;
  case 1:
    UNK_0xf47a(); // UNK_0xf47a
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
// 0xf4f0: WORD '(U-OP)' codep=0x224c parp=0xf4fb
// ================================================
// entry

void _ro_U_dash_OP_rc_() // (U-OP)
{
  UNK_0xe637(); // UNK_0xe637
  Push(Read16(pp_Is_gt_OP)); // ?>OP @
  if (Pop() != 0)
  {
    Push(0x03e8);
    MS(); // MS
    UNK_0xf47a(); // UNK_0xf47a
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
      Push(pp_UNK_0xe58c); // UNK_0xe58c
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

