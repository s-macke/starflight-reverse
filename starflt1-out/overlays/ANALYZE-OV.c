// ====== OVERLAY 'ANALYZE-OV' ======
// store offset = 0xeb60
// overlay size   = 0x0a00

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           %MASS  codep:0x744d wordp:0xeb76 size:0x0003 C-string:'_pe_MASS'
//           WEB7B  codep:0x744d wordp:0xeb7b size:0x0003 C-string:'WEB7B'
//           WEB80  codep:0x744d wordp:0xeb80 size:0x0003 C-string:'WEB80'
//           WEB85  codep:0x73ea wordp:0xeb85 size:0x0006 C-string:'WEB85'
//           WEB8D  codep:0x73ea wordp:0xeb8d size:0x0006 C-string:'WEB8D'
//           WEB95  codep:0x744d wordp:0xeb95 size:0x0003 C-string:'WEB95'
//           WEB9A  codep:0x73ea wordp:0xeb9a size:0x0006 C-string:'WEB9A'
//           WEBA2  codep:0x73ea wordp:0xeba2 size:0x0006 C-string:'WEBA2'
//           WEBAA  codep:0x73ea wordp:0xebaa size:0x0006 C-string:'WEBAA'
//           WEBB2  codep:0x73ea wordp:0xebb2 size:0x0006 C-string:'WEBB2'
//           WEBBA  codep:0x73ea wordp:0xebba size:0x0006 C-string:'WEBBA'
//           WEBC2  codep:0x744d wordp:0xebc2 size:0x0003 C-string:'WEBC2'
//           WEBC7  codep:0x73ea wordp:0xebc7 size:0x0006 C-string:'WEBC7'
//           WEBCF  codep:0x73ea wordp:0xebcf size:0x0006 C-string:'WEBCF'
//           WEBD7  codep:0x73ea wordp:0xebd7 size:0x0006 C-string:'WEBD7'
//   ATMO.ACTIVITY  codep:0x73ea wordp:0xebdf size:0x0006 C-string:'ATMO_dot_ACTIVITY'
//           WEBE7  codep:0x73ea wordp:0xebe7 size:0x0006 C-string:'WEBE7'
//           WEBEF  codep:0x73ea wordp:0xebef size:0x0006 C-string:'WEBEF'
//           WEBF7  codep:0x73ea wordp:0xebf7 size:0x0006 C-string:'WEBF7'
//           WEBFF  codep:0x744d wordp:0xebff size:0x0003 C-string:'WEBFF'
//           WEC04  codep:0x224c wordp:0xec04 size:0x0020 C-string:'WEC04'
//           WEC26  codep:0x224c wordp:0xec26 size:0x003a C-string:'WEC26'
//           WEC62  codep:0x224c wordp:0xec62 size:0x000b C-string:'WEC62'
//           WEC6F  codep:0x224c wordp:0xec6f size:0x000b C-string:'WEC6F'
//           WEC7C  codep:0x224c wordp:0xec7c size:0x000b C-string:'WEC7C'
//           WEC89  codep:0x224c wordp:0xec89 size:0x000d C-string:'WEC89'
//       (.VESSEL)  codep:0x4a4f wordp:0xeca4 size:0x0010 C-string:'_ro__dot_VESSEL_rc_'
//           WECB6  codep:0x224c wordp:0xecb6 size:0x0006 C-string:'WECB6'
//           WECBE  codep:0x224c wordp:0xecbe size:0x000b C-string:'WECBE'
//           WECCB  codep:0x224c wordp:0xeccb size:0x000b C-string:'WECCB'
//           WECD8  codep:0x224c wordp:0xecd8 size:0x001d C-string:'WECD8'
//       (.OBJECT)  codep:0x4a4f wordp:0xed03 size:0x0014 C-string:'_ro__dot_OBJECT_rc_'
//         .OBJECT  codep:0x224c wordp:0xed19 size:0x0041 C-string:'DrawOBJECT'
//           WED5C  codep:0x224c wordp:0xed5c size:0x0014 C-string:'WED5C'
//           .SIZE  codep:0x224c wordp:0xed72 size:0x0055 C-string:'DrawSIZE'
//       ?.CERTAIN  codep:0x224c wordp:0xedc9 size:0x003e C-string:'Is_dot_CERTAIN'
//          HEADER  codep:0x224c wordp:0xee09 size:0x000a C-string:'HEADER'
//           WEE15  codep:0x224c wordp:0xee15 size:0x000e C-string:'WEE15'
//           WEE25  codep:0x224c wordp:0xee25 size:0x000a C-string:'WEE25'
//           WEE31  codep:0x224c wordp:0xee31 size:0x000c C-string:'WEE31'
//         (.TYPE)  codep:0x4a4f wordp:0xee49 size:0x0010 C-string:'_ro__dot_TYPE_rc_'
//           .TYPE  codep:0x224c wordp:0xee5b size:0x0019 C-string:'DrawTYPE'
//           WEE76  codep:0x224c wordp:0xee76 size:0x0009 C-string:'WEE76'
//        .SHIELDS  codep:0x224c wordp:0xee81 size:0x0084 C-string:'DrawSHIELDS'
//           .WEAP  codep:0x224c wordp:0xef07 size:0x0033 C-string:'DrawWEAP'
//          .DELEM  codep:0x224c wordp:0xef3c size:0x0050 C-string:'DrawDELEM'
//        .CONSTIT  codep:0x224c wordp:0xef8e size:0x0027 C-string:'DrawCONSTIT'
//           WEFB7  codep:0x224c wordp:0xefb7 size:0x000c C-string:'WEFB7'
//          .ORBIT  codep:0x224c wordp:0xefc5 size:0x0025 C-string:'DrawORBIT'
//           WEFEC  codep:0x224c wordp:0xefec size:0x000b C-string:'WEFEC'
//           WEFF9  codep:0x224c wordp:0xeff9 size:0x000b C-string:'WEFF9'
//           WF006  codep:0x224c wordp:0xf006 size:0x000e C-string:'WF006'
//           WF016  codep:0x224c wordp:0xf016 size:0x000d C-string:'WF016'
//           WF025  codep:0x224c wordp:0xf025 size:0x000c C-string:'WF025'
//           WF033  codep:0x224c wordp:0xf033 size:0x000c C-string:'WF033'
//          .TDESC  codep:0x4a4f wordp:0xf04a size:0x001c C-string:'DrawTDESC'
//           WF068  codep:0x224c wordp:0xf068 size:0x003d C-string:'WF068'
//           WF0A7  codep:0x224c wordp:0xf0a7 size:0x0008 C-string:'WF0A7'
//           WF0B1  codep:0x224c wordp:0xf0b1 size:0x000b C-string:'WF0B1'
//           WF0BE  codep:0x224c wordp:0xf0be size:0x000b C-string:'WF0BE'
//           WF0CB  codep:0x224c wordp:0xf0cb size:0x0009 C-string:'WF0CB'
//           WF0D6  codep:0x224c wordp:0xf0d6 size:0x000b C-string:'WF0D6'
//         (.SURF)  codep:0x4a4f wordp:0xf0ed size:0x0018 C-string:'_ro__dot_SURF_rc_'
//           .SURF  codep:0x224c wordp:0xf107 size:0x0028 C-string:'DrawSURF'
//           .GRAV  codep:0x224c wordp:0xf131 size:0x0060 C-string:'DrawGRAV'
//           WF193  codep:0x224c wordp:0xf193 size:0x0009 C-string:'WF193'
//           WF19E  codep:0x224c wordp:0xf19e size:0x000c C-string:'WF19E'
//           WF1AC  codep:0x224c wordp:0xf1ac size:0x000d C-string:'WF1AC'
//           WF1BB  codep:0x224c wordp:0xf1bb size:0x000a C-string:'WF1BB'
//           WF1C7  codep:0x224c wordp:0xf1c7 size:0x000c C-string:'WF1C7'
//         (.ATMO)  codep:0x4a4f wordp:0xf1df size:0x0018 C-string:'_ro__dot_ATMO_rc_'
//           WF1F9  codep:0x224c wordp:0xf1f9 size:0x0028 C-string:'WF1F9'
//           WF223  codep:0x224c wordp:0xf223 size:0x0009 C-string:'WF223'
//           WF22E  codep:0x224c wordp:0xf22e size:0x000d C-string:'WF22E'
//           WF23D  codep:0x224c wordp:0xf23d size:0x000c C-string:'WF23D'
//           WF24B  codep:0x224c wordp:0xf24b size:0x000c C-string:'WF24B'
//        (.WEATH)  codep:0x4a4f wordp:0xf264 size:0x0014 C-string:'_ro__dot_WEATH_rc_'
//          .WEATH  codep:0x224c wordp:0xf27a size:0x0023 C-string:'DrawWEATH'
//           WF29F  codep:0x224c wordp:0xf29f size:0x001e C-string:'WF29F'
//           WF2BF  codep:0x1d29 wordp:0xf2bf size:0x0007 C-string:'WF2BF'
//           WF2C8  codep:0x224c wordp:0xf2c8 size:0x0028 C-string:'WF2C8'
//           WF2F2  codep:0x224c wordp:0xf2f2 size:0x002a C-string:'WF2F2'
//           WF31E  codep:0x224c wordp:0xf31e size:0x00cb C-string:'WF31E'
//           WF3EB  codep:0x224c wordp:0xf3eb size:0x0004 C-string:'WF3EB'
//           WF3F1  codep:0x224c wordp:0xf3f1 size:0x0004 C-string:'WF3F1'
//           WF3F7  codep:0x224c wordp:0xf3f7 size:0x000a C-string:'WF3F7'
//      (.V/P-OBJ)  codep:0x4a4f wordp:0xf410 size:0x000c C-string:'_ro__dot_V_slash_P_dash_OBJ_rc_'
//           WF41E  codep:0x224c wordp:0xf41e size:0x0006 C-string:'WF41E'
//           WF426  codep:0x224c wordp:0xf426 size:0x000e C-string:'WF426'
//           WF436  codep:0x224c wordp:0xf436 size:0x0012 C-string:'WF436'
//     (.ANALYSIS)  codep:0x4a4f wordp:0xf458 size:0x0010 C-string:'_ro__dot_ANALYSIS_rc_'
//     (/ANALYSIS)  codep:0x224c wordp:0xf478 size:0x0000 C-string:'_ro__slash_ANALYSIS_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_IsA_dash_SHIE; // ?A-SHIE
extern const unsigned short int cc_IsA_dash_WEAP; // ?A-WEAP
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_IsWIN; // ?WIN
extern const unsigned short int pp_IsG_dash_AWARE; // ?G-AWARE
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp_SENSE_dash_ADDR; // SENSE-ADDR
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp_IsFANLYZ; // ?FANLYZ
extern Color BLUE; // BLUE
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_QTY; // INST-QTY
void DABS(); // DABS
void MIN(); // MIN
void Draw(); // .
void DrawR(); // .R
void SPACE(); // SPACE
void SPACES(); // SPACES
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void PICK(); // PICK
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _1_dot_5_ex_(); // 1.5!
void StoreD(); // D!
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void _dash_XTRAILING(); // -XTRAILING
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
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF2BF = 0xf2bf; // WF2BF size: 7
// {0x4d, 0x4b, 0x47, 0x46, 0x41, 0x42, 0x4f}




