// ====== OVERLAY 'ICONP-OV' ======
// store offset = 0xf220
// overlay size   = 0x0340

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf236  codep:0x744d parp:0xf236 size:0x0003 C-string:'UNK_0xf236'
// 1704:      UNK_0xf23b  codep:0x73ea parp:0xf23b size:0x0006 C-string:'UNK_0xf23b'
// 1705:      UNK_0xf243  codep:0x744d parp:0xf243 size:0x0003 C-string:'UNK_0xf243'
// 1706:      UNK_0xf248  codep:0x73ea parp:0xf248 size:0x0006 C-string:'UNK_0xf248'
// 1707:      UNK_0xf250  codep:0x744d parp:0xf250 size:0x0003 C-string:'UNK_0xf250'
// 1708:      UNK_0xf255  codep:0x744d parp:0xf255 size:0x0003 C-string:'UNK_0xf255'
// 1709:      UNK_0xf25a  codep:0x73ea parp:0xf25a size:0x000b C-string:'UNK_0xf25a'
// 1710:      UNK_0xf267  codep:0x2214 parp:0xf267 size:0x0002 C-string:'UNK_0xf267'
// 1711:      UNK_0xf26b  codep:0x2214 parp:0xf26b size:0x0002 C-string:'UNK_0xf26b'
// 1712:      UNK_0xf26f  codep:0x2214 parp:0xf26f size:0x0002 C-string:'UNK_0xf26f'
// 1713:      UNK_0xf273  codep:0x2214 parp:0xf273 size:0x0002 C-string:'UNK_0xf273'
// 1714:      UNK_0xf277  codep:0x2214 parp:0xf277 size:0x0002 C-string:'UNK_0xf277'
// 1715:      UNK_0xf27b  codep:0x2214 parp:0xf27b size:0x0002 C-string:'UNK_0xf27b'
// 1716:      UNK_0xf27f  codep:0x2214 parp:0xf27f size:0x0002 C-string:'UNK_0xf27f'
// 1717:      UNK_0xf283  codep:0x2214 parp:0xf283 size:0x0002 C-string:'UNK_0xf283'
// 1718:      UNK_0xf287  codep:0x2214 parp:0xf287 size:0x0002 C-string:'UNK_0xf287'
// 1719:      UNK_0xf28b  codep:0x2214 parp:0xf28b size:0x0002 C-string:'UNK_0xf28b'
// 1720:      UNK_0xf28f  codep:0x2214 parp:0xf28f size:0x0002 C-string:'UNK_0xf28f'
// 1721:      UNK_0xf293  codep:0x224c parp:0xf293 size:0x000c C-string:'UNK_0xf293'
// 1722:      UNK_0xf2a1  codep:0x224c parp:0xf2a1 size:0x001c C-string:'UNK_0xf2a1'
// 1723:   STAR-ID-CASES  codep:0x4a4f parp:0xf2cf size:0x0008 C-string:'STAR_dash_ID_dash_CASES'
// 1724:      UNK_0xf2d9  codep:0x224c parp:0xf2d9 size:0x0008 C-string:'UNK_0xf2d9'
// 1725: PLANET-ID-CASES  codep:0x4a4f parp:0xf2f5 size:0x0008 C-string:'PLANET_dash_ID_dash_CASES'
// 1726:      UNK_0xf2ff  codep:0x224c parp:0xf2ff size:0x0008 C-string:'UNK_0xf2ff'
// 1727:      UNK_0xf309  codep:0x224c parp:0xf309 size:0x000a C-string:'UNK_0xf309'
// 1728:          BOX-ID  codep:0x4a4f parp:0xf31e size:0x000c C-string:'BOX_dash_ID'
// 1729:      UNK_0xf32c  codep:0x224c parp:0xf32c size:0x000a C-string:'UNK_0xf32c'
// 1730:        SPACE-ID  codep:0x4a4f parp:0xf343 size:0x0024 C-string:'SPACE_dash_ID'
// 1731:   RUIN-ID-CASES  codep:0x4a4f parp:0xf379 size:0x000c C-string:'RUIN_dash_ID_dash_CASES'
// 1732:      UNK_0xf387  codep:0x224c parp:0xf387 size:0x0006 C-string:'UNK_0xf387'
// 1733:      UNK_0xf38f  codep:0x224c parp:0xf38f size:0x001a C-string:'UNK_0xf38f'
// 1734:      UNK_0xf3ab  codep:0x224c parp:0xf3ab size:0x0016 C-string:'UNK_0xf3ab'
// 1735:       PLANET-ID  codep:0x4a4f parp:0xf3cf size:0x0020 C-string:'PLANET_dash_ID'
// 1736:      UNK_0xf3f1  codep:0x224c parp:0xf3f1 size:0x0014 C-string:'UNK_0xf3f1'
// 1737:   STAR-IC-CASES  codep:0x4a4f parp:0xf417 size:0x001c C-string:'STAR_dash_IC_dash_CASES'
// 1738:      UNK_0xf435  codep:0x224c parp:0xf435 size:0x0006 C-string:'UNK_0xf435'
// 1739:      UNK_0xf43d  codep:0x224c parp:0xf43d size:0x0012 C-string:'UNK_0xf43d'
// 1740:   PLAN-IC-CASES  codep:0x4a4f parp:0xf461 size:0x0018 C-string:'PLAN_dash_IC_dash_CASES'
// 1741:      UNK_0xf47b  codep:0x224c parp:0xf47b size:0x0008 C-string:'UNK_0xf47b'
// 1742:      UNK_0xf485  codep:0x224c parp:0xf485 size:0x0010 C-string:'UNK_0xf485'
// 1743:          BOX-IC  codep:0x4a4f parp:0xf4a0 size:0x000c C-string:'BOX_dash_IC'
// 1744:      UNK_0xf4ae  codep:0x224c parp:0xf4ae size:0x000a C-string:'UNK_0xf4ae'
// 1745:       #IC-CASES  codep:0x4a4f parp:0xf4c6 size:0x0020 C-string:'_n_IC_dash_CASES'
// 1746:      UNK_0xf4e8  codep:0x224c parp:0xf4e8 size:0x0006 C-string:'UNK_0xf4e8'
// 1747:       ICON-PARM  codep:0x224c parp:0xf4fc size:0x0010 C-string:'ICON_dash_PARM'
// 1748:            +ICP  codep:0x224c parp:0xf515 size:0x0006 C-string:'_plus_ICP'
// 1749:        +ICONBOX  codep:0x224c parp:0xf528 size:0x0000 C-string:'_plus_ICONBOX'

