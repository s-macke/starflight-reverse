// ====== OVERLAY 'IT-OV' ======
// store offset = 0xedd0
// overlay size   = 0x0790

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEDE6  codep:0x73ea wordp:0xede6 size:0x0006 C-string:'WEDE6'
//           WEDEE  codep:0x2214 wordp:0xedee size:0x0002 C-string:'WEDEE'
//           WEDF2  codep:0x2214 wordp:0xedf2 size:0x0002 C-string:'WEDF2'
//           WEDF6  codep:0x2214 wordp:0xedf6 size:0x0002 C-string:'WEDF6'
//           WEDFA  codep:0x2214 wordp:0xedfa size:0x0002 C-string:'WEDFA'
//           WEDFE  codep:0x2214 wordp:0xedfe size:0x0002 C-string:'WEDFE'
//           WEE02  codep:0x2214 wordp:0xee02 size:0x0002 C-string:'WEE02'
//           WEE06  codep:0x2214 wordp:0xee06 size:0x0002 C-string:'WEE06'
//           WEE0A  codep:0x224c wordp:0xee0a size:0x000e C-string:'WEE0A'
//           WEE1A  codep:0x224c wordp:0xee1a size:0x0010 C-string:'WEE1A'
//           WEE2C  codep:0x224c wordp:0xee2c size:0x0026 C-string:'WEE2C'
//           WEE54  codep:0x224c wordp:0xee54 size:0x0016 C-string:'WEE54'
//           WEE6C  codep:0x1d29 wordp:0xee6c size:0x0002 C-string:'WEE6C'
//           WEE70  codep:0x224c wordp:0xee70 size:0x00b5 C-string:'WEE70'
//           WEF27  codep:0x224c wordp:0xef27 size:0x0028 C-string:'WEF27'
//           WEF51  codep:0x224c wordp:0xef51 size:0x000e C-string:'WEF51'
//           WEF61  codep:0x224c wordp:0xef61 size:0x0026 C-string:'WEF61'
//           WEF89  codep:0x224c wordp:0xef89 size:0x005e C-string:'WEF89'
//           WEFE9  codep:0x224c wordp:0xefe9 size:0x001e C-string:'WEFE9'
//       DATE$>ADR  codep:0x224c wordp:0xf015 size:0x005d C-string:'DATE_do__gt_ADR'
//           WF074  codep:0x224c wordp:0xf074 size:0x000c C-string:'WF074'
//           WF082  codep:0x224c wordp:0xf082 size:0x0012 C-string:'WF082'
//           WF096  codep:0x224c wordp:0xf096 size:0x002e C-string:'WF096'
//           WF0C6  codep:0x224c wordp:0xf0c6 size:0x0016 C-string:'WF0C6'
//           WF0DE  codep:0x224c wordp:0xf0de size:0x0016 C-string:'WF0DE'
//     IDENT-ITEM$  codep:0x4a4f wordp:0xf104 size:0x0020 C-string:'IDENT_dash_ITEM_do_'
//        ITEM>PAD  codep:0x224c wordp:0xf131 size:0x0024 C-string:'ITEM_gt_PAD'
//           WF157  codep:0x224c wordp:0xf157 size:0x005c C-string:'WF157'
//        BOX>LIST  codep:0x224c wordp:0xf1c0 size:0x0044 C-string:'BOX_gt_LIST'
//       GET-BOXES  codep:0x224c wordp:0xf212 size:0x0014 C-string:'GET_dash_BOXES'
// MAKE-SCROLL-BOX  codep:0x224c wordp:0xf23a size:0x0030 C-string:'MAKE_dash_SCROLL_dash_BOX'
// DELETE-SCROLL-BOX  codep:0x224c wordp:0xf280 size:0x001a C-string:'DELETE_dash_SCROLL_dash_BOX'
//  CLASS>BOX-SPEC  codep:0x4a4f wordp:0xf2ad size:0x0020 C-string:'CLASS_gt_BOX_dash_SPEC'
//           WF2CF  codep:0x224c wordp:0xf2cf size:0x000e C-string:'WF2CF'
//        BOX>TOCS  codep:0x224c wordp:0xf2ea size:0x000e C-string:'BOX_gt_TOCS'
//            >BOX  codep:0x224c wordp:0xf301 size:0x0080 C-string:'_gt_BOX'
//        ?ELEMENT  codep:0x224c wordp:0xf38e size:0x000a C-string:'IsELEMENT'
//          (BOX>)  codep:0x224c wordp:0xf3a3 size:0x0038 C-string:'_ro_BOX_gt__rc_'
//            BOX>  codep:0x224c wordp:0xf3e4 size:0x0000 C-string:'BOX_gt_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_Is_ask__ask_IT; // ???IT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_TIME_dash_PASSING; // TIME-PASSING
extern const unsigned short int pp__ro_SCROLL_dash_BOX_rc_; // (SCROLL-BOX)
extern const unsigned short int pp__ro_SCROLL_dash_CONT_rc_; // (SCROLL-CONT)
extern const unsigned short int pp_CTTOP; // CTTOP
extern LoadDataType SHAPE; // SHAPE
extern LoadDataType RESEMBLES; // RESEMBLES
extern LoadDataType BOX_dash_NAME; // BOX-NAME
extern LoadDataType SPEC_dash_NAME; // SPEC-NAME
extern LoadDataType BD_dash_NAME; // BD-NAME
extern LoadDataType ELEM_dash_NAME; // ELEM-NAME
extern LoadDataType ELEM_dash_VAL; // ELEM-VAL
extern LoadDataType ART_dash_NAME; // ART-NAME
extern LoadDataType ART_dash_VAL; // ART-VAL
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color GREY1; // GREY1
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_VAL; // INST-VAL
extern IFieldType INST_dash_DATE; // INST-DATE
extern IFieldType PHR_dash_CNT; // PHR-CNT
extern IFieldType PHRASE_dash_MEM; // PHRASE-MEM
extern IFieldType TEXT_dash_CO; // TEXT-CO
extern IFieldType TEXT_dash_IN; // TEXT-IN
extern IFieldType TEXT_dash_TE; // TEXT-TE
void MAX(); // MAX
void PAD(); // PAD
void SPACES(); // SPACES
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void PICK(); // PICK
void D0_eq_(); // D0=
void D_eq_(); // D=
void KEY_2(); // KEY_2
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void CI_i_(); // CI'
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void _gt_C_plus_(); // >C+
void INEXT(); // INEXT
void IINSERT(); // IINSERT
void IEXTRACT(); // IEXTRACT
void IFIND(); // IFIND
void _gt_INACTIVE(); // >INACTIVE
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void SAVE_dash_OVERLAY(); // SAVE-OVERLAY
void StoreCOLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void POS_dot_(); // POS.
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void GCR(); // GCR
void _i_KEY(); // 'KEY
void SUBROOT(); // SUBROOT
void SRDEPTH(); // SRDEPTH
void NEXT_dash_NODE(); // NEXT-NODE
void U_gt__do_(); // U>$
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_MOD(); // /MOD
void _dash_(); // -
void U_star_(); // U*
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _1_dot_5_at_(); // 1.5@
void _gt_C(); // >C
void C_gt_(); // C>
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEE6C = 0xee6c; // WEE6C size: 2
// {0x3a, 0x20}


