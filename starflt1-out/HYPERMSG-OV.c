// ====== OVERLAY 'HYPERMSG-OV' ======
// store offset = 0xe550
// overlay size   = 0x1010

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0xa629 C-string:'UNK_0x3f3b'
// 1704:      UNK_0xe566  codep:0x224c parp:0xe566 size:0x001c C-string:'UNK_0xe566'
// 1705:      UNK_0xe584  codep:0x2214 parp:0xe584 size:0x0016 C-string:'UNK_0xe584'
// 1706:      UNK_0xe59c  codep:0x744d parp:0xe59c size:0x0003 C-string:'UNK_0xe59c'
// 1707:      UNK_0xe5a1  codep:0x73ea parp:0xe5a1 size:0x0006 C-string:'UNK_0xe5a1'
// 1708:      UNK_0xe5a9  codep:0x744d parp:0xe5a9 size:0x0003 C-string:'UNK_0xe5a9'
// 1709:      UNK_0xe5ae  codep:0x73ea parp:0xe5ae size:0x0006 C-string:'UNK_0xe5ae'
// 1710:      UNK_0xe5b6  codep:0x73ea parp:0xe5b6 size:0x0006 C-string:'UNK_0xe5b6'
// 1711:      UNK_0xe5be  codep:0x744d parp:0xe5be size:0x0003 C-string:'UNK_0xe5be'
// 1712:      UNK_0xe5c3  codep:0x744d parp:0xe5c3 size:0x0003 C-string:'UNK_0xe5c3'
// 1713:      UNK_0xe5c8  codep:0x744d parp:0xe5c8 size:0x0003 C-string:'UNK_0xe5c8'
// 1714:      UNK_0xe5cd  codep:0x744d parp:0xe5cd size:0x0003 C-string:'UNK_0xe5cd'
// 1715:      UNK_0xe5d2  codep:0x744d parp:0xe5d2 size:0x0003 C-string:'UNK_0xe5d2'
// 1716:      UNK_0xe5d7  codep:0x744d parp:0xe5d7 size:0x0003 C-string:'UNK_0xe5d7'
// 1717:      UNK_0xe5dc  codep:0x744d parp:0xe5dc size:0x0003 C-string:'UNK_0xe5dc'
// 1718:      UNK_0xe5e1  codep:0x744d parp:0xe5e1 size:0x0003 C-string:'UNK_0xe5e1'
// 1719:         GET-VES  codep:0x4a4f parp:0xe5f0 size:0x0010 C-string:'GET_dash_VES'
// 1720:      UNK_0xe602  codep:0x224c parp:0xe602 size:0x0012 C-string:'UNK_0xe602'
// 1721:      UNK_0xe616  codep:0x224c parp:0xe616 size:0x0070 C-string:'UNK_0xe616'
// 1722:         +A-VESS  codep:0x224c parp:0xe692 size:0x00a6 C-string:'_plus_A_dash_VESS'
// 1723:      UNK_0xe73a  codep:0x224c parp:0xe73a size:0x002a C-string:'UNK_0xe73a'
// 1724:            ?PRL  codep:0x224c parp:0xe76d size:0x0142 C-string:'_ask_PRL'
// 1725:      UNK_0xe8b1  codep:0x744d parp:0xe8b1 size:0x0003 C-string:'UNK_0xe8b1'
// 1726:      UNK_0xe8b6  codep:0x224c parp:0xe8b6 size:0x0052 C-string:'UNK_0xe8b6'
// 1727:      DISP-SETUP  codep:0x4a4f parp:0xe917 size:0x0018 C-string:'DISP_dash_SETUP'
// 1728:      UNK_0xe931  codep:0x1d29 parp:0xe931 size:0x0002 C-string:'UNK_0xe931'
// 1729:      UNK_0xe935  codep:0x224c parp:0xe935 size:0x001a C-string:'UNK_0xe935'
// 1730:      UNK_0xe951  codep:0x224c parp:0xe951 size:0x0012 C-string:'UNK_0xe951'
// 1731:        DO-FLARE  codep:0x224c parp:0xe970 size:0x00de C-string:'DO_dash_FLARE'
// 1732:      UNK_0xea50  codep:0x224c parp:0xea50 size:0x0021 C-string:'UNK_0xea50'
// 1733:      UNK_0xea73  codep:0x224c parp:0xea73 size:0x000a C-string:'UNK_0xea73'
// 1734:      UNK_0xea7f  codep:0x224c parp:0xea7f size:0x000b C-string:'UNK_0xea7f'
// 1735:      UNK_0xea8c  codep:0x224c parp:0xea8c size:0x000d C-string:'UNK_0xea8c'
// 1736:      UNK_0xea9b  codep:0x224c parp:0xea9b size:0x000e C-string:'UNK_0xea9b'
// 1737:      UNK_0xeaab  codep:0x224c parp:0xeaab size:0x0016 C-string:'UNK_0xeaab'
// 1738:      UNK_0xeac3  codep:0x224c parp:0xeac3 size:0x0015 C-string:'UNK_0xeac3'
// 1739:      UNK_0xeada  codep:0x224c parp:0xeada size:0x002c C-string:'UNK_0xeada'
// 1740:      UNK_0xeb08  codep:0x224c parp:0xeb08 size:0x001c C-string:'UNK_0xeb08'
// 1741:      UNK_0xeb26  codep:0x224c parp:0xeb26 size:0x000e C-string:'UNK_0xeb26'
// 1742:      UNK_0xeb36  codep:0x224c parp:0xeb36 size:0x0021 C-string:'UNK_0xeb36'
// 1743:      UNK_0xeb59  codep:0x224c parp:0xeb59 size:0x001b C-string:'UNK_0xeb59'
// 1744:      UNK_0xeb76  codep:0x224c parp:0xeb76 size:0x0017 C-string:'UNK_0xeb76'
// 1745:      UNK_0xeb8f  codep:0x224c parp:0xeb8f size:0x0012 C-string:'UNK_0xeb8f'
// 1746:            NF-M  codep:0x4a4f parp:0xebaa size:0x0018 C-string:'NF_dash_M'
// 1747:         NF-MESS  codep:0x224c parp:0xebce size:0x0006 C-string:'NF_dash_MESS'
// 1748:      UNK_0xebd6  codep:0x224c parp:0xebd6 size:0x002c C-string:'UNK_0xebd6'
// 1749:      UNK_0xec04  codep:0x224c parp:0xec04 size:0x0027 C-string:'UNK_0xec04'
// 1750:      UNK_0xec2d  codep:0x224c parp:0xec2d size:0x0028 C-string:'UNK_0xec2d'
// 1751:      UNK_0xec57  codep:0x224c parp:0xec57 size:0x0026 C-string:'UNK_0xec57'
// 1752:      UNK_0xec7f  codep:0x224c parp:0xec7f size:0x0045 C-string:'UNK_0xec7f'
// 1753:            NS-M  codep:0x4a4f parp:0xeccd size:0x0018 C-string:'NS_dash_M'
// 1754:         NS-MESS  codep:0x224c parp:0xecf1 size:0x0006 C-string:'NS_dash_MESS'
// 1755:      UNK_0xecf9  codep:0x744d parp:0xecf9 size:0x0003 C-string:'UNK_0xecf9'
// 1756:      UNK_0xecfe  codep:0x744d parp:0xecfe size:0x0007 C-string:'UNK_0xecfe'
// 1757:      UNK_0xed07  codep:0x1d29 parp:0xed07 size:0x0002 C-string:'UNK_0xed07'
// 1758:      UNK_0xed0b  codep:0x224c parp:0xed0b size:0x003e C-string:'UNK_0xed0b'
// 1759:      UNK_0xed4b  codep:0x224c parp:0xed4b size:0x0047 C-string:'UNK_0xed4b'
// 1760:      UNK_0xed94  codep:0x224c parp:0xed94 size:0x003c C-string:'UNK_0xed94'
// 1761:      UNK_0xedd2  codep:0x224c parp:0xedd2 size:0x0012 C-string:'UNK_0xedd2'
// 1762:      UNK_0xede6  codep:0x224c parp:0xede6 size:0x0023 C-string:'UNK_0xede6'
// 1763:      UNK_0xee0b  codep:0x224c parp:0xee0b size:0x0018 C-string:'UNK_0xee0b'
// 1764:      UNK_0xee25  codep:0x224c parp:0xee25 size:0x0014 C-string:'UNK_0xee25'
// 1765:      UNK_0xee3b  codep:0x224c parp:0xee3b size:0x005e C-string:'UNK_0xee3b'
// 1766:           HCASE  codep:0x4a4f parp:0xeea3 size:0x0014 C-string:'HCASE'
// 1767:            HEAT  codep:0x224c parp:0xeec0 size:0x0010 C-string:'HEAT'
// 1768:      UNK_0xeed2  codep:0x73ea parp:0xeed2 size:0x0006 C-string:'UNK_0xeed2'
// 1769:         P-LSEED  codep:0x73ea parp:0xeee4 size:0x0006 C-string:'P_dash_LSEED'
// 1770:      UNK_0xeeec  codep:0x73ea parp:0xeeec size:0x0006 C-string:'UNK_0xeeec'
// 1771:      UNK_0xeef4  codep:0x744d parp:0xeef4 size:0x0003 C-string:'UNK_0xeef4'
// 1772:      UNK_0xeef9  codep:0x744d parp:0xeef9 size:0x0003 C-string:'UNK_0xeef9'
// 1773:      UNK_0xeefe  codep:0x224c parp:0xeefe size:0x0012 C-string:'UNK_0xeefe'
// 1774:            S>CM  codep:0x4a4f parp:0xef19 size:0x0010 C-string:'S_gt_CM'
// 1775:      UNK_0xef2b  codep:0x224c parp:0xef2b size:0x0008 C-string:'UNK_0xef2b'
// 1776:            OSET  codep:0x224c parp:0xef3c size:0x00a5 C-string:'OSET'
// 1777:      UNK_0xefe3  codep:0x224c parp:0xefe3 size:0x0006 C-string:'UNK_0xefe3'
// 1778:      UNK_0xefeb  codep:0x224c parp:0xefeb size:0x0014 C-string:'UNK_0xefeb'
// 1779:      UNK_0xf001  codep:0x224c parp:0xf001 size:0x001f C-string:'UNK_0xf001'
// 1780:      UNK_0xf022  codep:0x224c parp:0xf022 size:0x0054 C-string:'UNK_0xf022'
// 1781:      UNK_0xf078  codep:0x224c parp:0xf078 size:0x0028 C-string:'UNK_0xf078'
// 1782:            UF-M  codep:0x4a4f parp:0xf0a9 size:0x0018 C-string:'UF_dash_M'
// 1783:         UF-MESS  codep:0x224c parp:0xf0cd size:0x0006 C-string:'UF_dash_MESS'
// 1784:      UNK_0xf0d5  codep:0x224c parp:0xf0d5 size:0x0017 C-string:'UNK_0xf0d5'
// 1785:      UNK_0xf0ee  codep:0x224c parp:0xf0ee size:0x0006 C-string:'UNK_0xf0ee'
// 1786:      UNK_0xf0f6  codep:0x224c parp:0xf0f6 size:0x0006 C-string:'UNK_0xf0f6'
// 1787:      UNK_0xf0fe  codep:0x224c parp:0xf0fe size:0x0006 C-string:'UNK_0xf0fe'
// 1788:      UNK_0xf106  codep:0x224c parp:0xf106 size:0x0006 C-string:'UNK_0xf106'
// 1789:            US-M  codep:0x4a4f parp:0xf115 size:0x0014 C-string:'US_dash_M'
// 1790:         US-MESS  codep:0x224c parp:0xf135 size:0x0061 C-string:'US_dash_MESS'
// 1791:             .EX  codep:0x4a4f parp:0xf19e size:0x000c C-string:'_dot_EX'
// 1792:      UNK_0xf1ac  codep:0x744d parp:0xf1ac size:0x0003 C-string:'UNK_0xf1ac'
// 1793:      UNK_0xf1b1  codep:0x1d29 parp:0xf1b1 size:0x0002 C-string:'UNK_0xf1b1'
// 1794:            DMSG  codep:0x224c parp:0xf1bc size:0x009a C-string:'DMSG'
// 1795:          (CTXT)  codep:0x4a4f parp:0xf261 size:0x0018 C-string:'_ro_CTXT_rc_'
// 1796:      UNK_0xf27b  codep:0x1d29 parp:0xf27b size:0x0002 C-string:'UNK_0xf27b'
// 1797:      UNK_0xf27f  codep:0x1d29 parp:0xf27f size:0x0002 C-string:'UNK_0xf27f'
// 1798:      UNK_0xf283  codep:0x1d29 parp:0xf283 size:0x0002 C-string:'UNK_0xf283'
// 1799:      UNK_0xf287  codep:0x1d29 parp:0xf287 size:0x0002 C-string:'UNK_0xf287'
// 1800:      UNK_0xf28b  codep:0x224c parp:0xf28b size:0x007f C-string:'UNK_0xf28b'
// 1801:      UNK_0xf30c  codep:0x744d parp:0xf30c size:0x0003 C-string:'UNK_0xf30c'
// 1802:      UNK_0xf311  codep:0x744d parp:0xf311 size:0x0003 C-string:'UNK_0xf311'
// 1803:      UNK_0xf316  codep:0x744d parp:0xf316 size:0x0003 C-string:'UNK_0xf316'
// 1804:      UNK_0xf31b  codep:0x224c parp:0xf31b size:0x0016 C-string:'UNK_0xf31b'
// 1805:      UNK_0xf333  codep:0x224c parp:0xf333 size:0x0076 C-string:'UNK_0xf333'
// 1806:      UNK_0xf3ab  codep:0x224c parp:0xf3ab size:0x0048 C-string:'UNK_0xf3ab'
// 1807:      UNK_0xf3f5  codep:0x224c parp:0xf3f5 size:0x002e C-string:'UNK_0xf3f5'
// 1808:      UNK_0xf425  codep:0x224c parp:0xf425 size:0x0016 C-string:'UNK_0xf425'
// 1809:      UNK_0xf43d  codep:0x1d29 parp:0xf43d size:0x0002 C-string:'UNK_0xf43d'
// 1810:          TRAK-E  codep:0x224c parp:0xf44a size:0x0092 C-string:'TRAK_dash_E'
// 1811:      UNK_0xf4de  codep:0x224c parp:0xf4de size:0x0006 C-string:'UNK_0xf4de'
// 1812:      UNK_0xf4e6  codep:0x224c parp:0xf4e6 size:0x0006 C-string:'UNK_0xf4e6'
// 1813:      UNK_0xf4ee  codep:0x2214 parp:0xf4ee size:0x0002 C-string:'UNK_0xf4ee'
// 1814:           @'EXT  codep:0x4a4f parp:0xf4fa size:0x0010 C-string:'_at__i_EXT'
// 1815:         (!'EXT)  codep:0x224c parp:0xf516 size:0x0000 C-string:'_ro__ex__i_EXT_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe931[2] = {0x00, 0x00}; // UNK_0xe931
unsigned char UNK_0xed07[2] = {0x3a, 0x20}; // UNK_0xed07
unsigned char UNK_0xf1b1[2] = {0x3a, 0x20}; // UNK_0xf1b1
unsigned char UNK_0xf27b[2] = {0x3a, 0x20}; // UNK_0xf27b
unsigned char UNK_0xf27f[2] = {0x3a, 0x20}; // UNK_0xf27f
unsigned char UNK_0xf283[2] = {0x3a, 0x20}; // UNK_0xf283
unsigned char UNK_0xf287[2] = {0x3a, 0x20}; // UNK_0xf287
unsigned char UNK_0xf43d[2] = {0x3a, 0x20}; // UNK_0xf43d

