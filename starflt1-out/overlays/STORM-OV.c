// ====== OVERLAY 'STORM-OV' ======
// store offset = 0xf090
// overlay size   = 0x04d0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF0A6  codep:0x224c wordp:0xf0a6 size:0x000c C-string:'WF0A6'
//           WF0B4  codep:0x224c wordp:0xf0b4 size:0x0096 C-string:'WF0B4'
//           WF14C  codep:0x224c wordp:0xf14c size:0x0026 C-string:'WF14C'
//           WF174  codep:0x224c wordp:0xf174 size:0x000c C-string:'WF174'
//          STORMS  codep:0xf0cc wordp:0xf18b size:0x00b6 C-string:'STORMS'
//           WF243  codep:0x744d wordp:0xf243 size:0x0003 C-string:'WF243'
//           WF248  codep:0x744d wordp:0xf248 size:0x0003 C-string:'WF248'
//           WF24D  codep:0x73ea wordp:0xf24d size:0x0006 C-string:'WF24D'
//           WF255  codep:0x73ea wordp:0xf255 size:0x0006 C-string:'WF255'
//           WF25D  codep:0x1d29 wordp:0xf25d size:0x0002 C-string:'WF25D'
//           WF261  codep:0x224c wordp:0xf261 size:0x0012 C-string:'WF261'
//           WF275  codep:0x224c wordp:0xf275 size:0x000a C-string:'WF275'
//           WF281  codep:0x744d wordp:0xf281 size:0x0003 C-string:'WF281'
//           WF286  codep:0x744d wordp:0xf286 size:0x0003 C-string:'WF286'
//           WF28B  codep:0x744d wordp:0xf28b size:0x0003 C-string:'WF28B'
//           WF290  codep:0x73ea wordp:0xf290 size:0x0006 C-string:'WF290'
//           WF298  codep:0x224c wordp:0xf298 size:0x0018 C-string:'WF298'
//           WF2B2  codep:0x224c wordp:0xf2b2 size:0x0026 C-string:'WF2B2'
//           WF2DA  codep:0x224c wordp:0xf2da size:0x0018 C-string:'WF2DA'
//           WF2F4  codep:0x224c wordp:0xf2f4 size:0x0018 C-string:'WF2F4'
//           WF30E  codep:0x224c wordp:0xf30e size:0x002c C-string:'WF30E'
//           WF33C  codep:0x224c wordp:0xf33c size:0x0038 C-string:'WF33C'
//       INJURE-PL  codep:0x224c wordp:0xf382 size:0x005e C-string:'INJURE_dash_PL'
//           WF3E2  codep:0x224c wordp:0xf3e2 size:0x004a C-string:'WF3E2'
//           WF42E  codep:0x224c wordp:0xf42e size:0x003c C-string:'WF42E'
//           WF46C  codep:0x224c wordp:0xf46c size:0x003a C-string:'WF46C'
//           WF4A8  codep:0x224c wordp:0xf4a8 size:0x0012 C-string:'WF4A8'
//       (DO.STORM  codep:0x224c wordp:0xf4c8 size:0x0000 C-string:'_ro_DO_dot_STORM'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_LCOLOR; // LCOLOR
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_FORCED; // FORCED
extern const unsigned short int pp__pe_EFF; // %EFF
extern const unsigned short int pp_STORM; // STORM
extern const unsigned short int pp_E_slash_M; // E/M
extern const unsigned short int pp__n_STORM; // #STORM
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern Color BLACK; // BLACK
extern Color WHITE; // WHITE
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void _co_(); // ,
void ALLOT(); // ALLOT
void HERE(); // HERE
void QUIT(); // QUIT
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void RANGE(); // RANGE
void PICK(); // PICK
void ROLL(); // ROLL
void WITHIN(); // WITHIN
void _3_star_(); // 3*
void RRND(); // RRND
void C_ex_(); // C!
void ON_3(); // ON_3
void FILL_1(); // FILL_1
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void _gt_TVCT(); // >TVCT
void _do__dot_(); // $.
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void WINDOW(); // WINDOW
void OBIT(); // OBIT
void _2_at_(); // 2@
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void ON_2(); // ON_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void STORMS(); // STORMS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF25D = 0xf25d; // WF25D size: 2
// {0x3a, 0x20}




// 0xf0a2: db 0x48 0x00 'H '

// ================================================
// 0xf0a4: WORD 'WF0A6' codep=0x224c wordp=0xf0a6 params=1 returns=2
// ================================================
// orphan

