// ====== OVERLAY 'LAUNCH-OV' ======
// store offset = 0xf090
// overlay size   = 0x04d0

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x000c C-string:'UNK_0xf0a6'
//      UNK_0xf0b4  codep:0x224c parp:0xf0b4 size:0x002e C-string:'UNK_0xf0b4'
//      UNK_0xf0e4  codep:0x224c parp:0xf0e4 size:0x0014 C-string:'UNK_0xf0e4'
//      UNK_0xf0fa  codep:0x224c parp:0xf0fa size:0x0010 C-string:'UNK_0xf0fa'
//      UNK_0xf10c  codep:0x224c parp:0xf10c size:0x000c C-string:'UNK_0xf10c'
//      UNK_0xf11a  codep:0x224c parp:0xf11a size:0x0032 C-string:'UNK_0xf11a'
//      UNK_0xf14e  codep:0x224c parp:0xf14e size:0x0042 C-string:'UNK_0xf14e'
//      UNK_0xf192  codep:0x224c parp:0xf192 size:0x0012 C-string:'UNK_0xf192'
//      UNK_0xf1a6  codep:0x224c parp:0xf1a6 size:0x000e C-string:'UNK_0xf1a6'
//      UNK_0xf1b6  codep:0x224c parp:0xf1b6 size:0x002c C-string:'UNK_0xf1b6'
//      UNK_0xf1e4  codep:0x224c parp:0xf1e4 size:0x001c C-string:'UNK_0xf1e4'
//      UNK_0xf202  codep:0x224c parp:0xf202 size:0x001c C-string:'UNK_0xf202'
//      UNK_0xf220  codep:0x1d29 parp:0xf220 size:0x0032 C-string:'UNK_0xf220'
//        .AIRLOCK  codep:0x224c parp:0xf25f size:0x00a5 C-string:'_dot_AIRLOCK'
//      UNK_0xf306  codep:0x224c parp:0xf306 size:0x000a C-string:'UNK_0xf306'
//      UNK_0xf312  codep:0x224c parp:0xf312 size:0x000c C-string:'UNK_0xf312'
//      UNK_0xf320  codep:0x224c parp:0xf320 size:0x0008 C-string:'UNK_0xf320'
//      UNK_0xf32a  codep:0x224c parp:0xf32a size:0x0064 C-string:'UNK_0xf32a'
//      UNK_0xf390  codep:0x224c parp:0xf390 size:0x0025 C-string:'UNK_0xf390'
//      UNK_0xf3b7  codep:0x224c parp:0xf3b7 size:0x0054 C-string:'UNK_0xf3b7'
//         &LAUNCH  codep:0x224c parp:0xf417 size:0x004e C-string:'_and_LAUNCH'
//         &RETURN  codep:0x224c parp:0xf471 size:0x0000 C-string:'_and_RETURN'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__3; // 3
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__5; // 5
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__dash_1; // -1
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
extern const unsigned short int pp__ask_G_dash_AWAR; // ?G-AWAR
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_STIME; // STIME
void D_st_(); // D<
void _dot_(); // .
void MS(); // MS
void ROLL(); // ROLL
void _2OVER(); // 2OVER
void D_dash_(); // D-
void RRND(); // RRND
void _ex__2(); // !_2
void D_ex_(); // D!
void ON_2(); // ON_2
void _099(); // 099
void MODULE(); // MODULE
void _ex_COLOR(); // !COLOR
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
void _dot_TTY(); // .TTY
void _ask_MRC(); // ?MRC
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
void _at_DS(); // @DS
void LPLOT(); // LPLOT
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xf220 = 0xf220; // UNK_0xf220 size: 50
// {0xff, 0x0f, 0xff, 0x01, 0x3f, 0xf8, 0xc7, 0xff, 0xfe, 0xff, 0xf3, 0xfc, 0x8f, 0xff, 0xf0, 0x1f, 0xff, 0xf0, 0x0f, 0x0f, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0xf0, 0xf0, 0x0f, 0xff, 0xf8, 0x0f, 0xff, 0xf1, 0x3f, 0xcf, 0xff, 0x7f, 0xff, 0xe3, 0x1f, 0xfc, 0x80, 0xff, 0xf0, 0xff}




// 0xf0a2: db 0x49 0x00 'I '

// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  MODULE(); // MODULE
  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
}


// ================================================
// 0xf0b2: WORD 'UNK_0xf0b4' codep=0x224c parp=0xf0b4
// ================================================

