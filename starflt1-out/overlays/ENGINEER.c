// ====== OVERLAY 'ENGINEER' ======
// store offset = 0xec50
// overlay size   = 0x0910

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xec66  codep:0x744d parp:0xec66 size:0x0003 C-string:'UNK_0xec66'
//      UNK_0xec6b  codep:0x744d parp:0xec6b size:0x0003 C-string:'UNK_0xec6b'
//      UNK_0xec70  codep:0x744d parp:0xec70 size:0x0003 C-string:'UNK_0xec70'
//      UNK_0xec75  codep:0x224c parp:0xec75 size:0x0012 C-string:'UNK_0xec75'
//      UNK_0xec89  codep:0x224c parp:0xec89 size:0x0046 C-string:'UNK_0xec89'
//      UNK_0xecd1  codep:0x224c parp:0xecd1 size:0x0012 C-string:'UNK_0xecd1'
//      UNK_0xece5  codep:0x224c parp:0xece5 size:0x0075 C-string:'UNK_0xece5'
//      UNK_0xed5c  codep:0x224c parp:0xed5c size:0x009c C-string:'UNK_0xed5c'
//           DBARS  codep:0x224c parp:0xee02 size:0x0044 C-string:'DBARS'
//       (/DAMAGE)  codep:0x224c parp:0xee54 size:0x0012 C-string:'_ro__slash_DAMAGE_rc_'
//      UNK_0xee68  codep:0x224c parp:0xee68 size:0x0036 C-string:'UNK_0xee68'
//      UNK_0xeea0  codep:0x224c parp:0xeea0 size:0x00ce C-string:'UNK_0xeea0'
//      UNK_0xef70  codep:0x224c parp:0xef70 size:0x0009 C-string:'UNK_0xef70'
//      UNK_0xef7b  codep:0x224c parp:0xef7b size:0x000c C-string:'UNK_0xef7b'
//      UNK_0xef89  codep:0x224c parp:0xef89 size:0x000c C-string:'UNK_0xef89'
//      UNK_0xef97  codep:0x224c parp:0xef97 size:0x0013 C-string:'UNK_0xef97'
//      UNK_0xefac  codep:0x224c parp:0xefac size:0x000c C-string:'UNK_0xefac'
//      UNK_0xefba  codep:0x224c parp:0xefba size:0x0015 C-string:'UNK_0xefba'
//      UNK_0xefd1  codep:0x224c parp:0xefd1 size:0x0011 C-string:'UNK_0xefd1'
//      .SHIP-ITEM  codep:0x4a4f parp:0xeff1 size:0x0020 C-string:'DrawSHIP_dash_ITEM'
//      UNK_0xf013  codep:0x224c parp:0xf013 size:0x0046 C-string:'UNK_0xf013'
//      UNK_0xf05b  codep:0x224c parp:0xf05b size:0x0023 C-string:'UNK_0xf05b'
//      UNK_0xf080  codep:0x224c parp:0xf080 size:0x0049 C-string:'UNK_0xf080'
//      UNK_0xf0cb  codep:0x224c parp:0xf0cb size:0x0032 C-string:'UNK_0xf0cb'
//      UNK_0xf0ff  codep:0x224c parp:0xf0ff size:0x0082 C-string:'UNK_0xf0ff'
//      UNK_0xf183  codep:0x224c parp:0xf183 size:0x004c C-string:'UNK_0xf183'
//      UNK_0xf1d1  codep:0x224c parp:0xf1d1 size:0x0032 C-string:'UNK_0xf1d1'
//      UNK_0xf205  codep:0x224c parp:0xf205 size:0x002a C-string:'UNK_0xf205'
//      UNK_0xf231  codep:0x224c parp:0xf231 size:0x006d C-string:'UNK_0xf231'
//      UNK_0xf2a0  codep:0x224c parp:0xf2a0 size:0x002c C-string:'UNK_0xf2a0'
//      UNK_0xf2ce  codep:0x224c parp:0xf2ce size:0x004a C-string:'UNK_0xf2ce'
//      UNK_0xf31a  codep:0x224c parp:0xf31a size:0x001e C-string:'UNK_0xf31a'
//      UNK_0xf33a  codep:0x224c parp:0xf33a size:0x001c C-string:'UNK_0xf33a'
//      UNK_0xf358  codep:0x224c parp:0xf358 size:0x0021 C-string:'UNK_0xf358'
//      UNK_0xf37b  codep:0x224c parp:0xf37b size:0x0024 C-string:'UNK_0xf37b'
//      UNK_0xf3a1  codep:0x224c parp:0xf3a1 size:0x0022 C-string:'UNK_0xf3a1'
//      UNK_0xf3c5  codep:0x224c parp:0xf3c5 size:0x0046 C-string:'UNK_0xf3c5'
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
// 0xec64: WORD 'UNK_0xec66' codep=0x744d parp=0xec66
// ================================================
IFieldType UNK_0xec66 = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xec69: WORD 'UNK_0xec6b' codep=0x744d parp=0xec6b
// ================================================
IFieldType UNK_0xec6b = {ASSIGN_CREWIDX, 0x1a, 0x03};

