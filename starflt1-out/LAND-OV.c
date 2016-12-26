// ====== OVERLAY 'LAND-OV' ======
// store offset = 0xf120
// overlay size   = 0x0440

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf136  codep:0x744d parp:0xf136 size:0x0003 C-string:'UNK_0xf136'
//      UNK_0xf13b  codep:0x73ea parp:0xf13b size:0x0006 C-string:'UNK_0xf13b'
//      UNK_0xf143  codep:0x1d29 parp:0xf143 size:0x0002 C-string:'UNK_0xf143'
//      UNK_0xf147  codep:0x224c parp:0xf147 size:0x002e C-string:'UNK_0xf147'
//      UNK_0xf177  codep:0x224c parp:0xf177 size:0x0050 C-string:'UNK_0xf177'
//      UNK_0xf1c9  codep:0x224c parp:0xf1c9 size:0x0010 C-string:'UNK_0xf1c9'
//      UNK_0xf1db  codep:0x224c parp:0xf1db size:0x0014 C-string:'UNK_0xf1db'
//      UNK_0xf1f1  codep:0x224c parp:0xf1f1 size:0x0065 C-string:'UNK_0xf1f1'
//      UNK_0xf258  codep:0x224c parp:0xf258 size:0x00d2 C-string:'UNK_0xf258'
//      UNK_0xf32c  codep:0x224c parp:0xf32c size:0x0014 C-string:'UNK_0xf32c'
//      UNK_0xf342  codep:0x224c parp:0xf342 size:0x0037 C-string:'UNK_0xf342'
//      UNK_0xf37b  codep:0x224c parp:0xf37b size:0x0020 C-string:'UNK_0xf37b'
//      UNK_0xf39d  codep:0x224c parp:0xf39d size:0x0037 C-string:'UNK_0xf39d'
//      UNK_0xf3d6  codep:0x224c parp:0xf3d6 size:0x000a C-string:'UNK_0xf3d6'
//      UNK_0xf3e2  codep:0x224c parp:0xf3e2 size:0x004c C-string:'UNK_0xf3e2'
//      UNK_0xf430  codep:0x224c parp:0xf430 size:0x002c C-string:'UNK_0xf430'
//      UNK_0xf45e  codep:0x224c parp:0xf45e size:0x0036 C-string:'UNK_0xf45e'
//           ?LAND  codep:0x224c parp:0xf49e size:0x004b C-string:'_ask_LAND'
//         ?LAUNCH  codep:0x224c parp:0xf4f5 size:0x0000 C-string:'_ask_LAUNCH'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf143[2] = {0x00, 0x00}; // UNK_0xf143



// 0xf132: db 0x3f 0x00 '? '

// ================================================
// 0xf134: WORD 'UNK_0xf136' codep=0x744d parp=0xf136
// ================================================
// 0xf136: db 0x14 0x34 0x0f ' 4 '

// ================================================
// 0xf139: WORD 'UNK_0xf13b' codep=0x73ea parp=0xf13b
// ================================================
// 0xf13b: db 0x20 0x02 0x02 0x16 0x8f 0x65 '     e'

// ================================================
// 0xf141: WORD 'UNK_0xf143' codep=0x1d29 parp=0xf143
// ================================================
// 0xf143: db 0x00 0x00 '  '

// ================================================
// 0xf145: WORD 'UNK_0xf147' codep=0x224c parp=0xf147
// ================================================

void UNK_0xf147() // UNK_0xf147
{
  Push(0x62bf); // pointer to (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xf13b"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0320);
  _dash_(); // -
  Push(0); // 0
  SQRT(); // SQRT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0320);
  Push(Pop() + Pop()); // +

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf175: WORD 'UNK_0xf177' codep=0x224c parp=0xf177
// ================================================

void UNK_0xf177() // UNK_0xf177
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(0xf143); // pointer to UNK_0xf143
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf147(); // UNK_0xf147
  Push(0x0028);
  _slash_(); // /
  SWAP(); // SWAP
  OVER(); // OVER
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3

  label2:
  CDROP(); // CDROP
  goto label3;

  label1:
  Push(0); // 0

  label3:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1c7: WORD 'UNK_0xf1c9' codep=0x224c parp=0xf1c9
// ================================================

void UNK_0xf1c9() // UNK_0xf1c9
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  SetColor("YELLOW");
  Push(0x4f0c);
  _ex__3(); // !_3
  CTERASE(); // CTERASE
}


