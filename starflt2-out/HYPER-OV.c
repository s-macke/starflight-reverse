// ====== OVERLAY 'HYPER-OV' ======
// store offset = 0xd980
// overlay size   = 0x1be0

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0x9a8b C-string:'UNK_0x3f09'
// 1870:      UNK_0xd996  codep:0x224c parp:0xd996 size:0x0008 C-string:'UNK_0xd996'
// 1871:      UNK_0xd9a0  codep:0x224c parp:0xd9a0 size:0x0006 C-string:'UNK_0xd9a0'
// 1872:      UNK_0xd9a8  codep:0x224c parp:0xd9a8 size:0x000e C-string:'UNK_0xd9a8'
// 1873:      UNK_0xd9b8  codep:0x224c parp:0xd9b8 size:0x000e C-string:'UNK_0xd9b8'
// 1874:      UNK_0xd9c8  codep:0x224c parp:0xd9c8 size:0x0006 C-string:'UNK_0xd9c8'
// 1875:      UNK_0xd9d0  codep:0x2214 parp:0xd9d0 size:0x0012 C-string:'UNK_0xd9d0'
// 1876:      UNK_0xd9e4  codep:0x2214 parp:0xd9e4 size:0x0002 C-string:'UNK_0xd9e4'
// 1877:      UNK_0xd9e8  codep:0x2214 parp:0xd9e8 size:0x0002 C-string:'UNK_0xd9e8'
// 1878:      UNK_0xd9ec  codep:0x2214 parp:0xd9ec size:0x0002 C-string:'UNK_0xd9ec'
// 1879:      UNK_0xd9f0  codep:0x2214 parp:0xd9f0 size:0x0002 C-string:'UNK_0xd9f0'
// 1880:      UNK_0xd9f4  codep:0x2214 parp:0xd9f4 size:0x0002 C-string:'UNK_0xd9f4'
// 1881:      UNK_0xd9f8  codep:0x2214 parp:0xd9f8 size:0x0002 C-string:'UNK_0xd9f8'
// 1882:      UNK_0xd9fc  codep:0x1d29 parp:0xd9fc size:0x0002 C-string:'UNK_0xd9fc'
// 1883:      UNK_0xda00  codep:0x1d29 parp:0xda00 size:0x0002 C-string:'UNK_0xda00'
// 1884:      UNK_0xda04  codep:0x1d29 parp:0xda04 size:0x0002 C-string:'UNK_0xda04'
// 1885:      UNK_0xda08  codep:0x1d29 parp:0xda08 size:0x0002 C-string:'UNK_0xda08'
// 1886:      UNK_0xda0c  codep:0x1d29 parp:0xda0c size:0x0002 C-string:'UNK_0xda0c'
// 1887:      UNK_0xda10  codep:0x1d29 parp:0xda10 size:0x0002 C-string:'UNK_0xda10'
// 1888:      UNK_0xda14  codep:0x1d29 parp:0xda14 size:0x0004 C-string:'UNK_0xda14'
// 1889:      UNK_0xda1a  codep:0x1d29 parp:0xda1a size:0x0002 C-string:'UNK_0xda1a'
// 1890:      UNK_0xda1e  codep:0x1d29 parp:0xda1e size:0x0002 C-string:'UNK_0xda1e'
// 1891:      UNK_0xda22  codep:0x1d29 parp:0xda22 size:0x0002 C-string:'UNK_0xda22'
// 1892:      UNK_0xda26  codep:0x1d29 parp:0xda26 size:0x0002 C-string:'UNK_0xda26'
// 1893:      UNK_0xda2a  codep:0x1d29 parp:0xda2a size:0x0002 C-string:'UNK_0xda2a'
// 1894:      UNK_0xda2e  codep:0x1d29 parp:0xda2e size:0x0002 C-string:'UNK_0xda2e'
// 1895:      UNK_0xda32  codep:0x7420 parp:0xda32 size:0x0003 C-string:'UNK_0xda32'
// 1896:      UNK_0xda37  codep:0x7420 parp:0xda37 size:0x0003 C-string:'UNK_0xda37'
// 1897:      UNK_0xda3c  codep:0x7420 parp:0xda3c size:0x0017 C-string:'UNK_0xda3c'
// 1898:      UNK_0xda55  codep:0x7420 parp:0xda55 size:0x0003 C-string:'UNK_0xda55'
// 1899:      UNK_0xda5a  codep:0x7420 parp:0xda5a size:0x000d C-string:'UNK_0xda5a'
// 1900:      UNK_0xda69  codep:0x7420 parp:0xda69 size:0x0003 C-string:'UNK_0xda69'
// 1901:      UNK_0xda6e  codep:0x7420 parp:0xda6e size:0x0003 C-string:'UNK_0xda6e'
// 1902:      UNK_0xda73  codep:0x7394 parp:0xda73 size:0x000b C-string:'UNK_0xda73'
// 1903:      UNK_0xda80  codep:0x7420 parp:0xda80 size:0x0003 C-string:'UNK_0xda80'
// 1904:      UNK_0xda85  codep:0x7420 parp:0xda85 size:0x0003 C-string:'UNK_0xda85'
// 1905:      UNK_0xda8a  codep:0x7420 parp:0xda8a size:0x0008 C-string:'UNK_0xda8a'
// 1906:      UNK_0xda94  codep:0x224c parp:0xda94 size:0x0008 C-string:'UNK_0xda94'
// 1907:      UNK_0xda9e  codep:0x224c parp:0xda9e size:0x0008 C-string:'UNK_0xda9e'
// 1908:      UNK_0xdaa8  codep:0x224c parp:0xdaa8 size:0x000a C-string:'UNK_0xdaa8'
// 1909:      UNK_0xdab4  codep:0x224c parp:0xdab4 size:0x000a C-string:'UNK_0xdab4'
// 1910:      UNK_0xdac0  codep:0x224c parp:0xdac0 size:0x0008 C-string:'UNK_0xdac0'
// 1911:      UNK_0xdaca  codep:0x224c parp:0xdaca size:0x0006 C-string:'UNK_0xdaca'
// 1912:      UNK_0xdad2  codep:0x224c parp:0xdad2 size:0x0008 C-string:'UNK_0xdad2'
// 1913:      UNK_0xdadc  codep:0x224c parp:0xdadc size:0x000a C-string:'UNK_0xdadc'
// 1914:      UNK_0xdae8  codep:0x224c parp:0xdae8 size:0x0008 C-string:'UNK_0xdae8'
// 1915:      UNK_0xdaf2  codep:0x224c parp:0xdaf2 size:0x000c C-string:'UNK_0xdaf2'
// 1916:      UNK_0xdb00  codep:0x224c parp:0xdb00 size:0x001a C-string:'UNK_0xdb00'
// 1917:      UNK_0xdb1c  codep:0x224c parp:0xdb1c size:0x0060 C-string:'UNK_0xdb1c'
// 1918:      UNK_0xdb7e  codep:0x224c parp:0xdb7e size:0x006d C-string:'UNK_0xdb7e'
// 1919:      UNK_0xdbed  codep:0x7420 parp:0xdbed size:0x0003 C-string:'UNK_0xdbed'
// 1920:      UNK_0xdbf2  codep:0x7420 parp:0xdbf2 size:0x00b3 C-string:'UNK_0xdbf2'
// 1921:            PS>C  codep:0x4b3b parp:0xdcae size:0x0018 C-string:'PS_gt_C'
// 1922:      UNK_0xdcc8  codep:0x224c parp:0xdcc8 size:0x02b4 C-string:'UNK_0xdcc8'
// 1923:             >XY  codep:0x4b3b parp:0xdf84 size:0x002a C-string:'_gt_XY'
// 1924:            SC>C  codep:0x4b3b parp:0xdfb7 size:0x001c C-string:'SC_gt_C'
// 1925:      UNK_0xdfd5  codep:0x224c parp:0xdfd5 size:0x0012 C-string:'UNK_0xdfd5'
// 1926:      UNK_0xdfe9  codep:0x224c parp:0xdfe9 size:0x0060 C-string:'UNK_0xdfe9'
// 1927:         .AUXSYS  codep:0x224c parp:0xe055 size:0x00f2 C-string:'_dot_AUXSYS'
// 1928:      UNK_0xe149  codep:0x224c parp:0xe149 size:0x000c C-string:'UNK_0xe149'
// 1929:      UNK_0xe157  codep:0x224c parp:0xe157 size:0x0022 C-string:'UNK_0xe157'
// 1930:      UNK_0xe17b  codep:0x224c parp:0xe17b size:0x000a C-string:'UNK_0xe17b'
// 1931:           RADII  codep:0x4b3b parp:0xe18f size:0x0014 C-string:'RADII'
// 1932:            IVAR  codep:0x4b3b parp:0xe1ac size:0x0014 C-string:'IVAR'
// 1933:      UNK_0xe1c2  codep:0x224c parp:0xe1c2 size:0x001e C-string:'UNK_0xe1c2'
// 1934:      UNK_0xe1e2  codep:0x224c parp:0xe1e2 size:0x0040 C-string:'UNK_0xe1e2'
// 1935:          XYCASE  codep:0x4b3b parp:0xe22d size:0x000c C-string:'XYCASE'
// 1936:      UNK_0xe23b  codep:0x224c parp:0xe23b size:0x0070 C-string:'UNK_0xe23b'
// 1937:      UNK_0xe2ad  codep:0x2214 parp:0xe2ad size:0x0002 C-string:'UNK_0xe2ad'
// 1938:      UNK_0xe2b1  codep:0x2214 parp:0xe2b1 size:0x0002 C-string:'UNK_0xe2b1'
// 1939:      UNK_0xe2b5  codep:0x2214 parp:0xe2b5 size:0x0002 C-string:'UNK_0xe2b5'
// 1940:      UNK_0xe2b9  codep:0x2214 parp:0xe2b9 size:0x0002 C-string:'UNK_0xe2b9'
// 1941:      UNK_0xe2bd  codep:0x1d29 parp:0xe2bd size:0x0018 C-string:'UNK_0xe2bd'
// 1942:      UNK_0xe2d7  codep:0x224c parp:0xe2d7 size:0x002a C-string:'UNK_0xe2d7'
// 1943:      UNK_0xe303  codep:0x224c parp:0xe303 size:0x0022 C-string:'UNK_0xe303'
// 1944:      UNK_0xe327  codep:0x224c parp:0xe327 size:0x0052 C-string:'UNK_0xe327'
// 1945:      UNK_0xe37b  codep:0x224c parp:0xe37b size:0x0024 C-string:'UNK_0xe37b'
// 1946:            .MVS  codep:0x224c parp:0xe3a8 size:0x00bc C-string:'_dot_MVS'
// 1947:      UNK_0xe466  codep:0x224c parp:0xe466 size:0x003e C-string:'UNK_0xe466'
// 1948:      UNK_0xe4a6  codep:0x224c parp:0xe4a6 size:0x006e C-string:'UNK_0xe4a6'
// 1949:      UNK_0xe516  codep:0x224c parp:0xe516 size:0x000e C-string:'UNK_0xe516'
// 1950:      UNK_0xe526  codep:0x224c parp:0xe526 size:0x001c C-string:'UNK_0xe526'
// 1951:      UNK_0xe544  codep:0x224c parp:0xe544 size:0x000e C-string:'UNK_0xe544'
// 1952:      UNK_0xe554  codep:0x224c parp:0xe554 size:0x004e C-string:'UNK_0xe554'
// 1953:      UNK_0xe5a4  codep:0x224c parp:0xe5a4 size:0x006e C-string:'UNK_0xe5a4'
// 1954:      UNK_0xe614  codep:0x1d29 parp:0xe614 size:0x0010 C-string:'UNK_0xe614'
// 1955:      UNK_0xe626  codep:0x224c parp:0xe626 size:0x0012 C-string:'UNK_0xe626'
// 1956:      UNK_0xe63a  codep:0x224c parp:0xe63a size:0x001a C-string:'UNK_0xe63a'
// 1957:      UNK_0xe656  codep:0x224c parp:0xe656 size:0x001c C-string:'UNK_0xe656'
// 1958:      UNK_0xe674  codep:0x224c parp:0xe674 size:0x0024 C-string:'UNK_0xe674'
// 1959:      UNK_0xe69a  codep:0x224c parp:0xe69a size:0x0012 C-string:'UNK_0xe69a'
// 1960:      UNK_0xe6ae  codep:0x224c parp:0xe6ae size:0x002e C-string:'UNK_0xe6ae'
// 1961:      UNK_0xe6de  codep:0x224c parp:0xe6de size:0x0018 C-string:'UNK_0xe6de'
// 1962:      UNK_0xe6f8  codep:0x224c parp:0xe6f8 size:0x00b6 C-string:'UNK_0xe6f8'
// 1963:      UNK_0xe7b0  codep:0x224c parp:0xe7b0 size:0x0012 C-string:'UNK_0xe7b0'
// 1964:           USE-E  codep:0x224c parp:0xe7cc size:0x0054 C-string:'USE_dash_E'
// 1965:      UNK_0xe822  codep:0x224c parp:0xe822 size:0x001a C-string:'UNK_0xe822'
// 1966:      UNK_0xe83e  codep:0x224c parp:0xe83e size:0x0034 C-string:'UNK_0xe83e'
// 1967:      UNK_0xe874  codep:0x224c parp:0xe874 size:0x0024 C-string:'UNK_0xe874'
// 1968:          CSPEED  codep:0x4b3b parp:0xe8a3 size:0x000c C-string:'CSPEED'
// 1969:            #ACC  codep:0x1d29 parp:0xe8b8 size:0x0002 C-string:'_n_ACC'
// 1970:          KEYINC  codep:0x1d29 parp:0xe8c5 size:0x0002 C-string:'KEYINC'
// 1971:      UNK_0xe8c9  codep:0x224c parp:0xe8c9 size:0x0014 C-string:'UNK_0xe8c9'
// 1972:      UNK_0xe8df  codep:0x224c parp:0xe8df size:0x0024 C-string:'UNK_0xe8df'
// 1973:      UNK_0xe905  codep:0x224c parp:0xe905 size:0x003a C-string:'UNK_0xe905'
// 1974:      UNK_0xe941  codep:0x224c parp:0xe941 size:0x0016 C-string:'UNK_0xe941'
// 1975:      UNK_0xe959  codep:0x224c parp:0xe959 size:0x0044 C-string:'UNK_0xe959'
// 1976:             ?~C  codep:0x4b3b parp:0xe9a5 size:0x0010 C-string:'_ask__t_C'
// 1977:      UNK_0xe9b7  codep:0x224c parp:0xe9b7 size:0x0018 C-string:'UNK_0xe9b7'
// 1978:         NEST-SE  codep:0x4b3b parp:0xe9db size:0x0014 C-string:'NEST_dash_SE'
// 1979:      UNK_0xe9f1  codep:0x224c parp:0xe9f1 size:0x002c C-string:'UNK_0xe9f1'
// 1980:            NEST  codep:0x224c parp:0xea26 size:0x006c C-string:'NEST'
// 1981:      UNK_0xea94  codep:0x224c parp:0xea94 size:0x0068 C-string:'UNK_0xea94'
// 1982:      UNK_0xeafe  codep:0x224c parp:0xeafe size:0x0050 C-string:'UNK_0xeafe'
// 1983:          JMPSHP  codep:0x224c parp:0xeb59 size:0x0058 C-string:'JMPSHP'
// 1984:         COLLIDE  codep:0x4b3b parp:0xebbd size:0x001c C-string:'COLLIDE'
// 1985:      UNK_0xebdb  codep:0x224c parp:0xebdb size:0x00a4 C-string:'UNK_0xebdb'
// 1986:      UNK_0xec81  codep:0x224c parp:0xec81 size:0x003e C-string:'UNK_0xec81'
// 1987:      UNK_0xecc1  codep:0x224c parp:0xecc1 size:0x004e C-string:'UNK_0xecc1'
// 1988:      UNK_0xed11  codep:0x224c parp:0xed11 size:0x0061 C-string:'UNK_0xed11'
// 1989:         UNNEST-  codep:0x4b3b parp:0xed7e size:0x0014 C-string:'UNNEST_dash_'
// 1990:      UNK_0xed94  codep:0x224c parp:0xed94 size:0x0022 C-string:'UNK_0xed94'
// 1991:      UNK_0xedb8  codep:0x224c parp:0xedb8 size:0x005a C-string:'UNK_0xedb8'
// 1992:      UNK_0xee14  codep:0x224c parp:0xee14 size:0x0026 C-string:'UNK_0xee14'
// 1993:          UNNEST  codep:0x224c parp:0xee45 size:0x0074 C-string:'UNNEST'
// 1994:      UNK_0xeebb  codep:0x224c parp:0xeebb size:0x0028 C-string:'UNK_0xeebb'
// 1995:         (GET-AU  codep:0x224c parp:0xeeef size:0x0012 C-string:'_ro_GET_dash_AU'
// 1996:      UNK_0xef03  codep:0x224c parp:0xef03 size:0x0030 C-string:'UNK_0xef03'
// 1997:      UNK_0xef35  codep:0x224c parp:0xef35 size:0x0026 C-string:'UNK_0xef35'
// 1998:             FLY  codep:0x224c parp:0xef63 size:0x0024 C-string:'FLY'
// 1999:      UNK_0xef89  codep:0x224c parp:0xef89 size:0x001a C-string:'UNK_0xef89'
// 2000:         SET-DES  codep:0x224c parp:0xefaf size:0x00ae C-string:'SET_dash_DES'
// 2001:         SETUP-M  codep:0x224c parp:0xf069 size:0x008e C-string:'SETUP_dash_M'
// 2002:         CLEANUP  codep:0x224c parp:0xf103 size:0x007a C-string:'CLEANUP'
// 2003:         CHK-MOV  codep:0x224c parp:0xf189 size:0x008e C-string:'CHK_dash_MOV'
// 2004:      UNK_0xf219  codep:0x224c parp:0xf219 size:0x002f C-string:'UNK_0xf219'
// 2005:           +NEST  codep:0x224c parp:0xf252 size:0x000a C-string:'_plus_NEST'
// 2006:         COME-HI  codep:0x224c parp:0xf268 size:0x0000 C-string:'COME_dash_HI'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xd9fc[2] = {0x00, 0x00}; // UNK_0xd9fc
unsigned char UNK_0xda00[2] = {0x4b, 0x00}; // UNK_0xda00
unsigned char UNK_0xda04[2] = {0x7e, 0x65}; // UNK_0xda04
unsigned char UNK_0xda08[2] = {0x3a, 0x20}; // UNK_0xda08
unsigned char UNK_0xda0c[2] = {0x3a, 0x20}; // UNK_0xda0c
unsigned char UNK_0xda10[2] = {0x00, 0x00}; // UNK_0xda10
unsigned char UNK_0xda14[4] = {0x00, 0x00, 0x00, 0x62}; // UNK_0xda14
unsigned char UNK_0xda1a[2] = {0x4a, 0x00}; // UNK_0xda1a
unsigned char UNK_0xda1e[2] = {0x00, 0x00}; // UNK_0xda1e
unsigned char UNK_0xda22[2] = {0x3a, 0x20}; // UNK_0xda22
unsigned char UNK_0xda26[2] = {0x55, 0xe0}; // UNK_0xda26
unsigned char UNK_0xda2a[2] = {0x02, 0x00}; // UNK_0xda2a
unsigned char UNK_0xda2e[2] = {0x00, 0x00}; // UNK_0xda2e
unsigned char UNK_0xe2bd[24] = {0x44, 0x7f, 0xf5, 0x87, 0xa5, 0xc0, 0x3c, 0xd2, 0xa5, 0x57, 0xf2, 0x7d, 0x78, 0xa7, 0xed, 0x0c, 0x90, 0x55, 0x41, 0x41, 0xa3, 0x43, 0x40, 0x22}; // UNK_0xe2bd
unsigned char UNK_0xe614[16] = {0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0xff, 0x01, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x01, 0xff}; // UNK_0xe614
unsigned char _n_ACC[2] = {0x00, 0x00}; // #ACC
unsigned char KEYINC[2] = {0x00, 0x00}; // KEYINC

