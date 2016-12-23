// ====== OVERLAY 'CAPTAIN' ======
// store offset = 0xde20
// overlay size   = 0x1740

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0x6a50 C-string:'UNK_0x3f3b'
// 1704:      UNK_0xa98d  codep:0x224c parp:0xa98d size:0x0006 C-string:'UNK_0xa98d'
// 1705:      UNK_0xa995  codep:0x224c parp:0xa995 size:0x0006 C-string:'UNK_0xa995'
// 1706:      UNK_0xa99d  codep:0x224c parp:0xa99d size:0x0006 C-string:'UNK_0xa99d'
// 1707:      UNK_0xa9a5  codep:0x224c parp:0xa9a5 size:0x000a C-string:'UNK_0xa9a5'
// 1708:      UNK_0xa9b1  codep:0x224c parp:0xa9b1 size:0x000a C-string:'UNK_0xa9b1'
// 1709:      UNK_0xa9bd  codep:0x224c parp:0xa9bd size:0x0006 C-string:'UNK_0xa9bd'
// 1710:      UNK_0xa9c5  codep:0x224c parp:0xa9c5 size:0x0006 C-string:'UNK_0xa9c5'
// 1711:      UNK_0xa9cd  codep:0x224c parp:0xa9cd size:0x0006 C-string:'UNK_0xa9cd'
// 1712:      UNK_0xa9d5  codep:0x224c parp:0xa9d5 size:0x0004 C-string:'UNK_0xa9d5'
// 1713:      UNK_0xa9db  codep:0x224c parp:0xa9db size:0x3459 C-string:'UNK_0xa9db'
// 1714:      UNK_0xde36  codep:0x1d29 parp:0xde36 size:0x0002 C-string:'UNK_0xde36'
// 1715:      UNK_0xde3a  codep:0x1d29 parp:0xde3a size:0x0002 C-string:'UNK_0xde3a'
// 1716:      UNK_0xde3e  codep:0x1d29 parp:0xde3e size:0x0004 C-string:'UNK_0xde3e'
// 1717:      UNK_0xde44  codep:0x1d29 parp:0xde44 size:0x0006 C-string:'UNK_0xde44'
// 1718:      UNK_0xde4c  codep:0x1d29 parp:0xde4c size:0x0006 C-string:'UNK_0xde4c'
// 1719:      UNK_0xde54  codep:0x1d29 parp:0xde54 size:0x0006 C-string:'UNK_0xde54'
// 1720:      UNK_0xde5c  codep:0x1d29 parp:0xde5c size:0x0006 C-string:'UNK_0xde5c'
// 1721:      UNK_0xde64  codep:0x3b68 parp:0xde64 size:0x0004 C-string:'UNK_0xde64'
// 1722:      UNK_0xde6a  codep:0x3b68 parp:0xde6a size:0x0004 C-string:'UNK_0xde6a'
// 1723:      UNK_0xde70  codep:0x1d29 parp:0xde70 size:0x0002 C-string:'UNK_0xde70'
// 1724:      UNK_0xde74  codep:0x224c parp:0xde74 size:0x0008 C-string:'UNK_0xde74'
// 1725:      UNK_0xde7e  codep:0x224c parp:0xde7e size:0x003c C-string:'UNK_0xde7e'
// 1726:      UNK_0xdebc  codep:0x224c parp:0xdebc size:0x0080 C-string:'UNK_0xdebc'
// 1727:      UNK_0xdf3e  codep:0x224c parp:0xdf3e size:0x0076 C-string:'UNK_0xdf3e'
// 1728:      UNK_0xdfb6  codep:0x224c parp:0xdfb6 size:0x0046 C-string:'UNK_0xdfb6'
// 1729:      UNK_0xdffe  codep:0x744d parp:0xdffe size:0x0003 C-string:'UNK_0xdffe'
// 1730:      UNK_0xe003  codep:0x224c parp:0xe003 size:0x0037 C-string:'UNK_0xe003'
// 1731:      UNK_0xe03c  codep:0x73ea parp:0xe03c size:0x0006 C-string:'UNK_0xe03c'
// 1732:      UNK_0xe044  codep:0x73ea parp:0xe044 size:0x0006 C-string:'UNK_0xe044'
// 1733:      UNK_0xe04c  codep:0x73ea parp:0xe04c size:0x0006 C-string:'UNK_0xe04c'
// 1734:      UNK_0xe054  codep:0x744d parp:0xe054 size:0x000b C-string:'UNK_0xe054'
// 1735:      UNK_0xe061  codep:0x73ea parp:0xe061 size:0x0006 C-string:'UNK_0xe061'
// 1736:      UNK_0xe069  codep:0x73ea parp:0xe069 size:0x0006 C-string:'UNK_0xe069'
// 1737:      UNK_0xe071  codep:0x73ea parp:0xe071 size:0x0006 C-string:'UNK_0xe071'
// 1738:      UNK_0xe079  codep:0x73ea parp:0xe079 size:0x0006 C-string:'UNK_0xe079'
// 1739:      UNK_0xe081  codep:0x744d parp:0xe081 size:0x0003 C-string:'UNK_0xe081'
// 1740:      UNK_0xe086  codep:0x73ea parp:0xe086 size:0x0006 C-string:'UNK_0xe086'
// 1741:      UNK_0xe08e  codep:0x73ea parp:0xe08e size:0x0006 C-string:'UNK_0xe08e'
// 1742:      UNK_0xe096  codep:0x744d parp:0xe096 size:0x0003 C-string:'UNK_0xe096'
// 1743:      UNK_0xe09b  codep:0x744d parp:0xe09b size:0x0003 C-string:'UNK_0xe09b'
// 1744:      UNK_0xe0a0  codep:0x744d parp:0xe0a0 size:0x0003 C-string:'UNK_0xe0a0'
// 1745:      UNK_0xe0a5  codep:0x744d parp:0xe0a5 size:0x0003 C-string:'UNK_0xe0a5'
// 1746:      UNK_0xe0aa  codep:0x744d parp:0xe0aa size:0x0003 C-string:'UNK_0xe0aa'
// 1747:      UNK_0xe0af  codep:0x744d parp:0xe0af size:0x0008 C-string:'UNK_0xe0af'
// 1748:      UNK_0xe0b9  codep:0x744d parp:0xe0b9 size:0x0003 C-string:'UNK_0xe0b9'
// 1749:      UNK_0xe0be  codep:0x744d parp:0xe0be size:0x0003 C-string:'UNK_0xe0be'
// 1750:      UNK_0xe0c3  codep:0x744d parp:0xe0c3 size:0x0003 C-string:'UNK_0xe0c3'
// 1751:      UNK_0xe0c8  codep:0x744d parp:0xe0c8 size:0x0003 C-string:'UNK_0xe0c8'
// 1752:      UNK_0xe0cd  codep:0x744d parp:0xe0cd size:0x0003 C-string:'UNK_0xe0cd'
// 1753:      UNK_0xe0d2  codep:0x744d parp:0xe0d2 size:0x0003 C-string:'UNK_0xe0d2'
// 1754:      UNK_0xe0d7  codep:0x1d29 parp:0xe0d7 size:0x0002 C-string:'UNK_0xe0d7'
// 1755:      UNK_0xe0db  codep:0x224c parp:0xe0db size:0x000a C-string:'UNK_0xe0db'
// 1756:      UNK_0xe0e7  codep:0x224c parp:0xe0e7 size:0x0010 C-string:'UNK_0xe0e7'
// 1757:      UNK_0xe0f9  codep:0x224c parp:0xe0f9 size:0x0030 C-string:'UNK_0xe0f9'
// 1758:      UNK_0xe12b  codep:0x224c parp:0xe12b size:0x0060 C-string:'UNK_0xe12b'
// 1759:      UNK_0xe18d  codep:0x224c parp:0xe18d size:0x0022 C-string:'UNK_0xe18d'
// 1760:      UNK_0xe1b1  codep:0x224c parp:0xe1b1 size:0x0052 C-string:'UNK_0xe1b1'
// 1761:      UNK_0xe205  codep:0x224c parp:0xe205 size:0x000c C-string:'UNK_0xe205'
// 1762:      UNK_0xe213  codep:0x224c parp:0xe213 size:0x0026 C-string:'UNK_0xe213'
// 1763:      UNK_0xe23b  codep:0x224c parp:0xe23b size:0x0018 C-string:'UNK_0xe23b'
// 1764:      UNK_0xe255  codep:0x224c parp:0xe255 size:0x003a C-string:'UNK_0xe255'
// 1765:      UNK_0xe291  codep:0x224c parp:0xe291 size:0x0046 C-string:'UNK_0xe291'
// 1766:        CHAR>SCR  codep:0x4a4f parp:0xe2e4 size:0x0010 C-string:'CHAR_gt_SCR'
// 1767:      UNK_0xe2f6  codep:0x224c parp:0xe2f6 size:0x0056 C-string:'UNK_0xe2f6'
// 1768:      UNK_0xe34e  codep:0x224c parp:0xe34e size:0x0044 C-string:'UNK_0xe34e'
// 1769:      UNK_0xe394  codep:0x224c parp:0xe394 size:0x0020 C-string:'UNK_0xe394'
// 1770:      UNK_0xe3b6  codep:0x224c parp:0xe3b6 size:0x0022 C-string:'UNK_0xe3b6'
// 1771:      UNK_0xe3da  codep:0x224c parp:0xe3da size:0x0044 C-string:'UNK_0xe3da'
// 1772:     (/CAPT-LOG)  codep:0x224c parp:0xe42e size:0x0032 C-string:'_ro__slash_CAPT_dash_LOG_rc_'
// 1773:      UNK_0xe462  codep:0x224c parp:0xe462 size:0x0006 C-string:'UNK_0xe462'
// 1774:      UNK_0xe46a  codep:0x224c parp:0xe46a size:0x0010 C-string:'UNK_0xe46a'
// 1775:      UNK_0xe47c  codep:0x224c parp:0xe47c size:0x0010 C-string:'UNK_0xe47c'
// 1776:      UNK_0xe48e  codep:0x224c parp:0xe48e size:0x000e C-string:'UNK_0xe48e'
// 1777:      UNK_0xe49e  codep:0x224c parp:0xe49e size:0x000e C-string:'UNK_0xe49e'
// 1778:      UNK_0xe4ae  codep:0x224c parp:0xe4ae size:0x0032 C-string:'UNK_0xe4ae'
// 1779:      UNK_0xe4e2  codep:0x224c parp:0xe4e2 size:0x000a C-string:'UNK_0xe4e2'
// 1780:      UNK_0xe4ee  codep:0x224c parp:0xe4ee size:0x002a C-string:'UNK_0xe4ee'
// 1781:      UNK_0xe51a  codep:0x224c parp:0xe51a size:0x0036 C-string:'UNK_0xe51a'
// 1782:      UNK_0xe552  codep:0x224c parp:0xe552 size:0x0010 C-string:'UNK_0xe552'
// 1783:      UNK_0xe564  codep:0x224c parp:0xe564 size:0x0016 C-string:'UNK_0xe564'
// 1784:       TD-SCROLL  codep:0x4a4f parp:0xe588 size:0x000c C-string:'TD_dash_SCROLL'
// 1785:      UNK_0xe596  codep:0x224c parp:0xe596 size:0x002e C-string:'UNK_0xe596'
// 1786:      UNK_0xe5c6  codep:0x224c parp:0xe5c6 size:0x0027 C-string:'UNK_0xe5c6'
// 1787:      UNK_0xe5ef  codep:0x224c parp:0xe5ef size:0x0042 C-string:'UNK_0xe5ef'
// 1788:      UNK_0xe633  codep:0x224c parp:0xe633 size:0x0056 C-string:'UNK_0xe633'
// 1789:      UNK_0xe68b  codep:0x224c parp:0xe68b size:0x003c C-string:'UNK_0xe68b'
// 1790:      UNK_0xe6c9  codep:0x224c parp:0xe6c9 size:0x0014 C-string:'UNK_0xe6c9'
// 1791:      UNK_0xe6df  codep:0x224c parp:0xe6df size:0x0028 C-string:'UNK_0xe6df'
// 1792:      UNK_0xe709  codep:0x224c parp:0xe709 size:0x0030 C-string:'UNK_0xe709'
// 1793:      UNK_0xe73b  codep:0x224c parp:0xe73b size:0x002a C-string:'UNK_0xe73b'
// 1794:      UNK_0xe767  codep:0x224c parp:0xe767 size:0x008e C-string:'UNK_0xe767'
// 1795:      UNK_0xe7f7  codep:0x224c parp:0xe7f7 size:0x002a C-string:'UNK_0xe7f7'
// 1796:      UNK_0xe823  codep:0x224c parp:0xe823 size:0x00c4 C-string:'UNK_0xe823'
// 1797:      UNK_0xe8e9  codep:0x224c parp:0xe8e9 size:0x001c C-string:'UNK_0xe8e9'
// 1798:      UNK_0xe907  codep:0x224c parp:0xe907 size:0x0029 C-string:'UNK_0xe907'
// 1799:      UNK_0xe932  codep:0x224c parp:0xe932 size:0x003c C-string:'UNK_0xe932'
// 1800:      UNK_0xe970  codep:0x224c parp:0xe970 size:0x0048 C-string:'UNK_0xe970'
// 1801:      UNK_0xe9ba  codep:0x224c parp:0xe9ba size:0x0026 C-string:'UNK_0xe9ba'
// 1802:      UNK_0xe9e2  codep:0x224c parp:0xe9e2 size:0x0030 C-string:'UNK_0xe9e2'
// 1803:      UNK_0xea14  codep:0x224c parp:0xea14 size:0x004c C-string:'UNK_0xea14'
// 1804:      UNK_0xea62  codep:0x224c parp:0xea62 size:0x0090 C-string:'UNK_0xea62'
// 1805:      UNK_0xeaf4  codep:0x224c parp:0xeaf4 size:0x001e C-string:'UNK_0xeaf4'
// 1806:      UNK_0xeb14  codep:0x224c parp:0xeb14 size:0x006c C-string:'UNK_0xeb14'
// 1807:      UNK_0xeb82  codep:0x224c parp:0xeb82 size:0x001a C-string:'UNK_0xeb82'
// 1808:      UNK_0xeb9e  codep:0x224c parp:0xeb9e size:0x0020 C-string:'UNK_0xeb9e'
// 1809:      UNK_0xebc0  codep:0x224c parp:0xebc0 size:0x0026 C-string:'UNK_0xebc0'
// 1810:      UNK_0xebe8  codep:0x224c parp:0xebe8 size:0x0022 C-string:'UNK_0xebe8'
// 1811:      UNK_0xec0c  codep:0x224c parp:0xec0c size:0x0022 C-string:'UNK_0xec0c'
// 1812:      UNK_0xec30  codep:0x224c parp:0xec30 size:0x002e C-string:'UNK_0xec30'
// 1813:      UNK_0xec60  codep:0x224c parp:0xec60 size:0x0011 C-string:'UNK_0xec60'
// 1814:      UNK_0xec73  codep:0x224c parp:0xec73 size:0x006a C-string:'UNK_0xec73'
// 1815:      UNK_0xecdf  codep:0x224c parp:0xecdf size:0x0014 C-string:'UNK_0xecdf'
// 1816:      UNK_0xecf5  codep:0x224c parp:0xecf5 size:0x001a C-string:'UNK_0xecf5'
// 1817:       1STOPTION  codep:0x4a4f parp:0xed1d size:0x0018 C-string:'_1STOPTION'
// 1818:      UNK_0xed37  codep:0x1d29 parp:0xed37 size:0x0002 C-string:'UNK_0xed37'
// 1819:      UNK_0xed3b  codep:0x1d29 parp:0xed3b size:0x0002 C-string:'UNK_0xed3b'
// 1820:       DO-OPTION  codep:0x224c parp:0xed4b size:0x0016 C-string:'DO_dash_OPTION'
// 1821:      UNK_0xed63  codep:0x224c parp:0xed63 size:0x0010 C-string:'UNK_0xed63'
// 1822:      UNK_0xed75  codep:0x224c parp:0xed75 size:0x0014 C-string:'UNK_0xed75'
// 1823:      UNK_0xed8b  codep:0x224c parp:0xed8b size:0x001b C-string:'UNK_0xed8b'
// 1824:      UNK_0xeda8  codep:0x224c parp:0xeda8 size:0x0024 C-string:'UNK_0xeda8'
// 1825:    ITEM-OPTIONS  codep:0x4a4f parp:0xeddd size:0x0018 C-string:'ITEM_dash_OPTIONS'
// 1826:      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x0051 C-string:'UNK_0xedf7'
// 1827:      UNK_0xee4a  codep:0x224c parp:0xee4a size:0x00a6 C-string:'UNK_0xee4a'
// 1828:      UNK_0xeef2  codep:0x224c parp:0xeef2 size:0x0024 C-string:'UNK_0xeef2'
// 1829:        (/ITEMS)  codep:0x224c parp:0xef23 size:0x0088 C-string:'_ro__slash_ITEMS_rc_'
// 1830:      UNK_0xefad  codep:0x224c parp:0xefad size:0x0010 C-string:'UNK_0xefad'
// 1831:      UNK_0xefbf  codep:0x224c parp:0xefbf size:0x0008 C-string:'UNK_0xefbf'
// 1832:        >DESCEND  codep:0x224c parp:0xefd4 size:0x0031 C-string:'_gt_DESCEND'
// 1833:      UNK_0xf007  codep:0x224c parp:0xf007 size:0x00c4 C-string:'UNK_0xf007'
// 1834:      UNK_0xf0cd  codep:0x224c parp:0xf0cd size:0x001b C-string:'UNK_0xf0cd'
// 1835:      UNK_0xf0ea  codep:0x224c parp:0xf0ea size:0x0040 C-string:'UNK_0xf0ea'
// 1836:  (/LAUNCH/LAND)  codep:0x224c parp:0xf13d size:0x004e C-string:'_ro__slash_LAUNCH_slash_LAND_rc_'
// 1837:      UNK_0xf18d  codep:0x1d29 parp:0xf18d size:0x0002 C-string:'UNK_0xf18d'
// 1838:      UNK_0xf191  codep:0x224c parp:0xf191 size:0x0006 C-string:'UNK_0xf191'
// 1839:      UNK_0xf199  codep:0x224c parp:0xf199 size:0x0010 C-string:'UNK_0xf199'
// 1840:      UNK_0xf1ab  codep:0x224c parp:0xf1ab size:0x0010 C-string:'UNK_0xf1ab'
// 1841:      UNK_0xf1bd  codep:0x224c parp:0xf1bd size:0x0020 C-string:'UNK_0xf1bd'
// 1842:      UNK_0xf1df  codep:0x224c parp:0xf1df size:0x001a C-string:'UNK_0xf1df'
// 1843:      UNK_0xf1fb  codep:0x224c parp:0xf1fb size:0x001c C-string:'UNK_0xf1fb'
// 1844:      UNK_0xf219  codep:0x224c parp:0xf219 size:0x0018 C-string:'UNK_0xf219'
// 1845:      UNK_0xf233  codep:0x224c parp:0xf233 size:0x000a C-string:'UNK_0xf233'
// 1846:      UNK_0xf23f  codep:0x224c parp:0xf23f size:0x0016 C-string:'UNK_0xf23f'
// 1847:      UNK_0xf257  codep:0x224c parp:0xf257 size:0x0039 C-string:'UNK_0xf257'
// 1848:      UNK_0xf292  codep:0x224c parp:0xf292 size:0x0038 C-string:'UNK_0xf292'
// 1849:      UNK_0xf2cc  codep:0x1d29 parp:0xf2cc size:0x0002 C-string:'UNK_0xf2cc'
// 1850:      UNK_0xf2d0  codep:0x224c parp:0xf2d0 size:0x003c C-string:'UNK_0xf2d0'
// 1851:      UNK_0xf30e  codep:0x224c parp:0xf30e size:0x0038 C-string:'UNK_0xf30e'
// 1852:      UNK_0xf348  codep:0x224c parp:0xf348 size:0x0030 C-string:'UNK_0xf348'
// 1853:      UNK_0xf37a  codep:0x224c parp:0xf37a size:0x0036 C-string:'UNK_0xf37a'
// 1854:      UNK_0xf3b2  codep:0x224c parp:0xf3b2 size:0x001f C-string:'UNK_0xf3b2'
// 1855:      UNK_0xf3d3  codep:0x224c parp:0xf3d3 size:0x0057 C-string:'UNK_0xf3d3'
// 1856:     (/LOG-PLAN)  codep:0x224c parp:0xf43a size:0x0000 C-string:'_ro__slash_LOG_dash_PLAN_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xde36[2] = {0x00, 0x00}; // UNK_0xde36
unsigned char UNK_0xde3a[2] = {0x00, 0x00}; // UNK_0xde3a
unsigned char UNK_0xde3e[4] = {0x56, 0x3a, 0x20, 0x58}; // UNK_0xde3e
unsigned char UNK_0xde44[6] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c}; // UNK_0xde44
unsigned char UNK_0xde4c[6] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c}; // UNK_0xde4c
unsigned char UNK_0xde54[6] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c}; // UNK_0xde54
unsigned char UNK_0xde5c[6] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c}; // UNK_0xde5c
unsigned char UNK_0xde70[2] = {0x77, 0x00}; // UNK_0xde70
unsigned char UNK_0xe0d7[2] = {0x3a, 0x20}; // UNK_0xe0d7
unsigned char UNK_0xed37[2] = {0x3a, 0x20}; // UNK_0xed37
unsigned char UNK_0xed3b[2] = {0x3a, 0x20}; // UNK_0xed3b
unsigned char UNK_0xf18d[2] = {0x3a, 0x20}; // UNK_0xf18d
unsigned char UNK_0xf2cc[2] = {0x00, 0x00}; // UNK_0xf2cc



