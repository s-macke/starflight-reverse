
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
const unsigned short int pp_UNK_0xab57 = 0xab57; // UNK_0xab57 size: 2
// {0x06, 0x00}

const unsigned short int pp_SMART = 0xab63; // SMART size: 2
// {0x00, 0x00}


const unsigned short int cc_UNK_0xab67 = 0xab67; // UNK_0xab67
const unsigned short int cc_UNK_0xab6b = 0xab6b; // UNK_0xab6b
const unsigned short int cc_UNK_0xab6f = 0xab6f; // UNK_0xab6f
const unsigned short int cc_UNK_0xab73 = 0xab73; // UNK_0xab73
const unsigned short int cc_UNK_0xab77 = 0xab77; // UNK_0xab77
const unsigned short int cc_UNK_0xab7b = 0xab7b; // UNK_0xab7b
const unsigned short int cc_UNK_0xab7f = 0xab7f; // UNK_0xab7f



// ================================================
// 0xab55: WORD 'UNK_0xab57' codep=0x1d29 parp=0xab57
// ================================================
// 0xab57: db 0x06 0x00 '  '

// ================================================
// 0xab59: WORD 'SMART' codep=0x1d29 parp=0xab63
// ================================================
// 0xab63: db 0x00 0x00 '  '

// ================================================
// 0xab65: WORD 'UNK_0xab67' codep=0x2214 parp=0xab67
// ================================================
// 0xab67: dw 0x00ff

// ================================================
// 0xab69: WORD 'UNK_0xab6b' codep=0x2214 parp=0xab6b
// ================================================
// 0xab6b: dw 0xec67

// ================================================
// 0xab6d: WORD 'UNK_0xab6f' codep=0x2214 parp=0xab6f
// ================================================
// 0xab6f: dw 0xec68

// ================================================
// 0xab71: WORD 'UNK_0xab73' codep=0x2214 parp=0xab73
// ================================================
// 0xab73: dw 0xec69

// ================================================
// 0xab75: WORD 'UNK_0xab77' codep=0x2214 parp=0xab77
// ================================================
// 0xab77: dw 0xec6a

// ================================================
// 0xab79: WORD 'UNK_0xab7b' codep=0x2214 parp=0xab7b
// ================================================
// 0xab7b: dw 0xec78

// ================================================
// 0xab7d: WORD 'UNK_0xab7f' codep=0x2214 parp=0xab7f
// ================================================
// 0xab7f: dw 0xec84

// ================================================
// 0xab81: WORD 'UNK_0xab83' codep=0x224c parp=0xab83
// ================================================

void UNK_0xab83() // UNK_0xab83
{
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xab8d: WORD 'C+!' codep=0x224c parp=0xab95
// ================================================

void C_plus__ex_() // C+!
{
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex__2(); // C!_2
}


// ================================================
// 0xaba3: WORD 'UNK_0xaba5' codep=0x224c parp=0xaba5
// ================================================

void UNK_0xaba5() // UNK_0xaba5
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(0xab6b); // probable 'UNK_0xab6b'
  Store_2(); // !_2
  Push(a); // I
  Push(Pop()+1); // 1+
  Push(0xab6f); // probable 'UNK_0xab6f'
  Store_2(); // !_2
  Push(a); // I
  Push(Pop()+2); // 2+
  Push(0xab73); // probable 'UNK_0xab73'
  Store_2(); // !_2
  Push(a); // R>
  Push(3);
  Push(Pop() + Pop()); // +
  Push(0xab77); // probable 'UNK_0xab77'
  Store_2(); // !_2
  Push(Read16(cc_UNK_0xab6b)); // UNK_0xab6b
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()*2); // 2*
  Push(Read16(cc_UNK_0xab77)); // UNK_0xab77
  Push(Pop() + Pop()); // +
  Push(0xab7b); // probable 'UNK_0xab7b'
  Store_2(); // !_2
  Push(Read16(cc_UNK_0xab6f)); // UNK_0xab6f
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()*2); // 2*
  Push(Read16(cc_UNK_0xab7b)); // UNK_0xab7b
  Push(Pop() + Pop()); // +
  Push(0xab7f); // probable 'UNK_0xab7f'
  Store_2(); // !_2
}


// ================================================
// 0xabf1: WORD 'DISTRAC' codep=0x224c parp=0xabfd
// ================================================

void DISTRAC() // DISTRAC
{
  UNK_0xaba5(); // UNK_0xaba5
  Push(Read16(cc_UNK_0xab7f)); // UNK_0xab7f
  Push(Read16(cc_UNK_0xab6f)); // UNK_0xab6f
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc_UNK_0xab67)); // UNK_0xab67
  FILL_2(); // FILL_2
}


// ================================================
// 0xac0b: WORD 'UNK_0xac0d' codep=0x224c parp=0xac0d
// ================================================

