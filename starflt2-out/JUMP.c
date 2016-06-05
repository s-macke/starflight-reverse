// ====== OVERLAY 'JUMP' ======

#include"cpu.h"

// store offset = 0xed30
// overlay size   = 0x0830

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x0051  codep:0x0000 parp:0x0051 size:0x021a C-string:'UNK_0x0051'
// 1870:      UNK_0x026d  codep:0x8a00 parp:0x026d size:0x0300 C-string:'UNK_0x026d'
// 1871:      UNK_0x056f  codep:0x8305 parp:0x056f size:0x00a6 C-string:'UNK_0x056f'
// 1872:      UNK_0x0617  codep:0x4e49 parp:0x0617 size:0x01d9 C-string:'UNK_0x0617'
// 1873:      UNK_0x07f2  codep:0x25d7 parp:0x07f2 size:0xffffffff C-string:'UNK_0x07f2'
// 1874:      UNK_0x07f3  codep:0xd125 parp:0x07f3 size:0x0022 C-string:'UNK_0x07f3'
// 1875:      UNK_0x0817  codep:0x5452 parp:0x0817 size:0x01f7 C-string:'UNK_0x0817'
// 1876:      UNK_0x0a10  codep:0x890a parp:0x0a10 size:0x0007 C-string:'UNK_0x0a10'
// 1877:      UNK_0x0a19  codep:0xab45 parp:0x0a19 size:0x0054 C-string:'UNK_0x0a19'
// 1878:      UNK_0x0a6f  codep:0x2d52 parp:0x0a6f size:0x00a8 C-string:'UNK_0x0a6f'
// 1879:      UNK_0x0b19  codep:0xdf0e parp:0x0b19 size:0x0309 C-string:'UNK_0x0b19'
// 1880:      UNK_0x0e24  codep:0xf20e parp:0x0e24 size:0x002b C-string:'UNK_0x0e24'
// 1881:      UNK_0x0e51  codep:0x52c9 parp:0x0e51 size:0x00c6 C-string:'UNK_0x0e51'
// 1882:      UNK_0x0f19  codep:0x8bad parp:0x0f19 size:0x00fe C-string:'UNK_0x0f19'
// 1883:      UNK_0x1019  codep:0x4058 parp:0x1019 size:0x01fd C-string:'UNK_0x1019'
// 1884:      UNK_0x1218  codep:0x4cce parp:0x1218 size:0x01ff C-string:'UNK_0x1218'
// 1885:      UNK_0x1419  codep:0x0c92 parp:0x1419 size:0x00fe C-string:'UNK_0x1419'
// 1886:      UNK_0x1519  codep:0x4749 parp:0x1519 size:0x0186 C-string:'UNK_0x1519'
// 1887:      UNK_0x16a1  codep:0xcf47 parp:0x16a1 size:0x004c C-string:'UNK_0x16a1'
// 1888:      UNK_0x16ef  codep:0x16ba parp:0x16ef size:0x0001 C-string:'UNK_0x16ef'
// 1889:      UNK_0x16f2  codep:0xbc16 parp:0x16f2 size:0x0025 C-string:'UNK_0x16f2'
// 1890:      UNK_0x1719  codep:0x8ec8 parp:0x1719 size:0x00fc C-string:'UNK_0x1719'
// 1891:      UNK_0x1817  codep:0x18a9 parp:0x1817 size:0x0200 C-string:'UNK_0x1817'
// 1892:      UNK_0x1a19  codep:0x6e69 parp:0x1a19 size:0x0009 C-string:'UNK_0x1a19'
// 1893:      UNK_0x1a24  codep:0x6f76 parp:0x1a24 size:0x01f1 C-string:'UNK_0x1a24'
// 1894:      UNK_0x1c17  codep:0x15fa parp:0x1c17 size:0x030b C-string:'UNK_0x1c17'
// 1895:      UNK_0x1f24  codep:0x047c parp:0x1f24 size:0x0003 C-string:'UNK_0x1f24'
// 1896:      UNK_0x1f29  codep:0x920e parp:0x1f29 size:0x006b C-string:'UNK_0x1f29'
// 1897:      UNK_0x1f96  codep:0xed22 parp:0x1f96 size:0x006a C-string:'UNK_0x1f96'
// 1898:      UNK_0x2002  codep:0x175d parp:0x2002 size:0x000d C-string:'UNK_0x2002'
// 1899:      UNK_0x2011  codep:0x6163 parp:0x2011 size:0x0033 C-string:'UNK_0x2011'
// 1900:      UNK_0x2046  codep:0x6e6f parp:0x2046 size:0x000a C-string:'UNK_0x2046'
// 1901:      UNK_0x2052  codep:0x6568 parp:0x2052 size:0x0228 C-string:'UNK_0x2052'
// 1902:      UNK_0x227c  codep:0x1f93 parp:0x227c size:0x0174 C-string:'UNK_0x227c'
// 1903:      UNK_0x23f2  codep:0xdd0f parp:0x23f2 size:0x0125 C-string:'UNK_0x23f2'
// 1904:      UNK_0x2519  codep:0x5241 parp:0x2519 size:0x02e7 C-string:'UNK_0x2519'
// 1905:      UNK_0x2802  codep:0xd78b parp:0x2802 size:0x0015 C-string:'UNK_0x2802'
// 1906:      UNK_0x2819  codep:0x8bad parp:0x2819 size:0x0009 C-string:'UNK_0x2819'
// 1907:      UNK_0x2824  codep:0x0bae parp:0x2824 size:0x00db C-string:'UNK_0x2824'
// 1908:      UNK_0x2901  codep:0x12f5 parp:0x2901 size:0x0015 C-string:'UNK_0x2901'
// 1909:      UNK_0x2918  codep:0x1f17 parp:0x2918 size:0x02f4 C-string:'UNK_0x2918'
// 1910:      UNK_0x2c0e  codep:0x5541 parp:0x2c0e size:0x02e2 C-string:'UNK_0x2c0e'
// 1911:      UNK_0x2ef2  codep:0xffd8 parp:0x2ef2 size:0x000e C-string:'UNK_0x2ef2'
// 1912:      UNK_0x2f02  codep:0x8cfe parp:0x2f02 size:0x03ee C-string:'UNK_0x2f02'
// 1913:      UNK_0x32f2  codep:0x900b parp:0x32f2 size:0x0571 C-string:'UNK_0x32f2'
// 1914:      UNK_0x3865  codep:0x1307 parp:0x3865 size:0x01b8 C-string:'UNK_0x3865'
// 1915:      UNK_0x3a1f  codep:0xe981 parp:0x3a1f size:0x01e1 C-string:'UNK_0x3a1f'
// 1916:      UNK_0x3c02  codep:0xc156 parp:0x3c02 size:0x0014 C-string:'UNK_0x3c02'
// 1917:      UNK_0x3c18  codep:0x8b3b parp:0x3c18 size:0xffffffff C-string:'UNK_0x3c18'
// 1918:      UNK_0x3c19  codep:0x548b parp:0x3c19 size:0x00f8 C-string:'UNK_0x3c19'
// 1919:      UNK_0x3d13  codep:0x0bae parp:0x3d13 size:0x0087 C-string:'UNK_0x3d13'
// 1920:      UNK_0x3d9c  codep:0x4222 parp:0x3d9c size:0x0054 C-string:'UNK_0x3d9c'
// 1921:      UNK_0x3df2  codep:0x32ff parp:0x3df2 size:0x0020 C-string:'UNK_0x3df2'
// 1922:      UNK_0x3e14  codep:0x7200 parp:0x3e14 size:0x00f3 C-string:'UNK_0x3e14'
// 1923:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0x0219 C-string:'UNK_0x3f09'
// 1924:      UNK_0x4124  codep:0x4ccd parp:0x4124 size:0x0023 C-string:'UNK_0x4124'
// 1925:      UNK_0x4149  codep:0x4c42 parp:0x4149 size:0x004e C-string:'UNK_0x4149'
// 1926:      UNK_0x4199  codep:0x175d parp:0x4199 size:0x0170 C-string:'UNK_0x4199'
// 1927:      UNK_0x430b  codep:0x454e parp:0x430b size:0x0104 C-string:'UNK_0x430b'
// 1928:      UNK_0x4411  codep:0x4547 parp:0x4411 size:0x0034 C-string:'UNK_0x4411'
// 1929:      UNK_0x4447  codep:0x8743 parp:0x4447 size:0x00db C-string:'UNK_0x4447'
// 1930:      UNK_0x4524  codep:0x40d2 parp:0x4524 size:0x001f C-string:'UNK_0x4524'
// 1931:      UNK_0x4545  codep:0xe012 parp:0x4545 size:0x0002 C-string:'UNK_0x4545'
// 1932:      UNK_0x4549  codep:0x5f0f parp:0x4549 size:0x01a7 C-string:'UNK_0x4549'
// 1933:      UNK_0x46f2  codep:0x4625 parp:0x46f2 size:0x010e C-string:'UNK_0x46f2'
// 1934:      UNK_0x4802  codep:0xcb53 parp:0x4802 size:0x020e C-string:'UNK_0x4802'
// 1935:      UNK_0x4a12  codep:0x4942 parp:0x4a12 size:0x01fd C-string:'UNK_0x4a12'
// 1936:      UNK_0x4c11  codep:0xd02b parp:0x4c11 size:0x0005 C-string:'UNK_0x4c11'
// 1937:      UNK_0x4c18  codep:0x48e0 parp:0x4c18 size:0x0008 C-string:'UNK_0x4c18'
// 1938:      UNK_0x4c22  codep:0x5253 parp:0x4c22 size:0x002a C-string:'UNK_0x4c22'
// 1939:      UNK_0x4c4e  codep:0x15fa parp:0x4c4e size:0x0107 C-string:'UNK_0x4c4e'
// 1940:      UNK_0x4d57  codep:0x4d3d parp:0x4d57 size:0x00ea C-string:'UNK_0x4d57'
// 1941:      UNK_0x4e43  codep:0x4185 parp:0x4e43 size:0x0002 C-string:'UNK_0x4e43'
// 1942:      UNK_0x4e47  codep:0xd941 parp:0x4e47 size:0x0109 C-string:'UNK_0x4e47'
// 1943:      UNK_0x4f52  codep:0xa354 parp:0x4f52 size:0x041b C-string:'UNK_0x4f52'
// 1944:      UNK_0x536f  codep:0x8353 parp:0x536f size:0x011e C-string:'UNK_0x536f'
// 1945:      UNK_0x548f  codep:0x1780 parp:0x548f size:0x0362 C-string:'UNK_0x548f'
// 1946:      UNK_0x57f3  codep:0x29d4 parp:0x57f3 size:0x027a C-string:'UNK_0x57f3'
// 1947:      UNK_0x5a6f  codep:0x4100 parp:0x5a6f size:0x01a6 C-string:'UNK_0x5a6f'
// 1948:      UNK_0x5c17  codep:0x2d50 parp:0x5c17 size:0x00e9 C-string:'UNK_0x5c17'
// 1949:      UNK_0x5d02  codep:0x5386 parp:0x5d02 size:0x0009 C-string:'UNK_0x5d02'
// 1950:      UNK_0x5d0d  codep:0x5cc4 parp:0x5d0d size:0x0001 C-string:'UNK_0x5d0d'
// 1951:      UNK_0x5d10  codep:0x523f parp:0x5d10 size:0x0001 C-string:'UNK_0x5d10'
// 1952:      UNK_0x5d13  codep:0x4150 parp:0x5d13 size:0x0038 C-string:'UNK_0x5d13'
// 1953:      UNK_0x5d4d  codep:0x845d parp:0x5d4d size:0x0039 C-string:'UNK_0x5d4d'
// 1954:      UNK_0x5d88  codep:0x7d00 parp:0x5d88 size:0x0016 C-string:'UNK_0x5d88'
// 1955:      UNK_0x5da0  codep:0x261d parp:0x5da0 size:0x0050 C-string:'UNK_0x5da0'
// 1956:      UNK_0x5df2  codep:0x835d parp:0x5df2 size:0x010e C-string:'UNK_0x5df2'
// 1957:      UNK_0x5f02  codep:0x454b parp:0x5f02 size:0x0015 C-string:'UNK_0x5f02'
// 1958:      UNK_0x5f19  codep:0xc147 parp:0x5f19 size:0x03fe C-string:'UNK_0x5f19'
// 1959:      UNK_0x6319  codep:0x5845 parp:0x6319 size:0x00fe C-string:'UNK_0x6319'
// 1960:      UNK_0x6419  codep:0x8963 parp:0x6419 size:0x0141 C-string:'UNK_0x6419'
// 1961:      UNK_0x655c  codep:0x0000 parp:0x655c size:0x0091 C-string:'UNK_0x655c'
// 1962:      UNK_0x65ef  codep:0x7b00 parp:0x65ef size:0x0002 C-string:'UNK_0x65ef'
// 1963:      UNK_0x65f3  codep:0x20fe parp:0x65f3 size:0x01fd C-string:'UNK_0x65f3'
// 1964:      UNK_0x67f2  codep:0x2001 parp:0x67f2 size:0x01a4 C-string:'UNK_0x67f2'
// 1965:      UNK_0x6998  codep:0xd041 parp:0x6998 size:0x0076 C-string:'UNK_0x6998'
// 1966:      UNK_0x6a10  codep:0xa947 parp:0x6a10 size:0x002b C-string:'UNK_0x6a10'
// 1967:      UNK_0x6a3d  codep:0xc54d parp:0x6a3d size:0x0430 C-string:'UNK_0x6a3d'
// 1968:      UNK_0x6e6f  codep:0xbf51 parp:0x6e6f size:0x0b25 C-string:'UNK_0x6e6f'
// 1969:      UNK_0x7996  codep:0x1690 parp:0x7996 size:0x016a C-string:'UNK_0x7996'
// 1970:      UNK_0x7b02  codep:0x4c43 parp:0x7b02 size:0x040c C-string:'UNK_0x7b02'
// 1971:      UNK_0x7f10  codep:0x7c2d parp:0x7f10 size:0x0012 C-string:'UNK_0x7f10'
// 1972:      UNK_0x7f24  codep:0x7f0e parp:0x7f24 size:0x00cc C-string:'UNK_0x7f24'
// 1973:      UNK_0x7ff2  codep:0x907c parp:0x7ff2 size:0x0525 C-string:'UNK_0x7ff2'
// 1974:      UNK_0x8519  codep:0x8484 parp:0x8519 size:0x02d7 C-string:'UNK_0x8519'
// 1975:      UNK_0x87f2  codep:0x8b16 parp:0x87f2 size:0x010e C-string:'UNK_0x87f2'
// 1976:      UNK_0x8902  codep:0x86f8 parp:0x8902 size:0x06ee C-string:'UNK_0x8902'
// 1977:      UNK_0x8ff2  codep:0xfa12 parp:0x8ff2 size:0x0019 C-string:'UNK_0x8ff2'
// 1978:      UNK_0x900d  codep:0x0bae parp:0x900d size:0x0001 C-string:'UNK_0x900d'
// 1979:      UNK_0x9010  codep:0xf90e parp:0x9010 size:0xffffffff C-string:'UNK_0x9010'
// 1980:      UNK_0x9011  codep:0x8ef9 parp:0x9011 size:0x0002 C-string:'UNK_0x9011'
// 1981:      UNK_0x9015  codep:0x8d45 parp:0x9015 size:0x0058 C-string:'UNK_0x9015'
// 1982:      UNK_0x906f  codep:0x5445 parp:0x906f size:0x0006 C-string:'UNK_0x906f'
// 1983:      UNK_0x9077  codep:0x85ab parp:0x9077 size:0x0016 C-string:'UNK_0x9077'
// 1984:      UNK_0x908f  codep:0x0f72 parp:0x908f size:0x0000 C-string:'UNK_0x908f'
// 1985:      UNK_0x9091  codep:0x175d parp:0x9091 size:0x000e C-string:'UNK_0x9091'
// 1986:      UNK_0x90a1  codep:0x9047 parp:0x90a1 size:0x004e C-string:'UNK_0x90a1'
// 1987:      UNK_0x90f1  codep:0x9086 parp:0x90f1 size:0xffffffff C-string:'UNK_0x90f1'
// 1988:      UNK_0x90f2  codep:0x1690 parp:0x90f2 size:0xffffffff C-string:'UNK_0x90f2'
// 1989:      UNK_0x90f3  codep:0x3b16 parp:0x90f3 size:0x000c C-string:'UNK_0x90f3'
// 1990:      UNK_0x9101  codep:0xff4d parp:0x9101 size:0x010a C-string:'UNK_0x9101'
// 1991:      UNK_0x920d  codep:0x9138 parp:0x920d size:0x0000 C-string:'UNK_0x920d'
// 1992:      UNK_0x920f  codep:0x0ef2 parp:0x920f size:0xffffffff C-string:'UNK_0x920f'
// 1993:      UNK_0x9210  codep:0xe70e parp:0x9210 size:0xffffffff C-string:'UNK_0x9210'
// 1994:      UNK_0x9211  codep:0x0fe7 parp:0x9211 size:0x0577 C-string:'UNK_0x9211'
// 1995:      UNK_0x978a  codep:0x795c parp:0x978a size:0x0066 C-string:'UNK_0x978a'
// 1996:      UNK_0x97f2  codep:0x0bae parp:0x97f2 size:0x0530 C-string:'UNK_0x97f2'
// 1997:      UNK_0x9d24  codep:0x224c parp:0x9d24 size:0x002c C-string:'UNK_0x9d24'
// 1998:      UNK_0x9d52  codep:0xf83b parp:0x9d52 size:0x029e C-string:'UNK_0x9d52'
// 1999:      UNK_0x9ff2  codep:0x4cd9 parp:0x9ff2 size:0x071d C-string:'UNK_0x9ff2'
// 2000:      UNK_0xa711  codep:0x0f16 parp:0xa711 size:0x0011 C-string:'UNK_0xa711'
// 2001:      UNK_0xa724  codep:0x6d16 parp:0xa724 size:0x05dc C-string:'UNK_0xa724'
// 2002:      UNK_0xad02  codep:0x2415 parp:0xad02 size:0x00fe C-string:'UNK_0xad02'
// 2003:      UNK_0xae02  codep:0x21af parp:0xae02 size:0x000d C-string:'UNK_0xae02'
// 2004:      UNK_0xae11  codep:0xfa13 parp:0xae11 size:0x002a C-string:'UNK_0xae11'
// 2005:      UNK_0xae3d  codep:0x656e parp:0xae3d size:0x001f C-string:'UNK_0xae3d'
// 2006:      UNK_0xae5e  codep:0xe70e parp:0xae5e size:0x008f C-string:'UNK_0xae5e'
// 2007:      UNK_0xaeef  codep:0x0c38 parp:0xaeef size:0x0000 C-string:'UNK_0xaeef'
// 2008:      UNK_0xaef1  codep:0x6410 parp:0xaef1 size:0xffffffff C-string:'UNK_0xaef1'
// 2009:      UNK_0xaef2  codep:0x3864 parp:0xaef2 size:0xffffffff C-string:'UNK_0xaef2'
// 2010:      UNK_0xaef3  codep:0x0c38 parp:0xaef3 size:0x0118 C-string:'UNK_0xaef3'
// 2011:      UNK_0xb00d  codep:0x5c71 parp:0xb00d size:0x02f3 C-string:'UNK_0xb00d'
// 2012:      UNK_0xb302  codep:0xae54 parp:0xb302 size:0x000a C-string:'UNK_0xb302'
// 2013:      UNK_0xb30e  codep:0xae72 parp:0xb30e size:0x0000 C-string:'UNK_0xb30e'
// 2014:      UNK_0xb310  codep:0x5d0b parp:0xb310 size:0x0041 C-string:'UNK_0xb310'
// 2015:      UNK_0xb353  codep:0x4390 parp:0xb353 size:0x00cf C-string:'UNK_0xb353'
// 2016:      UNK_0xb424  codep:0x1690 parp:0xb424 size:0x0017 C-string:'UNK_0xb424'
// 2017:      UNK_0xb43d  codep:0x3e01 parp:0xb43d size:0x03c3 C-string:'UNK_0xb43d'
// 2018:      UNK_0xb802  codep:0x0000 parp:0xb802 size:0x000d C-string:'UNK_0xb802'
// 2019:      UNK_0xb811  codep:0x5846 parp:0xb811 size:0x007c C-string:'UNK_0xb811'
// 2020:      UNK_0xb88f  codep:0x224c parp:0xb88f size:0x097c C-string:'UNK_0xb88f'
// 2021:      UNK_0xc20d  codep:0xae5d parp:0xc20d size:0x0201 C-string:'UNK_0xc20d'
// 2022:      UNK_0xc410  codep:0x89c3 parp:0xc410 size:0x01ff C-string:'UNK_0xc410'
// 2023:      UNK_0xc611  codep:0x564f parp:0xc611 size:0x002a C-string:'UNK_0xc611'
// 2024:      UNK_0xc63d  codep:0x1f53 parp:0xc63d size:0x01e5 C-string:'UNK_0xc63d'
// 2025:      UNK_0xc824  codep:0x9083 parp:0xc824 size:0x0073 C-string:'UNK_0xc824'
// 2026:      UNK_0xc899  codep:0x0000 parp:0xc899 size:0x0367 C-string:'UNK_0xc899'
// 2027:      UNK_0xcc02  codep:0x3183 parp:0xcc02 size:0x0477 C-string:'UNK_0xcc02'
// 2028:      UNK_0xd07b  codep:0x87d0 parp:0xd07b size:0x0185 C-string:'UNK_0xd07b'
// 2029:      UNK_0xd202  codep:0x86d1 parp:0xd202 size:0x02fe C-string:'UNK_0xd202'
// 2030:      UNK_0xd502  codep:0x4f50 parp:0xd502 size:0x0109 C-string:'UNK_0xd502'
// 2031:      UNK_0xd60d  codep:0x0000 parp:0xd60d size:0x0102 C-string:'UNK_0xd60d'
// 2032:      UNK_0xd711  codep:0x0000 parp:0xd711 size:0x0000 C-string:'UNK_0xd711'
// 2033:      UNK_0xd713  codep:0x0000 parp:0xd713 size:0x000f C-string:'UNK_0xd713'
// 2034:      UNK_0xd724  codep:0x0000 parp:0xd724 size:0x00cc C-string:'UNK_0xd724'
// 2035:      UNK_0xd7f2  codep:0xf526 parp:0xd7f2 size:0x020e C-string:'UNK_0xd7f2'
// 2036:      UNK_0xda02  codep:0x004b parp:0xda02 size:0x0020 C-string:'UNK_0xda02'
// 2037:      UNK_0xda24  codep:0x203a parp:0xda24 size:0x0549 C-string:'UNK_0xda24'
// 2038:      UNK_0xdf6f  codep:0x0f72 parp:0xdf6f size:0x01a0 C-string:'UNK_0xdf6f'
// 2039:      UNK_0xe111  codep:0x946b parp:0xe111 size:0x0311 C-string:'UNK_0xe111'
// 2040:      UNK_0xe424  codep:0x0f20 parp:0xe424 size:0x0462 C-string:'UNK_0xe424'
// 2041:      UNK_0xe888  codep:0x1690 parp:0xe888 size:0x038d C-string:'UNK_0xe888'
// 2042:      UNK_0xec17  codep:0x7a1f parp:0xec17 size:0x01a3 C-string:'UNK_0xec17'
// 2043:      UNK_0xedbc  codep:0x7420 parp:0xedbc size:0x0003 C-string:'UNK_0xedbc'
// 2044:      UNK_0xedc1  codep:0x7420 parp:0xedc1 size:0x0003 C-string:'UNK_0xedc1'
// 2045:      UNK_0xedc6  codep:0x7420 parp:0xedc6 size:0x0003 C-string:'UNK_0xedc6'
// 2046:      UNK_0xedcb  codep:0x7420 parp:0xedcb size:0x0003 C-string:'UNK_0xedcb'
// 2047:      UNK_0xedd0  codep:0x7420 parp:0xedd0 size:0x0003 C-string:'UNK_0xedd0'
// 2048:      UNK_0xedd5  codep:0x1d29 parp:0xedd5 size:0x0002 C-string:'UNK_0xedd5'
// 2049:      UNK_0xedd9  codep:0x1d29 parp:0xedd9 size:0x0002 C-string:'UNK_0xedd9'
// 2050:      UNK_0xeddd  codep:0x224c parp:0xeddd size:0x0018 C-string:'UNK_0xeddd'
// 2051:      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x001c C-string:'UNK_0xedf7'
// 2052:      UNK_0xee15  codep:0x224c parp:0xee15 size:0x0008 C-string:'UNK_0xee15'
// 2053:      UNK_0xee1f  codep:0x224c parp:0xee1f size:0x0010 C-string:'UNK_0xee1f'
// 2054:      UNK_0xee31  codep:0x224c parp:0xee31 size:0x0010 C-string:'UNK_0xee31'
// 2055:      UNK_0xee43  codep:0x224c parp:0xee43 size:0x0028 C-string:'UNK_0xee43'
// 2056:      UNK_0xee6d  codep:0x224c parp:0xee6d size:0x004c C-string:'UNK_0xee6d'
// 2057:      UNK_0xeebb  codep:0x224c parp:0xeebb size:0x0026 C-string:'UNK_0xeebb'
// 2058:      UNK_0xeee3  codep:0x224c parp:0xeee3 size:0x0054 C-string:'UNK_0xeee3'
// 2059:         (GET-AU  codep:0x4b3b parp:0xef43 size:0x0020 C-string:'_ro_GET_minus_AU'
// 2060:      UNK_0xef65  codep:0x224c parp:0xef65 size:0x001a C-string:'UNK_0xef65'
// 2061:      UNK_0xef81  codep:0x224c parp:0xef81 size:0x0059 C-string:'UNK_0xef81'
// 2062:      UNK_0xefdc  codep:0x1d29 parp:0xefdc size:0x0002 C-string:'UNK_0xefdc'
// 2063:      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x0035 C-string:'UNK_0xefe0'
// 2064:      UNK_0xf017  codep:0x4c16 parp:0xf017 size:0xffffffff C-string:'UNK_0xf017'
// 2065:      UNK_0xf018  codep:0x224c parp:0xf018 size:0x0114 C-string:'UNK_0xf018'
// 2066:      UNK_0xf12e  codep:0x224c parp:0xf12e size:0x0016 C-string:'UNK_0xf12e'
// 2067:      UNK_0xf146  codep:0xf046 parp:0xf146 size:0x001e C-string:'UNK_0xf146'
// 2068:      UNK_0xf166  codep:0x224c parp:0xf166 size:0x0024 C-string:'UNK_0xf166'
// 2069:      UNK_0xf18c  codep:0x224c parp:0xf18c size:0x003a C-string:'UNK_0xf18c'
// 2070:      UNK_0xf1c8  codep:0x224c parp:0xf1c8 size:0x001a C-string:'UNK_0xf1c8'
// 2071:      UNK_0xf1e4  codep:0x224c parp:0xf1e4 size:0x000a C-string:'UNK_0xf1e4'
// 2072:      UNK_0xf1f0  codep:0x0e7f parp:0xf1f0 size:0x000c C-string:'UNK_0xf1f0'
// 2073:      UNK_0xf1fe  codep:0x224c parp:0xf1fe size:0x0011 C-string:'UNK_0xf1fe'
// 2074:      UNK_0xf211  codep:0x1d0d parp:0xf211 size:0x0001 C-string:'UNK_0xf211'
// 2075:      UNK_0xf214  codep:0x0ef2 parp:0xf214 size:0x000c C-string:'UNK_0xf214'
// 2076:      UNK_0xf222  codep:0x224c parp:0xf222 size:0x0000 C-string:'UNK_0xf222'
// 2077:      UNK_0xf224  codep:0xf1c6 parp:0xf224 size:0x002a C-string:'UNK_0xf224'
// 2078:      UNK_0xf250  codep:0x224c parp:0xf250 size:0x0018 C-string:'UNK_0xf250'
// 2079:      UNK_0xf26a  codep:0x224c parp:0xf26a size:0x00a8 C-string:'UNK_0xf26a'
// 2080:      UNK_0xf314  codep:0x224c parp:0xf314 size:0x006a C-string:'UNK_0xf314'
// 2081:      UNK_0xf380  codep:0x224c parp:0xf380 size:0x0016 C-string:'UNK_0xf380'
// 2082:      UNK_0xf398  codep:0x224c parp:0xf398 size:0x0024 C-string:'UNK_0xf398'
// 2083:      UNK_0xf3be  codep:0x224c parp:0xf3be size:0x0014 C-string:'UNK_0xf3be'
// 2084:      UNK_0xf3d4  codep:0x224c parp:0xf3d4 size:0x0020 C-string:'UNK_0xf3d4'
// 2085:      UNK_0xf3f6  codep:0x224c parp:0xf3f6 size:0x0012 C-string:'UNK_0xf3f6'
// 2086:      UNK_0xf40a  codep:0x224c parp:0xf40a size:0x0034 C-string:'UNK_0xf40a'
// 2087:      UNK_0xf440  codep:0x224c parp:0xf440 size:0x0022 C-string:'UNK_0xf440'
// 2088:      UNK_0xf464  codep:0x224c parp:0xf464 size:0x001c C-string:'UNK_0xf464'
// 2089:      UNK_0xf482  codep:0x224c parp:0xf482 size:0x0046 C-string:'UNK_0xf482'
// 2090:            JUMP  codep:0x224c parp:0xf4d1 size:0x013e C-string:'JUMP'
// 2091:      UNK_0xf611  codep:0x0000 parp:0xf611 size:0x03fc C-string:'UNK_0xf611'
// 2092:      UNK_0xfa0f  codep:0x0000 parp:0xfa0f size:0x0004 C-string:'UNK_0xfa0f'
// 2093:      UNK_0xfa15  codep:0x0000 parp:0xfa15 size:0x00db C-string:'UNK_0xfa15'
// 2094:      UNK_0xfaf2  codep:0x0000 parp:0xfaf2 size:0xfffffa6e C-string:'UNK_0xfaf2'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xedd5[2] = {0x3a, 0x20}; // UNK_0xedd5
unsigned char UNK_0xedd9[2] = {0x3a, 0x20}; // UNK_0xedd9
unsigned char UNK_0xefdc[2] = {0x3a, 0x20}; // UNK_0xefdc



