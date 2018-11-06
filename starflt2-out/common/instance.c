
#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"

#include"../overlays/CULTURE.h"
#include"../overlays/FX.h"
#include"../overlays/ENDING.h"
#include"../overlays/DEPART.h"
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
#include"../overlays/EDIT-OV.h"
#include"../overlays/PORTMENU-OV.h"
#include"../overlays/VITA-OV.h"
#include"../overlays/EYE-OV.h"
#include"../overlays/DESCRIBE.h"
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
#include"../overlays/TVITEMS.h"
#include"../overlays/BEHAV-OV.h"
#include"../overlays/HEAL-OV.h"
#include"../overlays/REPAIR-OV.h"
#include"../overlays/PLSET-OV.h"
#include"../overlays/MAPS-OV.h"
#include"../overlays/STORM-OV.h"
#include"../overlays/COMBAT-OV.h"
#include"../overlays/DAMAGE-OV.h"
#include"../overlays/LAND-OV.h"
#include"../overlays/MUSIC.h"
#include"../overlays/MODGAME.h"
#include"../overlays/STP-OV.h"
#include"../overlays/COMBAUX.h"
#include"../overlays/IT-OV.h"
#include"../overlays/BLDLISTS.h"
#include"../overlays/BARTER.h"
#include"../overlays/MARKET.h"
#include"../overlays/TVCON-OV.h"
#include"../overlays/CLOUD-OV.h"
#include"../overlays/JUMP.h"
#include"../overlays/SHIPCON.h"
#include"../overlays/DRONE.h"
#include"../overlays/WEAPONS.h"

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_IHEADLE; // IHEADLE
extern const unsigned short int cc_W50FA; // W50FA
extern const unsigned short int cc_W50FE; // W50FE
extern const unsigned short int pp_CXSP; // CXSP
extern const unsigned short int pp_W5638; // W5638
extern const unsigned short int pp__i_THROW_dash_; // 'THROW-
extern const unsigned short int pp__i_MAP; // 'MAP
extern const unsigned short int pp__i_TRAVER; // 'TRAVER
extern const unsigned short int pp__i__ask_EXIT; // '?EXIT
extern const unsigned short int pp_W56B2; // W56B2
extern const unsigned short int pp_W56E0; // W56E0
extern const unsigned short int pp_W5EFA; // W5EFA
extern const unsigned short int pp_W5FE6; // W5FE6
extern const unsigned short int pp_W63A2; // W63A2
extern const unsigned short int pp_W651B; // W651B
extern const unsigned short int pp_IBFR; // IBFR
void M_plus_(); // M+
void D_st_(); // D<
void EMPTY(); // EMPTY
void SAVE_dash_BUFFERS(); // SAVE-BUFFERS
void EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
void IsUNRAVEL(); // ?UNRAVEL
void PICK(); // PICK
void D_eq_(); // D=
void INIT(); // INIT
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _1_dot_5_ex__2(); // 1.5!_2
void FILL_2(); // FILL_2
void VA_gt_BUF(); // VA>BUF
void W74D0(); // W74D0
void W74D8(); // W74D8
void W74E0(); // W74E0
void W74E8(); // W74E8
void StoreINST_dash_S(); // !INST-S
void W7502(); // W7502
void W750A(); // W750A
void W7512(); // W7512
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void CI_i_(); // CI'
void COVER(); // COVER
void IsNULL(); // ?NULL
void Is_dash_NULL(); // ?-NULL
void IsCHILD(); // ?CHILD
void W7635(); // W7635
void W7702(); // W7702
void W77BA(); // W77BA
void W77D6(); // W77D6
void SET_dash_CUR(); // SET-CUR
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void EXECUTE(); // EXECUTE
void GetEXECUTE(); // @EXECUTE
void ON_1(); // ON_1
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st_1_dot_5_ex__gt_(); // <1.5!>
void VA_gt_BLK(); // VA>BLK
void _gt_C(); // >C
void CI(); // CI
void _gt_V(); // >V
void V_gt_(); // V>
void VI(); // VI


// =================================
// =========== VARIABLES ===========
// =================================