void UNK_0xac0d() // UNK_0xac0d
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
    Push(Read16(cc_UNK_0xab7f)); // UNK_0xab7f
    Push(i); // I
    UNK_0xab83(); // UNK_0xab83
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(regsp)); // DUP
    Push(Read16(cc_UNK_0xab67)); // UNK_0xab67
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(Read16(cc_UNK_0xab7b)); // UNK_0xab7b
      Push(i); // I
      UNK_0xab83(); // UNK_0xab83
      Push(Pop()*2); // 2*
      Push(Pop() + Pop()); // +
      GetEXECUTE(); // @EXECUTE
      if (Pop() == 0) Push(1); else Push(0); // 0=
      if (Pop() == 0) Push(1); else Push(0); // NOT
      Push(Read16(regsp)); // DUP
      Push(Read16(cc_UNK_0xab7f)); // UNK_0xab7f
      Push(i); // I
      UNK_0xab83(); // UNK_0xab83
      Push(Pop() + Pop()); // +
      C_ex__2(); // C!_2
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
// 0xac8d: WORD 'EXPERT' codep=0x224c parp=0xac98
// ================================================

void EXPERT() // EXPERT
{
  unsigned short int a, i, imax;
  Push(pp_UNK_0xab57); // UNK_0xab57
  _099(); // 099
  Push(pp_TRACE); // TRACE
  Push(Read16(Pop())); // @
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
  UNK_0xaba5(); // UNK_0xaba5
  Push(Read16(cc_UNK_0xab6b)); // UNK_0xab6b
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()*2); // 2*
  Push(Read16(cc_UNK_0xab6f)); // UNK_0xab6f
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  ALLOT(); // ALLOT
  CODE(); // (;CODE) inlined assembler code
// 0xaccc: call   1649
  Push(Read16(regsp)); // DUP
  UNK_0xaba5(); // UNK_0xaba5
  _gt_V(); // >V
  Push(Read16(cc_UNK_0xab77)); // UNK_0xab77
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_UNK_0xab73)); // UNK_0xab73
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(Read16(Pop())); // @
    UNK_0xac0d(); // UNK_0xac0d
    if (Pop() != 0)
    {
      V_gt_(); // V>
      Push(Read16(regsp)); // DUP
      UNK_0xaba5(); // UNK_0xaba5
      if (Pop() == 0) Push(1); else Push(0); // NOT
      _gt_V(); // >V
      imax = i; // LEAVE
      Push(pp_SMART); // SMART
      Push(Read16(Pop())); // @
      if (Pop() != 0)
      {
        Push(i); // I
        Push(Read16(cc_UNK_0xab77)); // UNK_0xab77
        _dash_(); // -
        Push(Pop()>>1); // 2/
        Push(Pop()>>1); // 2/
        Push(Pop()*2); // 2*
        Push(Read16(cc_UNK_0xab77)); // UNK_0xab77
        Push(Pop() + Pop()); // +
        Push(Read16(regsp)); // DUP
        Push(Read16(Pop())); // @
        Push(i); // I
        Push(Read16(Pop())); // @
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
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xad31: WORD '-->' codep=0x224c parp=0xad39
// ================================================

void _dash__dash__gt_() // -->
{
  _i__2(); // '_2
}


// ================================================
// 0xad3d: WORD 'UNK_0xad3f' codep=0x224c parp=0xad3f
// ================================================

void UNK_0xad3f() // UNK_0xad3f
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(-1);
  Push(pp_UNK_0xab57); // UNK_0xab57
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(cc_UNK_0xab7b)); // UNK_0xab7b
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
// 0xad71: WORD 'UNK_0xad73' codep=0x224c parp=0xad73
// ================================================

void UNK_0xad73() // UNK_0xad73
{
  unsigned short int a;
  _dash__dash__gt_(); // -->
  a = Pop(); // >R
  Push(a); // I
  Push(0xad39); // probable '-->'
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(a); // I
    UNK_0xad3f(); // UNK_0xad3f
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(pp_UNK_0xab57); // UNK_0xab57
      Push(Read16(Pop())); // @
      Push(a); // I
      OVER(); // OVER
      Push(Pop()*2); // 2*
      Push(Read16(cc_UNK_0xab7b)); // UNK_0xab7b
      Push(Pop() + Pop()); // +
      Store_2(); // !_2
      Push(Read16(cc_UNK_0xab6f)); // UNK_0xab6f
      Push(Read8(Pop())&0xFF); // C@
      Push(pp_UNK_0xab57); // UNK_0xab57
      Push(Read16(Pop())); // @
      _gt_(); // >
      if (Pop() == 0) Push(1); else Push(0); // NOT
      ABORT("Condition overflow", 18);// (ABORT")
      Push(1);
      Push(pp_UNK_0xab57); // UNK_0xab57
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
// 0xadd6: WORD 'RULE:' codep=0x224c parp=0xade0
// ================================================

void RULE_c_() // RULE:
{
  Push(Read16(cc_UNK_0xab6b)); // UNK_0xab6b
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc_UNK_0xab73)); // UNK_0xab73
  Push(Read8(Pop())&0xFF); // C@
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
    UNK_0xad73(); // UNK_0xad73
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      _i__2(); // '_2
      Push(Read16(regsp)); // DUP
      Push(0x51c5); // probable 'TRUE'
      Push((Pop()==Pop())?1:0); // =
      OVER(); // OVER
      Push(0x51d1); // probable 'FALSE'
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
  Store_2(); // !_2
  Push(Read16(cc_UNK_0xab73)); // UNK_0xab73
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()*2); // 2*
  Push(Read16(cc_UNK_0xab77)); // UNK_0xab77
  Push(Pop() + Pop()); // +
  Store_2(); // !_2
  Push(1);
  Push(Read16(cc_UNK_0xab73)); // UNK_0xab73
  C_plus__ex_(); // C+!
}


