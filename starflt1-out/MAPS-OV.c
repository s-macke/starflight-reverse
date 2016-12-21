// ====== OVERLAY 'MAPS-OV' ======
// store offset = 0xeca0
// overlay size   = 0x08c0

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xa98d  codep:0x224c parp:0xa98d size:0x0006 C-string:'UNK_0xa98d'
// 1704:      UNK_0xa995  codep:0x224c parp:0xa995 size:0x0006 C-string:'UNK_0xa995'
// 1705:      UNK_0xa99d  codep:0x224c parp:0xa99d size:0x0006 C-string:'UNK_0xa99d'
// 1706:      UNK_0xa9a5  codep:0x224c parp:0xa9a5 size:0x000a C-string:'UNK_0xa9a5'
// 1707:      UNK_0xa9b1  codep:0x224c parp:0xa9b1 size:0x000a C-string:'UNK_0xa9b1'
// 1708:      UNK_0xa9bd  codep:0x224c parp:0xa9bd size:0x0006 C-string:'UNK_0xa9bd'
// 1709:      UNK_0xa9c5  codep:0x224c parp:0xa9c5 size:0x0006 C-string:'UNK_0xa9c5'
// 1710:      UNK_0xa9cd  codep:0x224c parp:0xa9cd size:0x0006 C-string:'UNK_0xa9cd'
// 1711:      UNK_0xa9d5  codep:0x224c parp:0xa9d5 size:0x0004 C-string:'UNK_0xa9d5'
// 1712:      UNK_0xa9db  codep:0x224c parp:0xa9db size:0x42dd C-string:'UNK_0xa9db'
// 1713:      UNK_0xecba  codep:0x73ea parp:0xecba size:0x0026 C-string:'UNK_0xecba'
// 1714:      UNK_0xece2  codep:0x73ea parp:0xece2 size:0x0006 C-string:'UNK_0xece2'
// 1715:      UNK_0xecea  codep:0x73ea parp:0xecea size:0x0006 C-string:'UNK_0xecea'
// 1716:      UNK_0xecf2  codep:0x73ea parp:0xecf2 size:0x000e C-string:'UNK_0xecf2'
// 1717:      UNK_0xed02  codep:0x2214 parp:0xed02 size:0x0002 C-string:'UNK_0xed02'
// 1718:      UNK_0xed06  codep:0x73ea parp:0xed06 size:0x0006 C-string:'UNK_0xed06'
// 1719:      UNK_0xed0e  codep:0x224c parp:0xed0e size:0x0050 C-string:'UNK_0xed0e'
// 1720:      UNK_0xed60  codep:0x224c parp:0xed60 size:0x0016 C-string:'UNK_0xed60'
// 1721:      UNK_0xed78  codep:0x224c parp:0xed78 size:0x0030 C-string:'UNK_0xed78'
// 1722:      UNK_0xedaa  codep:0x73ea parp:0xedaa size:0x0006 C-string:'UNK_0xedaa'
// 1723:      UNK_0xedb2  codep:0x224c parp:0xedb2 size:0x002a C-string:'UNK_0xedb2'
// 1724:      UNK_0xedde  codep:0x224c parp:0xedde size:0x0048 C-string:'UNK_0xedde'
// 1725:      UNK_0xee28  codep:0x224c parp:0xee28 size:0x0014 C-string:'UNK_0xee28'
// 1726:      UNK_0xee3e  codep:0x224c parp:0xee3e size:0x0018 C-string:'UNK_0xee3e'
// 1727:      UNK_0xee58  codep:0x224c parp:0xee58 size:0x002c C-string:'UNK_0xee58'
// 1728:      UNK_0xee86  codep:0x224c parp:0xee86 size:0x000e C-string:'UNK_0xee86'
// 1729:      UNK_0xee96  codep:0x224c parp:0xee96 size:0x000c C-string:'UNK_0xee96'
// 1730:      UNK_0xeea4  codep:0x224c parp:0xeea4 size:0x0074 C-string:'UNK_0xeea4'
// 1731:      UNK_0xef1a  codep:0x224c parp:0xef1a size:0x0016 C-string:'UNK_0xef1a'
// 1732:      2X2CONTOUR  codep:0x224c parp:0xef3f size:0x0034 C-string:'_2X2CONTOUR'
// 1733:      4X4CONTOUR  codep:0x224c parp:0xef82 size:0x0040 C-string:'_4X4CONTOUR'
// 1734:            CBLT  codep:0x1d29 parp:0xefcb size:0x0004 C-string:'CBLT'
// 1735:           CBLTP  codep:0xefd9 parp:0xefd9 size:0x002c C-string:'CBLTP'
// 1736:      UNK_0xf007  codep:0x224c parp:0xf007 size:0x00ba C-string:'UNK_0xf007'
// 1737:      8X8CONTOUR  codep:0x224c parp:0xf0d0 size:0x0040 C-string:'_8X8CONTOUR'
// 1738:            '4X4  codep:0x1d29 parp:0xf119 size:0x0002 C-string:'_i_4X4'
// 1739:            '2X2  codep:0x1d29 parp:0xf124 size:0x0002 C-string:'_i_2X2'
// 1740:            '8X8  codep:0x1d29 parp:0xf12f size:0x0002 C-string:'_i_8X8'
// 1741:      UNK_0xf133  codep:0x224c parp:0xf133 size:0x0052 C-string:'UNK_0xf133'
// 1742:      UNK_0xf187  codep:0x224c parp:0xf187 size:0x0046 C-string:'UNK_0xf187'
// 1743:      UNK_0xf1cf  codep:0x224c parp:0xf1cf size:0x004e C-string:'UNK_0xf1cf'
// 1744:      UNK_0xf21f  codep:0x224c parp:0xf21f size:0x0008 C-string:'UNK_0xf21f'
// 1745:      UNK_0xf229  codep:0x224c parp:0xf229 size:0x0008 C-string:'UNK_0xf229'
// 1746:      UNK_0xf233  codep:0x224c parp:0xf233 size:0x0008 C-string:'UNK_0xf233'
// 1747:      UNK_0xf23d  codep:0x224c parp:0xf23d size:0x0008 C-string:'UNK_0xf23d'
// 1748:      UNK_0xf247  codep:0x224c parp:0xf247 size:0x0008 C-string:'UNK_0xf247'
// 1749:      UNK_0xf251  codep:0x224c parp:0xf251 size:0x0008 C-string:'UNK_0xf251'
// 1750:      UNK_0xf25b  codep:0x224c parp:0xf25b size:0x0008 C-string:'UNK_0xf25b'
// 1751:      UNK_0xf265  codep:0x224c parp:0xf265 size:0x0008 C-string:'UNK_0xf265'
// 1752:      UNK_0xf26f  codep:0x224c parp:0xf26f size:0x0008 C-string:'UNK_0xf26f'
// 1753:      UNK_0xf279  codep:0x224c parp:0xf279 size:0x0008 C-string:'UNK_0xf279'
// 1754:      UNK_0xf283  codep:0x224c parp:0xf283 size:0x0008 C-string:'UNK_0xf283'
// 1755:      UNK_0xf28d  codep:0x224c parp:0xf28d size:0x0008 C-string:'UNK_0xf28d'
// 1756:      UNK_0xf297  codep:0x224c parp:0xf297 size:0x0008 C-string:'UNK_0xf297'
// 1757:      UNK_0xf2a1  codep:0x224c parp:0xf2a1 size:0x0008 C-string:'UNK_0xf2a1'
// 1758:         WPHRASE  codep:0x4a4f parp:0xf2b5 size:0x003c C-string:'WPHRASE'
// 1759:        (.STORM)  codep:0x224c parp:0xf2fe size:0x001a C-string:'_ro__dot_STORM_rc_'
// 1760:           .ROCK  codep:0x224c parp:0xf322 size:0x0018 C-string:'_dot_ROCK'
// 1761:         .LIQUID  codep:0x224c parp:0xf346 size:0x0016 C-string:'_dot_LIQUID'
// 1762:        .CRYSTAL  codep:0x224c parp:0xf369 size:0x000a C-string:'_dot_CRYSTAL'
// 1763:            .ICE  codep:0x224c parp:0xf37c size:0x001a C-string:'_dot_ICE'
// 1764:         .MOLTEN  codep:0x224c parp:0xf3a2 size:0x0010 C-string:'_dot_MOLTEN'
// 1765:         .CARPET  codep:0x224c parp:0xf3be size:0x0031 C-string:'_dot_CARPET'
// 1766:           /SURF  codep:0x4a4f parp:0xf3f9 size:0x0018 C-string:'_slash_SURF'
// 1767:        .SURFACE  codep:0x224c parp:0xf41e size:0x0010 C-string:'_dot_SURFACE'
// 1768:      UNK_0xf430  codep:0x224c parp:0xf430 size:0x0006 C-string:'UNK_0xf430'
// 1769:      UNK_0xf438  codep:0x224c parp:0xf438 size:0x0006 C-string:'UNK_0xf438'
// 1770:      UNK_0xf440  codep:0x224c parp:0xf440 size:0x0012 C-string:'UNK_0xf440'
// 1771:      UNK_0xf454  codep:0x224c parp:0xf454 size:0x0016 C-string:'UNK_0xf454'
// 1772:      UNK_0xf46c  codep:0x224c parp:0xf46c size:0x0017 C-string:'UNK_0xf46c'
// 1773:      UNK_0xf485  codep:0x224c parp:0xf485 size:0x0006 C-string:'UNK_0xf485'
// 1774:      UNK_0xf48d  codep:0x224c parp:0xf48d size:0x0023 C-string:'UNK_0xf48d'
// 1775:      UNK_0xf4b2  codep:0x224c parp:0xf4b2 size:0x0013 C-string:'UNK_0xf4b2'
// 1776:      UNK_0xf4c7  codep:0x224c parp:0xf4c7 size:0x002b C-string:'UNK_0xf4c7'
// 1777:      UNK_0xf4f4  codep:0x224c parp:0xf4f4 size:0x0014 C-string:'UNK_0xf4f4'
// 1778:      UNK_0xf50a  codep:0x224c parp:0xf50a size:0x0008 C-string:'UNK_0xf50a'
// 1779:            MAPS  codep:0x224c parp:0xf51b size:0x0026 C-string:'MAPS'
// 1780:          .STORM  codep:0x224c parp:0xf54c size:0x0000 C-string:'_dot_STORM'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char CBLT[4] = {0xff, 0x66, 0x00, 0x66}; // CBLT
unsigned char _i_4X4[2] = {0x1a, 0xce}; // '4X4
unsigned char _i_2X2[2] = {0xf8, 0xcd}; // '2X2
unsigned char _i_8X8[2] = {0x3c, 0xce}; // '8X8

