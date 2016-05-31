// ====== OVERLAY 'EDIT-OV' ======

#include"interface.h"

// store offset = 0xedc0
// overlay size   = 0x07a0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:             .ST  codep:0x224c parp:0xcf2b size:0x0006 C-string:'_dot_ST'
// 1870:             .WH  codep:0x224c parp:0xcf39 size:0x1e9b C-string:'_dot_WH'
// 1871:      UNK_0xedd6  codep:0x1d29 parp:0xedd6 size:0x000e C-string:'UNK_0xedd6'
// 1872:           STAMP  codep:0x1d29 parp:0xedee size:0x007a C-string:'STAMP'
// 1873:      UNK_0xee6a  codep:0x2214 parp:0xee6a size:0x0002 C-string:'UNK_0xee6a'
// 1874:      UNK_0xee6e  codep:0x2214 parp:0xee6e size:0x0002 C-string:'UNK_0xee6e'
// 1875:      UNK_0xee72  codep:0x1d29 parp:0xee72 size:0x0002 C-string:'UNK_0xee72'
// 1876:      UNK_0xee76  codep:0x1d29 parp:0xee76 size:0x0002 C-string:'UNK_0xee76'
// 1877:      UNK_0xee7a  codep:0x1d29 parp:0xee7a size:0x0002 C-string:'UNK_0xee7a'
// 1878:      UNK_0xee7e  codep:0x224c parp:0xee7e size:0x0014 C-string:'UNK_0xee7e'
// 1879:      UNK_0xee94  codep:0x224c parp:0xee94 size:0x000a C-string:'UNK_0xee94'
// 1880:      UNK_0xeea0  codep:0x224c parp:0xeea0 size:0x0006 C-string:'UNK_0xeea0'
// 1881:      UNK_0xeea8  codep:0x224c parp:0xeea8 size:0x0006 C-string:'UNK_0xeea8'
// 1882:      UNK_0xeeb0  codep:0x224c parp:0xeeb0 size:0x000e C-string:'UNK_0xeeb0'
// 1883:      UNK_0xeec0  codep:0x224c parp:0xeec0 size:0x0012 C-string:'UNK_0xeec0'
// 1884:      UNK_0xeed4  codep:0x224c parp:0xeed4 size:0x000e C-string:'UNK_0xeed4'
// 1885:      UNK_0xeee4  codep:0x224c parp:0xeee4 size:0x001e C-string:'UNK_0xeee4'
// 1886:      UNK_0xef04  codep:0x224c parp:0xef04 size:0x0010 C-string:'UNK_0xef04'
// 1887:      UNK_0xef16  codep:0x224c parp:0xef16 size:0x002c C-string:'UNK_0xef16'
// 1888:      UNK_0xef44  codep:0x224c parp:0xef44 size:0x000e C-string:'UNK_0xef44'
// 1889:      UNK_0xef54  codep:0x224c parp:0xef54 size:0x0006 C-string:'UNK_0xef54'
// 1890:      UNK_0xef5c  codep:0x224c parp:0xef5c size:0x0008 C-string:'UNK_0xef5c'
// 1891:      UNK_0xef66  codep:0x224c parp:0xef66 size:0x0008 C-string:'UNK_0xef66'
// 1892:      UNK_0xef70  codep:0x224c parp:0xef70 size:0x0008 C-string:'UNK_0xef70'
// 1893:      UNK_0xef7a  codep:0x224c parp:0xef7a size:0x0008 C-string:'UNK_0xef7a'
// 1894:      UNK_0xef84  codep:0x224c parp:0xef84 size:0x0006 C-string:'UNK_0xef84'
// 1895:      UNK_0xef8c  codep:0x224c parp:0xef8c size:0x0008 C-string:'UNK_0xef8c'
// 1896:      UNK_0xef96  codep:0x224c parp:0xef96 size:0x004c C-string:'UNK_0xef96'
// 1897:      UNK_0xefe4  codep:0x224c parp:0xefe4 size:0x0016 C-string:'UNK_0xefe4'
// 1898:      UNK_0xeffc  codep:0x224c parp:0xeffc size:0x0028 C-string:'UNK_0xeffc'
// 1899:           .MODE  codep:0x224c parp:0xf02e size:0x002c C-string:'_dot_MODE'
// 1900:      DISPLAYKEY  codep:0x224c parp:0xf069 size:0x0057 C-string:'DISPLAYKEY'
// 1901:           CLEAR  codep:0x224c parp:0xf0ca size:0x0018 C-string:'CLEAR'
// 1902:              ML  codep:0x224c parp:0xf0e9 size:0x0010 C-string:'ML'
// 1903:            MLDN  codep:0x224c parp:0xf102 size:0x0006 C-string:'MLDN'
// 1904:            MLUP  codep:0x224c parp:0xf111 size:0x0008 C-string:'MLUP'
// 1905:           LHOLD  codep:0x224c parp:0xf123 size:0x000a C-string:'LHOLD'
// 1906:          (DUPL)  codep:0x224c parp:0xf138 size:0x001c C-string:'_ro_DUPL_rc_'
// 1907:            INSL  codep:0x224c parp:0xf15d size:0x000a C-string:'INSL'
// 1908:            DUPL  codep:0x224c parp:0xf170 size:0x0006 C-string:'DUPL'
// 1909:           SPLIT  codep:0x224c parp:0xf180 size:0x0022 C-string:'SPLIT'
// 1910:              XL  codep:0x224c parp:0xf1a9 size:0x002a C-string:'XL'
// 1911:              XC  codep:0x224c parp:0xf1da size:0x0020 C-string:'XC'
// 1912:          INSERT  codep:0x224c parp:0xf205 size:0x003c C-string:'INSERT'
// 1913:          DELETE  codep:0x224c parp:0xf24c size:0x001c C-string:'DELETE'
// 1914:           #>MON  codep:0x4b82 parp:0xf272 size:0x001c C-string:'_n__gt_MON'
// 1915:        ?VISIBLE  codep:0x224c parp:0xf29b size:0x0016 C-string:'_ask_VISIBLE'
// 1916:             EOL  codep:0x224c parp:0xf2b9 size:0x001c C-string:'EOL'
// 1917:             PUT  codep:0x224c parp:0xf2dd size:0x0058 C-string:'PUT'
// 1918:        SET-USER  codep:0x224c parp:0xf342 size:0x00e2 C-string:'SET_minus_USER'
// 1919:          >STAMP  codep:0x224c parp:0xf42f size:0x004a C-string:'_gt_STAMP'
// 1920:       EDIT-KEYS  codep:0x4b3b parp:0xf487 size:0x0064 C-string:'EDIT_minus_KEYS'
// 1921:            EDIT  codep:0x224c parp:0xf4f4 size:0x0020 C-string:'EDIT'
// 1922:       VIEW-KEYS  codep:0x4b3b parp:0xf522 size:0x0010 C-string:'VIEW_minus_KEYS'
// 1923:            VIEW  codep:0x224c parp:0xf53b size:0x0025 C-string:'VIEW'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xedd6[14] = {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4c, 0x4f, 0x54, 0x20, 0x20, 0x20, 0x20}; // UNK_0xedd6
unsigned char STAMP[122] = {0x01, 0x00, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6a, 0x61, 0x6e, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x66, 0x65, 0x62, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6d, 0x61, 0x72, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x61, 0x70, 0x72, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6d, 0x61, 0x79, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6a, 0x75, 0x6e, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6a, 0x75, 0x6c, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x61, 0x75, 0x67, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x73, 0x65, 0x70, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6f, 0x63, 0x74, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x6e, 0x6f, 0x76, 0x90, 0x16, 0x4c, 0x22, 0x07, 0x3f, 0x03, 0x64, 0x65, 0x63, 0x90, 0x16}; // STAMP
unsigned char UNK_0xee72[2] = {0x3a, 0x20}; // UNK_0xee72
unsigned char UNK_0xee76[2] = {0x3a, 0x20}; // UNK_0xee76
unsigned char UNK_0xee7a[2] = {0x3a, 0x20}; // UNK_0xee7a

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
  _gt_R(); // >R
  _gt_R(); // >R
  _gt_R(); // >R
  _at_DS(); // @DS
  R_gt_(); // R>
  OVER(); // OVER
  R_gt_(); // R>
  R_gt_(); // R>
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
  POSITION(); // POSITION
}


