// ====== OVERLAY 'REPAIR-OV' ======
// store offset = 0xeec0
// overlay size   = 0x06a0

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xeeda  codep:0x744d parp:0xeeda size:0x0008 C-string:'UNK_0xeeda'
//      UNK_0xeee4  codep:0x744d parp:0xeee4 size:0x0003 C-string:'UNK_0xeee4'
//      UNK_0xeee9  codep:0x744d parp:0xeee9 size:0x0003 C-string:'UNK_0xeee9'
//      UNK_0xeeee  codep:0x744d parp:0xeeee size:0x0003 C-string:'UNK_0xeeee'
//      UNK_0xeef3  codep:0x744d parp:0xeef3 size:0x0003 C-string:'UNK_0xeef3'
//      UNK_0xeef8  codep:0x744d parp:0xeef8 size:0x0003 C-string:'UNK_0xeef8'
//      UNK_0xeefd  codep:0x744d parp:0xeefd size:0x0003 C-string:'UNK_0xeefd'
//      UNK_0xef02  codep:0x744d parp:0xef02 size:0x0008 C-string:'UNK_0xef02'
//      UNK_0xef0c  codep:0x744d parp:0xef0c size:0x0003 C-string:'UNK_0xef0c'
//      UNK_0xef11  codep:0x744d parp:0xef11 size:0x0003 C-string:'UNK_0xef11'
//      UNK_0xef16  codep:0x744d parp:0xef16 size:0x0003 C-string:'UNK_0xef16'
//          >FIELD  codep:0x4a4f parp:0xef24 size:0x0020 C-string:'_gt_FIELD'
//      UNK_0xef46  codep:0x1d29 parp:0xef46 size:0x0002 C-string:'UNK_0xef46'
//      UNK_0xef4a  codep:0x1d29 parp:0xef4a size:0x0002 C-string:'UNK_0xef4a'
//      UNK_0xef4e  codep:0x1d29 parp:0xef4e size:0x0002 C-string:'UNK_0xef4e'
//      UNK_0xef52  codep:0x1d29 parp:0xef52 size:0x0002 C-string:'UNK_0xef52'
//      UNK_0xef56  codep:0x224c parp:0xef56 size:0x0006 C-string:'UNK_0xef56'
//      UNK_0xef5e  codep:0x224c parp:0xef5e size:0x0006 C-string:'UNK_0xef5e'
//      UNK_0xef66  codep:0x224c parp:0xef66 size:0x0006 C-string:'UNK_0xef66'
//      UNK_0xef6e  codep:0x224c parp:0xef6e size:0x0006 C-string:'UNK_0xef6e'
//      UNK_0xef76  codep:0x224c parp:0xef76 size:0x0006 C-string:'UNK_0xef76'
//      UNK_0xef7e  codep:0x224c parp:0xef7e size:0x000e C-string:'UNK_0xef7e'
//      UNK_0xef8e  codep:0x224c parp:0xef8e size:0x000a C-string:'UNK_0xef8e'
//      UNK_0xef9a  codep:0x224c parp:0xef9a size:0x000e C-string:'UNK_0xef9a'
//      UNK_0xefaa  codep:0x224c parp:0xefaa size:0x0014 C-string:'UNK_0xefaa'
//      UNK_0xefc0  codep:0x224c parp:0xefc0 size:0x001e C-string:'UNK_0xefc0'
//      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x000e C-string:'UNK_0xefe0'
//      UNK_0xeff0  codep:0x224c parp:0xeff0 size:0x000a C-string:'UNK_0xeff0'
//      UNK_0xeffc  codep:0x224c parp:0xeffc size:0x003c C-string:'UNK_0xeffc'
//      UNK_0xf03a  codep:0x1d29 parp:0xf03a size:0x0002 C-string:'UNK_0xf03a'
//      UNK_0xf03e  codep:0x224c parp:0xf03e size:0x0046 C-string:'UNK_0xf03e'
//      UNK_0xf086  codep:0x224c parp:0xf086 size:0x003c C-string:'UNK_0xf086'
//      UNK_0xf0c4  codep:0x1d29 parp:0xf0c4 size:0x000a C-string:'UNK_0xf0c4'
//      UNK_0xf0d0  codep:0x224c parp:0xf0d0 size:0x0016 C-string:'UNK_0xf0d0'
//      UNK_0xf0e8  codep:0x224c parp:0xf0e8 size:0x0024 C-string:'UNK_0xf0e8'
//      UNK_0xf10e  codep:0x224c parp:0xf10e size:0x0012 C-string:'UNK_0xf10e'
//      UNK_0xf122  codep:0x224c parp:0xf122 size:0x000c C-string:'UNK_0xf122'
//      UNK_0xf130  codep:0x224c parp:0xf130 size:0x0050 C-string:'UNK_0xf130'
//      UNK_0xf182  codep:0x224c parp:0xf182 size:0x0022 C-string:'UNK_0xf182'
//      UNK_0xf1a6  codep:0x224c parp:0xf1a6 size:0x0018 C-string:'UNK_0xf1a6'
//      UNK_0xf1c0  codep:0x224c parp:0xf1c0 size:0x0022 C-string:'UNK_0xf1c0'
//      UNK_0xf1e4  codep:0x224c parp:0xf1e4 size:0x0022 C-string:'UNK_0xf1e4'
//      UNK_0xf208  codep:0x224c parp:0xf208 size:0x002e C-string:'UNK_0xf208'
//      UNK_0xf238  codep:0x224c parp:0xf238 size:0x001c C-string:'UNK_0xf238'
//      UNK_0xf256  codep:0x224c parp:0xf256 size:0x0014 C-string:'UNK_0xf256'
//      UNK_0xf26c  codep:0x224c parp:0xf26c size:0x0032 C-string:'UNK_0xf26c'
//      UNK_0xf2a0  codep:0x224c parp:0xf2a0 size:0x001c C-string:'UNK_0xf2a0'
//      UNK_0xf2be  codep:0x224c parp:0xf2be size:0x0012 C-string:'UNK_0xf2be'
//      UNK_0xf2d2  codep:0x224c parp:0xf2d2 size:0x0006 C-string:'UNK_0xf2d2'
//      UNK_0xf2da  codep:0x224c parp:0xf2da size:0x0014 C-string:'UNK_0xf2da'
//      UNK_0xf2f0  codep:0x224c parp:0xf2f0 size:0x0024 C-string:'UNK_0xf2f0'
//      UNK_0xf316  codep:0x224c parp:0xf316 size:0x000c C-string:'UNK_0xf316'
//      UNK_0xf324  codep:0x224c parp:0xf324 size:0x001a C-string:'UNK_0xf324'
//      UNK_0xf340  codep:0x224c parp:0xf340 size:0x0019 C-string:'UNK_0xf340'
//      UNK_0xf35b  codep:0x224c parp:0xf35b size:0x0032 C-string:'UNK_0xf35b'
//      UNK_0xf38f  codep:0x224c parp:0xf38f size:0x003a C-string:'UNK_0xf38f'
//      UNK_0xf3cb  codep:0x224c parp:0xf3cb size:0x001e C-string:'UNK_0xf3cb'
//      UNK_0xf3eb  codep:0x224c parp:0xf3eb size:0x0008 C-string:'UNK_0xf3eb'
//      UNK_0xf3f5  codep:0x224c parp:0xf3f5 size:0x0010 C-string:'UNK_0xf3f5'
//      UNK_0xf407  codep:0x224c parp:0xf407 size:0x0040 C-string:'UNK_0xf407'
//      UNK_0xf449  codep:0x224c parp:0xf449 size:0x0014 C-string:'UNK_0xf449'
//      UNK_0xf45f  codep:0x224c parp:0xf45f size:0x0048 C-string:'UNK_0xf45f'
//      UNK_0xf4a9  codep:0x224c parp:0xf4a9 size:0x0012 C-string:'UNK_0xf4a9'
//      UNK_0xf4bd  codep:0x224c parp:0xf4bd size:0x001a C-string:'UNK_0xf4bd'
//         DO-REPA  codep:0x224c parp:0xf4e3 size:0x0000 C-string:'DO_dash_REPA'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__5; // 5
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__7; // 7
extern const unsigned short int cc__dash_1; // -1
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_REPAIRT; // REPAIRT
extern const unsigned short int pp__ask_REPAIR; // ?REPAIR
extern const unsigned short int pp_REAL_dash_MS; // REAL-MS
void _star__slash_(); // */
void M_slash_(); // M/
void MAX(); // MAX
void MIN(); // MIN
void BEEP(); // BEEP
void _dot_(); // .
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void RRND(); // RRND
void C_ex_(); // C!
void _ex__3(); // !_3
void _plus__ex_(); // +!
void ON_3(); // ON_3
void OFF(); // OFF
void CDROP(); // CDROP
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void _ex_COLOR(); // !COLOR
void CTERASE(); // CTERASE
void _dot_TTY(); // .TTY
void _i_KEY(); // 'KEY
void Y_slash_N(); // Y/N
void _dash_XTRAILING(); // -XTRAILING
void _ro_BOX_gt__rc_(); // (BOX>)
void _2_at_(); // 2@
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void OFF_2(); // OFF_2
void _st__ex__gt_(); // <!>
void _gt_C(); // >C


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xef46 = 0xef46; // UNK_0xef46 size: 2
// {0x01, 0x00}

