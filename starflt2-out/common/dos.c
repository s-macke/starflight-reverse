
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
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_DOS_dash_FILE; // DOS-FILE
extern const unsigned short int cc_PSW; // PSW
extern const unsigned short int cc_AX; // AX
extern const unsigned short int cc_BX; // BX
extern const unsigned short int cc_DX; // DX
extern const unsigned short int cc_DI; // DI
extern const unsigned short int cc_SI; // SI
extern const unsigned short int cc_DS; // DS
extern const unsigned short int cc_ES; // ES
extern const unsigned short int pp__i_FCB; // 'FCB
extern const unsigned short int pp_DISK_dash_ERROR; // DISK-ERROR
extern const unsigned short int pp_DTA_1; // DTA_1
extern const unsigned short int pp_FILE; // FILE
extern const unsigned short int pp_SYSK; // SYSK
extern const unsigned short int user__gt_IN; // >IN
extern const unsigned short int user_TIB; // TIB
void _ro_RESTORE_rc_(); // (RESTORE)
void FREEZE(); // FREEZE
void BYE_1(); // BYE_1
void _ro_SETUP_rc_(); // (SETUP)
void COUNT(); // COUNT
void ABS(); // ABS
void M_slash_(); // M/
void MAX(); // MAX
void OFF_1(); // OFF_1
void ON_3(); // ON_3
void HERE(); // HERE
void PAD(); // PAD
void _dash_TRAILING(); // -TRAILING
void MS(); // MS
void DRIVENUMBERS(); // DRIVENUMBERS
void FCBPFAS(); // FCBPFAS
void _st_MOUNT_gt_(); // <MOUNT>
void UNMOUNT(); // UNMOUNT
void BLOCK_1(); // BLOCK_1
void FLUSH_1(); // FLUSH_1
void IsUNRAVEL(); // ?UNRAVEL
void Store_1(); // !_1
void _ro_CS_ask__rc_(); // (CS?)
void _2_ex__1(); // 2!_1
void _2_at_(); // 2@
void C_ex__1(); // C!_1
void CMOVE_1(); // CMOVE_1
void FILL_1(); // FILL_1
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void U_slash_MOD(); // U/MOD
void _st_(); // <
void U_st_(); // U<
void INTERRUPT(); // INTERRUPT
void GetEXECUTE(); // @EXECUTE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_MAXDRV = 0x40d4; // MAXDRV size: 2
// {0x05, 0x00}

const unsigned short int pp_ASKMOUN = 0x460e; // ASKMOUN size: 2
// {0x3b, 0xaa}

const unsigned short int pp__i_BYE = 0x4619; // 'BYE size: 2
// {0x5d, 0x08}

const unsigned short int pp_SKIPPED = 0x4627; // SKIPPED size: 2
// {0x00, 0x00}

const unsigned short int pp_CANSKIP = 0x4635; // CANSKIP size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0x484e = 0x484e; // UNK_0x484e size: 2
// {0x90, 0x8d}

const unsigned short int pp_UNK_0x4852 = 0x4852; // UNK_0x4852 size: 2
// {0x4e, 0x95}

const unsigned short int pp_UNK_0x4856 = 0x4856; // UNK_0x4856 size: 4
// {0x4e, 0x95, 0x00, 0x00}

const unsigned short int pp_UNK_0x4901 = 0x4901; // UNK_0x4901 size: 17
// {0x00, 0x52, 0x32, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x56, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x41}





// ================================================
// 0x4094: WORD '>TIB' codep=0x224c parp=0x409d params=2 returns=0
// ================================================

void _gt_TIB() // >TIB
{
  Push(Read16(user_TIB)); // TIB @
  _2DUP(); // 2DUP
  Push(Pop() + Pop()); // +
  OFF_1(); // OFF_1
  SWAP(); // SWAP
  CMOVE_1(); // CMOVE_1
  Push(user__gt_IN); // >IN
  OFF_1(); // OFF_1
}


// ================================================
// 0x40b1: WORD 'DOSPARM' codep=0x224c parp=0x40bd params=2 returns=0
// ================================================

