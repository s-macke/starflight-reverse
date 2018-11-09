// ====== OVERLAY 'ENGINEER' ======
// store offset = 0xeca0
// overlay size   = 0x08c0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WECB6  codep:0x7420 wordp:0xecb6 size:0x0003 C-string:'WECB6'
//           WECBB  codep:0x7420 wordp:0xecbb size:0x0003 C-string:'WECBB'
//           WECC0  codep:0x7420 wordp:0xecc0 size:0x0003 C-string:'WECC0'
//           WECC5  codep:0x224c wordp:0xecc5 size:0x0012 C-string:'WECC5'
//           WECD9  codep:0x224c wordp:0xecd9 size:0x0046 C-string:'WECD9'
//           WED21  codep:0x224c wordp:0xed21 size:0x0012 C-string:'WED21'
//           WED35  codep:0x224c wordp:0xed35 size:0x0075 C-string:'WED35'
//           WEDAC  codep:0x224c wordp:0xedac size:0x009c C-string:'WEDAC'
//           DBARS  codep:0x224c wordp:0xee52 size:0x0044 C-string:'DBARS'
//       (/DAMAGE)  codep:0x224c wordp:0xeea4 size:0x0012 C-string:'_ro__slash_DAMAGE_rc_'
//           WEEB8  codep:0x224c wordp:0xeeb8 size:0x0036 C-string:'WEEB8'
//           WEEF0  codep:0x224c wordp:0xeef0 size:0x00ce C-string:'WEEF0'
//           WEFC0  codep:0x224c wordp:0xefc0 size:0x0009 C-string:'WEFC0'
//           WEFCB  codep:0x224c wordp:0xefcb size:0x000c C-string:'WEFCB'
//           WEFD9  codep:0x224c wordp:0xefd9 size:0x000c C-string:'WEFD9'
//           WEFE7  codep:0x224c wordp:0xefe7 size:0x0013 C-string:'WEFE7'
//           WEFFC  codep:0x224c wordp:0xeffc size:0x000c C-string:'WEFFC'
//           WF00A  codep:0x224c wordp:0xf00a size:0x0015 C-string:'WF00A'
//           WF021  codep:0x224c wordp:0xf021 size:0x0011 C-string:'WF021'
//      .SHIP-ITEM  codep:0x4b3b wordp:0xf041 size:0x0020 C-string:'DrawSHIP_dash_ITEM'
//           WF063  codep:0x224c wordp:0xf063 size:0x0046 C-string:'WF063'
//           WF0AB  codep:0x224c wordp:0xf0ab size:0x0023 C-string:'WF0AB'
//           WF0D0  codep:0x224c wordp:0xf0d0 size:0x0049 C-string:'WF0D0'
//           WF11B  codep:0x224c wordp:0xf11b size:0x0032 C-string:'WF11B'
//           WF14F  codep:0x224c wordp:0xf14f size:0x0082 C-string:'WF14F'
//           WF1D3  codep:0x224c wordp:0xf1d3 size:0x004c C-string:'WF1D3'
//           WF221  codep:0x224c wordp:0xf221 size:0x0032 C-string:'WF221'
//           WF255  codep:0x224c wordp:0xf255 size:0x002a C-string:'WF255'
//           WF281  codep:0x224c wordp:0xf281 size:0x006d C-string:'WF281'
//           WF2F0  codep:0x224c wordp:0xf2f0 size:0x002c C-string:'WF2F0'
//           WF31E  codep:0x224c wordp:0xf31e size:0x004a C-string:'WF31E'
//           WF36A  codep:0x224c wordp:0xf36a size:0x001e C-string:'WF36A'
//           WF38A  codep:0x224c wordp:0xf38a size:0x001c C-string:'WF38A'
//           WF3A8  codep:0x224c wordp:0xf3a8 size:0x0021 C-string:'WF3A8'
//           WF3CB  codep:0x224c wordp:0xf3cb size:0x0024 C-string:'WF3CB'
//           WF3F1  codep:0x224c wordp:0xf3f1 size:0x0022 C-string:'WF3F1'
//           WF415  codep:0x224c wordp:0xf415 size:0x0046 C-string:'WF415'
//       (/REPAIR)  codep:0x224c wordp:0xf469 size:0x0000 C-string:'_ro__slash_REPAIR_rc_'

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
extern Color DK_dash_GREE; // DK-GREE
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
void _star__slash_(); // */
void MOD(); // MOD
void Draw(); // .
void DrawR(); // .R
void NOP(); // NOP
void WITHIN(); // WITHIN
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void StoreCOLOR(); // !COLOR
void LLINE(); // LLINE
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
void ERASE_dash_A(); // ERASE-A
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void Y_slash_N(); // Y/N
void CURSORS(); // CURSORS
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
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================



