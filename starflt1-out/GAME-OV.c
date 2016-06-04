// ====== OVERLAY 'GAME-OV' ======

#include"interface.h"

// store offset = 0xde40
// overlay size   = 0x1720

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xde5a  codep:0x2214 parp:0xde5a size:0x0002 C-string:'UNK_0xde5a'
// 1704:      UNK_0xde5e  codep:0x2214 parp:0xde5e size:0x0002 C-string:'UNK_0xde5e'
// 1705:      UNK_0xde62  codep:0x2214 parp:0xde62 size:0x0002 C-string:'UNK_0xde62'
// 1706:      UNK_0xde66  codep:0x2214 parp:0xde66 size:0x0002 C-string:'UNK_0xde66'
// 1707:      UNK_0xde6a  codep:0x2214 parp:0xde6a size:0x000a C-string:'UNK_0xde6a'
// 1708:      UNK_0xde76  codep:0x2214 parp:0xde76 size:0x0002 C-string:'UNK_0xde76'
// 1709:      UNK_0xde7a  codep:0x2214 parp:0xde7a size:0x0002 C-string:'UNK_0xde7a'
// 1710:      UNK_0xde7e  codep:0x2214 parp:0xde7e size:0x0002 C-string:'UNK_0xde7e'
// 1711:      UNK_0xde82  codep:0x1d29 parp:0xde82 size:0x0002 C-string:'UNK_0xde82'
// 1712:      UNK_0xde86  codep:0x1d29 parp:0xde86 size:0x00e2 C-string:'UNK_0xde86'
// 1713:      UNK_0xdf6a  codep:0x1d29 parp:0xdf6a size:0x0002 C-string:'UNK_0xdf6a'
// 1714:      UNK_0xdf6e  codep:0x1d29 parp:0xdf6e size:0x0002 C-string:'UNK_0xdf6e'
// 1715:      UNK_0xdf72  codep:0x1d29 parp:0xdf72 size:0x0002 C-string:'UNK_0xdf72'
// 1716:      UNK_0xdf76  codep:0x1d29 parp:0xdf76 size:0x0002 C-string:'UNK_0xdf76'
// 1717:      UNK_0xdf7a  codep:0x1d29 parp:0xdf7a size:0x0002 C-string:'UNK_0xdf7a'
// 1718:      UNK_0xdf7e  codep:0x1d29 parp:0xdf7e size:0x0002 C-string:'UNK_0xdf7e'
// 1719:      UNK_0xdf82  codep:0x1d29 parp:0xdf82 size:0x0002 C-string:'UNK_0xdf82'
// 1720:      UNK_0xdf86  codep:0x1d29 parp:0xdf86 size:0x0002 C-string:'UNK_0xdf86'
// 1721:      UNK_0xdf8a  codep:0x1d29 parp:0xdf8a size:0x0002 C-string:'UNK_0xdf8a'
// 1722:      UNK_0xdf8e  codep:0x1d29 parp:0xdf8e size:0x0002 C-string:'UNK_0xdf8e'
// 1723:      UNK_0xdf92  codep:0x1d29 parp:0xdf92 size:0x0006 C-string:'UNK_0xdf92'
// 1724:      UNK_0xdf9a  codep:0x1d29 parp:0xdf9a size:0x0002 C-string:'UNK_0xdf9a'
// 1725:      UNK_0xdf9e  codep:0x1d29 parp:0xdf9e size:0x0002 C-string:'UNK_0xdf9e'
// 1726:      UNK_0xdfa2  codep:0x1d29 parp:0xdfa2 size:0x0002 C-string:'UNK_0xdfa2'
// 1727:      UNK_0xdfa6  codep:0x1d29 parp:0xdfa6 size:0x0002 C-string:'UNK_0xdfa6'
// 1728:      UNK_0xdfaa  codep:0x2214 parp:0xdfaa size:0x0002 C-string:'UNK_0xdfaa'
// 1729:      UNK_0xdfae  codep:0x2214 parp:0xdfae size:0x0002 C-string:'UNK_0xdfae'
// 1730:            HOST  codep:0x5275 parp:0xdfb9 size:0x0016 C-string:'HOST'
// 1731:          VECTOR  codep:0x5275 parp:0xdfda size:0x0024 C-string:'VECTOR'
// 1732:      UNK_0xe000  codep:0x1d29 parp:0xe000 size:0x0010 C-string:'UNK_0xe000'
// 1733:      UNK_0xe012  codep:0x224c parp:0xe012 size:0x0012 C-string:'UNK_0xe012'
// 1734:      UNK_0xe026  codep:0x224c parp:0xe026 size:0x0034 C-string:'UNK_0xe026'
// 1735:      UNK_0xe05c  codep:0x224c parp:0xe05c size:0x0010 C-string:'UNK_0xe05c'
// 1736:      UNK_0xe06e  codep:0x1d29 parp:0xe06e size:0x0026 C-string:'UNK_0xe06e'
// 1737:      UNK_0xe096  codep:0x224c parp:0xe096 size:0x0006 C-string:'UNK_0xe096'
// 1738:      UNK_0xe09e  codep:0x224c parp:0xe09e size:0x0006 C-string:'UNK_0xe09e'
// 1739:      UNK_0xe0a6  codep:0x224c parp:0xe0a6 size:0x0006 C-string:'UNK_0xe0a6'
// 1740:      UNK_0xe0ae  codep:0x224c parp:0xe0ae size:0x0006 C-string:'UNK_0xe0ae'
// 1741:      UNK_0xe0b6  codep:0x224c parp:0xe0b6 size:0x0042 C-string:'UNK_0xe0b6'
// 1742:      UNK_0xe0fa  codep:0x224c parp:0xe0fa size:0x000a C-string:'UNK_0xe0fa'
// 1743:      UNK_0xe106  codep:0x1d29 parp:0xe106 size:0x0002 C-string:'UNK_0xe106'
// 1744:      UNK_0xe10a  codep:0x1d29 parp:0xe10a size:0x0002 C-string:'UNK_0xe10a'
// 1745:            ?HUB  codep:0x224c parp:0xe115 size:0x0018 C-string:'_ask_HUB'
// 1746:          SETHID  codep:0x224c parp:0xe138 size:0x000a C-string:'SETHID'
// 1747:          SETDIS  codep:0x224c parp:0xe14d size:0x0008 C-string:'SETDIS'
// 1748:          SCR>CG  codep:0x224c parp:0xe160 size:0x0050 C-string:'SCR_gt_CG'
// 1749:      UNK_0xe1b2  codep:0x224c parp:0xe1b2 size:0x000a C-string:'UNK_0xe1b2'
// 1750:      UNK_0xe1be  codep:0x224c parp:0xe1be size:0x0016 C-string:'UNK_0xe1be'
// 1751:      UNK_0xe1d6  codep:0x224c parp:0xe1d6 size:0x001c C-string:'UNK_0xe1d6'
// 1752:      UNK_0xe1f4  codep:0x224c parp:0xe1f4 size:0x0016 C-string:'UNK_0xe1f4'
// 1753:      UNK_0xe20c  codep:0x224c parp:0xe20c size:0x0040 C-string:'UNK_0xe20c'
// 1754:      UNK_0xe24e  codep:0x224c parp:0xe24e size:0x0028 C-string:'UNK_0xe24e'
// 1755:      UNK_0xe278  codep:0x224c parp:0xe278 size:0x003c C-string:'UNK_0xe278'
// 1756:      UNK_0xe2b6  codep:0x224c parp:0xe2b6 size:0x000e C-string:'UNK_0xe2b6'
// 1757:      UNK_0xe2c6  codep:0x224c parp:0xe2c6 size:0x006c C-string:'UNK_0xe2c6'
// 1758:      UNK_0xe334  codep:0x224c parp:0xe334 size:0x000a C-string:'UNK_0xe334'
// 1759:      UNK_0xe340  codep:0x224c parp:0xe340 size:0x0034 C-string:'UNK_0xe340'
// 1760:      UNK_0xe376  codep:0x224c parp:0xe376 size:0x001c C-string:'UNK_0xe376'
// 1761:      UNK_0xe394  codep:0x224c parp:0xe394 size:0x001a C-string:'UNK_0xe394'
// 1762:      UNK_0xe3b0  codep:0x224c parp:0xe3b0 size:0x000a C-string:'UNK_0xe3b0'
// 1763:      UNK_0xe3bc  codep:0x224c parp:0xe3bc size:0x0112 C-string:'UNK_0xe3bc'
// 1764:      UNK_0xe4d0  codep:0x224c parp:0xe4d0 size:0x00ef C-string:'UNK_0xe4d0'
// 1765:      UNK_0xe5c1  codep:0x224c parp:0xe5c1 size:0x0026 C-string:'UNK_0xe5c1'
// 1766:      UNK_0xe5e9  codep:0x224c parp:0xe5e9 size:0x0032 C-string:'UNK_0xe5e9'
// 1767:      UNK_0xe61d  codep:0x224c parp:0xe61d size:0x0020 C-string:'UNK_0xe61d'
// 1768:      UNK_0xe63f  codep:0x224c parp:0xe63f size:0x0006 C-string:'UNK_0xe63f'
// 1769:      UNK_0xe647  codep:0x224c parp:0xe647 size:0x0006 C-string:'UNK_0xe647'
// 1770:      UNK_0xe64f  codep:0x224c parp:0xe64f size:0x0008 C-string:'UNK_0xe64f'
// 1771:      UNK_0xe659  codep:0x224c parp:0xe659 size:0x0014 C-string:'UNK_0xe659'
// 1772:      UNK_0xe66f  codep:0x224c parp:0xe66f size:0x011b C-string:'UNK_0xe66f'
// 1773:      UNK_0xe78c  codep:0x224c parp:0xe78c size:0x0028 C-string:'UNK_0xe78c'
// 1774:      UNK_0xe7b6  codep:0x224c parp:0xe7b6 size:0x0036 C-string:'UNK_0xe7b6'
// 1775:      UNK_0xe7ee  codep:0x224c parp:0xe7ee size:0x0034 C-string:'UNK_0xe7ee'
// 1776:      UNK_0xe824  codep:0x224c parp:0xe824 size:0x0047 C-string:'UNK_0xe824'
// 1777:      UNK_0xe86d  codep:0x224c parp:0xe86d size:0x0012 C-string:'UNK_0xe86d'
// 1778:      UNK_0xe881  codep:0x224c parp:0xe881 size:0x002d C-string:'UNK_0xe881'
// 1779:      UNK_0xe8b0  codep:0x224c parp:0xe8b0 size:0x0008 C-string:'UNK_0xe8b0'
// 1780:          SCR>EG  codep:0x224c parp:0xe8c3 size:0x0076 C-string:'SCR_gt_EG'
// 1781:      UNK_0xe93b  codep:0x224c parp:0xe93b size:0x002a C-string:'UNK_0xe93b'
// 1782:      UNK_0xe967  codep:0x224c parp:0xe967 size:0x0028 C-string:'UNK_0xe967'
// 1783:      UNK_0xe991  codep:0x224c parp:0xe991 size:0x0006 C-string:'UNK_0xe991'
// 1784:      UNK_0xe999  codep:0x224c parp:0xe999 size:0x0006 C-string:'UNK_0xe999'
// 1785:      UNK_0xe9a1  codep:0x224c parp:0xe9a1 size:0x0008 C-string:'UNK_0xe9a1'
// 1786:      UNK_0xe9ab  codep:0x224c parp:0xe9ab size:0x000c C-string:'UNK_0xe9ab'
// 1787:      UNK_0xe9b9  codep:0x224c parp:0xe9b9 size:0x001a C-string:'UNK_0xe9b9'
// 1788:      UNK_0xe9d5  codep:0x224c parp:0xe9d5 size:0x0012 C-string:'UNK_0xe9d5'
// 1789:      UNK_0xe9e9  codep:0x224c parp:0xe9e9 size:0x0008 C-string:'UNK_0xe9e9'
// 1790:      UNK_0xe9f3  codep:0x224c parp:0xe9f3 size:0x001c C-string:'UNK_0xe9f3'
// 1791:      UNK_0xea11  codep:0x224c parp:0xea11 size:0x0014 C-string:'UNK_0xea11'
// 1792:      UNK_0xea27  codep:0x224c parp:0xea27 size:0x0028 C-string:'UNK_0xea27'
// 1793:      UNK_0xea51  codep:0x224c parp:0xea51 size:0x0034 C-string:'UNK_0xea51'
// 1794:      UNK_0xea87  codep:0x224c parp:0xea87 size:0x003e C-string:'UNK_0xea87'
// 1795:      UNK_0xeac7  codep:0x224c parp:0xeac7 size:0x0078 C-string:'UNK_0xeac7'
// 1796:          PRMSAV  codep:0xeb4a parp:0xeb4a size:0x001d C-string:'PRMSAV'
// 1797:          PRMLOD  codep:0xeb72 parp:0xeb72 size:0x002d C-string:'PRMLOD'
// 1798:          RETSAV  codep:0xebaa parp:0xebaa size:0x001d C-string:'RETSAV'
// 1799:          RETJMP  codep:0xebd2 parp:0xebd2 size:0x0028 C-string:'RETJMP'
// 1800:      UNK_0xebfc  codep:0x224c parp:0xebfc size:0x0082 C-string:'UNK_0xebfc'
// 1801:      UNK_0xec80  codep:0x224c parp:0xec80 size:0x000e C-string:'UNK_0xec80'
// 1802:      UNK_0xec90  codep:0x224c parp:0xec90 size:0x000c C-string:'UNK_0xec90'
// 1803:      UNK_0xec9e  codep:0x224c parp:0xec9e size:0x0022 C-string:'UNK_0xec9e'
// 1804:      UNK_0xecc2  codep:0x224c parp:0xecc2 size:0x001c C-string:'UNK_0xecc2'
// 1805:      UNK_0xece0  codep:0x224c parp:0xece0 size:0x000c C-string:'UNK_0xece0'
// 1806:      UNK_0xecee  codep:0x224c parp:0xecee size:0x000a C-string:'UNK_0xecee'
// 1807:      UNK_0xecfa  codep:0x224c parp:0xecfa size:0x0026 C-string:'UNK_0xecfa'
// 1808:      UNK_0xed22  codep:0x224c parp:0xed22 size:0x001a C-string:'UNK_0xed22'
// 1809:      UNK_0xed3e  codep:0x224c parp:0xed3e size:0x002a C-string:'UNK_0xed3e'
// 1810:      UNK_0xed6a  codep:0x224c parp:0xed6a size:0x0026 C-string:'UNK_0xed6a'
// 1811:      UNK_0xed92  codep:0x224c parp:0xed92 size:0x000e C-string:'UNK_0xed92'
// 1812:      UNK_0xeda2  codep:0x224c parp:0xeda2 size:0x0014 C-string:'UNK_0xeda2'
// 1813:      UNK_0xedb8  codep:0x224c parp:0xedb8 size:0x0022 C-string:'UNK_0xedb8'
// 1814:      UNK_0xeddc  codep:0x224c parp:0xeddc size:0x002e C-string:'UNK_0xeddc'
// 1815:          LOAD.G  codep:0x224c parp:0xee15 size:0x004c C-string:'LOAD_dot_G'
// 1816:      UNK_0xee63  codep:0x224c parp:0xee63 size:0x0016 C-string:'UNK_0xee63'
// 1817:      UNK_0xee7b  codep:0x224c parp:0xee7b size:0x001c C-string:'UNK_0xee7b'
// 1818:      UNK_0xee99  codep:0x224c parp:0xee99 size:0x0016 C-string:'UNK_0xee99'
// 1819:      UNK_0xeeb1  codep:0x224c parp:0xeeb1 size:0x0032 C-string:'UNK_0xeeb1'
// 1820:      UNK_0xeee5  codep:0x224c parp:0xeee5 size:0x006a C-string:'UNK_0xeee5'
// 1821:          SET.DI  codep:0x224c parp:0xef5a size:0x010d C-string:'SET_dot_DI'
// 1822:      UNK_0xf069  codep:0x224c parp:0xf069 size:0x003a C-string:'UNK_0xf069'
// 1823:          POLICE  codep:0x224c parp:0xf0ae size:0x03c4 C-string:'POLICE'
// 1824:          NEW.GA  codep:0x224c parp:0xf47d size:0x0016 C-string:'NEW_dot_GA'
// 1825:      UNK_0xf495  codep:0x224c parp:0xf495 size:0x002a C-string:'UNK_0xf495'
// 1826:          GAMEOP  codep:0x4a4f parp:0xf4ca size:0x0010 C-string:'GAMEOP'
// 1827:      UNK_0xf4dc  codep:0x224c parp:0xf4dc size:0x000e C-string:'UNK_0xf4dc'
// 1828:      UNK_0xf4ec  codep:0x224c parp:0xf4ec size:0x0016 C-string:'UNK_0xf4ec'
// 1829:      UNK_0xf504  codep:0x224c parp:0xf504 size:0x000e C-string:'UNK_0xf504'
// 1830:          GAMEOP  codep:0x224c parp:0xf51d size:0x0008 C-string:'GAMEOP'
// 1831:      UNK_0xf527  codep:0x224c parp:0xf527 size:0x0006 C-string:'UNK_0xf527'
// 1832:          START.  codep:0x224c parp:0xf538 size:0x0028 C-string:'START_dot_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xde82[2] = {0x01, 0x00}; // UNK_0xde82
unsigned char UNK_0xde86[226] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x0c, 0x50, 0x0e, 0x6e, 0x0e, 0x32, 0x30, 0x37, 0x34, 0x92, 0x0c, 0xf0, 0x0d, 0x3d, 0x0f, 0x5c, 0x15, 0xe8, 0xff, 0x90, 0x0e, 0x32, 0x0e, 0xb4, 0x0d, 0xb4, 0x0d, 0x3d, 0x90, 0x3d, 0x90, 0x90, 0x0e, 0x90, 0x0e, 0x3d, 0x90, 0x83, 0x3b, 0xef, 0x2a, 0x90, 0x16, 0x4c, 0x22, 0x8b, 0x3b, 0x20, 0x35, 0x32, 0x30, 0x37, 0x35, 0x50, 0x0e, 0x72, 0x0f, 0x92, 0x0c, 0x7f, 0x0e, 0x50, 0x0e, 0x72, 0x0f, 0xc3, 0x4b, 0x72, 0x0f, 0x41, 0x0e, 0x50, 0x0e, 0x3d, 0x0f, 0x9f, 0x11, 0xfa, 0x15, 0x08, 0x00, 0x68, 0xde, 0x60, 0x16, 0x04, 0x00, 0x62, 0xde, 0x57, 0x40, 0x07, 0x13, 0xfa, 0x15, 0x3c, 0x00, 0x7f, 0x0e, 0x50, 0x0e, 0x72, 0x0f, 0x41, 0x0e, 0x92, 0x0c, 0xc6, 0x11, 0x41, 0x0e, 0xb3, 0x0e, 0x6a, 0x6d, 0x05, 0x10, 0x72, 0x0f, 0x20, 0x0f, 0x5d, 0x17, 0x64, 0x00, 0xd8, 0x4a, 0x5d, 0x17, 0x0a, 0x00, 0x46, 0x12, 0xfa, 0x15, 0x14, 0x00, 0x2e, 0x0f, 0x5d, 0x17, 0x10, 0x00, 0xd8, 0x4a, 0x41, 0x0e, 0x47, 0x49, 0x72, 0x0f, 0x6e, 0xde, 0x76, 0x6d, 0x73, 0x3b, 0xae, 0x3f, 0x50, 0x0e, 0x72, 0x0f, 0x6a, 0x6d, 0xd0, 0x15, 0x8c, 0xff, 0xde, 0x0d, 0x90, 0x16, 0x4c, 0x22, 0x8b, 0x3b, 0x20, 0x0f, 0xb8, 0x15, 0x00, 0x00, 0xc6, 0x4b, 0x45, 0x59, 0x49, 0x4e, 0xc3, 0xa0, 0x3c, 0x34, 0xe5, 0x46, 0xdf, 0xc5, 0x44, 0x58, 0x43, 0x52, 0xd3, 0xa0, 0x3c, 0x38, 0xe5, 0x53, 0xdf, 0xc5, 0x44, 0x59, 0x43, 0x52, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xde86
unsigned char UNK_0xdf6a[2] = {0x3a, 0x20}; // UNK_0xdf6a
unsigned char UNK_0xdf6e[2] = {0x14, 0x00}; // UNK_0xdf6e
unsigned char UNK_0xdf72[2] = {0x8c, 0x00}; // UNK_0xdf72
unsigned char UNK_0xdf76[2] = {0x96, 0x00}; // UNK_0xdf76
unsigned char UNK_0xdf7a[2] = {0x28, 0x00}; // UNK_0xdf7a
unsigned char UNK_0xdf7e[2] = {0x09, 0x00}; // UNK_0xdf7e
unsigned char UNK_0xdf82[2] = {0x06, 0x00}; // UNK_0xdf82
unsigned char UNK_0xdf86[2] = {0x03, 0x00}; // UNK_0xdf86
unsigned char UNK_0xdf8a[2] = {0x14, 0x00}; // UNK_0xdf8a
unsigned char UNK_0xdf8e[2] = {0x09, 0x00}; // UNK_0xdf8e
unsigned char UNK_0xdf92[6] = {0x84, 0xe8, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xdf92
unsigned char UNK_0xdf9a[2] = {0x02, 0x00}; // UNK_0xdf9a
unsigned char UNK_0xdf9e[2] = {0x99, 0xe8}; // UNK_0xdf9e
unsigned char UNK_0xdfa2[2] = {0x0b, 0x00}; // UNK_0xdfa2
unsigned char UNK_0xdfa6[2] = {0x3a, 0x20}; // UNK_0xdfa6
unsigned char UNK_0xe000[16] = {0x00, 0x02, 0x01, 0x0b, 0x04, 0x08, 0x05, 0x09, 0x06, 0x0a, 0x07, 0x03, 0x0c, 0x0e, 0x0d, 0x0f}; // UNK_0xe000
unsigned char UNK_0xe06e[38] = {0x20, 0x00, 0x4c, 0x22, 0x68, 0xe0, 0x76, 0x6d, 0x6c, 0xe0, 0xc5, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0x68, 0xe0, 0xae, 0x0b, 0x6c, 0xe0, 0xae, 0x0b, 0x72, 0x0f, 0xf2, 0x0e, 0x41, 0x0e, 0x6c, 0xe0, 0x83, 0x6d, 0xea, 0x6d, 0x90, 0x16}; // UNK_0xe06e
unsigned char UNK_0xe106[2] = {0xfe, 0x11}; // UNK_0xe106
unsigned char UNK_0xe10a[2] = {0x00, 0x00}; // UNK_0xe10a

const unsigned short int cc_UNK_0xde5a = 0x003d; // UNK_0xde5a
const unsigned short int cc_UNK_0xde5e = 0x0070; // UNK_0xde5e
const unsigned short int cc_UNK_0xde62 = 0x0080; // UNK_0xde62
const unsigned short int cc_UNK_0xde66 = 0x0081; // UNK_0xde66
const unsigned short int cc_UNK_0xde6a = 0x0082; // UNK_0xde6a
const unsigned short int cc_UNK_0xde76 = 0x4000; // UNK_0xde76
const unsigned short int cc_UNK_0xde7a = 0x0400; // UNK_0xde7a
const unsigned short int cc_UNK_0xde7e = 0x3a48; // UNK_0xde7e
const unsigned short int cc_UNK_0xdfaa = 0x000b; // UNK_0xdfaa
const unsigned short int cc_UNK_0xdfae = 0x0012; // UNK_0xdfae


// 0xde52: db 0x72 0x01 0x14 0x22 0x3d 0x00 'r  "= '

// ================================================
// 0xde58: WORD 'UNK_0xde5a' codep=0x2214 parp=0xde5a
// ================================================
// 0xde5a: db 0x3d 0x00 '= '

// ================================================
// 0xde5c: WORD 'UNK_0xde5e' codep=0x2214 parp=0xde5e
// ================================================
// 0xde5e: db 0x70 0x00 'p '

// ================================================
// 0xde60: WORD 'UNK_0xde62' codep=0x2214 parp=0xde62
// ================================================
// 0xde62: db 0x80 0x00 '  '

// ================================================
// 0xde64: WORD 'UNK_0xde66' codep=0x2214 parp=0xde66
// ================================================
// 0xde66: db 0x81 0x00 '  '

// ================================================
// 0xde68: WORD 'UNK_0xde6a' codep=0x2214 parp=0xde6a
// ================================================
// 0xde6a: db 0x82 0x00 0x14 0x22 0x04 0x00 0x14 0x22 0x00 0x00 '   "   "  '

// ================================================
// 0xde74: WORD 'UNK_0xde76' codep=0x2214 parp=0xde76
// ================================================
// 0xde76: db 0x00 0x40 ' @'

// ================================================
// 0xde78: WORD 'UNK_0xde7a' codep=0x2214 parp=0xde7a
// ================================================
// 0xde7a: db 0x00 0x04 '  '

// ================================================
// 0xde7c: WORD 'UNK_0xde7e' codep=0x2214 parp=0xde7e
// ================================================
// 0xde7e: db 0x48 0x3a 'H:'

// ================================================
// 0xde80: WORD 'UNK_0xde82' codep=0x1d29 parp=0xde82
// ================================================
// 0xde82: db 0x01 0x00 '  '

// ================================================
// 0xde84: WORD 'UNK_0xde86' codep=0x1d29 parp=0xde86
// ================================================
// 0xde86: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x0c 0x50 0x0e 0x6e 0x0e 0x32 0x30 0x37 0x34 0x92 0x0c 0xf0 0x0d 0x3d 0x0f 0x5c 0x15 0xe8 0xff 0x90 0x0e 0x32 0x0e 0xb4 0x0d 0xb4 0x0d 0x3d 0x90 0x3d 0x90 0x90 0x0e 0x90 0x0e 0x3d 0x90 0x83 0x3b 0xef 0x2a 0x90 0x16 0x4c 0x22 0x8b 0x3b 0x20 0x35 0x32 0x30 0x37 0x35 0x50 0x0e 0x72 0x0f 0x92 0x0c 0x7f 0x0e 0x50 0x0e 0x72 0x0f 0xc3 0x4b 0x72 0x0f 0x41 0x0e 0x50 0x0e 0x3d 0x0f 0x9f 0x11 0xfa 0x15 0x08 0x00 0x68 0xde 0x60 0x16 0x04 0x00 0x62 0xde 0x57 0x40 0x07 0x13 0xfa 0x15 0x3c 0x00 0x7f 0x0e 0x50 0x0e 0x72 0x0f 0x41 0x0e 0x92 0x0c 0xc6 0x11 0x41 0x0e 0xb3 0x0e 0x6a 0x6d 0x05 0x10 0x72 0x0f 0x20 0x0f 0x5d 0x17 0x64 0x00 0xd8 0x4a 0x5d 0x17 0x0a 0x00 0x46 0x12 0xfa 0x15 0x14 0x00 0x2e 0x0f 0x5d 0x17 0x10 0x00 0xd8 0x4a 0x41 0x0e 0x47 0x49 0x72 0x0f 0x6e 0xde 0x76 0x6d 0x73 0x3b 0xae 0x3f 0x50 0x0e 0x72 0x0f 0x6a 0x6d 0xd0 0x15 0x8c 0xff 0xde 0x0d 0x90 0x16 0x4c 0x22 0x8b 0x3b 0x20 0x0f 0xb8 0x15 0x00 0x00 0xc6 0x4b 0x45 0x59 0x49 0x4e 0xc3 0xa0 0x3c 0x34 0xe5 0x46 0xdf 0xc5 0x44 0x58 0x43 0x52 0xd3 0xa0 0x3c 0x38 0xe5 0x53 0xdf 0xc5 0x44 0x59 0x43 0x52 0x29 0x1d 0x3a 0x20 ':  ALLOT  P n 2074    = \     2     = =     =  ; *  L" ; 52075P r    P r  Kr A P =       h `   b W@    <  P r A     A   jm  r   ] d  J]   F     . ]    JA GIr n vms; ?P r jm        L" ;       KEYIN  <4 F  DXCR  <8 S  DYCR) : '

// ================================================
// 0xdf68: WORD 'UNK_0xdf6a' codep=0x1d29 parp=0xdf6a
// ================================================
// 0xdf6a: db 0x3a 0x20 ': '

// ================================================
// 0xdf6c: WORD 'UNK_0xdf6e' codep=0x1d29 parp=0xdf6e
// ================================================
// 0xdf6e: db 0x14 0x00 '  '

// ================================================
// 0xdf70: WORD 'UNK_0xdf72' codep=0x1d29 parp=0xdf72
// ================================================
// 0xdf72: db 0x8c 0x00 '  '

// ================================================
// 0xdf74: WORD 'UNK_0xdf76' codep=0x1d29 parp=0xdf76
// ================================================
// 0xdf76: db 0x96 0x00 '  '

// ================================================
// 0xdf78: WORD 'UNK_0xdf7a' codep=0x1d29 parp=0xdf7a
// ================================================
// 0xdf7a: db 0x28 0x00 '( '

// ================================================
// 0xdf7c: WORD 'UNK_0xdf7e' codep=0x1d29 parp=0xdf7e
// ================================================
// 0xdf7e: db 0x09 0x00 '  '

// ================================================
// 0xdf80: WORD 'UNK_0xdf82' codep=0x1d29 parp=0xdf82
// ================================================
// 0xdf82: db 0x06 0x00 '  '

// ================================================
// 0xdf84: WORD 'UNK_0xdf86' codep=0x1d29 parp=0xdf86
// ================================================
// 0xdf86: db 0x03 0x00 '  '

// ================================================
// 0xdf88: WORD 'UNK_0xdf8a' codep=0x1d29 parp=0xdf8a
// ================================================
// 0xdf8a: db 0x14 0x00 '  '

// ================================================
// 0xdf8c: WORD 'UNK_0xdf8e' codep=0x1d29 parp=0xdf8e
// ================================================
// 0xdf8e: db 0x09 0x00 '  '

// ================================================
// 0xdf90: WORD 'UNK_0xdf92' codep=0x1d29 parp=0xdf92
// ================================================
// 0xdf92: db 0x84 0xe8 0x29 0x1d 0x3a 0x20 '  ) : '

// ================================================
// 0xdf98: WORD 'UNK_0xdf9a' codep=0x1d29 parp=0xdf9a
// ================================================
// 0xdf9a: db 0x02 0x00 '  '

// ================================================
// 0xdf9c: WORD 'UNK_0xdf9e' codep=0x1d29 parp=0xdf9e
// ================================================
// 0xdf9e: db 0x99 0xe8 '  '

// ================================================
// 0xdfa0: WORD 'UNK_0xdfa2' codep=0x1d29 parp=0xdfa2
// ================================================
// 0xdfa2: db 0x0b 0x00 '  '

// ================================================
// 0xdfa4: WORD 'UNK_0xdfa6' codep=0x1d29 parp=0xdfa6
// ================================================
// 0xdfa6: db 0x3a 0x20 ': '

// ================================================
// 0xdfa8: WORD 'UNK_0xdfaa' codep=0x2214 parp=0xdfaa
// ================================================
// 0xdfaa: db 0x0b 0x00 '  '

// ================================================
// 0xdfac: WORD 'UNK_0xdfae' codep=0x2214 parp=0xdfae
// ================================================
// 0xdfae: db 0x12 0x00 '  '

// ================================================
// 0xdfb0: WORD 'HOST' codep=0x5275 parp=0xdfb9
// ================================================
// 0xdfb9: db 0xa8 0x2c 0x67 0x45 0xef 0x09 0x31 0x5d 0xe6 0x55 0xd8 0x55 0x56 0x56 0x4a 0x58 0x45 0x52 0xec 0x84 0xa3 0x5d ' ,gE  1] U UVVJXER   ]'

// ================================================
// 0xdfcf: WORD 'VECTOR' codep=0x5275 parp=0xdfda
// ================================================
// 0xdfda: db 0xf2 0x55 0xff 0x55 0x9d 0x58 0x92 0x58 0x87 0x58 0x7c 0x58 0x6e 0x58 0x63 0x58 0x3a 0x56 0x58 0x46 0xe6 0x07 0xfa 0x07 0x62 0x6c 0x88 0x01 0x8a 0x01 0x01 0x62 0x03 0x62 0xaa 0x58 ' U U X X X|XnXcX:VXF    bl     b b X'

// ================================================
// 0xdffe: WORD 'UNK_0xe000' codep=0x1d29 parp=0xe000
// ================================================
// 0xe000: db 0x00 0x02 0x01 0x0b 0x04 0x08 0x05 0x09 0x06 0x0a 0x07 0x03 0x0c 0x0e 0x0d 0x0f '                '

// ================================================
// 0xe010: WORD 'UNK_0xe012' codep=0x224c parp=0xe012
// ================================================

void UNK_0xe012() // UNK_0xe012
{
  Push(0xf000);
  Push(0xc000);
  LC_at_(); // LC@
  Push(0x0021);
  _eq_(); // =
}


// ================================================
// 0xe024: WORD 'UNK_0xe026' codep=0x224c parp=0xe026
// ================================================

void UNK_0xe026() // UNK_0xe026
{
  Push(0x0010);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0010);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x03da);
  P_ex_(); // P!
  Push(i); // I
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(0x03de);
  P_ex_(); // P!
  i++;
  } while(i<imax); // (LOOP) 0xffe2

  Pop(); // DROP
  Push(cc__3); // 3
  Push(0x03da);
  P_ex_(); // P!
}


