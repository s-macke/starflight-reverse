// ====== OVERLAY 'ANALYZE-OV' ======
// store offset = 0xec50
// overlay size   = 0x0910

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xec66  codep:0x7420 parp:0xec66 size:0x0003 C-string:'UNK_0xec66'
//      UNK_0xec6b  codep:0x7420 parp:0xec6b size:0x0003 C-string:'UNK_0xec6b'
//      UNK_0xec70  codep:0x7420 parp:0xec70 size:0x0003 C-string:'UNK_0xec70'
//      UNK_0xec75  codep:0x7394 parp:0xec75 size:0x000e C-string:'UNK_0xec75'
//      UNK_0xec85  codep:0x7420 parp:0xec85 size:0x0003 C-string:'UNK_0xec85'
//      UNK_0xec8a  codep:0x7394 parp:0xec8a size:0x000e C-string:'UNK_0xec8a'
//      UNK_0xec9a  codep:0x7394 parp:0xec9a size:0x0006 C-string:'UNK_0xec9a'
//      UNK_0xeca2  codep:0x7394 parp:0xeca2 size:0x0013 C-string:'UNK_0xeca2'
//      UNK_0xecb7  codep:0x7394 parp:0xecb7 size:0x0006 C-string:'UNK_0xecb7'
//      UNK_0xecbf  codep:0x7394 parp:0xecbf size:0x000e C-string:'UNK_0xecbf'
//      UNK_0xeccf  codep:0x7394 parp:0xeccf size:0x0006 C-string:'UNK_0xeccf'
//      UNK_0xecd7  codep:0x7394 parp:0xecd7 size:0x0006 C-string:'UNK_0xecd7'
//      UNK_0xecdf  codep:0x7394 parp:0xecdf size:0x0006 C-string:'UNK_0xecdf'
//      UNK_0xece7  codep:0x7394 parp:0xece7 size:0x0006 C-string:'UNK_0xece7'
//      UNK_0xecef  codep:0x224c parp:0xecef size:0x000b C-string:'UNK_0xecef'
//      UNK_0xecfc  codep:0x224c parp:0xecfc size:0x000b C-string:'UNK_0xecfc'
//      UNK_0xed09  codep:0x224c parp:0xed09 size:0x000b C-string:'UNK_0xed09'
//       (.VESSEL)  codep:0x4b3b parp:0xed22 size:0x0014 C-string:'_ro__dot_VESSEL_rc_'
//      UNK_0xed38  codep:0x224c parp:0xed38 size:0x0006 C-string:'UNK_0xed38'
//      UNK_0xed40  codep:0x224c parp:0xed40 size:0x000b C-string:'UNK_0xed40'
//      UNK_0xed4d  codep:0x224c parp:0xed4d size:0x000b C-string:'UNK_0xed4d'
//      UNK_0xed5a  codep:0x224c parp:0xed5a size:0x001d C-string:'UNK_0xed5a'
//       (.OBJECT)  codep:0x4b3b parp:0xed85 size:0x0018 C-string:'_ro__dot_OBJECT_rc_'
//      UNK_0xed9f  codep:0x224c parp:0xed9f size:0x004d C-string:'UNK_0xed9f'
//      UNK_0xedee  codep:0x224c parp:0xedee size:0x0014 C-string:'UNK_0xedee'
//      UNK_0xee04  codep:0x224c parp:0xee04 size:0x0055 C-string:'UNK_0xee04'
//      UNK_0xee5b  codep:0x224c parp:0xee5b size:0x003e C-string:'UNK_0xee5b'
//      UNK_0xee9b  codep:0x224c parp:0xee9b size:0x000a C-string:'UNK_0xee9b'
//      UNK_0xeea7  codep:0x224c parp:0xeea7 size:0x000e C-string:'UNK_0xeea7'
//      UNK_0xeeb7  codep:0x224c parp:0xeeb7 size:0x000a C-string:'UNK_0xeeb7'
//      UNK_0xeec3  codep:0x224c parp:0xeec3 size:0x000c C-string:'UNK_0xeec3'
//         (.TYPE)  codep:0x4b3b parp:0xeedb size:0x0010 C-string:'_ro__dot_TYPE_rc_'
//      UNK_0xeeed  codep:0x224c parp:0xeeed size:0x0019 C-string:'UNK_0xeeed'
//      UNK_0xef08  codep:0x224c parp:0xef08 size:0x0009 C-string:'UNK_0xef08'
//      UNK_0xef13  codep:0x224c parp:0xef13 size:0x003e C-string:'UNK_0xef13'
//      UNK_0xef53  codep:0x224c parp:0xef53 size:0x00a2 C-string:'UNK_0xef53'
//      UNK_0xeff7  codep:0x224c parp:0xeff7 size:0x0033 C-string:'UNK_0xeff7'
//      UNK_0xf02c  codep:0x224c parp:0xf02c size:0x0050 C-string:'UNK_0xf02c'
//      UNK_0xf07e  codep:0x224c parp:0xf07e size:0x0027 C-string:'UNK_0xf07e'
//      UNK_0xf0a7  codep:0x224c parp:0xf0a7 size:0x000c C-string:'UNK_0xf0a7'
//      UNK_0xf0b5  codep:0x224c parp:0xf0b5 size:0x0025 C-string:'UNK_0xf0b5'
//      UNK_0xf0dc  codep:0x224c parp:0xf0dc size:0x000b C-string:'UNK_0xf0dc'
//      UNK_0xf0e9  codep:0x224c parp:0xf0e9 size:0x000b C-string:'UNK_0xf0e9'
//      UNK_0xf0f6  codep:0x224c parp:0xf0f6 size:0x000e C-string:'UNK_0xf0f6'
//      UNK_0xf106  codep:0x224c parp:0xf106 size:0x000d C-string:'UNK_0xf106'
//      UNK_0xf115  codep:0x224c parp:0xf115 size:0x000c C-string:'UNK_0xf115'
//      UNK_0xf123  codep:0x224c parp:0xf123 size:0x000c C-string:'UNK_0xf123'
//          .TDESC  codep:0x4b3b parp:0xf13a size:0x001c C-string:'_dot_TDESC'
//      UNK_0xf158  codep:0x224c parp:0xf158 size:0x003d C-string:'UNK_0xf158'
//      UNK_0xf197  codep:0x224c parp:0xf197 size:0x0008 C-string:'UNK_0xf197'
//      UNK_0xf1a1  codep:0x224c parp:0xf1a1 size:0x000b C-string:'UNK_0xf1a1'
//      UNK_0xf1ae  codep:0x224c parp:0xf1ae size:0x000b C-string:'UNK_0xf1ae'
//      UNK_0xf1bb  codep:0x224c parp:0xf1bb size:0x0009 C-string:'UNK_0xf1bb'
//      UNK_0xf1c6  codep:0x224c parp:0xf1c6 size:0x000b C-string:'UNK_0xf1c6'
//         (.SURF)  codep:0x4b3b parp:0xf1dd size:0x0018 C-string:'_ro__dot_SURF_rc_'
//      UNK_0xf1f7  codep:0x224c parp:0xf1f7 size:0x0028 C-string:'UNK_0xf1f7'
//      UNK_0xf221  codep:0x224c parp:0xf221 size:0x0060 C-string:'UNK_0xf221'
//      UNK_0xf283  codep:0x224c parp:0xf283 size:0x0009 C-string:'UNK_0xf283'
//      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x000c C-string:'UNK_0xf28e'
//      UNK_0xf29c  codep:0x224c parp:0xf29c size:0x000d C-string:'UNK_0xf29c'
//      UNK_0xf2ab  codep:0x224c parp:0xf2ab size:0x000a C-string:'UNK_0xf2ab'
//      UNK_0xf2b7  codep:0x224c parp:0xf2b7 size:0x000c C-string:'UNK_0xf2b7'
//         (.ATMO)  codep:0x4b3b parp:0xf2cf size:0x0018 C-string:'_ro__dot_ATMO_rc_'
//      UNK_0xf2e9  codep:0x224c parp:0xf2e9 size:0x0028 C-string:'UNK_0xf2e9'
//      UNK_0xf313  codep:0x224c parp:0xf313 size:0x0009 C-string:'UNK_0xf313'
//      UNK_0xf31e  codep:0x224c parp:0xf31e size:0x000d C-string:'UNK_0xf31e'
//      UNK_0xf32d  codep:0x224c parp:0xf32d size:0x000c C-string:'UNK_0xf32d'
//      UNK_0xf33b  codep:0x224c parp:0xf33b size:0x000c C-string:'UNK_0xf33b'
//        (.WEATH)  codep:0x4b3b parp:0xf354 size:0x0014 C-string:'_ro__dot_WEATH_rc_'
//      UNK_0xf36a  codep:0x224c parp:0xf36a size:0x0023 C-string:'UNK_0xf36a'
//      UNK_0xf38f  codep:0x224c parp:0xf38f size:0x001e C-string:'UNK_0xf38f'
//      UNK_0xf3af  codep:0x1d29 parp:0xf3af size:0x0007 C-string:'UNK_0xf3af'
//      UNK_0xf3b8  codep:0x224c parp:0xf3b8 size:0x0028 C-string:'UNK_0xf3b8'
//      UNK_0xf3e2  codep:0x224c parp:0xf3e2 size:0x0030 C-string:'UNK_0xf3e2'
//      UNK_0xf414  codep:0x224c parp:0xf414 size:0x0020 C-string:'UNK_0xf414'
//      UNK_0xf436  codep:0x224c parp:0xf436 size:0x000a C-string:'UNK_0xf436'
//      UNK_0xf442  codep:0x224c parp:0xf442 size:0x0004 C-string:'UNK_0xf442'
//      UNK_0xf448  codep:0x224c parp:0xf448 size:0x0004 C-string:'UNK_0xf448'
//      UNK_0xf44e  codep:0x224c parp:0xf44e size:0x000a C-string:'UNK_0xf44e'
//      (.V/P-OBJ)  codep:0x4b3b parp:0xf467 size:0x000c C-string:'_ro__dot_V_slash_P_dash_OBJ_rc_'
//      UNK_0xf475  codep:0x224c parp:0xf475 size:0x0006 C-string:'UNK_0xf475'
//      UNK_0xf47d  codep:0x224c parp:0xf47d size:0x000e C-string:'UNK_0xf47d'
//      UNK_0xf48d  codep:0x224c parp:0xf48d size:0x0006 C-string:'UNK_0xf48d'
//     (.ANALYSIS)  codep:0x4b3b parp:0xf4a3 size:0x0014 C-string:'_ro__dot_ANALYSIS_rc_'
//     (/ANALYSIS)  codep:0x224c parp:0xf4c7 size:0x0000 C-string:'_ro__slash_ANALYSIS_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__ask_A_dash_SHIE; // ?A-SHIE
extern const unsigned short int cc__ask_A_dash_WEAP; // ?A-WEAP
extern const unsigned short int pp__ask_AF; // ?AF
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp__ask_G_dash_AWAR; // ?G-AWAR
extern const unsigned short int pp__ask_NEB; // ?NEB
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp_NLR; // NLR
extern const unsigned short int pp_SENSE_dash_A; // SENSE-A
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
void DABS(); // DABS
void MAX(); // MAX
void MIN(); // MIN
void _dot_(); // .
void _dot_R(); // .R
void SPACE(); // SPACE
void SPACES(); // SPACES
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void PICK(); // PICK
void D_gt_(); // D>
void WITHIN(); // WITHIN
void RRND(); // RRND
void SQRT(); // SQRT
void _ex__2(); // !_2
void _1_dot_5_ex__2(); // 1.5!_2
void D_ex_(); // D!
void _at_INST_dash_C(); // @INST-C
void _at_INST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CDROP(); // CDROP
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void _ex_COLOR(); // !COLOR
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
const unsigned short int pp_UNK_0xf3af = 0xf3af; // UNK_0xf3af size: 7
// {0x4d, 0x4b, 0x47, 0x46, 0x41, 0x42, 0x4f}