void DOSPARM() // DOSPARM
{
  Push(0x0080);
  COUNT(); // COUNT
  _gt_TIB(); // >TIB
  Exec("INTERPRET"); // call of word 0x1dd8 '(INTERPRET)'
}


// ================================================
// 0x40c9: WORD 'MAXDRV' codep=0x1d29 parp=0x40d4
// ================================================
// 0x40d4: db 0x05 0x00 '  '

// ================================================
// 0x40d6: WORD '?#DETTE' codep=0x224c parp=0x40e2 params=0 returns=2
// ================================================

void Is_n_DETTE() // ?#DETTE
{
  Push(0x0011);
  INTERRUPT(); // INTERRUPT
  Push(Read16(Read16(cc_AX)) & 0x00c0); // AX @ 0x00c0 AND
  Push(0x0040);
  _slash_(); // /
  Push(Pop()+1); // 1+
}


// ================================================
// 0x40fc: WORD 'XFCB' codep=0x224c parp=0x4105 params=0 returns=1
// ================================================

void XFCB() // XFCB
{
  Push(Read16(pp__i_FCB) - 7); // 'FCB @ 7 -
}


// ================================================
// 0x410f: WORD 'DRV' codep=0x224c parp=0x4117 params=0 returns=1
// ================================================

void DRV() // DRV
{
  Push(Read16(pp__i_FCB)); // 'FCB @
}


// ================================================
// 0x411d: WORD 'NAM' codep=0x224c parp=0x4125 params=0 returns=1
// ================================================

void NAM() // NAM
{
  Push(Read16(pp__i_FCB) + 1); // 'FCB @ 1+
}


// ================================================
// 0x412d: WORD 'TYP' codep=0x224c parp=0x4135 params=0 returns=1
// ================================================

void TYP() // TYP
{
  Push(Read16(pp__i_FCB) + 9); // 'FCB @ 9 +
}


// ================================================
// 0x4141: WORD 'CURBLK' codep=0x224c parp=0x414c params=0 returns=1
// ================================================

void CURBLK() // CURBLK
{
  Push(Read16(pp__i_FCB) + 0x000c); // 'FCB @ 0x000c +
}


// ================================================
// 0x4158: WORD 'RECSIZE' codep=0x224c parp=0x4164 params=0 returns=1
// ================================================

void RECSIZE() // RECSIZE
{
  Push(Read16(pp__i_FCB) + 0x000e); // 'FCB @ 0x000e +
}


// ================================================
// 0x4170: WORD 'FILESIZ' codep=0x224c parp=0x417c params=0 returns=1
// ================================================

void FILESIZ() // FILESIZ
{
  Push(Read16(pp__i_FCB) + 0x0010); // 'FCB @ 0x0010 +
}


// ================================================
// 0x4188: WORD 'CURREC' codep=0x224c parp=0x4193 params=0 returns=1
// ================================================

void CURREC() // CURREC
{
  Push(Read16(pp__i_FCB) + 0x0020); // 'FCB @ 0x0020 +
}


// ================================================
// 0x419f: WORD 'RELREC' codep=0x224c parp=0x41aa params=0 returns=1
// ================================================

void RELREC() // RELREC
{
  Push(Read16(pp__i_FCB) + 0x0021); // 'FCB @ 0x0021 +
}


// ================================================
// 0x41b6: WORD 'CLRFCB' codep=0x224c parp=0x41c1
// ================================================

void CLRFCB() // CLRFCB
{
  XFCB(); // XFCB
  Push(0x002c);
  Push(0);
  FILL_1(); // FILL_1
  NAM(); // NAM
  Push(0x000b);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  Push(0);
  XFCB(); // XFCB
  C_ex__1(); // C!_1
}


// ================================================
// 0x41dd: WORD 'SYSTEM' codep=0x224c parp=0x41e8 params=0 returns=0
// ================================================

void SYSTEM() // SYSTEM
{
  Push(0x2d97); // probable 'FCB'
  Push(7);
  Push(Pop() + Pop()); // +
  Push(pp__i_FCB); // 'FCB
  Store_1(); // !_1
}


