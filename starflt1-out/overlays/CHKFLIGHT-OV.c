// ====== OVERLAY 'CHKFLIGHT-OV' ======
// store offset = 0xf1a0
// overlay size   = 0x03c0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF1B6  codep:0x744d wordp:0xf1b6 size:0x0003 C-string:'WF1B6'
//           WF1BB  codep:0x744d wordp:0xf1bb size:0x0003 C-string:'WF1BB'
//           WF1C0  codep:0x744d wordp:0xf1c0 size:0x0003 C-string:'WF1C0'
//           WF1C5  codep:0x224c wordp:0xf1c5 size:0x0091 C-string:'WF1C5'
//           WF258  codep:0x224c wordp:0xf258 size:0x0016 C-string:'WF258'
//           WF270  codep:0x224c wordp:0xf270 size:0x0036 C-string:'WF270'
//           WF2A8  codep:0x224c wordp:0xf2a8 size:0x0020 C-string:'WF2A8'
//           WF2CA  codep:0x224c wordp:0xf2ca size:0x0012 C-string:'WF2CA'
//           WF2DE  codep:0x224c wordp:0xf2de size:0x0015 C-string:'WF2DE'
//           WF2F5  codep:0x224c wordp:0xf2f5 size:0x0016 C-string:'WF2F5'
//           (.CS)  codep:0x4a4f wordp:0xf315 size:0x0010 C-string:'_ro__dot_CS_rc_'
//           WF327  codep:0x1d29 wordp:0xf327 size:0x0002 C-string:'WF327'
//           WF32B  codep:0x224c wordp:0xf32b size:0x0045 C-string:'WF32B'
//           WF372  codep:0x224c wordp:0xf372 size:0x0039 C-string:'WF372'
//           WF3AD  codep:0x224c wordp:0xf3ad size:0x005b C-string:'WF3AD'
//           WF40A  codep:0x224c wordp:0xf40a size:0x0044 C-string:'WF40A'
//           WF450  codep:0x224c wordp:0xf450 size:0x002e C-string:'WF450'
//           WF480  codep:0x224c wordp:0xf480 size:0x0028 C-string:'WF480'
//           WF4AA  codep:0x224c wordp:0xf4aa size:0x0048 C-string:'WF4AA'
//      ?CAN-LEAVE  codep:0x224c wordp:0xf501 size:0x0000 C-string:'IsCAN_dash_LEAVE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_IsEVAL; // ?EVAL
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_IsRECALL; // ?RECALL
extern const unsigned short int pp__10_star_END; // 10*END
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType _pe_NAME; // %NAME
void M_star_(); // M*
void MIN(); // MIN
void NOP(); // NOP
void KEY_2(); // KEY_2
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void OFF(); // OFF
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void StoreCOLOR(); // !COLOR
void _gt_2FONT(); // >2FONT
void _gt_3FONT(); // >3FONT
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void SFILL(); // SFILL
void StoreCRS(); // !CRS
void CMESS(); // CMESS
void OVER(); // OVER
void _dash_(); // -
void CI(); // CI
void LLINE(); // LLINE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF327 = 0xf327; // WF327 size: 2
// {0x3a, 0x20}




// 0xf1b2: db 0x39 0x00 '9 '

// ================================================
// 0xf1b4: WORD 'WF1B6' codep=0x744d wordp=0xf1b6
// ================================================
IFieldType WF1B6 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xf1b9: WORD 'WF1BB' codep=0x744d wordp=0xf1bb
// ================================================
IFieldType WF1BB = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xf1be: WORD 'WF1C0' codep=0x744d wordp=0xf1c0
// ================================================
IFieldType WF1C0 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xf1c3: WORD 'WF1C5' codep=0x224c wordp=0xf1c5 params=0 returns=0
// ================================================

void WF1C5() // WF1C5
{
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(2);
  Push(1);
  Push(0x009d);
  Push(1);
  LLINE(); // LLINE
  Push(2);
  Push(0x00b9);
  Push(0x009d);
  Push(0x00b9);
  LLINE(); // LLINE
  Push(1);
  Push(0x00b9);
  Push(1);
  Push(1);
  LLINE(); // LLINE
  Push(0x009e);
  Push(0x00b9);
  Push(0x009e);
  Push(1);
  LLINE(); // LLINE
  _gt_3FONT(); // >3FONT
  Push(0x0013);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("PRE", 3); // (.")
  Push(Read16(pp_XBLT)); // XBLT @
  Push(0x00c0);
  OVER(); // OVER
  Push(Pop() + 2); //  2+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(5);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("FLIGHT", 6); // (.")
  Push(6);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("CHECK", 5); // (.")
  Push(2);
  Push(0x00c5);
  GetColor(BLACK);
  Draw1LOGO(); // .1LOGO
}


