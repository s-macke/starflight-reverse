// ====== OVERLAY 'LAND-OV' ======
// store offset = 0xf120
// overlay size   = 0x0440

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF136  codep:0x744d wordp:0xf136 size:0x0003 C-string:'WF136'
//           WF13B  codep:0x73ea wordp:0xf13b size:0x0006 C-string:'WF13B'
//           WF143  codep:0x1d29 wordp:0xf143 size:0x0002 C-string:'WF143'
//           WF147  codep:0x224c wordp:0xf147 size:0x002e C-string:'WF147'
//           WF177  codep:0x224c wordp:0xf177 size:0x0050 C-string:'WF177'
//           WF1C9  codep:0x224c wordp:0xf1c9 size:0x0010 C-string:'WF1C9'
//           WF1DB  codep:0x224c wordp:0xf1db size:0x0014 C-string:'WF1DB'
//           WF1F1  codep:0x224c wordp:0xf1f1 size:0x0065 C-string:'WF1F1'
//           WF258  codep:0x224c wordp:0xf258 size:0x00d2 C-string:'WF258'
//           WF32C  codep:0x224c wordp:0xf32c size:0x0014 C-string:'WF32C'
//           WF342  codep:0x224c wordp:0xf342 size:0x0037 C-string:'WF342'
//           WF37B  codep:0x224c wordp:0xf37b size:0x0020 C-string:'WF37B'
//           WF39D  codep:0x224c wordp:0xf39d size:0x0037 C-string:'WF39D'
//           WF3D6  codep:0x224c wordp:0xf3d6 size:0x000a C-string:'WF3D6'
//           WF3E2  codep:0x224c wordp:0xf3e2 size:0x004c C-string:'WF3E2'
//           WF430  codep:0x224c wordp:0xf430 size:0x002c C-string:'WF430'
//           WF45E  codep:0x224c wordp:0xf45e size:0x0036 C-string:'WF45E'
//           ?LAND  codep:0x224c wordp:0xf49e size:0x004b C-string:'IsLAND'
//         ?LAUNCH  codep:0x224c wordp:0xf4f5 size:0x0000 C-string:'IsLAUNCH'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCALE; // *MAPSCALE
extern const unsigned short int pp__i_HEAT; // 'HEAT
extern const unsigned short int pp_IsFUEL_dash_DIE; // ?FUEL-DIE
extern const unsigned short int pp_IsG_dash_AWARE; // ?G-AWARE
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp__i_EXTERNAL_dash_EVENTS; // 'EXTERNAL-EVENTS
extern const unsigned short int pp__ro_SYSTEM_rc_; // (SYSTEM)
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern Color BLACK; // BLACK
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void COUNT(); // COUNT
void MAX(); // MAX
void MIN(); // MIN
void BEEP(); // BEEP
void DrawR(); // .R
void Is(); // ?
void KEY_2(); // KEY_2
void SQRT(); // SQRT
void Store_3(); // !_3
void ON_3(); // ON_3
void OFF(); // OFF
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void BYE(); // BYE
void CTERASE(); // CTERASE
void _gt_SND(); // >SND
void CTCR(); // CTCR
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _gt_(); // >
void _st_(); // <


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF143 = 0xf143; // WF143 size: 2
// {0x00, 0x00}




// 0xf132: db 0x3f 0x00 '? '

// ================================================
// 0xf134: WORD 'WF136' codep=0x744d wordp=0xf136
// ================================================
IFieldType WF136 = {SHIPIDX, 0x34, 0x0f};

// ================================================
// 0xf139: WORD 'WF13B' codep=0x73ea wordp=0xf13b
// ================================================
LoadDataType WF13B = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xf141: WORD 'WF143' codep=0x1d29 wordp=0xf143
// ================================================
// 0xf143: db 0x00 0x00 '  '

// ================================================
// 0xf145: WORD 'WF147' codep=0x224c wordp=0xf147
// ================================================

void WF147() // WF147
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WF13B); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop() - 0x0320); //  0x0320 -
    Push(0);
    SQRT(); // SQRT
    Push(Pop() * 0x000a + 0x0320); //  0x000a * 0x0320 +
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf175: WORD 'WF177' codep=0x224c wordp=0xf177
// ================================================