const unsigned short int cc_UNK_0xd9d0 = 0x0003; // UNK_0xd9d0
const unsigned short int cc_UNK_0xd9e4 = 0x0190; // UNK_0xd9e4
const unsigned short int cc_UNK_0xd9e8 = 0x0040; // UNK_0xd9e8
const unsigned short int cc_UNK_0xd9ec = 0x003e; // UNK_0xd9ec
const unsigned short int cc_UNK_0xd9f0 = 0x0009; // UNK_0xd9f0
const unsigned short int cc_UNK_0xd9f4 = 0x0008; // UNK_0xd9f4
const unsigned short int cc_UNK_0xd9f8 = 0x0001; // UNK_0xd9f8
const unsigned short int cc_UNK_0xe2ad = 0x0048; // UNK_0xe2ad
const unsigned short int cc_UNK_0xe2b1 = 0x0078; // UNK_0xe2b1
const unsigned short int cc_UNK_0xe2b5 = 0x00ff; // UNK_0xe2b5
const unsigned short int cc_UNK_0xe2b9 = 0x00ff; // UNK_0xe2b9


// 0xd992: db 0x96 0x01 '  '

// ================================================
// 0xd994: WORD 'UNK_0xd996' codep=0x224c parp=0xd996
// ================================================

void UNK_0xd996() // UNK_0xd996
{
  Push(0xca0d);
  MODULE(); // MODULE
}


// ================================================
// 0xd99e: WORD 'UNK_0xd9a0' codep=0x224c parp=0xd9a0
// ================================================

void UNK_0xd9a0() // UNK_0xd9a0
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xd9a6: WORD 'UNK_0xd9a8' codep=0x224c parp=0xd9a8
// ================================================

void UNK_0xd9a8() // UNK_0xd9a8
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
}

// 0xd9ae: db 0x4c 0x22 0x9f 0x64 0x2f 0x7a 0x90 0x16 'L" d/z  '

// ================================================
// 0xd9b6: WORD 'UNK_0xd9b8' codep=0x224c parp=0xd9b8
// ================================================

void UNK_0xd9b8() // UNK_0xd9b8
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
}

// 0xd9be: db 0x4c 0x22 0xcf 0x64 0x2f 0x7a 0x90 0x16 'L" d/z  '

// ================================================
// 0xd9c6: WORD 'UNK_0xd9c8' codep=0x224c parp=0xd9c8
// ================================================

void UNK_0xd9c8() // UNK_0xd9c8
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd9ce: WORD 'UNK_0xd9d0' codep=0x2214 parp=0xd9d0
// ================================================
// 0xd9d0: db 0x03 0x00 0x14 0x22 0x00 0x00 0x14 0x22 0x4b 0x00 0x14 0x22 0x00 0x00 0x14 0x22 0x16 0x00 '   "   "K  "   "  '

// ================================================
// 0xd9e2: WORD 'UNK_0xd9e4' codep=0x2214 parp=0xd9e4
// ================================================
// 0xd9e4: db 0x90 0x01 '  '

// ================================================
// 0xd9e6: WORD 'UNK_0xd9e8' codep=0x2214 parp=0xd9e8
// ================================================
// 0xd9e8: db 0x40 0x00 '@ '

// ================================================
// 0xd9ea: WORD 'UNK_0xd9ec' codep=0x2214 parp=0xd9ec
// ================================================
// 0xd9ec: db 0x3e 0x00 '> '

// ================================================
// 0xd9ee: WORD 'UNK_0xd9f0' codep=0x2214 parp=0xd9f0
// ================================================
// 0xd9f0: db 0x09 0x00 '  '

// ================================================
// 0xd9f2: WORD 'UNK_0xd9f4' codep=0x2214 parp=0xd9f4
// ================================================
// 0xd9f4: db 0x08 0x00 '  '

// ================================================
// 0xd9f6: WORD 'UNK_0xd9f8' codep=0x2214 parp=0xd9f8
// ================================================
// 0xd9f8: db 0x01 0x00 '  '

// ================================================
// 0xd9fa: WORD 'UNK_0xd9fc' codep=0x1d29 parp=0xd9fc
// ================================================
// 0xd9fc: db 0x00 0x00 '  '

// ================================================
// 0xd9fe: WORD 'UNK_0xda00' codep=0x1d29 parp=0xda00
// ================================================
// 0xda00: db 0x4b 0x00 'K '

// ================================================
// 0xda02: WORD 'UNK_0xda04' codep=0x1d29 parp=0xda04
// ================================================
// 0xda04: db 0x7e 0x65 '~e'

// ================================================
// 0xda06: WORD 'UNK_0xda08' codep=0x1d29 parp=0xda08
// ================================================
// 0xda08: db 0x3a 0x20 ': '

// ================================================
// 0xda0a: WORD 'UNK_0xda0c' codep=0x1d29 parp=0xda0c
// ================================================
// 0xda0c: db 0x3a 0x20 ': '

// ================================================
// 0xda0e: WORD 'UNK_0xda10' codep=0x1d29 parp=0xda10
// ================================================
// 0xda10: db 0x00 0x00 '  '

// ================================================
// 0xda12: WORD 'UNK_0xda14' codep=0x1d29 parp=0xda14
// ================================================
// 0xda14: db 0x00 0x00 0x00 0x62 '   b'

// ================================================
// 0xda18: WORD 'UNK_0xda1a' codep=0x1d29 parp=0xda1a
// ================================================
// 0xda1a: db 0x4a 0x00 'J '

// ================================================
// 0xda1c: WORD 'UNK_0xda1e' codep=0x1d29 parp=0xda1e
// ================================================
// 0xda1e: db 0x00 0x00 '  '

// ================================================
// 0xda20: WORD 'UNK_0xda22' codep=0x1d29 parp=0xda22
// ================================================
// 0xda22: db 0x3a 0x20 ': '

// ================================================
// 0xda24: WORD 'UNK_0xda26' codep=0x1d29 parp=0xda26
// ================================================
// 0xda26: db 0x55 0xe0 'U '

// ================================================
// 0xda28: WORD 'UNK_0xda2a' codep=0x1d29 parp=0xda2a
// ================================================
// 0xda2a: db 0x02 0x00 '  '

// ================================================
// 0xda2c: WORD 'UNK_0xda2e' codep=0x1d29 parp=0xda2e
// ================================================
// 0xda2e: db 0x00 0x00 '  '

// ================================================
// 0xda30: WORD 'UNK_0xda32' codep=0x7420 parp=0xda32
// ================================================
// 0xda32: db 0x14 0x25 0x02 ' % '

// ================================================
// 0xda35: WORD 'UNK_0xda37' codep=0x7420 parp=0xda37
// ================================================
// 0xda37: db 0x14 0x49 0x01 ' I '

// ================================================
// 0xda3a: WORD 'UNK_0xda3c' codep=0x7420 parp=0xda3c
// ================================================
// 0xda3c: db 0x14 0x13 0x02 0x20 0x74 0x14 0x12 0x01 0x20 0x74 0x14 0x30 0x02 0x20 0x74 0x14 0x1a 0x01 0x20 0x74 0x14 0x32 0x02 '    t    t 0  t    t 2 '

// ================================================
// 0xda53: WORD 'UNK_0xda55' codep=0x7420 parp=0xda55
// ================================================
// 0xda55: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xda58: WORD 'UNK_0xda5a' codep=0x7420 parp=0xda5a
// ================================================
// 0xda5a: db 0x14 0x45 0x04 0x20 0x74 0x2d 0x0b 0x02 0x20 0x74 0x2d 0x11 0x02 ' E  t-   t-  '

// ================================================
// 0xda67: WORD 'UNK_0xda69' codep=0x7420 parp=0xda69
// ================================================
// 0xda69: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xda6c: WORD 'UNK_0xda6e' codep=0x7420 parp=0xda6e
// ================================================
// 0xda6e: db 0x17 0x11 0x01 '   '

// ================================================
// 0xda71: WORD 'UNK_0xda73' codep=0x7394 parp=0xda73
// ================================================
// 0xda73: db 0x20 0x01 0x01 0x17 0x49 0x6c 0x20 0x74 0x34 0x14 0x01 '    Il t4  '

// ================================================
// 0xda7e: WORD 'UNK_0xda80' codep=0x7420 parp=0xda80
// ================================================
// 0xda80: db 0x3d 0x1c 0x01 '=  '

// ================================================
// 0xda83: WORD 'UNK_0xda85' codep=0x7420 parp=0xda85
// ================================================
// 0xda85: db 0x3d 0x1d 0x01 '=  '