// 0xed42: db 0x82 0x00 0x29 0x1d 0x3a 0x20 0x4c 0x22 0x44 0xed 0xae 0x0b 0x72 0x0f 0x90 0x16 0x4c 0x22 0x44 0xed 0xae 0x0b 0x92 0x0f 0x90 0x16 0x4c 0x22 0xb4 0x0d 0xb4 0x0d 0xb4 0x0d 0x41 0x0e 0x50 0x0e 0x52 0xed 0xf2 0x0e 0x48 0xed 0x6e 0x0e 0x48 0xed 0x7f 0x0e 0xfa 0x88 0x50 0x0e 0x52 0xed 0x7f 0x0e 0x48 0xed 0x50 0x0e 0x48 0xed 0x60 0x0e 0x52 0xed 0xfa 0x88 0x50 0x0e 0x48 0xed 0x60 0x0e 0x52 0xed 0x6e 0x0e 0x52 0xed 0x60 0x0e 0x52 0xed 0xfa 0x88 0x6e 0x0e 0x52 0xed 0x60 0x0e 0x52 0xed 0xb3 0x0e 0x6e 0x0e 0x48 0xed 0xf2 0x0e 0x48 0xed 0xfa 0x88 0x90 0x0e 0x32 0x0e 0x90 0x0e 0x90 0x0e 0xde 0x0d 0x90 0x16 '  ) : L"D   r   L"D       L"      A P R   H n H    P R  H P H ` R   P H ` R n R ` R   n R ` R   n H   H     2         '

