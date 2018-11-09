// ====== OVERLAY 'ANALYZE-OV' ======
// store offset = 0xec50
// overlay size   = 0x0910

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEC66  codep:0x7420 wordp:0xec66 size:0x0003 C-string:'WEC66'
//           WEC6B  codep:0x7420 wordp:0xec6b size:0x0003 C-string:'WEC6B'
//           WEC70  codep:0x7420 wordp:0xec70 size:0x0003 C-string:'WEC70'
//           WEC75  codep:0x7394 wordp:0xec75 size:0x0006 C-string:'WEC75'
//           WEC7D  codep:0x7394 wordp:0xec7d size:0x0006 C-string:'WEC7D'
//           WEC85  codep:0x7420 wordp:0xec85 size:0x0003 C-string:'WEC85'
//           WEC8A  codep:0x7394 wordp:0xec8a size:0x0006 C-string:'WEC8A'
//           WEC92  codep:0x7394 wordp:0xec92 size:0x0006 C-string:'WEC92'
//           WEC9A  codep:0x7394 wordp:0xec9a size:0x0006 C-string:'WEC9A'
//           WECA2  codep:0x7394 wordp:0xeca2 size:0x0006 C-string:'WECA2'
//           WECAA  codep:0x7394 wordp:0xecaa size:0x0006 C-string:'WECAA'
//           WECB2  codep:0x7420 wordp:0xecb2 size:0x0003 C-string:'WECB2'
//           WECB7  codep:0x7394 wordp:0xecb7 size:0x0006 C-string:'WECB7'
//           WECBF  codep:0x7394 wordp:0xecbf size:0x0006 C-string:'WECBF'
//           WECC7  codep:0x7394 wordp:0xecc7 size:0x0006 C-string:'WECC7'
//           WECCF  codep:0x7394 wordp:0xeccf size:0x0006 C-string:'WECCF'
//           WECD7  codep:0x7394 wordp:0xecd7 size:0x0006 C-string:'WECD7'
//           WECDF  codep:0x7394 wordp:0xecdf size:0x0006 C-string:'WECDF'
//           WECE7  codep:0x7394 wordp:0xece7 size:0x0006 C-string:'WECE7'
//           WECEF  codep:0x224c wordp:0xecef size:0x000b C-string:'WECEF'
//           WECFC  codep:0x224c wordp:0xecfc size:0x000b C-string:'WECFC'
//           WED09  codep:0x224c wordp:0xed09 size:0x000b C-string:'WED09'
//       (.VESSEL)  codep:0x4b3b wordp:0xed22 size:0x0014 C-string:'_ro__dot_VESSEL_rc_'
//           WED38  codep:0x224c wordp:0xed38 size:0x0006 C-string:'WED38'
//           WED40  codep:0x224c wordp:0xed40 size:0x000b C-string:'WED40'
//           WED4D  codep:0x224c wordp:0xed4d size:0x000b C-string:'WED4D'
//           WED5A  codep:0x224c wordp:0xed5a size:0x001d C-string:'WED5A'
//       (.OBJECT)  codep:0x4b3b wordp:0xed85 size:0x0018 C-string:'_ro__dot_OBJECT_rc_'
//           WED9F  codep:0x224c wordp:0xed9f size:0x004d C-string:'WED9F'
//           WEDEE  codep:0x224c wordp:0xedee size:0x0014 C-string:'WEDEE'
//           WEE04  codep:0x224c wordp:0xee04 size:0x0055 C-string:'WEE04'
//           WEE5B  codep:0x224c wordp:0xee5b size:0x003e C-string:'WEE5B'
//           WEE9B  codep:0x224c wordp:0xee9b size:0x000a C-string:'WEE9B'
//           WEEA7  codep:0x224c wordp:0xeea7 size:0x000e C-string:'WEEA7'
//           WEEB7  codep:0x224c wordp:0xeeb7 size:0x000a C-string:'WEEB7'
//           WEEC3  codep:0x224c wordp:0xeec3 size:0x000c C-string:'WEEC3'
//         (.TYPE)  codep:0x4b3b wordp:0xeedb size:0x0010 C-string:'_ro__dot_TYPE_rc_'
//           WEEED  codep:0x224c wordp:0xeeed size:0x0019 C-string:'WEEED'
//           WEF08  codep:0x224c wordp:0xef08 size:0x0009 C-string:'WEF08'
//           WEF13  codep:0x224c wordp:0xef13 size:0x003e C-string:'WEF13'
//           WEF53  codep:0x224c wordp:0xef53 size:0x00a2 C-string:'WEF53'
//           WEFF7  codep:0x224c wordp:0xeff7 size:0x0033 C-string:'WEFF7'
//           WF02C  codep:0x224c wordp:0xf02c size:0x0050 C-string:'WF02C'
//           WF07E  codep:0x224c wordp:0xf07e size:0x0027 C-string:'WF07E'
//           WF0A7  codep:0x224c wordp:0xf0a7 size:0x000c C-string:'WF0A7'
//           WF0B5  codep:0x224c wordp:0xf0b5 size:0x0025 C-string:'WF0B5'
//           WF0DC  codep:0x224c wordp:0xf0dc size:0x000b C-string:'WF0DC'
//           WF0E9  codep:0x224c wordp:0xf0e9 size:0x000b C-string:'WF0E9'
//           WF0F6  codep:0x224c wordp:0xf0f6 size:0x000e C-string:'WF0F6'
//           WF106  codep:0x224c wordp:0xf106 size:0x000d C-string:'WF106'
//           WF115  codep:0x224c wordp:0xf115 size:0x000c C-string:'WF115'
//           WF123  codep:0x224c wordp:0xf123 size:0x000c C-string:'WF123'
//          .TDESC  codep:0x4b3b wordp:0xf13a size:0x001c C-string:'DrawTDESC'
//           WF158  codep:0x224c wordp:0xf158 size:0x003d C-string:'WF158'
//           WF197  codep:0x224c wordp:0xf197 size:0x0008 C-string:'WF197'
//           WF1A1  codep:0x224c wordp:0xf1a1 size:0x000b C-string:'WF1A1'
//           WF1AE  codep:0x224c wordp:0xf1ae size:0x000b C-string:'WF1AE'
//           WF1BB  codep:0x224c wordp:0xf1bb size:0x0009 C-string:'WF1BB'
//           WF1C6  codep:0x224c wordp:0xf1c6 size:0x000b C-string:'WF1C6'
//         (.SURF)  codep:0x4b3b wordp:0xf1dd size:0x0018 C-string:'_ro__dot_SURF_rc_'
//           WF1F7  codep:0x224c wordp:0xf1f7 size:0x0028 C-string:'WF1F7'
//           WF221  codep:0x224c wordp:0xf221 size:0x0060 C-string:'WF221'
//           WF283  codep:0x224c wordp:0xf283 size:0x0009 C-string:'WF283'
//           WF28E  codep:0x224c wordp:0xf28e size:0x000c C-string:'WF28E'
//           WF29C  codep:0x224c wordp:0xf29c size:0x000d C-string:'WF29C'
//           WF2AB  codep:0x224c wordp:0xf2ab size:0x000a C-string:'WF2AB'
//           WF2B7  codep:0x224c wordp:0xf2b7 size:0x000c C-string:'WF2B7'
//         (.ATMO)  codep:0x4b3b wordp:0xf2cf size:0x0018 C-string:'_ro__dot_ATMO_rc_'
//           WF2E9  codep:0x224c wordp:0xf2e9 size:0x0028 C-string:'WF2E9'
//           WF313  codep:0x224c wordp:0xf313 size:0x0009 C-string:'WF313'
//           WF31E  codep:0x224c wordp:0xf31e size:0x000d C-string:'WF31E'
//           WF32D  codep:0x224c wordp:0xf32d size:0x000c C-string:'WF32D'
//           WF33B  codep:0x224c wordp:0xf33b size:0x000c C-string:'WF33B'
//        (.WEATH)  codep:0x4b3b wordp:0xf354 size:0x0014 C-string:'_ro__dot_WEATH_rc_'
//           WF36A  codep:0x224c wordp:0xf36a size:0x0023 C-string:'WF36A'
//           WF38F  codep:0x224c wordp:0xf38f size:0x001e C-string:'WF38F'
//           WF3AF  codep:0x1d29 wordp:0xf3af size:0x0007 C-string:'WF3AF'
//           WF3B8  codep:0x224c wordp:0xf3b8 size:0x0028 C-string:'WF3B8'
//           WF3E2  codep:0x224c wordp:0xf3e2 size:0x0030 C-string:'WF3E2'
//           WF414  codep:0x224c wordp:0xf414 size:0x0020 C-string:'WF414'
//           WF436  codep:0x224c wordp:0xf436 size:0x000a C-string:'WF436'
//           WF442  codep:0x224c wordp:0xf442 size:0x0004 C-string:'WF442'
//           WF448  codep:0x224c wordp:0xf448 size:0x0004 C-string:'WF448'
//           WF44E  codep:0x224c wordp:0xf44e size:0x000a C-string:'WF44E'
//      (.V/P-OBJ)  codep:0x4b3b wordp:0xf467 size:0x000c C-string:'_ro__dot_V_slash_P_dash_OBJ_rc_'
//           WF475  codep:0x224c wordp:0xf475 size:0x0006 C-string:'WF475'
//           WF47D  codep:0x224c wordp:0xf47d size:0x000e C-string:'WF47D'
//           WF48D  codep:0x224c wordp:0xf48d size:0x0006 C-string:'WF48D'
//     (.ANALYSIS)  codep:0x4b3b wordp:0xf4a3 size:0x0014 C-string:'_ro__dot_ANALYSIS_rc_'
//     (/ANALYSIS)  codep:0x224c wordp:0xf4c7 size:0x0000 C-string:'_ro__slash_ANALYSIS_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_IsA_dash_SHIE; // ?A-SHIE
extern const unsigned short int cc_IsA_dash_WEAP; // ?A-WEAP
extern const unsigned short int pp_IsAF; // ?AF
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_IsG_dash_AWAR; // ?G-AWAR
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp_NLR; // NLR
extern const unsigned short int pp_SENSE_dash_A; // SENSE-A
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern Color BLUE; // BLUE
extern IFieldType INST_dash_QT; // INST-QT
void DABS(); // DABS
void MAX(); // MAX
void MIN(); // MIN
void Draw(); // .
void DrawR(); // .R
void SPACE(); // SPACE
void SPACES(); // SPACES
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void PICK(); // PICK
void D_gt_(); // D>
void WITHIN(); // WITHIN
void RRND(); // RRND
void SQRT(); // SQRT
void Store_2(); // !_2
void _1_dot_5_ex__2(); // 1.5!_2
void StoreD(); // D!
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void _dash_XTRAIL(); // -XTRAIL
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void D_plus_(); // D+
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF3AF = 0xf3af; // WF3AF size: 7
// {0x4d, 0x4b, 0x47, 0x46, 0x41, 0x42, 0x4f}




