// ====== OVERLAY 'FLUX-EFFECT' ======
// store offset = 0xf390
// overlay size   = 0x01d0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      HYPER-DOTS  codep:0x1d29 parp:0xf3a6 size:0x0032 C-string:'HYPER_dash_DOTS'
//     ?STAR-TRAIL  codep:0x1d29 parp:0xf3da size:0x0002 C-string:'IsSTAR_dash_TRAIL'
//           WF3DE  codep:0x224c parp:0xf3de size:0x0010 C-string:'WF3DE'
//            NOVA  codep:0x224c parp:0xf3f0 size:0x0064 C-string:'NOVA'
// INIT-HYPER-STARS  codep:0x224c parp:0xf456 size:0x0018 C-string:'INIT_dash_HYPER_dash_STARS'
//      HYPER-PLOT  codep:0x224c parp:0xf470 size:0x005e C-string:'HYPER_dash_PLOT'
//     HYPER-FRAME  codep:0x224c parp:0xf4d0 size:0x002c C-string:'HYPER_dash_FRAME'
//            FLUX  codep:0x224c parp:0xf505 size:0x0000 C-string:'FLUX'

// =================================
// ============= EXTERN ============
// =================================
extern Color GREY1; // GREY1
void MAX(); // MAX
void MIN(); // MIN
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void ON_3(); // ON_3
void StoreCOLOR(); // !COLOR
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void DARK(); // DARK
void BEEPON(); // BEEPON
void _slash_(); // /
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void LPLOT(); // LPLOT
void V_gt_DISPLAY(); // V>DISPLAY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_HYPER_dash_DOTS = 0xf3a6; // HYPER-DOTS size: 50
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x53, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x41, 0x57, 0x4b}

const unsigned short int pp_IsSTAR_dash_TRAIL = 0xf3da; // ?STAR-TRAIL size: 2
// {0x3a, 0x20}




// 0xf3a2: db 0x1a 0x00 '  '

// ================================================
// 0xf3a4: WORD 'HYPER-DOTS' codep=0x1d29 parp=0xf3a6
// ================================================
// 0xf3a6: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4f 0x53 0x48 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x41 0x57 0x4b ':  ALLOT OSH                                   AWK'

// ================================================
// 0xf3d8: WORD '?STAR-TRAIL' codep=0x1d29 parp=0xf3da
// ================================================
// 0xf3da: db 0x3a 0x20 ': '

// ================================================
// 0xf3dc: WORD 'WF3DE' codep=0x224c parp=0xf3de params=2 returns=1
// ================================================

void WF3DE() // WF3DE
{
  Push(Pop() * Pop()); // *
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Pop() * 2 - 1); //  2* 1-
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf3ee: WORD 'NOVA' codep=0x224c parp=0xf3f0 params=1 returns=0
// ================================================

void NOVA() // NOVA
{
  unsigned short int a;
  a = Pop(); // >R
  Push(5);
  Push(0x0014);
  RRND(); // RRND
  Push(a); // I
  C_ex_(); // C!
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(0x0048);
  WF3DE(); // WF3DE
  Push(0xffdc);
  Push(0x0024);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffdc);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(a + 1); // I 1+
  Store_3(); // !_3
  Push(0x0078);
  WF3DE(); // WF3DE
  Push(0xffc4);
  Push(0x003c);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffc4);
  MAX(); // MAX
  Push(0x003b);
  MIN(); // MIN
  Push(a + 3); // R> 3 +
  Store_3(); // !_3
}


// ================================================
// 0xf454: WORD 'INIT-HYPER-STARS' codep=0x224c parp=0xf456 params=0 returns=0
// ================================================

void INIT_dash_HYPER_dash_STARS() // INIT-HYPER-STARS
{
  unsigned short int i, imax;
  Push(0x0032);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_HYPER_dash_DOTS + i); // HYPER-DOTS I +
    NOVA(); // NOVA
    Push(5);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf46e: WORD 'HYPER-PLOT' codep=0x224c parp=0xf470 params=1 returns=1
// ================================================

void HYPER_dash_PLOT() // HYPER-PLOT
{
  unsigned short int a;
  Push(Pop() + pp_HYPER_dash_DOTS); //  HYPER-DOTS +
  a = Pop(); // >R
  Push(Read16(a + 3)); // I 3 + @
  Push(Read16(a)&0xFF); // I C@
  _slash_(); // /
  Push(Pop() + 0x0024); //  0x0024 +
  Push(0);
  MAX(); // MAX
  Push(0x0047);
  MIN(); // MIN
  Push(Read16(a + 1)); // I 1+ @
  Push(Read16(a)&0xFF); // I C@
  _slash_(); // /
  Push(Pop() + 0x003c); //  0x003c +
  Push(0);
  MAX(); // MAX
  Push(0x0077);
  MIN(); // MIN
  LPLOT(); // LPLOT
  Push((Read16(a)&0xFF) - 1); // I C@ 1-
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(a); // R>
    NOVA(); // NOVA
    return;
  }
  Push(a); // R>
  C_ex_(); // C!
}


// ================================================
// 0xf4ce: WORD 'HYPER-FRAME' codep=0x224c parp=0xf4d0 params=0 returns=1
// ================================================

void HYPER_dash_FRAME() // HYPER-FRAME
{
  unsigned short int i, imax;
  Push(Read16(pp_IsSTAR_dash_TRAIL)); // ?STAR-TRAIL @
  if (Pop() != 0)
  {
    DARK(); // DARK
  }
  Push(0x0032);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    HYPER_dash_PLOT(); // HYPER-PLOT
    Push(0xfff6);
    Push(0x0028);
    RRND(); // RRND
    TONE(); // TONE
    Push(5);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf4fc: WORD 'FLUX' codep=0x224c parp=0xf505 params=0 returns=1
// ================================================
// entry

void FLUX() // FLUX
{
  unsigned short int i, imax;
  _gt_MAINVIEW(); // >MAINVIEW
  Push(pp_IsSTAR_dash_TRAIL); // ?STAR-TRAIL
  ON_3(); // ON_3
  INIT_dash_HYPER_dash_STARS(); // INIT-HYPER-STARS
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  Push(0);
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x0096);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    HYPER_dash_FRAME(); // HYPER-FRAME
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
  DARK(); // DARK
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
}

// 0xf52f: db 0x46 0x4c 0x55 0x58 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x65 0x72 0x6c 0x61 0x79 0x20 0x53 0x75 0x66 0x66 0x69 0x78 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'FLUX-VOC________________________erlay Suffix----- '

