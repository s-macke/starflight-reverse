// ====== OVERLAY 'ENGINEER' ======
// store offset = 0xec50
// overlay size   = 0x0910

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WEC66  codep:0x744d parp:0xec66 size:0x0003 C-string:'WEC66'
//           WEC6B  codep:0x744d parp:0xec6b size:0x0003 C-string:'WEC6B'
//           WEC70  codep:0x744d parp:0xec70 size:0x0003 C-string:'WEC70'
//           WEC75  codep:0x224c parp:0xec75 size:0x0012 C-string:'WEC75'
//           WEC89  codep:0x224c parp:0xec89 size:0x0046 C-string:'WEC89'
//           WECD1  codep:0x224c parp:0xecd1 size:0x0012 C-string:'WECD1'
//           WECE5  codep:0x224c parp:0xece5 size:0x0075 C-string:'WECE5'
//           WED5C  codep:0x224c parp:0xed5c size:0x009c C-string:'WED5C'
//           DBARS  codep:0x224c parp:0xee02 size:0x0044 C-string:'DBARS'
//       (/DAMAGE)  codep:0x224c parp:0xee54 size:0x0012 C-string:'_ro__slash_DAMAGE_rc_'
//           WEE68  codep:0x224c parp:0xee68 size:0x0036 C-string:'WEE68'
//           WEEA0  codep:0x224c parp:0xeea0 size:0x00ce C-string:'WEEA0'
//           WEF70  codep:0x224c parp:0xef70 size:0x0009 C-string:'WEF70'
//           WEF7B  codep:0x224c parp:0xef7b size:0x000c C-string:'WEF7B'
//           WEF89  codep:0x224c parp:0xef89 size:0x000c C-string:'WEF89'
//           WEF97  codep:0x224c parp:0xef97 size:0x0013 C-string:'WEF97'
//           WEFAC  codep:0x224c parp:0xefac size:0x000c C-string:'WEFAC'
//           WEFBA  codep:0x224c parp:0xefba size:0x0015 C-string:'WEFBA'
//           WEFD1  codep:0x224c parp:0xefd1 size:0x0011 C-string:'WEFD1'
//      .SHIP-ITEM  codep:0x4a4f parp:0xeff1 size:0x0020 C-string:'DrawSHIP_dash_ITEM'
//           WF013  codep:0x224c parp:0xf013 size:0x0046 C-string:'WF013'
//           WF05B  codep:0x224c parp:0xf05b size:0x0023 C-string:'WF05B'
//           WF080  codep:0x224c parp:0xf080 size:0x0049 C-string:'WF080'
//           WF0CB  codep:0x224c parp:0xf0cb size:0x0032 C-string:'WF0CB'
//           WF0FF  codep:0x224c parp:0xf0ff size:0x0082 C-string:'WF0FF'
//           WF183  codep:0x224c parp:0xf183 size:0x004c C-string:'WF183'
//           WF1D1  codep:0x224c parp:0xf1d1 size:0x0032 C-string:'WF1D1'
//           WF205  codep:0x224c parp:0xf205 size:0x002a C-string:'WF205'
//           WF231  codep:0x224c parp:0xf231 size:0x006d C-string:'WF231'
//           WF2A0  codep:0x224c parp:0xf2a0 size:0x002c C-string:'WF2A0'
//           WF2CE  codep:0x224c parp:0xf2ce size:0x004a C-string:'WF2CE'
//           WF31A  codep:0x224c parp:0xf31a size:0x001e C-string:'WF31A'
//           WF33A  codep:0x224c parp:0xf33a size:0x001c C-string:'WF33A'
//           WF358  codep:0x224c parp:0xf358 size:0x0021 C-string:'WF358'
//           WF37B  codep:0x224c parp:0xf37b size:0x0024 C-string:'WF37B'
//           WF3A1  codep:0x224c parp:0xf3a1 size:0x0022 C-string:'WF3A1'
//           WF3C5  codep:0x224c parp:0xf3c5 size:0x0046 C-string:'WF3C5'
//       (/REPAIR)  codep:0x224c parp:0xf419 size:0x0000 C-string:'_ro__slash_REPAIR_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_IsREPAIR; // ?REPAIR
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_VSTIME; // VSTIME
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color DK_dash_GREEN; // DK-GREEN
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
void _star__slash_(); // */
void MOD(); // MOD
void Draw(); // .
void DrawR(); // .R
void NOP(); // NOP
void WITHIN(); // WITHIN
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void POS_dot_(); // POS.
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void Y_slash_N(); // Y/N
void CURSORSPACE(); // CURSORSPACE
void _2_at_(); // 2@
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void LLINE(); // LLINE


