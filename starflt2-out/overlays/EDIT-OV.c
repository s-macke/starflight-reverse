// ====== OVERLAY 'EDIT-OV' ======
// store offset = 0xedc0
// overlay size   = 0x07a0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WEDD6  codep:0x1d29 parp:0xedd6 size:0x000e C-string:'WEDD6'
//           STAMP  codep:0x1d29 parp:0xedee size:0x0002 C-string:'STAMP'
//           WEDF2  codep:0x224c parp:0xedf2 size:0x0008 C-string:'WEDF2'
//           WEDFC  codep:0x224c parp:0xedfc size:0x0008 C-string:'WEDFC'
//           WEE06  codep:0x224c parp:0xee06 size:0x0008 C-string:'WEE06'
//           WEE10  codep:0x224c parp:0xee10 size:0x0008 C-string:'WEE10'
//           WEE1A  codep:0x224c parp:0xee1a size:0x0008 C-string:'WEE1A'
//           WEE24  codep:0x224c parp:0xee24 size:0x0008 C-string:'WEE24'
//           WEE2E  codep:0x224c parp:0xee2e size:0x0008 C-string:'WEE2E'
//           WEE38  codep:0x224c parp:0xee38 size:0x0008 C-string:'WEE38'
//           WEE42  codep:0x224c parp:0xee42 size:0x0008 C-string:'WEE42'
//           WEE4C  codep:0x224c parp:0xee4c size:0x0008 C-string:'WEE4C'
//           WEE56  codep:0x224c parp:0xee56 size:0x0008 C-string:'WEE56'
//           WEE60  codep:0x224c parp:0xee60 size:0x0008 C-string:'WEE60'
//           WEE6A  codep:0x2214 parp:0xee6a size:0x0002 C-string:'WEE6A'
//           WEE6E  codep:0x2214 parp:0xee6e size:0x0002 C-string:'WEE6E'
//           WEE72  codep:0x1d29 parp:0xee72 size:0x0002 C-string:'WEE72'
//           WEE76  codep:0x1d29 parp:0xee76 size:0x0002 C-string:'WEE76'
//           WEE7A  codep:0x1d29 parp:0xee7a size:0x0002 C-string:'WEE7A'
//           WEE7E  codep:0x224c parp:0xee7e size:0x0014 C-string:'WEE7E'
//           WEE94  codep:0x224c parp:0xee94 size:0x000a C-string:'WEE94'
//           WEEA0  codep:0x224c parp:0xeea0 size:0x0006 C-string:'WEEA0'
//           WEEA8  codep:0x224c parp:0xeea8 size:0x0006 C-string:'WEEA8'
//           WEEB0  codep:0x224c parp:0xeeb0 size:0x000e C-string:'WEEB0'
//           WEEC0  codep:0x224c parp:0xeec0 size:0x0012 C-string:'WEEC0'
//           WEED4  codep:0x224c parp:0xeed4 size:0x000e C-string:'WEED4'
//           WEEE4  codep:0x224c parp:0xeee4 size:0x000e C-string:'WEEE4'
//           WEEF4  codep:0x224c parp:0xeef4 size:0x000e C-string:'WEEF4'
//           WEF04  codep:0x224c parp:0xef04 size:0x0010 C-string:'WEF04'
//           WEF16  codep:0x224c parp:0xef16 size:0x000e C-string:'WEF16'
//           WEF26  codep:0x224c parp:0xef26 size:0x000c C-string:'WEF26'
//           WEF34  codep:0x224c parp:0xef34 size:0x000e C-string:'WEF34'
//           WEF44  codep:0x224c parp:0xef44 size:0x000e C-string:'WEF44'
//           WEF54  codep:0x224c parp:0xef54 size:0x0006 C-string:'WEF54'
//           WEF5C  codep:0x224c parp:0xef5c size:0x0008 C-string:'WEF5C'
//           WEF66  codep:0x224c parp:0xef66 size:0x0008 C-string:'WEF66'
//           WEF70  codep:0x224c parp:0xef70 size:0x0008 C-string:'WEF70'
//           WEF7A  codep:0x224c parp:0xef7a size:0x0008 C-string:'WEF7A'
//           WEF84  codep:0x224c parp:0xef84 size:0x0006 C-string:'WEF84'
//           WEF8C  codep:0x224c parp:0xef8c size:0x0008 C-string:'WEF8C'
//           WEF96  codep:0x224c parp:0xef96 size:0x0028 C-string:'WEF96'
//           WEFC0  codep:0x224c parp:0xefc0 size:0x0022 C-string:'WEFC0'
//           WEFE4  codep:0x224c parp:0xefe4 size:0x0016 C-string:'WEFE4'
//           WEFFC  codep:0x224c parp:0xeffc size:0x000e C-string:'WEFFC'
//           WF00C  codep:0x224c parp:0xf00c size:0x0018 C-string:'WF00C'
//           .MODE  codep:0x224c parp:0xf02e size:0x002c C-string:'DrawMODE'
//      DISPLAYKEY  codep:0x224c parp:0xf069 size:0x0057 C-string:'DISPLAYKEY'
//           CLEAR  codep:0x224c parp:0xf0ca size:0x0018 C-string:'CLEAR'
//              ML  codep:0x224c parp:0xf0e9 size:0x0010 C-string:'ML'
//            MLDN  codep:0x224c parp:0xf102 size:0x0006 C-string:'MLDN'
//            MLUP  codep:0x224c parp:0xf111 size:0x0008 C-string:'MLUP'
//           LHOLD  codep:0x224c parp:0xf123 size:0x000a C-string:'LHOLD'
//          (DUPL)  codep:0x224c parp:0xf138 size:0x001c C-string:'_ro_DUPL_rc_'
//            INSL  codep:0x224c parp:0xf15d size:0x000a C-string:'INSL'
//            DUPL  codep:0x224c parp:0xf170 size:0x0006 C-string:'DUPL'
//           SPLIT  codep:0x224c parp:0xf180 size:0x0022 C-string:'SPLIT'
//              XL  codep:0x224c parp:0xf1a9 size:0x002a C-string:'XL'
//              XC  codep:0x224c parp:0xf1da size:0x0020 C-string:'XC'
//          INSERT  codep:0x224c parp:0xf205 size:0x003c C-string:'INSERT'
//          DELETE  codep:0x224c parp:0xf24c size:0x001c C-string:'DELETE'
//           #>MON  codep:0x4b82 parp:0xf272 size:0x001c C-string:'_n__gt_MON'
//        ?VISIBLE  codep:0x224c parp:0xf29b size:0x0016 C-string:'IsVISIBLE'
//             EOL  codep:0x224c parp:0xf2b9 size:0x001c C-string:'EOL'
//             PUT  codep:0x224c parp:0xf2dd size:0x0058 C-string:'PUT'
//        SET-USER  codep:0x224c parp:0xf342 size:0x0098 C-string:'SET_dash_USER'
//           WF3DC  codep:0x224c parp:0xf3dc size:0x000a C-string:'WF3DC'
//           WF3E8  codep:0x224c parp:0xf3e8 size:0x0008 C-string:'WF3E8'
//           WF3F2  codep:0x224c parp:0xf3f2 size:0x0008 C-string:'WF3F2'
//           WF3FC  codep:0x224c parp:0xf3fc size:0x0008 C-string:'WF3FC'
//           WF406  codep:0x224c parp:0xf406 size:0x0006 C-string:'WF406'
//           WF40E  codep:0x224c parp:0xf40e size:0x0006 C-string:'WF40E'
//           WF416  codep:0x224c parp:0xf416 size:0x000e C-string:'WF416'
//          >STAMP  codep:0x224c parp:0xf42f size:0x004a C-string:'_gt_STAMP'
//       EDIT-KEYS  codep:0x4b3b parp:0xf487 size:0x0064 C-string:'EDIT_dash_KEYS'
//            EDIT  codep:0x224c parp:0xf4f4 size:0x0020 C-string:'EDIT'
//       VIEW-KEYS  codep:0x4b3b parp:0xf522 size:0x0010 C-string:'VIEW_dash_KEYS'
//            VIEW  codep:0x224c parp:0xf53b size:0x0000 C-string:'VIEW'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_C_slash_L; // C/L
extern const unsigned short int cc_CX; // CX
extern const unsigned short int cc_DX; // DX
extern const unsigned short int pp_FILENAMES; // FILENAMES
extern const unsigned short int user_COL; // COL
extern const unsigned short int user_COLMIN; // COLMIN
extern const unsigned short int user_COLMAX; // COLMAX
extern const unsigned short int user_SCR; // SCR
void MAX(); // MAX
void MIN(); // MIN
void PAD(); // PAD
void QUIT(); // QUIT
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void LIST(); // LIST
void SPACE(); // SPACE
void SPACES(); // SPACES
void UPDATE(); // UPDATE
void EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
void NOP(); // NOP
void DOSCALL(); // DOSCALL
void KEY_2(); // KEY_2
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void BLOCK_2(); // BLOCK_2
void SAVE_dash_BU(); // SAVE-BU
void OV_dash_CANC(); // OV-CANC
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_MOD(); // /MOD
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void _st_LCMOVE(); // <LCMOVE
void GetDS(); // @DS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEDD6 = 0xedd6; // WEDD6 size: 14
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_STAMP = 0xedee; // STAMP size: 2
// {0x01, 0x00}

