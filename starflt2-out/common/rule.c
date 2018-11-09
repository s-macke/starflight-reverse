
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
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int pp_TRACE; // TRACE
void _co_(); // ,
void ALLOT(); // ALLOT
void C_co_(); // C,
void HERE(); // HERE
void _i__2(); // '_2
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _099(); // 099
void FILL_2(); // FILL_2
void _gt_0FONT_2(); // >0FONT_2
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
const unsigned short int pp_WAB57 = 0xab57; // WAB57 size: 2
// {0x06, 0x00}

const unsigned short int pp_SMART = 0xab63; // SMART size: 2
// {0x00, 0x00}


const unsigned short int cc_WAB67 = 0xab67; // WAB67
const unsigned short int cc_WAB6B = 0xab6b; // WAB6B
const unsigned short int cc_WAB6F = 0xab6f; // WAB6F
const unsigned short int cc_WAB73 = 0xab73; // WAB73
const unsigned short int cc_WAB77 = 0xab77; // WAB77
const unsigned short int cc_WAB7B = 0xab7b; // WAB7B
const unsigned short int cc_WAB7F = 0xab7f; // WAB7F



// ================================================
// 0xab55: WORD 'WAB57' codep=0x1d29 wordp=0xab57
// ================================================
// 0xab57: db 0x06 0x00 '  '

// ================================================
// 0xab59: WORD 'SMART' codep=0x1d29 wordp=0xab63
// ================================================
// 0xab63: db 0x00 0x00 '  '

// ================================================
// 0xab65: WORD 'WAB67' codep=0x2214 wordp=0xab67
// ================================================
// 0xab67: dw 0x00ff

// ================================================
// 0xab69: WORD 'WAB6B' codep=0x2214 wordp=0xab6b
// ================================================
// 0xab6b: dw 0xec67

// ================================================
// 0xab6d: WORD 'WAB6F' codep=0x2214 wordp=0xab6f
// ================================================
// 0xab6f: dw 0xec68

// ================================================
// 0xab71: WORD 'WAB73' codep=0x2214 wordp=0xab73
// ================================================
// 0xab73: dw 0xec69

// ================================================
// 0xab75: WORD 'WAB77' codep=0x2214 wordp=0xab77
// ================================================
// 0xab77: dw 0xec6a

// ================================================
// 0xab79: WORD 'WAB7B' codep=0x2214 wordp=0xab7b
// ================================================
// 0xab7b: dw 0xec78

// ================================================
// 0xab7d: WORD 'WAB7F' codep=0x2214 wordp=0xab7f
// ================================================
// 0xab7f: dw 0xec84

// ================================================
// 0xab81: WORD 'WAB83' codep=0x224c wordp=0xab83 params=1 returns=1
// ================================================

void WAB83() // WAB83
{
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
}


// ================================================
// 0xab8d: WORD 'C+!' codep=0x224c wordp=0xab95 params=2 returns=0
// ================================================

void C_plus__ex_() // C+!
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex__2(); // C!_2
}


// ================================================
// 0xaba3: WORD 'WABA5' codep=0x224c wordp=0xaba5 params=1 returns=0
// ================================================

void WABA5() // WABA5
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(0xab6b); // 'WAB6B'
  Store_2(); // !_2
  Push(a + 1); // I 1+
  Push(0xab6f); // 'WAB6F'
  Store_2(); // !_2
  Push(a + 2); // I 2+
  Push(0xab73); // 'WAB73'
  Store_2(); // !_2
  Push(a + 3); // R> 3 +
  Push(0xab77); // 'WAB77'
  Store_2(); // !_2
  Push((Read16(Read16(cc_WAB6B))&0xFF) * 2 + Read16(cc_WAB77)); // WAB6B C@ 2* WAB77 +
  Push(0xab7b); // 'WAB7B'
  Store_2(); // !_2
  Push((Read16(Read16(cc_WAB6F))&0xFF) * 2 + Read16(cc_WAB7B)); // WAB6F C@ 2* WAB7B +
  Push(0xab7f); // 'WAB7F'
  Store_2(); // !_2
}


