// ====== OVERLAY 'LAND-OV' ======

#include"interface.h"

// store offset = 0xf190
// overlay size   = 0x03d0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:         FILLELL  codep:0x224c parp:0x89aa size:0x003b C-string:'FILLELL'
// 1870:           HLINE  codep:0x89ef parp:0x89ef size:0x001f C-string:'HLINE'
// 1871:      UNK_0x8a10  codep:0x0a39 parp:0x8a10 size:0x001a C-string:'UNK_0x8a10'
// 1872:      UNK_0x8a2c  codep:0x906d parp:0x8a2c size:0x000f C-string:'UNK_0x8a2c'
// 1873:      UNK_0x8a3d  codep:0x89fd parp:0x8a3d size:0x0038 C-string:'UNK_0x8a3d'
// 1874:          >1FONT  codep:0x224c parp:0x8a80 size:0x0006 C-string:'_gt_1FONT'
// 1875:          >2FONT  codep:0x224c parp:0x8a91 size:0x0006 C-string:'_gt_2FONT'
// 1876:          >3FONT  codep:0x224c parp:0x8aa2 size:0x0006 C-string:'_gt_3FONT'
// 1877:          >0FONT  codep:0x224c parp:0x8ab3 size:0x0008 C-string:'_gt_0FONT'
// 1878:           LDPAL  codep:0x224c parp:0x8ac5 size:0x0029 C-string:'LDPAL'
// 1879:      UNK_0x8af0  codep:0xbd16 parp:0x8af0 size:0xffffffff C-string:'UNK_0x8af0'
// 1880:             :8>  codep:0x224c parp:0x8af7 size:0x0006 C-string:'_c_8_gt_'
// 1881:             )8>  codep:0x224c parp:0x8b05 size:0x0006 C-string:'_rc_8_gt_'
// 1882:            2<8>  codep:0x224c parp:0x8b14 size:0x0006 C-string:'_2_st_8_gt_'
// 1883:             <8>  codep:0x224c parp:0x8b22 size:0x0006 C-string:'_st_8_gt_'
// 1884:            HERC  codep:0x224c parp:0x8b31 size:0x0010 C-string:'HERC'
// 1885:         #VECTOR  codep:0x2214 parp:0x8b4d size:0x0002 C-string:'_n_VECTOR'
// 1886:         TREJECT  codep:0x1d29 parp:0x8b5b size:0x0006 C-string:'TREJECT'
// 1887:         CLIPPER  codep:0x8b6d parp:0x8b6d size:0x000a C-string:'CLIPPER'
// 1888:         SCANPOL  codep:0x8b83 parp:0x8b83 size:0x000a C-string:'SCANPOL'
// 1889:         >PLANES  codep:0x8b99 parp:0x8b99 size:0x000a C-string:'_gt_PLANES'
// 1890:           LFILL  codep:0x8bad parp:0x8bad size:0x000a C-string:'LFILL'
// 1891:             BLT  codep:0x8bbf parp:0x8bbf size:0x000a C-string:'BLT'
// 1892:         LFILLPO  codep:0x224c parp:0x8bd5 size:0x0030 C-string:'LFILLPO'
// 1893:         SETCLIP  codep:0x224c parp:0x8c11 size:0x0044 C-string:'SETCLIP'
// 1894:         VDCLIPS  codep:0x224c parp:0x8c61 size:0x03c5 C-string:'VDCLIPS'
// 1895:      UNK_0x9028  codep:0xeb26 parp:0x9028 size:0x0068 C-string:'UNK_0x9028'
// 1896:      UNK_0x9092  codep:0x7417 parp:0x9092 size:0x067c C-string:'UNK_0x9092'
// 1897:      UNK_0x9710  codep:0x9449 parp:0x9710 size:0x0536 C-string:'UNK_0x9710'
// 1898:      UNK_0x9c48  codep:0x224c parp:0x9c48 size:0x00be C-string:'UNK_0x9c48'
// 1899:      UNK_0x9d08  codep:0x1690 parp:0x9d08 size:0x0295 C-string:'UNK_0x9d08'
// 1900:      UNK_0x9f9f  codep:0x224c parp:0x9f9f size:0x0033 C-string:'UNK_0x9f9f'
// 1901:      UNK_0x9fd4  codep:0x224c parp:0x9fd4 size:0x001d C-string:'UNK_0x9fd4'
// 1902:      UNK_0x9ff3  codep:0x224c parp:0x9ff3 size:0x0d1c C-string:'UNK_0x9ff3'
// 1903:      UNK_0xad11  codep:0xab75 parp:0xad11 size:0x0bfd C-string:'UNK_0xad11'
// 1904:      UNK_0xb910  codep:0x91b8 parp:0xb910 size:0x008f C-string:'UNK_0xb910'
// 1905:      UNK_0xb9a1  codep:0x47b9 parp:0xb9a1 size:0x1881 C-string:'UNK_0xb9a1'
// 1906:      UNK_0xd224  codep:0xc527 parp:0xd224 size:0x0b56 C-string:'UNK_0xd224'
// 1907:      UNK_0xdd7c  codep:0x4025 parp:0xdd7c size:0x0020 C-string:'UNK_0xdd7c'
// 1908:      UNK_0xdd9e  codep:0x1219 parp:0xdd9e size:0x0784 C-string:'UNK_0xdd9e'
// 1909:      UNK_0xe524  codep:0x0010 parp:0xe524 size:0x010a C-string:'UNK_0xe524'
// 1910:      UNK_0xe630  codep:0x0ef2 parp:0xe630 size:0x0015 C-string:'UNK_0xe630'
// 1911:      UNK_0xe647  codep:0xfadd parp:0xe647 size:0x0000 C-string:'UNK_0xe647'
// 1912:      UNK_0xe649  codep:0x0615 parp:0xe649 size:0x01ce C-string:'UNK_0xe649'
// 1913:      UNK_0xe819  codep:0x143d parp:0xe819 size:0x0921 C-string:'UNK_0xe819'
// 1914:      UNK_0xf13c  codep:0x60f0 parp:0xf13c size:0x0017 C-string:'UNK_0xf13c'
// 1915:      UNK_0xf155  codep:0xea7e parp:0xf155 size:0x004f C-string:'UNK_0xf155'
// 1916:      UNK_0xf1a6  codep:0x7420 parp:0xf1a6 size:0x0003 C-string:'UNK_0xf1a6'
// 1917:      UNK_0xf1ab  codep:0x7394 parp:0xf1ab size:0x0006 C-string:'UNK_0xf1ab'
// 1918:      UNK_0xf1b3  codep:0x1d29 parp:0xf1b3 size:0x0002 C-string:'UNK_0xf1b3'
// 1919:      UNK_0xf1b7  codep:0x224c parp:0xf1b7 size:0x002e C-string:'UNK_0xf1b7'
// 1920:      UNK_0xf1e7  codep:0x224c parp:0xf1e7 size:0x0050 C-string:'UNK_0xf1e7'
// 1921:      UNK_0xf239  codep:0x224c parp:0xf239 size:0x0010 C-string:'UNK_0xf239'
// 1922:      UNK_0xf24b  codep:0x224c parp:0xf24b size:0x0014 C-string:'UNK_0xf24b'
// 1923:      UNK_0xf261  codep:0x224c parp:0xf261 size:0x0065 C-string:'UNK_0xf261'
// 1924:      UNK_0xf2c8  codep:0x224c parp:0xf2c8 size:0x00d2 C-string:'UNK_0xf2c8'
// 1925:      UNK_0xf39c  codep:0x224c parp:0xf39c size:0x0014 C-string:'UNK_0xf39c'
// 1926:      UNK_0xf3b2  codep:0x224c parp:0xf3b2 size:0x0037 C-string:'UNK_0xf3b2'
// 1927:      UNK_0xf3eb  codep:0x224c parp:0xf3eb size:0x0020 C-string:'UNK_0xf3eb'
// 1928:      UNK_0xf40d  codep:0x224c parp:0xf40d size:0x0037 C-string:'UNK_0xf40d'
// 1929:      UNK_0xf446  codep:0x224c parp:0xf446 size:0x000a C-string:'UNK_0xf446'
// 1930:      UNK_0xf452  codep:0x224c parp:0xf452 size:0x004c C-string:'UNK_0xf452'
// 1931:      UNK_0xf4a0  codep:0x224c parp:0xf4a0 size:0x002c C-string:'UNK_0xf4a0'
// 1932:      UNK_0xf4ce  codep:0x224c parp:0xf4ce size:0x0036 C-string:'UNK_0xf4ce'
// 1933:           ?LAND  codep:0x224c parp:0xf50e size:0x0018 C-string:'_ask_LAND'
// 1934:         ?LAUNCH  codep:0x224c parp:0xf532 size:0x0571 C-string:'_ask_LAUNCH'
// 1935:      UNK_0xfaa5  codep:0x0000 parp:0xfaa5 size:0xfffffabb C-string:'UNK_0xfaa5'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char TREJECT[6] = {0x9a, 0x41, 0x00, 0x37, 0x7f, 0xc3}; // TREJECT
unsigned char UNK_0xf1b3[2] = {0x00, 0x00}; // UNK_0xf1b3