const unsigned short int pp_WEE72 = 0xee72; // WEE72 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEE76 = 0xee76; // WEE76 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEE7A = 0xee7a; // WEE7A size: 2
// {0x3a, 0x20}


const unsigned short int cc_WEE6A = 0xee6a; // WEE6A
const unsigned short int cc_WEE6E = 0xee6e; // WEE6E


// 0xedd2: db 0x7a 0x00 'z '

// ================================================
// 0xedd4: WORD 'WEDD6' codep=0x1d29 parp=0xedd6
// ================================================
// 0xedd6: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4c 0x4f 0x54 0x20 0x20 0x20 0x20 ' ALLOT LOT    '

// ================================================
// 0xede4: WORD 'STAMP' codep=0x1d29 parp=0xedee
// ================================================
// 0xedee: db 0x01 0x00 '  '

// ================================================
// 0xedf0: WORD 'WEDF2' codep=0x224c parp=0xedf2 params=0 returns=2
// ================================================
// orphan

void WEDF2() // WEDF2
{
  SET_STR_AS_PARAM("jan");
}


// ================================================
// 0xedfa: WORD 'WEDFC' codep=0x224c parp=0xedfc params=0 returns=2
// ================================================
// orphan

void WEDFC() // WEDFC
{
  SET_STR_AS_PARAM("feb");
}


