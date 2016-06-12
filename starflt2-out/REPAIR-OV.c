// ====== OVERLAY 'REPAIR-OV' ======
// store offset = 0xeee0
// overlay size   = 0x0680

#include"cpu.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xb017 C-string:'UNK_0x3f09'
// 1870:      UNK_0xef22  codep:0x7420 parp:0xef22 size:0x0008 C-string:'UNK_0xef22'
// 1871:      UNK_0xef2c  codep:0x7420 parp:0xef2c size:0x0003 C-string:'UNK_0xef2c'
// 1872:      UNK_0xef31  codep:0x7420 parp:0xef31 size:0x0003 C-string:'UNK_0xef31'
// 1873:      UNK_0xef36  codep:0x7420 parp:0xef36 size:0x0003 C-string:'UNK_0xef36'
// 1874:          >FIELD  codep:0x4b3b parp:0xef44 size:0x0020 C-string:'_gt_FIELD'
// 1875:      UNK_0xef66  codep:0x1d29 parp:0xef66 size:0x0002 C-string:'UNK_0xef66'
// 1876:      UNK_0xef6a  codep:0x1d29 parp:0xef6a size:0x0002 C-string:'UNK_0xef6a'
// 1877:      UNK_0xef6e  codep:0x1d29 parp:0xef6e size:0x0002 C-string:'UNK_0xef6e'
// 1878:      UNK_0xef72  codep:0x1d29 parp:0xef72 size:0x0002 C-string:'UNK_0xef72'
// 1879:      UNK_0xef76  codep:0x224c parp:0xef76 size:0x0006 C-string:'UNK_0xef76'
// 1880:      UNK_0xef7e  codep:0x224c parp:0xef7e size:0x0006 C-string:'UNK_0xef7e'
// 1881:      UNK_0xef86  codep:0x224c parp:0xef86 size:0x0006 C-string:'UNK_0xef86'
// 1882:      UNK_0xef8e  codep:0x224c parp:0xef8e size:0x0006 C-string:'UNK_0xef8e'
// 1883:      UNK_0xef96  codep:0x224c parp:0xef96 size:0x0006 C-string:'UNK_0xef96'
// 1884:      UNK_0xef9e  codep:0x224c parp:0xef9e size:0x000e C-string:'UNK_0xef9e'
// 1885:      UNK_0xefae  codep:0x224c parp:0xefae size:0x000a C-string:'UNK_0xefae'
// 1886:      UNK_0xefba  codep:0x224c parp:0xefba size:0x000e C-string:'UNK_0xefba'
// 1887:      UNK_0xefca  codep:0x224c parp:0xefca size:0x0014 C-string:'UNK_0xefca'
// 1888:      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x001e C-string:'UNK_0xefe0'
// 1889:      UNK_0xf000  codep:0x224c parp:0xf000 size:0x000e C-string:'UNK_0xf000'
// 1890:      UNK_0xf010  codep:0x224c parp:0xf010 size:0x000a C-string:'UNK_0xf010'
// 1891:      UNK_0xf01c  codep:0x224c parp:0xf01c size:0x003c C-string:'UNK_0xf01c'
// 1892:      UNK_0xf05a  codep:0x1d29 parp:0xf05a size:0x0002 C-string:'UNK_0xf05a'
// 1893:      UNK_0xf05e  codep:0x224c parp:0xf05e size:0x0046 C-string:'UNK_0xf05e'
// 1894:      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x003c C-string:'UNK_0xf0a6'
// 1895:      UNK_0xf0e4  codep:0x1d29 parp:0xf0e4 size:0x000a C-string:'UNK_0xf0e4'
// 1896:      UNK_0xf0f0  codep:0x224c parp:0xf0f0 size:0x0016 C-string:'UNK_0xf0f0'
// 1897:      UNK_0xf108  codep:0x224c parp:0xf108 size:0x0024 C-string:'UNK_0xf108'
// 1898:      UNK_0xf12e  codep:0x224c parp:0xf12e size:0x0012 C-string:'UNK_0xf12e'
// 1899:      UNK_0xf142  codep:0x224c parp:0xf142 size:0x000c C-string:'UNK_0xf142'
// 1900:      UNK_0xf150  codep:0x224c parp:0xf150 size:0x0050 C-string:'UNK_0xf150'
// 1901:      UNK_0xf1a2  codep:0x224c parp:0xf1a2 size:0x0022 C-string:'UNK_0xf1a2'
// 1902:      UNK_0xf1c6  codep:0x224c parp:0xf1c6 size:0x0018 C-string:'UNK_0xf1c6'
// 1903:      UNK_0xf1e0  codep:0x224c parp:0xf1e0 size:0x0022 C-string:'UNK_0xf1e0'
// 1904:      UNK_0xf204  codep:0x224c parp:0xf204 size:0x0022 C-string:'UNK_0xf204'
// 1905:      UNK_0xf228  codep:0x224c parp:0xf228 size:0x002e C-string:'UNK_0xf228'
// 1906:      UNK_0xf258  codep:0x224c parp:0xf258 size:0x001e C-string:'UNK_0xf258'
// 1907:      UNK_0xf278  codep:0x224c parp:0xf278 size:0x0014 C-string:'UNK_0xf278'
// 1908:      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x0032 C-string:'UNK_0xf28e'
// 1909:      UNK_0xf2c2  codep:0x224c parp:0xf2c2 size:0x001c C-string:'UNK_0xf2c2'
// 1910:      UNK_0xf2e0  codep:0x224c parp:0xf2e0 size:0x0012 C-string:'UNK_0xf2e0'
// 1911:      UNK_0xf2f4  codep:0x224c parp:0xf2f4 size:0x0006 C-string:'UNK_0xf2f4'
// 1912:      UNK_0xf2fc  codep:0x224c parp:0xf2fc size:0x0014 C-string:'UNK_0xf2fc'
// 1913:      UNK_0xf312  codep:0x224c parp:0xf312 size:0x0024 C-string:'UNK_0xf312'
// 1914:      UNK_0xf338  codep:0x224c parp:0xf338 size:0x000c C-string:'UNK_0xf338'
// 1915:      UNK_0xf346  codep:0x224c parp:0xf346 size:0x001a C-string:'UNK_0xf346'
// 1916:      UNK_0xf362  codep:0x224c parp:0xf362 size:0x0019 C-string:'UNK_0xf362'
// 1917:      UNK_0xf37d  codep:0x224c parp:0xf37d size:0x0032 C-string:'UNK_0xf37d'
// 1918:      UNK_0xf3b1  codep:0x224c parp:0xf3b1 size:0x003a C-string:'UNK_0xf3b1'
// 1919:      UNK_0xf3ed  codep:0x224c parp:0xf3ed size:0x001e C-string:'UNK_0xf3ed'
// 1920:      UNK_0xf40d  codep:0x224c parp:0xf40d size:0x0008 C-string:'UNK_0xf40d'
// 1921:      UNK_0xf417  codep:0x224c parp:0xf417 size:0x0010 C-string:'UNK_0xf417'
// 1922:      UNK_0xf429  codep:0x224c parp:0xf429 size:0x0040 C-string:'UNK_0xf429'
// 1923:      UNK_0xf46b  codep:0x224c parp:0xf46b size:0x0014 C-string:'UNK_0xf46b'
// 1924:      UNK_0xf481  codep:0x224c parp:0xf481 size:0x0048 C-string:'UNK_0xf481'
// 1925:      UNK_0xf4cb  codep:0x224c parp:0xf4cb size:0x0012 C-string:'UNK_0xf4cb'
// 1926:      UNK_0xf4df  codep:0x224c parp:0xf4df size:0x001a C-string:'UNK_0xf4df'
// 1927:         DO-REPA  codep:0x224c parp:0xf505 size:0x0000 C-string:'DO_dash_REPA'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xef66[2] = {0x01, 0x00}; // UNK_0xef66
unsigned char UNK_0xef6a[2] = {0x3a, 0x20}; // UNK_0xef6a
unsigned char UNK_0xef6e[2] = {0x3a, 0x20}; // UNK_0xef6e
unsigned char UNK_0xef72[2] = {0x3a, 0x20}; // UNK_0xef72
unsigned char UNK_0xf05a[2] = {0x3a, 0x20}; // UNK_0xf05a
unsigned char UNK_0xf0e4[10] = {0x01, 0x00, 0x0c, 0x00, 0x14, 0x00, 0x04, 0x00, 0x10, 0x00}; // UNK_0xf0e4