const unsigned short int cc_UNK_0xed02 = 0x0082; // UNK_0xed02


// 0xecb2: db 0x8c 0x00 0x14 0x22 0x20 0x00 '   "  '

// ================================================
// 0xecb8: WORD 'UNK_0xecba' codep=0x73ea parp=0xecba
// ================================================
// 0xecba: db 0x20 0x01 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x04 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x11 0x02 0x16 0x8f 0x65 0xea 0x73 0x20 0x13 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x0c 0x01 0x16 0x8f 0x65 '     e s     e s     e s     e s     e'

// ================================================
// 0xece0: WORD 'UNK_0xece2' codep=0x73ea parp=0xece2
// ================================================
// 0xece2: db 0x20 0x0f 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xece8: WORD 'UNK_0xecea' codep=0x73ea parp=0xecea
// ================================================
// 0xecea: db 0x20 0x10 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xecf0: WORD 'UNK_0xecf2' codep=0x73ea parp=0xecf2
// ================================================
// 0xecf2: db 0x20 0x02 0x02 0x16 0x8f 0x65 0xea 0x73 0x43 0x07 0x08 0x1c 0xcd 0x69 '     e sC    i'

// ================================================
// 0xed00: WORD 'UNK_0xed02' codep=0x2214 parp=0xed02
// ================================================
// 0xed02: db 0x82 0x00 '  '

