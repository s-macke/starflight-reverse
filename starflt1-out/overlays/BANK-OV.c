// ====== OVERLAY 'BANK-OV' ======
// store offset = 0xef70
// overlay size   = 0x05f0

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//            TRIM  codep:0x224c parp:0xef86 size:0x0008 C-string:'TRIM'
//          3RIGHT  codep:0x2214 parp:0xef90 size:0x0002 C-string:'_3RIGHT'
//           3LEFT  codep:0x2214 parp:0xef94 size:0x0002 C-string:'_3LEFT'
//           3PLUS  codep:0x2214 parp:0xef98 size:0x0002 C-string:'_3PLUS'
//          2RIGHT  codep:0x2214 parp:0xef9c size:0x0002 C-string:'_2RIGHT'
//           2LEFT  codep:0x2214 parp:0xefa0 size:0x0002 C-string:'_2LEFT'
//   MASTERBALANCE  codep:0x744d parp:0xefa4 size:0x0003 C-string:'MASTERBALANCE'
//         BALANCE  codep:0x744d parp:0xefa9 size:0x0003 C-string:'BALANCE'
//           TFLAG  codep:0x744d parp:0xefae size:0x0003 C-string:'TFLAG'
//       TRANSTEXT  codep:0x73ea parp:0xefb3 size:0x0006 C-string:'TRANSTEXT'
//           T-AMT  codep:0x744d parp:0xefbb size:0x0003 C-string:'T_dash_AMT'
//          T-DATE  codep:0x744d parp:0xefc0 size:0x0003 C-string:'T_dash_DATE'
//        SET-BANK  codep:0x224c parp:0xefc5 size:0x0006 C-string:'SET_dash_BANK'
//          !TFLAG  codep:0x224c parp:0xefd6 size:0x000c C-string:'StoreTFLAG'
//       D@BALANCE  codep:0x224c parp:0xeff0 size:0x000a C-string:'GetDBALANCE'
//       D!BALANCE  codep:0x224c parp:0xf008 size:0x000a C-string:'StoreDBALANCE'
//        ?BALANCE  codep:0x224c parp:0xf01f size:0x0008 C-string:'IsBALANCE'
//    INIT-BALANCE  codep:0x224c parp:0xf038 size:0x000e C-string:'INIT_dash_BALANCE'
//        TRANSACT  codep:0x224c parp:0xf053 size:0x0072 C-string:'TRANSACT'
//            INT%  codep:0x224c parp:0xf0ce size:0x0042 C-string:'INT_pe_'
//            DOTS  codep:0x1d29 parp:0xf112 size:0x0014 C-string:'DOTS'
//           .DOTS  codep:0x224c parp:0xf128 size:0x0028 C-string:'DrawDOTS'
//          .BDATE  codep:0x224c parp:0xf152 size:0x0042 C-string:'DrawBDATE'
//           .$AMT  codep:0x224c parp:0xf196 size:0x0042 C-string:'Draw_do_AMT'
//          ?.MESS  codep:0x224c parp:0xf1da size:0x0006 C-string:'Is_dot_MESS'
//          BTITLE  codep:0x224c parp:0xf1e2 size:0x008b C-string:'BTITLE'
//         BOFRAME  codep:0x224c parp:0xf26f size:0x013a C-string:'BOFRAME'
//           BINFO  codep:0x224c parp:0xf3ab size:0x00b7 C-string:'BINFO'
//         BSCREEN  codep:0x224c parp:0xf464 size:0x000c C-string:'BSCREEN'
//           BMESS  codep:0x224c parp:0xf472 size:0x0038 C-string:'BMESS'
//        .BALANCE  codep:0x224c parp:0xf4ac size:0x0016 C-string:'DrawBALANCE'
//           .BANK  codep:0x224c parp:0xf4c4 size:0x001e C-string:'DrawBANK'
//        (U-BANK)  codep:0x224c parp:0xf4ef size:0x0000 C-string:'_ro_U_dash_BANK_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_PORTDAT; // PORTDAT
extern const unsigned short int pp_STARDATE; // STARDATE
void DABS(); // DABS
void M_star__slash_(); // M*/
void D_st_(); // D<
void _n_(); // #
void _n__gt_(); // #>
void _st__n_(); // <#
void Draw(); // .
void D_dot_R(); // D.R
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_gt_(); // D>
void DMIN(); // DMIN
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex_(); // +!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void COVER(); // COVER
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIRST(); // IFIRST
void ILAST(); // ILAST
void IDELETE(); // IDELETE
void _star_CREATE(); // *CREATE
void StoreCOLOR(); // !COLOR
void _gt_DISPLAY(); // >DISPLAY
void _gt_HIDDEN(); // >HIDDEN
void SCR_dash_RES(); // SCR-RES
void DARK(); // DARK
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_3FONT(); // >3FONT
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void _do__dot_(); // $.
void CTINIT(); // CTINIT
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void SWAP(); // SWAP
void _slash_MOD(); // /MOD
void _dash_(); // -
void D_plus_(); // D+
void LPLOT(); // LPLOT
void LLINE(); // LLINE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_DOTS = 0xf112; // DOTS size: 20
// {0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44}


