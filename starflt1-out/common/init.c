
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
extern const unsigned short int cc_INITIAL_dash_DPB; // INITIAL-DPB
extern const unsigned short int cc_PSW; // PSW
extern const unsigned short int cc_DS; // DS
extern const unsigned short int pp_OPERATOR; // OPERATOR
extern const unsigned short int pp__i_SETUP_plus_; // 'SETUP+
extern const unsigned short int pp_BOOT_dash_HOOK; // BOOT-HOOK
extern const unsigned short int pp_BOOT_dash_LOAD; // BOOT-LOAD
extern const unsigned short int user_DP; // DP
extern const unsigned short int user_CONTEXT_2; // CONTEXT_2
void AUTO_dash_CACHE(); // AUTO-CACHE
void AUTO_dash_LIMIT(); // AUTO-LIMIT
void AUTO_dash_SCREEN(); // AUTO-SCREEN
void UNK_0x0343(); // UNK_0x0343
void UNK_0x03c3(); // UNK_0x03c3
void SET_dash_BUFFERS(); // SET-BUFFERS
void FREEZE(); // FREEZE
void _i_FORTH(); // 'FORTH
void DEFINITIONS(); // DEFINITIONS
void _ro__ex_SET_rc_(); // (!SET)
void _ro__ex_OLD_rc_(); // (!OLD)
void SET0_slash_(); // SET0/
void Store(); // !
void _ro_CS_ask__rc_(); // (CS?)
void _2_ex__2(); // 2!_2
void _2_at_(); // 2@
void CMOVE_2(); // CMOVE_2
void RP_ex_(); // RP!
void SP_ex_(); // SP!
void EXECUTE(); // EXECUTE


// =================================
// =========== VARIABLES ===========
// =================================




// ================================================
// 0x08d1: WORD '(SETUP)' codep=0x224c parp=0x08dd params=0 returns=0
// ================================================

void _ro_SETUP_rc_() // (SETUP)
{
  Push(0x01b8);
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0x001b);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(0x01b8);
  _2_ex__2(); // 2!_2
  _ro_CS_ask__rc_(); // (CS?)
  Push(0x08a0);
  Push(0x001b);
  _ro__ex_SET_rc_(); // (!SET)
  Push(0x001c);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(0x01bc);
  _2_ex__2(); // 2!_2
  _ro_CS_ask__rc_(); // (CS?)
  Push(0x018e);
  Push(0x001c);
  _ro__ex_SET_rc_(); // (!SET)
  Push(0);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(0x01c0);
  _2_ex__2(); // 2!_2
  SET0_slash_(); // SET0/
  Push(pp__i_SETUP_plus_); // 'SETUP+
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  EXECUTE(); // EXECUTE
}


// ================================================
// 0x0937: WORD 'UNK_0x0939' codep=0x224c parp=0x0939
// ================================================

void UNK_0x0939() // UNK_0x0939
{
  _ro_SETUP_rc_(); // (SETUP)
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(cc_DS)); // DS
  Store(); // !
  Push(0xf2d2);
  Push(Read16(cc_PSW)); // PSW
  Store(); // !
  Push(0x0701);
  Push(pp_OPERATOR); // OPERATOR
  Push(0x0074);
  CMOVE_2(); // CMOVE_2
  Push(user_DP); // DP
  Push(Read16(Pop())); // @
  Push(Read16(cc_INITIAL_dash_DPB)); // INITIAL-DPB
  Store(); // !
  _i_FORTH(); // 'FORTH
  Push(user_CONTEXT_2); // CONTEXT_2
  Store(); // !
  DEFINITIONS(); // DEFINITIONS
  FREEZE(); // FREEZE
  AUTO_dash_LIMIT(); // AUTO-LIMIT
  AUTO_dash_CACHE(); // AUTO-CACHE
  SP_ex_(); // SP!
  RP_ex_(); // RP!
  SET_dash_BUFFERS(); // SET-BUFFERS
  AUTO_dash_SCREEN(); // AUTO-SCREEN
  UNK_0x0343(); // UNK_0x0343
  Push(pp_BOOT_dash_HOOK); // BOOT-HOOK
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    EXECUTE(); // EXECUTE
  }
  Push(pp_BOOT_dash_LOAD); // BOOT-LOAD
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Exec("LOAD_2"); // call of word 0x1e23 '(LOAD)'
  }
  UNK_0x03c3(); // UNK_0x03c3
  Exec("ABORT"); // call of word 0x1c45 '(ABORT)'
}