void WF177() // WF177
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    Push(Pop() * Read16(0x63ef+INST_dash_QTY.offset)); //  INST-QTY<IFIELD> @ *
    Push(Read16(pp_WF143)); // WF143 @
    if (Pop() != 0)
    {
      WF147(); // WF147
      Push(0x0028);
      _slash_(); // /
      SWAP(); // SWAP
      OVER(); // OVER
      _dash_(); // -
      Push(0);
      MAX(); // MAX
      Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
      Store_3(); // !_3
    }
    CDROP(); // CDROP
  } else
  {
    Push(0);
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1c7: WORD 'WF1C9' codep=0x224c wordp=0xf1c9 params=0 returns=0
// ================================================

void WF1C9() // WF1C9
{
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  GetColor(YELLOW);
  Push(0x4f0c); // 'BLACK'
  Store_3(); // !_3
  CTERASE(); // CTERASE
}


// ================================================
// 0xf1d9: WORD 'WF1DB' codep=0x224c wordp=0xf1db
// ================================================

void WF1DB() // WF1DB
{
  Push(pp_WF143); // WF143
  ON_3(); // ON_3
  WF177(); // WF177
  Pop(); // DROP
  Push(pp_WF143); // WF143
  OFF(); // OFF
  Push(0xbd4a); // '=CARGO'
  MODULE(); // MODULE
}


// ================================================
// 0xf1ef: WORD 'WF1F1' codep=0x224c wordp=0xf1f1
// ================================================

void WF1F1() // WF1F1
{
  CTINIT(); // CTINIT
  WF1C9(); // WF1C9
  SET_STR_AS_PARAM("CAPTAIN, THE SHIP IS BEING CRUSHED BY");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  SET_STR_AS_PARAM("EXTREME GRAVITY. THE ...");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x1388);
  Push(0x03e8);
  Push(1);
  _gt_SND(); // >SND
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE(); // BYE
}


// ================================================
// 0xf256: WORD 'WF258' codep=0x224c wordp=0xf258
// ================================================

void WF258() // WF258
{
  CTINIT(); // CTINIT
  WF1C9(); // WF1C9
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  _i_KEY(); // 'KEY
  Pop(); // DROP
  do
  {
    TTY_dash_SCR(); // TTY-SCR
    TTY_dash_SCR(); // TTY-SCR
    SET_STR_AS_PARAM("EMERGENCY LOCATOR TRANSMISSION:");
    DrawTTY(); // .TTY
    SET_STR_AS_PARAM(" STARSHIP ISS ");
    DrawTTY(); // .TTY
    Push(0x63ef+WF136.offset); // WF136<IFIELD>
    COUNT(); // COUNT
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    SET_STR_AS_PARAM(" CRASHED ON PLANET ");
    DrawTTY(); // .TTY
    Push(pp__ro_ORBIT_rc_); // (ORBIT)
    Get_gt_C_plus_S(); // @>C+S
    Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
    Is(); // ?
    ICLOSE(); // ICLOSE
    SET_STR_AS_PARAM(" IN SYSTEM ");
    DrawTTY(); // .TTY
    Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
    Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
    _slash_(); // /
    Push(0);
    DrawR(); // .R
    PRINT(",", 1); // (.")
    Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
    Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
    _slash_(); // /
    Push(0);
    DrawR(); // .R
    ICLOSE(); // ICLOSE
    SET_STR_AS_PARAM("NO SURVIVORS");
    DrawTTY(); // .TTY
    TTY_dash_SCR(); // TTY-SCR
    TTY_dash_SCR(); // TTY-SCR
    Push(0x1388);
    Push(3);
    Push(0x0032);
    Push(0x03e8);
    Push(2);
    _gt_SND(); // >SND
    _i_KEY(); // 'KEY
  } while(Pop() == 0);
  BYE(); // BYE
}


// ================================================
// 0xf32a: WORD 'WF32C' codep=0x224c wordp=0xf32c
// ================================================

void WF32C() // WF32C
{
  WF177(); // WF177
  Push(0x0140);
  MIN(); // MIN
  Push(Pop() * 0x0028); //  0x0028 *
  WF147(); // WF147
  _st_(); // <
}


// ================================================
// 0xf340: WORD 'WF342' codep=0x224c wordp=0xf342
// ================================================