// ================================================
// 0xeebe: WORD 'UNK_0xeec0' codep=0x224c parp=0xeec0
// ================================================

void UNK_0xeec0() // UNK_0xeec0
{
  Push(0); // 0
  Push(cc__5); // 5
  POSITION(); // POSITION
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
  _ex_(); // !
  Push(0); // 0
  Push(pp_UNK_0xee72); // UNK_0xee72
  _ex_(); // !
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
  _ex_(); // !
}

// 0xeef2: db 0x4c 0x22 0xa6 0xee 0xf6 0x0f 0x20 0x0f 0x89 0x11 0x70 0xee 0x16 0x6d 0x90 0x16 'L"        p  m  '

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
  _ex_(); // !
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
  _ex_(); // !
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
  BLOCK(); // BLOCK
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
  _minus_(); // -
}


// ================================================
// 0xef6e: WORD 'UNK_0xef70' codep=0x224c parp=0xef70
// ================================================

void UNK_0xef70() // UNK_0xef70
{
  Push(cc_UNK_0xee6e); // UNK_0xee6e
  UNK_0xeea8(); // UNK_0xeea8
  _minus_(); // -
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
  TYPE(); // TYPE
}


// ================================================
// 0xef94: WORD 'UNK_0xef96' codep=0x224c parp=0xef96
// ================================================

