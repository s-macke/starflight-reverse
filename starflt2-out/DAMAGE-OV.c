// ====== OVERLAY 'DAMAGE-OV' ======
// store offset = 0xe6c0
// overlay size   = 0x0ea0

#include"cpu.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xa7cb C-string:'UNK_0x3f09'
// 1870:      UNK_0xe6d6  codep:0x224c parp:0xe6d6 size:0x0008 C-string:'UNK_0xe6d6'
// 1871:      UNK_0xe6e0  codep:0x224c parp:0xe6e0 size:0x0044 C-string:'UNK_0xe6e0'
// 1872:      UNK_0xe726  codep:0x224c parp:0xe726 size:0x0006 C-string:'UNK_0xe726'
// 1873:      UNK_0xe72e  codep:0x224c parp:0xe72e size:0x000a C-string:'UNK_0xe72e'
// 1874:      UNK_0xe73a  codep:0x224c parp:0xe73a size:0x0012 C-string:'UNK_0xe73a'
// 1875:      UNK_0xe74e  codep:0x224c parp:0xe74e size:0x000a C-string:'UNK_0xe74e'
// 1876:      UNK_0xe75a  codep:0x224c parp:0xe75a size:0x001a C-string:'UNK_0xe75a'
// 1877:      UNK_0xe776  codep:0x7394 parp:0xe776 size:0x0016 C-string:'UNK_0xe776'
// 1878:      UNK_0xe78e  codep:0x7394 parp:0xe78e size:0x0006 C-string:'UNK_0xe78e'
// 1879:      UNK_0xe796  codep:0x7420 parp:0xe796 size:0x0003 C-string:'UNK_0xe796'
// 1880:      UNK_0xe79b  codep:0x7420 parp:0xe79b size:0x0003 C-string:'UNK_0xe79b'
// 1881:      UNK_0xe7a0  codep:0x7420 parp:0xe7a0 size:0x0003 C-string:'UNK_0xe7a0'
// 1882:      UNK_0xe7a5  codep:0x7420 parp:0xe7a5 size:0x0003 C-string:'UNK_0xe7a5'
// 1883:      UNK_0xe7aa  codep:0x7420 parp:0xe7aa size:0x0003 C-string:'UNK_0xe7aa'
// 1884:      UNK_0xe7af  codep:0x7420 parp:0xe7af size:0x0034 C-string:'UNK_0xe7af'
// 1885:      UNK_0xe7e5  codep:0x7420 parp:0xe7e5 size:0x0017 C-string:'UNK_0xe7e5'
// 1886:      UNK_0xe7fe  codep:0x7420 parp:0xe7fe size:0x0008 C-string:'UNK_0xe7fe'
// 1887:      UNK_0xe808  codep:0x7420 parp:0xe808 size:0x0008 C-string:'UNK_0xe808'
// 1888:      UNK_0xe812  codep:0x7420 parp:0xe812 size:0x0003 C-string:'UNK_0xe812'
// 1889:      UNK_0xe817  codep:0x7420 parp:0xe817 size:0x0003 C-string:'UNK_0xe817'
// 1890:      UNK_0xe81c  codep:0x7420 parp:0xe81c size:0x0003 C-string:'UNK_0xe81c'
// 1891:      UNK_0xe821  codep:0x7420 parp:0xe821 size:0x0003 C-string:'UNK_0xe821'
// 1892:      UNK_0xe826  codep:0x7394 parp:0xe826 size:0x0006 C-string:'UNK_0xe826'
// 1893:      UNK_0xe82e  codep:0x7420 parp:0xe82e size:0x0003 C-string:'UNK_0xe82e'
// 1894:      UNK_0xe833  codep:0x1d29 parp:0xe833 size:0x0009 C-string:'UNK_0xe833'
// 1895:      UNK_0xe83e  codep:0x1d29 parp:0xe83e size:0x0002 C-string:'UNK_0xe83e'
// 1896:      UNK_0xe842  codep:0x1d29 parp:0xe842 size:0x0002 C-string:'UNK_0xe842'
// 1897:      UNK_0xe846  codep:0x1d29 parp:0xe846 size:0x0004 C-string:'UNK_0xe846'
// 1898:      UNK_0xe84c  codep:0x224c parp:0xe84c size:0x000c C-string:'UNK_0xe84c'
// 1899:      UNK_0xe85a  codep:0x224c parp:0xe85a size:0x0022 C-string:'UNK_0xe85a'
// 1900:      UNK_0xe87e  codep:0x224c parp:0xe87e size:0x0006 C-string:'UNK_0xe87e'
// 1901:      UNK_0xe886  codep:0x224c parp:0xe886 size:0x001c C-string:'UNK_0xe886'
// 1902:      UNK_0xe8a4  codep:0x224c parp:0xe8a4 size:0x006a C-string:'UNK_0xe8a4'
// 1903:      UNK_0xe910  codep:0x224c parp:0xe910 size:0x001e C-string:'UNK_0xe910'
// 1904:      UNK_0xe930  codep:0x224c parp:0xe930 size:0x0020 C-string:'UNK_0xe930'
// 1905:      UNK_0xe952  codep:0x224c parp:0xe952 size:0x001a C-string:'UNK_0xe952'
// 1906:      UNK_0xe96e  codep:0x224c parp:0xe96e size:0x001a C-string:'UNK_0xe96e'
// 1907:      UNK_0xe98a  codep:0x224c parp:0xe98a size:0x0018 C-string:'UNK_0xe98a'
// 1908:         LDAMAGE  codep:0x1d29 parp:0xe9ae size:0x001a C-string:'LDAMAGE'
// 1909:      UNK_0xe9ca  codep:0x224c parp:0xe9ca size:0x0026 C-string:'UNK_0xe9ca'
// 1910:      UNK_0xe9f2  codep:0x224c parp:0xe9f2 size:0x000a C-string:'UNK_0xe9f2'
// 1911:      UNK_0xe9fe  codep:0x224c parp:0xe9fe size:0x000a C-string:'UNK_0xe9fe'
// 1912:         REFRESH  codep:0x224c parp:0xea14 size:0x0006 C-string:'REFRESH'
// 1913:      UNK_0xea1c  codep:0x1d29 parp:0xea1c size:0x0002 C-string:'UNK_0xea1c'
// 1914:      UNK_0xea20  codep:0x224c parp:0xea20 size:0x000a C-string:'UNK_0xea20'
// 1915:      UNK_0xea2c  codep:0x224c parp:0xea2c size:0x001c C-string:'UNK_0xea2c'
// 1916:      UNK_0xea4a  codep:0x224c parp:0xea4a size:0x0014 C-string:'UNK_0xea4a'
// 1917:         WOUNDED  codep:0x1d29 parp:0xea6a size:0x0006 C-string:'WOUNDED'
// 1918:         #WOUNDE  codep:0x1d29 parp:0xea7c size:0x0002 C-string:'_n_WOUNDE'
// 1919:      UNK_0xea80  codep:0x224c parp:0xea80 size:0x0010 C-string:'UNK_0xea80'
// 1920:      UNK_0xea92  codep:0x224c parp:0xea92 size:0x0040 C-string:'UNK_0xea92'
// 1921:      UNK_0xead4  codep:0x224c parp:0xead4 size:0x000c C-string:'UNK_0xead4'
// 1922:      UNK_0xeae2  codep:0x224c parp:0xeae2 size:0x0010 C-string:'UNK_0xeae2'
// 1923:      UNK_0xeaf4  codep:0x224c parp:0xeaf4 size:0x0021 C-string:'UNK_0xeaf4'
// 1924:      UNK_0xeb17  codep:0x224c parp:0xeb17 size:0x001d C-string:'UNK_0xeb17'
// 1925:      UNK_0xeb36  codep:0x224c parp:0xeb36 size:0x001d C-string:'UNK_0xeb36'
// 1926:      UNK_0xeb55  codep:0x224c parp:0xeb55 size:0x0063 C-string:'UNK_0xeb55'
// 1927:         ENGINE-  codep:0xeb87 parp:0xebc4 size:0x0004 C-string:'ENGINE_dash_'
// 1928:         SENSOR-  codep:0xeb87 parp:0xebd4 size:0x0004 C-string:'SENSOR_dash_'
// 1929:         COMM-CH  codep:0xeb87 parp:0xebe4 size:0x0004 C-string:'COMM_dash_CH'
// 1930:         MISS-CH  codep:0xeb87 parp:0xebf4 size:0x0004 C-string:'MISS_dash_CH'
// 1931:         LASER-C  codep:0xeb87 parp:0xec04 size:0x0004 C-string:'LASER_dash_C'
// 1932:         SHIELD-  codep:0xeb87 parp:0xec14 size:0x0004 C-string:'SHIELD_dash_'
// 1933:      UNK_0xec1a  codep:0x224c parp:0xec1a size:0x000a C-string:'UNK_0xec1a'
// 1934:         #>?FIEL  codep:0x4b3b parp:0xec30 size:0x0024 C-string:'_n__gt__ask_FIEL'
// 1935:      UNK_0xec56  codep:0x224c parp:0xec56 size:0x0038 C-string:'UNK_0xec56'
// 1936:      UNK_0xec90  codep:0x224c parp:0xec90 size:0x0036 C-string:'UNK_0xec90'
// 1937:      UNK_0xecc8  codep:0x224c parp:0xecc8 size:0x009e C-string:'UNK_0xecc8'
// 1938:      UNK_0xed68  codep:0x224c parp:0xed68 size:0x0051 C-string:'UNK_0xed68'
// 1939:      UNK_0xedbb  codep:0x1d29 parp:0xedbb size:0x0007 C-string:'UNK_0xedbb'
// 1940:      UNK_0xedc4  codep:0x224c parp:0xedc4 size:0x004b C-string:'UNK_0xedc4'
// 1941:      UNK_0xee11  codep:0x224c parp:0xee11 size:0x0054 C-string:'UNK_0xee11'
// 1942:      UNK_0xee67  codep:0x224c parp:0xee67 size:0x006c C-string:'UNK_0xee67'
// 1943:      UNK_0xeed5  codep:0x224c parp:0xeed5 size:0x0048 C-string:'UNK_0xeed5'
// 1944:      UNK_0xef1f  codep:0x224c parp:0xef1f size:0x0052 C-string:'UNK_0xef1f'
// 1945:      UNK_0xef73  codep:0x224c parp:0xef73 size:0x0056 C-string:'UNK_0xef73'
// 1946:         MDAMAGE  codep:0x1d29 parp:0xefd5 size:0x001a C-string:'MDAMAGE'
// 1947:      UNK_0xeff1  codep:0x224c parp:0xeff1 size:0x000c C-string:'UNK_0xeff1'
// 1948:      UNK_0xefff  codep:0x224c parp:0xefff size:0x0012 C-string:'UNK_0xefff'
// 1949:      UNK_0xf013  codep:0x224c parp:0xf013 size:0x00c0 C-string:'UNK_0xf013'
// 1950:         #>DAMAG  codep:0x4b3b parp:0xf0df size:0x0024 C-string:'_n__gt_DAMAG'
// 1951:      UNK_0xf105  codep:0x224c parp:0xf105 size:0x001e C-string:'UNK_0xf105'
// 1952:      UNK_0xf125  codep:0x224c parp:0xf125 size:0x0020 C-string:'UNK_0xf125'
// 1953:         DO-ADAM  codep:0x224c parp:0xf151 size:0x0048 C-string:'DO_dash_ADAM'
// 1954:      UNK_0xf19b  codep:0x224c parp:0xf19b size:0x000c C-string:'UNK_0xf19b'
// 1955:      UNK_0xf1a9  codep:0x224c parp:0xf1a9 size:0x000a C-string:'UNK_0xf1a9'
// 1956:      UNK_0xf1b5  codep:0x224c parp:0xf1b5 size:0x0091 C-string:'UNK_0xf1b5'
// 1957:          #>DISP  codep:0x4b3b parp:0xf251 size:0x000c C-string:'_n__gt_DISP'
// 1958:      UNK_0xf25f  codep:0x224c parp:0xf25f size:0x0022 C-string:'UNK_0xf25f'
// 1959:      UNK_0xf283  codep:0x224c parp:0xf283 size:0x0064 C-string:'UNK_0xf283'
// 1960:            CDAM  codep:0x224c parp:0xf2f0 size:0x0024 C-string:'CDAM'
// 1961:      UNK_0xf316  codep:0x224c parp:0xf316 size:0x007d C-string:'UNK_0xf316'
// 1962:             .EX  codep:0x4b3b parp:0xf39b size:0x000c C-string:'_dot_EX'
// 1963:      UNK_0xf3a9  codep:0x224c parp:0xf3a9 size:0x008c C-string:'UNK_0xf3a9'
// 1964:      UNK_0xf437  codep:0x224c parp:0xf437 size:0x0070 C-string:'UNK_0xf437'
// 1965:      UNK_0xf4a9  codep:0x224c parp:0xf4a9 size:0x0040 C-string:'UNK_0xf4a9'
// 1966:      UNK_0xf4eb  codep:0x224c parp:0xf4eb size:0x000e C-string:'UNK_0xf4eb'
// 1967:      UNK_0xf4fb  codep:0x224c parp:0xf4fb size:0x000e C-string:'UNK_0xf4fb'
// 1968:         DO-DAMA  codep:0x224c parp:0xf515 size:0x000e C-string:'DO_dash_DAMA'
// 1969:         DOBLAST  codep:0x224c parp:0xf52f size:0x0031 C-string:'DOBLAST'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe833[9] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20}; // UNK_0xe833
unsigned char UNK_0xe83e[2] = {0x00, 0x00}; // UNK_0xe83e
unsigned char UNK_0xe842[2] = {0x3a, 0x20}; // UNK_0xe842
unsigned char UNK_0xe846[4] = {0x56, 0x3a, 0x20, 0x16}; // UNK_0xe846
unsigned char LDAMAGE[26] = {0x00, 0x00, 0x5a, 0x00, 0xd2, 0x00, 0x68, 0x01, 0xfe, 0x01, 0x94, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xe8, 0x03, 0x4c, 0x04, 0xb0, 0x04}; // LDAMAGE
unsigned char UNK_0xea1c[2] = {0x3a, 0x20}; // UNK_0xea1c
unsigned char WOUNDED[6] = {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54}; // WOUNDED
unsigned char _n_WOUNDE[2] = {0x00, 0x00}; // #WOUNDE
unsigned char UNK_0xedbb[7] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f}; // UNK_0xedbb
unsigned char MDAMAGE[26] = {0x00, 0x00, 0xc8, 0x00, 0x90, 0x01, 0xbc, 0x02, 0xe8, 0x03, 0xdc, 0x05, 0xa0, 0x0f, 0xf4, 0x01, 0x58, 0x02, 0xbc, 0x02, 0xd0, 0x07, 0x84, 0x03, 0xe8, 0x03}; // MDAMAGE



