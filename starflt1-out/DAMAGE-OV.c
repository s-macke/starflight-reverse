// ====== OVERLAY 'DAMAGE-OV' ======
// store offset = 0xeaa0
// overlay size   = 0x0ac0

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0xab79 C-string:'UNK_0x3f3b'
// 1704:            'OVS  codep:0x1d29 parp:0xeabd size:0x0002 C-string:'_i_OVS'
// 1705:      UNK_0xeac1  codep:0x224c parp:0xeac1 size:0x0006 C-string:'UNK_0xeac1'
// 1706:      UNK_0xeac9  codep:0x224c parp:0xeac9 size:0x000a C-string:'UNK_0xeac9'
// 1707:      UNK_0xead5  codep:0x224c parp:0xead5 size:0x0012 C-string:'UNK_0xead5'
// 1708:      UNK_0xeae9  codep:0x224c parp:0xeae9 size:0x000a C-string:'UNK_0xeae9'
// 1709:      UNK_0xeaf5  codep:0x224c parp:0xeaf5 size:0x000a C-string:'UNK_0xeaf5'
// 1710:      UNK_0xeb01  codep:0x73ea parp:0xeb01 size:0x0006 C-string:'UNK_0xeb01'
// 1711:      UNK_0xeb09  codep:0x73ea parp:0xeb09 size:0x0016 C-string:'UNK_0xeb09'
// 1712:      UNK_0xeb21  codep:0x73ea parp:0xeb21 size:0x0006 C-string:'UNK_0xeb21'
// 1713:      UNK_0xeb29  codep:0x73ea parp:0xeb29 size:0x0006 C-string:'UNK_0xeb29'
// 1714:      UNK_0xeb31  codep:0x744d parp:0xeb31 size:0x0008 C-string:'UNK_0xeb31'
// 1715:      UNK_0xeb3b  codep:0x744d parp:0xeb3b size:0x0003 C-string:'UNK_0xeb3b'
// 1716:      UNK_0xeb40  codep:0x744d parp:0xeb40 size:0x0003 C-string:'UNK_0xeb40'
// 1717:      UNK_0xeb45  codep:0x744d parp:0xeb45 size:0x0003 C-string:'UNK_0xeb45'
// 1718:      UNK_0xeb4a  codep:0x744d parp:0xeb4a size:0x0007 C-string:'UNK_0xeb4a'
// 1719:      UNK_0xeb53  codep:0x744d parp:0xeb53 size:0x0003 C-string:'UNK_0xeb53'
// 1720:      UNK_0xeb58  codep:0x744d parp:0xeb58 size:0x0026 C-string:'UNK_0xeb58'
// 1721:      UNK_0xeb80  codep:0x744d parp:0xeb80 size:0x0017 C-string:'UNK_0xeb80'
// 1722:      UNK_0xeb99  codep:0x744d parp:0xeb99 size:0x0003 C-string:'UNK_0xeb99'
// 1723:      UNK_0xeb9e  codep:0x744d parp:0xeb9e size:0x0003 C-string:'UNK_0xeb9e'
// 1724:      UNK_0xeba3  codep:0x744d parp:0xeba3 size:0x0008 C-string:'UNK_0xeba3'
// 1725:      UNK_0xebad  codep:0x744d parp:0xebad size:0x0003 C-string:'UNK_0xebad'
// 1726:      UNK_0xebb2  codep:0x744d parp:0xebb2 size:0x0003 C-string:'UNK_0xebb2'
// 1727:      UNK_0xebb7  codep:0x73ea parp:0xebb7 size:0x0006 C-string:'UNK_0xebb7'
// 1728:      UNK_0xebbf  codep:0x744d parp:0xebbf size:0x0003 C-string:'UNK_0xebbf'
// 1729:            RSRC  codep:0x1d29 parp:0xebcb size:0x0009 C-string:'RSRC'
// 1730:      UNK_0xebd6  codep:0x1d29 parp:0xebd6 size:0x0002 C-string:'UNK_0xebd6'
// 1731:      UNK_0xebda  codep:0x1d29 parp:0xebda size:0x0002 C-string:'UNK_0xebda'
// 1732:      UNK_0xebde  codep:0x1d29 parp:0xebde size:0x0004 C-string:'UNK_0xebde'
// 1733:      UNK_0xebe4  codep:0x224c parp:0xebe4 size:0x000c C-string:'UNK_0xebe4'
// 1734:      UNK_0xebf2  codep:0x224c parp:0xebf2 size:0x0008 C-string:'UNK_0xebf2'
// 1735:      UNK_0xebfc  codep:0x224c parp:0xebfc size:0x000c C-string:'UNK_0xebfc'
// 1736:      UNK_0xec0a  codep:0x224c parp:0xec0a size:0x0006 C-string:'UNK_0xec0a'
// 1737:      UNK_0xec12  codep:0x224c parp:0xec12 size:0x001c C-string:'UNK_0xec12'
// 1738:      UNK_0xec30  codep:0x224c parp:0xec30 size:0x0014 C-string:'UNK_0xec30'
// 1739:      UNK_0xec46  codep:0x224c parp:0xec46 size:0x0022 C-string:'UNK_0xec46'
// 1740:      UNK_0xec6a  codep:0x224c parp:0xec6a size:0x001e C-string:'UNK_0xec6a'
// 1741:      UNK_0xec8a  codep:0x224c parp:0xec8a size:0x0014 C-string:'UNK_0xec8a'
// 1742:      UNK_0xeca0  codep:0x224c parp:0xeca0 size:0x001a C-string:'UNK_0xeca0'
// 1743:      UNK_0xecbc  codep:0x224c parp:0xecbc size:0x001a C-string:'UNK_0xecbc'
// 1744:      UNK_0xecd8  codep:0x224c parp:0xecd8 size:0x0018 C-string:'UNK_0xecd8'
// 1745:      UNK_0xecf2  codep:0x224c parp:0xecf2 size:0x0006 C-string:'UNK_0xecf2'
// 1746:         LDAMAGE  codep:0x1d29 parp:0xed04 size:0x000c C-string:'LDAMAGE'
// 1747:      UNK_0xed12  codep:0x224c parp:0xed12 size:0x0022 C-string:'UNK_0xed12'
// 1748:      UNK_0xed36  codep:0x224c parp:0xed36 size:0x0016 C-string:'UNK_0xed36'
// 1749:      UNK_0xed4e  codep:0x224c parp:0xed4e size:0x000a C-string:'UNK_0xed4e'
// 1750:      UNK_0xed5a  codep:0x1d29 parp:0xed5a size:0x0002 C-string:'UNK_0xed5a'
// 1751:      UNK_0xed5e  codep:0x224c parp:0xed5e size:0x000a C-string:'UNK_0xed5e'
// 1752:      UNK_0xed6a  codep:0x224c parp:0xed6a size:0x001c C-string:'UNK_0xed6a'
// 1753:         WOUNDED  codep:0x1d29 parp:0xed92 size:0x0006 C-string:'WOUNDED'
// 1754:      UNK_0xed9a  codep:0x1d29 parp:0xed9a size:0x0002 C-string:'UNK_0xed9a'
// 1755:      UNK_0xed9e  codep:0x224c parp:0xed9e size:0x0040 C-string:'UNK_0xed9e'
// 1756:      UNK_0xede0  codep:0x224c parp:0xede0 size:0x0010 C-string:'UNK_0xede0'
// 1757:      UNK_0xedf2  codep:0x224c parp:0xedf2 size:0x0010 C-string:'UNK_0xedf2'
// 1758:      UNK_0xee04  codep:0x224c parp:0xee04 size:0x0021 C-string:'UNK_0xee04'
// 1759:      UNK_0xee27  codep:0x224c parp:0xee27 size:0x001d C-string:'UNK_0xee27'
// 1760:      UNK_0xee46  codep:0x224c parp:0xee46 size:0x0046 C-string:'UNK_0xee46'
// 1761:      UNK_0xee8e  codep:0x224c parp:0xee8e size:0x0010 C-string:'UNK_0xee8e'
// 1762:         ENGINE-  codep:0xee6d parp:0xeeaa size:0x0004 C-string:'ENGINE_dash_'
// 1763:         SENSOR-  codep:0xee6d parp:0xeeba size:0x0004 C-string:'SENSOR_dash_'
// 1764:         COMM-CH  codep:0xee6d parp:0xeeca size:0x0004 C-string:'COMM_dash_CH'
// 1765:         MISS-CH  codep:0xee6d parp:0xeeda size:0x0004 C-string:'MISS_dash_CH'
// 1766:         LASER-C  codep:0xee6d parp:0xeeea size:0x0004 C-string:'LASER_dash_C'
// 1767:         SHIELD-  codep:0xee6d parp:0xeefa size:0x0004 C-string:'SHIELD_dash_'
// 1768:      UNK_0xef00  codep:0x224c parp:0xef00 size:0x000a C-string:'UNK_0xef00'
// 1769:         #>?FIEL  codep:0x4a4f parp:0xef16 size:0x0024 C-string:'_n__gt__ask_FIEL'
// 1770:      UNK_0xef3c  codep:0x224c parp:0xef3c size:0x0038 C-string:'UNK_0xef3c'
// 1771:      UNK_0xef76  codep:0x224c parp:0xef76 size:0x0016 C-string:'UNK_0xef76'
// 1772:      UNK_0xef8e  codep:0x224c parp:0xef8e size:0x009e C-string:'UNK_0xef8e'
// 1773:      UNK_0xf02e  codep:0x224c parp:0xf02e size:0x0051 C-string:'UNK_0xf02e'
// 1774:      UNK_0xf081  codep:0x1d29 parp:0xf081 size:0x0007 C-string:'UNK_0xf081'
// 1775:      UNK_0xf08a  codep:0x224c parp:0xf08a size:0x0054 C-string:'UNK_0xf08a'
// 1776:      UNK_0xf0e0  codep:0x224c parp:0xf0e0 size:0x0054 C-string:'UNK_0xf0e0'
// 1777:      UNK_0xf136  codep:0x224c parp:0xf136 size:0x002a C-string:'UNK_0xf136'
// 1778:      UNK_0xf162  codep:0x224c parp:0xf162 size:0x0036 C-string:'UNK_0xf162'
// 1779:      UNK_0xf19a  codep:0x224c parp:0xf19a size:0x0050 C-string:'UNK_0xf19a'
// 1780:      UNK_0xf1ec  codep:0x224c parp:0xf1ec size:0x0032 C-string:'UNK_0xf1ec'
// 1781:         MDAMAGE  codep:0x1d29 parp:0xf22a size:0x000e C-string:'MDAMAGE'
// 1782:      UNK_0xf23a  codep:0x224c parp:0xf23a size:0x000c C-string:'UNK_0xf23a'
// 1783:      UNK_0xf248  codep:0x224c parp:0xf248 size:0x0020 C-string:'UNK_0xf248'
// 1784:      UNK_0xf26a  codep:0x224c parp:0xf26a size:0x0036 C-string:'UNK_0xf26a'
// 1785:      UNK_0xf2a2  codep:0x224c parp:0xf2a2 size:0x0008 C-string:'UNK_0xf2a2'
// 1786:      UNK_0xf2ac  codep:0x224c parp:0xf2ac size:0x003a C-string:'UNK_0xf2ac'
// 1787:      UNK_0xf2e8  codep:0x224c parp:0xf2e8 size:0x0008 C-string:'UNK_0xf2e8'
// 1788:      UNK_0xf2f2  codep:0x224c parp:0xf2f2 size:0x0008 C-string:'UNK_0xf2f2'
// 1789:      UNK_0xf2fc  codep:0x224c parp:0xf2fc size:0x0008 C-string:'UNK_0xf2fc'
// 1790:      UNK_0xf306  codep:0x224c parp:0xf306 size:0x0016 C-string:'UNK_0xf306'
// 1791:      UNK_0xf31e  codep:0x224c parp:0xf31e size:0x0008 C-string:'UNK_0xf31e'
// 1792:         #>DAMAG  codep:0x4a4f parp:0xf332 size:0x0024 C-string:'_n__gt_DAMAG'
// 1793:      UNK_0xf358  codep:0x224c parp:0xf358 size:0x001e C-string:'UNK_0xf358'
// 1794:      UNK_0xf378  codep:0x224c parp:0xf378 size:0x002a C-string:'UNK_0xf378'
// 1795:      UNK_0xf3a4  codep:0x224c parp:0xf3a4 size:0x0044 C-string:'UNK_0xf3a4'
// 1796:      UNK_0xf3ea  codep:0x224c parp:0xf3ea size:0x000c C-string:'UNK_0xf3ea'
// 1797:      UNK_0xf3f8  codep:0x224c parp:0xf3f8 size:0x000a C-string:'UNK_0xf3f8'
// 1798:      UNK_0xf404  codep:0x224c parp:0xf404 size:0x0036 C-string:'UNK_0xf404'
// 1799:      UNK_0xf43c  codep:0x224c parp:0xf43c size:0x0041 C-string:'UNK_0xf43c'
// 1800:      UNK_0xf47f  codep:0x224c parp:0xf47f size:0x0064 C-string:'UNK_0xf47f'
// 1801:      UNK_0xf4e5  codep:0x224c parp:0xf4e5 size:0x0010 C-string:'UNK_0xf4e5'
// 1802:      UNK_0xf4f7  codep:0x224c parp:0xf4f7 size:0x000e C-string:'UNK_0xf4f7'
// 1803:      UNK_0xf507  codep:0x224c parp:0xf507 size:0x000e C-string:'UNK_0xf507'
// 1804:         DO-DAMA  codep:0x224c parp:0xf521 size:0x0000 C-string:'DO_dash_DAMA'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char _i_OVS[2] = {0x4e, 0xcb}; // 'OVS
unsigned char RSRC[9] = {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x41, 0x53}; // RSRC
unsigned char UNK_0xebd6[2] = {0x00, 0x00}; // UNK_0xebd6
unsigned char UNK_0xebda[2] = {0x3a, 0x20}; // UNK_0xebda
unsigned char UNK_0xebde[4] = {0x56, 0x3a, 0x20, 0x53}; // UNK_0xebde
unsigned char LDAMAGE[12] = {0x00, 0x00, 0x5a, 0x00, 0xd2, 0x00, 0x68, 0x01, 0xfe, 0x01, 0x94, 0x02}; // LDAMAGE
unsigned char UNK_0xed5a[2] = {0x3a, 0x20}; // UNK_0xed5a
unsigned char WOUNDED[6] = {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54}; // WOUNDED
unsigned char UNK_0xed9a[2] = {0x00, 0x00}; // UNK_0xed9a
unsigned char UNK_0xf081[7] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f}; // UNK_0xf081
unsigned char MDAMAGE[14] = {0x00, 0x00, 0xc8, 0x00, 0x90, 0x01, 0xbc, 0x02, 0xe8, 0x03, 0xdc, 0x05, 0xa0, 0x0f}; // MDAMAGE