// ================================================
// 0xda88: WORD 'UNK_0xda8a' codep=0x7420 parp=0xda8a
// ================================================
// 0xda8a: db 0x3d 0x1a 0x01 0x20 0x74 0x34 0x0c 0x01 '=   t4  '

// ================================================
// 0xda92: WORD 'UNK_0xda94' codep=0x224c parp=0xda94
// ================================================

void UNK_0xda94() // UNK_0xda94
{
  Func8("INST-X");
  _2_at_(); // 2@
  SWAP(); // SWAP
}


// ================================================
// 0xda9c: WORD 'UNK_0xda9e' codep=0x224c parp=0xda9e
// ================================================

void UNK_0xda9e() // UNK_0xda9e
{
  SWAP(); // SWAP
  Func8("INST-X");
  D_ex_(); // D!
}


// ================================================
// 0xdaa6: WORD 'UNK_0xdaa8' codep=0x224c parp=0xdaa8
// ================================================

void UNK_0xdaa8() // UNK_0xdaa8
{
  Push(pp_UNK_0xda0c); // UNK_0xda0c
  _ex_(); // !
  Push(pp_UNK_0xda08); // UNK_0xda08
  _ex_(); // !
}


// ================================================
// 0xdab2: WORD 'UNK_0xdab4' codep=0x224c parp=0xdab4
// ================================================

void UNK_0xdab4() // UNK_0xdab4
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
}


// ================================================
// 0xdabe: WORD 'UNK_0xdac0' codep=0x224c parp=0xdac0
// ================================================

void UNK_0xdac0() // UNK_0xdac0
{
  UNK_0xd9a0(); // UNK_0xd9a0
  UNK_0xda94(); // UNK_0xda94
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdac8: WORD 'UNK_0xdaca' codep=0x224c parp=0xdaca
// ================================================

void UNK_0xdaca() // UNK_0xdaca
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
}


// ================================================
// 0xdad0: WORD 'UNK_0xdad2' codep=0x224c parp=0xdad2
// ================================================

void UNK_0xdad2() // UNK_0xdad2
{
  UNK_0xd9a0(); // UNK_0xd9a0
  UNK_0xda9e(); // UNK_0xda9e
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdada: WORD 'UNK_0xdadc' codep=0x224c parp=0xdadc
// ================================================

void UNK_0xdadc() // UNK_0xdadc
{
  UNK_0xd9a0(); // UNK_0xd9a0
  Func8("UNK_0xda37");
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdae6: WORD 'UNK_0xdae8' codep=0x224c parp=0xdae8
// ================================================

void UNK_0xdae8() // UNK_0xdae8
{
  UNK_0xdaca(); // UNK_0xdaca
  Push(cc__4); // 4
  _eq_(); // =
}


// ================================================
// 0xdaf0: WORD 'UNK_0xdaf2' codep=0x224c parp=0xdaf2
// ================================================

void UNK_0xdaf2() // UNK_0xdaf2
{
  UNK_0xdab4(); // UNK_0xdab4
  Push(pp_UNK_0xda1e); // UNK_0xda1e
  _ex_(); // !
  Push(pp_UNK_0xda1a); // UNK_0xda1a
  _ex_(); // !
}


// ================================================
// 0xdafe: WORD 'UNK_0xdb00' codep=0x224c parp=0xdb00
// ================================================

void UNK_0xdb00() // UNK_0xdb00
{
  _at_INST_dash_C(); // @INST-C
  Push(0x0020);
  _eq_(); // =
}

// 0xdb0a: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x18 0x00 0x5f 0x12 0xfe 0xda 0x3e 0x13 0x90 0x16 'L""u]   _   >   '

// ================================================
// 0xdb1a: WORD 'UNK_0xdb1c' codep=0x224c parp=0xdb1c
// ================================================

void UNK_0xdb1c() // UNK_0xdb1c
{
  UNK_0xdaca(); // UNK_0xdaca
  Push(cc__3); // 3
  _eq_(); // =
}

// 0xdb24: db 0x4c 0x22 0x12 0xda 0x2f 0x7a 0x8b 0x75 0x9f 0x64 0x32 0x6d 0x3f 0x7a 0x5d 0x17 0x20 0x00 0x20 0x0f 0x4c 0x7e 0x32 0x0e 0x8b 0x75 0xaf 0x64 0x32 0x6d 0xc6 0xd9 0xc1 0x5a 0x65 0x6d 0xb7 0x5a 0x65 0x6d 0xa9 0x5a 0x65 0x6d 0x90 0x16 0x4c 0x22 0xa8 0x5c 0x65 0x6d 0x0e 0xda 0x65 0x6d 0xae 0xd9 0x92 0xda 0xa6 0xda 0xdf 0x79 0x5d 0x17 0x9a 0xc5 0xd9 0x84 0xa6 0x49 0xaf 0x64 0x32 0x6d 0xa6 0x49 0x9f 0x64 0x32 0x6d 0x0e 0xda 0x65 0x6d 0x90 0x16 'L"  /z u d2m?z]     L~2  u d2m   Zem Zem Zem  L" \em  em       y]      I d2m I d2m  em  '

// ================================================
// 0xdb7c: WORD 'UNK_0xdb7e' codep=0x224c parp=0xdb7e
// ================================================

void UNK_0xdb7e() // UNK_0xdb7e
{
  UNK_0xdaca(); // UNK_0xdaca
  Push(cc__3); // 3
  _st_(); // <
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xda00); // UNK_0xda00
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x0024);
  Push(h); // I
  _star__slash_(); // */
  Push(0xffdb);
  MAX(); // MAX
  Push(0x0024);
  MIN(); // MIN
  Push(0x0078);
  Push(Pop() + Pop()); // +
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x0024);
  R_gt_(); // R>
  _star__slash_(); // */
  Push(0xffdd);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(0x00a1);
  Push(Pop() + Pop()); // +
  LXPLOT(); // LXPLOT
}

// 0xdbdc: db 0x20 0x74 0x3d 0x13 0x01 0x20 0x74 0x3d 0x14 0x01 0x20 0x74 0x34 0x12 0x01 ' t=   t=   t4  '

// ================================================
// 0xdbeb: WORD 'UNK_0xdbed' codep=0x7420 parp=0xdbed
// ================================================
// 0xdbed: db 0x11 0x17 0x03 '   '

// ================================================
// 0xdbf0: WORD 'UNK_0xdbf2' codep=0x7420 parp=0xdbf2
// ================================================
// 0xdbf2: db 0x10 0x1b 0x01 0x4c 0x22 0x29 0x76 0xfa 0x15 0x26 0x00 0x3f 0x7a 0x22 0x75 0x5d 0x17 0x19 0x00 0x5f 0x12 0xfa 0x15 0x0a 0x00 0x1e 0x7f 0x20 0x0f 0x60 0x16 0x06 0x00 0xb1 0x7a 0x8d 0x7a 0x07 0x76 0x3e 0x13 0xfa 0x15 0xe2 0xff 0xdf 0x79 0x90 0x16 0x4c 0x22 0x3b 0x59 0xae 0x0b 0xfa 0x15 0x08 0x00 0x20 0x0f 0x60 0x16 0x0c 0x00 0x5d 0x17 0x88 0xff 0x5d 0x17 0x78 0x00 0xc4 0x4b 0x72 0x0f 0x90 0x16 0x4c 0x22 0x97 0x3b 0x46 0x75 0xfa 0x15 0x16 0x00 0x20 0x0f 0x5d 0x17 0xd0 0x07 0xc4 0x4b 0x20 0x0f 0x5d 0x17 0xe0 0x06 0xc4 0x4b 0x60 0x16 0x0e 0x00 0xbb 0x74 0xae 0x0b 0x23 0xdc 0xc9 0x74 0xae 0x0b 0x23 0xdc 0x9c 0xda 0x90 0x16 0x4c 0x22 0x9e 0xd9 0x49 0xda 0x92 0x0c 0x9f 0x3b 0xf5 0x12 0x5d 0x17 0xf4 0x01 0xb3 0x0f 0x44 0xda 0x16 0x6d 0x4e 0xda 0xae 0x0b 0x3f 0xda 0x92 0x0c 0x9f 0x3b 0xf5 0x12 0x41 0x0e 0xe7 0x0f 0x5d 0x17 0xfa 0x00 0xb3 0x0f 0xc4 0x0f 0x3f 0xda 0x0a 0x6d 0xdf 0x79 0x90 0x16 '   L")v  & ?z"u]   _        `    z z v>      y  L";Y        `   ]   ] x  Kr   L" ;Fu      ]    K  ]    K`    t  #  t  #     L"  I    ;  ]     D  mN   ?    ;  A   ]       ?  m y  '

// ================================================
// 0xdca5: WORD 'PS>C' codep=0x4b3b parp=0xdcae
// ================================================
// 0xdcae: db 0x05 0x00 0x3e 0x50 0x00 0x00 0x04 0x50 0x01 0x00 0xe3 0x4f 0x02 0x00 0x0e 0x50 0x03 0x00 0x55 0x50 0x04 0x00 0xd7 0x4f '  >P   P   O   P  UP   O'

// ================================================
// 0xdcc6: WORD 'UNK_0xdcc8' codep=0x224c parp=0xdcc8
// ================================================

void UNK_0xdcc8() // UNK_0xdcc8
{
  UNK_0xdae8(); // UNK_0xdae8
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _gt_1ICONF(); // >1ICONF
  Push(cc__8); // 8
  Push(0x0030);
  Push(pp_YWLD_c_YP); // YWLD:YP
  D_ex_(); // D!
  Push(cc__8); // 8
  Push(0x0020);
  Push(pp_XWLD_c_XP); // XWLD:XP
  D_ex_(); // D!
  Push(pp_XLLDEST); // XLLDEST
  _099(); // 099
  Push(pp_YLLDEST); // YLLDEST
  _099(); // 099
}

// 0xdcf0: db 0x4c 0x22 0xef 0x64 0x2f 0x7a 0x44 0x56 0xae 0x0b 0xe6 0xdb 0x92 0x0c 0x92 0x0f 0x41 0x0e 0x9f 0x12 0x05 0x10 0xf6 0x0f 0xf2 0x0e 0x58 0x10 0x7f 0x3b 0x4c 0x0f 0x8f 0x3b 0xad 0x11 0xb3 0x0f 0xe6 0xdb 0x92 0x0c 0x72 0x0f 0x5d 0x17 0x64 0x00 0xad 0x11 0x20 0x0f 0x89 0x11 0xe6 0xdb 0x0a 0x6d 0xdf 0x79 0x90 0x16 0x4c 0x22 0xf2 0x61 0xae 0x0b 0x78 0x12 0x07 0x13 0xbe 0xd9 0xa7 0x3b 0x46 0x75 0x5d 0x17 0x0b 0x00 0x46 0x75 0x3e 0x13 0xf5 0x12 0xfa 0x15 0x08 0x00 0x2e 0x0f 0xf2 0x61 0x23 0x6d 0xdf 0x79 0x90 0x16 0x4c 0x22 0x34 0x75 0x7f 0x3b 0x97 0x3b 0x25 0x40 0xfa 0x15 0x18 0x00 0x7f 0x3b 0x00 0x60 0xae 0x0b 0x5d 0x17 0x1e 0x00 0x9f 0x11 0x5d 0x17 0x0a 0x00 0x4c 0x0f 0x72 0x0f 0xf8 0x74 0x90 0x16 0x4c 0x22 0xcf 0x64 0x2f 0x7a 0x5d 0x17 0x18 0x00 0x46 0x75 0x32 0x62 0xae 0x0b 0xf5 0x12 0xfa 0x15 0x10 0x00 0x5d 0x17 0x2c 0x00 0x5d 0x17 0x6b 0xb7 0xd9 0x84 0x60 0x16 0x0a 0x00 0x5d 0x17 0x16 0x00 0x46 0x75 0x07 0x13 0xdf 0x79 0x90 0x16 0x4c 0x22 0x5d 0x17 0x9c 0xb7 0xd9 0x84 0xd9 0x51 0x65 0x6d 0xbe 0xd9 0x92 0xda 0xa6 0xda 0x0e 0xda 0xae 0x0b 0x7c 0xdd 0xf5 0x12 0x41 0x0e 0xab 0x5d 0x16 0x6d 0xfa 0xd9 0x16 0x6d 0xf0 0xdc 0xf5 0xdb 0x41 0xdc 0x5d 0x17 0x16 0x00 0x46 0x75 0xfa 0x15 0x12 0x00 0x5d 0x17 0x16 0x00 0x9d 0xb6 0x2f 0x7a 0x20 0x0f 0x8d 0xda 0x0a 0x6d 0xdf 0x79 0xdf 0x79 0x5d 0x17 0x38 0xbf 0xd9 0x84 0xa6 0x49 0xef 0x64 0x32 0x6d 0xa6 0x49 0x0c 0x63 0x32 0x6d 0x6f 0xdc 0xaa 0x61 0x65 0x6d 0xa6 0x49 0x3d 0x6a 0x4c 0x6d 0x90 0x16 0x4c 0x22 0x12 0xda 0x83 0x4a 0xcf 0x64 0x32 0x6d 0x8f 0x64 0x83 0x4a 0xfa 0x3f 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x48 0x3a 0x24 0xda 0x16 0x6d 0x2e 0xdd 0x56 0xdd 0xe8 0x55 0x65 0x6d 0x20 0x0f 0xe1 0xdb 0x0a 0x6d 0xbe 0xd9 0x34 0x75 0x9d 0xb6 0x83 0x4a 0x3b 0x59 0x65 0x6d 0x4d 0x62 0x65 0x6d 0x5d 0x17 0x44 0xca 0xd9 0x84 0x4d 0x62 0x57 0x6d 0xdf 0x79 0x27 0x61 0x65 0x6d 0x2e 0x0f 0x5d 0x17 0xd7 0xbe 0xd9 0x84 0x5d 0x17 0x3c 0xc8 0xd9 0x84 0x90 0x16 0x4c 0x22 0x0e 0x60 0x65 0x6d 0x32 0x62 0xae 0x0b 0x89 0x12 0xa8 0x5c 0x16 0x6d 0x3d 0x0f 0xda 0xda 0x3d 0x0f 0x48 0x5f 0x16 0x6d 0x90 0x16 0x4c 0x22 0x0e 0x60 0x57 0x6d 0x3d 0x0f 0xda 0xda 0x3d 0x0f 0x48 0x5f 0x16 0x6d 0xa6 0x49 0xa6 0xda 0x90 0x16 0x4c 0x22 0xb6 0xd9 0xad 0x74 0xae 0x0b 0x5d 0x17 0x18 0x00 0x34 0x75 0x3f 0x7a 0x2e 0x0f 0x0f 0x82 0xad 0x74 0x16 0x6d 0xa6 0x49 0x9c 0xda 0xc6 0xd9 0x90 0x16 0x4c 0x22 0xb6 0xd9 0x3f 0x7a 0x5d 0x17 0x18 0x00 0x20 0x0f 0x4c 0x7e 0xfa 0x15 0x04 0x00 0x1e 0x7f 0xc6 0xd9 0x90 0x16 0x4c 0x22 0x5d 0x17 0xa3 0xc9 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0xb2 0xc9 0xd9 0x84 0x90 0x16 0x4c 0x22 0xb6 0xd9 0x92 0xda 0xdf 0x79 0x90 0x16 0x4c 0x22 0xe2 0xd9 0x8f 0x3b 0x92 0x0f 0x41 0x0e 0xc6 0x11 0xf2 0x0e 0xf0 0x0d 0xc4 0x4b 0xbb 0x74 0x16 0x6d 0xc4 0x4b 0xc9 0x74 0x16 0x6d 0x90 0x16 0x4c 0x22 0xad 0x74 0xae 0x0b 0x87 0x3b 0xb3 0x0f 0x15 0x10 0xb4 0x0d 0x50 0x0e 0xc6 0x11 0x50 0x0e 0xe7 0x0f 0xc4 0x4b 0x41 0x0e 0xe2 0xd9 0x5d 0x17 0x24 0x00 0xc4 0x0f 0xbb 0x74 0x16 0x6d 0x50 0x0e 0x90 0x0e 0xb3 0x0f 0xf2 0x0e 0x41 0x0e 0xb3 0x0f 0x92 0x0f 0x20 0x0f 0x91 0x4c 0x20 0x0f 0x3d 0x0f 0xc4 0x4b 0x05 0x10 0xf6 0x0f 0xb3 0x0f 0xe2 0xd9 0x5d 0x17 0x24 0x00 0xc4 0x0f 0xc9 0x74 0x16 0x6d 0x90 0x16 0x4c 0x22 0x3f 0x7a 0xfe 0xda 0xdf 0x79 0xfa 0x15 0x08 0x00 0x12 0xdf 0x60 0x16 0x06 0x00 0xa6 0x49 0x9c 0xda 0x90 0x16 'L" d/zDV        A         X ;L  ;        r ] d          m y  L" a  x      ;Fu]   Fu>       .  a#m y  L"4u; ;%@    ; `  ]     ]   L r  t  L" d/z]   Fu2b        ] , ] k   `   ]   Fu   y  L"]      Qem          |   A  ] m   m    A ]   Fu    ]     /z     m y y] 8    I d2m I c2mo  aem I=jLm  L"   J d2m d J ?    ] H:$  m. V  Uem     m  4u   J;YemMbem] D   MbWm y'aem. ]     ] <     L" `em2b     \ m=   = H_ m  L" `Wm=   = H_ m I    L"   t  ]   4u?z.    t m I      L"  ?z]     L~         L"]       L"]       L"     y  L"   ;  A        K t m K t m  L" t   ;      P   P    KA   ] $    t mP       A        L  =  K        ] $    t m  L"?z   y      `    I    '