// ================================================
// 0x41f6: WORD 'SYSUTIL' codep=0x224c parp=0x4202 params=0 returns=0
// ================================================

void SYSUTIL() // SYSUTIL
{
  Push(0x2d97); // probable 'FCB'
  Push(0x0033);
  Push(Pop() + Pop()); // +
  Push(pp__i_FCB); // 'FCB
  Store_1(); // !_1
}


// ================================================
// 0x4212: WORD 'DOSCALL' codep=0x224c parp=0x421e
// ================================================

void DOSCALL() // DOSCALL
{
  Push(Read16(cc_AX) + 1); // AX 1+
  C_ex__1(); // C!_1
  Push(0x0021);
  INTERRUPT(); // INTERRUPT
}


// ================================================
// 0x422c: WORD '>FCB' codep=0x224c parp=0x4235
// ================================================

void _gt_FCB() // >FCB
{
  DRV(); // DRV
  OFF_1(); // OFF_1
  NAM(); // NAM
  Push(0x000b);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  Push(Read16(cc_SI)); // SI
  Store_1(); // !_1
  Push(Read16(pp__i_FCB)); // 'FCB @
  Push(Read16(cc_DI)); // DI
  Store_1(); // !_1
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_DS)); // DS
  Store_1(); // !_1
  Push(Read16(cc_ES)); // ES
  Store_1(); // !_1
  Push(5);
  Push(Read16(cc_AX)); // AX
  Store_1(); // !_1
  Push(0x0029);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0x4269: WORD 'SETFCB' codep=0x224c parp=0x4274
// ================================================

void SETFCB() // SETFCB
{
  CLRFCB(); // CLRFCB
  Push(Read16(cc_BL)); // BL
  Exec("WORD"); // call of word 0x1f06 '(WORD)'
  Push(Pop()+1); // 1+
  _gt_FCB(); // >FCB
  Push(Read16(cc_AX)); // AX
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00ff);
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(Read16(cc_DI)) + 1); // DI @ 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc_BL)); // BL
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0x4298: WORD 'INIT' codep=0x224c parp=0x42a1
// ================================================

