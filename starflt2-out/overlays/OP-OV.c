// ====== OVERLAY 'OP-OV' ======
// store offset = 0xe580
// overlay size   = 0x0fe0

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe596  codep:0x1d29 parp:0xe596 size:0x0002 C-string:'UNK_0xe596'
//      UNK_0xe59a  codep:0x224c parp:0xe59a size:0x0006 C-string:'UNK_0xe59a'
//      UNK_0xe5a2  codep:0x7420 parp:0xe5a2 size:0x0003 C-string:'UNK_0xe5a2'
//      UNK_0xe5a7  codep:0x7420 parp:0xe5a7 size:0x0003 C-string:'UNK_0xe5a7'
//      UNK_0xe5ac  codep:0x7420 parp:0xe5ac size:0x0003 C-string:'UNK_0xe5ac'
//      UNK_0xe5b1  codep:0x7420 parp:0xe5b1 size:0x0003 C-string:'UNK_0xe5b1'
//      UNK_0xe5b6  codep:0x7420 parp:0xe5b6 size:0x0003 C-string:'UNK_0xe5b6'
//      UNK_0xe5bb  codep:0x7420 parp:0xe5bb size:0x0003 C-string:'UNK_0xe5bb'
//      UNK_0xe5c0  codep:0x7420 parp:0xe5c0 size:0x0003 C-string:'UNK_0xe5c0'
//      UNK_0xe5c5  codep:0x7420 parp:0xe5c5 size:0x000d C-string:'UNK_0xe5c5'
//      UNK_0xe5d4  codep:0x224c parp:0xe5d4 size:0x0016 C-string:'UNK_0xe5d4'
//      UNK_0xe5ec  codep:0x224c parp:0xe5ec size:0x0010 C-string:'UNK_0xe5ec'
//      UNK_0xe5fe  codep:0x224c parp:0xe5fe size:0x0025 C-string:'UNK_0xe5fe'
//      UNK_0xe625  codep:0x224c parp:0xe625 size:0x000f C-string:'UNK_0xe625'
//      UNK_0xe636  codep:0x1d29 parp:0xe636 size:0x003a C-string:'UNK_0xe636'
//      UNK_0xe672  codep:0x224c parp:0xe672 size:0x002a C-string:'UNK_0xe672'
//      UNK_0xe69e  codep:0x224c parp:0xe69e size:0x007c C-string:'UNK_0xe69e'
//      UNK_0xe71c  codep:0x1d29 parp:0xe71c size:0x000d C-string:'UNK_0xe71c'
//      UNK_0xe72b  codep:0x224c parp:0xe72b size:0x005a C-string:'UNK_0xe72b'
//      UNK_0xe787  codep:0x224c parp:0xe787 size:0x0033 C-string:'UNK_0xe787'
//      UNK_0xe7bc  codep:0x224c parp:0xe7bc size:0x002c C-string:'UNK_0xe7bc'
//      UNK_0xe7ea  codep:0x224c parp:0xe7ea size:0x0062 C-string:'UNK_0xe7ea'
//      UNK_0xe84e  codep:0x224c parp:0xe84e size:0x0040 C-string:'UNK_0xe84e'
//      UNK_0xe890  codep:0x224c parp:0xe890 size:0x0054 C-string:'UNK_0xe890'
//      UNK_0xe8e6  codep:0x224c parp:0xe8e6 size:0x0032 C-string:'UNK_0xe8e6'
//      UNK_0xe91a  codep:0x224c parp:0xe91a size:0x0050 C-string:'UNK_0xe91a'
//      UNK_0xe96c  codep:0x224c parp:0xe96c size:0x0024 C-string:'UNK_0xe96c'
//      UNK_0xe992  codep:0x224c parp:0xe992 size:0x0008 C-string:'UNK_0xe992'
//      UNK_0xe99c  codep:0x224c parp:0xe99c size:0x000e C-string:'UNK_0xe99c'
//      UNK_0xe9ac  codep:0x1d29 parp:0xe9ac size:0x0002 C-string:'UNK_0xe9ac'
//      UNK_0xe9b0  codep:0x224c parp:0xe9b0 size:0x000e C-string:'UNK_0xe9b0'
//      UNK_0xe9c0  codep:0x224c parp:0xe9c0 size:0x0022 C-string:'UNK_0xe9c0'
//      UNK_0xe9e4  codep:0x224c parp:0xe9e4 size:0x002a C-string:'UNK_0xe9e4'
//      UNK_0xea10  codep:0x224c parp:0xea10 size:0x001c C-string:'UNK_0xea10'
//      UNK_0xea2e  codep:0x224c parp:0xea2e size:0x0028 C-string:'UNK_0xea2e'
//      UNK_0xea58  codep:0x1d29 parp:0xea58 size:0x0002 C-string:'UNK_0xea58'
//      UNK_0xea5c  codep:0x224c parp:0xea5c size:0x000e C-string:'UNK_0xea5c'
//      UNK_0xea6c  codep:0x224c parp:0xea6c size:0x00cc C-string:'UNK_0xea6c'
//      UNK_0xeb3a  codep:0x224c parp:0xeb3a size:0x0018 C-string:'UNK_0xeb3a'
//      UNK_0xeb54  codep:0x224c parp:0xeb54 size:0x0010 C-string:'UNK_0xeb54'
//       (NOTICES)  codep:0x4b3b parp:0xeb72 size:0x000c C-string:'_ro_NOTICES_rc_'
//      UNK_0xeb80  codep:0x224c parp:0xeb80 size:0x00ed C-string:'UNK_0xeb80'
//      UNK_0xec6f  codep:0x224c parp:0xec6f size:0x00ae C-string:'UNK_0xec6f'
//      UNK_0xed1f  codep:0x224c parp:0xed1f size:0x006d C-string:'UNK_0xed1f'
//      UNK_0xed8e  codep:0x224c parp:0xed8e size:0x0038 C-string:'UNK_0xed8e'
//      UNK_0xedc8  codep:0x224c parp:0xedc8 size:0x002e C-string:'UNK_0xedc8'
//      UNK_0xedf8  codep:0x224c parp:0xedf8 size:0x0016 C-string:'UNK_0xedf8'
//      UNK_0xee10  codep:0x224c parp:0xee10 size:0x0014 C-string:'UNK_0xee10'
//      UNK_0xee26  codep:0x224c parp:0xee26 size:0x0012 C-string:'UNK_0xee26'
//      UNK_0xee3a  codep:0x224c parp:0xee3a size:0x0012 C-string:'UNK_0xee3a'
//      UNK_0xee4e  codep:0x224c parp:0xee4e size:0x0016 C-string:'UNK_0xee4e'
//      UNK_0xee66  codep:0x224c parp:0xee66 size:0x0014 C-string:'UNK_0xee66'
//      UNK_0xee7c  codep:0x224c parp:0xee7c size:0x0014 C-string:'UNK_0xee7c'
//      UNK_0xee92  codep:0x224c parp:0xee92 size:0x0013 C-string:'UNK_0xee92'
//      UNK_0xeea7  codep:0x224c parp:0xeea7 size:0x0018 C-string:'UNK_0xeea7'
//      UNK_0xeec1  codep:0x224c parp:0xeec1 size:0x001b C-string:'UNK_0xeec1'
//      (BAD-PLAN)  codep:0x4b3b parp:0xeeeb size:0x0024 C-string:'_ro_BAD_dash_PLAN_rc_'
//      UNK_0xef11  codep:0x224c parp:0xef11 size:0x001a C-string:'UNK_0xef11'
//      UNK_0xef2d  codep:0x224c parp:0xef2d size:0x00f5 C-string:'UNK_0xef2d'
//      UNK_0xf024  codep:0x224c parp:0xf024 size:0x003a C-string:'UNK_0xf024'
//      UNK_0xf060  codep:0x224c parp:0xf060 size:0x0035 C-string:'UNK_0xf060'
//      UNK_0xf097  codep:0x224c parp:0xf097 size:0x0055 C-string:'UNK_0xf097'
//      UNK_0xf0ee  codep:0x224c parp:0xf0ee size:0x0052 C-string:'UNK_0xf0ee'
//      UNK_0xf142  codep:0x224c parp:0xf142 size:0x0094 C-string:'UNK_0xf142'
//      UNK_0xf1d8  codep:0x224c parp:0xf1d8 size:0x003a C-string:'UNK_0xf1d8'
//      UNK_0xf214  codep:0x224c parp:0xf214 size:0x0010 C-string:'UNK_0xf214'
//      UNK_0xf226  codep:0x224c parp:0xf226 size:0x0018 C-string:'UNK_0xf226'
//      UNK_0xf240  codep:0x224c parp:0xf240 size:0x0038 C-string:'UNK_0xf240'
//      UNK_0xf27a  codep:0x224c parp:0xf27a size:0x0012 C-string:'UNK_0xf27a'
//      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x002c C-string:'UNK_0xf28e'
//      UNK_0xf2bc  codep:0x224c parp:0xf2bc size:0x007b C-string:'UNK_0xf2bc'
//      UNK_0xf339  codep:0x224c parp:0xf339 size:0x0050 C-string:'UNK_0xf339'
//      UNK_0xf38b  codep:0x224c parp:0xf38b size:0x0027 C-string:'UNK_0xf38b'
//      UNK_0xf3b4  codep:0x224c parp:0xf3b4 size:0x0034 C-string:'UNK_0xf3b4'
//      UNK_0xf3ea  codep:0x224c parp:0xf3ea size:0x004c C-string:'UNK_0xf3ea'
//      UNK_0xf438  codep:0x224c parp:0xf438 size:0x0014 C-string:'UNK_0xf438'
//      UNK_0xf44e  codep:0x224c parp:0xf44e size:0x002a C-string:'UNK_0xf44e'
//      UNK_0xf47a  codep:0x224c parp:0xf47a size:0x0060 C-string:'UNK_0xf47a'
//         OP-CASE  codep:0x4b3b parp:0xf4e6 size:0x0010 C-string:'OP_dash_CASE'
//          (U-OP)  codep:0x224c parp:0xf501 size:0x0000 C-string:'_ro_U_dash_OP_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp__ask_TV; // ?TV
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp__ask_EVAL; // ?EVAL
extern const unsigned short int pp__ask_3; // ?3
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp__ask_RECALL; // ?RECALL
extern const unsigned short int pp_CTX; // CTX
extern const unsigned short int pp_CTY; // CTY
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp__ask__gt_OP; // ?>OP
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_TOWFINE; // TOWFINE
extern const unsigned short int pp_LSCAN; // LSCAN
void COUNT(); // COUNT
void M_star_(); // M*
void MAX(); // MAX
void _n__gt_(); // #>
void _n_S(); // #S
void _st__n_(); // <#
void PAD(); // PAD
void _dot_(); // .
void _dot_R(); // .R
void _ask_(); // ?
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
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void ON_2(); // ON_2
void _099(); // 099
void CDROP(); // CDROP
void CI_i_(); // CI'
void _ask_NULL(); // ?NULL
void _ask_CHILD(); // ?CHILD
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void _ask_LAST(); // ?LAST
void _ask_FIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void ILAST(); // ILAST
void IFIND(); // IFIND
void _gt_INACTI(); // >INACTI
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void _ex_COLOR(); // !COLOR
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
void _ex_CRS(); // !CRS
void POS_dot_PXT(); // POS.PXT
void _ask_MRC(); // ?MRC
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void _ask_TRIG(); // ?TRIG
void _ask_QUIT(); // ?QUIT
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
const unsigned short int pp_UNK_0xe596 = 0xe596; // UNK_0xe596 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe636 = 0xe636; // UNK_0xe636 size: 58
// {0x41, 0x9d, 0x61, 0x9d, 0x6f, 0x8f, 0x6f, 0x79, 0x64, 0x79, 0x64, 0x87, 0x60, 0x8b, 0x58, 0x8b, 0x58, 0x5d, 0x60, 0x5d, 0x64, 0x61, 0x64, 0x6f, 0x6f, 0x6f, 0x6f, 0x58, 0x61, 0x4a, 0x41, 0x4a, 0x33, 0x58, 0x33, 0x6f, 0x3e, 0x6f, 0x3e, 0x61, 0x42, 0x5d, 0x4a, 0x5d, 0x4a, 0x8b, 0x42, 0x8b, 0x3e, 0x87, 0x3e, 0x79, 0x33, 0x79, 0x33, 0x8f, 0x41, 0x9d}