const unsigned short int cc_UNK_0xe584 = 0x0016; // UNK_0xe584
const unsigned short int cc_UNK_0xf4ee = 0x3a48; // UNK_0xf4ee


// 0xe562: db 0xff 0x00 '  '

// ================================================
// 0xe564: WORD 'UNK_0xe566' codep=0x224c parp=0xe566
// ================================================

void UNK_0xe566() // UNK_0xe566
{
  Push(0x531d); // pointer to TCLR
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
}

// 0xe56e: db 0x4c 0x22 0xc9 0x79 0xc9 0x79 0x90 0x16 0x14 0x22 0x00 0x00 0x14 0x22 0x4b 0x00 0x14 0x22 0x00 0x00 'L" y y   "   "K  "  '

// ================================================
// 0xe582: WORD 'UNK_0xe584' codep=0x2214 parp=0xe584
// ================================================
// 0xe584: db 0x16 0x00 0x14 0x22 0x90 0x01 0x4c 0x22 0xc2 0x51 0xf2 0x79 0xb8 0x48 0xb7 0x74 0xac 0x6d 0xc9 0x79 0x90 0x16 '   "  L" Q y H t m y  '

// ================================================
// 0xe59a: WORD 'UNK_0xe59c' codep=0x744d parp=0xe59c
// ================================================
// 0xe59c: db 0x19 0x0b 0x01 '   '

// ================================================
// 0xe59f: WORD 'UNK_0xe5a1' codep=0x73ea parp=0xe5a1
// ================================================
// 0xe5a1: db 0x19 0x05 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xe5a7: WORD 'UNK_0xe5a9' codep=0x744d parp=0xe5a9
// ================================================
// 0xe5a9: db 0x19 0x0c 0x01 '   '

