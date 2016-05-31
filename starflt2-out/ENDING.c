// ====== OVERLAY 'ENDING' ======

#include"interface.h"

// store offset = 0xe7f0
// overlay size   = 0x0d70

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:           LAND-  codep:0x83dd parp:0xd438 size:0x0002 C-string:'LAND_minus_'
// 1870:           TRY-L  codep:0x224c parp:0xd444 size:0x0006 C-string:'TRY_minus_L'
// 1871:           TRY-L  codep:0x224c parp:0xd454 size:0x0006 C-string:'TRY_minus_L'
// 1872:         BTN-VOC  codep:0x1ab5 parp:0xd466 size:0x0014 C-string:'BTN_minus_VOC'
// 1873:          BTN-OV  codep:0x83dd parp:0xd485 size:0x137f C-string:'BTN_minus_OV'
// 1874:      UNK_0xe806  codep:0x1d29 parp:0xe806 size:0x0002 C-string:'UNK_0xe806'
// 1875:      UNK_0xe80a  codep:0x7420 parp:0xe80a size:0x0003 C-string:'UNK_0xe80a'
// 1876:      UNK_0xe80f  codep:0x7420 parp:0xe80f size:0x0003 C-string:'UNK_0xe80f'
// 1877:      UNK_0xe814  codep:0x7420 parp:0xe814 size:0x0003 C-string:'UNK_0xe814'
// 1878:      UNK_0xe819  codep:0x7420 parp:0xe819 size:0x0003 C-string:'UNK_0xe819'
// 1879:      UNK_0xe81e  codep:0x7420 parp:0xe81e size:0x0003 C-string:'UNK_0xe81e'
// 1880:      UNK_0xe823  codep:0x7394 parp:0xe823 size:0x0006 C-string:'UNK_0xe823'
// 1881:      UNK_0xe82b  codep:0x7420 parp:0xe82b size:0x000f C-string:'UNK_0xe82b'
// 1882:      UNK_0xe83c  codep:0x224c parp:0xe83c size:0x001c C-string:'UNK_0xe83c'
// 1883:      UNK_0xe85a  codep:0x224c parp:0xe85a size:0x0006 C-string:'UNK_0xe85a'
// 1884:      UNK_0xe862  codep:0x224c parp:0xe862 size:0x0006 C-string:'UNK_0xe862'
// 1885:      UNK_0xe86a  codep:0x224c parp:0xe86a size:0x0042 C-string:'UNK_0xe86a'
// 1886:           FREEB  codep:0x224c parp:0xe8b6 size:0x0026 C-string:'FREEB'
// 1887:      UNK_0xe8de  codep:0x224c parp:0xe8de size:0x0024 C-string:'UNK_0xe8de'
// 1888:      UNK_0xe904  codep:0x224c parp:0xe904 size:0x0016 C-string:'UNK_0xe904'
// 1889:      UNK_0xe91c  codep:0x224c parp:0xe91c size:0x0010 C-string:'UNK_0xe91c'
// 1890:      UNK_0xe92e  codep:0x224c parp:0xe92e size:0x000a C-string:'UNK_0xe92e'
// 1891:      UNK_0xe93a  codep:0x224c parp:0xe93a size:0x0004 C-string:'UNK_0xe93a'
// 1892:      UNK_0xe940  codep:0x224c parp:0xe940 size:0x0010 C-string:'UNK_0xe940'
// 1893:           EXPOS  codep:0x1d29 parp:0xe95a size:0x0008 C-string:'EXPOS'
// 1894:      UNK_0xe964  codep:0x1d29 parp:0xe964 size:0x0004 C-string:'UNK_0xe964'
// 1895:      UNK_0xe96a  codep:0x1d29 parp:0xe96a size:0x0004 C-string:'UNK_0xe96a'
// 1896:      UNK_0xe970  codep:0x224c parp:0xe970 size:0x000c C-string:'UNK_0xe970'
// 1897:         STAGESE  codep:0x1d29 parp:0xe988 size:0x0006 C-string:'STAGESE'
// 1898:      UNK_0xe990  codep:0x224c parp:0xe990 size:0x0018 C-string:'UNK_0xe990'
// 1899:      UNK_0xe9aa  codep:0x224c parp:0xe9aa size:0x0004 C-string:'UNK_0xe9aa'
// 1900:      UNK_0xe9b0  codep:0x224c parp:0xe9b0 size:0x0006 C-string:'UNK_0xe9b0'
// 1901:      UNK_0xe9b8  codep:0x224c parp:0xe9b8 size:0x0008 C-string:'UNK_0xe9b8'
// 1902:      UNK_0xe9c2  codep:0x224c parp:0xe9c2 size:0x0008 C-string:'UNK_0xe9c2'
// 1903:      UNK_0xe9cc  codep:0x224c parp:0xe9cc size:0x0008 C-string:'UNK_0xe9cc'
// 1904:      UNK_0xe9d6  codep:0x224c parp:0xe9d6 size:0x0008 C-string:'UNK_0xe9d6'
// 1905:      UNK_0xe9e0  codep:0x224c parp:0xe9e0 size:0x000a C-string:'UNK_0xe9e0'
// 1906:      UNK_0xe9ec  codep:0x224c parp:0xe9ec size:0x0018 C-string:'UNK_0xe9ec'
// 1907:      UNK_0xea06  codep:0x224c parp:0xea06 size:0x0008 C-string:'UNK_0xea06'
// 1908:      UNK_0xea10  codep:0x224c parp:0xea10 size:0x0032 C-string:'UNK_0xea10'
// 1909:      UNK_0xea44  codep:0x224c parp:0xea44 size:0x0010 C-string:'UNK_0xea44'
// 1910:      UNK_0xea56  codep:0x224c parp:0xea56 size:0x003a C-string:'UNK_0xea56'
// 1911:      UNK_0xea92  codep:0x224c parp:0xea92 size:0x001c C-string:'UNK_0xea92'
// 1912:      UNK_0xeab0  codep:0x1d29 parp:0xeab0 size:0x0004 C-string:'UNK_0xeab0'
// 1913:      UNK_0xeab6  codep:0x1d29 parp:0xeab6 size:0x0004 C-string:'UNK_0xeab6'
// 1914:      UNK_0xeabc  codep:0x1d29 parp:0xeabc size:0x0004 C-string:'UNK_0xeabc'
// 1915:      UNK_0xeac2  codep:0x1d29 parp:0xeac2 size:0x0004 C-string:'UNK_0xeac2'
// 1916:      UNK_0xeac8  codep:0x1d29 parp:0xeac8 size:0x0004 C-string:'UNK_0xeac8'
// 1917:      UNK_0xeace  codep:0x224c parp:0xeace size:0x000e C-string:'UNK_0xeace'
// 1918:      UNK_0xeade  codep:0x224c parp:0xeade size:0x001e C-string:'UNK_0xeade'
// 1919:      UNK_0xeafe  codep:0x224c parp:0xeafe size:0x0056 C-string:'UNK_0xeafe'
// 1920:      UNK_0xeb56  codep:0x224c parp:0xeb56 size:0x000a C-string:'UNK_0xeb56'
// 1921:      UNK_0xeb62  codep:0x224c parp:0xeb62 size:0x004c C-string:'UNK_0xeb62'
// 1922:      UNK_0xebb0  codep:0x224c parp:0xebb0 size:0x0018 C-string:'UNK_0xebb0'
// 1923:      UNK_0xebca  codep:0x1d29 parp:0xebca size:0x0002 C-string:'UNK_0xebca'
// 1924:      UNK_0xebce  codep:0x1d29 parp:0xebce size:0x0004 C-string:'UNK_0xebce'
// 1925:      UNK_0xebd4  codep:0x224c parp:0xebd4 size:0x001e C-string:'UNK_0xebd4'
// 1926:      UNK_0xebf4  codep:0x224c parp:0xebf4 size:0x0024 C-string:'UNK_0xebf4'
// 1927:      UNK_0xec1a  codep:0x224c parp:0xec1a size:0x005c C-string:'UNK_0xec1a'
// 1928:      UNK_0xec78  codep:0x224c parp:0xec78 size:0x0028 C-string:'UNK_0xec78'
// 1929:      UNK_0xeca2  codep:0x224c parp:0xeca2 size:0x001e C-string:'UNK_0xeca2'
// 1930:            TPIC  codep:0x2214 parp:0xecc9 size:0x000e C-string:'TPIC'
// 1931:            BPIC  codep:0x2214 parp:0xece0 size:0x000e C-string:'BPIC'
// 1932:            VPIC  codep:0x2214 parp:0xecf7 size:0x000e C-string:'VPIC'
// 1933:      UNK_0xed07  codep:0x224c parp:0xed07 size:0x0016 C-string:'UNK_0xed07'
// 1934:      UNK_0xed1f  codep:0x224c parp:0xed1f size:0x0012 C-string:'UNK_0xed1f'
// 1935:      UNK_0xed33  codep:0x224c parp:0xed33 size:0x0058 C-string:'UNK_0xed33'
// 1936:      UNK_0xed8d  codep:0x224c parp:0xed8d size:0x002a C-string:'UNK_0xed8d'
// 1937:      UNK_0xedb9  codep:0x224c parp:0xedb9 size:0x0010 C-string:'UNK_0xedb9'
// 1938:      UNK_0xedcb  codep:0x224c parp:0xedcb size:0x0016 C-string:'UNK_0xedcb'
// 1939:      UNK_0xede3  codep:0x224c parp:0xede3 size:0x0018 C-string:'UNK_0xede3'
// 1940:      UNK_0xedfd  codep:0x224c parp:0xedfd size:0x0044 C-string:'UNK_0xedfd'
// 1941:      UNK_0xee43  codep:0x224c parp:0xee43 size:0x0030 C-string:'UNK_0xee43'
// 1942:      UNK_0xee75  codep:0x224c parp:0xee75 size:0x000a C-string:'UNK_0xee75'
// 1943:      UNK_0xee81  codep:0x224c parp:0xee81 size:0x0038 C-string:'UNK_0xee81'
// 1944:      UNK_0xeebb  codep:0x224c parp:0xeebb size:0x0014 C-string:'UNK_0xeebb'
// 1945:      UNK_0xeed1  codep:0x224c parp:0xeed1 size:0x007c C-string:'UNK_0xeed1'
// 1946:      UNK_0xef4f  codep:0x224c parp:0xef4f size:0x000c C-string:'UNK_0xef4f'
// 1947:      UNK_0xef5d  codep:0x224c parp:0xef5d size:0x004c C-string:'UNK_0xef5d'
// 1948:      UNK_0xefab  codep:0x224c parp:0xefab size:0x002e C-string:'UNK_0xefab'
// 1949:      UNK_0xefdb  codep:0x224c parp:0xefdb size:0x0042 C-string:'UNK_0xefdb'
// 1950:      UNK_0xf01f  codep:0x224c parp:0xf01f size:0x003a C-string:'UNK_0xf01f'
// 1951:      UNK_0xf05b  codep:0x224c parp:0xf05b size:0x001c C-string:'UNK_0xf05b'
// 1952:      UNK_0xf079  codep:0x224c parp:0xf079 size:0x001e C-string:'UNK_0xf079'
// 1953:      UNK_0xf099  codep:0x224c parp:0xf099 size:0x001a C-string:'UNK_0xf099'
// 1954:            ANIM  codep:0x2214 parp:0xf0bc size:0x000c C-string:'ANIM'
// 1955:      UNK_0xf0ca  codep:0x224c parp:0xf0ca size:0x000e C-string:'UNK_0xf0ca'
// 1956:      UNK_0xf0da  codep:0x224c parp:0xf0da size:0x005c C-string:'UNK_0xf0da'
// 1957:      UNK_0xf138  codep:0x224c parp:0xf138 size:0x0022 C-string:'UNK_0xf138'
// 1958:      UNK_0xf15c  codep:0x224c parp:0xf15c size:0x0026 C-string:'UNK_0xf15c'
// 1959:      UNK_0xf184  codep:0x224c parp:0xf184 size:0x001a C-string:'UNK_0xf184'
// 1960:      UNK_0xf1a0  codep:0x224c parp:0xf1a0 size:0x000a C-string:'UNK_0xf1a0'
// 1961:      UNK_0xf1ac  codep:0x224c parp:0xf1ac size:0x0014 C-string:'UNK_0xf1ac'
// 1962:      UNK_0xf1c2  codep:0x224c parp:0xf1c2 size:0x0014 C-string:'UNK_0xf1c2'
// 1963:      UNK_0xf1d8  codep:0x224c parp:0xf1d8 size:0x0036 C-string:'UNK_0xf1d8'
// 1964:      UNK_0xf210  codep:0x224c parp:0xf210 size:0x0034 C-string:'UNK_0xf210'
// 1965:      UNK_0xf246  codep:0x224c parp:0xf246 size:0x0006 C-string:'UNK_0xf246'
// 1966:      UNK_0xf24e  codep:0x224c parp:0xf24e size:0x0014 C-string:'UNK_0xf24e'
// 1967:      UNK_0xf264  codep:0x224c parp:0xf264 size:0x004a C-string:'UNK_0xf264'
// 1968:      UNK_0xf2b0  codep:0x224c parp:0xf2b0 size:0x0048 C-string:'UNK_0xf2b0'
// 1969:      UNK_0xf2fa  codep:0x224c parp:0xf2fa size:0x0042 C-string:'UNK_0xf2fa'
// 1970:      UNK_0xf33e  codep:0x224c parp:0xf33e size:0x0074 C-string:'UNK_0xf33e'
// 1971:      UNK_0xf3b4  codep:0x224c parp:0xf3b4 size:0x003a C-string:'UNK_0xf3b4'
// 1972:      UNK_0xf3f0  codep:0x224c parp:0xf3f0 size:0x001c C-string:'UNK_0xf3f0'
// 1973:            BOLT  codep:0x224c parp:0xf415 size:0x0062 C-string:'BOLT'
// 1974:      UNK_0xf479  codep:0x224c parp:0xf479 size:0x0024 C-string:'UNK_0xf479'
// 1975:      UNK_0xf49f  codep:0x224c parp:0xf49f size:0x0026 C-string:'UNK_0xf49f'
// 1976:      UNK_0xf4c7  codep:0x224c parp:0xf4c7 size:0x0018 C-string:'UNK_0xf4c7'
// 1977:      UNK_0xf4e1  codep:0x224c parp:0xf4e1 size:0x0008 C-string:'UNK_0xf4e1'
// 1978:      UNK_0xf4eb  codep:0x224c parp:0xf4eb size:0x0008 C-string:'UNK_0xf4eb'
// 1979:      UNK_0xf4f5  codep:0x224c parp:0xf4f5 size:0x0014 C-string:'UNK_0xf4f5'
// 1980:        DO-HALLS  codep:0x224c parp:0xf516 size:0x0016 C-string:'DO_minus_HALLS'
// 1981:           !INIT  codep:0x224c parp:0xf536 size:0x0006 C-string:'_ex_INIT'
// 1982:            DUHL  codep:0x224c parp:0xf545 size:0x001b C-string:'DUHL'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe806[2] = {0x3a, 0x20}; // UNK_0xe806
unsigned char EXPOS[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; // EXPOS
unsigned char UNK_0xe964[4] = {0x00, 0x00, 0x00, 0x00}; // UNK_0xe964
unsigned char UNK_0xe96a[4] = {0x00, 0x00, 0x00, 0x00}; // UNK_0xe96a
unsigned char STAGESE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; // STAGESE
unsigned char UNK_0xeab0[4] = {0x56, 0x3a, 0x20, 0x64}; // UNK_0xeab0
unsigned char UNK_0xeab6[4] = {0x56, 0x3a, 0x20, 0x73}; // UNK_0xeab6
unsigned char UNK_0xeabc[4] = {0x56, 0x3a, 0x20, 0x2d}; // UNK_0xeabc
unsigned char UNK_0xeac2[4] = {0x56, 0x3a, 0x20, 0x65}; // UNK_0xeac2
unsigned char UNK_0xeac8[4] = {0x56, 0x3a, 0x20, 0x73}; // UNK_0xeac8
unsigned char UNK_0xebca[2] = {0x3a, 0x20}; // UNK_0xebca
unsigned char UNK_0xebce[4] = {0x56, 0x3a, 0x20, 0x20}; // UNK_0xebce

const unsigned short int cc_TPIC = 0xeccc; // TPIC
const unsigned short int cc_BPIC = 0xece3; // BPIC
const unsigned short int cc_VPIC = 0xecfa; // VPIC
const unsigned short int cc_ANIM = 0xf0bf; // ANIM


// 0xe802: db 0xd6 0x00 '  '

// ================================================
// 0xe804: WORD 'UNK_0xe806' codep=0x1d29 parp=0xe806
// ================================================
// 0xe806: db 0x3a 0x20 ': '

// ================================================
// 0xe808: WORD 'UNK_0xe80a' codep=0x7420 parp=0xe80a
// ================================================
// 0xe80a: db 0x34 0x0c 0x01 '4  '

// ================================================
// 0xe80d: WORD 'UNK_0xe80f' codep=0x7420 parp=0xe80f
// ================================================
// 0xe80f: db 0x34 0x12 0x01 '4  '

// ================================================
// 0xe812: WORD 'UNK_0xe814' codep=0x7420 parp=0xe814
// ================================================
// 0xe814: db 0x14 0x19 0x02 '   '

// ================================================
// 0xe817: WORD 'UNK_0xe819' codep=0x7420 parp=0xe819
// ================================================
// 0xe819: db 0x14 0x1b 0x02 '   '

// ================================================
// 0xe81c: WORD 'UNK_0xe81e' codep=0x7420 parp=0xe81e
// ================================================
// 0xe81e: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xe821: WORD 'UNK_0xe823' codep=0x7394 parp=0xe823
// ================================================
// 0xe823: db 0x19 0x10 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe829: WORD 'UNK_0xe82b' codep=0x7420 parp=0xe82b
// ================================================
// 0xe82b: db 0x14 0x14 0x01 0x4c 0x22 0x98 0x9e 0x2e 0x0f 0xe7 0x5e 0x23 0x6d 0x90 0x16 '   L"  .  ^#m  '

// ================================================
// 0xe83a: WORD 'UNK_0xe83c' codep=0x224c parp=0xe83c
// ================================================

void UNK_0xe83c() // UNK_0xe83c
{
  _star_PLIST(); // *PLIST
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
}

// 0xe850: db 0x4c 0x22 0x48 0x50 0x9d 0x86 0x90 0x16 'L"HP    '

// ================================================
// 0xe858: WORD 'UNK_0xe85a' codep=0x224c parp=0xe85a
// ================================================

void UNK_0xe85a() // UNK_0xe85a
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe860: WORD 'UNK_0xe862' codep=0x224c parp=0xe862
// ================================================

void UNK_0xe862() // UNK_0xe862
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe868: WORD 'UNK_0xe86a' codep=0x224c parp=0xe86a
// ================================================

void UNK_0xe86a() // UNK_0xe86a
{
  Push(pp__at__co_0_star_1_sc_); // @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label431;

  BEEPON(); // BEEPON
  Push(0x012c);
  Push(cc_MPS); // MPS
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  Push(0x01f4);
  MAX(); // MAX
  Push(0x09c4);
  MIN(); // MIN
  Push(0); // 0

  do // (DO)
  {
  I(); // I
  TONE(); // TONE
  Push(0x000a);
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  do // (DO)
  {
  NOP(); // NOP

  } while(...); // (LOOP) 0xfffc

  } while(...); // (LOOP) 0xffe8
  BEEPOFF(); // BEEPOFF

  label431:
}


// ================================================
// 0xe8ac: WORD 'FREEB' codep=0x224c parp=0xe8b6
// ================================================

void FREEB() // FREEB
{
  Push(pp__ask_3); // ?3
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label462;

  UNK_0xe862(); // UNK_0xe862
  Push(0x0764);
  UNK_0xe814(); // UNK_0xe814
  _ex_(); // !
  Push(0x0664);
  UNK_0xe819(); // UNK_0xe819
  _ex_(); // !
  Push(0x0dac);
  UNK_0xe81e(); // UNK_0xe81e
  _ex_(); // !
  ICLOSE(); // ICLOSE

  label462:
}


// ================================================
// 0xe8dc: WORD 'UNK_0xe8de' codep=0x224c parp=0xe8de
// ================================================

void UNK_0xe8de() // UNK_0xe8de
{
  UNK_0xe85a(); // UNK_0xe85a
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001c);
  IFIND(); // IFIND
  IFIRST(); // IFIRST
  Push(0x0019);
  Push(0x001e);
  IFIND(); // IFIND
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe902: WORD 'UNK_0xe904' codep=0x224c parp=0xe904
// ================================================

void UNK_0xe904() // UNK_0xe904
{
  UNK_0xe85a(); // UNK_0xe85a
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001d);
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe91a: WORD 'UNK_0xe91c' codep=0x224c parp=0xe91c
// ================================================

void UNK_0xe91c() // UNK_0xe91c
{
  C_at_(); // C@
  SWAP(); // SWAP
  C_at_(); // C@
  _gt_FLAG(); // >FLAG
  SWAP(); // SWAP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe92c: WORD 'UNK_0xe92e' codep=0x224c parp=0xe92e
// ================================================

void UNK_0xe92e() // UNK_0xe92e
{
  Push(1); // 1
  SWAP(); // SWAP
  C_ex_(); // C!
  SAVE_minus_OV(); // SAVE-OV
}


// ================================================
// 0xe938: WORD 'UNK_0xe93a' codep=0x224c parp=0xe93a
// ================================================

void UNK_0xe93a() // UNK_0xe93a
{
  C_at_(); // C@
}


// ================================================
// 0xe93e: WORD 'UNK_0xe940' codep=0x224c parp=0xe940
// ================================================

void UNK_0xe940() // UNK_0xe940
{
  WUP(); // WUP
  Push(0xbe45);
  MODULE(); // MODULE
  Push(0xbe96);
  MODULE(); // MODULE
}


// ================================================
// 0xe950: WORD 'EXPOS' codep=0x1d29 parp=0xe95a
// ================================================
// 0xe95a: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '        '

// ================================================
// 0xe962: WORD 'UNK_0xe964' codep=0x1d29 parp=0xe964
// ================================================
// 0xe964: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0xe968: WORD 'UNK_0xe96a' codep=0x1d29 parp=0xe96a
// ================================================
// 0xe96a: db 0x00 0x00 0x00 0x00 '    '

// ================================================
// 0xe96e: WORD 'UNK_0xe970' codep=0x224c parp=0xe970
// ================================================

void UNK_0xe970() // UNK_0xe970
{
  Push(pp_EXPOS); // EXPOS
  Push(0x0007);
  Push(Pop() + Pop()); // +
  C_at_(); // C@
}


// ================================================
// 0xe97c: WORD 'STAGESE' codep=0x1d29 parp=0xe988
// ================================================
// 0xe988: db 0x00 0x00 0x00 0x00 0x00 0x00 '      '

// ================================================
// 0xe98e: WORD 'UNK_0xe990' codep=0x224c parp=0xe990
// ================================================

void UNK_0xe990() // UNK_0xe990
{
  Push(pp_EXPOS); // EXPOS
  Push(0x0008);
  Push(0); // 0
  FILL(); // FILL
  Push(pp_STAGESE); // STAGESE
  Push(0x0006);
  Push(0); // 0
  FILL(); // FILL
  SAVE_minus_OV(); // SAVE-OV
}


// ================================================
// 0xe9a8: WORD 'UNK_0xe9aa' codep=0x224c parp=0xe9aa
// ================================================

void UNK_0xe9aa() // UNK_0xe9aa
{
  Push(pp_STAGESE); // STAGESE
}


// ================================================
// 0xe9ae: WORD 'UNK_0xe9b0' codep=0x224c parp=0xe9b0
// ================================================

void UNK_0xe9b0() // UNK_0xe9b0
{
  Push(pp_STAGESE); // STAGESE
  Push(Pop()+1); // 1+
}


// ================================================
// 0xe9b6: WORD 'UNK_0xe9b8' codep=0x224c parp=0xe9b8
// ================================================

void UNK_0xe9b8() // UNK_0xe9b8
{
  Push(pp_STAGESE); // STAGESE
  Push(2); // 2
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe9c0: WORD 'UNK_0xe9c2' codep=0x224c parp=0xe9c2
// ================================================

void UNK_0xe9c2() // UNK_0xe9c2
{
  Push(pp_STAGESE); // STAGESE
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe9ca: WORD 'UNK_0xe9cc' codep=0x224c parp=0xe9cc
// ================================================

void UNK_0xe9cc() // UNK_0xe9cc
{
  Push(pp_STAGESE); // STAGESE
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe9d4: WORD 'UNK_0xe9d6' codep=0x224c parp=0xe9d6
// ================================================

void UNK_0xe9d6() // UNK_0xe9d6
{
  Push(pp_STAGESE); // STAGESE
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe9de: WORD 'UNK_0xe9e0' codep=0x224c parp=0xe9e0
// ================================================

void UNK_0xe9e0() // UNK_0xe9e0
{
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe9ea: WORD 'UNK_0xe9ec' codep=0x224c parp=0xe9ec
// ================================================

void UNK_0xe9ec() // UNK_0xe9ec
{
  UNK_0xe85a(); // UNK_0xe85a
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001d);
  IFIND(); // IFIND
  Pop(); // DROP
  UNK_0xe9e0(); // UNK_0xe9e0
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xea04: WORD 'UNK_0xea06' codep=0x224c parp=0xea06
// ================================================

void UNK_0xea06() // UNK_0xea06
{
  UNK_0xe862(); // UNK_0xe862
  UNK_0xe9e0(); // UNK_0xe9e0
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea0e: WORD 'UNK_0xea10' codep=0x224c parp=0xea10
// ================================================

void UNK_0xea10() // UNK_0xea10
{
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  Push(0x00ff);
  UNK_0xe80a(); // UNK_0xe80a
  C_ex_(); // C!
  Push(0); // 0
  UNK_0xe80f(); // UNK_0xe80f
  C_ex_(); // C!
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push(pp_TERMINA); // TERMINA
  _099(); // 099
  Push(pp_UNK_0xe806); // UNK_0xe806
  _099(); // 099
  SAVE_minus_OV(); // SAVE-OV
  Push(1); // 1
  Push(0xbed7);
  MODULE(); // MODULE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  D_ex_(); // D!
}


// ================================================
// 0xea42: WORD 'UNK_0xea44' codep=0x224c parp=0xea44
// ================================================

void UNK_0xea44() // UNK_0xea44
{
  _gt_C_plus_S(); // >C+S
  PHRASE_do_(); // PHRASE$
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea54: WORD 'UNK_0xea56' codep=0x224c parp=0xea56
// ================================================

void UNK_0xea56() // UNK_0xea56
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label436;

  Pop(); Pop();// 2DROP
  _0_dot_(); // 0.
  goto label439;

  label436:
  _2OVER(); // 2OVER
  ROT(); // ROT
  SWAP(); // SWAP
  _minus_(); // -
  DUP(); // DUP
  if (Pop() == 0) goto label437;

  DUP(); // DUP
  ABS(); // ABS
  _slash_(); // /

  label437:
  _gt_R(); // >R
  _minus_(); // -
  DUP(); // DUP
  if (Pop() == 0) goto label438;

  DUP(); // DUP
  ABS(); // ABS
  _slash_(); // /

  label438:
  R_gt_(); // R>

  label439:
}


// ================================================
// 0xea90: WORD 'UNK_0xea92' codep=0x224c parp=0xea92
// ================================================

void UNK_0xea92() // UNK_0xea92
{
  ROT(); // ROT
  _minus_(); // -
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  _minus_(); // -
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  R_gt_(); // R>
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xeaae: WORD 'UNK_0xeab0' codep=0x1d29 parp=0xeab0
// ================================================
// 0xeab0: db 0x56 0x3a 0x20 0x64 'V: d'

// ================================================
// 0xeab4: WORD 'UNK_0xeab6' codep=0x1d29 parp=0xeab6
// ================================================
// 0xeab6: db 0x56 0x3a 0x20 0x73 'V: s'

// ================================================
// 0xeaba: WORD 'UNK_0xeabc' codep=0x1d29 parp=0xeabc
// ================================================
// 0xeabc: db 0x56 0x3a 0x20 0x2d 'V: -'

// ================================================
// 0xeac0: WORD 'UNK_0xeac2' codep=0x1d29 parp=0xeac2
// ================================================
// 0xeac2: db 0x56 0x3a 0x20 0x65 'V: e'

// ================================================
// 0xeac6: WORD 'UNK_0xeac8' codep=0x1d29 parp=0xeac8
// ================================================
// 0xeac8: db 0x56 0x3a 0x20 0x73 'V: s'

// ================================================
// 0xeacc: WORD 'UNK_0xeace' codep=0x224c parp=0xeace
// ================================================

void UNK_0xeace() // UNK_0xeace
{
  _gt_R(); // >R
  Push(0); // 0
  SWAP(); // SWAP
  Push(1); // 1
  R_gt_(); // R>
  M_star__slash_(); // M*/
}


// ================================================
// 0xeadc: WORD 'UNK_0xeade' codep=0x224c parp=0xeade
// ================================================

void UNK_0xeade() // UNK_0xeade
{
  Push(pp_UNK_0xeab6); // UNK_0xeab6
  _2_at_(); // 2@
  Push(pp_UNK_0xeac2); // UNK_0xeac2
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_UNK_0xeab6); // UNK_0xeab6
  D_ex_(); // D!
  Push(pp_UNK_0xeabc); // UNK_0xeabc
  _2_at_(); // 2@
  Push(pp_UNK_0xeac8); // UNK_0xeac8
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_UNK_0xeabc); // UNK_0xeabc
  D_ex_(); // D!
}


// ================================================
// 0xeafc: WORD 'UNK_0xeafe' codep=0x224c parp=0xeafe
// ================================================

void UNK_0xeafe() // UNK_0xeafe
{
  UNK_0xe862(); // UNK_0xe862
  UNK_0xe9e0(); // UNK_0xe9e0
  Push(pp_UNK_0xeab6); // UNK_0xeab6
  _ex_(); // !
  Push(pp_UNK_0xeabc); // UNK_0xeabc
  _ex_(); // !
  UNK_0xe9ec(); // UNK_0xe9ec
  Push(Pop()+1); // 1+
  _gt_R(); // >R
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xeabc); // UNK_0xeabc
  Push(Read16(Pop())); // @
  _minus_(); // -
  DUP(); // DUP
  ABS(); // ABS
  R_gt_(); // R>
  Push(pp_UNK_0xeab6); // UNK_0xeab6
  Push(Read16(Pop())); // @
  _minus_(); // -
  DUP(); // DUP
  ABS(); // ABS
  ROT(); // ROT
  MAX(); // MAX
  _gt_R(); // >R
  R_at_(); // R@
  UNK_0xeace(); // UNK_0xeace
  Push(pp_UNK_0xeac2); // UNK_0xeac2
  D_ex_(); // D!
  R_gt_(); // R>
  UNK_0xeace(); // UNK_0xeace
  Push(pp_UNK_0xeac8); // UNK_0xeac8
  D_ex_(); // D!
  Push(0x8000);
  DUP(); // DUP
  Push(pp_UNK_0xeabc); // UNK_0xeabc
  Push(Pop()+2); // 2+
  _ex_(); // !
  Push(pp_UNK_0xeab6); // UNK_0xeab6
  Push(Pop()+2); // 2+
  _ex_(); // !
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb54: WORD 'UNK_0xeb56' codep=0x224c parp=0xeb56
// ================================================

void UNK_0xeb56() // UNK_0xeb56
{
  Push(pp_UNK_0xeabc); // UNK_0xeabc
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xeab6); // UNK_0xeab6
  Push(Read16(Pop())); // @
}


// ================================================
// 0xeb60: WORD 'UNK_0xeb62' codep=0x224c parp=0xeb62
// ================================================

void UNK_0xeb62() // UNK_0xeb62
{
  UNK_0xe862(); // UNK_0xe862
  UNK_0xe9e0(); // UNK_0xe9e0
  ICLOSE(); // ICLOSE
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  _gt_MAINVI(); // >MAINVI
  WLD_gt_SCR(); // WLD>SCR
  LXPLOT(); // LXPLOT
  UNK_0xeafe(); // UNK_0xeafe

  label472:
  UNK_0xeb56(); // UNK_0xeb56
  Push(pp_UNK_0xeab0); // UNK_0xeab0
  D_ex_(); // D!
  UNK_0xeb56(); // UNK_0xeb56
  UNK_0xe9ec(); // UNK_0xe9ec
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label471;

  Push(pp_UNK_0xeab0); // UNK_0xeab0
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  LXPLOT(); // LXPLOT
  UNK_0xeade(); // UNK_0xeade
  UNK_0xeb56(); // UNK_0xeb56
  WLD_gt_SCR(); // WLD>SCR
  LXPLOT(); // LXPLOT
  V_gt_DISPL(); // V>DISPL
  Push(0x01f4);
  MS(); // MS
  goto label472;

  label471:
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xebae: WORD 'UNK_0xebb0' codep=0x224c parp=0xebb0
// ================================================

void UNK_0xebb0() // UNK_0xebb0
{
  Push(0x1388);
  DUP(); // DUP
  Push(pp_ANCHOR); // ANCHOR
  D_ex_(); // D!
  ORGLIST(); // ORGLIST
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  _dot_LOCAL_minus_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xebc8: WORD 'UNK_0xebca' codep=0x1d29 parp=0xebca
// ================================================
// 0xebca: db 0x3a 0x20 ': '

// ================================================
// 0xebcc: WORD 'UNK_0xebce' codep=0x1d29 parp=0xebce
// ================================================
// 0xebce: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xebd2: WORD 'UNK_0xebd4' codep=0x224c parp=0xebd4
// ================================================

void UNK_0xebd4() // UNK_0xebd4
{
  Push(0x7530);
  UNK_0xe9ec(); // UNK_0xe9ec
  UNK_0xea06(); // UNK_0xea06
  UNK_0xea92(); // UNK_0xea92
  _slash_(); // /
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xebca); // UNK_0xebca
  _ex_(); // !
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xebce); // UNK_0xebce
  D_ex_(); // D!
  SAVE_minus_OV(); // SAVE-OV
}


// ================================================
// 0xebf2: WORD 'UNK_0xebf4' codep=0x224c parp=0xebf4
// ================================================

void UNK_0xebf4() // UNK_0xebf4
{
  Push(pp_UNK_0xebce); // UNK_0xebce
  _2_at_(); // 2@
  Push(pp_UNK_0xebca); // UNK_0xebca
  Push(Read16(Pop())); // @
  Push(0); // 0
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
  DUP(); // DUP
  if (Pop() == 0) goto label434;

  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xebce); // UNK_0xebce
  D_ex_(); // D!
  SAVE_minus_OV(); // SAVE-OV

  label434:
}


// ================================================
// 0xec18: WORD 'UNK_0xec1a' codep=0x224c parp=0xec1a
// ================================================

void UNK_0xec1a() // UNK_0xec1a
{
  Push(0x0019);
  Push(0x001d);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x000c);
  _minus_(); // -
  INST_minus_X(); // INST-X
  _ex_(); // !
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x000c);
  _minus_(); // -
  INST_minus_Y(); // INST-Y
  _ex_(); // !
  Push(0xba55);
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  ICLOSE(); // ICLOSE
  Push(0xec78);
  DUP(); // DUP
  Push(pp_ANCHOR); // ANCHOR
  D_ex_(); // D!
  ORGLIST(); // ORGLIST
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  Push(1); // 1
  Push(pp__n_VESS); // #VESS
  _plus__ex_(); // +!
  Push(0xc7ce);
  MODULE(); // MODULE
  UNK_0xebb0(); // UNK_0xebb0
  UNK_0xea10(); // UNK_0xea10
  Push(pp__ask_UF); // ?UF
  ON(); // ON
}


// ================================================
// 0xec76: WORD 'UNK_0xec78' codep=0x224c parp=0xec78
// ================================================

void UNK_0xec78() // UNK_0xec78
{
  CTINIT(); // CTINIT
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x410b(); // UNK_0x410b
  UNK_0x4143(); // UNK_0x4143
  UNK_0x5254(); // UNK_0x5254
  UNK_0x4849(); // UNK_0x4849
  UNK_0x2023(); // UNK_0x2023
  _dot_TTY(); // .TTY
  Push(0x1388);
  MS(); // MS
  Push(0x6733); Pust(0x0002);
  UNK_0xea44(); // UNK_0xea44
  _dot_TTY(); // .TTY
  KEY(); // KEY
  Pop(); // DROP
  BYE(); // BYE
}


// ================================================
// 0xeca0: WORD 'UNK_0xeca2' codep=0x224c parp=0xeca2
// ================================================

void UNK_0xeca2() // UNK_0xeca2
{
  UNK_0xe9b0(); // UNK_0xe9b0
  UNK_0xe9b8(); // UNK_0xe9b8
  UNK_0xe91c(); // UNK_0xe91c
  UNK_0xe9cc(); // UNK_0xe9cc
  UNK_0xe93a(); // UNK_0xe93a
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xe9ec(); // UNK_0xe9ec
  UNK_0xea06(); // UNK_0xea06
  D_eq_(); // D=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label451;

  UNK_0xec78(); // UNK_0xec78

  label451:
}


// ================================================
// 0xecc0: WORD 'TPIC' codep=0x2214 parp=0xecc9
// ================================================
// 0xecc9: db 0xcc 0xec 0x00 0x65 0x6e 0x64 0x74 0x6f 0x70 0x2e 0x65 0x67 0x61 0x00 '   endtop.ega '

// ================================================
// 0xecd7: WORD 'BPIC' codep=0x2214 parp=0xece0
// ================================================
// 0xece0: db 0xe3 0xec 0x00 0x65 0x6e 0x64 0x62 0x6f 0x74 0x2e 0x65 0x67 0x61 0x00 '   endbot.ega '

// ================================================
// 0xecee: WORD 'VPIC' codep=0x2214 parp=0xecf7
// ================================================
// 0xecf7: db 0xfa 0xec 0x00 0x65 0x6e 0x64 0x70 0x69 0x63 0x2e 0x76 0x67 0x61 0x00 '   endpic.vga '

// ================================================
// 0xed05: WORD 'UNK_0xed07' codep=0x224c parp=0xed07
// ================================================

void UNK_0xed07() // UNK_0xed07
{
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label454;

  Push(cc_VPIC); // VPIC
  goto label455;

  label454:
  Push(cc_BPIC); // BPIC
  Push(cc_TPIC); // TPIC

  label455:
  Push(0x001d);
}


// ================================================
// 0xed1d: WORD 'UNK_0xed1f' codep=0x224c parp=0xed1f
// ================================================

void UNK_0xed1f() // UNK_0xed1f
{
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label456;

  _gt_HIDDEN(); // >HIDDEN
  goto label457;

  label456:
  _gt_DISPLA(); // >DISPLA

  label457:
}


// ================================================
// 0xed31: WORD 'UNK_0xed33' codep=0x224c parp=0xed33
// ================================================

void UNK_0xed33() // UNK_0xed33
{
  UNK_0xed07(); // UNK_0xed07
  _gt_R(); // >R
  Push(pp_XBUF_minus_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  _ro_LDS_rc_(); // (LDS)
  MOUNTB(); // MOUNTB
  Push(0xb9f9);
  MODULE(); // MODULE
  R_gt_(); // R>
  BMPAL(); // BMPAL
  C_ex_(); // C!
  DARK(); // DARK
  UNK_0xed1f(); // UNK_0xed1f
  DARK(); // DARK
  Push(0); // 0
  Push(0x00c7);
  _dot_RAW(); // .RAW
  _ask_VGA(); // ?VGA
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label458;

  Push(pp_XBUF_minus_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  _ro_LDS_rc_(); // (LDS)
  MOUNTB(); // MOUNTB
  Push(0xb9f9);
  MODULE(); // MODULE
  UNK_0xed1f(); // UNK_0xed1f
  Push(0); // 0
  Push(0x0064);
  _dot_RAW(); // .RAW

  label458:
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label459;

  SCR_minus_RES(); // SCR-RES

  label459:
  Push(0x1388);
  MS(); // MS
}


// ================================================
// 0xed8b: WORD 'UNK_0xed8d' codep=0x224c parp=0xed8d
// ================================================

void UNK_0xed8d() // UNK_0xed8d
{
  Push(0x012c);
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  do // (DO)
  {
  Push(0x0032);
  Push(0x05dc);
  RRND(); // RRND
  TONE(); // TONE
  Push(cc_MPS); // MPS
  Push(0); // 0

  do // (DO)
  {
  NOP(); // NOP

  } while(...); // (LOOP) 0xfffc

  } while(...); // (LOOP) 0xffe6
}


// ================================================
// 0xedb7: WORD 'UNK_0xedb9' codep=0x224c parp=0xedb9
// ================================================

void UNK_0xedb9() // UNK_0xedb9
{
  BEEPON(); // BEEPON
  Push(0); // 0

  do // (DO)
  {
  UNK_0xed8d(); // UNK_0xed8d

  } while(...); // (LOOP) 0xfffc
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xedc9: WORD 'UNK_0xedcb' codep=0x224c parp=0xedcb
// ================================================

void UNK_0xedcb() // UNK_0xedcb
{
  CTINIT(); // CTINIT
  Push(0x00d8);
  UNK_0xe83c(); // UNK_0xe83c
  Push(0x2710); Pust(0x0000);
  UNK_0xe940(); // UNK_0xe940
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xede1: WORD 'UNK_0xede3' codep=0x224c parp=0xede3
// ================================================

void UNK_0xede3() // UNK_0xede3
{
  UNK_0xe9b8(); // UNK_0xe9b8
  UNK_0xe9c2(); // UNK_0xe9c2
  UNK_0xe91c(); // UNK_0xe91c
  if (Pop() == 0) goto label443;

  UNK_0xe9c2(); // UNK_0xe9c2
  UNK_0xe92e(); // UNK_0xe92e
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe964); // UNK_0xe964
  D_ex_(); // D!

  label443:
}


// ================================================
// 0xedfb: WORD 'UNK_0xedfd' codep=0x224c parp=0xedfd
// ================================================

void UNK_0xedfd() // UNK_0xedfd
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xe82b(); // UNK_0xe82b
  C_at_(); // C@
  Push(0x0080);
  Push(Pop() | Pop()); // OR
  UNK_0xe82b(); // UNK_0xe82b
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  CTINIT(); // CTINIT
  Push(0x00d1);
  UNK_0xe83c(); // UNK_0xe83c
  Push(0x0bb8); Pust(0x0000);
  UNK_0xe940(); // UNK_0xe940
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
  Push(0x0035);
  Push(0xb76b);
  MODULE(); // MODULE
  if (Pop() == 0) goto label441;

  Push(0x49a8);
  Push(0xa50f);
  _ex_(); // !
  UNK_0xedcb(); // UNK_0xedcb

  label441:
}


// ================================================
// 0xee41: WORD 'UNK_0xee43' codep=0x224c parp=0xee43
// ================================================

void UNK_0xee43() // UNK_0xee43
{
  BEEP(); // BEEP
  UNK_0xea06(); // UNK_0xea06
  UNK_0xe9ec(); // UNK_0xe9ec
  UNK_0xea56(); // UNK_0xea56
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  UNK_0xe862(); // UNK_0xe862
  _2DUP(); // 2DUP
  INST_minus_Y(); // INST-Y
  _ex_(); // !
  INST_minus_X(); // INST-X
  _ex_(); // !
  CI(); // CI
  ICLOSE(); // ICLOSE
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  _ex_IY(); // !IY
  _ex_IX(); // !IX
  UNK_0xebb0(); // UNK_0xebb0
}


// ================================================
// 0xee73: WORD 'UNK_0xee75' codep=0x224c parp=0xee75
// ================================================

void UNK_0xee75() // UNK_0xee75
{
  UNK_0xebf4(); // UNK_0xebf4
  if (Pop() == 0) goto label435;

  UNK_0xee43(); // UNK_0xee43

  label435:
}


// ================================================
// 0xee7f: WORD 'UNK_0xee81' codep=0x224c parp=0xee81
// ================================================

void UNK_0xee81() // UNK_0xee81
{
  Push(0); // 0
  Push(cc__4); // 4
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label461;

  _gt_MAINVI(); // >MAINVI
  RNDCLR(); // RNDCLR
  BFILL(); // BFILL
  _dot_LOCAL_minus_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  BEEPON(); // BEEPON
  UNK_0xed8d(); // UNK_0xed8d
  BEEPOFF(); // BEEPOFF
  UNK_0xebb0(); // UNK_0xebb0
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label461;

  Push(0x000a);
  Push(0xc6ca);
  MODULE(); // MODULE

  label461:
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xeeb9: WORD 'UNK_0xeebb' codep=0x224c parp=0xeebb
// ================================================

void UNK_0xeebb() // UNK_0xeebb
{
  UNK_0xe9cc(); // UNK_0xe9cc
  UNK_0xe9d6(); // UNK_0xe9d6
  UNK_0xe91c(); // UNK_0xe91c
  Push(pp_UNK_0xe806); // UNK_0xe806
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label460;

  UNK_0xee81(); // UNK_0xee81

  label460:
}


// ================================================
// 0xeecf: WORD 'UNK_0xeed1' codep=0x224c parp=0xeed1
// ================================================

void UNK_0xeed1() // UNK_0xeed1
{
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe806); // UNK_0xe806
  Push(Read16(Pop())); // @
  _gt_(); // >
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  _2_at_(); // 2@
  Push(0x5f90); Pust(0x0001);
  D_plus_(); // D+
  D_gt_(); // D>
  Push(pp_UNK_0xe806); // UNK_0xe806
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  UNK_0xe9b0(); // UNK_0xe9b0
  UNK_0xe93a(); // UNK_0xe93a
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label432;

  UNK_0xe9cc(); // UNK_0xe9cc
  UNK_0xe93a(); // UNK_0xe93a
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label440;

  UNK_0xebd4(); // UNK_0xebd4
  UNK_0xedfd(); // UNK_0xedfd
  goto label442;

  label440:
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xe82b(); // UNK_0xe82b
  C_at_(); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xe82b(); // UNK_0xe82b
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  CTINIT(); // CTINIT
  Push(0x6757); Pust(0x0002);
  UNK_0xea44(); // UNK_0xea44
  _dot_TTY(); // .TTY

  label442:
  Push(pp_UNK_0xe806); // UNK_0xe806
  ON(); // ON
  SAVE_minus_OV(); // SAVE-OV

  label432:
  UNK_0xe9b0(); // UNK_0xe9b0
  UNK_0xe9b8(); // UNK_0xe9b8
  UNK_0xe91c(); // UNK_0xe91c
  Push(pp_UNK_0xe806); // UNK_0xe806
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label433;

  UNK_0xee75(); // UNK_0xee75

  label433:
}


// ================================================
// 0xef4d: WORD 'UNK_0xef4f' codep=0x224c parp=0xef4f
// ================================================

void UNK_0xef4f() // UNK_0xef4f
{
  Push(pp_LSCAN); // LSCAN
  DUP(); // DUP
  C_at_(); // C@
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
}


// ================================================
// 0xef5b: WORD 'UNK_0xef5d' codep=0x224c parp=0xef5d
// ================================================

void UNK_0xef5d() // UNK_0xef5d
{
  Push(pp_LSCAN); // LSCAN
  _099(); // 099
  Push(0); // 0

  do // (DO)
  {
  Push(pp_DICT); // DICT
  Push(Read16(Pop())); // @
  I(); // I
  PHRASE(); // PHRASE
  _plus__at_(); // +@
  Push(Pop()+3); // 3+
  _at_DS(); // @DS
  UNK_0xef4f(); // UNK_0xef4f
  _2OVER(); // 2OVER
  Push(Pop()-1); // 1-
  LC_at_(); // LC@
  DUP(); // DUP
  _gt_R(); // >R
  LCMOVE(); // LCMOVE
  R_gt_(); // R>
  Push(pp_LSCAN); // LSCAN
  C_at_(); // C@
  Push(Pop() + Pop()); // +
  Push(pp_LSCAN); // LSCAN
  C_ex_(); // C!
  Push(cc_BL); // BL
  UNK_0xef4f(); // UNK_0xef4f
  C_ex_(); // C!
  Push(1); // 1
  Push(pp_LSCAN); // LSCAN
  C_at_(); // C@
  Push(Pop() + Pop()); // +
  Push(pp_LSCAN); // LSCAN
  C_ex_(); // C!
  Push(2); // 2

  } while(...); // (+LOOP) 0xffc2
  Pop(); // DROP
}


// ================================================
// 0xefa9: WORD 'UNK_0xefab' codep=0x224c parp=0xefab
// ================================================

void UNK_0xefab() // UNK_0xefab
{
  Push(1); // 1
  Push(pp_LINE_minus_CO); // LINE-CO
  _ex_(); // !
  WHITE(); // WHITE
  Push(pp_CTCOLOR); // CTCOLOR
  _ex_(); // !
  WUP(); // WUP
  PHRASE_do_(); // PHRASE$
  COUNT(); // COUNT
  UNK_0xef5d(); // UNK_0xef5d
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0xbf6f);
  MODULE(); // MODULE
  INEXT(); // INEXT
  Push(0x4e20); Pust(0x0000);
  Push(0xbe96);
  MODULE(); // MODULE
}


// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x224c parp=0xefdb
// ================================================

void UNK_0xefdb() // UNK_0xefdb
{
  Push(0x1388);
  MS(); // MS
  Push(0x00cd);
  UNK_0xe83c(); // UNK_0xe83c
  UNK_0xefab(); // UNK_0xefab
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
  Push(0x000d);
  Push(0xb9c8);
  MODULE(); // MODULE
  Push(0x00cd);
  UNK_0xe83c(); // UNK_0xe83c
  INEXT(); // INEXT
  Push(cc__4); // 4
  Push(0); // 0

  do // (DO)
  {
  UNK_0xefab(); // UNK_0xefab

  } while(...); // (LOOP) 0xfffc
  KEY(); // KEY
  Pop(); // DROP
  UNK_0xed33(); // UNK_0xed33
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY(); // KEY
  Pop(); // DROP
  BYE(); // BYE
}


// ================================================
// 0xf01d: WORD 'UNK_0xf01f' codep=0x224c parp=0xf01f
// ================================================

void UNK_0xf01f() // UNK_0xf01f
{
  UNK_0xe904(); // UNK_0xe904
  UNK_0xe9cc(); // UNK_0xe9cc
  UNK_0xe93a(); // UNK_0xe93a
  Push(Pop() & Pop()); // AND
  Push(pp_WIN); // WIN
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label452;

  UNK_0xe904(); // UNK_0xe904
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label453;

  UNK_0xe85a(); // UNK_0xe85a
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001d);
  IFIND(); // IFIND
  UNK_0xe86a(); // UNK_0xe86a
  _minus_ICON(); // -ICON
  UNK_0xebb0(); // UNK_0xebb0
  ICLOSE(); // ICLOSE
  Push(0x07d0);
  MS(); // MS

  label453:
  UNK_0xefdb(); // UNK_0xefdb

  label452:
}


// ================================================
// 0xf059: WORD 'UNK_0xf05b' codep=0x224c parp=0xf05b
// ================================================

void UNK_0xf05b() // UNK_0xf05b
{
  Push(pp_FONTSEG); // FONTSEG
  Push(Read16(Pop())); // @
  Push(0x0091);
  Push(Pop() + Pop()); // +
}

// 0xf067: db 0x4c 0x22 0x29 0x54 0xae 0x0b 0x20 0x0f 0x3a 0x2c 0x4c 0x6d 0x45 0x43 0x90 0x16 'L")T    :,LmEC  '

// ================================================
// 0xf077: WORD 'UNK_0xf079' codep=0x224c parp=0xf079
// ================================================

void UNK_0xf079() // UNK_0xf079
{
  Push(2); // 2
  UNK_0xedb9(); // UNK_0xedb9
  CTINIT(); // CTINIT
  Push(0x00ca);
  UNK_0xe83c(); // UNK_0xe83c
  Push(0x2710); Pust(0x0000);
  UNK_0xe940(); // UNK_0xe940
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
  Push(2); // 2
  UNK_0xedb9(); // UNK_0xedb9
}


// ================================================
// 0xf097: WORD 'UNK_0xf099' codep=0x224c parp=0xf099
// ================================================

void UNK_0xf099() // UNK_0xf099
{
  UNK_0xe86a(); // UNK_0xe86a
  CTINIT(); // CTINIT
  Push(0x00ca);
  UNK_0xe83c(); // UNK_0xe83c
  INEXT(); // INEXT
  Push(0x2710); Pust(0x0000);
  UNK_0xe940(); // UNK_0xe940
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf0b3: WORD 'ANIM' codep=0x2214 parp=0xf0bc
// ================================================
// 0xf0bc: db 0xbf 0xf0 0x00 0x61 0x6e 0x69 0x6d 0x2e 0x72 0x61 0x77 0x00 '   anim.raw '

// ================================================
// 0xf0c8: WORD 'UNK_0xf0ca' codep=0x224c parp=0xf0ca
// ================================================

void UNK_0xf0ca() // UNK_0xf0ca
{
  Push(0x001f);
  Push(Pop() * Pop()); // *
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf0d8: WORD 'UNK_0xf0da' codep=0x224c parp=0xf0da
// ================================================

void UNK_0xf0da() // UNK_0xf0da
{
  _gt_R(); // >R
  Push(0xb9f9);
  MODULE(); // MODULE
  NULL(); // NULL
  BMWIDE(); // BMWIDE
  Push(Pop()+2); // 2+
  D_ex_(); // D!
  Push(0x000e);
  BMOFF(); // BMOFF
  _ex_(); // !
  R_at_(); // R@
  BMSEG(); // BMSEG
  _ex_(); // !
  Push(pp_BMAP); // BMAP
  Push(0x000c);
  Push(Pop() + Pop()); // +
  _099(); // 099
  _at_DS(); // @DS
  Push(pp_BMAP); // BMAP
  R_at_(); // R@
  Push(0); // 0
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label469;

  UNK_0xf05b(); // UNK_0xf05b
  Push(2); // 2
  goto label470;

  label469:
  Push(pp_XBUF_minus_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0x000d);

  label470:
  R_gt_(); // R>
  Push(0x000e);
  Push(0x01e0);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xf136: WORD 'UNK_0xf138' codep=0x224c parp=0xf138
// ================================================

void UNK_0xf138() // UNK_0xf138
{
  _gt_R(); // >R
  Push(pp_XBUF_minus_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  R_at_(); // R@
  Push(0x018d);
  Push(Pop() * Pop()); // *
  Push(pp_XBUF_minus_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x018d);
  LCMOVE(); // LCMOVE
  R_gt_(); // R>
  UNK_0xf0ca(); // UNK_0xf0ca
  UNK_0xf0da(); // UNK_0xf0da
}


// ================================================
// 0xf15a: WORD 'UNK_0xf15c' codep=0x224c parp=0xf15c
// ================================================

void UNK_0xf15c() // UNK_0xf15c
{
  TIME(); // TIME
  _2_at_(); // 2@
  SAVE_minus_BU(); // SAVE-BU
  Push(cc_ANIM); // ANIM
  Push(pp_XBUF_minus_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  _ro_LDS_rc_(); // (LDS)
  TIME(); // TIME
  D_ex_(); // D!
  MOUNTB(); // MOUNTB
  Push(0x000a);
  Push(0); // 0

  do // (DO)
  {
  I(); // I
  UNK_0xf138(); // UNK_0xf138

  } while(...); // (LOOP) 0xfffa
}


// ================================================
// 0xf182: WORD 'UNK_0xf184' codep=0x224c parp=0xf184
// ================================================

void UNK_0xf184() // UNK_0xf184
{
  UNK_0xf0ca(); // UNK_0xf0ca
  Push(0); // 0
  _at_DS(); // @DS
  Push(pp_BMAP); // BMAP
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  _dot_RAW(); // .RAW
}


// ================================================
// 0xf19e: WORD 'UNK_0xf1a0' codep=0x224c parp=0xf1a0
// ================================================

void UNK_0xf1a0() // UNK_0xf1a0
{
  Push(cc__minus_2); // -2
  Push(cc__3); // 3
  RRND(); // RRND
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf1aa: WORD 'UNK_0xf1ac' codep=0x224c parp=0xf1ac
// ================================================

void UNK_0xf1ac() // UNK_0xf1ac
{
  Push(0x0021);
  UNK_0xf1a0(); // UNK_0xf1a0
  Push(0x0045);
  UNK_0xf1a0(); // UNK_0xf1a0
  POS_dot_(); // POS.
  Push(cc__8); // 8
  UNK_0xf184(); // UNK_0xf184
}


// ================================================
// 0xf1c0: WORD 'UNK_0xf1c2' codep=0x224c parp=0xf1c2
// ================================================

void UNK_0xf1c2() // UNK_0xf1c2
{
  Push(0x002a);
  UNK_0xf1a0(); // UNK_0xf1a0
  Push(0x0057);
  UNK_0xf1a0(); // UNK_0xf1a0
  POS_dot_(); // POS.
  Push(cc__9); // 9
  UNK_0xf184(); // UNK_0xf184
}


// ================================================
// 0xf1d6: WORD 'UNK_0xf1d8' codep=0x224c parp=0xf1d8
// ================================================

void UNK_0xf1d8() // UNK_0xf1d8
{
  UNK_0xe9aa(); // UNK_0xe9aa
  UNK_0xe93a(); // UNK_0xe93a
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label429;

  UNK_0xe990(); // UNK_0xe990
  UNK_0xe9aa(); // UNK_0xe9aa
  UNK_0xe92e(); // UNK_0xe92e
  Push(pp_UNK_0xe806); // UNK_0xe806
  _099(); // 099
  Push(cc__5); // 5
  Push(0xc5da);
  MODULE(); // MODULE
  Push(pp__ask_AF); // ?AF
  _099(); // 099
  Push(pp__ask_UF); // ?UF
  _099(); // 099
  Push(pp_WIN); // WIN
  _099(); // 099
  NULL(); // NULL
  _2DUP(); // 2DUP
  Push(pp_UNK_0xe96a); // UNK_0xe96a
  D_ex_(); // D!
  Push(pp_UNK_0xe964); // UNK_0xe964
  D_ex_(); // D!

  label429:
}


// ================================================
// 0xf20e: WORD 'UNK_0xf210' codep=0x224c parp=0xf210
// ================================================

void UNK_0xf210() // UNK_0xf210
{
  UNK_0xe8de(); // UNK_0xe8de
  UNK_0xe9b0(); // UNK_0xe9b0
  UNK_0xe93a(); // UNK_0xe93a
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label430;

  WUP(); // WUP
  UNK_0xf079(); // UNK_0xf079
  UNK_0xe9b0(); // UNK_0xe9b0
  UNK_0xe92e(); // UNK_0xe92e
  UNK_0xec1a(); // UNK_0xec1a
  UNK_0xebb0(); // UNK_0xebb0
  UNK_0xf099(); // UNK_0xf099
  Push(pp_FORCEPT); // FORCEPT
  _099(); // 099
  Push(0x00cb);
  UNK_0xe83c(); // UNK_0xe83c
  Push(0x1388); Pust(0x0000);
  UNK_0xe940(); // UNK_0xe940
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE

  label430:
}


// ================================================
// 0xf244: WORD 'UNK_0xf246' codep=0x224c parp=0xf246
// ================================================

void UNK_0xf246() // UNK_0xf246
{
  UNK_0xf1ac(); // UNK_0xf1ac
  UNK_0xf1c2(); // UNK_0xf1c2
}


// ================================================
// 0xf24c: WORD 'UNK_0xf24e' codep=0x224c parp=0xf24e
// ================================================

void UNK_0xf24e() // UNK_0xf24e
{
  Push(0x0026);
  Push(0x004d);
  POS_dot_(); // POS.
  Push(0); // 0
  Push(cc__4); // 4
  RRND(); // RRND
  UNK_0xf184(); // UNK_0xf184
}


// ================================================
// 0xf262: WORD 'UNK_0xf264' codep=0x224c parp=0xf264
// ================================================

void UNK_0xf264() // UNK_0xf264
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  UNK_0xf24e(); // UNK_0xf24e
  V_gt_DISPL(); // V>DISPL
  BEEPON(); // BEEPON
  Push(cc__4); // 4
  Push(0); // 0

  do // (DO)
  {
  UNK_0xed8d(); // UNK_0xed8d

  } while(...); // (LOOP) 0xfffc
  Push(cc__9); // 9
  Push(cc__4); // 4

  do // (DO)
  {
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  UNK_0xf1ac(); // UNK_0xf1ac
  I(); // I
  Push(cc__8); // 8
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label450;

  Push(0x002c);
  Push(0x0057);
  POS_dot_(); // POS.
  I(); // I
  UNK_0xf184(); // UNK_0xf184

  label450:
  V_gt_DISPL(); // V>DISPL
  UNK_0xed8d(); // UNK_0xed8d

  } while(...); // (LOOP) 0xffda
  Push(cc__3); // 3
  UNK_0xedb9(); // UNK_0xedb9
}


// ================================================
// 0xf2ae: WORD 'UNK_0xf2b0' codep=0x224c parp=0xf2b0
// ================================================

void UNK_0xf2b0() // UNK_0xf2b0
{
  BEEPON(); // BEEPON
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe964); // UNK_0xe964
  _2_at_(); // 2@
  D_minus_(); // D-
  Pop(); // DROP
  Push(0x7530);
  SWAP(); // SWAP
  _minus_(); // -
  ABS(); // ABS
  Push(0x0014);
  _slash_(); // /
  DUP(); // DUP
  Push(0x0064);
  Push(Pop() + Pop()); // +
  RRND(); // RRND
  Push(0x03e8);
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  do // (DO)
  {
  Push(0x0032);
  OVER(); // OVER
  RRND(); // RRND
  TONE(); // TONE

  } while(...); // (LOOP) 0xfff4
  BEEPOFF(); // BEEPOFF
  Pop(); // DROP
}


// ================================================
// 0xf2f8: WORD 'UNK_0xf2fa' codep=0x224c parp=0xf2fa
// ================================================

void UNK_0xf2fa() // UNK_0xf2fa
{
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  Push(0); // 0
  Push(cc__6); // 6
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label445;

  Push(0); // 0
  Push(cc__4); // 4
  RRND(); // RRND
  Push(0); // 0

  do // (DO)
  {
  UNK_0xf24e(); // UNK_0xf24e
  V_gt_DISPL(); // V>DISPL
  DARK(); // DARK
  Push(pp__at__co_0_star_1_sc_); // @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label446;

  UNK_0xf2b0(); // UNK_0xf2b0

  label446:
  Push(0x000f);
  MS(); // MS

  } while(...); // (LOOP) 0xffe8

  label445:
  UNK_0xf246(); // UNK_0xf246
  Push(0x000a);
  MS(); // MS
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf33c: WORD 'UNK_0xf33e' codep=0x224c parp=0xf33e
// ================================================

void UNK_0xf33e() // UNK_0xf33e
{
  UNK_0xe970(); // UNK_0xe970
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xe964); // UNK_0xe964
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(pp__ask_UF); // ?UF
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  UNK_0xe9b8(); // UNK_0xe9b8
  UNK_0xe93a(); // UNK_0xe93a
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label444;

  Push(0x00ce);
  UNK_0xe83c(); // UNK_0xe83c
  ILAST(); // ILAST
  Push(0x0008);
  Push(0); // 0

  do // (DO)
  {
  UNK_0xf2fa(); // UNK_0xf2fa
  I(); // I
  Push(pp_EXPOS); // EXPOS
  Push(Pop() + Pop()); // +
  Push(0x0fa0);
  I(); // I
  M_star_(); // M*
  Push(pp_UNK_0xe964); // UNK_0xe964
  _2_at_(); // 2@
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
  OVER(); // OVER
  UNK_0xe93a(); // UNK_0xe93a
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label447;

  UNK_0xe92e(); // UNK_0xe92e
  CTINIT(); // CTINIT
  WUP(); // WUP
  Push(0xbe45);
  MODULE(); // MODULE
  goto label448;

  label447:
  Pop(); // DROP

  label448:
  IPREV(); // IPREV

  } while(...); // (LOOP) 0xffc2
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE

  label444:
}


// ================================================
// 0xf3b2: WORD 'UNK_0xf3b4' codep=0x224c parp=0xf3b4
// ================================================

void UNK_0xf3b4() // UNK_0xf3b4
{
  UNK_0xf264(); // UNK_0xf264
  UNK_0xea10(); // UNK_0xea10
  Push(0x00cc);
  UNK_0xe83c(); // UNK_0xe83c
  Push(0x2710); Pust(0x0000);
  UNK_0xe940(); // UNK_0xe940
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xe96a); // UNK_0xe96a
  D_ex_(); // D!
  UNK_0xe85a(); // UNK_0xe85a
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x001d);
  IFIND(); // IFIND
  Pop(); // DROP
  Push(cc__minus_1); // -1
  UNK_0xe823(); // UNK_0xe823
  _ex_(); // !
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf3ee: WORD 'UNK_0xf3f0' codep=0x224c parp=0xf3f0
// ================================================

void UNK_0xf3f0() // UNK_0xf3f0
{
  UNK_0xe970(); // UNK_0xe970
  UNK_0xe9cc(); // UNK_0xe9cc
  UNK_0xe93a(); // UNK_0xe93a
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label449;

  UNK_0xe9cc(); // UNK_0xe9cc
  UNK_0xe92e(); // UNK_0xe92e
  UNK_0xf3b4(); // UNK_0xf3b4
  Push(cc__minus_1); // -1
  Push(pp__ask_AF); // ?AF
  _ex_(); // !

  label449:
}


// ================================================
// 0xf40c: WORD 'BOLT' codep=0x224c parp=0xf415
// ================================================

void BOLT() // BOLT
{
  UNK_0xe9b0(); // UNK_0xe9b0
  UNK_0xe93a(); // UNK_0xe93a
  if (Pop() == 0) goto label466;

  UNK_0xe9b0(); // UNK_0xe9b0
  UNK_0xe9b8(); // UNK_0xe9b8
  UNK_0xe91c(); // UNK_0xe91c
  if (Pop() == 0) goto label467;

  UNK_0xe9b8(); // UNK_0xe9b8
  UNK_0xe92e(); // UNK_0xe92e
  UNK_0xf15c(); // UNK_0xf15c
  CTINIT(); // CTINIT
  Push(0x6776); Pust(0x0002);
  UNK_0xea44(); // UNK_0xea44
  BEEP(); // BEEP
  _dot_TTY(); // .TTY
  UNK_0xeb62(); // UNK_0xeb62
  Push(pp__ask_AF); // ?AF
  ON(); // ON
  Push(0x67a0); Pust(0x0002);
  UNK_0xea44(); // UNK_0xea44
  _dot_TTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  Push(0x0064);
  Push(0xbf4a);
  MODULE(); // MODULE

  label467:
  SAVE_minus_OV(); // SAVE-OV
  goto label468;

  label466:
  CTINIT(); // CTINIT
  Push(0x00d0);
  UNK_0xe83c(); // UNK_0xe83c
  Push(0x4e20); Pust(0x0000);
  UNK_0xe940(); // UNK_0xe940
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE

  label468:
}


// ================================================
// 0xf477: WORD 'UNK_0xf479' codep=0x224c parp=0xf479
// ================================================

void UNK_0xf479() // UNK_0xf479
{
  Push(0x00ff);
  UNK_0xe83c(); // UNK_0xe83c
  ILAST(); // ILAST

  label463:
  _gt_TVCT(); // >TVCT
  CTINIT(); // CTINIT
  Push(0x9c40); Pust(0x0000);
  UNK_0xe940(); // UNK_0xe940
  IPREV(); // IPREV
  _ask_LAST(); // ?LAST
  WUP(); // WUP
  if (Pop() == 0) goto label463;

  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf49d: WORD 'UNK_0xf49f' codep=0x224c parp=0xf49f
// ================================================

void UNK_0xf49f() // UNK_0xf49f
{
  Push(0x001c);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  ART_minus_VOL(); // ART-VOL
  Push(Read16(Pop())); // @
  INST_minus_QT(); // INST-QT
  _ex_(); // !
  ICLOSE(); // ICLOSE
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  Push(0xb6ec);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c5: WORD 'UNK_0xf4c7' codep=0x224c parp=0xf4c7
// ================================================

void UNK_0xf4c7() // UNK_0xf4c7
{
  DUP(); // DUP
  Push(0xb76b);
  MODULE(); // MODULE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label464;

  UNK_0xf49f(); // UNK_0xf49f
  goto label465;

  label464:
  Pop(); // DROP

  label465:
}


// ================================================
// 0xf4df: WORD 'UNK_0xf4e1' codep=0x224c parp=0xf4e1
// ================================================

void UNK_0xf4e1() // UNK_0xf4e1
{
  Push(0x0036);
  UNK_0xf4c7(); // UNK_0xf4c7
}


// ================================================
// 0xf4e9: WORD 'UNK_0xf4eb' codep=0x224c parp=0xf4eb
// ================================================

void UNK_0xf4eb() // UNK_0xf4eb
{
  Push(0x0037);
  UNK_0xf4c7(); // UNK_0xf4c7
}


// ================================================
// 0xf4f3: WORD 'UNK_0xf4f5' codep=0x224c parp=0xf4f5
// ================================================

void UNK_0xf4f5() // UNK_0xf4f5
{
  UNK_0xf1d8(); // UNK_0xf1d8
  UNK_0xf210(); // UNK_0xf210
  UNK_0xeed1(); // UNK_0xeed1
  UNK_0xede3(); // UNK_0xede3
  UNK_0xf33e(); // UNK_0xf33e
  UNK_0xf3f0(); // UNK_0xf3f0
  UNK_0xeca2(); // UNK_0xeca2
  UNK_0xf01f(); // UNK_0xf01f
  UNK_0xeebb(); // UNK_0xeebb
}


// ================================================
// 0xf509: WORD 'DO-HALLS' codep=0x224c parp=0xf516
// ================================================

void DO_minus_HALLS() // DO-HALLS
{
  Push(0x000c);
  Push(0xb9c8);
  MODULE(); // MODULE
  UNK_0xf479(); // UNK_0xf479
  UNK_0xf4e1(); // UNK_0xf4e1
  UNK_0xf4eb(); // UNK_0xf4eb
  Push(pp_PIC_n_); // PIC#
  _099(); // 099
}


// ================================================
// 0xf52c: WORD '!INIT' codep=0x224c parp=0xf536
// ================================================

void _ex_INIT() // !INIT
{
  UNK_0xe990(); // UNK_0xe990
  UNK_0xf1d8(); // UNK_0xf1d8
}


// ================================================
// 0xf53c: WORD 'DUHL' codep=0x224c parp=0xf545
// ================================================

void DUHL() // DUHL
{
  UNK_0xf4f5(); // UNK_0xf4f5
  SAVE_minus_OV(); // SAVE-OV
}

// 0xf54b: db 0x45 0x4e 0x44 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'END-_________________ '
  