// ================================================
// 0xedba: WORD 'UNK_0xedbc' codep=0x7420 parp=0xedbc
// ================================================
// 0xedbc: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xedbf: WORD 'UNK_0xedc1' codep=0x7420 parp=0xedc1
// ================================================
// 0xedc1: db 0x11 0x11 0x12 '   '

// ================================================
// 0xedc4: WORD 'UNK_0xedc6' codep=0x7420 parp=0xedc6
// ================================================
// 0xedc6: db 0x14 0x34 0x0f ' 4 '

// ================================================
// 0xedc9: WORD 'UNK_0xedcb' codep=0x7420 parp=0xedcb
// ================================================
// 0xedcb: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xedce: WORD 'UNK_0xedd0' codep=0x7420 parp=0xedd0
// ================================================
// 0xedd0: db 0x14 0x56 0x01 ' V '

// ================================================
// 0xedd3: WORD 'UNK_0xedd5' codep=0x1d29 parp=0xedd5
// ================================================
// 0xedd5: db 0x3a 0x20 ': '

// ================================================
// 0xedd7: WORD 'UNK_0xedd9' codep=0x1d29 parp=0xedd9
// ================================================
// 0xedd9: db 0x3a 0x20 ': '

// ================================================
// 0xeddb: WORD 'UNK_0xeddd' codep=0x224c parp=0xeddd
// ================================================