void WF0A6() // WF0A6
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 2); //  @ 2+
  RANGE(); // RANGE
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xf0b2: WORD 'WF0B4' codep=0x224c wordp=0xf0b4
// ================================================
// orphan

void WF0B4() // WF0B4
{
  unsigned short int i, imax, a;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(Pop() * 6); //  6 *
  Push(Read16(regsp)); // DUP
  _co_(); // ,
  HERE(); // HERE
  OVER(); // OVER
  ALLOT(); // ALLOT
  SWAP(); // SWAP
  Push(0);
  FILL_1(); // FILL_1
  CODE(); // (;CODE) inlined assembler code
// 0xf0cc: call   1649
  Push(0);
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  WF0A6(); // WF0A6

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _2_at_(); // 2@
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    a = Pop(); // >R
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() & a); //  R> AND
    if (Pop() != 0)
    {
      Push(i); // I
      Push(4);
      ROLL(); // ROLL
      Pop(); // DROP
      ROT(); // ROT
      ROT(); // ROT
      imax = i; // LEAVE
    }
    Push(6);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); Pop(); // 2DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(Pop() + 4)); //  4 + @
    return;
  }
  PRINT("INDEX NOT IN PROBABILITY ARRAY! ", 32); // (.")
  UNRAVEL(); // UNRAVEL
  QUIT(); // QUIT
}


// ================================================
// 0xf14a: WORD 'WF14C' codep=0x224c wordp=0xf14c params=2 returns=2
// ================================================

void WF14C() // WF14C
{
  unsigned short int a;
  while(1)
  {
    OVER(); // OVER
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(!(Pop()==0x0064?1:0)); //  0x0064 = NOT
    a = Pop(); // >R
    _gt_(); // >
    Push(Pop() & a); //  R> AND
    if (Pop() == 0) return;
    Push((Pop() + 1) + 3); //  1+ 3+
  }
}


// ================================================
// 0xf172: WORD 'WF174' codep=0x224c wordp=0xf174 params=2 returns=2
// ================================================

void WF174() // WF174
{
  WF14C(); // WF14C
  Push(Pop() + 1); //  1+
  _1_dot_5_at_(); // 1.5@
  ROT(); // ROT
  Pop(); // DROP
}


// ================================================
// 0xf180: WORD 'STORMS' codep=0xf0cc wordp=0xf18b
// ================================================
// 0xf18b: db 0x3c 0x00 0x00 0x00 0x08 0x00 0xc9 0xf1 0x00 0x00 0x09 0x00 0xcd 0xf1 0x00 0x00 0x06 0x00 0xd9 0xf1 0x00 0x00 0x07 0x00 0xed 0xf1 0x00 0x00 0x04 0x00 0x01 0xf2 0x00 0x00 0x05 0x00 0x11 0xf2 0x00 0x00 0x0a 0x00 0x25 0xf2 0x00 0x00 0x0b 0x00 0x2d 0xf2 0x00 0x00 0x02 0x00 0x39 0xf2 0x00 0x00 0x03 0x00 0x3d 0xf2 0x64 0x01 0x00 0x00 0x1a 0x06 0x00 0x00 0x33 0x07 0x00 0x00 0x64 0x08 0x00 0x00 0x10 0x01 0x00 0x00 0x1f 0x02 0x00 0x00 0x2e 0x03 0x00 0x00 0x3d 0x04 0x00 0x00 0x64 0x05 0x00 0x00 0x10 0x06 0x00 0x00 0x1f 0x07 0x00 0x00 0x2e 0x0b 0x00 0x00 0x3d 0x09 0x00 0x00 0x64 0x0a 0x00 0x00 0x14 0x01 0x00 0x00 0x27 0x02 0x00 0x00 0x39 0x03 0x00 0x00 0x64 0x05 0x00 0x00 0x10 0x06 0x00 0x00 0x1f 0x07 0x00 0x00 0x2e 0x0a 0x00 0x00 0x3d 0x0c 0x00 0x00 0x64 0x0d 0x00 0x00 0x27 0x01 0x00 0x00 0x64 0x02 0x00 0x00 0x21 0x06 0x00 0x00 0x42 0x07 0x00 0x00 0x64 0x0a 0x00 0x00 0x64 0x00 0x00 0x00 0x64 0x00 0x00 0x00 '<                                         %     -     9     = d       3   d           .   =   d           .   =   d       '   9   d           .   =   d   '   d   !   B   d   d   d   '

