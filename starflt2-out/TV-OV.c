// ====== OVERLAY 'TV-OV' ======

#include"interface.h"

// store offset = 0xe6d0
// overlay size   = 0x0e90

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:           ORBIT  codep:0x1ab5 parp:0xbd09 size:0x0014 C-string:'ORBIT'
// 1870:           ORBIT  codep:0x83dd parp:0xbd27 size:0x0002 C-string:'ORBIT'
// 1871:           INIT-  codep:0x224c parp:0xbd33 size:0x0008 C-string:'INIT_minus_'
// 1872:           SHOWS  codep:0x224c parp:0xbd45 size:0x0006 C-string:'SHOWS'
// 1873:           DESCE  codep:0x224c parp:0xbd55 size:0x0008 C-string:'DESCE'
// 1874:           ASCEN  codep:0x224c parp:0xbd67 size:0x0008 C-string:'ASCEN'
// 1875:           ROTAT  codep:0x224c parp:0xbd79 size:0x0008 C-string:'ROTAT'
// 1876:           SEEGR  codep:0x224c parp:0xbd8b size:0x0006 C-string:'SEEGR'
// 1877:           MROTA  codep:0x224c parp:0xbd9b size:0x0008 C-string:'MROTA'
// 1878:         CULTURE  codep:0x1ab5 parp:0xbdaf size:0x0014 C-string:'CULTURE'
// 1879:          CULTUR  codep:0x83dd parp:0xbdce size:0x0002 C-string:'CULTUR'
// 1880:           .CULT  codep:0x224c parp:0xbdda size:0x0006 C-string:'_dot_CULT'
// 1881:           .RACE  codep:0x224c parp:0xbdea size:0x0006 C-string:'_dot_RACE'
// 1882:          DESCRI  codep:0x1ab5 parp:0xbdfb size:0x0014 C-string:'DESCRI'
// 1883:           DESCR  codep:0x83dd parp:0xbe19 size:0x0002 C-string:'DESCR'
// 1884:           DO-LO  codep:0x224c parp:0xbe25 size:0x0006 C-string:'DO_minus_LO'
// 1885:           .LIFE  codep:0x224c parp:0xbe35 size:0x0006 C-string:'_dot_LIFE'
// 1886:           .HUFF  codep:0x224c parp:0xbe45 size:0x0006 C-string:'_dot_HUFF'
// 1887:           .AHUF  codep:0x224c parp:0xbe55 size:0x0006 C-string:'_dot_AHUF'
// 1888:            SSCN  codep:0x224c parp:0xbe64 size:0x0006 C-string:'SSCN'
// 1889:           ?COMS  codep:0x224c parp:0xbe74 size:0x0006 C-string:'_ask_COMS'
// 1890:           SSCAN  codep:0x224c parp:0xbe84 size:0x0008 C-string:'SSCAN'
// 1891:           CPAUS  codep:0x224c parp:0xbe96 size:0x0006 C-string:'CPAUS'
// 1892:        COMM-VOC  codep:0x1ab5 parp:0xbea9 size:0x0014 C-string:'COMM_minus_VOC'
// 1893:         COMM-OV  codep:0x83dd parp:0xbec9 size:0x0002 C-string:'COMM_minus_OV'
// 1894:         OVINIT-  codep:0x224c parp:0xbed7 size:0x0010 C-string:'OVINIT_minus_'
// 1895:          U-COMM  codep:0x224c parp:0xbef2 size:0x0008 C-string:'U_minus_COMM'
// 1896:         COMM-EX  codep:0x224c parp:0xbf06 size:0x0008 C-string:'COMM_minus_EX'
// 1897:             A>O  codep:0x224c parp:0xbf16 size:0x0008 C-string:'A_gt_O'
// 1898:             O>C  codep:0x224c parp:0xbf26 size:0x0008 C-string:'O_gt_C'
// 1899:           >HAIL  codep:0x224c parp:0xbf38 size:0x0006 C-string:'_gt_HAIL'
// 1900:         OV+!EDL  codep:0x224c parp:0xbf4a size:0x0008 C-string:'OV_plus__ex_EDL'
// 1901:         OVEDL+A  codep:0x224c parp:0xbf5e size:0x0008 C-string:'OVEDL_plus_A'
// 1902:            P>CT  codep:0x224c parp:0xbf6f size:0x0008 C-string:'P_gt_CT'
// 1903:            CTUP  codep:0x224c parp:0xbf80 size:0x0006 C-string:'CTUP'
// 1904:            1SYL  codep:0x224c parp:0xbf8f size:0x0006 C-string:'_1SYL'
// 1905:         MCOMM-E  codep:0x224c parp:0xbfa1 size:0x0008 C-string:'MCOMM_minus_E'
// 1906:         MEDL+AU  codep:0x224c parp:0xbfb5 size:0x0008 C-string:'MEDL_plus_AU'
// 1907:          DA-STR  codep:0x224c parp:0xbfc8 size:0x0008 C-string:'DA_minus_STR'
// 1908:           EDL>P  codep:0x224c parp:0xbfda size:0x0006 C-string:'EDL_gt_P'
// 1909:           BLDLI  codep:0x1ab5 parp:0xbfea size:0x0014 C-string:'BLDLI'
// 1910:           BLDLI  codep:0x83dd parp:0xc008 size:0x0002 C-string:'BLDLI'
// 1911:           BLDLI  codep:0x224c parp:0xc014 size:0x0006 C-string:'BLDLI'
// 1912:           SET-C  codep:0x224c parp:0xc024 size:0x0006 C-string:'SET_minus_C'
// 1913:             T>O  codep:0x224c parp:0xc032 size:0x0006 C-string:'T_gt_O'
// 1914:           !TAMT  codep:0x224c parp:0xc042 size:0x0006 C-string:'_ex_TAMT'
// 1915:           @TAMT  codep:0x224c parp:0xc052 size:0x0006 C-string:'_at_TAMT'
// 1916:         SCI-VOC  codep:0x1ab5 parp:0xc064 size:0x0014 C-string:'SCI_minus_VOC'
// 1917:          SCI-OV  codep:0x83dd parp:0xc083 size:0x0002 C-string:'SCI_minus_OV'
// 1918:          OV/STA  codep:0x224c parp:0xc090 size:0x0006 C-string:'OV_slash_STA'
// 1919:          OV/STX  codep:0x224c parp:0xc0a1 size:0x0006 C-string:'OV_slash_STX'
// 1920:          OVSTAR  codep:0x224c parp:0xc0b2 size:0x0008 C-string:'OVSTAR'
// 1921:          OV/SEN  codep:0x224c parp:0xc0c5 size:0x0006 C-string:'OV_slash_SEN'
// 1922:          ?HEAVY  codep:0x224c parp:0xc0d6 size:0x0006 C-string:'_ask_HEAVY'
// 1923:          /STARD  codep:0x224c parp:0xc0e7 size:0x0008 C-string:'_slash_STARD'
// 1924:           .SORD  codep:0x224c parp:0xc0f9 size:0x0024 C-string:'_dot_SORD'
// 1925:          HEALTI  codep:0x1d29 parp:0xc128 size:0x0002 C-string:'HEALTI'
// 1926:          LASTAP  codep:0x1d29 parp:0xc135 size:0x0004 C-string:'LASTAP'
// 1927:          ROSTER  codep:0x1d29 parp:0xc144 size:0x0012 C-string:'ROSTER'
// 1928:          HEALER  codep:0x1ab5 parp:0xc161 size:0x0014 C-string:'HEALER'
// 1929:          HEAL-O  codep:0x83dd parp:0xc180 size:0x0002 C-string:'HEAL_minus_O'
// 1930:            (OBI  codep:0x224c parp:0xc18b size:0x0006 C-string:'_ro_OBI'
// 1931:            (.VI  codep:0x224c parp:0xc19a size:0x0006 C-string:'_ro__dot_VI'
// 1932:            (HEA  codep:0x224c parp:0xc1a9 size:0x0166 C-string:'_ro_HEA'
// 1933:      UNK_0xc311  codep:0x0000 parp:0xc311 size:0x002a C-string:'UNK_0xc311'
// 1934:      UNK_0xc33d  codep:0x3e23 parp:0xc33d size:0x00c3 C-string:'UNK_0xc33d'
// 1935:      UNK_0xc402  codep:0x0000 parp:0xc402 size:0x000d C-string:'UNK_0xc402'
// 1936:      UNK_0xc411  codep:0x4289 parp:0xc411 size:0x005c C-string:'UNK_0xc411'
// 1937:      UNK_0xc46f  codep:0x3e4c parp:0xc46f size:0x0030 C-string:'UNK_0xc46f'
// 1938:      UNK_0xc4a1  codep:0xbc83 parp:0xc4a1 size:0x0050 C-string:'UNK_0xc4a1'
// 1939:      UNK_0xc4f3  codep:0xf4f3 parp:0xc4f3 size:0x012f C-string:'UNK_0xc4f3'
// 1940:      UNK_0xc624  codep:0xd528 parp:0xc624 size:0x0a2e C-string:'UNK_0xc624'
// 1941:      UNK_0xd054  codep:0x0000 parp:0xd054 size:0x0247 C-string:'UNK_0xd054'
// 1942:      UNK_0xd29d  codep:0x6a16 parp:0xd29d size:0x0475 C-string:'UNK_0xd29d'
// 1943:      UNK_0xd714  codep:0x0000 parp:0xd714 size:0x000e C-string:'UNK_0xd714'
// 1944:      UNK_0xd724  codep:0x0000 parp:0xd724 size:0x00eb C-string:'UNK_0xd724'
// 1945:      UNK_0xd811  codep:0x0000 parp:0xd811 size:0x01bf C-string:'UNK_0xd811'
// 1946:      UNK_0xd9d2  codep:0x0000 parp:0xd9d2 size:0x012e C-string:'UNK_0xd9d2'
// 1947:      UNK_0xdb02  codep:0x0000 parp:0xdb02 size:0x000c C-string:'UNK_0xdb02'
// 1948:      UNK_0xdb10  codep:0x0000 parp:0xdb10 size:0x003c C-string:'UNK_0xdb10'
// 1949:      UNK_0xdb4e  codep:0x0000 parp:0xdb4e size:0x019b C-string:'UNK_0xdb4e'
// 1950:      UNK_0xdceb  codep:0x0000 parp:0xdceb size:0x09f9 C-string:'UNK_0xdceb'
// 1951:      UNK_0xe6e6  codep:0x2214 parp:0xe6e6 size:0x0002 C-string:'UNK_0xe6e6'
// 1952:      UNK_0xe6ea  codep:0x224c parp:0xe6ea size:0x004e C-string:'UNK_0xe6ea'
// 1953:      UNK_0xe73a  codep:0x7420 parp:0xe73a size:0x002c C-string:'UNK_0xe73a'
// 1954:      UNK_0xe768  codep:0x7420 parp:0xe768 size:0x0005 C-string:'UNK_0xe768'
// 1955:      UNK_0xe76f  codep:0xe75e parp:0xe76f size:0x0040 C-string:'UNK_0xe76f'
// 1956:        DISPOSAL  codep:0x4b3b parp:0xe7bc size:0x0024 C-string:'DISPOSAL'
// 1957:      UNK_0xe7e2  codep:0x224c parp:0xe7e2 size:0x0018 C-string:'UNK_0xe7e2'
// 1958:      UNK_0xe7fc  codep:0x224c parp:0xe7fc size:0x000c C-string:'UNK_0xe7fc'
// 1959:      UNK_0xe80a  codep:0x224c parp:0xe80a size:0x0018 C-string:'UNK_0xe80a'
// 1960:      UNK_0xe824  codep:0x224c parp:0xe824 size:0x002c C-string:'UNK_0xe824'
// 1961:      UNK_0xe852  codep:0x224c parp:0xe852 size:0x0008 C-string:'UNK_0xe852'
// 1962:      UNK_0xe85c  codep:0x224c parp:0xe85c size:0x0010 C-string:'UNK_0xe85c'
// 1963:      UNK_0xe86e  codep:0x224c parp:0xe86e size:0x0026 C-string:'UNK_0xe86e'
// 1964:      UNK_0xe896  codep:0x224c parp:0xe896 size:0x0050 C-string:'UNK_0xe896'
// 1965:      UNK_0xe8e8  codep:0x224c parp:0xe8e8 size:0x0008 C-string:'UNK_0xe8e8'
// 1966:      UNK_0xe8f2  codep:0x224c parp:0xe8f2 size:0x0014 C-string:'UNK_0xe8f2'
// 1967:      UNK_0xe908  codep:0x224c parp:0xe908 size:0x0016 C-string:'UNK_0xe908'
// 1968:      UNK_0xe920  codep:0x224c parp:0xe920 size:0x0014 C-string:'UNK_0xe920'
// 1969:      UNK_0xe936  codep:0x224c parp:0xe936 size:0x0012 C-string:'UNK_0xe936'
// 1970:      UNK_0xe94a  codep:0x224c parp:0xe94a size:0x0010 C-string:'UNK_0xe94a'
// 1971:      UNK_0xe95c  codep:0x009b parp:0xe95c size:0x0001 C-string:'UNK_0xe95c'
// 1972:      UNK_0xe95f  codep:0xe95d parp:0xe95f size:0xffffffff C-string:'UNK_0xe95f'
// 1973:      UNK_0xe960  codep:0x4ce9 parp:0xe960 size:0x0078 C-string:'UNK_0xe960'
// 1974:      UNK_0xe9da  codep:0x224c parp:0xe9da size:0x001e C-string:'UNK_0xe9da'
// 1975:      UNK_0xe9fa  codep:0x224c parp:0xe9fa size:0x0048 C-string:'UNK_0xe9fa'
// 1976:      UNK_0xea44  codep:0x224c parp:0xea44 size:0x000f C-string:'UNK_0xea44'
// 1977:      UNK_0xea55  codep:0x770b parp:0xea55 size:0x0013 C-string:'UNK_0xea55'
// 1978:      UNK_0xea6a  codep:0x224c parp:0xea6a size:0x0028 C-string:'UNK_0xea6a'
// 1979:      UNK_0xea94  codep:0x224c parp:0xea94 size:0x007e C-string:'UNK_0xea94'
// 1980:      UNK_0xeb14  codep:0x224c parp:0xeb14 size:0x0014 C-string:'UNK_0xeb14'
// 1981:      UNK_0xeb2a  codep:0x224c parp:0xeb2a size:0x0078 C-string:'UNK_0xeb2a'
// 1982:      UNK_0xeba4  codep:0x224c parp:0xeba4 size:0x005d C-string:'UNK_0xeba4'
// 1983:      UNK_0xec03  codep:0x224c parp:0xec03 size:0x0028 C-string:'UNK_0xec03'
// 1984:      UNK_0xec2d  codep:0x224c parp:0xec2d size:0x001a C-string:'UNK_0xec2d'
// 1985:      UNK_0xec49  codep:0x224c parp:0xec49 size:0x0056 C-string:'UNK_0xec49'
// 1986:      UNK_0xeca1  codep:0x224c parp:0xeca1 size:0x000e C-string:'UNK_0xeca1'
// 1987:       FUNCTIONS  codep:0x1d29 parp:0xecbd size:0x0019 C-string:'FUNCTIONS'
// 1988:      UNK_0xecd8  codep:0x224c parp:0xecd8 size:0x0014 C-string:'UNK_0xecd8'
// 1989:      UNK_0xecee  codep:0x224c parp:0xecee size:0x005c C-string:'UNK_0xecee'
// 1990:      UNK_0xed4c  codep:0x1d29 parp:0xed4c size:0x0000 C-string:'UNK_0xed4c'
// 1991:      UNK_0xed4e  codep:0x3a56 parp:0xed4e size:0x0004 C-string:'UNK_0xed4e'
// 1992:      UNK_0xed54  codep:0x224c parp:0xed54 size:0x0026 C-string:'UNK_0xed54'
// 1993:      UNK_0xed7c  codep:0x224c parp:0xed7c size:0x002a C-string:'UNK_0xed7c'
// 1994:      UNK_0xeda8  codep:0x224c parp:0xeda8 size:0x0074 C-string:'UNK_0xeda8'
// 1995:         HEAVEHO  codep:0x224c parp:0xee28 size:0x003c C-string:'HEAVEHO'
// 1996:        TV-SETUP  codep:0x224c parp:0xee71 size:0x02d4 C-string:'TV_minus_SETUP'
// 1997:      UNK_0xf147  codep:0x4ce9 parp:0xf147 size:0x0008 C-string:'UNK_0xf147'
// 1998:      UNK_0xf151  codep:0x224c parp:0xf151 size:0x003e C-string:'UNK_0xf151'
// 1999:      UNK_0xf191  codep:0x1d29 parp:0xf191 size:0x0006 C-string:'UNK_0xf191'
// 2000:      UNK_0xf199  codep:0x224c parp:0xf199 size:0x004a C-string:'UNK_0xf199'
// 2001:      UNK_0xf1e5  codep:0x224c parp:0xf1e5 size:0x0034 C-string:'UNK_0xf1e5'
// 2002:      UNK_0xf21b  codep:0x224c parp:0xf21b size:0x0016 C-string:'UNK_0xf21b'
// 2003:      UNK_0xf233  codep:0x224c parp:0xf233 size:0x0058 C-string:'UNK_0xf233'
// 2004:       WALK&TALK  codep:0x224c parp:0xf299 size:0x0022 C-string:'WALK_and_TALK'
// 2005:      UNK_0xf2bd  codep:0x224c parp:0xf2bd size:0x0036 C-string:'UNK_0xf2bd'
// 2006:      UNK_0xf2f5  codep:0x902a parp:0xf2f5 size:0x0001 C-string:'UNK_0xf2f5'
// 2007:      UNK_0xf2f8  codep:0x224c parp:0xf2f8 size:0x002e C-string:'UNK_0xf2f8'
// 2008:      UNK_0xf328  codep:0x224c parp:0xf328 size:0x0010 C-string:'UNK_0xf328'
// 2009:      UNK_0xf33a  codep:0x224c parp:0xf33a size:0x000e C-string:'UNK_0xf33a'
// 2010:         TV-DISP  codep:0x224c parp:0xf354 size:0x0071 C-string:'TV_minus_DISP'
// 2011:       TV-CLEANU  codep:0x224c parp:0xf3d3 size:0x0004 C-string:'TV_minus_CLEANU'
// 2012:      UNK_0xf3d9  codep:0x1d29 parp:0xf3d9 size:0x001a C-string:'UNK_0xf3d9'
// 2013:      UNK_0xf3f5  codep:0x224c parp:0xf3f5 size:0x0018 C-string:'UNK_0xf3f5'
// 2014:      UNK_0xf40f  codep:0x224c parp:0xf40f size:0x0012 C-string:'UNK_0xf40f'
// 2015:      UNK_0xf423  codep:0x224c parp:0xf423 size:0x0049 C-string:'UNK_0xf423'
// 2016:      UNK_0xf46e  codep:0x1d29 parp:0xf46e size:0x0002 C-string:'UNK_0xf46e'
// 2017:      UNK_0xf472  codep:0x224c parp:0xf472 size:0x0080 C-string:'UNK_0xf472'
// 2018:       DO.WEAPON  codep:0x224c parp:0xf500 size:0x010b C-string:'DO_dot_WEAPON'
// 2019:      UNK_0xf60d  codep:0x0000 parp:0xf60d size:0x03fe C-string:'UNK_0xf60d'
// 2020:      UNK_0xfa0d  codep:0x0000 parp:0xfa0d size:0x0005 C-string:'UNK_0xfa0d'
// 2021:      UNK_0xfa14  codep:0x0000 parp:0xfa14 size:0x0037 C-string:'UNK_0xfa14'
// 2022:      UNK_0xfa4d  codep:0x0000 parp:0xfa4d size:0x0314 C-string:'UNK_0xfa4d'
// 2023:      UNK_0xfd63  codep:0x0000 parp:0xfd63 size:0x01ef C-string:'UNK_0xfd63'
// 2024:      UNK_0xff54  codep:0x0000 parp:0xff54 size:0xfffff60c C-string:'UNK_0xff54'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char HEALTI[2] = {0x20, 0x45}; // HEALTI
unsigned char LASTAP[4] = {0x49, 0x4e, 0x54, 0x20}; // LASTAP
unsigned char ROSTER[18] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; // ROSTER
unsigned char FUNCTIONS[25] = {0x05, 0x0c, 0x03, 0x0c, 0x13, 0x0c, 0x17, 0x0c, 0x13, 0x0c, 0x2b, 0x0c, 0x17, 0x0c, 0x43, 0x0c, 0x27, 0x0c, 0x6b, 0x0c, 0x1b, 0x0c, 0x87, 0x0c, 0x16}; // FUNCTIONS
unsigned char UNK_0xed4c[0] = {0x56}; // UNK_0xed4c
unsigned char UNK_0xf191[6] = {0x00, 0x42, 0x99, 0x99, 0x42, 0x00}; // UNK_0xf191
unsigned char UNK_0xf3d9[26] = {0x3a, 0x20, 0x4c, 0x22, 0x2e, 0x0f, 0x20, 0x0f, 0x3d, 0x0f, 0xc4, 0x4b, 0xfa, 0x15, 0x08, 0x00, 0x72, 0x0f, 0x60, 0x16, 0x04, 0x00, 0x92, 0x0f, 0x90, 0x16}; // UNK_0xf3d9
unsigned char UNK_0xf46e[2] = {0x3a, 0x20}; // UNK_0xf46e

