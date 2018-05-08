// ====== OVERLAY 'PLSET-OV' ======
// store offset = 0xed50
// overlay size   = 0x0810

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xed66  codep:0x2214 parp:0xed66 size:0x0002 C-string:'UNK_0xed66'
//      UNK_0xed6a  codep:0x2214 parp:0xed6a size:0x0002 C-string:'UNK_0xed6a'
//      UNK_0xed6e  codep:0x2214 parp:0xed6e size:0x0002 C-string:'UNK_0xed6e'
//      UNK_0xed72  codep:0x7394 parp:0xed72 size:0x0006 C-string:'UNK_0xed72'
//      UNK_0xed7a  codep:0x7394 parp:0xed7a size:0x0006 C-string:'UNK_0xed7a'
//      UNK_0xed82  codep:0x7394 parp:0xed82 size:0x0006 C-string:'UNK_0xed82'
//      UNK_0xed8a  codep:0x7394 parp:0xed8a size:0x0006 C-string:'UNK_0xed8a'
//      UNK_0xed92  codep:0x7394 parp:0xed92 size:0x0006 C-string:'UNK_0xed92'
//      UNK_0xed9a  codep:0x7394 parp:0xed9a size:0x0006 C-string:'UNK_0xed9a'
//      UNK_0xeda2  codep:0x7394 parp:0xeda2 size:0x0006 C-string:'UNK_0xeda2'
//      UNK_0xedaa  codep:0x7394 parp:0xedaa size:0x0006 C-string:'UNK_0xedaa'
//      UNK_0xedb2  codep:0x7394 parp:0xedb2 size:0x0006 C-string:'UNK_0xedb2'
//      UNK_0xedba  codep:0x7394 parp:0xedba size:0x0006 C-string:'UNK_0xedba'
//      UNK_0xedc2  codep:0x7394 parp:0xedc2 size:0x0006 C-string:'UNK_0xedc2'
//      UNK_0xedca  codep:0x7394 parp:0xedca size:0x0006 C-string:'UNK_0xedca'
//      UNK_0xedd2  codep:0x7394 parp:0xedd2 size:0x0006 C-string:'UNK_0xedd2'
//      UNK_0xedda  codep:0x224c parp:0xedda size:0x0015 C-string:'UNK_0xedda'
//      UNK_0xedf1  codep:0x224c parp:0xedf1 size:0x000a C-string:'UNK_0xedf1'
//      UNK_0xedfd  codep:0x224c parp:0xedfd size:0x000a C-string:'UNK_0xedfd'
//      UNK_0xee09  codep:0x7420 parp:0xee09 size:0x0003 C-string:'UNK_0xee09'
//      UNK_0xee0e  codep:0x224c parp:0xee0e size:0x0034 C-string:'UNK_0xee0e'
//      UNK_0xee44  codep:0x224c parp:0xee44 size:0x005e C-string:'UNK_0xee44'
//      UNK_0xeea4  codep:0x224c parp:0xeea4 size:0x001a C-string:'UNK_0xeea4'
//         LO-MASS  codep:0xede2 parp:0xeeca size:0x0010 C-string:'LO_dash_MASS'
//         HI-MASS  codep:0xede2 parp:0xeee6 size:0x0010 C-string:'HI_dash_MASS'
//      UNK_0xeef8  codep:0x224c parp:0xeef8 size:0x0014 C-string:'UNK_0xeef8'
//      UNK_0xef0e  codep:0x224c parp:0xef0e size:0x002e C-string:'UNK_0xef0e'
//      UNK_0xef3e  codep:0x224c parp:0xef3e size:0x001c C-string:'UNK_0xef3e'
//      UNK_0xef5c  codep:0x224c parp:0xef5c size:0x002c C-string:'UNK_0xef5c'
//      UNK_0xef8a  codep:0x224c parp:0xef8a size:0x0054 C-string:'UNK_0xef8a'
//      UNK_0xefe0  codep:0x224c parp:0xefe0 size:0x0090 C-string:'UNK_0xefe0'
//      UNK_0xf072  codep:0x224c parp:0xf072 size:0x000e C-string:'UNK_0xf072'
//      UNK_0xf082  codep:0x224c parp:0xf082 size:0x005e C-string:'UNK_0xf082'
//      UNK_0xf0e2  codep:0x224c parp:0xf0e2 size:0x0030 C-string:'UNK_0xf0e2'
//      UNK_0xf114  codep:0x224c parp:0xf114 size:0x0020 C-string:'UNK_0xf114'
//      UNK_0xf136  codep:0x224c parp:0xf136 size:0x0008 C-string:'UNK_0xf136'
//      UNK_0xf140  codep:0x224c parp:0xf140 size:0x000a C-string:'UNK_0xf140'
//      UNK_0xf14c  codep:0x224c parp:0xf14c size:0x000e C-string:'UNK_0xf14c'
//        SUBHYDRO  codep:0x1d29 parp:0xf167 size:0x0005 C-string:'SUBHYDRO'
//        TEMPHYDR  codep:0x1d29 parp:0xf179 size:0x0008 C-string:'TEMPHYDR'
//        INFHYDRO  codep:0x1d29 parp:0xf18e size:0x0007 C-string:'INFHYDRO'
//         SUBATMO  codep:0x1d29 parp:0xf1a1 size:0x0005 C-string:'SUBATMO'
//        TEMPATMO  codep:0x1d29 parp:0xf1b3 size:0x0009 C-string:'TEMPATMO'
//         INFATMO  codep:0x1d29 parp:0xf1c8 size:0x0007 C-string:'INFATMO'
//      UNK_0xf1d1  codep:0x224c parp:0xf1d1 size:0x000e C-string:'UNK_0xf1d1'
//      UNK_0xf1e1  codep:0x224c parp:0xf1e1 size:0x0038 C-string:'UNK_0xf1e1'
//      UNK_0xf21b  codep:0x224c parp:0xf21b size:0x002a C-string:'UNK_0xf21b'
//      UNK_0xf247  codep:0x224c parp:0xf247 size:0x003a C-string:'UNK_0xf247'
//      UNK_0xf283  codep:0x224c parp:0xf283 size:0x001c C-string:'UNK_0xf283'
//      UNK_0xf2a1  codep:0x224c parp:0xf2a1 size:0x003a C-string:'UNK_0xf2a1'
//      UNK_0xf2dd  codep:0x224c parp:0xf2dd size:0x0018 C-string:'UNK_0xf2dd'
//      UNK_0xf2f7  codep:0x224c parp:0xf2f7 size:0x0030 C-string:'UNK_0xf2f7'
//      UNK_0xf329  codep:0x224c parp:0xf329 size:0x000c C-string:'UNK_0xf329'
//            RUGS  codep:0x1d29 parp:0xf33e size:0x0020 C-string:'RUGS'
//      UNK_0xf360  codep:0x224c parp:0xf360 size:0x0012 C-string:'UNK_0xf360'
//      UNK_0xf374  codep:0x224c parp:0xf374 size:0x0014 C-string:'UNK_0xf374'
//      UNK_0xf38a  codep:0x224c parp:0xf38a size:0x000e C-string:'UNK_0xf38a'
//      UNK_0xf39a  codep:0x224c parp:0xf39a size:0x0010 C-string:'UNK_0xf39a'
//          CLIST1  codep:0x1d29 parp:0xf3b5 size:0x0014 C-string:'CLIST1'
//          CLIST2  codep:0x1d29 parp:0xf3d4 size:0x0014 C-string:'CLIST2'
//          CLIST3  codep:0x1d29 parp:0xf3f3 size:0x0014 C-string:'CLIST3'
//      UNK_0xf409  codep:0x224c parp:0xf409 size:0x0014 C-string:'UNK_0xf409'
//          (SAND)  codep:0x1d29 parp:0xf428 size:0x0010 C-string:'_ro_SAND_rc_'
//      UNK_0xf43a  codep:0x224c parp:0xf43a size:0x0052 C-string:'UNK_0xf43a'
//      UNK_0xf48e  codep:0x224c parp:0xf48e size:0x000c C-string:'UNK_0xf48e'
//      UNK_0xf49c  codep:0x224c parp:0xf49c size:0x0016 C-string:'UNK_0xf49c'
//      UNK_0xf4b4  codep:0x224c parp:0xf4b4 size:0x0012 C-string:'UNK_0xf4b4'
//        (TERRAIN  codep:0x4b3b parp:0xf4d3 size:0x0018 C-string:'_ro_TERRAIN'
//      UNK_0xf4ed  codep:0x224c parp:0xf4ed size:0x0008 C-string:'UNK_0xf4ed'
//      UNK_0xf4f7  codep:0x224c parp:0xf4f7 size:0x0008 C-string:'UNK_0xf4f7'
//      UNK_0xf501  codep:0x224c parp:0xf501 size:0x001a C-string:'UNK_0xf501'
//        PLAN-RUL  codep:0x224c parp:0xf528 size:0x0000 C-string:'PLAN_dash_RUL'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_P_dash_COLOR; // P-COLOR
extern const unsigned short int pp_P_dash_PHRAS; // P-PHRAS
extern const unsigned short int pp_P_dash_CARP; // P-CARP
extern const unsigned short int pp_O_dash_COLOR; // O-COLOR
extern const unsigned short int pp_HYDRO; // HYDRO
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp__ro_ELIST_rc_; // (ELIST)
extern const unsigned short int pp_GLOBALS; // GLOBALS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType TEXT_dash_CO; // TEXT-CO
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void _co_(); // ,
void PICK(); // PICK
void D_eq_(); // D=
void WITHIN(); // WITHIN
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _1_dot_5_ex__2(); // 1.5!_2
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void INEXT(); // INEXT
void IFIRST(); // IFIRST
void IFIND(); // IFIND
void ALL(); // ALL
void StoreXYSEED(); // !XYSEED
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _1_dot_5_at_(); // 1.5@
void CI(); // CI
void LO_dash_MASS(); // LO-MASS
void HI_dash_MASS(); // HI-MASS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_SUBHYDRO = 0xf167; // SUBHYDRO size: 5
// {0x01, 0x02, 0x03, 0x04, 0x00}

