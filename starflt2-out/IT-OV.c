// ====== OVERLAY 'IT-OV' ======

#include"interface.h"

// store offset = 0xee80
// overlay size   = 0x06e0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:           INEXT  codep:0x224c parp:0x7ab3 size:0x000e C-string:'INEXT'
// 1870:           IPREV  codep:0x224c parp:0x7acb size:0x000e C-string:'IPREV'
// 1871:          IFIRST  codep:0x224c parp:0x7ae4 size:0x0008 C-string:'IFIRST'
// 1872:           ILAST  codep:0x224c parp:0x7af6 size:0xfffffff9 C-string:'ILAST'
// 1873:      UNK_0x7af1  codep:0x4c49 parp:0x7af1 size:0x000b C-string:'UNK_0x7af1'
// 1874:            VCLR  codep:0x224c parp:0x7b05 size:0x0007 C-string:'VCLR'
// 1875:      UNK_0x7b0e  codep:0x9916 parp:0x7b0e size:0xffffffff C-string:'UNK_0x7b0e'
// 1876:              >V  codep:0x7b14 parp:0x7b14 size:0x0010 C-string:'_gt_V'
// 1877:              V>  codep:0x7b2b parp:0x7b2b size:0x0010 C-string:'V_gt_'
// 1878:              VI  codep:0x7b42 parp:0x7b42 size:0x002e C-string:'VI'
// 1879:         SAVE-BU  codep:0x224c parp:0x7b7c size:0x0006 C-string:'SAVE_minus_BU'
// 1880:           FLUSH  codep:0x224c parp:0x7b8c size:0x0006 C-string:'FLUSH'
// 1881:              MT  codep:0x224c parp:0x7b99 size:0x0006 C-string:'MT'
// 1882:         IINSERT  codep:0x224c parp:0x7bab size:0x003c C-string:'IINSERT'
// 1883:         <INSERT  codep:0x224c parp:0x7bf3 size:0x001a C-string:'_st_INSERT'
// 1884:         >INSERT  codep:0x224c parp:0x7c19 size:0xfffffff5 C-string:'_gt_INSERT'
// 1885:      UNK_0x7c10  codep:0x877a parp:0x7c10 size:0x0013 C-string:'UNK_0x7c10'
// 1886:         IEXTRAC  codep:0x224c parp:0x7c2f size:0x000c C-string:'IEXTRAC'
// 1887:      UNK_0x7c3d  codep:0x74de parp:0x7c3d size:0x003a C-string:'UNK_0x7c3d'
// 1888:         @NEWSPA  codep:0x224c parp:0x7c83 size:0x0006 C-string:'_at_NEWSPA'
// 1889:         !NEWSPA  codep:0x224c parp:0x7c95 size:0x0012 C-string:'_ex_NEWSPA'
// 1890:         MAXSPAC  codep:0x224c parp:0x7cb3 size:0x0020 C-string:'MAXSPAC'
// 1891:            FLD@  codep:0x4b3b parp:0x7cdc size:0x0009 C-string:'FLD_at_'
// 1892:      UNK_0x7ce7  codep:0xb000 parp:0x7ce7 size:0x0005 C-string:'UNK_0x7ce7'
// 1893:            FLD!  codep:0x4b3b parp:0x7cf5 size:0x0010 C-string:'FLD_ex_'
// 1894:           IFLD@  codep:0x224c parp:0x7d0f size:0x0007 C-string:'IFLD_at_'
// 1895:      UNK_0x7d18  codep:0x820e parp:0x7d18 size:0x0007 C-string:'UNK_0x7d18'
// 1896:           IFLD!  codep:0x224c parp:0x7d29 size:0xfffffff9 C-string:'IFLD_ex_'
// 1897:      UNK_0x7d24  codep:0x4649 parp:0x7d24 size:0x0021 C-string:'UNK_0x7d24'
// 1898:         ?CLASS/  codep:0x224c parp:0x7d51 size:0x0038 C-string:'_ask_CLASS_slash_'
// 1899:             MAP  codep:0x224c parp:0x7d91 size:0x001c C-string:'MAP'
// 1900:          SELECT  codep:0x224c parp:0x7db8 size:0x0028 C-string:'SELECT'
// 1901:         ?>FIRST  codep:0x224c parp:0x7dec size:0x000c C-string:'_ask__gt_FIRST'
// 1902:         SELECT-  codep:0x224c parp:0x7e04 size:0x0040 C-string:'SELECT_minus_'
// 1903:           IFIND  codep:0x224c parp:0x7e4e size:0x0022 C-string:'IFIND'
// 1904:         MAP>LEA  codep:0x224c parp:0x7e7c size:0x0018 C-string:'MAP_gt_LEA'
// 1905:         MAKE1ST  codep:0x224c parp:0x7ea0 size:0x0046 C-string:'MAKE1ST'
// 1906:         >INACTI  codep:0x224c parp:0x7ef2 size:0x0019 C-string:'_gt_INACTI'
// 1907:      UNK_0x7f0d  codep:0x4c16 parp:0x7f0d size:0x0002 C-string:'UNK_0x7f0d'
// 1908:      UNK_0x7f11  codep:0xf07c parp:0x7f11 size:0x0002 C-string:'UNK_0x7f11'
// 1909:      UNK_0x7f15  codep:0xaf16 parp:0x7f15 size:0xffffffff C-string:'UNK_0x7f15'
// 1910:         IDELETE  codep:0x224c parp:0x7f20 size:0xfffffff7 C-string:'IDELETE'
// 1911:      UNK_0x7f19  codep:0x4449 parp:0x7f19 size:0x0014 C-string:'UNK_0x7f19'
// 1912:      UNK_0x7f2f  codep:0x9756 parp:0x7f2f size:0x001b C-string:'UNK_0x7f2f'
// 1913:      UNK_0x7f4c  codep:0x224c parp:0x7f4c size:0x003a C-string:'UNK_0x7f4c'
// 1914:             ALL  codep:0x224c parp:0x7f8e size:0x0014 C-string:'ALL'
// 1915:            EACH  codep:0x224c parp:0x7fab size:0x0018 C-string:'EACH'
// 1916:         NULLPOI  codep:0x224c parp:0x7fcf size:0x0030 C-string:'NULLPOI'
// 1917:      UNK_0x8001  codep:0x7a3f parp:0x8001 size:0x006a C-string:'UNK_0x8001'
// 1918:         ?>MAXSP  codep:0x224c parp:0x8077 size:0x0092 C-string:'_ask__gt_MAXSP'
// 1919:         SET?REU  codep:0x4b3b parp:0x8115 size:0x0002 C-string:'SET_ask_REU'
// 1920:      UNK_0x8119  codep:0x4d12 parp:0x8119 size:0x0040 C-string:'UNK_0x8119'
// 1921:         VICREAT  codep:0x224c parp:0x8165 size:0x0044 C-string:'VICREAT'
// 1922:      UNK_0x81ab  codep:0x224c parp:0x81ab size:0x0064 C-string:'UNK_0x81ab'
// 1923:      UNK_0x8211  codep:0x224c parp:0x8211 size:0x017c C-string:'UNK_0x8211'
// 1924:      UNK_0x838f  codep:0x224c parp:0x838f size:0x030e C-string:'UNK_0x838f'
// 1925:      UNK_0x869f  codep:0x224c parp:0x869f size:0x00a0 C-string:'UNK_0x869f'
// 1926:      UNK_0x8741  codep:0x1005 parp:0x8741 size:0x0068 C-string:'UNK_0x8741'
// 1927:      UNK_0x87ab  codep:0x6d16 parp:0x87ab size:0x0155 C-string:'UNK_0x87ab'
// 1928:      UNK_0x8902  codep:0x86f8 parp:0x8902 size:0x000d C-string:'UNK_0x8902'
// 1929:      UNK_0x8911  codep:0x5249 parp:0x8911 size:0x00ef C-string:'UNK_0x8911'
// 1930:      UNK_0x8a02  codep:0x1639 parp:0x8a02 size:0x000c C-string:'UNK_0x8a02'
// 1931:      UNK_0x8a10  codep:0x0a39 parp:0x8a10 size:0x006e C-string:'UNK_0x8a10'
// 1932:      UNK_0x8a80  codep:0x224c parp:0x8a80 size:0x0171 C-string:'UNK_0x8a80'
// 1933:      UNK_0x8bf3  codep:0x6d0a parp:0x8bf3 size:0x007a C-string:'UNK_0x8bf3'
// 1934:      UNK_0x8c6f  codep:0x3b87 parp:0x8c6f size:0x03fe C-string:'UNK_0x8c6f'
// 1935:      UNK_0x906f  codep:0x5445 parp:0x906f size:0x000a C-string:'UNK_0x906f'
// 1936:      UNK_0x907b  codep:0x125f parp:0x907b size:0x0022 C-string:'UNK_0x907b'
// 1937:      UNK_0x909f  codep:0x6d8a parp:0x909f size:0x0009 C-string:'UNK_0x909f'
// 1938:      UNK_0x90aa  codep:0x4f4c parp:0x90aa size:0x0046 C-string:'UNK_0x90aa'
// 1939:      UNK_0x90f2  codep:0x1690 parp:0x90f2 size:0xffffffff C-string:'UNK_0x90f2'
// 1940:      UNK_0x90f3  codep:0x3b16 parp:0x90f3 size:0x011b C-string:'UNK_0x90f3'
// 1941:      UNK_0x9210  codep:0xe70e parp:0x9210 size:0xffffffff C-string:'UNK_0x9210'
// 1942:      UNK_0x9211  codep:0x0fe7 parp:0x9211 size:0x00dd C-string:'UNK_0x9211'
// 1943:      UNK_0x92f0  codep:0x2b58 parp:0x92f0 size:0x044f C-string:'UNK_0x92f0'
// 1944:      UNK_0x9741  codep:0xae5b parp:0x9741 size:0x033a C-string:'UNK_0x9741'
// 1945:      UNK_0x9a7d  codep:0x224c parp:0x9a7d size:0x0091 C-string:'UNK_0x9a7d'
// 1946:      UNK_0x9b10  codep:0x9d0e parp:0x9b10 size:0x00fb C-string:'UNK_0x9b10'
// 1947:      UNK_0x9c0d  codep:0x1690 parp:0x9c0d size:0x0039 C-string:'UNK_0x9c0d'
// 1948:      UNK_0x9c48  codep:0x224c parp:0x9c48 size:0x0032 C-string:'UNK_0x9c48'
// 1949:      UNK_0x9c7c  codep:0x25fc parp:0x9c7c size:0x010c C-string:'UNK_0x9c7c'
// 1950:      UNK_0x9d8a  codep:0x224c parp:0x9d8a size:0x0076 C-string:'UNK_0x9d8a'
// 1951:      UNK_0x9e02  codep:0x224c parp:0x9e02 size:0x011a C-string:'UNK_0x9e02'
// 1952:      UNK_0x9f1e  codep:0x224c parp:0x9f1e size:0x02ed C-string:'UNK_0x9f1e'
// 1953:      UNK_0xa20d  codep:0x175d parp:0xa20d size:0x01d0 C-string:'UNK_0xa20d'
// 1954:      UNK_0xa3df  codep:0x224c parp:0xa3df size:0x0043 C-string:'UNK_0xa3df'
// 1955:      UNK_0xa424  codep:0x413a parp:0xa424 size:0x048d C-string:'UNK_0xa424'
// 1956:      UNK_0xa8b3  codep:0x224c parp:0xa8b3 size:0x0012 C-string:'UNK_0xa8b3'
// 1957:      UNK_0xa8c7  codep:0x224c parp:0xa8c7 size:0x002a C-string:'UNK_0xa8c7'
// 1958:      UNK_0xa8f3  codep:0x224c parp:0xa8f3 size:0x0164 C-string:'UNK_0xa8f3'
// 1959:      UNK_0xaa59  codep:0x7420 parp:0xaa59 size:0x000d C-string:'UNK_0xaa59'
// 1960:      UNK_0xaa68  codep:0x7420 parp:0xaa68 size:0x000d C-string:'UNK_0xaa68'
// 1961:      UNK_0xaa77  codep:0x7420 parp:0xaa77 size:0x01f6 C-string:'UNK_0xaa77'
// 1962:      UNK_0xac6f  codep:0x0004 parp:0xac6f size:0x0091 C-string:'UNK_0xac6f'
// 1963:      UNK_0xad02  codep:0x2415 parp:0xad02 size:0x0009 C-string:'UNK_0xad02'
// 1964:      UNK_0xad0d  codep:0x1035 parp:0xad0d size:0x0060 C-string:'UNK_0xad0d'
// 1965:      UNK_0xad6f  codep:0x0e32 parp:0xad6f size:0x00ef C-string:'UNK_0xad6f'
// 1966:      UNK_0xae60  codep:0x160f parp:0xae60 size:0x0014 C-string:'UNK_0xae60'
// 1967:      UNK_0xae76  codep:0x8f16 parp:0xae76 size:0x0033 C-string:'UNK_0xae76'
// 1968:      UNK_0xaeab  codep:0x1690 parp:0xaeab size:0x0043 C-string:'UNK_0xaeab'
// 1969:      UNK_0xaef0  codep:0x100c parp:0xaef0 size:0x0132 C-string:'UNK_0xaef0'
// 1970:      UNK_0xb024  codep:0xa33a parp:0xb024 size:0x0385 C-string:'UNK_0xb024'
// 1971:      UNK_0xb3ab  codep:0x6d16 parp:0xb3ab size:0x0455 C-string:'UNK_0xb3ab'
// 1972:      UNK_0xb802  codep:0x0000 parp:0xb802 size:0x05ed C-string:'UNK_0xb802'
// 1973:      UNK_0xbdf1  codep:0xc516 parp:0xbdf1 size:0x0650 C-string:'UNK_0xbdf1'
// 1974:      UNK_0xc443  codep:0xf116 parp:0xc443 size:0x03bd C-string:'UNK_0xc443'
// 1975:      UNK_0xc802  codep:0xff00 parp:0xc802 size:0x040c C-string:'UNK_0xc802'
// 1976:      UNK_0xcc10  codep:0xff22 parp:0xcc10 size:0x0412 C-string:'UNK_0xcc10'
// 1977:      UNK_0xd024  codep:0x5453 parp:0xd024 size:0x0425 C-string:'UNK_0xd024'
// 1978:      UNK_0xd44b  codep:0x0116 parp:0xd44b size:0x01c0 C-string:'UNK_0xd44b'
// 1979:      UNK_0xd60d  codep:0x0000 parp:0xd60d size:0x0101 C-string:'UNK_0xd60d'
// 1980:      UNK_0xd710  codep:0x0000 parp:0xd710 size:0xffffffff C-string:'UNK_0xd710'
// 1981:      UNK_0xd711  codep:0x0000 parp:0xd711 size:0x005c C-string:'UNK_0xd711'
// 1982:      UNK_0xd76f  codep:0x0000 parp:0xd76f size:0x00fe C-string:'UNK_0xd76f'
// 1983:      UNK_0xd86f  codep:0x2001 parp:0xd86f size:0x0291 C-string:'UNK_0xd86f'
// 1984:      UNK_0xdb02  codep:0x7522 parp:0xdb02 size:0x000a C-string:'UNK_0xdb02'
// 1985:      UNK_0xdb0e  codep:0x7522 parp:0xdb0e size:0x009b C-string:'UNK_0xdb0e'
// 1986:      UNK_0xdbab  codep:0xdb17 parp:0xdbab size:0x0443 C-string:'UNK_0xdbab'
// 1987:      UNK_0xdff0  codep:0xbb17 parp:0xdff0 size:0x071e C-string:'UNK_0xdff0'
// 1988:      UNK_0xe710  codep:0x3b7f parp:0xe710 size:0xffffffff C-string:'UNK_0xe710'
// 1989:      UNK_0xe711  codep:0x8a3b parp:0xe711 size:0x005c C-string:'UNK_0xe711'
// 1990:      UNK_0xe76f  codep:0x4c16 parp:0xe76f size:0x009c C-string:'UNK_0xe76f'
// 1991:      UNK_0xe80d  codep:0x175d parp:0xe80d size:0x009c C-string:'UNK_0xe80d'
// 1992:      UNK_0xe8ab  codep:0x6d16 parp:0xe8ab size:0x0043 C-string:'UNK_0xe8ab'
// 1993:      UNK_0xe8f0  codep:0x2053 parp:0xe8f0 size:0x0210 C-string:'UNK_0xe8f0'
// 1994:      UNK_0xeb02  codep:0x2b00 parp:0xeb02 size:0x039a C-string:'UNK_0xeb02'
// 1995:      UNK_0xee9e  codep:0x7394 parp:0xee9e size:0x001e C-string:'UNK_0xee9e'
// 1996:      UNK_0xeebe  codep:0x2214 parp:0xeebe size:0x002a C-string:'UNK_0xeebe'
// 1997:      UNK_0xeeea  codep:0x224c parp:0xeeea size:0x0010 C-string:'UNK_0xeeea'
// 1998:      UNK_0xeefc  codep:0x224c parp:0xeefc size:0x000e C-string:'UNK_0xeefc'
// 1999:      UNK_0xef0c  codep:0x224c parp:0xef0c size:0x0020 C-string:'UNK_0xef0c'
// 2000:      UNK_0xef2e  codep:0x224c parp:0xef2e size:0x0016 C-string:'UNK_0xef2e'
// 2001:      UNK_0xef46  codep:0x1d29 parp:0xef46 size:0x0002 C-string:'UNK_0xef46'
// 2002:      UNK_0xef4a  codep:0x224c parp:0xef4a size:0x00b3 C-string:'UNK_0xef4a'
// 2003:      UNK_0xefff  codep:0x224c parp:0xefff size:0x002e C-string:'UNK_0xefff'
// 2004:      UNK_0xf02f  codep:0xeefa parp:0xf02f size:0x0018 C-string:'UNK_0xf02f'
// 2005:      UNK_0xf049  codep:0x224c parp:0xf049 size:0x0089 C-string:'UNK_0xf049'
// 2006:      UNK_0xf0d4  codep:0xeed0 parp:0xf0d4 size:0x0032 C-string:'UNK_0xf0d4'
// 2007:      UNK_0xf108  codep:0xa956 parp:0xf108 size:0x0016 C-string:'UNK_0xf108'
// 2008:        DATE$>AD  codep:0x224c parp:0xf12b size:0x006f C-string:'DATE_do__gt_AD'
// 2009:      UNK_0xf19c  codep:0xeefa parp:0xf19c size:0x000c C-string:'UNK_0xf19c'
// 2010:      UNK_0xf1aa  codep:0xa97a parp:0xf1aa size:0x002a C-string:'UNK_0xf1aa'
// 2011:      UNK_0xf1d6  codep:0xeea4 parp:0xf1d6 size:0x0014 C-string:'UNK_0xf1d6'
// 2012:        IDENT-IT  codep:0x4b3b parp:0xf1f7 size:0x0014 C-string:'IDENT_minus_IT'
// 2013:      UNK_0xf20d  codep:0x001c parp:0xf20d size:0x0002 C-string:'UNK_0xf20d'
// 2014:      UNK_0xf211  codep:0x0044 parp:0xf211 size:0x0000 C-string:'UNK_0xf211'
// 2015:      UNK_0xf213  codep:0xf0d2 parp:0xf213 size:0x0000 C-string:'UNK_0xf213'
// 2016:        ITEM>PAD  codep:0x224c parp:0xf220 size:0x001f C-string:'ITEM_gt_PAD'
// 2017:      UNK_0xf241  codep:0xf575 parp:0xf241 size:0x0003 C-string:'UNK_0xf241'
// 2018:      UNK_0xf246  codep:0x224c parp:0xf246 size:0x000c C-string:'UNK_0xf246'
// 2019:      UNK_0xf254  codep:0x224c parp:0xf254 size:0x0006 C-string:'UNK_0xf254'
// 2020:      UNK_0xf25c  codep:0x224c parp:0xf25c size:0x0011 C-string:'UNK_0xf25c'
// 2021:      UNK_0xf26f  codep:0x3ef2 parp:0xf26f size:0x001d C-string:'UNK_0xf26f'
// 2022:      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x005a C-string:'UNK_0xf28e'
// 2023:        BOX>LIST  codep:0x224c parp:0xf2f5 size:0x003c C-string:'BOX_gt_LIST'
// 2024:        GET-BOXE  codep:0x224c parp:0xf33e size:0x0016 C-string:'GET_minus_BOXE'
// 2025:        MAKE-SCR  codep:0x224c parp:0xf361 size:0x002c C-string:'MAKE_minus_SCR'
// 2026:        DELETE-S  codep:0x224c parp:0xf39a size:0x0016 C-string:'DELETE_minus_S'
// 2027:        CLASS>BO  codep:0x4b3b parp:0xf3bd size:0x001c C-string:'CLASS_gt_BO'
// 2028:      UNK_0xf3db  codep:0x224c parp:0xf3db size:0x000e C-string:'UNK_0xf3db'
// 2029:        BOX>TOCS  codep:0x224c parp:0xf3f6 size:0x000e C-string:'BOX_gt_TOCS'
// 2030:        ?ELEMENT  codep:0x224c parp:0xf411 size:0x002c C-string:'_ask_ELEMENT'
// 2031:            >BOX  codep:0x224c parp:0xf446 size:0x0082 C-string:'_gt_BOX'
// 2032:          (BOX>)  codep:0x224c parp:0xf4d3 size:0x0036 C-string:'_ro_BOX_gt__rc_'
// 2033:            BOX>  codep:0x224c parp:0xf512 size:0x00fa C-string:'BOX_gt_'
// 2034:      UNK_0xf60e  codep:0x0000 parp:0xf60e size:0x0000 C-string:'UNK_0xf60e'
// 2035:      UNK_0xf610  codep:0x0000 parp:0xf610 size:0x03ff C-string:'UNK_0xf610'
// 2036:      UNK_0xfa11  codep:0x0000 parp:0xfa11 size:0x0001 C-string:'UNK_0xfa11'
// 2037:      UNK_0xfa14  codep:0x0000 parp:0xfa14 size:0x000e C-string:'UNK_0xfa14'
// 2038:      UNK_0xfa24  codep:0x0000 parp:0xfa24 size:0x00cc C-string:'UNK_0xfa24'
// 2039:      UNK_0xfaf2  codep:0x0000 parp:0xfaf2 size:0xfffffa6e C-string:'UNK_0xfaf2'