const unsigned short int pp_UNK_0xe71c = 0xe71c; // UNK_0xe71c size: 13
// {0x02, 0x0a, 0x02, 0x09, 0x34, 0x0a, 0x37, 0x09, 0x40, 0x0a, 0x78, 0x09, 0x26}

const unsigned short int pp_UNK_0xe9ac = 0xe9ac; // UNK_0xe9ac size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xea58 = 0xea58; // UNK_0xea58 size: 2
// {0xff, 0xff}




// 0xe592: db 0xfc 0x00 '  '

// ================================================
// 0xe594: WORD 'UNK_0xe596' codep=0x1d29 parp=0xe596
// ================================================
// 0xe596: db 0x3a 0x20 ': '

// ================================================
// 0xe598: WORD 'UNK_0xe59a' codep=0x224c parp=0xe59a
// ================================================

void UNK_0xe59a() // UNK_0xe59a
{
  Push(pp_UNK_0xe596); // UNK_0xe596
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe5a0: WORD 'UNK_0xe5a2' codep=0x7420 parp=0xe5a2
// ================================================
// 0xe5a2: db 0x23 0x0a 0x02 '#  '

// ================================================
// 0xe5a5: WORD 'UNK_0xe5a7' codep=0x7420 parp=0xe5a7
// ================================================
// 0xe5a7: db 0x30 0x0b 0xff '0  '

// ================================================
// 0xe5aa: WORD 'UNK_0xe5ac' codep=0x7420 parp=0xe5ac
// ================================================
// 0xe5ac: db 0x24 0x0a 0x01 '$  '

// ================================================
// 0xe5af: WORD 'UNK_0xe5b1' codep=0x7420 parp=0xe5b1
// ================================================
// 0xe5b1: db 0x24 0x0b 0x02 '$  '

// ================================================
// 0xe5b4: WORD 'UNK_0xe5b6' codep=0x7420 parp=0xe5b6
// ================================================
// 0xe5b6: db 0x24 0x11 0x02 '$  '

// ================================================
// 0xe5b9: WORD 'UNK_0xe5bb' codep=0x7420 parp=0xe5bb
// ================================================
// 0xe5bb: db 0x24 0x13 0x01 '$  '

// ================================================
// 0xe5be: WORD 'UNK_0xe5c0' codep=0x7420 parp=0xe5c0
// ================================================
// 0xe5c0: db 0x24 0x14 0x01 '$  '

// ================================================
// 0xe5c3: WORD 'UNK_0xe5c5' codep=0x7420 parp=0xe5c5
// ================================================
// 0xe5c5: db 0x24 0x15 0x0f 0x4c 0x22 0x5d 0x17 0x0e 0xb7 0xd9 0x84 0x90 0x16 '$  L"]       '

// ================================================
// 0xe5d2: WORD 'UNK_0xe5d4' codep=0x224c parp=0xe5d4
// ================================================

void UNK_0xe5d4() // UNK_0xe5d4
{
  Push(0x0026);
  UNK_0xe59a(); // UNK_0xe59a
  Push(0x0017);
  Push(2);
  POS_dot_PXT(); // POS.PXT
  Push(1);
  UNK_0xe59a(); // UNK_0xe59a
  X0MESS(); // X0MESS
}


// ================================================
// 0xe5ea: WORD 'UNK_0xe5ec' codep=0x224c parp=0xe5ec
// ================================================

void UNK_0xe5ec() // UNK_0xe5ec
{
  signed short int i, imax;
  Push(0);
    
  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _2OVER(); // 2OVER
    LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xfffa

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe5fc: WORD 'UNK_0xe5fe' codep=0x224c parp=0xe5fe
// ================================================

void UNK_0xe5fe() // UNK_0xe5fe
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  PRINT("PRESS SPACEBAR TO CONTINUE", 26); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xe623: WORD 'UNK_0xe625' codep=0x224c parp=0xe625
// ================================================

void UNK_0xe625() // UNK_0xe625
{
  PRINT("EVALUATION", 10); // (.")
}


// ================================================
// 0xe634: WORD 'UNK_0xe636' codep=0x1d29 parp=0xe636
// ================================================
// 0xe636: db 0x41 0x9d 0x61 0x9d 0x6f 0x8f 0x6f 0x79 0x64 0x79 0x64 0x87 0x60 0x8b 0x58 0x8b 0x58 0x5d 0x60 0x5d 0x64 0x61 0x64 0x6f 0x6f 0x6f 0x6f 0x58 0x61 0x4a 0x41 0x4a 0x33 0x58 0x33 0x6f 0x3e 0x6f 0x3e 0x61 0x42 0x5d 0x4a 0x5d 0x4a 0x8b 0x42 0x8b 0x3e 0x87 0x3e 0x79 0x33 0x79 0x33 0x8f 0x41 0x9d 'A a o oydyd ` X X]`]dadooooXaJAJ3X3o>o>aB]J]J B > >y3y3 A '

// ================================================
// 0xe670: WORD 'UNK_0xe672' codep=0x224c parp=0xe672
// ================================================

void UNK_0xe672() // UNK_0xe672
{
  signed short int i, imax;
  SetColor("BROWN");
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xe636); // UNK_0xe636
  Push(0x003a);
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
    
  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(Read8(Pop())&0xFF); // C@
    Push(i); // I
    Push(Pop()+1); // 1+
    Push(Read8(Pop())&0xFF); // C@
    Push(2);
  int step = Pop();
  i += step;
if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
} while(1); // (+LOOP) 0xfff2

  Push(0x001c);
  UNK_0xe5ec(); // UNK_0xe5ec
}


