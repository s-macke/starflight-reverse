// ====== OVERLAY 'PLSET-OV' ======
// store offset = 0xed50
// overlay size   = 0x0810

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xed66  codep:0x2214 parp:0xed66 size:0x000a C-string:'UNK_0xed66'
// 1870:      UNK_0xed72  codep:0x7394 parp:0xed72 size:0x0006 C-string:'UNK_0xed72'
// 1871:      UNK_0xed7a  codep:0x7394 parp:0xed7a size:0x0006 C-string:'UNK_0xed7a'
// 1872:      UNK_0xed82  codep:0x7394 parp:0xed82 size:0x0006 C-string:'UNK_0xed82'
// 1873:      UNK_0xed8a  codep:0x7394 parp:0xed8a size:0x0006 C-string:'UNK_0xed8a'
// 1874:      UNK_0xed92  codep:0x7394 parp:0xed92 size:0x0006 C-string:'UNK_0xed92'
// 1875:      UNK_0xed9a  codep:0x7394 parp:0xed9a size:0x0006 C-string:'UNK_0xed9a'
// 1876:      UNK_0xeda2  codep:0x7394 parp:0xeda2 size:0x0006 C-string:'UNK_0xeda2'
// 1877:      UNK_0xedaa  codep:0x7394 parp:0xedaa size:0x0006 C-string:'UNK_0xedaa'
// 1878:      UNK_0xedb2  codep:0x7394 parp:0xedb2 size:0x0006 C-string:'UNK_0xedb2'
// 1879:      UNK_0xedba  codep:0x7394 parp:0xedba size:0x0006 C-string:'UNK_0xedba'
// 1880:      UNK_0xedc2  codep:0x7394 parp:0xedc2 size:0x0006 C-string:'UNK_0xedc2'
// 1881:      UNK_0xedca  codep:0x7394 parp:0xedca size:0x0006 C-string:'UNK_0xedca'
// 1882:      UNK_0xedd2  codep:0x7394 parp:0xedd2 size:0x001d C-string:'UNK_0xedd2'
// 1883:      UNK_0xedf1  codep:0x224c parp:0xedf1 size:0x000a C-string:'UNK_0xedf1'
// 1884:      UNK_0xedfd  codep:0x224c parp:0xedfd size:0x000a C-string:'UNK_0xedfd'
// 1885:      UNK_0xee09  codep:0x7420 parp:0xee09 size:0x0003 C-string:'UNK_0xee09'
// 1886:      UNK_0xee0e  codep:0x224c parp:0xee0e size:0x0034 C-string:'UNK_0xee0e'
// 1887:      UNK_0xee44  codep:0x224c parp:0xee44 size:0x005e C-string:'UNK_0xee44'
// 1888:      UNK_0xeea4  codep:0x224c parp:0xeea4 size:0x001a C-string:'UNK_0xeea4'
// 1889:         LO-MASS  codep:0xede2 parp:0xeeca size:0x0010 C-string:'LO_dash_MASS'
// 1890:         HI-MASS  codep:0xede2 parp:0xeee6 size:0x0010 C-string:'HI_dash_MASS'
// 1891:      UNK_0xeef8  codep:0x224c parp:0xeef8 size:0x0014 C-string:'UNK_0xeef8'
// 1892:      UNK_0xef0e  codep:0x224c parp:0xef0e size:0x002e C-string:'UNK_0xef0e'
// 1893:      UNK_0xef3e  codep:0x224c parp:0xef3e size:0x001c C-string:'UNK_0xef3e'
// 1894:      UNK_0xef5c  codep:0x224c parp:0xef5c size:0x002c C-string:'UNK_0xef5c'
// 1895:      UNK_0xef8a  codep:0x224c parp:0xef8a size:0x0054 C-string:'UNK_0xef8a'
// 1896:      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x0090 C-string:'UNK_0xefe0'
// 1897:      UNK_0xf072  codep:0x224c parp:0xf072 size:0x000e C-string:'UNK_0xf072'
// 1898:      UNK_0xf082  codep:0x224c parp:0xf082 size:0x005e C-string:'UNK_0xf082'
// 1899:      UNK_0xf0e2  codep:0x224c parp:0xf0e2 size:0x0030 C-string:'UNK_0xf0e2'
// 1900:      UNK_0xf114  codep:0x224c parp:0xf114 size:0x0020 C-string:'UNK_0xf114'
// 1901:      UNK_0xf136  codep:0x224c parp:0xf136 size:0x0008 C-string:'UNK_0xf136'
// 1902:      UNK_0xf140  codep:0x224c parp:0xf140 size:0x000a C-string:'UNK_0xf140'
// 1903:      UNK_0xf14c  codep:0x224c parp:0xf14c size:0x000e C-string:'UNK_0xf14c'
// 1904:        SUBHYDRO  codep:0x1d29 parp:0xf167 size:0x0005 C-string:'SUBHYDRO'
// 1905:        TEMPHYDR  codep:0x1d29 parp:0xf179 size:0x0008 C-string:'TEMPHYDR'
// 1906:        INFHYDRO  codep:0x1d29 parp:0xf18e size:0x0007 C-string:'INFHYDRO'
// 1907:         SUBATMO  codep:0x1d29 parp:0xf1a1 size:0x0005 C-string:'SUBATMO'
// 1908:        TEMPATMO  codep:0x1d29 parp:0xf1b3 size:0x0009 C-string:'TEMPATMO'
// 1909:         INFATMO  codep:0x1d29 parp:0xf1c8 size:0x0007 C-string:'INFATMO'
// 1910:      UNK_0xf1d1  codep:0x224c parp:0xf1d1 size:0x000e C-string:'UNK_0xf1d1'
// 1911:      UNK_0xf1e1  codep:0x224c parp:0xf1e1 size:0x0038 C-string:'UNK_0xf1e1'
// 1912:      UNK_0xf21b  codep:0x224c parp:0xf21b size:0x002a C-string:'UNK_0xf21b'
// 1913:      UNK_0xf247  codep:0x224c parp:0xf247 size:0x003a C-string:'UNK_0xf247'
// 1914:      UNK_0xf283  codep:0x224c parp:0xf283 size:0x001c C-string:'UNK_0xf283'
// 1915:      UNK_0xf2a1  codep:0x224c parp:0xf2a1 size:0x0086 C-string:'UNK_0xf2a1'
// 1916:      UNK_0xf329  codep:0x224c parp:0xf329 size:0x000c C-string:'UNK_0xf329'
// 1917:            RUGS  codep:0x1d29 parp:0xf33e size:0x0020 C-string:'RUGS'
// 1918:      UNK_0xf360  codep:0x224c parp:0xf360 size:0x0012 C-string:'UNK_0xf360'
// 1919:      UNK_0xf374  codep:0x224c parp:0xf374 size:0x0014 C-string:'UNK_0xf374'
// 1920:      UNK_0xf38a  codep:0x224c parp:0xf38a size:0x000e C-string:'UNK_0xf38a'
// 1921:      UNK_0xf39a  codep:0x224c parp:0xf39a size:0x0010 C-string:'UNK_0xf39a'
// 1922:          CLIST1  codep:0x1d29 parp:0xf3b5 size:0x0014 C-string:'CLIST1'
// 1923:          CLIST2  codep:0x1d29 parp:0xf3d4 size:0x0014 C-string:'CLIST2'
// 1924:          CLIST3  codep:0x1d29 parp:0xf3f3 size:0x0014 C-string:'CLIST3'
// 1925:      UNK_0xf409  codep:0x224c parp:0xf409 size:0x0014 C-string:'UNK_0xf409'
// 1926:          (SAND)  codep:0x1d29 parp:0xf428 size:0x0010 C-string:'_ro_SAND_rc_'
// 1927:      UNK_0xf43a  codep:0x224c parp:0xf43a size:0x0052 C-string:'UNK_0xf43a'
// 1928:      UNK_0xf48e  codep:0x224c parp:0xf48e size:0x000c C-string:'UNK_0xf48e'
// 1929:      UNK_0xf49c  codep:0x224c parp:0xf49c size:0x0016 C-string:'UNK_0xf49c'
// 1930:      UNK_0xf4b4  codep:0x224c parp:0xf4b4 size:0x0012 C-string:'UNK_0xf4b4'
// 1931:        (TERRAIN  codep:0x4b3b parp:0xf4d3 size:0x0018 C-string:'_ro_TERRAIN'
// 1932:      UNK_0xf4ed  codep:0x224c parp:0xf4ed size:0x0012 C-string:'UNK_0xf4ed'
// 1933:      UNK_0xf501  codep:0x224c parp:0xf501 size:0x001a C-string:'UNK_0xf501'
// 1934:        PLAN-RUL  codep:0x224c parp:0xf528 size:0x0000 C-string:'PLAN_dash_RUL'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char SUBHYDRO[5] = {0x01, 0x02, 0x03, 0x04, 0x00}; // SUBHYDRO
unsigned char TEMPHYDR[8] = {0x05, 0x06, 0x07, 0x08, 0x00, 0x05, 0x05, 0x05}; // TEMPHYDR
unsigned char INFHYDRO[7] = {0x09, 0x0a, 0x0b, 0x0c, 0x07, 0x0d, 0x00}; // INFHYDRO
unsigned char SUBATMO[5] = {0x0e, 0x0c, 0x07, 0x06, 0x00}; // SUBATMO
unsigned char TEMPATMO[9] = {0x0f, 0x10, 0x11, 0x0f, 0x12, 0x13, 0x14, 0x00, 0x0f}; // TEMPATMO
unsigned char INFATMO[7] = {0x0e, 0x15, 0x16, 0x0c, 0x07, 0x0d, 0x00}; // INFATMO
unsigned char RUGS[32] = {0x02, 0x00, 0x0a, 0x4d, 0x02, 0x00, 0x1f, 0x4d, 0x02, 0x00, 0x35, 0x4d, 0x02, 0x00, 0x48, 0x4d, 0x02, 0x00, 0x5f, 0x4d, 0x02, 0x00, 0x75, 0x4d, 0x02, 0x00, 0x88, 0x4d, 0x02, 0x00, 0x99, 0x4d}; // RUGS
unsigned char CLIST1[20] = {0x02, 0x00, 0xcf, 0x49, 0x02, 0x00, 0xae, 0x4b, 0x02, 0x00, 0xdb, 0x4b, 0x02, 0x00, 0x15, 0x4c, 0x02, 0x00, 0x3e, 0x4c}; // CLIST1
unsigned char CLIST2[20] = {0x02, 0x00, 0xf2, 0x49, 0x02, 0x00, 0x93, 0x4c, 0x02, 0x00, 0x8a, 0x49, 0x02, 0x00, 0x65, 0x48, 0x02, 0x00, 0x6b, 0x4c}; // CLIST2
unsigned char CLIST3[20] = {0x02, 0x00, 0xe1, 0x49, 0x02, 0x00, 0x00, 0x4c, 0x02, 0x00, 0x2b, 0x4c, 0x02, 0x00, 0x57, 0x4c, 0x02, 0x00, 0xf2, 0x49}; // CLIST3
unsigned char _ro_SAND_rc_[16] = {0x02, 0x00, 0x04, 0x4b, 0x02, 0x00, 0x1a, 0x4b, 0x02, 0x00, 0x49, 0x4b, 0x02, 0x00, 0x31, 0x4b}; // (SAND)