// 0xde32: db 0x6d 0x01 'm '

// ================================================
// 0xde34: WORD 'UNK_0xde36' codep=0x1d29 parp=0xde36
// ================================================
// 0xde36: db 0x00 0x00 '  '

// ================================================
// 0xde38: WORD 'UNK_0xde3a' codep=0x1d29 parp=0xde3a
// ================================================
// 0xde3a: db 0x00 0x00 '  '

// ================================================
// 0xde3c: WORD 'UNK_0xde3e' codep=0x1d29 parp=0xde3e
// ================================================
// 0xde3e: db 0x56 0x3a 0x20 0x58 'V: X'

// ================================================
// 0xde42: WORD 'UNK_0xde44' codep=0x1d29 parp=0xde44
// ================================================
// 0xde44: db 0x3a 0x20 0x05 0x41 0x4c 0x4c ':  ALL'

// ================================================
// 0xde4a: WORD 'UNK_0xde4c' codep=0x1d29 parp=0xde4c
// ================================================
// 0xde4c: db 0x3a 0x20 0x05 0x41 0x4c 0x4c ':  ALL'

// ================================================
// 0xde52: WORD 'UNK_0xde54' codep=0x1d29 parp=0xde54
// ================================================
// 0xde54: db 0x3a 0x20 0x05 0x41 0x4c 0x4c ':  ALL'

// ================================================
// 0xde5a: WORD 'UNK_0xde5c' codep=0x1d29 parp=0xde5c
// ================================================
// 0xde5c: db 0x3a 0x20 0x05 0x41 0x4c 0x4c ':  ALL'

// ================================================
// 0xde62: WORD 'UNK_0xde64' codep=0x3b68 parp=0xde64
// ================================================
// 0xde64: db 0x4c 0x00 0x04 0x00 'L   '

