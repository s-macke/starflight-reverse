// ====== OVERLAY 'CHKFLIGHT-OV' ======
// store offset = 0xf170
// overlay size   = 0x03f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WF186  codep:0x7420 wordp:0xf186 size:0x0003 C-string:'WF186'
//           WF18B  codep:0x7420 wordp:0xf18b size:0x0003 C-string:'WF18B'
//           WF190  codep:0x7420 wordp:0xf190 size:0x0003 C-string:'WF190'
//           WF195  codep:0x224c wordp:0xf195 size:0x0034 C-string:'WF195'
//           WF1CB  codep:0x224c wordp:0xf1cb size:0x0091 C-string:'WF1CB'
//           WF25E  codep:0x224c wordp:0xf25e size:0x0016 C-string:'WF25E'
//           WF276  codep:0x224c wordp:0xf276 size:0x0036 C-string:'WF276'
//           WF2AE  codep:0x224c wordp:0xf2ae size:0x0020 C-string:'WF2AE'
//           WF2D0  codep:0x224c wordp:0xf2d0 size:0x0012 C-string:'WF2D0'
//           WF2E4  codep:0x224c wordp:0xf2e4 size:0x0015 C-string:'WF2E4'
//           WF2FB  codep:0x224c wordp:0xf2fb size:0x0016 C-string:'WF2FB'
//           (.CS)  codep:0x4b3b wordp:0xf31b size:0x0010 C-string:'_ro__dot_CS_rc_'
//           WF32D  codep:0x1d29 wordp:0xf32d size:0x0002 C-string:'WF32D'
//           WF331  codep:0x224c wordp:0xf331 size:0x0045 C-string:'WF331'
//           WF378  codep:0x224c wordp:0xf378 size:0x002f C-string:'WF378'
//           WF3A9  codep:0x224c wordp:0xf3a9 size:0x005b C-string:'WF3A9'
//           WF406  codep:0x224c wordp:0xf406 size:0x000c C-string:'WF406'
//           WF414  codep:0x224c wordp:0xf414 size:0x004c C-string:'WF414'
//           WF462  codep:0x224c wordp:0xf462 size:0x002e C-string:'WF462'
//           WF492  codep:0x224c wordp:0xf492 size:0x0028 C-string:'WF492'
//           WF4BC  codep:0x224c wordp:0xf4bc size:0x0048 C-string:'WF4BC'
//      ?CAN-LEAVE  codep:0x224c wordp:0xf513 size:0x0000 C-string:'IsCAN_dash_LEAVE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_IsEVAL; // ?EVAL
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_IsRECALL; // ?RECALL
extern const unsigned short int pp__10_star_END; // 10*END
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType _pe_NAME; // %NAME
void M_star_(); // M*
void MIN(); // MIN
void NOP(); // NOP
void KEY_2(); // KEY_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void _099(); // 099
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void StoreCOLOR(); // !COLOR
void LLINE(); // LLINE
void _gt_2FONT(); // >2FONT
void _gt_3FONT(); // >3FONT
void SFILL(); // SFILL
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void StoreCRS(); // !CRS
void CMESS(); // CMESS
void OVER(); // OVER
void _dash_(); // -
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WF32D = 0xf32d; // WF32D size: 2
// {0x3a, 0x20}




// 0xf182: db 0x3e 0x00 '> '

// ================================================
// 0xf184: WORD 'WF186' codep=0x7420 wordp=0xf186
// ================================================
IFieldType WF186 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xf189: WORD 'WF18B' codep=0x7420 wordp=0xf18b
// ================================================
IFieldType WF18B = {ASSIGN_CREWIDX, 0x11, 0x12};

// ================================================
// 0xf18e: WORD 'WF190' codep=0x7420 wordp=0xf190
// ================================================
IFieldType WF190 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xf193: WORD 'WF195' codep=0x224c wordp=0xf195
// ================================================

void WF195() // WF195
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
    Push(0x0017);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(cc_TRUE)); // TRUE
    } else
    {
      Push(Read16(cc_FALSE)); // FALSE
    }
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xf1c9: WORD 'WF1CB' codep=0x224c wordp=0xf1cb
// ================================================

