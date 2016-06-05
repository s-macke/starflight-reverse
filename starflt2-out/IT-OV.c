// ====== OVERLAY 'IT-OV' ======

#include"cpu.h"

// store offset = 0xee80
// overlay size   = 0x06e0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x0002  codep:0x0000 parp:0x0002 size:0x0004 C-string:'UNK_0x0002'
// 1870:      UNK_0x0008  codep:0x0000 parp:0x0008 size:0x0001 C-string:'UNK_0x0008'
// 1871:      UNK_0x000b  codep:0x0000 parp:0x000b size:0x0000 C-string:'UNK_0x000b'
// 1872:      UNK_0x000d  codep:0x0000 parp:0x000d size:0x0009 C-string:'UNK_0x000d'
// 1873:      UNK_0x0018  codep:0x0000 parp:0x0018 size:0x0002 C-string:'UNK_0x0018'
// 1874:      UNK_0x001c  codep:0x0000 parp:0x001c size:0xffffffff C-string:'UNK_0x001c'
// 1875:      UNK_0x001d  codep:0x0000 parp:0x001d size:0xffffffff C-string:'UNK_0x001d'
// 1876:      UNK_0x001e  codep:0x0000 parp:0x001e size:0x0026 C-string:'UNK_0x001e'
// 1877:      UNK_0x0046  codep:0x0000 parp:0x0046 size:0x03d0 C-string:'UNK_0x0046'
// 1878:      UNK_0x0418  codep:0x0002 parp:0x0418 size:0x01fe C-string:'UNK_0x0418'
// 1879:      UNK_0x0618  codep:0x414e parp:0x0618 size:0x0187 C-string:'UNK_0x0618'
// 1880:      UNK_0x07a1  codep:0xf400 parp:0x07a1 size:0x0074 C-string:'UNK_0x07a1'
// 1881:      UNK_0x0817  codep:0x5452 parp:0x0817 size:0x01f8 C-string:'UNK_0x0817'
// 1882:      UNK_0x0a11  codep:0x2789 parp:0x0a11 size:0x0004 C-string:'UNK_0x0a11'
// 1883:      UNK_0x0a17  codep:0x524f parp:0x0a17 size:0x0000 C-string:'UNK_0x0a17'
// 1884:      UNK_0x0a19  codep:0xab45 parp:0x0a19 size:0x05fe C-string:'UNK_0x0a19'
// 1885:      UNK_0x1019  codep:0x4058 parp:0x1019 size:0x03fe C-string:'UNK_0x1019'
// 1886:      UNK_0x1419  codep:0x0c92 parp:0x1419 size:0x0026 C-string:'UNK_0x1419'
// 1887:      UNK_0x1441  codep:0x617a parp:0x1441 size:0x03d6 C-string:'UNK_0x1441'
// 1888:      UNK_0x1819  codep:0x5b18 parp:0x1819 size:0x04d6 C-string:'UNK_0x1819'
// 1889:      UNK_0x1cf1  codep:0x1353 parp:0x1cf1 size:0x0126 C-string:'UNK_0x1cf1'
// 1890:      UNK_0x1e19  codep:0x3b16 parp:0x1e19 size:0x00fe C-string:'UNK_0x1e19'
// 1891:      UNK_0x1f19  codep:0x200d parp:0x1f19 size:0x00fd C-string:'UNK_0x1f19'
// 1892:      UNK_0x2018  codep:0x6465 parp:0x2018 size:0xffffffff C-string:'UNK_0x2018'
// 1893:      UNK_0x2019  codep:0x6564 parp:0x2019 size:0x002c C-string:'UNK_0x2019'
// 1894:      UNK_0x2047  codep:0x206e parp:0x2047 size:0x0007 C-string:'UNK_0x2047'
// 1895:      UNK_0x2050  codep:0x7369 parp:0x2050 size:0x0002 C-string:'UNK_0x2050'
// 1896:      UNK_0x2054  codep:0x9064 parp:0x2054 size:0xffffffff C-string:'UNK_0x2054'
// 1897:      UNK_0x2055  codep:0x1690 parp:0x2055 size:0x0004 C-string:'UNK_0x2055'
// 1898:      UNK_0x205b  codep:0x0bae parp:0x205b size:0x00e4 C-string:'UNK_0x205b'
// 1899:      UNK_0x2141  codep:0x200f parp:0x2141 size:0x010b C-string:'UNK_0x2141'
// 1900:      UNK_0x224e  codep:0x4343 parp:0x224e size:0x03c9 C-string:'UNK_0x224e'
// 1901:      UNK_0x2619  codep:0x5926 parp:0x2619 size:0x02d5 C-string:'UNK_0x2619'
// 1902:      UNK_0x28f0  codep:0x200e parp:0x28f0 size:0x00fe C-string:'UNK_0x28f0'
// 1903:      UNK_0x29f0  codep:0xd98e parp:0x29f0 size:0x0227 C-string:'UNK_0x29f0'
// 1904:      UNK_0x2c19  codep:0x2c08 parp:0x2c19 size:0x002c C-string:'UNK_0x2c19'
// 1905:      UNK_0x2c47  codep:0xc54c parp:0x2c47 size:0x000d C-string:'UNK_0x2c47'
// 1906:      UNK_0x2c56  codep:0x4c1d parp:0x2c56 size:0x00da C-string:'UNK_0x2c56'
// 1907:      UNK_0x2d32  codep:0xd341 parp:0x2d32 size:0x000d C-string:'UNK_0x2d32'
// 1908:      UNK_0x2d41  codep:0x463d parp:0x2d41 size:0x0013 C-string:'UNK_0x2d41'
// 1909:      UNK_0x2d56  codep:0x2cd8 parp:0x2d56 size:0x00c1 C-string:'UNK_0x2d56'
// 1910:      UNK_0x2e19  codep:0x2020 parp:0x2e19 size:0x002b C-string:'UNK_0x2e19'
// 1911:      UNK_0x2e46  codep:0x4243 parp:0x2e46 size:0x000e C-string:'UNK_0x2e46'
// 1912:      UNK_0x2e56  codep:0x468a parp:0x2e56 size:0x010c C-string:'UNK_0x2e56'
// 1913:      UNK_0x2f64  codep:0xf207 parp:0x2f64 size:0x00a2 C-string:'UNK_0x2f64'
// 1914:      UNK_0x3008  codep:0x5d2e parp:0x3008 size:0x0028 C-string:'UNK_0x3008'
// 1915:      UNK_0x3032  codep:0xe70b parp:0x3032 size:0x01ce C-string:'UNK_0x3032'
// 1916:      UNK_0x3202  codep:0x6012 parp:0x3202 size:0x000c C-string:'UNK_0x3202'
// 1917:      UNK_0x3210  codep:0x425b parp:0x3210 size:0x002f C-string:'UNK_0x3210'
// 1918:      UNK_0x3241  codep:0x4341 parp:0x3241 size:0x0068 C-string:'UNK_0x3241'
// 1919:      UNK_0x32ab  codep:0x16ba parp:0x32ab size:0x07c3 C-string:'UNK_0x32ab'
// 1920:      UNK_0x3a70  codep:0xd56f parp:0x3a70 size:0x00fd C-string:'UNK_0x3a70'
// 1921:      UNK_0x3b6f  codep:0x9306 parp:0x3b6f size:0x02b5 C-string:'UNK_0x3b6f'
// 1922:      UNK_0x3e26  codep:0x853c parp:0x3e26 size:0x0027 C-string:'UNK_0x3e26'
// 1923:      UNK_0x3e4f  codep:0xba56 parp:0x3e4f size:0x00b8 C-string:'UNK_0x3e4f'
// 1924:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0x0001 C-string:'UNK_0x3f09'
// 1925:      UNK_0x3f0c  codep:0xcd0e parp:0x3f0c size:0x0021 C-string:'UNK_0x3f0c'
// 1926:      UNK_0x3f2f  codep:0x0022 parp:0x3f2f size:0x0010 C-string:'UNK_0x3f2f'
// 1927:      UNK_0x3f41  codep:0x1660 parp:0x3f41 size:0x0201 C-string:'UNK_0x3f41'
// 1928:      UNK_0x4144  codep:0x8641 parp:0x4144 size:0x0000 C-string:'UNK_0x4144'
// 1929:      UNK_0x4146  codep:0x5543 parp:0x4146 size:0x0002 C-string:'UNK_0x4146'
// 1930:      UNK_0x414a  codep:0xcb4c parp:0x414a size:0x0003 C-string:'UNK_0x414a'
// 1931:      UNK_0x414f  codep:0xae2b parp:0x414f size:0x0001 C-string:'UNK_0x414f'
// 1932:      UNK_0x4152  codep:0x175d parp:0x4152 size:0x01ef C-string:'UNK_0x4152'
// 1933:      UNK_0x4343  codep:0x442d parp:0x4343 size:0x0015 C-string:'UNK_0x4343'
// 1934:      UNK_0x435a  codep:0x9042 parp:0x435a size:0x00ef C-string:'UNK_0x435a'
// 1935:      UNK_0x444b  codep:0x3e48 parp:0x444b size:0x00d5 C-string:'UNK_0x444b'
// 1936:      UNK_0x4522  codep:0x3b9f parp:0x4522 size:0x0020 C-string:'UNK_0x4522'
// 1937:      UNK_0x4544  codep:0x125f parp:0x4544 size:0xffffffff C-string:'UNK_0x4544'
// 1938:      UNK_0x4545  codep:0xe012 parp:0x4545 size:0xffffffff C-string:'UNK_0x4545'
// 1939:      UNK_0x4546  codep:0x40e0 parp:0x4546 size:0xffffffff C-string:'UNK_0x4546'
// 1940:      UNK_0x4547  codep:0x2e40 parp:0x4547 size:0x0001 C-string:'UNK_0x4547'
// 1941:      UNK_0x454a  codep:0x125f parp:0x454a size:0x0006 C-string:'UNK_0x454a'
// 1942:      UNK_0x4552  codep:0x0f2e parp:0x4552 size:0x0000 C-string:'UNK_0x4552'
// 1943:      UNK_0x4554  codep:0x40d2 parp:0x4554 size:0x0000 C-string:'UNK_0x4554'
// 1944:      UNK_0x4556  codep:0x0bdf parp:0x4556 size:0x00f3 C-string:'UNK_0x4556'
// 1945:      UNK_0x464b  codep:0x616c parp:0x464b size:0x0209 C-string:'UNK_0x464b'
// 1946:      UNK_0x4856  codep:0x1d29 parp:0x4856 size:0x00ca C-string:'UNK_0x4856'
// 1947:      UNK_0x4922  codep:0x0db4 parp:0x4922 size:0x0032 C-string:'UNK_0x4922'
// 1948:      UNK_0x4956  codep:0x450a parp:0x4956 size:0x0032 C-string:'UNK_0x4956'
// 1949:      UNK_0x498a  codep:0x8800 parp:0x498a size:0x01b1 C-string:'UNK_0x498a'
// 1950:      UNK_0x4b3d  codep:0x0be8 parp:0x4b3d size:0x00d9 C-string:'UNK_0x4b3d'
// 1951:      UNK_0x4c18  codep:0x48e0 parp:0x4c18 size:0x0008 C-string:'UNK_0x4c18'
// 1952:      UNK_0x4c22  codep:0x5253 parp:0x4c22 size:0x00a2 C-string:'UNK_0x4c22'
// 1953:      UNK_0x4cc6  codep:0x5b4c parp:0x4cc6 size:0x005a C-string:'UNK_0x4cc6'
// 1954:      UNK_0x4d22  codep:0xc74c parp:0x4d22 size:0x002d C-string:'UNK_0x4d22'
// 1955:      UNK_0x4d51  codep:0x203a parp:0x4d51 size:0x00f0 C-string:'UNK_0x4d51'
// 1956:      UNK_0x4e43  codep:0x4185 parp:0x4e43 size:0x0002 C-string:'UNK_0x4e43'
// 1957:      UNK_0x4e47  codep:0xd941 parp:0x4e47 size:0x0008 C-string:'UNK_0x4e47'
// 1958:      UNK_0x4e51  codep:0x0db4 parp:0x4e51 size:0x00f2 C-string:'UNK_0x4e51'
// 1959:      UNK_0x4f45  codep:0xe415 parp:0x4f45 size:0x0009 C-string:'UNK_0x4f45'
// 1960:      UNK_0x4f50  codep:0x4e4f parp:0x4f50 size:0x0004 C-string:'UNK_0x4f50'
// 1961:      UNK_0x4f56  codep:0x0000 parp:0x4f56 size:0x00c4 C-string:'UNK_0x4f56'
// 1962:      UNK_0x501c  codep:0x0a4f parp:0x501c size:0x0025 C-string:'UNK_0x501c'
// 1963:      UNK_0x5043  codep:0x5986 parp:0x5043 size:0x000a C-string:'UNK_0x5043'
// 1964:      UNK_0x504f  codep:0x5785 parp:0x504f size:0x01f2 C-string:'UNK_0x504f'
// 1965:      UNK_0x5243  codep:0x4e49 parp:0x5243 size:0x0002 C-string:'UNK_0x5243'
// 1966:      UNK_0x5247  codep:0x2d53 parp:0x5247 size:0x00fe C-string:'UNK_0x5247'
// 1967:      UNK_0x5347  codep:0x412a parp:0x5347 size:0x0002 C-string:'UNK_0x5347'
// 1968:      UNK_0x534b  codep:0x74c8 parp:0x534b size:0x0008 C-string:'UNK_0x534b'
// 1969:      UNK_0x5355  codep:0x412a parp:0x5355 size:0x00cd C-string:'UNK_0x5355'
// 1970:      UNK_0x5424  codep:0x4258 parp:0x5424 size:0x0025 C-string:'UNK_0x5424'
// 1971:      UNK_0x544b  codep:0x29cb parp:0x544b size:0x000a C-string:'UNK_0x544b'
// 1972:      UNK_0x5457  codep:0x011d parp:0x5457 size:0x00f7 C-string:'UNK_0x5457'
// 1973:      UNK_0x5550  codep:0x291e parp:0x5550 size:0x00d2 C-string:'UNK_0x5550'
// 1974:      UNK_0x5624  codep:0x2900 parp:0x5624 size:0x06ea C-string:'UNK_0x5624'
// 1975:      UNK_0x5d10  codep:0x523f parp:0x5d10 size:0xffffffff C-string:'UNK_0x5d10'
// 1976:      UNK_0x5d11  codep:0x4552 parp:0x5d11 size:0x0000 C-string:'UNK_0x5d11'
// 1977:      UNK_0x5d13  codep:0x4150 parp:0x5d13 size:0x000f C-string:'UNK_0x5d13'
// 1978:      UNK_0x5d24  codep:0x001d parp:0x5d24 size:0xffffffff C-string:'UNK_0x5d24'
// 1979:      UNK_0x5d25  codep:0x0000 parp:0x5d25 size:0x0048 C-string:'UNK_0x5d25'
// 1980:      UNK_0x5d6f  codep:0x1b00 parp:0x5d6f size:0x007f C-string:'UNK_0x5d6f'
// 1981:      UNK_0x5df0  codep:0xd800 parp:0x5df0 size:0x0211 C-string:'UNK_0x5df0'
// 1982:      UNK_0x6003  codep:0x001d parp:0x6003 size:0x0008 C-string:'UNK_0x6003'
// 1983:      UNK_0x600d  codep:0x502d parp:0x600d size:0x00e1 C-string:'UNK_0x600d'
// 1984:      UNK_0x60f0  codep:0x5245 parp:0x60f0 size:0x031b C-string:'UNK_0x60f0'
// 1985:      UNK_0x640d  codep:0x5453 parp:0x640d size:0x0001 C-string:'UNK_0x640d'
// 1986:      UNK_0x6410  codep:0xd055 parp:0x6410 size:0x0007 C-string:'UNK_0x6410'
// 1987:      UNK_0x6419  codep:0x8963 parp:0x6419 size:0x03f2 C-string:'UNK_0x6419'
// 1988:      UNK_0x680d  codep:0x9c53 parp:0x680d size:0x09f3 C-string:'UNK_0x680d'
// 1989:      UNK_0x7202  codep:0x4c49 parp:0x7202 size:0x0010 C-string:'UNK_0x7202'
// 1990:      UNK_0x7214  codep:0xd1ce parp:0x7214 size:0x0027 C-string:'UNK_0x7214'
// 1991:      UNK_0x723d  codep:0x1471 parp:0x723d size:0x07e5 C-string:'UNK_0x723d'
// 1992:      UNK_0x7a24  codep:0xa075 parp:0x7a24 size:0x0217 C-string:'UNK_0x7a24'
// 1993:      UNK_0x7c3d  codep:0x74de parp:0x7c3d size:0x00e5 C-string:'UNK_0x7c3d'
// 1994:      UNK_0x7d24  codep:0x4649 parp:0x7d24 size:0x01eb C-string:'UNK_0x7d24'
// 1995:      UNK_0x7f11  codep:0xf07c parp:0x7f11 size:0x001c C-string:'UNK_0x7f11'
// 1996:      UNK_0x7f2f  codep:0x9756 parp:0x7f2f size:0x0810 C-string:'UNK_0x7f2f'
// 1997:      UNK_0x8741  codep:0x1005 parp:0x8741 size:0x0068 C-string:'UNK_0x8741'
// 1998:      UNK_0x87ab  codep:0x6d16 parp:0x87ab size:0x0155 C-string:'UNK_0x87ab'
// 1999:      UNK_0x8902  codep:0x86f8 parp:0x8902 size:0x000d C-string:'UNK_0x8902'
// 2000:      UNK_0x8911  codep:0x5249 parp:0x8911 size:0x00ef C-string:'UNK_0x8911'
// 2001:      UNK_0x8a02  codep:0x1639 parp:0x8a02 size:0x000c C-string:'UNK_0x8a02'
// 2002:      UNK_0x8a10  codep:0x0a39 parp:0x8a10 size:0x01e1 C-string:'UNK_0x8a10'
// 2003:      UNK_0x8bf3  codep:0x6d0a parp:0x8bf3 size:0x007a C-string:'UNK_0x8bf3'
// 2004:      UNK_0x8c6f  codep:0x3b87 parp:0x8c6f size:0x03fe C-string:'UNK_0x8c6f'
// 2005:      UNK_0x906f  codep:0x5445 parp:0x906f size:0x000a C-string:'UNK_0x906f'
// 2006:      UNK_0x907b  codep:0x125f parp:0x907b size:0x0022 C-string:'UNK_0x907b'
// 2007:      UNK_0x909f  codep:0x6d8a parp:0x909f size:0x0009 C-string:'UNK_0x909f'
// 2008:      UNK_0x90aa  codep:0x4f4c parp:0x90aa size:0x0046 C-string:'UNK_0x90aa'
// 2009:      UNK_0x90f2  codep:0x1690 parp:0x90f2 size:0xffffffff C-string:'UNK_0x90f2'
// 2010:      UNK_0x90f3  codep:0x3b16 parp:0x90f3 size:0x011b C-string:'UNK_0x90f3'
// 2011:      UNK_0x9210  codep:0xe70e parp:0x9210 size:0xffffffff C-string:'UNK_0x9210'
// 2012:      UNK_0x9211  codep:0x0fe7 parp:0x9211 size:0x00dd C-string:'UNK_0x9211'
// 2013:      UNK_0x92f0  codep:0x2b58 parp:0x92f0 size:0x044f C-string:'UNK_0x92f0'
// 2014:      UNK_0x9741  codep:0xae5b parp:0x9741 size:0x03cd C-string:'UNK_0x9741'
// 2015:      UNK_0x9b10  codep:0x9d0e parp:0x9b10 size:0x00fb C-string:'UNK_0x9b10'
// 2016:      UNK_0x9c0d  codep:0x1690 parp:0x9c0d size:0x006d C-string:'UNK_0x9c0d'
// 2017:      UNK_0x9c7c  codep:0x25fc parp:0x9c7c size:0x058f C-string:'UNK_0x9c7c'
// 2018:      UNK_0xa20d  codep:0x175d parp:0xa20d size:0x0215 C-string:'UNK_0xa20d'
// 2019:      UNK_0xa424  codep:0x413a parp:0xa424 size:0x0849 C-string:'UNK_0xa424'
// 2020:      UNK_0xac6f  codep:0x0004 parp:0xac6f size:0x0091 C-string:'UNK_0xac6f'
// 2021:      UNK_0xad02  codep:0x2415 parp:0xad02 size:0x0009 C-string:'UNK_0xad02'
// 2022:      UNK_0xad0d  codep:0x1035 parp:0xad0d size:0x0060 C-string:'UNK_0xad0d'
// 2023:      UNK_0xad6f  codep:0x0e32 parp:0xad6f size:0x00ef C-string:'UNK_0xad6f'
// 2024:      UNK_0xae60  codep:0x160f parp:0xae60 size:0x0014 C-string:'UNK_0xae60'
// 2025:      UNK_0xae76  codep:0x8f16 parp:0xae76 size:0x0033 C-string:'UNK_0xae76'
// 2026:      UNK_0xaeab  codep:0x1690 parp:0xaeab size:0x0043 C-string:'UNK_0xaeab'
// 2027:      UNK_0xaef0  codep:0x100c parp:0xaef0 size:0x0132 C-string:'UNK_0xaef0'
// 2028:      UNK_0xb024  codep:0xa33a parp:0xb024 size:0x0385 C-string:'UNK_0xb024'
// 2029:      UNK_0xb3ab  codep:0x6d16 parp:0xb3ab size:0x0455 C-string:'UNK_0xb3ab'
// 2030:      UNK_0xb802  codep:0x0000 parp:0xb802 size:0x05ed C-string:'UNK_0xb802'
// 2031:      UNK_0xbdf1  codep:0xc516 parp:0xbdf1 size:0x0650 C-string:'UNK_0xbdf1'
// 2032:      UNK_0xc443  codep:0xf116 parp:0xc443 size:0x03bd C-string:'UNK_0xc443'
// 2033:      UNK_0xc802  codep:0xff00 parp:0xc802 size:0x040c C-string:'UNK_0xc802'
// 2034:      UNK_0xcc10  codep:0xff22 parp:0xcc10 size:0x0412 C-string:'UNK_0xcc10'
// 2035:      UNK_0xd024  codep:0x5453 parp:0xd024 size:0x0425 C-string:'UNK_0xd024'
// 2036:      UNK_0xd44b  codep:0x0116 parp:0xd44b size:0x01c0 C-string:'UNK_0xd44b'
// 2037:      UNK_0xd60d  codep:0x0000 parp:0xd60d size:0x0101 C-string:'UNK_0xd60d'
// 2038:      UNK_0xd710  codep:0x0000 parp:0xd710 size:0xffffffff C-string:'UNK_0xd710'
// 2039:      UNK_0xd711  codep:0x0000 parp:0xd711 size:0x005c C-string:'UNK_0xd711'
// 2040:      UNK_0xd76f  codep:0x0000 parp:0xd76f size:0x00fe C-string:'UNK_0xd76f'
// 2041:      UNK_0xd86f  codep:0x2001 parp:0xd86f size:0x0291 C-string:'UNK_0xd86f'
// 2042:      UNK_0xdb02  codep:0x7522 parp:0xdb02 size:0x000a C-string:'UNK_0xdb02'
// 2043:      UNK_0xdb0e  codep:0x7522 parp:0xdb0e size:0x009b C-string:'UNK_0xdb0e'
// 2044:      UNK_0xdbab  codep:0xdb17 parp:0xdbab size:0x0443 C-string:'UNK_0xdbab'
// 2045:      UNK_0xdff0  codep:0xbb17 parp:0xdff0 size:0x071e C-string:'UNK_0xdff0'
// 2046:      UNK_0xe710  codep:0x3b7f parp:0xe710 size:0xffffffff C-string:'UNK_0xe710'
// 2047:      UNK_0xe711  codep:0x8a3b parp:0xe711 size:0x005c C-string:'UNK_0xe711'
// 2048:      UNK_0xe76f  codep:0x4c16 parp:0xe76f size:0x009c C-string:'UNK_0xe76f'
// 2049:      UNK_0xe80d  codep:0x175d parp:0xe80d size:0x009c C-string:'UNK_0xe80d'
// 2050:      UNK_0xe8ab  codep:0x6d16 parp:0xe8ab size:0x0043 C-string:'UNK_0xe8ab'
// 2051:      UNK_0xe8f0  codep:0x2053 parp:0xe8f0 size:0x0210 C-string:'UNK_0xe8f0'
// 2052:      UNK_0xeb02  codep:0x2b00 parp:0xeb02 size:0x039a C-string:'UNK_0xeb02'
// 2053:      UNK_0xee9e  codep:0x7394 parp:0xee9e size:0x001e C-string:'UNK_0xee9e'
// 2054:      UNK_0xeebe  codep:0x2214 parp:0xeebe size:0x002a C-string:'UNK_0xeebe'
// 2055:      UNK_0xeeea  codep:0x224c parp:0xeeea size:0x0010 C-string:'UNK_0xeeea'
// 2056:      UNK_0xeefc  codep:0x224c parp:0xeefc size:0x000e C-string:'UNK_0xeefc'
// 2057:      UNK_0xef0c  codep:0x224c parp:0xef0c size:0x0020 C-string:'UNK_0xef0c'
// 2058:      UNK_0xef2e  codep:0x224c parp:0xef2e size:0x0016 C-string:'UNK_0xef2e'
// 2059:      UNK_0xef46  codep:0x1d29 parp:0xef46 size:0x0002 C-string:'UNK_0xef46'
// 2060:      UNK_0xef4a  codep:0x224c parp:0xef4a size:0x00b3 C-string:'UNK_0xef4a'
// 2061:      UNK_0xefff  codep:0x224c parp:0xefff size:0x002e C-string:'UNK_0xefff'
// 2062:      UNK_0xf02f  codep:0xeefa parp:0xf02f size:0x0018 C-string:'UNK_0xf02f'
// 2063:      UNK_0xf049  codep:0x224c parp:0xf049 size:0x0089 C-string:'UNK_0xf049'
// 2064:      UNK_0xf0d4  codep:0xeed0 parp:0xf0d4 size:0x0032 C-string:'UNK_0xf0d4'
// 2065:      UNK_0xf108  codep:0xa956 parp:0xf108 size:0x0016 C-string:'UNK_0xf108'
// 2066:        DATE$>AD  codep:0x224c parp:0xf12b size:0x006f C-string:'DATE_do__gt_AD'
// 2067:      UNK_0xf19c  codep:0xeefa parp:0xf19c size:0x000c C-string:'UNK_0xf19c'
// 2068:      UNK_0xf1aa  codep:0xa97a parp:0xf1aa size:0x002a C-string:'UNK_0xf1aa'
// 2069:      UNK_0xf1d6  codep:0xeea4 parp:0xf1d6 size:0x0014 C-string:'UNK_0xf1d6'
// 2070:        IDENT-IT  codep:0x4b3b parp:0xf1f7 size:0x0014 C-string:'IDENT_minus_IT'
// 2071:      UNK_0xf20d  codep:0x001c parp:0xf20d size:0x0002 C-string:'UNK_0xf20d'
// 2072:      UNK_0xf211  codep:0x0044 parp:0xf211 size:0x0000 C-string:'UNK_0xf211'
// 2073:      UNK_0xf213  codep:0xf0d2 parp:0xf213 size:0x0000 C-string:'UNK_0xf213'
// 2074:        ITEM>PAD  codep:0x224c parp:0xf220 size:0x001f C-string:'ITEM_gt_PAD'
// 2075:      UNK_0xf241  codep:0xf575 parp:0xf241 size:0x0003 C-string:'UNK_0xf241'
// 2076:      UNK_0xf246  codep:0x224c parp:0xf246 size:0x000c C-string:'UNK_0xf246'
// 2077:      UNK_0xf254  codep:0x224c parp:0xf254 size:0x0006 C-string:'UNK_0xf254'
// 2078:      UNK_0xf25c  codep:0x224c parp:0xf25c size:0x0011 C-string:'UNK_0xf25c'
// 2079:      UNK_0xf26f  codep:0x3ef2 parp:0xf26f size:0x001d C-string:'UNK_0xf26f'
// 2080:      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x005a C-string:'UNK_0xf28e'
// 2081:        BOX>LIST  codep:0x224c parp:0xf2f5 size:0x003c C-string:'BOX_gt_LIST'
// 2082:        GET-BOXE  codep:0x224c parp:0xf33e size:0x0016 C-string:'GET_minus_BOXE'
// 2083:        MAKE-SCR  codep:0x224c parp:0xf361 size:0x002c C-string:'MAKE_minus_SCR'
// 2084:        DELETE-S  codep:0x224c parp:0xf39a size:0x0016 C-string:'DELETE_minus_S'
// 2085:        CLASS>BO  codep:0x4b3b parp:0xf3bd size:0x001c C-string:'CLASS_gt_BO'
// 2086:      UNK_0xf3db  codep:0x224c parp:0xf3db size:0x000e C-string:'UNK_0xf3db'
// 2087:        BOX>TOCS  codep:0x224c parp:0xf3f6 size:0x000e C-string:'BOX_gt_TOCS'
// 2088:        ?ELEMENT  codep:0x224c parp:0xf411 size:0x002c C-string:'_ask_ELEMENT'
// 2089:            >BOX  codep:0x224c parp:0xf446 size:0x0082 C-string:'_gt_BOX'
// 2090:          (BOX>)  codep:0x224c parp:0xf4d3 size:0x0036 C-string:'_ro_BOX_gt__rc_'
// 2091:            BOX>  codep:0x224c parp:0xf512 size:0x00fa C-string:'BOX_gt_'
// 2092:      UNK_0xf60e  codep:0x0000 parp:0xf60e size:0x0000 C-string:'UNK_0xf60e'
// 2093:      UNK_0xf610  codep:0x0000 parp:0xf610 size:0x03ff C-string:'UNK_0xf610'
// 2094:      UNK_0xfa11  codep:0x0000 parp:0xfa11 size:0x0001 C-string:'UNK_0xfa11'
// 2095:      UNK_0xfa14  codep:0x0000 parp:0xfa14 size:0x000e C-string:'UNK_0xfa14'
// 2096:      UNK_0xfa24  codep:0x0000 parp:0xfa24 size:0x00cc C-string:'UNK_0xfa24'
// 2097:      UNK_0xfaf2  codep:0x0000 parp:0xfaf2 size:0xfffffa6e C-string:'UNK_0xfaf2'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0x4856[202] = {0x4e, 0x95, 0x00, 0x00, 0xfa, 0x47, 0x84, 0x3f, 0x45, 0x52, 0xd2, 0x4c, 0x22, 0x8f, 0x39, 0xae, 0x0b, 0x2e, 0x0f, 0xf5, 0x12, 0x90, 0x16, 0x4c, 0x22, 0x4c, 0x48, 0xae, 0x0b, 0x50, 0x48, 0xae, 0x0b, 0x54, 0x48, 0xdf, 0x0b, 0x54, 0x48, 0x15, 0x10, 0x1e, 0x13, 0xb3, 0x39, 0xdf, 0x0b, 0x5d, 0x17, 0x03, 0x00, 0x98, 0x39, 0x5e, 0x0c, 0x15, 0x0c, 0xe0, 0x39, 0xdf, 0x0b, 0x54, 0x48, 0xa1, 0x39, 0xdf, 0x0b, 0x5d, 0x17, 0x4b, 0x00, 0x1c, 0x42, 0x90, 0x16, 0x04, 0x46, 0x85, 0x5b, 0x4c, 0x44, 0x53, 0xdd, 0x4c, 0x22, 0x6d, 0x48, 0x61, 0x48, 0x41, 0x0e, 0xfa, 0x15, 0x4a, 0x00, 0x15, 0x41, 0x92, 0x0c, 0x89, 0x12, 0xfa, 0x15, 0x40, 0x00, 0xb4, 0x0d, 0x58, 0x45, 0x15, 0x41, 0x92, 0x0c, 0x15, 0x41, 0x92, 0x0c, 0x8c, 0x45, 0xf0, 0x0d, 0x5f, 0x12, 0x07, 0x13, 0x50, 0x0e, 0xf5, 0x12, 0xfa, 0x15, 0x14, 0x00, 0x15, 0x41, 0x5e, 0x0c, 0x6d, 0x48, 0x61, 0x48, 0x90, 0x0e, 0x32, 0x0e, 0xb4, 0x0d, 0x60, 0x16, 0xdc, 0xff, 0xde, 0x0d, 0x90, 0x0e, 0x41, 0x0e, 0xfa, 0x15, 0x08, 0x00, 0x20, 0x0f, 0x15, 0x41, 0x5e, 0x0c, 0x90, 0x16, 0x29, 0x1d, 0x00, 0x52, 0x32, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x56, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x41, 0xd0, 0x46, 0x85, 0x28, 0x4c, 0x44, 0x53, 0xa9, 0x4c, 0x22, 0xa5, 0x2b, 0xae, 0x0b}; // UNK_0x4856
unsigned char UNK_0xef46[2] = {0x3a, 0x20}; // UNK_0xef46