// 0xe6d2: db 0xea 0x00 '  '

// ================================================
// 0xe6d4: WORD 'UNK_0xe6d6' codep=0x224c parp=0xe6d6
// ================================================

void UNK_0xe6d6() // UNK_0xe6d6
{
  Push(Pop()+1); // 1+
  WITHIN(); // WITHIN
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe6de: WORD 'UNK_0xe6e0' codep=0x224c parp=0xe6e0
// ================================================

void UNK_0xe6e0() // UNK_0xe6e0
{
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  _at_INST_dash_S(); // @INST-S
  _gt_R(); // >R
  R_at_(); // R@
  Push(2); // 2
  Push(cc__4); // 4
  WITHIN(); // WITHIN
  R_at_(); // R@
  Push(0x000e);
  Push(0x0014);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  R_at_(); // R@
  Push(0x0017);
  Push(0x001f);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  Push(0x0020);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  return;

  label1:
  Push(cc_FALSE); // FALSE
}


// ================================================
// 0xe724: WORD 'UNK_0xe726' codep=0x224c parp=0xe726
// ================================================

void UNK_0xe726() // UNK_0xe726
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xe72c: WORD 'UNK_0xe72e' codep=0x224c parp=0xe72e
// ================================================

void UNK_0xe72e() // UNK_0xe72e
{
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe738: WORD 'UNK_0xe73a' codep=0x224c parp=0xe73a
// ================================================

void UNK_0xe73a() // UNK_0xe73a
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
}

// 0xe744: db 0x4c 0x22 0x29 0x94 0x39 0x94 0x90 0x16 'L") 9   '

// ================================================
// 0xe74c: WORD 'UNK_0xe74e' codep=0x224c parp=0xe74e
// ================================================

void UNK_0xe74e() // UNK_0xe74e
{
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe758: WORD 'UNK_0xe75a' codep=0x224c parp=0xe75a
// ================================================

void UNK_0xe75a() // UNK_0xe75a
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
}

// 0xe760: db 0x14 0x22 0x19 0x00 0x94 0x73 0x19 0x05 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x0c 0x04 0x24 0x5d 0x6b ' "   s   $]k s   $]k'

// ================================================
// 0xe774: WORD 'UNK_0xe776' codep=0x7394 parp=0xe776
// ================================================
// 0xe776: db 0x19 0x10 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x12 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x13 0x01 0x24 0x5d 0x6b '   $]k s   $]k s   $]k'

// ================================================
// 0xe78c: WORD 'UNK_0xe78e' codep=0x7394 parp=0xe78e
// ================================================
// 0xe78e: db 0x19 0x15 0x07 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe794: WORD 'UNK_0xe796' codep=0x7420 parp=0xe796
// ================================================
// 0xe796: db 0x19 0x0c 0x01 '   '

// ================================================
// 0xe799: WORD 'UNK_0xe79b' codep=0x7420 parp=0xe79b
// ================================================
// 0xe79b: db 0x19 0x12 0x02 '   '

// ================================================
// 0xe79e: WORD 'UNK_0xe7a0' codep=0x7420 parp=0xe7a0
// ================================================
// 0xe7a0: db 0x19 0x14 0x02 '   '

// ================================================
// 0xe7a3: WORD 'UNK_0xe7a5' codep=0x7420 parp=0xe7a5
// ================================================
// 0xe7a5: db 0x19 0x0b 0x01 '   '

// ================================================
// 0xe7a8: WORD 'UNK_0xe7aa' codep=0x7420 parp=0xe7aa
// ================================================
// 0xe7aa: db 0x19 0x12 0x07 '   '

// ================================================
// 0xe7ad: WORD 'UNK_0xe7af' codep=0x7420 parp=0xe7af
// ================================================
// 0xe7af: db 0x34 0x0d 0x01 0x14 0x22 0x14 0x00 0x20 0x74 0x14 0x11 0x01 0x20 0x74 0x14 0x12 0x01 0x20 0x74 0x14 0x13 0x01 0x20 0x74 0x14 0x14 0x01 0x20 0x74 0x14 0x15 0x01 0x20 0x74 0x14 0x16 0x01 0x20 0x74 0x14 0x17 0x01 0x20 0x74 0x14 0x18 0x01 0x20 0x74 0x14 0x19 0x01 '4   "   t    t    t    t    t    t    t    t    t   '

// ================================================
// 0xe7e3: WORD 'UNK_0xe7e5' codep=0x7420 parp=0xe7e5
// ================================================
// 0xe7e5: db 0x14 0x1a 0x01 0x20 0x74 0x14 0x1b 0x01 0x20 0x74 0x14 0x1c 0x01 0x20 0x74 0x14 0x1d 0x01 0x20 0x74 0x14 0x1e 0x01 '    t    t    t    t   '

// ================================================
// 0xe7fc: WORD 'UNK_0xe7fe' codep=0x7420 parp=0xe7fe
// ================================================
// 0xe7fe: db 0x14 0x30 0x02 0x20 0x74 0x14 0x45 0x04 ' 0  t E '

// ================================================
// 0xe806: WORD 'UNK_0xe808' codep=0x7420 parp=0xe808
// ================================================
// 0xe808: db 0x14 0x32 0x02 0x20 0x74 0x14 0x49 0x01 ' 2  t I '

// ================================================
// 0xe810: WORD 'UNK_0xe812' codep=0x7420 parp=0xe812
// ================================================
// 0xe812: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xe815: WORD 'UNK_0xe817' codep=0x7420 parp=0xe817
// ================================================
// 0xe817: db 0x3d 0x14 0x01 '=  '

// ================================================
// 0xe81a: WORD 'UNK_0xe81c' codep=0x7420 parp=0xe81c
// ================================================
// 0xe81c: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xe81f: WORD 'UNK_0xe821' codep=0x7420 parp=0xe821
// ================================================
// 0xe821: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xe824: WORD 'UNK_0xe826' codep=0x7394 parp=0xe826
// ================================================
// 0xe826: db 0x10 0x13 0x01 0x14 0xc8 0x6a '     j'

// ================================================
// 0xe82c: WORD 'UNK_0xe82e' codep=0x7420 parp=0xe82e
// ================================================
// 0xe82e: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xe831: WORD 'UNK_0xe833' codep=0x1d29 parp=0xe833
// ================================================
// 0xe833: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 ':  ALLOT '

// ================================================
// 0xe83c: WORD 'UNK_0xe83e' codep=0x1d29 parp=0xe83e
// ================================================
// 0xe83e: db 0x00 0x00 '  '

// ================================================
// 0xe840: WORD 'UNK_0xe842' codep=0x1d29 parp=0xe842
// ================================================
// 0xe842: db 0x3a 0x20 ': '

// ================================================
// 0xe844: WORD 'UNK_0xe846' codep=0x1d29 parp=0xe846
// ================================================
// 0xe846: db 0x56 0x3a 0x20 0x16 'V:  '

// ================================================
// 0xe84a: WORD 'UNK_0xe84c' codep=0x224c parp=0xe84c
// ================================================

void UNK_0xe84c() // UNK_0xe84c
{
  Push(pp_UNK_0xe842); // UNK_0xe842
  C_at_(); // C@
  Push(0x000f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe858: WORD 'UNK_0xe85a' codep=0x224c parp=0xe85a
// ================================================

void UNK_0xe85a() // UNK_0xe85a
{
  C_at_(); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
}

// 0xe862: db 0x4c 0x22 0x01 0xe8 0x92 0x0c 0xa7 0x3b 0xf5 0x12 0x24 0xe7 0xaa 0x61 0xae 0x0b 0xb8 0x3b 0x5f 0x12 0x07 0x13 0xf5 0x12 0x90 0x16 'L"     ;  $  a   ;_       '

// ================================================
// 0xe87c: WORD 'UNK_0xe87e' codep=0x224c parp=0xe87e
// ================================================

void UNK_0xe87e() // UNK_0xe87e
{
  Push(pp_UNK_0xe846); // UNK_0xe846
  _2_at_(); // 2@
}


// ================================================
// 0xe884: WORD 'UNK_0xe886' codep=0x224c parp=0xe886
// ================================================

void UNK_0xe886() // UNK_0xe886
{
  ROT(); // ROT
  _dash_(); // -
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  _dash_(); // -
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  R_gt_(); // R>
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xe8a2: WORD 'UNK_0xe8a4' codep=0x224c parp=0xe8a4
// ================================================

void UNK_0xe8a4() // UNK_0xe8a4
{
  Push(pp_TRACE); // TRACE
  Push(Read16(Pop())); // @
  Push(0); // 0
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  _at_INST_dash_C(); // @INST-C
  Push(0x0019);
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT

  UNK_0x3f09(" ");
  _dot_TTY(); // .TTY
  OVER(); // OVER
  _dot_(); // .
  UNK_0xe7a0(); // UNK_0xe7a0
  _ask_(); // ?
  UNK_0xe79b(); // UNK_0xe79b
  _ask_(); // ?
  Push(pp_A_dash_STREN); // A-STREN
  _ask_(); // ?

  label1:
  _gt_R(); // >R
  R_at_(); // R@
  IFLD_at_(); // IFLD@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
  IFLD_ex_(); // IFLD!
}

// 0xe8ea: db 0x4c 0x22 0xb4 0x0d 0xa2 0x0e 0x0d 0x7d 0x41 0x0e 0x5d 0x17 0x80 0x00 0xf5 0x12 0xb4 0x0d 0xf2 0x0e 0x92 0x0f 0x20 0x0f 0x89 0x11 0x90 0x0e 0x3e 0x13 0x90 0x0e 0x27 0x7d 0x90 0x16 'L"     }A ]                 >   '}  '

// ================================================
// 0xe90e: WORD 'UNK_0xe910' codep=0x224c parp=0xe910
// ================================================

void UNK_0xe910() // UNK_0xe910
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(cc__dash_1); // -1
  Push(pp__n_VESS); // #VESS
  _plus__ex_(); // +!
  Push(1); // 1
  UNK_0xe817(); // UNK_0xe817
  DUP(); // DUP
  C_at_(); // C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe92e: WORD 'UNK_0xe930' codep=0x224c parp=0xe930
// ================================================

void UNK_0xe930() // UNK_0xe930
{
  UNK_0xe7fe(); // UNK_0xe7fe
  Push(Read16(Pop())); // @
  UNK_0xe726(); // UNK_0xe726
  Push(pp__ask_SUP); // ?SUP
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xe7e5(); // UNK_0xe7e5
  UNK_0xe85a(); // UNK_0xe85a
  Push(cc__7); // 7
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe950: WORD 'UNK_0xe952' codep=0x224c parp=0xe952
// ================================================

void UNK_0xe952() // UNK_0xe952
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xc0a1);
  return;

  label1:
  Push(0xc090);
}


// ================================================
// 0xe96c: WORD 'UNK_0xe96e' codep=0x224c parp=0xe96e
// ================================================

void UNK_0xe96e() // UNK_0xe96e
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xbcb8);
  return;

  label1:
  Push(0xbc98);
}


// ================================================
// 0xe988: WORD 'UNK_0xe98a' codep=0x224c parp=0xe98a
// ================================================

void UNK_0xe98a() // UNK_0xe98a
{
  UNK_0xe808(); // UNK_0xe808
  Push(Read16(Pop())); // @
  UNK_0xe726(); // UNK_0xe726
  UNK_0xe930(); // UNK_0xe930
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xe952(); // UNK_0xe952
  return;

  label1:
  UNK_0xe96e(); // UNK_0xe96e
}


// ================================================
// 0xe9a2: WORD 'LDAMAGE' codep=0x1d29 parp=0xe9ae
// ================================================
// 0xe9ae: db 0x00 0x00 0x5a 0x00 0xd2 0x00 0x68 0x01 0xfe 0x01 0x94 0x02 0xbc 0x02 0xbc 0x02 0xbc 0x02 0xbc 0x02 0xe8 0x03 0x4c 0x04 0xb0 0x04 '  Z   h               L   '

// ================================================
// 0xe9c8: WORD 'UNK_0xe9ca' codep=0x224c parp=0xe9ca
// ================================================

void UNK_0xe9ca() // UNK_0xe9ca
{
  _gt_R(); // >R
  UNK_0xe73a(); // UNK_0xe73a
  UNK_0xe886(); // UNK_0xe886
  Push(0x000a);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
  IFLD_at_(); // IFLD@
  Push(Pop()*2); // 2*
  Push(pp_LDAMAGE); // LDAMAGE
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x000a);
  _star__slash_(); // */
}


