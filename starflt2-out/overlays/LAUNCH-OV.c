// ====== OVERLAY 'LAUNCH-OV' ======
// store offset = 0xf090
// overlay size   = 0x04d0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF0A6  codep:0x224c wordp:0xf0a6 size:0x000c C-string:'WF0A6'
//           WF0B4  codep:0x224c wordp:0xf0b4 size:0x002e C-string:'WF0B4'
//           WF0E4  codep:0x224c wordp:0xf0e4 size:0x0014 C-string:'WF0E4'
//           WF0FA  codep:0x224c wordp:0xf0fa size:0x0010 C-string:'WF0FA'
//           WF10C  codep:0x224c wordp:0xf10c size:0x000c C-string:'WF10C'
//           WF11A  codep:0x224c wordp:0xf11a size:0x0032 C-string:'WF11A'
//           WF14E  codep:0x224c wordp:0xf14e size:0x0042 C-string:'WF14E'
//           WF192  codep:0x224c wordp:0xf192 size:0x0012 C-string:'WF192'
//           WF1A6  codep:0x224c wordp:0xf1a6 size:0x000e C-string:'WF1A6'
//           WF1B6  codep:0x224c wordp:0xf1b6 size:0x002c C-string:'WF1B6'
//           WF1E4  codep:0x224c wordp:0xf1e4 size:0x001c C-string:'WF1E4'
//           WF202  codep:0x224c wordp:0xf202 size:0x001c C-string:'WF202'
//           WF220  codep:0x1d29 wordp:0xf220 size:0x0032 C-string:'WF220'
//        .AIRLOCK  codep:0x224c wordp:0xf25f size:0x00a5 C-string:'DrawAIRLOCK'
//           WF306  codep:0x224c wordp:0xf306 size:0x000a C-string:'WF306'
//           WF312  codep:0x224c wordp:0xf312 size:0x000c C-string:'WF312'
//           WF320  codep:0x224c wordp:0xf320 size:0x0008 C-string:'WF320'
//           WF32A  codep:0x224c wordp:0xf32a size:0x0064 C-string:'WF32A'
//           WF390  codep:0x224c wordp:0xf390 size:0x0025 C-string:'WF390'
//           WF3B7  codep:0x224c wordp:0xf3b7 size:0x0054 C-string:'WF3B7'
//         &LAUNCH  codep:0x224c wordp:0xf417 size:0x004e C-string:'_and_LAUNCH'
//         &RETURN  codep:0x224c wordp:0xf471 size:0x0000 C-string:'_and_RETURN'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_HBUF_dash_SE; // HBUF-SE
extern const unsigned short int pp_DBUF_dash_SE; // DBUF-SE
extern const unsigned short int pp_YTABL; // YTABL
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_IsG_dash_AWAR; // ?G-AWAR
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_STIME; // STIME
extern Color BLACK; // BLACK
extern Color GREY2; // GREY2
extern Color YELLOW; // YELLOW
void D_st_(); // D<
void Draw(); // .
void MS(); // MS
void ROLL(); // ROLL
void _2OVER(); // 2OVER
void D_dash_(); // D-
void RRND(); // RRND
void Store_2(); // !_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void StoreCOLOR(); // !COLOR
void BFILL(); // BFILL
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void LCOPYBL(); // LCOPYBL
void POS_dot_(); // POS.
void CTERASE(); // CTERASE
void BEEPON_2(); // BEEPON_2
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void LCMOVE(); // LCMOVE
void GetDS(); // @DS
void LPLOT(); // LPLOT
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF220 = 0xf220; // WF220 size: 50
// {0xff, 0x0f, 0xff, 0x01, 0x3f, 0xf8, 0xc7, 0xff, 0xfe, 0xff, 0xf3, 0xfc, 0x8f, 0xff, 0xf0, 0x1f, 0xff, 0xf0, 0x0f, 0x0f, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0xf0, 0xf0, 0x0f, 0xff, 0xf8, 0x0f, 0xff, 0xf1, 0x3f, 0xcf, 0xff, 0x7f, 0xff, 0xe3, 0x1f, 0xfc, 0x80, 0xff, 0xf0, 0xff}




// 0xf0a2: db 0x49 0x00 'I '

