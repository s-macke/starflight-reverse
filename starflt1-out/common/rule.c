
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
void _co_(); // ,
void ALLOT(); // ALLOT
void C_co_(); // C,
void HERE(); // HERE
void _i__1(); // '_1
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex_(); // +!
void OFF(); // OFF
void FILL_1(); // FILL_1
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void _gt_(); // >
void _0_st_(); // 0<
void EXECUTE(); // EXECUTE
void GetEXECUTE(); // @EXECUTE
void _gt_V(); // >V
void V_gt_(); // V>


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_COND_dash_CNT = 0xb68d; // COND-CNT size: 2
// {0x0d, 0x00}


const unsigned short int cc_TRUE = 0xb698; // TRUE
const unsigned short int cc_FALSE = 0xb6a4; // FALSE
const unsigned short int cc_UNKNOWN = 0xb6b2; // UNKNOWN
const unsigned short int cc_RULELIM = 0xb6c0; // RULELIM
const unsigned short int cc_CONDLIM = 0xb6ce; // CONDLIM
const unsigned short int cc_RULECNT = 0xb6dc; // RULECNT
const unsigned short int cc_RULEARR = 0xb6ea; // RULEARR
const unsigned short int cc_CONDARR = 0xb6f8; // CONDARR
const unsigned short int cc_CFLGARR = 0xb706; // CFLGARR



// ================================================
// 0xb680: WORD 'COND-CNT' codep=0x1d29 parp=0xb68d
// ================================================
// 0xb68d: db 0x0d 0x00 '  '

// ================================================
// 0xb68f: WORD 'TRUE' codep=0x2214 parp=0xb698
// ================================================
// 0xb698: dw 0x0001

// ================================================
// 0xb69a: WORD 'FALSE' codep=0x2214 parp=0xb6a4
// ================================================
// 0xb6a4: dw 0x0000

// ================================================
// 0xb6a6: WORD 'UNKNOWN' codep=0x2214 parp=0xb6b2
// ================================================
// 0xb6b2: dw 0x00ff

// ================================================
// 0xb6b4: WORD 'RULELIM' codep=0x2214 parp=0xb6c0
// ================================================
// 0xb6c0: dw 0xeb86

// ================================================
// 0xb6c2: WORD 'CONDLIM' codep=0x2214 parp=0xb6ce
// ================================================
// 0xb6ce: dw 0xeb87

// ================================================
// 0xb6d0: WORD 'RULECNT' codep=0x2214 parp=0xb6dc
// ================================================
// 0xb6dc: dw 0xeb88

// ================================================
// 0xb6de: WORD 'RULEARR' codep=0x2214 parp=0xb6ea
// ================================================
// 0xb6ea: dw 0xeb89

// ================================================
// 0xb6ec: WORD 'CONDARR' codep=0x2214 parp=0xb6f8
// ================================================
// 0xb6f8: dw 0xeb97

// ================================================
// 0xb6fa: WORD 'CFLGARR' codep=0x2214 parp=0xb706
// ================================================
// 0xb706: dw 0xebb3

// ================================================
// 0xb708: WORD 'XC@' codep=0x224c parp=0xb710 params=1 returns=1
// ================================================