// 0xec62: db 0x91 0x00 '  '

// ================================================
// 0xec64: WORD 'WEC66' codep=0x7420 wordp=0xec66
// ================================================
IFieldType WEC66 = {SHIPIDX, 0x27, 0x02};

// ================================================
// 0xec69: WORD 'WEC6B' codep=0x7420 wordp=0xec6b
// ================================================
IFieldType WEC6B = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xec6e: WORD 'WEC70' codep=0x7420 wordp=0xec70
// ================================================
IFieldType WEC70 = {CREWMEMBERIDX, 0x1a, 0x02};

// ================================================
// 0xec73: WORD 'WEC75' codep=0x7394 wordp=0xec75
// ================================================
LoadDataType WEC75 = {ELEMENTIDX, 0x00, 0x10, 0x17, 0x6ba9};

// ================================================
// 0xec7b: WORD 'WEC7D' codep=0x7394 wordp=0xec7d
// ================================================
// orphan
LoadDataType WEC7D = {VESSELIDX, 0x00, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xec83: WORD 'WEC85' codep=0x7420 wordp=0xec85
// ================================================
IFieldType WEC85 = {VESSELIDX, 0x12, 0x07};

// ================================================
// 0xec88: WORD 'WEC8A' codep=0x7394 wordp=0xec8a
// ================================================
LoadDataType WEC8A = {VESSELIDX, 0x04, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xec90: WORD 'WEC92' codep=0x7394 wordp=0xec92
// ================================================
// orphan
LoadDataType WEC92 = {VESSELIDX, 0x06, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xec98: WORD 'WEC9A' codep=0x7394 wordp=0xec9a
// ================================================
LoadDataType WEC9A = {VESSELIDX, 0x07, 0x02, 0x24, 0x6b5d};

// ================================================
// 0xeca0: WORD 'WECA2' codep=0x7394 wordp=0xeca2
// ================================================
LoadDataType WECA2 = {VESSELIDX, 0x0e, 0x02, 0x24, 0x6b5d};

// ================================================
// 0xeca8: WORD 'WECAA' codep=0x7394 wordp=0xecaa
// ================================================
// orphan
LoadDataType WECAA = {VESSELIDX, 0x12, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xecb0: WORD 'WECB2' codep=0x7420 wordp=0xecb2
// ================================================
// orphan
IFieldType WECB2 = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xecb5: WORD 'WECB7' codep=0x7394 wordp=0xecb7
// ================================================
LoadDataType WECB7 = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xecbd: WORD 'WECBF' codep=0x7394 wordp=0xecbf
// ================================================
LoadDataType WECBF = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xecc5: WORD 'WECC7' codep=0x7394 wordp=0xecc7
// ================================================
// orphan
LoadDataType WECC7 = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xeccd: WORD 'WECCF' codep=0x7394 wordp=0xeccf
// ================================================
LoadDataType WECCF = {PLANETIDX, 0x11, 0x02, 0x17, 0x6c49};

// ================================================
// 0xecd5: WORD 'WECD7' codep=0x7394 wordp=0xecd7
// ================================================
LoadDataType WECD7 = {PLANETIDX, 0x13, 0x01, 0x17, 0x6c49};

// ================================================
// 0xecdd: WORD 'WECDF' codep=0x7394 wordp=0xecdf
// ================================================
LoadDataType WECDF = {PLANETIDX, 0x0f, 0x01, 0x17, 0x6c49};

// ================================================
// 0xece5: WORD 'WECE7' codep=0x7394 wordp=0xece7
// ================================================
LoadDataType WECE7 = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xeced: WORD 'WECEF' codep=0x224c wordp=0xecef params=0 returns=0
// ================================================

void WECEF() // WECEF
{
  PRINT("UKNOWN", 6); // (.")
}


// ================================================
// 0xecfa: WORD 'WECFC' codep=0x224c wordp=0xecfc params=0 returns=0
// ================================================

void WECFC() // WECFC
{
  PRINT("VESSEL", 6); // (.")
}


// ================================================
// 0xed07: WORD 'WED09' codep=0x224c wordp=0xed09 params=0 returns=0
// ================================================

void WED09() // WED09
{
  PRINT("DEBRIS", 6); // (.")
}


// ================================================
// 0xed14: WORD '(.VESSEL)' codep=0x4b3b wordp=0xed22
// ================================================

void _ro__dot_VESSEL_rc_() // (.VESSEL)
{
  switch(Pop()) // (.VESSEL)
  {
  case 29:
    WECEF(); // WECEF
    break;
  case 32:
    WECEF(); // WECEF
    break;
  case 0:
    WED09(); // WED09
    break;
  case 20:
    WECEF(); // WECEF
    break;
  default:
    WECFC(); // WECFC
    break;

  }
}

// ================================================
// 0xed36: WORD 'WED38' codep=0x224c wordp=0xed38
// ================================================

void WED38() // WED38
{
  GetINST_dash_S(); // @INST-S
  _ro__dot_VESSEL_rc_(); // (.VESSEL) case
}


// ================================================
// 0xed3e: WORD 'WED40' codep=0x224c wordp=0xed40 params=0 returns=0
// ================================================

void WED40() // WED40
{
  PRINT("DEBRIS", 6); // (.")
}


// ================================================
// 0xed4b: WORD 'WED4D' codep=0x224c wordp=0xed4d params=0 returns=0
// ================================================

void WED4D() // WED4D
{
  PRINT("PLANET", 6); // (.")
}


// ================================================
// 0xed58: WORD 'WED5A' codep=0x224c wordp=0xed5a
// ================================================

void WED5A() // WED5A
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("STELLAR PARAMETERS", 18); // (.")
  CTINIT(); // CTINIT
}


// ================================================
// 0xed77: WORD '(.OBJECT)' codep=0x4b3b wordp=0xed85
// ================================================

void _ro__dot_OBJECT_rc_() // (.OBJECT)
{
  switch(Pop()) // (.OBJECT)
  {
  case 25:
    WED38(); // WED38
    break;
  case 0:
    WED40(); // WED40
    break;
  case 32:
    WED4D(); // WED4D
    break;
  case 23:
    WED5A(); // WED5A
    break;
  case 60:
    NOP(); // NOP
    break;
  default:
    WECEF(); // WECEF
    break;

  }
}

// ================================================
// 0xed9d: WORD 'WED9F' codep=0x224c wordp=0xed9f
// ================================================

void WED9F() // WED9F
{
  GetINST_dash_C(); // @INST-C
  Push(!(Pop()==0x003c?1:0)); //  0x003c = NOT
  Push(Pop() & Pop()); // AND
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  if (Pop() != 0)
  {
    PRINT("ANALYSIS OF LAST SENSOR READING:", 32); // (.")
    CTCR(); // CTCR
    PRINT(" OBJECT: ", 9); // (.")
  }
  CTINIT(); // CTINIT
  GetINST_dash_C(); // @INST-C
  _ro__dot_OBJECT_rc_(); // (.OBJECT) case
}


// ================================================
// 0xedec: WORD 'WEDEE' codep=0x224c wordp=0xedee
// ================================================

void WEDEE() // WEDEE
{
  Push(Pop() * 0x000a); //  0x000a *
  OVER(); // OVER
  _slash_MOD(); // /MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  DrawR(); // .R
  _0_gt_(); // 0>
}


// ================================================
// 0xee02: WORD 'WEE04' codep=0x224c wordp=0xee04
// ================================================

void WEE04() // WEE04
{
  CTCR(); // CTCR
  SPACE(); // SPACE
  LoadData(WEC9A); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WEC66.offset)); // WEC66<IFIELD> @
  ICLOSE(); // ICLOSE
  SWAP(); // SWAP
  Push(0);
  Push(3);
  PICK(); // PICK
  U_slash_MOD(); // U/MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  DrawR(); // .R
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    PRINT(".", 1); // (.")
    do
    {
      WEDEE(); // WEDEE
    } while(Pop() == 0);
  }
  Pop(); Pop(); // 2DROP
  PRINT(" TIMES THE SIZE OF OUR SHIP.", 28); // (.")
}