// ================================================
// 0xed04: WORD 'UNK_0xed06' codep=0x73ea parp=0xed06
// ================================================
// 0xed06: db 0x82 0x00 0x03 0x07 0xa8 0x93 '      '

// ================================================
// 0xed0c: WORD 'UNK_0xed0e' codep=0x224c parp=0xed0e
// ================================================

void UNK_0xed0e() // UNK_0xed0e
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xecf2"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(Read16(sp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0320);
  _dash_(); // -
  Push(0); // 0
  SQRT(); // SQRT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0320);
  Push(Pop() + Pop()); // +

  label1:
  Push(0x0064);
  _slash_MOD(); // /MOD
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0); // 0
  _dot_R(); // .R

  label2:
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0); // 0
  _dot_R(); // .R
  Push(0); // 0
  _dot_R(); // .R
}


// ================================================
// 0xed5e: WORD 'UNK_0xed60' codep=0x224c parp=0xed60
// ================================================

void UNK_0xed60() // UNK_0xed60
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xece2"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xecea"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop()+1); // 1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed76: WORD 'UNK_0xed78' codep=0x224c parp=0xed78
// ================================================

void UNK_0xed78() // UNK_0xed78
{
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(0x01e0);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x03c0);
  SWAP(); // SWAP
  _dash_(); // -

  label1:
  Push(0x01e0);
  UNK_0xed60(); // UNK_0xed60
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
// 0xeda8: WORD 'UNK_0xedaa' codep=0x73ea parp=0xedaa
// ================================================
// 0xedaa: db 0x43 0x04 0x03 0x1c 0xcd 0x69 'C    i'

// ================================================
// 0xedb0: WORD 'UNK_0xedb2' codep=0x224c parp=0xedb2
// ================================================

