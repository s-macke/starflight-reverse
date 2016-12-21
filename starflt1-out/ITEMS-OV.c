// ====== OVERLAY 'ITEMS-OV' ======
// store offset = 0xdde0
// overlay size   = 0x1780

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0x9eb9 C-string:'UNK_0x3f3b'
// 1704:      UNK_0xddf6  codep:0x1d29 parp:0xddf6 size:0x0002 C-string:'UNK_0xddf6'
// 1705:      UNK_0xddfa  codep:0x1d29 parp:0xddfa size:0x00cd C-string:'UNK_0xddfa'
// 1706:      UNK_0xdec9  codep:0x1d29 parp:0xdec9 size:0x0002 C-string:'UNK_0xdec9'
// 1707:      UNK_0xdecd  codep:0x224c parp:0xdecd size:0x0032 C-string:'UNK_0xdecd'
// 1708:      UNK_0xdf01  codep:0x224c parp:0xdf01 size:0x0008 C-string:'UNK_0xdf01'
// 1709:      UNK_0xdf0b  codep:0x224c parp:0xdf0b size:0x0048 C-string:'UNK_0xdf0b'
// 1710:      UNK_0xdf55  codep:0x224c parp:0xdf55 size:0x008e C-string:'UNK_0xdf55'
// 1711:      UNK_0xdfe5  codep:0x73ea parp:0xdfe5 size:0x0006 C-string:'UNK_0xdfe5'
// 1712:      UNK_0xdfed  codep:0x744d parp:0xdfed size:0x0003 C-string:'UNK_0xdfed'
// 1713:      UNK_0xdff2  codep:0x744d parp:0xdff2 size:0x000b C-string:'UNK_0xdff2'
// 1714:      UNK_0xdfff  codep:0x744d parp:0xdfff size:0x0003 C-string:'UNK_0xdfff'
// 1715:      UNK_0xe004  codep:0x744d parp:0xe004 size:0x0003 C-string:'UNK_0xe004'
// 1716:      UNK_0xe009  codep:0x73ea parp:0xe009 size:0x0006 C-string:'UNK_0xe009'
// 1717:      UNK_0xe011  codep:0x744d parp:0xe011 size:0x0003 C-string:'UNK_0xe011'
// 1718:      UNK_0xe016  codep:0x744d parp:0xe016 size:0x0003 C-string:'UNK_0xe016'
// 1719:      UNK_0xe01b  codep:0x744d parp:0xe01b size:0x0017 C-string:'UNK_0xe01b'
// 1720:      UNK_0xe034  codep:0x224c parp:0xe034 size:0x000e C-string:'UNK_0xe034'
// 1721:      UNK_0xe044  codep:0x224c parp:0xe044 size:0x0018 C-string:'UNK_0xe044'
// 1722:      UNK_0xe05e  codep:0x224c parp:0xe05e size:0x0012 C-string:'UNK_0xe05e'
// 1723:      UNK_0xe072  codep:0x224c parp:0xe072 size:0x0010 C-string:'UNK_0xe072'
// 1724:      UNK_0xe084  codep:0x224c parp:0xe084 size:0x002f C-string:'UNK_0xe084'
// 1725:      UNK_0xe0b5  codep:0x224c parp:0xe0b5 size:0x00ca C-string:'UNK_0xe0b5'
// 1726:      UNK_0xe181  codep:0x224c parp:0xe181 size:0x000b C-string:'UNK_0xe181'
// 1727:      UNK_0xe18e  codep:0x224c parp:0xe18e size:0x0009 C-string:'UNK_0xe18e'
// 1728:      UNK_0xe199  codep:0x224c parp:0xe199 size:0x000d C-string:'UNK_0xe199'
// 1729:      UNK_0xe1a8  codep:0x224c parp:0xe1a8 size:0x000a C-string:'UNK_0xe1a8'
// 1730:      UNK_0xe1b4  codep:0x224c parp:0xe1b4 size:0x000b C-string:'UNK_0xe1b4'
// 1731:      UNK_0xe1c1  codep:0x224c parp:0xe1c1 size:0x0008 C-string:'UNK_0xe1c1'
// 1732:      UNK_0xe1cb  codep:0x1d29 parp:0xe1cb size:0x0006 C-string:'UNK_0xe1cb'
// 1733:      UNK_0xe1d3  codep:0x224c parp:0xe1d3 size:0x0006 C-string:'UNK_0xe1d3'
// 1734:      UNK_0xe1db  codep:0x224c parp:0xe1db size:0x000c C-string:'UNK_0xe1db'
// 1735:      UNK_0xe1e9  codep:0x224c parp:0xe1e9 size:0x0012 C-string:'UNK_0xe1e9'
// 1736:      UNK_0xe1fd  codep:0x224c parp:0xe1fd size:0x0017 C-string:'UNK_0xe1fd'
// 1737:      UNK_0xe216  codep:0x224c parp:0xe216 size:0x000c C-string:'UNK_0xe216'
// 1738:      UNK_0xe224  codep:0x224c parp:0xe224 size:0x0012 C-string:'UNK_0xe224'
// 1739:      UNK_0xe238  codep:0x224c parp:0xe238 size:0x0012 C-string:'UNK_0xe238'
// 1740:       T.OPTIONS  codep:0x4a4f parp:0xe258 size:0x0024 C-string:'T_dot_OPTIONS'
// 1741:      UNK_0xe27e  codep:0x224c parp:0xe27e size:0x000c C-string:'UNK_0xe27e'
// 1742:      UNK_0xe28c  codep:0x224c parp:0xe28c size:0x0012 C-string:'UNK_0xe28c'
// 1743:      UNK_0xe2a0  codep:0x224c parp:0xe2a0 size:0x0017 C-string:'UNK_0xe2a0'
// 1744:      UNK_0xe2b9  codep:0x224c parp:0xe2b9 size:0x004c C-string:'UNK_0xe2b9'
// 1745:      UNK_0xe307  codep:0x224c parp:0xe307 size:0x000e C-string:'UNK_0xe307'
// 1746:       P.OPTIONS  codep:0x4a4f parp:0xe323 size:0x001c C-string:'P_dot_OPTIONS'
// 1747:      UNK_0xe341  codep:0x224c parp:0xe341 size:0x0026 C-string:'UNK_0xe341'
// 1748:      UNK_0xe369  codep:0x224c parp:0xe369 size:0x001f C-string:'UNK_0xe369'
// 1749:      UNK_0xe38a  codep:0x224c parp:0xe38a size:0x000c C-string:'UNK_0xe38a'
// 1750:      UNK_0xe398  codep:0x224c parp:0xe398 size:0x0083 C-string:'UNK_0xe398'
// 1751:       (EXTRACT)  codep:0x224c parp:0xe429 size:0x0030 C-string:'_ro_EXTRACT_rc_'
// 1752:      UNK_0xe45b  codep:0x224c parp:0xe45b size:0x0008 C-string:'UNK_0xe45b'
// 1753:      UNK_0xe465  codep:0x224c parp:0xe465 size:0x0008 C-string:'UNK_0xe465'
// 1754:      UNK_0xe46f  codep:0x73ea parp:0xe46f size:0x0006 C-string:'UNK_0xe46f'
// 1755:      UNK_0xe477  codep:0x73ea parp:0xe477 size:0x0006 C-string:'UNK_0xe477'
// 1756:      UNK_0xe47f  codep:0x73ea parp:0xe47f size:0x0006 C-string:'UNK_0xe47f'
// 1757:      UNK_0xe487  codep:0x224c parp:0xe487 size:0x0032 C-string:'UNK_0xe487'
// 1758:      UNK_0xe4bb  codep:0x224c parp:0xe4bb size:0x0034 C-string:'UNK_0xe4bb'
// 1759:      UNK_0xe4f1  codep:0x224c parp:0xe4f1 size:0x0030 C-string:'UNK_0xe4f1'
// 1760:      UNK_0xe523  codep:0x224c parp:0xe523 size:0x0034 C-string:'UNK_0xe523'
// 1761:      UNK_0xe559  codep:0x224c parp:0xe559 size:0x000c C-string:'UNK_0xe559'
// 1762:      UNK_0xe567  codep:0x224c parp:0xe567 size:0x002a C-string:'UNK_0xe567'
// 1763:      UNK_0xe593  codep:0x224c parp:0xe593 size:0x002c C-string:'UNK_0xe593'
// 1764:      UNK_0xe5c1  codep:0x224c parp:0xe5c1 size:0x0010 C-string:'UNK_0xe5c1'
// 1765:      UNK_0xe5d3  codep:0x224c parp:0xe5d3 size:0x000a C-string:'UNK_0xe5d3'
// 1766:      UNK_0xe5df  codep:0x224c parp:0xe5df size:0x003b C-string:'UNK_0xe5df'
// 1767:      UNK_0xe61c  codep:0x224c parp:0xe61c size:0x001a C-string:'UNK_0xe61c'
// 1768:      UNK_0xe638  codep:0x224c parp:0xe638 size:0x0038 C-string:'UNK_0xe638'
// 1769:      UNK_0xe672  codep:0x224c parp:0xe672 size:0x0008 C-string:'UNK_0xe672'
// 1770:      UNK_0xe67c  codep:0x224c parp:0xe67c size:0x003a C-string:'UNK_0xe67c'
// 1771:      UNK_0xe6b8  codep:0x224c parp:0xe6b8 size:0x0073 C-string:'UNK_0xe6b8'
// 1772:      UNK_0xe72d  codep:0x224c parp:0xe72d size:0x002c C-string:'UNK_0xe72d'
// 1773:      UNK_0xe75b  codep:0x224c parp:0xe75b size:0x0243 C-string:'UNK_0xe75b'
// 1774:      UNK_0xe9a0  codep:0x224c parp:0xe9a0 size:0x0008 C-string:'UNK_0xe9a0'
// 1775:      UNK_0xe9aa  codep:0x224c parp:0xe9aa size:0x004e C-string:'UNK_0xe9aa'
// 1776:      UNK_0xe9fa  codep:0x224c parp:0xe9fa size:0x0036 C-string:'UNK_0xe9fa'
// 1777:      UNK_0xea32  codep:0x224c parp:0xea32 size:0x0042 C-string:'UNK_0xea32'
// 1778:      UNK_0xea76  codep:0x224c parp:0xea76 size:0x0042 C-string:'UNK_0xea76'
// 1779:      UNK_0xeaba  codep:0x1d29 parp:0xeaba size:0x0004 C-string:'UNK_0xeaba'
// 1780:      UNK_0xeac0  codep:0x224c parp:0xeac0 size:0x0054 C-string:'UNK_0xeac0'
// 1781:      UNK_0xeb16  codep:0x224c parp:0xeb16 size:0x00b3 C-string:'UNK_0xeb16'
// 1782:      UNK_0xebcb  codep:0x1d29 parp:0xebcb size:0x0002 C-string:'UNK_0xebcb'
// 1783:          TS.ACT  codep:0x4a4f parp:0xebd8 size:0x000c C-string:'TS_dot_ACT'
// 1784:          PS.ACT  codep:0x4a4f parp:0xebef size:0x0008 C-string:'PS_dot_ACT'
// 1785:      UNK_0xebf9  codep:0x224c parp:0xebf9 size:0x0012 C-string:'UNK_0xebf9'
// 1786:      UNK_0xec0d  codep:0x224c parp:0xec0d size:0x001c C-string:'UNK_0xec0d'
// 1787:      UNK_0xec2b  codep:0x224c parp:0xec2b size:0x0014 C-string:'UNK_0xec2b'
// 1788:      UNK_0xec41  codep:0x224c parp:0xec41 size:0x000e C-string:'UNK_0xec41'
// 1789:      UNK_0xec51  codep:0x224c parp:0xec51 size:0x0014 C-string:'UNK_0xec51'
// 1790:      UNK_0xec67  codep:0x224c parp:0xec67 size:0x0006 C-string:'UNK_0xec67'
// 1791:      UNK_0xec6f  codep:0x224c parp:0xec6f size:0x0006 C-string:'UNK_0xec6f'
// 1792:          PA.ACT  codep:0x4a4f parp:0xec80 size:0x000c C-string:'PA_dot_ACT'
// 1793:          TA.ACT  codep:0x4a4f parp:0xec97 size:0x000c C-string:'TA_dot_ACT'
// 1794:      UNK_0xeca5  codep:0x224c parp:0xeca5 size:0x0012 C-string:'UNK_0xeca5'
// 1795:      UNK_0xecb9  codep:0x224c parp:0xecb9 size:0x0018 C-string:'UNK_0xecb9'
// 1796:      UNK_0xecd3  codep:0x224c parp:0xecd3 size:0x0036 C-string:'UNK_0xecd3'
// 1797:      UNK_0xed0b  codep:0x224c parp:0xed0b size:0x0018 C-string:'UNK_0xed0b'
// 1798:          PM.ACT  codep:0x4a4f parp:0xed2e size:0x000c C-string:'PM_dot_ACT'
// 1799:          TM.ACT  codep:0x4a4f parp:0xed45 size:0x000c C-string:'TM_dot_ACT'
// 1800:      UNK_0xed53  codep:0x224c parp:0xed53 size:0x0012 C-string:'UNK_0xed53'
// 1801:      UNK_0xed67  codep:0x224c parp:0xed67 size:0x0026 C-string:'UNK_0xed67'
// 1802:          PL.ACT  codep:0x4a4f parp:0xed98 size:0x0010 C-string:'PL_dot_ACT'
// 1803:      UNK_0xedaa  codep:0x224c parp:0xedaa size:0x0014 C-string:'UNK_0xedaa'
// 1804:          DO.BIO  codep:0x4a4f parp:0xedc9 size:0x000c C-string:'DO_dot_BIO'
// 1805:        DISPATCH  codep:0x4a4f parp:0xede2 size:0x001c C-string:'DISPATCH'
// 1806:      UNK_0xee00  codep:0x224c parp:0xee00 size:0x003c C-string:'UNK_0xee00'
// 1807:      UNK_0xee3e  codep:0x224c parp:0xee3e size:0x0053 C-string:'UNK_0xee3e'
// 1808:      UNK_0xee93  codep:0x1d29 parp:0xee93 size:0x0003 C-string:'UNK_0xee93'
// 1809:      UNK_0xee98  codep:0x224c parp:0xee98 size:0x0018 C-string:'UNK_0xee98'
// 1810:      UNK_0xeeb2  codep:0x224c parp:0xeeb2 size:0x0010 C-string:'UNK_0xeeb2'
// 1811:      UNK_0xeec4  codep:0x224c parp:0xeec4 size:0x000e C-string:'UNK_0xeec4'
// 1812:      UNK_0xeed4  codep:0x224c parp:0xeed4 size:0x000e C-string:'UNK_0xeed4'
// 1813:      UNK_0xeee4  codep:0x224c parp:0xeee4 size:0x0026 C-string:'UNK_0xeee4'
// 1814:      UNK_0xef0c  codep:0x224c parp:0xef0c size:0x0012 C-string:'UNK_0xef0c'
// 1815:      UNK_0xef20  codep:0x224c parp:0xef20 size:0x0010 C-string:'UNK_0xef20'
// 1816:      UNK_0xef32  codep:0x224c parp:0xef32 size:0x002e C-string:'UNK_0xef32'
// 1817:      UNK_0xef62  codep:0x224c parp:0xef62 size:0x002a C-string:'UNK_0xef62'
// 1818:      UNK_0xef8e  codep:0x224c parp:0xef8e size:0x0016 C-string:'UNK_0xef8e'
// 1819:      UNK_0xefa6  codep:0x224c parp:0xefa6 size:0x002c C-string:'UNK_0xefa6'
// 1820:      UNK_0xefd4  codep:0x224c parp:0xefd4 size:0x002c C-string:'UNK_0xefd4'
// 1821:      UNK_0xf002  codep:0x224c parp:0xf002 size:0x0024 C-string:'UNK_0xf002'
// 1822:      UNK_0xf028  codep:0x224c parp:0xf028 size:0x007e C-string:'UNK_0xf028'
// 1823:      UNK_0xf0a8  codep:0x224c parp:0xf0a8 size:0x0034 C-string:'UNK_0xf0a8'
// 1824:      UNK_0xf0de  codep:0x224c parp:0xf0de size:0x0028 C-string:'UNK_0xf0de'
// 1825:      UNK_0xf108  codep:0x224c parp:0xf108 size:0x002a C-string:'UNK_0xf108'
// 1826:      UNK_0xf134  codep:0x224c parp:0xf134 size:0x0040 C-string:'UNK_0xf134'
// 1827:      UNK_0xf176  codep:0x224c parp:0xf176 size:0x0024 C-string:'UNK_0xf176'
// 1828:      UNK_0xf19c  codep:0x224c parp:0xf19c size:0x0036 C-string:'UNK_0xf19c'
// 1829:      UNK_0xf1d4  codep:0x224c parp:0xf1d4 size:0x0032 C-string:'UNK_0xf1d4'
// 1830:       TD-SCROLL  codep:0x4a4f parp:0xf214 size:0x000c C-string:'TD_dash_SCROLL'
// 1831:      UNK_0xf222  codep:0x224c parp:0xf222 size:0x002e C-string:'UNK_0xf222'
// 1832:      UNK_0xf252  codep:0x224c parp:0xf252 size:0x0048 C-string:'UNK_0xf252'
// 1833:      UNK_0xf29c  codep:0x224c parp:0xf29c size:0x0050 C-string:'UNK_0xf29c'
// 1834:      UNK_0xf2ee  codep:0x224c parp:0xf2ee size:0x002c C-string:'UNK_0xf2ee'
// 1835:      UNK_0xf31c  codep:0x224c parp:0xf31c size:0x002a C-string:'UNK_0xf31c'
// 1836:      UNK_0xf348  codep:0x224c parp:0xf348 size:0x0020 C-string:'UNK_0xf348'
// 1837:      UNK_0xf36a  codep:0x224c parp:0xf36a size:0x006a C-string:'UNK_0xf36a'
// 1838:      UNK_0xf3d6  codep:0x224c parp:0xf3d6 size:0x0020 C-string:'UNK_0xf3d6'
// 1839:      UNK_0xf3f8  codep:0x224c parp:0xf3f8 size:0x0018 C-string:'UNK_0xf3f8'
// 1840:      UNK_0xf412  codep:0x224c parp:0xf412 size:0x0026 C-string:'UNK_0xf412'
// 1841:      UNK_0xf43a  codep:0x224c parp:0xf43a size:0x0008 C-string:'UNK_0xf43a'
// 1842:         >DEBRIS  codep:0x224c parp:0xf44e size:0x0008 C-string:'_gt_DEBRIS'
// 1843:      UNK_0xf458  codep:0x224c parp:0xf458 size:0x0026 C-string:'UNK_0xf458'
// 1844:      UNK_0xf480  codep:0x224c parp:0xf480 size:0x000e C-string:'UNK_0xf480'
// 1845:        (/ITEMS)  codep:0x224c parp:0xf49b size:0x0000 C-string:'_ro__slash_ITEMS_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xddf6[2] = {0x3a, 0x20}; // UNK_0xddf6
unsigned char UNK_0xddfa[205] = {0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x3c, 0x3b, 0xe9, 0x97, 0xdd, 0xc5, 0x50, 0x52, 0x4f, 0x42, 0xd3, 0xa0, 0x3c, 0x49, 0xe9, 0xdc, 0xdd, 0x86, 0x25, 0x54, 0x4f, 0x54, 0x41, 0xcc, 0x29, 0x1d, 0x64, 0x00, 0x0c, 0xde, 0x87, 0x25, 0x52, 0x45, 0x4d, 0x41, 0x49, 0xce, 0x4c, 0x22, 0x5d, 0x17, 0x64, 0x00, 0x1f, 0x31, 0x36, 0x32, 0x38, 0x0f, 0x90, 0x16, 0x01, 0xde, 0x84, 0x4d, 0x41, 0x52, 0xcb, 0x4c, 0x22, 0x3d, 0x23, 0xed, 0x23, 0x3b, 0xe9, 0xb8, 0x15, 0x50, 0x0e, 0x38, 0x0c, 0x3e, 0x13, 0x89, 0x12, 0xfa, 0x15, 0x06, 0x00, 0x50, 0x0e, 0x4a, 0x17, 0x8b, 0x3b, 0x5c, 0x15, 0xec, 0xff, 0xed, 0x22, 0x7f, 0x0e, 0x7b, 0x3b, 0x72, 0x0f, 0x76, 0x6d, 0x9f, 0x6d, 0x20, 0x0f, 0x1f, 0xde, 0x76, 0x6d, 0x90, 0x16, 0xf4, 0xdd, 0x82, 0x25, 0xac, 0x4c, 0x22, 0x1f, 0xde, 0x7f, 0x0e, 0x7f, 0x0e, 0xae, 0x0b, 0x72, 0x0f, 0xaf, 0x21, 0x83, 0x6d, 0xfc, 0xe2, 0x90, 0x16, 0x18, 0xde, 0x82, 0x30, 0xd0, 0x4c, 0x22, 0x20, 0x0f, 0x7b, 0xde, 0x90, 0x16, 0x25, 0xde, 0x84, 0x21, 0x43, 0x53, 0xd0, 0x4c, 0x22, 0x12, 0x0f, 0xb4, 0x05, 0x76, 0x6d, 0x90, 0x16, 0x91, 0xde, 0xc5, 0x45, 0x43, 0x41, 0x53, 0xc5, 0x4c, 0x22, 0xd9, 0x1f, 0xb4, 0x05, 0xae, 0x0b, 0xa3, 0xde, 0x7b, 0x3b, 0x90, 0x16, 0x3d, 0xde, 0xc3, 0x45}; // UNK_0xddfa
unsigned char UNK_0xdec9[2] = {0x3a, 0x20}; // UNK_0xdec9
unsigned char UNK_0xe1cb[6] = {0x00, 0x00, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xe1cb
unsigned char UNK_0xeaba[4] = {0x56, 0x3a, 0x20, 0x78}; // UNK_0xeaba
unsigned char UNK_0xebcb[2] = {0x3a, 0x20}; // UNK_0xebcb
unsigned char UNK_0xee93[3] = {0x3a, 0x20, 0x05}; // UNK_0xee93



// 0xddf2: db 0x77 0x01 'w '

// ================================================
// 0xddf4: WORD 'UNK_0xddf6' codep=0x1d29 parp=0xddf6
// ================================================
// 0xddf6: db 0x3a 0x20 ': '

// ================================================
// 0xddf8: WORD 'UNK_0xddfa' codep=0x1d29 parp=0xddfa
// ================================================
// 0xddfa: db 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x3c 0x3b 0xe9 0x97 0xdd 0xc5 0x50 0x52 0x4f 0x42 0xd3 0xa0 0x3c 0x49 0xe9 0xdc 0xdd 0x86 0x25 0x54 0x4f 0x54 0x41 0xcc 0x29 0x1d 0x64 0x00 0x0c 0xde 0x87 0x25 0x52 0x45 0x4d 0x41 0x49 0xce 0x4c 0x22 0x5d 0x17 0x64 0x00 0x1f 0x31 0x36 0x32 0x38 0x0f 0x90 0x16 0x01 0xde 0x84 0x4d 0x41 0x52 0xcb 0x4c 0x22 0x3d 0x23 0xed 0x23 0x3b 0xe9 0xb8 0x15 0x50 0x0e 0x38 0x0c 0x3e 0x13 0x89 0x12 0xfa 0x15 0x06 0x00 0x50 0x0e 0x4a 0x17 0x8b 0x3b 0x5c 0x15 0xec 0xff 0xed 0x22 0x7f 0x0e 0x7b 0x3b 0x72 0x0f 0x76 0x6d 0x9f 0x6d 0x20 0x0f 0x1f 0xde 0x76 0x6d 0x90 0x16 0xf4 0xdd 0x82 0x25 0xac 0x4c 0x22 0x1f 0xde 0x7f 0x0e 0x7f 0x0e 0xae 0x0b 0x72 0x0f 0xaf 0x21 0x83 0x6d 0xfc 0xe2 0x90 0x16 0x18 0xde 0x82 0x30 0xd0 0x4c 0x22 0x20 0x0f 0x7b 0xde 0x90 0x16 0x25 0xde 0x84 0x21 0x43 0x53 0xd0 0x4c 0x22 0x12 0x0f 0xb4 0x05 0x76 0x6d 0x90 0x16 0x91 0xde 0xc5 0x45 0x43 0x41 0x53 0xc5 0x4c 0x22 0xd9 0x1f 0xb4 0x05 0xae 0x0b 0xa3 0xde 0x7b 0x3b 0x90 0x16 0x3d 0xde 0xc3 0x45 ': ) :  ALLOT <;    PROB  <I    %TOTA ) d    %REMAI L"] d  1628      MAR L"=# #;   P 8 >       P J  ;\    " {;r vm m    vm     % L"      r  ! m       0 L"  {   %  !CS L"    vm     ECAS L"        {;  =  E'

// ================================================
// 0xdec7: WORD 'UNK_0xdec9' codep=0x1d29 parp=0xdec9
// ================================================
// 0xdec9: db 0x3a 0x20 ': '

// ================================================
// 0xdecb: WORD 'UNK_0xdecd' codep=0x224c parp=0xdecd
// ================================================

void UNK_0xdecd() // UNK_0xdecd
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  Push(cc__3); // 3
  R_gt_(); // R>
  POS_dot_(); // POS.
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  Push(cc__7); // 7
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
  Push(1); // 1
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  _ex_CRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
}


