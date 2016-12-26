// ====== OVERLAY 'HYPER-OV' ======
// store offset = 0xd960
// overlay size   = 0x1c00

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


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
// 1713:      UNK_0xa9db  codep:0x224c parp:0xa9db size:0x2f99 C-string:'UNK_0xa9db'
// 1714:      UNK_0xd976  codep:0x224c parp:0xd976 size:0x0008 C-string:'UNK_0xd976'
// 1715:           SHP>C  codep:0x224c parp:0xd980 size:0x0006 C-string:'SHP_gt_C'
// 1716:           PLN>C  codep:0x224c parp:0xd988 size:0x0006 C-string:'PLN_gt_C'
// 1717:      UNK_0xd990  codep:0x224c parp:0xd990 size:0x0006 C-string:'UNK_0xd990'
// 1718:      UNK_0xd998  codep:0x224c parp:0xd998 size:0x0006 C-string:'UNK_0xd998'
// 1719:      UNK_0xd9a0  codep:0x224c parp:0xd9a0 size:0x0006 C-string:'UNK_0xd9a0'
// 1720:      UNK_0xd9a8  codep:0x224c parp:0xd9a8 size:0x0006 C-string:'UNK_0xd9a8'
// 1721:      UNK_0xd9b0  codep:0x2214 parp:0xd9b0 size:0x0002 C-string:'UNK_0xd9b0'
// 1722:      UNK_0xd9b4  codep:0x2214 parp:0xd9b4 size:0x0002 C-string:'UNK_0xd9b4'
// 1723:      UNK_0xd9b8  codep:0x2214 parp:0xd9b8 size:0x0002 C-string:'UNK_0xd9b8'
// 1724:      UNK_0xd9bc  codep:0x2214 parp:0xd9bc size:0x0002 C-string:'UNK_0xd9bc'
// 1725:      UNK_0xd9c0  codep:0x2214 parp:0xd9c0 size:0x0002 C-string:'UNK_0xd9c0'
// 1726:      UNK_0xd9c4  codep:0x2214 parp:0xd9c4 size:0x0002 C-string:'UNK_0xd9c4'
// 1727:      UNK_0xd9c8  codep:0x2214 parp:0xd9c8 size:0x0002 C-string:'UNK_0xd9c8'
// 1728:      UNK_0xd9cc  codep:0x2214 parp:0xd9cc size:0x0002 C-string:'UNK_0xd9cc'
// 1729:      UNK_0xd9d0  codep:0x2214 parp:0xd9d0 size:0x0002 C-string:'UNK_0xd9d0'
// 1730:      UNK_0xd9d4  codep:0x2214 parp:0xd9d4 size:0x0002 C-string:'UNK_0xd9d4'
// 1731:      UNK_0xd9d8  codep:0x2214 parp:0xd9d8 size:0x0002 C-string:'UNK_0xd9d8'
// 1732:      UNK_0xd9dc  codep:0x1d29 parp:0xd9dc size:0x0002 C-string:'UNK_0xd9dc'
// 1733:      UNK_0xd9e0  codep:0x1d29 parp:0xd9e0 size:0x0002 C-string:'UNK_0xd9e0'
// 1734:      UNK_0xd9e4  codep:0x1d29 parp:0xd9e4 size:0x0002 C-string:'UNK_0xd9e4'
// 1735:      UNK_0xd9e8  codep:0x1d29 parp:0xd9e8 size:0x0002 C-string:'UNK_0xd9e8'
// 1736:      UNK_0xd9ec  codep:0x1d29 parp:0xd9ec size:0x0002 C-string:'UNK_0xd9ec'
// 1737:      UNK_0xd9f0  codep:0x1d29 parp:0xd9f0 size:0x0004 C-string:'UNK_0xd9f0'
// 1738:      UNK_0xd9f6  codep:0x1d29 parp:0xd9f6 size:0x0002 C-string:'UNK_0xd9f6'
// 1739:      UNK_0xd9fa  codep:0x1d29 parp:0xd9fa size:0x0002 C-string:'UNK_0xd9fa'
// 1740:      UNK_0xd9fe  codep:0x1d29 parp:0xd9fe size:0x0002 C-string:'UNK_0xd9fe'
// 1741:      UNK_0xda02  codep:0x1d29 parp:0xda02 size:0x0002 C-string:'UNK_0xda02'
// 1742:      UNK_0xda06  codep:0x1d29 parp:0xda06 size:0x0002 C-string:'UNK_0xda06'
// 1743:      UNK_0xda0a  codep:0x1d29 parp:0xda0a size:0x0002 C-string:'UNK_0xda0a'
// 1744:      UNK_0xda0e  codep:0x1d29 parp:0xda0e size:0x0002 C-string:'UNK_0xda0e'
// 1745:      UNK_0xda12  codep:0x1d29 parp:0xda12 size:0x0006 C-string:'UNK_0xda12'
// 1746:      UNK_0xda1a  codep:0x744d parp:0xda1a size:0x0003 C-string:'UNK_0xda1a'
// 1747:      UNK_0xda1f  codep:0x744d parp:0xda1f size:0x0003 C-string:'UNK_0xda1f'
// 1748:      UNK_0xda24  codep:0x744d parp:0xda24 size:0x0003 C-string:'UNK_0xda24'
// 1749:      UNK_0xda29  codep:0x744d parp:0xda29 size:0x0003 C-string:'UNK_0xda29'
// 1750:      UNK_0xda2e  codep:0x744d parp:0xda2e size:0x0003 C-string:'UNK_0xda2e'
// 1751:      UNK_0xda33  codep:0x744d parp:0xda33 size:0x0003 C-string:'UNK_0xda33'
// 1752:      UNK_0xda38  codep:0x744d parp:0xda38 size:0x0003 C-string:'UNK_0xda38'
// 1753:      UNK_0xda3d  codep:0x744d parp:0xda3d size:0x0003 C-string:'UNK_0xda3d'
// 1754:      UNK_0xda42  codep:0x744d parp:0xda42 size:0x0003 C-string:'UNK_0xda42'
// 1755:      UNK_0xda47  codep:0x744d parp:0xda47 size:0x0003 C-string:'UNK_0xda47'
// 1756:      UNK_0xda4c  codep:0x744d parp:0xda4c size:0x0003 C-string:'UNK_0xda4c'
// 1757:      UNK_0xda51  codep:0x744d parp:0xda51 size:0x0003 C-string:'UNK_0xda51'
// 1758:      UNK_0xda56  codep:0x744d parp:0xda56 size:0x0003 C-string:'UNK_0xda56'
// 1759:      UNK_0xda5b  codep:0x744d parp:0xda5b size:0x0003 C-string:'UNK_0xda5b'
// 1760:       FLAREDATE  codep:0x744d parp:0xda60 size:0x0003 C-string:'FLAREDATE'
// 1761:      UNK_0xda65  codep:0x73ea parp:0xda65 size:0x000b C-string:'UNK_0xda65'
// 1762:      UNK_0xda72  codep:0x224c parp:0xda72 size:0x0008 C-string:'UNK_0xda72'
// 1763:      UNK_0xda7c  codep:0x224c parp:0xda7c size:0x0008 C-string:'UNK_0xda7c'
// 1764:      UNK_0xda86  codep:0x224c parp:0xda86 size:0x000a C-string:'UNK_0xda86'
// 1765:          @XYABS  codep:0x224c parp:0xda92 size:0x000a C-string:'_at_XYABS'
// 1766:      UNK_0xda9e  codep:0x224c parp:0xda9e size:0x0008 C-string:'UNK_0xda9e'
// 1767:           CTXT#  codep:0x224c parp:0xdaa8 size:0x0006 C-string:'CTXT_n_'
// 1768:      UNK_0xdab0  codep:0x224c parp:0xdab0 size:0x0008 C-string:'UNK_0xdab0'
// 1769:      UNK_0xdaba  codep:0x224c parp:0xdaba size:0x000a C-string:'UNK_0xdaba'
// 1770:      UNK_0xdac6  codep:0x224c parp:0xdac6 size:0x0008 C-string:'UNK_0xdac6'
// 1771:      UNK_0xdad0  codep:0x224c parp:0xdad0 size:0x000c C-string:'UNK_0xdad0'
// 1772:      UNK_0xdade  codep:0x224c parp:0xdade size:0x001a C-string:'UNK_0xdade'
// 1773:      UNK_0xdafa  codep:0x224c parp:0xdafa size:0x0008 C-string:'UNK_0xdafa'
// 1774:      UNK_0xdb04  codep:0x224c parp:0xdb04 size:0x002c C-string:'UNK_0xdb04'
// 1775:      UNK_0xdb32  codep:0x224c parp:0xdb32 size:0x003e C-string:'UNK_0xdb32'
// 1776:      UNK_0xdb72  codep:0x224c parp:0xdb72 size:0x005e C-string:'UNK_0xdb72'
// 1777:      UNK_0xdbd2  codep:0x744d parp:0xdbd2 size:0x0003 C-string:'UNK_0xdbd2'
// 1778:      UNK_0xdbd7  codep:0x744d parp:0xdbd7 size:0x0003 C-string:'UNK_0xdbd7'
// 1779:      UNK_0xdbdc  codep:0x744d parp:0xdbdc size:0x0003 C-string:'UNK_0xdbdc'
// 1780:      UNK_0xdbe1  codep:0x744d parp:0xdbe1 size:0x0003 C-string:'UNK_0xdbe1'
// 1781:      UNK_0xdbe6  codep:0x744d parp:0xdbe6 size:0x0003 C-string:'UNK_0xdbe6'
// 1782:      UNK_0xdbeb  codep:0x224c parp:0xdbeb size:0x002c C-string:'UNK_0xdbeb'
// 1783:      UNK_0xdc19  codep:0x224c parp:0xdc19 size:0x002a C-string:'UNK_0xdc19'
// 1784:      UNK_0xdc45  codep:0x224c parp:0xdc45 size:0x0034 C-string:'UNK_0xdc45'
// 1785:            PS>C  codep:0x4a4f parp:0xdc82 size:0x0018 C-string:'PS_gt_C'
// 1786:      >CONS-DISP  codep:0x224c parp:0xdc9c size:0x0028 C-string:'_gt_CONS_dash_DISP'
// 1787:      UNK_0xdcc6  codep:0x224c parp:0xdcc6 size:0x00a2 C-string:'UNK_0xdcc6'
// 1788:      UNK_0xdd6a  codep:0x224c parp:0xdd6a size:0x0058 C-string:'UNK_0xdd6a'
// 1789:      UNK_0xddc4  codep:0x224c parp:0xddc4 size:0x0014 C-string:'UNK_0xddc4'
// 1790:      UNK_0xddda  codep:0x224c parp:0xddda size:0x0016 C-string:'UNK_0xddda'
// 1791:      UNK_0xddf2  codep:0x224c parp:0xddf2 size:0x001e C-string:'UNK_0xddf2'
// 1792:      UNK_0xde12  codep:0x224c parp:0xde12 size:0x0016 C-string:'UNK_0xde12'
// 1793:      UNK_0xde2a  codep:0x1d29 parp:0xde2a size:0x0002 C-string:'UNK_0xde2a'
// 1794:      UNK_0xde2e  codep:0x1d29 parp:0xde2e size:0x007c C-string:'UNK_0xde2e'
// 1795:      UNK_0xdeac  codep:0x224c parp:0xdeac size:0x0028 C-string:'UNK_0xdeac'
// 1796:      UNK_0xded6  codep:0x224c parp:0xded6 size:0x001e C-string:'UNK_0xded6'
// 1797:      UNK_0xdef6  codep:0x224c parp:0xdef6 size:0x001e C-string:'UNK_0xdef6'
// 1798:      UNK_0xdf16  codep:0x224c parp:0xdf16 size:0x0028 C-string:'UNK_0xdf16'
// 1799:      UNK_0xdf40  codep:0x224c parp:0xdf40 size:0x001c C-string:'UNK_0xdf40'
// 1800:      UNK_0xdf5e  codep:0x224c parp:0xdf5e size:0x0050 C-string:'UNK_0xdf5e'
// 1801:      UNK_0xdfb0  codep:0x224c parp:0xdfb0 size:0x0016 C-string:'UNK_0xdfb0'
// 1802:             >XY  codep:0x4a4f parp:0xdfce size:0x000c C-string:'_gt_XY'
// 1803:      UNK_0xdfdc  codep:0x224c parp:0xdfdc size:0x001c C-string:'UNK_0xdfdc'
// 1804:            SC>C  codep:0x4a4f parp:0xe001 size:0x001c C-string:'SC_gt_C'
// 1805:      UNK_0xe01f  codep:0x224c parp:0xe01f size:0x0012 C-string:'UNK_0xe01f'
// 1806:      UNK_0xe033  codep:0x224c parp:0xe033 size:0x0064 C-string:'UNK_0xe033'
// 1807:         .AUXSYS  codep:0x224c parp:0xe0a3 size:0x0062 C-string:'_dot_AUXSYS'
// 1808:      UNK_0xe107  codep:0x224c parp:0xe107 size:0x0022 C-string:'UNK_0xe107'
// 1809:      UNK_0xe12b  codep:0x224c parp:0xe12b size:0x0074 C-string:'UNK_0xe12b'
// 1810:      UNK_0xe1a1  codep:0x224c parp:0xe1a1 size:0x000c C-string:'UNK_0xe1a1'
// 1811:      >[CONTEXT]  codep:0x224c parp:0xe1af size:0x0022 C-string:'_gt__bo_CONTEXT_bc_'
// 1812:      ![CONTEXT]  codep:0x224c parp:0xe1d3 size:0x000a C-string:'_ex__bo_CONTEXT_bc_'
// 1813:           RADII  codep:0x4a4f parp:0xe1e7 size:0x0014 C-string:'RADII'
// 1814:            IVAR  codep:0x4a4f parp:0xe204 size:0x0014 C-string:'IVAR'
// 1815:         #CPARMS  codep:0x224c parp:0xe21a size:0x001e C-string:'_n_CPARMS'
// 1816:         !CPARMS  codep:0x224c parp:0xe23a size:0x0016 C-string:'_ex_CPARMS'
// 1817:      UNK_0xe252  codep:0x224c parp:0xe252 size:0x0004 C-string:'UNK_0xe252'
// 1818:      UNK_0xe258  codep:0x224c parp:0xe258 size:0x0008 C-string:'UNK_0xe258'
// 1819:      UNK_0xe262  codep:0x224c parp:0xe262 size:0x0018 C-string:'UNK_0xe262'
// 1820:          XYCASE  codep:0x4a4f parp:0xe285 size:0x000c C-string:'XYCASE'
// 1821:      UNK_0xe293  codep:0x224c parp:0xe293 size:0x0066 C-string:'UNK_0xe293'
// 1822:      UNK_0xe2fb  codep:0x2214 parp:0xe2fb size:0x0002 C-string:'UNK_0xe2fb'
// 1823:      UNK_0xe2ff  codep:0x2214 parp:0xe2ff size:0x0002 C-string:'UNK_0xe2ff'
// 1824:      UNK_0xe303  codep:0x2214 parp:0xe303 size:0x0002 C-string:'UNK_0xe303'
// 1825:      UNK_0xe307  codep:0x2214 parp:0xe307 size:0x0002 C-string:'UNK_0xe307'
// 1826:      UNK_0xe30b  codep:0x1d29 parp:0xe30b size:0x0018 C-string:'UNK_0xe30b'
// 1827:      UNK_0xe325  codep:0x224c parp:0xe325 size:0x002a C-string:'UNK_0xe325'
// 1828:      UNK_0xe351  codep:0x224c parp:0xe351 size:0x0022 C-string:'UNK_0xe351'
// 1829:      UNK_0xe375  codep:0x224c parp:0xe375 size:0x0052 C-string:'UNK_0xe375'
// 1830:      UNK_0xe3c9  codep:0x224c parp:0xe3c9 size:0x0024 C-string:'UNK_0xe3c9'
// 1831:            .MVS  codep:0x224c parp:0xe3f6 size:0x00c2 C-string:'_dot_MVS'
// 1832:      UNK_0xe4ba  codep:0x224c parp:0xe4ba size:0x003e C-string:'UNK_0xe4ba'
// 1833:      UNK_0xe4fa  codep:0x224c parp:0xe4fa size:0x0064 C-string:'UNK_0xe4fa'
// 1834:      UNK_0xe560  codep:0x224c parp:0xe560 size:0x000e C-string:'UNK_0xe560'
// 1835:      UNK_0xe570  codep:0x224c parp:0xe570 size:0x001c C-string:'UNK_0xe570'
// 1836:      UNK_0xe58e  codep:0x224c parp:0xe58e size:0x000e C-string:'UNK_0xe58e'
// 1837:      UNK_0xe59e  codep:0x224c parp:0xe59e size:0x004e C-string:'UNK_0xe59e'
// 1838:      UNK_0xe5ee  codep:0x224c parp:0xe5ee size:0x006e C-string:'UNK_0xe5ee'
// 1839:      UNK_0xe65e  codep:0x1d29 parp:0xe65e size:0x0010 C-string:'UNK_0xe65e'
// 1840:      UNK_0xe670  codep:0x224c parp:0xe670 size:0x0012 C-string:'UNK_0xe670'
// 1841:      UNK_0xe684  codep:0x224c parp:0xe684 size:0x001a C-string:'UNK_0xe684'
// 1842:      UNK_0xe6a0  codep:0x224c parp:0xe6a0 size:0x001c C-string:'UNK_0xe6a0'
// 1843:      UNK_0xe6be  codep:0x224c parp:0xe6be size:0x0024 C-string:'UNK_0xe6be'
// 1844:      UNK_0xe6e4  codep:0x224c parp:0xe6e4 size:0x0012 C-string:'UNK_0xe6e4'
// 1845:      UNK_0xe6f8  codep:0x224c parp:0xe6f8 size:0x002e C-string:'UNK_0xe6f8'
// 1846:      UNK_0xe728  codep:0x224c parp:0xe728 size:0x0018 C-string:'UNK_0xe728'
// 1847:      UNK_0xe742  codep:0x224c parp:0xe742 size:0x00a8 C-string:'UNK_0xe742'
// 1848:      UNK_0xe7ec  codep:0x224c parp:0xe7ec size:0x0012 C-string:'UNK_0xe7ec'
// 1849:           USE-E  codep:0x224c parp:0xe808 size:0x0054 C-string:'USE_dash_E'
// 1850:      UNK_0xe85e  codep:0x224c parp:0xe85e size:0x0092 C-string:'UNK_0xe85e'
// 1851:      UNK_0xe8f2  codep:0x224c parp:0xe8f2 size:0x0012 C-string:'UNK_0xe8f2'
// 1852:      UNK_0xe906  codep:0x2214 parp:0xe906 size:0x0002 C-string:'UNK_0xe906'
// 1853:          CSPEED  codep:0x4a4f parp:0xe913 size:0x000c C-string:'CSPEED'
// 1854:      UNK_0xe921  codep:0x1d29 parp:0xe921 size:0x0002 C-string:'UNK_0xe921'
// 1855:      UNK_0xe925  codep:0x1d29 parp:0xe925 size:0x0002 C-string:'UNK_0xe925'
// 1856:      UNK_0xe929  codep:0x224c parp:0xe929 size:0x0014 C-string:'UNK_0xe929'
// 1857:      UNK_0xe93f  codep:0x224c parp:0xe93f size:0x001e C-string:'UNK_0xe93f'
// 1858:      UNK_0xe95f  codep:0x224c parp:0xe95f size:0x003a C-string:'UNK_0xe95f'
// 1859:      NEST-SETUP  codep:0x4a4f parp:0xe9a5 size:0x0014 C-string:'NEST_dash_SETUP'
// 1860:      UNK_0xe9bb  codep:0x224c parp:0xe9bb size:0x002c C-string:'UNK_0xe9bb'
// 1861:            NEST  codep:0x224c parp:0xe9f0 size:0x0068 C-string:'NEST'
// 1862:      UNK_0xea5a  codep:0x224c parp:0xea5a size:0x0024 C-string:'UNK_0xea5a'
// 1863:      UNK_0xea80  codep:0x224c parp:0xea80 size:0x0022 C-string:'UNK_0xea80'
// 1864:      UNK_0xeaa4  codep:0x224c parp:0xeaa4 size:0x0034 C-string:'UNK_0xeaa4'
// 1865:          JMPSHP  codep:0x224c parp:0xeae3 size:0x0038 C-string:'JMPSHP'
// 1866:      UNK_0xeb1d  codep:0x224c parp:0xeb1d size:0x002a C-string:'UNK_0xeb1d'
// 1867:         COLLIDE  codep:0x4a4f parp:0xeb53 size:0x0018 C-string:'COLLIDE'
// 1868:      UNK_0xeb6d  codep:0x224c parp:0xeb6d size:0x0010 C-string:'UNK_0xeb6d'
// 1869:             ?~C  codep:0x4a4f parp:0xeb85 size:0x0010 C-string:'_ask__t_C'
// 1870:      ?COLLISION  codep:0x224c parp:0xeb97 size:0x00a0 C-string:'_ask_COLLISION'
// 1871:      UNK_0xec39  codep:0x224c parp:0xec39 size:0x0022 C-string:'UNK_0xec39'
// 1872:      ?2NEST.ETC  codep:0x224c parp:0xec5d size:0x004a C-string:'_ask_2NEST_dot_ETC'
// 1873:       ?STARPORT  codep:0x224c parp:0xeca9 size:0x007d C-string:'_ask_STARPORT'
// 1874:    UNNEST-CLEAN  codep:0x4a4f parp:0xed32 size:0x0014 C-string:'UNNEST_dash_CLEAN'
// 1875:  UNNEST-SPACEXY  codep:0x224c parp:0xed48 size:0x0022 C-string:'UNNEST_dash_SPACEXY'
// 1876:         ?UNNEST  codep:0x224c parp:0xed6c size:0x0054 C-string:'_ask_UNNEST'
// 1877:  ?DOUBLE-UNNEST  codep:0x224c parp:0xedc2 size:0x0016 C-string:'_ask_DOUBLE_dash_UNNEST'
// 1878:          UNNEST  codep:0x224c parp:0xede3 size:0x006e C-string:'UNNEST'
// 1879:      UNK_0xee53  codep:0x224c parp:0xee53 size:0x0028 C-string:'UNK_0xee53'
// 1880:        (GET-AUX  codep:0x224c parp:0xee87 size:0x0012 C-string:'_ro_GET_dash_AUX'
// 1881:      UNK_0xee9b  codep:0x224c parp:0xee9b size:0x0026 C-string:'UNK_0xee9b'
// 1882:             FLY  codep:0x224c parp:0xeec9 size:0x0046 C-string:'FLY'
// 1883:      UNK_0xef11  codep:0x224c parp:0xef11 size:0x001a C-string:'UNK_0xef11'
// 1884: SET-DESTINATION  codep:0x224c parp:0xef37 size:0x00c0 C-string:'SET_dash_DESTINATION'
// 1885:       SETUP-MOV  codep:0x224c parp:0xf003 size:0x009c C-string:'SETUP_dash_MOV'
// 1886:     CLEANUP-MOV  codep:0x224c parp:0xf0ab size:0x006e C-string:'CLEANUP_dash_MOV'
// 1887:         CHK-MOV  codep:0x224c parp:0xf125 size:0x008e C-string:'CHK_dash_MOV'
// 1888:      UNK_0xf1b5  codep:0x224c parp:0xf1b5 size:0x002f C-string:'UNK_0xf1b5'
// 1889:           +NEST  codep:0x224c parp:0xf1ee size:0x000a C-string:'_plus_NEST'
// 1890:     COME-HITHER  codep:0x224c parp:0xf204 size:0x0000 C-string:'COME_dash_HITHER'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xd9dc[2] = {0x00, 0x00}; // UNK_0xd9dc
unsigned char UNK_0xd9e0[2] = {0x8c, 0x63}; // UNK_0xd9e0
unsigned char UNK_0xd9e4[2] = {0xf5, 0xff}; // UNK_0xd9e4
unsigned char UNK_0xd9e8[2] = {0x90, 0x00}; // UNK_0xd9e8
unsigned char UNK_0xd9ec[2] = {0x01, 0x00}; // UNK_0xd9ec
unsigned char UNK_0xd9f0[4] = {0x00, 0x00, 0x00, 0x62}; // UNK_0xd9f0
unsigned char UNK_0xd9f6[2] = {0x00, 0x00}; // UNK_0xd9f6
unsigned char UNK_0xd9fa[2] = {0xff, 0xff}; // UNK_0xd9fa
unsigned char UNK_0xd9fe[2] = {0x1e, 0x00}; // UNK_0xd9fe
unsigned char UNK_0xda02[2] = {0xa3, 0xe0}; // UNK_0xda02
unsigned char UNK_0xda06[2] = {0x00, 0x00}; // UNK_0xda06
unsigned char UNK_0xda0a[2] = {0x05, 0x00}; // UNK_0xda0a
unsigned char UNK_0xda0e[2] = {0x00, 0x00}; // UNK_0xda0e
unsigned char UNK_0xda12[6] = {0x00, 0x00, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xda12
unsigned char UNK_0xde2a[2] = {0x07, 0x00}; // UNK_0xde2a
unsigned char UNK_0xde2e[124] = {0x75, 0x00, 0x4c, 0x22, 0xa3, 0x3b, 0x28, 0xde, 0xae, 0x0b, 0xe7, 0x0f, 0xb8, 0x15, 0x50, 0x0e, 0x25, 0x49, 0x2c, 0xde, 0xae, 0x0b, 0xf5, 0x12, 0xfa, 0x15, 0x0a, 0x00, 0x50, 0x0e, 0x28, 0xde, 0x76, 0x6d, 0x4a, 0x17, 0xd0, 0x15, 0xe8, 0xff, 0x28, 0xde, 0xae, 0x0b, 0x90, 0x16, 0x4c, 0x22, 0x1e, 0x75, 0x5d, 0x17, 0x20, 0x00, 0x5f, 0x12, 0xfa, 0x15, 0x08, 0x00, 0x30, 0xde, 0x60, 0x16, 0x04, 0x00, 0x20, 0x0f, 0x5d, 0x17, 0x0b, 0x00, 0x7b, 0x3b, 0x59, 0x81, 0xf3, 0x7b, 0x0d, 0x40, 0x6f, 0x7b, 0xf1, 0x75, 0xfa, 0x15, 0x0c, 0x00, 0x9f, 0x75, 0x6f, 0x7b, 0xb5, 0x7a, 0x60, 0x16, 0x16, 0x00, 0x75, 0x75, 0xb7, 0x7b, 0x60, 0x7a, 0xfa, 0x15, 0x0a, 0x00, 0x9c, 0x7a, 0x5a, 0x7e, 0x60, 0x16, 0x04, 0x00, 0x9c, 0x7a, 0xa9, 0x74, 0x76, 0x6d, 0x90, 0x16}; // UNK_0xde2e
unsigned char UNK_0xe30b[24] = {0xc6, 0xbf, 0x3d, 0x7e, 0xba, 0x73, 0xb3, 0x9f, 0x02, 0xda, 0x02, 0x6d, 0xb2, 0xb8, 0xd9, 0xcd, 0x1f, 0x12, 0x2f, 0xe1, 0xdb, 0x2b, 0x38, 0x10}; // UNK_0xe30b
unsigned char UNK_0xe65e[16] = {0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0xff, 0x01, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x01, 0xff}; // UNK_0xe65e
unsigned char UNK_0xe921[2] = {0x00, 0x00}; // UNK_0xe921
unsigned char UNK_0xe925[2] = {0x00, 0x00}; // UNK_0xe925

const unsigned short int cc_UNK_0xd9b0 = 0x0003; // UNK_0xd9b0
const unsigned short int cc_UNK_0xd9b4 = 0x0000; // UNK_0xd9b4
const unsigned short int cc_UNK_0xd9b8 = 0x004b; // UNK_0xd9b8
const unsigned short int cc_UNK_0xd9bc = 0x0000; // UNK_0xd9bc
const unsigned short int cc_UNK_0xd9c0 = 0x0016; // UNK_0xd9c0
const unsigned short int cc_UNK_0xd9c4 = 0x0190; // UNK_0xd9c4
const unsigned short int cc_UNK_0xd9c8 = 0x0040; // UNK_0xd9c8
const unsigned short int cc_UNK_0xd9cc = 0x003e; // UNK_0xd9cc
const unsigned short int cc_UNK_0xd9d0 = 0x0009; // UNK_0xd9d0
const unsigned short int cc_UNK_0xd9d4 = 0x0008; // UNK_0xd9d4
const unsigned short int cc_UNK_0xd9d8 = 0x000c; // UNK_0xd9d8
const unsigned short int cc_UNK_0xe2fb = 0x0048; // UNK_0xe2fb
const unsigned short int cc_UNK_0xe2ff = 0x0078; // UNK_0xe2ff
const unsigned short int cc_UNK_0xe303 = 0x00ff; // UNK_0xe303
const unsigned short int cc_UNK_0xe307 = 0x00ff; // UNK_0xe307
const unsigned short int cc_UNK_0xe906 = 0x000c; // UNK_0xe906


// 0xd972: db 0x91 0x01 '  '

// ================================================
// 0xd974: WORD 'UNK_0xd976' codep=0x224c parp=0xd976
// ================================================

void UNK_0xd976() // UNK_0xd976
{
  Push(0xca8c);
  MODULE(); // MODULE
}


// ================================================
// 0xd97e: WORD 'SHP>C' codep=0x224c parp=0xd980
// ================================================

void SHP_gt_C() // SHP>C
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xd986: WORD 'PLN>C' codep=0x224c parp=0xd988
// ================================================

void PLN_gt_C() // PLN>C
{
  Push(0x62bf); // pointer to (PLANET
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd98e: WORD 'UNK_0xd990' codep=0x224c parp=0xd990
// ================================================

void UNK_0xd990() // UNK_0xd990
{
  Push(0x62af); // pointer to (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd996: WORD 'UNK_0xd998' codep=0x224c parp=0xd998
// ================================================

void UNK_0xd998() // UNK_0xd998
{
  Push(0x629f); // pointer to (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd99e: WORD 'UNK_0xd9a0' codep=0x224c parp=0xd9a0
// ================================================

void UNK_0xd9a0() // UNK_0xd9a0
{
  Push(0x62df); // pointer to (ENCOUNTER
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9a6: WORD 'UNK_0xd9a8' codep=0x224c parp=0xd9a8
// ================================================

void UNK_0xd9a8() // UNK_0xd9a8
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd9ae: WORD 'UNK_0xd9b0' codep=0x2214 parp=0xd9b0
// ================================================
// 0xd9b0: db 0x03 0x00 '  '

// ================================================
// 0xd9b2: WORD 'UNK_0xd9b4' codep=0x2214 parp=0xd9b4
// ================================================
// 0xd9b4: db 0x00 0x00 '  '

// ================================================
// 0xd9b6: WORD 'UNK_0xd9b8' codep=0x2214 parp=0xd9b8
// ================================================
// 0xd9b8: db 0x4b 0x00 'K '

// ================================================
// 0xd9ba: WORD 'UNK_0xd9bc' codep=0x2214 parp=0xd9bc
// ================================================
// 0xd9bc: db 0x00 0x00 '  '

// ================================================
// 0xd9be: WORD 'UNK_0xd9c0' codep=0x2214 parp=0xd9c0
// ================================================
// 0xd9c0: db 0x16 0x00 '  '

// ================================================
// 0xd9c2: WORD 'UNK_0xd9c4' codep=0x2214 parp=0xd9c4
// ================================================
// 0xd9c4: db 0x90 0x01 '  '

// ================================================
// 0xd9c6: WORD 'UNK_0xd9c8' codep=0x2214 parp=0xd9c8
// ================================================
// 0xd9c8: db 0x40 0x00 '@ '

// ================================================
// 0xd9ca: WORD 'UNK_0xd9cc' codep=0x2214 parp=0xd9cc
// ================================================
// 0xd9cc: db 0x3e 0x00 '> '

// ================================================
// 0xd9ce: WORD 'UNK_0xd9d0' codep=0x2214 parp=0xd9d0
// ================================================
// 0xd9d0: db 0x09 0x00 '  '

// ================================================
// 0xd9d2: WORD 'UNK_0xd9d4' codep=0x2214 parp=0xd9d4
// ================================================
// 0xd9d4: db 0x08 0x00 '  '

// ================================================
// 0xd9d6: WORD 'UNK_0xd9d8' codep=0x2214 parp=0xd9d8
// ================================================
// 0xd9d8: db 0x0c 0x00 '  '

// ================================================
// 0xd9da: WORD 'UNK_0xd9dc' codep=0x1d29 parp=0xd9dc
// ================================================
// 0xd9dc: db 0x00 0x00 '  '

// ================================================
// 0xd9de: WORD 'UNK_0xd9e0' codep=0x1d29 parp=0xd9e0
// ================================================
// 0xd9e0: db 0x8c 0x63 ' c'

// ================================================
// 0xd9e2: WORD 'UNK_0xd9e4' codep=0x1d29 parp=0xd9e4
// ================================================
// 0xd9e4: db 0xf5 0xff '  '

// ================================================
// 0xd9e6: WORD 'UNK_0xd9e8' codep=0x1d29 parp=0xd9e8
// ================================================
// 0xd9e8: db 0x90 0x00 '  '

// ================================================
// 0xd9ea: WORD 'UNK_0xd9ec' codep=0x1d29 parp=0xd9ec
// ================================================
// 0xd9ec: db 0x01 0x00 '  '

// ================================================
// 0xd9ee: WORD 'UNK_0xd9f0' codep=0x1d29 parp=0xd9f0
// ================================================
// 0xd9f0: db 0x00 0x00 0x00 0x62 '   b'

// ================================================
// 0xd9f4: WORD 'UNK_0xd9f6' codep=0x1d29 parp=0xd9f6
// ================================================
// 0xd9f6: db 0x00 0x00 '  '

// ================================================
// 0xd9f8: WORD 'UNK_0xd9fa' codep=0x1d29 parp=0xd9fa
// ================================================
// 0xd9fa: db 0xff 0xff '  '

// ================================================
// 0xd9fc: WORD 'UNK_0xd9fe' codep=0x1d29 parp=0xd9fe
// ================================================
// 0xd9fe: db 0x1e 0x00 '  '

// ================================================
// 0xda00: WORD 'UNK_0xda02' codep=0x1d29 parp=0xda02
// ================================================
// 0xda02: db 0xa3 0xe0 '  '

// ================================================
// 0xda04: WORD 'UNK_0xda06' codep=0x1d29 parp=0xda06
// ================================================
// 0xda06: db 0x00 0x00 '  '

// ================================================
// 0xda08: WORD 'UNK_0xda0a' codep=0x1d29 parp=0xda0a
// ================================================
// 0xda0a: db 0x05 0x00 '  '

// ================================================
// 0xda0c: WORD 'UNK_0xda0e' codep=0x1d29 parp=0xda0e
// ================================================
// 0xda0e: db 0x00 0x00 '  '

// ================================================
// 0xda10: WORD 'UNK_0xda12' codep=0x1d29 parp=0xda12
// ================================================
// 0xda12: db 0x00 0x00 0x29 0x1d 0x3a 0x20 '  ) : '

// ================================================
// 0xda18: WORD 'UNK_0xda1a' codep=0x744d parp=0xda1a
// ================================================
// 0xda1a: db 0x14 0x25 0x02 ' % '

// ================================================
// 0xda1d: WORD 'UNK_0xda1f' codep=0x744d parp=0xda1f
// ================================================
// 0xda1f: db 0x14 0x49 0x01 ' I '

// ================================================
// 0xda22: WORD 'UNK_0xda24' codep=0x744d parp=0xda24
// ================================================
// 0xda24: db 0x14 0x13 0x02 '   '

// ================================================
// 0xda27: WORD 'UNK_0xda29' codep=0x744d parp=0xda29
// ================================================
// 0xda29: db 0x14 0x12 0x01 '   '

// ================================================
// 0xda2c: WORD 'UNK_0xda2e' codep=0x744d parp=0xda2e
// ================================================
// 0xda2e: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xda31: WORD 'UNK_0xda33' codep=0x744d parp=0xda33
// ================================================
// 0xda33: db 0x14 0x1a 0x01 '   '

// ================================================
// 0xda36: WORD 'UNK_0xda38' codep=0x744d parp=0xda38
// ================================================
// 0xda38: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xda3b: WORD 'UNK_0xda3d' codep=0x744d parp=0xda3d
// ================================================
// 0xda3d: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xda40: WORD 'UNK_0xda42' codep=0x744d parp=0xda42
// ================================================
// 0xda42: db 0x14 0x45 0x04 ' E '

// ================================================
// 0xda45: WORD 'UNK_0xda47' codep=0x744d parp=0xda47
// ================================================
// 0xda47: db 0x2d 0x0b 0x02 '-  '

// ================================================
// 0xda4a: WORD 'UNK_0xda4c' codep=0x744d parp=0xda4c
// ================================================
// 0xda4c: db 0x2d 0x11 0x02 '-  '

// ================================================
// 0xda4f: WORD 'UNK_0xda51' codep=0x744d parp=0xda51
// ================================================
// 0xda51: db 0x3d 0x0b 0x01 '=  '

// ================================================
// 0xda54: WORD 'UNK_0xda56' codep=0x744d parp=0xda56
// ================================================
// 0xda56: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xda59: WORD 'UNK_0xda5b' codep=0x744d parp=0xda5b
// ================================================
// 0xda5b: db 0x17 0x11 0x01 '   '

// ================================================
// 0xda5e: WORD 'FLAREDATE' codep=0x744d parp=0xda60
// ================================================
// 0xda60: db 0x17 0x0b 0x02 '   '

// ================================================
// 0xda63: WORD 'UNK_0xda65' codep=0x73ea parp=0xda65
// ================================================
// 0xda65: db 0x20 0x01 0x01 0x16 0x8f 0x65 0x4d 0x74 0x34 0x14 0x01 '     eMt4  '

// ================================================
// 0xda70: WORD 'UNK_0xda72' codep=0x224c parp=0xda72
// ================================================

void UNK_0xda72() // UNK_0xda72
{
  Push(0x63fc); // IFIELD(INST-X)
  _2_at_(); // 2@
  SWAP(); // SWAP
}


// ================================================
// 0xda7a: WORD 'UNK_0xda7c' codep=0x224c parp=0xda7c
// ================================================

void UNK_0xda7c() // UNK_0xda7c
{
  SWAP(); // SWAP
  Push(0x63fc); // IFIELD(INST-X)
  D_ex_(); // D!
}


// ================================================
// 0xda84: WORD 'UNK_0xda86' codep=0x224c parp=0xda86
// ================================================

void UNK_0xda86() // UNK_0xda86
{
  Push(0xd9e8); // pointer to UNK_0xd9e8
  _ex__3(); // !_3
  Push(0xd9e4); // pointer to UNK_0xd9e4
  _ex__3(); // !_3
}


// ================================================
// 0xda90: WORD '@XYABS' codep=0x224c parp=0xda92
// ================================================

void _at_XYABS() // @XYABS
{
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
}


// ================================================
// 0xda9c: WORD 'UNK_0xda9e' codep=0x224c parp=0xda9e
// ================================================

void UNK_0xda9e() // UNK_0xda9e
{
  SHP_gt_C(); // SHP>C
  UNK_0xda72(); // UNK_0xda72
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdaa6: WORD 'CTXT#' codep=0x224c parp=0xdaa8
// ================================================

void CTXT_n_() // CTXT#
{
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
}


// ================================================
// 0xdaae: WORD 'UNK_0xdab0' codep=0x224c parp=0xdab0
// ================================================

void UNK_0xdab0() // UNK_0xdab0
{
  SHP_gt_C(); // SHP>C
  UNK_0xda7c(); // UNK_0xda7c
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdab8: WORD 'UNK_0xdaba' codep=0x224c parp=0xdaba
// ================================================

void UNK_0xdaba() // UNK_0xdaba
{
  SHP_gt_C(); // SHP>C
  Push(0x6438); // IFIELD(UNK_0xda1f)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdac4: WORD 'UNK_0xdac6' codep=0x224c parp=0xdac6
// ================================================

void UNK_0xdac6() // UNK_0xdac6
{
  CTXT_n_(); // CTXT#
  Push(cc__4); // 4
  _eq_(); // =
}


// ================================================
// 0xdace: WORD 'UNK_0xdad0' codep=0x224c parp=0xdad0
// ================================================

void UNK_0xdad0() // UNK_0xdad0
{
  _at_XYABS(); // @XYABS
  Push(0xd9fa); // pointer to UNK_0xd9fa
  _ex__3(); // !_3
  Push(0xd9f6); // pointer to UNK_0xd9f6
  _ex__3(); // !_3
}


// ================================================
// 0xdadc: WORD 'UNK_0xdade' codep=0x224c parp=0xdade
// ================================================

void UNK_0xdade() // UNK_0xdade
{
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x0020);
  _eq_(); // =
}

// 0xdae8: db 0x4c 0x22 0x1e 0x75 0x5d 0x17 0x18 0x00 0x5f 0x12 0xdc 0xda 0x3e 0x13 0x90 0x16 'L" u]   _   >   '

// ================================================
// 0xdaf8: WORD 'UNK_0xdafa' codep=0x224c parp=0xdafa
// ================================================

void UNK_0xdafa() // UNK_0xdafa
{
  CTXT_n_(); // CTXT#
  Push(cc__3); // 3
  _eq_(); // =
}


// ================================================
// 0xdb02: WORD 'UNK_0xdb04' codep=0x224c parp=0xdb04
// ================================================

void UNK_0xdb04() // UNK_0xdb04
{
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(0x62af); // pointer to (ORBIT)
  _1_dot_5_ex_(); // 1.5!
  IOPEN(); // IOPEN
  Push(0x0020);
  Push(0); // 0
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(0x62bf); // pointer to (PLANET
  _1_dot_5_ex_(); // 1.5!
  UNK_0xd9a8(); // UNK_0xd9a8
  Push(0x58f3); // pointer to GWF
  OFF(); // OFF
  Push(0x58e9); // pointer to ?G-AWARE
  OFF(); // OFF
  Push(0x58db); // pointer to ?FUEL-DIE
  OFF(); // OFF
}


// ================================================
// 0xdb30: WORD 'UNK_0xdb32' codep=0x224c parp=0xdb32
// ================================================

void UNK_0xdb32() // UNK_0xdb32
{
  Push(0x5b1e); // pointer to ?PORT
  OFF(); // OFF
  Push(0xd9ec); // pointer to UNK_0xd9ec
  OFF(); // OFF
  UNK_0xd990(); // UNK_0xd990
  UNK_0xda72(); // UNK_0xda72
  UNK_0xda86(); // UNK_0xda86
  ICLOSE(); // ICLOSE
  Push(0xc885);
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(0x62bf); // pointer to (PLANET
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(0x62af); // pointer to (ORBIT)
  _1_dot_5_ex_(); // 1.5!
  Push(0xda0e); // pointer to UNK_0xda0e
  OFF(); // OFF
  Push(0xd9ec); // pointer to UNK_0xd9ec
  OFF(); // OFF
}

// 0xdb5e: db 0x4c 0x22 0x5d 0x17 0x78 0xec 0x41 0x0e 0x2e 0x62 0xac 0x6d 0x56 0x58 0x76 0x6d 0x90 0x16 'L"] x A .b mVXvm  '

// ================================================
// 0xdb70: WORD 'UNK_0xdb72' codep=0x224c parp=0xdb72
// ================================================

void UNK_0xdb72() // UNK_0xdb72
{
  CTXT_n_(); // CTXT#
  Push(cc__3); // 3
  _st_(); // <
  Push(0x5d81); // pointer to #AUX
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0xd9dc); // pointer to UNK_0xd9dc
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x0024);
  Push(h); // I
  _star__slash_(); // */
  Push(0xffdb);
  MAX(); // MAX
  Push(0x0024);
  MIN(); // MIN
  Push(0x0078);
  Push(Pop() + Pop()); // +
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  Push(0x0024);
  R_gt_(); // R>
  _star__slash_(); // */
  Push(0xffdd);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(0x00a1);
  Push(Pop() + Pop()); // +
  LXPLOT(); // LXPLOT
}


// ================================================
// 0xdbd0: WORD 'UNK_0xdbd2' codep=0x744d parp=0xdbd2
// ================================================
// 0xdbd2: db 0x3d 0x13 0x01 '=  '

// ================================================
// 0xdbd5: WORD 'UNK_0xdbd7' codep=0x744d parp=0xdbd7
// ================================================
// 0xdbd7: db 0x3d 0x14 0x01 '=  '

// ================================================
// 0xdbda: WORD 'UNK_0xdbdc' codep=0x744d parp=0xdbdc
// ================================================
// 0xdbdc: db 0x34 0x12 0x01 '4  '

// ================================================
// 0xdbdf: WORD 'UNK_0xdbe1' codep=0x744d parp=0xdbe1
// ================================================
// 0xdbe1: db 0x11 0x17 0x03 '   '

// ================================================
// 0xdbe4: WORD 'UNK_0xdbe6' codep=0x744d parp=0xdbe6
// ================================================
// 0xdbe6: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xdbe9: WORD 'UNK_0xdbeb' codep=0x224c parp=0xdbeb
// ================================================

void UNK_0xdbeb() // UNK_0xdbeb
{
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN

  label3:
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x0019);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE
  Push(0); // 0
  goto label2;

  label1:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST

  label2:
  _ask_NULL(); // ?NULL
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdc17: WORD 'UNK_0xdc19' codep=0x224c parp=0xdc19
// ================================================

void UNK_0xdc19() // UNK_0xdc19
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(cc__4); // 4
  Push(cc__6); // 6
  WITHIN(); // WITHIN
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x000b);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(0); // 0
  Push(0x07d0);
  RRND(); // RRND
  Push(0); // 0
  Push(0x06e0);
  RRND(); // RRND
  UNK_0xda7c(); // UNK_0xda7c
}


// ================================================
// 0xdc43: WORD 'UNK_0xdc45' codep=0x224c parp=0xdc45
// ================================================

void UNK_0xdc45() // UNK_0xdc45
{
  SHP_gt_C(); // SHP>C
  Push(0x6409); // IFIELD(UNK_0xda33)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(0x641f); // IFIELD(UNK_0xda2e)
  _ex__3(); // !_3
  Push(0x6421); // IFIELD(UNK_0xda38)
  Push(Read16(Pop())); // @
  Push(0x6401); // IFIELD(UNK_0xda29)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  _star__slash_(); // */
  Push(0x6401); // IFIELD(UNK_0xda29)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdc79: WORD 'PS>C' codep=0x4a4f parp=0xdc82
// ================================================
// 0xdc82: db 0x05 0x00 0x51 0x4f 0x00 0x00 0x67 0x4f 0x01 0x00 0x46 0x4f 0x02 0x00 0x71 0x4f 0x03 0x00 0xb8 0x4f 0x04 0x00 0xa1 0x4f '  QO  gO  FO  qO   O   O'

// ================================================
// 0xdc9a: WORD '>CONS-DISP' codep=0x224c parp=0xdc9c
// ================================================

void _gt_CONS_dash_DISP() // >CONS-DISP
{
  UNK_0xdac6(); // UNK_0xdac6
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _gt_1ICONFONT(); // >1ICONFONT
  Push(cc__8); // 8
  Push(0x0030);
  Push(0x6221); // pointer to YWLD:YPIX
  D_ex_(); // D!
  Push(cc__8); // 8
  Push(0x0020);
  Push(0x6211); // pointer to XWLD:XPIX
  D_ex_(); // D!
  Push(0x595d); // pointer to XLLDEST
  OFF(); // OFF
  Push(0x596b); // pointer to YLLDEST
  OFF(); // OFF
}


// ================================================
// 0xdcc4: WORD 'UNK_0xdcc6' codep=0x224c parp=0xdcc6
// ================================================

void UNK_0xdcc6() // UNK_0xdcc6
{
  UNK_0xd9a0(); // UNK_0xd9a0
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0013);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x5c13); // pointer to SKIP2NEST
  ON_3(); // ON_3

  label1:
  UNK_0xda72(); // UNK_0xda72
  UNK_0xda86(); // UNK_0xda86
  Push(0x6402); // IFIELD(UNK_0xdbd2)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x6403); // IFIELD(UNK_0xdbd7)
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(0x00ff);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(0x640a); // IFIELD(UNK_0xda56)
  C_ex_(); // C!
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0xd9ec); // pointer to UNK_0xd9ec
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(0x5c13); // pointer to SKIP2NEST
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  Push(0x5c13); // pointer to SKIP2NEST
  _ex__3(); // !_3
  Push(0x62ff); // pointer to (AORIGINATOR
  _at__gt_C_plus_S(); // @>C+S
  Push(0x54c2); // pointer to EDL
  Push(Read16(Pop())); // @
  Push(0x6401); // IFIELD(UNK_0xdbdc)
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  SWAP(); // SWAP
  ABS(); // ABS
  Push(cc__3); // 3
  _slash_(); // /
  Push(cc__5); // 5
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  Push(0x6401); // IFIELD(UNK_0xdbdc)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(0x0064);
  MIN(); // MIN
  Push(0); // 0
  MAX(); // MAX
  Push(0x6401); // IFIELD(UNK_0xdbdc)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  UNK_0xdbeb(); // UNK_0xdbeb
  UNK_0xdc19(); // UNK_0xdc19
  ICLOSE(); // ICLOSE
  Push2Words("NULL");
  Push(0x62df); // pointer to (ENCOUNTER
  _1_dot_5_ex_(); // 1.5!
  Push(0xc1f3);
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(0x62ff); // pointer to (AORIGINATOR
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  UNK_0xdc45(); // UNK_0xdc45
}


// ================================================
// 0xdd68: WORD 'UNK_0xdd6a' codep=0x224c parp=0xdd6a
// ================================================

void UNK_0xdd6a() // UNK_0xdd6a
{
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _1_dot_5_at_(); // 1.5@
  Push(0x62df); // pointer to (ENCOUNTER
  _1_dot_5_ex_(); // 1.5!
  Push(0x629f); // pointer to (SYSTEM
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  Push(0x3a48);
  Push(0xda02); // pointer to UNK_0xda02
  _ex__3(); // !_3

  label1:
  Push(0x5477); // pointer to AVCNT
  OFF(); // OFF
  UNK_0xd9a0(); // UNK_0xd9a0
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  ORGIADDR(); // ORGIADDR
  _1_dot_5_at_(); // 1.5@
  Push(0x63fa); // IFIELD(UNK_0xda51)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0xda0e); // pointer to UNK_0xda0e
  _ex__3(); // !_3
  Push(Pop()+1); // 1+
  Push(0x579c); // pointer to #VESS
  OFF(); // OFF
  Push(0xc96d); // pointer to ?CALLING
  OFF(); // OFF
  Push(0xcac9);
  MODULE(); // MODULE
  Push(0xc96d); // pointer to ?CALLING
  ON_3(); // ON_3
  ICLOSE(); // ICLOSE
  Push(0x55b0); // pointer to ^VES
  OFF(); // OFF
  Push(0xc195);
  MODULE(); // MODULE
  Push(0xc938);
  MODULE(); // MODULE
}


// ================================================
// 0xddc2: WORD 'UNK_0xddc4' codep=0x224c parp=0xddc4
// ================================================

void UNK_0xddc4() // UNK_0xddc4
{
  Push(0x5e82); // pointer to TIME-PASSING
  OFF(); // OFF
  Push(0x5b1e); // pointer to ?PORT
  ON_3(); // ON_3
  Push(2); // 2
  UNK_0xdaba(); // UNK_0xdaba
  Push(2); // 2
  Push(0x5dc7); // pointer to HEADING
  _ex__3(); // !_3
}


// ================================================
// 0xddd8: WORD 'UNK_0xddda' codep=0x224c parp=0xddda
// ================================================

void UNK_0xddda() // UNK_0xddda
{
  Push(0x5e82); // pointer to TIME-PASSING
  ON_3(); // ON_3
  CFIGARRAYS(); // CFIGARRAYS
  Push(2); // 2
  UNK_0xdaba(); // UNK_0xdaba
  Push(2); // 2
  Push(0x5dc7); // pointer to HEADING
  _ex__3(); // !_3
  Push2Words("NULL");
  UNK_0xda86(); // UNK_0xda86
}


// ================================================
// 0xddf0: WORD 'UNK_0xddf2' codep=0x224c parp=0xddf2
// ================================================

void UNK_0xddf2() // UNK_0xddf2
{
  UNK_0xd998(); // UNK_0xd998
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(0x0018);
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  IOPEN(); // IOPEN
  Push(1); // 1
  _star_CREATE(); // *CREATE
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  Push2Words("NULL");
  UNK_0xda7c(); // UNK_0xda7c
  UNK_0xd9a8(); // UNK_0xd9a8
}


// ================================================
// 0xde10: WORD 'UNK_0xde12' codep=0x224c parp=0xde12
// ================================================

void UNK_0xde12() // UNK_0xde12
{
  UNK_0xd998(); // UNK_0xd998
  IOPEN(); // IOPEN
  Push(0x0018);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IDELETE(); // IDELETE

  label1:
  UNK_0xd9a8(); // UNK_0xd9a8
}


// ================================================
// 0xde28: WORD 'UNK_0xde2a' codep=0x1d29 parp=0xde2a
// ================================================
// 0xde2a: db 0x07 0x00 '  '

// ================================================
// 0xde2c: WORD 'UNK_0xde2e' codep=0x1d29 parp=0xde2e
// ================================================
// 0xde2e: db 0x75 0x00 0x4c 0x22 0xa3 0x3b 0x28 0xde 0xae 0x0b 0xe7 0x0f 0xb8 0x15 0x50 0x0e 0x25 0x49 0x2c 0xde 0xae 0x0b 0xf5 0x12 0xfa 0x15 0x0a 0x00 0x50 0x0e 0x28 0xde 0x76 0x6d 0x4a 0x17 0xd0 0x15 0xe8 0xff 0x28 0xde 0xae 0x0b 0x90 0x16 0x4c 0x22 0x1e 0x75 0x5d 0x17 0x20 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0x30 0xde 0x60 0x16 0x04 0x00 0x20 0x0f 0x5d 0x17 0x0b 0x00 0x7b 0x3b 0x59 0x81 0xf3 0x7b 0x0d 0x40 0x6f 0x7b 0xf1 0x75 0xfa 0x15 0x0c 0x00 0x9f 0x75 0x6f 0x7b 0xb5 0x7a 0x60 0x16 0x16 0x00 0x75 0x75 0xb7 0x7b 0x60 0x7a 0xfa 0x15 0x0a 0x00 0x9c 0x7a 0x5a 0x7e 0x60 0x16 0x04 0x00 0x9c 0x7a 0xa9 0x74 0x76 0x6d 0x90 0x16 'u L" ;(       P %I,         P ( vmJ     (     L" u]   _     0 `     ]   {;Y  { @o{ u     uo{ z`   uu {`z     zZ~`    z tvm  '

// ================================================
// 0xdeaa: WORD 'UNK_0xdeac' codep=0x224c parp=0xdeac
// ================================================

void UNK_0xdeac() // UNK_0xdeac
{
  IOPEN(); // IOPEN

  label3:
  _ask__dash_NULL(); // ?-NULL
  if (Pop() == 0) goto label1;
  IEXTRACT(); // IEXTRACT
  CI_i_(); // CI'
  _st_INSERT(); // <INSERT
  ICLOSE(); // ICLOSE
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  IPREV(); // IPREV
  MAKE1ST(); // MAKE1ST
  INEXT(); // INEXT

  label2:
  IOPEN(); // IOPEN
  goto label3;

  label1:
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
}


// ================================================
// 0xded4: WORD 'UNK_0xded6' codep=0x224c parp=0xded6
// ================================================

void UNK_0xded6() // UNK_0xded6
{
  Push(0xde2a); // pointer to UNK_0xde2a
  OFF(); // OFF
  UNK_0xd998(); // UNK_0xd998
  Push(0x6400); // IFIELD(UNK_0xda5b)
  Push(Read8(Pop())&0xFF); // C@
  Push(0xde2e); // pointer to UNK_0xde2e
  _ex__3(); // !_3
  IOPEN(); // IOPEN
  Push(0xdaea);
  Push(0xde5e);
  EACH(); // EACH
  UNK_0xd9a8(); // UNK_0xd9a8
}


// ================================================
// 0xdef4: WORD 'UNK_0xdef6' codep=0x224c parp=0xdef6
// ================================================

void UNK_0xdef6() // UNK_0xdef6
{
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  _eq_(); // =
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(cc__4); // 4
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xdeac(); // UNK_0xdeac
  return;

  label1:
  INEXT(); // INEXT
}


// ================================================
// 0xdf14: WORD 'UNK_0xdf16' codep=0x224c parp=0xdf16
// ================================================

void UNK_0xdf16() // UNK_0xdf16
{
  UNK_0xd998(); // UNK_0xd998
  IOPEN(); // IOPEN

  label2:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xdef6(); // UNK_0xdef6
  goto label2;

  label1:
  _ask__dash_NULL(); // ?-NULL
  if (Pop() == 0) goto label3;
  UNK_0xdef6(); // UNK_0xdef6

  label3:
  UNK_0xd9a8(); // UNK_0xd9a8
}

// 0xdf34: db 0x4c 0x22 0x96 0xd9 0x70 0xda 0xc9 0x79 0x90 0x16 'L"  p  y  '

// ================================================
// 0xdf3e: WORD 'UNK_0xdf40' codep=0x224c parp=0xdf40
// ================================================

void UNK_0xdf40() // UNK_0xdf40
{
  Push(cc_UNK_0xd9c4); // UNK_0xd9c4
  Push(cc__5); // 5
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  RRND(); // RRND
  Push(0x63fc); // IFIELD(INST-X)
  _ex__3(); // !_3
  RRND(); // RRND
  Push(0x63fe); // IFIELD(INST-Y)
  _ex__3(); // !_3
}


// ================================================
// 0xdf5c: WORD 'UNK_0xdf5e' codep=0x224c parp=0xdf5e
// ================================================

void UNK_0xdf5e() // UNK_0xdf5e
{
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop()+2); // 2+
  _gt_R(); // >R
  Push(h); // I
  Push(-Pop()); // NEGATE
  Push(h); // I
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(cc_UNK_0xd9c4); // UNK_0xd9c4
  Push(0x0024);
  _star__slash_(); // */
  Push(0x63fc); // IFIELD(INST-X)
  _ex__3(); // !_3
  Push(h); // I
  R_gt_(); // R>
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0); // 0
  SQRT(); // SQRT
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  Push(cc_UNK_0xd9c4); // UNK_0xd9c4
  Push(0x0024);
  _star__slash_(); // */
  Push(0x63fe); // IFIELD(INST-Y)
  _ex__3(); // !_3
}