const unsigned short int cc__3RIGHT = 0xef90; // 3RIGHT
const unsigned short int cc__3LEFT = 0xef94; // 3LEFT
const unsigned short int cc__3PLUS = 0xef98; // 3PLUS
const unsigned short int cc__2RIGHT = 0xef9c; // 2RIGHT
const unsigned short int cc__2LEFT = 0xefa0; // 2LEFT


// 0xef82: db 0x5c 0x00 '\ '

// ================================================
// 0xef84: WORD 'TRIM' codep=0x224c parp=0xef86
// ================================================

void TRIM() // TRIM
{
  Push(0xbdba); // probable 'OVTRIMS'
  MODULE(); // MODULE
}


// ================================================
// 0xef8e: WORD '3RIGHT' codep=0x2214 parp=0xef90
// ================================================
// 0xef90: dw 0x0000

// ================================================
// 0xef92: WORD '3LEFT' codep=0x2214 parp=0xef94
// ================================================
// 0xef94: dw 0x0001

// ================================================
// 0xef96: WORD '3PLUS' codep=0x2214 parp=0xef98
// ================================================
// 0xef98: dw 0x0002

// ================================================
// 0xef9a: WORD '2RIGHT' codep=0x2214 parp=0xef9c
// ================================================
// 0xef9c: dw 0x0003

// ================================================
// 0xef9e: WORD '2LEFT' codep=0x2214 parp=0xefa0
// ================================================
// 0xefa0: dw 0x0004

// ================================================
// 0xefa2: WORD 'MASTERBALANCE' codep=0x744d parp=0xefa4
// ================================================
IFieldType MASTERBALANCE = {0x0d, 0x0b, 0x04};

// ================================================
// 0xefa7: WORD 'BALANCE' codep=0x744d parp=0xefa9
// ================================================
IFieldType BALANCE = {0x0d, 0x0f, 0x04};

// ================================================
// 0xefac: WORD 'TFLAG' codep=0x744d parp=0xefae
// ================================================
IFieldType TFLAG = {0x0d, 0x13, 0x01};

// ================================================
// 0xefb1: WORD 'TRANSTEXT' codep=0x73ea parp=0xefb3
// ================================================
LoadDataType TRANSTEXT = {0x0e, 0x00, 0x13, 0x13, 0x6480};

// ================================================
// 0xefb9: WORD 'T-AMT' codep=0x744d parp=0xefbb
// ================================================
IFieldType T_dash_AMT = {0x0e, 0x0b, 0x04};

// ================================================
// 0xefbe: WORD 'T-DATE' codep=0x744d parp=0xefc0
// ================================================
IFieldType T_dash_DATE = {0x0e, 0x0f, 0x02};

// ================================================
// 0xefc3: WORD 'SET-BANK' codep=0x224c parp=0xefc5
// ================================================