// 0xeb72: db 0x9b 0x00 '  '

// ================================================
// 0xeb74: WORD '%MASS' codep=0x744d wordp=0xeb76
// ================================================
IFieldType _pe_MASS = {SHIPIDX, 0x27, 0x02};

// ================================================
// 0xeb79: WORD 'WEB7B' codep=0x744d wordp=0xeb7b
// ================================================
IFieldType WEB7B = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xeb7e: WORD 'WEB80' codep=0x744d wordp=0xeb80
// ================================================
IFieldType WEB80 = {CREWMEMBERIDX, 0x1a, 0x02};

// ================================================
// 0xeb83: WORD 'WEB85' codep=0x73ea wordp=0xeb85
// ================================================
LoadDataType WEB85 = {ELEMENTIDX, 0x00, 0x10, 0x17, 0x650a};

// ================================================
// 0xeb8b: WORD 'WEB8D' codep=0x73ea wordp=0xeb8d
// ================================================
LoadDataType WEB8D = {VESSELIDX, 0x00, 0x01, 0x49, 0x6491};

// ================================================
// 0xeb93: WORD 'WEB95' codep=0x744d wordp=0xeb95
// ================================================
IFieldType WEB95 = {VESSELIDX, 0x12, 0x07};

// ================================================
// 0xeb98: WORD 'WEB9A' codep=0x73ea wordp=0xeb9a
// ================================================
LoadDataType WEB9A = {VESSELIDX, 0x04, 0x01, 0x49, 0x6491};