const unsigned short int cc_WEDEE = 0xedee; // WEDEE
const unsigned short int cc_WEDF2 = 0xedf2; // WEDF2
const unsigned short int cc_WEDF6 = 0xedf6; // WEDF6
const unsigned short int cc_WEDFA = 0xedfa; // WEDFA
const unsigned short int cc_WEDFE = 0xedfe; // WEDFE
const unsigned short int cc_WEE02 = 0xee02; // WEE02
const unsigned short int cc_WEE06 = 0xee06; // WEE06


// 0xede2: db 0x65 0x00 'e '

// ================================================
// 0xede4: WORD 'WEDE6' codep=0x73ea wordp=0xede6
// ================================================
LoadDataType WEDE6 = {ARTIFACTIDX, 0x1d, 0x01, 0x1e, 0x652c};

// ================================================
// 0xedec: WORD 'WEDEE' codep=0x2214 wordp=0xedee
// ================================================
// 0xedee: dw 0x000a

// ================================================
// 0xedf0: WORD 'WEDF2' codep=0x2214 wordp=0xedf2
// ================================================
// 0xedf2: dw 0x000f

// ================================================
// 0xedf4: WORD 'WEDF6' codep=0x2214 wordp=0xedf6
// ================================================
// 0xedf6: dw 0x000e

