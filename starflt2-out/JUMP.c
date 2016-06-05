// ====== OVERLAY 'JUMP' ======

#include"interface.h"

// store offset = 0xed30
// overlay size   = 0x0830

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:         FILE-TY  codep:0x71d1 parp:0x71fb size:0x0001 C-string:'FILE_minus_TY'
// 1870:         FILE-ST  codep:0x71d1 parp:0x7208 size:0xfffffff8 C-string:'FILE_minus_ST'
// 1871:      UNK_0x7202  codep:0x4c49 parp:0x7202 size:0x0001 C-string:'UNK_0x7202'
// 1872:      UNK_0x7205  codep:0x532d parp:0x7205 size:0xffffffff C-string:'UNK_0x7205'
// 1873:      UNK_0x7206  codep:0xd453 parp:0x7206 size:0x0003 C-string:'UNK_0x7206'
// 1874:         FILE-EN  codep:0x71d1 parp:0x7215 size:0xfffffffa C-string:'FILE_minus_EN'
// 1875:      UNK_0x7211  codep:0x2d45 parp:0x7211 size:0x0001 C-string:'UNK_0x7211'
// 1876:      UNK_0x7214  codep:0xd1ce parp:0x7214 size:0x0002 C-string:'UNK_0x7214'
// 1877:         FILE-#R  codep:0x71d1 parp:0x7222 size:0x0001 C-string:'FILE_minus__n_R'
// 1878:         FILE-RL  codep:0x71d1 parp:0x722f size:0xffffffff C-string:'FILE_minus_RL'
// 1879:      UNK_0x7230  codep:0x1371 parp:0x7230 size:0x0000 C-string:'UNK_0x7230'
// 1880:         FILE-SL  codep:0x71d1 parp:0x723c size:0xffffffff C-string:'FILE_minus_SL'
// 1881:      UNK_0x723d  codep:0x1471 parp:0x723d size:0x001c C-string:'UNK_0x723d'
// 1882:           FILE:  codep:0x224c parp:0x7263 size:0x0011 C-string:'FILE_c_'
// 1883:      UNK_0x7276  codep:0xf266 parp:0x7276 size:0x0049 C-string:'UNK_0x7276'
// 1884:           >FILE  codep:0x224c parp:0x72c9 size:0x0010 C-string:'_gt_FILE'
// 1885:           FILE<  codep:0x224c parp:0x72e3 size:0x0028 C-string:'FILE_st_'
// 1886:      UNK_0x730d  codep:0x4ce9 parp:0x730d size:0x002c C-string:'UNK_0x730d'
// 1887:         @RECORD  codep:0x224c parp:0x7345 size:0x001e C-string:'_at_RECORD'
// 1888:      UNK_0x7365  codep:0x0bae parp:0x7365 size:0x0002 C-string:'UNK_0x7365'
// 1889:          AFIELD  codep:0x224c parp:0x7372 size:0x002d C-string:'AFIELD'
// 1890:      UNK_0x73a1  codep:0x0bae parp:0x73a1 size:0x0066 C-string:'UNK_0x73a1'
// 1891:          IFIELD  codep:0x224c parp:0x7412 size:0xfffffff8 C-string:'IFIELD'
// 1892:      UNK_0x740c  codep:0x4649 parp:0x740c size:0x004c C-string:'UNK_0x740c'
// 1893:         INST-SI  codep:0x7420 parp:0x7464 size:0x0003 C-string:'INST_minus_SI'
// 1894:         INST-PR  codep:0x7420 parp:0x7473 size:0x0003 C-string:'INST_minus_PR'
// 1895:         INST-OF  codep:0x7420 parp:0x7482 size:0x0003 C-string:'INST_minus_OF'
// 1896:         INST-CL  codep:0x7420 parp:0x7491 size:0x0003 C-string:'INST_minus_CL'
// 1897:         INST-SP  codep:0x7420 parp:0x74a0 size:0x0003 C-string:'INST_minus_SP'
// 1898:         INST-QT  codep:0x7420 parp:0x74af size:0x0003 C-string:'INST_minus_QT'
// 1899:          INST-X  codep:0x7420 parp:0x74bd size:0x0003 C-string:'INST_minus_X'
// 1900:          INST-Y  codep:0x7420 parp:0x74cb size:0x0023 C-string:'INST_minus_Y'
// 1901:         !INST-S  codep:0x224c parp:0x74fa size:0x001e C-string:'_ex_INST_minus_S'
// 1902:         @INST-C  codep:0x224c parp:0x7524 size:0x0006 C-string:'_at_INST_minus_C'
// 1903:         @INST-S  codep:0x224c parp:0x7536 size:0x0006 C-string:'_at_INST_minus_S'
// 1904:         =SPECIE  codep:0x224c parp:0x7548 size:0x0006 C-string:'_eq_SPECIE'
// 1905:              >C  codep:0x7555 parp:0x7555 size:0x0014 C-string:'_gt_C'
// 1906:              C>  codep:0x7570 parp:0x7570 size:0x0016 C-string:'C_gt_'
// 1907:              CI  codep:0x758d parp:0x758d size:0x0012 C-string:'CI'
// 1908:           CDROP  codep:0x224c parp:0x75a9 size:0x0006 C-string:'CDROP'
// 1909:             CI'  codep:0x224c parp:0x75b7 size:0x000a C-string:'CI_i_'
// 1910:              CJ  codep:0x224c parp:0x75c8 size:0x000a C-string:'CJ'
// 1911:           COVER  codep:0x224c parp:0x75dc size:0x0006 C-string:'COVER'
// 1912:          CDEPTH  codep:0x75ed parp:0x75ed size:0x0012 C-string:'CDEPTH'
// 1913:           ?NULL  codep:0x224c parp:0x7609 size:0x0006 C-string:'_ask_NULL'
// 1914:          ?-NULL  codep:0x224c parp:0x761a size:0x0006 C-string:'_ask__minus_NULL'
// 1915:          ?CHILD  codep:0x224c parp:0x762b size:0x0003 C-string:'_ask_CHILD'
// 1916:      UNK_0x7630  codep:0x073f parp:0x7630 size:0x000d C-string:'UNK_0x7630'
// 1917:          !IADDR  codep:0x224c parp:0x7648 size:0x0046 C-string:'_ex_IADDR'
// 1918:         PRIORIT  codep:0x769a parp:0x769a size:0x0094 C-string:'PRIORIT'
// 1919:      UNK_0x7730  codep:0x2ecb parp:0x7730 size:0x0031 C-string:'UNK_0x7730'
// 1920:      UNK_0x7763  codep:0x5f0e parp:0x7763 size:0x009d C-string:'UNK_0x7763'
// 1921:      UNK_0x7802  codep:0x0f92 parp:0x7802 size:0x00ac C-string:'UNK_0x7802'
// 1922:            1BTN  codep:0x7394 parp:0x78b7 size:0x0006 C-string:'_1BTN'
// 1923:         AFIELD:  codep:0x224c parp:0x78c9 size:0x0028 C-string:'AFIELD_c_'
// 1924:         IFIELD:  codep:0x224c parp:0x78fd size:0x0014 C-string:'IFIELD_c_'
// 1925:            #BTN  codep:0x7394 parp:0x791a size:0x007a C-string:'_n_BTN'
// 1926:      UNK_0x7996  codep:0x1690 parp:0x7996 size:0x0000 C-string:'UNK_0x7996'
// 1927:         SET-CUR  codep:0x224c parp:0x79a2 size:0x0034 C-string:'SET_minus_CUR'
// 1928:          ICLOSE  codep:0x224c parp:0x79e1 size:0x0020 C-string:'ICLOSE'
// 1929:          *CLOSE  codep:0x224c parp:0x7a0c size:0x000c C-string:'_star_CLOSE'
// 1930:            >C+S  codep:0x224c parp:0x7a21 size:0x0001 C-string:'_gt_C_plus_S'
// 1931:      UNK_0x7a24  codep:0xa075 parp:0x7a24 size:0x0003 C-string:'UNK_0x7a24'
// 1932:           @>C+S  codep:0x224c parp:0x7a31 size:0x0006 C-string:'_at__gt_C_plus_S'
// 1933:           IOPEN  codep:0x224c parp:0x7a41 size:0x00bf C-string:'IOPEN'
// 1934:      UNK_0x7b02  codep:0x4c43 parp:0x7b02 size:0x034a C-string:'UNK_0x7b02'
// 1935:      UNK_0x7e4e  codep:0x224c parp:0x7e4e size:0x00c0 C-string:'UNK_0x7e4e'
// 1936:      UNK_0x7f10  codep:0x7c2d parp:0x7f10 size:0x0012 C-string:'UNK_0x7f10'
// 1937:      UNK_0x7f24  codep:0x7f0e parp:0x7f24 size:0x00cc C-string:'UNK_0x7f24'
// 1938:      UNK_0x7ff2  codep:0x907c parp:0x7ff2 size:0x04e7 C-string:'UNK_0x7ff2'
// 1939:      UNK_0x84db  codep:0x224c parp:0x84db size:0x003c C-string:'UNK_0x84db'
// 1940:      UNK_0x8519  codep:0x8484 parp:0x8519 size:0x0184 C-string:'UNK_0x8519'
// 1941:      UNK_0x869f  codep:0x224c parp:0x869f size:0x0151 C-string:'UNK_0x869f'
// 1942:      UNK_0x87f2  codep:0x8b16 parp:0x87f2 size:0x010e C-string:'UNK_0x87f2'
// 1943:      UNK_0x8902  codep:0x86f8 parp:0x8902 size:0x017c C-string:'UNK_0x8902'
// 1944:      UNK_0x8a80  codep:0x224c parp:0x8a80 size:0x02c5 C-string:'UNK_0x8a80'
// 1945:      UNK_0x8d47  codep:0x224c parp:0x8d47 size:0x02a9 C-string:'UNK_0x8d47'
// 1946:      UNK_0x8ff2  codep:0xfa12 parp:0x8ff2 size:0x0019 C-string:'UNK_0x8ff2'
// 1947:      UNK_0x900d  codep:0x0bae parp:0x900d size:0x0001 C-string:'UNK_0x900d'
// 1948:      UNK_0x9010  codep:0xf90e parp:0x9010 size:0xffffffff C-string:'UNK_0x9010'
// 1949:      UNK_0x9011  codep:0x8ef9 parp:0x9011 size:0x0002 C-string:'UNK_0x9011'
// 1950:      UNK_0x9015  codep:0x8d45 parp:0x9015 size:0x0058 C-string:'UNK_0x9015'
// 1951:      UNK_0x906f  codep:0x5445 parp:0x906f size:0x0006 C-string:'UNK_0x906f'
// 1952:      UNK_0x9077  codep:0x85ab parp:0x9077 size:0x0016 C-string:'UNK_0x9077'
// 1953:      UNK_0x908f  codep:0x0f72 parp:0x908f size:0x0000 C-string:'UNK_0x908f'
// 1954:      UNK_0x9091  codep:0x175d parp:0x9091 size:0x000e C-string:'UNK_0x9091'
// 1955:      UNK_0x90a1  codep:0x9047 parp:0x90a1 size:0x004e C-string:'UNK_0x90a1'
// 1956:      UNK_0x90f1  codep:0x9086 parp:0x90f1 size:0xffffffff C-string:'UNK_0x90f1'
// 1957:      UNK_0x90f2  codep:0x1690 parp:0x90f2 size:0xffffffff C-string:'UNK_0x90f2'
// 1958:      UNK_0x90f3  codep:0x3b16 parp:0x90f3 size:0x000c C-string:'UNK_0x90f3'
// 1959:      UNK_0x9101  codep:0xff4d parp:0x9101 size:0x010a C-string:'UNK_0x9101'
// 1960:      UNK_0x920d  codep:0x9138 parp:0x920d size:0x0000 C-string:'UNK_0x920d'
// 1961:      UNK_0x920f  codep:0x0ef2 parp:0x920f size:0xffffffff C-string:'UNK_0x920f'
// 1962:      UNK_0x9210  codep:0xe70e parp:0x9210 size:0xffffffff C-string:'UNK_0x9210'
// 1963:      UNK_0x9211  codep:0x0fe7 parp:0x9211 size:0x0577 C-string:'UNK_0x9211'
// 1964:      UNK_0x978a  codep:0x795c parp:0x978a size:0x0066 C-string:'UNK_0x978a'
// 1965:      UNK_0x97f2  codep:0x0bae parp:0x97f2 size:0x0289 C-string:'UNK_0x97f2'
// 1966:      UNK_0x9a7d  codep:0x224c parp:0x9a7d size:0x0128 C-string:'UNK_0x9a7d'
// 1967:      UNK_0x9ba7  codep:0x224c parp:0x9ba7 size:0x013b C-string:'UNK_0x9ba7'
// 1968:      UNK_0x9ce4  codep:0x224c parp:0x9ce4 size:0x003e C-string:'UNK_0x9ce4'
// 1969:      UNK_0x9d24  codep:0x224c parp:0x9d24 size:0x002c C-string:'UNK_0x9d24'
// 1970:      UNK_0x9d52  codep:0xf83b parp:0x9d52 size:0x009c C-string:'UNK_0x9d52'
// 1971:      UNK_0x9df0  codep:0x224c parp:0x9df0 size:0x0010 C-string:'UNK_0x9df0'
// 1972:      UNK_0x9e02  codep:0x224c parp:0x9e02 size:0x01d0 C-string:'UNK_0x9e02'
// 1973:      UNK_0x9fd4  codep:0x224c parp:0x9fd4 size:0x001c C-string:'UNK_0x9fd4'
// 1974:      UNK_0x9ff2  codep:0x4cd9 parp:0x9ff2 size:0xffffffff C-string:'UNK_0x9ff2'
// 1975:      UNK_0x9ff3  codep:0x224c parp:0x9ff3 size:0x0229 C-string:'UNK_0x9ff3'
// 1976:      UNK_0xa21e  codep:0x224c parp:0xa21e size:0x00c8 C-string:'UNK_0xa21e'
// 1977:      UNK_0xa2e8  codep:0x224c parp:0xa2e8 size:0x00ae C-string:'UNK_0xa2e8'
// 1978:      UNK_0xa398  codep:0x224c parp:0xa398 size:0x02c8 C-string:'UNK_0xa398'
// 1979:      UNK_0xa662  codep:0x224c parp:0xa662 size:0x00ad C-string:'UNK_0xa662'
// 1980:      UNK_0xa711  codep:0x0f16 parp:0xa711 size:0x0009 C-string:'UNK_0xa711'
// 1981:      UNK_0xa71c  codep:0x224c parp:0xa71c size:0x0006 C-string:'UNK_0xa71c'
// 1982:      UNK_0xa724  codep:0x6d16 parp:0xa724 size:0x0177 C-string:'UNK_0xa724'
// 1983:      UNK_0xa89d  codep:0x224c parp:0xa89d size:0x0463 C-string:'UNK_0xa89d'
// 1984:      UNK_0xad02  codep:0x2415 parp:0xad02 size:0x00fe C-string:'UNK_0xad02'
// 1985:      UNK_0xae02  codep:0x21af parp:0xae02 size:0x000d C-string:'UNK_0xae02'
// 1986:      UNK_0xae11  codep:0xfa13 parp:0xae11 size:0x002a C-string:'UNK_0xae11'
// 1987:      UNK_0xae3d  codep:0x656e parp:0xae3d size:0x001f C-string:'UNK_0xae3d'
// 1988:      UNK_0xae5e  codep:0xe70e parp:0xae5e size:0x008f C-string:'UNK_0xae5e'
// 1989:      UNK_0xaeef  codep:0x0c38 parp:0xaeef size:0x0000 C-string:'UNK_0xaeef'
// 1990:      UNK_0xaef1  codep:0x6410 parp:0xaef1 size:0xffffffff C-string:'UNK_0xaef1'
// 1991:      UNK_0xaef2  codep:0x3864 parp:0xaef2 size:0xffffffff C-string:'UNK_0xaef2'
// 1992:      UNK_0xaef3  codep:0x0c38 parp:0xaef3 size:0x0118 C-string:'UNK_0xaef3'
// 1993:      UNK_0xb00d  codep:0x5c71 parp:0xb00d size:0x02f3 C-string:'UNK_0xb00d'
// 1994:      UNK_0xb302  codep:0xae54 parp:0xb302 size:0x000a C-string:'UNK_0xb302'
// 1995:      UNK_0xb30e  codep:0xae72 parp:0xb30e size:0x0000 C-string:'UNK_0xb30e'
// 1996:      UNK_0xb310  codep:0x5d0b parp:0xb310 size:0x0041 C-string:'UNK_0xb310'
// 1997:      UNK_0xb353  codep:0x4390 parp:0xb353 size:0x00cf C-string:'UNK_0xb353'
// 1998:      UNK_0xb424  codep:0x1690 parp:0xb424 size:0x0017 C-string:'UNK_0xb424'
// 1999:      UNK_0xb43d  codep:0x3e01 parp:0xb43d size:0x03c3 C-string:'UNK_0xb43d'
// 2000:      UNK_0xb802  codep:0x0000 parp:0xb802 size:0x000d C-string:'UNK_0xb802'
// 2001:      UNK_0xb811  codep:0x5846 parp:0xb811 size:0x007c C-string:'UNK_0xb811'
// 2002:      UNK_0xb88f  codep:0x224c parp:0xb88f size:0x033c C-string:'UNK_0xb88f'
// 2003:      UNK_0xbbcd  codep:0x7420 parp:0xbbcd size:0x0323 C-string:'UNK_0xbbcd'
// 2004:      UNK_0xbef2  codep:0x224c parp:0xbef2 size:0x0319 C-string:'UNK_0xbef2'
// 2005:      UNK_0xc20d  codep:0xae5d parp:0xc20d size:0x0201 C-string:'UNK_0xc20d'
// 2006:      UNK_0xc410  codep:0x89c3 parp:0xc410 size:0x01ff C-string:'UNK_0xc410'
// 2007:      UNK_0xc611  codep:0x564f parp:0xc611 size:0x002a C-string:'UNK_0xc611'
// 2008:      UNK_0xc63d  codep:0x1f53 parp:0xc63d size:0x01e5 C-string:'UNK_0xc63d'
// 2009:      UNK_0xc824  codep:0x9083 parp:0xc824 size:0x0073 C-string:'UNK_0xc824'
// 2010:      UNK_0xc899  codep:0x0000 parp:0xc899 size:0x0367 C-string:'UNK_0xc899'
// 2011:      UNK_0xcc02  codep:0x3183 parp:0xcc02 size:0x0477 C-string:'UNK_0xcc02'
// 2012:      UNK_0xd07b  codep:0x87d0 parp:0xd07b size:0x0185 C-string:'UNK_0xd07b'
// 2013:      UNK_0xd202  codep:0x86d1 parp:0xd202 size:0x02fe C-string:'UNK_0xd202'
// 2014:      UNK_0xd502  codep:0x4f50 parp:0xd502 size:0x0109 C-string:'UNK_0xd502'
// 2015:      UNK_0xd60d  codep:0x0000 parp:0xd60d size:0x0102 C-string:'UNK_0xd60d'
// 2016:      UNK_0xd711  codep:0x0000 parp:0xd711 size:0x0000 C-string:'UNK_0xd711'
// 2017:      UNK_0xd713  codep:0x0000 parp:0xd713 size:0x000f C-string:'UNK_0xd713'
// 2018:      UNK_0xd724  codep:0x0000 parp:0xd724 size:0x00cc C-string:'UNK_0xd724'
// 2019:      UNK_0xd7f2  codep:0xf526 parp:0xd7f2 size:0x020e C-string:'UNK_0xd7f2'
// 2020:      UNK_0xda02  codep:0x004b parp:0xda02 size:0x0020 C-string:'UNK_0xda02'
// 2021:      UNK_0xda24  codep:0x203a parp:0xda24 size:0x0549 C-string:'UNK_0xda24'
// 2022:      UNK_0xdf6f  codep:0x0f72 parp:0xdf6f size:0x01a0 C-string:'UNK_0xdf6f'
// 2023:      UNK_0xe111  codep:0x946b parp:0xe111 size:0x0311 C-string:'UNK_0xe111'
// 2024:      UNK_0xe424  codep:0x0f20 parp:0xe424 size:0x0462 C-string:'UNK_0xe424'
// 2025:      UNK_0xe888  codep:0x1690 parp:0xe888 size:0x038d C-string:'UNK_0xe888'
// 2026:      UNK_0xec17  codep:0x7a1f parp:0xec17 size:0x01a3 C-string:'UNK_0xec17'
// 2027:      UNK_0xedbc  codep:0x7420 parp:0xedbc size:0x0003 C-string:'UNK_0xedbc'
// 2028:      UNK_0xedc1  codep:0x7420 parp:0xedc1 size:0x0003 C-string:'UNK_0xedc1'
// 2029:      UNK_0xedc6  codep:0x7420 parp:0xedc6 size:0x0003 C-string:'UNK_0xedc6'
// 2030:      UNK_0xedcb  codep:0x7420 parp:0xedcb size:0x0003 C-string:'UNK_0xedcb'
// 2031:      UNK_0xedd0  codep:0x7420 parp:0xedd0 size:0x0003 C-string:'UNK_0xedd0'
// 2032:      UNK_0xedd5  codep:0x1d29 parp:0xedd5 size:0x0002 C-string:'UNK_0xedd5'
// 2033:      UNK_0xedd9  codep:0x1d29 parp:0xedd9 size:0x0002 C-string:'UNK_0xedd9'
// 2034:      UNK_0xeddd  codep:0x224c parp:0xeddd size:0x0018 C-string:'UNK_0xeddd'
// 2035:      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x001c C-string:'UNK_0xedf7'
// 2036:      UNK_0xee15  codep:0x224c parp:0xee15 size:0x0008 C-string:'UNK_0xee15'
// 2037:      UNK_0xee1f  codep:0x224c parp:0xee1f size:0x0010 C-string:'UNK_0xee1f'
// 2038:      UNK_0xee31  codep:0x224c parp:0xee31 size:0x0010 C-string:'UNK_0xee31'
// 2039:      UNK_0xee43  codep:0x224c parp:0xee43 size:0x0028 C-string:'UNK_0xee43'
// 2040:      UNK_0xee6d  codep:0x224c parp:0xee6d size:0x004c C-string:'UNK_0xee6d'
// 2041:      UNK_0xeebb  codep:0x224c parp:0xeebb size:0x0026 C-string:'UNK_0xeebb'
// 2042:      UNK_0xeee3  codep:0x224c parp:0xeee3 size:0x0054 C-string:'UNK_0xeee3'
// 2043:         (GET-AU  codep:0x4b3b parp:0xef43 size:0x0020 C-string:'_ro_GET_minus_AU'
// 2044:      UNK_0xef65  codep:0x224c parp:0xef65 size:0x001a C-string:'UNK_0xef65'
// 2045:      UNK_0xef81  codep:0x224c parp:0xef81 size:0x0059 C-string:'UNK_0xef81'
// 2046:      UNK_0xefdc  codep:0x1d29 parp:0xefdc size:0x0002 C-string:'UNK_0xefdc'
// 2047:      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x0035 C-string:'UNK_0xefe0'
// 2048:      UNK_0xf017  codep:0x4c16 parp:0xf017 size:0xffffffff C-string:'UNK_0xf017'
// 2049:      UNK_0xf018  codep:0x224c parp:0xf018 size:0x0114 C-string:'UNK_0xf018'
// 2050:      UNK_0xf12e  codep:0x224c parp:0xf12e size:0x0016 C-string:'UNK_0xf12e'
// 2051:      UNK_0xf146  codep:0xf046 parp:0xf146 size:0x001e C-string:'UNK_0xf146'
// 2052:      UNK_0xf166  codep:0x224c parp:0xf166 size:0x0024 C-string:'UNK_0xf166'
// 2053:      UNK_0xf18c  codep:0x224c parp:0xf18c size:0x003a C-string:'UNK_0xf18c'
// 2054:      UNK_0xf1c8  codep:0x224c parp:0xf1c8 size:0x001a C-string:'UNK_0xf1c8'
// 2055:      UNK_0xf1e4  codep:0x224c parp:0xf1e4 size:0x000a C-string:'UNK_0xf1e4'
// 2056:      UNK_0xf1f0  codep:0x0e7f parp:0xf1f0 size:0x000c C-string:'UNK_0xf1f0'
// 2057:      UNK_0xf1fe  codep:0x224c parp:0xf1fe size:0x0011 C-string:'UNK_0xf1fe'
// 2058:      UNK_0xf211  codep:0x1d0d parp:0xf211 size:0x0001 C-string:'UNK_0xf211'
// 2059:      UNK_0xf214  codep:0x0ef2 parp:0xf214 size:0x000c C-string:'UNK_0xf214'
// 2060:      UNK_0xf222  codep:0x224c parp:0xf222 size:0x0000 C-string:'UNK_0xf222'
// 2061:      UNK_0xf224  codep:0xf1c6 parp:0xf224 size:0x002a C-string:'UNK_0xf224'
// 2062:      UNK_0xf250  codep:0x224c parp:0xf250 size:0x0018 C-string:'UNK_0xf250'
// 2063:      UNK_0xf26a  codep:0x224c parp:0xf26a size:0x00a8 C-string:'UNK_0xf26a'
// 2064:      UNK_0xf314  codep:0x224c parp:0xf314 size:0x006a C-string:'UNK_0xf314'
// 2065:      UNK_0xf380  codep:0x224c parp:0xf380 size:0x0016 C-string:'UNK_0xf380'
// 2066:      UNK_0xf398  codep:0x224c parp:0xf398 size:0x0024 C-string:'UNK_0xf398'
// 2067:      UNK_0xf3be  codep:0x224c parp:0xf3be size:0x0014 C-string:'UNK_0xf3be'
// 2068:      UNK_0xf3d4  codep:0x224c parp:0xf3d4 size:0x0020 C-string:'UNK_0xf3d4'
// 2069:      UNK_0xf3f6  codep:0x224c parp:0xf3f6 size:0x0012 C-string:'UNK_0xf3f6'
// 2070:      UNK_0xf40a  codep:0x224c parp:0xf40a size:0x0034 C-string:'UNK_0xf40a'
// 2071:      UNK_0xf440  codep:0x224c parp:0xf440 size:0x0022 C-string:'UNK_0xf440'
// 2072:      UNK_0xf464  codep:0x224c parp:0xf464 size:0x001c C-string:'UNK_0xf464'
// 2073:      UNK_0xf482  codep:0x224c parp:0xf482 size:0x0046 C-string:'UNK_0xf482'
// 2074:            JUMP  codep:0x224c parp:0xf4d1 size:0x013e C-string:'JUMP'
// 2075:      UNK_0xf611  codep:0x0000 parp:0xf611 size:0x03fc C-string:'UNK_0xf611'
// 2076:      UNK_0xfa0f  codep:0x0000 parp:0xfa0f size:0x0004 C-string:'UNK_0xfa0f'
// 2077:      UNK_0xfa15  codep:0x0000 parp:0xfa15 size:0x00db C-string:'UNK_0xfa15'
// 2078:      UNK_0xfaf2  codep:0x0000 parp:0xfaf2 size:0xfffffa6e C-string:'UNK_0xfaf2'

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
  UNK_0x9a7d(); // UNK_0x9a7d
  Push(0x000d);
  GREY1(); // GREY1
  UNK_0x9e02(); // UNK_0x9e02
  UNK_0x8a80(); // UNK_0x8a80
  BLACK(); // BLACK
  GREY2(); // GREY2
  DK_minus_BLUE(); // DK-BLUE
  UNK_0xa21e(); // UNK_0xa21e
  UNK_0x869f(); // UNK_0x869f
}