// ================================================
// 0xeba0: WORD 'WEBA2' codep=0x73ea wordp=0xeba2
// ================================================
// orphan
LoadDataType WEBA2 = {VESSELIDX, 0x06, 0x01, 0x49, 0x6491};

// ================================================
// 0xeba8: WORD 'WEBAA' codep=0x73ea wordp=0xebaa
// ================================================
LoadDataType WEBAA = {VESSELIDX, 0x07, 0x02, 0x49, 0x6491};

// ================================================
// 0xebb0: WORD 'WEBB2' codep=0x73ea wordp=0xebb2
// ================================================
LoadDataType WEBB2 = {VESSELIDX, 0x0e, 0x02, 0x49, 0x6491};

// ================================================
// 0xebb8: WORD 'WEBBA' codep=0x73ea wordp=0xebba
// ================================================
// orphan
LoadDataType WEBBA = {VESSELIDX, 0x12, 0x01, 0x49, 0x6491};

// ================================================
// 0xebc0: WORD 'WEBC2' codep=0x744d wordp=0xebc2
// ================================================
// orphan
IFieldType WEBC2 = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xebc5: WORD 'WEBC7' codep=0x73ea wordp=0xebc7
// ================================================
LoadDataType WEBC7 = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};

// ================================================
// 0xebcd: WORD 'WEBCF' codep=0x73ea wordp=0xebcf
// ================================================
LoadDataType WEBCF = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xebd5: WORD 'WEBD7' codep=0x73ea wordp=0xebd7
// ================================================
LoadDataType WEBD7 = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xebdd: WORD 'ATMO.ACTIVITY' codep=0x73ea wordp=0xebdf
// ================================================
LoadDataType ATMO_dot_ACTIVITY = {PLANETIDX, 0x11, 0x02, 0x16, 0x658f};

// ================================================
// 0xebe5: WORD 'WEBE7' codep=0x73ea wordp=0xebe7
// ================================================
LoadDataType WEBE7 = {PLANETIDX, 0x13, 0x01, 0x16, 0x658f};

// ================================================
// 0xebed: WORD 'WEBEF' codep=0x73ea wordp=0xebef
// ================================================
LoadDataType WEBEF = {PLANETIDX, 0x0f, 0x01, 0x16, 0x658f};

// ================================================
// 0xebf5: WORD 'WEBF7' codep=0x73ea wordp=0xebf7
// ================================================
LoadDataType WEBF7 = {PLANETIDX, 0x10, 0x01, 0x16, 0x658f};

// ================================================
// 0xebfd: WORD 'WEBFF' codep=0x744d wordp=0xebff
// ================================================
IFieldType WEBFF = {STARSYSTEMIDX, 0x0b, 0x02};

// ================================================
// 0xec02: WORD 'WEC04' codep=0x224c wordp=0xec04 params=0 returns=1
// ================================================