const unsigned short int pp_UNK_0xef4a = 0xef4a; // UNK_0xef4a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xef4e = 0xef4e; // UNK_0xef4e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xef52 = 0xef52; // UNK_0xef52 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf03a = 0xf03a; // UNK_0xf03a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf0c4 = 0xf0c4; // UNK_0xf0c4 size: 10
// {0x01, 0x00, 0x0c, 0x00, 0x14, 0x00, 0x04, 0x00, 0x10, 0x00}




// 0xeed2: db 0x67 0x00 0x14 0x22 0x14 0x00 'g  "  '

// ================================================
// 0xeed8: WORD 'UNK_0xeeda' codep=0x744d parp=0xeeda
// ================================================
// 0xeeda: db 0x14 0x11 0x02 0x4d 0x74 0x14 0x12 0x01 '   Mt   '

// ================================================
// 0xeee2: WORD 'UNK_0xeee4' codep=0x744d parp=0xeee4
// ================================================
// 0xeee4: db 0x14 0x13 0x02 '   '

// ================================================
// 0xeee7: WORD 'UNK_0xeee9' codep=0x744d parp=0xeee9
// ================================================
// 0xeee9: db 0x14 0x15 0x02 '   '

// ================================================
// 0xeeec: WORD 'UNK_0xeeee' codep=0x744d parp=0xeeee
// ================================================
// 0xeeee: db 0x14 0x17 0x02 '   '