// =================================
// =========== VARIABLES ===========
// =================================
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
  UNK_0xa8c7(); // UNK_0xa8c7
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
  UNK_0x9a7d(); // UNK_0x9a7d
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
  UNK_0x9d8a(); // UNK_0x9d8a
  UNK_0x9c48(); // UNK_0x9c48
  UNK_0x8a80(); // UNK_0x8a80
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

  UNK_0x9f1e(); // UNK_0x9f1e
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
  UNK_0x9f1e(); // UNK_0x9f1e
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
  UNK_0xa3df(); // UNK_0xa3df
  Pop(); // DROP
  WHITE(); // WHITE
  UNK_0x869f(); // UNK_0x869f
  UNK_0xef4a(); // UNK_0xef4a
  KEY(); // KEY
  Pop(); // DROP
  UNK_0x9c48(); // UNK_0x9c48
  UNK_0x838f(); // UNK_0x838f
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
  UNK_0x9e02(); // UNK_0x9e02
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
  UNK_0x8211(); // UNK_0x8211
  UNK_0xaa77(); // UNK_0xaa77
  Push(0x0026);
  CMOVE(); // CMOVE
  UNK_0xaa68(); // UNK_0xaa68
  _1_dot_5_ex_(); // 1.5!
  UNK_0xaa59(); // UNK_0xaa59
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
  UNK_0xa8b3(); // UNK_0xa8b3
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
  UNK_0xa8f3(); // UNK_0xa8f3
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
  UNK_0x8211(); // UNK_0x8211
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
  UNK_0x8211(); // UNK_0x8211
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
  UNK_0x81ab(); // UNK_0x81ab
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
  