// ================================================
// 0xdf7c: WORD '>XY' codep=0x4b3b parp=0xdf84
// ================================================
// 0xdf84: db 0x02 0x00 0x48 0x3a 0x0b 0x00 0x66 0xdf 0x3d 0x00 0xf6 0xde 0x4c 0x22 0xb6 0xd9 0x29 0x76 0xfa 0x15 0x12 0x00 0x3f 0x7a 0x22 0x75 0x82 0xdf 0xb1 0x7a 0x8d 0x7a 0xfa 0x15 0xf6 0xff 0xdf 0x79 0xdf 0x79 0x90 0x16 '  H:  f =   L"  )v    ?z"u   z z     y y  '

// ================================================
// 0xdfae: WORD 'SC>C' codep=0x4b3b parp=0xdfb7
// ================================================
// 0xdfb7: db 0x06 0x00 0x28 0x50 0x4d 0x00 0xd7 0x4f 0x4b 0x00 0x3e 0x50 0x47 0x00 0x4a 0x50 0x46 0x00 0x55 0x50 0x41 0x00 0xce 0x4f 0x42 0x00 0x0e 0x50 '  (PM  OK >PG JPF UPA  OB  P'

// ================================================
// 0xdfd3: WORD 'UNK_0xdfd5' codep=0x224c parp=0xdfd5
// ================================================

void UNK_0xdfd5() // UNK_0xdfd5
{
  Case(SC>C);
  _ex_COLOR(); // !COLOR
  Push(0x0078);
  Push(0x00a1);
  Push(cc__3); // 3
  FILLCIR(); // FILLCIR
}


// ================================================
// 0xdfe7: WORD 'UNK_0xdfe9' codep=0x224c parp=0xdfe9
// ================================================

void UNK_0xdfe9() // UNK_0xdfe9
{

  label4:
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  IOPEN(); // IOPEN
  UNK_0xdb00(); // UNK_0xdb00
  Push(Pop() & Pop()); // AND
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label1;
  LoadData("UNK_0xda73"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Case(PS>C);
  _ex_COLOR(); // !COLOR

  label1:
  ICLOSE(); // ICLOSE
  Push(Read16(sp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  Push(Pop() | Pop()); // OR
  goto label3;

  label2:
  Func8("INST-X");
  Push(Read16(Pop())); // @
  Push(0x0024);
  Push(cc_UNK_0xd9e4); // UNK_0xd9e4
  _star__slash_(); // */
  Push(0x0078);
  Push(Pop() + Pop()); // +
  Func8("INST-Y");
  Push(Read16(Pop())); // @
  Push(0x0024);
  Push(cc_UNK_0xd9e4); // UNK_0xd9e4
  _star__slash_(); // */
  Push(0x00a1);
  Push(Pop() + Pop()); // +
  Push(2); // 2
  FILLCIR(); // FILLCIR
  INEXT(); // INEXT

  label3:
  if (Pop() == 0) goto label4;
}


// ================================================
// 0xe049: WORD '.AUXSYS' codep=0x224c parp=0xe055
// ================================================
// entry

void _dot_AUXSYS() // .AUXSYS
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) return;
  _gt_DISPLA(); // >DISPLA
  SetColor("BLACK");
  ERASE_dash_A(); // ERASE-A
  Push(cc__5); // 5
  Push(pp__n_AUX); // #AUX
  _ex_(); // !
  UNK_0xd9b8(); // UNK_0xd9b8
  _at_INST_dash_S(); // @INST-S
  UNK_0xdfd5(); // UNK_0xdfd5
  Func8("UNK_0xda6e");
  Push(Read8(Pop())&0xFF); // C@
  IOPEN(); // IOPEN
  Push(cc__9); // 9
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  BIT(); // BIT
  OVER(); // OVER
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  Push(0x0078);
  Push(0x00a1);
  Push(i); // I
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop()+1); // 1+
  Push(1); // 1
  Push(1); // 1
  _dot_ELLIPS(); // .ELLIPS
  UNK_0xdfe9(); // UNK_0xdfe9

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd6

  Pop(); // DROP
  IFIRST(); // IFIRST
  UNK_0xd9c8(); // UNK_0xd9c8
  UNK_0xdb7e(); // UNK_0xdb7e
}

// 0xe0b5: db 0x4c 0x22 0x2c 0xda 0xae 0x0b 0x89 0x5e 0x16 0x6d 0x12 0xda 0x83 0x4a 0x8f 0x64 0x32 0x6d 0x5d 0x17 0x55 0xe0 0x24 0xda 0x16 0x6d 0x9e 0xde 0xe0 0xde 0x90 0xdf 0x90 0x16 0x4c 0x22 0xb6 0xd9 0x92 0xda 0xa6 0xda 0xdf 0x79 0xd6 0xde 0xbe 0xde 0xa6 0x49 0x8f 0x64 0x32 0x6d 0x5d 0x17 0x90 0xc0 0xd9 0x84 0x5d 0x17 0x48 0x3a 0x24 0xda 0x16 0x6d 0x90 0x16 0x4c 0x22 0x20 0x0f 0x7f 0x0e 0x7f 0x3b 0x3d 0x0f 0xc4 0x0f 0xe7 0x0f 0xc4 0x4b 0xf2 0x0e 0x41 0x0e 0xb3 0x0f 0x7f 0x0e 0x3d 0x0f 0x7f 0x3b 0xc4 0x0f 0x41 0x0e 0xb3 0x0f 0x92 0x0f 0x20 0x0f 0x91 0x4c 0x20 0x0f 0xf2 0x0e 0xe7 0x0f 0xc4 0x4b 0x20 0x0f 0x3d 0x0f 0xc4 0x4b 0xfa 0x15 0x04 0x00 0xc6 0x11 0xf2 0x0e 0x20 0x0f 0x3d 0x0f 0xc4 0x4b 0xfa 0x15 0x04 0x00 0xc6 0x11 0x90 0x16 'L",    ^ m   J d2m] U $  m        L"       y     I d2m]     ] H:$  m  L"   ;=      K  A    = ;  A        L       K  =  K          =  K        '

// ================================================
// 0xe147: WORD 'UNK_0xe149' codep=0x224c parp=0xe149
// ================================================

void UNK_0xe149() // UNK_0xe149
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIM); // NAV-TIM
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xe155: WORD 'UNK_0xe157' codep=0x224c parp=0xe157
// ================================================

void UNK_0xe157() // UNK_0xe157
{
  Push(pp_UNK_0xda04); // UNK_0xda04
  Push(Read16(Pop())); // @

  label2:
  Push(pp_CXSP); // CXSP
  Push(Read16(Pop())); // @
  OVER(); // OVER
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Pop(); // DROP
}

// 0xe171: db 0x4c 0x22 0xdf 0x64 0x2f 0x7a 0x90 0x16 'L" d/z  '

// ================================================
// 0xe179: WORD 'UNK_0xe17b' codep=0x224c parp=0xe17b
// ================================================

void UNK_0xe17b() // UNK_0xe17b
{
  Push(pp_CXSP); // CXSP
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda04); // UNK_0xda04
  _ex_(); // !
}


// ================================================
// 0xe185: WORD 'RADII' codep=0x4b3b parp=0xe18f
// ================================================
// 0xe18f: db 0x04 0x00 0xd8 0xd9 0x01 0x00 0xdc 0xd9 0x02 0x00 0xe4 0xd9 0x04 0x00 0xe0 0xd9 0x05 0x00 0xd4 0xd9 '                    '

// ================================================
// 0xe1a3: WORD 'IVAR' codep=0x4b3b parp=0xe1ac
// ================================================
// 0xe1ac: db 0x04 0x00 0xe1 0x64 0x00 0x00 0xb1 0x64 0x01 0x00 0xa1 0x64 0x02 0x00 0x91 0x64 0x04 0x00 0xd1 0x64 '   d   d   d   d   d'

// ================================================
// 0xe1c0: WORD 'UNK_0xe1c2' codep=0x224c parp=0xe1c2
// ================================================

void UNK_0xe1c2() // UNK_0xe1c2
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_S(); // @INST-S
  _at_INST_dash_C(); // @INST-C
  CONTEXT(); // CONTEXT
  Push(Read16(sp)); // DUP
  Case(RADII);
  _gt_R(); // >R
  _gt_R(); // >R
  Push(h); // I
  Case(IVAR);
  R_gt_(); // R>
  R_gt_(); // R>
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe1e0: WORD 'UNK_0xe1e2' codep=0x224c parp=0xe1e2
// ================================================

void UNK_0xe1e2() // UNK_0xe1e2
{
  Push(pp_UNK_0xda00); // UNK_0xda00
  _ex_(); // !
  Push(pp_CONTEXT); // CONTEXT
  _ex_(); // !
  _gt_R(); // >R
  _2DUP(); // 2DUP
  R_gt_(); // R>
  _1_dot_5_ex_(); // 1.5!
  Push(pp__ro_SHIPBO); // (SHIPBO
  _1_dot_5_ex_(); // 1.5!
}

// 0xe1f8: db 0x4c 0x22 0xb2 0xda 0x90 0x16 0x4c 0x22 0xb6 0xd9 0x92 0xda 0xdf 0x79 0x90 0x16 0x4c 0x22 0x8f 0x64 0x83 0x4a 0x3e 0x13 0xfa 0x15 0x08 0x00 0xfe 0xe1 0x60 0x16 0x08 0x00 0xbe 0xd9 0x92 0xda 0xdf 0x79 0x90 0x16 'L"    L"     y  L" d J>       `        y  '

// ================================================
// 0xe222: WORD 'XYCASE' codep=0x4b3b parp=0xe22d
// ================================================
// 0xe22d: db 0x02 0x00 0x00 0xe2 0x03 0x00 0xfa 0xe1 0x04 0x00 0x0a 0xe2 '            '

// ================================================
// 0xe239: WORD 'UNK_0xe23b' codep=0x224c parp=0xe23b
// ================================================

void UNK_0xe23b() // UNK_0xe23b
{
  _gt_DISPLA(); // >DISPLA
  Push(cc__3); // 3
  SetColor("GREY1");
  Push(0x00c6);
  Push(0x0016);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  Push(cc__3); // 3
  SetColor("GREY1");
  Push(0x00c6);
  Push(0x0030);
  POS_dot_PXT(); // POS.PXT
  SetColor("WHITE");
  SetColor("BLACK");
  SetColor("WHITE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  UNK_0xe149(); // UNK_0xe149
  _gt_1FONT(); // >1FONT
  if (Pop() == 0) goto label1;
  UNK_0xdaca(); // UNK_0xdaca
  Case(XYCASE);
  goto label2;

  label1:
  Push(0); // 0
  Push(0x06dd);
  RRND(); // RRND
  Push(0); // 0
  Push(0x07cd);
  RRND(); // RRND

  label2:
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  SWAP(); // SWAP
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x0030);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  _dot_(); // .
}


// ================================================
// 0xe2ab: WORD 'UNK_0xe2ad' codep=0x2214 parp=0xe2ad
// ================================================
// 0xe2ad: db 0x48 0x00 'H '