// 0xecb2: db 0x8b 0x00 '  '

// ================================================
// 0xecb4: WORD 'WECB6' codep=0x7420 wordp=0xecb6
// ================================================
IFieldType WECB6 = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xecb9: WORD 'WECBB' codep=0x7420 wordp=0xecbb
// ================================================
IFieldType WECBB = {ASSIGN_CREWIDX, 0x1a, 0x03};

// ================================================
// 0xecbe: WORD 'WECC0' codep=0x7420 wordp=0xecc0
// ================================================
IFieldType WECC0 = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xecc3: WORD 'WECC5' codep=0x224c wordp=0xecc5 params=0 returns=0
// ================================================

void WECC5() // WECC5
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xecd7: WORD 'WECD9' codep=0x224c wordp=0xecd9
// ================================================

void WECD9() // WECD9
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
// 0xed1f: WORD 'WED21' codep=0x224c wordp=0xed21 params=0 returns=0
// ================================================

void WED21() // WED21
{
  Push(0xfff9);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(0x0055);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
}


// ================================================
// 0xed33: WORD 'WED35' codep=0x224c wordp=0xed35
// ================================================

void WED35() // WED35
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
  WED21(); // WED21
  PRINT("ENGINES", 7); // (.")
  WED21(); // WED21
  PRINT("SENSORS", 7); // (.")
  WED21(); // WED21
  PRINT("COMM.", 5); // (.")
  WED21(); // WED21
  PRINT("SHIELD", 6); // (.")
  WED21(); // WED21
  PRINT("MISSILE", 7); // (.")
  WED21(); // WED21
  PRINT("LASER", 5); // (.")
}


// ================================================
// 0xedaa: WORD 'WEDAC' codep=0x224c wordp=0xedac params=1 returns=0
// ================================================

void WEDAC() // WEDAC
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  Push(Pop() * 2 + (0x65e1+WECC0.offset)); //  2* WECC0<IFIELD> +
  a = Pop(); // >R
  Push(Read16(a + 1)&0xFF | (a==0x65e1+WECC0.offset?1:0)); // I 1+ C@ I WECC0<IFIELD> = OR
  if (Pop() != 0)
  {
    CURSORS(); // CURSORS
    Push(pp_ABLT); // ABLT
    Store_2(); // !_2
    Push(pp_XORMODE); // XORMODE
    _099(); // 099
    Push(5);
    Push(pp_LBLT); // LBLT
    Store_2(); // !_2
    Push((Read16(a)&0xFF) * 2); // I C@ 2*
    Push(5);
    _slash_(); // /
    Push(pp_WBLT); // WBLT
    Store_2(); // !_2
    Push(0x0072);
    Push(0x00b2);
    ROT(); // ROT
    Push(Pop() * 7); //  7 *
    _dash_(); // -
    POS_dot_(); // POS.
    GetColor(WHITE);
    GetColor(BLUE);
    GetColor(DK_dash_GREE);
    IsMRC(); // ?MRC
    StoreCOLOR(); // !COLOR
    Push(Read16(pp_WBLT)); // WBLT @
    if (Pop() != 0)
    {
      BLT(); // BLT
    }
    Push(0x0072 + Read16(pp_WBLT)); // 0x0072 WBLT @ +
    Push(pp_XBLT); // XBLT
    Store_2(); // !_2
    Push(0x0028 - Read16(pp_WBLT)); // 0x0028 WBLT @ -
    Push(pp_WBLT); // WBLT
    Store_2(); // !_2
    GetColor(GREY1);
    GetColor(RED);
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
// 0xee48: WORD 'DBARS' codep=0x224c wordp=0xee52 params=0 returns=0
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
    WEDAC(); // WEDAC
    i++;
  } while(i<imax); // (LOOP)

  Push((Read16(0x65e1+WECC0.offset)&0xFF) & 0x007f); // WECC0<IFIELD> C@ 0x007f AND
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
// 0xee96: WORD '(/DAMAGE)' codep=0x224c wordp=0xeea4
// ================================================
// entry