void INIT() // INIT
{
  Push(0x000d);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0x42a9: WORD 'FCBCALL' codep=0x224c parp=0x42b5
// ================================================

void FCBCALL() // FCBCALL
{
  Push(Read16(pp__i_FCB)); // 'FCB @
  Push(Read16(cc_DX)); // DX
  Store_1(); // !_1
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(cc_DS)); // DS
  Store_1(); // !_1
  DOSCALL(); // DOSCALL
  Push(Read16(cc_AX)); // AX
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0x42cb: WORD 'OPEN' codep=0x224c parp=0x42d4
// ================================================

void OPEN() // OPEN
{
  Push(0x000f);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x42dc: WORD 'CLOSE' codep=0x224c parp=0x42e6
// ================================================

void CLOSE() // CLOSE
{
  Push(0x0010);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x42ee: WORD 'SEARCH1' codep=0x224c parp=0x42fa
// ================================================

void SEARCH1() // SEARCH1
{
  Push(0x0011);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x4302: WORD 'READNEX' codep=0x224c parp=0x430e
// ================================================

void READNEX() // READNEX
{
  Push(0x0014);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x4316: WORD 'WRITENE' codep=0x224c parp=0x4322
// ================================================

void WRITENE() // WRITENE
{
  Push(0x0015);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x432a: WORD 'MAKE' codep=0x224c parp=0x4333
// ================================================

void MAKE() // MAKE
{
  Push(0x0016);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x433b: WORD 'DOS-DTA' codep=0x224c parp=0x4347
// ================================================

void DOS_dash_DTA() // DOS-DTA
{
  Push(pp_DTA_1); // DTA_1
  _2_at_(); // 2@
  Push(Read16(cc_DX)); // DX
  Store_1(); // !_1
  Push(Read16(cc_DS)); // DS
  Store_1(); // !_1
  Push(0x001a);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0x435b: WORD 'READ-RA' codep=0x224c parp=0x4367
// ================================================

void READ_dash_RA() // READ-RA
{
  Push(0x0021);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x436f: WORD 'WRITE-R' codep=0x224c parp=0x437b
// ================================================

void WRITE_dash_R() // WRITE-R
{
  Push(0x0022);
  FCBCALL(); // FCBCALL
}


// ================================================
// 0x4383: WORD 'UNK_0x4385' codep=0x224c parp=0x4385 params=1 returns=0
// ================================================

void UNK_0x4385() // UNK_0x4385
{
  ABORT("Bad name", 8);// (ABORT")
}


// ================================================
// 0x4392: WORD 'MAKE<NA' codep=0x224c parp=0x439e
// ================================================

void MAKE_st_NA() // MAKE<NA
{
  SETFCB(); // SETFCB
  UNK_0x4385(); // UNK_0x4385
  MAKE(); // MAKE
  ABORT("Can't create.", 13);// (ABORT")
}


// ================================================
// 0x43b6: WORD 'OPEN<NA' codep=0x224c parp=0x43c2
// ================================================

void OPEN_st_NA() // OPEN<NA
{
  SETFCB(); // SETFCB
  UNK_0x4385(); // UNK_0x4385
  OPEN(); // OPEN
  ABORT("Can't open.", 11);// (ABORT")
}


// ================================================
// 0x43d8: WORD '[FILE]' codep=0x224c parp=0x43e3
// ================================================

void _bo_FILE_bc_() // [FILE]
{
  DOS_dash_DTA(); // DOS-DTA
  Push(Read16(pp_FILE)); // FILE @
  FCBPFAS(); // FCBPFAS
  Push(Read16(Pop())); // @
  Push(pp__i_FCB); // 'FCB
  Store_1(); // !_1
  SWAP(); // SWAP
  RELREC(); // RELREC
  Store_1(); // !_1
  if (Pop() != 0)
  {
    READ_dash_RA(); // READ-RA
  } else
  {
    WRITE_dash_R(); // WRITE-R
  }
  Push(pp_DISK_dash_ERROR); // DISK-ERROR
  Store_1(); // !_1
}


// ================================================
// 0x4409: WORD 'SYSGEN' codep=0x224c parp=0x4414
// ================================================

void SYSGEN() // SYSGEN
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  FREEZE(); // FREEZE
  _ro_RESTORE_rc_(); // (RESTORE)
  SYSUTIL(); // SYSUTIL
  INIT(); // INIT
  MAKE_st_NA(); // MAKE<NA
  _ro_CS_ask__rc_(); // (CS?)
  Push(0x0100);
  Push(pp_DTA_1); // DTA_1
  _2_ex__1(); // 2!_1
  DOS_dash_DTA(); // DOS-DTA
  HERE(); // HERE
  Push(0x0100);
  _dash_(); // -
  RECSIZE(); // RECSIZE
  Store_1(); // !_1
  WRITENE(); // WRITENE
  _ro_SETUP_rc_(); // (SETUP)
  IsUNRAVEL(); // ?UNRAVEL
  CLOSE(); // CLOSE
  IsUNRAVEL(); // ?UNRAVEL
}


// ================================================
// 0x4444: WORD '4TH>DOS' codep=0x224c parp=0x4450
// ================================================

void _4TH_gt_DOS() // 4TH>DOS
{
  unsigned short int i, imax;
  SYSUTIL(); // SYSUTIL
  MAKE_st_NA(); // MAKE<NA
  Push(0x0400);
  RECSIZE(); // RECSIZE
  Store_1(); // !_1
  Push(Pop()+1); // 1+
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _ro_CS_ask__rc_(); // (CS?)
    Push(i); // I
    BLOCK_1(); // BLOCK_1
    Push(pp_DTA_1); // DTA_1
    _2_ex__1(); // 2!_1
    DOS_dash_DTA(); // DOS-DTA
    SYSUTIL(); // SYSUTIL
    WRITENE(); // WRITENE
    IsUNRAVEL(); // ?UNRAVEL
    i++;
  } while(i<imax); // (LOOP)

  CLOSE(); // CLOSE
  IsUNRAVEL(); // ?UNRAVEL
}


// ================================================
// 0x447e: WORD 'UNK_0x4480' codep=0x224c parp=0x4480
// ================================================

void UNK_0x4480() // UNK_0x4480
{
  unsigned short int a;
  Push(Read16(pp__i_FCB)); // 'FCB @
  a = Pop(); // >R
  Push(0);
  PAD(); // PAD
  C_ex__1(); // C!_1
  PAD(); // PAD
  Push(7);
  Push(Pop() + Pop()); // +
  Push(pp__i_FCB); // 'FCB
  Store_1(); // !_1
  CLRFCB(); // CLRFCB
  SET_STR_AS_PARAM("STAR2A  COM");
  NAM(); // NAM
  SWAP(); // SWAP
  CMOVE_1(); // CMOVE_1
  _ro_CS_ask__rc_(); // (CS?)
  PAD(); // PAD
  Push(0x0032);
  Push(Pop() + Pop()); // +
  Push(pp_DTA_1); // DTA_1
  _2_ex__1(); // 2!_1
  DOS_dash_DTA(); // DOS-DTA
  SEARCH1(); // SEARCH1
  Push(0x0042);
  NAM(); // NAM
  Push(4);
  Push(Pop() + Pop()); // +
  C_ex__1(); // C!_1
  SEARCH1(); // SEARCH1
  Push(Pop() | Pop()); // OR
  Push(a); // R>
  Push(pp__i_FCB); // 'FCB
  Store_1(); // !_1
}


// ================================================
// 0x44d6: WORD 'UNK_0x44d8' codep=0x224c parp=0x44d8
// ================================================

void UNK_0x44d8() // UNK_0x44d8
{
  Push(Read16(cc_DX)); // DX
  Store_1(); // !_1
  Push(0x0036);
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_AX))); // AX @
  ABS(); // ABS
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0x44f0: WORD 'UNK_0x44f2' codep=0x224c parp=0x44f2
// ================================================

void UNK_0x44f2() // UNK_0x44f2
{
  Push(0x0019);
  DOSCALL(); // DOSCALL
  Push(Read16(cc_AX)); // AX
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
}


// ================================================
// 0x4500: WORD 'SETMAXD' codep=0x224c parp=0x450c
// ================================================

void SETMAXD() // SETMAXD
{
  unsigned short int i, imax;
  Is_n_DETTE(); // ?#DETTE
  Push(2);
  MAX(); // MAX
  UNK_0x44f2(); // UNK_0x44f2
  MAX(); // MAX
  Push(pp_MAXDRV); // MAXDRV
  Store_1(); // !_1
  UNK_0x4480(); // UNK_0x4480
  if (Pop() == 0) return;
  Push(7);
  Push(Read16(pp_MAXDRV) + 1); // MAXDRV @ 1+

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0x44d8(); // UNK_0x44d8
    if (Pop() != 0)
    {
      Push(i); // I
      Push(pp_MAXDRV); // MAXDRV
      Store_1(); // !_1
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_MAXDRV)); // MAXDRV @
  Push(2);
  Push((Pop()==Pop())?1:0); // =
  Is_n_DETTE(); // ?#DETTE
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(1);
  Push(pp_MAXDRV); // MAXDRV
  Store_1(); // !_1
}


// ================================================
// 0x4558: WORD 'UNK_0x455a' codep=0x224c parp=0x455a params=0 returns=0
// ================================================

void UNK_0x455a() // UNK_0x455a
{
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0x44f2(); // UNK_0x44f2
  DRV(); // DRV
  C_ex__1(); // C!_1
}


// ================================================
// 0x456c: WORD '?1DRV' codep=0x224c parp=0x4576
// ================================================

void Is1DRV() // ?1DRV
{
  Is_n_DETTE(); // ?#DETTE
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  Push(0x0019);
  DOSCALL(); // DOSCALL
  Push(Read16(cc_AX)); // AX
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0x458c: WORD 'UNK_0x458e' codep=0x224c parp=0x458e
// ================================================

void UNK_0x458e() // UNK_0x458e
{
  Push(Pop()+1); // 1+
  Push(Read16(pp_MAXDRV)); // MAXDRV @
  OVER(); // OVER
  _st_(); // <
  Is1DRV(); // ?1DRV
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(1);
}


// ================================================
// 0x45a6: WORD 'SMARTOP' codep=0x224c parp=0x45b2
// ================================================

void SMARTOP() // SMARTOP
{
  unsigned short int a, b;
  OPEN(); // OPEN
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  a = Pop(); // >R
  UNK_0x455a(); // UNK_0x455a
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@

  label2:
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@
  UNK_0x458e(); // UNK_0x458e
  _2DUP(); // 2DUP
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(a); // I
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  DRV(); // DRV
  C_ex__1(); // C!_1
  OPEN(); // OPEN
  Push(a); // R>
  Pop(); // DROP
  b = Pop(); // >R
  goto label2;

  label1:
  Pop(); Pop(); // 2DROP
  Push(a); // R>
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0);
  DRV(); // DRV
  C_ex__1(); // C!_1
}


// ================================================
// 0x4602: WORD 'ASKMOUN' codep=0x1d29 parp=0x460e
// ================================================
// 0x460e: db 0x3b 0xaa '; '

// ================================================
// 0x4610: WORD ''BYE' codep=0x1d29 parp=0x4619
// ================================================
// 0x4619: db 0x5d 0x08 '] '

// ================================================
// 0x461b: WORD 'SKIPPED' codep=0x1d29 parp=0x4627
// ================================================
// 0x4627: db 0x00 0x00 '  '

// ================================================
// 0x4629: WORD 'CANSKIP' codep=0x1d29 parp=0x4635
// ================================================
// 0x4635: db 0x00 0x00 '  '

// ================================================
// 0x4637: WORD '<ASKMOU' codep=0x224c parp=0x4643 params=9 returns=0
// ================================================

void _st_ASKMOU() // <ASKMOU
{
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("Place disk with", 15); // (.")
  Exec("CR"); // call of word 0x26ee '(CR)'
  NAM(); // NAM
  Push(8);
  _dash_TRAILING(); // -TRAILING
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(".", 1); // (.")
  TYP(); // TYP
  Push(3);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" into ", 6); // (.")
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    PRINT("drive ", 6); // (.")
    Push(0x0040);
    Push(Pop() + Pop()); // +
    Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  } else
  {
    PRINT("any drive", 9); // (.")
  }
  Exec("CR"); // call of word 0x26ee '(CR)'
  PRINT("and press any key.", 18); // (.")
  Exec("KEY_1"); // call of word 0x25d7 '(KEY)'
  Push(0x001a);
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(pp_CANSKIP)); // CANSKIP @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp_SKIPPED); // SKIPPED
  ON_3(); // ON_3
}


// ================================================
// 0x46ce: WORD 'DOSMOUN' codep=0x224c parp=0x46da
// ================================================

void DOSMOUN() // DOSMOUN
{
  unsigned short int a;
  Push(pp_SKIPPED); // SKIPPED
  OFF_1(); // OFF_1
  a = Pop(); // >R
  INIT(); // INIT

  label2:
  Push(a); // I
  FCBPFAS(); // FCBPFAS
  Push(Read16(Pop())); // @
  Push(pp__i_FCB); // 'FCB
  Store_1(); // !_1
  SMARTOP(); // SMARTOP
  Push(Read16(regsp)); // DUP
  Push(Read16(pp_SKIPPED)); // SKIPPED @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  FLUSH_1(); // FLUSH_1
  INIT(); // INIT
  Push(a); // I
  FCBPFAS(); // FCBPFAS
  Push(Read16(Pop())); // @
  Push(pp__i_FCB); // 'FCB
  Store_1(); // !_1
  Push(pp_ASKMOUN); // ASKMOUN
  GetEXECUTE(); // @EXECUTE
  goto label2;

  label1:
  Push(0x0400);
  RECSIZE(); // RECSIZE
  Store_1(); // !_1
  FILESIZ(); // FILESIZ
  _2_at_(); // 2@
  SWAP(); // SWAP
  Push(0x0400);
  M_slash_(); // M/
  SWAP(); // SWAP
  Pop(); // DROP
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // R>
  DRIVENUMBERS(); // DRIVENUMBERS
  C_ex__1(); // C!_1
}


// ================================================
// 0x4738: WORD 'DOSUNMO' codep=0x224c parp=0x4744
// ================================================

void DOSUNMO() // DOSUNMO
{
  FCBPFAS(); // FCBPFAS
  Push(Read16(Pop())); // @
  Push(pp__i_FCB); // 'FCB
  Store_1(); // !_1
  CLOSE(); // CLOSE
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0x4754: WORD 'DR2' codep=0x224c parp=0x475c
// ================================================

void DR2() // DR2
{
  Push(0x43e3); // probable '[FILE]'
  Push(0x02d0);
  SYSTEM(); // SYSTEM
  Push(Read16(pp__i_FCB)); // 'FCB @
  NAM(); // NAM
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@
  Push(1);
  Push(Read16(cc_DOS_dash_FILE)); // DOS-FILE
  _st_MOUNT_gt_(); // <MOUNT>
  Pop(); // DROP
}


// ================================================
// 0x477a: WORD 'DR3' codep=0x224c parp=0x4782
// ================================================

void DR3() // DR3
{
  Push(0x43e3); // probable '[FILE]'
  Push(0x05dc);
  SYSUTIL(); // SYSUTIL
  Push(Read16(pp__i_FCB)); // 'FCB @
  NAM(); // NAM
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@
  Push(1);
  Push(Read16(cc_DOS_dash_FILE) + 1); // DOS-FILE 1+
  _st_MOUNT_gt_(); // <MOUNT>
  Pop(); // DROP
}


// ================================================
// 0x47a2: WORD 'USING' codep=0x224c parp=0x47ac
// ================================================

void USING() // USING
{
  Push(Read16(cc_DOS_dash_FILE)); // DOS-FILE
  UNMOUNT(); // UNMOUNT
  SYSTEM(); // SYSTEM
  SETFCB(); // SETFCB
  UNK_0x4385(); // UNK_0x4385
  DR2(); // DR2
}


// ================================================
// 0x47ba: WORD 'SETBLOC' codep=0x224c parp=0x47c6
// ================================================

void SETBLOC() // SETBLOC
{
  Push(Read16(cc_ES)); // ES
  Store_1(); // !_1
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_BX)); // BX
  Store_1(); // !_1
  Push(0x004a);
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_PSW)) & 1); // PSW @ 1 AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(Read16(cc_BX))); // BX @
    Push(1);
  } else
  {
    Push(0);
  }
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(cc_ES)); // ES
  Store_1(); // !_1
}