// ================================================
// 0xdeff: WORD 'UNK_0xdf01' codep=0x224c parp=0xdf01
// ================================================

void UNK_0xdf01() // UNK_0xdf01
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  UNK_0xdecd(); // UNK_0xdecd
}


// ================================================
// 0xdf09: WORD 'UNK_0xdf0b' codep=0x224c parp=0xdf0b
// ================================================

void UNK_0xdf0b() // UNK_0xdf0b
{
  _ask_NEW_dash_HO(); // ?NEW-HO
  if (Pop() == 0) goto label1;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UPDATE); // LAST-UPDATE
  D_ex_(); // D!
  Push(1); // 1
  Push(pp_STAR_dash_HR); // STAR-HR
  _plus__ex_(); // +!
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0018);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(pp_STAR_dash_HR); // STAR-HR
  OFF(); // OFF
  Push(1); // 1
  Push(pp_STARDATE); // STARDATE
  _plus__ex_(); // +!

  label1:
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp__ro_FLARE_rc_); // (FLARE)
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(pp__ask_WIN); // ?WIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__i_FLARE); // 'FLARE
  _at_EXECUTE(); // @EXECUTE
}


// ================================================
// 0xdf53: WORD 'UNK_0xdf55' codep=0x224c parp=0xdf55
// ================================================

