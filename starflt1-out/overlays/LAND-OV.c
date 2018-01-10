// ====== OVERLAY 'LAND-OV' ======
// store offset = 0xf120
// overlay size   = 0x0440

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


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
//           ?LAND  codep:0x224c parp:0xf49e size:0x004b C-string:'IsLAND'
//         ?LAUNCH  codep:0x224c parp:0xf4f5 size:0x0000 C-string:'IsLAUNCH'

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
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
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
const unsigned short int pp_UNK_0xf143 = 0xf143; // UNK_0xf143 size: 2
// {0x00, 0x00}




// 0xf132: db 0x3f 0x00 '? '

// ================================================
// 0xf134: WORD 'UNK_0xf136' codep=0x744d parp=0xf136
// ================================================
IFieldType UNK_0xf136 = {SHIPIDX, 0x34, 0x0f};

// ================================================
// 0xf139: WORD 'UNK_0xf13b' codep=0x73ea parp=0xf13b
// ================================================
LoadDataType UNK_0xf13b = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xf141: WORD 'UNK_0xf143' codep=0x1d29 parp=0xf143
// ================================================
// 0xf143: db 0x00 0x00 '  '

// ================================================
// 0xf145: WORD 'UNK_0xf147' codep=0x224c parp=0xf147
// ================================================

void UNK_0xf147() // UNK_0xf147
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xf13b); // from 'PLANET'
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x0320);
    _dash_(); // -
    Push(0);
    SQRT(); // SQRT
    Push(0x000a);
    Push(Pop() * Pop()); // *
    Push(0x0320);
    Push(Pop() + Pop()); // +
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf175: WORD 'UNK_0xf177' codep=0x224c parp=0xf177 params=3 returns=1
// ================================================

void UNK_0xf177() // UNK_0xf177
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
    Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
    Push(Pop() * Pop()); // *
    Push(Read16(pp_UNK_0xf143)); // UNK_0xf143 @
    if (Pop() != 0)
    {
      UNK_0xf147(); // UNK_0xf147
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
// 0xf1c7: WORD 'UNK_0xf1c9' codep=0x224c parp=0xf1c9
// ================================================

void UNK_0xf1c9() // UNK_0xf1c9
{
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  SetColor(YELLOW);
  Push(0x4f0c); // probable 'BLACK'
  Store_3(); // !_3
  CTERASE(); // CTERASE
}


// ================================================
// 0xf1d9: WORD 'UNK_0xf1db' codep=0x224c parp=0xf1db params=3 returns=0
// ================================================

void UNK_0xf1db() // UNK_0xf1db
{
  Push(pp_UNK_0xf143); // UNK_0xf143
  ON_3(); // ON_3
  UNK_0xf177(); // UNK_0xf177
  Pop(); // DROP
  Push(pp_UNK_0xf143); // UNK_0xf143
  OFF(); // OFF
  Push(0xbd4a); // probable '=CARGO'
  MODULE(); // MODULE
}


// ================================================
// 0xf1ef: WORD 'UNK_0xf1f1' codep=0x224c parp=0xf1f1
// ================================================

void UNK_0xf1f1() // UNK_0xf1f1
{
  CTINIT(); // CTINIT
  UNK_0xf1c9(); // UNK_0xf1c9
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
  do
  {
    TTY_dash_SCR(); // TTY-SCR
    TTY_dash_SCR(); // TTY-SCR
    SET_STR_AS_PARAM("EMERGENCY LOCATOR TRANSMISSION:");
    DrawTTY(); // .TTY
    SET_STR_AS_PARAM(" STARSHIP ISS ");
    DrawTTY(); // .TTY
    Push(0x63ef+UNK_0xf136.offset); // UNK_0xf136<IFIELD>
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
    Push(pp__ro_SYSTEM); // (SYSTEM
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
  SET_STR_AS_PARAM("INSUFFICIENT FUEL FOR SAFE LANDING");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
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
  Push(Read16(pp_CONTEXT_dash_ID_n_)==0?1:0); // CONTEXT-ID# @ 0=
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
  SET_STR_AS_PARAM("INSUFFICIENT FUEL FOR RE-LAUNCHING");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
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
  SET_STR_AS_PARAM("THIS PLANET'S GRAVITY WILL CRUSH THE");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  SET_STR_AS_PARAM("SHIP'S HULL.");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf42e: WORD 'UNK_0xf430' codep=0x224c parp=0xf430
// ================================================

void UNK_0xf430() // UNK_0xf430
{
  UNK_0xf32c(); // UNK_0xf32c
  Push(pp_IsFUEL_dash_DIE); // ?FUEL-DIE
  Store_3(); // !_3
  Push(-1);
  Push(pp_GWF); // GWF
  Store_3(); // !_3
  UNK_0xf1db(); // UNK_0xf1db
  Push(0xc3a7); // probable 'DESCEND'
  MODULE(); // MODULE
  Push(Read16(pp_IsFUEL_dash_DIE)); // ?FUEL-DIE @
  if (Pop() != 0)
  {
    UNK_0xf258(); // UNK_0xf258
    return;
  }
  UNK_0xf3d6(); // UNK_0xf3d6
  if (Pop() == 0) return;
  UNK_0xf1f1(); // UNK_0xf1f1
}


// ================================================
// 0xf45c: WORD 'UNK_0xf45e' codep=0x224c parp=0xf45e params=0 returns=0
// ================================================

void UNK_0xf45e() // UNK_0xf45e
{
  Push(Read16(pp_GWF)); // GWF @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf3e2(); // UNK_0xf3e2
  if (Pop() != 0)
  {
    Push(pp_GWF); // GWF
    ON_3(); // ON_3
  } else
  {
    UNK_0xf342(); // UNK_0xf342
    if (Pop() != 0)
    {
      Push(pp_GWF); // GWF
      ON_3(); // ON_3
    } else
    {
      UNK_0xf39d(); // UNK_0xf39d
      Push(pp_GWF); // GWF
      Store_3(); // !_3
    }
  }
  Push(!Read16(pp_GWF)); // GWF @ NOT
}


// ================================================
// 0xf494: WORD '?LAND' codep=0x224c parp=0xf49e
// ================================================
// entry

void IsLAND() // ?LAND
{
  Push(Read16(pp__i_EXTERNAL_dash_EVENTS)); // 'EXTERNAL-EVENTS @
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
    UNK_0xf45e(); // UNK_0xf45e
    if (Pop() != 0)
    {
      UNK_0xf430(); // UNK_0xf430
    }
    return;
  }
  UNK_0xf430(); // UNK_0xf430
}


// ================================================
// 0xf4e9: WORD '?LAUNCH' codep=0x224c parp=0xf4f5
// ================================================
// entry

void IsLAUNCH() // ?LAUNCH
{
  UNK_0xf39d(); // UNK_0xf39d
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  UNK_0xf1db(); // UNK_0xf1db
}

// 0xf503: db 0x4c 0x41 0x4e 0x44 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4c 0x41 0x4e 0x44 0x2d 0x4f 0x56 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x2d 0x32 0x32 0x36 0x33 0x2f 0x38 0x35 0x29 0x31 0x31 0x35 0x35 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'LAND-VOC________________________for LAND-OV-------------------)-2263/85)1155DOCTOR----------- '

