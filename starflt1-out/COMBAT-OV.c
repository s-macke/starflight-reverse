// ====== OVERLAY 'COMBAT-OV' ======
// store offset = 0xdd30
// overlay size   = 0x1830

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1705:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0x6a50 C-string:'UNK_0x3f3b'
// 1706:      UNK_0xa98d  codep:0x224c parp:0xa98d size:0x0006 C-string:'UNK_0xa98d'
// 1707:      UNK_0xa995  codep:0x224c parp:0xa995 size:0x0006 C-string:'UNK_0xa995'
// 1708:      UNK_0xa99d  codep:0x224c parp:0xa99d size:0x0006 C-string:'UNK_0xa99d'
// 1709:      UNK_0xa9a5  codep:0x224c parp:0xa9a5 size:0x000a C-string:'UNK_0xa9a5'
// 1710:      UNK_0xa9b1  codep:0x224c parp:0xa9b1 size:0x000a C-string:'UNK_0xa9b1'
// 1711:      UNK_0xa9bd  codep:0x224c parp:0xa9bd size:0x0006 C-string:'UNK_0xa9bd'
// 1712:      UNK_0xa9c5  codep:0x224c parp:0xa9c5 size:0x0006 C-string:'UNK_0xa9c5'
// 1713:      UNK_0xa9cd  codep:0x224c parp:0xa9cd size:0x0006 C-string:'UNK_0xa9cd'
// 1714:      UNK_0xa9d5  codep:0x224c parp:0xa9d5 size:0x0004 C-string:'UNK_0xa9d5'
// 1715:      UNK_0xa9db  codep:0x224c parp:0xa9db size:0x3369 C-string:'UNK_0xa9db'
// 1716:      UNK_0xdd46  codep:0x224c parp:0xdd46 size:0x0012 C-string:'UNK_0xdd46'
// 1717:      UNK_0xdd5a  codep:0x224c parp:0xdd5a size:0x0008 C-string:'UNK_0xdd5a'
// 1718:      UNK_0xdd64  codep:0x224c parp:0xdd64 size:0x000a C-string:'UNK_0xdd64'
// 1719:      UNK_0xdd70  codep:0x224c parp:0xdd70 size:0x0006 C-string:'UNK_0xdd70'
// 1720:      UNK_0xdd78  codep:0x224c parp:0xdd78 size:0x001e C-string:'UNK_0xdd78'
// 1721:      UNK_0xdd98  codep:0x73ea parp:0xdd98 size:0x001e C-string:'UNK_0xdd98'
// 1722:      UNK_0xddb8  codep:0x744d parp:0xddb8 size:0x0008 C-string:'UNK_0xddb8'
// 1723:      UNK_0xddc2  codep:0x744d parp:0xddc2 size:0x0003 C-string:'UNK_0xddc2'
// 1724:      UNK_0xddc7  codep:0x744d parp:0xddc7 size:0x0003 C-string:'UNK_0xddc7'
// 1725:      UNK_0xddcc  codep:0x744d parp:0xddcc size:0x0011 C-string:'UNK_0xddcc'
// 1726:      UNK_0xdddf  codep:0x744d parp:0xdddf size:0x0021 C-string:'UNK_0xdddf'
// 1727:      UNK_0xde02  codep:0x744d parp:0xde02 size:0x0003 C-string:'UNK_0xde02'
// 1728:      UNK_0xde07  codep:0x744d parp:0xde07 size:0x0003 C-string:'UNK_0xde07'
// 1729:      UNK_0xde0c  codep:0x744d parp:0xde0c size:0x0003 C-string:'UNK_0xde0c'
// 1730:      UNK_0xde11  codep:0x744d parp:0xde11 size:0x0003 C-string:'UNK_0xde11'
// 1731:      UNK_0xde16  codep:0x744d parp:0xde16 size:0x0003 C-string:'UNK_0xde16'
// 1732:      UNK_0xde1b  codep:0x744d parp:0xde1b size:0x0003 C-string:'UNK_0xde1b'
// 1733:      UNK_0xde20  codep:0x744d parp:0xde20 size:0x0003 C-string:'UNK_0xde20'
// 1734:      UNK_0xde25  codep:0x744d parp:0xde25 size:0x0003 C-string:'UNK_0xde25'
// 1735:      UNK_0xde2a  codep:0x744d parp:0xde2a size:0x0003 C-string:'UNK_0xde2a'
// 1736:      UNK_0xde2f  codep:0x744d parp:0xde2f size:0x0003 C-string:'UNK_0xde2f'
// 1737:      UNK_0xde34  codep:0x744d parp:0xde34 size:0x0003 C-string:'UNK_0xde34'
// 1738:      UNK_0xde39  codep:0x1d29 parp:0xde39 size:0x0002 C-string:'UNK_0xde39'
// 1739:      UNK_0xde3d  codep:0x1d29 parp:0xde3d size:0x0002 C-string:'UNK_0xde3d'
// 1740:      UNK_0xde41  codep:0x1d29 parp:0xde41 size:0x0002 C-string:'UNK_0xde41'
// 1741:      UNK_0xde45  codep:0x1d29 parp:0xde45 size:0x0004 C-string:'UNK_0xde45'
// 1742:      UNK_0xde4b  codep:0x1d29 parp:0xde4b size:0x0002 C-string:'UNK_0xde4b'
// 1743:      UNK_0xde4f  codep:0x1d29 parp:0xde4f size:0x0004 C-string:'UNK_0xde4f'
// 1744:      UNK_0xde55  codep:0x1d29 parp:0xde55 size:0x0002 C-string:'UNK_0xde55'
// 1745:      UNK_0xde59  codep:0x224c parp:0xde59 size:0x001c C-string:'UNK_0xde59'
// 1746:      UNK_0xde77  codep:0x224c parp:0xde77 size:0x0008 C-string:'UNK_0xde77'
// 1747:      UNK_0xde81  codep:0x224c parp:0xde81 size:0x0018 C-string:'UNK_0xde81'
// 1748:      UNK_0xde9b  codep:0x224c parp:0xde9b size:0x000e C-string:'UNK_0xde9b'
// 1749:      UNK_0xdeab  codep:0x224c parp:0xdeab size:0x0008 C-string:'UNK_0xdeab'
// 1750:      UNK_0xdeb5  codep:0x224c parp:0xdeb5 size:0x0054 C-string:'UNK_0xdeb5'
// 1751:            X=-1  codep:0x4a4f parp:0xdf12 size:0x0010 C-string:'X_eq__dash_1'
// 1752:             X=0  codep:0x4a4f parp:0xdf2a size:0x0010 C-string:'X_eq_0'
// 1753:             X=1  codep:0x4a4f parp:0xdf42 size:0x0010 C-string:'X_eq_1'
// 1754:       KEY>ORIEN  codep:0x4a4f parp:0xdf60 size:0x00db C-string:'KEY_gt_ORIEN'
// 1755:      UNK_0xe03d  codep:0x1d29 parp:0xe03d size:0x0016 C-string:'UNK_0xe03d'
// 1756:      UNK_0xe055  codep:0x224c parp:0xe055 size:0x0014 C-string:'UNK_0xe055'
// 1757:      UNK_0xe06b  codep:0x224c parp:0xe06b size:0x0054 C-string:'UNK_0xe06b'
// 1758:      UNK_0xe0c1  codep:0x1d29 parp:0xe0c1 size:0x0002 C-string:'UNK_0xe0c1'
// 1759:      UNK_0xe0c5  codep:0x1d29 parp:0xe0c5 size:0x0004 C-string:'UNK_0xe0c5'
// 1760:      UNK_0xe0cb  codep:0x224c parp:0xe0cb size:0x000e C-string:'UNK_0xe0cb'
// 1761:      UNK_0xe0db  codep:0x224c parp:0xe0db size:0x0014 C-string:'UNK_0xe0db'
// 1762:      UNK_0xe0f1  codep:0x224c parp:0xe0f1 size:0x0016 C-string:'UNK_0xe0f1'
// 1763:      UNK_0xe109  codep:0x224c parp:0xe109 size:0x005c C-string:'UNK_0xe109'
// 1764:      UNK_0xe167  codep:0x224c parp:0xe167 size:0x0018 C-string:'UNK_0xe167'
// 1765:      UNK_0xe181  codep:0x224c parp:0xe181 size:0x000c C-string:'UNK_0xe181'
// 1766:      UNK_0xe18f  codep:0x224c parp:0xe18f size:0x0014 C-string:'UNK_0xe18f'
// 1767:      UNK_0xe1a5  codep:0x224c parp:0xe1a5 size:0x001a C-string:'UNK_0xe1a5'
// 1768:      UNK_0xe1c1  codep:0x224c parp:0xe1c1 size:0x001a C-string:'UNK_0xe1c1'
// 1769:      UNK_0xe1dd  codep:0x224c parp:0xe1dd size:0x0018 C-string:'UNK_0xe1dd'
// 1770:      UNK_0xe1f7  codep:0x1d29 parp:0xe1f7 size:0x0002 C-string:'UNK_0xe1f7'
// 1771:      UNK_0xe1fb  codep:0x2214 parp:0xe1fb size:0x0002 C-string:'UNK_0xe1fb'
// 1772:      UNK_0xe1ff  codep:0x2214 parp:0xe1ff size:0x0002 C-string:'UNK_0xe1ff'
// 1773:      UNK_0xe203  codep:0x2214 parp:0xe203 size:0x0002 C-string:'UNK_0xe203'
// 1774:      UNK_0xe207  codep:0x2214 parp:0xe207 size:0x0017 C-string:'UNK_0xe207'
// 1775:           CURRX  codep:0xe211 parp:0xe228 size:0x0001 C-string:'CURRX'
// 1776:           CURRY  codep:0xe211 parp:0xe233 size:0x0001 C-string:'CURRY'
// 1777:           DESTX  codep:0xe211 parp:0xe23e size:0x0001 C-string:'DESTX'
// 1778:           DESTY  codep:0xe211 parp:0xe249 size:0x0001 C-string:'DESTY'
// 1779:           MORIG  codep:0xe211 parp:0xe254 size:0x0001 C-string:'MORIG'
// 1780:          MCLASS  codep:0xe211 parp:0xe260 size:0x0001 C-string:'MCLASS'
// 1781:          DELTAX  codep:0xe211 parp:0xe26c size:0x0001 C-string:'DELTAX'
// 1782:          DELTAY  codep:0xe211 parp:0xe278 size:0x0001 C-string:'DELTAY'
// 1783:      UNK_0xe27b  codep:0x224c parp:0xe27b size:0x000c C-string:'UNK_0xe27b'
// 1784:          MARRAY  codep:0x1d29 parp:0xe292 size:0x01ce C-string:'MARRAY'
// 1785:      UNK_0xe462  codep:0x224c parp:0xe462 size:0x000e C-string:'UNK_0xe462'
// 1786:      UNK_0xe472  codep:0x224c parp:0xe472 size:0x000e C-string:'UNK_0xe472'
// 1787:      UNK_0xe482  codep:0x224c parp:0xe482 size:0x0016 C-string:'UNK_0xe482'
// 1788:      UNK_0xe49a  codep:0x224c parp:0xe49a size:0x0006 C-string:'UNK_0xe49a'
// 1789:      UNK_0xe4a2  codep:0x224c parp:0xe4a2 size:0x000a C-string:'UNK_0xe4a2'
// 1790:      UNK_0xe4ae  codep:0x224c parp:0xe4ae size:0x001a C-string:'UNK_0xe4ae'
// 1791:       SCALE>MIS  codep:0x4a4f parp:0xe4d6 size:0x0010 C-string:'SCALE_gt_MIS'
// 1792:      UNK_0xe4e8  codep:0x224c parp:0xe4e8 size:0x0016 C-string:'UNK_0xe4e8'
// 1793:      UNK_0xe500  codep:0x224c parp:0xe500 size:0x0034 C-string:'UNK_0xe500'
// 1794:      UNK_0xe536  codep:0x224c parp:0xe536 size:0x000e C-string:'UNK_0xe536'
// 1795:      UNK_0xe546  codep:0x224c parp:0xe546 size:0x0046 C-string:'UNK_0xe546'
// 1796:      UNK_0xe58e  codep:0x224c parp:0xe58e size:0x001c C-string:'UNK_0xe58e'
// 1797:      UNK_0xe5ac  codep:0x224c parp:0xe5ac size:0x000e C-string:'UNK_0xe5ac'
// 1798:      UNK_0xe5bc  codep:0x224c parp:0xe5bc size:0x001e C-string:'UNK_0xe5bc'
// 1799:      UNK_0xe5dc  codep:0x224c parp:0xe5dc size:0x0016 C-string:'UNK_0xe5dc'
// 1800:      UNK_0xe5f4  codep:0x224c parp:0xe5f4 size:0x0014 C-string:'UNK_0xe5f4'
// 1801:      UNK_0xe60a  codep:0x224c parp:0xe60a size:0x0018 C-string:'UNK_0xe60a'
// 1802:      UNK_0xe624  codep:0x224c parp:0xe624 size:0x0036 C-string:'UNK_0xe624'
// 1803:      UNK_0xe65c  codep:0x2214 parp:0xe65c size:0x0002 C-string:'UNK_0xe65c'
// 1804:      UNK_0xe660  codep:0x224c parp:0xe660 size:0x004a C-string:'UNK_0xe660'
// 1805:      UNK_0xe6ac  codep:0x1d29 parp:0xe6ac size:0x0002 C-string:'UNK_0xe6ac'
// 1806:      UNK_0xe6b0  codep:0x1d29 parp:0xe6b0 size:0x0002 C-string:'UNK_0xe6b0'
// 1807:      UNK_0xe6b4  codep:0x224c parp:0xe6b4 size:0x002e C-string:'UNK_0xe6b4'
// 1808:      UNK_0xe6e4  codep:0x224c parp:0xe6e4 size:0x0046 C-string:'UNK_0xe6e4'
// 1809:      UNK_0xe72c  codep:0x224c parp:0xe72c size:0x0016 C-string:'UNK_0xe72c'
// 1810:      UNK_0xe744  codep:0x224c parp:0xe744 size:0x0052 C-string:'UNK_0xe744'
// 1811:      UNK_0xe798  codep:0x224c parp:0xe798 size:0x0032 C-string:'UNK_0xe798'
// 1812:      UNK_0xe7cc  codep:0x224c parp:0xe7cc size:0x00a0 C-string:'UNK_0xe7cc'
// 1813:      UNK_0xe86e  codep:0x224c parp:0xe86e size:0x0071 C-string:'UNK_0xe86e'
// 1814:      UNK_0xe8e1  codep:0x224c parp:0xe8e1 size:0x002e C-string:'UNK_0xe8e1'
// 1815:      UNK_0xe911  codep:0x224c parp:0xe911 size:0x0016 C-string:'UNK_0xe911'
// 1816:      UNK_0xe929  codep:0x224c parp:0xe929 size:0x0022 C-string:'UNK_0xe929'
// 1817:      UNK_0xe94d  codep:0x224c parp:0xe94d size:0x001c C-string:'UNK_0xe94d'
// 1818:      UNK_0xe96b  codep:0x224c parp:0xe96b size:0x0010 C-string:'UNK_0xe96b'
// 1819:      UNK_0xe97d  codep:0x224c parp:0xe97d size:0x0036 C-string:'UNK_0xe97d'
// 1820:      UNK_0xe9b5  codep:0x224c parp:0xe9b5 size:0x004a C-string:'UNK_0xe9b5'
// 1821:      UNK_0xea01  codep:0x224c parp:0xea01 size:0x001e C-string:'UNK_0xea01'
// 1822:      UNK_0xea21  codep:0x224c parp:0xea21 size:0x001a C-string:'UNK_0xea21'
// 1823:      UNK_0xea3d  codep:0x224c parp:0xea3d size:0x0024 C-string:'UNK_0xea3d'
// 1824:      UNK_0xea63  codep:0x224c parp:0xea63 size:0x001c C-string:'UNK_0xea63'
// 1825:      UNK_0xea81  codep:0x224c parp:0xea81 size:0x0038 C-string:'UNK_0xea81'
// 1826:      UNK_0xeabb  codep:0x224c parp:0xeabb size:0x0058 C-string:'UNK_0xeabb'
// 1827:      UNK_0xeb15  codep:0x224c parp:0xeb15 size:0x004c C-string:'UNK_0xeb15'
// 1828:      UNK_0xeb63  codep:0x224c parp:0xeb63 size:0x0056 C-string:'UNK_0xeb63'
// 1829:      UNK_0xebbb  codep:0x1d29 parp:0xebbb size:0x0002 C-string:'UNK_0xebbb'
// 1830:      UNK_0xebbf  codep:0x1d29 parp:0xebbf size:0x0002 C-string:'UNK_0xebbf'
// 1831:      UNK_0xebc3  codep:0x224c parp:0xebc3 size:0x0022 C-string:'UNK_0xebc3'
// 1832:      UNK_0xebe7  codep:0x224c parp:0xebe7 size:0x0022 C-string:'UNK_0xebe7'
// 1833:      UNK_0xec0b  codep:0x224c parp:0xec0b size:0x0032 C-string:'UNK_0xec0b'
// 1834:       SET-SCALE  codep:0x224c parp:0xec4b size:0x002e C-string:'SET_dash_SCALE'
// 1835:      UNK_0xec7b  codep:0x224c parp:0xec7b size:0x011d C-string:'UNK_0xec7b'
// 1836:      UNK_0xed9a  codep:0x224c parp:0xed9a size:0x001a C-string:'UNK_0xed9a'
// 1837:       ?APPROACH  codep:0x224c parp:0xedc2 size:0x000a C-string:'_ask_APPROACH'
// 1838:      UNK_0xedce  codep:0x224c parp:0xedce size:0x002e C-string:'UNK_0xedce'
// 1839:        <COMBAT>  codep:0xb869 parp:0xee09 size:0x00b9 C-string:'_st_COMBAT_gt_'
// 1840:      UNK_0xeec4  codep:0x224c parp:0xeec4 size:0x0012 C-string:'UNK_0xeec4'
// 1841:      UNK_0xeed8  codep:0x224c parp:0xeed8 size:0x000e C-string:'UNK_0xeed8'
// 1842:      UNK_0xeee8  codep:0x224c parp:0xeee8 size:0x0006 C-string:'UNK_0xeee8'
// 1843:      UNK_0xeef0  codep:0x224c parp:0xeef0 size:0x0016 C-string:'UNK_0xeef0'
// 1844:      UNK_0xef08  codep:0x224c parp:0xef08 size:0x0016 C-string:'UNK_0xef08'
// 1845:      UNK_0xef20  codep:0x224c parp:0xef20 size:0x0010 C-string:'UNK_0xef20'
// 1846:          COMBAT  codep:0x224c parp:0xef3b size:0x006c C-string:'COMBAT'
// 1847:        ORIENT>O  codep:0x1d29 parp:0xefb4 size:0x0020 C-string:'ORIENT_gt_O'
// 1848:      UNK_0xefd6  codep:0x224c parp:0xefd6 size:0x0036 C-string:'UNK_0xefd6'
// 1849:      UNK_0xf00e  codep:0x224c parp:0xf00e size:0x000a C-string:'UNK_0xf00e'
// 1850:      UNK_0xf01a  codep:0x224c parp:0xf01a size:0x0022 C-string:'UNK_0xf01a'
// 1851:      UNK_0xf03e  codep:0x224c parp:0xf03e size:0x0018 C-string:'UNK_0xf03e'
// 1852:      UNK_0xf058  codep:0x224c parp:0xf058 size:0x0026 C-string:'UNK_0xf058'
// 1853:      UNK_0xf080  codep:0x224c parp:0xf080 size:0x0008 C-string:'UNK_0xf080'
// 1854:      UNK_0xf08a  codep:0x224c parp:0xf08a size:0x0024 C-string:'UNK_0xf08a'
// 1855:      UNK_0xf0b0  codep:0x1d29 parp:0xf0b0 size:0x0004 C-string:'UNK_0xf0b0'
// 1856:      UNK_0xf0b6  codep:0x224c parp:0xf0b6 size:0x0020 C-string:'UNK_0xf0b6'
// 1857:      UNK_0xf0d8  codep:0x224c parp:0xf0d8 size:0x0044 C-string:'UNK_0xf0d8'
// 1858:      UNK_0xf11e  codep:0x224c parp:0xf11e size:0x005e C-string:'UNK_0xf11e'
// 1859:      UNK_0xf17e  codep:0x224c parp:0xf17e size:0x000c C-string:'UNK_0xf17e'
// 1860:      UNK_0xf18c  codep:0x224c parp:0xf18c size:0x001c C-string:'UNK_0xf18c'
// 1861:      UNK_0xf1aa  codep:0x224c parp:0xf1aa size:0x000a C-string:'UNK_0xf1aa'
// 1862:      UNK_0xf1b6  codep:0x224c parp:0xf1b6 size:0x0024 C-string:'UNK_0xf1b6'
// 1863:      UNK_0xf1dc  codep:0x224c parp:0xf1dc size:0x002a C-string:'UNK_0xf1dc'
// 1864:      UNK_0xf208  codep:0x224c parp:0xf208 size:0x0036 C-string:'UNK_0xf208'
// 1865:      UNK_0xf240  codep:0x224c parp:0xf240 size:0x00b2 C-string:'UNK_0xf240'
// 1866:      UNK_0xf2f4  codep:0x224c parp:0xf2f4 size:0x005c C-string:'UNK_0xf2f4'
// 1867:      UNK_0xf352  codep:0x224c parp:0xf352 size:0x005a C-string:'UNK_0xf352'
// 1868:      UNK_0xf3ae  codep:0x224c parp:0xf3ae size:0x000c C-string:'UNK_0xf3ae'
// 1869:      UNK_0xf3bc  codep:0x224c parp:0xf3bc size:0x0056 C-string:'UNK_0xf3bc'
// 1870:      UNK_0xf414  codep:0x224c parp:0xf414 size:0x00a1 C-string:'UNK_0xf414'
// 1871:             WAR  codep:0x224c parp:0xf4bd size:0x0022 C-string:'WAR'
// 1872:        CLEAR-CO  codep:0x224c parp:0xf4ec size:0x0000 C-string:'CLEAR_dash_CO'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xde39[2] = {0x00, 0x00}; // UNK_0xde39
unsigned char UNK_0xde3d[2] = {0x00, 0x00}; // UNK_0xde3d
unsigned char UNK_0xde41[2] = {0x00, 0x00}; // UNK_0xde41
unsigned char UNK_0xde45[4] = {0x56, 0x3a, 0x20, 0x20}; // UNK_0xde45
unsigned char UNK_0xde4b[2] = {0x3a, 0x20}; // UNK_0xde4b
unsigned char UNK_0xde4f[4] = {0x56, 0x3a, 0x20, 0x45}; // UNK_0xde4f
unsigned char UNK_0xde55[2] = {0x00, 0x00}; // UNK_0xde55
unsigned char UNK_0xe03d[22] = {0x56, 0x3a, 0x20, 0x3c, 0x4c, 0x22, 0x98, 0x2a, 0x38, 0x0c, 0x35, 0xe0, 0x3b, 0xe0, 0x38, 0x0c, 0x65, 0x10, 0x46, 0x40, 0x90, 0x16}; // UNK_0xe03d
unsigned char UNK_0xe0c1[2] = {0x3a, 0x20}; // UNK_0xe0c1
unsigned char UNK_0xe0c5[4] = {0x56, 0x3a, 0x20, 0xa0}; // UNK_0xe0c5
unsigned char UNK_0xe1f7[2] = {0x3a, 0x20}; // UNK_0xe1f7
unsigned char MARRAY[462] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0xe4, 0xae, 0x0b, 0x90, 0x16, 0x4d, 0x74, 0x23, 0x0a, 0x02, 0x4d, 0x74, 0x30, 0x0b, 0xff, 0x4d, 0x74, 0x24, 0x0a, 0x01, 0x4d}; // MARRAY
unsigned char UNK_0xe6ac[2] = {0x00, 0x00}; // UNK_0xe6ac
unsigned char UNK_0xe6b0[2] = {0x00, 0x00}; // UNK_0xe6b0
unsigned char UNK_0xebbb[2] = {0x3a, 0x20}; // UNK_0xebbb
unsigned char UNK_0xebbf[2] = {0x3a, 0x20}; // UNK_0xebbf
unsigned char ORIENT_gt_O[32] = {0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x01, 0x00}; // ORIENT>O
unsigned char UNK_0xf0b0[4] = {0x56, 0x3a, 0x20, 0x20}; // UNK_0xf0b0