// 0xec62: db 0x91 0x00 '  '

// ================================================
// 0xec64: WORD 'UNK_0xec66' codep=0x7420 parp=0xec66
// ================================================
// 0xec66: db 0x14 0x27 0x02 ' ' '

// ================================================
// 0xec69: WORD 'UNK_0xec6b' codep=0x7420 parp=0xec6b
// ================================================
// 0xec6b: db 0x11 0x14 0x03 '   '

// ================================================
// 0xec6e: WORD 'UNK_0xec70' codep=0x7420 parp=0xec70
// ================================================
// 0xec70: db 0x10 0x1a 0x02 '   '

// ================================================
// 0xec73: WORD 'UNK_0xec75' codep=0x7394 parp=0xec75
// ================================================
// 0xec75: db 0x1a 0x00 0x10 0x17 0xa9 0x6b 0x94 0x73 0x19 0x00 0x01 0x24 0x5d 0x6b '     k s   $]k'

// ================================================
// 0xec83: WORD 'UNK_0xec85' codep=0x7420 parp=0xec85
// ================================================
// 0xec85: db 0x19 0x12 0x07 '   '

// ================================================
// 0xec88: WORD 'UNK_0xec8a' codep=0x7394 parp=0xec8a
// ================================================
// 0xec8a: db 0x19 0x04 0x01 0x24 0x5d 0x6b 0x94 0x73 0x19 0x06 0x01 0x24 0x5d 0x6b '   $]k s   $]k'