void UNK_0xeddd() // UNK_0xeddd
{
  POS_dot_(); // POS.
  Push(0x000d);
  GREY1(); // GREY1
  POLY_minus_ER(); // POLY-ER
  _gt_1FONT(); // >1FONT
  BLACK(); // BLACK
  GREY2(); // GREY2
  DK_minus_BLUE(); // DK-BLUE
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xedf5: WORD 'UNK_0xedf7' codep=0x224c parp=0xedf7
// ================================================

void UNK_0xedf7() // UNK_0xedf7
{
  Push(0xc090);
  MODULE(); // MODULE
}

// 0xedff: db 0x4c 0x22 0x5d 0x17 0x98 0xbc 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0xef 0xc4 0xd9 0x84 0x90 0x16 'L"]       L"]       '

// ================================================
// 0xee13: WORD 'UNK_0xee15' codep=0x224c parp=0xee15
// ================================================

void UNK_0xee15() // UNK_0xee15
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
}


// ================================================
// 0xee1d: WORD 'UNK_0xee1f' codep=0x224c parp=0xee1f
// ================================================

void UNK_0xee1f() // UNK_0xee1f
{
  UNK_0xee15(); // UNK_0xee15
  if (Pop() == 0) goto label1;
  Push(Pop() + Pop()); // +
  return;

  label1:
  _minus_(); // -
}