// ================================================
// 0xf241: WORD 'WF243' codep=0x744d wordp=0xf243
// ================================================
IFieldType WF243 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xf246: WORD 'WF248' codep=0x744d wordp=0xf248
// ================================================
IFieldType WF248 = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xf24b: WORD 'WF24D' codep=0x73ea wordp=0xf24d
// ================================================
LoadDataType WF24D = {PLANETIDX, 0x11, 0x02, 0x16, 0x658f};

// ================================================
// 0xf253: WORD 'WF255' codep=0x73ea wordp=0xf255
// ================================================
LoadDataType WF255 = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};

// ================================================
// 0xf25b: WORD 'WF25D' codep=0x1d29 wordp=0xf25d
// ================================================
// orphan
// 0xf25d: db 0x3a 0x20 ': '

// ================================================
// 0xf25f: WORD 'WF261' codep=0x224c wordp=0xf261 params=0 returns=1
// ================================================

void WF261() // WF261
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WF248.offset); // WF248<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+WF243.offset)&0xFF); // WF243<IFIELD> C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf273: WORD 'WF275' codep=0x224c wordp=0xf275 params=0 returns=1
// ================================================

void WF275() // WF275
{
  WF261(); // WF261
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xf27f: WORD 'WF281' codep=0x744d wordp=0xf281
// ================================================
IFieldType WF281 = {ASSIGN_CREWIDX, 0x11, 0x03};

// ================================================
// 0xf284: WORD 'WF286' codep=0x744d wordp=0xf286
// ================================================
IFieldType WF286 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xf289: WORD 'WF28B' codep=0x744d wordp=0xf28b
// ================================================
IFieldType WF28B = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xf28e: WORD 'WF290' codep=0x73ea wordp=0xf290
// ================================================
LoadDataType WF290 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xf296: WORD 'WF298' codep=0x224c wordp=0xf298 params=0 returns=2
// ================================================

void WF298() // WF298
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WF281.offset); // WF281<IFIELD>
  Push(0);
  Push(6);
  RRND(); // RRND
  Push(Pop() * 3); //  3 *
  Push(Pop() + Pop()); // +
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2b0: WORD 'WF2B2' codep=0x224c wordp=0xf2b2 params=0 returns=1
// ================================================

void WF2B2() // WF2B2
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(6);
  Push(0x000b);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(1);
    Push(0x0064);
    RRND(); // RRND
    Push(0x001e);
    _st_(); // <
    return;
  }
  Push(0);
}


// ================================================
// 0xf2d8: WORD 'WF2DA' codep=0x224c wordp=0xf2da params=0 returns=1
// ================================================

void WF2DA() // WF2DA
{
  Push(1);
  Push(-Read16(pp_E_slash_M)); // E/M @ NEGATE
  _3_star_(); // 3*
  Push(2);
  MAX(); // MAX
  Push(0x001e);
  MIN(); // MIN
  RRND(); // RRND
}


// ================================================
// 0xf2f2: WORD 'WF2F4' codep=0x224c wordp=0xf2f4 params=0 returns=0
// ================================================

void WF2F4() // WF2F4
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xf30c: WORD 'WF30E' codep=0x224c wordp=0xf30e params=0 returns=0
// ================================================

void WF30E() // WF30E
{
  Push(Read16(pp_COLOR)); // COLOR @
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  POS_dot_(); // POS.
}


// ================================================
// 0xf33a: WORD 'WF33C' codep=0x224c wordp=0xf33c params=0 returns=0
// ================================================

void WF33C() // WF33C
{
  WF2F4(); // WF2F4
  WF30E(); // WF30E
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x63ef+WF28B.offset); // WF28B<IFIELD>
  _do__dot_(); // $.
  PRINT(" IS ", 4); // (.")
  Push(Read16(0x63ef+WF286.offset)&0xFF); // WF286<IFIELD> C@
  if (Pop() != 0)
  {
    PRINT("INJURED", 7); // (.")
  } else
  {
    PRINT("KILLED", 6); // (.")
  }
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf374: WORD 'INJURE-PL' codep=0x224c wordp=0xf382
// ================================================
// entry