void SET_dash_BANK() // SET-BANK
{
  Push2Words("*BANK");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xefcb: WORD '!TFLAG' codep=0x224c parp=0xefd6
// ================================================
// entry

void StoreTFLAG() // !TFLAG
{
  SET_dash_BANK(); // SET-BANK
  Push(1);
  Push(0x63ef+TFLAG.offset); // IFIELD
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefe2: WORD 'D@BALANCE' codep=0x224c parp=0xeff0
// ================================================
// entry

void GetDBALANCE() // D@BALANCE
{
  SET_dash_BANK(); // SET-BANK
  Push(0x63ef+BALANCE.offset); // IFIELD
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeffa: WORD 'D!BALANCE' codep=0x224c parp=0xf008
// ================================================
// entry

void StoreDBALANCE() // D!BALANCE
{
  SET_dash_BANK(); // SET-BANK
  Push(0x63ef+BALANCE.offset); // IFIELD
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf012: WORD '?BALANCE' codep=0x224c parp=0xf01f
// ================================================
// entry

void IsBALANCE() // ?BALANCE
{
  GetDBALANCE(); // D@BALANCE
  D_gt_(); // D>
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xf027: WORD 'INIT-BALANCE' codep=0x224c parp=0xf038
// ================================================
// entry

void INIT_dash_BALANCE() // INIT-BALANCE
{
  SET_dash_BANK(); // SET-BANK
  Push(0x63ef+MASTERBALANCE.offset); // IFIELD
  _2_at_(); // 2@
  Push(0x63ef+BALANCE.offset); // IFIELD
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf046: WORD 'TRANSACT' codep=0x224c parp=0xf053
// ================================================
// entry

void TRANSACT() // TRANSACT
{
  unsigned short int i, imax;
  SET_dash_BANK(); // SET-BANK
  Push(0x63ef+TFLAG.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x000e);
    SWAP(); // SWAP
    Push(1);
    _star_CREATE(); // *CREATE
    IFIRST(); // IFIRST
    Push(0);
    Push(9);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
      if (Pop() != 0)
      {
        Push(Pop()+1); // 1+
        imax = i; // LEAVE
      }
      i++;
    } while(i<imax); // (LOOP)

    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() != 0)
    {
      IFIRST(); // IFIRST
      IDELETE(); // IDELETE
    }
    ILAST(); // ILAST
    COVER(); // COVER
    SET_dash_CURRENT(); // SET-CURRENT
    Push(pp_STARDATE); // STARDATE
    Push(Read16(Pop())); // @
    Push(0x63ef+MASTERBALANCE.offset); // IFIELD
    _2_at_(); // 2@
    Push(0x63ef+BALANCE.offset); // IFIELD
    _2_at_(); // 2@
    D_dash_(); // D-
    ICLOSE(); // ICLOSE
    Push(0x63ef+T_dash_AMT.offset); // IFIELD
    StoreD(); // D!
    Push(0x63ef+T_dash_DATE.offset); // IFIELD
    Store_3(); // !_3
    ICLOSE(); // ICLOSE
    Push(0x63ef+BALANCE.offset); // IFIELD
    _2_at_(); // 2@
    Push(0x63ef+MASTERBALANCE.offset); // IFIELD
    StoreD(); // D!
    Push(0);
    Push(0x63ef+TFLAG.offset); // IFIELD
    C_ex_(); // C!
  } else
  {
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0c5: WORD 'INT%' codep=0x224c parp=0xf0ce
// ================================================
// entry

void INT_pe_() // INT%
{
  INIT_dash_BALANCE(); // INIT-BALANCE
  GetDBALANCE(); // D@BALANCE
  Push(0x000c);
  Push(0x0064);
  M_star__slash_(); // M*/
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp_PORTDAT); // PORTDAT
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0x012c);
  M_star__slash_(); // M*/
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    return;
  }
  GetDBALANCE(); // D@BALANCE
  D_plus_(); // D+
  StoreDBALANCE(); // D!BALANCE
  StoreTFLAG(); // !TFLAG
  Push(5);
  TRANSACT(); // TRANSACT
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp_PORTDAT); // PORTDAT
  Store_3(); // !_3
}


// ================================================
// 0xf110: WORD 'DOTS' codep=0x1d29 parp=0xf112
// ================================================
// 0xf112: db 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 'DDDDDDDDDDDDDDDDDDDD'

// ================================================
// 0xf126: WORD '.DOTS' codep=0x224c parp=0xf128
// ================================================

void DrawDOTS() // .DOTS
{
  Push(0xfffc);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(1);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(pp_DOTS); // DOTS
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  BLT(); // BLT
  Push(4);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
}


// ================================================
// 0xf150: WORD '.BDATE' codep=0x224c parp=0xf152
// ================================================

void DrawBDATE() // .BDATE
{
  Push(0x63ef+T_dash_DATE.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x120c);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(0);
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("-", 1); // (.")
  Push(0);
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("-", 1); // (.")
  Draw(); // .
}


// ================================================
// 0xf194: WORD '.$AMT' codep=0x224c parp=0xf196
// ================================================

void Draw_do_AMT() // .$AMT
{
  unsigned short int a;
  Push(0x63ef+T_dash_AMT.offset); // IFIELD
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  _2DUP(); // 2DUP
  DABS(); // DABS
  Push(0x423f); Push(0x000f);
  DMIN(); // DMIN
  Push(6);
  D_dot_R(); // D.R
  Push(0);
  Push(0);
  D_st_(); // D<
  if (Pop() != 0)
  {
    Push(0x000b);
  } else
  {
    Push(0x000d);
  }
  a = Pop(); // >R
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(a); // R>
  Push(Pop() * Pop()); // *
  Push(0x0020);
  Push(Pop() + Pop()); // +
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xf1d8: WORD '?.MESS' codep=0x224c parp=0xf1da
// ================================================

void Is_dot_MESS() // ?.MESS
{
  LoadData(TRANSTEXT); // from 'BANK-TRANS  '
  _do__dot_(); // $.
}


// ================================================
// 0xf1e0: WORD 'BTITLE' codep=0x224c parp=0xf1e2
// ================================================

void BTITLE() // BTITLE
{
  Push(0x0032);
  Push(0x00be);
  Push(0x0032);
  Push(0x00b2);
  LLINE(); // LLINE
  Push(0x006f);
  Push(0x00be);
  Push(0x006f);
  Push(0x00b2);
  LLINE(); // LLINE
  Push(0x0034);
  Push(0x00c0);
  Push(0x006d);
  Push(0x00c0);
  LLINE(); // LLINE
  Push(0x0034);
  Push(0x00b0);
  Push(0x006d);
  Push(0x00b0);
  LLINE(); // LLINE
  Push(0x0032);
  Push(0x00c0);
  Push(Read16(cc__3PLUS)); // 3PLUS
  Push(0x0032);
  Push(0x00b2);
  Push(Read16(cc__3PLUS)); // 3PLUS
  Push(0x006d);
  Push(0x00c0);
  Push(Read16(cc__3PLUS)); // 3PLUS
  Push(0x006d);
  Push(0x00b2);
  Push(Read16(cc__3PLUS)); // 3PLUS
  Push(4);
  TRIM(); // TRIM
  CTINIT(); // CTINIT
  Push(0x0046);
  Push(0x00bc);
  POS_dot_(); // POS.
  _gt_3FONT(); // >3FONT
  PRINT("BANK", 4); // (.")
}


// ================================================
// 0xf26d: WORD 'BOFRAME' codep=0x224c parp=0xf26f
// ================================================

void BOFRAME() // BOFRAME
{
  unsigned short int i, imax;
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(1);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x00c4);
    Push(1);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(3);
    LLINE(); // LLINE
    Push(0x009c);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x00c4);
    Push(0x009c);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(3);
    LLINE(); // LLINE
    Push(0x009c);
    Push(1);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(3);
    Push(1);
    Push(i); // I
    Push(Pop() + Pop()); // +
    LLINE(); // LLINE
    Push(0x009c);
    Push(0x00c4);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(3);
    Push(0x00c4);
    Push(i); // I
    Push(Pop() + Pop()); // +
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(5);
  Push(0x00c2);
  Push(5);
  Push(0x0012);
  LLINE(); // LLINE
  Push(0x0012);
  Push(0x0012);
  Push(6);
  Push(0x0012);
  LLINE(); // LLINE
  Push(0x0012);
  Push(0x0011);
  Push(0x0012);
  Push(5);
  LLINE(); // LLINE
  Push(0x0099);
  Push(5);
  Push(0x0013);
  Push(5);
  LLINE(); // LLINE
  Push(0x009a);
  Push(5);
  Push(0x009a);
  Push(0x00c2);
  LLINE(); // LLINE
  Push(0x0099);
  Push(0x00c2);
  Push(6);
  Push(0x00c2);
  LLINE(); // LLINE
  Push(2);
  Push(0x00c5);
  Push(Read16(cc__3LEFT)); // 3LEFT
  Push(0x009b);
  Push(0x00c5);
  Push(Read16(cc__3RIGHT)); // 3RIGHT
  Push(2);
  Push(4);
  Push(Read16(cc__3RIGHT)); // 3RIGHT
  Push(0x009b);
  Push(4);
  Push(Read16(cc__3LEFT)); // 3LEFT
  Push(0x0012);
  Push(6);
  Push(Read16(cc__2RIGHT)); // 2RIGHT
  Push(5);
  Push(0x0013);
  Push(Read16(cc__2RIGHT)); // 2RIGHT
  Push(0x0011);
  Push(0x0012);
  Push(Read16(cc__2RIGHT)); // 2RIGHT
  Push(0x0012);
  Push(6);
  Push(Read16(cc__2RIGHT)); // 2RIGHT
  Push(0x0099);
  Push(6);
  Push(Read16(cc__2LEFT)); // 2LEFT
  Push(0x0012);
  Push(6);
  Push(Read16(cc__2RIGHT)); // 2RIGHT
  Push(0x0099);
  Push(0x00c2);
  Push(Read16(cc__2RIGHT)); // 2RIGHT
  Push(5);
  Push(0x00c2);
  Push(Read16(cc__2LEFT)); // 2LEFT
  Push(0x000c);
  TRIM(); // TRIM
  Push(6);
  Push(0x000f);
  SetColor("DK-BLUE");
  Draw1LOGO(); // .1LOGO
}