const unsigned short int cc_UNK_0xe1fb = 0x0014; // UNK_0xe1fb
const unsigned short int cc_UNK_0xe1ff = 0x0016; // UNK_0xe1ff
const unsigned short int cc_UNK_0xe203 = 0x0001; // UNK_0xe203
const unsigned short int cc_UNK_0xe207 = 0x0000; // UNK_0xe207
const unsigned short int cc_UNK_0xe65c = 0x0000; // UNK_0xe65c


// 0xdd42: db 0x7f 0x01 ' '

// ================================================
// 0xdd44: WORD 'UNK_0xdd46' codep=0x224c parp=0xdd46
// ================================================

void UNK_0xdd46() // UNK_0xdd46
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}

// 0xdd4c: db 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xd8 0x4a 0x90 0x16 'L". ] d  J  '

// ================================================
// 0xdd58: WORD 'UNK_0xdd5a' codep=0x224c parp=0xdd5a
// ================================================

void UNK_0xdd5a() // UNK_0xdd5a
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
}


// ================================================
// 0xdd62: WORD 'UNK_0xdd64' codep=0x224c parp=0xdd64
// ================================================

void UNK_0xdd64() // UNK_0xdd64
{
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
}


// ================================================
// 0xdd6e: WORD 'UNK_0xdd70' codep=0x224c parp=0xdd70
// ================================================

void UNK_0xdd70() // UNK_0xdd70
{
  _at_IX(); // @IX
  _at_IY(); // @IY
}


// ================================================
// 0xdd76: WORD 'UNK_0xdd78' codep=0x224c parp=0xdd78
// ================================================

void UNK_0xdd78() // UNK_0xdd78
{
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
}

// 0xdd82: db 0x4c 0x22 0xc2 0x51 0xf2 0x79 0x90 0x16 0x14 0x22 0x19 0x00 0xea 0x73 0x19 0x0b 0x01 0x49 0x91 0x64 'L" Q y   "   s   I d'

// ================================================
// 0xdd96: WORD 'UNK_0xdd98' codep=0x73ea parp=0xdd98
// ================================================
// 0xdd98: db 0x19 0x0e 0x02 0x49 0x91 0x64 0xea 0x73 0x19 0x13 0x01 0x49 0x91 0x64 0xea 0x73 0x19 0x12 0x01 0x49 0x91 0x64 0xea 0x73 0x19 0x14 0x01 0x49 0x91 0x64 '   I d s   I d s   I d s   I d'

// ================================================
// 0xddb6: WORD 'UNK_0xddb8' codep=0x744d parp=0xddb8
// ================================================
// 0xddb8: db 0x19 0x0c 0x01 0x4d 0x74 0x19 0x12 0x02 '   Mt   '