// ================================================
// 0xe05a: WORD 'UNK_0xe05c' codep=0x224c parp=0xe05c
// ================================================

void UNK_0xe05c() // UNK_0xe05c
{
  UNK_0xe012(); // UNK_0xe012
  if (Pop() == 0) return;
  Push(pp_UNK_0xe000); // UNK_0xe000
  UNK_0xe026(); // UNK_0xe026
}

// 0xe068: db 0x29 0x1d 0x3a 0x20 ') : '

// ================================================
// 0xe06c: WORD 'UNK_0xe06e' codep=0x1d29 parp=0xe06e
// ================================================
// 0xe06e: db 0x20 0x00 0x4c 0x22 0x68 0xe0 0x76 0x6d 0x6c 0xe0 0xc5 0x6d 0x90 0x16 0x4c 0x22 0x68 0xe0 0xae 0x0b 0x6c 0xe0 0xae 0x0b 0x72 0x0f 0xf2 0x0e 0x41 0x0e 0x6c 0xe0 0x83 0x6d 0xea 0x6d 0x90 0x16 '  L"h vml  m  L"h   l   r   A l  m m  '

// ================================================
// 0xe094: WORD 'UNK_0xe096' codep=0x224c parp=0xe096
// ================================================

void UNK_0xe096() // UNK_0xe096
{
  Push(cc_MUSSEG); // MUSSEG
  SWAP(); // SWAP
}


