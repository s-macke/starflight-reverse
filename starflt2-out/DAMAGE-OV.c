// ====== OVERLAY 'DAMAGE-OV' ======

#include"cpu.h"

// store offset = 0xe6c0
// overlay size   = 0x0ea0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x0418  codep:0x0002 parp:0x0418 size:0x01fe C-string:'UNK_0x0418'
// 1870:      UNK_0x0618  codep:0x414e parp:0x0618 size:0x01fd C-string:'UNK_0x0618'
// 1871:      UNK_0x0817  codep:0x5452 parp:0x0817 size:0x02d0 C-string:'UNK_0x0817'
// 1872:      UNK_0x0ae9  codep:0x1065 parp:0x0ae9 size:0xffffffff C-string:'UNK_0x0ae9'
// 1873:      UNK_0x0aea  codep:0xf210 parp:0x0aea size:0x0383 C-string:'UNK_0x0aea'
// 1874:      UNK_0x0e6f  codep:0x70ca parp:0x0e6f size:0x04a8 C-string:'UNK_0x0e6f'
// 1875:      UNK_0x1319  codep:0x9c27 parp:0x1319 size:0x04fe C-string:'UNK_0x1319'
// 1876:      UNK_0x1819  codep:0x5b18 parp:0x1819 size:0x01f6 C-string:'UNK_0x1819'
// 1877:      UNK_0x1a11  codep:0x1312 parp:0x1a11 size:0x0011 C-string:'UNK_0x1a11'
// 1878:      UNK_0x1a24  codep:0x6f76 parp:0x1a24 size:0x03dc C-string:'UNK_0x1a24'
// 1879:      UNK_0x1e02  codep:0x0bae parp:0x1e02 size:0x0013 C-string:'UNK_0x1e02'
// 1880:      UNK_0x1e17  codep:0x90ff parp:0x1e17 size:0x00e9 C-string:'UNK_0x1e17'
// 1881:      UNK_0x1f02  codep:0x524f parp:0x1f02 size:0x00fe C-string:'UNK_0x1f02'
// 1882:      UNK_0x2002  codep:0x175d parp:0x2002 size:0xffffffff C-string:'UNK_0x2002'
// 1883:      UNK_0x2003  codep:0x1017 parp:0x2003 size:0x0049 C-string:'UNK_0x2003'
// 1884:      UNK_0x204e  codep:0x6e69 parp:0x204e size:0x0002 C-string:'UNK_0x204e'
// 1885:      UNK_0x2052  codep:0x6568 parp:0x2052 size:0x0005 C-string:'UNK_0x2052'
// 1886:      UNK_0x2059  codep:0x05c2 parp:0x2059 size:0x0000 C-string:'UNK_0x2059'
// 1887:      UNK_0x205b  codep:0x0bae parp:0x205b size:0x0012 C-string:'UNK_0x205b'
// 1888:      UNK_0x206f  codep:0x6163 parp:0x206f size:0x0030 C-string:'UNK_0x206f'
// 1889:      UNK_0x20a1  codep:0x4150 parp:0x20a1 size:0x0071 C-string:'UNK_0x20a1'
// 1890:      UNK_0x2114  codep:0x6e75 parp:0x2114 size:0x0003 C-string:'UNK_0x2114'
// 1891:      UNK_0x2119  codep:0x2065 parp:0x2119 size:0x002b C-string:'UNK_0x2119'
// 1892:      UNK_0x2146  codep:0x1660 parp:0x2146 size:0x08cf C-string:'UNK_0x2146'
// 1893:      UNK_0x2a17  codep:0x18cc parp:0x2a17 size:0x0063 C-string:'UNK_0x2a17'
// 1894:      UNK_0x2a7c  codep:0x534b parp:0x2a7c size:0x0043 C-string:'UNK_0x2a7c'
// 1895:      UNK_0x2ac1  codep:0xa1c8 parp:0x2ac1 size:0x04a3 C-string:'UNK_0x2ac1'
// 1896:      UNK_0x2f66  codep:0x4faf parp:0x2f66 size:0x02a8 C-string:'UNK_0x2f66'
// 1897:      UNK_0x3210  codep:0x425b parp:0x3210 size:0x0bfd C-string:'UNK_0x3210'
// 1898:      UNK_0x3e0f  codep:0x3c9e parp:0x3e0f size:0x0066 C-string:'UNK_0x3e0f'
// 1899:      UNK_0x3e77  codep:0x3e61 parp:0x3e77 size:0x0090 C-string:'UNK_0x3e77'
// 1900:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0x020b C-string:'UNK_0x3f09'
// 1901:      UNK_0x4116  codep:0x4cd6 parp:0x4116 size:0x002d C-string:'UNK_0x4116'
// 1902:      UNK_0x4145  codep:0x4386 parp:0x4145 size:0x0000 C-string:'UNK_0x4145'
// 1903:      UNK_0x4147  codep:0x5255 parp:0x4147 size:0x007a C-string:'UNK_0x4147'
// 1904:      UNK_0x41c3  codep:0x4103 parp:0x41c3 size:0x004b C-string:'UNK_0x41c3'
// 1905:      UNK_0x4210  codep:0x0bdf parp:0x4210 size:0x00da C-string:'UNK_0x4210'
// 1906:      UNK_0x42ec  codep:0x42b3 parp:0x42ec size:0x001f C-string:'UNK_0x42ec'
// 1907:      UNK_0x430d  codep:0x4cd8 parp:0x430d size:0x0014 C-string:'UNK_0x430d'
// 1908:      UNK_0x4323  codep:0x5d22 parp:0x4323 size:0x00fd C-string:'UNK_0x4323'
// 1909:      UNK_0x4422  codep:0x0c15 parp:0x4422 size:0x0023 C-string:'UNK_0x4422'
// 1910:      UNK_0x4447  codep:0x8743 parp:0x4447 size:0x0008 C-string:'UNK_0x4447'
// 1911:      UNK_0x4451  codep:0x0022 parp:0x4451 size:0x00ba C-string:'UNK_0x4451'
// 1912:      UNK_0x450d  codep:0xe022 parp:0x450d size:0x0037 C-string:'UNK_0x450d'
// 1913:      UNK_0x4546  codep:0x40e0 parp:0x4546 size:0x0006 C-string:'UNK_0x4546'
// 1914:      UNK_0x454e  codep:0x15fa parp:0x454e size:0x0000 C-string:'UNK_0x454e'
// 1915:      UNK_0x4550  codep:0x0008 parp:0x4550 size:0x0002 C-string:'UNK_0x4550'
// 1916:      UNK_0x4554  codep:0x40d2 parp:0x4554 size:0xffffffff C-string:'UNK_0x4554'
// 1917:      UNK_0x4555  codep:0xdf40 parp:0x4555 size:0x0004 C-string:'UNK_0x4555'
// 1918:      UNK_0x455b  codep:0x1522 parp:0x455b size:0x00a5 C-string:'UNK_0x455b'
// 1919:      UNK_0x4602  codep:0x1690 parp:0x4602 size:0x0150 C-string:'UNK_0x4602'
// 1920:      UNK_0x4754  codep:0x1690 parp:0x4754 size:0x00b5 C-string:'UNK_0x4754'
// 1921:      UNK_0x480b  codep:0xc40c parp:0x480b size:0x0016 C-string:'UNK_0x480b'
// 1922:      UNK_0x4823  codep:0x150e parp:0x4823 size:0x0024 C-string:'UNK_0x4823'
// 1923:      UNK_0x4849  codep:0x5b2a parp:0x4849 size:0x0024 C-string:'UNK_0x4849'
// 1924:      UNK_0x486f  codep:0x224c parp:0x486f size:0x00d9 C-string:'UNK_0x486f'
// 1925:      UNK_0x494a  codep:0xffec parp:0x494a size:0x0002 C-string:'UNK_0x494a'
// 1926:      UNK_0x494e  codep:0x2ba5 parp:0x494e size:0x0004 C-string:'UNK_0x494e'
// 1927:      UNK_0x4954  codep:0x224c parp:0x4954 size:0x0000 C-string:'UNK_0x4954'
// 1928:      UNK_0x4956  codep:0x450a parp:0x4956 size:0x0000 C-string:'UNK_0x4956'
// 1929:      UNK_0x4958  codep:0x40bb parp:0x4958 size:0x00b5 C-string:'UNK_0x4958'
// 1930:      UNK_0x4a0f  codep:0x49f8 parp:0x4a0f size:0x00f7 C-string:'UNK_0x4a0f'
// 1931:      UNK_0x4b08  codep:0x02c3 parp:0x4b08 size:0x010e C-string:'UNK_0x4b08'
// 1932:      UNK_0x4c18  codep:0x48e0 parp:0x4c18 size:0x0023 C-string:'UNK_0x4c18'
// 1933:      UNK_0x4c3d  codep:0x900f parp:0x4c3d size:0x0008 C-string:'UNK_0x4c3d'
// 1934:      UNK_0x4c47  codep:0xa24b parp:0x4c47 size:0x0002 C-string:'UNK_0x4c47'
// 1935:      UNK_0x4c4b  codep:0xdf0d parp:0x4c4b size:0x0001 C-string:'UNK_0x4c4b'
// 1936:      UNK_0x4c4e  codep:0x15fa parp:0x4c4e size:0x0006 C-string:'UNK_0x4c4e'
// 1937:      UNK_0x4c56  codep:0x0ff6 parp:0x4c56 size:0xffffffff C-string:'UNK_0x4c56'
// 1938:      UNK_0x4c57  codep:0x600f parp:0x4c57 size:0x00b4 C-string:'UNK_0x4c57'
// 1939:      UNK_0x4d0d  codep:0x4f3c parp:0x4d0d size:0x0138 C-string:'UNK_0x4d0d'
// 1940:      UNK_0x4e47  codep:0xd941 parp:0x4e47 size:0x00db C-string:'UNK_0x4e47'
// 1941:      UNK_0x4f24  codep:0x4ec0 parp:0x4f24 size:0x0028 C-string:'UNK_0x4f24'
// 1942:      UNK_0x4f4e  codep:0x4685 parp:0x4f4e size:0x00c7 C-string:'UNK_0x4f4e'
// 1943:      UNK_0x5017  codep:0x5247 parp:0x5017 size:0x0062 C-string:'UNK_0x5017'
// 1944:      UNK_0x507b  codep:0x6822 parp:0x507b size:0x01ca C-string:'UNK_0x507b'
// 1945:      UNK_0x5247  codep:0x2d53 parp:0x5247 size:0x00c2 C-string:'UNK_0x5247'
// 1946:      UNK_0x530b  codep:0x8552 parp:0x530b size:0x0048 C-string:'UNK_0x530b'
// 1947:      UNK_0x5355  codep:0x412a parp:0x5355 size:0x0095 C-string:'UNK_0x5355'
// 1948:      UNK_0x53ec  codep:0x8553 parp:0x53ec size:0x0055 C-string:'UNK_0x53ec'
// 1949:      UNK_0x5443  codep:0x00ff parp:0x5443 size:0x0010 C-string:'UNK_0x5443'
// 1950:      UNK_0x5455  codep:0x29c2 parp:0x5455 size:0x00fa C-string:'UNK_0x5455'
// 1951:      UNK_0x5551  codep:0x5529 parp:0x5551 size:0x01b7 C-string:'UNK_0x5551'
// 1952:      UNK_0x570a  codep:0x564f parp:0x570a size:0x0531 C-string:'UNK_0x570a'
// 1953:      UNK_0x5c3d  codep:0x5385 parp:0x5c3d size:0x00d1 C-string:'UNK_0x5c3d'
// 1954:      UNK_0x5d10  codep:0x523f parp:0x5d10 size:0x0003 C-string:'UNK_0x5d10'
// 1955:      UNK_0x5d15  codep:0xd249 parp:0x5d15 size:0x0060 C-string:'UNK_0x5d15'
// 1956:      UNK_0x5d77  codep:0xd448 parp:0x5d77 size:0x0003 C-string:'UNK_0x5d77'
// 1957:      UNK_0x5d7c  codep:0x7000 parp:0x5d7c size:0x006e C-string:'UNK_0x5d7c'
// 1958:      UNK_0x5dec  codep:0x29c7 parp:0x5dec size:0x0221 C-string:'UNK_0x5dec'
// 1959:      UNK_0x600f  codep:0x29c1 parp:0x600f size:0x0035 C-string:'UNK_0x600f'
// 1960:      UNK_0x6046  codep:0x91cb parp:0x6046 size:0x00a4 C-string:'UNK_0x6046'
// 1961:      UNK_0x60ec  codep:0x4527 parp:0x60ec size:0x1114 C-string:'UNK_0x60ec'
// 1962:      UNK_0x7202  codep:0x4c49 parp:0x7202 size:0x0820 C-string:'UNK_0x7202'
// 1963:      UNK_0x7a24  codep:0xa075 parp:0x7a24 size:0x02f2 C-string:'UNK_0x7a24'
// 1964:      UNK_0x7d18  codep:0x820e parp:0x7d18 size:0x01f7 C-string:'UNK_0x7d18'
// 1965:      UNK_0x7f11  codep:0xf07c parp:0x7f11 size:0x0006 C-string:'UNK_0x7f11'
// 1966:      UNK_0x7f19  codep:0x4449 parp:0x7f19 size:0x03f5 C-string:'UNK_0x7f19'
// 1967:      UNK_0x8310  codep:0xd14a parp:0x8310 size:0x072b C-string:'UNK_0x8310'
// 1968:      UNK_0x8a3d  codep:0x89fd parp:0x8a3d size:0x02ae C-string:'UNK_0x8a3d'
// 1969:      UNK_0x8ced  codep:0x0e50 parp:0x8ced size:0x0319 C-string:'UNK_0x8ced'
// 1970:      UNK_0x9008  codep:0x0a16 parp:0x9008 size:0x0006 C-string:'UNK_0x9008'
// 1971:      UNK_0x9010  codep:0xf90e parp:0x9010 size:0xffffffff C-string:'UNK_0x9010'
// 1972:      UNK_0x9011  codep:0x8ef9 parp:0x9011 size:0x0068 C-string:'UNK_0x9011'
// 1973:      UNK_0x907b  codep:0x125f parp:0x907b size:0x006e C-string:'UNK_0x907b'
// 1974:      UNK_0x90eb  codep:0x4590 parp:0x90eb size:0xffffffff C-string:'UNK_0x90eb'
// 1975:      UNK_0x90ec  codep:0x5745 parp:0x90ec size:0x0013 C-string:'UNK_0x90ec'
// 1976:      UNK_0x9101  codep:0xff4d parp:0x9101 size:0x01c0 C-string:'UNK_0x9101'
// 1977:      UNK_0x92c3  codep:0xc033 parp:0x92c3 size:0x0043 C-string:'UNK_0x92c3'
// 1978:      UNK_0x9308  codep:0x49b4 parp:0x9308 size:0x0017 C-string:'UNK_0x9308'
// 1979:      UNK_0x9321  codep:0x5c1e parp:0x9321 size:0x0b01 C-string:'UNK_0x9321'
// 1980:      UNK_0x9e24  codep:0x0e90 parp:0x9e24 size:0x01c3 C-string:'UNK_0x9e24'
// 1981:      UNK_0x9fe9  codep:0x903e parp:0x9fe9 size:0x0004 C-string:'UNK_0x9fe9'
// 1982:      UNK_0x9fef  codep:0x542e parp:0x9fef size:0x0211 C-string:'UNK_0x9fef'
// 1983:      UNK_0xa202  codep:0x7b0f parp:0xa202 size:0x00e6 C-string:'UNK_0xa202'
// 1984:      UNK_0xa2ea  codep:0x4aae parp:0xa2ea size:0x0603 C-string:'UNK_0xa2ea'
// 1985:      UNK_0xa8ef  codep:0x2d54 parp:0xa8ef size:0x0f1f C-string:'UNK_0xa8ef'
// 1986:      UNK_0xb810  codep:0x4685 parp:0xb810 size:0x01d7 C-string:'UNK_0xb810'
// 1987:      UNK_0xb9e9  codep:0xb922 parp:0xb9e9 size:0x0a2c C-string:'UNK_0xb9e9'
// 1988:      UNK_0xc417  codep:0xad52 parp:0xc417 size:0x0b0b C-string:'UNK_0xc417'
// 1989:      UNK_0xcf24  codep:0x0116 parp:0xcf24 size:0x0edc C-string:'UNK_0xcf24'
// 1990:      UNK_0xde02  codep:0x1b14 parp:0xde02 size:0x016b C-string:'UNK_0xde02'
// 1991:      UNK_0xdf6f  codep:0x000f parp:0xdf6f size:0x0079 C-string:'UNK_0xdf6f'
// 1992:      UNK_0xdfea  codep:0x92dd parp:0xdfea size:0x0038 C-string:'UNK_0xdfea'
// 1993:      UNK_0xe024  codep:0x1015 parp:0xe024 size:0x05fc C-string:'UNK_0xe024'
// 1994:      UNK_0xe622  codep:0x97d6 parp:0xe622 size:0x00b2 C-string:'UNK_0xe622'
// 1995:      UNK_0xe6d6  codep:0x224c parp:0xe6d6 size:0x0008 C-string:'UNK_0xe6d6'
// 1996:      UNK_0xe6e0  codep:0x224c parp:0xe6e0 size:0x0044 C-string:'UNK_0xe6e0'
// 1997:      UNK_0xe726  codep:0x224c parp:0xe726 size:0x0012 C-string:'UNK_0xe726'
// 1998:      UNK_0xe73a  codep:0x224c parp:0xe73a size:0x0012 C-string:'UNK_0xe73a'
// 1999:      UNK_0xe74e  codep:0x224c parp:0xe74e size:0x000a C-string:'UNK_0xe74e'
// 2000:      UNK_0xe75a  codep:0x224c parp:0xe75a size:0x001a C-string:'UNK_0xe75a'
// 2001:      UNK_0xe776  codep:0x7394 parp:0xe776 size:0x0023 C-string:'UNK_0xe776'
// 2002:      UNK_0xe79b  codep:0x7420 parp:0xe79b size:0x0003 C-string:'UNK_0xe79b'
// 2003:      UNK_0xe7a0  codep:0x7420 parp:0xe7a0 size:0x0003 C-string:'UNK_0xe7a0'
// 2004:      UNK_0xe7a5  codep:0x7420 parp:0xe7a5 size:0x0008 C-string:'UNK_0xe7a5'
// 2005:      UNK_0xe7af  codep:0x7420 parp:0xe7af size:0x0034 C-string:'UNK_0xe7af'
// 2006:      UNK_0xe7e5  codep:0x7420 parp:0xe7e5 size:0x0017 C-string:'UNK_0xe7e5'
// 2007:      UNK_0xe7fe  codep:0x7420 parp:0xe7fe size:0x0008 C-string:'UNK_0xe7fe'
// 2008:      UNK_0xe808  codep:0x7420 parp:0xe808 size:0x0008 C-string:'UNK_0xe808'
// 2009:      UNK_0xe812  codep:0x7420 parp:0xe812 size:0x0009 C-string:'UNK_0xe812'
// 2010:      UNK_0xe81d  codep:0x3d74 parp:0xe81d size:0x0002 C-string:'UNK_0xe81d'
// 2011:      UNK_0xe821  codep:0x7420 parp:0xe821 size:0x000b C-string:'UNK_0xe821'
// 2012:      UNK_0xe82e  codep:0x7420 parp:0xe82e size:0x0003 C-string:'UNK_0xe82e'
// 2013:      UNK_0xe833  codep:0x1d29 parp:0xe833 size:0x0009 C-string:'UNK_0xe833'
// 2014:      UNK_0xe83e  codep:0x1d29 parp:0xe83e size:0x0002 C-string:'UNK_0xe83e'
// 2015:      UNK_0xe842  codep:0x1d29 parp:0xe842 size:0x0002 C-string:'UNK_0xe842'
// 2016:      UNK_0xe846  codep:0x1d29 parp:0xe846 size:0x0004 C-string:'UNK_0xe846'
// 2017:      UNK_0xe84c  codep:0x224c parp:0xe84c size:0x000c C-string:'UNK_0xe84c'
// 2018:      UNK_0xe85a  codep:0x224c parp:0xe85a size:0x0022 C-string:'UNK_0xe85a'
// 2019:      UNK_0xe87e  codep:0x224c parp:0xe87e size:0x0006 C-string:'UNK_0xe87e'
// 2020:      UNK_0xe886  codep:0x224c parp:0xe886 size:0x001c C-string:'UNK_0xe886'
// 2021:      UNK_0xe8a4  codep:0x224c parp:0xe8a4 size:0x008a C-string:'UNK_0xe8a4'
// 2022:      UNK_0xe930  codep:0x224c parp:0xe930 size:0x0020 C-string:'UNK_0xe930'
// 2023:      UNK_0xe952  codep:0x224c parp:0xe952 size:0x001a C-string:'UNK_0xe952'
// 2024:      UNK_0xe96e  codep:0x224c parp:0xe96e size:0x001a C-string:'UNK_0xe96e'
// 2025:      UNK_0xe98a  codep:0x224c parp:0xe98a size:0x0018 C-string:'UNK_0xe98a'
// 2026:         LDAMAGE  codep:0x1d29 parp:0xe9ae size:0x001a C-string:'LDAMAGE'
// 2027:      UNK_0xe9ca  codep:0x224c parp:0xe9ca size:0x0020 C-string:'UNK_0xe9ca'
// 2028:      UNK_0xe9ec  codep:0x000a parp:0xe9ec size:0x0004 C-string:'UNK_0xe9ec'
// 2029:      UNK_0xe9f2  codep:0x224c parp:0xe9f2 size:0x000a C-string:'UNK_0xe9f2'
// 2030:      UNK_0xe9fe  codep:0x224c parp:0xe9fe size:0x000a C-string:'UNK_0xe9fe'
// 2031:         REFRESH  codep:0x224c parp:0xea14 size:0x004a C-string:'REFRESH'
// 2032:         WOUNDED  codep:0x1d29 parp:0xea6a size:0x0006 C-string:'WOUNDED'
// 2033:         #WOUNDE  codep:0x1d29 parp:0xea7c size:0x0002 C-string:'_n_WOUNDE'
// 2034:      UNK_0xea80  codep:0x224c parp:0xea80 size:0x0052 C-string:'UNK_0xea80'
// 2035:      UNK_0xead4  codep:0x224c parp:0xead4 size:0x000c C-string:'UNK_0xead4'
// 2036:      UNK_0xeae2  codep:0x224c parp:0xeae2 size:0x0033 C-string:'UNK_0xeae2'
// 2037:      UNK_0xeb17  codep:0x224c parp:0xeb17 size:0x001d C-string:'UNK_0xeb17'
// 2038:      UNK_0xeb36  codep:0x224c parp:0xeb36 size:0x0082 C-string:'UNK_0xeb36'
// 2039:         ENGINE-  codep:0xeb87 parp:0xebc4 size:0x0004 C-string:'ENGINE_minus_'
// 2040:         SENSOR-  codep:0xeb87 parp:0xebd4 size:0x0004 C-string:'SENSOR_minus_'
// 2041:         COMM-CH  codep:0xeb87 parp:0xebe4 size:0x0004 C-string:'COMM_minus_CH'
// 2042:         MISS-CH  codep:0xeb87 parp:0xebf4 size:0x0004 C-string:'MISS_minus_CH'
// 2043:         LASER-C  codep:0xeb87 parp:0xec04 size:0x0004 C-string:'LASER_minus_C'
// 2044:         SHIELD-  codep:0xeb87 parp:0xec14 size:0x0004 C-string:'SHIELD_minus_'
// 2045:      UNK_0xec1a  codep:0x224c parp:0xec1a size:0x000a C-string:'UNK_0xec1a'
// 2046:         #>?FIEL  codep:0x4b3b parp:0xec30 size:0x0024 C-string:'_n__gt__ask_FIEL'
// 2047:      UNK_0xec56  codep:0x224c parp:0xec56 size:0x0038 C-string:'UNK_0xec56'
// 2048:      UNK_0xec90  codep:0x224c parp:0xec90 size:0x0036 C-string:'UNK_0xec90'
// 2049:      UNK_0xecc8  codep:0x224c parp:0xecc8 size:0x009e C-string:'UNK_0xecc8'
// 2050:      UNK_0xed68  codep:0x224c parp:0xed68 size:0x005a C-string:'UNK_0xed68'
// 2051:      UNK_0xedc4  codep:0x224c parp:0xedc4 size:0x004b C-string:'UNK_0xedc4'
// 2052:      UNK_0xee11  codep:0x224c parp:0xee11 size:0x0054 C-string:'UNK_0xee11'
// 2053:      UNK_0xee67  codep:0x224c parp:0xee67 size:0x006c C-string:'UNK_0xee67'
// 2054:      UNK_0xeed5  codep:0x224c parp:0xeed5 size:0x0048 C-string:'UNK_0xeed5'
// 2055:      UNK_0xef1f  codep:0x224c parp:0xef1f size:0x0052 C-string:'UNK_0xef1f'
// 2056:      UNK_0xef73  codep:0x224c parp:0xef73 size:0x0056 C-string:'UNK_0xef73'
// 2057:         MDAMAGE  codep:0x1d29 parp:0xefd5 size:0x001a C-string:'MDAMAGE'
// 2058:      UNK_0xeff1  codep:0x224c parp:0xeff1 size:0x000c C-string:'UNK_0xeff1'
// 2059:      UNK_0xefff  codep:0x224c parp:0xefff size:0x0012 C-string:'UNK_0xefff'
// 2060:      UNK_0xf013  codep:0x224c parp:0xf013 size:0x0037 C-string:'UNK_0xf013'
// 2061:      UNK_0xf04c  codep:0x906d parp:0xf04c size:0x0087 C-string:'UNK_0xf04c'
// 2062:         #>DAMAG  codep:0x4b3b parp:0xf0df size:0x0024 C-string:'_n__gt_DAMAG'
// 2063:      UNK_0xf105  codep:0x224c parp:0xf105 size:0x001c C-string:'UNK_0xf105'
// 2064:      UNK_0xf123  codep:0x1690 parp:0xf123 size:0x0000 C-string:'UNK_0xf123'
// 2065:      UNK_0xf125  codep:0x224c parp:0xf125 size:0x001f C-string:'UNK_0xf125'
// 2066:      UNK_0xf146  codep:0x0a16 parp:0xf146 size:0xffffffff C-string:'UNK_0xf146'
// 2067:         DO-ADAM  codep:0x224c parp:0xf151 size:0x0048 C-string:'DO_minus_ADAM'
// 2068:      UNK_0xf19b  codep:0x224c parp:0xf19b size:0x000c C-string:'UNK_0xf19b'
// 2069:      UNK_0xf1a9  codep:0x224c parp:0xf1a9 size:0x000a C-string:'UNK_0xf1a9'
// 2070:      UNK_0xf1b5  codep:0x224c parp:0xf1b5 size:0x005a C-string:'UNK_0xf1b5'
// 2071:      UNK_0xf211  codep:0x224c parp:0xf211 size:0x0035 C-string:'UNK_0xf211'
// 2072:          #>DISP  codep:0x4b3b parp:0xf251 size:0x000c C-string:'_n__gt_DISP'
// 2073:      UNK_0xf25f  codep:0x224c parp:0xf25f size:0x0022 C-string:'UNK_0xf25f'
// 2074:      UNK_0xf283  codep:0x224c parp:0xf283 size:0x001c C-string:'UNK_0xf283'
// 2075:      UNK_0xf2a1  codep:0x0ef2 parp:0xf2a1 size:0x0046 C-string:'UNK_0xf2a1'
// 2076:            CDAM  codep:0x224c parp:0xf2f0 size:0x0024 C-string:'CDAM'
// 2077:      UNK_0xf316  codep:0x224c parp:0xf316 size:0x007d C-string:'UNK_0xf316'
// 2078:             .EX  codep:0x4b3b parp:0xf39b size:0x000c C-string:'_dot_EX'
// 2079:      UNK_0xf3a9  codep:0x224c parp:0xf3a9 size:0x008c C-string:'UNK_0xf3a9'
// 2080:      UNK_0xf437  codep:0x224c parp:0xf437 size:0x0070 C-string:'UNK_0xf437'
// 2081:      UNK_0xf4a9  codep:0x224c parp:0xf4a9 size:0x0040 C-string:'UNK_0xf4a9'
// 2082:      UNK_0xf4eb  codep:0x224c parp:0xf4eb size:0x000e C-string:'UNK_0xf4eb'
// 2083:      UNK_0xf4fb  codep:0x224c parp:0xf4fb size:0x000e C-string:'UNK_0xf4fb'
// 2084:         DO-DAMA  codep:0x224c parp:0xf515 size:0x000e C-string:'DO_minus_DAMA'
// 2085:         DOBLAST  codep:0x224c parp:0xf52f size:0x02e0 C-string:'DOBLAST'
// 2086:      UNK_0xf811  codep:0x0000 parp:0xf811 size:0x0202 C-string:'UNK_0xf811'
// 2087:      UNK_0xfa15  codep:0x0000 parp:0xfa15 size:0x000a C-string:'UNK_0xfa15'
// 2088:      UNK_0xfa21  codep:0x0000 parp:0xfa21 size:0x00c9 C-string:'UNK_0xfa21'
// 2089:      UNK_0xfaec  codep:0x0000 parp:0xfaec size:0xfffffa74 C-string:'UNK_0xfaec'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe833[9] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20}; // UNK_0xe833
unsigned char UNK_0xe83e[2] = {0x00, 0x00}; // UNK_0xe83e
unsigned char UNK_0xe842[2] = {0x3a, 0x20}; // UNK_0xe842
unsigned char UNK_0xe846[4] = {0x56, 0x3a, 0x20, 0x16}; // UNK_0xe846
unsigned char LDAMAGE[26] = {0x00, 0x00, 0x5a, 0x00, 0xd2, 0x00, 0x68, 0x01, 0xfe, 0x01, 0x94, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xbc, 0x02, 0xe8, 0x03, 0x4c, 0x04, 0xb0, 0x04}; // LDAMAGE
unsigned char WOUNDED[6] = {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54}; // WOUNDED
unsigned char _n_WOUNDE[2] = {0x00, 0x00}; // #WOUNDE
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
  _at_INST_minus_S(); // @INST-S
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