// ================================================
// 0xec98: WORD 'UNK_0xec9a' codep=0x7394 parp=0xec9a
// ================================================
// 0xec9a: db 0x19 0x07 0x02 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xeca0: WORD 'UNK_0xeca2' codep=0x7394 parp=0xeca2
// ================================================
// 0xeca2: db 0x19 0x0e 0x02 0x24 0x5d 0x6b 0x94 0x73 0x19 0x12 0x01 0x24 0x5d 0x6b 0x20 0x74 0x17 0x11 0x01 '   $]k s   $]k t   '

// ================================================
// 0xecb5: WORD 'UNK_0xecb7' codep=0x7394 parp=0xecb7
// ================================================
// 0xecb7: db 0x20 0x01 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xecbd: WORD 'UNK_0xecbf' codep=0x7394 parp=0xecbf
// ================================================
// 0xecbf: db 0x20 0x02 0x02 0x17 0x49 0x6c 0x94 0x73 0x20 0x04 0x01 0x17 0x49 0x6c '    Il s    Il'

// ================================================
// 0xeccd: WORD 'UNK_0xeccf' codep=0x7394 parp=0xeccf
// ================================================
// 0xeccf: db 0x20 0x11 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xecd5: WORD 'UNK_0xecd7' codep=0x7394 parp=0xecd7
// ================================================
// 0xecd7: db 0x20 0x13 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xecdd: WORD 'UNK_0xecdf' codep=0x7394 parp=0xecdf
// ================================================
// 0xecdf: db 0x20 0x0f 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xece5: WORD 'UNK_0xece7' codep=0x7394 parp=0xece7
// ================================================
// 0xece7: db 0x20 0x10 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xeced: WORD 'UNK_0xecef' codep=0x224c parp=0xecef
// ================================================

void UNK_0xecef() // UNK_0xecef
{
  PRINT("UKNOWN", 6); // (.")
}


// ================================================
// 0xecfa: WORD 'UNK_0xecfc' codep=0x224c parp=0xecfc
// ================================================

void UNK_0xecfc() // UNK_0xecfc
{
  PRINT("VESSEL", 6); // (.")
}


// ================================================
// 0xed07: WORD 'UNK_0xed09' codep=0x224c parp=0xed09
// ================================================

void UNK_0xed09() // UNK_0xed09
{
  PRINT("DEBRIS", 6); // (.")
}


// ================================================
// 0xed14: WORD '(.VESSEL)' codep=0x4b3b parp=0xed22
// ================================================

