// ====== OVERLAY 'IT-OV' ======
// store offset = 0xedd0
// overlay size   = 0x0790

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0xaea9 C-string:'UNK_0x3f3b'
// 1704:      UNK_0xede6  codep:0x73ea parp:0xede6 size:0x0006 C-string:'UNK_0xede6'
// 1705:      UNK_0xedee  codep:0x2214 parp:0xedee size:0x0002 C-string:'UNK_0xedee'
// 1706:      UNK_0xedf2  codep:0x2214 parp:0xedf2 size:0x0002 C-string:'UNK_0xedf2'
// 1707:      UNK_0xedf6  codep:0x2214 parp:0xedf6 size:0x0002 C-string:'UNK_0xedf6'
// 1708:      UNK_0xedfa  codep:0x2214 parp:0xedfa size:0x0002 C-string:'UNK_0xedfa'
// 1709:      UNK_0xedfe  codep:0x2214 parp:0xedfe size:0x0002 C-string:'UNK_0xedfe'
// 1710:      UNK_0xee02  codep:0x2214 parp:0xee02 size:0x0002 C-string:'UNK_0xee02'
// 1711:      UNK_0xee06  codep:0x2214 parp:0xee06 size:0x0002 C-string:'UNK_0xee06'
// 1712:      UNK_0xee0a  codep:0x224c parp:0xee0a size:0x000e C-string:'UNK_0xee0a'
// 1713:      UNK_0xee1a  codep:0x224c parp:0xee1a size:0x0010 C-string:'UNK_0xee1a'
// 1714:      UNK_0xee2c  codep:0x224c parp:0xee2c size:0x0026 C-string:'UNK_0xee2c'
// 1715:      UNK_0xee54  codep:0x224c parp:0xee54 size:0x0016 C-string:'UNK_0xee54'
// 1716:      UNK_0xee6c  codep:0x1d29 parp:0xee6c size:0x0002 C-string:'UNK_0xee6c'
// 1717:      UNK_0xee70  codep:0x224c parp:0xee70 size:0x00b5 C-string:'UNK_0xee70'
// 1718:      UNK_0xef27  codep:0x224c parp:0xef27 size:0x0028 C-string:'UNK_0xef27'
// 1719:      UNK_0xef51  codep:0x224c parp:0xef51 size:0x000e C-string:'UNK_0xef51'
// 1720:      UNK_0xef61  codep:0x224c parp:0xef61 size:0x0026 C-string:'UNK_0xef61'
// 1721:      UNK_0xef89  codep:0x224c parp:0xef89 size:0x005e C-string:'UNK_0xef89'
// 1722:      UNK_0xefe9  codep:0x224c parp:0xefe9 size:0x001e C-string:'UNK_0xefe9'
// 1723:       DATE$>ADR  codep:0x224c parp:0xf015 size:0x005d C-string:'DATE_do__gt_ADR'
// 1724:      UNK_0xf074  codep:0x224c parp:0xf074 size:0x000c C-string:'UNK_0xf074'
// 1725:      UNK_0xf082  codep:0x224c parp:0xf082 size:0x0012 C-string:'UNK_0xf082'
// 1726:      UNK_0xf096  codep:0x224c parp:0xf096 size:0x002e C-string:'UNK_0xf096'
// 1727:      UNK_0xf0c6  codep:0x224c parp:0xf0c6 size:0x0016 C-string:'UNK_0xf0c6'
// 1728:      UNK_0xf0de  codep:0x224c parp:0xf0de size:0x0016 C-string:'UNK_0xf0de'
// 1729:     IDENT-ITEM$  codep:0x4a4f parp:0xf104 size:0x0020 C-string:'IDENT_dash_ITEM_do_'
// 1730:        ITEM>PAD  codep:0x224c parp:0xf131 size:0x0024 C-string:'ITEM_gt_PAD'
// 1731:      UNK_0xf157  codep:0x224c parp:0xf157 size:0x005c C-string:'UNK_0xf157'
// 1732:        BOX>LIST  codep:0x224c parp:0xf1c0 size:0x0044 C-string:'BOX_gt_LIST'
// 1733:       GET-BOXES  codep:0x224c parp:0xf212 size:0x0014 C-string:'GET_dash_BOXES'
// 1734: MAKE-SCROLL-BOX  codep:0x224c parp:0xf23a size:0x0030 C-string:'MAKE_dash_SCROLL_dash_BOX'
// 1735: DELETE-SCROLL-BOX  codep:0x224c parp:0xf280 size:0x001a C-string:'DELETE_dash_SCROLL_dash_BOX'
// 1736:  CLASS>BOX-SPEC  codep:0x4a4f parp:0xf2ad size:0x0020 C-string:'CLASS_gt_BOX_dash_SPEC'
// 1737:      UNK_0xf2cf  codep:0x224c parp:0xf2cf size:0x000e C-string:'UNK_0xf2cf'
// 1738:        BOX>TOCS  codep:0x224c parp:0xf2ea size:0x000e C-string:'BOX_gt_TOCS'
// 1739:            >BOX  codep:0x224c parp:0xf301 size:0x0080 C-string:'_gt_BOX'
// 1740:        ?ELEMENT  codep:0x224c parp:0xf38e size:0x000a C-string:'_ask_ELEMENT'
// 1741:          (BOX>)  codep:0x224c parp:0xf3a3 size:0x0038 C-string:'_ro_BOX_gt__rc_'
// 1742:            BOX>  codep:0x224c parp:0xf3e4 size:0x0000 C-string:'BOX_gt_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xee6c[2] = {0x3a, 0x20}; // UNK_0xee6c