// ================================================
// 0xe9f0: WORD 'UNK_0xe9f2' codep=0x224c parp=0xe9f2
// ================================================

void UNK_0xe9f2() // UNK_0xe9f2
{
  UNK_0xe74e(); // UNK_0xe74e
  Push(0xe77e);
  UNK_0xe9ca(); // UNK_0xe9ca
}


// ================================================
// 0xe9fc: WORD 'UNK_0xe9fe' codep=0x224c parp=0xe9fe
// ================================================

void UNK_0xe9fe() // UNK_0xe9fe
{
  _2DUP(); // 2DUP
  Push(0xe7f9);
  UNK_0xe9ca(); // UNK_0xe9ca
}


// ================================================
// 0xea08: WORD 'REFRESH' codep=0x224c parp=0xea14
// ================================================
// entry

void REFRESH() // REFRESH
{
  UNK_0xe98a(); // UNK_0xe98a
  MODULE(); // MODULE
}


// ================================================
// 0xea1a: WORD 'UNK_0xea1c' codep=0x1d29 parp=0xea1c
// ================================================
// 0xea1c: db 0x3a 0x20 ': '

// ================================================
// 0xea1e: WORD 'UNK_0xea20' codep=0x224c parp=0xea20
// ================================================

void UNK_0xea20() // UNK_0xea20
{
  UNK_0xe72e(); // UNK_0xe72e
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xea2a: WORD 'UNK_0xea2c' codep=0x224c parp=0xea2c
// ================================================

void UNK_0xea2c() // UNK_0xea2c
{
  Push(1); // 1
  Push(pp_UNK_0xea1c); // UNK_0xea1c
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  RRND(); // RRND
  UNK_0xe826(); // UNK_0xe826
  C_at_(); // C@
  _slash_(); // /
  Push(0x000a);
  _slash_(); // /
  Push(cc__5); // 5
  MAX(); // MAX
}


// ================================================
// 0xea48: WORD 'UNK_0xea4a' codep=0x224c parp=0xea4a
// ================================================

void UNK_0xea4a() // UNK_0xea4a
{
  _at_INST_dash_S(); // @INST-S
  Push(cc__4); // 4
  Push(cc__6); // 6
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(1); // 1
  Push(pp__ask_10); // ?10
  _plus__ex_(); // +!
}


// ================================================
// 0xea5e: WORD 'WOUNDED' codep=0x1d29 parp=0xea6a
// ================================================
// 0xea6a: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 ' ALLOT'

// ================================================
// 0xea70: WORD '#WOUNDE' codep=0x1d29 parp=0xea7c
// ================================================
// entry
// 0xea7c: db 0x00 0x00 '  '

// ================================================
// 0xea7e: WORD 'UNK_0xea80' codep=0x224c parp=0xea80
// ================================================

void UNK_0xea80() // UNK_0xea80
{
  Push(pp_WOUNDED); // WOUNDED
  Push(cc__6); // 6
  Push(0x00ff);
  FILL(); // FILL
  Push(pp__n_WOUNDE); // #WOUNDE
  _099(); // 099
}


// ================================================
// 0xea90: WORD 'UNK_0xea92' codep=0x224c parp=0xea92
// ================================================

void UNK_0xea92() // UNK_0xea92
{
  Push(pp_WOUNDED); // WOUNDED
  DUP(); // DUP
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  C_at_(); // C@
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  LEAVE(); // LEAVE
  goto label2;

  label1:
  Push(i); // I
  C_at_(); // C@
  Push(0x00ff);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(i); // I
  C_ex_(); // C!
  Push(1); // 1
  Push(pp__n_WOUNDE); // #WOUNDE
  _st__plus__ex__gt_(); // <+!>
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffd0

}


// ================================================
// 0xead2: WORD 'UNK_0xead4' codep=0x224c parp=0xead4
// ================================================

void UNK_0xead4() // UNK_0xead4
{
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xe7af(); // UNK_0xe7af
  C_at_(); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeae0: WORD 'UNK_0xeae2' codep=0x224c parp=0xeae2
// ================================================

void UNK_0xeae2() // UNK_0xeae2
{
  YELLOW(); // YELLOW
  Push(0x4fa9);
  _ex_(); // !
  CTERASE(); // CTERASE
  Push(0); // 0
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xeaf2: WORD 'UNK_0xeaf4' codep=0x224c parp=0xeaf4
// ================================================

void UNK_0xeaf4() // UNK_0xeaf4
{

  UNK_0x3f09("**  GAME  OVER  **");
  _dot_TTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY(); // KEY
  BYE(); // BYE
}


// ================================================
// 0xeb15: WORD 'UNK_0xeb17' codep=0x224c parp=0xeb17
// ================================================

void UNK_0xeb17() // UNK_0xeb17
{
  UNK_0xeae2(); // UNK_0xeae2

  UNK_0x3f09("!!HULL DESTROYED!!");
  _dot_TTY(); // .TTY
  UNK_0xeaf4(); // UNK_0xeaf4
}


// ================================================
// 0xeb34: WORD 'UNK_0xeb36' codep=0x224c parp=0xeb36
// ================================================

void UNK_0xeb36() // UNK_0xeb36
{
  UNK_0xeae2(); // UNK_0xeae2

  UNK_0x3f09("!!CREW  DECEASED!!");
  _dot_TTY(); // .TTY
  UNK_0xeaf4(); // UNK_0xeaf4
}


// ================================================
// 0xeb53: WORD 'UNK_0xeb55' codep=0x224c parp=0xeb55
// ================================================

void UNK_0xeb55() // UNK_0xeb55
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(0x0012);
  _eq_SPECIE(); // =SPECIE
  Push(0x0018);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  Push(0x0013);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0); // 0
  UNK_0xe81c(); // UNK_0xe81c
  C_ex_(); // C!

  label1:
  ICLOSE(); // ICLOSE
}

// 0xeb7d: db 0x4c 0x22 0x4f 0x06 0x93 0x1f 0x93 0x1f 0xfa 0x1b 'L"O       '
// 0xeb87: call   1649
// 0xeb8a: db 0x38 0x0c 0x0d 0x7d 0x9f 0x3b 0xf5 0x12 0x24 0xe7 0xb4 0x0d 0x0d 0x7d 0x5d 0x17 0x7f 0x00 0xf5 0x12 0x24 0xe7 0x90 0x0e 0xf5 0x12 0x90 0x16 0x4c 0x22 0x5d 0x17 0xb8 0xe7 0x92 0x0c 0x5d 0x17 0x7f 0x00 0xf5 0x12 0x24 0xe7 0x90 0x16 '8  } ;  $    }]    $       L"]     ]    $   '

// ================================================
// 0xebb8: WORD 'ENGINE-' codep=0xeb87 parp=0xebc4
// ================================================
// 0xebc4: db 0xc7 0xe7 0xc2 0xe7 '    '

// ================================================
// 0xebc8: WORD 'SENSOR-' codep=0xeb87 parp=0xebd4
// ================================================
// 0xebd4: db 0xd1 0xe7 0xcc 0xe7 '    '

// ================================================
// 0xebd8: WORD 'COMM-CH' codep=0xeb87 parp=0xebe4
// ================================================
// 0xebe4: db 0xdb 0xe7 0xd6 0xe7 '    '

// ================================================
// 0xebe8: WORD 'MISS-CH' codep=0xeb87 parp=0xebf4
// ================================================
// 0xebf4: db 0xef 0xe7 0xea 0xe7 '    '

// ================================================
// 0xebf8: WORD 'LASER-C' codep=0xeb87 parp=0xec04
// ================================================
// 0xec04: db 0xf9 0xe7 0xf4 0xe7 '    '

// ================================================
// 0xec08: WORD 'SHIELD-' codep=0xeb87 parp=0xec14
// ================================================
// 0xec14: db 0xe5 0xe7 0xe0 0xe7 '    '

// ================================================
// 0xec18: WORD 'UNK_0xec1a' codep=0x224c parp=0xec1a
// ================================================

void UNK_0xec1a() // UNK_0xec1a
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  UNK_0xe726(); // UNK_0xe726
}