// 0xe72c: db 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x90 0x16 'L". ] d  K  '

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
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_minus_Y(); // INST-Y
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
// 0xe776: db 0x19 0x10 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x12 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x13 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x15 0x07 0x24 0x5d 0x6b 0x20 0x74 0x19 0x0c 0x01 '   $]k s   $]k s   $]k s   $]k t   '

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
// 0xe7a5: db 0x19 0x0b 0x01 0x20 0x74 0x19 0x12 0x07 '    t   '

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
// 0xe812: db 0x14 0x43 0x02 0x20 0x74 0x3d 0x14 0x01 0x20 ' C  t=   '

// ================================================
// 0xe81b: WORD 'UNK_0xe81d' codep=0x3d74 parp=0xe81d
// ================================================
// 0xe81d: db 0x1b 0x01 '  '

// ================================================
// 0xe81f: WORD 'UNK_0xe821' codep=0x7420 parp=0xe821
// ================================================
// 0xe821: db 0x10 0x1f 0x01 0x94 0x73 0x10 0x13 0x01 0x14 0xc8 0x6a '    s     j'

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
  _at_INST_minus_C(); // @INST-C
  Push(0x0019);
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x2003(); // UNK_0x2003
  _dot_TTY(); // .TTY
  OVER(); // OVER
  _dot_(); // .
  UNK_0xe7a0(); // UNK_0xe7a0
  _ask_(); // ?
  UNK_0xe79b(); // UNK_0xe79b
  _ask_(); // ?
  Push(pp_A_minus_STREN); // A-STREN
  _ask_(); // ?

  label1:
  _gt_R(); // >R
  R_at_(); // R@
  IFLD_at_(); // IFLD@
  SWAP(); // SWAP
  _minus_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
  IFLD_ex_(); // IFLD!
}

