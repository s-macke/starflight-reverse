// ====== OVERLAY 'NAVIGATR' ======
// store offset = 0xf180
// overlay size   = 0x03e0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF196  codep:0x7420 wordp:0xf196 size:0x0003 C-string:'WF196'
//           WF19B  codep:0x7420 wordp:0xf19b size:0x0003 C-string:'WF19B'
//           WF1A0  codep:0x7420 wordp:0xf1a0 size:0x0003 C-string:'WF1A0'
//           WF1A5  codep:0x7420 wordp:0xf1a5 size:0x0003 C-string:'WF1A5'
//           WF1AA  codep:0x7394 wordp:0xf1aa size:0x0006 C-string:'WF1AA'
//           WF1B2  codep:0x7394 wordp:0xf1b2 size:0x0006 C-string:'WF1B2'
//           WF1BA  codep:0x224c wordp:0xf1ba size:0x0008 C-string:'WF1BA'
//           WF1C4  codep:0x224c wordp:0xf1c4 size:0x0010 C-string:'WF1C4'
//           WF1D6  codep:0x224c wordp:0xf1d6 size:0x0008 C-string:'WF1D6'
//           WF1E0  codep:0x224c wordp:0xf1e0 size:0x0020 C-string:'WF1E0'
//           WF202  codep:0x224c wordp:0xf202 size:0x0030 C-string:'WF202'
//    >DOWN-SHIELD  codep:0x224c wordp:0xf243 size:0x00bc C-string:'_gt_DOWN_dash_SHIELD'
//           WF301  codep:0x224c wordp:0xf301 size:0x000e C-string:'WF301'
//           WF311  codep:0x224c wordp:0xf311 size:0x008c C-string:'WF311'
//         >DISARM  codep:0x224c wordp:0xf3a9 size:0x0044 C-string:'_gt_DISARM'
//           WF3EF  codep:0x224c wordp:0xf3ef size:0x00da C-string:'WF3EF'
//     (/(DIS)ARM)  codep:0x224c wordp:0xf4d9 size:0x0020 C-string:'_ro__slash__ro_DIS_rc_ARM_rc_'
//   (/(UD)SHIELD)  codep:0x224c wordp:0xf50b size:0x0000 C-string:'_ro__slash__ro_UD_rc_SHIELD_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_Is3; // ?3
extern const unsigned short int pp_BTN_dash_REC; // BTN-REC
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp_IsSUP; // ?SUP
extern const unsigned short int pp_NLR; // NLR
extern const unsigned short int pp__10_star_END; // 10*END
void BEEP(); // BEEP
void _2OVER(); // 2OVER
void D0_eq_(); // D0=
void _gt_FLAG(); // >FLAG
void C_ex__2(); // C!_2
void Store_2(); // !_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void _gt_SND(); // >SND
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void DrawABTN(); // .ABTN
void DrawSORD(); // .SORD
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void SWAP(); // SWAP


// =================================
// =========== VARIABLES ===========
// =================================



// 0xf192: db 0x3e 0x00 '> '

// ================================================
// 0xf194: WORD 'WF196' codep=0x7420 wordp=0xf196
// ================================================
IFieldType WF196 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xf199: WORD 'WF19B' codep=0x7420 wordp=0xf19b
// ================================================
IFieldType WF19B = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xf19e: WORD 'WF1A0' codep=0x7420 wordp=0xf1a0
// ================================================
IFieldType WF1A0 = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xf1a3: WORD 'WF1A5' codep=0x7420 wordp=0xf1a5
// ================================================
IFieldType WF1A5 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xf1a8: WORD 'WF1AA' codep=0x7394 wordp=0xf1aa
// ================================================
LoadDataType WF1AA = {BUTTONSIDX, 0x18, 0x0c, 0x49, 0x6e57};

// ================================================
// 0xf1b0: WORD 'WF1B2' codep=0x7394 wordp=0xf1b2
// ================================================
LoadDataType WF1B2 = {BUTTONSIDX, 0x24, 0x0c, 0x49, 0x6e57};

// ================================================
// 0xf1b8: WORD 'WF1BA' codep=0x224c wordp=0xf1ba params=0 returns=0
// ================================================

void WF1BA() // WF1BA
{
  Push(0xb77c); // 'OV?.EQ'
  MODULE(); // MODULE
}


// ================================================
// 0xf1c2: WORD 'WF1C4' codep=0x224c wordp=0xf1c4 params=0 returns=0
// ================================================