// ================================================
// 0xee59: WORD 'WEE5B' codep=0x224c wordp=0xee5b
// ================================================

void WEE5B() // WEE5B
{
  CTINIT(); // CTINIT
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WEC6B.offset); // WEC6B<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WEC70.offset)&0xFF); // WEC70<IFIELD> C@
  Push(0);
  Push(0x00c8);
  RRND(); // RRND
  _gt_(); // >
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(Read16(pp_PLHI)); // PLHI @
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  PRINT("NOT CERTAIN", 11); // (.")
}


// ================================================
// 0xee99: WORD 'WEE9B' codep=0x224c wordp=0xee9b
// ================================================

void WEE9B() // WEE9B
{
  CTCR(); // CTCR
  SPACE(); // SPACE
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xeea5: WORD 'WEEA7' codep=0x224c wordp=0xeea7 params=0 returns=0
// ================================================

void WEEA7() // WEEA7
{
  PRINT("TRANSPORT", 9); // (.")
}


// ================================================
// 0xeeb5: WORD 'WEEB7' codep=0x224c wordp=0xeeb7 params=0 returns=0
// ================================================

void WEEB7() // WEEB7
{
  PRINT("SCOUT", 5); // (.")
}


// ================================================
// 0xeec1: WORD 'WEEC3' codep=0x224c wordp=0xeec3 params=0 returns=0
// ================================================

void WEEC3() // WEEC3
{
  PRINT("WARSHIP", 7); // (.")
}


// ================================================
// 0xeecf: WORD '(.TYPE)' codep=0x4b3b wordp=0xeedb
// ================================================

void _ro__dot_TYPE_rc_() // (.TYPE)
{
  switch(Pop()) // (.TYPE)
  {
  case 1:
    WEEA7(); // WEEA7
    break;
  case 2:
    WEEB7(); // WEEB7
    break;
  case 3:
    WEEC3(); // WEEC3
    break;
  default:
    WECEF(); // WECEF
    break;

  }
}

// ================================================
// 0xeeeb: WORD 'WEEED' codep=0x224c wordp=0xeeed
// ================================================

void WEEED() // WEEED
{
  WEE9B(); // WEE9B
  PRINT("TYPE: ", 6); // (.")
  WEE5B(); // WEE5B
  if (Pop() == 0) return;
  LoadData(WEC8A); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  _ro__dot_TYPE_rc_(); // (.TYPE) case
}


// ================================================
// 0xef06: WORD 'WEF08' codep=0x224c wordp=0xef08 params=0 returns=0
// ================================================

void WEF08() // WEF08
{
  PRINT("NONE", 4); // (.")
}


// ================================================
// 0xef11: WORD 'WEF13' codep=0x224c wordp=0xef13 params=0 returns=0
// ================================================

void WEF13() // WEF13
{
  unsigned short int a;
  Push(Read16(pp_IsNEB)); // ?NEB @
  if (Pop() == 0) return;
  GetINST_dash_S(); // @INST-S
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(2);
  Push(4);
  WITHIN(); // WITHIN
  Push(Read16(a)); // R@
  Push(0x000e);
  Push(0x0014);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  Push(Read16(a)); // R@
  Push(0x0017);
  Push(0x001f);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  Push(Pop() | (a==0x0020?1:0)); //  R> 0x0020 = OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xef51: WORD 'WEF53' codep=0x224c wordp=0xef53
// ================================================

void WEF53() // WEF53
{
  WEE9B(); // WEE9B
  PRINT("SHIELDS: ", 9); // (.")
  WEE5B(); // WEE5B
  if (Pop() == 0) return;
  LoadData(WECA2); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x001d);
    _eq_SPECIE(); // =SPECIE
    Push(Pop() & (pp_IsAF==0?1:0)); //  ?AF 0= AND
    if (Pop() != 0)
    {
      Pop(); // DROP
      PRINT("INFINITE", 8); // (.")
    } else
    {
      PRINT("CLASS ", 6); // (.")
      Push(0x015e);
      _slash_(); // /
      Push(1);
      MAX(); // MAX
      Draw(); // .
      PRINT("EQUIVALENT", 10); // (.")
    }
    Push(Read16(cc_IsA_dash_SHIE) & !(Read16(pp_NLR)==1?1:0)); // ?A-SHIE NLR @ 1 = NOT AND
    WEF13(); // WEF13
    if (Pop() != 0)
    {
      PRINT(" RAISED", 7); // (.")
    } else
    {
      PRINT(" LOWERED", 8); // (.")
    }
    return;
  }
  WEF08(); // WEF08
  PRINT(" APPARENT", 9); // (.")
}