// ================================================
// 0xee04: WORD 'WEE06' codep=0x224c parp=0xee06 params=0 returns=2
// ================================================
// orphan

void WEE06() // WEE06
{
  SET_STR_AS_PARAM("mar");
}


// ================================================
// 0xee0e: WORD 'WEE10' codep=0x224c parp=0xee10 params=0 returns=2
// ================================================
// orphan

void WEE10() // WEE10
{
  SET_STR_AS_PARAM("apr");
}


// ================================================
// 0xee18: WORD 'WEE1A' codep=0x224c parp=0xee1a params=0 returns=2
// ================================================
// orphan

void WEE1A() // WEE1A
{
  SET_STR_AS_PARAM("may");
}


// ================================================
// 0xee22: WORD 'WEE24' codep=0x224c parp=0xee24 params=0 returns=2
// ================================================
// orphan

void WEE24() // WEE24
{
  SET_STR_AS_PARAM("jun");
}


// ================================================
// 0xee2c: WORD 'WEE2E' codep=0x224c parp=0xee2e params=0 returns=2
// ================================================
// orphan

void WEE2E() // WEE2E
{
  SET_STR_AS_PARAM("jul");
}


// ================================================
// 0xee36: WORD 'WEE38' codep=0x224c parp=0xee38 params=0 returns=2
// ================================================
// orphan

void WEE38() // WEE38
{
  SET_STR_AS_PARAM("aug");
}


// ================================================
// 0xee40: WORD 'WEE42' codep=0x224c parp=0xee42 params=0 returns=2
// ================================================
// orphan

void WEE42() // WEE42
{
  SET_STR_AS_PARAM("sep");
}


// ================================================
// 0xee4a: WORD 'WEE4C' codep=0x224c parp=0xee4c params=0 returns=2
// ================================================
// orphan

void WEE4C() // WEE4C
{
  SET_STR_AS_PARAM("oct");
}


// ================================================
// 0xee54: WORD 'WEE56' codep=0x224c parp=0xee56 params=0 returns=2
// ================================================
// orphan

void WEE56() // WEE56
{
  SET_STR_AS_PARAM("nov");
}


// ================================================
// 0xee5e: WORD 'WEE60' codep=0x224c parp=0xee60 params=0 returns=2
// ================================================
// orphan

void WEE60() // WEE60
{
  SET_STR_AS_PARAM("dec");
}


// ================================================
// 0xee68: WORD 'WEE6A' codep=0x2214 parp=0xee6a
// ================================================
// 0xee6a: dw 0x0040

// ================================================
// 0xee6c: WORD 'WEE6E' codep=0x2214 parp=0xee6e
// ================================================
// 0xee6e: dw 0x000f

// ================================================
// 0xee70: WORD 'WEE72' codep=0x1d29 parp=0xee72
// ================================================
// 0xee72: db 0x3a 0x20 ': '

// ================================================
// 0xee74: WORD 'WEE76' codep=0x1d29 parp=0xee76
// ================================================
// 0xee76: db 0x3a 0x20 ': '

// ================================================
// 0xee78: WORD 'WEE7A' codep=0x1d29 parp=0xee7a
// ================================================
// 0xee7a: db 0x3a 0x20 ': '

// ================================================
// 0xee7c: WORD 'WEE7E' codep=0x224c parp=0xee7e params=3 returns=0
// ================================================

void WEE7E() // WEE7E
{
  unsigned short int a, b, c;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  GetDS(); // @DS
  Push(c); // R>
  OVER(); // OVER
  Push(b); // R>
  Push(a); // R>
  _st_LCMOVE(); // <LCMOVE
}


// ================================================
// 0xee92: WORD 'WEE94' codep=0x224c parp=0xee94 params=0 returns=1
// ================================================

void WEE94() // WEE94
{
  PAD(); // PAD
  Push(Pop() + 0x0050); //  0x0050 +
}


// ================================================
// 0xee9e: WORD 'WEEA0' codep=0x224c parp=0xeea0 params=0 returns=1
// ================================================

void WEEA0() // WEEA0
{
  Push(Read16(pp_WEE76)); // WEE76 @
}


// ================================================
// 0xeea6: WORD 'WEEA8' codep=0x224c parp=0xeea8 params=0 returns=1
// ================================================