const unsigned short int cc_UNK_0xe6e6 = 0x0000; // UNK_0xe6e6


// 0xe6e2: db 0xe9 0x00 '  '

// ================================================
// 0xe6e4: WORD 'UNK_0xe6e6' codep=0x2214 parp=0xe6e6
// ================================================
// 0xe6e6: db 0x00 0x00 '  '

// ================================================
// 0xe6e8: WORD 'UNK_0xe6ea' codep=0x224c parp=0xe6ea
// ================================================

void UNK_0xe6ea() // UNK_0xe6ea
{
  Push(0x0064);
  Push(0x03e8);
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  RED(); // RED
  _eq_(); // =
  DUP(); // DUP
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(0xe6e6);
  _ex_(); // !
  if (Pop() == 0) goto label845;

  SWAP(); // SWAP

  label845:

  do // (DO)
  {
  BEEPON(); // BEEPON
  I(); // I
  I(); // I
  Push(Pop()*2); // 2*
  RRND(); // RRND
  TONE(); // TONE
  Push(cc__3); // 3
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  do // (DO)
  {
  NOP(); // NOP

  } while(...); // (LOOP) 0xfffc
  Push(cc_UNK_0xe6e6); // UNK_0xe6e6

  } while(...); // (+LOOP) 0xffe0
  BEEPOFF(); // BEEPOFF
}

