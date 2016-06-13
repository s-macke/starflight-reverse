// ====== OVERLAY 'BLDLISTS' ======
// store offset = 0xeb70
// overlay size   = 0x09f0

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xeb8a  codep:0x2214 parp:0xeb8a size:0x0002 C-string:'UNK_0xeb8a'
// 1870:      UNK_0xeb8e  codep:0x2214 parp:0xeb8e size:0x0002 C-string:'UNK_0xeb8e'
// 1871:      UNK_0xeb92  codep:0x2214 parp:0xeb92 size:0x0002 C-string:'UNK_0xeb92'
// 1872:      UNK_0xeb96  codep:0x2214 parp:0xeb96 size:0x0002 C-string:'UNK_0xeb96'
// 1873:      UNK_0xeb9a  codep:0x7420 parp:0xeb9a size:0x0003 C-string:'UNK_0xeb9a'
// 1874:      UNK_0xeb9f  codep:0x7420 parp:0xeb9f size:0x0003 C-string:'UNK_0xeb9f'
// 1875:      UNK_0xeba4  codep:0x7420 parp:0xeba4 size:0x0003 C-string:'UNK_0xeba4'
// 1876:      UNK_0xeba9  codep:0x7420 parp:0xeba9 size:0x0003 C-string:'UNK_0xeba9'
// 1877:      UNK_0xebae  codep:0x7394 parp:0xebae size:0x0006 C-string:'UNK_0xebae'
// 1878:      UNK_0xebb6  codep:0x7394 parp:0xebb6 size:0x0006 C-string:'UNK_0xebb6'
// 1879:      UNK_0xebbe  codep:0x7394 parp:0xebbe size:0x0006 C-string:'UNK_0xebbe'
// 1880:      UNK_0xebc6  codep:0x7394 parp:0xebc6 size:0x000e C-string:'UNK_0xebc6'
// 1881:      UNK_0xebd6  codep:0x7394 parp:0xebd6 size:0x000e C-string:'UNK_0xebd6'
// 1882:      UNK_0xebe6  codep:0x7394 parp:0xebe6 size:0x000e C-string:'UNK_0xebe6'
// 1883:      UNK_0xebf6  codep:0x7394 parp:0xebf6 size:0x0006 C-string:'UNK_0xebf6'
// 1884:      UNK_0xebfe  codep:0x7394 parp:0xebfe size:0x0006 C-string:'UNK_0xebfe'
// 1885:      UNK_0xec06  codep:0x7394 parp:0xec06 size:0x0006 C-string:'UNK_0xec06'
// 1886:      UNK_0xec0e  codep:0x7394 parp:0xec0e size:0x000e C-string:'UNK_0xec0e'
// 1887:      UNK_0xec1e  codep:0x7394 parp:0xec1e size:0x0006 C-string:'UNK_0xec1e'
// 1888:      UNK_0xec26  codep:0x7394 parp:0xec26 size:0x0006 C-string:'UNK_0xec26'
// 1889:      UNK_0xec2e  codep:0x7394 parp:0xec2e size:0x0006 C-string:'UNK_0xec2e'
// 1890:      UNK_0xec36  codep:0x7394 parp:0xec36 size:0x0006 C-string:'UNK_0xec36'
// 1891:      UNK_0xec3e  codep:0x7394 parp:0xec3e size:0x0006 C-string:'UNK_0xec3e'
// 1892:      UNK_0xec46  codep:0x7394 parp:0xec46 size:0x0006 C-string:'UNK_0xec46'
// 1893:      UNK_0xec4e  codep:0x7394 parp:0xec4e size:0x0006 C-string:'UNK_0xec4e'
// 1894:      UNK_0xec56  codep:0x7394 parp:0xec56 size:0x0014 C-string:'UNK_0xec56'
// 1895:      UNK_0xec6c  codep:0x224c parp:0xec6c size:0x000c C-string:'UNK_0xec6c'
// 1896:      UNK_0xec7a  codep:0x224c parp:0xec7a size:0x0006 C-string:'UNK_0xec7a'
// 1897:      UNK_0xec82  codep:0x224c parp:0xec82 size:0x000e C-string:'UNK_0xec82'
// 1898:      UNK_0xec92  codep:0x224c parp:0xec92 size:0x0038 C-string:'UNK_0xec92'
// 1899:      UNK_0xeccc  codep:0x224c parp:0xeccc size:0x0036 C-string:'UNK_0xeccc'
// 1900:           !TAMT  codep:0x224c parp:0xed0c size:0x0012 C-string:'_ex_TAMT'
// 1901:           @TAMT  codep:0x224c parp:0xed28 size:0x002e C-string:'_at_TAMT'
// 1902:      UNK_0xed58  codep:0x7394 parp:0xed58 size:0x000e C-string:'UNK_0xed58'
// 1903:      UNK_0xed68  codep:0x7394 parp:0xed68 size:0x0006 C-string:'UNK_0xed68'
// 1904:      UNK_0xed70  codep:0x224c parp:0xed70 size:0x0030 C-string:'UNK_0xed70'
// 1905:        (GET.BAS  codep:0x4b3b parp:0xedad size:0x0014 C-string:'_ro_GET_dot_BAS'
// 1906:        (GETUSE)  codep:0x4b3b parp:0xedce size:0x0014 C-string:'_ro_GETUSE_rc_'
// 1907:      UNK_0xede4  codep:0x224c parp:0xede4 size:0x000c C-string:'UNK_0xede4'
// 1908:      UNK_0xedf2  codep:0x224c parp:0xedf2 size:0x0012 C-string:'UNK_0xedf2'
// 1909:      UNK_0xee06  codep:0x224c parp:0xee06 size:0x0014 C-string:'UNK_0xee06'
// 1910:      UNK_0xee1c  codep:0x1d29 parp:0xee1c size:0x0005 C-string:'UNK_0xee1c'
// 1911:      UNK_0xee23  codep:0x1d29 parp:0xee23 size:0x0005 C-string:'UNK_0xee23'
// 1912:      UNK_0xee2a  codep:0x1d29 parp:0xee2a size:0x0005 C-string:'UNK_0xee2a'
// 1913:      UNK_0xee31  codep:0x224c parp:0xee31 size:0x000c C-string:'UNK_0xee31'
// 1914:      UNK_0xee3f  codep:0x224c parp:0xee3f size:0x0010 C-string:'UNK_0xee3f'
// 1915:      UNK_0xee51  codep:0x224c parp:0xee51 size:0x0004 C-string:'UNK_0xee51'
// 1916:      UNK_0xee57  codep:0x224c parp:0xee57 size:0x0010 C-string:'UNK_0xee57'
// 1917:      UNK_0xee69  codep:0x224c parp:0xee69 size:0x0010 C-string:'UNK_0xee69'
// 1918:      UNK_0xee7b  codep:0x224c parp:0xee7b size:0x000c C-string:'UNK_0xee7b'
// 1919:      UNK_0xee89  codep:0x224c parp:0xee89 size:0x000e C-string:'UNK_0xee89'
// 1920:      UNK_0xee99  codep:0x224c parp:0xee99 size:0x0026 C-string:'UNK_0xee99'
// 1921:      UNK_0xeec1  codep:0x224c parp:0xeec1 size:0x0016 C-string:'UNK_0xeec1'
// 1922:      UNK_0xeed9  codep:0x224c parp:0xeed9 size:0x0018 C-string:'UNK_0xeed9'
// 1923:      UNK_0xeef3  codep:0x224c parp:0xeef3 size:0x000e C-string:'UNK_0xeef3'
// 1924:      UNK_0xef03  codep:0x224c parp:0xef03 size:0x004a C-string:'UNK_0xef03'
// 1925:      UNK_0xef4f  codep:0x224c parp:0xef4f size:0x0016 C-string:'UNK_0xef4f'
// 1926:      UNK_0xef67  codep:0x224c parp:0xef67 size:0x0012 C-string:'UNK_0xef67'
// 1927:      UNK_0xef7b  codep:0x224c parp:0xef7b size:0x0016 C-string:'UNK_0xef7b'
// 1928:      UNK_0xef93  codep:0x224c parp:0xef93 size:0x0018 C-string:'UNK_0xef93'
// 1929:      UNK_0xefad  codep:0x224c parp:0xefad size:0x005a C-string:'UNK_0xefad'
// 1930:      UNK_0xf009  codep:0x224c parp:0xf009 size:0x0014 C-string:'UNK_0xf009'
// 1931:      UNK_0xf01f  codep:0x224c parp:0xf01f size:0x0010 C-string:'UNK_0xf01f'
// 1932:      UNK_0xf031  codep:0x224c parp:0xf031 size:0x0006 C-string:'UNK_0xf031'
// 1933:      UNK_0xf039  codep:0x224c parp:0xf039 size:0x0154 C-string:'UNK_0xf039'
// 1934:      UNK_0xf18f  codep:0x224c parp:0xf18f size:0x0012 C-string:'UNK_0xf18f'
// 1935:      UNK_0xf1a3  codep:0x224c parp:0xf1a3 size:0x008e C-string:'UNK_0xf1a3'
// 1936:      UNK_0xf233  codep:0x224c parp:0xf233 size:0x001a C-string:'UNK_0xf233'
// 1937:      UNK_0xf24f  codep:0x224c parp:0xf24f size:0x000e C-string:'UNK_0xf24f'
// 1938:      UNK_0xf25f  codep:0x224c parp:0xf25f size:0x002c C-string:'UNK_0xf25f'
// 1939:      UNK_0xf28d  codep:0x224c parp:0xf28d size:0x0014 C-string:'UNK_0xf28d'
// 1940:      UNK_0xf2a3  codep:0x224c parp:0xf2a3 size:0x0016 C-string:'UNK_0xf2a3'
// 1941:      UNK_0xf2bb  codep:0x224c parp:0xf2bb size:0x0050 C-string:'UNK_0xf2bb'
// 1942:      UNK_0xf30d  codep:0x224c parp:0xf30d size:0x000c C-string:'UNK_0xf30d'
// 1943:      UNK_0xf31b  codep:0x224c parp:0xf31b size:0x001e C-string:'UNK_0xf31b'
// 1944:      UNK_0xf33b  codep:0x224c parp:0xf33b size:0x0026 C-string:'UNK_0xf33b'
// 1945:      UNK_0xf363  codep:0x1d29 parp:0xf363 size:0x0029 C-string:'UNK_0xf363'
// 1946:        TRADE>OR  codep:0x224c parp:0xf399 size:0x001e C-string:'TRADE_gt_OR'
// 1947:        APOST>PO  codep:0x4b3b parp:0xf3c4 size:0x0022 C-string:'APOST_gt_PO'
// 1948:      UNK_0xf3e8  codep:0x224c parp:0xf3e8 size:0x0034 C-string:'UNK_0xf3e8'
// 1949:      UNK_0xf41e  codep:0x224c parp:0xf41e size:0x0066 C-string:'UNK_0xf41e'
// 1950:        SET-CARG  codep:0x224c parp:0xf491 size:0x0024 C-string:'SET_dash_CARG'
// 1951:      UNK_0xf4b7  codep:0x224c parp:0xf4b7 size:0x003e C-string:'UNK_0xf4b7'
// 1952:        BLD-LIST  codep:0x224c parp:0xf502 size:0x0000 C-string:'BLD_dash_LIST'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xee1c[5] = {0x00, 0x03, 0x05, 0x08, 0x0b}; // UNK_0xee1c
unsigned char UNK_0xee23[5] = {0x00, 0x0f, 0x12, 0x15, 0x18}; // UNK_0xee23
unsigned char UNK_0xee2a[5] = {0x00, 0x23, 0x28, 0x2d, 0x32}; // UNK_0xee2a
unsigned char UNK_0xf363[41] = {0x00, 0x01, 0x02, 0x08, 0x08, 0x08, 0x0a, 0x03, 0x04, 0x05, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x06, 0x00, 0x17, 0x17, 0x17, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06}; // UNK_0xf363

