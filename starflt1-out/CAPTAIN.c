// ====== OVERLAY 'CAPTAIN' ======

#include"interface.h"

// store offset = 0xde20
// overlay size   = 0x1740

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xde36  codep:0x1d29 parp:0xde36 size:0x0002 C-string:'UNK_0xde36'
// 1704:      UNK_0xde3a  codep:0x1d29 parp:0xde3a size:0x0008 C-string:'UNK_0xde3a'
// 1705:      UNK_0xde44  codep:0x1d29 parp:0xde44 size:0x0006 C-string:'UNK_0xde44'
// 1706:      UNK_0xde4c  codep:0x1d29 parp:0xde4c size:0x0006 C-string:'UNK_0xde4c'
// 1707:      UNK_0xde54  codep:0x1d29 parp:0xde54 size:0x0006 C-string:'UNK_0xde54'
// 1708:      UNK_0xde5c  codep:0x1d29 parp:0xde5c size:0x0006 C-string:'UNK_0xde5c'
// 1709:      UNK_0xde64  codep:0x3b68 parp:0xde64 size:0x0004 C-string:'UNK_0xde64'
// 1710:      UNK_0xde6a  codep:0x3b68 parp:0xde6a size:0x0004 C-string:'UNK_0xde6a'
// 1711:      UNK_0xde70  codep:0x1d29 parp:0xde70 size:0x0002 C-string:'UNK_0xde70'
// 1712:      UNK_0xde74  codep:0x224c parp:0xde74 size:0x0008 C-string:'UNK_0xde74'
// 1713:      UNK_0xde7e  codep:0x224c parp:0xde7e size:0x003c C-string:'UNK_0xde7e'
// 1714:      UNK_0xdebc  codep:0x224c parp:0xdebc size:0x0080 C-string:'UNK_0xdebc'
// 1715:      UNK_0xdf3e  codep:0x224c parp:0xdf3e size:0x0076 C-string:'UNK_0xdf3e'
// 1716:      UNK_0xdfb6  codep:0x224c parp:0xdfb6 size:0x0046 C-string:'UNK_0xdfb6'
// 1717:      UNK_0xdffe  codep:0x744d parp:0xdffe size:0x0003 C-string:'UNK_0xdffe'
// 1718:      UNK_0xe003  codep:0x224c parp:0xe003 size:0x004f C-string:'UNK_0xe003'
// 1719:      UNK_0xe054  codep:0x744d parp:0xe054 size:0x000b C-string:'UNK_0xe054'
// 1720:      UNK_0xe061  codep:0x73ea parp:0xe061 size:0x0006 C-string:'UNK_0xe061'
// 1721:      UNK_0xe069  codep:0x73ea parp:0xe069 size:0x0006 C-string:'UNK_0xe069'
// 1722:      UNK_0xe071  codep:0x73ea parp:0xe071 size:0x0006 C-string:'UNK_0xe071'
// 1723:      UNK_0xe079  codep:0x73ea parp:0xe079 size:0x0006 C-string:'UNK_0xe079'
// 1724:      UNK_0xe081  codep:0x744d parp:0xe081 size:0x0003 C-string:'UNK_0xe081'
// 1725:      UNK_0xe086  codep:0x73ea parp:0xe086 size:0x0006 C-string:'UNK_0xe086'
// 1726:      UNK_0xe08e  codep:0x73ea parp:0xe08e size:0x0006 C-string:'UNK_0xe08e'
// 1727:      UNK_0xe096  codep:0x744d parp:0xe096 size:0x0003 C-string:'UNK_0xe096'
// 1728:      UNK_0xe09b  codep:0x744d parp:0xe09b size:0x0003 C-string:'UNK_0xe09b'
// 1729:      UNK_0xe0a0  codep:0x744d parp:0xe0a0 size:0x0003 C-string:'UNK_0xe0a0'
// 1730:      UNK_0xe0a5  codep:0x744d parp:0xe0a5 size:0x0003 C-string:'UNK_0xe0a5'
// 1731:      UNK_0xe0aa  codep:0x744d parp:0xe0aa size:0x0003 C-string:'UNK_0xe0aa'
// 1732:      UNK_0xe0af  codep:0x744d parp:0xe0af size:0x000d C-string:'UNK_0xe0af'
// 1733:      UNK_0xe0be  codep:0x744d parp:0xe0be size:0x0017 C-string:'UNK_0xe0be'
// 1734:      UNK_0xe0d7  codep:0x1d29 parp:0xe0d7 size:0x0002 C-string:'UNK_0xe0d7'
// 1735:      UNK_0xe0db  codep:0x224c parp:0xe0db size:0x000a C-string:'UNK_0xe0db'
// 1736:      UNK_0xe0e7  codep:0x224c parp:0xe0e7 size:0x0010 C-string:'UNK_0xe0e7'
// 1737:      UNK_0xe0f9  codep:0x224c parp:0xe0f9 size:0x0030 C-string:'UNK_0xe0f9'
// 1738:      UNK_0xe12b  codep:0x224c parp:0xe12b size:0x0060 C-string:'UNK_0xe12b'
// 1739:      UNK_0xe18d  codep:0x224c parp:0xe18d size:0x014a C-string:'UNK_0xe18d'
// 1740:        CHAR>SCR  codep:0x4a4f parp:0xe2e4 size:0x0010 C-string:'CHAR_gt_SCR'
// 1741:      UNK_0xe2f6  codep:0x224c parp:0xe2f6 size:0x0056 C-string:'UNK_0xe2f6'
// 1742:      UNK_0xe34e  codep:0x224c parp:0xe34e size:0x0044 C-string:'UNK_0xe34e'
// 1743:      UNK_0xe394  codep:0x224c parp:0xe394 size:0x0020 C-string:'UNK_0xe394'
// 1744:      UNK_0xe3b6  codep:0x224c parp:0xe3b6 size:0x0022 C-string:'UNK_0xe3b6'
// 1745:      UNK_0xe3da  codep:0x224c parp:0xe3da size:0x0044 C-string:'UNK_0xe3da'
// 1746:     (/CAPT-LOG)  codep:0x224c parp:0xe42e size:0x0032 C-string:'_ro__slash_CAPT_minus_LOG_rc_'
// 1747:      UNK_0xe462  codep:0x224c parp:0xe462 size:0x0018 C-string:'UNK_0xe462'
// 1748:      UNK_0xe47c  codep:0x224c parp:0xe47c size:0x0010 C-string:'UNK_0xe47c'
// 1749:      UNK_0xe48e  codep:0x224c parp:0xe48e size:0x000e C-string:'UNK_0xe48e'
// 1750:      UNK_0xe49e  codep:0x224c parp:0xe49e size:0x000e C-string:'UNK_0xe49e'
// 1751:      UNK_0xe4ae  codep:0x224c parp:0xe4ae size:0x0032 C-string:'UNK_0xe4ae'
// 1752:      UNK_0xe4e2  codep:0x224c parp:0xe4e2 size:0x000a C-string:'UNK_0xe4e2'
// 1753:      UNK_0xe4ee  codep:0x224c parp:0xe4ee size:0x002a C-string:'UNK_0xe4ee'
// 1754:      UNK_0xe51a  codep:0x224c parp:0xe51a size:0x0060 C-string:'UNK_0xe51a'
// 1755:       TD-SCROLL  codep:0x4a4f parp:0xe588 size:0x013f C-string:'TD_minus_SCROLL'
// 1756:      UNK_0xe6c9  codep:0x224c parp:0xe6c9 size:0x0014 C-string:'UNK_0xe6c9'
// 1757:      UNK_0xe6df  codep:0x224c parp:0xe6df size:0x0028 C-string:'UNK_0xe6df'
// 1758:      UNK_0xe709  codep:0x224c parp:0xe709 size:0x0030 C-string:'UNK_0xe709'
// 1759:      UNK_0xe73b  codep:0x224c parp:0xe73b size:0x002a C-string:'UNK_0xe73b'
// 1760:      UNK_0xe767  codep:0x224c parp:0xe767 size:0x008e C-string:'UNK_0xe767'
// 1761:      UNK_0xe7f7  codep:0x224c parp:0xe7f7 size:0x002a C-string:'UNK_0xe7f7'
// 1762:      UNK_0xe823  codep:0x224c parp:0xe823 size:0x00c4 C-string:'UNK_0xe823'
// 1763:      UNK_0xe8e9  codep:0x224c parp:0xe8e9 size:0x001c C-string:'UNK_0xe8e9'
// 1764:      UNK_0xe907  codep:0x224c parp:0xe907 size:0x0029 C-string:'UNK_0xe907'
// 1765:      UNK_0xe932  codep:0x224c parp:0xe932 size:0x003c C-string:'UNK_0xe932'
// 1766:      UNK_0xe970  codep:0x224c parp:0xe970 size:0x0070 C-string:'UNK_0xe970'
// 1767:      UNK_0xe9e2  codep:0x224c parp:0xe9e2 size:0x0110 C-string:'UNK_0xe9e2'
// 1768:      UNK_0xeaf4  codep:0x224c parp:0xeaf4 size:0x01e9 C-string:'UNK_0xeaf4'
// 1769:      UNK_0xecdf  codep:0x224c parp:0xecdf size:0x0030 C-string:'UNK_0xecdf'
// 1770:       1STOPTION  codep:0x4a4f parp:0xed1d size:0x0018 C-string:'_1STOPTION'
// 1771:      UNK_0xed37  codep:0x1d29 parp:0xed37 size:0x0002 C-string:'UNK_0xed37'
// 1772:      UNK_0xed3b  codep:0x1d29 parp:0xed3b size:0x0002 C-string:'UNK_0xed3b'
// 1773:       DO-OPTION  codep:0x224c parp:0xed4b size:0x0081 C-string:'DO_minus_OPTION'
// 1774:    ITEM-OPTIONS  codep:0x4a4f parp:0xeddd size:0x0018 C-string:'ITEM_minus_OPTIONS'
// 1775:      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x0051 C-string:'UNK_0xedf7'
// 1776:      UNK_0xee4a  codep:0x224c parp:0xee4a size:0x00a6 C-string:'UNK_0xee4a'
// 1777:      UNK_0xeef2  codep:0x224c parp:0xeef2 size:0x0024 C-string:'UNK_0xeef2'
// 1778:        (/ITEMS)  codep:0x224c parp:0xef23 size:0x0088 C-string:'_ro__slash_ITEMS_rc_'
// 1779:      UNK_0xefad  codep:0x224c parp:0xefad size:0x0010 C-string:'UNK_0xefad'
// 1780:      UNK_0xefbf  codep:0x224c parp:0xefbf size:0x0008 C-string:'UNK_0xefbf'
// 1781:        >DESCEND  codep:0x224c parp:0xefd4 size:0x0031 C-string:'_gt_DESCEND'
// 1782:      UNK_0xf007  codep:0x224c parp:0xf007 size:0x00c4 C-string:'UNK_0xf007'
// 1783:      UNK_0xf0cd  codep:0x224c parp:0xf0cd size:0x001b C-string:'UNK_0xf0cd'
// 1784:      UNK_0xf0ea  codep:0x224c parp:0xf0ea size:0x0040 C-string:'UNK_0xf0ea'
// 1785:  (/LAUNCH/LAND)  codep:0x224c parp:0xf13d size:0x004e C-string:'_ro__slash_LAUNCH_slash_LAND_rc_'
// 1786:      UNK_0xf18d  codep:0x1d29 parp:0xf18d size:0x0002 C-string:'UNK_0xf18d'
// 1787:      UNK_0xf191  codep:0x224c parp:0xf191 size:0x0006 C-string:'UNK_0xf191'
// 1788:      UNK_0xf199  codep:0x224c parp:0xf199 size:0x0010 C-string:'UNK_0xf199'
// 1789:      UNK_0xf1ab  codep:0x224c parp:0xf1ab size:0x0010 C-string:'UNK_0xf1ab'
// 1790:      UNK_0xf1bd  codep:0x224c parp:0xf1bd size:0x0020 C-string:'UNK_0xf1bd'
// 1791:      UNK_0xf1df  codep:0x224c parp:0xf1df size:0x001a C-string:'UNK_0xf1df'
// 1792:      UNK_0xf1fb  codep:0x224c parp:0xf1fb size:0x001c C-string:'UNK_0xf1fb'
// 1793:      UNK_0xf219  codep:0x224c parp:0xf219 size:0x0018 C-string:'UNK_0xf219'
// 1794:      UNK_0xf233  codep:0x224c parp:0xf233 size:0x000a C-string:'UNK_0xf233'
// 1795:      UNK_0xf23f  codep:0x224c parp:0xf23f size:0x0016 C-string:'UNK_0xf23f'
// 1796:      UNK_0xf257  codep:0x224c parp:0xf257 size:0x0039 C-string:'UNK_0xf257'
// 1797:      UNK_0xf292  codep:0x224c parp:0xf292 size:0x0038 C-string:'UNK_0xf292'
// 1798:      UNK_0xf2cc  codep:0x1d29 parp:0xf2cc size:0x0002 C-string:'UNK_0xf2cc'
// 1799:      UNK_0xf2d0  codep:0x224c parp:0xf2d0 size:0x003c C-string:'UNK_0xf2d0'
// 1800:      UNK_0xf30e  codep:0x224c parp:0xf30e size:0x0038 C-string:'UNK_0xf30e'
// 1801:      UNK_0xf348  codep:0x224c parp:0xf348 size:0x0030 C-string:'UNK_0xf348'
// 1802:      UNK_0xf37a  codep:0x224c parp:0xf37a size:0x0036 C-string:'UNK_0xf37a'
// 1803:      UNK_0xf3b2  codep:0x224c parp:0xf3b2 size:0x001f C-string:'UNK_0xf3b2'
// 1804:      UNK_0xf3d3  codep:0x224c parp:0xf3d3 size:0x0057 C-string:'UNK_0xf3d3'
// 1805:     (/LOG-PLAN)  codep:0x224c parp:0xf43a size:0x0126 C-string:'_ro__slash_LOG_minus_PLAN_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xde36[2] = {0x00, 0x00}; // UNK_0xde36
unsigned char UNK_0xde3a[8] = {0x00, 0x00, 0x29, 0x1d, 0x56, 0x3a, 0x20, 0x58}; // UNK_0xde3a
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
// 0xde3a: db 0x00 0x00 0x29 0x1d 0x56 0x3a 0x20 0x58 '  ) V: X'

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
  C_at_(); // C@
  Push(i); // I
  Push(h); // J
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  C_at_(); // C@
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
  C_at_(); // C@
  OVER(); // OVER
  Push(i); // I
  Push(Pop() + Pop()); // +
  _plus__minus__at_(); // +-@
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(i); // I
  Push(2); // 2
  MOD(); // MOD
  if (Pop() == 0) goto label1;
  UNK_0xde6a(); // UNK_0xde6a
  goto label3;

  label1:
  UNK_0xde64(); // UNK_0xde64

  label3:
  WITHIN(); // WITHIN
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  OVER(); // OVER
  Push(i); // I
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  C_at_(); // C@
  Push(-Pop()); // NEGATE
  DUP(); // DUP
  ROT(); // ROT
  C_ex_(); // C!
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Push(1); // 1
  Push(0x0010);
  RRND(); // RRND
  DUP(); // DUP
  Push(Pop()<<4); // 16*
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xde70); // UNK_0xde70
  _ex_(); // !

  label2:
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
  DUP(); // DUP
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
  DUP(); // DUP
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
  UNK_0xde64(); // UNK_0xde64
  RRND(); // RRND
  DUP(); // DUP
  Push(pp_UNK_0xde44); // UNK_0xde44
  Push(i); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(pp_UNK_0xde4c); // UNK_0xde4c
  Push(i); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  UNK_0xde6a(); // UNK_0xde6a
  RRND(); // RRND
  DUP(); // DUP
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
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
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
  BLACK(); // BLACK
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
  UNK_0xdffe(); // UNK_0xdffe
  PAD(); // PAD
  Push(Pop()+1); // 1+
  Push(cc__8); // 8
  CMOVE(); // CMOVE
  Push(cc__8); // 8
  PAD(); // PAD
  C_ex_(); // C!

  UNK_0x3f39("ATARAXIA");
  Pop(); // DROP
  Push(Pop()-1); // 1-
  PAD(); // PAD
  _do__eq_(); // $=
  if (Pop() == 0) goto label1;
  UNK_0xdffe(); // UNK_0xdffe
  Push(cc__8); // 8
  Push(cc_BL); // BL
  FILL(); // FILL
  UNK_0xdfb6(); // UNK_0xdfb6

  label1:
  SAVE_minus_OV(); // SAVE-OV
}