// ================================================
// 0xe5ac: WORD 'UNK_0xe5ae' codep=0x73ea parp=0xe5ae
// ================================================
// 0xe5ae: db 0x19 0x06 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xe5b4: WORD 'UNK_0xe5b6' codep=0x73ea parp=0xe5b6
// ================================================
// 0xe5b6: db 0x19 0x0c 0x04 0x49 0x91 0x64 '   I d'

// ================================================
// 0xe5bc: WORD 'UNK_0xe5be' codep=0x744d parp=0xe5be
// ================================================
// 0xe5be: db 0x19 0x12 0x04 '   '

// ================================================
// 0xe5c1: WORD 'UNK_0xe5c3' codep=0x744d parp=0xe5c3
// ================================================
// 0xe5c3: db 0x3d 0x15 0x01 '=  '

// ================================================
// 0xe5c6: WORD 'UNK_0xe5c8' codep=0x744d parp=0xe5c8
// ================================================
// 0xe5c8: db 0x3d 0x16 0x01 '=  '

// ================================================
// 0xe5cb: WORD 'UNK_0xe5cd' codep=0x744d parp=0xe5cd
// ================================================
// 0xe5cd: db 0x3d 0x17 0x01 '=  '

// ================================================
// 0xe5d0: WORD 'UNK_0xe5d2' codep=0x744d parp=0xe5d2
// ================================================
// 0xe5d2: db 0x3d 0x18 0x01 '=  '

// ================================================
// 0xe5d5: WORD 'UNK_0xe5d7' codep=0x744d parp=0xe5d7
// ================================================
// 0xe5d7: db 0x3d 0x19 0x01 '=  '

// ================================================
// 0xe5da: WORD 'UNK_0xe5dc' codep=0x744d parp=0xe5dc
// ================================================
// 0xe5dc: db 0x3d 0x13 0x01 '=  '

// ================================================
// 0xe5df: WORD 'UNK_0xe5e1' codep=0x744d parp=0xe5e1
// ================================================
// 0xe5e1: db 0x3d 0x14 0x01 '=  '

// ================================================
// 0xe5e4: WORD 'GET-VES' codep=0x4a4f parp=0xe5f0
// ================================================
// 0xe5f0: db 0x03 0x00 0xc8 0xe5 0x00 0x00 0xd7 0xe5 0x01 0x00 0xd2 0xe5 0x02 0x00 0xcd 0xe5 '                '

// ================================================
// 0xe600: WORD 'UNK_0xe602' codep=0x224c parp=0xe602
// ================================================

void UNK_0xe602() // UNK_0xe602
{
  Push(0xc96d); // pointer to ?CALLING
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xc437);
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
}


// ================================================
// 0xe614: WORD 'UNK_0xe616' codep=0x224c parp=0xe616
// ================================================

void UNK_0xe616() // UNK_0xe616
{
  Push(cc_UNK_0xe584); // UNK_0xe584
  Push(0xc96d); // pointer to ?CALLING
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(cc__7); // 7
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) goto label2;
  SWAP(); // SWAP

  label2:
  goto label3;

  label1:
  Push(cc__6); // 6
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(-Pop()); // NEGATE
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  _2DUP(); // 2DUP
  RRND(); // RRND
  _gt_R(); // >R
  RRND(); // RRND
  R_gt_(); // R>

  label3:
  Push(0xc96d); // pointer to ?CALLING
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  LoadData("UNK_0xe5a1"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x5351); // pointer to A-STRENGTH
  _plus__ex_(); // +!
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
}


// ================================================
// 0xe686: WORD '+A-VESS' codep=0x224c parp=0xe692
// ================================================
// entry

void _plus_A_dash_VESS() // +A-VESS
{
  Push(0x62df); // pointer to (ENCOUNTER
  _at__gt_C_plus_S(); // @>C+S
  Push(0x6404); // IFIELD(UNK_0xe5c3)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(Pop()-2); // 2-
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(1); // 1
  MAX(); // MAX
  Push(0x6402); // IFIELD(UNK_0xe5dc)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x6403); // IFIELD(UNK_0xe5e1)
  Push(Read8(Pop())&0xFF); // C@
  ROT(); // ROT
  Push(0x00ff);
  _st_(); // <
  Push(Pop() * Pop()); // *
  _dash_(); // -
  MIN(); // MIN
  Push(0x0014);
  Push(0x5477); // pointer to AVCNT
  Push(Read16(Pop())); // @
  _dash_(); // -
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(0x5477); // pointer to AVCNT
  _plus__ex_(); // +!
  Push(Read16(regsp)); // DUP
  Push(0x579c); // pointer to #VESS
  _plus__ex_(); // +!
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0019);

  label1:
  Push(0); // 0
  Push(cc__4); // 4
  RRND(); // RRND
  Pop();
  switch(Pop()) // GET-VES
  {
  case 0:
    UNK_0xe5d7(); // UNK_0xe5d7
    break;
  case 1:
    UNK_0xe5d2(); // UNK_0xe5d2
    break;
  case 2:
    UNK_0xe5cd(); // UNK_0xe5cd
    break;
  default:
    UNK_0xe5c8(); // UNK_0xe5c8
    break;

  }
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(1); // 1
  _star_CREATE(); // *CREATE
  UNK_0xe616(); // UNK_0xe616
  SWAP(); // SWAP
  Push(0x63fc); // IFIELD(INST-X)
  D_ex_(); // D!
  Push(0); // 0
  Push(cc__7); // 7
  RRND(); // RRND
  Push(0x63fa); // IFIELD(UNK_0xe59c)
  C_ex_(); // C!
  LoadData("UNK_0xe5ae"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x63fb); // IFIELD(UNK_0xe5a9)
  C_ex_(); // C!
  LoadData("UNK_0xe5b6"); // from 'VESSEL      '
  _2_at_(); // 2@
  Push(0x6401); // IFIELD(UNK_0xe5be)
  D_ex_(); // D!
  UNK_0xe602(); // UNK_0xe602
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffbe

  ICLOSE(); // ICLOSE
  Push(0xc96d); // pointer to ?CALLING
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(0x6230); // pointer to ANCHOR-CONTOUR
  D_ex_(); // D!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe738: WORD 'UNK_0xe73a' codep=0x224c parp=0xe73a
// ================================================

void UNK_0xe73a() // UNK_0xe73a
{
  _gt_R(); // >R
  Push(0); // 0
  Push(0x000f);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(i); // I
  Push(Pop()<<4); // 16*
  Push(Pop() + Pop()); // +
  _ex_COLOR(); // !COLOR
  Push(0x0028);
  Push(0x0082);
  Push(h); // J
  _dot_CIRCLE(); // .CIRCLE
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe6

  R_gt_(); // R>
}


// ================================================
// 0xe764: WORD '?PRL' codep=0x224c parp=0xe76d
// ================================================
// entry

void _ask_PRL() // ?PRL
{
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _eq_(); // =
  Push(cc__ask_A_dash_WEAP); // ?A-WEAP
  Push(Pop() & Pop()); // AND
  Push(0x579c); // pointer to #VESS
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(0x62df); // pointer to (ENCOUNTER
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ARREST");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0x000d);
  Push(0xbdd8);
  MODULE(); // MODULE
  Push(0xbf42);
  MODULE(); // MODULE
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT

  UNK_0x3f3b("THE CRYSTAL PEARL IS PULSING!");
  _dot_TTY(); // .TTY
  _at_CRS(); // @CRS
  Push(1); // 1
  Push(0x0010);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe73a(); // UNK_0xe73a
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff8

  _ex_CRS(); // !CRS

  label2:
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0x5778); // pointer to 'UNNEST
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  goto label2;

  label1:
  Push(0x5dc7); // pointer to HEADING
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x07d0);
  RRND(); // RRND
  Push(0); // 0
  Push(0x06e0);
  RRND(); // RRND
  Push(cc__4); // 4
  ROLL(); // ROLL
}