// ================================================
// 0xeef1: WORD 'UNK_0xeef3' codep=0x744d parp=0xeef3
// ================================================
// 0xeef3: db 0x14 0x19 0x02 '   '

// ================================================
// 0xeef6: WORD 'UNK_0xeef8' codep=0x744d parp=0xeef8
// ================================================
// 0xeef8: db 0x14 0x1b 0x02 '   '

// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x744d parp=0xeefd
// ================================================
// 0xeefd: db 0x14 0x1d 0x02 '   '

// ================================================
// 0xef00: WORD 'UNK_0xef02' codep=0x744d parp=0xef02
// ================================================
// 0xef02: db 0x14 0x29 0x07 0x4d 0x74 0x14 0x32 0x02 ' ) Mt 2 '

// ================================================
// 0xef0a: WORD 'UNK_0xef0c' codep=0x744d parp=0xef0c
// ================================================
// 0xef0c: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xef0f: WORD 'UNK_0xef11' codep=0x744d parp=0xef11
// ================================================
// 0xef11: db 0x11 0x1a 0x03 '   '

// ================================================
// 0xef14: WORD 'UNK_0xef16' codep=0x744d parp=0xef16
// ================================================
// 0xef16: db 0x10 0x1c 0x01 '   '

// ================================================
// 0xef19: WORD '>FIELD' codep=0x4a4f parp=0xef24
// ================================================