// 0xe8ea: db 0x4c 0x22 0xb4 0x0d 0xa2 0x0e 0x0d 0x7d 0x41 0x0e 0x5d 0x17 0x80 0x00 0xf5 0x12 0xb4 0x0d 0xf2 0x0e 0x92 0x0f 0x20 0x0f 0x89 0x11 0x90 0x0e 0x3e 0x13 0x90 0x0e 0x27 0x7d 0x90 0x16 0x4c 0x22 0xcf 0x64 0x2f 0x7a 0xb8 0x3b 0x3b 0x59 0x23 0x6d 0x2e 0x0f 0x15 0xe8 0x41 0x0e 0x92 0x0c 0xb3 0x0e 0x72 0x0f 0xf2 0x0e 0x0a 0x6d 0xdf 0x79 0x90 0x16 'L"     }A ]                 >   '}  L" d/z ;;Y#m.   A     r    m y  '

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
  _minus_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
  IFLD_at_(); // IFLD@
  Push(Pop()*2); // 2*
  Push(pp_LDAMAGE); // LDAMAGE
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x000a);

// ================================================
// 0xe9ea: WORD 'UNK_0xe9ec' codep=0x000a parp=0xe9ec
// ================================================
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

void REFRESH() // REFRESH
{
  UNK_0xe98a(); // UNK_0xe98a
  MODULE(); // MODULE
}

