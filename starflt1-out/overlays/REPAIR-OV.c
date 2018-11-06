// ====== OVERLAY 'REPAIR-OV' ======
// store offset = 0xeec0
// overlay size   = 0x06a0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WEED6  codep:0x2214 parp:0xeed6 size:0x0002 C-string:'WEED6'
//           WEEDA  codep:0x744d parp:0xeeda size:0x0003 C-string:'WEEDA'
//           WEEDF  codep:0x744d parp:0xeedf size:0x0003 C-string:'WEEDF'
//           WEEE4  codep:0x744d parp:0xeee4 size:0x0003 C-string:'WEEE4'
//           WEEE9  codep:0x744d parp:0xeee9 size:0x0003 C-string:'WEEE9'
//           WEEEE  codep:0x744d parp:0xeeee size:0x0003 C-string:'WEEEE'
//           WEEF3  codep:0x744d parp:0xeef3 size:0x0003 C-string:'WEEF3'
//           WEEF8  codep:0x744d parp:0xeef8 size:0x0003 C-string:'WEEF8'
//           WEEFD  codep:0x744d parp:0xeefd size:0x0003 C-string:'WEEFD'
//           WEF02  codep:0x744d parp:0xef02 size:0x0003 C-string:'WEF02'
//           WEF07  codep:0x744d parp:0xef07 size:0x0003 C-string:'WEF07'
//           WEF0C  codep:0x744d parp:0xef0c size:0x0003 C-string:'WEF0C'
//           WEF11  codep:0x744d parp:0xef11 size:0x0003 C-string:'WEF11'
//           WEF16  codep:0x744d parp:0xef16 size:0x0003 C-string:'WEF16'
//          >FIELD  codep:0x4a4f parp:0xef24 size:0x0020 C-string:'_gt_FIELD'
//           WEF46  codep:0x1d29 parp:0xef46 size:0x0002 C-string:'WEF46'
//           WEF4A  codep:0x1d29 parp:0xef4a size:0x0002 C-string:'WEF4A'
//           WEF4E  codep:0x1d29 parp:0xef4e size:0x0002 C-string:'WEF4E'
//           WEF52  codep:0x1d29 parp:0xef52 size:0x0002 C-string:'WEF52'
//           WEF56  codep:0x224c parp:0xef56 size:0x0006 C-string:'WEF56'
//           WEF5E  codep:0x224c parp:0xef5e size:0x0006 C-string:'WEF5E'
//           WEF66  codep:0x224c parp:0xef66 size:0x0006 C-string:'WEF66'
//           WEF6E  codep:0x224c parp:0xef6e size:0x0006 C-string:'WEF6E'
//           WEF76  codep:0x224c parp:0xef76 size:0x0006 C-string:'WEF76'
//           WEF7E  codep:0x224c parp:0xef7e size:0x000e C-string:'WEF7E'
//           WEF8E  codep:0x224c parp:0xef8e size:0x000a C-string:'WEF8E'
//           WEF9A  codep:0x224c parp:0xef9a size:0x000e C-string:'WEF9A'
//           WEFAA  codep:0x224c parp:0xefaa size:0x0014 C-string:'WEFAA'
//           WEFC0  codep:0x224c parp:0xefc0 size:0x001e C-string:'WEFC0'
//           WEFE0  codep:0x224c parp:0xefe0 size:0x000e C-string:'WEFE0'
//           WEFF0  codep:0x224c parp:0xeff0 size:0x000a C-string:'WEFF0'
//           WEFFC  codep:0x224c parp:0xeffc size:0x003c C-string:'WEFFC'
//           WF03A  codep:0x1d29 parp:0xf03a size:0x0002 C-string:'WF03A'
//           WF03E  codep:0x224c parp:0xf03e size:0x0046 C-string:'WF03E'
//           WF086  codep:0x224c parp:0xf086 size:0x003c C-string:'WF086'
//           WF0C4  codep:0x1d29 parp:0xf0c4 size:0x000a C-string:'WF0C4'
//           WF0D0  codep:0x224c parp:0xf0d0 size:0x0016 C-string:'WF0D0'
//           WF0E8  codep:0x224c parp:0xf0e8 size:0x0024 C-string:'WF0E8'
//           WF10E  codep:0x224c parp:0xf10e size:0x0012 C-string:'WF10E'
//           WF122  codep:0x224c parp:0xf122 size:0x000c C-string:'WF122'
//           WF130  codep:0x224c parp:0xf130 size:0x0050 C-string:'WF130'
//           WF182  codep:0x224c parp:0xf182 size:0x0022 C-string:'WF182'
//           WF1A6  codep:0x224c parp:0xf1a6 size:0x0018 C-string:'WF1A6'
//           WF1C0  codep:0x224c parp:0xf1c0 size:0x0022 C-string:'WF1C0'
//           WF1E4  codep:0x224c parp:0xf1e4 size:0x0022 C-string:'WF1E4'
//           WF208  codep:0x224c parp:0xf208 size:0x002e C-string:'WF208'
//           WF238  codep:0x224c parp:0xf238 size:0x001c C-string:'WF238'
//           WF256  codep:0x224c parp:0xf256 size:0x0014 C-string:'WF256'
//           WF26C  codep:0x224c parp:0xf26c size:0x0032 C-string:'WF26C'
//           WF2A0  codep:0x224c parp:0xf2a0 size:0x001c C-string:'WF2A0'
//           WF2BE  codep:0x224c parp:0xf2be size:0x0012 C-string:'WF2BE'
//           WF2D2  codep:0x224c parp:0xf2d2 size:0x0006 C-string:'WF2D2'
//           WF2DA  codep:0x224c parp:0xf2da size:0x0014 C-string:'WF2DA'
//           WF2F0  codep:0x224c parp:0xf2f0 size:0x0024 C-string:'WF2F0'
//           WF316  codep:0x224c parp:0xf316 size:0x000c C-string:'WF316'
//           WF324  codep:0x224c parp:0xf324 size:0x001a C-string:'WF324'
//           WF340  codep:0x224c parp:0xf340 size:0x0019 C-string:'WF340'
//           WF35B  codep:0x224c parp:0xf35b size:0x0032 C-string:'WF35B'
//           WF38F  codep:0x224c parp:0xf38f size:0x003a C-string:'WF38F'
//           WF3CB  codep:0x224c parp:0xf3cb size:0x001e C-string:'WF3CB'
//           WF3EB  codep:0x224c parp:0xf3eb size:0x0008 C-string:'WF3EB'
//           WF3F5  codep:0x224c parp:0xf3f5 size:0x0010 C-string:'WF3F5'
//           WF407  codep:0x224c parp:0xf407 size:0x0040 C-string:'WF407'
//           WF449  codep:0x224c parp:0xf449 size:0x0014 C-string:'WF449'
//           WF45F  codep:0x224c parp:0xf45f size:0x0048 C-string:'WF45F'
//           WF4A9  codep:0x224c parp:0xf4a9 size:0x0012 C-string:'WF4A9'
//           WF4BD  codep:0x224c parp:0xf4bd size:0x001a C-string:'WF4BD'
//         DO-REPA  codep:0x224c parp:0xf4e3 size:0x0000 C-string:'DO_dash_REPA'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_REPAIRT; // REPAIRT
extern const unsigned short int pp_IsREPAIR; // ?REPAIR
extern const unsigned short int pp_REAL_dash_MS; // REAL-MS
extern LoadDataType ELEM_dash_NAME; // ELEM-NAME
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
void _star__slash_(); // */
void M_slash_(); // M/
void MAX(); // MAX
void MIN(); // MIN
void BEEP(); // BEEP
void Draw(); // .
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void ON_3(); // ON_3
void OFF(); // OFF
void CDROP(); // CDROP
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void CTERASE(); // CTERASE
void DrawTTY(); // .TTY
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
const unsigned short int pp_WEF46 = 0xef46; // WEF46 size: 2
// {0x01, 0x00}