void WEC04() // WEC04
{
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(Read16(0x63ef+WEBFF.offset)); // WEBFF<IFIELD> @
  _st_(); // <
  Push(!Pop()); //  NOT
  Push(Read16(pp_IsWIN)); // ?WIN @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Read16(0x63ef+WEBFF.offset)); // WEBFF<IFIELD> @
  _gt_(); // >
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xec24: WORD 'WEC26' codep=0x224c wordp=0xec26 params=0 returns=0
// ================================================

void WEC26() // WEC26
{
  WEC04(); // WEC04
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(0x000b);
    Push(4);
    D_eq_(); // D=
    if (Pop() != 0)
    {
      IOPEN(); // IOPEN
      Push(0x0020);
      Push(0);
      IFIND(); // IFIND
      if (Pop() != 0)
      {
        Push(0);
        LoadData(WEBD7); // from 'PLANET'
        C_ex_(); // C!
      }
      ICLOSE(); // ICLOSE
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec60: WORD 'WEC62' codep=0x224c wordp=0xec62 params=0 returns=0
// ================================================

void WEC62() // WEC62
{
  PRINT("UKNOWN", 6); // (.")
}


// ================================================
// 0xec6d: WORD 'WEC6F' codep=0x224c wordp=0xec6f params=0 returns=0
// ================================================

void WEC6F() // WEC6F
{
  PRINT("VESSEL", 6); // (.")
}


// ================================================
// 0xec7a: WORD 'WEC7C' codep=0x224c wordp=0xec7c params=0 returns=0
// ================================================

void WEC7C() // WEC7C
{
  PRINT("DEBRIS", 6); // (.")
}


// ================================================
// 0xec87: WORD 'WEC89' codep=0x224c wordp=0xec89 params=0 returns=0
// ================================================

void WEC89() // WEC89
{
  PRINT("LIFEFORM", 8); // (.")
}


// ================================================
// 0xec96: WORD '(.VESSEL)' codep=0x4a4f wordp=0xeca4
// ================================================

void _ro__dot_VESSEL_rc_() // (.VESSEL)
{
  switch(Pop()) // (.VESSEL)
  {
  case 22:
    WEC89(); // WEC89
    break;
  case 24:
    WEC7C(); // WEC7C
    break;
  case 20:
    WEC62(); // WEC62
    break;
  default:
    WEC6F(); // WEC6F
    break;

  }
}

// ================================================
// 0xecb4: WORD 'WECB6' codep=0x224c wordp=0xecb6
// ================================================

void WECB6() // WECB6
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  _ro__dot_VESSEL_rc_(); // (.VESSEL) case
}


// ================================================
// 0xecbc: WORD 'WECBE' codep=0x224c wordp=0xecbe params=0 returns=0
// ================================================

void WECBE() // WECBE
{
  PRINT("DEBRIS", 6); // (.")
}


// ================================================
// 0xecc9: WORD 'WECCB' codep=0x224c wordp=0xeccb params=0 returns=0
// ================================================

void WECCB() // WECCB
{
  PRINT("PLANET", 6); // (.")
}


// ================================================
// 0xecd6: WORD 'WECD8' codep=0x224c wordp=0xecd8 params=0 returns=0
// ================================================

void WECD8() // WECD8
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("STELLAR PARAMETERS", 18); // (.")
  CTINIT(); // CTINIT
}


// ================================================
// 0xecf5: WORD '(.OBJECT)' codep=0x4a4f wordp=0xed03
// ================================================

void _ro__dot_OBJECT_rc_() // (.OBJECT)
{
  switch(Pop()) // (.OBJECT)
  {
  case 25:
    WECB6(); // WECB6
    break;
  case 24:
    WECBE(); // WECBE
    break;
  case 32:
    WECCB(); // WECCB
    break;
  case 23:
    WECD8(); // WECD8
    break;
  default:
    WEC62(); // WEC62
    break;

  }
}

// ================================================
// 0xed17: WORD '.OBJECT' codep=0x224c wordp=0xed19
// ================================================

void DrawOBJECT() // .OBJECT
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  if (Pop() != 0)
  {
    PRINT("ANALYSIS OF LAST SENSOR READING:", 32); // (.")
    CTCR(); // CTCR
    PRINT(" OBJECT: ", 9); // (.")
  }
  CTINIT(); // CTINIT
  GetINST_dash_CLASS(); // @INST-CLASS
  _ro__dot_OBJECT_rc_(); // (.OBJECT) case
}


// ================================================
// 0xed5a: WORD 'WED5C' codep=0x224c wordp=0xed5c params=2 returns=3
// ================================================

void WED5C() // WED5C
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
// 0xed70: WORD '.SIZE' codep=0x224c wordp=0xed72
// ================================================

void DrawSIZE() // .SIZE
{
  CTCR(); // CTCR
  SPACE(); // SPACE
  LoadData(WEBAA); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+_pe_MASS.offset)); // %MASS<IFIELD> @
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
      WED5C(); // WED5C
    } while(Pop() == 0);
  }
  Pop(); Pop(); // 2DROP
  PRINT(" TIMES THE SIZE OF OUR SHIP.", 28); // (.")
}


// ================================================
// 0xedc7: WORD '?.CERTAIN' codep=0x224c wordp=0xedc9 params=0 returns=1
// ================================================

void Is_dot_CERTAIN() // ?.CERTAIN
{
  CTINIT(); // CTINIT
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WEB7B.offset); // WEB7B<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+WEB80.offset)&0xFF); // WEB80<IFIELD> C@
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
// 0xee07: WORD 'HEADER' codep=0x224c wordp=0xee09 params=0 returns=0
// ================================================