const unsigned short int cc_UNK_0xeb8a = 0x0009; // UNK_0xeb8a
const unsigned short int cc_UNK_0xeb8e = 0x001c; // UNK_0xeb8e
const unsigned short int cc_UNK_0xeb92 = 0x001a; // UNK_0xeb92
const unsigned short int cc_UNK_0xeb96 = 0x0044; // UNK_0xeb96


// 0xeb82: db 0x9d 0x00 0x14 0x22 0x15 0x00 '   "  '

// ================================================
// 0xeb88: WORD 'UNK_0xeb8a' codep=0x2214 parp=0xeb8a
// ================================================
// 0xeb8a: db 0x09 0x00 '  '

// ================================================
// 0xeb8c: WORD 'UNK_0xeb8e' codep=0x2214 parp=0xeb8e
// ================================================
// 0xeb8e: db 0x1c 0x00 '  '

// ================================================
// 0xeb90: WORD 'UNK_0xeb92' codep=0x2214 parp=0xeb92
// ================================================
// 0xeb92: db 0x1a 0x00 '  '

// ================================================
// 0xeb94: WORD 'UNK_0xeb96' codep=0x2214 parp=0xeb96
// ================================================
// 0xeb96: db 0x44 0x00 'D '

// ================================================
// 0xeb98: WORD 'UNK_0xeb9a' codep=0x7420 parp=0xeb9a
// ================================================
// 0xeb9a: db 0x14 0x43 0x16 ' C '