// ================================================
// 0xeff5: WORD 'WEFF7' codep=0x224c wordp=0xeff7
// ================================================

void WEFF7() // WEFF7
{
  WEE9B(); // WEE9B
  PRINT("WEAPON STATUS: ", 15); // (.")
  WEE5B(); // WEE5B
  if (Pop() == 0) return;
  Push(!Read16(cc_IsA_dash_WEAP)); // ?A-WEAP NOT
  if (Pop() != 0)
  {
    PRINT("NOT ", 4); // (.")
  }
  PRINT("ARMED", 5); // (.")
}


// ================================================
// 0xf02a: WORD 'WF02C' codep=0x224c wordp=0xf02c params=1 returns=0
// ================================================

void WF02C() // WF02C
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + ((0x65e1+WEC85.offset) + 3))&0xFF); //  WEC85<IFIELD> 3 + + C@
  if (Pop() != 0)
  {
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Read16(Pop() + ((0x65e1+WEC85.offset) - 1))&0xFF); //  WEC85<IFIELD> 1- + C@
    } else
    {
      Push(6);
    }
    Push(pp_RECORD_n_); // RECORD#
    Store_2(); // !_2
    Push(0x001a);
    Push(pp_FILE_n_); // FILE#
    Store_2(); // !_2
    LoadData(WEC75); // from 'ELEMENT'
    Push(0x0010);
    Push(0x002e);
    _dash_XTRAIL(); // -XTRAIL
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    SET_dash_CUR(); // SET-CUR
    CTCR(); // CTCR
    Push(0x000f);
    SPACES(); // SPACES
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf07c: WORD 'WF07E' codep=0x224c wordp=0xf07e
// ================================================

