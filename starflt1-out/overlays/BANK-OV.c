// ====== OVERLAY 'BANK-OV' ======
// store offset = 0xef70
// overlay size   = 0x05f0

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xef86  codep:0x224c parp:0xef86 size:0x0008 C-string:'UNK_0xef86'
//      UNK_0xef90  codep:0x2214 parp:0xef90 size:0x0002 C-string:'UNK_0xef90'
//      UNK_0xef94  codep:0x2214 parp:0xef94 size:0x0002 C-string:'UNK_0xef94'
//      UNK_0xef98  codep:0x2214 parp:0xef98 size:0x0002 C-string:'UNK_0xef98'
//      UNK_0xef9c  codep:0x2214 parp:0xef9c size:0x0002 C-string:'UNK_0xef9c'
//      UNK_0xefa0  codep:0x2214 parp:0xefa0 size:0x0002 C-string:'UNK_0xefa0'
//      UNK_0xefa4  codep:0x744d parp:0xefa4 size:0x0003 C-string:'UNK_0xefa4'
//      UNK_0xefa9  codep:0x744d parp:0xefa9 size:0x0003 C-string:'UNK_0xefa9'
//      UNK_0xefae  codep:0x744d parp:0xefae size:0x0003 C-string:'UNK_0xefae'
//      UNK_0xefb3  codep:0x73ea parp:0xefb3 size:0x0006 C-string:'UNK_0xefb3'
//      UNK_0xefbb  codep:0x744d parp:0xefbb size:0x0003 C-string:'UNK_0xefbb'
//      UNK_0xefc0  codep:0x744d parp:0xefc0 size:0x0003 C-string:'UNK_0xefc0'
//        SET-BANK  codep:0x224c parp:0xefc5 size:0x0006 C-string:'SET_dash_BANK'
//          !TFLAG  codep:0x224c parp:0xefd6 size:0x000c C-string:'_ex_TFLAG'
//       D@BALANCE  codep:0x224c parp:0xeff0 size:0x000a C-string:'D_at_BALANCE'
//       D!BALANCE  codep:0x224c parp:0xf008 size:0x000a C-string:'D_ex_BALANCE'
//        ?BALANCE  codep:0x224c parp:0xf01f size:0x0008 C-string:'_ask_BALANCE'
//    INIT-BALANCE  codep:0x224c parp:0xf038 size:0x000e C-string:'INIT_dash_BALANCE'
//        TRANSACT  codep:0x224c parp:0xf053 size:0x0072 C-string:'TRANSACT'
//            INT%  codep:0x224c parp:0xf0ce size:0x0042 C-string:'INT_pe_'
//      UNK_0xf112  codep:0x1d29 parp:0xf112 size:0x0014 C-string:'UNK_0xf112'
//      UNK_0xf128  codep:0x224c parp:0xf128 size:0x0028 C-string:'UNK_0xf128'
//      UNK_0xf152  codep:0x224c parp:0xf152 size:0x0042 C-string:'UNK_0xf152'
//      UNK_0xf196  codep:0x224c parp:0xf196 size:0x0042 C-string:'UNK_0xf196'
//      UNK_0xf1da  codep:0x224c parp:0xf1da size:0x0006 C-string:'UNK_0xf1da'
//      UNK_0xf1e2  codep:0x224c parp:0xf1e2 size:0x008b C-string:'UNK_0xf1e2'
//      UNK_0xf26f  codep:0x224c parp:0xf26f size:0x013a C-string:'UNK_0xf26f'
//      UNK_0xf3ab  codep:0x224c parp:0xf3ab size:0x00b7 C-string:'UNK_0xf3ab'
//      UNK_0xf464  codep:0x224c parp:0xf464 size:0x000c C-string:'UNK_0xf464'
//      UNK_0xf472  codep:0x224c parp:0xf472 size:0x0038 C-string:'UNK_0xf472'
//        .BALANCE  codep:0x224c parp:0xf4ac size:0x0016 C-string:'_dot_BALANCE'
//           .BANK  codep:0x224c parp:0xf4c4 size:0x001e C-string:'_dot_BANK'
//        (U-BANK)  codep:0x224c parp:0xf4ef size:0x0000 C-string:'_ro_U_dash_BANK_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__3; // 3
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__5; // 5
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__7; // 7
extern const unsigned short int cc__9; // 9
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
void _dot_(); // .
void D_dot_R(); // D.R
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_gt_(); // D>
void DMIN(); // DMIN
void C_ex_(); // C!
void _ex__3(); // !_3
void _plus__ex_(); // +!
void D_ex_(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void COVER(); // COVER
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void _ask_FIRST(); // ?FIRST
void INEXT(); // INEXT
void IFIRST(); // IFIRST
void ILAST(); // ILAST
void IDELETE(); // IDELETE
void _star_CREATE(); // *CREATE
void MODULE(); // MODULE
void _ex_COLOR(); // !COLOR
void _gt_DISPLAY(); // >DISPLAY
void _gt_HIDDEN(); // >HIDDEN
void SCR_dash_RES(); // SCR-RES
void DARK(); // DARK
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_3FONT(); // >3FONT
void POS_dot_(); // POS.
void _dot_1LOGO(); // .1LOGO
void _do__dot_(); // $.
void CTINIT(); // CTINIT
void XYSCAN(); // XYSCAN
void _ask_TRIG(); // ?TRIG
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
const unsigned short int pp_UNK_0xf112 = 0xf112; // UNK_0xf112 size: 20
// {0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44}


const unsigned short int cc_UNK_0xef90 = 0xef90; // UNK_0xef90
const unsigned short int cc_UNK_0xef94 = 0xef94; // UNK_0xef94
const unsigned short int cc_UNK_0xef98 = 0xef98; // UNK_0xef98
const unsigned short int cc_UNK_0xef9c = 0xef9c; // UNK_0xef9c
const unsigned short int cc_UNK_0xefa0 = 0xefa0; // UNK_0xefa0


// 0xef82: db 0x5c 0x00 '\ '

// ================================================
// 0xef84: WORD 'UNK_0xef86' codep=0x224c parp=0xef86
// ================================================

void UNK_0xef86() // UNK_0xef86
{
  Push(0xbdba); // probable 'OVTRIMS'
  MODULE(); // MODULE
}


// ================================================
// 0xef8e: WORD 'UNK_0xef90' codep=0x2214 parp=0xef90
// ================================================
// 0xef90: db 0x00 0x00 '  '

// ================================================
// 0xef92: WORD 'UNK_0xef94' codep=0x2214 parp=0xef94
// ================================================
// 0xef94: db 0x01 0x00 '  '

// ================================================
// 0xef96: WORD 'UNK_0xef98' codep=0x2214 parp=0xef98
// ================================================
// 0xef98: db 0x02 0x00 '  '

// ================================================
// 0xef9a: WORD 'UNK_0xef9c' codep=0x2214 parp=0xef9c
// ================================================
// 0xef9c: db 0x03 0x00 '  '

// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x2214 parp=0xefa0
// ================================================
// 0xefa0: db 0x04 0x00 '  '

// ================================================
// 0xefa2: WORD 'UNK_0xefa4' codep=0x744d parp=0xefa4
// ================================================
// 0xefa4: db 0x0d 0x0b 0x04 '   '

// ================================================
// 0xefa7: WORD 'UNK_0xefa9' codep=0x744d parp=0xefa9
// ================================================
// 0xefa9: db 0x0d 0x0f 0x04 '   '

// ================================================
// 0xefac: WORD 'UNK_0xefae' codep=0x744d parp=0xefae
// ================================================
// 0xefae: db 0x0d 0x13 0x01 '   '

// ================================================
// 0xefb1: WORD 'UNK_0xefb3' codep=0x73ea parp=0xefb3
// ================================================
// 0xefb3: db 0x0e 0x00 0x13 0x13 0x80 0x64 '     d'

// ================================================
// 0xefb9: WORD 'UNK_0xefbb' codep=0x744d parp=0xefbb
// ================================================
// 0xefbb: db 0x0e 0x0b 0x04 '   '

// ================================================
// 0xefbe: WORD 'UNK_0xefc0' codep=0x744d parp=0xefc0
// ================================================
// 0xefc0: db 0x0e 0x0f 0x02 '   '

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

void _ex_TFLAG() // !TFLAG
{
  SET_dash_BANK(); // SET-BANK
  Push(1); // 1
  Push(0x6402); // IFIELD(UNK_0xefae)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefe2: WORD 'D@BALANCE' codep=0x224c parp=0xeff0
// ================================================
// entry

void D_at_BALANCE() // D@BALANCE
{
  SET_dash_BANK(); // SET-BANK
  Push(0x63fe); // IFIELD(UNK_0xefa9)
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeffa: WORD 'D!BALANCE' codep=0x224c parp=0xf008
// ================================================
// entry

void D_ex_BALANCE() // D!BALANCE
{
  SET_dash_BANK(); // SET-BANK
  Push(0x63fe); // IFIELD(UNK_0xefa9)
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf012: WORD '?BALANCE' codep=0x224c parp=0xf01f
// ================================================
// entry

void _ask_BALANCE() // ?BALANCE
{
  D_at_BALANCE(); // D@BALANCE
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
  Push(0x63fa); // IFIELD(UNK_0xefa4)
  _2_at_(); // 2@
  Push(0x63fe); // IFIELD(UNK_0xefa9)
  D_ex_(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf046: WORD 'TRANSACT' codep=0x224c parp=0xf053
// ================================================
// entry

void TRANSACT() // TRANSACT
{
  signed short int i, imax;
  SET_dash_BANK(); // SET-BANK
  Push(0x6402); // IFIELD(UNK_0xefae)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x000e);
  SWAP(); // SWAP
  Push(1); // 1
  _star_CREATE(); // *CREATE
  IFIRST(); // IFIRST
  Push(0); // 0
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  Push(Pop()+1); // 1+
  imax = i; // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xfff2

  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  IFIRST(); // IFIRST
  IDELETE(); // IDELETE

  label3:
  ILAST(); // ILAST
  COVER(); // COVER
  SET_dash_CURRENT(); // SET-CURRENT
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(0x63fa); // IFIELD(UNK_0xefa4)
  _2_at_(); // 2@
  Push(0x63fe); // IFIELD(UNK_0xefa9)
  _2_at_(); // 2@
  D_dash_(); // D-
  ICLOSE(); // ICLOSE
  Push(0x63fa); // IFIELD(UNK_0xefbb)
  D_ex_(); // D!
  Push(0x63fe); // IFIELD(UNK_0xefc0)
  _ex__3(); // !_3
  ICLOSE(); // ICLOSE
  Push(0x63fe); // IFIELD(UNK_0xefa9)
  _2_at_(); // 2@
  Push(0x63fa); // IFIELD(UNK_0xefa4)
  D_ex_(); // D!
  Push(0); // 0
  Push(0x6402); // IFIELD(UNK_0xefae)
  C_ex_(); // C!
  goto label4;

  label1:
  Pop(); // DROP

  label4:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0c5: WORD 'INT%' codep=0x224c parp=0xf0ce
// ================================================
// entry

void INT_pe_() // INT%
{
  INIT_dash_BALANCE(); // INIT-BALANCE
  D_at_BALANCE(); // D@BALANCE
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
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  return;

  label1:
  D_at_BALANCE(); // D@BALANCE
  D_plus_(); // D+
  D_ex_BALANCE(); // D!BALANCE
  _ex_TFLAG(); // !TFLAG
  Push(Read16(cc__5)); // 5
  TRANSACT(); // TRANSACT
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp_PORTDAT); // PORTDAT
  _ex__3(); // !_3
}


// ================================================
// 0xf110: WORD 'UNK_0xf112' codep=0x1d29 parp=0xf112
// ================================================
// 0xf112: db 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 0x44 'DDDDDDDDDDDDDDDDDDDD'

// ================================================
// 0xf126: WORD 'UNK_0xf128' codep=0x224c parp=0xf128
// ================================================

void UNK_0xf128() // UNK_0xf128
{
  Push(0xfffc);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_WBLT); // WBLT
  _ex__3(); // !_3
  Push(1); // 1
  Push(pp_LBLT); // LBLT
  _ex__3(); // !_3
  Push(pp_UNK_0xf112); // UNK_0xf112
  Push(pp_ABLT); // ABLT
  _ex__3(); // !_3
  BLT(); // BLT
  Push(Read16(cc__4)); // 4
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
}


// ================================================
// 0xf150: WORD 'UNK_0xf152' codep=0x224c parp=0xf152
// ================================================

void UNK_0xf152() // UNK_0xf152
{
  Push(0x63fe); // IFIELD(UNK_0xefc0)
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
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("-", 1); // (.")
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("-", 1); // (.")
  _dot_(); // .
}


// ================================================
// 0xf194: WORD 'UNK_0xf196' codep=0x224c parp=0xf196
// ================================================

void UNK_0xf196() // UNK_0xf196
{
  unsigned short int a;
  Push(0x63fa); // IFIELD(UNK_0xefbb)
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  _2DUP(); // 2DUP
  DABS(); // DABS
  Push(0x423f); Push(0x000f);
  DMIN(); // DMIN
  Push(Read16(cc__6)); // 6
  D_dot_R(); // D.R
  Push(0); // 0
  Push(0); // 0
  D_st_(); // D<
  if (Pop() == 0) goto label1;
  Push(0x000b);
  goto label2;

  label1:
  Push(0x000d);

  label2:
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
// 0xf1d8: WORD 'UNK_0xf1da' codep=0x224c parp=0xf1da
// ================================================

void UNK_0xf1da() // UNK_0xf1da
{
  LoadData("UNK_0xefb3"); // from 'BANK-TRANS  '
  _do__dot_(); // $.
}


// ================================================
// 0xf1e0: WORD 'UNK_0xf1e2' codep=0x224c parp=0xf1e2
// ================================================

void UNK_0xf1e2() // UNK_0xf1e2
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
  Push(Read16(cc_UNK_0xef98)); // UNK_0xef98
  Push(0x0032);
  Push(0x00b2);
  Push(Read16(cc_UNK_0xef98)); // UNK_0xef98
  Push(0x006d);
  Push(0x00c0);
  Push(Read16(cc_UNK_0xef98)); // UNK_0xef98
  Push(0x006d);
  Push(0x00b2);
  Push(Read16(cc_UNK_0xef98)); // UNK_0xef98
  Push(Read16(cc__4)); // 4
  UNK_0xef86(); // UNK_0xef86
  CTINIT(); // CTINIT
  Push(0x0046);
  Push(0x00bc);
  POS_dot_(); // POS.
  _gt_3FONT(); // >3FONT
  PRINT("BANK", 4); // (.")
}


// ================================================
// 0xf26d: WORD 'UNK_0xf26f' codep=0x224c parp=0xf26f
// ================================================

void UNK_0xf26f() // UNK_0xf26f
{
  signed short int i, imax;
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  Push(Read16(cc__3)); // 3
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(1); // 1
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x00c4);
  Push(1); // 1
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read16(cc__3)); // 3
  LLINE(); // LLINE
  Push(0x009c);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x00c4);
  Push(0x009c);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read16(cc__3)); // 3
  LLINE(); // LLINE
  Push(0x009c);
  Push(1); // 1
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read16(cc__3)); // 3
  Push(1); // 1
  Push(i); // I
  Push(Pop() + Pop()); // +
  LLINE(); // LLINE
  Push(0x009c);
  Push(0x00c4);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read16(cc__3)); // 3
  Push(0x00c4);
  Push(i); // I
  Push(Pop() + Pop()); // +
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xffa6

  Push(Read16(cc__5)); // 5
  Push(0x00c2);
  Push(Read16(cc__5)); // 5
  Push(0x0012);
  LLINE(); // LLINE
  Push(0x0012);
  Push(0x0012);
  Push(Read16(cc__6)); // 6
  Push(0x0012);
  LLINE(); // LLINE
  Push(0x0012);
  Push(0x0011);
  Push(0x0012);
  Push(Read16(cc__5)); // 5
  LLINE(); // LLINE
  Push(0x0099);
  Push(Read16(cc__5)); // 5
  Push(0x0013);
  Push(Read16(cc__5)); // 5
  LLINE(); // LLINE
  Push(0x009a);
  Push(Read16(cc__5)); // 5
  Push(0x009a);
  Push(0x00c2);
  LLINE(); // LLINE
  Push(0x0099);
  Push(0x00c2);
  Push(Read16(cc__6)); // 6
  Push(0x00c2);
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x00c5);
  Push(Read16(cc_UNK_0xef94)); // UNK_0xef94
  Push(0x009b);
  Push(0x00c5);
  Push(Read16(cc_UNK_0xef90)); // UNK_0xef90
  Push(2); // 2
  Push(Read16(cc__4)); // 4
  Push(Read16(cc_UNK_0xef90)); // UNK_0xef90
  Push(0x009b);
  Push(Read16(cc__4)); // 4
  Push(Read16(cc_UNK_0xef94)); // UNK_0xef94
  Push(0x0012);
  Push(Read16(cc__6)); // 6
  Push(Read16(cc_UNK_0xef9c)); // UNK_0xef9c
  Push(Read16(cc__5)); // 5
  Push(0x0013);
  Push(Read16(cc_UNK_0xef9c)); // UNK_0xef9c
  Push(0x0011);
  Push(0x0012);
  Push(Read16(cc_UNK_0xef9c)); // UNK_0xef9c
  Push(0x0012);
  Push(Read16(cc__6)); // 6
  Push(Read16(cc_UNK_0xef9c)); // UNK_0xef9c
  Push(0x0099);
  Push(Read16(cc__6)); // 6
  Push(Read16(cc_UNK_0xefa0)); // UNK_0xefa0
  Push(0x0012);
  Push(Read16(cc__6)); // 6
  Push(Read16(cc_UNK_0xef9c)); // UNK_0xef9c
  Push(0x0099);
  Push(0x00c2);
  Push(Read16(cc_UNK_0xef9c)); // UNK_0xef9c
  Push(Read16(cc__5)); // 5
  Push(0x00c2);
  Push(Read16(cc_UNK_0xefa0)); // UNK_0xefa0
  Push(0x000c);
  UNK_0xef86(); // UNK_0xef86
  Push(Read16(cc__6)); // 6
  Push(0x000f);
  SetColor("DK-BLUE");
  _dot_1LOGO(); // .1LOGO
}