// ================================================
// 0xddc0: WORD 'UNK_0xddc2' codep=0x744d parp=0xddc2
// ================================================
// 0xddc2: db 0x19 0x14 0x02 '   '

// ================================================
// 0xddc5: WORD 'UNK_0xddc7' codep=0x744d parp=0xddc7
// ================================================
// 0xddc7: db 0x19 0x11 0x01 '   '

// ================================================
// 0xddca: WORD 'UNK_0xddcc' codep=0x744d parp=0xddcc
// ================================================
// 0xddcc: db 0x19 0x0b 0x01 0x14 0x22 0x14 0x00 0x4d 0x74 0x14 0x11 0x01 0x4d 0x74 0x14 0x12 0x01 '    "  Mt   Mt   '

// ================================================
// 0xdddd: WORD 'UNK_0xdddf' codep=0x744d parp=0xdddf
// ================================================
// 0xdddf: db 0x14 0x13 0x01 0x4d 0x74 0x14 0x14 0x01 0x4d 0x74 0x14 0x15 0x01 0x4d 0x74 0x14 0x16 0x01 0x4d 0x74 0x14 0x17 0x01 0x4d 0x74 0x14 0x18 0x01 0x4d 0x74 0x14 0x19 0x01 '   Mt   Mt   Mt   Mt   Mt   Mt   '

// ================================================
// 0xde00: WORD 'UNK_0xde02' codep=0x744d parp=0xde02
// ================================================
// 0xde02: db 0x14 0x1a 0x01 '   '

// ================================================
// 0xde05: WORD 'UNK_0xde07' codep=0x744d parp=0xde07
// ================================================
// 0xde07: db 0x14 0x1b 0x01 '   '

// ================================================
// 0xde0a: WORD 'UNK_0xde0c' codep=0x744d parp=0xde0c
// ================================================
// 0xde0c: db 0x14 0x1c 0x01 '   '

// ================================================
// 0xde0f: WORD 'UNK_0xde11' codep=0x744d parp=0xde11
// ================================================
// 0xde11: db 0x14 0x1d 0x01 '   '

// ================================================
// 0xde14: WORD 'UNK_0xde16' codep=0x744d parp=0xde16
// ================================================
// 0xde16: db 0x14 0x1e 0x01 '   '

// ================================================
// 0xde19: WORD 'UNK_0xde1b' codep=0x744d parp=0xde1b
// ================================================
// 0xde1b: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xde1e: WORD 'UNK_0xde20' codep=0x744d parp=0xde20
// ================================================
// 0xde20: db 0x14 0x45 0x04 ' E '

// ================================================
// 0xde23: WORD 'UNK_0xde25' codep=0x744d parp=0xde25
// ================================================
// 0xde25: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xde28: WORD 'UNK_0xde2a' codep=0x744d parp=0xde2a
// ================================================
// 0xde2a: db 0x14 0x49 0x01 ' I '

// ================================================
// 0xde2d: WORD 'UNK_0xde2f' codep=0x744d parp=0xde2f
// ================================================
// 0xde2f: db 0x11 0x17 0x03 '   '

// ================================================
// 0xde32: WORD 'UNK_0xde34' codep=0x744d parp=0xde34
// ================================================
// 0xde34: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xde37: WORD 'UNK_0xde39' codep=0x1d29 parp=0xde39
// ================================================
// 0xde39: db 0x00 0x00 '  '

// ================================================
// 0xde3b: WORD 'UNK_0xde3d' codep=0x1d29 parp=0xde3d
// ================================================
// 0xde3d: db 0x00 0x00 '  '

// ================================================
// 0xde3f: WORD 'UNK_0xde41' codep=0x1d29 parp=0xde41
// ================================================
// 0xde41: db 0x00 0x00 '  '

// ================================================
// 0xde43: WORD 'UNK_0xde45' codep=0x1d29 parp=0xde45
// ================================================
// 0xde45: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xde49: WORD 'UNK_0xde4b' codep=0x1d29 parp=0xde4b
// ================================================
// 0xde4b: db 0x3a 0x20 ': '

// ================================================
// 0xde4d: WORD 'UNK_0xde4f' codep=0x1d29 parp=0xde4f
// ================================================
// 0xde4f: db 0x56 0x3a 0x20 0x45 'V: E'

// ================================================
// 0xde53: WORD 'UNK_0xde55' codep=0x1d29 parp=0xde55
// ================================================
// 0xde55: db 0x00 0x00 '  '

// ================================================
// 0xde57: WORD 'UNK_0xde59' codep=0x224c parp=0xde59
// ================================================

void UNK_0xde59() // UNK_0xde59
{
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  R_gt_(); // R>
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xde75: WORD 'UNK_0xde77' codep=0x224c parp=0xde77
// ================================================

void UNK_0xde77() // UNK_0xde77
{
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xde7f: WORD 'UNK_0xde81' codep=0x224c parp=0xde81
// ================================================

void UNK_0xde81() // UNK_0xde81
{
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xde99: WORD 'UNK_0xde9b' codep=0x224c parp=0xde9b
// ================================================

void UNK_0xde9b() // UNK_0xde9b
{

  label1:
  Push(cc__dash_1); // -1
  Push(2); // 2
  RRND(); // RRND
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
}


// ================================================
// 0xdea9: WORD 'UNK_0xdeab' codep=0x224c parp=0xdeab
// ================================================

void UNK_0xdeab() // UNK_0xdeab
{
  Push(cc__dash_1); // -1
  Push(2); // 2
  RRND(); // RRND
}


// ================================================
// 0xdeb3: WORD 'UNK_0xdeb5' codep=0x224c parp=0xdeb5
// ================================================

void UNK_0xdeb5() // UNK_0xdeb5
{
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push2Words("0.");
  return;

  label1:
  _2OVER(); // 2OVER
  ROT(); // ROT
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label2;
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  _slash_(); // /

  label2:
  _gt_R(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label3;
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  _slash_(); // /

  label3:
  R_gt_(); // R>
}

// 0xdeef: db 0x4c 0x22 0x1e 0x75 0x5d 0x17 0x19 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0xca 0xdd 0x60 0x16 0x04 0x00 0x28 0xde 0x92 0x0c 0x90 0x16 'L" u]   _       `   (     '

// ================================================
// 0xdf09: WORD 'X=-1' codep=0x4a4f parp=0xdf12
// ================================================
// 0xdf12: db 0x03 0x00 0x6e 0x3a 0xff 0xff 0x85 0x3b 0x01 0x00 0x75 0x3b 0x00 0x00 0x7d 0x3b '  n:   ;  u;  };'

// ================================================
// 0xdf22: WORD 'X=0' codep=0x4a4f parp=0xdf2a
// ================================================
// 0xdf2a: db 0x03 0x00 0x6e 0x3a 0xff 0xff 0x8d 0x3b 0x01 0x00 0x3f 0x0f 0x00 0x00 0xf1 0xde '  n:   ;  ?     '

// ================================================
// 0xdf3a: WORD 'X=1' codep=0x4a4f parp=0xdf42
// ================================================
// 0xdf42: db 0x03 0x00 0x6e 0x3a 0xff 0xff 0x95 0x3b 0x01 0x00 0x30 0x0f 0x00 0x00 0x22 0x0f '  n:   ;  0   " '

// ================================================
// 0xdf52: WORD 'KEY>ORIEN' codep=0x4a4f parp=0xdf60
// ================================================
// 0xdf60: db 0x03 0x00 0x6e 0x3a 0xff 0xff 0x12 0xdf 0x00 0x00 0x2a 0xdf 0x01 0x00 0x42 0xdf 0x4c 0x22 0x53 0xde 0xae 0x0b 0x44 0xdd 0xce 0x54 0xae 0x0b 0x7b 0x3b 0x2d 0x12 0xf5 0x12 0x41 0x0e 0x53 0xde 0x76 0x6d 0x90 0x16 0x4c 0x22 0x4c 0xdd 0x73 0x3b 0x46 0x12 0x90 0x16 0x4c 0x22 0x6e 0xdd 0x62 0xdd 0x57 0xde 0x73 0x3b 0x46 0x12 0x90 0x16 0x4c 0x22 0xb2 0x50 0xa6 0xdd 0x92 0x0c 0x44 0xdd 0xf5 0x12 0x90 0x16 0x4c 0x22 0xb2 0x50 0xae 0xdd 0x92 0x0c 0x44 0xdd 0xf5 0x12 0x90 0x16 0x4c 0x22 0xb2 0x50 0x9e 0xdd 0x92 0x0c 0x44 0xdd 0xb0 0xdf 0x3e 0x13 0xf5 0x12 0x90 0x16 0x4c 0x22 0x8e 0xdd 0x92 0x0c 0x41 0x0e 0xfa 0x15 0x16 0x00 0x8b 0x3b 0xb3 0x0f 0x4c 0xdd 0x46 0x12 0x3b 0xde 0xae 0x0b 0x5d 0x17 0x0a 0x00 0x46 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0x8e 0xdd 0x92 0x0c 0x41 0x0e 0xfa 0x15 0x0a 0x00 0x9b 0x3b 0xb3 0x0f 0x4c 0xdd 0x46 0x12 0x90 0x16 0x4d 0x74 0x34 0x0c 0x01 0x4c 0x22 0x36 0x5e 0xae 0x0b 0x44 0xdd 0x90 0x16 0x4c 0x22 0x4c 0xdd 0x5d 0x17 0x46 0x00 0x46 0x12 0x90 0x16 0x4c 0x22 0xfd 0x62 0x95 0x49 0xf2 0x79 0x08 0xe0 0x92 0x0c 0xc9 0x79 0x44 0xdd 0x90 0x16 0x68 0x3b 0x01 0x00 0xc0 0xd4 '  n:      *   B L"S   D  T  {;-   A S vm  L"L s;F   L"n b W s;F   L" P    D     L" P    D     L" P    D   >     L"    A      ;  L F ;   ]   F     L"    A      ;  L F   Mt4  L"6^  D   L"L ] F F   L" b I y     yD   h;    '

// ================================================
// 0xe03b: WORD 'UNK_0xe03d' codep=0x1d29 parp=0xe03d
// ================================================
// 0xe03d: db 0x56 0x3a 0x20 0x3c 0x4c 0x22 0x98 0x2a 0x38 0x0c 0x35 0xe0 0x3b 0xe0 0x38 0x0c 0x65 0x10 0x46 0x40 0x90 0x16 'V: <L" *8 5 ; 8 e F@  '

// ================================================
// 0xe053: WORD 'UNK_0xe055' codep=0x224c parp=0xe055
// ================================================

void UNK_0xe055() // UNK_0xe055
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xe03d); // pointer to UNK_0xe03d
  D_ex_(); // D!
}

// 0xe05f: db 0x4c 0x22 0x4c 0xdd 0x83 0x3b 0x46 0x12 0x90 0x16 'L"L  ;F   '

// ================================================
// 0xe069: WORD 'UNK_0xe06b' codep=0x224c parp=0xe06b
// ================================================

void UNK_0xe06b() // UNK_0xe06b
{
  Push(0x63fb); // IFIELD(UNK_0xddb8)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xdd46(); // UNK_0xdd46
}

// 0xe073: db 0x14 0x22 0x0b 0x00 0x14 0x22 0x05 0x00 0x4c 0x22 0xb4 0x0d 0x76 0xdd 0x62 0xdd 0xb3 0x0e 0x92 0x0f 0x58 0x10 0xa2 0x0e 0x46 0x12 0xb4 0x0d 0x92 0x0f 0x58 0x10 0x90 0x0e 0xf2 0x0e 0x90 0x0e 0x46 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0x73 0xe0 0x7b 0xe0 0x07 0x13 0x90 0x16 0x4c 0x22 0x77 0xe0 0x7b 0xe0 0x90 0x16 0x4c 0x22 0x9f 0xe0 0x07 0x13 0xa9 0xe0 0x07 0x13 0xf5 0x12 0x90 0x16 ' "   "  L"  v b     X   F     X       F     L"s {     L"w {   L"            '

// ================================================
// 0xe0bf: WORD 'UNK_0xe0c1' codep=0x1d29 parp=0xe0c1
// ================================================
// 0xe0c1: db 0x3a 0x20 ': '

// ================================================
// 0xe0c3: WORD 'UNK_0xe0c5' codep=0x1d29 parp=0xe0c5
// ================================================
// 0xe0c5: db 0x56 0x3a 0x20 0xa0 'V:  '

// ================================================
// 0xe0c9: WORD 'UNK_0xe0cb' codep=0x224c parp=0xe0cb
// ================================================

void UNK_0xe0cb() // UNK_0xe0cb
{
  Push(0xe0c1); // pointer to UNK_0xe0c1
  _st__ex__gt_(); // <!>
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xe0c5); // pointer to UNK_0xe0c5
  _2_ex_(); // 2!
}


// ================================================
// 0xe0d9: WORD 'UNK_0xe0db' codep=0x224c parp=0xe0db
// ================================================

void UNK_0xe0db() // UNK_0xe0db
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xe0c5); // pointer to UNK_0xe0c5
  _2_at_(); // 2@
  Push(0xe0c1); // pointer to UNK_0xe0c1
  Push(Read16(Pop())); // @
  Push(0); // 0
  D_plus_(); // D+
  D_gt_(); // D>
}


// ================================================
// 0xe0ef: WORD 'UNK_0xe0f1' codep=0x224c parp=0xe0f1
// ================================================

