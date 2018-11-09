// ====== OVERLAY 'LAND-OV' ======
// store offset = 0xf190
// overlay size   = 0x03d0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF1A6  codep:0x7420 wordp:0xf1a6 size:0x0003 C-string:'WF1A6'
//           WF1AB  codep:0x7394 wordp:0xf1ab size:0x0006 C-string:'WF1AB'
//           WF1B3  codep:0x1d29 wordp:0xf1b3 size:0x0002 C-string:'WF1B3'
//           WF1B7  codep:0x224c wordp:0xf1b7 size:0x002e C-string:'WF1B7'
//           WF1E7  codep:0x224c wordp:0xf1e7 size:0x0050 C-string:'WF1E7'
//           WF239  codep:0x224c wordp:0xf239 size:0x0010 C-string:'WF239'
//           WF24B  codep:0x224c wordp:0xf24b size:0x0014 C-string:'WF24B'
//           WF261  codep:0x224c wordp:0xf261 size:0x0065 C-string:'WF261'
//           WF2C8  codep:0x224c wordp:0xf2c8 size:0x00d2 C-string:'WF2C8'
//           WF39C  codep:0x224c wordp:0xf39c size:0x0014 C-string:'WF39C'
//           WF3B2  codep:0x224c wordp:0xf3b2 size:0x0037 C-string:'WF3B2'
//           WF3EB  codep:0x224c wordp:0xf3eb size:0x0020 C-string:'WF3EB'
//           WF40D  codep:0x224c wordp:0xf40d size:0x0037 C-string:'WF40D'
//           WF446  codep:0x224c wordp:0xf446 size:0x000a C-string:'WF446'
//           WF452  codep:0x224c wordp:0xf452 size:0x004c C-string:'WF452'
//           WF4A0  codep:0x224c wordp:0xf4a0 size:0x002c C-string:'WF4A0'
//           WF4CE  codep:0x224c wordp:0xf4ce size:0x0036 C-string:'WF4CE'
//           ?LAND  codep:0x224c wordp:0xf50e size:0x0018 C-string:'IsLAND'
//         ?LAUNCH  codep:0x224c wordp:0xf532 size:0x0000 C-string:'IsLAUNCH'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int pp_IsFUEL_dash_D; // ?FUEL-D
extern const unsigned short int pp_IsG_dash_AWAR; // ?G-AWAR
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern Color BLACK; // BLACK
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_QT; // INST-QT
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
void Store_2(); // !_2
void ON_2(); // ON_2
void _099(); // 099
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void BYE_2(); // BYE_2
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
const unsigned short int pp_WF1B3 = 0xf1b3; // WF1B3 size: 2
// {0x00, 0x00}




// 0xf1a2: db 0x3c 0x00 '< '

// ================================================
// 0xf1a4: WORD 'WF1A6' codep=0x7420 wordp=0xf1a6
// ================================================
IFieldType WF1A6 = {SHIPIDX, 0x34, 0x0f};

// ================================================
// 0xf1a9: WORD 'WF1AB' codep=0x7394 wordp=0xf1ab
// ================================================
LoadDataType WF1AB = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xf1b1: WORD 'WF1B3' codep=0x1d29 wordp=0xf1b3
// ================================================
// 0xf1b3: db 0x00 0x00 '  '

// ================================================
// 0xf1b5: WORD 'WF1B7' codep=0x224c wordp=0xf1b7
// ================================================

void WF1B7() // WF1B7
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WF1AB); // from 'PLANET'
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
// 0xf1e5: WORD 'WF1E7' codep=0x224c wordp=0xf1e7
// ================================================