// =================================
// =========== VARIABLES ===========
// =================================



// 0xec62: db 0x8b 0x00 '  '

// ================================================
// 0xec64: WORD 'WEC66' codep=0x744d parp=0xec66
// ================================================
IFieldType WEC66 = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xec69: WORD 'WEC6B' codep=0x744d parp=0xec6b
// ================================================
IFieldType WEC6B = {ASSIGN_CREWIDX, 0x1a, 0x03};

// ================================================
// 0xec6e: WORD 'WEC70' codep=0x744d parp=0xec70
// ================================================
IFieldType WEC70 = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xec73: WORD 'WEC75' codep=0x224c parp=0xec75 params=0 returns=0
// ================================================

void WEC75() // WEC75
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xec87: WORD 'WEC89' codep=0x224c parp=0xec89 params=0 returns=0
// ================================================

void WEC89() // WEC89
{
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(0x009a);
  Push(0x00b4);
  Push(0x0071);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x009a);
  Push(0x0082);
  Push(0x0071);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0071);
  Push(0x0083);
  OVER(); // OVER
  Push(0x00b3);
  LLINE(); // LLINE
  Push(0x009a);
  Push(0x0083);
  OVER(); // OVER
  Push(0x00b3);
  LLINE(); // LLINE
}


// ================================================
// 0xeccf: WORD 'WECD1' codep=0x224c parp=0xecd1 params=0 returns=0
// ================================================

void WECD1() // WECD1
{
  Push(0xfff9);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(0x0055);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
}


// ================================================
// 0xece3: WORD 'WECE5' codep=0x224c parp=0xece5 params=0 returns=0
// ================================================

void WECE5() // WECE5
{
  _gt_2FONT(); // >2FONT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x0067);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("DAMAGE", 6); // (.")
  _gt_1FONT(); // >1FONT
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(0x0055);
  Push(0x00b2);
  POS_dot_(); // POS.
  PRINT("HULL", 4); // (.")
  WECD1(); // WECD1
  PRINT("ENGINES", 7); // (.")
  WECD1(); // WECD1
  PRINT("SENSORS", 7); // (.")
  WECD1(); // WECD1
  PRINT("COMM.", 5); // (.")
  WECD1(); // WECD1
  PRINT("SHIELD", 6); // (.")
  WECD1(); // WECD1
  PRINT("MISSILE", 7); // (.")
  WECD1(); // WECD1
  PRINT("LASER", 5); // (.")
}


// ================================================
// 0xed5a: WORD 'WED5C' codep=0x224c parp=0xed5c params=1 returns=0
// ================================================

void WED5C() // WED5C
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  Push(Pop() * 2 + (0x63ef+WEC70.offset)); //  2* WEC70<IFIELD> +
  a = Pop(); // >R
  Push(Read16(a + 1)&0xFF | (a==0x63ef+WEC70.offset?1:0)); // I 1+ C@ I WEC70<IFIELD> = OR
  if (Pop() != 0)
  {
    CURSORSPACE(); // CURSORSPACE
    Push(pp_ABLT); // ABLT
    Store_3(); // !_3
    Push(pp_XORMODE); // XORMODE
    OFF(); // OFF
    Push(5);
    Push(pp_LBLT); // LBLT
    Store_3(); // !_3
    Push((Read16(a)&0xFF) * 2); // I C@ 2*
    Push(5);
    _slash_(); // /
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    Push(0x0072);
    Push(0x00b2);
    ROT(); // ROT
    Push(Pop() * 7); //  7 *
    _dash_(); // -
    POS_dot_(); // POS.
    GetColor(WHITE);
    GetColor(GREY2);
    GetColor(DK_dash_GREEN);
    IsMRC(); // ?MRC
    StoreCOLOR(); // !COLOR
    Push(Read16(pp_WBLT)); // WBLT @
    if (Pop() != 0)
    {
      BLT(); // BLT
    }
    Push(0x0072 + Read16(pp_WBLT)); // 0x0072 WBLT @ +
    Push(pp_XBLT); // XBLT
    Store_3(); // !_3
    Push(0x0028 - Read16(pp_WBLT)); // 0x0028 WBLT @ -
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    GetColor(GREY1);
    GetColor(GREY1);
    GetColor(RED);
    IsMRC(); // ?MRC
    StoreCOLOR(); // !COLOR
    Push(Read16(pp_WBLT)); // WBLT @
    if (Pop() != 0)
    {
      BLT(); // BLT
    }
  } else
  {
    Pop(); // DROP
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xedf8: WORD 'DBARS' codep=0x224c parp=0xee02 params=0 returns=0
// ================================================
// entry

void DBARS() // DBARS
{
  unsigned short int i, imax;
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WED5C(); // WED5C
    i++;
  } while(i<imax); // (LOOP)

  Push((Read16(0x63ef+WEC70.offset)&0xFF) & 0x007f); // WEC70<IFIELD> C@ 0x007f AND
  Push(0x000f);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(0x1d4c); Push(0x0000);
  } else
  {
    Push(0x3a98); Push(0x0000);
  }
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_VSTIME); // VSTIME
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee46: WORD '(/DAMAGE)' codep=0x224c parp=0xee54 params=0 returns=0
// ================================================
// entry