const unsigned short int cc_UNK_0xeebe = 0x0011; // UNK_0xeebe


// 0xee92: db 0x6d 0x00 0x94 0x73 0x1c 0x1d 0x01 0x20 0xcd 0x6b 'm  s     k'

// ================================================
// 0xee9c: WORD 'UNK_0xee9e' codep=0x7394 parp=0xee9e
// ================================================
// 0xee9e: db 0x1c 0x1e 0x01 0x20 0xcd 0x6b '     k'
// 0xeea4: xchg   ax,sp
// 0xeea5: jae    EEB0
// 0xeea7: add    [bx+si],ah
// 0xeea9: sbb    dx,[si+6A]
// 0xeeac: xchg   ax,sp
// 0xeead: jae    EEB8
// 0xeeaf: sbb    [bp+si],al
// 0xeeb1: sbb    dx,[si+6A]
// 0xeeb4: adc    al,22
// 0xeeb6: or     al,[bx+si]
// 0xeeb8: adc    al,22
// 0xeeba: db     0F
// 0xeebb: add    [si],dl

// ================================================
// 0xeebc: WORD 'UNK_0xeebe' codep=0x2214 parp=0xeebe
// ================================================
// 0xeebe: db 0x11 0x00 0x14 0x22 0x0b 0x00 0x14 0x22 0x10 0x00 0x14 0x22 0x37 0x00 0x14 0x22 0x36 0x00 '   "   "   "7  "6 '
// 0xeed0: xchg   ax,sp
// 0xeed1: jae    EF17
// 0xeed3: add    [si],dl
// 0xeed5: and    al,[bx]
// 0xeed7: db     6F
// 0xeed8: xchg   ax,sp
// 0xeed9: jae    EF1F
// 0xeedb: adc    al,02
// 0xeedd: and    al,[bx]
// 0xeedf: db     6F
// 0xeee0: xchg   ax,sp
// 0xeee1: jae    EF27
// 0xeee3: sbb    al,01
// 0xeee5: and    al,[bx]
// 0xeee7: db     6F