// ================================================
// 0xec24: WORD '#>?FIEL' codep=0x4b3b parp=0xec30
// ================================================
// 0xec30: db 0x08 0x00 0x8b 0x12 0x01 0x00 0xa8 0xeb 0x02 0x00 0xc4 0xeb 0x03 0x00 0xd4 0xeb 0x04 0x00 0xe4 0xeb 0x05 0x00 0xf4 0xeb 0x06 0x00 0x04 0xec 0x07 0x00 0x14 0xec 0x08 0x00 0x1a 0xec '                                    '

// ================================================
// 0xec54: WORD 'UNK_0xec56' codep=0x224c parp=0xec56
// ================================================

void UNK_0xec56() // UNK_0xec56
{
  Push(pp_UNK_0xe833); // UNK_0xe833
  Push(cc__9); // 9
  Push(0); // 0
  FILL(); // FILL
  Push(pp_UNK_0xe83e); // UNK_0xe83e
  _099(); // 099
  Push(0); // 0
  Push(cc__9); // 9
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _n__gt__ask_FIEL(); // #>?FIEL
  DUP(); // DUP
  if (Pop() == 0) goto label1;
  Push(i); // I
  Push(pp_UNK_0xe83e); // UNK_0xe83e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe833); // UNK_0xe833
  Push(Pop() + Pop()); // +
  _st_C_ex__gt_(); // <C!>
  Push(1); // 1
  Push(pp_UNK_0xe83e); // UNK_0xe83e
  _st__plus__ex__gt_(); // <+!>

  label1:
  Push(Pop() | Pop()); // OR
  i++;
  } while(i<imax); // (LOOP) 0xffe0

}


