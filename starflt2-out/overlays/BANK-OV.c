// ====== OVERLAY 'BANK-OV' ======
// store offset = 0xef80
// overlay size   = 0x05e0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xef96  codep:0x224c parp:0xef96 size:0x0008 C-string:'UNK_0xef96'
//      UNK_0xefa0  codep:0x2214 parp:0xefa0 size:0x0002 C-string:'UNK_0xefa0'
//      UNK_0xefa4  codep:0x2214 parp:0xefa4 size:0x0002 C-string:'UNK_0xefa4'
//      UNK_0xefa8  codep:0x2214 parp:0xefa8 size:0x0002 C-string:'UNK_0xefa8'
//      UNK_0xefac  codep:0x2214 parp:0xefac size:0x0002 C-string:'UNK_0xefac'
//      UNK_0xefb0  codep:0x2214 parp:0xefb0 size:0x0002 C-string:'UNK_0xefb0'
//      UNK_0xefb4  codep:0x7420 parp:0xefb4 size:0x0003 C-string:'UNK_0xefb4'
//      UNK_0xefb9  codep:0x7420 parp:0xefb9 size:0x0003 C-string:'UNK_0xefb9'
//      UNK_0xefbe  codep:0x7420 parp:0xefbe size:0x0003 C-string:'UNK_0xefbe'
//      UNK_0xefc3  codep:0x7394 parp:0xefc3 size:0x0006 C-string:'UNK_0xefc3'
//      UNK_0xefcb  codep:0x7420 parp:0xefcb size:0x0003 C-string:'UNK_0xefcb'
//      UNK_0xefd0  codep:0x7420 parp:0xefd0 size:0x0003 C-string:'UNK_0xefd0'
//      UNK_0xefd5  codep:0x224c parp:0xefd5 size:0x0006 C-string:'UNK_0xefd5'
//          !TFLAG  codep:0x224c parp:0xefe6 size:0x000c C-string:'StoreTFLAG'
//       D@BALANCE  codep:0x224c parp:0xf000 size:0x000a C-string:'GetDBALANCE'
//       D!BALANCE  codep:0x224c parp:0xf018 size:0x000a C-string:'StoreDBALANCE'
//        ?BALANCE  codep:0x224c parp:0xf02f size:0x0008 C-string:'IsBALANCE'
//    INIT-BALANCE  codep:0x224c parp:0xf048 size:0x000e C-string:'INIT_dash_BALANCE'
//        TRANSACT  codep:0x224c parp:0xf063 size:0x0072 C-string:'TRANSACT'
//            INT%  codep:0x224c parp:0xf0de size:0x0042 C-string:'INT_pe_'
//      UNK_0xf122  codep:0x1d29 parp:0xf122 size:0x0014 C-string:'UNK_0xf122'
//      UNK_0xf138  codep:0x224c parp:0xf138 size:0x0028 C-string:'UNK_0xf138'
//      UNK_0xf162  codep:0x224c parp:0xf162 size:0x0042 C-string:'UNK_0xf162'
//      UNK_0xf1a6  codep:0x224c parp:0xf1a6 size:0x0042 C-string:'UNK_0xf1a6'
//      UNK_0xf1ea  codep:0x224c parp:0xf1ea size:0x0006 C-string:'UNK_0xf1ea'
//      UNK_0xf1f2  codep:0x224c parp:0xf1f2 size:0x008b C-string:'UNK_0xf1f2'
//      UNK_0xf27f  codep:0x224c parp:0xf27f size:0x013a C-string:'UNK_0xf27f'
//      UNK_0xf3bb  codep:0x224c parp:0xf3bb size:0x00b7 C-string:'UNK_0xf3bb'
//      UNK_0xf474  codep:0x224c parp:0xf474 size:0x000c C-string:'UNK_0xf474'
//      UNK_0xf482  codep:0x224c parp:0xf482 size:0x0038 C-string:'UNK_0xf482'
//      UNK_0xf4bc  codep:0x224c parp:0xf4bc size:0x0016 C-string:'UNK_0xf4bc'
//      UNK_0xf4d4  codep:0x224c parp:0xf4d4 size:0x001e C-string:'UNK_0xf4d4'
//        (U-BANK)  codep:0x224c parp:0xf4ff size:0x0000 C-string:'_ro_U_dash_BANK_rc_'

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
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int user_CONTEXT_1; // CONTEXT_1
extern Color DK_dash_BLUE; // DK-BLUE
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
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void COVER(); // COVER
void SET_dash_CUR(); // SET-CUR
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
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_3FONT(); // >3FONT
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SCR_dash_RES(); // SCR-RES
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
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xf122 = 0xf122; // UNK_0xf122 size: 20
// {0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44}