// 0xe819: db 0x4c 0x22 0x5d 0x17 0x78 0xec 0x41 0x0e 0x2e 0x62 0xac 0x6d 0x56 0x58 0x76 0x6d 0x90 0x16 0x4c 0x22 0x8a 0xe5 0xac 0x5d 0xc5 0x6d 0xb7 0x5d 0xc5 0x6d 0x96 0x9b 0xad 0x62 0x02 0x7a 0x12 0x7a 0x40 0x9f 0x6e 0xe5 0x7e 0xe5 0x19 0xe8 0x90 0x16 0x4c 0x22 0xac 0x5d 0xc5 0x6d 0xb7 0x5d 0xc5 0x6d 0x8a 0xe5 0x96 0x9b 0xdd 0x62 0x02 0x7a 0x30 0x75 0x5d 0x17 0x13 0x00 0x5f 0x12 0xfa 0x15 0x06 0x00 0x11 0x5c 0xb7 0x6d 0x12 0x7a 0x40 0x9f 0x6e 0xe5 0x82 0xe5 0x19 0xe8 0x54 0x9f 0x5d 0x17 0x2a 0xc9 0xce 0x84 0x90 0x16 0x4c 0x22 0x96 0x9b 0x9d 0x62 0x02 0x7a 0xa9 0x74 0xae 0x0b 0x53 0x54 0x76 0x6d 0x12 0x7a 0x40 0x9f 0x6e 0xe5 0x86 0xe5 0x19 0xe8 0x90 0x16 0x4c 0x22 0x96 0x9b 0xc2 0x51 0xf2 0x79 0x5d 0x17 0x37 0xc4 0xce 0x84 0x0e 0x9f 0xc9 0x79 0x90 0x16 'L"] x A .b mVXvm  L"   ] m ] m   b z z@ n ~     L" ] m ] m     b z0u]   _      \ m z@ n     T ] *     L"   b z t  STvm z@ n       L"   Q y] 7      y  '

// ================================================
// 0xe8af: WORD 'UNK_0xe8b1' codep=0x744d parp=0xe8b1
// ================================================
// 0xe8b1: db 0x17 0x0b 0x02 '   '

// ================================================
// 0xe8b4: WORD 'UNK_0xe8b6' codep=0x224c parp=0xe8b6
// ================================================

void UNK_0xe8b6() // UNK_0xe8b6
{
  CI(); // CI
  Push2Words("*ARTH");
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Push2Words("*ASYS");
  _gt_C_plus_S(); // >C+S
  Push(0x5e74); // pointer to STARDATE
  Push(Read16(Pop())); // @
  Push(0x63fa); // IFIELD(UNK_0xe8b1)
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x567c); // pointer to ?WIN
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0x63fa); // IFIELD(UNK_0xe8b1)
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND

  label2:
  ICLOSE(); // ICLOSE
  return;

  label1:
  Push(1); // 1
}

// 0xe8ec: db 0x4c 0x22 0xa4 0x51 0xf2 0x79 0x12 0x7a 0x96 0x9b 0x40 0x9f 0xe6 0x59 0xae 0x0b 0x3a 0x5a 0x76 0x6d 0x6e 0xe5 0x7a 0xe5 0x19 0xe8 0x90 0x16 'L" Q y z  @  Y  :Zvmn z     '

// ================================================
// 0xe908: WORD 'DISP-SETUP' codep=0x4a4f parp=0xe917
// ================================================
// entry
// 0xe917: db 0x05 0x00 0x48 0x3a 0x01 0x00 0x2d 0xe8 0x02 0x00 0x81 0xe8 0x03 0x00 0xee 0xe8 0x04 0x00 0x4b 0xe8 0x05 0x00 0x9d 0xe8 '  H:  -           K     '

// ================================================
// 0xe92f: WORD 'UNK_0xe931' codep=0x1d29 parp=0xe931
// ================================================
// 0xe931: db 0x00 0x00 '  '

// ================================================
// 0xe933: WORD 'UNK_0xe935' codep=0x224c parp=0xe935
// ================================================

void UNK_0xe935() // UNK_0xe935
{
  Push(0x03e8);
  MS(); // MS
  Push(0x629f); // pointer to (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push(0x60da); // pointer to SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  Push(0xe931); // pointer to UNK_0xe931
  OFF(); // OFF
  Push(0); // 0
  Push(cc__i_ANSYS); // 'ANSYS
  MODULE(); // MODULE
}


// ================================================
// 0xe94f: WORD 'UNK_0xe951' codep=0x224c parp=0xe951
// ================================================

void UNK_0xe951() // UNK_0xe951
{
  Push(0x000a);
  Push(0x5863); // pointer to YBLT
  Push(Read16(Pop())); // @
  Push(0x000b);
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe963: WORD 'DO-FLARE' codep=0x224c parp=0xe970
// ================================================
// entry

void DO_dash_FLARE() // DO-FLARE
{
  _gt_DISPLAY(); // >DISPLAY
  BEEPOFF(); // BEEPOFF
  Push(0x0032);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x000c);
  Push(0x000f);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Pop()<<4); // 16*
  Push(Pop() + Pop()); // +
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  i++;
  } while(i<imax); // (LOOP) 0xffea

  DARK(); // DARK
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x000a);
  Push(0x00c7);
  POS_dot_(); // POS.
  Push(0x629f); // pointer to (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xe951(); // UNK_0xe951
  PRINT("STAR IN SYSTEM ", 15); // (.")
  Push(0x63fc); // IFIELD(INST-X)
  _2_at_(); // 2@
  Push(cc__star_MAPSCALE); // *MAPSCALE
  _slash_(); // /
  Push(0); // 0
  _dot_R(); // .R
  PRINT(", ", 2); // (.")
  Push(cc__star_MAPSCALE); // *MAPSCALE
  _slash_(); // /
  _dot_(); // .
  UNK_0xe951(); // UNK_0xe951
  PRINT("FLARED ON STARDATE", 18); // (.")
  UNK_0xe951(); // UNK_0xe951
  Push(0x5e74); // pointer to STARDATE
  Push(Read16(Pop())); // @
  PAD(); // PAD
  DATE_do__gt_ADR(); // DATE$>ADR
  PAD(); // PAD
  Push(0x000a);
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  UNK_0xe951(); // UNK_0xe951
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  PRINT("THE ISS ", 8); // (.")
  Push(0x6423); // IFIELD(%NAME)
  _do__dot_(); // $.
  UNK_0xe951(); // UNK_0xe951
  PRINT("AND CREW WERE INCINERATED.", 26); // (.")
  UNK_0xe951(); // UNK_0xe951
  UNK_0xe951(); // UNK_0xe951
  PRINT("GAME OVER", 9); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP

  label1:
  Exec(?TERMINAL); // call of word 0x25bc '(?TERMINAL)'
  if (Pop() == 0) goto label1;
  BYE(); // BYE
}


// ================================================
// 0xea4e: WORD 'UNK_0xea50' codep=0x224c parp=0xea50
// ================================================

void UNK_0xea50() // UNK_0xea50
{

  UNK_0x3f3b("...COMMENCING ");
  _dot_TTY(); // .TTY
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" TRAVEL", 7); // (.")
}


// ================================================
// 0xea71: WORD 'UNK_0xea73' codep=0x224c parp=0xea73
// ================================================

void UNK_0xea73() // UNK_0xea73
{

  UNK_0x3f3b("ORBIT");
}


// ================================================
// 0xea7d: WORD 'UNK_0xea7f' codep=0x224c parp=0xea7f
// ================================================

void UNK_0xea7f() // UNK_0xea7f
{

  UNK_0x3f3b("SYSTEM");
}


// ================================================
// 0xea8a: WORD 'UNK_0xea8c' codep=0x224c parp=0xea8c
// ================================================

void UNK_0xea8c() // UNK_0xea8c
{

  UNK_0x3f3b("STARPORT");
}


// ================================================
// 0xea99: WORD 'UNK_0xea9b' codep=0x224c parp=0xea9b
// ================================================

void UNK_0xea9b() // UNK_0xea9b
{

  UNK_0x3f3b("ENCOUNTER");
}


// ================================================
// 0xeaa9: WORD 'UNK_0xeaab' codep=0x224c parp=0xeaab
// ================================================