// ================================================
// 0xdfae: WORD 'UNK_0xdfb0' codep=0x224c parp=0xdfb0
// ================================================

void UNK_0xdfb0() // UNK_0xdfb0
{
  IOPEN(); // IOPEN
  UNK_0xdade(); // UNK_0xdade
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  UNK_0xdf5e(); // UNK_0xdf5e
  return;

  label1:
  Push2Words("NULL");
  UNK_0xda7c(); // UNK_0xda7c
}


// ================================================
// 0xdfc6: WORD '>XY' codep=0x4a4f parp=0xdfce
// ================================================
// 0xdfce: db 0x02 0x00 0x48 0x3a 0x0b 0x00 0xb0 0xdf 0x3d 0x00 0x40 0xdf '  H:    = @ '

// ================================================
// 0xdfda: WORD 'UNK_0xdfdc' codep=0x224c parp=0xdfdc
// ================================================

void UNK_0xdfdc() // UNK_0xdfdc
{
  UNK_0xd998(); // UNK_0xd998
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN

  label2:
  _at_INST_dash_CLASS(); // @INST-CLASS
  Pop();
  switch(Pop()) // >XY
  {
  case 11:
    UNK_0xdfb0(); // UNK_0xdfb0
    break;
  case 61:
    UNK_0xdf40(); // UNK_0xdf40
    break;
  default:
    NOP(); // NOP
    break;

  }
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdff8: WORD 'SC>C' codep=0x4a4f parp=0xe001
// ================================================
// 0xe001: db 0x06 0x00 0x71 0x4f 0x4d 0x00 0x3a 0x4f 0x4b 0x00 0xa1 0x4f 0x47 0x00 0xad 0x4f 0x46 0x00 0xb8 0x4f 0x41 0x00 0x31 0x4f 0x42 0x00 0x8b 0x4f '  qOM :OK  OG  OF  OA 1OB  O'

// ================================================
// 0xe01d: WORD 'UNK_0xe01f' codep=0x224c parp=0xe01f
// ================================================

void UNK_0xe01f() // UNK_0xe01f
{
  Pop();
  switch(Pop()) // SC>C
  {
  case 77:
    RED(); // RED
    break;
  case 75:
    ORANGE(); // ORANGE
    break;
  case 71:
    YELLOW(); // YELLOW
    break;
  case 70:
    WHITE(); // WHITE
    break;
  case 65:
    GREEN(); // GREEN
    break;
  case 66:
    LT_dash_BLUE(); // LT-BLUE
    break;
  default:
    BLUE(); // BLUE
    break;

  }
  _ex_COLOR(); // !COLOR
  Push(0x0078);
  Push(0x00a1);
  Push(2); // 2
  FILLCIRC(); // FILLCIRC
}


// ================================================
// 0xe031: WORD 'UNK_0xe033' codep=0x224c parp=0xe033
// ================================================

void UNK_0xe033() // UNK_0xe033
{

  label4:
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  _eq_(); // =
  IOPEN(); // IOPEN
  UNK_0xdade(); // UNK_0xdade
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  LoadData("UNK_0xda65"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Pop();
  switch(Pop()) // PS>C
  {
  case 0:
    GREY2(); // GREY2
    break;
  case 1:
    VIOLET(); // VIOLET
    break;
  case 2:
    BLUE(); // BLUE
    break;
  case 3:
    WHITE(); // WHITE
    break;
  case 4:
    ORANGE(); // ORANGE
    break;
  default:
    BROWN(); // BROWN
    break;

  }
  _ex_COLOR(); // !COLOR

  label1:
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  Push(Pop() | Pop()); // OR
  goto label3;

  label2:
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x0024);
  Push(cc_UNK_0xd9c4); // UNK_0xd9c4
  _star__slash_(); // */
  Push(0x0078);
  Push(Pop() + Pop()); // +
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(0x0024);
  Push(cc_UNK_0xd9c4); // UNK_0xd9c4
  _star__slash_(); // */
  Push(0x00a1);
  Push(Pop() + Pop()); // +
  Push(1); // 1
  Push(1); // 1
  Push(1); // 1
  FILLELLIP(); // FILLELLIP
  INEXT(); // INEXT

  label3:
  if (Pop() == 0) goto label4;
}


// ================================================
// 0xe097: WORD '.AUXSYS' codep=0x224c parp=0xe0a3
// ================================================
// entry

void _dot_AUXSYS() // .AUXSYS
{
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) return;
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  SetColor("BLACK");
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  Push(cc__5); // 5
  Push(0x5d81); // pointer to #AUX
  _ex__3(); // !_3
  UNK_0xd998(); // UNK_0xd998
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  UNK_0xe01f(); // UNK_0xe01f
  Push(0x6400); // IFIELD(UNK_0xda5b)
  Push(Read8(Pop())&0xFF); // C@
  IOPEN(); // IOPEN
  Push(cc__9); // 9
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  BIT(); // BIT
  OVER(); // OVER
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  Push(0x0078);
  Push(0x00a1);
  Push(i); // I
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop()+1); // 1+
  Push(1); // 1
  Push(1); // 1
  _dot_ELLIPSE(); // .ELLIPSE
  UNK_0xe033(); // UNK_0xe033

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd6

  Pop(); // DROP
  IFIRST(); // IFIRST
  UNK_0xd9a8(); // UNK_0xd9a8
  UNK_0xdb72(); // UNK_0xdb72
}