void WF07E() // WF07E
{
  WEE9B(); // WEE9B
  PRINT("CONSTITUENTS: ", 14); // (.")
  CTINIT(); // CTINIT
  Push(0);
  WF02C(); // WF02C
  Push(1);
  WF02C(); // WF02C
  Push(2);
  WF02C(); // WF02C
  Push(3);
  WF02C(); // WF02C
}


// ================================================
// 0xf0a5: WORD 'WF0A7' codep=0x224c wordp=0xf0a7 params=0 returns=1
// ================================================

void WF0A7() // WF0A7
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0b3: WORD 'WF0B5' codep=0x224c wordp=0xf0b5
// ================================================

void WF0B5() // WF0B5
{
  Push(0x0014);
  Push(1);
  CTPOS_dot_(); // CTPOS.
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("ORBIT NUMBER: ", 14); // (.")
  CTINIT(); // CTINIT
  WF0A7(); // WF0A7
  Draw(); // .
}


// ================================================
// 0xf0da: WORD 'WF0DC' codep=0x224c wordp=0xf0dc params=0 returns=0
// ================================================

void WF0DC() // WF0DC
{
  PRINT("ARCTIC", 6); // (.")
}


// ================================================
// 0xf0e7: WORD 'WF0E9' codep=0x224c wordp=0xf0e9 params=0 returns=0
// ================================================

