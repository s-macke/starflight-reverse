// ====== OVERLAY 'PERSONNEL-OV' ======
// store offset = 0xe500
// overlay size   = 0x1060

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xe516  codep:0x224c parp:0xe516 size:0x0026 C-string:'UNK_0xe516'
// 1704:      UNK_0xe53e  codep:0x224c parp:0xe53e size:0x0008 C-string:'UNK_0xe53e'
// 1705:      UNK_0xe548  codep:0x2214 parp:0xe548 size:0x0002 C-string:'UNK_0xe548'
// 1706:      UNK_0xe54c  codep:0x2214 parp:0xe54c size:0x0002 C-string:'UNK_0xe54c'
// 1707:      UNK_0xe550  codep:0x224c parp:0xe550 size:0x000a C-string:'UNK_0xe550'
// 1708:      UNK_0xe55c  codep:0x224c parp:0xe55c size:0x0008 C-string:'UNK_0xe55c'
// 1709:      UNK_0xe566  codep:0x224c parp:0xe566 size:0x0008 C-string:'UNK_0xe566'
// 1710:      UNK_0xe570  codep:0x224c parp:0xe570 size:0x0008 C-string:'UNK_0xe570'
// 1711:      UNK_0xe57a  codep:0x224c parp:0xe57a size:0x0014 C-string:'UNK_0xe57a'
// 1712:      UNK_0xe590  codep:0x224c parp:0xe590 size:0x001e C-string:'UNK_0xe590'
// 1713:      UNK_0xe5b0  codep:0x1d29 parp:0xe5b0 size:0x0004 C-string:'UNK_0xe5b0'
// 1714:      UNK_0xe5b6  codep:0x224c parp:0xe5b6 size:0x002a C-string:'UNK_0xe5b6'
// 1715:      UNK_0xe5e2  codep:0x224c parp:0xe5e2 size:0x0017 C-string:'UNK_0xe5e2'
// 1716:      UNK_0xe5fb  codep:0x224c parp:0xe5fb size:0x001a C-string:'UNK_0xe5fb'
// 1717:      UNK_0xe617  codep:0x224c parp:0xe617 size:0x0025 C-string:'UNK_0xe617'
// 1718:      UNK_0xe63e  codep:0x224c parp:0xe63e size:0x0018 C-string:'UNK_0xe63e'
// 1719:      UNK_0xe658  codep:0x73ea parp:0xe658 size:0x0006 C-string:'UNK_0xe658'
// 1720:      UNK_0xe660  codep:0x73ea parp:0xe660 size:0x0006 C-string:'UNK_0xe660'
// 1721:      UNK_0xe668  codep:0x73ea parp:0xe668 size:0x0006 C-string:'UNK_0xe668'
// 1722:      UNK_0xe670  codep:0x73ea parp:0xe670 size:0x0006 C-string:'UNK_0xe670'
// 1723:      UNK_0xe678  codep:0x73ea parp:0xe678 size:0x0006 C-string:'UNK_0xe678'
// 1724:      UNK_0xe680  codep:0x744d parp:0xe680 size:0x0003 C-string:'UNK_0xe680'
// 1725:      UNK_0xe685  codep:0x744d parp:0xe685 size:0x0003 C-string:'UNK_0xe685'
// 1726:      UNK_0xe68a  codep:0x744d parp:0xe68a size:0x0003 C-string:'UNK_0xe68a'
// 1727:      UNK_0xe68f  codep:0x744d parp:0xe68f size:0x0003 C-string:'UNK_0xe68f'
// 1728:      UNK_0xe694  codep:0x744d parp:0xe694 size:0x0003 C-string:'UNK_0xe694'
// 1729:      UNK_0xe699  codep:0x744d parp:0xe699 size:0x0003 C-string:'UNK_0xe699'
// 1730:      UNK_0xe69e  codep:0x744d parp:0xe69e size:0x0003 C-string:'UNK_0xe69e'
// 1731:      UNK_0xe6a3  codep:0x744d parp:0xe6a3 size:0x0003 C-string:'UNK_0xe6a3'
// 1732:      UNK_0xe6a8  codep:0x744d parp:0xe6a8 size:0x0003 C-string:'UNK_0xe6a8'
// 1733:      UNK_0xe6ad  codep:0x73ea parp:0xe6ad size:0x0006 C-string:'UNK_0xe6ad'
// 1734:      UNK_0xe6b5  codep:0x73ea parp:0xe6b5 size:0x0006 C-string:'UNK_0xe6b5'
// 1735:      UNK_0xe6bd  codep:0x73ea parp:0xe6bd size:0x0006 C-string:'UNK_0xe6bd'
// 1736:      UNK_0xe6c5  codep:0x224c parp:0xe6c5 size:0x013f C-string:'UNK_0xe6c5'
// 1737:      UNK_0xe806  codep:0x224c parp:0xe806 size:0x0022 C-string:'UNK_0xe806'
// 1738:      UNK_0xe82a  codep:0x224c parp:0xe82a size:0x0038 C-string:'UNK_0xe82a'
// 1739:      UNK_0xe864  codep:0x1d29 parp:0xe864 size:0x0011 C-string:'UNK_0xe864'
// 1740:      UNK_0xe877  codep:0x224c parp:0xe877 size:0x00a5 C-string:'UNK_0xe877'
// 1741:      UNK_0xe91e  codep:0x1d29 parp:0xe91e size:0x0002 C-string:'UNK_0xe91e'
// 1742:      UNK_0xe922  codep:0x224c parp:0xe922 size:0x0006 C-string:'UNK_0xe922'
// 1743:      UNK_0xe92a  codep:0x224c parp:0xe92a size:0x0118 C-string:'UNK_0xe92a'
// 1744:      UNK_0xea44  codep:0x224c parp:0xea44 size:0x0037 C-string:'UNK_0xea44'
// 1745:      UNK_0xea7d  codep:0x224c parp:0xea7d size:0x00c6 C-string:'UNK_0xea7d'
// 1746:      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x0086 C-string:'UNK_0xeb45'
// 1747:      UNK_0xebcd  codep:0x224c parp:0xebcd size:0x008e C-string:'UNK_0xebcd'
// 1748:      UNK_0xec5d  codep:0x224c parp:0xec5d size:0x00fa C-string:'UNK_0xec5d'
// 1749:      UNK_0xed59  codep:0x224c parp:0xed59 size:0x000c C-string:'UNK_0xed59'
// 1750:      UNK_0xed67  codep:0x224c parp:0xed67 size:0x0084 C-string:'UNK_0xed67'
// 1751:      UNK_0xeded  codep:0x224c parp:0xeded size:0x002e C-string:'UNK_0xeded'
// 1752:      UNK_0xee1d  codep:0x224c parp:0xee1d size:0x0020 C-string:'UNK_0xee1d'
// 1753:      UNK_0xee3f  codep:0x224c parp:0xee3f size:0x0020 C-string:'UNK_0xee3f'
// 1754:      UNK_0xee61  codep:0x1d29 parp:0xee61 size:0x0002 C-string:'UNK_0xee61'
// 1755:      UNK_0xee65  codep:0x224c parp:0xee65 size:0x00ec C-string:'UNK_0xee65'
// 1756:      UNK_0xef53  codep:0x224c parp:0xef53 size:0x00aa C-string:'UNK_0xef53'
// 1757:      UNK_0xefff  codep:0x224c parp:0xefff size:0x002c C-string:'UNK_0xefff'
// 1758:      UNK_0xf02d  codep:0x224c parp:0xf02d size:0x0024 C-string:'UNK_0xf02d'
// 1759:      UNK_0xf053  codep:0x224c parp:0xf053 size:0x0048 C-string:'UNK_0xf053'
// 1760:      UNK_0xf09d  codep:0x224c parp:0xf09d size:0x00c5 C-string:'UNK_0xf09d'
// 1761:      UNK_0xf164  codep:0x224c parp:0xf164 size:0x002c C-string:'UNK_0xf164'
// 1762:      UNK_0xf192  codep:0x224c parp:0xf192 size:0x0063 C-string:'UNK_0xf192'
// 1763:      UNK_0xf1f7  codep:0x224c parp:0xf1f7 size:0x0039 C-string:'UNK_0xf1f7'
// 1764:      UNK_0xf232  codep:0x224c parp:0xf232 size:0x0082 C-string:'UNK_0xf232'
// 1765:      UNK_0xf2b6  codep:0x1d29 parp:0xf2b6 size:0x0015 C-string:'UNK_0xf2b6'
// 1766:      UNK_0xf2cd  codep:0x224c parp:0xf2cd size:0x009c C-string:'UNK_0xf2cd'
// 1767:      UNK_0xf36b  codep:0x224c parp:0xf36b size:0x0036 C-string:'UNK_0xf36b'
// 1768:      UNK_0xf3a3  codep:0x224c parp:0xf3a3 size:0x0042 C-string:'UNK_0xf3a3'
// 1769:      UNK_0xf3e7  codep:0x224c parp:0xf3e7 size:0x0010 C-string:'UNK_0xf3e7'
// 1770:      UNK_0xf3f9  codep:0x224c parp:0xf3f9 size:0x009c C-string:'UNK_0xf3f9'
// 1771:      UNK_0xf497  codep:0x224c parp:0xf497 size:0x003e C-string:'UNK_0xf497'
// 1772:  PFILE-FUNCTION  codep:0x4a4f parp:0xf4e8 size:0x0014 C-string:'PFILE_dash_FUNCTION'
// 1773:       (U-PFILE)  codep:0x224c parp:0xf50a size:0x0000 C-string:'_ro_U_dash_PFILE_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe5b0[4] = {0xd5, 0x57, 0x00, 0xf5}; // UNK_0xe5b0
unsigned char UNK_0xe864[17] = {0x03, 0x0a, 0x02, 0x09, 0x29, 0x0a, 0x2c, 0x09, 0x25, 0x0a, 0x52, 0x09, 0x29, 0x0a, 0x7c, 0x09, 0x23}; // UNK_0xe864
unsigned char UNK_0xe91e[2] = {0x81, 0x00}; // UNK_0xe91e
unsigned char UNK_0xee61[2] = {0x3a, 0x20}; // UNK_0xee61
unsigned char UNK_0xf2b6[21] = {0x04, 0xa5, 0x0d, 0x09, 0x1f, 0x9e, 0x0d, 0x09, 0x2b, 0x97, 0x0d, 0x09, 0x2f, 0x90, 0x0d, 0x09, 0x3b, 0x89, 0x0d, 0x09, 0x23}; // UNK_0xf2b6