// =================================
// =========== VARIABLES ===========
// =================================

const unsigned short int cc_UNK_0xf267 = 0x0034; // UNK_0xf267
const unsigned short int cc_UNK_0xf26b = 0x0034; // UNK_0xf26b
const unsigned short int cc_UNK_0xf26f = 0x0033; // UNK_0xf26f
const unsigned short int cc_UNK_0xf273 = 0x0033; // UNK_0xf273
const unsigned short int cc_UNK_0xf277 = 0x0014; // UNK_0xf277
const unsigned short int cc_UNK_0xf27b = 0x0015; // UNK_0xf27b
const unsigned short int cc_UNK_0xf27f = 0x0016; // UNK_0xf27f
const unsigned short int cc_UNK_0xf283 = 0x0017; // UNK_0xf283
const unsigned short int cc_UNK_0xf287 = 0x0018; // UNK_0xf287
const unsigned short int cc_UNK_0xf28b = 0x0019; // UNK_0xf28b
const unsigned short int cc_UNK_0xf28f = 0x001a; // UNK_0xf28f


// 0xf232: db 0x32 0x00 '2 '

// ================================================
// 0xf234: WORD 'UNK_0xf236' codep=0x744d parp=0xf236
// ================================================
// 0xf236: db 0x14 0x49 0x01 ' I '

// ================================================
// 0xf239: WORD 'UNK_0xf23b' codep=0x73ea parp=0xf23b
// ================================================
// 0xf23b: db 0x19 0x1c 0x01 0x49 0x91 0x64 '   I d'