void WF1C4() // WF1C4
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  Push(3);
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
}


// ================================================
// 0xf1d4: WORD 'WF1D6' codep=0x224c wordp=0xf1d6 params=3 returns=0
// ================================================

void WF1D6() // WF1D6
{
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf1de: WORD 'WF1E0' codep=0x224c wordp=0xf1e0 params=0 returns=8
// ================================================

void WF1E0() // WF1E0
{
  Push(0x003c);
  Push(0x03e8);
  Push(0x000f);
  Push(3);
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(0x003c);
  Push(0x01f4);
  Push(5);
  _gt_SND(); // >SND
}


// ================================================
// 0xf200: WORD 'WF202' codep=0x224c wordp=0xf202 params=0 returns=14
// ================================================

void WF202() // WF202
{
  Push(0x0064);
  Push(3);
  Push(0x003c);
  Push(0x01f4);
  Push(0x000f);
  Push(3);
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(0x003c);
  Push(0x03e8);
  _2OVER(); // 2OVER
  Push(0x003c);
  Push(0x01f4);
  Push(8);
  _gt_SND(); // >SND
}


// ================================================
// 0xf232: WORD '>DOWN-SHIELD' codep=0x224c wordp=0xf243
// ================================================
// entry

void _gt_DOWN_dash_SHIELD() // >DOWN-SHIELD
{
  Push(Read16(pp_IsNEB) & !Read16(pp_Is3)); // ?NEB @ ?3 @ NOT AND
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WF196.offset)==0?1:0); // WF196<IFIELD> @ 0=
  ICLOSE(); // ICLOSE
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("MAGNETIC DISTURBANCES IN NEBULA");
    DrawTTY(); // .TTY
    SET_STR_AS_PARAM("CAUSING ENERGY FLUCTUATIONS");
    DrawTTY(); // .TTY
  }
  WF1C4(); // WF1C4
  SET_STR_AS_PARAM("RAISE SHIELD");
  LoadData(WF1AA); // from 'BUTTONS'
  WF1D6(); // WF1D6
  Push((Read16(0x65e1+WF1A5.offset)&0xFF) & 0x00f7 | 0x0010); // WF1A5<IFIELD> C@ 0x00f7 AND 0x0010 OR
  Push(0x65e1+WF1A5.offset); // WF1A5<IFIELD>
  C_ex__2(); // C!_2
  WF1E0(); // WF1E0
  SET_STR_AS_PARAM("SHIELDS ARE DOWN");
  DrawTTY(); // .TTY
  Push(Read16(pp_BTN_dash_REC)==3?1:0); // BTN-REC @ 3 =
  if (Pop() != 0)
  {
    Push(3);
    Push(2);
    DrawABTN(); // .ABTN
  }
  Push(pp_IsSUP); // ?SUP
  _099(); // 099
}


// ================================================
// 0xf2ff: WORD 'WF301' codep=0x224c wordp=0xf301 params=0 returns=1
// ================================================

void WF301() // WF301
{
  Push(Read16(pp_Is3) | !Read16(pp_IsNEB)); // ?3 @ ?NEB @ NOT OR
}


// ================================================
// 0xf30f: WORD 'WF311' codep=0x224c wordp=0xf311 params=0 returns=0
// ================================================

void WF311() // WF311
{
  Push(6);
  WF1BA(); // WF1BA
  _gt_FLAG(); // >FLAG
  Push(Pop() & !(Read16(pp_NLR)==-1?1:0)); //  NLR @ -1 = NOT AND
  WF301(); // WF301
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WF1C4(); // WF1C4
    SET_STR_AS_PARAM("DROP SHIELD ");
    LoadData(WF1AA); // from 'BUTTONS'
    WF1D6(); // WF1D6
    Push(Read16(0x65e1+WF1A5.offset)&0xFF | 0x0018); // WF1A5<IFIELD> C@ 0x0018 OR
    Push(0x65e1+WF1A5.offset); // WF1A5<IFIELD>
    C_ex__2(); // C!_2
    WF1E0(); // WF1E0
    SET_STR_AS_PARAM("SHIELDS ARE NOW UP");
    DrawTTY(); // .TTY
    Push(3);
    Push(2);
    DrawABTN(); // .ABTN
    Push(pp_IsSUP); // ?SUP
    ON_2(); // ON_2
    return;
  }
  Push(Read16(pp_NLR)==-1?1:0); // NLR @ -1 =
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("SHIELDS INOPERATIVE");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf39d: WORD '>DISARM' codep=0x224c wordp=0xf3a9
// ================================================
// entry