// ================================================
// 0xe69c: WORD 'UNK_0xe69e' codep=0x224c parp=0xe69e
// ================================================

void UNK_0xe69e() // UNK_0xe69e
{
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("LT-BLUE");
  _ask_MRC(); // ?MRC
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe596); // UNK_0xe596
  _ex__2(); // !_2
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
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
  UNK_0xe672(); // UNK_0xe672
}


// ================================================
// 0xe71a: WORD 'UNK_0xe71c' codep=0x1d29 parp=0xe71c
// ================================================
// 0xe71c: db 0x02 0x0a 0x02 0x09 0x34 0x0a 0x37 0x09 0x40 0x0a 0x78 0x09 0x26 '    4 7 @ x &'

// ================================================
// 0xe729: WORD 'UNK_0xe72b' codep=0x224c parp=0xe72b
// ================================================

void UNK_0xe72b() // UNK_0xe72b
{
  _gt_3FONT(); // >3FONT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
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
// 0xe785: WORD 'UNK_0xe787' codep=0x224c parp=0xe787
// ================================================

void UNK_0xe787() // UNK_0xe787
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x000d);
  Push(8);
  POS_dot_(); // POS.
  PRINT("NOTICES", 7); // (.")
  Push(0x0042);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  UNK_0xe625(); // UNK_0xe625
  Push(0x0083);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe7ba: WORD 'UNK_0xe7bc' codep=0x224c parp=0xe7bc
// ================================================

void UNK_0xe7bc() // UNK_0xe7bc
{
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xe69e(); // UNK_0xe69e
  UNK_0xe787(); // UNK_0xe787
  UNK_0xe72b(); // UNK_0xe72b
  SetColor("WHITE");
  SetColor("BLUE");
  SetColor("BLUE");
  _ask_MRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  _ex__2(); // !_2
  Push(pp__ask__gt_OP); // ?>OP
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_NCRS); // NCRS
  _ex__2(); // !_2
  Push(pp_OCRS); // OCRS
  _ex__2(); // !_2
  Push(pp_UNK_0xe71c); // UNK_0xe71c
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xe7e8: WORD 'UNK_0xe7ea' codep=0x224c parp=0xe7ea
// ================================================

