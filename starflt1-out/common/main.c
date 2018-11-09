
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
extern const unsigned short int pp_TIMESTAMP; // TIMESTAMP
extern const unsigned short int pp_RELAXTIME; // RELAXTIME
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
void Store_3(); // !_3
void ON_3(); // ON_3
void OFF(); // OFF
void MOUNTA(); // MOUNTA
void LDFONTS(); // LDFONTS
void STARTER(); // STARTER
void STARTGAME(); // STARTGAME


// =================================
// =========== VARIABLES ===========
// =================================




// ================================================
// 0xd47e: WORD 'LET-THERE-BE-STARFLIGHT' codep=0x224c wordp=0xd489
// ================================================

void LET_dash_THERE_dash_BE_dash_STARFLIGHT() // LET-THERE-BE-STARFLIGHT
{
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF(); // OFF
  STARTER(); // STARTER
  Push(pp_RELAXTIME); // RELAXTIME
  ON_3(); // ON_3
  MOUNTA(); // MOUNTA
  LDFONTS(); // LDFONTS
  SIGFLD(":TIMESTAMP");
  Push(Read16(Pop())); //  @
  Push(pp_TIMESTAMP); // TIMESTAMP
  Store_3(); // !_3
  Push(pp_RELAXTIME); // RELAXTIME
  OFF(); // OFF
  STARTGAME(); // STARTGAME
}

// 0xd4a7: db 0x00 ' '