void _gt_FIELD() // >FIELD
{
  switch(Pop()) // >FIELD
  {
  case 0:
    Push(0x6400); // IFIELD(UNK_0xeeda)
    break;
  case 1:
    Push(0x6402); // IFIELD(UNK_0xeee4)
    break;
  case 2:
    Push(0x6404); // IFIELD(UNK_0xeee9)
    break;
  case 3:
    Push(0x6406); // IFIELD(UNK_0xeeee)
    break;
  case 4:
    Push(0x6408); // IFIELD(UNK_0xeef3)
    break;
  case 5:
    Push(0x640a); // IFIELD(UNK_0xeef8)
    break;
  case 6:
    Push(0x640c); // IFIELD(UNK_0xeefd)
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xef44: WORD 'UNK_0xef46' codep=0x1d29 parp=0xef46
// ================================================
// 0xef46: db 0x01 0x00 '  '

// ================================================
// 0xef48: WORD 'UNK_0xef4a' codep=0x1d29 parp=0xef4a
// ================================================
// 0xef4a: db 0x3a 0x20 ': '

// ================================================
// 0xef4c: WORD 'UNK_0xef4e' codep=0x1d29 parp=0xef4e
// ================================================
// 0xef4e: db 0x3a 0x20 ': '

// ================================================
// 0xef50: WORD 'UNK_0xef52' codep=0x1d29 parp=0xef52
// ================================================
// 0xef52: db 0x3a 0x20 ': '

// ================================================
// 0xef54: WORD 'UNK_0xef56' codep=0x224c parp=0xef56
// ================================================

void UNK_0xef56() // UNK_0xef56
{
  Push(pp_UNK_0xef52); // UNK_0xef52
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef5c: WORD 'UNK_0xef5e' codep=0x224c parp=0xef5e
// ================================================

void UNK_0xef5e() // UNK_0xef5e
{
  Push(pp_UNK_0xef52); // UNK_0xef52
  Push(Read16(Pop())); // @
}


// ================================================
// 0xef64: WORD 'UNK_0xef66' codep=0x224c parp=0xef66
// ================================================

void UNK_0xef66() // UNK_0xef66
{
  Push(pp_UNK_0xef4a); // UNK_0xef4a
  Push(Read16(Pop())); // @
}


// ================================================
// 0xef6c: WORD 'UNK_0xef6e' codep=0x224c parp=0xef6e
// ================================================

void UNK_0xef6e() // UNK_0xef6e
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xef74: WORD 'UNK_0xef76' codep=0x224c parp=0xef76
// ================================================

void UNK_0xef76() // UNK_0xef76
{
  UNK_0xef66(); // UNK_0xef66
  _gt_FIELD(); // >FIELD case
}


// ================================================
// 0xef7c: WORD 'UNK_0xef7e' codep=0x224c parp=0xef7e
// ================================================

void UNK_0xef7e() // UNK_0xef7e
{
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0040);
  Push(Pop() & Pop()); // AND
  UNK_0xef6e(); // UNK_0xef6e
}


// ================================================
// 0xef8c: WORD 'UNK_0xef8e' codep=0x224c parp=0xef8e
// ================================================

void UNK_0xef8e() // UNK_0xef8e
{
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xef98: WORD 'UNK_0xef9a' codep=0x224c parp=0xef9a
// ================================================

void UNK_0xef9a() // UNK_0xef9a
{
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  UNK_0xef6e(); // UNK_0xef6e
}


// ================================================
// 0xefa8: WORD 'UNK_0xefaa' codep=0x224c parp=0xefaa
// ================================================

void UNK_0xefaa() // UNK_0xefaa
{
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0080);
  Push(Pop() & Pop()); // AND
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xefbe: WORD 'UNK_0xefc0' codep=0x224c parp=0xefc0
// ================================================

void UNK_0xefc0() // UNK_0xefc0
{
  unsigned short int a;
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00bf);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  Push(a); // R>
  C_ex_(); // C!
}


// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x224c parp=0xefe0
// ================================================

void UNK_0xefe0() // UNK_0xefe0
{
  Push(0); // 0
  Push(pp_UNK_0xef4a); // UNK_0xef4a
  Push(Read16(Pop())); // @
  Push(0x6418); // IFIELD(UNK_0xef02)
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xefee: WORD 'UNK_0xeff0' codep=0x224c parp=0xeff0
// ================================================

void UNK_0xeff0() // UNK_0xeff0
{
  Push(pp__ask_REPAIR); // ?REPAIR
  OFF_2(); // OFF_2
  Push(pp_UNK_0xef46); // UNK_0xef46
  OFF_2(); // OFF_2
}


// ================================================
// 0xeffa: WORD 'UNK_0xeffc' codep=0x224c parp=0xeffc
// ================================================

void UNK_0xeffc() // UNK_0xeffc
{
  signed short int i, imax;
  Push(Read16(cc__dash_1)); // -1
  Push(Read16(cc__7)); // 7
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _gt_FIELD(); // >FIELD case
  UNK_0xef7e(); // UNK_0xef7e
  if (Pop() == 0) goto label1;
  Push(i); // I
  _gt_FIELD(); // >FIELD case
  UNK_0xef8e(); // UNK_0xef8e
  Push(0x0064);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(i); // I
  imax = i; // LEAVE
  goto label1;

  label2:
  UNK_0xeff0(); // UNK_0xeff0
  imax = i; // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd6

  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xef4a); // UNK_0xef4a
  _ex__3(); // !_3
}


// ================================================
// 0xf038: WORD 'UNK_0xf03a' codep=0x1d29 parp=0xf03a
// ================================================
// 0xf03a: db 0x3a 0x20 ': '

// ================================================
// 0xf03c: WORD 'UNK_0xf03e' codep=0x224c parp=0xf03e
// ================================================

void UNK_0xf03e() // UNK_0xf03e
{
  unsigned short int a;
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x6409); // IFIELD(UNK_0xef11)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x00fb);
  Push(0x640b); // IFIELD(UNK_0xef16)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  _dash_(); // -
  Push(0x0064);
  ROT(); // ROT
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(Pop()+1); // 1+
  Push(0x1c1b);
  Push(0x5559);
  _star__slash_(); // */
  Push(Read16(cc__5)); // 5
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Push(Read16(cc__6)); // 6
  _slash_(); // /
  Push(0x000a);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xf03a); // UNK_0xf03a
  _ex__3(); // !_3
}