void INJURE_dash_PL() // INJURE-PL
{
  Push(0x03e8);
  MS(); // MS
  WF2DA(); // WF2DA
  WF298(); // WF298
  _gt_C_plus_S(); // >C+S
  LoadData(WF290); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(Read16(pp_E_slash_M)); // E/M @
  _3_star_(); // 3*
  ABS(); // ABS
  Push(Read16(pp__pe_EFF)); // %EFF @
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  Push(Read16(0x63ef+WF286.offset)&0xFF); // WF286<IFIELD> C@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x0064);
  MIN(); // MIN
  Push(0x63ef+WF286.offset); // WF286<IFIELD>
  C_ex_(); // C!
  WF33C(); // WF33C
  ICLOSE(); // ICLOSE
  Push(pp_IsHEAL); // ?HEAL
  ON_3(); // ON_3
  Push(0x01f4);
  MS(); // MS
  OBIT(); // OBIT
  Push(0xc021); // '(.VI'
  MODULE(); // MODULE
  Push(0xc03f); // '(ROL'
  MODULE(); // MODULE
}


// ================================================
// 0xf3e0: WORD 'WF3E2' codep=0x224c wordp=0xf3e2 params=0 returns=0
// ================================================

void WF3E2() // WF3E2
{
  Push(Read16(pp_STORM)==0?1:0); // STORM @ 0=
  WF275(); // WF275
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0x00c5);
  Push(0x000c);
  Push(0x00c1);
  Push(0x0044);
  Push(Read16(pp_LCOLOR)); // LCOLOR @
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0x0074);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(7);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(0x0074);
  Push(0x008f);
  POS_dot_(); // POS.
  Push(9);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
}


// ================================================
// 0xf42c: WORD 'WF42E' codep=0x224c wordp=0xf42e params=0 returns=0
// ================================================

void WF42E() // WF42E
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(Read16(regsp)); // DUP
  Push(3);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(6);
    Push(0x000b);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      Push(0x0032);
    } else
    {
      Push(0x004b);
    }
  } else
  {
    Pop(); // DROP
    Push(0x0064);
  }
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
  Push(pp_FORCED); // FORCED
  ON_2(); // ON_2
  WF3E2(); // WF3E2
}


// ================================================
// 0xf46a: WORD 'WF46C' codep=0x224c wordp=0xf46c
// ================================================

void WF46C() // WF46C
{
  Push(5);
  SWAP(); // SWAP
  _dash_(); // -
  _3_star_(); // 3*
  Push(1);
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0x000c);
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(pp_STORM); // STORM
  _st__ex__gt_(); // <!>
  Push(1);
  Push(0x0064);
  RRND(); // RRND
  LoadData(WF255); // from 'PLANET'
  Push((Read16(Pop())&0xFF) * 2 + 1); //  C@ 2* 1+
  Push(0);
  STORMS(); // STORMS
  WF174(); // WF174
  Pop(); // DROP
  Push(pp__n_STORM); // #STORM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf4a6: WORD 'WF4A8' codep=0x224c wordp=0xf4a8 params=0 returns=0
// ================================================

void WF4A8() // WF4A8
{
  Push(1);
  Push(pp_STORM); // STORM
  _st__ex__gt_(); // <!>
  Push(0);
  Push(0);
  RRND(); // RRND
  Push(pp__n_STORM); // #STORM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf4ba: WORD '(DO.STORM' codep=0x224c wordp=0xf4c8
// ================================================
// entry

void _ro_DO_dot_STORM() // (DO.STORM
{
  unsigned short int a;
  Push(Read16(pp__n_STORM)); // #STORM @
  a = Pop(); // >R
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WF24D); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    WF46C(); // WF46C
  } else
  {
    WF4A8(); // WF4A8
  }
  ICLOSE(); // ICLOSE
  WF42E(); // WF42E
  Push(!(a==Read16(pp__n_STORM)?1:0)); // R> #STORM @ = NOT
  if (Pop() != 0)
  {
    Push(0xcdd8); // '.STOR'
    MODULE(); // MODULE
  }
  WF2B2(); // WF2B2
  if (Pop() == 0) return;
  INJURE_dash_PL(); // INJURE-PL
}

// 0xf506: db 0x53 0x54 0x4f 0x52 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x52 0x41 0x47 0x45 0x20 0x46 0x4f 0x52 0x20 0x46 0x55 0x4e 0x43 0x54 0x49 0x4f 0x4e 0x5d 0x17 0xa0 0x0f 0xef 0x2a 0xb3 0xe0 0x90 0x16 0x49 0x54 0x45 0x4d 0x53 0x31 0x36 0x37 0x32 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'STORM-VOC_______________________RAGE FOR FUNCTION]    *    ITEMS1672______________________ '

