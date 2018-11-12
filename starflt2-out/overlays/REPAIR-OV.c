// ====== OVERLAY 'REPAIR-OV' ======
// store offset = 0xeee0
// overlay size   = 0x0680

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEEF6  codep:0x2214 wordp:0xeef6 size:0x0002 C-string:'WEEF6'
//           WEEFA  codep:0x7420 wordp:0xeefa size:0x0003 C-string:'WEEFA'
//           WEEFF  codep:0x7420 wordp:0xeeff size:0x0003 C-string:'WEEFF'
//           WEF04  codep:0x7420 wordp:0xef04 size:0x0003 C-string:'WEF04'
//           WEF09  codep:0x7420 wordp:0xef09 size:0x0003 C-string:'WEF09'
//           WEF0E  codep:0x7420 wordp:0xef0e size:0x0003 C-string:'WEF0E'
//           WEF13  codep:0x7420 wordp:0xef13 size:0x0003 C-string:'WEF13'
//           WEF18  codep:0x7420 wordp:0xef18 size:0x0003 C-string:'WEF18'
//           WEF1D  codep:0x7420 wordp:0xef1d size:0x0003 C-string:'WEF1D'
//           WEF22  codep:0x7420 wordp:0xef22 size:0x0003 C-string:'WEF22'
//           WEF27  codep:0x7420 wordp:0xef27 size:0x0003 C-string:'WEF27'
//           WEF2C  codep:0x7420 wordp:0xef2c size:0x0003 C-string:'WEF2C'
//           WEF31  codep:0x7420 wordp:0xef31 size:0x0003 C-string:'WEF31'
//           WEF36  codep:0x7420 wordp:0xef36 size:0x0003 C-string:'WEF36'
//          >FIELD  codep:0x4b3b wordp:0xef44 size:0x0020 C-string:'_gt_FIELD'
//           WEF66  codep:0x1d29 wordp:0xef66 size:0x0002 C-string:'WEF66'
//           WEF6A  codep:0x1d29 wordp:0xef6a size:0x0002 C-string:'WEF6A'
//           WEF6E  codep:0x1d29 wordp:0xef6e size:0x0002 C-string:'WEF6E'
//           WEF72  codep:0x1d29 wordp:0xef72 size:0x0002 C-string:'WEF72'
//           WEF76  codep:0x224c wordp:0xef76 size:0x0006 C-string:'WEF76'
//           WEF7E  codep:0x224c wordp:0xef7e size:0x0006 C-string:'WEF7E'
//           WEF86  codep:0x224c wordp:0xef86 size:0x0006 C-string:'WEF86'
//           WEF8E  codep:0x224c wordp:0xef8e size:0x0006 C-string:'WEF8E'
//           WEF96  codep:0x224c wordp:0xef96 size:0x0006 C-string:'WEF96'
//           WEF9E  codep:0x224c wordp:0xef9e size:0x000e C-string:'WEF9E'
//           WEFAE  codep:0x224c wordp:0xefae size:0x000a C-string:'WEFAE'
//           WEFBA  codep:0x224c wordp:0xefba size:0x000e C-string:'WEFBA'
//           WEFCA  codep:0x224c wordp:0xefca size:0x0014 C-string:'WEFCA'
//           WEFE0  codep:0x224c wordp:0xefe0 size:0x001e C-string:'WEFE0'
//           WF000  codep:0x224c wordp:0xf000 size:0x000e C-string:'WF000'
//           WF010  codep:0x224c wordp:0xf010 size:0x000a C-string:'WF010'
//           WF01C  codep:0x224c wordp:0xf01c size:0x003c C-string:'WF01C'
//           WF05A  codep:0x1d29 wordp:0xf05a size:0x0002 C-string:'WF05A'
//           WF05E  codep:0x224c wordp:0xf05e size:0x0046 C-string:'WF05E'
//           WF0A6  codep:0x224c wordp:0xf0a6 size:0x003c C-string:'WF0A6'
//           WF0E4  codep:0x1d29 wordp:0xf0e4 size:0x000a C-string:'WF0E4'
//           WF0F0  codep:0x224c wordp:0xf0f0 size:0x0016 C-string:'WF0F0'
//           WF108  codep:0x224c wordp:0xf108 size:0x0024 C-string:'WF108'
//           WF12E  codep:0x224c wordp:0xf12e size:0x0012 C-string:'WF12E'
//           WF142  codep:0x224c wordp:0xf142 size:0x000c C-string:'WF142'
//           WF150  codep:0x224c wordp:0xf150 size:0x0050 C-string:'WF150'
//           WF1A2  codep:0x224c wordp:0xf1a2 size:0x0022 C-string:'WF1A2'
//           WF1C6  codep:0x224c wordp:0xf1c6 size:0x0018 C-string:'WF1C6'
//           WF1E0  codep:0x224c wordp:0xf1e0 size:0x0022 C-string:'WF1E0'
//           WF204  codep:0x224c wordp:0xf204 size:0x0022 C-string:'WF204'
//           WF228  codep:0x224c wordp:0xf228 size:0x002e C-string:'WF228'
//           WF258  codep:0x224c wordp:0xf258 size:0x001e C-string:'WF258'
//           WF278  codep:0x224c wordp:0xf278 size:0x0014 C-string:'WF278'
//           WF28E  codep:0x224c wordp:0xf28e size:0x0032 C-string:'WF28E'
//           WF2C2  codep:0x224c wordp:0xf2c2 size:0x001c C-string:'WF2C2'
//           WF2E0  codep:0x224c wordp:0xf2e0 size:0x0012 C-string:'WF2E0'
//           WF2F4  codep:0x224c wordp:0xf2f4 size:0x0006 C-string:'WF2F4'
//           WF2FC  codep:0x224c wordp:0xf2fc size:0x0014 C-string:'WF2FC'
//           WF312  codep:0x224c wordp:0xf312 size:0x0024 C-string:'WF312'
//           WF338  codep:0x224c wordp:0xf338 size:0x000c C-string:'WF338'
//           WF346  codep:0x224c wordp:0xf346 size:0x001a C-string:'WF346'
//           WF362  codep:0x224c wordp:0xf362 size:0x0019 C-string:'WF362'
//           WF37D  codep:0x224c wordp:0xf37d size:0x0032 C-string:'WF37D'
//           WF3B1  codep:0x224c wordp:0xf3b1 size:0x003a C-string:'WF3B1'
//           WF3ED  codep:0x224c wordp:0xf3ed size:0x001e C-string:'WF3ED'
//           WF40D  codep:0x224c wordp:0xf40d size:0x0008 C-string:'WF40D'
//           WF417  codep:0x224c wordp:0xf417 size:0x0010 C-string:'WF417'
//           WF429  codep:0x224c wordp:0xf429 size:0x0040 C-string:'WF429'
//           WF46B  codep:0x224c wordp:0xf46b size:0x0014 C-string:'WF46B'
//           WF481  codep:0x224c wordp:0xf481 size:0x0048 C-string:'WF481'
//           WF4CB  codep:0x224c wordp:0xf4cb size:0x0012 C-string:'WF4CB'
//           WF4DF  codep:0x224c wordp:0xf4df size:0x001a C-string:'WF4DF'
//         DO-REPA  codep:0x224c wordp:0xf505 size:0x0000 C-string:'DO_dash_REPA'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_REPAIRT; // REPAIRT
extern const unsigned short int pp_IsREPAIR; // ?REPAIR
extern const unsigned short int pp_REAL_dash_MS; // REAL-MS
extern LoadDataType ELEM_dash_NA; // ELEM-NA
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
void _star__slash_(); // */
void M_slash_(); // M/
void MAX(); // MAX
void MIN(); // MIN
void BEEP(); // BEEP
void Draw(); // .
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void RRND(); // RRND
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void ON_2(); // ON_2
void _099(); // 099
void CDROP(); // CDROP
void SET_dash_CUR(); // SET-CUR
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
void _dash_XTRAIL(); // -XTRAIL
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
const unsigned short int pp_WEF66 = 0xef66; // WEF66 size: 2
// {0x01, 0x00}