// 0xeab2: db 0xa9 0x00 '  '

// ================================================
// 0xeab4: WORD ''OVS' codep=0x1d29 parp=0xeabd
// ================================================
// 0xeabd: db 0x4e 0xcb 'N '

// ================================================
// 0xeabf: WORD 'UNK_0xeac1' codep=0x224c parp=0xeac1
// ================================================

void UNK_0xeac1() // UNK_0xeac1
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xeac7: WORD 'UNK_0xeac9' codep=0x224c parp=0xeac9
// ================================================

void UNK_0xeac9() // UNK_0xeac9
{
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xead3: WORD 'UNK_0xead5' codep=0x224c parp=0xead5
// ================================================

void UNK_0xead5() // UNK_0xead5
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
}

// 0xeadf: db 0x4c 0x22 0xd2 0x9a 0xe2 0x9a 0x90 0x16 'L"      '

// ================================================
// 0xeae7: WORD 'UNK_0xeae9' codep=0x224c parp=0xeae9
// ================================================

void UNK_0xeae9() // UNK_0xeae9
{
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
}


// ================================================
// 0xeaf3: WORD 'UNK_0xeaf5' codep=0x224c parp=0xeaf5
// ================================================

void UNK_0xeaf5() // UNK_0xeaf5
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}

// 0xeafb: db 0x14 0x22 0x19 0x00 ' "  '