void WEEA8() // WEEA8
{
  Push(Read16(pp_WEE72)); // WEE72 @
}


// ================================================
// 0xeeae: WORD 'WEEB0' codep=0x224c parp=0xeeb0 params=2 returns=0
// ================================================

void WEEB0() // WEEB0
{
  Push(Pop() + 2); //  2 +
  SWAP(); // SWAP
  Push(Pop() + 4); //  4 +
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
}


// ================================================
// 0xeebe: WORD 'WEEC0' codep=0x224c parp=0xeec0
// ================================================

void WEEC0() // WEEC0
{
  Push(0);
  Push(5);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  WEEA0(); // WEEA0
  Draw(); // .
  WEEA0(); // WEEA0
  WEEA8(); // WEEA8
  WEEB0(); // WEEB0
}


// ================================================
// 0xeed2: WORD 'WEED4' codep=0x224c parp=0xeed4 params=0 returns=0
// ================================================

void WEED4() // WEED4
{
  Push(0);
  Push(pp_WEE76); // WEE76
  Store_2(); // !_2
  Push(0);
  Push(pp_WEE72); // WEE72
  Store_2(); // !_2
}


// ================================================
// 0xeee2: WORD 'WEEE4' codep=0x224c parp=0xeee4 params=0 returns=0
// ================================================

void WEEE4() // WEEE4
{
  WEEA8(); // WEEA8
  Push(Pop() + 1); //  1+
  Push(Read16(cc_WEE6E)); // WEE6E
  MIN(); // MIN
  Push(pp_WEE72); // WEE72
  Store_2(); // !_2
}


// ================================================
// 0xeef2: WORD 'WEEF4' codep=0x224c parp=0xeef4 params=0 returns=0
// ================================================

void WEEF4() // WEEF4
{
  WEEA8(); // WEEA8
  Push(Pop() - 1); //  1-
  Push(0);
  MAX(); // MAX
  Push(pp_WEE72); // WEE72
  Store_2(); // !_2
}


// ================================================
// 0xef02: WORD 'WEF04' codep=0x224c parp=0xef04 params=0 returns=0
// ================================================

void WEF04() // WEF04
{
  WEEA0(); // WEEA0
  Push(Pop() + 1); //  1+
  Push(Read16(cc_WEE6A) - 1); // WEE6A 1-
  MIN(); // MIN
  Push(pp_WEE76); // WEE76
  Store_2(); // !_2
}


// ================================================
// 0xef14: WORD 'WEF16' codep=0x224c parp=0xef16 params=0 returns=0
// ================================================

void WEF16() // WEF16
{
  WEEA0(); // WEEA0
  Push(Pop() - 1); //  1-
  Push(0);
  MAX(); // MAX
  Push(pp_WEE76); // WEE76
  Store_2(); // !_2
}


// ================================================
// 0xef24: WORD 'WEF26' codep=0x224c parp=0xef26 params=0 returns=1
// ================================================
// orphan

void WEF26() // WEF26
{
  Push((Read16(user_COLMAX)&0xFF) - (Read16(user_COLMIN)&0xFF)); // COLMAX C@ COLMIN C@ -
}


// ================================================
// 0xef32: WORD 'WEF34' codep=0x224c parp=0xef34 params=1 returns=0
// ================================================
// orphan

void WEF34() // WEF34
{
  Push(0);
  MAX(); // MAX
  WEF26(); // WEF26
  MIN(); // MIN
  Push(user_COL); // COL
  C_ex__2(); // C!_2
}


// ================================================
// 0xef42: WORD 'WEF44' codep=0x224c parp=0xef44 params=1 returns=2
// ================================================