const unsigned short int pp_WEF4A = 0xef4a; // WEF4A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEF4E = 0xef4e; // WEF4E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEF52 = 0xef52; // WEF52 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF03A = 0xf03a; // WF03A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF0C4 = 0xf0c4; // WF0C4 size: 10
// {0x01, 0x00, 0x0c, 0x00, 0x14, 0x00, 0x04, 0x00, 0x10, 0x00}


const unsigned short int cc_WEED6 = 0xeed6; // WEED6


// 0xeed2: db 0x67 0x00 'g '

// ================================================
// 0xeed4: WORD 'WEED6' codep=0x2214 parp=0xeed6
// ================================================
// orphan
// 0xeed6: dw 0x0014

// ================================================
// 0xeed8: WORD 'WEEDA' codep=0x744d parp=0xeeda
// ================================================
IFieldType WEEDA = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xeedd: WORD 'WEEDF' codep=0x744d parp=0xeedf
// ================================================
// orphan
IFieldType WEEDF = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xeee2: WORD 'WEEE4' codep=0x744d parp=0xeee4
// ================================================
IFieldType WEEE4 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xeee7: WORD 'WEEE9' codep=0x744d parp=0xeee9
// ================================================
IFieldType WEEE9 = {SHIPIDX, 0x15, 0x02};