// ================================================
// 0xec8e: WORD 'UNK_0xec90' codep=0x224c parp=0xec90
// ================================================

void UNK_0xec90() // UNK_0xec90
{
  UNK_0xec56(); // UNK_0xec56
  if (Pop() == 0) return;

  label2:
  Push(0); // 0
  Push(pp_UNK_0xe83e); // UNK_0xe83e
  Push(Read16(Pop())); // @
  RRND(); // RRND
  Push(pp_UNK_0xe833); // UNK_0xe833
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(pp__ask_COMBAT); // ?COMBAT
  Push(Read16(Pop())); // @
  UNK_0xe726(); // UNK_0xe726
  OVER(); // OVER
  Push(cc__8); // 8
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  Pop(); // DROP

  label1:
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xecc6: WORD 'UNK_0xecc8' codep=0x224c parp=0xecc8
// ================================================

void UNK_0xecc8() // UNK_0xecc8
{
  UNK_0xe821(); // UNK_0xe821
  C_at_(); // C@
  DUP(); // DUP
  _gt_R(); // >R
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;

  UNK_0x3f09("KILLED");
  goto label6;

  label1:
  R_at_(); // R@
  Push(1); // 1
  Push(0x0015);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;

  UNK_0x3f09("CRITICALLY ");
  goto label5;

  label2:
  R_at_(); // R@
  Push(0x0015);
  Push(0x0033);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;

  UNK_0x3f09("HEAVILIY ");
  goto label5;

  label3:
  R_at_(); // R@
  Push(0x0033);
  Push(0x0051);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label4;

  UNK_0x3f09("MODERATELY ");
  goto label5;

  label4:

  UNK_0x3f09("SLIGHTLY ");

  label5:
  TYPE(); // TYPE

  UNK_0x3f09("WOUNDED ");

  label6:
  TYPE(); // TYPE
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xed66: WORD 'UNK_0xed68' codep=0x224c parp=0xed68
// ================================================

void UNK_0xed68() // UNK_0xed68
{
  Push(pp__n_WOUNDE); // #WOUNDE
  Push(Read16(Pop())); // @
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(pp_WOUNDED); // WOUNDED
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  _3_star_(); // 3*
  Push(pp_ROSTER); // ROSTER
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  _gt_C_plus_S(); // >C+S
  UNK_0xe82e(); // UNK_0xe82e
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
  _dot_TTY(); // .TTY
  PRINT(" IS ", 4); // (.")
  UNK_0xecc8(); // UNK_0xecc8
  ICLOSE(); // ICLOSE
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffcb

  Push(pp__ask_HEAL); // ?HEAL
  ON(); // ON

  label1:
  Push(pp__n_WOUNDE); // #WOUNDE
  _099(); // 099
}


// ================================================
// 0xedb9: WORD 'UNK_0xedbb' codep=0x1d29 parp=0xedbb
// ================================================
// 0xedbb: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f ':  ALLO'

// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x224c parp=0xedc4
// ================================================

void UNK_0xedc4() // UNK_0xedc4
{
  Push(0x002b);
  _ex_ID(); // !ID
  Push(cc__8); // 8
  UNK_0xe7a5(); // UNK_0xe7a5
  C_ex_(); // C!
  CTINIT(); // CTINIT
  _gt_DISPLA(); // >DISPLA

  UNK_0x3f09("ALIEN SHIP DESTROYED");
  _dot_TTY(); // .TTY
  Push(0); // 0
  UNK_0xe796(); // UNK_0xe796
  C_ex_(); // C!
  UNK_0xea4a(); // UNK_0xea4a
  UNK_0xeb55(); // UNK_0xeb55
  UNK_0xe78e(); // UNK_0xe78e
  Push(pp_UNK_0xedbb); // UNK_0xedbb
  Push(cc__7); // 7
  CMOVE(); // CMOVE
  Push(0); // 0
  _ex_INST_dash_S(); // !INST-S
  Push(pp_UNK_0xedbb); // UNK_0xedbb
  UNK_0xe7aa(); // UNK_0xe7aa
  Push(cc__7); // 7
  CMOVE(); // CMOVE
  UNK_0xe910(); // UNK_0xe910
}


// ================================================
// 0xee0f: WORD 'UNK_0xee11' codep=0x224c parp=0xee11
// ================================================

void UNK_0xee11() // UNK_0xee11
{
  Push(pp_UNK_0xea1c); // UNK_0xea1c
  _st__ex__gt_(); // <!>
  UNK_0xea80(); // UNK_0xea80
  Push(pp_ROSTER); // ROSTER
  DUP(); // DUP
  Push(0x0012);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xea20(); // UNK_0xea20
  if (Pop() == 0) goto label2;
  _gt_C_plus_S(); // >C+S
  UNK_0xea2c(); // UNK_0xea2c
  Push(0xe821);
  UNK_0xe8a4(); // UNK_0xe8a4
  ICLOSE(); // ICLOSE
  Push(i); // I
  Push(pp_ROSTER); // ROSTER
  _dash_(); // -
  Push(cc__3); // 3
  _slash_(); // /
  UNK_0xea92(); // UNK_0xea92
  goto label4;

  label2:
  Pop(); Pop();// 2DROP

  label4:
  goto label3;

  label1:
  Pop(); Pop();// 2DROP
  LEAVE(); // LEAVE

  label3:
  Push(cc__3); // 3
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffc4

}


// ================================================
// 0xee65: WORD 'UNK_0xee67' codep=0x224c parp=0xee67
// ================================================

void UNK_0xee67() // UNK_0xee67
{
  UNK_0xe7a0(); // UNK_0xe7a0
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(cc__ask_A_dash_SHIE); // ?A-SHIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  UNK_0xe6e0(); // UNK_0xe6e0
  Push(Pop() | Pop()); // OR
  Push(pp_NLR); // NLR
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0xe79b);
  UNK_0xe8a4(); // UNK_0xe8a4
  goto label4;

  label1:
  UNK_0xe7a0(); // UNK_0xe7a0
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _dash_(); // -
  _gt_R(); // >R
  Push(0xe7a0);
  UNK_0xe8a4(); // UNK_0xe8a4
  R_gt_(); // R>
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  ABS(); // ABS
  Push(0xe79b);
  UNK_0xe8a4(); // UNK_0xe8a4
  goto label4;

  label2:
  Pop(); // DROP

  label4:
  UNK_0xead4(); // UNK_0xead4
  if (Pop() == 0) goto label3;
  Push(0xbfc8);
  MODULE(); // MODULE

  label3:
  UNK_0xe79b(); // UNK_0xe79b
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xedc4(); // UNK_0xedc4
}


// ================================================
// 0xeed3: WORD 'UNK_0xeed5' codep=0x224c parp=0xeed5
// ================================================

void UNK_0xeed5() // UNK_0xeed5
{
  Push(pp__at__co_0_star_1_sc_); // @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  BEEPON(); // BEEPON
  Push(0x0082);
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0x01f4);
  MAX(); // MAX
  Push(0x03e8);
  MIN(); // MIN
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(i); // I
  Push(0x03e8);
  Push(Pop() + Pop()); // +
  RRND(); // RRND
  TONE(); // TONE
  Push(cc__5); // 5
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  i++;
  } while(i<imax); // (LOOP) 0xffe0

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xef1d: WORD 'UNK_0xef1f' codep=0x224c parp=0xef1f
// ================================================

