// ====== OVERLAY 'MARKET' ======

#include"cpu.h"

// store offset = 0xe810
// overlay size   = 0x0d50

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x2047  codep:0x206e parp:0x2047 size:0x0005 C-string:'UNK_0x2047'
// 1870:      UNK_0x204e  codep:0x6e69 parp:0x204e size:0x0001 C-string:'UNK_0x204e'
// 1871:      UNK_0x2051  codep:0x6873 parp:0x2051 size:0x0dff C-string:'UNK_0x2051'
// 1872:      UNK_0x2e52  codep:0x1690 parp:0x2e52 size:0x10b5 C-string:'UNK_0x2e52'
// 1873:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0x0217 C-string:'UNK_0x3f09'
// 1874:      UNK_0x4122  codep:0x414e parp:0x4122 size:0x0005 C-string:'UNK_0x4122'
// 1875:      UNK_0x4129  codep:0x0bae parp:0x4129 size:0x001f C-string:'UNK_0x4129'
// 1876:      UNK_0x414a  codep:0xcb4c parp:0x414a size:0x0008 C-string:'UNK_0x414a'
// 1877:      UNK_0x4154  codep:0x000c parp:0x4154 size:0x02f1 C-string:'UNK_0x4154'
// 1878:      UNK_0x4447  codep:0x8743 parp:0x4447 size:0x00fb C-string:'UNK_0x4447'
// 1879:      UNK_0x4544  codep:0x125f parp:0x4544 size:0x0002 C-string:'UNK_0x4544'
// 1880:      UNK_0x4548  codep:0x0f2e parp:0x4548 size:0x01d8 C-string:'UNK_0x4548'
// 1881:      UNK_0x4722  codep:0x0ef2 parp:0x4722 size:0x001f C-string:'UNK_0x4722'
// 1882:      UNK_0x4743  codep:0x4ccf parp:0x4743 size:0x0100 C-string:'UNK_0x4743'
// 1883:      UNK_0x4845  codep:0xb817 parp:0x4845 size:0x00fc C-string:'UNK_0x4845'
// 1884:      UNK_0x4943  codep:0x0c00 parp:0x4943 size:0x0005 C-string:'UNK_0x4943'
// 1885:      UNK_0x494a  codep:0xffec parp:0x494a size:0x0204 C-string:'UNK_0x494a'
// 1886:      UNK_0x4b50  codep:0x933e parp:0x4b50 size:0x00f9 C-string:'UNK_0x4b50'
// 1887:      UNK_0x4c4b  codep:0xdf0d parp:0x4c4b size:0x0104 C-string:'UNK_0x4c4b'
// 1888:      UNK_0x4d51  codep:0x203a parp:0x4d51 size:0x01fe C-string:'UNK_0x4d51'
// 1889:      UNK_0x4f51  codep:0x544e parp:0x4f51 size:0x0008 C-string:'UNK_0x4f51'
// 1890:      UNK_0x4f5b  codep:0x4154 parp:0x4f5b size:0x00c5 C-string:'UNK_0x4f5b'
// 1891:      UNK_0x5022  codep:0x2d54 parp:0x5022 size:0x0230 C-string:'UNK_0x5022'
// 1892:      UNK_0x5254  codep:0x2d58 parp:0x5254 size:0x0001 C-string:'UNK_0x5254'
// 1893:      UNK_0x5257  codep:0x14c3 parp:0x5257 size:0x00ea C-string:'UNK_0x5257'
// 1894:      UNK_0x5343  codep:0x36bf parp:0x5343 size:0x0001 C-string:'UNK_0x5343'
// 1895:      UNK_0x5346  codep:0x2a85 parp:0x5346 size:0x0008 C-string:'UNK_0x5346'
// 1896:      UNK_0x5350  codep:0xbfe5 parp:0x5350 size:0x00d0 C-string:'UNK_0x5350'
// 1897:      UNK_0x5422  codep:0x8854 parp:0x5422 size:0x0004 C-string:'UNK_0x5422'
// 1898:      UNK_0x5428  codep:0x532d parp:0x5428 size:0x0127 C-string:'UNK_0x5428'
// 1899:      UNK_0x5551  codep:0x5529 parp:0x5551 size:0x01cf C-string:'UNK_0x5551'
// 1900:      UNK_0x5722  codep:0xfcff parp:0x5722 size:0x01fe C-string:'UNK_0x5722'
// 1901:      UNK_0x5922  codep:0xd745 parp:0x5922 size:0x002c C-string:'UNK_0x5922'
// 1902:      UNK_0x5950  codep:0x8659 parp:0x5950 size:0x044f C-string:'UNK_0x5950'
// 1903:      UNK_0x5da1  codep:0x0026 parp:0x5da1 size:0x0189 C-string:'UNK_0x5da1'
// 1904:      UNK_0x5f2c  codep:0x5884 parp:0x5f2c size:0x58eb C-string:'UNK_0x5f2c'
// 1905:      UNK_0xb819  codep:0xef6d parp:0xb819 size:0x300b C-string:'UNK_0xb819'
// 1906:      UNK_0xe826  codep:0x224c parp:0xe826 size:0x0076 C-string:'UNK_0xe826'
// 1907:      UNK_0xe89e  codep:0x7394 parp:0xe89e size:0x0006 C-string:'UNK_0xe89e'
// 1908:      UNK_0xe8a6  codep:0x224c parp:0xe8a6 size:0x0006 C-string:'UNK_0xe8a6'
// 1909:      UNK_0xe8ae  codep:0x224c parp:0xe8ae size:0x000e C-string:'UNK_0xe8ae'
// 1910:      UNK_0xe8be  codep:0x224c parp:0xe8be size:0x0004 C-string:'UNK_0xe8be'
// 1911:      UNK_0xe8c4  codep:0x224c parp:0xe8c4 size:0x0076 C-string:'UNK_0xe8c4'
// 1912:      UNK_0xe93c  codep:0x224c parp:0xe93c size:0x0004 C-string:'UNK_0xe93c'
// 1913:      UNK_0xe942  codep:0x224c parp:0xe942 size:0x002a C-string:'UNK_0xe942'
// 1914:      UNK_0xe96e  codep:0x224c parp:0xe96e size:0x000a C-string:'UNK_0xe96e'
// 1915:      UNK_0xe97a  codep:0x224c parp:0xe97a size:0x005c C-string:'UNK_0xe97a'
// 1916:           MCURS  codep:0x1d29 parp:0xe9e0 size:0x000d C-string:'MCURS'
// 1917:      UNK_0xe9ef  codep:0x224c parp:0xe9ef size:0x003e C-string:'UNK_0xe9ef'
// 1918:      UNK_0xea2f  codep:0x224c parp:0xea2f size:0x0016 C-string:'UNK_0xea2f'
// 1919:      UNK_0xea47  codep:0x224c parp:0xea47 size:0x000e C-string:'UNK_0xea47'
// 1920:      UNK_0xea57  codep:0x224c parp:0xea57 size:0x0081 C-string:'UNK_0xea57'
// 1921:      UNK_0xeada  codep:0x224c parp:0xeada size:0x006c C-string:'UNK_0xeada'
// 1922:      UNK_0xeb48  codep:0x224c parp:0xeb48 size:0x0030 C-string:'UNK_0xeb48'
// 1923:      UNK_0xeb7a  codep:0x224c parp:0xeb7a size:0x0103 C-string:'UNK_0xeb7a'
// 1924:           C>VAL  codep:0x4b3b parp:0xec87 size:0x0014 C-string:'C_gt_VAL'
// 1925:      UNK_0xec9d  codep:0x224c parp:0xec9d size:0x0026 C-string:'UNK_0xec9d'
// 1926:      UNK_0xecc5  codep:0x224c parp:0xecc5 size:0x0012 C-string:'UNK_0xecc5'
// 1927:      UNK_0xecd9  codep:0x224c parp:0xecd9 size:0x0026 C-string:'UNK_0xecd9'
// 1928:      UNK_0xed01  codep:0x224c parp:0xed01 size:0x0034 C-string:'UNK_0xed01'
// 1929:          T>NAME  codep:0x4b3b parp:0xed40 size:0x0020 C-string:'T_gt_NAME'
// 1930:            TLEN  codep:0x4b3b parp:0xed69 size:0x000c C-string:'TLEN'
// 1931:      UNK_0xed77  codep:0x224c parp:0xed77 size:0x001e C-string:'UNK_0xed77'
// 1932:      UNK_0xed97  codep:0x224c parp:0xed97 size:0x0016 C-string:'UNK_0xed97'
// 1933:      UNK_0xedaf  codep:0x224c parp:0xedaf size:0x015c C-string:'UNK_0xedaf'
// 1934:      UNK_0xef0d  codep:0x3a54 parp:0xef0d size:0x01b7 C-string:'UNK_0xef0d'
// 1935:      UNK_0xf0c6  codep:0x224c parp:0xf0c6 size:0x0012 C-string:'UNK_0xf0c6'
// 1936:      UNK_0xf0da  codep:0x224c parp:0xf0da size:0x0012 C-string:'UNK_0xf0da'
// 1937:      UNK_0xf0ee  codep:0x224c parp:0xf0ee size:0x001a C-string:'UNK_0xf0ee'
// 1938:      UNK_0xf10a  codep:0x224c parp:0xf10a size:0x0016 C-string:'UNK_0xf10a'
// 1939:      UNK_0xf122  codep:0x224c parp:0xf122 size:0x0010 C-string:'UNK_0xf122'
// 1940:      UNK_0xf134  codep:0x224c parp:0xf134 size:0x001a C-string:'UNK_0xf134'
// 1941:      UNK_0xf150  codep:0x1690 parp:0xf150 size:0x007a C-string:'UNK_0xf150'
// 1942:            ID>#  codep:0x4b3b parp:0xf1d3 size:0x0036 C-string:'ID_gt__n_'
// 1943:      UNK_0xf20b  codep:0x224c parp:0xf20b size:0x000a C-string:'UNK_0xf20b'
// 1944:      UNK_0xf217  codep:0x224c parp:0xf217 size:0x008b C-string:'UNK_0xf217'
// 1945:      UNK_0xf2a4  codep:0x224c parp:0xf2a4 size:0x0078 C-string:'UNK_0xf2a4'
// 1946:         P>REPLY  codep:0x4b3b parp:0xf328 size:0x00dc C-string:'P_gt_REPLY'
// 1947:      UNK_0xf406  codep:0x224c parp:0xf406 size:0x007d C-string:'UNK_0xf406'
// 1948:      UNK_0xf485  codep:0x224c parp:0xf485 size:0x0008 C-string:'UNK_0xf485'
// 1949:        T>ACTION  codep:0x4b3b parp:0xf49a size:0x0010 C-string:'T_gt_ACTION'
// 1950:      UNK_0xf4ac  codep:0x224c parp:0xf4ac size:0x0024 C-string:'UNK_0xf4ac'
// 1951:      UNK_0xf4d2  codep:0x224c parp:0xf4d2 size:0x0032 C-string:'UNK_0xf4d2'
// 1952:           TRADE  codep:0x224c parp:0xf50e size:0x0052 C-string:'TRADE'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char MCURS[13] = {0x02, 0x0a, 0x02, 0x09, 0x33, 0x0a, 0x36, 0x09, 0x34, 0x0a, 0x6b, 0x09, 0x33}; // MCURS



