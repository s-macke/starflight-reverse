// ====== OVERLAY 'EDIT-OV' ======
// store offset = 0xedc0
// overlay size   = 0x07a0

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xedd6  codep:0x1d29 parp:0xedd6 size:0x000e C-string:'UNK_0xedd6'
//           STAMP  codep:0x1d29 parp:0xedee size:0x007a C-string:'STAMP'
//      UNK_0xee6a  codep:0x2214 parp:0xee6a size:0x0002 C-string:'UNK_0xee6a'
//      UNK_0xee6e  codep:0x2214 parp:0xee6e size:0x0002 C-string:'UNK_0xee6e'
//      UNK_0xee72  codep:0x1d29 parp:0xee72 size:0x0002 C-string:'UNK_0xee72'
//      UNK_0xee76  codep:0x1d29 parp:0xee76 size:0x0002 C-string:'UNK_0xee76'
//      UNK_0xee7a  codep:0x1d29 parp:0xee7a size:0x0002 C-string:'UNK_0xee7a'
//      UNK_0xee7e  codep:0x224c parp:0xee7e size:0x0014 C-string:'UNK_0xee7e'
//      UNK_0xee94  codep:0x224c parp:0xee94 size:0x000a C-string:'UNK_0xee94'
//      UNK_0xeea0  codep:0x224c parp:0xeea0 size:0x0006 C-string:'UNK_0xeea0'
//      UNK_0xeea8  codep:0x224c parp:0xeea8 size:0x0006 C-string:'UNK_0xeea8'
//      UNK_0xeeb0  codep:0x224c parp:0xeeb0 size:0x000e C-string:'UNK_0xeeb0'
//      UNK_0xeec0  codep:0x224c parp:0xeec0 size:0x0012 C-string:'UNK_0xeec0'
//      UNK_0xeed4  codep:0x224c parp:0xeed4 size:0x000e C-string:'UNK_0xeed4'
//      UNK_0xeee4  codep:0x224c parp:0xeee4 size:0x000e C-string:'UNK_0xeee4'
//      UNK_0xeef4  codep:0x224c parp:0xeef4 size:0x000e C-string:'UNK_0xeef4'
//      UNK_0xef04  codep:0x224c parp:0xef04 size:0x0010 C-string:'UNK_0xef04'
//      UNK_0xef16  codep:0x224c parp:0xef16 size:0x002c C-string:'UNK_0xef16'
//      UNK_0xef44  codep:0x224c parp:0xef44 size:0x000e C-string:'UNK_0xef44'
//      UNK_0xef54  codep:0x224c parp:0xef54 size:0x0006 C-string:'UNK_0xef54'
//      UNK_0xef5c  codep:0x224c parp:0xef5c size:0x0008 C-string:'UNK_0xef5c'
//      UNK_0xef66  codep:0x224c parp:0xef66 size:0x0008 C-string:'UNK_0xef66'
//      UNK_0xef70  codep:0x224c parp:0xef70 size:0x0008 C-string:'UNK_0xef70'
//      UNK_0xef7a  codep:0x224c parp:0xef7a size:0x0008 C-string:'UNK_0xef7a'
//      UNK_0xef84  codep:0x224c parp:0xef84 size:0x0006 C-string:'UNK_0xef84'
//      UNK_0xef8c  codep:0x224c parp:0xef8c size:0x0008 C-string:'UNK_0xef8c'
//      UNK_0xef96  codep:0x224c parp:0xef96 size:0x0028 C-string:'UNK_0xef96'
//      UNK_0xefc0  codep:0x224c parp:0xefc0 size:0x0022 C-string:'UNK_0xefc0'
//      UNK_0xefe4  codep:0x224c parp:0xefe4 size:0x0016 C-string:'UNK_0xefe4'
//      UNK_0xeffc  codep:0x224c parp:0xeffc size:0x000e C-string:'UNK_0xeffc'
//      UNK_0xf00c  codep:0x224c parp:0xf00c size:0x0018 C-string:'UNK_0xf00c'
//           .MODE  codep:0x224c parp:0xf02e size:0x002c C-string:'_dot_MODE'
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
//        ?VISIBLE  codep:0x224c parp:0xf29b size:0x0016 C-string:'_ask_VISIBLE'
//             EOL  codep:0x224c parp:0xf2b9 size:0x001c C-string:'EOL'
//             PUT  codep:0x224c parp:0xf2dd size:0x0058 C-string:'PUT'
//        SET-USER  codep:0x224c parp:0xf342 size:0x0098 C-string:'SET_dash_USER'
//      UNK_0xf3dc  codep:0x224c parp:0xf3dc size:0x000a C-string:'UNK_0xf3dc'
//      UNK_0xf3e8  codep:0x224c parp:0xf3e8 size:0x0008 C-string:'UNK_0xf3e8'
//      UNK_0xf3f2  codep:0x224c parp:0xf3f2 size:0x0008 C-string:'UNK_0xf3f2'
//      UNK_0xf3fc  codep:0x224c parp:0xf3fc size:0x0008 C-string:'UNK_0xf3fc'
//      UNK_0xf406  codep:0x224c parp:0xf406 size:0x0006 C-string:'UNK_0xf406'
//      UNK_0xf40e  codep:0x224c parp:0xf40e size:0x0006 C-string:'UNK_0xf40e'
//      UNK_0xf416  codep:0x224c parp:0xf416 size:0x000e C-string:'UNK_0xf416'
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
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__5; // 5
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__9; // 9
extern const unsigned short int cc__dash_1; // -1
extern const unsigned short int pp_FILENAMES; // FILENAMES
void MAX(); // MAX
void MIN(); // MIN
void PAD(); // PAD
void QUIT(); // QUIT
void _dash_TRAILING(); // -TRAILING
void _dot_(); // .
void LIST(); // LIST
void SPACE(); // SPACE
void SPACES(); // SPACES
void UPDATE(); // UPDATE
void EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
void NOP(); // NOP
void DOSCALL(); // DOSCALL
void KEY_2(); // KEY_2
void C_ex__2(); // C!_2
void _ex__2(); // !_2
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
void _at_DS(); // @DS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xedd6 = 0xedd6; // UNK_0xedd6 size: 14
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x20, 0x20}

