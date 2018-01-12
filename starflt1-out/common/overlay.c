
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
extern const unsigned short int pp_TRAK_dash_HR; // TRAK-HR
extern const unsigned short int pp_REPAIRT; // REPAIRT
extern const unsigned short int pp_IsREPAIR; // ?REPAIR
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_SKIP2NEST; // SKIP2NEST
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_LASTREP; // LASTREP
extern const unsigned short int pp_VSTIME; // VSTIME
extern const unsigned short int pp_LSCAN; // LSCAN
void ABS(); // ABS
void DABS(); // DABS
void D_dash_(); // D-
void D_gt_(); // D>
void WITHIN(); // WITHIN
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _2_ex_(); // 2!
void OFF(); // OFF
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void OV_dash_CANCEL(); // OV-CANCEL
void SAVE_dash_OVERLAY(); // SAVE-OVERLAY
void CTINIT(); // CTINIT
void _2_at_(); // 2@
void OVER(); // OVER
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _0_gt_(); // 0>
void EXECUTE(); // EXECUTE
void TIME(); // TIME


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_BTADDR = 0xbb98; // BTADDR size: 2
// {0xb1, 0xbc}

const unsigned short int pp_UNK_0xbb9c = 0xbb9c; // UNK_0xbb9c size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xbba0 = 0xbba0; // UNK_0xbba0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xbba4 = 0xbba4; // UNK_0xbba4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xbba8 = 0xbba8; // UNK_0xbba8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_HEALTI = 0xbfaf; // HEALTI size: 2
// {0x20, 0x45}

const unsigned short int pp_LASTAP = 0xbfbc; // LASTAP size: 4
// {0x49, 0x4e, 0x54, 0x20}

const unsigned short int pp_ROSTER = 0xbfcb; // ROSTER size: 18
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}

const unsigned short int pp_IsFANLYZ = 0xc7bd; // ?FANLYZ size: 2
// {0x00, 0x00}

const unsigned short int pp_IsCALLING = 0xc96d; // ?CALLING size: 2
// {0x01, 0x00}


const unsigned short int cc_UNK_0xbbac = 0xbbac; // UNK_0xbbac
const unsigned short int cc_UNK_0xbbb0 = 0xbbb0; // UNK_0xbbb0
const unsigned short int cc_UNK_0xbbb4 = 0xbbb4; // UNK_0xbbb4



// ================================================
// 0xba1f: WORD 'IT-VOC' codep=0x1ab5 parp=0xba2a
// ================================================
// 0xba2a: db 0x38 0xba 0x7f 0xb5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '8                  '

// ================================================
// 0xba3e: WORD 'IT-OV' codep=0x83f8 parp=0xba48
// ================================================
// Overlay IT_dash_OV = 0x93b3

// ================================================
// 0xba4a: WORD 'UNK_0xba4c' codep=0x224c parp=0xba4c
// ================================================