// ================================================
// 0xec6e: WORD 'UNK_0xec70' codep=0x744d parp=0xec70
// ================================================
IFieldType UNK_0xec70 = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xec73: WORD 'UNK_0xec75' codep=0x224c parp=0xec75 params=0 returns=0
// ================================================

void UNK_0xec75() // UNK_0xec75
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xec87: WORD 'UNK_0xec89' codep=0x224c parp=0xec89 params=0 returns=0
// ================================================

void UNK_0xec89() // UNK_0xec89
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
// 0xeccf: WORD 'UNK_0xecd1' codep=0x224c parp=0xecd1 params=0 returns=0
// ================================================

void UNK_0xecd1() // UNK_0xecd1
{
  Push(0xfff9);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(0x0055);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
}


// ================================================
// 0xece3: WORD 'UNK_0xece5' codep=0x224c parp=0xece5 params=0 returns=0
// ================================================

void UNK_0xece5() // UNK_0xece5
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
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("ENGINES", 7); // (.")
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("SENSORS", 7); // (.")
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("COMM.", 5); // (.")
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("SHIELD", 6); // (.")
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("MISSILE", 7); // (.")
  UNK_0xecd1(); // UNK_0xecd1
  PRINT("LASER", 5); // (.")
}


// ================================================
// 0xed5a: WORD 'UNK_0xed5c' codep=0x224c parp=0xed5c params=1 returns=0
// ================================================

void UNK_0xed5c() // UNK_0xed5c
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  Push(Pop() * 2 + (0x63ef+UNK_0xec70.offset)); //  2* UNK_0xec70<IFIELD> +
  a = Pop(); // >R
  Push(Read16(a + 1)&0xFF); // I 1+ C@
  Push(a | (a==0x63ef+UNK_0xec70.offset?1:0)); // I I UNK_0xec70<IFIELD> = OR
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
// 0xedf8: WORD 'DBARS' codep=0x224c parp=0xee02
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
    UNK_0xed5c(); // UNK_0xed5c
    i++;
  } while(i<imax); // (LOOP)

  Push((Read16(0x63ef+UNK_0xec70.offset)&0xFF) & 0x007f); // UNK_0xec70<IFIELD> C@ 0x007f AND
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
// 0xee46: WORD '(/DAMAGE)' codep=0x224c parp=0xee54
// ================================================
// entry

void _ro__slash_DAMAGE_rc_() // (/DAMAGE)
{
  GetColor(BLACK);
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  UNK_0xec89(); // UNK_0xec89
  UNK_0xece5(); // UNK_0xece5
  Push(3);
  Push(pp__n_AUX); // #AUX
  Store_3(); // !_3
  DBARS(); // DBARS
}


// ================================================
// 0xee66: WORD 'UNK_0xee68' codep=0x224c parp=0xee68 params=1 returns=1
// ================================================

void UNK_0xee68() // UNK_0xee68
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
    Push((Read16(((0x63ef+UNK_0xec70.offset) + i * 2) + 1)&0xFF) & a); // UNK_0xec70<IFIELD> I 2* + 1+ C@ J AND
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
// 0xee9e: WORD 'UNK_0xeea0' codep=0x224c parp=0xeea0 params=1 returns=0
// ================================================

void UNK_0xeea0() // UNK_0xeea0
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a==0?1:0); // I 0=
  if (Pop() == 0) goto label1;
  PRINT("DESTROYED", 9); // (.")
  goto label2;

  label1:
  Push(a); // I
  Push(1);
  Push(0x0014);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  PRINT("CRITICALLY", 10); // (.")
  goto label4;

  label3:
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

  label4:
  PRINT(" DAMAGED", 8); // (.")

  label2:
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xef6e: WORD 'UNK_0xef70' codep=0x224c parp=0xef70 params=0 returns=0
// ================================================