void HEADER() // HEADER
{
  CTCR(); // CTCR
  SPACE(); // SPACE
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee13: WORD 'WEE15' codep=0x224c wordp=0xee15 params=0 returns=0
// ================================================

void WEE15() // WEE15
{
  PRINT("TRANSPORT", 9); // (.")
}


// ================================================
// 0xee23: WORD 'WEE25' codep=0x224c wordp=0xee25 params=0 returns=0
// ================================================

void WEE25() // WEE25
{
  PRINT("SCOUT", 5); // (.")
}


// ================================================
// 0xee2f: WORD 'WEE31' codep=0x224c wordp=0xee31 params=0 returns=0
// ================================================

void WEE31() // WEE31
{
  PRINT("WARSHIP", 7); // (.")
}


// ================================================
// 0xee3d: WORD '(.TYPE)' codep=0x4a4f wordp=0xee49
// ================================================

void _ro__dot_TYPE_rc_() // (.TYPE)
{
  switch(Pop()) // (.TYPE)
  {
  case 1:
    WEE15(); // WEE15
    break;
  case 2:
    WEE25(); // WEE25
    break;
  case 3:
    WEE31(); // WEE31
    break;
  default:
    WEC62(); // WEC62
    break;

  }
}

// ================================================
// 0xee59: WORD '.TYPE' codep=0x224c wordp=0xee5b params=0 returns=0
// ================================================

void DrawTYPE() // .TYPE
{
  HEADER(); // HEADER
  PRINT("TYPE: ", 6); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(WEB9A); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  _ro__dot_TYPE_rc_(); // (.TYPE) case
}


// ================================================
// 0xee74: WORD 'WEE76' codep=0x224c wordp=0xee76 params=0 returns=0
// ================================================

void WEE76() // WEE76
{
  PRINT("NONE", 4); // (.")
}


// ================================================
// 0xee7f: WORD '.SHIELDS' codep=0x224c wordp=0xee81 params=0 returns=0
// ================================================

void DrawSHIELDS() // .SHIELDS
{
  HEADER(); // HEADER
  PRINT("SHIELDS: ", 9); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(WEBB2); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    LoadData(WEB8D); // from 'VESSEL'
    Push(!((Read16(Pop())&0xFF)==2?1:0)); //  C@ 2 = NOT
    if (Pop() != 0)
    {
      PRINT("CLASS ", 6); // (.")
      Push(0x00c8);
      _slash_(); // /
      Draw(); // .
      PRINT("EQUIVALENT ", 11); // (.")
      Push(Read16(cc_IsA_dash_SHIE)); // ?A-SHIE
      if (Pop() != 0)
      {
        PRINT("RAISED", 6); // (.")
      } else
      {
        PRINT("LOWERED", 7); // (.")
      }
    } else
    {
      Pop(); // DROP
      WEC62(); // WEC62
    }
    return;
  }
  WEE76(); // WEE76
  PRINT(" APPARENT", 9); // (.")
}


// ================================================
// 0xef05: WORD '.WEAP' codep=0x224c wordp=0xef07 params=0 returns=0
// ================================================

void DrawWEAP() // .WEAP
{
  HEADER(); // HEADER
  PRINT("WEAPON STATUS: ", 15); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  Push(!Read16(cc_IsA_dash_WEAP)); // ?A-WEAP NOT
  if (Pop() != 0)
  {
    PRINT("NOT ", 4); // (.")
  }
  PRINT("ARMED", 5); // (.")
}


// ================================================
// 0xef3a: WORD '.DELEM' codep=0x224c wordp=0xef3c params=1 returns=0
// ================================================

void DrawDELEM() // .DELEM
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + ((0x63ef+WEB95.offset) + 3))&0xFF); //  WEB95<IFIELD> 3 + + C@
  if (Pop() != 0)
  {
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Read16(Pop() + ((0x63ef+WEB95.offset) - 1))&0xFF); //  WEB95<IFIELD> 1- + C@
    } else
    {
      Push(6);
    }
    Push(pp_RECORD_n_); // RECORD#
    Store_3(); // !_3
    Push(0x001a);
    Push(pp_FILE_n_); // FILE#
    Store_3(); // !_3
    LoadData(WEB85); // from 'ELEMENT'
    Push(0x0010);
    Push(0x002e);
    _dash_XTRAILING(); // -XTRAILING
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    SET_dash_CURRENT(); // SET-CURRENT
    CTCR(); // CTCR
    Push(0x000f);
    SPACES(); // SPACES
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xef8c: WORD '.CONSTIT' codep=0x224c wordp=0xef8e params=0 returns=0
// ================================================

void DrawCONSTIT() // .CONSTIT
{
  HEADER(); // HEADER
  PRINT("CONSTITUENTS: ", 14); // (.")
  CTINIT(); // CTINIT
  Push(0);
  DrawDELEM(); // .DELEM
  Push(1);
  DrawDELEM(); // .DELEM
  Push(2);
  DrawDELEM(); // .DELEM
  Push(3);
  DrawDELEM(); // .DELEM
}


// ================================================
// 0xefb5: WORD 'WEFB7' codep=0x224c wordp=0xefb7 params=0 returns=1
// ================================================

void WEFB7() // WEFB7
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefc3: WORD '.ORBIT' codep=0x224c wordp=0xefc5 params=0 returns=0
// ================================================

