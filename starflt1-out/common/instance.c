
#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"

#include"../overlays/DPART-OV.h"
#include"../overlays/CHKFLIGHT-OV.h"
#include"../overlays/FRACT-OV.h"
#include"../overlays/ICONP-OV.h"
#include"../overlays/SITE-OV.h"
#include"../overlays/HYPERMSG-OV.h"
#include"../overlays/BLT-OV.h"
#include"../overlays/MISC-OV.h"
#include"../overlays/BANK-OV.h"
#include"../overlays/ASSCREW-OV.h"
#include"../overlays/PERSONNEL-OV.h"
#include"../overlays/SHIPGRPH-OV.h"
#include"../overlays/CONFIG-OV.h"
#include"../overlays/TDEPOT-OV.h"
#include"../overlays/PORTMENU-OV.h"
#include"../overlays/VITA-OV.h"
#include"../overlays/HP-OV.h"
#include"../overlays/LP-OV.h"
#include"../overlays/SENT-OV.h"
#include"../overlays/TV-OV.h"
#include"../overlays/COMM-OV.h"
#include"../overlays/COMMSPEC-OV.h"
#include"../overlays/SEED-OV.h"
#include"../overlays/LISTICONS.h"
#include"../overlays/MOVE-OV.h"
#include"../overlays/ENGINEER.h"
#include"../overlays/DOCTOR.h"
#include"../overlays/ORBIT-OV.h"
#include"../overlays/CAPTAIN.h"
#include"../overlays/SCIENCE.h"
#include"../overlays/NAVIGATR.h"
#include"../overlays/SHIPBUTTONS.h"
#include"../overlays/MAP-OV.h"
#include"../overlays/HYPER-OV.h"
#include"../overlays/ANALYZE-OV.h"
#include"../overlays/LAUNCH-OV.h"
#include"../overlays/FLUX-EFFECT.h"
#include"../overlays/OP-OV.h"
#include"../overlays/ITEMS-OV.h"
#include"../overlays/BEHAV-OV.h"
#include"../overlays/HEAL-OV.h"
#include"../overlays/REPAIR-OV.h"
#include"../overlays/GAME-OV.h"
#include"../overlays/PLSET-OV.h"
#include"../overlays/MAPS-OV.h"
#include"../overlays/STORM-OV.h"
#include"../overlays/IT-OV.h"
#include"../overlays/COMBAT-OV.h"
#include"../overlays/DAMAGE-OV.h"
#include"../overlays/LAND-OV.h"
#include"../overlays/MUSIC.h"
#include"../overlays/STP-OV.h"

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_IHEADLEN; // IHEADLEN
extern const unsigned short int cc_UNK_0x4fff; // UNK_0x4fff
extern const unsigned short int cc_UNK_0x5003; // UNK_0x5003
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_CXSP; // CXSP
extern const unsigned short int pp_UNK_0x54b4; // UNK_0x54b4
extern const unsigned short int pp__i_THROW_dash_; // 'THROW-
extern const unsigned short int pp__i_MAP; // 'MAP
extern const unsigned short int pp__i_TRAVER; // 'TRAVER
extern const unsigned short int pp__i__ask_EXIT; // '?EXIT
extern const unsigned short int pp_UNK_0x5532; // UNK_0x5532
extern const unsigned short int pp_UNK_0x5d6b; // UNK_0x5d6b
extern const unsigned short int pp_UNK_0x5e58; // UNK_0x5e58
extern const unsigned short int pp_UNK_0x6162; // UNK_0x6162
extern const unsigned short int pp_UNK_0x6329; // UNK_0x6329
extern const unsigned short int pp_IBFR; // IBFR
void M_plus_(); // M+
void D_st_(); // D<
void SAVE_dash_BU_1(); // SAVE-BU_1
void EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
void IsUNRAVEL(); // ?UNRAVEL
void PICK(); // PICK
void D_eq_(); // D=
void INIT(); // INIT
void C_ex_(); // C!
void Store_3(); // !_3
void _1_dot_5_ex_(); // 1.5!
void FILL_1(); // FILL_1
void VA_gt_BUF(); // VA>BUF
void UNK_0x74cc(); // UNK_0x74cc
void UNK_0x74d4(); // UNK_0x74d4
void UNK_0x74dc(); // UNK_0x74dc
void UNK_0x74e4(); // UNK_0x74e4
void StoreINST_dash_SIB(); // !INST-SIB
void UNK_0x74fe(); // UNK_0x74fe
void UNK_0x7506(); // UNK_0x7506
void UNK_0x750e(); // UNK_0x750e
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void CI_i_(); // CI'
void COVER(); // COVER
void IsNULL(); // ?NULL
void Is_dash_NULL(); // ?-NULL
void IsCHILD(); // ?CHILD
void UNK_0x761f(); // UNK_0x761f
void UNK_0x765c(); // UNK_0x765c
void UNK_0x76ec(); // UNK_0x76ec
void UNK_0x7720(); // UNK_0x7720
void UNK_0x77a4(); // UNK_0x77a4
void UNK_0x790c(); // UNK_0x790c
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void EXECUTE(); // EXECUTE
void GetEXECUTE(); // @EXECUTE
void ON_2(); // ON_2
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st_1_dot_5_ex__gt_(); // <1.5!>
void VA_gt_BLK(); // VA>BLK
void _gt_C(); // >C
void CI(); // CI
void CDEPTH(); // CDEPTH
void PRIORIT(); // PRIORIT
void _gt_V(); // >V
void V_gt_(); // V>
void VI(); // VI