const unsigned short int cc_UNK_0xefa0 = 0xefa0; // UNK_0xefa0
const unsigned short int cc_UNK_0xefa4 = 0xefa4; // UNK_0xefa4
const unsigned short int cc_UNK_0xefa8 = 0xefa8; // UNK_0xefa8
const unsigned short int cc_UNK_0xefac = 0xefac; // UNK_0xefac
const unsigned short int cc_UNK_0xefb0 = 0xefb0; // UNK_0xefb0


// 0xef92: db 0x5d 0x00 '] '

// ================================================
// 0xef94: WORD 'UNK_0xef96' codep=0x224c parp=0xef96 params=0 returns=0
// ================================================

void UNK_0xef96() // UNK_0xef96
{
  Push(0xb752); // probable 'OVTRIM_1'
  MODULE(); // MODULE
}


// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x2214 parp=0xefa0
// ================================================
// 0xefa0: dw 0x0000

// ================================================
// 0xefa2: WORD 'UNK_0xefa4' codep=0x2214 parp=0xefa4
// ================================================
// 0xefa4: dw 0x0001

// ================================================
// 0xefa6: WORD 'UNK_0xefa8' codep=0x2214 parp=0xefa8
// ================================================
// 0xefa8: dw 0x0002

// ================================================
// 0xefaa: WORD 'UNK_0xefac' codep=0x2214 parp=0xefac
// ================================================
// 0xefac: dw 0x0003

// ================================================
// 0xefae: WORD 'UNK_0xefb0' codep=0x2214 parp=0xefb0
// ================================================
// 0xefb0: dw 0x0004

// ================================================
// 0xefb2: WORD 'UNK_0xefb4' codep=0x7420 parp=0xefb4
// ================================================
IFieldType UNK_0xefb4 = {BANKIDX, 0x0b, 0x04};

// ================================================
// 0xefb7: WORD 'UNK_0xefb9' codep=0x7420 parp=0xefb9
// ================================================
IFieldType UNK_0xefb9 = {BANKIDX, 0x0f, 0x04};

// ================================================
// 0xefbc: WORD 'UNK_0xefbe' codep=0x7420 parp=0xefbe
// ================================================
IFieldType UNK_0xefbe = {BANKIDX, 0x13, 0x01};

// ================================================
// 0xefc1: WORD 'UNK_0xefc3' codep=0x7394 parp=0xefc3
// ================================================
LoadDataType UNK_0xefc3 = {BANK_TRANSIDX, 0x00, 0x13, 0x13, 0x6abd};

// ================================================
// 0xefc9: WORD 'UNK_0xefcb' codep=0x7420 parp=0xefcb
// ================================================
IFieldType UNK_0xefcb = {BANK_TRANSIDX, 0x0b, 0x04};

// ================================================
// 0xefce: WORD 'UNK_0xefd0' codep=0x7420 parp=0xefd0
// ================================================
IFieldType UNK_0xefd0 = {BANK_TRANSIDX, 0x0f, 0x02};

// ================================================
// 0xefd3: WORD 'UNK_0xefd5' codep=0x224c parp=0xefd5 params=0 returns=0
// ================================================