// ================================================
// 0x47f8: WORD 'SETSYSK' codep=0x224c parp=0x4804
// ================================================

void SETSYSK() // SETSYSK
{
  Push(0x7fff);
  _ro_CS_ask__rc_(); // (CS?)
  SETBLOC(); // SETBLOC
  Pop(); // DROP
  Push(Read16(regsp)); // DUP
  _ro_CS_ask__rc_(); // (CS?)
  Push(Pop() + Pop()); // +
  Push(0);
  Push(0x0040);
  U_slash_MOD(); // U/MOD
  Push(pp_SYSK); // SYSK
  Store_1(); // !_1
  Pop(); // DROP
  _ro_CS_ask__rc_(); // (CS?)
  SETBLOC(); // SETBLOC
  Pop(); // DROP
  Push(0x2000);
  U_st_(); // U<
  if (Pop() == 0) return;
  PRINT("Out of memory", 13); // (.")
  Push(0x0bb8);
  MS(); // MS
  BYE_1(); // BYE_1
}


// ================================================
// 0x484c: WORD 'UNK_0x484e' codep=0x1d29 parp=0x484e
// ================================================
// 0x484e: db 0x90 0x8d '  '

// ================================================
// 0x4850: WORD 'UNK_0x4852' codep=0x1d29 parp=0x4852
// ================================================
// 0x4852: db 0x4e 0x95 'N '