const unsigned short int cc_UNK_0xe548 = 0x0003; // UNK_0xe548
const unsigned short int cc_UNK_0xe54c = 0x0004; // UNK_0xe54c


// 0xe512: db 0x05 0x01 '  '

// ================================================
// 0xe514: WORD 'UNK_0xe516' codep=0x224c parp=0xe516
// ================================================

void UNK_0xe516() // UNK_0xe516
{
  Push(0xbd5b);
  MODULE(); // MODULE
}

// 0xe51e: db 0x4c 0x22 0x5d 0x17 0x70 0xbd 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x82 0xbd 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x97 0xbd 0xce 0x84 0x90 0x16 'L"] p     L"]       L"]       '

// ================================================
// 0xe53c: WORD 'UNK_0xe53e' codep=0x224c parp=0xe53e
// ================================================

void UNK_0xe53e() // UNK_0xe53e
{
  Push(0xbdba);
  MODULE(); // MODULE
}


// ================================================
// 0xe546: WORD 'UNK_0xe548' codep=0x2214 parp=0xe548
// ================================================
// 0xe548: db 0x03 0x00 '  '

// ================================================
// 0xe54a: WORD 'UNK_0xe54c' codep=0x2214 parp=0xe54c
// ================================================
// 0xe54c: db 0x04 0x00 '  '

// ================================================
// 0xe54e: WORD 'UNK_0xe550' codep=0x224c parp=0xe550
// ================================================

void UNK_0xe550() // UNK_0xe550
{
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS
}


// ================================================
// 0xe55a: WORD 'UNK_0xe55c' codep=0x224c parp=0xe55c
// ================================================

void UNK_0xe55c() // UNK_0xe55c
{
  Push(0xc52d);
  MODULE(); // MODULE
}


// ================================================
// 0xe564: WORD 'UNK_0xe566' codep=0x224c parp=0xe566
// ================================================

void UNK_0xe566() // UNK_0xe566
{
  Push(0xc542);
  MODULE(); // MODULE
}


// ================================================
// 0xe56e: WORD 'UNK_0xe570' codep=0x224c parp=0xe570
// ================================================

void UNK_0xe570() // UNK_0xe570
{
  Push(0xc558);
  MODULE(); // MODULE
}