// 0xe03a: db 0xea 0x73 0x1c 0x18 0x01 0x1e 0x2c 0x65 0xea 0x73 0x1c 0x1d 0x01 0x1e 0x2c 0x65 0xea 0x73 0x39 0x00 0xbe 0xbe 0x90 0x67 ' s    ,e s    ,e s9    g'

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
// 0xe0af: db 0x24 0x15 0x0f 0x4d 0x74 0x14 0x13 0x02 0x4d 0x74 0x00 0x13 0x02 '$  Mt   Mt   '

// ================================================
// 0xe0bc: WORD 'UNK_0xe0be' codep=0x744d parp=0xe0be
// ================================================
// 0xe0be: db 0x17 0x12 0x01 0x4d 0x74 0x00 0x15 0x01 0x4d 0x74 0x00 0x16 0x01 0x4d 0x74 0x00 0x17 0x01 0x4d 0x74 0x14 0x43 0x02 '   Mt   Mt   Mt   Mt C '

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
  Push(cc__minus_1); // -1
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
  BLACK(); // BLACK
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
  UNK_0xdffe(); // UNK_0xdffe
  Push(0x0024);
  TYPE(); // TYPE
  INEXT(); // INEXT
  i++;
  } while(i<imax); // (LOOP) 0xffee

  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  NULL(); // NULL
  UNK_0xe0db(); // UNK_0xe0db
}


