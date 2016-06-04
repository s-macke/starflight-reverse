// ====== OVERLAY 'EYE-OV' ======

#include"interface.h"

// store offset = 0xebb0
// overlay size   = 0x09b0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:            KILL  codep:0x224c parp:0xc1e9 size:0x0006 C-string:'KILL'
// 1870:            ?APP  codep:0x224c parp:0xc1f8 size:0x002e C-string:'_ask_APP'
// 1871:        BANK-VOC  codep:0x1ab5 parp:0xc233 size:0x0014 C-string:'BANK_minus_VOC'
// 1872:         BANK-OV  codep:0x83dd parp:0xc253 size:0x0002 C-string:'BANK_minus_OV'
// 1873:         OVINIT-  codep:0x224c parp:0xc261 size:0x0006 C-string:'OVINIT_minus_'
// 1874:         OVTRANS  codep:0x224c parp:0xc273 size:0x0006 C-string:'OVTRANS'
// 1875:         OVD@BAL  codep:0x224c parp:0xc285 size:0x0006 C-string:'OVD_at_BAL'
// 1876:         OVD!BAL  codep:0x224c parp:0xc297 size:0x0006 C-string:'OVD_ex_BAL'
// 1877:         OV?BALA  codep:0x224c parp:0xc2a9 size:0x0006 C-string:'OV_ask_BALA'
// 1878:         OV!TFLA  codep:0x224c parp:0xc2bb size:0x0006 C-string:'OV_ex_TFLA'
// 1879:         I-TRANS  codep:0x224c parp:0xc2cd size:0x0006 C-string:'I_minus_TRANS'
// 1880:             U-B  codep:0x224c parp:0xc2db size:0x0006 C-string:'U_minus_B'
// 1881:         T+BALAN  codep:0x224c parp:0xc2ed size:0x000c C-string:'T_plus_BALAN'
// 1882:        XCOM-VOC  codep:0x1ab5 parp:0xc306 size:0x0014 C-string:'XCOM_minus_VOC'
// 1883:         XCOM-OV  codep:0x83dd parp:0xc326 size:0x0002 C-string:'XCOM_minus_OV'
// 1884:           XCOMM  codep:0x224c parp:0xc332 size:0x0006 C-string:'XCOMM'
// 1885:           #>PRO  codep:0x224c parp:0xc342 size:0x0006 C-string:'_n__gt_PRO'
// 1886:          REPAIR  codep:0x1ab5 parp:0xc353 size:0x0014 C-string:'REPAIR'
// 1887:         REPAIR-  codep:0x83dd parp:0xc373 size:0x0002 C-string:'REPAIR_minus_'
// 1888:         DO-REPA  codep:0x224c parp:0xc381 size:0x0010 C-string:'DO_minus_REPA'
// 1889:         ?SHIP-R  codep:0x224c parp:0xc39d size:0x0026 C-string:'_ask_SHIP_minus_R'
// 1890:         MREPAIR  codep:0x224c parp:0xc3cf size:0x0020 C-string:'MREPAIR'
// 1891:           BARTE  codep:0x1ab5 parp:0xc3f9 size:0x0014 C-string:'BARTE'
// 1892:         BARTER-  codep:0x83dd parp:0xc419 size:0x0002 C-string:'BARTER_minus_'
// 1893:         DOENTER  codep:0x224c parp:0xc427 size:0x0008 C-string:'DOENTER'
// 1894:          DOOPEN  codep:0x224c parp:0xc43a size:0x0008 C-string:'DOOPEN'
// 1895:         DOBARTE  codep:0x224c parp:0xc44e size:0x0008 C-string:'DOBARTE'
// 1896:         !PFLAGS  codep:0x224c parp:0xc462 size:0x0008 C-string:'_ex_PFLAGS'
// 1897:             L>P  codep:0x224c parp:0xc472 size:0x0008 C-string:'L_gt_P'
// 1898:             MAR  codep:0x1ab5 parp:0xc482 size:0x0014 C-string:'MAR'
// 1899:           MARKE  codep:0x83dd parp:0xc4a0 size:0x0002 C-string:'MARKE'
// 1900:           TRADE  codep:0x224c parp:0xc4ac size:0x0008 C-string:'TRADE'
// 1901:        SITE-VOC  codep:0x1ab5 parp:0xc4c1 size:0x0014 C-string:'SITE_minus_VOC'
// 1902:         SITE-OV  codep:0x83dd parp:0xc4e1 size:0x0002 C-string:'SITE_minus_OV'
// 1903:         (.MERC)  codep:0x224c parp:0xc4ef size:0x0008 C-string:'_ro__dot_MERC_rc_'
// 1904:       (GETSITE)  codep:0x224c parp:0xc505 size:0x000a C-string:'_ro_GETSITE_rc_'
// 1905:        FLUX-VOC  codep:0x1ab5 parp:0xc51c size:0x0014 C-string:'FLUX_minus_VOC'
// 1906:         FLUX-OV  codep:0x83dd parp:0xc53c size:0x0002 C-string:'FLUX_minus_OV'
// 1907:           OVFLU  codep:0x224c parp:0xc548 size:0x0006 C-string:'OVFLU'
// 1908:           JUMPF  codep:0x224c parp:0xc558 size:0x0006 C-string:'JUMPF'
// 1909:       DPART-VOC  codep:0x1ab5 parp:0xc56c size:0x0014 C-string:'DPART_minus_VOC'
// 1910:        DPART-OV  codep:0x83dd parp:0xc58d size:0x0002 C-string:'DPART_minus_OV'
// 1911:          DEPART  codep:0x224c parp:0xc59a size:0x0006 C-string:'DEPART'
// 1912:         CLOUD-V  codep:0x1ab5 parp:0xc5ac size:0x0014 C-string:'CLOUD_minus_V'
// 1913:         CLOUD-O  codep:0x83dd parp:0xc5cc size:0x0002 C-string:'CLOUD_minus_O'
// 1914:         DO-CLOU  codep:0x224c parp:0xc5da size:0x0006 C-string:'DO_minus_CLOU'
// 1915:         NAV-VOC  codep:0x1ab5 parp:0xc5ec size:0x0014 C-string:'NAV_minus_VOC'
// 1916:           NAV-O  codep:0x83dd parp:0xc60a size:0x0002 C-string:'NAV_minus_O'
// 1917:           OV/(D  codep:0x224c parp:0xc616 size:0x0006 C-string:'OV_slash__ro_D'
// 1918:           OV/(U  codep:0x224c parp:0xc626 size:0x0006 C-string:'OV_slash__ro_U'
// 1919:           OV-SH  codep:0x224c parp:0xc636 size:0x000e C-string:'OV_minus_SH'
// 1920:           OV-AR  codep:0x224c parp:0xc64e size:0x000e C-string:'OV_minus_AR'
// 1921:         DAMAGE-  codep:0x1ab5 parp:0xc668 size:0x0014 C-string:'DAMAGE_minus_'
// 1922:         DAMAGE-  codep:0x83dd parp:0xc688 size:0x0002 C-string:'DAMAGE_minus_'
// 1923:           DO-DA  codep:0x224c parp:0xc694 size:0x0008 C-string:'DO_minus_DA'
// 1924:            >DAM  codep:0x224c parp:0xc6a5 size:0x000c C-string:'_gt_DAM'
// 1925:            .AUX  codep:0x224c parp:0xc6ba size:0x0006 C-string:'_dot_AUX'
// 1926:           CREWD  codep:0x224c parp:0xc6ca size:0x0006 C-string:'CREWD'
// 1927:            BLST  codep:0x224c parp:0xc6d9 size:0x0006 C-string:'BLST'
// 1928:           #MISS  codep:0x1d29 parp:0xc6e9 size:0x0002 C-string:'_n_MISS'
// 1929:            WEAP  codep:0x1ab5 parp:0xc6f4 size:0x0014 C-string:'WEAP'
// 1930:             WEA  codep:0x83dd parp:0xc710 size:0x0002 C-string:'WEA'
// 1931:             TAR  codep:0x224c parp:0xc71a size:0x0006 C-string:'TAR'
// 1932:             DTA  codep:0x224c parp:0xc728 size:0x0008 C-string:'DTA'
// 1933:             DNL  codep:0x224c parp:0xc738 size:0x0006 C-string:'DNL'
// 1934:             GNL  codep:0x224c parp:0xc746 size:0x0006 C-string:'GNL'
// 1935:             DNL  codep:0x224c parp:0xc754 size:0x0008 C-string:'DNL'
// 1936:         EYE-VOC  codep:0x1ab5 parp:0xc768 size:0x0014 C-string:'EYE_minus_VOC'
// 1937:           EYE-O  codep:0x83dd parp:0xc786 size:0x0002 C-string:'EYE_minus_O'
// 1938:              AI  codep:0x224c parp:0xc78f size:0x0008 C-string:'AI'
// 1939:          COMBAU  codep:0x1ab5 parp:0xc7a2 size:0x0014 C-string:'COMBAU'
// 1940:          COMBAU  codep:0x83dd parp:0xc7c1 size:0x0002 C-string:'COMBAU'
// 1941:          CSCALE  codep:0x224c parp:0xc7ce size:0x0006 C-string:'CSCALE'
// 1942:             @NF  codep:0x224c parp:0xc7dc size:0x0006 C-string:'_at_NF'
// 1943:      COMBAT-VOC  codep:0x1ab5 parp:0xc7f1 size:0x0014 C-string:'COMBAT_minus_VOC'
// 1944:        COMBAT-O  codep:0x83dd parp:0xc812 size:0x0002 C-string:'COMBAT_minus_O'
// 1945:            (WAR  codep:0x224c parp:0xc81d size:0x0008 C-string:'_ro_WAR'
// 1946:            (COM  codep:0x224c parp:0xc82e size:0x0006 C-string:'_ro_COM'
// 1947:             C&C  codep:0x224c parp:0xc83c size:0x0008 C-string:'C_and_C'
// 1948:              ?J  codep:0x224c parp:0xc84b size:0x0006 C-string:'_ask_J'
// 1949:            ?JMP  codep:0x224c parp:0xc85a size:0x0008 C-string:'_ask_JMP'
// 1950:            COMB  codep:0x224c parp:0xc86b size:0x0002 C-string:'COMB'
// 1951:      UNK_0xc86f  codep:0xc82e parp:0xc86f size:0x0004 C-string:'UNK_0xc86f'
// 1952:             WAR  codep:0x224c parp:0xc87b size:0x0008 C-string:'WAR'
// 1953:            END-  codep:0x1ab5 parp:0xc88c size:0x0014 C-string:'END_minus_'
// 1954:            ENDI  codep:0x83dd parp:0xc8a9 size:0x0002 C-string:'ENDI'
// 1955:            HALL  codep:0x224c parp:0xc8b4 size:0x0006 C-string:'HALL'
// 1956:            ?FRE  codep:0x224c parp:0xc8c3 size:0x0006 C-string:'_ask_FRE'
// 1957:             DHL  codep:0x224c parp:0xc8d1 size:0x0006 C-string:'DHL'
// 1958:            DUHL  codep:0x224c parp:0xc8e0 size:0x0008 C-string:'DUHL'
// 1959:            BOLT  codep:0x224c parp:0xc8f1 size:0x0006 C-string:'BOLT'
// 1960:            IUHL  codep:0x224c parp:0xc900 size:0x0006 C-string:'IUHL'
// 1961:       HMISC-VOC  codep:0x1ab5 parp:0xc914 size:0x0014 C-string:'HMISC_minus_VOC'
// 1962:         HMISC-O  codep:0x83dd parp:0xc934 size:0x0002 C-string:'HMISC_minus_O'
// 1963:             UFM  codep:0x224c parp:0xc93e size:0x0006 C-string:'UFM'
// 1964:             USM  codep:0x224c parp:0xc94c size:0x0006 C-string:'USM'
// 1965:             NFM  codep:0x224c parp:0xc95a size:0x0006 C-string:'NFM'
// 1966:             NSM  codep:0x224c parp:0xc968 size:0x0006 C-string:'NSM'
// 1967:             .EX  codep:0x224c parp:0xc976 size:0x0006 C-string:'_dot_EX'
// 1968:            DMSG  codep:0x224c parp:0xc985 size:0x0006 C-string:'DMSG'
// 1969:            D-UP  codep:0x224c parp:0xc994 size:0x0006 C-string:'D_minus_UP'
// 1970:            ORB>  codep:0x224c parp:0xc9a3 size:0x0006 C-string:'ORB_gt_'
// 1971:            >ORB  codep:0x224c parp:0xc9b2 size:0x0006 C-string:'_gt_ORB'
// 1972:            OSET  codep:0x224c parp:0xc9c1 size:0x0006 C-string:'OSET'
// 1973:           ORBUP  codep:0x224c parp:0xc9d1 size:0x0008 C-string:'ORBUP'
// 1974:         TRAK-EN  codep:0x224c parp:0xc9e5 size:0x0006 C-string:'TRAK_minus_EN'
// 1975:      UNK_0xc9ed  codep:0x0bae parp:0xc9ed size:0x0016 C-string:'UNK_0xc9ed'
// 1976:           !'EXT  codep:0x224c parp:0xca0d size:0x0006 C-string:'_ex__i_EXT'
// 1977:          (CTXT)  codep:0x224c parp:0xca1e size:0x0006 C-string:'_ro_CTXT_rc_'
// 1978:         CONTEXT  codep:0x224c parp:0xca30 size:0x0008 C-string:'CONTEXT'
// 1979:         +A-VESS  codep:0x224c parp:0xca44 size:0x0006 C-string:'_plus_A_minus_VESS'
// 1980:         MTRAK-E  codep:0x224c parp:0xca56 size:0x0008 C-string:'MTRAK_minus_E'
// 1981:         SHPMOV-  codep:0x1ab5 parp:0xca6a size:0x0014 C-string:'SHPMOV_minus_'
// 1982:           HYPER  codep:0x83dd parp:0xca88 size:0x0002 C-string:'HYPER'
// 1983:             FLY  codep:0x224c parp:0xca92 size:0x0008 C-string:'FLY'
// 1984:             MAN  codep:0x224c parp:0xcaa2 size:0x0030 C-string:'MAN'
// 1985:             .AS  codep:0x224c parp:0xcada size:0x0006 C-string:'_dot_AS'
// 1986:          JMPSHP  codep:0x224c parp:0xcaeb size:0x0006 C-string:'JMPSHP'
// 1987:          UNNEST  codep:0x224c parp:0xcafc size:0x0006 C-string:'UNNEST'
// 1988:           >NEST  codep:0x224c parp:0xcb0c size:0x0006 C-string:'_gt_NEST'
// 1989:          GET-HA  codep:0x224c parp:0xcb1d size:0x0006 C-string:'GET_minus_HA'
// 1990:          OV.MVS  codep:0x224c parp:0xcb2e size:0x0006 C-string:'OV_dot_MVS'
// 1991:          S>PORT  codep:0x224c parp:0xcb3f size:0x0008 C-string:'S_gt_PORT'
// 1992:           USE-E  codep:0x224c parp:0xcb51 size:0x0006 C-string:'USE_minus_E'
// 1993:          MUSE-E  codep:0x224c parp:0xcb62 size:0x0008 C-string:'MUSE_minus_E'
// 1994:             ACR  codep:0x1ab5 parp:0xcb72 size:0x0014 C-string:'ACR'
// 1995:             ACR  codep:0x83dd parp:0xcb8e size:0x0002 C-string:'ACR'
// 1996:             U-A  codep:0x224c parp:0xcb98 size:0x0006 C-string:'U_minus_A'
// 1997:            PFIL  codep:0x1ab5 parp:0xcba7 size:0x0014 C-string:'PFIL'
// 1998:            PFIL  codep:0x83dd parp:0xcbc4 size:0x0002 C-string:'PFIL'
// 1999:            U-PF  codep:0x224c parp:0xcbcf size:0x0006 C-string:'U_minus_PF'
// 2000:         SHIP-GR  codep:0x1ab5 parp:0xcbe1 size:0x0014 C-string:'SHIP_minus_GR'
// 2001:         SHIP-GR  codep:0x83dd parp:0xcc01 size:0x0002 C-string:'SHIP_minus_GR'
// 2002:         OV.MASS  codep:0x224c parp:0xcc0f size:0x0006 C-string:'OV_dot_MASS'
// 2003:          OV.ACC  codep:0x224c parp:0xcc20 size:0x0006 C-string:'OV_dot_ACC'
// 2004:         OV.PODS  codep:0x224c parp:0xcc32 size:0x0006 C-string:'OV_dot_PODS'
// 2005:         OV.SHIP  codep:0x224c parp:0xcc44 size:0x0006 C-string:'OV_dot_SHIP'
// 2006:         OVBALAN  codep:0x224c parp:0xcc56 size:0x0006 C-string:'OVBALAN'
// 2007:         OV.CONF  codep:0x224c parp:0xcc68 size:0x0006 C-string:'OV_dot_CONF'
// 2008:         CONFIG-  codep:0x1ab5 parp:0xcc7a size:0x0014 C-string:'CONFIG_minus_'
// 2009:       CONFIG-OV  codep:0x83dd parp:0xcc9c size:0x0002 C-string:'CONFIG_minus_OV'
// 2010:            U-SC  codep:0x224c parp:0xcca7 size:0x0006 C-string:'U_minus_SC'
// 2011:          TD-VOC  codep:0x1ab5 parp:0xccb8 size:0x0014 C-string:'TD_minus_VOC'
// 2012:           TD-OV  codep:0x83dd parp:0xccd6 size:0x0002 C-string:'TD_minus_OV'
// 2013:            U-TD  codep:0x224c parp:0xcce1 size:0x0006 C-string:'U_minus_TD'
// 2014:            TOSS  codep:0x224c parp:0xccf0 size:0x0006 C-string:'TOSS'
// 2015:          KEY-EL  codep:0x224c parp:0xcd01 size:0x0006 C-string:'KEY_minus_EL'
// 2016:          OP-VOC  codep:0x1ab5 parp:0xcd12 size:0x0014 C-string:'OP_minus_VOC'
// 2017:           OP-OV  codep:0x83dd parp:0xcd30 size:0x00df C-string:'OP_minus_OV'
// 2018:      UNK_0xce11  codep:0x3858 parp:0xce11 size:0x05da C-string:'UNK_0xce11'
// 2019:      UNK_0xd3ed  codep:0x0000 parp:0xd3ed size:0x05d9 C-string:'UNK_0xd3ed'
// 2020:      UNK_0xd9c8  codep:0x0000 parp:0xd9c8 size:0x035a C-string:'UNK_0xd9c8'
// 2021:      UNK_0xdd24  codep:0x0000 parp:0xdd24 size:0x007b C-string:'UNK_0xdd24'
// 2022:      UNK_0xdda1  codep:0x0000 parp:0xdda1 size:0x01cc C-string:'UNK_0xdda1'
// 2023:      UNK_0xdf6f  codep:0x0000 parp:0xdf6f size:0x0015 C-string:'UNK_0xdf6f'
// 2024:      UNK_0xdf86  codep:0x0000 parp:0xdf86 size:0x05e7 C-string:'UNK_0xdf86'
// 2025:      UNK_0xe56f  codep:0x3b87 parp:0xe56f size:0x0655 C-string:'UNK_0xe56f'
// 2026:      UNK_0xebc6  codep:0x7420 parp:0xebc6 size:0x0017 C-string:'UNK_0xebc6'
// 2027:      UNK_0xebdf  codep:0x224c parp:0xebdf size:0x006a C-string:'UNK_0xebdf'
// 2028:      UNK_0xec4b  codep:0x1d29 parp:0xec4b size:0x0004 C-string:'UNK_0xec4b'
// 2029:      UNK_0xec51  codep:0x1d29 parp:0xec51 size:0x0002 C-string:'UNK_0xec51'
// 2030:      UNK_0xec55  codep:0x1d29 parp:0xec55 size:0x0002 C-string:'UNK_0xec55'
// 2031:      UNK_0xec59  codep:0x1d29 parp:0xec59 size:0x0002 C-string:'UNK_0xec59'
// 2032:      UNK_0xec5d  codep:0x1d29 parp:0xec5d size:0x0002 C-string:'UNK_0xec5d'
// 2033:      UNK_0xec61  codep:0x1d29 parp:0xec61 size:0x0002 C-string:'UNK_0xec61'
// 2034:      UNK_0xec65  codep:0x224c parp:0xec65 size:0x0016 C-string:'UNK_0xec65'
// 2035:      UNK_0xec7d  codep:0x1d29 parp:0xec7d size:0x0004 C-string:'UNK_0xec7d'
// 2036:      UNK_0xec83  codep:0x224c parp:0xec83 size:0x0014 C-string:'UNK_0xec83'
// 2037:      UNK_0xec99  codep:0x224c parp:0xec99 size:0x0006 C-string:'UNK_0xec99'
// 2038:      UNK_0xeca1  codep:0x224c parp:0xeca1 size:0x000c C-string:'UNK_0xeca1'
// 2039:      UNK_0xecaf  codep:0x224c parp:0xecaf size:0x000c C-string:'UNK_0xecaf'
// 2040:      UNK_0xecbd  codep:0x224c parp:0xecbd size:0x0036 C-string:'UNK_0xecbd'
// 2041:      UNK_0xecf5  codep:0x224c parp:0xecf5 size:0x0066 C-string:'UNK_0xecf5'
// 2042:      UNK_0xed5d  codep:0x1d29 parp:0xed5d size:0x003c C-string:'UNK_0xed5d'
// 2043:      UNK_0xed9b  codep:0x1d29 parp:0xed9b size:0x0002 C-string:'UNK_0xed9b'
// 2044:      UNK_0xed9f  codep:0x1d29 parp:0xed9f size:0x0002 C-string:'UNK_0xed9f'
// 2045:      UNK_0xeda3  codep:0x224c parp:0xeda3 size:0x0010 C-string:'UNK_0xeda3'
// 2046:      UNK_0xedb5  codep:0x224c parp:0xedb5 size:0x006e C-string:'UNK_0xedb5'
// 2047:      UNK_0xee25  codep:0x224c parp:0xee25 size:0x0018 C-string:'UNK_0xee25'
// 2048:      UNK_0xee3f  codep:0x224c parp:0xee3f size:0x007c C-string:'UNK_0xee3f'
// 2049:      UNK_0xeebd  codep:0x224c parp:0xeebd size:0x0024 C-string:'UNK_0xeebd'
// 2050:      UNK_0xeee3  codep:0x224c parp:0xeee3 size:0x001a C-string:'UNK_0xeee3'
// 2051:      UNK_0xeeff  codep:0x224c parp:0xeeff size:0x000c C-string:'UNK_0xeeff'
// 2052:      UNK_0xef0d  codep:0x224c parp:0xef0d size:0x0006 C-string:'UNK_0xef0d'
// 2053:      UNK_0xef15  codep:0x224c parp:0xef15 size:0x0006 C-string:'UNK_0xef15'
// 2054:      UNK_0xef1d  codep:0x224c parp:0xef1d size:0x0006 C-string:'UNK_0xef1d'
// 2055:      UNK_0xef25  codep:0x224c parp:0xef25 size:0x006c C-string:'UNK_0xef25'
// 2056:      UNK_0xef93  codep:0x224c parp:0xef93 size:0x003f C-string:'UNK_0xef93'
// 2057:      UNK_0xefd4  codep:0x224c parp:0xefd4 size:0x00a2 C-string:'UNK_0xefd4'
// 2058:      UNK_0xf078  codep:0x224c parp:0xf078 size:0x001e C-string:'UNK_0xf078'
// 2059:      UNK_0xf098  codep:0x224c parp:0xf098 size:0x0018 C-string:'UNK_0xf098'
// 2060:      UNK_0xf0b2  codep:0x224c parp:0xf0b2 size:0x0016 C-string:'UNK_0xf0b2'
// 2061:      UNK_0xf0ca  codep:0x224c parp:0xf0ca size:0x0032 C-string:'UNK_0xf0ca'
// 2062:      UNK_0xf0fe  codep:0x224c parp:0xf0fe size:0x0030 C-string:'UNK_0xf0fe'
// 2063:      UNK_0xf130  codep:0x6338 parp:0xf130 size:0x0014 C-string:'UNK_0xf130'
// 2064:      UNK_0xf146  codep:0x224c parp:0xf146 size:0xffffffff C-string:'UNK_0xf146'
// 2065:      UNK_0xf147  codep:0xc822 parp:0xf147 size:0x0010 C-string:'UNK_0xf147'
// 2066:      UNK_0xf159  codep:0x606d parp:0xf159 size:0x0009 C-string:'UNK_0xf159'
// 2067:      UNK_0xf164  codep:0x224c parp:0xf164 size:0x000e C-string:'UNK_0xf164'
// 2068:      UNK_0xf174  codep:0x2214 parp:0xf174 size:0x0002 C-string:'UNK_0xf174'
// 2069:      UNK_0xf178  codep:0x2214 parp:0xf178 size:0x0002 C-string:'UNK_0xf178'
// 2070:      UNK_0xf17c  codep:0x2214 parp:0xf17c size:0x0002 C-string:'UNK_0xf17c'
// 2071:      UNK_0xf180  codep:0x2214 parp:0xf180 size:0x0002 C-string:'UNK_0xf180'
// 2072:      UNK_0xf184  codep:0x224c parp:0xf184 size:0x0030 C-string:'UNK_0xf184'
// 2073:      UNK_0xf1b6  codep:0x224c parp:0xf1b6 size:0x00ad C-string:'UNK_0xf1b6'
// 2074:      UNK_0xf265  codep:0x224c parp:0xf265 size:0x0030 C-string:'UNK_0xf265'
// 2075:      UNK_0xf297  codep:0x224c parp:0xf297 size:0x0014 C-string:'UNK_0xf297'
// 2076:      UNK_0xf2ad  codep:0x224c parp:0xf2ad size:0x0089 C-string:'UNK_0xf2ad'
// 2077:      UNK_0xf338  codep:0x224c parp:0xf338 size:0x00bf C-string:'UNK_0xf338'
// 2078:      UNK_0xf3f9  codep:0x224c parp:0xf3f9 size:0x0010 C-string:'UNK_0xf3f9'
// 2079:      UNK_0xf40b  codep:0x224c parp:0xf40b size:0x000c C-string:'UNK_0xf40b'
// 2080:      UNK_0xf419  codep:0x0e7f parp:0xf419 size:0x0016 C-string:'UNK_0xf419'
// 2081:      UNK_0xf431  codep:0x224c parp:0xf431 size:0x000e C-string:'UNK_0xf431'
// 2082:      UNK_0xf441  codep:0x224c parp:0xf441 size:0x001c C-string:'UNK_0xf441'
// 2083:      UNK_0xf45f  codep:0x224c parp:0xf45f size:0x0044 C-string:'UNK_0xf45f'
// 2084:      UNK_0xf4a5  codep:0x224c parp:0xf4a5 size:0x0056 C-string:'UNK_0xf4a5'
// 2085:          DO-EYE  codep:0x224c parp:0xf506 size:0x0507 C-string:'DO_minus_EYE'
// 2086:      UNK_0xfa0f  codep:0x0000 parp:0xfa0f size:0x0003 C-string:'UNK_0xfa0f'
// 2087:      UNK_0xfa14  codep:0x0000 parp:0xfa14 size:0x00d7 C-string:'UNK_0xfa14'
// 2088:      UNK_0xfaed  codep:0x0000 parp:0xfaed size:0x0013 C-string:'UNK_0xfaed'
// 2089:      UNK_0xfb02  codep:0x0000 parp:0xfb02 size:0x021e C-string:'UNK_0xfb02'
// 2090:      UNK_0xfd22  codep:0x0000 parp:0xfd22 size:0x000c C-string:'UNK_0xfd22'
// 2091:      UNK_0xfd30  codep:0x0000 parp:0xfd30 size:0x0017 C-string:'UNK_0xfd30'
// 2092:      UNK_0xfd49  codep:0x0000 parp:0xfd49 size:0x0009 C-string:'UNK_0xfd49'
// 2093:      UNK_0xfd54  codep:0x0000 parp:0xfd54 size:0xfffff80c C-string:'UNK_0xfd54'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char _n_MISS[2] = {0x00, 0x00}; // #MISS
unsigned char UNK_0xec4b[4] = {0x56, 0x3a, 0x20, 0xae}; // UNK_0xec4b
unsigned char UNK_0xec51[2] = {0x3a, 0x20}; // UNK_0xec51
unsigned char UNK_0xec55[2] = {0x3a, 0x20}; // UNK_0xec55
unsigned char UNK_0xec59[2] = {0x3a, 0x20}; // UNK_0xec59
unsigned char UNK_0xec5d[2] = {0x3a, 0x20}; // UNK_0xec5d
unsigned char UNK_0xec61[2] = {0x3a, 0x20}; // UNK_0xec61
unsigned char UNK_0xec7d[4] = {0x56, 0x3a, 0x20, 0x66}; // UNK_0xec7d
unsigned char UNK_0xed5d[60] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x53, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x20, 0x45, 0x59, 0x45, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x56, 0x52, 0x41, 0x28, 0x72, 0x66, 0x67, 0x31, 0x34, 0x61, 0x70, 0x72, 0x38, 0x38, 0x29}; // UNK_0xed5d
unsigned char UNK_0xed9b[2] = {0x3a, 0x20}; // UNK_0xed9b
unsigned char UNK_0xed9f[2] = {0x3a, 0x20}; // UNK_0xed9f

