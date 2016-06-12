// ====== OVERLAY 'PLSET-OV' ======
// store offset = 0xec00
// overlay size   = 0x0960

#include"cpu.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xec16  codep:0x2214 parp:0xec16 size:0x000a C-string:'UNK_0xec16'
// 1704:      UNK_0xec22  codep:0x73ea parp:0xec22 size:0x0006 C-string:'UNK_0xec22'
// 1705:      UNK_0xec2a  codep:0x73ea parp:0xec2a size:0x0006 C-string:'UNK_0xec2a'
// 1706:      UNK_0xec32  codep:0x73ea parp:0xec32 size:0x0006 C-string:'UNK_0xec32'
// 1707:      UNK_0xec3a  codep:0x73ea parp:0xec3a size:0x0006 C-string:'UNK_0xec3a'
// 1708:      UNK_0xec42  codep:0x73ea parp:0xec42 size:0x0006 C-string:'UNK_0xec42'
// 1709:      UNK_0xec4a  codep:0x73ea parp:0xec4a size:0x0006 C-string:'UNK_0xec4a'
// 1710:      UNK_0xec52  codep:0x73ea parp:0xec52 size:0x0006 C-string:'UNK_0xec52'
// 1711:      UNK_0xec5a  codep:0x73ea parp:0xec5a size:0x0006 C-string:'UNK_0xec5a'
// 1712:      UNK_0xec62  codep:0x73ea parp:0xec62 size:0x0006 C-string:'UNK_0xec62'
// 1713:      UNK_0xec6a  codep:0x73ea parp:0xec6a size:0x0006 C-string:'UNK_0xec6a'
// 1714:      UNK_0xec72  codep:0x73ea parp:0xec72 size:0x0006 C-string:'UNK_0xec72'
// 1715:      UNK_0xec7a  codep:0x73ea parp:0xec7a size:0x0006 C-string:'UNK_0xec7a'
// 1716:      UNK_0xec82  codep:0x73ea parp:0xec82 size:0x0006 C-string:'UNK_0xec82'
// 1717:      UNK_0xec8a  codep:0x73ea parp:0xec8a size:0x0006 C-string:'UNK_0xec8a'
// 1718:      UNK_0xec92  codep:0x73ea parp:0xec92 size:0x001d C-string:'UNK_0xec92'
// 1719:      UNK_0xecb1  codep:0x224c parp:0xecb1 size:0x000a C-string:'UNK_0xecb1'
// 1720:      UNK_0xecbd  codep:0x224c parp:0xecbd size:0x000a C-string:'UNK_0xecbd'
// 1721:      UNK_0xecc9  codep:0x224c parp:0xecc9 size:0x0014 C-string:'UNK_0xecc9'
// 1722:      UNK_0xecdf  codep:0x224c parp:0xecdf size:0x0006 C-string:'UNK_0xecdf'
// 1723:      UNK_0xece7  codep:0x224c parp:0xece7 size:0x000a C-string:'UNK_0xece7'
// 1724:      UNK_0xecf3  codep:0x744d parp:0xecf3 size:0x0003 C-string:'UNK_0xecf3'
// 1725:      UNK_0xecf8  codep:0x224c parp:0xecf8 size:0x0034 C-string:'UNK_0xecf8'
// 1726:      UNK_0xed2e  codep:0x224c parp:0xed2e size:0x005e C-string:'UNK_0xed2e'
// 1727:      UNK_0xed8e  codep:0x224c parp:0xed8e size:0x001a C-string:'UNK_0xed8e'
// 1728:         LO-MASS  codep:0xeca2 parp:0xedb4 size:0x0010 C-string:'LO_dash_MASS'
// 1729:         HI-MASS  codep:0xeca2 parp:0xedd0 size:0x0010 C-string:'HI_dash_MASS'
// 1730:      UNK_0xede2  codep:0x224c parp:0xede2 size:0x0014 C-string:'UNK_0xede2'
// 1731:      UNK_0xedf8  codep:0x224c parp:0xedf8 size:0x002e C-string:'UNK_0xedf8'
// 1732:      UNK_0xee28  codep:0x224c parp:0xee28 size:0x001c C-string:'UNK_0xee28'
// 1733:      UNK_0xee46  codep:0x224c parp:0xee46 size:0x004a C-string:'UNK_0xee46'
// 1734:      UNK_0xee92  codep:0x224c parp:0xee92 size:0x0054 C-string:'UNK_0xee92'
// 1735:      UNK_0xeee8  codep:0x224c parp:0xeee8 size:0x0090 C-string:'UNK_0xeee8'
// 1736:      UNK_0xef7a  codep:0x224c parp:0xef7a size:0x000e C-string:'UNK_0xef7a'
// 1737:      UNK_0xef8a  codep:0x224c parp:0xef8a size:0x005e C-string:'UNK_0xef8a'
// 1738:      UNK_0xefea  codep:0x224c parp:0xefea size:0x0030 C-string:'UNK_0xefea'
// 1739:      UNK_0xf01c  codep:0x224c parp:0xf01c size:0x0020 C-string:'UNK_0xf01c'
// 1740:      UNK_0xf03e  codep:0x224c parp:0xf03e size:0x002e C-string:'UNK_0xf03e'
// 1741:      UNK_0xf06e  codep:0x224c parp:0xf06e size:0x0016 C-string:'UNK_0xf06e'
// 1742:      UNK_0xf086  codep:0x224c parp:0xf086 size:0x000c C-string:'UNK_0xf086'
// 1743:      UNK_0xf094  codep:0x224c parp:0xf094 size:0x000e C-string:'UNK_0xf094'
// 1744:        SUBHYDRO  codep:0x1d29 parp:0xf0af size:0x0005 C-string:'SUBHYDRO'
// 1745:        TEMPHYDR  codep:0x1d29 parp:0xf0c1 size:0x0007 C-string:'TEMPHYDR'
// 1746:        INFHYDRO  codep:0x1d29 parp:0xf0d5 size:0x0007 C-string:'INFHYDRO'
// 1747:         SUBATMO  codep:0x1d29 parp:0xf0e8 size:0x0005 C-string:'SUBATMO'
// 1748:        TEMPATMO  codep:0x1d29 parp:0xf0fa size:0x0009 C-string:'TEMPATMO'
// 1749:         INFATMO  codep:0x1d29 parp:0xf10f size:0x0007 C-string:'INFATMO'
// 1750:      UNK_0xf118  codep:0x224c parp:0xf118 size:0x000e C-string:'UNK_0xf118'
// 1751:      UNK_0xf128  codep:0x224c parp:0xf128 size:0x0038 C-string:'UNK_0xf128'
// 1752:      UNK_0xf162  codep:0x224c parp:0xf162 size:0x002a C-string:'UNK_0xf162'
// 1753:      UNK_0xf18e  codep:0x224c parp:0xf18e size:0x0038 C-string:'UNK_0xf18e'
// 1754:      UNK_0xf1c8  codep:0x224c parp:0xf1c8 size:0x001c C-string:'UNK_0xf1c8'
// 1755:      UNK_0xf1e6  codep:0x224c parp:0xf1e6 size:0x004c C-string:'UNK_0xf1e6'
// 1756:      UNK_0xf234  codep:0x224c parp:0xf234 size:0x0018 C-string:'UNK_0xf234'
// 1757:      UNK_0xf24e  codep:0x224c parp:0xf24e size:0x0030 C-string:'UNK_0xf24e'
// 1758:      UNK_0xf280  codep:0x224c parp:0xf280 size:0x002e C-string:'UNK_0xf280'
// 1759:            RUGS  codep:0x1d29 parp:0xf2b7 size:0x0020 C-string:'RUGS'
// 1760:      UNK_0xf2d9  codep:0x224c parp:0xf2d9 size:0x0012 C-string:'UNK_0xf2d9'
// 1761:            SETC  codep:0x224c parp:0xf2f4 size:0x0036 C-string:'SETC'
// 1762:          CLIST1  codep:0x1d29 parp:0xf335 size:0x0014 C-string:'CLIST1'
// 1763:          CLIST2  codep:0x1d29 parp:0xf354 size:0x0014 C-string:'CLIST2'
// 1764:          CLIST3  codep:0x1d29 parp:0xf373 size:0x002a C-string:'CLIST3'
// 1765:          (SAND)  codep:0x1d29 parp:0xf3a8 size:0x009e C-string:'_ro_SAND_rc_'
// 1766:        (TERRAIN  codep:0x4a4f parp:0xf453 size:0x0018 C-string:'_ro_TERRAIN'
// 1767:      UNK_0xf46d  codep:0x224c parp:0xf46d size:0x0008 C-string:'UNK_0xf46d'
// 1768:        PLAN-RUL  codep:0x224c parp:0xf482 size:0x0000 C-string:'PLAN_dash_RUL'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char SUBHYDRO[5] = {0x01, 0x02, 0x03, 0x04, 0x00}; // SUBHYDRO
unsigned char TEMPHYDR[7] = {0x05, 0x06, 0x07, 0x08, 0x00, 0x05, 0x05}; // TEMPHYDR
unsigned char INFHYDRO[7] = {0x09, 0x0a, 0x0b, 0x0c, 0x07, 0x0d, 0x00}; // INFHYDRO
unsigned char SUBATMO[5] = {0x0e, 0x0c, 0x07, 0x06, 0x00}; // SUBATMO
unsigned char TEMPATMO[9] = {0x0f, 0x10, 0x11, 0x0f, 0x12, 0x13, 0x14, 0x00, 0x0f}; // TEMPATMO
unsigned char INFATMO[7] = {0x0e, 0x15, 0x16, 0x0c, 0x07, 0x0d, 0x00}; // INFATMO
unsigned char RUGS[32] = {0x01, 0x00, 0x00, 0xe9, 0x01, 0x00, 0x15, 0xe9, 0x01, 0x00, 0x04, 0xc7, 0x01, 0x00, 0x2b, 0xe9, 0x01, 0x00, 0x2c, 0xd9, 0x01, 0x00, 0x00, 0xd0, 0x01, 0x00, 0xa4, 0xce, 0x01, 0x00, 0xdc, 0xcf}; // RUGS
unsigned char CLIST1[20] = {0x01, 0x00, 0x41, 0xe5, 0x01, 0x00, 0xce, 0xe7, 0x01, 0x00, 0x00, 0xe8, 0x01, 0x00, 0x2d, 0xe8, 0x01, 0x00, 0x56, 0xe8}; // CLIST1
unsigned char CLIST2[20] = {0x01, 0x00, 0x64, 0xe5, 0x01, 0x00, 0x9a, 0xe8, 0x01, 0x00, 0xfc, 0xe4, 0x01, 0x00, 0xca, 0xe3, 0x01, 0x00, 0x83, 0xe8}; // CLIST2
unsigned char CLIST3[42] = {0x01, 0x00, 0x53, 0xe5, 0x01, 0x00, 0x18, 0xe8, 0x01, 0x00, 0x43, 0xe8, 0x01, 0x00, 0x6f, 0xe8, 0x01, 0x00, 0x64, 0xe5, 0x4c, 0x22, 0x16, 0x16, 0xa9, 0xe6, 0x01, 0x00, 0xf6, 0x53, 0x92, 0x6d, 0x33, 0xf3, 0x18, 0xf3, 0xe7, 0x53, 0x92, 0x6d, 0x90, 0x16}; // CLIST3
unsigned char _ro_SAND_rc_[158] = {0x01, 0x00, 0x24, 0xe7, 0x01, 0x00, 0x3a, 0xe7, 0x01, 0x00, 0x69, 0xe7, 0x01, 0x00, 0x51, 0xe7, 0x4c, 0x22, 0x2b, 0x54, 0xae, 0x0b, 0xfa, 0x15, 0x3a, 0x00, 0x71, 0xf3, 0x18, 0xf3, 0xe7, 0x53, 0x92, 0x6d, 0x2e, 0x0f, 0x5d, 0x17, 0x64, 0x00, 0xd8, 0x4a, 0x5d, 0x17, 0x1f, 0x00, 0x46, 0x12, 0xfa, 0x15, 0x16, 0x00, 0x20, 0x0f, 0x7b, 0x3b, 0xd8, 0x4a, 0x05, 0x10, 0x05, 0x10, 0xa6, 0xf3, 0x72, 0x0f, 0x38, 0x0c, 0x60, 0x16, 0x08, 0x00, 0x16, 0x16, 0x90, 0xe6, 0x01, 0x00, 0x60, 0x16, 0x0e, 0x00, 0x16, 0x16, 0x5e, 0xe6, 0x01, 0x00, 0x58, 0x51, 0xe7, 0x53, 0x92, 0x6d, 0xf6, 0x53, 0x92, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0x52, 0xf3, 0x18, 0xf3, 0x13, 0x54, 0x92, 0x6d, 0xb8, 0xf3, 0x90, 0x16, 0x4c, 0x22, 0x16, 0x16, 0xd0, 0xe6, 0x01, 0x00, 0xf6, 0x53, 0x92, 0x6d, 0x16, 0x16, 0xfa, 0xe6, 0x01, 0x00, 0xe7, 0x53, 0x92, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0x16, 0x16, 0x97, 0xe7, 0x01, 0x00, 0xf6, 0x53, 0x92, 0x6d, 0xb8, 0x48, 0xe7, 0x53, 0x92, 0x6d, 0x90, 0x16}; // (SAND)