// ================================================
// 0xeeec: WORD 'WEEEE' codep=0x744d parp=0xeeee
// ================================================
IFieldType WEEEE = {SHIPIDX, 0x17, 0x02};

// ================================================
// 0xeef1: WORD 'WEEF3' codep=0x744d parp=0xeef3
// ================================================
IFieldType WEEF3 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xeef6: WORD 'WEEF8' codep=0x744d parp=0xeef8
// ================================================
IFieldType WEEF8 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xeefb: WORD 'WEEFD' codep=0x744d parp=0xeefd
// ================================================
IFieldType WEEFD = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xef00: WORD 'WEF02' codep=0x744d parp=0xef02
// ================================================
IFieldType WEF02 = {SHIPIDX, 0x29, 0x07};

// ================================================
// 0xef05: WORD 'WEF07' codep=0x744d parp=0xef07
// ================================================
// orphan
IFieldType WEF07 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xef0a: WORD 'WEF0C' codep=0x744d parp=0xef0c
// ================================================
IFieldType WEF0C = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xef0f: WORD 'WEF11' codep=0x744d parp=0xef11
// ================================================
IFieldType WEF11 = {ASSIGN_CREWIDX, 0x1a, 0x03};

// ================================================
// 0xef14: WORD 'WEF16' codep=0x744d parp=0xef16
// ================================================
IFieldType WEF16 = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xef19: WORD '>FIELD' codep=0x4a4f parp=0xef24
// ================================================