// ================================================
// 0xe129: WORD 'UNK_0xe12b' codep=0x224c parp=0xe12b
// ================================================

void UNK_0xe12b() // UNK_0xe12b
{
  WHITE(); // WHITE
  ERASE_minus_T(); // ERASE-T
  UNK_0xe0e7(); // UNK_0xe0e7
  DK_minus_BLUE(); // DK-BLUE
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
  DK_minus_BLUE(); // DK-BLUE
  POLY_minus_WI(); // POLY-WI
  CTINIT(); // CTINIT
  Push(0x0098);
  DUP(); // DUP
  Push(0x0026);
  POS_dot_(); // POS.
  PRINT("E", 1); // (.")
  DUP(); // DUP
  Push(0x001f);
  POS_dot_(); // POS.
  PRINT("X", 1); // (.")
  DUP(); // DUP
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
  FILL(); // FILL
  Push(0x0024);
  PAD(); // PAD
  C_ex_(); // C!
  UNK_0xdffe(); // UNK_0xdffe
  PAD(); // PAD
  Push(Pop()+1); // 1+
  Push(0x0024);
  CMOVE(); // CMOVE
}

// 0xe1af: db 0x4c 0x22 0x66 0x5c 0xae 0x0b 0x70 0x5c 0xae 0x0b 0x28 0xa5 0xdc 0x1b 0x01 0x23 0xd9 0xe0 0x0a 0x4f 0x17 0x85 0x6b 0x06 0x7a 0x58 0xb7 0x6d 0xb6 0x4f 0x17 0x85 0x2e 0x0f 0x66 0x5c 0x83 0x6d 0x66 0x5c 0xae 0x0b 0x5d 0x17 0x24 0x00 0x5f 0x12 0xfa 0x15 0x20 0x00 0x84 0x7a 0x70 0x5c 0xae 0x0b 0x8b 0x3b 0x5f 0x12 0xfa 0x15 0x10 0x00 0x0a 0x4f 0x17 0x85 0x8b 0xe1 0xdb 0x23 0x22 0xa4 0xb6 0x4f 0x17 0x85 0xd3 0xa4 0x90 0x16 0x4c 0x22 0xfc 0xdf 0x66 0x5c 0xae 0x0b 0x72 0x0f 0x6a 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x7f 0x00 0xf5 0x12 0xb4 0x0d 0x50 0x0e 0x5d 0x17 0x20 0x00 0x5d 0x17 0x5b 0x00 0x57 0x40 0xfa 0x15 0x0a 0x00 0x50 0x0e 0x03 0xe2 0x50 0x0e 0xaf 0xe1 0x90 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x32 0x0e 0x66 0x5c 0xae 0x0b 0x7b 0x3b 0x72 0x0f 0x5d 0x17 0x23 0x00 0xad 0x11 0x70 0x5c 0xae 0x0b 0xd9 0xe0 0x90 0x16 0x4c 0x22 0x32 0x0e 0x66 0x5c 0xae 0x0b 0x2e 0x0f 0x5d 0x17 0x24 0x00 0x57 0x40 0xfa 0x15 0x28 0x00 0x28 0xa5 0x5d 0x17 0xfc 0xff 0x6c 0x58 0x83 0x6d 0xdc 0x1b 0x01 0x23 0x7a 0x58 0xb7 0x6d 0x5d 0x17 0xfc 0xff 0x6c 0x58 0x83 0x6d 0xac 0x3b 0x66 0x5c 0x83 0x6d 0x5d 0x17 0x20 0x00 0x03 0xe2 0x90 0x16 0x4c 0x22 0x32 0x0e 0x66 0x5c 0xae 0x0b 0x5d 0x17 0x23 0x00 0x2d 0x12 0xfa 0x15 0x0a 0x00 0x7c 0x5c 0xb7 0x6d 0x60 0x16 0x2e 0x00 0x84 0x7a 0x70 0x5c 0xae 0x0b 0x8b 0x3b 0x5f 0x12 0xfa 0x15 0x1e 0x00 0x60 0x7a 0xfa 0x15 0x0a 0x00 0x9c 0x7a 0x69 0x26 0x60 0x16 0x10 0x00 0x0a 0x4f 0x17 0x85 0x8b 0xe1 0xdb 0x23 0x22 0xa4 0xb6 0x4f 0x17 0x85 0xd3 0xa4 0x90 0x16 'L"f\  p\  (    #   O  k zX m O  . f\ mf\  ] $ _      zp\   ;_      O     #"  O      L"  f\  r jm  L"]      P ]   ] [ W@    P   P     2   L"2 f\  {;r ] #   p\      L"2 f\  . ] $ W@  ( ( ]   lX m   #zX m]   lX m ;f\ m]       L"2 f\  ] # -     |\ m` .  zp\   ;_     `z     zi&`    O     #"  O      '