const unsigned short int cc_UNK_0xed66 = 0x0020; // UNK_0xed66


// 0xed62: db 0x80 0x00 '  '

// ================================================
// 0xed64: WORD 'UNK_0xed66' codep=0x2214 parp=0xed66
// ================================================
// 0xed66: db 0x20 0x00 0x14 0x22 0x43 0x00 0x14 0x22 0x44 0x00 '   "C  "D '

// ================================================
// 0xed70: WORD 'UNK_0xed72' codep=0x7394 parp=0xed72
// ================================================
// 0xed72: db 0x20 0x0c 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed78: WORD 'UNK_0xed7a' codep=0x7394 parp=0xed7a
// ================================================
// 0xed7a: db 0x20 0x0d 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed80: WORD 'UNK_0xed82' codep=0x7394 parp=0xed82
// ================================================
// 0xed82: db 0x20 0x0e 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed88: WORD 'UNK_0xed8a' codep=0x7394 parp=0xed8a
// ================================================
// 0xed8a: db 0x20 0x09 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed90: WORD 'UNK_0xed92' codep=0x7394 parp=0xed92
// ================================================
// 0xed92: db 0x20 0x00 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xed98: WORD 'UNK_0xed9a' codep=0x7394 parp=0xed9a
// ================================================
// 0xed9a: db 0x20 0x02 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xeda0: WORD 'UNK_0xeda2' codep=0x7394 parp=0xeda2
// ================================================
// 0xeda2: db 0x20 0x04 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xeda8: WORD 'UNK_0xedaa' codep=0x7394 parp=0xedaa
// ================================================
// 0xedaa: db 0x20 0x01 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xedb0: WORD 'UNK_0xedb2' codep=0x7394 parp=0xedb2
// ================================================
// 0xedb2: db 0x20 0x16 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xedb8: WORD 'UNK_0xedba' codep=0x7394 parp=0xedba
// ================================================
// 0xedba: db 0x20 0x0f 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xedc0: WORD 'UNK_0xedc2' codep=0x7394 parp=0xedc2
// ================================================
// 0xedc2: db 0x20 0x10 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xedc8: WORD 'UNK_0xedca' codep=0x7394 parp=0xedca
// ================================================
// 0xedca: db 0x20 0x11 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xedd0: WORD 'UNK_0xedd2' codep=0x7394 parp=0xedd2
// ================================================
// 0xedd2: db 0x20 0x13 0x01 0x17 0x49 0x6c 0x4c 0x22 0x4f 0x06 0x20 0x0f 0x93 0x1f 0xfa 0x1b '    IlL"O       '
// 0xede2: call   1649
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
}