void _ro__dot_VESSEL_rc_() // (.VESSEL)
{
  switch(Pop()) // (.VESSEL)
  {
  case 29:
    UNK_0xecef(); // UNK_0xecef
    break;
  case 32:
    UNK_0xecef(); // UNK_0xecef
    break;
  case 0:
    UNK_0xed09(); // UNK_0xed09
    break;
  case 20:
    UNK_0xecef(); // UNK_0xecef
    break;
  default:
    UNK_0xecfc(); // UNK_0xecfc
    break;

  }
}

// ================================================
// 0xed36: WORD 'UNK_0xed38' codep=0x224c parp=0xed38
// ================================================

void UNK_0xed38() // UNK_0xed38
{
  _at_INST_dash_S(); // @INST-S
  _ro__dot_VESSEL_rc_(); // (.VESSEL) case
}


// ================================================
// 0xed3e: WORD 'UNK_0xed40' codep=0x224c parp=0xed40
// ================================================

void UNK_0xed40() // UNK_0xed40
{
  PRINT("DEBRIS", 6); // (.")
}


// ================================================
// 0xed4b: WORD 'UNK_0xed4d' codep=0x224c parp=0xed4d
// ================================================

void UNK_0xed4d() // UNK_0xed4d
{
  PRINT("PLANET", 6); // (.")
}


// ================================================
// 0xed58: WORD 'UNK_0xed5a' codep=0x224c parp=0xed5a
// ================================================

void UNK_0xed5a() // UNK_0xed5a
{
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("STELLAR PARAMETERS", 18); // (.")
  CTINIT(); // CTINIT
}


// ================================================
// 0xed77: WORD '(.OBJECT)' codep=0x4b3b parp=0xed85
// ================================================

void _ro__dot_OBJECT_rc_() // (.OBJECT)
{
  switch(Pop()) // (.OBJECT)
  {
  case 25:
    UNK_0xed38(); // UNK_0xed38
    break;
  case 0:
    UNK_0xed40(); // UNK_0xed40
    break;
  case 32:
    UNK_0xed4d(); // UNK_0xed4d
    break;
  case 23:
    UNK_0xed5a(); // UNK_0xed5a
    break;
  case 60:
    NOP(); // NOP
    break;
  default:
    UNK_0xecef(); // UNK_0xecef
    break;

  }
}

// ================================================
// 0xed9d: WORD 'UNK_0xed9f' codep=0x224c parp=0xed9f
// ================================================

void UNK_0xed9f() // UNK_0xed9f
{
  _at_INST_dash_C(); // @INST-C
  Push(0x003c);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  if (Pop() != 0)
  {
  PRINT("ANALYSIS OF LAST SENSOR READING:", 32); // (.")
  CTCR(); // CTCR
  PRINT(" OBJECT: ", 9); // (.")
  }
  CTINIT(); // CTINIT
  _at_INST_dash_C(); // @INST-C
  _ro__dot_OBJECT_rc_(); // (.OBJECT) case
}


// ================================================
// 0xedec: WORD 'UNK_0xedee' codep=0x224c parp=0xedee
// ================================================

void UNK_0xedee() // UNK_0xedee
{
  Push(0x000a);
  Push(Pop() * Pop()); // *
  OVER(); // OVER
  _slash_MOD(); // /MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  _dot_R(); // .R
  _0_gt_(); // 0>
}


// ================================================
// 0xee02: WORD 'UNK_0xee04' codep=0x224c parp=0xee04
// ================================================

void UNK_0xee04() // UNK_0xee04
{
  CTCR(); // CTCR
  SPACE(); // SPACE
  LoadData("UNK_0xec9a"); // from 'VESSEL      '
  Push(Read16(Pop())); // @
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6608); // IFIELD(UNK_0xec66)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  SWAP(); // SWAP
  Push(0);
  Push(3);
  PICK(); // PICK
  U_slash_MOD(); // U/MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  _dot_R(); // .R
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  PRINT(".", 1); // (.")

  label2:
  UNK_0xedee(); // UNK_0xedee
  if (Pop() == 0) goto label2;

  label1:
  Pop(); Pop();// 2DROP
  PRINT(" TIMES THE SIZE OF OUR SHIP.", 28); // (.")
}


// ================================================
// 0xee59: WORD 'UNK_0xee5b' codep=0x224c parp=0xee5b
// ================================================

void UNK_0xee5b() // UNK_0xee5b
{
  CTINIT(); // CTINIT
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65f5); // IFIELD(UNK_0xec6b)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65fb); // IFIELD(UNK_0xec70)
  Push(Read8(Pop())&0xFF); // C@
  Push(0);
  Push(0x00c8);
  RRND(); // RRND
  _gt_(); // >
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_PLHI); // PLHI
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  PRINT("NOT CERTAIN", 11); // (.")
}


// ================================================
// 0xee99: WORD 'UNK_0xee9b' codep=0x224c parp=0xee9b
// ================================================