void UNK_0xedb2() // UNK_0xedb2
{
  UNK_0xed78(); // UNK_0xed78
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
  Push(0x0043);
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData("UNK_0xedaa"); // from 'REGIONS     '
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(PHR-CNT)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x63fb); // IFIELD(PHRASE-MEM)
  OVER(); // OVER
  Func14("TYPE"); // call of word 0x2690
  Push(0x000a);
  SWAP(); // SWAP
  _dash_(); // -
  SPACES(); // SPACES
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeddc: WORD 'UNK_0xedde' codep=0x224c parp=0xedde
// ================================================

void UNK_0xedde() // UNK_0xedde
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
// 0xee26: WORD 'UNK_0xee28' codep=0x224c parp=0xee28
// ================================================

void UNK_0xee28() // UNK_0xee28
{

  label1:
  UNK_0xedde(); // UNK_0xedde
  Push(pp__i_SIMULA); // 'SIMULA
  _at_EXECUTE(); // @EXECUTE
  _i_KEY(); // 'KEY
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
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
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xee3c: WORD 'UNK_0xee3e' codep=0x224c parp=0xee3e
// ================================================

void UNK_0xee3e() // UNK_0xee3e
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
// 0xee56: WORD 'UNK_0xee58' codep=0x224c parp=0xee58
// ================================================

void UNK_0xee58() // UNK_0xee58
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
  _ex_COLOR(); // !COLOR
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  POS_dot_(); // POS.
}


// ================================================
// 0xee84: WORD 'UNK_0xee86' codep=0x224c parp=0xee86
// ================================================

void UNK_0xee86() // UNK_0xee86
{
  _gt_C_plus_S(); // >C+S
  Push(0x63fb); // IFIELD(PHRASE-MEM)
  Push(0x63fa); // IFIELD(PHR-CNT)
  Push(Read8(Pop())&0xFF); // C@
  Func14("TYPE"); // call of word 0x2690
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee94: WORD 'UNK_0xee96' codep=0x224c parp=0xee96
// ================================================

void UNK_0xee96() // UNK_0xee96
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xeea2: WORD 'UNK_0xeea4' codep=0x224c parp=0xeea4
// ================================================

void UNK_0xeea4() // UNK_0xeea4
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  _gt_MAINVIEW(); // >MAINVIEW
  Push(0x001a);
  Push(0x002b);
  Push(0x002d);
  Push(0x002b);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x002c);
  Push(0x002d);
  Push(0x002c);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x004b);
  Push(0x002d);
  Push(0x004b);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x004c);
  Push(0x002d);
  Push(0x004c);
  LLINE(); // LLINE
  Push(0x001a);
  Push(0x002d);
  Push(0x001a);
  Push(0x004a);
  LLINE(); // LLINE
  Push(0x002d);
  Push(0x002d);
  Push(0x002d);
  Push(0x004a);
  LLINE(); // LLINE
}


// ================================================
// 0xef18: WORD 'UNK_0xef1a' codep=0x224c parp=0xef1a
// ================================================

void UNK_0xef1a() // UNK_0xef1a
{
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _dash_(); // -
}


// ================================================
// 0xef30: WORD '2X2CONTOUR' codep=0x224c parp=0xef3f
// ================================================
// entry

void _2X2CONTOUR() // 2X2CONTOUR
{
  Push(0x6ac1);
  SETLARRAY(); // SETLARRAY
  Push(0x989a);
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(1); // 1
  Push(Read16(sp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef1a(); // UNK_0xef1a
  OVER(); // OVER
  Push(0x0022);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x003a);
  Push(Pop() + Pop()); // +
  SETREGION(); // SETREGION
  _dot_REGION_plus_(); // .REGION+
  UNK_0xeea4(); // UNK_0xeea4
}


// ================================================
// 0xef73: WORD '4X4CONTOUR' codep=0x224c parp=0xef82
// ================================================
// entry

void _4X4CONTOUR() // 4X4CONTOUR
{
  Push(0x6ac1);
  SETLARRAY(); // SETLARRAY
  Push(0x98be);
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push(2); // 2
  Push(Read16(sp)); // DUP
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef1a(); // UNK_0xef1a
  Push(0x000f);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc__9); // 9
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(0x0010);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x001c);
  Push(Pop() + Pop()); // +
  SETREGION(); // SETREGION
  _dot_REGION_plus_(); // .REGION+
}


// ================================================
// 0xefc2: WORD 'CBLT' codep=0x1d29 parp=0xefcb
// ================================================
// 0xefcb: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xefcf: WORD 'CBLTP' codep=0xefd9 parp=0xefd9
// ================================================
// 0xefd9: pop    ax
// 0xefda: add    ax,0003
// 0xefdd: mov    [5863],ax
// 0xefe1: pop    ax
// 0xefe2: add    ax,0006
// 0xefe5: mov    [586E],ax
// 0xefe9: mov    word ptr [5892],0004
// 0xefef: mov    word ptr [5887],0006
// 0xeff5: mov    word ptr [589D],EFCB
// 0xeffb: push   ds
// 0xeffc: pop    word ptr [58AA]
// 0xf000: lodsw
// 0xf001: mov    bx,ax
// 0xf003: jmp    word ptr [bx]