// ================================================
// 0xe09c: WORD 'UNK_0xe09e' codep=0x224c parp=0xe09e
// ================================================

void UNK_0xe09e() // UNK_0xe09e
{
  UNK_0xe096(); // UNK_0xe096
  L_ex_(); // L!
}


// ================================================
// 0xe0a4: WORD 'UNK_0xe0a6' codep=0x224c parp=0xe0a6
// ================================================

void UNK_0xe0a6() // UNK_0xe0a6
{
  UNK_0xe096(); // UNK_0xe096
  L_at_(); // L@
}


// ================================================
// 0xe0ac: WORD 'UNK_0xe0ae' codep=0x224c parp=0xe0ae
// ================================================

void UNK_0xe0ae() // UNK_0xe0ae
{
  UNK_0xe096(); // UNK_0xe096
  LC_ex_(); // LC!
}


// ================================================
// 0xe0b4: WORD 'UNK_0xe0b6' codep=0x224c parp=0xe0b6
// ================================================

void UNK_0xe0b6() // UNK_0xe0b6
{
  Push(0x001c);
  _ro__ex_OLD_rc_(); // (!OLD)
  DUP(); // DUP
  Push(0x000e);
  UNK_0xe0a6(); // UNK_0xe0a6
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(2); // 2
  UNK_0xe0ae(); // UNK_0xe0ae
  Push(0); // 0
  UNK_0xe0a6(); // UNK_0xe0a6
  _gt_R(); // >R
  Push(h); // I
  UNK_0xe09e(); // UNK_0xe09e
  R_gt_(); // R>
  Push(Pop()+2); // 2+
  UNK_0xe09e(); // UNK_0xe09e
  Push(cc_MUSSEG); // MUSSEG
  Push(0x000e);
  UNK_0xe0a6(); // UNK_0xe0a6
  Push(0x001c);
  _ro__ex_SET_rc_(); // (!SET)
  return;

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe0f8: WORD 'UNK_0xe0fa' codep=0x224c parp=0xe0fa
// ================================================

void UNK_0xe0fa() // UNK_0xe0fa
{
  _at_DS(); // @DS
  Push(0x1000);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe104: WORD 'UNK_0xe106' codep=0x1d29 parp=0xe106
// ================================================
// 0xe106: db 0xfe 0x11 '  '

// ================================================
// 0xe108: WORD 'UNK_0xe10a' codep=0x1d29 parp=0xe10a
// ================================================
// 0xe10a: db 0x00 0x00 '  '

// ================================================
// 0xe10c: WORD '?HUB' codep=0x224c parp=0xe115
// ================================================

void _ask_HUB() // ?HUB
{
  Push(pp_UNK_0xe10a); // UNK_0xe10a
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) goto label1;
  ON(); // ON
  return;

  label1:
  OFF(); // OFF
}


// ================================================
// 0xe12d: WORD 'SETHID' codep=0x224c parp=0xe138
// ================================================

void SETHID() // SETHID
{
  Push(pp_XBUF_minus_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe106); // UNK_0xe106
  _ex_(); // !
}


// ================================================
// 0xe142: WORD 'SETDIS' codep=0x224c parp=0xe14d
// ================================================

void SETDIS() // SETDIS
{
  UNK_0xe0fa(); // UNK_0xe0fa
  Push(pp_UNK_0xe106); // UNK_0xe106
  _ex_(); // !
}


// ================================================
// 0xe155: WORD 'SCR>CG' codep=0x224c parp=0xe160
// ================================================

void SCR_gt_CG() // SCR>CG
{
  Push(cc__minus_1); // -1
  Push(0x00c8);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0050);
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(Pop()+1); // 1+
  DUP(); // DUP
  Push(j); // I
  Push(Pop()*2); // 2*
  Push(i); // J
  L_at_PIXEL(); // L@PIXEL
  E_gt_CGA(); // E>CGA
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(Pop()<<4); // 16*
  Push(j); // I
  Push(Pop()*2); // 2*
  Push(Pop()+1); // 1+
  Push(i); // J
  L_at_PIXEL(); // L@PIXEL
  E_gt_CGA(); // E>CGA
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe106); // UNK_0xe106
  Push(Read16(Pop())); // @
  ROT(); // ROT
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffcc

  i++;
  } while(i<imax); // (LOOP) 0xffc0

  Pop(); // DROP
}


