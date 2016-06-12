// ====== OVERLAY 'DAMAGE-OV' ======
// store offset = 0xeaa0
// overlay size   = 0x0ac0

#include"cpu.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0xab79 C-string:'UNK_0x3f3b'
// 1704:            'OVS  codep:0x1d29 parp:0xeabd size:0x0002 C-string:'_i_OVS'
// 1705:      UNK_0xeac1  codep:0x224c parp:0xeac1 size:0x0012 C-string:'UNK_0xeac1'
// 1706:      UNK_0xead5  codep:0x224c parp:0xead5 size:0x0012 C-string:'UNK_0xead5'
// 1707:      UNK_0xeae9  codep:0x224c parp:0xeae9 size:0x000a C-string:'UNK_0xeae9'
// 1708:      UNK_0xeaf5  codep:0x224c parp:0xeaf5 size:0x000a C-string:'UNK_0xeaf5'
// 1709:      UNK_0xeb01  codep:0x73ea parp:0xeb01 size:0x0006 C-string:'UNK_0xeb01'
// 1710:      UNK_0xeb09  codep:0x73ea parp:0xeb09 size:0x0016 C-string:'UNK_0xeb09'
// 1711:      UNK_0xeb21  codep:0x73ea parp:0xeb21 size:0x0006 C-string:'UNK_0xeb21'
// 1712:      UNK_0xeb29  codep:0x73ea parp:0xeb29 size:0x0006 C-string:'UNK_0xeb29'
// 1713:      UNK_0xeb31  codep:0x744d parp:0xeb31 size:0x0008 C-string:'UNK_0xeb31'
// 1714:      UNK_0xeb3b  codep:0x744d parp:0xeb3b size:0x0003 C-string:'UNK_0xeb3b'
// 1715:      UNK_0xeb40  codep:0x744d parp:0xeb40 size:0x0003 C-string:'UNK_0xeb40'
// 1716:      UNK_0xeb45  codep:0x744d parp:0xeb45 size:0x0003 C-string:'UNK_0xeb45'
// 1717:      UNK_0xeb4a  codep:0x744d parp:0xeb4a size:0x0007 C-string:'UNK_0xeb4a'
// 1718:      UNK_0xeb53  codep:0x744d parp:0xeb53 size:0x0003 C-string:'UNK_0xeb53'
// 1719:      UNK_0xeb58  codep:0x744d parp:0xeb58 size:0x0026 C-string:'UNK_0xeb58'
// 1720:      UNK_0xeb80  codep:0x744d parp:0xeb80 size:0x0017 C-string:'UNK_0xeb80'
// 1721:      UNK_0xeb99  codep:0x744d parp:0xeb99 size:0x0003 C-string:'UNK_0xeb99'
// 1722:      UNK_0xeb9e  codep:0x744d parp:0xeb9e size:0x0003 C-string:'UNK_0xeb9e'
// 1723:      UNK_0xeba3  codep:0x744d parp:0xeba3 size:0x0008 C-string:'UNK_0xeba3'
// 1724:      UNK_0xebad  codep:0x744d parp:0xebad size:0x0003 C-string:'UNK_0xebad'
// 1725:      UNK_0xebb2  codep:0x744d parp:0xebb2 size:0x000b C-string:'UNK_0xebb2'
// 1726:      UNK_0xebbf  codep:0x744d parp:0xebbf size:0x0003 C-string:'UNK_0xebbf'
// 1727:            RSRC  codep:0x1d29 parp:0xebcb size:0x0009 C-string:'RSRC'
// 1728:      UNK_0xebd6  codep:0x1d29 parp:0xebd6 size:0x0002 C-string:'UNK_0xebd6'
// 1729:      UNK_0xebda  codep:0x1d29 parp:0xebda size:0x0002 C-string:'UNK_0xebda'
// 1730:      UNK_0xebde  codep:0x1d29 parp:0xebde size:0x0004 C-string:'UNK_0xebde'
// 1731:      UNK_0xebe4  codep:0x224c parp:0xebe4 size:0x000c C-string:'UNK_0xebe4'
// 1732:      UNK_0xebf2  codep:0x224c parp:0xebf2 size:0x0008 C-string:'UNK_0xebf2'
// 1733:      UNK_0xebfc  codep:0x224c parp:0xebfc size:0x000c C-string:'UNK_0xebfc'
// 1734:      UNK_0xec0a  codep:0x224c parp:0xec0a size:0x0006 C-string:'UNK_0xec0a'
// 1735:      UNK_0xec12  codep:0x224c parp:0xec12 size:0x001c C-string:'UNK_0xec12'
// 1736:      UNK_0xec30  codep:0x224c parp:0xec30 size:0x0038 C-string:'UNK_0xec30'
// 1737:      UNK_0xec6a  codep:0x224c parp:0xec6a size:0x001e C-string:'UNK_0xec6a'
// 1738:      UNK_0xec8a  codep:0x224c parp:0xec8a size:0x0014 C-string:'UNK_0xec8a'
// 1739:      UNK_0xeca0  codep:0x224c parp:0xeca0 size:0x001a C-string:'UNK_0xeca0'
// 1740:      UNK_0xecbc  codep:0x224c parp:0xecbc size:0x001a C-string:'UNK_0xecbc'
// 1741:      UNK_0xecd8  codep:0x224c parp:0xecd8 size:0x0018 C-string:'UNK_0xecd8'
// 1742:      UNK_0xecf2  codep:0x224c parp:0xecf2 size:0x0006 C-string:'UNK_0xecf2'
// 1743:         LDAMAGE  codep:0x1d29 parp:0xed04 size:0x000c C-string:'LDAMAGE'
// 1744:      UNK_0xed12  codep:0x224c parp:0xed12 size:0x0022 C-string:'UNK_0xed12'
// 1745:      UNK_0xed36  codep:0x224c parp:0xed36 size:0x0016 C-string:'UNK_0xed36'
// 1746:      UNK_0xed4e  codep:0x224c parp:0xed4e size:0x0038 C-string:'UNK_0xed4e'
// 1747:         WOUNDED  codep:0x1d29 parp:0xed92 size:0x0006 C-string:'WOUNDED'
// 1748:      UNK_0xed9a  codep:0x1d29 parp:0xed9a size:0x0056 C-string:'UNK_0xed9a'
// 1749:      UNK_0xedf2  codep:0x224c parp:0xedf2 size:0x0010 C-string:'UNK_0xedf2'
// 1750:      UNK_0xee04  codep:0x224c parp:0xee04 size:0x0021 C-string:'UNK_0xee04'
// 1751:      UNK_0xee27  codep:0x224c parp:0xee27 size:0x001d C-string:'UNK_0xee27'
// 1752:      UNK_0xee46  codep:0x224c parp:0xee46 size:0x0058 C-string:'UNK_0xee46'
// 1753:         ENGINE-  codep:0xee6d parp:0xeeaa size:0x0004 C-string:'ENGINE_dash_'
// 1754:         SENSOR-  codep:0xee6d parp:0xeeba size:0x0004 C-string:'SENSOR_dash_'
// 1755:         COMM-CH  codep:0xee6d parp:0xeeca size:0x0004 C-string:'COMM_dash_CH'
// 1756:         MISS-CH  codep:0xee6d parp:0xeeda size:0x0004 C-string:'MISS_dash_CH'
// 1757:         LASER-C  codep:0xee6d parp:0xeeea size:0x0004 C-string:'LASER_dash_C'
// 1758:         SHIELD-  codep:0xee6d parp:0xeefa size:0x0004 C-string:'SHIELD_dash_'
// 1759:      UNK_0xef00  codep:0x224c parp:0xef00 size:0x000a C-string:'UNK_0xef00'
// 1760:         #>?FIEL  codep:0x4a4f parp:0xef16 size:0x0024 C-string:'_n__gt__ask_FIEL'
// 1761:      UNK_0xef3c  codep:0x224c parp:0xef3c size:0x0038 C-string:'UNK_0xef3c'
// 1762:      UNK_0xef76  codep:0x224c parp:0xef76 size:0x0016 C-string:'UNK_0xef76'
// 1763:      UNK_0xef8e  codep:0x224c parp:0xef8e size:0x009e C-string:'UNK_0xef8e'
// 1764:      UNK_0xf02e  codep:0x224c parp:0xf02e size:0x0051 C-string:'UNK_0xf02e'
// 1765:      UNK_0xf081  codep:0x1d29 parp:0xf081 size:0x0007 C-string:'UNK_0xf081'
// 1766:      UNK_0xf08a  codep:0x224c parp:0xf08a size:0x00aa C-string:'UNK_0xf08a'
// 1767:      UNK_0xf136  codep:0x224c parp:0xf136 size:0x002a C-string:'UNK_0xf136'
// 1768:      UNK_0xf162  codep:0x224c parp:0xf162 size:0x0036 C-string:'UNK_0xf162'
// 1769:      UNK_0xf19a  codep:0x224c parp:0xf19a size:0x0050 C-string:'UNK_0xf19a'
// 1770:      UNK_0xf1ec  codep:0x224c parp:0xf1ec size:0x0032 C-string:'UNK_0xf1ec'
// 1771:         MDAMAGE  codep:0x1d29 parp:0xf22a size:0x000e C-string:'MDAMAGE'
// 1772:      UNK_0xf23a  codep:0x224c parp:0xf23a size:0x000c C-string:'UNK_0xf23a'
// 1773:      UNK_0xf248  codep:0x224c parp:0xf248 size:0x0020 C-string:'UNK_0xf248'
// 1774:      UNK_0xf26a  codep:0x224c parp:0xf26a size:0x00bc C-string:'UNK_0xf26a'
// 1775:         #>DAMAG  codep:0x4a4f parp:0xf332 size:0x0024 C-string:'_n__gt_DAMAG'
// 1776:      UNK_0xf358  codep:0x224c parp:0xf358 size:0x001e C-string:'UNK_0xf358'
// 1777:      UNK_0xf378  codep:0x224c parp:0xf378 size:0x002a C-string:'UNK_0xf378'
// 1778:      UNK_0xf3a4  codep:0x224c parp:0xf3a4 size:0x0044 C-string:'UNK_0xf3a4'
// 1779:      UNK_0xf3ea  codep:0x224c parp:0xf3ea size:0x000c C-string:'UNK_0xf3ea'
// 1780:      UNK_0xf3f8  codep:0x224c parp:0xf3f8 size:0x000a C-string:'UNK_0xf3f8'
// 1781:      UNK_0xf404  codep:0x224c parp:0xf404 size:0x0036 C-string:'UNK_0xf404'
// 1782:      UNK_0xf43c  codep:0x224c parp:0xf43c size:0x0041 C-string:'UNK_0xf43c'
// 1783:      UNK_0xf47f  codep:0x224c parp:0xf47f size:0x0064 C-string:'UNK_0xf47f'
// 1784:      UNK_0xf4e5  codep:0x224c parp:0xf4e5 size:0x0010 C-string:'UNK_0xf4e5'
// 1785:      UNK_0xf4f7  codep:0x224c parp:0xf4f7 size:0x000e C-string:'UNK_0xf4f7'
// 1786:      UNK_0xf507  codep:0x224c parp:0xf507 size:0x000e C-string:'UNK_0xf507'
// 1787:         DO-DAMA  codep:0x224c parp:0xf521 size:0x0000 C-string:'DO_dash_DAMA'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char _i_OVS[2] = {0x4e, 0xcb}; // 'OVS
unsigned char RSRC[9] = {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x41, 0x53}; // RSRC
unsigned char UNK_0xebd6[2] = {0x00, 0x00}; // UNK_0xebd6
unsigned char UNK_0xebda[2] = {0x3a, 0x20}; // UNK_0xebda
unsigned char UNK_0xebde[4] = {0x56, 0x3a, 0x20, 0x53}; // UNK_0xebde
unsigned char LDAMAGE[12] = {0x00, 0x00, 0x5a, 0x00, 0xd2, 0x00, 0x68, 0x01, 0xfe, 0x01, 0x94, 0x02}; // LDAMAGE
unsigned char WOUNDED[6] = {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54}; // WOUNDED
unsigned char UNK_0xed9a[86] = {0x00, 0x00, 0x4c, 0x22, 0x90, 0xed, 0x41, 0x0e, 0x8b, 0x3b, 0x72, 0x0f, 0xf2, 0x0e, 0xb8, 0x15, 0x50, 0x0e, 0x92, 0x0c, 0x7f, 0x0e, 0x5f, 0x12, 0xfa, 0x15, 0x0a, 0x00, 0x32, 0x0e, 0x4a, 0x17, 0x60, 0x16, 0x1c, 0x00, 0x50, 0x0e, 0x92, 0x0c, 0x5d, 0x17, 0xff, 0x00, 0x5f, 0x12, 0xfa, 0x15, 0x0e, 0x00, 0x50, 0x0e, 0x6a, 0x6d, 0x2e, 0x0f, 0x98, 0xed, 0x11, 0x4c, 0x4a, 0x17, 0xd0, 0x15, 0xd0, 0xff, 0x90, 0x16, 0x4c, 0x22, 0x90, 0xed, 0x8b, 0x3b, 0x5d, 0x17, 0xff, 0x00, 0xfd, 0x6d, 0x98, 0xed, 0xc5, 0x6d, 0x90, 0x16}; // UNK_0xed9a
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

