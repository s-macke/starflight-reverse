// ====== OVERLAY 'LAUNCH-OV' ======
// store offset = 0xf010
// overlay size   = 0x0550

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF026  codep:0x224c wordp:0xf026 size:0x000c C-string:'WF026'
//           WF034  codep:0x224c wordp:0xf034 size:0x002e C-string:'WF034'
//           WF064  codep:0x224c wordp:0xf064 size:0x0014 C-string:'WF064'
//           WF07A  codep:0x224c wordp:0xf07a size:0x0010 C-string:'WF07A'
//           WF08C  codep:0x224c wordp:0xf08c size:0x000c C-string:'WF08C'
//       COUNTDOWN  codep:0x224c wordp:0xf09a size:0x0032 C-string:'COUNTDOWN'
//          LAUNCH  codep:0x224c wordp:0xf0ce size:0x0042 C-string:'LAUNCH'
//           WF112  codep:0x224c wordp:0xf112 size:0x003e C-string:'WF112'
//           WF152  codep:0x224c wordp:0xf152 size:0x000e C-string:'WF152'
//           WF162  codep:0x224c wordp:0xf162 size:0x005c C-string:'WF162'
//           WF1C0  codep:0x224c wordp:0xf1c0 size:0x001c C-string:'WF1C0'
//           WF1DE  codep:0x224c wordp:0xf1de size:0x001c C-string:'WF1DE'
//           WF1FC  codep:0x1d29 wordp:0xf1fc size:0x0032 C-string:'WF1FC'
//        .AIRLOCK  codep:0x224c wordp:0xf23b size:0x00a5 C-string:'DrawAIRLOCK'
//           WF2E2  codep:0x224c wordp:0xf2e2 size:0x000a C-string:'WF2E2'
//           WF2EE  codep:0x224c wordp:0xf2ee size:0x000c C-string:'WF2EE'
//           WF2FC  codep:0x224c wordp:0xf2fc size:0x0008 C-string:'WF2FC'
//           WF306  codep:0x224c wordp:0xf306 size:0x0064 C-string:'WF306'
//       PORTLEAVE  codep:0x224c wordp:0xf36c size:0x0025 C-string:'PORTLEAVE'
//           WF393  codep:0x224c wordp:0xf393 size:0x005c C-string:'WF393'
//         &LAUNCH  codep:0x224c wordp:0xf3fb size:0x004e C-string:'_and_LAUNCH'
//         &RETURN  codep:0x224c wordp:0xf455 size:0x0000 C-string:'_and_RETURN'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_HBUF_dash_SEG; // HBUF-SEG
extern const unsigned short int pp_DBUF_dash_SEG; // DBUF-SEG
extern const unsigned short int pp_YTABL; // YTABL
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_IsG_dash_AWARE; // ?G-AWARE
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_IsSECURE; // ?SECURE
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
void Store_3(); // !_3
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void StoreCOLOR(); // !COLOR
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void DARK(); // DARK
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void POS_dot_(); // POS.
void CTERASE(); // CTERASE
void _gt_SND(); // >SND
void BEEPON(); // BEEPON
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
void BFILL(); // BFILL
void LPLOT(); // LPLOT
void LLINE(); // LLINE
void LCOPYBLK(); // LCOPYBLK
void V_gt_DISPLAY(); // V>DISPLAY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF1FC = 0xf1fc; // WF1FC size: 50
// {0xff, 0x0f, 0xff, 0x01, 0x3f, 0xf8, 0xc7, 0xff, 0xfe, 0xff, 0xf3, 0xfc, 0x8f, 0xff, 0xf0, 0x1f, 0xff, 0xf0, 0x0f, 0x0f, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0xf0, 0xf0, 0x0f, 0xff, 0xf8, 0x0f, 0xff, 0xf1, 0x3f, 0xcf, 0xff, 0x7f, 0xff, 0xe3, 0x1f, 0xfc, 0x80, 0xff, 0xf0, 0xff}




// 0xf022: db 0x50 0x00 'P '

// ================================================
// 0xf024: WORD 'WF026' codep=0x224c wordp=0xf026 params=3 returns=2
// ================================================

void WF026() // WF026
{
  MODULE(); // MODULE
  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
}


