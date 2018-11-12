// ====== OVERLAY 'IT-OV' ======
// store offset = 0xee80
// overlay size   = 0x06e0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEE96  codep:0x7394 wordp:0xee96 size:0x0006 C-string:'WEE96'
//           WEE9E  codep:0x7394 wordp:0xee9e size:0x0006 C-string:'WEE9E'
//           WEEA6  codep:0x7394 wordp:0xeea6 size:0x0006 C-string:'WEEA6'
//           WEEAE  codep:0x7394 wordp:0xeeae size:0x0006 C-string:'WEEAE'
//           WEEB6  codep:0x2214 wordp:0xeeb6 size:0x0002 C-string:'WEEB6'
//           WEEBA  codep:0x2214 wordp:0xeeba size:0x0002 C-string:'WEEBA'
//           WEEBE  codep:0x2214 wordp:0xeebe size:0x0002 C-string:'WEEBE'
//           WEEC2  codep:0x2214 wordp:0xeec2 size:0x0002 C-string:'WEEC2'
//           WEEC6  codep:0x2214 wordp:0xeec6 size:0x0002 C-string:'WEEC6'
//           WEECA  codep:0x2214 wordp:0xeeca size:0x0002 C-string:'WEECA'
//           WEECE  codep:0x2214 wordp:0xeece size:0x0002 C-string:'WEECE'
//           WEED2  codep:0x7394 wordp:0xeed2 size:0x0006 C-string:'WEED2'
//           WEEDA  codep:0x7394 wordp:0xeeda size:0x0006 C-string:'WEEDA'
//           WEEE2  codep:0x7394 wordp:0xeee2 size:0x0006 C-string:'WEEE2'
//           WEEEA  codep:0x224c wordp:0xeeea size:0x0010 C-string:'WEEEA'
//           WEEFC  codep:0x224c wordp:0xeefc size:0x000e C-string:'WEEFC'
//           WEF0C  codep:0x224c wordp:0xef0c size:0x0020 C-string:'WEF0C'
//           WEF2E  codep:0x224c wordp:0xef2e size:0x0016 C-string:'WEF2E'
//           WEF46  codep:0x1d29 wordp:0xef46 size:0x0002 C-string:'WEF46'
//           WEF4A  codep:0x224c wordp:0xef4a size:0x00b3 C-string:'WEF4A'
//           WEFFF  codep:0x224c wordp:0xefff size:0x002c C-string:'WEFFF'
//           WF02D  codep:0x224c wordp:0xf02d size:0x000e C-string:'WF02D'
//           WF03D  codep:0x224c wordp:0xf03d size:0x000a C-string:'WF03D'
//           WF049  codep:0x224c wordp:0xf049 size:0x001b C-string:'WF049'
//           WF066  codep:0x224c wordp:0xf066 size:0x006a C-string:'WF066'
//           WF0D2  codep:0x224c wordp:0xf0d2 size:0x0016 C-string:'WF0D2'
//           WF0EA  codep:0x224c wordp:0xf0ea size:0x001a C-string:'WF0EA'
//           WF106  codep:0x224c wordp:0xf106 size:0x0018 C-string:'WF106'
//        DATE$>AD  codep:0x224c wordp:0xf12b size:0x006d C-string:'DATE_do__gt_AD'
//           WF19A  codep:0x224c wordp:0xf19a size:0x000c C-string:'WF19A'
//           WF1A8  codep:0x224c wordp:0xf1a8 size:0x002a C-string:'WF1A8'
//           WF1D4  codep:0x224c wordp:0xf1d4 size:0x0016 C-string:'WF1D4'
//        IDENT-IT  codep:0x4b3b wordp:0xf1f7 size:0x001c C-string:'IDENT_dash_IT'
//        ITEM>PAD  codep:0x224c wordp:0xf220 size:0x0024 C-string:'ITEM_gt_PAD'
//           WF246  codep:0x224c wordp:0xf246 size:0x000c C-string:'WF246'
//           WF254  codep:0x224c wordp:0xf254 size:0x0006 C-string:'WF254'
//           WF25C  codep:0x224c wordp:0xf25c size:0x0030 C-string:'WF25C'
//           WF28E  codep:0x224c wordp:0xf28e size:0x005a C-string:'WF28E'
//        BOX>LIST  codep:0x224c wordp:0xf2f5 size:0x003c C-string:'BOX_gt_LIST'
//        GET-BOXE  codep:0x224c wordp:0xf33e size:0x0016 C-string:'GET_dash_BOXE'
//        MAKE-SCR  codep:0x224c wordp:0xf361 size:0x002c C-string:'MAKE_dash_SCR'
//        DELETE-S  codep:0x224c wordp:0xf39a size:0x0016 C-string:'DELETE_dash_S'
//        CLASS>BO  codep:0x4b3b wordp:0xf3bd size:0x001c C-string:'CLASS_gt_BO'
//           WF3DB  codep:0x224c wordp:0xf3db size:0x000e C-string:'WF3DB'
//        BOX>TOCS  codep:0x224c wordp:0xf3f6 size:0x000e C-string:'BOX_gt_TOCS'
//        ?ELEMENT  codep:0x224c wordp:0xf411 size:0x002c C-string:'IsELEMENT'
//            >BOX  codep:0x224c wordp:0xf446 size:0x0082 C-string:'_gt_BOX'
//          (BOX>)  codep:0x224c wordp:0xf4d3 size:0x0036 C-string:'_ro_BOX_gt__rc_'
//            BOX>  codep:0x224c wordp:0xf512 size:0x0000 C-string:'BOX_gt_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_TIME_dash_PA; // TIME-PA
extern const unsigned short int pp_ITEM; // ITEM
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp__ro_SCROLL_2; // (SCROLL_2
extern const unsigned short int pp_CTTOP; // CTTOP
extern LoadDataType BOX_dash_NAM; // BOX-NAM
extern LoadDataType ELEM_dash_NA; // ELEM-NA
extern LoadDataType ELEM_dash_VA; // ELEM-VA
extern LoadDataType ART_dash_NAM; // ART-NAM
extern LoadDataType ART_dash_VAL; // ART-VAL
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_DA; // INST-DA
extern IFieldType ASKING; // ASKING
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
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void CI_i_(); // CI'
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void _gt_C_plus_(); // >C+
void INEXT(); // INEXT
void IINSERT(); // IINSERT
void IEXTRAC(); // IEXTRAC
void IFIND(); // IFIND
void _gt_INACTI(); // >INACTI
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void SAVE_dash_OV(); // SAVE-OV
void StoreCOLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void POS_dot_(); // POS.
void CTERASE(); // CTERASE
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void GCR(); // GCR
void _i_KEY(); // 'KEY
void _do__ex_(); // $!
void SUBROOT(); // SUBROOT
void SRDEPTH(); // SRDEPTH
void NEXT_dash_NO(); // NEXT-NO
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
const unsigned short int pp_WEF46 = 0xef46; // WEF46 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WEEB6 = 0xeeb6; // WEEB6
const unsigned short int cc_WEEBA = 0xeeba; // WEEBA
const unsigned short int cc_WEEBE = 0xeebe; // WEEBE
const unsigned short int cc_WEEC2 = 0xeec2; // WEEC2
const unsigned short int cc_WEEC6 = 0xeec6; // WEEC6
const unsigned short int cc_WEECA = 0xeeca; // WEECA
const unsigned short int cc_WEECE = 0xeece; // WEECE