// 0xe822: db 0xd4 0x00 '  '

// ================================================
// 0xe824: WORD 'UNK_0xe826' codep=0x224c parp=0xe826
// ================================================

void UNK_0xe826() // UNK_0xe826
{
  _gt_R(); // >R
  _gt_R(); // >R
  _gt_R(); // >R
  DUP(); // DUP
  Push(h); // I
  SWAP(); // SWAP
  Push(g); // J
  OVER(); // OVER
  LLINE(); // LLINE
  Push(h); // I
  OVER(); // OVER
  Push(h); // I
  Push(h); // I'
  LLINE(); // LLINE
  Push(h); // I
  Push(h); // I'
  Push(g); // J
  Push(h); // I'
  LLINE(); // LLINE
  Push(g); // J
  Push(h); // I'
  ROT(); // ROT
  Push(g); // J
  SWAP(); // SWAP
  LLINE(); // LLINE
  R_gt_(); // R>
  Pop(); // DROP
  R_gt_(); // R>
  R_gt_(); // R>
  Pop(); Pop();// 2DROP
}

// 0xe864: db 0x4c 0x22 0x2e 0x0f 0x6a 0x5d 0x23 0x6d 0x90 0x16 0x4c 0x22 0xb8 0x3b 0x6a 0x5d 0x23 0x6d 0x90 0x16 0x4c 0x22 0x64 0xe8 0x2e 0x0f 0x5d 0x17 0x22 0xb8 0xd9 0x84 0x6e 0xe8 0x90 0x16 0x4c 0x22 0x64 0xe8 0x20 0x0f 0x5d 0x17 0x22 0xb8 0xd9 0x84 0x6e 0xe8 0x90 0x16 0x14 0x22 0x15 0x00 'L". j]#m  L" ;j]#m  L"d . ] "   n   L"d   ] "   n    "  '

// ================================================
// 0xe89c: WORD 'UNK_0xe89e' codep=0x7394 parp=0xe89e
// ================================================
// 0xe89e: db 0x15 0x00 0x10 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xe8a4: WORD 'UNK_0xe8a6' codep=0x224c parp=0xe8a6
// ================================================

void UNK_0xe8a6() // UNK_0xe8a6
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe8ac: WORD 'UNK_0xe8ae' codep=0x224c parp=0xe8ae
// ================================================

void UNK_0xe8ae() // UNK_0xe8ae
{
  Push(pp__ro_THING_rc_); // (THING)
  _at__gt_C_plus_S(); // @>C+S
}

// 0xe8b4: db 0x4c 0x22 0xd0 0x63 0x2f 0x7a 0x90 0x16 'L" c/z  '

// ================================================
// 0xe8bc: WORD 'UNK_0xe8be' codep=0x224c parp=0xe8be
// ================================================

void UNK_0xe8be() // UNK_0xe8be
{
  RED(); // RED
}


// ================================================
// 0xe8c2: WORD 'UNK_0xe8c4' codep=0x224c parp=0xe8c4
// ================================================