const unsigned short int cc_UNK_0xf174 = 0x0040; // UNK_0xf174
const unsigned short int cc_UNK_0xf178 = 0x003e; // UNK_0xf178
const unsigned short int cc_UNK_0xf17c = 0x0009; // UNK_0xf17c
const unsigned short int cc_UNK_0xf180 = 0x0008; // UNK_0xf180


// 0xebc2: db 0x9b 0x00 '  '

// ================================================
// 0xebc4: WORD 'UNK_0xebc6' codep=0x7420 parp=0xebc6
// ================================================
// 0xebc6: db 0x14 0x43 0x02 0x20 0x74 0x14 0x1a 0x01 0x20 0x74 0x14 0x30 0x02 0x4c 0x22 0x92 0x0c 0x9f 0x3b 0xf5 0x12 0x90 0x16 ' C  t    t 0 L"   ;    '

// ================================================
// 0xebdd: WORD 'UNK_0xebdf' codep=0x224c parp=0xebdf
// ================================================

void UNK_0xebdf() // UNK_0xebdf
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
}

// 0xebe5: db 0x4c 0x22 0x5d 0x17 0x36 0x00 0x5d 0x17 0x6b 0xb7 0xd9 0x84 0x32 0x62 0xae 0x0b 0x07 0x13 0xf5 0x12 0x90 0x16 0x4c 0x22 0xd2 0x9f 0x07 0x3f 0x24 0x50 0x52 0x45 0x53 0x45 0x4e 0x43 0x45 0x20 0x4f 0x46 0x20 0x55 0x48 0x4c 0x20 0x57 0x45 0x41 0x50 'L"] 6 ] k   2b        L"   ?$PRESENCE OF UHL WEAP'
// 0xec16: dec    di
// 0xec17: dec    si
// 0xec18: and    [bx+di+53],cl
// 0xec1b: and    [bx+si+52],dl
// 0xec1e: inc    bp
// 0xec1f: push   si
// 0xec20: inc    bp
// 0xec21: dec    si
// 0xec22: push   sp
// 0xec23: dec    cx
// 0xec24: dec    si
// 0xec25: inc    di
// 0xec26: db     F1
// 0xec27: lahf   
// 0xec28: pop    es
// 0xec29: aas    
// 0xec2a: sbb    cl,[bx+55]
// 0xec2d: push   dx
// 0xec2e: and    [di+4E],al
// 0xec31: push   sp
// 0xec32: push   dx
// 0xec33: pop    cx
// 0xec34: and    [bx+di+4E],cl
// 0xec37: push   sp
// 0xec38: dec    di
// 0xec39: and    [si+48],dl
// 0xec3c: inc    bp
// 0xec3d: and    [bx+di+4E],al
// 0xec40: dec    di
// 0xec41: dec    bp
// 0xec42: inc    cx
// 0xec43: dec    sp
// 0xec44: pop    cx
// 0xec45: db     F1
// 0xec46: lahf   
// 0xec47: nop    
// 0xec48: push   ss