// ================================================
// 0xf084: WORD 'UNK_0xf086' codep=0x224c parp=0xf086
// ================================================

void UNK_0xf086() // UNK_0xf086
{
  Push(pp_UNK_0xef4a); // UNK_0xef4a
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _gt_FIELD(); // >FIELD case
  UNK_0xef8e(); // UNK_0xef8e
  Push(Read16(regsp)); // DUP
  UNK_0xf03e(); // UNK_0xf03e
  Push(0x0064);
  ROT(); // ROT
  _dash_(); // -
  _slash_(); // /
  Push(pp_REAL_dash_MS); // REAL-MS
  _2_at_(); // 2@
  Push(0x0018);
  M_slash_(); // M/
  SWAP(); // SWAP
  Pop(); // DROP
  Push(Pop() * Pop()); // *
  Push(pp_REPAIRT); // REPAIRT
  _st__ex__gt_(); // <!>
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf0c2: WORD 'UNK_0xf0c4' codep=0x1d29 parp=0xf0c4
// ================================================
// 0xf0c4: db 0x01 0x00 0x0c 0x00 0x14 0x00 0x04 0x00 0x10 0x00 '          '

// ================================================
// 0xf0ce: WORD 'UNK_0xf0d0' codep=0x224c parp=0xf0d0
// ================================================

void UNK_0xf0d0() // UNK_0xf0d0
{
  Push(0); // 0
  Push(Read16(cc__5)); // 5
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xf0c4); // UNK_0xf0c4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xef4e); // UNK_0xef4e
  _ex__3(); // !_3
}


// ================================================
// 0xf0e6: WORD 'UNK_0xf0e8' codep=0x224c parp=0xf0e8
// ================================================

void UNK_0xf0e8() // UNK_0xf0e8
{
  Push(1); // 1
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  Push(Read16(cc__7)); // 7
  MIN(); // MIN
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  UNK_0xef56(); // UNK_0xef56
}


// ================================================
// 0xf10c: WORD 'UNK_0xf10e' codep=0x224c parp=0xf10e
// ================================================

void UNK_0xf10e() // UNK_0xf10e
{
  Push(1); // 1
  Push(Read16(cc__7)); // 7
  RRND(); // RRND
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  UNK_0xef56(); // UNK_0xef56
}


// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x224c parp=0xf122
// ================================================

void UNK_0xf122() // UNK_0xf122
{
  Push(0); // 0
  Push(pp_UNK_0xf03a); // UNK_0xf03a
  Push(Read16(Pop())); // @
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xf12e: WORD 'UNK_0xf130' codep=0x224c parp=0xf130
// ================================================

void UNK_0xf130() // UNK_0xf130
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  SWAP(); // SWAP
  IFIND(); // IFIND
  if (Pop() == 0) goto label2;
  UNK_0xef5e(); // UNK_0xef5e
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(1); // 1
  goto label4;

  label3:
  Push(0); // 0

  label4:
  goto label5;

  label2:
  Push(0); // 0

  label5:
  ICLOSE(); // ICLOSE
  goto label6;

  label1:
  Pop(); // DROP
  Push(0); // 0

  label6:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf180: WORD 'UNK_0xf182' codep=0x224c parp=0xf182
// ================================================

void UNK_0xf182() // UNK_0xf182
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001a);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x224c parp=0xf1a6
// ================================================