const unsigned short int pp_STAMP = 0xedee; // STAMP size: 122
// {0x01, 0x00, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6a, 0x61, 0x6e, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x66, 0x65, 0x62, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6d, 0x61, 0x72, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x61, 0x70, 0x72, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6d, 0x61, 0x79, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6a, 0x75, 0x6e, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6a, 0x75, 0x6c, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x61, 0x75, 0x67, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x73, 0x65, 0x70, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6f, 0x63, 0x74, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6e, 0x6f, 0x76, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x64, 0x65, 0x63, 0x90, 0x16}

const unsigned short int pp_UNK_0xee72 = 0xee72; // UNK_0xee72 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xee76 = 0xee76; // UNK_0xee76 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xee7a = 0xee7a; // UNK_0xee7a size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xee6a = 0x0040; // UNK_0xee6a
const unsigned short int cc_UNK_0xee6e = 0x000f; // UNK_0xee6e


// 0xedd2: db 0x7a 0x00 'z '

// ================================================
// 0xedd4: WORD 'UNK_0xedd6' codep=0x1d29 parp=0xedd6
// ================================================
// 0xedd6: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4c 0x4f 0x54 0x20 0x20 0x20 0x20 ' ALLOT LOT    '

// ================================================
// 0xede4: WORD 'STAMP' codep=0x1d29 parp=0xedee
// ================================================
// 0xedee: db 0x01 0x00 0x4c 0x22 0x07 0x3f 0x03 0x6a 0x61 0x6e 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x66 0x65 0x62 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x6d 0x61 0x72 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x61 0x70 0x72 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x6d 0x61 0x79 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x6a 0x75 0x6e 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x6a 0x75 0x6c 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x61 0x75 0x67 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x73 0x65 0x70 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x6f 0x63 0x74 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x6e 0x6f 0x76 0x90 0x16 0x4c 0x22 0x07 0x3f 0x03 0x64 0x65 0x63 0x90 0x16 '  L" ? jan  L" ? feb  L" ? mar  L" ? apr  L" ? may  L" ? jun  L" ? jul  L" ? aug  L" ? sep  L" ? oct  L" ? nov  L" ? dec  '

// ================================================
// 0xee68: WORD 'UNK_0xee6a' codep=0x2214 parp=0xee6a
// ================================================
// 0xee6a: db 0x40 0x00 '@ '

// ================================================
// 0xee6c: WORD 'UNK_0xee6e' codep=0x2214 parp=0xee6e
// ================================================
// 0xee6e: db 0x0f 0x00 '  '

// ================================================
// 0xee70: WORD 'UNK_0xee72' codep=0x1d29 parp=0xee72
// ================================================
// 0xee72: db 0x3a 0x20 ': '

// ================================================
// 0xee74: WORD 'UNK_0xee76' codep=0x1d29 parp=0xee76
// ================================================
// 0xee76: db 0x3a 0x20 ': '