// ================================================
// 0xe2d7: WORD 'CHAR>SCR' codep=0x4a4f parp=0xe2e4
// ================================================
// 0xe2e4: db 0x03 0x00 0x13 0xe2 0x0d 0x00 0x91 0xe2 0x08 0x00 0x55 0xe2 0x09 0x00 0x3b 0xe2 '          U   ; '

// ================================================
// 0xe2f4: WORD 'UNK_0xe2f6' codep=0x224c parp=0xe2f6
// ================================================

void UNK_0xe2f6() // UNK_0xe2f6
{
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  IPREV(); // IPREV
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) goto label4;
  _ask_LAST(); // ?LAST
  if (Pop() == 0) goto label5;
  INEXT(); // INEXT
  BEEP(); // BEEP
  goto label4;

  label5:
  UNK_0xe18d(); // UNK_0xe18d
  PAD(); // PAD
  WLINE_minus_D(); // WLINE-D

  label4:
  goto label2;

  label1:
  INEXT(); // INEXT
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _gt_(); // >
  if (Pop() == 0) goto label2;
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label3;
  IPREV(); // IPREV
  BEEP(); // BEEP
  goto label2;

  label3:
  UNK_0xe18d(); // UNK_0xe18d
  PAD(); // PAD
  WLINE_minus_U(); // WLINE-U

  label2:
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe34c: WORD 'UNK_0xe34e' codep=0x224c parp=0xe34e
// ================================================