// ================================================
// 0xeaff: WORD 'UNK_0xeb01' codep=0x73ea parp=0xeb01
// ================================================
// 0xeb01: db 0x19 0x0c 0x04 0x49 0x91 0x64 '   I d'

// ================================================
// 0xeb07: WORD 'UNK_0xeb09' codep=0x73ea parp=0xeb09
// ================================================
// 0xeb09: db 0x19 0x05 0x01 0x49 0x91 0x64 0xea 0x73 0x19 0x13 0x01 0x49 0x91 0x64 0xea 0x73 0x19 0x12 0x01 0x49 0x91 0x64 '   I d s   I d s   I d'

// ================================================
// 0xeb1f: WORD 'UNK_0xeb21' codep=0x73ea parp=0xeb21
// ================================================
// 0xeb21: db 0x19 0x15 0x07 0x49 0x91 0x64 '   I d'

// ================================================
// 0xeb27: WORD 'UNK_0xeb29' codep=0x73ea parp=0xeb29
// ================================================
// 0xeb29: db 0x19 0x10 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xeb2f: WORD 'UNK_0xeb31' codep=0x744d parp=0xeb31
// ================================================
// 0xeb31: db 0x19 0x0c 0x01 0x4d 0x74 0x19 0x17 0x04 '   Mt   '

// ================================================
// 0xeb39: WORD 'UNK_0xeb3b' codep=0x744d parp=0xeb3b
// ================================================
// 0xeb3b: db 0x19 0x12 0x02 '   '

// ================================================
// 0xeb3e: WORD 'UNK_0xeb40' codep=0x744d parp=0xeb40
// ================================================
// 0xeb40: db 0x19 0x14 0x02 '   '

// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x744d parp=0xeb45
// ================================================
// 0xeb45: db 0x19 0x0b 0x01 '   '

// ================================================
// 0xeb48: WORD 'UNK_0xeb4a' codep=0x744d parp=0xeb4a
// ================================================
// 0xeb4a: db 0x19 0x12 0x07 0x14 0x22 0x14 0x00 '    "  '

// ================================================
// 0xeb51: WORD 'UNK_0xeb53' codep=0x744d parp=0xeb53
// ================================================
// 0xeb53: db 0x14 0x11 0x01 '   '

// ================================================
// 0xeb56: WORD 'UNK_0xeb58' codep=0x744d parp=0xeb58
// ================================================
// 0xeb58: db 0x14 0x12 0x01 0x4d 0x74 0x14 0x13 0x01 0x4d 0x74 0x14 0x14 0x01 0x4d 0x74 0x14 0x15 0x01 0x4d 0x74 0x14 0x16 0x01 0x4d 0x74 0x14 0x17 0x01 0x4d 0x74 0x14 0x18 0x01 0x4d 0x74 0x14 0x19 0x01 '   Mt   Mt   Mt   Mt   Mt   Mt   Mt   '

// ================================================
// 0xeb7e: WORD 'UNK_0xeb80' codep=0x744d parp=0xeb80
// ================================================
// 0xeb80: db 0x14 0x1a 0x01 0x4d 0x74 0x14 0x1b 0x01 0x4d 0x74 0x14 0x1c 0x01 0x4d 0x74 0x14 0x1d 0x01 0x4d 0x74 0x14 0x1e 0x01 '   Mt   Mt   Mt   Mt   '

// ================================================
// 0xeb97: WORD 'UNK_0xeb99' codep=0x744d parp=0xeb99
// ================================================
// 0xeb99: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xeb9c: WORD 'UNK_0xeb9e' codep=0x744d parp=0xeb9e
// ================================================
// 0xeb9e: db 0x14 0x45 0x04 ' E '

// ================================================
// 0xeba1: WORD 'UNK_0xeba3' codep=0x744d parp=0xeba3
// ================================================
// 0xeba3: db 0x14 0x32 0x02 0x4d 0x74 0x14 0x49 0x01 ' 2 Mt I '

// ================================================
// 0xebab: WORD 'UNK_0xebad' codep=0x744d parp=0xebad
// ================================================
// 0xebad: db 0x3d 0x14 0x01 '=  '