// ================================================
// 0xe105: WORD 'UNK_0xe107' codep=0x224c parp=0xe107
// ================================================

void UNK_0xe107() // UNK_0xe107
{
  Push(0xda12); // pointer to UNK_0xda12
  Push(Read16(Pop())); // @
  Push(0x5cfc); // pointer to ?NEB
  _ex__3(); // !_3
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _1_dot_5_at_(); // 1.5@
  Push(0x629f); // pointer to (SYSTEM
  _1_dot_5_ex_(); // 1.5!
  Push(0xe0a3);
  Push(0xda02); // pointer to UNK_0xda02
  _ex__3(); // !_3
  UNK_0xddf2(); // UNK_0xddf2
  UNK_0xded6(); // UNK_0xded6
  UNK_0xdfdc(); // UNK_0xdfdc
  _dot_AUXSYS(); // .AUXSYS
}


// ================================================
// 0xe129: WORD 'UNK_0xe12b' codep=0x224c parp=0xe12b
// ================================================

void UNK_0xe12b() // UNK_0xe12b
{
  UNK_0xd998(); // UNK_0xd998
  UNK_0xda72(); // UNK_0xda72
  UNK_0xda86(); // UNK_0xda86
  ICLOSE(); // ICLOSE
  UNK_0xdf16(); // UNK_0xdf16
  UNK_0xde12(); // UNK_0xde12
  Push2Words("NULL");
  Push(0x629f); // pointer to (SYSTEM
  _1_dot_5_ex_(); // 1.5!
  Push(0xbef3);
  MODULE(); // MODULE
  Push(cc__dash_1); // -1
  Push(0x5455); // pointer to (FLARE)
  _ex__3(); // !_3
  Push(0x3a48);
  Push(0xda02); // pointer to UNK_0xda02
  _ex__3(); // !_3
}