void UNK_0xee9b() // UNK_0xee9b
{
  CTCR(); // CTCR
  SPACE(); // SPACE
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xeea5: WORD 'UNK_0xeea7' codep=0x224c parp=0xeea7
// ================================================

void UNK_0xeea7() // UNK_0xeea7
{
  PRINT("TRANSPORT", 9); // (.")
}


// ================================================
// 0xeeb5: WORD 'UNK_0xeeb7' codep=0x224c parp=0xeeb7
// ================================================

void UNK_0xeeb7() // UNK_0xeeb7
{
  PRINT("SCOUT", 5); // (.")
}


// ================================================
// 0xeec1: WORD 'UNK_0xeec3' codep=0x224c parp=0xeec3
// ================================================

void UNK_0xeec3() // UNK_0xeec3
{
  PRINT("WARSHIP", 7); // (.")
}


// ================================================
// 0xeecf: WORD '(.TYPE)' codep=0x4b3b parp=0xeedb
// ================================================

void _ro__dot_TYPE_rc_() // (.TYPE)
{
  switch(Pop()) // (.TYPE)
  {
  case 1:
    UNK_0xeea7(); // UNK_0xeea7
    break;
  case 2:
    UNK_0xeeb7(); // UNK_0xeeb7
    break;
  case 3:
    UNK_0xeec3(); // UNK_0xeec3
    break;
  default:
    UNK_0xecef(); // UNK_0xecef
    break;

  }
}

// ================================================
// 0xeeeb: WORD 'UNK_0xeeed' codep=0x224c parp=0xeeed
// ================================================

void UNK_0xeeed() // UNK_0xeeed
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT("TYPE: ", 6); // (.")
  UNK_0xee5b(); // UNK_0xee5b
  if (Pop() == 0) return;
  LoadData("UNK_0xec8a"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  _ro__dot_TYPE_rc_(); // (.TYPE) case
}


// ================================================
// 0xef06: WORD 'UNK_0xef08' codep=0x224c parp=0xef08
// ================================================

void UNK_0xef08() // UNK_0xef08
{
  PRINT("NONE", 4); // (.")
}


// ================================================
// 0xef11: WORD 'UNK_0xef13' codep=0x224c parp=0xef13
// ================================================

void UNK_0xef13() // UNK_0xef13
{
  unsigned short int a;
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  _at_INST_dash_S(); // @INST-S
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
  Push(a); // R>
  Push(0x0020);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xef51: WORD 'UNK_0xef53' codep=0x224c parp=0xef53
// ================================================

void UNK_0xef53() // UNK_0xef53
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT("SHIELDS: ", 9); // (.")
  UNK_0xee5b(); // UNK_0xee5b
  if (Pop() == 0) return;
  LoadData("UNK_0xeca2"); // from 'VESSEL      '
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
  Push(0x001d);
  _eq_SPECIE(); // =SPECIE
  Push(pp__ask_AF); // ?AF
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
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
  _dot_(); // .
  PRINT("EQUIVALENT", 10); // (.")
  }
  Push(Read16(cc__ask_A_dash_SHIE)); // ?A-SHIE
  Push(pp_NLR); // NLR
  Push(Read16(Pop())); // @
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xef13(); // UNK_0xef13
  if (Pop() != 0)
  {
  PRINT(" RAISED", 7); // (.")
  } else
  {
  PRINT(" LOWERED", 8); // (.")
  }
  return;
  }
  UNK_0xef08(); // UNK_0xef08
  PRINT(" APPARENT", 9); // (.")
}


// ================================================
// 0xeff5: WORD 'UNK_0xeff7' codep=0x224c parp=0xeff7
// ================================================

void UNK_0xeff7() // UNK_0xeff7
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT("WEAPON STATUS: ", 15); // (.")
  UNK_0xee5b(); // UNK_0xee5b
  if (Pop() == 0) return;
  Push(Read16(cc__ask_A_dash_WEAP)); // ?A-WEAP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
  PRINT("NOT ", 4); // (.")
  }
  PRINT("ARMED", 5); // (.")
}


// ================================================
// 0xf02a: WORD 'UNK_0xf02c' codep=0x224c parp=0xf02c
// ================================================

void UNK_0xf02c() // UNK_0xf02c
{
  Push(Read16(regsp)); // DUP
  Push(0x65f3); // IFIELD(UNK_0xec85)
  Push(3);
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
  Push(0x65f3); // IFIELD(UNK_0xec85)
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  } else
  {
  Push(6);
  }
  Push(pp_RECORD_n_); // RECORD#
  _ex__2(); // !_2
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  _ex__2(); // !_2
  LoadData("UNK_0xec75"); // from 'ELEMENT     '
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
// 0xf07c: WORD 'UNK_0xf07e' codep=0x224c parp=0xf07e
// ================================================

void UNK_0xf07e() // UNK_0xf07e
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT("CONSTITUENTS: ", 14); // (.")
  CTINIT(); // CTINIT
  Push(0);
  UNK_0xf02c(); // UNK_0xf02c
  Push(1);
  UNK_0xf02c(); // UNK_0xf02c
  Push(2);
  UNK_0xf02c(); // UNK_0xf02c
  Push(3);
  UNK_0xf02c(); // UNK_0xf02c
}


// ================================================
// 0xf0a5: WORD 'UNK_0xf0a7' codep=0x224c parp=0xf0a7
// ================================================

void UNK_0xf0a7() // UNK_0xf0a7
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0b3: WORD 'UNK_0xf0b5' codep=0x224c parp=0xf0b5
// ================================================

void UNK_0xf0b5() // UNK_0xf0b5
{
  Push(0x0014);
  Push(1);
  CTPOS_dot_(); // CTPOS.
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("ORBIT NUMBER: ", 14); // (.")
  CTINIT(); // CTINIT
  UNK_0xf0a7(); // UNK_0xf0a7
  _dot_(); // .
}


// ================================================
// 0xf0da: WORD 'UNK_0xf0dc' codep=0x224c parp=0xf0dc
// ================================================