// ================================================
// 0xf256: WORD 'WF258' codep=0x224c wordp=0xf258 params=0 returns=0
// ================================================

void WF258() // WF258
{
  Push(6);
  Push(Read16(pp_YBLT) - 0x0014); // YBLT @ 0x0014 -
  Push(0x00aa);
  MIN(); // MIN
  POS_dot_(); // POS.
}


// ================================================
// 0xf26e: WORD 'WF270' codep=0x224c wordp=0xf270 params=0 returns=0
// ================================================

void WF270() // WF270
{
  WF258(); // WF258
  PRINT("REPORT TO OPERATIONS FOR", 24); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF258(); // WF258
  PRINT("EVALUATION", 10); // (.")
}


// ================================================
// 0xf2a6: WORD 'WF2A8' codep=0x224c wordp=0xf2a8 params=0 returns=0
// ================================================

void WF2A8() // WF2A8
{
  WF258(); // WF258
  PRINT("REPORT TO CREW ASSIGNMENT", 25); // (.")
}


// ================================================
// 0xf2c8: WORD 'WF2CA' codep=0x224c wordp=0xf2ca params=0 returns=0
// ================================================

void WF2CA() // WF2CA
{
  PRINT("CHRISTEN SHIP", 13); // (.")
}


// ================================================
// 0xf2dc: WORD 'WF2DE' codep=0x224c wordp=0xf2de params=0 returns=0
// ================================================

void WF2DE() // WF2DE
{
  PRINT("PURCHASE ENGINES", 16); // (.")
}


// ================================================
// 0xf2f3: WORD 'WF2F5' codep=0x224c wordp=0xf2f5 params=0 returns=0
// ================================================

void WF2F5() // WF2F5
{
  PRINT(" AND ", 5); // (.")
  WF258(); // WF258
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF2DE(); // WF2DE
}


// ================================================
// 0xf30b: WORD '(.CS)' codep=0x4a4f wordp=0xf315
// ================================================