// 0xe153: db 0x4c 0x22 0x20 0x0f 0x7f 0x0e 0x73 0x3b 0x3d 0x0f 0xc4 0x0f 0xe7 0x0f 0xd8 0x4a 0xf2 0x0e 0x41 0x0e 0xb3 0x0f 0x7f 0x0e 0x3d 0x0f 0x73 0x3b 0xc4 0x0f 0x41 0x0e 0xb3 0x0f 0x92 0x0f 0x20 0x0f 0xa5 0x4b 0x20 0x0f 0xf2 0x0e 0xe7 0x0f 0xd8 0x4a 0x20 0x0f 0x3d 0x0f 0xd8 0x4a 0xfa 0x15 0x04 0x00 0xc6 0x11 0xf2 0x0e 0x20 0x0f 0x3d 0x0f 0xd8 0x4a 0xfa 0x15 0x04 0x00 0xc6 0x11 0x90 0x16 'L"   s;=      J  A    = s;  A        K       J  =  J          =  J        '

// ================================================
// 0xe19f: WORD 'UNK_0xe1a1' codep=0x224c parp=0xe1a1
// ================================================

void UNK_0xe1a1() // UNK_0xe1a1
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x6136); // pointer to NAV-TIME
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xe1ad: WORD '>[CONTEXT]' codep=0x224c parp=0xe1af
// ================================================