// ================================================
// 0xebb0: WORD 'UNK_0xebb2' codep=0x744d parp=0xebb2
// ================================================
// 0xebb2: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xebb5: WORD 'UNK_0xebb7' codep=0x73ea parp=0xebb7
// ================================================
// 0xebb7: db 0x10 0x13 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xebbd: WORD 'UNK_0xebbf' codep=0x744d parp=0xebbf
// ================================================
// 0xebbf: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xebc2: WORD 'RSRC' codep=0x1d29 parp=0xebcb
// ================================================
// 0xebcb: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x41 0x53 ' ALLOT AS'

// ================================================
// 0xebd4: WORD 'UNK_0xebd6' codep=0x1d29 parp=0xebd6
// ================================================
// 0xebd6: db 0x00 0x00 '  '

// ================================================
// 0xebd8: WORD 'UNK_0xebda' codep=0x1d29 parp=0xebda
// ================================================
// 0xebda: db 0x3a 0x20 ': '

// ================================================
// 0xebdc: WORD 'UNK_0xebde' codep=0x1d29 parp=0xebde
// ================================================
// 0xebde: db 0x56 0x3a 0x20 0x53 'V: S'

// ================================================
// 0xebe2: WORD 'UNK_0xebe4' codep=0x224c parp=0xebe4
// ================================================