// ================================================
// 0xf241: WORD 'UNK_0xf243' codep=0x744d parp=0xf243
// ================================================
// 0xf243: db 0x19 0x0b 0x01 '   '

// ================================================
// 0xf246: WORD 'UNK_0xf248' codep=0x73ea parp=0xf248
// ================================================
// 0xf248: db 0x44 0x90 0x02 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x744d parp=0xf250
// ================================================
// 0xf250: db 0x44 0x15 0x01 'D  '

// ================================================
// 0xf253: WORD 'UNK_0xf255' codep=0x744d parp=0xf255
// ================================================
// 0xf255: db 0x44 0x11 0x01 'D  '

// ================================================
// 0xf258: WORD 'UNK_0xf25a' codep=0x73ea parp=0xf25a
// ================================================
// 0xf25a: db 0x20 0x01 0x01 0x16 0x8f 0x65 0x4d 0x74 0x3d 0x1b 0x01 '     eMt=  '

// ================================================
// 0xf265: WORD 'UNK_0xf267' codep=0x2214 parp=0xf267
// ================================================
// 0xf267: db 0x34 0x00 '4 '

// ================================================
// 0xf269: WORD 'UNK_0xf26b' codep=0x2214 parp=0xf26b
// ================================================
// 0xf26b: db 0x34 0x00 '4 '

// ================================================
// 0xf26d: WORD 'UNK_0xf26f' codep=0x2214 parp=0xf26f
// ================================================
// 0xf26f: db 0x33 0x00 '3 '

// ================================================
// 0xf271: WORD 'UNK_0xf273' codep=0x2214 parp=0xf273
// ================================================
// 0xf273: db 0x33 0x00 '3 '

// ================================================
// 0xf275: WORD 'UNK_0xf277' codep=0x2214 parp=0xf277
// ================================================
// 0xf277: db 0x14 0x00 '  '

// ================================================
// 0xf279: WORD 'UNK_0xf27b' codep=0x2214 parp=0xf27b
// ================================================
// 0xf27b: db 0x15 0x00 '  '

// ================================================
// 0xf27d: WORD 'UNK_0xf27f' codep=0x2214 parp=0xf27f
// ================================================
// 0xf27f: db 0x16 0x00 '  '

// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x2214 parp=0xf283
// ================================================
// 0xf283: db 0x17 0x00 '  '

// ================================================
// 0xf285: WORD 'UNK_0xf287' codep=0x2214 parp=0xf287
// ================================================
// 0xf287: db 0x18 0x00 '  '

// ================================================
// 0xf289: WORD 'UNK_0xf28b' codep=0x2214 parp=0xf28b
// ================================================
// 0xf28b: db 0x19 0x00 '  '

// ================================================
// 0xf28d: WORD 'UNK_0xf28f' codep=0x2214 parp=0xf28f
// ================================================
// 0xf28f: db 0x1a 0x00 '  '

// ================================================
// 0xf291: WORD 'UNK_0xf293' codep=0x224c parp=0xf293
// ================================================