// ================================================
// 0xe1b0: WORD 'UNK_0xe1b2' codep=0x224c parp=0xe1b2
// ================================================

void UNK_0xe1b2() // UNK_0xe1b2
{
  Push(pp_UNK_0xe06e); // UNK_0xe06e
  _ex_(); // !
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  _ex_(); // !
}


// ================================================
// 0xe1bc: WORD 'UNK_0xe1be' codep=0x224c parp=0xe1be
// ================================================

void UNK_0xe1be() // UNK_0xe1be
{
  Push(pp_UNK_0xdf72); // UNK_0xdf72
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf6e); // UNK_0xdf6e
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_UNK_0xdf82); // UNK_0xdf82
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(pp_UNK_0xdf8a); // UNK_0xdf8a
  _ex_(); // !
}


// ================================================
// 0xe1d4: WORD 'UNK_0xe1d6' codep=0x224c parp=0xe1d6
// ================================================

void UNK_0xe1d6() // UNK_0xe1d6
{
  Push(pp_UNK_0xdf76); // UNK_0xdf76
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf7a); // UNK_0xdf7a
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_UNK_0xdf7e); // UNK_0xdf7e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf86); // UNK_0xdf86
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  _slash_(); // /
  Push(pp_UNK_0xdf8e); // UNK_0xdf8e
  _ex_(); // !
}


// ================================================
// 0xe1f2: WORD 'UNK_0xe1f4' codep=0x224c parp=0xe1f4
// ================================================

void UNK_0xe1f4() // UNK_0xe1f4
{

  label1:
  DUP(); // DUP
  C_at_(); // C@
  Push(cc_BL); // BL
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(Pop()-1); // 1-
  goto label1;
}


// ================================================
// 0xe20a: WORD 'UNK_0xe20c' codep=0x224c parp=0xe20c
// ================================================

void UNK_0xe20c() // UNK_0xe20c
{
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  _ex_(); // !
  Push(1); // 1
  Push(pp_UNK_0xdf9a); // UNK_0xdf9a
  _ex_(); // !

  label2:
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf8a); // UNK_0xdf8a
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe06e); // UNK_0xe06e
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  UNK_0xe1f4(); // UNK_0xe1f4
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  _ex_(); // !
  Push(1); // 1
  Push(pp_UNK_0xdf9a); // UNK_0xdf9a
  _plus__ex_(); // +!
  goto label2;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe24c: WORD 'UNK_0xe24e' codep=0x224c parp=0xe24e
// ================================================

void UNK_0xe24e() // UNK_0xe24e
{
  UNK_0xe20c(); // UNK_0xe20c
  Push(pp_UNK_0xdf8e); // UNK_0xdf8e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf9a); // UNK_0xdf9a
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(Pop()>>1); // 2/
  Push(pp_UNK_0xdf7e); // UNK_0xdf7e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf86); // UNK_0xdf86
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdf76); // UNK_0xdf76
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _ex_(); // !
}


// ================================================
// 0xe276: WORD 'UNK_0xe278' codep=0x224c parp=0xe278
// ================================================

void UNK_0xe278() // UNK_0xe278
{
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(0x0384);
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  Push(0); // 0
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfa2); // UNK_0xdfa2
  Push(Read16(Pop())); // @
  TYPE(); // TYPE
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  Push(pp_UNK_0xdf72); // UNK_0xdf72
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf6e); // UNK_0xdf6e
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(Pop()>>1); // 2/
  Push(-Pop()); // NEGATE
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _ex_(); // !
}


// ================================================
// 0xe2b4: WORD 'UNK_0xe2b6' codep=0x224c parp=0xe2b6
// ================================================

void UNK_0xe2b6() // UNK_0xe2b6
{
  UNK_0xe278(); // UNK_0xe278
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfa2); // UNK_0xdfa2
  Push(Read16(Pop())); // @
  TYPE(); // TYPE
}


// ================================================
// 0xe2c4: WORD 'UNK_0xe2c6' codep=0x224c parp=0xe2c6
// ================================================

void UNK_0xe2c6() // UNK_0xe2c6
{
  UNK_0xe24e(); // UNK_0xe24e
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  _ex_(); // !

  label2:
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf8a); // UNK_0xdf8a
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe06e); // UNK_0xe06e
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  UNK_0xe1f4(); // UNK_0xe1f4
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_UNK_0xdfa2); // UNK_0xdfa2
  _ex_(); // !
  UNK_0xe2b6(); // UNK_0xe2b6
  Push(pp_UNK_0xdf7e); // UNK_0xdf7e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf86); // UNK_0xdf86
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(-Pop()); // NEGATE
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  Push(pp_UNK_0xdfa2); // UNK_0xdfa2
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  _plus__ex_(); // +!
  goto label2;

  label1:
  Pop(); // DROP
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe06e); // UNK_0xe06e
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(pp_UNK_0xdfa2); // UNK_0xdfa2
  _ex_(); // !
  UNK_0xe2b6(); // UNK_0xe2b6
}


// ================================================
// 0xe332: WORD 'UNK_0xe334' codep=0x224c parp=0xe334
// ================================================

void UNK_0xe334() // UNK_0xe334
{
  UNK_0xe1b2(); // UNK_0xe1b2
  UNK_0xe1be(); // UNK_0xe1be
  UNK_0xe1d6(); // UNK_0xe1d6
  UNK_0xe2c6(); // UNK_0xe2c6
}


// ================================================
// 0xe33e: WORD 'UNK_0xe340' codep=0x224c parp=0xe340
// ================================================

void UNK_0xe340() // UNK_0xe340
{
  Push(0x0014);
  Push(pp_UNK_0xdf6e); // UNK_0xdf6e
  _ex_(); // !
  Push(0x008c);
  Push(pp_UNK_0xdf72); // UNK_0xdf72
  _ex_(); // !
  Push(0x0028);
  Push(pp_UNK_0xdf7a); // UNK_0xdf7a
  _ex_(); // !
  Push(0x0096);
  Push(pp_UNK_0xdf76); // UNK_0xdf76
  _ex_(); // !
  Push(cc__3); // 3
  Push(pp_UNK_0xdf86); // UNK_0xdf86
  _ex_(); // !
  Push(cc__9); // 9
  Push(pp_UNK_0xdf7e); // UNK_0xdf7e
  _ex_(); // !
  Push(cc__6); // 6
  Push(pp_UNK_0xdf82); // UNK_0xdf82
  _ex_(); // !
}


// ================================================
// 0xe374: WORD 'UNK_0xe376' codep=0x224c parp=0xe376
// ================================================

void UNK_0xe376() // UNK_0xe376
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(0x0096);
  Push(0x0014);
  Push(0x0028);
  Push(0x0096);
  BLACK(); // BLACK
  POLY_minus_WI(); // POLY-WI
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe392: WORD 'UNK_0xe394' codep=0x224c parp=0xe394
// ================================================

void UNK_0xe394() // UNK_0xe394
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(0x0011);
  Push(0x0014);
  Push(cc__5); // 5
  Push(0x009f);
  BLACK(); // BLACK
  POLY_minus_WI(); // POLY-WI
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe3ae: WORD 'UNK_0xe3b0' codep=0x224c parp=0xe3b0
// ================================================

void UNK_0xe3b0() // UNK_0xe3b0
{
  UNK_0xe340(); // UNK_0xe340
  UNK_0xe376(); // UNK_0xe376
  _gt_2FONT(); // >2FONT
  UNK_0xe334(); // UNK_0xe334
}


// ================================================
// 0xe3ba: WORD 'UNK_0xe3bc' codep=0x224c parp=0xe3bc
// ================================================

void UNK_0xe3bc() // UNK_0xe3bc
{
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(0x009b);
  Push(0x000a);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x000a);
  Push(0x00a0);
  Push(0x0096);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x00a0);
  Push(0x009b);
  Push(0x009b);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x009b);
  Push(0x009b);
  Push(0x0019);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x0019);
  Push(0x0096);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x0014);
  Push(0x0014);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0014);
  Push(0x0014);
  Push(0x0011);
  Push(0x0017);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x0017);
  Push(0x0011);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x001e);
  Push(0x000e);
  Push(0x0021);
  LLINE(); // LLINE
  Push(0x000e);
  Push(0x0021);
  Push(cc__8); // 8
  Push(0x0021);
  LLINE(); // LLINE
  Push(cc__8); // 8
  Push(0x0021);
  Push(cc__5); // 5
  Push(0x0024);
  LLINE(); // LLINE
  Push(cc__5); // 5
  Push(0x0024);
  Push(cc__5); // 5
  Push(0x009b);
  LLINE(); // LLINE
  Push(cc__5); // 5
  Push(0x001d);
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _dot_1LOGO(); // .1LOGO
}