void WEF44() // WEF44
{
  Push(Pop() * Read16(cc_WEE6A)); //  WEE6A *
  Push(Read16(user_SCR)); // SCR @
  BLOCK_2(); // BLOCK_2
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xef52: WORD 'WEF54' codep=0x224c parp=0xef54 params=0 returns=2
// ================================================

void WEF54() // WEF54
{
  WEEA8(); // WEEA8
  WEF44(); // WEF44
}


// ================================================
// 0xef5a: WORD 'WEF5C' codep=0x224c parp=0xef5c params=0 returns=2
// ================================================

void WEF5C() // WEF5C
{
  WEF54(); // WEF54
  WEEA0(); // WEEA0
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xef64: WORD 'WEF66' codep=0x224c parp=0xef66 params=0 returns=1
// ================================================

void WEF66() // WEF66
{
  Push(Read16(cc_WEE6A)); // WEE6A
  WEEA0(); // WEEA0
  _dash_(); // -
}


// ================================================
// 0xef6e: WORD 'WEF70' codep=0x224c parp=0xef70 params=0 returns=1
// ================================================

void WEF70() // WEF70
{
  Push(Read16(cc_WEE6E)); // WEE6E
  WEEA8(); // WEEA8
  _dash_(); // -
}


// ================================================
// 0xef78: WORD 'WEF7A' codep=0x224c parp=0xef7a params=1 returns=1
// ================================================

void WEF7A() // WEF7A
{
  Push(Pop() + 0x0030); //  0x0030 +
}


// ================================================
// 0xef82: WORD 'WEF84' codep=0x224c parp=0xef84 params=1 returns=1
// ================================================

void WEF84() // WEF84
{
  Push(Pop() + pp_WEDD6); //  WEDD6 +
}


// ================================================
// 0xef8a: WORD 'WEF8C' codep=0x224c parp=0xef8c params=0 returns=1
// ================================================

void WEF8C() // WEF8C
{
  WEF5C(); // WEF5C
  WEF66(); // WEF66
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xef94: WORD 'WEF96' codep=0x224c parp=0xef96 params=0 returns=1
// ================================================

void WEF96() // WEF96
{
  unsigned short int i, imax;
  WEEA8(); // WEEA8
  WEF70(); // WEF70
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Pop() + 1); //  1+
  }
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(0);
    OVER(); // OVER
    WEEB0(); // WEEB0
    WEF44(); // WEF44
    Push(Read16(cc_WEE6A)); // WEE6A
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(Pop() + 1); //  1+
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xefbe: WORD 'WEFC0' codep=0x224c parp=0xefc0
// ================================================

void WEFC0() // WEFC0
{
  Push(user_SCR); // SCR
  _plus__ex__2(); // +!_2
  WEEA0(); // WEEA0
  WEEA8(); // WEEA8
  WEED4(); // WEED4
  WEF96(); // WEF96
  Push(pp_WEE72); // WEE72
  Store_2(); // !_2
  Push(pp_WEE76); // WEE76
  Store_2(); // !_2
  Push(1);
  Push(5);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(Read16(user_SCR)); // SCR @
  Draw(); // .
}


// ================================================
// 0xefe2: WORD 'WEFE4' codep=0x224c parp=0xefe4 params=1 returns=1
// ================================================

void WEFE4() // WEFE4
{
  Push(Read16(regsp)); // DUP
  WEF44(); // WEF44
  Push(Read16(cc_WEE6A)); // WEE6A
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(0);
  SWAP(); // SWAP
  WEEB0(); // WEEB0
  Push(Read16(cc_WEE6A)); // WEE6A
  SPACES(); // SPACES
}


// ================================================
// 0xeffa: WORD 'WEFFC' codep=0x224c parp=0xeffc params=0 returns=1
// ================================================

void WEFFC() // WEFFC
{
  WEF5C(); // WEF5C
  WEF66(); // WEF66
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  WEF66(); // WEF66
  SPACES(); // SPACES
}


// ================================================
// 0xf00a: WORD 'WF00C' codep=0x224c parp=0xf00c params=0 returns=2
// ================================================

void WF00C() // WF00C
{
  unsigned short int i, imax;
  WEFFC(); // WEFFC
  WEEA8(); // WEEA8
  WEF70(); // WEF70
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Pop() + 1); //  1+
    Push(Read16(regsp)); // DUP
    WEFE4(); // WEFE4
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf024: WORD '.MODE' codep=0x224c parp=0xf02e params=0 returns=0
// ================================================

void DrawMODE() // .MODE
{
  Push(0x0018);
  Push(0x0048);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(Read16(pp_WEE7A)); // WEE7A @
  if (Pop() != 0)
  {
    PRINT("Insert ", 7); // (.")
    return;
  }
  PRINT("Replace", 7); // (.")
}


// ================================================
// 0xf05a: WORD 'DISPLAYKEY' codep=0x224c parp=0xf069 params=0 returns=0
// ================================================

void DISPLAYKEY() // DISPLAYKEY
{
  Push(0x0018);
  Push(0);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("1:SV-BUF 2:RCL  3:IL  4:XL  5:DUP  6:SPLIT  7:>L  ", 50); // (.")
  PRINT("8:>S  9:HOLD 10:PUT", 19); // (.")
  DrawMODE(); // .MODE
}


// ================================================
// 0xf0c0: WORD 'CLEAR' codep=0x224c parp=0xf0ca params=0 returns=0
// ================================================

void CLEAR() // CLEAR
{
  Push(0x0018);
  Push(0);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(0x004f);
  SPACES(); // SPACES
  Push(0x0012);
  Push(0);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
}


// ================================================
// 0xf0e2: WORD 'ML' codep=0x224c parp=0xf0e9 params=2 returns=1
// ================================================

void ML() // ML
{
  SWAP(); // SWAP
  WEF44(); // WEF44
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(Read16(cc_WEE6A)); // WEE6A
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xf0f9: WORD 'MLDN' codep=0x224c parp=0xf102 params=1 returns=1
// ================================================

void MLDN() // MLDN
{
  Push(Read16(cc_WEE6A)); // WEE6A
  ML(); // ML
}


// ================================================
// 0xf108: WORD 'MLUP' codep=0x224c parp=0xf111 params=1 returns=1
// ================================================

void MLUP() // MLUP
{
  Push(-Read16(cc_WEE6A)); // WEE6A NEGATE
  ML(); // ML
}


// ================================================
// 0xf119: WORD 'LHOLD' codep=0x224c parp=0xf123 params=0 returns=1
// ================================================

void LHOLD() // LHOLD
{
  WEF54(); // WEF54
  WEE94(); // WEE94
  Push(Read16(cc_C_slash_L)); // C/L
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xf12d: WORD '(DUPL)' codep=0x224c parp=0xf138 params=0 returns=0
// ================================================

void _ro_DUPL_rc_() // (DUPL)
{
  unsigned short int i, imax;
  WEF70(); // WEF70
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x000e - i); // 0x000e I -
    MLDN(); // MLDN
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf154: WORD 'INSL' codep=0x224c parp=0xf15d params=0 returns=2
// ================================================

void INSL() // INSL
{
  _ro_DUPL_rc_(); // (DUPL)
  WEEA8(); // WEEA8
  WEFE4(); // WEFE4
  WEF96(); // WEF96
}


// ================================================
// 0xf167: WORD 'DUPL' codep=0x224c parp=0xf170 params=0 returns=1
// ================================================

void DUPL() // DUPL
{
  _ro_DUPL_rc_(); // (DUPL)
  WEF96(); // WEF96
}


// ================================================
// 0xf176: WORD 'SPLIT' codep=0x224c parp=0xf180 params=0 returns=0
// ================================================

void SPLIT() // SPLIT
{
  WEF70(); // WEF70
  if (Pop() == 0) return;
  _ro_DUPL_rc_(); // (DUPL)
  WEFFC(); // WEFFC
  WEF54(); // WEF54
  Push(Pop() + Read16(cc_WEE6A)); //  WEE6A +
  WEEA0(); // WEEA0
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  WEEA8(); // WEEA8
  WEEE4(); // WEEE4
  WEF96(); // WEF96
  Push(pp_WEE72); // WEE72
  Store_2(); // !_2
}


// ================================================
// 0xf1a2: WORD 'XL' codep=0x224c parp=0xf1a9 params=0 returns=3
// ================================================

void XL() // XL
{
  unsigned short int i, imax;
  LHOLD(); // LHOLD
  WEF70(); // WEF70
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      WEEA8(); // WEEA8
      Push((Pop() + i) + 1); //  I + 1+
      MLUP(); // MLUP
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(Read16(cc_WEE6E)); // WEE6E
  WEF44(); // WEF44
  Push(Read16(cc_WEE6A)); // WEE6A
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  WEF96(); // WEF96
}


// ================================================
// 0xf1d3: WORD 'XC' codep=0x224c parp=0xf1da params=0 returns=2
// ================================================

void XC() // XC
{
  WEF5C(); // WEF5C
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  WEF66(); // WEF66
  Push(Pop() - 1); //  1-
  CMOVE_2(); // CMOVE_2
  Push(Read16(cc_BL)); // BL
  SWAP(); // SWAP
  WEF66(); // WEF66
  Push(Pop() - 1); //  1-
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
  WEF8C(); // WEF8C
}


// ================================================
// 0xf1fa: WORD 'INSERT' codep=0x224c parp=0xf205 params=1 returns=1
// ================================================

void INSERT() // INSERT
{
  Push(Read16(regsp)); // DUP
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(Read16(pp_WEE7A)); // WEE7A @
  if (Pop() != 0)
  {
    WEF66(); // WEF66
    Push(Pop() - 1); //  1-
    if (Pop() != 0)
    {
      WEF5C(); // WEF5C
      Push(Read16(regsp)); // DUP
      Push(Read16(regsp)); // DUP
      Push(Pop() + 1); //  1+
      WEF66(); // WEF66
      Push(Pop() - 1); //  1-
      WEE7E(); // WEE7E
      C_ex__2(); // C!_2
      WEF04(); // WEF04
      WEF8C(); // WEF8C
    } else
    {
      WEF5C(); // WEF5C
      C_ex__2(); // C!_2
    }
    return;
  }
  WEF5C(); // WEF5C
  C_ex__2(); // C!_2
  WEF04(); // WEF04
}


// ================================================
// 0xf241: WORD 'DELETE' codep=0x224c parp=0xf24c
// ================================================

void DELETE() // DELETE
{
  WEF16(); // WEF16
  WEEC0(); // WEEC0
  Push(Read16(pp_WEE7A)); // WEE7A @
  if (Pop() != 0)
  {
    XC(); // XC
    return;
  }
  Push(Read16(cc_BL)); // BL
  WEF5C(); // WEF5C
  C_ex__2(); // C!_2
  SPACE(); // SPACE
}


// ================================================
// 0xf268: WORD '#>MON' codep=0x4b82 parp=0xf272
// ================================================
// 0xf272: db 0x46 0x3a 0xf0 0xed 0xfa 0xed 0x04 0xee 0x0e 0xee 0x18 0xee 0x22 0xee 0x2c 0xee 0x36 0xee 0x40 0xee 0x4a 0xee 0x54 0xee 0x5e 0xee 0x90 0x16 'F:          " , 6 @ J T ^   '

// ================================================
// 0xf28e: WORD '?VISIBLE' codep=0x224c parp=0xf29b params=1 returns=2
// ================================================

void IsVISIBLE() // ?VISIBLE
{
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(0x001f);
  _gt_(); // >
  SWAP(); // SWAP
  Push(0x0080);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf2b1: WORD 'EOL' codep=0x224c parp=0xf2b9 params=0 returns=1
// ================================================

void EOL() // EOL
{
  WEF54(); // WEF54
  Push(Read16(cc_WEE6A)); // WEE6A
  _dash_TRAILING(); // -TRAILING
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Pop() + 1); //  1+
  }
  Push(0x003f);
  MIN(); // MIN
  Push(pp_WEE76); // WEE76
  Store_2(); // !_2
  Pop(); // DROP
}


// ================================================
// 0xf2d5: WORD 'PUT' codep=0x224c parp=0xf2dd
// ================================================

void PUT() // PUT
{
  unsigned short int i, imax;
  Push(Read16(cc_WEE6A)); // WEE6A
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WEE94(); // WEE94
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    IsVISIBLE(); // ?VISIBLE
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      Push(i); // R>
      Push(imax); // R>
      Pop(); Pop(); // 2DROP
      Exec("BELL"); // call of word 0x266b 'BEEP'
      return;
    }
    Pop(); // DROP
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_WEE7A)); // WEE7A @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    _ro_DUPL_rc_(); // (DUPL)
  }
  WEE94(); // WEE94
  WEF54(); // WEF54
  Push(Read16(cc_WEE6A)); // WEE6A
  CMOVE_2(); // CMOVE_2
  UPDATE(); // UPDATE
  if (Pop() != 0)
  {
    WEF96(); // WEF96
    return;
  }
  WEEA0(); // WEEA0
  Push(0);
  Push(pp_WEE76); // WEE76
  Store_2(); // !_2
  WEEC0(); // WEEC0
  WEF8C(); // WEF8C
  Push(pp_WEE76); // WEE76
  Store_2(); // !_2
}