// ================================================
// 0xde68: WORD 'UNK_0xde6a' codep=0x3b68 parp=0xde6a
// ================================================
// 0xde6a: db 0xc0 0x00 0x48 0x00 '  H '

// ================================================
// 0xde6e: WORD 'UNK_0xde70' codep=0x1d29 parp=0xde70
// ================================================
// 0xde70: db 0x77 0x00 'w '

// ================================================
// 0xde72: WORD 'UNK_0xde74' codep=0x224c parp=0xde74
// ================================================

void UNK_0xde74() // UNK_0xde74
{
  Push(0xbdd8);
  MODULE(); // MODULE
}


// ================================================
// 0xde7c: WORD 'UNK_0xde7e' codep=0x224c parp=0xde7e
// ================================================

void UNK_0xde7e() // UNK_0xde7e
{
  _ex_COLOR(); // !COLOR
  _gt_R(); // >R
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(h); // J
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(i); // I
  Push(h); // J
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  _2DUP(); // 2DUP
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe8

  R_gt_(); // R>
  Pop(); // DROP
  _gt_R(); // >R
  _gt_R(); // >R
  LLINE(); // LLINE
  LLINE(); // LLINE
  R_gt_(); // R>
  R_gt_(); // R>
  LLINE(); // LLINE
  Push(cc__5); // 5
  MS(); // MS
}


// ================================================
// 0xdeba: WORD 'UNK_0xdebc' codep=0x224c parp=0xdebc
// ================================================

void UNK_0xdebc() // UNK_0xdebc
{
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  OVER(); // OVER
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  Push(i); // I
  Push(Pop() + Pop()); // +
  _plus__dash__at_(); // +-@
  Push(Pop() + Pop()); // +
  Push(Read16(sp)); // DUP
  Push(i); // I
  Push(2); // 2
  MOD(); // MOD
  if (Pop() == 0) goto label1;
  Push2Words("UNK_0xde6a");
  goto label2;

  label1:
  Push2Words("UNK_0xde64");

  label2:
  WITHIN(); // WITHIN
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  OVER(); // OVER
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read16(sp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(-Pop()); // NEGATE
  Push(Read16(sp)); // DUP
  ROT(); // ROT
  C_ex_(); // C!
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(1); // 1
  Push(0x0010);
  RRND(); // RRND
  Push(Read16(sp)); // DUP
  Push(Pop()<<4); // 16*
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xde70); // UNK_0xde70
  _ex__3(); // !_3

  label3:
  Push(cc__3); // 3
  PICK(); // PICK
  Push(i); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  i++;
  } while(i<imax); // (LOOP) 0xff8c

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xdf3c: WORD 'UNK_0xdf3e' codep=0x224c parp=0xdf3e
// ================================================

void UNK_0xdf3e() // UNK_0xdf3e
{
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0xfffd);
  Push(cc__4); // 4
  RRND(); // RRND
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xde54); // UNK_0xde54
  Push(i); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(pp_UNK_0xde5c); // UNK_0xde5c
  Push(i); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(0xfffd);
  Push(cc__4); // 4
  RRND(); // RRND
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xde54); // UNK_0xde54
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(pp_UNK_0xde5c); // UNK_0xde5c
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push2Words("UNK_0xde64");
  RRND(); // RRND
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xde44); // UNK_0xde44
  Push(i); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(pp_UNK_0xde4c); // UNK_0xde4c
  Push(i); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push2Words("UNK_0xde6a");
  RRND(); // RRND
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xde44); // UNK_0xde44
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(pp_UNK_0xde4c); // UNK_0xde4c
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xff94

}


// ================================================
// 0xdfb4: WORD 'UNK_0xdfb6' codep=0x224c parp=0xdfb6
// ================================================

void UNK_0xdfb6() // UNK_0xdfb6
{
  UNK_0xdf3e(); // UNK_0xdf3e
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  Push(0x000a);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_UNK_0xde44); // UNK_0xde44
  Push(pp_UNK_0xde70); // UNK_0xde70
  Push(Read16(Pop())); // @
  UNK_0xde7e(); // UNK_0xde7e
  Push(pp_UNK_0xde44); // UNK_0xde44
  Push(pp_UNK_0xde54); // UNK_0xde54
  UNK_0xdebc(); // UNK_0xdebc
  i++;
  } while(i<imax); // (LOOP) 0xfff0


  label1:
  Push(pp_UNK_0xde44); // UNK_0xde44
  Push(pp_UNK_0xde70); // UNK_0xde70
  Push(Read16(Pop())); // @
  UNK_0xde7e(); // UNK_0xde7e
  Push(pp_UNK_0xde44); // UNK_0xde44
  Push(pp_UNK_0xde54); // UNK_0xde54
  UNK_0xdebc(); // UNK_0xdebc
  Push(pp_UNK_0xde4c); // UNK_0xde4c
  SetColor("BLACK");
  UNK_0xde7e(); // UNK_0xde7e
  Push(pp_UNK_0xde4c); // UNK_0xde4c
  Push(pp_UNK_0xde5c); // UNK_0xde5c
  UNK_0xdebc(); // UNK_0xdebc
  _i_KEY(); // 'KEY
  if (Pop() == 0) goto label1;
}


// ================================================
// 0xdffc: WORD 'UNK_0xdffe' codep=0x744d parp=0xdffe
// ================================================
// 0xdffe: db 0x2f 0x0b 0x24 '/ $'

// ================================================
// 0xe001: WORD 'UNK_0xe003' codep=0x224c parp=0xe003
// ================================================

void UNK_0xe003() // UNK_0xe003
{
  IFIRST(); // IFIRST
  Push(0x63fa); // IFIELD(UNK_0xdffe)
  PAD(); // PAD
  Push(Pop()+1); // 1+
  Push(cc__8); // 8
  CMOVE(); // CMOVE
  Push(cc__8); // 8
  PAD(); // PAD
  C_ex_(); // C!

  UNK_0x3f3b("ATARAXIA");
  Pop(); // DROP
  Push(Pop()-1); // 1-
  PAD(); // PAD
  _do__eq_(); // $=
  if (Pop() == 0) goto label1;
  Push(0x63fa); // IFIELD(UNK_0xdffe)
  Push(cc__8); // 8
  Push(cc_BL); // BL
  FILL_1(); // FILL_1
  UNK_0xdfb6(); // UNK_0xdfb6

  label1:
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xe03a: WORD 'UNK_0xe03c' codep=0x73ea parp=0xe03c
// ================================================
// 0xe03c: db 0x1c 0x18 0x01 0x1e 0x2c 0x65 '    ,e'

// ================================================
// 0xe042: WORD 'UNK_0xe044' codep=0x73ea parp=0xe044
// ================================================
// 0xe044: db 0x1c 0x1d 0x01 0x1e 0x2c 0x65 '    ,e'

// ================================================
// 0xe04a: WORD 'UNK_0xe04c' codep=0x73ea parp=0xe04c
// ================================================
// 0xe04c: db 0x39 0x00 0xbe 0xbe 0x90 0x67 '9    g'

// ================================================
// 0xe052: WORD 'UNK_0xe054' codep=0x744d parp=0xe054
// ================================================
// 0xe054: db 0x14 0x45 0x04 0xea 0x73 0x20 0x07 0x02 0x16 0x8f 0x65 ' E  s     e'

// ================================================
// 0xe05f: WORD 'UNK_0xe061' codep=0x73ea parp=0xe061
// ================================================
// 0xe061: db 0x20 0x02 0x02 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe067: WORD 'UNK_0xe069' codep=0x73ea parp=0xe069
// ================================================
// 0xe069: db 0x20 0x11 0x02 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe06f: WORD 'UNK_0xe071' codep=0x73ea parp=0xe071
// ================================================
// 0xe071: db 0x20 0x04 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe077: WORD 'UNK_0xe079' codep=0x73ea parp=0xe079
// ================================================
// 0xe079: db 0x20 0x09 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe07f: WORD 'UNK_0xe081' codep=0x744d parp=0xe081
// ================================================
// 0xe081: db 0x19 0x12 0x07 '   '

// ================================================
// 0xe084: WORD 'UNK_0xe086' codep=0x73ea parp=0xe086
// ================================================
// 0xe086: db 0x20 0x0f 0x02 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe08c: WORD 'UNK_0xe08e' codep=0x73ea parp=0xe08e
// ================================================
// 0xe08e: db 0x20 0x10 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xe094: WORD 'UNK_0xe096' codep=0x744d parp=0xe096
// ================================================
// 0xe096: db 0x24 0x0a 0x01 '$  '

// ================================================
// 0xe099: WORD 'UNK_0xe09b' codep=0x744d parp=0xe09b
// ================================================
// 0xe09b: db 0x24 0x0b 0x02 '$  '

// ================================================
// 0xe09e: WORD 'UNK_0xe0a0' codep=0x744d parp=0xe0a0
// ================================================
// 0xe0a0: db 0x24 0x11 0x02 '$  '

// ================================================
// 0xe0a3: WORD 'UNK_0xe0a5' codep=0x744d parp=0xe0a5
// ================================================
// 0xe0a5: db 0x24 0x13 0x01 '$  '

// ================================================
// 0xe0a8: WORD 'UNK_0xe0aa' codep=0x744d parp=0xe0aa
// ================================================
// 0xe0aa: db 0x24 0x14 0x01 '$  '

// ================================================
// 0xe0ad: WORD 'UNK_0xe0af' codep=0x744d parp=0xe0af
// ================================================
// 0xe0af: db 0x24 0x15 0x0f 0x4d 0x74 0x14 0x13 0x02 '$  Mt   '

// ================================================
// 0xe0b7: WORD 'UNK_0xe0b9' codep=0x744d parp=0xe0b9
// ================================================
// 0xe0b9: db 0x00 0x13 0x02 '   '

// ================================================
// 0xe0bc: WORD 'UNK_0xe0be' codep=0x744d parp=0xe0be
// ================================================
// 0xe0be: db 0x17 0x12 0x01 '   '

// ================================================
// 0xe0c1: WORD 'UNK_0xe0c3' codep=0x744d parp=0xe0c3
// ================================================
// 0xe0c3: db 0x00 0x15 0x01 '   '

// ================================================
// 0xe0c6: WORD 'UNK_0xe0c8' codep=0x744d parp=0xe0c8
// ================================================
// 0xe0c8: db 0x00 0x16 0x01 '   '

// ================================================
// 0xe0cb: WORD 'UNK_0xe0cd' codep=0x744d parp=0xe0cd
// ================================================
// 0xe0cd: db 0x00 0x17 0x01 '   '

// ================================================
// 0xe0d0: WORD 'UNK_0xe0d2' codep=0x744d parp=0xe0d2
// ================================================
// 0xe0d2: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xe0d5: WORD 'UNK_0xe0d7' codep=0x1d29 parp=0xe0d7
// ================================================
// 0xe0d7: db 0x3a 0x20 ': '

// ================================================
// 0xe0d9: WORD 'UNK_0xe0db' codep=0x224c parp=0xe0db
// ================================================

void UNK_0xe0db() // UNK_0xe0db
{
  CTPOS_dot_(); // CTPOS.
  Push(cc__dash_1); // -1
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
}


// ================================================
// 0xe0e5: WORD 'UNK_0xe0e7' codep=0x224c parp=0xe0e7
// ================================================

void UNK_0xe0e7() // UNK_0xe0e7
{
  Push(0x0032);
  Push(cc__4); // 4
  Push(cc__7); // 7
  Push(0x0024);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe0f7: WORD 'UNK_0xe0f9' codep=0x224c parp=0xe0f9
// ================================================

void UNK_0xe0f9() // UNK_0xe0f9
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  CI(); // CI
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(i); // I
  UNK_0xe0db(); // UNK_0xe0db
  Push(0x63fa); // IFIELD(UNK_0xdffe)
  Push(0x0024);
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffee

  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push2Words("NULL");
  UNK_0xe0db(); // UNK_0xe0db
}


// ================================================
// 0xe129: WORD 'UNK_0xe12b' codep=0x224c parp=0xe12b
// ================================================

void UNK_0xe12b() // UNK_0xe12b
{
  SetColor("WHITE");
  ERASE_dash_T(); // ERASE-T
  UNK_0xe0e7(); // UNK_0xe0e7
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
  Push(0x0094);
  Push(0x0033);
  OVER(); // OVER
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x0033);
  Push(0x0095);
  Push(1); // 1
  Push(0x009e);
  SetColor("DK-BLUE");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  CTINIT(); // CTINIT
  Push(0x0098);
  Push(Read16(sp)); // DUP
  Push(0x0026);
  POS_dot_(); // POS.
  PRINT("E", 1); // (.")
  Push(Read16(sp)); // DUP
  Push(0x001f);
  POS_dot_(); // POS.
  PRINT("X", 1); // (.")
  Push(Read16(sp)); // DUP
  Push(0x0018);
  POS_dot_(); // POS.
  PRINT("I", 1); // (.")
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("T", 1); // (.")
}