// ================================================
// 0x4854: WORD 'UNK_0x4856' codep=0x1d29 parp=0x4856
// ================================================
// 0x4856: db 0x4e 0x95 0x00 0x00 'N   '

// ================================================
// 0x485a: WORD '?ERR' codep=0x224c parp=0x4863 params=0 returns=1
// ================================================

void IsERR() // ?ERR
{
  Push(Read16(Read16(cc_PSW)) & 1); // PSW @ 1 AND
}


// ================================================
// 0x486d: WORD 'UNK_0x486f' codep=0x224c parp=0x486f
// ================================================

void UNK_0x486f() // UNK_0x486f
{
  Push(Read16(pp_UNK_0x484e)); // UNK_0x484e @
  Push(Read16(pp_UNK_0x4852)); // UNK_0x4852 @
  Push(pp_UNK_0x4856); // UNK_0x4856
  Store_1(); // !_1
  Push(pp_UNK_0x4856 + 2); // UNK_0x4856 2+
  OFF_1(); // OFF_1
  Push(Read16(cc_DX)); // DX
  Store_1(); // !_1
  Push(3);
  Push(Read16(cc_AX)); // AX
  C_ex__1(); // C!_1
  _ro_CS_ask__rc_(); // (CS?)
  Push(Read16(cc_ES)); // ES
  Store_1(); // !_1
  Push(pp_UNK_0x4856); // UNK_0x4856
  Push(Read16(cc_BX)); // BX
  Store_1(); // !_1
  Push(0x004b);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0x48a1: WORD '[LDS]' codep=0x224c parp=0x48ab
// ================================================

void _bo_LDS_bc_() // [LDS]
{
  unsigned short int a, b;
  UNK_0x486f(); // UNK_0x486f
  IsERR(); // ?ERR
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  a = Pop(); // >R
  UNK_0x455a(); // UNK_0x455a
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@

  label2:
  DRV(); // DRV
  Push(Read8(Pop())&0xFF); // C@
  UNK_0x458e(); // UNK_0x458e
  _2DUP(); // 2DUP
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(a); // I
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  DRV(); // DRV
  C_ex__1(); // C!_1
  UNK_0x486f(); // UNK_0x486f
  IsERR(); // ?ERR
  Push(a); // R>
  Pop(); // DROP
  b = Pop(); // >R
  goto label2;

  label1:
  Pop(); Pop(); // 2DROP
  Push(a); // R>
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0);
  DRV(); // DRV
  C_ex__1(); // C!_1
}