void UNK_0xba4c() // UNK_0xba4c
{
  LoadOverlay(IT_dash_OV); // IT-OV
  DATE_do__gt_ADR(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba54: WORD 'UNK_0xba56' codep=0x224c parp=0xba56
// ================================================

void UNK_0xba56() // UNK_0xba56
{
  LoadOverlay(IT_dash_OV); // IT-OV
  BOX_gt_LIST(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba5e: WORD 'UNK_0xba60' codep=0x224c parp=0xba60
// ================================================

void UNK_0xba60() // UNK_0xba60
{
  LoadOverlay(IT_dash_OV); // IT-OV
  GET_dash_BOXES(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba68: WORD 'UNK_0xba6a' codep=0x224c parp=0xba6a
// ================================================

void UNK_0xba6a() // UNK_0xba6a
{
  LoadOverlay(IT_dash_OV); // IT-OV
  MAKE_dash_SCROLL_dash_BOX(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba72: WORD 'UNK_0xba74' codep=0x224c parp=0xba74
// ================================================

void UNK_0xba74() // UNK_0xba74
{
  LoadOverlay(IT_dash_OV); // IT-OV
  DELETE_dash_SCROLL_dash_BOX(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba7c: WORD 'UNK_0xba7e' codep=0x224c parp=0xba7e
// ================================================

void UNK_0xba7e() // UNK_0xba7e
{
  LoadOverlay(IT_dash_OV); // IT-OV
  BOX_gt_TOCS(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba86: WORD 'UNK_0xba88' codep=0x224c parp=0xba88
// ================================================

void UNK_0xba88() // UNK_0xba88
{
  LoadOverlay(IT_dash_OV); // IT-OV
  _gt_BOX(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba90: WORD 'UNK_0xba92' codep=0x224c parp=0xba92
// ================================================

void UNK_0xba92() // UNK_0xba92
{
  LoadOverlay(IT_dash_OV); // IT-OV
  BOX_gt_(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xba9a: WORD 'UNK_0xba9c' codep=0x224c parp=0xba9c
// ================================================

void UNK_0xba9c() // UNK_0xba9c
{
  LoadOverlay(IT_dash_OV); // IT-OV
  _ro_BOX_gt__rc_(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xbaa4: WORD 'UNK_0xbaa6' codep=0x224c parp=0xbaa6
// ================================================

void UNK_0xbaa6() // UNK_0xbaa6
{
  LoadOverlay(IT_dash_OV); // IT-OV
  CLASS_gt_BOX_dash_SPEC(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xbaae: WORD 'UNK_0xbab0' codep=0x224c parp=0xbab0
// ================================================

void UNK_0xbab0() // UNK_0xbab0
{
  LoadOverlay(IT_dash_OV); // IT-OV
  ITEM_gt_PAD(); // Overlay IT-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xbab8: WORD 'DATE$>ADR' codep=0x224c parp=0xbac4 params=0 returns=0
// ================================================

void DATE_do__gt_ADR() // DATE$>ADR
{
  Push(0xba4c); // probable 'UNK_0xba4c'
  MODULE(); // MODULE
}


// ================================================
// 0xbacc: WORD 'BOX>LIS' codep=0x224c parp=0xbad8 params=0 returns=0
// ================================================

void BOX_gt_LIS() // BOX>LIS
{
  Push(0xba56); // probable 'UNK_0xba56'
  MODULE(); // MODULE
}


// ================================================
// 0xbae0: WORD 'GET-BOX' codep=0x224c parp=0xbaec params=0 returns=0
// ================================================

void GET_dash_BOX() // GET-BOX
{
  Push(0xba60); // probable 'UNK_0xba60'
  MODULE(); // MODULE
}


// ================================================
// 0xbaf4: WORD 'MAKE-SC' codep=0x224c parp=0xbb00 params=0 returns=0
// ================================================

void MAKE_dash_SC() // MAKE-SC
{
  Push(0xba6a); // probable 'UNK_0xba6a'
  MODULE(); // MODULE
}


// ================================================
// 0xbb08: WORD 'delete-scroll-box' codep=0x224c parp=0xbb14 params=0 returns=0
// ================================================

void delete_dash_scroll_dash_box() // delete-scroll-box
{
  Push(0xba74); // probable 'UNK_0xba74'
  MODULE(); // MODULE
}


// ================================================
// 0xbb1c: WORD 'BOX>TOC' codep=0x224c parp=0xbb28 params=0 returns=0
// ================================================

void BOX_gt_TOC() // BOX>TOC
{
  Push(0xba7e); // probable 'UNK_0xba7e'
  MODULE(); // MODULE
}


// ================================================
// 0xbb30: WORD '>BOX' codep=0x224c parp=0xbb39 params=0 returns=0
// ================================================

void _gt_BOX() // >BOX
{
  Push(0xba88); // probable 'UNK_0xba88'
  MODULE(); // MODULE
}


// ================================================
// 0xbb41: WORD 'BOX>' codep=0x224c parp=0xbb4a params=0 returns=0
// ================================================

void BOX_gt_() // BOX>
{
  Push(0xba92); // probable 'UNK_0xba92'
  MODULE(); // MODULE
}


// ================================================
// 0xbb52: WORD '(BOX>)' codep=0x224c parp=0xbb5d params=0 returns=0
// ================================================

void _ro_BOX_gt__rc_() // (BOX>)
{
  Push(0xba9c); // probable 'UNK_0xba9c'
  MODULE(); // MODULE
}


// ================================================
// 0xbb65: WORD 'CLASS>B' codep=0x224c parp=0xbb71 params=0 returns=0
// ================================================

void CLASS_gt_B() // CLASS>B
{
  Push(0xbaa6); // probable 'UNK_0xbaa6'
  MODULE(); // MODULE
}


// ================================================
// 0xbb79: WORD 'ITEM>PA' codep=0x224c parp=0xbb85 params=0 returns=0
// ================================================

void ITEM_gt_PA() // ITEM>PA
{
  Push(0xbab0); // probable 'UNK_0xbab0'
  MODULE(); // MODULE
}


// ================================================
// 0xbb8d: WORD 'BTADDR' codep=0x1d29 parp=0xbb98
// ================================================
// 0xbb98: db 0xb1 0xbc '  '

// ================================================
// 0xbb9a: WORD 'UNK_0xbb9c' codep=0x1d29 parp=0xbb9c
// ================================================
// 0xbb9c: db 0x3a 0x20 ': '

// ================================================
// 0xbb9e: WORD 'UNK_0xbba0' codep=0x1d29 parp=0xbba0
// ================================================
// 0xbba0: db 0x3a 0x20 ': '

// ================================================
// 0xbba2: WORD 'UNK_0xbba4' codep=0x1d29 parp=0xbba4
// ================================================
// 0xbba4: db 0x3a 0x20 ': '

// ================================================
// 0xbba6: WORD 'UNK_0xbba8' codep=0x1d29 parp=0xbba8
// ================================================
// 0xbba8: db 0x3a 0x20 ': '

// ================================================
// 0xbbaa: WORD 'UNK_0xbbac' codep=0x2214 parp=0xbbac
// ================================================
// 0xbbac: dw 0xbc8f

// ================================================
// 0xbbae: WORD 'UNK_0xbbb0' codep=0x2214 parp=0xbbb0
// ================================================
// 0xbbb0: dw 0xbc87

// ================================================
// 0xbbb2: WORD 'UNK_0xbbb4' codep=0x2214 parp=0xbbb4
// ================================================
// 0xbbb4: dw 0xbca5

// ================================================
// 0xbbb6: WORD 'UNK_0xbbb8' codep=0x224c parp=0xbbb8 params=0 returns=0
// ================================================

void UNK_0xbbb8() // UNK_0xbbb8
{
  Push(Read16(pp_UNK_0xbba8)); // UNK_0xbba8 @
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0080?1:0); //  0x0080 =
  Push(pp_UNK_0xbba0); // UNK_0xbba0
  _plus__ex__2(); // +!_2
  Push(Pop() >> 1); //  2/
  Push(Read16(regsp)); // DUP
  Push((Pop()==0?1:0) * 0x0080); //  0= 0x0080 *
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xbba8); // UNK_0xbba8
  Store_3(); // !_3
}


// ================================================
// 0xbbdc: WORD 'UNK_0xbbde' codep=0x224c parp=0xbbde params=1 returns=2
// ================================================

void UNK_0xbbde() // UNK_0xbbde
{
  Push(Pop() & (Read16(pp_UNK_0xbba8)&0xFF)); //  UNK_0xbba8 C@ AND
  _0_gt_(); // 0>
  Push(Read16((Pop() + Read16(pp_BTADDR)) + Read16(pp_UNK_0xbb9c))&0xFF); //  BTADDR @ + UNK_0xbb9c @ + C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x0080); //  0x0080 AND
  if (Pop() != 0)
  {
    Push((Pop() & 0x007f) * 2); //  0x007f AND 2*
    Push(pp_UNK_0xbb9c); // UNK_0xbb9c
    _plus__ex__2(); // +!_2
  } else
  {
    Push(1);
    Push(pp_UNK_0xbba4); // UNK_0xbba4
    _plus__ex__2(); // +!_2
    Push(Read16(cc_UNK_0xbbac)); // UNK_0xbbac
    EXECUTE(); // EXECUTE
    Push(pp_UNK_0xbb9c); // UNK_0xbb9c
    OFF(); // OFF
  }
  UNK_0xbbb8(); // UNK_0xbbb8
  Push(Read16(pp_UNK_0xbba8)); // UNK_0xbba8 @
  Push(Read16(pp_UNK_0xbba8)==0x0080?1:0); // UNK_0xbba8 @ 0x0080 =
}


// ================================================
// 0xbc2c: WORD 'HUFF>' codep=0x224c parp=0xbc36 params=2 returns=0
// ================================================

void HUFF_gt_() // HUFF>
{
  Push(pp_UNK_0xbb9c); // UNK_0xbb9c
  OFF(); // OFF
  Push(pp_UNK_0xbba4); // UNK_0xbba4
  OFF(); // OFF
  Push(pp_UNK_0xbba0); // UNK_0xbba0
  OFF(); // OFF
  Push(0x0080);
  Push(pp_UNK_0xbba8); // UNK_0xbba8
  Store_3(); // !_3
  Push(Read16(cc_UNK_0xbbb0)); // UNK_0xbbb0
  EXECUTE(); // EXECUTE

  label3:
  Push(Read16(regsp)); // DUP
  Push(Read16(pp_UNK_0xbba4)); // UNK_0xbba4 @
  _gt_(); // >
  if (Pop() == 0) goto label1;
  do
  {
    OVER(); // OVER
    Push(Read16(Pop() + Read16(pp_UNK_0xbba0))&0xFF); //  UNK_0xbba0 @ + C@
    UNK_0xbbde(); // UNK_0xbbde
  } while(Pop() == 0);
  goto label3;

  label1:
  Pop(); Pop(); // 2DROP
  Push(Read16(cc_UNK_0xbbb4)); // UNK_0xbbb4
  EXECUTE(); // EXECUTE
}


// ================================================
// 0xbc76: WORD 'PHRASE$' codep=0x744d parp=0xbc82
// ================================================
IFieldType PHRASE_do_ = {STRINGIDX, 0x0b, 0x00};

// ================================================
// 0xbc85: WORD 'UNK_0xbc87' codep=0x224c parp=0xbc87 orphan params=0 returns=0
// ================================================

void UNK_0xbc87() // UNK_0xbc87
{
  Push(pp_LSCAN); // LSCAN
  OFF(); // OFF
}


// ================================================
// 0xbc8d: WORD 'UNK_0xbc8f' codep=0x224c parp=0xbc8f orphan params=1 returns=0
// ================================================

void UNK_0xbc8f() // UNK_0xbc8f
{
  Push(pp_LSCAN); // LSCAN
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
  C_ex_(); // C!
  Push(1);
  Push(pp_LSCAN); // LSCAN
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xbca3: WORD 'UNK_0xbca5' codep=0x224c parp=0xbca5 orphan params=0 returns=0
// ================================================

void UNK_0xbca5() // UNK_0xbca5
{
  Push(Read16((0x63ef+PHRASE_do_.offset) + 1)&0xFF); // PHRASE$<IFIELD> 1+ C@
  Push(pp_LSCAN); // LSCAN
  C_ex_(); // C!
}

// 0xbcb1: db 0x9c 0x81 0x96 0x81 0x81 0x20 0x83 0x81 0x81 0x48 0x59 0x43 0x82 0x81 0x4d 0x57 0x81 0x2e 0x81 0x42 0x84 0x81 0x31 0x81 0x5a 0x81 0x34 0x33 0x86 0x81 0x51 0x81 0x81 0x32 0x81 0x25 0x2b 0x81 0x23 0x28 0x81 0x3f 0x39 0x81 0x37 0x2a 0x84 0x81 0x54 0x81 0x81 0x4c 0x50 0x46 0x53 0x4f 0x8d 0x81 0x82 0x81 0x4e 0x41 0x49 0x81 0x81 0x55 0x81 0x47 0x2c 0x81 0x81 0x58 0x27 0x81 0x81 0x21 0x35 0x81 0x26 0x81 0x29 0x2f 0x81 0x45 0x81 0x52 0x81 0x44 0x81 0x56 0x4b 0x81 0x81 0x30 0x81 0x2d 0x81 0x4a 0x36 0x38 '         HYC  MW . B  1 Z 43  Q  2 %+ #( ?9 7*  T  LPFSO    NAI  U G,  X'  !5 & )/ E R D VK  0 - J68'

// ================================================
// 0xbd15: WORD 'MISC-VOC' codep=0x1ab5 parp=0xbd1f
// ================================================
// 0xbd1f: db 0x2d 0xbd 0x2c 0xba 0x7a 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '- , z               '

// ================================================
// 0xbd33: WORD 'MISC-OV' codep=0x83f8 parp=0xbd3d
// ================================================
// Overlay MISC_dash_OV = 0x7182

// ================================================
// 0xbd3f: WORD '=CARGO' codep=0x224c parp=0xbd4a
// ================================================

void _eq_CARGO() // =CARGO
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _eq_CARG(); // Overlay MISC-OV
}


// ================================================
// 0xbd50: WORD 'OV#IN$' codep=0x224c parp=0xbd5b
// ================================================

void OV_n_IN_do_() // OV#IN$
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro__n_IN_do_(); // Overlay MISC-OV
}


// ================================================
// 0xbd61: WORD 'OVQUITMESS' codep=0x224c parp=0xbd70
// ================================================

void OVQUITMESS() // OVQUITMESS
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro_QUIT(); // Overlay MISC-OV
}


// ================================================
// 0xbd76: WORD 'OV.0$$$' codep=0x224c parp=0xbd82
// ================================================

void OV_dot_0_do__do__do_() // OV.0$$$
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro__dot_0_do__do_(); // Overlay MISC-OV
}


// ================================================
// 0xbd88: WORD 'OV0$$$MESS' codep=0x224c parp=0xbd97
// ================================================

void OV0_do__do__do_MESS() // OV0$$$MESS
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro_0_do__do__do_(); // Overlay MISC-OV
}


// ================================================
// 0xbd9d: WORD 'OVTRIM' codep=0x224c parp=0xbda8
// ================================================

void OVTRIM() // OVTRIM
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro_TRIM(); // Overlay MISC-OV
}


// ================================================
// 0xbdae: WORD 'OVTRIMS' codep=0x224c parp=0xbdba
// ================================================

void OVTRIMS() // OVTRIMS
{
  unsigned short int i, imax;
  LoadOverlay(MISC_dash_OV); // MISC-OV
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _ro_TRIM(); // Overlay MISC-OV
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xbdc8: WORD 'OV?ARTIFACT' codep=0x224c parp=0xbdd8
// ================================================

void OV_ask_ARTIFACT() // OV?ARTIFACT
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro__ask_ART(); // Overlay MISC-OV
}


// ================================================
// 0xbdde: WORD 'OV?.EQUIP-OK' codep=0x224c parp=0xbdef
// ================================================

void OV_ask__dot_EQUIP_dash_OK() // OV?.EQUIP-OK
{
  LoadOverlay(MISC_dash_OV); // MISC-OV
  _ro__ask__dot_EQ(); // Overlay MISC-OV
}


// ================================================
// 0xbdf5: WORD 'ENG-VOC' codep=0x1ab5 parp=0xbe01
// ================================================
// 0xbe01: db 0x0f 0xbe 0x21 0xbd 0x0d 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  !                 '

// ================================================
// 0xbe15: WORD 'ENG-O' codep=0x83f8 parp=0xbe1f
// ================================================
// Overlay ENG_dash_O = 0x80a5

// ================================================
// 0xbe21: WORD 'OV/DA' codep=0x224c parp=0xbe2b
// ================================================

void OV_slash_DA() // OV/DA
{
  LoadOverlay(ENG_dash_O); // ENG-O
  _ro__slash_DAMAGE_rc_(); // Overlay ENGINEER
}


// ================================================
// 0xbe31: WORD 'OV/RE' codep=0x224c parp=0xbe3b
// ================================================

void OV_slash_RE() // OV/RE
{
  LoadOverlay(ENG_dash_O); // ENG-O
  _ro__slash_REPAIR_rc_(); // Overlay ENGINEER
}


// ================================================
// 0xbe41: WORD 'OVDBA' codep=0x224c parp=0xbe4b
// ================================================

void OVDBA() // OVDBA
{
  LoadOverlay(ENG_dash_O); // ENG-O
  DBARS(); // Overlay ENGINEER
}


// ================================================
// 0xbe51: WORD 'BLT-VOC' codep=0x1ab5 parp=0xbe5d
// ================================================
// 0xbe5d: db 0x6b 0xbe 0x03 0xbe 0x28 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'k   (               '

// ================================================
// 0xbe71: WORD 'BLT-OV' codep=0x83f8 parp=0xbe7c
// ================================================
// Overlay BLT_dash_OV = 0x714c

// ================================================
// 0xbe7e: WORD '.RUNBIT' codep=0x224c parp=0xbe8a
// ================================================

void DrawRUNBIT() // .RUNBIT
{
  LoadOverlay(BLT_dash_OV); // BLT-OV
  DrawRUNBIT(); // Overlay BLT-OV
}


// ================================================
// 0xbe90: WORD '@.HYBRID' codep=0x224c parp=0xbe9d
// ================================================

void Get_dot_HYBRID() // @.HYBRID
{
  LoadOverlay(BLT_dash_OV); // BLT-OV
  Get_dot_HYBRID(); // Overlay BLT-OV
}


// ================================================
// 0xbea3: WORD '.EGARUNBIT' codep=0x224c parp=0xbeb2
// ================================================

void DrawEGARUNBIT() // .EGARUNBIT
{
  LoadOverlay(BLT_dash_OV); // BLT-OV
  DrawEGARUNBIT(); // Overlay BLT-OV
}


// ================================================
// 0xbeb8: WORD 'SCI-VOC' codep=0x1ab5 parp=0xbec4
// ================================================
// 0xbec4: db 0xd2 0xbe 0x5f 0xbe 0x26 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  _ &               '

// ================================================
// 0xbed8: WORD 'SCI-OV' codep=0x83f8 parp=0xbee3
// ================================================
// Overlay SCI_dash_OV = 0x8499

// ================================================
// 0xbee5: WORD 'OV/STATUS' codep=0x224c parp=0xbef3
// ================================================

void OV_slash_STATUS() // OV/STATUS
{
  LoadOverlay(SCI_dash_OV); // SCI-OV
  _ro__slash_STATUS_rc_(); // Overlay SCIENCE
}


// ================================================
// 0xbef9: WORD 'OV/STXT' codep=0x224c parp=0xbf05
// ================================================

void OV_slash_STXT() // OV/STXT
{
  LoadOverlay(SCI_dash_OV); // SCI-OV
  DrawSTAT_dash_TEXT(); // Overlay SCIENCE
}


// ================================================
// 0xbf0b: WORD 'OVSTARDATE' codep=0x224c parp=0xbf1a
// ================================================

void OVSTARDATE() // OVSTARDATE
{
  LoadOverlay(SCI_dash_OV); // SCI-OV
  Push(0);
  DrawSTARDATE(); // Overlay SCIENCE
}


// ================================================
// 0xbf22: WORD 'OV/SENSORS' codep=0x224c parp=0xbf31
// ================================================

void OV_slash_SENSORS() // OV/SENSORS
{
  LoadOverlay(SCI_dash_OV); // SCI-OV
  _ro__slash_SENSORS_rc_(); // Overlay SCIENCE
}


// ================================================
// 0xbf37: WORD '?HEAVY' codep=0x224c parp=0xbf42
// ================================================

void IsHEAVY() // ?HEAVY
{
  LoadOverlay(SCI_dash_OV); // SCI-OV
  IsHEAVY(); // Overlay SCIENCE
}


// ================================================
// 0xbf48: WORD '/STARDATE' codep=0x224c parp=0xbf56 params=0 returns=0
// ================================================

void _slash_STARDATE() // /STARDATE
{
  Push(0xbf1a); // probable 'OVSTARDATE'
  MODULE(); // MODULE
}


// ================================================
// 0xbf5e: WORD '.SORD' codep=0x224c parp=0xbf68 params=0 returns=0
// ================================================

void DrawSORD() // .SORD
{
  Push(Read16(pp__n_AUX)); // #AUX @
  Push(Read16(regsp)); // DUP
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    Push(0xbf05); // probable 'OV/STXT'
    MODULE(); // MODULE
  }
  Push(Pop()==3?1:0); //  3 =
  if (Pop() == 0) return;
  Push(0xbe4b); // probable 'OVDBA'
  MODULE(); // MODULE
}


// ================================================
// 0xbf8c: WORD '?VCYCLE' codep=0x224c parp=0xbf98
// ================================================

void IsVCYCLE() // ?VCYCLE
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_VSTIME); // VSTIME
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xbfa4: WORD 'HEALTI' codep=0x1d29 parp=0xbfaf
// ================================================
// 0xbfaf: db 0x20 0x45 ' E'

// ================================================
// 0xbfb1: WORD 'LASTAP' codep=0x1d29 parp=0xbfbc
// ================================================
// 0xbfbc: db 0x49 0x4e 0x54 0x20 'INT '

// ================================================
// 0xbfc0: WORD 'ROSTER' codep=0x1d29 parp=0xbfcb
// ================================================
// 0xbfcb: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 '                  '

// ================================================
// 0xbfdd: WORD 'HEALER' codep=0x1ab5 parp=0xbfe8
// ================================================
// 0xbfe8: db 0xf6 0xbf 0xc6 0xbe 0x1d 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xbffc: WORD 'HEAL-O' codep=0x83f8 parp=0xc007
// ================================================
// Overlay HEAL_dash_O = 0x8eba

// ================================================
// 0xc009: WORD '(OBI' codep=0x224c parp=0xc012
// ================================================

void _ro_OBI() // (OBI
{
  LoadOverlay(HEAL_dash_O); // HEAL-O
  OBITS(); // Overlay HEAL-OV
}


// ================================================
// 0xc018: WORD '(.VI' codep=0x224c parp=0xc021
// ================================================

void _ro__dot_VI() // (.VI
{
  LoadOverlay(HEAL_dash_O); // HEAL-O
  DrawVITS(); // Overlay HEAL-OV
}


// ================================================
// 0xc027: WORD '(HEA' codep=0x224c parp=0xc030
// ================================================

void _ro_HEA() // (HEA
{
  LoadOverlay(HEAL_dash_O); // HEAL-O
  HEAL(); // Overlay HEAL-OV
}


// ================================================
// 0xc036: WORD '(ROL' codep=0x224c parp=0xc03f
// ================================================

void _ro_ROL() // (ROL
{
  LoadOverlay(HEAL_dash_O); // HEAL-O
  ROLE_dash_C(); // Overlay HEAL-OV
}


// ================================================
// 0xc045: WORD 'OBIT' codep=0x224c parp=0xc04e params=0 returns=0
// ================================================

void OBIT() // OBIT
{
  Push(0xc012); // probable '(OBI'
  MODULE(); // MODULE
}


// ================================================
// 0xc056: WORD 'HEAL' codep=0x224c parp=0xc05f params=0 returns=0
// ================================================

void HEAL() // HEAL
{
  Push(0xc030); // probable '(HEA'
  MODULE(); // MODULE
}


// ================================================
// 0xc067: WORD '.VIT' codep=0x224c parp=0xc070 params=0 returns=0
// ================================================

void DrawVIT() // .VIT
{
  Push(0xc021); // probable '(.VI'
  MODULE(); // MODULE
}


// ================================================
// 0xc078: WORD '?APP' codep=0x224c parp=0xc081
// ================================================

void IsAPP() // ?APP
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LASTAP); // LASTAP
  _2_at_(); // 2@
  Push(Read16(pp_HEALTI)); // HEALTI @
  Push(0);
  D_plus_(); // D+
  D_gt_(); // D>
  Push(Pop() & Read16(pp_IsHEAL)); //  ?HEAL @ AND
  if (Pop() != 0)
  {
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_LASTAP); // LASTAP
    _2_ex_(); // 2!
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xc0af: WORD 'REPAIR' codep=0x1ab5 parp=0xc0ba
// ================================================
// 0xc0ba: db 0xc8 0xc0 0xea 0xbf 0xd9 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc0ce: WORD 'REPAIR-' codep=0x83f8 parp=0xc0da
// ================================================
// Overlay REPAIR_dash_ = 0x8f07

// ================================================
// 0xc0dc: WORD 'DO-REPA' codep=0x224c parp=0xc0e8
// ================================================

void DO_dash_REPA() // DO-REPA
{
  LoadOverlay(REPAIR_dash_); // REPAIR-
  DO_dash_REPA(); // Overlay REPAIR-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LASTREP); // LASTREP
  _2_ex_(); // 2!
}


// ================================================
// 0xc0f8: WORD '?SHIP-REPAIR' codep=0x224c parp=0xc104
// ================================================

void IsSHIP_dash_REPAIR() // ?SHIP-REPAIR
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LASTREP); // LASTREP
  _2_at_(); // 2@
  D_dash_(); // D-
  DABS(); // DABS
  Push(Read16(pp_REPAIRT)); // REPAIRT @
  Push(0);
  D_gt_(); // D>
  Push(Pop() & Read16(pp_IsREPAIR)); //  ?REPAIR @ AND
  Push(Read16(pp_IsREPAIR) | (Read16(pp_IsREPAIR)==1?1:0)); // ?REPAIR @ ?REPAIR @ 1 = OR
}


// ================================================
// 0xc12a: WORD 'MREPAIR' codep=0x224c parp=0xc136
// ================================================

void MREPAIR() // MREPAIR
{
  IsSHIP_dash_REPAIR(); // ?SHIP-REPAIR
  if (Pop() == 0) return;
  Push(0xc0e8); // probable 'DO-REPA'
  MODULE(); // MODULE
  Push(Read16(pp__n_AUX)); // #AUX @
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() == 0) return;
  Push(0xbe4b); // probable 'OVDBA'
  MODULE(); // MODULE
}


// ================================================
// 0xc156: WORD 'COMM-VOC' codep=0x1ab5 parp=0xc163
// ================================================
// 0xc163: db 0x71 0xc1 0xbc 0xc0 0x32 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'q   2               '

// ================================================
// 0xc177: WORD 'COMM-OV' codep=0x83f8 parp=0xc183
// ================================================
// Overlay COMM_dash_OV = 0x7c7d

// ================================================
// 0xc185: WORD 'OVINIT-COMM' codep=0x224c parp=0xc195
// ================================================

void OVINIT_dash_COMM() // OVINIT-COMM
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  ICOMM(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc19d: WORD 'U-COMM' codep=0x224c parp=0xc1a8
// ================================================

void U_dash_COMM() // U-COMM
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  CL1(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc1b0: WORD 'COMM-EXPERTS' codep=0x224c parp=0xc1c1
// ================================================

void COMM_dash_EXPERTS() // COMM-EXPERTS
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  COMM_dash_EXPERTS(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc1c9: WORD 'A>O' codep=0x224c parp=0xc1d1
// ================================================

void A_gt_O() // A>O
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  A_gt_ORIGINATOR(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc1d9: WORD 'O>C' codep=0x224c parp=0xc1e1
// ================================================

void O_gt_C() // O>C
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  ORIGINATOR_gt_C(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc1e9: WORD '>HAIL' codep=0x224c parp=0xc1f3
// ================================================

void _gt_HAIL() // >HAIL
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  _gt_HAIL_do_(); // Overlay COMM-OV
}


// ================================================
// 0xc1f9: WORD 'OV+!EDL' codep=0x224c parp=0xc205
// ================================================

void OV_plus__ex_EDL() // OV+!EDL
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  _plus__ex_EDL(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc20d: WORD 'P>CT' codep=0x224c parp=0xc216
// ================================================

void P_gt_CT() // P>CT
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  _ro_PHRASE_gt_CT_rc_(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc21e: WORD 'CTUP' codep=0x224c parp=0xc227
// ================================================

void CTUP() // CTUP
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  CTSCROLL(); // Overlay COMM-OV
}


// ================================================
// 0xc22d: WORD 'OVEDL+AUX' codep=0x224c parp=0xc23b
// ================================================

void OVEDL_plus_AUX() // OVEDL+AUX
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  EDL_plus_AUX(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc243: WORD 'MCOMM-EXPERTS' codep=0x224c parp=0xc255 params=0 returns=0
// ================================================

void MCOMM_dash_EXPERTS() // MCOMM-EXPERTS
{
  Push(0xc1c1); // probable 'COMM-EXPERTS'
  MODULE(); // MODULE
}


// ================================================
// 0xc25d: WORD 'MEDL+AUX' codep=0x224c parp=0xc26a params=0 returns=0
// ================================================

void MEDL_plus_AUX() // MEDL+AUX
{
  Push(0xc23b); // probable 'OVEDL+AUX'
  MODULE(); // MODULE
}


// ================================================
// 0xc272: WORD 'DA-STR' codep=0x224c parp=0xc27d
// ================================================

void DA_dash_STR() // DA-STR
{
  LoadOverlay(COMM_dash_OV); // COMM-OV
  IAPWR(); // Overlay COMM-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc285: WORD 'XCOM-VOC' codep=0x1ab5 parp=0xc292
// ================================================
// 0xc292: db 0xa0 0xc2 0x65 0xc1 0xf4 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  e                 '

// ================================================
// 0xc2a6: WORD 'XCOM-OV' codep=0x83f8 parp=0xc2b2
// ================================================
// Overlay XCOM_dash_OV = 0x7e41

// ================================================
// 0xc2b4: WORD 'XCOMM' codep=0x224c parp=0xc2be
// ================================================

void XCOMM() // XCOMM
{
  LoadOverlay(XCOM_dash_OV); // XCOM-OV
  _ro_XCOMM_rc_(); // Overlay COMMSPEC-OV
}


// ================================================
// 0xc2c4: WORD 'FRACT' codep=0x1ab5 parp=0xc2ce
// ================================================
// 0xc2ce: db 0xdc 0xc2 0x94 0xc2 0xfb 0xf0 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc2e2: WORD 'FRACT-OV' codep=0x83f8 parp=0xc2ef
// ================================================
// Overlay FRACT_dash_OV = 0x6e3c

// ================================================
// 0xc2f1: WORD 'MERCATOR-GEN' codep=0x224c parp=0xc302
// ================================================

void MERCATOR_dash_GEN() // MERCATOR-GEN
{
  LoadOverlay(FRACT_dash_OV); // FRACT-OV
  MERCATOR_dash_GEN(); // Overlay FRACT-OV
}


// ================================================
// 0xc308: WORD 'NEWCONTOUR' codep=0x224c parp=0xc317
// ================================================

void NEWCONTOUR() // NEWCONTOUR
{
  LoadOverlay(FRACT_dash_OV); // FRACT-OV
  NEWCONTOUR(); // Overlay FRACT-OV
}


// ================================================
// 0xc31d: WORD 'MAKE-GLOBE' codep=0x224c parp=0xc32c
// ================================================

void MAKE_dash_GLOBE() // MAKE-GLOBE
{
  LoadOverlay(FRACT_dash_OV); // FRACT-OV
  MAKE_dash_GLOBE(); // Overlay FRACT-OV
}


// ================================================
// 0xc332: WORD 'SCRLCON' codep=0x224c parp=0xc33e
// ================================================

void SCRLCON() // SCRLCON
{
  LoadOverlay(FRACT_dash_OV); // FRACT-OV
  SCRLCON(); // Overlay FRACT-OV
}


// ================================================
// 0xc344: WORD 'ORBIT' codep=0x1ab5 parp=0xc34e
// ================================================
// 0xc34e: db 0x5c 0xc3 0xd0 0xc2 0x88 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '\                   '

// ================================================
// 0xc362: WORD 'ORBIT-OV' codep=0x83f8 parp=0xc36f
// ================================================
// Overlay ORBIT_dash_OV = 0x8186

// ================================================
// 0xc371: WORD 'INIT-ORBIT' codep=0x224c parp=0xc380
// ================================================

void INIT_dash_ORBIT() // INIT-ORBIT
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  INIT_dash_ORBIT(); // Overlay ORBIT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc388: WORD 'SHOWSITE' codep=0x224c parp=0xc395
// ================================================

void SHOWSITE() // SHOWSITE
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  SHOWSITE(); // Overlay ORBIT-OV
}


// ================================================
// 0xc39b: WORD 'DESCEND' codep=0x224c parp=0xc3a7
// ================================================

void DESCEND() // DESCEND
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  DESCEND(); // Overlay ORBIT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc3af: WORD 'ASCEND' codep=0x224c parp=0xc3ba
// ================================================

void ASCEND() // ASCEND
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  ASCEND(); // Overlay ORBIT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc3c2: WORD 'ROTATE' codep=0x224c parp=0xc3cd
// ================================================

void ROTATE() // ROTATE
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  ROTATE(); // Overlay ORBIT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc3d5: WORD 'SEEGRID' codep=0x224c parp=0xc3e1
// ================================================

void SEEGRID() // SEEGRID
{
  LoadOverlay(ORBIT_dash_OV); // ORBIT-OV
  SEEGRID(); // Overlay ORBIT-OV
}


// ================================================
// 0xc3e7: WORD 'MROTATE' codep=0x224c parp=0xc3f3 params=0 returns=0
// ================================================

void MROTATE() // MROTATE
{
  Push(0xc3cd); // probable 'ROTATE'
  MODULE(); // MODULE
}


// ================================================
// 0xc3fb: WORD 'VICONP' codep=0x1ab5 parp=0xc406
// ================================================
// 0xc406: db 0x14 0xc4 0x50 0xc3 0x1d 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  P                 '

// ================================================
// 0xc41a: WORD 'ICONP-OV' codep=0x83f8 parp=0xc427
// ================================================
// Overlay ICONP_dash_OV = 0x6f5e

// ================================================
// 0xc429: WORD 'ICON-PARM' codep=0x224c parp=0xc437
// ================================================

void ICON_dash_PARM() // ICON-PARM
{
  LoadOverlay(ICONP_dash_OV); // ICONP-OV
  ICON_dash_PARM(); // Overlay ICONP-OV
}


// ================================================
// 0xc43d: WORD '+ICONBXOV' codep=0x224c parp=0xc44b
// ================================================

void _plus_ICONBXOV() // +ICONBXOV
{
  LoadOverlay(ICONP_dash_OV); // ICONP-OV
  _plus_ICONBOX(); // Overlay ICONP-OV
}


// ================================================
// 0xc451: WORD 'SITE-VOC' codep=0x1ab5 parp=0xc45e
// ================================================
// 0xc45e: db 0x6c 0xc4 0x08 0xc4 0x2d 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'l   -               '

// ================================================
// 0xc472: WORD 'SITE-OV' codep=0x83f8 parp=0xc47e
// ================================================
// Overlay SITE_dash_OV = 0x6f92

// ================================================
// 0xc480: WORD '(.MERC)' codep=0x224c parp=0xc48c
// ================================================

void _ro__dot_MERC_rc_() // (.MERC)
{
  LoadOverlay(SITE_dash_OV); // SITE-OV
  DrawMERCATOR(); // Overlay SITE-OV
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xc494: WORD '(GETSITE)' codep=0x224c parp=0xc4a2
// ================================================

void _ro_GETSITE_rc_() // (GETSITE)
{
  LoadOverlay(SITE_dash_OV); // SITE-OV
  GETSITE_2(); // Overlay SITE-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
  OV_dash_CANCEL(); // OV-CANCEL
}


// ================================================
// 0xc4ac: WORD 'FLUX-VOC' codep=0x1ab5 parp=0xc4b9
// ================================================
// 0xc4b9: db 0xc7 0xc4 0x60 0xc4 0xfe 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  `                 '

// ================================================
// 0xc4cd: WORD 'FLUX-OV' codep=0x83f8 parp=0xc4d9
// ================================================
// Overlay FLUX_dash_OV = 0x89fc

// ================================================
// 0xc4db: WORD 'OVFLU' codep=0x224c parp=0xc4e5
// ================================================

void OVFLU() // OVFLU
{
  LoadOverlay(FLUX_dash_OV); // FLUX-OV
  FLUX(); // Overlay FLUX-EFFECT
}


// ================================================
// 0xc4eb: WORD 'BANK-VOC' codep=0x1ab5 parp=0xc4f8
// ================================================
// 0xc4f8: db 0x06 0xc5 0xbb 0xc4 0xe4 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc50c: WORD 'BANK-OV' codep=0x83f8 parp=0xc518
// ================================================
// Overlay BANK_dash_OV = 0x71dc

// ================================================
// 0xc51a: WORD 'OVINIT-BALANCE' codep=0x224c parp=0xc52d
// ================================================

void OVINIT_dash_BALANCE() // OVINIT-BALANCE
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  INIT_dash_BALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc533: WORD 'OVTRANSACT' codep=0x224c parp=0xc542
// ================================================

void OVTRANSACT() // OVTRANSACT
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  TRANSACT(); // Overlay BANK-OV
}


// ================================================
// 0xc548: WORD 'OVD@BALANCE' codep=0x224c parp=0xc558
// ================================================

void OVD_at_BALANCE() // OVD@BALANCE
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  GetDBALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc55e: WORD 'OVD!BALANCE' codep=0x224c parp=0xc56e
// ================================================

void OVD_ex_BALANCE() // OVD!BALANCE
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  StoreDBALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc574: WORD 'OV?BALANCE' codep=0x224c parp=0xc583
// ================================================

void OV_ask_BALANCE() // OV?BALANCE
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  IsBALANCE(); // Overlay BANK-OV
}


// ================================================
// 0xc589: WORD 'OV!TFLAG' codep=0x224c parp=0xc596
// ================================================

void OV_ex_TFLAG() // OV!TFLAG
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  StoreTFLAG(); // Overlay BANK-OV
}


// ================================================
// 0xc59c: WORD 'I-TRANS' codep=0x224c parp=0xc5a8
// ================================================

void I_dash_TRANS() // I-TRANS
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  INT_pe_(); // Overlay BANK-OV
}


// ================================================
// 0xc5ae: WORD 'U-B' codep=0x224c parp=0xc5b6
// ================================================

void U_dash_B() // U-B
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  _ro_U_dash_BANK_rc_(); // Overlay BANK-OV
}


// ================================================
// 0xc5bc: WORD 'T+BALANCE' codep=0x224c parp=0xc5ca
// ================================================

void T_plus_BALANCE() // T+BALANCE
{
  LoadOverlay(BANK_dash_OV); // BANK-OV
  GetDBALANCE(); // Overlay BANK-OV
  D_plus_(); // D+
  StoreDBALANCE(); // Overlay BANK-OV
  StoreTFLAG(); // Overlay BANK-OV
}


// ================================================
// 0xc5d6: WORD 'ACREW-VOC' codep=0x1ab5 parp=0xc5e4
// ================================================
// 0xc5e4: db 0xf2 0xc5 0xfa 0xc4 0x51 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '    Q               '

// ================================================
// 0xc5f8: WORD 'ACREW-OV' codep=0x83f8 parp=0xc605
// ================================================
// Overlay ACREW_dash_OV = 0x723b

// ================================================
// 0xc607: WORD 'U-AC' codep=0x224c parp=0xc610
// ================================================

void U_dash_AC() // U-AC
{
  LoadOverlay(ACREW_dash_OV); // ACREW-OV
  _ro_U_dash_ASSCREW_rc_(); // Overlay ASSCREW-OV
}


// ================================================
// 0xc616: WORD 'PFILE-VOC' codep=0x1ab5 parp=0xc624
// ================================================
// 0xc624: db 0x32 0xc6 0xe6 0xc5 0xfe 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '2                   '

// ================================================
// 0xc638: WORD 'PFILE-OV' codep=0x83f8 parp=0xc645
// ================================================
// Overlay PFILE_dash_OV = 0x72ea

// ================================================
// 0xc647: WORD 'U-PF' codep=0x224c parp=0xc650
// ================================================

void U_dash_PF() // U-PF
{
  LoadOverlay(PFILE_dash_OV); // PFILE-OV
  _ro_U_dash_PFILE_rc_(); // Overlay PERSONNEL-OV
}


// ================================================
// 0xc656: WORD 'SHIP-GR-VOC' codep=0x1ab5 parp=0xc666
// ================================================
// 0xc666: db 0x74 0xc6 0x26 0xc6 0xed 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 't &                 '

// ================================================
// 0xc67a: WORD 'SHIP-GR-OV' codep=0x83f8 parp=0xc689
// ================================================
// Overlay SHIP_dash_GR_dash_OV = 0x73f0

// ================================================
// 0xc68b: WORD 'OV.MASS' codep=0x224c parp=0xc697
// ================================================

void OV_dot_MASS() // OV.MASS
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro__dot_MASS_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc69d: WORD 'OV.ACC' codep=0x224c parp=0xc6a8
// ================================================

void OV_dot_ACC() // OV.ACC
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro__dot_ACC_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc6ae: WORD 'OV.PODS' codep=0x224c parp=0xc6ba
// ================================================

void OV_dot_PODS() // OV.PODS
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro__dot_PODS_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc6c0: WORD 'OV.SHIP' codep=0x224c parp=0xc6cc
// ================================================

void OV_dot_SHIP() // OV.SHIP
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro__dot_SHIP_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc6d2: WORD 'OVBALANCEMESS' codep=0x224c parp=0xc6e4
// ================================================

void OVBALANCEMESS() // OVBALANCEMESS
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro_BALANCEMESS_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc6ea: WORD 'OV.CONFIG' codep=0x224c parp=0xc6f8
// ================================================

void OV_dot_CONFIG() // OV.CONFIG
{
  LoadOverlay(SHIP_dash_GR_dash_OV); // SHIP-GR-OV
  _ro__dot_CONFIG_rc_(); // Overlay SHIPGRPH-OV
}


// ================================================
// 0xc6fe: WORD 'CONFIG-VOC' codep=0x1ab5 parp=0xc70d
// ================================================
// 0xc70d: db 0x1b 0xc7 0x68 0xc6 0xad 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  h                 '

// ================================================
// 0xc721: WORD 'CONFIG-OV' codep=0x83f8 parp=0xc72f
// ================================================
// Overlay CONFIG_dash_OV = 0x7474

// ================================================
// 0xc731: WORD 'U-SC' codep=0x224c parp=0xc73a
// ================================================

void U_dash_SC() // U-SC
{
  LoadOverlay(CONFIG_dash_OV); // CONFIG-OV
  _ro_U_dash_CONFIG_rc_(); // Overlay CONFIG-OV
}


// ================================================
// 0xc740: WORD 'TD-VOC' codep=0x1ab5 parp=0xc74b
// ================================================
// 0xc74b: db 0x59 0xc7 0x0f 0xc7 0xc1 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'Y                   '

// ================================================
// 0xc75f: WORD 'TD-OV' codep=0x83f8 parp=0xc769
// ================================================
// Overlay TD_dash_OV = 0x7534

// ================================================
// 0xc76b: WORD '<TDART' codep=0x224c parp=0xc776
// ================================================

void _st_TDART() // <TDART
{
  LoadOverlay(TD_dash_OV); // TD-OV
  _st_TDART(); // Overlay TDEPOT-OV
}


// ================================================
// 0xc77c: WORD 'U-TD' codep=0x224c parp=0xc785
// ================================================

void U_dash_TD() // U-TD
{
  LoadOverlay(TD_dash_OV); // TD-OV
  _ro_U_dash_DEPOT_rc_(); // Overlay TDEPOT-OV
}


// ================================================
// 0xc78b: WORD 'TOSS' codep=0x224c parp=0xc794
// ================================================

void TOSS() // TOSS
{
  LoadOverlay(TD_dash_OV); // TD-OV
  SELL_dash_IT(); // Overlay TDEPOT-OV
}


// ================================================
// 0xc79a: WORD 'KEY-ELEM-AMT' codep=0x224c parp=0xc7ab
// ================================================

void KEY_dash_ELEM_dash_AMT() // KEY-ELEM-AMT
{
  LoadOverlay(TD_dash_OV); // TD-OV
  KEY_dash_ELEM_dash_AMT(); // Overlay TDEPOT-OV
}


// ================================================
// 0xc7b1: WORD '?FANLYZ' codep=0x1d29 parp=0xc7bd
// ================================================
// 0xc7bd: db 0x00 0x00 '  '

// ================================================
// 0xc7bf: WORD 'OP-VOC' codep=0x1ab5 parp=0xc7ca
// ================================================
// 0xc7ca: db 0xd8 0xc7 0x4d 0xc7 0xf2 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  M                 '

// ================================================
// 0xc7de: WORD 'OP-OV' codep=0x83f8 parp=0xc7e8
// ================================================
// Overlay OP_dash_OV = 0x8a19

// ================================================
// 0xc7ea: WORD 'U-OP' codep=0x224c parp=0xc7f3
// ================================================

void U_dash_OP() // U-OP
{
  LoadOverlay(OP_dash_OV); // OP-OV
  _ro_U_dash_OP_rc_(); // Overlay OP-OV
}


// ================================================
// 0xc7f9: WORD 'SETTER' codep=0x1ab5 parp=0xc804
// ================================================
// 0xc804: db 0x12 0xc8 0xcc 0xc7 0x77 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '    w               '

// ================================================
// 0xc818: WORD 'PLSET-OV' codep=0x83f8 parp=0xc825
// ================================================
// Overlay PLSET_dash_OV = 0x90e3

// ================================================
// 0xc827: WORD 'SET-PLANET' codep=0x224c parp=0xc834
// ================================================

void SET_dash_PLANET() // SET-PLANET
{
  LoadOverlay(PLSET_dash_OV); // PLSET-OV
  PLAN_dash_RUL(); // Overlay PLSET-OV
}


// ================================================
// 0xc83a: WORD 'SETC' codep=0x224c parp=0xc843
// ================================================

void SETC() // SETC
{
  LoadOverlay(PLSET_dash_OV); // PLSET-OV
  SETC(); // Overlay PLSET-OV
}


// ================================================
// 0xc849: WORD 'DPART-VOC' codep=0x1ab5 parp=0xc857
// ================================================
// 0xc857: db 0x65 0xc8 0x06 0xc8 0x85 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'e                   '

// ================================================
// 0xc86b: WORD 'DPART-OV' codep=0x83f8 parp=0xc878
// ================================================
// Overlay DPART_dash_OV = 0x696c

// ================================================
// 0xc87a: WORD 'DEPART' codep=0x224c parp=0xc885
// ================================================

void DEPART() // DEPART
{
  LoadOverlay(DPART_dash_OV); // DPART-OV
  DEPART(); // Overlay DPART-OV
}


// ================================================
// 0xc88b: WORD 'DAMAGE_1' codep=0x1ab5 parp=0xc897
// ================================================
// 0xc897: db 0xa5 0xc8 0x59 0xc8 0x17 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  Y                 '

// ================================================
// 0xc8ab: WORD 'DAMAGE_2' codep=0x83f8 parp=0xc8b7
// ================================================
// Overlay DAMAGE_2 = 0x95af

// ================================================
// 0xc8b9: WORD 'DO-DA' codep=0x224c parp=0xc8c3
// ================================================

void DO_dash_DA() // DO-DA
{
  LoadOverlay(DAMAGE_2); // DAMAGE_2
  DO_dash_DAMA(); // Overlay DAMAGE-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc8cb: WORD 'COMBAT-VO' codep=0x1ab5 parp=0xc8d9
// ================================================
// 0xc8d9: db 0xe7 0xc8 0x99 0xc8 0xe1 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc8ed: WORD 'COMBAT-O' codep=0x83f8 parp=0xc8fa
// ================================================
// Overlay COMBAT_dash_O = 0x942c

// ================================================
// 0xc8fc: WORD '(WA' codep=0x224c parp=0xc904
// ================================================

void _ro_WA() // (WA
{
  LoadOverlay(COMBAT_dash_O); // COMBAT-O
  WAR(); // Overlay COMBAT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc90c: WORD '(CO' codep=0x224c parp=0xc914
// ================================================

void _ro_CO() // (CO
{
  LoadOverlay(COMBAT_dash_O); // COMBAT-O
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  COMBAT(); // Overlay COMBAT-OV
  ICLOSE(); // ICLOSE
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc922: WORD 'CSC' codep=0x224c parp=0xc92a
// ================================================

void CSC() // CSC
{
  LoadOverlay(COMBAT_dash_O); // COMBAT-O
  SET_dash_SCALE(); // Overlay COMBAT-OV
}


// ================================================
// 0xc930: WORD 'C&C' codep=0x224c parp=0xc938
// ================================================

void C_and_C() // C&C
{
  LoadOverlay(COMBAT_dash_O); // COMBAT-O
  CLEAR_dash_CO(); // Overlay COMBAT-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xc940: WORD 'COM' codep=0x224c parp=0xc948 params=0 returns=0
// ================================================

void COM() // COM
{
  Push(0xc914); // probable '(CO'
  MODULE(); // MODULE
}


// ================================================
// 0xc950: WORD 'WAR' codep=0x224c parp=0xc958 params=0 returns=0
// ================================================

void WAR() // WAR
{
  Push(0xc904); // probable '(WA'
  MODULE(); // MODULE
}


// ================================================
// 0xc960: WORD '?CALLING' codep=0x1d29 parp=0xc96d
// ================================================
// 0xc96d: db 0x01 0x00 '  '

// ================================================
// 0xc96f: WORD 'HMISC-VOC' codep=0x1ab5 parp=0xc97d
// ================================================
// 0xc97d: db 0x8b 0xc9 0xdb 0xc8 0x0c 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xc991: WORD 'HMISC-OV' codep=0x83f8 parp=0xc99e
// ================================================
// Overlay HMISC_dash_OV = 0x7008

// ================================================
// 0xc9a0: WORD 'UFM' codep=0x224c parp=0xc9a8
// ================================================

void UFM() // UFM
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  UF_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9ae: WORD 'USM' codep=0x224c parp=0xc9b6
// ================================================

void USM() // USM
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  US_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9bc: WORD 'NFM' codep=0x224c parp=0xc9c4
// ================================================

void NFM() // NFM
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  NF_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9ca: WORD 'NSM' codep=0x224c parp=0xc9d2
// ================================================

void NSM() // NSM
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  NS_dash_MESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9d8: WORD '.EX' codep=0x224c parp=0xc9e0
// ================================================

void DrawEX() // .EX
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  DrawEX(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9e6: WORD 'DMSG' codep=0x224c parp=0xc9ef
// ================================================

void DMSG() // DMSG
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  DMSG(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xc9f5: WORD 'D-UP' codep=0x224c parp=0xc9fe
// ================================================

void D_dash_UP() // D-UP
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  DISP_dash_SETUP(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca04: WORD 'DO-FLARE' codep=0x224c parp=0xca11
// ================================================

void DO_dash_FLARE() // DO-FLARE
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  DO_dash_FLARE(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca17: WORD '?PRL' codep=0x224c parp=0xca20
// ================================================

void IsPRL() // ?PRL
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  IsPRL(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca26: WORD 'OSET' codep=0x224c parp=0xca2f
// ================================================

void OSET() // OSET
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  OSET(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca35: WORD 'ORBUP' codep=0x224c parp=0xca3f params=0 returns=0
// ================================================

void ORBUP() // ORBUP
{
  Push(0xca2f); // probable 'OSET'
  MODULE(); // MODULE
}


// ================================================
// 0xca47: WORD 'TRAK-ENCS' codep=0x224c parp=0xca55 params=0 returns=0
// ================================================

void TRAK_dash_ENCS() // TRAK-ENCS
{
  Push(Read16(pp_STAR_dash_HR) - Read16(pp_TRAK_dash_HR)); // STAR-HR @ TRAK-HR @ -
  ABS(); // ABS
  Push(2);
  Push(0x0017);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  TRAK_dash_E(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca73: WORD 'HEAT' codep=0x224c parp=0xca7c
// ================================================

void HEAT() // HEAT
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  HEAT(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca82: WORD '!'EXT' codep=0x224c parp=0xca8c
// ================================================

void Store_i_EXT() // !'EXT
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  _ro__ex__i_EXT_rc_(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xca92: WORD '(CTXT)' codep=0x224c parp=0xca9d
// ================================================

void _ro_CTXT_rc_() // (CTXT)
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  _ro_CTXT_rc_(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xcaa3: WORD 'CONTEXT-CASES' codep=0x224c parp=0xcab5 params=0 returns=0
// ================================================

void CONTEXT_dash_CASES() // CONTEXT-CASES
{
  Push(0xca9d); // probable '(CTXT)'
  MODULE(); // MODULE
}


// ================================================
// 0xcabd: WORD '+A-VESS' codep=0x224c parp=0xcac9
// ================================================

void _plus_A_dash_VESS() // +A-VESS
{
  LoadOverlay(HMISC_dash_OV); // HMISC-OV
  _plus_A_dash_VESS(); // Overlay HYPERMSG-OV
}


// ================================================
// 0xcacf: WORD 'MTRAK-ENCS' codep=0x224c parp=0xcade params=0 returns=0
// ================================================

void MTRAK_dash_ENCS() // MTRAK-ENCS
{
  Push(0xca55); // probable 'TRAK-ENCS'
  MODULE(); // MODULE
}


// ================================================
// 0xcae6: WORD 'MHEAT' codep=0x224c parp=0xcaf0 params=0 returns=0
// ================================================

void MHEAT() // MHEAT
{
  Push(0xca7c); // probable 'HEAT'
  MODULE(); // MODULE
}


// ================================================
// 0xcaf8: WORD 'NAV-VOC' codep=0x1ab5 parp=0xcb04
// ================================================
// 0xcb04: db 0x12 0xcb 0x7f 0xc9 0xea 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                   '

// ================================================
// 0xcb18: WORD 'NAV-O' codep=0x83f8 parp=0xcb22
// ================================================
// Overlay NAV_dash_O = 0x8590

// ================================================
// 0xcb24: WORD 'OV/(D' codep=0x224c parp=0xcb2e
// ================================================

void OV_slash__ro_D() // OV/(D
{
  LoadOverlay(NAV_dash_O); // NAV-O
  _ro__slash__ro_DIS_rc_ARM_rc_(); // Overlay NAVIGATR
}


// ================================================
// 0xcb34: WORD 'OV/(U' codep=0x224c parp=0xcb3e
// ================================================

void OV_slash__ro_U() // OV/(U
{
  LoadOverlay(NAV_dash_O); // NAV-O
  _ro__slash__ro_UD_rc_SHIELD_rc_(); // Overlay NAVIGATR
}


// ================================================
// 0xcb44: WORD 'OV-SH' codep=0x224c parp=0xcb4e
// ================================================

void OV_dash_SH() // OV-SH
{
  CTINIT(); // CTINIT
  LoadOverlay(NAV_dash_O); // NAV-O
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  _gt_DOWN_dash_SHIELD(); // Overlay NAVIGATR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xcb5c: WORD 'OV-AR' codep=0x224c parp=0xcb66
// ================================================

void OV_dash_AR() // OV-AR
{
  CTINIT(); // CTINIT
  LoadOverlay(NAV_dash_O); // NAV-O
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  _gt_DISARM(); // Overlay NAVIGATR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xcb74: WORD 'SHPMOV-VOC' codep=0x1ab5 parp=0xcb80
// ================================================
// 0xcb80: db 0x8e 0xcb 0x06 0xcb 0xfa 0xf1 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcb94: WORD 'SHPMOV-OV' codep=0x83f8 parp=0xcba0
// ================================================
// Overlay SHPMOV_dash_OV = 0x8747

// ================================================
// 0xcba2: WORD 'FLY' codep=0x224c parp=0xcbaa
// ================================================

void FLY() // FLY
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  FLY(); // Overlay HYPER-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xcbb2: WORD 'MANEUVER' codep=0x224c parp=0xcbbf
// ================================================

void MANEUVER() // MANEUVER
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  Push(0xca20); // probable '?PRL'
  MODULE(); // MODULE
  if (Pop() != 0)
  {
    JMPSHP(); // Overlay HYPER-OV
  } else
  {
    CHK_dash_MOV(); // Overlay HYPER-OV
    if (Pop() != 0)
    {
      DrawAUXSYS(); // Overlay HYPER-OV
      Push(Read16(pp_SKIP2NEST)); // SKIP2NEST @
      if (Pop() != 0)
      {
        UNNEST(); // Overlay HYPER-OV
      } else
      {
        Push(0xf0ab); // probable 'CLEANUP-MOV'
        Push(0xef37); // probable 'SET-DESTINATION'
        Push(0xf003); // probable 'SETUP-MOV'
        DOTASKS(SETUP_dash_MOV, SETUP_dash_MOV, SETUP_dash_MOV);
      }
    }
    Push(pp_FTRIG); // FTRIG
    OFF(); // OFF
  }
  DrawSORD(); // .SORD
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xcbff: WORD 'UNNEST' codep=0x224c parp=0xcc0a
// ================================================

void UNNEST() // UNNEST
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  UNNEST(); // Overlay HYPER-OV
}


// ================================================
// 0xcc10: WORD '>NEST' codep=0x224c parp=0xcc1a
// ================================================

void _gt_NEST() // >NEST
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  _plus_NEST(); // Overlay HYPER-OV
}


// ================================================
// 0xcc20: WORD 'GET-HAUX' codep=0x224c parp=0xcc2d
// ================================================

void GET_dash_HAUX() // GET-HAUX
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  _ro_GET_dash_AUX(); // Overlay HYPER-OV
}


// ================================================
// 0xcc33: WORD 'OV.MVS' codep=0x224c parp=0xcc3e
// ================================================

void OV_dot_MVS() // OV.MVS
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  DrawMVS(); // Overlay HYPER-OV
}


// ================================================
// 0xcc44: WORD 'S>PORT' codep=0x224c parp=0xcc4f
// ================================================

void S_gt_PORT() // S>PORT
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  COME_dash_HITHER(); // Overlay HYPER-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xcc57: WORD 'USE-E' codep=0x224c parp=0xcc61
// ================================================

void USE_dash_E() // USE-E
{
  LoadOverlay(SHPMOV_dash_OV); // SHPMOV-OV
  USE_dash_E(); // Overlay HYPER-OV
}


// ================================================
// 0xcc67: WORD 'MUSE-E' codep=0x224c parp=0xcc72 params=0 returns=0
// ================================================

void MUSE_dash_E() // MUSE-E
{
  Push(0xcc61); // probable 'USE-E'
  MODULE(); // MODULE
}


// ================================================
// 0xcc7a: WORD 'VITA' codep=0x1ab5 parp=0xcc83
// ================================================
// 0xcc83: db 0x91 0xcc 0x82 0xcb 0x96 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcc97: WORD 'VITA-OV' codep=0x83f8 parp=0xcca3
// ================================================
// Overlay VITA_dash_OV = 0x7723

// ================================================
// 0xcca5: WORD 'DIO' codep=0x224c parp=0xccad
// ================================================

void DIO() // DIO
{
  LoadOverlay(VITA_dash_OV); // VITA-OV
  DIO(); // Overlay VITA-OV
}


// ================================================
// 0xccb3: WORD 'HIPARMS' codep=0x1ab5 parp=0xccbf
// ================================================
// 0xccbf: db 0xcd 0xcc 0x85 0xcc 0xee 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xccd3: WORD 'HP-OV' codep=0x83f8 parp=0xccdd
// ================================================
// Overlay HP_dash_OV = 0x7801

// ================================================
// 0xccdf: WORD 'C+OPARMS' codep=0x224c parp=0xccec
// ================================================

void C_plus_OPARMS() // C+OPARMS
{
  LoadOverlay(HP_dash_OV); // HP-OV
  C_plus_OPARMS(); // Overlay HP-OV
}


// ================================================
// 0xccf2: WORD 'BIO' codep=0x224c parp=0xccfa
// ================================================

void BIO() // BIO
{
  DIO(); // DIO
  Push(0xc843); // probable 'SETC'
  MODULE(); // MODULE
  C_plus_OPARMS(); // C+OPARMS
}


// ================================================
// 0xcd06: WORD 'LOPARMS' codep=0x1ab5 parp=0xcd12
// ================================================
// 0xcd12: db 0x20 0xcd 0xc1 0xcc 0xf2 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcd26: WORD 'LP-OV' codep=0x83f8 parp=0xcd30
// ================================================
// Overlay LP_dash_OV = 0x792f

// ================================================
// 0xcd32: WORD 'OTHER-PAR' codep=0x224c parp=0xcd40
// ================================================

void OTHER_dash_PAR() // OTHER-PAR
{
  LoadOverlay(LP_dash_OV); // LP-OV
  SPEC_dot_PARM(); // Overlay LP-OV
}


// ================================================
// 0xcd46: WORD 'SENTS' codep=0x1ab5 parp=0xcd50
// ================================================
// 0xcd50: db 0x5e 0xcd 0x14 0xcd 0x44 0xf3 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '^   D               '

// ================================================
// 0xcd64: WORD 'SENT-OV' codep=0x83f8 parp=0xcd70
// ================================================
// Overlay SENT_dash_OV = 0x7a79

// ================================================
// 0xcd72: WORD '?TALK' codep=0x224c parp=0xcd7c
// ================================================

void IsTALK() // ?TALK
{
  LoadOverlay(SENT_dash_OV); // SENT-OV
  IsTALK(); // Overlay SENT-OV
}


// ================================================
// 0xcd82: WORD 'SAYIT' codep=0x224c parp=0xcd8c
// ================================================

void SAYIT() // SAYIT
{
  LoadOverlay(SENT_dash_OV); // SENT-OV
  CLASS_gt_DE(); // Overlay SENT-OV
}


// ================================================
// 0xcd92: WORD 'MAPS-VOC' codep=0x1ab5 parp=0xcd9f
// ================================================
// 0xcd9f: db 0xad 0xcd 0x52 0xcd 0x43 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  R C               '

// ================================================
// 0xcdb3: WORD 'MAPS-' codep=0x83f8 parp=0xcdbd
// ================================================
// Overlay MAPS_dash_ = 0x9179

// ================================================
// 0xcdbf: WORD 'MAPS' codep=0x224c parp=0xcdc8
// ================================================

void MAPS() // MAPS
{
  LoadOverlay(MAPS_dash_); // MAPS-
  MAPS(); // Overlay MAPS-OV
}


// ================================================
// 0xcdce: WORD '.STOR' codep=0x224c parp=0xcdd8
// ================================================

void DrawSTOR() // .STOR
{
  LoadOverlay(MAPS_dash_); // MAPS-
  DrawSTORM(); // Overlay MAPS-OV
}


// ================================================
// 0xcdde: WORD '(2X2)' codep=0x224c parp=0xcde8
// ================================================

void _ro_2X2_rc_() // (2X2)
{
  LoadOverlay(MAPS_dash_); // MAPS-
  _2X2CONTOUR(); // Overlay MAPS-OV
}


// ================================================
// 0xcdee: WORD '2X2CO' codep=0x224c parp=0xcdf8 params=0 returns=0
// ================================================

void _2X2CO() // 2X2CO
{
  Push(0xcde8); // probable '(2X2)'
  MODULE(); // MODULE
}


// ================================================
// 0xce00: WORD '(4X4)' codep=0x224c parp=0xce0a
// ================================================

void _ro_4X4_rc_() // (4X4)
{
  LoadOverlay(MAPS_dash_); // MAPS-
  _4X4CONTOUR(); // Overlay MAPS-OV
}


// ================================================
// 0xce10: WORD '4X4CO' codep=0x224c parp=0xce1a params=0 returns=0
// ================================================

void _4X4CO() // 4X4CO
{
  Push(0xce0a); // probable '(4X4)'
  MODULE(); // MODULE
}


// ================================================
// 0xce22: WORD '(8X8)' codep=0x224c parp=0xce2c
// ================================================

void _ro_8X8_rc_() // (8X8)
{
  LoadOverlay(MAPS_dash_); // MAPS-
  _8X8CONTOUR(); // Overlay MAPS-OV
}


// ================================================
// 0xce32: WORD '8X8CO' codep=0x224c parp=0xce3c params=0 returns=0
// ================================================

void _8X8CO() // 8X8CO
{
  Push(0xce2c); // probable '(8X8)'
  MODULE(); // MODULE
}


// ================================================
// 0xce44: WORD 'SEEDER' codep=0x1ab5 parp=0xce4f
// ================================================
// 0xce4f: db 0x5d 0xce 0xa1 0xcd 0xca 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 ']                   '

// ================================================
// 0xce63: WORD 'SEED-OV' codep=0x83f8 parp=0xce6f
// ================================================
// Overlay SEED_dash_OV = 0x7ef4

// ================================================
// 0xce71: WORD 'POPULA' codep=0x224c parp=0xce7c
// ================================================

void POPULA() // POPULA
{
  LoadOverlay(SEED_dash_OV); // SEED-OV
  POPULA(); // Overlay SEED-OV
}


// ================================================
// 0xce82: WORD 'ICON-VOC' codep=0x1ab5 parp=0xce8f
// ================================================
// 0xce8f: db 0x9d 0xce 0x51 0xce 0x96 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  Q                 '

// ================================================
// 0xcea3: WORD 'LISTICONS-OV' codep=0x83f8 parp=0xceb4
// ================================================
// Overlay LISTICONS_dash_OV = 0x7f8a

// ================================================
// 0xceb6: WORD 'ICONS' codep=0x224c parp=0xcec0
// ================================================

void ICONS() // ICONS
{
  LoadOverlay(LISTICONS_dash_OV); // LISTICONS-OV
  ICONS(); // Overlay LISTICONS
}


// ================================================
// 0xcec6: WORD 'ITEMS' codep=0x1ab5 parp=0xced0
// ================================================
// 0xced0: db 0xde 0xce 0x91 0xce 0x90 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xcee4: WORD 'ITEMS-OV' codep=0x83f8 parp=0xcef1
// ================================================
// Overlay ITEMS_dash_OV = 0x8b2c

// ================================================
// 0xcef3: WORD '/ITEMS' codep=0x224c parp=0xcefe
// ================================================

void _slash_ITEMS() // /ITEMS
{
  LoadOverlay(ITEMS_dash_OV); // ITEMS-OV
  _ro__slash_ITEMS_rc_(); // Overlay ITEMS-OV
}


// ================================================
// 0xcf04: WORD '>DEBRIS' codep=0x224c parp=0xcf10
// ================================================

void _gt_DEBRIS() // >DEBRIS
{
  LoadOverlay(ITEMS_dash_OV); // ITEMS-OV
  _gt_DEBRIS(); // Overlay ITEMS-OV
}


// ================================================
// 0xcf16: WORD 'MOVE-VOC' codep=0x1ab5 parp=0xcf23
// ================================================
// 0xcf23: db 0x31 0xcf 0xd2 0xce 0x1f 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '1                   '

// ================================================
// 0xcf37: WORD 'MOVE-OV' codep=0x83f8 parp=0xcf43
// ================================================
// Overlay MOVE_dash_OV = 0x7fb7

// ================================================
// 0xcf45: WORD 'TVMOVE' codep=0x224c parp=0xcf50
// ================================================

void TVMOVE() // TVMOVE
{
  LoadOverlay(MOVE_dash_OV); // MOVE-OV
  TV_dash_MOVE(); // Overlay MOVE-OV
}


// ================================================
// 0xcf56: WORD '?POPULA' codep=0x224c parp=0xcf62
// ================================================

void IsPOPULA() // ?POPULA
{
  LoadOverlay(MOVE_dash_OV); // MOVE-OV
  IsPOPULA(); // Overlay MOVE-OV
}


// ================================================
// 0xcf68: WORD '!E/M' codep=0x224c parp=0xcf71
// ================================================

void StoreE_slash_M() // !E/M
{
  LoadOverlay(MOVE_dash_OV); // MOVE-OV
  SET_dash_SPEED(); // Overlay MOVE-OV
}


// ================================================
// 0xcf77: WORD 'STORM-VOC' codep=0x1ab5 parp=0xcf85
// ================================================
// 0xcf85: db 0x93 0xcf 0x25 0xcf 0xbc 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  %                 '

// ================================================
// 0xcf99: WORD 'STORM-OV' codep=0x83f8 parp=0xcfa6
// ================================================
// Overlay STORM_dash_OV = 0x935b

// ================================================
// 0xcfa8: WORD 'DO.STORM' codep=0x224c parp=0xcfb5
// ================================================

void DO_dot_STORM() // DO.STORM
{
  LoadOverlay(STORM_dash_OV); // STORM-OV
  _ro_DO_dot_STORM(); // Overlay STORM-OV
}


// ================================================
// 0xcfbb: WORD 'INJURE' codep=0x224c parp=0xcfc6
// ================================================

void INJURE() // INJURE
{
  LoadOverlay(STORM_dash_OV); // STORM-OV
  INJURE_dash_PL(); // Overlay STORM-OV
}


// ================================================
// 0xcfcc: WORD 'T.V.' codep=0x1ab5 parp=0xcfd5
// ================================================
// 0xcfd5: db 0xe3 0xcf 0x87 0xcf 0x6b 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '    k               '

// ================================================
// 0xcfe9: WORD 'TV-OV' codep=0x83f8 parp=0xcff3
// ================================================
// Overlay TV_dash_OV = 0x7ba4

// ================================================
// 0xcff5: WORD 'TV-DISP' codep=0x224c parp=0xd001
// ================================================

void TV_dash_DISP() // TV-DISP
{
  LoadOverlay(TV_dash_OV); // TV-OV
  TV_dash_DISP(); // Overlay TV-OV
}


// ================================================
// 0xd007: WORD '(TVSET)' codep=0x224c parp=0xd013
// ================================================

void _ro_TVSET_rc_() // (TVSET)
{
  LoadOverlay(TV_dash_OV); // TV-OV
  TV_dash_SETUP(); // Overlay TV-OV
}


// ================================================
// 0xd019: WORD '(CLEAN)' codep=0x224c parp=0xd025
// ================================================

void _ro_CLEAN_rc_() // (CLEAN)
{
  LoadOverlay(TV_dash_OV); // TV-OV
  TV_dash_CLEANU(); // Overlay TV-OV
}


// ================================================
// 0xd02b: WORD '(HEAVE)' codep=0x224c parp=0xd037
// ================================================

void _ro_HEAVE_rc_() // (HEAVE)
{
  LoadOverlay(TV_dash_OV); // TV-OV
  HEAVEHO(); // Overlay TV-OV
}


// ================================================
// 0xd03d: WORD '(WEAPONS)' codep=0x224c parp=0xd04b
// ================================================

void _ro_WEAPONS_rc_() // (WEAPONS)
{
  LoadOverlay(TV_dash_OV); // TV-OV
  DO_dot_WEAPON(); // Overlay TV-OV
}


// ================================================
// 0xd051: WORD '(TALK)' codep=0x224c parp=0xd05c
// ================================================

void _ro_TALK_rc_() // (TALK)
{
  LoadOverlay(TV_dash_OV); // TV-OV
  WALK_and_TALK(); // Overlay TV-OV
}


// ================================================
// 0xd062: WORD 'HEAVEHO' codep=0x224c parp=0xd06e params=0 returns=0
// ================================================

void HEAVEHO() // HEAVEHO
{
  Push(0xd037); // probable '(HEAVE)'
  MODULE(); // MODULE
}


// ================================================
// 0xd076: WORD 'BEHAVIO' codep=0x1ab5 parp=0xd082
// ================================================
// 0xd082: db 0x90 0xd0 0xd7 0xcf 0xe0 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xd096: WORD 'BEHAVE-OV' codep=0x83f8 parp=0xd0a4
// ================================================
// Overlay BEHAVE_dash_OV = 0x8cfa

// ================================================
// 0xd0a6: WORD 'TVTASKS' codep=0x224c parp=0xd0b2
// ================================================

void TVTASKS() // TVTASKS
{
  LoadOverlay(BEHAVE_dash_OV); // BEHAVE-OV
  TV_dash_TASKS(); // Overlay BEHAV-OV
}


// ================================================
// 0xd0b8: WORD 'TV' codep=0x224c parp=0xd0bf
// ================================================

void TV() // TV
{
  LoadOverlay(BEHAVE_dash_OV); // BEHAVE-OV
  TV(); // Overlay BEHAV-OV
}


// ================================================
// 0xd0c5: WORD '(SIMULA)' codep=0x224c parp=0xd0d2
// ================================================

void _ro_SIMULA_rc_() // (SIMULA)
{
  LoadOverlay(BEHAVE_dash_OV); // BEHAVE-OV
  SIMULATE(); // Overlay BEHAV-OV
}


// ================================================
// 0xd0d8: WORD 'SIMULATE' codep=0x224c parp=0xd0e5 params=0 returns=0
// ================================================

void SIMULATE() // SIMULATE
{
  Push(0xd0d2); // probable '(SIMULA)'
  MODULE(); // MODULE
}


// ================================================
// 0xd0ed: WORD 'STP-VOC' codep=0x1ab5 parp=0xd0f9
// ================================================
// 0xd0f9: db 0x07 0xd1 0x84 0xd0 0xed 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xd10d: WORD 'STP-OV' codep=0x83f8 parp=0xd118
// ================================================
// Overlay STP_dash_OV = 0x96a3

// ================================================
// 0xd11a: WORD 'SECURE' codep=0x224c parp=0xd125
// ================================================

void SECURE() // SECURE
{
  LoadOverlay(STP_dash_OV); // STP-OV
  STP(); // Overlay STP-OV
}


// ================================================
// 0xd12b: WORD 'SIC'EM' codep=0x224c parp=0xd136
// ================================================

void SIC_i_EM() // SIC'EM
{
  LoadOverlay(STP_dash_OV); // STP-OV
  SIC_i_EM(); // Overlay STP-OV
}


// ================================================
// 0xd13c: WORD '2NDS' codep=0x224c parp=0xd145
// ================================================

void _2NDS() // 2NDS
{
  LoadOverlay(STP_dash_OV); // STP-OV
  _2NDS(); // Overlay STP-OV
}


// ================================================
// 0xd14b: WORD 'LAUNCH-VOC' codep=0x1ab5 parp=0xd15a
// ================================================
// 0xd15a: db 0x68 0xd1 0xfb 0xd0 0x4b 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'h   K               '

// ================================================
// 0xd16e: WORD 'LAUNC' codep=0x83f8 parp=0xd178
// ================================================
// Overlay LAUNC = 0x89a7

// ================================================
// 0xd17a: WORD 'OVCOU' codep=0x224c parp=0xd184
// ================================================

void OVCOU() // OVCOU
{
  LoadOverlay(LAUNC); // LAUNC
  _and_LAUNCH(); // Overlay LAUNCH-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xd18c: WORD 'OVBAC' codep=0x224c parp=0xd196
// ================================================

void OVBAC() // OVBAC
{
  LoadOverlay(LAUNC); // LAUNC
  _and_RETURN(); // Overlay LAUNCH-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xd19e: WORD '.AIRL' codep=0x224c parp=0xd1a8
// ================================================

void DrawAIRL() // .AIRL
{
  LoadOverlay(LAUNC); // LAUNC
  DrawAIRLOCK(); // Overlay LAUNCH-OV
}


// ================================================
// 0xd1ae: WORD 'CAP-VOC' codep=0x1ab5 parp=0xd1ba
// ================================================
// 0xd1ba: db 0xc8 0xd1 0x5c 0xd1 0x2c 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  \ ,               '

// ================================================
// 0xd1ce: WORD 'CAP-O' codep=0x83f8 parp=0xd1d8
// ================================================
// Overlay CAP_dash_O = 0x8325

// ================================================
// 0xd1da: WORD 'OV/IT' codep=0x224c parp=0xd1e4
// ================================================

void OV_slash_IT() // OV/IT
{
  LoadOverlay(CAP_dash_O); // CAP-O
  _ro__slash_ITEMS_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd1ea: WORD 'OV/CA' codep=0x224c parp=0xd1f4
// ================================================

void OV_slash_CA() // OV/CA
{
  LoadOverlay(CAP_dash_O); // CAP-O
  _ro__slash_CAPT_dash_LOG_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd1fa: WORD 'OV/LA' codep=0x224c parp=0xd204
// ================================================

void OV_slash_LA() // OV/LA
{
  LoadOverlay(CAP_dash_O); // CAP-O
  _ro__slash_LAUNCH_slash_LAND_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd20a: WORD 'OV>DE' codep=0x224c parp=0xd214
// ================================================

void OV_gt_DE() // OV>DE
{
  LoadOverlay(CAP_dash_O); // CAP-O
  _gt_DESCEND(); // Overlay CAPTAIN
}


// ================================================
// 0xd21a: WORD 'OV/LO' codep=0x224c parp=0xd224
// ================================================

void OV_slash_LO() // OV/LO
{
  LoadOverlay(CAP_dash_O); // CAP-O
  _ro__slash_LOG_dash_PLAN_rc_(); // Overlay CAPTAIN
}


// ================================================
// 0xd22a: WORD 'DOC-VOC' codep=0x1ab5 parp=0xd236
// ================================================
// 0xd236: db 0x44 0xd2 0xbc 0xd1 0xe3 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'D                   '

// ================================================
// 0xd24a: WORD 'DOC-OV' codep=0x83f8 parp=0xd255
// ================================================
// Overlay DOC_dash_OV = 0x8136

// ================================================
// 0xd257: WORD 'OV/EXAMINE' codep=0x224c parp=0xd266
// ================================================

void OV_slash_EXAMINE() // OV/EXAMINE
{
  LoadOverlay(DOC_dash_OV); // DOC-OV
  _ro__slash_EXAMINE_rc_(); // Overlay DOCTOR
}


// ================================================
// 0xd26c: WORD 'OV/TREAT' codep=0x224c parp=0xd279
// ================================================

void OV_slash_TREAT() // OV/TREAT
{
  LoadOverlay(DOC_dash_OV); // DOC-OV
  _ro__slash_TREAT_rc_(); // Overlay DOCTOR
}


// ================================================
// 0xd27f: WORD 'AN-VOC' codep=0x1ab5 parp=0xd28a
// ================================================
// 0xd28a: db 0x98 0xd2 0x38 0xd2 0x6a 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  8 j               '

// ================================================
// 0xd29e: WORD 'AN-OV' codep=0x83f8 parp=0xd2a8
// ================================================
// Overlay AN_dash_OV = 0x8907

// ================================================
// 0xd2aa: WORD 'OV/ANALYSIS' codep=0x224c parp=0xd2ba
// ================================================

void OV_slash_ANALYSIS() // OV/ANALYSIS
{
  LoadOverlay(AN_dash_OV); // AN-OV
  _ro__slash_ANALYSIS_rc_(); // Overlay ANALYZE-OV
}


// ================================================
// 0xd2c0: WORD '*MAP' codep=0x1ab5 parp=0xd2c9
// ================================================
// 0xd2c9: db 0xd7 0xd2 0x8c 0xd2 0x62 0xed 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '    b               '

// ================================================
// 0xd2dd: WORD '*MAP-OV' codep=0x83f8 parp=0xd2e9
// ================================================
// Overlay _star_MAP_dash_OV = 0x8643

// ================================================
// 0xd2eb: WORD 'OV/STARMAP' codep=0x224c parp=0xd2fa
// ================================================

void OV_slash_STARMAP() // OV/STARMAP
{
  LoadOverlay(_star_MAP_dash_OV); // *MAP-OV
  _ro__slash_STARMAP_rc_(); // Overlay MAP-OV
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xd306: WORD 'LAND-VOC' codep=0x1ab5 parp=0xd313
// ================================================
// 0xd313: db 0x21 0xd3 0xcb 0xd2 0xeb 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '!                   '

// ================================================
// 0xd327: WORD 'LAND-OV' codep=0x83f8 parp=0xd333
// ================================================
// Overlay LAND_dash_OV = 0x965b

// ================================================
// 0xd335: WORD 'TRY-LAND' codep=0x224c parp=0xd342
// ================================================

void TRY_dash_LAND() // TRY-LAND
{
  LoadOverlay(LAND_dash_OV); // LAND-OV
  IsLAND(); // Overlay LAND-OV
}


// ================================================
// 0xd348: WORD 'TRY-LAUNCH' codep=0x224c parp=0xd357
// ================================================

void TRY_dash_LAUNCH() // TRY-LAUNCH
{
  LoadOverlay(LAND_dash_OV); // LAND-OV
  IsLAUNCH(); // Overlay LAND-OV
}


// ================================================
// 0xd35d: WORD 'BTN-VOC' codep=0x1ab5 parp=0xd369
// ================================================
// 0xd369: db 0x77 0xd3 0x15 0xd3 0xae 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 'w                   '

// ================================================
// 0xd37d: WORD 'BTN-OV' codep=0x83f8 parp=0xd388
// ================================================
// Overlay BTN_dash_OV = 0x85c7

// ================================================
// 0xd38a: WORD 'OVFLT' codep=0x224c parp=0xd394
// ================================================

void OVFLT() // OVFLT
{
  LoadOverlay(BTN_dash_OV); // BTN-OV
  _gt_FLT(); // Overlay SHIPBUTTONS
}


// ================================================
// 0xd39a: WORD 'CHKFLT-VOC' codep=0x1ab5 parp=0xd3a9
// ================================================
// 0xd3a9: db 0xb7 0xd3 0x6b 0xd3 0xf4 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '  k                 '

// ================================================
// 0xd3bd: WORD 'CHKFLT-OV' codep=0x83f8 parp=0xd3cb
// ================================================
// Overlay CHKFLT_dash_OV = 0x6e00

// ================================================
// 0xd3cd: WORD '?FLIGHT-OK' codep=0x224c parp=0xd3dc
// ================================================

void IsFLIGHT_dash_OK() // ?FLIGHT-OK
{
  LoadOverlay(CHKFLT_dash_OV); // CHKFLT-OV
  IsCAN_dash_LEAVE(); // Overlay CHKFLIGHT-OV
}


// ================================================
// 0xd3e2: WORD 'PM-VOC' codep=0x1ab5 parp=0xd3ed
// ================================================
// 0xd3ed: db 0xfb 0xd3 0xab 0xd3 0xda 0xf4 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '                    '

// ================================================
// 0xd401: WORD 'PM-OV' codep=0x83f8 parp=0xd40b
// ================================================
// Overlay PM_dash_OV = 0x7660

// ================================================
// 0xd40d: WORD 'PORTM' codep=0x224c parp=0xd417
// ================================================

void PORTM() // PORTM
{
  LoadOverlay(PM_dash_OV); // PM-OV
  WALKIES(); // Overlay PORTMENU-OV
}


// ================================================
// 0xd41d: WORD 'GAME' codep=0x1ab5 parp=0xd426
// ================================================
// 0xd426: db 0x34 0xd4 0xef 0xd3 0x2f 0xf5 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0xff 0xff 0x1a 0x08 '4   /               '

// ================================================
// 0xd43a: WORD 'GAME-O' codep=0x83f8 parp=0xd445
// ================================================
// Overlay GAME_dash_O = 0x8f71

// ================================================
// 0xd447: WORD 'STARTGAME' codep=0x224c parp=0xd452
// ================================================

void STARTGAME() // STARTGAME
{
  LoadOverlay(GAME_dash_O); // GAME-O
  START_dot_GAME(); // Overlay GAME-OV
}


// ================================================
// 0xd458: WORD 'GAMEOP_1' codep=0x224c parp=0xd463
// ================================================

void GAMEOP_1() // GAMEOP_1
{
  LoadOverlay(GAME_dash_O); // GAME-O
  GAMEOPS(); // Overlay GAME-OV
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xd46b: WORD 'GAMEOP_2' codep=0x224c parp=0xd476 params=0 returns=0
// ================================================

void GAMEOP_2() // GAMEOP_2
{
  Push(0xd463); // probable 'GAMEOP_1'
  MODULE(); // MODULE
}