void _ro__slash_DAMAGE_rc_() // (/DAMAGE)
{
  GetColor(BLACK);
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  WEC89(); // WEC89
  WECE5(); // WECE5
  Push(3);
  Push(pp__n_AUX); // #AUX
  Store_3(); // !_3
  DBARS(); // DBARS
}


// ================================================
// 0xee66: WORD 'WEE68' codep=0x224c parp=0xee68 params=1 returns=1
// ================================================

void WEE68() // WEE68
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0);
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((Read16(((0x63ef+WEC70.offset) + i * 2) + 1)&0xFF) & a); // WEC70<IFIELD> I 2* + 1+ C@ J AND
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
      Push(i); // I
      SWAP(); // SWAP
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee9e: WORD 'WEEA0' codep=0x224c parp=0xeea0 params=1 returns=0
// ================================================

void WEEA0() // WEEA0
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a==0?1:0); // I 0=
  if (Pop() != 0)
  {
    PRINT("DESTROYED", 9); // (.")
  } else
  {
    Push(a); // I
    Push(1);
    Push(0x0014);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      PRINT("CRITICALLY", 10); // (.")
    } else
    {
      Push(a); // I
      Push(0x0014);
      Push(0x0028);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        PRINT("HEAVILY", 7); // (.")
      } else
      {
        Push(a); // I
        Push(0x0028);
        Push(0x0046);
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          PRINT("MODERATELY", 10); // (.")
        } else
        {
          Push(a); // I
          Push(0x0046);
          Push(0x005a);
          WITHIN(); // WITHIN
          if (Pop() != 0)
          {
            PRINT("SLIGHTLY", 8); // (.")
          } else
          {
            Push(a); // I
            Push(0x005a);
            Push(0x0064);
            WITHIN(); // WITHIN
            if (Pop() != 0)
            {
              PRINT("MINIMALLY", 9); // (.")
            } else
            {
              PRINT("NOT", 3); // (.")
            }
          }
        }
      }
    }
    PRINT(" DAMAGED", 8); // (.")
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xef6e: WORD 'WEF70' codep=0x224c parp=0xef70 params=0 returns=0
// ================================================

void WEF70() // WEF70
{
  PRINT("HULL", 4); // (.")
}


// ================================================
// 0xef79: WORD 'WEF7B' codep=0x224c parp=0xef7b params=0 returns=0
// ================================================

void WEF7B() // WEF7B
{
  PRINT("ENGINES", 7); // (.")
}


// ================================================
// 0xef87: WORD 'WEF89' codep=0x224c parp=0xef89 params=0 returns=0
// ================================================

void WEF89() // WEF89
{
  PRINT("SENSORS", 7); // (.")
}


// ================================================
// 0xef95: WORD 'WEF97' codep=0x224c parp=0xef97 params=0 returns=0
// ================================================

void WEF97() // WEF97
{
  PRINT("COMMUNICATIONS", 14); // (.")
}


// ================================================
// 0xefaa: WORD 'WEFAC' codep=0x224c parp=0xefac params=0 returns=0
// ================================================

void WEFAC() // WEFAC
{
  PRINT("SHIELDS", 7); // (.")
}


// ================================================
// 0xefb8: WORD 'WEFBA' codep=0x224c parp=0xefba params=0 returns=0
// ================================================