void _gt__bo_CONTEXT_bc_() // >[CONTEXT]
{
  Push(0xd9e0); // pointer to UNK_0xd9e0
  Push(Read16(Pop())); // @

  label2:
  Push(0x54b0); // pointer to CXSP
  Push(Read16(Pop())); // @
  OVER(); // OVER
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Pop(); // DROP
}

// 0xe1c9: db 0x4c 0x22 0xed 0x62 0x02 0x7a 0x90 0x16 'L" b z  '

// ================================================
// 0xe1d1: WORD '![CONTEXT]' codep=0x224c parp=0xe1d3
// ================================================

void _ex__bo_CONTEXT_bc_() // ![CONTEXT]
{
  Push(0x54b0); // pointer to CXSP
  Push(Read16(Pop())); // @
  Push(0xd9e0); // pointer to UNK_0xd9e0
  _ex__3(); // !_3
}


// ================================================
// 0xe1dd: WORD 'RADII' codep=0x4a4f parp=0xe1e7
// ================================================
// 0xe1e7: db 0x04 0x00 0xb8 0xd9 0x01 0x00 0xbc 0xd9 0x02 0x00 0xc4 0xd9 0x04 0x00 0xc0 0xd9 0x05 0x00 0xb4 0xd9 '                    '

// ================================================
// 0xe1fb: WORD 'IVAR' codep=0x4a4f parp=0xe204
// ================================================
// 0xe204: db 0x04 0x00 0xef 0x62 0x00 0x00 0xbf 0x62 0x01 0x00 0xaf 0x62 0x02 0x00 0x9f 0x62 0x04 0x00 0xdf 0x62 '   b   b   b   b   b'

// ================================================
// 0xe218: WORD '#CPARMS' codep=0x224c parp=0xe21a
// ================================================

void _n_CPARMS() // #CPARMS
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  _at_INST_dash_CLASS(); // @INST-CLASS
  CONTEXT_dash_CASES(); // CONTEXT-CASES
  Push(Read16(regsp)); // DUP
  Pop();
  switch(Pop()) // RADII
  {
  case 1:
    Push(cc_UNK_0xd9bc); // UNK_0xd9bc
    break;
  case 2:
    Push(cc_UNK_0xd9c4); // UNK_0xd9c4
    break;
  case 4:
    Push(cc_UNK_0xd9c0); // UNK_0xd9c0
    break;
  case 5:
    Push(cc_UNK_0xd9b4); // UNK_0xd9b4
    break;
  default:
    Push(cc_UNK_0xd9b8); // UNK_0xd9b8
    break;

  }
  _gt_R(); // >R
  _gt_R(); // >R
  Push(h); // I
  Pop();
  switch(Pop()) // IVAR
  {
  case 0:
    Push(0x62bf); // pointer to (PLANET
    break;
  case 1:
    Push(0x62af); // pointer to (ORBIT)
    break;
  case 2:
    Push(0x629f); // pointer to (SYSTEM
    break;
  case 4:
    Push(0x62df); // pointer to (ENCOUNTER
    break;
  default:
    Push(0x62ef); // pointer to (SHIPBOX
    break;

  }
  R_gt_(); // R>
  R_gt_(); // R>
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe238: WORD '!CPARMS' codep=0x224c parp=0xe23a
// ================================================

void _ex_CPARMS() // !CPARMS
{
  Push(0xd9dc); // pointer to UNK_0xd9dc
  _ex__3(); // !_3
  Push(0x5a5c); // pointer to CONTEXT-ID#
  _ex__3(); // !_3
  _gt_R(); // >R
  _2DUP(); // 2DUP
  R_gt_(); // R>
  _1_dot_5_ex_(); // 1.5!
  Push(0x62ef); // pointer to (SHIPBOX
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xe250: WORD 'UNK_0xe252' codep=0x224c parp=0xe252
// ================================================

void UNK_0xe252() // UNK_0xe252
{
  _at_XYABS(); // @XYABS
}


// ================================================
// 0xe256: WORD 'UNK_0xe258' codep=0x224c parp=0xe258
// ================================================

void UNK_0xe258() // UNK_0xe258
{
  UNK_0xd998(); // UNK_0xd998
  UNK_0xda72(); // UNK_0xda72
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe260: WORD 'UNK_0xe262' codep=0x224c parp=0xe262
// ================================================

void UNK_0xe262() // UNK_0xe262
{
  Push(0x629f); // pointer to (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xe258(); // UNK_0xe258
  return;

  label1:
  UNK_0xd9a0(); // UNK_0xd9a0
  UNK_0xda72(); // UNK_0xda72
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe27a: WORD 'XYCASE' codep=0x4a4f parp=0xe285
// ================================================
// 0xe285: db 0x02 0x00 0x58 0xe2 0x03 0x00 0x52 0xe2 0x04 0x00 0x62 0xe2 '  X   R   b '

// ================================================
// 0xe291: WORD 'UNK_0xe293' codep=0x224c parp=0xe293
// ================================================

void UNK_0xe293() // UNK_0xe293
{
  _gt_DISPLAY(); // >DISPLAY
  Push(cc__3); // 3
  SetColor("GREY1");
  Push(0x00c6);
  Push(0x0016);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  Push(cc__3); // 3
  SetColor("GREY1");
  Push(0x00c6);
  Push(0x0030);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  UNK_0xe1a1(); // UNK_0xe1a1
  if (Pop() == 0) goto label1;
  CTXT_n_(); // CTXT#
  Pop();
  switch(Pop()) // XYCASE
  {
  case 3:
    UNK_0xe252(); // UNK_0xe252
    break;
  case 4:
    UNK_0xe262(); // UNK_0xe262
    break;
  default:
    UNK_0xe258(); // UNK_0xe258
    break;

  }
  goto label2;

  label1:
  Push(0); // 0
  Push(0x06dd);
  RRND(); // RRND
  Push(0); // 0
  Push(0x07cd);
  RRND(); // RRND

  label2:
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(cc__star_MAPSCALE); // *MAPSCALE
  _slash_(); // /
  SWAP(); // SWAP
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(cc__star_MAPSCALE); // *MAPSCALE
  _slash_(); // /
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x0030);
  Push(0x586e); // pointer to XBLT
  _ex__3(); // !_3
  _dot_(); // .
}


// ================================================
// 0xe2f9: WORD 'UNK_0xe2fb' codep=0x2214 parp=0xe2fb
// ================================================
// 0xe2fb: db 0x48 0x00 'H '

// ================================================
// 0xe2fd: WORD 'UNK_0xe2ff' codep=0x2214 parp=0xe2ff
// ================================================
// 0xe2ff: db 0x78 0x00 'x '

// ================================================
// 0xe301: WORD 'UNK_0xe303' codep=0x2214 parp=0xe303
// ================================================
// 0xe303: db 0xff 0x00 '  '

// ================================================
// 0xe305: WORD 'UNK_0xe307' codep=0x2214 parp=0xe307
// ================================================
// 0xe307: db 0xff 0x00 '  '

// ================================================
// 0xe309: WORD 'UNK_0xe30b' codep=0x1d29 parp=0xe30b
// ================================================
// 0xe30b: db 0xc6 0xbf 0x3d 0x7e 0xba 0x73 0xb3 0x9f 0x02 0xda 0x02 0x6d 0xb2 0xb8 0xd9 0xcd 0x1f 0x12 0x2f 0xe1 0xdb 0x2b 0x38 0x10 '  =~ s     m      /  +8 '

// ================================================
// 0xe323: WORD 'UNK_0xe325' codep=0x224c parp=0xe325
// ================================================

void UNK_0xe325() // UNK_0xe325
{
  Push(0xe30b); // pointer to UNK_0xe30b
  Push(0x0018);
  Push(Pop() + Pop()); // +
  Push(0xe30b); // pointer to UNK_0xe30b

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(cc_UNK_0xe303); // UNK_0xe303
  RRND(); // RRND
  Push(i); // I
  C_ex_(); // C!
  Push(0); // 0
  Push(cc_UNK_0xe307); // UNK_0xe307
  RRND(); // RRND
  Push(i); // I
  Push(Pop()+1); // 1+
  C_ex_(); // C!
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe6

}


// ================================================
// 0xe34f: WORD 'UNK_0xe351' codep=0x224c parp=0xe351
// ================================================

void UNK_0xe351() // UNK_0xe351
{
  Push(cc_UNK_0xe307); // UNK_0xe307
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0); // 0
  Push(cc_UNK_0xe2ff); // UNK_0xe2ff
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(cc_UNK_0xe303); // UNK_0xe303
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0); // 0
  Push(cc_UNK_0xe2fb); // UNK_0xe2fb
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
}


// ================================================
// 0xe373: WORD 'UNK_0xe375' codep=0x224c parp=0xe375
// ================================================

void UNK_0xe375() // UNK_0xe375
{
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x01f4);
  Push(Pop() + Pop()); // +
  Push(0x6211); // pointer to XWLD:XPIX
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  Push(0x01f4);
  Push(Pop() + Pop()); // +
  Push(0x6221); // pointer to YWLD:YPIX
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  UNK_0xe351(); // UNK_0xe351
  _2DUP(); // 2DUP
  Push(Pop() * Pop()); // *
  if (Pop() == 0) goto label1;
  Push(cc_UNK_0xe2ff); // UNK_0xe2ff
  _dash_(); // -
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  Push(cc_UNK_0xe2fb); // UNK_0xe2fb
  _dash_(); // -
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  LPLOT(); // LPLOT
  return;

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe3c7: WORD 'UNK_0xe3c9' codep=0x224c parp=0xe3c9
// ================================================

void UNK_0xe3c9() // UNK_0xe3c9
{
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  Push(0xe30b); // pointer to UNK_0xe30b
  Push(0x0021);
  Push(Pop() + Pop()); // +
  Push(0xe30b); // pointer to UNK_0xe30b

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe375(); // UNK_0xe375
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff0

}


// ================================================
// 0xe3ed: WORD '.MVS' codep=0x224c parp=0xe3f6
// ================================================
// entry

void _dot_MVS() // .MVS
{
  UNK_0xdac6(); // UNK_0xdac6
  CTXT_n_(); // CTXT#
  Push(1); // 1
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  Push(0x5cfc); // pointer to ?NEB
  Push(Read16(Pop())); // @
  CTXT_n_(); // CTXT#
  Push(2); // 2
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  SetColor("DK-GREEN");
  goto label2;

  label1:
  SetColor("BLACK");

  label2:
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  CTXT_n_(); // CTXT#
  Push(2); // 2
  Push(cc__4); // 4
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  UNK_0xe3c9(); // UNK_0xe3c9

  label3:
  ORGLIST(); // ORGLIST
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}

// 0xe440: db 0x4c 0x22 0xc5 0xa2 0xd2 0x9a 0xe2 0x9a 0x6e 0x99 0x5a 0x4f 0x17 0x85 0xc4 0xab 0x9b 0x58 0x76 0x6d 0x2e 0x0f 0x90 0x58 0x76 0x6d 0x2e 0x0f 0x85 0x58 0x76 0x6d 0x7a 0x58 0xc5 0x6d 0xfc 0xd9 0xae 0x0b 0x5d 0x17 0x96 0x00 0x2d 0x12 0x04 0xda 0xae 0x0b 0x3e 0x13 0xfa 0x15 0x3c 0x00 0xfc 0xd9 0xae 0x0b 0x5d 0x17 0x96 0x00 0x92 0x0f 0x8b 0x3b 0x5d 0x17 0x64 0x00 0xc4 0x0f 0xe7 0x0f 0x04 0xda 0xae 0x0b 0x89 0x11 0x20 0x0f 0xb8 0x15 0xf0 0x0d 0x5d 0x17 0x0f 0x00 0x53 0xe1 0xb3 0x0e 0x72 0x0f 0x61 0x58 0x76 0x6d 0x72 0x0f 0x6c 0x58 0x76 0x6d 0xd8 0x93 0xd0 0x15 0xe6 0xff 0xde 0x0d 0xfc 0xa2 0x90 0x16 'L"      n ZO     Xvm.  Xvm.  XvmzX m    ]   -     >   <     ]      ;] d                 ]   S   r aXvmr lXvm            '

// ================================================
// 0xe4b8: WORD 'UNK_0xe4ba' codep=0x224c parp=0xe4ba
// ================================================

void UNK_0xe4ba() // UNK_0xe4ba
{
  _gt_R(); // >R
  _gt_R(); // >R
  _gt_R(); // >R
  Push(h); // I
  Push(0x5dc7); // pointer to HEADING
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(h); // I'
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  Push(g); // J
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_V(); // >V
  R_gt_(); // R>
  R_gt_(); // R>
  R_gt_(); // R>
  V_gt_(); // V>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Pop(); Pop();// 2DROP
  Pop(); // DROP
  Push(0); // 0
}


// ================================================
// 0xe4f8: WORD 'UNK_0xe4fa' codep=0x224c parp=0xe4fa
// ================================================

void UNK_0xe4fa() // UNK_0xe4fa
{
  _2DUP(); // 2DUP
  Push(0x5db9); // pointer to YABS
  _ex__3(); // !_3
  Push(0x5dae); // pointer to XABS
  _ex__3(); // !_3
  _2DUP(); // 2DUP
  UNK_0xdab0(); // UNK_0xdab0
  _2DUP(); // 2DUP
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  POINT_gt_ICON(); // POINT>ICON
  _ex_IY(); // !IY
  _ex_IX(); // !IX
  UNK_0xdac6(); // UNK_0xdac6
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  Push(cc_UNK_0xd9d0); // UNK_0xd9d0
  _dash_(); // -
  SWAP(); // SWAP
  Push(cc_UNK_0xd9d4); // UNK_0xd9d4
  _dash_(); // -
  SWAP(); // SWAP
  _2SWAP(); // 2SWAP
  Push(cc_UNK_0xd9c8); // UNK_0xd9c8
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc_UNK_0xd9cc); // UNK_0xd9cc
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  _ex_VISWINDOW(); // !VISWINDOW
  goto label2;

  label1:
  Pop(); Pop();// 2DROP

  label2:
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() == 0) goto label3;
  UNK_0xe293(); // UNK_0xe293

  label3:
  Push(Read16(regsp)); // DUP
  Push(0x5dc7); // pointer to HEADING
  _ex__3(); // !_3
  Push(Read16(regsp)); // DUP
  UNK_0xdaba(); // UNK_0xdaba
  Push(0x001b);
  Push(Pop() + Pop()); // +
  _ex_ID(); // !ID
}


// ================================================
// 0xe55e: WORD 'UNK_0xe560' codep=0x224c parp=0xe560
// ================================================

void UNK_0xe560() // UNK_0xe560
{
  UNK_0xe4ba(); // UNK_0xe4ba
  if (Pop() == 0) return;
  UNK_0xdb72(); // UNK_0xdb72
  UNK_0xe4fa(); // UNK_0xe4fa
  UNK_0xdb72(); // UNK_0xdb72
}


// ================================================
// 0xe56e: WORD 'UNK_0xe570' codep=0x224c parp=0xe570
// ================================================

void UNK_0xe570() // UNK_0xe570
{
  SWAP(); // SWAP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0064);
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(1); // 1
  return;

  label1:
  Pop(); // DROP
  Push(0); // 0
}


// ================================================
// 0xe58c: WORD 'UNK_0xe58e' codep=0x224c parp=0xe58e
// ================================================

void UNK_0xe58e() // UNK_0xe58e
{
  ROT(); // ROT
  _dash_(); // -
  _gt_R(); // >R
  SWAP(); // SWAP
  _dash_(); // -
  R_gt_(); // R>
}


// ================================================
// 0xe59c: WORD 'UNK_0xe59e' codep=0x224c parp=0xe59e
// ================================================