// 0xea1a: db 0x29 0x1d 0x3a 0x20 0x4c 0x22 0x2c 0xe7 0x5d 0x17 0x46 0x00 0x46 0x12 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x1a 0xea 0xae 0x0b 0xe7 0x0f 0xc4 0x4b 0x24 0xe8 0x92 0x0c 0x4c 0x0f 0x5d 0x17 0x0a 0x00 0x4c 0x0f 0x8f 0x3b 0x89 0x11 0x90 0x16 0x4c 0x22 0x34 0x75 0x87 0x3b 0x97 0x3b 0x25 0x40 0xfa 0x15 0x08 0x00 0x2e 0x0f 0xd2 0x61 0x23 0x6d 0x90 0x16 ') : L", ] F F   L".        K$   L ]   L  ;    L"4u ; ;%@    .  a#m  '

// ================================================
// 0xea5e: WORD 'WOUNDED' codep=0x1d29 parp=0xea6a
// ================================================
// 0xea6a: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 ' ALLOT'

// ================================================
// 0xea70: WORD '#WOUNDE' codep=0x1d29 parp=0xea7c
// ================================================
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

// 0xea90: db 0x4c 0x22 0x68 0xea 0x41 0x0e 0x97 0x3b 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x50 0x0e 0x92 0x0c 0x7f 0x0e 0x5f 0x12 0xfa 0x15 0x0a 0x00 0x32 0x0e 0x4a 0x17 0x60 0x16 0x1c 0x00 0x50 0x0e 0x92 0x0c 0x5d 0x17 0xff 0x00 0x5f 0x12 0xfa 0x15 0x0e 0x00 0x50 0x0e 0x0a 0x6d 0x2e 0x0f 0x7a 0xea 0xfd 0x4c 0x4a 0x17 0xd0 0x15 0xd0 0xff 0x90 0x16 'L"h A  ;r     P    _     2 J `   P   ]   _     P  m. z  LJ       '

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