void UNK_0xef1f() // UNK_0xef1f
{
  Push(0); // 0
  _eq_SPECIE(); // =SPECIE
  _at_INST_dash_C(); // @INST-C
  Push(0x0014);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  OVER(); // OVER
  UNK_0xe726(); // UNK_0xe726
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp__at__co_0_star_1_sc_); // @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  BEEPON(); // BEEPON
  Push(0x0514);
  Push(cc_MPS); // MPS
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  Push(0x01f4);
  MAX(); // MAX
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(i); // I
  RRND(); // RRND
  TONE(); // TONE
  i++;
  } while(i<imax); // (LOOP) 0xfff6

  BEEPOFF(); // BEEPOFF

  label2:
  UNK_0xee67(); // UNK_0xee67
  goto label3;

  label1:
  Pop(); // DROP

  label3:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef71: WORD 'UNK_0xef73' codep=0x224c parp=0xef73
// ================================================

void UNK_0xef73() // UNK_0xef73
{
  UNK_0xe9fe(); // UNK_0xe9fe
  _gt_R(); // >R
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  DUP(); // DUP
  ROT(); // ROT
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x0014);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  UNK_0xe776(); // UNK_0xe776
  Push(Pop()+1); // 1+
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  Push(0); // 0

  label3:
  UNK_0xef1f(); // UNK_0xef1f
  goto label4;

  label2:
  ICLOSE(); // ICLOSE

  label4:
  i++;
  } while(i<imax); // (LOOP) 0xffcc

  Pop(); // DROP

  label1:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xefc9: WORD 'MDAMAGE' codep=0x1d29 parp=0xefd5
// ================================================
// 0xefd5: db 0x00 0x00 0xc8 0x00 0x90 0x01 0xbc 0x02 0xe8 0x03 0xdc 0x05 0xa0 0x0f 0xf4 0x01 0x58 0x02 0xbc 0x02 0xd0 0x07 0x84 0x03 0xe8 0x03 '                X         '

// ================================================
// 0xefef: WORD 'UNK_0xeff1' codep=0x224c parp=0xeff1
// ================================================

void UNK_0xeff1() // UNK_0xeff1
{
  UNK_0xe84c(); // UNK_0xe84c
  Push(Pop()*2); // 2*
  Push(pp_MDAMAGE); // MDAMAGE
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
}


// ================================================
// 0xeffd: WORD 'UNK_0xefff' codep=0x224c parp=0xefff
// ================================================

void UNK_0xefff() // UNK_0xefff
{
  UNK_0xe7fe(); // UNK_0xe7fe
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  UNK_0xe7fe(); // UNK_0xe7fe
  _ex_(); // !
}