// ================================================
// 0xabf1: WORD 'DISTRAC' codep=0x224c wordp=0xabfd params=1 returns=0
// ================================================

void DISTRAC() // DISTRAC
{
  WABA5(); // WABA5
  Push(Read16(cc_WAB7F)); // WAB7F
  Push(Read16(Read16(cc_WAB6F))&0xFF); // WAB6F C@
  Push(Read16(cc_WAB67)); // WAB67
  FILL_2(); // FILL_2
}


// ================================================
// 0xac0b: WORD 'WAC0D' codep=0x224c wordp=0xac0d params=1 returns=1
// ================================================

void WAC0D() // WAC0D
{
  unsigned short int a, i, imax, b;
  a = Pop(); // >R
  Push(Read16(cc_TRUE)); // TRUE
  Push(a + 3); // I 3 +
  Push(Read16(regsp)); // DUP
  Push(Pop() + (Read16(a)&0xFF)); //  I C@ +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_WAB7F)); // WAB7F
    Push(i); // I
    WAB83(); // WAB83
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(Pop()==Read16(cc_WAB67)?1:0); //  WAB67 =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(Read16(cc_WAB7B)); // WAB7B
      Push(i); // I
      WAB83(); // WAB83
      Push(Pop() * 2); //  2*
      Push(Pop() + Pop()); // +
      GetEXECUTE(); // @EXECUTE
      Push(!(Pop()==0?1:0)); //  0= NOT
      Push(Read16(regsp)); // DUP
      Push(Read16(cc_WAB7F)); // WAB7F
      Push(i); // I
      WAB83(); // WAB83
      Push(Pop() + Pop()); // +
      C_ex__2(); // C!_2
    }
    Push(Pop()==!(!((Read16(i)&0xFF) & 0x0080))?1:0); //  I C@ 0x0080 AND NOT NOT =
    Push(Pop() & Pop()); // AND
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
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
    Push(a + 1); // I' 1+
    GetEXECUTE(); // @EXECUTE
    Push(b); // R>
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xac8d: WORD 'EXPERT' codep=0x224c wordp=0xac98
// ================================================

void EXPERT() // EXPERT
{
  unsigned short int a, i, imax;
  Push(pp_WAB57); // WAB57
  _099(); // 099
  Push(Read16(pp_TRACE)); // TRACE @
  if (Pop() != 0)
  {
    _gt_0FONT_2(); // >0FONT_2
  }
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  HERE(); // HERE
  a = Pop(); // >R
  C_co_(); // C,
  C_co_(); // C,
  Push(0);
  C_co_(); // C,
  Push(a); // R>
  WABA5(); // WABA5
  Push((Read16(Read16(cc_WAB6B))&0xFF) * 2 + (Read16(Read16(cc_WAB6F))&0xFF) * 3); // WAB6B C@ 2* WAB6F C@ 3 * +
  ALLOT(); // ALLOT
  CODE(); // (;CODE) inlined assembler code
// 0xaccc: call   1649
  Push(Read16(regsp)); // DUP
  WABA5(); // WABA5
  _gt_V(); // >V
  Push(Read16(cc_WAB77)); // WAB77
  Push(Read16(regsp)); // DUP
  Push(Pop() + (Read16(Read16(cc_WAB73))&0xFF) * 2); //  WAB73 C@ 2* +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(i)); // I @
    WAC0D(); // WAC0D
    if (Pop() != 0)
    {
      V_gt_(); // V>
      Push(Read16(regsp)); // DUP
      WABA5(); // WABA5
      Push(!Pop()); //  NOT
      _gt_V(); // >V
      imax = i; // LEAVE
      Push(Read16(pp_SMART)); // SMART @
      if (Pop() != 0)
      {
        Push(((i - Read16(cc_WAB77) >> 1) >> 1) * 2 + Read16(cc_WAB77)); // I WAB77 - 2/ 2/ 2* WAB77 +
        Push(Read16(regsp)); // DUP
        Push(Read16(Pop())); //  @
        Push(Read16(i)); // I @
        SWAP(); // SWAP
        Push(i); // I
        Store_2(); // !_2
        SWAP(); // SWAP
        Store_2(); // !_2
      }
    }
    Push(2);
    i += Pop();
  } while(i<imax); // (/LOOP)

  V_gt_(); // V>
  Push(!Pop()); //  NOT
}