// 0xe734: db 0x14 0x22 0x44 0x00 ' "D '

// ================================================
// 0xe738: WORD 'UNK_0xe73a' codep=0x7420 parp=0xe73a
// ================================================
// 0xe73a: db 0x2a 0x11 0x01 0x20 0x74 0x0b 0x11 0x02 0x20 0x74 0x14 0x43 0x02 0x20 0x74 0x11 0x17 0x03 0x20 0x74 0x10 0x1b 0x01 0x94 0x73 0x15 0x2a 0x01 0x32 0xd1 0x6a 0x20 0x74 0x44 0x17 0x01 '*   t    t C  t    t    s * 2 j tD  '
// 0xe75e: xchg   ax,sp
// 0xe75f: jae    E77D
// 0xe761: push   ds
// 0xe762: add    [bx+si],sp
// 0xe764: int    6B

// ================================================
// 0xe766: WORD 'UNK_0xe768' codep=0x7420 parp=0xe768
// ================================================
// 0xe768: db 0x44 0x18 0x01 0x4c 0x22 'D  L"'

// ================================================
// 0xe76d: WORD 'UNK_0xe76f' codep=0xe75e parp=0xe76f
// ================================================
// 0xe76f: db 0x92 0x0c 0x3d 0x0f 0x5f 0x12 0x90 0x16 0x4c 0x22 0x34 0x75 0x7f 0x3b 0x46 0x12 0xb5 0x75 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x1b 0x00 0x20 0x0f 0x4c 0x7e 0x07 0x13 0xe2 0x7a 0x5d 0x17 0x1c 0x00 0x20 0x0f 0x4c 0x7e 0x07 0x13 0xf5 0x12 0x34 0x75 0x7f 0x3b 0x8f 0x3b 0x25 0x40 0xf5 0x12 0x3e 0x13 0x3d 0x0f 0x0a 0x7a 0x90 0x16 '  = _   L"4u;F  u z?z]     L~   z]     L~    4u; ;%@  > =  z  '

// ================================================
// 0xe7af: WORD 'DISPOSAL' codep=0x4b3b parp=0xe7bc
// ================================================
// 0xe7bc: db 0x08 0x00 0xd1 0x51 0x44 0x00 0xc5 0x51 0x1a 0x00 0xc5 0x51 0x15 0x00 0xc5 0x51 0x1f 0x00 0xc5 0x51 0x21 0x00 0xc5 0x51 0x1c 0x00 0x6d 0xe7 0x29 0x00 0x79 0xe7 0x09 0x00 0xc5 0x51 '   QD  Q   Q   Q   Q!  Q  m ) y    Q'

// ================================================
// 0xe7e0: WORD 'UNK_0xe7e2' codep=0x224c parp=0xe7e2
// ================================================

void UNK_0xe7e2() // UNK_0xe7e2
{
  Push(2); // 2
  Push(0x000a);
  RRND(); // RRND
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
}


// ================================================
// 0xe7fa: WORD 'UNK_0xe7fc' codep=0x224c parp=0xe7fc
// ================================================

void UNK_0xe7fc() // UNK_0xe7fc
{
  _minus_ICON(); // -ICON
  Push(0xba55);
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
}


// ================================================
// 0xe808: WORD 'UNK_0xe80a' codep=0x224c parp=0xe80a
// ================================================

void UNK_0xe80a() // UNK_0xe80a
{
  _at_ID(); // @ID
  Push(0x0011);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label842;

  Push(0); // 0
  Push(0xe75b);
  IFLD_ex_(); // IFLD!

  label842:
}


// ================================================
// 0xe822: WORD 'UNK_0xe824' codep=0x224c parp=0xe824
// ================================================

void UNK_0xe824() // UNK_0xe824
{
  Push(0); // 0
  Push(0x000a);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label840;

  UNK_0xe80a(); // UNK_0xe80a
  goto label841;

  label840:
  _at_ID(); // @ID
  Push(0x0011);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label841;

  UNK_0xe7e2(); // UNK_0xe7e2
  UNK_0xe768(); // UNK_0xe768
  C_ex_(); // C!

  label841:
  UNK_0xe7fc(); // UNK_0xe7fc
}


// ================================================
// 0xe850: WORD 'UNK_0xe852' codep=0x224c parp=0xe852
// ================================================

void UNK_0xe852() // UNK_0xe852
{
  Push(0xcf39);
  MODULE(); // MODULE
}


// ================================================
// 0xe85a: WORD 'UNK_0xe85c' codep=0x224c parp=0xe85c
// ================================================

void UNK_0xe85c() // UNK_0xe85c
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  LLINE(); // LLINE
}


// ================================================
// 0xe86c: WORD 'UNK_0xe86e' codep=0x224c parp=0xe86e
// ================================================

void UNK_0xe86e() // UNK_0xe86e
{
  Push(0x0016);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x002a);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x0042);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x006a);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x0086);
  UNK_0xe85c(); // UNK_0xe85c
  Push(0x009e);
  UNK_0xe85c(); // UNK_0xe85c
}