// ================================================
// 0xe578: WORD 'UNK_0xe57a' codep=0x224c parp=0xe57a
// ================================================

void UNK_0xe57a() // UNK_0xe57a
{
  Push(0xc583);
  MODULE(); // MODULE
}

// 0xe582: db 0x4c 0x22 0xdb 0x23 0x5d 0x17 0x80 0x00 0x72 0x0f 0x90 0x16 'L" #]   r   '

// ================================================
// 0xe58e: WORD 'UNK_0xe590' codep=0x224c parp=0xe590
// ================================================

void UNK_0xe590() // UNK_0xe590
{
  PAD(); // PAD
  _do__ex_(); // $!
  PAD(); // PAD
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
  OVER(); // OVER
  Push(Pop()-1); // 1-
  C_ex_(); // C!
  Push(Pop()-1); // 1-
}

// 0xe5a4: db 0x4c 0x22 0x7b 0x3b 0x6c 0x58 0x83 0x6d 0x90 0x16 'L"{;lX m  '

// ================================================
// 0xe5ae: WORD 'UNK_0xe5b0' codep=0x1d29 parp=0xe5b0
// ================================================
// 0xe5b0: db 0xd5 0x57 0x00 0xf5 ' W  '

// ================================================
// 0xe5b4: WORD 'UNK_0xe5b6' codep=0x224c parp=0xe5b6
// ================================================

void UNK_0xe5b6() // UNK_0xe5b6
{
  _at_CRS(); // @CRS
  Push(cc__5); // 5
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(pp_UNK_0xe5b0); // UNK_0xe5b0
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
  Push(cc__6); // 6
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  _ex_CRS(); // !CRS
}

// 0xe5d0: db 0x4c 0x22 0xa9 0x48 0x5d 0x17 0x0d 0x00 0x5f 0x12 0xfa 0x15 0xf6 0xff 0x90 0x16 'L" H]   _       '

// ================================================
// 0xe5e0: WORD 'UNK_0xe5e2' codep=0x224c parp=0xe5e2
// ================================================

void UNK_0xe5e2() // UNK_0xe5e2
{
  PRINT("AND PRESS SPACEBAR", 18); // (.")
}


// ================================================
// 0xe5f9: WORD 'UNK_0xe5fb' codep=0x224c parp=0xe5fb
// ================================================

void UNK_0xe5fb() // UNK_0xe5fb
{
  PRINT("PAGE THROUGH FILES ^\", 21); // (.")
}


// ================================================
// 0xe615: WORD 'UNK_0xe617' codep=0x224c parp=0xe617
// ================================================

void UNK_0xe617() // UNK_0xe617
{
  Push(Read16(sp)); // DUP
  _0MESS(); // 0MESS
  Push(0x0025);
  CMESS(); // CMESS
  PRINT("SELECT OPTIONS [] ", 18); // (.")
  UNK_0xe5e2(); // UNK_0xe5e2
  _ex_CRS(); // !CRS
}


// ================================================
// 0xe63c: WORD 'UNK_0xe63e' codep=0x224c parp=0xe63e
// ================================================

void UNK_0xe63e() // UNK_0xe63e
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xe656: WORD 'UNK_0xe658' codep=0x73ea parp=0xe658
// ================================================
// 0xe658: db 0x10 0x00 0x08 0x14 0x89 0x64 '     d'

// ================================================
// 0xe65e: WORD 'UNK_0xe660' codep=0x73ea parp=0xe660
// ================================================
// 0xe660: db 0x10 0x08 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xe666: WORD 'UNK_0xe668' codep=0x73ea parp=0xe668
// ================================================
// 0xe668: db 0x10 0x0d 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xe66e: WORD 'UNK_0xe670' codep=0x73ea parp=0xe670
// ================================================
// 0xe670: db 0x10 0x12 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xe676: WORD 'UNK_0xe678' codep=0x73ea parp=0xe678
// ================================================
// 0xe678: db 0x10 0x13 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xe67e: WORD 'UNK_0xe680' codep=0x744d parp=0xe680
// ================================================
// 0xe680: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xe683: WORD 'UNK_0xe685' codep=0x744d parp=0xe685
// ================================================
// 0xe685: db 0x10 0x1a 0x01 '   '

// ================================================
// 0xe688: WORD 'UNK_0xe68a' codep=0x744d parp=0xe68a
// ================================================
// 0xe68a: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xe68d: WORD 'UNK_0xe68f' codep=0x744d parp=0xe68f
// ================================================
// 0xe68f: db 0x10 0x1c 0x01 '   '

// ================================================
// 0xe692: WORD 'UNK_0xe694' codep=0x744d parp=0xe694
// ================================================
// 0xe694: db 0x10 0x1d 0x01 '   '

// ================================================
// 0xe697: WORD 'UNK_0xe699' codep=0x744d parp=0xe699
// ================================================
// 0xe699: db 0x10 0x1e 0x01 '   '

// ================================================
// 0xe69c: WORD 'UNK_0xe69e' codep=0x744d parp=0xe69e
// ================================================
// 0xe69e: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xe6a1: WORD 'UNK_0xe6a3' codep=0x744d parp=0xe6a3
// ================================================
// 0xe6a3: db 0x10 0x20 0x02 '   '

// ================================================
// 0xe6a6: WORD 'UNK_0xe6a8' codep=0x744d parp=0xe6a8
// ================================================
// 0xe6a8: db 0x10 0x22 0x01 ' " '

// ================================================
// 0xe6ab: WORD 'UNK_0xe6ad' codep=0x73ea parp=0xe6ad
// ================================================
// 0xe6ad: db 0x87 0x00 0x09 0x0b 0x9f 0x96 '      '

// ================================================
// 0xe6b3: WORD 'UNK_0xe6b5' codep=0x73ea parp=0xe6b5
// ================================================
// 0xe6b5: db 0x87 0x09 0x01 0x0b 0x9f 0x96 '      '

// ================================================
// 0xe6bb: WORD 'UNK_0xe6bd' codep=0x73ea parp=0xe6bd
// ================================================
// 0xe6bd: db 0x87 0x0a 0x01 0x0b 0x9f 0x96 '      '

// ================================================
// 0xe6c3: WORD 'UNK_0xe6c5' codep=0x224c parp=0xe6c5
// ================================================