void UNK_0xf0b4() // UNK_0xf0b4
{
  signed short int i, imax;
  Push(0x0010);
  Push(0x000b);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Pop()<<4); // 16*
  Push(i); // I
  Push(Pop() + Pop()); // +
  _ex_COLOR(); // !COLOR
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _dot_(); // .
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  Push(0x0027);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffe2

  Pop(); // DROP
}


// ================================================
// 0xf0e2: WORD 'UNK_0xf0e4' codep=0x224c parp=0xf0e4
// ================================================

void UNK_0xf0e4() // UNK_0xf0e4
{
  Push(0x0026);
  Push(0x0087);
  POS_dot_(); // POS.
  _gt_2FONT(); // >2FONT
  BEEPON_2(); // BEEPON_2
  UNK_0xf0b4(); // UNK_0xf0b4
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf0f8: WORD 'UNK_0xf0fa' codep=0x224c parp=0xf0fa
// ================================================

void UNK_0xf0fa() // UNK_0xf0fa
{
  Push(0x0027);
  Push(0x0086);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  UNK_0xf0b4(); // UNK_0xf0b4
}


// ================================================
// 0xf10a: WORD 'UNK_0xf10c' codep=0x224c parp=0xf10c
// ================================================

void UNK_0xf10c() // UNK_0xf10c
{
  Push(0x0028);
  Push(0x0084);
  LPLOT(); // LPLOT
}


// ================================================
// 0xf118: WORD 'UNK_0xf11a' codep=0x224c parp=0xf11a
// ================================================

void UNK_0xf11a() // UNK_0xf11a
{
  signed short int i, imax;
  Push(0x2710);
  TONE(); // TONE
  Push(1); // 1
  Push(cc__3); // 3

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  V_gt_DISPL(); // V>DISPL
  Push(i); // I
  UNK_0xf0e4(); // UNK_0xf0e4
  V_gt_DISPL(); // V>DISPL
  Push(i); // I
  UNK_0xf0fa(); // UNK_0xf0fa
  V_gt_DISPL(); // V>DISPL
  UNK_0xf10c(); // UNK_0xf10c
  Push(0x0064);
  MS(); // MS
  V_gt_DISPL(); // V>DISPL
  Push(0x0190);
  MS(); // MS
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xffde

}


// ================================================
// 0xf14c: WORD 'UNK_0xf14e' codep=0x224c parp=0xf14e
// ================================================

void UNK_0xf14e() // UNK_0xf14e
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("COMMENCING LAUNCH SEQUENCE...", 29); // (.")
  UNK_0xf11a(); // UNK_0xf11a
  CTERASE(); // CTERASE
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(1); // 1
  Push(pp_CONTEXT_3); // CONTEXT_3
  _ex__2(); // !_2
  Push(pp__ask_G_dash_AWAR); // ?G-AWAR
  ON_2(); // ON_2
  Push(pp_GWF); // GWF
  _099(); // 099
}


// ================================================
// 0xf190: WORD 'UNK_0xf192' codep=0x224c parp=0xf192
// ================================================

void UNK_0xf192() // UNK_0xf192
{
  _2DUP(); // 2DUP
  Push(pp_STIME); // STIME
  D_ex_(); // D!
  Push(0x03e8); Push(0x0000);
  D_st_(); // D<
  Pop(); // DROP
}


// ================================================
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x224c parp=0xf1a6
// ================================================