// ================================================
// 0xe18b: WORD 'UNK_0xe18d' codep=0x224c parp=0xe18d
// ================================================

void UNK_0xe18d() // UNK_0xe18d
{
  PAD(); // PAD
  Push(0x0024);
  Push(0x0020);
  FILL_1(); // FILL_1
  Push(0x0024);
  PAD(); // PAD
  C_ex_(); // C!
  Push(0x63fa); // IFIELD(UNK_0xdffe)
  PAD(); // PAD
  Push(Pop()+1); // 1+
  Push(0x0024);
  CMOVE(); // CMOVE
}


// ================================================
// 0xe1af: WORD 'UNK_0xe1b1' codep=0x224c parp=0xe1b1
// ================================================

void UNK_0xe1b1() // UNK_0xe1b1
{
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  CTINIT(); // CTINIT
  PRINT("#", 1); // (.")
  UNK_0xe0db(); // UNK_0xe0db
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Exec(EMIT); // call of word 0x2731 '(EMIT)'
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(1); // 1
  Push(pp_CTX); // CTX
  _plus__ex_(); // +!
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(0x0024);
  _eq_(); // =
  if (Pop() == 0) return;
  INEXT(); // INEXT
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label1;
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  UNK_0xe18d(); // UNK_0xe18d
  PAD(); // PAD
  WLINE_dash_UP(); // WLINE-UP
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  label1:
  CTCR(); // CTCR
}


// ================================================
// 0xe203: WORD 'UNK_0xe205' codep=0x224c parp=0xe205
// ================================================

void UNK_0xe205() // UNK_0xe205
{
  Push(0x63fa); // IFIELD(UNK_0xdffe)
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xe211: WORD 'UNK_0xe213' codep=0x224c parp=0xe213
// ================================================

void UNK_0xe213() // UNK_0xe213
{
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  _gt_R(); // >R
  Push(h); // I
  Push(0x0020);
  Push(0x005b);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(h); // I
  UNK_0xe205(); // UNK_0xe205
  Push(h); // I
  UNK_0xe1b1(); // UNK_0xe1b1

  label1:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xe239: WORD 'UNK_0xe23b' codep=0x224c parp=0xe23b
// ================================================

void UNK_0xe23b() // UNK_0xe23b
{
  Pop(); // DROP
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(0x0023);
  MIN(); // MIN
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  UNK_0xe0db(); // UNK_0xe0db
}


// ================================================
// 0xe253: WORD 'UNK_0xe255' codep=0x224c parp=0xe255
// ================================================

void UNK_0xe255() // UNK_0xe255
{
  Pop(); // DROP
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push(0x0024);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("#", 1); // (.")
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  Push(cc__dash_1); // -1
  Push(pp_CTX); // CTX
  _plus__ex_(); // +!
  Push(0x0020);
  UNK_0xe205(); // UNK_0xe205
}


// ================================================
// 0xe28f: WORD 'UNK_0xe291' codep=0x224c parp=0xe291
// ================================================

void UNK_0xe291() // UNK_0xe291
{
  Pop(); // DROP
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(0x0023);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(pp_FTRIG); // FTRIG
  ON_3(); // ON_3
  return;

  label1:
  INEXT(); // INEXT
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label2;
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label3;
  IPREV(); // IPREV
  BEEP(); // BEEP
  goto label2;

  label3:
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  UNK_0xe18d(); // UNK_0xe18d
  PAD(); // PAD
  WLINE_dash_UP(); // WLINE-UP
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  label2:
  CTCR(); // CTCR
}


// ================================================
// 0xe2d7: WORD 'CHAR>SCR' codep=0x4a4f parp=0xe2e4
// ================================================
// 0xe2e4: db 0x03 0x00 0x13 0xe2 0x0d 0x00 0x91 0xe2 0x08 0x00 0x55 0xe2 0x09 0x00 0x3b 0xe2 '          U   ; '

// ================================================
// 0xe2f4: WORD 'UNK_0xe2f6' codep=0x224c parp=0xe2f6
// ================================================

void UNK_0xe2f6() // UNK_0xe2f6
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  IPREV(); // IPREV
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  _ask_LAST(); // ?LAST
  if (Pop() == 0) goto label3;
  INEXT(); // INEXT
  BEEP(); // BEEP
  goto label2;

  label3:
  UNK_0xe18d(); // UNK_0xe18d
  PAD(); // PAD
  WLINE_dash_D(); // WLINE-D

  label2:
  goto label4;

  label1:
  INEXT(); // INEXT
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _gt_(); // >
  if (Pop() == 0) goto label4;
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label5;
  IPREV(); // IPREV
  BEEP(); // BEEP
  goto label4;

  label5:
  UNK_0xe18d(); // UNK_0xe18d
  PAD(); // PAD
  WLINE_dash_UP(); // WLINE-UP

  label4:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe34c: WORD 'UNK_0xe34e' codep=0x224c parp=0xe34e
// ================================================

void UNK_0xe34e() // UNK_0xe34e
{
  Pop();
  switch(Pop()) // (XYSCAN
  {
  case 327:
    UNK_0xa98d(); // UNK_0xa98d
    break;
  case 328:
    UNK_0xa995(); // UNK_0xa995
    break;
  case 329:
    UNK_0xa99d(); // UNK_0xa99d
    break;
  case 331:
    UNK_0xa9a5(); // UNK_0xa9a5
    break;
  case 333:
    UNK_0xa9b1(); // UNK_0xa9b1
    break;
  case 335:
    UNK_0xa9bd(); // UNK_0xa9bd
    break;
  case 336:
    UNK_0xa9c5(); // UNK_0xa9c5
    break;
  case 337:
    UNK_0xa9cd(); // UNK_0xa9cd
    break;
  case 0:
    UNK_0xa9d5(); // UNK_0xa9d5
    break;
  case 92:
    UNK_0xa98d(); // UNK_0xa98d
    break;
  case 126:
    UNK_0xa995(); // UNK_0xa995
    break;
  case 124:
    UNK_0xa9a5(); // UNK_0xa9a5
    break;
  case 500:
    UNK_0xa9b1(); // UNK_0xa9b1
    break;
  case 335:
    UNK_0xa9bd(); // UNK_0xa9bd
    break;
  case 96:
    UNK_0xa9c5(); // UNK_0xa9c5
    break;
  default:
    UNK_0xa9db(); // UNK_0xa9db
    break;

  }
  Push(pp_CTX); // CTX
  _plus__ex_(); // +!
  Push(-Pop()); // NEGATE
  Push(Read16(sp)); // DUP
  Push(pp_CTY); // CTY
  _plus__ex_(); // +!
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  UNK_0xe2f6(); // UNK_0xe2f6

  label1:
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(0); // 0
  MAX(); // MAX
  Push(0x0024);
  MIN(); // MIN
  Push(Read16(sp)); // DUP
  Push(pp_CTX); // CTX
  _ex__3(); // !_3
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  Push(0); // 0
  MAX(); // MAX
  Push(cc__6); // 6
  MIN(); // MIN
  Push(Read16(sp)); // DUP
  Push(pp_CTY); // CTY
  _ex__3(); // !_3
  UNK_0xe0db(); // UNK_0xe0db
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
}


// ================================================
// 0xe392: WORD 'UNK_0xe394' codep=0x224c parp=0xe394
// ================================================

void UNK_0xe394() // UNK_0xe394
{
  Push(0x01f4); Pust(0x0000);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  Exec(?TERMINAL); // call of word 0x25bc '(?TERMINAL)'
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe3b4: WORD 'UNK_0xe3b6' codep=0x224c parp=0xe3b6
// ================================================

void UNK_0xe3b6() // UNK_0xe3b6
{
  _at_CRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  PRINT("#", 1); // (.")
  UNK_0xe394(); // UNK_0xe394
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("#", 1); // (.")
  UNK_0xe394(); // UNK_0xe394
  _ex_CRS(); // !CRS
}


// ================================================
// 0xe3d8: WORD 'UNK_0xe3da' codep=0x224c parp=0xe3da
// ================================================

void UNK_0xe3da() // UNK_0xe3da
{

  label1:
  UNK_0xe3b6(); // UNK_0xe3b6
  _i_KEY(); // 'KEY
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  _gt_R(); // >R
  Push(h); // I
  Push(0x00ff);
  _gt_(); // >
  if (Pop() == 0) goto label2;
  Push(h); // I
  UNK_0xe34e(); // UNK_0xe34e
  goto label3;

  label2:
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(0x0024);
  _st_(); // <
  Push(h); // I
  Push(0x000d);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  Push(h); // I
  Push(h); // I
  Pop();
  switch(Pop()) // CHAR>SCR
  {
  case 13:
    UNK_0xe291(); // UNK_0xe291
    break;
  case 8:
    UNK_0xe255(); // UNK_0xe255
    break;
  case 9:
    UNK_0xe23b(); // UNK_0xe23b
    break;
  default:
    UNK_0xe213(); // UNK_0xe213
    break;

  }

  label3:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xe41e: WORD '(/CAPT-LOG)' codep=0x224c parp=0xe42e
// ================================================
// entry

void _ro__slash_CAPT_dash_LOG_rc_() // (/CAPT-LOG)
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002b);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  UNK_0xe12b(); // UNK_0xe12b
  UNK_0xe0f9(); // UNK_0xe0f9
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF

  label1:
  UNK_0xe3da(); // UNK_0xe3da
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  SetColor("BLACK");
  ERASE_dash_T(); // ERASE-T
  UNK_0xe003(); // UNK_0xe003
  ICLOSE(); // ICLOSE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe460: WORD 'UNK_0xe462' codep=0x224c parp=0xe462
// ================================================

void UNK_0xe462() // UNK_0xe462
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xe468: WORD 'UNK_0xe46a' codep=0x224c parp=0xe46a
// ================================================

void UNK_0xe46a() // UNK_0xe46a
{
  UNK_0xe462(); // UNK_0xe462
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe47a: WORD 'UNK_0xe47c' codep=0x224c parp=0xe47c
// ================================================

void UNK_0xe47c() // UNK_0xe47c
{
  UNK_0xe462(); // UNK_0xe462
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe48c: WORD 'UNK_0xe48e' codep=0x224c parp=0xe48e
// ================================================

void UNK_0xe48e() // UNK_0xe48e
{
  UNK_0xe462(); // UNK_0xe462
  _gt_C_plus_S(); // >C+S
  Push(0x63fd); // IFIELD(TEXT-IN)
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe49c: WORD 'UNK_0xe49e' codep=0x224c parp=0xe49e
// ================================================

void UNK_0xe49e() // UNK_0xe49e
{
  _gt_C_plus_S(); // >C+S
  Push2Words("*EOL");
  _gt_C_plus_S(); // >C+S
  BOX_gt_LIS(); // BOX>LIS
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe4ac: WORD 'UNK_0xe4ae' codep=0x224c parp=0xe4ae
// ================================================

void UNK_0xe4ae() // UNK_0xe4ae
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  Push(cc__3); // 3
  R_gt_(); // R>
  POS_dot_(); // POS.
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  _ex__3(); // !_3
  Push(cc__7); // 7
  Push(pp_LBLT); // LBLT
  _ex__3(); // !_3
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  _ex__3(); // !_3
  SetColor("WHITE");
  SetColor("GREY1");
  SetColor("DK-GREEN");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  BLT(); // BLT
  _ex_CRS(); // !CRS
}


// ================================================
// 0xe4e0: WORD 'UNK_0xe4e2' codep=0x224c parp=0xe4e2
// ================================================

void UNK_0xe4e2() // UNK_0xe4e2
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  UNK_0xe4ae(); // UNK_0xe4ae
}


// ================================================
// 0xe4ec: WORD 'UNK_0xe4ee' codep=0x224c parp=0xe4ee
// ================================================

void UNK_0xe4ee() // UNK_0xe4ee
{
  CTINIT(); // CTINIT
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  _do__dot_(); // $.
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffe4

}


// ================================================
// 0xe518: WORD 'UNK_0xe51a' codep=0x224c parp=0xe51a
// ================================================

void UNK_0xe51a() // UNK_0xe51a
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
  Push(0); // 0

  label1:
  Push(Pop()+1); // 1+
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  _gt_R(); // >R
  _gt_1FONT(); // >1FONT
  Push(0x002b);
  Push(cc__3); // 3
  Push(cc__5); // 5
  R_gt_(); // R>
  MIN(); // MIN
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xe4ee(); // UNK_0xe4ee
  IPREV(); // IPREV
  UNK_0xe4e2(); // UNK_0xe4e2
}


// ================================================
// 0xe550: WORD 'UNK_0xe552' codep=0x224c parp=0xe552
// ================================================

void UNK_0xe552() // UNK_0xe552
{
  INEXT(); // INEXT
  UNK_0xe46a(); // UNK_0xe46a
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  UNK_0xe4e2(); // UNK_0xe4e2
  WLINE_dash_UP(); // WLINE-UP
  UNK_0xe4e2(); // UNK_0xe4e2
}


// ================================================
// 0xe562: WORD 'UNK_0xe564' codep=0x224c parp=0xe564
// ================================================

void UNK_0xe564() // UNK_0xe564
{
  IPREV(); // IPREV
  UNK_0xe47c(); // UNK_0xe47c
  UNK_0xe462(); // UNK_0xe462
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  PAD(); // PAD
  UNK_0xe4e2(); // UNK_0xe4e2
  WLINE_dash_D(); // WLINE-D
  UNK_0xe4e2(); // UNK_0xe4e2
}


// ================================================
// 0xe57a: WORD 'TD-SCROLL' codep=0x4a4f parp=0xe588
// ================================================
// 0xe588: db 0x02 0x00 0x48 0x3a 0x01 0x00 0x52 0xe5 0xff 0xff 0x64 0xe5 '  H:  R   d '

// ================================================
// 0xe594: WORD 'UNK_0xe596' codep=0x224c parp=0xe596
// ================================================

void UNK_0xe596() // UNK_0xe596
{
  Push(0x0038);
  Push(0); // 0
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x63fa); // IFIELD(TEXT-CO)
  _1_dot_5_ex_(); // 1.5!
  Push(0x63fd); // IFIELD(TEXT-IN)
  _1_dot_5_ex_(); // 1.5!
  Push(0x6400); // IFIELD(TEXT-TE)
  Push(0x0026);
  Push(cc_BL); // BL
  FILL_1(); // FILL_1
  Push(0x6400); // IFIELD(TEXT-TE)
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push(1); // 1
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex_(); // +!
}


// ================================================
// 0xe5c4: WORD 'UNK_0xe5c6' codep=0x224c parp=0xe5c6
// ================================================

void UNK_0xe5c6() // UNK_0xe5c6
{

  UNK_0x3f3b("ELEMENTS");
  Push(pp_UNK_0xde3e); // UNK_0xde3e
  _1_dot_5_at_(); // 1.5@
  Push2Words("*STARSHIP-HOLD");
  UNK_0xe596(); // UNK_0xe596
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _st_INSERT(); // <INSERT
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xde3a); // UNK_0xde3a
  ON_3(); // ON_3
}


// ================================================
// 0xe5ed: WORD 'UNK_0xe5ef' codep=0x224c parp=0xe5ef
// ================================================

void UNK_0xe5ef() // UNK_0xe5ef
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(pp_UNK_0xde3e); // UNK_0xde3e
  _1_dot_5_ex_(); // 1.5!
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE

  label1:
  Push(0x63fd); // IFIELD(TEXT-IN)
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  _eq_(); // =
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x000a);
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  if (Pop() == 0) return;
  INEXT(); // INEXT
  goto label1;
}