const unsigned short int cc_UNK_0xedee = 0x000a; // UNK_0xedee
const unsigned short int cc_UNK_0xedf2 = 0x000f; // UNK_0xedf2
const unsigned short int cc_UNK_0xedf6 = 0x000e; // UNK_0xedf6
const unsigned short int cc_UNK_0xedfa = 0x0011; // UNK_0xedfa
const unsigned short int cc_UNK_0xedfe = 0x000b; // UNK_0xedfe
const unsigned short int cc_UNK_0xee02 = 0x0026; // UNK_0xee02
const unsigned short int cc_UNK_0xee06 = 0x0010; // UNK_0xee06


// 0xede2: db 0x65 0x00 'e '

// ================================================
// 0xede4: WORD 'UNK_0xede6' codep=0x73ea parp=0xede6
// ================================================
// 0xede6: db 0x1c 0x1d 0x01 0x1e 0x2c 0x65 '    ,e'

// ================================================
// 0xedec: WORD 'UNK_0xedee' codep=0x2214 parp=0xedee
// ================================================
// 0xedee: db 0x0a 0x00 '  '

// ================================================
// 0xedf0: WORD 'UNK_0xedf2' codep=0x2214 parp=0xedf2
// ================================================
// 0xedf2: db 0x0f 0x00 '  '

// ================================================
// 0xedf4: WORD 'UNK_0xedf6' codep=0x2214 parp=0xedf6
// ================================================
// 0xedf6: db 0x0e 0x00 '  '

// ================================================
// 0xedf8: WORD 'UNK_0xedfa' codep=0x2214 parp=0xedfa
// ================================================
// 0xedfa: db 0x11 0x00 '  '

// ================================================
// 0xedfc: WORD 'UNK_0xedfe' codep=0x2214 parp=0xedfe
// ================================================
// 0xedfe: db 0x0b 0x00 '  '

// ================================================
// 0xee00: WORD 'UNK_0xee02' codep=0x2214 parp=0xee02
// ================================================
// 0xee02: db 0x26 0x00 '& '

// ================================================
// 0xee04: WORD 'UNK_0xee06' codep=0x2214 parp=0xee06
// ================================================
// 0xee06: db 0x10 0x00 '  '

// ================================================
// 0xee08: WORD 'UNK_0xee0a' codep=0x224c parp=0xee0a
// ================================================

void UNK_0xee0a() // UNK_0xee0a
{
  PAD(); // PAD
  Push(Pop()+1); // 1+
  Push(0x0026);
  Push(cc_BL); // BL
  FILL(); // FILL
}