// 0xe49a: db 0x4c 0x22 0x25 0x95 0x5d 0x17 0x14 0x00 0x5d 0x17 0x11 0x00 0x2b 0xa0 0x92 0xe3 0xdc 0x1b 0x19 0x50 0x52 0x45 0x53 0x53 0x20 0x41 0x4e 0x59 0x20 0x4b 0x45 0x59 0x20 0x54 0x4f 0x20 0x43 0x4f 0x4e 0x54 0x49 0x4e 0x55 0x45 0xa2 0x94 0xa9 0x48 0x32 0x0e 0x90 0x16 'L"% ]   ]   +      PRESS ANY KEY TO CONTINUE   H2   '

// ================================================
// 0xe4ce: WORD 'UNK_0xe4d0' codep=0x224c parp=0xe4d0
// ================================================

void UNK_0xe4d0() // UNK_0xe4d0
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe3bc(); // UNK_0xe3bc
  BEEPOFF(); // BEEPOFF
  _gt_3FONT(); // >3FONT
  Push(0x002e);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("GAME", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("OPTIONS", 7); // (.")
  _gt_2FONT(); // >2FONT
  Push(0x0027);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("SELECT AN OPTION", 16); // (.")
  Push(0x0022);
  Push(0x0078);
  POS_dot_(); // POS.
  PRINT("1. SAVE GAME", 12); // (.")
  Push(0x0022);
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("2. RESUME GAME", 14); // (.")
  Push(0x0022);
  Push(0x0050);
  POS_dot_(); // POS.
  PRINT("3. CHANGE DISPLAY MODE", 22); // (.")
  Push(0x0022);
  Push(0x0037);
  POS_dot_(); // POS.
  PRINT("9. END GAME UNSAVED", 19); // (.")
  _gt_0FONT(); // >0FONT
}

// 0xe597: db 0x4c 0x22 0x9a 0x95 0x5d 0x17 0x35 0x00 0x5d 0x17 0xab 0x00 0x2b 0xa0 0xdc 0x1b 0x04 0x53 0x41 0x56 0x45 0x5d 0x17 0x0a 0x00 0x6c 0x58 0x83 0x6d 0xdc 0x1b 0x04 0x47 0x41 0x4d 0x45 0xa2 0x94 0x90 0x16 'L"  ] 5 ]   +    SAVE]   lX m   GAME    '

// ================================================
// 0xe5bf: WORD 'UNK_0xe5c1' codep=0x224c parp=0xe5c1
// ================================================