// ================================================
// 0xf005: WORD 'UNK_0xf007' codep=0x224c parp=0xf007
// ================================================

void UNK_0xf007() // UNK_0xf007
{
  Push(0x000e);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__8); // 8
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  Push(i); // J
  Push(Pop() + Pop()); // +
  _2DUP(); // 2DUP
  CELLCOLOR(); // CELLCOLOR
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  CELLCOLOR(); // CELLCOLOR
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(j); // I
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  R_gt_(); // R>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_R(); // >R

  label1:
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  CELLCOLOR(); // CELLCOLOR
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  CELLCOLOR(); // CELLCOLOR
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(j); // I
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  R_gt_(); // R>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_R(); // >R

  label2:
  Push(j); // I
  Push(j); // I'
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  Push(j); // I
  Push(j); // I'
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(j); // I
  _0_gt_(); // 0>
  if (Pop() == 0) goto label4;
  Push(j); // I
  goto label5;

  label4:
  Push(j); // I'

  label5:
  Push(pp_COLOR); // COLOR
  _ex_(); // !
  _2DUP(); // 2DUP
  Push(cc__3); // 3
  Push(cc__3); // 3
  BUFFERXY(); // BUFFERXY
  CBLTP(); // CBLTP
  BLT(); // BLT

  label3:
  R_gt_(); // R>
  R_gt_(); // R>
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  j++;
  } while(j<jmax); // (LOOP) 0xff5c

  i++;
  } while(i<imax); // (LOOP) 0xff52

}


// ================================================
// 0xf0c1: WORD '8X8CONTOUR' codep=0x224c parp=0xf0d0
// ================================================
// entry

void _8X8CONTOUR() // 8X8CONTOUR
{
  Push(0x6ac1);
  SETLARRAY(); // SETLARRAY
  Push(0x98dc);
  Push(pp__i__dot_CELL); // '.CELL
  _st__ex__gt_(); // <!>
  Push2Words("0.");
  Push(pp_XLLDEST); // XLLDEST
  _st__ex__gt_(); // <!>
  Push(pp_YLLDEST); // YLLDEST
  _st__ex__gt_(); // <!>
  UNK_0xef1a(); // UNK_0xef1a
  Push(0x0016);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x000d);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x000e);
  Push(Pop() + Pop()); // +
  SETREGION(); // SETREGION
  _dot_REGION_plus_(); // .REGION+
  UNK_0xf007(); // UNK_0xf007
}


// ================================================
// 0xf110: WORD ''4X4' codep=0x1d29 parp=0xf119
// ================================================
// 0xf119: db 0x1a 0xce '  '

// ================================================
// 0xf11b: WORD ''2X2' codep=0x1d29 parp=0xf124
// ================================================
// 0xf124: db 0xf8 0xcd '  '

// ================================================
// 0xf126: WORD ''8X8' codep=0x1d29 parp=0xf12f
// ================================================
// 0xf12f: db 0x3c 0xce '< '

// ================================================
// 0xf131: WORD 'UNK_0xf133' codep=0x224c parp=0xf133
// ================================================

void UNK_0xf133() // UNK_0xf133
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  _gt_2ICONF(); // >2ICONF
  VCLIPSET(); // VCLIPSET
  Push(cc__4); // 4
  Push(Read16(sp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(pp__i_4X4); // '4X4
  Push(Read16(Pop())); // @
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x000f);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x001a);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x002b);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
  _4X4CONTOUR(); // 4X4CONTOUR
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf185: WORD 'UNK_0xf187' codep=0x224c parp=0xf187
// ================================================

void UNK_0xf187() // UNK_0xf187
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  _gt_3ICONF(); // >3ICONF
  Push(pp__i_2X2); // '2X2
  Push(Read16(Pop())); // @
  Push(pp__i__dot_BACKG); // '.BACKG
  _ex_(); // !
  Push(2); // 2
  Push(Read16(sp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0022);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x003a);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
  _2X2CONTOUR(); // 2X2CONTOUR
  UNK_0xeea4(); // UNK_0xeea4
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf1cd: WORD 'UNK_0xf1cf' codep=0x224c parp=0xf1cf
// ================================================