// =================================
// =========== VARIABLES ===========
// =================================




// ================================================
// 0x7980: WORD 'SET-CURRENT' codep=0x224c parp=0x798c
// ================================================

void SET_dash_CURRENT() // SET-CURRENT
{
  CDEPTH(); // CDEPTH
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  UNK_0x77a4(); // UNK_0x77a4
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  CI(); // CI
  UNK_0x7720(); // UNK_0x7720
  if (Pop() != 0)
  {
    PRIORIT(); // PRIORIT
    UNK_0x76ec(); // UNK_0x76ec
    UNK_0x765c(); // UNK_0x765c
  } else
  {
    CI(); // CI
    UNK_0x790c(); // UNK_0x790c
  }
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x79c0: WORD 'ICLOSE' codep=0x224c parp=0x79cb
// ================================================

void ICLOSE() // ICLOSE
{
  UNK_0x77a4(); // UNK_0x77a4
  CDROP(); // CDROP
  COVER(); // COVER
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    SET_dash_CURRENT(); // SET-CURRENT
    UNK_0x750e(); // UNK_0x750e
  } else
  {
    Push2Words("NULL");
  }
  Push(pp_UNK_0x6162); // UNK_0x6162
  _st_1_dot_5_ex__gt_(); // <1.5!>
  CDROP(); // CDROP
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0x79eb: WORD '>C+S' codep=0x224c parp=0x79f4
// ================================================

void _gt_C_plus_S() // >C+S
{
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0x79fa: WORD '@>C+S' codep=0x224c parp=0x7a04
// ================================================

void Get_gt_C_plus_S() // @>C+S
{
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a0a: WORD 'IOPEN' codep=0x224c parp=0x7a14
// ================================================

void IOPEN() // IOPEN
{
  UNK_0x750e(); // UNK_0x750e
  _2DUP(); // 2DUP
  Push(pp_UNK_0x6162); // UNK_0x6162
  _st_1_dot_5_ex__gt_(); // <1.5!>
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a20: WORD 'CCLR' codep=0x224c parp=0x7a29
// ================================================

void CCLR() // CCLR
{
  UNK_0x77a4(); // UNK_0x77a4
  Push(Read16(cc_UNK_0x4fff)); // UNK_0x4fff
  Push(pp_CXSP); // CXSP
  _st__ex__gt_(); // <!>
  Push(pp_UNK_0x6329); // UNK_0x6329
  Push(0x0078);
  Push(0);
  FILL_1(); // FILL_1
}


// ================================================
// 0x7a3d: WORD 'UNK_0x7a3f' codep=0x224c parp=0x7a3f
// ================================================

void UNK_0x7a3f() // UNK_0x7a3f
{
  Push(pp_UNK_0x6162); // UNK_0x6162
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7a45: WORD '?LAST' codep=0x224c parp=0x7a4f
// ================================================

void IsLAST() // ?LAST
{
  UNK_0x74fe(); // UNK_0x74fe
  UNK_0x7a3f(); // UNK_0x7a3f
  D_eq_(); // D=
}


// ================================================
// 0x7a57: WORD '?FIRST' codep=0x224c parp=0x7a62
// ================================================

void IsFIRST() // ?FIRST
{
  CI(); // CI
  UNK_0x7a3f(); // UNK_0x7a3f
  D_eq_(); // D=
}


// ================================================
// 0x7a6a: WORD '>C+' codep=0x224c parp=0x7a72
// ================================================

void _gt_C_plus_() // >C+
{
  SET_dash_CURRENT(); // SET-CURRENT
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C(); // >C
}


// ================================================
// 0x7a7c: WORD 'INEXT' codep=0x224c parp=0x7a86
// ================================================

void INEXT() // INEXT
{
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  UNK_0x74fe(); // UNK_0x74fe
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a94: WORD 'IPREV' codep=0x224c parp=0x7a9e
// ================================================

void IPREV() // IPREV
{
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  UNK_0x7506(); // UNK_0x7506
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7aac: WORD 'IFIRST' codep=0x224c parp=0x7ab7
// ================================================

void IFIRST() // IFIRST
{
  CDROP(); // CDROP
  UNK_0x7a3f(); // UNK_0x7a3f
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7abf: WORD 'ILAST' codep=0x224c parp=0x7ac9
// ================================================

void ILAST() // ILAST
{
  IFIRST(); // IFIRST
  IPREV(); // IPREV
}


// ================================================
// 0x7acf: WORD 'VCLR' codep=0x224c parp=0x7ad8 params=0 returns=0
// ================================================

void VCLR() // VCLR
{
  Push(Read16(cc_UNK_0x5003)); // UNK_0x5003
  Push(pp_UNK_0x54b4); // UNK_0x54b4
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7ae0: WORD '>V' codep=0x7ae7 parp=0x7ae7
// ================================================
// 0x7ae7: mov    bx,[54B4]
// 0x7aeb: pop    word ptr [bx]
// 0x7aed: sub    word ptr [54B4],02
// 0x7af2: lodsw
// 0x7af3: mov    bx,ax
// 0x7af5: jmp    word ptr [bx]

// ================================================
// 0x7af7: WORD 'V>' codep=0x7afe parp=0x7afe
// ================================================
// 0x7afe: add    word ptr [54B4],02
// 0x7b03: mov    bx,[54B4]
// 0x7b07: push   word ptr [bx]
// 0x7b09: lodsw
// 0x7b0a: mov    bx,ax
// 0x7b0c: jmp    word ptr [bx]

// ================================================
// 0x7b0e: WORD 'VI' codep=0x7b15 parp=0x7b15
// ================================================
// 0x7b15: mov    bx,[54B4]
// 0x7b19: push   word ptr [bx+02]
// 0x7b1c: lodsw
// 0x7b1d: mov    bx,ax
// 0x7b1f: jmp    word ptr [bx]
// 0x7b21: db 0x4c 0x22 0xa2 0x77 0x76 0x55 0xae 0x0b 0xc8 0x0d 0xfa 0x15 0x14 0x00 0x20 0x0f 0xb8 0x15 0x50 0x0e 0x05 0x10 0xea 0x76 0xbe 0x77 0xd0 0x15 0xf6 0xff 0x8a 0x79 0x90 0x16 'L" wvU            P    v w     y  '

// ================================================
// 0x7b43: WORD 'SAVE-BUFFERS' codep=0x224c parp=0x7b4f params=0 returns=0
// ================================================

void SAVE_dash_BUFFERS() // SAVE-BUFFERS
{
  SAVE_dash_BU_1(); // SAVE-BU_1
  INIT(); // INIT
}


// ================================================
// 0x7b55: WORD 'FLUSH_2' codep=0x224c parp=0x7b5f params=0 returns=0
// ================================================

void FLUSH_2() // FLUSH_2
{
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
}


// ================================================
// 0x7b65: WORD 'IINSERT' codep=0x224c parp=0x7b71
// ================================================

void IINSERT() // IINSERT
{
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    UNK_0x750e(); // UNK_0x750e
    _2SWAP(); // 2SWAP
    UNK_0x74dc(); // UNK_0x74dc
    IOPEN(); // IOPEN
    UNK_0x74cc(); // UNK_0x74cc
    CI(); // CI
    INEXT(); // INEXT
    UNK_0x7506(); // UNK_0x7506
    _2SWAP(); // 2SWAP
    UNK_0x74d4(); // UNK_0x74d4
    IPREV(); // IPREV
    UNK_0x74d4(); // UNK_0x74d4
    CI(); // CI
    IPREV(); // IPREV
    UNK_0x74cc(); // UNK_0x74cc
  } else
  {
    UNK_0x74dc(); // UNK_0x74dc
    IOPEN(); // IOPEN
    CI(); // CI
    UNK_0x74cc(); // UNK_0x74cc
    CI(); // CI
    UNK_0x74d4(); // UNK_0x74d4
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7bad: WORD '<INSERT' codep=0x224c parp=0x7bb9
// ================================================

void _st_INSERT() // <INSERT
{
  _gt_C_plus_S(); // >C+S
  UNK_0x7506(); // UNK_0x7506
  _2SWAP(); // 2SWAP
  UNK_0x74d4(); // UNK_0x74d4
  CI(); // CI
  IPREV(); // IPREV
  UNK_0x74cc(); // UNK_0x74cc
  UNK_0x74d4(); // UNK_0x74d4
  CI(); // CI
  IPREV(); // IPREV
  UNK_0x74cc(); // UNK_0x74cc
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7bd3: WORD '>INSERT' codep=0x224c parp=0x7bdf
// ================================================

void _gt_INSERT() // >INSERT
{
  _gt_C_plus_S(); // >C+S
  UNK_0x74fe(); // UNK_0x74fe
  ICLOSE(); // ICLOSE
  _st_INSERT(); // <INSERT
}


// ================================================
// 0x7be9: WORD 'IEXTRACT' codep=0x224c parp=0x7bf5
// ================================================

void IEXTRACT() // IEXTRACT
{
  CI(); // CI
  UNK_0x761f(); // UNK_0x761f
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
    Push2Words("NULL");
    UNK_0x74dc(); // UNK_0x74dc
    IOPEN(); // IOPEN
    return;
  }
  IsFIRST(); // ?FIRST
  if (Pop() != 0)
  {
    UNK_0x7506(); // UNK_0x7506
    UNK_0x74fe(); // UNK_0x74fe
    ICLOSE(); // ICLOSE
    UNK_0x74dc(); // UNK_0x74dc
    IOPEN(); // IOPEN
    UNK_0x74d4(); // UNK_0x74d4
    CI(); // CI
    IPREV(); // IPREV
    UNK_0x74cc(); // UNK_0x74cc
    INEXT(); // INEXT
    return;
  }
  UNK_0x74fe(); // UNK_0x74fe
  IPREV(); // IPREV
  UNK_0x74cc(); // UNK_0x74cc
  CI(); // CI
  INEXT(); // INEXT
  UNK_0x74d4(); // UNK_0x74d4
}


// ================================================
// 0x7c35: WORD 'UNK_0x7c37' codep=0x224c parp=0x7c37
// ================================================

void UNK_0x7c37() // UNK_0x7c37
{
  Push2Words("VANEWSP");
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7c3d: WORD '@NEWSPACE' codep=0x224c parp=0x7c49
// ================================================

void GetNEWSPACE() // @NEWSPACE
{
  UNK_0x7c37(); // UNK_0x7c37
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7c4f: WORD '!NEWSPACE' codep=0x224c parp=0x7c5b
// ================================================

void StoreNEWSPACE() // !NEWSPACE
{
  UNK_0x7c37(); // UNK_0x7c37
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0x7c61: WORD 'UNK_0x7c63' codep=0x224c parp=0x7c63
// ================================================

void UNK_0x7c63() // UNK_0x7c63
{
  GetNEWSPACE(); // @NEWSPACE
  ROT(); // ROT
  M_plus_(); // M+
  StoreNEWSPACE(); // !NEWSPACE
}


// ================================================
// 0x7c6d: WORD 'MAXSPACE' codep=0x224c parp=0x7c79
// ================================================

void MAXSPACE() // MAXSPACE
{
  Push2Words("VANEWSP");
  Push(0x0003); Push(0x0000);
  D_plus_(); // D+
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7c87: WORD 'UNK_0x7c89' codep=0x224c parp=0x7c89
// ================================================

void UNK_0x7c89() // UNK_0x7c89
{
  GetNEWSPACE(); // @NEWSPACE
  VA_gt_BLK(); // VA>BLK
  Pop(); // DROP
  Push(0x0400);
  SWAP(); // SWAP
  _dash_(); // -
}


// ================================================
// 0x7c99: WORD 'FLD@' codep=0x4a4f parp=0x7ca2
// ================================================

void FLD_at_() // FLD@
{
  switch(Pop()) // FLD@
  {
  case 1:
    Push(Read8(Pop())&0xFF); // C@
    break;
  case 2:
    Push(Read16(Pop())); // @
    break;
  case 3:
    _1_dot_5_at_(); // 1.5@
    break;
  default:
    Push(Read16(Pop())); // @
    break;

  }
}

// ================================================
// 0x7cb2: WORD 'FLD!' codep=0x4a4f parp=0x7cbb
// ================================================

void FLD_ex_() // FLD!
{
  switch(Pop()) // FLD!
  {
  case 1:
    C_ex_(); // C!
    break;
  case 2:
    Store_3(); // !_3
    break;
  case 3:
    _1_dot_5_ex_(); // 1.5!
    break;
  default:
    Store_3(); // !_3
    break;

  }
}

// ================================================
// 0x7ccb: WORD 'IFLD@' codep=0x224c parp=0x7cd5
// ================================================

void IFLD_at_() // IFLD@
{
  Push(Read16(regsp)); // DUP
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  EXECUTE(); // EXECUTE
  SWAP(); // SWAP
  FLD_at_(); // FLD@ case
}


// ================================================
// 0x7ce5: WORD 'IFLD!' codep=0x224c parp=0x7cef
// ================================================

void IFLD_ex_() // IFLD!
{
  Push(Read16(regsp)); // DUP
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  EXECUTE(); // EXECUTE
  SWAP(); // SWAP
  FLD_ex_(); // FLD! case
}

// 0x7cff: db 0x4c 0x22 0x7f 0x0e 0xd3 0x7c 0x7f 0x0e 0x5f 0x12 0x90 0x16 'L"  | _   '

// ================================================
// 0x7d0b: WORD '?CLASS/' codep=0x224c parp=0x7d17 params=4 returns=1
// ================================================

void IsCLASS_slash_() // ?CLASS/
{
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  GetINST_dash_CLASS(); // @INST-CLASS
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0x7d37: WORD 'UNK_0x7d39' codep=0x224c parp=0x7d39 params=0 returns=0
// ================================================

void UNK_0x7d39() // UNK_0x7d39
{
  Push(pp_UNK_0x5532); // UNK_0x5532
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d3f: WORD 'UNK_0x7d41' codep=0x224c parp=0x7d41 params=0 returns=0
// ================================================

void UNK_0x7d41() // UNK_0x7d41
{
  Push(pp__i__ask_EXIT); // '?EXIT
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d47: WORD 'UNK_0x7d49' codep=0x224c parp=0x7d49 params=0 returns=0
// ================================================

void UNK_0x7d49() // UNK_0x7d49
{
  Push(pp__i_TRAVER); // 'TRAVER
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d4f: WORD 'MAP' codep=0x224c parp=0x7d57 params=0 returns=0
// ================================================

void MAP() // MAP
{
  Push(pp__i_MAP); // 'MAP
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d5d: WORD 'UNK_0x7d5f' codep=0x224c parp=0x7d5f params=2 returns=0
// ================================================

void UNK_0x7d5f() // UNK_0x7d5f
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  _gt_V(); // >V
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7d69: WORD 'UNK_0x7d6b' codep=0x224c parp=0x7d6b params=1 returns=0
// ================================================

void UNK_0x7d6b() // UNK_0x7d6b
{
  V_gt_(); // V>
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7d73: WORD 'SELECT' codep=0x224c parp=0x7d7e params=3 returns=1
// ================================================

void SELECT() // SELECT
{
  Push(0);
  _gt_V(); // >V

  label2:
  UNK_0x7d39(); // UNK_0x7d39
  UNK_0x7d41(); // UNK_0x7d41
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0x7d49(); // UNK_0x7d49
  V_gt_(); // V>
  Pop(); // DROP
  Push(1);
  _gt_V(); // >V
  goto label2;

  label1:
  UNK_0x7d41(); // UNK_0x7d41
  if (Pop() == 0) Push(1); else Push(0); // NOT
  V_gt_(); // V>
  Pop(); // DROP
}


// ================================================
// 0x7da6: WORD '?>FIRST' codep=0x224c parp=0x7db2
// ================================================

void Is_gt_FIRST() // ?>FIRST
{
  VI(); // VI
  IsFIRST(); // ?FIRST
  Push(Pop() & Pop()); // AND
  IsNULL(); // ?NULL
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0x7dbe: WORD 'SELECT-' codep=0x224c parp=0x7dca params=6 returns=1
// ================================================

void SELECT_dash_() // SELECT-
{
  unsigned short int a;
  Push(pp_UNK_0x5532); // UNK_0x5532
  UNK_0x7d5f(); // UNK_0x7d5f
  Push(0x7db2); // probable '?>FIRST'
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7d5f(); // UNK_0x7d5f
  Push(0x7a86); // probable 'INEXT'
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7d5f(); // UNK_0x7d5f
  SELECT(); // SELECT
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7d6b(); // UNK_0x7d6b
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7d6b(); // UNK_0x7d6b
  Push(pp_UNK_0x5532); // UNK_0x5532
  UNK_0x7d6b(); // UNK_0x7d6b
  a = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(a); // R>
}

// 0x7df4: db 0x4c 0x22 0xc8 0x7d 0xb4 0x0d 0x32 0x0e 0x90 0x0e 0x90 0x16 'L" }  2     '

// ================================================
// 0x7e00: WORD 'UNK_0x7e02' codep=0x224c parp=0x7e02 params=5 returns=1
// ================================================

void UNK_0x7e02() // UNK_0x7e02
{
  Push(0x7d01);
  SELECT_dash_(); // SELECT-
}


// ================================================
// 0x7e0a: WORD 'IFIND' codep=0x224c parp=0x7e14 params=5 returns=1
// ================================================

void IFIND() // IFIND
{
  Push(0x7d17); // probable '?CLASS/'
  SELECT_dash_(); // SELECT-
}


// ================================================
// 0x7e1c: WORD 'UNK_0x7e1e' codep=0x224c parp=0x7e1e
// ================================================

void UNK_0x7e1e() // UNK_0x7e1e
{
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    UNK_0x7e1e(); // UNK_0x7e1e
    MAP(); // MAP
    UNK_0x7d49(); // UNK_0x7d49
    UNK_0x7d41(); // UNK_0x7d41
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7e36: WORD 'UNK_0x7e38' codep=0x224c parp=0x7e38
// ================================================

void UNK_0x7e38() // UNK_0x7e38
{
  MAP(); // MAP
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    UNK_0x7e38(); // UNK_0x7e38
    UNK_0x7d49(); // UNK_0x7d49
    UNK_0x7d41(); // UNK_0x7d41
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7e50: WORD 'MAKE1ST' codep=0x224c parp=0x7e5c
// ================================================

void MAKE1ST() // MAKE1ST
{
  IsFIRST(); // ?FIRST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  IEXTRACT(); // IEXTRACT
  CI_i_(); // CI'
  IINSERT(); // IINSERT
  IFIRST(); // IFIRST
}


// ================================================
// 0x7e6e: WORD 'UNK_0x7e70' codep=0x224c parp=0x7e70
// ================================================

void UNK_0x7e70() // UNK_0x7e70
{
  Push2Words("INACTIVE");
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x749c); // probable 'INST-SP'
    SWAP(); // SWAP
    UNK_0x7e02(); // UNK_0x7e02
    if (Pop() != 0)
    {
      MAKE1ST(); // MAKE1ST
      CI(); // CI
    } else
    {
      CI_i_(); // CI'
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); // DROP
    CI(); // CI
  }
  IINSERT(); // IINSERT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7ea2: WORD '>INACTIVE' codep=0x224c parp=0x7eae
// ================================================

void _gt_INACTIVE() // >INACTIVE
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(pp_IBFR); // IBFR
  Push(Read16(Pop())); // @
  Push(3);
  _dash_(); // -
  Push(Read16(cc_IHEADLEN)); // IHEADLEN
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  StoreINST_dash_SIB(); // !INST-SIB
  CDROP(); // CDROP
  UNK_0x7e70(); // UNK_0x7e70
}

// 0x7ec8: db 0x4c 0x22 0xf3 0x7b 0xac 0x7e 0x90 0x16 'L" { ~  '

// ================================================
// 0x7ed0: WORD 'IDELETE' codep=0x224c parp=0x7edc
// ================================================

void IDELETE() // IDELETE
{
  Push(0x7eca);
  Push(pp__i_MAP); // 'MAP
  UNK_0x7d5f(); // UNK_0x7d5f
  Push(0x75f3); // probable '?NULL'
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7d5f(); // UNK_0x7d5f
  Push(0x3a48); // probable 'NOP'
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7d5f(); // UNK_0x7d5f
  UNK_0x7e1e(); // UNK_0x7e1e
  MAP(); // MAP
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7d6b(); // UNK_0x7d6b
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7d6b(); // UNK_0x7d6b
  Push(pp__i_MAP); // 'MAP
  UNK_0x7d6b(); // UNK_0x7d6b
}


// ================================================
// 0x7f06: WORD 'UNK_0x7f08' codep=0x224c parp=0x7f08
// ================================================

void UNK_0x7f08() // UNK_0x7f08
{
  Push(pp__i_MAP); // 'MAP
  UNK_0x7d5f(); // UNK_0x7d5f
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7d5f(); // UNK_0x7d5f
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7d5f(); // UNK_0x7d5f
  Push(pp_UNK_0x5532); // UNK_0x5532
  UNK_0x7d5f(); // UNK_0x7d5f
  IFIRST(); // IFIRST
  do
  {
    SELECT(); // SELECT
    if (Pop() != 0)
    {
      MAP(); // MAP
      UNK_0x7d49(); // UNK_0x7d49
      IsFIRST(); // ?FIRST
    } else
    {
      Push(1);
    }
  } while(Pop() == 0);
  Push(pp_UNK_0x5532); // UNK_0x5532
  UNK_0x7d6b(); // UNK_0x7d6b
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7d6b(); // UNK_0x7d6b
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7d6b(); // UNK_0x7d6b
  Push(pp__i_MAP); // 'MAP
  UNK_0x7d6b(); // UNK_0x7d6b
}


// ================================================
// 0x7f42: WORD 'ALL' codep=0x224c parp=0x7f4a
// ================================================

void ALL() // ALL
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x7604); // probable '?-NULL'
  Push(0x7db2); // probable '?>FIRST'
  Push(0x7a86); // probable 'INEXT'
  Push(a); // R>
  UNK_0x7f08(); // UNK_0x7f08
}


// ================================================
// 0x7f5e: WORD 'EACH' codep=0x224c parp=0x7f67
// ================================================

void EACH() // EACH
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x7db2); // probable '?>FIRST'
  Push(0x7a86); // probable 'INEXT'
  Push(a); // R>
  UNK_0x7f08(); // UNK_0x7f08
}


// ================================================
// 0x7f77: WORD 'UNK_0x7f79' codep=0x224c parp=0x7f79 params=0 returns=0
// ================================================

void UNK_0x7f79() // UNK_0x7f79
{
  Push(pp__i_THROW_dash_); // 'THROW-
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7f7f: WORD 'NULLPOINTERS' codep=0x224c parp=0x7f8b
// ================================================

void NULLPOINTERS() // NULLPOINTERS
{
  Push2Words("NULL");
  UNK_0x74cc(); // UNK_0x74cc
  Push2Words("NULL");
  UNK_0x74d4(); // UNK_0x74d4
  Push2Words("NULL");
  UNK_0x74dc(); // UNK_0x74dc
}


// ================================================
// 0x7f99: WORD 'UNK_0x7f9b' codep=0x224c parp=0x7f9b
// ================================================

void UNK_0x7f9b() // UNK_0x7f9b
{
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    IEXTRACT(); // IEXTRACT
    ICLOSE(); // ICLOSE
    return;
  }
  IEXTRACT(); // IEXTRACT
}


// ================================================
// 0x7faf: WORD 'UNK_0x7fb1' codep=0x224c parp=0x7fb1
// ================================================

void UNK_0x7fb1() // UNK_0x7fb1
{
  Push2Words("INACTIVE");
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x749c); // probable 'INST-SP'
    OVER(); // OVER
    UNK_0x7e02(); // UNK_0x7e02
    if (Pop() != 0)
    {
      Push(pp_UNK_0x5e58); // UNK_0x5e58
      ON_2(); // ON_2
      MAKE1ST(); // MAKE1ST
      UNK_0x7f9b(); // UNK_0x7f9b
    } else
    {
      Push2Words("NULL");
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Push2Words("NULL");
  }
  ICLOSE(); // ICLOSE
  _gt_C(); // >C
}


// ================================================
// 0x7fe5: WORD 'UNK_0x7fe7' codep=0x224c parp=0x7fe7
// ================================================

void UNK_0x7fe7() // UNK_0x7fe7
{
  unsigned short int a;
  UNK_0x7c89(); // UNK_0x7c89
  Push(Read16(cc_IHEADLEN)); // IHEADLEN
  _gt_(); // >
  if (Pop() != 0)
  {
    UNK_0x7c89(); // UNK_0x7c89
    Push(Read16(cc_IHEADLEN)); // IHEADLEN
    _dash_(); // -
    Push(Pop()-1); // 1-
    GetNEWSPACE(); // @NEWSPACE
    VA_gt_BUF(); // VA>BUF
    a = Pop(); // >R
    Push(a); // I
    Push(0x000b);
    Push(Pop() + Pop()); // +
    C_ex_(); // C!
    Push(0x0030);
    Push(a); // R>
    Push(9);
    Push(Pop() + Pop()); // +
    C_ex_(); // C!
    GetNEWSPACE(); // @NEWSPACE
    _gt_C_plus_S(); // >C+S
    NULLPOINTERS(); // NULLPOINTERS
    CI(); // CI
    ICLOSE(); // ICLOSE
    _gt_INACTIVE(); // >INACTIVE
  }
  UNK_0x7c89(); // UNK_0x7c89
  UNK_0x7c63(); // UNK_0x7c63
}


// ================================================
// 0x8027: WORD '?>MAXSP' codep=0x224c parp=0x8033
// ================================================

void Is_gt_MAXSP() // ?>MAXSP
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  GetNEWSPACE(); // @NEWSPACE
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  D_st_(); // D<
}


// ================================================
// 0x8047: WORD 'UNK_0x8049' codep=0x224c parp=0x8049
// ================================================

void UNK_0x8049() // UNK_0x8049
{
  Is_gt_MAXSP(); // ?>MAXSP
  if (Pop() != 0)
  {
    Push2Words("NULL");
    _gt_C(); // >C
    return;
  }
  UNK_0x7c89(); // UNK_0x7c89
  OVER(); // OVER
  Push(Read16(cc_IHEADLEN)); // IHEADLEN
  Push(Pop() + Pop()); // +
  _st_(); // <
  if (Pop() != 0)
  {
    UNK_0x7fe7(); // UNK_0x7fe7
  }
  GetNEWSPACE(); // @NEWSPACE
  _gt_C(); // >C
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_IHEADLEN)); // IHEADLEN
  Push(Pop() + Pop()); // +
  UNK_0x7c63(); // UNK_0x7c63
  Is_gt_MAXSP(); // ?>MAXSP
  if (Pop() == 0) return;
  CDROP(); // CDROP
  Push2Words("NULL");
  _gt_C(); // >C
}


// ================================================
// 0x8081: WORD 'UNK_0x8083' codep=0x224c parp=0x8083
// ================================================

void UNK_0x8083() // UNK_0x8083
{
  do
  {
    Push(pp_UNK_0x5e58); // UNK_0x5e58
    OFF_2(); // OFF_2
    Push(pp_UNK_0x5d6b); // UNK_0x5d6b
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      UNK_0x7fb1(); // UNK_0x7fb1
    } else
    {
      UNK_0x8049(); // UNK_0x8049
    }
    IsNULL(); // ?NULL
    if (Pop() != 0)
    {
      CDROP(); // CDROP
      Push(pp_UNK_0x5d6b); // UNK_0x5d6b
      Push(Read16(Pop())); // @
      if (Pop() != 0)
      {
        UNK_0x8049(); // UNK_0x8049
      } else
      {
        UNK_0x7fb1(); // UNK_0x7fb1
      }
      IsNULL(); // ?NULL
      if (Pop() != 0)
      {
        UNK_0x7f79(); // UNK_0x7f79
      }
    }
    IsNULL(); // ?NULL
    if (Pop() == 0) return;
    CDROP(); // CDROP
  } while(1);
}


// ================================================
// 0x80c5: WORD 'SET?REU' codep=0x4a4f parp=0x80d1
// ================================================

void SET_ask_REU() // SET?REU
{
  switch(Pop()) // SET?REU
  {
  case 11:
    Func9("<ON>");
    break;
  case 41:
    Func9("<ON>");
    break;
  case 14:
    Func9("<ON>");
    break;
  case 26:
    Func9("<ON>");
    break;
  case 68:
    Func9("<ON>");
    break;
  case 28:
    Func9("<ON>");
    break;
  case 56:
    Func9("<ON>");
    break;
  case 36:
    Func9("<ON>");
    break;
  case 40:
    Func9("<ON>");
    break;
  case 43:
    Func9("<ON>");
    break;
  case 24:
    Func9("<ON>");
    break;
  case 25:
    Func9("<ON>");
    break;
  case 67:
    Func9("<ON>");
    break;
  default:
    Func9("<OFF>");
    break;

  }
}

// ================================================
// 0x8109: WORD 'VICREAT' codep=0x224c parp=0x8115
// ================================================

void VICREAT() // VICREAT
{
  unsigned short int a;
  Push(pp_UNK_0x5d6b); // UNK_0x5d6b
  OFF_2(); // OFF_2
  Push(Read16(regsp)); // DUP
  Push(0x00fe);
  _gt_(); // >
  IsUNRAVEL(); // ?UNRAVEL
  Push(Pop()+1); // 1+
  UNK_0x8083(); // UNK_0x8083
  Push(Pop()-1); // 1-
  CI(); // CI
  VA_gt_BUF(); // VA>BUF
  a = Pop(); // >R
  Push(a); // I
  Push(0x000b);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  Push(0x0030);
  Push(a); // R>
  Push(9);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  SET_dash_CURRENT(); // SET-CURRENT
  NULLPOINTERS(); // NULLPOINTERS
  CI(); // CI
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x814f: WORD 'ICREATE' codep=0x224c parp=0x815b
// ================================================

void ICREATE() // ICREATE
{
  unsigned short int a;
  Push(pp_UNK_0x5d6b); // UNK_0x5d6b
  Push(3);
  PICK(); // PICK
  SET_ask_REU(); // SET?REU case
  OVER(); // OVER
  Func6("FILE-SLEN");
  Push(Read8(Pop())&0xFF); // C@
  UNK_0x8083(); // UNK_0x8083
  Pop(); // DROP
  Push(pp_UNK_0x5e58); // UNK_0x5e58
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    CI(); // CI
    VA_gt_BUF(); // VA>BUF
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(0x000a);
    Push(Pop() + Pop()); // +
    C_ex_(); // C!
    Push(a); // R>
    Push(9);
    Push(Pop() + Pop()); // +
    C_ex_(); // C!
    SET_dash_CURRENT(); // SET-CURRENT
  } else
  {
    SET_dash_CURRENT(); // SET-CURRENT
    StoreINST_dash_SIB(); // !INST-SIB
    UNK_0x74e4(); // UNK_0x74e4
  }
  NULLPOINTERS(); // NULLPOINTERS
  CI(); // CI
  ICLOSE(); // ICLOSE
}