void UNK_0xef96() // UNK_0xef96
{
  UNK_0xeea8(); // UNK_0xeea8
  UNK_0xef70(); // UNK_0xef70
  DUP(); // DUP
  if (Pop() == 0) goto label743;

  Push(Pop()+1); // 1+

  label743:
  Push(0); // 0

  do // (DO)
  {
  DUP(); // DUP
  Push(0); // 0
  OVER(); // OVER
  UNK_0xeeb0(); // UNK_0xeeb0
  UNK_0xef44(); // UNK_0xef44
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  TYPE(); // TYPE
  Push(Pop()+1); // 1+

  } while(...); // (LOOP) 0xffee
  Pop(); // DROP
}

// 0xefbe: db 0x4c 0x22 0x85 0x05 0x23 0x6d 0x9e 0xee 0xa6 0xee 0xd2 0xee 0x94 0xef 0x70 0xee 0x16 0x6d 0x74 0xee 0x16 0x6d 0x2e 0x0f 0x8f 0x3b 0xd1 0x06 0x85 0x05 0xae 0x0b 0xb8 0x27 0x90 0x16 'L"  #m        p  mt  m.  ;       '  '

// ================================================
// 0xefe2: WORD 'UNK_0xefe4' codep=0x224c parp=0xefe4
// ================================================

void UNK_0xefe4() // UNK_0xefe4
{
  DUP(); // DUP
  UNK_0xef44(); // UNK_0xef44
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(cc_BL); // BL
  FILL(); // FILL
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
  FILL(); // FILL
  UNK_0xef66(); // UNK_0xef66
  SPACES(); // SPACES
}

// 0xf00a: db 0x4c 0x22 0xfa 0xef 0xa6 0xee 0x6e 0xef 0x20 0x0f 0xb8 0x15 0xe7 0x0f 0x41 0x0e 0xe2 0xef 0xd0 0x15 0xf8 0xff 0x32 0x0e 0x90 0x16 'L"    n       A       2   '

// ================================================
// 0xf024: WORD '.MODE' codep=0x224c parp=0xf02e
// ================================================

void _dot_MODE() // .MODE
{
  Push(0x0018);
  Push(0x0048);
  POSITION(); // POSITION
  Push(pp_UNK_0xee7a); // UNK_0xee7a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label731;

  PRINT("Insert ", 7); // (.")
  goto label732;

  label731:
  PRINT("Replace", 7); // (.")

  label732:
}


// ================================================
// 0xf05a: WORD 'DISPLAYKEY' codep=0x224c parp=0xf069
// ================================================

void DISPLAYKEY() // DISPLAYKEY
{
  Push(0x0018);
  Push(0); // 0
  POSITION(); // POSITION
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
  POSITION(); // POSITION
  Push(0x004f);
  SPACES(); // SPACES
  Push(0x0012);
  Push(0); // 0
  POSITION(); // POSITION
}


// ================================================
// 0xf0e2: WORD 'ML' codep=0x224c parp=0xf0e9
// ================================================