// ================================================
// 0xedef: WORD 'UNK_0xedf1' codep=0x224c parp=0xedf1
// ================================================

void UNK_0xedf1() // UNK_0xedf1
{
  Push(0); // 0
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xedfb: WORD 'UNK_0xedfd' codep=0x224c parp=0xedfd
// ================================================

void UNK_0xedfd() // UNK_0xedfd
{
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xee07: WORD 'UNK_0xee09' codep=0x7420 parp=0xee09
// ================================================
// 0xee09: db 0x17 0x11 0x01 '   '

// ================================================
// 0xee0c: WORD 'UNK_0xee0e' codep=0x224c parp=0xee0e
// ================================================

void UNK_0xee0e() // UNK_0xee0e
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(cc_UNK_0xed66); // UNK_0xed66
  Push(0); // 0
  IFIND(); // IFIND
  Pop(); // DROP
  Push(0); // 0

  label2:
  _at_INST_dash_C(); // @INST-C
  Push(cc_UNK_0xed66); // UNK_0xed66
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  INEXT(); // INEXT
  goto label2;
}


// ================================================
// 0xee42: WORD 'UNK_0xee44' codep=0x224c parp=0xee44
// ================================================

void UNK_0xee44() // UNK_0xee44
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  UNK_0xee0e(); // UNK_0xee0e
  Push(0); // 0
  ICLOSE(); // ICLOSE
  Push(0x65f2); // IFIELD(UNK_0xee09)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__9); // 9
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(sp)); // DUP
  Push(2); // 2
  MOD(); // MOD
  if (Pop() == 0) goto label2;
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(cc__3); // 3
  PICK(); // PICK
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Push(i); // I
  LEAVE(); // LEAVE

  label3:
  SWAP(); // SWAP

  label2:
  Push(Pop()>>1); // 2/
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Pop(); // DROP
  _gt_R(); // >R
  Pop(); Pop();// 2DROP
  R_gt_(); // R>
  ICLOSE(); // ICLOSE
  return;

  label1:
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeea2: WORD 'UNK_0xeea4' codep=0x224c parp=0xeea4
// ================================================