void UNK_0xe6c5() // UNK_0xe6c5
{
  Push(0x00c3);
  Push(1); // 1
  Push(0x001c);
  Push(0x0043);
  SetColor("GREY2");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0x00b6);
  Push(0x0044);
  Push(0x001c);
  Push(0x009d);
  SetColor("GREY2");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(2); // 2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(0x001c);
  OVER(); // OVER
  Push(0x00c3);
  LLINE(); // LLINE
  Push(0x009d);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x001c);
  OVER(); // OVER
  Push(0x00b6);
  LLINE(); // LLINE
  Push(cc__3); // 3
  Push(0x001a);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0044);
  Push(0x00b7);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(cc__3); // 3
  Push(0x00c4);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x0041);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0042);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x00b9);
  OVER(); // OVER
  Push(0x00c3);
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xff8e

  Push(0x004e);
  Push(0x00c5);
  SetColor("DK-BLUE");
  _dot_1LOGO(); // .1LOGO
  _gt_3FONT(); // >3FONT
  Push(0x005f);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("PERSONNEL", 9); // (.")
  SetColor("BLACK");
  SetColor("BLACK");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x000a);
  Push(0x00bd);
  POS_dot_(); // POS.
  PRINT("FILE", 4); // (.")
  Push(2); // 2
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  UNK_0xe5b6(); // UNK_0xe5b6
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(2); // 2
  Push(0x001c);
  Push(cc_UNK_0xe548); // UNK_0xe548
  Push(2); // 2
  Push(0x00c4);
  Push(cc_UNK_0xe54c); // UNK_0xe54c
  Push(0x0041);
  Push(0x00c4);
  Push(cc_UNK_0xe548); // UNK_0xe548
  Push(0x009c);
  Push(0x001c);
  Push(cc_UNK_0xe54c); // UNK_0xe54c
  Push(0x009c);
  Push(0x00b7);
  Push(cc_UNK_0xe548); // UNK_0xe548
  Push(0x0043);
  Push(0x00b9);
  Push(cc_UNK_0xe548); // UNK_0xe548
  Push(cc__6); // 6
  UNK_0xe53e(); // UNK_0xe53e
}


// ================================================
// 0xe804: WORD 'UNK_0xe806' codep=0x224c parp=0xe806
// ================================================

void UNK_0xe806() // UNK_0xe806
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0); // 0

  label2:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xe828: WORD 'UNK_0xe82a' codep=0x224c parp=0xe82a
// ================================================

void UNK_0xe82a() // UNK_0xe82a
{
  Push(Read16(sp)); // DUP
  _0_st_(); // 0<
  Push(0x6411); // IFIELD(UNK_0xe6a8)
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  IPREV(); // IPREV
  return;

  label1:
  _0_gt_(); // 0>
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe806(); // UNK_0xe806
  Push(Pop() | Pop()); // OR
  Push(0x6411); // IFIELD(UNK_0xe6a8)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xe862: WORD 'UNK_0xe864' codep=0x1d29 parp=0xe864
// ================================================
// 0xe864: db 0x03 0x0a 0x02 0x09 0x29 0x0a 0x2c 0x09 0x25 0x0a 0x52 0x09 0x29 0x0a 0x7c 0x09 0x23 '    ) , % R ) | #'

// ================================================
// 0xe875: WORD 'UNK_0xe877' codep=0x224c parp=0xe877
// ================================================

void UNK_0xe877() // UNK_0xe877
{
  CTINIT(); // CTINIT
  Push(0x009f);
  Push(1); // 1
  Push(1); // 1
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x009f);
  Push(0x000b);
  Push(1); // 1
  OVER(); // OVER
  LLINE(); // LLINE
  Push(1); // 1
  Push(1); // 1
  Push(1); // 1
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x002b);
  Push(1); // 1
  Push(0x002b);
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x0051);
  Push(1); // 1
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x007b);
  Push(1); // 1
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x009f);
  Push(1); // 1
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x000b);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("CREATE", 6); // (.")
  Push(0x0035);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("TRAIN", 5); // (.")
  Push(0x005b);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("DELETE", 6); // (.")
  Push(0x0085);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe91c: WORD 'UNK_0xe91e' codep=0x1d29 parp=0xe91e
// ================================================
// 0xe91e: db 0x81 0x00 '  '

// ================================================
// 0xe920: WORD 'UNK_0xe922' codep=0x224c parp=0xe922
// ================================================

void UNK_0xe922() // UNK_0xe922
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xe928: WORD 'UNK_0xe92a' codep=0x224c parp=0xe92a
// ================================================

void UNK_0xe92a() // UNK_0xe92a
{
  _gt_R(); // >R
  Push(h); // I
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  _ex_(); // !
  CTINIT(); // CTINIT
  SetColor("BLACK");
  SetColor("BLACK");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x000a);
  Push(0x0029);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(cc__6); // 6
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  R_gt_(); // R>
  UNK_0xe922(); // UNK_0xe922
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xea42: WORD 'UNK_0xea44' codep=0x224c parp=0xea44
// ================================================

void UNK_0xea44() // UNK_0xea44
{
  _at_CRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  SetColor("RED");
  goto label2;

  label1:
  SetColor("GREY2");

  label2:
  _ex_COLOR(); // !COLOR
  Push(0x0041);
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  Push(Read16(Pop())); // @
  Push(0x0033);
  UNK_0xe922(); // UNK_0xe922
  _gt_3FONT(); // >3FONT
  PRINT("DEAD", 4); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xea7b: WORD 'UNK_0xea7d' codep=0x224c parp=0xea7d
// ================================================

void UNK_0xea7d() // UNK_0xea7d
{
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  CTINIT(); // CTINIT
  Push(0x63fa); // IFIELD(UNK_0xe680)
  Push(Read16(sp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  _do__dot_(); // $.
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(0x007a);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Push(0x640e); // IFIELD(UNK_0xe69e)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  Push(0x6409); // IFIELD(UNK_0xe685)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  LoadData("UNK_0xe658"); // from 'CREWMEMBER  '
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  Push(0x640a); // IFIELD(UNK_0xe68a)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  Push(0x640b); // IFIELD(UNK_0xe68f)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  LoadData("UNK_0xe678"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _dot_R(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  Push(0x640c); // IFIELD(UNK_0xe694)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(cc__6); // 6
  R_gt_(); // R>
  UNK_0xe922(); // UNK_0xe922
  Push(0x640d); // IFIELD(UNK_0xe699)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  LoadData("UNK_0xe670"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  _dot_R(); // .R
}


// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  Push(0x0064);
  Push(0x0080);
  POS_dot_(); // POS.
  Push(0x0064);
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(0x0036);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  SetColor("GREY2");
  _ex_COLOR(); // !COLOR
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(0x007d);
  Push(Pop() + Pop()); // +
  FILE_st_(); // FILE<
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
  Push(0); // 0
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0xbeb2);
  goto label2;

  label1:
  Push(0xbe8a);

  label2:
  MODULE(); // MODULE
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  _at_CRS(); // @CRS
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  Push(0x0064);
  Push(0x0080);
  Push(0x0099);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x0064);
  Push(0x001e);
  Push(0x0099);
  Push(0x0080);
  LLINE(); // LLINE
  _ex_CRS(); // !CRS
}