// ================================================
// 0xf335: WORD 'SET-USER' codep=0x224c parp=0xf342
// ================================================

void SET_dash_USER() // SET-USER
{
  Push(pp_WEDD6); // WEDD6
  Push(0x000e);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(0x0029);
  Push(0x000c);
  WEF84(); // WEF84
  C_ex__2(); // C!_2
  SET_STR_AS_PARAM("rfg");
  Push(1);
  WEF84(); // WEF84
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  Push(0x002a);
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_DX))&0xFF); // DX C@
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    WEF7A(); // WEF7A
    Push(0);
    WEF7A(); // WEF7A
  } else
  {
    Push(Read16(regsp)); // DUP
    Push(0x000a);
    _slash_MOD(); // /MOD
    SWAP(); // SWAP
    WEF7A(); // WEF7A
    SWAP(); // SWAP
    WEF7A(); // WEF7A
  }
  Push(4);
  WEF84(); // WEF84
  C_ex__2(); // C!_2
  Push(5);
  WEF84(); // WEF84
  C_ex__2(); // C!_2
  Push(Read16(Read16(cc_DX) + 1)&0xFF); // DX 1+ C@
  Func5("#>MON");
  Push(6);
  WEF84(); // WEF84
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  Push(Read16(Read16(cc_CX)) - 0x076c); // CX @ 0x076c -
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _slash_MOD(); // /MOD
  WEF7A(); // WEF7A
  SWAP(); // SWAP
  WEF7A(); // WEF7A
  Push(0x000a);
  WEF84(); // WEF84
  C_ex__2(); // C!_2
  Push(9);
  WEF84(); // WEF84
  C_ex__2(); // C!_2
}