void UNK_0xe34e() // UNK_0xe34e
{
  _ro_XYSCAN(); // (XYSCAN
  Push(pp_CTX); // CTX
  _plus__ex_(); // +!
  Push(-Pop()); // NEGATE
  DUP(); // DUP
  Push(pp_CTY); // CTY
  _plus__ex_(); // +!
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  UNK_0xe2f6(); // UNK_0xe2f6

  label1:
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(0); // 0
  MAX(); // MAX
  Push(0x0024);
  MIN(); // MIN
  DUP(); // DUP
  Push(pp_CTX); // CTX
  _ex_(); // !
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  Push(0); // 0
  MAX(); // MAX
  Push(cc__6); // 6
  MIN(); // MIN
  DUP(); // DUP
  Push(pp_CTY); // CTY
  _ex_(); // !
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
  _ask_TERMINAL(); // ?TERMINAL
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
  ON(); // ON
  RED(); // RED
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
  _ask_DUP(); // ?DUP
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
  CHAR_gt_SCR(); // CHAR>SCR

  label3:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xe41e: WORD '(/CAPT-LOG)' codep=0x224c parp=0xe42e
// ================================================

void _ro__slash_CAPT_minus_LOG_rc_() // (/CAPT-LOG)
{
  _star_SHIP(); // *SHIP
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
  BLACK(); // BLACK
  ERASE_minus_T(); // ERASE-T
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
  Push(pp__ro_THIS_minus_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}

// 0xe468: db 0x4c 0x22 0x60 0xe4 0xf2 0x79 0x84 0x7a 0x75 0x75 0x1d 0x63 0x92 0x6d 0xc9 0x79 0x90 0x16 'L"`  y zuu c m y  '

// ================================================
// 0xe47a: WORD 'UNK_0xe47c' codep=0x224c parp=0xe47c
// ================================================

void UNK_0xe47c() // UNK_0xe47c
{
  UNK_0xe462(); // UNK_0xe462
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_minus_I); // (THIS-I
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
  TEXT_minus_IN(); // TEXT-IN
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
  _star_EOL(); // *EOL
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
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(cc__7); // 7
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  WHITE(); // WHITE
  GREY1(); // GREY1
  DK_minus_GREE(); // DK-GREE
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
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
  _minus_(); // -
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
  Push(pp__ro_SCROLL); // (SCROLL
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp__ro_THIS_minus_I); // (THIS-I
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

// 0xe550: db 0x4c 0x22 0x84 0x7a 0x68 0xe4 0xc6 0xae 0xdb 0x23 0xe0 0xe4 0x22 0xa4 0xe0 0xe4 0x90 0x16 0x4c 0x22 0x9c 0x7a 0x7a 0xe4 0x60 0xe4 0xf2 0x79 0xc6 0xae 0xc9 0x79 0xdb 0x23 0xe0 0xe4 0x5a 0xa4 0xe0 0xe4 0x90 0x16 'L" zh    #  "     L" zz `  y   y #  Z     '

// ================================================
// 0xe57a: WORD 'TD-SCROLL' codep=0x4a4f parp=0xe588
// ================================================
// 0xe588: db 0x02 0x00 0x48 0x3a 0x01 0x00 0x52 0xe5 0xff 0xff 0x64 0xe5 0x4c 0x22 0x5d 0x17 0x38 0x00 0x20 0x0f 0x59 0x81 0xf2 0x79 0x99 0xae 0x92 0x6d 0xa8 0xae 0x92 0x6d 0xb7 0xae 0x5d 0x17 0x26 0x00 0x98 0x09 0xfd 0x6d 0xb7 0xae 0xf2 0x0e 0xea 0x6d 0x75 0x75 0xc9 0x79 0x2e 0x0f 0x21 0x5d 0x83 0x6d 0x90 0x16 0x4c 0x22 0x39 0x3f 0x08 0x45 0x4c 0x45 0x4d 0x45 0x4e 0x54 0x53 0x3c 0xde 0x95 0x49 0x50 0x6c 0x94 0xe5 0x90 0x61 0x02 0x7a 0x12 0x7a 0x75 0x75 0xb7 0x7b 0x91 0x75 0xc9 0x79 0x38 0xde 0xb7 0x6d 0x90 0x16 0x4c 0x22 0x50 0x6c 0xf2 0x79 0x12 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0a 0x00 0x12 0x7e 0x32 0x0e 0x75 0x75 0x3c 0xde 0x92 0x6d 0x91 0x75 0xc9 0x79 0xa8 0xae 0x02 0x7a 0x1e 0x75 0x5d 0x17 0x0b 0x00 0x5f 0x12 0x30 0x75 0x5d 0x17 0x0a 0x00 0x5f 0x12 0xf5 0x12 0x07 0x13 0xc9 0x79 0xfa 0x15 0x08 0x00 0x84 0x7a 0x60 0x16 0xde 0xff 0x90 0x16 0x4c 0x22 0x30 0x75 0xb4 0x0d 0x90 0x61 0x02 0x7a 0x12 0x7a 0x20 0x0f 0xa8 0xae 0x02 0x7a 0x30 0x75 0x50 0x0e 0x5f 0x12 0x1e 0x75 0x5d 0x17 0x1a 0x00 0x5f 0x12 0xf5 0x12 0xb7 0x74 0x38 0x0c 0x16 0x16 0xff 0xff 0xff 0xff 0x39 0x40 0x07 0x13 0xf5 0x12 0x3e 0x13 0xc9 0x79 0x41 0x0e 0xfa 0x15 0x08 0x00 0x75 0x75 0x1d 0x63 0x92 0x6d 0x84 0x7a 0x41 0x0e 0x60 0x7a 0x3e 0x13 0xfa 0x15 0xc2 0xff 0x90 0x0e 0x32 0x0e 0x91 0x75 0xc9 0x79 0x90 0x16 0x4c 0x22 0xb1 0xac 0xf2 0x79 0x31 0xe6 0x07 0x13 0xfa 0x15 0x2e 0x00 0x38 0xde 0xae 0x0b 0x07 0x13 0xfa 0x15 0x04 0x00 0xc4 0xe5 0x90 0x61 0x02 0x7a 0x12 0x7a 0xed 0xe5 0x75 0x75 0x91 0x75 0xc9 0x79 0x83 0xbb 0xdb 0x23 0xcd 0x0c 0x75 0x75 0x3c 0xde 0x95 0x49 0x94 0xe5 0x06 0x0e 0xdd 0x7b 0xc9 0x79 0x90 0x16 '  H:  R   d L"] 8   Y  y   m   m  ] &    m     muu y. !] m  L"9? ELEMENTS<  IPl   a z zuu { u y8  m  L"Pl y z]   ]    ~2 uu<  m u y   z u]   _ 0u]   _      y     z`     L"0u   a z z     z0uP _  u]   _    t8       9@    >  yA     uu c m zA `z>       2  u y  L"   y1     . 8            a z z  uu u y   #  uu<  I     { y  '

// ================================================
// 0xe6c7: WORD 'UNK_0xe6c9' codep=0x224c parp=0xe6c9
// ================================================

void UNK_0xe6c9() // UNK_0xe6c9
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  INST_minus_X(); // INST-X
  _2_at_(); // 2@
  SWAP(); // SWAP
  ICLOSE(); // ICLOSE
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_minus_(); // ?ICONS-
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
  UNK_0xe081(); // UNK_0xe081
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
  Push(pp_CONTEXT); // CONTEXT
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
  POINT_gt_I(); // POINT>I
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
  _ex_(); // !
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
  INST_minus_X(); // INST-X
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
  POINT_gt_I(); // POINT>I
  _at_ID(); // @ID
  Push(0x002b);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x00ff);
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  MIN(); // MIN
  DUP(); // DUP
  Push(pp_ELEM_minus_AM); // ELEM-AM
  _ex_(); // !
  Push(-Pop()); // NEGATE
  INST_minus_QT(); // INST-QT
  _plus__ex_(); // +!
  _at_INST_minus_S(); // @INST-S
  DUP(); // DUP
  Push(pp_UNK_0xe0d7); // UNK_0xe0d7
  _ex_(); // !
  Push(cc__6); // 6
  _eq_(); // =
  _at_IL(); // @IL
  _at_IH(); // @IH
  _gt_C_plus_S(); // >C+S
  if (Pop() == 0) goto label2;
  Push(pp_ELEM_minus_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  UNK_0xe081(); // UNK_0xe081
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  goto label4;

  label2:
  Push(cc__3); // 3
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  UNK_0xe081(); // UNK_0xe081
  Push(j); // I
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  Push(pp_UNK_0xe0d7); // UNK_0xe0d7
  Push(Read16(Pop())); // @
  UNK_0xe081(); // UNK_0xe081
  Push(j); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(pp_ELEM_minus_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  UNK_0xe081(); // UNK_0xe081
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(j); // I
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  LEAVE(); // LEAVE

  label3:
  j++;
  } while(j<jmax); // (LOOP) 0xffd2


  label4:
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
  _star_STARSH(); // *STARSH
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
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  Push(0x0031);
  _ex_INST_minus_S(); // !INST-S

  label1:
  ICLOSE(); // ICLOSE
  UNK_0xe6c9(); // UNK_0xe6c9
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
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
  UNK_0xe081(); // UNK_0xe081
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(j); // I
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label5;
  Push(0x001a);
  Push(j); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label6;
  Push(cc__6); // 6
  goto label7;

  label6:
  UNK_0xe081(); // UNK_0xe081
  Push(j); // I
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  C_at_(); // C@

  label7:
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  INST_minus_QT(); // INST-QT
  _ex_(); // !
  CI(); // CI
  ICLOSE(); // ICLOSE
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE

  label5:
  j++;
  } while(j<jmax); // (LOOP) 0xffbc

  UNK_0xe081(); // UNK_0xe081
  Push(cc__7); // 7
  Push(0); // 0
  FILL(); // FILL
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
  if (Pop() == 0) goto label3;
  Push(0x0030);
  _ex_INST_minus_S(); // !INST-S

  label3:
  IFIRST(); // IFIRST
  Push(0x000b);
  Push(0x0031);
  IFIND(); // IFIND
  if (Pop() == 0) goto label4;
  Push(0x000a);
  _ex_INST_minus_S(); // !INST-S

  label4:
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
  _minus_(); // -
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  R_gt_(); // R>
  POLY_minus_WI(); // POLY-WI
}


// ================================================
// 0xe905: WORD 'UNK_0xe907' codep=0x224c parp=0xe907
// ================================================

void UNK_0xe907() // UNK_0xe907
{
  BLUE(); // BLUE
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
  _ex_(); // !
  PRINT("VOLUME", 6); // (.")
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("VALUE", 5); // (.")
}


// ================================================
// 0xe96e: WORD 'UNK_0xe970' codep=0x224c parp=0xe970
// ================================================

void UNK_0xe970() // UNK_0xe970
{
  UNK_0xe48e(); // UNK_0xe48e
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_MOD(); // /MOD
  ICLOSE(); // ICLOSE
  UNK_0xe462(); // UNK_0xe462
  _gt_C_plus_S(); // >C+S
  TEXT_minus_TE(); // TEXT-TE
  Push(0x001a);
  Push(Pop() + Pop()); // +
  Push(cc__6); // 6
  Push(0x002e);
  FILL(); // FILL
  U_gt__do_(); // U>$
  TEXT_minus_TE(); // TEXT-TE
  Push(0x001e);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _minus_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  U_gt__do_(); // U>$
  Pop(); // DROP
  C_at_(); // C@
  TEXT_minus_TE(); // TEXT-TE
  Push(0x001f);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}

// 0xe9b8: db 0x4c 0x22 0x8c 0xe4 0xa9 0x74 0xae 0x0b 0xc9 0x79 0x89 0x12 0xfa 0x15 0x18 0x00 0x90 0x61 0x95 0x49 0x70 0x7a 0x60 0xe4 0xf2 0x79 0xda 0x7e 0xac 0x3b 0x21 0x5d 0x83 0x6d 0x91 0x75 0xc9 0x79 0x90 0x16 'L"   t   y       a Ipz`  y ~ ;!] m u y  '

// ================================================
// 0xe9e0: WORD 'UNK_0xe9e2' codep=0x224c parp=0xe9e2
// ================================================

void UNK_0xe9e2() // UNK_0xe9e2
{
  _ask_DUP(); // ?DUP
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
  _at_INST_minus_C(); // @INST-C
  ICLOSE(); // ICLOSE
  Push(0x001a);
  _eq_(); // =
  if (Pop() == 0) return;
  UNK_0xe970(); // UNK_0xe970
}