const unsigned short int cc_UNK_0xec16 = 0x0020; // UNK_0xec16


// 0xec12: db 0x8b 0x00 '  '

// ================================================
// 0xec14: WORD 'UNK_0xec16' codep=0x2214 parp=0xec16
// ================================================
// 0xec16: db 0x20 0x00 0x14 0x22 0x43 0x00 0x14 0x22 0x44 0x00 '   "C  "D '

// ================================================
// 0xec20: WORD 'UNK_0xec22' codep=0x73ea parp=0xec22
// ================================================
// 0xec22: db 0x20 0x0c 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec28: WORD 'UNK_0xec2a' codep=0x73ea parp=0xec2a
// ================================================
// 0xec2a: db 0x20 0x0d 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec30: WORD 'UNK_0xec32' codep=0x73ea parp=0xec32
// ================================================
// 0xec32: db 0x20 0x0e 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec38: WORD 'UNK_0xec3a' codep=0x73ea parp=0xec3a
// ================================================
// 0xec3a: db 0x20 0x09 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec40: WORD 'UNK_0xec42' codep=0x73ea parp=0xec42
// ================================================
// 0xec42: db 0x20 0x00 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec48: WORD 'UNK_0xec4a' codep=0x73ea parp=0xec4a
// ================================================
// 0xec4a: db 0x20 0x02 0x02 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec50: WORD 'UNK_0xec52' codep=0x73ea parp=0xec52
// ================================================
// 0xec52: db 0x20 0x04 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec58: WORD 'UNK_0xec5a' codep=0x73ea parp=0xec5a
// ================================================
// 0xec5a: db 0x20 0x01 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec60: WORD 'UNK_0xec62' codep=0x73ea parp=0xec62
// ================================================
// 0xec62: db 0x20 0x0f 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec68: WORD 'UNK_0xec6a' codep=0x73ea parp=0xec6a
// ================================================
// 0xec6a: db 0x20 0x10 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec70: WORD 'UNK_0xec72' codep=0x73ea parp=0xec72
// ================================================
// 0xec72: db 0x20 0x11 0x02 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec78: WORD 'UNK_0xec7a' codep=0x73ea parp=0xec7a
// ================================================
// 0xec7a: db 0x20 0x13 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec80: WORD 'UNK_0xec82' codep=0x73ea parp=0xec82
// ================================================
// 0xec82: db 0x20 0x14 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec88: WORD 'UNK_0xec8a' codep=0x73ea parp=0xec8a
// ================================================
// 0xec8a: db 0x20 0x15 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec90: WORD 'UNK_0xec92' codep=0x73ea parp=0xec92
// ================================================
// 0xec92: db 0x43 0x07 0x08 0x1c 0xcd 0x69 0x4c 0x22 0x4f 0x06 0x20 0x0f 0x93 0x1f 0xfa 0x1b 'C    iL"O       '
// 0xeca2: call   1649
// 0xeca5: db 0x7f 0x0e 0x72 0x0f 0x72 0x0f 0xae 0x0b 0x90 0x16 ' r r     '