// ================================================
// 0xeb9d: WORD 'UNK_0xeb9f' codep=0x7420 parp=0xeb9f
// ================================================
// 0xeb9f: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xeba2: WORD 'UNK_0xeba4' codep=0x7420 parp=0xeba4
// ================================================
// 0xeba4: db 0x0b 0x11 0x02 '   '

// ================================================
// 0xeba7: WORD 'UNK_0xeba9' codep=0x7420 parp=0xeba9
// ================================================
// 0xeba9: db 0x34 0x12 0x01 '4  '

// ================================================
// 0xebac: WORD 'UNK_0xebae' codep=0x7394 parp=0xebae
// ================================================
// 0xebae: db 0x15 0x29 0x01 0x32 0xd1 0x6a ' ) 2 j'

// ================================================
// 0xebb4: WORD 'UNK_0xebb6' codep=0x7394 parp=0xebb6
// ================================================
// 0xebb6: db 0x20 0x16 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xebbc: WORD 'UNK_0xebbe' codep=0x7394 parp=0xebbe
// ================================================
// 0xebbe: db 0x15 0x13 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xebc4: WORD 'UNK_0xebc6' codep=0x7394 parp=0xebc6
// ================================================
// 0xebc6: db 0x15 0x14 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x15 0x01 0x32 0xd1 0x6a '   2 j s   2 j'

// ================================================
// 0xebd4: WORD 'UNK_0xebd6' codep=0x7394 parp=0xebd6
// ================================================
// 0xebd6: db 0x15 0x16 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x1a 0x03 0x32 0xd1 0x6a '   2 j s   2 j'

// ================================================
// 0xebe4: WORD 'UNK_0xebe6' codep=0x7394 parp=0xebe6
// ================================================
// 0xebe6: db 0x15 0x1d 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x1e 0x01 0x32 0xd1 0x6a '   2 j s   2 j'

// ================================================
// 0xebf4: WORD 'UNK_0xebf6' codep=0x7394 parp=0xebf6
// ================================================
// 0xebf6: db 0x15 0x1f 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xebfc: WORD 'UNK_0xebfe' codep=0x7394 parp=0xebfe
// ================================================
// 0xebfe: db 0x15 0x20 0x01 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xec04: WORD 'UNK_0xec06' codep=0x7394 parp=0xec06
// ================================================
// 0xec06: db 0x15 0x21 0x01 0x32 0xd1 0x6a ' ! 2 j'

// ================================================
// 0xec0c: WORD 'UNK_0xec0e' codep=0x7394 parp=0xec0e
// ================================================
// 0xec0e: db 0x15 0x23 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x25 0x02 0x32 0xd1 0x6a ' # 2 j s % 2 j'

// ================================================
// 0xec1c: WORD 'UNK_0xec1e' codep=0x7394 parp=0xec1e
// ================================================
// 0xec1e: db 0x15 0x2b 0x01 0x32 0xd1 0x6a ' + 2 j'

// ================================================
// 0xec24: WORD 'UNK_0xec26' codep=0x7394 parp=0xec26
// ================================================
// 0xec26: db 0x15 0x2c 0x01 0x32 0xd1 0x6a ' , 2 j'

// ================================================
// 0xec2c: WORD 'UNK_0xec2e' codep=0x7394 parp=0xec2e
// ================================================
// 0xec2e: db 0x15 0x2d 0x01 0x32 0xd1 0x6a ' - 2 j'

// ================================================
// 0xec34: WORD 'UNK_0xec36' codep=0x7394 parp=0xec36
// ================================================
// 0xec36: db 0x15 0x31 0x01 0x32 0xd1 0x6a ' 1 2 j'

// ================================================
// 0xec3c: WORD 'UNK_0xec3e' codep=0x7394 parp=0xec3e
// ================================================
// 0xec3e: db 0x15 0x2a 0x01 0x32 0xd1 0x6a ' * 2 j'

// ================================================
// 0xec44: WORD 'UNK_0xec46' codep=0x7394 parp=0xec46
// ================================================
// 0xec46: db 0x15 0x2e 0x01 0x32 0xd1 0x6a ' . 2 j'

// ================================================
// 0xec4c: WORD 'UNK_0xec4e' codep=0x7394 parp=0xec4e
// ================================================
// 0xec4e: db 0x15 0x2f 0x01 0x32 0xd1 0x6a ' / 2 j'

// ================================================
// 0xec54: WORD 'UNK_0xec56' codep=0x7394 parp=0xec56
// ================================================
// 0xec56: db 0x15 0x30 0x01 0x32 0xd1 0x6a 0x4c 0x22 0x5d 0x17 0xbe 0xeb 0x0d 0x7d 0x87 0x3b 0x5f 0x12 0x90 0x16 ' 0 2 jL"]    } ;_   '

// ================================================
// 0xec6a: WORD 'UNK_0xec6c' codep=0x224c parp=0xec6c
// ================================================

void UNK_0xec6c() // UNK_0xec6c
{
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(0x002d);
  _slash_(); // /
}


// ================================================
// 0xec78: WORD 'UNK_0xec7a' codep=0x224c parp=0xec7a
// ================================================

void UNK_0xec7a() // UNK_0xec7a
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xec80: WORD 'UNK_0xec82' codep=0x224c parp=0xec82
// ================================================

void UNK_0xec82() // UNK_0xec82
{
  DUP(); // DUP
  Push(Pop()>>1); // 2/
  Push(0); // 0
  SWAP(); // SWAP
  RRND(); // RRND
  _dash_(); // -
}


// ================================================
// 0xec90: WORD 'UNK_0xec92' codep=0x224c parp=0xec92
// ================================================

