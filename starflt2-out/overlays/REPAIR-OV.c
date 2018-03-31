// ====== OVERLAY 'REPAIR-OV' ======
// store offset = 0xeee0
// overlay size   = 0x0680

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xeefa  codep:0x7420 parp:0xeefa size:0x0003 C-string:'UNK_0xeefa'
//      UNK_0xeeff  codep:0x7420 parp:0xeeff size:0x0003 C-string:'UNK_0xeeff'
//      UNK_0xef04  codep:0x7420 parp:0xef04 size:0x0003 C-string:'UNK_0xef04'
//      UNK_0xef09  codep:0x7420 parp:0xef09 size:0x0003 C-string:'UNK_0xef09'
//      UNK_0xef0e  codep:0x7420 parp:0xef0e size:0x0003 C-string:'UNK_0xef0e'
//      UNK_0xef13  codep:0x7420 parp:0xef13 size:0x0003 C-string:'UNK_0xef13'
//      UNK_0xef18  codep:0x7420 parp:0xef18 size:0x0003 C-string:'UNK_0xef18'
//      UNK_0xef1d  codep:0x7420 parp:0xef1d size:0x0003 C-string:'UNK_0xef1d'
//      UNK_0xef22  codep:0x7420 parp:0xef22 size:0x0003 C-string:'UNK_0xef22'
//      UNK_0xef27  codep:0x7420 parp:0xef27 size:0x0003 C-string:'UNK_0xef27'
//      UNK_0xef2c  codep:0x7420 parp:0xef2c size:0x0003 C-string:'UNK_0xef2c'
//      UNK_0xef31  codep:0x7420 parp:0xef31 size:0x0003 C-string:'UNK_0xef31'
//      UNK_0xef36  codep:0x7420 parp:0xef36 size:0x0003 C-string:'UNK_0xef36'
//          >FIELD  codep:0x4b3b parp:0xef44 size:0x0020 C-string:'_gt_FIELD'
//      UNK_0xef66  codep:0x1d29 parp:0xef66 size:0x0002 C-string:'UNK_0xef66'
//      UNK_0xef6a  codep:0x1d29 parp:0xef6a size:0x0002 C-string:'UNK_0xef6a'
//      UNK_0xef6e  codep:0x1d29 parp:0xef6e size:0x0002 C-string:'UNK_0xef6e'
//      UNK_0xef72  codep:0x1d29 parp:0xef72 size:0x0002 C-string:'UNK_0xef72'
//      UNK_0xef76  codep:0x224c parp:0xef76 size:0x0006 C-string:'UNK_0xef76'
//      UNK_0xef7e  codep:0x224c parp:0xef7e size:0x0006 C-string:'UNK_0xef7e'
//      UNK_0xef86  codep:0x224c parp:0xef86 size:0x0006 C-string:'UNK_0xef86'
//      UNK_0xef8e  codep:0x224c parp:0xef8e size:0x0006 C-string:'UNK_0xef8e'
//      UNK_0xef96  codep:0x224c parp:0xef96 size:0x0006 C-string:'UNK_0xef96'
//      UNK_0xef9e  codep:0x224c parp:0xef9e size:0x000e C-string:'UNK_0xef9e'
//      UNK_0xefae  codep:0x224c parp:0xefae size:0x000a C-string:'UNK_0xefae'
//      UNK_0xefba  codep:0x224c parp:0xefba size:0x000e C-string:'UNK_0xefba'
//      UNK_0xefca  codep:0x224c parp:0xefca size:0x0014 C-string:'UNK_0xefca'
//      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x001e C-string:'UNK_0xefe0'
//      UNK_0xf000  codep:0x224c parp:0xf000 size:0x000e C-string:'UNK_0xf000'
//      UNK_0xf010  codep:0x224c parp:0xf010 size:0x000a C-string:'UNK_0xf010'
//      UNK_0xf01c  codep:0x224c parp:0xf01c size:0x003c C-string:'UNK_0xf01c'
//      UNK_0xf05a  codep:0x1d29 parp:0xf05a size:0x0002 C-string:'UNK_0xf05a'
//      UNK_0xf05e  codep:0x224c parp:0xf05e size:0x0046 C-string:'UNK_0xf05e'
//      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x003c C-string:'UNK_0xf0a6'
//      UNK_0xf0e4  codep:0x1d29 parp:0xf0e4 size:0x000a C-string:'UNK_0xf0e4'
//      UNK_0xf0f0  codep:0x224c parp:0xf0f0 size:0x0016 C-string:'UNK_0xf0f0'
//      UNK_0xf108  codep:0x224c parp:0xf108 size:0x0024 C-string:'UNK_0xf108'
//      UNK_0xf12e  codep:0x224c parp:0xf12e size:0x0012 C-string:'UNK_0xf12e'
//      UNK_0xf142  codep:0x224c parp:0xf142 size:0x000c C-string:'UNK_0xf142'
//      UNK_0xf150  codep:0x224c parp:0xf150 size:0x0050 C-string:'UNK_0xf150'
//      UNK_0xf1a2  codep:0x224c parp:0xf1a2 size:0x0022 C-string:'UNK_0xf1a2'
//      UNK_0xf1c6  codep:0x224c parp:0xf1c6 size:0x0018 C-string:'UNK_0xf1c6'
//      UNK_0xf1e0  codep:0x224c parp:0xf1e0 size:0x0022 C-string:'UNK_0xf1e0'
//      UNK_0xf204  codep:0x224c parp:0xf204 size:0x0022 C-string:'UNK_0xf204'
//      UNK_0xf228  codep:0x224c parp:0xf228 size:0x002e C-string:'UNK_0xf228'
//      UNK_0xf258  codep:0x224c parp:0xf258 size:0x001e C-string:'UNK_0xf258'
//      UNK_0xf278  codep:0x224c parp:0xf278 size:0x0014 C-string:'UNK_0xf278'
//      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x0032 C-string:'UNK_0xf28e'
//      UNK_0xf2c2  codep:0x224c parp:0xf2c2 size:0x001c C-string:'UNK_0xf2c2'
//      UNK_0xf2e0  codep:0x224c parp:0xf2e0 size:0x0012 C-string:'UNK_0xf2e0'
//      UNK_0xf2f4  codep:0x224c parp:0xf2f4 size:0x0006 C-string:'UNK_0xf2f4'
//      UNK_0xf2fc  codep:0x224c parp:0xf2fc size:0x0014 C-string:'UNK_0xf2fc'
//      UNK_0xf312  codep:0x224c parp:0xf312 size:0x0024 C-string:'UNK_0xf312'
//      UNK_0xf338  codep:0x224c parp:0xf338 size:0x000c C-string:'UNK_0xf338'
//      UNK_0xf346  codep:0x224c parp:0xf346 size:0x001a C-string:'UNK_0xf346'
//      UNK_0xf362  codep:0x224c parp:0xf362 size:0x0019 C-string:'UNK_0xf362'
//      UNK_0xf37d  codep:0x224c parp:0xf37d size:0x0032 C-string:'UNK_0xf37d'
//      UNK_0xf3b1  codep:0x224c parp:0xf3b1 size:0x003a C-string:'UNK_0xf3b1'
//      UNK_0xf3ed  codep:0x224c parp:0xf3ed size:0x001e C-string:'UNK_0xf3ed'
//      UNK_0xf40d  codep:0x224c parp:0xf40d size:0x0008 C-string:'UNK_0xf40d'
//      UNK_0xf417  codep:0x224c parp:0xf417 size:0x0010 C-string:'UNK_0xf417'
//      UNK_0xf429  codep:0x224c parp:0xf429 size:0x0040 C-string:'UNK_0xf429'
//      UNK_0xf46b  codep:0x224c parp:0xf46b size:0x0014 C-string:'UNK_0xf46b'
//      UNK_0xf481  codep:0x224c parp:0xf481 size:0x0048 C-string:'UNK_0xf481'
//      UNK_0xf4cb  codep:0x224c parp:0xf4cb size:0x0012 C-string:'UNK_0xf4cb'
//      UNK_0xf4df  codep:0x224c parp:0xf4df size:0x001a C-string:'UNK_0xf4df'
//         DO-REPA  codep:0x224c parp:0xf505 size:0x0000 C-string:'DO_dash_REPA'

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
const unsigned short int pp_UNK_0xef66 = 0xef66; // UNK_0xef66 size: 2
// {0x01, 0x00}