void _gt_DISARM() // >DISARM
{
  WF1C4(); // WF1C4
  SET_STR_AS_PARAM("ARM WEAPON");
  LoadData(WF1B2); // from 'BUTTONS'
  WF1D6(); // WF1D6
  Push((Read16(0x65e1+WF1A5.offset)&0xFF) & 0x00fc | 0x0020); // WF1A5<IFIELD> C@ 0x00fc AND 0x0020 OR
  Push(0x65e1+WF1A5.offset); // WF1A5<IFIELD>
  C_ex__2(); // C!_2
  WF202(); // WF202
  SET_STR_AS_PARAM("WEAPONS ARE DISARMED");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf3ed: WORD 'WF3EF' codep=0x224c wordp=0xf3ef
// ================================================

void WF3EF() // WF3EF
{
  Push(Read16((0x65e1+WF1A0.offset) + 1)&0xFF); // WF1A0<IFIELD> 1+ C@
  Push(Read16((0x65e1+WF19B.offset) + 1)&0xFF); // WF19B<IFIELD> 1+ C@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    if (Pop() != 0)
    {
      Push(4);
      WF1BA(); // WF1BA
    } else
    {
      Push(0);
    }
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      WF202(); // WF202
      SET_STR_AS_PARAM("ARMING ");
      DrawTTY(); // .TTY
      Push(Read16(pp_Is3)); // ?3 @
      if (Pop() != 0)
      {
        PRINT("PLASMA BOLTS", 12); // (.")
      } else
      {
        PRINT("MISSLES", 7); // (.")
      }
    }
    SWAP(); // SWAP
    if (Pop() != 0)
    {
      Push(3);
      WF1BA(); // WF1BA
    } else
    {
      Push(0);
    }
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      WF202(); // WF202
      SET_STR_AS_PARAM("ARMING LASERS");
      DrawTTY(); // .TTY
    }
    Push(Pop() + Pop()); // +
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+WF1A5.offset) | 0x0023); // WF1A5<IFIELD> @ 0x0023 OR
      Push(0x65e1+WF1A5.offset); // WF1A5<IFIELD>
      Store_2(); // !_2
      WF1C4(); // WF1C4
      SET_STR_AS_PARAM("DISARM    ");
      LoadData(WF1B2); // from 'BUTTONS'
      WF1D6(); // WF1D6
    }
    return;
  }
  Pop(); Pop(); // 2DROP
  SET_STR_AS_PARAM("SHIP IS NOT EQUIPPED WITH WEAPONS");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf4c9: WORD '(/(DIS)ARM)' codep=0x224c wordp=0xf4d9
// ================================================
// entry

void _ro__slash__ro_DIS_rc_ARM_rc_() // (/(DIS)ARM)
{
  CTINIT(); // CTINIT
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WF1A5.offset) & 3); // WF1A5<IFIELD> @ 3 AND
  if (Pop() != 0)
  {
    _gt_DISARM(); // >DISARM
  } else
  {
    WF3EF(); // WF3EF
  }
  ICLOSE(); // ICLOSE
  DrawSORD(); // .SORD
}


// ================================================
// 0xf4f9: WORD '(/(UD)SHIELD)' codep=0x224c wordp=0xf50b
// ================================================
// entry

void _ro__slash__ro_UD_rc_SHIELD_rc_() // (/(UD)SHIELD)
{
  CTINIT(); // CTINIT
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WF1A5.offset) & 8); // WF1A5<IFIELD> @ 8 AND
  if (Pop() != 0)
  {
    _gt_DOWN_dash_SHIELD(); // >DOWN-SHIELD
  } else
  {
    WF301(); // WF301
    Push(!Pop()); //  NOT
    Push(pp__10_star_END); // 10*END
    _2_at_(); // 2@
    D0_eq_(); // D0=
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      SET_STR_AS_PARAM("SHIELDS CAN'T BE RAISED");
      DrawTTY(); // .TTY
      BEEP(); // BEEP
    } else
    {
      WF311(); // WF311
    }
  }
  ICLOSE(); // ICLOSE
  DrawSORD(); // .SORD
}

// 0xf55d: db 0x4e 0x41 0x56 0x00 'NAV '