void _gt_FIELD() // >FIELD
{
  switch(Pop()) // >FIELD
  {
  case 0:
    Push(0x63ef+WEEDA.offset); // IFIELD
    break;
  case 1:
    Push(0x63ef+WEEE4.offset); // IFIELD
    break;
  case 2:
    Push(0x63ef+WEEE9.offset); // IFIELD
    break;
  case 3:
    Push(0x63ef+WEEEE.offset); // IFIELD
    break;
  case 4:
    Push(0x63ef+WEEF3.offset); // IFIELD
    break;
  case 5:
    Push(0x63ef+WEEF8.offset); // IFIELD
    break;
  case 6:
    Push(0x63ef+WEEFD.offset); // IFIELD
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xef44: WORD 'WEF46' codep=0x1d29 parp=0xef46
// ================================================
// 0xef46: db 0x01 0x00 '  '

// ================================================
// 0xef48: WORD 'WEF4A' codep=0x1d29 parp=0xef4a
// ================================================
// 0xef4a: db 0x3a 0x20 ': '

// ================================================
// 0xef4c: WORD 'WEF4E' codep=0x1d29 parp=0xef4e
// ================================================
// 0xef4e: db 0x3a 0x20 ': '

// ================================================
// 0xef50: WORD 'WEF52' codep=0x1d29 parp=0xef52
// ================================================
// 0xef52: db 0x3a 0x20 ': '

// ================================================
// 0xef54: WORD 'WEF56' codep=0x224c parp=0xef56 params=1 returns=0
// ================================================

void WEF56() // WEF56
{
  Push(pp_WEF52); // WEF52
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef5c: WORD 'WEF5E' codep=0x224c parp=0xef5e params=0 returns=1
// ================================================

void WEF5E() // WEF5E
{
  Push(Read16(pp_WEF52)); // WEF52 @
}


// ================================================
// 0xef64: WORD 'WEF66' codep=0x224c parp=0xef66 params=0 returns=1
// ================================================

void WEF66() // WEF66
{
  Push(Read16(pp_WEF4A)); // WEF4A @
}


// ================================================
// 0xef6c: WORD 'WEF6E' codep=0x224c parp=0xef6e params=1 returns=1
// ================================================

void WEF6E() // WEF6E
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xef74: WORD 'WEF76' codep=0x224c parp=0xef76
// ================================================

void WEF76() // WEF76
{
  WEF66(); // WEF66
  _gt_FIELD(); // >FIELD case
}


// ================================================
// 0xef7c: WORD 'WEF7E' codep=0x224c parp=0xef7e params=1 returns=1
// ================================================

void WEF7E() // WEF7E
{
  Push((Read16(Pop() + 1)&0xFF) & 0x0040); //  1+ C@ 0x0040 AND
  WEF6E(); // WEF6E
}


// ================================================
// 0xef8c: WORD 'WEF8E' codep=0x224c parp=0xef8e params=1 returns=1
// ================================================

void WEF8E() // WEF8E
{
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
}


// ================================================
// 0xef98: WORD 'WEF9A' codep=0x224c parp=0xef9a params=1 returns=1
// ================================================

void WEF9A() // WEF9A
{
  Push((Read16(Pop() + 1)&0xFF) & 0x0080); //  1+ C@ 0x0080 AND
  WEF6E(); // WEF6E
}


// ================================================
// 0xefa8: WORD 'WEFAA' codep=0x224c parp=0xefaa params=2 returns=0
// ================================================

void WEFAA() // WEFAA
{
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) & 0x0080); //  C@ 0x0080 AND
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
}


// ================================================
// 0xefbe: WORD 'WEFC0' codep=0x224c parp=0xefc0 params=2 returns=0
// ================================================

void WEFC0() // WEFC0
{
  unsigned short int a;
  Push(Pop() + 1); //  1+
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push((Read16(Pop())&0xFF) & 0x00bf); //  C@ 0x00bf AND
  SWAP(); // SWAP
  Push(Pop() * 0x0040); //  0x0040 *
  Push(Pop() | Pop()); // OR
  Push(a); // R>
  C_ex_(); // C!
}


// ================================================
// 0xefde: WORD 'WEFE0' codep=0x224c parp=0xefe0 params=0 returns=0
// ================================================

void WEFE0() // WEFE0
{
  Push(0);
  Push(Read16(pp_WEF4A) + (0x63ef+WEF02.offset)); // WEF4A @ WEF02<IFIELD> +
  C_ex_(); // C!
}


// ================================================
// 0xefee: WORD 'WEFF0' codep=0x224c parp=0xeff0 params=0 returns=0
// ================================================

void WEFF0() // WEFF0
{
  Push(pp_IsREPAIR); // ?REPAIR
  OFF_2(); // OFF_2
  Push(pp_WEF46); // WEF46
  OFF_2(); // OFF_2
}


// ================================================
// 0xeffa: WORD 'WEFFC' codep=0x224c parp=0xeffc
// ================================================

void WEFFC() // WEFFC
{
  unsigned short int i, imax;
  Push(-1);
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _gt_FIELD(); // >FIELD case
    WEF7E(); // WEF7E
    if (Pop() != 0)
    {
      Push(i); // I
      _gt_FIELD(); // >FIELD case
      WEF8E(); // WEF8E
      Push(0x0064);
      _st_(); // <
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(i); // I
        imax = i; // LEAVE
      } else
      {
        WEFF0(); // WEFF0
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(regsp)); // DUP
  Push(pp_WEF4A); // WEF4A
  Store_3(); // !_3
}


// ================================================
// 0xf038: WORD 'WF03A' codep=0x1d29 parp=0xf03a
// ================================================
// 0xf03a: db 0x3a 0x20 ': '

// ================================================
// 0xf03c: WORD 'WF03E' codep=0x224c parp=0xf03e params=1 returns=2
// ================================================

void WF03E() // WF03E
{
  unsigned short int a;
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WEF11.offset); // WEF11<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x00fb);
  Push(Read16(0x63ef+WEF16.offset)&0xFF); // WEF16<IFIELD> C@
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  _dash_(); // -
  Push(0x0064);
  ROT(); // ROT
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(Pop() + 1); //  1+
  Push(0x1c1b);
  Push(0x5559);
  _star__slash_(); // */
  Push(Pop() + 5); //  5 +
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Push(6);
  _slash_(); // /
  Push(Pop() + 0x000a); //  0x000a +
  Push(pp_WF03A); // WF03A
  Store_3(); // !_3
}