const unsigned short int pp_UNK_0xef6a = 0xef6a; // UNK_0xef6a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xef6e = 0xef6e; // UNK_0xef6e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xef72 = 0xef72; // UNK_0xef72 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf05a = 0xf05a; // UNK_0xf05a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf0e4 = 0xf0e4; // UNK_0xf0e4 size: 10
// {0x01, 0x00, 0x0c, 0x00, 0x14, 0x00, 0x04, 0x00, 0x10, 0x00}




// 0xeef2: db 0x68 0x00 0x14 0x22 0x14 0x00 'h  "  '

// ================================================
// 0xeef8: WORD 'UNK_0xeefa' codep=0x7420 parp=0xeefa
// ================================================
IFieldType UNK_0xeefa = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xeefd: WORD 'UNK_0xeeff' codep=0x7420 parp=0xeeff
// ================================================
// orphan
IFieldType UNK_0xeeff = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xef02: WORD 'UNK_0xef04' codep=0x7420 parp=0xef04
// ================================================
IFieldType UNK_0xef04 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xef07: WORD 'UNK_0xef09' codep=0x7420 parp=0xef09
// ================================================
IFieldType UNK_0xef09 = {SHIPIDX, 0x15, 0x02};

// ================================================
// 0xef0c: WORD 'UNK_0xef0e' codep=0x7420 parp=0xef0e
// ================================================
IFieldType UNK_0xef0e = {SHIPIDX, 0x17, 0x02};