// ================================================
// 0xe631: WORD 'UNK_0xe633' codep=0x224c parp=0xe633
// ================================================

void UNK_0xe633() // UNK_0xe633
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  _gt_R(); // >R
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0); // 0

  label2:
  Push(0x63fd); // IFIELD(TEXT-IN)
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(h); // I
  _eq_(); // =
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x001a);
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  Push(0x63fc); // IFIELD(INST-X)
  _2_at_(); // 2@
  Push(0xffff); Pust(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label1;
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!

  label1:
  INEXT(); // INEXT
  Push(Read16(sp)); // DUP
  _ask_FIRST(); // ?FIRST
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  R_gt_(); // R>
  Pop(); // DROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe689: WORD 'UNK_0xe68b' codep=0x224c parp=0xe68b
// ================================================

void UNK_0xe68b() // UNK_0xe68b
{
  SUBROOT(); // SUBROOT
  _gt_C_plus_S(); // >C+S
  UNK_0xe633(); // UNK_0xe633
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xde3a); // UNK_0xde3a
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  UNK_0xe5c6(); // UNK_0xe5c6

  label2:
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  UNK_0xe5ef(); // UNK_0xe5ef
  CI(); // CI
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  ITEM_gt_PA(); // ITEM>PA
  PAD(); // PAD
  COUNT(); // COUNT
  CI(); // CI
  Push(pp_UNK_0xde3e); // UNK_0xde3e
  _1_dot_5_at_(); // 1.5@
  UNK_0xe596(); // UNK_0xe596
  _2SWAP(); // 2SWAP
  _gt_INSERT(); // >INSERT

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe6c7: WORD 'UNK_0xe6c9' codep=0x224c parp=0xe6c9
// ================================================

void UNK_0xe6c9() // UNK_0xe6c9
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63fc); // IFIELD(INST-X)
  _2_at_(); // 2@
  SWAP(); // SWAP
  ICLOSE(); // ICLOSE
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_AT(); // ?ICONS-AT
}


// ================================================
// 0xe6dd: WORD 'UNK_0xe6df' codep=0x224c parp=0xe6df
// ================================================

void UNK_0xe6df() // UNK_0xe6df
{
  _at_ID(); // @ID
  Push(0x002b);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  Push(0x6401); // IFIELD(UNK_0xe081)
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xe707: WORD 'UNK_0xe709' codep=0x224c parp=0xe709
// ================================================

void UNK_0xe709() // UNK_0xe709
{
  Push(pp_UNK_0xde36); // UNK_0xde36
  OFF(); // OFF
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xe6c9(); // UNK_0xe6c9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_ICON(); // POINT>ICON
  UNK_0xe6df(); // UNK_0xe6df
  Push(pp_UNK_0xde36); // UNK_0xde36
  _plus__ex_(); // +!
  i++;
  } while(i<imax); // (LOOP) 0xfff6


  label1:
  Push(pp_UNK_0xde36); // UNK_0xde36
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_UNK_0xde36); // UNK_0xde36
  _ex__3(); // !_3
}


// ================================================
// 0xe739: WORD 'UNK_0xe73b' codep=0x224c parp=0xe73b
// ================================================

void UNK_0xe73b() // UNK_0xe73b
{
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0030);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN

  label2:
  Push(0xffff); Pust(0xffff);
  Push(0x63fc); // IFIELD(INST-X)
  D_ex_(); // D!
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  CDROP(); // CDROP

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe765: WORD 'UNK_0xe767' codep=0x224c parp=0xe767
// ================================================

void UNK_0xe767() // UNK_0xe767
{
  UNK_0xe6c9(); // UNK_0xe6c9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_ICON(); // POINT>ICON
  _at_ID(); // @ID
  Push(0x002b);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x00ff);
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(Read16(sp)); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__3(); // !_3
  Push(-Pop()); // NEGATE
  Push(0x63fa); // IFIELD(INST-QTY)
  _plus__ex_(); // +!
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xe0d7); // UNK_0xe0d7
  _ex__3(); // !_3
  Push(cc__6); // 6
  _eq_(); // =
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  if (Pop() == 0) goto label2;
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(0x6401); // IFIELD(UNK_0xe081)
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  goto label3;

  label2:
  Push(cc__3); // 3
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(0x6401); // IFIELD(UNK_0xe081)
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label4;
  Push(pp_UNK_0xe0d7); // UNK_0xe0d7
  Push(Read16(Pop())); // @
  Push(0x6401); // IFIELD(UNK_0xe081)
  Push(j); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(0x6401); // IFIELD(UNK_0xe081)
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(j); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  LEAVE(); // LEAVE

  label4:
  j++;
  } while(j<jmax); // (LOOP) 0xffd2


  label3:
  ICLOSE(); // ICLOSE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xff7c

}


// ================================================
// 0xe7f5: WORD 'UNK_0xe7f7' codep=0x224c parp=0xe7f7
// ================================================

void UNK_0xe7f7() // UNK_0xe7f7
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0030);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN

  label2:
  UNK_0xe767(); // UNK_0xe767
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe821: WORD 'UNK_0xe823' codep=0x224c parp=0xe823
// ================================================

void UNK_0xe823() // UNK_0xe823
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  Push(0x0031);
  _ex_INST_dash_SIB(); // !INST-SIB

  label1:
  ICLOSE(); // ICLOSE
  UNK_0xe6c9(); // UNK_0xe6c9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_ICON(); // POINT>ICON
  UNK_0xe6df(); // UNK_0xe6df
  if (Pop() == 0) goto label2;
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  Push(cc__4); // 4
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(0x6401); // IFIELD(UNK_0xe081)
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label3;
  Push(0x001a);
  Push(j); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label4;
  Push(cc__6); // 6
  goto label5;

  label4:
  Push(0x6401); // IFIELD(UNK_0xe081)
  Push(j); // I
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@

  label5:
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE

  label3:
  j++;
  } while(j<jmax); // (LOOP) 0xffbc

  Push(0x6401); // IFIELD(UNK_0xe081)
  Push(cc__7); // 7
  Push(0); // 0
  FILL_1(); // FILL_1
  ICLOSE(); // ICLOSE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xff9a

  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Push(pp_UNK_0xde36); // UNK_0xde36
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label6;
  Push(0x0030);
  _ex_INST_dash_SIB(); // !INST-SIB

  label6:
  IFIRST(); // IFIRST
  Push(0x000b);
  Push(0x0031);
  IFIND(); // IFIND
  if (Pop() == 0) goto label7;
  Push(0x000a);
  _ex_INST_dash_SIB(); // !INST-SIB

  label7:
  ICLOSE(); // ICLOSE
  UNK_0xe73b(); // UNK_0xe73b
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8e7: WORD 'UNK_0xe8e9' codep=0x224c parp=0xe8e9
// ================================================