// ================================================
// 0xf0a4: WORD 'WF0A6' codep=0x224c wordp=0xf0a6 params=3 returns=2
// ================================================

void WF0A6() // WF0A6
{
  MODULE(); // MODULE
  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
}


// ================================================
// 0xf0b2: WORD 'WF0B4' codep=0x224c wordp=0xf0b4
// ================================================

void WF0B4() // WF0B4
{
  unsigned short int i, imax;
  Push(0x0010);
  Push(0x000b);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((i >> 4) + i); // I 16* I +
    StoreCOLOR(); // !COLOR
    Push(Read16(pp_XBLT)); // XBLT @
    OVER(); // OVER
    Draw(); // .
    Push(pp_XBLT); // XBLT
    Store_2(); // !_2
    Push(0x0027);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf0e2: WORD 'WF0E4' codep=0x224c wordp=0xf0e4
// ================================================

void WF0E4() // WF0E4
{
  Push(0x0026);
  Push(0x0087);
  POS_dot_(); // POS.
  _gt_2FONT(); // >2FONT
  BEEPON_2(); // BEEPON_2
  WF0B4(); // WF0B4
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf0f8: WORD 'WF0FA' codep=0x224c wordp=0xf0fa
// ================================================

void WF0FA() // WF0FA
{
  Push(0x0027);
  Push(0x0086);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  WF0B4(); // WF0B4
}


// ================================================
// 0xf10a: WORD 'WF10C' codep=0x224c wordp=0xf10c params=0 returns=0
// ================================================

void WF10C() // WF10C
{
  Push(0x0028);
  Push(0x0084);
  LPLOT(); // LPLOT
}


// ================================================
// 0xf118: WORD 'WF11A' codep=0x224c wordp=0xf11a
// ================================================

void WF11A() // WF11A
{
  unsigned short int i, imax;
  Push(0x2710);
  TONE(); // TONE
  Push(1);
  Push(3);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    V_gt_DISPL(); // V>DISPL
    Push(i); // I
    WF0E4(); // WF0E4
    V_gt_DISPL(); // V>DISPL
    Push(i); // I
    WF0FA(); // WF0FA
    V_gt_DISPL(); // V>DISPL
    WF10C(); // WF10C
    Push(0x0064);
    MS(); // MS
    V_gt_DISPL(); // V>DISPL
    Push(0x0190);
    MS(); // MS
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf14c: WORD 'WF14E' codep=0x224c wordp=0xf14e
// ================================================

void WF14E() // WF14E
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("COMMENCING LAUNCH SEQUENCE...", 29); // (.")
  WF11A(); // WF11A
  CTERASE(); // CTERASE
  Push(Read16(pp_CONTEXT_3)==0?1:0); // CONTEXT_3 @ 0=
  if (Pop() == 0) return;
  Push(1);
  Push(pp_CONTEXT_3); // CONTEXT_3
  Store_2(); // !_2
  Push(pp_IsG_dash_AWAR); // ?G-AWAR
  ON_2(); // ON_2
  Push(pp_GWF); // GWF
  _099(); // 099
}


// ================================================
// 0xf190: WORD 'WF192' codep=0x224c wordp=0xf192 params=2 returns=0
// ================================================

void WF192() // WF192
{
  _2DUP(); // 2DUP
  Push(pp_STIME); // STIME
  StoreD(); // D!
  Push(0x03e8); Push(0x0000);
  D_st_(); // D<
  Pop(); // DROP
}


// ================================================
// 0xf1a4: WORD 'WF1A6' codep=0x224c wordp=0xf1a6 params=1 returns=0
// ================================================

void WF1A6() // WF1A6
{
  Push(4);
  SWAP(); // SWAP
  Push(0x004b);
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xf1b4: WORD 'WF1B6' codep=0x224c wordp=0xf1b6
// ================================================

void WF1B6() // WF1B6
{
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  WF1A6(); // WF1A6
  Push(0);
  Push(0x000a);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  OVER(); // OVER
  Push(!(Pop()==0x0084?1:0)); //  0x0084 = NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf1e2: WORD 'WF1E4' codep=0x224c wordp=0xf1e4
// ================================================

void WF1E4() // WF1E4
{
  unsigned short int a;
  a = Pop(); // >R
  Push(4);
  Push(0x00be);
  Push(0x004c);
  Push(a); // I
  Push(4);
  Push(0x00bf);
  LCOPYBL(); // LCOPYBL
  Push(a); // R>
  WF1B6(); // WF1B6
}


// ================================================
// 0xf200: WORD 'WF202' codep=0x224c wordp=0xf202
// ================================================

void WF202() // WF202
{
  unsigned short int a;
  a = Pop(); // >R
  Push(4);
  Push(a); // I
  Push(0x004c);
  Push(0x0049);
  Push(4);
  Push(a - 1); // I 1-
  LCOPYBL(); // LCOPYBL
  Push(a); // R>
  WF1B6(); // WF1B6
}


// ================================================
// 0xf21e: WORD 'WF220' codep=0x1d29 wordp=0xf220
// ================================================
// 0xf220: db 0xff 0x0f 0xff 0x01 0x3f 0xf8 0xc7 0xff 0xfe 0xff 0xf3 0xfc 0x8f 0xff 0xf0 0x1f 0xff 0xf0 0x0f 0x0f 0xf0 0x00 0x0f 0x00 0x00 0x00 0x00 0xf0 0x00 0x0f 0xf0 0xf0 0x0f 0xff 0xf8 0x0f 0xff 0xf1 0x3f 0xcf 0xff 0x7f 0xff 0xe3 0x1f 0xfc 0x80 0xff 0xf0 0xff '    ?                                 ?          '

// ================================================
// 0xf252: WORD '.AIRLOCK' codep=0x224c wordp=0xf25f
// ================================================
// entry

void DrawAIRLOCK() // .AIRLOCK
{
  _gt_MAINVI(); // >MAINVI
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  BFILL(); // BFILL
  GetColor(BLACK);
  GetColor(BLACK);
  GetColor(YELLOW);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  _gt_2FONT(); // >2FONT
  Push(0x0011);
  Push(0x006d);
  POS_dot_(); // POS.
  PRINT("CAUTION", 7); // (.")
  _gt_1FONT(); // >1FONT
  Push(5);
  Push(0x005d);
  POS_dot_(); // POS.
  PRINT("PRESSURIZED AREA", 16); // (.")
  Push(5);
  Push(0x001e);
  POS_dot_(); // POS.
  PRINT("STANDARD AIRLOCK", 16); // (.")
  Push(5);
  Push(0x0014);
  POS_dot_(); // POS.
  PRINT("PROCEDURES APPLY", 16); // (.")
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  Push(0x001a);
  Push(0x0045);
  POS_dot_(); // POS.
  Push(0x0014);
  Push(Read16(regsp)); // DUP
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(pp_WF220); // WF220
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf304: WORD 'WF306' codep=0x224c wordp=0xf306 params=0 returns=3
// ================================================

void WF306() // WF306
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xd216); // 'SECUR'
}


// ================================================
// 0xf310: WORD 'WF312' codep=0x224c wordp=0xf312 params=1 returns=1
// ================================================

void WF312() // WF312
{
  Push(Read16(Pop() * 2 + Read16(pp_YTABL))); //  2* YTABL @ + @
}


// ================================================
// 0xf31e: WORD 'WF320' codep=0x224c wordp=0xf320
// ================================================

void WF320() // WF320
{
  _gt_MAINVI(); // >MAINVI
  WF312(); // WF312
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf328: WORD 'WF32A' codep=0x224c wordp=0xf32a
// ================================================

void WF32A() // WF32A
{
  unsigned short int a;
  a = Pop(); // >R
  if (Pop() != 0)
  {
    Push(0x00bf);
    WF312(); // WF312
    Push(4);
    Push(0x00bf);
    Push(0x004c);
    Push(0x00bf - a); // 0x00bf I -
    Push(4);
    Push(0x00be);
  } else
  {
    Push(0x0048);
    WF312(); // WF312
    Push(4);
    Push(0x0048 + a); // 0x0048 I +
    Push(0x004c);
    Push(0x0048);
    _2OVER(); // 2OVER
    Push(Pop() + 1); //  1+
  }
  LCOPYBL(); // LCOPYBL
  Push(a); // R>
  Pop(); // DROP
  Push(Read16(pp_HBUF_dash_SE)); // HBUF-SE @
  ROT(); // ROT
  WF320(); // WF320
  Push(Read16(pp_DBUF_dash_SE)); // DBUF-SE @
  Push(4);
  ROLL(); // ROLL
  Push(Pop() + 2); //  2+
  Push(0x0024);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xf38e: WORD 'WF390' codep=0x224c wordp=0xf390
// ================================================

void WF390() // WF390
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" DOCKING BAY DOORS", 18); // (.")
  Push(0x7148);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
}


// ================================================
// 0xf3b5: WORD 'WF3B7' codep=0x224c wordp=0xf3b7
// ================================================

void WF3B7() // WF3B7
{
  unsigned short int i, imax;
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  _gt_DISPLA(); // >DISPLA
  Push(Read16(cc_TRUE)); // TRUE
  if (Pop() != 0)
  {
    Push(0x003b);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(0x0084 - i); // 0x0084 I -
      WF202(); // WF202
      Push(0x0084 + i); // 0x0084 I +
      WF1E4(); // WF1E4
      Push(0x7148);
      TONE(); // TONE
      Push(0x001e);
      MS(); // MS
      i++;
    } while(i<imax); // (LOOP)

    BEEPOFF(); // BEEPOFF
    Push(0x00fa);
    MS(); // MS
  } else
  {
    Push(0x05dc);
    MS(); // MS
    V_gt_DISPL(); // V>DISPL
  }
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf40b: WORD '&LAUNCH' codep=0x224c wordp=0xf417
// ================================================
// entry

void _and_LAUNCH() // &LAUNCH
{
  Push(Read16(pp_CONTEXT_3)==5?1:0); // CONTEXT_3 @ 5 =
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    WF306(); // WF306
    WF0A6(); // WF0A6
    WF192(); // WF192
    SET_STR_AS_PARAM("OPENING");
    WF390(); // WF390
    WF3B7(); // WF3B7
  }
  WF14E(); // WF14E
  if (Pop() == 0) return;
  Push(0xcafc); // 'UNNEST'
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("STANDING BY TO MANEUVER");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf465: WORD '&RETURN' codep=0x224c wordp=0xf471
// ================================================
// entry

void _and_RETURN() // &RETURN
{
  unsigned short int i, imax, j, jmax;
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  Push(6);
  Push(0x0012);
  RRND(); // RRND
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(1);
    Push(0x0010);
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(Pop() >> 4); //  16*
    Push(Pop() + Pop()); // +
    StoreCOLOR(); // !COLOR
    Push(0);
    Push(0x0048);
    RRND(); // RRND
    Push(0);
    Push(0x0078);
    RRND(); // RRND
    LPLOT(); // LPLOT
    i++;
  } while(i<imax); // (LOOP)

  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  SET_STR_AS_PARAM("CLOSING");
  WF390(); // WF390
  DrawAIRLOCK(); // .AIRLOCK
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  Push(Read16(cc_FALSE)); // FALSE
  if (Pop() != 0)
  {
    Push(0x00bf);
    WF1A6(); // WF1A6
    Push(0x0048);
    WF1A6(); // WF1A6
    Push(0x7148);
    TONE(); // TONE
    BEEPON_2(); // BEEPON_2
    Push(0x003b);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(0x003c + j); // 0x003c I +
      Push(1);
      Push(j); // I
      WF32A(); // WF32A
      Push(0x003c - j); // 0x003c I -
      Push(0);
      Push(j); // I
      WF32A(); // WF32A
      Push(0x7148);
      TONE(); // TONE
      Push(0x001e);
      MS(); // MS
      j++;
    } while(j<jmax); // (LOOP)

  } else
  {
    Push(0x05dc);
    MS(); // MS
    DrawAIRLOCK(); // .AIRLOCK
  }
  V_gt_DISPL(); // V>DISPL
  BEEPOFF(); // BEEPOFF
}

// 0xf51d: db 0x4c 0x41 0x55 0x4e 0x43 0x48 0x2d 0x56 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x78 0x20 0x66 0x6f 0x72 0x20 0x43 0x4f 0x55 0x4e 0x54 0x44 0x4f 0x57 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x52 0x32 0x32 0x37 0x00 'LAUNCH-V________________________x for COUNTDOWN---------------)R227 '