// ================================================
// 0xef11: WORD 'UNK_0xef13' codep=0x7420 parp=0xef13
// ================================================
IFieldType UNK_0xef13 = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xef16: WORD 'UNK_0xef18' codep=0x7420 parp=0xef18
// ================================================
IFieldType UNK_0xef18 = {SHIPIDX, 0x1b, 0x02};

// ================================================
// 0xef1b: WORD 'UNK_0xef1d' codep=0x7420 parp=0xef1d
// ================================================
IFieldType UNK_0xef1d = {SHIPIDX, 0x1d, 0x02};

// ================================================
// 0xef20: WORD 'UNK_0xef22' codep=0x7420 parp=0xef22
// ================================================
IFieldType UNK_0xef22 = {SHIPIDX, 0x29, 0x07};

// ================================================
// 0xef25: WORD 'UNK_0xef27' codep=0x7420 parp=0xef27
// ================================================
// orphan
IFieldType UNK_0xef27 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xef2a: WORD 'UNK_0xef2c' codep=0x7420 parp=0xef2c
// ================================================
IFieldType UNK_0xef2c = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xef2f: WORD 'UNK_0xef31' codep=0x7420 parp=0xef31
// ================================================
IFieldType UNK_0xef31 = {ASSIGN_CREWIDX, 0x1a, 0x03};

// ================================================
// 0xef34: WORD 'UNK_0xef36' codep=0x7420 parp=0xef36
// ================================================
IFieldType UNK_0xef36 = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xef39: WORD '>FIELD' codep=0x4b3b parp=0xef44
// ================================================