void ML() // ML
{
  SWAP(); // SWAP
  UNK_0xef44(); // UNK_0xef44
  DUP(); // DUP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  CMOVE(); // CMOVE
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

void MLUP()
{ // MLUP
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(-Pop()); // NEGATE
  ML(); // ML
}


// ================================================
// 0xf119: WORD 'LHOLD' codep=0x224c parp=0xf123
// ================================================

void LHOLD()
{ // LHOLD
  UNK_0xef54(); // UNK_0xef54
  UNK_0xee94(); // UNK_0xee94
  Push(cc_C_slash_L); // C/L
  CMOVE(); // CMOVE
}


// ================================================
// 0xf12d: WORD '(DUPL)' codep=0x224c parp=0xf138
// ================================================

void _ro_DUPL_rc_() // (DUPL)
{
  UNK_0xef70(); // UNK_0xef70
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label742;

  Push(0); // 0

  do // (DO)
  {
  Push(0x000e);
  I(); // I
  _minus_(); // -
  MLDN(); // MLDN

  } while(...); // (LOOP) 0xfff4

  label742:
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
  if (Pop() == 0) goto label741;

  _ro_DUPL_rc_(); // (DUPL)
  UNK_0xeffc(); // UNK_0xeffc
  UNK_0xef54(); // UNK_0xef54
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(Pop() + Pop()); // +
  UNK_0xeea0(); // UNK_0xeea0
  Push(cc_BL); // BL
  FILL(); // FILL
  UNK_0xeea8(); // UNK_0xeea8
  UNK_0xeee4(); // UNK_0xeee4
  UNK_0xef96(); // UNK_0xef96
  Push(pp_UNK_0xee72); // UNK_0xee72
  _ex_(); // !

  label741:
}


// ================================================
// 0xf1a2: WORD 'XL' codep=0x224c parp=0xf1a9
// ================================================

void XL() // XL
{
  LHOLD(); // LHOLD
  UNK_0xef70(); // UNK_0xef70
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label754;

  Push(0); // 0

  do // (DO)
  {
  UNK_0xeea8(); // UNK_0xeea8
  I(); // I
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  MLUP(); // MLUP

  } while(...); // (LOOP) 0xfff4

  label754:
  Push(cc_UNK_0xee6e); // UNK_0xee6e
  UNK_0xef44(); // UNK_0xef44
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(cc_BL); // BL
  FILL(); // FILL
  UNK_0xef96(); // UNK_0xef96
}


// ================================================
// 0xf1d3: WORD 'XC' codep=0x224c parp=0xf1da
// ================================================

void XC() // XC
{
  UNK_0xef5c(); // UNK_0xef5c
  DUP(); // DUP
  DUP(); // DUP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  UNK_0xef66(); // UNK_0xef66
  Push(Pop()-1); // 1-
  CMOVE(); // CMOVE
  Push(cc_BL); // BL
  SWAP(); // SWAP
  UNK_0xef66(); // UNK_0xef66
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  UNK_0xef8c(); // UNK_0xef8c
}


// ================================================
// 0xf1fa: WORD 'INSERT' codep=0x224c parp=0xf205
// ================================================

void INSERT() // INSERT
{
  DUP(); // DUP
  EMIT(); // EMIT
  Push(pp_UNK_0xee7a); // UNK_0xee7a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label735;

  UNK_0xef66(); // UNK_0xef66
  Push(Pop()-1); // 1-
  if (Pop() == 0) goto label736;

  UNK_0xef5c(); // UNK_0xef5c
  DUP(); // DUP
  DUP(); // DUP
  Push(Pop()+1); // 1+
  UNK_0xef66(); // UNK_0xef66
  Push(Pop()-1); // 1-
  UNK_0xee7e(); // UNK_0xee7e
  C_ex_(); // C!
  UNK_0xef04(); // UNK_0xef04
  UNK_0xef8c(); // UNK_0xef8c
  goto label738;

  label736:
  UNK_0xef5c(); // UNK_0xef5c
  C_ex_(); // C!

  label738:
  goto label737;

  label735:
  UNK_0xef5c(); // UNK_0xef5c
  C_ex_(); // C!
  UNK_0xef04(); // UNK_0xef04

  label737:
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
  if (Pop() == 0) goto label752;

  XC(); // XC
  goto label753;

  label752:
  Push(cc_BL); // BL
  UNK_0xef5c(); // UNK_0xef5c
  C_ex_(); // C!
  SPACE(); // SPACE

  label753:
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
  DUP(); // DUP
  DUP(); // DUP
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
  _minus_TRAILING(); // -TRAILING
  DUP(); // DUP
  if (Pop() == 0) goto label740;

  Push(Pop()+1); // 1+

  label740:
  Push(0x003f);
  MIN(); // MIN
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex_(); // !
  Pop(); // DROP
}


// ================================================
// 0xf2d5: WORD 'PUT' codep=0x224c parp=0xf2dd
// ================================================

void PUT() // PUT
{
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  Push(0); // 0

  do // (DO)
  {
  UNK_0xee94(); // UNK_0xee94
  I(); // I
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  _ask_VISIBLE(); // ?VISIBLE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label748;

  R_gt_(); // R>
  R_gt_(); // R>
  Pop(); Pop();// 2DROP
  BELL(); // BELL
}


  label748:
  Pop(); // DROP

  } while(...); // (LOOP) 0xffe2
  Push(pp_UNK_0xee7a); // UNK_0xee7a
  Push(Read16(Pop())); // @
  DUP(); // DUP
  if (Pop() == 0) goto label749;

  _ro_DUPL_rc_(); // (DUPL)

  label749:
  UNK_0xee94(); // UNK_0xee94
  UNK_0xef54(); // UNK_0xef54
  Push(cc_UNK_0xee6a); // UNK_0xee6a
  CMOVE(); // CMOVE
  UPDATE(); // UPDATE
  if (Pop() == 0) goto label750;

  UNK_0xef96(); // UNK_0xef96
  goto label751;

  label750:
  UNK_0xeea0(); // UNK_0xeea0
  Push(0); // 0
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex_(); // !
  UNK_0xeec0(); // UNK_0xeec0
  UNK_0xef8c(); // UNK_0xef8c
  Push(pp_UNK_0xee76); // UNK_0xee76
  _ex_(); // !

  label751:
}