// 0xeef2: db 0x68 0x00 0x14 0x22 0x14 0x00 0x20 0x74 0x14 0x11 0x02 0x20 0x74 0x14 0x12 0x01 0x20 0x74 0x14 0x13 0x02 0x20 0x74 0x14 0x15 0x02 0x20 0x74 0x14 0x17 0x02 0x20 0x74 0x14 0x19 0x02 0x20 0x74 0x14 0x1b 0x02 0x20 0x74 0x14 0x1d 0x02 'h  "   t    t    t    t    t    t    t    t   '

// ================================================
// 0xef20: WORD 'UNK_0xef22' codep=0x7420 parp=0xef22
// ================================================
// 0xef22: db 0x14 0x29 0x07 0x20 0x74 0x14 0x32 0x02 ' )  t 2 '

// ================================================
// 0xef2a: WORD 'UNK_0xef2c' codep=0x7420 parp=0xef2c
// ================================================
// 0xef2c: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xef2f: WORD 'UNK_0xef31' codep=0x7420 parp=0xef31
// ================================================
// 0xef31: db 0x11 0x1a 0x03 '   '

// ================================================
// 0xef34: WORD 'UNK_0xef36' codep=0x7420 parp=0xef36
// ================================================
// 0xef36: db 0x10 0x1c 0x01 '   '