void WEFBA() // WEFBA
{
  PRINT("MISSILE LAUNCHER", 16); // (.")
}


// ================================================
// 0xefcf: WORD 'WEFD1' codep=0x224c parp=0xefd1 params=0 returns=0
// ================================================

void WEFD1() // WEFD1
{
  PRINT("LASER CANNON", 12); // (.")
}


// ================================================
// 0xefe2: WORD '.SHIP-ITEM' codep=0x4a4f parp=0xeff1
// ================================================

void DrawSHIP_dash_ITEM() // .SHIP-ITEM
{
  switch(Pop()) // .SHIP-ITEM
  {
  case 0:
    WEF70(); // WEF70
    break;
  case 1:
    WEF7B(); // WEF7B
    break;
  case 2:
    WEF89(); // WEF89
    break;
  case 3:
    WEF97(); // WEF97
    break;
  case 4:
    WEFAC(); // WEFAC
    break;
  case 5:
    WEFBA(); // WEFBA
    break;
  case 6:
    WEFD1(); // WEFD1
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf011: WORD 'WF013' codep=0x224c parp=0xf013
// ================================================

void WF013() // WF013
{
  unsigned short int a;
  Push2Words("NULL");
  CTPOS_dot_(); // CTPOS.
  Push(Read16(regsp)); // DUP
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(": ", 2); // (.")
  Push(Pop() * 2 + (0x63ef+WEC70.offset)); //  2* WEC70<IFIELD> +
  a = Pop(); // >R
  Push(Read16(a + 1)&0xFF | (a==0x63ef+WEC70.offset?1:0)); // I 1+ C@ I WEC70<IFIELD> = OR
  if (Pop() != 0)
  {
    Push(Read16(a)&0xFF); // I C@
    WEEA0(); // WEEA0
    Push(Read16(a)&0xFF); // I C@
    _0_gt_(); // 0>
  } else
  {
    PRINT("NONE", 4); // (.")
    Push(0);
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf059: WORD 'WF05B' codep=0x224c parp=0xf05b params=1 returns=0
// ================================================

void WF05B() // WF05B
{
  CTCR(); // CTCR
  PRINT("EFFICIENCY: ", 12); // (.")
  Push(Read16(Pop() * 2 + (0x63ef+WEC70.offset))&0xFF); //  2* WEC70<IFIELD> + C@
  Push(0);
  DrawR(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf07e: WORD 'WF080' codep=0x224c parp=0xf080 params=1 returns=0
// ================================================

void WF080() // WF080
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  CTCR(); // CTCR
  PRINT("CURRENT FUNCTIONALITY: ", 23); // (.")
  Push((Read16((Pop() * 2 + (0x63ef+WEC70.offset)) + 1)&0xFF) & 0x0080); //  2* WEC70<IFIELD> + 1+ C@ 0x0080 AND
  if (Pop() != 0)
  {
    PRINT("IN", 2); // (.")
  }
  PRINT("OPERATIVE", 9); // (.")
}


// ================================================
// 0xf0c9: WORD 'WF0CB' codep=0x224c parp=0xf0cb params=1 returns=1
// ================================================

void WF0CB() // WF0CB
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WEC6B.offset); // WEC6B<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x00fb - (Read16(0x63ef+WEC66.offset)&0xFF)); // 0x00fb WEC66<IFIELD> C@ -
  Push(0x0064);
  ROT(); // ROT
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(Pop() + 1); //  1+
  Push(0x1c1b);
  Push(0x5559);
  _star__slash_(); // */
  Push(Pop() + 5); //  5 +
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0fd: WORD 'WF0FF' codep=0x224c parp=0xf0ff params=1 returns=0
// ================================================

void WF0FF() // WF0FF
{
  Push(Read16(regsp)); // DUP
  Push(0x003c);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(5);
    _slash_MOD(); // /MOD
    SWAP(); // SWAP
    Push(2);
    _gt_(); // >
    Push(Pop() + Pop()); // +
    Push(Read16(regsp)); // DUP
    Draw(); // .
    PRINT("MINUTE", 6); // (.")
  } else
  {
    Push(Read16(regsp)); // DUP
    Push(0x05a0);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(0x003c);
      _slash_MOD(); // /MOD
      SWAP(); // SWAP
      Push(0x001e);
      _gt_(); // >
      Push(Pop() + Pop()); // +
      Push(Read16(regsp)); // DUP
      Draw(); // .
      PRINT("HOUR", 4); // (.")
    } else
    {
      Push(0x05a0);
      _slash_MOD(); // /MOD
      SWAP(); // SWAP
      Push(0x02d0);
      _gt_(); // >
      Push(Pop() + Pop()); // +
      Push(Read16(regsp)); // DUP
      Draw(); // .
      PRINT("DAY", 3); // (.")
    }
  }
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x0053);
    Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  }
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf181: WORD 'WF183' codep=0x224c parp=0xf183 params=1 returns=0
// ================================================

void WF183() // WF183
{
  Push(Read16(Pop() * 2 + (0x63ef+WEC70.offset))&0xFF); //  2* WEC70<IFIELD> + C@
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  _st_(); // <
  if (Pop() != 0)
  {
    CTCR(); // CTCR
    PRINT("ESTIMATED TIME FOR COMPLETE REPAIRS: ", 37); // (.")
    CTCR(); // CTCR
    WF0CB(); // WF0CB
    WF0FF(); // WF0FF
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf1cf: WORD 'WF1D1' codep=0x224c parp=0xf1d1 params=1 returns=0
// ================================================

void WF1D1() // WF1D1
{
  Push((Read16((Pop() * 2 + (0x63ef+WEC70.offset)) + 1)&0xFF) & 0x0040); //  2* WEC70<IFIELD> + 1+ C@ 0x0040 AND
  if (Pop() == 0) return;
  CTCR(); // CTCR
  PRINT("CURRENTLY UNDER REPAIR.", 23); // (.")
}


// ================================================
// 0xf203: WORD 'WF205' codep=0x224c parp=0xf205
// ================================================

void WF205() // WF205
{
  unsigned short int a;
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  a = Pop(); // >R
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(a); // I
  WF013(); // WF013
  if (Pop() != 0)
  {
    Push(a); // I
    WF05B(); // WF05B
    Push(a); // I
    WF080(); // WF080
    Push(a); // I
    WF183(); // WF183
    Push(a); // I
    WF1D1(); // WF1D1
  }
  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf22f: WORD 'WF231' codep=0x224c parp=0xf231
// ================================================

void WF231() // WF231
{
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop() * 2 + (0x63ef+WEC70.offset))&0xFF) & 0x007f); //  2* WEC70<IFIELD> + C@ 0x007f AND
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0);
    return;
  }
  CTERASE(); // CTERASE
  SWAP(); // SWAP
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(": ", 2); // (.")
  if (Pop() != 0)
  {
    PRINT("NO REPAIRS NEEDED.", 18); // (.")
  } else
  {
    CTCR(); // CTCR
    PRINT("DAMAGED BEYOND REPAIR.", 22); // (.")
  }
  Push(1);
}