// ================================================
// 0xeee8: WORD 'UNK_0xeeea' codep=0x224c parp=0xeeea
// ================================================

void UNK_0xeeea() // UNK_0xeeea
{
  SRDEPTH(); // SRDEPTH
  Push(0); // 0
  MAX(); // MAX
  Push(Pop()*2); // 2*
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
}


// ================================================
// 0xeefa: WORD 'UNK_0xeefc' codep=0x224c parp=0xeefc
// ================================================

void UNK_0xeefc() // UNK_0xeefc
{
  PAD(); // PAD
  Push(Pop()+1); // 1+
  Push(0x0026);
  Push(cc_BL); // BL
  FILL(); // FILL
}


// ================================================
// 0xef0a: WORD 'UNK_0xef0c' codep=0x224c parp=0xef0c
// ================================================

void UNK_0xef0c() // UNK_0xef0c
{
  Push(pp_TIME_minus_PA); // TIME-PA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_CTTOP); // CTTOP
  Push(Read16(Pop())); // @
  goto label2;

  label1:
  Push(0x0096);

  label2:
  Push(cc__7); // 7
  _minus_(); // -
  Push(cc__7); // 7
  SWAP(); // SWAP
  POS_dot_(); // POS.
}


// ================================================
// 0xef2c: WORD 'UNK_0xef2e' codep=0x224c parp=0xef2e
// ================================================