// ================================================
// 0xef39: WORD '>FIELD' codep=0x4b3b parp=0xef44
// ================================================
// 0xef44: db 0x07 0x00 0x6e 0x3a 0x00 0x00 0xfa 0xee 0x01 0x00 0x04 0xef 0x02 0x00 0x09 0xef 0x03 0x00 0x0e 0xef 0x04 0x00 0x13 0xef 0x05 0x00 0x18 0xef 0x06 0x00 0x1d 0xef '  n:                            '

// ================================================
// 0xef64: WORD 'UNK_0xef66' codep=0x1d29 parp=0xef66
// ================================================
// 0xef66: db 0x01 0x00 '  '

// ================================================
// 0xef68: WORD 'UNK_0xef6a' codep=0x1d29 parp=0xef6a
// ================================================
// 0xef6a: db 0x3a 0x20 ': '

// ================================================
// 0xef6c: WORD 'UNK_0xef6e' codep=0x1d29 parp=0xef6e
// ================================================
// 0xef6e: db 0x3a 0x20 ': '

// ================================================
// 0xef70: WORD 'UNK_0xef72' codep=0x1d29 parp=0xef72
// ================================================
// 0xef72: db 0x3a 0x20 ': '

// ================================================
// 0xef74: WORD 'UNK_0xef76' codep=0x224c parp=0xef76
// ================================================