// ================================================
// 0xe2af: WORD 'UNK_0xe2b1' codep=0x2214 parp=0xe2b1
// ================================================
// 0xe2b1: db 0x78 0x00 'x '

// ================================================
// 0xe2b3: WORD 'UNK_0xe2b5' codep=0x2214 parp=0xe2b5
// ================================================
// 0xe2b5: db 0xff 0x00 '  '

// ================================================
// 0xe2b7: WORD 'UNK_0xe2b9' codep=0x2214 parp=0xe2b9
// ================================================
// 0xe2b9: db 0xff 0x00 '  '

// ================================================
// 0xe2bb: WORD 'UNK_0xe2bd' codep=0x1d29 parp=0xe2bd
// ================================================
// 0xe2bd: db 0x44 0x7f 0xf5 0x87 0xa5 0xc0 0x3c 0xd2 0xa5 0x57 0xf2 0x7d 0x78 0xa7 0xed 0x0c 0x90 0x55 0x41 0x41 0xa3 0x43 0x40 0x22 'D    <  W }x    UAA C@"'

// ================================================
// 0xe2d5: WORD 'UNK_0xe2d7' codep=0x224c parp=0xe2d7
// ================================================

void UNK_0xe2d7() // UNK_0xe2d7
{
  Push(pp_UNK_0xe2bd); // UNK_0xe2bd
  Push(0x0018);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe2bd); // UNK_0xe2bd

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(cc_UNK_0xe2b5); // UNK_0xe2b5
  RRND(); // RRND
  Push(i); // I
  C_ex_(); // C!
  Push(0); // 0
  Push(cc_UNK_0xe2b9); // UNK_0xe2b9
  RRND(); // RRND
  Push(i); // I
  Push(Pop()+1); // 1+
  C_ex_(); // C!
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe6

}


// ================================================
// 0xe301: WORD 'UNK_0xe303' codep=0x224c parp=0xe303
// ================================================

void UNK_0xe303() // UNK_0xe303
{
  Push(cc_UNK_0xe2b9); // UNK_0xe2b9
  MOD(); // MOD
  Push(Read16(sp)); // DUP
  Push(0); // 0
  Push(cc_UNK_0xe2b1); // UNK_0xe2b1
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(cc_UNK_0xe2b5); // UNK_0xe2b5
  MOD(); // MOD
  Push(Read16(sp)); // DUP
  Push(0); // 0
  Push(cc_UNK_0xe2ad); // UNK_0xe2ad
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
}


// ================================================
// 0xe325: WORD 'UNK_0xe327' codep=0x224c parp=0xe327
// ================================================

void UNK_0xe327() // UNK_0xe327
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x01f4);
  Push(Pop() + Pop()); // +
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x01f4);
  Push(Pop() + Pop()); // +
  Push(pp_YWLD_c_YP); // YWLD:YP
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  UNK_0xe303(); // UNK_0xe303
  _2DUP(); // 2DUP
  Push(Pop() * Pop()); // *
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xe2b1); // UNK_0xe2b1
  _dash_(); // -
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  Push(cc_UNK_0xe2ad); // UNK_0xe2ad
  _dash_(); // -
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  LPLOT(); // LPLOT
  return;

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe379: WORD 'UNK_0xe37b' codep=0x224c parp=0xe37b
// ================================================

void UNK_0xe37b() // UNK_0xe37b
{
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xe2bd); // UNK_0xe2bd
  Push(0x0021);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe2bd); // UNK_0xe2bd

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe327(); // UNK_0xe327
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff0

}


// ================================================
// 0xe39f: WORD '.MVS' codep=0x224c parp=0xe3a8
// ================================================
// entry

void _dot_MVS() // .MVS
{
  UNK_0xdae8(); // UNK_0xdae8
  UNK_0xdaca(); // UNK_0xdaca
  Push(1); // 1
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _gt_MAINVI(); // >MAINVI
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  UNK_0xdaca(); // UNK_0xdaca
  Push(2); // 2
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  _ask_CGA(); // ?CGA
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  NBCLR(); // NBCLR
  goto label2;

  label1:
  SetColor("BLACK");

  label2:
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  UNK_0xdaca(); // UNK_0xdaca
  Push(2); // 2
  Push(cc__4); // 4
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  UNK_0xe37b(); // UNK_0xe37b

  label3:
  ORGLIST(); // ORGLIST
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}

// 0xe3f4: db 0x4c 0x22 0x88 0x9d 0x29 0x94 0x39 0x94 0xd3 0x92 0xf7 0x4f 0x9d 0x86 0xc4 0xa7 0x75 0x5a 0x16 0x6d 0x2e 0x0f 0x6a 0x5a 0x16 0x6d 0x2e 0x0f 0x5f 0x5a 0x16 0x6d 0x54 0x5a 0x65 0x6d 0x14 0x95 0x20 0xda 0xae 0x0b 0x5d 0x17 0x96 0x00 0x2d 0x12 0xf5 0x12 0xfa 0x15 0x36 0x00 0x20 0xda 0xae 0x0b 0x5d 0x17 0x96 0x00 0x92 0x0f 0x97 0x3b 0x5d 0x17 0x64 0x00 0xc4 0x0f 0xe7 0x0f 0x20 0x0f 0xb8 0x15 0xf0 0x0d 0x5d 0x17 0x0f 0x00 0xfb 0xe0 0xb3 0x0e 0x72 0x0f 0x3b 0x5a 0x16 0x6d 0x72 0x0f 0x46 0x5a 0x16 0x6d 0xbd 0x8b 0xd0 0x15 0xe6 0xff 0xde 0x0d 0xbd 0x9d 0x90 0x16 'L"  ) 9    O    uZ m. jZ m. _Z mTZem      ]   -     6     ]      ;] d           ]       r ;Z mr FZ m            '

// ================================================
// 0xe464: WORD 'UNK_0xe466' codep=0x224c parp=0xe466
// ================================================

void UNK_0xe466() // UNK_0xe466
{
  _gt_R(); // >R
  _gt_R(); // >R
  _gt_R(); // >R
  Push(h); // I
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(h); // I'
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  Push(g); // J
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_V(); // >V
  R_gt_(); // R>
  R_gt_(); // R>
  R_gt_(); // R>
  V_gt_(); // V>
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Pop(); Pop();// 2DROP
  Pop(); // DROP
  Push(0); // 0
}


// ================================================
// 0xe4a4: WORD 'UNK_0xe4a6' codep=0x224c parp=0xe4a6
// ================================================

void UNK_0xe4a6() // UNK_0xe4a6
{
  _2DUP(); // 2DUP
  Push(pp_YABS); // YABS
  _ex_(); // !
  Push(pp_XABS); // XABS
  _ex_(); // !
  _2DUP(); // 2DUP
  UNK_0xdad2(); // UNK_0xdad2
  _2DUP(); // 2DUP
  Push2Words("*SHIP");
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-

  label1:
  POINT_gt_I(); // POINT>I
  _ex_IY(); // !IY
  _ex_IX(); // !IX
  UNK_0xdae8(); // UNK_0xdae8
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  _2DUP(); // 2DUP
  Push(cc_UNK_0xd9f0); // UNK_0xd9f0
  _dash_(); // -
  SWAP(); // SWAP
  Push(cc_UNK_0xd9f4); // UNK_0xd9f4
  _dash_(); // -
  SWAP(); // SWAP
  _2SWAP(); // 2SWAP
  Push(cc_UNK_0xd9e8); // UNK_0xd9e8
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc_UNK_0xd9ec); // UNK_0xd9ec
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  _ex_VISWIN(); // !VISWIN
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() == 0) goto label4;
  UNK_0xe23b(); // UNK_0xe23b

  label4:
  Push(Read16(sp)); // DUP
  Push(pp_HEADING); // HEADING
  _ex_(); // !
  Push(Read16(sp)); // DUP
  UNK_0xdadc(); // UNK_0xdadc
  Push(0x001b);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID
}


// ================================================
// 0xe514: WORD 'UNK_0xe516' codep=0x224c parp=0xe516
// ================================================

void UNK_0xe516() // UNK_0xe516
{
  UNK_0xe466(); // UNK_0xe466
  if (Pop() == 0) return;
  UNK_0xdb7e(); // UNK_0xdb7e
  UNK_0xe4a6(); // UNK_0xe4a6
  UNK_0xdb7e(); // UNK_0xdb7e
}


// ================================================
// 0xe524: WORD 'UNK_0xe526' codep=0x224c parp=0xe526
// ================================================

void UNK_0xe526() // UNK_0xe526
{
  SWAP(); // SWAP
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0064);
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(1); // 1
  return;

  label1:
  Pop(); // DROP
  Push(0); // 0
}


// ================================================
// 0xe542: WORD 'UNK_0xe544' codep=0x224c parp=0xe544
// ================================================

void UNK_0xe544() // UNK_0xe544
{
  ROT(); // ROT
  _dash_(); // -
  _gt_R(); // >R
  SWAP(); // SWAP
  _dash_(); // -
  R_gt_(); // R>
}


// ================================================
// 0xe552: WORD 'UNK_0xe554' codep=0x224c parp=0xe554
// ================================================

void UNK_0xe554() // UNK_0xe554
{
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0x0003);
  goto label2;

  label1:
  Push(0x000c);

  label2:
  SWAP(); // SWAP
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(0x0009);
  goto label4;

  label3:
  Push(0x0006);

  label4:
  Push(Pop() & Pop()); // AND
  Push(Read16(sp)); // DUP
  Push(0x0008);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  Push(Pop()>>1); // 2/
  return;

  label5:
  Push(Read16(sp)); // DUP
  Push(0x0004);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(Pop()-1); // 1-
}


// ================================================
// 0xe5a2: WORD 'UNK_0xe5a4' codep=0x224c parp=0xe5a4
// ================================================

void UNK_0xe5a4() // UNK_0xe5a4
{
  UNK_0xe544(); // UNK_0xe544
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  UNK_0xe554(); // UNK_0xe554
  _gt_R(); // >R
  Push(h); // I
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  SWAP(); // SWAP

  label2:
  ABS(); // ABS
  SWAP(); // SWAP
  ABS(); // ABS
  SWAP(); // SWAP
  UNK_0xe526(); // UNK_0xe526
  if (Pop() == 0) goto label3;
  Push(Read16(sp)); // DUP
  Push(0x0029);
  _st_(); // <
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  Push(0); // 0
  goto label5;

  label4:
  Push(0x00f1);
  _gt_(); // >
  if (Pop() == 0) goto label6;
  Push(2); // 2
  goto label5;

  label6:
  Push(1); // 1

  label5:
  goto label7;

  label3:
  Push(2); // 2

  label7:
  R_gt_(); // R>
  Push(Pop()-1); // 1-
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  return;

  label1:
  Pop(); Pop();// 2DROP
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe612: WORD 'UNK_0xe614' codep=0x1d29 parp=0xe614
// ================================================
// 0xe614: db 0x01 0x00 0x01 0x01 0x00 0x01 0xff 0x01 0xff 0x00 0xff 0xff 0x00 0xff 0x01 0xff '                '

// ================================================
// 0xe624: WORD 'UNK_0xe626' codep=0x224c parp=0xe626
// ================================================

void UNK_0xe626() // UNK_0xe626
{
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xe614); // UNK_0xe614
  Push(Pop() + Pop()); // +
  Push(Read16(sp)); // DUP
  _plus__dash__at_(); // +-@
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  _plus__dash__at_(); // +-@
}


// ================================================
// 0xe638: WORD 'UNK_0xe63a' codep=0x224c parp=0xe63a
// ================================================

void UNK_0xe63a() // UNK_0xe63a
{
  UNK_0xe626(); // UNK_0xe626
  _gt_R(); // >R
  _gt_R(); // >R
  Push(Pop()-1); // 1-
  R_gt_(); // R>
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  R_gt_(); // R>
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe654: WORD 'UNK_0xe656' codep=0x224c parp=0xe656
// ================================================

void UNK_0xe656() // UNK_0xe656
{
  _gt_R(); // >R
  UNK_0xe626(); // UNK_0xe626
  Push(h); // I
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  R_gt_(); // R>
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
}


// ================================================
// 0xe672: WORD 'UNK_0xe674' codep=0x224c parp=0xe674
// ================================================

void UNK_0xe674() // UNK_0xe674
{
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(sp)); // DUP
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  _dash_(); // -
  Push(Read16(sp)); // DUP
  Push(Pop() * Pop()); // *
  R_gt_(); // R>
  Push(Pop() + Pop()); // +
  Push(0); // 0
  SQRT(); // SQRT
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe698: WORD 'UNK_0xe69a' codep=0x224c parp=0xe69a
// ================================================

void UNK_0xe69a() // UNK_0xe69a
{
  UNK_0xdab4(); // UNK_0xdab4
  Push(pp_UNK_0xda1a); // UNK_0xda1a
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda1e); // UNK_0xda1e
  Push(Read16(Pop())); // @
  UNK_0xe674(); // UNK_0xe674
  Push(cc_UNK_0xd9f8); // UNK_0xd9f8
  MIN(); // MIN
}


// ================================================
// 0xe6ac: WORD 'UNK_0xe6ae' codep=0x224c parp=0xe6ae
// ================================================

void UNK_0xe6ae() // UNK_0xe6ae
{
  UNK_0xdab4(); // UNK_0xdab4
  _2DUP(); // 2DUP
  Push(pp_UNK_0xda1a); // UNK_0xda1a
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda1e); // UNK_0xda1e
  Push(Read16(Pop())); // @
  UNK_0xe5a4(); // UNK_0xe5a4
  Push(Read16(sp)); // DUP
  Push(cc__8); // 8
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @

  label1:
  _gt_R(); // >R
  Push(h); // I
  UNK_0xe69a(); // UNK_0xe69a
  UNK_0xe656(); // UNK_0xe656
  R_gt_(); // R>
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xe6dc: WORD 'UNK_0xe6de' codep=0x224c parp=0xe6de
// ================================================

void UNK_0xe6de() // UNK_0xe6de
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


// ================================================
// 0xe6f6: WORD 'UNK_0xe6f8' codep=0x224c parp=0xe6f8
// ================================================