void UNK_0xef2e() // UNK_0xef2e
{
  Push(0x0025);
  OVER(); // OVER
  _minus_(); // -
  Push(Pop()*2); // 2*
  Push(cc__7); // 7
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  TYPE(); // TYPE
}


// ================================================
// 0xef44: WORD 'UNK_0xef46' codep=0x1d29 parp=0xef46
// ================================================
// 0xef46: db 0x3a 0x20 ': '

// ================================================
// 0xef48: WORD 'UNK_0xef4a' codep=0x224c parp=0xef4a
// ================================================

void UNK_0xef4a() // UNK_0xef4a
{
  _at_CRS(); // @CRS
  CTERASE(); // CTERASE
  _gt_1FONT(); // >1FONT
  UNK_0xef0c(); // UNK_0xef0c
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  PRINT("ATTENTION", 9); // (.")
  Push(cc__5); // 5
  SPACES(); // SPACES
  i++;
  } while(i<imax); // (LOOP) 0xffee

  GCR(); // GCR
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5424(); // UNK_0x5424
  UNK_0x454a(); // UNK_0x454a
  UNK_0x4d22(); // UNK_0x4d22
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x464b(); // UNK_0x464b
  UNK_0x5347(); // UNK_0x5347
  UNK_0x2d56(); // UNK_0x2d56
  UNK_0x4f45(); // UNK_0x4f45
  UNK_0x504f(); // UNK_0x504f
  UNK_0x5457(); // UNK_0x5457
  UNK_0x5247(); // UNK_0x5247
  WRITENE(); // WRITENE
  UNK_0x5043(); // UNK_0x5043
  UNK_0x4343(); // UNK_0x4343
  UNK_0x544b(); // UNK_0x544b
  UNK_0x205b(); // UNK_0x205b
  UNK_0x414a(); // UNK_0x414a
  Push(pp_FRESH); // FRESH
  UNK_0x1cf1(); // UNK_0x1cf1
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x2141(); // UNK_0x2141
  UNK_0x4544(); // UNK_0x4544
  UNK_0x4e47(); // UNK_0x4e47
  UNK_0x4522(); // UNK_0x4522
  UNK_0x435a(); // UNK_0x435a
  UNK_0x4547(); // UNK_0x4547
  UNK_0x4546(); // UNK_0x4546
  UNK_0x2e46(); // UNK_0x2e46
  _star_ASSIGN(); // *ASSIGN
  UNK_0x4d51(); // UNK_0x4d51
  UNK_0x2047(); // UNK_0x2047
  UNK_0x544b(); // UNK_0x544b
  Push(pp_SIGNEXT); // SIGNEXT
  UNK_0x2055(); // UNK_0x2055
  UNK_0x414f(); // UNK_0x414f
  UNK_0x205b(); // UNK_0x205b
  UNK_0x4f50(); // UNK_0x4f50
  UNK_0x2c56(); // UNK_0x2c56
  UNK_0x1cf1(); // UNK_0x1cf1
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x1441(); // UNK_0x1441
  UNK_0x5043(); // UNK_0x5043
  UNK_0x4552(); // UNK_0x4552
  UNK_0x5243(); // UNK_0x5243
  UNK_0x4922(); // UNK_0x4922
  UNK_0x2050(); // UNK_0x2050
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0x534b(); // UNK_0x534b
  UNK_0x4c22(); // UNK_0x4c22
  UNK_0x534b(); // UNK_0x534b
  UNK_0x2e56(); // UNK_0x2e56
  UNK_0xef2e(); // UNK_0xef2e
  GCR(); // GCR
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x501c(); // UNK_0x501c
  UNK_0x4554(); // UNK_0x4554
  UNK_0x5355(); // UNK_0x5355
  _star_ASSIGN(); // *ASSIGN
  UNK_0x4152(); // UNK_0x4152
  UNK_0x4545(); // UNK_0x4545
  UNK_0x4144(); // UNK_0x4144
  UNK_0x2054(); // UNK_0x2054
  UNK_0x4f56(); // UNK_0x4f56
  WRITENE(); // WRITENE
  UNK_0x4e51(); // UNK_0x4e51
  UNK_0x4956(); // UNK_0x4956
  UNK_0x5550(); // UNK_0x5550
  UNK_0x2c47(); // UNK_0x2c47
  UNK_0xbdf1(); // UNK_0xbdf1
  UNK_0x909f(); // UNK_0x909f
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xeffd: WORD 'UNK_0xefff' codep=0x224c parp=0xefff
// ================================================
  UNK_0xb024(); // UNK_0xb024