void UNK_0xf1cf() // UNK_0xf1cf
{
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  _gt_1ICONFONT(); // >1ICONFONT
  Push(pp__i_8X8); // '8X8
  Push(Read16(Pop())); // @
  Push(pp__i__dot_BACKG); // '.BACKG
  _st__ex__gt_(); // <!>
  Push(cc__8); // 8
  Push(Read16(sp)); // DUP
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _st__ex__gt_(); // <!>
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x0029);
  Push(Pop() + Pop()); // +
  _ex_VISWINDOW(); // !VISWINDOW
  _8X8CONTOUR(); // 8X8CONTOUR
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xf21d: WORD 'UNK_0xf21f' codep=0x224c parp=0xf21f
// ================================================

void UNK_0xf21f() // UNK_0xf21f
{
  Push(0xe63c); Pust(0x0001);
}


// ================================================
// 0xf227: WORD 'UNK_0xf229' codep=0x224c parp=0xf229
// ================================================

void UNK_0xf229() // UNK_0xf229
{
  Push(0xeafa); Pust(0x0001);
}


// ================================================
// 0xf231: WORD 'UNK_0xf233' codep=0x224c parp=0xf233
// ================================================

void UNK_0xf233() // UNK_0xf233
{
  Push(0xeb2b); Pust(0x0001);
}


// ================================================
// 0xf23b: WORD 'UNK_0xf23d' codep=0x224c parp=0xf23d
// ================================================

void UNK_0xf23d() // UNK_0xf23d
{
  Push(0xe9ad); Pust(0x0001);
}


// ================================================
// 0xf245: WORD 'UNK_0xf247' codep=0x224c parp=0xf247
// ================================================

void UNK_0xf247() // UNK_0xf247
{
  Push(0xe9c8); Pust(0x0001);
}


// ================================================
// 0xf24f: WORD 'UNK_0xf251' codep=0x224c parp=0xf251
// ================================================

void UNK_0xf251() // UNK_0xf251
{
  Push(0xe9ea); Pust(0x0001);
}


// ================================================
// 0xf259: WORD 'UNK_0xf25b' codep=0x224c parp=0xf25b
// ================================================

void UNK_0xf25b() // UNK_0xf25b
{
  Push(0xea02); Pust(0x0001);
}


// ================================================
// 0xf263: WORD 'UNK_0xf265' codep=0x224c parp=0xf265
// ================================================

void UNK_0xf265() // UNK_0xf265
{
  Push(0xea98); Pust(0x0001);
}


// ================================================
// 0xf26d: WORD 'UNK_0xf26f' codep=0x224c parp=0xf26f
// ================================================

void UNK_0xf26f() // UNK_0xf26f
{
  Push(0xea2d); Pust(0x0001);
}


// ================================================
// 0xf277: WORD 'UNK_0xf279' codep=0x224c parp=0xf279
// ================================================

void UNK_0xf279() // UNK_0xf279
{
  Push(0xea7e); Pust(0x0001);
}


// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x224c parp=0xf283
// ================================================

void UNK_0xf283() // UNK_0xf283
{
  Push(0xeabf); Pust(0x0001);
}


// ================================================
// 0xf28b: WORD 'UNK_0xf28d' codep=0x224c parp=0xf28d
// ================================================

void UNK_0xf28d() // UNK_0xf28d
{
  Push(0xea5c); Pust(0x0001);
}


// ================================================
// 0xf295: WORD 'UNK_0xf297' codep=0x224c parp=0xf297
// ================================================

void UNK_0xf297() // UNK_0xf297
{
  Push(0xeae2); Pust(0x0001);
}


// ================================================
// 0xf29f: WORD 'UNK_0xf2a1' codep=0x224c parp=0xf2a1
// ================================================

void UNK_0xf2a1() // UNK_0xf2a1
{
  Push(0xeb11); Pust(0x0001);
}


// ================================================
// 0xf2a9: WORD 'WPHRASE' codep=0x4a4f parp=0xf2b5
// ================================================
// 0xf2b5: db 0x0e 0x00 0x6e 0x3a 0x00 0x00 0x33 0xf2 0x01 0x00 0x29 0xf2 0x02 0x00 0x33 0xf2 0x03 0x00 0x3d 0xf2 0x04 0x00 0x47 0xf2 0x05 0x00 0x51 0xf2 0x06 0x00 0x5b 0xf2 0x07 0x00 0x65 0xf2 0x08 0x00 0x6f 0xf2 0x09 0x00 0x79 0xf2 0x0a 0x00 0x83 0xf2 0x0b 0x00 0x8d 0xf2 0x0c 0x00 0x97 0xf2 0x0d 0x00 0xa1 0xf2 '  n:  3   )   3   =   G   Q   [   e   o   y                 '

// ================================================
// 0xf2f1: WORD '(.STORM)' codep=0x224c parp=0xf2fe
// ================================================