// ================================================
// 0xf3a9: WORD 'BINFO' codep=0x224c parp=0xf3ab
// ================================================

void BINFO() // BINFO
{
  CTINIT(); // CTINIT
  Push(0x0013);
  Push(0x00a7);
  POS_dot_(); // POS.
  PRINT("DATE", 4); // (.")
  Push(0x003e);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("TRANSACTIONS", 12); // (.")
  Push(0x0085);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("AMT", 3); // (.")
  Push(0x0013);
  Push(0x00a1);
  Push(0x0021);
  Push(0x00a1);
  LLINE(); // LLINE
  Push(0x003e);
  Push(0x00a1);
  Push(0x006c);
  Push(0x00a1);
  LLINE(); // LLINE
  Push(0x0085);
  Push(0x00a1);
  Push(0x0090);
  Push(0x00a1);
  LLINE(); // LLINE
  Push(0x0090);
  Push(0x00a3);
  LPLOT(); // LPLOT
  Push(0x0026);
  Push(0x002d);
  POS_dot_(); // POS.
  PRINT("( INTEREST RATE: 12% )", 22); // (.")
  Push(0x000f);
  Push(0x001d);
  POS_dot_(); // POS.
  PRINT("BALANCE", 7); // (.")
  Push(0x0077);
  DrawDOTS(); // .DOTS
}


