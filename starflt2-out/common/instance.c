
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
extern const unsigned short int cc_UNK_0x50fa; // UNK_0x50fa
extern const unsigned short int cc_UNK_0x50fe; // UNK_0x50fe
extern const unsigned short int pp_CXSP; // CXSP
extern const unsigned short int pp_UNK_0x5638; // UNK_0x5638
extern const unsigned short int pp__i_THROW_dash_; // 'THROW-
extern const unsigned short int pp__i_MAP; // 'MAP
extern const unsigned short int pp__i_TRAVER; // 'TRAVER
extern const unsigned short int pp__i__ask_EXIT; // '?EXIT
extern const unsigned short int pp_UNK_0x56b2; // UNK_0x56b2
extern const unsigned short int pp_UNK_0x5efa; // UNK_0x5efa
extern const unsigned short int pp_UNK_0x5fe6; // UNK_0x5fe6
extern const unsigned short int pp_UNK_0x63a2; // UNK_0x63a2
extern const unsigned short int pp_UNK_0x651b; // UNK_0x651b
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
void UNK_0x74d0(); // UNK_0x74d0
void UNK_0x74d8(); // UNK_0x74d8
void UNK_0x74e0(); // UNK_0x74e0
void UNK_0x74e8(); // UNK_0x74e8
void StoreINST_dash_S(); // !INST-S
void UNK_0x7502(); // UNK_0x7502
void UNK_0x750a(); // UNK_0x750a
void UNK_0x7512(); // UNK_0x7512
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void CI_i_(); // CI'
void COVER(); // COVER
void IsNULL(); // ?NULL
void Is_dash_NULL(); // ?-NULL
void IsCHILD(); // ?CHILD
void UNK_0x7635(); // UNK_0x7635
void UNK_0x77ba(); // UNK_0x77ba
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
// 0x79d6: WORD 'ICLOSE' codep=0x224c parp=0x79e1
// ================================================

void ICLOSE() // ICLOSE
{
  UNK_0x77ba(); // UNK_0x77ba
  CDROP(); // CDROP
  COVER(); // COVER
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    SET_dash_CUR(); // SET-CUR
    UNK_0x7512(); // UNK_0x7512
  } else
  {
    Push2Words("NULL");
  }
  Push(pp_UNK_0x63a2); // UNK_0x63a2
  _st_1_dot_5_ex__gt_(); // <1.5!>
  CDROP(); // CDROP
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0x7a01: WORD '*CLOSE' codep=0x224c parp=0x7a0c
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
// 0x7a18: WORD '>C+S' codep=0x224c parp=0x7a21
// ================================================