// ================================================
// 0xf29e: WORD 'WF2A0' codep=0x224c parp=0xf2a0
// ================================================

void WF2A0() // WF2A0
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(":", 1); // (.")
  CTCR(); // CTCR
  PRINT("ALREADY UNDERGOING REPAIRS.", 27); // (.")
}


// ================================================
// 0xf2cc: WORD 'WF2CE' codep=0x224c parp=0xf2ce
// ================================================

void WF2CE() // WF2CE
{
  CTERASE(); // CTERASE
  PRINT("CEASE REPAIRS ON ", 17); // (.")
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  CTCR(); // CTCR
  PRINT("AND BEGIN REPAIRS ON ", 21); // (.")
  Push(Read16(pp_OCRS)); // OCRS @
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT("\?", 1); // (.")
  CTCR(); // CTCR
  WEC75(); // WEC75
  Y_slash_N(); // Y/N
  Push(pp_FTRIG); // FTRIG
  ON_3(); // ON_3
  CTERASE(); // CTERASE
}


// ================================================
// 0xf318: WORD 'WF31A' codep=0x224c parp=0xf31a
// ================================================

void WF31A() // WF31A
{
  PRINT("CEASING REPAIRS ON ", 19); // (.")
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf338: WORD 'WF33A' codep=0x224c parp=0xf33a
// ================================================

void WF33A() // WF33A
{
  Push(Read16(regsp)); // DUP
  WF31A(); // WF31A
  Push((Pop() * 2 + (0x63ef+WEC70.offset)) + 1); //  2* WEC70<IFIELD> + 1+
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) & 0x00bf); //  C@ 0x00bf AND
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xf356: WORD 'WF358' codep=0x224c parp=0xf358
// ================================================