void UNK_0xeaab() // UNK_0xeaab
{

  UNK_0x3f3b("STANDING BY TO ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xeac1: WORD 'UNK_0xeac3' codep=0x224c parp=0xeac3
// ================================================

void UNK_0xeac3() // UNK_0xeac3
{
  UNK_0xeaab(); // UNK_0xeaab
  PRINT("DOCK WITH ", 10); // (.")
  UNK_0xea8c(); // UNK_0xea8c
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xead8: WORD 'UNK_0xeada' codep=0x224c parp=0xeada
// ================================================

void UNK_0xeada() // UNK_0xeada
{
  UNK_0xeaab(); // UNK_0xeaab
  UNK_0xea73(); // UNK_0xea73
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x6126); // pointer to ENC-TIME
  D_ex_(); // D!

  UNK_0x3f3b("PRESS SPACEBAR TO ORBIT");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xeb06: WORD 'UNK_0xeb08' codep=0x224c parp=0xeb08
// ================================================

void UNK_0xeb08() // UNK_0xeb08
{
  Push(0x62bf); // pointer to (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xe8b6(); // UNK_0xe8b6
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  UNK_0xeac3(); // UNK_0xeac3
  goto label2;

  label1:
  UNK_0xeada(); // UNK_0xeada

  label2:
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb24: WORD 'UNK_0xeb26' codep=0x224c parp=0xeb26
// ================================================

void UNK_0xeb26() // UNK_0xeb26
{
  PRINT(" COMPLETE", 9); // (.")
}


// ================================================
// 0xeb34: WORD 'UNK_0xeb36' codep=0x224c parp=0xeb36
// ================================================

void UNK_0xeb36() // UNK_0xeb36
{

  UNK_0x3f3b("...");
  _dot_TTY(); // .TTY
  UNK_0xea73(); // UNK_0xea73
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" ESTABLISHED", 12); // (.")
  Push(0x58db); // pointer to ?FUEL-DIE
  OFF(); // OFF
}


// ================================================
// 0xeb57: WORD 'UNK_0xeb59' codep=0x224c parp=0xeb59
// ================================================

void UNK_0xeb59() // UNK_0xeb59
{

  UNK_0x3f3b("...");
  _dot_TTY(); // .TTY
  UNK_0xea7f(); // UNK_0xea7f
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" ENTRY", 6); // (.")
  UNK_0xeb26(); // UNK_0xeb26
  UNK_0xe935(); // UNK_0xe935
}


// ================================================
// 0xeb74: WORD 'UNK_0xeb76' codep=0x224c parp=0xeb76
// ================================================

void UNK_0xeb76() // UNK_0xeb76
{

  UNK_0x3f3b("...DOCKING");
  _dot_TTY(); // .TTY
  UNK_0xeb26(); // UNK_0xeb26
  Push(cc__i_OVBACK); // 'OVBACK
  MODULE(); // MODULE
}


// ================================================
// 0xeb8d: WORD 'UNK_0xeb8f' codep=0x224c parp=0xeb8f
// ================================================

void UNK_0xeb8f() // UNK_0xeb8f
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x03e8); Push(0x0000);
  D_plus_(); // D+
  Push(0x6172); // pointer to KEYTIME
  D_ex_(); // D!
}


// ================================================
// 0xeba1: WORD 'NF-M' codep=0x4a4f parp=0xebaa
// ================================================
// 0xebaa: db 0x05 0x00 0x48 0x3a 0x01 0x00 0x08 0xeb 0x02 0x00 0x59 0xeb 0x04 0x00 0x8f 0xeb 0x05 0x00 0x76 0xeb 0x06 0x00 0x36 0xeb '  H:      Y       v   6 '

// ================================================
// 0xebc2: WORD 'NF-MESS' codep=0x224c parp=0xebce
// ================================================
// entry

void NF_dash_MESS() // NF-MESS
{
  UNK_0xe566(); // UNK_0xe566
  Pop();
  switch(Pop()) // NF-M
  {
  case 1:
    UNK_0xeb08(); // UNK_0xeb08
    break;
  case 2:
    UNK_0xeb59(); // UNK_0xeb59
    break;
  case 4:
    UNK_0xeb8f(); // UNK_0xeb8f
    break;
  case 5:
    UNK_0xeb76(); // UNK_0xeb76
    break;
  case 6:
    UNK_0xeb36(); // UNK_0xeb36
    break;
  default:
    NOP(); // NOP
    break;

  }
}


// ================================================
// 0xebd4: WORD 'UNK_0xebd6' codep=0x224c parp=0xebd6
// ================================================

void UNK_0xebd6() // UNK_0xebd6
{

  UNK_0x3f3b("COMPUTING SUB-");
  _dot_TTY(); // .TTY
  UNK_0xea73(); // UNK_0xea73
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("AL TRAJECTORY...", 16); // (.")
}


// ================================================
// 0xec02: WORD 'UNK_0xec04' codep=0x224c parp=0xec04
// ================================================

void UNK_0xec04() // UNK_0xec04
{

  UNK_0x3f3b("INITIATING ");
  _dot_TTY(); // .TTY
  UNK_0xea73(); // UNK_0xea73
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("AL MANEUVER...", 14); // (.")
}


// ================================================
// 0xec2b: WORD 'UNK_0xec2d' codep=0x224c parp=0xec2d
// ================================================

void UNK_0xec2d() // UNK_0xec2d
{

  UNK_0x3f3b("COMMENCING ");
  _dot_TTY(); // .TTY
  UNK_0xea7f(); // UNK_0xea7f
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" PENETRATION...", 15); // (.")
}


// ================================================
// 0xec55: WORD 'UNK_0xec57' codep=0x224c parp=0xec57
// ================================================

void UNK_0xec57() // UNK_0xec57
{

  UNK_0x3f3b("INITIATING DOCKING PROCEDURE...");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xec7d: WORD 'UNK_0xec7f' codep=0x224c parp=0xec7f
// ================================================

void UNK_0xec7f() // UNK_0xec7f
{

  UNK_0x3f3b("SCANNERS INDICATE UNIDENTIFIED OBJECT!");
  _dot_TTY(); // .TTY
  Push(0x02bc);
  Push(0x1e78);
  Push(0x007d);
  Push(cc__3); // 3
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(cc__5); // 5
  _gt_SND(); // >SND
}


// ================================================
// 0xecc4: WORD 'NS-M' codep=0x4a4f parp=0xeccd
// ================================================
// 0xeccd: db 0x05 0x00 0x48 0x3a 0x00 0x00 0xd6 0xeb 0x02 0x00 0x2d 0xec 0x04 0x00 0x7f 0xec 0x05 0x00 0x57 0xec 0x06 0x00 0x04 0xec '  H:      -      W     '

// ================================================
// 0xece5: WORD 'NS-MESS' codep=0x224c parp=0xecf1
// ================================================
// entry

void NS_dash_MESS() // NS-MESS
{
  UNK_0xe566(); // UNK_0xe566
  Pop();
  switch(Pop()) // NS-M
  {
  case 0:
    UNK_0xebd6(); // UNK_0xebd6
    break;
  case 2:
    UNK_0xec2d(); // UNK_0xec2d
    break;
  case 4:
    UNK_0xec7f(); // UNK_0xec7f
    break;
  case 5:
    UNK_0xec57(); // UNK_0xec57
    break;
  case 6:
    UNK_0xec04(); // UNK_0xec04
    break;
  default:
    NOP(); // NOP
    break;

  }
}


// ================================================
// 0xecf7: WORD 'UNK_0xecf9' codep=0x744d parp=0xecf9
// ================================================
// 0xecf9: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xecfc: WORD 'UNK_0xecfe' codep=0x744d parp=0xecfe
// ================================================
// 0xecfe: db 0x14 0x11 0x02 0x29 0x1d 0x46 0x00 '   ) F '

// ================================================
// 0xed05: WORD 'UNK_0xed07' codep=0x1d29 parp=0xed07
// ================================================
// 0xed07: db 0x3a 0x20 ': '

// ================================================
// 0xed09: WORD 'UNK_0xed0b' codep=0x224c parp=0xed0b
// ================================================

void UNK_0xed0b() // UNK_0xed0b
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6400); // IFIELD(UNK_0xecfe)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(Pop()>>1); // 2/
  Push(Pop() | Pop()); // OR
  Push(0x6400); // IFIELD(UNK_0xecfe)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(0x5d81); // pointer to #AUX
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0xbe4b);
  goto label2;

  label1:
  Push(0xbe2b);

  label2:
  MODULE(); // MODULE
}


// ================================================
// 0xed49: WORD 'UNK_0xed4b' codep=0x224c parp=0xed4b
// ================================================

void UNK_0xed4b() // UNK_0xed4b
{
  CTINIT(); // CTINIT

  UNK_0x3f3b("CAPTAIN,");
  _dot_TTY(); // .TTY

  UNK_0x3f3b("THE SHIP IS BEGINNING TO VIBRATE!");
  _dot_TTY(); // .TTY
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6421); // IFIELD(UNK_0xecf9)
  OFF(); // OFF
  ICLOSE(); // ICLOSE
  Push(0xed07); // pointer to UNK_0xed07
  OFF(); // OFF
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xed92: WORD 'UNK_0xed94' codep=0x224c parp=0xed94
// ================================================

void UNK_0xed94() // UNK_0xed94
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(1); // 1
  Push(cc__7); // 7
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(0x6400); // IFIELD(UNK_0xecfe)
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(cc__3); // 3
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(0xbe2b);
  MODULE(); // MODULE
}


// ================================================
// 0xedd0: WORD 'UNK_0xedd2' codep=0x224c parp=0xedd2
// ================================================