// ================================================
// 0xec49: WORD 'UNK_0xec4b' codep=0x1d29 parp=0xec4b
// ================================================
// 0xec4b: db 0x56 0x3a 0x20 0xae 'V:  '

// ================================================
// 0xec4f: WORD 'UNK_0xec51' codep=0x1d29 parp=0xec51
// ================================================
// 0xec51: db 0x3a 0x20 ': '

// ================================================
// 0xec53: WORD 'UNK_0xec55' codep=0x1d29 parp=0xec55
// ================================================
// 0xec55: db 0x3a 0x20 ': '

// ================================================
// 0xec57: WORD 'UNK_0xec59' codep=0x1d29 parp=0xec59
// ================================================
// 0xec59: db 0x3a 0x20 ': '

// ================================================
// 0xec5b: WORD 'UNK_0xec5d' codep=0x1d29 parp=0xec5d
// ================================================
// 0xec5d: db 0x3a 0x20 ': '

// ================================================
// 0xec5f: WORD 'UNK_0xec61' codep=0x1d29 parp=0xec61
// ================================================
// 0xec61: db 0x3a 0x20 ': '

// ================================================
// 0xec63: WORD 'UNK_0xec65' codep=0x224c parp=0xec65
// ================================================

void UNK_0xec65() // UNK_0xec65
{
  Push(pp_UNK_0xec51); // UNK_0xec51
  _099(); // 099
  Push(pp_UNK_0xec55); // UNK_0xec55
  _099(); // 099
  Push(pp_UNK_0xec59); // UNK_0xec59
  _099(); // 099
  Push(pp_UNK_0xec5d); // UNK_0xec5d
  _099(); // 099
  Push(pp_UNK_0xec61); // UNK_0xec61
  _099(); // 099
}