const unsigned short int pp_WEF6A = 0xef6a; // WEF6A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEF6E = 0xef6e; // WEF6E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEF72 = 0xef72; // WEF72 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF05A = 0xf05a; // WF05A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF0E4 = 0xf0e4; // WF0E4 size: 10
// {0x01, 0x00, 0x0c, 0x00, 0x14, 0x00, 0x04, 0x00, 0x10, 0x00}


const unsigned short int cc_WEEF6 = 0xeef6; // WEEF6


// 0xeef2: db 0x68 0x00 'h '

// ================================================
// 0xeef4: WORD 'WEEF6' codep=0x2214 wordp=0xeef6
// ================================================
// orphan
// 0xeef6: dw 0x0014

// ================================================
// 0xeef8: WORD 'WEEFA' codep=0x7420 wordp=0xeefa
// ================================================
IFieldType WEEFA = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xeefd: WORD 'WEEFF' codep=0x7420 wordp=0xeeff
// ================================================
// orphan
IFieldType WEEFF = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xef02: WORD 'WEF04' codep=0x7420 wordp=0xef04
// ================================================
IFieldType WEF04 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xef07: WORD 'WEF09' codep=0x7420 wordp=0xef09
// ================================================
IFieldType WEF09 = {SHIPIDX, 0x15, 0x02};