void UNK_0xedd2() // UNK_0xedd2
{
  CTINIT(); // CTINIT

  UNK_0x3f3b("THE HULL ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xede4: WORD 'UNK_0xede6' codep=0x224c parp=0xede6
// ================================================

void UNK_0xede6() // UNK_0xede6
{
  UNK_0xedd2(); // UNK_0xedd2
  PRINT("TEMPERATURE IS INCREASING!", 26); // (.")
  UNK_0xed0b(); // UNK_0xed0b
}


// ================================================
// 0xee09: WORD 'UNK_0xee0b' codep=0x224c parp=0xee0b
// ================================================

void UNK_0xee0b() // UNK_0xee0b
{
  UNK_0xedd2(); // UNK_0xedd2
  PRINT("IS GLOWING RED!", 15); // (.")
  UNK_0xed0b(); // UNK_0xed0b
}


// ================================================
// 0xee23: WORD 'UNK_0xee25' codep=0x224c parp=0xee25
// ================================================

void UNK_0xee25() // UNK_0xee25
{
  UNK_0xedd2(); // UNK_0xedd2
  PRINT("IS MELTING!", 11); // (.")
  UNK_0xed0b(); // UNK_0xed0b
}


// ================================================
// 0xee39: WORD 'UNK_0xee3b' codep=0x224c parp=0xee3b
// ================================================

void UNK_0xee3b() // UNK_0xee3b
{
  UNK_0xedd2(); // UNK_0xedd2
  PRINT("IS ... AHHHHHH!", 15); // (.")
  BEEPON(); // BEEPON
  Push(0x9c40);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__dash_1); // -1
  Push(0x2710);
  RRND(); // RRND
  TONE(); // TONE
  Push(1); // 1
  i += Pop();
  } while(i<imax); // (/LOOP) 0xfff2

  BEEPOFF(); // BEEPOFF
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  SetColor("YELLOW");
  Push(0x4f0c);
  _ex__3(); // !_3
  CTERASE(); // CTERASE

  UNK_0x3f3b("**SHIP MELTED**");
  _dot_TTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE(); // BYE
}


// ================================================
// 0xee99: WORD 'HCASE' codep=0x4a4f parp=0xeea3
// ================================================
// 0xeea3: db 0x04 0x00 0x94 0xed 0x46 0x00 0xe6 0xed 0x8c 0x00 0x0b 0xee 0xd2 0x00 0x25 0xee 0x18 0x01 0x3b 0xee '    F         %   ; '

// ================================================
// 0xeeb7: WORD 'HEAT' codep=0x224c parp=0xeec0
// ================================================
// entry

void HEAT() // HEAT
{
  Push(1); // 1
  Push(0xed07); // pointer to UNK_0xed07
  _plus__ex_(); // +!
  Push(0xed07); // pointer to UNK_0xed07
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // HCASE
  {
  case 70:
    UNK_0xede6(); // UNK_0xede6
    break;
  case 140:
    UNK_0xee0b(); // UNK_0xee0b
    break;
  case 210:
    UNK_0xee25(); // UNK_0xee25
    break;
  case 280:
    UNK_0xee3b(); // UNK_0xee3b
    break;
  default:
    UNK_0xed94(); // UNK_0xed94
    break;

  }
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xeed0: WORD 'UNK_0xeed2' codep=0x73ea parp=0xeed2
// ================================================
// 0xeed2: db 0x20 0x07 0x02 0x16 0x8f 0x65 '     e'

// ================================================
// 0xeed8: WORD 'P-LSEED' codep=0x73ea parp=0xeee4
// ================================================
// 0xeee4: db 0x20 0x04 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xeeea: WORD 'UNK_0xeeec' codep=0x73ea parp=0xeeec
// ================================================
// 0xeeec: db 0x20 0x01 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xeef2: WORD 'UNK_0xeef4' codep=0x744d parp=0xeef4
// ================================================
// 0xeef4: db 0x10 0x1a 0x01 '   '

// ================================================
// 0xeef7: WORD 'UNK_0xeef9' codep=0x744d parp=0xeef9
// ================================================
// 0xeef9: db 0x11 0x14 0x03 '   '

// ================================================
// 0xeefc: WORD 'UNK_0xeefe' codep=0x224c parp=0xeefe
// ================================================

void UNK_0xeefe() // UNK_0xeefe
{
  LoadData("P-LSEED"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(1); // 1
  return;

  label1:
  Push(2); // 2
}


// ================================================
// 0xef10: WORD 'S>CM' codep=0x4a4f parp=0xef19
// ================================================
// 0xef19: db 0x03 0x00 0xfe 0xee 0x04 0x00 0x7d 0x3b 0x01 0x00 0x85 0x3b 0x03 0x00 0x75 0x3b '      };   ;  u;'

// ================================================
// 0xef29: WORD 'UNK_0xef2b' codep=0x224c parp=0xef2b
// ================================================

void UNK_0xef2b() // UNK_0xef2b
{
  LoadData("UNK_0xeeec"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Pop();
  switch(Pop()) // S>CM
  {
  case 4:
    _4(); // 4
    break;
  case 1:
    _5(); // 5
    break;
  case 3:
    _3(); // 3
    break;
  default:
    UNK_0xeefe(); // UNK_0xeefe
    break;

  }
}


// ================================================
// 0xef33: WORD 'OSET' codep=0x224c parp=0xef3c
// ================================================
// entry

void OSET() // OSET
{
  Push(cc__6); // 6
  NS_dash_MESS(); // NS-MESS
  Push(0x62bf); // pointer to (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xe8b6(); // UNK_0xe8b6
  if (Pop() == 0) goto label1;
  Push(0xe931); // pointer to UNK_0xe931
  ON_3(); // ON_3
  UNK_0xef2b(); // UNK_0xef2b
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0); // 0
  Push(0x0012);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  CI(); // CI
  Pop(); // DROP
  goto label3;

  label2:
  LoadData("UNK_0xeed2"); // from 'PLANET      '
  Push(Read16(Pop())); // @

  label3:
  Push(Read16(regsp)); // DUP
  Push(0x5979); // pointer to GLOBALSEED
  _ex__3(); // !_3
  Push(0xc834);
  MODULE(); // MODULE
  Push(0xc380);
  MODULE(); // MODULE
  MROTATE(); // MROTATE
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0017);
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Push(1); // 1
  Push(0xbdd8);
  MODULE(); // MODULE
  if (Pop() == 0) goto label5;

  UNK_0x3f3b("THE CRYSTAL ORB IS GLOWING");
  _dot_TTY(); // .TTY
  Push(0x3a48);
  goto label6;

  label5:
  UNK_0xed4b(); // UNK_0xed4b
  Push(0x5329); // pointer to 'HEAT
  Push(Read16(Pop())); // @
  Push(0x5ae7); // pointer to FORCEPTASK
  ON_3(); // ON_3

  label6:
  goto label7;

  label4:
  Push(0xc3f3);

  label7:
  Push(0x5f5c); // pointer to 'EXTERNAL-EVENTS
  _ex__3(); // !_3
  Push(cc__dash_1); // -1
  Push(0x5e9b); // pointer to PLHI
  _ex__3(); // !_3

  label1:
  ICLOSE(); // ICLOSE
  Push(cc__6); // 6
  NF_dash_MESS(); // NF-MESS
}


// ================================================
// 0xefe1: WORD 'UNK_0xefe3' codep=0x224c parp=0xefe3
// ================================================

void UNK_0xefe3() // UNK_0xefe3
{
  UNK_0xea7f(); // UNK_0xea7f
  UNK_0xea50(); // UNK_0xea50
}


// ================================================
// 0xefe9: WORD 'UNK_0xefeb' codep=0x224c parp=0xefeb
// ================================================

void UNK_0xefeb() // UNK_0xefeb
{

  UNK_0x3f3b("INTER-STELLAR");
  UNK_0xea50(); // UNK_0xea50
}


// ================================================
// 0xefff: WORD 'UNK_0xf001' codep=0x224c parp=0xf001
// ================================================

void UNK_0xf001() // UNK_0xf001
{
  Push(0xc4e5);
  MODULE(); // MODULE
  CTINIT(); // CTINIT

  UNK_0x3f3b("...");
  _dot_TTY(); // .TTY
  UNK_0xea8c(); // UNK_0xea8c
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" CLEAR", 6); // (.")
}


// ================================================
// 0xf020: WORD 'UNK_0xf022' codep=0x224c parp=0xf022
// ================================================

void UNK_0xf022() // UNK_0xf022
{

  UNK_0x3f3b("...");
  _dot_TTY(); // .TTY
  UNK_0xea9b(); // UNK_0xea9b
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(" TERMINATED", 11); // (.")
  Push(0xbef3);
  MODULE(); // MODULE
  Push(0x5c13); // pointer to SKIP2NEST
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  OSET(); // OSET
  Push(0x5ae7); // pointer to FORCEPTASK
  OFF(); // OFF

  label1:
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(0xea60); Push(0x0000);
  goto label3;

  label2:
  Push2Words("NULL");

  label3:
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(0x6126); // pointer to ENC-TIME
  D_ex_(); // D!
}


// ================================================
// 0xf076: WORD 'UNK_0xf078' codep=0x224c parp=0xf078
// ================================================