// ================================================
// 0xee78: WORD 'UNK_0xee7a' codep=0x1d29 parp=0xee7a
// ================================================
// 0xee7a: db 0x3a 0x20 ': '

// ================================================
// 0xee7c: WORD 'UNK_0xee7e' codep=0x224c parp=0xee7e
// ================================================

void UNK_0xee7e() // UNK_0xee7e
{
  unsigned short int a;
  unsigned short int b;
  unsigned short int c;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  _at_DS(); // @DS
  Push(c); // R>
  OVER(); // OVER
  Push(b); // R>
  Push(a); // R>
  _st_LCMOVE(); // <LCMOVE
}


// ================================================
// 0xee92: WORD 'UNK_0xee94' codep=0x224c parp=0xee94
// ================================================

void UNK_0xee94() // UNK_0xee94
{
  PAD(); // PAD
  Push(0x0050);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xee9e: WORD 'UNK_0xeea0' codep=0x224c parp=0xeea0
// ================================================

void UNK_0xeea0() // UNK_0xeea0
{
  Push(pp_UNK_0xee76); // UNK_0xee76
  Push(Read16(Pop())); // @
}


// ================================================
// 0xeea6: WORD 'UNK_0xeea8' codep=0x224c parp=0xeea8
// ================================================

void UNK_0xeea8() // UNK_0xeea8
{
  Push(pp_UNK_0xee72); // UNK_0xee72
  Push(Read16(Pop())); // @
}


// ================================================
// 0xeeae: WORD 'UNK_0xeeb0' codep=0x224c parp=0xeeb0
// ================================================

void UNK_0xeeb0() // UNK_0xeeb0
{
  Push(2); // 2
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
}


// ================================================
// 0xeebe: WORD 'UNK_0xeec0' codep=0x224c parp=0xeec0
// ================================================

void UNK_0xeec0() // UNK_0xeec0
{
  Push(0); // 0
  Push(cc__5); // 5
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  UNK_0xeea0(); // UNK_0xeea0
  _dot_(); // .
  UNK_0xeea0(); // UNK_0xeea0
  UNK_0xeea8(); // UNK_0xeea8
  UNK_0xeeb0(); // UNK_0xeeb0
}


// ================================================
// 0xeed2: WORD 'UNK_0xeed4' codep=0x224c parp=0xeed4
// ================================================

void UNK_0xeed4() // UNK_0xeed4
{
  Push(0); // 0
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex__2(); // !_2
  Push(0); // 0
  Push(pp_UNK_0xee72); // UNK_0xee72
  _ex__2(); // !_2
}


// ================================================
// 0xeee2: WORD 'UNK_0xeee4' codep=0x224c parp=0xeee4
// ================================================

void UNK_0xeee4() // UNK_0xeee4
{
  UNK_0xeea8(); // UNK_0xeea8
  Push(Pop()+1); // 1+
  Push(cc_UNK_0xee6e); // UNK_0xee6e
  MIN(); // MIN
  Push(pp_UNK_0xee72); // UNK_0xee72
  _ex__2(); // !_2
}


// ================================================
// 0xeef2: WORD 'UNK_0xeef4' codep=0x224c parp=0xeef4
// ================================================

void UNK_0xeef4() // UNK_0xeef4
{
  UNK_0xeea8(); // UNK_0xeea8
  Push(Pop()-1); // 1-
  Push(0); // 0
  MAX(); // MAX
  Push(pp_UNK_0xee72); // UNK_0xee72
  _ex__2(); // !_2
}


// ================================================
// 0xef02: WORD 'UNK_0xef04' codep=0x224c parp=0xef04
// ================================================

void UNK_0xef04() // UNK_0xef04
{
  UNK_0xeea0(); // UNK_0xeea0
  Push(Pop()+1); // 1+
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(Pop()-1); // 1-
  MIN(); // MIN
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex__2(); // !_2
}


// ================================================
// 0xef14: WORD 'UNK_0xef16' codep=0x224c parp=0xef16
// ================================================

void UNK_0xef16() // UNK_0xef16
{
  UNK_0xeea0(); // UNK_0xeea0
  Push(Pop()-1); // 1-
  Push(0); // 0
  MAX(); // MAX
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex__2(); // !_2
}

// 0xef24: db 0x4c 0x22 0xfd 0x04 0x92 0x0c 0xe3 0x04 0x92 0x0c 0x92 0x0f 0x90 0x16 0x4c 0x22 0x20 0x0f 0x89 0x11 0x24 0xef 0xad 0x11 0xc9 0x04 0x0a 0x6d 0x90 0x16 'L"            L"    $      m  '

// ================================================
// 0xef42: WORD 'UNK_0xef44' codep=0x224c parp=0xef44
// ================================================

void UNK_0xef44() // UNK_0xef44
{
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(Pop() * Pop()); // *
  Push(tt_SCR); // SCR
  Push(Read16(Pop())); // @
  BLOCK_2(); // BLOCK_2
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xef52: WORD 'UNK_0xef54' codep=0x224c parp=0xef54
// ================================================

void UNK_0xef54() // UNK_0xef54
{
  UNK_0xeea8(); // UNK_0xeea8
  UNK_0xef44(); // UNK_0xef44
}


// ================================================
// 0xef5a: WORD 'UNK_0xef5c' codep=0x224c parp=0xef5c
// ================================================

void UNK_0xef5c() // UNK_0xef5c
{
  UNK_0xef54(); // UNK_0xef54
  UNK_0xeea0(); // UNK_0xeea0
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xef64: WORD 'UNK_0xef66' codep=0x224c parp=0xef66
// ================================================

void UNK_0xef66() // UNK_0xef66
{
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  UNK_0xeea0(); // UNK_0xeea0
  _dash_(); // -
}


// ================================================
// 0xef6e: WORD 'UNK_0xef70' codep=0x224c parp=0xef70
// ================================================

void UNK_0xef70() // UNK_0xef70
{
  Push(cc_UNK_0xee6e); // UNK_0xee6e
  UNK_0xeea8(); // UNK_0xeea8
  _dash_(); // -
}


// ================================================
// 0xef78: WORD 'UNK_0xef7a' codep=0x224c parp=0xef7a
// ================================================

void UNK_0xef7a() // UNK_0xef7a
{
  Push(0x0030);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xef82: WORD 'UNK_0xef84' codep=0x224c parp=0xef84
// ================================================

void UNK_0xef84() // UNK_0xef84
{
  Push(pp_UNK_0xedd6); // UNK_0xedd6
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xef8a: WORD 'UNK_0xef8c' codep=0x224c parp=0xef8c
// ================================================

void UNK_0xef8c() // UNK_0xef8c
{
  UNK_0xef5c(); // UNK_0xef5c
  UNK_0xef66(); // UNK_0xef66
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xef94: WORD 'UNK_0xef96' codep=0x224c parp=0xef96
// ================================================

void UNK_0xef96() // UNK_0xef96
{
  signed short int i, imax;
  UNK_0xeea8(); // UNK_0xeea8
  UNK_0xef70(); // UNK_0xef70
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(0); // 0
  OVER(); // OVER
  UNK_0xeeb0(); // UNK_0xeeb0
  UNK_0xef44(); // UNK_0xef44
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(Pop()+1); // 1+
  i++;
  } while(i<imax); // (LOOP) 0xffee

  Pop(); // DROP
}


// ================================================
// 0xefbe: WORD 'UNK_0xefc0' codep=0x224c parp=0xefc0
// ================================================

void UNK_0xefc0() // UNK_0xefc0
{
  Push(tt_SCR); // SCR
  _plus__ex__2(); // +!_2
  UNK_0xeea0(); // UNK_0xeea0
  UNK_0xeea8(); // UNK_0xeea8
  UNK_0xeed4(); // UNK_0xeed4
  UNK_0xef96(); // UNK_0xef96
  Push(pp_UNK_0xee72); // UNK_0xee72
  _ex__2(); // !_2
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex__2(); // !_2
  Push(1); // 1
  Push(cc__5); // 5
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(tt_SCR); // SCR
  Push(Read16(Pop())); // @
  _dot_(); // .
}


// ================================================
// 0xefe2: WORD 'UNK_0xefe4' codep=0x224c parp=0xefe4
// ================================================

void UNK_0xefe4() // UNK_0xefe4
{
  Push(Read16(regsp)); // DUP
  UNK_0xef44(); // UNK_0xef44
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(cc_BL); // BL
  FILL_2(); // FILL_2
  Push(0); // 0
  SWAP(); // SWAP
  UNK_0xeeb0(); // UNK_0xeeb0
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  SPACES(); // SPACES
}


// ================================================
// 0xeffa: WORD 'UNK_0xeffc' codep=0x224c parp=0xeffc
// ================================================

void UNK_0xeffc() // UNK_0xeffc
{
  UNK_0xef5c(); // UNK_0xef5c
  UNK_0xef66(); // UNK_0xef66
  Push(cc_BL); // BL
  FILL_2(); // FILL_2
  UNK_0xef66(); // UNK_0xef66
  SPACES(); // SPACES
}


// ================================================
// 0xf00a: WORD 'UNK_0xf00c' codep=0x224c parp=0xf00c
// ================================================

void UNK_0xf00c() // UNK_0xf00c
{
  signed short int i, imax;
  UNK_0xeffc(); // UNK_0xeffc
  UNK_0xeea8(); // UNK_0xeea8
  UNK_0xef70(); // UNK_0xef70
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  UNK_0xefe4(); // UNK_0xefe4
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  Pop(); // DROP
}


// ================================================
// 0xf024: WORD '.MODE' codep=0x224c parp=0xf02e
// ================================================

void _dot_MODE() // .MODE
{
  Push(0x0018);
  Push(0x0048);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(pp_UNK_0xee7a); // UNK_0xee7a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  PRINT("Insert ", 7); // (.")
  return;

  label1:
  PRINT("Replace", 7); // (.")
}


// ================================================
// 0xf05a: WORD 'DISPLAYKEY' codep=0x224c parp=0xf069
// ================================================

void DISPLAYKEY() // DISPLAYKEY
{
  Push(0x0018);
  Push(0); // 0
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("1:SV-BUF 2:RCL  3:IL  4:XL  5:DUP  6:SPLIT  7:>L  ", 50); // (.")
  PRINT("8:>S  9:HOLD 10:PUT", 19); // (.")
  _dot_MODE(); // .MODE
}


// ================================================
// 0xf0c0: WORD 'CLEAR' codep=0x224c parp=0xf0ca
// ================================================

void CLEAR() // CLEAR
{
  Push(0x0018);
  Push(0); // 0
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(0x004f);
  SPACES(); // SPACES
  Push(0x0012);
  Push(0); // 0
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
}


// ================================================
// 0xf0e2: WORD 'ML' codep=0x224c parp=0xf0e9
// ================================================

void ML() // ML
{
  SWAP(); // SWAP
  UNK_0xef44(); // UNK_0xef44
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xf0f9: WORD 'MLDN' codep=0x224c parp=0xf102
// ================================================

void MLDN() // MLDN
{
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  ML(); // ML
}


// ================================================
// 0xf108: WORD 'MLUP' codep=0x224c parp=0xf111
// ================================================

void MLUP() // MLUP
{
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(-Pop()); // NEGATE
  ML(); // ML
}


// ================================================
// 0xf119: WORD 'LHOLD' codep=0x224c parp=0xf123
// ================================================

void LHOLD() // LHOLD
{
  UNK_0xef54(); // UNK_0xef54
  UNK_0xee94(); // UNK_0xee94
  Push(cc_C_slash_L); // C/L
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xf12d: WORD '(DUPL)' codep=0x224c parp=0xf138
// ================================================

void _ro_DUPL_rc_() // (DUPL)
{
  signed short int i, imax;
  UNK_0xef70(); // UNK_0xef70
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0x000e);
  Push(i); // I
  _dash_(); // -
  MLDN(); // MLDN
  i++;
  } while(i<imax); // (LOOP) 0xfff4

}


// ================================================
// 0xf154: WORD 'INSL' codep=0x224c parp=0xf15d
// ================================================

void INSL() // INSL
{
  _ro_DUPL_rc_(); // (DUPL)
  UNK_0xeea8(); // UNK_0xeea8
  UNK_0xefe4(); // UNK_0xefe4
  UNK_0xef96(); // UNK_0xef96
}


// ================================================
// 0xf167: WORD 'DUPL' codep=0x224c parp=0xf170
// ================================================

void DUPL() // DUPL
{
  _ro_DUPL_rc_(); // (DUPL)
  UNK_0xef96(); // UNK_0xef96
}


// ================================================
// 0xf176: WORD 'SPLIT' codep=0x224c parp=0xf180
// ================================================

void SPLIT() // SPLIT
{
  UNK_0xef70(); // UNK_0xef70
  if (Pop() == 0) return;
  _ro_DUPL_rc_(); // (DUPL)
  UNK_0xeffc(); // UNK_0xeffc
  UNK_0xef54(); // UNK_0xef54
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(Pop() + Pop()); // +
  UNK_0xeea0(); // UNK_0xeea0
  Push(cc_BL); // BL
  FILL_2(); // FILL_2
  UNK_0xeea8(); // UNK_0xeea8
  UNK_0xeee4(); // UNK_0xeee4
  UNK_0xef96(); // UNK_0xef96
  Push(pp_UNK_0xee72); // UNK_0xee72
  _ex__2(); // !_2
}


// ================================================
// 0xf1a2: WORD 'XL' codep=0x224c parp=0xf1a9
// ================================================

void XL() // XL
{
  signed short int i, imax;
  LHOLD(); // LHOLD
  UNK_0xef70(); // UNK_0xef70
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  UNK_0xeea8(); // UNK_0xeea8
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  MLUP(); // MLUP
  i++;
  } while(i<imax); // (LOOP) 0xfff4


  label1:
  Push(cc_UNK_0xee6e); // UNK_0xee6e
  UNK_0xef44(); // UNK_0xef44
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(cc_BL); // BL
  FILL_2(); // FILL_2
  UNK_0xef96(); // UNK_0xef96
}


// ================================================
// 0xf1d3: WORD 'XC' codep=0x224c parp=0xf1da
// ================================================

void XC() // XC
{
  UNK_0xef5c(); // UNK_0xef5c
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  UNK_0xef66(); // UNK_0xef66
  Push(Pop()-1); // 1-
  CMOVE_2(); // CMOVE_2
  Push(cc_BL); // BL
  SWAP(); // SWAP
  UNK_0xef66(); // UNK_0xef66
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
  UNK_0xef8c(); // UNK_0xef8c
}


// ================================================
// 0xf1fa: WORD 'INSERT' codep=0x224c parp=0xf205
// ================================================

void INSERT() // INSERT
{
  Push(Read16(regsp)); // DUP
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(pp_UNK_0xee7a); // UNK_0xee7a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xef66(); // UNK_0xef66
  Push(Pop()-1); // 1-
  if (Pop() == 0) goto label2;
  UNK_0xef5c(); // UNK_0xef5c
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  UNK_0xef66(); // UNK_0xef66
  Push(Pop()-1); // 1-
  UNK_0xee7e(); // UNK_0xee7e
  C_ex__2(); // C!_2
  UNK_0xef04(); // UNK_0xef04
  UNK_0xef8c(); // UNK_0xef8c
  goto label3;

  label2:
  UNK_0xef5c(); // UNK_0xef5c
  C_ex__2(); // C!_2

  label3:
  return;

  label1:
  UNK_0xef5c(); // UNK_0xef5c
  C_ex__2(); // C!_2
  UNK_0xef04(); // UNK_0xef04
}


// ================================================
// 0xf241: WORD 'DELETE' codep=0x224c parp=0xf24c
// ================================================

void DELETE() // DELETE
{
  UNK_0xef16(); // UNK_0xef16
  UNK_0xeec0(); // UNK_0xeec0
  Push(pp_UNK_0xee7a); // UNK_0xee7a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  XC(); // XC
  return;

  label1:
  Push(cc_BL); // BL
  UNK_0xef5c(); // UNK_0xef5c
  C_ex__2(); // C!_2
  SPACE(); // SPACE
}


// ================================================
// 0xf268: WORD '#>MON' codep=0x4b82 parp=0xf272
// ================================================
// 0xf272: db 0x46 0x3a 0xf0 0xed 0xfa 0xed 0x04 0xee 0x0e 0xee 0x18 0xee 0x22 0xee 0x2c 0xee 0x36 0xee 0x40 0xee 0x4a 0xee 0x54 0xee 0x5e 0xee 0x90 0x16 'F:          " , 6 @ J T ^   '

// ================================================
// 0xf28e: WORD '?VISIBLE' codep=0x224c parp=0xf29b
// ================================================

void _ask_VISIBLE() // ?VISIBLE
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
// 0xf2b1: WORD 'EOL' codep=0x224c parp=0xf2b9
// ================================================

void EOL() // EOL
{
  UNK_0xef54(); // UNK_0xef54
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  _dash_TRAILING(); // -TRAILING
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  Push(0x003f);
  MIN(); // MIN
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex__2(); // !_2
  Pop(); // DROP
}


// ================================================
// 0xf2d5: WORD 'PUT' codep=0x224c parp=0xf2dd
// ================================================

void PUT() // PUT
{
  signed short int i, imax;
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  UNK_0xee94(); // UNK_0xee94
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _ask_VISIBLE(); // ?VISIBLE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(i); // R>
  Push(imax); // R>
  Pop(); Pop();// 2DROP
  Exec("BELL"); // call of word 0x266b 'BEEP'
  return;


  label1:
  Pop(); // DROP
  i++;
  } while(i<imax); // (LOOP) 0xffe2

  Push(pp_UNK_0xee7a); // UNK_0xee7a
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label2;
  _ro_DUPL_rc_(); // (DUPL)

  label2:
  UNK_0xee94(); // UNK_0xee94
  UNK_0xef54(); // UNK_0xef54
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  CMOVE_2(); // CMOVE_2
  UPDATE(); // UPDATE
  if (Pop() == 0) goto label3;
  UNK_0xef96(); // UNK_0xef96
  return;

  label3:
  UNK_0xeea0(); // UNK_0xeea0
  Push(0); // 0
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex__2(); // !_2
  UNK_0xeec0(); // UNK_0xeec0
  UNK_0xef8c(); // UNK_0xef8c
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex__2(); // !_2
}


// ================================================
// 0xf335: WORD 'SET-USER' codep=0x224c parp=0xf342
// ================================================

void SET_dash_USER() // SET-USER
{
  Push(pp_UNK_0xedd6); // UNK_0xedd6
  Push(0x000e);
  Push(cc_BL); // BL
  FILL_2(); // FILL_2
  Push(0x0029);
  Push(0x000c);
  UNK_0xef84(); // UNK_0xef84
  C_ex__2(); // C!_2

  UNK_0x3f09("rfg");
  Push(1); // 1
  UNK_0xef84(); // UNK_0xef84
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  Push(0x002a);
  DOSCALL(); // DOSCALL
  Push(cc_DX); // DX
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label1;
  UNK_0xef7a(); // UNK_0xef7a
  Push(0); // 0
  UNK_0xef7a(); // UNK_0xef7a
  goto label2;

  label1:
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  UNK_0xef7a(); // UNK_0xef7a
  SWAP(); // SWAP
  UNK_0xef7a(); // UNK_0xef7a

  label2:
  Push(cc__4); // 4
  UNK_0xef84(); // UNK_0xef84
  C_ex__2(); // C!_2
  Push(cc__5); // 5
  UNK_0xef84(); // UNK_0xef84
  C_ex__2(); // C!_2
  Push(cc_DX); // DX
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Func5("#>MON");
  Push(cc__6); // 6
  UNK_0xef84(); // UNK_0xef84
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  Push(cc_CX); // CX
  Push(Read16(Pop())); // @
  Push(0x076c);
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _slash_MOD(); // /MOD
  UNK_0xef7a(); // UNK_0xef7a
  SWAP(); // SWAP
  UNK_0xef7a(); // UNK_0xef7a
  Push(0x000a);
  UNK_0xef84(); // UNK_0xef84
  C_ex__2(); // C!_2
  Push(cc__9); // 9
  UNK_0xef84(); // UNK_0xef84
  C_ex__2(); // C!_2
}


// ================================================
// 0xf3da: WORD 'UNK_0xf3dc' codep=0x224c parp=0xf3dc
// ================================================

void UNK_0xf3dc() // UNK_0xf3dc
{
  Push(0); // 0
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex__2(); // !_2
  UNK_0xeee4(); // UNK_0xeee4
}


// ================================================
// 0xf3e6: WORD 'UNK_0xf3e8' codep=0x224c parp=0xf3e8
// ================================================

void UNK_0xf3e8() // UNK_0xf3e8
{
  UNK_0xef04(); // UNK_0xef04
  UNK_0xef04(); // UNK_0xef04
  UNK_0xef04(); // UNK_0xef04
}


// ================================================
// 0xf3f0: WORD 'UNK_0xf3f2' codep=0x224c parp=0xf3f2
// ================================================

void UNK_0xf3f2() // UNK_0xf3f2
{
  CLEAR(); // CLEAR
  OV_dash_CANC(); // OV-CANC
  QUIT(); // QUIT
}


// ================================================
// 0xf3fa: WORD 'UNK_0xf3fc' codep=0x224c parp=0xf3fc
// ================================================

void UNK_0xf3fc() // UNK_0xf3fc
{
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  Push(0); // 0
  UNK_0xefc0(); // UNK_0xefc0
}


// ================================================
// 0xf404: WORD 'UNK_0xf406' codep=0x224c parp=0xf406
// ================================================

void UNK_0xf406() // UNK_0xf406
{
  Push(1); // 1
  UNK_0xefc0(); // UNK_0xefc0
}


// ================================================
// 0xf40c: WORD 'UNK_0xf40e' codep=0x224c parp=0xf40e
// ================================================

void UNK_0xf40e() // UNK_0xf40e
{
  Push(cc__dash_1); // -1
  UNK_0xefc0(); // UNK_0xefc0
}


// ================================================
// 0xf414: WORD 'UNK_0xf416' codep=0x224c parp=0xf416
// ================================================

void UNK_0xf416() // UNK_0xf416
{
  Push(pp_UNK_0xee7a); // UNK_0xee7a
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xee7a); // UNK_0xee7a
  _ex__2(); // !_2
  _dot_MODE(); // .MODE
}


// ================================================
// 0xf424: WORD '>STAMP' codep=0x224c parp=0xf42f
// ================================================

void _gt_STAMP() // >STAMP
{
  unsigned short int a;
  Push(pp_STAMP); // STAMP
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SET_dash_USER(); // SET-USER
  Push(pp_UNK_0xedd6); // UNK_0xedd6
  Push(tt_SCR); // SCR
  Push(Read16(Pop())); // @
  BLOCK_2(); // BLOCK_2
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(0x0032);
  Push(Pop() + Pop()); // +
  Push(0x000e);
  CMOVE_2(); // CMOVE_2
  Push(pp_FILENAMES); // FILENAMES
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(Read16(a)); // R@
  Push(0x0026);
  Push(Pop() + Pop()); // +
  Push(0x000b);
  CMOVE_2(); // CMOVE_2
  Push(0x205c);
  Push(a); // R>
  Push(0x0024);
  Push(Pop() + Pop()); // +
  _ex__2(); // !_2

  label1:
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
    UNK_0xeed4(); // UNK_0xeed4
    break;
  case 317:
    INSL(); // INSL
    break;
  case 8:
    DELETE(); // DELETE
    break;
  case 336:
    UNK_0xeee4(); // UNK_0xeee4
    break;
  case 319:
    DUPL(); // DUPL
    break;
  case 9:
    UNK_0xf3e8(); // UNK_0xf3e8
    break;
  case 328:
    UNK_0xeef4(); // UNK_0xeef4
    break;
  case 320:
    SPLIT(); // SPLIT
    break;
  case 27:
    UNK_0xf3f2(); // UNK_0xf3f2
    break;
  case 333:
    UNK_0xef04(); // UNK_0xef04
    break;
  case 318:
    XL(); // XL
    break;
  case 316:
    UNK_0xf3fc(); // UNK_0xf3fc
    break;
  case 331:
    UNK_0xef16(); // UNK_0xef16
    break;
  case 339:
    XC(); // XC
    break;
  case 329:
    UNK_0xf406(); // UNK_0xf406
    break;
  case 321:
    UNK_0xeffc(); // UNK_0xeffc
    break;
  case 335:
    EOL(); // EOL
    break;
  case 337:
    UNK_0xf40e(); // UNK_0xf40e
    break;
  case 322:
    UNK_0xf00c(); // UNK_0xf00c
    break;
  case 324:
    PUT(); // PUT
    break;
  case 338:
    UNK_0xf416(); // UNK_0xf416
    break;
  case 323:
    LHOLD(); // LHOLD
    break;
  case 13:
    UNK_0xf3dc(); // UNK_0xf3dc
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
  UNK_0xeed4(); // UNK_0xeed4
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  LIST(); // LIST
  DISPLAYKEY(); // DISPLAYKEY

  label3:
  UNK_0xeec0(); // UNK_0xeec0
  KEY_2(); // KEY_2
  _ask_VISIBLE(); // ?VISIBLE
  if (Pop() == 0) goto label1;
  INSERT(); // INSERT
  goto label2;

  label1:
  EDIT_dash_KEYS(); // EDIT-KEYS case

  label2:
  goto label3;
}


// ================================================
// 0xf514: WORD 'VIEW-KEYS' codep=0x4b3b parp=0xf522
// ================================================

void VIEW_dash_KEYS() // VIEW-KEYS
{
  switch(Pop()) // VIEW-KEYS
  {
  case 27:
    UNK_0xf3f2(); // UNK_0xf3f2
    break;
  case 329:
    UNK_0xf406(); // UNK_0xf406
    break;
  case 337:
    UNK_0xf40e(); // UNK_0xf40e
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
  UNK_0xeed4(); // UNK_0xeed4
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  LIST(); // LIST
  DISPLAYKEY(); // DISPLAYKEY

  label2:
  UNK_0xeec0(); // UNK_0xeec0
  KEY_2(); // KEY_2
  _ask_VISIBLE(); // ?VISIBLE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  VIEW_dash_KEYS(); // VIEW-KEYS case

  label1:
  goto label2;
}

// 0xf557: db 0x2b 0x45 0x44 0x49 0x54 0x5f 0x5f 0x5f 0x5f 0x00 '+EDIT____ '
  