// ================================================
// 0xf011: WORD 'UNK_0xf013' codep=0x224c parp=0xf013
// ================================================

void UNK_0xf013() // UNK_0xf013
{
  UNK_0xe808(); // UNK_0xe808
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  UNK_0xe808(); // UNK_0xe808
  _ex_(); // !
  UNK_0xe808(); // UNK_0xe808
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0xbc98);
  MODULE(); // MODULE
  Push(cc__3); // 3
  Push(pp__n_AUX); // #AUX
  _st__ex__gt_(); // <!>
}

// 0xf03b: db 0x4c 0x22 0x01 0xe8 0x92 0x0c 0x5d 0x17 0xf7 0x00 0xf5 0x12 0x01 0xe8 0x0a 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0xb8 0xe7 0xea 0xe8 0x90 0x16 0x4c 0x22 0x5d 0x17 0xc2 0xe7 0xea 0xe8 0xc2 0xeb 0x89 0x12 0xfa 0x15 0x2c 0x00 0x2f 0x55 0xae 0x0b 0x89 0x12 0xfa 0x15 0x0c 0x00 0x8f 0x3b 0x5d 0x17 0x7c 0xb7 0xd9 0x84 0x32 0x0e 0x5d 0x17 0xc7 0xe7 0x0d 0x7d 0x5d 0x17 0x80 0x00 0x3e 0x13 0x5d 0x17 0xc7 0xe7 0x27 0x7d 0x2f 0x55 0x57 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0xcc 0xe7 0xea 0xe8 0x90 0x16 0x4c 0x22 0x5d 0x17 0xd6 0xe7 0xea 0xe8 0x90 0x16 0x4c 0x22 0x5d 0x17 0xea 0xe7 0xea 0xe8 0x90 0x16 0x4c 0x22 0x5d 0x17 0xe0 0xe7 0xea 0xe8 0x12 0xec 0x89 0x12 0xfa 0x15 0x08 0x00 0x5d 0x17 0x36 0xc6 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0xf4 0xe7 0xea 0xe8 0x90 0x16 'L"    ]        m  L"]       L"]           , /U         ;] |   2 ]    }]   > ]   '}/UWm  L"]       L"]       L"]       L"]             ] 6     L"]       '

// ================================================
// 0xf0d3: WORD '#>DAMAG' codep=0x4b3b parp=0xf0df
// ================================================
// 0xf0df: db 0x08 0x00 0x34 0x0e 0x01 0x00 0x4f 0xf0 0x02 0x00 0x59 0xf0 0x03 0x00 0x95 0xf0 0x04 0x00 0x9f 0xf0 0x05 0x00 0xa9 0xf0 0x06 0x00 0xcb 0xf0 0x07 0x00 0xb3 0xf0 0x08 0x00 0x11 0xee '  4   O   Y                         '

// ================================================
// 0xf103: WORD 'UNK_0xf105' codep=0x224c parp=0xf105
// ================================================

void UNK_0xf105() // UNK_0xf105
{
  DUP(); // DUP
  Push(1); // 1
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(0x000a);
  MAX(); // MAX
  DUP(); // DUP
  _gt_R(); // >R
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
}


// ================================================
// 0xf123: WORD 'UNK_0xf125' codep=0x224c parp=0xf125
// ================================================

void UNK_0xf125() // UNK_0xf125
{
  UNK_0xe930(); // UNK_0xe930
  if (Pop() == 0) goto label1;
  UNK_0xefff(); // UNK_0xefff
  return;

  label1:
  UNK_0xe808(); // UNK_0xe808
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf013(); // UNK_0xf013
  return;

  label2:
  UNK_0xec90(); // UNK_0xec90
  _n__gt_DAMAG(); // #>DAMAG
}


// ================================================
// 0xf145: WORD 'DO-ADAM' codep=0x224c parp=0xf151
// ================================================
// entry

void DO_dash_ADAM() // DO-ADAM
{
  UNK_0xeed5(); // UNK_0xeed5
  UNK_0xea80(); // UNK_0xea80

  label4:
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf105(); // UNK_0xf105
  UNK_0xf125(); // UNK_0xf125
  goto label4;

  label1:
  Push(pp__n_WOUNDE); // #WOUNDE
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xed68(); // UNK_0xed68
  Push(0xc18b);
  MODULE(); // MODULE
  Push(0xc1b8);
  MODULE(); // MODULE

  label2:
  REFRESH(); // REFRESH
  Push(0xe7b8);
  IFLD_at_(); // IFLD@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  UNK_0xeb17(); // UNK_0xeb17

  label3:
  UNK_0xec1a(); // UNK_0xec1a
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xeb36(); // UNK_0xeb36
}


// ================================================
// 0xf199: WORD 'UNK_0xf19b' codep=0x224c parp=0xf19b
// ================================================

void UNK_0xf19b() // UNK_0xf19b
{
  UNK_0xe9f2(); // UNK_0xe9f2
  Push(Pop()*2); // 2*
  UNK_0xe75a(); // UNK_0xe75a
  DO_dash_ADAM(); // DO-ADAM
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1a7: WORD 'UNK_0xf1a9' codep=0x224c parp=0xf1a9
// ================================================

void UNK_0xf1a9() // UNK_0xf1a9
{
  Push(pp_UNK_0xe842); // UNK_0xe842
  C_ex_(); // C!
  Push(pp_UNK_0xe846); // UNK_0xe846
  D_ex_(); // D!
}


// ================================================
// 0xf1b3: WORD 'UNK_0xf1b5' codep=0x224c parp=0xf1b5
// ================================================

void UNK_0xf1b5() // UNK_0xf1b5
{
  UNK_0xe84c(); // UNK_0xe84c
  Push(cc__7); // 7
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _gt_MAINVI(); // >MAINVI
  _ex_COLOR(); // !COLOR
  UNK_0xe87e(); // UNK_0xe87e
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  SWAP(); // SWAP
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc__3); // 3
  _dash_(); // -
  Push(pp_XWLD_c_XP); // XWLD:XP
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  MIN(); // MIN
  Push(2); // 2

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  _2DUP(); // 2DUP
  Push(i); // I
  _dot_CIRCLE(); // .CIRCLE
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff6

  Pop(); Pop();// 2DROP
  V_gt_DISPL(); // V>DISPL
  return;

  label1:
  Pop(); // DROP
}

// 0xf1fb: db 0x4c 0x22 0x07 0x3f 0x0b 0x50 0x4c 0x41 0x53 0x4d 0x41 0x20 0x42 0x4f 0x4c 0x54 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x38 0x63 0x38 0x0c 0xfa 0x3f 0x07 0x13 0xfa 0x15 0x12 0x00 0x07 0x3f 0x0b 0x45 0x4e 0x45 0x52 0x47 0x59 0x20 0x4c 0x4f 0x53 0x53 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x07 0x3f 0x0e 0x4d 0x49 0x53 0x53 0x49 0x4c 0x45 0x20 0x43 0x4c 0x41 0x53 0x53 0x20 0xf1 0x9f 0x90 0x16 'L" ? PLASMA BOLT    L"8c8  ?       ? ENERGY LOSS    L" ? MISSILE CLASS     '

// ================================================
// 0xf246: WORD '#>DISP' codep=0x4b3b parp=0xf251
// ================================================
// 0xf251: db 0x02 0x00 0x31 0xf2 0x06 0x00 0xfd 0xf1 0x07 0x00 0x11 0xf2 '  1         '

// ================================================
// 0xf25d: WORD 'UNK_0xf25f' codep=0x224c parp=0xf25f
// ================================================

