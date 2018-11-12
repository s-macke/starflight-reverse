// ====== OVERLAY 'FLUX-EFFECT' ======
// store offset = 0xf330
// overlay size   = 0x0230

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF346  codep:0x224c wordp:0xf346 size:0x000e C-string:'WF346'
//           WF356  codep:0x1d29 wordp:0xf356 size:0x0032 C-string:'WF356'
//           WF38A  codep:0x1d29 wordp:0xf38a size:0x0002 C-string:'WF38A'
//           WF38E  codep:0x224c wordp:0xf38e size:0x0010 C-string:'WF38E'
//           WF3A0  codep:0x224c wordp:0xf3a0 size:0x0064 C-string:'WF3A0'
//           WF406  codep:0x224c wordp:0xf406 size:0x0018 C-string:'WF406'
//           WF420  codep:0x224c wordp:0xf420 size:0x005e C-string:'WF420'
//     HYPER-FRAME  codep:0x224c wordp:0xf48e size:0x0022 C-string:'HYPER_dash_FRAME'
//            FLUX  codep:0x224c wordp:0xf4b9 size:0x002a C-string:'FLUX'
//           WF4E5  codep:0x224c wordp:0xf4e5 size:0x0024 C-string:'WF4E5'
//          JUMPFX  codep:0x224c wordp:0xf514 size:0x0000 C-string:'JUMPFX'

// =================================
// ============= EXTERN ============
// =================================
extern Color GREY1; // GREY1
void MAX(); // MAX
void MIN(); // MIN
void RRND(); // RRND
void C_ex__2(); // C!_2
void Store_2(); // !_2
void ON_2(); // ON_2
void StoreCOLOR(); // !COLOR
void RNDCLR(); // RNDCLR
void DARK(); // DARK
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void BEEPON_2(); // BEEPON_2
void _slash_(); // /
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void LPLOT(); // LPLOT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF356 = 0xf356; // WF356 size: 50
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x53, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x41, 0x57, 0x4b}

const unsigned short int pp_WF38A = 0xf38a; // WF38A size: 2
// {0x3a, 0x20}




// 0xf342: db 0x21 0x00 '! '

// ================================================
// 0xf344: WORD 'WF346' codep=0x224c wordp=0xf346 params=0 returns=0
// ================================================

void WF346() // WF346
{
  Push(0xfff6);
  Push(0x0028);
  RRND(); // RRND
  TONE(); // TONE
}


// ================================================
// 0xf354: WORD 'WF356' codep=0x1d29 wordp=0xf356
// ================================================
// 0xf356: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4f 0x53 0x48 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x41 0x57 0x4b ':  ALLOT OSH                                   AWK'

// ================================================
// 0xf388: WORD 'WF38A' codep=0x1d29 wordp=0xf38a
// ================================================
// 0xf38a: db 0x3a 0x20 ': '

// ================================================
// 0xf38c: WORD 'WF38E' codep=0x224c wordp=0xf38e params=2 returns=1
// ================================================

void WF38E() // WF38E
{
  Push(Pop() * Pop()); // *
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Pop() * 2 - 1); //  2* 1-
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf39e: WORD 'WF3A0' codep=0x224c wordp=0xf3a0 params=1 returns=0
// ================================================

void WF3A0() // WF3A0
{
  unsigned short int a;
  a = Pop(); // >R
  Push(5);
  Push(0x0014);
  RRND(); // RRND
  Push(a); // I
  C_ex__2(); // C!_2
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(0x0048);
  WF38E(); // WF38E
  Push(0xffdc);
  Push(0x0024);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffdc);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(a + 1); // I 1+
  Store_2(); // !_2
  Push(0x0078);
  WF38E(); // WF38E
  Push(0xffc4);
  Push(0x003c);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffc4);
  MAX(); // MAX
  Push(0x003b);
  MIN(); // MIN
  Push(a + 3); // R> 3 +
  Store_2(); // !_2
}


// ================================================
// 0xf404: WORD 'WF406' codep=0x224c wordp=0xf406 params=0 returns=0
// ================================================

void WF406() // WF406
{
  unsigned short int i, imax;

  i = 0;
  imax = 0x0032;
  do // (DO)
  {
    Push(pp_WF356 + i); // WF356 I +
    WF3A0(); // WF3A0
    Push(5);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf41e: WORD 'WF420' codep=0x224c wordp=0xf420 params=1 returns=1
// ================================================

void WF420() // WF420
{
  unsigned short int a;
  Push(Pop() + pp_WF356); //  WF356 +
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
    WF3A0(); // WF3A0
    return;
  }
  Push(a); // R>
  C_ex__2(); // C!_2
}


// ================================================
// 0xf47e: WORD 'HYPER-FRAME' codep=0x224c wordp=0xf48e
// ================================================

void HYPER_dash_FRAME() // HYPER-FRAME
{
  unsigned short int i, imax;
  Push(Read16(pp_WF38A)); // WF38A @
  if (Pop() != 0)
  {
    DARK(); // DARK
  }

  i = 0;
  imax = 0x0032;
  do // (DO)
  {
    Push(i); // I
    WF420(); // WF420
    WF346(); // WF346
    Push(5);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf4b0: WORD 'FLUX' codep=0x224c wordp=0xf4b9
// ================================================
// entry

void FLUX() // FLUX
{
  unsigned short int i, imax;
  _gt_MAINVI(); // >MAINVI
  Push(pp_WF38A); // WF38A
  ON_2(); // ON_2
  WF406(); // WF406
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  Push(0);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2

  i = 0;
  imax = 0x0096;
  do // (DO)
  {
    HYPER_dash_FRAME(); // HYPER-FRAME
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf4e3: WORD 'WF4E5' codep=0x224c wordp=0xf4e5
// ================================================

void WF4E5() // WF4E5
{
  unsigned short int i, imax;
  Push(Read16(pp_WF38A)); // WF38A @
  if (Pop() != 0)
  {
    DARK(); // DARK
  }

  i = 0;
  imax = 0x0032;
  do // (DO)
  {
    RNDCLR(); // RNDCLR
    Push(i); // I
    WF420(); // WF420
    WF346(); // WF346
    Push(5);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf509: WORD 'JUMPFX' codep=0x224c wordp=0xf514
// ================================================
// entry

void JUMPFX() // JUMPFX
{
  unsigned short int i, imax;
  _gt_MAINVI(); // >MAINVI
  WF406(); // WF406
  Push(0);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2

  i = 0;
  imax = Pop() * 2; //  2*
  do // (DO)
  {
    WF4E5(); // WF4E5
    Push(0);
    Push(6);
    RRND(); // RRND
    Push(pp_WF38A); // WF38A
    Store_2(); // !_2
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}

// 0xf53e: db 0x46 0x4c 0x55 0x58 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x65 0x72 0x00 'FLUX-VOC________________________er '