// ================================================
// 0xf335: WORD 'SET-USER' codep=0x224c parp=0xf342
// ================================================

void SET_minus_USER()
{ // SET-USER
  Push(pp_UNK_0xedd6); // UNK_0xedd6
  Push(0x000e);
  Push(cc_BL); // BL
  FILL(); // FILL
  Push(0x0029);
  Push(0x000c);
  UNK_0xef84(); // UNK_0xef84
  C_ex_(); // C!
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x7205(); // UNK_0x7205
  UNK_0x6768(); // UNK_0x6768
  Push(1); // 1
  UNK_0xef84(); // UNK_0xef84
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(0x002a);
  DOSCALL(); // DOSCALL
  Push(cc_DX); // DX
  C_at_(); // C@
  DUP(); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label746;

  UNK_0xef7a(); // UNK_0xef7a
  Push(0); // 0
  UNK_0xef7a(); // UNK_0xef7a
  goto label747;

  label746:
  DUP(); // DUP
  Push(0x000a);
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  UNK_0xef7a(); // UNK_0xef7a
  SWAP(); // SWAP
  UNK_0xef7a(); // UNK_0xef7a

  label747:
  Push(cc__4); // 4
  UNK_0xef84(); // UNK_0xef84
  C_ex_(); // C!
  Push(cc__5); // 5
  UNK_0xef84(); // UNK_0xef84
  C_ex_(); // C!
  Push(cc_DX); // DX
  Push(Pop()+1); // 1+
  C_at_(); // C@
  _n__gt_MON(); // #>MON
  Push(cc__6); // 6
  UNK_0xef84(); // UNK_0xef84
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(cc_CX); // CX
  Push(Read16(Pop())); // @
  Push(0x076c);
  _minus_(); // -
  DUP(); // DUP
  Push(0x000a);
  _slash_MOD(); // /MOD
  UNK_0xef7a(); // UNK_0xef7a
  SWAP(); // SWAP
  UNK_0xef7a(); // UNK_0xef7a
  Push(0x000a);
  UNK_0xef84(); // UNK_0xef84
  C_ex_(); // C!
  Push(cc__9); // 9
  UNK_0xef84(); // UNK_0xef84
  C_ex_(); // C!
}

// 0xf3da: db 0x4c 0x22 0x20 0x0f 0x74 0xee 0x16 0x6d 0xe2 0xee 0x90 0x16 0x4c 0x22 0x02 0xef 0x02 0xef 0x02 0xef 0x90 0x16 0x4c 0x22 0xc8 0xf0 0x89 0x82 0x1e 0x24 0x90 0x16 0x4c 0x22 0xfb 0x38 0x20 0x0f 'L"  t  m    L"        L"     $  L" 8  '
// 0xf400: mov    si,90EF
// 0xf403: push   ss
// 0xf404: dec    sp
// 0xf405: and    ch,[BE0F]
// 0xf409: out    dx,ax
// 0xf40a: nop    
// 0xf40b: push   ss
// 0xf40c: dec    sp
// 0xf40d: and    bh,[bx+si-41C5]
// 0xf411: out    dx,ax
// 0xf412: nop    
// 0xf413: push   ss
// 0xf414: dec    sp
// 0xf415: and    bh,[bx+si-12]
// 0xf418: scasb
// 0xf419: or     ax,[bx]
// 0xf41b: adc    di,[bx+si-12]
// 0xf41e: push   ss
// 0xf41f: db     6D
// 0xf420: sub    al,F0
// 0xf422: nop    
// 0xf423: push   ss