void UNK_0xdf55() // UNK_0xdf55
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
  _dash_(); // -
  POS_dot_(); // POS.
}

// 0xdf73: db 0x14 0x22 0x2e 0x00 0x4c 0x22 0x5d 0x17 0x75 0xdf 0x76 0x6d 0x5d 0x17 0x75 0xdf 0xc1 0x21 0x5d 0x17 0x90 0x27 0x5d 0x17 0x0e 0x00 0x72 0x0f 0x76 0x6d 0x8e 0x27 0x5d 0x17 0x9a 0x09 0xc1 0x21 0x5d 0x17 0x90 0x27 0x5d 0x17 0x0e 0x00 0x72 0x0f 0x76 0x6d 0x90 0x16 0x4c 0x22 0xfc 0xdd 0x65 0x5d 0xfd 0x4b 0x58 0x5d 0xae 0x0b 0x20 0x0f 0xb8 0x15 0x65 0x5d 0xae 0x0b 0x22 0xa4 0x22 0x51 0xe7 0x0f 0x65 0x5d 0x11 0x4c 0xd0 0x15 0xf0 0xff 0x58 0x5d 0xae 0x0b 0xf8 0xdd 0x11 0x4c 0x90 0x16 0x14 0x22 0x20 0x00 0x14 0x22 0x44 0x00 0x14 0x22 0x1c 0x00 0x14 0x22 0x39 0x00 ' ". L"] u vm] u  !]  ']   r vm ']    !]  ']   r vm  L"  e] KX]      e]  " "Q  e] L    X]     L   "   "D  "   "9 '

// ================================================
// 0xdfe3: WORD 'UNK_0xdfe5' codep=0x73ea parp=0xdfe5
// ================================================
// 0xdfe5: db 0x44 0x33 0x01 0x9c 0xd8 0x69 'D3   i'

// ================================================
// 0xdfeb: WORD 'UNK_0xdfed' codep=0x744d parp=0xdfed
// ================================================
// 0xdfed: db 0x44 0x12 0x01 'D  '

// ================================================
// 0xdff0: WORD 'UNK_0xdff2' codep=0x744d parp=0xdff2
// ================================================
// 0xdff2: db 0x0b 0x11 0x02 0xea 0x73 0x44 0x3a 0x02 0x9c 0xd8 0x69 '    sD:   i'

// ================================================
// 0xdffd: WORD 'UNK_0xdfff' codep=0x744d parp=0xdfff
// ================================================
// 0xdfff: db 0x44 0x11 0x01 'D  '

// ================================================
// 0xe002: WORD 'UNK_0xe004' codep=0x744d parp=0xe004
// ================================================
// 0xe004: db 0x44 0x1b 0x01 'D  '

// ================================================
// 0xe007: WORD 'UNK_0xe009' codep=0x73ea parp=0xe009
// ================================================
// 0xe009: db 0x44 0x9a 0x01 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xe00f: WORD 'UNK_0xe011' codep=0x744d parp=0xe011
// ================================================
// 0xe011: db 0x00 0x15 0x01 '   '

// ================================================
// 0xe014: WORD 'UNK_0xe016' codep=0x744d parp=0xe016
// ================================================
// 0xe016: db 0x00 0x16 0x01 '   '

// ================================================
// 0xe019: WORD 'UNK_0xe01b' codep=0x744d parp=0xe01b
// ================================================
// 0xe01b: db 0x00 0x17 0x01 0x4c 0x22 0xd7 0xdf 0x41 0x0e 0x8d 0x54 0x76 0x6d 0x9b 0x54 0xae 0x0b 0x99 0x73 0x32 0x0e 0x90 0x16 '   L"  A  Tvm T   s2   '

// ================================================
// 0xe032: WORD 'UNK_0xe034' codep=0x224c parp=0xe034
// ================================================