void _gt_C_plus_S() // >C+S
{
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0x7a27: WORD '@>C+S' codep=0x224c parp=0x7a31
// ================================================

void Get_gt_C_plus_S() // @>C+S
{
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a37: WORD 'IOPEN' codep=0x224c parp=0x7a41
// ================================================

void IOPEN() // IOPEN
{
  UNK_0x7512(); // UNK_0x7512
  _2DUP(); // 2DUP
  Push(pp_UNK_0x63a2); // UNK_0x63a2
  _st_1_dot_5_ex__gt_(); // <1.5!>
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a4d: WORD 'CCLR' codep=0x224c parp=0x7a56
// ================================================

void CCLR() // CCLR
{
  UNK_0x77ba(); // UNK_0x77ba
  Push(Read16(cc_UNK_0x50fa)); // UNK_0x50fa
  Push(pp_CXSP); // CXSP
  _st__ex__gt_(); // <!>
  Push(pp_UNK_0x651b); // UNK_0x651b
  Push(0x0078);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0x7a6a: WORD 'UNK_0x7a6c' codep=0x224c parp=0x7a6c
// ================================================

void UNK_0x7a6c() // UNK_0x7a6c
{
  Push(pp_UNK_0x63a2); // UNK_0x63a2
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7a72: WORD '?LAST' codep=0x224c parp=0x7a7c
// ================================================

void IsLAST() // ?LAST
{
  UNK_0x7502(); // UNK_0x7502
  UNK_0x7a6c(); // UNK_0x7a6c
  D_eq_(); // D=
}


// ================================================
// 0x7a84: WORD '?FIRST' codep=0x224c parp=0x7a8f
// ================================================

void IsFIRST() // ?FIRST
{
  CI(); // CI
  UNK_0x7a6c(); // UNK_0x7a6c
  D_eq_(); // D=
}


// ================================================
// 0x7a97: WORD '>C+' codep=0x224c parp=0x7a9f
// ================================================

void _gt_C_plus_() // >C+
{
  SET_dash_CUR(); // SET-CUR
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C(); // >C
}


// ================================================
// 0x7aa9: WORD 'INEXT' codep=0x224c parp=0x7ab3
// ================================================

void INEXT() // INEXT
{
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  UNK_0x7502(); // UNK_0x7502
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7ac1: WORD 'IPREV' codep=0x224c parp=0x7acb
// ================================================

void IPREV() // IPREV
{
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  UNK_0x750a(); // UNK_0x750a
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7ad9: WORD 'IFIRST' codep=0x224c parp=0x7ae4
// ================================================

void IFIRST() // IFIRST
{
  CDROP(); // CDROP
  UNK_0x7a6c(); // UNK_0x7a6c
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7aec: WORD 'ILAST' codep=0x224c parp=0x7af6
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
  Push(Read16(cc_UNK_0x50fe)); // UNK_0x50fe
  Push(pp_UNK_0x5638); // UNK_0x5638
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7b0d: WORD '>V' codep=0x7b14 parp=0x7b14
// ================================================
// 0x7b14: mov    bx,[5638]
// 0x7b18: pop    word ptr [bx]
// 0x7b1a: sub    word ptr [5638],02
// 0x7b1f: lodsw
// 0x7b20: mov    bx,ax
// 0x7b22: jmp    word ptr [bx]

// ================================================
// 0x7b24: WORD 'V>' codep=0x7b2b parp=0x7b2b
// ================================================
// 0x7b2b: add    word ptr [5638],02
// 0x7b30: mov    bx,[5638]
// 0x7b34: push   word ptr [bx]
// 0x7b36: lodsw
// 0x7b37: mov    bx,ax
// 0x7b39: jmp    word ptr [bx]

// ================================================
// 0x7b3b: WORD 'VI' codep=0x7b42 parp=0x7b42
// ================================================
// 0x7b42: mov    bx,[5638]
// 0x7b46: push   word ptr [bx+02]
// 0x7b49: lodsw
// 0x7b4a: mov    bx,ax
// 0x7b4c: jmp    word ptr [bx]
// 0x7b4e: db 0x4c 0x22 0xb8 0x77 0xde 0x56 0xae 0x0b 0xc8 0x0d 0xfa 0x15 0x14 0x00 0x20 0x0f 0xb8 0x15 0x50 0x0e 0x05 0x10 0x00 0x77 0xd4 0x77 0xd0 0x15 0xf6 0xff 0xa0 0x79 0x90 0x16 'L" w V            P    w w     y  '

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
// 0x7b9f: WORD 'IINSERT' codep=0x224c parp=0x7bab
// ================================================

void IINSERT() // IINSERT
{
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    UNK_0x7512(); // UNK_0x7512
    _2SWAP(); // 2SWAP
    UNK_0x74e0(); // UNK_0x74e0
    IOPEN(); // IOPEN
    UNK_0x74d0(); // UNK_0x74d0
    CI(); // CI
    INEXT(); // INEXT
    UNK_0x750a(); // UNK_0x750a
    _2SWAP(); // 2SWAP
    UNK_0x74d8(); // UNK_0x74d8
    IPREV(); // IPREV
    UNK_0x74d8(); // UNK_0x74d8
    CI(); // CI
    IPREV(); // IPREV
    UNK_0x74d0(); // UNK_0x74d0
  } else
  {
    UNK_0x74e0(); // UNK_0x74e0
    IOPEN(); // IOPEN
    CI(); // CI
    UNK_0x74d0(); // UNK_0x74d0
    CI(); // CI
    UNK_0x74d8(); // UNK_0x74d8
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7be7: WORD '<INSERT' codep=0x224c parp=0x7bf3
// ================================================

void _st_INSERT() // <INSERT
{
  _gt_C_plus_S(); // >C+S
  UNK_0x750a(); // UNK_0x750a
  _2SWAP(); // 2SWAP
  UNK_0x74d8(); // UNK_0x74d8
  CI(); // CI
  IPREV(); // IPREV
  UNK_0x74d0(); // UNK_0x74d0
  UNK_0x74d8(); // UNK_0x74d8
  CI(); // CI
  IPREV(); // IPREV
  UNK_0x74d0(); // UNK_0x74d0
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7c0d: WORD '>INSERT' codep=0x224c parp=0x7c19
// ================================================

void _gt_INSERT() // >INSERT
{
  _gt_C_plus_S(); // >C+S
  UNK_0x7502(); // UNK_0x7502
  ICLOSE(); // ICLOSE
  _st_INSERT(); // <INSERT
}


// ================================================
// 0x7c23: WORD 'IEXTRAC' codep=0x224c parp=0x7c2f
// ================================================

void IEXTRAC() // IEXTRAC
{
  CI(); // CI
  UNK_0x7635(); // UNK_0x7635
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
    Push2Words("NULL");
    UNK_0x74e0(); // UNK_0x74e0
    IOPEN(); // IOPEN
    return;
  }
  IsFIRST(); // ?FIRST
  if (Pop() != 0)
  {
    UNK_0x750a(); // UNK_0x750a
    UNK_0x7502(); // UNK_0x7502
    ICLOSE(); // ICLOSE
    UNK_0x74e0(); // UNK_0x74e0
    IOPEN(); // IOPEN
    UNK_0x74d8(); // UNK_0x74d8
    CI(); // CI
    IPREV(); // IPREV
    UNK_0x74d0(); // UNK_0x74d0
    INEXT(); // INEXT
    return;
  }
  UNK_0x7502(); // UNK_0x7502
  IPREV(); // IPREV
  UNK_0x74d0(); // UNK_0x74d0
  CI(); // CI
  INEXT(); // INEXT
  UNK_0x74d8(); // UNK_0x74d8
}


// ================================================
// 0x7c6f: WORD 'UNK_0x7c71' codep=0x224c parp=0x7c71
// ================================================

void UNK_0x7c71() // UNK_0x7c71
{
  Push2Words("VANEWSP");
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7c77: WORD '@NEWSPA' codep=0x224c parp=0x7c83
// ================================================

void GetNEWSPA() // @NEWSPA
{
  UNK_0x7c71(); // UNK_0x7c71
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7c89: WORD '!NEWSPA' codep=0x224c parp=0x7c95
// ================================================

void StoreNEWSPA() // !NEWSPA
{
  UNK_0x7c71(); // UNK_0x7c71
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0x7c9b: WORD 'UNK_0x7c9d' codep=0x224c parp=0x7c9d
// ================================================

void UNK_0x7c9d() // UNK_0x7c9d
{
  GetNEWSPA(); // @NEWSPA
  ROT(); // ROT
  M_plus_(); // M+
  StoreNEWSPA(); // !NEWSPA
}


// ================================================
// 0x7ca7: WORD 'MAXSPAC' codep=0x224c parp=0x7cb3
// ================================================

void MAXSPAC() // MAXSPAC
{
  Push2Words("VANEWSP");
  Push(0x0003); Push(0x0000);
  D_plus_(); // D+
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7cc1: WORD 'UNK_0x7cc3' codep=0x224c parp=0x7cc3
// ================================================

void UNK_0x7cc3() // UNK_0x7cc3
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
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
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
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  EXECUTE(); // EXECUTE
  SWAP(); // SWAP
  FLD_ex_(); // FLD! case
}

// 0x7d39: db 0x4c 0x22 0x7f 0x0e 0x0d 0x7d 0x7f 0x0e 0x5f 0x12 0x90 0x16 'L"  } _   '

// ================================================
// 0x7d45: WORD '?CLASS/' codep=0x224c parp=0x7d51 params=4 returns=1
// ================================================

void IsCLASS_slash_() // ?CLASS/
{
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  GetINST_dash_C(); // @INST-C
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  GetINST_dash_S(); // @INST-S
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0x7d71: WORD 'UNK_0x7d73' codep=0x224c parp=0x7d73 params=0 returns=0
// ================================================

void UNK_0x7d73() // UNK_0x7d73
{
  Push(pp_UNK_0x56b2); // UNK_0x56b2
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d79: WORD 'UNK_0x7d7b' codep=0x224c parp=0x7d7b params=0 returns=0
// ================================================

void UNK_0x7d7b() // UNK_0x7d7b
{
  Push(pp__i__ask_EXIT); // '?EXIT
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d81: WORD 'UNK_0x7d83' codep=0x224c parp=0x7d83 params=0 returns=0
// ================================================

void UNK_0x7d83() // UNK_0x7d83
{
  Push(pp__i_TRAVER); // 'TRAVER
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d89: WORD 'MAP' codep=0x224c parp=0x7d91 params=0 returns=0
// ================================================

void MAP() // MAP
{
  Push(pp__i_MAP); // 'MAP
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d97: WORD 'UNK_0x7d99' codep=0x224c parp=0x7d99 params=2 returns=0
// ================================================

void UNK_0x7d99() // UNK_0x7d99
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  _gt_V(); // >V
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7da3: WORD 'UNK_0x7da5' codep=0x224c parp=0x7da5 params=1 returns=0
// ================================================

void UNK_0x7da5() // UNK_0x7da5
{
  V_gt_(); // V>
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7dad: WORD 'SELECT' codep=0x224c parp=0x7db8 params=3 returns=1
// ================================================

void SELECT() // SELECT
{
  Push(0);
  _gt_V(); // >V

  label2:
  UNK_0x7d73(); // UNK_0x7d73
  UNK_0x7d7b(); // UNK_0x7d7b
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0x7d83(); // UNK_0x7d83
  V_gt_(); // V>
  Pop(); // DROP
  Push(1);
  _gt_V(); // >V
  goto label2;

  label1:
  UNK_0x7d7b(); // UNK_0x7d7b
  if (Pop() == 0) Push(1); else Push(0); // NOT
  V_gt_(); // V>
  Pop(); // DROP
}


// ================================================
// 0x7de0: WORD '?>FIRST' codep=0x224c parp=0x7dec
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
// 0x7df8: WORD 'SELECT-' codep=0x224c parp=0x7e04 params=6 returns=1
// ================================================

void SELECT_dash_() // SELECT-
{
  unsigned short int a;
  Push(pp_UNK_0x56b2); // UNK_0x56b2
  UNK_0x7d99(); // UNK_0x7d99
  Push(0x7dec); // probable '?>FIRST'
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7d99(); // UNK_0x7d99
  Push(0x7ab3); // probable 'INEXT'
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7d99(); // UNK_0x7d99
  SELECT(); // SELECT
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7da5(); // UNK_0x7da5
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7da5(); // UNK_0x7da5
  Push(pp_UNK_0x56b2); // UNK_0x56b2
  UNK_0x7da5(); // UNK_0x7da5
  a = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(a); // R>
}

// 0x7e2e: db 0x4c 0x22 0x02 0x7e 0xb4 0x0d 0x32 0x0e 0x90 0x0e 0x90 0x16 'L" ~  2     '

// ================================================
// 0x7e3a: WORD 'UNK_0x7e3c' codep=0x224c parp=0x7e3c params=5 returns=1
// ================================================

void UNK_0x7e3c() // UNK_0x7e3c
{
  Push(0x7d3b);
  SELECT_dash_(); // SELECT-
}


// ================================================
// 0x7e44: WORD 'IFIND' codep=0x224c parp=0x7e4e params=5 returns=1
// ================================================

void IFIND() // IFIND
{
  Push(0x7d51); // probable '?CLASS/'
  SELECT_dash_(); // SELECT-
}


// ================================================
// 0x7e56: WORD 'UNK_0x7e58' codep=0x224c parp=0x7e58
// ================================================

void UNK_0x7e58() // UNK_0x7e58
{
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    UNK_0x7e58(); // UNK_0x7e58
    MAP(); // MAP
    UNK_0x7d83(); // UNK_0x7d83
    UNK_0x7d7b(); // UNK_0x7d7b
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
    UNK_0x7d83(); // UNK_0x7d83
    UNK_0x7d7b(); // UNK_0x7d7b
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7e94: WORD 'MAKE1ST' codep=0x224c parp=0x7ea0
// ================================================

void MAKE1ST() // MAKE1ST
{
  IsFIRST(); // ?FIRST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  IEXTRAC(); // IEXTRAC
  CI_i_(); // CI'
  IINSERT(); // IINSERT
  IFIRST(); // IFIRST
}


// ================================================
// 0x7eb2: WORD 'UNK_0x7eb4' codep=0x224c parp=0x7eb4
// ================================================

void UNK_0x7eb4() // UNK_0x7eb4
{
  Push2Words("INACTIV");
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x74a0); // probable 'INST-SP'
    SWAP(); // SWAP
    UNK_0x7e3c(); // UNK_0x7e3c
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
// 0x7ee6: WORD '>INACTI' codep=0x224c parp=0x7ef2
// ================================================

void _gt_INACTI() // >INACTI
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(pp_IBFR); // IBFR
  Push(Read16(Pop())); // @
  Push(3);
  _dash_(); // -
  Push(Read16(cc_IHEADLE)); // IHEADLE
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  StoreINST_dash_S(); // !INST-S
  CDROP(); // CDROP
  UNK_0x7eb4(); // UNK_0x7eb4
}

// 0x7f0c: db 0x4c 0x22 0x2d 0x7c 0xf0 0x7e 0x90 0x16 'L"-| ~  '

// ================================================
// 0x7f14: WORD 'IDELETE' codep=0x224c parp=0x7f20
// ================================================

void IDELETE() // IDELETE
{
  Push(0x7f0e);
  Push(pp__i_MAP); // 'MAP
  UNK_0x7d99(); // UNK_0x7d99
  Push(0x7609); // probable '?NULL'
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7d99(); // UNK_0x7d99
  Push(0x3a48); // probable 'NOP'
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7d99(); // UNK_0x7d99
  UNK_0x7e58(); // UNK_0x7e58
  MAP(); // MAP
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7da5(); // UNK_0x7da5
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7da5(); // UNK_0x7da5
  Push(pp__i_MAP); // 'MAP
  UNK_0x7da5(); // UNK_0x7da5
}


// ================================================
// 0x7f4a: WORD 'UNK_0x7f4c' codep=0x224c parp=0x7f4c
// ================================================

void UNK_0x7f4c() // UNK_0x7f4c
{
  Push(pp__i_MAP); // 'MAP
  UNK_0x7d99(); // UNK_0x7d99
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7d99(); // UNK_0x7d99
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7d99(); // UNK_0x7d99
  Push(pp_UNK_0x56b2); // UNK_0x56b2
  UNK_0x7d99(); // UNK_0x7d99
  IFIRST(); // IFIRST
  do
  {
    SELECT(); // SELECT
    if (Pop() != 0)
    {
      MAP(); // MAP
      UNK_0x7d83(); // UNK_0x7d83
      IsFIRST(); // ?FIRST
    } else
    {
      Push(1);
    }
  } while(Pop() == 0);
  Push(pp_UNK_0x56b2); // UNK_0x56b2
  UNK_0x7da5(); // UNK_0x7da5
  Push(pp__i__ask_EXIT); // '?EXIT
  UNK_0x7da5(); // UNK_0x7da5
  Push(pp__i_TRAVER); // 'TRAVER
  UNK_0x7da5(); // UNK_0x7da5
  Push(pp__i_MAP); // 'MAP
  UNK_0x7da5(); // UNK_0x7da5
}


// ================================================
// 0x7f86: WORD 'ALL' codep=0x224c parp=0x7f8e
// ================================================

void ALL() // ALL
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x761a); // probable '?-NULL'
  Push(0x7dec); // probable '?>FIRST'
  Push(0x7ab3); // probable 'INEXT'
  Push(a); // R>
  UNK_0x7f4c(); // UNK_0x7f4c
}


// ================================================
// 0x7fa2: WORD 'EACH' codep=0x224c parp=0x7fab
// ================================================

void EACH() // EACH
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x7dec); // probable '?>FIRST'
  Push(0x7ab3); // probable 'INEXT'
  Push(a); // R>
  UNK_0x7f4c(); // UNK_0x7f4c
}


// ================================================
// 0x7fbb: WORD 'UNK_0x7fbd' codep=0x224c parp=0x7fbd params=0 returns=0
// ================================================

void UNK_0x7fbd() // UNK_0x7fbd
{
  Push(pp__i_THROW_dash_); // 'THROW-
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7fc3: WORD 'NULLPOI' codep=0x224c parp=0x7fcf
// ================================================

void NULLPOI() // NULLPOI
{
  Push2Words("NULL");
  UNK_0x74d0(); // UNK_0x74d0
  Push2Words("NULL");
  UNK_0x74d8(); // UNK_0x74d8
  Push2Words("NULL");
  UNK_0x74e0(); // UNK_0x74e0
}


// ================================================
// 0x7fdd: WORD 'UNK_0x7fdf' codep=0x224c parp=0x7fdf
// ================================================

void UNK_0x7fdf() // UNK_0x7fdf
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
// 0x7ff3: WORD 'UNK_0x7ff5' codep=0x224c parp=0x7ff5
// ================================================

void UNK_0x7ff5() // UNK_0x7ff5
{
  Push2Words("INACTIV");
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x74a0); // probable 'INST-SP'
    OVER(); // OVER
    UNK_0x7e3c(); // UNK_0x7e3c
    if (Pop() != 0)
    {
      Push(pp_UNK_0x5fe6); // UNK_0x5fe6
      ON_1(); // ON_1
      MAKE1ST(); // MAKE1ST
      UNK_0x7fdf(); // UNK_0x7fdf
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
// 0x8029: WORD 'UNK_0x802b' codep=0x224c parp=0x802b
// ================================================

void UNK_0x802b() // UNK_0x802b
{
  unsigned short int a;
  UNK_0x7cc3(); // UNK_0x7cc3
  Push(Read16(cc_IHEADLE)); // IHEADLE
  _gt_(); // >
  if (Pop() != 0)
  {
    UNK_0x7cc3(); // UNK_0x7cc3
    Push(Read16(cc_IHEADLE)); // IHEADLE
    _dash_(); // -
    Push(Pop()-1); // 1-
    GetNEWSPA(); // @NEWSPA
    VA_gt_BUF(); // VA>BUF
    a = Pop(); // >R
    Push(a); // I
    Push(0x000b);
    Push(Pop() + Pop()); // +
    C_ex__2(); // C!_2
    Push(0x0030);
    Push(a); // R>
    Push(9);
    Push(Pop() + Pop()); // +
    C_ex__2(); // C!_2
    GetNEWSPA(); // @NEWSPA
    _gt_C_plus_S(); // >C+S
    NULLPOI(); // NULLPOI
    CI(); // CI
    ICLOSE(); // ICLOSE
    _gt_INACTI(); // >INACTI
  }
  UNK_0x7cc3(); // UNK_0x7cc3
  UNK_0x7c9d(); // UNK_0x7c9d
}


// ================================================
// 0x806b: WORD '?>MAXSP' codep=0x224c parp=0x8077
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
// 0x808b: WORD 'UNK_0x808d' codep=0x224c parp=0x808d
// ================================================

void UNK_0x808d() // UNK_0x808d
{
  Is_gt_MAXSP(); // ?>MAXSP
  if (Pop() != 0)
  {
    Push2Words("NULL");
    _gt_C(); // >C
    return;
  }
  UNK_0x7cc3(); // UNK_0x7cc3
  OVER(); // OVER
  Push(Read16(cc_IHEADLE)); // IHEADLE
  Push(Pop() + Pop()); // +
  _st_(); // <
  if (Pop() != 0)
  {
    UNK_0x802b(); // UNK_0x802b
  }
  GetNEWSPA(); // @NEWSPA
  _gt_C(); // >C
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_IHEADLE)); // IHEADLE
  Push(Pop() + Pop()); // +
  UNK_0x7c9d(); // UNK_0x7c9d
  Is_gt_MAXSP(); // ?>MAXSP
  if (Pop() == 0) return;
  CDROP(); // CDROP
  Push2Words("NULL");
  _gt_C(); // >C
}


// ================================================
// 0x80c5: WORD 'UNK_0x80c7' codep=0x224c parp=0x80c7
// ================================================

void UNK_0x80c7() // UNK_0x80c7
{
  do
  {
    Push(pp_UNK_0x5fe6); // UNK_0x5fe6
    OFF_2(); // OFF_2
    Push(pp_UNK_0x5efa); // UNK_0x5efa
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      UNK_0x7ff5(); // UNK_0x7ff5
    } else
    {
      UNK_0x808d(); // UNK_0x808d
    }
    IsNULL(); // ?NULL
    if (Pop() != 0)
    {
      CDROP(); // CDROP
      Push(pp_UNK_0x5efa); // UNK_0x5efa
      Push(Read16(Pop())); // @
      if (Pop() != 0)
      {
        UNK_0x808d(); // UNK_0x808d
      } else
      {
        UNK_0x7ff5(); // UNK_0x7ff5
      }
      IsNULL(); // ?NULL
      if (Pop() != 0)
      {
        UNK_0x7fbd(); // UNK_0x7fbd
      }
    }
    IsNULL(); // ?NULL
    if (Pop() == 0) return;
    CDROP(); // CDROP
  } while(1);
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
// 0x8159: WORD 'VICREAT' codep=0x224c parp=0x8165
// ================================================

void VICREAT() // VICREAT
{
  unsigned short int a;
  Push(pp_UNK_0x5efa); // UNK_0x5efa
  OFF_2(); // OFF_2
  Push(Read16(regsp)); // DUP
  Push(0x00fe);
  _gt_(); // >
  IsUNRAVEL(); // ?UNRAVEL
  Push(Pop()+1); // 1+
  UNK_0x80c7(); // UNK_0x80c7
  Push(Pop()-1); // 1-
  CI(); // CI
  VA_gt_BUF(); // VA>BUF
  a = Pop(); // >R
  Push(a); // I
  Push(0x000b);
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
  Push(0x0030);
  Push(a); // R>
  Push(9);
  Push(Pop() + Pop()); // +
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
  Push(pp_UNK_0x5efa); // UNK_0x5efa
  Push(3);
  PICK(); // PICK
  SET_ask_REU(); // SET?REU case
  OVER(); // OVER
  Func6("FILE-SL");
  Push(Read8(Pop())&0xFF); // C@
  UNK_0x80c7(); // UNK_0x80c7
  Pop(); // DROP
  Push(pp_UNK_0x5fe6); // UNK_0x5fe6
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
    C_ex__2(); // C!_2
    Push(a); // R>
    Push(9);
    Push(Pop() + Pop()); // +
    C_ex__2(); // C!_2
    SET_dash_CUR(); // SET-CUR
  } else
  {
    SET_dash_CUR(); // SET-CUR
    StoreINST_dash_S(); // !INST-S
    UNK_0x74e8(); // UNK_0x74e8
  }
  NULLPOI(); // NULLPOI
  CI(); // CI
  ICLOSE(); // ICLOSE
}