// ================================================
// 0xedf8: WORD 'WEDFA' codep=0x2214 wordp=0xedfa
// ================================================
// 0xedfa: dw 0x0011

// ================================================
// 0xedfc: WORD 'WEDFE' codep=0x2214 wordp=0xedfe
// ================================================
// 0xedfe: dw 0x000b

// ================================================
// 0xee00: WORD 'WEE02' codep=0x2214 wordp=0xee02
// ================================================
// 0xee02: dw 0x0026

// ================================================
// 0xee04: WORD 'WEE06' codep=0x2214 wordp=0xee06
// ================================================
// 0xee06: dw 0x0010

// ================================================
// 0xee08: WORD 'WEE0A' codep=0x224c wordp=0xee0a params=0 returns=0
// ================================================

void WEE0A() // WEE0A
{
  PAD(); // PAD
  Push(Pop() + 1); //  1+
  Push(0x0026);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
}


// ================================================
// 0xee18: WORD 'WEE1A' codep=0x224c wordp=0xee1a params=0 returns=1
// ================================================

void WEE1A() // WEE1A
{
  SRDEPTH(); // SRDEPTH
  Push(0);
  MAX(); // MAX
  Push(Pop() * 2); //  2*
  PAD(); // PAD
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
}


// ================================================
// 0xee2a: WORD 'WEE2C' codep=0x224c wordp=0xee2c params=0 returns=0
// ================================================

void WEE2C() // WEE2C
{
  Push(Read16(pp_TIME_dash_PASSING)); // TIME-PASSING @
  if (Pop() != 0)
  {
    Push(Read16(pp_CTTOP)); // CTTOP @
    GetColor(WHITE);
  } else
  {
    Push(0x0096);
    GetColor(GREY1);
  }
  StoreCOLOR(); // !COLOR
  Push(Pop() - 7); //  7 -
  Push(7);
  SWAP(); // SWAP
  POS_dot_(); // POS.
}


// ================================================
// 0xee52: WORD 'WEE54' codep=0x224c wordp=0xee54 params=2 returns=0
// ================================================

void WEE54() // WEE54
{
  Push(0x0025);
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() * 2 + 7); //  2* 7 +
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xee6a: WORD 'WEE6C' codep=0x1d29 wordp=0xee6c
// ================================================
// 0xee6c: db 0x3a 0x20 ': '

// ================================================
// 0xee6e: WORD 'WEE70' codep=0x224c wordp=0xee70 params=0 returns=0
// ================================================

void WEE70() // WEE70
{
  unsigned short int i, imax;
  GetCRS(); // @CRS
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  WEE2C(); // WEE2C

  i = 0;
  imax = 3;
  do // (DO)
  {
    PRINT("ATTENTION", 9); // (.")
    Push(5);
    SPACES(); // SPACES
    i++;
  } while(i<imax); // (LOOP)

  GCR(); // GCR
  SET_STR_AS_PARAM("THE MANIFEST-COMPUTER CAPACITY HAS");
  WEE54(); // WEE54
  GCR(); // GCR
  SET_STR_AS_PARAM("BEEN EXCEEDED. SOME ITEMS MAY NOT");
  WEE54(); // WEE54
  GCR(); // GCR
  SET_STR_AS_PARAM("APPEAR IN THIS LIST.");
  WEE54(); // WEE54
  GCR(); // GCR
  SET_STR_AS_PARAM("PRESS SPACEBAR TO CONTINUE");
  WEE54(); // WEE54
  StoreCRS(); // !CRS
}


// ================================================
// 0xef25: WORD 'WEF27' codep=0x224c wordp=0xef27 params=0 returns=0
// ================================================