void UNK_0xf1a6() // UNK_0xf1a6
{
  Push(cc__4); // 4
  SWAP(); // SWAP
  Push(0x004b);
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xf1b4: WORD 'UNK_0xf1b6' codep=0x224c parp=0xf1b6
// ================================================

void UNK_0xf1b6() // UNK_0xf1b6
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  UNK_0xf1a6(); // UNK_0xf1a6
  Push(0); // 0
  Push(0x000a);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  OVER(); // OVER
  Push(0x0084);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf1e2: WORD 'UNK_0xf1e4' codep=0x224c parp=0xf1e4
// ================================================

void UNK_0xf1e4() // UNK_0xf1e4
{
  unsigned short int a;
  a = Pop(); // >R
  Push(cc__4); // 4
  Push(0x00be);
  Push(0x004c);
  Push(a); // I
  Push(cc__4); // 4
  Push(0x00bf);
  LCOPYBL(); // LCOPYBL
  Push(a); // R>
  UNK_0xf1b6(); // UNK_0xf1b6
}


// ================================================
// 0xf200: WORD 'UNK_0xf202' codep=0x224c parp=0xf202
// ================================================

void UNK_0xf202() // UNK_0xf202
{
  unsigned short int a;
  a = Pop(); // >R
  Push(cc__4); // 4
  Push(a); // I
  Push(0x004c);
  Push(0x0049);
  Push(cc__4); // 4
  Push(a); // I
  Push(Pop()-1); // 1-
  LCOPYBL(); // LCOPYBL
  Push(a); // R>
  UNK_0xf1b6(); // UNK_0xf1b6
}


// ================================================
// 0xf21e: WORD 'UNK_0xf220' codep=0x1d29 parp=0xf220
// ================================================
// 0xf220: db 0xff 0x0f 0xff 0x01 0x3f 0xf8 0xc7 0xff 0xfe 0xff 0xf3 0xfc 0x8f 0xff 0xf0 0x1f 0xff 0xf0 0x0f 0x0f 0xf0 0x00 0x0f 0x00 0x00 0x00 0x00 0xf0 0x00 0x0f 0xf0 0xf0 0x0f 0xff 0xf8 0x0f 0xff 0xf1 0x3f 0xcf 0xff 0x7f 0xff 0xe3 0x1f 0xfc 0x80 0xff 0xf0 0xff '    ?                                 ?          '

// ================================================
// 0xf252: WORD '.AIRLOCK' codep=0x224c parp=0xf25f
// ================================================
// entry

void _dot_AIRLOCK() // .AIRLOCK
{
  _gt_MAINVI(); // >MAINVI
  SetColor("GREY2");
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  SetColor("BLACK");
  SetColor("BLACK");
  SetColor("YELLOW");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  _gt_2FONT(); // >2FONT
  Push(0x0011);
  Push(0x006d);
  POS_dot_(); // POS.
  PRINT("CAUTION", 7); // (.")
  _gt_1FONT(); // >1FONT
  Push(cc__5); // 5
  Push(0x005d);
  POS_dot_(); // POS.
  PRINT("PRESSURIZED AREA", 16); // (.")
  Push(cc__5); // 5
  Push(0x001e);
  POS_dot_(); // POS.
  PRINT("STANDARD AIRLOCK", 16); // (.")
  Push(cc__5); // 5
  Push(0x0014);
  POS_dot_(); // POS.
  PRINT("PROCEDURES APPLY", 16); // (.")
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex__2(); // !_2
  Push(0x001a);
  Push(0x0045);
  POS_dot_(); // POS.
  Push(0x0014);
  Push(Read16(regsp)); // DUP
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
  Push(pp_UNK_0xf220); // UNK_0xf220
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  BLT(); // BLT
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf304: WORD 'UNK_0xf306' codep=0x224c parp=0xf306
// ================================================

void UNK_0xf306() // UNK_0xf306
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xd216); // probable 'SECUR'
}


// ================================================
// 0xf310: WORD 'UNK_0xf312' codep=0x224c parp=0xf312
// ================================================