void UNK_0xefff() // UNK_0xefff
{
  Push(pp_SCROLL_minus_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x0031);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(pp_UNK_0xef46); // UNK_0xef46
  ON(); // ON
  Push(0x03e8);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0xef4a(); // UNK_0xef4a
  KEY(); // KEY
  Pop(); // DROP
  CTERASE(); // CTERASE
  SAVE_minus_OV(); // SAVE-OV
}

// 0xf02b: db 0x4c 0x22 'L"'

// ================================================
// 0xf02d: WORD 'UNK_0xf02f' codep=0xeefa parp=0xf02f
// ================================================
// 0xf02f: db 0xfd 0x81 0xe8 0xee 0x5d 0x17 0x10 0x00 0x8a 0x6d 0x90 0x16 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0x97 0x3b 0x5f 0x12 0x90 0x16 '    ]    m  L"*\   ;_   '

// ================================================
// 0xf047: WORD 'UNK_0xf049' codep=0x224c parp=0xf049
// ================================================

void UNK_0xf049() // UNK_0xf049
{
  SWAP(); // SWAP
  Pop(); // DROP
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x3f0c(); // UNK_0x3f0c
  UNK_0x2d41(); // UNK_0x2d41
  UNK_0x3f41(); // UNK_0x3f41
  UNK_0x3f2f(); // UNK_0x3f2f
  UNK_0x3f41(); // UNK_0x3f41
  UNK_0x3241(); // UNK_0x3241
  UNK_0xf610(); // UNK_0xf610
  UNK_0xf211(); // UNK_0xf211
  UNK_0x9b10(); // UNK_0x9b10
  UNK_0x90aa(); // UNK_0x90aa
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x5d24(); // UNK_0x5d24
  UNK_0x0a19(); // UNK_0x0a19
  Push(pp_STARDAT); // STARDAT
  UNK_0xf211(); // UNK_0xf211
  UNK_0xd710(); // UNK_0xd710
  UNK_0x32ab(); // UNK_0x32ab
  UNK_0x9210(); // UNK_0x9210
  UNK_0xdb0e(); // UNK_0xdb0e
  UNK_0x5d25(); // UNK_0x5d25
  UNK_0x2019(); // UNK_0x2019
  UNK_0x7202(); // UNK_0x7202
  UNK_0x0a11(); // UNK_0x0a11
  UNK_0x5d6f(); // UNK_0x5d6f
  UNK_0x2e19(); // UNK_0x2e19
  UNK_0xdb02(); // UNK_0xdb02
  UNK_0x5d25(); // UNK_0x5d25
  UNK_0x1f19(); // UNK_0x1f19
  UNK_0x7202(); // UNK_0x7202
  UNK_0x0a11(); // UNK_0x0a11
  UNK_0xd76f(); // UNK_0xd76f
  UNK_0xdbab(); // UNK_0xdbab
  UNK_0x5d25(); // UNK_0x5d25
  UNK_0x1f19(); // UNK_0x1f19
  UNK_0x7202(); // UNK_0x7202
  UNK_0x7f11(); // UNK_0x7f11
  UNK_0x9210(); // UNK_0x9210
  UNK_0xf211(); // UNK_0xf211
  UNK_0x8a10(); // UNK_0x8a10
  UNK_0x3b6f(); // UNK_0x3b6f
  UNK_0xfaf2(); // UNK_0xfaf2
  UNK_0x0817(); // UNK_0x0817
  UNK_0x3202(); // UNK_0x3202
  UNK_0xcc10(); // UNK_0xcc10
  UNK_0xaeab(); // UNK_0xaeab
  UNK_0xa20d(); // UNK_0xa20d
  UNK_0xae60(); // UNK_0xae60
  UNK_0xd60d(); // UNK_0xd60d
  UNK_0x5d13(); // UNK_0x5d13
  UNK_0x6419(); // UNK_0x6419
  UNK_0xeb02(); // UNK_0xeb02
  UNK_0xf213(); // UNK_0xf213
  UNK_0x3210(); // UNK_0x3210
  UNK_0xd710(); // UNK_0xd710
  UNK_0xdbab(); // UNK_0xdbab
  UNK_0x5d25(); // UNK_0x5d25
  UNK_0x2619(); // UNK_0x2619
  UNK_0x7202(); // UNK_0x7202
  UNK_0x7f11(); // UNK_0x7f11
  UNK_0xf610(); // UNK_0xf610
  UNK_0x9211(); // UNK_0x9211
  UNK_0xf211(); // UNK_0xf211
  UNK_0x8a10(); // UNK_0x8a10
  UNK_0x906f(); // UNK_0x906f
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0xd024(); // UNK_0xd024

// ================================================
// 0xf0d2: WORD 'UNK_0xf0d4' codep=0xeed0 parp=0xf0d4
// ================================================
  UNK_0xe8f0(); // UNK_0xe8f0
  UNK_0x5df0(); // UNK_0x5df0
  UNK_0x1419(); // UNK_0x1419
  UNK_0x8a02(); // UNK_0x8a02
  UNK_0xd86f(); // UNK_0xd86f
  UNK_0xaef0(); // UNK_0xaef0
  UNK_0xad0d(); // UNK_0xad0d
  UNK_0xae76(); // UNK_0xae76
  UNK_0x640d(); // UNK_0x640d
  UNK_0x90f2(); // UNK_0x90f2
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x7d24(); // UNK_0x7d24
  UNK_0x2f64(); // UNK_0x2f64
  UNK_0x9c7c(); // UNK_0x9c7c
  UNK_0x92f0(); // UNK_0x92f0
  UNK_0xf60e(); // UNK_0xf60e
  UNK_0xfa11(); // UNK_0xfa11
  UNK_0x0817(); // UNK_0x0817
  UNK_0xc802(); // UNK_0xc802
  UNK_0x60f0(); // UNK_0x60f0
  UNK_0x0418(); // UNK_0x0418
  UNK_0xb802(); // UNK_0xb802
  UNK_0xdff0(); // UNK_0xdff0
  UNK_0x907b(); // UNK_0x907b
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x5624(); // UNK_0x5624

// ================================================
// 0xf106: WORD 'UNK_0xf108' codep=0xa956 parp=0xf108
// ================================================
  UNK_0xe8ab(); // UNK_0xe8ab
  UNK_0x5df0(); // UNK_0x5df0
  UNK_0x1019(); // UNK_0x1019
  UNK_0x8a02(); // UNK_0x8a02
  UNK_0xad6f(); // UNK_0xad6f
  UNK_0xae76(); // UNK_0xae76
  UNK_0x680d(); // UNK_0x680d
  UNK_0xaeab(); // UNK_0xaeab
  UNK_0xf20d(); // UNK_0xf20d
  UNK_0x6410(); // UNK_0x6410
  UNK_0x90f2(); // UNK_0x90f2
  UNK_0x0018(); // UNK_0x0018

// ================================================
// 0xf11e: WORD 'DATE$>AD' codep=0x224c parp=0xf12b
// ================================================
  UNK_0x8902(); // UNK_0x8902
  UNK_0x4146(); // UNK_0x4146
  UNK_0x4556(); // UNK_0x4556
  UNK_0x3e26(); // UNK_0x3e26
  UNK_0xc443(); // UNK_0xc443
  UNK_0x224e(); // UNK_0x224e

void DATE_do__gt_AD() // DATE$>AD
{
  OVER(); // OVER
  Push(cc__minus_1); // -1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xf049(); // UNK_0xf049
  return;

  label1:
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x3008(); // UNK_0x3008
  UNK_0x2d32(); // UNK_0x2d32
  UNK_0x3032(); // UNK_0x3032
  UNK_0x7f2f(); // UNK_0x7f2f
  UNK_0x7c3d(); // UNK_0x7c3d
  UNK_0xf241(); // UNK_0xf241
  UNK_0x8a10(); // UNK_0x8a10
  UNK_0xf26f(); // UNK_0xf26f
  UNK_0x5d10(); // UNK_0x5d10
  UNK_0x2c19(); // UNK_0x2c19
  UNK_0x6003(); // UNK_0x6003
  UNK_0x5d11(); // UNK_0x5d11
  UNK_0x1f19(); // UNK_0x1f19
  UNK_0x7214(); // UNK_0x7214
  UNK_0xd711(); // UNK_0xd711
  UNK_0x87ab(); // UNK_0x87ab
  UNK_0x7c3d(); // UNK_0x7c3d
  UNK_0x9741(); // UNK_0x9741
  UNK_0x723d(); // UNK_0x723d
  UNK_0xf211(); // UNK_0xf211
  UNK_0x8a10(); // UNK_0x8a10
  UNK_0x5d6f(); // UNK_0x5d6f
  UNK_0x1e19(); // UNK_0x1e19
  Push(pp_STARDAT); // STARDAT
  UNK_0xe711(); // UNK_0xe711
  UNK_0xd711(); // UNK_0xd711
  UNK_0x87ab(); // UNK_0x87ab
  UNK_0x7c3d(); // UNK_0x7c3d
  UNK_0x8741(); // UNK_0x8741
  UNK_0x723d(); // UNK_0x723d
  UNK_0x7f11(); // UNK_0x7f11
  UNK_0xf610(); // UNK_0xf610
  UNK_0x9211(); // UNK_0x9211
  UNK_0xf211(); // UNK_0xf211
  UNK_0x8a10(); // UNK_0x8a10
  UNK_0xe76f(); // UNK_0xe76f
  UNK_0xd711(); // UNK_0xd711
  UNK_0xb3ab(); // UNK_0xb3ab
  UNK_0xe710(); // UNK_0xe710
  UNK_0x7f11(); // UNK_0x7f11
  UNK_0xf610(); // UNK_0xf610
  UNK_0x9211(); // UNK_0x9211
  UNK_0xf211(); // UNK_0xf211
  UNK_0x8a10(); // UNK_0x8a10
  UNK_0x906f(); // UNK_0x906f
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0xfa24(); // UNK_0xfa24

// ================================================
// 0xf19a: WORD 'UNK_0xf19c' codep=0xeefa parp=0xf19c
// ================================================
  UNK_0x28f0(); // UNK_0x28f0
  UNK_0xaeab(); // UNK_0xaeab
  UNK_0xe80d(); // UNK_0xe80d
  UNK_0x29f0(); // UNK_0x29f0
  UNK_0x90f3(); // UNK_0x90f3
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x7a24(); // UNK_0x7a24

// ================================================
// 0xf1a8: WORD 'UNK_0xf1aa' codep=0xa97a parp=0xf1aa
// ================================================
  UNK_0xe8ab(); // UNK_0xe8ab
  UNK_0x5df0(); // UNK_0x5df0
  UNK_0x1819(); // UNK_0x1819
  UNK_0x8a02(); // UNK_0x8a02
  UNK_0x8c6f(); // UNK_0x8c6f
  UNK_0xaeab(); // UNK_0xaeab
  UNK_0x9c0d(); // UNK_0x9c0d
  UNK_0x92f0(); // UNK_0x92f0
  UNK_0xf60e(); // UNK_0xf60e
  UNK_0x8911(); // UNK_0x8911
  UNK_0xfa14(); // UNK_0xfa14
  UNK_0x0a17(); // UNK_0x0a17
  POLY_minus_ER(); // POLY-ER
  UNK_0xaeab(); // UNK_0xaeab
  UNK_0x600d(); // UNK_0x600d
  UNK_0x0618(); // UNK_0x0618
  UNK_0xad02(); // UNK_0xad02
  UNK_0xae76(); // UNK_0xae76
  UNK_0x640d(); // UNK_0x640d
  UNK_0x90f2(); // UNK_0x90f2
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0xa424(); // UNK_0xa424

// ================================================
// 0xf1d4: WORD 'UNK_0xf1d6' codep=0xeea4 parp=0xf1d6
// ================================================
  UNK_0xe8f0(); // UNK_0xe8f0
  UNK_0x5df0(); // UNK_0x5df0
  UNK_0x1819(); // UNK_0x1819
  UNK_0x8a02(); // UNK_0x8a02
  UNK_0xac6f(); // UNK_0xac6f
  UNK_0xaef0(); // UNK_0xaef0
  UNK_0xad0d(); // UNK_0xad0d
  UNK_0xae76(); // UNK_0xae76
  UNK_0x640d(); // UNK_0x640d
  UNK_0x90f2(); // UNK_0x90f2
  UNK_0x2018(); // UNK_0x2018

// ================================================
// 0xf1ea: WORD 'IDENT-IT' codep=0x4b3b parp=0xf1f7
// ================================================
  UNK_0x8bf3(); // UNK_0x8bf3
  UNK_0x444b(); // UNK_0x444b
  UNK_0x4e47(); // UNK_0x4e47
  UNK_0x2d56(); // UNK_0x2d56
  UNK_0xd44b(); // UNK_0xd44b
  UNK_0x4b3d(); // UNK_0x4b3d
  UNK_0x0008(); // UNK_0x0008
  UNK_0x3a70(); // UNK_0x3a70
  UNK_0x000d(); // UNK_0x000d
  UNK_0xf02f(); // UNK_0xf02f
  UNK_0x000b(); // UNK_0x000b
  UNK_0xf1d6(); // UNK_0xf1d6
  UNK_0x001c(); // UNK_0x001c
  UNK_0xf108(); // UNK_0xf108
  UNK_0x001d(); // UNK_0x001d
  UNK_0xf19c(); // UNK_0xf19c

// ================================================
// 0xf20b: WORD 'UNK_0xf20d' codep=0x001c parp=0xf20d
// ================================================
  UNK_0x001e(); // UNK_0x001e
  UNK_0xf1aa(); // UNK_0xf1aa

// ================================================
// 0xf20f: WORD 'UNK_0xf211' codep=0x0044 parp=0xf211
// ================================================
  UNK_0x0046(); // UNK_0x0046

// ================================================
// 0xf211: WORD 'UNK_0xf213' codep=0xf0d2 parp=0xf213
// ================================================
  UNK_0xf0d4(); // UNK_0xf0d4

// ================================================
// 0xf213: WORD 'ITEM>PAD' codep=0x224c parp=0xf220
// ================================================
  UNK_0x0002(); // UNK_0x0002
  UNK_0x498a(); // UNK_0x498a
  UNK_0x4556(); // UNK_0x4556
  UNK_0x3e4f(); // UNK_0x3e4f
  UNK_0x4152(); // UNK_0x4152
  UNK_0x4cc6(); // UNK_0x4cc6
  UNK_0xfa24(); // UNK_0xfa24

void ITEM_gt_PAD() // ITEM>PAD
{
  UNK_0xeefc(); // UNK_0xeefc
  UNK_0xeeea(); // UNK_0xeeea
  PAD(); // PAD
  Push(0x001e);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _minus_(); // -
  Push(0x002e);
  FILL(); // FILL
  Push(0x0026);
  PAD(); // PAD
  C_ex_(); // C!
  _at_INST_minus_C(); // @INST-C

// ================================================
// 0xf23f: WORD 'UNK_0xf241' codep=0xf575 parp=0xf241
// ================================================
  IDENT_minus_IT(); // IDENT-IT
}


// ================================================
// 0xf244: WORD 'UNK_0xf246' codep=0x224c parp=0xf246
// ================================================

void UNK_0xf246() // UNK_0xf246
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf252: WORD 'UNK_0xf254' codep=0x224c parp=0xf254
// ================================================

void UNK_0xf254() // UNK_0xf254
{
  _at_INST_minus_C(); // @INST-C
  _eq_(); // =
}


// ================================================
// 0xf25a: WORD 'UNK_0xf25c' codep=0x224c parp=0xf25c
// ================================================

void UNK_0xf25c() // UNK_0xf25c
{
  Push(0x000b);
  UNK_0xf254(); // UNK_0xf254
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xeebe); // UNK_0xeebe
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf246(); // UNK_0xf246

// ================================================
// 0xf26d: WORD 'UNK_0xf26f' codep=0x3ef2 parp=0xf26f
// ================================================
  Push(Pop() | Pop()); // OR
  return;

  label1:
  Push(0x001b);
  UNK_0xf254(); // UNK_0xf254
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf246(); // UNK_0xf246
  Push(Pop() | Pop()); // OR
  Push(0x0035);
  UNK_0xf254(); // UNK_0xf254
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  Push(cc__3); // 3
  PICK(); // PICK
  Push(cc__3); // 3
  PICK(); // PICK
  _gt_C_plus_S(); // >C+S
  _at_INST_minus_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  ICLOSE(); // ICLOSE
  Push(pp_SCROLL_minus_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x0032);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp__ro_SCROLL); // (SCROLL
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0038);
  Push(0); // 0
  Push(1); // 1
  _star_CREATE(); // *CREATE
  TEXT_minus_TE(); // TEXT-TE
  Push(0x0026);
  CMOVE(); // CMOVE
  TEXT_minus_IN(); // TEXT-IN
  _1_dot_5_ex_(); // 1.5!
  TEXT_minus_CO(); // TEXT-CO
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
  Push(1); // 1
  Push(pp_SCROLL_minus_); // SCROLL-
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  return;

  label1:
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  Pop(); // DROP
}