// 0xeac7: db 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xd8 0x4a 0x90 0x16 'L". ] d  J  '

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
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
}


// ================================================
// 0xeaf3: WORD 'UNK_0xeaf5' codep=0x224c parp=0xeaf5
// ================================================

void UNK_0xeaf5() // UNK_0xeaf5
{
  _star_SHIP(); // *SHIP
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
// 0xebb2: db 0x10 0x1f 0x01 0xea 0x73 0x10 0x13 0x01 0x14 0x89 0x64 '    s     d'

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
  C_at_(); // C@
  Push(0x000f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xebf0: WORD 'UNK_0xebf2' codep=0x224c parp=0xebf2
// ================================================

void UNK_0xebf2() // UNK_0xebf2
{
  C_at_(); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xebfa: WORD 'UNK_0xebfc' codep=0x224c parp=0xebfc
// ================================================

void UNK_0xebfc() // UNK_0xebfc
{
  UNK_0xeb9e(); // UNK_0xeb9e
  C_at_(); // C@
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
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  _dash_(); // -
  DUP(); // DUP
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

// 0xec44: db 0x4c 0x22 0xb4 0x0d 0xa2 0x0e 0xd3 0x7c 0x41 0x0e 0x5d 0x17 0x80 0x00 0xf5 0x12 0xb4 0x0d 0xf2 0x0e 0x92 0x0f 0x20 0x0f 0x89 0x11 0x90 0x0e 0x3e 0x13 0x90 0x0e 0xed 0x7c 0x90 0x16 'L"     |A ]                 >    |  '

// ================================================
// 0xec68: WORD 'UNK_0xec6a' codep=0x224c parp=0xec6a
// ================================================

void UNK_0xec6a() // UNK_0xec6a
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(1); // 1
  UNK_0xebad(); // UNK_0xebad
  DUP(); // DUP
  C_at_(); // C@
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
  UNK_0xeb99(); // UNK_0xeb99
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
  UNK_0xeba3(); // UNK_0xeba3
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

// 0xed58: db 0x29 0x1d 0x3a 0x20 0x4c 0x22 0xc7 0xea 0x5d 0x17 0x46 0x00 0x46 0x12 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x58 0xed 0xae 0x0b 0xe7 0x0f 0xd8 0x4a 0xb5 0xeb 0x92 0x0c 0x4c 0x0f 0x5d 0x17 0x0a 0x00 0x4c 0x0f 0x83 0x3b 0x89 0x11 0x90 0x16 ') : L"  ] F F   L". X      J    L ]   L  ;    '

// ================================================
// 0xed86: WORD 'WOUNDED' codep=0x1d29 parp=0xed92
// ================================================
// 0xed92: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 ' ALLOT'

// ================================================
// 0xed98: WORD 'UNK_0xed9a' codep=0x1d29 parp=0xed9a
// ================================================
// 0xed9a: db 0x00 0x00 0x4c 0x22 0x90 0xed 0x41 0x0e 0x8b 0x3b 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x50 0x0e 0x92 0x0c 0x7f 0x0e 0x5f 0x12 0xfa 0x15 0x0a 0x00 0x32 0x0e 0x4a 0x17 0x60 0x16 0x1c 0x00 0x50 0x0e 0x92 0x0c 0x5d 0x17 0xff 0x00 0x5f 0x12 0xfa 0x15 0x0e 0x00 0x50 0x0e 0x6a 0x6d 0x2e 0x0f 0x98 0xed 0x11 0x4c 0x4a 0x17 0xd0 0x15 0xd0 0xff 0x90 0x16 0x4c 0x22 0x90 0xed 0x8b 0x3b 0x5d 0x17 0xff 0x00 0xfd 0x6d 0x98 0xed 0xc5 0x6d 0x90 0x16 '  L"  A  ;r     P    _     2 J `   P   ]   _     P jm.    LJ       L"   ;]    m   m  '

// ================================================
// 0xedf0: WORD 'UNK_0xedf2' codep=0x224c parp=0xedf2
// ================================================

void UNK_0xedf2() // UNK_0xedf2
{
  YELLOW(); // YELLOW
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
// 0xee70: db 0x38 0x0c 0xd3 0x7c 0x93 0x3b 0xf5 0x12 0xbf 0xea 0xb4 0x0d 0xd3 0x7c 0x5d 0x17 0x7f 0x00 0xf5 0x12 0xbf 0xea 0x90 0x0e 0xf5 0x12 0x90 0x16 0x4c 0x22 0x5d 0x17 0x53 0xeb 0x92 0x0c 0x5d 0x17 0x7f 0x00 0xf5 0x12 0xbf 0xea 0x90 0x16 '8  | ;       |]            L"] S   ]        '

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
  _n__gt__ask_FIEL(); // #>?FIEL
  DUP(); // DUP
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
  C_at_(); // C@
}


// ================================================
// 0xef8c: WORD 'UNK_0xef8e' codep=0x224c parp=0xef8e
// ================================================

void UNK_0xef8e() // UNK_0xef8e
{
  UNK_0xebb2(); // UNK_0xebb2
  C_at_(); // C@
  DUP(); // DUP
  _gt_R(); // >R
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;

  UNK_0x3f3b("KILLED");
  goto label6;

  label1:
  R_at_(); // R@
  Push(1); // 1
  Push(0x0015);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;

  UNK_0x3f3b("CRITICALLY ");
  goto label5;

  label2:
  R_at_(); // R@
  Push(0x0015);
  Push(0x0033);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;

  UNK_0x3f3b("HEAVILIY ");
  goto label5;

  label3:
  R_at_(); // R@
  Push(0x0033);
  Push(0x0051);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label4;

  UNK_0x3f3b("MODERATELY ");
  goto label5;

  label4:

  UNK_0x3f3b("SLIGHTLY ");

  label5:
  TYPE(); // TYPE

  UNK_0x3f3b("WOUNDED ");

  label6:
  TYPE(); // TYPE
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
  UNK_0xebbf(); // UNK_0xebbf
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
  UNK_0xeb45(); // UNK_0xeb45
  C_ex_(); // C!
  CTINIT(); // CTINIT
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE

  UNK_0x3f3b("ALIEN SHIP DESTROYED ");
  _dot_TTY(); // .TTY
  Push(0); // 0
  UNK_0xeb31(); // UNK_0xeb31
  C_ex_(); // C!
  UNK_0xeb21(); // UNK_0xeb21
  Push(pp_UNK_0xf081); // UNK_0xf081
  Push(cc__7); // 7
  CMOVE(); // CMOVE
  Push(0x0018);
  _ex_INST_dash_S(); // !INST-S
  SET_dash_CUR(); // SET-CUR
  Push(pp_UNK_0xf081); // UNK_0xf081
  UNK_0xeb4a(); // UNK_0xeb4a
  Push(cc__7); // 7
  CMOVE(); // CMOVE
  UNK_0xec6a(); // UNK_0xec6a
  Push(0xc27d);
  MODULE(); // MODULE
}

// 0xf0de: db 0x4c 0x22 0x58 0xed 0xfd 0x4b 0xde 0xed 0xc9 0xbf 0x41 0x0e 0x5d 0x17 0x12 0x00 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x50 0x0e 0x95 0x49 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x2a 0x00 0x5c 0xed 0xfa 0x15 0x1e 0x00 0xf2 0x79 0x68 0xed 0x5d 0x17 0xb2 0xeb 0x2e 0xec 0xc9 0x79 0x50 0x0e 0xc9 0xbf 0x92 0x0f 0x73 0x3b 0x4c 0x0f 0x9c 0xed 0x60 0x16 0x04 0x00 0xde 0x0d 0x60 0x16 0x06 0x00 0xde 0x0d 0x4a 0x17 0x73 0x3b 0x5c 0x15 0xc4 0xff 0x90 0x16 'L"X  K    A ]   r     P  I  >   * \      yh ]   .  yP     s;L   `     `     J s;\     '

// ================================================
// 0xf134: WORD 'UNK_0xf136' codep=0x224c parp=0xf136
// ================================================

void UNK_0xf136() // UNK_0xf136
{
  UNK_0xeb09(); // UNK_0xeb09
  C_at_(); // C@
  DUP(); // DUP
  Push(-Pop()); // NEGATE
  Push(pp_A_dash_STREN); // A-STREN
  _plus__ex_(); // +!
  UNK_0xeb3b(); // UNK_0xeb3b
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  UNK_0xeb01(); // UNK_0xeb01
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  _star__slash_(); // */
  Push(pp_A_dash_STREN); // A-STREN
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(pp_A_dash_STREN); // A-STREN
  _ex_(); // !
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162() // UNK_0xf162
{
  UNK_0xeb40(); // UNK_0xeb40
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
  UNK_0xeb3b(); // UNK_0xeb3b
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
  _at_INST_dash_S(); // @INST-S
  Push(0x0018);
  _eq_(); // =
  _at_INST_dash_C(); // @INST-C
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
  UNK_0xeb99(); // UNK_0xeb99
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(cc__6); // 6
  UNK_0xeb80(); // UNK_0xeb80
  UNK_0xebf2(); // UNK_0xebf2
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(cc__5); // 5
  _slash_(); // /
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  UNK_0xeb99(); // UNK_0xeb99
  _ex_(); // !
}


// ================================================
// 0xf268: WORD 'UNK_0xf26a' codep=0x224c parp=0xf26a
// ================================================

void UNK_0xf26a() // UNK_0xf26a
{
  UNK_0xeba3(); // UNK_0xeba3
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(cc__6); // 6
  UNK_0xeb58(); // UNK_0xeb58
  UNK_0xebf2(); // UNK_0xebf2
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(cc__5); // 5
  _slash_(); // /
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  UNK_0xeba3(); // UNK_0xeba3
  _ex_(); // !
  UNK_0xeba3(); // UNK_0xeba3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0xbe2b);
  MODULE(); // MODULE
  Push(cc__3); // 3
  Push(pp__n_AUX); // #AUX
  _st__ex__gt_(); // <!>
}

// 0xf2a0: db 0x4c 0x22 0x5d 0x17 0x53 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x5d 0xeb 0x44 0xec 0xa8 0xee 0x89 0x12 0xfa 0x15 0x2c 0x00 0xaf 0x53 0xae 0x0b 0x07 0x13 0xfa 0x15 0x0c 0x00 0x83 0x3b 0x5d 0x17 0xef 0xbd 0xce 0x84 0x32 0x0e 0x5d 0x17 0x62 0xeb 0xd3 0x7c 0x5d 0x17 0x80 0x00 0x3e 0x13 0x5d 0x17 0x62 0xeb 0xed 0x7c 0xaf 0x53 0xb7 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x67 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x71 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x85 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x7b 0xeb 0x44 0xec 0xf8 0xee 0x89 0x12 0xfa 0x15 0x08 0x00 0xbb 0xea 0xae 0x0b 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x8f 0xeb 0x44 0xec 0x90 0x16 'L"] S D   L"] ] D       ,  S         ;]     2 ] b  |]   > ] b  | S m  L"] g D   L"] q D   L"]   D   L"] { D                 L"]   D   '

// ================================================
// 0xf326: WORD '#>DAMAG' codep=0x4a4f parp=0xf332
// ================================================
// 0xf332: db 0x08 0x00 0x34 0x0e 0x01 0x00 0xa2 0xf2 0x02 0x00 0xac 0xf2 0x03 0x00 0xe8 0xf2 0x04 0x00 0xf2 0xf2 0x05 0x00 0xfc 0xf2 0x06 0x00 0x1e 0xf3 0x07 0x00 0xe0 0xf0 0x08 0x00 0x06 0xf3 '  4                                 '

// ================================================
// 0xf356: WORD 'UNK_0xf358' codep=0x224c parp=0xf358
// ================================================

void UNK_0xf358() // UNK_0xf358
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
  UNK_0xeba3(); // UNK_0xeba3
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf26a(); // UNK_0xf26a
  return;

  label2:
  Push(0x000a);
  UNK_0xeb53(); // UNK_0xeb53
  C_at_(); // C@
  _star__slash_(); // */
  UNK_0xef76(); // UNK_0xef76
  _n__gt_DAMAG(); // #>DAMAG
}


// ================================================
// 0xf3a2: WORD 'UNK_0xf3a4' codep=0x224c parp=0xf3a4
// ================================================

void UNK_0xf3a4() // UNK_0xf3a4
{

  label4:
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf358(); // UNK_0xf358
  UNK_0xf378(); // UNK_0xf378
  goto label4;

  label1:
  Push(pp_UNK_0xed9a); // UNK_0xed9a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf02e(); // UNK_0xf02e
  Push(0xc012);
  MODULE(); // MODULE
  Push(0xc03f);
  MODULE(); // MODULE

  label2:
  UNK_0xecf2(); // UNK_0xecf2
  Push(0xeb53);
  IFLD_at_(); // IFLD@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  UNK_0xee27(); // UNK_0xee27

  label3:
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
  _gt_MAINVI(); // >MAINVI
  _ex_COLOR(); // !COLOR
  VCLIPSE(); // VCLIPSE
  UNK_0xec0a(); // UNK_0xec0a
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  SWAP(); // SWAP
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc__3); // 3
  _dash_(); // -
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
}


// ================================================
// 0xf43a: WORD 'UNK_0xf43c' codep=0x224c parp=0xf43c
// ================================================

void UNK_0xf43c() // UNK_0xf43c
{
  UNK_0xf404(); // UNK_0xf404
  CTINIT(); // CTINIT
  DCLIPSE(); // DCLIPSE
  _gt_DISPLA(); // >DISPLA
  UNK_0xebe4(); // UNK_0xebe4
  DUP(); // DUP
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
  LT_dash_BLUE(); // LT-BLUE
  UNK_0xf404(); // UNK_0xf404
  UNK_0xec0a(); // UNK_0xec0a
  UNK_0xf23a(); // UNK_0xf23a
  _gt_R(); // >R
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_(); // ?ICONS-
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
  _at_INST_dash_C(); // @INST-C
  Push(0x0014);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  UNK_0xeb29(); // UNK_0xeb29
  C_at_(); // C@
  if (Pop() == 0) goto label3;
  UNK_0xf19a(); // UNK_0xf19a
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
// 0xf4e3: WORD 'UNK_0xf4e5' codep=0x224c parp=0xf4e5
// ================================================

void UNK_0xf4e5() // UNK_0xf4e5
{
  UNK_0xf3f8(); // UNK_0xf3f8
  RED(); // RED
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
  