const unsigned short int pp_TEMPHYDR = 0xf179; // TEMPHYDR size: 8
// {0x05, 0x06, 0x07, 0x08, 0x00, 0x05, 0x05, 0x05}

const unsigned short int pp_INFHYDRO = 0xf18e; // INFHYDRO size: 7
// {0x09, 0x0a, 0x0b, 0x0c, 0x07, 0x0d, 0x00}

const unsigned short int pp_SUBATMO = 0xf1a1; // SUBATMO size: 5
// {0x0e, 0x0c, 0x07, 0x06, 0x00}

const unsigned short int pp_TEMPATMO = 0xf1b3; // TEMPATMO size: 9
// {0x0f, 0x10, 0x11, 0x0f, 0x12, 0x13, 0x14, 0x00, 0x0f}

const unsigned short int pp_INFATMO = 0xf1c8; // INFATMO size: 7
// {0x0e, 0x15, 0x16, 0x0c, 0x07, 0x0d, 0x00}

const unsigned short int pp_RUGS = 0xf33e; // RUGS size: 32
// {0x02, 0x00, 0x0a, 0x4d, 0x02, 0x00, 0x1f, 0x4d, 0x02, 0x00, 0x35, 0x4d, 0x02, 0x00, 0x48, 0x4d, 0x02, 0x00, 0x5f, 0x4d, 0x02, 0x00, 0x75, 0x4d, 0x02, 0x00, 0x88, 0x4d, 0x02, 0x00, 0x99, 0x4d}