void WF342() // WF342
{
  WF32C(); // WF32C
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("INSUFFICIENT FUEL FOR SAFE LANDING");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf379: WORD 'WF37B' codep=0x224c wordp=0xf37b
// ================================================

void WF37B() // WF37B
{
  WF177(); // WF177
  Push(0x0140);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(Pop() * (Read16(pp_CONTEXT_dash_ID_n_)==0?1:0)); //  CONTEXT-ID# @ 0= *
  Push(Pop() + Pop()); // +
  Push(Pop() * 0x0014); //  0x0014 *
  WF147(); // WF147
  _st_(); // <
}


// ================================================
// 0xf39b: WORD 'WF39D' codep=0x224c wordp=0xf39d
// ================================================

void WF39D() // WF39D
{
  WF37B(); // WF37B
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("INSUFFICIENT FUEL FOR RE-LAUNCHING");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf3d4: WORD 'WF3D6' codep=0x224c wordp=0xf3d6
// ================================================

void WF3D6() // WF3D6
{
  WF147(); // WF147
  Push(0x031f);
  _gt_(); // >
}


// ================================================
// 0xf3e0: WORD 'WF3E2' codep=0x224c wordp=0xf3e2
// ================================================

void WF3E2() // WF3E2
{
  WF3D6(); // WF3D6
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("THIS PLANET'S GRAVITY WILL CRUSH THE");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  SET_STR_AS_PARAM("SHIP'S HULL.");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf42e: WORD 'WF430' codep=0x224c wordp=0xf430
// ================================================

void WF430() // WF430
{
  WF32C(); // WF32C
  Push(pp_IsFUEL_dash_DIE); // ?FUEL-DIE
  Store_3(); // !_3
  Push(-1);
  Push(pp_GWF); // GWF
  Store_3(); // !_3
  WF1DB(); // WF1DB
  Push(0xc3a7); // 'DESCEND'
  MODULE(); // MODULE
  Push(Read16(pp_IsFUEL_dash_DIE)); // ?FUEL-DIE @
  if (Pop() != 0)
  {
    WF258(); // WF258
    return;
  }
  WF3D6(); // WF3D6
  if (Pop() == 0) return;
  WF1F1(); // WF1F1
}


// ================================================
// 0xf45c: WORD 'WF45E' codep=0x224c wordp=0xf45e params=0 returns=0
// ================================================

void WF45E() // WF45E
{
  Push(Read16(pp_GWF)); // GWF @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  WF3E2(); // WF3E2
  if (Pop() != 0)
  {
    Push(pp_GWF); // GWF
    ON_3(); // ON_3
  } else
  {
    WF342(); // WF342
    if (Pop() != 0)
    {
      Push(pp_GWF); // GWF
      ON_3(); // ON_3
    } else
    {
      WF39D(); // WF39D
      Push(pp_GWF); // GWF
      Store_3(); // !_3
    }
  }
  Push(!Read16(pp_GWF)); // GWF @ NOT
}


// ================================================
// 0xf494: WORD '?LAND' codep=0x224c wordp=0xf49e
// ================================================
// entry

void IsLAND() // ?LAND
{
  Push(Read16(pp__i_EXTERNAL_dash_EVENTS)==Read16(pp__i_HEAT)?1:0); // 'EXTERNAL-EVENTS @ 'HEAT @ =
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    CTERASE(); // CTERASE
    PRINT("COMPUTER NOT RESPONDING!", 24); // (.")
    BEEP(); // BEEP
    return;
  }
  Push(Read16(pp_IsG_dash_AWARE)); // ?G-AWARE @
  if (Pop() != 0)
  {
    WF45E(); // WF45E
    if (Pop() != 0)
    {
      WF430(); // WF430
    }
    return;
  }
  WF430(); // WF430
}


// ================================================
// 0xf4e9: WORD '?LAUNCH' codep=0x224c wordp=0xf4f5
// ================================================
// entry

void IsLAUNCH() // ?LAUNCH
{
  WF39D(); // WF39D
  Push(!Pop()); //  NOT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  WF1DB(); // WF1DB
}

// 0xf503: db 0x4c 0x41 0x4e 0x44 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4c 0x41 0x4e 0x44 0x2d 0x4f 0x56 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x2d 0x32 0x32 0x36 0x33 0x2f 0x38 0x35 0x29 0x31 0x31 0x35 0x35 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'LAND-VOC________________________for LAND-OV-------------------)-2263/85)1155DOCTOR----------- '