// ================================================
// 0xf3a9: WORD 'UNK_0xf3ab' codep=0x224c parp=0xf3ab
// ================================================

void UNK_0xf3ab() // UNK_0xf3ab
{
  CTINIT(); // CTINIT
  Push(0x0013);
  Push(0x00a7);
  POS_dot_(); // POS.
  PRINT("DATE", 4); // (.")
  Push(0x003e);
  Push(pp_XBLT); // XBLT
  _ex__3(); // !_3
  PRINT("TRANSACTIONS", 12); // (.")
  Push(0x0085);
  Push(pp_XBLT); // XBLT
  _ex__3(); // !_3
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
  UNK_0xf128(); // UNK_0xf128
}


// ================================================
// 0xf462: WORD 'UNK_0xf464' codep=0x224c parp=0xf464
// ================================================

void UNK_0xf464() // UNK_0xf464
{
  DARK(); // DARK
  SetColor("DK-BLUE");
  UNK_0xf26f(); // UNK_0xf26f
  UNK_0xf1e2(); // UNK_0xf1e2
  UNK_0xf3ab(); // UNK_0xf3ab
}


// ================================================
// 0xf470: WORD 'UNK_0xf472' codep=0x224c parp=0xf472
// ================================================

void UNK_0xf472() // UNK_0xf472
{
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0095);
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(cc__7)); // 7
  SWAP(); // SWAP
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  UNK_0xf152(); // UNK_0xf152
  Push(0x0032);
  Push(pp_XBLT); // XBLT
  _ex__3(); // !_3
  UNK_0xf1da(); // UNK_0xf1da
  Push(0x007c);
  UNK_0xf128(); // UNK_0xf128
  Push(0x007d);
  Push(pp_XBLT); // XBLT
  _ex__3(); // !_3
  UNK_0xf196(); // UNK_0xf196
}