const unsigned short int pp_CLIST1 = 0xf3b5; // CLIST1 size: 20
// {0x02, 0x00, 0xcf, 0x49, 0x02, 0x00, 0xae, 0x4b, 0x02, 0x00, 0xdb, 0x4b, 0x02, 0x00, 0x15, 0x4c, 0x02, 0x00, 0x3e, 0x4c}

const unsigned short int pp_CLIST2 = 0xf3d4; // CLIST2 size: 20
// {0x02, 0x00, 0xf2, 0x49, 0x02, 0x00, 0x93, 0x4c, 0x02, 0x00, 0x8a, 0x49, 0x02, 0x00, 0x65, 0x48, 0x02, 0x00, 0x6b, 0x4c}

const unsigned short int pp_CLIST3 = 0xf3f3; // CLIST3 size: 20
// {0x02, 0x00, 0xe1, 0x49, 0x02, 0x00, 0x00, 0x4c, 0x02, 0x00, 0x2b, 0x4c, 0x02, 0x00, 0x57, 0x4c, 0x02, 0x00, 0xf2, 0x49}

const unsigned short int pp__ro_SAND_rc_ = 0xf428; // (SAND) size: 16
// {0x02, 0x00, 0x04, 0x4b, 0x02, 0x00, 0x1a, 0x4b, 0x02, 0x00, 0x49, 0x4b, 0x02, 0x00, 0x31, 0x4b}


const unsigned short int cc_UNK_0xed66 = 0xed66; // UNK_0xed66
const unsigned short int cc_UNK_0xed6a = 0xed6a; // UNK_0xed6a
const unsigned short int cc_UNK_0xed6e = 0xed6e; // UNK_0xed6e


// 0xed62: db 0x80 0x00 '  '

// ================================================
// 0xed64: WORD 'UNK_0xed66' codep=0x2214 parp=0xed66
// ================================================
// 0xed66: dw 0x0020

// ================================================
// 0xed68: WORD 'UNK_0xed6a' codep=0x2214 parp=0xed6a
// ================================================
// orphan
// 0xed6a: dw 0x0043

// ================================================
// 0xed6c: WORD 'UNK_0xed6e' codep=0x2214 parp=0xed6e
// ================================================
// orphan
// 0xed6e: dw 0x0044