void UNK_0xf0dc() // UNK_0xf0dc
{
  PRINT("ARCTIC", 6); // (.")
}


// ================================================
// 0xf0e7: WORD 'UNK_0xf0e9' codep=0x224c parp=0xf0e9
// ================================================

void UNK_0xf0e9() // UNK_0xf0e9
{
  PRINT("SUB-", 4); // (.")
  UNK_0xf0dc(); // UNK_0xf0dc
}


// ================================================
// 0xf0f4: WORD 'UNK_0xf0f6' codep=0x224c parp=0xf0f6
// ================================================

void UNK_0xf0f6() // UNK_0xf0f6
{
  PRINT("TEMPERATE", 9); // (.")
}


// ================================================
// 0xf104: WORD 'UNK_0xf106' codep=0x224c parp=0xf106
// ================================================

void UNK_0xf106() // UNK_0xf106
{
  PRINT("TROPICAL", 8); // (.")
}


// ================================================
// 0xf113: WORD 'UNK_0xf115' codep=0x224c parp=0xf115
// ================================================

void UNK_0xf115() // UNK_0xf115
{
  PRINT("SEARING", 7); // (.")
}


// ================================================
// 0xf121: WORD 'UNK_0xf123' codep=0x224c parp=0xf123
// ================================================

void UNK_0xf123() // UNK_0xf123
{
  PRINT("INFERNO", 7); // (.")
}


// ================================================
// 0xf12f: WORD '.TDESC' codep=0x4b3b parp=0xf13a
// ================================================

void _dot_TDESC() // .TDESC
{
  switch(Pop()) // .TDESC
  {
  case 0:
    UNK_0xf0e9(); // UNK_0xf0e9
    break;
  case 1:
    UNK_0xf0dc(); // UNK_0xf0dc
    break;
  case 2:
    UNK_0xf0f6(); // UNK_0xf0f6
    break;
  case 3:
    UNK_0xf106(); // UNK_0xf106
    break;
  case 4:
    UNK_0xf115(); // UNK_0xf115
    break;
  case 5:
    UNK_0xf123(); // UNK_0xf123
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf156: WORD 'UNK_0xf158' codep=0x224c parp=0xf158
// ================================================

void UNK_0xf158() // UNK_0xf158
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT("TEMPERATURE: ", 13); // (.")
  UNK_0xee5b(); // UNK_0xee5b
  if (Pop() == 0) return;
  LoadData("UNK_0xece7"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xecdf"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  _dot_TDESC(); // .TDESC case
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
  Pop(); // DROP
  return;
  }
  PRINT(" TO ", 4); // (.")
  _dot_TDESC(); // .TDESC case
}


// ================================================
// 0xf195: WORD 'UNK_0xf197' codep=0x224c parp=0xf197
// ================================================

void UNK_0xf197() // UNK_0xf197
{
  PRINT("GAS", 3); // (.")
}


// ================================================
// 0xf19f: WORD 'UNK_0xf1a1' codep=0x224c parp=0xf1a1
// ================================================

void UNK_0xf1a1() // UNK_0xf1a1
{
  PRINT("LIQUID", 6); // (.")
}


// ================================================
// 0xf1ac: WORD 'UNK_0xf1ae' codep=0x224c parp=0xf1ae
// ================================================

void UNK_0xf1ae() // UNK_0xf1ae
{
  PRINT("FROZEN", 6); // (.")
}


// ================================================
// 0xf1b9: WORD 'UNK_0xf1bb' codep=0x224c parp=0xf1bb
// ================================================

void UNK_0xf1bb() // UNK_0xf1bb
{
  PRINT("ROCK", 4); // (.")
}


// ================================================
// 0xf1c4: WORD 'UNK_0xf1c6' codep=0x224c parp=0xf1c6
// ================================================

void UNK_0xf1c6() // UNK_0xf1c6
{
  PRINT("MOLTEN", 6); // (.")
}


// ================================================
// 0xf1d1: WORD '(.SURF)' codep=0x4b3b parp=0xf1dd
// ================================================

void _ro__dot_SURF_rc_() // (.SURF)
{
  switch(Pop()) // (.SURF)
  {
  case 1:
    UNK_0xf197(); // UNK_0xf197
    break;
  case 2:
    UNK_0xf1a1(); // UNK_0xf1a1
    break;
  case 3:
    UNK_0xf1ae(); // UNK_0xf1ae
    break;
  case 5:
    UNK_0xf1bb(); // UNK_0xf1bb
    break;
  case 4:
    UNK_0xf1c6(); // UNK_0xf1c6
    break;
  default:
    UNK_0xecef(); // UNK_0xecef
    break;

  }
}

// ================================================
// 0xf1f5: WORD 'UNK_0xf1f7' codep=0x224c parp=0xf1f7
// ================================================

void UNK_0xf1f7() // UNK_0xf1f7
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT("PREDOMINANT SURFACE: ", 21); // (.")
  UNK_0xee5b(); // UNK_0xee5b
  if (Pop() == 0) return;
  LoadData("UNK_0xecb7"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  _ro__dot_SURF_rc_(); // (.SURF) case
}


// ================================================
// 0xf21f: WORD 'UNK_0xf221' codep=0x224c parp=0xf221
// ================================================

void UNK_0xf221() // UNK_0xf221
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT("GRAVITY: ", 9); // (.")
  UNK_0xee5b(); // UNK_0xee5b
  Push(Read16(regsp)); // DUP
  Push(pp__ask_G_dash_AWAR); // ?G-AWAR
  _ex__2(); // !_2
  if (Pop() == 0) return;
  LoadData("UNK_0xecbf"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() != 0)
  {
  Push(0x0320);
  _dash_(); // -
  Push(0);
  SQRT(); // SQRT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0320);
  Push(Pop() + Pop()); // +
  }
  Push(0x0064);
  _slash_MOD(); // /MOD
  Push(0);
  _dot_R(); // .R
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0);
  _dot_R(); // .R
  _dot_(); // .
  PRINT("G", 1); // (.")
}


// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x224c parp=0xf283
// ================================================

void UNK_0xf283() // UNK_0xf283
{
  PRINT("THIN", 4); // (.")
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  PRINT("VERY ", 5); // (.")
  UNK_0xf283(); // UNK_0xf283
}


// ================================================
// 0xf29a: WORD 'UNK_0xf29c' codep=0x224c parp=0xf29c
// ================================================

void UNK_0xf29c() // UNK_0xf29c
{
  PRINT("MODERATE", 8); // (.")
}


// ================================================
// 0xf2a9: WORD 'UNK_0xf2ab' codep=0x224c parp=0xf2ab
// ================================================

void UNK_0xf2ab() // UNK_0xf2ab
{
  PRINT("THICK", 5); // (.")
}


// ================================================
// 0xf2b5: WORD 'UNK_0xf2b7' codep=0x224c parp=0xf2b7
// ================================================

void UNK_0xf2b7() // UNK_0xf2b7
{
  PRINT("VERY ", 5); // (.")
  UNK_0xf2ab(); // UNK_0xf2ab
}


// ================================================
// 0xf2c3: WORD '(.ATMO)' codep=0x4b3b parp=0xf2cf
// ================================================

void _ro__dot_ATMO_rc_() // (.ATMO)
{
  switch(Pop()) // (.ATMO)
  {
  case 1:
    UNK_0xf28e(); // UNK_0xf28e
    break;
  case 2:
    UNK_0xf283(); // UNK_0xf283
    break;
  case 3:
    UNK_0xf29c(); // UNK_0xf29c
    break;
  case 4:
    UNK_0xf2ab(); // UNK_0xf2ab
    break;
  case 5:
    UNK_0xf2b7(); // UNK_0xf2b7
    break;
  default:
    UNK_0xef08(); // UNK_0xef08
    break;

  }
}

// ================================================
// 0xf2e7: WORD 'UNK_0xf2e9' codep=0x224c parp=0xf2e9
// ================================================

void UNK_0xf2e9() // UNK_0xf2e9
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT("ATMOSPHERIC DENSITY: ", 21); // (.")
  UNK_0xee5b(); // UNK_0xee5b
  if (Pop() == 0) return;
  LoadData("UNK_0xecd7"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  _ro__dot_ATMO_rc_(); // (.ATMO) case
}


// ================================================
// 0xf311: WORD 'UNK_0xf313' codep=0x224c parp=0xf313
// ================================================

void UNK_0xf313() // UNK_0xf313
{
  PRINT("CALM", 4); // (.")
}


// ================================================
// 0xf31c: WORD 'UNK_0xf31e' codep=0x224c parp=0xf31e
// ================================================

void UNK_0xf31e() // UNK_0xf31e
{
  PRINT("MODERATE", 8); // (.")
}


// ================================================
// 0xf32b: WORD 'UNK_0xf32d' codep=0x224c parp=0xf32d
// ================================================

void UNK_0xf32d() // UNK_0xf32d
{
  PRINT("VIOLENT", 7); // (.")
}


// ================================================
// 0xf339: WORD 'UNK_0xf33b' codep=0x224c parp=0xf33b
// ================================================

void UNK_0xf33b() // UNK_0xf33b
{
  PRINT("VERY ", 5); // (.")
  UNK_0xf32d(); // UNK_0xf32d
}


// ================================================
// 0xf347: WORD '(.WEATH)' codep=0x4b3b parp=0xf354
// ================================================

void _ro__dot_WEATH_rc_() // (.WEATH)
{
  switch(Pop()) // (.WEATH)
  {
  case 1:
    UNK_0xf313(); // UNK_0xf313
    break;
  case 2:
    UNK_0xf31e(); // UNK_0xf31e
    break;
  case 3:
    UNK_0xf32d(); // UNK_0xf32d
    break;
  case 4:
    UNK_0xf33b(); // UNK_0xf33b
    break;
  default:
    UNK_0xef08(); // UNK_0xef08
    break;

  }
}

// ================================================
// 0xf368: WORD 'UNK_0xf36a' codep=0x224c parp=0xf36a
// ================================================

void UNK_0xf36a() // UNK_0xf36a
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT("GLOBAL WEATHER: ", 16); // (.")
  UNK_0xee5b(); // UNK_0xee5b
  if (Pop() == 0) return;
  LoadData("UNK_0xeccf"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  _ro__dot_WEATH_rc_(); // (.WEATH) case
}


// ================================================
// 0xf38d: WORD 'UNK_0xf38f' codep=0x224c parp=0xf38f
// ================================================

void UNK_0xf38f() // UNK_0xf38f
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT(" SPECTRAL CLASS: ", 17); // (.")
  CTINIT(); // CTINIT
  _at_INST_dash_S(); // @INST-S
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xf3ad: WORD 'UNK_0xf3af' codep=0x1d29 parp=0xf3af
// ================================================
// 0xf3af: db 0x4d 0x4b 0x47 0x46 0x41 0x42 0x4f 'MKGFABO'