void UNK_0xe6f8() // UNK_0xe6f8
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
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(0x01f4);
  OVER(); // OVER
  _slash_(); // /
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xe6de(); // UNK_0xe6de
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  Push(0xc976);
  MODULE(); // MODULE
  return;

  label1:
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(0x0096);
  OVER(); // OVER
  _slash_(); // /
  _4_star_(); // 4*
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xe6de(); // UNK_0xe6de
  if (Pop() == 0) goto label2;
  Push(2); // 2
  Push(0xc976);
  MODULE(); // MODULE
  return;

  label2:
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(pp__ask_AUTO); // ?AUTO
  ON(); // ON
  Push(1); // 1
  Push(0xc976);
  MODULE(); // MODULE
  Push(pp__ask_SUP); // ?SUP
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xc636);
  MODULE(); // MODULE
}


// ================================================
// 0xe7ae: WORD 'UNK_0xe7b0' codep=0x224c parp=0xe7b0
// ================================================

void UNK_0xe7b0() // UNK_0xe7b0
{
  UNK_0xdb1c(); // UNK_0xdb1c
  Push(pp__ask_AUTO); // ?AUTO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xe6f8(); // UNK_0xe6f8
}


// ================================================
// 0xe7c2: WORD 'USE-E' codep=0x224c parp=0xe7cc
// ================================================
// entry

void USE_dash_E() // USE-E
{
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(pp__dash_END); // -END
  _ex_(); // !
  UNK_0xe6f8(); // UNK_0xe6f8
  Push(pp__dash_END); // -END
  _ex_(); // !
  UNK_0xd9a0(); // UNK_0xd9a0
  Push(1); // 1
  Func8("UNK_0xda55");
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
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
  if (Pop() == 0) goto label2;
  Func8("INST-QT");
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0); // 0
  MAX(); // MAX
  Func8("INST-QT");
  _ex_(); // !

  label2:
  CDROP(); // CDROP

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe820: WORD 'UNK_0xe822' codep=0x224c parp=0xe822
// ================================================

void UNK_0xe822() // UNK_0xe822
{
  SWAP(); // SWAP
  Push(Pop()*2); // 2*
  SWAP(); // SWAP
  L_at_PIXEL(); // L@PIXEL
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label1;
  Push(2); // 2
  goto label2;

  label1:
  SetColor("DK-GREE");

  label2:
  _eq_(); // =
}


// ================================================
// 0xe83c: WORD 'UNK_0xe83e' codep=0x224c parp=0xe83e
// ================================================

void UNK_0xe83e() // UNK_0xe83e
{
  Push(0x0022);
  Push(0x0089);
  UNK_0xe822(); // UNK_0xe822
  Push(0x002c);
  Push(0x0089);
  UNK_0xe822(); // UNK_0xe822
  Push(Pop() + Pop()); // +
  Push(0x0022);
  Push(0x007f);
  UNK_0xe822(); // UNK_0xe822
  Push(Pop() + Pop()); // +
  Push(0x002c);
  Push(0x007f);
  UNK_0xe822(); // UNK_0xe822
  Push(Pop() + Pop()); // +
  Push(2); // 2
  _gt_(); // >
}


// ================================================
// 0xe872: WORD 'UNK_0xe874' codep=0x224c parp=0xe874
// ================================================

void UNK_0xe874() // UNK_0xe874
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ENC_dash_TIM); // ENC-TIM
  _2_at_(); // 2@
  D_gt_(); // D>
}

// 0xe880: db 0x4c 0x22 0x97 0x3b 0x3b 0x59 0xae 0x0b 0x2e 0x0f 0x89 0x11 0x4c 0x0f 0x3d 0x0f 0x89 0x11 0x90 0x16 0x14 0x22 0x0c 0x00 'L" ;;Y  .   L =      "  '

// ================================================
// 0xe898: WORD 'CSPEED' codep=0x4b3b parp=0xe8a3
// ================================================
// 0xe8a3: db 0x02 0x00 0x96 0xe8 0x03 0x00 0x30 0x0f 0x04 0x00 0x82 0xe8 '      0     '

// ================================================
// 0xe8af: WORD '#ACC' codep=0x1d29 parp=0xe8b8
// ================================================
// 0xe8b8: db 0x00 0x00 '  '

// ================================================
// 0xe8ba: WORD 'KEYINC' codep=0x1d29 parp=0xe8c5
// ================================================
// 0xe8c5: db 0x00 0x00 '  '

// ================================================
// 0xe8c7: WORD 'UNK_0xe8c9' codep=0x224c parp=0xe8c9
// ================================================

void UNK_0xe8c9() // UNK_0xe8c9
{
  Push(pp_KEYINC); // KEYINC
  _099(); // 099
  Push(pp__n_ACC); // #ACC
  _099(); // 099
  UNK_0xdaca(); // UNK_0xdaca
  Case(CSPEED);
  Push(0xd9f8);
  _ex_(); // !
}


// ================================================
// 0xe8dd: WORD 'UNK_0xe8df' codep=0x224c parp=0xe8df
// ================================================

void UNK_0xe8df() // UNK_0xe8df
{
  UNK_0xd9a0(); // UNK_0xd9a0
  Func8("UNK_0xda32");
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  Func8("UNK_0xda3c");
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0064);
  _star__slash_(); // */
  Push(2); // 2
  MAX(); // MAX
  Push(pp_UNK_0xda2a); // UNK_0xda2a
  _ex_(); // !
  UNK_0xe8c9(); // UNK_0xe8c9
  ICLOSE(); // ICLOSE
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xe903: WORD 'UNK_0xe905' codep=0x224c parp=0xe905
// ================================================

void UNK_0xe905() // UNK_0xe905
{
  Push(pp__n_ACC); // #ACC
  Push(Read16(Pop())); // @
  Push(1); // 1
  _st_(); // <
  UNK_0xdae8(); // UNK_0xdae8
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp_KEYINC); // KEYINC
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(cc_UNK_0xd9f8); // UNK_0xd9f8
  MIN(); // MIN
  Push(pp_KEYINC); // KEYINC
  _ex_(); // !
  Push(0x0060);
  Push(pp_UNK_0xda2a); // UNK_0xda2a
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(pp__n_ACC); // #ACC
  _ex_(); // !
  return;

  label1:
  Push(cc__dash_1); // -1
  Push(pp__n_ACC); // #ACC
  _plus__ex_(); // +!
}


// ================================================
// 0xe93f: WORD 'UNK_0xe941' codep=0x224c parp=0xe941
// ================================================

void UNK_0xe941() // UNK_0xe941
{
  Push(1); // 1
  Push(pp_KEYINC); // KEYINC
  _ex_(); // !
  Push(0x0060);
  Push(pp_UNK_0xda2a); // UNK_0xda2a
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(pp__n_ACC); // #ACC
  _ex_(); // !
}


// ================================================
// 0xe957: WORD 'UNK_0xe959' codep=0x224c parp=0xe959
// ================================================

void UNK_0xe959() // UNK_0xe959
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x00fa);
  Push(pp_UNK_0xda22); // UNK_0xda22
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0x01f4);
  U_star_(); // U*
  D_plus_(); // D+
  Push(pp_NAV_dash_TIM); // NAV-TIM
  D_ex_(); // D!
}

// 0xe975: db 0x4c 0x22 0xce 0xd9 0x8f 0x3b 0x46 0x12 0xfa 0x15 0x08 0x00 0xc3 0x51 0x60 0x16 0x04 0x00 0xcf 0x51 0x90 0x16 0x4c 0x22 0x3f 0x7a 0x5d 0x17 0x18 0x00 0x20 0x0f 0x4c 0x7e 0x07 0x13 0xdf 0x79 0x90 0x16 'L"   ;F      Q`    Q  L"?z]     L~   y  '

// ================================================
// 0xe99d: WORD '?~C' codep=0x4b3b parp=0xe9a5
// ================================================
// 0xe9a5: db 0x03 0x00 0x22 0x0f 0x0b 0x00 0x8d 0xe9 0x12 0x00 0x77 0xe9 0x17 0x00 0x77 0xe9 '  "       w   w '

// ================================================
// 0xe9b5: WORD 'UNK_0xe9b7' codep=0x224c parp=0xe9b7
// ================================================

void UNK_0xe9b7() // UNK_0xe9b7
{
  Func8("UNK_0xda8a");
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) return;
  CI(); // CI
  Push(Pop() | Pop()); // OR
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe9cf: WORD 'NEST-SE' codep=0x4b3b parp=0xe9db
// ================================================
// 0xe9db: db 0x04 0x00 0x48 0x3a 0x01 0x00 0x26 0xdb 0x02 0x00 0xb7 0xe0 0x04 0x00 0x14 0xde 0x05 0x00 0x6e 0xde '  H:  &           n '

// ================================================
// 0xe9ef: WORD 'UNK_0xe9f1' codep=0x224c parp=0xe9f1
// ================================================

void UNK_0xe9f1() // UNK_0xe9f1
{
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda00); // UNK_0xda00
  Push(Read16(Pop())); // @
  OVER(); // OVER
  UNK_0xe63a(); // UNK_0xe63a
  _2DUP(); // 2DUP
  _gt_R(); // >R
  _gt_R(); // >R
  UNK_0xe516(); // UNK_0xe516
  R_gt_(); // R>
  R_gt_(); // R>
  Push(pp_UNK_0xda1e); // UNK_0xda1e
  _ex_(); // !
  Push(pp_UNK_0xda1a); // UNK_0xda1a
  _ex_(); // !
}


// ================================================
// 0xea1d: WORD 'NEST' codep=0x224c parp=0xea26
// ================================================

void NEST() // NEST
{
  Push(pp_UNK_0xd9fc); // UNK_0xd9fc
  _099(); // 099
  Push(pp__ro_SHIPBO); // (SHIPBO
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  UNK_0xd9a0(); // UNK_0xd9a0
  IEXTRAC(); // IEXTRAC
  UNK_0xe157(); // UNK_0xe157
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  IINSERT(); // IINSERT
  UNK_0xe17b(); // UNK_0xe17b
  CI(); // CI
  UNK_0xe1c2(); // UNK_0xe1c2
  UNK_0xe1e2(); // UNK_0xe1e2
  UNK_0xdaca(); // UNK_0xdaca
  Push(Read16(sp)); // DUP
  Push(0xc968);
  MODULE(); // MODULE
  Push(Read16(sp)); // DUP
  UNK_0xe9f1(); // UNK_0xe9f1
  Push(Read16(sp)); // DUP
  Case(NEST-SE);
  Push(Read16(sp)); // DUP
  Push(0xc994);
  MODULE(); // MODULE
  UNK_0xd996(); // UNK_0xd996
  UNK_0xdcc8(); // UNK_0xdcc8
  UNK_0xe2d7(); // UNK_0xe2d7
  Push(0xc95a);
  MODULE(); // MODULE
  UNK_0xdaca(); // UNK_0xdaca
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _dot_MVS(); // .MVS

  label1:
  UNK_0xe23b(); // UNK_0xe23b
  Push2Words("NULL");
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex_(); // 1.5!
  UNK_0xe8df(); // UNK_0xe8df
  Push(pp_FORCEKE); // FORCEKE
  _099(); // 099
}


// ================================================
// 0xea92: WORD 'UNK_0xea94' codep=0x224c parp=0xea94
// ================================================

void UNK_0xea94() // UNK_0xea94
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  _gt_FLAG(); // >FLAG
  Func8("UNK_0xda80");
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Func8("UNK_0xda85");
  Push(Read8(Pop())&0xFF); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  UNK_0xe9b7(); // UNK_0xe9b7
}

// 0xeab6: db 0x4c 0x22 0x1f 0x7a 0x8b 0x75 0x72 0xe8 0x92 0xea 0xf5 0x12 0x67 0xda 0x92 0x0c 0xf5 0x12 0xdf 0x79 0xfa 0x15 0x08 0x00 0x24 0xea 0x60 0x16 0x04 0x00 0xde 0x0d 0x90 0x16 0x4c 0x22 0x1f 0x7a 0x3f 0x7a 0x22 0x75 0x5d 0x17 0x18 0x00 0x5f 0x12 0x07 0x13 0xdf 0x79 0xfa 0x15 0x0c 0x00 0x8b 0x75 0xdf 0x79 0x24 0xea 0x60 0x16 0x04 0x00 0xdf 0x79 0x90 0x16 'L" z ur     g      y    $ `       L" z?z"u]   _    y     u y$ `    y  '

// ================================================
// 0xeafc: WORD 'UNK_0xeafe' codep=0x224c parp=0xeafe
// ================================================

void UNK_0xeafe() // UNK_0xeafe
{
  _at_INST_dash_C(); // @INST-C
  Push(0x003d);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xe874(); // UNK_0xe874
  UNK_0xea94(); // UNK_0xea94
  Push(Pop() & Pop()); // AND
  return;

  label1:
  Push(cc_TRUE); // TRUE
}

// 0xeb18: db 0x4c 0x22 0xb6 0x5b 0xae 0x0b 0xd6 0x97 0xc8 0x0d 0xfa 0x15 0x28 0x00 0x20 0x0f 0xb8 0x15 0xe4 0x96 0x49 0x94 0x5d 0x17 0xff 0x00 0x5f 0x12 0xfa 0x15 0x12 0x00 0x7f 0x3b 0xb9 0x94 0x69 0x94 0x79 0x94 0x1f 0x7a 0x2e 0x0f 0xf8 0x74 0xdf 0x79 0xd0 0x15 0xe0 0xff 0x90 0x16 'L" [        (       I ]   _     ;  i y  z.  t y      '

// ================================================
// 0xeb4e: WORD 'JMPSHP' codep=0x224c parp=0xeb59
// ================================================
// entry

void JMPSHP() // JMPSHP
{
  UNK_0xe959(); // UNK_0xe959
  Push(0); // 0
  Push(cc__8); // 8
  RRND(); // RRND
  Push(cc_UNK_0xd9d0); // UNK_0xd9d0
  Push(Pop()+1); // 1+
  UNK_0xe656(); // UNK_0xe656
  UNK_0xe516(); // UNK_0xe516
  UNK_0xdab4(); // UNK_0xdab4
  UNK_0xdaa8(); // UNK_0xdaa8
  UNK_0xe83e(); // UNK_0xe83e
  Push(pp__ask_NEB); // ?NEB
  _ex_(); // !
  _i_KEY(); // 'KEY
  Pop(); // DROP
}