void UNK_0xe59e() // UNK_0xe59e
{
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0x0003);
  goto label2;

  label1:
  Push(0x000c);

  label2:
  SWAP(); // SWAP
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(0x0009);
  goto label4;

  label3:
  Push(0x0006);

  label4:
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(0x0008);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  Push(Pop()>>1); // 2/
  return;

  label5:
  Push(Read16(regsp)); // DUP
  Push(0x0004);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(Pop()-1); // 1-
}


// ================================================
// 0xe5ec: WORD 'UNK_0xe5ee' codep=0x224c parp=0xe5ee
// ================================================

void UNK_0xe5ee() // UNK_0xe5ee
{
  UNK_0xe58e(); // UNK_0xe58e
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  UNK_0xe59e(); // UNK_0xe59e
  _gt_R(); // >R
  Push(h); // I
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  SWAP(); // SWAP

  label2:
  ABS(); // ABS
  SWAP(); // SWAP
  ABS(); // ABS
  SWAP(); // SWAP
  UNK_0xe570(); // UNK_0xe570
  if (Pop() == 0) goto label3;
  Push(Read16(regsp)); // DUP
  Push(0x0029);
  _st_(); // <
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  Push(0); // 0
  goto label5;

  label4:
  Push(0x00f1);
  _gt_(); // >
  if (Pop() == 0) goto label6;
  Push(2); // 2
  goto label5;

  label6:
  Push(1); // 1

  label5:
  goto label7;

  label3:
  Push(2); // 2

  label7:
  R_gt_(); // R>
  Push(Pop()-1); // 1-
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  return;

  label1:
  Pop(); Pop();// 2DROP
  Push(0x5dc7); // pointer to HEADING
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe65c: WORD 'UNK_0xe65e' codep=0x1d29 parp=0xe65e
// ================================================
// 0xe65e: db 0x01 0x00 0x01 0x01 0x00 0x01 0xff 0x01 0xff 0x00 0xff 0xff 0x00 0xff 0x01 0xff '                '

// ================================================
// 0xe66e: WORD 'UNK_0xe670' codep=0x224c parp=0xe670
// ================================================

void UNK_0xe670() // UNK_0xe670
{
  Push(Pop()*2); // 2*
  Push(0xe65e); // pointer to UNK_0xe65e
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  _plus__dash__at_(); // +-@
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  _plus__dash__at_(); // +-@
}


// ================================================
// 0xe682: WORD 'UNK_0xe684' codep=0x224c parp=0xe684
// ================================================

void UNK_0xe684() // UNK_0xe684
{
  UNK_0xe670(); // UNK_0xe670
  _gt_R(); // >R
  _gt_R(); // >R
  Push(Pop()-1); // 1-
  R_gt_(); // R>
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  R_gt_(); // R>
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe69e: WORD 'UNK_0xe6a0' codep=0x224c parp=0xe6a0
// ================================================

void UNK_0xe6a0() // UNK_0xe6a0
{
  _gt_R(); // >R
  UNK_0xe670(); // UNK_0xe670
  Push(h); // I
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  R_gt_(); // R>
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
}


// ================================================
// 0xe6bc: WORD 'UNK_0xe6be' codep=0x224c parp=0xe6be
// ================================================

void UNK_0xe6be() // UNK_0xe6be
{
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  R_gt_(); // R>
  Push(Pop() + Pop()); // +
  Push(0); // 0
  SQRT(); // SQRT
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe6e2: WORD 'UNK_0xe6e4' codep=0x224c parp=0xe6e4
// ================================================

void UNK_0xe6e4() // UNK_0xe6e4
{
  _at_XYABS(); // @XYABS
  Push(0xd9f6); // pointer to UNK_0xd9f6
  Push(Read16(Pop())); // @
  Push(0xd9fa); // pointer to UNK_0xd9fa
  Push(Read16(Pop())); // @
  UNK_0xe6be(); // UNK_0xe6be
  Push(cc_UNK_0xd9d8); // UNK_0xd9d8
  MIN(); // MIN
}


// ================================================
// 0xe6f6: WORD 'UNK_0xe6f8' codep=0x224c parp=0xe6f8
// ================================================

void UNK_0xe6f8() // UNK_0xe6f8
{
  _at_XYABS(); // @XYABS
  _2DUP(); // 2DUP
  Push(0xd9f6); // pointer to UNK_0xd9f6
  Push(Read16(Pop())); // @
  Push(0xd9fa); // pointer to UNK_0xd9fa
  Push(Read16(Pop())); // @
  UNK_0xe5ee(); // UNK_0xe5ee
  Push(Read16(regsp)); // DUP
  Push(cc__8); // 8
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0x5dc7); // pointer to HEADING
  Push(Read16(Pop())); // @

  label1:
  _gt_R(); // >R
  Push(h); // I
  UNK_0xe6e4(); // UNK_0xe6e4
  UNK_0xe6a0(); // UNK_0xe6a0
  R_gt_(); // R>
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xe726: WORD 'UNK_0xe728' codep=0x224c parp=0xe728
// ================================================

void UNK_0xe728() // UNK_0xe728
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
// 0xe740: WORD 'UNK_0xe742' codep=0x224c parp=0xe742
// ================================================

void UNK_0xe742() // UNK_0xe742
{
  Push(0x60ca); // pointer to 10*CARGO
  _2_at_(); // 2@
  Push(0x559b); // pointer to -END
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  DMIN(); // DMIN
  D_plus_(); // D+
  Push(0x60ca); // pointer to 10*CARGO
  D_ex_(); // D!
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  Push(0x559b); // pointer to -END
  Push(Read16(Pop())); // @
  Push(0); // 0
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(0x6106); // pointer to 10*END
  D_ex_(); // D!
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  Push(0x559b); // pointer to -END
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0096);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xe728(); // UNK_0xe728
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  Push(0xc9e0);
  MODULE(); // MODULE
  return;

  label1:
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  Push(0x559b); // pointer to -END
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(cc__5); // 5
  ROLL(); // ROLL
  Push(0); // 0
  D_plus_(); // D+
  UNK_0xe728(); // UNK_0xe728
  if (Pop() == 0) goto label2;
  Push(2); // 2
  Push(0xc9e0);
  MODULE(); // MODULE
  return;

  label2:
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(0x53b1); // pointer to ?AUTO
  ON_3(); // ON_3
  Push(1); // 1
  Push(0xc9e0);
  MODULE(); // MODULE
  Push(0x5fa9); // pointer to ?SUP
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xcb4e);
  MODULE(); // MODULE
}


// ================================================
// 0xe7ea: WORD 'UNK_0xe7ec' codep=0x224c parp=0xe7ec
// ================================================

void UNK_0xe7ec() // UNK_0xe7ec
{
  UNK_0xdafa(); // UNK_0xdafa
  Push(0x53b1); // pointer to ?AUTO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xe742(); // UNK_0xe742
}


// ================================================
// 0xe7fe: WORD 'USE-E' codep=0x224c parp=0xe808
// ================================================
// entry

void USE_dash_E() // USE-E
{
  Push(0x559b); // pointer to -END
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(0x559b); // pointer to -END
  _ex__3(); // !_3
  UNK_0xe742(); // UNK_0xe742
  Push(0x559b); // pointer to -END
  _ex__3(); // !_3
  SHP_gt_C(); // SHP>C
  Push(1); // 1
  Push(0x6432); // IFIELD(UNK_0xda3d)
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  Push2Words("*STARSHIP-HOLD");
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
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0); // 0
  MAX(); // MAX
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3

  label2:
  CDROP(); // CDROP

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe85c: WORD 'UNK_0xe85e' codep=0x224c parp=0xe85e
// ================================================

void UNK_0xe85e() // UNK_0xe85e
{
  Push(0); // 0
  Push(0x55e6); // pointer to DBUF-SEG
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(h); // I
  Push(0x6508); // pointer to YTABLE
  Push(0x010c);
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x0012);
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(1); // 1
  _eq_(); // =
  Push(Pop() + Pop()); // +
  Push(h); // I
  Push(0x6508); // pointer to YTABLE
  Push(0x010c);
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x0015);
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  Push(0x00f0);
  Push(Pop() & Pop()); // AND
  Push(0x0010);
  _eq_(); // =
  Push(Pop() + Pop()); // +
  Push(h); // I
  Push(0x6508); // pointer to YTABLE
  Push(0x00fa);
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x0012);
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(1); // 1
  _eq_(); // =
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  Push(0x6508); // pointer to YTABLE
  Push(0x00fa);
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x0015);
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  Push(0x00f0);
  Push(Pop() & Pop()); // AND
  Push(0x0010);
  _eq_(); // =
  Push(Pop() + Pop()); // +
  Push(2); // 2
  _gt_(); // >
}


// ================================================
// 0xe8f0: WORD 'UNK_0xe8f2' codep=0x224c parp=0xe8f2
// ================================================

void UNK_0xe8f2() // UNK_0xe8f2
{
  Push(cc__6); // 6
  Push(0x579c); // pointer to #VESS
  Push(Read16(Pop())); // @
  Push(1); // 1
  MAX(); // MAX
  _slash_(); // /
  Push(2); // 2
  MAX(); // MAX
}


// ================================================
// 0xe904: WORD 'UNK_0xe906' codep=0x2214 parp=0xe906
// ================================================
// 0xe906: db 0x0c 0x00 '  '

// ================================================
// 0xe908: WORD 'CSPEED' codep=0x4a4f parp=0xe913
// ================================================
// 0xe913: db 0x02 0x00 0x06 0xe9 0x03 0x00 0x30 0x0f 0x04 0x00 0xf2 0xe8 '      0     '

// ================================================
// 0xe91f: WORD 'UNK_0xe921' codep=0x1d29 parp=0xe921
// ================================================
// 0xe921: db 0x00 0x00 '  '

// ================================================
// 0xe923: WORD 'UNK_0xe925' codep=0x1d29 parp=0xe925
// ================================================
// 0xe925: db 0x00 0x00 '  '

// ================================================
// 0xe927: WORD 'UNK_0xe929' codep=0x224c parp=0xe929
// ================================================

void UNK_0xe929() // UNK_0xe929
{
  Push(0xe925); // pointer to UNK_0xe925
  OFF(); // OFF
  Push(0xe921); // pointer to UNK_0xe921
  OFF(); // OFF
  CTXT_n_(); // CTXT#
  Pop();
  switch(Pop()) // CSPEED
  {
  case 3:
    Push(1); // 1
    break;
  case 4:
    UNK_0xe8f2(); // UNK_0xe8f2
    break;
  default:
    Push(cc_UNK_0xe906); // UNK_0xe906
    break;

  }
  Push(0xd9d8);
  _ex__3(); // !_3
}


// ================================================
// 0xe93d: WORD 'UNK_0xe93f' codep=0x224c parp=0xe93f
// ================================================

void UNK_0xe93f() // UNK_0xe93f
{
  SHP_gt_C(); // SHP>C
  Push(0x6414); // IFIELD(UNK_0xda1a)
  Push(Read16(Pop())); // @
  Push(0x6402); // IFIELD(UNK_0xda24)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0064);
  _star__slash_(); // */
  Push(2); // 2
  MAX(); // MAX
  Push(0xda0a); // pointer to UNK_0xda0a
  _ex__3(); // !_3
  UNK_0xe929(); // UNK_0xe929
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe95d: WORD 'UNK_0xe95f' codep=0x224c parp=0xe95f
// ================================================

void UNK_0xe95f() // UNK_0xe95f
{
  Push(0xe921); // pointer to UNK_0xe921
  Push(Read16(Pop())); // @
  Push(1); // 1
  _st_(); // <
  UNK_0xdac6(); // UNK_0xdac6
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0xe925); // pointer to UNK_0xe925
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(cc_UNK_0xd9d8); // UNK_0xd9d8
  MIN(); // MIN
  Push(0xe925); // pointer to UNK_0xe925
  _ex__3(); // !_3
  Push(0x0060);
  Push(0xda0a); // pointer to UNK_0xda0a
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(0xe921); // pointer to UNK_0xe921
  _ex__3(); // !_3
  return;

  label1:
  Push(cc__dash_1); // -1
  Push(0xe921); // pointer to UNK_0xe921
  _plus__ex_(); // +!
}


// ================================================
// 0xe999: WORD 'NEST-SETUP' codep=0x4a4f parp=0xe9a5
// ================================================
// 0xe9a5: db 0x04 0x00 0x48 0x3a 0x01 0x00 0x04 0xdb 0x02 0x00 0x07 0xe1 0x04 0x00 0x6a 0xdd 0x05 0x00 0xc4 0xdd '  H:          j     '

// ================================================
// 0xe9b9: WORD 'UNK_0xe9bb' codep=0x224c parp=0xe9bb
// ================================================

void UNK_0xe9bb() // UNK_0xe9bb
{
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0x5dc7); // pointer to HEADING
  Push(Read16(Pop())); // @
  Push(0xd9dc); // pointer to UNK_0xd9dc
  Push(Read16(Pop())); // @
  OVER(); // OVER
  UNK_0xe684(); // UNK_0xe684
  _2DUP(); // 2DUP
  _gt_R(); // >R
  _gt_R(); // >R
  UNK_0xe560(); // UNK_0xe560
  R_gt_(); // R>
  R_gt_(); // R>
  Push(0xd9fa); // pointer to UNK_0xd9fa
  _ex__3(); // !_3
  Push(0xd9f6); // pointer to UNK_0xd9f6
  _ex__3(); // !_3
}


// ================================================
// 0xe9e7: WORD 'NEST' codep=0x224c parp=0xe9f0
// ================================================

void NEST() // NEST
{
  Push(0x62ef); // pointer to (SHIPBOX
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  SHP_gt_C(); // SHP>C
  IEXTRACT(); // IEXTRACT
  _gt__bo_CONTEXT_bc_(); // >[CONTEXT]
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  IINSERT(); // IINSERT
  _ex__bo_CONTEXT_bc_(); // ![CONTEXT]
  CI(); // CI
  _n_CPARMS(); // #CPARMS
  _ex_CPARMS(); // !CPARMS
  CTXT_n_(); // CTXT#
  Push(Read16(regsp)); // DUP
  Push(0xc9d2);
  MODULE(); // MODULE
  Push(Read16(regsp)); // DUP
  UNK_0xe9bb(); // UNK_0xe9bb
  Push(Read16(regsp)); // DUP
  Pop();
  switch(Pop()) // NEST-SETUP
  {
  case 1:
    UNK_0xdb04(); // UNK_0xdb04
    break;
  case 2:
    UNK_0xe107(); // UNK_0xe107
    break;
  case 4:
    UNK_0xdd6a(); // UNK_0xdd6a
    break;
  case 5:
    UNK_0xddc4(); // UNK_0xddc4
    break;
  default:
    NOP(); // NOP
    break;

  }
  Push(Read16(regsp)); // DUP
  Push(0xc9fe);
  MODULE(); // MODULE
  UNK_0xd976(); // UNK_0xd976
  _gt_CONS_dash_DISP(); // >CONS-DISP
  UNK_0xe325(); // UNK_0xe325
  Push(0xc9c4);
  MODULE(); // MODULE
  CTXT_n_(); // CTXT#
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _dot_MVS(); // .MVS

  label1:
  UNK_0xe293(); // UNK_0xe293
  Push2Words("NULL");
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  UNK_0xe93f(); // UNK_0xe93f
  Push(0x5d0a); // pointer to FORCEKEY
  OFF(); // OFF
}


// ================================================
// 0xea58: WORD 'UNK_0xea5a' codep=0x224c parp=0xea5a
// ================================================

void UNK_0xea5a() // UNK_0xea5a
{
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  Push(0x640a); // IFIELD(UNK_0xda56)
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x6126); // pointer to ENC-TIME
  _2_at_(); // 2@
  D_gt_(); // D>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  NEST(); // NEST
  return;

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xea7e: WORD 'UNK_0xea80' codep=0x224c parp=0xea80
// ================================================

void UNK_0xea80() // UNK_0xea80
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x0018);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  CI(); // CI
  ICLOSE(); // ICLOSE
  NEST(); // NEST
  return;

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeaa2: WORD 'UNK_0xeaa4' codep=0x224c parp=0xeaa4
// ================================================

void UNK_0xeaa4() // UNK_0xeaa4
{
  Push(0x59e8); // pointer to IGLOBAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_AT(); // ?ICONS-AT
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_ICON(); // POINT>ICON
  _at_ID(); // @ID
  Push(0x00ff);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  _ex_IC(); // !IC
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  Push(1); // 1
  _ex_INST_dash_SIB(); // !INST-SIB
  ICLOSE(); // ICLOSE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffe0

}


// ================================================
// 0xead8: WORD 'JMPSHP' codep=0x224c parp=0xeae3
// ================================================
// entry