// ================================================
// 0x79d6: WORD 'ICLOSE' codep=0x224c parp=0x79e1 params=0 returns=0
// ================================================

void ICLOSE() // ICLOSE
{
  W77BA(); // W77BA
  CDROP(); // CDROP
  COVER(); // COVER
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    SET_dash_CUR(); // SET-CUR
    W7512(); // W7512
  } else
  {
    Push2Words("NULL");
  }
  Push(pp_W63A2); // W63A2
  _st_1_dot_5_ex__gt_(); // <1.5!>
  CDROP(); // CDROP
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0x7a01: WORD '*CLOSE' codep=0x224c parp=0x7a0c params=1 returns=0
// ================================================

void _star_CLOSE() // *CLOSE
{
  unsigned short int i, imax;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0x7a18: WORD '>C+S' codep=0x224c parp=0x7a21 params=2 returns=0
// ================================================

void _gt_C_plus_S() // >C+S
{
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0x7a27: WORD '@>C+S' codep=0x224c parp=0x7a31 params=1 returns=0
// ================================================

void Get_gt_C_plus_S() // @>C+S
{
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a37: WORD 'IOPEN' codep=0x224c parp=0x7a41 params=0 returns=0
// ================================================

void IOPEN() // IOPEN
{
  W7512(); // W7512
  _2DUP(); // 2DUP
  Push(pp_W63A2); // W63A2
  _st_1_dot_5_ex__gt_(); // <1.5!>
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a4d: WORD 'CCLR' codep=0x224c parp=0x7a56 params=0 returns=0
// ================================================

void CCLR() // CCLR
{
  W77BA(); // W77BA
  Push(Read16(cc_W50FA)); // W50FA
  Push(pp_CXSP); // CXSP
  _st__ex__gt_(); // <!>
  Push(pp_W651B); // W651B
  Push(0x0078);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0x7a6a: WORD 'W7A6C' codep=0x224c parp=0x7a6c params=0 returns=2
// ================================================

void W7A6C() // W7A6C
{
  Push(pp_W63A2); // W63A2
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7a72: WORD '?LAST' codep=0x224c parp=0x7a7c params=0 returns=1
// ================================================

void IsLAST() // ?LAST
{
  W7502(); // W7502
  W7A6C(); // W7A6C
  D_eq_(); // D=
}


// ================================================
// 0x7a84: WORD '?FIRST' codep=0x224c parp=0x7a8f params=0 returns=1
// ================================================

void IsFIRST() // ?FIRST
{
  CI(); // CI
  W7A6C(); // W7A6C
  D_eq_(); // D=
}


// ================================================
// 0x7a97: WORD '>C+' codep=0x224c parp=0x7a9f params=2 returns=0
// ================================================

void _gt_C_plus_() // >C+
{
  SET_dash_CUR(); // SET-CUR
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C(); // >C
}


// ================================================
// 0x7aa9: WORD 'INEXT' codep=0x224c parp=0x7ab3 params=0 returns=0
// ================================================

void INEXT() // INEXT
{
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  W7502(); // W7502
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7ac1: WORD 'IPREV' codep=0x224c parp=0x7acb params=0 returns=0
// ================================================

void IPREV() // IPREV
{
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  W750A(); // W750A
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7ad9: WORD 'IFIRST' codep=0x224c parp=0x7ae4 params=0 returns=0
// ================================================

void IFIRST() // IFIRST
{
  CDROP(); // CDROP
  W7A6C(); // W7A6C
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7aec: WORD 'ILAST' codep=0x224c parp=0x7af6 params=0 returns=0
// ================================================

void ILAST() // ILAST
{
  IFIRST(); // IFIRST
  IPREV(); // IPREV
}


// ================================================
// 0x7afc: WORD 'VCLR' codep=0x224c parp=0x7b05 params=0 returns=0
// ================================================

void VCLR() // VCLR
{
  Push(Read16(cc_W50FE)); // W50FE
  Push(pp_W5638); // W5638
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7b0d: WORD '>V' codep=0x7b14 parp=0x7b14 params=1 returns=0
// ================================================
// 0x7b14: mov    bx,[5638] // W5638
// 0x7b18: pop    word ptr [bx]
// 0x7b1a: sub    word ptr [5638],02 // W5638
// 0x7b1f: lodsw
// 0x7b20: mov    bx,ax
// 0x7b22: jmp    word ptr [bx]

// ================================================
// 0x7b24: WORD 'V>' codep=0x7b2b parp=0x7b2b params=0 returns=1
// ================================================
// 0x7b2b: add    word ptr [5638],02 // W5638
// 0x7b30: mov    bx,[5638] // W5638
// 0x7b34: push   word ptr [bx]
// 0x7b36: lodsw
// 0x7b37: mov    bx,ax
// 0x7b39: jmp    word ptr [bx]

// ================================================
// 0x7b3b: WORD 'VI' codep=0x7b42 parp=0x7b42 params=0 returns=1
// ================================================
// 0x7b42: mov    bx,[5638] // W5638
// 0x7b46: push   word ptr [bx+02]
// 0x7b49: lodsw
// 0x7b4a: mov    bx,ax
// 0x7b4c: jmp    word ptr [bx]

// ================================================
// 0x7b4e: WORD 'W7B50' codep=0x224c parp=0x7b50 params=0 returns=0
// ================================================
// orphan

void W7B50() // W7B50
{
  unsigned short int i, imax;
  W77BA(); // W77BA
  Push(Read16(pp_W56E0)); // W56E0 @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i * 2); // I 2*
    W7702(); // W7702
    W77D6(); // W77D6
    i++;
  } while(i<imax); // (LOOP)

  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0x7b70: WORD 'SAVE-BU' codep=0x224c parp=0x7b7c
// ================================================

void SAVE_dash_BU() // SAVE-BU
{
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
  INIT(); // INIT
}


// ================================================
// 0x7b82: WORD 'FLUSH_2' codep=0x224c parp=0x7b8c
// ================================================

void FLUSH_2() // FLUSH_2
{
  SAVE_dash_BU(); // SAVE-BU
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
}


// ================================================
// 0x7b92: WORD 'MT' codep=0x224c parp=0x7b99 params=0 returns=0
// ================================================

void MT() // MT
{
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  EMPTY(); // EMPTY
}


// ================================================
// 0x7b9f: WORD 'IINSERT' codep=0x224c parp=0x7bab params=4 returns=0
// ================================================

void IINSERT() // IINSERT
{
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    W7512(); // W7512
    _2SWAP(); // 2SWAP
    W74E0(); // W74E0
    IOPEN(); // IOPEN
    W74D0(); // W74D0
    CI(); // CI
    INEXT(); // INEXT
    W750A(); // W750A
    _2SWAP(); // 2SWAP
    W74D8(); // W74D8
    IPREV(); // IPREV
    W74D8(); // W74D8
    CI(); // CI
    IPREV(); // IPREV
    W74D0(); // W74D0
  } else
  {
    W74E0(); // W74E0
    IOPEN(); // IOPEN
    CI(); // CI
    W74D0(); // W74D0
    CI(); // CI
    W74D8(); // W74D8
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7be7: WORD '<INSERT' codep=0x224c parp=0x7bf3 params=4 returns=0
// ================================================

void _st_INSERT() // <INSERT
{
  _gt_C_plus_S(); // >C+S
  W750A(); // W750A
  _2SWAP(); // 2SWAP
  W74D8(); // W74D8
  CI(); // CI
  IPREV(); // IPREV
  W74D0(); // W74D0
  W74D8(); // W74D8
  CI(); // CI
  IPREV(); // IPREV
  W74D0(); // W74D0
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7c0d: WORD '>INSERT' codep=0x224c parp=0x7c19 params=4 returns=0
// ================================================

void _gt_INSERT() // >INSERT
{
  _gt_C_plus_S(); // >C+S
  W7502(); // W7502
  ICLOSE(); // ICLOSE
  _st_INSERT(); // <INSERT
}


// ================================================
// 0x7c23: WORD 'IEXTRAC' codep=0x224c parp=0x7c2f params=0 returns=2
// ================================================

void IEXTRAC() // IEXTRAC
{
  CI(); // CI
  W7635(); // W7635
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
    Push2Words("NULL");
    W74E0(); // W74E0
    IOPEN(); // IOPEN
    return;
  }
  IsFIRST(); // ?FIRST
  if (Pop() != 0)
  {
    W750A(); // W750A
    W7502(); // W7502
    ICLOSE(); // ICLOSE
    W74E0(); // W74E0
    IOPEN(); // IOPEN
    W74D8(); // W74D8
    CI(); // CI
    IPREV(); // IPREV
    W74D0(); // W74D0
    INEXT(); // INEXT
    return;
  }
  W7502(); // W7502
  IPREV(); // IPREV
  W74D0(); // W74D0
  CI(); // CI
  INEXT(); // INEXT
  W74D8(); // W74D8
}


// ================================================
// 0x7c6f: WORD 'W7C71' codep=0x224c parp=0x7c71 params=0 returns=2
// ================================================

void W7C71() // W7C71
{
  Push2Words("VANEWSP");
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7c77: WORD '@NEWSPA' codep=0x224c parp=0x7c83 params=0 returns=3
// ================================================

void GetNEWSPA() // @NEWSPA
{
  W7C71(); // W7C71
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7c89: WORD '!NEWSPA' codep=0x224c parp=0x7c95 params=1 returns=0
// ================================================

void StoreNEWSPA() // !NEWSPA
{
  W7C71(); // W7C71
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0x7c9b: WORD 'W7C9D' codep=0x224c parp=0x7c9d params=0 returns=1
// ================================================

void W7C9D() // W7C9D
{
  GetNEWSPA(); // @NEWSPA
  ROT(); // ROT
  M_plus_(); // M+
  StoreNEWSPA(); // !NEWSPA
}


// ================================================
// 0x7ca7: WORD 'MAXSPAC' codep=0x224c parp=0x7cb3 params=0 returns=2
// ================================================

void MAXSPAC() // MAXSPAC
{
  Push2Words("VANEWSP");
  Push(0x0003); Push(0x0000);
  D_plus_(); // D+
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7cc1: WORD 'W7CC3' codep=0x224c parp=0x7cc3 params=0 returns=2
// ================================================

void W7CC3() // W7CC3
{
  GetNEWSPA(); // @NEWSPA
  VA_gt_BLK(); // VA>BLK
  Pop(); // DROP
  Push(0x0400);
  SWAP(); // SWAP
  _dash_(); // -
}


// ================================================
// 0x7cd3: WORD 'FLD@' codep=0x4b3b parp=0x7cdc
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
// 0x7cec: WORD 'FLD!' codep=0x4b3b parp=0x7cf5
// ================================================

void FLD_ex_() // FLD!
{
  switch(Pop()) // FLD!
  {
  case 1:
    C_ex__2(); // C!_2
    break;
  case 2:
    Store_2(); // !_2
    break;
  case 3:
    _1_dot_5_ex__2(); // 1.5!_2
    break;
  default:
    Store_2(); // !_2
    break;

  }
}

// ================================================
// 0x7d05: WORD 'IFLD@' codep=0x224c parp=0x7d0f
// ================================================

void IFLD_at_() // IFLD@
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + 2)&0xFF); //  2+ C@
  SWAP(); // SWAP
  EXECUTE(); // EXECUTE
  SWAP(); // SWAP
  FLD_at_(); // FLD@ case
}


// ================================================
// 0x7d1f: WORD 'IFLD!' codep=0x224c parp=0x7d29
// ================================================

void IFLD_ex_() // IFLD!
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + 2)&0xFF); //  2+ C@
  SWAP(); // SWAP
  EXECUTE(); // EXECUTE
  SWAP(); // SWAP
  FLD_ex_(); // FLD! case
}


// ================================================
// 0x7d39: WORD 'W7D3B' codep=0x224c parp=0x7d3b
// ================================================

void W7D3B() // W7D3B
{
  OVER(); // OVER
  IFLD_at_(); // IFLD@
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0x7d45: WORD '?CLASS/' codep=0x224c parp=0x7d51 params=2 returns=3
// ================================================

void IsCLASS_slash_() // ?CLASS/
{
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  GetINST_dash_C(); // @INST-C
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  GetINST_dash_S(); // @INST-S
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0x7d71: WORD 'W7D73' codep=0x224c parp=0x7d73
// ================================================

void W7D73() // W7D73
{
  Push(pp_W56B2); // W56B2
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d79: WORD 'W7D7B' codep=0x224c parp=0x7d7b
// ================================================

void W7D7B() // W7D7B
{
  Push(pp__i__ask_EXIT); // '?EXIT
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d81: WORD 'W7D83' codep=0x224c parp=0x7d83
// ================================================

void W7D83() // W7D83
{
  Push(pp__i_TRAVER); // 'TRAVER
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d89: WORD 'MAP' codep=0x224c parp=0x7d91
// ================================================

void MAP() // MAP
{
  Push(pp__i_MAP); // 'MAP
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d97: WORD 'W7D99' codep=0x224c parp=0x7d99 params=2 returns=0
// ================================================

void W7D99() // W7D99
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  _gt_V(); // >V
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7da3: WORD 'W7DA5' codep=0x224c parp=0x7da5 params=1 returns=0
// ================================================

void W7DA5() // W7DA5
{
  V_gt_(); // V>
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7dad: WORD 'SELECT' codep=0x224c parp=0x7db8
// ================================================

void SELECT() // SELECT
{
  Push(0);
  _gt_V(); // >V
  while(1)
  {
    W7D73(); // W7D73
    W7D7B(); // W7D7B
    Push(Pop() | Pop()); // OR
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    W7D83(); // W7D83
    V_gt_(); // V>
    Pop(); // DROP
    Push(1);
    _gt_V(); // >V
  }
  W7D7B(); // W7D7B
  Push(!Pop()); //  NOT
  V_gt_(); // V>
  Pop(); // DROP
}


// ================================================
// 0x7de0: WORD '?>FIRST' codep=0x224c parp=0x7dec params=0 returns=1
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
// 0x7df8: WORD 'SELECT-' codep=0x224c parp=0x7e04
// ================================================

void SELECT_dash_() // SELECT-
{
  unsigned short int a;
  Push(pp_W56B2); // W56B2
  W7D99(); // W7D99
  Push(0x7dec); // '?>FIRST'
  Push(pp__i__ask_EXIT); // '?EXIT
  W7D99(); // W7D99
  Push(0x7ab3); // 'INEXT'
  Push(pp__i_TRAVER); // 'TRAVER
  W7D99(); // W7D99
  SELECT(); // SELECT
  Push(pp__i_TRAVER); // 'TRAVER
  W7DA5(); // W7DA5
  Push(pp__i__ask_EXIT); // '?EXIT
  W7DA5(); // W7DA5
  Push(pp_W56B2); // W56B2
  W7DA5(); // W7DA5
  a = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(a); // R>
}


// ================================================
// 0x7e2e: WORD 'W7E30' codep=0x224c parp=0x7e30
// ================================================
// orphan

void W7E30() // W7E30
{
  unsigned short int a;
  SELECT_dash_(); // SELECT-
  a = Pop(); // >R
  Pop(); // DROP
  Push(a); // R>
}


// ================================================
// 0x7e3a: WORD 'W7E3C' codep=0x224c parp=0x7e3c
// ================================================

void W7E3C() // W7E3C
{
  Push(0x7d3b); // 'W7D3B'
  SELECT_dash_(); // SELECT-
}


// ================================================
// 0x7e44: WORD 'IFIND' codep=0x224c parp=0x7e4e
// ================================================

void IFIND() // IFIND
{
  Push(0x7d51); // '?CLASS/'
  SELECT_dash_(); // SELECT-
}


// ================================================
// 0x7e56: WORD 'W7E58' codep=0x224c parp=0x7e58 params=0 returns=0
// ================================================

void W7E58() // W7E58
{
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    W7E58(); // W7E58
    MAP(); // MAP
    W7D83(); // W7D83
    W7D7B(); // W7D7B
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7e70: WORD 'MAP>LEA' codep=0x224c parp=0x7e7c
// ================================================

void MAP_gt_LEA() // MAP>LEA
{
  MAP(); // MAP
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    MAP_gt_LEA(); // MAP>LEA
    W7D83(); // W7D83
    W7D7B(); // W7D7B
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7e94: WORD 'MAKE1ST' codep=0x224c parp=0x7ea0 params=0 returns=0
// ================================================

void MAKE1ST() // MAKE1ST
{
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  IEXTRAC(); // IEXTRAC
  CI_i_(); // CI'
  IINSERT(); // IINSERT
  IFIRST(); // IFIRST
}


// ================================================
// 0x7eb2: WORD 'W7EB4' codep=0x224c parp=0x7eb4 params=3 returns=0
// ================================================

void W7EB4() // W7EB4
{
  Push2Words("INACTIV");
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x74a0); // 'INST-SP'
    SWAP(); // SWAP
    W7E3C(); // W7E3C
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
// 0x7ee6: WORD '>INACTI' codep=0x224c parp=0x7ef2 params=2 returns=0
// ================================================

void _gt_INACTI() // >INACTI
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push((Read16(pp_IBFR) - 3) - Read16(cc_IHEADLE)); // IBFR @ 3 - IHEADLE -
  Push(Read16(regsp)); // DUP
  StoreINST_dash_S(); // !INST-S
  CDROP(); // CDROP
  W7EB4(); // W7EB4
}


// ================================================
// 0x7f0c: WORD 'W7F0E' codep=0x224c parp=0x7f0e params=0 returns=0
// ================================================

void W7F0E() // W7F0E
{
  IEXTRAC(); // IEXTRAC
  _gt_INACTI(); // >INACTI
}


// ================================================
// 0x7f14: WORD 'IDELETE' codep=0x224c parp=0x7f20
// ================================================

void IDELETE() // IDELETE
{
  Push(0x7f0e); // 'W7F0E'
  Push(pp__i_MAP); // 'MAP
  W7D99(); // W7D99
  Push(0x7609); // '?NULL'
  Push(pp__i__ask_EXIT); // '?EXIT
  W7D99(); // W7D99
  Push(0x3a48); // 'NOP'
  Push(pp__i_TRAVER); // 'TRAVER
  W7D99(); // W7D99
  W7E58(); // W7E58
  MAP(); // MAP
  Push(pp__i_TRAVER); // 'TRAVER
  W7DA5(); // W7DA5
  Push(pp__i__ask_EXIT); // '?EXIT
  W7DA5(); // W7DA5
  Push(pp__i_MAP); // 'MAP
  W7DA5(); // W7DA5
}


// ================================================
// 0x7f4a: WORD 'W7F4C' codep=0x224c parp=0x7f4c
// ================================================

void W7F4C() // W7F4C
{
  Push(pp__i_MAP); // 'MAP
  W7D99(); // W7D99
  Push(pp__i_TRAVER); // 'TRAVER
  W7D99(); // W7D99
  Push(pp__i__ask_EXIT); // '?EXIT
  W7D99(); // W7D99
  Push(pp_W56B2); // W56B2
  W7D99(); // W7D99
  IFIRST(); // IFIRST
  do
  {
    SELECT(); // SELECT
    if (Pop() != 0)
    {
      MAP(); // MAP
      W7D83(); // W7D83
      IsFIRST(); // ?FIRST
    } else
    {
      Push(1);
    }
  } while(Pop() == 0);
  Push(pp_W56B2); // W56B2
  W7DA5(); // W7DA5
  Push(pp__i__ask_EXIT); // '?EXIT
  W7DA5(); // W7DA5
  Push(pp__i_TRAVER); // 'TRAVER
  W7DA5(); // W7DA5
  Push(pp__i_MAP); // 'MAP
  W7DA5(); // W7DA5
}


// ================================================
// 0x7f86: WORD 'ALL' codep=0x224c parp=0x7f8e
// ================================================

void ALL() // ALL
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x761a); // '?-NULL'
  Push(0x7dec); // '?>FIRST'
  Push(0x7ab3); // 'INEXT'
  Push(a); // R>
  W7F4C(); // W7F4C
}


// ================================================
// 0x7fa2: WORD 'EACH' codep=0x224c parp=0x7fab
// ================================================

void EACH() // EACH
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x7dec); // '?>FIRST'
  Push(0x7ab3); // 'INEXT'
  Push(a); // R>
  W7F4C(); // W7F4C
}


// ================================================
// 0x7fbb: WORD 'W7FBD' codep=0x224c parp=0x7fbd
// ================================================

void W7FBD() // W7FBD
{
  Push(pp__i_THROW_dash_); // 'THROW-
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7fc3: WORD 'NULLPOI' codep=0x224c parp=0x7fcf params=0 returns=0
// ================================================

void NULLPOI() // NULLPOI
{
  Push2Words("NULL");
  W74D0(); // W74D0
  Push2Words("NULL");
  W74D8(); // W74D8
  Push2Words("NULL");
  W74E0(); // W74E0
}


// ================================================
// 0x7fdd: WORD 'W7FDF' codep=0x224c parp=0x7fdf params=0 returns=2
// ================================================

void W7FDF() // W7FDF
{
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    IEXTRAC(); // IEXTRAC
    ICLOSE(); // ICLOSE
    return;
  }
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0x7ff3: WORD 'W7FF5' codep=0x224c parp=0x7ff5 params=0 returns=0
// ================================================

void W7FF5() // W7FF5
{
  Push2Words("INACTIV");
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x74a0); // 'INST-SP'
    OVER(); // OVER
    W7E3C(); // W7E3C
    if (Pop() != 0)
    {
      Push(pp_W5FE6); // W5FE6
      ON_1(); // ON_1
      MAKE1ST(); // MAKE1ST
      W7FDF(); // W7FDF
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
// 0x8029: WORD 'W802B' codep=0x224c parp=0x802b params=0 returns=4
// ================================================

void W802B() // W802B
{
  unsigned short int a;
  W7CC3(); // W7CC3
  Push(Read16(cc_IHEADLE)); // IHEADLE
  _gt_(); // >
  if (Pop() != 0)
  {
    W7CC3(); // W7CC3
    Push((Pop() - Read16(cc_IHEADLE)) - 1); //  IHEADLE - 1-
    GetNEWSPA(); // @NEWSPA
    VA_gt_BUF(); // VA>BUF
    a = Pop(); // >R
    Push(a + 0x000b); // I 0x000b +
    C_ex__2(); // C!_2
    Push(0x0030);
    Push(a + 9); // R> 9 +
    C_ex__2(); // C!_2
    GetNEWSPA(); // @NEWSPA
    _gt_C_plus_S(); // >C+S
    NULLPOI(); // NULLPOI
    CI(); // CI
    ICLOSE(); // ICLOSE
    _gt_INACTI(); // >INACTI
  }
  W7CC3(); // W7CC3
  W7C9D(); // W7C9D
}


// ================================================
// 0x806b: WORD '?>MAXSP' codep=0x224c parp=0x8077 params=1 returns=4
// ================================================

void Is_gt_MAXSP() // ?>MAXSP
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  MAXSPAC(); // MAXSPAC
  _1_dot_5_at_(); // 1.5@
  GetNEWSPA(); // @NEWSPA
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  D_st_(); // D<
}


// ================================================
// 0x808b: WORD 'W808D' codep=0x224c parp=0x808d params=1 returns=9
// ================================================

void W808D() // W808D
{
  Is_gt_MAXSP(); // ?>MAXSP
  if (Pop() != 0)
  {
    Push2Words("NULL");
    _gt_C(); // >C
    return;
  }
  W7CC3(); // W7CC3
  OVER(); // OVER
  Push(Pop() + Read16(cc_IHEADLE)); //  IHEADLE +
  _st_(); // <
  if (Pop() != 0)
  {
    W802B(); // W802B
  }
  GetNEWSPA(); // @NEWSPA
  _gt_C(); // >C
  Push(Read16(regsp)); // DUP
  Push(Pop() + Read16(cc_IHEADLE)); //  IHEADLE +
  W7C9D(); // W7C9D
  Is_gt_MAXSP(); // ?>MAXSP
  if (Pop() == 0) return;
  CDROP(); // CDROP
  Push2Words("NULL");
  _gt_C(); // >C
}


// ================================================
// 0x80c5: WORD 'W80C7' codep=0x224c parp=0x80c7 params=1 returns=9
// ================================================

void W80C7() // W80C7
{
  while(1)
  {
    Push(pp_W5FE6); // W5FE6
    OFF_2(); // OFF_2
    Push(Read16(pp_W5EFA)); // W5EFA @
    if (Pop() != 0)
    {
      W7FF5(); // W7FF5
    } else
    {
      W808D(); // W808D
    }
    IsNULL(); // ?NULL
    if (Pop() != 0)
    {
      CDROP(); // CDROP
      Push(Read16(pp_W5EFA)); // W5EFA @
      if (Pop() != 0)
      {
        W808D(); // W808D
      } else
      {
        W7FF5(); // W7FF5
      }
      IsNULL(); // ?NULL
      if (Pop() != 0)
      {
        W7FBD(); // W7FBD
      }
    }
    IsNULL(); // ?NULL
    if (Pop() == 0) return;
    CDROP(); // CDROP
  }
}


// ================================================
// 0x8109: WORD 'SET?REU' codep=0x4b3b parp=0x8115
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
  case 24:
    Func9("<ON>");
    break;
  case 25:
    Func9("<ON>");
    break;
  case 67:
    Func9("<ON>");
    break;
  case 21:
    Func9("<ON>");
    break;
  case 9:
    Func9("<ON>");
    break;
  case 31:
    Func9("<ON>");
    break;
  case 33:
    Func9("<ON>");
    break;
  case 29:
    Func9("<ON>");
    break;
  default:
    Func9("<OFF>");
    break;

  }
}

// ================================================
// 0x8159: WORD 'VICREAT' codep=0x224c parp=0x8165 params=1 returns=11
// ================================================

void VICREAT() // VICREAT
{
  unsigned short int a;
  Push(pp_W5EFA); // W5EFA
  OFF_2(); // OFF_2
  Push(Read16(regsp)); // DUP
  Push(0x00fe);
  _gt_(); // >
  IsUNRAVEL(); // ?UNRAVEL
  Push(Pop() + 1); //  1+
  W80C7(); // W80C7
  Push(Pop() - 1); //  1-
  CI(); // CI
  VA_gt_BUF(); // VA>BUF
  a = Pop(); // >R
  Push(a + 0x000b); // I 0x000b +
  C_ex__2(); // C!_2
  Push(0x0030);
  Push(a + 9); // R> 9 +
  C_ex__2(); // C!_2
  SET_dash_CUR(); // SET-CUR
  NULLPOI(); // NULLPOI
  CI(); // CI
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x819f: WORD 'ICREATE' codep=0x224c parp=0x81ab
// ================================================

void ICREATE() // ICREATE
{
  unsigned short int a;
  Push(pp_W5EFA); // W5EFA
  Push(3);
  PICK(); // PICK
  SET_ask_REU(); // SET?REU case
  OVER(); // OVER
  Func6("FILE-SL");
  Push(Read16(Pop())&0xFF); //  C@
  W80C7(); // W80C7
  Pop(); // DROP
  Push(!Read16(pp_W5FE6)); // W5FE6 @ NOT
  if (Pop() != 0)
  {
    CI(); // CI
    VA_gt_BUF(); // VA>BUF
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(Pop() + 0x000a); //  0x000a +
    C_ex__2(); // C!_2
    Push(a + 9); // R> 9 +
    C_ex__2(); // C!_2
    SET_dash_CUR(); // SET-CUR
  } else
  {
    SET_dash_CUR(); // SET-CUR
    StoreINST_dash_S(); // !INST-S
    W74E8(); // W74E8
  }
  NULLPOI(); // NULLPOI
  CI(); // CI
  ICLOSE(); // ICLOSE
}