// ================================================
// 0xad31: WORD '-->' codep=0x224c wordp=0xad39
// ================================================

void _dash__dash__gt_() // -->
{
  _i__2(); // '_2
}


// ================================================
// 0xad3d: WORD 'WAD3F' codep=0x224c wordp=0xad3f params=1 returns=1
// ================================================

void WAD3F() // WAD3F
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(-1);
  Push(Read16(pp_WAB57) * 2); // WAB57 @ 2*
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(Read16(cc_WAB7B) + i)==a?1:0); // WAB7B I + @ J =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(i >> 1); // I 2/
      imax = i; // LEAVE
    }
    Push(2);
    i += Pop();
  } while(i<imax); // (/LOOP)

  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xad71: WORD 'WAD73' codep=0x224c wordp=0xad73
// ================================================

void WAD73() // WAD73
{
  unsigned short int a;
  _dash__dash__gt_(); // -->
  a = Pop(); // >R
  Push(a); // I
  Push(0xad39); // '-->'
  Push((Pop()==Pop())?1:0); // =
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(a); // I
    WAD3F(); // WAD3F
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(Read16(pp_WAB57)); // WAB57 @
      Push(a); // I
      OVER(); // OVER
      Push(Pop() * 2 + Read16(cc_WAB7B)); //  2* WAB7B +
      Store_2(); // !_2
      Push(Read16(Read16(cc_WAB6F))&0xFF); // WAB6F C@
      Push(Read16(pp_WAB57)); // WAB57 @
      _gt_(); // >
      Push(!Pop()); //  NOT
      ABORT("Condition overflow", 18);// (ABORT")
      Push(1);
      Push(pp_WAB57); // WAB57
      _plus__ex__2(); // +!_2
    }
  } else
  {
    Push(-1);
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xadd6: WORD 'RULE:' codep=0x224c wordp=0xade0
// ================================================

void RULE_c_() // RULE:
{
  Push(Read16(Read16(cc_WAB6B))&0xFF); // WAB6B C@
  Push(Read16(Read16(cc_WAB73))&0xFF); // WAB73 C@
  _gt_(); // >
  Push(!Pop()); //  NOT
  ABORT("Rule overflow", 13);// (ABORT")
  HERE(); // HERE
  Push(0);
  C_co_(); // C,
  Push(0x3a48); // 'NOP'
  _co_(); // ,
  do
  {
    WAD73(); // WAD73
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      _i__2(); // '_2
      Push(Read16(regsp)); // DUP
      Push(0x51c5); // 'TRUE'
      Push((Pop()==Pop())?1:0); // =
      OVER(); // OVER
      Push(0x51d1); // 'FALSE'
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() | Pop()); // OR
      Push(!Pop()); //  NOT
      ABORT("TRUE or FALSE needed", 20);// (ABORT")
      EXECUTE(); // EXECUTE
      Push(Pop() * 0x0080); //  0x0080 *
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
  Push(Pop() + 1); //  1+
  Store_2(); // !_2
  Push((Read16(Read16(cc_WAB73))&0xFF) * 2 + Read16(cc_WAB77)); // WAB73 C@ 2* WAB77 +
  Store_2(); // !_2
  Push(1);
  Push(Read16(cc_WAB73)); // WAB73
  C_plus__ex_(); // C+!
}