// ================================================
// 0xf032: WORD 'WF034' codep=0x224c wordp=0xf034 params=1 returns=2
// ================================================

void WF034() // WF034
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
    Store_3(); // !_3
    Push(0x0027);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf062: WORD 'WF064' codep=0x224c wordp=0xf064 params=1 returns=2
// ================================================

void WF064() // WF064
{
  Push(0x0026);
  Push(0x0087);
  POS_dot_(); // POS.
  _gt_2FONT(); // >2FONT
  BEEPON(); // BEEPON
  WF034(); // WF034
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf078: WORD 'WF07A' codep=0x224c wordp=0xf07a params=1 returns=2
// ================================================

void WF07A() // WF07A
{
  Push(0x0027);
  Push(0x0086);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  WF034(); // WF034
}


// ================================================
// 0xf08a: WORD 'WF08C' codep=0x224c wordp=0xf08c params=0 returns=0
// ================================================

void WF08C() // WF08C
{
  Push(0x0028);
  Push(0x0084);
  LPLOT(); // LPLOT
}


// ================================================
// 0xf098: WORD 'COUNTDOWN' codep=0x224c wordp=0xf09a params=0 returns=8
// ================================================

void COUNTDOWN() // COUNTDOWN
{
  unsigned short int i, imax;
  Push(0x2710);
  TONE(); // TONE
  Push(1);
  Push(5);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    V_gt_DISPLAY(); // V>DISPLAY
    Push(i); // I
    WF064(); // WF064
    V_gt_DISPLAY(); // V>DISPLAY
    Push(i); // I
    WF07A(); // WF07A
    V_gt_DISPLAY(); // V>DISPLAY
    WF08C(); // WF08C
    Push(0x0064);
    MS(); // MS
    V_gt_DISPLAY(); // V>DISPLAY
    Push(0x0190);
    MS(); // MS
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf0cc: WORD 'LAUNCH' codep=0x224c wordp=0xf0ce params=0 returns=8
// ================================================

void LAUNCH() // LAUNCH
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("COMMENCING LAUNCH SEQUENCE...", 29); // (.")
  COUNTDOWN(); // COUNTDOWN
  CTERASE(); // CTERASE
  Push(Read16(pp_CONTEXT_dash_ID_n_)==0?1:0); // CONTEXT-ID# @ 0=
  if (Pop() == 0) return;
  Push(1);
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Store_3(); // !_3
  Push(pp_IsG_dash_AWARE); // ?G-AWARE
  ON_3(); // ON_3
  Push(pp_GWF); // GWF
  OFF(); // OFF
}


// ================================================
// 0xf110: WORD 'WF112' codep=0x224c wordp=0xf112 params=2 returns=0
// ================================================

void WF112() // WF112
{
  _2DUP(); // 2DUP
  Push(pp_STIME); // STIME
  StoreD(); // D!
  Push(0x03e8); Push(0x0000);
  D_st_(); // D<
  if (Pop() == 0) return;
  Push(Read16(pp_IsSECURE)==0?1:0); // ?SECURE @ 0=
  if (Pop() == 0) return;
  Push(Read16(pp_STARDATE) + 4); // STARDATE @ 4 +
  Push(pp_IsSECURE); // ?SECURE
  Store_3(); // !_3
  Push(0x01f4);
  Push(0x2710);
  Push(0x01f4);
  Push(0x03e8);
  Push(2);
  _gt_SND(); // >SND
}


// ================================================
// 0xf150: WORD 'WF152' codep=0x224c wordp=0xf152 params=1 returns=0
// ================================================

void WF152() // WF152
{
  Push(4);
  SWAP(); // SWAP
  Push(0x004b);
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xf160: WORD 'WF162' codep=0x224c wordp=0xf162 params=1 returns=0
// ================================================

void WF162() // WF162
{
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  WF152(); // WF152
  Push(0);
  Push(0x000a);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  OVER(); // OVER
  Push(!(Pop()==0x0084?1:0)); //  0x0084 = NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(1);
    Push(0x0010);
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(Pop() >> 4); //  16*
    Push(Pop() + Pop()); // +
    StoreCOLOR(); // !COLOR
    Push(4);
    Push(0x004c);
    RRND(); // RRND
    SWAP(); // SWAP
    _2DUP(); // 2DUP
    LPLOT(); // LPLOT
    Push(Pop() - 0x0048); //  0x0048 -
    SWAP(); // SWAP
    Push(Pop() - 4); //  4 -
    SWAP(); // SWAP
    _gt_MAINVIEW(); // >MAINVIEW
    LPLOT(); // LPLOT
    _gt_DISPLAY(); // >DISPLAY
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf1be: WORD 'WF1C0' codep=0x224c wordp=0xf1c0 params=1 returns=0
// ================================================

void WF1C0() // WF1C0
{
  unsigned short int a;
  a = Pop(); // >R
  Push(4);
  Push(0x00be);
  Push(0x004c);
  Push(a); // I
  Push(4);
  Push(0x00bf);
  LCOPYBLK(); // LCOPYBLK
  Push(a); // R>
  WF162(); // WF162
}


// ================================================
// 0xf1dc: WORD 'WF1DE' codep=0x224c wordp=0xf1de params=1 returns=0
// ================================================

void WF1DE() // WF1DE
{
  unsigned short int a;
  a = Pop(); // >R
  Push(4);
  Push(a); // I
  Push(0x004c);
  Push(0x0049);
  Push(4);
  Push(a - 1); // I 1-
  LCOPYBLK(); // LCOPYBLK
  Push(a); // R>
  WF162(); // WF162
}


// ================================================
// 0xf1fa: WORD 'WF1FC' codep=0x1d29 wordp=0xf1fc
// ================================================
// 0xf1fc: db 0xff 0x0f 0xff 0x01 0x3f 0xf8 0xc7 0xff 0xfe 0xff 0xf3 0xfc 0x8f 0xff 0xf0 0x1f 0xff 0xf0 0x0f 0x0f 0xf0 0x00 0x0f 0x00 0x00 0x00 0x00 0xf0 0x00 0x0f 0xf0 0xf0 0x0f 0xff 0xf8 0x0f 0xff 0xf1 0x3f 0xcf 0xff 0x7f 0xff 0xe3 0x1f 0xfc 0x80 0xff 0xf0 0xff '    ?                                 ?          '

// ================================================
// 0xf22e: WORD '.AIRLOCK' codep=0x224c wordp=0xf23b params=0 returns=0
// ================================================
// entry

void DrawAIRLOCK() // .AIRLOCK
{
  _gt_MAINVIEW(); // >MAINVIEW
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
  Store_3(); // !_3
  Push(0x001a);
  Push(0x0045);
  POS_dot_(); // POS.
  Push(0x0014);
  Push(Read16(regsp)); // DUP
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(pp_WF1FC); // WF1FC
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  _gt_DISPLAY(); // >DISPLAY
}


// ================================================
// 0xf2e0: WORD 'WF2E2' codep=0x224c wordp=0xf2e2 params=0 returns=3
// ================================================

void WF2E2() // WF2E2
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xd125); // 'SECURE'
}


// ================================================
// 0xf2ec: WORD 'WF2EE' codep=0x224c wordp=0xf2ee params=1 returns=1
// ================================================

void WF2EE() // WF2EE
{
  Push(Read16(Pop() * 2 + Read16(pp_YTABL))); //  2* YTABL @ + @
}


// ================================================
// 0xf2fa: WORD 'WF2FC' codep=0x224c wordp=0xf2fc params=1 returns=1
// ================================================

void WF2FC() // WF2FC
{
  _gt_MAINVIEW(); // >MAINVIEW
  WF2EE(); // WF2EE
  _gt_DISPLAY(); // >DISPLAY
}


// ================================================
// 0xf304: WORD 'WF306' codep=0x224c wordp=0xf306 params=3 returns=0
// ================================================

void WF306() // WF306
{
  unsigned short int a;
  a = Pop(); // >R
  if (Pop() != 0)
  {
    Push(0x00bf);
    WF2EE(); // WF2EE
    Push(4);
    Push(0x00bf);
    Push(0x004c);
    Push(0x00bf - a); // 0x00bf I -
    Push(4);
    Push(0x00be);
  } else
  {
    Push(0x0048);
    WF2EE(); // WF2EE
    Push(4);
    Push(0x0048 + a); // 0x0048 I +
    Push(0x004c);
    Push(0x0048);
    _2OVER(); // 2OVER
    Push(Pop() + 1); //  1+
  }
  LCOPYBLK(); // LCOPYBLK
  Push(a); // R>
  Pop(); // DROP
  Push(Read16(pp_HBUF_dash_SEG)); // HBUF-SEG @
  ROT(); // ROT
  WF2FC(); // WF2FC
  Push(Read16(pp_DBUF_dash_SEG)); // DBUF-SEG @
  Push(4);
  ROLL(); // ROLL
  Push(Pop() + 2); //  2+
  Push(0x0024);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xf36a: WORD 'PORTLEAVE' codep=0x224c wordp=0xf36c params=2 returns=0
// ================================================

void PORTLEAVE() // PORTLEAVE
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" DOCKING BAY DOORS", 18); // (.")
  Push(0x7148);
  TONE(); // TONE
  BEEPON(); // BEEPON
}