// ================================================
// 0xe894: WORD 'UNK_0xe896' codep=0x224c parp=0xe896
// ================================================

void UNK_0xe896() // UNK_0xe896
{
  _gt_R(); // >R
  Push(0x00c5);
  Push(0x000c);
  Push(0x00c1);
  Push(0x0044);
  R_gt_(); // R>
  POLY_minus_WI(); // POLY-WI
}

// 0xe8ae: db 0x4c 0x22 0x7e 0x5c 0xae 0x0b 0x41 0x0e 0x87 0x3b 0x46 0x12 0xf2 0x0e 0x5d 0x17 0x0b 0x00 0x2d 0x12 0x3e 0x13 0x90 0x16 0x4c 0x22 0x20 0x53 0x1f 0x7a 0x47 0xe7 0x2f 0x7a 0x4c 0xe7 0x92 0x0c 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0xc6 0xe8 0x5d 0x17 0xc7 0x00 0x2d 0x12 0x90 0x16 'L"~\  A  ;F   ]   - >   L" S zG /zL   =  z  L"  ]   -   '

// ================================================
// 0xe8e6: WORD 'UNK_0xe8e8' codep=0x224c parp=0xe8e8
// ================================================

void UNK_0xe8e8() // UNK_0xe8e8
{
  Push(cc__minus_1); // -1
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe8f0: WORD 'UNK_0xe8f2' codep=0x224c parp=0xe8f2
// ================================================

void UNK_0xe8f2() // UNK_0xe8f2
{
  Push(0x0083);
  Push(0x0053);
  Push(0x0009);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe906: WORD 'UNK_0xe908' codep=0x224c parp=0xe908
// ================================================

void UNK_0xe908() // UNK_0xe908
{
  Push(0x0040);
  Push(cc__3); // 3
  Push(cc__7); // 7
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xe8e8(); // UNK_0xe8e8
  UNK_0xe8e8(); // UNK_0xe8e8
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe91e: WORD 'UNK_0xe920' codep=0x224c parp=0xe920
// ================================================

void UNK_0xe920() // UNK_0xe920
{
  Push(0x00c1);
  Push(0x0053);
  Push(0x0008);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe934: WORD 'UNK_0xe936' codep=0x224c parp=0xe936
// ================================================

void UNK_0xe936() // UNK_0xe936
{
  Push(0x00bf);
  Push(cc__3); // 3
  Push(0x0011);
  Push(0x0012);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe948: WORD 'UNK_0xe94a' codep=0x224c parp=0xe94a
// ================================================

void UNK_0xe94a() // UNK_0xe94a
{
  Push(0x000c);
  Push(pp_WTOP); // WTOP
  _st__ex__gt_(); // <!>
  Push(cc__3); // 3
  Push(pp_WLEFT); // WLEFT
  _st__ex__gt_(); // <!>
  Push(0x009b);

// ================================================
// 0xe95a: WORD 'UNK_0xe95c' codep=0x009b parp=0xe95c
// ================================================
  Push(pp_WRIGHT); // WRIGHT

// ================================================
// 0xe95d: WORD 'UNK_0xe95f' codep=0xe95d parp=0xe95f
// ================================================

// ================================================
// 0xe95e: WORD 'UNK_0xe960' codep=0x4ce9 parp=0xe960
// ================================================
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(pp_WBOTTOM); // WBOTTOM
  _st__ex__gt_(); // <!>
}

// 0xe968: db 0x4c 0x22 0x5d 0x17 0xe0 0x01 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x35 0x00 0xc4 0x0f 0xf2 0x0e 0x5d 0x17 0x80 0x04 0x92 'L"]     ]   ] 5     ]    '
// 0xe981: db     0F
// 0xe982: pop    bp
// 0xe983: pop    ss
// 0xe984: or     al,[bx+si]
// 0xe986: pop    bp
// 0xe987: pop    ss
// 0xe988: inc    ax
// 0xe989: add    ah,al
// 0xe98b: db     0F
// 0xe98c: repnz  
// 0xe98d: push   cs
// 0xe98e: nop    
// 0xe98f: push   ss
// 0xe990: dec    sp
// 0xe991: and    cl,al
// 0xe993: or     ax,15FA
// 0xe996: sbb    [bx+si],al
// 0xe998: js     E9AC
// 0xe99a: cli    
// 0xe99b: adc    ax,000A
// 0xe99e: esc    4,[bp+di]
// 0xe9a0: add    [bx+60],dx
// 0xe9a3: push   ss
// 0xe9a4: push   es
// 0xe9a5: add    ah,bl
// 0xe9a7: sbb    ax,[bx+di]
// 0xe9a9: inc    bp
// 0xe9aa: db     60
// 0xe9ab: push   ss
// 0xe9ac: push   es
// 0xe9ad: add    ah,bl
// 0xe9af: sbb    ax,[bx+di]
// 0xe9b1: and    [bx+si+4C16],dl
// 0xe9b5: and    cl,al
// 0xe9b7: or     ax,15FA
// 0xe9ba: sbb    [bx+si],al
// 0xe9bc: js     E9D0
// 0xe9be: cli    
// 0xe9bf: adc    ax,000A
// 0xe9c2: esc    4,[bp+di]
// 0xe9c4: add    [bp+di+60],dx
// 0xe9c7: push   ss
// 0xe9c8: push   es
// 0xe9c9: add    ah,bl
// 0xe9cb: sbb    ax,[bx+di]
// 0xe9cd: dec    si
// 0xe9ce: db     60
// 0xe9cf: push   ss
// 0xe9d0: push   es
// 0xe9d1: add    ah,bl
// 0xe9d3: sbb    ax,[bx+di]
// 0xe9d5: and    [bx+si+4C16],dl

// ================================================
// 0xe9d8: WORD 'UNK_0xe9da' codep=0x224c parp=0xe9da
// ================================================

void UNK_0xe9da() // UNK_0xe9da
{
  SWAP(); // SWAP
  _4_star_(); // 4*
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(Pop() + Pop()); // +
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _minus_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe9f8: WORD 'UNK_0xe9fa' codep=0x224c parp=0xe9fa
// ================================================

void UNK_0xe9fa() // UNK_0xe9fa
{
  Push(pp_TVEHICL); // TVEHICL
  _at__gt_C_plus_S(); // @>C+S
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}

// 0xea0a: db 0x4c 0x22 0xc9 0x74 0x16 0x6d 0xbb 0x74 0x16 0x6d 0x90 0x16 0x4c 0x22 0x3d 0xe7 0xae 0x0b 0x41 0x0e 0x2e 0x53 0x1f 0x7a 0x42 0xe7 0xae 0x0b 0x46 0x12 0x41 0x0e 0xfa 0x15 0x0e 0x00 0xf2 0x0e 0xc6 0x11 0x42 0xe7 0x23 0x6d 0x60 0x16 0x06 0x00 0xf2 0x0e 0x32 0x0e 0xdf 0x79 0x90 0x16 'L" t m t m  L"=   A .S zB   F A         B #m`     2  y  '

// ================================================
// 0xea42: WORD 'UNK_0xea44' codep=0x224c parp=0xea44
// ================================================

void UNK_0xea44() // UNK_0xea44
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @

// ================================================
// 0xea53: WORD 'UNK_0xea55' codep=0x770b parp=0xea55
// ================================================
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  BLACK(); // BLACK
  POLY_minus_WI(); // POLY-WI
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xea68: WORD 'UNK_0xea6a' codep=0x224c parp=0xea6a
// ================================================

void UNK_0xea6a() // UNK_0xea6a
{
  Push(0x2001);
  PAD(); // PAD
  _st__ex__gt_(); // <!>
  Push(pp_LINE_minus_CO); // LINE-CO
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _minus_(); // -
  Push(Pop() + Pop()); // +
  Push(0); // 0

  do // (DO)
  {
  PAD(); // PAD
  WLINE_minus_U(); // WLINE-U

  } while(...); // (LOOP) 0xfffa
  Push(pp_LINE_minus_CO); // LINE-CO
  _099(); // 099
}


// ================================================
// 0xea92: WORD 'UNK_0xea94' codep=0x224c parp=0xea94
// ================================================

void UNK_0xea94() // UNK_0xea94
{
  Push(2); // 2
  Push(0); // 0

  do // (DO)
  {
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  I(); // I
  Push(Pop() + Pop()); // +
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  LLINE(); // LLINE
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  I(); // I
  Push(Pop() + Pop()); // +
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  LLINE(); // LLINE

  } while(...); // (LOOP) 0xffce
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()-2); // 2-
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+3); // 3+
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xeb12: WORD 'UNK_0xeb14' codep=0x224c parp=0xeb14
// ================================================

void UNK_0xeb14() // UNK_0xeb14
{
  UNK_0xe936(); // UNK_0xe936
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(cc__minus_1); // -1
  UNK_0xe9da(); // UNK_0xe9da
  BLACK(); // BLACK
  UNK_0xe896(); // UNK_0xe896
  UNK_0xe852(); // UNK_0xe852
}


// ================================================
// 0xeb28: WORD 'UNK_0xeb2a' codep=0x224c parp=0xeb2a
// ================================================

void UNK_0xeb2a() // UNK_0xeb2a
{
  UNK_0xe920(); // UNK_0xe920
  UNK_0xea44(); // UNK_0xea44
  RED(); // RED
  _ex_COLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  _gt_2FONT(); // >2FONT
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  Push(0); // 0
  Push(2); // 2
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("DATE  : ", 8); // (.")
  Push(0); // 0
  Push(cc__3); // 3
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("ENERGY: ", 8); // (.")
  Push(0); // 0
  Push(cc__4); // 4
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("EFF.  : ", 8); // (.")
  Push(0); // 0
  Push(cc__5); // 5
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("CARGO : ", 8); // (.")
  Push(0); // 0
  Push(cc__6); // 6
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("SHIP  : ", 8); // (.")
}


// ================================================
// 0xeba2: WORD 'UNK_0xeba4' codep=0x224c parp=0xeba4
// ================================================

void UNK_0xeba4() // UNK_0xeba4
{
  UNK_0xe94a(); // UNK_0xe94a
  UNK_0xea44(); // UNK_0xea44
  RED(); // RED
  _ex_COLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  UNK_0xe86e(); // UNK_0xe86e
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(0xfffd);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  _gt_1FONT(); // >1FONT
  PRINT("MAPS MOVE CARGO ", 16); // (.")
  Push(2); // 2
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("DESCRIBE ", 9); // (.")
  Push(2); // 2
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("WEAPON ICONS ", 13); // (.")
}


// ================================================
// 0xec01: WORD 'UNK_0xec03' codep=0x224c parp=0xec03
// ================================================

void UNK_0xec03() // UNK_0xec03
{
  UNK_0xe8f2(); // UNK_0xe8f2
  UNK_0xea44(); // UNK_0xea44
  RED(); // RED
  _ex_COLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  _gt_2FONT(); // >2FONT
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  PRINT("CREW VITALITY", 13); // (.")
}


// ================================================
// 0xec2b: WORD 'UNK_0xec2d' codep=0x224c parp=0xec2d
// ================================================

void UNK_0xec2d() // UNK_0xec2d
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(0xfffd);
  Push(pp_WRIGHT); // WRIGHT
  _plus__ex_(); // +!
  RED(); // RED
  _ex_COLOR(); // !COLOR
  UNK_0xea94(); // UNK_0xea94
  Push(cc__3); // 3
  Push(pp_WRIGHT); // WRIGHT
  _plus__ex_(); // +!
}


// ================================================
// 0xec47: WORD 'UNK_0xec49' codep=0x224c parp=0xec49
// ================================================

void UNK_0xec49() // UNK_0xec49
{
  _gt_DISPLA(); // >DISPLA
  _gt_1FONT(); // >1FONT
  Push(0); // 0
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  GREY1(); // GREY1
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  RED(); // RED
  _ex_COLOR(); // !COLOR
  BLACK(); // BLACK
  VIEWSCR(); // VIEWSCR
  UNK_0xeb14(); // UNK_0xeb14
  UNK_0xeb2a(); // UNK_0xeb2a
  UNK_0xec03(); // UNK_0xec03
  UNK_0xeba4(); // UNK_0xeba4
  UNK_0xec2d(); // UNK_0xec2d
  _gt_TVCT(); // >TVCT
  CTINIT(); // CTINIT
}

// 0xec71: db 0x4c 0x22 0x06 0xe9 0x68 0xea 0x90 0x16 0x4c 0x22 0x98 0x2a 0x38 0x0c 0xc0 0x63 0x3f 0x6d 0x41 0x0e 0x20 0x0f 0xc0 0x63 0x38 0x0c 0x65 0x10 0x98 0x2a 0x38 0x0c 0xb2 0x12 0xdd 0xa3 0x3e 0x13 0xfa 0x15 0xea 0xff 0x32 0x0e 0x90 0x16 'L"  h   L" *8  c?mA    c8 e  *8     >     2   '

// ================================================
// 0xec9f: WORD 'UNK_0xeca1' codep=0x224c parp=0xeca1
// ================================================

void UNK_0xeca1() // UNK_0xeca1
{
  _ask_LAST(); // ?LAST
  _at_INST_minus_C(); // @INST-C
  DISPOSAL(); // DISPOSAL
  Push(cc_FALSE); // FALSE
  _eq_(); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xecaf: WORD 'FUNCTIONS' codep=0x1d29 parp=0xecbd
// ================================================
// 0xecbd: db 0x05 0x0c 0x03 0x0c 0x13 0x0c 0x17 0x0c 0x13 0x0c 0x2b 0x0c 0x17 0x0c 0x43 0x0c 0x27 0x0c 0x6b 0x0c 0x1b 0x0c 0x87 0x0c 0x16 '          +   C ' k      '

// ================================================
// 0xecd6: WORD 'UNK_0xecd8' codep=0x224c parp=0xecd8
// ================================================

void UNK_0xecd8() // UNK_0xecd8
{
  _at_INST_minus_C(); // @INST-C
  DISPOSAL(); // DISPOSAL
  if (Pop() == 0) goto label857;

  _minus_ICON(); // -ICON
  IDELETE(); // IDELETE
  goto label858;

  label857:
  INEXT(); // INEXT

  label858:
}


// ================================================
// 0xecec: WORD 'UNK_0xecee' codep=0x224c parp=0xecee
// ================================================

void UNK_0xecee() // UNK_0xecee
{
  if (Pop() == 0) goto label849;

  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  Push(1); // 1
  Push(pp__n_SHOTS); // #SHOTS
  _plus__ex_(); // +!
  Push(pp__n_SHOTS); // #SHOTS
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _st_(); // <
  if (Pop() == 0) goto label850;

  Push(cc__9); // 9
  goto label851;

  label850:
  Push(0x000a);
  _at_INST_minus_S(); // @INST-S
  Push(0xc032);
  MODULE(); // MODULE
  if (Pop() == 0) goto label851;

  Push(0x0064);
  Push(0xbf4a);
  MODULE(); // MODULE

  label851:
  Push(0xe753);
  IFLD_at_(); // IFLD@
  MAX(); // MAX
  Push(0xe753);
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE

  label849:
}

// 0xed3a: db 0x4c 0x22 0x6f 0x64 0x2f 0x7a 0x3d 0xe7 0xae 0x0b 0xdf 0x79 0xdd 0x4a 0x90 0x16 'L"od/z=    y J  '

// ================================================
// 0xed4a: WORD 'UNK_0xed4c' codep=0x1d29 parp=0xed4c
// ================================================

// ================================================
// 0xed4c: WORD 'UNK_0xed4e' codep=0x3a56 parp=0xed4e
// ================================================
// 0xed4e: db 0x20 0x0f 0x05 0x41 '   A'

// ================================================
// 0xed52: WORD 'UNK_0xed54' codep=0x224c parp=0xed54
// ================================================

void UNK_0xed54() // UNK_0xed54
{
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  _minus_(); // -
  ABS(); // ABS
  DUP(); // DUP
  U_star_(); // U*
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  _minus_(); // -
  ABS(); // ABS
  DUP(); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xed7a: WORD 'UNK_0xed7c' codep=0x224c parp=0xed7c
// ================================================

void UNK_0xed7c() // UNK_0xed7c
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  Push(pp_UNK_0xed4c); // UNK_0xed4c
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label859:
  UNK_0xecd8(); // UNK_0xecd8
  _ask_NULL(); // ?NULL
  UNK_0xeca1(); // UNK_0xeca1
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label859;

  _ask_NULL(); // ?NULL
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label860;

  IDELETE(); // IDELETE

  label860:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeda6: WORD 'UNK_0xeda8' codep=0x224c parp=0xeda8
// ================================================

void UNK_0xeda8() // UNK_0xeda8
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_UNK_0xed4c); // UNK_0xed4c
  _1_dot_5_ex_(); // 1.5!
  Push(0); // 0
  Push(pp_UNK_0xed4c); // UNK_0xed4c
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _st__ex__gt_(); // <!>
  Push(0x000b);
  Push(0x000b);

  label855:
  Push(pp_SUPER_minus_B); // SUPER-B
  _1_dot_5_at_(); // 1.5@
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label853;

  _ask_CLASS_slash_(); // ?CLASS/
  if (Pop() == 0) goto label854;

  UNK_0xed54(); // UNK_0xed54
  Push(pp_UNK_0xed4c); // UNK_0xed4c
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _st_(); // <
  IOPEN(); // IOPEN
  ILAST(); // ILAST
  UNK_0xeca1(); // UNK_0xeca1
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label856;

  CI(); // CI
  Push(pp_UNK_0xed4c); // UNK_0xed4c
  _1_dot_5_ex_(); // 1.5!
  Push(pp_UNK_0xed4c); // UNK_0xed4c
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _st__ex__gt_(); // <!>
  goto label854;

  label856:
  Pop(); // DROP

  label854:
  INEXT(); // INEXT
  goto label855;

  label853:
  Pop(); Pop();// 2DROP
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  SAVE_minus_OV(); // SAVE-OV
}


// ================================================
// 0xee1c: WORD 'HEAVEHO' codep=0x224c parp=0xee28
// ================================================

void HEAVEHO() // HEAVEHO
{
  Push(pp__ask_CRITIC); // ?CRITIC
  ON(); // ON
  UNK_0xeda8(); // UNK_0xeda8
  UNK_0xed7c(); // UNK_0xed7c
}

// 0xee32: db 0x14 0x22 0xff 0x7f 0x4c 0x22 0x5f 0x64 0x2f 0x7a 0x2f 0x5f 0xae 0x0b 0xbb 0x74 0x16 0x6d 0x3a 0x5f 0xae 0x0b 0xc9 0x74 0x16 0x6d 0x32 0xee 0xad 0x74 0x16 0x6d 0xdf 0x79 0x6f 0x64 0x2f 0x7a 0x5d 0x17 0xf4 0x01 0xad 0x74 0x16 0x6d 0xdf 0x79 0x90 0x16 ' " L"_d/z/_   t m:_   t m2  t m yod/z]    t m y  '

// ================================================
// 0xee64: WORD 'TV-SETUP' codep=0x224c parp=0xee71
// ================================================

void TV_minus_SETUP() // TV-SETUP
{
  UNK_0xec49(); // UNK_0xec49
  DK_minus_BLUE(); // DK-BLUE
  Push(pp_CRSCOLO); // CRSCOLO
  _ex_(); // !
  Push(pp_FUNCTIONS); // FUNCTIONS
  BLD_minus_CRS(); // BLD-CRS
}

// 0xee7f: db 0x4c 0x22 0x2e 0x53 0x1f 0x7a 0x42 0xe7 0x23 0x6d 0xdf 0x79 0x90 0x16 0x4c 0x22 0x07 0x76 0xfa 0x15 0x0a 0x00 0xdf 0x79 0x1e 0x7f 0xc4 0x52 0x53 0x75 0x90 0x16 0x4c 0x22 0x9e 0xa9 0xae 0x0b 0xb4 0x0d 0xa2 0x0e 0xad 0x74 0x16 0x6d 0x2d 0x7c 0x8d 0xee 0x6f 0x64 0x2f 0x7a 0x3c 0xb9 0xa2 0x0e 0x3d 0xe7 0x23 0x6d 0xdf 0x79 0x90 0x0e 0xc6 0x11 0x7f 0xee 0x90 0x16 0x4c 0x22 0x41 0x0e 0x5d 0x17 0x6b 0xb7 0xd9 0x84 0xfa 0x15 0x16 0x00 0x3f 0x7a 0x5d 0x17 0x1c 0x00 0xf2 0x0e 0x4c 0x7e 0x32 0x0e 0x9f 0xee 0xdf 0x79 0x60 0x16 0x04 0x00 0x32 0x0e 0x90 0x16 0x4c 0x22 0x5d 0x17 0x2a 0x00 0x5d 0x17 0x6b 0xb7 0xd9 0x84 0x5d 0x17 0x2a 0x00 0x5d 0x17 0x8d 0xb7 0xd9 0x84 0x3e 0x13 0x33 0x61 0xe9 0x4c 0x11 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0f 0x00 0x4c 0x7e 0xfa 0x15 0x20 0x00 0x5d 0x17 0x2a 0x00 0xc7 0xee 0x5d 0x17 0x34 0x00 0xc7 0xee 0x5d 0x17 0x0b 0x00 0xc7 0xee 0x5d 0x17 0x0c 0x00 0xc7 0xee 0x5d 0x17 0x0e 0x00 0xc7 0xee 0x5d 0x17 0xec 0xb6 0xd9 0x84 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x5f 0x64 0x2f 0x7a 0x36 0xee 0x5d 0x17 0x55 0xba 0xd9 0x84 0x50 0x99 0x3f 0x7a 0xa7 0x75 0x6f 0x64 0x2f 0x7a 0x2d 0x7c 0x7f 0x64 0x83 0x4a 0x1f 0x7a 0x3f 0x7a 0x8b 0x75 0x17 0x7c 0x87 0x3b 0x0a 0x7a 0x2e 0x53 0x1f 0x7a 0x2f 0x5f 0xae 0x0b 0xbb 0x74 0x16 0x6d 0x3a 0x5f 0xae 0x0b 0xe7 0x0f 0xc9 0x74 0x16 0x6d 0x5d 0x17 0x55 0xba 0xd9 0x84 0x50 0x99 0xdf 0x79 0xed 0xee 0x90 0x16 0x4c 0x22 0x7f 0x64 0x2f 0x7a 0x3f 0x7a 0xa7 0x75 0x6f 0x64 0x2f 0x7a 0x2d 0x7c 0xdf 0x79 0xdf 0x79 0x5f 0x64 0x83 0x4a 0xa9 0x7b 0xed 0x94 0x90 0x16 0x4c 0x22 0xd0 0x55 0xae 0x0b 0xfa 0x15 0x50 0x00 0x1c 0x9f 0xdc 0x1b 0x1a 0x52 0x45 0x46 0x55 0x45 0x4c 0x49 0x4e 0x47 0x20 0x54 0x45 0x52 0x52 0x41 0x49 0x4e 0x20 0x56 0x45 0x48 0x49 0x43 0x4c 0x45 0x20 0x1c 0x9f 0x3a 0xed 0x6f 0x64 0x2f 0x7a 0x16 0xea 0xdf 0x79 0xf5 0x12 0xfa 0x15 0x1f 0x00 0xdc 0x1b 0x1a 0x41 0x4e 0x44 0x20 0x54 0x52 0x41 0x4e 0x53 0x46 0x45 0x52 0x52 0x49 0x4e 0x47 0x20 0x41 0x4c 0x4c 0x20 0x43 0x41 0x52 0x47 0x4f 0x90 0x16 0x4c 0x22 0x3f 0x7a 0x07 0x76 0x07 0x13 0xfa 0x15 0x14 0x00 0x2d 0x7c 0x11 0x6c 0x1f 0x7a 0x3f 0x7a 0xa7 0x75 0x3c 0xb9 0xdf 0x79 0x60 0x16 0xe8 0xff 0xdf 0x79 0x11 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0a 0x00 0x4c 0x7e 0xfa 0x15 0x1e 0x00 0x3f 0x7a 0x5d 0x17 0x1a 0x00 0x97 0x3b 0x4c 0x7e 0xad 0x74 0xae 0x0b 0xb3 0x0f 0x5d 0x17 0x0a 0x00 0xd6 0x11 0xa7 0x75 0x60 0x16 0x04 0x00 0xa6 0x49 0x38 0x63 0x4c 0x6d 0xa7 0x75 0xdf 0x79 0x90 0x16 0x4c 0x22 0x07 0x76 0x07 0x13 0xfa 0x15 0x0a 0x00 0x0d 0xf0 0x1e 0x7f 0x60 0x16 0xf2 0xff 0x90 0x16 0x4c 0x22 0xdb 0x9b 0x46 0x9c 0xc1 0x3b 0x46 0x5a 0x23 0x6d 0xd2 0x9f 0x6f 0x64 0x2f 0x7a 0xb3 0xef 0x16 0xea 0xfa 0x15 0x12 0x00 0x3f 0x7a 0x69 0xf0 0xdf 0x79 0x20 0x0f 0x3d 0xe7 0x16 0x6d 0x60 0x16 0x60 0x00 0xd0 0x55 0xae 0x0b 0x3a 0xed 0xf5 0x12 0xfa 0x15 0x54 0x00 0x1c 0x9f 0xdc 0x1b 0x1e 0x4e 0x4f 0x54 0x20 0x45 0x4e 0x4f 0x55 0x47 0x48 0x20 0x52 0x4f 0x4f 0x4d 0x20 0x49 0x4e 0x20 0x53 0x48 0x49 0x50 0x27 0x53 0x20 0x48 0x4f 0x4c 0x44 0x1c 0x9f 0xdc 0x1b 0x22 0x49 0x54 0x45 0x4d 0x53 0x20 0x57 0x49 0x4c 0x4c 0x20 0x53 0x54 0x41 0x59 0x20 0x49 0x4e 0x20 0x54 0x45 0x52 0x52 0x41 0x49 0x4e 0x20 0x56 0x45 0x48 0x49 0x43 0x4c 0x45 0x1c 0x9f 0x5d 0x17 0x94 0x11 0x79 0xec 0x5d 0x17 0xdc 0x05 0xef 0x2a 0xdf 0x79 0x95 0xef 0x90 0x16 0x4c 0x22 0x34 0xe9 0xc4 0x52 0x2b 0x5b 0xe9 0x4c 0x39 0x5b 0xe9 0x4c 0x2a 0x5c 0x65 0x6d 0x73 0x93 0xd4 0x59 0x65 0x6d 0x5d 0x17 0x24 0xce 0x62 0x5b 0xe9 0x4c 0xa7 0x3b 0x41 0x0e 0x20 0x64 0xe9 0x4c 0x30 0x64 0xe9 0x4c 0x2e 0x0f 0x41 0x0e 0x20 0x64 0x15 0x10 'L".S zB #m y  L" v     y  RSu  L"         t m-|  od/z<   = #m y       L"A ] k       ?z]     L~2    y`   2   L"] * ] k   ] * ]     > 3a L l z?z]   ]   L~    ] *   ] 4   ]     ]     ]     ]     =  z  L"_d/z6 ] U   P ?z uod/z-|d J z?z u | ; z.S z/_   t m:_     t m] U   P  y    L"d/z?z uod/z-| y y_d J {    L" U    P      REFUELING TERRAIN VEHICLE   : od/z   y         AND TRANSFERRING ALL CARGO  L"?z v      -| l z?z u<  y`    y l z?z]   ]   L~    ?z]    ;L~ t    ]      u`    I8cLm u y  L" v         `     L"  F  ;FZ#m  od/z        ?zi  y  =  m` `  U  :     T      NOT ENOUGH ROOM IN SHIP'S HOLD    "ITEMS WILL STAY IN TERRAIN VEHICLE  ]   y ]    * y    L"4  R+[ L9[ L*\ems  Yem] $ b[ L ;A  d L0d L. A  d  '

// ================================================
// 0xf145: WORD 'UNK_0xf147' codep=0x4ce9 parp=0xf147
// ================================================
// 0xf147: db 0x30 0x64 0x15 0x10 0xe9 0x4c 0x90 0x16 '0d   L  '

// ================================================
// 0xf14f: WORD 'UNK_0xf151' codep=0x224c parp=0xf151
// ================================================

void UNK_0xf151() // UNK_0xf151
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _gt_MAINVI(); // >MAINVI
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_minus_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}

// 0xf161: db 0x4c 0x22 0x12 0x5b 0xae 0x0b 0x5d 0x17 0x0e 0x00 0x72 0x0f 0x1d 0x5b 0xae 0x0b 0x5d 0x17 0x16 0x00 0x72 0x0f 0x12 0x5b 0xae 0x0b 0x5d 0x17 0x16 0x00 0x72 0x0f 0x1d 0x5b 0xae 0x0b 0x5d 0x17 0x29 0x00 0x72 0x0f 0x37 0x93 0x90 0x16 'L" [  ]   r  [  ]   r  [  ]   r  [  ] ) r 7   '

// ================================================
// 0xf18f: WORD 'UNK_0xf191' codep=0x1d29 parp=0xf191
// ================================================
// 0xf191: db 0x00 0x42 0x99 0x99 0x42 0x00 ' B  B '

// ================================================
// 0xf197: WORD 'UNK_0xf199' codep=0x224c parp=0xf199
// ================================================

void UNK_0xf199() // UNK_0xf199
{
  Push(pp_EYEXY); // EYEXY
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  DUP(); // DUP
  _gt_R(); // >R
  Push(0x0016);
  Push(Pop() + Pop()); // +
  MIN(); // MIN
  R_gt_(); // R>
  Push(0x000e);
  Push(Pop() + Pop()); // +
  MAX(); // MAX
  Push(pp_EYEXY); // EYEXY
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(pp_EYEXY); // EYEXY
  Push(Read16(Pop())); // @
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  DUP(); // DUP
  _gt_R(); // >R
  Push(0x0024);
  Push(Pop() + Pop()); // +
  MIN(); // MIN
  R_gt_(); // R>
  Push(0x0016);
  Push(Pop() + Pop()); // +
  MAX(); // MAX
  Push(pp_EYEXY); // EYEXY
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf1e3: WORD 'UNK_0xf1e5' codep=0x224c parp=0xf1e5
// ================================================

void UNK_0xf1e5() // UNK_0xf1e5
{
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(cc__6); // 6
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  Push(pp_UNK_0xf191); // UNK_0xf191
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  UNK_0xe9fa(); // UNK_0xe9fa
  _2DUP(); // 2DUP
  Push(pp_EYEXY); // EYEXY
  _st_D_ex__gt_(); // <D!>
  WLD_gt_SCR(); // WLD>SCR
  Push(0x004e);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf219: WORD 'UNK_0xf21b' codep=0x224c parp=0xf21b
// ================================================

void UNK_0xf21b() // UNK_0xf21b
{
  Push(0x000b);
  Push(0); // 0

  do // (DO)
  {
  BLT(); // BLT
  Push(0x0032);
  MS(); // MS

  } while(...); // (LOOP) 0xfff6
}


// ================================================
// 0xf231: WORD 'UNK_0xf233' codep=0x224c parp=0xf233
// ================================================

void UNK_0xf233() // UNK_0xf233
{
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _st__ex__gt_(); // <!>
  Push(pp_ESC_minus_EN); // ESC-EN
  _099(); // 099
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  UNK_0xf1e5(); // UNK_0xf1e5
  UNK_0xf21b(); // UNK_0xf21b

  label834:
  XYSCAN(); // XYSCAN
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label833;

  CLICK(); // CLICK
  BLT(); // BLT
  Push(pp_EYEXY); // EYEXY
  Push(Pop()+2); // 2+
  _st__plus__ex__gt_(); // <+!>
  Push(pp_EYEXY); // EYEXY
  _st__plus__ex__gt_(); // <+!>
  UNK_0xf199(); // UNK_0xf199
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  Push(0x004e);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _st__ex__gt_(); // <!>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  goto label835;

  label833:
  Pop(); Pop();// 2DROP

  label835:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label834;

  Push(pp_ESC_minus_EN); // ESC-EN
  ON(); // ON
}


// ================================================
// 0xf28b: WORD 'WALK&TALK' codep=0x224c parp=0xf299
// ================================================

void WALK_and_TALK() // WALK&TALK
{
  UNK_0xf233(); // UNK_0xf233
  _at_CRS(); // @CRS
  UNK_0xe908(); // UNK_0xe908
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_minus_(); // ?ICONS-
  UNK_0xea6a(); // UNK_0xea6a
  Push(0xbe25);
  MODULE(); // MODULE
  _ex_CRS(); // !CRS
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xf2bb: WORD 'UNK_0xf2bd' codep=0x224c parp=0xf2bd
// ================================================

void UNK_0xf2bd() // UNK_0xf2bd
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  Push(0); // 0
  Push(0); // 0
  UNK_0xe9da(); // UNK_0xe9da
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  D_eq_(); // D=
  if (Pop() == 0) goto label847;

  PRINT("HIT!", 4); // (.")
  goto label848;

  label847:
  PRINT("MISSED!", 7); // (.")

  label848:
  Push(0x03e8);
  MS(); // MS

// ================================================
// 0xf2f3: WORD 'UNK_0xf2f5' codep=0x902a parp=0xf2f5
// ================================================
}


// ================================================
// 0xf2f6: WORD 'UNK_0xf2f8' codep=0x224c parp=0xf2f8
// ================================================

void UNK_0xf2f8() // UNK_0xf2f8
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _ex_COLOR(); // !COLOR
  _gt_MAINVI(); // >MAINVI
  UNK_0xe9fa(); // UNK_0xe9fa
  WLD_gt_SCR(); // WLD>SCR
  Push(Pop()+2); // 2+
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
  SWAP(); // SWAP
  Push(pp_WEAPXY); // WEAPXY
  _2_at_(); // 2@
  WLD_gt_SCR(); // WLD>SCR
  _1PIX(); // 1PIX
  LLINE(); // LLINE
  _2PIX(); // 2PIX
  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  UNK_0xe6ea(); // UNK_0xe6ea
}


// ================================================
// 0xf326: WORD 'UNK_0xf328' codep=0x224c parp=0xf328
// ================================================

void UNK_0xf328() // UNK_0xf328
{
  if (Pop() == 0) goto label844;

  RED(); // RED
  goto label846;

  label844:
  DK_minus_BLUE(); // DK-BLUE

  label846:
  UNK_0xf2f8(); // UNK_0xf2f8
}


// ================================================
// 0xf338: WORD 'UNK_0xf33a' codep=0x224c parp=0xf33a
// ================================================

void UNK_0xf33a() // UNK_0xf33a
{
  Push(0xec78);
  DUP(); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _st_D_ex__gt_(); // <D!>
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xf348: WORD 'TV-DISP' codep=0x224c parp=0xf354
// ================================================

void TV_minus_DISP() // TV-DISP
{
  DCLIPSE(); // DCLIPSE
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x411c(); // UNK_0x411c
  UNK_0x5445(); // UNK_0x5445
  UNK_0x564b(); // UNK_0x564b
  UNK_0x5443(); // UNK_0x5443
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x2049(); // UNK_0x2049
  UNK_0x4556(); // UNK_0x4556
  UNK_0x5254(); // UNK_0x5254
  UNK_0x4943(); // UNK_0x4943
  UNK_0x2050(); // UNK_0x2050
  UNK_0x4558(); // UNK_0x4558
  UNK_0x494a(); // UNK_0x494a
  UNK_0x4c45(); // UNK_0x4c45
  UNK_0xf147(); // UNK_0xf147
  UNK_0xc4a1(); // UNK_0xc4a1
  UNK_0xd054(); // UNK_0xd054
  UNK_0x3265(); // UNK_0x3265
  UNK_0x226f(); // UNK_0x226f
  UNK_0x575b(); // UNK_0x575b
  UNK_0x546f(); // UNK_0x546f
  UNK_0x655c(); // UNK_0x655c
  UNK_0xe76f(); // UNK_0xe76f
  UNK_0x6560(); // UNK_0x6560
  UNK_0xc46f(); // UNK_0xc46f
  UNK_0x4654(); // UNK_0x4654
  UNK_0xe95f(); // UNK_0xe95f
  UNK_0x514e(); // UNK_0x514e
  UNK_0xe95f(); // UNK_0xe95f
  UNK_0xed4e(); // UNK_0xed4e
  UNK_0x5d96(); // UNK_0x5d96
  UNK_0x1419(); // UNK_0x1419
  UNK_0x0a02(); // UNK_0x0a02
  UNK_0xe95c(); // UNK_0xe95c
  UNK_0x614e(); // UNK_0x614e
  UNK_0x11f3(); // UNK_0x11f3
  UNK_0xc4f3(); // UNK_0xc4f3
  UNK_0xff54(); // UNK_0xff54
  UNK_0x3266(); // UNK_0x3266
  UNK_0x5d6f(); // UNK_0x5d6f
  UNK_0x8119(); // UNK_0x8119
  UNK_0xd9d2(); // UNK_0xd9d2
  UNK_0x4786(); // UNK_0x4786
  UNK_0x38f1(); // UNK_0x38f1
  UNK_0x6ff5(); // UNK_0x6ff5
  UNK_0x4ff0(); // UNK_0x4ff0
  TABLE(); // TABLE
  UNK_0x9d52(); // UNK_0x9d52
  UNK_0x5d88(); // UNK_0x5d88
  UNK_0x6419(); // UNK_0x6419
  UNK_0xa202(); // UNK_0xa202
  UNK_0xe960(); // UNK_0xe960
  UNK_0x904e(); // UNK_0x904e
  UNK_0x1e18(); // UNK_0x1e18

// ================================================
// 0xf3c5: WORD 'TV-CLEANU' codep=0x224c parp=0xf3d3
// ================================================
  UNK_0x8af0(); // UNK_0x8af0
  UNK_0x5656(); // UNK_0x5656
  UNK_0x432f(); // UNK_0x432f
  UNK_0x454e(); // UNK_0x454e
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x4cd7(); // UNK_0x4cd7
  UNK_0x7d24(); // UNK_0x7d24

void TV_minus_CLEANU() // TV-CLEANU
{
  UNK_0x90f2(); // UNK_0x90f2
  UNK_0x2918(); // UNK_0x2918

// ================================================
// 0xf3d7: WORD 'UNK_0xf3d9' codep=0x1d29 parp=0xf3d9
// ================================================
  UNK_0x3a1f(); // UNK_0x3a1f
  UNK_0x4c22(); // UNK_0x4c22
  UNK_0x2e24(); // UNK_0x2e24
  UNK_0x2011(); // UNK_0x2011
  UNK_0x3d11(); // UNK_0x3d11
  UNK_0xc411(); // UNK_0xc411
  UNK_0xfa4d(); // UNK_0xfa4d
  UNK_0x0817(); // UNK_0x0817
  UNK_0x7202(); // UNK_0x7202
  UNK_0x6011(); // UNK_0x6011
  UNK_0x0418(); // UNK_0x0418
  UNK_0x9202(); // UNK_0x9202
  UNK_0x9011(); // UNK_0x9011
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf3f3: WORD 'UNK_0xf3f5' codep=0x224c parp=0xf3f5
// ================================================
  UNK_0xc624(); // UNK_0xc624

void UNK_0xf3f5() // UNK_0xf3f5
{
  UNK_0x5dea(); // UNK_0x5dea
  UNK_0x0a19(); // UNK_0x0a19
  UNK_0x4c02(); // UNK_0x4c02
  UNK_0x2011(); // UNK_0x2011
  UNK_0x5d11(); // UNK_0x5d11
  UNK_0x1b19(); // UNK_0x1b19
  UNK_0xc402(); // UNK_0xc402
  UNK_0x464d(); // UNK_0x464d
  UNK_0xd714(); // UNK_0xd714
  UNK_0x16f5(); // UNK_0x16f5
  UNK_0x906f(); // UNK_0x906f
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf40d: WORD 'UNK_0xf40f' codep=0x224c parp=0xf40f
// ================================================
  UNK_0xd724(); // UNK_0xd724

void UNK_0xf40f() // UNK_0xf40f
{
  UNK_0xaef5(); // UNK_0xaef5
  UNK_0xfa0d(); // UNK_0xfa0d
  UNK_0x0a17(); // UNK_0x0a17
  UNK_0xdb02(); // UNK_0xdb02
  UNK_0xf2f5(); // UNK_0xf2f5
  UNK_0xdb10(); // UNK_0xdb10
  UNK_0xf2f5(); // UNK_0xf2f5
  UNK_0x9010(); // UNK_0x9010
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf421: WORD 'UNK_0xf423' codep=0x224c parp=0xf423
// ================================================
  UNK_0x2e24(); // UNK_0x2e24

void UNK_0xf423() // UNK_0xf423
{
  UNK_0xea55(); // UNK_0xea55
  UNK_0x8999(); // UNK_0x8999
  UNK_0xfa14(); // UNK_0xfa14
  UNK_0x0417(); // UNK_0x0417
  UNK_0x2002(); // UNK_0x2002
  UNK_0xc311(); // UNK_0xc311
  UNK_0xae5d(); // UNK_0xae5d
  UNK_0xf60d(); // UNK_0xf60d
  UNK_0x2d11(); // UNK_0x2d11
  UNK_0xfa14(); // UNK_0xfa14
  UNK_0x0817(); // UNK_0x0817
  UNK_0x2002(); // UNK_0x2002
  UNK_0x6011(); // UNK_0x6011
  UNK_0x0418(); // UNK_0x0418
  UNK_0xb802(); // UNK_0xb802
  UNK_0xc33d(); // UNK_0xc33d
  UNK_0xae5d(); // UNK_0xae5d
  UNK_0xf60d(); // UNK_0xf60d
  UNK_0x7211(); // UNK_0x7211
  UNK_0x1b11(); // UNK_0x1b11
  UNK_0xfd63(); // UNK_0xfd63
  UNK_0xdb4e(); // UNK_0xdb4e
  UNK_0xd29d(); // UNK_0xd29d
  UNK_0x2ea1(); // UNK_0x2ea1
  UNK_0x2011(); // UNK_0x2011
  UNK_0xd811(); // UNK_0xd811
  UNK_0xdceb(); // UNK_0xdceb
  UNK_0x0e1d(); // UNK_0x0e1d
  UNK_0x4943(); // UNK_0x4943
  UNK_0x2c4f(); // UNK_0x2c4f
  UNK_0x5422(); // UNK_0x5422
  UNK_0x454a(); // UNK_0x454a
  UNK_0x2050(); // UNK_0x2050
  UNK_0x4948(); // UNK_0x4948
  UNK_0x4554(); // UNK_0x4554
}


// ================================================
// 0xf46c: WORD 'UNK_0xf46e' codep=0x1d29 parp=0xf46e
// ================================================
// 0xf46e: db 0x3a 0x20 ': '

// ================================================
// 0xf470: WORD 'UNK_0xf472' codep=0x224c parp=0xf472
// ================================================

void UNK_0xf472() // UNK_0xf472
{
  Push(pp_UNK_0xf46e); // UNK_0xf46e
  _099(); // 099
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_minus_(); // ?ICONS-
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label836;

  Push(pp_IINDEX); // IINDEX
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0); // 0

  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  DUP(); // DUP
  Push(0x002f);
  Push(0x0031);
  WITHIN(); // WITHIN
  SWAP(); // SWAP
  Push(0x005b);
  Push(0x005f);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label837;

  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_minus_C(); // @INST-C
  Push(0x0044);
  _eq_(); // =
  Push(pp_UNK_0xf3d9); // UNK_0xf3d9
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label839;

  UNK_0xe824(); // UNK_0xe824

  label839:
  ICLOSE(); // ICLOSE

  label837:
  Push(pp_UNK_0xf46e); // UNK_0xf46e
  Push(Read16(Pop())); // @
  MAX(); // MAX
  Push(pp_UNK_0xf46e); // UNK_0xf46e
  _ex_(); // !

  } while(...); // (LOOP) 0xffb0
  R_gt_(); // R>
  POINT_gt_I(); // POINT>I
  Push(pp_UNK_0xf46e); // UNK_0xf46e
  Push(Read16(Pop())); // @
  goto label838;

  label836:
  Push(cc__minus_1); // -1

  label838:
}


// ================================================
// 0xf4f2: WORD 'DO.WEAPON' codep=0x224c parp=0xf500
// ================================================

void DO_dot_WEAPON() // DO.WEAPON
{
  CTERASE(); // CTERASE
  UNK_0xf423(); // UNK_0xf423
  UNK_0xf3f5(); // UNK_0xf3f5
  UNK_0xf233(); // UNK_0xf233
  UNK_0xf472(); // UNK_0xf472
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label843;

  Push(pp_TVEHICL); // TVEHICL
  _at__gt_C_plus_S(); // @>C+S
  DUP(); // DUP
  DUP(); // DUP
  _gt_R(); // >R
  R_at_(); // R@
  UNK_0xe73a(); // UNK_0xe73a
  C_ex_(); // C!
  Push(Pop()+1); // 1+
  Push(0xfed4);
  Push(Pop() * Pop()); // *
  INST_minus_QT(); // INST-QT
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  UNK_0xf40f(); // UNK_0xf40f
  Push(pp_WEAPXY); // WEAPXY
  _st_D_ex__gt_(); // <D!>
  UNK_0xf328(); // UNK_0xf328
  UNK_0xf2bd(); // UNK_0xf2bd
  R_gt_(); // R>
  UNK_0xecee(); // UNK_0xecee
  goto label852;

  label843:
  Pop(); // DROP

  label852:
  UNK_0xf33a(); // UNK_0xf33a
  UNK_0xf151(); // UNK_0xf151
  CTERASE(); // CTERASE
}

// 0xf552: db 0x54 0x2e 0x56 0x2e 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'T.V.__________ '
  