void WF1CB() // WF1CB
{
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  SFILL(); // SFILL
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
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
// 0xf25c: WORD 'WF25E' codep=0x224c wordp=0xf25e params=0 returns=0
// ================================================

void WF25E() // WF25E
{
  Push(6);
  Push(Read16(pp_YBLT) - 0x0014); // YBLT @ 0x0014 -
  Push(0x00aa);
  MIN(); // MIN
  POS_dot_(); // POS.
}


// ================================================
// 0xf274: WORD 'WF276' codep=0x224c wordp=0xf276 params=0 returns=0
// ================================================

void WF276() // WF276
{
  WF25E(); // WF25E
  PRINT("REPORT TO OPERATIONS FOR", 24); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF25E(); // WF25E
  PRINT("EVALUATION", 10); // (.")
}


// ================================================
// 0xf2ac: WORD 'WF2AE' codep=0x224c wordp=0xf2ae params=0 returns=0
// ================================================

void WF2AE() // WF2AE
{
  WF25E(); // WF25E
  PRINT("REPORT TO CREW ASSIGNMENT", 25); // (.")
}


// ================================================
// 0xf2ce: WORD 'WF2D0' codep=0x224c wordp=0xf2d0 params=0 returns=0
// ================================================

void WF2D0() // WF2D0
{
  PRINT("CHRISTEN SHIP", 13); // (.")
}


// ================================================
// 0xf2e2: WORD 'WF2E4' codep=0x224c wordp=0xf2e4 params=0 returns=0
// ================================================

void WF2E4() // WF2E4
{
  PRINT("PURCHASE ENGINES", 16); // (.")
}


// ================================================
// 0xf2f9: WORD 'WF2FB' codep=0x224c wordp=0xf2fb params=0 returns=0
// ================================================

void WF2FB() // WF2FB
{
  PRINT(" AND ", 5); // (.")
  WF25E(); // WF25E
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF2E4(); // WF2E4
}


// ================================================
// 0xf311: WORD '(.CS)' codep=0x4b3b wordp=0xf31b
// ================================================

void _ro__dot_CS_rc_() // (.CS)
{
  switch(Pop()) // (.CS)
  {
  case 1:
    WF2D0(); // WF2D0
    break;
  case 6:
    WF2E4(); // WF2E4
    break;
  case 7:
    WF2FB(); // WF2FB
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf32b: WORD 'WF32D' codep=0x1d29 wordp=0xf32d
// ================================================
// 0xf32d: db 0x3a 0x20 ': '

// ================================================
// 0xf32f: WORD 'WF331' codep=0x224c wordp=0xf331
// ================================================

void WF331() // WF331
{
  WF25E(); // WF25E
  PRINT("REPORT TO SHIP-CONFIGURATION", 28); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF25E(); // WF25E
  PRINT("TO ", 3); // (.")
  Push(Read16(pp_WF32D)); // WF32D @
  Push(Read16(regsp)); // DUP
  Push(Pop() & 1); //  1 AND
  _ro__dot_CS_rc_(); // (.CS) case
  Push(Pop() & 7); //  7 AND
  _ro__dot_CS_rc_(); // (.CS) case
}


// ================================================
// 0xf376: WORD 'WF378' codep=0x224c wordp=0xf378 params=0 returns=0
// ================================================

void WF378() // WF378
{
  WF25E(); // WF25E
  PRINT("UNABLE TO LAUNCH WITHOUT FUEL ", 30); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF25E(); // WF25E
}


// ================================================
// 0xf3a7: WORD 'WF3A9' codep=0x224c wordp=0xf3a9
// ================================================

void WF3A9() // WF3A9
{
  WF1CB(); // WF1CB
  _gt_2FONT(); // >2FONT
  Push(Read16(regsp)); // DUP
  Push(Pop() & 1); //  1 AND
  if (Pop() != 0)
  {
    WF276(); // WF276
  }
  Push(Read16(regsp)); // DUP
  Push(Pop() & 2); //  2 AND
  if (Pop() != 0)
  {
    WF2AE(); // WF2AE
  }
  Push(Read16(regsp)); // DUP
  Push(Pop() & 4); //  4 AND
  if (Pop() != 0)
  {
    WF331(); // WF331
  }
  Push(Pop() & 8); //  8 AND
  if (Pop() != 0)
  {
    WF378(); // WF378
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
// 0xf404: WORD 'WF406' codep=0x224c wordp=0xf406 params=0 returns=1
// ================================================

void WF406() // WF406
{
  Push(0x003b);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
}


// ================================================
// 0xf412: WORD 'WF414' codep=0x224c wordp=0xf414
// ================================================

void WF414() // WF414
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
  WF406(); // WF406
  Push(Pop() | Pop()); // OR
  WF195(); // WF195
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf460: WORD 'WF462' codep=0x224c wordp=0xf462 params=0 returns=1
// ================================================

void WF462() // WF462
{
  unsigned short int i, imax;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0);
  Push((0x65e1+WF18B.offset) + 0x0012); // WF18B<IFIELD> 0x0012 +
  Push(0x65e1+WF18B.offset); // WF18B<IFIELD>

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Get_gt_C_plus_S(); // @>C+S
    Push(Pop() | !(Read16(0x65e1+WF186.offset) & 8)); //  WF186<IFIELD> @ 8 AND NOT OR
    ICLOSE(); // ICLOSE
    Push(6);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf490: WORD 'WF492' codep=0x224c wordp=0xf492 params=0 returns=1
// ================================================

void WF492() // WF492
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(((Read16(0x65e1+_pe_NAME.offset)&0xFF)==0?1:0) + ((Read16((0x65e1+WF190.offset) + 1)&0xFF)==0?1:0) * 2); // %NAME<IFIELD> C@ 0= WF190<IFIELD> 1+ C@ 0= 2* +
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(Pop() + 4); //  4 +
  Push(pp_WF32D); // WF32D
  Store_2(); // !_2
  Push(!(!Pop())); //  NOT NOT
}


// ================================================
// 0xf4ba: WORD 'WF4BC' codep=0x224c wordp=0xf4bc
// ================================================

void WF4BC() // WF4BC
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
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
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
// 0xf504: WORD '?CAN-LEAVE' codep=0x224c wordp=0xf513
// ================================================
// entry

void IsCAN_dash_LEAVE() // ?CAN-LEAVE
{
  WF414(); // WF414
  WF462(); // WF462
  Push(Pop() * 2); //  2*
  Push(Pop() | Pop()); // OR
  WF492(); // WF492
  Push(Pop() * 4); //  4 *
  Push(Pop() | Pop()); // OR
  WF4BC(); // WF4BC
  Push(Pop() * 8); //  8 *
  Push(Pop() | Pop()); // OR
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    WF3A9(); // WF3A9
    KEY_2(); // KEY_2
    Pop(); // DROP
    Push(0);
    return;
  }
  Push(1);
}

// 0xf541: db 0x43 0x48 0x4b 0x46 0x4c 0x54 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CHKFLT_________________________ '