// ================================================
// 0xec7b: WORD 'UNK_0xec7d' codep=0x1d29 parp=0xec7d
// ================================================
// 0xec7d: db 0x56 0x3a 0x20 0x66 'V: f'

// ================================================
// 0xec81: WORD 'UNK_0xec83' codep=0x224c parp=0xec83
// ================================================

void UNK_0xec83() // UNK_0xec83
{
  Push(pp_UNK_0xec7d); // UNK_0xec7d
  _2_at_(); // 2@
  Push(0x0fa0); Pust(0x0000);
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
}


// ================================================
// 0xec97: WORD 'UNK_0xec99' codep=0x224c parp=0xec99
// ================================================

void UNK_0xec99() // UNK_0xec99
{
  Push(Pop()>>1); // 2/
  Push(Pop()*2); // 2*
}


// ================================================
// 0xec9f: WORD 'UNK_0xeca1' codep=0x224c parp=0xeca1
// ================================================

void UNK_0xeca1() // UNK_0xeca1
{
  Push(0); // 0
  Push(0x00a0);
  RRND(); // RRND
  UNK_0xec99(); // UNK_0xec99
}


// ================================================
// 0xecad: WORD 'UNK_0xecaf' codep=0x224c parp=0xecaf
// ================================================

void UNK_0xecaf() // UNK_0xecaf
{
  Push(0); // 0
  Push(0x00c9);
  RRND(); // RRND
  UNK_0xec99(); // UNK_0xec99
}


// ================================================
// 0xecbb: WORD 'UNK_0xecbd' codep=0x224c parp=0xecbd
// ================================================

void UNK_0xecbd() // UNK_0xecbd
{
  UNK_0xeca1(); // UNK_0xeca1
  Push(0x008c);
  MIN(); // MIN
  UNK_0xecaf(); // UNK_0xecaf
  Push(0x0014);
  MAX(); // MAX
  _2DUP(); // 2DUP
  Push(2); // 2
  Push(0x0015);
  RRND(); // RRND
  UNK_0xec99(); // UNK_0xec99
  _minus_(); // -
  SWAP(); // SWAP
  Push(2); // 2
  Push(0x0015);
  RRND(); // RRND
  UNK_0xec99(); // UNK_0xec99
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  UNK_0xeca1(); // UNK_0xeca1
  UNK_0xecaf(); // UNK_0xecaf
  LCOPYBL(); // LCOPYBL
}


// ================================================
// 0xecf3: WORD 'UNK_0xecf5' codep=0x224c parp=0xecf5
// ================================================