void UNK_0xe7ea() // UNK_0xe7ea
{
  UNK_0xe5d4(); // UNK_0xe5d4
  Push(0);
  Push(0x0019);
  CMESS(); // CMESS
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  PRINT("SPACEBAR FOR NEXT MESSAGE", 25); // (.")
  _ex_CRS(); // !CRS
  Push(1);
  Push(0x001e);
  CMESS(); // CMESS
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  PRINT("^ FOR PRIOR MESSAGE  [] TO QUIT", 31); // (.")
  _ex_CRS(); // !CRS
  Push(pp_LKEY); // LKEY
  _099(); // 099
}


// ================================================
// 0xe84c: WORD 'UNK_0xe84e' codep=0x224c parp=0xe84e
// ================================================

void UNK_0xe84e() // UNK_0xe84e
{
  UNK_0xe5d4(); // UNK_0xe5d4
  Push(0);
  Push(0x001a);
  CMESS(); // CMESS
  UNK_0xe5fe(); // UNK_0xe5fe
  Push(1);
  Push(0x0022);
  CMESS(); // CMESS
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  PRINT("PRESS [] TO CANCEL CURRENT NOTICE", 33); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xe88e: WORD 'UNK_0xe890' codep=0x224c parp=0xe890
// ================================================

void UNK_0xe890() // UNK_0xe890
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  Push(0x00c5);
  Push(2);
  Push(0x000c);
  Push(0x009d);
  UNK_0xe59a(); // UNK_0xe59a
  POLY_dash_WI(); // POLY-WI
  _gt_2FONT(); // >2FONT
  Push(3);
  Push(0x00c3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  PRINT("NOTICES", 7); // (.")
  _gt_1FONT(); // >1FONT
  Push(0x002d);
  Push(0x00c1);
  POS_dot_(); // POS.
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  PAD(); // PAD
  DATE_do__gt_A(); // DATE$>A
  PAD(); // PAD
  Push(0x000a);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xe8e4: WORD 'UNK_0xe8e6' codep=0x224c parp=0xe8e6
// ================================================

void UNK_0xe8e6() // UNK_0xe8e6
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  Push(0x00c5);
  Push(3);
  Push(0x000c);
  Push(0x009c);
  UNK_0xe59a(); // UNK_0xe59a
  POLY_dash_WI(); // POLY-WI
  _gt_2FONT(); // >2FONT
  Push(3);
  Push(0x00c3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  UNK_0xe625(); // UNK_0xe625
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe918: WORD 'UNK_0xe91a' codep=0x224c parp=0xe91a
// ================================================

void UNK_0xe91a() // UNK_0xe91a
{
  signed short int i, imax;
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
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
    Push(i); // I
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(cc_BL)); // BL
    Push((Pop()==Pop())?1:0); // =
    Push(i); // I
    Push(Pop()+1); // 1+
    Push(imax); // I'
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() | Pop()); // OR
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
  } while(i<imax); // (LOOP) 0xffdc

  Push(Read16(regsp)); // DUP
  Push(4);
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  ROT(); // ROT
  Push(3);
  PICK(); // PICK
  _dash_(); // -
  Push(Pop()-1); // 1-
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe96a: WORD 'UNK_0xe96c' codep=0x224c parp=0xe96c
// ================================================

void UNK_0xe96c() // UNK_0xe96c
{
  _2DUP(); // 2DUP
  Push(pp_CTY); // CTY
  _ex__2(); // !_2
  Push(pp_CTX); // CTX
  _ex__2(); // !_2
  SWAP(); // SWAP
  Push(4);
  Push(Pop() * Pop()); // *
  Push(4);
  Push(Pop() + Pop()); // +
  Push(0x00b4);
  ROT(); // ROT
  Push(7);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe990: WORD 'UNK_0xe992' codep=0x224c parp=0xe992
// ================================================

void UNK_0xe992() // UNK_0xe992
{
  Push(0);
  Push(6);
  UNK_0xe96c(); // UNK_0xe96c
}


// ================================================
// 0xe99a: WORD 'UNK_0xe99c' codep=0x224c parp=0xe99c
// ================================================

void UNK_0xe99c() // UNK_0xe99c
{
  Push(0);
  Push(1);
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  UNK_0xe96c(); // UNK_0xe96c
}


// ================================================
// 0xe9aa: WORD 'UNK_0xe9ac' codep=0x1d29 parp=0xe9ac
// ================================================
// 0xe9ac: db 0x3a 0x20 ': '

// ================================================
// 0xe9ae: WORD 'UNK_0xe9b0' codep=0x224c parp=0xe9b0
// ================================================

void UNK_0xe9b0() // UNK_0xe9b0
{
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x0026);
  _st_(); // <
}


// ================================================
// 0xe9be: WORD 'UNK_0xe9c0' codep=0x224c parp=0xe9c0
// ================================================

void UNK_0xe9c0() // UNK_0xe9c0
{
  signed short int i, imax;
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
  } while(i<imax); // (LOOP) 0xffe8

}


// ================================================
// 0xe9e2: WORD 'UNK_0xe9e4' codep=0x224c parp=0xe9e4
// ================================================