// ================================================
// 0xf2e8: WORD 'BOX>LIST' codep=0x224c parp=0xf2f5
// ================================================

void BOX_gt_LIST() // BOX>LIST
{
  SUBROOT(); // SUBROOT
  CI(); // CI

  label2:
  UNK_0xf25c(); // UNK_0xf25c
  Push(pp_SCROLL_minus_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x0032);
  _st_(); // <
  _at_INST_minus_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CI_i_(); // CI'
  CI(); // CI
  ITEM_gt_PAD(); // ITEM>PAD
  PAD(); // PAD
  Push(Pop()+1); // 1+
  UNK_0xf28e(); // UNK_0xf28e

  label1:
  NEXT_minus_NO(); // NEXT-NO
  _2DUP(); // 2DUP
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf331: WORD 'GET-BOXE' codep=0x224c parp=0xf33e
// ================================================

void GET_minus_BOXE() // GET-BOXE
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label1:
  BOX_gt_LIST(); // BOX>LIST
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  UNK_0xefff(); // UNK_0xefff
}


// ================================================
// 0xf354: WORD 'MAKE-SCR' codep=0x224c parp=0xf361
// ================================================

void MAKE_minus_SCR() // MAKE-SCR
{
  Push(pp_UNK_0xef46); // UNK_0xef46
  _099(); // 099
  FRAGMEN(); // FRAGMEN
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0038);
  Push(1); // 1
  _star_CREATE(); // *CREATE
  CI(); // CI
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  CI_i_(); // CI'
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  Push(pp_SCROLL_minus_); // SCROLL-
  _099(); // 099
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf38d: WORD 'DELETE-S' codep=0x224c parp=0xf39a
// ================================================