void UNK_0xe5c1() // UNK_0xe5c1
{
  _gt_3FONT(); // >3FONT
  Push(0x0035);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("LOAD", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("GAME", 4); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xe5e7: WORD 'UNK_0xe5e9' codep=0x224c parp=0xe5e9
// ================================================

void UNK_0xe5e9() // UNK_0xe5e9
{
  _gt_2FONT(); // >2FONT
  Push(0x001e);
  Push(0x0011);
  POS_dot_(); // POS.
  UNK_0xe394(); // UNK_0xe394
  PRINT("PRESS ANY KEY TO EXIT", 21); // (.")
  _gt_0FONT(); // >0FONT
  KEY(); // KEY
  Pop(); // DROP
  PAGE(); // PAGE
  BYE(); // BYE
}


// ================================================
// 0xe61b: WORD 'UNK_0xe61d' codep=0x224c parp=0xe61d
// ================================================

void UNK_0xe61d() // UNK_0xe61d
{
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _i_KEY(); // 'KEY
  DUP(); // DUP
  Push(pp_UNK_0xdfa6); // UNK_0xdfa6
  _ex_(); // !
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe63d: WORD 'UNK_0xe63f' codep=0x224c parp=0xe63f
// ================================================

void UNK_0xe63f() // UNK_0xe63f
{
  Push(pp_TIMESTA); // TIMESTA
  _ex_(); // !
}


// ================================================
// 0xe645: WORD 'UNK_0xe647' codep=0x224c parp=0xe647
// ================================================

void UNK_0xe647() // UNK_0xe647
{
  Push(pp_TIMESTA); // TIMESTA
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe64d: WORD 'UNK_0xe64f' codep=0x224c parp=0xe64f
// ================================================

void UNK_0xe64f() // UNK_0xe64f
{
  DUP(); // DUP
  _c_TIMEST(); // :TIMEST
  _ex_(); // !
}


// ================================================
// 0xe657: WORD 'UNK_0xe659' codep=0x224c parp=0xe659
// ================================================

void UNK_0xe659() // UNK_0xe659
{
  TIME(); // TIME
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(2); // 2

  label1:
  UNK_0xe63f(); // UNK_0xe63f
}


// ================================================
// 0xe66d: WORD 'UNK_0xe66f' codep=0x224c parp=0xe66f
// ================================================

void UNK_0xe66f() // UNK_0xe66f
{
  UNK_0xe647(); // UNK_0xe647
  UNK_0xe659(); // UNK_0xe659
  UNK_0xe647(); // UNK_0xe647
  SWAP(); // SWAP
  UNK_0xe63f(); // UNK_0xe63f
  MOUNTA(); // MOUNTA
  UNK_0xe64f(); // UNK_0xe64f
  MOUNTB(); // MOUNTB
  UNK_0xe64f(); // UNK_0xe64f
  UNK_0xe63f(); // UNK_0xe63f
}

// 0xe685: db 0x4c 0x22 0xf6 0x3b 0xae 0x0b 0x5d 0x17 0xf4 0x01 0x92 0x0f 0x90 0x16 0x4c 0x22 0x85 0xe6 0x5d 0x17 0x32 0x00 0x72 0x0f 0x70 0xe0 0xbf 0x8f 0xba 0xe3 0x39 0x3f 0x1b 0x50 0x4c 0x41 0x43 0x45 0x20 0x44 0x49 0x53 0x4b 0x20 0x43 0x4f 0x4e 0x54 0x41 0x49 0x4e 0x49 0x4e 0x47 0x20 0x46 0x49 0x4c 0x45 0x20 0x7c 0xe0 0x22 0x41 0x9b 0x3b 0x8e 0x27 0x7c 0xe0 0x5d 0x17 0x2e 0x00 0x85 0xe6 0x6a 0x6d 0x32 0x41 0x85 0xe6 0xe7 0x0f 0x73 0x3b 0xea 0x6d 0x85 0xe6 0x7b 0x3b 0x7c 0xe0 0x39 0x3f 0x06 0x20 0x49 0x4e 0x54 0x4f 0x20 0x7c 0xe0 0x14 0x41 0x92 0x0c 0xc8 0x0d 0xfa 0x15 0x27 0x00 0x39 0x3f 0x06 0x44 0x52 0x49 0x56 0x45 0x20 0x85 0xe6 0xf2 0x0e 0xea 0x6d 0x5d 0x17 0x40 0x00 0x72 0x0f 0x85 0xe6 0x93 0x3b 0x72 0x0f 0x6a 0x6d 0x85 0xe6 0x93 0x3b 0x60 0x16 0x0e 0x00 0x39 0x3f 0x09 0x41 0x4e 0x59 0x20 0x44 0x52 0x49 0x56 0x45 0x7c 0xe0 0x68 0xe0 0xae 0x0b 0x6c 0xe0 0xae 0x0b 0xae 0xe3 0x9a 0xe4 0x90 0x16 0x4c 0x22 0x85 0xe6 0x5d 0x17 0x32 0x00 0x72 0x0f 0x70 0xe0 0xbf 0x8f 0xba 0xe3 0x39 0x3f 0x22 0x50 0x4c 0x41 0x43 0x45 0x20 0x44 0x49 0x53 0x4b 0x20 0x43 0x4f 0x4e 0x54 0x41 0x49 0x4e 0x49 0x4e 0x47 0x20 0x54 0x48 0x45 0x20 0x43 0x4f 0x52 0x52 0x45 0x43 0x54 0x20 0x7c 0xe0 0x7c 0xe0 0x39 0x3f 0x05 0x20 0x46 0x49 0x4c 0x45 0x7c 0xe0 0x68 0xe0 0xae 0x0b 0x6c 0xe0 0xae 0x0b 0xae 0xe3 0x9a 0xe4 0x90 0x16 'L" ;  ]       L"  ] 2 r p     9? PLACE DISK CONTAINING FILE | "A ; '| ] .   jm2A    s; m  {;| 9?  INTO |  A      ' 9? DRIVE      m] @ r    ;r jm   ;`   9? ANY DRIVE| h   l         L"  ] 2 r p     9?"PLACE DISK CONTAINING THE CORRECT | | 9?  FILE| h   l         '

// ================================================
// 0xe78a: WORD 'UNK_0xe78c' codep=0x224c parp=0xe78c
// ================================================

void UNK_0xe78c() // UNK_0xe78c
{
  UNK_0xe394(); // UNK_0xe394
  BEEP(); // BEEP

  UNK_0x3f39("SAVED GAME INTEGRITY ERROR.");
  UNK_0xe3b0(); // UNK_0xe3b0
  UNK_0xe5e9(); // UNK_0xe5e9
}


// ================================================
// 0xe7b4: WORD 'UNK_0xe7b6' codep=0x224c parp=0xe7b6
// ================================================

void UNK_0xe7b6() // UNK_0xe7b6
{
  _c_SAVE(); // :SAVE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xe394(); // UNK_0xe394
  BEEP(); // BEEP

  UNK_0x3f39("GAME IN PROGRESS BUT NOT SAVED.");
  UNK_0xe3b0(); // UNK_0xe3b0
  UNK_0xe5e9(); // UNK_0xe5e9
}


// ================================================
// 0xe7ec: WORD 'UNK_0xe7ee' codep=0x224c parp=0xe7ee
// ================================================

void UNK_0xe7ee() // UNK_0xe7ee
{
  Push(0x00ff);
  Push(pp_DERROR); // DERROR
  _ex_(); // !
  _at_DS(); // @DS
  PAD(); // PAD
  Push(0x0032);
  Push(Pop() + Pop()); // +
  Push(pp_DTA); // DTA
  _2_ex_(); // 2!
  DOS_minus_DTA(); // DOS-DTA
  Push(0); // 0
  RELREC(); // RELREC
  _ex_(); // !
  Push(1); // 1
  RECSIZE(); // RECSIZE
  _ex_(); // !
  READ_minus_RANDOM(); // READ-RANDOM
  WRITE_minus_RANDOM(); // WRITE-RANDOM
  Pop(); Pop();// 2DROP
  INIT(); // INIT
  Push(pp_DERROR); // DERROR
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xe822: WORD 'UNK_0xe824' codep=0x224c parp=0xe824
// ================================================

void UNK_0xe824() // UNK_0xe824
{
  CTINIT(); // CTINIT

  UNK_0x3f39("MUST PLAY ON A WRITABLE COPY.");
  _dot_TTY(); // .TTY

  UNK_0x3f39("PRESS ANY KEY TO EXIT.");
  _dot_TTY(); // .TTY
  KEY(); // KEY
  Pop(); // DROP
  BYE(); // BYE
}


// ================================================
// 0xe86b: WORD 'UNK_0xe86d' codep=0x224c parp=0xe86d
// ================================================

void UNK_0xe86d() // UNK_0xe86d
{
  Push(0xae85);
  Push(pp_ASKMOUNT); // ASKMOUNT
  _ex_(); // !
  Push(0xae67);
  Push(pp__i_VERSIO); // 'VERSIO
  _ex_(); // !
}


// ================================================
// 0xe87f: WORD 'UNK_0xe881' codep=0x224c parp=0xe881
// ================================================

void UNK_0xe881() // UNK_0xe881
{

  UNK_0x3f39("RESUMING THE GAME IN PROGRESS...");
  UNK_0xe3b0(); // UNK_0xe3b0
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe8ae: WORD 'UNK_0xe8b0' codep=0x224c parp=0xe8b0
// ================================================

void UNK_0xe8b0() // UNK_0xe8b0
{
  if (Pop() == 0) return;
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe8b8: WORD 'SCR>EG' codep=0x224c parp=0xe8c3
// ================================================

void SCR_gt_EG() // SCR>EG
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(cc__minus_1); // -1
  Push(0x00c8);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0050);
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xe106); // UNK_0xe106
  Push(Read16(Pop())); // @
  OVER(); // OVER
  LC_at_(); // LC@
  DUP(); // DUP
  Push(Pop()>>4); // 16/
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  C_gt_EGA(); // C>EGA
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  Push(pp_COLOR); // COLOR
  _st__ex__gt_(); // <!>
  SETCOLO(); // SETCOLO
  Push(j); // I
  Push(Pop()*2); // 2*
  Push(i); // J
  PLOT(); // PLOT

  label1:
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  C_gt_EGA(); // C>EGA
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  Push(pp_COLOR); // COLOR
  _st__ex__gt_(); // <!>
  SETCOLO(); // SETCOLO
  Push(j); // I
  Push(Pop()*2); // 2*
  Push(Pop()+1); // 1+
  Push(i); // J
  PLOT(); // PLOT

  label2:
  j++;
  } while(j<jmax); // (LOOP) 0xffb6

  i++;
  } while(i<imax); // (LOOP) 0xffaa

  Pop(); // DROP
  Push(pp_XORMODE); // XORMODE
  _ex_(); // !
}


// ================================================
// 0xe939: WORD 'UNK_0xe93b' codep=0x224c parp=0xe93b
// ================================================

void UNK_0xe93b() // UNK_0xe93b
{
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SETDIS(); // SETDIS
  SCR_gt_EG(); // SCR>EG
  SCR_minus_RES(); // SCR-RES
  _gt_DISPLA(); // >DISPLA
  _ask_HUB(); // ?HUB
  Push(pp_UNK_0xe10a); // UNK_0xe10a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  SETHID(); // SETHID
  SCR_gt_EG(); // SCR>EG

  label2:
  return;

  label1:
  UNK_0xe0fa(); // UNK_0xe0fa
  Push(1); // 1
  _v_DISPLA(); // |DISPLA
}


// ================================================
// 0xe965: WORD 'UNK_0xe967' codep=0x224c parp=0xe967
// ================================================

void UNK_0xe967() // UNK_0xe967
{
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SETDIS(); // SETDIS
  SCR_gt_CG(); // SCR>CG
  _ask_HUB(); // ?HUB
  Push(pp_UNK_0xe10a); // UNK_0xe10a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  _gt_HIDDEN(); // >HIDDEN
  SETHID(); // SETHID
  SCR_gt_CG(); // SCR>CG

  label2:
  return;

  label1:
  UNK_0xe0fa(); // UNK_0xe0fa
  Push(0); // 0
  _v_DISPLA(); // |DISPLA
}


// ================================================
// 0xe98f: WORD 'UNK_0xe991' codep=0x224c parp=0xe991
// ================================================

void UNK_0xe991() // UNK_0xe991
{
  Push(pp_ESC_minus_EN); // ESC-EN
  OFF(); // OFF
}


// ================================================
// 0xe997: WORD 'UNK_0xe999' codep=0x224c parp=0xe999
// ================================================

void UNK_0xe999() // UNK_0xe999
{
  Push(pp_ESC_minus_EN); // ESC-EN
  ON(); // ON
}


// ================================================
// 0xe99f: WORD 'UNK_0xe9a1' codep=0x224c parp=0xe9a1
// ================================================

void UNK_0xe9a1() // UNK_0xe9a1
{
  Push(pp__n_CACHE); // #CACHE
  OFF(); // OFF
  AUTO_minus_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xe9a9: WORD 'UNK_0xe9ab' codep=0x224c parp=0xe9ab
// ================================================

void UNK_0xe9ab() // UNK_0xe9ab
{
  Push(pp__bo__n_CACHE); // [#CACHE
  Push(Read16(Pop())); // @
  Push(pp__n_CACHE); // #CACHE
  _ex_(); // !
  AUTO_minus_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xe9b7: WORD 'UNK_0xe9b9' codep=0x224c parp=0xe9b9
// ================================================

void UNK_0xe9b9() // UNK_0xe9b9
{
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  DUP(); // DUP
  Push(i); // I
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  Push(pp_UNK_0xdf6a); // UNK_0xdf6a
  _plus__ex_(); // +!
  Push(1); // 1
  i += Pop();
  } while(i<imax); // (/LOOP) 0xfff0

  Pop(); // DROP
}


// ================================================
// 0xe9d3: WORD 'UNK_0xe9d5' codep=0x224c parp=0xe9d5
// ================================================

void UNK_0xe9d5() // UNK_0xe9d5
{
  Push(0xe695);
  Push(pp_ASKMOUNT); // ASKMOUNT
  _ex_(); // !
  Push(0xe73b);
  Push(pp__i_VERSIO); // 'VERSIO
  _ex_(); // !
}


// ================================================
// 0xe9e7: WORD 'UNK_0xe9e9' codep=0x224c parp=0xe9e9
// ================================================

void UNK_0xe9e9() // UNK_0xe9e9
{
  UNK_0xe0fa(); // UNK_0xe0fa
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe9f1: WORD 'UNK_0xe9f3' codep=0x224c parp=0xe9f3
// ================================================

void UNK_0xe9f3() // UNK_0xe9f3
{
  DUP(); // DUP
  UNK_0xe9e9(); // UNK_0xe9e9
  if (Pop() == 0) goto label1;
  _at_DS(); // @DS
  _minus_(); // -
  Push(1); // 1
  return;

  label1:
  Push(pp_LFSEG); // LFSEG
  Push(Read16(Pop())); // @
  _minus_(); // -
  Push(0); // 0
}


// ================================================
// 0xea0f: WORD 'UNK_0xea11' codep=0x224c parp=0xea11
// ================================================

void UNK_0xea11() // UNK_0xea11
{
  if (Pop() == 0) goto label1;
  _at_DS(); // @DS
  Push(Pop() + Pop()); // +
  return;

  label1:
  Push(pp_LFSEG); // LFSEG
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xea25: WORD 'UNK_0xea27' codep=0x224c parp=0xea27
// ================================================

void UNK_0xea27() // UNK_0xea27
{
  Push(pp_BUF_minus_SEG); // BUF-SEG
  Push(Read16(Pop())); // @
  Push(pp_DBUF_minus_SE); // DBUF-SE
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(pp_BLTSEG); // BLTSEG
  Push(Read16(Pop())); // @
  UNK_0xe9f3(); // UNK_0xe9f3
  Push(pp__3DSEG); // 3DSEG
  Push(Read16(Pop())); // @
  UNK_0xe9f3(); // UNK_0xe9f3
  Push(cc_UNK_0xdfae); // UNK_0xdfae
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  VECTOR(); // VECTOR
  Push(Read16(Pop())); // @
  i++;
  } while(i<imax); // (LOOP) 0xfff8

}


// ================================================
// 0xea4f: WORD 'UNK_0xea51' codep=0x224c parp=0xea51
// ================================================

void UNK_0xea51() // UNK_0xea51
{
  Push(0); // 0
  Push(cc_UNK_0xdfae); // UNK_0xdfae
  Push(Pop()-1); // 1-

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  VECTOR(); // VECTOR
  _ex_(); // !
  Push(cc__minus_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff6

  UNK_0xea11(); // UNK_0xea11
  Push(pp__3DSEG); // 3DSEG
  _ex_(); // !
  UNK_0xea11(); // UNK_0xea11
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  if (Pop() == 0) goto label1;
  Push(pp_DBUF_minus_SE); // DBUF-SE
  goto label2;

  label1:
  Push(pp_HBUF_minus_SE); // HBUF-SE

  label2:
  Push(Read16(Pop())); // @
  Push(pp_BUF_minus_SEG); // BUF-SEG
  _ex_(); // !
}


// ================================================
// 0xea85: WORD 'UNK_0xea87' codep=0x224c parp=0xea87
// ================================================

void UNK_0xea87() // UNK_0xea87
{
  UNK_0xe394(); // UNK_0xe394

  UNK_0x3f39("LOADING GAME IN PROGRESS...");
  UNK_0xe3b0(); // UNK_0xe3b0
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xeac5: WORD 'UNK_0xeac7' codep=0x224c parp=0xeac7
// ================================================

void UNK_0xeac7() // UNK_0xeac7
{
  UNK_0xe394(); // UNK_0xe394

  UNK_0x3f39("...GAME LOAD COMPLETE.");
  UNK_0xe3b0(); // UNK_0xe3b0
  Push(0x05dc);
  MS(); // MS
}

// 0xeaec: db 0x4c 0x22 0x92 0xe3 0x39 0x3f 0x0e 0x53 0x41 0x56 0x49 0x4e 0x47 0x20 0x47 0x41 0x4d 0x45 0x2e 0x2e 0x2e 0xae 0xe3 0x5d 0x17 0x37 0x00 0x5d 0x17 0x11 0x00 0x2b 0xa0 0xdc 0x1b 0x0b 0x50 0x4c 0x45 0x41 0x53 0x45 0x20 0x57 0x41 0x49 0x54 0xa2 0x94 0x90 0x16 0x4c 0x22 0x92 0xe3 0x39 0x3f 0x13 0x47 0x41 0x4d 0x45 0x20 0x53 0x41 0x56 0x45 0x20 0x43 0x4f 0x4d 0x50 0x4c 0x45 0x54 0x45 0x2e 0xae 0xe3 0xe7 0xe5 0x90 0x16 'L"  9? SAVING GAME...  ] 7 ]   +    PLEASE WAIT    L"  9? GAME SAVE COMPLETE.      '

// ================================================
// 0xeb3f: WORD 'PRMSAV' codep=0xeb4a parp=0xeb4a
// ================================================
// 0xeb4a: pop    bx
// 0xeb4b: mov    [bx],sp
// 0xeb4d: inc    bx
// 0xeb4e: inc    bx
// 0xeb4f: push   si
// 0xeb50: push   di
// 0xeb51: mov    di,bx
// 0xeb53: mov    si,[078C]
// 0xeb57: sub    si,03E8
// 0xeb5b: mov    cx,03E8
// 0xeb5e: repz   
// 0xeb5f: movsb
// 0xeb60: pop    di
// 0xeb61: pop    si
// 0xeb62: lodsw
// 0xeb63: mov    bx,ax
// 0xeb65: jmp    word ptr [bx]

// ================================================
// 0xeb67: WORD 'PRMLOD' codep=0xeb72 parp=0xeb72
// ================================================
// 0xeb72: pop    bx
// 0xeb73: mov    sp,[bx]
// 0xeb75: inc    bx
// 0xeb76: inc    bx
// 0xeb77: mov    [bp-02],si
// 0xeb7a: mov    [bp-04],di
// 0xeb7d: mov    si,bx
// 0xeb7f: cli    
// 0xeb80: push   ds
// 0xeb81: pop    es
// 0xeb82: mov    di,[078C]
// 0xeb86: sub    di,03E8
// 0xeb8a: mov    cx,03E8
// 0xeb8d: repz   
// 0xeb8e: movsb
// 0xeb8f: add    sp,[DE72]
// 0xeb93: mov    si,[bp-02]
// 0xeb96: mov    di,[bp-04]
// 0xeb99: sti    
// 0xeb9a: lodsw
// 0xeb9b: mov    bx,ax
// 0xeb9d: jmp    word ptr [bx]

// ================================================
// 0xeb9f: WORD 'RETSAV' codep=0xebaa parp=0xebaa
// ================================================
// 0xebaa: pop    bx
// 0xebab: mov    [bx],bp
// 0xebad: inc    bx
// 0xebae: inc    bx
// 0xebaf: push   si
// 0xebb0: push   di
// 0xebb1: mov    di,bx
// 0xebb3: mov    si,[078E]
// 0xebb7: sub    si,00DC
// 0xebbb: mov    cx,00DC
// 0xebbe: repz   
// 0xebbf: movsb
// 0xebc0: pop    di
// 0xebc1: pop    si
// 0xebc2: lodsw
// 0xebc3: mov    bx,ax
// 0xebc5: jmp    word ptr [bx]

// ================================================
// 0xebc7: WORD 'RETJMP' codep=0xebd2 parp=0xebd2
// ================================================
// 0xebd2: cli    
// 0xebd3: push   ds
// 0xebd4: pop    es
// 0xebd5: pop    bx
// 0xebd6: mov    bp,[bx]
// 0xebd8: inc    bx
// 0xebd9: inc    bx
// 0xebda: mov    si,bx
// 0xebdc: push   di
// 0xebdd: mov    di,[078E]
// 0xebe1: sub    di,00DC
// 0xebe5: mov    cx,00DC
// 0xebe8: repz   
// 0xebe9: movsb
// 0xebea: pop    di
// 0xebeb: add    bp,[DE6E]
// 0xebef: mov    si,[bp+00]
// 0xebf2: inc    bp
// 0xebf3: inc    bp
// 0xebf4: sti    
// 0xebf5: lodsw
// 0xebf6: mov    bx,ax
// 0xebf8: jmp    word ptr [bx]

// ================================================
// 0xebfa: WORD 'UNK_0xebfc' codep=0x224c parp=0xebfc
// ================================================

void UNK_0xebfc() // UNK_0xebfc
{
  _gt_R(); // >R
  DUP(); // DUP
  Push(0); // 0
  Push(0x0400);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__4); // 4
  PICK(); // PICK
  Push(i); // I
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  PICK(); // PICK
  _at_DS(); // @DS
  Push(cc__5); // 5
  PICK(); // PICK
  Push(i); // I
  Push(Pop() + Pop()); // +
  BLOCK(); // BLOCK
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(h); // J
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xe8b0(); // UNK_0xe8b0
  Push(cc__9); // 9
  PICK(); // PICK
  Push(cc_UNK_0xde7a); // UNK_0xde7a
  UMIN(); // UMIN
  LCMOVE(); // LCMOVE
  Push(h); // J
  if (Pop() == 0) goto label3;
  UPDATE(); // UPDATE

  label3:
  Push(cc__5); // 5
  PICK(); // PICK
  Push(cc_UNK_0xde7a); // UNK_0xde7a
  UMIN(); // UMIN
  UNK_0xe9b9(); // UNK_0xe9b9
  Pop(); // DROP
  Pop(); Pop();// 2DROP
  Push(0x0400);
  _minus_(); // -
  i++;
  } while(i<imax); // (LOOP) 0xffb0

  Push(i); // I
  if (Pop() == 0) goto label2;
  SAVE_minus_BU(); // SAVE-BU

  label2:
  R_gt_(); // R>
  Pop(); // DROP
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xec7e: WORD 'UNK_0xec80' codep=0x224c parp=0xec80
// ================================================

void UNK_0xec80() // UNK_0xec80
{
  Push(0); // 0
  UNK_0xebfc(); // UNK_0xebfc
}

// 0xec86: db 0x4c 0x22 0x2e 0x0f 0xfa 0xeb 0x90 0x16 'L".     '

// ================================================
// 0xec8e: WORD 'UNK_0xec90' codep=0x224c parp=0xec90
// ================================================

void UNK_0xec90() // UNK_0xec90
{
  Push(pp_LFSEG); // LFSEG
  Push(Read16(Pop())); // @
  Push(0x0032);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xec9c: WORD 'UNK_0xec9e' codep=0x224c parp=0xec9e
// ================================================

void UNK_0xec9e() // UNK_0xec9e
{
  Push(pp_SYSK); // SYSK
  Push(Read16(Pop())); // @
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop()-1); // 1-
  UNK_0xec90(); // UNK_0xec90
  _minus_(); // -
  Push(Pop()<<4); // 16*
}

// 0xecb2: db 0x4c 0x22 0x8e 0xec 0x20 0x0f 0x68 0xde 0x9c 0xec 0x86 0xec 0x90 0x16 'L"    h       '

// ================================================
// 0xecc0: WORD 'UNK_0xecc2' codep=0x224c parp=0xecc2
// ================================================

void UNK_0xecc2() // UNK_0xecc2
{
  UNK_0xec90(); // UNK_0xec90
  Push(0); // 0
  Push(cc_UNK_0xde6a); // UNK_0xde6a
  UNK_0xec9e(); // UNK_0xec9e
  UNK_0xec80(); // UNK_0xec80
  LOAD_minus_CO(); // LOAD-CO
}

// 0xecd0: db 0x4c 0x22 0xf8 0xe0 0x20 0x0f 0x5c 0xde 0x74 0xde 0x86 0xec 0x90 0x16 'L"    \ t     '

// ================================================
// 0xecde: WORD 'UNK_0xece0' codep=0x224c parp=0xece0
// ================================================

void UNK_0xece0() // UNK_0xece0
{
  UNK_0xe0fa(); // UNK_0xe0fa
  Push(0); // 0
  Push(cc_UNK_0xde5e); // UNK_0xde5e
  Push(cc_UNK_0xde76); // UNK_0xde76
  UNK_0xec80(); // UNK_0xec80
}


// ================================================
// 0xecec: WORD 'UNK_0xecee' codep=0x224c parp=0xecee
// ================================================

void UNK_0xecee() // UNK_0xecee
{
  Push(pp_OVA); // OVA
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xde7e); // UNK_0xde7e
  _minus_(); // -
}


// ================================================
// 0xecf8: WORD 'UNK_0xecfa' codep=0x224c parp=0xecfa
// ================================================

void UNK_0xecfa() // UNK_0xecfa
{
  _at_DS(); // @DS
  Push(cc_UNK_0xde7e); // UNK_0xde7e
  Push(cc_UNK_0xde5a); // UNK_0xde5a
  UNK_0xecee(); // UNK_0xecee
  UNK_0xec80(); // UNK_0xec80
}

// 0xed06: db 0x4c 0x22 0xc0 0x49 0x7c 0xde 0x58 0xde 0xec 0xec 0x86 0xec 0x90 0x16 0x4c 0x22 0x60 0xde 0x1f 0x6e 0xa8 0xeb 0xbd 0x2f 0x90 0x16 'L" I| X       L"`  n   /  '

// ================================================
// 0xed20: WORD 'UNK_0xed22' codep=0x224c parp=0xed22
// ================================================

void UNK_0xed22() // UNK_0xed22
{
  Push(cc_UNK_0xde62); // UNK_0xde62
  BLOCK(); // BLOCK
  Push(pp_UNK_0xde86); // UNK_0xde86
  Push(0x00de);
  CMOVE(); // CMOVE
}

// 0xed30: db 0x4c 0x22 0x64 0xde 0x1f 0x6e 0x48 0xeb 0xbd 0x2f 0x90 0x16 'L"d  nH  /  '

// ================================================
// 0xed3c: WORD 'UNK_0xed3e' codep=0x224c parp=0xed3e
// ================================================

void UNK_0xed3e() // UNK_0xed3e
{
  Push(cc_UNK_0xde66); // UNK_0xde66
  BLOCK(); // BLOCK
  PRMLOD(); // PRMLOD
}

// 0xed46: db 0x4c 0x22 0xec 0xea 0x68 0xdf 0xc5 0x6d 0x20 0x02 0x06 0xed 0xd0 0xec 0xb2 0xec 0x30 0xed 0x14 0xed 0x68 0xdf 0xae 0x0b 0xf3 0x6e 0x76 0x6d 0xdb 0x08 0x4d 0x7b 0x90 0x16 'L"  h  m        0   h    nvm  M{  '

// ================================================
// 0xed68: WORD 'UNK_0xed6a' codep=0x224c parp=0xed6a
// ================================================

void UNK_0xed6a() // UNK_0xed6a
{
  _c_SAVE(); // :SAVE
  _ex_(); // !
}

// 0xed70: db 0x4c 0x22 0x45 0xe6 0x57 0xe6 0x45 0xe6 0x4d 0xe6 0x2e 0x0f 0x68 0xed 0xf2 0x0e 0x3d 0xe6 0xfa 0x6f 0x4d 0xe6 0x2e 0x0f 0x68 0xed 0x3d 0xe6 0x4d 0x7b 0x90 0x16 'L"E W E M . h   =  oM . h = M{  '

// ================================================
// 0xed90: WORD 'UNK_0xed92' codep=0x224c parp=0xed92
// ================================================

void UNK_0xed92() // UNK_0xed92
{
  Push(0); // 0
  UNK_0xed6a(); // UNK_0xed6a
  MOUNTB(); // MOUNTB
  Push(0); // 0
  UNK_0xed6a(); // UNK_0xed6a
  SAVE_minus_BU(); // SAVE-BU
}


// ================================================
// 0xeda0: WORD 'UNK_0xeda2' codep=0x224c parp=0xeda2
// ================================================

void UNK_0xeda2() // UNK_0xeda2
{
  Push(cc_UNK_0xdfaa); // UNK_0xdfaa
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  HOST(); // HOST
  Push(Read16(Pop())); // @
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  _ro_RESTORE_rc_(); // (RESTORE)
}


// ================================================
// 0xedb6: WORD 'UNK_0xedb8' codep=0x224c parp=0xedb8
// ================================================

void UNK_0xedb8() // UNK_0xedb8
{
  Push(0); // 0
  Push(cc_UNK_0xdfaa); // UNK_0xdfaa
  Push(Pop()-1); // 1-

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  HOST(); // HOST
  _ex_(); // !
  Push(cc__minus_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff6

  CFIGARR(); // CFIGARR
  _ro_SETUP_rc_(); // (SETUP)
  UNK_0xe0b6(); // UNK_0xe0b6
  BLD_minus_DIS(); // BLD-DIS
  BLD_minus_MV(); // BLD-MV
  SETDBUF(); // SETDBUF
}


// ================================================
// 0xedda: WORD 'UNK_0xeddc' codep=0x224c parp=0xeddc
// ================================================

void UNK_0xeddc() // UNK_0xeddc
{
  UNK_0xea87(); // UNK_0xea87
  Push(pp_UNK_0xdf6a); // UNK_0xdf6a
  OFF(); // OFF
  EMPTY_minus_BUFFERS(); // EMPTY-BUFFERS
  UNK_0xeda2(); // UNK_0xeda2
  UNK_0xecfa(); // UNK_0xecfa
  UNK_0xedb8(); // UNK_0xedb8
  UNK_0xece0(); // UNK_0xece0
  UNK_0xecc2(); // UNK_0xecc2
  UNK_0xed3e(); // UNK_0xed3e
  UNK_0xed22(); // UNK_0xed22
  Push(pp_UNK_0xdf6a); // UNK_0xdf6a
  Push(Read16(Pop())); // @
  _c_CKSUM(); // :CKSUM
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xeac7(); // UNK_0xeac7
  return;

  label1:
  UNK_0xe78c(); // UNK_0xe78c
}


// ================================================
// 0xee0a: WORD 'LOAD.G' codep=0x224c parp=0xee15
// ================================================

void LOAD_dot_G() // LOAD.G
{
  UNK_0xe9d5(); // UNK_0xe9d5
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe3bc(); // UNK_0xe3bc
  UNK_0xe5c1(); // UNK_0xe5c1
  EMPTY_minus_BUFFERS(); // EMPTY-BUFFERS
  UNK_0xe9a1(); // UNK_0xe9a1
  UNK_0xe7b6(); // UNK_0xe7b6
  MOUNTA(); // MOUNTA
  UNK_0xeddc(); // UNK_0xeddc
  UNK_0xed92(); // UNK_0xed92
  _gt_LORES(); // >LORES
  Push(pp_UNK_0xde82); // UNK_0xde82
  ON(); // ON
  Push(pp_UNK_0xde86); // UNK_0xde86
  RETJMP(); // RETJMP
}

// 0xee37: db 0x4c 0x22 0xcf 0x8b 0xbf 0x8f 0xba 0xe3 0x97 0xe5 0x70 0xed 0x46 0xed 0x73 0x3b 0xc7 0x34 0x1d 0x70 0x20 0x0f 0x1f 0x6e 0x41 0x0e 0x92 0x0c 0xf2 0x0e 0x6a 0x6d 0x4d 0x7b 0x3d 0x0f 0xc7 0x34 0x1f 0xeb 0x90 0x16 'L"        p F s; 4 p   nA     jmM{=  4    '

// ================================================
// 0xee61: WORD 'UNK_0xee63' codep=0x224c parp=0xee63
// ================================================

void UNK_0xee63() // UNK_0xee63
{
  Push(0x00c9);
  EMIT(); // EMIT
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bb);
  EMIT(); // EMIT
}


// ================================================
// 0xee79: WORD 'UNK_0xee7b' codep=0x224c parp=0xee7b
// ================================================

void UNK_0xee7b() // UNK_0xee7b
{
  Push(0x00ba);
  EMIT(); // EMIT
  Push(tt_ROW); // ROW
  C_at_(); // C@
  SWAP(); // SWAP
  Push(tt_COL); // COL
  C_at_(); // C@
  Push(Pop() + Pop()); // +
  POSITION(); // POSITION
  Push(0x00ba);
  EMIT(); // EMIT
}


// ================================================
// 0xee97: WORD 'UNK_0xee99' codep=0x224c parp=0xee99
// ================================================

void UNK_0xee99() // UNK_0xee99
{
  Push(0x00c8);
  EMIT(); // EMIT
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bc);
  EMIT(); // EMIT
}


// ================================================
// 0xeeaf: WORD 'UNK_0xeeb1' codep=0x224c parp=0xeeb1
// ================================================

void UNK_0xeeb1() // UNK_0xeeb1
{
  _gt_R(); // >R
  _gt_R(); // >R
  _2DUP(); // 2DUP
  POSITION(); // POSITION
  Push(h); // I'
  UNK_0xee63(); // UNK_0xee63
  R_gt_(); // R>
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  POSITION(); // POSITION
  Push(h); // J
  UNK_0xee7b(); // UNK_0xee7b
  i++;
  } while(i<imax); // (LOOP) 0xfff0

  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  POSITION(); // POSITION
  R_gt_(); // R>
  UNK_0xee99(); // UNK_0xee99
}


// ================================================
// 0xeee3: WORD 'UNK_0xeee5' codep=0x224c parp=0xeee5
// ================================================

void UNK_0xeee5() // UNK_0xeee5
{

  label1:
  Push(0x0016);
  Push(0x0028);
  POSITION(); // POSITION
  Push(2); // 2
  SPACES(); // SPACES
  Push(0x0016);
  Push(0x0028);
  POSITION(); // POSITION
  PAD(); // PAD
  Push(2); // 2
  EXPECT(); // EXPECT
  PAD(); // PAD
  C_at_(); // C@
  Push(0x0031);
  Push(0x0036);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  PAD(); // PAD
  C_at_(); // C@
  Push(0x0030);
  _minus_(); // -
  Push(pp__ask_TANDRG); // ?TANDRG
  OFF(); // OFF
  UNK_0xe012(); // UNK_0xe012
  if (Pop() == 0) goto label2;
  Push(pp__ask_TANDRG); // ?TANDRG
  ON(); // ON
  DUP(); // DUP
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(Pop()+1); // 1+

  label2:
  Push(pp__ask_EGA); // ?EGA
  OFF(); // OFF
  DUP(); // DUP
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) return;
  Push(Pop()-2); // 2-
  Push(pp__ask_EGA); // ?EGA
  ON(); // ON
}


// ================================================
// 0xef4f: WORD 'SET.DI' codep=0x224c parp=0xef5a
// ================================================

void SET_dot_DI() // SET.DI
{
  _gt_ALPHA(); // >ALPHA
  PAGE(); // PAGE
  Push(cc__6); // 6
  Push(0x0015);
  Push(0x000b);
  Push(0x0028);
  UNK_0xeeb1(); // UNK_0xeeb1
  Push(cc__8); // 8
  Push(0x001c);
  POSITION(); // POSITION
  PRINT("1. Black/white", 14); // (.")
  Push(0x000a);
  Push(0x001c);
  POSITION(); // POSITION
  PRINT("2. RGB", 6); // (.")
  Push(0x000c);
  Push(0x001c);
  POSITION(); // POSITION
  PRINT("3. Color TV or Composite", 24); // (.")
  Push(0x000e);
  Push(0x001c);
  POSITION(); // POSITION
  PRINT("4. Hercules (monochrome)", 24); // (.")
  Push(0x0010);
  Push(0x001c);
  POSITION(); // POSITION
  PRINT("5. EGA", 6); // (.")
  Push(0x0013);
  Push(0x0016);
  POSITION(); // POSITION
  PRINT("S E L E C T   D I S P L A Y   M O D E", 37); // (.")
  Push(0x0014);
  Push(0x001a);
  POSITION(); // POSITION
  PRINT("A N D  P R E S S  R E T U R N", 29); // (.")
  UNK_0xeee5(); // UNK_0xeee5
  Push(pp_MONITOR); // MONITOR
  _ex_(); // !
  UNK_0xe05c(); // UNK_0xe05c
  LOAD_minus_CO(); // LOAD-CO
  SETDBUF(); // SETDBUF
  _gt_DISPLA(); // >DISPLA
  _gt_LORES(); // >LORES
  DARK(); // DARK
}


// ================================================
// 0xf067: WORD 'UNK_0xf069' codep=0x224c parp=0xf069
// ================================================

void UNK_0xf069() // UNK_0xf069
{
  Push(0x1bee);
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x0064);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x03e8);
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  i++;
  } while(i<imax); // (LOOP) 0xfff0

  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_minus_(); // D-
  Pop(); // DROP
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  Push(0x5245);
  _ex_(); // !
}