// ================================================
// 0xef0c: WORD 'WEF0E' codep=0x7420 wordp=0xef0e
// ================================================
IFieldType WEF0E = {SHIPIDX, 0x17, 0x02};

// ================================================
// 0xef11: WORD 'WEF13' codep=0x7420 wordp=0xef13
// ================================================
IFieldType WEF13 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xef16: WORD 'WEF18' codep=0x7420 wordp=0xef18
// ================================================
IFieldType WEF18 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xef1b: WORD 'WEF1D' codep=0x7420 wordp=0xef1d
// ================================================
IFieldType WEF1D = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xef20: WORD 'WEF22' codep=0x7420 wordp=0xef22
// ================================================
IFieldType WEF22 = {SHIPIDX, 0x29, 0x07};

// ================================================
// 0xef25: WORD 'WEF27' codep=0x7420 wordp=0xef27
// ================================================
// orphan
IFieldType WEF27 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xef2a: WORD 'WEF2C' codep=0x7420 wordp=0xef2c
// ================================================
IFieldType WEF2C = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xef2f: WORD 'WEF31' codep=0x7420 wordp=0xef31
// ================================================
IFieldType WEF31 = {ASSIGN_CREWIDX, 0x1a, 0x03};

// ================================================
// 0xef34: WORD 'WEF36' codep=0x7420 wordp=0xef36
// ================================================
IFieldType WEF36 = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xef39: WORD '>FIELD' codep=0x4b3b wordp=0xef44
// ================================================

