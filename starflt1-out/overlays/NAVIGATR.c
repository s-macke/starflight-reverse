// ====== OVERLAY 'NAVIGATR' ======
// store offset = 0xf1f0
// overlay size   = 0x0370

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xf206  codep:0x744d parp:0xf206 size:0x0003 C-string:'UNK_0xf206'
//      UNK_0xf20b  codep:0x744d parp:0xf20b size:0x0003 C-string:'UNK_0xf20b'
//      UNK_0xf210  codep:0x744d parp:0xf210 size:0x0003 C-string:'UNK_0xf210'
//      UNK_0xf215  codep:0x744d parp:0xf215 size:0x0003 C-string:'UNK_0xf215'
//      UNK_0xf21a  codep:0x73ea parp:0xf21a size:0x0006 C-string:'UNK_0xf21a'
//      UNK_0xf222  codep:0x73ea parp:0xf222 size:0x0006 C-string:'UNK_0xf222'
//      UNK_0xf22a  codep:0x224c parp:0xf22a size:0x0008 C-string:'UNK_0xf22a'
//      UNK_0xf234  codep:0x224c parp:0xf234 size:0x0010 C-string:'UNK_0xf234'
//      UNK_0xf246  codep:0x224c parp:0xf246 size:0x0008 C-string:'UNK_0xf246'
//      UNK_0xf250  codep:0x224c parp:0xf250 size:0x0020 C-string:'UNK_0xf250'
//      UNK_0xf272  codep:0x224c parp:0xf272 size:0x0030 C-string:'UNK_0xf272'
//    >DOWN-SHIELD  codep:0x224c parp:0xf2b3 size:0x00a4 C-string:'_gt_DOWN_dash_SHIELD'
//      UNK_0xf359  codep:0x224c parp:0xf359 size:0x0050 C-string:'UNK_0xf359'
//         >DISARM  codep:0x224c parp:0xf3b5 size:0x0044 C-string:'_gt_DISARM'
//      UNK_0xf3fb  codep:0x224c parp:0xf3fb size:0x00bd C-string:'UNK_0xf3fb'
//     (/(DIS)ARM)  codep:0x224c parp:0xf4c8 size:0x0020 C-string:'_ro__slash__ro_DIS_rc_ARM_rc_'
//   (/(UD)SHIELD)  codep:0x224c parp:0xf4fa size:0x0000 C-string:'_ro__slash__ro_UD_rc_SHIELD_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_BTN_dash_REC; // BTN-REC
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp_IsSUP; // ?SUP
extern const unsigned short int pp__10_star_END; // 10*END
void BEEP(); // BEEP
void _2OVER(); // 2OVER
void D0_eq_(); // D0=
void C_ex_(); // C!
void Store_3(); // !_3
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void SET_dash_CURRENT(); // SET-CURRENT
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



// 0xf202: db 0x36 0x00 '6 '

// ================================================
// 0xf204: WORD 'UNK_0xf206' codep=0x744d parp=0xf206
// ================================================
// orphan
IFieldType UNK_0xf206 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xf209: WORD 'UNK_0xf20b' codep=0x744d parp=0xf20b
// ================================================
IFieldType UNK_0xf20b = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xf20e: WORD 'UNK_0xf210' codep=0x744d parp=0xf210
// ================================================
IFieldType UNK_0xf210 = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xf213: WORD 'UNK_0xf215' codep=0x744d parp=0xf215
// ================================================
IFieldType UNK_0xf215 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xf218: WORD 'UNK_0xf21a' codep=0x73ea parp=0xf21a
// ================================================
LoadDataType UNK_0xf21a = {BUTTONSIDX, 0x18, 0x0c, 0x49, 0x6858};

// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x73ea parp=0xf222
// ================================================
LoadDataType UNK_0xf222 = {BUTTONSIDX, 0x24, 0x0c, 0x49, 0x6858};

// ================================================
// 0xf228: WORD 'UNK_0xf22a' codep=0x224c parp=0xf22a params=0 returns=0
// ================================================

void UNK_0xf22a() // UNK_0xf22a
{
  Push(0xbdef); // probable 'OV?.EQUIP-OK'
  MODULE(); // MODULE
}


// ================================================
// 0xf232: WORD 'UNK_0xf234' codep=0x224c parp=0xf234 params=0 returns=0
// ================================================

void UNK_0xf234() // UNK_0xf234
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(3);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
}


// ================================================
// 0xf244: WORD 'UNK_0xf246' codep=0x224c parp=0xf246 params=3 returns=0
// ================================================

void UNK_0xf246() // UNK_0xf246
{
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x224c parp=0xf250 params=0 returns=8
// ================================================

void UNK_0xf250() // UNK_0xf250
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
// 0xf270: WORD 'UNK_0xf272' codep=0x224c parp=0xf272 params=0 returns=14
// ================================================

void UNK_0xf272() // UNK_0xf272
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
// 0xf2a2: WORD '>DOWN-SHIELD' codep=0x224c parp=0xf2b3
// ================================================
// entry

void _gt_DOWN_dash_SHIELD() // >DOWN-SHIELD
{
  Push(Read16(pp_IsNEB)); // ?NEB @
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("MAGNETIC DISTURBANCES IN NEBULA");
    DrawTTY(); // .TTY
    SET_STR_AS_PARAM("CAUSING ENERGY FLUCTUATIONS");
    DrawTTY(); // .TTY
  }
  UNK_0xf234(); // UNK_0xf234
  SET_STR_AS_PARAM("RAISE SHIELD");
  LoadData(UNK_0xf21a); // from 'BUTTONS'
  UNK_0xf246(); // UNK_0xf246
  Push((Read16(0x63ef+UNK_0xf215.offset)&0xFF) & 0x00f7 | 0x0010); // UNK_0xf215<IFIELD> C@ 0x00f7 AND 0x0010 OR
  Push(0x63ef+UNK_0xf215.offset); // UNK_0xf215<IFIELD>
  C_ex_(); // C!
  UNK_0xf250(); // UNK_0xf250
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
  OFF(); // OFF
}