// 0xee92: db 0x6d 0x00 'm '

// ================================================
// 0xee94: WORD 'WEE96' codep=0x7394 wordp=0xee96
// ================================================
// orphan
LoadDataType WEE96 = {ARTIFACTIDX, 0x1d, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xee9c: WORD 'WEE9E' codep=0x7394 wordp=0xee9e
// ================================================
LoadDataType WEE9E = {ARTIFACTIDX, 0x1e, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xeea4: WORD 'WEEA6' codep=0x7394 wordp=0xeea6
// ================================================
LoadDataType WEEA6 = {STISIDX, 0x00, 0x20, 0x1b, 0x6a54};

// ================================================
// 0xeeac: WORD 'WEEAE' codep=0x7394 wordp=0xeeae
// ================================================
LoadDataType WEEAE = {STISIDX, 0x18, 0x02, 0x1b, 0x6a54};

// ================================================
// 0xeeb4: WORD 'WEEB6' codep=0x2214 wordp=0xeeb6
// ================================================
// 0xeeb6: dw 0x000a

// ================================================
// 0xeeb8: WORD 'WEEBA' codep=0x2214 wordp=0xeeba
// ================================================
// 0xeeba: dw 0x000f

// ================================================
// 0xeebc: WORD 'WEEBE' codep=0x2214 wordp=0xeebe
// ================================================
// 0xeebe: dw 0x0011

// ================================================
// 0xeec0: WORD 'WEEC2' codep=0x2214 wordp=0xeec2
// ================================================
// 0xeec2: dw 0x000b

// ================================================
// 0xeec4: WORD 'WEEC6' codep=0x2214 wordp=0xeec6
// ================================================
// 0xeec6: dw 0x0010

// ================================================
// 0xeec8: WORD 'WEECA' codep=0x2214 wordp=0xeeca
// ================================================
// 0xeeca: dw 0x0037

// ================================================
// 0xeecc: WORD 'WEECE' codep=0x2214 wordp=0xeece
// ================================================
// 0xeece: dw 0x0036

// ================================================
// 0xeed0: WORD 'WEED2' codep=0x7394 wordp=0xeed2
// ================================================
LoadDataType WEED2 = {CREATUREIDX, 0x00, 0x14, 0x22, 0x6f07};

// ================================================
// 0xeed8: WORD 'WEEDA' codep=0x7394 wordp=0xeeda
// ================================================
LoadDataType WEEDA = {CREATUREIDX, 0x14, 0x02, 0x22, 0x6f07};

// ================================================
// 0xeee0: WORD 'WEEE2' codep=0x7394 wordp=0xeee2
// ================================================
// orphan
LoadDataType WEEE2 = {CREATUREIDX, 0x1c, 0x01, 0x22, 0x6f07};

// ================================================
// 0xeee8: WORD 'WEEEA' codep=0x224c wordp=0xeeea params=0 returns=1
// ================================================

void WEEEA() // WEEEA
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
// 0xeefa: WORD 'WEEFC' codep=0x224c wordp=0xeefc params=0 returns=0
// ================================================

void WEEFC() // WEEFC
{
  PAD(); // PAD
  Push(Pop() + 1); //  1+
  Push(0x0026);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
}


// ================================================
// 0xef0a: WORD 'WEF0C' codep=0x224c wordp=0xef0c params=0 returns=0
// ================================================

void WEF0C() // WEF0C
{
  Push(Read16(pp_TIME_dash_PA)); // TIME-PA @
  if (Pop() != 0)
  {
    Push(Read16(pp_CTTOP)); // CTTOP @
  } else
  {
    Push(0x0096);
  }
  Push(Pop() - 7); //  7 -
  Push(7);
  SWAP(); // SWAP
  POS_dot_(); // POS.
}


// ================================================
// 0xef2c: WORD 'WEF2E' codep=0x224c wordp=0xef2e params=2 returns=0
// ================================================

void WEF2E() // WEF2E
{
  Push(0x0025);
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() * 2 + 7); //  2* 7 +
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xef44: WORD 'WEF46' codep=0x1d29 wordp=0xef46
// ================================================
// 0xef46: db 0x3a 0x20 ': '

// ================================================
// 0xef48: WORD 'WEF4A' codep=0x224c wordp=0xef4a
// ================================================

void WEF4A() // WEF4A
{
  unsigned short int i, imax;
  GetCRS(); // @CRS
  CTERASE(); // CTERASE
  _gt_1FONT(); // >1FONT
  WEF0C(); // WEF0C

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
  WEF2E(); // WEF2E
  GCR(); // GCR
  SET_STR_AS_PARAM("BEEN EXCEEDED. SOME ITEMS MAY NOT");
  WEF2E(); // WEF2E
  GCR(); // GCR
  SET_STR_AS_PARAM("APPEAR IN THIS LIST.");
  WEF2E(); // WEF2E
  GCR(); // GCR
  SET_STR_AS_PARAM("PRESS SPACEBAR TO CONTINUE");
  WEF2E(); // WEF2E
  StoreCRS(); // !CRS
}


// ================================================
// 0xeffd: WORD 'WEFFF' codep=0x224c wordp=0xefff params=0 returns=0
// ================================================

void WEFFF() // WEFFF
{
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  Push(0x0031);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(pp_WEF46); // WEF46
  ON_2(); // ON_2
  Push(0x03e8);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WEF4A(); // WEF4A
  KEY_2(); // KEY_2
  Pop(); // DROP
  CTERASE(); // CTERASE
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf02b: WORD 'WF02D' codep=0x224c wordp=0xf02d
// ================================================

void WF02D() // WF02D
{
  WEEFC(); // WEEFC
  LoadData(BOX_dash_NAM); // from 'BOX'
  WEEEA(); // WEEEA
  Push(0x0010);
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xf03b: WORD 'WF03D' codep=0x224c wordp=0xf03d params=0 returns=1
// ================================================

void WF03D() // WF03D
{
  Push(Read16(pp_CONTEXT_3)==6?1:0); // CONTEXT_3 @ 6 =
}


// ================================================
// 0xf047: WORD 'WF049' codep=0x224c wordp=0xf049 params=2 returns=0
// ================================================

void WF049() // WF049
{
  SWAP(); // SWAP
  Pop(); // DROP
  SET_STR_AS_PARAM("\?\?-\?\?-\?\?\?\?");
  Pop(); // DROP
  Push(Pop() - 1); //  1-
  SWAP(); // SWAP
  _do__ex_(); // $!
}


// ================================================
// 0xf064: WORD 'WF066' codep=0x224c wordp=0xf066
// ================================================

void WF066() // WF066
{
  Push(0x000a);
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read16(Pop())&0xFF); //  C@
  PAD(); // PAD
  Push(Pop() + 0x0020); //  0x0020 +
  C_ex__2(); // C!_2
  Push(0x002e);
  PAD(); // PAD
  Push(Pop() + 0x001f); //  0x001f +
  C_ex__2(); // C!_2
  U_gt__do_(); // U>$
  PAD(); // PAD
  Push(Pop() + 0x001f); //  0x001f +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  WF03D(); // WF03D
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(0x65e1+ASKING.offset)); // ASKING<IFIELD> @
  }
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
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xf0d0: WORD 'WF0D2' codep=0x224c wordp=0xf0d2
// ================================================

void WF0D2() // WF0D2
{
  LoadData(WEED2); // from 'CREATURE'
  WEEEA(); // WEEEA
  Push(0x0014);
  CMOVE_2(); // CMOVE_2
  LoadData(WEEDA); // from 'CREATURE'
  Push(Read16(Pop())); //  @
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  WF066(); // WF066
}


// ================================================
// 0xf0e8: WORD 'WF0EA' codep=0x224c wordp=0xf0ea
// ================================================

void WF0EA() // WF0EA
{
  Push(pp_ITEM); // ITEM
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WEE9E); // from 'ARTIFACT'
  Push((Read16(Pop())&0xFF) - 1); //  C@ 1-
  if (Pop() != 0)
  {
    Push(Read16(cc_WEECA)); // WEECA
  } else
  {
    Push(Read16(cc_WEEBA)); // WEEBA
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf104: WORD 'WF106' codep=0x224c wordp=0xf106
// ================================================

void WF106() // WF106
{
  LoadData(ELEM_dash_NA); // from 'ELEMENT'
  WEEEA(); // WEEEA
  Push(0x0010);
  CMOVE_2(); // CMOVE_2
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  LoadData(ELEM_dash_VA); // from 'ELEMENT'
  Push(Read16(Pop())); //  @
  SWAP(); // SWAP
  WF066(); // WF066
}


// ================================================
// 0xf11e: WORD 'DATE$>AD' codep=0x224c wordp=0xf12b
// ================================================
// entry

void DATE_do__gt_AD() // DATE$>AD
{
  OVER(); // OVER
  Push(Pop()==-1?1:0); //  -1 =
  if (Pop() != 0)
  {
    WF049(); // WF049
    return;
  }
  SET_STR_AS_PARAM("00-00-");
  Push(3);
  PICK(); // PICK
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  SWAP(); // SWAP
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(Pop() + 0x121f); //  0x121f +
  U_gt__do_(); // U>$
  Push(4);
  PICK(); // PICK
  Push(Pop() + 6); //  6 +
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
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
  CMOVE_2(); // CMOVE_2
  Push(Pop() + 1); //  1+
  U_gt__do_(); // U>$
  ROT(); // ROT
  Push(Pop() + 1); //  1+
  OVER(); // OVER
  Push(Pop() - 1); //  1-
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xf198: WORD 'WF19A' codep=0x224c wordp=0xf19a
// ================================================

void WF19A() // WF19A
{
  WEEFC(); // WEEFC
  Push(Read16(0x65e1+INST_dash_DA.offset)); // INST-DA<IFIELD> @
  WEEEA(); // WEEEA
  DATE_do__gt_AD(); // DATE$>AD
}


// ================================================
// 0xf1a6: WORD 'WF1A8' codep=0x224c wordp=0xf1a8
// ================================================

void WF1A8() // WF1A8
{
  LoadData(ART_dash_NAM); // from 'ARTIFACT'
  WEEEA(); // WEEEA
  Push(0x0018);
  CMOVE_2(); // CMOVE_2
  LoadData(ART_dash_VAL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
  LoadData(WEE9E); // from 'ARTIFACT'
  Push((Read16(Pop())&0xFF) - 1==0?1:0); //  C@ 1- 0=
  if (Pop() != 0)
  {
    LoadData(ART_dash_VOL); // from 'ARTIFACT'
    Push(Read16(Pop())); //  @
  } else
  {
    Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  }
  WF066(); // WF066
}


// ================================================
// 0xf1d2: WORD 'WF1D4' codep=0x224c wordp=0xf1d4
// ================================================

void WF1D4() // WF1D4
{
  LoadData(WEEA6); // from 'STIS'
  WEEEA(); // WEEEA
  Push(0x0018);
  CMOVE_2(); // CMOVE_2
  LoadData(WEEAE); // from 'STIS'
  Push(Read16(Pop())); //  @
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  WF066(); // WF066
}


// ================================================
// 0xf1ea: WORD 'IDENT-IT' codep=0x4b3b wordp=0xf1f7
// ================================================

void IDENT_dash_IT() // IDENT-IT
{
  switch(Pop()) // IDENT-IT
  {
  case 11:
    WF02D(); // WF02D
    break;
  case 9:
    WF1D4(); // WF1D4
    break;
  case 26:
    WF106(); // WF106
    break;
  case 27:
    WF19A(); // WF19A
    break;
  case 28:
    WF1A8(); // WF1A8
    break;
  case 68:
    WF0D2(); // WF0D2
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf213: WORD 'ITEM>PAD' codep=0x224c wordp=0xf220
// ================================================
// entry

void ITEM_gt_PAD() // ITEM>PAD
{
  WEEFC(); // WEEFC
  WEEEA(); // WEEEA
  PAD(); // PAD
  Push(Pop() + 0x001e); //  0x001e +
  OVER(); // OVER
  _dash_(); // -
  Push(0x002e);
  FILL_2(); // FILL_2
  Push(0x0026);
  PAD(); // PAD
  C_ex__2(); // C!_2
  GetINST_dash_C(); // @INST-C
  IDENT_dash_IT(); // IDENT-IT case
}


// ================================================
// 0xf244: WORD 'WF246' codep=0x224c wordp=0xf246 params=0 returns=1
// ================================================

void WF246() // WF246
{
  Push(!(Read16(pp_CONTEXT_3)==6?1:0)); // CONTEXT_3 @ 6 = NOT
}


// ================================================
// 0xf252: WORD 'WF254' codep=0x224c wordp=0xf254 params=1 returns=1
// ================================================

void WF254() // WF254
{
  GetINST_dash_C(); // @INST-C
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf25a: WORD 'WF25C' codep=0x224c wordp=0xf25c params=0 returns=1
// ================================================

void WF25C() // WF25C
{
  Push(0x000b);
  WF254(); // WF254
  if (Pop() != 0)
  {
    Push(Read16(cc_WEEBE)); // WEEBE
    _eq_SPECIE(); // =SPECIE
    Push(!Pop()); //  NOT
    WF246(); // WF246
    Push(Pop() | Pop()); // OR
    return;
  }
  Push(0x001b);
  WF254(); // WF254
  Push(!Pop()); //  NOT
  WF246(); // WF246
  Push(Pop() | Pop()); // OR
  Push(0x0035);
  WF254(); // WF254
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf28c: WORD 'WF28E' codep=0x224c wordp=0xf28e params=5 returns=0
// ================================================

void WF28E() // WF28E
{
  Push(3);
  PICK(); // PICK
  Push(3);
  PICK(); // PICK
  _gt_C_plus_S(); // >C+S
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x000b?1:0); //  0x000b =
  ICLOSE(); // ICLOSE
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  Push(0x0032);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(pp__ro_SCROLL_1); // (SCROLL_1
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    Push(0x0038);
    Push(0);
    Push(1);
    _star_CREATE(); // *CREATE
    Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
    Push(0x0026);
    CMOVE_2(); // CMOVE_2
    Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
    _1_dot_5_ex__2(); // 1.5!_2
    Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
    _1_dot_5_ex__2(); // 1.5!_2
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
// 0xf2e8: WORD 'BOX>LIST' codep=0x224c wordp=0xf2f5 params=0 returns=0
// ================================================
// entry

void BOX_gt_LIST() // BOX>LIST
{
  SUBROOT(); // SUBROOT
  CI(); // CI
  do
  {
    WF25C(); // WF25C
    Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
    Push(0x0032);
    _st_(); // <
    GetINST_dash_C(); // @INST-C
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
      WF28E(); // WF28E
    }
    NEXT_dash_NO(); // NEXT-NO
    _2DUP(); // 2DUP
    CI(); // CI
    D_eq_(); // D=
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf331: WORD 'GET-BOXE' codep=0x224c wordp=0xf33e params=2 returns=0
// ================================================
// entry

void GET_dash_BOXE() // GET-BOXE
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
  WEFFF(); // WEFFF
}


// ================================================
// 0xf354: WORD 'MAKE-SCR' codep=0x224c wordp=0xf361
// ================================================
// entry

void MAKE_dash_SCR() // MAKE-SCR
{
  Push(pp_WEF46); // WEF46
  _099(); // 099
  Push2Words("FRAGMEN");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0038);
  Push(1);
  _star_CREATE(); // *CREATE
  CI(); // CI
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _1_dot_5_ex__2(); // 1.5!_2
  CI_i_(); // CI'
  Push(pp__ro_SCROLL_2); // (SCROLL_2
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_SCROLL_dash_); // SCROLL-
  _099(); // 099
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf38d: WORD 'DELETE-S' codep=0x224c wordp=0xf39a
// ================================================
// entry

void DELETE_dash_S() // DELETE-S
{
  Push(pp__ro_SCROLL_2); // (SCROLL_2
  _1_dot_5_at_(); // 1.5@
  _gt_C(); // >C
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  SET_dash_CUR(); // SET-CUR
  IDELETE(); // IDELETE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3b0: WORD 'CLASS>BO' codep=0x4b3b wordp=0xf3bd
// ================================================
// entry

void CLASS_gt_BO() // CLASS>BO
{
  switch(Pop()) // CLASS>BO
  {
  case 9:
    Push(Read16(cc_WEECE)); // WEECE
    break;
  case 26:
    Push(Read16(cc_WEEB6)); // WEEB6
    break;
  case 28:
    WF0EA(); // WF0EA
    break;
  case 41:
    Push(Read16(cc_WEEC6)); // WEEC6
    break;
  case 27:
    Push(Read16(cc_WEEBE)); // WEEBE
    break;
  case 68:
    Push(Read16(cc_WEEC2)); // WEEC2
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf3d9: WORD 'WF3DB' codep=0x224c wordp=0xf3db
// ================================================

void WF3DB() // WF3DB
{
  CLASS_gt_BO(); // CLASS>BO case
  Push(0x000b);
  SWAP(); // SWAP
  Push(1);
  _star_CREATE(); // *CREATE
}


// ================================================
// 0xf3e9: WORD 'BOX>TOCS' codep=0x224c wordp=0xf3f6
// ================================================
// entry

void BOX_gt_TOCS() // BOX>TOCS
{
  CLASS_gt_BO(); // CLASS>BO case
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf404: WORD '?ELEMENT' codep=0x224c wordp=0xf411 params=0 returns=1
// ================================================

void IsELEMENT() // ?ELEMENT
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  if (Pop() != 0)
  {
    LoadData(WEE9E); // from 'ARTIFACT'
    Push((Read16(Pop())&0xFF) - 1); //  C@ 1-
    return;
  }
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001b?1:0); //  0x001b =
  if (Pop() != 0)
  {
    Push(Read16(cc_FALSE)); // FALSE
    return;
  }
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xf43d: WORD '>BOX' codep=0x224c wordp=0xf446
// ================================================
// entry

void _gt_BOX() // >BOX
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push(pp_ITEM); // ITEM
  _1_dot_5_ex__2(); // 1.5!_2
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_C(); // @INST-C
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(a); // I
  CLASS_gt_BO(); // CLASS>BO case
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(a); // I
    WF3DB(); // WF3DB
  }
  Push(a); // R>
  BOX_gt_TOCS(); // BOX>TOCS
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_S(); // @INST-S
  GetINST_dash_C(); // @INST-C
  IsELEMENT(); // ?ELEMENT
  ICLOSE(); // ICLOSE
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
        GetINST_dash_S(); // @INST-S
        Push((Pop()==Pop())?1:0); // =
      } while(Pop() == 0);
      Pop(); // DROP
      _gt_C_plus_S(); // >C+S
      Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
      CI(); // CI
      ICLOSE(); // ICLOSE
      _gt_INACTI(); // >INACTI
      Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
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
// 0xf4c8: WORD '(BOX>)' codep=0x224c wordp=0xf4d3 params=0 returns=2
// ================================================
// entry

void _ro_BOX_gt__rc_() // (BOX>)
{
  IsELEMENT(); // ?ELEMENT
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(-Read16(pp_ELEM_dash_AM)); // ELEM-AM @ NEGATE
    Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
    _plus__ex__2(); // +!_2
    GetINST_dash_C(); // @INST-C
    GetINST_dash_S(); // @INST-S
    ICREATE(); // ICREATE
    _gt_C_plus_S(); // >C+S
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
    Store_2(); // !_2
    C_gt_(); // C>
    return;
  }
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf509: WORD 'BOX>' codep=0x224c wordp=0xf512 params=0 returns=3
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
    GetINST_dash_C(); // @INST-C
    Push(Pop()==0x001a?1:0); //  0x001a =
    GetINST_dash_S(); // @INST-S
    ICLOSE(); // ICLOSE
    GetINST_dash_S(); // @INST-S
    Push((Pop()==Pop())?1:0); // =
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
  }
  ROT(); // ROT
  ROT(); // ROT
}

// 0xf54e: db 0x49 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'IT-VOC____________ '

