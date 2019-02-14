// ====== OVERLAY 'PLSET-OV' ======
// store offset = 0xed50
// overlay size   = 0x0810

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WED66  codep:0x2214 wordp:0xed66 size:0x0002 C-string:'WED66'
//           WED6A  codep:0x2214 wordp:0xed6a size:0x0002 C-string:'WED6A'
//           WED6E  codep:0x2214 wordp:0xed6e size:0x0002 C-string:'WED6E'
//           WED72  codep:0x7394 wordp:0xed72 size:0x0006 C-string:'WED72'
//           WED7A  codep:0x7394 wordp:0xed7a size:0x0006 C-string:'WED7A'
//           WED82  codep:0x7394 wordp:0xed82 size:0x0006 C-string:'WED82'
//           WED8A  codep:0x7394 wordp:0xed8a size:0x0006 C-string:'WED8A'
//           WED92  codep:0x7394 wordp:0xed92 size:0x0006 C-string:'WED92'
//           WED9A  codep:0x7394 wordp:0xed9a size:0x0006 C-string:'WED9A'
//           WEDA2  codep:0x7394 wordp:0xeda2 size:0x0006 C-string:'WEDA2'
//           WEDAA  codep:0x7394 wordp:0xedaa size:0x0006 C-string:'WEDAA'
//           WEDB2  codep:0x7394 wordp:0xedb2 size:0x0006 C-string:'WEDB2'
//           WEDBA  codep:0x7394 wordp:0xedba size:0x0006 C-string:'WEDBA'
//           WEDC2  codep:0x7394 wordp:0xedc2 size:0x0006 C-string:'WEDC2'
//           WEDCA  codep:0x7394 wordp:0xedca size:0x0006 C-string:'WEDCA'
//           WEDD2  codep:0x7394 wordp:0xedd2 size:0x0006 C-string:'WEDD2'
//           WEDDA  codep:0x224c wordp:0xedda size:0x0015 C-string:'WEDDA'
//           WEDF1  codep:0x224c wordp:0xedf1 size:0x000a C-string:'WEDF1'
//           WEDFD  codep:0x224c wordp:0xedfd size:0x000a C-string:'WEDFD'
//           WEE09  codep:0x7420 wordp:0xee09 size:0x0003 C-string:'WEE09'
//           WEE0E  codep:0x224c wordp:0xee0e size:0x0034 C-string:'WEE0E'
//           WEE44  codep:0x224c wordp:0xee44 size:0x005e C-string:'WEE44'
//           WEEA4  codep:0x224c wordp:0xeea4 size:0x001a C-string:'WEEA4'
//         LO-MASS  codep:0xede2 wordp:0xeeca size:0x0010 C-string:'LO_dash_MASS'
//         HI-MASS  codep:0xede2 wordp:0xeee6 size:0x0010 C-string:'HI_dash_MASS'
//           WEEF8  codep:0x224c wordp:0xeef8 size:0x0014 C-string:'WEEF8'
//           WEF0E  codep:0x224c wordp:0xef0e size:0x002e C-string:'WEF0E'
//           WEF3E  codep:0x224c wordp:0xef3e size:0x001c C-string:'WEF3E'
//           WEF5C  codep:0x224c wordp:0xef5c size:0x002c C-string:'WEF5C'
//           WEF8A  codep:0x224c wordp:0xef8a size:0x0054 C-string:'WEF8A'
//           WEFE0  codep:0x224c wordp:0xefe0 size:0x0090 C-string:'WEFE0'
//           WF072  codep:0x224c wordp:0xf072 size:0x000e C-string:'WF072'
//           WF082  codep:0x224c wordp:0xf082 size:0x005e C-string:'WF082'
//           WF0E2  codep:0x224c wordp:0xf0e2 size:0x0030 C-string:'WF0E2'
//           WF114  codep:0x224c wordp:0xf114 size:0x0020 C-string:'WF114'
//           WF136  codep:0x224c wordp:0xf136 size:0x0008 C-string:'WF136'
//           WF140  codep:0x224c wordp:0xf140 size:0x000a C-string:'WF140'
//           WF14C  codep:0x224c wordp:0xf14c size:0x000e C-string:'WF14C'
//        SUBHYDRO  codep:0x1d29 wordp:0xf167 size:0x0005 C-string:'SUBHYDRO'
//        TEMPHYDR  codep:0x1d29 wordp:0xf179 size:0x0008 C-string:'TEMPHYDR'
//        INFHYDRO  codep:0x1d29 wordp:0xf18e size:0x0007 C-string:'INFHYDRO'
//         SUBATMO  codep:0x1d29 wordp:0xf1a1 size:0x0005 C-string:'SUBATMO'
//        TEMPATMO  codep:0x1d29 wordp:0xf1b3 size:0x0009 C-string:'TEMPATMO'
//         INFATMO  codep:0x1d29 wordp:0xf1c8 size:0x0007 C-string:'INFATMO'
//           WF1D1  codep:0x224c wordp:0xf1d1 size:0x000e C-string:'WF1D1'
//           WF1E1  codep:0x224c wordp:0xf1e1 size:0x0038 C-string:'WF1E1'
//           WF21B  codep:0x224c wordp:0xf21b size:0x002a C-string:'WF21B'
//           WF247  codep:0x224c wordp:0xf247 size:0x003a C-string:'WF247'
//           WF283  codep:0x224c wordp:0xf283 size:0x001c C-string:'WF283'
//           WF2A1  codep:0x224c wordp:0xf2a1 size:0x003a C-string:'WF2A1'
//           WF2DD  codep:0x224c wordp:0xf2dd size:0x0018 C-string:'WF2DD'
//           WF2F7  codep:0x224c wordp:0xf2f7 size:0x0030 C-string:'WF2F7'
//           WF329  codep:0x224c wordp:0xf329 size:0x000c C-string:'WF329'
//            RUGS  codep:0x1d29 wordp:0xf33e size:0x0020 C-string:'RUGS'
//           WF360  codep:0x224c wordp:0xf360 size:0x0012 C-string:'WF360'
//           WF374  codep:0x224c wordp:0xf374 size:0x0014 C-string:'WF374'
//           WF38A  codep:0x224c wordp:0xf38a size:0x000e C-string:'WF38A'
//           WF39A  codep:0x224c wordp:0xf39a size:0x0010 C-string:'WF39A'
//          CLIST1  codep:0x1d29 wordp:0xf3b5 size:0x0014 C-string:'CLIST1'
//          CLIST2  codep:0x1d29 wordp:0xf3d4 size:0x0014 C-string:'CLIST2'
//          CLIST3  codep:0x1d29 wordp:0xf3f3 size:0x0014 C-string:'CLIST3'
//           WF409  codep:0x224c wordp:0xf409 size:0x0014 C-string:'WF409'
//          (SAND)  codep:0x1d29 wordp:0xf428 size:0x0010 C-string:'_ro_SAND_rc_'
//           WF43A  codep:0x224c wordp:0xf43a size:0x0052 C-string:'WF43A'
//           WF48E  codep:0x224c wordp:0xf48e size:0x000c C-string:'WF48E'
//           WF49C  codep:0x224c wordp:0xf49c size:0x0016 C-string:'WF49C'
//           WF4B4  codep:0x224c wordp:0xf4b4 size:0x0012 C-string:'WF4B4'
//        (TERRAIN  codep:0x4b3b wordp:0xf4d3 size:0x0018 C-string:'_ro_TERRAIN'
//           WF4ED  codep:0x224c wordp:0xf4ed size:0x0008 C-string:'WF4ED'
//           WF4F7  codep:0x224c wordp:0xf4f7 size:0x0008 C-string:'WF4F7'
//           WF501  codep:0x224c wordp:0xf501 size:0x001a C-string:'WF501'
//        PLAN-RUL  codep:0x224c wordp:0xf528 size:0x0000 C-string:'PLAN_dash_RUL'

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