void UNK_0xf078() // UNK_0xf078
{

  UNK_0x3f3b("OUTSIDE ");
  _dot_TTY(); // .TTY
  UNK_0xea73(); // UNK_0xea73
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("AL RANGE", 8); // (.")
  Push(0xe931); // pointer to UNK_0xe931
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xe935(); // UNK_0xe935
}


// ================================================
// 0xf0a0: WORD 'UF-M' codep=0x4a4f parp=0xf0a9
// ================================================
// 0xf0a9: db 0x05 0x00 0x48 0x3a 0x06 0x00 0xe3 0xef 0x02 0x00 0xeb 0xef 0x04 0x00 0x22 0xf0 0x05 0x00 0x01 0xf0 0x01 0x00 0x78 0xf0 '  H:          "       x '

// ================================================
// 0xf0c1: WORD 'UF-MESS' codep=0x224c parp=0xf0cd
// ================================================
// entry

void UF_dash_MESS() // UF-MESS
{
  UNK_0xe566(); // UNK_0xe566
  Pop();
  switch(Pop()) // UF-M
  {
  case 6:
    UNK_0xefe3(); // UNK_0xefe3
    break;
  case 2:
    UNK_0xefeb(); // UNK_0xefeb
    break;
  case 4:
    UNK_0xf022(); // UNK_0xf022
    break;
  case 5:
    UNK_0xf001(); // UNK_0xf001
    break;
  case 1:
    UNK_0xf078(); // UNK_0xf078
    break;
  default:
    NOP(); // NOP
    break;

  }
}


// ================================================
// 0xf0d3: WORD 'UNK_0xf0d5' codep=0x224c parp=0xf0d5
// ================================================

void UNK_0xf0d5() // UNK_0xf0d5
{

  UNK_0x3f3b("LEAVING ");
  _dot_TTY(); // .TTY
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("...", 3); // (.")
}


// ================================================
// 0xf0ec: WORD 'UNK_0xf0ee' codep=0x224c parp=0xf0ee
// ================================================

void UNK_0xf0ee() // UNK_0xf0ee
{
  UNK_0xea7f(); // UNK_0xea7f
  UNK_0xf0d5(); // UNK_0xf0d5
}


// ================================================
// 0xf0f4: WORD 'UNK_0xf0f6' codep=0x224c parp=0xf0f6
// ================================================

void UNK_0xf0f6() // UNK_0xf0f6
{
  UNK_0xea8c(); // UNK_0xea8c
  UNK_0xf0d5(); // UNK_0xf0d5
}


// ================================================
// 0xf0fc: WORD 'UNK_0xf0fe' codep=0x224c parp=0xf0fe
// ================================================

void UNK_0xf0fe() // UNK_0xf0fe
{
  UNK_0xea9b(); // UNK_0xea9b
  UNK_0xf0d5(); // UNK_0xf0d5
}


// ================================================
// 0xf104: WORD 'UNK_0xf106' codep=0x224c parp=0xf106
// ================================================

void UNK_0xf106() // UNK_0xf106
{
  UNK_0xea73(); // UNK_0xea73
  UNK_0xf0d5(); // UNK_0xf0d5
}


// ================================================
// 0xf10c: WORD 'US-M' codep=0x4a4f parp=0xf115
// ================================================
// 0xf115: db 0x04 0x00 0x48 0x3a 0x06 0x00 0x06 0xf1 0x02 0x00 0xee 0xf0 0x04 0x00 0xfe 0xf0 0x05 0x00 0xf6 0xf0 '  H:                '

// ================================================
// 0xf129: WORD 'US-MESS' codep=0x224c parp=0xf135
// ================================================
// entry

void US_dash_MESS() // US-MESS
{
  UNK_0xe566(); // UNK_0xe566
  Pop();
  switch(Pop()) // US-M
  {
  case 6:
    UNK_0xf106(); // UNK_0xf106
    break;
  case 2:
    UNK_0xf0ee(); // UNK_0xf0ee
    break;
  case 4:
    UNK_0xf0fe(); // UNK_0xf0fe
    break;
  case 5:
    UNK_0xf0f6(); // UNK_0xf0f6
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// 0xf13b: db 0x4c 0x22 0x17 0x85 0x47 0xa5 0x69 0x26 0x66 0xbf 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0f 0x46 0x55 0x45 0x4c 0x20 0x53 0x55 0x50 0x50 0x4c 0x59 0x20 0x4c 0x4f 0x57 0xab 0x4f 0x3b 0xf1 0x90 0x16 0x4c 0x22 0x39 0x3f 0x14 0x46 0x55 0x45 0x4c 0x20 0x53 0x55 0x50 0x50 0x4c 0x59 0x20 0x43 0x52 0x49 0x54 0x49 0x43 0x41 0x4c 0x9f 0x4f 0x3b 0xf1 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0b 0x4f 0x55 0x54 0x20 0x4f 0x46 0x20 0x46 0x55 0x45 0x4c 0x93 0x4f 0x3b 0xf1 0x90 0x16 'L"  G i&f   L"9? FUEL SUPPLY LOW O;   L"9? FUEL SUPPLY CRITICAL O;   L"9? OUT OF FUEL O;   '

// ================================================
// 0xf196: WORD '.EX' codep=0x4a4f parp=0xf19e
// ================================================
// entry
// 0xf19e: db 0x02 0x00 0x82 0xf1 0x02 0x00 0x63 0xf1 0x03 0x00 0x49 0xf1 '      c   I '

// ================================================
// 0xf1aa: WORD 'UNK_0xf1ac' codep=0x744d parp=0xf1ac
// ================================================
// 0xf1ac: db 0x19 0x15 0x04 '   '

// ================================================
// 0xf1af: WORD 'UNK_0xf1b1' codep=0x1d29 parp=0xf1b1
// ================================================
// 0xf1b1: db 0x3a 0x20 ': '

// ================================================
// 0xf1b3: WORD 'DMSG' codep=0x224c parp=0xf1bc
// ================================================
// entry

void DMSG() // DMSG
{
  Push(0xf1b1); // pointer to UNK_0xf1b1
  OFF(); // OFF
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  Push(0x59f5); // pointer to ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_AT(); // ?ICONS-AT
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
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  Push(0x6404); // IFIELD(UNK_0xf1ac)
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label1;
  Push(0xf1b1); // pointer to UNK_0xf1b1
  ON_3(); // ON_3

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffda

  Push(0xf1b1); // pointer to UNK_0xf1b1
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  CTINIT(); // CTINIT

  UNK_0x3f3b("READY TO PICK UP DEBRIS");
  _dot_TTY(); // .TTY
}

// 0xf222: db 0x4c 0x22 0x32 0x0e 0x20 0x0f 0x90 0x16 0x4c 0x22 0x7b 0x3b 0x5f 0x12 0xfa 0x15 0x08 0x00 0x2e 0x0f 0x60 0x16 0x04 0x00 0x73 0x3b 0x90 0x16 0x4c 0x22 0x32 0x0e 0x3d 0x0f 0x90 0x16 0x4c 0x22 0x32 0x0e 0x7b 0x3b 0x90 0x16 0x4c 0x22 0x32 0x0e 0x83 0x3b 0x90 0x16 'L"2     L"{;_     . `   s;  L"2 =   L"2 {;  L"2  ;  '

// ================================================
// 0xf256: WORD '(CTXT)' codep=0x4a4f parp=0xf261
// ================================================
// entry
// 0xf261: db 0x05 0x00 0x6e 0x3a 0x20 0x00 0x24 0xf2 0x0b 0x00 0x2c 0xf2 0x17 0x00 0x40 0xf2 0x3d 0x00 0x48 0xf2 0x12 0x00 0x50 0xf2 '  n:  $   ,   @ = H   P '

// ================================================
// 0xf279: WORD 'UNK_0xf27b' codep=0x1d29 parp=0xf27b
// ================================================
// 0xf27b: db 0x3a 0x20 ': '

// ================================================
// 0xf27d: WORD 'UNK_0xf27f' codep=0x1d29 parp=0xf27f
// ================================================
// 0xf27f: db 0x3a 0x20 ': '

// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x1d29 parp=0xf283
// ================================================
// 0xf283: db 0x3a 0x20 ': '

// ================================================
// 0xf285: WORD 'UNK_0xf287' codep=0x1d29 parp=0xf287
// ================================================
// 0xf287: db 0x3a 0x20 ': '

// ================================================
// 0xf289: WORD 'UNK_0xf28b' codep=0x224c parp=0xf28b
// ================================================

void UNK_0xf28b() // UNK_0xf28b
{
  Push(0xf27b); // pointer to UNK_0xf27b
  Push(Read16(Pop())); // @
  Push(0x0096);
  _gt_(); // >
  Push(0xf283); // pointer to UNK_0xf283
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _slash_(); // /
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(0xf287); // pointer to UNK_0xf287
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  _slash_(); // /
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0xf27f); // pointer to UNK_0xf27f
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT

  UNK_0x3f3b("MOTION DETECTED AT");
  _dot_TTY(); // .TTY
  Push(0xf27f); // pointer to UNK_0xf27f
  OFF(); // OFF

  label1:

  UNK_0x3f3b(" X:");
  _dot_TTY(); // .TTY
  Push(0xf283); // pointer to UNK_0xf283
  Push(Read16(Pop())); // @
  Push(0xfff8);
  _slash_(); // /
  _dot_(); // .
  Push(cc__7); // 7
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  PRINT(" Y:", 3); // (.")
  Push(0xf287); // pointer to UNK_0xf287
  Push(Read16(Pop())); // @
  Push(0xfff8);
  _slash_(); // /
  _dot_(); // .
}


// ================================================
// 0xf30a: WORD 'UNK_0xf30c' codep=0x744d parp=0xf30c
// ================================================
// 0xf30c: db 0x3d 0x11 0x01 '=  '

// ================================================
// 0xf30f: WORD 'UNK_0xf311' codep=0x744d parp=0xf311
// ================================================
// 0xf311: db 0x3d 0x12 0x01 '=  '

// ================================================
// 0xf314: WORD 'UNK_0xf316' codep=0x744d parp=0xf316
// ================================================
// 0xf316: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xf319: WORD 'UNK_0xf31b' codep=0x224c parp=0xf31b
// ================================================

void UNK_0xf31b() // UNK_0xf31b
{
  _star__slash_(); // */
  Push(cc__star_MAPSCALE); // *MAPSCALE
  _slash_(); // /
  Push(cc__star_MAPSCALE); // *MAPSCALE
  Push(Pop() * Pop()); // *
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf331: WORD 'UNK_0xf333' codep=0x224c parp=0xf333
// ================================================

void UNK_0xf333() // UNK_0xf333
{
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  Push(cc__4); // 4
  goto label2;

  label1:
  Push(1); // 1
  Push(2); // 2

  label2:
  Push(0x5ce4); // pointer to ?12
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(0x63fc); // IFIELD(INST-X)
  _2_at_(); // 2@
  SWAP(); // SWAP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label3;
  Push(Read16(regsp)); // DUP
  Push(h); // I
  Push(h); // I'
  UNK_0xf31b(); // UNK_0xf31b

  label3:
  Push(0xf287); // pointer to UNK_0xf287
  _ex__3(); // !_3
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label4;
  Push(Read16(regsp)); // DUP
  Push(h); // I
  Push(h); // I'
  UNK_0xf31b(); // UNK_0xf31b

  label4:
  Push(0xf283); // pointer to UNK_0xf283
  _ex__3(); // !_3
  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  R_gt_(); // R>
  Pop(); Pop();// 2DROP
  UNK_0xf28b(); // UNK_0xf28b
}


// ================================================
// 0xf3a9: WORD 'UNK_0xf3ab' codep=0x224c parp=0xf3ab
// ================================================

void UNK_0xf3ab() // UNK_0xf3ab
{
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x003d);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x6400); // IFIELD(UNK_0xf30c)
  _plus__dash__at_(); // +-@
  Push(0xffc1);
  Push(0x0040);
  WITHIN(); // WITHIN
  Push(0x6401); // IFIELD(UNK_0xf311)
  _plus__dash__at_(); // +-@
  Push(0xffc0);
  Push(0x0040);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(0x5ce4); // pointer to ?12
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  Push(0x640a); // IFIELD(UNK_0xf316)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() & Pop()); // AND
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xf3f3: WORD 'UNK_0xf3f5' codep=0x224c parp=0xf3f5
// ================================================

void UNK_0xf3f5() // UNK_0xf3f5
{
  Push(0x6400); // IFIELD(UNK_0xf30c)
  _plus__dash__at_(); // +-@
  Push(0xf283); // pointer to UNK_0xf283
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x6400); // IFIELD(UNK_0xf30c)
  C_ex_(); // C!
  Push(0x6401); // IFIELD(UNK_0xf311)
  _plus__dash__at_(); // +-@
  Push(0xf287); // pointer to UNK_0xf287
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x6401); // IFIELD(UNK_0xf311)
  C_ex_(); // C!
  Push(0xf283); // pointer to UNK_0xf283
  Push(Read16(Pop())); // @
  Push(0x63fc); // IFIELD(INST-X)
  _plus__ex_(); // +!
  Push(0xf287); // pointer to UNK_0xf287
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  _plus__ex_(); // +!
}