// ================================================
// 0xf1d9: WORD 'UNK_0xf1db' codep=0x224c parp=0xf1db
// ================================================

void UNK_0xf1db() // UNK_0xf1db
{
  Push(0xf143); // pointer to UNK_0xf143
  ON_3(); // ON_3
  UNK_0xf177(); // UNK_0xf177
  Pop(); // DROP
  Push(0xf143); // pointer to UNK_0xf143
  OFF(); // OFF
  Push(0xbd4a);
  MODULE(); // MODULE
}


// ================================================
// 0xf1ef: WORD 'UNK_0xf1f1' codep=0x224c parp=0xf1f1
// ================================================

void UNK_0xf1f1() // UNK_0xf1f1
{
  CTINIT(); // CTINIT
  UNK_0xf1c9(); // UNK_0xf1c9

  UNK_0x3f3b("CAPTAIN, THE SHIP IS BEING CRUSHED BY");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR

  UNK_0x3f3b("EXTREME GRAVITY. THE ...");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Push(0x1388);
  Push(0x03e8);
  Push(1); // 1
  _gt_SND(); // >SND
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE(); // BYE
}


// ================================================
// 0xf256: WORD 'UNK_0xf258' codep=0x224c parp=0xf258
// ================================================

void UNK_0xf258() // UNK_0xf258
{
  CTINIT(); // CTINIT
  UNK_0xf1c9(); // UNK_0xf1c9
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  _i_KEY(); // 'KEY
  Pop(); // DROP

  label1:
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR

  UNK_0x3f3b("EMERGENCY LOCATOR TRANSMISSION:");
  _dot_TTY(); // .TTY

  UNK_0x3f3b(" STARSHIP ISS ");
  _dot_TTY(); // .TTY
  Push(0x6423); // IFIELD(UNK_0xf136)
  COUNT(); // COUNT
  Exec(TYPE); // call of word 0x2690 '(TYPE)'

  UNK_0x3f3b(" CRASHED ON PLANET ");
  _dot_TTY(); // .TTY
  Push(0x62af); // pointer to (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fa); // IFIELD(INST-QTY)
  _ask_(); // ?
  ICLOSE(); // ICLOSE

  UNK_0x3f3b(" IN SYSTEM ");
  _dot_TTY(); // .TTY
  Push(0x629f); // pointer to (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCALE); // *MAPSCALE
  _slash_(); // /
  Push(0); // 0
  _dot_R(); // .R
  PRINT(",", 1); // (.")
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCALE); // *MAPSCALE
  _slash_(); // /
  Push(0); // 0
  _dot_R(); // .R
  ICLOSE(); // ICLOSE

  UNK_0x3f3b("NO SURVIVORS");
  _dot_TTY(); // .TTY
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  Push(0x1388);
  Push(cc__3); // 3
  Push(0x0032);
  Push(0x03e8);
  Push(2); // 2
  _gt_SND(); // >SND
  _i_KEY(); // 'KEY
  if (Pop() == 0) goto label1;
  BYE(); // BYE
}


// ================================================
// 0xf32a: WORD 'UNK_0xf32c' codep=0x224c parp=0xf32c
// ================================================

void UNK_0xf32c() // UNK_0xf32c
{
  UNK_0xf177(); // UNK_0xf177
  Push(0x0140);
  MIN(); // MIN
  Push(0x0028);
  Push(Pop() * Pop()); // *
  UNK_0xf147(); // UNK_0xf147
  _st_(); // <
}


// ================================================
// 0xf340: WORD 'UNK_0xf342' codep=0x224c parp=0xf342
// ================================================

void UNK_0xf342() // UNK_0xf342
{
  UNK_0xf32c(); // UNK_0xf32c
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f3b("INSUFFICIENT FUEL FOR SAFE LANDING");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf379: WORD 'UNK_0xf37b' codep=0x224c parp=0xf37b
// ================================================

void UNK_0xf37b() // UNK_0xf37b
{
  UNK_0xf177(); // UNK_0xf177
  Push(0x0140);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(0x5a5c); // pointer to CONTEXT-ID#
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x0014);
  Push(Pop() * Pop()); // *
  UNK_0xf147(); // UNK_0xf147
  _st_(); // <
}