// ================================================
// 0xebcb: WORD 'UNK_0xebcd' codep=0x224c parp=0xebcd
// ================================================

void UNK_0xebcd() // UNK_0xebcd
{
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
  Push(0x0087);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x000a);
  Push(0x005c);
  POS_dot_(); // POS.
  PRINT("TYPE    : ", 10); // (.")
  LoadData("UNK_0xe6ad"); // from 'PSTATS      '
  Push(cc__9); // 9
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Push(0x000a);
  Push(0x0050);
  POS_dot_(); // POS.
  PRINT("AVG. HT.: ", 10); // (.")
  LoadData("UNK_0xe6b5"); // from 'PSTATS      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0); // 0
  _dot_R(); // .R
  PRINT(".", 1); // (.")
  _dot_(); // .
  PRINT("M", 1); // (.")
  Push(0x000a);
  Push(0x0044);
  POS_dot_(); // POS.
  PRINT("AVG. WT.: ", 10); // (.")
  LoadData("UNK_0xe6bd"); // from 'PSTATS      '
  Push(Read8(Pop())&0xFF); // C@
  _dot_(); // .
  PRINT("KG", 2); // (.")
  _ex_CRS(); // !CRS
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xec5b: WORD 'UNK_0xec5d' codep=0x224c parp=0xec5d
// ================================================

void UNK_0xec5d() // UNK_0xec5d
{
  SAVE_dash_SCR(); // SAVE-SCR
  _gt_HIDDEN(); // >HIDDEN
  _at_CRS(); // @CRS
  Push(0x0080);
  Push(cc__5); // 5
  Push(0x001e);
  Push(0x0099);
  SetColor("GREY2");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0x000e);
  SetColor("GREY2");
  Push(0x0030);
  Push(h); // I
  Push(Pop() + Pop()); // +
  Push(0x000a);
  POS_dot_PXT(); // POS.PXT
  Push(cc__3); // 3
  SetColor("GREY2");
  Push(0x0030);
  Push(h); // I
  Push(Pop() + Pop()); // +
  Push(0x007a);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__3); // 3
  SetColor("GREY2");
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(h); // J
  Push(Pop() + Pop()); // +
  Push(0x004a);
  POS_dot_PXT(); // POS.PXT
  Push(2); // 2
  Push(i); // I
  Push(cc__4); // 4
  _eq_(); // =
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  SetColor("GREY2");
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(h); // J
  Push(Pop() + Pop()); // +
  Push(0x008d);
  Push(i); // I
  Push(cc__4); // 4
  _eq_(); // =
  Push(0xffea);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  POS_dot_PXT(); // POS.PXT
  i++;
  } while(i<imax); // (LOOP) 0xffb4

  Push(2); // 2
  SetColor("GREY2");
  Push(0x003d);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x0028);
  POS_dot_PXT(); // POS.PXT
  Push(0x0028);
  Push(0x003d);
  R_gt_(); // R>
  UNK_0xe922(); // UNK_0xe922
  Push(0x6411); // IFIELD(UNK_0xe6a8)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  Push(2); // 2
  _dot_R(); // .R
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0x0080);
  Push(0x0064);
  Push(0x001e);
  Push(0x0099);
  SetColor("BLACK");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(Read16(sp)); // DUP
  UNK_0xeb45(); // UNK_0xeb45
  UNK_0xebcd(); // UNK_0xebcd
  UNK_0xea7d(); // UNK_0xea7d

  label1:
  UNK_0xea44(); // UNK_0xea44
  _ex_CRS(); // !CRS
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xed57: WORD 'UNK_0xed59' codep=0x224c parp=0xed59
// ================================================

void UNK_0xed59() // UNK_0xed59
{
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xe82a(); // UNK_0xe82a
  UNK_0xec5d(); // UNK_0xec5d
}


// ================================================
// 0xed65: WORD 'UNK_0xed67' codep=0x224c parp=0xed67
// ================================================