void UNK_0xe8c4() // UNK_0xe8c4
{
  Push(0x000a);
  Push(2); // 2
  Push(2); // 2
  Push(0x009d);
  BLACK(); // BLACK
  POLY_minus_WI(); // POLY-WI
  UNK_0xe8be(); // UNK_0xe8be
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(1); // 1
  Push(1); // 1
  Push(0x000b);
  Push(0x0035);
  UNK_0xe826(); // UNK_0xe826
  Push(1); // 1
  Push(0x0035);
  Push(0x000b);
  Push(0x006a);
  UNK_0xe826(); // UNK_0xe826
  Push(1); // 1
  Push(0x006a);
  Push(0x000b);
  Push(0x009e);
  UNK_0xe826(); // UNK_0xe826
}

// 0xe90c: db 0x94 0x73 0x44 0x00 0x14 0x22 0x07 0x6f 0x94 0x73 0x44 0x14 0x02 0x22 0x07 0x6f 0x94 0x73 0x09 0x00 0x18 0x1b 0x54 0x6a 0x94 0x73 0x09 0x18 0x02 0x1b 0x54 0x6a 0x4c 0x22 0xac 0xe8 0x5d 0x17 0xce 0xa9 0x0d 0x7d 0xdf 0x79 0x90 0x16 ' sD  " o sD  " o s    Tj s    TjL"  ]    } y  '

// ================================================
// 0xe93a: WORD 'UNK_0xe93c' codep=0x224c parp=0xe93c
// ================================================

void UNK_0xe93c() // UNK_0xe93c
{
  LT_minus_BLUE(); // LT-BLUE
}


// ================================================
// 0xe940: WORD 'UNK_0xe942' codep=0x224c parp=0xe942
// ================================================

void UNK_0xe942() // UNK_0xe942
{
  WHITE(); // WHITE
}

// 0xe946: db 0x4c 0x22 0x0c 0x50 0x90 0x16 0x4c 0x22 0x46 0xe9 0x9d 0x86 0x90 0x16 0x4c 0x22 0x53 0x50 0x90 0x16 0x4c 0x22 0x53 0x50 0x90 0x16 0x4c 0x22 0x48 0x50 0x90 0x16 0x4c 0x22 0x3c 0x50 0x90 0x16 'L" P  L"F     L"SP  L"SP  L"HP  L"<P  '

// ================================================
// 0xe96c: WORD 'UNK_0xe96e' codep=0x224c parp=0xe96e
// ================================================

void UNK_0xe96e() // UNK_0xe96e
{
  BLUE(); // BLUE
}

// 0xe972: db 0x4c 0x22 0x0c 0x50 0x90 0x16 'L" P  '

// ================================================
// 0xe978: WORD 'UNK_0xe97a' codep=0x224c parp=0xe97a
// ================================================

void UNK_0xe97a() // UNK_0xe97a
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe8be(); // UNK_0xe8be
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(0); // 0
  Push(0x00c7);
  Push(0x009f);
  UNK_0xe826(); // UNK_0xe826
  UNK_0xe8c4(); // UNK_0xe8c4
  Push(0x0086);
  Push(cc__3); // 3
  Push(0x00c6);
  Push(0x0035);
  UNK_0xe826(); // UNK_0xe826
  Push(0x0086);
  Push(1); // 1
  Push(0x00c6);
  Push(2); // 2
  UNK_0xe826(); // UNK_0xe826
  Push(0x0086);
  Push(0x0038);
  Push(0x00c6);
  Push(0x009e);
  UNK_0xe826(); // UNK_0xe826
  Push(0x0086);
  Push(0x0036);
  Push(0x00c6);
  Push(0x0037);
  UNK_0xe826(); // UNK_0xe826
}


// ================================================
// 0xe9d6: WORD 'MCURS' codep=0x1d29 parp=0xe9e0
// ================================================
// 0xe9e0: db 0x02 0x0a 0x02 0x09 0x33 0x0a 0x36 0x09 0x34 0x0a 0x6b 0x09 0x33 '    3 6 4 k 3'

// ================================================
// 0xe9ed: WORD 'UNK_0xe9ef' codep=0x224c parp=0xe9ef
// ================================================

void UNK_0xe9ef() // UNK_0xe9ef
{
  Push(2); // 2
  Push(pp_WLEFT); // WLEFT
  _ex_(); // !
  Push(0x000d);
  DUP(); // DUP
  Push(pp_WBOTTOM); // WBOTTOM
  _ex_(); // !
  Push(pp_CTBOT); // CTBOT
  _ex_(); // !
  Push(0x0084);
  DUP(); // DUP
  Push(pp_WTOP); // WTOP
  _ex_(); // !
  Push(Pop()-1); // 1-
  Push(pp_CTTOP); // CTTOP
  _ex_(); // !
  Push(0x00a0);
  Push(pp_WRIGHT); // WRIGHT
  _ex_(); // !
  Push(0x0010);
  Push(pp_WLINES); // WLINES
  _ex_(); // !
  Push(0x0026);
  Push(pp_WCHARS); // WCHARS
  _ex_(); // !
}


// ================================================
// 0xea2d: WORD 'UNK_0xea2f' codep=0x224c parp=0xea2f
// ================================================

void UNK_0xea2f() // UNK_0xea2f
{
  UNK_0xe93c(); // UNK_0xe93c
  Push(pp_CRSCOLO); // CRSCOLO
  _ex_(); // !
  DUP(); // DUP
  Push(pp_NCRS); // NCRS
  _ex_(); // !
  Push(pp_OCRS); // OCRS
  _ex_(); // !
  Push(pp_MCURS); // MCURS
  BLD_minus_CRS(); // BLD-CRS
}


// ================================================
// 0xea45: WORD 'UNK_0xea47' codep=0x224c parp=0xea47
// ================================================

void UNK_0xea47() // UNK_0xea47
{
  Push(0); // 0
  UNK_0xea2f(); // UNK_0xea2f
}

// 0xea4d: db 0x4c 0x22 0x2e 0x0f 0x2d 0xea 0x90 0x16 'L". -   '

// ================================================
// 0xea55: WORD 'UNK_0xea57' codep=0x224c parp=0xea57
// ================================================

void UNK_0xea57() // UNK_0xea57
{
  UNK_0xe8c4(); // UNK_0xe8c4
  _gt_1FONT(); // >1FONT
  UNK_0xe942(); // UNK_0xe942
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0013);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("BUY", 3); // (.")
  Push(0x0048);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("SELL", 4); // (.")
  Push(0x007d);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("EXIT", 4); // (.")
  UNK_0xea47(); // UNK_0xea47
}

// 0xea93: db 0x4c 0x22 0xc2 0xe8 0x7e 0x8a 0x40 0xe9 0x9d 0x86 0x54 0x5a 0x65 0x6d 0x5d 0x17 0x11 0x00 0xa7 0x3b 0x7b 0x9a 0xdc 0x1b 0x05 0x41 0x47 0x52 0x45 0x45 0x5d 0x17 0x42 0x00 0xa7 0x3b 0x7b 0x9a 0xdc 0x1b 0x07 0x43 0x4f 0x55 0x4e 0x54 0x45 0x52 0x5d 0x17 0x79 0x00 0xa7 0x3b 0x7b 0x9a 0xdc 0x1b 0x06 0x52 0x45 0x46 0x55 0x53 0x45 0x4d 0xea 0x90 0x16 'L"  ~ @   TZem]    ;{    AGREE] B  ;{    COUNTER] y  ;{    REFUSEM   '