void UNK_0xf312() // UNK_0xf312
{
  Push(Pop()*2); // 2*
  Push(pp_YTABL); // YTABL
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf31e: WORD 'UNK_0xf320' codep=0x224c parp=0xf320
// ================================================

void UNK_0xf320() // UNK_0xf320
{
  _gt_MAINVI(); // >MAINVI
  UNK_0xf312(); // UNK_0xf312
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf328: WORD 'UNK_0xf32a' codep=0x224c parp=0xf32a
// ================================================

void UNK_0xf32a() // UNK_0xf32a
{
  unsigned short int a;
  a = Pop(); // >R
  if (Pop() == 0) goto label1;
  Push(0x00bf);
  UNK_0xf312(); // UNK_0xf312
  Push(cc__4); // 4
  Push(0x00bf);
  Push(0x004c);
  Push(0x00bf);
  Push(a); // I
  _dash_(); // -
  Push(cc__4); // 4
  Push(0x00be);
  goto label2;

  label1:
  Push(0x0048);
  UNK_0xf312(); // UNK_0xf312
  Push(cc__4); // 4
  Push(0x0048);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x004c);
  Push(0x0048);
  _2OVER(); // 2OVER
  Push(Pop()+1); // 1+

  label2:
  LCOPYBL(); // LCOPYBL
  Push(a); // R>
  Pop(); // DROP
  Push(pp_HBUF_dash_SE); // HBUF-SE
  Push(Read16(Pop())); // @
  ROT(); // ROT
  UNK_0xf320(); // UNK_0xf320
  Push(pp_DBUF_dash_SE); // DBUF-SE
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  ROLL(); // ROLL
  Push(Pop()+2); // 2+
  Push(0x0024);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xf38e: WORD 'UNK_0xf390' codep=0x224c parp=0xf390
// ================================================

void UNK_0xf390() // UNK_0xf390
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
// 0xf3b5: WORD 'UNK_0xf3b7' codep=0x224c parp=0xf3b7
// ================================================

void UNK_0xf3b7() // UNK_0xf3b7
{
  signed short int i, imax;
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  _gt_DISPLA(); // >DISPLA
  Push(cc_TRUE); // TRUE
  if (Pop() == 0) goto label1;
  Push(0x003b);
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0x0084);
  Push(i); // I
  _dash_(); // -
  UNK_0xf202(); // UNK_0xf202
  Push(0x0084);
  Push(i); // I
  Push(Pop() + Pop()); // +
  UNK_0xf1e4(); // UNK_0xf1e4
  Push(0x7148);
  TONE(); // TONE
  Push(0x001e);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffde

  BEEPOFF(); // BEEPOFF
  Push(0x00fa);
  MS(); // MS
  goto label2;

  label1:
  Push(0x05dc);
  MS(); // MS
  V_gt_DISPL(); // V>DISPL

  label2:
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf40b: WORD '&LAUNCH' codep=0x224c parp=0xf417
// ================================================
// entry

void _and_LAUNCH() // &LAUNCH
{
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  UNK_0xf306(); // UNK_0xf306
  UNK_0xf0a6(); // UNK_0xf0a6
  UNK_0xf192(); // UNK_0xf192

  UNK_0x3f09("OPENING");
  UNK_0xf390(); // UNK_0xf390
  UNK_0xf3b7(); // UNK_0xf3b7

  label1:
  UNK_0xf14e(); // UNK_0xf14e
  if (Pop() == 0) return;
  Push(0xcafc); // probable 'UNNEST'
  MODULE(); // MODULE
  CTINIT(); // CTINIT

  UNK_0x3f09("STANDING BY TO MANEUVER");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf465: WORD '&RETURN' codep=0x224c parp=0xf471
// ================================================
// entry

void _and_RETURN() // &RETURN
{
  signed short int i, imax;
  signed short int j, jmax;
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  Push(cc__6); // 6
  Push(0x0012);
  RRND(); // RRND
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(1); // 1
  Push(0x0010);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Pop()<<4); // 16*
  Push(Pop() + Pop()); // +
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(0x0048);
  RRND(); // RRND
  Push(0); // 0
  Push(0x0078);
  RRND(); // RRND
  LPLOT(); // LPLOT
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA

  UNK_0x3f09("CLOSING");
  UNK_0xf390(); // UNK_0xf390
  _dot_AIRLOCK(); // .AIRLOCK
  SetColor("GREY2");
  _ex_COLOR(); // !COLOR
  Push(cc_FALSE); // FALSE
  if (Pop() == 0) goto label1;
  Push(0x00bf);
  UNK_0xf1a6(); // UNK_0xf1a6
  Push(0x0048);
  UNK_0xf1a6(); // UNK_0xf1a6
  Push(0x7148);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x003b);
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(0x003c);
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(1); // 1
  Push(j); // I
  UNK_0xf32a(); // UNK_0xf32a
  Push(0x003c);
  Push(j); // I
  _dash_(); // -
  Push(0); // 0
  Push(j); // I
  UNK_0xf32a(); // UNK_0xf32a
  Push(0x7148);
  TONE(); // TONE
  Push(0x001e);
  MS(); // MS
  j++;
  } while(j<jmax); // (LOOP) 0xffd6

  goto label2;

  label1:
  Push(0x05dc);
  MS(); // MS
  _dot_AIRLOCK(); // .AIRLOCK

  label2:
  V_gt_DISPL(); // V>DISPL
  BEEPOFF(); // BEEPOFF
}

// 0xf51d: db 0x4c 0x41 0x55 0x4e 0x43 0x48 0x2d 0x56 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x78 0x20 0x66 0x6f 0x72 0x20 0x43 0x4f 0x55 0x4e 0x54 0x44 0x4f 0x57 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x52 0x32 0x32 0x37 0x00 'LAUNCH-V________________________x for COUNTDOWN---------------)R227 '
  