void WF0E9() // WF0E9
{
  PRINT("SUB-", 4); // (.")
  WF0DC(); // WF0DC
}


// ================================================
// 0xf0f4: WORD 'WF0F6' codep=0x224c wordp=0xf0f6 params=0 returns=0
// ================================================

void WF0F6() // WF0F6
{
  PRINT("TEMPERATE", 9); // (.")
}


// ================================================
// 0xf104: WORD 'WF106' codep=0x224c wordp=0xf106 params=0 returns=0
// ================================================

void WF106() // WF106
{
  PRINT("TROPICAL", 8); // (.")
}


// ================================================
// 0xf113: WORD 'WF115' codep=0x224c wordp=0xf115 params=0 returns=0
// ================================================

void WF115() // WF115
{
  PRINT("SEARING", 7); // (.")
}


// ================================================
// 0xf121: WORD 'WF123' codep=0x224c wordp=0xf123 params=0 returns=0
// ================================================

void WF123() // WF123
{
  PRINT("INFERNO", 7); // (.")
}


// ================================================
// 0xf12f: WORD '.TDESC' codep=0x4b3b wordp=0xf13a
// ================================================

void DrawTDESC() // .TDESC
{
  switch(Pop()) // .TDESC
  {
  case 0:
    WF0E9(); // WF0E9
    break;
  case 1:
    WF0DC(); // WF0DC
    break;
  case 2:
    WF0F6(); // WF0F6
    break;
  case 3:
    WF106(); // WF106
    break;
  case 4:
    WF115(); // WF115
    break;
  case 5:
    WF123(); // WF123
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf156: WORD 'WF158' codep=0x224c wordp=0xf158
// ================================================

void WF158() // WF158
{
  WEE9B(); // WEE9B
  PRINT("TEMPERATURE: ", 13); // (.")
  WEE5B(); // WEE5B
  if (Pop() == 0) return;
  LoadData(WECE7); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WECDF); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  DrawTDESC(); // .TDESC case
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    return;
  }
  PRINT(" TO ", 4); // (.")
  DrawTDESC(); // .TDESC case
}


// ================================================
// 0xf195: WORD 'WF197' codep=0x224c wordp=0xf197 params=0 returns=0
// ================================================

void WF197() // WF197
{
  PRINT("GAS", 3); // (.")
}


// ================================================
// 0xf19f: WORD 'WF1A1' codep=0x224c wordp=0xf1a1 params=0 returns=0
// ================================================

void WF1A1() // WF1A1
{
  PRINT("LIQUID", 6); // (.")
}


// ================================================
// 0xf1ac: WORD 'WF1AE' codep=0x224c wordp=0xf1ae params=0 returns=0
// ================================================

void WF1AE() // WF1AE
{
  PRINT("FROZEN", 6); // (.")
}


// ================================================
// 0xf1b9: WORD 'WF1BB' codep=0x224c wordp=0xf1bb params=0 returns=0
// ================================================

void WF1BB() // WF1BB
{
  PRINT("ROCK", 4); // (.")
}


// ================================================
// 0xf1c4: WORD 'WF1C6' codep=0x224c wordp=0xf1c6 params=0 returns=0
// ================================================

void WF1C6() // WF1C6
{
  PRINT("MOLTEN", 6); // (.")
}


// ================================================
// 0xf1d1: WORD '(.SURF)' codep=0x4b3b wordp=0xf1dd
// ================================================

void _ro__dot_SURF_rc_() // (.SURF)
{
  switch(Pop()) // (.SURF)
  {
  case 1:
    WF197(); // WF197
    break;
  case 2:
    WF1A1(); // WF1A1
    break;
  case 3:
    WF1AE(); // WF1AE
    break;
  case 5:
    WF1BB(); // WF1BB
    break;
  case 4:
    WF1C6(); // WF1C6
    break;
  default:
    WECEF(); // WECEF
    break;

  }
}

// ================================================
// 0xf1f5: WORD 'WF1F7' codep=0x224c wordp=0xf1f7
// ================================================

void WF1F7() // WF1F7
{
  WEE9B(); // WEE9B
  PRINT("PREDOMINANT SURFACE: ", 21); // (.")
  WEE5B(); // WEE5B
  if (Pop() == 0) return;
  LoadData(WECB7); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _ro__dot_SURF_rc_(); // (.SURF) case
}


// ================================================
// 0xf21f: WORD 'WF221' codep=0x224c wordp=0xf221
// ================================================