const unsigned short int cc__n_VECTOR = 0x0006; // #VECTOR


// 0xf1a2: db 0x3c 0x00 '< '

// ================================================
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x7420 parp=0xf1a6
// ================================================
// 0xf1a6: db 0x14 0x34 0x0f ' 4 '

// ================================================
// 0xf1a9: WORD 'UNK_0xf1ab' codep=0x7394 parp=0xf1ab
// ================================================
// 0xf1ab: db 0x20 0x02 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xf1b1: WORD 'UNK_0xf1b3' codep=0x1d29 parp=0xf1b3
// ================================================
// 0xf1b3: db 0x00 0x00 '  '

// ================================================
// 0xf1b5: WORD 'UNK_0xf1b7' codep=0x224c parp=0xf1b7
// ================================================

void UNK_0xf1b7() // UNK_0xf1b7
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf1ab(); // UNK_0xf1ab
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0320);
  _minus_(); // -
  Push(0); // 0
  SQRT(); // SQRT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0320);
  Push(Pop() + Pop()); // +

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1e5: WORD 'UNK_0xf1e7' codep=0x224c parp=0xf1e7
// ================================================

void UNK_0xf1e7() // UNK_0xf1e7
{
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xf1b3); // UNK_0xf1b3
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf1b7(); // UNK_0xf1b7
  Push(0x0028);
  _slash_(); // /
  SWAP(); // SWAP
  OVER(); // OVER
  _minus_(); // -
  Push(0); // 0
  MAX(); // MAX
  INST_minus_QT(); // INST-QT
  _ex_(); // !

  label2:
  CDROP(); // CDROP
  goto label3;

  label1:
  Push(0); // 0

  label3:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  YELLOW(); // YELLOW
  Push(0x4fa9);
  _ex_(); // !
  UNK_0x9c48(); // UNK_0x9c48
}