// ================================================
// 0xf391: WORD 'WF393' codep=0x224c wordp=0xf393 params=0 returns=4
// ================================================

void WF393() // WF393
{
  unsigned short int i, imax;
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  _gt_DISPLAY(); // >DISPLAY
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(0x05dc);
    MS(); // MS
    V_gt_DISPLAY(); // V>DISPLAY
    return;
  }
  Push(0x003b);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0084 + i); // 0x0084 I +
    WF1C0(); // WF1C0
    Push(0x0084 - i); // 0x0084 I -
    WF1DE(); // WF1DE
    Push(0x7148);
    TONE(); // TONE
    Push(0x001e);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  Push(0x00bf);
  WF162(); // WF162
  Push(0x0048);
  WF162(); // WF162
  BEEPOFF(); // BEEPOFF
  Push(0x00fa);
  MS(); // MS
}


// ================================================
// 0xf3ef: WORD '&LAUNCH' codep=0x224c wordp=0xf3fb params=0 returns=8
// ================================================
// entry

void _and_LAUNCH() // &LAUNCH
{
  Push(Read16(pp_CONTEXT_dash_ID_n_)==5?1:0); // CONTEXT-ID# @ 5 =
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    WF2E2(); // WF2E2
    WF026(); // WF026
    WF112(); // WF112
    SET_STR_AS_PARAM("OPENING");
    PORTLEAVE(); // PORTLEAVE
    WF393(); // WF393
  }
  LAUNCH(); // LAUNCH
  if (Pop() == 0) return;
  Push(0xcc0a); // 'UNNEST'
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("STANDING BY TO MANEUVER");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf449: WORD '&RETURN' codep=0x224c wordp=0xf455 params=0 returns=2
// ================================================
// entry