void _gt_FIELD() // >FIELD
{
  switch(Pop()) // >FIELD
  {
  case 0:
    Push(0x65e1+WEEFA.offset); // IFIELD
    break;
  case 1:
    Push(0x65e1+WEF04.offset); // IFIELD
    break;
  case 2:
    Push(0x65e1+WEF09.offset); // IFIELD
    break;
  case 3:
    Push(0x65e1+WEF0E.offset); // IFIELD
    break;
  case 4:
    Push(0x65e1+WEF13.offset); // IFIELD
    break;
  case 5:
    Push(0x65e1+WEF18.offset); // IFIELD
    break;
  case 6:
    Push(0x65e1+WEF1D.offset); // IFIELD
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xef64: WORD 'WEF66' codep=0x1d29 wordp=0xef66
// ================================================
// 0xef66: db 0x01 0x00 '  '

// ================================================
// 0xef68: WORD 'WEF6A' codep=0x1d29 wordp=0xef6a
// ================================================
// 0xef6a: db 0x3a 0x20 ': '

// ================================================
// 0xef6c: WORD 'WEF6E' codep=0x1d29 wordp=0xef6e
// ================================================
// 0xef6e: db 0x3a 0x20 ': '

// ================================================
// 0xef70: WORD 'WEF72' codep=0x1d29 wordp=0xef72
// ================================================
// 0xef72: db 0x3a 0x20 ': '

// ================================================
// 0xef74: WORD 'WEF76' codep=0x224c wordp=0xef76 params=1 returns=0
// ================================================

void WEF76() // WEF76
{
  Push(pp_WEF72); // WEF72
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef7c: WORD 'WEF7E' codep=0x224c wordp=0xef7e params=0 returns=1
// ================================================

void WEF7E() // WEF7E
{
  Push(Read16(pp_WEF72)); // WEF72 @
}


// ================================================
// 0xef84: WORD 'WEF86' codep=0x224c wordp=0xef86 params=0 returns=1
// ================================================

void WEF86() // WEF86
{
  Push(Read16(pp_WEF6A)); // WEF6A @
}


// ================================================
// 0xef8c: WORD 'WEF8E' codep=0x224c wordp=0xef8e params=1 returns=1
// ================================================

void WEF8E() // WEF8E
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xef94: WORD 'WEF96' codep=0x224c wordp=0xef96
// ================================================

void WEF96() // WEF96
{
  WEF86(); // WEF86
  _gt_FIELD(); // >FIELD case
}


// ================================================
// 0xef9c: WORD 'WEF9E' codep=0x224c wordp=0xef9e params=1 returns=1
// ================================================

void WEF9E() // WEF9E
{
  Push((Read16(Pop() + 1)&0xFF) & 0x0040); //  1+ C@ 0x0040 AND
  WEF8E(); // WEF8E
}


// ================================================
// 0xefac: WORD 'WEFAE' codep=0x224c wordp=0xefae params=1 returns=1
// ================================================

void WEFAE() // WEFAE
{
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
}


// ================================================
// 0xefb8: WORD 'WEFBA' codep=0x224c wordp=0xefba params=1 returns=1
// ================================================

void WEFBA() // WEFBA
{
  Push((Read16(Pop() + 1)&0xFF) & 0x0080); //  1+ C@ 0x0080 AND
  WEF8E(); // WEF8E
}


// ================================================
// 0xefc8: WORD 'WEFCA' codep=0x224c wordp=0xefca params=2 returns=0
// ================================================

void WEFCA() // WEFCA
{
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) & 0x0080); //  C@ 0x0080 AND
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex__2(); // C!_2
}


// ================================================
// 0xefde: WORD 'WEFE0' codep=0x224c wordp=0xefe0 params=2 returns=0
// ================================================

void WEFE0() // WEFE0
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
  C_ex__2(); // C!_2
}


// ================================================
// 0xeffe: WORD 'WF000' codep=0x224c wordp=0xf000 params=0 returns=0
// ================================================

void WF000() // WF000
{
  Push(0);
  Push(Read16(pp_WEF6A) + (0x65e1+WEF22.offset)); // WEF6A @ WEF22<IFIELD> +
  C_ex__2(); // C!_2
}


// ================================================
// 0xf00e: WORD 'WF010' codep=0x224c wordp=0xf010 params=0 returns=0
// ================================================

void WF010() // WF010
{
  Push(pp_IsREPAIR); // ?REPAIR
  OFF_2(); // OFF_2
  Push(pp_WEF66); // WEF66
  OFF_2(); // OFF_2
}


// ================================================
// 0xf01a: WORD 'WF01C' codep=0x224c wordp=0xf01c
// ================================================

void WF01C() // WF01C
{
  unsigned short int i, imax;
  Push(-1);

  i = 0;
  imax = 7;
  do // (DO)
  {
    Push(i); // I
    _gt_FIELD(); // >FIELD case
    WEF9E(); // WEF9E
    if (Pop() != 0)
    {
      Push(i); // I
      _gt_FIELD(); // >FIELD case
      WEFAE(); // WEFAE
      Push(0x0064);
      _st_(); // <
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(i); // I
        imax = i; // LEAVE
      } else
      {
        WF010(); // WF010
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(regsp)); // DUP
  Push(pp_WEF6A); // WEF6A
  Store_2(); // !_2
}


// ================================================
// 0xf058: WORD 'WF05A' codep=0x1d29 wordp=0xf05a
// ================================================
// 0xf05a: db 0x3a 0x20 ': '

// ================================================
// 0xf05c: WORD 'WF05E' codep=0x224c wordp=0xf05e params=1 returns=2
// ================================================

void WF05E() // WF05E
{
  unsigned short int a;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WEF31.offset); // WEF31<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x00fb);
  Push(Read16(0x65e1+WEF36.offset)&0xFF); // WEF36<IFIELD> C@
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
  Push(pp_WF05A); // WF05A
  Store_2(); // !_2
}


// ================================================
// 0xf0a4: WORD 'WF0A6' codep=0x224c wordp=0xf0a6 params=0 returns=0
// ================================================