// ================================================
// 0xf3b6: WORD 'UNK_0xf3b8' codep=0x224c parp=0xf3b8
// ================================================

void UNK_0xf3b8() // UNK_0xf3b8
{
  unsigned short int a;
  signed short int i, imax;
  a = Pop(); // >R
  Push(2);
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xf3af); // UNK_0xf3af
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // J
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
  imax = i; // LEAVE
  }
  i++;
  } while(i<imax); // (LOOP) 0xffea

  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf3e0: WORD 'UNK_0xf3e2' codep=0x224c parp=0xf3e2
// ================================================

void UNK_0xf3e2() // UNK_0xf3e2
{
  UNK_0xee9b(); // UNK_0xee9b
  PRINT(" ECOSPHERE: ", 12); // (.")
  _at_INST_dash_S(); // @INST-S
  UNK_0xf3b8(); // UNK_0xf3b8
  Push(Read16(regsp)); // DUP
  CTINIT(); // CTINIT
  Push(3);
  _dash_(); // -
  Push(1);
  MAX(); // MAX
  _dot_(); // .
  PRINT("- ", 2); // (.")
  Push(8);
  MIN(); // MIN
  _dot_(); // .
}


// ================================================
// 0xf412: WORD 'UNK_0xf414' codep=0x224c parp=0xf414
// ================================================

void UNK_0xf414() // UNK_0xf414
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
  Push(0xbe45); // probable '.HUFF'
  MODULE(); // MODULE
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf434: WORD 'UNK_0xf436' codep=0x224c parp=0xf436
// ================================================

void UNK_0xf436() // UNK_0xf436
{
  CTINIT(); // CTINIT
  Push(0x00d6);
  UNK_0xf414(); // UNK_0xf414
}


// ================================================
// 0xf440: WORD 'UNK_0xf442' codep=0x224c parp=0xf442
// ================================================

void UNK_0xf442() // UNK_0xf442
{
  UNK_0xee04(); // UNK_0xee04
}


// ================================================
// 0xf446: WORD 'UNK_0xf448' codep=0x224c parp=0xf448
// ================================================

void UNK_0xf448() // UNK_0xf448
{
  UNK_0xf07e(); // UNK_0xf07e
}


// ================================================
// 0xf44c: WORD 'UNK_0xf44e' codep=0x224c parp=0xf44e
// ================================================

void UNK_0xf44e() // UNK_0xf44e
{
  UNK_0xeeed(); // UNK_0xeeed
  UNK_0xee04(); // UNK_0xee04
  UNK_0xef53(); // UNK_0xef53
  UNK_0xeff7(); // UNK_0xeff7
}


// ================================================
// 0xf458: WORD '(.V/P-OBJ)' codep=0x4b3b parp=0xf467
// ================================================

void _ro__dot_V_slash_P_dash_OBJ_rc_() // (.V/P-OBJ)
{
  switch(Pop()) // (.V/P-OBJ)
  {
  case 22:
    UNK_0xf442(); // UNK_0xf442
    break;
  case 0:
    UNK_0xf448(); // UNK_0xf448
    break;
  default:
    UNK_0xf44e(); // UNK_0xf44e
    break;

  }
}

// ================================================
// 0xf473: WORD 'UNK_0xf475' codep=0x224c parp=0xf475
// ================================================

void UNK_0xf475() // UNK_0xf475
{
  _at_INST_dash_S(); // @INST-S
  _ro__dot_V_slash_P_dash_OBJ_rc_(); // (.V/P-OBJ) case
}


// ================================================
// 0xf47b: WORD 'UNK_0xf47d' codep=0x224c parp=0xf47d
// ================================================

void UNK_0xf47d() // UNK_0xf47d
{
  UNK_0xf0b5(); // UNK_0xf0b5
  UNK_0xf1f7(); // UNK_0xf1f7
  UNK_0xf221(); // UNK_0xf221
  UNK_0xf2e9(); // UNK_0xf2e9
  UNK_0xf158(); // UNK_0xf158
  UNK_0xf36a(); // UNK_0xf36a
}


// ================================================
// 0xf48b: WORD 'UNK_0xf48d' codep=0x224c parp=0xf48d
// ================================================

void UNK_0xf48d() // UNK_0xf48d
{
  UNK_0xf38f(); // UNK_0xf38f
  UNK_0xf3e2(); // UNK_0xf3e2
}


// ================================================
// 0xf493: WORD '(.ANALYSIS)' codep=0x4b3b parp=0xf4a3
// ================================================

void _ro__dot_ANALYSIS_rc_() // (.ANALYSIS)
{
  switch(Pop()) // (.ANALYSIS)
  {
  case 32:
    UNK_0xf47d(); // UNK_0xf47d
    break;
  case 23:
    UNK_0xf48d(); // UNK_0xf48d
    break;
  case 25:
    UNK_0xf475(); // UNK_0xf475
    break;
  case 60:
    UNK_0xf436(); // UNK_0xf436
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf4b7: WORD '(/ANALYSIS)' codep=0x224c parp=0xf4c7
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
  UNK_0xed9f(); // UNK_0xed9f
  _at_INST_dash_C(); // @INST-C
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
  D_ex_(); // D!
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
}

// 0xf55a: db 0x41 0x4e 0x2d 0x56 0x4f 0x43 0x00 'AN-VOC '
  