// ================================================
// 0xf3da: WORD 'WF3DC' codep=0x224c parp=0xf3dc params=0 returns=0
// ================================================

void WF3DC() // WF3DC
{
  Push(0);
  Push(pp_WEE76); // WEE76
  Store_2(); // !_2
  WEEE4(); // WEEE4
}


// ================================================
// 0xf3e6: WORD 'WF3E8' codep=0x224c parp=0xf3e8 params=0 returns=0
// ================================================

void WF3E8() // WF3E8
{
  WEF04(); // WEF04
  WEF04(); // WEF04
  WEF04(); // WEF04
}


// ================================================
// 0xf3f0: WORD 'WF3F2' codep=0x224c parp=0xf3f2 params=0 returns=0
// ================================================

void WF3F2() // WF3F2
{
  CLEAR(); // CLEAR
  OV_dash_CANC(); // OV-CANC
  QUIT(); // QUIT
}


// ================================================
// 0xf3fa: WORD 'WF3FC' codep=0x224c parp=0xf3fc
// ================================================

void WF3FC() // WF3FC
{
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  Push(0);
  WEFC0(); // WEFC0
}


// ================================================
// 0xf404: WORD 'WF406' codep=0x224c parp=0xf406
// ================================================

void WF406() // WF406
{
  Push(1);
  WEFC0(); // WEFC0
}