void DrawORBIT() // .ORBIT
{
  Push(0x0014);
  Push(1);
  CTPOS_dot_(); // CTPOS.
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("ORBIT NUMBER: ", 14); // (.")
  CTINIT(); // CTINIT
  WEFB7(); // WEFB7
  Draw(); // .
}


// ================================================
// 0xefea: WORD 'WEFEC' codep=0x224c wordp=0xefec params=0 returns=0
// ================================================

void WEFEC() // WEFEC
{
  PRINT("ARCTIC", 6); // (.")
}


// ================================================
// 0xeff7: WORD 'WEFF9' codep=0x224c wordp=0xeff9 params=0 returns=0
// ================================================

void WEFF9() // WEFF9
{
  PRINT("SUB-", 4); // (.")
  WEFEC(); // WEFEC
}


// ================================================
// 0xf004: WORD 'WF006' codep=0x224c wordp=0xf006 params=0 returns=0
// ================================================

void WF006() // WF006
{
  PRINT("TEMPERATE", 9); // (.")
}


// ================================================
// 0xf014: WORD 'WF016' codep=0x224c wordp=0xf016 params=0 returns=0
// ================================================

void WF016() // WF016
{
  PRINT("TROPICAL", 8); // (.")
}


// ================================================
// 0xf023: WORD 'WF025' codep=0x224c wordp=0xf025 params=0 returns=0
// ================================================

void WF025() // WF025
{
  PRINT("SEARING", 7); // (.")
}


// ================================================
// 0xf031: WORD 'WF033' codep=0x224c wordp=0xf033 params=0 returns=0
// ================================================

void WF033() // WF033
{
  PRINT("INFERNO", 7); // (.")
}


// ================================================
// 0xf03f: WORD '.TDESC' codep=0x4a4f wordp=0xf04a
// ================================================