void UNK_0xec92() // UNK_0xec92
{
  UNK_0xec7a(); // UNK_0xec7a
  UNK_0xec6c(); // UNK_0xec6c
  UNK_0xec36(); // UNK_0xec36
  C_at_(); // C@
  _gt_(); // >
  if (Pop() == 0) goto label1;
  UNK_0xebc6(); // UNK_0xebc6
  C_at_(); // C@
  Push(0x0032);
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  UNK_0xec82(); // UNK_0xec82
  UNK_0xec46(); // UNK_0xec46
  C_ex_(); // C!
  DUP(); // DUP
  UNK_0xec82(); // UNK_0xec82
  UNK_0xec4e(); // UNK_0xec4e
  C_ex_(); // C!
  UNK_0xec82(); // UNK_0xec82
  UNK_0xec56(); // UNK_0xec56
  C_ex_(); // C!
  UNK_0xec6c(); // UNK_0xec6c
  UNK_0xec36(); // UNK_0xec36
  C_ex_(); // C!

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xecca: WORD 'UNK_0xeccc' codep=0x224c parp=0xeccc
// ================================================

void UNK_0xeccc() // UNK_0xeccc
{
  UNK_0xec7a(); // UNK_0xec7a
  _gt_R(); // >R
  R_at_(); // R@
  UNK_0xebe6(); // UNK_0xebe6
  C_at_(); // C@
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xec46);
  goto label2;

  label1:
  R_at_(); // R@
  UNK_0xebf6(); // UNK_0xebf6
  C_at_(); // C@
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Push(0xec4e);
  goto label2;

  label3:
  Push(0xec56);

  label2:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xed02: WORD '!TAMT' codep=0x224c parp=0xed0c
// ================================================
// entry

void _ex_TAMT() // !TAMT
{
  SWAP(); // SWAP
  Push(0x000a);
  _slash_(); // /
  SWAP(); // SWAP
  UNK_0xeccc(); // UNK_0xeccc
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed1e: WORD '@TAMT' codep=0x224c parp=0xed28
// ================================================
// entry

void _at_TAMT() // @TAMT
{
  UNK_0xeccc(); // UNK_0xeccc
  IFLD_at_(); // IFLD@
  Push(0x000a);
  Push(Pop() * Pop()); // *
  ICLOSE(); // ICLOSE
}

// 0xed36: db 0x94 0x73 0x1c 0x1f 0x01 0x20 0xcd 0x6b 0x94 0x73 0x1c 0x1e 0x01 0x20 0xcd 0x6b 0x94 0x73 0x44 0x14 0x02 0x22 0x07 0x6f 0x94 0x73 0x44 0x16 0x01 0x22 0x07 0x6f ' s     k s     k sD  " o sD  " o'

// ================================================
// 0xed56: WORD 'UNK_0xed58' codep=0x7394 parp=0xed58
// ================================================
// 0xed58: db 0x1a 0x16 0x01 0x17 0xa9 0x6b 0x94 0x73 0x09 0x18 0x02 0x1b 0x54 0x6a '     k s    Tj'

// ================================================
// 0xed66: WORD 'UNK_0xed68' codep=0x7394 parp=0xed68
// ================================================
// 0xed68: db 0x09 0x1a 0x01 0x1b 0x54 0x6a '    Tj'

// ================================================
// 0xed6e: WORD 'UNK_0xed70' codep=0x224c parp=0xed70
// ================================================

void UNK_0xed70() // UNK_0xed70
{
  _gt_C_plus_S(); // >C+S
  PHRASE_do_(); // PHRASE$
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}

// 0xed80: db 0x4c 0x22 0x8c 0xa9 0xae 0x0b 0x90 0x16 0x4c 0x22 0x68 0xa9 0xae 0x0b 0x90 0x16 0x4c 0x22 0x5e 0xed 0xae 0x0b 0x90 0x16 0x4c 0x22 0x46 0xed 0xae 0x0b 0x90 0x16 'L"      L"h     L"^     L"F     '

// ================================================
// 0xeda0: WORD '(GET.BAS' codep=0x4b3b parp=0xedad
// ================================================
// 0xedad: db 0x04 0x00 0x6e 0x3a 0x1c 0x00 0x82 0xed 0x1a 0x00 0x8a 0xed 0x09 0x00 0x92 0xed 0x44 0x00 0x9a 0xed '  n:            D   '

// ================================================
// 0xedc1: WORD '(GETUSE)' codep=0x4b3b parp=0xedce
// ================================================
// 0xedce: db 0x04 0x00 0x6e 0x3a 0x44 0x00 0x50 0xed 0x1c 0x00 0x38 0xed 0x1a 0x00 0x58 0xed 0x09 0x00 0x68 0xed '  n:D P   8   X   h '

// ================================================
// 0xede2: WORD 'UNK_0xede4' codep=0x224c parp=0xede4
// ================================================

void UNK_0xede4() // UNK_0xede4
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  INST_dash_VA(); // INST-VA
  _099(); // 099
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedf0: WORD 'UNK_0xedf2' codep=0x224c parp=0xedf2
// ================================================

void UNK_0xedf2() // UNK_0xedf2
{
  Push(cc_UNK_0xeb8a); // UNK_0xeb8a
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  UNK_0xede4(); // UNK_0xede4
  _2SWAP(); // 2SWAP
  _2OVER(); // 2OVER
  _2SWAP(); // 2SWAP
  IINSERT(); // IINSERT
}


// ================================================
// 0xee04: WORD 'UNK_0xee06' codep=0x224c parp=0xee06
// ================================================

void UNK_0xee06() // UNK_0xee06
{
  _gt_C_plus_S(); // >C+S
  Push(0x0010);
  Push(0xed68);
  IFLD_ex_(); // IFLD!
  Push(0); // 0
  UNK_0xed68(); // UNK_0xed68
  C_ex_(); // C!
}


// ================================================
// 0xee1a: WORD 'UNK_0xee1c' codep=0x1d29 parp=0xee1c
// ================================================
// 0xee1c: db 0x00 0x03 0x05 0x08 0x0b '     '

// ================================================
// 0xee21: WORD 'UNK_0xee23' codep=0x1d29 parp=0xee23
// ================================================
// 0xee23: db 0x00 0x0f 0x12 0x15 0x18 '     '

// ================================================
// 0xee28: WORD 'UNK_0xee2a' codep=0x1d29 parp=0xee2a
// ================================================
// 0xee2a: db 0x00 0x23 0x28 0x2d 0x32 ' #(-2'

// ================================================
// 0xee2f: WORD 'UNK_0xee31' codep=0x224c parp=0xee31
// ================================================

void UNK_0xee31() // UNK_0xee31
{
  DUP(); // DUP
  Push(pp_GLOBALS); // GLOBALS
  _ex_(); // !
  Push(pp_SEED); // SEED
  _ex_(); // !
}


// ================================================
// 0xee3d: WORD 'UNK_0xee3f' codep=0x224c parp=0xee3f
// ================================================

void UNK_0xee3f() // UNK_0xee3f
{
  UNK_0xec7a(); // UNK_0xec7a
  _at_INST_dash_S(); // @INST-S
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xee4f: WORD 'UNK_0xee51' codep=0x224c parp=0xee51
// ================================================

void UNK_0xee51() // UNK_0xee51
{
  UNK_0xee3f(); // UNK_0xee3f
}


// ================================================
// 0xee55: WORD 'UNK_0xee57' codep=0x224c parp=0xee57
// ================================================

void UNK_0xee57() // UNK_0xee57
{
  UNK_0xec7a(); // UNK_0xec7a
  UNK_0xebbe(); // UNK_0xebbe
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xee23); // UNK_0xee23
  Push(Pop() + Pop()); // +
  C_at_(); // C@
}


// ================================================
// 0xee67: WORD 'UNK_0xee69' codep=0x224c parp=0xee69
// ================================================

void UNK_0xee69() // UNK_0xee69
{
  UNK_0xec7a(); // UNK_0xec7a
  UNK_0xebc6(); // UNK_0xebc6
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xee1c); // UNK_0xee1c
  Push(Pop() + Pop()); // +
  C_at_(); // C@
}


// ================================================
// 0xee79: WORD 'UNK_0xee7b' codep=0x224c parp=0xee7b
// ================================================

void UNK_0xee7b() // UNK_0xee7b
{
  UNK_0xee69(); // UNK_0xee69
  Push(0); // 0
  UNK_0xee57(); // UNK_0xee57
  RRND(); // RRND
  _gt_(); // >
}


// ================================================
// 0xee87: WORD 'UNK_0xee89' codep=0x224c parp=0xee89
// ================================================

void UNK_0xee89() // UNK_0xee89
{
  _star_4SALE(); // *4SALE
  _gt_C_plus_S(); // >C+S
  Push(1); // 1
  INST_dash_QT(); // INST-QT
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee97: WORD 'UNK_0xee99' codep=0x224c parp=0xee99
// ================================================

void UNK_0xee99() // UNK_0xee99
{
  UNK_0xee51(); // UNK_0xee51
  UNK_0xee31(); // UNK_0xee31
  _star_4SALE(); // *4SALE
  UNK_0xee57(); // UNK_0xee57
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xee7b(); // UNK_0xee7b
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  Push(i); // I
  UNK_0xedf2(); // UNK_0xedf2
  UNK_0xee06(); // UNK_0xee06
  UNK_0xee89(); // UNK_0xee89
  ICLOSE(); // ICLOSE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffec

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xeebf: WORD 'UNK_0xeec1' codep=0x224c parp=0xeec1
// ================================================

void UNK_0xeec1() // UNK_0xeec1
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  Push(cc_UNK_0xeb8e); // UNK_0xeb8e
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  UNK_0xede4(); // UNK_0xede4
  _star_4SALE(); // *4SALE
  IINSERT(); // IINSERT
  UNK_0xee89(); // UNK_0xee89
}


// ================================================
// 0xeed7: WORD 'UNK_0xeed9' codep=0x224c parp=0xeed9
// ================================================

void UNK_0xeed9() // UNK_0xeed9
{
  UNK_0xec7a(); // UNK_0xec7a
  UNK_0xebe6(); // UNK_0xebe6
  C_at_(); // C@
  UNK_0xeec1(); // UNK_0xeec1
  UNK_0xebf6(); // UNK_0xebf6
  C_at_(); // C@
  UNK_0xeec1(); // UNK_0xeec1
  UNK_0xebfe(); // UNK_0xebfe
  C_at_(); // C@
  UNK_0xeec1(); // UNK_0xeec1
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeef1: WORD 'UNK_0xeef3' codep=0x224c parp=0xeef3
// ================================================

void UNK_0xeef3() // UNK_0xeef3
{
  _star_2BUY(); // *2BUY
  _gt_C_plus_S(); // >C+S
  Push(1); // 1
  INST_dash_QT(); // INST-QT
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef01: WORD 'UNK_0xef03' codep=0x224c parp=0xef03
// ================================================

void UNK_0xef03() // UNK_0xef03
{
  UNK_0xec7a(); // UNK_0xec7a
  UNK_0xebc6(); // UNK_0xebc6
  C_at_(); // C@
  Push(pp_UNK_0xee2a); // UNK_0xee2a
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  Push(0x0018);
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xee3f(); // UNK_0xee3f
  Push(i); // I
  Push(Pop() + Pop()); // +
  UNK_0xee31(); // UNK_0xee31
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  OVER(); // OVER
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xeb8a); // UNK_0xeb8a
  Push(i); // I
  ICREATE(); // ICREATE
  UNK_0xede4(); // UNK_0xede4
  _2DUP(); // 2DUP
  _star_2BUY(); // *2BUY
  IINSERT(); // IINSERT
  UNK_0xeef3(); // UNK_0xeef3
  UNK_0xee06(); // UNK_0xee06
  ICLOSE(); // ICLOSE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd2

  Pop(); // DROP
}


// ================================================
// 0xef4d: WORD 'UNK_0xef4f' codep=0x224c parp=0xef4f
// ================================================

void UNK_0xef4f() // UNK_0xef4f
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  Push(cc_UNK_0xeb8e); // UNK_0xeb8e
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  UNK_0xede4(); // UNK_0xede4
  _star_2BUY(); // *2BUY
  IINSERT(); // IINSERT
  UNK_0xeef3(); // UNK_0xeef3
}


// ================================================
// 0xef65: WORD 'UNK_0xef67' codep=0x224c parp=0xef67
// ================================================

void UNK_0xef67() // UNK_0xef67
{
  UNK_0xec7a(); // UNK_0xec7a
  UNK_0xec06(); // UNK_0xec06
  C_at_(); // C@
  UNK_0xef4f(); // UNK_0xef4f
  UNK_0xec0e(); // UNK_0xec0e
  C_at_(); // C@
  UNK_0xef4f(); // UNK_0xef4f
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef79: WORD 'UNK_0xef7b' codep=0x224c parp=0xef7b
// ================================================

void UNK_0xef7b() // UNK_0xef7b
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  Push(cc_UNK_0xeb96); // UNK_0xeb96
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  UNK_0xede4(); // UNK_0xede4
  _star_2BUY(); // *2BUY
  IINSERT(); // IINSERT
  UNK_0xeef3(); // UNK_0xeef3
}


// ================================================
// 0xef91: WORD 'UNK_0xef93' codep=0x224c parp=0xef93
// ================================================

void UNK_0xef93() // UNK_0xef93
{
  UNK_0xec7a(); // UNK_0xec7a
  UNK_0xec1e(); // UNK_0xec1e
  C_at_(); // C@
  UNK_0xef7b(); // UNK_0xef7b
  UNK_0xec26(); // UNK_0xec26
  C_at_(); // C@
  UNK_0xef7b(); // UNK_0xef7b
  UNK_0xec2e(); // UNK_0xec2e
  C_at_(); // C@
  UNK_0xef7b(); // UNK_0xef7b
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefab: WORD 'UNK_0xefad' codep=0x224c parp=0xefad
// ================================================

void UNK_0xefad() // UNK_0xefad
{
  UNK_0xec7a(); // UNK_0xec7a
  UNK_0xebc6(); // UNK_0xebc6
  C_at_(); // C@
  Push(pp_UNK_0xee2a); // UNK_0xee2a
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(Pop()>>1); // 2/
  Push(0x0017);
  Push(cc__6); // 6
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xee51(); // UNK_0xee51
  Push(i); // I
  Push(Pop() + Pop()); // +
  UNK_0xee31(); // UNK_0xee31
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  OVER(); // OVER
  _st_(); // <
  Push(i); // I
  Push(0x0017);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  Push(cc_UNK_0xeb92); // UNK_0xeb92
  Push(i); // I
  ICREATE(); // ICREATE
  UNK_0xede4(); // UNK_0xede4
  _star_2BUY(); // *2BUY
  IINSERT(); // IINSERT
  UNK_0xeef3(); // UNK_0xeef3

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffce

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf007: WORD 'UNK_0xf009' codep=0x224c parp=0xf009
// ================================================

void UNK_0xf009() // UNK_0xf009
{
  _star_2BUY(); // *2BUY
  _gt_C_plus_S(); // >C+S
  INST_dash_QT(); // INST-QT
  _099(); // 099
  UNK_0xef03(); // UNK_0xef03
  UNK_0xef67(); // UNK_0xef67
  UNK_0xefad(); // UNK_0xefad
  UNK_0xef93(); // UNK_0xef93
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf01d: WORD 'UNK_0xf01f' codep=0x224c parp=0xf01f
// ================================================

void UNK_0xf01f() // UNK_0xf01f
{
  _star_4SALE(); // *4SALE
  _gt_C_plus_S(); // >C+S
  INST_dash_QT(); // INST-QT
  _099(); // 099
  UNK_0xee99(); // UNK_0xee99
  UNK_0xeed9(); // UNK_0xeed9
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf02f: WORD 'UNK_0xf031' codep=0x224c parp=0xf031
// ================================================

void UNK_0xf031() // UNK_0xf031
{
  UNK_0xf01f(); // UNK_0xf01f
  UNK_0xf009(); // UNK_0xf009
}


// ================================================
// 0xf037: WORD 'UNK_0xf039' codep=0x224c parp=0xf039
// ================================================

void UNK_0xf039() // UNK_0xf039
{
  UNK_0xee89(); // UNK_0xee89
  Push(0x001a);
  Push(cc__6); // 6
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x000a);
  INST_dash_QT(); // INST-QT
  _ex_(); // !
  Push(0x0003);
  UNK_0xed58(); // UNK_0xed58
  C_ex_(); // C!
  ELEM_dash_VA(); // ELEM-VA
  Push(Read16(Pop())); // @
  ASKING(); // ASKING
  _ex_(); // !
  CI(); // CI
  ICLOSE(); // ICLOSE
  _star_4SALE(); // *4SALE
  IINSERT(); // IINSERT
}

// 0xf067: db 0x29 0x1d 0x00 0x32 0x46 0x5a 0x29 0x1d 0x00 0x6f 0x83 0x97 0x4c 0x22 0x34 0x75 0x4f 0xee 0x72 0x0f 0x2f 0xee 0x22 0x75 0xab 0xed 0x78 0xec 0x5d 0x17 0xce 0xeb 0x0d 0x7d 0xdf 0x79 0x41 0x0e 0x67 0xf0 0x72 0x0f 0x92 0x0c 0xf2 0x0e 0x6d 0xf0 0x72 0x0f 0x92 0x0c 0xc4 0x4b 0x5d 0x17 0x64 0x00 0xc4 0x0f 0x58 0x10 0x5d 0x17 0xbc 0x7f 0xad 0x11 0x19 0xa9 0x16 0x6d 0x90 0x16 0x4c 0x22 0x19 0xa9 0xae 0x0b 0x89 0x12 0x90 0x16 0x4c 0x22 0x19 0xa9 0xae 0x0b 0x22 0x75 0x34 0x75 0x9b 0x53 0x1f 0x7a 0x3f 0x7a 0x4c 0x7e 0xfa 0x15 0x0a 0x00 0x19 0xa9 0x16 0x6d 0x60 0x16 0x04 0x00 0x32 0x0e 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x22 0x75 0x8c 0xeb 0x5f 0x12 0xfa 0x15 0x0e 0x00 0x3e 0xed 0x92 0x0c 0x3d 0x0f 0x5f 0x12 0x60 0x16 0x04 0x00 0xcf 0x51 0x90 0x16 0x4c 0x22 0x3d 0xee 0x34 0x75 0x72 0x0f 0x2f 0xee 0x8c 0xeb 0xab 0xed 0x90 0x16 0x4c 0x22 0xfd 0xf0 0x5d 0x17 0x32 0x00 0x5d 0x17 0x79 0x00 0xc4 0x4b 0x5d 0x17 0x64 0x00 0xc4 0x0f 0x19 0xa9 0x16 0x6d 0x90 0x16 0x4c 0x22 0xfd 0xf0 0x5d 0x17 0x78 0x00 0x5d 0x17 0xc9 0x00 0xc4 0x4b 0x5d 0x17 0x64 0x00 0xc4 0x0f 0x19 0xa9 0x16 0x6d 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x1c 0x00 0x5f 0x12 0xfa 0x15 0x0a 0x00 0x9e 0xa9 0xae 0x0b 0x60 0x16 0x06 0x00 0x5d 0x17 0x0a 0x00 0xad 0x74 0x16 0x6d 0x90 0x16 0x4c 0x22 0xe1 0xf0 0xfa 0x15 0x08 0x00 0x0d 0xf1 0x60 0x16 0x06 0x00 0x73 0xf0 0xbb 0xf0 0x90 0x16 0x4c 0x22 0xe1 0xf0 0xfa 0x15 0x08 0x00 0x27 0xf1 0x60 0x16 0x0a 0x00 0xb1 0xf0 0xfa 0x15 0x04 0x00 0x73 0xf0 0x90 0x16 ')  2FZ)  o  L"4uO r / "u  x ]    } yA g r     m r    K] d   X ]       m  L"        L"    "u4u S z?zL~       m`   2 =  z  L""u  _     >   = _ `    Q  L"= 4ur /       L"  ] 2 ] y  K] d      m  L"  ] x ]    K] d      m  L""u]   _         `   ]    t m  L"        `   s     L"      ' `         s   '

// ================================================
// 0xf18d: WORD 'UNK_0xf18f' codep=0x224c parp=0xf18f
// ================================================

void UNK_0xf18f() // UNK_0xf18f
{
  _star_4SALE(); // *4SALE
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf163);
  ALL(); // ALL
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1a1: WORD 'UNK_0xf1a3' codep=0x224c parp=0xf1a3
// ================================================

void UNK_0xf1a3() // UNK_0xf1a3
{
  _star_2BUY(); // *2BUY
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf177);
  ALL(); // ALL
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}

// 0xf1b5: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x1b 0x00 0x5f 0x12 0x07 0x13 0x90 0x16 0x29 0x1d 0x00 0x0a 0x0b 0x0d 0x29 0x1d 0x00 0x0a 0x0f 0x15 0x4c 0x22 0xb5 0xf1 0xfa 0x15 0x42 0x00 0x19 0xa9 0xae 0x0b 0x7f 0x0e 0x41 0x0e 0xc3 0xf1 0x72 0x0f 0x92 0x0c 0xf2 0x0e 0xc9 0xf1 0x72 0x0f 0x92 0x0c 0xc4 0x4b 0x5d 0x17 0x0a 0x00 0xb5 0x75 0x9b 0x53 0x07 0x40 0xfa 0x15 0x04 0x00 0xf2 0x0e 0xc4 0x0f 0x58 0x10 0x5d 0x17 0xf8 0x7f 0xad 0x11 0xcc 0xa9 0x16 0x6d 0x20 0x0f 0x22 0x75 0xcc 0xed 0x0a 0x6d 0x41 0xf1 0x90 0x16 0x4c 0x22 0x07 0x76 0x07 0x13 0xfa 0x15 0x0e 0x00 0x7a 0x7a 0x07 0x13 0xfa 0x15 0x04 0x00 0xc9 0x7a 0x1e 0x7f 0x90 0x16 'L""u]   _     )     )     L"    B      A   r       r    K]    u S @        X ]       m  "u   mA   L" v      zz       z   '

// ================================================
// 0xf231: WORD 'UNK_0xf233' codep=0x224c parp=0xf233
// ================================================

void UNK_0xf233() // UNK_0xf233
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf21b);
  ALL(); // ALL
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE

  label1:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf24d: WORD 'UNK_0xf24f' codep=0x224c parp=0xf24f
// ================================================

void UNK_0xf24f() // UNK_0xf24f
{
  _star_2BUY(); // *2BUY
  UNK_0xf233(); // UNK_0xf233
  _star_4SALE(); // *4SALE
  UNK_0xf233(); // UNK_0xf233
  BUY_dash_LIS(); // BUY-LIS
  UNK_0xf233(); // UNK_0xf233
}


// ================================================
// 0xf25d: WORD 'UNK_0xf25f' codep=0x224c parp=0xf25f
// ================================================

void UNK_0xf25f() // UNK_0xf25f
{
  UNK_0xec7a(); // UNK_0xec7a
  UNK_0xebd6(); // UNK_0xebd6
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  _star_4SALE(); // *4SALE
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf1d1);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  _star_2BUY(); // *2BUY
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf1d1);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  Pop(); // DROP
}


// ================================================
// 0xf28b: WORD 'UNK_0xf28d' codep=0x224c parp=0xf28d
// ================================================

void UNK_0xf28d() // UNK_0xf28d
{
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(0x5b65); Pust(0x0002);
  UNK_0xed70(); // UNK_0xed70
  _dot_TTY(); // .TTY
  Push(2); // 2
  SONG(); // SONG
}


// ================================================
// 0xf2a1: WORD 'UNK_0xf2a3' codep=0x224c parp=0xf2a3
// ================================================

void UNK_0xf2a3() // UNK_0xf2a3
{
  Push(0); // 0
  Push(cc_MUSSEG); // MUSSEG
  Push(2); // 2
  LC_ex_(); // LC!
  BEEPOFF(); // BEEPOFF
  Push(0x5b8f); Pust(0x0002);
  UNK_0xed70(); // UNK_0xed70
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf2b9: WORD 'UNK_0xf2bb' codep=0x224c parp=0xf2bb
// ================================================

void UNK_0xf2bb() // UNK_0xf2bb
{
  _at_INST_dash_S(); // @INST-S
  Push(0x0019);
  Push(0x001c);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(cc__4); // 4
  return;

  label1:
  Push(2); // 2
}

// 0xf2d5: db 0x4c 0x22 0xb5 0xf1 0xfa 0x15 0x2e 0x00 0x22 0x75 0x34 0x75 0x9b 0x53 0x1f 0x7a 0x3f 0x7a 0x4c 0x7e 0xfa 0x15 0x0e 0x00 0x19 0xa9 0xae 0x0b 0xcc 0xa9 0xae 0x0b 0x60 0x16 0x06 0x00 0x20 0x0f 0x41 0x0e 0x3d 0x0f 0x0a 0x7a 0xcc 0xa9 0x16 0x6d 0x19 0xa9 0x16 0x6d 0x90 0x16 'L"    . "u4u S z?zL~            `     A =  z   m   m  '

// ================================================
// 0xf30b: WORD 'UNK_0xf30d' codep=0x224c parp=0xf30d
// ================================================

void UNK_0xf30d() // UNK_0xf30d
{
  IEXTRAC(); // IEXTRAC
  BUY_dash_LIS(); // BUY-LIS
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf319: WORD 'UNK_0xf31b' codep=0x224c parp=0xf31b
// ================================================

void UNK_0xf31b() // UNK_0xf31b
{
  _star_4SALE(); // *4SALE
  _gt_C_plus_S(); // >C+S

  label2:
  IOPEN(); // IOPEN
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  UNK_0xf30d(); // UNK_0xf30d
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf339: WORD 'UNK_0xf33b' codep=0x224c parp=0xf33b
// ================================================

void UNK_0xf33b() // UNK_0xf33b
{
  DUP(); // DUP
  Push(cc__7); // 7
  Push(0x000a);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(cc__7); // 7
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(0x001e);
  MOD(); // MOD
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf361: WORD 'UNK_0xf363' codep=0x1d29 parp=0xf363
// ================================================
// 0xf363: db 0x00 0x01 0x02 0x08 0x08 0x08 0x0a 0x03 0x04 0x05 0x07 0x07 0x07 0x07 0x07 0x07 0x07 0x06 0x06 0x06 0x00 0x17 0x17 0x17 0x17 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06 '                                         '

// ================================================
// 0xf38c: WORD 'TRADE>OR' codep=0x224c parp=0xf399
// ================================================
// entry

void TRADE_gt_OR() // TRADE>OR
{
  Push(pp_UNK_0xf363); // UNK_0xf363
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  DUP(); // DUP
  Push(cc__8); // 8
  _eq_(); // =
  if (Pop() == 0) return;
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf3b7: WORD 'APOST>PO' codep=0x4b3b parp=0xf3c4
// ================================================
// 0xf3c4: db 0x04 0x00 0x3f 0x0f 0x10 0x00 0x89 0x3b 0x02 0x00 0x30 0x0f 0x01 0x00 0x30 0x0f 0x08 0x00 0x89 0x3b 0x4c 0x22 0x3f 0x7a 0x5d 0x17 0xd7 0xf2 0x8c 0x7f 0xdf 0x79 0x90 0x16 '  ?    ;  0   0    ;L"?z]     y  '

// ================================================
// 0xf3e6: WORD 'UNK_0xf3e8' codep=0x224c parp=0xf3e8
// ================================================

void UNK_0xf3e8() // UNK_0xf3e8
{
  Push(0xb6ec);
  MODULE(); // MODULE
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xeb9a(); // UNK_0xeb9a
  Push(Read16(Pop())); // @
  UNK_0xeb9f(); // UNK_0xeb9f
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  INST_dash_QT(); // INST-QT
  _ex_(); // !
  SWAP(); // SWAP
  _dash_(); // -
  UNK_0xeba4(); // UNK_0xeba4
  _ex_(); // !
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf41c: WORD 'UNK_0xf41e' codep=0x224c parp=0xf41e
// ================================================

void UNK_0xf41e() // UNK_0xf41e
{
  UNK_0xec7a(); // UNK_0xec7a
  _at_INST_dash_S(); // @INST-S
  TRADE_gt_OR(); // TRADE>OR
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  ORGIA(); // ORGIA
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(pp__ro_AORIGI); // (AORIGI
  _1_dot_5_ex_(); // 1.5!
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_S(); // @INST-S
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(0x0023);
  goto label3;

  label2:
  UNK_0xeba9(); // UNK_0xeba9
  C_at_(); // C@

  label3:
  Push(pp_EDL); // EDL
  _st__ex__gt_(); // <!>
  ICLOSE(); // ICLOSE
  Push(0xbfda);
  MODULE(); // MODULE
  Push(pp_A_dash_POSTU); // A-POSTU
  C_at_(); // C@
  APOST_gt_PO(); // APOST>PO
  goto label4;

  label1:
  UNK_0xf2bb(); // UNK_0xf2bb

  label4:
  DUP(); // DUP
  UNK_0xebae(); // UNK_0xebae
  C_ex_(); // C!
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) goto label5;
  Push(0x000a);
  goto label6;

  label5:
  Push(cc__4); // 4

  label6:
  UNK_0xec3e(); // UNK_0xec3e
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf484: WORD 'SET-CARG' codep=0x224c parp=0xf491
// ================================================
// entry

void SET_dash_CARG() // SET-CARG
{
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf3da);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf3da);
  ALL(); // ALL
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  UNK_0xf3e8(); // UNK_0xf3e8
}


// ================================================
// 0xf4b5: WORD 'UNK_0xf4b7' codep=0x224c parp=0xf4b7
// ================================================

void UNK_0xf4b7() // UNK_0xf4b7
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xebb6(); // UNK_0xebb6
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  _gt_R(); // >R
  R_at_(); // R@
  _gt_FLAG(); // >FLAG
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  R_gt_(); // R>
  SWAP(); // SWAP
  _gt_R(); // >R
  UNK_0xf33b(); // UNK_0xf33b
  UNK_0xec7a(); // UNK_0xec7a
  R_at_(); // R@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0); // 0

  label1:
  _ex_INST_dash_S(); // !INST-S
  R_at_(); // R@
  if (Pop() == 0) goto label2;
  UNK_0xf41e(); // UNK_0xf41e

  label2:
  R_gt_(); // R>
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4f5: WORD 'BLD-LIST' codep=0x224c parp=0xf502
// ================================================
// entry

void BLD_dash_LIST() // BLD-LIST
{
  UNK_0xf24f(); // UNK_0xf24f
  UNK_0xf4b7(); // UNK_0xf4b7
  if (Pop() == 0) return;
  UNK_0xf28d(); // UNK_0xf28d
  UNK_0xec7a(); // UNK_0xec7a
  UNK_0xebd6(); // UNK_0xebd6
  C_at_(); // C@
  _gt_FLAG(); // >FLAG
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  UNK_0xf031(); // UNK_0xf031
  UNK_0xf18f(); // UNK_0xf18f
  UNK_0xf1a3(); // UNK_0xf1a3
  UNK_0xf25f(); // UNK_0xf25f
  UNK_0xf039(); // UNK_0xf039
  SET_dash_CARG(); // SET-CARG
  UNK_0xf31b(); // UNK_0xf31b
  UNK_0xec92(); // UNK_0xec92
  UNK_0xf2a3(); // UNK_0xf2a3
  return;

  label1:
  Push(0x0bb8);
  MS(); // MS
  UNK_0xf2a3(); // UNK_0xf2a3
}

// 0xf53a: db 0x42 0x4c 0x44 0x4c 0x49 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x90 0x16 0x43 0x4f 0x4d 0x4d 0x00 'BLDLI___________________________  COMM '
  