void WF221() // WF221
{
  WEE9B(); // WEE9B
  PRINT("GRAVITY: ", 9); // (.")
  WEE5B(); // WEE5B
  Push(Read16(regsp)); // DUP
  Push(pp_IsG_dash_AWAR); // ?G-AWAR
  Store_2(); // !_2
  if (Pop() == 0) return;
  LoadData(WECBF); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop() - 0x0320); //  0x0320 -
    Push(0);
    SQRT(); // SQRT
    Push(Pop() * 0x000a + 0x0320); //  0x000a * 0x0320 +
  }
  Push(0x0064);
  _slash_MOD(); // /MOD
  Push(0);
  DrawR(); // .R
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0);
  DrawR(); // .R
  Draw(); // .
  PRINT("G", 1); // (.")
}


// ================================================
// 0xf281: WORD 'WF283' codep=0x224c wordp=0xf283 params=0 returns=0
// ================================================

void WF283() // WF283
{
  PRINT("THIN", 4); // (.")
}


// ================================================
// 0xf28c: WORD 'WF28E' codep=0x224c wordp=0xf28e params=0 returns=0
// ================================================

void WF28E() // WF28E
{
  PRINT("VERY ", 5); // (.")
  WF283(); // WF283
}


// ================================================
// 0xf29a: WORD 'WF29C' codep=0x224c wordp=0xf29c params=0 returns=0
// ================================================

void WF29C() // WF29C
{
  PRINT("MODERATE", 8); // (.")
}


// ================================================
// 0xf2a9: WORD 'WF2AB' codep=0x224c wordp=0xf2ab params=0 returns=0
// ================================================

void WF2AB() // WF2AB
{
  PRINT("THICK", 5); // (.")
}


// ================================================
// 0xf2b5: WORD 'WF2B7' codep=0x224c wordp=0xf2b7 params=0 returns=0
// ================================================

void WF2B7() // WF2B7
{
  PRINT("VERY ", 5); // (.")
  WF2AB(); // WF2AB
}


// ================================================
// 0xf2c3: WORD '(.ATMO)' codep=0x4b3b wordp=0xf2cf
// ================================================

void _ro__dot_ATMO_rc_() // (.ATMO)
{
  switch(Pop()) // (.ATMO)
  {
  case 1:
    WF28E(); // WF28E
    break;
  case 2:
    WF283(); // WF283
    break;
  case 3:
    WF29C(); // WF29C
    break;
  case 4:
    WF2AB(); // WF2AB
    break;
  case 5:
    WF2B7(); // WF2B7
    break;
  default:
    WEF08(); // WEF08
    break;

  }
}

// ================================================
// 0xf2e7: WORD 'WF2E9' codep=0x224c wordp=0xf2e9
// ================================================

void WF2E9() // WF2E9
{
  WEE9B(); // WEE9B
  PRINT("ATMOSPHERIC DENSITY: ", 21); // (.")
  WEE5B(); // WEE5B
  if (Pop() == 0) return;
  LoadData(WECD7); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _ro__dot_ATMO_rc_(); // (.ATMO) case
}


// ================================================
// 0xf311: WORD 'WF313' codep=0x224c wordp=0xf313 params=0 returns=0
// ================================================

void WF313() // WF313
{
  PRINT("CALM", 4); // (.")
}


// ================================================
// 0xf31c: WORD 'WF31E' codep=0x224c wordp=0xf31e params=0 returns=0
// ================================================

void WF31E() // WF31E
{
  PRINT("MODERATE", 8); // (.")
}


// ================================================
// 0xf32b: WORD 'WF32D' codep=0x224c wordp=0xf32d params=0 returns=0
// ================================================

void WF32D() // WF32D
{
  PRINT("VIOLENT", 7); // (.")
}


// ================================================
// 0xf339: WORD 'WF33B' codep=0x224c wordp=0xf33b params=0 returns=0
// ================================================

void WF33B() // WF33B
{
  PRINT("VERY ", 5); // (.")
  WF32D(); // WF32D
}


// ================================================
// 0xf347: WORD '(.WEATH)' codep=0x4b3b wordp=0xf354
// ================================================

void _ro__dot_WEATH_rc_() // (.WEATH)
{
  switch(Pop()) // (.WEATH)
  {
  case 1:
    WF313(); // WF313
    break;
  case 2:
    WF31E(); // WF31E
    break;
  case 3:
    WF32D(); // WF32D
    break;
  case 4:
    WF33B(); // WF33B
    break;
  default:
    WEF08(); // WEF08
    break;

  }
}

// ================================================
// 0xf368: WORD 'WF36A' codep=0x224c wordp=0xf36a
// ================================================

void WF36A() // WF36A
{
  WEE9B(); // WEE9B
  PRINT("GLOBAL WEATHER: ", 16); // (.")
  WEE5B(); // WEE5B
  if (Pop() == 0) return;
  LoadData(WECCF); // from 'PLANET'
  Push(Read16(Pop())); //  @
  _ro__dot_WEATH_rc_(); // (.WEATH) case
}


// ================================================
// 0xf38d: WORD 'WF38F' codep=0x224c wordp=0xf38f
// ================================================