void UNK_0xe9e4() // UNK_0xe9e4
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    UNK_0xe9b0(); // UNK_0xe9b0
    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() != 0)
    {
      UNK_0xe9c0(); // UNK_0xe9c0
      Push(0);
      Push(0x0015);
      UNK_0xe96c(); // UNK_0xe96c
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
// 0xea0e: WORD 'UNK_0xea10' codep=0x224c parp=0xea10
// ================================================

void UNK_0xea10() // UNK_0xea10
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
  Push(1);
  Push(0x001d);
  Push(0x009e);
  Push(0x001d);
  LLINE(); // LLINE
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xea2c: WORD 'UNK_0xea2e' codep=0x224c parp=0xea2e
// ================================================

void UNK_0xea2e() // UNK_0xea2e
{
  Push(3);
  Push(Pop() * Pop()); // *
  Push(0x0015);
  UNK_0xe96c(); // UNK_0xe96c
  Push(pp_UNK_0xe9ac); // UNK_0xe9ac
  _099(); // 099

  label1:
  UNK_0xe91a(); // UNK_0xe91a
  UNK_0xe9e4(); // UNK_0xe9e4
  SPACE(); // SPACE
  Push(1);
  Push(pp_CTX); // CTX
  _plus__ex__2(); // +!_2
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  UNK_0xe9c0(); // UNK_0xe9c0
}


// ================================================
// 0xea56: WORD 'UNK_0xea58' codep=0x1d29 parp=0xea58
// ================================================
// 0xea58: db 0xff 0xff '  '

// ================================================
// 0xea5a: WORD 'UNK_0xea5c' codep=0x224c parp=0xea5c
// ================================================

void UNK_0xea5c() // UNK_0xea5c
{
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(0x65eb); // IFIELD(UNK_0xe5a2)
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xea6a: WORD 'UNK_0xea6c' codep=0x224c parp=0xea6c
// ================================================

void UNK_0xea6c() // UNK_0xea6c
{
  UNK_0xe84e(); // UNK_0xe84e
  UNK_0xea10(); // UNK_0xea10
  UNK_0xe9c0(); // UNK_0xe9c0
  Push(0x65eb); // IFIELD(UNK_0xe5a2)
  Push(Read16(Pop())); // @
  PAD(); // PAD
  DATE_do__gt_A(); // DATE$>A
  PAD(); // PAD
  Push(0x000a);
  Push(0);
  UNK_0xea2e(); // UNK_0xea2e
  IOPEN(); // IOPEN

  label3:
  Push(0x65ec); // IFIELD(UNK_0xe5a7)
  Push(Pop()+1); // 1+
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(1);
  UNK_0xea2e(); // UNK_0xea2e
  Push(0x65ec); // IFIELD(UNK_0xe5a7)
  Push(Read8(Pop())&0xFF); // C@
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x012c);
  Push(Pop() * Pop()); // *
  U_star_(); // U*
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  XYSCAN(); // XYSCAN
  Pop(); Pop();// 2DROP
  _ask_TRIG(); // ?TRIG
  Push(Pop() | Pop()); // OR
  Push(pp_FQUIT); // FQUIT
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  _ask_QUIT(); // ?QUIT
  if (Pop() != 0)
  {
    ILAST(); // ILAST
    UNK_0x3f09("**NOTICE CANCELLED**");
    Push(0x000d);
    UNK_0xea2e(); // UNK_0xea2e
  }
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label3;
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xea58); // UNK_0xea58
  Push(Read16(Pop())); // @
  Push(0x65eb); // IFIELD(UNK_0xe5a2)
  Push(Read16(Pop())); // @
  MAX(); // MAX
  Push(pp_UNK_0xea58); // UNK_0xea58
  _ex__2(); // !_2
  UNK_0xea10(); // UNK_0xea10
  INEXT(); // INEXT
  UNK_0xea5c(); // UNK_0xea5c
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _ask_FIRST(); // ?FIRST
  Push(Pop() | Pop()); // OR
  IPREV(); // IPREV
  if (Pop() != 0)
  {
    UNK_0xe9c0(); // UNK_0xe9c0
    UNK_0x3f09("**END OF NOTICES**");
    Push(0x000d);
    UNK_0xea2e(); // UNK_0xea2e
  }
  UNK_0xe7ea(); // UNK_0xe7ea
}


// ================================================
// 0xeb38: WORD 'UNK_0xeb3a' codep=0x224c parp=0xeb3a
// ================================================

void UNK_0xeb3a() // UNK_0xeb3a
{
  INEXT(); // INEXT
  UNK_0xea5c(); // UNK_0xea5c
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xea6c(); // UNK_0xea6c
    return;
  }
  IPREV(); // IPREV
}


// ================================================
// 0xeb52: WORD 'UNK_0xeb54' codep=0x224c parp=0xeb54
// ================================================

void UNK_0xeb54() // UNK_0xeb54
{
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xe890(); // UNK_0xe890
  IPREV(); // IPREV
  UNK_0xea6c(); // UNK_0xea6c
}


// ================================================
// 0xeb64: WORD '(NOTICES)' codep=0x4b3b parp=0xeb72
// ================================================

void _ro_NOTICES_rc_() // (NOTICES)
{
  switch(Pop()) // (NOTICES)
  {
  case 328:
    UNK_0xeb54(); // UNK_0xeb54
    break;
  case 32:
    UNK_0xeb3a(); // UNK_0xeb3a
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeb7e: WORD 'UNK_0xeb80' codep=0x224c parp=0xeb80
// ================================================

void UNK_0xeb80() // UNK_0xeb80
{
  UNK_0xe890(); // UNK_0xe890
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
  Push(0x65eb); // IFIELD(UNK_0xe5a2)
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xea58); // UNK_0xea58
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  goto label2;

  label1:
  UNK_0xea5c(); // UNK_0xea5c
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(0xfff2);
    Push(0x000e);
    CMESS(); // CMESS
    SetColor("BLACK");
    _ex_COLOR(); // !COLOR
    PRINT("NO NEW NOTICES", 14); // (.")
    _ex_CRS(); // !CRS
    Push(0xfff3);
    Push(0x001a);
    CMESS(); // CMESS
    SetColor("BLACK");
    _ex_COLOR(); // !COLOR
    PRINT("REPEAT LAST NOTICE\? [N Y]", 25); // (.")
    _ex_CRS(); // !CRS
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
    UNK_0x3f09("**REPEATING LAST NOTICE**");
    Push(9);
    UNK_0xea2e(); // UNK_0xea2e
  }
  if (Pop() == 0) goto label6;
  UNK_0xea6c(); // UNK_0xea6c

  label8:
  XYSCAN(); // XYSCAN
  Pop(); Pop();// 2DROP
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  _ro_NOTICES_rc_(); // (NOTICES) case
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  Push(0x0150);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xe890(); // UNK_0xe890
    UNK_0xea6c(); // UNK_0xea6c
  }
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) goto label8;

  label6:
  Push(3);
  _star_CLOSE(); // *CLOSE
  UNK_0xe890(); // UNK_0xe890
  UNK_0xe5d4(); // UNK_0xe5d4
}


// ================================================
// 0xec6d: WORD 'UNK_0xec6f' codep=0x224c parp=0xec6f
// ================================================

void UNK_0xec6f() // UNK_0xec6f
{
  Push(4);
  Push(0x00ac);
  POS_dot_(); // POS.
  PRINT("RECOMMENDATION: ", 16); // (.")
  Push(0x65f2); // IFIELD(UNK_0xe5b6)
  _ask_(); // ?
  Push(4);
  Push(0x00a4);
  POS_dot_(); // POS.
  PRINT("DATE: ", 6); // (.")
  Push(0x65ec); // IFIELD(UNK_0xe5b1)
  Push(Read16(Pop())); // @
  PAD(); // PAD
  DATE_do__gt_A(); // DATE$>A
  PAD(); // PAD
  Push(0x000a);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(4);
  Push(0x009c);
  POS_dot_(); // POS.
  PRINT("SYSTEM: ", 8); // (.")
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(0);
  _dot_R(); // .R
  PRINT(",", 1); // (.")
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  _dot_(); // .
  Push(4);
  Push(0x0094);
  POS_dot_(); // POS.
  PRINT("ORBIT: ", 7); // (.")
  Push(0x65f4); // IFIELD(UNK_0xe5bb)
  Push(Read8(Pop())&0xFF); // C@
  _dot_(); // .
  Push(4);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("NAME: ", 6); // (.")
  Push(0x65f6); // IFIELD(UNK_0xe5c5)
  Push(0x000f);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(4);
  Push(0x007a);
  POS_dot_(); // POS.
  UNK_0xe625(); // UNK_0xe625
  PRINT(":", 1); // (.")
}


// ================================================
// 0xed1d: WORD 'UNK_0xed1f' codep=0x224c parp=0xed1f
// ================================================