// 0xeb79: db 0x4c 0x22 0x1f 0x7a 0x92 0xda 0x18 0xeb 0x5d 0xda 0xae 0x0b 0x62 0xda 0xae 0x0b 0x18 0xeb 0x5d 0x17 0x48 0xc5 0xd9 0x84 0x48 0x5f 0xae 0x0b 0x5d 0xda 0xae 0x0b 0x62 0xda 0xae 0x0b 0xdf 0x79 0x57 0xeb 0xa6 0xe3 0x90 0x16 0x4c 0x22 0xde 0x0d 0x5d 0x17 0x8f 0xc7 0xd9 0x84 0x90 0x16 'L" z    ]   b     ] H   H_  ]   b    yW     L"  ]       '

// ================================================
// 0xebb1: WORD 'COLLIDE' codep=0x4b3b parp=0xebbd
// ================================================
// 0xebbd: db 0x06 0x00 0xe0 0x0d 0x0b 0x00 0xda 0xea 0x12 0x00 0x26 0xea 0x17 0x00 0x26 0xea 0x2d 0x00 0x7b 0xeb 0x3d 0x00 0xb8 0xea 0x3c 0x00 0xa7 0xeb '          &   & - { =   <   '

// ================================================
// 0xebd9: WORD 'UNK_0xebdb' codep=0x224c parp=0xebdb
// ================================================

void UNK_0xebdb() // UNK_0xebdb
{
  UNK_0xdac0(); // UNK_0xdac0
  Push(cc_UNK_0xd9d0); // UNK_0xd9d0
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push2Words("NULL");
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_ex_(); // 1.5!
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  Push2Words("*SHIP");
  D_eq_(); // D=
  _at_ID(); // @ID
  Push(0x0033);
  Push(0x0083);
  WITHIN(); // WITHIN
  _at_IC(); // @IC
  NBCLR(); // NBCLR
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xdaca(); // UNK_0xdaca
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xeafe(); // UNK_0xeafe
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  _at_IL(); // @IL
  _at_IH(); // @IH
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_ex_(); // 1.5!

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffc2

  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  Push(pp_UNK_0xda14); // UNK_0xda14
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  _at_INST_dash_C(); // @INST-C
  Push(Read16(sp)); // DUP
  Push(0x0019);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label4;
  Push(Read16(sp)); // DUP
  Case(?~C);
  if (Pop() == 0) goto label5;
  Push(0x0096);
  Push(0x0fa0);
  Push(1); // 1
  _gt_SND(); // >SND

  label5:
  UNK_0xda94(); // UNK_0xda94
  UNK_0xdaa8(); // UNK_0xdaa8

  label4:
  ICLOSE(); // ICLOSE
  Push(1); // 1
  goto label6;

  label3:
  Push(0); // 0

  label6:
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xec7f: WORD 'UNK_0xec81' codep=0x224c parp=0xec81
// ================================================

void UNK_0xec81() // UNK_0xec81
{
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  Push(pp_UNK_0xda10); // UNK_0xda10
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(pp__ask_PORT); // ?PORT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  UNK_0xdaca(); // UNK_0xdaca
  Push(1); // 1
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  Push(Read16(sp)); // DUP
}

// 0xeca3: db 0x4c 0x22 0x07 0x76 0xfa 0x15 0x08 0x00 0xcf 0x51 0x60 0x16 0x0e 0x00 0x4f 0x7d 0x41 0x0e 0xfa 0x15 0x06 0x00 0x92 0xea 0xf5 0x12 0x90 0x16 'L" v     Q`   O}A           '

// ================================================
// 0xecbf: WORD 'UNK_0xecc1' codep=0x224c parp=0xecc1
// ================================================

void UNK_0xecc1() // UNK_0xecc1
{
  UNK_0xec81(); // UNK_0xec81
  if (Pop() == 0) goto label1;
  UNK_0xd9a8(); // UNK_0xd9a8
  IOPEN(); // IOPEN
  Push(0x003d);
  Push(0); // 0
  Push(0xeca5);
  SELECT_dash_(); // SELECT-
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label2;
  Func8("UNK_0xda69");
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label3;
  CI(); // CI
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_ex_(); // 1.5!
  Push(pp_UNK_0xda10); // UNK_0xda10
  ON(); // ON

  label3:
  Push(Pop() & Pop()); // AND

  label2:
  UNK_0xd9c8(); // UNK_0xd9c8
  Push(Pop() & Pop()); // AND

  label1:
  if (Pop() == 0) goto label4;
  Push(pp_UNK_0xda14); // UNK_0xda14
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  _at_INST_dash_C(); // @INST-C
  ICLOSE(); // ICLOSE
  Push(1); // 1
  return;

  label4:
  Push(0); // 0
}


// ================================================
// 0xed0f: WORD 'UNK_0xed11' codep=0x224c parp=0xed11
// ================================================

void UNK_0xed11() // UNK_0xed11
{
  UNK_0xec81(); // UNK_0xec81
  if (Pop() == 0) goto label1;
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xd9a8(); // UNK_0xd9a8
  IOPEN(); // IOPEN
  Push(0x000c);
  Push(0); // 0
  IFIND(); // IFIND
  Push(Pop() & Pop()); // AND
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label2;
  CI(); // CI
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_ex_(); // 1.5!
  Push(pp_UNK_0xda10); // UNK_0xda10
  ON(); // ON

  label2:
  UNK_0xd9c8(); // UNK_0xd9c8
  Push(Pop() & Pop()); // AND

  label1:
  if (Pop() == 0) goto label3;
  Push2Words("*SHIP-C");
  Push(0x0012);
  Push(1); // 1
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  Push(1); // 1
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !

  UNK_0x3f09("LAUNCH");
  LoadData("1BTN"); // from 'ANALYZE-TEXT'
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CUR(); // SET-CUR
  return;

  label3:
  Push(0); // 0
}


// ================================================
// 0xed72: WORD 'UNNEST-' codep=0x4b3b parp=0xed7e
// ================================================
// 0xed7e: db 0x04 0x00 0x48 0x3a 0x01 0x00 0x54 0xdb 0x02 0x00 0xd9 0xe0 0x04 0x00 0xae 0xdd 0x05 0x00 0x8a 0xde '  H:  T             '

// ================================================
// 0xed92: WORD 'UNK_0xed94' codep=0x224c parp=0xed94
// ================================================

void UNK_0xed94() // UNK_0xed94
{
  Push(cc__5); // 5
  _st_(); // <
  if (Pop() == 0) return;
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda08); // UNK_0xda08
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda0c); // UNK_0xda0c
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  PICK(); // PICK
  Push(cc_UNK_0xd9d0); // UNK_0xd9d0
  Push(Pop()+1); // 1+
  UNK_0xe656(); // UNK_0xe656
  UNK_0xe516(); // UNK_0xe516
}


// ================================================
// 0xedb6: WORD 'UNK_0xedb8' codep=0x224c parp=0xedb8
// ================================================

void UNK_0xedb8() // UNK_0xedb8
{
  UNK_0xdb1c(); // UNK_0xdb1c
  Push(pp__ask_AF); // ?AF
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(cc_FALSE); // FALSE
  return;

  label1:
  _at_INST_dash_C(); // @INST-C
  Push(0x003d);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  UNK_0xdab4(); // UNK_0xdab4
  Push(pp_UNK_0xda00); // UNK_0xda00
  Push(Read16(Pop())); // @
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
  Push(Read16(sp)); // DUP
  _gt_R(); // >R
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label3;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Pop(); // DROP
  i++;
  } while(i<imax); // (LOOP) 0xfffc


  label3:
  R_gt_(); // R>
  Push(1); // 1
  _eq_(); // =
  return;

  label2:
  UNK_0xdab4(); // UNK_0xdab4
  ABS(); // ABS
  SWAP(); // SWAP
  ABS(); // ABS
  MAX(); // MAX
  Push(pp_UNK_0xda00); // UNK_0xda00
  Push(Read16(Pop())); // @
  _gt_(); // >
}


// ================================================
// 0xee12: WORD 'UNK_0xee14' codep=0x224c parp=0xee14
// ================================================

void UNK_0xee14() // UNK_0xee14
{
  Push(pp_UNK_0xda10); // UNK_0xda10
  Push(Read16(Pop())); // @
  Push(pp_SKIP2NE); // SKIP2NE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xdaca(); // UNK_0xdaca
  Push(1); // 1
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  Push(pp_UNK_0xd9fc); // UNK_0xd9fc
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  Push(pp__ask_AF); // ?AF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xee3a: WORD 'UNNEST' codep=0x224c parp=0xee45
// ================================================
// entry

void UNNEST() // UNNEST
{
  Push(pp__ro_SHIPBO); // (SHIPBO
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  UNK_0xd9a0(); // UNK_0xd9a0
  IEXTRAC(); // IEXTRAC
  ICLOSE(); // ICLOSE
  UNK_0xdaca(); // UNK_0xdaca
  _gt_R(); // >R
  Push(h); // I
  Push(0xc94c);
  MODULE(); // MODULE
  Push(h); // I
  Case(UNNEST-);
  UNK_0xe157(); // UNK_0xe157
  ICLOSE(); // ICLOSE
  CI(); // CI
  IINSERT(); // IINSERT
  UNK_0xe17b(); // UNK_0xe17b
  CI(); // CI
  UNK_0xe1c2(); // UNK_0xe1c2
  UNK_0xe1e2(); // UNK_0xe1e2
  UNK_0xdcc8(); // UNK_0xdcc8
  Push(h); // I
  UNK_0xed94(); // UNK_0xed94
  UNK_0xdaf2(); // UNK_0xdaf2
  UNK_0xd996(); // UNK_0xd996
  UNK_0xdaca(); // UNK_0xdaca
  Push(0xc994);
  MODULE(); // MODULE
  UNK_0xe2d7(); // UNK_0xe2d7
  R_gt_(); // R>
  Push(0xc93e);
  MODULE(); // MODULE
  _dot_MVS(); // .MVS
  UNK_0xe23b(); // UNK_0xe23b
  Push(pp_UNK_0xda26); // UNK_0xda26
  _at_EXECUTE(); // @EXECUTE
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex_(); // 1.5!
  Push(pp_SKIP2NE); // SKIP2NE
  _099(); // 099
  UNK_0xe8df(); // UNK_0xe8df
  Push(pp_FORCEKE); // FORCEKE
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(pp_FORCEKE); // FORCEKE
  _ex_(); // !
  Push2Words("NULL");
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xeeb9: WORD 'UNK_0xeebb' codep=0x224c parp=0xeebb
// ================================================

void UNK_0xeebb() // UNK_0xeebb
{
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() == 0) return;
  Push(0); // 0
  MAX(); // MAX
  Push(0x00db);
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  SWAP(); // SWAP
  Push(0); // 0
  MAX(); // MAX
  Push(0x00f9);
  Push(cc__star_MAPSCA); // *MAPSCA
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  SWAP(); // SWAP
}


// ================================================
// 0xeee3: WORD '(GET-AU' codep=0x224c parp=0xeeef
// ================================================
// entry

void _ro_GET_dash_AU() // (GET-AU
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _dot_AUXSYS(); // .AUXSYS
}


// ================================================
// 0xef01: WORD 'UNK_0xef03' codep=0x224c parp=0xef03
// ================================================

void UNK_0xef03() // UNK_0xef03
{
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xd9a0(); // UNK_0xd9a0
  Func8("UNK_0xda5a");
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  Push(pp__ask_3); // ?3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Push(0); // 0

  label2:
  if (Pop() == 0) return;
  Push(0xc636);
  MODULE(); // MODULE
}


// ================================================
// 0xef33: WORD 'UNK_0xef35' codep=0x224c parp=0xef35
// ================================================

void UNK_0xef35() // UNK_0xef35
{
  UNK_0xedb8(); // UNK_0xedb8
  UNK_0xee14(); // UNK_0xee14
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNNEST(); // UNNEST

  label1:
  UNK_0xebdb(); // UNK_0xebdb
  _gt_R(); // >R
  UNK_0xecc1(); // UNK_0xecc1
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  _gt_R(); // >R
  UNK_0xed11(); // UNK_0xed11
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Case(COLLIDE);
}


// ================================================
// 0xef5b: WORD 'FLY' codep=0x224c parp=0xef63
// ================================================
// entry

void FLY() // FLY
{
  UNK_0xe6ae(); // UNK_0xe6ae
  UNK_0xeebb(); // UNK_0xeebb
  UNK_0xe516(); // UNK_0xe516
  UNK_0xe7b0(); // UNK_0xe7b0
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() == 0) goto label1;
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xda2e); // UNK_0xda2e
  _ex_(); // !
  UNK_0xe83e(); // UNK_0xe83e
  Push(pp__ask_NEB); // ?NEB
  _ex_(); // !

  label1:
  UNK_0xef03(); // UNK_0xef03
  _dot_MVS(); // .MVS
  UNK_0xef35(); // UNK_0xef35
}


// ================================================
// 0xef87: WORD 'UNK_0xef89' codep=0x224c parp=0xef89
// ================================================

void UNK_0xef89() // UNK_0xef89
{
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc_UNK_0xd9e4); // UNK_0xd9e4
  Push(-Pop()); // NEGATE
  Push(0x000c);
  _dash_(); // -
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() * Pop()); // *
  MAX(); // MAX
  Push(cc__star_MAPSCA); // *MAPSCA
}


// ================================================
// 0xefa3: WORD 'SET-DES' codep=0x224c parp=0xefaf
// ================================================

void SET_dash_DES() // SET-DES
{
  Push(Read16(sp)); // DUP
  Push(0x0152);
  _eq_(); // =
  OVER(); // OVER
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp_FORCEKE); // FORCEKE
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(pp_SKEY); // SKEY
  Push(Read16(Pop())); // @
  Push(0x005b);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(sp)); // DUP
  Push(pp_FORCEKE); // FORCEKE
  _ex_(); // !
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(pp_SKEY); // SKEY
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(pp_LKEY); // LKEY
  _ex_(); // !

  label1:
  Case((XYSCAN);
  Push(pp_SKEY); // SKEY
  Push(Read16(Pop())); // @
  Push(0x005b);
  _gt_(); // >
  if (Pop() == 0) goto label2;
  UNK_0xe905(); // UNK_0xe905
  goto label3;

  label2:
  UNK_0xe941(); // UNK_0xe941

  label3:
  Push(pp_KEYINC); // KEYINC
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(pp_XABS); // XABS
  UNK_0xef89(); // UNK_0xef89
  Push(0x00f9);
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  Push(pp_UNK_0xda1a); // UNK_0xda1a
  _ex_(); // !
  Push(Pop() * Pop()); // *
  Push(pp_YABS); // YABS
  UNK_0xef89(); // UNK_0xef89
  Push(0x00db);
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  Push(pp_UNK_0xda1e); // UNK_0xda1e
  _ex_(); // !
  Push(pp_FORCEKE); // FORCEKE
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) goto label4;
  Push(pp_FORCEKE); // FORCEKE
  _099(); // 099

  label4:
  Push(pp_FTRIG); // FTRIG
  Push(Read16(Pop())); // @
  Push2Words("NULL");
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D_eq_(); // D=
  UNK_0xdb1c(); // UNK_0xdb1c
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(pp__ask_AUTO); // ?AUTO
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label5;
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _i_KEY(); // 'KEY
  Pop(); // DROP

  label5:
  FLY(); // FLY
}