// ================================================
// 0xf084: WORD 'WF086' codep=0x224c parp=0xf086 params=0 returns=0
// ================================================

void WF086() // WF086
{
  Push(Read16(pp_WEF4A)); // WEF4A @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _gt_FIELD(); // >FIELD case
    WEF8E(); // WEF8E
    Push(Read16(regsp)); // DUP
    WF03E(); // WF03E
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
  }
  Pop(); // DROP
}


// ================================================
// 0xf0c2: WORD 'WF0C4' codep=0x1d29 parp=0xf0c4
// ================================================
// 0xf0c4: db 0x01 0x00 0x0c 0x00 0x14 0x00 0x04 0x00 0x10 0x00 '          '

// ================================================
// 0xf0ce: WORD 'WF0D0' codep=0x224c parp=0xf0d0 params=0 returns=1
// ================================================

void WF0D0() // WF0D0
{
  Push(0);
  Push(5);
  RRND(); // RRND
  Push(Read16(Pop() * 2 + pp_WF0C4)); //  2* WF0C4 + @
  Push(Read16(regsp)); // DUP
  Push(pp_WEF4E); // WEF4E
  Store_3(); // !_3
}


// ================================================
// 0xf0e6: WORD 'WF0E8' codep=0x224c parp=0xf0e8 params=0 returns=2
// ================================================

void WF0E8() // WF0E8
{
  Push(1);
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(0x000a);
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(7);
  MIN(); // MIN
  Push(Pop() + 1); //  1+
  RRND(); // RRND
  Push(Pop() * 0x000a); //  0x000a *
  Push(Read16(regsp)); // DUP
  WEF56(); // WEF56
}


// ================================================
// 0xf10c: WORD 'WF10E' codep=0x224c parp=0xf10e params=0 returns=1
// ================================================

void WF10E() // WF10E
{
  Push(1);
  Push(7);
  RRND(); // RRND
  Push(Pop() * 0x000a); //  0x000a *
  Push(Read16(regsp)); // DUP
  WEF56(); // WEF56
}


// ================================================
// 0xf120: WORD 'WF122' codep=0x224c parp=0xf122 params=0 returns=1
// ================================================