void UNK_0xed1f() // UNK_0xed1f
{
  unsigned short int a;
  UNK_0xe8e6(); // UNK_0xe8e6
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  a = Pop(); // >R
  Push(0x0022);
  Push(a); // I
  Push(8);
  Push(Pop() * Pop()); // *
  _dash_(); // -
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
// 0xed8c: WORD 'UNK_0xed8e' codep=0x224c parp=0xed8e
// ================================================

void UNK_0xed8e() // UNK_0xed8e
{
  Push(0xc261); // probable 'OVINIT-_1'
  MODULE(); // MODULE
  Push(0x65eb); // IFIELD(UNK_0xe5ac)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x03e8);
  U_star_(); // U*
  Push(0x0064); Push(0x0000);
  DMAX(); // DMAX
  Push(0x65f5); // IFIELD(UNK_0xe5c0)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    DNEGATE(); // DNEGATE
  }
  Push(0xc2ed); // probable 'T+BALAN'
  MODULE(); // MODULE
  Push(0x65f5); // IFIELD(UNK_0xe5c0)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  _3_star_(); // 3*
  Push(0xc273); // probable 'OVTRANS'
  MODULE(); // MODULE
}


// ================================================
// 0xedc6: WORD 'UNK_0xedc8' codep=0x224c parp=0xedc8
// ================================================

void UNK_0xedc8() // UNK_0xedc8
{

  label3:
  UNK_0xe91a(); // UNK_0xe91a
  Push(Read16(regsp)); // DUP
  UNK_0xe9b0(); // UNK_0xe9b0
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop()+1); // 1+
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
  } else
  {
    UNK_0xe99c(); // UNK_0xe99c
    Push(Read16(regsp)); // DUP
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
  }
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  SPACE(); // SPACE
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label3;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xedf6: WORD 'UNK_0xedf8' codep=0x224c parp=0xedf8
// ================================================

void UNK_0xedf8() // UNK_0xedf8
{
  Push(pp_CTX); // CTX
  _099(); // 099
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  Push(0x65ed); // IFIELD(PHRASE)
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  UNK_0xedc8(); // UNK_0xedc8
}


// ================================================
// 0xee0e: WORD 'UNK_0xee10' codep=0x224c parp=0xee10
// ================================================

void UNK_0xee10() // UNK_0xee10
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
// 0xee24: WORD 'UNK_0xee26' codep=0x224c parp=0xee26
// ================================================

void UNK_0xee26() // UNK_0xee26
{
  UNK_0x3f09("EXTREME HEAT,");
}


// ================================================
// 0xee38: WORD 'UNK_0xee3a' codep=0x224c parp=0xee3a
// ================================================

void UNK_0xee3a() // UNK_0xee3a
{
  UNK_0x3f09("EXTREME COLD,");
}


// ================================================
// 0xee4c: WORD 'UNK_0xee4e' codep=0x224c parp=0xee4e
// ================================================

void UNK_0xee4e() // UNK_0xee4e
{
  UNK_0x3f09("CRUSHING GRAVITY,");
}


// ================================================
// 0xee64: WORD 'UNK_0xee66' codep=0x224c parp=0xee66
// ================================================

void UNK_0xee66() // UNK_0xee66
{
  UNK_0x3f09("VIOLENT STORMS,");
}


// ================================================
// 0xee7a: WORD 'UNK_0xee7c' codep=0x224c parp=0xee7c
// ================================================

void UNK_0xee7c() // UNK_0xee7c
{
  UNK_0x3f09("LACK OF OXYGEN,");
}


// ================================================
// 0xee90: WORD 'UNK_0xee92' codep=0x224c parp=0xee92
// ================================================

void UNK_0xee92() // UNK_0xee92
{
  UNK_0x3f09("LACK OF WATER,");
}


// ================================================
// 0xeea5: WORD 'UNK_0xeea7' codep=0x224c parp=0xeea7
// ================================================

void UNK_0xeea7() // UNK_0xeea7
{
  UNK_0x3f09("EXISTING SENTIENTS,");
}


// ================================================
// 0xeebf: WORD 'UNK_0xeec1' codep=0x224c parp=0xeec1
// ================================================

void UNK_0xeec1() // UNK_0xeec1
{
  UNK_0x3f09("TEMPORAL DISPLACEMENT,");
}


// ================================================
// 0xeedc: WORD '(BAD-PLAN)' codep=0x4b3b parp=0xeeeb
// ================================================

void _ro_BAD_dash_PLAN_rc_() // (BAD-PLAN)
{
  switch(Pop()) // (BAD-PLAN)
  {
  case 1:
    UNK_0xee26(); // UNK_0xee26
    break;
  case 2:
    UNK_0xee3a(); // UNK_0xee3a
    break;
  case 3:
    UNK_0xee4e(); // UNK_0xee4e
    break;
  case 4:
    UNK_0xee66(); // UNK_0xee66
    break;
  case 5:
    UNK_0xee7c(); // UNK_0xee7c
    break;
  case 6:
    UNK_0xee92(); // UNK_0xee92
    break;
  case 7:
    UNK_0xeea7(); // UNK_0xeea7
    break;
  case 8:
    UNK_0xeec1(); // UNK_0xeec1
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xef0f: WORD 'UNK_0xef11' codep=0x224c parp=0xef11
// ================================================

void UNK_0xef11() // UNK_0xef11
{
  UNK_0x3f09("YOU HAVE BEEN FINED");
  UNK_0xedc8(); // UNK_0xedc8
}


// ================================================
// 0xef2b: WORD 'UNK_0xef2d' codep=0x224c parp=0xef2d
// ================================================

void UNK_0xef2d() // UNK_0xef2d
{
  signed short int i, imax;
  Push(0);
  Push(0x000b);
  UNK_0xe96c(); // UNK_0xe96c
  UNK_0x3f09("DUE TO");
  UNK_0xedc8(); // UNK_0xedc8
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
      Push(i); // I
      Push(Pop()+1); // 1+
      BIT(); // BIT
      Push(0x65f5); // IFIELD(UNK_0xe5c0)
      Push(Read8(Pop())&0xFF); // C@
      _st_(); // <
      if (Pop() == 0) Push(1); else Push(0); // NOT
      Push(0x65f5); // IFIELD(UNK_0xe5c0)
      Push(Read8(Pop())&0xFF); // C@
      _plus_BIT(); // +BIT
      Push(1);
      _gt_(); // >
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        UNK_0x3f09("AND");
        UNK_0xedc8(); // UNK_0xedc8
      }
      UNK_0xedc8(); // UNK_0xedc8
    }
  i++;
  } while(i<imax); // (LOOP) 0xffc6

  Pop(); // DROP
  UNK_0x3f09("THIS PLANET PROVED UNSUITABLE FOR COLONIZATION.");
  UNK_0xedc8(); // UNK_0xedc8
  UNK_0xef11(); // UNK_0xef11
  Push(0x65eb); // IFIELD(UNK_0xe5ac)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x03e8);
  M_star_(); // M*
  Push(0x0064); Push(0x0000);
  DMAX(); // DMAX
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  UNK_0xedc8(); // UNK_0xedc8
  UNK_0x3f09("SP'S.");
  UNK_0xedc8(); // UNK_0xedc8
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0x3f09("THIS IS ONLY A WARNING, YOUR NEXT FINE WILL BE HEAVY.");
  UNK_0xedc8(); // UNK_0xedc8
}