void UNK_0xef70() // UNK_0xef70
{
  PRINT("HULL", 4); // (.")
}


// ================================================
// 0xef79: WORD 'UNK_0xef7b' codep=0x224c parp=0xef7b params=0 returns=0
// ================================================

void UNK_0xef7b() // UNK_0xef7b
{
  PRINT("ENGINES", 7); // (.")
}


// ================================================
// 0xef87: WORD 'UNK_0xef89' codep=0x224c parp=0xef89 params=0 returns=0
// ================================================

void UNK_0xef89() // UNK_0xef89
{
  PRINT("SENSORS", 7); // (.")
}


// ================================================
// 0xef95: WORD 'UNK_0xef97' codep=0x224c parp=0xef97 params=0 returns=0
// ================================================

void UNK_0xef97() // UNK_0xef97
{
  PRINT("COMMUNICATIONS", 14); // (.")
}


// ================================================
// 0xefaa: WORD 'UNK_0xefac' codep=0x224c parp=0xefac params=0 returns=0
// ================================================

void UNK_0xefac() // UNK_0xefac
{
  PRINT("SHIELDS", 7); // (.")
}


// ================================================
// 0xefb8: WORD 'UNK_0xefba' codep=0x224c parp=0xefba params=0 returns=0
// ================================================

void UNK_0xefba() // UNK_0xefba
{
  PRINT("MISSILE LAUNCHER", 16); // (.")
}


// ================================================
// 0xefcf: WORD 'UNK_0xefd1' codep=0x224c parp=0xefd1 params=0 returns=0
// ================================================

void UNK_0xefd1() // UNK_0xefd1
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
    UNK_0xef70(); // UNK_0xef70
    break;
  case 1:
    UNK_0xef7b(); // UNK_0xef7b
    break;
  case 2:
    UNK_0xef89(); // UNK_0xef89
    break;
  case 3:
    UNK_0xef97(); // UNK_0xef97
    break;
  case 4:
    UNK_0xefac(); // UNK_0xefac
    break;
  case 5:
    UNK_0xefba(); // UNK_0xefba
    break;
  case 6:
    UNK_0xefd1(); // UNK_0xefd1
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf011: WORD 'UNK_0xf013' codep=0x224c parp=0xf013
// ================================================