// ================================================
// 0xed70: WORD 'UNK_0xed72' codep=0x7394 parp=0xed72
// ================================================
LoadDataType UNK_0xed72 = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed78: WORD 'UNK_0xed7a' codep=0x7394 parp=0xed7a
// ================================================
LoadDataType UNK_0xed7a = {PLANETIDX, 0x0d, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed80: WORD 'UNK_0xed82' codep=0x7394 parp=0xed82
// ================================================
LoadDataType UNK_0xed82 = {PLANETIDX, 0x0e, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed88: WORD 'UNK_0xed8a' codep=0x7394 parp=0xed8a
// ================================================
LoadDataType UNK_0xed8a = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed90: WORD 'UNK_0xed92' codep=0x7394 parp=0xed92
// ================================================
LoadDataType UNK_0xed92 = {PLANETIDX, 0x00, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed98: WORD 'UNK_0xed9a' codep=0x7394 parp=0xed9a
// ================================================
LoadDataType UNK_0xed9a = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xeda0: WORD 'UNK_0xeda2' codep=0x7394 parp=0xeda2
// ================================================
LoadDataType UNK_0xeda2 = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xeda8: WORD 'UNK_0xedaa' codep=0x7394 parp=0xedaa
// ================================================
LoadDataType UNK_0xedaa = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedb0: WORD 'UNK_0xedb2' codep=0x7394 parp=0xedb2
// ================================================
LoadDataType UNK_0xedb2 = {PLANETIDX, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedb8: WORD 'UNK_0xedba' codep=0x7394 parp=0xedba
// ================================================
LoadDataType UNK_0xedba = {PLANETIDX, 0x0f, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedc0: WORD 'UNK_0xedc2' codep=0x7394 parp=0xedc2
// ================================================
LoadDataType UNK_0xedc2 = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedc8: WORD 'UNK_0xedca' codep=0x7394 parp=0xedca
// ================================================
LoadDataType UNK_0xedca = {PLANETIDX, 0x11, 0x02, 0x17, 0x6c49};

// ================================================
// 0xedd0: WORD 'UNK_0xedd2' codep=0x7394 parp=0xedd2
// ================================================
LoadDataType UNK_0xedd2 = {PLANETIDX, 0x13, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedd8: WORD 'UNK_0xedda' codep=0x224c parp=0xedda
// ================================================
// orphan

void UNK_0xedda() // UNK_0xedda
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(0);
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xede2: call   1649
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xedef: WORD 'UNK_0xedf1' codep=0x224c parp=0xedf1 params=0 returns=1
// ================================================

void UNK_0xedf1() // UNK_0xedf1
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xedfb: WORD 'UNK_0xedfd' codep=0x224c parp=0xedfd params=0 returns=1
// ================================================

void UNK_0xedfd() // UNK_0xedfd
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xee07: WORD 'UNK_0xee09' codep=0x7420 parp=0xee09
// ================================================
IFieldType UNK_0xee09 = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xee0c: WORD 'UNK_0xee0e' codep=0x224c parp=0xee0e
// ================================================

void UNK_0xee0e() // UNK_0xee0e
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(cc_UNK_0xed66)); // UNK_0xed66
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
  Push(0);
  while(1)
  {
    GetINST_dash_C(); // @INST-C
    Push(Pop()==Read16(cc_UNK_0xed66)?1:0); //  UNK_0xed66 =
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
    }
    Push(pp__ro_PLANET); // (PLANET
    _1_dot_5_at_(); // 1.5@
    CI(); // CI
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) return;
    INEXT(); // INEXT
  }
}


// ================================================
// 0xee42: WORD 'UNK_0xee44' codep=0x224c parp=0xee44 params=0 returns=1
// ================================================

void UNK_0xee44() // UNK_0xee44
{
  unsigned short int i, imax, a;
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    UNK_0xee0e(); // UNK_0xee0e
    Push(0);
    ICLOSE(); // ICLOSE
    Push(Read16(0x65e1+UNK_0xee09.offset)&0xFF); // UNK_0xee09<IFIELD> C@
    Push(9);
    Push(1);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      Push(2);
      MOD(); // MOD
      if (Pop() != 0)
      {
        SWAP(); // SWAP
        Push(Pop() + 1); //  1+
        Push(3);
        PICK(); // PICK
        OVER(); // OVER
        Push((Pop()==Pop())?1:0); // =
        if (Pop() != 0)
        {
          Push(i); // I
          imax = i; // LEAVE
        }
        SWAP(); // SWAP
      }
      Push(Pop() >> 1); //  2/
      i++;
    } while(i<imax); // (LOOP)

    Pop(); // DROP
    a = Pop(); // >R
    Pop(); Pop(); // 2DROP
    Push(a); // R>
    ICLOSE(); // ICLOSE
    return;
  }
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeea2: WORD 'UNK_0xeea4' codep=0x224c parp=0xeea4 params=0 returns=0
// ================================================

void UNK_0xeea4() // UNK_0xeea4
{
  UNK_0xee44(); // UNK_0xee44
  Push(pp_GLOBALS); // GLOBALS
  Store_2(); // !_2
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
  StoreXYSEED(); // !XYSEED
}


// ================================================
// 0xeebe: WORD 'LO-MASS' codep=0xede2 parp=0xeeca
// ================================================
// 0xeeca: db 0x00 0x00 0x01 0x00 0x32 0x00 0x5a 0x00 0x6e 0x00 0xe8 0x03 0x65 0x00 0x64 0x00 '    2 Z n   e d '

// ================================================
// 0xeeda: WORD 'HI-MASS' codep=0xede2 parp=0xeee6
// ================================================
// 0xeee6: db 0x00 0x00 0x32 0x00 0x5a 0x00 0x6e 0x00 0xe8 0x03 0x10 0x27 0x66 0x00 0x65 0x00 '  2 Z n    'f e '

// ================================================
// 0xeef6: WORD 'UNK_0xeef8' codep=0x224c parp=0xeef8
// ================================================

void UNK_0xeef8() // UNK_0xeef8
{
  LoadData(UNK_0xed92); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  LO_dash_MASS(); // LO-MASS
  SWAP(); // SWAP
  HI_dash_MASS(); // HI-MASS
  RRND(); // RRND
  LoadData(UNK_0xed9a); // from 'PLANET'
  Store_2(); // !_2
}


// ================================================
// 0xef0c: WORD 'UNK_0xef0e' codep=0x224c parp=0xef0e params=0 returns=1
// ================================================

void UNK_0xef0e() // UNK_0xef0e
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset) - 0x007d); // INST-X<IFIELD> @ 0x007d -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(Read16(0x65e1+INST_dash_Y.offset) - 0x0064); // INST-Y<IFIELD> @ 0x0064 -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef3c: WORD 'UNK_0xef3e' codep=0x224c parp=0xef3e params=2 returns=1
// ================================================