void DrawTDESC() // .TDESC
{
  switch(Pop()) // .TDESC
  {
  case 0:
    WEFF9(); // WEFF9
    break;
  case 1:
    WEFEC(); // WEFEC
    break;
  case 2:
    WF006(); // WF006
    break;
  case 3:
    WF016(); // WF016
    break;
  case 4:
    WF025(); // WF025
    break;
  case 5:
    WF033(); // WF033
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf066: WORD 'WF068' codep=0x224c wordp=0xf068 params=0 returns=0
// ================================================

void WF068() // WF068
{
  HEADER(); // HEADER
  PRINT("TEMPERATURE: ", 13); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(WEBF7); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEBEF); // from 'PLANET'
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
// 0xf0a5: WORD 'WF0A7' codep=0x224c wordp=0xf0a7 params=0 returns=0
// ================================================

void WF0A7() // WF0A7
{
  PRINT("GAS", 3); // (.")
}


// ================================================
// 0xf0af: WORD 'WF0B1' codep=0x224c wordp=0xf0b1 params=0 returns=0
// ================================================

void WF0B1() // WF0B1
{
  PRINT("LIQUID", 6); // (.")
}


// ================================================
// 0xf0bc: WORD 'WF0BE' codep=0x224c wordp=0xf0be params=0 returns=0
// ================================================

void WF0BE() // WF0BE
{
  PRINT("FROZEN", 6); // (.")
}


// ================================================
// 0xf0c9: WORD 'WF0CB' codep=0x224c wordp=0xf0cb params=0 returns=0
// ================================================

void WF0CB() // WF0CB
{
  PRINT("ROCK", 4); // (.")
}


// ================================================
// 0xf0d4: WORD 'WF0D6' codep=0x224c wordp=0xf0d6 params=0 returns=0
// ================================================

void WF0D6() // WF0D6
{
  PRINT("MOLTEN", 6); // (.")
}


// ================================================
// 0xf0e1: WORD '(.SURF)' codep=0x4a4f wordp=0xf0ed
// ================================================

void _ro__dot_SURF_rc_() // (.SURF)
{
  switch(Pop()) // (.SURF)
  {
  case 1:
    WF0A7(); // WF0A7
    break;
  case 2:
    WF0B1(); // WF0B1
    break;
  case 3:
    WF0BE(); // WF0BE
    break;
  case 5:
    WF0CB(); // WF0CB
    break;
  case 4:
    WF0D6(); // WF0D6
    break;
  default:
    WEC62(); // WEC62
    break;

  }
}

// ================================================
// 0xf105: WORD '.SURF' codep=0x224c wordp=0xf107 params=0 returns=0
// ================================================

void DrawSURF() // .SURF
{
  HEADER(); // HEADER
  PRINT("PREDOMINANT SURFACE: ", 21); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(WEBC7); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _ro__dot_SURF_rc_(); // (.SURF) case
}


// ================================================
// 0xf12f: WORD '.GRAV' codep=0x224c wordp=0xf131 params=0 returns=0
// ================================================

void DrawGRAV() // .GRAV
{
  HEADER(); // HEADER
  PRINT("GRAVITY: ", 9); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  Push(Read16(regsp)); // DUP
  Push(pp_IsG_dash_AWARE); // ?G-AWARE
  Store_3(); // !_3
  if (Pop() == 0) return;
  LoadData(WEBCF); // from 'PLANET'
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
// 0xf191: WORD 'WF193' codep=0x224c wordp=0xf193 params=0 returns=0
// ================================================

void WF193() // WF193
{
  PRINT("THIN", 4); // (.")
}


// ================================================
// 0xf19c: WORD 'WF19E' codep=0x224c wordp=0xf19e params=0 returns=0
// ================================================

void WF19E() // WF19E
{
  PRINT("VERY ", 5); // (.")
  WF193(); // WF193
}


// ================================================
// 0xf1aa: WORD 'WF1AC' codep=0x224c wordp=0xf1ac params=0 returns=0
// ================================================

void WF1AC() // WF1AC
{
  PRINT("MODERATE", 8); // (.")
}


// ================================================
// 0xf1b9: WORD 'WF1BB' codep=0x224c wordp=0xf1bb params=0 returns=0
// ================================================

void WF1BB() // WF1BB
{
  PRINT("THICK", 5); // (.")
}


// ================================================
// 0xf1c5: WORD 'WF1C7' codep=0x224c wordp=0xf1c7 params=0 returns=0
// ================================================

void WF1C7() // WF1C7
{
  PRINT("VERY ", 5); // (.")
  WF1BB(); // WF1BB
}


// ================================================
// 0xf1d3: WORD '(.ATMO)' codep=0x4a4f wordp=0xf1df
// ================================================

void _ro__dot_ATMO_rc_() // (.ATMO)
{
  switch(Pop()) // (.ATMO)
  {
  case 1:
    WF19E(); // WF19E
    break;
  case 2:
    WF193(); // WF193
    break;
  case 3:
    WF1AC(); // WF1AC
    break;
  case 4:
    WF1BB(); // WF1BB
    break;
  case 5:
    WF1C7(); // WF1C7
    break;
  default:
    WEE76(); // WEE76
    break;

  }
}

// ================================================
// 0xf1f7: WORD 'WF1F9' codep=0x224c wordp=0xf1f9 params=0 returns=0
// ================================================

void WF1F9() // WF1F9
{
  HEADER(); // HEADER
  PRINT("ATMOSPHERIC DENSITY: ", 21); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(WEBE7); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _ro__dot_ATMO_rc_(); // (.ATMO) case
}


// ================================================
// 0xf221: WORD 'WF223' codep=0x224c wordp=0xf223 params=0 returns=0
// ================================================

void WF223() // WF223
{
  PRINT("CALM", 4); // (.")
}


// ================================================
// 0xf22c: WORD 'WF22E' codep=0x224c wordp=0xf22e params=0 returns=0
// ================================================

void WF22E() // WF22E
{
  PRINT("MODERATE", 8); // (.")
}


// ================================================
// 0xf23b: WORD 'WF23D' codep=0x224c wordp=0xf23d params=0 returns=0
// ================================================

void WF23D() // WF23D
{
  PRINT("VIOLENT", 7); // (.")
}


// ================================================
// 0xf249: WORD 'WF24B' codep=0x224c wordp=0xf24b params=0 returns=0
// ================================================

void WF24B() // WF24B
{
  PRINT("VERY ", 5); // (.")
  WF23D(); // WF23D
}


// ================================================
// 0xf257: WORD '(.WEATH)' codep=0x4a4f wordp=0xf264
// ================================================

void _ro__dot_WEATH_rc_() // (.WEATH)
{
  switch(Pop()) // (.WEATH)
  {
  case 1:
    WF223(); // WF223
    break;
  case 2:
    WF22E(); // WF22E
    break;
  case 3:
    WF23D(); // WF23D
    break;
  case 4:
    WF24B(); // WF24B
    break;
  default:
    WEE76(); // WEE76
    break;

  }
}

// ================================================
// 0xf278: WORD '.WEATH' codep=0x224c wordp=0xf27a params=0 returns=0
// ================================================

void DrawWEATH() // .WEATH
{
  HEADER(); // HEADER
  PRINT("GLOBAL WEATHER: ", 16); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  LoadData(ATMO_dot_ACTIVITY); // from 'PLANET'
  Push(Read16(Pop())); //  @
  _ro__dot_WEATH_rc_(); // (.WEATH) case
}


// ================================================
// 0xf29d: WORD 'WF29F' codep=0x224c wordp=0xf29f params=0 returns=0
// ================================================

void WF29F() // WF29F
{
  HEADER(); // HEADER
  PRINT(" SPECTRAL CLASS: ", 17); // (.")
  CTINIT(); // CTINIT
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xf2bd: WORD 'WF2BF' codep=0x1d29 wordp=0xf2bf
// ================================================
// 0xf2bf: db 0x4d 0x4b 0x47 0x46 0x41 0x42 0x4f 'MKGFABO'

// ================================================
// 0xf2c6: WORD 'WF2C8' codep=0x224c wordp=0xf2c8 params=1 returns=1
// ================================================

void WF2C8() // WF2C8
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(2);

  i = 0;
  imax = 7;
  do // (DO)
  {
    Push(Pop() + 1); //  1+
    Push((Read16(pp_WF2BF + i)&0xFF)==a?1:0); // WF2BF I + C@ J =
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
// 0xf2f0: WORD 'WF2F2' codep=0x224c wordp=0xf2f2 params=0 returns=0
// ================================================

void WF2F2() // WF2F2
{
  HEADER(); // HEADER
  PRINT(" ECOSPHERE: ", 12); // (.")
  GetINST_dash_SPECIES(); // @INST-SPECIES
  WF2C8(); // WF2C8
  Push(Read16(regsp)); // DUP
  CTINIT(); // CTINIT
  Push(Pop() - 2); //  2-
  Draw(); // .
  PRINT("- ", 2); // (.")
  Push(8);
  MIN(); // MIN
  Draw(); // .
}


// ================================================
// 0xf31c: WORD 'WF31E' codep=0x224c wordp=0xf31e params=0 returns=0
// ================================================

void WF31E() // WF31E
{
  unsigned short int a;
  HEADER(); // HEADER
  PRINT(" STATE: ", 8); // (.")
  Is_dot_CERTAIN(); // ?.CERTAIN
  if (Pop() == 0) return;
  Push(Read16(0x63ef+WEBFF.offset) - Read16(pp_STARDATE)); // WEBFF<IFIELD> @ STARDATE @ -
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(1);
  Push(0x018f);
  WITHIN(); // WITHIN
  Push(!Pop() | Read16(pp_IsWIN)); //  NOT ?WIN @ OR
  if (Pop() != 0)
  {
    PRINT("STABLE ", 7); // (.")
    WEC04(); // WEC04
    if (Pop() != 0)
    {
      PRINT("(POST-FLARE)", 12); // (.")
    }
  } else
  {
    Push(a); // I
    Push(0x003c);
    _gt_(); // >
    if (Pop() != 0)
    {
      GetColor(YELLOW);
      StoreCOLOR(); // !COLOR
      PRINT("SLIGHTLY UNSTABLE", 17); // (.")
    } else
    {
      GetColor(PINK);
      StoreCOLOR(); // !COLOR
      CTCR(); // CTCR
      PRINT("  UNSTABLE - ESTIMATED TIME TO FLARE:", 37); // (.")
      CTCR(); // CTCR
      Push(2);
      SPACES(); // SPACES
      Push(a); // I
      Draw(); // .
      PRINT("ARTH DAYS.", 10); // (.")
    }
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf3e9: WORD 'WF3EB' codep=0x224c wordp=0xf3eb
// ================================================

void WF3EB() // WF3EB
{
  DrawSIZE(); // .SIZE
}


// ================================================
// 0xf3ef: WORD 'WF3F1' codep=0x224c wordp=0xf3f1 params=0 returns=0
// ================================================

void WF3F1() // WF3F1
{
  DrawCONSTIT(); // .CONSTIT
}


// ================================================
// 0xf3f5: WORD 'WF3F7' codep=0x224c wordp=0xf3f7
// ================================================

void WF3F7() // WF3F7
{
  DrawTYPE(); // .TYPE
  DrawSIZE(); // .SIZE
  DrawSHIELDS(); // .SHIELDS
  DrawWEAP(); // .WEAP
}


// ================================================
// 0xf401: WORD '(.V/P-OBJ)' codep=0x4a4f wordp=0xf410
// ================================================

void _ro__dot_V_slash_P_dash_OBJ_rc_() // (.V/P-OBJ)
{
  switch(Pop()) // (.V/P-OBJ)
  {
  case 22:
    WF3EB(); // WF3EB
    break;
  case 24:
    WF3F1(); // WF3F1
    break;
  default:
    WF3F7(); // WF3F7
    break;

  }
}

// ================================================
// 0xf41c: WORD 'WF41E' codep=0x224c wordp=0xf41e
// ================================================

void WF41E() // WF41E
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  _ro__dot_V_slash_P_dash_OBJ_rc_(); // (.V/P-OBJ) case
}


// ================================================
// 0xf424: WORD 'WF426' codep=0x224c wordp=0xf426 params=0 returns=0
// ================================================

void WF426() // WF426
{
  DrawORBIT(); // .ORBIT
  DrawSURF(); // .SURF
  DrawGRAV(); // .GRAV
  WF1F9(); // WF1F9
  WF068(); // WF068
  DrawWEATH(); // .WEATH
}


// ================================================
// 0xf434: WORD 'WF436' codep=0x224c wordp=0xf436 params=0 returns=0
// ================================================

void WF436() // WF436
{
  WF29F(); // WF29F
  WF2F2(); // WF2F2
  WEC26(); // WEC26
  Push(Read16(pp_IsFANLYZ)); // ?FANLYZ @
  if (Pop() == 0) return;
  WF31E(); // WF31E
}


// ================================================
// 0xf448: WORD '(.ANALYSIS)' codep=0x4a4f wordp=0xf458
// ================================================

void _ro__dot_ANALYSIS_rc_() // (.ANALYSIS)
{
  switch(Pop()) // (.ANALYSIS)
  {
  case 32:
    WF426(); // WF426
    break;
  case 23:
    WF436(); // WF436
    break;
  case 25:
    WF41E(); // WF41E
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf468: WORD '(/ANALYSIS)' codep=0x224c wordp=0xf478 params=1 returns=0
// ================================================
// entry

void _ro__slash_ANALYSIS_rc_() // (/ANALYSIS)
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  DABS(); // DABS
  Push(0x0002); Push(0x0000);
  D_gt_(); // D>
  if (Pop() != 0)
  {
    _gt_C_plus_S(); // >C+S
    DrawOBJECT(); // .OBJECT
    GetINST_dash_CLASS(); // @INST-CLASS
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
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
}

// 0xf50b: db 0x41 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x72 0x6c 0x61 0x79 0x20 0x53 0x75 0x66 0x66 0x69 0x78 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x39 0x2f 0x31 0x30 0x2f 0x38 0x35 0x29 0x31 0x31 0x35 0x35 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'AN-VOC__________________________rlay Suffix-------------9/10/85)1155DOCTOR----------- '