void JMPSHP() // JMPSHP
{
  Push(0); // 0
  Push(cc__8); // 8
  RRND(); // RRND
  Push(cc_UNK_0xd9b0); // UNK_0xd9b0
  Push(Pop()+1); // 1+
  UNK_0xe6a0(); // UNK_0xe6a0
  UNK_0xe560(); // UNK_0xe560
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x00fa);
  Push(0xd9fe); // pointer to UNK_0xd9fe
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0x01f4);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x6136); // pointer to NAV-TIME
  D_ex_(); // D!
  _at_XYABS(); // @XYABS
  UNK_0xda86(); // UNK_0xda86
  UNK_0xe85e(); // UNK_0xe85e
  Push(0x5cfc); // pointer to ?NEB
  _ex__3(); // !_3
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb1b: WORD 'UNK_0xeb1d' codep=0x224c parp=0xeb1d
// ================================================

void UNK_0xeb1d() // UNK_0xeb1d
{
  _gt_C_plus_S(); // >C+S
  UNK_0xda72(); // UNK_0xda72
  UNK_0xeaa4(); // UNK_0xeaa4
  Push(0x63fa); // IFIELD(UNK_0xda47)
  Push(Read16(Pop())); // @
  Push(0x6400); // IFIELD(UNK_0xda4c)
  Push(Read16(Pop())); // @
  UNK_0xeaa4(); // UNK_0xeaa4
  Push(0xc4e5);
  MODULE(); // MODULE
  Push(0x5dc7); // pointer to HEADING
  Push(Read16(Pop())); // @
  Push(0x63fa); // IFIELD(UNK_0xda47)
  Push(Read16(Pop())); // @
  Push(0x6400); // IFIELD(UNK_0xda4c)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  JMPSHP(); // JMPSHP
  _dot_MVS(); // .MVS
}


// ================================================
// 0xeb47: WORD 'COLLIDE' codep=0x4a4f parp=0xeb53
// ================================================
// 0xeb53: db 0x05 0x00 0xe0 0x0d 0x0b 0x00 0x80 0xea 0x12 0x00 0xf0 0xe9 0x17 0x00 0xf0 0xe9 0x2d 0x00 0x1d 0xeb 0x3d 0x00 0x5a 0xea '                -   = Z '

// ================================================
// 0xeb6b: WORD 'UNK_0xeb6d' codep=0x224c parp=0xeb6d
// ================================================

void UNK_0xeb6d() // UNK_0xeb6d
{
  IOPEN(); // IOPEN
  Push(0x0018);
  Push(0); // 0
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb7d: WORD '?~C' codep=0x4a4f parp=0xeb85
// ================================================
// 0xeb85: db 0x03 0x00 0x22 0x0f 0x0b 0x00 0x6d 0xeb 0x12 0x00 0x30 0x0f 0x17 0x00 0x30 0x0f '  "   m   0   0 '

// ================================================
// 0xeb95: WORD '?COLLISION' codep=0x224c parp=0xeb97
// ================================================

void _ask_COLLISION() // ?COLLISION
{
  UNK_0xda9e(); // UNK_0xda9e
  Push(cc_UNK_0xd9b0); // UNK_0xd9b0
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_LOCUS(); // ?ICONS-LOCUS
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push2Words("NULL");
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _1_dot_5_ex_(); // 1.5!
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_ICON(); // POINT>ICON
  _at_IL(); // @IL
  _at_IH(); // @IH
  Push2Words("*SHIP");
  D_eq_(); // D=
  _at_ID(); // @ID
  Push(0x0033);
  Push(0x0083);
  WITHIN(); // WITHIN
  _at_IC(); // @IC
  SetColor("DK-GREEN");
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  CTXT_n_(); // CTXT#
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  _at_IL(); // @IL
  _at_IH(); // @IH
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _1_dot_5_ex_(); // 1.5!

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffc6

  Push(0xd9f0); // pointer to UNK_0xd9f0
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(Read16(regsp)); // DUP
  Push(0x0019);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label4;
  Push(Read16(regsp)); // DUP
  Pop();
  switch(Pop()) // ?~C
  {
  case 11:
    UNK_0xeb6d(); // UNK_0xeb6d
    break;
  case 18:
    Push(1); // 1
    break;
  case 23:
    Push(1); // 1
    break;
  default:
    Push(0); // 0
    break;

  }
  if (Pop() == 0) goto label5;
  Push(0x0096);
  Push(0x0fa0);
  Push(1); // 1
  _gt_SND(); // >SND

  label5:
  UNK_0xda72(); // UNK_0xda72
  UNK_0xda86(); // UNK_0xda86

  label4:
  ICLOSE(); // ICLOSE
  Push(1); // 1
  goto label6;

  label3:
  Push(0); // 0

  label6:
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xec37: WORD 'UNK_0xec39' codep=0x224c parp=0xec39
// ================================================

void UNK_0xec39() // UNK_0xec39
{
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  Push(0xd9ec); // pointer to UNK_0xd9ec
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(0x5b1e); // pointer to ?PORT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  CTXT_n_(); // CTXT#
  Push(1); // 1
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
}


// ================================================
// 0xec5b: WORD '?2NEST.ETC' codep=0x224c parp=0xec5d
// ================================================

void _ask_2NEST_dot_ETC() // ?2NEST.ETC
{
  UNK_0xec39(); // UNK_0xec39
  if (Pop() == 0) goto label1;
  PLN_gt_C(); // PLN>C
  IOPEN(); // IOPEN
  Push(0x003d);
  Push(0); // 0
  IFIND(); // IFIND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label2;
  Push(0x640a); // IFIELD(UNK_0xda56)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label3;
  CI(); // CI
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _1_dot_5_ex_(); // 1.5!
  Push(0xd9ec); // pointer to UNK_0xd9ec
  ON_3(); // ON_3

  label3:
  Push(Pop() & Pop()); // AND

  label2:
  UNK_0xd9a8(); // UNK_0xd9a8
  Push(Pop() & Pop()); // AND

  label1:
  if (Pop() == 0) goto label4;
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  _at_INST_dash_CLASS(); // @INST-CLASS
  ICLOSE(); // ICLOSE
  Push(1); // 1
  return;

  label4:
  Push(0); // 0
}


// ================================================
// 0xeca7: WORD '?STARPORT' codep=0x224c parp=0xeca9
// ================================================

void _ask_STARPORT() // ?STARPORT
{
  UNK_0xec39(); // UNK_0xec39
  if (Pop() == 0) goto label1;
  UNK_0xd998(); // UNK_0xd998
  Push(0x63fa); // IFIELD(FLAREDATE)
  Push(Read16(Pop())); // @
  Push(0x5e74); // pointer to STARDATE
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(0x567c); // pointer to ?WIN
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0x63fa); // IFIELD(FLAREDATE)
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR

  label2:
  ICLOSE(); // ICLOSE
  PLN_gt_C(); // PLN>C
  IOPEN(); // IOPEN
  Push(0x000c);
  Push(0); // 0
  IFIND(); // IFIND
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label3;
  CI(); // CI
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _1_dot_5_ex_(); // 1.5!
  Push(0xd9ec); // pointer to UNK_0xd9ec
  ON_3(); // ON_3

  label3:
  UNK_0xd9a8(); // UNK_0xd9a8
  Push(Pop() & Pop()); // AND

  label1:
  if (Pop() == 0) goto label4;
  Push2Words("*SHIP-CONFIG");
  Push(0x0012);
  Push(1); // 1
  Push(0x003a);
  Push(0x548f); // pointer to FILE#
  _ex__3(); // !_3
  Push(1); // 1
  Push(0x549d); // pointer to RECORD#
  _ex__3(); // !_3

  UNK_0x3f3b("LAUNCH");
  LoadData("1BTN"); // from 'BUTTONS     '
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CURRENT(); // SET-CURRENT
  return;

  label4:
  Push(0); // 0
}


// ================================================
// 0xed26: WORD 'UNNEST-CLEAN' codep=0x4a4f parp=0xed32
// ================================================
// 0xed32: db 0x04 0x00 0x48 0x3a 0x01 0x00 0x32 0xdb 0x02 0x00 0x2b 0xe1 0x04 0x00 0xc6 0xdc 0x05 0x00 0xda 0xdd '  H:  2   +         '

// ================================================
// 0xed46: WORD 'UNNEST-SPACEXY' codep=0x224c parp=0xed48
// ================================================

void UNNEST_dash_SPACEXY() // UNNEST-SPACEXY
{
  Push(cc__5); // 5
  _st_(); // <
  if (Pop() == 0) return;
  Push(0x5dc7); // pointer to HEADING
  Push(Read16(Pop())); // @
  Push(0xd9e4); // pointer to UNK_0xd9e4
  Push(Read16(Pop())); // @
  Push(0xd9e8); // pointer to UNK_0xd9e8
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  PICK(); // PICK
  Push(cc_UNK_0xd9b0); // UNK_0xd9b0
  Push(Pop()+1); // 1+
  UNK_0xe6a0(); // UNK_0xe6a0
  UNK_0xe560(); // UNK_0xe560
}


// ================================================
// 0xed6a: WORD '?UNNEST' codep=0x224c parp=0xed6c
// ================================================

void _ask_UNNEST() // ?UNNEST
{
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() == 0) goto label1;
  Push(0); // 0
  return;

  label1:
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x003d);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  _at_XYABS(); // @XYABS
  Push(0xd9dc); // pointer to UNK_0xd9dc
  Push(Read16(Pop())); // @
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_LOCUS(); // ?ICONS-LOCUS
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label3;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Pop(); // DROP
  i++;
  } while(i<imax); // (LOOP) 0xfffc


  label3:
  R_gt_(); // R>
  Push(1); // 1
  _eq_(); // =
  return;

  label2:
  _at_XYABS(); // @XYABS
  ABS(); // ABS
  SWAP(); // SWAP
  ABS(); // ABS
  MAX(); // MAX
  Push(0xd9dc); // pointer to UNK_0xd9dc
  Push(Read16(Pop())); // @
  _gt_(); // >
}


// ================================================
// 0xedc0: WORD '?DOUBLE-UNNEST' codep=0x224c parp=0xedc2
// ================================================

void _ask_DOUBLE_dash_UNNEST() // ?DOUBLE-UNNEST
{
  Push(0xd9ec); // pointer to UNK_0xd9ec
  Push(Read16(Pop())); // @
  Push(0x5c13); // pointer to SKIP2NEST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  CTXT_n_(); // CTXT#
  Push(1); // 1
  _eq_(); // =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xedd8: WORD 'UNNEST' codep=0x224c parp=0xede3
// ================================================
// entry

void UNNEST() // UNNEST
{
  Push(0x62ef); // pointer to (SHIPBOX
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  SHP_gt_C(); // SHP>C
  IEXTRACT(); // IEXTRACT
  ICLOSE(); // ICLOSE
  CTXT_n_(); // CTXT#
  _gt_R(); // >R
  Push(h); // I
  Push(0xc9b6);
  MODULE(); // MODULE
  Push(h); // I
  Pop();
  switch(Pop()) // UNNEST-CLEAN
  {
  case 1:
    UNK_0xdb32(); // UNK_0xdb32
    break;
  case 2:
    UNK_0xe12b(); // UNK_0xe12b
    break;
  case 4:
    UNK_0xdcc6(); // UNK_0xdcc6
    break;
  case 5:
    UNK_0xddda(); // UNK_0xddda
    break;
  default:
    NOP(); // NOP
    break;

  }
  _gt__bo_CONTEXT_bc_(); // >[CONTEXT]
  ICLOSE(); // ICLOSE
  CI(); // CI
  IINSERT(); // IINSERT
  _ex__bo_CONTEXT_bc_(); // ![CONTEXT]
  CI(); // CI
  _n_CPARMS(); // #CPARMS
  _ex_CPARMS(); // !CPARMS
  _gt_CONS_dash_DISP(); // >CONS-DISP
  Push(h); // I
  UNNEST_dash_SPACEXY(); // UNNEST-SPACEXY
  UNK_0xdad0(); // UNK_0xdad0
  UNK_0xd976(); // UNK_0xd976
  CTXT_n_(); // CTXT#
  Push(0xc9fe);
  MODULE(); // MODULE
  UNK_0xe325(); // UNK_0xe325
  R_gt_(); // R>
  Push(0xc9a8);
  MODULE(); // MODULE
  _dot_MVS(); // .MVS
  UNK_0xe293(); // UNK_0xe293
  Push(0xda02); // pointer to UNK_0xda02
  _at_EXECUTE(); // @EXECUTE
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push2Words("NULL");
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  Push(0x5c13); // pointer to SKIP2NEST
  OFF(); // OFF
  UNK_0xe93f(); // UNK_0xe93f
  Push(0x5d0a); // pointer to FORCEKEY
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(0x5d0a); // pointer to FORCEKEY
  _ex__3(); // !_3
}


// ================================================
// 0xee51: WORD 'UNK_0xee53' codep=0x224c parp=0xee53
// ================================================

void UNK_0xee53() // UNK_0xee53
{
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() == 0) return;
  Push(0); // 0
  MAX(); // MAX
  Push(0x00db);
  Push(cc__star_MAPSCALE); // *MAPSCALE
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  SWAP(); // SWAP
  Push(0); // 0
  MAX(); // MAX
  Push(0x00f9);
  Push(cc__star_MAPSCALE); // *MAPSCALE
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  SWAP(); // SWAP
}


// ================================================
// 0xee7b: WORD '(GET-AUX' codep=0x224c parp=0xee87
// ================================================
// entry

void _ro_GET_dash_AUX() // (GET-AUX
{
  Push(0x5d81); // pointer to #AUX
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _dot_AUXSYS(); // .AUXSYS
}


// ================================================
// 0xee99: WORD 'UNK_0xee9b' codep=0x224c parp=0xee9b
// ================================================

void UNK_0xee9b() // UNK_0xee9b
{
  _ask_UNNEST(); // ?UNNEST
  _ask_DOUBLE_dash_UNNEST(); // ?DOUBLE-UNNEST
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNNEST(); // UNNEST

  label1:
  _ask_COLLISION(); // ?COLLISION
  _gt_R(); // >R
  _ask_2NEST_dot_ETC(); // ?2NEST.ETC
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  _gt_R(); // >R
  _ask_STARPORT(); // ?STARPORT
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Pop();
  switch(Pop()) // COLLIDE
  {
  case 11:
    UNK_0xea80(); // UNK_0xea80
    break;
  case 18:
    NEST(); // NEST
    break;
  case 23:
    NEST(); // NEST
    break;
  case 45:
    UNK_0xeb1d(); // UNK_0xeb1d
    break;
  case 61:
    UNK_0xea5a(); // UNK_0xea5a
    break;
  default:
    Pop(); Pop();// 2DROP
    break;

  }
}


// ================================================
// 0xeec1: WORD 'FLY' codep=0x224c parp=0xeec9
// ================================================
// entry

void FLY() // FLY
{
  UNK_0xe6f8(); // UNK_0xe6f8
  UNK_0xee53(); // UNK_0xee53
  UNK_0xe560(); // UNK_0xe560
  UNK_0xe7ec(); // UNK_0xe7ec
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() == 0) goto label1;
  Push(0x5cfc); // pointer to ?NEB
  Push(Read16(Pop())); // @
  Push(0xda12); // pointer to UNK_0xda12
  _ex__3(); // !_3
  UNK_0xe85e(); // UNK_0xe85e
  Push(0x5cfc); // pointer to ?NEB
  _ex__3(); // !_3

  label1:
  Push(0x5cfc); // pointer to ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  SHP_gt_C(); // SHP>C
  Push(0x6434); // IFIELD(UNK_0xda42)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
  goto label3;

  label2:
  Push(0); // 0

  label3:
  _dot_MVS(); // .MVS
  if (Pop() == 0) goto label4;
  Push(0xcb4e);
  MODULE(); // MODULE

  label4:
  UNK_0xee9b(); // UNK_0xee9b
}


// ================================================
// 0xef0f: WORD 'UNK_0xef11' codep=0x224c parp=0xef11
// ================================================

void UNK_0xef11() // UNK_0xef11
{
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc_UNK_0xd9c4); // UNK_0xd9c4
  Push(-Pop()); // NEGATE
  Push(0x000c);
  _dash_(); // -
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() * Pop()); // *
  MAX(); // MAX
  Push(cc__star_MAPSCALE); // *MAPSCALE
}


// ================================================
// 0xef2b: WORD 'SET-DESTINATION' codep=0x224c parp=0xef37
// ================================================