void UNK_0xf293() // UNK_0xf293
{
  Push(0x6438); // IFIELD(UNK_0xf236)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x001b);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf29f: WORD 'UNK_0xf2a1' codep=0x224c parp=0xf2a1
// ================================================

void UNK_0xf2a1() // UNK_0xf2a1
{
  LoadData("UNK_0xf23b"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(0x63fa); // IFIELD(UNK_0xf243)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0023);
  Push(Pop() + Pop()); // +
  return;

  label1:
  Push(0x002b);
}


// ================================================
// 0xf2bd: WORD 'STAR-ID-CASES' codep=0x4a4f parp=0xf2cf
// ================================================
// 0xf2cf: db 0x01 0x00 0x67 0xf2 0x02 0x00 0x6b 0xf2 '  g   k '

// ================================================
// 0xf2d7: WORD 'UNK_0xf2d9' codep=0x224c parp=0xf2d9
// ================================================

void UNK_0xf2d9() // UNK_0xf2d9
{
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // STAR-ID-CASES
  {
  case 2:
    UNK_0xf26b(); // UNK_0xf26b
    break;
  default:
    UNK_0xf267(); // UNK_0xf267
    break;

  }
}


// ================================================
// 0xf2e1: WORD 'PLANET-ID-CASES' codep=0x4a4f parp=0xf2f5
// ================================================
// 0xf2f5: db 0x01 0x00 0x6f 0xf2 0x02 0x00 0x73 0xf2 '  o   s '

// ================================================
// 0xf2fd: WORD 'UNK_0xf2ff' codep=0x224c parp=0xf2ff
// ================================================

void UNK_0xf2ff() // UNK_0xf2ff
{
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // PLANET-ID-CASES
  {
  case 2:
    UNK_0xf273(); // UNK_0xf273
    break;
  default:
    UNK_0xf26f(); // UNK_0xf26f
    break;

  }
}


// ================================================
// 0xf307: WORD 'UNK_0xf309' codep=0x224c parp=0xf309
// ================================================

void UNK_0xf309() // UNK_0xf309
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(0x0032);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf313: WORD 'BOX-ID' codep=0x4a4f parp=0xf31e
// ================================================
// 0xf31e: db 0x02 0x00 0xec 0x50 0x18 0x00 0xd9 0xf2 0x20 0x00 0xff 0xf2 '   P        '

// ================================================
// 0xf32a: WORD 'UNK_0xf32c' codep=0x224c parp=0xf32c
// ================================================

void UNK_0xf32c() // UNK_0xf32c
{
  IOPEN(); // IOPEN
  _at_INST_dash_CLASS(); // @INST-CLASS
  Pop();
  switch(Pop()) // BOX-ID
  {
  case 24:
    UNK_0xf2d9(); // UNK_0xf2d9
    break;
  case 32:
    UNK_0xf2ff(); // UNK_0xf2ff
    break;
  default:
    INVIS_dash_I(); // INVIS-I
    break;

  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf336: WORD 'SPACE-ID' codep=0x4a4f parp=0xf343
// ================================================
// 0xf343: db 0x08 0x00 0xec 0x50 0x0b 0x00 0x2c 0xf3 0x14 0x00 0x93 0xf2 0x17 0x00 0xde 0x50 0x18 0x00 0xd9 0xf2 0x19 0x00 0xa1 0xf2 0x20 0x00 0xff 0xf2 0x2d 0x00 0xfa 0x50 0x2e 0x00 0x09 0xf3 '   P  ,        P            -  P.   '

// ================================================
// 0xf367: WORD 'RUIN-ID-CASES' codep=0x4a4f parp=0xf379
// ================================================
// 0xf379: db 0x02 0x00 0x83 0xf2 0x02 0x00 0x87 0xf2 0x04 0x00 0x87 0xf2 '            '

// ================================================
// 0xf385: WORD 'UNK_0xf387' codep=0x224c parp=0xf387
// ================================================

void UNK_0xf387() // UNK_0xf387
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Pop();
  switch(Pop()) // RUIN-ID-CASES
  {
  case 2:
    UNK_0xf287(); // UNK_0xf287
    break;
  case 4:
    UNK_0xf287(); // UNK_0xf287
    break;
  default:
    UNK_0xf283(); // UNK_0xf283
    break;

  }
}


// ================================================
// 0xf38d: WORD 'UNK_0xf38f' codep=0x224c parp=0xf38f
// ================================================

void UNK_0xf38f() // UNK_0xf38f
{
  Push(0x6404); // IFIELD(UNK_0xf250)
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0010);
  Push(Pop() + Pop()); // +
  return;

  label1:
  LoadData("UNK_0xf248"); // from 'CREATURE    '
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf3a9: WORD 'UNK_0xf3ab' codep=0x224c parp=0xf3ab
// ================================================

void UNK_0xf3ab() // UNK_0xf3ab
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0x002c);
  return;

  label1:
  Push(cc_UNK_0xf27b); // UNK_0xf27b
}


// ================================================
// 0xf3c1: WORD 'PLANET-ID' codep=0x4a4f parp=0xf3cf
// ================================================
// 0xf3cf: db 0x07 0x00 0x6e 0x3a 0x28 0x00 0x77 0xf2 0x29 0x00 0x87 0xf3 0x2a 0x00 0x8f 0xf2 0x44 0x00 0x8f 0xf3 0x14 0x00 0x8b 0xf2 0x1a 0x00 0xab 0xf3 0x1c 0x00 0x7f 0xf2 '  n:( w )   *   D              '

// ================================================
// 0xf3ef: WORD 'UNK_0xf3f1' codep=0x224c parp=0xf3f1
// ================================================

void UNK_0xf3f1() // UNK_0xf3f1
{
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Pop();
  switch(Pop()) // SPACE-ID
  {
  case 11:
    UNK_0xf32c(); // UNK_0xf32c
    break;
  case 20:
    UNK_0xf293(); // UNK_0xf293
    break;
  case 23:
    SYS_dash_ICO(); // SYS-ICO
    break;
  case 24:
    UNK_0xf2d9(); // UNK_0xf2d9
    break;
  case 25:
    UNK_0xf2a1(); // UNK_0xf2a1
    break;
  case 32:
    UNK_0xf2ff(); // UNK_0xf2ff
    break;
  case 45:
    FLUX_dash_IC(); // FLUX-IC
    break;
  case 46:
    UNK_0xf309(); // UNK_0xf309
    break;
  default:
    INVIS_dash_I(); // INVIS-I
    break;

  }
  return;

  label1:
  Pop();
  switch(Pop()) // PLANET-ID
  {
  case 40:
    UNK_0xf277(); // UNK_0xf277
    break;
  case 41:
    UNK_0xf387(); // UNK_0xf387
    break;
  case 42:
    UNK_0xf28f(); // UNK_0xf28f
    break;
  case 68:
    UNK_0xf38f(); // UNK_0xf38f
    break;
  case 20:
    UNK_0xf28b(); // UNK_0xf28b
    break;
  case 26:
    UNK_0xf3ab(); // UNK_0xf3ab
    break;
  case 28:
    UNK_0xf27f(); // UNK_0xf27f
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}


// ================================================
// 0xf405: WORD 'STAR-IC-CASES' codep=0x4a4f parp=0xf417
// ================================================
// 0xf417: db 0x06 0x00 0x8b 0x4f 0x4d 0x00 0x3a 0x4f 0x4b 0x00 0xa1 0x4f 0x47 0x00 0xad 0x4f 0x46 0x00 0xb8 0x4f 0x41 0x00 0x31 0x4f 0x42 0x00 0x71 0x4f '   OM :OK  OG  OF  OA 1OB qO'

// ================================================
// 0xf433: WORD 'UNK_0xf435' codep=0x224c parp=0xf435
// ================================================

void UNK_0xf435() // UNK_0xf435
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Pop();
  switch(Pop()) // STAR-IC-CASES
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
    BLUE(); // BLUE
    break;
  default:
    LT_dash_BLUE(); // LT-BLUE
    break;

  }
}