void UNK_0xed67() // UNK_0xed67
{
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(cc__4); // 4
  goto label2;

  label1:
  Push(cc__5); // 5
  MOD(); // MOD

  label2:
  _gt_R(); // >R
  Push(h); // I
  Push(pp_OCRS); // OCRS
  _ex_(); // !
  Push(h); // I
  Push(pp_NCRS); // NCRS
  _ex_(); // !
  SetColor("GREY1");
  SetColor("GREY1");
  Push(pp__ask_TANDRG); // ?TANDRG
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  SetColor("GREY1");
  goto label4;

  label3:
  SetColor("RED");

  label4:
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(h); // I
  Push(0x63f9); // IFIELD(INST-SP)
  _ex_(); // !
  R_gt_(); // R>
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
  LoadData("UNK_0xe660"); // from 'CREWMEMBER  '
  Push(0x6409); // IFIELD(UNK_0xe685)
  Push(cc__5); // 5
  CMOVE(); // CMOVE
  Push(1); // 1
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  _ex_(); // !
  Push(0x0064);
  Push(0x640e); // IFIELD(UNK_0xe69e)
  C_ex_(); // C!
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label5;
  BLT(); // BLT

  label5:
  UNK_0xec5d(); // UNK_0xec5d
  LoadData("UNK_0xe658"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  BLT(); // BLT
}


// ================================================
// 0xedeb: WORD 'UNK_0xeded' codep=0x224c parp=0xeded
// ================================================

void UNK_0xeded() // UNK_0xeded
{

  label2:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  Push(pp_NCRS); // NCRS
  _plus__ex_(); // +!
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xed67(); // UNK_0xed67

  label1:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label2;
  BLT(); // BLT
  Push(Read16(sp)); // DUP
  Push(pp_NCRS); // NCRS
  _ex_(); // !
  Push(0); // 0
  _0MESS(); // 0MESS
}


// ================================================
// 0xee1b: WORD 'UNK_0xee1d' codep=0x224c parp=0xee1d
// ================================================

void UNK_0xee1d() // UNK_0xee1d
{
  PRINT("TYPE THIS CREWMEMBER'S NAME", 27); // (.")
}


// ================================================
// 0xee3d: WORD 'UNK_0xee3f' codep=0x224c parp=0xee3f
// ================================================

void UNK_0xee3f() // UNK_0xee3f
{
  TIME(); // TIME
  _2_at_(); // 2@

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_dash_(); // D-
  Push(0x0dac); Pust(0x0000);
  D_gt_(); // D>
  Exec(?TERMINAL); // call of word 0x25bc '(?TERMINAL)'
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xee5f: WORD 'UNK_0xee61' codep=0x1d29 parp=0xee61
// ================================================
// 0xee61: db 0x3a 0x20 ': '

// ================================================
// 0xee63: WORD 'UNK_0xee65' codep=0x224c parp=0xee65
// ================================================

void UNK_0xee65() // UNK_0xee65
{
  LoadData("UNK_0xe668"); // from 'CREWMEMBER  '
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(0x6409); // IFIELD(UNK_0xe685)
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
  LoadData("UNK_0xe670"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  UNK_0xe570(); // UNK_0xe570
  Push(0x86a0); Pust(0x0001);
  DMIN(); // DMIN
  Push(0x012c);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  MIN(); // MIN
  Push(pp_UNK_0xee61); // UNK_0xee61
  _ex_(); // !
  UNK_0xe550(); // UNK_0xe550
  Push(0); // 0
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("BALANCE:", 8); // (.")
  UNK_0xe570(); // UNK_0xe570
  Push(cc__7); // 7
  D_dot_R(); // D.R
  PRINT(" COST: 300 MU/SESSION", 21); // (.")
  _ex_CRS(); // !CRS
  Push(1); // 1
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("HOW MANY TRAINING SESSIONS (0-", 30); // (.")
  Push(pp_UNK_0xee61); // UNK_0xee61
  Push(Read16(Pop())); // @
  Push(0); // 0
  _dot_R(); // .R
  PRINT(")? ", 3); // (.")
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  Push(cc__dash_1); // -1
  Push(pp__dash_AIN); // -AIN
  _ex_(); // !
  Push(cc__3); // 3
  UNK_0xe516(); // UNK_0xe516
  _gt_R(); // >R
  _ex_CRS(); // !CRS
  R_gt_(); // R>
  Push(0); // 0
  SWAP(); // SWAP
  COUNT(); // COUNT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(i); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0030);
  _dash_(); // -
  Push(Pop() + Pop()); // +
  i++;
  } while(i<imax); // (LOOP) 0xffec

  Push(pp_UNK_0xee61); // UNK_0xee61
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(pp_UNK_0xee61); // UNK_0xee61
  _ex_(); // !
}


// ================================================
// 0xef51: WORD 'UNK_0xef53' codep=0x224c parp=0xef53
// ================================================

void UNK_0xef53() // UNK_0xef53
{
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(0); // 0
  Push(0x001c);
  CMESS(); // CMESS
  PRINT("THIS NAME IS ALREADY ON FILE", 28); // (.")
  _ex_CRS(); // !CRS
  Push(1); // 1
  Push(0x0024);
  CMESS(); // CMESS
  PRINT("[ CHOOSE ANOTHER OR ABORT CREATION ]", 36); // (.")
  _ex_CRS(); // !CRS

  label1:
  XYSCAN(); // XYSCAN
  SWAP(); // SWAP
  Pop(); // DROP
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  Push(0); // 0
  Push(0x001c);
  CMESS(); // CMESS
  PRINT("RE-", 3); // (.")
  UNK_0xee1d(); // UNK_0xee1d
  _ex_CRS(); // !CRS
  Push(0); // 0
  goto label3;

  label2:
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  OFF(); // OFF
  UNK_0xec5d(); // UNK_0xec5d
  Push(1); // 1

  label3:
  _at_CRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  SetColor("GREY2");
  _ex_COLOR(); // !COLOR
  BLT(); // BLT
  _ex_CRS(); // !CRS
  BLT(); // BLT
}


// ================================================
// 0xeffd: WORD 'UNK_0xefff' codep=0x224c parp=0xefff
// ================================================

void UNK_0xefff() // UNK_0xefff
{
  CI(); // CI
  _gt_C(); // >C
  Push(1); // 1
  Push(0x0019);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x63fa); // IFIELD(UNK_0xe680)
  PAD(); // PAD
  _do__eq_(); // $=
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0); // 0
  LEAVE(); // LEAVE
  goto label2;

  label1:
  INEXT(); // INEXT

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffe8

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf02b: WORD 'UNK_0xf02d' codep=0x224c parp=0xf02d
// ================================================

void UNK_0xf02d() // UNK_0xf02d
{
  Push(0); // 0
  Push(0x001b);
  CMESS(); // CMESS
  UNK_0xee1d(); // UNK_0xee1d
  _ex_CRS(); // !CRS
  Push(0x003c);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(cc__8); // 8
  Push(0x0032);
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  Push(Read16(Pop())); // @
  UNK_0xe922(); // UNK_0xe922
  BLT(); // BLT
}


// ================================================
// 0xf051: WORD 'UNK_0xf053' codep=0x224c parp=0xf053
// ================================================

void UNK_0xf053() // UNK_0xf053
{
  UNK_0xf02d(); // UNK_0xf02d

  label3:
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  Push(0x000a);
  Push(0x0030);
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  Push(Read16(Pop())); // @
  UNK_0xe922(); // UNK_0xe922
  Push(pp__dash_AIN); // -AIN
  OFF(); // OFF
  Push(0x000e);
  UNK_0xe516(); // UNK_0xe516
  UNK_0xe590(); // UNK_0xe590
  Pop(); // DROP
  _ex_CRS(); // !CRS
  UNK_0xefff(); // UNK_0xefff
  if (Pop() == 0) goto label1;
  PAD(); // PAD
  Push(0x63fa); // IFIELD(UNK_0xe680)
  _do__ex_(); // $!
  Push(1); // 1
  goto label2;

  label1:
  UNK_0xef53(); // UNK_0xef53

  label2:
  if (Pop() == 0) goto label3;
  BLT(); // BLT
  Push(0); // 0
  _0MESS(); // 0MESS
}


// ================================================
// 0xf09b: WORD 'UNK_0xf09d' codep=0x224c parp=0xf09d
// ================================================

void UNK_0xf09d() // UNK_0xf09d
{
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS
  _at_CRS(); // @CRS
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0x63fa); // IFIELD(UNK_0xe680)
  OFF(); // OFF
  Push(0x6409); // IFIELD(UNK_0xe685)
  Push(cc__5); // 5
  Push(0); // 0
  FILL(); // FILL
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  Push(0x0075);
  Push(0x0024);
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  Push(Read16(Pop())); // @
  UNK_0xe922(); // UNK_0xe922
  Push(0x0018);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(cc__9); // 9
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(0); // 0
  Push(0x0020);
  CMESS(); // CMESS
  CTINIT(); // CTINIT
  PRINT("SELECT RACE ^\ ", 15); // (.")
  UNK_0xe5e2(); // UNK_0xe5e2
  _ex_CRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0); // 0
  _ex_INST_dash_SIB(); // !INST-SIB
  Push(pp_RECORD_n_); // RECORD#
  OFF(); // OFF
  _at_CRS(); // @CRS
  UNK_0xed67(); // UNK_0xed67
  UNK_0xeded(); // UNK_0xeded
  UNK_0xf053(); // UNK_0xf053
  _ex_CRS(); // !CRS
  goto label2;

  label1:
  Push(0); // 0
  Push(0x0016);
  CMESS(); // CMESS
  PRINT("THIS FILE IS NOT EMPTY", 22); // (.")
  _ex_CRS(); // !CRS
  UNK_0xee3f(); // UNK_0xee3f
  Push(0); // 0
  _0MESS(); // 0MESS

  label2:
  _ex_CRS(); // !CRS
  Push(0); // 0
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe5fb(); // UNK_0xe5fb
  _ex_CRS(); // !CRS
  Push(1); // 1
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xf162: WORD 'UNK_0xf164' codep=0x224c parp=0xf164
// ================================================