// ================================================
// 0xedf5: WORD 'UNK_0xedf7' codep=0x224c parp=0xedf7
// ================================================

void UNK_0xedf7() // UNK_0xedf7
{
  Push(0xc090);
  UNK_0x84db(); // UNK_0x84db
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
  UNK_0xbbcd(); // UNK_0xbbcd
  Push(pp_LSCAN); // LSCAN
  UNK_0xa89d(); // UNK_0xa89d
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
  UNK_0x9df0(); // UNK_0x9df0
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
  UNK_0x9df0(); // UNK_0x9df0
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
  UNK_0xa71c(); // UNK_0xa71c
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
  UNK_0xa398(); // UNK_0xa398
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  _ro_GET_minus_AU(); // (GET-AU
  Push(pp_BTN_minus_REC); // BTN-REC
  Push(Read16(Pop())); // @
  UNK_0xeee3(); // UNK_0xeee3
  BLUE(); // BLUE
  Push(pp_THIS_minus_BU); // THIS-BU
  Push(Read16(Pop())); // @
  UNK_0xa2e8(); // UNK_0xa2e8
}


// ================================================
// 0xef7f: WORD 'UNK_0xef81' codep=0x224c parp=0xef81
// ================================================

void UNK_0xef81() // UNK_0xef81
{
  UNK_0x8d47(); // UNK_0x8d47
  UNK_0x9fd4(); // UNK_0x9fd4
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
  UNK_0xbef2(); // UNK_0xbef2
  UNK_0x2ef2(); // UNK_0x2ef2
  UNK_0xae11(); // UNK_0xae11
  UNK_0x97f2(); // UNK_0x97f2
  UNK_0xc63d(); // UNK_0xc63d
  UNK_0xbef2(); // UNK_0xbef2
  UNK_0x2ef2(); // UNK_0x2ef2
  UNK_0xae11(); // UNK_0xae11
  UNK_0x8ff2(); // UNK_0x8ff2
  UNK_0xc63d(); // UNK_0xc63d
  UNK_0xbef2(); // UNK_0xbef2
  UNK_0x3df2(); // UNK_0x3df2
  UNK_0xae11(); // UNK_0xae11
  UNK_0x87f2(); // UNK_0x87f2
  UNK_0xc63d(); // UNK_0xc63d
  UNK_0xbef2(); // UNK_0xbef2
  UNK_0x8ff2(); // UNK_0x8ff2
  UNK_0xae3d(); // UNK_0xae3d
  UNK_0x7ff2(); // UNK_0x7ff2
  UNK_0xc63d(); // UNK_0xc63d
  UNK_0xbef2(); // UNK_0xbef2
  UNK_0x5df2(); // UNK_0x5df2
  UNK_0x0a19(); // UNK_0x0a19
  UNK_0xae02(); // UNK_0xae02
  UNK_0x3df2(); // UNK_0x3df2
  UNK_0xc611(); // UNK_0xc611
  UNK_0xbef2(); // UNK_0xbef2
  UNK_0x5df2(); // UNK_0x5df2
  UNK_0x0f19(); // UNK_0x0f19
  UNK_0xae02(); // UNK_0xae02
  UNK_0x2ef2(); // UNK_0x2ef2
  UNK_0xc611(); // UNK_0xc611
  UNK_0xbef2(); // UNK_0xbef2
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
  UNK_0x9ce4(); // UNK_0x9ce4
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
  UNK_0x84db(); // UNK_0x84db
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
  UNK_0x84db(); // UNK_0x84db
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
  UNK_0x84db(); // UNK_0x84db
  Push(pp__ask_SUP); // ?SUP
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xc636);
  UNK_0x84db(); // UNK_0x84db
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
  UNK_0x7e4e(); // UNK_0x7e4e
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  UNK_0x7e4e(); // UNK_0x7e4e
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
  UNK_0x9fd4(); // UNK_0x9fd4
  Push(0x6b65); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  UNK_0x9ff3(); // UNK_0x9ff3

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
  UNK_0x9ff3(); // UNK_0x9ff3
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
  UNK_0x8d47(); // UNK_0x8d47
  UNK_0x9fd4(); // UNK_0x9fd4
  UNK_0x9ba7(); // UNK_0x9ba7
  Push(pp_UNK_0xedd5); // UNK_0xedd5
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0x6ba6); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  UNK_0x9ff3(); // UNK_0x9ff3
  return;

  label1:
  Push(0x6bc4); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(0x6c00); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  UNK_0x9ff3(); // UNK_0x9ff3
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440() // UNK_0xf440
{
  Push(0x6c2b); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(0x03e8);
  MS(); // MS
  Push(0x6c4a); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf462: WORD 'UNK_0xf464' codep=0x224c parp=0xf464
// ================================================

void UNK_0xf464() // UNK_0xf464
{
  WHITE(); // WHITE
  UNK_0x869f(); // UNK_0x869f
  Push(0x6c69); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(0x6c99); Pust(0x0002);
  UNK_0xee31(); // UNK_0xee31
  UNK_0x9ff3(); // UNK_0x9ff3
  UNK_0xa662(); // UNK_0xa662
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
  UNK_0x9a7d(); // UNK_0x9a7d
  UNK_0x8d47(); // UNK_0x8d47
  Push(2); // 2
  BLACK(); // BLACK
  UNK_0x9e02(); // UNK_0x9e02
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
  UNK_0x9fd4(); // UNK_0x9fd4
  UNK_0xf3d4(); // UNK_0xf3d4
  UNK_0xf398(); // UNK_0xf398
  if (Pop() == 0) return;
  UNK_0xf440(); // UNK_0xf440
  Push(0xd3c5);
  UNK_0x84db(); // UNK_0x84db
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
  UNK_0x84db(); // UNK_0x84db
  Push(0xcaeb);
  UNK_0x84db(); // UNK_0x84db
  UNK_0xf3be(); // UNK_0xf3be
  Push(0xcb2e);
  UNK_0x84db(); // UNK_0x84db
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
  UNK_0x9ff3(); // UNK_0x9ff3
  Push(0xcb2e);
  UNK_0x84db(); // UNK_0x84db
}

// 0xf543: db 0x4a 0x55 0x4d 0x50 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'JUMP-VO______________________ '
  