// ================================================
// 0xf462: WORD 'BSCREEN' codep=0x224c parp=0xf464
// ================================================

void BSCREEN() // BSCREEN
{
  DARK(); // DARK
  SetColor("DK-BLUE");
  BOFRAME(); // BOFRAME
  BTITLE(); // BTITLE
  BINFO(); // BINFO
}


// ================================================
// 0xf470: WORD 'BMESS' codep=0x224c parp=0xf472
// ================================================

void BMESS() // BMESS
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0095);
  SWAP(); // SWAP
  _dash_(); // -
  Push(7);
  SWAP(); // SWAP
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  DrawBDATE(); // .BDATE
  Push(0x0032);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Is_dot_MESS(); // ?.MESS
  Push(0x007c);
  DrawDOTS(); // .DOTS
  Push(0x007d);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Draw_do_AMT(); // .$AMT
}


// ================================================
// 0xf4aa: WORD '.BALANCE' codep=0x224c parp=0xf4ac
// ================================================

void DrawBALANCE() // .BALANCE
{
  Push(0x0079);
  Push(0x001d);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  Push(0x63ef+MASTERBALANCE.offset); // IFIELD
  _2_at_(); // 2@
  Push(7);
  D_dot_R(); // D.R
}


// ================================================
// 0xf4c2: WORD '.BANK' codep=0x224c parp=0xf4c4
// ================================================

void DrawBANK() // .BANK
{
  SET_dash_BANK(); // SET-BANK
  IOPEN(); // IOPEN
  Push(0);
  do
  {
    Push(Read16(regsp)); // DUP
    BMESS(); // BMESS
    Push(Pop()+1); // 1+
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  Pop(); // DROP
  ICLOSE(); // ICLOSE
  DrawBALANCE(); // .BALANCE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e2: WORD '(U-BANK)' codep=0x224c parp=0xf4ef
// ================================================
// entry

void _ro_U_dash_BANK_rc_() // (U-BANK)
{
  _gt_HIDDEN(); // >HIDDEN
  BSCREEN(); // BSCREEN
  DrawBANK(); // .BANK
  CTINIT(); // CTINIT
  Push(0x0028);
  Push(0x000e);
  POS_dot_(); // POS.
  PRINT("PRESS SPACEBAR TO EXIT", 22); // (.")
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); Pop(); // 2DROP
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
}

// 0xf52a: db 0x42 0x41 0x4e 0x4b 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x42 0x41 0x4e 0x4b 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'BANK-VOC________________________for BANK-------------- '