void WF122() // WF122
{
  Push(0);
  Push(Read16(pp_WF03A)); // WF03A @
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xf12e: WORD 'WF130' codep=0x224c parp=0xf130
// ================================================

void WF130() // WF130
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    SWAP(); // SWAP
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      WEF5E(); // WEF5E
      Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
      _gt_(); // >
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        Push(1);
      } else
      {
        Push(0);
      }
    } else
    {
      Push(0);
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); // DROP
    Push(0);
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf180: WORD 'WF182' codep=0x224c parp=0xf182
// ================================================

void WF182() // WF182
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
// 0xf1a4: WORD 'WF1A6' codep=0x224c parp=0xf1a6 params=2 returns=0
// ================================================

void WF1A6() // WF1A6
{
  Push(0x0020);
  Push(0x000a);
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push((0x63ef+WEF02.offset) + Read16(pp_WEF4A)); // WEF02<IFIELD> WEF4A @ +
  C_ex_(); // C!
}


// ================================================
// 0xf1be: WORD 'WF1C0' codep=0x224c parp=0xf1c0 params=0 returns=3
// ================================================

void WF1C0() // WF1C0
{
  Push(Read16(Read16(pp_WEF4A) + (0x63ef+WEF02.offset))&0xFF); // WEF4A @ WEF02<IFIELD> + C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x001f); //  0x001f AND
  SWAP(); // SWAP
  Push(0x0020);
  _slash_(); // /
  Push(Pop() * 0x000a); //  0x000a *
}


// ================================================
// 0xf1e2: WORD 'WF1E4' codep=0x224c parp=0xf1e4
// ================================================