void WF0A6() // WF0A6
{
  Push(Read16(pp_WEF6A)); // WEF6A @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _gt_FIELD(); // >FIELD case
    WEFAE(); // WEFAE
    Push(Read16(regsp)); // DUP
    WF05E(); // WF05E
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
// 0xf0e2: WORD 'WF0E4' codep=0x1d29 wordp=0xf0e4
// ================================================
// 0xf0e4: db 0x01 0x00 0x0c 0x00 0x14 0x00 0x04 0x00 0x10 0x00 '          '

// ================================================
// 0xf0ee: WORD 'WF0F0' codep=0x224c wordp=0xf0f0 params=0 returns=1
// ================================================

void WF0F0() // WF0F0
{
  Push(0);
  Push(5);
  RRND(); // RRND
  Push(Read16(Pop() * 2 + pp_WF0E4)); //  2* WF0E4 + @
  Push(Read16(regsp)); // DUP
  Push(pp_WEF6E); // WEF6E
  Store_2(); // !_2
}


// ================================================
// 0xf106: WORD 'WF108' codep=0x224c wordp=0xf108 params=0 returns=2
// ================================================

void WF108() // WF108
{
  Push(1);
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
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
  WEF76(); // WEF76
}


// ================================================
// 0xf12c: WORD 'WF12E' codep=0x224c wordp=0xf12e params=0 returns=1
// ================================================

void WF12E() // WF12E
{
  Push(1);
  Push(7);
  RRND(); // RRND
  Push(Pop() * 0x000a); //  0x000a *
  Push(Read16(regsp)); // DUP
  WEF76(); // WEF76
}


// ================================================
// 0xf140: WORD 'WF142' codep=0x224c wordp=0xf142 params=0 returns=1
// ================================================

void WF142() // WF142
{
  Push(0);
  Push(Read16(pp_WF05A)); // WF05A @
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xf14e: WORD 'WF150' codep=0x224c wordp=0xf150
// ================================================

void WF150() // WF150
{
  Push2Words("*STARSH");
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
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
      WEF7E(); // WEF7E
      Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
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
// 0xf1a0: WORD 'WF1A2' codep=0x224c wordp=0xf1a2
// ================================================

void WF1A2() // WF1A2
{
  Push2Words("*STARSH");
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
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
// 0xf1c4: WORD 'WF1C6' codep=0x224c wordp=0xf1c6 params=2 returns=0
// ================================================

void WF1C6() // WF1C6
{
  Push(0x0020);
  Push(0x000a);
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push((0x65e1+WEF22.offset) + Read16(pp_WEF6A)); // WEF22<IFIELD> WEF6A @ +
  C_ex__2(); // C!_2
}


// ================================================
// 0xf1de: WORD 'WF1E0' codep=0x224c wordp=0xf1e0 params=0 returns=3
// ================================================

void WF1E0() // WF1E0
{
  Push(Read16(Read16(pp_WEF6A) + (0x65e1+WEF22.offset))&0xFF); // WEF6A @ WEF22<IFIELD> + C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x001f); //  0x001f AND
  SWAP(); // SWAP
  Push(0x0020);
  _slash_(); // /
  Push(Pop() * 0x000a); //  0x000a *
}


// ================================================
// 0xf202: WORD 'WF204' codep=0x224c wordp=0xf204
// ================================================

void WF204() // WF204
{
  Push(Read16(pp_WEF6E)); // WEF6E @
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  LoadData(ELEM_dash_NA); // from 'ELEMENT'
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  DrawTTY(); // .TTY
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf226: WORD 'WF228' codep=0x224c wordp=0xf228
// ================================================

void WF228() // WF228
{
  SET_STR_AS_PARAM("SHALL I TAKE THIS FROM CARGO\?");
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xf256: WORD 'WF258' codep=0x224c wordp=0xf258
// ================================================

void WF258() // WF258
{
  BEEP(); // BEEP
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("COMMANDER, WE NEED ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf276: WORD 'WF278' codep=0x224c wordp=0xf278 params=0 returns=0
// ================================================

void WF278() // WF278
{
  SET_STR_AS_PARAM(" FOR REPAIRS.");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf28c: WORD 'WF28E' codep=0x224c wordp=0xf28e
// ================================================

void WF28E() // WF28E
{
  WEF7E(); // WEF7E
  Push(0x000a);
  _slash_(); // /
  Draw(); // .
  SET_STR_AS_PARAM("CUBIC METER");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  WEF7E(); // WEF7E
  Push(Pop() - 0x000a); //  0x000a -
  if (Pop() != 0)
  {
    PRINT("S", 1); // (.")
  }
  PRINT(" OF", 3); // (.")
}


// ================================================
// 0xf2c0: WORD 'WF2C2' codep=0x224c wordp=0xf2c2
// ================================================

void WF2C2() // WF2C2
{
  SET_STR_AS_PARAM("             [NO YES]");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf2de: WORD 'WF2E0' codep=0x224c wordp=0xf2e0
// ================================================

void WF2E0() // WF2E0
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF258(); // WF258
  WF28E(); // WF28E
  WF204(); // WF204
  WF278(); // WF278
  WF228(); // WF228
  WF2C2(); // WF2C2
}


// ================================================
// 0xf2f2: WORD 'WF2F4' codep=0x224c wordp=0xf2f4
// ================================================

void WF2F4() // WF2F4
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf2fa: WORD 'WF2FC' codep=0x224c wordp=0xf2fc params=0 returns=0
// ================================================

void WF2FC() // WF2FC
{
  Push(Read16(pp_WEF6A)); // WEF6A @
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(0);
  WEF96(); // WEF96
  WEFE0(); // WEFE0
}


// ================================================
// 0xf310: WORD 'WF312' codep=0x224c wordp=0xf312
// ================================================

void WF312() // WF312
{
  SET_STR_AS_PARAM("CEASING REPAIR ");
  DrawTTY(); // .TTY
  Push(pp_IsREPAIR); // ?REPAIR
  _099(); // 099
  Push(pp_WEF66); // WEF66
  _099(); // 099
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf336: WORD 'WF338' codep=0x224c wordp=0xf338
// ================================================

void WF338() // WF338
{
  WF2F4(); // WF2F4
  WF258(); // WF258
  WF28E(); // WF28E
  WF204(); // WF204
  WF278(); // WF278
}


// ================================================
// 0xf344: WORD 'WF346' codep=0x224c wordp=0xf346
// ================================================

void WF346() // WF346
{
  WF2F4(); // WF2F4
  SET_STR_AS_PARAM("REPAIR COMPLETED ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf360: WORD 'WF362' codep=0x224c wordp=0xf362
// ================================================

void WF362() // WF362
{
  SET_STR_AS_PARAM("CONTINUING REPAIR ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf37b: WORD 'WF37D' codep=0x224c wordp=0xf37d
// ================================================

void WF37D() // WF37D
{
  WF0F0(); // WF0F0
  Push(Read16(regsp)); // DUP
  Push(pp_WEF72); // WEF72
  _099(); // 099
  WF150(); // WF150
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    WF1A2(); // WF1A2
    WF108(); // WF108
    Push2Words("*SHIP");
    _gt_C_plus_S(); // >C+S
    WF1C6(); // WF1C6
    CDROP(); // CDROP
    CDROP(); // CDROP
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    return;
  }
  Push(Read16(pp_WEF6E)); // WEF6E @
  WF12E(); // WF12E
  WF1C6(); // WF1C6
}


// ================================================
// 0xf3af: WORD 'WF3B1' codep=0x224c wordp=0xf3b1
// ================================================

void WF3B1() // WF3B1
{
  unsigned short int a;
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  a = Pop(); // >R
  WF1E0(); // WF1E0
  SWAP(); // SWAP
  WF1A2(); // WF1A2
  Pop(); // DROP
  WEF7E(); // WEF7E
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WEF2C.offset); // WEF2C<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  _ro_BOX_gt__rc_(); // (BOX>)
  Pop(); Pop(); // 2DROP
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
  WF000(); // WF000
}


// ================================================
// 0xf3eb: WORD 'WF3ED' codep=0x224c wordp=0xf3ed
// ================================================

void WF3ED() // WF3ED
{
  WF2E0(); // WF2E0
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Y_slash_N(); // Y/N
  if (Pop() != 0)
  {
    WF362(); // WF362
    WF3B1(); // WF3B1
    Push(pp_WEF66); // WEF66
    ON_2(); // ON_2
    return;
  }
  Push(pp_WEF66); // WEF66
  _099(); // 099
}


// ================================================
// 0xf40b: WORD 'WF40D' codep=0x224c wordp=0xf40d
// ================================================

void WF40D() // WF40D
{
  WF338(); // WF338
  Push(pp_WEF66); // WEF66
  OFF_2(); // OFF_2
}


// ================================================
// 0xf415: WORD 'WF417' codep=0x224c wordp=0xf417
// ================================================

void WF417() // WF417
{
  WF150(); // WF150
  if (Pop() != 0)
  {
    WF3ED(); // WF3ED
    return;
  }
  WF40D(); // WF40D
}


// ================================================
// 0xf427: WORD 'WF429' codep=0x224c wordp=0xf429
// ================================================

void WF429() // WF429
{
  WF1E0(); // WF1E0
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    WF142(); // WF142
    if (Pop() != 0)
    {
      WF37D(); // WF37D
      WF417(); // WF417
    } else
    {
      Push(pp_WEF66); // WEF66
      ON_2(); // ON_2
      return;
    }
  } else
  {
    WEF76(); // WEF76
    Push(Read16(regsp)); // DUP
    Push(pp_WEF6E); // WEF6E
    Store_2(); // !_2
    WF417(); // WF417
  }
  Push(Read16(pp_WEF66)==0?1:0); // WEF66 @ 0=
  if (Pop() == 0) return;
  WF312(); // WF312
  WF2FC(); // WF2FC
  WF010(); // WF010
}


// ================================================
// 0xf469: WORD 'WF46B' codep=0x224c wordp=0xf46b
// ================================================

void WF46B() // WF46B
{
  WEF96(); // WEF96
  Push((Read16(Pop() + 1)&0xFF) & 0x007f); //  1+ C@ 0x007f AND
  WEF96(); // WEF96
  Push(Pop() + 1); //  1+
  C_ex__2(); // C!_2
}


// ================================================
// 0xf47f: WORD 'WF481' codep=0x224c wordp=0xf481
// ================================================

void WF481() // WF481
{
  WEF96(); // WEF96
  WEFBA(); // WEFBA
  WEF96(); // WEF96
  WEFAE(); // WEFAE
  Push(0x0049);
  _gt_(); // >
  Push(0);
  Push(5);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WF46B(); // WF46B
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
// 0xf4c9: WORD 'WF4CB' codep=0x224c wordp=0xf4cb
// ================================================

void WF4CB() // WF4CB
{
  Push(Pop() + 1); //  1+
  Push(0x0064);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  WEF96(); // WEF96
  WEFCA(); // WEFCA
  WF481(); // WF481
}


// ================================================
// 0xf4dd: WORD 'WF4DF' codep=0x224c wordp=0xf4df params=0 returns=0
// ================================================

void WF4DF() // WF4DF
{
  Push(Read16(pp_IsREPAIR)==1?1:0); // ?REPAIR @ 1 =
  if (Pop() == 0) return;
  WF01C(); // WF01C
  Pop(); // DROP
  WF0A6(); // WF0A6
  Push(-1);
  Push(pp_IsREPAIR); // ?REPAIR
  Store_2(); // !_2
}


// ================================================
// 0xf4f9: WORD 'DO-REPA' codep=0x224c wordp=0xf505
// ================================================
// entry

void DO_dash_REPA() // DO-REPA
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WF4DF(); // WF4DF
  WEF86(); // WEF86
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WEF96(); // WEF96
    WEFAE(); // WEFAE
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      WF429(); // WF429
      Push(Read16(pp_WEF66)); // WEF66 @
      if (Pop() != 0)
      {
        WF4CB(); // WF4CB
        Push(Pop()==0x0064?1:0); //  0x0064 =
        if (Pop() != 0)
        {
          WF346(); // WF346
          WF2FC(); // WF2FC
          WF010(); // WF010
          WF46B(); // WF46B
        }
      } else
      {
        Pop(); // DROP
      }
    }
  } else
  {
    WF346(); // WF346
    WF2FC(); // WF2FC
    WF010(); // WF010
  }
  ICLOSE(); // ICLOSE
}

// 0xf551: db 0x52 0x45 0x50 0x41 0x49 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'REPAIR_________ '