// ================================================
// 0xf022: WORD 'UNK_0xf024' codep=0x224c parp=0xf024
// ================================================

void UNK_0xf024() // UNK_0xf024
{
  UNK_0x3f09("THIS PLANET PROVED TO BE SUITABLE FOR COLONIZATION.");
  UNK_0xedc8(); // UNK_0xedc8
}


// ================================================
// 0xf05e: WORD 'UNK_0xf060' codep=0x224c parp=0xf060
// ================================================

void UNK_0xf060() // UNK_0xf060
{
  UNK_0x3f09("GOOD WORK! YOU HAVE LOCATED AN OPTIMAL PLANET.");
  UNK_0xedc8(); // UNK_0xedc8
}


// ================================================
// 0xf095: WORD 'UNK_0xf097' codep=0x224c parp=0xf097
// ================================================

void UNK_0xf097() // UNK_0xf097
{
  UNK_0x3f09("YOU HAVE EARNED A BONUS OF");
  UNK_0xedc8(); // UNK_0xedc8
  Push(0x65eb); // IFIELD(UNK_0xe5ac)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x03e8);
  U_star_(); // U*
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  UNK_0xedc8(); // UNK_0xedc8
  UNK_0x3f09("SP'S FOR THIS RECOMMENDATION.");
  UNK_0xedc8(); // UNK_0xedc8
}


// ================================================
// 0xf0ec: WORD 'UNK_0xf0ee' codep=0x224c parp=0xf0ee
// ================================================

void UNK_0xf0ee() // UNK_0xf0ee
{
  Push(0);
  Push(0x000b);
  UNK_0xe96c(); // UNK_0xe96c
  Push(0x65eb); // IFIELD(UNK_0xe5ac)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0028);
  _gt_(); // >
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    UNK_0xf060(); // UNK_0xf060
  } else
  {
    UNK_0xf024(); // UNK_0xf024
  }
  UNK_0xf097(); // UNK_0xf097
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
// 0xf140: WORD 'UNK_0xf142' codep=0x224c parp=0xf142
// ================================================

void UNK_0xf142() // UNK_0xf142
{
  Push(0x65f5); // IFIELD(UNK_0xe5c0)
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    UNK_0xef2d(); // UNK_0xef2d
  } else
  {
    UNK_0xf0ee(); // UNK_0xf0ee
  }
  UNK_0xed8e(); // UNK_0xed8e
  _ask_LAST(); // ?LAST
  if (Pop() == 0) goto label3;
  UNK_0xe99c(); // UNK_0xe99c
  UNK_0xe99c(); // UNK_0xe99c
  UNK_0x3f09("END OF EVALUATIONS");
  UNK_0xedc8(); // UNK_0xedc8
  Push2Words("*OP");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002d);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN

  label5:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label4;
  IDELETE(); // IDELETE
  goto label5;

  label4:
  Push(3);
  _star_CLOSE(); // *CLOSE
  return;

  label3:
  Push(0);
  Push(0x0022);
  CMESS(); // CMESS
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  PRINT("PRESS SPACEBAR FOR NEXT EVALUATION", 34); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf1d6: WORD 'UNK_0xf1d8' codep=0x224c parp=0xf1d8
// ================================================

void UNK_0xf1d8() // UNK_0xf1d8
{
  UNK_0xe8e6(); // UNK_0xe8e6
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
// 0xf212: WORD 'UNK_0xf214' codep=0x224c parp=0xf214
// ================================================

void UNK_0xf214() // UNK_0xf214
{
  Push(0);
  Push(0x001a);
  CMESS(); // CMESS
  UNK_0xe5fe(); // UNK_0xe5fe
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xf224: WORD 'UNK_0xf226' codep=0x224c parp=0xf226
// ================================================

void UNK_0xf226() // UNK_0xf226
{
  Push(0xc261); // probable 'OVINIT-_1'
  MODULE(); // MODULE
  Push(0xc2ed); // probable 'T+BALAN'
  MODULE(); // MODULE
  Push(0);
  Push(0xc273); // probable 'OVTRANS'
  MODULE(); // MODULE
  UNK_0xf214(); // UNK_0xf214
}


// ================================================
// 0xf23e: WORD 'UNK_0xf240' codep=0x224c parp=0xf240
// ================================================

void UNK_0xf240() // UNK_0xf240
{
  UNK_0xf1d8(); // UNK_0xf1d8
  PRINT("LOSS OF TERRAIN VEHICLE", 23); // (.")
  UNK_0xe992(); // UNK_0xe992
  Push(0x00d2);
  UNK_0xee10(); // UNK_0xee10
  UNK_0xedf8(); // UNK_0xedf8
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(0xd8f0); Push(0xffff);
  UNK_0xf226(); // UNK_0xf226
  Push(pp__ask_TV); // ?TV
  ON_2(); // ON_2
}


// ================================================
// 0xf278: WORD 'UNK_0xf27a' codep=0x224c parp=0xf27a
// ================================================

void UNK_0xf27a() // UNK_0xf27a
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  UNK_0xf27a(); // UNK_0xf27a
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
      Push(0x65ec); // IFIELD(INST-QT)
      Push(Read16(Pop())); // @
      _gt_FLAG(); // >FLAG
      Push(Pop() & Pop()); // AND
      ICLOSE(); // ICLOSE
    }
  }
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf2ba: WORD 'UNK_0xf2bc' codep=0x224c parp=0xf2bc
// ================================================