void _ro__slash_DAMAGE_rc_() // (/DAMAGE)
{
  GetColor(BLACK);
  ERASE_dash_A(); // ERASE-A
  WECD9(); // WECD9
  WED35(); // WED35
  Push(3);
  Push(pp__n_AUX); // #AUX
  Store_2(); // !_2
  DBARS(); // DBARS
}


// ================================================
// 0xeeb6: WORD 'WEEB8' codep=0x224c wordp=0xeeb8 params=1 returns=1
// ================================================

void WEEB8() // WEEB8
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
    Push((Read16(((0x65e1+WECC0.offset) + i * 2) + 1)&0xFF) & a); // WECC0<IFIELD> I 2* + 1+ C@ J AND
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
// 0xeeee: WORD 'WEEF0' codep=0x224c wordp=0xeef0 params=1 returns=0
// ================================================

void WEEF0() // WEEF0
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
// 0xefbe: WORD 'WEFC0' codep=0x224c wordp=0xefc0 params=0 returns=0
// ================================================

void WEFC0() // WEFC0
{
  PRINT("HULL", 4); // (.")
}


// ================================================
// 0xefc9: WORD 'WEFCB' codep=0x224c wordp=0xefcb params=0 returns=0
// ================================================

void WEFCB() // WEFCB
{
  PRINT("ENGINES", 7); // (.")
}


// ================================================
// 0xefd7: WORD 'WEFD9' codep=0x224c wordp=0xefd9 params=0 returns=0
// ================================================

void WEFD9() // WEFD9
{
  PRINT("SENSORS", 7); // (.")
}


// ================================================
// 0xefe5: WORD 'WEFE7' codep=0x224c wordp=0xefe7 params=0 returns=0
// ================================================

void WEFE7() // WEFE7
{
  PRINT("COMMUNICATIONS", 14); // (.")
}


// ================================================
// 0xeffa: WORD 'WEFFC' codep=0x224c wordp=0xeffc params=0 returns=0
// ================================================

void WEFFC() // WEFFC
{
  PRINT("SHIELDS", 7); // (.")
}


// ================================================
// 0xf008: WORD 'WF00A' codep=0x224c wordp=0xf00a params=0 returns=0
// ================================================

void WF00A() // WF00A
{
  PRINT("MISSILE LAUNCHER", 16); // (.")
}


// ================================================
// 0xf01f: WORD 'WF021' codep=0x224c wordp=0xf021 params=0 returns=0
// ================================================

void WF021() // WF021
{
  PRINT("LASER CANNON", 12); // (.")
}


// ================================================
// 0xf032: WORD '.SHIP-ITEM' codep=0x4b3b wordp=0xf041
// ================================================