void UNK_0xef3e() // UNK_0xef3e
{
  unsigned short int a;
  while(1)
  {
    _2DUP(); // 2DUP
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(Pop()==6?1:0); //  6 =
    if (Pop() == 0) break;

    Pop(); // DROP
  }
  a = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(a); // R>
}


// ================================================
// 0xef5a: WORD 'UNK_0xef5c' codep=0x224c parp=0xef5c
// ================================================

void UNK_0xef5c() // UNK_0xef5c
{
  Push(1);
  UNK_0xef0e(); // UNK_0xef0e
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + 5); //  5 +
  Push(0x0017);
  MIN(); // MIN
  _2DUP(); // 2DUP
  UNK_0xef3e(); // UNK_0xef3e
  LoadData(UNK_0xed72); // from 'PLANET'
  C_ex__2(); // C!_2
  _2DUP(); // 2DUP
  UNK_0xef3e(); // UNK_0xef3e
  LoadData(UNK_0xed7a); // from 'PLANET'
  C_ex__2(); // C!_2
  UNK_0xef3e(); // UNK_0xef3e
  LoadData(UNK_0xed82); // from 'PLANET'
  C_ex__2(); // C!_2
}


// ================================================
// 0xef88: WORD 'UNK_0xef8a' codep=0x224c parp=0xef8a
// ================================================

void UNK_0xef8a() // UNK_0xef8a
{
  LoadData(UNK_0xed9a); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(0x0046);
  _slash_(); // /
  Push(5);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(5);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    UNK_0xedfd(); // UNK_0xedfd
    Push(0x0032);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
    }
  }
  Push(Read16(regsp)); // DUP
  Push(2);
  Push(6);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    UNK_0xedfd(); // UNK_0xedfd
    Push(0x0032);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(Pop() - 1); //  1-
    }
  }
  LoadData(UNK_0xeda2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(1);
    MAX(); // MAX
  }
  LoadData(UNK_0xedd2); // from 'PLANET'
  C_ex__2(); // C!_2
}


// ================================================
// 0xefde: WORD 'UNK_0xefe0' codep=0x224c parp=0xefe0 params=1 returns=0
// ================================================

void UNK_0xefe0() // UNK_0xefe0
{
  Push(0x004d);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(1);
    return;
  }
  Push(0x004b);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(2);
    return;
  }
  Push(0x0047);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(3);
    return;
  }
  Push(0x0046);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(4);
    return;
  }
  Push(0x0041);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(5);
    return;
  }
  Push(0x0042);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(6);
    return;
  }
  Push(0x004f);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(7);
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf070: WORD 'UNK_0xf072' codep=0x224c parp=0xf072 params=0 returns=0
// ================================================

void UNK_0xf072() // UNK_0xf072
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  GetINST_dash_S(); // @INST-S
  UNK_0xefe0(); // UNK_0xefe0
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf080: WORD 'UNK_0xf082' codep=0x224c parp=0xf082 params=1 returns=1
// ================================================

void UNK_0xf082() // UNK_0xf082
{
  Push(-2);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(4);
    return;
  }
  Push(-1);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(3);
    return;
  }
  Push(0);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(2);
    return;
  }
  Push(1);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(1);
    return;
  }
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(5);
  } else
  {
    Push(0);
  }
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf0e0: WORD 'UNK_0xf0e2' codep=0x224c parp=0xf0e2
// ================================================

void UNK_0xf0e2() // UNK_0xf0e2
{
  UNK_0xee44(); // UNK_0xee44
  Push(Read16(regsp)); // DUP
  UNK_0xf072(); // UNK_0xf072
  _dash_(); // -
  UNK_0xf082(); // UNK_0xf082
  SWAP(); // SWAP
  LoadData(UNK_0xedd2); // from 'PLANET'
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() != 0)
  {
    Push(4);
  } else
  {
    Push(2);
  }
  _dash_(); // -
  UNK_0xf072(); // UNK_0xf072
  _dash_(); // -
  UNK_0xf082(); // UNK_0xf082
  LoadData(UNK_0xedc2); // from 'PLANET'
  C_ex__2(); // C!_2
  LoadData(UNK_0xedba); // from 'PLANET'
  C_ex__2(); // C!_2
}


// ================================================
// 0xf112: WORD 'UNK_0xf114' codep=0x224c parp=0xf114
// ================================================

void UNK_0xf114() // UNK_0xf114
{
  LoadData(UNK_0xedd2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(4);
  MIN(); // MIN
  UNK_0xedfd(); // UNK_0xedfd
  Push(0x0032);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Pop() - 1); //  1-
  }
  Push(0);
  MAX(); // MAX
  LoadData(UNK_0xedca); // from 'PLANET'
  C_ex__2(); // C!_2
}


// ================================================
// 0xf134: WORD 'UNK_0xf136' codep=0x224c parp=0xf136
// ================================================