void UNK_0xf25f() // UNK_0xf25f
{
  UNK_0xf1b5(); // UNK_0xf1b5
  CTINIT(); // CTINIT
  _gt_DISPLA(); // >DISPLA
  UNK_0xe84c(); // UNK_0xe84c
  DUP(); // DUP
  _n__gt_DISP(); // #>DISP
  DUP(); // DUP
  Push(cc__6); // 6
  Push(cc__7); // 7
  UNK_0xe6d6(); // UNK_0xe6d6
  if (Pop() == 0) goto label1;
  _dot_(); // .
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x224c parp=0xf283
// ================================================

void UNK_0xf283() // UNK_0xf283
{
  UNK_0xf1a9(); // UNK_0xf1a9
  UNK_0xe75a(); // UNK_0xe75a
  LT_dash_BLUE(); // LT-BLUE
  UNK_0xf1b5(); // UNK_0xf1b5
  UNK_0xe87e(); // UNK_0xe87e
  UNK_0xeff1(); // UNK_0xeff1
  _gt_R(); // >R
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  DUP(); // DUP
  ROT(); // ROT
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  Push(0x0014);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  UNK_0xe776(); // UNK_0xe776
  C_at_(); // C@
  if (Pop() == 0) goto label3;
  UNK_0xef1f(); // UNK_0xef1f
  goto label5;

  label3:
  Pop(); // DROP
  ICLOSE(); // ICLOSE

  label5:
  goto label4;

  label2:
  Pop(); // DROP
  ICLOSE(); // ICLOSE

  label4:
  i++;
  } while(i<imax); // (LOOP) 0xffca

  Pop(); // DROP

  label1:
  R_gt_(); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2e7: WORD 'CDAM' codep=0x224c parp=0xf2f0
// ================================================
// entry

void CDAM() // CDAM
{
  UNK_0xee11(); // UNK_0xee11
  Push(pp__n_WOUNDE); // #WOUNDE
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xed68(); // UNK_0xed68
  Push(0xc18b);
  MODULE(); // MODULE
  Push(0xc1b8);
  MODULE(); // MODULE

  label1:
  UNK_0xec1a(); // UNK_0xec1a
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xeb36(); // UNK_0xeb36
}


// ================================================
// 0xf314: WORD 'UNK_0xf316' codep=0x224c parp=0xf316
// ================================================

void UNK_0xf316() // UNK_0xf316
{
  Push(cc__6); // 6
  PICK(); // PICK
  Push(cc__6); // 6
  PICK(); // PICK
  _2SWAP(); // 2SWAP
  D_st_(); // D<
  _gt_R(); // >R
  D_st_(); // D<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
}

// 0xf32e: db 0x4c 0x22 0x9d 0x86 0x69 0x26 0x90 0x16 0x4c 0x22 0xf1 0x9f 0xf7 0xc0 0x90 0x16 0x4c 0x22 0x48 0x50 0x2e 0xf3 0xdc 0x1b 0x0f 0x46 0x55 0x45 0x4c 0x20 0x53 0x55 0x50 0x50 0x4c 0x59 0x20 0x4c 0x4f 0x57 0x36 0xf3 0x90 0x16 0x4c 0x22 0x30 0x50 0x2e 0xf3 0x07 0x3f 0x14 0x46 0x55 0x45 0x4c 0x20 0x53 0x55 0x50 0x50 0x4c 0x59 0x20 0x43 0x52 0x49 0x54 0x49 0x43 0x41 0x4c 0x36 0xf3 0x90 0x16 0x4c 0x22 0xd5 0x4f 0x2e 0xf3 0x07 0x3f 0x0b 0x4f 0x55 0x54 0x20 0x4f 0x46 0x20 0x46 0x55 0x45 0x4c 0x36 0xf3 0x90 0x16 'L"  i&  L"      L"HP.    FUEL SUPPLY LOW6   L"0P.  ? FUEL SUPPLY CRITICAL6   L" O.  ? OUT OF FUEL6   '

// ================================================
// 0xf393: WORD '.EX' codep=0x4b3b parp=0xf39b
// ================================================
// 0xf39b: db 0x02 0x00 0x7d 0xf3 0x02 0x00 0x5c 0xf3 0x03 0x00 0x40 0xf3 '  }   \   @ '

// ================================================
// 0xf3a7: WORD 'UNK_0xf3a9' codep=0x224c parp=0xf3a9
// ================================================

void UNK_0xf3a9() // UNK_0xf3a9
{
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  DMIN(); // DMIN
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG
  D_ex_(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(0); // 0
  D_dash_(); // D-
  NULL(); // NULL
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x0014);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xf316(); // UNK_0xf316
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  _dot_EX(); // .EX
  return;

  label1:
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(cc__6); // 6
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xf316(); // UNK_0xf316
  if (Pop() == 0) goto label2;
  Push(2); // 2
  _dot_EX(); // .EX
  return;

  label2:
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(pp__ask_AUTO); // ?AUTO
  ON(); // ON
  Push(1); // 1
  _dot_EX(); // .EX
}


// ================================================
// 0xf435: WORD 'UNK_0xf437' codep=0x224c parp=0xf437
// ================================================

void UNK_0xf437() // UNK_0xf437
{
  _gt_R(); // >R
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  R_at_(); // R@
  Push(pp__dash_END); // -END
  _ex_(); // !
  UNK_0xf3a9(); // UNK_0xf3a9
  Push(pp__dash_END); // -END
  _ex_(); // !
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  Push(0x000a);
  UNK_0xe812(); // UNK_0xe812
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  if (Pop() == 0) goto label3;
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  R_at_(); // R@
  Push(0x000a);
  _slash_(); // /
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  INST_dash_QT(); // INST-QT
  _ex_(); // !

  label3:
  CDROP(); // CDROP

  label2:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE

  label1:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf4a7: WORD 'UNK_0xf4a9' codep=0x224c parp=0xf4a9
// ================================================

void UNK_0xf4a9() // UNK_0xf4a9
{
  UNK_0xf1a9(); // UNK_0xf1a9
  RED(); // RED
  UNK_0xf25f(); // UNK_0xf25f
  UNK_0xe84c(); // UNK_0xe84c
  Push(cc__7); // 7
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x0064);
  UNK_0xf437(); // UNK_0xf437
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(0xc090);
  goto label3;

  label2:
  Push(0xc0a1);

  label3:
  MODULE(); // MODULE
  return;

  label1:
  UNK_0xeff1(); // UNK_0xeff1
  UNK_0xe75a(); // UNK_0xe75a
  DO_dash_ADAM(); // DO-ADAM
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e9: WORD 'UNK_0xf4eb' codep=0x224c parp=0xf4eb
// ================================================

void UNK_0xf4eb() // UNK_0xf4eb
{
  if (Pop() == 0) goto label1;
  UNK_0xf283(); // UNK_0xf283
  return;

  label1:
  UNK_0xf4a9(); // UNK_0xf4a9
}


// ================================================
// 0xf4f9: WORD 'UNK_0xf4fb' codep=0x224c parp=0xf4fb
// ================================================

void UNK_0xf4fb() // UNK_0xf4fb
{
  if (Pop() == 0) goto label1;
  UNK_0xef73(); // UNK_0xef73
  return;

  label1:
  UNK_0xf19b(); // UNK_0xf19b
}


// ================================================
// 0xf509: WORD 'DO-DAMA' codep=0x224c parp=0xf515
// ================================================
// entry

void DO_dash_DAMA() // DO-DAMA
{
  if (Pop() == 0) goto label1;
  UNK_0xf4eb(); // UNK_0xf4eb
  return;

  label1:
  UNK_0xf4fb(); // UNK_0xf4fb
}


// ================================================
// 0xf523: WORD 'DOBLAST' codep=0x224c parp=0xf52f
// ================================================
// entry

void DOBLAST() // DOBLAST
{
  if (Pop() == 0) goto label1;
  DO_dash_ADAM(); // DO-ADAM
  return;

  label1:
  UNK_0xe776(); // UNK_0xe776
  C_at_(); // C@
  Push(0); // 0
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xee67(); // UNK_0xee67
  return;

  label2:
  Pop(); // DROP
}

// 0xf553: db 0x44 0x41 0x4d 0x41 0x47 0x45 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DAMAGE-______ '
  