// ================================================
// 0xead8: WORD 'UNK_0xeada' codep=0x224c parp=0xeada
// ================================================

void UNK_0xeada() // UNK_0xeada
{
  Push(0x003a);
  Push(0x00c3);
  POS_dot_(); // POS.
  PRINT("YOU ARE ", 8); // (.")
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(pp_SELLING); // SELLING
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  PRINT("SELLING", 7); // (.")
  goto label3;

  label1:
  PRINT("BUYING", 6); // (.")

  label3:
  _ex_COLOR(); // !COLOR
  Push(0x003a);
  Push(0x00b5);
  POS_dot_(); // POS.
  Push(0x0018);
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
  Push(pp_SELLING); // SELLING
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  PRINT("TO ", 3); // (.")
  return;

  label2:
  PRINT("FROM ", 5); // (.")
}


// ================================================
// 0xeb46: WORD 'UNK_0xeb48' codep=0x224c parp=0xeb48
// ================================================

void UNK_0xeb48() // UNK_0xeb48
{
  UNK_0xe8a6(); // UNK_0xe8a6
  UNK_0xe89e(); // UNK_0xe89e
  Push(0x0010);
  TYPE(); // TYPE
  ICLOSE(); // ICLOSE
}

// 0xeb56: db 0x4c 0x22 0x0f 0x65 0x83 0x4a 0x90 0x16 0x4c 0x22 0x56 0xeb 0x1f 0x7a 0x66 0xaa 0x83 0x4a 0xdf 0x79 0x1f 0x7a 0x90 0x16 0x4c 0x22 0x5e 0xeb 0x8b 0x75 0xdf 0x79 0x90 0x16 'L" e J  L"V  zf  J y z  L"^  u y  '

// ================================================
// 0xeb78: WORD 'UNK_0xeb7a' codep=0x224c parp=0xeb7a
// ================================================

void UNK_0xeb7a() // UNK_0xeb7a
{
  Push(0x003a);
  Push(0x008d);
  POS_dot_(); // POS.
  Push(0x0018);
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
  UNK_0xe96e(); // UNK_0xe96e
  _ex_COLOR(); // !COLOR
  PRINT("BALANCE: ", 9); // (.")
  UNK_0xe942(); // UNK_0xe942
  _ex_COLOR(); // !COLOR
  Push(0xc285);
  MODULE(); // MODULE
  D_dot_(); // D.
  UNK_0xe96e(); // UNK_0xe96e
  _ex_COLOR(); // !COLOR
  PRINT("SP", 2); // (.")
}

// 0xebb3: db 0x4c 0x22 0x6e 0xeb 0x6f 0x64 0x83 0x4a 0x07 0x40 0x90 0x16 0x4c 0x22 0x6e 0xeb 0x11 0x6c 0x07 0x40 0x90 0x16 0x4c 0x22 0xb3 0xeb 0xfa 0x15 0x0a 0x00 0xe0 0x5f 0x57 0x6d 0x60 0x16 0x0c 0x00 0xbf 0xeb 0xfa 0x15 0x06 0x00 0xe0 0x5f 0x65 0x6d 0xb4 0xe8 0x56 0xeb 0x1f 0x7a 0xb1 0x7a 0x8b 0x75 0x0f 0x65 0x32 0x6d 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0xb3 0xeb 0xfa 0x15 0x0a 0x00 0xe0 0x5f 0x65 0x6d 0x60 0x16 0x0c 0x00 0xbf 0xeb 0xfa 0x15 0x06 0x00 0xe0 0x5f 0x57 0x6d 0xb4 0xe8 0x56 0xeb 0x1f 0x7a 0xc9 0x7a 0x8b 0x75 0x0f 0x65 0x32 0x6d 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x5d 0x17 0x2e 0x00 0xb6 0x5d 0x16 0x6d 0x8f 0x3b 0x5d 0x17 0xfd 0xb6 0xd9 0x84 0xdb 0x23 0x92 0x0c 0x89 0x12 0xfa 0x15 0x0a 0x00 0x32 0x0e 0xb8 0x3b 0x60 0x16 0x1e 0x00 0x5d 0x17 0x00 0x00 0xdb 0x23 0x41 0x0e 0x92 0x0c 0xe7 0x0f 0x72 0x0f 0x16 0x6d 0xb7 0x06 0x16 0x16 0xe8 0xfd 0x00 0x00 0x42 0x40 0x32 0x0e 0x90 0x16 0x4c 0x22 0x00 0x62 0xae 0x0b 0xfa 0x15 0x08 0x00 0x5a 0xe9 0x60 0x16 0x04 0x00 0x54 0xe9 0x9d 0x86 0x90 0x16 'L"n od J @  L"n  l @  L"       _Wm`          _em  V  z z u e2m=  z  L"       _em`          _Wm  V  z z u e2m=  z  L"] .  ] m ;]      #        2  ;`   ]    #A     r  m        B@2   L" b      Z `   T     '

// ================================================
// 0xec7d: WORD 'C>VAL' codep=0x4b3b parp=0xec87
// ================================================
// 0xec87: db 0x04 0x00 0x6e 0x3a 0x1c 0x00 0x8e 0xa9 0x1a 0x00 0x6a 0xa9 0x44 0x00 0x16 0xe9 0x09 0x00 0x26 0xe9 '  n:      j D     & '

// ================================================
// 0xec9b: WORD 'UNK_0xec9d' codep=0x224c parp=0xec9d
// ================================================