void _ro__dot_STORM_rc_() // (.STORM)
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xf21f(); // UNK_0xf21f
  goto label2;

  label1:
  Push(pp__n_STORM); // #STORM
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // WPHRASE
  {
  case 0:
    UNK_0xf233(); // UNK_0xf233
    break;
  case 1:
    UNK_0xf229(); // UNK_0xf229
    break;
  case 2:
    UNK_0xf233(); // UNK_0xf233
    break;
  case 3:
    UNK_0xf23d(); // UNK_0xf23d
    break;
  case 4:
    UNK_0xf247(); // UNK_0xf247
    break;
  case 5:
    UNK_0xf251(); // UNK_0xf251
    break;
  case 6:
    UNK_0xf25b(); // UNK_0xf25b
    break;
  case 7:
    UNK_0xf265(); // UNK_0xf265
    break;
  case 8:
    UNK_0xf26f(); // UNK_0xf26f
    break;
  case 9:
    UNK_0xf279(); // UNK_0xf279
    break;
  case 10:
    UNK_0xf283(); // UNK_0xf283
    break;
  case 11:
    UNK_0xf28d(); // UNK_0xf28d
    break;
  case 12:
    UNK_0xf297(); // UNK_0xf297
    break;
  case 13:
    UNK_0xf2a1(); // UNK_0xf2a1
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }

  label2:
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf318: WORD '.ROCK' codep=0x224c parp=0xf322
// ================================================

void _dot_ROCK() // .ROCK
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE

  label1:
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf33a: WORD '.LIQUID' codep=0x224c parp=0xf346
// ================================================

void _dot_LIQUID() // .LIQUID
{
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE
  Push(0xe780); Pust(0x0001);
  UNK_0xee86(); // UNK_0xee86
  GCR(); // GCR
  _dot_ROCK(); // .ROCK
}


// ================================================
// 0xf35c: WORD '.CRYSTAL' codep=0x224c parp=0xf369
// ================================================