void UNK_0xf136() // UNK_0xf136
{
  UNK_0xedf1(); // UNK_0xedf1
  LoadData(UNK_0xed8a); // from 'PLANET'
  C_ex__2(); // C!_2
}


// ================================================
// 0xf13e: WORD 'UNK_0xf140' codep=0x224c parp=0xf140
// ================================================

void UNK_0xf140() // UNK_0xf140
{
  UNK_0xef5c(); // UNK_0xef5c
  UNK_0xef8a(); // UNK_0xef8a
  UNK_0xf114(); // UNK_0xf114
  UNK_0xf0e2(); // UNK_0xf0e2
}


// ================================================
// 0xf14a: WORD 'UNK_0xf14c' codep=0x224c parp=0xf14c
// ================================================

void UNK_0xf14c() // UNK_0xf14c
{
  Push(0);
  LoadData(UNK_0xeda2); // from 'PLANET'
  C_ex__2(); // C!_2
  UNK_0xeef8(); // UNK_0xeef8
  UNK_0xf136(); // UNK_0xf136
  UNK_0xf140(); // UNK_0xf140
}


// ================================================
// 0xf15a: WORD 'SUBHYDRO' codep=0x1d29 parp=0xf167
// ================================================
// 0xf167: db 0x01 0x02 0x03 0x04 0x00 '     '

// ================================================
// 0xf16c: WORD 'TEMPHYDR' codep=0x1d29 parp=0xf179
// ================================================
// 0xf179: db 0x05 0x06 0x07 0x08 0x00 0x05 0x05 0x05 '        '

// ================================================
// 0xf181: WORD 'INFHYDRO' codep=0x1d29 parp=0xf18e
// ================================================
// 0xf18e: db 0x09 0x0a 0x0b 0x0c 0x07 0x0d 0x00 '       '

// ================================================
// 0xf195: WORD 'SUBATMO' codep=0x1d29 parp=0xf1a1
// ================================================
// 0xf1a1: db 0x0e 0x0c 0x07 0x06 0x00 '     '

// ================================================
// 0xf1a6: WORD 'TEMPATMO' codep=0x1d29 parp=0xf1b3
// ================================================
// 0xf1b3: db 0x0f 0x10 0x11 0x0f 0x12 0x13 0x14 0x00 0x0f '         '

// ================================================
// 0xf1bc: WORD 'INFATMO' codep=0x1d29 parp=0xf1c8
// ================================================
// 0xf1c8: db 0x0e 0x15 0x16 0x0c 0x07 0x0d 0x00 '       '

// ================================================
// 0xf1cf: WORD 'UNK_0xf1d1' codep=0x224c parp=0xf1d1
// ================================================

void UNK_0xf1d1() // UNK_0xf1d1
{
  LoadData(UNK_0xedc2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xedba); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
}


// ================================================
// 0xf1df: WORD 'UNK_0xf1e1' codep=0x224c parp=0xf1e1
// ================================================

void UNK_0xf1e1() // UNK_0xf1e1
{
  UNK_0xf1d1(); // UNK_0xf1d1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0);
    Push(5);
    RRND(); // RRND
    Push(pp_SUBHYDRO); // SUBHYDRO
  } else
  {
    Push(Pop()==5?1:0); //  5 =
    if (Pop() != 0)
    {
      Push(0);
      Push(7);
      RRND(); // RRND
      Push(pp_INFHYDRO); // INFHYDRO
    } else
    {
      Push(0);
      Push(8);
      RRND(); // RRND
      Push(pp_TEMPHYDR); // TEMPHYDR
    }
  }
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xf219: WORD 'UNK_0xf21b' codep=0x224c parp=0xf21b
// ================================================

void UNK_0xf21b() // UNK_0xf21b
{
  unsigned short int a;
  LoadData(UNK_0xedaa); // from 'PLANET'
  Push(!((Read16(Pop())&0xFF)==2?1:0)); //  C@ 2 = NOT
  a = Pop(); // >R
  while(1)
  {
    UNK_0xf1e1(); // UNK_0xf1e1
    Push(Read16(regsp)); // DUP
    Push(Read16(a)); // R@
    Push(Pop() | Pop()); // OR
    Push(Pop()==0?1:0); //  0=
    if (Pop() == 0) break;

    Pop(); // DROP
  }
  Push(a); // R>
  Pop(); // DROP
  Push(pp_HYDRO); // HYDRO
  Store_2(); // !_2
}


// ================================================
// 0xf245: WORD 'UNK_0xf247' codep=0x224c parp=0xf247
// ================================================

void UNK_0xf247() // UNK_0xf247
{
  UNK_0xf1d1(); // UNK_0xf1d1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0);
    Push(5);
    RRND(); // RRND
    Push(pp_SUBATMO); // SUBATMO
  } else
  {
    Push(Pop()==5?1:0); //  5 =
    if (Pop() != 0)
    {
      Push(0);
      Push(7);
      RRND(); // RRND
      Push(pp_INFATMO); // INFATMO
    } else
    {
      Push(0);
      Push(9);
      RRND(); // RRND
      Push(pp_TEMPATMO); // TEMPATMO
    }
  }
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())&0xFF); //  C@
}


// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x224c parp=0xf283
// ================================================

void UNK_0xf283() // UNK_0xf283
{
  LoadData(UNK_0xedd2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    do
    {
      UNK_0xf247(); // UNK_0xf247
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    } while(Pop() == 0);
  } else
  {
    Push(0);
  }
  Push(pp_ATMO); // ATMO
  Store_2(); // !_2
}


// ================================================
// 0xf29f: WORD 'UNK_0xf2a1' codep=0x224c parp=0xf2a1
// ================================================

void UNK_0xf2a1() // UNK_0xf2a1
{
  LoadData(UNK_0xedb2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(5);
    Push(pp_HYDRO); // HYDRO
    Store_2(); // !_2
    Push(0x000f);
    Push(pp_ATMO); // ATMO
    Store_2(); // !_2
    return;
  }
  LoadData(UNK_0xeda2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(5);
    Push(pp_HYDRO); // HYDRO
    Store_2(); // !_2
    Push(0x000f);
    Push(pp_ATMO); // ATMO
    Store_2(); // !_2
    return;
  }
  UNK_0xf21b(); // UNK_0xf21b
  UNK_0xf283(); // UNK_0xf283
}


// ================================================
// 0xf2db: WORD 'UNK_0xf2dd' codep=0x224c parp=0xf2dd
// ================================================
// orphan

void UNK_0xf2dd() // UNK_0xf2dd
{
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(UNK_0xedba); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(UNK_0xedc2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2f5: WORD 'UNK_0xf2f7' codep=0x224c parp=0xf2f7
// ================================================
// orphan

void UNK_0xf2f7() // UNK_0xf2f7
{
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(regsp)); // DUP
  Push(0x01e0);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x03c0);
    SWAP(); // SWAP
    _dash_(); // -
  }
  Push(0x01e0);
  UNK_0xf2dd(); // UNK_0xf2dd
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf327: WORD 'UNK_0xf329' codep=0x224c parp=0xf329
// ================================================

void UNK_0xf329() // UNK_0xf329
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xeda2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf335: WORD 'RUGS' codep=0x1d29 parp=0xf33e
// ================================================
// 0xf33e: db 0x02 0x00 0x0a 0x4d 0x02 0x00 0x1f 0x4d 0x02 0x00 0x35 0x4d 0x02 0x00 0x48 0x4d 0x02 0x00 0x5f 0x4d 0x02 0x00 0x75 0x4d 0x02 0x00 0x88 0x4d 0x02 0x00 0x99 0x4d '   M   M  5M  HM  _M  uM   M   M'

// ================================================
// 0xf35e: WORD 'UNK_0xf360' codep=0x224c parp=0xf360 params=0 returns=2
// ================================================

void UNK_0xf360() // UNK_0xf360
{
  Push(0);
  Push(8);
  RRND(); // RRND
  Push((Pop() * 2) * 2 + pp_RUGS); //  2* 2* RUGS +
  _2_at_(); // 2@
}


// ================================================
// 0xf372: WORD 'UNK_0xf374' codep=0x224c parp=0xf374
// ================================================