// ================================================
// 0xf357: WORD 'UNK_0xf359' codep=0x224c parp=0xf359 params=0 returns=0
// ================================================

void UNK_0xf359() // UNK_0xf359
{
  Push(6);
  UNK_0xf22a(); // UNK_0xf22a
  if (Pop() == 0) return;
  UNK_0xf234(); // UNK_0xf234
  SET_STR_AS_PARAM("DROP SHIELD ");
  LoadData(UNK_0xf21a); // from 'BUTTONS'
  UNK_0xf246(); // UNK_0xf246
  Push(Read16(0x63ef+UNK_0xf215.offset)&0xFF | 0x0018); // UNK_0xf215<IFIELD> C@ 0x0018 OR
  Push(0x63ef+UNK_0xf215.offset); // UNK_0xf215<IFIELD>
  C_ex_(); // C!
  UNK_0xf250(); // UNK_0xf250
  SET_STR_AS_PARAM("SHIELDS ARE NOW UP");
  DrawTTY(); // .TTY
  Push(3);
  Push(2);
  DrawABTN(); // .ABTN
  Push(pp_IsSUP); // ?SUP
  ON_3(); // ON_3
}


// ================================================
// 0xf3a9: WORD '>DISARM' codep=0x224c parp=0xf3b5
// ================================================
// entry

void _gt_DISARM() // >DISARM
{
  UNK_0xf234(); // UNK_0xf234
  SET_STR_AS_PARAM("ARM WEAPON");
  LoadData(UNK_0xf222); // from 'BUTTONS'
  UNK_0xf246(); // UNK_0xf246
  Push((Read16(0x63ef+UNK_0xf215.offset)&0xFF) & 0x00fc | 0x0020); // UNK_0xf215<IFIELD> C@ 0x00fc AND 0x0020 OR
  Push(0x63ef+UNK_0xf215.offset); // UNK_0xf215<IFIELD>
  C_ex_(); // C!
  UNK_0xf272(); // UNK_0xf272
  SET_STR_AS_PARAM("WEAPONS ARE DISARMED");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf3f9: WORD 'UNK_0xf3fb' codep=0x224c parp=0xf3fb params=0 returns=0
// ================================================

void UNK_0xf3fb() // UNK_0xf3fb
{
  Push(Read16((0x63ef+UNK_0xf210.offset) + 1)&0xFF); // UNK_0xf210<IFIELD> 1+ C@
  Push(Read16((0x63ef+UNK_0xf20b.offset) + 1)&0xFF); // UNK_0xf20b<IFIELD> 1+ C@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    if (Pop() != 0)
    {
      Push(4);
      UNK_0xf22a(); // UNK_0xf22a
    } else
    {
      Push(0);
    }
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      UNK_0xf272(); // UNK_0xf272
      SET_STR_AS_PARAM("ARMING MISSILES");
      DrawTTY(); // .TTY
    }
    SWAP(); // SWAP
    if (Pop() != 0)
    {
      Push(3);
      UNK_0xf22a(); // UNK_0xf22a
    } else
    {
      Push(0);
    }
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      UNK_0xf272(); // UNK_0xf272
      SET_STR_AS_PARAM("ARMING LASERS");
      DrawTTY(); // .TTY
    }
    Push(Pop() + Pop()); // +
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+UNK_0xf215.offset) | 0x0023); // UNK_0xf215<IFIELD> @ 0x0023 OR
      Push(0x63ef+UNK_0xf215.offset); // UNK_0xf215<IFIELD>
      Store_3(); // !_3
      UNK_0xf234(); // UNK_0xf234
      SET_STR_AS_PARAM("DISARM    ");
      LoadData(UNK_0xf222); // from 'BUTTONS'
      UNK_0xf246(); // UNK_0xf246
    }
    return;
  }
  Pop(); Pop(); // 2DROP
  SET_STR_AS_PARAM("SHIP IS NOT EQUIPPED WITH WEAPONS");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf4b8: WORD '(/(DIS)ARM)' codep=0x224c parp=0xf4c8 params=0 returns=0
// ================================================
// entry

void _ro__slash__ro_DIS_rc_ARM_rc_() // (/(DIS)ARM)
{
  CTINIT(); // CTINIT
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+UNK_0xf215.offset) & 3); // UNK_0xf215<IFIELD> @ 3 AND
  if (Pop() != 0)
  {
    _gt_DISARM(); // >DISARM
  } else
  {
    UNK_0xf3fb(); // UNK_0xf3fb
  }
  ICLOSE(); // ICLOSE
  DrawSORD(); // .SORD
}


// ================================================
// 0xf4e8: WORD '(/(UD)SHIELD)' codep=0x224c parp=0xf4fa params=0 returns=0
// ================================================
// entry

void _ro__slash__ro_UD_rc_SHIELD_rc_() // (/(UD)SHIELD)
{
  CTINIT(); // CTINIT
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+UNK_0xf215.offset) & 8); // UNK_0xf215<IFIELD> @ 8 AND
  if (Pop() != 0)
  {
    _gt_DOWN_dash_SHIELD(); // >DOWN-SHIELD
  } else
  {
    Push(Read16(pp_IsNEB)); // ?NEB @
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
      UNK_0xf359(); // UNK_0xf359
    }
  }
  ICLOSE(); // ICLOSE
  DrawSORD(); // .SORD
}

// 0xf54c: db 0x4e 0x41 0x56 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'NAV-VOC_____________ '