// 0xea12: db 0x4c 0x22 0x5d 0x17 0x27 0xc2 0xce 0x84 0x6f 0x4f 0x17 0x85 0x20 0x0f 0x8b 0x3b 0x51 0xa1 0xdc 0x1b 0x19 0x50 0x52 0x45 0x53 0x53 0x20 0x41 0x4e 0x59 0x20 0x4b 0x45 0x59 0x20 0x54 0x4f 0x20 0x43 0x4f 0x4e 0x54 0x49 0x4e 0x55 0x45 0x98 0x2a 0x38 0x0c 0x16 0x16 0x60 0xea 0x00 0x00 0x65 0x10 0x98 0x2a 0x38 0x0c 0x0d 0x40 0x46 0x40 0x1f 0xa9 0x3e 0x13 0xfa 0x15 0xf2 0xff 0xde 0x0d 0x90 0x16 0x4c 0x22 0x0a 0x4f 0xe7 0xe8 0x28 0xa5 0x42 0xe0 0x92 0x0c 0xfa 0x15 0x54 0x00 0x3a 0xe0 0x92 0x0c 0x5d 0x17 0x39 0x00 0x8d 0x54 0x76 0x6d 0x9b 0x54 0x76 0x6d 0x20 0x0f 0x3d 0x0f 0x51 0xa1 0x5d 0x17 0xbe 0x00 0x20 0x0f 0xb8 0x15 0x4a 0xe0 0x50 0x0e 0x72 0x0f 0xdb 0x23 0x5d 0x17 0x26 0x00 0xea 0x6d 0xdb 0x23 0x5d 0x17 0x26 0x00 0x8e 0x27 0x5d 0x17 0x26 0x00 0x7f 0x0e 0x92 0x0f 0x35 0x10 0xa5 0x29 0xe6 0x06 0x8c 0xa4 0x5d 0x17 0x26 0x00 0x5c 0x15 0xd4 0xff 0x8a 0x79 0x60 0x16 0x2e 0x00 0x2e 0x0f 0x73 0x3b 0x51 0xa1 0xdc 0x1b 0x23 0x54 0x48 0x49 0x53 0x20 0x41 0x52 0x54 0x49 0x46 0x41 0x43 0x54 0x20 0x48 0x41 0x53 0x20 0x4e 0x4f 0x54 0x20 0x42 0x45 0x45 0x4e 0x20 0x41 0x4e 0x41 0x4c 0x59 0x5a 0x45 0x44 0x12 0xea 0x90 0x16 'L"] '   oO     ;Q    PRESS ANY KEY TO CONTINUE *8   `   e  *8  @F@  >         L" O  ( B     T :   ] 9  Tvm Tvm  = Q ]       J P r  #] &  m #] &  '] &    5  )    ] & \    y` . . s;Q   #THIS ARTIFACT HAS NOT BEEN ANALYZED    '

// ================================================
// 0xeaf2: WORD 'UNK_0xeaf4' codep=0x224c parp=0xeaf4
// ================================================

void UNK_0xeaf4() // UNK_0xeaf4
{
  Push(0x000d);
  UNK_0xde74(); // UNK_0xde74
  Push(pp__ask_12); // ?12
  _ex_(); // !
  Push(pp_E_minus_USE); // E-USE
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  UNK_0xde74(); // UNK_0xde74
  if (Pop() == 0) goto label1;
  Push(Pop()>>1); // 2/

  label1:
  Push(pp__minus_END); // -END
  _ex_(); // !
}

// 0xeb12: db 0x4c 0x22 0x5d 0x17 0xab 0xc7 0xce 0x84 0xcb 0x53 0xae 0x0b 0x41 0x0e 0xc6 0x11 0x41 0x0e 0xa9 0x74 0x83 0x6d 0xc2 0x51 0xf2 0x79 0xd0 0xe0 0x83 0x6d 0xc9 0x79 0x41 0x0e 0x5d 0x17 0xf6 0xff 0xcd 0x10 0xc8 0x60 0x38 0x0c 0x65 0x10 0xc8 0x60 0xac 0x6d 0x5d 0x17 0x1a 0x00 0x30 0x75 0x59 0x81 0xf2 0x79 0xa9 0x74 0x76 0x6d 0x75 0x75 0xc9 0x79 0x50 0x6c 0xf2 0x79 0xf0 0x0d 0x37 0xbb 0xc9 0x79 0xcb 0x53 0xae 0x0b 0xfa 0x15 0x0e 0x00 0x6e 0xe9 0xb8 0xe9 0x89 0xe6 0x6e 0xe9 0x60 0x16 0x04 0x00 0xde 0x0d 0x5d 0x17 0x4a 0xbd 0xce 0x84 0x66 0xbf 0x90 0x16 0x4c 0x22 0x9a 0x74 0x02 0x7a 0x16 0xae 0xcd 0x0c 0x34 0xbc 0xc9 0x79 0x9c 0x67 0xcd 0x0c 0x5d 0x17 0x16 0xc2 0xce 0x84 0x12 0xea 0x90 0x16 0x4c 0x22 0x81 0xa1 0xb6 0x4f 0xa8 0x57 0x76 0x6d 0x80 0xeb 0x13 0x76 0xfa 0x15 0x10 0x00 0x12 0x7a 0x80 0xeb 0x84 0x7a 0x60 0x7a 0xfa 0x15 0xf8 0xff 0xc9 0x79 0x90 0x16 0x4c 0x22 0x5d 0x17 0xe0 0x01 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x35 0x00 0xc4 0x0f 0xf2 0x0e 0x5d 0x17 0x80 0x04 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x40 0x00 0xc4 0x0f 0xf2 0x0e 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x57 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x45 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x53 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x4e 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 0x4c 0x22 0xbe 0xeb 0x41 0x0e 0x41 0x0e 0x78 0x12 0xfa 0x15 0x04 0x00 0xc6 0x11 0x20 0x0f 0xe1 0x27 0x0a 0xec 0xdc 0x1b 0x03 0x20 0x2a 0x20 0x41 0x0e 0x41 0x0e 0x78 0x12 0xfa 0x15 0x04 0x00 0xc6 0x11 0x20 0x0f 0xe1 0x27 0xe6 0xeb 0x90 0x16 0x4c 0x22 0xd3 0xa4 0x6f 0x4f 0x17 0x85 0xe6 0x06 0xdc 0x1b 0x02 0x3a 0x20 0x28 0xa5 0x90 0x16 0x4c 0x22 0x0a 0x4f 0xe7 0xe8 0x20 0x0f 0x2e 0x0f 0x51 0xa1 0x39 0x3f 0x06 0x53 0x59 0x53 0x54 0x45 0x4d 0x5e 0xec 0xc1 0xe0 0x92 0x0c 0x20 0x0f 0xe1 0x27 0xdc 0x1b 0x01 0x2c 0xc6 0xe0 0x92 0x0c 0xb8 0x27 0x39 0x3f 0x06 0x50 0x4c 0x41 0x4e 0x45 0x54 0x5e 0xec 0xcb 0xe0 0x92 0x0c 0xb8 0x27 0x39 0x3f 0x08 0x4c 0x4f 0x43 0x41 0x54 0x49 0x4f 0x4e 0x5e 0xec 0xb7 0x74 0x38 0x0c 0xf2 0x0e 0x2e 0xec 0x39 0x3f 0x04 0x44 0x41 0x54 0x45 0x5e 0xec 0xb7 0xe0 0xae 0x0b 0xdb 0x23 0xc2 0xba 0xdb 0x23 0x5d 0x17 0x0a 0x00 0xe6 0x06 0x12 0xea 0x90 0x16 'L"]      S  A   A  t m Q y   m yA ]      `8 e  ` m]   0uY  y tvmuu yPl y  7  y S      n     n `     ] J   f   L" t z    4  y g  ]         L"   O Wvm   v     z   z`z     y  L"]     ]   ] 5     ]     ]   ] @       L"      x        W`      E`         L"      x        S`      N`         L"  A A x          '      * A A x          '    L"  oO       : (   L" O    . Q 9? SYSTEM^        '   ,     '9? PLANET^      '9? LOCATION^  t8   . 9? DATE^      #   #]         '

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