void UNK_0xe0f1() // UNK_0xe0f1
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x640b); // IFIELD(UNK_0xde0c)
  UNK_0xde77(); // UNK_0xde77
  UNK_0xdd46(); // UNK_0xdd46
  Push(0x640a); // IFIELD(UNK_0xde07)
  UNK_0xde81(); // UNK_0xde81
  UNK_0xdd46(); // UNK_0xdd46
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe107: WORD 'UNK_0xe109' codep=0x224c parp=0xe109
// ================================================

void UNK_0xe109() // UNK_0xe109
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x640d); // IFIELD(UNK_0xde16)
  UNK_0xde77(); // UNK_0xde77
  UNK_0xdd46(); // UNK_0xdd46
  Push(0x640c); // IFIELD(UNK_0xde11)
  UNK_0xde81(); // UNK_0xde81
  UNK_0xdd46(); // UNK_0xdd46
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}

// 0xe11f: db 0x4c 0x22 0xce 0x54 0x92 0x0c 0x2e 0x0f 0x5f 0x12 0x90 0x16 0x4c 0x22 0xce 0x54 0x92 0x0c 0x9b 0x3b 0x5f 0x12 0x90 0x16 0x4c 0x22 0xce 0x54 0x92 0x0c 0x5d 0x17 0x10 0x00 0x5f 0x12 0x90 0x16 0x29 0x1d 0x00 0x00 0x4c 0x22 0x4c 0xdd 0x5d 0x17 0x5a 0x00 0x46 0x12 0xfa 0x15 0x08 0x00 0x45 0xe1 0xac 0x3b 0x53 0x13 0x45 0xe1 0xae 0x0b 0x44 0xdd 0x90 0x16 'L" T  . _   L" T   ;_   L" T  ]   _   )   L"L ] Z F     E  ;S E   D   '

// ================================================
// 0xe165: WORD 'UNK_0xe167' codep=0x224c parp=0xe167
// ================================================

void UNK_0xe167() // UNK_0xe167
{
  Push(0xde41); // pointer to UNK_0xde41
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(cc__dash_1); // -1
  Push(1); // 1
  RRND(); // RRND
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe17f: WORD 'UNK_0xe181' codep=0x224c parp=0xe181
// ================================================

void UNK_0xe181() // UNK_0xe181
{
  Push(0x6434); // IFIELD(UNK_0xde20)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  UNK_0xdd46(); // UNK_0xdd46
}


// ================================================
// 0xe18d: WORD 'UNK_0xe18f' codep=0x224c parp=0xe18f
// ================================================

void UNK_0xe18f() // UNK_0xe18f
{
  Push(0x641f); // IFIELD(UNK_0xde1b)
  Push(Read16(Pop())); // @
  UNK_0xdd46(); // UNK_0xdd46
  UNK_0xe181(); // UNK_0xe181
  Push(Pop() & Pop()); // AND
  Push(0x5cfc); // pointer to ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe1a3: WORD 'UNK_0xe1a5' codep=0x224c parp=0xe1a5
// ================================================

void UNK_0xe1a5() // UNK_0xe1a5
{
  Push(0x5d81); // pointer to #AUX
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xbf05);
  return;

  label1:
  Push(0xbef3);
}


// ================================================
// 0xe1bf: WORD 'UNK_0xe1c1' codep=0x224c parp=0xe1c1
// ================================================

void UNK_0xe1c1() // UNK_0xe1c1
{
  Push(0x5d81); // pointer to #AUX
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xbe4b);
  return;

  label1:
  Push(0xbe2b);
}


// ================================================
// 0xe1db: WORD 'UNK_0xe1dd' codep=0x224c parp=0xe1dd
// ================================================

void UNK_0xe1dd() // UNK_0xe1dd
{
  Push(0x6421); // IFIELD(UNK_0xde25)
  Push(Read16(Pop())); // @
  UNK_0xdd46(); // UNK_0xdd46
  UNK_0xe18f(); // UNK_0xe18f
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xe1a5(); // UNK_0xe1a5
  return;

  label1:
  UNK_0xe1c1(); // UNK_0xe1c1
}


// ================================================
// 0xe1f5: WORD 'UNK_0xe1f7' codep=0x1d29 parp=0xe1f7
// ================================================
// 0xe1f7: db 0x3a 0x20 ': '

// ================================================
// 0xe1f9: WORD 'UNK_0xe1fb' codep=0x2214 parp=0xe1fb
// ================================================
// 0xe1fb: db 0x14 0x00 '  '

// ================================================
// 0xe1fd: WORD 'UNK_0xe1ff' codep=0x2214 parp=0xe1ff
// ================================================
// 0xe1ff: db 0x16 0x00 '  '

// ================================================
// 0xe201: WORD 'UNK_0xe203' codep=0x2214 parp=0xe203
// ================================================
// 0xe203: db 0x01 0x00 '  '

// ================================================
// 0xe205: WORD 'UNK_0xe207' codep=0x2214 parp=0xe207
// ================================================
// 0xe207: db 0x00 0x00 '  '

// ================================================
// 0xe209: WORD 'UNK_0xe20b' codep=0x224c parp=0xe20b
// ================================================
// 0xe20b: db 0x4f 0x06 0xaf 0x21 0xfa 0x1b 'O  !  '
// 0xe211: call   1649
  Push(Read8(Pop())&0xFF); // C@
  Push(0xe1f7); // pointer to UNK_0xe1f7
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe21e: WORD 'CURRX' codep=0xe211 parp=0xe228
// ================================================
// 0xe228: db 0x00 ' '

// ================================================
// 0xe229: WORD 'CURRY' codep=0xe211 parp=0xe233
// ================================================
// 0xe233: db 0x04 ' '

// ================================================
// 0xe234: WORD 'DESTX' codep=0xe211 parp=0xe23e
// ================================================
// 0xe23e: db 0x08 ' '

// ================================================
// 0xe23f: WORD 'DESTY' codep=0xe211 parp=0xe249
// ================================================
// 0xe249: db 0x0a ' '

// ================================================
// 0xe24a: WORD 'MORIG' codep=0xe211 parp=0xe254
// ================================================
// 0xe254: db 0x0c ' '

// ================================================
// 0xe255: WORD 'MCLASS' codep=0xe211 parp=0xe260
// ================================================
// 0xe260: db 0x0d ' '

// ================================================
// 0xe261: WORD 'DELTAX' codep=0xe211 parp=0xe26c
// ================================================
// 0xe26c: db 0x0e ' '

// ================================================
// 0xe26d: WORD 'DELTAY' codep=0xe211 parp=0xe278
// ================================================
// 0xe278: db 0x12 ' '

// ================================================
// 0xe279: WORD 'UNK_0xe27b' codep=0x224c parp=0xe27b
// ================================================