// 0xeaf2: db 0x4c 0x22 0x07 0x3f 0x12 0x2a 0x2a 0x20 0x20 0x47 0x41 0x4d 0x45 0x20 0x20 0x4f 0x56 0x45 0x52 0x20 0x20 0x2a 0x2a 0xf1 0x9f 0xdd 0xa3 0x32 0x0e 0x97 0x49 0x3f 0x90 0x90 0x16 'L" ? **  GAME  OVER  **    2  I?   '

// ================================================
// 0xeb15: WORD 'UNK_0xeb17' codep=0x224c parp=0xeb17
// ================================================

void UNK_0xeb17() // UNK_0xeb17
{
  UNK_0xeae2(); // UNK_0xeae2
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x2114(); // UNK_0x2114
  UNK_0x4823(); // UNK_0x4823
  UNK_0x4c57(); // UNK_0x4c57
  UNK_0x204e(); // UNK_0x204e
  UNK_0x4546(); // UNK_0x4546
  UNK_0x5455(); // UNK_0x5455
  Push(pp_FONT_n_); // FONT#
  UNK_0x455b(); // UNK_0x455b
  UNK_0x2146(); // UNK_0x2146
  UNK_0xf123(); // UNK_0xf123
  UNK_0xf2a1(); // UNK_0xf2a1
  UNK_0x90ec(); // UNK_0x90ec
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xeb34: WORD 'UNK_0xeb36' codep=0x224c parp=0xeb36
// ================================================
  UNK_0xe024(); // UNK_0xe024

void UNK_0xeb36() // UNK_0xeb36
{
  UNK_0xeae2(); // UNK_0xeae2
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x2114(); // UNK_0x2114
  UNK_0x4323(); // UNK_0x4323
  UNK_0x4554(); // UNK_0x4554
  UNK_0x2059(); // UNK_0x2059
  UNK_0x4422(); // UNK_0x4422
  DOS_minus_DTA(); // DOS-DTA
  UNK_0x4147(); // UNK_0x4147
  UNK_0x4555(); // UNK_0x4555
  UNK_0x2146(); // UNK_0x2146
  UNK_0xf123(); // UNK_0xf123
  UNK_0xf2a1(); // UNK_0xf2a1
  UNK_0x90ec(); // UNK_0x90ec
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0xcf24(); // UNK_0xcf24
  UNK_0x2f66(); // UNK_0x2f66
  UNK_0x5d7c(); // UNK_0x5d7c
  UMIN(); // UMIN
  UNK_0x4602(); // UNK_0x4602
  UNK_0x5d77(); // UNK_0x5d77
  UNK_0x1819(); // UNK_0x1819
  UNK_0x4602(); // UNK_0x4602
  UNK_0x3e77(); // UNK_0x3e77
  UNK_0x5d15(); // UNK_0x5d15
  UNK_0x1319(); // UNK_0x1319
  UNK_0x4602(); // UNK_0x4602
  UNK_0x3e77(); // UNK_0x3e77
  UNK_0xfa15(); // UNK_0xfa15
  UNK_0x0817(); // UNK_0x0817
  UNK_0x2002(); // UNK_0x2002
  UNK_0x1a11(); // UNK_0x1a11
  UNK_0x0aea(); // UNK_0x0aea
  UNK_0xdf6f(); // UNK_0xdf6f
  UNK_0x907b(); // UNK_0x907b
  UNK_0x4c18(); // UNK_0x4c18
  UNK_0x4f24(); // UNK_0x4f24
  UNK_0x9308(); // UNK_0x9308
  UNK_0x9321(); // UNK_0x9321
  UNK_0xfa21(); // UNK_0xfa21
  UNK_0xe81d(); // UNK_0xe81d
  UNK_0x2ac1(); // UNK_0x2ac1
  _2_at_(); // 2@
  IFLD_at_(); // IFLD@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  UNK_0xe726(); // UNK_0xe726
  _gt_R(); // >R
  IFLD_at_(); // IFLD@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xe726(); // UNK_0xe726
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
}

// 0xeba6: db 0x4c 0x22 0x5d 0x17 0xb8 0xe7 0x92 0x0c 0x5d 0x17 0x7f 0x00 0xf5 0x12 0x24 0xe7 0x90 0x16 'L"]     ]    $   '

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
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4b08(); // UNK_0x4b08
  UNK_0x4c4b(); // UNK_0x4c4b
  UNK_0x454e(); // UNK_0x454e
  UNK_0x6046(); // UNK_0x6046
  UNK_0x7d18(); // UNK_0x7d18
  UNK_0xa202(); // UNK_0xa202

  label1:
  R_at_(); // R@
  Push(1); // 1
  Push(0x0015);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x430d(); // UNK_0x430d
  UNK_0x4954(); // UNK_0x4954
  UNK_0x4956(); // UNK_0x4956
  UNK_0x4145(); // UNK_0x4145
  UNK_0x4c4e(); // UNK_0x4c4e
  UNK_0x205b(); // UNK_0x205b
  goto label5;

  label2:
  R_at_(); // R@
  Push(0x0015);
  Push(0x0033);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x480b(); // UNK_0x480b
  UNK_0x4147(); // UNK_0x4147
  UNK_0x4958(); // UNK_0x4958
  UNK_0x494e(); // UNK_0x494e
  UNK_0x205b(); // UNK_0x205b
  goto label5;

  label3:
  R_at_(); // R@
  Push(0x0033);
  Push(0x0051);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label4;
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4d0d(); // UNK_0x4d0d
  UNK_0x4451(); // UNK_0x4451
  UNK_0x5247(); // UNK_0x5247
  UNK_0x5443(); // UNK_0x5443
  UNK_0x4c47(); // UNK_0x4c47
  UNK_0x205b(); // UNK_0x205b
  goto label5;

  label4:
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x530b(); // UNK_0x530b
  UNK_0x494e(); // UNK_0x494e
  UNK_0x4849(); // UNK_0x4849
  UNK_0x4c56(); // UNK_0x4c56
  UNK_0x205b(); // UNK_0x205b

  label5:
  TYPE(); // TYPE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x570a(); // UNK_0x570a
  UNK_0x5551(); // UNK_0x5551
  _4TH_gt_DOS(); // 4TH>DOS
  UNK_0x4447(); // UNK_0x4447
  UNK_0xe622(); // UNK_0xe622
  UNK_0x9008(); // UNK_0x9008
  UNK_0x3210(); // UNK_0x3210
  UNK_0x9010(); // UNK_0x9010
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xed66: WORD 'UNK_0xed68' codep=0x224c parp=0xed68
// ================================================
  UNK_0x7a24(); // UNK_0x7a24

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
  _minus_TRAILING(); // -TRAILING
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

// 0xedb9: db 0x29 0x1d 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f ') :  ALLO'

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
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4116(); // UNK_0x4116
  UNK_0x494e(); // UNK_0x494e
  UNK_0x4e47(); // UNK_0x4e47
  _star_ASSIGN(); // *ASSIGN
  UNK_0x494a(); // UNK_0x494a
  UNK_0x2052(); // UNK_0x2052
  UNK_0x4546(); // UNK_0x4546
  UNK_0x5455(); // UNK_0x5455
  Push(pp_FONT_n_); // FONT#
  UNK_0x455b(); // UNK_0x455b
  UNK_0xf146(); // UNK_0xf146
  UNK_0x20a1(); // UNK_0x20a1
  _ex_IB(); // !IB
  UNK_0x0ae9(); // UNK_0x0ae9
  UNK_0x486f(); // UNK_0x486f
  UNK_0x53ec(); // UNK_0x53ec
  UNK_0x8ced(); // UNK_0x8ced
  UNK_0xb9e9(); // UNK_0xb9e9
  UNK_0x9fef(); // UNK_0x9fef
  UNK_0x8a3d(); // UNK_0x8a3d
  UNK_0x206f(); // UNK_0x206f
  UNK_0xf811(); // UNK_0xf811
  CLASS_gt_B(); // CLASS>B
  UNK_0xa8ef(); // UNK_0xa8ef
  UNK_0x9fe9(); // UNK_0x9fe9
  UNK_0x8a3d(); // UNK_0x8a3d
  UNK_0x0e6f(); // UNK_0x0e6f
  UNK_0x90eb(); // UNK_0x90eb
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xee0f: WORD 'UNK_0xee11' codep=0x224c parp=0xee11
// ================================================
  UNK_0x1a24(); // UNK_0x1a24

void UNK_0xee11() // UNK_0xee11
{
  UNK_0xe9ec(); // UNK_0xe9ec
  IFIND(); // IFIND
  UNK_0x42ec(); // UNK_0x42ec
  UNK_0x41c3(); // UNK_0x41c3
  UNK_0x5d10(); // UNK_0x5d10
  UMIN(); // UMIN
  UNK_0x7202(); // UNK_0x7202
  UNK_0xf211(); // UNK_0xf211
  UNK_0xb810(); // UNK_0xb810
  UNK_0x5017(); // UNK_0x5017
  UNK_0x8310(); // UNK_0x8310
  UNK_0xf04c(); // UNK_0xf04c
  UNK_0x3e0f(); // UNK_0x3e0f
  UNK_0xfa15(); // UNK_0xfa15
  UNK_0x2a17(); // UNK_0x2a17
  UNK_0x1e02(); // UNK_0x1e02
  UNK_0xfaec(); // UNK_0xfaec
  UNK_0x1e17(); // UNK_0x1e17
  UNK_0x1f02(); // UNK_0x1f02
  UNK_0x2a7c(); // UNK_0x2a7c
  UNK_0x5dec(); // UNK_0x5dec
  UNK_0x2119(); // UNK_0x2119
  UNK_0xa2ea(); // UNK_0xa2ea
  UNK_0xdfea(); // UNK_0xdfea
  UNK_0x507b(); // UNK_0x507b
  UNK_0x4210(); // UNK_0x4210
  UNK_0x92c3(); // UNK_0x92c3
  UNK_0x7f11(); // UNK_0x7f11
  UNK_0x4c3d(); // UNK_0x4c3d
  UNK_0x9011(); // UNK_0x9011
  UNK_0x60ec(); // UNK_0x60ec
  UNK_0x0418(); // UNK_0x0418
  UNK_0xde02(); // UNK_0xde02
  UNK_0x600f(); // UNK_0x600f
  UNK_0x0618(); // UNK_0x0618
  UNK_0xde02(); // UNK_0xde02
  UNK_0x4a0f(); // UNK_0x4a0f
  UNK_0x7f19(); // UNK_0x7f19
  UNK_0x5c3d(); // UNK_0x5c3d
  UNK_0xc417(); // UNK_0xc417
  UNK_0x9101(); // UNK_0x9101
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xee65: WORD 'UNK_0xee67' codep=0x224c parp=0xee67
// ================================================
  UNK_0x9e24(); // UNK_0x9e24

void UNK_0xee67() // UNK_0xee67
{
  UNK_0xe7a0(); // UNK_0xe7a0
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(cc__ask_A_minus_SHIE); // ?A-SHIE
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
  _minus_(); // -
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
  _at_INST_minus_C(); // @INST-C
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
  _ask_ICONS_minus_(); // ?ICONS-
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
  _at_INST_minus_C(); // @INST-C
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
  _minus_(); // -
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
  _minus_(); // -
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

// 0xf03b: db 0x4c 0x22 0x01 0xe8 0x92 0x0c 0x5d 0x17 0xf7 0x00 0xf5 0x12 0x01 0xe8 0x0a 'L"    ]        '

// ================================================
// 0xf04a: WORD 'UNK_0xf04c' codep=0x906d parp=0xf04c
// ================================================
// 0xf04c: db 0x16 0x4c 0x22 0x5d 0x17 0xb8 0xe7 0xea 0xe8 0x90 0x16 0x4c 0x22 0x5d 0x17 0xc2 0xe7 0xea 0xe8 0xc2 0xeb 0x89 0x12 0xfa 0x15 0x2c 0x00 0x2f 0x55 0xae 0x0b 0x89 0x12 0xfa 0x15 0x0c 0x00 0x8f 0x3b 0x5d 0x17 0x7c 0xb7 0xd9 0x84 0x32 0x0e 0x5d ' L"]       L"]           , /U         ;] |   2 ]'
// 0xf07c: pop    ss
// 0xf07d: mov    di,7D0D
// 0xf081: pop    bp
// 0xf082: pop    ss
// 0xf083: add    byte ptr [bx+si],3E
// 0xf086: adc    bx,[di+17]
// 0xf089: mov    di,7D27
// 0xf08d: das    
// 0xf08e: push   bp
// 0xf08f: push   di
// 0xf090: db     6D
// 0xf091: nop    
// 0xf092: push   ss
// 0xf093: dec    sp
// 0xf094: and    bl,[di+17]
// 0xf097: int    3
// 0xf098: out    EA,ax
// 0xf09a: call   072D
// 0xf09d: dec    sp
// 0xf09e: and    bl,[di+17]
// 0xf0a1: db     D6
// 0xf0a2: out    EA,ax
// 0xf0a4: call   0737
// 0xf0a7: dec    sp
// 0xf0a8: and    bl,[di+17]
// 0xf0ab: jmp    90E8:EAE7
// 0xf0b0: push   ss
// 0xf0b1: dec    sp
// 0xf0b2: and    bl,[di+17]
// 0xf0b5: loopne F09E
// 0xf0b7: jmp    89EC:12E8
// 0xf0bc: adc    bh,dl
// 0xf0be: adc    ax,0008
// 0xf0c1: pop    bp
// 0xf0c2: pop    ss
// 0xf0c3: ss:    
// 0xf0c4: mov    cl,84
// 0xf0c7: nop    
// 0xf0c8: push   ss
// 0xf0c9: dec    sp
// 0xf0ca: and    bl,[di+17]
// 0xf0cd: hlt    
// 0xf0ce: out    EA,ax
// 0xf0d0: call   0763

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
  _minus_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>

// ================================================
// 0xf121: WORD 'UNK_0xf123' codep=0x1690 parp=0xf123
// ================================================
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
// 0xf144: WORD 'UNK_0xf146' codep=0x0a16 parp=0xf146
// ================================================

// ================================================
// 0xf145: WORD 'DO-ADAM' codep=0x224c parp=0xf151
// ================================================

void DO_minus_ADAM() // DO-ADAM
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
  DO_minus_ADAM(); // DO-ADAM
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
  _minus_(); // -
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

// 0xf1fb: db 0x4c 0x22 0x07 0x3f 0x0b 0x50 0x4c 0x41 0x53 0x4d 0x41 0x20 0x42 0x4f 0x4c 0x54 0xf1 0x9f 0x90 0x16 'L" ? PLASMA BOLT    '

// ================================================
// 0xf20f: WORD 'UNK_0xf211' codep=0x224c parp=0xf211
// ================================================

void UNK_0xf211() // UNK_0xf211
{
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x450d(); // UNK_0x450d
  UNK_0x4550(); // UNK_0x4550
  UNK_0x4754(); // UNK_0x4754
  UNK_0x205b(); // UNK_0x205b
  UNK_0x4f4e(); // UNK_0x4f4e
  UNK_0x5355(); // UNK_0x5355
  _dot_TTY(); // .TTY
}

// 0xf22f: db 0x4c 0x22 0x07 0x3f 0x0e 0x4d 0x49 0x53 0x53 0x49 0x4c 0x45 0x20 0x43 0x4c 0x41 0x53 0x53 0x20 0xf1 0x9f 0x90 0x16 'L" ? MISSILE CLASS     '

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
  LT_minus_BLUE(); // LT-BLUE
  UNK_0xf1b5(); // UNK_0xf1b5
  UNK_0xe87e(); // UNK_0xe87e
  UNK_0xeff1(); // UNK_0xeff1
  _gt_R(); // >R
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_minus_(); // ?ICONS-
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  R_at_(); // R@

// ================================================
// 0xf29f: WORD 'UNK_0xf2a1' codep=0x0ef2 parp=0xf2a1
// ================================================
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
  _at_INST_minus_C(); // @INST-C
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
  Push(pp__minus_END); // -END
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
  Push(pp__minus_END); // -END
  Push(Read16(Pop())); // @
  R_at_(); // R@
  Push(pp__minus_END); // -END
  _ex_(); // !
  UNK_0xf3a9(); // UNK_0xf3a9
  Push(pp__minus_END); // -END
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
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  R_at_(); // R@
  Push(0x000a);
  _slash_(); // /
  _minus_(); // -
  Push(0); // 0
  MAX(); // MAX
  INST_minus_QT(); // INST-QT
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
  DO_minus_ADAM(); // DO-ADAM
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

void DO_minus_DAMA() // DO-DAMA
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

void DOBLAST() // DOBLAST
{
  if (Pop() == 0) goto label1;
  DO_minus_ADAM(); // DO-ADAM
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
  