void SET_dash_DESTINATION() // SET-DESTINATION
{
  Push(Read16(regsp)); // DUP
  Push(0x0152);
  _eq_(); // =
  OVER(); // OVER
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x5d0a); // pointer to FORCEKEY
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(0x5d76); // pointer to SKEY
  Push(Read16(Pop())); // @
  Push(0x005b);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(0x5d0a); // pointer to FORCEKEY
  _ex__3(); // !_3
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0x5d76); // pointer to SKEY
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x5c95); // pointer to LKEY
  _ex__3(); // !_3

  label1:
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
  Push(0x5d76); // pointer to SKEY
  Push(Read16(Pop())); // @
  Push(0x005b);
  _gt_(); // >
  if (Pop() == 0) goto label2;
  UNK_0xe95f(); // UNK_0xe95f
  goto label3;

  label2:
  Push(1); // 1
  Push(0xe925); // pointer to UNK_0xe925
  _ex__3(); // !_3
  Push(0x0060);
  Push(0xda0a); // pointer to UNK_0xda0a
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(0xe921); // pointer to UNK_0xe921
  _ex__3(); // !_3

  label3:
  Push(0xe925); // pointer to UNK_0xe925
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(0x5dae); // pointer to XABS
  UNK_0xef11(); // UNK_0xef11
  Push(0x00f9);
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  Push(0xd9f6); // pointer to UNK_0xd9f6
  _ex__3(); // !_3
  Push(Pop() * Pop()); // *
  Push(0x5db9); // pointer to YABS
  UNK_0xef11(); // UNK_0xef11
  Push(0x00db);
  Push(Pop() * Pop()); // *
  MIN(); // MIN
  Push(0xd9fa); // pointer to UNK_0xd9fa
  _ex__3(); // !_3
  Push(0x5d0a); // pointer to FORCEKEY
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) goto label4;
  Push(0x5d0a); // pointer to FORCEKEY
  OFF(); // OFF

  label4:
  Push(0x5c7e); // pointer to FTRIG
  Push(Read16(Pop())); // @
  Push2Words("NULL");
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  D_eq_(); // D=
  UNK_0xdafa(); // UNK_0xdafa
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(0x53b1); // pointer to ?AUTO
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label5;
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _i_KEY(); // 'KEY
  Pop(); // DROP

  label5:
  FLY(); // FLY
}


// ================================================
// 0xeff7: WORD 'SETUP-MOV' codep=0x224c parp=0xf003
// ================================================

void SETUP_dash_MOV() // SETUP-MOV
{
  Push(0x5ae7); // pointer to FORCEPTASK
  ON_3(); // ON_3
  Push(0x5d0a); // pointer to FORCEKEY
  OFF(); // OFF
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x60ba); // pointer to VSTIME
  D_ex_(); // D!
  Push(0xbf98);
  Push(0x5f40); // pointer to 'VEHICLE-CYCLE
  _ex__3(); // !_3
  Push(0xbf68);
  Push(0x5f32); // pointer to '.VEHICLE-STATUS
  _ex__3(); // !_3
  Push(0x53b1); // pointer to ?AUTO
  OFF(); // OFF
  SHP_gt_C(); // SHP>C
  Push(0x6438); // IFIELD(UNK_0xda1f)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x5dc7); // pointer to HEADING
  _ex__3(); // !_3
  Push(0xbd4a);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  UNK_0xe93f(); // UNK_0xe93f
  Push(cc__8); // 8
  Push(0xbdd8);
  MODULE(); // MODULE
  Push(Pop()<<4); // 16*
  Push(0xda06); // pointer to UNK_0xda06
  _ex__3(); // !_3
  CTXT_n_(); // CTXT#
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(cc__6); // 6
  Push(0xc9b6);
  MODULE(); // MODULE

  label1:
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x6406); // IFIELD(UNK_0xdbe1)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x640a); // IFIELD(UNK_0xdbe6)
  Push(Read8(Pop())&0xFF); // C@
  Push(0xd9fe); // pointer to UNK_0xd9fe
  _ex__3(); // !_3
  UNK_0xd9a8(); // UNK_0xd9a8
  UNK_0xd976(); // UNK_0xd976
  _gt_CONS_dash_DISP(); // >CONS-DISP
  Push(0x5dc7); // pointer to HEADING
  Push(Read16(Pop())); // @
  _at_XYABS(); // @XYABS
  CTXT_n_(); // CTXT#
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(cc__6); // 6
  Push(0xc9a8);
  MODULE(); // MODULE
  Push(0x5dc7); // pointer to HEADING
  Push(Read16(Pop())); // @
  Push(1); // 1
  UNK_0xe6a0(); // UNK_0xe6a0
  UNK_0xe560(); // UNK_0xe560
  goto label3;

  label2:
  UNK_0xe4fa(); // UNK_0xe4fa

  label3:
  UNK_0xdad0(); // UNK_0xdad0
  FLY(); // FLY
}


// ================================================
// 0xf09f: WORD 'CLEANUP-MOV' codep=0x224c parp=0xf0ab
// ================================================

void CLEANUP_dash_MOV() // CLEANUP-MOV
{
  Push(0x5ae7); // pointer to FORCEPTASK
  OFF(); // OFF
  Push(0x5d0a); // pointer to FORCEKEY
  OFF(); // OFF
  Push2Words("*STARSHIP-HOLD");
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
  if (Pop() == 0) goto label1;
  Push(0x6106); // pointer to 10*END
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3

  label1:
  Push(0xbd4a);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  UNK_0xd9a8(); // UNK_0xd9a8
  CTXT_n_(); // CTXT#
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label2;
  ORBUP(); // ORBUP

  label2:
  UNK_0xdac6(); // UNK_0xdac6
  if (Pop() == 0) goto label3;
  Push(0xc9ef);
  MODULE(); // MODULE

  label3:
  Push(0xc104);
  Push(0x5f40); // pointer to 'VEHICLE-CYCLE
  _ex__3(); // !_3
  Push(0x53b1); // pointer to ?AUTO
  ON_3(); // ON_3
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xf119: WORD 'CHK-MOV' codep=0x224c parp=0xf125
// ================================================
// entry

void CHK_dash_MOV() // CHK-MOV
{
  Push(0); // 0
  Push2Words("*STARSHIP-HOLD");
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
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(0x000a);
  U_star_(); // U*
  CDROP(); // CDROP
  goto label2;

  label1:
  Push2Words("NULL");

  label2:
  _2DUP(); // 2DUP
  Push(0x6106); // pointer to 10*END
  D_ex_(); // D!
  UNK_0xd9a8(); // UNK_0xd9a8
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(cc__5); // 5
  Push(0xbdef);
  MODULE(); // MODULE
  if (Pop() == 0) goto label4;
  CTXT_n_(); // CTXT#
  Push(1); // 1
  Push(cc__5); // 5
  WITHIN(); // WITHIN
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label5;
  CTINIT(); // CTINIT

  UNK_0x3f3b("STANDING BY TO LAUNCH");
  _dot_TTY(); // .TTY
  goto label4;

  label5:
  Push(Pop()+1); // 1+

  label4:
  return;

  label3:
  Push(1); // 1
  Push(0xc9e0);
  MODULE(); // MODULE
}


// ================================================
// 0xf1b3: WORD 'UNK_0xf1b5' codep=0x224c parp=0xf1b5
// ================================================

void UNK_0xf1b5() // UNK_0xf1b5
{
  CTXT_n_(); // CTXT#
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(0x5a5c); // pointer to CONTEXT-ID#
  _ex__3(); // !_3

  label1:
  Push(0x003a);
  Push(0x548f); // pointer to FILE#
  _ex__3(); // !_3
  Push(1); // 1
  Push(0x549d); // pointer to RECORD#
  _ex__3(); // !_3

  UNK_0x3f3b("LAUNCH");
  LoadData("1BTN"); // from 'BUTTONS     '
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf1e4: WORD '+NEST' codep=0x224c parp=0xf1ee
// ================================================
// entry

void _plus_NEST() // +NEST
{
  _2DUP(); // 2DUP
  Push(0xd9f0); // pointer to UNK_0xd9f0
  _1_dot_5_ex_(); // 1.5!
  NEST(); // NEST
}


// ================================================
// 0xf1f8: WORD 'COME-HITHER' codep=0x224c parp=0xf204
// ================================================
// entry

void COME_dash_HITHER() // COME-HITHER
{
  SetColor("BLUE");
  Push(0x531d); // pointer to TCLR
  _ex__3(); // !_3
  UNK_0xf1b5(); // UNK_0xf1b5

  label2:
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x629f); // pointer to (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ASYS");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  CTXT_n_(); // CTXT#
  Push(2); // 2
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNNEST(); // UNNEST
  goto label2;

  label1:
  Push(0x5cfc); // pointer to ?NEB
  OFF(); // OFF
  UNK_0xdafa(); // UNK_0xdafa
  if (Pop() == 0) goto label3;
  Push2Words("*ASYS");
  _plus_NEST(); // +NEST

  label3:
  UNK_0xd998(); // UNK_0xd998
  IOPEN(); // IOPEN

  label5:
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label4;
  INEXT(); // INEXT
  goto label5;

  label4:
  CI(); // CI
  UNK_0xd9a8(); // UNK_0xd9a8
  _plus_NEST(); // +NEST
  Push2Words("*SHIP-CONFIG");
  _plus_NEST(); // +NEST
  SetColor("WHITE");
  Push(0x531d); // pointer to TCLR
  _ex__3(); // !_3
}

// 0xf266: db 0x53 0x48 0x50 0x4d 0x4f 0x56 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x49 0x58 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x36 0x2f 0x31 0x30 0x2f 0x38 0x36 0x29 0x32 0x34 0x30 0x31 0x4c 0x22 0x5d 0x17 0x5d 0xeb 0x44 0xec 0xa8 0xee 0x89 0x12 0xfa 0x15 0x2c 0x00 0xaf 0x53 0xae 0x0b 0x07 0x13 0xfa 0x15 0x0c 0x00 0x83 0x3b 0x5d 0x17 0xef 0xbd 0xce 0x84 0x32 0x0e 0x5d 0x17 0x62 0xeb 0xd3 0x7c 0x5d 0x17 0x80 0x00 0x3e 0x13 0x5d 0x17 0x62 0xeb 0xed 0x7c 0xaf 0x53 0xb7 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x67 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x71 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x85 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x7b 0xeb 0x44 0xec 0xf8 0xee 0x89 0x12 0xfa 0x15 0x08 0x00 0xbb 0xea 0xae 0x0b 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x8f 0xeb 0x44 0xec 0x90 0x16 0x0c 0xef 0x88 0x23 0x3e 0x44 0x41 0x4d 0x41 0xc7 0x4f 0x4a 0x08 0x00 0x34 0x0e 0x01 0x00 0xa2 0xf2 0x02 0x00 0xac 0xf2 0x03 0x00 0xe8 0xf2 0x04 0x00 0xf2 0xf2 0x05 0x00 0xfc 0xf2 0x06 0x00 0x1e 0xf3 0x07 0x00 0xe0 0xf0 0x08 0x00 0x06 0xf3 0x4c 0x22 0x41 0x0e 0x2e 0x0f 0xf2 0x0e 0xe7 0x0f 0xd8 0x4a 0x5d 0x17 0x0a 0x00 0x89 0x11 0x41 0x0e 0xb4 0x0d 0x92 0x0f 0x20 0x0f 0x89 0x11 0x90 0x0e 0x90 0x16 0x4c 0x22 0x88 0xec 0xfa 0x15 0x08 0x00 0x46 0xf2 0x60 0x16 0x1e 0x00 0xa1 0xeb 0xae 0x0b 0xfa 0x15 0x08 0x00 0x68 0xf2 0x60 0x16 0x10 0x00 0x5d 0x17 0x0a 0x00 0x51 0xeb 0x92 0x0c 0xc4 0x0f 0x74 0xef 0x30 0xf3 0x90 0x16 0x4c 0x22 0xc8 0x0d 0x89 0x12 0x07 0x13 0xfa 0x15 0x0a 0x00 0x56 0xf3 0x76 0xf3 0x60 0x16 0xf0 0xff 0x98 0xed 0xae 0x0b 0xfa 0x15 0x10 0x00 0x2c 0xf0 0x5d 0x17 0x12 0xc0 0xce 0x84 0x5d 0x17 0x3f 0xc0 0xce 0x84 0xf0 0xec 0x5d 0x17 0x53 0xeb 0xd3 0x7c 0x89 0x12 0xfa 0x15 0x04 0x00 0x25 0xee 0xfe 0xee 0x89 0x12 0xfa 0x15 0x04 0x00 0x44 0xee 0x90 0x16 0x4c 0x22 0x34 0xed 0x05 0x10 0xf3 0xea 0xa2 0xf3 0xc9 0x79 0x90 0x16 0x4c 0x22 0xd8 0xeb 0x6a 0x6d 0xdc 0xeb 0xac 0x6d 0x90 0x16 0x4c 0x22 0xa1 0x8b 0x17 0x85 0xe9 0x89 0x08 0xec 0x6e 0x99 0xb2 0x99 0xf2 0x0e 0x73 0x3b 0x72 0x0f 0xf2 0x0e 0x73 0x3b 0x92 0x0f 0x0f 0x62 0xae 0x0b 0x8b 0x3b 0xad 0x11 0x3d 0x0f 0xb8 0x15 0xf0 0x0d 0x50 0x0e 0x5c 0x96 0x3d 0x0f 0x5c 0x15 0xf6 0xff 0xde 0x0d 0xab 0x90 0x90 0x16 0x4c 0x22 0x02 0xf4 0x28 0xa5 0x05 0x8a 0xcf 0x8b 0xe2 0xeb 0x41 0x0e 0x8b 0x3b 0x5f 0x12 0xfa 0x15 0x18 0x00 0x32 0x0e 0x39 0x3f 0x0b 0x50 0x4c 0x41 0x53 0x4d 0x41 0x20 0x42 0x4f 0x4c 0x54 0x47 0xa5 0x60 0x16 0x17 0x00 0x39 0x3f 0x0e 0x4d 0x49 0x53 0x53 0x49 0x4c 0x45 0x20 0x43 0x4c 0x41 0x53 0x53 0x20 0x47 0xa5 0xb8 0x27 0x90 0x16 0x4c 0x22 0xf6 0xf3 0xf3 0xea 0x89 0x4f 0x02 0xf4 0x08 0xec 0x38 0xf2 0xb4 0x0d 0xf3 0x59 0xae 0x0b 0x94 0x9d 0xc8 0x0d 0xfa 0x15 0x44 0x00 0xa2 0x0e 0xf2 0x0e 0x20 0x0f 0xb8 0x15 0x41 0x0e 0xb3 0x0e 0xe8 0x9c 0x12 0x9b 0x22 0x9b 0xf2 0x79 0x1e 0x75 0x5d 0x17 0x14 0x00 0x5f 0x12 0x07 0x13 0xfa 0x15 0x18 0x00 0x27 0xeb 0x92 0x0c 0xfa 0x15 0x08 0x00 0x98 0xf1 0x60 0x16 0x06 0x00 0x32 0x0e 0xc9 0x79 0x60 0x16 0x06 0x00 0x32 0x0e 0xc9 0x79 0xd0 0x15 0xca 0xff 0x32 0x0e 0x90 0x0e 0x32 0x0e 0xc9 0x79 0x90 0x16 0x4c 0x22 0xf6 0xf3 0x38 0x4f 0x3a 0xf4 0x38 0xf2 0xf3 0xea 0xa2 0xf3 0xc9 0x79 0x90 0x16 0x4c 0x22 0xfa 0x15 0x08 0x00 0x7d 0xf4 0x60 0x16 0x04 0x00 0xe3 0xf4 0x90 0x16 0x4c 0x22 0xfa 0x15 0x08 0x00 0xea 0xf1 0x60 0x16 0x04 0x00 0xe8 0xf3 0x90 0x16 0x20 0xf2 0x89 0x44 0x4f 0x2d 0x44 0x41 0x4d 0xc1 0x4c 0x22 0xfa 0x15 0x08 0x00 0xf5 0xf4 0x60 0x16 0x04 0x00 0x05 0xf5 0x90 0x16 0x44 0x41 0x4d 0x41 0x47 0x45 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'SHPMOV-_________________________IX ---------------------6/10/86)2401L"] ] D       ,  S         ;]     2 ] b  |]   > ] b  | S m  L"] g D   L"] q D   L"]   D   L"] { D                 L"]   D      #>DAMA OJ  4                                 L"A .      J]     A             L"      F `           h `   ]   Q     t 0   L"          V v `           , ]     ] ?     ] S  |      %         D   L"4        y  L"  jm   m  L"        n     s;r   s;   b   ;  =     P \ = \         L"  (       A  ;_     2 9? PLASMA BOLTG `   9? MISSILE CLASS G  '  L"     O    8    Y        D         A       "  y u]   _       '         `   2  y`   2  y    2   2  y  L"  8O: 8      y  L"    } `       L"      `          DO-DAM L"      `       DAMAGE-_________________________----------------- '
  