void WF38F() // WF38F
{
  WEE9B(); // WEE9B
  PRINT(" SPECTRAL CLASS: ", 17); // (.")
  CTINIT(); // CTINIT
  GetINST_dash_S(); // @INST-S
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xf3ad: WORD 'WF3AF' codep=0x1d29 wordp=0xf3af
// ================================================
// 0xf3af: db 0x4d 0x4b 0x47 0x46 0x41 0x42 0x4f 'MKGFABO'

// ================================================
// 0xf3b6: WORD 'WF3B8' codep=0x224c wordp=0xf3b8 params=1 returns=1
// ================================================

void WF3B8() // WF3B8
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(2);
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Pop() + 1); //  1+
    Push((Read16(pp_WF3AF + i)&0xFF)==a?1:0); // WF3AF I + C@ J =
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf3e0: WORD 'WF3E2' codep=0x224c wordp=0xf3e2
// ================================================

void WF3E2() // WF3E2
{
  WEE9B(); // WEE9B
  PRINT(" ECOSPHERE: ", 12); // (.")
  GetINST_dash_S(); // @INST-S
  WF3B8(); // WF3B8
  Push(Read16(regsp)); // DUP
  CTINIT(); // CTINIT
  Push(Pop() - 3); //  3 -
  Push(1);
  MAX(); // MAX
  Draw(); // .
  PRINT("- ", 2); // (.")
  Push(8);
  MIN(); // MIN
  Draw(); // .
}


// ================================================
// 0xf412: WORD 'WF414' codep=0x224c wordp=0xf414
// ================================================

void WF414() // WF414
{
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  CTINIT(); // CTINIT
  Push(0xbe45); // '.HUFF'
  MODULE(); // MODULE
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf434: WORD 'WF436' codep=0x224c wordp=0xf436
// ================================================

void WF436() // WF436
{
  CTINIT(); // CTINIT
  Push(0x00d6);
  WF414(); // WF414
}


// ================================================
// 0xf440: WORD 'WF442' codep=0x224c wordp=0xf442
// ================================================

void WF442() // WF442
{
  WEE04(); // WEE04
}


// ================================================
// 0xf446: WORD 'WF448' codep=0x224c wordp=0xf448
// ================================================

void WF448() // WF448
{
  WF07E(); // WF07E
}


// ================================================
// 0xf44c: WORD 'WF44E' codep=0x224c wordp=0xf44e
// ================================================

void WF44E() // WF44E
{
  WEEED(); // WEEED
  WEE04(); // WEE04
  WEF53(); // WEF53
  WEFF7(); // WEFF7
}


// ================================================
// 0xf458: WORD '(.V/P-OBJ)' codep=0x4b3b wordp=0xf467
// ================================================

void _ro__dot_V_slash_P_dash_OBJ_rc_() // (.V/P-OBJ)
{
  switch(Pop()) // (.V/P-OBJ)
  {
  case 22:
    WF442(); // WF442
    break;
  case 0:
    WF448(); // WF448
    break;
  default:
    WF44E(); // WF44E
    break;

  }
}

// ================================================
// 0xf473: WORD 'WF475' codep=0x224c wordp=0xf475
// ================================================

void WF475() // WF475
{
  GetINST_dash_S(); // @INST-S
  _ro__dot_V_slash_P_dash_OBJ_rc_(); // (.V/P-OBJ) case
}


// ================================================
// 0xf47b: WORD 'WF47D' codep=0x224c wordp=0xf47d
// ================================================

void WF47D() // WF47D
{
  WF0B5(); // WF0B5
  WF1F7(); // WF1F7
  WF221(); // WF221
  WF2E9(); // WF2E9
  WF158(); // WF158
  WF36A(); // WF36A
}


// ================================================
// 0xf48b: WORD 'WF48D' codep=0x224c wordp=0xf48d
// ================================================

void WF48D() // WF48D
{
  WF38F(); // WF38F
  WF3E2(); // WF3E2
}


// ================================================
// 0xf493: WORD '(.ANALYSIS)' codep=0x4b3b wordp=0xf4a3
// ================================================

void _ro__dot_ANALYSIS_rc_() // (.ANALYSIS)
{
  switch(Pop()) // (.ANALYSIS)
  {
  case 32:
    WF47D(); // WF47D
    break;
  case 23:
    WF48D(); // WF48D
    break;
  case 25:
    WF475(); // WF475
    break;
  case 60:
    WF436(); // WF436
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf4b7: WORD '(/ANALYSIS)' codep=0x224c wordp=0xf4c7
// ================================================
// entry

void _ro__slash_ANALYSIS_rc_() // (/ANALYSIS)
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  DABS(); // DABS
  Push(0x0002); Push(0x0000);
  D_gt_(); // D>
  if (Pop() != 0)
  {
    _gt_C_plus_S(); // >C+S
    WED9F(); // WED9F
    GetINST_dash_C(); // @INST-C
    _ro__dot_ANALYSIS_rc_(); // (.ANALYSIS) case
    ICLOSE(); // ICLOSE
    Push(0x1b58); Push(0x0000);
  } else
  {
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      PRINT("I SAID THERE'S NOTHING THERE!", 29); // (.")
    } else
    {
      PRINT("I NEED A CURRENT SENSOR READING.", 32); // (.")
    }
    Pop(); // DROP
    Push(0x05dc); Push(0x0000);
  }
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  StoreD(); // D!
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
}

// 0xf55a: db 0x41 0x4e 0x2d 0x56 0x4f 0x43 0x00 'AN-VOC '