void UNK_0xec9d() // UNK_0xec9d
{
  Push(0xa9ce);
  IFLD_at_(); // IFLD@
  Push(0x000a);
  _slash_(); // /
  Push(0x0064);
  M_star_(); // M*
  _at_INST_minus_C(); // @INST-C
  C_gt_VAL(); // C>VAL
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xecc3: WORD 'UNK_0xecc5' codep=0x224c parp=0xecc5
// ================================================

void UNK_0xecc5() // UNK_0xecc5
{
  Push(0x007a);
  Push(0x00aa);
  POS_dot_(); // POS.
  Push(cc__5); // 5
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
}


// ================================================
// 0xecd7: WORD 'UNK_0xecd9' codep=0x224c parp=0xecd9
// ================================================

void UNK_0xecd9() // UNK_0xecd9
{
  Push(0x003a);
  Push(0x00aa);
  POS_dot_(); // POS.
  _at_COLOR(); // @COLOR
  UNK_0xe96e(); // UNK_0xe96e
  _ex_COLOR(); // !COLOR
  PRINT("S.T.V. RATING =", 15); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xecff: WORD 'UNK_0xed01' codep=0x224c parp=0xed01
// ================================================

void UNK_0xed01() // UNK_0xed01
{
  UNK_0xecc5(); // UNK_0xecc5
  _at_INST_minus_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _at_COLOR(); // @COLOR
  UNK_0xe942(); // UNK_0xe942
  _ex_COLOR(); // !COLOR
  UNK_0xec9d(); // UNK_0xec9d
  U_dot_(); // U.
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("%", 1); // (.")
  _ex_COLOR(); // !COLOR
}

// 0xed2b: db 0x4c 0x22 0x5e 0xeb 0xff 0xec 0xdf 0x79 0x90 0x16 'L"^    y  '

// ================================================
// 0xed35: WORD 'T>NAME' codep=0x4b3b parp=0xed40
// ================================================
// 0xed40: db 0x04 0x00 0x48 0x3a 0x1c 0x00 0x7c 0xa9 0x44 0x00 0x0e 0xe9 0x09 0x00 0x1e 0xe9 0x1a 0x00 0x58 0xa9 0x14 0x22 0x10 0x00 0x14 0x22 0x14 0x00 0x14 0x22 0x18 0x00 '  H:  | D         X  "   "   "  '

// ================================================
// 0xed60: WORD 'TLEN' codep=0x4b3b parp=0xed69
// ================================================
// 0xed69: db 0x02 0x00 0x5e 0xed 0x1a 0x00 0x56 0xed 0x44 0x00 0x5a 0xed '  ^   V D Z '

// ================================================
// 0xed75: WORD 'UNK_0xed77' codep=0x224c parp=0xed77
// ================================================

void UNK_0xed77() // UNK_0xed77
{
  _at_INST_minus_C(); // @INST-C
  DUP(); // DUP
  T_gt_NAME(); // T>NAME
  SWAP(); // SWAP
  TLEN(); // TLEN
  Push(0x002e);
  _minus_XTRAIL(); // -XTRAIL
  Push(0x003a);
  Push(0x00bc);
  POS_dot_(); // POS.
  TYPE(); // TYPE
}


// ================================================
// 0xed95: WORD 'UNK_0xed97' codep=0x224c parp=0xed97
// ================================================

void UNK_0xed97() // UNK_0xed97
{
  Push(0x00c5);
  Push(0x0039);
  Push(0x0087);
  Push(0x009d);
  BLACK(); // BLACK
  POLY_minus_WI(); // POLY-WI
}


// ================================================
// 0xedad: WORD 'UNK_0xedaf' codep=0x224c parp=0xedaf
// ================================================

void UNK_0xedaf() // UNK_0xedaf
{
  UNK_0xed97(); // UNK_0xed97
  UNK_0xe8ae(); // UNK_0xe8ae
  CI(); // CI
  _0_dot_(); // 0.
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_1FONT(); // >1FONT
  UNK_0xe96e(); // UNK_0xe96e
  _ex_COLOR(); // !COLOR
  if (Pop() == 0) goto label1;
  UNK_0xeada(); // UNK_0xeada
  UNK_0xeb48(); // UNK_0xeb48
  UNK_0xed77(); // UNK_0xed77
  UNK_0xecd9(); // UNK_0xecd9
  UNK_0xed01(); // UNK_0xed01
  goto label2;

  label1:
  Push(0x003a);
  Push(0x00b5);
  POS_dot_(); // POS.
  UNK_0xeb48(); // UNK_0xeb48

  label2:
  UNK_0xeb7a(); // UNK_0xeb7a
  ICLOSE(); // ICLOSE
}

// 0xede5: db 0x4c 0x22 0x83 0x5d 0xae 0x0b 0x65 0x6c 0xae 0x0b 0xf6 0x0f 0x7b 0x9a 0x7e 0x8a 0x90 0x16 0x4c 0x22 0xb4 0x0d 0x5d 0x17 0x85 0x00 0x2e 0x0f 0x5d 0x17 0x0c 0x00 0x5d 0x17 0x9e 0x00 0x90 0x0e 0x93 0x9b 0x90 0x16 0x4c 0x22 0xa7 0x4f 0xf7 0xed 0x90 0x16 0x4c 0x22 0x3d 0x0f 0x5d 0x17 0x83 0x00 0x5d 0x17 0x9e 0x00 0x5d 0x17 0x13 0x00 0x3d 0x0f 0x5d 0x17 0x84 0x00 0xe7 0x8f 0x90 0x16 0x4c 0x22 0x3d 0x0f 0x5d 0x17 0x84 0x00 0x5d 0x17 0x9e 0x00 0x58 0xed 0x3d 0x0f 0x5d 0x17 0x83 0x00 0xe7 0x8f 0x90 0x16 0x4c 0x22 0x9f 0x3b 0x20 0x0f 0xb8 0x15 0x17 0xee 0xd0 0x15 0xfc 0xff 0x90 0x16 0x4c 0x22 0x9f 0x3b 0x20 0x0f 0xb8 0x15 0x31 0xee 0xd0 0x15 0xfc 0xff 0x90 0x16 0x4c 0x22 0x98 0x9e 0x90 0x16 0x4c 0x22 0x69 0xee 0x78 0x9f 0x83 0x5d 0xae 0x0b 0x46 0x5a 0x16 0x6d 0xe6 0x06 0x90 0x16 0x29 0x1d 0x3a 0x20 0x4c 0x22 0x00 0x62 0xae 0x0b 0xfa 0x15 0x08 0x00 0x66 0xe9 0x60 0x16 0x04 0x00 0x60 0xe9 0x9d 0x86 0x90 0x16 0x4c 0x22 0xb4 0x0d 0x88 0x9d 0x2e 0x0f 0x90 0x0e 0x7b 0x9a 0xc4 0xa7 0x75 0x5a 0xe9 0x4c 0x9f 0x3b 0x5f 0x5a 0xe9 0x4c 0x5d 0x17 0x9e 0x00 0x6a 0x5a 0xe9 0x4c 0x85 0xee 0x2e 0x0f 0x54 0x5a 0xe9 0x4c 0xbd 0x8b 0xbd 0x9d 0x54 0x5a 0x72 0x49 0x90 0x16 0x4c 0x22 0x5d 0x17 0x83 0x00 0x81 0xee 0xae 0x0b 0x9f 0x3b 0xb3 0x0f 0x92 0x0f 0x9b 0xee 0x90 0x16 0x4c 0x22 0x78 0x9f 0x6c 0xe9 0x9d 0x86 0xdc 0x1b 0x24 0x20 0x53 0x43 0x52 0x4f 0x4c 0x4c 0x20 0x43 0x55 0x52 0x53 0x4f 0x52 0x3a 0x20 0x5e 0x5c 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x51 0x55 0x49 'L" ]  el    { ~   L"  ]   . ]   ]         L" O    L"= ]   ]   ]   = ]       L"= ]   ]   X = ]       L" ;            L" ;    1       L"    L"i x  ]  FZ m    ) : L" b      f `   `     L"    .   {   uZ L ;_Z L]   jZ L  . TZ L    TZrI  L"]        ;        L"x l     $ SCROLL CURSOR: ^\          QUI'

// ================================================
// 0xef0b: WORD 'UNK_0xef0d' codep=0x3a54 parp=0xef0d
// ================================================
// 0xef0d: db 0x20 0x5b 0x5d 0x90 0x16 0x4c 0x22 0x54 0x5a 0x65 0x6d 0x0f 0xee 0x67 0xec 0xe5 0xed 0xb4 0xe8 0x3f 0x7a 0xb0 0x5e 0xae 0x0b 0x90 0x5d 0xae 0x0b 0xad 0x11 0x20 0x0f 0xb8 0x15 0x75 0xaa 0x9d 0x5d 0xae 0x0b 0xe6 0x06 0x1c 0x9f 0xb1 0x7a 0xd0 0x15 0xf2 0xff 0xe2 0x7a 0x8b 0x75 0x0f 0x65 0x32 0x6d 0x3d 0x0f 0x0a 0x7a 0x81 0xee 0x65 0x6d 0xcd 0xee 0xe1 0xee 0x90 0x16 0x4c 0x22 0x5e 0xeb 0x22 0x75 0x5d 0x17 0x0b 0x00 0x5f 0x12 0x07 0x13 0x8b 0x75 0x3e 0x13 0x89 0x12 0x89 0x12 0xf5 ' []  L"TZem  g     ?z ^   ]        u  ]       z     z u e2m=  z  em      L"^ "u]   _    u>      '
// 0xef6d: adc    bl,bh
// 0xef6f: jns    EF01
// 0xef71: push   ss
// 0xef72: dec    sp
// 0xef73: and    dl,[bp-11]
// 0xef76: cli    
// 0xef77: adc    ax,0008
// 0xef7a: sub    bp,bp
// 0xef7c: db     60
// 0xef7d: push   ss
// 0xef7e: add    al,00
// 0xef80: ret    

// 0xef81: db 0xec 0x90 0x16 0x4c 0x22 0x81 0xee 0xae 0x0b 0x89 0x12 0x90 0x16 0x4c 0x22 0x81 0xee 0xae 0x0b 0x5d 0x17 0x0f 0x00 0x5f 0x12 0x90 0x16 0x4c 0x22 0xcd 0xee 0xb8 0x3b 0x81 0xee 0x23 0x6d 0xcd 0xee 0xf7 0xeb 0x90 0x16 0x4c 0x22 0xcd 0xee 0x2e 0x0f 0x81 0xee 0x23 0x6d 0xcd 0xee 0xc9 0xeb 0x90 0x16 0x4c 0x22 0x67 0xec 0x56 0xeb 0x1f 0x7a 0x75 0xaa 0x5d 0x17 0x26 0x00 0xe6 0x06 0xdf 0x79 0x90 0x16 0x4c 0x22 0x56 0xeb 0x07 0x40 0x90 0x16 0x4c 0x22 0xb4 0xe8 0x3f 0x7a 0x90 0x16 0x4c 0x22 0xd8 0xef 0xe2 0x7a 0x8b 0x75 0x3d 0x0f 0x0a 0x7a 0xd0 0xef 0x90 0x16 0x4c 0x22 0xd8 0xef 0xf4 0x7a 0x8b 0x75 0x3d 0x0f 0x0a 0x7a 0xd0 0xef 0xb0 0x5e 0xae 0x0b 0x2e 0x0f 0x5f 0x12 0x3e 0x13 0x90 0x16 0x4c 0x22 0xcd 0xee 0x49 0xee 0xc9 0xeb 0x78 0x9f 0xc1 0x3b 0x46 0x5a 0x23 0x6d 0x9f 0x3b 0x3b 0x5a 0x23 0x6d 0xbc 0xef 0xcd 0xee 0x90 0x16 0x4c 0x22 0xcd 0xee 0x59 0xee 0xf7 0xeb 0xe5 0xed 0xbc 0xef 0xcd 0xee 0x90 0x16 0x4c 0x22 0x84 0xef 0xfa 0x15 0x10 0x00 0xe0 0xef 0x07 0x13 0xfa 0x15 0x04 0x00 0x26 0xf0 0x60 0x16 0x04 0x00 0x9c 0xef 0x72 0xef 0x90 0x16 0x4c 0x22 0x8e 0xef 0xfa 0x15 0x10 0x00 0xf0 0xef 0x07 0x13 0xfa 0x15 0x04 0x00 0x0a 0xf0 0x60 0x16 0x0c 0x00 0xf0 0xef 0x07 0x13 0xfa 0x15 0x04 0x00 0xac 0xef 0x72 0xef 0x90 0x16 0x4c 0x22 0xd7 0xec 0x16 0xa6 0x0b 0x5e 0xae 0x0b 0x56 0xef 0xf5 0x12 0x17 0x5e 0xae 0x0b 0x3e 0x13 0x07 0x13 0xfa 0x15 0x1c 0x00 0x32 0x0e 0xc8 0x0d 0xfa 0x15 0x10 0x00 0x78 0x12 0xfa 0x15 0x08 0x00 0x52 0xf0 0x60 0x16 0x04 0x00 0x36 0xf0 0x60 0x16 0xd2 0xff 0xde 0x0d 0x48 0xa6 0xfa 0x15 0x08 0x00 0xc4 0x52 0x60 0x16 0x08 0x00 0x5e 0xeb 0x8b 0x75 0xdf 0x79 0x10 0x6a 0x32 0x6d 0x90 0x16 '   L"        L"    ]   _   L"   ;  #m      L"  .   #m      L"g V  zu ] &    y  L"V  @  L"  ?z  L"   z u=  z    L"   z u=  z   ^  . _ >   L"  I   x  ;FZ#m ;;Z#m      L"  Y           L"              & `     r   L"                `             r   L"     ^  V    ^  >       2       x     R `   6 `     H      R`   ^  u y j2m  '

// ================================================
// 0xf0c4: WORD 'UNK_0xf0c6' codep=0x224c parp=0xf0c6
// ================================================

void UNK_0xf0c6() // UNK_0xf0c6
{
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0017);
  IFIND(); // IFIND
  Pop(); // DROP
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf0d8: WORD 'UNK_0xf0da' codep=0x224c parp=0xf0da
// ================================================

void UNK_0xf0da() // UNK_0xf0da
{
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0028);
  IFIND(); // IFIND
  Pop(); // DROP
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf0ec: WORD 'UNK_0xf0ee' codep=0x224c parp=0xf0ee
// ================================================

void UNK_0xf0ee() // UNK_0xf0ee
{
  Push(pp_SUPER_minus_B); // SUPER-B
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf0da(); // UNK_0xf0da
  _star_4SALE(); // *4SALE
  IINSERT(); // IINSERT
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xf0c6(); // UNK_0xf0c6
  _star_4SALE(); // *4SALE
  IINSERT(); // IINSERT
  Push(cc__4); // 4
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf108: WORD 'UNK_0xf10a' codep=0x224c parp=0xf10a
// ================================================

void UNK_0xf10a() // UNK_0xf10a
{
  _star_4SALE(); // *4SALE
  _gt_C_plus_S(); // >C+S
  UNK_0xf0da(); // UNK_0xf0da
  Push(pp_SUPER_minus_B); // SUPER-B
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _gt_INSERT(); // >INSERT
  Push(cc__4); // 4
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x224c parp=0xf122
// ================================================

void UNK_0xf122() // UNK_0xf122
{
  _star_4SALE(); // *4SALE
  _gt_C_plus_S(); // >C+S
  UNK_0xf0c6(); // UNK_0xf0c6
  _star_SHIP(); // *SHIP
  IINSERT(); // IINSERT
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf132: WORD 'UNK_0xf134' codep=0x224c parp=0xf134
// ================================================

void UNK_0xf134() // UNK_0xf134
{
  UNK_0xf10a(); // UNK_0xf10a
  UNK_0xf122(); // UNK_0xf122
}

// 0xf13a: db 0x4c 0x22 0x5d 0x17 0xc5 0x00 0x87 0x3b 0x5d 0x17 0x87 0x00 0x5d 0x17 0x34 0x00 0xa7 0x4f 0x93 0x9b 'L"]    ;]   ] 4  O  '

// ================================================
// 0xf14e: WORD 'UNK_0xf150' codep=0x1690 parp=0xf150
// ================================================
// 0xf150: db 0x4c 0x22 0x34 0x75 0x41 0x0e 0xb4 0x0d 0xa2 0x0e 0x5d 0x17 0x0e 0x00 0x2d 0x12 0xfa 0x15 0x06 0x00 0x7f 0x3b 0x92 0x0f 0xa2 0x0e 0x5d 0x17 0x28 0x00 0x2d 0x12 0xfa 0x15 0x06 0x00 0x3d 0x0f 0x92 0x0f 0xa2 0x0e 0x5d 0x17 0x2e 0x00 0x5d 0x17 0x34 0x00 0x25 0x40 0xfa 0x15 0x08 0x00 0x32 0x0e 0x5d 0x17 0x29 0x00 0x90 0x0e 0x5d 0x17 0x33 0x00 0x2d 0x12 0xfa 0x15 0x06 0x00 0x8f 0x3b 0x92 0x0f 0x90 0x16 0x4c 0x22 0x34 0x75 0x5d 0x17 0x2d 0x00 0x72 0x0f 0x90 0x16 0x4c 0x22 0x34 0x75 0x97 0x3b 0x5f 0x12 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x47 0x00 0x60 0x16 0x06 0x00 0x5d 0x17 0x45 0x00 0x90 0x16 0x14 0x22 0x46 0x00 'L"4uA     ]   -     ;    ] ( -     =     ] . ] 4 %@    2 ] )   ] 3 -      ;    L"4u] - r   L"4u ;_     ] G `   ] E    "F '

// ================================================
// 0xf1ca: WORD 'ID>#' codep=0x4b3b parp=0xf1d3
// ================================================
// 0xf1d3: db 0x04 0x00 0x22 0x0f 0x1c 0x00 0x52 0xf1 0x09 0x00 0xa2 0xf1 0x1a 0x00 0xae 0xf1 0x44 0x00 0xc8 0xf1 0x4c 0x22 0x3a 0xf1 0x5f 0x54 0x65 0x6d 0x10 0x6a 0x2f 0x7a 0x22 0x75 0xd1 0xf1 0xc8 0x0d 0xfa 0x15 0x0a 0x00 0xf6 0x0f 0x5d 0x17 0xd8 0xb9 0xd9 0x84 0xdf 0x79 0x90 0x16 '  "   R         D   L": _Tem j/z"u          ]      y  '

// ================================================
// 0xf209: WORD 'UNK_0xf20b' codep=0x224c parp=0xf20b
// ================================================

void UNK_0xf20b() // UNK_0xf20b
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_minus_S(); // @INST-S
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf215: WORD 'UNK_0xf217' codep=0x224c parp=0xf217
// ================================================

void UNK_0xf217() // UNK_0xf217
{
  UNK_0xf20b(); // UNK_0xf20b
  Push(0xb9e8);
  MODULE(); // MODULE
}

// 0xf221: db 0x4c 0x22 0x7e 0x8a 0x5d 0x17 0x3a 0x00 0x5d 0x17 0x9c 0x00 0x7b 0x9a 0x5c 0xed 0xa7 0x4f 0x00 0x9e 0x6c 0xe9 0x9d 0x86 0x54 0x5a 0x65 0x6d 0xdc 0x1b 0x04 0x4e 0x45 0x57 0x20 0x00 0x62 0xae 0x0b 0xfa 0x15 0x0e 0x00 0xdc 0x1b 0x05 0x50 0x52 0x49 0x43 0x45 0x60 0x16 0x0a 0x00 0xdc 0x1b 0x05 0x4f 0x46 0x46 0x45 0x52 0xdc 0x1b 0x03 0x20 0x3d 0x20 0x40 0xe9 0x9d 0x86 0x90 0x16 0x4c 0x22 0x5d 0x17 0x72 0xc4 0xd9 0x84 0x3d 0x61 0xae 0x0b 0xf6 0x0f 0x20 0x0f 0x89 0x11 0x3d 0x61 0x16 0x6d 0x21 0xf2 0x25 0xec 0x41 0x0e 0xe7 0x0f 0xfa 0x15 0x0a 0x00 0x27 0x62 0x16 0x6d 0x60 0x16 0x04 0x00 0x32 0x0e 0x3d 0x0f 0x5d 0x17 0x62 0xc4 0xd9 0x84 0x90 0x16 'L"~ ] : ]   { \  O  l   TZem   NEW  b         PRICE`      OFFER    = @     L"] r   =a        =a m! % A       'b m`   2 = ] b     '

// ================================================
// 0xf2a2: WORD 'UNK_0xf2a4' codep=0x224c parp=0xf2a4
// ================================================

void UNK_0xf2a4() // UNK_0xf2a4
{

  label2:
  XYSCAN(); // XYSCAN
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  Pop(); // DROP
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(2); // 2
  MIN(); // MIN
  Push(pp_NCRS); // NCRS
  _ex_(); // !
  Push(pp_MCURS); // MCURS
  SET_minus_CRS(); // SET-CRS
  Pop(); // DROP
  goto label2;

  label1:
  Pop(); Pop();// 2DROP
}

// 0xf2d2: db 0x4c 0x22 0x2c 0xe9 0x00 0x62 0xae 0x0b 0xfa 0x15 0x0a 0x00 0x7f 0x3b 0xb3 0x0f 0x60 0x16 0x06 0x00 0x7f 0x3b 0x4c 0x0f 0x27 0x62 0x16 0x6d 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x62 0xc4 0xd9 0x84 0x90 0x16 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x62 0xc4 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0xd0 0x07 0x16 0x26 0xe2 0x9c 0x5d 0x17 0x32 0x00 0xef 0x2a 0x51 0x26 0x90 0x16 'L",  b      ;  `   ;L 'b m  L". ] b     L"  ] b     L"]    &  ] 2  *Q&  '

// ================================================
// 0xf31c: WORD 'P>REPLY' codep=0x4b3b parp=0xf328
// ================================================
// 0xf328: db 0x03 0x00 0x48 0x3a 0x00 0x00 0xf2 0xf2 0x01 0x00 0x6e 0xf2 0x02 0x00 0xfe 0xf2 0x4c 0x22 0x93 0xea 0xa2 0xf2 0x08 0xf3 0x46 0x5d 0xae 0x0b 0x26 0xf3 0xc2 0xe8 0x90 0x16 0x4c 0x22 0x0e 0x62 0xae 0x0b 0x1b 0x62 0xae 0x0b 0xf5 0x12 0xfa 0x15 0x04 0x00 0x38 0xf3 0x90 0x16 0x4c 0x22 0x0e 0x62 0xae 0x0b 0xfa 0x15 0x1e 0x00 0x5d 0x17 0x4e 0xc4 0xd9 0x84 0x88 0xe8 0x0e 0x62 0xae 0x0b 0xfa 0x15 0x08 0x00 0xac 0xe8 0xff 0xec 0xdf 0x79 0x4a 0xf3 0x60 0x16 0xde 0xff 0x78 0xe8 0x90 0x16 0x4c 0x22 0xb9 0x5f 0xae 0x0b 0x07 0x13 0xfa 0x15 0x1c 0x00 0x5d 0x17 0x3a 0xc4 0xd9 0x84 0x88 0xe8 0x1b 0x62 0x57 0x6d 0x0e 0x62 0xae 0x0b 0xfa 0x15 0x08 0x00 0xd2 0xf2 0x38 0xf3 0x5e 0xf3 0x07 0x3f 0x01 0x20 0x6f 0xee 0x90 0x16 0x4c 0x22 0x0f 0xee 0x03 0xb9 0xef 0xb8 0xcb 0x5e 0x65 0x6d 0x12 0xef 0x76 0xf0 0x17 0xb9 0xcb 0x5e 0x57 0x6d 0xc4 0x52 0xd0 0x63 0x32 0x6d 0xad 0xed 0x0f 0xee 0x10 0x6a 0x83 0x4a 0x3e 0x13 0xfa 0x15 0x08 0x00 0xe7 0xf1 0x88 0xf3 0x3a 0xf1 0x90 0x16 0x4c 0x22 0x00 0x62 0x57 0x6d 0x08 0xf3 0x8d 0x53 0xb6 0xf3 0x90 0x16 0x4c 0x22 0x00 0x62 0x65 0x6d 0x08 0xf3 0x20 0x6a 0xb6 0xf3 0x90 0x16 '  H:      n     L"      F]  &     L" b   b        8   L" b      ] N      b           yJ `   x   L" _        ] :      bWm b        8 ^  ?  o   L"       ^em  v    ^Wm R c2m     j J>         :   L" bWm   S    L" bem   j    '

// ================================================
// 0xf404: WORD 'UNK_0xf406' codep=0x224c parp=0xf406
// ================================================

void UNK_0xf406() // UNK_0xf406
{
  Push(pp_A_minus_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _st_(); // <
  if (Pop() == 0) goto label1;
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4129(); // UNK_0x4129
  UNK_0x5950(); // UNK_0x5950
  UNK_0x5022(); // UNK_0x5022
  UNK_0x5257(); // UNK_0x5257
  UNK_0x4845(); // UNK_0x4845
  UNK_0x5343(); // UNK_0x5343
  UNK_0x4447(); // UNK_0x4447
  UNK_0x4722(); // UNK_0x4722
  UNK_0x4f51(); // UNK_0x4f51
  UNK_0x5346(); // UNK_0x5346
  UNK_0x5722(); // UNK_0x5722
  UNK_0x4c4b(); // UNK_0x4c4b
  UNK_0x204e(); // UNK_0x204e
  UNK_0x4544(); // UNK_0x4544
  UNK_0x5422(); // UNK_0x5422
  UNK_0x4154(); // UNK_0x4154
  UNK_0x5350(); // UNK_0x5350
  UNK_0x4548(); // UNK_0x4548
  UNK_0x5254(); // UNK_0x5254
  UNK_0x4447(); // UNK_0x4447
  _dot_TTY(); // .TTY
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5428(); // UNK_0x5428
  UNK_0x2051(); // UNK_0x2051
  UNK_0x4f5b(); // UNK_0x4f5b
  UNK_0x5257(); // UNK_0x5257
  _star_ASSIGN(); // *ASSIGN
  UNK_0x494a(); // UNK_0x494a
  UNK_0x2e52(); // UNK_0x2e52
  UNK_0x5422(); // UNK_0x5422
  UNK_0x414a(); // UNK_0x414a
  UNK_0x4b50(); // UNK_0x4b50
  UNK_0x5922(); // UNK_0x5922
  UNK_0x5551(); // UNK_0x5551
  UNK_0x4122(); // UNK_0x4122
  _4TH_gt_DOS(); // 4TH>DOS
  WRITENE(); // WRITENE
  UNK_0x4d51(); // UNK_0x4d51
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4743(); // UNK_0x4743
  UNK_0x4943(); // UNK_0x4943
  UNK_0xf150(); // UNK_0xf150
  UNK_0x5da1(); // UNK_0x5da1
  UNK_0xb819(); // UNK_0xb819
  UNK_0xef0d(); // UNK_0xef0d
  UNK_0x5f2c(); // UNK_0x5f2c

  label1:
  Push(pp_PIC_n_); // PIC#
  _099(); // 099
}

// 0xf479: db 0x4c 0x22 0xb9 0x5f 0x57 0x6d 0x08 0xf3 0x90 0x16 'L" _Wm    '

// ================================================
// 0xf483: WORD 'UNK_0xf485' codep=0x224c parp=0xf485
// ================================================

void UNK_0xf485() // UNK_0xf485
{
  UNK_0xea57(); // UNK_0xea57
  UNK_0xf217(); // UNK_0xf217
  UNK_0xf2a4(); // UNK_0xf2a4
}


// ================================================
// 0xf48d: WORD 'T>ACTION' codep=0x4b3b parp=0xf49a
// ================================================
// 0xf49a: db 0x03 0x00 0x48 0x3a 0x00 0x00 0xf8 0xf3 0x01 0x00 0xea 0xf3 0x02 0x00 0x7b 0xf4 '  H:          { '

// ================================================
// 0xf4aa: WORD 'UNK_0xf4ac' codep=0x224c parp=0xf4ac
// ================================================

void UNK_0xf4ac() // UNK_0xf4ac
{

  label1:
  _0_dot_(); // 0.
  Push(pp__ro_THING_rc_); // (THING)
  _1_dot_5_ex_(); // 1.5!
  UNK_0xedaf(); // UNK_0xedaf
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(pp_TBOX); // TBOX
  _099(); // 099
  UNK_0xf485(); // UNK_0xf485
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  T_gt_ACTION(); // T>ACTION
  goto label1;
}


// ================================================
// 0xf4d0: WORD 'UNK_0xf4d2' codep=0x224c parp=0xf4d2
// ================================================

void UNK_0xf4d2() // UNK_0xf4d2
{
  Push(0xc261);
  MODULE(); // MODULE
  UNK_0xe9ef(); // UNK_0xe9ef
  UNK_0xe97a(); // UNK_0xe97a
  Push(0xba0a);
  MODULE(); // MODULE
  Push(0xc427);
  MODULE(); // MODULE
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0x0bb8);
  MS(); // MS

  label1:
  UNK_0xf4ac(); // UNK_0xf4ac
  UNK_0xe8c4(); // UNK_0xe8c4
  Push(cc__7); // 7
  Push(0xc273);
  MODULE(); // MODULE
}


// ================================================
// 0xf504: WORD 'TRADE' codep=0x224c parp=0xf50e
// ================================================

void TRADE() // TRADE
{
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0x0064);
  Push(pp__pe_VAL); // %VAL
  _ex_(); // !
  Push(cc__6); // 6
  Push(pp_CONTEXT); // CONTEXT
  _ex_(); // !
  Push(0xc024);
  MODULE(); // MODULE
  NULL(); // NULL
  Push(pp__ro_THING_rc_); // (THING)
  _1_dot_5_ex_(); // 1.5!
  UNK_0xf0ee(); // UNK_0xf0ee
  UNK_0xf4d2(); // UNK_0xf4d2
  UNK_0xf406(); // UNK_0xf406
  Push(0); // 0
  Push(pp_CONTEXT); // CONTEXT
  _ex_(); // !
  R_gt_(); // R>
  Push(pp__pe_VAL); // %VAL
  _ex_(); // !
  UNK_0xf134(); // UNK_0xf134
  Push(0xb6ec);
  MODULE(); // MODULE
}

// 0xf54a: db 0x4d 0x41 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MAR___________________ '
  