void WEF27() // WEF27
{
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  Push(0x004a);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(pp_WEE6C); // WEE6C
  ON_3(); // ON_3
  Push(0x03e8);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
  WEE70(); // WEE70
  KEY_2(); // KEY_2
  Pop(); // DROP
  WEE70(); // WEE70
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xef4f: WORD 'WEF51' codep=0x224c wordp=0xef51
// ================================================

void WEF51() // WEF51
{
  WEE0A(); // WEE0A
  LoadData(BOX_dash_NAME); // from 'BOX'
  WEE1A(); // WEE1A
  Push(0x0010);
  CMOVE(); // CMOVE
}


// ================================================
// 0xef5f: WORD 'WEF61' codep=0x224c wordp=0xef61
// ================================================

void WEF61() // WEF61
{
  LoadData(RESEMBLES); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    LoadData(SHAPE); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
  }
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
  Push(Read16(0x63ef+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
  WEE1A(); // WEE1A
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef87: WORD 'WEF89' codep=0x224c wordp=0xef89 params=2 returns=0
// ================================================

void WEF89() // WEF89
{
  Push(0x000a);
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read16(Pop())&0xFF); //  C@
  PAD(); // PAD
  Push(Pop() + 0x0020); //  0x0020 +
  C_ex_(); // C!
  Push(0x002e);
  PAD(); // PAD
  Push(Pop() + 0x001f); //  0x001f +
  C_ex_(); // C!
  U_gt__do_(); // U>$
  PAD(); // PAD
  Push(Pop() + 0x001f); //  0x001f +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(Read16(pp__pe_VAL)); // %VAL @
  U_star_(); // U*
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  U_gt__do_(); // U>$
  PAD(); // PAD
  Push(Pop() + 0x0026); //  0x0026 +
  OVER(); // OVER
  Push(Pop() - 1); //  1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xefe7: WORD 'WEFE9' codep=0x224c wordp=0xefe9
// ================================================

void WEFE9() // WEFE9
{
  LoadData(ELEM_dash_NAME); // from 'ELEMENT'
  WEE1A(); // WEE1A
  Push(0x0010);
  CMOVE(); // CMOVE
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Push(Read16(Pop()) * 0x000a); //  @ 0x000a *
  SWAP(); // SWAP
  WEF89(); // WEF89
}


// ================================================
// 0xf007: WORD 'DATE$>ADR' codep=0x224c wordp=0xf015 params=2 returns=0
// ================================================
// entry

void DATE_do__gt_ADR() // DATE$>ADR
{
  SET_STR_AS_PARAM("00-00-");
  Push(3);
  PICK(); // PICK
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SWAP(); // SWAP
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(Pop() + 0x120c); //  0x120c +
  U_gt__do_(); // U>$
  Push(4);
  PICK(); // PICK
  Push(Pop() + 6); //  6 +
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop() + 1); //  1+
  U_gt__do_(); // U>$
  Push(4);
  PICK(); // PICK
  Push(Pop() + 4); //  4 +
  OVER(); // OVER
  Push(Pop() - 1); //  1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(Pop() + 1); //  1+
  U_gt__do_(); // U>$
  ROT(); // ROT
  Push(Pop() + 1); //  1+
  OVER(); // OVER
  Push(Pop() - 1); //  1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xf072: WORD 'WF074' codep=0x224c wordp=0xf074 params=0 returns=0
// ================================================

void WF074() // WF074
{
  WEE0A(); // WEE0A
  Push(Read16(0x63ef+INST_dash_DATE.offset)); // INST-DATE<IFIELD> @
  WEE1A(); // WEE1A
  DATE_do__gt_ADR(); // DATE$>ADR
}


// ================================================
// 0xf080: WORD 'WF082' codep=0x224c wordp=0xf082 params=0 returns=0
// ================================================

void WF082() // WF082
{
  PAD(); // PAD
  Push(Pop() + 0x0024); //  0x0024 +
  Push(3);
  Push(0x003f);
  FILL_1(); // FILL_1
}


// ================================================
// 0xf094: WORD 'WF096' codep=0x224c wordp=0xf096
// ================================================

void WF096() // WF096
{
  LoadData(ART_dash_NAME); // from 'ARTIFACT'
  WEE1A(); // WEE1A
  Push(0x0018);
  CMOVE(); // CMOVE
  LoadData(WEDE6); // from 'ARTIFACT'
  Push((Read16(Pop())&0xFF | Read16(pp_Is_ask__ask_IT))==0?1:0); //  C@ ???IT @ OR 0=
  LoadData(ART_dash_VAL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  OVER(); // OVER
  Push(!Pop()); //  NOT
  Push(Pop() * Pop()); // *
  LoadData(ART_dash_VOL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  WEF89(); // WEF89
  if (Pop() == 0) return;
  WF082(); // WF082
}


// ================================================
// 0xf0c4: WORD 'WF0C6' codep=0x224c wordp=0xf0c6
// ================================================

void WF0C6() // WF0C6
{
  LoadData(SPEC_dash_NAME); // from 'SPECIMEN'
  WEE1A(); // WEE1A
  Push(0x0010);
  CMOVE(); // CMOVE
  Push(Read16(0x63ef+INST_dash_VAL.offset)); // INST-VAL<IFIELD> @
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  WEF89(); // WEF89
}


// ================================================
// 0xf0dc: WORD 'WF0DE' codep=0x224c wordp=0xf0de
// ================================================

void WF0DE() // WF0DE
{
  LoadData(BD_dash_NAME); // from 'BIO_DATA'
  WEE1A(); // WEE1A
  Push(0x0010);
  CMOVE(); // CMOVE
  Push(Read16(0x63ef+INST_dash_VAL.offset)); // INST-VAL<IFIELD> @
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  WEF89(); // WEF89
}


// ================================================
// 0xf0f4: WORD 'IDENT-ITEM$' codep=0x4a4f wordp=0xf104
// ================================================

void IDENT_dash_ITEM_do_() // IDENT-ITEM$
{
  switch(Pop()) // IDENT-ITEM$
  {
  case 11:
    WEF51(); // WEF51
    break;
  case 26:
    WEFE9(); // WEFE9
    break;
  case 27:
    WF074(); // WF074
    break;
  case 28:
    WF096(); // WF096
    break;
  case 40:
    WF0C6(); // WF0C6
    break;
  case 68:
    WEF61(); // WEF61
    break;
  case 43:
    WF0DE(); // WF0DE
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf124: WORD 'ITEM>PAD' codep=0x224c wordp=0xf131
// ================================================
// entry

void ITEM_gt_PAD() // ITEM>PAD
{
  WEE0A(); // WEE0A
  WEE1A(); // WEE1A
  PAD(); // PAD
  Push(Pop() + 0x001e); //  0x001e +
  OVER(); // OVER
  _dash_(); // -
  Push(0x002e);
  FILL_1(); // FILL_1
  Push(0x0026);
  PAD(); // PAD
  C_ex_(); // C!
  GetINST_dash_CLASS(); // @INST-CLASS
  IDENT_dash_ITEM_do_(); // IDENT-ITEM$ case
}


// ================================================
// 0xf155: WORD 'WF157' codep=0x224c wordp=0xf157 params=5 returns=0
// ================================================

void WF157() // WF157
{
  WEF27(); // WEF27
  Push(3);
  PICK(); // PICK
  Push(3);
  PICK(); // PICK
  _gt_C_plus_S(); // >C+S
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x000b?1:0); //  0x000b =
  ICLOSE(); // ICLOSE
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  Push(0x004b);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(pp__ro_SCROLL_dash_BOX_rc_); // (SCROLL-BOX)
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    Push(0x0038);
    Push(0);
    Push(1);
    _star_CREATE(); // *CREATE
    Push(0x63ef+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
    Push(0x0026);
    CMOVE(); // CMOVE
    Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
    _1_dot_5_ex_(); // 1.5!
    Push(0x63ef+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
    _1_dot_5_ex_(); // 1.5!
    ICLOSE(); // ICLOSE
    Push(1);
    Push(pp_SCROLL_dash_); // SCROLL-
    _plus__ex__2(); // +!_2
    ICLOSE(); // ICLOSE
    return;
  }
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
  Pop(); // DROP
}


// ================================================
// 0xf1b3: WORD 'BOX>LIST' codep=0x224c wordp=0xf1c0 params=0 returns=0
// ================================================
// entry

void BOX_gt_LIST() // BOX>LIST
{
  SUBROOT(); // SUBROOT
  CI(); // CI
  do
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(!(Pop()==0x0035?1:0)); //  0x0035 = NOT
    Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
    Push(0x004b);
    _st_(); // <
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x000b?1:0); //  0x000b =
    Push(Pop() | Pop()); // OR
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      CI_i_(); // CI'
      CI(); // CI
      ITEM_gt_PAD(); // ITEM>PAD
      PAD(); // PAD
      Push(Pop() + 1); //  1+
      WF157(); // WF157
    }
    NEXT_dash_NODE(); // NEXT-NODE
    _2DUP(); // 2DUP
    CI(); // CI
    D_eq_(); // D=
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf204: WORD 'GET-BOXES' codep=0x224c wordp=0xf212 params=2 returns=0
// ================================================
// entry

void GET_dash_BOXES() // GET-BOXES
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  do
  {
    BOX_gt_LIST(); // BOX>LIST
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf226: WORD 'MAKE-SCROLL-BOX' codep=0x224c wordp=0xf23a
// ================================================
// entry

void MAKE_dash_SCROLL_dash_BOX() // MAKE-SCROLL-BOX
{
  Push(pp_WEE6C); // WEE6C
  OFF(); // OFF
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF(); // OFF
  Push2Words("FRAGMENT");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0038);
  Push(1);
  _star_CREATE(); // *CREATE
  CI(); // CI
  Push(pp__ro_SCROLL_dash_BOX_rc_); // (SCROLL-BOX)
  _1_dot_5_ex_(); // 1.5!
  CI_i_(); // CI'
  Push(pp__ro_SCROLL_dash_CONT_rc_); // (SCROLL-CONT)
  _1_dot_5_ex_(); // 1.5!
  Push(pp_SCROLL_dash_); // SCROLL-
  OFF(); // OFF
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf26a: WORD 'DELETE-SCROLL-BOX' codep=0x224c wordp=0xf280
// ================================================
// entry

void DELETE_dash_SCROLL_dash_BOX() // DELETE-SCROLL-BOX
{
  Push(pp__ro_SCROLL_dash_CONT_rc_); // (SCROLL-CONT)
  _1_dot_5_at_(); // 1.5@
  _gt_C(); // >C
  Push(pp__ro_SCROLL_dash_BOX_rc_); // (SCROLL-BOX)
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  SET_dash_CURRENT(); // SET-CURRENT
  IDELETE(); // IDELETE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_3(); // ON_3
}


// ================================================
// 0xf29a: WORD 'CLASS>BOX-SPEC' codep=0x4a4f wordp=0xf2ad
// ================================================
// entry

void CLASS_gt_BOX_dash_SPEC() // CLASS>BOX-SPEC
{
  switch(Pop()) // CLASS>BOX-SPEC
  {
  case 26:
    Push(Read16(cc_WEDEE)); // WEDEE
    break;
  case 28:
    Push(Read16(cc_WEDF2)); // WEDF2
    break;
  case 40:
    Push(Read16(cc_WEDF6)); // WEDF6
    break;
  case 41:
    Push(Read16(cc_WEE06)); // WEE06
    break;
  case 43:
    Push(Read16(cc_WEE02)); // WEE02
    break;
  case 27:
    Push(Read16(cc_WEDFA)); // WEDFA
    break;
  case 68:
    Push(Read16(cc_WEDFE)); // WEDFE
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf2cd: WORD 'WF2CF' codep=0x224c wordp=0xf2cf
// ================================================

void WF2CF() // WF2CF
{
  CLASS_gt_BOX_dash_SPEC(); // CLASS>BOX-SPEC case
  Push(0x000b);
  SWAP(); // SWAP
  Push(1);
  _star_CREATE(); // *CREATE
}


// ================================================
// 0xf2dd: WORD 'BOX>TOCS' codep=0x224c wordp=0xf2ea
// ================================================
// entry

void BOX_gt_TOCS() // BOX>TOCS
{
  CLASS_gt_BOX_dash_SPEC(); // CLASS>BOX-SPEC case
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf2f8: WORD '>BOX' codep=0x224c wordp=0xf301
// ================================================
// entry

void _gt_BOX() // >BOX
{
  unsigned short int a;
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_CLASS(); // @INST-CLASS
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(a); // I
  CLASS_gt_BOX_dash_SPEC(); // CLASS>BOX-SPEC case
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(a); // I
    WF2CF(); // WF2CF
  }
  Push(a); // R>
  BOX_gt_TOCS(); // BOX>TOCS
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  GetINST_dash_CLASS(); // @INST-CLASS
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x001a?1:0); //  0x001a =
  if (Pop() != 0)
  {
    OVER(); // OVER
    IOPEN(); // IOPEN
    IFIND(); // IFIND
    ICLOSE(); // ICLOSE
    if (Pop() != 0)
    {
      IOPEN(); // IOPEN
      do
      {
        Push(Read16(regsp)); // DUP
        INEXT(); // INEXT
        GetINST_dash_SPECIES(); // @INST-SPECIES
        Push((Pop()==Pop())?1:0); // =
      } while(Pop() == 0);
      Pop(); // DROP
      _gt_C_plus_S(); // >C+S
      Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
      CI(); // CI
      ICLOSE(); // ICLOSE
      _gt_INACTIVE(); // >INACTIVE
      Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
      _plus__ex__2(); // +!_2
      ICLOSE(); // ICLOSE
    } else
    {
      Pop(); // DROP
      CI(); // CI
      IINSERT(); // IINSERT
    }
  } else
  {
    Pop(); Pop(); // 2DROP
    CI(); // CI
    IINSERT(); // IINSERT
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf381: WORD '?ELEMENT' codep=0x224c wordp=0xf38e params=0 returns=1
// ================================================

void IsELEMENT() // ?ELEMENT
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x001a?1:0); //  0x001a =
}


// ================================================
// 0xf398: WORD '(BOX>)' codep=0x224c wordp=0xf3a3 params=0 returns=2
// ================================================
// entry

void _ro_BOX_gt__rc_() // (BOX>)
{
  IsELEMENT(); // ?ELEMENT
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(-Read16(pp_ELEM_dash_AM)); // ELEM-AM @ NEGATE
    Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
    _plus__ex__2(); // +!_2
    Push(0x001a);
    GetINST_dash_SPECIES(); // @INST-SPECIES
    ICREATE(); // ICREATE
    _gt_C_plus_S(); // >C+S
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
    Store_3(); // !_3
    C_gt_(); // C>
    return;
  }
  IEXTRACT(); // IEXTRACT
}


// ================================================
// 0xf3db: WORD 'BOX>' codep=0x224c wordp=0xf3e4 params=0 returns=3
// ================================================
// entry

void BOX_gt_() // BOX>
{
  _ro_BOX_gt__rc_(); // (BOX>)
  CI(); // CI
  D0_eq_(); // D0=
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
    IDELETE(); // IDELETE
    CI(); // CI
    D0_eq_(); // D0=
    if (Pop() != 0)
    {
      ICLOSE(); // ICLOSE
    }
    Push(1);
  } else
  {
    _2DUP(); // 2DUP
    _gt_C_plus_S(); // >C+S
    IsELEMENT(); // ?ELEMENT
    GetINST_dash_SPECIES(); // @INST-SPECIES
    ICLOSE(); // ICLOSE
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push((Pop()==Pop())?1:0); // =
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
  }
  ROT(); // ROT
  ROT(); // ROT
}

// 0xf41a: db 0x49 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x20 0x34 0x2f 0x30 0x33 0x2f 0x38 0x36 0x29 0x20 0x20 0x31 0x30 0x31 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x44 0x49 0x53 0x4b 0x3e 0x50 0x52 0x4d 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x6c 0x6f 0x61 0x64 0x20 0x70 0x61 0x72 0x61 0x6d 0x65 0x74 0x65 0x72 0x20 0x73 0x74 0x61 0x63 0x6b 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x44 0x49 0x53 0x4b 0x3e 0x52 0x54 0x4e 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x6c 0x6f 0x61 0x64 0x20 0x72 0x65 0x74 0x75 0x72 0x6e 0x20 0x73 0x74 0x61 0x63 0x6b 0x20 0x74 0x6f 0x20 0x52 0x54 0x4e 0x54 0x45 0x4d 0x50 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x43 0x4b 0x53 0x55 0x4d 0x20 0x40 0x20 0x3a 0x43 0x4b 0x53 0x55 0x4d 0x20 0x40 0x20 0x3d 0x20 0x5c 0x20 0x63 0x6d 0x70 0x20 0x63 0x68 0x65 0x63 0x6b 0x20 0x73 0x75 0x6d 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x49 0x46 0x20 0x20 0x20 0x2e 0x4c 0x4f 0x41 0x44 0x45 0x44 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'IT-VOC__________________________---------------------  4/03/86)  101                     DISK>PRM           \ load parameter stack                       DISK>RTN           \ load return stack to RTNTEMP               CKSUM @ :CKSUM @ = \ cmp check sum                              IF   .LOADED                                  '