void UNK_0xe034() // UNK_0xe034
{
  Push(0xec78);
  Push(Read16(sp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe042: WORD 'UNK_0xe044' codep=0x224c parp=0xe044
// ================================================

void UNK_0xe044() // UNK_0xe044
{
  Push(0x0040);
  Push(cc__3); // 3
  Push(cc__7); // 7
  Push(0x0026);
  WINDOW(); // WINDOW
  Push(cc__dash_1); // -1
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe05c: WORD 'UNK_0xe05e' codep=0x224c parp=0xe05e
// ================================================

void UNK_0xe05e() // UNK_0xe05e
{
  UNK_0xe044(); // UNK_0xe044
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(cc__dash_1); // -1
  Push(pp_WLINES); // WLINES
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe070: WORD 'UNK_0xe072' codep=0x224c parp=0xe072
// ================================================

void UNK_0xe072() // UNK_0xe072
{
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xe082: WORD 'UNK_0xe084' codep=0x224c parp=0xe084
// ================================================

void UNK_0xe084() // UNK_0xe084
{
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("PRESS KEY TO CONTINUE ", 22); // (.")
}


// ================================================
// 0xe0b3: WORD 'UNK_0xe0b5' codep=0x224c parp=0xe0b5
// ================================================

void UNK_0xe0b5() // UNK_0xe0b5
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  SetColor("BLACK");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0); // 0
  Push(0); // 0
  UNK_0xdf55(); // UNK_0xdf55
  _ex_COLOR(); // !COLOR
}

// 0xe0db: db 0x4c 0x22 0x5d 0x17 0x01 0x20 0xdb 0x23 0x76 0x6d 0xf8 0xdd 0xae 0x0b 0xf6 0x5b 0xae 0x0b 0x7f 0x0e 0x92 0x0f 0x72 0x0f 0x20 0x0f 0xb8 0x15 0xdb 0x23 0x22 0xa4 0xd0 0x15 0xfa 0xff 0xf8 0xdd 0xc5 0x6d 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x5f 0x12 0xb4 0x0d 0x2d 0x12 0x90 0x0e 0x3e 0x13 0x90 0x16 0x4c 0x22 0x65 0x5d 0xae 0x0b 0xfc 0xdd 0x92 0x0f 0x22 0x51 0xe7 0x0f 0x4c 0x0f 0x22 0x51 0xe7 0x0f 0xb3 0x0f 0xfc 0xdd 0x72 0x0f 0x41 0x0e 0x92 0x0c 0x73 0x3b 0xae 0x3f 0x72 0x0f 0x22 0x51 0x05 0xe1 0xfa 0x15 0x1e 0x00 0x22 0x51 0xe7 0x0f 0x72 0x0f 0x41 0x0e 0x20 0x0f 0xf2 0x0e 0xf5 0x4b 0x41 0x0e 0xe7 0x0f 0x65 0x5d 0xfd 0x4b 0x2e 0x0f 0x58 0x5d 0x11 0x4c 0x41 0x0e 0x92 0x0c 0x73 0x3b 0xae 0x3f 0x72 0x0f 0xf2 0x0e 0xf5 0x4b 0x41 0x0e 0xb4 0x0d 0x65 0x5d 0xae 0x0b 0xf2 0x0e 0xea 0x6d 0x90 0x0e 0x65 0x5d 0x11 0x4c 0x90 0x16 'L"]    #vm     [     r      #"        m  L"  _   -   >   L"e]      "Q  L "Q      r A   s; ?r "Q      "Q  r A      KA   e] K. X] LA   s; ?r    KA   e]     m  e] L  '

// ================================================
// 0xe17f: WORD 'UNK_0xe181' codep=0x224c parp=0xe181
// ================================================

void UNK_0xe181() // UNK_0xe181
{
  PRINT("PICKUP", 6); // (.")
}


// ================================================
// 0xe18c: WORD 'UNK_0xe18e' codep=0x224c parp=0xe18e
// ================================================

void UNK_0xe18e() // UNK_0xe18e
{
  PRINT("DROP", 4); // (.")
}


// ================================================
// 0xe197: WORD 'UNK_0xe199' codep=0x224c parp=0xe199
// ================================================

void UNK_0xe199() // UNK_0xe199
{
  PRINT("DESCRIBE", 8); // (.")
}


// ================================================
// 0xe1a6: WORD 'UNK_0xe1a8' codep=0x224c parp=0xe1a8
// ================================================

void UNK_0xe1a8() // UNK_0xe1a8
{
  PRINT("ERASE", 5); // (.")
}


// ================================================
// 0xe1b2: WORD 'UNK_0xe1b4' codep=0x224c parp=0xe1b4
// ================================================

void UNK_0xe1b4() // UNK_0xe1b4
{
  PRINT("RECORD", 6); // (.")
}


// ================================================
// 0xe1bf: WORD 'UNK_0xe1c1' codep=0x224c parp=0xe1c1
// ================================================

void UNK_0xe1c1() // UNK_0xe1c1
{
  Push(0); // 0
  SWAP(); // SWAP
  UNK_0xdf55(); // UNK_0xdf55
}


// ================================================
// 0xe1c9: WORD 'UNK_0xe1cb' codep=0x1d29 parp=0xe1cb
// ================================================
// 0xe1cb: db 0x00 0x00 0x29 0x1d 0x3a 0x20 '  ) : '

// ================================================
// 0xe1d1: WORD 'UNK_0xe1d3' codep=0x224c parp=0xe1d3
// ================================================

void UNK_0xe1d3() // UNK_0xe1d3
{
  Push(pp_UNK_0xe1cb); // UNK_0xe1cb
  _ex_(); // !
}


// ================================================
// 0xe1d9: WORD 'UNK_0xe1db' codep=0x224c parp=0xe1db
// ================================================

void UNK_0xe1db() // UNK_0xe1db
{
  Push(1); // 1
  Push(Read16(sp)); // DUP
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe18e(); // UNK_0xe18e
  UNK_0xe1d3(); // UNK_0xe1d3
}


// ================================================
// 0xe1e7: WORD 'UNK_0xe1e9' codep=0x224c parp=0xe1e9
// ================================================

void UNK_0xe1e9() // UNK_0xe1e9
{
  Push(1); // 1
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe18e(); // UNK_0xe18e
  Push(2); // 2
  Push(Read16(sp)); // DUP
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe199(); // UNK_0xe199
  UNK_0xe1d3(); // UNK_0xe1d3
}


// ================================================
// 0xe1fb: WORD 'UNK_0xe1fd' codep=0x224c parp=0xe1fd
// ================================================

void UNK_0xe1fd() // UNK_0xe1fd
{
  Push(1); // 1
  UNK_0xe1c1(); // UNK_0xe1c1
  PRINT("READ", 4); // (.")
  Push(2); // 2
  Push(Read16(sp)); // DUP
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe1a8(); // UNK_0xe1a8
  UNK_0xe1d3(); // UNK_0xe1d3
}


// ================================================
// 0xe214: WORD 'UNK_0xe216' codep=0x224c parp=0xe216
// ================================================

void UNK_0xe216() // UNK_0xe216
{
  Push(1); // 1
  Push(Read16(sp)); // DUP
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe199(); // UNK_0xe199
  UNK_0xe1d3(); // UNK_0xe1d3
}


// ================================================
// 0xe222: WORD 'UNK_0xe224' codep=0x224c parp=0xe224
// ================================================

void UNK_0xe224() // UNK_0xe224
{
  Push(1); // 1
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe18e(); // UNK_0xe18e
  Push(2); // 2
  Push(Read16(sp)); // DUP
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe199(); // UNK_0xe199
  UNK_0xe1d3(); // UNK_0xe1d3
}


// ================================================
// 0xe236: WORD 'UNK_0xe238' codep=0x224c parp=0xe238
// ================================================

void UNK_0xe238() // UNK_0xe238
{
  Push(1); // 1
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe199(); // UNK_0xe199
  Push(2); // 2
  Push(Read16(sp)); // DUP
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe1a8(); // UNK_0xe1a8
  UNK_0xe1d3(); // UNK_0xe1d3
}


// ================================================
// 0xe24a: WORD 'T.OPTIONS' codep=0x4a4f parp=0xe258
// ================================================
// 0xe258: db 0x08 0x00 0x48 0x3a 0x1a 0x00 0xdb 0xe1 0x1c 0x00 0xe9 0xe1 0x1b 0x00 0xfd 0xe1 0x1e 0x00 0x16 0xe2 0x44 0x00 0x16 0xe2 0x28 0x00 0x24 0xe2 0x2b 0x00 0x38 0xe2 0x0b 0x00 0x92 0x16 '  H:                D   ( $ + 8     '

// ================================================
// 0xe27c: WORD 'UNK_0xe27e' codep=0x224c parp=0xe27e
// ================================================

void UNK_0xe27e() // UNK_0xe27e
{
  Push(1); // 1
  Push(Read16(sp)); // DUP
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe181(); // UNK_0xe181
  UNK_0xe1d3(); // UNK_0xe1d3
}


// ================================================
// 0xe28a: WORD 'UNK_0xe28c' codep=0x224c parp=0xe28c
// ================================================

void UNK_0xe28c() // UNK_0xe28c
{
  Push(1); // 1
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe181(); // UNK_0xe181
  Push(2); // 2
  Push(Read16(sp)); // DUP
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe199(); // UNK_0xe199
  UNK_0xe1d3(); // UNK_0xe1d3
}


// ================================================
// 0xe29e: WORD 'UNK_0xe2a0' codep=0x224c parp=0xe2a0
// ================================================

void UNK_0xe2a0() // UNK_0xe2a0
{
  Push(1); // 1
  UNK_0xe1c1(); // UNK_0xe1c1
  PRINT("READ", 4); // (.")
  Push(2); // 2
  Push(Read16(sp)); // DUP
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe1b4(); // UNK_0xe1b4
  UNK_0xe1d3(); // UNK_0xe1d3
}


// ================================================
// 0xe2b7: WORD 'UNK_0xe2b9' codep=0x224c parp=0xe2b9
// ================================================

void UNK_0xe2b9() // UNK_0xe2b9
{
  Func8("UNK_0xdfff");
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(1); // 1
  UNK_0xe1c1(); // UNK_0xe1c1
  PRINT("CAPTURE", 7); // (.")
  goto label2;

  label1:
  Push(1); // 1
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe181(); // UNK_0xe181

  label2:
  Push(2); // 2
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe1b4(); // UNK_0xe1b4
  PRINT(" BIO-DATA", 9); // (.")
  Push(cc__3); // 3
  Push(Read16(sp)); // DUP
  UNK_0xe1c1(); // UNK_0xe1c1
  UNK_0xe199(); // UNK_0xe199
  UNK_0xe1d3(); // UNK_0xe1d3
}

// 0xe2f7: db 0x4c 0x22 0x2e 0x0f 0x41 0x0e 0xbf 0xe1 0x7f 0xe1 0xd1 0xe1 0x90 0x16 'L". A        '

// ================================================
// 0xe305: WORD 'UNK_0xe307' codep=0x224c parp=0xe307
// ================================================

void UNK_0xe307() // UNK_0xe307
{
  UNK_0xe05e(); // UNK_0xe05e
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(0); // 0
  Push(0); // 0
  UNK_0xdf55(); // UNK_0xdf55
  GCR(); // GCR
}


// ================================================
// 0xe315: WORD 'P.OPTIONS' codep=0x4a4f parp=0xe323
// ================================================
// 0xe323: db 0x06 0x00 0x48 0x3a 0x1a 0x00 0x7e 0xe2 0x1c 0x00 0x8c 0xe2 0x1b 0x00 0xa0 0xe2 0x1e 0x00 0xb9 0xe2 0x44 0x00 0xb9 0xe2 0x28 0x00 0xf9 0xe2 '  H:  ~             D   (   '

// ================================================
// 0xe33f: WORD 'UNK_0xe341' codep=0x224c parp=0xe341
// ================================================

void UNK_0xe341() // UNK_0xe341
{
  PRINT("LIFEFORM ALREADY RECORDED", 25); // (.")
  Push(0x05dc);
  MS(); // MS
  UNK_0xe307(); // UNK_0xe307
}


// ================================================
// 0xe367: WORD 'UNK_0xe369' codep=0x224c parp=0xe369
// ================================================

void UNK_0xe369() // UNK_0xe369
{
  PRINT("DUPLICATE SPECIMEN", 18); // (.")
  Push(0x05dc);
  MS(); // MS
  UNK_0xe307(); // UNK_0xe307
}


// ================================================
// 0xe388: WORD 'UNK_0xe38a' codep=0x224c parp=0xe38a
// ================================================

void UNK_0xe38a() // UNK_0xe38a
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Func8("UNK_0xdff2");
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe396: WORD 'UNK_0xe398' codep=0x224c parp=0xe398
// ================================================

void UNK_0xe398() // UNK_0xe398
{
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(Read16(sp)); // DUP
  Push(0x001a);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(1); // 1
  MAX(); // MAX
  goto label2;

  label1:
  Push(0x001b);
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Push(0); // 0
  goto label2;

  label3:
  Func8("INST-QTY");
  Push(Read16(Pop())); // @

  label2:
  Push(Read16(sp)); // DUP
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Func8("UNK_0xdff2");
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Func8("INST-QTY");
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  Push2Words("0.");
  UNK_0xe044(); // UNK_0xe044
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(pp_UNK_0xddf6); // UNK_0xddf6
  OFF(); // OFF
  PRINT("NOT ENOUGH ROOM IN CARGO HOLD ", 30); // (.")
  Push(0x05dc);
  MS(); // MS
  goto label5;

  label4:
  Push(1); // 1

  label5:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe41b: WORD '(EXTRACT)' codep=0x224c parp=0xe429
// ================================================

void _ro_EXTRACT_rc_() // (EXTRACT)
{
  UNK_0xe05e(); // UNK_0xe05e
  UNK_0xe0b5(); // UNK_0xe0b5
  CI(); // CI
  _2SWAP(); // 2SWAP
  _at_INST_dash_CLASS(); // @INST-CLASS
  _gt_R(); // >R
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  R_gt_(); // R>
  BOX_gt_TOC(); // BOX>TOC
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  _ro_BOX_gt__rc_(); // (BOX>)
  _ask_NULL(); // ?NULL
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE

  label1:
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xddf6); // UNK_0xddf6
  ON(); // ON
}


// ================================================
// 0xe459: WORD 'UNK_0xe45b' codep=0x224c parp=0xe45b
// ================================================

void UNK_0xe45b() // UNK_0xe45b
{
  Push(pp__ro_SURFAC); // (SURFAC
  _1_dot_5_at_(); // 1.5@
  _ro_EXTRACT_rc_(); // (EXTRACT)
}


// ================================================
// 0xe463: WORD 'UNK_0xe465' codep=0x224c parp=0xe465
// ================================================

void UNK_0xe465() // UNK_0xe465
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  _ro_EXTRACT_rc_(); // (EXTRACT)
}


// ================================================
// 0xe46d: WORD 'UNK_0xe46f' codep=0x73ea parp=0xe46f
// ================================================
// 0xe46f: db 0x44 0x0c 0x01 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xe475: WORD 'UNK_0xe477' codep=0x73ea parp=0xe477
// ================================================
// 0xe477: db 0x44 0x36 0x01 0x9c 0xd8 0x69 'D6   i'

// ================================================
// 0xe47d: WORD 'UNK_0xe47f' codep=0x73ea parp=0xe47f
// ================================================
// 0xe47f: db 0x44 0x0b 0x01 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xe485: WORD 'UNK_0xe487' codep=0x224c parp=0xe487
// ================================================

void UNK_0xe487() // UNK_0xe487
{
  LoadData("UNK_0xe46f"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(sp)); // DUP
  Push(cc__4); // 4
  MOD(); // MOD
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0x000a);
  return;

  label1:
  Push(2); // 2
  MOD(); // MOD
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  Push(0x001e);
  return;

  label2:
  Push(0x0032);
}


// ================================================
// 0xe4b9: WORD 'UNK_0xe4bb' codep=0x224c parp=0xe4bb
// ================================================

void UNK_0xe4bb() // UNK_0xe4bb
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  Func8("INST-X");
  Push(Read16(Pop())); // @
  Push(0x03e8);
  _dash_(); // -
  Push(Read16(sp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  Func8("INST-Y");
  Push(Read16(Pop())); // @
  Push(0x0320);
  _dash_(); // -
  Push(Read16(sp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(1); // 1
  MAX(); // MAX
  ICLOSE(); // ICLOSE
  Push(cc__8); // 8
  _slash_(); // /
}


// ================================================
// 0xe4ef: WORD 'UNK_0xe4f1' codep=0x224c parp=0xe4f1
// ================================================

void UNK_0xe4f1() // UNK_0xe4f1
{
  UNK_0xe487(); // UNK_0xe487
  LoadData("UNK_0xe477"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  LoadData("UNK_0xe47f"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() * Pop()); // *
  UNK_0xe4bb(); // UNK_0xe4bb
  Push(Pop()+1); // 1+
  Push(Pop() * Pop()); // *
  Func8("UNK_0xdfff");
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0x000a);
  _slash_(); // /

  label1:
  Push(1); // 1
  MAX(); // MAX
}


// ================================================
// 0xe521: WORD 'UNK_0xe523' codep=0x224c parp=0xe523
// ================================================

void UNK_0xe523() // UNK_0xe523
{
  Push(1); // 1
  LoadData("SPEC-NAME"); // from 'SPECIMEN    '
  Push(cc__3); // 3
  PICK(); // PICK
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(sp)); // DUP
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  PAD(); // PAD
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffde

  Pop(); // DROP
}


// ================================================
// 0xe557: WORD 'UNK_0xe559' codep=0x224c parp=0xe559
// ================================================

void UNK_0xe559() // UNK_0xe559
{
  Push(0); // 0
  Push(cc__5); // 5
  UNK_0xdf55(); // UNK_0xdf55
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe565: WORD 'UNK_0xe567' codep=0x224c parp=0xe567
// ================================================

void UNK_0xe567() // UNK_0xe567
{
  LoadData("RESEMBLES"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  LoadData("SHAPE"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@

  label1:
  _gt_C_plus_S(); // >C+S
  Func8("PHRASE-MEM");
  PAD(); // PAD
  Func8("PHR-CNT");
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(sp)); // DUP
  _gt_R(); // >R
  CMOVE(); // CMOVE
  R_gt_(); // R>
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe591: WORD 'UNK_0xe593' codep=0x224c parp=0xe593
// ================================================

void UNK_0xe593() // UNK_0xe593
{
  UNK_0xe567(); // UNK_0xe567
  Push(0x0028);
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  Push(0x0040);
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  UNK_0xe523(); // UNK_0xe523
  if (Pop() == 0) goto label1;
  Push(i); // I
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffee

  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xe5bf: WORD 'UNK_0xe5c1' codep=0x224c parp=0xe5c1
// ================================================

void UNK_0xe5c1() // UNK_0xe5c1
{
  Push(pp_TVEHICLE); // TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  Func8("INST-X");
  Push(Read16(Pop())); // @
  Func8("INST-Y");
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5d1: WORD 'UNK_0xe5d3' codep=0x224c parp=0xe5d3
// ================================================

void UNK_0xe5d3() // UNK_0xe5d3
{
  Func8("INST-Y");
  _ex_(); // !
  Func8("INST-X");
  _ex_(); // !
}


// ================================================
// 0xe5dd: WORD 'UNK_0xe5df' codep=0x224c parp=0xe5df
// ================================================

void UNK_0xe5df() // UNK_0xe5df
{
  Push(0x0074);
  Push(0x009d);
  POS_dot_(); // POS.
  Push(cc__3); // 3
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Func8("UNK_0xdff2");
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  MAX(); // MAX
  Push(cc__5); // 5
  _slash_(); // /

  label1:
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__3); // 3
  _dot_R(); // .R
  PRINT("% FULL", 6); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe61a: WORD 'UNK_0xe61c' codep=0x224c parp=0xe61c
// ================================================

void UNK_0xe61c() // UNK_0xe61c
{
  UNK_0xe4f1(); // UNK_0xe4f1
  UNK_0xe593(); // UNK_0xe593
  UNK_0xe398(); // UNK_0xe398
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label1;
  UNK_0xe45b(); // UNK_0xe45b
  goto label2;

  label1:
  Push2Words("0.");

  label2:
  _gt_C_plus_S(); // >C+S
  SWAP(); // SWAP
}


// ================================================
// 0xe636: WORD 'UNK_0xe638' codep=0x224c parp=0xe638
// ================================================

void UNK_0xe638() // UNK_0xe638
{
  Func8("UNK_0xe004");
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  Func8("UNK_0xdfff");
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Func8("UNK_0xdfed");
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xdfe5"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(0x000a);
  _st_(); // <
  return;

  label1:
  Push(1); // 1
}


// ================================================
// 0xe670: WORD 'UNK_0xe672' codep=0x224c parp=0xe672
// ================================================

void UNK_0xe672() // UNK_0xe672
{
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _slash_(); // /
}


// ================================================
// 0xe67a: WORD 'UNK_0xe67c' codep=0x224c parp=0xe67c
// ================================================

void UNK_0xe67c() // UNK_0xe67c
{
  Func8("INST-VAL");
  _ex_(); // !
  UNK_0xe5c1(); // UNK_0xe5c1
  UNK_0xe5d3(); // UNK_0xe5d3
  Func8("INST-QTY");
  OFF(); // OFF
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Func8("INST-DATE");
  _ex_(); // !
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  Func8("INST-X");
  UNK_0xe672(); // UNK_0xe672
  Func8("INST-Y");
  UNK_0xe672(); // UNK_0xe672
  ICLOSE(); // ICLOSE
  Func8("UNK_0xe016");
  C_ex_(); // C!
  Func8("UNK_0xe011");
  C_ex_(); // C!
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  Func8("INST-QTY");
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Func8("UNK_0xe01b");
  C_ex_(); // C!
}


// ================================================
// 0xe6b6: WORD 'UNK_0xe6b8' codep=0x224c parp=0xe6b8
// ================================================

void UNK_0xe6b8() // UNK_0xe6b8
{
  UNK_0xe307(); // UNK_0xe307
  Push(pp_UNK_0xddf6); // UNK_0xddf6
  ON(); // ON
  UNK_0xe4f1(); // UNK_0xe4f1
  LoadData("UNK_0xe009"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0); // 0
  UNK_0xe341(); // UNK_0xe341
  Push(pp_UNK_0xddf6); // UNK_0xddf6
  OFF(); // OFF
  goto label2;

  label1:
  Push(0x000f);
  LoadData("UNK_0xe009"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  LoadData("UNK_0xe009"); // from 'CREATURE    '
  C_ex_(); // C!

  label2:
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x0008);
  _slash_(); // /
  Push(0x002b);
  UNK_0xe593(); // UNK_0xe593
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  UNK_0xe67c(); // UNK_0xe67c
  C_gt_(); // C>
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  _gt_BOX(); // >BOX
  CDROP(); // CDROP
  UNK_0xe559(); // UNK_0xe559
  PRINT("LIFEFORM RECORDED ", 18); // (.")
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe72b: WORD 'UNK_0xe72d' codep=0x224c parp=0xe72d
// ================================================

void UNK_0xe72d() // UNK_0xe72d
{
  UNK_0xe559(); // UNK_0xe559
  PRINT("THE CAPTURE ATTEMPT WAS UNSUCCESSFUL ", 37); // (.")
}


// ================================================
// 0xe759: WORD 'UNK_0xe75b' codep=0x224c parp=0xe75b
// ================================================

void UNK_0xe75b() // UNK_0xe75b
{
  UNK_0xe307(); // UNK_0xe307
  UNK_0xe638(); // UNK_0xe638
  LoadData("UNK_0xe009"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0010);
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xe61c(); // UNK_0xe61c
  _gt_R(); // >R
  if (Pop() == 0) goto label2;
  _dash_ICON(); // -ICON
  UNK_0xe072(); // UNK_0xe072
  Push(0x0028);
  UNK_0xe559(); // UNK_0xe559
  PRINT("LIFEFORM CAPTURED AND PUT IN STASIS ", 36); // (.")
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  UNK_0xe67c(); // UNK_0xe67c
  R_at_(); // R@
  Func8("INST-QTY");
  _ex_(); // !
  C_gt_(); // C>
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  Push(0x00f0);
  LoadData("UNK_0xe009"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  LoadData("UNK_0xe009"); // from 'CREATURE    '
  C_ex_(); // C!
  CI(); // CI
  ICLOSE(); // ICLOSE
  _gt_INACTIVE(); // >INACTIVE
  goto label3;

  label2:
  Pop(); Pop();// 2DROP
  ICLOSE(); // ICLOSE

  label3:
  R_gt_(); // R>
  UNK_0xe38a(); // UNK_0xe38a
  goto label4;

  label1:
  LoadData("UNK_0xe009"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0010);
  _gt_(); // >
  if (Pop() == 0) goto label5;
  UNK_0xe369(); // UNK_0xe369
  goto label4;

  label5:
  UNK_0xe72d(); // UNK_0xe72d

  label4:
  Push(cc__7); // 7
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe5df(); // UNK_0xe5df
  Push(0x03e8);
  MS(); // MS
}

// 0xe80c: db 0x4c 0x22 0x5d 0x17 0xe0 0x01 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x35 0x00 0xc4 0x0f 0xf2 0x0e 0x5d 0x17 0x80 0x04 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x40 0x00 0xc4 0x0f 0xf2 0x0e 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x57 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x45 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x53 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x4e 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 0x4c 0x22 0x0c 0xe8 0x41 0x0e 0x41 0x0e 0x78 0x12 0xfa 0x15 0x04 0x00 0xc6 0x11 0x20 0x0f 0xe1 0x27 0x58 0xe8 0xdc 0x1b 0x03 0x20 0x2a 0x20 0x41 0x0e 0x41 0x0e 0x78 0x12 0xfa 0x15 0x04 0x00 0xc6 0x11 0x20 0x0f 0xe1 0x27 0x34 0xe8 0x90 0x16 0x4c 0x22 0x5d 0x17 0x2c 0x01 0x60 0x0f 0x5d 0x17 0x0c 0x12 0x72 0x0f 0xf2 0x0e 0x5d 0x17 0x1e 0x00 0x60 0x0f 0xe7 0x0f 0xf2 0x0e 0xe7 0x0f 0x41 0x0e 0x5d 0x17 0x0a 0x00 0x46 0x12 0xfa 0x15 0x06 0x00 0xdc 0x1b 0x01 0x30 0x20 0x0f 0xe1 0x27 0xdc 0x1b 0x01 0x2d 0x41 0x0e 0x5d 0x17 0x0a 0x00 0x46 0x12 0xfa 0x15 0x06 0x00 0xdc 0x1b 0x01 0x30 0x20 0x0f 0xe1 0x27 0xdc 0x1b 0x01 0x2d 0x20 0x0f 0xe1 0x27 0x90 0x16 0x4c 0x22 0x6f 0x4f 0x17 0x85 0x90 0x16 0x4c 0x22 0xb6 0x4f 0x17 0x85 0x90 0x16 0x4c 0x22 0x05 0xe3 0x20 0x0f 0x20 0x0f 0x53 0xdf 0xb5 0x3b 0x6c 0x58 0x83 0x6d 0xfe 0xe8 0xdc 0x1b 0x08 0x53 0x59 0x53 0x54 0x45 0x4d 0x3a 0x20 0x06 0xe9 0x0f 0xe0 0x92 0x0c 0x73 0x3b 0xe1 0x27 0xdc 0x1b 0x01 0x2c 0x14 0xe0 0x92 0x0c 0x73 0x3b 0xe1 0x27 0x5d 0x17 0x5a 0x00 0x6c 0x58 0xfd 0x4b 0xfe 0xe8 0xdc 0x1b 0x08 0x50 0x4c 0x41 0x4e 0x45 0x54 0x3a 0x20 0x06 0xe9 0x19 0xe0 0x92 0x0c 0xb8 0x27 0x8c 0xa4 0xfe 0xe8 0xdc 0x1b 0x0a 0x4c 0x4f 0x43 0x41 0x54 0x49 0x4f 0x4e 0x3a 0x20 0x06 0xe9 0xb7 0x74 0xae 0x0b 0xc5 0x74 0xae 0x0b 0x7c 0xe8 0x5d 0x17 0x5a 0x00 0x6c 0x58 0xfd 0x4b 0xfe 0xe8 0xdc 0x1b 0x06 0x44 0x41 0x54 0x45 0x3a 0x20 0x06 0xe9 0x38 0xad 0xae 0x0b 0xac 0xe8 0x82 0xe0 0xa9 0x48 0x32 0x0e 0x90 0x16 'L"]     ]   ] 5     ]     ]   ] @       L"      x        W`      E`         L"      x        S`      N`         L"  A A x          'X     * A A x          '4   L"] , ` ]   r   ]   `       A ]   F        0   '   -A ]   F        0   '   -   '  L"oO    L" O    L"      S  ;lX m     SYSTEM:       s; '   ,    s; '] Z lX K     PLANET:        '       LOCATION:    t   t  | ] Z lX K     DATE:   8        H2   '

// ================================================
// 0xe99e: WORD 'UNK_0xe9a0' codep=0x224c parp=0xe9a0
// ================================================

void UNK_0xe9a0() // UNK_0xe9a0
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(cc__3); // 3
  _eq_(); // =
}


// ================================================
// 0xe9a8: WORD 'UNK_0xe9aa' codep=0x224c parp=0xe9aa
// ================================================

void UNK_0xe9aa() // UNK_0xe9aa
{
  UNK_0xe9a0(); // UNK_0xe9a0
  if (Pop() == 0) return;
  GCR(); // GCR
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("ARM THIS DEVICE? NO [  ] YES ", 29); // (.")
  Y_slash_N(); // Y/N
  if (Pop() == 0) goto label1;
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  Func8("INST-QTY");
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  CI(); // CI
  Push(pp__ro_BOMB_rc_); // (BOMB)
  _1_dot_5_ex_(); // 1.5!
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(pp__ask_BOMB); // ?BOMB
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe9f8: WORD 'UNK_0xe9fa' codep=0x224c parp=0xe9fa
// ================================================

void UNK_0xe9fa() // UNK_0xe9fa
{
  UNK_0xe9a0(); // UNK_0xe9a0
  Push(pp__ask_BOMB); // ?BOMB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__ask_BOMB); // ?BOMB
  OFF(); // OFF
  GCR(); // GCR
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("DISARMING DEVICE ", 17); // (.")
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xea30: WORD 'UNK_0xea32' codep=0x224c parp=0xea32
// ================================================

void UNK_0xea32() // UNK_0xea32
{
  UNK_0xe398(); // UNK_0xe398
  if (Pop() == 0) goto label1;
  UNK_0xe45b(); // UNK_0xe45b
  _gt_C_plus_S(); // >C+S
  _dash_ICON(); // -ICON
  C_gt_(); // C>
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE

  label1:
  UNK_0xe38a(); // UNK_0xe38a
  UNK_0xe5df(); // UNK_0xe5df
}

// 0xea4e: db 0x4c 0x22 0x79 0x9e 0x32 0xe0 0xda 0x7e 0xf4 0xdd 0xb7 0x6d 0x90 0x16 0x4c 0x22 0x59 0xe4 0x79 0x9e 0xde 0x0d 0xf4 0xdd 0xc5 0x6d 0x90 0x16 0x4c 0x22 0x63 0xe4 0x79 0x9e 0xde 0x0d 0x90 0x16 'L"y 2  ~   m  L"Y y      m  L"c y     '

// ================================================
// 0xea74: WORD 'UNK_0xea76' codep=0x224c parp=0xea76
// ================================================

void UNK_0xea76() // UNK_0xea76
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_CLASS(); // @INST-CLASS
  _gt_R(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(h); // I
  CLASS_gt_B(); // CLASS>B
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(h); // I
  CLASS_gt_B(); // CLASS>B
  Push(0x000b);
  SWAP(); // SWAP
  Push(1); // 1
  _star_CREATE(); // *CREATE

  label1:
  R_gt_(); // R>
  BOX_gt_TOC(); // BOX>TOC
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_CLASS(); // @INST-CLASS
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  ICLOSE(); // ICLOSE
  Pop(); Pop();// 2DROP
  CI(); // CI
  IINSERT(); // IINSERT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeab8: WORD 'UNK_0xeaba' codep=0x1d29 parp=0xeaba
// ================================================
// 0xeaba: db 0x56 0x3a 0x20 0x78 'V: x'

// ================================================
// 0xeabe: WORD 'UNK_0xeac0' codep=0x224c parp=0xeac0
// ================================================

void UNK_0xeac0() // UNK_0xeac0
{
  Push(pp_UNK_0xeaba); // UNK_0xeaba
  _2_ex_(); // 2!
  UNK_0xe5c1(); // UNK_0xe5c1
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(sp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  POINT_gt_ICON(); // POINT>ICON
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _gt_R(); // >R
  _at_INST_dash_CLASS(); // @INST-CLASS
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(pp_UNK_0xeaba); // UNK_0xeaba
  _2_at_(); // 2@
  D_eq_(); // D=
  R_gt_(); // R>
  SWAP(); // SWAP
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(1); // 1

  label2:
  ICLOSE(); // ICLOSE
  goto label3;

  label1:
  SWAP(); // SWAP
  Pop(); // DROP

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffca

}


// ================================================
// 0xeb14: WORD 'UNK_0xeb16' codep=0x224c parp=0xeb16
// ================================================

void UNK_0xeb16() // UNK_0xeb16
{
  UNK_0xe465(); // UNK_0xe465
  _gt_C_plus_S(); // >C+S
  Func8("INST-QTY");
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  UNK_0xe38a(); // UNK_0xe38a
  UNK_0xe5df(); // UNK_0xe5df
  _at_INST_dash_CLASS(); // @INST-CLASS
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  UNK_0xeac0(); // UNK_0xeac0
  UNK_0xe5c1(); // UNK_0xe5c1
  UNK_0xe5d3(); // UNK_0xe5d3
  Push(0xc437);
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  UNK_0xe034(); // UNK_0xe034
  C_gt_(); // C>
  Push(pp__ro_SURFAC); // (SURFAC
  _at__gt_C_plus_S(); // @>C+S
  ROT(); // ROT
  if (Pop() == 0) goto label1;
  _gt_BOX(); // >BOX
  goto label2;

  label1:
  UNK_0xea76(); // UNK_0xea76

  label2:
  ICLOSE(); // ICLOSE
}

// 0xeb50: db 0xea 0x73 0x1c 0x1d 0x01 0x1e 0x2c 0x65 0xea 0x73 0x1c 0x18 0x01 0x1e 0x2c 0x65 0x4c 0x22 0x83 0x3b 0x20 0x0f 0xb8 0x15 0x41 0x0e 0x50 0x0e 0x5d 0x17 0x26 0x00 0xb3 0x0f 0x72 0x0f 0x5d 0x17 0x26 0x00 0xe6 0x06 0x8c 0xa4 0xd0 0x15 0xea 0xff 0x32 0x0e 0x90 0x16 0x4c 0x22 0x5c 0xe0 0xb3 0xe0 0x50 0xeb 0x92 0x0c 0xfa 0x15 0x18 0x00 0xdf 0xdf 0x58 0xeb 0x92 0x0c 0x99 0x73 0x60 0xeb 0x8a 0x79 0x82 0xe0 0xa9 0x48 0x32 0x0e 0x60 0x16 0x21 0x00 0xdc 0x1b 0x16 0x54 0x48 0x49 0x53 0x20 0x49 0x54 0x45 0x4d 0x20 0x4e 0x4f 0x54 0x20 0x41 0x4e 0x41 0x4c 0x59 0x5a 0x45 0x44 0x5d 0x17 0xd0 0x07 0xef 0x2a 0x90 0x16 ' s    ,e s    ,eL" ;    A P ] &   r ] &         2   L"\   P         X    s`  y   H2 ` !    THIS ITEM NOT ANALYZED]    *  '

// ================================================
// 0xebc9: WORD 'UNK_0xebcb' codep=0x1d29 parp=0xebcb
// ================================================
// 0xebcb: db 0x3a 0x20 ': '

// ================================================
// 0xebcd: WORD 'TS.ACT' codep=0x4a4f parp=0xebd8
// ================================================
// 0xebd8: db 0x02 0x00 0x48 0x3a 0x01 0x00 0x16 0xeb 0x02 0x00 0x10 0xe9 '  H:        '

// ================================================
// 0xebe4: WORD 'PS.ACT' codep=0x4a4f parp=0xebef
// ================================================
// 0xebef: db 0x01 0x00 0x48 0x3a 0x01 0x00 0x32 0xea '  H:  2 '

// ================================================
// 0xebf7: WORD 'UNK_0xebf9' codep=0x224c parp=0xebf9
// ================================================

void UNK_0xebf9() // UNK_0xebf9
{
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  switch(Pop()) // TS.ACT
  {
  case 1:
    NOP(); // NOP
    break;
  case 2:
    UNK_0xeb16(); // UNK_0xeb16
    break;
  }
  return;

  label1:
  switch(Pop()) // PS.ACT
  {
  case 1:
    NOP(); // NOP
    break;
  }
}


// ================================================
// 0xec0b: WORD 'UNK_0xec0d' codep=0x224c parp=0xec0d
// ================================================

void UNK_0xec0d() // UNK_0xec0d
{
  Func8("INST-QTY");
  Push(Read16(Pop())); // @
  Push(0x01f4);
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Func8("UNK_0xdff2");
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  _dash_(); // -
  MIN(); // MIN
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec29: WORD 'UNK_0xec2b' codep=0x224c parp=0xec2b
// ================================================

void UNK_0xec2b() // UNK_0xec2b
{
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Func8("INST-QTY");
  Push(Read16(Pop())); // @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
  UNK_0xeb16(); // UNK_0xeb16
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec3f: WORD 'UNK_0xec41' codep=0x224c parp=0xec41
// ================================================

void UNK_0xec41() // UNK_0xec41
{
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  UNK_0xec0d(); // UNK_0xec0d
  UNK_0xea32(); // UNK_0xea32
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec4f: WORD 'UNK_0xec51' codep=0x224c parp=0xec51
// ================================================

void UNK_0xec51() // UNK_0xec51
{
  Pop(); // DROP
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xec2b(); // UNK_0xec2b
  return;

  label1:
  UNK_0xec41(); // UNK_0xec41
}


// ================================================
// 0xec65: WORD 'UNK_0xec67' codep=0x224c parp=0xec67
// ================================================

void UNK_0xec67() // UNK_0xec67
{
  UNK_0xe9fa(); // UNK_0xe9fa
  UNK_0xea32(); // UNK_0xea32
}


// ================================================
// 0xec6d: WORD 'UNK_0xec6f' codep=0x224c parp=0xec6f
// ================================================

void UNK_0xec6f() // UNK_0xec6f
{
  UNK_0xe9aa(); // UNK_0xe9aa
  UNK_0xeb16(); // UNK_0xeb16
}


// ================================================
// 0xec75: WORD 'PA.ACT' codep=0x4a4f parp=0xec80
// ================================================
// 0xec80: db 0x02 0x00 0x48 0x3a 0x01 0x00 0x67 0xec 0x02 0x00 0x86 0xeb '  H:  g     '

// ================================================
// 0xec8c: WORD 'TA.ACT' codep=0x4a4f parp=0xec97
// ================================================
// 0xec97: db 0x02 0x00 0x48 0x3a 0x01 0x00 0x6f 0xec 0x02 0x00 0x86 0xeb '  H:  o     '

// ================================================
// 0xeca3: WORD 'UNK_0xeca5' codep=0x224c parp=0xeca5
// ================================================

void UNK_0xeca5() // UNK_0xeca5
{
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  switch(Pop()) // TA.ACT
  {
  case 1:
    NOP(); // NOP
    break;
  case 2:
    UNK_0xec6f(); // UNK_0xec6f
    break;
  }
  return;

  label1:
  switch(Pop()) // PA.ACT
  {
  case 1:
    NOP(); // NOP
    break;
  case 2:
    UNK_0xec67(); // UNK_0xec67
    break;
  }
}


// ================================================
// 0xecb7: WORD 'UNK_0xecb9' codep=0x224c parp=0xecb9
// ================================================

void UNK_0xecb9() // UNK_0xecb9
{
  Func8("INST-SP");
  _at__gt_C_plus_S(); // @>C+S
  Func8("PHRASE-MEM");
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  ICLOSE(); // ICLOSE
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0xc216);
  MODULE(); // MODULE
}


// ================================================
// 0xecd1: WORD 'UNK_0xecd3' codep=0x224c parp=0xecd3
// ================================================

void UNK_0xecd3() // UNK_0xecd3
{
  SetColor("WHITE");
  Push(pp_CTCOLOR); // CTCOLOR
  _ex_(); // !
  UNK_0xecb9(); // UNK_0xecb9
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN

  label2:
  Push(0xc227);
  MODULE(); // MODULE
  UNK_0xe084(); // UNK_0xe084
  KEY(); // KEY
  Pop(); // DROP
  UNK_0xecb9(); // UNK_0xecb9
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE

  label1:
  Push(0xc227);
  MODULE(); // MODULE
  UNK_0xe084(); // UNK_0xe084
  KEY(); // KEY
  Pop(); // DROP
}


// ================================================
// 0xed09: WORD 'UNK_0xed0b' codep=0x224c parp=0xed0b
// ================================================

void UNK_0xed0b() // UNK_0xed0b
{
  UNK_0xdf01(); // UNK_0xdf01
  UNK_0xe05e(); // UNK_0xe05e
  UNK_0xe0b5(); // UNK_0xe0b5
  UNK_0xecd3(); // UNK_0xecd3
}

// 0xed15: db 0x4c 0x22 0x72 0x5e 0xae 0x0b 0x38 0xad 0x76 0x6d 0x30 0xea 0x90 0x16 'L"r^  8 vm0   '

// ================================================
// 0xed23: WORD 'PM.ACT' codep=0x4a4f parp=0xed2e
// ================================================
// 0xed2e: db 0x02 0x00 0x48 0x3a 0x01 0x00 0x0b 0xed 0x02 0x00 0x17 0xed '  H:        '

// ================================================
// 0xed3a: WORD 'TM.ACT' codep=0x4a4f parp=0xed45
// ================================================
// 0xed45: db 0x02 0x00 0x48 0x3a 0x01 0x00 0x0b 0xed 0x02 0x00 0x6c 0xea '  H:      l '

// ================================================
// 0xed51: WORD 'UNK_0xed53' codep=0x224c parp=0xed53
// ================================================

void UNK_0xed53() // UNK_0xed53
{
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  switch(Pop()) // TM.ACT
  {
  case 1:
    NOP(); // NOP
    break;
  case 2:
    UNK_0xed0b(); // UNK_0xed0b
    break;
  }
  return;

  label1:
  switch(Pop()) // PM.ACT
  {
  case 1:
    NOP(); // NOP
    break;
  case 2:
    UNK_0xed0b(); // UNK_0xed0b
    break;
  }
}


// ================================================
// 0xed65: WORD 'UNK_0xed67' codep=0x224c parp=0xed67
// ================================================

void UNK_0xed67() // UNK_0xed67
{
  UNK_0xdf01(); // UNK_0xdf01
  UNK_0xe05e(); // UNK_0xe05e
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(cc__5); // 5
  Push(pp_UNK_0xddfa); // UNK_0xddfa
  _st__ex__gt_(); // <!>
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0xcd8c);
  MODULE(); // MODULE

  UNK_0x3f3b(" ");
  Pop(); // DROP
  Push(Pop()-1); // 1-
  WLINE_dash_UP(); // WLINE-UP
  UNK_0xe084(); // UNK_0xe084
  KEY(); // KEY
  Pop(); // DROP
}


// ================================================
// 0xed8d: WORD 'PL.ACT' codep=0x4a4f parp=0xed98
// ================================================
// 0xed98: db 0x03 0x00 0x48 0x3a 0x01 0x00 0x5b 0xe7 0x02 0x00 0xb8 0xe6 0x03 0x00 0x67 0xed '  H:  [       g '

// ================================================
// 0xeda8: WORD 'UNK_0xedaa' codep=0x224c parp=0xedaa
// ================================================

void UNK_0xedaa() // UNK_0xedaa
{
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  UNK_0xed67(); // UNK_0xed67
  return;

  label1:
  switch(Pop()) // PL.ACT
  {
  case 1:
    NOP(); // NOP
    break;
  case 2:
    UNK_0xe75b(); // UNK_0xe75b
    break;
  case 3:
    UNK_0xe6b8(); // UNK_0xe6b8
    break;
  }
}


// ================================================
// 0xedbe: WORD 'DO.BIO' codep=0x4a4f parp=0xedc9
// ================================================
// 0xedc9: db 0x02 0x00 0x48 0x3a 0x01 0x00 0x10 0xe9 0x02 0x00 0x6c 0xea '  H:      l '

// ================================================
// 0xedd5: WORD 'DISPATCH' codep=0x4a4f parp=0xede2
// ================================================
// 0xede2: db 0x06 0x00 0x48 0x3a 0x44 0x00 0xaa 0xed 0x1b 0x00 0x53 0xed 0x1a 0x00 0x51 0xec 0x1c 0x00 0xa5 0xec 0x28 0x00 0xf9 0xeb 0x2b 0x00 0xc9 0xed '  H:D     S   Q     (   +   '

// ================================================
// 0xedfe: WORD 'UNK_0xee00' codep=0x224c parp=0xee00
// ================================================

void UNK_0xee00() // UNK_0xee00
{
  Push(cc__6); // 6
  Push(cc__6); // 6
  UNK_0xdf55(); // UNK_0xdf55
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("SCROLL ITEMS: ^\   QUIT: []", 27); // (.")
  Push(cc__7); // 7
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
  Push(cc__dash_1); // -1
  Push(pp_WLINES); // WLINES
  _st__plus__ex__gt_(); // <+!>
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xee3c: WORD 'UNK_0xee3e' codep=0x224c parp=0xee3e
// ================================================

void UNK_0xee3e() // UNK_0xee3e
{
  Push(pp_UNK_0xddf6); // UNK_0xddf6
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(cc__7); // 7
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe072(); // UNK_0xe072
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(cc__6); // 6
  UNK_0xdf55(); // UNK_0xdf55
  PRINT("REVISING TERRAIN VEHICLE INVENTORY", 34); // (.")
  Push(pp_UNK_0xddf6); // UNK_0xddf6
  OFF(); // OFF
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xee91: WORD 'UNK_0xee93' codep=0x1d29 parp=0xee93
// ================================================
// 0xee93: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xee96: WORD 'UNK_0xee98' codep=0x224c parp=0xee98
// ================================================

void UNK_0xee98() // UNK_0xee98
{
  Push(pp_UNK_0xee93); // UNK_0xee93
  _1_dot_5_at_(); // 1.5@
}

// 0xee9e: db 0x4c 0x22 0x96 0xee 0xf2 0x79 0x84 0x7a 0x75 0x75 0x91 0xee 0x92 0x6d 0xc9 0x79 0x90 0x16 'L"   y zuu   m y  '

// ================================================
// 0xeeb0: WORD 'UNK_0xeeb2' codep=0x224c parp=0xeeb2
// ================================================

void UNK_0xeeb2() // UNK_0xeeb2
{
  UNK_0xee98(); // UNK_0xee98
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp_UNK_0xee93); // UNK_0xee93
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeec2: WORD 'UNK_0xeec4' codep=0x224c parp=0xeec4
// ================================================

void UNK_0xeec4() // UNK_0xeec4
{
  UNK_0xee98(); // UNK_0xee98
  _gt_C_plus_S(); // >C+S
  Func8("TEXT-IN");
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeed2: WORD 'UNK_0xeed4' codep=0x224c parp=0xeed4
// ================================================

void UNK_0xeed4() // UNK_0xeed4
{
  UNK_0xdf01(); // UNK_0xdf01
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xdf01(); // UNK_0xdf01
}


// ================================================
// 0xeee2: WORD 'UNK_0xeee4' codep=0x224c parp=0xeee4
// ================================================

void UNK_0xeee4() // UNK_0xeee4
{
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _dash_(); // -
  Push(Read16(sp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  ABS(); // ABS
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  SetColor("BLACK");
  WSHORTE(); // WSHORTE
  i++;
  } while(i<imax); // (LOOP) 0xfffa

  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xef0a: WORD 'UNK_0xef0c' codep=0x224c parp=0xef0c
// ================================================

void UNK_0xef0c() // UNK_0xef0c
{
  Push(0x0007);
  Push(0x0010);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__ex__gt_(); // <!>
  Push(pp_WLINES); // WLINES
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef1e: WORD 'UNK_0xef20' codep=0x224c parp=0xef20
// ================================================

void UNK_0xef20() // UNK_0xef20
{
  UNK_0xeec4(); // UNK_0xeec4
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef30: WORD 'UNK_0xef32' codep=0x224c parp=0xef32
// ================================================

void UNK_0xef32() // UNK_0xef32
{
  UNK_0xdf01(); // UNK_0xdf01
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  _st__plus__ex__gt_(); // <+!>
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  Push(Read16(sp)); // DUP
  Push(Read16(Pop())); // @
  Push(1); // 1
  MAX(); // MAX
  Push(pp_UNK_0xe1cb); // UNK_0xe1cb
  Push(Read16(Pop())); // @
  MIN(); // MIN
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
  UNK_0xe044(); // UNK_0xe044
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xdf01(); // UNK_0xdf01
}


// ================================================
// 0xef60: WORD 'UNK_0xef62' codep=0x224c parp=0xef62
// ================================================

void UNK_0xef62() // UNK_0xef62
{
  Push(pp__ro_SCROLL); // (SCROLL
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Func8("TEXT-IN");
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(pp__ro_SURFAC); // (SURFAC
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Push(0); // 0
  goto label2;

  label1:
  Push(cc__dash_1); // -1

  label2:
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  _st__ex__gt_(); // <!>
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef8c: WORD 'UNK_0xef8e' codep=0x224c parp=0xef8e
// ================================================

void UNK_0xef8e() // UNK_0xef8e
{
  UNK_0xe044(); // UNK_0xe044
  UNK_0xef0c(); // UNK_0xef0c
  UNK_0xee3e(); // UNK_0xee3e
  DELETE_dash_(); // DELETE-
  MAKE_dash_SC(); // MAKE-SC
  Push(pp_SUPER_dash_BOX); // SUPER-BOX
  _1_dot_5_at_(); // 1.5@
  GET_dash_BOX(); // GET-BOX
  UNK_0xef62(); // UNK_0xef62
  UNK_0xeee4(); // UNK_0xeee4
}


// ================================================
// 0xefa4: WORD 'UNK_0xefa6' codep=0x224c parp=0xefa6
// ================================================

void UNK_0xefa6() // UNK_0xefa6
{
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(cc__7); // 7
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xeec4(); // UNK_0xeec4
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  switch(Pop()) // T.OPTIONS
  {
  case 26:
    NOP(); // NOP
    break;
  case 28:
    UNK_0xe1db(); // UNK_0xe1db
    break;
  case 27:
    UNK_0xe1e9(); // UNK_0xe1e9
    break;
  case 30:
    UNK_0xe1fd(); // UNK_0xe1fd
    break;
  case 68:
    UNK_0xe216(); // UNK_0xe216
    break;
  case 40:
    UNK_0xe216(); // UNK_0xe216
    break;
  case 43:
    UNK_0xe224(); // UNK_0xe224
    break;
  case 11:
    UNK_0xe238(); // UNK_0xe238
    break;
  }
  goto label2;

  label1:
  switch(Pop()) // P.OPTIONS
  {
  case 26:
    NOP(); // NOP
    break;
  case 28:
    UNK_0xe27e(); // UNK_0xe27e
    break;
  case 27:
    UNK_0xe28c(); // UNK_0xe28c
    break;
  case 30:
    UNK_0xe2a0(); // UNK_0xe2a0
    break;
  case 68:
    UNK_0xe2b9(); // UNK_0xe2b9
    break;
  case 40:
    UNK_0xe2b9(); // UNK_0xe2b9
    break;
  }

  label2:
  UNK_0xeed4(); // UNK_0xeed4
}


// ================================================
// 0xefd2: WORD 'UNK_0xefd4' codep=0x224c parp=0xefd4
// ================================================

void UNK_0xefd4() // UNK_0xefd4
{
  UNK_0xee00(); // UNK_0xee00
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
  Push(Pop()-1); // 1-
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
  } while(i<imax); // (LOOP) 0xffe2

}


// ================================================
// 0xf000: WORD 'UNK_0xf002' codep=0x224c parp=0xf002
// ================================================

void UNK_0xf002() // UNK_0xf002
{
  Push(pp__ro_SCROLL); // (SCROLL
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_UNK_0xee93); // UNK_0xee93
  _1_dot_5_ex_(); // 1.5!
  Push(0); // 0

  label1:
  Push(Pop()+1); // 1+
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  _gt_1FONT(); // >1FONT
  UNK_0xefd4(); // UNK_0xefd4
  IPREV(); // IPREV
  UNK_0xdf01(); // UNK_0xdf01
  Pop(); // DROP
}


// ================================================
// 0xf026: WORD 'UNK_0xf028' codep=0x224c parp=0xf028
// ================================================

void UNK_0xf028() // UNK_0xf028
{
  Push(1); // 1
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  _ex_(); // !
  Push(pp_UNK_0xddf6); // UNK_0xddf6
  OFF(); // OFF
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF

  label7:
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  XYSCAN(); // XYSCAN
  Push(1); // 1
  Push(0); // 0
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
  Push(cc__dash_1); // -1
  UNK_0xef32(); // UNK_0xef32
  goto label3;

  label2:
  Push(cc__dash_1); // -1
  Push(0); // 0
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() == 0) goto label4;
  Pop(); Pop();// 2DROP
  Push(1); // 1
  UNK_0xef32(); // UNK_0xef32
  goto label3;

  label4:
  Pop(); // DROP
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label5;
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  Push(Read16(Pop())); // @
  _at_INST_dash_CLASS(); // @INST-CLASS
  switch(Pop()) // DISPATCH
  {
  case 68:
    NOP(); // NOP
    break;
  case 27:
    UNK_0xedaa(); // UNK_0xedaa
    break;
  case 26:
    UNK_0xed53(); // UNK_0xed53
    break;
  case 28:
    UNK_0xec51(); // UNK_0xec51
    break;
  case 40:
    UNK_0xeca5(); // UNK_0xeca5
    break;
  case 43:
    UNK_0xebf9(); // UNK_0xebf9
    break;
  }
  Push(pp_UNK_0xddf6); // UNK_0xddf6
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label6;
  UNK_0xef8e(); // UNK_0xef8e

  label6:
  Push(pp_FQUIT); // FQUIT
  ON(); // ON

  label5:
  Pop(); // DROP

  label3:
  goto label7;

  label1:
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  UNK_0xe044(); // UNK_0xe044
  UNK_0xe0b5(); // UNK_0xe0b5
  UNK_0xeee4(); // UNK_0xeee4
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xf002(); // UNK_0xf002
  UNK_0xef62(); // UNK_0xef62
}


// ================================================
// 0xf0a6: WORD 'UNK_0xf0a8' codep=0x224c parp=0xf0a8
// ================================================

void UNK_0xf0a8() // UNK_0xf0a8
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _ex_COLOR(); // !COLOR
}

// 0xf0b2: db 0x4c 0x22 0xa6 0xf0 0x0a 0x4f 0xa6 0xf0 0x5d 0x17 0x55 0x00 0x5d 0x17 0x15 0x00 0x2b 0xa0 0xdc 0x1b 0x01 0x20 0x17 0x85 0x5d 0x17 0x55 0x00 0x5d 0x17 0x15 0x00 0x2b 0xa0 0xdc 0x1b 0x01 0x5e 0x17 0x85 0x90 0x16 'L"   O  ] U ]   +       ] U ]   +    ^    '

// ================================================
// 0xf0dc: WORD 'UNK_0xf0de' codep=0x224c parp=0xf0de
// ================================================

void UNK_0xf0de() // UNK_0xf0de
{
  UNK_0xf0a8(); // UNK_0xf0a8
  SetColor("BLACK");
  UNK_0xf0a8(); // UNK_0xf0a8
  Push(0x005b);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT(" ", 1); // (.")
  _ex_COLOR(); // !COLOR
  Push(0x005b);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("\", 1); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf106: WORD 'UNK_0xf108' codep=0x224c parp=0xf108
// ================================================

void UNK_0xf108() // UNK_0xf108
{
  UNK_0xf0a8(); // UNK_0xf0a8
  SetColor("BLACK");
  UNK_0xf0a8(); // UNK_0xf0a8
  Push(0x0085);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("  ", 2); // (.")
  _ex_COLOR(); // !COLOR
  Push(0x0085);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("[]", 2); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf132: WORD 'UNK_0xf134' codep=0x224c parp=0xf134
// ================================================

void UNK_0xf134() // UNK_0xf134
{
  UNK_0xeec4(); // UNK_0xeec4
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(Read16(sp)); // DUP
  Push(0x0028);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(1); // 1
  goto label3;

  label2:
  Push(0x002c);
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Push(cc__dash_1); // -1
  goto label3;

  label4:
  Push(0); // 0

  label3:
  goto label5;

  label1:
  Push(0); // 0

  label5:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf174: WORD 'UNK_0xf176' codep=0x224c parp=0xf176
// ================================================

void UNK_0xf176() // UNK_0xf176
{
  Push(Read16(sp)); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) goto label1;
  Push(cc__dash_1); // -1
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  _st__ex__gt_(); // <!>

  label1:
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(0); // 0
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  _st__ex__gt_(); // <!>
}

// 0xf192: db 0x4c 0x22 0x32 0xf1 0x74 0xf1 0x90 0x16 'L"2 t   '

// ================================================
// 0xf19a: WORD 'UNK_0xf19c' codep=0x224c parp=0xf19c
// ================================================

void UNK_0xf19c() // UNK_0xf19c
{
  UNK_0xf134(); // UNK_0xf134
  Push(-Pop()); // NEGATE
  UNK_0xf176(); // UNK_0xf176
}

// 0xf1a4: db 0x4c 0x22 0x2f 0x4f 0xb2 0xf0 0xcf 0xa1 0x84 0x7a 0x9e 0xee 0x92 0xf1 0xc6 0xae 0xdb 0x23 0xff 0xde 0xb6 0x4f 0x17 0x85 0xac 0x3b 0xc2 0x5b 0x11 0x4c 0x22 0xa4 0x2e 0x0f 0xc2 0x5b 0x11 0x4c 0xff 0xde 0x89 0x4f 0xb2 0xf0 0x90 0x16 'L"/O     z       #   O   ; [ L" .  [ L   O    '

// ================================================
// 0xf1d2: WORD 'UNK_0xf1d4' codep=0x224c parp=0xf1d4
// ================================================

void UNK_0xf1d4() // UNK_0xf1d4
{
  SetColor("GREEN");
  UNK_0xf0de(); // UNK_0xf0de
  CLICK(); // CLICK
  UNK_0xf19c(); // UNK_0xf19c
  IPREV(); // IPREV
  UNK_0xeeb2(); // UNK_0xeeb2
  UNK_0xee98(); // UNK_0xee98
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  PAD(); // PAD
  UNK_0xdf01(); // UNK_0xdf01
  Push(cc__dash_1); // -1
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WLINE_dash_D(); // WLINE-D
  Push(1); // 1
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xdf01(); // UNK_0xdf01
  SetColor("LT-BLUE");
  UNK_0xf0de(); // UNK_0xf0de
}


// ================================================
// 0xf206: WORD 'TD-SCROLL' codep=0x4a4f parp=0xf214
// ================================================
// 0xf214: db 0x02 0x00 0x48 0x3a 0xff 0xff 0xd4 0xf1 0x01 0x00 0xa6 0xf1 '  H:        '

// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x224c parp=0xf222
// ================================================

void UNK_0xf222() // UNK_0xf222
{

  label4:
  UNK_0xdf0b(); // UNK_0xdf0b
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  switch(Pop()) // TD-SCROLL
  {
  case 65535:
    NOP(); // NOP
    break;
  case 1:
    UNK_0xf1d4(); // UNK_0xf1d4
    break;
  }
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  _ask_TRIG(); // ?TRIG
  UNK_0xef20(); // UNK_0xef20
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label3;
  UNK_0xefa6(); // UNK_0xefa6
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
  UNK_0xf028(); // UNK_0xf028

  label3:
  Push(pp_FQUIT); // FQUIT
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label4;
}


// ================================================
// 0xf250: WORD 'UNK_0xf252' codep=0x224c parp=0xf252
// ================================================

void UNK_0xf252() // UNK_0xf252
{
  Push2Words("0.");
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;

  label4:
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  CJ(); // CJ
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) goto label3;
  Pop(); Pop();// 2DROP
  CI_i_(); // CI'

  label3:
  INEXT(); // INEXT
  goto label4;

  label2:
  CJ(); // CJ
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  CI_i_(); // CI'

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf29a: WORD 'UNK_0xf29c' codep=0x224c parp=0xf29c
// ================================================

void UNK_0xf29c() // UNK_0xf29c
{
  Push2Words("0.");

  label3:
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0x000b);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  CI(); // CI
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  UNK_0xf252(); // UNK_0xf252
  ICLOSE(); // ICLOSE
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  _2SWAP(); // 2SWAP

  label2:
  Pop(); Pop();// 2DROP

  label1:
  INEXT(); // INEXT
  goto label3;
}

// 0xf2d8: db 0x4c 0x22 0xf1 0x75 0xfa 0x15 0x0c 0x00 0xc9 0x79 0xda 0x7e 0x9c 0x7a 0x58 0x51 0xf2 0x79 0x90 0x16 'L" u     y ~ zXQ y  '

// ================================================
// 0xf2ec: WORD 'UNK_0xf2ee' codep=0x224c parp=0xf2ee
// ================================================

void UNK_0xf2ee() // UNK_0xf2ee
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  UNK_0xf252(); // UNK_0xf252
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  UNK_0xf29c(); // UNK_0xf29c
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE

  label1:
  C_gt_(); // C>
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xf31a: WORD 'UNK_0xf31c' codep=0x224c parp=0xf31c
// ================================================

void UNK_0xf31c() // UNK_0xf31c
{
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x001b);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Func8("INST-DATE");
  _ex_(); // !

  label1:
  IEXTRACT(); // IEXTRACT
  Push(pp__ro_SURFAC); // (SURFAC
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xea76(); // UNK_0xea76
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  Push(cc__dash_1); // -1
  Func8("INST-QTY");
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf346: WORD 'UNK_0xf348' codep=0x224c parp=0xf348
// ================================================

void UNK_0xf348() // UNK_0xf348
{
  UNK_0xe5c1(); // UNK_0xe5c1
  Func8("INST-Y");
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(2); // 2
  _st_(); // <
  SWAP(); // SWAP
  Func8("INST-X");
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(2); // 2
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf368: WORD 'UNK_0xf36a' codep=0x224c parp=0xf36a
// ================================================

void UNK_0xf36a() // UNK_0xf36a
{
  Push(0x7d00);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_ICON(); // POINT>ICON
  _at_ID(); // @ID
  Push(Read16(sp)); // DUP
  _gt_R(); // >R
  Push(0x0011);
  _st_(); // <
  R_at_(); // R@
  Push(0x0014);
  Push(0x0017);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  R_at_(); // R@
  Push(0x00fe);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  Push(0x002c);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  UNK_0xf348(); // UNK_0xf348
  if (Pop() == 0) goto label2;
  UNK_0xf2ee(); // UNK_0xf2ee
  UNK_0xf31c(); // UNK_0xf31c
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE

  label2:
  ICLOSE(); // ICLOSE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffb2

  Push(0x000a);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf3d4: WORD 'UNK_0xf3d6' codep=0x224c parp=0xf3d6
// ================================================

void UNK_0xf3d6() // UNK_0xf3d6
{
  CJ(); // CJ
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  UNK_0xe5c1(); // UNK_0xe5c1
  Func8("INST-Y");
  _ex_(); // !
  Func8("INST-X");
  _ex_(); // !

  label1:
  _ro_BOX_gt__rc_(); // (BOX>)
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
}


// ================================================
// 0xf3f6: WORD 'UNK_0xf3f8' codep=0x224c parp=0xf3f8
// ================================================

void UNK_0xf3f8() // UNK_0xf3f8
{
  IOPEN(); // IOPEN

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf3d6(); // UNK_0xf3d6
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  IPREV(); // IPREV
}


// ================================================
// 0xf410: WORD 'UNK_0xf412' codep=0x224c parp=0xf412
// ================================================

void UNK_0xf412() // UNK_0xf412
{
  Push(0x7d00);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
  IOPEN(); // IOPEN

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf3f8(); // UNK_0xf3f8
  goto label2;

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x000a);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf438: WORD 'UNK_0xf43a' codep=0x224c parp=0xf43a
// ================================================

void UNK_0xf43a() // UNK_0xf43a
{
  Push(pp__ro_SURFAC); // (SURFAC
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf412(); // UNK_0xf412
}


// ================================================
// 0xf442: WORD '>DEBRIS' codep=0x224c parp=0xf44e
// ================================================
// entry

void _gt_DEBRIS() // >DEBRIS
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf412(); // UNK_0xf412
}


// ================================================
// 0xf456: WORD 'UNK_0xf458' codep=0x224c parp=0xf458
// ================================================

void UNK_0xf458() // UNK_0xf458
{
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001c);
  Push(cc__5); // 5
  IFIND(); // IFIND
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(pp__ask_FLAT); // ?FLAT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf47e: WORD 'UNK_0xf480' codep=0x224c parp=0xf480
// ================================================

void UNK_0xf480() // UNK_0xf480
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  UNK_0xf458(); // UNK_0xf458
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf48e: WORD '(/ITEMS)' codep=0x224c parp=0xf49b
// ================================================
// entry

void _ro__slash_ITEMS_rc_() // (/ITEMS)
{
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  _at_NEWSPACE(); // @NEWSPACE
  D_st_(); // D<
  Push(pp__ask_CRITIC); // ?CRITIC
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;

  label3:
  UNK_0xe044(); // UNK_0xe044
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  MAKE_dash_SC(); // MAKE-SC
  UNK_0xf36a(); // UNK_0xf36a
  Push(pp_SUPER_dash_BOX); // SUPER-BOX
  _1_dot_5_at_(); // 1.5@
  GET_dash_BOX(); // GET-BOX

  label2:
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xeee4(); // UNK_0xeee4
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xf002(); // UNK_0xf002
  UNK_0xef62(); // UNK_0xef62
  UNK_0xf222(); // UNK_0xf222
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) goto label3;
  SetColor("GREEN");
  UNK_0xf108(); // UNK_0xf108
  DELETE_dash_(); // DELETE-
  Push2Words("0.");
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  UNK_0xf43a(); // UNK_0xf43a
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  UNK_0xef0c(); // UNK_0xef0c
  Push(cc__7); // 7
  Push(pp_UNK_0xddfa); // UNK_0xddfa
  _st__ex__gt_(); // <!>
  SetColor("LT-BLUE");
  UNK_0xf108(); // UNK_0xf108
  UNK_0xdf01(); // UNK_0xdf01
  UNK_0xe0b5(); // UNK_0xe0b5
  UNK_0xf480(); // UNK_0xf480
  return;

  label1:
  UNK_0xe044(); // UNK_0xe044
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(cc__6); // 6
  Push(0); // 0
  UNK_0xdf55(); // UNK_0xdf55
  PRINT("NOT ENOUGH STORAGE FOR FUNCTION", 31); // (.")
  Push(0x0fa0);
  MS(); // MS
  UNK_0xe0b5(); // UNK_0xe0b5
}

// 0xf541: db 0x49 0x54 0x45 0x4d 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ITEMS__________________________ '
  