// 0xecf3: db 0x4c 0x22 0xb7 0x74 0x38 0x0c 0x16 0x16 0xff 0xff 0xff 0xff 0x39 0x40 0xfa 0x15 0x08 0x00 0x12 0xeb 0x60 0x16 0x04 0x00 0xdd 0xec 0x90 0x16 'L" t8       9@      `       '

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

void DO_minus_OPTION() // DO-OPTION
{
  Push(pp_UNK_0xed37); // UNK_0xed37
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xecdf(); // UNK_0xecdf
  goto label2;

  label1:
  _at_INST_minus_C(); // @INST-C
  _1STOPTION(); // 1STOPTION

  label2:
  Push(1); // 1
}

// 0xed61: db 0x4c 0x22 0xdc 0x1b 0x09 0x20 0x4a 0x45 0x54 0x54 0x49 0x53 0x4f 0x4e 0x20 0x0f 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x09 0x20 0x44 0x45 0x53 0x43 0x52 0x49 0x42 0x45 0x8c 0xa4 0x61 0xed 0xe7 0x0f 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x09 0x20 0x50 0x4c 0x41 0x59 0x42 0x41 0x43 0x4b 0x8c 0xa4 0xdc 0x1b 0x06 0x20 0x45 0x52 0x41 0x53 0x45 0x2e 0x0f 0x90 0x16 0x4c 0x22 0xb7 0x74 0x38 0x0c 0x16 0x16 0xff 0xff 0xff 0xff 0x39 0x40 0xfa 0x15 0x12 0x00 0xdc 0x1b 0x07 0x20 0x50 0x49 0x43 0x4b 0x55 0x50 0x20 0x0f 0x60 0x16 0x04 0x00 0x61 0xed 0x90 0x16 'L"    JETTISON    L"    DESCRIBE  a     L"    PLAYBACK      ERASE.   L" t8       9@        PICKUP  `   a   '

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
  _minus_(); // -
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  _at_INST_minus_C(); // @INST-C
  ITEM_minus_OPTIONS(); // ITEM-OPTIONS
  Push(pp_UNK_0xed3b); // UNK_0xed3b
  _ex_(); // !
  Push(pp_UNK_0xed37); // UNK_0xed37
  OFF(); // OFF
  BLUE(); // BLUE
  _ex_COLOR(); // !COLOR
  Push(cc__4); // 4
  Push(cc__6); // 6
  CTPOS_dot_(); // CTPOS.
  PRINT("^\ SELECT OPTION OR [ QUIT ]", 28); // (.")
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  _minus_(); // -
  UNK_0xe4ae(); // UNK_0xe4ae
}


// ================================================
// 0xee48: WORD 'UNK_0xee4a' codep=0x224c parp=0xee4a
// ================================================

void UNK_0xee4a() // UNK_0xee4a
{
  UNK_0xe48e(); // UNK_0xe48e
  _at_INST_minus_C(); // @INST-C
  ICLOSE(); // ICLOSE
  Push(0x000b);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xe48e(); // UNK_0xe48e
  BLACK(); // BLACK
  UNK_0xe4e2(); // UNK_0xe4e2
  UNK_0xe8e9(); // UNK_0xe8e9
  UNK_0xedf7(); // UNK_0xedf7

  label4:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xed37); // UNK_0xed37
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(0); // 0
  Push(pp_UNK_0xed3b); // UNK_0xed3b
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label7;
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xed37); // UNK_0xed37
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _minus_(); // -
  Push(Pop()+1); // 1+
  UNK_0xe4ae(); // UNK_0xe4ae
  DUP(); // DUP
  Push(pp_UNK_0xed37); // UNK_0xed37
  _ex_(); // !
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _minus_(); // -
  Push(Pop()+1); // 1+
  UNK_0xe4ae(); // UNK_0xe4ae
  goto label2;

  label7:
  Pop(); // DROP

  label2:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
  DO_minus_OPTION(); // DO-OPTION
  goto label6;

  label3:
  Push(0); // 0

  label6:
  Push(pp_FQUIT); // FQUIT
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_SCROLL_minus_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label5;
  UNK_0xe932(); // UNK_0xe932
  UNK_0xe51a(); // UNK_0xe51a

  label5:
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

void _ro__slash_ITEMS_rc_() // (/ITEMS)
{
  CTERASE(); // CTERASE
  UNK_0xe709(); // UNK_0xe709
  Push(pp_UNK_0xde36); // UNK_0xde36
  Push(Read16(Pop())); // @
  DUP(); // DUP
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Push(pp_UNK_0xde3a); // UNK_0xde3a
  _ex_(); // !
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
  MAKE_minus_SC(); // MAKE-SC
  if (Pop() == 0) goto label2;
  UNK_0xe823(); // UNK_0xe823

  label2:
  _star_STARSH(); // *STARSH
  GET_minus_BOX(); // GET-BOX
  _star_STARSH(); // *STARSH
  UNK_0xe49e(); // UNK_0xe49e
  UNK_0xe51a(); // UNK_0xe51a

  label4:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  TD_minus_SCROLL(); // TD-SCROLL
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
  UNK_0xee4a(); // UNK_0xee4a
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF

  label3:
  _ask_QUIT(); // ?QUIT
  Push(pp_SCROLL_minus_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  DELETE_minus_(); // DELETE-
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
  _ex_(); // !
  Push(1); // 1
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
}


// ================================================
// 0xefbd: WORD 'UNK_0xefbf' codep=0x224c parp=0xefbf
// ================================================

void UNK_0xefbf() // UNK_0xefbf
{
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_minus_CUR(); // SET-CUR
}


// ================================================
// 0xefc7: WORD '>DESCEND' codep=0x224c parp=0xefd4
// ================================================

void _gt_DESCEND() // >DESCEND
{
  UNK_0xefad(); // UNK_0xefad

  UNK_0x3f39("LAUNCH");
  _1BTN(); // 1BTN
  UNK_0xefbf(); // UNK_0xefbf
  Push(pp_CONTEXT); // CONTEXT
  OFF(); // OFF
  Push(0x3a48);
  Push(pp__i_EXTERN); // 'EXTERN
  _ex_(); // !
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  UNK_0xe054(); // UNK_0xe054
  C_at_(); // C@
  Push(0x00ef);
  Push(Pop() & Pop()); // AND
  UNK_0xe054(); // UNK_0xe054
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
  Push(pp_CONTEXT); // CONTEXT
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
  DUP(); // DUP
  if (Pop() == 0) goto label5;
  Push(0xc3e1);
  MODULE(); // MODULE
  Push(0xd184);
  MODULE(); // MODULE
  Push(0xc3ba);
  MODULE(); // MODULE
  Push(0xc3f3);
  Push(pp__i_EXTERN); // 'EXTERN
  _ex_(); // !

  label5:
  goto label6;

  label2:
  Push(0xd184);
  MODULE(); // MODULE
  Push(1); // 1

  label6:
  if (Pop() == 0) goto label3;
  UNK_0xefad(); // UNK_0xefad

  UNK_0x3f39("LAND  ");
  _1BTN(); // 1BTN
  UNK_0xefbf(); // UNK_0xefbf

  label3:
  Push(pp_STIME); // STIME
  _2_at_(); // 2@
  Push(0x03e8); Pust(0x0000);
  D_st_(); // D<
  if (Pop() == 0) goto label4;
  Push(pp__ask_SECURE); // ?SECURE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label4;
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp__ask_SECURE); // ?SECURE
  _ex_(); // !
  BEEP(); // BEEP

  label4:
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
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf0cd(); // UNK_0xf0cd
  Push(0); // 0
}