void UNK_0xf1a6() // UNK_0xf1a6
{
  Push(0x0020);
  Push(0x000a);
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(0x6418); // IFIELD(UNK_0xef02)
  Push(pp_UNK_0xef4a); // UNK_0xef4a
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xf1be: WORD 'UNK_0xf1c0' codep=0x224c parp=0xf1c0
// ================================================

void UNK_0xf1c0() // UNK_0xf1c0
{
  Push(pp_UNK_0xef4a); // UNK_0xef4a
  Push(Read16(Pop())); // @
  Push(0x6418); // IFIELD(UNK_0xef02)
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x001f);
  Push(Pop() & Pop()); // AND
  SWAP(); // SWAP
  Push(0x0020);
  _slash_(); // /
  Push(0x000a);
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xf1e2: WORD 'UNK_0xf1e4' codep=0x224c parp=0xf1e4
// ================================================

void UNK_0xf1e4() // UNK_0xf1e4
{
  Push(pp_UNK_0xef4e); // UNK_0xef4e
  Push(Read16(Pop())); // @
  Push(pp_RECORD_n_); // RECORD#
  _ex__3(); // !_3
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  _ex__3(); // !_3
  LoadData("ELEM-NAME"); // from 'ELEMENT     '
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAILING(); // -XTRAILING
  _dot_TTY(); // .TTY
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf206: WORD 'UNK_0xf208' codep=0x224c parp=0xf208
// ================================================

void UNK_0xf208() // UNK_0xf208
{

  UNK_0x3f3b("SHALL I TAKE THIS FROM CARGO\?");
  _dot_TTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xf236: WORD 'UNK_0xf238' codep=0x224c parp=0xf238
// ================================================

void UNK_0xf238() // UNK_0xf238
{
  BEEP(); // BEEP
  CTERASE(); // CTERASE

  UNK_0x3f3b("CAPTAIN, WE NEED ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf254: WORD 'UNK_0xf256' codep=0x224c parp=0xf256
// ================================================

void UNK_0xf256() // UNK_0xf256
{

  UNK_0x3f3b(" FOR REPAIRS.");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf26a: WORD 'UNK_0xf26c' codep=0x224c parp=0xf26c
// ================================================

void UNK_0xf26c() // UNK_0xf26c
{
  UNK_0xef5e(); // UNK_0xef5e
  Push(0x000a);
  _slash_(); // /
  _dot_(); // .

  UNK_0x3f3b("CUBIC METER");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  UNK_0xef5e(); // UNK_0xef5e
  Push(0x000a);
  _dash_(); // -
  if (Pop() == 0) goto label1;
  PRINT("S", 1); // (.")

  label1:
  PRINT(" OF", 3); // (.")
}


// ================================================
// 0xf29e: WORD 'UNK_0xf2a0' codep=0x224c parp=0xf2a0
// ================================================

void UNK_0xf2a0() // UNK_0xf2a0
{

  UNK_0x3f3b("             [NO YES]");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf2bc: WORD 'UNK_0xf2be' codep=0x224c parp=0xf2be
// ================================================

void UNK_0xf2be() // UNK_0xf2be
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xf238(); // UNK_0xf238
  UNK_0xf26c(); // UNK_0xf26c
  UNK_0xf1e4(); // UNK_0xf1e4
  UNK_0xf256(); // UNK_0xf256
  UNK_0xf208(); // UNK_0xf208
  UNK_0xf2a0(); // UNK_0xf2a0
}


// ================================================
// 0xf2d0: WORD 'UNK_0xf2d2' codep=0x224c parp=0xf2d2
// ================================================

void UNK_0xf2d2() // UNK_0xf2d2
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf2d8: WORD 'UNK_0xf2da' codep=0x224c parp=0xf2da
// ================================================

void UNK_0xf2da() // UNK_0xf2da
{
  Push(pp_UNK_0xef4a); // UNK_0xef4a
  Push(Read16(Pop())); // @
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(0); // 0
  UNK_0xef76(); // UNK_0xef76
  UNK_0xefc0(); // UNK_0xefc0
}


// ================================================
// 0xf2ee: WORD 'UNK_0xf2f0' codep=0x224c parp=0xf2f0
// ================================================

void UNK_0xf2f0() // UNK_0xf2f0
{

  UNK_0x3f3b("CEASING REPAIR ");
  _dot_TTY(); // .TTY
  Push(pp__ask_REPAIR); // ?REPAIR
  OFF(); // OFF
  Push(pp_UNK_0xef46); // UNK_0xef46
  OFF(); // OFF
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf314: WORD 'UNK_0xf316' codep=0x224c parp=0xf316
// ================================================

void UNK_0xf316() // UNK_0xf316
{
  UNK_0xf2d2(); // UNK_0xf2d2
  UNK_0xf238(); // UNK_0xf238
  UNK_0xf26c(); // UNK_0xf26c
  UNK_0xf1e4(); // UNK_0xf1e4
  UNK_0xf256(); // UNK_0xf256
}


// ================================================
// 0xf322: WORD 'UNK_0xf324' codep=0x224c parp=0xf324
// ================================================

void UNK_0xf324() // UNK_0xf324
{
  UNK_0xf2d2(); // UNK_0xf2d2

  UNK_0x3f3b("REPAIR COMPLETED ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf33e: WORD 'UNK_0xf340' codep=0x224c parp=0xf340
// ================================================

void UNK_0xf340() // UNK_0xf340
{

  UNK_0x3f3b("CONTINUING REPAIR ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf359: WORD 'UNK_0xf35b' codep=0x224c parp=0xf35b
// ================================================

void UNK_0xf35b() // UNK_0xf35b
{
  UNK_0xf0d0(); // UNK_0xf0d0
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xef52); // UNK_0xef52
  OFF(); // OFF
  UNK_0xf130(); // UNK_0xf130
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  UNK_0xf182(); // UNK_0xf182
  UNK_0xf0e8(); // UNK_0xf0e8
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xf1a6(); // UNK_0xf1a6
  CDROP(); // CDROP
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  return;

  label1:
  Push(pp_UNK_0xef4e); // UNK_0xef4e
  Push(Read16(Pop())); // @
  UNK_0xf10e(); // UNK_0xf10e
  UNK_0xf1a6(); // UNK_0xf1a6
}


// ================================================
// 0xf38d: WORD 'UNK_0xf38f' codep=0x224c parp=0xf38f
// ================================================

void UNK_0xf38f() // UNK_0xf38f
{
  unsigned short int a;
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  UNK_0xf1c0(); // UNK_0xf1c0
  SWAP(); // SWAP
  UNK_0xf182(); // UNK_0xf182
  Pop(); // DROP
  UNK_0xef5e(); // UNK_0xef5e
  Push(0x63fa); // IFIELD(INST-QTY)
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__3(); // !_3
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x6432); // IFIELD(UNK_0xef0c)
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
  _ro_BOX_gt__rc_(); // (BOX>)
  Pop(); Pop();// 2DROP
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__3(); // !_3
  UNK_0xefe0(); // UNK_0xefe0
}


// ================================================
// 0xf3c9: WORD 'UNK_0xf3cb' codep=0x224c parp=0xf3cb
// ================================================

void UNK_0xf3cb() // UNK_0xf3cb
{
  UNK_0xf2be(); // UNK_0xf2be
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Y_slash_N(); // Y/N
  if (Pop() == 0) goto label1;
  UNK_0xf340(); // UNK_0xf340
  UNK_0xf38f(); // UNK_0xf38f
  Push(pp_UNK_0xef46); // UNK_0xef46
  ON_3(); // ON_3
  return;

  label1:
  Push(pp_UNK_0xef46); // UNK_0xef46
  OFF(); // OFF
}


// ================================================
// 0xf3e9: WORD 'UNK_0xf3eb' codep=0x224c parp=0xf3eb
// ================================================

void UNK_0xf3eb() // UNK_0xf3eb
{
  UNK_0xf316(); // UNK_0xf316
  Push(pp_UNK_0xef46); // UNK_0xef46
  OFF_2(); // OFF_2
}


// ================================================
// 0xf3f3: WORD 'UNK_0xf3f5' codep=0x224c parp=0xf3f5
// ================================================

void UNK_0xf3f5() // UNK_0xf3f5
{
  UNK_0xf130(); // UNK_0xf130
  if (Pop() == 0) goto label1;
  UNK_0xf3cb(); // UNK_0xf3cb
  return;

  label1:
  UNK_0xf3eb(); // UNK_0xf3eb
}


// ================================================
// 0xf405: WORD 'UNK_0xf407' codep=0x224c parp=0xf407
// ================================================

void UNK_0xf407() // UNK_0xf407
{
  UNK_0xf1c0(); // UNK_0xf1c0
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  UNK_0xf122(); // UNK_0xf122
  if (Pop() == 0) goto label2;
  UNK_0xf35b(); // UNK_0xf35b
  UNK_0xf3f5(); // UNK_0xf3f5
  goto label3;

  label2:
  Push(pp_UNK_0xef46); // UNK_0xef46
  ON_3(); // ON_3
  return;


  label3:
  goto label4;

  label1:
  UNK_0xef56(); // UNK_0xef56
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xef4e); // UNK_0xef4e
  _ex__3(); // !_3
  UNK_0xf3f5(); // UNK_0xf3f5

  label4:
  Push(pp_UNK_0xef46); // UNK_0xef46
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf2f0(); // UNK_0xf2f0
  UNK_0xf2da(); // UNK_0xf2da
  UNK_0xeff0(); // UNK_0xeff0
}


// ================================================
// 0xf447: WORD 'UNK_0xf449' codep=0x224c parp=0xf449
// ================================================

void UNK_0xf449() // UNK_0xf449
{
  UNK_0xef76(); // UNK_0xef76
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  UNK_0xef76(); // UNK_0xef76
  Push(Pop()+1); // 1+
  C_ex_(); // C!
}


// ================================================
// 0xf45d: WORD 'UNK_0xf45f' codep=0x224c parp=0xf45f
// ================================================

void UNK_0xf45f() // UNK_0xf45f
{
  UNK_0xef76(); // UNK_0xef76
  UNK_0xef9a(); // UNK_0xef9a
  UNK_0xef76(); // UNK_0xef76
  UNK_0xef8e(); // UNK_0xef8e
  Push(0x0049);
  _gt_(); // >
  Push(0); // 0
  Push(Read16(cc__5)); // 5
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xf449(); // UNK_0xf449
  Push(1); // 1
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f3b("ITEM OPERATIONAL ");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf4a7: WORD 'UNK_0xf4a9' codep=0x224c parp=0xf4a9
// ================================================

void UNK_0xf4a9() // UNK_0xf4a9
{
  Push(Pop()+1); // 1+
  Push(0x0064);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  UNK_0xef76(); // UNK_0xef76
  UNK_0xefaa(); // UNK_0xefaa
  UNK_0xf45f(); // UNK_0xf45f
}


// ================================================
// 0xf4bb: WORD 'UNK_0xf4bd' codep=0x224c parp=0xf4bd
// ================================================

void UNK_0xf4bd() // UNK_0xf4bd
{
  Push(pp__ask_REPAIR); // ?REPAIR
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  UNK_0xeffc(); // UNK_0xeffc
  Pop(); // DROP
  UNK_0xf086(); // UNK_0xf086
  Push(Read16(cc__dash_1)); // -1
  Push(pp__ask_REPAIR); // ?REPAIR
  _ex__3(); // !_3
}


// ================================================
// 0xf4d7: WORD 'DO-REPA' codep=0x224c parp=0xf4e3
// ================================================
// entry

void DO_dash_REPA() // DO-REPA
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xf4bd(); // UNK_0xf4bd
  UNK_0xef66(); // UNK_0xef66
  _0_st_(); // 0<
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xef76(); // UNK_0xef76
  UNK_0xef8e(); // UNK_0xef8e
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label2;
  UNK_0xf407(); // UNK_0xf407
  Push(pp_UNK_0xef46); // UNK_0xef46
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  UNK_0xf4a9(); // UNK_0xf4a9
  Push(0x0064);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label4;
  UNK_0xf324(); // UNK_0xf324
  UNK_0xf2da(); // UNK_0xf2da
  UNK_0xeff0(); // UNK_0xeff0
  UNK_0xf449(); // UNK_0xf449

  label4:
  goto label2;

  label3:
  Pop(); // DROP

  label2:
  goto label5;

  label1:
  UNK_0xf324(); // UNK_0xf324
  UNK_0xf2da(); // UNK_0xf2da
  UNK_0xeff0(); // UNK_0xeff0

  label5:
  ICLOSE(); // ICLOSE
}

// 0xf52f: db 0x52 0x45 0x50 0x41 0x49 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x20 0x72 0x66 0x00 'REPAIR__________________________-------------( rf '
  