// ================================================
// 0xf424: WORD '>STAMP' codep=0x224c parp=0xf42f
// ================================================

void _gt_STAMP() // >STAMP
{
  Push(pp_STAMP); // STAMP
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label755;

  SET_minus_USER(); // SET-USER
  Push(pp_UNK_0xedd6); // UNK_0xedd6
  Push(tt_SCR); // SCR
  Push(Read16(Pop())); // @
  BLOCK(); // BLOCK
  _gt_R(); // >R
  R_at_(); // R@
  Push(0x0032);
  Push(Pop() + Pop()); // +
  Push(0x000e);
  CMOVE(); // CMOVE
  Push(pp_FILENAMES); // FILENAMES
  Push(0x0016);
  Push(Pop() + Pop()); // +
  R_at_(); // R@
  Push(0x0026);
  Push(Pop() + Pop()); // +
  Push(0x000b);
  CMOVE(); // CMOVE
  Push(0x205c);
  R_gt_(); // R>
  Push(0x0024);
  Push(Pop() + Pop()); // +
  _ex_(); // !

  label755:
  SAVE_minus_BU(); // SAVE-BU
}


// ================================================
// 0xf479: WORD 'EDIT-KEYS' codep=0x4b3b parp=0xf487
// ================================================
// 0xf487: db 0x18 0x00 0x48 0x3a 0x47 0x01 0xd4 0xee 0x3d 0x01 0x5d 0xf1 0x08 0x00 0x4c 0xf2 0x50 0x01 0xe4 0xee 0x3f 0x01 0x70 0xf1 0x09 0x00 0xe8 0xf3 0x48 0x01 0xf4 0xee 0x40 0x01 0x80 0xf1 0x1b 0x00 0xf2 0xf3 0x4d 0x01 0x04 0xef 0x3e 0x01 0xa9 0xf1 0x3c 0x01 0xfc 0xf3 0x4b 0x01 0x16 0xef 0x53 0x01 0xda 0xf1 0x49 0x01 0x06 0xf4 0x41 0x01 0xfc 0xef 0x4f 0x01 0xb9 0xf2 0x51 0x01 0x0e 0xf4 0x42 0x01 0x0c 0xf0 0x44 0x01 0xdd 0xf2 0x52 0x01 0x16 0xf4 0x43 0x01 0x23 0xf1 0x0d 0x00 0xdc 0xf3 0x3b 0x01 0x2f 0xf4 '  H:G   = ]   L P   ? p     H   @       M   >   <   K   S   I   A   O   Q   B   D   R   C #     ; / '

// ================================================
// 0xf4eb: WORD 'EDIT' codep=0x224c parp=0xf4f4
// ================================================

void EDIT() // EDIT
{
  UNK_0xeed4(); // UNK_0xeed4
  PAGE(); // PAGE
  LIST(); // LIST
  DISPLAYKEY(); // DISPLAYKEY

  label734:
  UNK_0xeec0(); // UNK_0xeec0
  KEY(); // KEY
  _ask_VISIBLE(); // ?VISIBLE
  if (Pop() == 0) goto label733;

  INSERT(); // INSERT
  goto label739;

  label733:
  EDIT_minus_KEYS(); // EDIT-KEYS

  label739:
  goto label734;
}


// ================================================
// 0xf514: WORD 'VIEW-KEYS' codep=0x4b3b parp=0xf522
// ================================================
// 0xf522: db 0x03 0x00 0x48 0x3a 0x1b 0x00 0xf2 0xf3 0x49 0x01 0x06 0xf4 0x51 0x01 0x0e 0xf4 '  H:    I   Q   '

// ================================================
// 0xf532: WORD 'VIEW' codep=0x224c parp=0xf53b
// ================================================

void VIEW() // VIEW
{
  UNK_0xeed4(); // UNK_0xeed4
  PAGE(); // PAGE
  LIST(); // LIST
  DISPLAYKEY(); // DISPLAYKEY

  label745:
  UNK_0xeec0(); // UNK_0xeec0
  KEY(); // KEY
  _ask_VISIBLE(); // ?VISIBLE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label744;

  VIEW_minus_KEYS(); // VIEW-KEYS

  label744:
  goto label745;
}

// 0xf557: db 0x2b 0x45 0x44 0x49 0x54 0x5f 0x5f 0x5f 0x5f 0x00 '+EDIT____ '
  