void DELETE_minus_S() // DELETE-S
{
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  _gt_C(); // >C
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  SET_minus_CUR(); // SET-CUR
  IDELETE(); // IDELETE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3b0: WORD 'CLASS>BO' codep=0x4b3b parp=0xf3bd
// ================================================
// 0xf3bd: db 0x06 0x00 0x6e 0x3a 0x09 0x00 0xce 0xee 0x1a 0x00 0xb6 0xee 0x1c 0x00 0xea 0xf0 0x29 0x00 0xc6 0xee 0x1b 0x00 0xbe 0xee 0x44 0x00 0xc2 0xee '  n:            )       D   '

// ================================================
// 0xf3d9: WORD 'UNK_0xf3db' codep=0x224c parp=0xf3db
// ================================================

void UNK_0xf3db() // UNK_0xf3db
{
  CLASS_gt_BO(); // CLASS>BO
  Push(0x000b);
  SWAP(); // SWAP
  Push(1); // 1
  _star_CREATE(); // *CREATE
}


// ================================================
// 0xf3e9: WORD 'BOX>TOCS' codep=0x224c parp=0xf3f6
// ================================================

void BOX_gt_TOCS() // BOX>TOCS
{
  CLASS_gt_BO(); // CLASS>BO
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf404: WORD '?ELEMENT' codep=0x224c parp=0xf411
// ================================================

void _ask_ELEMENT() // ?ELEMENT
{
  _at_INST_minus_C(); // @INST-C
  Push(0x001c);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xee9e(); // UNK_0xee9e
  C_at_(); // C@
  Push(Pop()-1); // 1-
  return;

  label1:
  _at_INST_minus_C(); // @INST-C
  Push(0x001b);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(cc_FALSE); // FALSE
  return;

  label2:
  Push(cc_TRUE); // TRUE
}


// ================================================
// 0xf43d: WORD '>BOX' codep=0x224c parp=0xf446
// ================================================

void _gt_BOX() // >BOX
{
  _2DUP(); // 2DUP
  Push(pp_ITEM); // ITEM
  _1_dot_5_ex_(); // 1.5!
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_minus_C(); // @INST-C
  _gt_R(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(h); // I
  CLASS_gt_BO(); // CLASS>BO
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(h); // I
  UNK_0xf3db(); // UNK_0xf3db

  label1:
  R_gt_(); // R>
  BOX_gt_TOCS(); // BOX>TOCS
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_minus_S(); // @INST-S
  _at_INST_minus_C(); // @INST-C
  _ask_ELEMENT(); // ?ELEMENT
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label2;
  OVER(); // OVER
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label3;
  IOPEN(); // IOPEN

  label5:
  DUP(); // DUP
  INEXT(); // INEXT
  _at_INST_minus_S(); // @INST-S
  _eq_(); // =
  if (Pop() == 0) goto label5;
  Pop(); // DROP
  _gt_C_plus_S(); // >C+S
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  CI(); // CI
  ICLOSE(); // ICLOSE
  _gt_INACTI(); // >INACTI
  INST_minus_QT(); // INST-QT
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  goto label6;

  label3:
  Pop(); // DROP
  CI(); // CI
  IINSERT(); // IINSERT

  label6:
  goto label4;

  label2:
  Pop(); Pop();// 2DROP
  CI(); // CI
  IINSERT(); // IINSERT

  label4:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c8: WORD '(BOX>)' codep=0x224c parp=0xf4d3
// ================================================

void _ro_BOX_gt__rc_() // (BOX>)
{
  _ask_ELEMENT(); // ?ELEMENT
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  Push(pp_ELEM_minus_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_ELEM_minus_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  INST_minus_QT(); // INST-QT
  _plus__ex_(); // +!
  _at_INST_minus_C(); // @INST-C
  _at_INST_minus_S(); // @INST-S
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(pp_ELEM_minus_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  INST_minus_QT(); // INST-QT
  _ex_(); // !
  C_gt_(); // C>
  return;

  label1:
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf509: WORD 'BOX>' codep=0x224c parp=0xf512
// ================================================

void BOX_gt_() // BOX>
{
  _ro_BOX_gt__rc_(); // (BOX>)
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE

  label2:
  Push(1); // 1
  goto label3;

  label1:
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_minus_C(); // @INST-C
  Push(0x001a);
  _eq_(); // =
  _at_INST_minus_S(); // @INST-S
  ICLOSE(); // ICLOSE
  _at_INST_minus_S(); // @INST-S
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND

  label3:
  ROT(); // ROT
  ROT(); // ROT
}

// 0xf54e: db 0x49 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'IT-VOC____________ '
  