void UNK_0xf374() // UNK_0xf374
{
  UNK_0xf329(); // UNK_0xf329
  if (Pop() != 0)
  {
    UNK_0xf360(); // UNK_0xf360
  } else
  {
    Push2Words("0.");
  }
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf388: WORD 'UNK_0xf38a' codep=0x224c parp=0xf38a params=0 returns=0
// ================================================

void UNK_0xf38a() // UNK_0xf38a
{
  Push2Words("0.");
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("0.");
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf398: WORD 'UNK_0xf39a' codep=0x224c parp=0xf39a params=1 returns=2
// ================================================

void UNK_0xf39a() // UNK_0xf39a
{
  Push(0);
  Push(5);
  RRND(); // RRND
  Push((Pop() * 2) * 2); //  2* 2*
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
}


// ================================================
// 0xf3aa: WORD 'CLIST1' codep=0x1d29 parp=0xf3b5
// ================================================
// 0xf3b5: db 0x02 0x00 0xcf 0x49 0x02 0x00 0xae 0x4b 0x02 0x00 0xdb 0x4b 0x02 0x00 0x15 0x4c 0x02 0x00 0x3e 0x4c '   I   K   K   L  >L'

// ================================================
// 0xf3c9: WORD 'CLIST2' codep=0x1d29 parp=0xf3d4
// ================================================
// 0xf3d4: db 0x02 0x00 0xf2 0x49 0x02 0x00 0x93 0x4c 0x02 0x00 0x8a 0x49 0x02 0x00 0x65 0x48 0x02 0x00 0x6b 0x4c '   I   L   I  eH  kL'

// ================================================
// 0xf3e8: WORD 'CLIST3' codep=0x1d29 parp=0xf3f3
// ================================================
// 0xf3f3: db 0x02 0x00 0xe1 0x49 0x02 0x00 0x00 0x4c 0x02 0x00 0x2b 0x4c 0x02 0x00 0x57 0x4c 0x02 0x00 0xf2 0x49 '   I   L  +L  WL   I'

// ================================================
// 0xf407: WORD 'UNK_0xf409' codep=0x224c parp=0xf409 params=0 returns=0
// ================================================

void UNK_0xf409() // UNK_0xf409
{
  Push(0x4a89); Push(0x0002);
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_CLIST1); // CLIST1
  UNK_0xf39a(); // UNK_0xf39a
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf41d: WORD '(SAND)' codep=0x1d29 parp=0xf428
// ================================================
// 0xf428: db 0x02 0x00 0x04 0x4b 0x02 0x00 0x1a 0x4b 0x02 0x00 0x49 0x4b 0x02 0x00 0x31 0x4b '   K   K  IK  1K'

// ================================================
// 0xf438: WORD 'UNK_0xf43a' codep=0x224c parp=0xf43a params=0 returns=0
// ================================================

void UNK_0xf43a() // UNK_0xf43a
{
  Push(Read16(pp_ATMO)); // ATMO @
  if (Pop() != 0)
  {
    Push(pp_CLIST3); // CLIST3
    UNK_0xf39a(); // UNK_0xf39a
    Push(pp_P_dash_COLOR); // P-COLOR
    _1_dot_5_ex__2(); // 1.5!_2
    Push(1);
    Push(0x0064);
    RRND(); // RRND
    Push(0x001f);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(0);
      Push(4);
      RRND(); // RRND
      Push((Pop() * 2) * 2 + pp__ro_SAND_rc_); //  2* 2* (SAND) +
      _2_at_(); // 2@
    } else
    {
      Push(0x4a70); Push(0x0002);
    }
  } else
  {
    Push(0x4a3e); Push(0x0002);
    Push2Words("0.");
    Push(pp_P_dash_COLOR); // P-COLOR
    _1_dot_5_ex__2(); // 1.5!_2
  }
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf48c: WORD 'UNK_0xf48e' codep=0x224c parp=0xf48e params=0 returns=0
// ================================================

void UNK_0xf48e() // UNK_0xf48e
{
  Push(pp_CLIST2); // CLIST2
  UNK_0xf39a(); // UNK_0xf39a
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xf43a(); // UNK_0xf43a
}


// ================================================
// 0xf49a: WORD 'UNK_0xf49c' codep=0x224c parp=0xf49c params=0 returns=0
// ================================================

void UNK_0xf49c() // UNK_0xf49c
{
  Push(0x4ab0); Push(0x0002);
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0x4ada); Push(0x0002);
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf4b2: WORD 'UNK_0xf4b4' codep=0x224c parp=0xf4b4 params=0 returns=0
// ================================================

void UNK_0xf4b4() // UNK_0xf4b4
{
  Push(0x4b77); Push(0x0002);
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf4c6: WORD '(TERRAIN' codep=0x4b3b parp=0xf4d3
// ================================================

void _ro_TERRAIN() // (TERRAIN
{
  switch(Pop()) // (TERRAIN
  {
  case 1:
    UNK_0xf38a(); // UNK_0xf38a
    break;
  case 2:
    UNK_0xf48e(); // UNK_0xf48e
    break;
  case 3:
    UNK_0xf409(); // UNK_0xf409
    break;
  case 4:
    UNK_0xf49c(); // UNK_0xf49c
    break;
  case 5:
    UNK_0xf43a(); // UNK_0xf43a
    break;
  default:
    UNK_0xf4b4(); // UNK_0xf4b4
    break;

  }
}

// ================================================
// 0xf4eb: WORD 'UNK_0xf4ed' codep=0x224c parp=0xf4ed
// ================================================

void UNK_0xf4ed() // UNK_0xf4ed
{
  LoadData(UNK_0xedaa); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_TERRAIN(); // (TERRAIN case
}


// ================================================
// 0xf4f5: WORD 'UNK_0xf4f7' codep=0x224c parp=0xf4f7 params=0 returns=0
// ================================================

void UNK_0xf4f7() // UNK_0xf4f7
{
  Push(0);
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf4ff: WORD 'UNK_0xf501' codep=0x224c parp=0xf501
// ================================================

void UNK_0xf501() // UNK_0xf501
{
  Push(pp__ro_ELIST_rc_); // (ELIST)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf4f7); // probable 'UNK_0xf4f7'
  ALL(); // ALL
  IFIRST(); // IFIRST
  Push(1);
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  Store_2(); // !_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf51b: WORD 'PLAN-RUL' codep=0x224c parp=0xf528
// ================================================
// entry

void PLAN_dash_RUL() // PLAN-RUL
{
  UNK_0xf501(); // UNK_0xf501
  UNK_0xeea4(); // UNK_0xeea4
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(0x0011);
  _gt_(); // >
  if (Pop() != 0)
  {
    UNK_0xf140(); // UNK_0xf140
  } else
  {
    UNK_0xf14c(); // UNK_0xf14c
  }
  UNK_0xf2a1(); // UNK_0xf2a1
  UNK_0xf4ed(); // UNK_0xf4ed
  UNK_0xf374(); // UNK_0xf374
  ICLOSE(); // ICLOSE
}

// 0xf54e: db 0x53 0x45 0x54 0x54 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SETTER____________ '