void UNK_0xe27b() // UNK_0xe27b
{
  MCLASS(); // MCLASS
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe287: WORD 'MARRAY' codep=0x1d29 parp=0xe292
// ================================================
// 0xe292: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x44 0xe4 0xae 0x0b 0x90 0x16 0x4d 0x74 0x23 0x0a 0x02 0x4d 0x74 0x30 0x0b 0xff 0x4d 0x74 0x24 0x0a 0x01 0x4d '                                                                                                                                                                                                                                                                                                                                                                                                                                                        D     Mt#  Mt0  Mt$  M'

// ================================================
// 0xe460: WORD 'UNK_0xe462' codep=0x224c parp=0xe462
// ================================================

void UNK_0xe462() // UNK_0xe462
{
  Push(0xe292); // pointer to MARRAY
  Push(cc_UNK_0xe1fb); // UNK_0xe1fb
  Push(cc_UNK_0xe1ff); // UNK_0xe1ff
  Push(Pop() * Pop()); // *
  Push(0); // 0
  FILL_1(); // FILL_1
}


// ================================================
// 0xe470: WORD 'UNK_0xe472' codep=0x224c parp=0xe472
// ================================================

void UNK_0xe472() // UNK_0xe472
{
  Push(cc_UNK_0xe1ff); // UNK_0xe1ff
  Push(Pop() * Pop()); // *
  Push(0xe292); // pointer to MARRAY
  Push(Pop() + Pop()); // +
  Push(0xe1f7); // pointer to UNK_0xe1f7
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe480: WORD 'UNK_0xe482' codep=0x224c parp=0xe482
// ================================================

void UNK_0xe482() // UNK_0xe482
{
  CURRX(); // CURRX
  Push(Read16(Pop())); // @
  CURRY(); // CURRY
  Push(Read16(Pop())); // @
}

// 0xe48c: db 0x4c 0x22 0x3c 0xe2 0xae 0x0b 0x47 0xe2 0xae 0x0b 0x90 0x16 'L"<   G     '

// ================================================
// 0xe498: WORD 'UNK_0xe49a' codep=0x224c parp=0xe49a
// ================================================

void UNK_0xe49a() // UNK_0xe49a
{
  PRINT(".", 1); // (.")
}


// ================================================
// 0xe4a0: WORD 'UNK_0xe4a2' codep=0x224c parp=0xe4a2
// ================================================

void UNK_0xe4a2() // UNK_0xe4a2
{
  _gt_2FONT(); // >2FONT
  PRINT(".", 1); // (.")
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe4ac: WORD 'UNK_0xe4ae' codep=0x224c parp=0xe4ae
// ================================================

void UNK_0xe4ae() // UNK_0xe4ae
{
  CURRX(); // CURRX
  Push(Read16(Pop())); // @
  Push(2); // 2
  MOD(); // MOD
  if (Pop() == 0) goto label1;
  PRINT("+", 1); // (.")
  return;

  label1:
  PRINT("*", 1); // (.")
}


// ================================================
// 0xe4c8: WORD 'SCALE>MIS' codep=0x4a4f parp=0xe4d6
// ================================================
// 0xe4d6: db 0x03 0x00 0x48 0x3a 0x02 0x00 0x9a 0xe4 0x04 0x00 0xa2 0xe4 0x08 0x00 0xae 0xe4 '  H:            '

// ================================================
// 0xe4e6: WORD 'UNK_0xe4e8' codep=0x224c parp=0xe4e8
// ================================================

void UNK_0xe4e8() // UNK_0xe4e8
{
  MORIG(); // MORIG
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_UNK_0xe207); // UNK_0xe207
  _eq_(); // =
  if (Pop() == 0) goto label1;
  SetColor("RED");
  return;

  label1:
  SetColor("LT-BLUE");
}


// ================================================
// 0xe4fe: WORD 'UNK_0xe500' codep=0x224c parp=0xe500
// ================================================

void UNK_0xe500() // UNK_0xe500
{
  Push(cc_UNK_0xe1fb); // UNK_0xe1fb
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe472(); // UNK_0xe472
  UNK_0xe27b(); // UNK_0xe27b
  if (Pop() == 0) goto label1;
  UNK_0xe482(); // UNK_0xe482
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  SWAP(); // SWAP
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  POS_dot_(); // POS.
  UNK_0xe4e8(); // UNK_0xe4e8
  _ex_COLOR(); // !COLOR
  Push(0x6211); // pointer to XWLD:XPIX
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // SCALE>MIS
  {
  case 2:
    UNK_0xe49a(); // UNK_0xe49a
    break;
  case 4:
    UNK_0xe4a2(); // UNK_0xe4a2
    break;
  case 8:
    UNK_0xe4ae(); // UNK_0xe4ae
    break;
  default:
    NOP(); // NOP
    break;

  }

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffda

  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe534: WORD 'UNK_0xe536' codep=0x224c parp=0xe536
// ================================================

void UNK_0xe536() // UNK_0xe536
{
  _gt_R(); // >R
  Push(0); // 0
  SWAP(); // SWAP
  Push(1); // 1
  R_gt_(); // R>
  M_star__slash_(); // M*/
}


// ================================================
// 0xe544: WORD 'UNK_0xe546' codep=0x224c parp=0xe546
// ================================================

void UNK_0xe546() // UNK_0xe546
{
  DESTX(); // DESTX
  Push(Read16(Pop())); // @
  CURRX(); // CURRX
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  DESTY(); // DESTY
  Push(Read16(Pop())); // @
  CURRY(); // CURRY
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  ROT(); // ROT
  MAX(); // MAX
  _gt_R(); // >R
  R_at_(); // R@
  UNK_0xe536(); // UNK_0xe536
  DELTAY(); // DELTAY
  _2_ex_(); // 2!
  R_gt_(); // R>
  UNK_0xe536(); // UNK_0xe536
  DELTAX(); // DELTAX
  _2_ex_(); // 2!
  Push(0x8000);
  Push(Read16(regsp)); // DUP
  CURRX(); // CURRX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  CURRY(); // CURRY
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe58c: WORD 'UNK_0xe58e' codep=0x224c parp=0xe58e
// ================================================

void UNK_0xe58e() // UNK_0xe58e
{
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  UNK_0xe167(); // UNK_0xe167
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_ICON(); // POINT>ICON
  _dot_ICON(); // .ICON
  i++;
  } while(i<imax); // (LOOP) 0xfff8

}


// ================================================
// 0xe5aa: WORD 'UNK_0xe5ac' codep=0x224c parp=0xe5ac
// ================================================

void UNK_0xe5ac() // UNK_0xe5ac
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(0x6230); // pointer to ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe5ba: WORD 'UNK_0xe5bc' codep=0x224c parp=0xe5bc
// ================================================

void UNK_0xe5bc() // UNK_0xe5bc
{
  CURRY(); // CURRY
  _2_at_(); // 2@
  DELTAY(); // DELTAY
  _2_at_(); // 2@
  D_plus_(); // D+
  CURRY(); // CURRY
  _2_ex_(); // 2!
  CURRX(); // CURRX
  _2_at_(); // 2@
  DELTAX(); // DELTAX
  _2_at_(); // 2@
  D_plus_(); // D+
  CURRX(); // CURRX
  _2_ex_(); // 2!
}


// ================================================
// 0xe5da: WORD 'UNK_0xe5dc' codep=0x224c parp=0xe5dc
// ================================================

void UNK_0xe5dc() // UNK_0xe5dc
{
  Push(0x5cfc); // pointer to ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SetColor("DK-GREEN");
  goto label2;

  label1:
  SetColor("BLACK");

  label2:
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
}


// ================================================
// 0xe5f2: WORD 'UNK_0xe5f4' codep=0x224c parp=0xe5f4
// ================================================

void UNK_0xe5f4() // UNK_0xe5f4
{
  UNK_0xe5ac(); // UNK_0xe5ac
  _gt_MAINVIEW(); // >MAINVIEW
  UNK_0xe5dc(); // UNK_0xe5dc
  VCLIPSET(); // VCLIPSET
  UNK_0xe500(); // UNK_0xe500
  UNK_0xe58e(); // UNK_0xe58e
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xe608: WORD 'UNK_0xe60a' codep=0x224c parp=0xe60a
// ================================================

void UNK_0xe60a() // UNK_0xe60a
{
  MORIG(); // MORIG
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_UNK_0xe207); // UNK_0xe207
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xde3d); // pointer to UNK_0xde3d
  goto label2;

  label1:
  Push(0xde39); // pointer to UNK_0xde39

  label2:
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe622: WORD 'UNK_0xe624' codep=0x224c parp=0xe624
// ================================================

void UNK_0xe624() // UNK_0xe624
{
  Push(0x0a36); // pointer to ?SOUND
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0x03e8);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  BEEPON(); // BEEPON
  Push(i); // I
  TONE(); // TONE
  DISPLAY(); // DISPLAY
  Push(0x000c);
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

  Push(0x0014);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe0

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe65a: WORD 'UNK_0xe65c' codep=0x2214 parp=0xe65c
// ================================================
// 0xe65c: db 0x00 0x00 '  '

// ================================================
// 0xe65e: WORD 'UNK_0xe660' codep=0x224c parp=0xe660
// ================================================

void UNK_0xe660() // UNK_0xe660
{
  Push(0x0064);
  Push(0x03e8);
  Push(0x55f2); // pointer to COLOR
  Push(Read16(Pop())); // @
  SetColor("RED");
  _eq_(); // =
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(0xe65c);
  _ex__3(); // !_3
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP

  label1:

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  BEEPON(); // BEEPON
  Push(i); // I
  Push(i); // I
  Push(Pop()*2); // 2*
  RRND(); // RRND
  TONE(); // TONE
  Push(cc__3); // 3
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

  Push(cc_UNK_0xe65c); // UNK_0xe65c
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe0

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe6aa: WORD 'UNK_0xe6ac' codep=0x1d29 parp=0xe6ac
// ================================================
// 0xe6ac: db 0x00 0x00 '  '

// ================================================
// 0xe6ae: WORD 'UNK_0xe6b0' codep=0x1d29 parp=0xe6b0
// ================================================
// 0xe6b0: db 0x00 0x00 '  '

// ================================================
// 0xe6b2: WORD 'UNK_0xe6b4' codep=0x224c parp=0xe6b4
// ================================================

void UNK_0xe6b4() // UNK_0xe6b4
{
  Push(0xe1f7); // pointer to UNK_0xe1f7
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(cc_UNK_0xe1fb); // UNK_0xe1fb
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe472(); // UNK_0xe472
  _2DUP(); // 2DUP
  UNK_0xe482(); // UNK_0xe482
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffee

  Pop(); Pop();// 2DROP
  Push(0xe1f7); // pointer to UNK_0xe1f7
  Push(Read16(Pop())); // @
  R_gt_(); // R>
  Push(0xe1f7); // pointer to UNK_0xe1f7
  _ex__3(); // !_3
}


// ================================================
// 0xe6e2: WORD 'UNK_0xe6e4' codep=0x224c parp=0xe6e4
// ================================================

void UNK_0xe6e4() // UNK_0xe6e4
{
  Push(0xe6ac); // pointer to UNK_0xe6ac
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xe1fb); // UNK_0xe1fb
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push2Words("0.");
  UNK_0xe6b4(); // UNK_0xe6b4
  Push(0xe1f7); // pointer to UNK_0xe1f7
  _st__ex__gt_(); // <!>
  MCLASS(); // MCLASS
  _st_C_ex__gt_(); // <C!>
  MORIG(); // MORIG
  _st_C_ex__gt_(); // <C!>
  DESTY(); // DESTY
  _st__ex__gt_(); // <!>
  DESTX(); // DESTX
  _st__ex__gt_(); // <!>
  CURRY(); // CURRY
  _st__ex__gt_(); // <!>
  CURRX(); // CURRX
  _st__ex__gt_(); // <!>
  UNK_0xe546(); // UNK_0xe546
  Push(1); // 1
  Push(0xe6ac); // pointer to UNK_0xe6ac
  _st__plus__ex__gt_(); // <+!>
  Push(1); // 1
  UNK_0xe60a(); // UNK_0xe60a
  UNK_0xe624(); // UNK_0xe624
  return;

  label1:
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe72a: WORD 'UNK_0xe72c' codep=0x224c parp=0xe72c
// ================================================

void UNK_0xe72c() // UNK_0xe72c
{
  Push(cc__dash_1); // -1
  UNK_0xe60a(); // UNK_0xe60a
  Push(0xe1f7); // pointer to UNK_0xe1f7
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xe1ff); // UNK_0xe1ff
  Push(0); // 0
  FILL_1(); // FILL_1
  Push(cc__dash_1); // -1
  Push(0xe6ac); // pointer to UNK_0xe6ac
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe742: WORD 'UNK_0xe744' codep=0x224c parp=0xe744
// ================================================

void UNK_0xe744() // UNK_0xe744
{
  UNK_0xe482(); // UNK_0xe482
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_AT(); // ?ICONS-AT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0); // 0
  OVER(); // OVER
  _gt_R(); // >R
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  SWAP(); // SWAP
  POINT_gt_ICON(); // POINT>ICON
  MORIG(); // MORIG
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_UNK_0xe207); // UNK_0xe207
  _eq_(); // =
  if (Pop() == 0) goto label1;
  _at_ID(); // @ID
  Push(0x001b);
  Push(0x0023);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(1); // 1

  label2:
  goto label3;

  label1:
  Pop(); // DROP
  Push(1); // 1

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffd2

  R_gt_(); // R>
  UNK_0xdd46(); // UNK_0xdd46
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe796: WORD 'UNK_0xe798' codep=0x224c parp=0xe798
// ================================================

void UNK_0xe798() // UNK_0xe798
{
  Push(cc_UNK_0xe1fb); // UNK_0xe1fb
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe472(); // UNK_0xe472
  UNK_0xe27b(); // UNK_0xe27b
  if (Pop() == 0) goto label1;
  UNK_0xe482(); // UNK_0xe482
  _ask_INVIS(); // ?INVIS
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xe72c(); // UNK_0xe72c
  goto label1;

  label2:
  UNK_0xe744(); // UNK_0xe744
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(0xe6b0); // pointer to UNK_0xe6b0
  _plus__ex_(); // +!

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd8

}


// ================================================
// 0xe7ca: WORD 'UNK_0xe7cc' codep=0x224c parp=0xe7cc
// ================================================

void UNK_0xe7cc() // UNK_0xe7cc
{
  PAD(); // PAD
  Push(0x569b); // pointer to VIN
  _ex__3(); // !_3
  PAD(); // PAD
  Push(0x0014);
  Push(Pop() + Pop()); // +
  Push(0x56a6); // pointer to VOUT
  _ex__3(); // !_3
  PAD(); // PAD
  Push(0x0028);
  Push(Pop() + Pop()); // +
  Push(0x56b0); // pointer to OIN
  _ex__3(); // !_3
  PAD(); // PAD
  Push(0x003c);
  Push(Pop() + Pop()); // +
  Push(0x56bb); // pointer to OOUT
  _ex__3(); // !_3
  Push(2); // 2
  Push(0x5686); // pointer to #IN
  _ex__3(); // !_3
  PAD(); // PAD
  _gt_R(); // >R
  Push(h); // I
  _ex__3(); // !_3
  Push(h); // I
  Push(Pop()+2); // 2+
  _ex__3(); // !_3
  Push(h); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _ex__3(); // !_3
  R_gt_(); // R>
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  _ex__3(); // !_3
  CLIPPER(); // CLIPPER
  Push(0x569b); // pointer to VIN
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(h); // I
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  R_gt_(); // R>
  Push(Read16(Pop())); // @
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  Push(0x5686); // pointer to #IN
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(0x569b); // pointer to VIN
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @

  label1:
  Push(0x56e8); // pointer to TRJCT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe86c: WORD 'UNK_0xe86e' codep=0x224c parp=0xe86e
// ================================================

void UNK_0xe86e() // UNK_0xe86e
{
  Push(0x587c); // pointer to XORMODE
  Push(Read16(Pop())); // @
  Push(0x587c); // pointer to XORMODE
  OFF(); // OFF
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  ABORT("ERR: MOVE-ICON", 14);// (ABORT")
  POINT_gt_ICON(); // POINT>ICON
  UNK_0xdd78(); // UNK_0xdd78
  _ex_IY(); // !IY
  _ex_IX(); // !IX
  UNK_0xe5ac(); // UNK_0xe5ac
  UNK_0xe5f4(); // UNK_0xe5f4
  Push(0x587c); // pointer to XORMODE
  _st__ex__gt_(); // <!>
}

// 0xe89f: db 0x4c 0x22 0xb3 0xde 0xb3 0x0e 0x72 0x0f 0xc5 0x74 0x76 0x6d 0x72 0x0f 0xb7 0x74 0x76 0x6d 0x90 0x16 0x4c 0x22 0x0d 0x40 0x0d 0x40 0x39 0x40 0xfa 0x15 0x0c 0x00 0xde 0x0d 0x99 0xde 0x99 0xde 0x60 0x16 0x04 0x00 0xb3 0xde 0xc6 0x11 0xb3 0x0e 0x72 0x0f 0xc5 0x74 0x76 0x6d 0xc6 0x11 0x72 0x0f 0xb7 0x74 0x76 0x6d 0x90 0x16 'L"    r  tvmr  tvm  L" @ @9@          `         r  tvm  r  tvm  '

// ================================================
// 0xe8df: WORD 'UNK_0xe8e1' codep=0x224c parp=0xe8e1
// ================================================

void UNK_0xe8e1() // UNK_0xe8e1
{
  Push(0xe6b0); // pointer to UNK_0xe6b0
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0xe6b0); // pointer to UNK_0xe6b0
  OFF(); // OFF
  Push(cc_UNK_0xe1fb); // UNK_0xe1fb
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe472(); // UNK_0xe472
  UNK_0xe27b(); // UNK_0xe27b
  if (Pop() == 0) goto label1;
  UNK_0xe744(); // UNK_0xe744
  if (Pop() == 0) goto label1;
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffec

  R_gt_(); // R>
  Push(0xe6b0); // pointer to UNK_0xe6b0
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe90f: WORD 'UNK_0xe911' codep=0x224c parp=0xe911
// ================================================

void UNK_0xe911() // UNK_0xe911
{
  Push(0xde41); // pointer to UNK_0xde41
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xdeab(); // UNK_0xdeab
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  UNK_0xdeab(); // UNK_0xdeab
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0xe927: WORD 'UNK_0xe929' codep=0x224c parp=0xe929
// ================================================

void UNK_0xe929() // UNK_0xe929
{
  UNK_0xe27b(); // UNK_0xe27b
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) return;
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xe911(); // UNK_0xe911
  SWAP(); // SWAP
  DESTX(); // DESTX
  D_ex_(); // D!
  UNK_0xe546(); // UNK_0xe546
  UNK_0xe744(); // UNK_0xe744
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xe5bc(); // UNK_0xe5bc
}


// ================================================
// 0xe94b: WORD 'UNK_0xe94d' codep=0x224c parp=0xe94d
// ================================================

void UNK_0xe94d() // UNK_0xe94d
{
  Push(cc_UNK_0xe1fb); // UNK_0xe1fb
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe472(); // UNK_0xe472
  MCLASS(); // MCLASS
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  UNK_0xe929(); // UNK_0xe929
  UNK_0xe5bc(); // UNK_0xe5bc

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffee

}


// ================================================
// 0xe969: WORD 'UNK_0xe96b' codep=0x224c parp=0xe96b
// ================================================

void UNK_0xe96b() // UNK_0xe96b
{
  Push(0x000a);
  Push(0xbdd8);
  MODULE(); // MODULE
  Push(0xde41); // pointer to UNK_0xde41
  _ex__3(); // !_3
}


// ================================================
// 0xe97b: WORD 'UNK_0xe97d' codep=0x224c parp=0xe97d
// ================================================

void UNK_0xe97d() // UNK_0xe97d
{
  UNK_0xe94d(); // UNK_0xe94d
  UNK_0xe5f4(); // UNK_0xe5f4
  UNK_0xe798(); // UNK_0xe798
  Push(0xe6b0); // pointer to UNK_0xe6b0
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xe8e1(); // UNK_0xe8e1
  UNK_0xe482(); // UNK_0xe482
  UNK_0xe27b(); // UNK_0xe27b
  MORIG(); // MORIG
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(0xc8c3);
  MODULE(); // MODULE
  UNK_0xe72c(); // UNK_0xe72c
  Push(cc__dash_1); // -1
  Push(0xe6b0); // pointer to UNK_0xe6b0
  _plus__ex_(); // +!
  i++;
  } while(i<imax); // (LOOP) 0xffe4

  UNK_0xe5f4(); // UNK_0xe5f4
}


// ================================================
// 0xe9b3: WORD 'UNK_0xe9b5' codep=0x224c parp=0xe9b5
// ================================================

void UNK_0xe9b5() // UNK_0xe9b5
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0018);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xdd78(); // UNK_0xdd78
  UNK_0xdeb5(); // UNK_0xdeb5
  SWAP(); // SWAP
  Pop();
  switch(Pop()) // KEY>ORIEN
  {
  case 65535:
    X_eq__dash_1(); // X=-1
    break;
  case 0:
    X_eq_0(); // X=0
    break;
  case 1:
    X_eq_1(); // X=1
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
  Push(Read16(regsp)); // DUP
  Push(0x63fa); // IFIELD(UNK_0xddcc)
  C_ex_(); // C!
  Push(0x0023);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID

  label1:
  Pop(); Pop();// 2DROP
}

// 0xe9dd: db 0x4c 0x22 0x62 0xdd 0xb3 0xe9 0xca 0xdd 0x92 0x0c 0x7b 0x3b 0x72 0x0f 0x9b 0x3b 0x9f 0x11 0x41 0x0e 0xca 0xdd 0x6a 0x6d 0x5d 0x17 0x23 0x00 0x72 0x0f 0x52 0x9b 0x90 0x16 'L"b       {;r  ;  A   jm] # r R   '

// ================================================
// 0xe9ff: WORD 'UNK_0xea01' codep=0x224c parp=0xea01
// ================================================

void UNK_0xea01() // UNK_0xea01
{
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x0012);
  _dash_(); // -
  Push(0x5944); // pointer to XVIS
  _st__ex__gt_(); // <!>
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  Push(0x001e);
  _dash_(); // -
  Push(0x594f); // pointer to YVIS
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xea1f: WORD 'UNK_0xea21' codep=0x224c parp=0xea21
// ================================================

void UNK_0xea21() // UNK_0xea21
{
  WLD_gt_SCR(); // WLD>SCR
  Push(0x6211); // pointer to XWLD:XPIX
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _slash_(); // /
  _gt_R(); // >R
  R_at_(); // R@
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  R_gt_(); // R>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0xea3b: WORD 'UNK_0xea3d' codep=0x224c parp=0xea3d
// ================================================

void UNK_0xea3d() // UNK_0xea3d
{
  Push(0x5a02); // pointer to IINDEX
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push2Words("*SHIP");
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_ICON(); // POINT>ICON
  Push(0x6438); // IFIELD(UNK_0xde2a)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x001b);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID
  R_gt_(); // R>
  Push(0x5a02); // pointer to IINDEX
  _st__ex__gt_(); // <!>
  UNK_0xe5f4(); // UNK_0xe5f4
}


// ================================================
// 0xea61: WORD 'UNK_0xea63' codep=0x224c parp=0xea63
// ================================================

void UNK_0xea63() // UNK_0xea63
{
  Push(0x6402); // IFIELD(UNK_0xdddf)
  Push(Read16(regsp)); // DUP
  UNK_0xde81(); // UNK_0xde81
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xdd46(); // UNK_0xdd46
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xea7f: WORD 'UNK_0xea81' codep=0x224c parp=0xea81
// ================================================

void UNK_0xea81() // UNK_0xea81
{
  Push(0x5a02); // pointer to IINDEX
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _gt_R(); // >R
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  UNK_0xe5dc(); // UNK_0xe5dc
  UNK_0xe500(); // UNK_0xe500
  UNK_0xea21(); // UNK_0xea21
  _2SWAP(); // 2SWAP
  UNK_0xea21(); // UNK_0xea21
  R_gt_(); // R>
  _ex_COLOR(); // !COLOR
  UNK_0xe7cc(); // UNK_0xe7cc
  Pop(); // DROP
  LLINE(); // LLINE
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  Push(0x0a36); // pointer to ?SOUND
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe660(); // UNK_0xe660

  label1:
  R_gt_(); // R>
  POINT_gt_ICON(); // POINT>ICON
}


// ================================================
// 0xeab9: WORD 'UNK_0xeabb' codep=0x224c parp=0xeabb
// ================================================

void UNK_0xeabb() // UNK_0xeabb
{
  UNK_0xea01(); // UNK_0xea01
  _gt_2ICONF(); // >2ICONF
  Push(2); // 2
  Push(Read16(regsp)); // DUP
  Push(0x595d); // pointer to XLLDEST
  _st__ex__gt_(); // <!>
  Push(0x596b); // pointer to YLLDEST
  _st__ex__gt_(); // <!>
  Push(cc__4); // 4
  Push(Read16(regsp)); // DUP
  Push(0x6211); // pointer to XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(0x6221); // pointer to YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(0x6211); // pointer to XWLD:XPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(0x6221); // pointer to YWLD:YPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(0x5944); // pointer to XVIS
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(Pop() + Pop()); // +
  Push(0x594f); // pointer to YVIS
  Push(Read16(Pop())); // @
  Push(0x000f);
  Push(Pop() + Pop()); // +
  Push(0x5944); // pointer to XVIS
  Push(Read16(Pop())); // @
  Push(0x001a);
  Push(Pop() + Pop()); // +
  Push(0x594f); // pointer to YVIS
  Push(Read16(Pop())); // @
  Push(0x002b);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xeb13: WORD 'UNK_0xeb15' codep=0x224c parp=0xeb15
// ================================================

void UNK_0xeb15() // UNK_0xeb15
{
  UNK_0xea01(); // UNK_0xea01
  _gt_3ICONF(); // >3ICONF
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(0x595d); // pointer to XLLDEST
  _st__ex__gt_(); // <!>
  Push(0x596b); // pointer to YLLDEST
  _st__ex__gt_(); // <!>
  Push(2); // 2
  Push(Read16(regsp)); // DUP
  Push(0x6211); // pointer to XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(0x6221); // pointer to YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(0x6211); // pointer to XWLD:XPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(0x6221); // pointer to YWLD:YPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(0x5944); // pointer to XVIS
  Push(Read16(Pop())); // @
  Push(0x594f); // pointer to YVIS
  Push(Read16(Pop())); // @
  Push(0x5944); // pointer to XVIS
  Push(Read16(Pop())); // @
  Push(0x0022);
  Push(Pop() + Pop()); // +
  Push(0x594f); // pointer to YVIS
  Push(Read16(Pop())); // @
  Push(0x003a);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xeb61: WORD 'UNK_0xeb63' codep=0x224c parp=0xeb63
// ================================================

void UNK_0xeb63() // UNK_0xeb63
{
  UNK_0xea01(); // UNK_0xea01
  _gt_1ICONFONT(); // >1ICONFONT
  Push2Words("0.");
  Push(0x595d); // pointer to XLLDEST
  _st__ex__gt_(); // <!>
  Push(0x596b); // pointer to YLLDEST
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(Read16(regsp)); // DUP
  Push(0x6211); // pointer to XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(0x6221); // pointer to YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(regsp)); // DUP
  Push(0x6211); // pointer to XWLD:XPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(0x6221); // pointer to YWLD:YPIX
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(0x5944); // pointer to XVIS
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push(Pop() + Pop()); // +
  Push(0x594f); // pointer to YVIS
  Push(Read16(Pop())); // @
  Push(0x0017);
  Push(Pop() + Pop()); // +
  Push(0x5944); // pointer to XVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(0x594f); // pointer to YVIS
  Push(Read16(Pop())); // @
  Push(0x002a);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
}


// ================================================
// 0xebb9: WORD 'UNK_0xebbb' codep=0x1d29 parp=0xebbb
// ================================================
// 0xebbb: db 0x3a 0x20 ': '

// ================================================
// 0xebbd: WORD 'UNK_0xebbf' codep=0x1d29 parp=0xebbf
// ================================================
// 0xebbf: db 0x3a 0x20 ': '

// ================================================
// 0xebc1: WORD 'UNK_0xebc3' codep=0x224c parp=0xebc3
// ================================================

void UNK_0xebc3() // UNK_0xebc3
{
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  _at_IX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  _at_IY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(0xebbf); // pointer to UNK_0xebbf
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(0xebbf); // pointer to UNK_0xebbf
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xebe5: WORD 'UNK_0xebe7' codep=0x224c parp=0xebe7
// ================================================

void UNK_0xebe7() // UNK_0xebe7
{
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  _at_IX(); // @IX
  _dash_(); // -
  ABS(); // ABS
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  _at_IY(); // @IY
  _dash_(); // -
  ABS(); // ABS
  MAX(); // MAX
  Push(0xebbb); // pointer to UNK_0xebbb
  Push(Read16(Pop())); // @
  MAX(); // MAX
  Push(0xebbb); // pointer to UNK_0xebbb
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec09: WORD 'UNK_0xec0b' codep=0x224c parp=0xec0b
// ================================================

void UNK_0xec0b() // UNK_0xec0b
{
  Push(0xebbb); // pointer to UNK_0xebbb
  OFF(); // OFF
  Push(0x03e8);
  Push(0xebbf); // pointer to UNK_0xebbf
  _st__ex__gt_(); // <!>
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_ICON(); // POINT>ICON
  _at_ID(); // @ID
  Push(0x0023);
  Push(0x002c);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  UNK_0xebc3(); // UNK_0xebc3
  UNK_0xebe7(); // UNK_0xebe7

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffe6

}


// ================================================
// 0xec3d: WORD 'SET-SCALE' codep=0x224c parp=0xec4b
// ================================================
// entry

void SET_dash_SCALE() // SET-SCALE
{
  UNK_0xec0b(); // UNK_0xec0b
  Push(0xebbb); // pointer to UNK_0xebbb
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(cc__5); // 5
  _st_(); // <
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  UNK_0xeb63(); // UNK_0xeb63
  goto label2;

  label1:
  Push(cc__5); // 5
  Push(cc__8); // 8
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  UNK_0xeabb(); // UNK_0xeabb
  goto label2;

  label3:
  UNK_0xeb15(); // UNK_0xeb15

  label2:
  UNK_0xe5f4(); // UNK_0xe5f4
}


// ================================================
// 0xec79: WORD 'UNK_0xec7b' codep=0x224c parp=0xec7b
// ================================================

void UNK_0xec7b() // UNK_0xec7b
{
  UNK_0xe5ac(); // UNK_0xe5ac
  SET_dash_SCALE(); // SET-SCALE
}

// 0xec81: db 0x4c 0x22 0x5d 0x17 0x44 0x00 0x72 0x0f 0xf2 0x0e 0x9b 0x3b 0x72 0x0f 0xf2 0x0e 0x90 0x16 0x4c 0x22 0x6e 0xdd 0x62 0xdd 0x0f 0xe9 0x05 0xe2 0x30 0x75 0x5d 0x17 0x11 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0x8b 0x3b 0x60 0x16 0x06 0x00 0x9e 0xdd 0x92 0x0c 0xe2 0xe6 0x73 0x3b 0xc5 0xdd 0x6a 0x6d 0x53 0xde 0xb7 0x6d 0xdd 0xe9 0x53 0xe0 0x90 0x16 0x4c 0x22 0x39 0x40 0x07 0x13 0x41 0x0e 0xfa 0x15 0x17 0x00 0x39 0x3f 0x10 0x4c 0x41 0x53 0x45 0x52 0x20 0x4d 0x49 0x53 0x53 0x45 0x44 0x20 0x55 0x53 0x21 0x47 0xa5 0x90 0x16 0x4c 0x22 0x6e 0xdd 0x62 0xdd 0x0f 0xe9 0xf0 0x0d 0xb4 0x0d 0xb4 0x0d 0x38 0x4f 0x7f 0xea 0xb6 0x4f 0x17 0x85 0x90 0x0e 0x90 0x0e 0x62 0xdd 0xc5 0xec 0x07 0x13 0xfa 0x15 0x4e 0x00 0x5c 0x5c 0xae 0x0b 0xfa 0x15 0x25 0x00 0x39 0x3f 0x1a 0x4c 0x41 0x53 0x45 0x52 0x20 0x50 0x41 0x52 0x54 0x49 0x41 0x4c 0x4c 0x59 0x20 0x44 0x45 0x46 0x4c 0x45 0x43 0x54 0x45 0x44 0x20 0x47 0xa5 0x60 0x16 0x19 0x00 0x39 0x3f 0x0c 0x4c 0x41 0x53 0x45 0x52 0x20 0x43 0x4c 0x41 0x53 0x53 0x20 0x47 0xa5 0xa6 0xdd 0x92 0x0c 0xb8 0x27 0x05 0xe2 0x20 0x0f 0x5d 0x17 0xc3 0xc8 0xce 0x84 0x73 0x3b 0xc5 0xdd 0x6a 0x6d 0x53 0xde 0xb7 0x6d 0xdd 0xe9 0x53 0xe0 0x90 0x16 0x4c 0x22 0x6e 0xdd 0x62 0xdd 0x90 0x16 0x4c 0x22 0x68 0xed 0xb3 0xe8 0x7b 0x3b 0xc5 0xdd 0x6a 0x6d 0x6e 0xdd 0xb3 0xe9 0x6c 0xe8 0x90 0x16 0x4c 0x22 0x68 0xed 0x9f 0xe8 0x73 0x3b 0xc5 0xdd 0x6a 0x6d 0x6e 0xdd 0xb3 0xe9 0x6c 0xe8 0x90 0x16 'L"] D r    ;r     L"n b     0u]   _      ;`         s;  jmS  m  S   L"9@  A     9? LASER MISSED US!G   L"n b         8O  O      b       N \\    % 9? LASER PARTIALLY DEFLECTED G `   9? LASER CLASS G      '    ]     s;  jmS  m  S   L"n b   L"h   {;  jmn   l   L"h   s;  jmn   l   '

// ================================================
// 0xed98: WORD 'UNK_0xed9a' codep=0x224c parp=0xed9a
// ================================================

void UNK_0xed9a() // UNK_0xed9a
{
  if (Pop() == 0) goto label1;
  UNK_0xdd5a(); // UNK_0xdd5a
  if (Pop() == 0) goto label2;
  UNK_0xde9b(); // UNK_0xde9b
  goto label3;

  label2:
  Push(0); // 0

  label3:
  return;

  label1:
  UNK_0xde9b(); // UNK_0xde9b
}


// ================================================
// 0xedb4: WORD '?APPROACH' codep=0x224c parp=0xedc2
// ================================================

void _ask_APPROACH() // ?APPROACH
{
  Push(0x6400); // IFIELD(UNK_0xddc7)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _eq_(); // =
}


// ================================================
// 0xedcc: WORD 'UNK_0xedce' codep=0x224c parp=0xedce
// ================================================

void UNK_0xedce() // UNK_0xedce
{
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(1); // 1
  UNK_0xed9a(); // UNK_0xed9a
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  Push(0x63fc); // IFIELD(INST-X)
  _ex__3(); // !_3
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  R_gt_(); // R>
  UNK_0xed9a(); // UNK_0xed9a
  Push(Pop() + Pop()); // +
  Push(0x63fe); // IFIELD(INST-Y)
  _ex__3(); // !_3
  UNK_0xdd70(); // UNK_0xdd70
  UNK_0xe9b5(); // UNK_0xe9b5
  UNK_0xe86e(); // UNK_0xe86e
  Push(0); // 0
  Push(0x6400); // IFIELD(UNK_0xddc7)
  C_ex_(); // C!
}


// ================================================
// 0xedfc: WORD '<COMBAT>' codep=0xb869 parp=0xee09
// ================================================
// 0xee09: db 0x1a 0x12 0x0b 0x76 0xee 0x7c 0xee 0x83 0xee 0x89 0xee 0x90 0xee 0x99 0xee 0xa1 0xee 0xa9 0xee 0xaf 0xee 0xb4 0xee 0xba 0xee 0x8f 0x90 0x16 0x4c 0x22 0xf0 0xed 0x39 0x3f 0x12 0x21 0x21 0x48 0x55 0x4c 0x4c 0x20 0x44 0x45 0x53 0x54 0x52 0x4f 0x59 0x45 0x44 0x31 0x31 0x37 0x33 0x72 0xdf 0xc0 0xdf 0xd2 0xdf 0x8c 0xdf 0x2d 0xe1 0x39 0xe1 0xa4 0xdf 0xf4 0xdf 0xab 0xe0 0x0f 0xe0 0x21 0xe1 0x19 0xe0 0x6b 0xe0 0x25 0xe0 0x43 0xe0 0xa1 0xe0 0x96 0xdf 0x16 0x4c 0x22 0x4f 0x06 0x93 0x1f 0x93 0x1f 0xfa 0x1b 0xe8 0xd9 0x27 0x38 0x0c 0xd3 0x7c 0x93 0x3b 0x03 0x95 0xec 0x80 0x81 0x82 0x04 0x95 0xec 0x00 0x83 0x84 0x81 0x03 0x95 0xec 0x00 0x85 0x81 0x04 0xea 0xec 0x80 0x86 0x87 0x88 0x06 0xea 0xec 0x00 0x83 0x84 0x01 0x86 0x88 0x05 0xea 0xec 0x00 0x85 0x01 0x86 0x88 0x05 0x72 0xed 0x89 0x04 0x0a 0x8b 0x8c 0x03 0x72 0xed 0x8a 0x0d 0x8c 0x02 0x72 0xed 0x8e 0x8c 0x03 0x86 0xed 0x8c 0x84 0x8f 0x05 0x86 0xed 0x8c 0x84 0x10 0x86 0x01 '   v |                      L"  9? !!HULL DESTROYED1173r       - 9         !   k % C      L"O         '8  | ;                                            r       r     r                 '

// ================================================
// 0xeec2: WORD 'UNK_0xeec4' codep=0x224c parp=0xeec4
// ================================================

void UNK_0xeec4() // UNK_0xeec4
{
  Push(0x641f); // IFIELD(UNK_0xde1b)
  Push(Read16(Pop())); // @
  Push(0x6409); // IFIELD(UNK_0xde02)
  UNK_0xde77(); // UNK_0xde77
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  _st_(); // <
}


// ================================================
// 0xeed6: WORD 'UNK_0xeed8' codep=0x224c parp=0xeed8
// ================================================

void UNK_0xeed8() // UNK_0xeed8
{
  Push(0x55b0); // pointer to ^VES
  Push(Read16(Pop())); // @
  POINT_gt_ICON(); // POINT>ICON
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeee6: WORD 'UNK_0xeee8' codep=0x224c parp=0xeee8
// ================================================

void UNK_0xeee8() // UNK_0xeee8
{
  Push(0x55b0); // pointer to ^VES
  OFF(); // OFF
}


// ================================================
// 0xeeee: WORD 'UNK_0xeef0' codep=0x224c parp=0xeef0
// ================================================

void UNK_0xeef0() // UNK_0xeef0
{
  Push(0xee09);
  DISTRACT(); // DISTRACT
  Func13("<COMBAT>");
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xe06b(); // UNK_0xe06b
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xedce(); // UNK_0xedce
}


// ================================================
// 0xef06: WORD 'UNK_0xef08' codep=0x224c parp=0xef08
// ================================================

void UNK_0xef08() // UNK_0xef08
{
  Push(0x6403); // IFIELD(UNK_0xddc2)
  Push(Read16(Pop())); // @
  LoadData("UNK_0xdd98"); // from 'VESSEL      '
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) return;
  Push(cc__5); // 5
  LoadData("UNK_0xdd98"); // from 'VESSEL      '
  _plus__ex_(); // +!
}


// ================================================
// 0xef1e: WORD 'UNK_0xef20' codep=0x224c parp=0xef20
// ================================================

void UNK_0xef20() // UNK_0xef20
{
  UNK_0xeec4(); // UNK_0xeec4
  if (Pop() == 0) return;
  Push(0x0014);
  Push(0x641f); // IFIELD(UNK_0xde1b)
  _plus__ex_(); // +!
}


// ================================================
// 0xef30: WORD 'COMBAT' codep=0x224c parp=0xef3b
// ================================================
// entry

void COMBAT() // COMBAT
{
  SET_dash_SCALE(); // SET-SCALE
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label1;
  UNK_0xeed8(); // UNK_0xeed8
  _at_ID(); // @ID
  Push(0x0023);
  Push(0x002b);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  UNK_0xeef0(); // UNK_0xeef0
  UNK_0xef08(); // UNK_0xef08
  goto label3;

  label2:
  _at_ID(); // @ID
  Push(0x001b);
  Push(0x0023);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  UNK_0xef20(); // UNK_0xef20

  label3:
  ICLOSE(); // ICLOSE
  Push(0x55b0); // pointer to ^VES
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  MOD(); // MOD
  Push(0x55b0); // pointer to ^VES
  _ex__3(); // !_3
  UNK_0xe97d(); // UNK_0xe97d

  label1:
  Push(0xebbf); // pointer to UNK_0xebbf
  Push(Read16(Pop())); // @
  Push(0x0016);
  _gt_(); // >
  Push(0x5e46); // pointer to ?COMBAT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0x5778); // pointer to 'UNNEST
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xefa7: WORD 'ORIENT>O' codep=0x1d29 parp=0xefb4
// ================================================
// 0xefb4: db 0x00 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x01 0x00 0x00 0x00 0x01 0x00 0xff 0xff 0x00 0x00 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0xff 0x00 0x00 0xff 0xff 0x01 0x00 '                                '

// ================================================
// 0xefd4: WORD 'UNK_0xefd6' codep=0x224c parp=0xefd6
// ================================================

void UNK_0xefd6() // UNK_0xefd6
{
  Push(0xebbb); // pointer to UNK_0xebbb
  Push(Read16(Pop())); // @
  Push(0xebbf); // pointer to UNK_0xebbf
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  Push(0x6438); // IFIELD(UNK_0xde2a)
  Push(Read8(Pop())&0xFF); // C@
  _4_star_(); // 4*
  Push(0xefb4); // pointer to ORIENT>O
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
  _gt_R(); // >R
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  ROT(); // ROT
  Push(Pop() * Pop()); // *
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0xde45); // pointer to UNK_0xde45
  _2_ex_(); // 2!
}


// ================================================
// 0xf00c: WORD 'UNK_0xf00e' codep=0x224c parp=0xf00e
// ================================================

void UNK_0xf00e() // UNK_0xf00e
{
  Push(0x6434); // IFIELD(UNK_0xde20)
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf018: WORD 'UNK_0xf01a' codep=0x224c parp=0xf01a
// ================================================

void UNK_0xf01a() // UNK_0xf01a
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(0x0006);
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf03c: WORD 'UNK_0xf03e' codep=0x224c parp=0xf03e
// ================================================

void UNK_0xf03e() // UNK_0xf03e
{
  UNK_0xf01a(); // UNK_0xf01a
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(0x000a);
  M_star_(); // M*
  Push(0x6106); // pointer to 10*END
  _2_ex_(); // 2!
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf056: WORD 'UNK_0xf058' codep=0x224c parp=0xf058
// ================================================

void UNK_0xf058() // UNK_0xf058
{
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  ROT(); // ROT
  Push(0); // 0
  D_dash_(); // D-
  Push2Words("0.");
  DMAX(); // DMAX
  Push(0x6106); // pointer to 10*END
  _2_ex_(); // 2!
  Push(0x60ca); // pointer to 10*CARGO
  _2_at_(); // 2@
  R_gt_(); // R>
  Push(0); // 0
  D_plus_(); // D+
  Push(0x60ca); // pointer to 10*CARGO
  _2_ex_(); // 2!
}


// ================================================
// 0xf07e: WORD 'UNK_0xf080' codep=0x224c parp=0xf080
// ================================================

void UNK_0xf080() // UNK_0xf080
{
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
}


// ================================================
// 0xf088: WORD 'UNK_0xf08a' codep=0x224c parp=0xf08a
// ================================================

void UNK_0xf08a() // UNK_0xf08a
{
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Push(cc__5); // 5
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  UNK_0xf01a(); // UNK_0xf01a
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0ae: WORD 'UNK_0xf0b0' codep=0x1d29 parp=0xf0b0
// ================================================
// 0xf0b0: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xf0b4: WORD 'UNK_0xf0b6' codep=0x224c parp=0xf0b6
// ================================================

void UNK_0xf0b6() // UNK_0xf0b6
{
  Push(0); // 0
  Push(0x00fa);
  ROT(); // ROT
  _dash_(); // -
  RRND(); // RRND
  Push(0x0032);
  _slash_(); // /
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xf0d6: WORD 'UNK_0xf0d8' codep=0x224c parp=0xf0d8
// ================================================

void UNK_0xf0d8() // UNK_0xf0d8
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x6406); // IFIELD(UNK_0xde2f)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(0x640a); // IFIELD(UNK_0xde34)
  Push(Read8(Pop())&0xFF); // C@
  _gt_R(); // >R
  Push(0xde4f); // pointer to UNK_0xde4f
  _2_at_(); // 2@
  R_at_(); // R@
  UNK_0xf0b6(); // UNK_0xf0b6
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(0xf0b0); // pointer to UNK_0xf0b0
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  R_gt_(); // R>
  UNK_0xf0b6(); // UNK_0xf0b6
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(0xf0b0); // pointer to UNK_0xf0b0
  Push(Pop()+2); // 2+
  _st__ex__gt_(); // <!>
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  _2DUP(); // 2DUP
  WLD_gt_SCR(); // WLD>SCR
  Push(0xde45); // pointer to UNK_0xde45
  D_ex_(); // D!
}


// ================================================
// 0xf11c: WORD 'UNK_0xf11e' codep=0x224c parp=0xf11e
// ================================================

void UNK_0xf11e() // UNK_0xf11e
{
  Push(0x2710);
  Push(0xde4b); // pointer to UNK_0xde4b
  _ex__3(); // !_3
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_ICON(); // POINT>ICON
  _at_ID(); // @ID
  Push(0x0023);
  Push(0x002b);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  Push(0xde45); // pointer to UNK_0xde45
  _2_at_(); // 2@
  UNK_0xdd70(); // UNK_0xdd70
  UNK_0xde59(); // UNK_0xde59
  Push(Read16(regsp)); // DUP
  Push(0xde4b); // pointer to UNK_0xde4b
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(0xde4b); // pointer to UNK_0xde4b
  _st__ex__gt_(); // <!>
  UNK_0xdd70(); // UNK_0xdd70
  Push(0xde4f); // pointer to UNK_0xde4f
  _2_ex_(); // 2!
  goto label2;

  label3:
  Pop(); // DROP

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffc6

  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf17c: WORD 'UNK_0xf17e' codep=0x224c parp=0xf17e
// ================================================

void UNK_0xf17e() // UNK_0xf17e
{
  Push(0xde4b); // pointer to UNK_0xde4b
  Push(Read16(Pop())); // @
  Push(0x2710);
  _dash_(); // -
}


// ================================================
// 0xf18a: WORD 'UNK_0xf18c' codep=0x224c parp=0xf18c
// ================================================

void UNK_0xf18c() // UNK_0xf18c
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("NO TARGET PRESENT");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf1a8: WORD 'UNK_0xf1aa' codep=0x224c parp=0xf1aa
// ================================================

void UNK_0xf1aa() // UNK_0xf1aa
{
  Push(1); // 1
  Push(0x5098);
  _ex__3(); // !_3
}


// ================================================
// 0xf1b4: WORD 'UNK_0xf1b6' codep=0x224c parp=0xf1b6
// ================================================

void UNK_0xf1b6() // UNK_0xf1b6
{
  Push(0xde39); // pointer to UNK_0xde39
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xe1fb); // UNK_0xe1fb
  Push(Pop()>>1); // 2/
  _st_(); // <
  if (Pop() == 0) return;
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xf0d8(); // UNK_0xf0d8
  Push(cc_UNK_0xe203); // UNK_0xe203
  Push(0x640b); // IFIELD(UNK_0xde0c)
  UNK_0xde77(); // UNK_0xde77
  UNK_0xe6e4(); // UNK_0xe6e4
  Push(cc__5); // 5
  UNK_0xf058(); // UNK_0xf058
  UNK_0xe055(); // UNK_0xe055
  UNK_0xf1aa(); // UNK_0xf1aa
}


// ================================================
// 0xf1da: WORD 'UNK_0xf1dc' codep=0x224c parp=0xf1dc
// ================================================

void UNK_0xf1dc() // UNK_0xf1dc
{
  UNK_0xdd64(); // UNK_0xdd64
  UNK_0xf0d8(); // UNK_0xf0d8
  _2DUP(); // 2DUP
  Push(0xde4f); // pointer to UNK_0xde4f
  _2_ex_(); // 2!
  VCLIPSET(); // VCLIPSET
  SetColor("LT-BLUE");
  UNK_0xea81(); // UNK_0xea81
  DCLIPSET(); // DCLIPSET
  Push(0xde4f); // pointer to UNK_0xde4f
  _2_at_(); // 2@
  Push(cc_UNK_0xe203); // UNK_0xe203
  Push(0); // 0
  Push(0xc8c3);
  MODULE(); // MODULE
  Push(1); // 1
  UNK_0xf058(); // UNK_0xf058
  UNK_0xe055(); // UNK_0xe055
  UNK_0xf1aa(); // UNK_0xf1aa
}


// ================================================
// 0xf206: WORD 'UNK_0xf208' codep=0x224c parp=0xf208
// ================================================

void UNK_0xf208() // UNK_0xf208
{
  UNK_0xea63(); // UNK_0xea63
  if (Pop() == 0) goto label1;
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_ICON(); // POINT>ICON
  _2DUP(); // 2DUP
  Push(0x5dae); // pointer to XABS
  _plus__ex_(); // +!
  Push(0x5db9); // pointer to YABS
  _plus__ex_(); // +!
  _2DUP(); // 2DUP
  Push(0x63fc); // IFIELD(INST-X)
  _plus__ex_(); // +!
  Push(0x63fe); // IFIELD(INST-Y)
  _plus__ex_(); // +!
  _at_IX(); // @IX
  Push(Pop() + Pop()); // +
  _ex_IX(); // !IX
  _at_IY(); // @IY
  Push(Pop() + Pop()); // +
  _ex_IY(); // !IY
  return;

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf23e: WORD 'UNK_0xf240' codep=0x224c parp=0xf240
// ================================================

void UNK_0xf240() // UNK_0xf240
{
  UNK_0xf080(); // UNK_0xf080
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf00e(); // UNK_0xf00e
  if (Pop() == 0) goto label2;
  UNK_0xefd6(); // UNK_0xefd6
  UNK_0xf11e(); // UNK_0xf11e
  UNK_0xf17e(); // UNK_0xf17e
  if (Pop() == 0) goto label3;
  UNK_0xdd64(); // UNK_0xdd64
  Push(0xde4f); // pointer to UNK_0xde4f
  _2_at_(); // 2@
  UNK_0xde59(); // UNK_0xde59
  Push(cc__7); // 7
  _st_(); // <
  UNK_0xe109(); // UNK_0xe109
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label4;
  UNK_0xf1dc(); // UNK_0xf1dc
  goto label5;

  label4:
  UNK_0xe0f1(); // UNK_0xe0f1
  if (Pop() == 0) goto label6;
  UNK_0xf1b6(); // UNK_0xf1b6
  goto label5;

  label6:
  UNK_0xe109(); // UNK_0xe109
  if (Pop() == 0) goto label7;
  UNK_0xf1dc(); // UNK_0xf1dc
  goto label5;

  label7:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("WEAPON NOT AVAILABLE");
  _dot_TTY(); // .TTY

  label5:
  goto label8;

  label3:
  UNK_0xf18c(); // UNK_0xf18c

  label8:
  goto label9;

  label2:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("WEAPONS NOT ARMED ");
  _dot_TTY(); // .TTY

  label9:
  return;

  label1:
  SetColor("RED");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("OUT OF FUEL! ");
  _dot_TTY(); // .TTY
}

// 0xf2e8: db 0x4c 0x22 0x1d 0x5e 0x37 0x3a 0x39 0xef 0x90 0x16 'L" ^7:9   '

// ================================================
// 0xf2f2: WORD 'UNK_0xf2f4' codep=0x224c parp=0xf2f4
// ================================================

void UNK_0xf2f4() // UNK_0xf2f4
{
  Push(0xc104);
  Push(0x5f40); // pointer to 'VEHICLE-CYCLE
  _ex__3(); // !_3
  Push(0xc136);
  Push(0x5f6a); // pointer to 'REPAIR
  _ex__3(); // !_3
  Push(0x3a48);
  Push(0x5f32); // pointer to '.VEHICLE-STATUS
  _ex__3(); // !_3
  Push(0x3a48);
  Push(0x5ed1); // pointer to 'DEATH
  _ex__3(); // !_3
  Push(0xf2ea);
  Push(0x5f5c); // pointer to 'EXTERNAL-EVENTS
  _ex__3(); // !_3
  Push(0x3a48);
  Push(0x5edf); // pointer to 'ENDING
  _ex__3(); // !_3
  Push(0xc081);
  Push(0x5f4e); // pointer to 'CREW-C
  _ex__3(); // !_3
  Push2Words("0.");
  Push(0xbfbc); // pointer to LASTAP
  _2_ex_(); // 2!
  Push(0x3a48);
  Push(0x5f17); // pointer to '.VITAL
  _ex__3(); // !_3
  Push(0xc05f);
  Push(0x5f78); // pointer to 'TREATM
  _ex__3(); // !_3
  Push(0x5b89); // pointer to ?HEAL
  ON_3(); // ON_3
  Push(0x5e46); // pointer to ?COMBAT
  ON_2(); // ON_2
  Push(0x5e82); // pointer to TIME-PASSING
  ON_2(); // ON_2
}


// ================================================
// 0xf350: WORD 'UNK_0xf352' codep=0x224c parp=0xf352
// ================================================

void UNK_0xf352() // UNK_0xf352
{
  Push(0xc104);
  Push(0x5f40); // pointer to 'VEHICLE-CYCLE
  _ex__3(); // !_3
  Push(0xc136);
  Push(0x5f6a); // pointer to 'REPAIR
  _ex__3(); // !_3
  Push(0x3a48);
  Push(0x5f32); // pointer to '.VEHICLE-STATUS
  _ex__3(); // !_3
  Push(0xc04e);
  Push(0x5ed1); // pointer to 'DEATH
  _ex__3(); // !_3
  Push(0xafa3);
  Push(0x5f5c); // pointer to 'EXTERNAL-EVENTS
  _ex__3(); // !_3
  Push(0xc081);
  Push(0x5f4e); // pointer to 'CREW-C
  _ex__3(); // !_3
  Push(0x3a48);
  Push(0x5f17); // pointer to '.VITAL
  _ex__3(); // !_3
  Push(0xc05f);
  Push(0x5f78); // pointer to 'TREATM
  _ex__3(); // !_3
  Push(0xbf56);
  Push(0x5f24); // pointer to '.DATE
  _ex__3(); // !_3
  UNK_0xf08a(); // UNK_0xf08a
  Push(0xde55); // pointer to UNK_0xde55
  OFF(); // OFF
  Push(0x5ae7); // pointer to FORCEPTASK
  OFF_2(); // OFF_2
  Push(0x5e46); // pointer to ?COMBAT
  OFF_2(); // OFF_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3ac: WORD 'UNK_0xf3ae' codep=0x224c parp=0xf3ae
// ================================================

void UNK_0xf3ae() // UNK_0xf3ae
{
  Push(0x5c95); // pointer to LKEY
  Push(Read16(Pop())); // @
  Push(0x000d);
  _eq_(); // =
}


// ================================================
// 0xf3ba: WORD 'UNK_0xf3bc' codep=0x224c parp=0xf3bc
// ================================================

void UNK_0xf3bc() // UNK_0xf3bc
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
  _2DUP(); // 2DUP
  Pop();
  switch(Pop()) // KEY>ORIEN
  {
  case 65535:
    X_eq__dash_1(); // X=-1
    break;
  case 0:
    X_eq_0(); // X=0
    break;
  case 1:
    X_eq_1(); // X=1
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
  Push(0x6438); // IFIELD(UNK_0xde2a)
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  Push(0x6438); // IFIELD(UNK_0xde2a)
  C_ex_(); // C!
  UNK_0xea3d(); // UNK_0xea3d
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xe0db(); // UNK_0xe0db
  if (Pop() == 0) goto label2;
  UNK_0xf208(); // UNK_0xf208
  SET_dash_SCALE(); // SET-SCALE
  Push(0x07d0);
  Push(cc_MPS); // MPS
  _slash_(); // /
  UNK_0xe0cb(); // UNK_0xe0cb
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  goto label4;

  label1:
  Pop(); Pop();// 2DROP

  label4:
  _ask_TRIG(); // ?TRIG
  UNK_0xf3ae(); // UNK_0xf3ae
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  UNK_0xf240(); // UNK_0xf240
  UNK_0xe1dd(); // UNK_0xe1dd
  MODULE(); // MODULE

  label5:
  UNK_0xe5f4(); // UNK_0xe5f4
  UNK_0xf3ae(); // UNK_0xf3ae
  if (Pop() == 0) return;
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xf412: WORD 'UNK_0xf414' codep=0x224c parp=0xf414
// ================================================

void UNK_0xf414() // UNK_0xf414
{
  _gt_MAINVIEW(); // >MAINVIEW
  UNK_0xe5dc(); // UNK_0xe5dc
  _gt_DISPLAY(); // >DISPLAY
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("HIT SPACE BAR TO FIRE WEAPON");
  _dot_TTY(); // .TTY

  UNK_0x3f3b("HIT RETURN TO EXIT COMBAT ");
  _dot_TTY(); // .TTY
  Push(0xe500);
  Push(0x5994); // pointer to '.BACKG
  _ex__3(); // !_3
  UNK_0xeee8(); // UNK_0xeee8
  UNK_0xe96b(); // UNK_0xe96b
  Push(0xde41); // pointer to UNK_0xde41
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;

  UNK_0x3f3b("CLOAKING DEVICE NOW ACTIVE");
  _dot_TTY(); // .TTY

  label1:
  Push(0xc03f);
  MODULE(); // MODULE
  UNK_0xf2f4(); // UNK_0xf2f4
  UNK_0xe055(); // UNK_0xe055
  Push(0x5ae7); // pointer to FORCEPTASK
  ON_3(); // ON_3
  UNK_0xf03e(); // UNK_0xf03e
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xec7b(); // UNK_0xec7b
  _gt_1FONT(); // >1FONT
  Push(0x5d81); // pointer to #AUX
  OFF_2(); // OFF_2
  UNK_0xe1dd(); // UNK_0xe1dd
  MODULE(); // MODULE
  UNK_0xe5f4(); // UNK_0xe5f4
}


// ================================================
// 0xf4b5: WORD 'WAR' codep=0x224c parp=0xf4bd
// ================================================
// entry

void WAR() // WAR
{
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xf352);
  Push(0xf3bc);
  Push(0xf414);
  DOTASKS(UNK_0xf414, UNK_0xf3bc, UNK_0xf352);
  return;

  label1:
  BEEP(); // BEEP
}


// ================================================
// 0xf4df: WORD 'CLEAR-CO' codep=0x224c parp=0xf4ec
// ================================================
// entry

void CLEAR_dash_CO() // CLEAR-CO
{
  UNK_0xe462(); // UNK_0xe462
  Push(0xe6ac); // pointer to UNK_0xe6ac
  OFF(); // OFF
  Push(0xe6b0); // pointer to UNK_0xe6b0
  OFF(); // OFF
  Push(0xde39); // pointer to UNK_0xde39
  OFF(); // OFF
  Push(0xde3d); // pointer to UNK_0xde3d
  OFF(); // OFF
  UNK_0xe055(); // UNK_0xe055
  Push(0xc03f);
  MODULE(); // MODULE
  Push(0xde41); // pointer to UNK_0xde41
  OFF(); // OFF
  Push(0); // 0
  UNK_0xe0cb(); // UNK_0xe0cb
  Push(0x0006);
  Push(0xbdd8);
  MODULE(); // MODULE
  Push(0x5c5e); // pointer to ?ROD
  _st__ex__gt_(); // <!>
}

// 0xf51e: db 0x43 0x4f 0x4d 0x42 0x41 0x54 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x5c 0x20 0x43 0x4f 0x4d 0x42 0x41 0x54 0x20 0x20 0x43 0x4d 0x50 0x2d 0x28 0x20 0x72 0x66 0x67 0x32 0x35 0x73 0x65 0x70 0x38 0x37 0x29 0x2d 0x32 0x33 0x00 'COMBAT-VO_______________________----\ COMBAT  CMP-( rfg25sep87)-23 '
  