void XC_at_() // XC@
{
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xb71a: WORD 'C+!' codep=0x224c parp=0xb722 params=2 returns=0
// ================================================

void C_plus__ex_() // C+!
{
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xb730: WORD '>EXPERT' codep=0x224c parp=0xb73c params=1 returns=0
// ================================================

void _gt_EXPERT() // >EXPERT
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(0xb6c0); // probable 'RULELIM'
  Store_3(); // !_3
  Push(a); // I
  Push(Pop()+1); // 1+
  Push(0xb6ce); // probable 'CONDLIM'
  Store_3(); // !_3
  Push(a); // I
  Push(Pop()+2); // 2+
  Push(0xb6dc); // probable 'RULECNT'
  Store_3(); // !_3
  Push(a); // R>
  Push(3);
  Push(Pop() + Pop()); // +
  Push(0xb6ea); // probable 'RULEARR'
  Store_3(); // !_3
  Push((Read16(Read16(cc_RULELIM))&0xFF) * 2 + Read16(cc_RULEARR)); // RULELIM C@ 2* RULEARR +
  Push(0xb6f8); // probable 'CONDARR'
  Store_3(); // !_3
  Push((Read16(Read16(cc_CONDLIM))&0xFF) * 2 + Read16(cc_CONDARR)); // CONDLIM C@ 2* CONDARR +
  Push(0xb706); // probable 'CFLGARR'
  Store_3(); // !_3
}


// ================================================
// 0xb788: WORD 'DISTRACT' codep=0x224c parp=0xb795 params=1 returns=0
// ================================================

void DISTRACT() // DISTRACT
{
  _gt_EXPERT(); // >EXPERT
  Push(Read16(cc_CFLGARR)); // CFLGARR
  Push(Read16(Read16(cc_CONDLIM))&0xFF); // CONDLIM C@
  Push(Read16(cc_UNKNOWN)); // UNKNOWN
  FILL_1(); // FILL_1
}


// ================================================
// 0xb7a3: WORD 'EXECUTE-RULE' codep=0x224c parp=0xb7b4 params=1 returns=1
// ================================================

void EXECUTE_dash_RULE() // EXECUTE-RULE
{
  unsigned short int a, i, imax, b;
  a = Pop(); // >R
  Push(Read16(cc_TRUE)); // TRUE
  Push(a); // I
  Push(3);
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_CFLGARR)); // CFLGARR
    Push(i); // I
    XC_at_(); // XC@
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(regsp)); // DUP
    Push(Read16(cc_UNKNOWN)); // UNKNOWN
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(Read16(cc_CONDARR)); // CONDARR
      Push(i); // I
      XC_at_(); // XC@
      Push(Pop()*2); // 2*
      Push(Pop() + Pop()); // +
      GetEXECUTE(); // @EXECUTE
      if (Pop() == 0) Push(1); else Push(0); // NOT
      if (Pop() == 0) Push(1); else Push(0); // NOT
      Push(Read16(regsp)); // DUP
      Push(Read16(cc_CFLGARR)); // CFLGARR
      Push(i); // I
      XC_at_(); // XC@
      Push(Pop() + Pop()); // +
      C_ex_(); // C!
    }
    Push(i); // I
    Push(Read8(Pop())&0xFF); // C@
    Push(0x0080);
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() & Pop()); // AND
    Push(Read16(regsp)); // DUP
    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    Push(1);
    i += Pop();
  } while(i<imax); // (/LOOP)

  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    b = Pop(); // >R
    Push(a); // I'
    Push(Pop()+1); // 1+
    GetEXECUTE(); // @EXECUTE
    Push(b); // R>
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xb834: WORD 'EXPERT' codep=0x224c parp=0xb83f
// ================================================

void EXPERT() // EXPERT
{
  unsigned short int a, i, imax;
  Push(pp_COND_dash_CNT); // COND-CNT
  OFF(); // OFF
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  HERE(); // HERE
  a = Pop(); // >R
  C_co_(); // C,
  C_co_(); // C,
  Push(0);
  C_co_(); // C,
  Push(a); // R>
  _gt_EXPERT(); // >EXPERT
  Push((Read16(Read16(cc_RULELIM))&0xFF) * 2 + (Read16(Read16(cc_CONDLIM))&0xFF) * 3); // RULELIM C@ 2* CONDLIM C@ 3 * +
  ALLOT(); // ALLOT
  CODE(); // (;CODE) inlined assembler code
// 0xb869: call   1649
  Push(Read16(regsp)); // DUP
  _gt_EXPERT(); // >EXPERT
  _gt_V(); // >V
  Push(Read16(cc_RULEARR)); // RULEARR
  Push(Read16(regsp)); // DUP
  Push((Read16(Read16(cc_RULECNT))&0xFF) * 2); // RULECNT C@ 2*
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(Read16(Pop())); // @
    EXECUTE_dash_RULE(); // EXECUTE-RULE
    if (Pop() != 0)
    {
      V_gt_(); // V>
      Push(Read16(regsp)); // DUP
      _gt_EXPERT(); // >EXPERT
      if (Pop() == 0) Push(1); else Push(0); // NOT
      _gt_V(); // >V
      imax = i; // LEAVE
      Push(i); // I
      Push(Read16(cc_RULEARR)); // RULEARR
      _dash_(); // -
      Push(Pop()>>1); // 2/
      Push(Pop()>>1); // 2/
      Push(Pop()*2); // 2*
      Push(Read16(cc_RULEARR)); // RULEARR
      Push(Pop() + Pop()); // +
      Push(Read16(regsp)); // DUP
      Push(Read16(Pop())); // @
      Push(i); // I
      Push(Read16(Pop())); // @
      SWAP(); // SWAP
      Push(i); // I
      Store_3(); // !_3
      SWAP(); // SWAP
      Store_3(); // !_3
    }
    Push(2);
    i += Pop();
  } while(i<imax); // (/LOOP)

  V_gt_(); // V>
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xb8c6: WORD '-->' codep=0x224c parp=0xb8ce
// ================================================