void UNK_0xf013() // UNK_0xf013
{
  unsigned short int a;
  Push2Words("NULL");
  CTPOS_dot_(); // CTPOS.
  Push(Read16(regsp)); // DUP
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(": ", 2); // (.")
  Push(Pop() * 2 + (0x63ef+UNK_0xec70.offset)); //  2* UNK_0xec70<IFIELD> +
  a = Pop(); // >R
  Push(Read16(a + 1)&0xFF); // I 1+ C@
  Push(a | (a==0x63ef+UNK_0xec70.offset?1:0)); // I I UNK_0xec70<IFIELD> = OR
  if (Pop() != 0)
  {
    Push(Read16(a)&0xFF); // I C@
    UNK_0xeea0(); // UNK_0xeea0
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
// 0xf059: WORD 'UNK_0xf05b' codep=0x224c parp=0xf05b params=1 returns=0
// ================================================

void UNK_0xf05b() // UNK_0xf05b
{
  CTCR(); // CTCR
  PRINT("EFFICIENCY: ", 12); // (.")
  Push(Read16(Pop() * 2 + (0x63ef+UNK_0xec70.offset))&0xFF); //  2* UNK_0xec70<IFIELD> + C@
  Push(0);
  DrawR(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf07e: WORD 'UNK_0xf080' codep=0x224c parp=0xf080 params=1 returns=0
// ================================================

void UNK_0xf080() // UNK_0xf080
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  CTCR(); // CTCR
  PRINT("CURRENT FUNCTIONALITY: ", 23); // (.")
  Push((Read16((Pop() * 2 + (0x63ef+UNK_0xec70.offset)) + 1)&0xFF) & 0x0080); //  2* UNK_0xec70<IFIELD> + 1+ C@ 0x0080 AND
  if (Pop() != 0)
  {
    PRINT("IN", 2); // (.")
  }
  PRINT("OPERATIVE", 9); // (.")
}


// ================================================
// 0xf0c9: WORD 'UNK_0xf0cb' codep=0x224c parp=0xf0cb params=1 returns=1
// ================================================

void UNK_0xf0cb() // UNK_0xf0cb
{
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xec6b.offset); // UNK_0xec6b<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x00fb - (Read16(0x63ef+UNK_0xec66.offset)&0xFF)); // 0x00fb UNK_0xec66<IFIELD> C@ -
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
// 0xf0fd: WORD 'UNK_0xf0ff' codep=0x224c parp=0xf0ff params=1 returns=0
// ================================================

void UNK_0xf0ff() // UNK_0xf0ff
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
// 0xf181: WORD 'UNK_0xf183' codep=0x224c parp=0xf183 params=1 returns=0
// ================================================

void UNK_0xf183() // UNK_0xf183
{
  Push(Read16(Pop() * 2 + (0x63ef+UNK_0xec70.offset))&0xFF); //  2* UNK_0xec70<IFIELD> + C@
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  _st_(); // <
  if (Pop() != 0)
  {
    CTCR(); // CTCR
    PRINT("ESTIMATED TIME FOR COMPLETE REPAIRS: ", 37); // (.")
    CTCR(); // CTCR
    UNK_0xf0cb(); // UNK_0xf0cb
    UNK_0xf0ff(); // UNK_0xf0ff
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf1cf: WORD 'UNK_0xf1d1' codep=0x224c parp=0xf1d1 params=1 returns=0
// ================================================

void UNK_0xf1d1() // UNK_0xf1d1
{
  Push((Read16((Pop() * 2 + (0x63ef+UNK_0xec70.offset)) + 1)&0xFF) & 0x0040); //  2* UNK_0xec70<IFIELD> + 1+ C@ 0x0040 AND
  if (Pop() == 0) return;
  CTCR(); // CTCR
  PRINT("CURRENTLY UNDER REPAIR.", 23); // (.")
}


// ================================================
// 0xf203: WORD 'UNK_0xf205' codep=0x224c parp=0xf205
// ================================================

void UNK_0xf205() // UNK_0xf205
{
  unsigned short int a;
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  a = Pop(); // >R
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(a); // I
  UNK_0xf013(); // UNK_0xf013
  if (Pop() != 0)
  {
    Push(a); // I
    UNK_0xf05b(); // UNK_0xf05b
    Push(a); // I
    UNK_0xf080(); // UNK_0xf080
    Push(a); // I
    UNK_0xf183(); // UNK_0xf183
    Push(a); // I
    UNK_0xf1d1(); // UNK_0xf1d1
  }
  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf22f: WORD 'UNK_0xf231' codep=0x224c parp=0xf231
// ================================================

void UNK_0xf231() // UNK_0xf231
{
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop() * 2 + (0x63ef+UNK_0xec70.offset))&0xFF) & 0x007f); //  2* UNK_0xec70<IFIELD> + C@ 0x007f AND
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
// 0xf29e: WORD 'UNK_0xf2a0' codep=0x224c parp=0xf2a0
// ================================================

void UNK_0xf2a0() // UNK_0xf2a0
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(":", 1); // (.")
  CTCR(); // CTCR
  PRINT("ALREADY UNDERGOING REPAIRS.", 27); // (.")
}


// ================================================
// 0xf2cc: WORD 'UNK_0xf2ce' codep=0x224c parp=0xf2ce
// ================================================

void UNK_0xf2ce() // UNK_0xf2ce
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
  UNK_0xec75(); // UNK_0xec75
  Y_slash_N(); // Y/N
  Push(pp_FTRIG); // FTRIG
  ON_3(); // ON_3
  CTERASE(); // CTERASE
}


// ================================================
// 0xf318: WORD 'UNK_0xf31a' codep=0x224c parp=0xf31a
// ================================================

void UNK_0xf31a() // UNK_0xf31a
{
  PRINT("CEASING REPAIRS ON ", 19); // (.")
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf338: WORD 'UNK_0xf33a' codep=0x224c parp=0xf33a
// ================================================

void UNK_0xf33a() // UNK_0xf33a
{
  Push(Read16(regsp)); // DUP
  UNK_0xf31a(); // UNK_0xf31a
  Push((Pop() * 2 + (0x63ef+UNK_0xec70.offset)) + 1); //  2* UNK_0xec70<IFIELD> + 1+
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) & 0x00bf); //  C@ 0x00bf AND
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xf356: WORD 'UNK_0xf358' codep=0x224c parp=0xf358
// ================================================

void UNK_0xf358() // UNK_0xf358
{
  PRINT("CONTINUING REPAIRS ON ", 22); // (.")
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf379: WORD 'UNK_0xf37b' codep=0x224c parp=0xf37b
// ================================================

void UNK_0xf37b() // UNK_0xf37b
{
  PRINT("BEGINNING REPAIRS ON ", 21); // (.")
  DrawSHIP_dash_ITEM(); // .SHIP-ITEM case
  PRINT(".", 1); // (.")
  Push(pp_IsREPAIR); // ?REPAIR
  ON_3(); // ON_3
}


// ================================================
// 0xf39f: WORD 'UNK_0xf3a1' codep=0x224c parp=0xf3a1
// ================================================

void UNK_0xf3a1() // UNK_0xf3a1
{
  Push(Read16(regsp)); // DUP
  UNK_0xf37b(); // UNK_0xf37b
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Pop() * 2 + (0x63ef+UNK_0xec70.offset)) + 1); //  2* UNK_0xec70<IFIELD> + 1+
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF | 0x0040); //  C@ 0x0040 OR
  SWAP(); // SWAP
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3c3: WORD 'UNK_0xf3c5' codep=0x224c parp=0xf3c5 params=1 returns=0
// ================================================

void UNK_0xf3c5() // UNK_0xf3c5
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
  UNK_0xf3c5(); // UNK_0xf3c5
  Push(0);
  UNK_0xf205(); // UNK_0xf205
  CTINIT(); // CTINIT
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S

  label6:
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
    UNK_0xf3c5(); // UNK_0xf3c5
    Push(Read16(pp_NCRS)); // NCRS @
    Push(Read16(regsp)); // DUP
    UNK_0xf3c5(); // UNK_0xf3c5
    UNK_0xf205(); // UNK_0xf205
  }
  Push(Read16(pp_FTRIG)); // FTRIG @
  Push(Read16(pp_OCRS) * 2 + (0x63ef+UNK_0xec70.offset)); // OCRS @ 2* UNK_0xec70<IFIELD> +
  a = Pop(); // >R
  Push(Read16(a + 1)&0xFF); // I 1+ C@
  _0_gt_(); // 0>
  Push(Pop() & (a | (a==0x63ef+UNK_0xec70.offset?1:0))); //  R> R> UNK_0xec70<IFIELD> = OR AND
  if (Pop() == 0) goto label2;
  Push(Read16(pp_OCRS)); // OCRS @
  UNK_0xf231(); // UNK_0xf231
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(0x0040);
    UNK_0xee68(); // UNK_0xee68
    if (Pop() != 0)
    {
      b = Pop(); // >R
      Push(b); // I
      Push(b==Read16(pp_OCRS)?1:0); // I OCRS @ =
      if (Pop() != 0)
      {
        Push(b); // I
        UNK_0xf2a0(); // UNK_0xf2a0
      } else
      {
        Push(b); // I
        UNK_0xf2ce(); // UNK_0xf2ce
        if (Pop() != 0)
        {
          Push(b); // I
          UNK_0xf33a(); // UNK_0xf33a
          Push(Read16(pp_OCRS)); // OCRS @
          CTCR(); // CTCR
          UNK_0xf3a1(); // UNK_0xf3a1
        } else
        {
          Push(b); // I
          UNK_0xf358(); // UNK_0xf358
        }
      }
      Push(b); // R>
      Pop(); // DROP
    } else
    {
      CTERASE(); // CTERASE
      Push(Read16(pp_OCRS)); // OCRS @
      UNK_0xf3a1(); // UNK_0xf3a1
    }
  }

  label2:
  IsTRIG(); // ?TRIG
  if (Pop() == 0) goto label6;
  Push(Read16(pp_OCRS)); // OCRS @
  UNK_0xf3c5(); // UNK_0xf3c5
  ICLOSE(); // ICLOSE
}

// 0xf4f5: db 0x45 0x4e 0x47 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x45 0x4e 0x47 0x49 0x4e 0x45 0x45 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x5f 0x5f 0x31 0x33 0x39 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x4d 0x49 0x53 0x43 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'ENG-VOC_________________________ ENGINEER-------------------- )__139_____________________for MISC---------- '