void UNK_0xef76() // UNK_0xef76
{
  Push(pp_UNK_0xef72); // UNK_0xef72
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef7c: WORD 'UNK_0xef7e' codep=0x224c parp=0xef7e
// ================================================

void UNK_0xef7e() // UNK_0xef7e
{
  Push(pp_UNK_0xef72); // UNK_0xef72
  Push(Read16(Pop())); // @
}


// ================================================
// 0xef84: WORD 'UNK_0xef86' codep=0x224c parp=0xef86
// ================================================

void UNK_0xef86() // UNK_0xef86
{
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Push(Read16(Pop())); // @
}


// ================================================
// 0xef8c: WORD 'UNK_0xef8e' codep=0x224c parp=0xef8e
// ================================================

void UNK_0xef8e() // UNK_0xef8e
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xef94: WORD 'UNK_0xef96' codep=0x224c parp=0xef96
// ================================================

void UNK_0xef96() // UNK_0xef96
{
  UNK_0xef86(); // UNK_0xef86
  _gt_FIELD(); // >FIELD
}


// ================================================
// 0xef9c: WORD 'UNK_0xef9e' codep=0x224c parp=0xef9e
// ================================================

void UNK_0xef9e() // UNK_0xef9e
{
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(0x0040);
  Push(Pop() & Pop()); // AND
  UNK_0xef8e(); // UNK_0xef8e
}


// ================================================
// 0xefac: WORD 'UNK_0xefae' codep=0x224c parp=0xefae
// ================================================

void UNK_0xefae() // UNK_0xefae
{
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xefb8: WORD 'UNK_0xefba' codep=0x224c parp=0xefba
// ================================================

void UNK_0xefba() // UNK_0xefba
{
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  UNK_0xef8e(); // UNK_0xef8e
}


// ================================================
// 0xefc8: WORD 'UNK_0xefca' codep=0x224c parp=0xefca
// ================================================

void UNK_0xefca() // UNK_0xefca
{
  DUP(); // DUP
  C_at_(); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x224c parp=0xefe0
// ================================================

void UNK_0xefe0() // UNK_0xefe0
{
  Push(Pop()+1); // 1+
  DUP(); // DUP
  _gt_R(); // >R
  C_at_(); // C@
  Push(0x00bf);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  C_ex_(); // C!
}


// ================================================
// 0xeffe: WORD 'UNK_0xf000' codep=0x224c parp=0xf000
// ================================================

void UNK_0xf000() // UNK_0xf000
{
  Push(0); // 0
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Push(Read16(Pop())); // @
  UNK_0xef22(); // UNK_0xef22
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xf00e: WORD 'UNK_0xf010' codep=0x224c parp=0xf010
// ================================================

void UNK_0xf010() // UNK_0xf010
{
  Push(pp__ask_REPAIR); // ?REPAIR
  OFF(); // OFF
  Push(pp_UNK_0xef66); // UNK_0xef66
  OFF(); // OFF
}


// ================================================
// 0xf01a: WORD 'UNK_0xf01c' codep=0x224c parp=0xf01c
// ================================================

void UNK_0xf01c() // UNK_0xf01c
{
  Push(cc__dash_1); // -1
  Push(cc__7); // 7
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _gt_FIELD(); // >FIELD
  UNK_0xef9e(); // UNK_0xef9e
  if (Pop() == 0) goto label1;
  Push(i); // I
  _gt_FIELD(); // >FIELD
  UNK_0xefae(); // UNK_0xefae
  Push(0x0064);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(i); // I
  LEAVE(); // LEAVE
  goto label1;

  label2:
  UNK_0xf010(); // UNK_0xf010
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd6

  DUP(); // DUP
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  _ex_(); // !
}


// ================================================
// 0xf058: WORD 'UNK_0xf05a' codep=0x1d29 parp=0xf05a
// ================================================
// 0xf05a: db 0x3a 0x20 ': '

// ================================================
// 0xf05c: WORD 'UNK_0xf05e' codep=0x224c parp=0xf05e
// ================================================

void UNK_0xf05e() // UNK_0xf05e
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  UNK_0xef31(); // UNK_0xef31
  _at__gt_C_plus_S(); // @>C+S
  Push(0x00fb);
  UNK_0xef36(); // UNK_0xef36
  C_at_(); // C@
  DUP(); // DUP
  _gt_R(); // >R
  _dash_(); // -
  Push(0x0064);
  ROT(); // ROT
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(Pop()+1); // 1+
  Push(0x1c1b);
  Push(0x5559);
  _star__slash_(); // */
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  Push(cc__6); // 6
  _slash_(); // /
  Push(0x000a);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xf05a); // UNK_0xf05a
  _ex_(); // !
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Push(Read16(Pop())); // @
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _gt_FIELD(); // >FIELD
  UNK_0xefae(); // UNK_0xefae
  DUP(); // DUP
  UNK_0xf05e(); // UNK_0xf05e
  Push(0x0064);
  ROT(); // ROT
  _dash_(); // -
  _slash_(); // /
  Push(pp_REAL_dash_MS); // REAL-MS
  _2_at_(); // 2@
  Push(0x0018);
  M_slash_(); // M/
  SWAP(); // SWAP
  Pop(); // DROP
  Push(Pop() * Pop()); // *
  Push(pp_REPAIRT); // REPAIRT
  _st__ex__gt_(); // <!>
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf0e2: WORD 'UNK_0xf0e4' codep=0x1d29 parp=0xf0e4
// ================================================
// 0xf0e4: db 0x01 0x00 0x0c 0x00 0x14 0x00 0x04 0x00 0x10 0x00 '          '

// ================================================
// 0xf0ee: WORD 'UNK_0xf0f0' codep=0x224c parp=0xf0f0
// ================================================

void UNK_0xf0f0() // UNK_0xf0f0
{
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xf0e4); // UNK_0xf0e4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(pp_UNK_0xef6e); // UNK_0xef6e
  _ex_(); // !
}


// ================================================
// 0xf106: WORD 'UNK_0xf108' codep=0x224c parp=0xf108
// ================================================

void UNK_0xf108() // UNK_0xf108
{
  Push(1); // 1
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  Push(cc__7); // 7
  MIN(); // MIN
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(0x000a);
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  UNK_0xef76(); // UNK_0xef76
}


// ================================================
// 0xf12c: WORD 'UNK_0xf12e' codep=0x224c parp=0xf12e
// ================================================

void UNK_0xf12e() // UNK_0xf12e
{
  Push(1); // 1
  Push(cc__7); // 7
  RRND(); // RRND
  Push(0x000a);
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  UNK_0xef76(); // UNK_0xef76
}


// ================================================
// 0xf140: WORD 'UNK_0xf142' codep=0x224c parp=0xf142
// ================================================

void UNK_0xf142() // UNK_0xf142
{
  Push(0); // 0
  Push(pp_UNK_0xf05a); // UNK_0xf05a
  Push(Read16(Pop())); // @
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xf14e: WORD 'UNK_0xf150' codep=0x224c parp=0xf150
// ================================================

void UNK_0xf150() // UNK_0xf150
{
  _star_STARSH(); // *STARSH
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  SWAP(); // SWAP
  IFIND(); // IFIND
  if (Pop() == 0) goto label2;
  UNK_0xef7e(); // UNK_0xef7e
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label4;
  Push(1); // 1
  goto label6;

  label4:
  Push(0); // 0

  label6:
  goto label5;

  label2:
  Push(0); // 0

  label5:
  ICLOSE(); // ICLOSE
  goto label3;

  label1:
  Pop(); // DROP
  Push(0); // 0

  label3:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1a0: WORD 'UNK_0xf1a2' codep=0x224c parp=0xf1a2
// ================================================

void UNK_0xf1a2() // UNK_0xf1a2
{
  _star_STARSH(); // *STARSH
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001a);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf1c4: WORD 'UNK_0xf1c6' codep=0x224c parp=0xf1c6
// ================================================

void UNK_0xf1c6() // UNK_0xf1c6
{
  Push(0x0020);
  Push(0x000a);
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  UNK_0xef22(); // UNK_0xef22
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xf1de: WORD 'UNK_0xf1e0' codep=0x224c parp=0xf1e0
// ================================================

void UNK_0xf1e0() // UNK_0xf1e0
{
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Push(Read16(Pop())); // @
  UNK_0xef22(); // UNK_0xef22
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  DUP(); // DUP
  Push(0x001f);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(0x0020);
  _slash_(); // /
  Push(0x000a);
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf202: WORD 'UNK_0xf204' codep=0x224c parp=0xf204
// ================================================

void UNK_0xf204() // UNK_0xf204
{
  Push(pp_UNK_0xef6e); // UNK_0xef6e
  Push(Read16(Pop())); // @
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  ELEM_dash_NA(); // ELEM-NA
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  _dot_TTY(); // .TTY
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf226: WORD 'UNK_0xf228' codep=0x224c parp=0xf228
// ================================================

void UNK_0xf228() // UNK_0xf228
{

  UNK_0x3f09("SHALL I TAKE THIS FROM CARGO?");
  _dot_TTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xf256: WORD 'UNK_0xf258' codep=0x224c parp=0xf258
// ================================================

void UNK_0xf258() // UNK_0xf258
{
  BEEP(); // BEEP
  CTERASE(); // CTERASE

  UNK_0x3f09("COMMANDER, WE NEED ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf276: WORD 'UNK_0xf278' codep=0x224c parp=0xf278
// ================================================

void UNK_0xf278() // UNK_0xf278
{

  UNK_0x3f09(" FOR REPAIRS.");
  TYPE(); // TYPE
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  UNK_0xef7e(); // UNK_0xef7e
  Push(0x000a);
  _slash_(); // /
  _dot_(); // .

  UNK_0x3f09("CUBIC METER");
  TYPE(); // TYPE
  UNK_0xef7e(); // UNK_0xef7e
  Push(0x000a);
  _dash_(); // -
  if (Pop() == 0) goto label1;
  PRINT("S", 1); // (.")

  label1:
  PRINT(" OF", 3); // (.")
}


// ================================================
// 0xf2c0: WORD 'UNK_0xf2c2' codep=0x224c parp=0xf2c2
// ================================================

void UNK_0xf2c2() // UNK_0xf2c2
{

  UNK_0x3f09("             [NO YES]");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf2de: WORD 'UNK_0xf2e0' codep=0x224c parp=0xf2e0
// ================================================

void UNK_0xf2e0() // UNK_0xf2e0
{
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xf258(); // UNK_0xf258
  UNK_0xf28e(); // UNK_0xf28e
  UNK_0xf204(); // UNK_0xf204
  UNK_0xf278(); // UNK_0xf278
  UNK_0xf228(); // UNK_0xf228
  UNK_0xf2c2(); // UNK_0xf2c2
}


// ================================================
// 0xf2f2: WORD 'UNK_0xf2f4' codep=0x224c parp=0xf2f4
// ================================================

void UNK_0xf2f4() // UNK_0xf2f4
{
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf2fa: WORD 'UNK_0xf2fc' codep=0x224c parp=0xf2fc
// ================================================

void UNK_0xf2fc() // UNK_0xf2fc
{
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0); // 0
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefe0(); // UNK_0xefe0
}


// ================================================
// 0xf310: WORD 'UNK_0xf312' codep=0x224c parp=0xf312
// ================================================

void UNK_0xf312() // UNK_0xf312
{

  UNK_0x3f09("CEASING REPAIR ");
  _dot_TTY(); // .TTY
  Push(pp__ask_REPAIR); // ?REPAIR
  _099(); // 099
  Push(pp_UNK_0xef66); // UNK_0xef66
  _099(); // 099
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf336: WORD 'UNK_0xf338' codep=0x224c parp=0xf338
// ================================================

void UNK_0xf338() // UNK_0xf338
{
  UNK_0xf2f4(); // UNK_0xf2f4
  UNK_0xf258(); // UNK_0xf258
  UNK_0xf28e(); // UNK_0xf28e
  UNK_0xf204(); // UNK_0xf204
  UNK_0xf278(); // UNK_0xf278
}


// ================================================
// 0xf344: WORD 'UNK_0xf346' codep=0x224c parp=0xf346
// ================================================

void UNK_0xf346() // UNK_0xf346
{
  UNK_0xf2f4(); // UNK_0xf2f4

  UNK_0x3f09("REPAIR COMPLETED ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf360: WORD 'UNK_0xf362' codep=0x224c parp=0xf362
// ================================================

void UNK_0xf362() // UNK_0xf362
{

  UNK_0x3f09("CONTINUING REPAIR ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf37b: WORD 'UNK_0xf37d' codep=0x224c parp=0xf37d
// ================================================

void UNK_0xf37d() // UNK_0xf37d
{
  UNK_0xf0f0(); // UNK_0xf0f0
  DUP(); // DUP
  Push(pp_UNK_0xef72); // UNK_0xef72
  _099(); // 099
  UNK_0xf150(); // UNK_0xf150
  if (Pop() == 0) goto label1;
  DUP(); // DUP
  DUP(); // DUP
  UNK_0xf1a2(); // UNK_0xf1a2
  UNK_0xf108(); // UNK_0xf108
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf1c6(); // UNK_0xf1c6
  CDROP(); // CDROP
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  return;

  label1:
  Push(pp_UNK_0xef6e); // UNK_0xef6e
  Push(Read16(Pop())); // @
  UNK_0xf12e(); // UNK_0xf12e
  UNK_0xf1c6(); // UNK_0xf1c6
}


// ================================================
// 0xf3af: WORD 'UNK_0xf3b1' codep=0x224c parp=0xf3b1
// ================================================

void UNK_0xf3b1() // UNK_0xf3b1
{
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  UNK_0xf1e0(); // UNK_0xf1e0
  SWAP(); // SWAP
  UNK_0xf1a2(); // UNK_0xf1a2
  Pop(); // DROP
  UNK_0xef7e(); // UNK_0xef7e
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  MIN(); // MIN
  DUP(); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex_(); // !
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xef2c(); // UNK_0xef2c
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  _ro_BOX_gt__rc_(); // (BOX>)
  Pop(); Pop();// 2DROP
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex_(); // !
  UNK_0xf000(); // UNK_0xf000
}


// ================================================
// 0xf3eb: WORD 'UNK_0xf3ed' codep=0x224c parp=0xf3ed
// ================================================

void UNK_0xf3ed() // UNK_0xf3ed
{
  UNK_0xf2e0(); // UNK_0xf2e0
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Y_slash_N(); // Y/N
  if (Pop() == 0) goto label1;
  UNK_0xf362(); // UNK_0xf362
  UNK_0xf3b1(); // UNK_0xf3b1
  Push(pp_UNK_0xef66); // UNK_0xef66
  ON(); // ON
  return;

  label1:
  Push(pp_UNK_0xef66); // UNK_0xef66
  _099(); // 099
}


// ================================================
// 0xf40b: WORD 'UNK_0xf40d' codep=0x224c parp=0xf40d
// ================================================

void UNK_0xf40d() // UNK_0xf40d
{
  UNK_0xf338(); // UNK_0xf338
  Push(pp_UNK_0xef66); // UNK_0xef66
  OFF(); // OFF
}


// ================================================
// 0xf415: WORD 'UNK_0xf417' codep=0x224c parp=0xf417
// ================================================

void UNK_0xf417() // UNK_0xf417
{
  UNK_0xf150(); // UNK_0xf150
  if (Pop() == 0) goto label1;
  UNK_0xf3ed(); // UNK_0xf3ed
  return;

  label1:
  UNK_0xf40d(); // UNK_0xf40d
}


// ================================================
// 0xf427: WORD 'UNK_0xf429' codep=0x224c parp=0xf429
// ================================================

void UNK_0xf429() // UNK_0xf429
{
  UNK_0xf1e0(); // UNK_0xf1e0
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  UNK_0xf142(); // UNK_0xf142
  if (Pop() == 0) goto label2;
  UNK_0xf37d(); // UNK_0xf37d
  UNK_0xf417(); // UNK_0xf417
  goto label3;

  label2:
  Push(pp_UNK_0xef66); // UNK_0xef66
  ON(); // ON
}


  label3:
  goto label4;

  label1:
  UNK_0xef76(); // UNK_0xef76
  DUP(); // DUP
  Push(pp_UNK_0xef6e); // UNK_0xef6e
  _ex_(); // !
  UNK_0xf417(); // UNK_0xf417

  label4:
  Push(pp_UNK_0xef66); // UNK_0xef66
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf312(); // UNK_0xf312
  UNK_0xf2fc(); // UNK_0xf2fc
  UNK_0xf010(); // UNK_0xf010
}


// ================================================
// 0xf469: WORD 'UNK_0xf46b' codep=0x224c parp=0xf46b
// ================================================

void UNK_0xf46b() // UNK_0xf46b
{
  UNK_0xef96(); // UNK_0xef96
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xef96(); // UNK_0xef96
  Push(Pop()+1); // 1+
  C_ex_(); // C!
}


// ================================================
// 0xf47f: WORD 'UNK_0xf481' codep=0x224c parp=0xf481
// ================================================

void UNK_0xf481() // UNK_0xf481
{
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefba(); // UNK_0xefba
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefae(); // UNK_0xefae
  Push(0x0049);
  _gt_(); // >
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xf46b(); // UNK_0xf46b
  Push(1); // 1
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR

  UNK_0x3f09("ITEM OPERATIONAL ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf4c9: WORD 'UNK_0xf4cb' codep=0x224c parp=0xf4cb
// ================================================

void UNK_0xf4cb() // UNK_0xf4cb
{
  Push(Pop()+1); // 1+
  Push(0x0064);
  MIN(); // MIN
  DUP(); // DUP
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefca(); // UNK_0xefca
  UNK_0xf481(); // UNK_0xf481
}


// ================================================
// 0xf4dd: WORD 'UNK_0xf4df' codep=0x224c parp=0xf4df
// ================================================

void UNK_0xf4df() // UNK_0xf4df
{
  Push(pp__ask_REPAIR); // ?REPAIR
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) return;
  UNK_0xf01c(); // UNK_0xf01c
  Pop(); // DROP
  UNK_0xf0a6(); // UNK_0xf0a6
  Push(cc__dash_1); // -1
  Push(pp__ask_REPAIR); // ?REPAIR
  _ex_(); // !
}


// ================================================
// 0xf4f9: WORD 'DO-REPA' codep=0x224c parp=0xf505
// ================================================
// entry

void DO_dash_REPA() // DO-REPA
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf4df(); // UNK_0xf4df
  UNK_0xef86(); // UNK_0xef86
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefae(); // UNK_0xefae
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  UNK_0xf429(); // UNK_0xf429
  Push(pp_UNK_0xef66); // UNK_0xef66
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label4;
  UNK_0xf4cb(); // UNK_0xf4cb
  Push(0x0064);
  _eq_(); // =
  if (Pop() == 0) goto label5;
  UNK_0xf346(); // UNK_0xf346
  UNK_0xf2fc(); // UNK_0xf2fc
  UNK_0xf010(); // UNK_0xf010
  UNK_0xf46b(); // UNK_0xf46b

  label5:
  goto label2;

  label4:
  Pop(); // DROP

  label2:
  goto label3;

  label1:
  UNK_0xf346(); // UNK_0xf346
  UNK_0xf2fc(); // UNK_0xf2fc
  UNK_0xf010(); // UNK_0xf010

  label3:
  ICLOSE(); // ICLOSE
}

// 0xf551: db 0x52 0x45 0x50 0x41 0x49 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'REPAIR_________ '
  