// ================================================
// 0xf39b: WORD 'UNK_0xf39d' codep=0x224c parp=0xf39d
// ================================================

void UNK_0xf39d() // UNK_0xf39d
{
  UNK_0xf37b(); // UNK_0xf37b
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f3b("INSUFFICIENT FUEL FOR RE-LAUNCHING");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf3d4: WORD 'UNK_0xf3d6' codep=0x224c parp=0xf3d6
// ================================================

void UNK_0xf3d6() // UNK_0xf3d6
{
  UNK_0xf147(); // UNK_0xf147
  Push(0x031f);
  _gt_(); // >
}


// ================================================
// 0xf3e0: WORD 'UNK_0xf3e2' codep=0x224c parp=0xf3e2
// ================================================

void UNK_0xf3e2() // UNK_0xf3e2
{
  UNK_0xf3d6(); // UNK_0xf3d6
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f3b("THIS PLANET'S GRAVITY WILL CRUSH THE");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR

  UNK_0x3f3b("SHIP'S HULL.");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430
// ================================================

void UNK_0xf430() // UNK_0xf430
{
  UNK_0xf32c(); // UNK_0xf32c
  Push(0x58db); // pointer to ?FUEL-DIE
  _ex__3(); // !_3
  Push(cc__dash_1); // -1
  Push(0x58f3); // pointer to GWF
  _ex__3(); // !_3
  UNK_0xf1db(); // UNK_0xf1db
  Push(0xc3a7);
  MODULE(); // MODULE
  Push(0x58db); // pointer to ?FUEL-DIE
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf258(); // UNK_0xf258
  return;

  label1:
  UNK_0xf3d6(); // UNK_0xf3d6
  if (Pop() == 0) return;
  UNK_0xf1f1(); // UNK_0xf1f1
}


// ================================================
// 0xf45c: WORD 'UNK_0xf45e' codep=0x224c parp=0xf45e
// ================================================

void UNK_0xf45e() // UNK_0xf45e
{
  Push(0x58f3); // pointer to GWF
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf3e2(); // UNK_0xf3e2
  if (Pop() == 0) goto label1;
  Push(0x58f3); // pointer to GWF
  ON_3(); // ON_3
  goto label2;

  label1:
  UNK_0xf342(); // UNK_0xf342
  if (Pop() == 0) goto label3;
  Push(0x58f3); // pointer to GWF
  ON_3(); // ON_3
  goto label2;

  label3:
  UNK_0xf39d(); // UNK_0xf39d
  Push(0x58f3); // pointer to GWF
  _ex__3(); // !_3

  label2:
  Push(0x58f3); // pointer to GWF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf494: WORD '?LAND' codep=0x224c parp=0xf49e
// ================================================
// entry

void _ask_LAND() // ?LAND
{
  Push(0x5f5c); // pointer to 'EXTERNAL-EVENTS
  Push(Read16(Pop())); // @
  Push(0x5329); // pointer to 'HEAT
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("COMPUTER NOT RESPONDING!", 24); // (.")
  BEEP(); // BEEP
  return;

  label1:
  Push(0x58e9); // pointer to ?G-AWARE
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf45e(); // UNK_0xf45e
  if (Pop() == 0) goto label3;
  UNK_0xf430(); // UNK_0xf430

  label3:
  return;

  label2:
  UNK_0xf430(); // UNK_0xf430
}


// ================================================
// 0xf4e9: WORD '?LAUNCH' codep=0x224c parp=0xf4f5
// ================================================
// entry

void _ask_LAUNCH() // ?LAUNCH
{
  UNK_0xf39d(); // UNK_0xf39d
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  UNK_0xf1db(); // UNK_0xf1db
}

// 0xf503: db 0x4c 0x41 0x4e 0x44 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4c 0x41 0x4e 0x44 0x2d 0x4f 0x56 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x2d 0x32 0x32 0x36 0x33 0x2f 0x38 0x35 0x29 0x31 0x31 0x35 0x35 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'LAND-VOC________________________for LAND-OV-------------------)-2263/85)1155DOCTOR----------- '
  