void DrawSHIP_dash_ITEM() // .SHIP-ITEM
{
  switch(Pop()) // .SHIP-ITEM
  {
  case 0:
    WEFC0(); // WEFC0
    break;
  case 1:
    WEFCB(); // WEFCB
    break;
  case 2:
    WEFD9(); // WEFD9
    break;
  case 3:
    WEFE7(); // WEFE7
    break;
  case 4:
    WEFFC(); // WEFFC
    break;
  case 5:
    WF00A(); // WF00A
    break;
  case 6:
    WF021(); // WF021
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf061: WORD 'WF063' codep=0x224c wordp=0xf063
// ================================================

void WF063() // WF063
{
  unsigned short int a;
  Push2Words("NULL");
  CTPOS_dot_(); // CTPOS.
  Push(Read16(regsp)); // DUP
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(": ", 2); // (.")
  Push(Pop() * 2 + (0x65e1+WECC0.offset)); //  2* WECC0<IFIELD> +
  a = Pop(); // >R
  Push(Read16(a + 1)&0xFF | (a==0x65e1+WECC0.offset?1:0)); // I 1+ C@ I WECC0<IFIELD> = OR
  if (Pop() != 0)
  {
    Push(Read16(a)&0xFF); // I C@
    WEEF0(); // WEEF0
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
// 0xf0a9: WORD 'WF0AB' codep=0x224c wordp=0xf0ab
// ================================================

void WF0AB() // WF0AB
{
  CTCR(); // CTCR
  PRINT("EFFICIENCY: ", 12); // (.")
  Push(Read16(Pop() * 2 + (0x65e1+WECC0.offset))&0xFF); //  2* WECC0<IFIELD> + C@
  Push(0);
  DrawR(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf0ce: WORD 'WF0D0' codep=0x224c wordp=0xf0d0 params=1 returns=0
// ================================================

void WF0D0() // WF0D0
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  CTCR(); // CTCR
  PRINT("CURRENT FUNCTIONALITY: ", 23); // (.")
  Push((Read16((Pop() * 2 + (0x65e1+WECC0.offset)) + 1)&0xFF) & 0x0080); //  2* WECC0<IFIELD> + 1+ C@ 0x0080 AND
  if (Pop() != 0)
  {
    PRINT("IN", 2); // (.")
  }
  PRINT("OPERATIVE", 9); // (.")
}


// ================================================
// 0xf119: WORD 'WF11B' codep=0x224c wordp=0xf11b params=1 returns=1
// ================================================

void WF11B() // WF11B
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WECBB.offset); // WECBB<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x00fb - (Read16(0x65e1+WECB6.offset)&0xFF)); // 0x00fb WECB6<IFIELD> C@ -
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
// 0xf14d: WORD 'WF14F' codep=0x224c wordp=0xf14f
// ================================================

void WF14F() // WF14F
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
// 0xf1d1: WORD 'WF1D3' codep=0x224c wordp=0xf1d3 params=1 returns=0
// ================================================

void WF1D3() // WF1D3
{
  Push(Read16(Pop() * 2 + (0x65e1+WECC0.offset))&0xFF); //  2* WECC0<IFIELD> + C@
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  _st_(); // <
  if (Pop() != 0)
  {
    CTCR(); // CTCR
    PRINT("ESTIMATED TIME FOR COMPLETE REPAIRS: ", 37); // (.")
    CTCR(); // CTCR
    WF11B(); // WF11B
    WF14F(); // WF14F
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf21f: WORD 'WF221' codep=0x224c wordp=0xf221 params=1 returns=0
// ================================================

void WF221() // WF221
{
  Push((Read16((Pop() * 2 + (0x65e1+WECC0.offset)) + 1)&0xFF) & 0x0040); //  2* WECC0<IFIELD> + 1+ C@ 0x0040 AND
  if (Pop() == 0) return;
  CTCR(); // CTCR
  PRINT("CURRENTLY UNDER REPAIR.", 23); // (.")
}


// ================================================
// 0xf253: WORD 'WF255' codep=0x224c wordp=0xf255
// ================================================

void WF255() // WF255
{
  unsigned short int a;
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  a = Pop(); // >R
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(a); // I
  WF063(); // WF063
  if (Pop() != 0)
  {
    Push(a); // I
    WF0AB(); // WF0AB
    Push(a); // I
    WF0D0(); // WF0D0
    Push(a); // I
    WF1D3(); // WF1D3
    Push(a); // I
    WF221(); // WF221
  }
  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf27f: WORD 'WF281' codep=0x224c wordp=0xf281
// ================================================

void WF281() // WF281
{
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop() * 2 + (0x65e1+WECC0.offset))&0xFF) & 0x007f); //  2* WECC0<IFIELD> + C@ 0x007f AND
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
// 0xf2ee: WORD 'WF2F0' codep=0x224c wordp=0xf2f0
// ================================================

void WF2F0() // WF2F0
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(":", 1); // (.")
  CTCR(); // CTCR
  PRINT("ALREADY UNDERGOING REPAIRS.", 27); // (.")
}


// ================================================
// 0xf31c: WORD 'WF31E' codep=0x224c wordp=0xf31e
// ================================================

void WF31E() // WF31E
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
  WECC5(); // WECC5
  Y_slash_N(); // Y/N
  Push(pp_FTRIG); // FTRIG
  ON_2(); // ON_2
  CTERASE(); // CTERASE
}


// ================================================
// 0xf368: WORD 'WF36A' codep=0x224c wordp=0xf36a
// ================================================

void WF36A() // WF36A
{
  PRINT("CEASING REPAIRS ON ", 19); // (.")
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf388: WORD 'WF38A' codep=0x224c wordp=0xf38a
// ================================================

void WF38A() // WF38A
{
  Push(Read16(regsp)); // DUP
  WF36A(); // WF36A
  Push((Pop() * 2 + (0x65e1+WECC0.offset)) + 1); //  2* WECC0<IFIELD> + 1+
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) & 0x00bf); //  C@ 0x00bf AND
  SWAP(); // SWAP
  C_ex__2(); // C!_2
}


// ================================================
// 0xf3a6: WORD 'WF3A8' codep=0x224c wordp=0xf3a8
// ================================================

void WF3A8() // WF3A8
{
  PRINT("CONTINUING REPAIRS ON ", 22); // (.")
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf3c9: WORD 'WF3CB' codep=0x224c wordp=0xf3cb
// ================================================

void WF3CB() // WF3CB
{
  PRINT("BEGINNING REPAIRS ON ", 21); // (.")
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
  Push(pp_IsREPAIR); // ?REPAIR
  ON_2(); // ON_2
}


// ================================================
// 0xf3ef: WORD 'WF3F1' codep=0x224c wordp=0xf3f1
// ================================================

void WF3F1() // WF3F1
{
  Push(Read16(regsp)); // DUP
  WF3CB(); // WF3CB
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Pop() * 2 + (0x65e1+WECC0.offset)) + 1); //  2* WECC0<IFIELD> + 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF | 0x0040); //  C@ 0x0040 OR
  SWAP(); // SWAP
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf413: WORD 'WF415' codep=0x224c wordp=0xf415
// ================================================

void WF415() // WF415
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(a); // I
  Push(pp_OCRS); // OCRS
  Store_2(); // !_2
  Push(a); // I
  Push(0x0054);
  Push(0x00b3);
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(0x001d);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(7);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
  StoreCRS(); // !CRS
  Push(a); // R>
  Push(pp_OCRS); // OCRS
  Store_2(); // !_2
}


// ================================================
// 0xf45b: WORD '(/REPAIR)' codep=0x224c wordp=0xf469
// ================================================
// entry

void _ro__slash_REPAIR_rc_() // (/REPAIR)
{
  unsigned short int a, b;
  _ro__slash_DAMAGE_rc_(); // (/DAMAGE)
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(0);
  WF415(); // WF415
  Push(0);
  WF255(); // WF255
  CTINIT(); // CTINIT
  Push(pp_FTRIG); // FTRIG
  _099(); // 099
  Push(pp_FQUIT); // FQUIT
  _099(); // 099
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
    Store_2(); // !_2
    if (Pop() != 0)
    {
      Push(Read16(pp_OCRS)); // OCRS @
      WF415(); // WF415
      Push(Read16(pp_NCRS)); // NCRS @
      Push(Read16(regsp)); // DUP
      WF415(); // WF415
      WF255(); // WF255
    }
    Push(Read16(pp_FTRIG)); // FTRIG @
    Push(Read16(pp_OCRS) * 2 + (0x65e1+WECC0.offset)); // OCRS @ 2* WECC0<IFIELD> +
    a = Pop(); // >R
    Push(Read16(a + 1)&0xFF); // I 1+ C@
    _0_gt_(); // 0>
    Push(Pop() | (a==0x65e1+WECC0.offset?1:0)); //  R> WECC0<IFIELD> = OR
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(Read16(pp_OCRS)); // OCRS @
      WF281(); // WF281
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        Push(0x0040);
        WEEB8(); // WEEB8
        if (Pop() != 0)
        {
          b = Pop(); // >R
          Push(b==Read16(pp_OCRS)?1:0); // I OCRS @ =
          if (Pop() != 0)
          {
            Push(b); // I
            WF2F0(); // WF2F0
          } else
          {
            Push(b); // I
            WF31E(); // WF31E
            if (Pop() != 0)
            {
              Push(b); // I
              WF38A(); // WF38A
              Push(Read16(pp_OCRS)); // OCRS @
              CTCR(); // CTCR
              WF3F1(); // WF3F1
            } else
            {
              Push(b); // I
              WF3A8(); // WF3A8
            }
          }
          Push(b); // R>
          Pop(); // DROP
        } else
        {
          CTERASE(); // CTERASE
          Push(Read16(pp_OCRS)); // OCRS @
          WF3F1(); // WF3F1
        }
      }
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  Push(Read16(pp_OCRS)); // OCRS @
  WF415(); // WF415
  ICLOSE(); // ICLOSE
}

// 0xf545: db 0x45 0x4e 0x47 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ENG-VOC____________________ '