void UNK_0xe8e9() // UNK_0xe8e9
{
  _gt_R(); // >R
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _dash_(); // -
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  R_gt_(); // R>
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xe905: WORD 'UNK_0xe907' codep=0x224c parp=0xe907
// ================================================

void UNK_0xe907() // UNK_0xe907
{
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  PRINT("SCROLL ITEMS: ^\  QUIT: []", 26); // (.")
}


// ================================================
// 0xe930: WORD 'UNK_0xe932' codep=0x224c parp=0xe932
// ================================================

void UNK_0xe932() // UNK_0xe932
{
  _gt_1FONT(); // >1FONT
  CTERASE(); // CTERASE
  UNK_0xe907(); // UNK_0xe907
  Push(cc__4); // 4
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  PRINT("ITEM", 4); // (.")
  Push(0x006c);
  Push(pp_XBLT); // XBLT
  _ex__3(); // !_3
  PRINT("VOLUME", 6); // (.")
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  _ex__3(); // !_3
  PRINT("VALUE", 5); // (.")
}


// ================================================
// 0xe96e: WORD 'UNK_0xe970' codep=0x224c parp=0xe970
// ================================================

void UNK_0xe970() // UNK_0xe970
{
  UNK_0xe48e(); // UNK_0xe48e
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_MOD(); // /MOD
  ICLOSE(); // ICLOSE
  UNK_0xe462(); // UNK_0xe462
  _gt_C_plus_S(); // >C+S
  Push(0x6400); // IFIELD(TEXT-TE)
  Push(0x001a);
  Push(Pop() + Pop()); // +
  Push(cc__6); // 6
  Push(0x002e);
  FILL_1(); // FILL_1
  U_gt__do_(); // U>$
  Push(0x6400); // IFIELD(TEXT-TE)
  Push(0x001e);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x6400); // IFIELD(TEXT-TE)
  Push(0x001f);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe9b8: WORD 'UNK_0xe9ba' codep=0x224c parp=0xe9ba
// ================================================

void UNK_0xe9ba() // UNK_0xe9ba
{
  UNK_0xe48e(); // UNK_0xe48e
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  UNK_0xe462(); // UNK_0xe462
  _gt_C_plus_S(); // >C+S
  IDELETE(); // IDELETE
  Push(cc__dash_1); // -1
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex_(); // +!
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe9e0: WORD 'UNK_0xe9e2' codep=0x224c parp=0xe9e2
// ================================================

void UNK_0xe9e2() // UNK_0xe9e2
{
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xe462(); // UNK_0xe462
  UNK_0xe47c(); // UNK_0xe47c
  _gt_C_plus_S(); // >C+S
  IDELETE(); // IDELETE
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xfff4

  return;

  label1:
  UNK_0xe48e(); // UNK_0xe48e
  _at_INST_dash_CLASS(); // @INST-CLASS
  ICLOSE(); // ICLOSE
  Push(0x001a);
  _eq_(); // =
  if (Pop() == 0) return;
  UNK_0xe970(); // UNK_0xe970
}


// ================================================
// 0xea12: WORD 'UNK_0xea14' codep=0x224c parp=0xea14
// ================================================

void UNK_0xea14() // UNK_0xea14
{
  Push(0xc227);
  MODULE(); // MODULE
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  PRINT("PRESS ANY KEY TO CONTINUE", 25); // (.")
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xea60); Pust(0x0000);
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _i_KEY(); // 'KEY
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xea60: WORD 'UNK_0xea62' codep=0x224c parp=0xea62
// ================================================

void UNK_0xea62() // UNK_0xea62
{
  SetColor("BLACK");
  UNK_0xe8e9(); // UNK_0xe8e9
  CTINIT(); // CTINIT
  LoadData("UNK_0xe044"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  LoadData("UNK_0xe03c"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0039);
  Push(pp_FILE_n_); // FILE#
  _ex__3(); // !_3
  Push(pp_RECORD_n_); // RECORD#
  _ex__3(); // !_3
  Push(0); // 0
  Push(2); // 2
  CTPOS_dot_(); // CTPOS.
  Push(0x00be);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  LoadData("UNK_0xe04c"); // from 'ANALYZE-TEXT'
  Push(i); // I
  Push(Pop() + Pop()); // +
  PAD(); // PAD
  Push(0x0026);
  CMOVE(); // CMOVE
  PAD(); // PAD
  Push(0x0026);
  _dash_TRAILING(); // -TRAILING
  Push(0x0026);
  OVER(); // OVER
  _dash_(); // -
  Push(Pop()>>1); // 2/
  SPACES(); // SPACES
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  GCR(); // GCR
  Push(0x0026);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffd4

  SET_dash_CURRENT(); // SET-CURRENT
  goto label2;

  label1:
  Push(1); // 1
  Push(cc__3); // 3
  CTPOS_dot_(); // CTPOS.
  PRINT("THIS ARTIFACT HAS NOT BEEN ANALYZED", 35); // (.")

  label2:
  UNK_0xea14(); // UNK_0xea14
}


// ================================================
// 0xeaf2: WORD 'UNK_0xeaf4' codep=0x224c parp=0xeaf4
// ================================================

void UNK_0xeaf4() // UNK_0xeaf4
{
  Push(0x000d);
  UNK_0xde74(); // UNK_0xde74
  Push(pp__ask_12); // ?12
  _ex__3(); // !_3
  Push(pp_E_dash_USE); // E-USE
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  UNK_0xde74(); // UNK_0xde74
  if (Pop() == 0) goto label1;
  Push(Pop()>>1); // 2/

  label1:
  Push(pp__dash_END); // -END
  _ex__3(); // !_3
}


// ================================================
// 0xeb12: WORD 'UNK_0xeb14' codep=0x224c parp=0xeb14
// ================================================

void UNK_0xeb14() // UNK_0xeb14
{
  Push(0xc7ab);
  MODULE(); // MODULE
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(-Pop()); // NEGATE
  Push(Read16(sp)); // DUP
  Push(0x63fa); // IFIELD(INST-QTY)
  _plus__ex_(); // +!
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6432); // IFIELD(UNK_0xe0d2)
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  Push(Read16(sp)); // DUP
  Push(0xfff6);
  M_star_(); // M*
  Push(pp__10_star_CARGO); // 10*CARGO
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp__10_star_CARGO); // 10*CARGO
  D_ex_(); // D!
  Push(0x001a);
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  _2DUP(); // 2DUP
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe970(); // UNK_0xe970
  UNK_0xe9ba(); // UNK_0xe9ba
  UNK_0xe68b(); // UNK_0xe68b
  UNK_0xe970(); // UNK_0xe970
  goto label2;

  label1:
  Pop(); Pop();// 2DROP

  label2:
  Push(0xbd4a);
  MODULE(); // MODULE
  _dot_SORD(); // .SORD
}


// ================================================
// 0xeb80: WORD 'UNK_0xeb82' codep=0x224c parp=0xeb82
// ================================================

void UNK_0xeb82() // UNK_0xeb82
{
  Push(0x63f9); // IFIELD(INST-SP)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fb); // IFIELD(PHRASE-MEM)
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  ICLOSE(); // ICLOSE
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0xc216);
  MODULE(); // MODULE
  UNK_0xea14(); // UNK_0xea14
}


// ================================================
// 0xeb9c: WORD 'UNK_0xeb9e' codep=0x224c parp=0xeb9e
// ================================================