// ================================================
// 0xecaf: WORD 'UNK_0xecb1' codep=0x224c parp=0xecb1
// ================================================

void UNK_0xecb1() // UNK_0xecb1
{
  Push(0); // 0
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xecbb: WORD 'UNK_0xecbd' codep=0x224c parp=0xecbd
// ================================================

void UNK_0xecbd() // UNK_0xecbd
{
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xecc7: WORD 'UNK_0xecc9' codep=0x224c parp=0xecc9
// ================================================

void UNK_0xecc9() // UNK_0xecc9
{
  _gt_R(); // >R
  Push(Pop()+1); // 1+
  OVER(); // OVER
  _dash_(); // -
  R_gt_(); // R>
  Push(0x0100);
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xecdd: WORD 'UNK_0xecdf' codep=0x224c parp=0xecdf
// ================================================

void UNK_0xecdf() // UNK_0xecdf
{
  UNK_0xecb1(); // UNK_0xecb1
  _ro_SLIPPE(); // (SLIPPE
}


// ================================================
// 0xece5: WORD 'UNK_0xece7' codep=0x224c parp=0xece7
// ================================================

void UNK_0xece7() // UNK_0xece7
{

  label1:
  UNK_0xecdf(); // UNK_0xecdf
  if (Pop() == 0) goto label1;
  UNK_0xecc9(); // UNK_0xecc9
}


// ================================================
// 0xecf1: WORD 'UNK_0xecf3' codep=0x744d parp=0xecf3
// ================================================
// 0xecf3: db 0x17 0x11 0x01 '   '

// ================================================
// 0xecf6: WORD 'UNK_0xecf8' codep=0x224c parp=0xecf8
// ================================================

void UNK_0xecf8() // UNK_0xecf8
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(cc_UNK_0xec16); // UNK_0xec16
  Push(0); // 0
  IFIND(); // IFIND
  Pop(); // DROP
  Push(0); // 0

  label2:
  _at_INST_dash_C(); // @INST-C
  Push(cc_UNK_0xec16); // UNK_0xec16
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  INEXT(); // INEXT
  goto label2;
}


// ================================================
// 0xed2c: WORD 'UNK_0xed2e' codep=0x224c parp=0xed2e
// ================================================

void UNK_0xed2e() // UNK_0xed2e
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  UNK_0xecf8(); // UNK_0xecf8
  Push(0); // 0
  ICLOSE(); // ICLOSE
  UNK_0xecf3(); // UNK_0xecf3
  C_at_(); // C@
  Push(cc__9); // 9
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  DUP(); // DUP
  Push(2); // 2
  MOD(); // MOD
  if (Pop() == 0) goto label2;
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(cc__3); // 3
  PICK(); // PICK
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Push(i); // I
  LEAVE(); // LEAVE

  label3:
  SWAP(); // SWAP

  label2:
  Push(Pop()>>1); // 2/
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Pop(); // DROP
  _gt_R(); // >R
  Pop(); Pop();// 2DROP
  R_gt_(); // R>
  ICLOSE(); // ICLOSE
  return;

  label1:
  _gt_C_plus_S(); // >C+S
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed8c: WORD 'UNK_0xed8e' codep=0x224c parp=0xed8e
// ================================================

void UNK_0xed8e() // UNK_0xed8e
{
  UNK_0xed2e(); // UNK_0xed2e
  Push(pp_GLOBALS); // GLOBALS
  _ex_(); // !
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  _ex_XYSEED(); // !XYSEED
}


// ================================================
// 0xeda8: WORD 'LO-MASS' codep=0xeca2 parp=0xedb4
// ================================================
// 0xedb4: db 0x00 0x00 0x01 0x00 0x32 0x00 0x5a 0x00 0x6e 0x00 0xe8 0x03 0x65 0x00 0x64 0x00 '    2 Z n   e d '

// ================================================
// 0xedc4: WORD 'HI-MASS' codep=0xeca2 parp=0xedd0
// ================================================
// 0xedd0: db 0x00 0x00 0x32 0x00 0x5a 0x00 0x6e 0x00 0xe8 0x03 0x10 0x27 0x66 0x00 0x65 0x00 '  2 Z n    'f e '

// ================================================
// 0xede0: WORD 'UNK_0xede2' codep=0x224c parp=0xede2
// ================================================

void UNK_0xede2() // UNK_0xede2
{
  UNK_0xec42(); // UNK_0xec42
  C_at_(); // C@
  DUP(); // DUP
  LO_dash_MASS(); // LO-MASS
  SWAP(); // SWAP
  HI_dash_MASS(); // HI-MASS
  RRND(); // RRND
  UNK_0xec4a(); // UNK_0xec4a
  _ex_(); // !
}


// ================================================
// 0xedf6: WORD 'UNK_0xedf8' codep=0x224c parp=0xedf8
// ================================================

void UNK_0xedf8() // UNK_0xedf8
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  Push(0x007d);
  _dash_(); // -
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
  Push(0x0064);
  _dash_(); // -
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(0); // 0
  D_plus_(); // D+
  SQRT(); // SQRT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee26: WORD 'UNK_0xee28' codep=0x224c parp=0xee28
// ================================================

void UNK_0xee28() // UNK_0xee28
{

  label2:
  _2DUP(); // 2DUP
  RRND(); // RRND
  DUP(); // DUP
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  goto label2;

  label1:
  _gt_R(); // >R
  Pop(); Pop();// 2DROP
  R_gt_(); // R>
}


// ================================================
// 0xee44: WORD 'UNK_0xee46' codep=0x224c parp=0xee46
// ================================================

void UNK_0xee46() // UNK_0xee46
{
  Push(1); // 1
  UNK_0xedf8(); // UNK_0xedf8
  Push(0x000a);
  _slash_(); // /
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  Push(0x0017);
  MIN(); // MIN
  _2DUP(); // 2DUP
  UNK_0xee28(); // UNK_0xee28
  UNK_0xec22(); // UNK_0xec22
  C_ex_(); // C!
  _2DUP(); // 2DUP
  UNK_0xee28(); // UNK_0xee28
  UNK_0xec2a(); // UNK_0xec2a
  C_ex_(); // C!
  UNK_0xee28(); // UNK_0xee28
  UNK_0xec32(); // UNK_0xec32
  C_ex_(); // C!
  _at_INST_dash_S(); // @INST-S
  Push(0x0017);
  _eq_(); // =
  if (Pop() == 0) return;
  Push(cc__6); // 6
  DUP(); // DUP
  DUP(); // DUP
  UNK_0xec22(); // UNK_0xec22
  C_ex_(); // C!
  UNK_0xec2a(); // UNK_0xec2a
  C_ex_(); // C!
  UNK_0xec32(); // UNK_0xec32
  C_ex_(); // C!
}


// ================================================
// 0xee90: WORD 'UNK_0xee92' codep=0x224c parp=0xee92
// ================================================

void UNK_0xee92() // UNK_0xee92
{
  UNK_0xec4a(); // UNK_0xec4a
  Push(Read16(Pop())); // @
  Push(0x0046);
  _slash_(); // /
  Push(cc__5); // 5
  MIN(); // MIN
  DUP(); // DUP
  Push(0); // 0
  Push(cc__5); // 5
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  UNK_0xecbd(); // UNK_0xecbd
  Push(0x0032);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  DUP(); // DUP
  Push(2); // 2
  Push(cc__6); // 6
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label2;
  UNK_0xecbd(); // UNK_0xecbd
  Push(0x0032);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Push(Pop()-1); // 1-

  label2:
  UNK_0xec52(); // UNK_0xec52
  C_at_(); // C@
  if (Pop() == 0) goto label3;
  Push(1); // 1
  MAX(); // MAX

  label3:
  UNK_0xec7a(); // UNK_0xec7a
  C_ex_(); // C!
}


// ================================================
// 0xeee6: WORD 'UNK_0xeee8' codep=0x224c parp=0xeee8
// ================================================

void UNK_0xeee8() // UNK_0xeee8
{
  Push(0x004d);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(1); // 1
  return;

  label1:
  Push(0x004b);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(2); // 2
  return;

  label2:
  Push(0x0047);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  Push(cc__3); // 3
  return;

  label3:
  Push(0x0046);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  Push(cc__4); // 4
  return;

  label4:
  Push(0x0041);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label5;
  Pop(); // DROP
  Push(cc__5); // 5
  return;

  label5:
  Push(0x0042);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label6;
  Pop(); // DROP
  Push(cc__6); // 6
  return;

  label6:
  Push(0x004f);
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label7;
  Pop(); // DROP
  Push(cc__7); // 7
  return;

  label7:
  Pop(); // DROP
}


// ================================================
// 0xef78: WORD 'UNK_0xef7a' codep=0x224c parp=0xef7a
// ================================================

void UNK_0xef7a() // UNK_0xef7a
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_S(); // @INST-S
  UNK_0xeee8(); // UNK_0xeee8
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef88: WORD 'UNK_0xef8a' codep=0x224c parp=0xef8a
// ================================================

void UNK_0xef8a() // UNK_0xef8a
{
  Push(cc__dash_2); // -2
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(cc__4); // 4
  return;

  label1:
  Push(cc__dash_1); // -1
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(cc__3); // 3
  return;

  label2:
  Push(0); // 0
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  Push(2); // 2
  return;

  label3:
  Push(1); // 1
  OVER(); // OVER
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  Push(1); // 1
  return;

  label4:
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label5;
  Push(cc__5); // 5
  goto label6;

  label5:
  Push(0); // 0

  label6:
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xefe8: WORD 'UNK_0xefea' codep=0x224c parp=0xefea
// ================================================

void UNK_0xefea() // UNK_0xefea
{
  UNK_0xed2e(); // UNK_0xed2e
  DUP(); // DUP
  UNK_0xef7a(); // UNK_0xef7a
  _dash_(); // -
  UNK_0xef8a(); // UNK_0xef8a
  SWAP(); // SWAP
  UNK_0xec7a(); // UNK_0xec7a
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(cc__4); // 4
  goto label2;

  label1:
  Push(2); // 2

  label2:
  _dash_(); // -
  UNK_0xef7a(); // UNK_0xef7a
  _dash_(); // -
  UNK_0xef8a(); // UNK_0xef8a
  UNK_0xec6a(); // UNK_0xec6a
  C_ex_(); // C!
  UNK_0xec62(); // UNK_0xec62
  C_ex_(); // C!
}


// ================================================
// 0xf01a: WORD 'UNK_0xf01c' codep=0x224c parp=0xf01c
// ================================================

void UNK_0xf01c() // UNK_0xf01c
{
  UNK_0xec7a(); // UNK_0xec7a
  C_at_(); // C@
  Push(cc__4); // 4
  MIN(); // MIN
  UNK_0xecbd(); // UNK_0xecbd
  Push(0x0032);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(Pop()-1); // 1-

  label1:
  Push(0); // 0
  MAX(); // MAX
  UNK_0xec72(); // UNK_0xec72
  C_ex_(); // C!
}


// ================================================
// 0xf03c: WORD 'UNK_0xf03e' codep=0x224c parp=0xf03e
// ================================================

void UNK_0xf03e() // UNK_0xf03e
{
  UNK_0xec4a(); // UNK_0xec4a
  Push(Read16(Pop())); // @
  Push(0x0064);
  _slash_(); // /
  Push(cc__6); // 6
  MIN(); // MIN
  Push(1); // 1
  MAX(); // MAX
  Push(cc__6); // 6
  SWAP(); // SWAP
  _dash_(); // -
  DUP(); // DUP
  UNK_0xec8a(); // UNK_0xec8a
  C_ex_(); // C!
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  Push(0x000d);
  MIN(); // MIN
  UNK_0xec82(); // UNK_0xec82
  C_ex_(); // C!
}


// ================================================
// 0xf06c: WORD 'UNK_0xf06e' codep=0x224c parp=0xf06e
// ================================================

void UNK_0xf06e() // UNK_0xf06e
{
  Push(0x001e);
  Push(pp_PEAK); // PEAK
  _ex_(); // !
  Push(0); // 0
  Push(0x00ff);
  UNK_0xece7(); // UNK_0xece7
  UNK_0xec3a(); // UNK_0xec3a
  C_ex_(); // C!
}


// ================================================
// 0xf084: WORD 'UNK_0xf086' codep=0x224c parp=0xf086
// ================================================

void UNK_0xf086() // UNK_0xf086
{
  UNK_0xee46(); // UNK_0xee46
  UNK_0xee92(); // UNK_0xee92
  UNK_0xf01c(); // UNK_0xf01c
  UNK_0xf03e(); // UNK_0xf03e
  UNK_0xefea(); // UNK_0xefea
}


// ================================================
// 0xf092: WORD 'UNK_0xf094' codep=0x224c parp=0xf094
// ================================================

void UNK_0xf094() // UNK_0xf094
{
  Push(0); // 0
  UNK_0xec52(); // UNK_0xec52
  C_ex_(); // C!
  UNK_0xede2(); // UNK_0xede2
  UNK_0xf06e(); // UNK_0xf06e
  UNK_0xf086(); // UNK_0xf086
}


// ================================================
// 0xf0a2: WORD 'SUBHYDRO' codep=0x1d29 parp=0xf0af
// ================================================
// 0xf0af: db 0x01 0x02 0x03 0x04 0x00 '     '

// ================================================
// 0xf0b4: WORD 'TEMPHYDR' codep=0x1d29 parp=0xf0c1
// ================================================
// 0xf0c1: db 0x05 0x06 0x07 0x08 0x00 0x05 0x05 '       '

// ================================================
// 0xf0c8: WORD 'INFHYDRO' codep=0x1d29 parp=0xf0d5
// ================================================
// 0xf0d5: db 0x09 0x0a 0x0b 0x0c 0x07 0x0d 0x00 '       '

// ================================================
// 0xf0dc: WORD 'SUBATMO' codep=0x1d29 parp=0xf0e8
// ================================================
// 0xf0e8: db 0x0e 0x0c 0x07 0x06 0x00 '     '

// ================================================
// 0xf0ed: WORD 'TEMPATMO' codep=0x1d29 parp=0xf0fa
// ================================================
// 0xf0fa: db 0x0f 0x10 0x11 0x0f 0x12 0x13 0x14 0x00 0x0f '         '

// ================================================
// 0xf103: WORD 'INFATMO' codep=0x1d29 parp=0xf10f
// ================================================
// 0xf10f: db 0x0e 0x15 0x16 0x0c 0x07 0x0d 0x00 '       '

// ================================================
// 0xf116: WORD 'UNK_0xf118' codep=0x224c parp=0xf118
// ================================================

void UNK_0xf118() // UNK_0xf118
{
  UNK_0xec6a(); // UNK_0xec6a
  C_at_(); // C@
  UNK_0xec62(); // UNK_0xec62
  C_at_(); // C@
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
}


// ================================================
// 0xf126: WORD 'UNK_0xf128' codep=0x224c parp=0xf128
// ================================================

void UNK_0xf128() // UNK_0xf128
{
  UNK_0xf118(); // UNK_0xf118
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  Push(pp_SUBHYDRO); // SUBHYDRO
  goto label3;

  label1:
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(0); // 0
  Push(cc__7); // 7
  RRND(); // RRND
  Push(pp_INFHYDRO); // INFHYDRO
  goto label3;

  label2:
  Push(0); // 0
  Push(cc__7); // 7
  RRND(); // RRND
  Push(pp_TEMPHYDR); // TEMPHYDR

  label3:
  Push(Pop() + Pop()); // +
  C_at_(); // C@
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162() // UNK_0xf162
{
  UNK_0xec5a(); // UNK_0xec5a
  C_at_(); // C@
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_R(); // >R

  label2:
  UNK_0xf128(); // UNK_0xf128
  DUP(); // DUP
  R_at_(); // R@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  goto label2;

  label1:
  R_gt_(); // R>
  Pop(); // DROP
  Push(pp_HYDRO); // HYDRO
  _ex_(); // !
}


// ================================================
// 0xf18c: WORD 'UNK_0xf18e' codep=0x224c parp=0xf18e
// ================================================

void UNK_0xf18e() // UNK_0xf18e
{
  UNK_0xf118(); // UNK_0xf118
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  Push(pp_SUBATMO); // SUBATMO
  goto label3;

  label1:
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(0); // 0
  Push(cc__7); // 7
  RRND(); // RRND
  Push(pp_INFATMO); // INFATMO
  goto label3;

  label2:
  Push(0); // 0
  Push(cc__9); // 9
  RRND(); // RRND
  Push(pp_TEMPATMO); // TEMPATMO

  label3:
  Push(Pop() + Pop()); // +
  C_at_(); // C@
}


// ================================================
// 0xf1c6: WORD 'UNK_0xf1c8' codep=0x224c parp=0xf1c8
// ================================================

void UNK_0xf1c8() // UNK_0xf1c8
{
  UNK_0xec7a(); // UNK_0xec7a
  C_at_(); // C@
  if (Pop() == 0) goto label1;

  label2:
  UNK_0xf18e(); // UNK_0xf18e
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  goto label3;

  label1:
  Push(0); // 0

  label3:
  Push(pp_ATMO); // ATMO
  _ex_(); // !
}


// ================================================
// 0xf1e4: WORD 'UNK_0xf1e6' codep=0x224c parp=0xf1e6
// ================================================

void UNK_0xf1e6() // UNK_0xf1e6
{
  _at_INST_dash_S(); // @INST-S
  DUP(); // DUP
  Push(0x0012);
  _eq_(); // =
  SWAP(); // SWAP
  Push(0x0022);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  Push(pp_HYDRO); // HYDRO
  _ex_(); // !
  Push(0x000f);
  Push(pp_ATMO); // ATMO
  _ex_(); // !
  return;

  label1:
  UNK_0xec52(); // UNK_0xec52
  C_at_(); // C@
  if (Pop() == 0) goto label2;
  Push(cc__5); // 5
  Push(pp_HYDRO); // HYDRO
  _ex_(); // !

  label3:
  UNK_0xf1c8(); // UNK_0xf1c8
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  return;

  label2:
  UNK_0xf162(); // UNK_0xf162
  UNK_0xf1c8(); // UNK_0xf1c8
}


// ================================================
// 0xf232: WORD 'UNK_0xf234' codep=0x224c parp=0xf234
// ================================================

void UNK_0xf234() // UNK_0xf234
{
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  UNK_0xec62(); // UNK_0xec62
  C_at_(); // C@
  UNK_0xec6a(); // UNK_0xec6a
  C_at_(); // C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop()+1); // 1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf24c: WORD 'UNK_0xf24e' codep=0x224c parp=0xf24e
// ================================================

void UNK_0xf24e() // UNK_0xf24e
{
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x01e0);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x03c0);
  SWAP(); // SWAP
  _dash_(); // -

  label1:
  Push(0x01e0);
  UNK_0xf234(); // UNK_0xf234
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop()+1); // 1+
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf27e: WORD 'UNK_0xf280' codep=0x224c parp=0xf280
// ================================================

void UNK_0xf280() // UNK_0xf280
{
  UNK_0xf24e(); // UNK_0xf24e
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
  Push(0x0043);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  Push(0); // 0
  UNK_0xec92(); // UNK_0xec92
  DUP(); // DUP
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  C_at_(); // C@
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  i++;
  } while(i<imax); // (LOOP) 0xfff4

  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf2ae: WORD 'RUGS' codep=0x1d29 parp=0xf2b7
// ================================================
// 0xf2b7: db 0x01 0x00 0x00 0xe9 0x01 0x00 0x15 0xe9 0x01 0x00 0x04 0xc7 0x01 0x00 0x2b 0xe9 0x01 0x00 0x2c 0xd9 0x01 0x00 0x00 0xd0 0x01 0x00 0xa4 0xce 0x01 0x00 0xdc 0xcf '              +   ,             '

// ================================================
// 0xf2d7: WORD 'UNK_0xf2d9' codep=0x224c parp=0xf2d9
// ================================================

void UNK_0xf2d9() // UNK_0xf2d9
{
  Push(0); // 0
  Push(cc__8); // 8
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(pp_RUGS); // RUGS
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
}


// ================================================
// 0xf2eb: WORD 'SETC' codep=0x224c parp=0xf2f4
// ================================================
// entry

void SETC() // SETC
{
  UNK_0xf280(); // UNK_0xf280
  if (Pop() == 0) goto label1;
  UNK_0xf2d9(); // UNK_0xf2d9
  goto label2;

  label1:
  _0_dot_(); // 0.

  label2:
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_ex_(); // 1.5!
}

// 0xf308: db 0x4c 0x22 0x58 0x51 0xf6 0x53 0x92 0x6d 0x58 0x51 0xe7 0x53 0x92 0x6d 0x90 0x16 0x4c 0x22 0x20 0x0f 0x83 0x3b 0xd8 0x4a 0x05 0x10 0x05 0x10 0x72 0x0f 0x38 0x0c 0x90 0x16 'L"XQ S mXQ S m  L"   ; J    r 8   '

// ================================================
// 0xf32a: WORD 'CLIST1' codep=0x1d29 parp=0xf335
// ================================================
// 0xf335: db 0x01 0x00 0x41 0xe5 0x01 0x00 0xce 0xe7 0x01 0x00 0x00 0xe8 0x01 0x00 0x2d 0xe8 0x01 0x00 0x56 0xe8 '  A           -   V '

// ================================================
// 0xf349: WORD 'CLIST2' codep=0x1d29 parp=0xf354
// ================================================
// 0xf354: db 0x01 0x00 0x64 0xe5 0x01 0x00 0x9a 0xe8 0x01 0x00 0xfc 0xe4 0x01 0x00 0xca 0xe3 0x01 0x00 0x83 0xe8 '  d                 '

// ================================================
// 0xf368: WORD 'CLIST3' codep=0x1d29 parp=0xf373
// ================================================
// 0xf373: db 0x01 0x00 0x53 0xe5 0x01 0x00 0x18 0xe8 0x01 0x00 0x43 0xe8 0x01 0x00 0x6f 0xe8 0x01 0x00 0x64 0xe5 0x4c 0x22 0x16 0x16 0xa9 0xe6 0x01 0x00 0xf6 0x53 0x92 0x6d 0x33 0xf3 0x18 0xf3 0xe7 0x53 0x92 0x6d 0x90 0x16 '  S       C   o   d L"       S m3    S m  '

// ================================================
// 0xf39d: WORD '(SAND)' codep=0x1d29 parp=0xf3a8
// ================================================
// 0xf3a8: db 0x01 0x00 0x24 0xe7 0x01 0x00 0x3a 0xe7 0x01 0x00 0x69 0xe7 0x01 0x00 0x51 0xe7 0x4c 0x22 0x2b 0x54 0xae 0x0b 0xfa 0x15 0x3a 0x00 0x71 0xf3 0x18 0xf3 0xe7 0x53 0x92 0x6d 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xd8 0x4a 0x5d 0x17 0x1f 0x00 0x46 0x12 0xfa 0x15 0x16 0x00 0x20 0x0f 0x7b 0x3b 0xd8 0x4a 0x05 0x10 0x05 0x10 0xa6 0xf3 0x72 0x0f 0x38 0x0c 0x60 0x16 0x08 0x00 0x16 0x16 0x90 0xe6 0x01 0x00 0x60 0x16 0x0e 0x00 0x16 0x16 0x5e 0xe6 0x01 0x00 0x58 0x51 0xe7 0x53 0x92 0x6d 0xf6 0x53 0x92 0x6d 0x90 0x16 0x4c 0x22 0x52 0xf3 0x18 0xf3 0x13 0x54 0x92 0x6d 0xb8 0xf3 0x90 0x16 0x4c 0x22 0x16 0x16 0xd0 0xe6 0x01 0x00 0xf6 0x53 0x92 0x6d 0x16 0x16 0xfa 0xe6 0x01 0x00 0xe7 0x53 0x92 0x6d 0x90 0x16 0x4c 0x22 0x16 0x16 0x97 0xe7 0x01 0x00 0xf6 0x53 0x92 0x6d 0xb8 0x48 0xe7 0x53 0x92 0x6d 0x90 0x16 '  $   :   i   Q L"+T    : q    S m. ] d  J]   F       {; J      r 8 `         `     ^   XQ S m S m  L"R    T m    L"       S m       S m  L"       S m H S m  '

// ================================================
// 0xf446: WORD '(TERRAIN' codep=0x4a4f parp=0xf453
// ================================================
// 0xf453: db 0x05 0x00 0x34 0xf4 0x01 0x00 0x0a 0xf3 0x02 0x00 0x0e 0xf4 0x03 0x00 0x89 0xf3 0x04 0x00 0x1c 0xf4 0x05 0x00 0xba 0xf3 '  4                     '

// ================================================
// 0xf46b: WORD 'UNK_0xf46d' codep=0x224c parp=0xf46d
// ================================================

void UNK_0xf46d() // UNK_0xf46d
{
  UNK_0xec5a(); // UNK_0xec5a
  C_at_(); // C@
  _ro_TERRAIN(); // (TERRAIN
}


// ================================================
// 0xf475: WORD 'PLAN-RUL' codep=0x224c parp=0xf482
// ================================================
// entry

void PLAN_dash_RUL() // PLAN-RUL
{
  UNK_0xed8e(); // UNK_0xed8e
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_S(); // @INST-S
  Push(0x0011);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  UNK_0xf086(); // UNK_0xf086
  goto label2;

  label1:
  UNK_0xf094(); // UNK_0xf094

  label2:
  UNK_0xf1e6(); // UNK_0xf1e6
  UNK_0xf46d(); // UNK_0xf46d
  ICLOSE(); // ICLOSE
}

// 0xf4a6: db 0x53 0x45 0x54 0x54 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x91 0x75 0x60 0x16 0x04 0x00 0xbf 0xeb 0x91 0x75 0xc9 0x79 0x90 0x16 0x00 0x00 0x87 0x4f 0x50 0x2d 0x43 0x41 0x53 0xc5 0x4f 0x4a 0x03 0x00 0x48 0x3a 0x00 0x00 0x31 0x31 0x33 0x39 0x7a 0xf4 0x02 0x00 0x09 0x13 0xd6 0xf4 0x86 0x28 0x55 0x2d 0x4f 0x50 0xa9 0x4c 0x22 0x35 0xe6 0xcc 0x5c 0xae 0x0b 0xfa 0x15 0x0a 0x00 0x5d 0x17 0xe8 0x03 0xef 0x2a 0x78 0xf4 0x38 0xaa 0xf2 0x0e 0x32 0x0e 0xc8 0x0d 0xfa 0x15 0x0c 0x00 0xac 0x5b 0x83 0x6d 0x8a 0xe5 0x3a 0xac 0x32 0x0e 0x20 0x0f 0x50 0xaa 0xfa 0x15 0x08 0x00 0xac 0x5b 0xae 0x0b 0xde 0xf4 0xfa 0x15 0xda 0xff 0x90 0x16 0x4f 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'SETTER__________________________ u`      u y     OP-CAS OJ  H:  1139z        (U-OP L"5  \      ]    *x 8   2        [ m  : 2   P      [          OP-VOC__________________________          '
  