// ================================================
// 0xee18: WORD 'UNK_0xee1a' codep=0x224c parp=0xee1a
// ================================================

void UNK_0xee1a() // UNK_0xee1a
{
  SRDEPTH(); // SRDEPTH
  Push(0); // 0
  MAX(); // MAX
  Push(Pop()*2); // 2*
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
}


// ================================================
// 0xee2a: WORD 'UNK_0xee2c' codep=0x224c parp=0xee2c
// ================================================

void UNK_0xee2c() // UNK_0xee2c
{
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(pp_CTTOP); // CTTOP
  Push(Read16(Pop())); // @
  SetColor("WHITE");
  goto label2;

  label1:
  Push(0x0096);
  SetColor("GREY1");

  label2:
  _ex_COLOR(); // !COLOR
  Push(cc__7); // 7
  _dash_(); // -
  Push(cc__7); // 7
  SWAP(); // SWAP
  POS_dot_(); // POS.
}


// ================================================
// 0xee52: WORD 'UNK_0xee54' codep=0x224c parp=0xee54
// ================================================

void UNK_0xee54() // UNK_0xee54
{
  Push(0x0025);
  OVER(); // OVER
  _dash_(); // -
  Push(Pop()*2); // 2*
  Push(cc__7); // 7
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xee6a: WORD 'UNK_0xee6c' codep=0x1d29 parp=0xee6c
// ================================================
// 0xee6c: db 0x3a 0x20 ': '

// ================================================
// 0xee6e: WORD 'UNK_0xee70' codep=0x224c parp=0xee70
// ================================================

void UNK_0xee70() // UNK_0xee70
{
  _at_CRS(); // @CRS
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  UNK_0xee2c(); // UNK_0xee2c
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  PRINT("ATTENTION", 9); // (.")
  Push(cc__5); // 5
  SPACES(); // SPACES
  i++;
  } while(i<imax); // (LOOP) 0xffee

  GCR(); // GCR

  UNK_0x3f3b("THE MANIFEST-COMPUTER CAPACITY HAS");
  UNK_0xee54(); // UNK_0xee54
  GCR(); // GCR

  UNK_0x3f3b("BEEN EXCEEDED. SOME ITEMS MAY NOT");
  UNK_0xee54(); // UNK_0xee54
  GCR(); // GCR

  UNK_0x3f3b("APPEAR IN THIS LIST.");
  UNK_0xee54(); // UNK_0xee54
  GCR(); // GCR

  UNK_0x3f3b("PRESS SPACEBAR TO CONTINUE");
  UNK_0xee54(); // UNK_0xee54
  _ex_CRS(); // !CRS
}


// ================================================
// 0xef25: WORD 'UNK_0xef27' codep=0x224c parp=0xef27
// ================================================

void UNK_0xef27() // UNK_0xef27
{
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x004a);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(pp_UNK_0xee6c); // UNK_0xee6c
  ON(); // ON
  Push(0x03e8);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
  UNK_0xee70(); // UNK_0xee70
  KEY(); // KEY
  Pop(); // DROP
  UNK_0xee70(); // UNK_0xee70
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xef4f: WORD 'UNK_0xef51' codep=0x224c parp=0xef51
// ================================================

void UNK_0xef51() // UNK_0xef51
{
  UNK_0xee0a(); // UNK_0xee0a
  LoadData("BOX-NAME"); // from 'BOX         '
  UNK_0xee1a(); // UNK_0xee1a
  Push(0x0010);
  CMOVE(); // CMOVE
}


// ================================================
// 0xef5f: WORD 'UNK_0xef61' codep=0x224c parp=0xef61
// ================================================