void WF358() // WF358
{
  PRINT("CONTINUING REPAIRS ON ", 22); // (.")
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf379: WORD 'WF37B' codep=0x224c parp=0xf37b
// ================================================

void WF37B() // WF37B
{
  PRINT("BEGINNING REPAIRS ON ", 21); // (.")
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
  Push(pp_IsREPAIR); // ?REPAIR
  ON_3(); // ON_3
}


// ================================================
// 0xf39f: WORD 'WF3A1' codep=0x224c parp=0xf3a1
// ================================================

void WF3A1() // WF3A1
{
  Push(Read16(regsp)); // DUP
  WF37B(); // WF37B
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Pop() * 2 + (0x63ef+WEC70.offset)) + 1); //  2* WEC70<IFIELD> + 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF | 0x0040); //  C@ 0x0040 OR
  SWAP(); // SWAP
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3c3: WORD 'WF3C5' codep=0x224c parp=0xf3c5 params=1 returns=0
// ================================================

void WF3C5() // WF3C5
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(a); // I
  Push(pp_OCRS); // OCRS
  Store_3(); // !_3
  Push(a); // I
  Push(0x0054);
  Push(0x00b3);
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(0x001d);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(7);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  BLT(); // BLT
  StoreCRS(); // !CRS
  Push(a); // R>
  Push(pp_OCRS); // OCRS
  Store_3(); // !_3
}


// ================================================
// 0xf40b: WORD '(/REPAIR)' codep=0x224c parp=0xf419
// ================================================
// entry

void _ro__slash_REPAIR_rc_() // (/REPAIR)
{
  unsigned short int a, b;
  _ro__slash_DAMAGE_rc_(); // (/DAMAGE)
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  Push(0);
  WF3C5(); // WF3C5
  Push(0);
  WF205(); // WF205
  CTINIT(); // CTINIT
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    Push(Read16(pp_NCRS)); // NCRS @
    OVER(); // OVER
    _dash_(); // -
    Push(7);
    MOD(); // MOD
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
    Push(Pop() * 7); //  7 *
    Push(Pop() + Pop()); // +
    Push(pp_NCRS); // NCRS
    Store_3(); // !_3
    if (Pop() != 0)
    {
      Push(Read16(pp_OCRS)); // OCRS @
      WF3C5(); // WF3C5
      Push(Read16(pp_NCRS)); // NCRS @
      Push(Read16(regsp)); // DUP
      WF3C5(); // WF3C5
      WF205(); // WF205
    }
    Push(Read16(pp_FTRIG)); // FTRIG @
    Push(Read16(pp_OCRS) * 2 + (0x63ef+WEC70.offset)); // OCRS @ 2* WEC70<IFIELD> +
    a = Pop(); // >R
    Push(Read16(a + 1)&0xFF); // I 1+ C@
    _0_gt_(); // 0>
    Push(Pop() | (a==0x63ef+WEC70.offset?1:0)); //  R> WEC70<IFIELD> = OR
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(Read16(pp_OCRS)); // OCRS @
      WF231(); // WF231
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        Push(0x0040);
        WEE68(); // WEE68
        if (Pop() != 0)
        {
          b = Pop(); // >R
          Push(b==Read16(pp_OCRS)?1:0); // I OCRS @ =
          if (Pop() != 0)
          {
            Push(b); // I
            WF2A0(); // WF2A0
          } else
          {
            Push(b); // I
            WF2CE(); // WF2CE
            if (Pop() != 0)
            {
              Push(b); // I
              WF33A(); // WF33A
              Push(Read16(pp_OCRS)); // OCRS @
              CTCR(); // CTCR
              WF3A1(); // WF3A1
            } else
            {
              Push(b); // I
              WF358(); // WF358
            }
          }
          Push(b); // R>
          Pop(); // DROP
        } else
        {
          CTERASE(); // CTERASE
          Push(Read16(pp_OCRS)); // OCRS @
          WF3A1(); // WF3A1
        }
      }
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  Push(Read16(pp_OCRS)); // OCRS @
  WF3C5(); // WF3C5
  ICLOSE(); // ICLOSE
}

// 0xf4f5: db 0x45 0x4e 0x47 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x45 0x4e 0x47 0x49 0x4e 0x45 0x45 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x5f 0x5f 0x31 0x33 0x39 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4d 0x49 0x53 0x43 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'ENG-VOC_________________________ ENGINEER-------------------- )__139_____________________for MISC---------- '