void _dot_CRYSTAL() // .CRYSTAL
{
  Push(0xe797); Pust(0x0001);
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf373: WORD '.ICE' codep=0x224c parp=0xf37c
// ================================================

void _dot_ICE() // .ICE
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE
  Push(0xe624); Pust(0x0001);
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf396: WORD '.MOLTEN' codep=0x224c parp=0xf3a2
// ================================================

void _dot_MOLTEN() // .MOLTEN
{
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
  GCR(); // GCR
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf3b2: WORD '.CARPET' codep=0x224c parp=0xf3be
// ================================================

void _dot_CARPET() // .CARPET
{
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_at_(); // 1.5@
  UNK_0xee96(); // UNK_0xee96
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  PRINT(", ", 2); // (.")
  GCR(); // GCR
  Push(0xe97a); Pust(0x0001);
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE
  UNK_0xee86(); // UNK_0xee86
  SPACE(); // SPACE
  Push(0xc761); Pust(0x0001);
  UNK_0xee86(); // UNK_0xee86

  label1:
  PRINT(".", 1); // (.")
  GCR(); // GCR
}


// ================================================
// 0xf3ef: WORD '/SURF' codep=0x4a4f parp=0xf3f9
// ================================================
// 0xf3f9: db 0x05 0x00 0x48 0x3a 0x00 0x00 0x69 0xf3 0x02 0x00 0x46 0xf3 0x03 0x00 0x7c 0xf3 0x04 0x00 0xa2 0xf3 0x05 0x00 0x22 0xf3 '  H:  i   F   |       " '

// ================================================
// 0xf411: WORD '.SURFACE' codep=0x224c parp=0xf41e
// ================================================

void _dot_SURFACE() // .SURFACE
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xecba"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Pop();
  switch(Pop()) // /SURF
  {
  case 0:
    _dot_CRYSTAL(); // .CRYSTAL
    break;
  case 2:
    _dot_LIQUID(); // .LIQUID
    break;
  case 3:
    _dot_ICE(); // .ICE
    break;
  case 4:
    _dot_MOLTEN(); // .MOLTEN
    break;
  case 5:
    _dot_ROCK(); // .ROCK
    break;
  default:
    NOP(); // NOP
    break;

  }
  _dot_CARPET(); // .CARPET
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430
// ================================================

void UNK_0xf430() // UNK_0xf430
{
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf436: WORD 'UNK_0xf438' codep=0x224c parp=0xf438
// ================================================

void UNK_0xf438() // UNK_0xf438
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440() // UNK_0xf440
{
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  Push(cc_UNK_0xed02); // UNK_0xed02
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  LoadData("UNK_0xed06"); // from 'COMPOUNDS   '
  _1_dot_5_at_(); // 1.5@
  UNK_0xee86(); // UNK_0xee86
}


// ================================================
// 0xf452: WORD 'UNK_0xf454' codep=0x224c parp=0xf454
// ================================================

void UNK_0xf454() // UNK_0xf454
{
  UNK_0xf430(); // UNK_0xf430
  PRINT("ATMO:", 5); // (.")
  UNK_0xf438(); // UNK_0xf438
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  UNK_0xf440(); // UNK_0xf440
  GCR(); // GCR
}


// ================================================
// 0xf46a: WORD 'UNK_0xf46c' codep=0x224c parp=0xf46c
// ================================================

void UNK_0xf46c() // UNK_0xf46c
{
  UNK_0xf430(); // UNK_0xf430
  PRINT("HYDRO:", 6); // (.")
  UNK_0xf438(); // UNK_0xf438
  Push(pp_HYDRO); // HYDRO
  Push(Read16(Pop())); // @
  UNK_0xf440(); // UNK_0xf440
  GCR(); // GCR
}


// ================================================
// 0xf483: WORD 'UNK_0xf485' codep=0x224c parp=0xf485
// ================================================

void UNK_0xf485() // UNK_0xf485
{
  UNK_0xee3e(); // UNK_0xee3e
  UNK_0xee58(); // UNK_0xee58
}


// ================================================
// 0xf48b: WORD 'UNK_0xf48d' codep=0x224c parp=0xf48d
// ================================================

void UNK_0xf48d() // UNK_0xf48d
{
  UNK_0xf430(); // UNK_0xf430
  PRINT("TERRAIN:", 8); // (.")
  UNK_0xf438(); // UNK_0xf438
  _dot_SURFACE(); // .SURFACE
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(0x001e);
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf4b0: WORD 'UNK_0xf4b2' codep=0x224c parp=0xf4b2
// ================================================

void UNK_0xf4b2() // UNK_0xf4b2
{
  GCR(); // GCR
  UNK_0xf430(); // UNK_0xf430
  PRINT("SKY:", 4); // (.")
  UNK_0xf438(); // UNK_0xf438
  _ro__dot_STORM_rc_(); // (.STORM)
  GCR(); // GCR
}


// ================================================
// 0xf4c5: WORD 'UNK_0xf4c7' codep=0x224c parp=0xf4c7
// ================================================

void UNK_0xf4c7() // UNK_0xf4c7
{
  UNK_0xf430(); // UNK_0xf430
  PRINT("TEMPERATURE:", 12); // (.")
  UNK_0xf438(); // UNK_0xf438
  UNK_0xedb2(); // UNK_0xedb2
  UNK_0xf430(); // UNK_0xf430
  PRINT(" GRAVITY:", 9); // (.")
  UNK_0xf438(); // UNK_0xf438
  UNK_0xed0e(); // UNK_0xed0e
  GCR(); // GCR
}


// ================================================
// 0xf4f2: WORD 'UNK_0xf4f4' codep=0x224c parp=0xf4f4
// ================================================

void UNK_0xf4f4() // UNK_0xf4f4
{
  UNK_0xf485(); // UNK_0xf485
  Push(cc__6); // 6
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  UNK_0xf4b2(); // UNK_0xf4b2
  UNK_0xf4c7(); // UNK_0xf4c7
  UNK_0xf454(); // UNK_0xf454
  UNK_0xf46c(); // UNK_0xf46c
  UNK_0xf48d(); // UNK_0xf48d
}


// ================================================
// 0xf508: WORD 'UNK_0xf50a' codep=0x224c parp=0xf50a
// ================================================

void UNK_0xf50a() // UNK_0xf50a
{
  UNK_0xee28(); // UNK_0xee28
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xf512: WORD 'MAPS' codep=0x224c parp=0xf51b
// ================================================
// entry

void MAPS() // MAPS
{
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
  UNK_0xf4f4(); // UNK_0xf4f4
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF(); // OFF
  UNK_0xf133(); // UNK_0xf133
  UNK_0xf50a(); // UNK_0xf50a
  if (Pop() == 0) goto label1;
  UNK_0xf187(); // UNK_0xf187
  UNK_0xf50a(); // UNK_0xf50a
  if (Pop() == 0) goto label1;
  UNK_0xf133(); // UNK_0xf133
  UNK_0xee28(); // UNK_0xee28

  label1:
  UNK_0xf1cf(); // UNK_0xf1cf
  Push(pp_ESC_dash_EN); // ESC-EN
  ON(); // ON
}


// ================================================
// 0xf541: WORD '.STORM' codep=0x224c parp=0xf54c
// ================================================
// entry

void _dot_STORM() // .STORM
{
  UNK_0xf485(); // UNK_0xf485
  UNK_0xf438(); // UNK_0xf438
  _ro__dot_STORM_rc_(); // (.STORM)
}

// 0xf554: db 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x00 'MAPS-VOC____ '
  