void UNK_0xf2bc() // UNK_0xf2bc
{
  UNK_0xf1d8(); // UNK_0xf1d8
  PRINT("TOWING CHARGES", 14); // (.")
  UNK_0xe992(); // UNK_0xe992
  Push(0x00d3);
  UNK_0xee10(); // UNK_0xee10
  UNK_0xedf8(); // UNK_0xedf8
  Push(3);
  _star_CLOSE(); // *CLOSE
  UNK_0xe99c(); // UNK_0xe99c
  UNK_0xef11(); // UNK_0xef11
  SPACE(); // SPACE
  Push(pp_TOWFINE); // TOWFINE
  _2_at_(); // 2@
  D_dot_(); // D.
  PRINT("SP.", 3); // (.")
  UNK_0xf28e(); // UNK_0xf28e
  if (Pop() != 0)
  {
    UNK_0xe99c(); // UNK_0xe99c
    Push(0x00d3);
    UNK_0xee10(); // UNK_0xee10
    ILAST(); // ILAST
    UNK_0xedf8(); // UNK_0xedf8
    Push(3);
    _star_CLOSE(); // *CLOSE
    Push(0x001a);
    Push(6);
    ICREATE(); // ICREATE
    _gt_C_plus_S(); // >C+S
    Push(0x0064);
    Push(0x65ec); // IFIELD(INST-QT)
    _ex__2(); // !_2
    CI(); // CI
    ICLOSE(); // ICLOSE
    Push2Words("*STARSH");
    _gt_C_plus_S(); // >C+S
    _gt_BOX(); // >BOX
    ICLOSE(); // ICLOSE
    Push(0xb6ec); // probable '=CARGO'
    MODULE(); // MODULE
  }
  Push(pp_TOWFINE); // TOWFINE
  _2_at_(); // 2@
  DNEGATE(); // DNEGATE
  UNK_0xf226(); // UNK_0xf226
  Push(pp__ask_RECALL); // ?RECALL
  _099(); // 099
}


// ================================================
// 0xf337: WORD 'UNK_0xf339' codep=0x224c parp=0xf339
// ================================================

void UNK_0xf339() // UNK_0xf339
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
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
  _gt_INACTI(); // >INACTI
  Push(0x86a0); Push(0x0001);
  Push(0xc261); // probable 'OVINIT-_1'
  MODULE(); // MODULE
  Push(0xc2ed); // probable 'T+BALAN'
  MODULE(); // MODULE
  Push(3);
  Push(0xc273); // probable 'OVTRANS'
  MODULE(); // MODULE
  UNK_0xf214(); // UNK_0xf214
}


// ================================================
// 0xf389: WORD 'UNK_0xf38b' codep=0x224c parp=0xf38b
// ================================================

void UNK_0xf38b() // UNK_0xf38b
{
  UNK_0xf1d8(); // UNK_0xf1d8
  PRINT("ENDURIUM", 8); // (.")
  UNK_0xe992(); // UNK_0xe992
  Push(0x00d4);
  UNK_0xee10(); // UNK_0xee10
  UNK_0xedf8(); // UNK_0xedf8
  Push(3);
  _star_CLOSE(); // *CLOSE
  UNK_0xe99c(); // UNK_0xe99c
  Push(0x3cb0); Push(0xffff);
  UNK_0xf226(); // UNK_0xf226
}


// ================================================
// 0xf3b2: WORD 'UNK_0xf3b4' codep=0x224c parp=0xf3b4
// ================================================

void UNK_0xf3b4() // UNK_0xf3b4
{
  UNK_0xf27a(); // UNK_0xf27a
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
      Push(0xb6ec); // probable '=CARGO'
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
// 0xf3e8: WORD 'UNK_0xf3ea' codep=0x224c parp=0xf3ea
// ================================================

void UNK_0xf3ea() // UNK_0xf3ea
{
  UNK_0xf1d8(); // UNK_0xf1d8
  PRINT("DATA CUBE", 9); // (.")
  UNK_0xe992(); // UNK_0xe992
  Push(0x00d5);
  UNK_0xee10(); // UNK_0xee10
  UNK_0xedf8(); // UNK_0xedf8
  UNK_0xe99c(); // UNK_0xe99c
  INEXT(); // INEXT
  UNK_0xedf8(); // UNK_0xedf8
  Push(3);
  _star_CLOSE(); // *CLOSE
  Push(0x001c);
  Push(0x0035);
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  Push(pp__ask_3); // ?3
  ON_2(); // ON_2
  UNK_0xf214(); // UNK_0xf214
  UNK_0xf339(); // UNK_0xf339
}


// ================================================
// 0xf436: WORD 'UNK_0xf438' codep=0x224c parp=0xf438
// ================================================

void UNK_0xf438() // UNK_0xf438
{
  Push(0x0037);
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
  Push(pp__ask_3); // ?3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf44c: WORD 'UNK_0xf44e' codep=0x224c parp=0xf44e
// ================================================

void UNK_0xf44e() // UNK_0xf44e
{

  label2:
  UNK_0xe8e6(); // UNK_0xe8e6
  UNK_0xec6f(); // UNK_0xec6f
  UNK_0xf142(); // UNK_0xf142

  label1:
  XYSCAN(); // XYSCAN
  Pop(); Pop();// 2DROP
  _ask_TRIG(); // ?TRIG
  _ask_LAST(); // ?LAST
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  _ask_CHILD(); // ?CHILD
  ICLOSE(); // ICLOSE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xf478: WORD 'UNK_0xf47a' codep=0x224c parp=0xf47a
// ================================================

void UNK_0xf47a() // UNK_0xf47a
{
  UNK_0xe8e6(); // UNK_0xe8e6
  _gt_1FONT(); // >1FONT
  Push(pp__ask_EVAL); // ?EVAL
  _099(); // 099
  Push(pp__ask__gt_OP); // ?>OP
  _099(); // 099
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push(pp__ask_TV); // ?TV
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    UNK_0xf240(); // UNK_0xf240
  }
  Push(pp__ask_RECALL); // ?RECALL
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xf2bc(); // UNK_0xf2bc
  }
  UNK_0xf3b4(); // UNK_0xf3b4
  if (Pop() != 0)
  {
    UNK_0xf38b(); // UNK_0xf38b
  }
  UNK_0xf438(); // UNK_0xf438
  if (Pop() != 0)
  {
    UNK_0xf3ea(); // UNK_0xf3ea
  }
  Push2Words("*OP");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002d);
  IFIND(); // IFIND
  Pop(); // DROP
  _ask_CHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    UNK_0xf44e(); // UNK_0xf44e
    CDROP(); // CDROP
  } else
  {
    UNK_0xed1f(); // UNK_0xed1f
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
    UNK_0xeb80(); // UNK_0xeb80
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
// 0xf4f6: WORD '(U-OP)' codep=0x224c parp=0xf501
// ================================================
// entry

void _ro_U_dash_OP_rc_() // (U-OP)
{
  UNK_0xe7bc(); // UNK_0xe7bc
  Push(pp__ask__gt_OP); // ?>OP
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(0x03e8);
    MS(); // MS
    UNK_0xf47a(); // UNK_0xf47a
  }

  label1:
  XYSCAN(); // XYSCAN
  SWAP(); // SWAP
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Push(pp_UNK_0xe71c); // UNK_0xe71c
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
  }
  Push(0);
  _ask_TRIG(); // ?TRIG
  if (Pop() != 0)
  {
    Push(pp_NCRS); // NCRS
    Push(Read16(Pop())); // @
    OP_dash_CASE(); // OP-CASE case
  }
  if (Pop() == 0) goto label1;
}

// 0xf53d: db 0x4f 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x20 0x20 0x00 'OP-VOC__________________________    '
  