void _ro__dot_CS_rc_() // (.CS)
{
  switch(Pop()) // (.CS)
  {
  case 1:
    WF2CA(); // WF2CA
    break;
  case 6:
    WF2DE(); // WF2DE
    break;
  case 7:
    WF2F5(); // WF2F5
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf325: WORD 'WF327' codep=0x1d29 wordp=0xf327
// ================================================
// 0xf327: db 0x3a 0x20 ': '

// ================================================
// 0xf329: WORD 'WF32B' codep=0x224c wordp=0xf32b
// ================================================

void WF32B() // WF32B
{
  WF258(); // WF258
  PRINT("REPORT TO SHIP-CONFIGURATION", 28); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF258(); // WF258
  PRINT("TO ", 3); // (.")
  Push(Read16(pp_WF327)); // WF327 @
  Push(Read16(regsp)); // DUP
  Push(Pop() & 1); //  1 AND
  _ro__dot_CS_rc_(); // (.CS) case
  Push(Pop() & 7); //  7 AND
  _ro__dot_CS_rc_(); // (.CS) case
}


// ================================================
// 0xf370: WORD 'WF372' codep=0x224c wordp=0xf372 params=0 returns=0
// ================================================

void WF372() // WF372
{
  WF258(); // WF258
  PRINT("REPORT TO TRADE DEPOT TO", 24); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF258(); // WF258
  PRINT("PURCHASE FUEL", 13); // (.")
}


// ================================================
// 0xf3ab: WORD 'WF3AD' codep=0x224c wordp=0xf3ad params=1 returns=0
// ================================================

void WF3AD() // WF3AD
{
  WF1C5(); // WF1C5
  _gt_2FONT(); // >2FONT
  Push(Read16(regsp)); // DUP
  Push(Pop() & 1); //  1 AND
  if (Pop() != 0)
  {
    WF270(); // WF270
  }
  Push(Read16(regsp)); // DUP
  Push(Pop() & 2); //  2 AND
  if (Pop() != 0)
  {
    WF2A8(); // WF2A8
  }
  Push(Read16(regsp)); // DUP
  Push(Pop() & 4); //  4 AND
  if (Pop() != 0)
  {
    WF32B(); // WF32B
  }
  Push(Pop() & 8); //  8 AND
  if (Pop() != 0)
  {
    WF372(); // WF372
  }
  Push(1);
  Push(0x0016);
  CMESS(); // CMESS
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS SPACEBAR TO EXIT", 22); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xf408: WORD 'WF40A' codep=0x224c wordp=0xf40a params=0 returns=1
// ================================================

void WF40A() // WF40A
{
  Push(Read16(pp_IsEVAL)); // ?EVAL @
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push2Words("*OP");
    _gt_C_plus_S(); // >C+S
    IOPEN(); // IOPEN
    Push(0x000b);
    Push(0x002d);
    IFIND(); // IFIND
    Pop(); // DROP
    IOPEN(); // IOPEN
    while(1)
    {
      CI(); // CI
      Push(Pop() | Pop()); // OR
      if (Pop() == 0) break;

      IDELETE(); // IDELETE
    }
    ICLOSE(); // ICLOSE
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
  }
  Push((Pop() | (Read16(pp_IsTV)==0?1:0)) | Read16(pp_IsRECALL)); //  ?TV @ 0= OR ?RECALL @ OR
}


// ================================================
// 0xf44e: WORD 'WF450' codep=0x224c wordp=0xf450 params=0 returns=1
// ================================================

void WF450() // WF450
{
  unsigned short int i, imax;
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0);

  i = 0x63ef+WF1BB.offset; // WF1BB<IFIELD>
  imax = (0x63ef+WF1BB.offset) + 0x0012; // WF1BB<IFIELD> 0x0012 +
  do // (DO)
  {
    Push(i); // I
    Get_gt_C_plus_S(); // @>C+S
    Push(Pop() | !(Read16(0x63ef+WF1B6.offset) & 8)); //  WF1B6<IFIELD> @ 8 AND NOT OR
    ICLOSE(); // ICLOSE
    Push(6);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf47e: WORD 'WF480' codep=0x224c wordp=0xf480 params=0 returns=1
// ================================================

void WF480() // WF480
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(((Read16(0x63ef+_pe_NAME.offset)&0xFF)==0?1:0) + ((Read16((0x63ef+WF1C0.offset) + 1)&0xFF)==0?1:0) * 2); // %NAME<IFIELD> C@ 0= WF1C0<IFIELD> 1+ C@ 0= 2* +
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(Pop() + 4); //  4 +
  Push(pp_WF327); // WF327
  Store_3(); // !_3
  Push(!(!Pop())); //  NOT NOT
}


// ================================================
// 0xf4a8: WORD 'WF4AA' codep=0x224c wordp=0xf4aa
// ================================================

void WF4AA() // WF4AA
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
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
      Push(Read16(regsp)); // DUP
      Push(0x000a);
      M_star_(); // M*
      Push(pp__10_star_END); // 10*END
      StoreD(); // D!
      Push(Pop()==0?1:0); //  0=
    } else
    {
      Push(1);
    }
    CDROP(); // CDROP
  } else
  {
    Push(1);
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4f2: WORD '?CAN-LEAVE' codep=0x224c wordp=0xf501
// ================================================
// entry

void IsCAN_dash_LEAVE() // ?CAN-LEAVE
{
  WF40A(); // WF40A
  WF450(); // WF450
  Push(Pop() * 2); //  2*
  Push(Pop() | Pop()); // OR
  WF480(); // WF480
  Push(Pop() * 4); //  4 *
  Push(Pop() | Pop()); // OR
  WF4AA(); // WF4AA
  Push(Pop() * 8); //  8 *
  Push(Pop() | Pop()); // OR
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    WF3AD(); // WF3AD
    KEY_2(); // KEY_2
    Pop(); // DROP
    Push(0);
    return;
  }
  Push(1);
}

// 0xf52f: db 0x43 0x48 0x4b 0x46 0x4c 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x6f 0x72 0x20 0x43 0x48 0x4b 0x46 0x4c 0x49 0x47 0x48 0x54 0x2d 0x4f 0x56 0x20 0x2d 0x00 'CHKFLT-VOC______________________or CHKFLIGHT-OV - '