void _gt_FIELD() // >FIELD
{
  switch(Pop()) // >FIELD
  {
  case 0:
    Push(0x65e1+UNK_0xeefa.offset); // IFIELD
    break;
  case 1:
    Push(0x65e1+UNK_0xef04.offset); // IFIELD
    break;
  case 2:
    Push(0x65e1+UNK_0xef09.offset); // IFIELD
    break;
  case 3:
    Push(0x65e1+UNK_0xef0e.offset); // IFIELD
    break;
  case 4:
    Push(0x65e1+UNK_0xef13.offset); // IFIELD
    break;
  case 5:
    Push(0x65e1+UNK_0xef18.offset); // IFIELD
    break;
  case 6:
    Push(0x65e1+UNK_0xef1d.offset); // IFIELD
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xef64: WORD 'UNK_0xef66' codep=0x1d29 parp=0xef66
// ================================================
// 0xef66: db 0x01 0x00 '  '

// ================================================
// 0xef68: WORD 'UNK_0xef6a' codep=0x1d29 parp=0xef6a
// ================================================
// 0xef6a: db 0x3a 0x20 ': '

// ================================================
// 0xef6c: WORD 'UNK_0xef6e' codep=0x1d29 parp=0xef6e
// ================================================
// 0xef6e: db 0x3a 0x20 ': '

// ================================================
// 0xef70: WORD 'UNK_0xef72' codep=0x1d29 parp=0xef72
// ================================================
// 0xef72: db 0x3a 0x20 ': '

// ================================================
// 0xef74: WORD 'UNK_0xef76' codep=0x224c parp=0xef76 params=1 returns=0
// ================================================

void UNK_0xef76() // UNK_0xef76
{
  Push(pp_UNK_0xef72); // UNK_0xef72
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef7c: WORD 'UNK_0xef7e' codep=0x224c parp=0xef7e params=0 returns=1
// ================================================

void UNK_0xef7e() // UNK_0xef7e
{
  Push(Read16(pp_UNK_0xef72)); // UNK_0xef72 @
}


// ================================================
// 0xef84: WORD 'UNK_0xef86' codep=0x224c parp=0xef86 params=0 returns=1
// ================================================

void UNK_0xef86() // UNK_0xef86
{
  Push(Read16(pp_UNK_0xef6a)); // UNK_0xef6a @
}


// ================================================
// 0xef8c: WORD 'UNK_0xef8e' codep=0x224c parp=0xef8e params=1 returns=1
// ================================================

void UNK_0xef8e() // UNK_0xef8e
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xef94: WORD 'UNK_0xef96' codep=0x224c parp=0xef96
// ================================================

void UNK_0xef96() // UNK_0xef96
{
  UNK_0xef86(); // UNK_0xef86
  _gt_FIELD(); // >FIELD case
}


// ================================================
// 0xef9c: WORD 'UNK_0xef9e' codep=0x224c parp=0xef9e params=1 returns=1
// ================================================

void UNK_0xef9e() // UNK_0xef9e
{
  Push((Read16(Pop() + 1)&0xFF) & 0x0040); //  1+ C@ 0x0040 AND
  UNK_0xef8e(); // UNK_0xef8e
}


// ================================================
// 0xefac: WORD 'UNK_0xefae' codep=0x224c parp=0xefae params=1 returns=1
// ================================================

void UNK_0xefae() // UNK_0xefae
{
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
}


// ================================================
// 0xefb8: WORD 'UNK_0xefba' codep=0x224c parp=0xefba params=1 returns=1
// ================================================

void UNK_0xefba() // UNK_0xefba
{
  Push((Read16(Pop() + 1)&0xFF) & 0x0080); //  1+ C@ 0x0080 AND
  UNK_0xef8e(); // UNK_0xef8e
}


// ================================================
// 0xefc8: WORD 'UNK_0xefca' codep=0x224c parp=0xefca params=2 returns=0
// ================================================

void UNK_0xefca() // UNK_0xefca
{
  Push(Read16(regsp)); // DUP
  Push((Read16(Pop())&0xFF) & 0x0080); //  C@ 0x0080 AND
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex__2(); // C!_2
}


// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x224c parp=0xefe0 params=2 returns=0
// ================================================

void UNK_0xefe0() // UNK_0xefe0
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
// 0xeffe: WORD 'UNK_0xf000' codep=0x224c parp=0xf000 params=0 returns=0
// ================================================

void UNK_0xf000() // UNK_0xf000
{
  Push(0);
  Push(Read16(pp_UNK_0xef6a) + (0x65e1+UNK_0xef22.offset)); // UNK_0xef6a @ UNK_0xef22<IFIELD> +
  C_ex__2(); // C!_2
}


// ================================================
// 0xf00e: WORD 'UNK_0xf010' codep=0x224c parp=0xf010 params=0 returns=0
// ================================================

void UNK_0xf010() // UNK_0xf010
{
  Push(pp_IsREPAIR); // ?REPAIR
  OFF_2(); // OFF_2
  Push(pp_UNK_0xef66); // UNK_0xef66
  OFF_2(); // OFF_2
}


// ================================================
// 0xf01a: WORD 'UNK_0xf01c' codep=0x224c parp=0xf01c
// ================================================

void UNK_0xf01c() // UNK_0xf01c
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
    UNK_0xef9e(); // UNK_0xef9e
    if (Pop() != 0)
    {
      Push(i); // I
      _gt_FIELD(); // >FIELD case
      UNK_0xefae(); // UNK_0xefae
      Push(0x0064);
      _st_(); // <
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(i); // I
        imax = i; // LEAVE
      } else
      {
        UNK_0xf010(); // UNK_0xf010
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xef6a); // UNK_0xef6a
  Store_2(); // !_2
}


// ================================================
// 0xf058: WORD 'UNK_0xf05a' codep=0x1d29 parp=0xf05a
// ================================================
// 0xf05a: db 0x3a 0x20 ': '

// ================================================
// 0xf05c: WORD 'UNK_0xf05e' codep=0x224c parp=0xf05e params=1 returns=2
// ================================================

void UNK_0xf05e() // UNK_0xf05e
{
  unsigned short int a;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xef31.offset); // UNK_0xef31<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x00fb);
  Push(Read16(0x65e1+UNK_0xef36.offset)&0xFF); // UNK_0xef36<IFIELD> C@
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
  Push(pp_UNK_0xf05a); // UNK_0xf05a
  Store_2(); // !_2
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6 params=0 returns=0
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  Push(Read16(pp_UNK_0xef6a)); // UNK_0xef6a @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _gt_FIELD(); // >FIELD case
    UNK_0xefae(); // UNK_0xefae
    Push(Read16(regsp)); // DUP
    UNK_0xf05e(); // UNK_0xf05e
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
// 0xf0e2: WORD 'UNK_0xf0e4' codep=0x1d29 parp=0xf0e4
// ================================================
// 0xf0e4: db 0x01 0x00 0x0c 0x00 0x14 0x00 0x04 0x00 0x10 0x00 '          '

// ================================================
// 0xf0ee: WORD 'UNK_0xf0f0' codep=0x224c parp=0xf0f0 params=0 returns=1
// ================================================

void UNK_0xf0f0() // UNK_0xf0f0
{
  Push(0);
  Push(5);
  RRND(); // RRND
  Push(Read16(Pop() * 2 + pp_UNK_0xf0e4)); //  2* UNK_0xf0e4 + @
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xef6e); // UNK_0xef6e
  Store_2(); // !_2
}


// ================================================
// 0xf106: WORD 'UNK_0xf108' codep=0x224c parp=0xf108 params=0 returns=2
// ================================================

void UNK_0xf108() // UNK_0xf108
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
  UNK_0xef76(); // UNK_0xef76
}