// ================================================
// 0xf12a: WORD '(/LAUNCH/LAND)' codep=0x224c parp=0xf13d
// ================================================

void _ro__slash_LAUNCH_slash_LAND_rc_() // (/LAUNCH/LAND)
{
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  DUP(); // DUP
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
  goto label5;

  label1:
  Push(1); // 1

  label5:
  if (Pop() == 0) goto label2;
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  Push(cc__5); // 5
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  UNK_0xf007(); // UNK_0xf007
  Push(0); // 0
  goto label4;

  label3:
  UNK_0xf0ea(); // UNK_0xf0ea

  label4:
  return;

  label2:
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
  UNK_0xe08e(); // UNK_0xe08e
  C_at_(); // C@
  Push(2); // 2
  _st_(); // <
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf191(); // UNK_0xf191
}


// ================================================
// 0xf1a9: WORD 'UNK_0xf1ab' codep=0x224c parp=0xf1ab
// ================================================

void UNK_0xf1ab() // UNK_0xf1ab
{
  UNK_0xe086(); // UNK_0xe086
  C_at_(); // C@
  Push(cc__3); // 3
  _gt_(); // >
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xf191(); // UNK_0xf191
}


// ================================================
// 0xf1bb: WORD 'UNK_0xf1bd' codep=0x224c parp=0xf1bd
// ================================================

void UNK_0xf1bd() // UNK_0xf1bd
{
  UNK_0xe061(); // UNK_0xe061
  Push(Read16(Pop())); // @
  DUP(); // DUP
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
  UNK_0xe069(); // UNK_0xe069
  Push(Read16(Pop())); // @
  DUP(); // DUP
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
  UNK_0xe071(); // UNK_0xe071
  C_at_(); // C@
  _0_gt_(); // 0>
  UNK_0xf191(); // UNK_0xf191
}


// ================================================
// 0xf23d: WORD 'UNK_0xf23f' codep=0x224c parp=0xf23f
// ================================================

void UNK_0xf23f() // UNK_0xf23f
{
  UNK_0xe079(); // UNK_0xe079
  C_at_(); // C@
  DUP(); // DUP
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
  UNK_0xe0af(); // UNK_0xe0af
  Push(0x000f);
  Push(cc_BL); // BL
  FILL(); // FILL
  Push(0x000f);
  Push(0xbd5b);
  MODULE(); // MODULE
  COUNT(); // COUNT
  UNK_0xe0af(); // UNK_0xe0af
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
  UNK_0xe096(); // UNK_0xe096
  C_at_(); // C@
  Push(0x03e8);
  U_star_(); // U*
  Push(0x0064); Pust(0x0000);
  DMAX(); // DMAX
  UNK_0xe0aa(); // UNK_0xe0aa
  C_at_(); // C@
  if (Pop() == 0) goto label1;
  DNEGATE(); // DNEGATE

  label1:
  Push(0xc5ca);
  MODULE(); // MODULE
  UNK_0xe0aa(); // UNK_0xe0aa
  C_at_(); // C@
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
  _star_OP(); // *OP
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
  INST_minus_X(); // INST-X
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
  INST_minus_X(); // INST-X
  D_ex_(); // D!
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  UNK_0xe0a5(); // UNK_0xe0a5
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
  UNK_0xe0aa(); // UNK_0xe0aa
  C_ex_(); // C!
}


// ================================================
// 0xf346: WORD 'UNK_0xf348' codep=0x224c parp=0xf348
// ================================================

void UNK_0xf348() // UNK_0xf348
{
  UNK_0xe0aa(); // UNK_0xe0aa
  C_at_(); // C@
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
  SAVE_minus_OV(); // SAVE-OV
  goto label2;

  label1:
  Push(pp_UNK_0xf18d); // UNK_0xf18d
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *

  label2:
  UNK_0xe096(); // UNK_0xe096
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
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  UNK_0xe09b(); // UNK_0xe09b
  _ex_(); // !
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(1); // 1
  INST_minus_QT(); // INST-QT
  _plus__ex_(); // +!
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  UNK_0xe0a0(); // UNK_0xe0a0
  _ex_(); // !
  UNK_0xf30e(); // UNK_0xf30e
  UNK_0xf348(); // UNK_0xf348
  UNK_0xf257(); // UNK_0xf257
  UNK_0xf292(); // UNK_0xf292
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp__ask_EVAL); // ?EVAL
  ON(); // ON
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
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  BIT(); // BIT
  DUP(); // DUP
  ICLOSE(); // ICLOSE
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xe0be(); // UNK_0xe0be
  C_at_(); // C@
  Push(Pop() & Pop()); // AND
  DUP(); // DUP
  ROT(); // ROT
  UNK_0xe0be(); // UNK_0xe0be
  C_at_(); // C@
  Push(Pop() | Pop()); // OR
  UNK_0xe0be(); // UNK_0xe0be
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

void _ro__slash_LOG_minus_PLAN_rc_() // (/LOG-PLAN)
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(pp__minus_AIN); // -AIN
  OFF(); // OFF
  Push(pp_CONTEXT); // CONTEXT
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
  goto label5;

  label2:
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label3;
  PRINT("RECOMMEND THIS PLANET FOR", 25); // (.")
  CTCR(); // CTCR
  PRINT("COLONIZATION? [N Y]", 19); // (.")
  Y_slash_N(); // Y/N
  CTCR(); // CTCR
  if (Pop() == 0) goto label4;
  UNK_0xf3d3(); // UNK_0xf3d3
  if (Pop() == 0) goto label4;
  Push(0xc5a8);
  MODULE(); // MODULE
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(pp_PORTDAT); // PORTDAT
  _ex_(); // !
  UNK_0xf3b2(); // UNK_0xf3b2

  label4:
  goto label5;

  label3:
  UNK_0xf0cd(); // UNK_0xf0cd

  label5:
  return;

  label1:
  UNK_0xf0cd(); // UNK_0xf0cd
}

// 0xf4ec: db 0x43 0x41 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x43 0x41 0x50 0x54 0x41 0x49 0x4e 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x43 0x31 0x33 0x36 0x35 0x44 0x4f 0x57 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x5f 0x31 0x32 0x38 0x30 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x53 0x54 0x50 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'CAP-VOC_________________________ for CAPTAIN -----------------)C1365DOWN---------------)_1280_____ for STP---------- '
  