void UNK_0xefd5() // UNK_0xefd5
{
  Push2Words("*BANK");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xefdb: WORD '!TFLAG' codep=0x224c parp=0xefe6 params=0 returns=0
// ================================================
// entry

void StoreTFLAG() // !TFLAG
{
  UNK_0xefd5(); // UNK_0xefd5
  Push(1);
  Push(0x65e1+UNK_0xefbe.offset); // UNK_0xefbe<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeff2: WORD 'D@BALANCE' codep=0x224c parp=0xf000 params=0 returns=2
// ================================================
// entry

void GetDBALANCE() // D@BALANCE
{
  UNK_0xefd5(); // UNK_0xefd5
  Push(0x65e1+UNK_0xefb9.offset); // UNK_0xefb9<IFIELD>
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf00a: WORD 'D!BALANCE' codep=0x224c parp=0xf018 params=2 returns=0
// ================================================
// entry

void StoreDBALANCE() // D!BALANCE
{
  UNK_0xefd5(); // UNK_0xefd5
  Push(0x65e1+UNK_0xefb9.offset); // UNK_0xefb9<IFIELD>
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf022: WORD '?BALANCE' codep=0x224c parp=0xf02f params=2 returns=1
// ================================================
// entry

void IsBALANCE() // ?BALANCE
{
  GetDBALANCE(); // D@BALANCE
  D_gt_(); // D>
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xf037: WORD 'INIT-BALANCE' codep=0x224c parp=0xf048 params=0 returns=0
// ================================================
// entry

void INIT_dash_BALANCE() // INIT-BALANCE
{
  UNK_0xefd5(); // UNK_0xefd5
  Push(0x65e1+UNK_0xefb4.offset); // UNK_0xefb4<IFIELD>
  _2_at_(); // 2@
  Push(0x65e1+UNK_0xefb9.offset); // UNK_0xefb9<IFIELD>
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf056: WORD 'TRANSACT' codep=0x224c parp=0xf063 params=1 returns=0
// ================================================
// entry

void TRANSACT() // TRANSACT
{
  unsigned short int i, imax;
  UNK_0xefd5(); // UNK_0xefd5
  Push(Read16(0x65e1+UNK_0xefbe.offset)&0xFF); // UNK_0xefbe<IFIELD> C@
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
        Push(Pop() + 1); //  1+
        imax = i; // LEAVE
      }
      i++;
    } while(i<imax); // (LOOP)

    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      IFIRST(); // IFIRST
      IDELETE(); // IDELETE
    }
    ILAST(); // ILAST
    COVER(); // COVER
    SET_dash_CUR(); // SET-CUR
    Push(Read16(pp_STARDAT)); // STARDAT @
    Push(0x65e1+UNK_0xefb4.offset); // UNK_0xefb4<IFIELD>
    _2_at_(); // 2@
    Push(0x65e1+UNK_0xefb9.offset); // UNK_0xefb9<IFIELD>
    _2_at_(); // 2@
    D_dash_(); // D-
    ICLOSE(); // ICLOSE
    Push(0x65e1+UNK_0xefcb.offset); // UNK_0xefcb<IFIELD>
    StoreD(); // D!
    Push(0x65e1+UNK_0xefd0.offset); // UNK_0xefd0<IFIELD>
    Store_2(); // !_2
    ICLOSE(); // ICLOSE
    Push(0x65e1+UNK_0xefb9.offset); // UNK_0xefb9<IFIELD>
    _2_at_(); // 2@
    Push(0x65e1+UNK_0xefb4.offset); // UNK_0xefb4<IFIELD>
    StoreD(); // D!
    Push(0);
    Push(0x65e1+UNK_0xefbe.offset); // UNK_0xefbe<IFIELD>
    C_ex__2(); // C!_2
  } else
  {
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0d5: WORD 'INT%' codep=0x224c parp=0xf0de params=0 returns=0
// ================================================
// entry

void INT_pe_() // INT%
{
  INIT_dash_BALANCE(); // INIT-BALANCE
  GetDBALANCE(); // D@BALANCE
  Push(0x000c);
  Push(0x0064);
  M_star__slash_(); // M*/
  Push(Read16(pp_STARDAT) - Read16(pp_PORTDAT)); // STARDAT @ PORTDAT @ -
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
  Push(Read16(pp_STARDAT)); // STARDAT @
  Push(pp_PORTDAT); // PORTDAT
  Store_2(); // !_2
}


// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x1d29 parp=0xf122
// ================================================
// 0xf122: db 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 'DDDDDDDDDDDDDDDDDDDD'

// ================================================
// 0xf136: WORD 'UNK_0xf138' codep=0x224c parp=0xf138
// ================================================

void UNK_0xf138() // UNK_0xf138
{
  Push(0xfffc);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(Pop() - Read16(pp_XBLT)); //  XBLT @ -
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(1);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(pp_UNK_0xf122); // UNK_0xf122
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
  Push(4);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162() // UNK_0xf162
{
  Push(Read16(0x65e1+UNK_0xefd0.offset)); // UNK_0xefd0<IFIELD> @
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(Pop() + 0x121f); //  0x121f +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
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
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x224c parp=0xf1a6
// ================================================

void UNK_0xf1a6() // UNK_0xf1a6
{
  unsigned short int a;
  Push(0x65e1+UNK_0xefcb.offset); // UNK_0xefcb<IFIELD>
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
  Push(!(!Pop())); //  NOT NOT
  Push(a); // R>
  Push(Pop() * Pop()); // *
  Push(Pop() + 0x0020); //  0x0020 +
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xf1e8: WORD 'UNK_0xf1ea' codep=0x224c parp=0xf1ea
// ================================================

void UNK_0xf1ea() // UNK_0xf1ea
{
  LoadData(UNK_0xefc3); // from 'BANK_TRANS'
  _do__dot_(); // $.
}


// ================================================
// 0xf1f0: WORD 'UNK_0xf1f2' codep=0x224c parp=0xf1f2
// ================================================

void UNK_0xf1f2() // UNK_0xf1f2
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
  Push(Read16(cc_UNK_0xefa8)); // UNK_0xefa8
  Push(0x0032);
  Push(0x00b2);
  Push(Read16(cc_UNK_0xefa8)); // UNK_0xefa8
  Push(0x006d);
  Push(0x00c0);
  Push(Read16(cc_UNK_0xefa8)); // UNK_0xefa8
  Push(0x006d);
  Push(0x00b2);
  Push(Read16(cc_UNK_0xefa8)); // UNK_0xefa8
  Push(4);
  UNK_0xef96(); // UNK_0xef96
  CTINIT(); // CTINIT
  Push(0x0046);
  Push(0x00bc);
  POS_dot_(); // POS.
  _gt_3FONT(); // >3FONT
  PRINT("BANK", 4); // (.")
}


// ================================================
// 0xf27d: WORD 'UNK_0xf27f' codep=0x224c parp=0xf27f
// ================================================

void UNK_0xf27f() // UNK_0xf27f
{
  unsigned short int i, imax;
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
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
  Push(Read16(cc_UNK_0xefa4)); // UNK_0xefa4
  Push(0x009b);
  Push(0x00c5);
  Push(Read16(cc_UNK_0xefa0)); // UNK_0xefa0
  Push(2);
  Push(4);
  Push(Read16(cc_UNK_0xefa0)); // UNK_0xefa0
  Push(0x009b);
  Push(4);
  Push(Read16(cc_UNK_0xefa4)); // UNK_0xefa4
  Push(0x0012);
  Push(6);
  Push(Read16(cc_UNK_0xefac)); // UNK_0xefac
  Push(5);
  Push(0x0013);
  Push(Read16(cc_UNK_0xefac)); // UNK_0xefac
  Push(0x0011);
  Push(0x0012);
  Push(Read16(cc_UNK_0xefac)); // UNK_0xefac
  Push(0x0012);
  Push(6);
  Push(Read16(cc_UNK_0xefac)); // UNK_0xefac
  Push(0x0099);
  Push(6);
  Push(Read16(cc_UNK_0xefb0)); // UNK_0xefb0
  Push(0x0012);
  Push(6);
  Push(Read16(cc_UNK_0xefac)); // UNK_0xefac
  Push(0x0099);
  Push(0x00c2);
  Push(Read16(cc_UNK_0xefac)); // UNK_0xefac
  Push(5);
  Push(0x00c2);
  Push(Read16(cc_UNK_0xefb0)); // UNK_0xefb0
  Push(0x000c);
  UNK_0xef96(); // UNK_0xef96
  Push(6);
  Push(0x000f);
  SetColor(DK_dash_BLUE);
  Draw1LOGO(); // .1LOGO
}


// ================================================
// 0xf3b9: WORD 'UNK_0xf3bb' codep=0x224c parp=0xf3bb
// ================================================

void UNK_0xf3bb() // UNK_0xf3bb
{
  CTINIT(); // CTINIT
  Push(0x0013);
  Push(0x00a7);
  POS_dot_(); // POS.
  PRINT("DATE", 4); // (.")
  Push(0x003e);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("TRANSACTIONS", 12); // (.")
  Push(0x0085);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
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
  UNK_0xf138(); // UNK_0xf138
}


// ================================================
// 0xf472: WORD 'UNK_0xf474' codep=0x224c parp=0xf474
// ================================================

void UNK_0xf474() // UNK_0xf474
{
  DARK(); // DARK
  SetColor(DK_dash_BLUE);
  UNK_0xf27f(); // UNK_0xf27f
  UNK_0xf1f2(); // UNK_0xf1f2
  UNK_0xf3bb(); // UNK_0xf3bb
}


// ================================================
// 0xf480: WORD 'UNK_0xf482' codep=0x224c parp=0xf482
// ================================================

void UNK_0xf482() // UNK_0xf482
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(Pop() * 0x000a); //  0x000a *
  Push(0x0095);
  SWAP(); // SWAP
  _dash_(); // -
  Push(7);
  SWAP(); // SWAP
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  UNK_0xf162(); // UNK_0xf162
  Push(0x0032);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  UNK_0xf1ea(); // UNK_0xf1ea
  Push(0x007c);
  UNK_0xf138(); // UNK_0xf138
  Push(0x007d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  UNK_0xf1a6(); // UNK_0xf1a6
}


// ================================================
// 0xf4ba: WORD 'UNK_0xf4bc' codep=0x224c parp=0xf4bc
// ================================================

void UNK_0xf4bc() // UNK_0xf4bc
{
  Push(0x0079);
  Push(0x001d);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  Push(0x65e1+UNK_0xefb4.offset); // UNK_0xefb4<IFIELD>
  _2_at_(); // 2@
  Push(7);
  D_dot_R(); // D.R
}


// ================================================
// 0xf4d2: WORD 'UNK_0xf4d4' codep=0x224c parp=0xf4d4
// ================================================

void UNK_0xf4d4() // UNK_0xf4d4
{
  UNK_0xefd5(); // UNK_0xefd5
  IOPEN(); // IOPEN
  Push(0);
  do
  {
    Push(Read16(regsp)); // DUP
    UNK_0xf482(); // UNK_0xf482
    Push(Pop() + 1); //  1+
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  Pop(); // DROP
  ICLOSE(); // ICLOSE
  UNK_0xf4bc(); // UNK_0xf4bc
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4f2: WORD '(U-BANK)' codep=0x224c parp=0xf4ff
// ================================================
// entry

void _ro_U_dash_BANK_rc_() // (U-BANK)
{
  Push(-1);
  Push(user_CONTEXT_1); // CONTEXT_1
  Store_2(); // !_2
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xf474(); // UNK_0xf474
  UNK_0xf4d4(); // UNK_0xf4d4
  CTINIT(); // CTINIT
  Push(0x0028);
  Push(0x000e);
  POS_dot_(); // POS.
  PRINT("PRESS SPACEBAR TO EXIT", 22); // (.")
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); Pop(); // 2DROP
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  Push(5);
  Push(user_CONTEXT_1); // CONTEXT_1
  Store_2(); // !_2
}

// 0xf546: db 0x42 0x41 0x4e 0x4b 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BANK-VOC__________________ '