void _and_RETURN() // &RETURN
{
  unsigned short int i, imax, j, jmax;
  _gt_MAINVIEW(); // >MAINVIEW
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

  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  SET_STR_AS_PARAM("CLOSING");
  PORTLEAVE(); // PORTLEAVE
  DrawAIRLOCK(); // .AIRLOCK
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_IsEGA)==0?1:0); // ?EGA @ 0=
  if (Pop() != 0)
  {
    Push(0x00bf);
    WF152(); // WF152
    Push(0x0048);
    WF152(); // WF152
    Push(0x7148);
    TONE(); // TONE
    BEEPON(); // BEEPON
    Push(0x003b);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(0x003c + j); // 0x003c I +
      Push(1);
      Push(j); // I
      WF306(); // WF306
      Push(0x003c - j); // 0x003c I -
      Push(0);
      Push(j); // I
      WF306(); // WF306
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
  V_gt_DISPLAY(); // V>DISPLAY
  BEEPOFF(); // BEEPOFF
}

// 0xf505: db 0x4c 0x41 0x55 0x4e 0x43 0x48 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x78 0x20 0x66 0x6f 0x72 0x20 0x43 0x4f 0x55 0x4e 0x54 0x44 0x4f 0x57 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x5f 0x31 0x32 0x38 0x30 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x53 0x54 0x50 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'LAUNCH-VOC______________________x for COUNTDOWN---------------)_1280_____ for STP---------- '