// ================================================
// 0xee2f: WORD 'UNK_0xee31' codep=0x224c parp=0xee31
// ================================================

void UNK_0xee31() // UNK_0xee31
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
// 0xee41: WORD 'UNK_0xee43' codep=0x224c parp=0xee43
// ================================================

void UNK_0xee43() // UNK_0xee43
{
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  ROT(); // ROT
  _minus_(); // -
  ABS(); // ABS
  _gt_R(); // >R
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
  _minus_(); // -
  ABS(); // ABS
  R_gt_(); // R>
  MAX(); // MAX
  ICLOSE(); // ICLOSE
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
}


// ================================================
// 0xee6b: WORD 'UNK_0xee6d' codep=0x224c parp=0xee6d
// ================================================

void UNK_0xee6d() // UNK_0xee6d
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xeddd(); // UNK_0xeddd
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  Push(pp_RECORD_n_); // RECORD#
  _099(); // 099
  Push(Pop()-1); // 1-
  DUP(); // DUP
  Push(0x000c);
  Push(Pop() * Pop()); // *
  _1BTN(); // 1BTN
  Push(Pop() + Pop()); // +
  Push(0x000c);
  TYPE(); // TYPE
  Push(0x0010);
  Push(0x003b);
  UNK_0xeddd(); // UNK_0xeddd
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  UNK_0xedc1(); // UNK_0xedc1
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xedbc(); // UNK_0xedbc
  _do__dot_(); // $.
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb9: WORD 'UNK_0xeebb' codep=0x224c parp=0xeebb
// ================================================