// ================================================
// 0xf0a3: WORD 'POLICE' codep=0x224c parp=0xf0ae
// ================================================

void POLICE() // POLICE
{
  _gt_ALPHA(); // >ALPHA
  _gt_0FONT(); // >0FONT
  PAGE(); // PAGE
  Push(1); // 1
  Push(cc__7); // 7
  Push(0x0012);
  Push(0x003e);
  UNK_0xeeb1(); // UNK_0xeeb1
  Push(2); // 2
  Push(0x000f);
  POSITION(); // POSITION
  PRINT("I N T E R S T E L   P O L I C E   W A R N I N G", 47); // (.")
  Push(cc__4); // 4
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("As provided by the Galactic Treaty of 4410, this  computer", 58); // (.")
  Push(cc__5); // 5
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("software  product  is  hereby  declared  the  Intellectual", 58); // (.")
  Push(cc__6); // 6
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("Property of the Human authors, Binary Systems.  All rights", 58); // (.")
  Push(cc__7); // 7
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("are  henceforth  reserved  in  space and time.", 46); // (.")
  Push(cc__9); // 9
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("Provision for the protection of  Intellectual Property  is", 58); // (.")
  Push(0x000a);
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("covered under Section 8.9.1A-F of the  Intangible Property", 58); // (.")
  Push(0x000b);
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("Act of 4506,  ratified by all beings except the Gazurtoid.", 58); // (.")
  Push(0x000d);
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("Included  in   Section  8.9.1A-C   is  the  provision  for", 58); // (.")
  Push(0x000e);
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("Interstel Corporate Police to enforce the Law.", 46); // (.")
  Push(0x0010);
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("WARNING:  Any  being  caught with an unauthorized  copy or", 58); // (.")
  Push(0x0011);
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("version  of  this  Software  Product  will  be punished by", 58); // (.")
  Push(0x0012);
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("Interstel Corporate Police.  Punishment  may  include  the", 58); // (.")
  Push(0x0013);
  Push(0x000a);
  POSITION(); // POSITION
  PRINT("destruction of the offending being.", 35); // (.")
  UNK_0xf069(); // UNK_0xf069
  Push(0x9c40); Pust(0x0000);
  UNK_0xe61d(); // UNK_0xe61d
  PAGE(); // PAGE
  UNK_0xe05c(); // UNK_0xe05c
  _gt_LORES(); // >LORES
  DARK(); // DARK
}