void UNK_0xf164() // UNK_0xf164
{
  UNK_0xe550(); // UNK_0xe550
  Push(0); // 0
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("SELECT SKILL ^\", 15); // (.")
  _ex_CRS(); // !CRS
  Push(1); // 1
  Push(0x0012);
  CMESS(); // CMESS
  UNK_0xe5e2(); // UNK_0xe5e2
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf190: WORD 'UNK_0xf192' codep=0x224c parp=0xf192
// ================================================

void UNK_0xf192() // UNK_0xf192
{
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  Push(Read16(Pop())); // @
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(0); // 0
  Push(0x0021);
  CMESS(); // CMESS
  PRINT("YOU CAN'T TRAIN ", 16); // (.")
  UNK_0xe63e(); // UNK_0xe63e
  goto label2;

  label1:
  Push(0); // 0
  Push(0x001d);
  CMESS(); // CMESS
  PRINT("THERE IS NO ONE HERE TO TRAIN", 29); // (.")
  _ex_CRS(); // !CRS

  label2:
  UNK_0xee3f(); // UNK_0xee3f
  Push(0); // 0
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1f5: WORD 'UNK_0xf1f7' codep=0x224c parp=0xf1f7
// ================================================

void UNK_0xf1f7() // UNK_0xf1f7
{
  Push(0x012c); Pust(0x0000);
  UNK_0xe57a(); // UNK_0xe57a
  Push(Read16(sp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0); // 0
  Push(0x0012);
  CMESS(); // CMESS
  PRINT("INSUFFICIENT FUNDS", 18); // (.")
  BEEP(); // BEEP
  _ex_CRS(); // !CRS
  UNK_0xee3f(); // UNK_0xee3f
  Push(0); // 0
  _0MESS(); // 0MESS
}


// ================================================
// 0xf230: WORD 'UNK_0xf232' codep=0x224c parp=0xf232
// ================================================

void UNK_0xf232() // UNK_0xf232
{
  LoadData("UNK_0xe668"); // from 'CREWMEMBER  '
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(0x6409); // IFIELD(UNK_0xe685)
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xe550(); // UNK_0xe550
  Push(0); // 0
  Push(0x0022);
  CMESS(); // CMESS
  PRINT("MAXIMUM TRAINING LEVEL HAS ALREADY", 34); // (.")
  _ex_CRS(); // !CRS
  Push(1); // 1
  Push(0x001c);
  CMESS(); // CMESS
  PRINT("BEEN ATTAINED FOR THIS SKILL", 28); // (.")
  _ex_CRS(); // !CRS
  UNK_0xee3f(); // UNK_0xee3f
  UNK_0xe550(); // UNK_0xe550
  Push(1); // 1
  return;

  label1:
  Push(0); // 0
}


// ================================================
// 0xf2b4: WORD 'UNK_0xf2b6' codep=0x1d29 parp=0xf2b6
// ================================================
// 0xf2b6: db 0x04 0xa5 0x0d 0x09 0x1f 0x9e 0x0d 0x09 0x2b 0x97 0x0d 0x09 0x2f 0x90 0x0d 0x09 0x3b 0x89 0x0d 0x09 0x23 '        +   /   ;   #'

// ================================================
// 0xf2cb: WORD 'UNK_0xf2cd' codep=0x224c parp=0xf2cd
// ================================================

void UNK_0xf2cd() // UNK_0xf2cd
{
  SetColor("GREY1");
  Push(pp_CRSCOLO); // CRSCOLO
  _ex_(); // !
  UNK_0xf164(); // UNK_0xf164
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  Push(pp_UNK_0xf2b6); // UNK_0xf2b6
  BLD_dash_CRS(); // BLD-CRS

  label1:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  Push(cc__dash_1); // -1
  Push(Pop() * Pop()); // *
  Push(pp_NCRS); // NCRS
  _plus__ex_(); // +!
  Push(pp_UNK_0xf2b6); // UNK_0xf2b6
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  UNK_0xf232(); // UNK_0xf232
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  UNK_0xee65(); // UNK_0xee65
  Push(0x012c);
  Push(pp_UNK_0xee61); // UNK_0xee61
  Push(Read16(Pop())); // @
  U_star_(); // U*
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  DNEGATE(); // DNEGATE
  Push(0xc5ca);
  MODULE(); // MODULE
  goto label4;

  label3:
  Pop(); Pop();// 2DROP

  label4:
  Push(0x6409); // IFIELD(UNK_0xe685)
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xe670"); // from 'CREWMEMBER  '
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xee61); // UNK_0xee61
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  LoadData("UNK_0xe668"); // from 'CREWMEMBER  '
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  MIN(); // MIN
  Push(0x6409); // IFIELD(UNK_0xe685)
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  UNK_0xec5d(); // UNK_0xec5d

  label2:
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  BLT(); // BLT
  Push(0); // 0
  _0MESS(); // 0MESS
  SetColor("WHITE");
  SetColor("GREY1");
  SetColor("RED");
  _ask_MRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  _ex_(); // !
}


// ================================================
// 0xf369: WORD 'UNK_0xf36b' codep=0x224c parp=0xf36b
// ================================================

void UNK_0xf36b() // UNK_0xf36b
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(cc__4); // 4
  _eq_(); // =
  Push(Read16(sp)); // DUP
  if (Pop() == 0) return;
  Push(0); // 0
  Push(0x0019);
  CMESS(); // CMESS
  PRINT("ANDROIDS CAN'T BE TRAINED", 25); // (.")
  _ex_CRS(); // !CRS
  UNK_0xee3f(); // UNK_0xee3f
}


// ================================================
// 0xf3a1: WORD 'UNK_0xf3a3' codep=0x224c parp=0xf3a3
// ================================================

void UNK_0xf3a3() // UNK_0xf3a3
{
  UNK_0xe550(); // UNK_0xe550
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push(Pop() ^ Pop()); // XOR
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xf192(); // UNK_0xf192
  goto label2;

  label1:
  UNK_0xf36b(); // UNK_0xf36b
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  UNK_0xf1f7(); // UNK_0xf1f7
  if (Pop() == 0) goto label2;
  _at_CRS(); // @CRS
  UNK_0xf2cd(); // UNK_0xf2cd
  _ex_CRS(); // !CRS

  label2:
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(0); // 0
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe5fb(); // UNK_0xe5fb
  _ex_CRS(); // !CRS
  Push(1); // 1
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xf3e5: WORD 'UNK_0xf3e7' codep=0x224c parp=0xf3e7
// ================================================

void UNK_0xf3e7() // UNK_0xf3e7
{
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  OFF(); // OFF
  Push(0x63fa); // IFIELD(UNK_0xe680)
  Push(0x000f);
  Push(0); // 0
  FILL(); // FILL
}


// ================================================
// 0xf3f7: WORD 'UNK_0xf3f9' codep=0x224c parp=0xf3f9
// ================================================

void UNK_0xf3f9() // UNK_0xf3f9
{
  UNK_0xe550(); // UNK_0xe550
  Push(0x640f); // IFIELD(UNK_0xe6a3)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(0x001a);
  CMESS(); // CMESS
  PRINT("THIS FILE IS ALREADY EMPTY", 26); // (.")
  _ex_CRS(); // !CRS
  UNK_0xee3f(); // UNK_0xee3f
  Push(0); // 0
  _0MESS(); // 0MESS
  goto label2;

  label1:
  Push(0); // 0
  Push(0x0017);
  CMESS(); // CMESS
  PRINT("DELETE THIS CREWMEMBER?", 23); // (.")
  _ex_CRS(); // !CRS
  Push(1); // 1
  Push(cc__7); // 7
  CMESS(); // CMESS
  PRINT("[N  Y]", 6); // (.")
  _ex_CRS(); // !CRS

  label3:
  XYSCAN(); // XYSCAN
  SWAP(); // SWAP
  Pop(); // DROP
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label3;
  _0_gt_(); // 0>
  if (Pop() == 0) goto label4;
  UNK_0xf3e7(); // UNK_0xf3e7
  UNK_0xec5d(); // UNK_0xec5d

  label4:
  UNK_0xe550(); // UNK_0xe550

  label2:
  Push(0); // 0
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe5fb(); // UNK_0xe5fb
  _ex_CRS(); // !CRS
  Push(1); // 1
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xf495: WORD 'UNK_0xf497' codep=0x224c parp=0xf497
// ================================================

void UNK_0xf497() // UNK_0xf497
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  SetColor("WHITE");
  SetColor("GREY1");
  SetColor("RED");
  _ask_MRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  _ex_(); // !
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  UNK_0xe6c5(); // UNK_0xe6c5
  UNK_0xe877(); // UNK_0xe877
  Push(pp_UNK_0xe864); // UNK_0xe864
  BLD_dash_CRS(); // BLD-CRS
  Push(0x0081);
  UNK_0xe92a(); // UNK_0xe92a
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  UNK_0xec5d(); // UNK_0xec5d
  Push(0); // 0
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe5fb(); // UNK_0xe5fb
  _ex_CRS(); // !CRS
  Push(1); // 1
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xf4d5: WORD 'PFILE-FUNCTION' codep=0x4a4f parp=0xf4e8
// ================================================
// 0xf4e8: db 0x04 0x00 0x48 0x3a 0x00 0x00 0x9d 0xf0 0x01 0x00 0xa3 0xf3 0x02 0x00 0xf9 0xf3 0x03 0x00 0x09 0x13 '  H:                '

// ================================================
// 0xf4fc: WORD '(U-PFILE)' codep=0x224c parp=0xf50a
// ================================================
// entry

void _ro_U_dash_PFILE_rc_() // (U-PFILE)
{
  UNK_0xe55c(); // UNK_0xe55c
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf497(); // UNK_0xf497

  label2:
  XYSCAN(); // XYSCAN
  Push(pp_NCRS); // NCRS
  _plus__ex_(); // +!
  UNK_0xed59(); // UNK_0xed59
  Push(pp_UNK_0xe864); // UNK_0xe864
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
  _ask_TRIG(); // ?TRIG
  Push(Read16(sp)); // DUP
  if (Pop() == 0) goto label1;
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // PFILE-FUNCTION
  {
  case 0:
    UNK_0xf09d(); // UNK_0xf09d
    break;
  case 1:
    UNK_0xf3a3(); // UNK_0xf3a3
    break;
  case 2:
    UNK_0xf3f9(); // UNK_0xf3f9
    break;
  case 3:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;
  default:
    NOP(); // NOP
    break;

  }

  label1:
  if (Pop() == 0) goto label2;
  _gt_0FONT(); // >0FONT
  Push(cc__4); // 4
  UNK_0xe566(); // UNK_0xe566
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}

// 0xf542: db 0x50 0x46 0x49 0x4c 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'PFILE-VOC_____________________ '
  