// ================================================
// 0xf43b: WORD 'UNK_0xf43d' codep=0x224c parp=0xf43d
// ================================================

void UNK_0xf43d() // UNK_0xf43d
{
  Push(0x6400); // IFIELD(UNK_0xf255)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(cc_DEFAULT); // DEFAULT
  return;

  label1:
  Push(cc_DEAD_dash_IC); // DEAD-IC
}


// ================================================
// 0xf44f: WORD 'PLAN-IC-CASES' codep=0x4a4f parp=0xf461
// ================================================
// 0xf461: db 0x05 0x00 0x51 0x4f 0x00 0x00 0x5c 0x4f 0x01 0x00 0x46 0x4f 0x02 0x00 0x71 0x4f 0x03 0x00 0xb8 0x4f 0x04 0x00 0xa1 0x4f '  QO  \O  FO  qO   O   O'

// ================================================
// 0xf479: WORD 'UNK_0xf47b' codep=0x224c parp=0xf47b
// ================================================

void UNK_0xf47b() // UNK_0xf47b
{
  LoadData("UNK_0xf25a"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Pop();
  switch(Pop()) // PLAN-IC-CASES
  {
  case 0:
    GREY1(); // GREY1
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
}


// ================================================
// 0xf483: WORD 'UNK_0xf485' codep=0x224c parp=0xf485
// ================================================

void UNK_0xf485() // UNK_0xf485
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  if (Pop() == 0) goto label1;
  Push(cc__3); // 3
  return;

  label1:
  Push(cc_DEFAULT); // DEFAULT
}


// ================================================
// 0xf495: WORD 'BOX-IC' codep=0x4a4f parp=0xf4a0
// ================================================
// 0xf4a0: db 0x02 0x00 0x16 0x51 0x18 0x00 0x35 0xf4 0x20 0x00 0x7b 0xf4 '   Q  5   { '

// ================================================
// 0xf4ac: WORD 'UNK_0xf4ae' codep=0x224c parp=0xf4ae
// ================================================

void UNK_0xf4ae() // UNK_0xf4ae
{
  IOPEN(); // IOPEN
  _at_INST_dash_CLASS(); // @INST-CLASS
  Pop();
  switch(Pop()) // BOX-IC
  {
  case 24:
    UNK_0xf435(); // UNK_0xf435
    break;
  case 32:
    UNK_0xf47b(); // UNK_0xf47b
    break;
  default:
    DEFAULT(); // DEFAULT
    break;

  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4b8: WORD '#IC-CASES' codep=0x4a4f parp=0xf4c6
// ================================================
// 0xf4c6: db 0x07 0x00 0x16 0x51 0x0b 0x00 0xae 0xf4 0x17 0x00 0x35 0xf4 0x20 0x00 0x7b 0xf4 0x18 0x00 0x35 0xf4 0x44 0x00 0x3d 0xf4 0x2d 0x00 0x85 0xf4 0x2e 0x00 0x26 0x4f '   Q      5   {   5 D = -   . &O'

// ================================================
// 0xf4e6: WORD 'UNK_0xf4e8' codep=0x224c parp=0xf4e8
// ================================================

void UNK_0xf4e8() // UNK_0xf4e8
{
  _at_INST_dash_CLASS(); // @INST-CLASS
  Pop();
  switch(Pop()) // #IC-CASES
  {
  case 11:
    UNK_0xf4ae(); // UNK_0xf4ae
    break;
  case 23:
    UNK_0xf435(); // UNK_0xf435
    break;
  case 32:
    UNK_0xf47b(); // UNK_0xf47b
    break;
  case 24:
    UNK_0xf435(); // UNK_0xf435
    break;
  case 68:
    UNK_0xf43d(); // UNK_0xf43d
    break;
  case 45:
    UNK_0xf485(); // UNK_0xf485
    break;
  case 46:
    DK_dash_GREEN(); // DK-GREEN
    break;
  default:
    DEFAULT(); // DEFAULT
    break;

  }
}


// ================================================
// 0xf4ee: WORD 'ICON-PARM' codep=0x224c parp=0xf4fc
// ================================================
// entry

void ICON_dash_PARM() // ICON-PARM
{
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  UNK_0xf3f1(); // UNK_0xf3f1
  UNK_0xf4e8(); // UNK_0xf4e8
  CI(); // CI
}


// ================================================
// 0xf50c: WORD '+ICP' codep=0x224c parp=0xf515
// ================================================

void _plus_ICP() // +ICP
{
  ICON_dash_PARM(); // ICON-PARM
  _plus_ICON(); // +ICON
}


// ================================================
// 0xf51b: WORD '+ICONBOX' codep=0x224c parp=0xf528
// ================================================
// entry

void _plus_ICONBOX() // +ICONBOX
{
  Push(0xf515);
  ALL(); // ALL
}

// 0xf530: db 0x56 0x49 0x43 0x4f 0x4e 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x46 0x49 0x58 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'VICONP__________________________FIX ------------ '
  