void WF1E7() // WF1E7
{
  Push2Words("*STARSH");
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
    Push(Pop() * Read16(0x65e1+INST_dash_QT.offset)); //  INST-QT<IFIELD> @ *
    Push(Read16(pp_WF1B3)); // WF1B3 @
    if (Pop() != 0)
    {
      WF1B7(); // WF1B7
      Push(0x0028);
      _slash_(); // /
      SWAP(); // SWAP
      OVER(); // OVER
      _dash_(); // -
      Push(0);
      MAX(); // MAX
      Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
      Store_2(); // !_2
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
// 0xf237: WORD 'WF239' codep=0x224c wordp=0xf239
// ================================================

void WF239() // WF239
{
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  GetColor(YELLOW);
  Push(0x4fa9); // 'BLACK'
  Store_2(); // !_2
  CTERASE(); // CTERASE
}


// ================================================
// 0xf249: WORD 'WF24B' codep=0x224c wordp=0xf24b
// ================================================

void WF24B() // WF24B
{
  Push(pp_WF1B3); // WF1B3
  ON_2(); // ON_2
  WF1E7(); // WF1E7
  Pop(); // DROP
  Push(pp_WF1B3); // WF1B3
  _099(); // 099
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
}


// ================================================
// 0xf25f: WORD 'WF261' codep=0x224c wordp=0xf261
// ================================================

void WF261() // WF261
{
  CTINIT(); // CTINIT
  WF239(); // WF239
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
  BYE_2(); // BYE_2
}


// ================================================
// 0xf2c6: WORD 'WF2C8' codep=0x224c wordp=0xf2c8
// ================================================

void WF2C8() // WF2C8
{
  CTINIT(); // CTINIT
  WF239(); // WF239
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
    Push(0x65e1+WF1A6.offset); // WF1A6<IFIELD>
    COUNT(); // COUNT
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    SET_STR_AS_PARAM(" CRASHED ON PLANET ");
    DrawTTY(); // .TTY
    Push(pp__ro_ORBIT_rc_); // (ORBIT)
    Get_gt_C_plus_S(); // @>C+S
    Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
    Is(); // ?
    ICLOSE(); // ICLOSE
    SET_STR_AS_PARAM(" IN SYSTEM ");
    DrawTTY(); // .TTY
    Push(pp__ro_SYSTEM); // (SYSTEM
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
    Push(Read16(cc__star_MAPSCA)); // *MAPSCA
    _slash_(); // /
    Push(0);
    DrawR(); // .R
    PRINT(",", 1); // (.")
    Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
    Push(Read16(cc__star_MAPSCA)); // *MAPSCA
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
  BYE_2(); // BYE_2
}


// ================================================
// 0xf39a: WORD 'WF39C' codep=0x224c wordp=0xf39c
// ================================================

void WF39C() // WF39C
{
  WF1E7(); // WF1E7
  Push(0x0140);
  MIN(); // MIN
  Push(Pop() * 0x0028); //  0x0028 *
  WF1B7(); // WF1B7
  _st_(); // <
}


// ================================================
// 0xf3b0: WORD 'WF3B2' codep=0x224c wordp=0xf3b2
// ================================================

void WF3B2() // WF3B2
{
  WF39C(); // WF39C
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("INSUFFICIENT FUEL FOR SAFE LANDING");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf3e9: WORD 'WF3EB' codep=0x224c wordp=0xf3eb
// ================================================

void WF3EB() // WF3EB
{
  WF1E7(); // WF1E7
  Push(0x0140);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(Pop() * (Read16(pp_CONTEXT_3)==0?1:0)); //  CONTEXT_3 @ 0= *
  Push(Pop() + Pop()); // +
  Push(Pop() * 0x0014); //  0x0014 *
  WF1B7(); // WF1B7
  _st_(); // <
}


// ================================================
// 0xf40b: WORD 'WF40D' codep=0x224c wordp=0xf40d
// ================================================

void WF40D() // WF40D
{
  WF3EB(); // WF3EB
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("INSUFFICIENT FUEL FOR RE-LAUNCHING");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf444: WORD 'WF446' codep=0x224c wordp=0xf446
// ================================================

void WF446() // WF446
{
  WF1B7(); // WF1B7
  Push(0x031f);
  _gt_(); // >
}


// ================================================
// 0xf450: WORD 'WF452' codep=0x224c wordp=0xf452
// ================================================

void WF452() // WF452
{
  WF446(); // WF446
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
// 0xf49e: WORD 'WF4A0' codep=0x224c wordp=0xf4a0
// ================================================

void WF4A0() // WF4A0
{
  WF39C(); // WF39C
  Push(pp_IsFUEL_dash_D); // ?FUEL-D
  Store_2(); // !_2
  Push(-1);
  Push(pp_GWF); // GWF
  Store_2(); // !_2
  WF24B(); // WF24B
  Push(0xbd55); // 'DESCE'
  MODULE(); // MODULE
  Push(Read16(pp_IsFUEL_dash_D)); // ?FUEL-D @
  if (Pop() != 0)
  {
    WF2C8(); // WF2C8
    return;
  }
  WF446(); // WF446
  if (Pop() == 0) return;
  WF261(); // WF261
}


// ================================================
// 0xf4cc: WORD 'WF4CE' codep=0x224c wordp=0xf4ce params=0 returns=0
// ================================================

void WF4CE() // WF4CE
{
  Push(Read16(pp_GWF)); // GWF @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  WF452(); // WF452
  if (Pop() != 0)
  {
    Push(pp_GWF); // GWF
    ON_2(); // ON_2
  } else
  {
    WF3B2(); // WF3B2
    if (Pop() != 0)
    {
      Push(pp_GWF); // GWF
      ON_2(); // ON_2
    } else
    {
      WF40D(); // WF40D
      Push(pp_GWF); // GWF
      Store_2(); // !_2
    }
  }
  Push(!Read16(pp_GWF)); // GWF @ NOT
}


// ================================================
// 0xf504: WORD '?LAND' codep=0x224c wordp=0xf50e
// ================================================
// entry

void IsLAND() // ?LAND
{
  Push(Read16(pp_IsG_dash_AWAR)); // ?G-AWAR @
  if (Pop() != 0)
  {
    WF4CE(); // WF4CE
    if (Pop() != 0)
    {
      WF4A0(); // WF4A0
    }
    return;
  }
  WF4A0(); // WF4A0
}


// ================================================
// 0xf526: WORD '?LAUNCH' codep=0x224c wordp=0xf532
// ================================================
// entry

void IsLAUNCH() // ?LAUNCH
{
  WF40D(); // WF40D
  Push(!Pop()); //  NOT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  WF24B(); // WF24B
}

// 0xf540: db 0x4c 0x41 0x4e 0x44 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'LAND-VO_________________________ '