void WF1E4() // WF1E4
{
  Push(Read16(pp_WEF4E)); // WEF4E @
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  LoadData(ELEM_dash_NAME); // from 'ELEMENT'
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAILING(); // -XTRAILING
  DrawTTY(); // .TTY
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf206: WORD 'WF208' codep=0x224c parp=0xf208
// ================================================

void WF208() // WF208
{
  SET_STR_AS_PARAM("SHALL I TAKE THIS FROM CARGO\?");
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xf236: WORD 'WF238' codep=0x224c parp=0xf238 params=0 returns=0
// ================================================

void WF238() // WF238
{
  BEEP(); // BEEP
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("CAPTAIN, WE NEED ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf254: WORD 'WF256' codep=0x224c parp=0xf256 params=0 returns=0
// ================================================

void WF256() // WF256
{
  SET_STR_AS_PARAM(" FOR REPAIRS.");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf26a: WORD 'WF26C' codep=0x224c parp=0xf26c params=0 returns=1
// ================================================

void WF26C() // WF26C
{
  WEF5E(); // WEF5E
  Push(0x000a);
  _slash_(); // /
  Draw(); // .
  SET_STR_AS_PARAM("CUBIC METER");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  WEF5E(); // WEF5E
  Push(Pop() - 0x000a); //  0x000a -
  if (Pop() != 0)
  {
    PRINT("S", 1); // (.")
  }
  PRINT(" OF", 3); // (.")
}


// ================================================
// 0xf29e: WORD 'WF2A0' codep=0x224c parp=0xf2a0 params=0 returns=0
// ================================================

void WF2A0() // WF2A0
{
  SET_STR_AS_PARAM("             [NO YES]");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf2bc: WORD 'WF2BE' codep=0x224c parp=0xf2be
// ================================================

void WF2BE() // WF2BE
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF238(); // WF238
  WF26C(); // WF26C
  WF1E4(); // WF1E4
  WF256(); // WF256
  WF208(); // WF208
  WF2A0(); // WF2A0
}


// ================================================
// 0xf2d0: WORD 'WF2D2' codep=0x224c parp=0xf2d2 params=0 returns=0
// ================================================

void WF2D2() // WF2D2
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf2d8: WORD 'WF2DA' codep=0x224c parp=0xf2da params=0 returns=0
// ================================================

void WF2DA() // WF2DA
{
  Push(Read16(pp_WEF4A)); // WEF4A @
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(0);
  WEF76(); // WEF76
  WEFC0(); // WEFC0
}


// ================================================
// 0xf2ee: WORD 'WF2F0' codep=0x224c parp=0xf2f0 params=0 returns=2
// ================================================

void WF2F0() // WF2F0
{
  SET_STR_AS_PARAM("CEASING REPAIR ");
  DrawTTY(); // .TTY
  Push(pp_IsREPAIR); // ?REPAIR
  OFF(); // OFF
  Push(pp_WEF46); // WEF46
  OFF(); // OFF
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf314: WORD 'WF316' codep=0x224c parp=0xf316
// ================================================

void WF316() // WF316
{
  WF2D2(); // WF2D2
  WF238(); // WF238
  WF26C(); // WF26C
  WF1E4(); // WF1E4
  WF256(); // WF256
}


// ================================================
// 0xf322: WORD 'WF324' codep=0x224c parp=0xf324 params=0 returns=0
// ================================================

void WF324() // WF324
{
  WF2D2(); // WF2D2
  SET_STR_AS_PARAM("REPAIR COMPLETED ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf33e: WORD 'WF340' codep=0x224c parp=0xf340 params=0 returns=0
// ================================================

void WF340() // WF340
{
  SET_STR_AS_PARAM("CONTINUING REPAIR ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf359: WORD 'WF35B' codep=0x224c parp=0xf35b
// ================================================

void WF35B() // WF35B
{
  WF0D0(); // WF0D0
  Push(Read16(regsp)); // DUP
  Push(pp_WEF52); // WEF52
  OFF(); // OFF
  WF130(); // WF130
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    WF182(); // WF182
    WF0E8(); // WF0E8
    Push2Words("*SHIP");
    _gt_C_plus_S(); // >C+S
    WF1A6(); // WF1A6
    CDROP(); // CDROP
    CDROP(); // CDROP
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    return;
  }
  Push(Read16(pp_WEF4E)); // WEF4E @
  WF10E(); // WF10E
  WF1A6(); // WF1A6
}


// ================================================
// 0xf38d: WORD 'WF38F' codep=0x224c parp=0xf38f
// ================================================

void WF38F() // WF38F
{
  unsigned short int a;
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  a = Pop(); // >R
  WF1C0(); // WF1C0
  SWAP(); // SWAP
  WF182(); // WF182
  Pop(); // DROP
  WEF5E(); // WEF5E
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_3(); // !_3
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WEF0C.offset); // WEF0C<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  _ro_BOX_gt__rc_(); // (BOX>)
  Pop(); Pop(); // 2DROP
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_3(); // !_3
  WEFE0(); // WEFE0
}


// ================================================
// 0xf3c9: WORD 'WF3CB' codep=0x224c parp=0xf3cb
// ================================================

void WF3CB() // WF3CB
{
  WF2BE(); // WF2BE
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Y_slash_N(); // Y/N
  if (Pop() != 0)
  {
    WF340(); // WF340
    WF38F(); // WF38F
    Push(pp_WEF46); // WEF46
    ON_3(); // ON_3
    return;
  }
  Push(pp_WEF46); // WEF46
  OFF(); // OFF
}


// ================================================
// 0xf3e9: WORD 'WF3EB' codep=0x224c parp=0xf3eb
// ================================================

void WF3EB() // WF3EB
{
  WF316(); // WF316
  Push(pp_WEF46); // WEF46
  OFF_2(); // OFF_2
}


// ================================================
// 0xf3f3: WORD 'WF3F5' codep=0x224c parp=0xf3f5
// ================================================

void WF3F5() // WF3F5
{
  WF130(); // WF130
  if (Pop() != 0)
  {
    WF3CB(); // WF3CB
    return;
  }
  WF3EB(); // WF3EB
}


// ================================================
// 0xf405: WORD 'WF407' codep=0x224c parp=0xf407
// ================================================

void WF407() // WF407
{
  WF1C0(); // WF1C0
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    WF122(); // WF122
    if (Pop() != 0)
    {
      WF35B(); // WF35B
      WF3F5(); // WF3F5
    } else
    {
      Push(pp_WEF46); // WEF46
      ON_3(); // ON_3
      return;
    }
  } else
  {
    WEF56(); // WEF56
    Push(Read16(regsp)); // DUP
    Push(pp_WEF4E); // WEF4E
    Store_3(); // !_3
    WF3F5(); // WF3F5
  }
  Push(Read16(pp_WEF46)==0?1:0); // WEF46 @ 0=
  if (Pop() == 0) return;
  WF2F0(); // WF2F0
  WF2DA(); // WF2DA
  WEFF0(); // WEFF0
}


// ================================================
// 0xf447: WORD 'WF449' codep=0x224c parp=0xf449
// ================================================

void WF449() // WF449
{
  WEF76(); // WEF76
  Push((Read16(Pop() + 1)&0xFF) & 0x007f); //  1+ C@ 0x007f AND
  WEF76(); // WEF76
  Push(Pop() + 1); //  1+
  C_ex_(); // C!
}


// ================================================
// 0xf45d: WORD 'WF45F' codep=0x224c parp=0xf45f
// ================================================

void WF45F() // WF45F
{
  WEF76(); // WEF76
  WEF9A(); // WEF9A
  WEF76(); // WEF76
  WEF8E(); // WEF8E
  Push(0x0049);
  _gt_(); // >
  Push(0);
  Push(5);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WF449(); // WF449
    Push(1);
  } else
  {
    Push(0);
  }
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("ITEM OPERATIONAL ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf4a7: WORD 'WF4A9' codep=0x224c parp=0xf4a9
// ================================================

void WF4A9() // WF4A9
{
  Push(Pop() + 1); //  1+
  Push(0x0064);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  WEF76(); // WEF76
  WEFAA(); // WEFAA
  WF45F(); // WF45F
}


// ================================================
// 0xf4bb: WORD 'WF4BD' codep=0x224c parp=0xf4bd params=0 returns=0
// ================================================

void WF4BD() // WF4BD
{
  Push(Read16(pp_IsREPAIR)==1?1:0); // ?REPAIR @ 1 =
  if (Pop() == 0) return;
  WEFFC(); // WEFFC
  Pop(); // DROP
  WF086(); // WF086
  Push(-1);
  Push(pp_IsREPAIR); // ?REPAIR
  Store_3(); // !_3
}


// ================================================
// 0xf4d7: WORD 'DO-REPA' codep=0x224c parp=0xf4e3 params=0 returns=0
// ================================================
// entry

void DO_dash_REPA() // DO-REPA
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WF4BD(); // WF4BD
  WEF66(); // WEF66
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WEF76(); // WEF76
    WEF8E(); // WEF8E
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      WF407(); // WF407
      Push(Read16(pp_WEF46)); // WEF46 @
      if (Pop() != 0)
      {
        WF4A9(); // WF4A9
        Push(Pop()==0x0064?1:0); //  0x0064 =
        if (Pop() != 0)
        {
          WF324(); // WF324
          WF2DA(); // WF2DA
          WEFF0(); // WEFF0
          WF449(); // WF449
        }
      } else
      {
        Pop(); // DROP
      }
    }
  } else
  {
    WF324(); // WF324
    WF2DA(); // WF2DA
    WEFF0(); // WEFF0
  }
  ICLOSE(); // ICLOSE
}

// 0xf52f: db 0x52 0x45 0x50 0x41 0x49 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x20 0x72 0x66 0x00 'REPAIR__________________________-------------( rf '