void UNK_0xecf5() // UNK_0xecf5
{
  Push(0x03e8);
  TONE(); // TONE
  TIME(); // TIME
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(pp_SEED); // SEED
  _ex_(); // !
  YELLOW(); // YELLOW
  _ex_COLOR(); // !COLOR
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4715(); // UNK_0x4715
  UNK_0x4d43(); // UNK_0x4d43
  UNK_0x2047(); // UNK_0x2047
  UNK_0x5651(); // UNK_0x5651
  UNK_0x5247(); // UNK_0x5247
  UNK_0x2d22(); // UNK_0x2d22
  UNK_0x4e22(); // UNK_0x4e22
  UNK_0x2051(); // UNK_0x2051
  UNK_0x5548(); // UNK_0x5548
  UNK_0x4c47(); // UNK_0x4c47
  _dot_TTY(); // .TTY
  Push(0x1388);
  MS(); // MS
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x571b(); // UNK_0x571b
  UNK_0x5243(); // UNK_0x5243
  UNK_0x2052(); // UNK_0x2052
  UNK_0x4e47(); // UNK_0x4e47
  UNK_0x4949(); // UNK_0x4949
  UNK_0x4550(); // UNK_0x4550
  UNK_0x2055(); // UNK_0x2055
  UNK_0x4243(); // UNK_0x4243
  UNK_0x5551(); // UNK_0x5551
  UNK_0x2056(); // UNK_0x2056
  UNK_0x4f56(); // UNK_0x4f56
  UNK_0x2e30(); // UNK_0x2e30
  UNK_0x2030(); // UNK_0x2030
  _dot_TTY(); // .TTY
  BEEPON(); // BEEPON
  Push(0x1388);
  MS(); // MS
  BEEPOFF(); // BEEPOFF

  label1:
  UNK_0xecbd(); // UNK_0xecbd
  _ask_TERMINAL(); // ?TERMINAL
  if (Pop() == 0) goto label1;
  BYE(); // BYE
}


// ================================================
// 0xed5b: WORD 'UNK_0xed5d' codep=0x1d29 parp=0xed5d
// ================================================
// 0xed5d: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4f 0x53 0x48 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x45 0x59 0x45 0x20 0x20 0x20 0x20 0x20 0x4f 0x56 0x52 0x41 0x28 0x72 0x66 0x67 0x31 0x34 0x61 0x70 0x72 0x38 0x38 0x29 ':  ALLOT OSH                      \ EYE     OVRA(rfg14apr88)'

// ================================================
// 0xed99: WORD 'UNK_0xed9b' codep=0x1d29 parp=0xed9b
// ================================================
// 0xed9b: db 0x3a 0x20 ': '

// ================================================
// 0xed9d: WORD 'UNK_0xed9f' codep=0x1d29 parp=0xed9f
// ================================================
// 0xed9f: db 0x3a 0x20 ': '

// ================================================
// 0xeda1: WORD 'UNK_0xeda3' codep=0x224c parp=0xeda3
// ================================================

void UNK_0xeda3() // UNK_0xeda3
{
  Push(Pop() * Pop()); // *
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xedb3: WORD 'UNK_0xedb5' codep=0x224c parp=0xedb5
// ================================================

void UNK_0xedb5() // UNK_0xedb5
{
  _gt_R(); // >R
  Push(0x000a);
  Push(pp_UNK_0xed9f); // UNK_0xed9f
  Push(Read16(Pop())); // @
  RRND(); // RRND
  Push(h); // I
  Push(Pop()+1); // 1+
  C_ex_(); // C!
  Push(1); // 1
  Push(h); // I
  C_ex_(); // C!
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x0048);
  UNK_0xeda3(); // UNK_0xeda3
  Push(0xffdc);
  Push(0x0024);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffdc);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(h); // I
  Push(Pop()+2); // 2+
  _ex_(); // !
  Push(0x0078);
  UNK_0xeda3(); // UNK_0xeda3
  Push(0xffc4);
  Push(0x003c);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffc4);
  MAX(); // MAX
  Push(0x003b);
  MIN(); // MIN
  R_gt_(); // R>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _ex_(); // !
}


// ================================================
// 0xee23: WORD 'UNK_0xee25' codep=0x224c parp=0xee25
// ================================================

void UNK_0xee25() // UNK_0xee25
{
  Push(0x003c);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_UNK_0xed5d); // UNK_0xed5d
  Push(i); // I
  Push(Pop() + Pop()); // +
  UNK_0xedb5(); // UNK_0xedb5
  Push(cc__6); // 6
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff4

}


// ================================================
// 0xee3d: WORD 'UNK_0xee3f' codep=0x224c parp=0xee3f
// ================================================

void UNK_0xee3f() // UNK_0xee3f
{
  Push(pp_UNK_0xed5d); // UNK_0xed5d
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(h); // I
  C_at_(); // C@
  _slash_(); // /
  Push(0x0024);
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0047);
  MIN(); // MIN
  Push(h); // I
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(h); // I
  C_at_(); // C@
  _slash_(); // /
  Push(0x003c);
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0077);
  MIN(); // MIN
  LPLOT(); // LPLOT
  Push(pp_UNK_0xed9f); // UNK_0xed9f
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  Push(0x00c8);
  Push(Pop() + Pop()); // +
  RRND(); // RRND
  TONE(); // TONE
  Push(h); // I
  C_at_(); // C@
  Push(Pop()+1); // 1+
  DUP(); // DUP
  Push(h); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  R_gt_(); // R>
  UNK_0xedb5(); // UNK_0xedb5
  return;

  label1:
  R_gt_(); // R>
  C_ex_(); // C!
}


// ================================================
// 0xeebb: WORD 'UNK_0xeebd' codep=0x224c parp=0xeebd
// ================================================