void UNK_0xeb9e() // UNK_0xeb9e
{
  CTERASE(); // CTERASE
  SetColor("WHITE");
  Push(pp_CTCOLOR); // CTCOLOR
  _ex__3(); // !_3
  UNK_0xeb82(); // UNK_0xeb82
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN

  label1:
  UNK_0xeb82(); // UNK_0xeb82
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xebbe: WORD 'UNK_0xebc0' codep=0x224c parp=0xebc0
// ================================================

void UNK_0xebc0() // UNK_0xebc0
{
  Push(0x01e0);
  _dash_(); // -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(0x0480);
  _dash_(); // -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xebe6: WORD 'UNK_0xebe8' codep=0x224c parp=0xebe8
// ================================================

void UNK_0xebe8() // UNK_0xebe8
{
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  PRINT("W", 1); // (.")
  goto label3;

  label2:
  PRINT("E", 1); // (.")

  label3:
  return;

  label1:
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xec0a: WORD 'UNK_0xec0c' codep=0x224c parp=0xec0c
// ================================================

void UNK_0xec0c() // UNK_0xec0c
{
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  PRINT("S", 1); // (.")
  goto label3;

  label2:
  PRINT("N", 1); // (.")

  label3:
  return;

  label1:
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xec2e: WORD 'UNK_0xec30' codep=0x224c parp=0xec30
// ================================================

void UNK_0xec30() // UNK_0xec30
{
  UNK_0xebc0(); // UNK_0xebc0
  Push(Read16(sp)); // DUP
  Push(Read16(sp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  Push(-Pop()); // NEGATE

  label1:
  Push(0); // 0
  _dot_R(); // .R
  UNK_0xec0c(); // UNK_0xec0c
  PRINT(" * ", 3); // (.")
  Push(Read16(sp)); // DUP
  Push(Read16(sp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  Push(-Pop()); // NEGATE

  label2:
  Push(0); // 0
  _dot_R(); // .R
  UNK_0xebe8(); // UNK_0xebe8
}


// ================================================
// 0xec5e: WORD 'UNK_0xec60' codep=0x224c parp=0xec60
// ================================================

void UNK_0xec60() // UNK_0xec60
{
  CTCR(); // CTCR
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(": ", 2); // (.")
  CTINIT(); // CTINIT
}


// ================================================
// 0xec71: WORD 'UNK_0xec73' codep=0x224c parp=0xec73
// ================================================

void UNK_0xec73() // UNK_0xec73
{
  SetColor("BLACK");
  UNK_0xe8e9(); // UNK_0xe8e9
  Push(0); // 0
  Push(1); // 1
  CTPOS_dot_(); // CTPOS.

  UNK_0x3f3b("SYSTEM");
  UNK_0xec60(); // UNK_0xec60
  Push(0x6404); // IFIELD(UNK_0xe0c3)
  Push(Read8(Pop())&0xFF); // C@
  Push(0); // 0
  _dot_R(); // .R
  PRINT(",", 1); // (.")
  Push(0x6405); // IFIELD(UNK_0xe0c8)
  Push(Read8(Pop())&0xFF); // C@
  _dot_(); // .

  UNK_0x3f3b("PLANET");
  UNK_0xec60(); // UNK_0xec60
  Push(0x6406); // IFIELD(UNK_0xe0cd)
  Push(Read8(Pop())&0xFF); // C@
  _dot_(); // .

  UNK_0x3f3b("LOCATION");
  UNK_0xec60(); // UNK_0xec60
  Push(0x63fc); // IFIELD(INST-X)
  _2_at_(); // 2@
  SWAP(); // SWAP
  UNK_0xec30(); // UNK_0xec30

  UNK_0x3f3b("DATE");
  UNK_0xec60(); // UNK_0xec60
  Push(0x6402); // IFIELD(UNK_0xe0b9)
  Push(Read16(Pop())); // @
  PAD(); // PAD
  DATE_do__gt_ADR(); // DATE$>ADR
  PAD(); // PAD
  Push(0x000a);
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  UNK_0xea14(); // UNK_0xea14
}


// ================================================
// 0xecdd: WORD 'UNK_0xecdf' codep=0x224c parp=0xecdf
// ================================================

void UNK_0xecdf() // UNK_0xecdf
{
  Push(0xc794);
  MODULE(); // MODULE
  Pop(); // DROP
  UNK_0xe9e2(); // UNK_0xe9e2
  Push(0xbd4a);
  MODULE(); // MODULE
  _dot_SORD(); // .SORD
}


// ================================================
// 0xecf3: WORD 'UNK_0xecf5' codep=0x224c parp=0xecf5
// ================================================

void UNK_0xecf5() // UNK_0xecf5
{
  Push(0x63fc); // IFIELD(INST-X)
  _2_at_(); // 2@
  Push(0xffff); Pust(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  UNK_0xeb14(); // UNK_0xeb14
  return;

  label1:
  UNK_0xecdf(); // UNK_0xecdf
}


// ================================================
// 0xed0f: WORD '1STOPTION' codep=0x4a4f parp=0xed1d
// ================================================
// 0xed1d: db 0x05 0x00 0x48 0x3a 0x1c 0x00 0x62 0xea 0x1b 0x00 0x9e 0xeb 0x1a 0x00 0xf5 0xec 0x28 0x00 0x73 0xec 0x2b 0x00 0x73 0xec '  H:  b         ( s + s '

// ================================================
// 0xed35: WORD 'UNK_0xed37' codep=0x1d29 parp=0xed37
// ================================================
// 0xed37: db 0x3a 0x20 ': '

// ================================================
// 0xed39: WORD 'UNK_0xed3b' codep=0x1d29 parp=0xed3b
// ================================================
// 0xed3b: db 0x3a 0x20 ': '

// ================================================
// 0xed3d: WORD 'DO-OPTION' codep=0x224c parp=0xed4b
// ================================================

void DO_dash_OPTION() // DO-OPTION
{
  Push(pp_UNK_0xed37); // UNK_0xed37
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xecdf(); // UNK_0xecdf
  goto label2;

  label1:
  _at_INST_dash_CLASS(); // @INST-CLASS
  Pop();
  switch(Pop()) // 1STOPTION
  {
  case 28:
    UNK_0xea62(); // UNK_0xea62
    break;
  case 27:
    UNK_0xeb9e(); // UNK_0xeb9e
    break;
  case 26:
    UNK_0xecf5(); // UNK_0xecf5
    break;
  case 40:
    UNK_0xec73(); // UNK_0xec73
    break;
  case 43:
    UNK_0xec73(); // UNK_0xec73
    break;
  default:
    NOP(); // NOP
    break;

  }

  label2:
  Push(1); // 1
}


// ================================================
// 0xed61: WORD 'UNK_0xed63' codep=0x224c parp=0xed63
// ================================================

void UNK_0xed63() // UNK_0xed63
{
  PRINT(" JETTISON", 9); // (.")
  Push(0); // 0
}


// ================================================
// 0xed73: WORD 'UNK_0xed75' codep=0x224c parp=0xed75
// ================================================

void UNK_0xed75() // UNK_0xed75
{
  PRINT(" DESCRIBE", 9); // (.")
  GCR(); // GCR
  UNK_0xed63(); // UNK_0xed63
  Push(Pop()+1); // 1+
}


// ================================================
// 0xed89: WORD 'UNK_0xed8b' codep=0x224c parp=0xed8b
// ================================================

void UNK_0xed8b() // UNK_0xed8b
{
  PRINT(" PLAYBACK", 9); // (.")
  GCR(); // GCR
  PRINT(" ERASE", 6); // (.")
  Push(1); // 1
}


// ================================================
// 0xeda6: WORD 'UNK_0xeda8' codep=0x224c parp=0xeda8
// ================================================

void UNK_0xeda8() // UNK_0xeda8
{
  Push(0x63fc); // IFIELD(INST-X)
  _2_at_(); // 2@
  Push(0xffff); Pust(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  PRINT(" PICKUP", 7); // (.")
  Push(0); // 0
  return;

  label1:
  UNK_0xed63(); // UNK_0xed63
}


// ================================================
// 0xedcc: WORD 'ITEM-OPTIONS' codep=0x4a4f parp=0xeddd
// ================================================
// 0xeddd: db 0x05 0x00 0x63 0xed 0x1c 0x00 0x75 0xed 0x1b 0x00 0x8b 0xed 0x2b 0x00 0x8b 0xed 0x28 0x00 0x75 0xed 0x1a 0x00 0xa8 0xed '  c   u     +   ( u     '

// ================================================
// 0xedf5: WORD 'UNK_0xedf7' codep=0x224c parp=0xedf7
// ================================================

void UNK_0xedf7() // UNK_0xedf7
{
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  _dash_(); // -
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  _at_INST_dash_CLASS(); // @INST-CLASS
  Pop();
  switch(Pop()) // ITEM-OPTIONS
  {
  case 28:
    UNK_0xed75(); // UNK_0xed75
    break;
  case 27:
    UNK_0xed8b(); // UNK_0xed8b
    break;
  case 43:
    UNK_0xed8b(); // UNK_0xed8b
    break;
  case 40:
    UNK_0xed75(); // UNK_0xed75
    break;
  case 26:
    UNK_0xeda8(); // UNK_0xeda8
    break;
  default:
    UNK_0xed63(); // UNK_0xed63
    break;

  }
  Push(pp_UNK_0xed3b); // UNK_0xed3b
  _ex__3(); // !_3
  Push(pp_UNK_0xed37); // UNK_0xed37
  OFF(); // OFF
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  Push(cc__4); // 4
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  PRINT("^\ SELECT OPTION OR [ QUIT ]", 28); // (.")
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _dash_(); // -
  UNK_0xe4ae(); // UNK_0xe4ae
}


// ================================================
// 0xee48: WORD 'UNK_0xee4a' codep=0x224c parp=0xee4a
// ================================================

void UNK_0xee4a() // UNK_0xee4a
{
  UNK_0xe48e(); // UNK_0xe48e
  _at_INST_dash_CLASS(); // @INST-CLASS
  ICLOSE(); // ICLOSE
  Push(0x000b);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xe48e(); // UNK_0xe48e
  SetColor("BLACK");
  UNK_0xe4e2(); // UNK_0xe4e2
  UNK_0xe8e9(); // UNK_0xe8e9
  UNK_0xedf7(); // UNK_0xedf7

  label6:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xed37); // UNK_0xed37
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(sp)); // DUP
  Push(0); // 0
  Push(pp_UNK_0xed3b); // UNK_0xed3b
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xed37); // UNK_0xed37
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(Pop()+1); // 1+
  UNK_0xe4ae(); // UNK_0xe4ae
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xed37); // UNK_0xed37
  _ex__3(); // !_3
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(Pop()+1); // 1+
  UNK_0xe4ae(); // UNK_0xe4ae
  goto label2;

  label3:
  Pop(); // DROP

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label4;
  DO_dash_OPTION(); // DO-OPTION
  goto label5;

  label4:
  Push(0); // 0

  label5:
  Push(pp_FQUIT); // FQUIT
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label6;
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label7;
  UNK_0xe932(); // UNK_0xe932
  UNK_0xe51a(); // UNK_0xe51a

  label7:
  return;

  label1:
  BEEP(); // BEEP
}


// ================================================
// 0xeef0: WORD 'UNK_0xeef2' codep=0x224c parp=0xeef2
// ================================================

void UNK_0xeef2() // UNK_0xeef2
{
  CTINIT(); // CTINIT
  PRINT("STARSHIP HOLD IS EMPTY.", 23); // (.")
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xef16: WORD '(/ITEMS)' codep=0x224c parp=0xef23
// ================================================
// entry

void _ro__slash_ITEMS_rc_() // (/ITEMS)
{
  CTERASE(); // CTERASE
  UNK_0xe709(); // UNK_0xe709
  Push(pp_UNK_0xde36); // UNK_0xde36
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Push(pp_UNK_0xde3a); // UNK_0xde3a
  _ex__3(); // !_3
  CI(); // CI
  Push(Pop() | Pop()); // OR
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0x002b);
  Push(cc__3); // 3
  Push(cc__7); // 7
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xe932(); // UNK_0xe932
  MAKE_dash_SC(); // MAKE-SC
  if (Pop() == 0) goto label2;
  UNK_0xe823(); // UNK_0xe823

  label2:
  Push2Words("*STARSHIP-HOLD");
  GET_dash_BOX(); // GET-BOX
  Push2Words("*STARSHIP-HOLD");
  UNK_0xe49e(); // UNK_0xe49e
  UNK_0xe51a(); // UNK_0xe51a

  label4:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  Pop();
  switch(Pop()) // TD-SCROLL
  {
  case 1:
    UNK_0xe552(); // UNK_0xe552
    break;
  case 65535:
    UNK_0xe564(); // UNK_0xe564
    break;
  default:
    NOP(); // NOP
    break;

  }
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
  UNK_0xee4a(); // UNK_0xee4a
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF

  label3:
  _ask_QUIT(); // ?QUIT
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  delete_dash_scroll_dash_box(); // delete-scroll-box
  UNK_0xe4e2(); // UNK_0xe4e2
  goto label5;

  label1:
  Pop(); // DROP
  UNK_0xeef2(); // UNK_0xeef2

  label5:
  CTERASE(); // CTERASE
  UNK_0xeaf4(); // UNK_0xeaf4
  UNK_0xe7f7(); // UNK_0xe7f7
}


// ================================================
// 0xefab: WORD 'UNK_0xefad' codep=0x224c parp=0xefad
// ================================================

void UNK_0xefad() // UNK_0xefad
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  _ex__3(); // !_3
  Push(1); // 1
  Push(pp_RECORD_n_); // RECORD#
  _ex__3(); // !_3
}


// ================================================
// 0xefbd: WORD 'UNK_0xefbf' codep=0x224c parp=0xefbf
// ================================================

void UNK_0xefbf() // UNK_0xefbf
{
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xefc7: WORD '>DESCEND' codep=0x224c parp=0xefd4
// ================================================
// entry

void _gt_DESCEND() // >DESCEND
{
  UNK_0xefad(); // UNK_0xefad

  UNK_0x3f3b("LAUNCH");
  LoadData("1BTN"); // from 'BUTTONS     '
  UNK_0xefbf(); // UNK_0xefbf
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  OFF(); // OFF
  Push(0x3a48);
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _ex__3(); // !_3
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6434); // IFIELD(UNK_0xe054)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00ef);
  Push(Pop() & Pop()); // AND
  Push(0x6434); // IFIELD(UNK_0xe054)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf005: WORD 'UNK_0xf007' codep=0x224c parp=0xf007
// ================================================

void UNK_0xf007() // UNK_0xf007
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("READY TO LAUNCH", 15); // (.")
  CTCR(); // CTCR
  PRINT("CONFIRM: [N Y]", 14); // (.")
  Y_slash_N(); // Y/N
  if (Pop() == 0) goto label1;
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(pp__i_LAUNCH); // 'LAUNCH
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label3;
  Push(0xc3e1);
  MODULE(); // MODULE
  Push(0xd184);
  MODULE(); // MODULE
  Push(0xc3ba);
  MODULE(); // MODULE
  Push(0xc3f3);
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  _ex__3(); // !_3

  label3:
  goto label4;

  label2:
  Push(0xd184);
  MODULE(); // MODULE
  Push(1); // 1

  label4:
  if (Pop() == 0) goto label5;
  UNK_0xefad(); // UNK_0xefad

  UNK_0x3f3b("LAND  ");
  LoadData("1BTN"); // from 'BUTTONS     '
  UNK_0xefbf(); // UNK_0xefbf

  label5:
  Push(pp_STIME); // STIME
  _2_at_(); // 2@
  Push(0x03e8); Pust(0x0000);
  D_st_(); // D<
  if (Pop() == 0) goto label6;
  Push(pp__ask_SECURE); // ?SECURE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label6;
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp__ask_SECURE); // ?SECURE
  _ex__3(); // !_3
  BEEP(); // BEEP

  label6:
  return;

  label1:
  CTERASE(); // CTERASE
  PRINT("CANCELLED", 9); // (.")
}


// ================================================
// 0xf0cb: WORD 'UNK_0xf0cd' codep=0x224c parp=0xf0cd
// ================================================

void UNK_0xf0cd() // UNK_0xf0cd
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE'RE NOT IN ORBIT", 18); // (.")
}


// ================================================
// 0xf0e8: WORD 'UNK_0xf0ea' codep=0x224c parp=0xf0ea
// ================================================

void UNK_0xf0ea() // UNK_0xf0ea
{
  Push(pp__ask_PORT); // ?PORT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE CAN'T LAND ON ARTH", 21); // (.")
  Push(0); // 0
  return;

  label1:
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf0cd(); // UNK_0xf0cd
  Push(0); // 0
}


// ================================================
// 0xf12a: WORD '(/LAUNCH/LAND)' codep=0x224c parp=0xf13d
// ================================================
// entry

void _ro__slash_LAUNCH_slash_LAND_rc_() // (/LAUNCH/LAND)
{
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(1); // 1
  _eq_(); // =
  SWAP(); // SWAP
  Push(cc__5); // 5
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  Push(0xbdef);
  MODULE(); // MODULE
  goto label2;

  label1:
  Push(1); // 1

  label2:
  if (Pop() == 0) goto label3;
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  Push(cc__5); // 5
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  UNK_0xf007(); // UNK_0xf007
  Push(0); // 0
  goto label5;

  label4:
  UNK_0xf0ea(); // UNK_0xf0ea

  label5:
  return;

  label3:
  Push(0); // 0
}


// ================================================
// 0xf18b: WORD 'UNK_0xf18d' codep=0x1d29 parp=0xf18d
// ================================================
// 0xf18d: db 0x3a 0x20 ': '

// ================================================
// 0xf18f: WORD 'UNK_0xf191' codep=0x224c parp=0xf191
// ================================================

void UNK_0xf191() // UNK_0xf191
{
  Push(pp_UNK_0xf18d); // UNK_0xf18d
  _plus__ex_(); // +!
}


// ================================================
// 0xf197: WORD 'UNK_0xf199' codep=0x224c parp=0xf199
// ================================================

void UNK_0xf199() // UNK_0xf199
{
  LoadData("UNK_0xe08e"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _st_(); // <
  Push(Read16(sp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf191(); // UNK_0xf191
}


// ================================================
// 0xf1a9: WORD 'UNK_0xf1ab' codep=0x224c parp=0xf1ab
// ================================================

void UNK_0xf1ab() // UNK_0xf1ab
{
  LoadData("UNK_0xe086"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _gt_(); // >
  Push(Read16(sp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf191(); // UNK_0xf191
}


// ================================================
// 0xf1bb: WORD 'UNK_0xf1bd' codep=0x224c parp=0xf1bd
// ================================================

void UNK_0xf1bd() // UNK_0xf1bd
{
  LoadData("UNK_0xe061"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(0x0045);
  _gt_(); // >
  OVER(); // OVER
  Push(0x0083);
  _st_(); // <
  Push(Pop() + Pop()); // +
  UNK_0xf191(); // UNK_0xf191
  Push(0x00c8);
  _gt_(); // >
}


// ================================================
// 0xf1dd: WORD 'UNK_0xf1df' codep=0x224c parp=0xf1df
// ================================================

void UNK_0xf1df() // UNK_0xf1df
{
  LoadData("UNK_0xe069"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(cc__4); // 4
  _st_(); // <
  OVER(); // OVER
  Push(cc__3); // 3
  _st_(); // <
  Push(Pop() + Pop()); // +
  UNK_0xf191(); // UNK_0xf191
  Push(2); // 2
  _gt_(); // >
}


// ================================================
// 0xf1f9: WORD 'UNK_0xf1fb' codep=0x224c parp=0xf1fb
// ================================================

void UNK_0xf1fb() // UNK_0xf1fb
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  Push(0x000f);
  Push(0x0011);
  WITHIN(); // WITHIN
  Push(pp_HYDRO); // HYDRO
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf217: WORD 'UNK_0xf219' codep=0x224c parp=0xf219
// ================================================

void UNK_0xf219() // UNK_0xf219
{
  Push(pp_HYDRO); // HYDRO
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  Push(0x0015);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf231: WORD 'UNK_0xf233' codep=0x224c parp=0xf233
// ================================================

void UNK_0xf233() // UNK_0xf233
{
  LoadData("UNK_0xe071"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  UNK_0xf191(); // UNK_0xf191
}


// ================================================
// 0xf23d: WORD 'UNK_0xf23f' codep=0x224c parp=0xf23f
// ================================================

void UNK_0xf23f() // UNK_0xf23f
{
  LoadData("UNK_0xe079"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(sp)); // DUP
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(0x0032);
  _slash_(); // /
  MAX(); // MAX
  UNK_0xf191(); // UNK_0xf191
}


// ================================================
// 0xf255: WORD 'UNK_0xf257' codep=0x224c parp=0xf257
// ================================================

void UNK_0xf257() // UNK_0xf257
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("NAME THIS PLANET: ", 18); // (.")
  CTCR(); // CTCR
  Push(0x6404); // IFIELD(UNK_0xe0af)
  Push(0x000f);
  Push(cc_BL); // BL
  FILL_1(); // FILL_1
  Push(0x000f);
  Push(0xbd5b);
  MODULE(); // MODULE
  COUNT(); // COUNT
  Push(0x6404); // IFIELD(UNK_0xe0af)
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xf290: WORD 'UNK_0xf292' codep=0x224c parp=0xf292
// ================================================

void UNK_0xf292() // UNK_0xf292
{
  Push(0xc52d);
  MODULE(); // MODULE
  Push(0x63f9); // IFIELD(UNK_0xe096)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x03e8);
  U_star_(); // U*
  Push(0x0064); Pust(0x0000);
  DMAX(); // DMAX
  Push(0x6403); // IFIELD(UNK_0xe0aa)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  DNEGATE(); // DNEGATE

  label1:
  Push(0xc5ca);
  MODULE(); // MODULE
  Push(0x6403); // IFIELD(UNK_0xe0aa)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  _3_star_(); // 3*
  Push(0xc542);
  MODULE(); // MODULE
}


// ================================================
// 0xf2ca: WORD 'UNK_0xf2cc' codep=0x1d29 parp=0xf2cc
// ================================================
// 0xf2cc: db 0x00 0x00 '  '

// ================================================
// 0xf2ce: WORD 'UNK_0xf2d0' codep=0x224c parp=0xf2d0
// ================================================

void UNK_0xf2d0() // UNK_0xf2d0
{
  Push2Words("*OP");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002d);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x0024);
  Push(0); // 0
  Push(1); // 1
  _star_CREATE(); // *CREATE
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fc); // IFIELD(INST-X)
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
  Push(0x63fc); // IFIELD(INST-X)
  D_ex_(); // D!
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(0x6402); // IFIELD(UNK_0xe0a5)
  C_ex_(); // C!
}


// ================================================
// 0xf30c: WORD 'UNK_0xf30e' codep=0x224c parp=0xf30e
// ================================================

void UNK_0xf30e() // UNK_0xf30e
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf1ab(); // UNK_0xf1ab
  UNK_0xf199(); // UNK_0xf199
  Push(Pop()*2); // 2*
  Push(Pop() | Pop()); // OR
  UNK_0xf1bd(); // UNK_0xf1bd
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  UNK_0xf1df(); // UNK_0xf1df
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  UNK_0xf1fb(); // UNK_0xf1fb
  Push(Pop()<<4); // 16*
  Push(Pop() | Pop()); // OR
  UNK_0xf219(); // UNK_0xf219
  Push(0x0020);
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  UNK_0xf233(); // UNK_0xf233
  UNK_0xf23f(); // UNK_0xf23f
  ICLOSE(); // ICLOSE
  Push(0x6403); // IFIELD(UNK_0xe0aa)
  C_ex_(); // C!
}


// ================================================
// 0xf346: WORD 'UNK_0xf348' codep=0x224c parp=0xf348
// ================================================

void UNK_0xf348() // UNK_0xf348
{
  Push(0x6403); // IFIELD(UNK_0xe0aa)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xf2cc); // UNK_0xf2cc
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  MIN(); // MIN
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(1); // 1
  Push(pp_UNK_0xf2cc); // UNK_0xf2cc
  _plus__ex_(); // +!
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
  goto label2;

  label1:
  Push(pp_UNK_0xf18d); // UNK_0xf18d
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *

  label2:
  Push(0x63f9); // IFIELD(UNK_0xe096)
  C_ex_(); // C!
}


// ================================================
// 0xf378: WORD 'UNK_0xf37a' codep=0x224c parp=0xf37a
// ================================================

void UNK_0xf37a() // UNK_0xf37a
{
  Push(pp_UNK_0xf18d); // UNK_0xf18d
  OFF(); // OFF
  UNK_0xf2d0(); // UNK_0xf2d0
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(0x63fa); // IFIELD(UNK_0xe09b)
  _ex__3(); // !_3
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(1); // 1
  Push(0x63fa); // IFIELD(INST-QTY)
  _plus__ex_(); // +!
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(0x6400); // IFIELD(UNK_0xe0a0)
  _ex__3(); // !_3
  UNK_0xf30e(); // UNK_0xf30e
  UNK_0xf348(); // UNK_0xf348
  UNK_0xf257(); // UNK_0xf257
  UNK_0xf292(); // UNK_0xf292
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp__ask_EVAL); // ?EVAL
  ON_3(); // ON_3
}


// ================================================
// 0xf3b0: WORD 'UNK_0xf3b2' codep=0x224c parp=0xf3b2
// ================================================

void UNK_0xf3b2() // UNK_0xf3b2
{
  UNK_0xf37a(); // UNK_0xf37a
  CTCR(); // CTCR
  PRINT("RECOMMENDATION LOGGED.", 22); // (.")
}


// ================================================
// 0xf3d1: WORD 'UNK_0xf3d3' codep=0x224c parp=0xf3d3
// ================================================

void UNK_0xf3d3() // UNK_0xf3d3
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  BIT(); // BIT
  Push(Read16(sp)); // DUP
  ICLOSE(); // ICLOSE
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  Push(0x6401); // IFIELD(UNK_0xe0be)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() & Pop()); // AND
  Push(Read16(sp)); // DUP
  ROT(); // ROT
  Push(0x6401); // IFIELD(UNK_0xe0be)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() | Pop()); // OR
  Push(0x6401); // IFIELD(UNK_0xe0be)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  PRINT("THIS PLANET HAS ALREADY BEEN LOGGED.", 36); // (.")

  label1:
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf42a: WORD '(/LOG-PLAN)' codep=0x224c parp=0xf43a
// ================================================
// entry

void _ro__slash_LOG_dash_PLAN_rc_() // (/LOG-PLAN)
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(pp__dash_AIN); // -AIN
  OFF(); // OFF
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x000c);
  Push(0); // 0
  IFIND(); // IFIND
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label2;
  PRINT("THAT'S ARTH YOU FOOL!", 21); // (.")
  goto label3;

  label2:
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label4;
  PRINT("RECOMMEND THIS PLANET FOR", 25); // (.")
  CTCR(); // CTCR
  PRINT("COLONIZATION? [N Y]", 19); // (.")
  Y_slash_N(); // Y/N
  CTCR(); // CTCR
  if (Pop() == 0) goto label5;
  UNK_0xf3d3(); // UNK_0xf3d3
  if (Pop() == 0) goto label5;
  Push(0xc5a8);
  MODULE(); // MODULE
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp_PORTDAT); // PORTDAT
  _ex__3(); // !_3
  UNK_0xf3b2(); // UNK_0xf3b2

  label5:
  goto label3;

  label4:
  UNK_0xf0cd(); // UNK_0xf0cd

  label3:
  return;

  label1:
  UNK_0xf0cd(); // UNK_0xf0cd
}

// 0xf4ec: db 0x43 0x41 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x43 0x41 0x50 0x54 0x41 0x49 0x4e 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x43 0x31 0x33 0x36 0x35 0x44 0x4f 0x57 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x5f 0x31 0x32 0x38 0x30 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x53 0x54 0x50 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'CAP-VOC_________________________ for CAPTAIN -----------------)C1365DOWN---------------)_1280_____ for STP---------- '
  