void UNK_0xeea4() // UNK_0xeea4
{
  UNK_0xee44(); // UNK_0xee44
  Push(pp_GLOBALS); // GLOBALS
  _ex__2(); // !_2
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  _ex_XYSEED(); // !XYSEED
}


// ================================================
// 0xeebe: WORD 'LO-MASS' codep=0xede2 parp=0xeeca
// ================================================
// 0xeeca: db 0x00 0x00 0x01 0x00 0x32 0x00 0x5a 0x00 0x6e 0x00 0xe8 0x03 0x65 0x00 0x64 0x00 '    2 Z n   e d '

// ================================================
// 0xeeda: WORD 'HI-MASS' codep=0xede2 parp=0xeee6
// ================================================
// 0xeee6: db 0x00 0x00 0x32 0x00 0x5a 0x00 0x6e 0x00 0xe8 0x03 0x10 0x27 0x66 0x00 0x65 0x00 '  2 Z n    'f e '

// ================================================
// 0xeef6: WORD 'UNK_0xeef8' codep=0x224c parp=0xeef8
// ================================================

void UNK_0xeef8() // UNK_0xeef8
{
  LoadData("UNK_0xed92"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(sp)); // DUP
  LO_dash_MASS(); // LO-MASS
  SWAP(); // SWAP
  HI_dash_MASS(); // HI-MASS
  RRND(); // RRND
  LoadData("UNK_0xed9a"); // from 'PLANET      '
  _ex__2(); // !_2
}


// ================================================
// 0xef0c: WORD 'UNK_0xef0e' codep=0x224c parp=0xef0e
// ================================================