// ================================================
// 0xf05d: WORD 'SETUP-M' codep=0x224c parp=0xf069
// ================================================

void SETUP_dash_M() // SETUP-M
{
  Push(pp_FORCEPT); // FORCEPT
  ON(); // ON
  Push(pp_FORCEKE); // FORCEKE
  _099(); // 099
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_VSTIME); // VSTIME
  D_ex_(); // D!
  Push(0xb033);
  Push(pp__i_VEHICL); // 'VEHICL
  _ex_(); // !
  Push(0xc0f9);
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _ex_(); // !
  Push(pp__ask_AUTO); // ?AUTO
  _099(); // 099
  UNK_0xd9a0(); // UNK_0xd9a0
  Func8("UNK_0xda37");
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_HEADING); // HEADING
  _ex_(); // !
  Push(0xb6ec);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  UNK_0xe8df(); // UNK_0xe8df
  UNK_0xdaca(); // UNK_0xdaca
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(cc__6); // 6
  Push(0xc94c);
  MODULE(); // MODULE

  label1:
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Func8("UNK_0xdbed");
  _at__gt_C_plus_S(); // @>C+S
  Func8("UNK_0xdbf2");
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xda22); // UNK_0xda22
  _ex_(); // !
  UNK_0xd9c8(); // UNK_0xd9c8
  UNK_0xd996(); // UNK_0xd996
  UNK_0xdcc8(); // UNK_0xdcc8
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  UNK_0xdab4(); // UNK_0xdab4
  UNK_0xdaca(); // UNK_0xdaca
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(cc__6); // 6
  Push(0xc93e);
  MODULE(); // MODULE
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  Push(1); // 1
  UNK_0xe656(); // UNK_0xe656
  UNK_0xe516(); // UNK_0xe516
  goto label3;

  label2:
  UNK_0xe4a6(); // UNK_0xe4a6

  label3:
  UNK_0xdaf2(); // UNK_0xdaf2
  FLY(); // FLY
}


// ================================================
// 0xf0f7: WORD 'CLEANUP' codep=0x224c parp=0xf103
// ================================================

void CLEANUP() // CLEANUP
{
  Push(pp_FORCEPT); // FORCEPT
  _099(); // 099
  Push(pp_FORCEKE); // FORCEKE
  _099(); // 099
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Func8("INST-QT");
  _ex_(); // !

  label1:
  Push(0xb6ec);
  MODULE(); // MODULE
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
  Push(pp_UNK_0xd9fc); // UNK_0xd9fc
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xdaca(); // UNK_0xdaca
  Push(1); // 1
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  ORBUP(); // ORBUP

  label2:
  Push(pp_UNK_0xd9fc); // UNK_0xd9fc
  _099(); // 099
  UNK_0xdae8(); // UNK_0xdae8
  if (Pop() == 0) goto label3;
  Push(0xc985);
  MODULE(); // MODULE

  label3:
  Push(0xc39d);
  Push(pp__i_VEHICL); // 'VEHICL
  _ex_(); // !
  Push(pp__ask_AUTO); // ?AUTO
  ON(); // ON
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf17d: WORD 'CHK-MOV' codep=0x224c parp=0xf189
// ================================================
// entry

void CHK_dash_MOV() // CHK-MOV
{
  Push(0); // 0
  Push2Words("*STARSH");
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
  Func8("INST-QT");
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(0x000a);
  U_star_(); // U*
  CDROP(); // CDROP
  goto label2;

  label1:
  Push2Words("NULL");

  label2:
  _2DUP(); // 2DUP
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  UNK_0xd9c8(); // UNK_0xd9c8
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(cc__5); // 5
  Push(0xb77c);
  MODULE(); // MODULE
  if (Pop() == 0) goto label4;
  UNK_0xdaca(); // UNK_0xdaca
  Push(1); // 1
  Push(cc__5); // 5
  WITHIN(); // WITHIN
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label5;
  CTINIT(); // CTINIT

  UNK_0x3f09("STANDING BY TO LAUNCH");
  _dot_TTY(); // .TTY
  goto label4;

  label5:
  Push(Pop()+1); // 1+

  label4:
  return;

  label3:
  Push(1); // 1
  Push(0xc976);
  MODULE(); // MODULE
}


// ================================================
// 0xf217: WORD 'UNK_0xf219' codep=0x224c parp=0xf219
// ================================================

void UNK_0xf219() // UNK_0xf219
{
  UNK_0xdaca(); // UNK_0xdaca
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(pp_CONTEXT); // CONTEXT
  _ex_(); // !

  label1:
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  Push(1); // 1
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !

  UNK_0x3f09("LAUNCH");
  LoadData("1BTN"); // from 'ANALYZE-TEXT'
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf248: WORD '+NEST' codep=0x224c parp=0xf252
// ================================================
// entry

void _plus_NEST() // +NEST
{
  _2DUP(); // 2DUP
  Push(pp_UNK_0xda14); // UNK_0xda14
  _1_dot_5_ex_(); // 1.5!
  NEST(); // NEST
}


// ================================================
// 0xf25c: WORD 'COME-HI' codep=0x224c parp=0xf268
// ================================================
// entry

void COME_dash_HI() // COME-HI
{
  SetColor("BLUE");
  Push(pp_TCLR); // TCLR
  _ex_(); // !
  UNK_0xf219(); // UNK_0xf219
  Push2Words("NULL");
  Push(pp_HAZE); // HAZE
  D_ex_(); // D!

  label2:
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ASYS");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xdaca(); // UNK_0xdaca
  Push(2); // 2
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNNEST(); // UNNEST
  goto label2;

  label1:
  Push(pp__ask_NEB); // ?NEB
  _099(); // 099
  UNK_0xdb1c(); // UNK_0xdb1c
  if (Pop() == 0) goto label3;
  Push2Words("*ASYS");
  _plus_NEST(); // +NEST

  label3:
  UNK_0xd9b8(); // UNK_0xd9b8
  IOPEN(); // IOPEN

  label5:
  Func8("INST-QT");
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label4;
  INEXT(); // INEXT
  goto label5;

  label4:
  CI(); // CI
  UNK_0xd9c8(); // UNK_0xd9c8
  _plus_NEST(); // +NEST
  Push2Words("*SHIP-C");
  _plus_NEST(); // +NEST
  SetColor("WHITE");
  Push(pp_TCLR); // TCLR
  _ex_(); // !
}

// 0xf2d0: db 0x53 0x48 0x50 0x4d 0x4f 0x56 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x49 0x58 0x20 0x2d 0x5c 0x20 0x48 0x59 0x50 0x45 0x52 0x20 0x20 0x20 0x4f 0x56 0x52 0x2d 0x20 0x72 0x66 0x67 0x31 0x33 0x73 0x65 0x70 0x38 0x39 0x20 0x29 0x8e 0x32 0x34 0x34 0x30 0x15 0xc0 0xff 0xf2 0x5f 0xae 0x0b 0xc1 0x54 0x16 0x6d 0x8e 0xf2 0xae 0x0b 0xfa 0x15 0x08 0x00 0x09 0x59 0xae 0x0b 0xd9 0x84 0x90 0x16 0x4c 0x22 0xb3 0x54 0xae 0x0b 0x90 0x16 0x14 0x22 0x48 0x3a 0x4c 0x22 0x5d 0x17 0x81 0xae 0x90 0x16 0x30 0xef 0x85 0x40 0x27 0x45 0x58 0xd4 0x3b 0x4b 0x03 0x00 0x39 0xf3 0x02 0x00 0x31 0xf3 0x03 0x00 0x31 0xf3 0x04 0x00 0x3d 0xf3 0xb3 0xf0 0x87 0x28 0x21 0x27 0x45 0x58 0x54 0xa9 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0x4b 0xf3 0xf1 0x60 0x16 0x6d 0x90 0x16 0x94 0xf2 0x87 0x2b 0x41 0x2d 0x56 0x45 0x53 0xd3 0x4c 0x22 0xcf 0x64 0x2f 0x7a 0xc1 0xe6 0x92 0x0c 0x41 0x0e 0x25 0x10 0xf2 0x0e 0xe7 0x0f 0xc4 0x4b 0x2e 0x0f 0x89 0x11 0xda 0xe6 0x92 0x0c 0x41 0x0e 0xdf 0xe6 0x92 0x0c 0xb3 0x0e 0x5d 0x17 0xff 0x00 0x46 0x12 0xb3 0x0f 0x92 0x0f 0xad 0x11 0x5d 0x17 0x14 0x00 0xe8 0x55 0xae 0x0b 0x92 0x0f 0xad 0x11 0x41 0x0e 0xe8 0x55 0x23 0x6d 0x41 0x0e 0x3b 0x59 0x23 0x6d 0x20 0x0f 0xb8 0x15 0x5d 0x17 0x19 0x00 0x20 0x0f 0x87 0x3b 0xc4 0x4b 0x02 0xe7 0x92 0x0c 0xc8 0x0d 0xfa 0x15 0xf2 0xff 0x9a 0xe7 0xd0 0x15 0xe8 0xff 0xca 0xe7 0xdf 0x79 0x4d 0x62 0xae 0x0b 0xfa 0x15 0x0e 0x00 0x5d 0x17 0x78 0xec 0x41 0x0e 0x3f 0x64 0x4c 0x6d 0x96 0x99 0x90 0x16 0x4c 0x22 0x8f 0x64 0x2f 0x7a 0x90 0x16 0x4c 0x22 0xf2 0x0e 0xbb 0x74 0x4c 0x6d 0x90 0x16 0x4c 0x22 0x22 0x75 0x41 0x0e 0x5d 0x17 0x18 0x00 0x5f 0x12 0xf2 0x0e 0x5d 0x17 0x20 0x00 0x5f 0x12 0x3e 0x13 0x90 0x16 0x20 0x74 0x17 0x11 0x01 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x4c 0x22 0xaf 0x3b 0x2e 0xf4 0xae 0x0b 0xe7 0x0f 0xb8 0x15 0x50 0x0e 0x13 0x4a 0x32 0xf4 0xae 0x0b 0xf5 0x12 0xfa 0x15 0x0a 0x00 0x50 0x0e 0x2e 0xf4 0x16 0x6d 0x4a 0x17 0xd0 0x15 0xe8 0xff 0x2e 0xf4 0xae 0x0b 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x20 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0x36 0xf4 0x60 0x16 0x04 0x00 0x20 0x0f 0x5d 0x17 0x0b 0x00 0x87 0x3b 0xa9 0x81 0x2d 0x7c 0xdb 0x3f 0xa9 0x7b 0x07 0x76 0xfa 0x15 0x0c 0x00 0xb5 0x75 0xa9 0x7b 0xe2 0x7a 0x60 0x16 0x16 0x00 0x8b 0x75 0xf1 0x7b 0x8d 0x7a 0xfa 0x15 0x0a 0x00 0xc9 0x7a 0x9e 0x7e 0x60 0x16 0x04 0x00 0xc9 0x7a 0xad 0x74 0x16 0x6d 0x90 0x16 0x4c 0x22 0x3f 0x7a 0x18 0x76 0xfa 0x15 0x1c 0x00 0x2d 0x7c 0xb5 0x75 0xf1 0x7b 0xdf 0x79 0x8d 0x7a 0xfa 0x15 0x08 0x00 0xc9 0x7a 0x9e 0x7e 0xb1 0x7a 0x3f 0x7a 0x60 0x16 0xe2 0xff 0xdf 0x79 0x1e 0x7f 0x90 0x16 0x45 0xf3 0x87 0x3e 0x4f 0x52 0x42 0x49 0x54 0xd3 0x4c 0x22 0x2e 0xf4 0x65 0x6d 0xff 0xf3 0x29 0xf4 0x92 0x0c 0x32 0xf4 0x16 0x6d 0x3f 0x7a 0x5d 0x17 0x13 0xf4 0x5d 0x17 0x64 0xf4 0xa9 0x7f 0x64 0xe6 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x0b 0x00 0x5f 0x12 0x34 0x75 0x87 0x3b 0x5f 0x12 0xf5 0x12 0xfa 0x15 0x08 0x00 0xb0 0xf4 0x60 0x16 0x04 0x00 0xb1 0x7a 0x90 0x16 0x5f 0xf3 0x87 0x4f 0x52 0x42 0x49 0x54 0x53 0xbe 0x4c 0x22 0xff 0xf3 0x3f 0x7a 0x7a 0x7a 0x07 0x13 0xfa 0x15 0x08 0x00 0x04 0xf5 0x60 0x16 0xf4 0xff 0x18 0x76 0xfa 0x15 0x04 0x00 0x04 0xf5 0x64 0xe6 0x90 0x16 0x48 0x4d 0x49 0x53 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SHPMOV-_________________________IX -\ HYPER   OVR- rfg13sep89 ) 2440    _   T m         Y      L" T     "H:L"]     0  @'EX ;K  9   1   1   =    (!'EXT L"*\  K  ` m     +A-VES L" d/z    A %      K.       A       ]   F       ]    U      A  U#mA ;Y#m    ]      ; K                   yMb      ] x A ?dLm    L" d/z  L"   tLm  L""uA ]   _   ]   _ >    t   ) : ) : L" ;.       P  J2         P .  mJ     .     L""u]   _     6 `     ]    ;  -| ? { v     u { z`    u { z     z ~`    z t m  L"?z v    -| u { y z     z ~ z?z`    y   E  >ORBIT L". em  )   2  m?z]   ] d  d   L""u]   _ 4u ;_         `    z  _  ORBITS L"  ?zzz        `    v      d   HMISC-VOC_________ '
  