void _dash__dash__gt_() // -->
{
  _i__1(); // '_1
}


// ================================================
// 0xb8d2: WORD '?INDEX' codep=0x224c parp=0xb8dd params=1 returns=1
// ================================================

void IsINDEX() // ?INDEX
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(-1);
  Push(Read16(pp_COND_dash_CNT) * 2); // COND-CNT @ 2*
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_CONDARR)); // CONDARR
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())); // @
    Push(a); // J
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(i); // I
      Push(Pop()>>1); // 2/
      imax = i; // LEAVE
    }
    Push(2);
    i += Pop();
  } while(i<imax); // (/LOOP)

  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xb90f: WORD 'CONDITION' codep=0x224c parp=0xb91d
// ================================================

void CONDITION() // CONDITION
{
  unsigned short int a;
  _dash__dash__gt_(); // -->
  a = Pop(); // >R
  Push(a); // I
  Push(0xb8ce); // probable '-->'
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(Read16(Read16(cc_CONDLIM))&0xFF); // CONDLIM C@
    Push(Read16(pp_COND_dash_CNT)); // COND-CNT @
    _gt_(); // >
    if (Pop() == 0) Push(1); else Push(0); // NOT
    ABORT("Condition overflow", 18);// (ABORT")
    Push(a); // I
    IsINDEX(); // ?INDEX
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(Read16(pp_COND_dash_CNT)); // COND-CNT @
      Push(a); // I
      OVER(); // OVER
      Push(Pop()*2); // 2*
      Push(Read16(cc_CONDARR)); // CONDARR
      Push(Pop() + Pop()); // +
      Store_3(); // !_3
      Push(1);
      Push(pp_COND_dash_CNT); // COND-CNT
      _plus__ex_(); // +!
    }
  } else
  {
    Push(-1);
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xb980: WORD 'RULE:' codep=0x224c parp=0xb98a
// ================================================

void RULE_c_() // RULE:
{
  Push(Read16(Read16(cc_RULELIM))&0xFF); // RULELIM C@
  Push(Read16(Read16(cc_RULECNT))&0xFF); // RULECNT C@
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ABORT("Rule overflow", 13);// (ABORT")
  HERE(); // HERE
  Push(0);
  C_co_(); // C,
  Push(0x3a48); // probable 'NOP'
  _co_(); // ,
  do
  {
    CONDITION(); // CONDITION
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      _i__1(); // '_1
      Push(Read16(regsp)); // DUP
      Push(0xb698); // probable 'TRUE'
      Push((Pop()==Pop())?1:0); // =
      OVER(); // OVER
      Push(0xb6a4); // probable 'FALSE'
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() | Pop()); // OR
      if (Pop() == 0) Push(1); else Push(0); // NOT
      ABORT("TRUE or FALSE needed", 20);// (ABORT")
      EXECUTE(); // EXECUTE
      Push(0x0080);
      Push(Pop() * Pop()); // *
      Push(Pop() + Pop()); // +
      C_co_(); // C,
      Push(1);
      OVER(); // OVER
      C_plus__ex_(); // C+!
      Push(0);
    }
  } while(Pop() == 0);
  _dash__dash__gt_(); // -->
  OVER(); // OVER
  Push(Pop()+1); // 1+
  Store_3(); // !_3
  Push((Read16(Read16(cc_RULECNT))&0xFF) * 2 + Read16(cc_RULEARR)); // RULECNT C@ 2* RULEARR +
  Store_3(); // !_3
  Push(1);
  Push(Read16(cc_RULECNT)); // RULECNT
  C_plus__ex_(); // C+!
}