void UNK_0xef0e() // UNK_0xef0e
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x007d);
  _dash_(); // -
  Push(Read16(sp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(0x0064);
  _dash_(); // -
  Push(Read16(sp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef3c: WORD 'UNK_0xef3e' codep=0x224c parp=0xef3e
// ================================================

void UNK_0xef3e() // UNK_0xef3e
{

  label2:
  _2DUP(); // 2DUP
  RRND(); // RRND
  Push(Read16(sp)); // DUP
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  goto label2;

  label1:
  _gt_R(); // >R
  Pop(); Pop();// 2DROP
  R_gt_(); // R>
}


// ================================================
// 0xef5a: WORD 'UNK_0xef5c' codep=0x224c parp=0xef5c
// ================================================

void UNK_0xef5c() // UNK_0xef5c
{
  Push(1); // 1
  UNK_0xef0e(); // UNK_0xef0e
  Push(0x000a);
  _slash_(); // /
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  Push(0x0017);
  MIN(); // MIN
  _2DUP(); // 2DUP
  UNK_0xef3e(); // UNK_0xef3e
  LoadData("UNK_0xed72"); // from 'PLANET      '
  C_ex__2(); // C!_2
  _2DUP(); // 2DUP
  UNK_0xef3e(); // UNK_0xef3e
  LoadData("UNK_0xed7a"); // from 'PLANET      '
  C_ex__2(); // C!_2
  UNK_0xef3e(); // UNK_0xef3e
  LoadData("UNK_0xed82"); // from 'PLANET      '
  C_ex__2(); // C!_2
}


// ================================================
// 0xef88: WORD 'UNK_0xef8a' codep=0x224c parp=0xef8a
// ================================================

void UNK_0xef8a() // UNK_0xef8a
{
  LoadData("UNK_0xed9a"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(0x0046);
  _slash_(); // /
  Push(cc__5); // 5
  MIN(); // MIN
  Push(Read16(sp)); // DUP
  Push(0); // 0
  Push(cc__5); // 5
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  UNK_0xedfd(); // UNK_0xedfd
  Push(0x0032);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  Push(Read16(sp)); // DUP
  Push(2); // 2
  Push(cc__6); // 6
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  UNK_0xedfd(); // UNK_0xedfd
  Push(0x0032);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Push(Pop()-1); // 1-

  label2:
  LoadData("UNK_0xeda2"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label3;
  Push(1); // 1
  MAX(); // MAX

  label3:
  LoadData("UNK_0xedd2"); // from 'PLANET      '
  C_ex__2(); // C!_2
}


// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x224c parp=0xefe0
// ================================================

void UNK_0xefe0() // UNK_0xefe0
{
  Push(0x004d);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(1); // 1
  return;

  label1:
  Push(0x004b);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(2); // 2
  return;

  label2:
  Push(0x0047);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  Push(cc__3); // 3
  return;

  label3:
  Push(0x0046);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  Push(cc__4); // 4
  return;

  label4:
  Push(0x0041);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label5;
  Pop(); // DROP
  Push(cc__5); // 5
  return;

  label5:
  Push(0x0042);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label6;
  Pop(); // DROP
  Push(cc__6); // 6
  return;

  label6:
  Push(0x004f);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label7;
  Pop(); // DROP
  Push(cc__7); // 7
  return;

  label7:
  Pop(); // DROP
}


// ================================================
// 0xf070: WORD 'UNK_0xf072' codep=0x224c parp=0xf072
// ================================================

void UNK_0xf072() // UNK_0xf072
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_S(); // @INST-S
  UNK_0xefe0(); // UNK_0xefe0
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf080: WORD 'UNK_0xf082' codep=0x224c parp=0xf082
// ================================================

void UNK_0xf082() // UNK_0xf082
{
  Push(cc__dash_2); // -2
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(cc__4); // 4
  return;

  label1:
  Push(cc__dash_1); // -1
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(cc__3); // 3
  return;

  label2:
  Push(0); // 0
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  Push(2); // 2
  return;

  label3:
  Push(1); // 1
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  Push(1); // 1
  return;

  label4:
  Push(Read16(sp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label5;
  Push(cc__5); // 5
  goto label6;

  label5:
  Push(0); // 0

  label6:
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf0e0: WORD 'UNK_0xf0e2' codep=0x224c parp=0xf0e2
// ================================================

void UNK_0xf0e2() // UNK_0xf0e2
{
  UNK_0xee44(); // UNK_0xee44
  Push(Read16(sp)); // DUP
  UNK_0xf072(); // UNK_0xf072
  _dash_(); // -
  UNK_0xf082(); // UNK_0xf082
  SWAP(); // SWAP
  LoadData("UNK_0xedd2"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(cc__4); // 4
  goto label2;

  label1:
  Push(2); // 2

  label2:
  _dash_(); // -
  UNK_0xf072(); // UNK_0xf072
  _dash_(); // -
  UNK_0xf082(); // UNK_0xf082
  LoadData("UNK_0xedc2"); // from 'PLANET      '
  C_ex__2(); // C!_2
  LoadData("UNK_0xedba"); // from 'PLANET      '
  C_ex__2(); // C!_2
}


// ================================================
// 0xf112: WORD 'UNK_0xf114' codep=0x224c parp=0xf114
// ================================================

void UNK_0xf114() // UNK_0xf114
{
  LoadData("UNK_0xedd2"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__4); // 4
  MIN(); // MIN
  UNK_0xedfd(); // UNK_0xedfd
  Push(0x0032);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(Pop()-1); // 1-

  label1:
  Push(0); // 0
  MAX(); // MAX
  LoadData("UNK_0xedca"); // from 'PLANET      '
  C_ex__2(); // C!_2
}


// ================================================
// 0xf134: WORD 'UNK_0xf136' codep=0x224c parp=0xf136
// ================================================

void UNK_0xf136() // UNK_0xf136
{
  UNK_0xedf1(); // UNK_0xedf1
  LoadData("UNK_0xed8a"); // from 'PLANET      '
  C_ex__2(); // C!_2
}


// ================================================
// 0xf13e: WORD 'UNK_0xf140' codep=0x224c parp=0xf140
// ================================================

void UNK_0xf140() // UNK_0xf140
{
  UNK_0xef5c(); // UNK_0xef5c
  UNK_0xef8a(); // UNK_0xef8a
  UNK_0xf114(); // UNK_0xf114
  UNK_0xf0e2(); // UNK_0xf0e2
}


// ================================================
// 0xf14a: WORD 'UNK_0xf14c' codep=0x224c parp=0xf14c
// ================================================

void UNK_0xf14c() // UNK_0xf14c
{
  Push(0); // 0
  LoadData("UNK_0xeda2"); // from 'PLANET      '
  C_ex__2(); // C!_2
  UNK_0xeef8(); // UNK_0xeef8
  UNK_0xf136(); // UNK_0xf136
  UNK_0xf140(); // UNK_0xf140
}


// ================================================
// 0xf15a: WORD 'SUBHYDRO' codep=0x1d29 parp=0xf167
// ================================================
// 0xf167: db 0x01 0x02 0x03 0x04 0x00 '     '

// ================================================
// 0xf16c: WORD 'TEMPHYDR' codep=0x1d29 parp=0xf179
// ================================================
// 0xf179: db 0x05 0x06 0x07 0x08 0x00 0x05 0x05 0x05 '        '

// ================================================
// 0xf181: WORD 'INFHYDRO' codep=0x1d29 parp=0xf18e
// ================================================
// 0xf18e: db 0x09 0x0a 0x0b 0x0c 0x07 0x0d 0x00 '       '

// ================================================
// 0xf195: WORD 'SUBATMO' codep=0x1d29 parp=0xf1a1
// ================================================
// 0xf1a1: db 0x0e 0x0c 0x07 0x06 0x00 '     '

// ================================================
// 0xf1a6: WORD 'TEMPATMO' codep=0x1d29 parp=0xf1b3
// ================================================
// 0xf1b3: db 0x0f 0x10 0x11 0x0f 0x12 0x13 0x14 0x00 0x0f '         '

// ================================================
// 0xf1bc: WORD 'INFATMO' codep=0x1d29 parp=0xf1c8
// ================================================
// 0xf1c8: db 0x0e 0x15 0x16 0x0c 0x07 0x0d 0x00 '       '

// ================================================
// 0xf1cf: WORD 'UNK_0xf1d1' codep=0x224c parp=0xf1d1
// ================================================

void UNK_0xf1d1() // UNK_0xf1d1
{
  LoadData("UNK_0xedc2"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xedba"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
}


// ================================================
// 0xf1df: WORD 'UNK_0xf1e1' codep=0x224c parp=0xf1e1
// ================================================

void UNK_0xf1e1() // UNK_0xf1e1
{
  UNK_0xf1d1(); // UNK_0xf1d1
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  Push(pp_SUBHYDRO); // SUBHYDRO
  goto label2;

  label1:
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Push(0); // 0
  Push(cc__7); // 7
  RRND(); // RRND
  Push(pp_INFHYDRO); // INFHYDRO
  goto label2;

  label3:
  Push(0); // 0
  Push(cc__8); // 8
  RRND(); // RRND
  Push(pp_TEMPHYDR); // TEMPHYDR

  label2:
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xf219: WORD 'UNK_0xf21b' codep=0x224c parp=0xf21b
// ================================================

void UNK_0xf21b() // UNK_0xf21b
{
  LoadData("UNK_0xedaa"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_R(); // >R

  label2:
  UNK_0xf1e1(); // UNK_0xf1e1
  Push(Read16(sp)); // DUP
  R_at_(); // R@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  goto label2;

  label1:
  R_gt_(); // R>
  Pop(); // DROP
  Push(pp_HYDRO); // HYDRO
  _ex__2(); // !_2
}


// ================================================
// 0xf245: WORD 'UNK_0xf247' codep=0x224c parp=0xf247
// ================================================

void UNK_0xf247() // UNK_0xf247
{
  UNK_0xf1d1(); // UNK_0xf1d1
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  Push(pp_SUBATMO); // SUBATMO
  goto label2;

  label1:
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Push(0); // 0
  Push(cc__7); // 7
  RRND(); // RRND
  Push(pp_INFATMO); // INFATMO
  goto label2;

  label3:
  Push(0); // 0
  Push(0x0009);
  RRND(); // RRND
  Push(pp_TEMPATMO); // TEMPATMO

  label2:
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x224c parp=0xf283
// ================================================

void UNK_0xf283() // UNK_0xf283
{
  LoadData("UNK_0xedd2"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;

  label2:
  UNK_0xf247(); // UNK_0xf247
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label2;
  goto label3;

  label1:
  Push(0); // 0

  label3:
  Push(pp_ATMO); // ATMO
  _ex__2(); // !_2
}


// ================================================
// 0xf29f: WORD 'UNK_0xf2a1' codep=0x224c parp=0xf2a1
// ================================================

void UNK_0xf2a1() // UNK_0xf2a1
{
  LoadData("UNK_0xedb2"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  Push(pp_HYDRO); // HYDRO
  _ex__2(); // !_2
  Push(0x000f);
  Push(pp_ATMO); // ATMO
  _ex__2(); // !_2
  return;

  label1:
  LoadData("UNK_0xeda2"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label2;
  Push(cc__5); // 5
  Push(pp_HYDRO); // HYDRO
  _ex__2(); // !_2
  Push(0x000f);
  Push(pp_ATMO); // ATMO
  _ex__2(); // !_2
  return;

  label2:
  UNK_0xf21b(); // UNK_0xf21b
  UNK_0xf283(); // UNK_0xf283
}

// 0xf2db: db 0x4c 0x22 0xaf 0x64 0x83 0x4a 0x1f 0x7a 0xb8 0xed 0x92 0x0c 0xc0 0xed 0x92 0x0c 0x7f 0x0e 0x92 0x0f 0xe7 0x0f 0xdf 0x79 0x90 0x16 0x4c 0x22 0x3a 0x5f 0xae 0x0b 0x41 0x0e 0x5d 0x17 0xe0 0x01 0x2d 0x12 0xfa 0x15 0x0a 0x00 0x5d 0x17 0xc0 0x03 0xf2 0x0e 0x92 0x0f 0x5d 0x17 0xe0 0x01 0xdb 0xf2 0xb3 0x0e 0xf2 0x0e 0x4c 0x0f 0xe7 0x0f 0xb3 0x0e 0xf2 0x0e 0x4c 0x0f 0x72 0x0f 0x90 0x16 'L" d J z              y  L":_  A ]   -     ]       ]         L       L r   '

// ================================================
// 0xf327: WORD 'UNK_0xf329' codep=0x224c parp=0xf329
// ================================================

void UNK_0xf329() // UNK_0xf329
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xeda2"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf335: WORD 'RUGS' codep=0x1d29 parp=0xf33e
// ================================================
// 0xf33e: db 0x02 0x00 0x0a 0x4d 0x02 0x00 0x1f 0x4d 0x02 0x00 0x35 0x4d 0x02 0x00 0x48 0x4d 0x02 0x00 0x5f 0x4d 0x02 0x00 0x75 0x4d 0x02 0x00 0x88 0x4d 0x02 0x00 0x99 0x4d '   M   M  5M  HM  _M  uM   M   M'

// ================================================
// 0xf35e: WORD 'UNK_0xf360' codep=0x224c parp=0xf360
// ================================================

void UNK_0xf360() // UNK_0xf360
{
  Push(0); // 0
  Push(cc__8); // 8
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(pp_RUGS); // RUGS
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
}


// ================================================
// 0xf372: WORD 'UNK_0xf374' codep=0x224c parp=0xf374
// ================================================

void UNK_0xf374() // UNK_0xf374
{
  UNK_0xf329(); // UNK_0xf329
  if (Pop() == 0) goto label1;
  UNK_0xf360(); // UNK_0xf360
  goto label2;

  label1:
  Push2Words("0.");

  label2:
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf388: WORD 'UNK_0xf38a' codep=0x224c parp=0xf38a
// ================================================

void UNK_0xf38a() // UNK_0xf38a
{
  Push2Words("0.");
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("0.");
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf398: WORD 'UNK_0xf39a' codep=0x224c parp=0xf39a
// ================================================

void UNK_0xf39a() // UNK_0xf39a
{
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
}


// ================================================
// 0xf3aa: WORD 'CLIST1' codep=0x1d29 parp=0xf3b5
// ================================================
// 0xf3b5: db 0x02 0x00 0xcf 0x49 0x02 0x00 0xae 0x4b 0x02 0x00 0xdb 0x4b 0x02 0x00 0x15 0x4c 0x02 0x00 0x3e 0x4c '   I   K   K   L  >L'

// ================================================
// 0xf3c9: WORD 'CLIST2' codep=0x1d29 parp=0xf3d4
// ================================================
// 0xf3d4: db 0x02 0x00 0xf2 0x49 0x02 0x00 0x93 0x4c 0x02 0x00 0x8a 0x49 0x02 0x00 0x65 0x48 0x02 0x00 0x6b 0x4c '   I   L   I  eH  kL'

// ================================================
// 0xf3e8: WORD 'CLIST3' codep=0x1d29 parp=0xf3f3
// ================================================
// 0xf3f3: db 0x02 0x00 0xe1 0x49 0x02 0x00 0x00 0x4c 0x02 0x00 0x2b 0x4c 0x02 0x00 0x57 0x4c 0x02 0x00 0xf2 0x49 '   I   L  +L  WL   I'

// ================================================
// 0xf407: WORD 'UNK_0xf409' codep=0x224c parp=0xf409
// ================================================

void UNK_0xf409() // UNK_0xf409
{
  Push(0x4a89); Pust(0x0002);
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_CLIST1); // CLIST1
  UNK_0xf39a(); // UNK_0xf39a
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf41d: WORD '(SAND)' codep=0x1d29 parp=0xf428
// ================================================
// 0xf428: db 0x02 0x00 0x04 0x4b 0x02 0x00 0x1a 0x4b 0x02 0x00 0x49 0x4b 0x02 0x00 0x31 0x4b '   K   K  IK  1K'

// ================================================
// 0xf438: WORD 'UNK_0xf43a' codep=0x224c parp=0xf43a
// ================================================

void UNK_0xf43a() // UNK_0xf43a
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_CLIST3); // CLIST3
  UNK_0xf39a(); // UNK_0xf39a
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  Push(0x001f);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Push(0); // 0
  Push(cc__4); // 4
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(pp__ro_SAND_rc_); // (SAND)
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
  goto label3;

  label2:
  Push(0x4a70); Pust(0x0002);

  label3:
  goto label4;

  label1:
  Push(0x4a3e); Pust(0x0002);
  Push2Words("0.");
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2

  label4:
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf48c: WORD 'UNK_0xf48e' codep=0x224c parp=0xf48e
// ================================================

void UNK_0xf48e() // UNK_0xf48e
{
  Push(pp_CLIST2); // CLIST2
  UNK_0xf39a(); // UNK_0xf39a
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xf43a(); // UNK_0xf43a
}


// ================================================
// 0xf49a: WORD 'UNK_0xf49c' codep=0x224c parp=0xf49c
// ================================================

void UNK_0xf49c() // UNK_0xf49c
{
  Push(0x4ab0); Pust(0x0002);
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0x4ada); Pust(0x0002);
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf4b2: WORD 'UNK_0xf4b4' codep=0x224c parp=0xf4b4
// ================================================

void UNK_0xf4b4() // UNK_0xf4b4
{
  Push(0x4b77); Pust(0x0002);
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf4c6: WORD '(TERRAIN' codep=0x4b3b parp=0xf4d3
// ================================================
// 0xf4d3: db 0x05 0x00 0xb4 0xf4 0x01 0x00 0x8a 0xf3 0x02 0x00 0x8e 0xf4 0x03 0x00 0x09 0xf4 0x04 0x00 0x9c 0xf4 0x05 0x00 0x3a 0xf4 '                      : '

// ================================================
// 0xf4eb: WORD 'UNK_0xf4ed' codep=0x224c parp=0xf4ed
// ================================================

void UNK_0xf4ed() // UNK_0xf4ed
{
  LoadData("UNK_0xedaa"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Pop();
  switch(Pop()) // (TERRAIN
  {
  case 1:
    UNK_0xf38a(); // UNK_0xf38a
    break;
  case 2:
    UNK_0xf48e(); // UNK_0xf48e
    break;
  case 3:
    UNK_0xf409(); // UNK_0xf409
    break;
  case 4:
    UNK_0xf49c(); // UNK_0xf49c
    break;
  case 5:
    UNK_0xf43a(); // UNK_0xf43a
    break;
  default:
    UNK_0xf4b4(); // UNK_0xf4b4
    break;

  }
}

// 0xf4f5: db 0x4c 0x22 0x20 0x0f 0x57 0xaa 0x16 0x6d 0x90 0x16 'L"  W  m  '

// ================================================
// 0xf4ff: WORD 'UNK_0xf501' codep=0x224c parp=0xf501
// ================================================

void UNK_0xf501() // UNK_0xf501
{
  Push(pp__ro_ELIST_rc_); // (ELIST)
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf4f7);
  ALL(); // ALL
  IFIRST(); // IFIRST
  Push(1); // 1
  Push(0x65ec); // IFIELD(TEXT-CO)
  _ex__2(); // !_2
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf51b: WORD 'PLAN-RUL' codep=0x224c parp=0xf528
// ================================================
// entry

void PLAN_dash_RUL() // PLAN-RUL
{
  UNK_0xf501(); // UNK_0xf501
  UNK_0xeea4(); // UNK_0xeea4
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(0x0011);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  UNK_0xf140(); // UNK_0xf140
  goto label2;

  label1:
  UNK_0xf14c(); // UNK_0xf14c

  label2:
  UNK_0xf2a1(); // UNK_0xf2a1
  UNK_0xf4ed(); // UNK_0xf4ed
  UNK_0xf374(); // UNK_0xf374
  ICLOSE(); // ICLOSE
}

// 0xf54e: db 0x53 0x45 0x54 0x54 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SETTER____________ '
  