// ================================================
// 0xf423: WORD 'UNK_0xf425' codep=0x224c parp=0xf425
// ================================================

void UNK_0xf425() // UNK_0xf425
{
  _at_IX(); // @IX
  Push(0xf283); // pointer to UNK_0xf283
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  _ex_IX(); // !IX
  _at_IY(); // @IY
  Push(0xf287); // pointer to UNK_0xf287
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  _ex_IY(); // !IY
}


// ================================================
// 0xf43b: WORD 'UNK_0xf43d' codep=0x1d29 parp=0xf43d
// ================================================
// 0xf43d: db 0x3a 0x20 ': '

// ================================================
// 0xf43f: WORD 'TRAK-E' codep=0x224c parp=0xf44a
// ================================================
// entry

void TRAK_dash_E() // TRAK-E
{
  Push(0xf43d); // pointer to UNK_0xf43d
  OFF(); // OFF
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x6403); // IFIELD(UNK_0xeef9)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x6409); // IFIELD(UNK_0xeef4)
  Push(Read8(Pop())&0xFF); // C@
  Push(0xf27b); // pointer to UNK_0xf27b
  _ex__3(); // !_3
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0xf27f); // pointer to UNK_0xf27f
  ON_3(); // ON_3
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x59e8); // pointer to IGLOBAL
  goto label2;

  label1:
  Push(0x59f5); // pointer to ILOCAL

  label2:
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  POINT_gt_ICON(); // POINT>ICON
  _at_ID(); // @ID
  Push(0x00fe);
  _eq_(); // =
  if (Pop() == 0) goto label3;
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  UNK_0xf3ab(); // UNK_0xf3ab
  if (Pop() == 0) goto label4;
  UNK_0xf333(); // UNK_0xf333
  UNK_0xf425(); // UNK_0xf425
  UNK_0xf3f5(); // UNK_0xf3f5

  label4:
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(0x5dae); // pointer to XABS
  Push(Read16(Pop())); // @
  Push(0x5db9); // pointer to YABS
  Push(Read16(Pop())); // @
  D_eq_(); // D=
  if (Pop() == 0) goto label3;
  Push(0xf43d); // pointer to UNK_0xf43d
  ON_3(); // ON_3

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffc0

  Push(0x5e66); // pointer to STAR-HR
  Push(Read16(Pop())); // @
  Push(0x5343); // pointer to TRAK-HR
  _ex__3(); // !_3
  Push(0xf43d); // pointer to UNK_0xf43d
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0x576a); // pointer to 'FLY
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf4dc: WORD 'UNK_0xf4de' codep=0x224c parp=0xf4de
// ================================================

void UNK_0xf4de() // UNK_0xf4de
{
  Push(0x5335); // pointer to 'TRAK
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf4e4: WORD 'UNK_0xf4e6' codep=0x224c parp=0xf4e6
// ================================================

void UNK_0xf4e6() // UNK_0xf4e6
{
  Push(0xafa3);
}


// ================================================
// 0xf4ec: WORD 'UNK_0xf4ee' codep=0x2214 parp=0xf4ee
// ================================================
// 0xf4ee: db 0x48 0x3a 'H:'

// ================================================
// 0xf4f0: WORD '@'EXT' codep=0x4a4f parp=0xf4fa
// ================================================
// 0xf4fa: db 0x03 0x00 0xee 0xf4 0x02 0x00 0xde 0xf4 0x03 0x00 0xde 0xf4 0x04 0x00 0xe6 0xf4 '                '

// ================================================
// 0xf50a: WORD '(!'EXT)' codep=0x224c parp=0xf516
// ================================================
// entry

void _ro__ex__i_EXT_rc_() // (!'EXT)
{
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // @'EXT
  {
  case 2:
    UNK_0xf4de(); // UNK_0xf4de
    break;
  case 3:
    UNK_0xf4de(); // UNK_0xf4de
    break;
  case 4:
    UNK_0xf4e6(); // UNK_0xf4e6
    break;
  default:
    UNK_0xf4ee(); // UNK_0xf4ee
    break;

  }
  Push(0x5f5c); // pointer to 'EXTERNAL-EVENTS
  _ex__3(); // !_3
  Push(0x000d);
  Push(0xbdd8);
  MODULE(); // MODULE
  Push(0x5ce4); // pointer to ?12
  _ex__3(); // !_3
}

// 0xf530: db 0x48 0x4d 0x49 0x53 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x49 0x58 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'HMISC-VOC_______________________IX ------------- '
  