// ================================================
// 0xf249: WORD 'UNK_0xf24b' codep=0x224c parp=0xf24b
// ================================================

void UNK_0xf24b() // UNK_0xf24b
{
  Push(pp_UNK_0xf1b3); // UNK_0xf1b3
  ON(); // ON
  UNK_0xf1e7(); // UNK_0xf1e7
  Pop(); // DROP
  Push(pp_UNK_0xf1b3); // UNK_0xf1b3
  _099(); // 099
  Push(0xb6ec);
  MODULE(); // MODULE
}


// ================================================
// 0xf25f: WORD 'UNK_0xf261' codep=0x224c parp=0xf261
// ================================================

void UNK_0xf261() // UNK_0xf261
{
  UNK_0x9fd4(); // UNK_0x9fd4
  UNK_0xf239(); // UNK_0xf239
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4327(); // UNK_0x4327
  UNK_0x5043(); // UNK_0x5043
  UNK_0x4156(); // UNK_0x4156
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x202e(); // UNK_0x202e
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4855(); // UNK_0x4855
  UNK_0x504b(); // UNK_0x504b
  UNK_0x4922(); // UNK_0x4922
  UNK_0x2055(); // UNK_0x2055
  UNK_0x4544(); // UNK_0x4544
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x2049(); // UNK_0x2049
  UNK_0x5245(); // UNK_0x5245
  UNK_0x5357(); // UNK_0x5357
  UNK_0x454a(); // UNK_0x454a
  UNK_0x2046(); // UNK_0x2046
  UNK_0x5944(); // UNK_0x5944
  TYPE(); // TYPE
  UNK_0x9f9f(); // UNK_0x9f9f
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x451a(); // UNK_0x451a
  UNK_0x545a(); // UNK_0x545a
  UNK_0x4554(); // UNK_0x4554
  UNK_0x454f(); // UNK_0x454f
  UNK_0x4722(); // UNK_0x4722
  UNK_0x4154(); // UNK_0x4154
  UNK_0x4958(); // UNK_0x4958
  UNK_0x5956(); // UNK_0x5956
  UNK_0x2030(); // UNK_0x2030
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0x2047(); // UNK_0x2047
  UNK_0x2e30(); // UNK_0x2e30
  UNK_0xe630(); // UNK_0xe630
  UNK_0x5d08(); // UNK_0x5d08
  UNK_0x8819(); // UNK_0x8819
  UNK_0x5d15(); // UNK_0x5d15
  UNK_0xe819(); // UNK_0xe819
  UNK_0x2e05(); // UNK_0x2e05
  UNK_0xad11(); // UNK_0xad11
  UNK_0xdd9e(); // UNK_0xdd9e
  UNK_0x32a5(); // UNK_0x32a5
  UNK_0x9710(); // UNK_0x9710
  UNK_0x324b(); // UNK_0x324b
  UNK_0x3f10(); // UNK_0x3f10
  UNK_0x9092(); // UNK_0x9092
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf2c6: WORD 'UNK_0xf2c8' codep=0x224c parp=0xf2c8
// ================================================
  UNK_0xd224(); // UNK_0xd224

void UNK_0xf2c8() // UNK_0xf2c8
{
  UNK_0x37a1(); // UNK_0x37a1
  UNK_0x2ef4(); // UNK_0x2ef4
  UNK_0x1f55(); // UNK_0x1f55
  UNK_0xdd7c(); // UNK_0xdd7c
  UNK_0x32a5(); // UNK_0x32a5
  UNK_0xb910(); // UNK_0xb910
  UNK_0xb9a1(); // UNK_0xb9a1
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x1f41(); // UNK_0x1f41
  Push(pp_SIGNEXT); // SIGNEXT
  UNK_0x5247(); // UNK_0x5247
  UNK_0x4549(); // UNK_0x4549
  UNK_0x4350(); // UNK_0x4350
  UNK_0x205b(); // UNK_0x205b
  UNK_0x4f4e(); // UNK_0x4f4e
  UNK_0x4145(); // UNK_0x4145
  UNK_0x4f56(); // UNK_0x4f56
  UNK_0x2054(); // UNK_0x2054
  UNK_0x5256(); // UNK_0x5256
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x4d55(); // UNK_0x4d55
  UNK_0x534b(); // UNK_0x534b
  UNK_0x4955(); // UNK_0x4955
  UNK_0x4e51(); // UNK_0x4e51
  UNK_0xf13c(); // UNK_0xf13c
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x0e41(); // UNK_0x0e41
  _star_ASSIGN(); // *ASSIGN
  UNK_0x4156(); // UNK_0x4156
  UNK_0x5354(); // UNK_0x5354
  UNK_0x494a(); // UNK_0x494a
  UNK_0x2052(); // UNK_0x2052
  UNK_0x534b(); // UNK_0x534b
  UNK_0x2055(); // UNK_0x2055
  UNK_0x9ff3(); // UNK_0x9ff3
  UNK_0xf1a6(); // UNK_0xf1a6
  COUNT(); // COUNT
  TYPE(); // TYPE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x2015(); // UNK_0x2015
  UNK_0x5245(); // UNK_0x5245
  UNK_0x5343(); // UNK_0x5343
  UNK_0x454a(); // UNK_0x454a
  UNK_0x2046(); // UNK_0x2046
  UNK_0x4e51(); // UNK_0x4e51
  UNK_0x5022(); // UNK_0x5022
  UNK_0x414e(); // UNK_0x414e
  UNK_0x4550(); // UNK_0x4550
  UNK_0x2056(); // UNK_0x2056
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  INST_minus_QT(); // INST-QT
  _ask_(); // ?
  ICLOSE(); // ICLOSE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x200d(); // UNK_0x200d
  UNK_0x4e4b(); // UNK_0x4e4b
  _star_ASSIGN(); // *ASSIGN
  UNK_0x535b(); // UNK_0x535b
  UNK_0x4556(); // UNK_0x4556
  UNK_0x204f(); // UNK_0x204f
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(0); // 0
  _dot_R(); // .R
  PRINT(",", 1); // (.")
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(0); // 0
  _dot_R(); // .R
  ICLOSE(); // ICLOSE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4e0e(); // UNK_0x4e0e
  UNK_0x2051(); // UNK_0x2051
  UNK_0x5555(); // UNK_0x5555
  Push(pp_A_minus_POSTU); // A-POSTU
  UNK_0x564b(); // UNK_0x564b
  UNK_0x5251(); // UNK_0x5251
  UNK_0xf155(); // UNK_0xf155
  UNK_0xb9a1(); // UNK_0xb9a1
  UNK_0xb9a1(); // UNK_0xb9a1
  UNK_0x5da1(); // UNK_0x5da1
  UNK_0x8819(); // UNK_0x8819
  UNK_0x7f15(); // UNK_0x7f15
  Push(pp_THIS_minus_BU); // THIS-BU
  UNK_0x3219(); // UNK_0x3219
  UNK_0x5d02(); // UNK_0x5d02
  UNK_0xe819(); // UNK_0xe819
  UNK_0x3d05(); // UNK_0x3d05
  UNK_0xad11(); // UNK_0xad11
  UNK_0xdd9e(); // UNK_0xdd9e
  UNK_0xfaa5(); // UNK_0xfaa5
  UNK_0x4017(); // UNK_0x4017
  UNK_0x4001(); // UNK_0x4001
  UNK_0x9092(); // UNK_0x9092
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf39a: WORD 'UNK_0xf39c' codep=0x224c parp=0xf39c
// ================================================
  UNK_0xe524(); // UNK_0xe524

void UNK_0xf39c() // UNK_0xf39c
{
  UNK_0xf1e7(); // UNK_0xf1e7
  Push(0x0140);
  MIN(); // MIN
  Push(0x0028);
  Push(Pop() * Pop()); // *
  UNK_0xf1b7(); // UNK_0xf1b7
  _st_(); // <
}


// ================================================
// 0xf3b0: WORD 'UNK_0xf3b2' codep=0x224c parp=0xf3b2
// ================================================

void UNK_0xf3b2() // UNK_0xf3b2
{
  UNK_0xf39c(); // UNK_0xf39c
  DUP(); // DUP
  if (Pop() == 0) return;
  UNK_0x9fd4(); // UNK_0x9fd4
  UNK_0x9c48(); // UNK_0x9c48
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4924(); // UNK_0x4924
  UNK_0x5350(); // UNK_0x5350
  UNK_0x4657(); // UNK_0x4657
  UNK_0x4948(); // UNK_0x4948
  UNK_0x4945(); // UNK_0x4945
  UNK_0x4e47(); // UNK_0x4e47
  UNK_0x2056(); // UNK_0x2056
  UNK_0x5548(); // UNK_0x5548
  UNK_0x4c47(); // UNK_0x4c47
  UNK_0x4622(); // UNK_0x4622
  UNK_0x5251(); // UNK_0x5251
  _star_ASSIGN(); // *ASSIGN
  _st_ASKMOU(); // <ASKMOU
  UNK_0x2047(); // UNK_0x2047
  UNK_0x414e(); // UNK_0x414e
  _4TH_gt_DOS(); // 4TH>DOS
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0xe649(); // UNK_0xe649
  UNK_0x6908(); // UNK_0x6908
  UNK_0x9028(); // UNK_0x9028
}


// ================================================
// 0xf3e9: WORD 'UNK_0xf3eb' codep=0x224c parp=0xf3eb
// ================================================

void UNK_0xf3eb() // UNK_0xf3eb
{
  UNK_0xf1e7(); // UNK_0xf1e7
  Push(0x0140);
  MIN(); // MIN
  DUP(); // DUP
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x0014);
  Push(Pop() * Pop()); // *
  UNK_0xf1b7(); // UNK_0xf1b7
  _st_(); // <
}


// ================================================
// 0xf40b: WORD 'UNK_0xf40d' codep=0x224c parp=0xf40d
// ================================================

void UNK_0xf40d() // UNK_0xf40d
{
  UNK_0xf3eb(); // UNK_0xf3eb
  DUP(); // DUP
  if (Pop() == 0) return;
  UNK_0x9fd4(); // UNK_0x9fd4
  UNK_0x9c48(); // UNK_0x9c48
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4924(); // UNK_0x4924
  UNK_0x5350(); // UNK_0x5350
  UNK_0x4657(); // UNK_0x4657
  UNK_0x4948(); // UNK_0x4948
  UNK_0x4945(); // UNK_0x4945
  UNK_0x4e47(); // UNK_0x4e47
  UNK_0x2056(); // UNK_0x2056
  UNK_0x5548(); // UNK_0x5548
  UNK_0x4c47(); // UNK_0x4c47
  UNK_0x4622(); // UNK_0x4622
  UNK_0x5251(); // UNK_0x5251
  UNK_0x5222(); // UNK_0x5222
  UNK_0x2d47(); // UNK_0x2d47
  UNK_0x414e(); // UNK_0x414e
  UNK_0x4e57(); // UNK_0x4e57
  UNK_0x4845(); // UNK_0x4845
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0xe649(); // UNK_0xe649
  UNK_0x6908(); // UNK_0x6908
  UNK_0x9028(); // UNK_0x9028
}


// ================================================
// 0xf444: WORD 'UNK_0xf446' codep=0x224c parp=0xf446
// ================================================

void UNK_0xf446() // UNK_0xf446
{
  UNK_0xf1b7(); // UNK_0xf1b7
  Push(0x031f);
  _gt_(); // >
}


// ================================================
// 0xf450: WORD 'UNK_0xf452' codep=0x224c parp=0xf452
// ================================================

void UNK_0xf452() // UNK_0xf452
{
  UNK_0xf446(); // UNK_0xf446
  DUP(); // DUP
  if (Pop() == 0) return;
  UNK_0x9fd4(); // UNK_0x9fd4
  UNK_0x9c48(); // UNK_0x9c48
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5426(); // UNK_0x5426
  UNK_0x494a(); // UNK_0x494a
  UNK_0x2055(); // UNK_0x2055
  UNK_0x4c52(); // UNK_0x4c52
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x5447(); // UNK_0x5447
  UNK_0x5329(); // UNK_0x5329
  UNK_0x4722(); // UNK_0x4722
  UNK_0x4154(); // UNK_0x4154
  UNK_0x4958(); // UNK_0x4958
  UNK_0x5956(); // UNK_0x5956
  UNK_0x5722(); // UNK_0x5722
  UNK_0x4c4b(); // UNK_0x4c4b
  UNK_0x204e(); // UNK_0x204e
  UNK_0x5245(); // UNK_0x5245
  UNK_0x5357(); // UNK_0x5357
  UNK_0x204a(); // UNK_0x204a
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0xe647(); // UNK_0xe647
  UNK_0x9d08(); // UNK_0x9d08
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x0c41(); // UNK_0x0c41
  UNK_0x4855(); // UNK_0x4855
  UNK_0x504b(); // UNK_0x504b
  UNK_0x5329(); // UNK_0x5329
  UNK_0x4822(); // UNK_0x4822
  UNK_0x4c57(); // UNK_0x4c57
  UNK_0x2e4e(); // UNK_0x2e4e
  TYPE(); // TYPE
  BEEP(); // BEEP
}


// ================================================
// 0xf49e: WORD 'UNK_0xf4a0' codep=0x224c parp=0xf4a0
// ================================================

void UNK_0xf4a0() // UNK_0xf4a0
{
  UNK_0xf39c(); // UNK_0xf39c
  Push(pp__ask_FUEL_minus_D); // ?FUEL-D
  _ex_(); // !
  Push(cc__minus_1); // -1
  Push(pp_GWF); // GWF
  _ex_(); // !
  UNK_0xf24b(); // UNK_0xf24b
  Push(0xbd55);
  MODULE(); // MODULE
  Push(pp__ask_FUEL_minus_D); // ?FUEL-D
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf2c8(); // UNK_0xf2c8
  return;

  label1:
  UNK_0xf446(); // UNK_0xf446
  if (Pop() == 0) return;
  UNK_0xf261(); // UNK_0xf261
}


// ================================================
// 0xf4cc: WORD 'UNK_0xf4ce' codep=0x224c parp=0xf4ce
// ================================================

void UNK_0xf4ce() // UNK_0xf4ce
{
  Push(pp_GWF); // GWF
  Push(Read16(Pop())); // @
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf452(); // UNK_0xf452
  if (Pop() == 0) goto label1;
  Push(pp_GWF); // GWF
  ON(); // ON
  goto label3;

  label1:
  UNK_0xf3b2(); // UNK_0xf3b2
  if (Pop() == 0) goto label2;
  Push(pp_GWF); // GWF
  ON(); // ON
  goto label3;

  label2:
  UNK_0xf40d(); // UNK_0xf40d
  Push(pp_GWF); // GWF
  _ex_(); // !

  label3:
  Push(pp_GWF); // GWF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf504: WORD '?LAND' codep=0x224c parp=0xf50e
// ================================================

void _ask_LAND() // ?LAND
{
  Push(pp__ask_G_minus_AWAR); // ?G-AWAR
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf4ce(); // UNK_0xf4ce
  if (Pop() == 0) goto label2;
  UNK_0xf4a0(); // UNK_0xf4a0

  label2:
  return;

  label1:
  UNK_0xf4a0(); // UNK_0xf4a0
}


// ================================================
// 0xf526: WORD '?LAUNCH' codep=0x224c parp=0xf532
// ================================================

void _ask_LAUNCH() // ?LAUNCH
{
  UNK_0xf40d(); // UNK_0xf40d
  if (Pop() == 0) Push(1); else Push(0); // NOT
  DUP(); // DUP
  if (Pop() == 0) return;
  UNK_0xf24b(); // UNK_0xf24b
}

// 0xf540: db 0x4c 0x41 0x4e 0x44 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'LAND-VO_________________________ '
  