// ================================================
// 0xf40c: WORD 'WF40E' codep=0x224c parp=0xf40e
// ================================================

void WF40E() // WF40E
{
  Push(-1);
  WEFC0(); // WEFC0
}


// ================================================
// 0xf414: WORD 'WF416' codep=0x224c parp=0xf416 params=0 returns=0
// ================================================

void WF416() // WF416
{
  Push(!Read16(pp_WEE7A)); // WEE7A @ NOT
  Push(pp_WEE7A); // WEE7A
  Store_2(); // !_2
  DrawMODE(); // .MODE
}


// ================================================
// 0xf424: WORD '>STAMP' codep=0x224c parp=0xf42f
// ================================================

void _gt_STAMP() // >STAMP
{
  unsigned short int a;
  Push(Read16(pp_STAMP)); // STAMP @
  if (Pop() != 0)
  {
    SET_dash_USER(); // SET-USER
    Push(pp_WEDD6); // WEDD6
    Push(Read16(user_SCR)); // SCR @
    BLOCK_2(); // BLOCK_2
    a = Pop(); // >R
    Push(Read16(a)); // R@
    Push(Pop() + 0x0032); //  0x0032 +
    Push(0x000e);
    CMOVE_2(); // CMOVE_2
    Push(pp_FILENAMES + 0x0016); // FILENAMES 0x0016 +
    Push(Read16(a)); // R@
    Push(Pop() + 0x0026); //  0x0026 +
    Push(0x000b);
    CMOVE_2(); // CMOVE_2
    Push(0x205c);
    Push(a + 0x0024); // R> 0x0024 +
    Store_2(); // !_2
  }
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xf479: WORD 'EDIT-KEYS' codep=0x4b3b parp=0xf487
// ================================================

void EDIT_dash_KEYS() // EDIT-KEYS
{
  switch(Pop()) // EDIT-KEYS
  {
  case 327:
    WEED4(); // WEED4
    break;
  case 317:
    INSL(); // INSL
    break;
  case 8:
    DELETE(); // DELETE
    break;
  case 336:
    WEEE4(); // WEEE4
    break;
  case 319:
    DUPL(); // DUPL
    break;
  case 9:
    WF3E8(); // WF3E8
    break;
  case 328:
    WEEF4(); // WEEF4
    break;
  case 320:
    SPLIT(); // SPLIT
    break;
  case 27:
    WF3F2(); // WF3F2
    break;
  case 333:
    WEF04(); // WEF04
    break;
  case 318:
    XL(); // XL
    break;
  case 316:
    WF3FC(); // WF3FC
    break;
  case 331:
    WEF16(); // WEF16
    break;
  case 339:
    XC(); // XC
    break;
  case 329:
    WF406(); // WF406
    break;
  case 321:
    WEFFC(); // WEFFC
    break;
  case 335:
    EOL(); // EOL
    break;
  case 337:
    WF40E(); // WF40E
    break;
  case 322:
    WF00C(); // WF00C
    break;
  case 324:
    PUT(); // PUT
    break;
  case 338:
    WF416(); // WF416
    break;
  case 323:
    LHOLD(); // LHOLD
    break;
  case 13:
    WF3DC(); // WF3DC
    break;
  case 315:
    _gt_STAMP(); // >STAMP
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4eb: WORD 'EDIT' codep=0x224c parp=0xf4f4
// ================================================
// entry

void EDIT() // EDIT
{
  WEED4(); // WEED4
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  LIST(); // LIST
  DISPLAYKEY(); // DISPLAYKEY
  while(1)
  {
    WEEC0(); // WEEC0
    KEY_2(); // KEY_2
    IsVISIBLE(); // ?VISIBLE
    if (Pop() != 0)
    {
      INSERT(); // INSERT
    } else
    {
      EDIT_dash_KEYS(); // EDIT-KEYS case
    }
  }
}


// ================================================
// 0xf514: WORD 'VIEW-KEYS' codep=0x4b3b parp=0xf522
// ================================================

void VIEW_dash_KEYS() // VIEW-KEYS
{
  switch(Pop()) // VIEW-KEYS
  {
  case 27:
    WF3F2(); // WF3F2
    break;
  case 329:
    WF406(); // WF406
    break;
  case 337:
    WF40E(); // WF40E
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf532: WORD 'VIEW' codep=0x224c parp=0xf53b
// ================================================

void VIEW() // VIEW
{
  WEED4(); // WEED4
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  LIST(); // LIST
  DISPLAYKEY(); // DISPLAYKEY
  while(1)
  {
    WEEC0(); // WEEC0
    KEY_2(); // KEY_2
    IsVISIBLE(); // ?VISIBLE
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      VIEW_dash_KEYS(); // VIEW-KEYS case
    }
  }
}

// 0xf557: db 0x2b 0x45 0x44 0x49 0x54 0x5f 0x5f 0x5f 0x5f 0x00 '+EDIT____ '