// ================================================
// 0xf4aa: WORD '.BALANCE' codep=0x224c parp=0xf4ac
// ================================================

void _dot_BALANCE() // .BALANCE
{
  Push(0x0079);
  Push(0x001d);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  Push(0x63fa); // IFIELD(UNK_0xefa4)
  _2_at_(); // 2@
  Push(Read16(cc__7)); // 7
  D_dot_R(); // D.R
}


// ================================================
// 0xf4c2: WORD '.BANK' codep=0x224c parp=0xf4c4
// ================================================

void _dot_BANK() // .BANK
{
  SET_dash_BANK(); // SET-BANK
  IOPEN(); // IOPEN
  Push(0); // 0

  label1:
  Push(Read16(regsp)); // DUP
  UNK_0xf472(); // UNK_0xf472
  Push(Pop()+1); // 1+
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  ICLOSE(); // ICLOSE
  _dot_BALANCE(); // .BALANCE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e2: WORD '(U-BANK)' codep=0x224c parp=0xf4ef
// ================================================
// entry

void _ro_U_dash_BANK_rc_() // (U-BANK)
{
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xf464(); // UNK_0xf464
  _dot_BANK(); // .BANK
  CTINIT(); // CTINIT
  Push(0x0028);
  Push(0x000e);
  POS_dot_(); // POS.
  PRINT("PRESS SPACEBAR TO EXIT", 22); // (.")
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES

  label1:
  XYSCAN(); // XYSCAN
  Pop(); Pop();// 2DROP
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
}

// 0xf52a: db 0x42 0x41 0x4e 0x4b 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x42 0x41 0x4e 0x4b 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'BANK-VOC________________________for BANK-------------- '
  