const unsigned short int cc_WED66 = 0xed66; // WED66
const unsigned short int cc_WED6A = 0xed6a; // WED6A
const unsigned short int cc_WED6E = 0xed6e; // WED6E


// 0xed62: db 0x80 0x00 '  '

// ================================================
// 0xed64: WORD 'WED66' codep=0x2214 wordp=0xed66
// ================================================
// 0xed66: dw 0x0020

// ================================================
// 0xed68: WORD 'WED6A' codep=0x2214 wordp=0xed6a
// ================================================
// orphan
// 0xed6a: dw 0x0043

// ================================================
// 0xed6c: WORD 'WED6E' codep=0x2214 wordp=0xed6e
// ================================================
// orphan
// 0xed6e: dw 0x0044

// ================================================
// 0xed70: WORD 'WED72' codep=0x7394 wordp=0xed72
// ================================================
LoadDataType WED72 = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed78: WORD 'WED7A' codep=0x7394 wordp=0xed7a
// ================================================
LoadDataType WED7A = {PLANETIDX, 0x0d, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed80: WORD 'WED82' codep=0x7394 wordp=0xed82
// ================================================
LoadDataType WED82 = {PLANETIDX, 0x0e, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed88: WORD 'WED8A' codep=0x7394 wordp=0xed8a
// ================================================
LoadDataType WED8A = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed90: WORD 'WED92' codep=0x7394 wordp=0xed92
// ================================================
LoadDataType WED92 = {PLANETIDX, 0x00, 0x01, 0x17, 0x6c49};

// ================================================
// 0xed98: WORD 'WED9A' codep=0x7394 wordp=0xed9a
// ================================================
LoadDataType WED9A = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xeda0: WORD 'WEDA2' codep=0x7394 wordp=0xeda2
// ================================================
LoadDataType WEDA2 = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xeda8: WORD 'WEDAA' codep=0x7394 wordp=0xedaa
// ================================================
LoadDataType WEDAA = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedb0: WORD 'WEDB2' codep=0x7394 wordp=0xedb2
// ================================================
LoadDataType WEDB2 = {PLANETIDX, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedb8: WORD 'WEDBA' codep=0x7394 wordp=0xedba
// ================================================
LoadDataType WEDBA = {PLANETIDX, 0x0f, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedc0: WORD 'WEDC2' codep=0x7394 wordp=0xedc2
// ================================================
LoadDataType WEDC2 = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedc8: WORD 'WEDCA' codep=0x7394 wordp=0xedca
// ================================================
LoadDataType WEDCA = {PLANETIDX, 0x11, 0x02, 0x17, 0x6c49};

// ================================================
// 0xedd0: WORD 'WEDD2' codep=0x7394 wordp=0xedd2
// ================================================
LoadDataType WEDD2 = {PLANETIDX, 0x13, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedd8: WORD 'WEDDA' codep=0x224c wordp=0xedda
// ================================================
// orphan

void WEDDA() // WEDDA
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
// 0xedef: WORD 'WEDF1' codep=0x224c wordp=0xedf1 params=0 returns=1
// ================================================

void WEDF1() // WEDF1
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xedfb: WORD 'WEDFD' codep=0x224c wordp=0xedfd params=0 returns=1
// ================================================

void WEDFD() // WEDFD
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xee07: WORD 'WEE09' codep=0x7420 wordp=0xee09
// ================================================
IFieldType WEE09 = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xee0c: WORD 'WEE0E' codep=0x224c wordp=0xee0e
// ================================================

void WEE0E() // WEE0E
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(cc_WED66)); // WED66
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
  Push(0);
  while(1)
  {
    GetINST_dash_C(); // @INST-C
    Push(Pop()==Read16(cc_WED66)?1:0); //  WED66 =
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
// 0xee42: WORD 'WEE44' codep=0x224c wordp=0xee44 params=0 returns=1
// ================================================

void WEE44() // WEE44
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
    WEE0E(); // WEE0E
    Push(0);
    ICLOSE(); // ICLOSE
    Push(Read16(0x65e1+WEE09.offset)&0xFF); // WEE09<IFIELD> C@

    i = 1;
    imax = 9;
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
// 0xeea2: WORD 'WEEA4' codep=0x224c wordp=0xeea4 params=0 returns=0
// ================================================

void WEEA4() // WEEA4
{
  WEE44(); // WEE44
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
// 0xeebe: WORD 'LO-MASS' codep=0xede2 wordp=0xeeca
// ================================================
// 0xeeca: db 0x00 0x00 0x01 0x00 0x32 0x00 0x5a 0x00 0x6e 0x00 0xe8 0x03 0x65 0x00 0x64 0x00 '    2 Z n   e d '

// ================================================
// 0xeeda: WORD 'HI-MASS' codep=0xede2 wordp=0xeee6
// ================================================
// 0xeee6: db 0x00 0x00 0x32 0x00 0x5a 0x00 0x6e 0x00 0xe8 0x03 0x10 0x27 0x66 0x00 0x65 0x00 '  2 Z n    'f e '

// ================================================
// 0xeef6: WORD 'WEEF8' codep=0x224c wordp=0xeef8
// ================================================

void WEEF8() // WEEF8
{
  LoadData(WED92); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  LO_dash_MASS(); // LO-MASS
  SWAP(); // SWAP
  HI_dash_MASS(); // HI-MASS
  RRND(); // RRND
  LoadData(WED9A); // from 'PLANET'
  Store_2(); // !_2
}


// ================================================
// 0xef0c: WORD 'WEF0E' codep=0x224c wordp=0xef0e params=0 returns=1
// ================================================

void WEF0E() // WEF0E
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
// 0xef3c: WORD 'WEF3E' codep=0x224c wordp=0xef3e params=2 returns=1
// ================================================

void WEF3E() // WEF3E
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
// 0xef5a: WORD 'WEF5C' codep=0x224c wordp=0xef5c
// ================================================

void WEF5C() // WEF5C
{
  Push(1);
  WEF0E(); // WEF0E
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + 5); //  5 +
  Push(0x0017);
  MIN(); // MIN
  _2DUP(); // 2DUP
  WEF3E(); // WEF3E
  LoadData(WED72); // from 'PLANET'
  C_ex__2(); // C!_2
  _2DUP(); // 2DUP
  WEF3E(); // WEF3E
  LoadData(WED7A); // from 'PLANET'
  C_ex__2(); // C!_2
  WEF3E(); // WEF3E
  LoadData(WED82); // from 'PLANET'
  C_ex__2(); // C!_2
}


// ================================================
// 0xef88: WORD 'WEF8A' codep=0x224c wordp=0xef8a
// ================================================

void WEF8A() // WEF8A
{
  LoadData(WED9A); // from 'PLANET'
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
    WEDFD(); // WEDFD
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
    WEDFD(); // WEDFD
    Push(0x0032);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(Pop() - 1); //  1-
    }
  }
  LoadData(WEDA2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(1);
    MAX(); // MAX
  }
  LoadData(WEDD2); // from 'PLANET'
  C_ex__2(); // C!_2
}


// ================================================
// 0xefde: WORD 'WEFE0' codep=0x224c wordp=0xefe0 params=1 returns=0
// ================================================

void WEFE0() // WEFE0
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
// 0xf070: WORD 'WF072' codep=0x224c wordp=0xf072 params=0 returns=0
// ================================================

void WF072() // WF072
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  GetINST_dash_S(); // @INST-S
  WEFE0(); // WEFE0
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf080: WORD 'WF082' codep=0x224c wordp=0xf082 params=1 returns=1
// ================================================

void WF082() // WF082
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
// 0xf0e0: WORD 'WF0E2' codep=0x224c wordp=0xf0e2
// ================================================

void WF0E2() // WF0E2
{
  WEE44(); // WEE44
  Push(Read16(regsp)); // DUP
  WF072(); // WF072
  _dash_(); // -
  WF082(); // WF082
  SWAP(); // SWAP
  LoadData(WEDD2); // from 'PLANET'
  Push((Read16(Pop())&0xFF)==0?1:0); //  C@ 0=
  if (Pop() != 0)
  {
    Push(4);
  } else
  {
    Push(2);
  }
  _dash_(); // -
  WF072(); // WF072
  _dash_(); // -
  WF082(); // WF082
  LoadData(WEDC2); // from 'PLANET'
  C_ex__2(); // C!_2
  LoadData(WEDBA); // from 'PLANET'
  C_ex__2(); // C!_2
}


// ================================================
// 0xf112: WORD 'WF114' codep=0x224c wordp=0xf114
// ================================================

void WF114() // WF114
{
  LoadData(WEDD2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(4);
  MIN(); // MIN
  WEDFD(); // WEDFD
  Push(0x0032);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Pop() - 1); //  1-
  }
  Push(0);
  MAX(); // MAX
  LoadData(WEDCA); // from 'PLANET'
  C_ex__2(); // C!_2
}


// ================================================
// 0xf134: WORD 'WF136' codep=0x224c wordp=0xf136
// ================================================

void WF136() // WF136
{
  WEDF1(); // WEDF1
  LoadData(WED8A); // from 'PLANET'
  C_ex__2(); // C!_2
}


// ================================================
// 0xf13e: WORD 'WF140' codep=0x224c wordp=0xf140
// ================================================

void WF140() // WF140
{
  WEF5C(); // WEF5C
  WEF8A(); // WEF8A
  WF114(); // WF114
  WF0E2(); // WF0E2
}


// ================================================
// 0xf14a: WORD 'WF14C' codep=0x224c wordp=0xf14c
// ================================================

void WF14C() // WF14C
{
  Push(0);
  LoadData(WEDA2); // from 'PLANET'
  C_ex__2(); // C!_2
  WEEF8(); // WEEF8
  WF136(); // WF136
  WF140(); // WF140
}


// ================================================
// 0xf15a: WORD 'SUBHYDRO' codep=0x1d29 wordp=0xf167
// ================================================
// 0xf167: db 0x01 0x02 0x03 0x04 0x00 '     '

// ================================================
// 0xf16c: WORD 'TEMPHYDR' codep=0x1d29 wordp=0xf179
// ================================================
// 0xf179: db 0x05 0x06 0x07 0x08 0x00 0x05 0x05 0x05 '        '

// ================================================
// 0xf181: WORD 'INFHYDRO' codep=0x1d29 wordp=0xf18e
// ================================================
// 0xf18e: db 0x09 0x0a 0x0b 0x0c 0x07 0x0d 0x00 '       '

// ================================================
// 0xf195: WORD 'SUBATMO' codep=0x1d29 wordp=0xf1a1
// ================================================
// 0xf1a1: db 0x0e 0x0c 0x07 0x06 0x00 '     '

// ================================================
// 0xf1a6: WORD 'TEMPATMO' codep=0x1d29 wordp=0xf1b3
// ================================================
// 0xf1b3: db 0x0f 0x10 0x11 0x0f 0x12 0x13 0x14 0x00 0x0f '         '

// ================================================
// 0xf1bc: WORD 'INFATMO' codep=0x1d29 wordp=0xf1c8
// ================================================
// 0xf1c8: db 0x0e 0x15 0x16 0x0c 0x07 0x0d 0x00 '       '

// ================================================
// 0xf1cf: WORD 'WF1D1' codep=0x224c wordp=0xf1d1
// ================================================

void WF1D1() // WF1D1
{
  LoadData(WEDC2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEDBA); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
}


// ================================================
// 0xf1df: WORD 'WF1E1' codep=0x224c wordp=0xf1e1
// ================================================

void WF1E1() // WF1E1
{
  WF1D1(); // WF1D1
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
// 0xf219: WORD 'WF21B' codep=0x224c wordp=0xf21b
// ================================================

void WF21B() // WF21B
{
  unsigned short int a;
  LoadData(WEDAA); // from 'PLANET'
  Push(!((Read16(Pop())&0xFF)==2?1:0)); //  C@ 2 = NOT
  a = Pop(); // >R
  while(1)
  {
    WF1E1(); // WF1E1
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
// 0xf245: WORD 'WF247' codep=0x224c wordp=0xf247
// ================================================

void WF247() // WF247
{
  WF1D1(); // WF1D1
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
// 0xf281: WORD 'WF283' codep=0x224c wordp=0xf283
// ================================================

void WF283() // WF283
{
  LoadData(WEDD2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    do
    {
      WF247(); // WF247
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
// 0xf29f: WORD 'WF2A1' codep=0x224c wordp=0xf2a1
// ================================================

void WF2A1() // WF2A1
{
  LoadData(WEDB2); // from 'PLANET'
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
  LoadData(WEDA2); // from 'PLANET'
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
  WF21B(); // WF21B
  WF283(); // WF283
}


// ================================================
// 0xf2db: WORD 'WF2DD' codep=0x224c wordp=0xf2dd
// ================================================
// orphan

void WF2DD() // WF2DD
{
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData(WEDBA); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  LoadData(WEDC2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + 1); //  1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2f5: WORD 'WF2F7' codep=0x224c wordp=0xf2f7
// ================================================
// orphan

void WF2F7() // WF2F7
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
  WF2DD(); // WF2DD
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
// 0xf327: WORD 'WF329' codep=0x224c wordp=0xf329
// ================================================

void WF329() // WF329
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WEDA2); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf335: WORD 'RUGS' codep=0x1d29 wordp=0xf33e
// ================================================
// 0xf33e: db 0x02 0x00 0x0a 0x4d 0x02 0x00 0x1f 0x4d 0x02 0x00 0x35 0x4d 0x02 0x00 0x48 0x4d 0x02 0x00 0x5f 0x4d 0x02 0x00 0x75 0x4d 0x02 0x00 0x88 0x4d 0x02 0x00 0x99 0x4d '   M   M  5M  HM  _M  uM   M   M'

// ================================================
// 0xf35e: WORD 'WF360' codep=0x224c wordp=0xf360 params=0 returns=2
// ================================================

void WF360() // WF360
{
  Push(0);
  Push(8);
  RRND(); // RRND
  Push((Pop() * 2) * 2 + pp_RUGS); //  2* 2* RUGS +
  _2_at_(); // 2@
}


// ================================================
// 0xf372: WORD 'WF374' codep=0x224c wordp=0xf374
// ================================================

void WF374() // WF374
{
  WF329(); // WF329
  if (Pop() != 0)
  {
    WF360(); // WF360
  } else
  {
    Push2Words("0.");
  }
  Push(pp_P_dash_CARP); // P-CARP
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf388: WORD 'WF38A' codep=0x224c wordp=0xf38a params=0 returns=0
// ================================================

void WF38A() // WF38A
{
  Push2Words("0.");
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("0.");
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf398: WORD 'WF39A' codep=0x224c wordp=0xf39a params=1 returns=2
// ================================================

void WF39A() // WF39A
{
  Push(0);
  Push(5);
  RRND(); // RRND
  Push((Pop() * 2) * 2); //  2* 2*
  Push(Pop() + Pop()); // +
  _2_at_(); // 2@
}


// ================================================
// 0xf3aa: WORD 'CLIST1' codep=0x1d29 wordp=0xf3b5
// ================================================
// 0xf3b5: db 0x02 0x00 0xcf 0x49 0x02 0x00 0xae 0x4b 0x02 0x00 0xdb 0x4b 0x02 0x00 0x15 0x4c 0x02 0x00 0x3e 0x4c '   I   K   K   L  >L'

// ================================================
// 0xf3c9: WORD 'CLIST2' codep=0x1d29 wordp=0xf3d4
// ================================================
// 0xf3d4: db 0x02 0x00 0xf2 0x49 0x02 0x00 0x93 0x4c 0x02 0x00 0x8a 0x49 0x02 0x00 0x65 0x48 0x02 0x00 0x6b 0x4c '   I   L   I  eH  kL'

// ================================================
// 0xf3e8: WORD 'CLIST3' codep=0x1d29 wordp=0xf3f3
// ================================================
// 0xf3f3: db 0x02 0x00 0xe1 0x49 0x02 0x00 0x00 0x4c 0x02 0x00 0x2b 0x4c 0x02 0x00 0x57 0x4c 0x02 0x00 0xf2 0x49 '   I   L  +L  WL   I'

// ================================================
// 0xf407: WORD 'WF409' codep=0x224c wordp=0xf409 params=0 returns=0
// ================================================

void WF409() // WF409
{
  Push(0x4a89); Push(0x0002); // 'CRACKED PLAINS AND HILLS OF'
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push(pp_CLIST1); // CLIST1
  WF39A(); // WF39A
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf41d: WORD '(SAND)' codep=0x1d29 wordp=0xf428
// ================================================
// 0xf428: db 0x02 0x00 0x04 0x4b 0x02 0x00 0x1a 0x4b 0x02 0x00 0x49 0x4b 0x02 0x00 0x31 0x4b '   K   K  IK  1K'

// ================================================
// 0xf438: WORD 'WF43A' codep=0x224c wordp=0xf43a params=0 returns=0
// ================================================

void WF43A() // WF43A
{
  Push(Read16(pp_ATMO)); // ATMO @
  if (Pop() != 0)
  {
    Push(pp_CLIST3); // CLIST3
    WF39A(); // WF39A
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
      Push(0x4a70); Push(0x0002); // 'ROCK AND DIRT'
    }
  } else
  {
    Push(0x4a3e); Push(0x0002); // 'CRATERED ROCK AND DUST'
    Push2Words("0.");
    Push(pp_P_dash_COLOR); // P-COLOR
    _1_dot_5_ex__2(); // 1.5!_2
  }
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf48c: WORD 'WF48E' codep=0x224c wordp=0xf48e params=0 returns=0
// ================================================

void WF48E() // WF48E
{
  Push(pp_CLIST2); // CLIST2
  WF39A(); // WF39A
  Push(pp_O_dash_COLOR); // O-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
  WF43A(); // WF43A
}


// ================================================
// 0xf49a: WORD 'WF49C' codep=0x224c wordp=0xf49c params=0 returns=0
// ================================================

void WF49C() // WF49C
{
  Push(0x4ab0); Push(0x0002); // 'VOLCANIC ROCK, STEAMING VENTS,'
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0x4ada); Push(0x0002); // 'BOILING POOLS AND FLOWING LAVA'
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf4b2: WORD 'WF4B4' codep=0x224c wordp=0xf4b4 params=0 returns=0
// ================================================

void WF4B4() // WF4B4
{
  Push(0x4b77); Push(0x0002); // 'SMOOTH AND FEATURELESS'
  Push(pp_P_dash_PHRAS); // P-PHRAS
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp_P_dash_COLOR); // P-COLOR
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf4c6: WORD '(TERRAIN' codep=0x4b3b wordp=0xf4d3
// ================================================

void _ro_TERRAIN() // (TERRAIN
{
  switch(Pop()) // (TERRAIN
  {
  case 1:
    WF38A(); // WF38A
    break;
  case 2:
    WF48E(); // WF48E
    break;
  case 3:
    WF409(); // WF409
    break;
  case 4:
    WF49C(); // WF49C
    break;
  case 5:
    WF43A(); // WF43A
    break;
  default:
    WF4B4(); // WF4B4
    break;

  }
}

// ================================================
// 0xf4eb: WORD 'WF4ED' codep=0x224c wordp=0xf4ed
// ================================================

void WF4ED() // WF4ED
{
  LoadData(WEDAA); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _ro_TERRAIN(); // (TERRAIN case
}


// ================================================
// 0xf4f5: WORD 'WF4F7' codep=0x224c wordp=0xf4f7 params=0 returns=0
// ================================================

void WF4F7() // WF4F7
{
  Push(0);
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf4ff: WORD 'WF501' codep=0x224c wordp=0xf501
// ================================================

void WF501() // WF501
{
  Push(pp__ro_ELIST_rc_); // (ELIST)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf4f7); // 'WF4F7'
  ALL(); // ALL
  IFIRST(); // IFIRST
  Push(1);
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  Store_2(); // !_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf51b: WORD 'PLAN-RUL' codep=0x224c wordp=0xf528
// ================================================
// entry

void PLAN_dash_RUL() // PLAN-RUL
{
  WF501(); // WF501
  WEEA4(); // WEEA4
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(0x0011);
  _gt_(); // >
  if (Pop() != 0)
  {
    WF140(); // WF140
  } else
  {
    WF14C(); // WF14C
  }
  WF2A1(); // WF2A1
  WF4ED(); // WF4ED
  WF374(); // WF374
  ICLOSE(); // ICLOSE
}

// 0xf54e: db 0x53 0x45 0x54 0x54 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SETTER____________ '