// ================================================
// 0xf472: WORD 'NEW.GA' codep=0x224c parp=0xf47d
// ================================================

void NEW_dot_GA() // NEW.GA
{
  UNK_0xe86d(); // UNK_0xe86d
  UNK_0xe66f(); // UNK_0xe66f
  UNK_0xe999(); // UNK_0xe999
  Push(tt_TIB); // TIB
  Push(Read16(Pop())); // @
  Push(0x0050);
  Push(0); // 0
  FILL(); // FILL
  PORTM(); // PORTM
}


// ================================================
// 0xf493: WORD 'UNK_0xf495' codep=0x224c parp=0xf495
// ================================================

void UNK_0xf495() // UNK_0xf495
{

  label1:
  _i_KEY(); // 'KEY
  Push(0x0031);
  Push(0x0034);
  WITHIN(); // WITHIN
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  Push(0x0039);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
}

// 0xf4b7: db 0x4c 0x22 0x80 0xde 0xb7 0x6d 0x90 0x16 'L"   m  '

// ================================================
// 0xf4bf: WORD 'GAMEOP' codep=0x4a4f parp=0xf4ca
// ================================================
// 0xf4ca: db 0x03 0x00 0xd9 0x8f 0x31 0x00 0x39 0xee 0x32 0x00 0xb9 0xf4 0x33 0x00 0x5a 0xef '    1 9 2   3 Z '

// ================================================
// 0xf4da: WORD 'UNK_0xf4dc' codep=0x224c parp=0xf4dc
// ================================================

void UNK_0xf4dc() // UNK_0xf4dc
{
  UNK_0xe991(); // UNK_0xe991
  FLUSH(); // FLUSH
  UNK_0xe9a1(); // UNK_0xe9a1
  UNK_0xea27(); // UNK_0xea27
  UNK_0xe9d5(); // UNK_0xe9d5
  UNK_0xe967(); // UNK_0xe967
}


// ================================================
// 0xf4ea: WORD 'UNK_0xf4ec' codep=0x224c parp=0xf4ec
// ================================================

void UNK_0xf4ec() // UNK_0xf4ec
{
  Push(pp_UNK_0xde82); // UNK_0xde82
  OFF(); // OFF

  label1:
  UNK_0xe4d0(); // UNK_0xe4d0
  UNK_0xf495(); // UNK_0xf495
  GAMEOP(); // GAMEOP
  Push(pp_UNK_0xde82); // UNK_0xde82
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe881(); // UNK_0xe881
}


// ================================================
// 0xf502: WORD 'UNK_0xf504' codep=0x224c parp=0xf504
// ================================================

void UNK_0xf504() // UNK_0xf504
{
  UNK_0xe93b(); // UNK_0xe93b
  UNK_0xe9ab(); // UNK_0xe9ab
  UNK_0xea51(); // UNK_0xea51
  UNK_0xe999(); // UNK_0xe999
  UNK_0xe86d(); // UNK_0xe86d
  SET_minus_CUR(); // SET-CUR
}


// ================================================
// 0xf512: WORD 'GAMEOP' codep=0x224c parp=0xf51d
// ================================================

void GAMEOP() // GAMEOP
{
  UNK_0xf4dc(); // UNK_0xf4dc
  UNK_0xf4ec(); // UNK_0xf4ec
  UNK_0xf504(); // UNK_0xf504
}


// ================================================
// 0xf525: WORD 'UNK_0xf527' codep=0x224c parp=0xf527
// ================================================

void UNK_0xf527() // UNK_0xf527
{
  _c_TIMEST(); // :TIMEST
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf52d: WORD 'START.' codep=0x224c parp=0xf538
// ================================================

void START_dot_() // START.
{
  SET_dot_DI(); // SET.DI
  UNK_0xe86d(); // UNK_0xe86d
  UNK_0xe7ee(); // UNK_0xe7ee
  if (Pop() == 0) goto label1;
  UNK_0xe824(); // UNK_0xe824

  label1:
  Push(0xb5aa);
  MODULE(); // MODULE
  POLICE(); // POLICE
  UNK_0xf527(); // UNK_0xf527
  if (Pop() == 0) goto label2;
  LOAD_dot_G(); // LOAD.G
  return;

  label2:
  NEW_dot_GA(); // NEW.GA
}

// 0xf55c: db 0x47 0x41 0x4d 0x45 0x00 'GAME '
  