// ================================================
// 0xf12c: WORD 'UNK_0xf12e' codep=0x224c parp=0xf12e params=0 returns=1
// ================================================

void UNK_0xf12e() // UNK_0xf12e
{
  Push(1);
  Push(7);
  RRND(); // RRND
  Push(Pop() * 0x000a); //  0x000a *
  Push(Read16(regsp)); // DUP
  UNK_0xef76(); // UNK_0xef76
}


// ================================================
// 0xf140: WORD 'UNK_0xf142' codep=0x224c parp=0xf142 params=0 returns=1
// ================================================

void UNK_0xf142() // UNK_0xf142
{
  Push(0);
  Push(Read16(pp_UNK_0xf05a)); // UNK_0xf05a @
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xf14e: WORD 'UNK_0xf150' codep=0x224c parp=0xf150
// ================================================

void UNK_0xf150() // UNK_0xf150
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
      UNK_0xef7e(); // UNK_0xef7e
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
// 0xf1a0: WORD 'UNK_0xf1a2' codep=0x224c parp=0xf1a2
// ================================================

void UNK_0xf1a2() // UNK_0xf1a2
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
// 0xf1c4: WORD 'UNK_0xf1c6' codep=0x224c parp=0xf1c6 params=2 returns=0
// ================================================

void UNK_0xf1c6() // UNK_0xf1c6
{
  Push(0x0020);
  Push(0x000a);
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push((0x65e1+UNK_0xef22.offset) + Read16(pp_UNK_0xef6a)); // UNK_0xef22<IFIELD> UNK_0xef6a @ +
  C_ex__2(); // C!_2
}


// ================================================
// 0xf1de: WORD 'UNK_0xf1e0' codep=0x224c parp=0xf1e0 params=0 returns=3
// ================================================

void UNK_0xf1e0() // UNK_0xf1e0
{
  Push(Read16(Read16(pp_UNK_0xef6a) + (0x65e1+UNK_0xef22.offset))&0xFF); // UNK_0xef6a @ UNK_0xef22<IFIELD> + C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x001f); //  0x001f AND
  SWAP(); // SWAP
  Push(0x0020);
  _slash_(); // /
  Push(Pop() * 0x000a); //  0x000a *
}


// ================================================
// 0xf202: WORD 'UNK_0xf204' codep=0x224c parp=0xf204
// ================================================

void UNK_0xf204() // UNK_0xf204
{
  Push(Read16(pp_UNK_0xef6e)); // UNK_0xef6e @
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
// 0xf226: WORD 'UNK_0xf228' codep=0x224c parp=0xf228
// ================================================

void UNK_0xf228() // UNK_0xf228
{
  SET_STR_AS_PARAM("SHALL I TAKE THIS FROM CARGO\?");
  DrawTTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xf256: WORD 'UNK_0xf258' codep=0x224c parp=0xf258
// ================================================

void UNK_0xf258() // UNK_0xf258
{
  BEEP(); // BEEP
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("COMMANDER, WE NEED ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf276: WORD 'UNK_0xf278' codep=0x224c parp=0xf278 params=0 returns=0
// ================================================

void UNK_0xf278() // UNK_0xf278
{
  SET_STR_AS_PARAM(" FOR REPAIRS.");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  UNK_0xef7e(); // UNK_0xef7e
  Push(0x000a);
  _slash_(); // /
  Draw(); // .
  SET_STR_AS_PARAM("CUBIC METER");
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  UNK_0xef7e(); // UNK_0xef7e
  Push(Pop() - 0x000a); //  0x000a -
  if (Pop() != 0)
  {
    PRINT("S", 1); // (.")
  }
  PRINT(" OF", 3); // (.")
}


// ================================================
// 0xf2c0: WORD 'UNK_0xf2c2' codep=0x224c parp=0xf2c2
// ================================================

void UNK_0xf2c2() // UNK_0xf2c2
{
  SET_STR_AS_PARAM("             [NO YES]");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf2de: WORD 'UNK_0xf2e0' codep=0x224c parp=0xf2e0
// ================================================

void UNK_0xf2e0() // UNK_0xf2e0
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  UNK_0xf258(); // UNK_0xf258
  UNK_0xf28e(); // UNK_0xf28e
  UNK_0xf204(); // UNK_0xf204
  UNK_0xf278(); // UNK_0xf278
  UNK_0xf228(); // UNK_0xf228
  UNK_0xf2c2(); // UNK_0xf2c2
}


// ================================================
// 0xf2f2: WORD 'UNK_0xf2f4' codep=0x224c parp=0xf2f4
// ================================================

void UNK_0xf2f4() // UNK_0xf2f4
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf2fa: WORD 'UNK_0xf2fc' codep=0x224c parp=0xf2fc params=0 returns=0
// ================================================

void UNK_0xf2fc() // UNK_0xf2fc
{
  Push(Read16(pp_UNK_0xef6a)); // UNK_0xef6a @
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(0);
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefe0(); // UNK_0xefe0
}


// ================================================
// 0xf310: WORD 'UNK_0xf312' codep=0x224c parp=0xf312
// ================================================

void UNK_0xf312() // UNK_0xf312
{
  SET_STR_AS_PARAM("CEASING REPAIR ");
  DrawTTY(); // .TTY
  Push(pp_IsREPAIR); // ?REPAIR
  _099(); // 099
  Push(pp_UNK_0xef66); // UNK_0xef66
  _099(); // 099
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xf336: WORD 'UNK_0xf338' codep=0x224c parp=0xf338
// ================================================

void UNK_0xf338() // UNK_0xf338
{
  UNK_0xf2f4(); // UNK_0xf2f4
  UNK_0xf258(); // UNK_0xf258
  UNK_0xf28e(); // UNK_0xf28e
  UNK_0xf204(); // UNK_0xf204
  UNK_0xf278(); // UNK_0xf278
}


// ================================================
// 0xf344: WORD 'UNK_0xf346' codep=0x224c parp=0xf346
// ================================================

void UNK_0xf346() // UNK_0xf346
{
  UNK_0xf2f4(); // UNK_0xf2f4
  SET_STR_AS_PARAM("REPAIR COMPLETED ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf360: WORD 'UNK_0xf362' codep=0x224c parp=0xf362
// ================================================

void UNK_0xf362() // UNK_0xf362
{
  SET_STR_AS_PARAM("CONTINUING REPAIR ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf37b: WORD 'UNK_0xf37d' codep=0x224c parp=0xf37d
// ================================================

void UNK_0xf37d() // UNK_0xf37d
{
  UNK_0xf0f0(); // UNK_0xf0f0
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xef72); // UNK_0xef72
  _099(); // 099
  UNK_0xf150(); // UNK_0xf150
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    UNK_0xf1a2(); // UNK_0xf1a2
    UNK_0xf108(); // UNK_0xf108
    Push2Words("*SHIP");
    _gt_C_plus_S(); // >C+S
    UNK_0xf1c6(); // UNK_0xf1c6
    CDROP(); // CDROP
    CDROP(); // CDROP
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    return;
  }
  Push(Read16(pp_UNK_0xef6e)); // UNK_0xef6e @
  UNK_0xf12e(); // UNK_0xf12e
  UNK_0xf1c6(); // UNK_0xf1c6
}


// ================================================
// 0xf3af: WORD 'UNK_0xf3b1' codep=0x224c parp=0xf3b1
// ================================================

void UNK_0xf3b1() // UNK_0xf3b1
{
  unsigned short int a;
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  a = Pop(); // >R
  UNK_0xf1e0(); // UNK_0xf1e0
  SWAP(); // SWAP
  UNK_0xf1a2(); // UNK_0xf1a2
  Pop(); // DROP
  UNK_0xef7e(); // UNK_0xef7e
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xef2c.offset); // UNK_0xef2c<IFIELD>
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
  UNK_0xf000(); // UNK_0xf000
}


// ================================================
// 0xf3eb: WORD 'UNK_0xf3ed' codep=0x224c parp=0xf3ed
// ================================================

void UNK_0xf3ed() // UNK_0xf3ed
{
  UNK_0xf2e0(); // UNK_0xf2e0
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Y_slash_N(); // Y/N
  if (Pop() != 0)
  {
    UNK_0xf362(); // UNK_0xf362
    UNK_0xf3b1(); // UNK_0xf3b1
    Push(pp_UNK_0xef66); // UNK_0xef66
    ON_2(); // ON_2
    return;
  }
  Push(pp_UNK_0xef66); // UNK_0xef66
  _099(); // 099
}


// ================================================
// 0xf40b: WORD 'UNK_0xf40d' codep=0x224c parp=0xf40d
// ================================================

void UNK_0xf40d() // UNK_0xf40d
{
  UNK_0xf338(); // UNK_0xf338
  Push(pp_UNK_0xef66); // UNK_0xef66
  OFF_2(); // OFF_2
}


// ================================================
// 0xf415: WORD 'UNK_0xf417' codep=0x224c parp=0xf417
// ================================================

void UNK_0xf417() // UNK_0xf417
{
  UNK_0xf150(); // UNK_0xf150
  if (Pop() != 0)
  {
    UNK_0xf3ed(); // UNK_0xf3ed
    return;
  }
  UNK_0xf40d(); // UNK_0xf40d
}


// ================================================
// 0xf427: WORD 'UNK_0xf429' codep=0x224c parp=0xf429
// ================================================

void UNK_0xf429() // UNK_0xf429
{
  UNK_0xf1e0(); // UNK_0xf1e0
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    UNK_0xf142(); // UNK_0xf142
    if (Pop() != 0)
    {
      UNK_0xf37d(); // UNK_0xf37d
      UNK_0xf417(); // UNK_0xf417
    } else
    {
      Push(pp_UNK_0xef66); // UNK_0xef66
      ON_2(); // ON_2
      return;
    }
  } else
  {
    UNK_0xef76(); // UNK_0xef76
    Push(Read16(regsp)); // DUP
    Push(pp_UNK_0xef6e); // UNK_0xef6e
    Store_2(); // !_2
    UNK_0xf417(); // UNK_0xf417
  }
  Push(Read16(pp_UNK_0xef66)==0?1:0); // UNK_0xef66 @ 0=
  if (Pop() == 0) return;
  UNK_0xf312(); // UNK_0xf312
  UNK_0xf2fc(); // UNK_0xf2fc
  UNK_0xf010(); // UNK_0xf010
}


// ================================================
// 0xf469: WORD 'UNK_0xf46b' codep=0x224c parp=0xf46b
// ================================================

void UNK_0xf46b() // UNK_0xf46b
{
  UNK_0xef96(); // UNK_0xef96
  Push((Read16(Pop() + 1)&0xFF) & 0x007f); //  1+ C@ 0x007f AND
  UNK_0xef96(); // UNK_0xef96
  Push(Pop() + 1); //  1+
  C_ex__2(); // C!_2
}


// ================================================
// 0xf47f: WORD 'UNK_0xf481' codep=0x224c parp=0xf481
// ================================================

void UNK_0xf481() // UNK_0xf481
{
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefba(); // UNK_0xefba
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefae(); // UNK_0xefae
  Push(0x0049);
  _gt_(); // >
  Push(0);
  Push(5);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xf46b(); // UNK_0xf46b
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
// 0xf4c9: WORD 'UNK_0xf4cb' codep=0x224c parp=0xf4cb
// ================================================

void UNK_0xf4cb() // UNK_0xf4cb
{
  Push(Pop() + 1); //  1+
  Push(0x0064);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  UNK_0xef96(); // UNK_0xef96
  UNK_0xefca(); // UNK_0xefca
  UNK_0xf481(); // UNK_0xf481
}


// ================================================
// 0xf4dd: WORD 'UNK_0xf4df' codep=0x224c parp=0xf4df params=0 returns=0
// ================================================

void UNK_0xf4df() // UNK_0xf4df
{
  Push(Read16(pp_IsREPAIR)==1?1:0); // ?REPAIR @ 1 =
  if (Pop() == 0) return;
  UNK_0xf01c(); // UNK_0xf01c
  Pop(); // DROP
  UNK_0xf0a6(); // UNK_0xf0a6
  Push(-1);
  Push(pp_IsREPAIR); // ?REPAIR
  Store_2(); // !_2
}


// ================================================
// 0xf4f9: WORD 'DO-REPA' codep=0x224c parp=0xf505
// ================================================
// entry

void DO_dash_REPA() // DO-REPA
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xf4df(); // UNK_0xf4df
  UNK_0xef86(); // UNK_0xef86
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    UNK_0xef96(); // UNK_0xef96
    UNK_0xefae(); // UNK_0xefae
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      UNK_0xf429(); // UNK_0xf429
      Push(Read16(pp_UNK_0xef66)); // UNK_0xef66 @
      if (Pop() != 0)
      {
        UNK_0xf4cb(); // UNK_0xf4cb
        Push(Pop()==0x0064?1:0); //  0x0064 =
        if (Pop() != 0)
        {
          UNK_0xf346(); // UNK_0xf346
          UNK_0xf2fc(); // UNK_0xf2fc
          UNK_0xf010(); // UNK_0xf010
          UNK_0xf46b(); // UNK_0xf46b
        }
      } else
      {
        Pop(); // DROP
      }
    }
  } else
  {
    UNK_0xf346(); // UNK_0xf346
    UNK_0xf2fc(); // UNK_0xf2fc
    UNK_0xf010(); // UNK_0xf010
  }
  ICLOSE(); // ICLOSE
}

// 0xf551: db 0x52 0x45 0x50 0x41 0x49 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'REPAIR_________ '