void UNK_0xeebd() // UNK_0xeebd
{
  Push(pp_UNK_0xed9b); // UNK_0xed9b
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  DARK(); // DARK

  label1:
  RNDCLR(); // RNDCLR
  Push(0x003c);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xee3f(); // UNK_0xee3f
  Push(cc__6); // 6
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff8

  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xeee1: WORD 'UNK_0xeee3' codep=0x224c parp=0xeee3
// ================================================

void UNK_0xeee3() // UNK_0xeee3
{
  _gt_MAINVI(); // >MAINVI
  Push(0x0014);
  Push(pp_UNK_0xed9f); // UNK_0xed9f
  _ex_(); // !
  Push(0); // 0
  Push(cc__3); // 3
  RRND(); // RRND
  Push(pp_UNK_0xed9b); // UNK_0xed9b
  _ex_(); // !
  UNK_0xeebd(); // UNK_0xeebd
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xeefd: WORD 'UNK_0xeeff' codep=0x224c parp=0xeeff
// ================================================

void UNK_0xeeff() // UNK_0xeeff
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  UNK_0xeee3(); // UNK_0xeee3
  _ex_COLOR(); // !COLOR
  _dot_TTY(); // .TTY
}


// ================================================
// 0xef0b: WORD 'UNK_0xef0d' codep=0x224c parp=0xef0d
// ================================================

void UNK_0xef0d() // UNK_0xef0d
{
  Push(pp__minus_END); // -END
  Push(Read16(Pop())); // @
}


// ================================================
// 0xef13: WORD 'UNK_0xef15' codep=0x224c parp=0xef15
// ================================================

void UNK_0xef15() // UNK_0xef15
{
  Push(pp__minus_END); // -END
  _ex_(); // !
}


// ================================================
// 0xef1b: WORD 'UNK_0xef1d' codep=0x224c parp=0xef1d
// ================================================

void UNK_0xef1d() // UNK_0xef1d
{
  UNK_0xef0d(); // UNK_0xef0d
  Push(0); // 0
}


// ================================================
// 0xef23: WORD 'UNK_0xef25' codep=0x224c parp=0xef25
// ================================================

void UNK_0xef25() // UNK_0xef25
{
  UNK_0xef0d(); // UNK_0xef0d
  _gt_R(); // >R
  UNK_0xef15(); // UNK_0xef15
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  UNK_0xef1d(); // UNK_0xef1d
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG
  D_ex_(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  UNK_0xef1d(); // UNK_0xef1d
  D_minus_(); // D-
  NULL(); // NULL
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  UNK_0xef0d(); // UNK_0xef0d
  Push(0x000a);
  _slash_(); // /
  UNK_0xef15(); // UNK_0xef15
  UNK_0xebdf(); // UNK_0xebdf
  UNK_0xef0d(); // UNK_0xef0d
  UNK_0xebc6(); // UNK_0xebc6
  _plus__ex_(); // +!
  _star_STARSH(); // *STARSH
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
  Pop(); // DROP
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  UNK_0xef0d(); // UNK_0xef0d
  _minus_(); // -
  Push(0); // 0
  MAX(); // MAX
  INST_minus_QT(); // INST-QT
  _ex_(); // !
  Push(cc__4); // 4
  _star_CLOSE(); // *CLOSE
  R_gt_(); // R>
  UNK_0xef15(); // UNK_0xef15
}


// ================================================
// 0xef91: WORD 'UNK_0xef93' codep=0x224c parp=0xef93
// ================================================

void UNK_0xef93() // UNK_0xef93
{
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4325(); // UNK_0x4325
  UNK_0x4d51(); // UNK_0x4d51
  UNK_0x414f(); // UNK_0x414f
  _4TH_gt_DOS(); // 4TH>DOS
  UNK_0x5247(); // UNK_0x5247
  UNK_0x202e(); // UNK_0x202e
  UNK_0x4559(); // UNK_0x4559
  UNK_0x4122(); // UNK_0x4122
  UNK_0x4554(); // UNK_0x4554
  UNK_0x4f22(); // UNK_0x4f22
  UNK_0x4350(); // UNK_0x4350
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4743(); // UNK_0x4743
  UNK_0x4943(); // UNK_0x4943
  UNK_0x2050(); // UNK_0x2050
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x4f22(); // UNK_0x4f22
  UNK_0x5257(); // UNK_0x5257
  _dot_TTY(); // .TTY
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4f12(); // UNK_0x4f12
  UNK_0x4e59(); // UNK_0x4e59
  UNK_0x5422(); // UNK_0x5422
  Push(pp_UNK_0x4d4b); // UNK_0x4d4b
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4552(); // UNK_0x4552
  UNK_0x4954(); // UNK_0x4954
  UNK_0x4451(); // UNK_0x4451
  UNK_0xf130(); // UNK_0xf130
  UNK_0x90a1(); // UNK_0x90a1
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xefd2: WORD 'UNK_0xefd4' codep=0x224c parp=0xefd4
// ================================================
  UNK_0x0724(); // UNK_0x0724

void UNK_0xefd4() // UNK_0xefd4
{
  UNK_0x2341(); // UNK_0x2341
  UNK_0x4f45(); // UNK_0x4f45
  Push(pp_UNK_0x4d4f); // UNK_0x4d4f
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x4546(); // UNK_0x4546
  UNK_0x2c54(); // UNK_0x2c54
  UNK_0x4622(); // UNK_0x4622
  Push(pp_FONT_n_); // FONT#
  UNK_0x204f(); // UNK_0x204f
  UNK_0x5551(); // UNK_0x5551
  UNK_0x2054(); // UNK_0x2054
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x4c43(); // UNK_0x4c43
  UNK_0x535b(); // UNK_0x535b
  UNK_0x534b(); // UNK_0x534b
  UNK_0x4f22(); // UNK_0x4f22
  UNK_0x2048(); // UNK_0x2048
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0xf147(); // UNK_0xf147
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x2141(); // UNK_0x2141
  UNK_0x4f4e(); // UNK_0x4f4e
  UNK_0x4145(); // UNK_0x4145
  UNK_0x204e(); // UNK_0x204e
  UNK_0x5455(); // UNK_0x5455
  UNK_0x4c47(); // UNK_0x4c47
  UNK_0x414e(); // UNK_0x414e
  UNK_0x2054(); // UNK_0x2054
  UNK_0x4f48(); // UNK_0x4f48
  UNK_0x4d54(); // UNK_0x4d54
  UNK_0x5443(); // UNK_0x5443
  UNK_0x4f4b(); // UNK_0x4f4b
  UNK_0x5350(); // UNK_0x5350
  UNK_0x202e(); // UNK_0x202e
  UNK_0x4559(); // UNK_0x4559
  UNK_0x4822(); // UNK_0x4822
  UNK_0x5643(); // UNK_0x5643
  UNK_0xf147(); // UNK_0xf147
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x1f41(); // UNK_0x1f41
  UNK_0x4546(); // UNK_0x4546
  UNK_0x4556(); // UNK_0x4556
  UNK_0x4d54(); // UNK_0x4d54
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x4447(); // UNK_0x4447
  UNK_0x5422(); // UNK_0x5422
  UNK_0x414a(); // UNK_0x414a
  UNK_0x2056(); // UNK_0x2056
  UNK_0x4559(); // UNK_0x4559
  UNK_0x4822(); // UNK_0x4822
  UNK_0x5643(); // UNK_0x5643
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4f55(); // UNK_0x4f55
  UNK_0x454f(); // UNK_0x454f
  UNK_0x4f4a(); // UNK_0x4f4a
  UNK_0xf159(); // UNK_0xf159
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x1741(); // UNK_0x1741
  UNK_0x5256(); // UNK_0x5256
  UNK_0x5643(); // UNK_0x5643
  UNK_0x4c47(); // UNK_0x4c47
  UNK_0x454e(); // UNK_0x454e
  UNK_0x2046(); // UNK_0x2046
  UNK_0x4144(); // UNK_0x4144
  UNK_0x4b45(); // UNK_0x4b45
  UNK_0x4922(); // UNK_0x4922
  UNK_0x2050(); // UNK_0x2050
  UNK_0x4956(); // UNK_0x4956
  UNK_0x454f(); // UNK_0x454f
  UNK_0xf130(); // UNK_0xf130
  UNK_0xdda1(); // UNK_0xdda1
  UNK_0xc9ed(); // UNK_0xc9ed
  UNK_0xd3ed(); // UNK_0xd3ed
  Push(pp_WMSG); // WMSG
  UNK_0xf419(); // UNK_0xf419
  UNK_0xb303(); // UNK_0xb303
  UNK_0xce11(); // UNK_0xce11
  UNK_0x16ed(); // UNK_0x16ed
  UNK_0xdf6f(); // UNK_0xdf6f
  UNK_0x907b(); // UNK_0x907b
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf076: WORD 'UNK_0xf078' codep=0x224c parp=0xf078
// ================================================
  UNK_0xdd24(); // UNK_0xdd24

void UNK_0xf078() // UNK_0xf078
{
  UNK_0xebdf(); // UNK_0xebdf
  Push(0x09c4);
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  _slash_(); // /

  label1:
  Push(0xc6a5);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf096: WORD 'UNK_0xf098' codep=0x224c parp=0xf098
// ================================================

void UNK_0xf098() // UNK_0xf098
{
  Push(0x0020);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  RNDCLR(); // RNDCLR
  BFILL(); // BFILL
  V_gt_DISPL(); // V>DISPL
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf0b0: WORD 'UNK_0xf0b2' codep=0x224c parp=0xf0b2
// ================================================

void UNK_0xf0b2() // UNK_0xf0b2
{
  CTINIT(); // CTINIT
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xefd4(); // UNK_0xefd4
  goto label2;

  label1:
  UNK_0xef93(); // UNK_0xef93

  label2:
  _slash_STARD(); // /STARD
}


// ================================================
// 0xf0c8: WORD 'UNK_0xf0ca' codep=0x224c parp=0xf0ca
// ================================================

void UNK_0xf0ca() // UNK_0xf0ca
{
  Push(pp_UNK_0xed9b); // UNK_0xed9b
  _099(); // 099
  _gt_MAINVI(); // >MAINVI
  BEEPON(); // BEEPON
  Push(0x001e);
  Push(0x0168);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(cc__6); // 6
  _slash_(); // /
  Push(pp_UNK_0xed9f); // UNK_0xed9f
  _ex_(); // !
  UNK_0xeebd(); // UNK_0xeebd
  Push(cc__minus_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff0

  Push(0x00fa);
  MS(); // MS
  UNK_0xf098(); // UNK_0xf098
  _gt_DISPLA(); // >DISPLA
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf0fc: WORD 'UNK_0xf0fe' codep=0x224c parp=0xf0fe
// ================================================

void UNK_0xf0fe() // UNK_0xf0fe
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_PAST); // PAST
  _ex_(); // !
  INIT_minus_IC(); // INIT-IC
  _star_SECS(); // *SECS
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  UNK_0xf0ca(); // UNK_0xf0ca
  UNK_0xf078(); // UNK_0xf078
  Push(0x1388);
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  _slash_(); // /

  label1:
  UNK_0xef25(); // UNK_0xef25

// ================================================
// 0xf12e: WORD 'UNK_0xf130' codep=0x6338 parp=0xf130
// ================================================
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xecf5(); // UNK_0xecf5

  label2:
  Push(pp_FTRIG); // FTRIG
  ON(); // ON
  UNK_0xf0b2(); // UNK_0xf0b2
}


// ================================================
// 0xf144: WORD 'UNK_0xf146' codep=0x224c parp=0xf146
// ================================================

// ================================================
// 0xf145: WORD 'UNK_0xf147' codep=0xc822 parp=0xf147
// ================================================

void UNK_0xf146() // UNK_0xf146
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  _0_gt_(); // 0>
  if (Pop() == 0) goto label2;
  UNK_0xf0fe(); // UNK_0xf0fe

  label2:
  Push(pp_FTRIG); // FTRIG
  ON(); // ON

// ================================================
// 0xf157: WORD 'UNK_0xf159' codep=0x606d parp=0xf159
// ================================================
  return;

  label1:
  Push(pp_UNK_0xec61); // UNK_0xec61
  _099(); // 099
}


// ================================================
// 0xf162: WORD 'UNK_0xf164' codep=0x224c parp=0xf164
// ================================================

void UNK_0xf164() // UNK_0xf164
{
  XYSCAN(); // XYSCAN
  SWAP(); // SWAP
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0); // 0
}


// ================================================
// 0xf172: WORD 'UNK_0xf174' codep=0x2214 parp=0xf174
// ================================================
// 0xf174: db 0x40 0x00 '@ '

// ================================================
// 0xf176: WORD 'UNK_0xf178' codep=0x2214 parp=0xf178
// ================================================
// 0xf178: db 0x3e 0x00 '> '

// ================================================
// 0xf17a: WORD 'UNK_0xf17c' codep=0x2214 parp=0xf17c
// ================================================
// 0xf17c: db 0x09 0x00 '  '

// ================================================
// 0xf17e: WORD 'UNK_0xf180' codep=0x2214 parp=0xf180
// ================================================
// 0xf180: db 0x08 0x00 '  '

// ================================================
// 0xf182: WORD 'UNK_0xf184' codep=0x224c parp=0xf184
// ================================================

void UNK_0xf184() // UNK_0xf184
{
  _2DUP(); // 2DUP
  Push(cc_UNK_0xf17c); // UNK_0xf17c
  _minus_(); // -
  SWAP(); // SWAP
  Push(cc_UNK_0xf180); // UNK_0xf180
  _minus_(); // -
  SWAP(); // SWAP
  _2SWAP(); // 2SWAP
  Push(cc_UNK_0xf174); // UNK_0xf174
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc_UNK_0xf178); // UNK_0xf178
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  _ex_VISWIN(); // !VISWIN
}

// 0xf1a4: db 0x4c 0x22 0x5f 0xec 0x57 0x6d 0x5b 0xec 0x57 0x6d 0x0b 0x5e 0x57 0x6d 0x90 0x16 'L"_ Wm[ Wm ^Wm  '

// ================================================
// 0xf1b4: WORD 'UNK_0xf1b6' codep=0x224c parp=0xf1b6
// ================================================

void UNK_0xf1b6() // UNK_0xf1b6
{
  YELLOW(); // YELLOW
  _ex_COLOR(); // !COLOR
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x2003(); // UNK_0x2003
  UNK_0xeeff(); // UNK_0xeeff
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5728(); // UNK_0x5728
  UNK_0x5243(); // UNK_0x5243
  UNK_0x4950(); // UNK_0x4950
  UNK_0x4750(); // UNK_0x4750
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x4159(); // UNK_0x4159
  UNK_0x4e54(); // UNK_0x4e54
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x2049(); // UNK_0x2049
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x4159(); // UNK_0x4159
  UNK_0x4e54(); // UNK_0x4e54
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0xfd49(); // UNK_0xfd49
  UNK_0x07f0(); // UNK_0x07f0
  UNK_0x0141(); // UNK_0x0141
  UNK_0xfd22(); // UNK_0xfd22
  UNK_0x07f0(); // UNK_0x07f0
  UNK_0x2641(); // UNK_0x2641
  UNK_0x4559(); // UNK_0x4559
  UNK_0x4122(); // UNK_0x4122
  UNK_0x4554(); // UNK_0x4554
  UNK_0x5022(); // UNK_0x5022
  Push(pp_FONT_n_); // FONT#
  UNK_0x4545(); // UNK_0x4545
  UNK_0x4447(); // UNK_0x4447
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x2049(); // UNK_0x2049
  Push(pp_UNK_0x4856); // UNK_0x4856
  Push(pp_FONT_n_); // FONT#
  UNK_0x4757(); // UNK_0x4757
  UNK_0x204a(); // UNK_0x204a
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x4d51(); // UNK_0x4d51
  UNK_0x4c43(); // UNK_0x4c43
  UNK_0x2e5b(); // UNK_0x2e5b
  UNK_0xeeff(); // UNK_0xeeff
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5011(); // UNK_0x5011
  UNK_0x454e(); // UNK_0x454e
  UNK_0x5343(); // UNK_0x5343
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4f45(); // UNK_0x4f45
  UNK_0x4650(); // UNK_0x4650
  UNK_0x524b(); // UNK_0x524b
  UNK_0x3a4f(); // UNK_0x3a4f
  UNK_0xeeff(); // UNK_0xeeff
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x2003(); // UNK_0x2003
  UNK_0xeeff(); // UNK_0xeeff
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x2028(); // UNK_0x2028
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x5b22(); // UNK_0x5b22
  UNK_0x4144(); // UNK_0x4144
  UNK_0x4b45(); // UNK_0x4b45
  UNK_0x4f22(); // UNK_0x4f22
  UNK_0x5457(); // UNK_0x5457
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x4f49(); // UNK_0x4f49
  UNK_0x5422(); // UNK_0x5422
  Push(cc_INVIS_minus_I); // INVIS-I
  UNK_0x5551(); // UNK_0x5551
  UNK_0x4849(); // UNK_0x4849
  UNK_0x205f(); // UNK_0x205f
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0xfd22(); // UNK_0xfd22
  UNK_0x90f0(); // UNK_0x90f0
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf263: WORD 'UNK_0xf265' codep=0x224c parp=0xf265
// ================================================
  UNK_0x5b24(); // UNK_0x5b24

void UNK_0xf265() // UNK_0xf265
{
  UNK_0x57ee(); // UNK_0x57ee
  UNK_0xc86f(); // UNK_0xc86f
  UNK_0xfa0f(); // UNK_0xfa0f
  UNK_0x2217(); // UNK_0x2217
  UNK_0x7802(); // UNK_0x7802
  UNK_0xfa14(); // UNK_0xfa14
  UNK_0x1617(); // UNK_0x1617
  UNK_0x6902(); // UNK_0x6902
  UNK_0x5b28(); // UNK_0x5b28
  UNK_0x65ee(); // UNK_0x65ee
  UNK_0xe56f(); // UNK_0xe56f
  UNK_0xfaed(); // UNK_0xfaed
  UNK_0x0617(); // UNK_0x0617
  UNK_0xfb02(); // UNK_0xfb02
  UNK_0xa4ed(); // UNK_0xa4ed
  Push(pp__i_EXTERN); // 'EXTERN
  UNK_0x0418(); // UNK_0x0418
  UNK_0xa402(); // UNK_0xa402
  Push(pp__i_EXTERN); // 'EXTERN
  UNK_0x0618(); // UNK_0x0618
  UNK_0x5702(); // UNK_0x5702
  UNK_0x65ee(); // UNK_0x65ee
  UNK_0x906f(); // UNK_0x906f
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf295: WORD 'UNK_0xf297' codep=0x224c parp=0xf297
// ================================================
  UNK_0xdd24(); // UNK_0xdd24

void UNK_0xf297() // UNK_0xf297
{
  Push(pp_WMSG); // WMSG
  UNK_0xa519(); // UNK_0xa519
  UNK_0xd9c8(); // UNK_0xd9c8
  UNK_0xdf86(); // UNK_0xdf86
  UNK_0x987b(); // UNK_0x987b
  UNK_0x382c(); // UNK_0x382c
  UNK_0x7b0e(); // UNK_0x7b0e
  UNK_0x4cee(); // UNK_0x4cee
  UNK_0x906f(); // UNK_0x906f
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf2ab: WORD 'UNK_0xf2ad' codep=0x224c parp=0xf2ad
// ================================================
  UNK_0x5324(); // UNK_0x5324

void UNK_0xf2ad() // UNK_0xf2ad
{
  UNK_0x9d52(); // UNK_0x9d52
  UNK_0x0788(); // UNK_0x0788
  UNK_0x2641(); // UNK_0x2641
  UNK_0x464b(); // UNK_0x464b
  UNK_0x5722(); // UNK_0x5722
  UNK_0x2047(); // UNK_0x2047
  UNK_0x5043(); // UNK_0x5043
  UNK_0x4c52(); // UNK_0x4c52
  UNK_0x205b(); // UNK_0x205b
  UNK_0x5548(); // UNK_0x5548
  UNK_0x4c4e(); // UNK_0x4c4e
  UNK_0x5222(); // UNK_0x5222
  UNK_0x5647(); // UNK_0x5647
  UNK_0x5247(); // UNK_0x5247
  UNK_0x4555(); // UNK_0x4555
  UNK_0x5422(); // UNK_0x5422
  Push(cc_INVIS_minus_I); // INVIS-I
  UNK_0x5357(); // UNK_0x5357
  UNK_0x2056(); // UNK_0x2056
  UNK_0x4559(); // UNK_0x4559
  UNK_0x4d22(); // UNK_0x4d22
  UNK_0x5943(); // UNK_0x5943
  UNK_0xeeff(); // UNK_0xeeff
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4228(); // UNK_0x4228
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4243(); // UNK_0x4243
  UNK_0x454e(); // UNK_0x454e
  UNK_0x5422(); // UNK_0x5422
  UNK_0x2051(); // UNK_0x2051
  UNK_0x4144(); // UNK_0x4144
  UNK_0x4b45(); // UNK_0x4b45
  UNK_0x4f22(); // UNK_0x4f22
  UNK_0x5457(); // UNK_0x5457
  UNK_0x2030(); // UNK_0x2030
  UNK_0x4855(); // UNK_0x4855
  UNK_0x4c43(); // UNK_0x4c43
  UNK_0x204e(); // UNK_0x204e
  UNK_0x4559(); // UNK_0x4559
  UNK_0x4122(); // UNK_0x4122
  Push(pp_HUB); // HUB
  Push(pp_SIGNEXT); // SIGNEXT
  UNK_0x5452(); // UNK_0x5452
  UNK_0xfd22(); // UNK_0xfd22
  UNK_0x07f0(); // UNK_0x07f0
  UNK_0x0a41(); // UNK_0x0a41
  UNK_0x4f56(); // UNK_0x4f56
  UNK_0x4522(); // UNK_0x4522
  UNK_0x4355(); // UNK_0x4355
  UNK_0x5043(); // UNK_0x5043
  UNK_0x3f47(); // UNK_0x3f47
  UNK_0xeeff(); // UNK_0xeeff
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x201b(); // UNK_0x201b
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x2022(); // UNK_0x2022
  UNK_0x5b22(); // UNK_0x5b22
  UNK_0x4f50(); // UNK_0x4f50
  UNK_0x2022(); // UNK_0x2022
  UNK_0x5922(); // UNK_0x5922
  UNK_0x5347(); // UNK_0x5347
  UNK_0x205f(); // UNK_0x205f
  UNK_0xeeff(); // UNK_0xeeff
}


// ================================================
// 0xf336: WORD 'UNK_0xf338' codep=0x224c parp=0xf338
// ================================================

void UNK_0xf338() // UNK_0xf338
{
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4325(); // UNK_0x4325
  UNK_0x4d51(); // UNK_0x4d51
  UNK_0x414f(); // UNK_0x414f
  _4TH_gt_DOS(); // 4TH>DOS
  UNK_0x5247(); // UNK_0x5247
  UNK_0x202e(); // UNK_0x202e
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4855(); // UNK_0x4855
  UNK_0x504b(); // UNK_0x504b
  UNK_0x5329(); // UNK_0x5329
  UNK_0x4822(); // UNK_0x4822
  UNK_0x4c57(); // UNK_0x4c57
  UNK_0x204e(); // UNK_0x204e
  UNK_0x534b(); // UNK_0x534b
  UNK_0x5522(); // UNK_0x5522
  _4TH_gt_DOS(); // 4TH>DOS
  UNK_0x5247(); // UNK_0x5247
  UNK_0xeeff(); // UNK_0xeeff
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5428(); // UNK_0x5428
  UNK_0x5247(); // UNK_0x5247
  UNK_0x4954(); // UNK_0x4954
  UNK_0x4948(); // UNK_0x4948
  UNK_0x2045(); // UNK_0x2045
  UNK_0x5252(); // UNK_0x5252
  UNK_0x5347(); // UNK_0x5347
  UNK_0x5555(); // UNK_0x5555
  UNK_0x4554(); // UNK_0x4554
  UNK_0x4122(); // UNK_0x4122
  _4TH_gt_DOS(); // 4TH>DOS
  UNK_0x5722(); // UNK_0x5722
  UNK_0x2047(); // UNK_0x2047
  UNK_0x5243(); // UNK_0x5243
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x4422(); // UNK_0x4422
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x4549(); // UNK_0x4549
  UNK_0xfd54(); // UNK_0xfd54
  UNK_0x07f0(); // UNK_0x07f0
  UNK_0x2641(); // UNK_0x2641
  UNK_0x4651(); // UNK_0x4651
  _star_ASSIGN(); // *ASSIGN
  UNK_0x5357(); // UNK_0x5357
  UNK_0x4156(); // UNK_0x4156
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x2049(); // UNK_0x2049
  UNK_0x414f(); // UNK_0x414f
  UNK_0x4f4c(); // UNK_0x4f4c
  UNK_0x2054(); // UNK_0x2054
  UNK_0x4146(); // UNK_0x4146
  UNK_0x414f(); // UNK_0x414f
  UNK_0x4549(); // UNK_0x4549
  UNK_0x2030(); // UNK_0x2030
  UNK_0x5551(); // UNK_0x5551
  UNK_0x2054(); // UNK_0x2054
  UNK_0x4e47(); // UNK_0x4e47
  UNK_0x5247(); // UNK_0x5247
  UNK_0x5949(); // UNK_0x5949
  UNK_0xeeff(); // UNK_0xeeff
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5325(); // UNK_0x5325
  UNK_0x4f56(); // UNK_0x4f56
  UNK_0x4554(); // UNK_0x4554
  UNK_0x2055(); // UNK_0x2055
  UNK_0x5243(); // UNK_0x5243
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4c43(); // UNK_0x4c43
  UNK_0x4f55(); // UNK_0x4f55
  UNK_0x4222(); // UNK_0x4222
  UNK_0x4947(); // UNK_0x4947
  UNK_0x4750(); // UNK_0x4750
  UNK_0x4422(); // UNK_0x4422
  UNK_0x4154(); // UNK_0x4154
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x4447(); // UNK_0x4447
  UNK_0x4122(); // UNK_0x4122
  UNK_0x2056(); // UNK_0x2056
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0xeeff(); // UNK_0xeeff
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4110(); // UNK_0x4110
  UNK_0x414e(); // UNK_0x414e
  UNK_0x4d54(); // UNK_0x4d54
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x2049(); // UNK_0x2049
  UNK_0x4154(); // UNK_0x4154
  UNK_0x4556(); // UNK_0x4556
  UNK_0xfd30(); // UNK_0xfd30
  UNK_0x90f0(); // UNK_0x90f0
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf3f7: WORD 'UNK_0xf3f9' codep=0x224c parp=0xf3f9
// ================================================
  UNK_0x9824(); // UNK_0x9824

void UNK_0xf3f9() // UNK_0xf3f9
{
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(pp_UNK_0xec4b); // UNK_0xec4b
  D_ex_(); // D!
  Push(pp_UNK_0xec7d); // UNK_0xec7d
  D_ex_(); // D!
}


// ================================================
// 0xf409: WORD 'UNK_0xf40b' codep=0x224c parp=0xf40b
// ================================================

void UNK_0xf40b() // UNK_0xf40b
{
  Push(pp_UNK_0xec4b); // UNK_0xec4b
  _2_at_(); // 2@
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<

// ================================================
// 0xf417: WORD 'UNK_0xf419' codep=0x0e7f parp=0xf419
// ================================================
  OVER(); // OVER
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  DUP(); // DUP
  if (Pop() == 0) goto label1;
  OVER(); // OVER
  ON(); // ON

  label1:
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf42f: WORD 'UNK_0xf431' codep=0x224c parp=0xf431
// ================================================

void UNK_0xf431() // UNK_0xf431
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xf43f: WORD 'UNK_0xf441' codep=0x224c parp=0xf441
// ================================================

void UNK_0xf441() // UNK_0xf441
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
  DARK(); // DARK
  Push(0xec78);
  DUP(); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
  _dot_LOCAL_minus_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xf45d: WORD 'UNK_0xf45f' codep=0x224c parp=0xf45f
// ================================================

void UNK_0xf45f() // UNK_0xf45f
{
  _star_EYE(); // *EYE
  _gt_C_plus_S(); // >C+S
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  UNK_0xf431(); // UNK_0xf431
  Push(Pop() + Pop()); // +
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  UNK_0xf431(); // UNK_0xf431
  Push(Pop() + Pop()); // +
  _2DUP(); // 2DUP
  Push(pp_YABS); // YABS
  _ex_(); // !
  Push(pp_XABS); // XABS
  _ex_(); // !
  UNK_0xebdf(); // UNK_0xebdf
  _2DUP(); // 2DUP
  INST_minus_Y(); // INST-Y
  _ex_(); // !
  INST_minus_X(); // INST-X
  _ex_(); // !
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  _2DUP(); // 2DUP
  _ex_IY(); // !IY
  _ex_IX(); // !IX
  UNK_0xf184(); // UNK_0xf184
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf4a3: WORD 'UNK_0xf4a5' codep=0x224c parp=0xf4a5
// ================================================

void UNK_0xf4a5() // UNK_0xf4a5
{
  Push(pp_UNK_0xec51); // UNK_0xec51
  Push(0x1388); Pust(0x0000);
  UNK_0xf40b(); // UNK_0xf40b
  if (Pop() == 0) goto label1;
  UNK_0xf338(); // UNK_0xf338

  label1:
  Push(pp_UNK_0xec55); // UNK_0xec55
  Push(0x2ee0); Pust(0x0000);
  UNK_0xf40b(); // UNK_0xf40b
  if (Pop() == 0) goto label2;
  UNK_0xf2ad(); // UNK_0xf2ad

  label2:
  Push(pp_UNK_0xec59); // UNK_0xec59
  Push(0x32c8); Pust(0x0000);
  UNK_0xf40b(); // UNK_0xf40b
  if (Pop() == 0) goto label3;
  UNK_0xf164(); // UNK_0xf164
  UNK_0xf265(); // UNK_0xf265

  label3:
  Push(pp_UNK_0xec5d); // UNK_0xec5d
  Push(0x36b0); Pust(0x0000);
  UNK_0xf40b(); // UNK_0xf40b
  if (Pop() == 0) goto label4;
  UNK_0xf1b6(); // UNK_0xf1b6

  label4:
  Push(pp_UNK_0xec61); // UNK_0xec61
  Push(0x3a98); Pust(0x0000);
  UNK_0xf40b(); // UNK_0xf40b
  if (Pop() == 0) return;
  UNK_0xf164(); // UNK_0xf164
  UNK_0xf146(); // UNK_0xf146
}


// ================================================
// 0xf4fb: WORD 'DO-EYE' codep=0x224c parp=0xf506
// ================================================

void DO_minus_EYE() // DO-EYE
{
  Push(pp_ESC_minus_EN); // ESC-EN
  _099(); // 099
  UNK_0xee25(); // UNK_0xee25
  UNK_0xf3f9(); // UNK_0xf3f9
  UNK_0xec65(); // UNK_0xec65
  Push(0xc1b8);
  MODULE(); // MODULE

  label2:
  XYSCAN(); // XYSCAN
  Pop(); Pop();// 2DROP
  Push(pp_FTRIG); // FTRIG
  _099(); // 099
  UNK_0xeee3(); // UNK_0xeee3
  UNK_0xec83(); // UNK_0xec83
  if (Pop() == 0) goto label1;
  Push(0x0014);
  UNK_0xf297(); // UNK_0xf297
  Push(0x0032);
  UNK_0xef25(); // UNK_0xef25

  label1:
  UNK_0xf4a5(); // UNK_0xf4a5
  Push(pp_LKEY); // LKEY
  _099(); // 099
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label2;
  UNK_0xebdf(); // UNK_0xebdf
  UNK_0xf45f(); // UNK_0xf45f
  UNK_0xf441(); // UNK_0xf441
  Push(0xc6ba);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(pp_ESC_minus_EN); // ESC-EN
  ON(); // ON
}

// 0xf552: db 0x45 0x59 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'EYE-VOC_______ '
  