void UNK_0xef61() // UNK_0xef61
{
  LoadData("RESEMBLES"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  LoadData("SHAPE"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@

  label1:
  _gt_C_plus_S(); // >C+S
  Push(0x63fb); // IFIELD(PHRASE-MEM)
  Push(0x63fa); // IFIELD(PHR-CNT)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xee1a(); // UNK_0xee1a
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef87: WORD 'UNK_0xef89' codep=0x224c parp=0xef89
// ================================================

void UNK_0xef89() // UNK_0xef89
{
  Push(0x000a);
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read8(Pop())&0xFF); // C@
  PAD(); // PAD
  Push(0x0020);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(0x002e);
  PAD(); // PAD
  Push(0x001f);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  U_gt__do_(); // U>$
  PAD(); // PAD
  Push(0x001f);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  U_star_(); // U*
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  U_gt__do_(); // U>$
  PAD(); // PAD
  Push(0x0026);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(Pop()-1); // 1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xefe7: WORD 'UNK_0xefe9' codep=0x224c parp=0xefe9
// ================================================

void UNK_0xefe9() // UNK_0xefe9
{
  LoadData("ELEM-NAME"); // from 'ELEMENT     '
  UNK_0xee1a(); // UNK_0xee1a
  Push(0x0010);
  CMOVE(); // CMOVE
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  UNK_0xef89(); // UNK_0xef89
}


// ================================================
// 0xf007: WORD 'DATE$>ADR' codep=0x224c parp=0xf015
// ================================================

void DATE_do__gt_ADR() // DATE$>ADR
{

  UNK_0x3f3b("00-00-");
  Push(cc__3); // 3
  PICK(); // PICK
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SWAP(); // SWAP
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x120c);
  Push(Pop() + Pop()); // +
  U_gt__do_(); // U>$
  Push(cc__4); // 4
  PICK(); // PICK
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  U_gt__do_(); // U>$
  Push(cc__4); // 4
  PICK(); // PICK
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(Pop()-1); // 1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(Pop()+1); // 1+
  U_gt__do_(); // U>$
  ROT(); // ROT
  Push(Pop()+1); // 1+
  OVER(); // OVER
  Push(Pop()-1); // 1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xf072: WORD 'UNK_0xf074' codep=0x224c parp=0xf074
// ================================================

void UNK_0xf074() // UNK_0xf074
{
  UNK_0xee0a(); // UNK_0xee0a
  Push(0x6402); // IFIELD(INST-DATE)
  Push(Read16(Pop())); // @
  UNK_0xee1a(); // UNK_0xee1a
  DATE_do__gt_ADR(); // DATE$>ADR
}


// ================================================
// 0xf080: WORD 'UNK_0xf082' codep=0x224c parp=0xf082
// ================================================

void UNK_0xf082() // UNK_0xf082
{
  PAD(); // PAD
  Push(0x0024);
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  Push(0x003f);
  FILL(); // FILL
}


// ================================================
// 0xf094: WORD 'UNK_0xf096' codep=0x224c parp=0xf096
// ================================================

void UNK_0xf096() // UNK_0xf096
{
  LoadData("ART-NAME"); // from 'ARTIFACT    '
  UNK_0xee1a(); // UNK_0xee1a
  Push(0x0018);
  CMOVE(); // CMOVE
  LoadData("UNK_0xede6"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(pp__ask__ask__ask_IT); // ???IT
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  LoadData("ART-VAL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  OVER(); // OVER
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() * Pop()); // *
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  UNK_0xef89(); // UNK_0xef89
  if (Pop() == 0) return;
  UNK_0xf082(); // UNK_0xf082
}


// ================================================
// 0xf0c4: WORD 'UNK_0xf0c6' codep=0x224c parp=0xf0c6
// ================================================

void UNK_0xf0c6() // UNK_0xf0c6
{
  LoadData("SPEC-NAME"); // from 'SPECIMEN    '
  UNK_0xee1a(); // UNK_0xee1a
  Push(0x0010);
  CMOVE(); // CMOVE
  Push(0x6400); // IFIELD(INST-VAL)
  Push(Read16(Pop())); // @
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  UNK_0xef89(); // UNK_0xef89
}


// ================================================
// 0xf0dc: WORD 'UNK_0xf0de' codep=0x224c parp=0xf0de
// ================================================

void UNK_0xf0de() // UNK_0xf0de
{
  LoadData("BD-NAME"); // from 'SPECIMEN    '
  UNK_0xee1a(); // UNK_0xee1a
  Push(0x0010);
  CMOVE(); // CMOVE
  Push(0x6400); // IFIELD(INST-VAL)
  Push(Read16(Pop())); // @
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  UNK_0xef89(); // UNK_0xef89
}


// ================================================
// 0xf0f4: WORD 'IDENT-ITEM$' codep=0x4a4f parp=0xf104
// ================================================
// 0xf104: db 0x07 0x00 0x6e 0x3a 0x0b 0x00 0x51 0xef 0x1a 0x00 0xe9 0xef 0x1b 0x00 0x74 0xf0 0x1c 0x00 0x96 0xf0 0x28 0x00 0xc6 0xf0 0x44 0x00 0x61 0xef 0x2b 0x00 0xde 0xf0 '  n:  Q       t     (   D a +   '

// ================================================
// 0xf124: WORD 'ITEM>PAD' codep=0x224c parp=0xf131
// ================================================

void ITEM_gt_PAD() // ITEM>PAD
{
  UNK_0xee0a(); // UNK_0xee0a
  UNK_0xee1a(); // UNK_0xee1a
  PAD(); // PAD
  Push(0x001e);
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  _dash_(); // -
  Push(0x002e);
  FILL(); // FILL
  Push(0x0026);
  PAD(); // PAD
  C_ex_(); // C!
  _at_INST_dash_CLASS(); // @INST-CLASS
  Pop();
  switch(Pop()) // IDENT-ITEM$
  {
  case 11:
    UNK_0xef51(); // UNK_0xef51
    break;
  case 26:
    UNK_0xefe9(); // UNK_0xefe9
    break;
  case 27:
    UNK_0xf074(); // UNK_0xf074
    break;
  case 28:
    UNK_0xf096(); // UNK_0xf096
    break;
  case 40:
    UNK_0xf0c6(); // UNK_0xf0c6
    break;
  case 68:
    UNK_0xef61(); // UNK_0xef61
    break;
  case 43:
    UNK_0xf0de(); // UNK_0xf0de
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}


// ================================================
// 0xf155: WORD 'UNK_0xf157' codep=0x224c parp=0xf157
// ================================================

void UNK_0xf157() // UNK_0xf157
{
  UNK_0xef27(); // UNK_0xef27
  Push(cc__3); // 3
  PICK(); // PICK
  Push(cc__3); // 3
  PICK(); // PICK
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  _eq_(); // =
  ICLOSE(); // ICLOSE
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x004b);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp__ro_SCROLL); // (SCROLL
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0038);
  Push(0); // 0
  Push(1); // 1
  _star_CREATE(); // *CREATE
  Push(0x6400); // IFIELD(TEXT-TE)
  Push(0x0026);
  CMOVE(); // CMOVE
  Push(0x63fd); // IFIELD(TEXT-IN)
  _1_dot_5_ex_(); // 1.5!
  Push(0x63fa); // IFIELD(TEXT-CO)
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
  Push(1); // 1
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  return;

  label1:
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  Pop(); // DROP
}


// ================================================
// 0xf1b3: WORD 'BOX>LIST' codep=0x224c parp=0xf1c0
// ================================================

void BOX_gt_LIST() // BOX>LIST
{
  SUBROOT(); // SUBROOT
  CI(); // CI

  label2:
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x0035);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(0x004b);
  _st_(); // <
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  CI_i_(); // CI'
  CI(); // CI
  ITEM_gt_PAD(); // ITEM>PAD
  PAD(); // PAD
  Push(Pop()+1); // 1+
  UNK_0xf157(); // UNK_0xf157

  label1:
  NEXT_dash_NO(); // NEXT-NO
  _2DUP(); // 2DUP
  CI(); // CI
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf204: WORD 'GET-BOXES' codep=0x224c parp=0xf212
// ================================================

void GET_dash_BOXES() // GET-BOXES
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label1:
  BOX_gt_LIST(); // BOX>LIST
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf226: WORD 'MAKE-SCROLL-BOX' codep=0x224c parp=0xf23a
// ================================================

void MAKE_dash_SCROLL_dash_BOX() // MAKE-SCROLL-BOX
{
  Push(pp_UNK_0xee6c); // UNK_0xee6c
  OFF(); // OFF
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF(); // OFF
  Push2Words("FRAGMENT");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0038);
  Push(1); // 1
  _star_CREATE(); // *CREATE
  CI(); // CI
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  CI_i_(); // CI'
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_ex_(); // 1.5!
  Push(pp_SCROLL_dash_); // SCROLL-
  OFF(); // OFF
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf26a: WORD 'DELETE-SCROLL-BOX' codep=0x224c parp=0xf280
// ================================================

void DELETE_dash_SCROLL_dash_BOX() // DELETE-SCROLL-BOX
{
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  _gt_C(); // >C
  Push(pp__ro_SCROLL); // (SCROLL
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  SET_dash_CURRENT(); // SET-CURRENT
  IDELETE(); // IDELETE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_ESC_dash_EN); // ESC-EN
  ON(); // ON
}


// ================================================
// 0xf29a: WORD 'CLASS>BOX-SPEC' codep=0x4a4f parp=0xf2ad
// ================================================
// 0xf2ad: db 0x07 0x00 0x6e 0x3a 0x1a 0x00 0xee 0xed 0x1c 0x00 0xf2 0xed 0x28 0x00 0xf6 0xed 0x29 0x00 0x06 0xee 0x2b 0x00 0x02 0xee 0x1b 0x00 0xfa 0xed 0x44 0x00 0xfe 0xed '  n:        (   )   +       D   '

// ================================================
// 0xf2cd: WORD 'UNK_0xf2cf' codep=0x224c parp=0xf2cf
// ================================================

void UNK_0xf2cf() // UNK_0xf2cf
{
  Pop();
  switch(Pop()) // CLASS>BOX-SPEC
  {
  case 26:
    UNK_0xedee(); // UNK_0xedee
    break;
  case 28:
    UNK_0xedf2(); // UNK_0xedf2
    break;
  case 40:
    UNK_0xedf6(); // UNK_0xedf6
    break;
  case 41:
    UNK_0xee06(); // UNK_0xee06
    break;
  case 43:
    UNK_0xee02(); // UNK_0xee02
    break;
  case 27:
    UNK_0xedfa(); // UNK_0xedfa
    break;
  case 68:
    UNK_0xedfe(); // UNK_0xedfe
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
  Push(0x000b);
  SWAP(); // SWAP
  Push(1); // 1
  _star_CREATE(); // *CREATE
}


// ================================================
// 0xf2dd: WORD 'BOX>TOCS' codep=0x224c parp=0xf2ea
// ================================================

void BOX_gt_TOCS() // BOX>TOCS
{
  Pop();
  switch(Pop()) // CLASS>BOX-SPEC
  {
  case 26:
    UNK_0xedee(); // UNK_0xedee
    break;
  case 28:
    UNK_0xedf2(); // UNK_0xedf2
    break;
  case 40:
    UNK_0xedf6(); // UNK_0xedf6
    break;
  case 41:
    UNK_0xee06(); // UNK_0xee06
    break;
  case 43:
    UNK_0xee02(); // UNK_0xee02
    break;
  case 27:
    UNK_0xedfa(); // UNK_0xedfa
    break;
  case 68:
    UNK_0xedfe(); // UNK_0xedfe
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf2f8: WORD '>BOX' codep=0x224c parp=0xf301
// ================================================

void _gt_BOX() // >BOX
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_CLASS(); // @INST-CLASS
  _gt_R(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(h); // I
  Pop();
  switch(Pop()) // CLASS>BOX-SPEC
  {
  case 26:
    UNK_0xedee(); // UNK_0xedee
    break;
  case 28:
    UNK_0xedf2(); // UNK_0xedf2
    break;
  case 40:
    UNK_0xedf6(); // UNK_0xedf6
    break;
  case 41:
    UNK_0xee06(); // UNK_0xee06
    break;
  case 43:
    UNK_0xee02(); // UNK_0xee02
    break;
  case 27:
    UNK_0xedfa(); // UNK_0xedfa
    break;
  case 68:
    UNK_0xedfe(); // UNK_0xedfe
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(h); // I
  UNK_0xf2cf(); // UNK_0xf2cf

  label1:
  R_gt_(); // R>
  BOX_gt_TOCS(); // BOX>TOCS
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  _at_INST_dash_CLASS(); // @INST-CLASS
  ICLOSE(); // ICLOSE
  Push(Read16(sp)); // DUP
  Push(0x001a);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  OVER(); // OVER
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  ICLOSE(); // ICLOSE
  if (Pop() == 0) goto label3;
  IOPEN(); // IOPEN

  label4:
  Push(Read16(sp)); // DUP
  INEXT(); // INEXT
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  _gt_C_plus_S(); // >C+S
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  CI(); // CI
  ICLOSE(); // ICLOSE
  _gt_INACTIVE(); // >INACTIVE
  Push(0x63fa); // IFIELD(INST-QTY)
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  goto label5;

  label3:
  Pop(); // DROP
  CI(); // CI
  IINSERT(); // IINSERT

  label5:
  goto label6;

  label2:
  Pop(); Pop();// 2DROP
  CI(); // CI
  IINSERT(); // IINSERT

  label6:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf381: WORD '?ELEMENT' codep=0x224c parp=0xf38e
// ================================================

void _ask_ELEMENT() // ?ELEMENT
{
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x001a);
  _eq_(); // =
}


// ================================================
// 0xf398: WORD '(BOX>)' codep=0x224c parp=0xf3a3
// ================================================

void _ro_BOX_gt__rc_() // (BOX>)
{
  _ask_ELEMENT(); // ?ELEMENT
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(0x63fa); // IFIELD(INST-QTY)
  _plus__ex_(); // +!
  Push(0x001a);
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex_(); // !
  C_gt_(); // C>
  return;

  label1:
  IEXTRACT(); // IEXTRACT
}


// ================================================
// 0xf3db: WORD 'BOX>' codep=0x224c parp=0xf3e4
// ================================================

void BOX_gt_() // BOX>
{
  _ro_BOX_gt__rc_(); // (BOX>)
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE

  label2:
  Push(1); // 1
  goto label3;

  label1:
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _ask_ELEMENT(); // ?ELEMENT
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  ICLOSE(); // ICLOSE
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND

  label3:
  ROT(); // ROT
  ROT(); // ROT
}

// 0xf41a: db 0x49 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x20 0x34 0x2f 0x30 0x33 0x2f 0x38 0x36 0x29 0x20 0x20 0x31 0x30 0x31 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x44 0x49 0x53 0x4b 0x3e 0x50 0x52 0x4d 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x6c 0x6f 0x61 0x64 0x20 0x70 0x61 0x72 0x61 0x6d 0x65 0x74 0x65 0x72 0x20 0x73 0x74 0x61 0x63 0x6b 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x44 0x49 0x53 0x4b 0x3e 0x52 0x54 0x4e 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x6c 0x6f 0x61 0x64 0x20 0x72 0x65 0x74 0x75 0x72 0x6e 0x20 0x73 0x74 0x61 0x63 0x6b 0x20 0x74 0x6f 0x20 0x52 0x54 0x4e 0x54 0x45 0x4d 0x50 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x43 0x4b 0x53 0x55 0x4d 0x20 0x40 0x20 0x3a 0x43 0x4b 0x53 0x55 0x4d 0x20 0x40 0x20 0x3d 0x20 0x5c 0x20 0x63 0x6d 0x70 0x20 0x63 0x68 0x65 0x63 0x6b 0x20 0x73 0x75 0x6d 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x49 0x46 0x20 0x20 0x20 0x2e 0x4c 0x4f 0x41 0x44 0x45 0x44 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'IT-VOC__________________________---------------------  4/03/86)  101                     DISK>PRM           \ load parameter stack                       DISK>RTN           \ load return stack to RTNTEMP               CKSUM @ :CKSUM @ = \ cmp check sum                              IF   .LOADED                                  '
  