void UNK_0xebe4() // UNK_0xebe4
{
  Push(pp_UNK_0xebda); // UNK_0xebda
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xebf0: WORD 'UNK_0xebf2' codep=0x224c parp=0xebf2
// ================================================

void UNK_0xebf2() // UNK_0xebf2
{
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xebfa: WORD 'UNK_0xebfc' codep=0x224c parp=0xebfc
// ================================================

void UNK_0xebfc() // UNK_0xebfc
{
  Push(0x6434); // IFIELD(UNK_0xeb9e)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  UNK_0xeac1(); // UNK_0xeac1
}


// ================================================
// 0xec08: WORD 'UNK_0xec0a' codep=0x224c parp=0xec0a
// ================================================

void UNK_0xec0a() // UNK_0xec0a
{
  Push(pp_UNK_0xebde); // UNK_0xebde
  _2_at_(); // 2@
}


// ================================================
// 0xec10: WORD 'UNK_0xec12' codep=0x224c parp=0xec12
// ================================================

void UNK_0xec12() // UNK_0xec12
{
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(sp)); // DUP
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  _dash_(); // -
  Push(Read16(sp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  R_gt_(); // R>
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xec2e: WORD 'UNK_0xec30' codep=0x224c parp=0xec30
// ================================================

void UNK_0xec30() // UNK_0xec30
{
  _gt_R(); // >R
  R_at_(); // R@
  IFLD_at_(); // IFLD@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xec44: WORD 'UNK_0xec46' codep=0x224c parp=0xec46
// ================================================

void UNK_0xec46() // UNK_0xec46
{
  _gt_R(); // >R
  R_at_(); // R@
  IFLD_at_(); // IFLD@
  Push(Read16(sp)); // DUP
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  _gt_R(); // >R
  SWAP(); // SWAP
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xec68: WORD 'UNK_0xec6a' codep=0x224c parp=0xec6a
// ================================================

void UNK_0xec6a() // UNK_0xec6a
{
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  _at__gt_C_plus_S(); // @>C+S
  Push(1); // 1
  Push(0x6403); // IFIELD(UNK_0xebad)
  Push(Read16(sp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(cc__dash_1); // -1
  Push(pp__n_VESS); // #VESS
  _plus__ex_(); // +!
}


// ================================================
// 0xec88: WORD 'UNK_0xec8a' codep=0x224c parp=0xec8a
// ================================================

void UNK_0xec8a() // UNK_0xec8a
{
  Push(0x641f); // IFIELD(UNK_0xeb99)
  Push(Read16(Pop())); // @
  UNK_0xeac1(); // UNK_0xeac1
  UNK_0xebfc(); // UNK_0xebfc
  Push(Pop() & Pop()); // AND
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xec9e: WORD 'UNK_0xeca0' codep=0x224c parp=0xeca0
// ================================================

void UNK_0xeca0() // UNK_0xeca0
{
  Push(pp__n_AUX); // #AUX
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
// 0xecba: WORD 'UNK_0xecbc' codep=0x224c parp=0xecbc
// ================================================

void UNK_0xecbc() // UNK_0xecbc
{
  Push(pp__n_AUX); // #AUX
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
// 0xecd6: WORD 'UNK_0xecd8' codep=0x224c parp=0xecd8
// ================================================

void UNK_0xecd8() // UNK_0xecd8
{
  Push(0x6421); // IFIELD(UNK_0xeba3)
  Push(Read16(Pop())); // @
  UNK_0xeac1(); // UNK_0xeac1
  UNK_0xec8a(); // UNK_0xec8a
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xeca0(); // UNK_0xeca0
  return;

  label1:
  UNK_0xecbc(); // UNK_0xecbc
}


// ================================================
// 0xecf0: WORD 'UNK_0xecf2' codep=0x224c parp=0xecf2
// ================================================

void UNK_0xecf2() // UNK_0xecf2
{
  UNK_0xecd8(); // UNK_0xecd8
  MODULE(); // MODULE
}


// ================================================
// 0xecf8: WORD 'LDAMAGE' codep=0x1d29 parp=0xed04
// ================================================
// 0xed04: db 0x00 0x00 0x5a 0x00 0xd2 0x00 0x68 0x01 0xfe 0x01 0x94 0x02 '  Z   h     '

// ================================================
// 0xed10: WORD 'UNK_0xed12' codep=0x224c parp=0xed12
// ================================================

void UNK_0xed12() // UNK_0xed12
{
  _gt_R(); // >R
  UNK_0xead5(); // UNK_0xead5
  UNK_0xec12(); // UNK_0xec12
  Push(0x000a);
  SWAP(); // SWAP
  _dash_(); // -
  R_gt_(); // R>
  IFLD_at_(); // IFLD@
  Push(Pop()*2); // 2*
  Push(pp_LDAMAGE); // LDAMAGE
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x000a);
  _star__slash_(); // */
}


// ================================================
// 0xed34: WORD 'UNK_0xed36' codep=0x224c parp=0xed36
// ================================================

void UNK_0xed36() // UNK_0xed36
{
  UNK_0xeae9(); // UNK_0xeae9
  Push(0xeb19);
  UNK_0xed12(); // UNK_0xed12
  Push(pp__ask_ROD); // ?ROD
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(cc__4); // 4
  _slash_(); // /
}


// ================================================
// 0xed4c: WORD 'UNK_0xed4e' codep=0x224c parp=0xed4e
// ================================================

void UNK_0xed4e() // UNK_0xed4e
{
  _2DUP(); // 2DUP
  Push(0xeb94);
  UNK_0xed12(); // UNK_0xed12
}


// ================================================
// 0xed58: WORD 'UNK_0xed5a' codep=0x1d29 parp=0xed5a
// ================================================
// 0xed5a: db 0x3a 0x20 ': '

// ================================================
// 0xed5c: WORD 'UNK_0xed5e' codep=0x224c parp=0xed5e
// ================================================

void UNK_0xed5e() // UNK_0xed5e
{
  UNK_0xeac9(); // UNK_0xeac9
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xed68: WORD 'UNK_0xed6a' codep=0x224c parp=0xed6a
// ================================================

void UNK_0xed6a() // UNK_0xed6a
{
  Push(1); // 1
  Push(pp_UNK_0xed5a); // UNK_0xed5a
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  RRND(); // RRND
  LoadData("UNK_0xebb7"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  _slash_(); // /
  Push(0x000a);
  _slash_(); // /
  Push(cc__5); // 5
  MAX(); // MAX
}


// ================================================
// 0xed86: WORD 'WOUNDED' codep=0x1d29 parp=0xed92
// ================================================
// 0xed92: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 ' ALLOT'

// ================================================
// 0xed98: WORD 'UNK_0xed9a' codep=0x1d29 parp=0xed9a
// ================================================
// 0xed9a: db 0x00 0x00 '  '

// ================================================
// 0xed9c: WORD 'UNK_0xed9e' codep=0x224c parp=0xed9e
// ================================================

void UNK_0xed9e() // UNK_0xed9e
{
  Push(pp_WOUNDED); // WOUNDED
  Push(Read16(sp)); // DUP
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  LEAVE(); // LEAVE
  goto label2;

  label1:
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00ff);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(i); // I
  C_ex_(); // C!
  Push(1); // 1
  Push(pp_UNK_0xed9a); // UNK_0xed9a
  _st__plus__ex__gt_(); // <+!>
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffd0

}


// ================================================
// 0xedde: WORD 'UNK_0xede0' codep=0x224c parp=0xede0
// ================================================

void UNK_0xede0() // UNK_0xede0
{
  Push(pp_WOUNDED); // WOUNDED
  Push(cc__6); // 6
  Push(0x00ff);
  FILL(); // FILL
  Push(pp_UNK_0xed9a); // UNK_0xed9a
  OFF(); // OFF
}


// ================================================
// 0xedf0: WORD 'UNK_0xedf2' codep=0x224c parp=0xedf2
// ================================================

void UNK_0xedf2() // UNK_0xedf2
{
  SetColor("YELLOW");
  Push(0x4f0c);
  _ex_(); // !
  CTERASE(); // CTERASE
  Push(0); // 0
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xee02: WORD 'UNK_0xee04' codep=0x224c parp=0xee04
// ================================================

void UNK_0xee04() // UNK_0xee04
{

  UNK_0x3f3b("**  GAME  OVER  **");
  _dot_TTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY(); // KEY
  BYE(); // BYE
}


// ================================================
// 0xee25: WORD 'UNK_0xee27' codep=0x224c parp=0xee27
// ================================================

void UNK_0xee27() // UNK_0xee27
{
  UNK_0xedf2(); // UNK_0xedf2

  UNK_0x3f3b("!!HULL DESTROYED!!");
  _dot_TTY(); // .TTY
  UNK_0xee04(); // UNK_0xee04
}


// ================================================
// 0xee44: WORD 'UNK_0xee46' codep=0x224c parp=0xee46
// ================================================

void UNK_0xee46() // UNK_0xee46
{
  UNK_0xedf2(); // UNK_0xedf2

  UNK_0x3f3b("!!CREW  DECEASED!!");
  _dot_TTY(); // .TTY
  UNK_0xee04(); // UNK_0xee04
}

// 0xee63: db 0x4c 0x22 0x4f 0x06 0x93 0x1f 0x93 0x1f 0xfa 0x1b 'L"O       '
// 0xee6d: call   1649
  _2_at_(); // 2@
  IFLD_at_(); // IFLD@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  UNK_0xeac1(); // UNK_0xeac1
  _gt_R(); // >R
  IFLD_at_(); // IFLD@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xeac1(); // UNK_0xeac1
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xee8c: WORD 'UNK_0xee8e' codep=0x224c parp=0xee8e
// ================================================

void UNK_0xee8e() // UNK_0xee8e
{
  Push(0xeb53);
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xeac1(); // UNK_0xeac1
}


// ================================================
// 0xee9e: WORD 'ENGINE-' codep=0xee6d parp=0xeeaa
// ================================================
// 0xeeaa: db 0x62 0xeb 0x5d 0xeb 'b ] '

// ================================================
// 0xeeae: WORD 'SENSOR-' codep=0xee6d parp=0xeeba
// ================================================
// 0xeeba: db 0x6c 0xeb 0x67 0xeb 'l g '

// ================================================
// 0xeebe: WORD 'COMM-CH' codep=0xee6d parp=0xeeca
// ================================================
// 0xeeca: db 0x76 0xeb 0x71 0xeb 'v q '

// ================================================
// 0xeece: WORD 'MISS-CH' codep=0xee6d parp=0xeeda
// ================================================
// 0xeeda: db 0x8a 0xeb 0x85 0xeb '    '

// ================================================
// 0xeede: WORD 'LASER-C' codep=0xee6d parp=0xeeea
// ================================================
// 0xeeea: db 0x94 0xeb 0x8f 0xeb '    '

// ================================================
// 0xeeee: WORD 'SHIELD-' codep=0xee6d parp=0xeefa
// ================================================
// 0xeefa: db 0x80 0xeb 0x7b 0xeb '  { '

// ================================================
// 0xeefe: WORD 'UNK_0xef00' codep=0x224c parp=0xef00
// ================================================

void UNK_0xef00() // UNK_0xef00
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  UNK_0xeac1(); // UNK_0xeac1
}


// ================================================
// 0xef0a: WORD '#>?FIEL' codep=0x4a4f parp=0xef16
// ================================================
// 0xef16: db 0x08 0x00 0x8b 0x12 0x01 0x00 0x8e 0xee 0x02 0x00 0xaa 0xee 0x03 0x00 0xba 0xee 0x04 0x00 0xca 0xee 0x05 0x00 0xda 0xee 0x06 0x00 0xea 0xee 0x07 0x00 0x00 0xef 0x08 0x00 0xfa 0xee '                                    '

// ================================================
// 0xef3a: WORD 'UNK_0xef3c' codep=0x224c parp=0xef3c
// ================================================

void UNK_0xef3c() // UNK_0xef3c
{
  Push(pp_RSRC); // RSRC
  Push(cc__9); // 9
  Push(0); // 0
  FILL(); // FILL
  Push(pp_UNK_0xebd6); // UNK_0xebd6
  OFF(); // OFF
  Push(0); // 0
  Push(cc__9); // 9
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Pop();
  switch(Pop()) // #>?FIEL
  {
  case 1:
    UNK_0xee8e(); // UNK_0xee8e
    break;
  case 2:
    ENGINE_dash_(); // ENGINE-
    break;
  case 3:
    SENSOR_dash_(); // SENSOR-
    break;
  case 4:
    COMM_dash_CH(); // COMM-CH
    break;
  case 5:
    MISS_dash_CH(); // MISS-CH
    break;
  case 6:
    LASER_dash_C(); // LASER-C
    break;
  case 7:
    UNK_0xef00(); // UNK_0xef00
    break;
  case 8:
    SHIELD_dash_(); // SHIELD-
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // 0=
    break;

  }
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label1;
  Push(i); // I
  Push(pp_UNK_0xebd6); // UNK_0xebd6
  Push(Read16(Pop())); // @
  Push(pp_RSRC); // RSRC
  Push(Pop() + Pop()); // +
  _st_C_ex__gt_(); // <C!>
  Push(1); // 1
  Push(pp_UNK_0xebd6); // UNK_0xebd6
  _st__plus__ex__gt_(); // <+!>

  label1:
  Push(Pop() | Pop()); // OR
  i++;
  } while(i<imax); // (LOOP) 0xffe0

}


// ================================================
// 0xef74: WORD 'UNK_0xef76' codep=0x224c parp=0xef76
// ================================================

void UNK_0xef76() // UNK_0xef76
{
  UNK_0xef3c(); // UNK_0xef3c
  if (Pop() == 0) return;
  Push(0); // 0
  Push(pp_UNK_0xebd6); // UNK_0xebd6
  Push(Read16(Pop())); // @
  RRND(); // RRND
  Push(pp_RSRC); // RSRC
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xef8c: WORD 'UNK_0xef8e' codep=0x224c parp=0xef8e
// ================================================

void UNK_0xef8e() // UNK_0xef8e
{
  Push(0x640e); // IFIELD(UNK_0xebb2)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(sp)); // DUP
  _gt_R(); // >R
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;

  UNK_0x3f3b("KILLED");
  goto label2;

  label1:
  R_at_(); // R@
  Push(1); // 1
  Push(0x0015);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;

  UNK_0x3f3b("CRITICALLY ");
  goto label4;

  label3:
  R_at_(); // R@
  Push(0x0015);
  Push(0x0033);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label5;

  UNK_0x3f3b("HEAVILIY ");
  goto label4;

  label5:
  R_at_(); // R@
  Push(0x0033);
  Push(0x0051);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label6;

  UNK_0x3f3b("MODERATELY ");
  goto label4;

  label6:

  UNK_0x3f3b("SLIGHTLY ");

  label4:
  Func14(TYPE); // call of word 0x2690 '(TYPE)'

  UNK_0x3f3b("WOUNDED ");

  label2:
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf02c: WORD 'UNK_0xf02e' codep=0x224c parp=0xf02e
// ================================================

void UNK_0xf02e() // UNK_0xf02e
{
  Push(pp_UNK_0xed9a); // UNK_0xed9a
  Push(Read16(Pop())); // @
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
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
  Push(Read8(Pop())&0xFF); // C@
  _3_star_(); // 3*
  Push(pp_ROSTER); // ROSTER
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  _gt_C_plus_S(); // >C+S
  Push(0x63fa); // IFIELD(UNK_0xebbf)
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
  _dot_TTY(); // .TTY
  PRINT(" IS ", 4); // (.")
  UNK_0xef8e(); // UNK_0xef8e
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
  Push(pp_UNK_0xed9a); // UNK_0xed9a
  OFF(); // OFF
}


// ================================================
// 0xf07f: WORD 'UNK_0xf081' codep=0x1d29 parp=0xf081
// ================================================
// 0xf081: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f ':  ALLO'

// ================================================
// 0xf088: WORD 'UNK_0xf08a' codep=0x224c parp=0xf08a
// ================================================

void UNK_0xf08a() // UNK_0xf08a
{
  Push(0x002b);
  _ex_ID(); // !ID
  Push(cc__8); // 8
  Push(0x63fa); // IFIELD(UNK_0xeb45)
  C_ex_(); // C!
  CTINIT(); // CTINIT
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET

  UNK_0x3f3b("ALIEN SHIP DESTROYED ");
  _dot_TTY(); // .TTY
  Push(0); // 0
  Push(0x63fb); // IFIELD(UNK_0xeb31)
  C_ex_(); // C!
  LoadData("UNK_0xeb21"); // from 'VESSEL      '
  Push(pp_UNK_0xf081); // UNK_0xf081
  Push(cc__7); // 7
  CMOVE(); // CMOVE
  Push(0x0018);
  _ex_INST_dash_SIB(); // !INST-SIB
  SET_dash_CURRENT(); // SET-CURRENT
  Push(pp_UNK_0xf081); // UNK_0xf081
  Push(0x6401); // IFIELD(UNK_0xeb4a)
  Push(cc__7); // 7
  CMOVE(); // CMOVE
  UNK_0xec6a(); // UNK_0xec6a
  Push(0xc27d);
  MODULE(); // MODULE
}


// ================================================
// 0xf0de: WORD 'UNK_0xf0e0' codep=0x224c parp=0xf0e0
// ================================================

void UNK_0xf0e0() // UNK_0xf0e0
{
  Push(pp_UNK_0xed5a); // UNK_0xed5a
  _st__ex__gt_(); // <!>
  UNK_0xede0(); // UNK_0xede0
  Push(pp_ROSTER); // ROSTER
  Push(Read16(sp)); // DUP
  Push(0x0012);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xed5e(); // UNK_0xed5e
  if (Pop() == 0) goto label2;
  _gt_C_plus_S(); // >C+S
  UNK_0xed6a(); // UNK_0xed6a
  Push(0xebb2);
  UNK_0xec30(); // UNK_0xec30
  ICLOSE(); // ICLOSE
  Push(i); // I
  Push(pp_ROSTER); // ROSTER
  _dash_(); // -
  Push(cc__3); // 3
  _slash_(); // /
  UNK_0xed9e(); // UNK_0xed9e
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  goto label4;

  label1:
  Pop(); Pop();// 2DROP
  LEAVE(); // LEAVE

  label4:
  Push(cc__3); // 3
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffc4

}


// ================================================
// 0xf134: WORD 'UNK_0xf136' codep=0x224c parp=0xf136
// ================================================

void UNK_0xf136() // UNK_0xf136
{
  LoadData("UNK_0xeb09"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(sp)); // DUP
  Push(-Pop()); // NEGATE
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  _plus__ex_(); // +!
  Push(0x6401); // IFIELD(UNK_0xeb3b)
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  LoadData("UNK_0xeb01"); // from 'VESSEL      '
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  _star__slash_(); // */
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  _ex_(); // !
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162() // UNK_0xf162
{
  Push(0x6403); // IFIELD(UNK_0xeb40)
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(cc__ask_A_dash_SHIE); // ?A-SHIE
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0xeb3b);
  UNK_0xec30(); // UNK_0xec30
  goto label2;

  label1:
  Push(0xeb40);
  UNK_0xec30(); // UNK_0xec30

  label2:
  UNK_0xf136(); // UNK_0xf136
  Push(0x6401); // IFIELD(UNK_0xeb3b)
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf08a(); // UNK_0xf08a
}


// ================================================
// 0xf198: WORD 'UNK_0xf19a' codep=0x224c parp=0xf19a
// ================================================

void UNK_0xf19a() // UNK_0xf19a
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0018);
  _eq_(); // =
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x0014);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp__ask_SOUND); // ?SOUND
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
  UNK_0xf162(); // UNK_0xf162
  goto label3;

  label1:
  Pop(); // DROP

  label3:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1ea: WORD 'UNK_0xf1ec' codep=0x224c parp=0xf1ec
// ================================================

void UNK_0xf1ec() // UNK_0xf1ec
{
  UNK_0xed4e(); // UNK_0xed4e
  _gt_R(); // >R
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(sp)); // DUP
  ROT(); // ROT
  POINT_gt_ICON(); // POINT>ICON
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  UNK_0xf19a(); // UNK_0xf19a
  i++;
  } while(i<imax); // (LOOP) 0xfff0

  Pop(); // DROP

  label1:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf21e: WORD 'MDAMAGE' codep=0x1d29 parp=0xf22a
// ================================================
// 0xf22a: db 0x00 0x00 0xc8 0x00 0x90 0x01 0xbc 0x02 0xe8 0x03 0xdc 0x05 0xa0 0x0f '              '

// ================================================
// 0xf238: WORD 'UNK_0xf23a' codep=0x224c parp=0xf23a
// ================================================

void UNK_0xf23a() // UNK_0xf23a
{
  UNK_0xebe4(); // UNK_0xebe4
  Push(Pop()*2); // 2*
  Push(pp_MDAMAGE); // MDAMAGE
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf246: WORD 'UNK_0xf248' codep=0x224c parp=0xf248
// ================================================

void UNK_0xf248() // UNK_0xf248
{
  Push(0x641f); // IFIELD(UNK_0xeb99)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(cc__6); // 6
  Push(0x6409); // IFIELD(UNK_0xeb80)
  UNK_0xebf2(); // UNK_0xebf2
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(cc__5); // 5
  _slash_(); // /
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x641f); // IFIELD(UNK_0xeb99)
  _ex_(); // !
}


// ================================================
// 0xf268: WORD 'UNK_0xf26a' codep=0x224c parp=0xf26a
// ================================================

void UNK_0xf26a() // UNK_0xf26a
{
  Push(0x6421); // IFIELD(UNK_0xeba3)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(cc__6); // 6
  Push(0x6401); // IFIELD(UNK_0xeb58)
  UNK_0xebf2(); // UNK_0xebf2
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(cc__5); // 5
  _slash_(); // /
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x6421); // IFIELD(UNK_0xeba3)
  _ex_(); // !
  Push(0x6421); // IFIELD(UNK_0xeba3)
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0xbe2b);
  MODULE(); // MODULE
  Push(cc__3); // 3
  Push(pp__n_AUX); // #AUX
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf2a0: WORD 'UNK_0xf2a2' codep=0x224c parp=0xf2a2
// ================================================

void UNK_0xf2a2() // UNK_0xf2a2
{
  Push(0xeb53);
  UNK_0xec46(); // UNK_0xec46
}


// ================================================
// 0xf2aa: WORD 'UNK_0xf2ac' codep=0x224c parp=0xf2ac
// ================================================

void UNK_0xf2ac() // UNK_0xf2ac
{
  Push(0xeb5d);
  UNK_0xec46(); // UNK_0xec46
  ENGINE_dash_(); // ENGINE-
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(pp__ask_AUTO); // ?AUTO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  Push(0xbdef);
  MODULE(); // MODULE
  Pop(); // DROP

  label1:
  Push(0xeb62);
  IFLD_at_(); // IFLD@
  Push(0x0080);
  Push(Pop() | Pop()); // OR
  Push(0xeb62);
  IFLD_ex_(); // IFLD!
  Push(pp__ask_AUTO); // ?AUTO
  ON(); // ON
}


// ================================================
// 0xf2e6: WORD 'UNK_0xf2e8' codep=0x224c parp=0xf2e8
// ================================================

void UNK_0xf2e8() // UNK_0xf2e8
{
  Push(0xeb67);
  UNK_0xec46(); // UNK_0xec46
}


// ================================================
// 0xf2f0: WORD 'UNK_0xf2f2' codep=0x224c parp=0xf2f2
// ================================================

void UNK_0xf2f2() // UNK_0xf2f2
{
  Push(0xeb71);
  UNK_0xec46(); // UNK_0xec46
}


// ================================================
// 0xf2fa: WORD 'UNK_0xf2fc' codep=0x224c parp=0xf2fc
// ================================================

void UNK_0xf2fc() // UNK_0xf2fc
{
  Push(0xeb85);
  UNK_0xec46(); // UNK_0xec46
}


// ================================================
// 0xf304: WORD 'UNK_0xf306' codep=0x224c parp=0xf306
// ================================================

void UNK_0xf306() // UNK_0xf306
{
  Push(0xeb7b);
  UNK_0xec46(); // UNK_0xec46
  SHIELD_dash_(); // SHIELD-
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(pp__i_OVS); // 'OVS
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf31c: WORD 'UNK_0xf31e' codep=0x224c parp=0xf31e
// ================================================

void UNK_0xf31e() // UNK_0xf31e
{
  Push(0xeb8f);
  UNK_0xec46(); // UNK_0xec46
}


// ================================================
// 0xf326: WORD '#>DAMAG' codep=0x4a4f parp=0xf332
// ================================================
// 0xf332: db 0x08 0x00 0x34 0x0e 0x01 0x00 0xa2 0xf2 0x02 0x00 0xac 0xf2 0x03 0x00 0xe8 0xf2 0x04 0x00 0xf2 0xf2 0x05 0x00 0xfc 0xf2 0x06 0x00 0x1e 0xf3 0x07 0x00 0xe0 0xf0 0x08 0x00 0x06 0xf3 '  4                                 '

// ================================================
// 0xf356: WORD 'UNK_0xf358' codep=0x224c parp=0xf358
// ================================================

void UNK_0xf358() // UNK_0xf358
{
  Push(Read16(sp)); // DUP
  Push(1); // 1
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(0x000a);
  MAX(); // MAX
  Push(Read16(sp)); // DUP
  _gt_R(); // >R
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  R_gt_(); // R>
}


// ================================================
// 0xf376: WORD 'UNK_0xf378' codep=0x224c parp=0xf378
// ================================================

void UNK_0xf378() // UNK_0xf378
{
  UNK_0xec8a(); // UNK_0xec8a
  if (Pop() == 0) goto label1;
  UNK_0xf248(); // UNK_0xf248
  return;

  label1:
  Push(0x6421); // IFIELD(UNK_0xeba3)
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf26a(); // UNK_0xf26a
  return;

  label2:
  Push(0x000a);
  Push(0x6400); // IFIELD(UNK_0xeb53)
  Push(Read8(Pop())&0xFF); // C@
  _star__slash_(); // */
  UNK_0xef76(); // UNK_0xef76
  Pop();
  switch(Pop()) // #>DAMAG
  {
  case 1:
    UNK_0xf2a2(); // UNK_0xf2a2
    break;
  case 2:
    UNK_0xf2ac(); // UNK_0xf2ac
    break;
  case 3:
    UNK_0xf2e8(); // UNK_0xf2e8
    break;
  case 4:
    UNK_0xf2f2(); // UNK_0xf2f2
    break;
  case 5:
    UNK_0xf2fc(); // UNK_0xf2fc
    break;
  case 6:
    UNK_0xf31e(); // UNK_0xf31e
    break;
  case 7:
    UNK_0xf0e0(); // UNK_0xf0e0
    break;
  case 8:
    UNK_0xf306(); // UNK_0xf306
    break;
  default:
    Pop(); // DROP
    break;

  }
}


// ================================================
// 0xf3a2: WORD 'UNK_0xf3a4' codep=0x224c parp=0xf3a4
// ================================================

void UNK_0xf3a4() // UNK_0xf3a4
{

  label2:
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf358(); // UNK_0xf358
  UNK_0xf378(); // UNK_0xf378
  goto label2;

  label1:
  Push(pp_UNK_0xed9a); // UNK_0xed9a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  UNK_0xf02e(); // UNK_0xf02e
  Push(0xc012);
  MODULE(); // MODULE
  Push(0xc03f);
  MODULE(); // MODULE

  label3:
  UNK_0xecf2(); // UNK_0xecf2
  Push(0xeb53);
  IFLD_at_(); // IFLD@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label4;
  UNK_0xee27(); // UNK_0xee27

  label4:
  UNK_0xef00(); // UNK_0xef00
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xee46(); // UNK_0xee46
}


// ================================================
// 0xf3e8: WORD 'UNK_0xf3ea' codep=0x224c parp=0xf3ea
// ================================================

void UNK_0xf3ea() // UNK_0xf3ea
{
  UNK_0xed36(); // UNK_0xed36
  Push(Pop()*2); // 2*
  UNK_0xeaf5(); // UNK_0xeaf5
  UNK_0xf3a4(); // UNK_0xf3a4
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3f6: WORD 'UNK_0xf3f8' codep=0x224c parp=0xf3f8
// ================================================

void UNK_0xf3f8() // UNK_0xf3f8
{
  Push(pp_UNK_0xebda); // UNK_0xebda
  C_ex_(); // C!
  Push(pp_UNK_0xebde); // UNK_0xebde
  D_ex_(); // D!
}


// ================================================
// 0xf402: WORD 'UNK_0xf404' codep=0x224c parp=0xf404
// ================================================

void UNK_0xf404() // UNK_0xf404
{
  _gt_MAINVIEW(); // >MAINVIEW
  _ex_COLOR(); // !COLOR
  VCLIPSET(); // VCLIPSET
  UNK_0xec0a(); // UNK_0xec0a
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  SWAP(); // SWAP
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc__3); // 3
  _dash_(); // -
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
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
  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf43a: WORD 'UNK_0xf43c' codep=0x224c parp=0xf43c
// ================================================

void UNK_0xf43c() // UNK_0xf43c
{
  UNK_0xf404(); // UNK_0xf404
  CTINIT(); // CTINIT
  DCLIPSET(); // DCLIPSET
  _gt_DISPLAY(); // >DISPLAY
  UNK_0xebe4(); // UNK_0xebe4
  Push(Read16(sp)); // DUP
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP

  UNK_0x3f3b("PLASMA BOLT");
  _dot_TTY(); // .TTY
  return;

  label1:

  UNK_0x3f3b("MISSILE CLASS ");
  _dot_TTY(); // .TTY
  _dot_(); // .
}


// ================================================
// 0xf47d: WORD 'UNK_0xf47f' codep=0x224c parp=0xf47f
// ================================================

void UNK_0xf47f() // UNK_0xf47f
{
  UNK_0xf3f8(); // UNK_0xf3f8
  UNK_0xeaf5(); // UNK_0xeaf5
  SetColor("LT-BLUE");
  UNK_0xf404(); // UNK_0xf404
  UNK_0xec0a(); // UNK_0xec0a
  UNK_0xf23a(); // UNK_0xf23a
  _gt_R(); // >R
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  SWAP(); // SWAP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(sp)); // DUP
  ROT(); // ROT
  POINT_gt_ICON(); // POINT>ICON
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x0014);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  LoadData("UNK_0xeb29"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label3;
  UNK_0xf19a(); // UNK_0xf19a
  goto label4;

  label3:
  Pop(); // DROP
  ICLOSE(); // ICLOSE

  label4:
  goto label5;

  label2:
  Pop(); // DROP
  ICLOSE(); // ICLOSE

  label5:
  i++;
  } while(i<imax); // (LOOP) 0xffca

  Pop(); // DROP

  label1:
  R_gt_(); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e3: WORD 'UNK_0xf4e5' codep=0x224c parp=0xf4e5
// ================================================

void UNK_0xf4e5() // UNK_0xf4e5
{
  UNK_0xf3f8(); // UNK_0xf3f8
  SetColor("RED");
  UNK_0xf43c(); // UNK_0xf43c
  UNK_0xf23a(); // UNK_0xf23a
  UNK_0xeaf5(); // UNK_0xeaf5
  UNK_0xf3a4(); // UNK_0xf3a4
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4f5: WORD 'UNK_0xf4f7' codep=0x224c parp=0xf4f7
// ================================================

void UNK_0xf4f7() // UNK_0xf4f7
{
  if (Pop() == 0) goto label1;
  UNK_0xf47f(); // UNK_0xf47f
  return;

  label1:
  UNK_0xf4e5(); // UNK_0xf4e5
}


// ================================================
// 0xf505: WORD 'UNK_0xf507' codep=0x224c parp=0xf507
// ================================================

void UNK_0xf507() // UNK_0xf507
{
  if (Pop() == 0) goto label1;
  UNK_0xf1ec(); // UNK_0xf1ec
  return;

  label1:
  UNK_0xf3ea(); // UNK_0xf3ea
}


// ================================================
// 0xf515: WORD 'DO-DAMA' codep=0x224c parp=0xf521
// ================================================
// entry

void DO_dash_DAMA() // DO-DAMA
{
  if (Pop() == 0) goto label1;
  UNK_0xf4f7(); // UNK_0xf4f7
  return;

  label1:
  UNK_0xf507(); // UNK_0xf507
}

// 0xf52f: db 0x44 0x41 0x4d 0x41 0x47 0x45 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'DAMAGE-_________________________----------------- '
  