void UNK_0xeebb() // UNK_0xeebb
{
  Push(0x0010);
  Push(0x0041);
  UNK_0xeddd(); // UNK_0xeddd
  PRINT("ISS", 3); // (.")
  Push(0x0010);
  Push(0x003b);
  UNK_0xeddd(); // UNK_0xeddd
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xedc6(); // UNK_0xedc6
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeee1: WORD 'UNK_0xeee3' codep=0x224c parp=0xeee3
// ================================================

void UNK_0xeee3() // UNK_0xeee3
{
  DUP(); // DUP
  Push(0); // 0
  Push(cc__7); // 7
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xeebb(); // UNK_0xeebb
  goto label1;

  label2:
  DUP(); // DUP
  UNK_0xee6d(); // UNK_0xee6d

  label1:
  _dot_BTN_minus_TE(); // .BTN-TE
}

// 0xef05: db 0x4c 0x22 0xb4 0x0d 0x5d 0x17 0x3b 0x00 0xa2 0x0e 0x92 0x0f 0x5d 0x17 0x23 0x00 0xa2 0x0e 0x92 0x0f 0x5d 0x17 0x3c 0x00 0xa2 0x0e 0x72 0x0f 0x5d 0x17 0x24 0x00 0x90 0x0e 0x72 0x0f 0x50 0x8e 0x5c 0xed 0x90 0x16 0x4c 0x22 0xa7 0x4f 0x76 0xa2 0x90 0x16 'L"  ] ;     ] #     ] <   r ] $   r P \   L" Ov   '

// ================================================
// 0xef37: WORD '(GET-AU' codep=0x4b3b parp=0xef43
// ================================================
// 0xef43: db 0x07 0x00 0x31 0xef 0x01 0x00 0xf7 0xed 0x02 0x00 0xf7 0xed 0x03 0x00 0x01 0xee 0x04 0x00 0x0b 0xee 0x05 0x00 0x1d 0xcb 0x06 0x00 0x1d 0xcb 0x08 0x00 0x0b 0xee '  1                             '

// ================================================
// 0xef63: WORD 'UNK_0xef65' codep=0x224c parp=0xef65
// ================================================

void UNK_0xef65() // UNK_0xef65
{
  BLACK(); // BLACK
  _ro_SHIP_minus_C(); // (SHIP-C
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  _ro_GET_minus_AU(); // (GET-AU
  Push(pp_BTN_minus_REC); // BTN-REC
  Push(Read16(Pop())); // @
  UNK_0xeee3(); // UNK_0xeee3
  BLUE(); // BLUE
  Push(pp_THIS_minus_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_HIGHLI(); // .HIGHLI
}


// ================================================
// 0xef7f: WORD 'UNK_0xef81' codep=0x224c parp=0xef81
// ================================================

void UNK_0xef81() // UNK_0xef81
{
  _gt_DISPLA(); // >DISPLA
  CTINIT(); // CTINIT
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4a12(); // UNK_0x4a12
  UNK_0x4d57(); // UNK_0x4d57
  UNK_0x2052(); // UNK_0x2052
  UNK_0x4f52(); // UNK_0x4f52
  UNK_0x2046(); // UNK_0x2046
  UNK_0x4e47(); // UNK_0x4e47
  UNK_0x4149(); // UNK_0x4149
  UNK_0x4549(); // UNK_0x4549
  UNK_0xf146(); // UNK_0xf146
  UNK_0x16a1(); // UNK_0x16a1
  UNK_0x1218(); // UNK_0x1218
  UNK_0x026d(); // UNK_0x026d
  UNK_0x2f02(); // UNK_0x2f02
  UNK_0xf1f0(); // UNK_0xf1f0
  UNK_0x16a1(); // UNK_0x16a1
  UNK_0x3c18(); // UNK_0x3c18
  UNK_0x026d(); // UNK_0x026d
  UNK_0x2f02(); // UNK_0x2f02
  UNK_0xf1f0(); // UNK_0xf1f0
  UNK_0x90a1(); // UNK_0x90a1
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x4524(); // UNK_0x4524
  UNK_0x548f(); // UNK_0x548f
  UNK_0x655c(); // UNK_0x655c
  UNK_0x536f(); // UNK_0x536f
  UNK_0x9d52(); // UNK_0x9d52
  UNK_0x5d88(); // UNK_0x5d88
  UNK_0x2519(); // UNK_0x2519
  UNK_0x5d02(); // UNK_0x5d02
  UNK_0x8519(); // UNK_0x8519
  UNK_0x7b02(); // UNK_0x7b02
  UNK_0x3d9c(); // UNK_0x3d9c
  UNK_0xa711(); // UNK_0xa711
  UNK_0x0051(); // UNK_0x0051
  UNK_0x5da0(); // UNK_0x5da0
  UNK_0x6319(); // UNK_0x6319
  UNK_0xad02(); // UNK_0xad02
  UNK_0x3d13(); // UNK_0x3d13
  UNK_0xe111(); // UNK_0xe111
  UNK_0x1f29(); // UNK_0x1f29
  UNK_0x908f(); // UNK_0x908f
  UNK_0x2918(); // UNK_0x2918

// ================================================
// 0xefda: WORD 'UNK_0xefdc' codep=0x1d29 parp=0xefdc
// ================================================
  UNK_0x3a1f(); // UNK_0x3a1f
  UNK_0x4c22(); // UNK_0x4c22

// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x224c parp=0xefe0
// ================================================
  UNK_0xda24(); // UNK_0xda24

void UNK_0xefe0() // UNK_0xefe0
{
  UNK_0xaef1(); // UNK_0xaef1
  UNK_0xb00d(); // UNK_0xb00d
  UNK_0x90f1(); // UNK_0x90f1
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x4124(); // UNK_0x4124
  UNK_0x5d10(); // UNK_0x5d10
  UNK_0x6419(); // UNK_0x6419
  UNK_0xda02(); // UNK_0xda02
  UNK_0xaef1(); // UNK_0xaef1
  UNK_0x920d(); // UNK_0x920d
  UNK_0x2011(); // UNK_0x2011
  UNK_0xf211(); // UNK_0xf211
  UNK_0xc410(); // UNK_0xc410
  UNK_0x5d4d(); // UNK_0x5d4d
  UNK_0x2819(); // UNK_0x2819
  UNK_0xb302(); // UNK_0xb302
  UNK_0x9210(); // UNK_0x9210
  UNK_0x4c11(); // UNK_0x4c11
  UNK_0x4411(); // UNK_0x4411
  UNK_0x16ef(); // UNK_0x16ef
  UNK_0x056f(); // UNK_0x056f
  UNK_0x90f1(); // UNK_0x90f1
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x9d24(); // UNK_0x9d24
  UNK_0xe888(); // UNK_0xe888
  UNK_0x90f1(); // UNK_0x90f1

// ================================================
// 0xf015: WORD 'UNK_0xf017' codep=0x4c16 parp=0xf017
// ================================================
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf016: WORD 'UNK_0xf018' codep=0x224c parp=0xf018
// ================================================
  UNK_0x1f24(); // UNK_0x1f24

void UNK_0xf018() // UNK_0xf018
{
  UNK_0xb88f(); // UNK_0xb88f
  UNK_0x978a(); // UNK_0x978a
  UNK_0xb43d(); // UNK_0xb43d
  UNK_0x0e51(); // UNK_0x0e51
  UNK_0x5df2(); // UNK_0x5df2
  UNK_0x0b19(); // UNK_0x0b19
  UNK_0xcc02(); // UNK_0xcc02
  UNK_0x0e51(); // UNK_0x0e51
  UNK_0x5df2(); // UNK_0x5df2
  UNK_0x1019(); // UNK_0x1019
  UNK_0x4802(); // UNK_0x4802
  Push(h); // I
  UNK_0x5df2(); // UNK_0x5df2
  UNK_0x1519(); // UNK_0x1519
  UNK_0x3c02(); // UNK_0x3c02
  Push(h); // I
  UNK_0x5df2(); // UNK_0x5df2
  UNK_0x1a19(); // UNK_0x1a19
  UNK_0xd502(); // UNK_0xd502
  UNK_0x0e51(); // UNK_0x0e51
  UNK_0x67f2(); // UNK_0x67f2
  UNK_0x9091(); // UNK_0x9091
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x4124(); // UNK_0x4124
  UNK_0x5d10(); // UNK_0x5d10
  UNK_0x1719(); // UNK_0x1719
  UNK_0x5f02(); // UNK_0x5f02
  UNK_0xf214(); // UNK_0xf214
  UNK_0x5d10(); // UNK_0x5d10
  UNK_0x3c19(); // UNK_0x3c19
  UNK_0x5f02(); // UNK_0x5f02
  UNK_0x3e14(); // UNK_0x3e14
  UNK_0x9015(); // UNK_0x9015
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0xe424(); // UNK_0xe424
  UNK_0x6998(); // UNK_0x6998
  UNK_0x7996(); // UNK_0x7996
  UNK_0x1f96(); // UNK_0x1f96
  UNK_0x227c(); // UNK_0x227c
  UNK_0x9077(); // UNK_0x9077
  UNK_0x2918(); // UNK_0x2918
  UNK_0x3a1f(); // UNK_0x3a1f
  UNK_0x4c22(); // UNK_0x4c22
  UNK_0xc824(); // UNK_0xc824
  UNK_0xfa0f(); // UNK_0xfa0f
  UNK_0x1c17(); // UNK_0x1c17
  UNK_0x2002(); // UNK_0x2002
  UNK_0xb811(); // UNK_0xb811
  UNK_0x5c17(); // UNK_0x5c17
  UNK_0x46f2(); // UNK_0x46f2
  UNK_0x07f2(); // UNK_0x07f2
  UNK_0xfa15(); // UNK_0xfa15
  UNK_0x0817(); // UNK_0x0817
  UNK_0xb802(); // UNK_0xb802
  UNK_0x6a3d(); // UNK_0x6a3d
  UNK_0x23f2(); // UNK_0x23f2
  UNK_0xdf6f(); // UNK_0xdf6f
  UNK_0xd07b(); // UNK_0xd07b
  UNK_0xec17(); // UNK_0xec17
  UNK_0x9101(); // UNK_0x9101
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x1a24(); // UNK_0x1a24
  UNK_0x3865(); // UNK_0x3865
  UNK_0xb30e(); // UNK_0xb30e
  UNK_0x0a10(); // UNK_0x0a10
  UNK_0xae5e(); // UNK_0xae5e
  UNK_0xc20d(); // UNK_0xc20d
  UNK_0x4199(); // UNK_0x4199
  UNK_0x6a10(); // UNK_0x6a10
  UNK_0x16f2(); // UNK_0x16f2
  UNK_0x6e6f(); // UNK_0x6e6f
  GVERTEX(); // GVERTEX
  UNK_0xaef2(); // UNK_0xaef2
  UNK_0x900d(); // UNK_0x900d
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0xb424(); // UNK_0xb424
  UNK_0x920f(); // UNK_0x920f
  UNK_0x9011(); // UNK_0x9011
  UNK_0xb310(); // UNK_0xb310
  UNK_0xd711(); // UNK_0xd711
  PFA(); // PFA
  UNK_0x906f(); // UNK_0x906f
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0xf224(); // UNK_0xf224
  UNK_0x7f10(); // UNK_0x7f10
  UNK_0x9010(); // UNK_0x9010
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x0e24(); // UNK_0x0e24
  UNK_0xb353(); // UNK_0xb353
  UNK_0xf611(); // UNK_0xf611
  UNK_0x9211(); // UNK_0x9211
  UNK_0x90f2(); // UNK_0x90f2
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0xa724(); // UNK_0xa724
  UNK_0xc63d(); // UNK_0xc63d
  UNK_0x9ff2(); // UNK_0x9ff2
  UNK_0xc63d(); // UNK_0xc63d
  U_minus_COMM(); // U-COMM
  UNK_0x2ef2(); // UNK_0x2ef2
  UNK_0xae11(); // UNK_0xae11
  UNK_0x97f2(); // UNK_0x97f2
  UNK_0xc63d(); // UNK_0xc63d
  U_minus_COMM(); // U-COMM
  UNK_0x2ef2(); // UNK_0x2ef2
  UNK_0xae11(); // UNK_0xae11
  UNK_0x8ff2(); // UNK_0x8ff2
  UNK_0xc63d(); // UNK_0xc63d
  U_minus_COMM(); // U-COMM
  UNK_0x3df2(); // UNK_0x3df2
  UNK_0xae11(); // UNK_0xae11
  UNK_0x87f2(); // UNK_0x87f2
  UNK_0xc63d(); // UNK_0xc63d
  U_minus_COMM(); // U-COMM
  UNK_0x8ff2(); // UNK_0x8ff2
  UNK_0xae3d(); // UNK_0xae3d
  UNK_0x7ff2(); // UNK_0x7ff2
  UNK_0xc63d(); // UNK_0xc63d
  U_minus_COMM(); // U-COMM
  UNK_0x5df2(); // UNK_0x5df2
  UNK_0x0a19(); // UNK_0x0a19
  UNK_0xae02(); // UNK_0xae02
  UNK_0x3df2(); // UNK_0x3df2
  UNK_0xc611(); // UNK_0xc611
  U_minus_COMM(); // U-COMM
  UNK_0x5df2(); // UNK_0x5df2
  UNK_0x0f19(); // UNK_0x0f19
  UNK_0xae02(); // UNK_0xae02
  UNK_0x2ef2(); // UNK_0x2ef2
  UNK_0xc611(); // UNK_0xc611
  U_minus_COMM(); // U-COMM
  UNK_0x5df2(); // UNK_0x5df2
  UNK_0x1419(); // UNK_0x1419
  UNK_0xae02(); // UNK_0xae02
  UNK_0x32f2(); // UNK_0x32f2
  UNK_0x9010(); // UNK_0x9010
  UNK_0x2918(); // UNK_0x2918
  UNK_0x3a1f(); // UNK_0x3a1f
  UNK_0x4c22(); // UNK_0x4c22

// ================================================
// 0xf12c: WORD 'UNK_0xf12e' codep=0x224c parp=0xf12e
// ================================================
  UNK_0x2824(); // UNK_0x2824

void UNK_0xf12e() // UNK_0xf12e
{
  UNK_0x65f3(); // UNK_0x65f3
  UNK_0x0a6f(); // UNK_0x0a6f
  UNK_0xae5e(); // UNK_0xae5e
  UNK_0xd60d(); // UNK_0xd60d
  UNK_0xc899(); // UNK_0xc899
  UNK_0xfa0f(); // UNK_0xfa0f
  UNK_0x1817(); // UNK_0x1817
  UNK_0x2002(); // UNK_0x2002
  UNK_0xb811(); // UNK_0xb811
  UNK_0x5c17(); // UNK_0x5c17
  UNK_0x46f2(); // UNK_0x46f2

// ================================================
// 0xf144: WORD 'UNK_0xf146' codep=0xf046 parp=0xf146
// ================================================
  UNK_0xfaf2(); // UNK_0xfaf2
  UNK_0x0617(); // UNK_0x0617
  UNK_0x2802(); // UNK_0x2802
  UNK_0x57f3(); // UNK_0x57f3
  UNK_0xdf6f(); // UNK_0xdf6f
  UNK_0xd07b(); // UNK_0xd07b
  UNK_0xf017(); // UNK_0xf017
  UNK_0x2901(); // UNK_0x2901
  UNK_0xaef3(); // UNK_0xaef3
  UNK_0x900d(); // UNK_0x900d
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x1a24(); // UNK_0x1a24
  UNK_0x3865(); // UNK_0x3865
  UNK_0x2c0e(); // UNK_0x2c0e
  UNK_0x90f3(); // UNK_0x90f3
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x224c parp=0xf166
// ================================================
  UNK_0xd724(); // UNK_0xd724

void UNK_0xf166() // UNK_0xf166
{
  UNK_0x65ef(); // UNK_0x65ef
  UNK_0x5a6f(); // UNK_0x5a6f
  UNK_0x07f3(); // UNK_0x07f3
  UNK_0xfa15(); // UNK_0xfa15
  UNK_0x1817(); // UNK_0x1817
  UNK_0xd202(); // UNK_0xd202
  UNK_0xd7f2(); // UNK_0xd7f2
  UNK_0xaeef(); // UNK_0xaeef
  UNK_0x5d0d(); // UNK_0x5d0d
  UNK_0x5f19(); // UNK_0x5f19
  UNK_0xad02(); // UNK_0xad02
  UNK_0x5d13(); // UNK_0x5d13
  UNK_0x0a19(); // UNK_0x0a19
  UNK_0x8902(); // UNK_0x8902
  UNK_0xd713(); // UNK_0xd713
  UNK_0x16ef(); // UNK_0x16ef
  UNK_0x906f(); // UNK_0x906f
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf18a: WORD 'UNK_0xf18c' codep=0x224c parp=0xf18c
// ================================================
  UNK_0x7f24(); // UNK_0x7f24

void UNK_0xf18c() // UNK_0xf18c
{
  UNK_0xef81(); // UNK_0xef81
  BEEPON(); // BEEPON
  UNK_0xf166(); // UNK_0xf166
  Push(pp_UNK_0xedd9); // UNK_0xedd9
  Push(Read16(Pop())); // @
  Push(0x0064);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(pp_UNK_0xefdc); // UNK_0xefdc
  _ex_(); // !
  UNK_0xf018(); // UNK_0xf018
  UNK_0xefe0(); // UNK_0xefe0
  Push(0x03e8);
  Push(i); // I
  Push(0x000a);
  Push(Pop() * Pop()); // *
  _minus_(); // -
  TONE(); // TONE
  Push(0x0028);
  MS(); // MS
  Push(cc__minus_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffdc

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf1c6: WORD 'UNK_0xf1c8' codep=0x224c parp=0xf1c8
// ================================================

void UNK_0xf1c8() // UNK_0xf1c8
{
  Push(0); // 0
  Push(0x0064);
  Push(pp_UNK_0xedd9); // UNK_0xedd9
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(Pop()*2); // 2*
  RRND(); // RRND
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xedd5); // UNK_0xedd5
  _ex_(); // !
}


// ================================================
// 0xf1e2: WORD 'UNK_0xf1e4' codep=0x224c parp=0xf1e4
// ================================================

void UNK_0xf1e4() // UNK_0xf1e4
{
  OVER(); // OVER
  Push(0); // 0
  Push(0x07d0);
  WITHIN(); // WITHIN

// ================================================
// 0xf1ee: WORD 'UNK_0xf1f0' codep=0x0e7f parp=0xf1f0
// ================================================
  OVER(); // OVER
  Push(0); // 0
  Push(0x06e0);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf1fc: WORD 'UNK_0xf1fe' codep=0x224c parp=0xf1fe
// ================================================

void UNK_0xf1fe() // UNK_0xf1fe
{
  SWAP(); // SWAP
  Push(pp_UNK_0xedd5); // UNK_0xedd5
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(Pop()>>1); // 2/
  SWAP(); // SWAP
  RRND(); // RRND
  DUP(); // DUP
  _gt_R(); // >R

// ================================================
// 0xf20f: WORD 'UNK_0xf211' codep=0x1d0d parp=0xf211
// ================================================
  UNK_0xee1f(); // UNK_0xee1f

// ================================================
// 0xf212: WORD 'UNK_0xf214' codep=0x0ef2 parp=0xf214
// ================================================
  SWAP(); // SWAP
  Push(0x00b4);
  R_gt_(); // R>
  _minus_(); // -
  UNK_0xee1f(); // UNK_0xee1f
}


// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x224c parp=0xf222
// ================================================

// ================================================
// 0xf222: WORD 'UNK_0xf224' codep=0xf1c6 parp=0xf224
// ================================================

void UNK_0xf222() // UNK_0xf222
{
  UNK_0xf1c8(); // UNK_0xf1c8
  Push(pp_UNK_0xedd5); // UNK_0xedd5
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;

  label2:
  _2DUP(); // 2DUP
  UNK_0xf1fe(); // UNK_0xf1fe
  _2DUP(); // 2DUP
  UNK_0xf12e(); // UNK_0xf12e
  _gt_R(); // >R
  UNK_0xf1e4(); // UNK_0xf1e4
  if (Pop() == 0) Push(1); else Push(0); // NOT
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  goto label2;

  label1:
  _2SWAP(); // 2SWAP
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x224c parp=0xf250
// ================================================

void UNK_0xf250() // UNK_0xf250
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
// 0xf268: WORD 'UNK_0xf26a' codep=0x224c parp=0xf26a
// ================================================

void UNK_0xf26a() // UNK_0xf26a
{
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  Push(pp__minus_END); // -END
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
  Push(pp__minus_END); // -END
  Push(Read16(Pop())); // @
  Push(0); // 0
  D_minus_(); // D-
  NULL(); // NULL
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__minus_END); // -END
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x01f4);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xf250(); // UNK_0xf250
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  Push(0xc976);
  MODULE(); // MODULE
  return;

  label1:
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__minus_END); // -END
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x0096);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xf250(); // UNK_0xf250
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
// 0xf312: WORD 'UNK_0xf314' codep=0x224c parp=0xf314
// ================================================

void UNK_0xf314() // UNK_0xf314
{
  Push(pp__minus_END); // -END
  Push(Read16(Pop())); // @
  Push(0x05dc);
  Push(pp__minus_END); // -END
  _ex_(); // !
  UNK_0xf26a(); // UNK_0xf26a
  Push(pp__minus_END); // -END
  _ex_(); // !
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  Push(0x0096);
  UNK_0xedcb(); // UNK_0xedcb
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
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
  if (Pop() == 0) goto label2;
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  Push(0x0096);
  _minus_(); // -
  Push(0); // 0
  MAX(); // MAX
  INST_minus_QT(); // INST-QT
  _ex_(); // !

  label2:
  CDROP(); // CDROP

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _st_(); // <
  if (Pop() == 0) return;
  UNK_0xedf7(); // UNK_0xedf7
}


// ================================================
// 0xf37e: WORD 'UNK_0xf380' codep=0x224c parp=0xf380
// ================================================

void UNK_0xf380() // UNK_0xf380
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(pp_UNK_0xedd9); // UNK_0xedd9
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xf222(); // UNK_0xf222
}


// ================================================
// 0xf396: WORD 'UNK_0xf398' codep=0x224c parp=0xf398
// ================================================

void UNK_0xf398() // UNK_0xf398
{
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(0x05db); Pust(0x0000);
  D_gt_(); // D>
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  Push(0x6b65); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY

  label1:
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf3bc: WORD 'UNK_0xf3be' codep=0x224c parp=0xf3be
// ================================================

void UNK_0xf3be() // UNK_0xf3be
{
  Push(pp_UNK_0xedd5); // UNK_0xedd5
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_minus_TIM); // NAV-TIM
  D_ex_(); // D!
}


// ================================================
// 0xf3d2: WORD 'UNK_0xf3d4' codep=0x224c parp=0xf3d4
// ================================================

void UNK_0xf3d4() // UNK_0xf3d4
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xedd0(); // UNK_0xedd0
  C_at_(); // C@
  ICLOSE(); // ICLOSE
  _gt_FLAG(); // >FLAG
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0x6b83); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf3f4: WORD 'UNK_0xf3f6' codep=0x224c parp=0xf3f6
// ================================================

void UNK_0xf3f6() // UNK_0xf3f6
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xedd0(); // UNK_0xedd0
  C_at_(); // C@
  Push(Pop()-1); // 1-
  UNK_0xedd0(); // UNK_0xedd0
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf408: WORD 'UNK_0xf40a' codep=0x224c parp=0xf40a
// ================================================

void UNK_0xf40a() // UNK_0xf40a
{
  _gt_DISPLA(); // >DISPLA
  CTINIT(); // CTINIT
  _gt_SSCT(); // >SSCT
  Push(pp_UNK_0xedd5); // UNK_0xedd5
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0x6ba6); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  return;

  label1:
  Push(0x6bc4); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Push(0x6c00); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440() // UNK_0xf440
{
  Push(0x6c2b); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
  Push(0x6c4a); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf462: WORD 'UNK_0xf464' codep=0x224c parp=0xf464
// ================================================

void UNK_0xf464() // UNK_0xf464
{
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(0x6c69); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Push(0x6c99); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  _dot_TTY(); // .TTY
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf480: WORD 'UNK_0xf482' codep=0x224c parp=0xf482
// ================================================

void UNK_0xf482() // UNK_0xf482
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp_BEEPTONE); // BEEPTONE
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0x01f4);
  Push(pp_BEEPTONE); // BEEPTONE
  _ex_(); // !
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0025);
  Push(0x0085);
  POS_dot_(); // POS.
  _gt_DISPLA(); // >DISPLA
  Push(2); // 2
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
  Push(0x0064);
  MS(); // MS
  UNK_0xefe0(); // UNK_0xefe0
  BEEP(); // BEEP
  Push(0x01f4);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  R_gt_(); // R>
  Push(pp_BEEPTONE); // BEEPTONE
  _ex_(); // !
}


// ================================================
// 0xf4c8: WORD 'JUMP' codep=0x224c parp=0xf4d1
// ================================================

void JUMP() // JUMP
{
  CTINIT(); // CTINIT
  UNK_0xf3d4(); // UNK_0xf3d4
  UNK_0xf398(); // UNK_0xf398
  if (Pop() == 0) return;
  UNK_0xf440(); // UNK_0xf440
  Push(0xd3c5);
  MODULE(); // MODULE
  if (Pop() == 0) return;
  UNK_0xef65(); // UNK_0xef65
  UNK_0xf464(); // UNK_0xf464
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xedd5); // UNK_0xedd5
  _099(); // 099
  UNK_0xf18c(); // UNK_0xf18c
  UNK_0xf166(); // UNK_0xf166
  Push(pp_UNK_0xedd9); // UNK_0xedd9
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xefdc); // UNK_0xefdc
  _ex_(); // !
  UNK_0xf018(); // UNK_0xf018
  UNK_0xf482(); // UNK_0xf482
  Push(pp_HEADING); // HEADING
  Push(Read16(Pop())); // @
  Push(pp_EYEXY); // EYEXY
  _2_at_(); // 2@
  UNK_0xf380(); // UNK_0xf380
  UNK_0xee43(); // UNK_0xee43
  Push(0xc558);
  MODULE(); // MODULE
  Push(0xcaeb);
  MODULE(); // MODULE
  UNK_0xf3be(); // UNK_0xf3be
  Push(0xcb2e);
  MODULE(); // MODULE
  UNK_0xf40a(); // UNK_0xf40a
  UNK_0xf3f6(); // UNK_0xf3f6
  UNK_0xf314(); // UNK_0xf314
  return;

  label1:
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x430b(); // UNK_0x430b
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x4545(); // UNK_0x4545
  UNK_0x4c4e(); // UNK_0x4c4e
  UNK_0x4447(); // UNK_0x4447
  _dot_TTY(); // .TTY
  Push(0xcb2e);
  MODULE(); // MODULE
}

// 0xf543: db 0x4a 0x55 0x4d 0x50 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'JUMP-VO______________________ '
  