// ================================================
// 0x48ff: WORD 'UNK_0x4901' codep=0x1d29 parp=0x4901
// ================================================
// 0x4901: db 0x00 0x52 0x32 0x20 0x20 0x20 0x20 0x20 0x20 0x4f 0x56 0x4c 0x00 0x00 0x00 0x00 0x41 ' R2      OVL    A'

// ================================================
// 0x4912: WORD '(LDS)' codep=0x224c parp=0x491c
// ================================================

void _ro_LDS_rc_() // (LDS)
{
  unsigned short int a;
  Push(Read16(pp__i_FCB)); // 'FCB @
  a = Pop(); // >R
  Push(pp_UNK_0x4901); // UNK_0x4901
  Push(pp__i_FCB); // 'FCB
  Store_1(); // !_1
  OVER(); // OVER
  _gt_FCB(); // >FCB
  Push(pp_UNK_0x4852); // UNK_0x4852
  Store_1(); // !_1
  Push(pp_UNK_0x484e); // UNK_0x484e
  Store_1(); // !_1

  label2:
  _bo_LDS_bc_(); // [LDS]
  Push(Read16(pp_SKIPPED)); // SKIPPED @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_ASKMOUN); // ASKMOUN
  GetEXECUTE(); // @EXECUTE
  goto label2;

  label1:
  Push(a); // R>
  Push(pp__i_FCB); // 'FCB
  Store_1(); // !_1
}


