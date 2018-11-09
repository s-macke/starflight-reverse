// ====== OVERLAY 'TVCON-OV' ======
// store offset = 0xed50
// overlay size   = 0x0810

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WED66  codep:0x224c wordp:0xed66 size:0x000c C-string:'WED66'
//           WED74  codep:0x224c wordp:0xed74 size:0x0006 C-string:'WED74'
//           WED7C  codep:0x224c wordp:0xed7c size:0x000a C-string:'WED7C'
//           WED88  codep:0x224c wordp:0xed88 size:0x0008 C-string:'WED88'
//           WED92  codep:0x224c wordp:0xed92 size:0x000a C-string:'WED92'
//           WED9E  codep:0x224c wordp:0xed9e size:0x0006 C-string:'WED9E'
//           WEDA6  codep:0x224c wordp:0xeda6 size:0x0006 C-string:'WEDA6'
//           WEDAE  codep:0x224c wordp:0xedae size:0x000a C-string:'WEDAE'
//           WEDBA  codep:0x224c wordp:0xedba size:0x0008 C-string:'WEDBA'
//           WEDC4  codep:0x7420 wordp:0xedc4 size:0x0003 C-string:'WEDC4'
//           WEDC9  codep:0x7394 wordp:0xedc9 size:0x0006 C-string:'WEDC9'
//           WEDD1  codep:0x7420 wordp:0xedd1 size:0x0003 C-string:'WEDD1'
//           WEDD6  codep:0x7420 wordp:0xedd6 size:0x0003 C-string:'WEDD6'
//           WEDDB  codep:0x7420 wordp:0xeddb size:0x0003 C-string:'WEDDB'
//           WEDE0  codep:0x7420 wordp:0xede0 size:0x0003 C-string:'WEDE0'
//          ?ETIME  codep:0x224c wordp:0xedee size:0x002a C-string:'IsETIME'
//           WEE1A  codep:0x224c wordp:0xee1a size:0x003c C-string:'WEE1A'
//           WEE58  codep:0x224c wordp:0xee58 size:0x0040 C-string:'WEE58'
//           WEE9A  codep:0x224c wordp:0xee9a size:0x002a C-string:'WEE9A'
//          %STORM  codep:0x1d29 wordp:0xeecf size:0x0005 C-string:'_pe_STORM'
//         ?.STORM  codep:0x224c wordp:0xeee0 size:0x001c C-string:'Is_dot_STORM'
//           WEEFE  codep:0x224c wordp:0xeefe size:0x0028 C-string:'WEEFE'
//        DO-STORM  codep:0x224c wordp:0xef33 size:0x006e C-string:'DO_dash_STORM'
//           WEFA3  codep:0x224c wordp:0xefa3 size:0x0004 C-string:'WEFA3'
//           WEFA9  codep:0x224c wordp:0xefa9 size:0x0006 C-string:'WEFA9'
//           WEFB1  codep:0x224c wordp:0xefb1 size:0x0008 C-string:'WEFB1'
//           WEFBB  codep:0x224c wordp:0xefbb size:0x0008 C-string:'WEFBB'
//           WEFC5  codep:0x224c wordp:0xefc5 size:0x000a C-string:'WEFC5'
//           WEFD1  codep:0x224c wordp:0xefd1 size:0x0030 C-string:'WEFD1'
//           WF003  codep:0x224c wordp:0xf003 size:0x0008 C-string:'WF003'
//           WF00D  codep:0x224c wordp:0xf00d size:0x0046 C-string:'WF00D'
//           WF055  codep:0x224c wordp:0xf055 size:0x0010 C-string:'WF055'
//           WF067  codep:0x224c wordp:0xf067 size:0x0006 C-string:'WF067'
//           WF06F  codep:0x224c wordp:0xf06f size:0x0014 C-string:'WF06F'
//           WF085  codep:0x224c wordp:0xf085 size:0x0028 C-string:'WF085'
//            FADE  codep:0x224c wordp:0xf0b6 size:0x002a C-string:'FADE'
//           WF0E2  codep:0x224c wordp:0xf0e2 size:0x002a C-string:'WF0E2'
//       .STARDATE  codep:0x224c wordp:0xf11a size:0x0090 C-string:'DrawSTARDATE'
//           WF1AC  codep:0x224c wordp:0xf1ac size:0x0016 C-string:'WF1AC'
//           WF1C4  codep:0x224c wordp:0xf1c4 size:0x0018 C-string:'WF1C4'
//           WF1DE  codep:0x224c wordp:0xf1de size:0x0008 C-string:'WF1DE'
//           WF1E8  codep:0x224c wordp:0xf1e8 size:0x00e4 C-string:'WF1E8'
//           WF2CE  codep:0x224c wordp:0xf2ce size:0x0026 C-string:'WF2CE'
//           WF2F6  codep:0x224c wordp:0xf2f6 size:0x0034 C-string:'WF2F6'
//           WF32C  codep:0x224c wordp:0xf32c size:0x002c C-string:'WF32C'
//         .ENERGY  codep:0x224c wordp:0xf364 size:0x00a5 C-string:'DrawENERGY'
//          .CARGO  codep:0x224c wordp:0xf414 size:0x003b C-string:'DrawCARGO'
//           WF451  codep:0x224c wordp:0xf451 size:0x0026 C-string:'WF451'
//           WF479  codep:0x224c wordp:0xf479 size:0x0022 C-string:'WF479'
//           WF49D  codep:0x224c wordp:0xf49d size:0x0022 C-string:'WF49D'
//          .WHERE  codep:0x224c wordp:0xf4ca size:0x0044 C-string:'DrawWHERE'
//       .DISTANCE  codep:0x224c wordp:0xf51c size:0x0006 C-string:'DrawDISTANCE'
//          .STATS  codep:0x224c wordp:0xf52d size:0x0000 C-string:'DrawSTATS'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp__i_INJURE; // 'INJURE
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp__pe_EFF; // %EFF
extern const unsigned short int pp_STORM; // STORM
extern const unsigned short int pp__i_STORM; // 'STORM
extern const unsigned short int pp_E_slash_M; // E/M
extern const unsigned short int pp__n_STORM; // #STORM
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_HAZE; // HAZE
extern const unsigned short int pp_STAGES; // STAGES
extern const unsigned short int pp_ETIME; // ETIME
extern const unsigned short int pp_TVEHICL; // TVEHICL
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern const unsigned short int pp__n_ETIME; // #ETIME
extern Color BLACK; // BLACK
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void ALLOT(); // ALLOT
void HERE(); // HERE
void DrawR(); // .R
void MS(); // MS
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _3_star_(); // 3*
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void ALL(); // ALL
void SAVE_dash_OV(); // SAVE-OV
void StoreCOLOR(); // !COLOR
void POS_dot_(); // POS.
void _gt_TVCT(); // >TVCT
void POLY_dash_ER(); // POLY-ER
void DrawVIT(); // .VIT
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _st__ex__gt_(); // <!>


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp__pe_STORM = 0xeecf; // %STORM size: 5
// {0x00, 0x14, 0x28, 0x3c, 0x55}




// 0xed62: db 0x81 0x00 '  '

// ================================================
// 0xed64: WORD 'WED66' codep=0x224c wordp=0xed66 params=2 returns=2
// ================================================
// orphan

void WED66() // WED66
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xed72: WORD 'WED74' codep=0x224c wordp=0xed74
// ================================================
// orphan

void WED74() // WED74
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xed7a: WORD 'WED7C' codep=0x224c wordp=0xed7c params=2 returns=0
// ================================================
// orphan

void WED7C() // WED7C
{
  HERE(); // HERE
  Push(3);
  ALLOT(); // ALLOT
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xed86: WORD 'WED88' codep=0x224c wordp=0xed88 params=0 returns=1
// ================================================
// orphan

void WED88() // WED88
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xed90: WORD 'WED92' codep=0x224c wordp=0xed92 params=0 returns=1
// ================================================
// orphan

void WED92() // WED92
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xed9c: WORD 'WED9E' codep=0x224c wordp=0xed9e params=1 returns=1
// ================================================

void WED9E() // WED9E
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xeda4: WORD 'WEDA6' codep=0x224c wordp=0xeda6 params=0 returns=0
// ================================================

void WEDA6() // WEDA6
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xedac: WORD 'WEDAE' codep=0x224c wordp=0xedae params=0 returns=2
// ================================================

void WEDAE() // WEDAE
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xedb8: WORD 'WEDBA' codep=0x224c wordp=0xedba params=0 returns=2
// ================================================

void WEDBA() // WEDBA
{
  WEDA6(); // WEDA6
  WEDAE(); // WEDAE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedc2: WORD 'WEDC4' codep=0x7420 wordp=0xedc4
// ================================================
IFieldType WEDC4 = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xedc7: WORD 'WEDC9' codep=0x7394 wordp=0xedc9
// ================================================
LoadDataType WEDC9 = {PLANETIDX, 0x11, 0x01, 0x17, 0x6c49};

// ================================================
// 0xedcf: WORD 'WEDD1' codep=0x7420 wordp=0xedd1
// ================================================
IFieldType WEDD1 = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xedd4: WORD 'WEDD6' codep=0x7420 wordp=0xedd6
// ================================================
IFieldType WEDD6 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xedd9: WORD 'WEDDB' codep=0x7420 wordp=0xeddb
// ================================================
IFieldType WEDDB = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xedde: WORD 'WEDE0' codep=0x7420 wordp=0xede0
// ================================================
IFieldType WEDE0 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xede3: WORD '?ETIME' codep=0x224c wordp=0xedee params=0 returns=0
// ================================================

void IsETIME() // ?ETIME
{
  Push(Read16(pp_ETIME)); // ETIME @
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  _2_at_(); // 2@
  Push(Read16(pp_ETIME)); // ETIME @
  Push(0x03e8);
  M_star_(); // M*
  D_plus_(); // D+
  D_gt_(); // D>
  if (Pop() == 0) return;
  Push(0xceb6); // 'RECAL'
  MODULE(); // MODULE
}


// ================================================
// 0xee18: WORD 'WEE1A' codep=0x224c wordp=0xee1a params=2 returns=2
// ================================================

void WEE1A() // WEE1A
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(0);
    Push(0);
    return;
  }
  _2OVER(); // 2OVER
  ROT(); // ROT
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    ABS(); // ABS
    _slash_(); // /
  }
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    ABS(); // ABS
    _slash_(); // /
  }
  Push(a); // R>
}


// ================================================
// 0xee56: WORD 'WEE58' codep=0x224c wordp=0xee58 params=0 returns=0
// ================================================

void WEE58() // WEE58
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  Push(7);
  Push(0x000a);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(7);
    Push(Read16(pp_STARDAT)); // STARDAT @
    Push(0x001e);
    MOD(); // MOD
    Push(0x000a);
    _slash_(); // /
    Push(Pop() + Pop()); // +
    Push((Pop()==Pop())?1:0); // =
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      Push(0xc014); // 'BLDLI'
      MODULE(); // MODULE
    }
  } else
  {
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee98: WORD 'WEE9A' codep=0x224c wordp=0xee9a params=0 returns=0
// ================================================

void WEE9A() // WEE9A
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(6);
  Push(0x000b);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Push(1);
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) return;
  Push(Read16(pp__i_INJURE)); // 'INJURE @
  MODULE(); // MODULE
}


// ================================================
// 0xeec4: WORD '%STORM' codep=0x1d29 wordp=0xeecf
// ================================================
// 0xeecf: db 0x00 0x14 0x28 0x3c 0x55 '  (<U'

// ================================================
// 0xeed4: WORD '?.STORM' codep=0x224c wordp=0xeee0 params=0 returns=0
// ================================================

void Is_dot_STORM() // ?.STORM
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(3);
  _gt_(); // >
  Push(Read16(pp_STORM)); // STORM @
  WED9E(); // WED9E
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0xcdc0); // '.STOR'
  MODULE(); // MODULE
}


// ================================================
// 0xeefc: WORD 'WEEFE' codep=0x224c wordp=0xeefe
// ================================================

void WEEFE() // WEEFE
{
  Push(1);
  LoadData(WEDC9); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(5);
  SWAP(); // SWAP
  _dash_(); // -
  _3_star_(); // 3*
  RRND(); // RRND
  Push(0x000c);
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(pp_STORM); // STORM
  Store_2(); // !_2
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef26: WORD 'DO-STORM' codep=0x224c wordp=0xef33 params=0 returns=0
// ================================================
// entry

void DO_dash_STORM() // DO-STORM
{
  Push(Read16(pp_ATMO)); // ATMO @
  if (Pop() != 0)
  {
    Push(Read16(pp_STORM)); // STORM @
    if (Pop() != 0)
    {
      Push(-1);
      Push(pp_STORM); // STORM
      _plus__ex__2(); // +!_2
      Is_dot_STORM(); // ?.STORM
    } else
    {
      Push(pp__ro_PLANET); // (PLANET
      Get_gt_C_plus_S(); // @>C+S
      LoadData(WEDC9); // from 'PLANET'
      Push(Read16(Read16(Pop()) + pp__pe_STORM)&0xFF); //  @ %STORM + C@
      Push(1);
      Push(0x0064);
      RRND(); // RRND
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(Read16(pp__i_STORM)); // 'STORM @
        MODULE(); // MODULE
      } else
      {
        Push(1);
        Push(4);
        RRND(); // RRND
        Push(pp__n_STORM); // #STORM
        Store_2(); // !_2
        Push(0xcdc0); // '.STOR'
        MODULE(); // MODULE
        WEEFE(); // WEEFE
      }
      ICLOSE(); // ICLOSE
    }
    WEE9A(); // WEE9A
    return;
  }
  Push(pp__n_STORM); // #STORM
  _099(); // 099
  Push(pp_STORM); // STORM
  _099(); // 099
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xefa1: WORD 'WEFA3' codep=0x224c wordp=0xefa3 params=0 returns=1
// ================================================

void WEFA3() // WEFA3
{
  Push(pp_STAGES); // STAGES
}


// ================================================
// 0xefa7: WORD 'WEFA9' codep=0x224c wordp=0xefa9 params=0 returns=1
// ================================================

void WEFA9() // WEFA9
{
  Push(pp_STAGES + 2); // STAGES 2+
}


// ================================================
// 0xefaf: WORD 'WEFB1' codep=0x224c wordp=0xefb1 params=0 returns=1
// ================================================

void WEFB1() // WEFB1
{
  Push(pp_STAGES + 6); // STAGES 6 +
}


// ================================================
// 0xefb9: WORD 'WEFBB' codep=0x224c wordp=0xefbb params=0 returns=1
// ================================================

void WEFBB() // WEFBB
{
  Push(pp_STAGES + 8); // STAGES 8 +
}


// ================================================
// 0xefc3: WORD 'WEFC5' codep=0x224c wordp=0xefc5 params=0 returns=1
// ================================================
// orphan

void WEFC5() // WEFC5
{
  Push(pp_STAGES + 0x000a); // STAGES 0x000a +
}


// ================================================
// 0xefcf: WORD 'WEFD1' codep=0x224c wordp=0xefd1 params=3 returns=1
// ================================================

void WEFD1() // WEFD1
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(Read16(pp_STAR_dash_HR) * 0x0aaa); // STAR-HR @ 0x0aaa *
  Push(Read16(pp_STARDAT)); // STARDAT @
  D_st_(); // D<
  OVER(); // OVER
  Push(Read16(Pop())==0?1:0); //  @ 0=
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    OVER(); // OVER
    ON_2(); // ON_2
    SAVE_dash_OV(); // SAVE-OV
  }
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf001: WORD 'WF003' codep=0x224c wordp=0xf003 params=0 returns=0
// ================================================

void WF003() // WF003
{
  Push(0xc5da); // 'DO-CLOU'
  MODULE(); // MODULE
}


// ================================================
// 0xf00b: WORD 'WF00D' codep=0x224c wordp=0xf00d params=0 returns=0
// ================================================

void WF00D() // WF00D
{
  WEFA3(); // WEFA3
  Push2Words("0.");
  WEFD1(); // WEFD1
  if (Pop() != 0)
  {
    Push(1);
    WF003(); // WF003
  }
  WEFA9(); // WEFA9
  Push(0xbff4); Push(0x0000);
  WEFD1(); // WEFD1
  if (Pop() != 0)
  {
    Push(2);
    WF003(); // WF003
  }
  WEFB1(); // WEFB1
  Push(0x7fe8); Push(0x0001);
  WEFD1(); // WEFD1
  if (Pop() != 0)
  {
    Push(4);
    WF003(); // WF003
  }
  WEFBB(); // WEFBB
  Push(0xffe0); Push(0x0001);
  WEFD1(); // WEFD1
  if (Pop() == 0) return;
  Push(5);
  WF003(); // WF003
}


// ================================================
// 0xf053: WORD 'WF055' codep=0x224c wordp=0xf055 params=0 returns=1
// ================================================

void WF055() // WF055
{
  GetINST_dash_S(); // @INST-S
  Push((Pop()==0?1:0) & (Read16(0x65e1+WEDDB.offset) & 1)); //  0= WEDDB<IFIELD> @ 1 AND AND
}


// ================================================
// 0xf065: WORD 'WF067' codep=0x224c wordp=0xf067 params=1 returns=1
// ================================================

void WF067() // WF067
{
  WF055(); // WF055
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf06d: WORD 'WF06F' codep=0x224c wordp=0xf06f
// ================================================

void WF06F() // WF06F
{
  Push(0);
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf067); // 'WF067'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf083: WORD 'WF085' codep=0x224c wordp=0xf085 params=0 returns=0
// ================================================

void WF085() // WF085
{
  WF055(); // WF055
  if (Pop() == 0) return;
  Push(0x0010);
  Push(0x65e1+WEDDB.offset); // WEDDB<IFIELD>
  Store_2(); // !_2
  Push(0);
  Push(0x65e1+WEDE0.offset); // WEDE0<IFIELD>
  C_ex__2(); // C!_2
  Push(0xc18b); // '(OBI'
  MODULE(); // MODULE
  Push(0xc1b8); // '(ROL'
  MODULE(); // MODULE
  Push(0);
  Push(0x65e1+WEDDB.offset); // WEDDB<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf0ad: WORD 'FADE' codep=0x224c wordp=0xf0b6
// ================================================

void FADE() // FADE
{
  _gt_TVCT(); // >TVCT
  Push(6);
  Push(0xc5da); // 'DO-CLOU'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp_HAZE); // HAZE
  StoreD(); // D!
  Push(0x0fa0);
  MS(); // MS
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf085); // 'WF085'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  DrawVIT(); // .VIT
}


// ================================================
// 0xf0e0: WORD 'WF0E2' codep=0x224c wordp=0xf0e2
// ================================================

void WF0E2() // WF0E2
{
  WF06F(); // WF06F
  if (Pop() == 0) return;
  Push(Read16(pp_STAR_dash_HR) * 0x0aaa); // STAR-HR @ 0x0aaa *
  Push(Read16(pp_STARDAT)); // STARDAT @
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x3fdc); Push(0x0002);
  D_gt_(); // D>
  if (Pop() == 0) return;
  FADE(); // FADE
}


// ================================================
// 0xf10c: WORD '.STARDATE' codep=0x224c wordp=0xf11a
// ================================================
// entry

void DrawSTARDATE() // .STARDATE
{
  Push(Read16(pp_XORMODE)); // XORMODE @
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0074);
  Push(0x00b2);
  POS_dot_(); // POS.
  Push(0x000a);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(!Read16(pp_PAST)); // PAST @ NOT
  if (Pop() != 0)
  {
    Push(Read16(pp_STARDAT)); // STARDAT @
    Push(0x012c);
    _slash_MOD(); // /MOD
    Push(Pop() + 0x121f); //  0x121f +
    SWAP(); // SWAP
    Push(0x001e);
    _slash_MOD(); // /MOD
    Push(Pop() + 1); //  1+
    SWAP(); // SWAP
    Push(Pop() + 1); //  1+
    Push(Read16(regsp)); // DUP
    Push(0x000a);
    _st_(); // <
    if (Pop() != 0)
    {
      PRINT("0", 1); // (.")
    }
    Push(0);
    DrawR(); // .R
    PRINT("-", 1); // (.")
    Push(Read16(regsp)); // DUP
    Push(0x000a);
    _st_(); // <
    if (Pop() != 0)
    {
      PRINT("0", 1); // (.")
    }
    Push(0);
    DrawR(); // .R
    PRINT("-", 1); // (.")
    Push(0);
    DrawR(); // .R
  } else
  {
    PRINT(" \?\?\?\?", 5); // (.")
  }
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  WEE58(); // WEE58
  IsETIME(); // ?ETIME
}


// ================================================
// 0xf1aa: WORD 'WF1AC' codep=0x224c wordp=0xf1ac params=0 returns=1
// ================================================

void WF1AC() // WF1AC
{
  Push(Read16(pp__n_STORM)); // #STORM @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf1c2: WORD 'WF1C4' codep=0x224c wordp=0xf1c4 params=0 returns=1
// ================================================

void WF1C4() // WF1C4
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WEDD1.offset); // WEDD1<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WEDD6.offset)&0xFF); // WEDD6<IFIELD> C@
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x00c7);
  _gt_(); // >
}


// ================================================
// 0xf1dc: WORD 'WF1DE' codep=0x224c wordp=0xf1de params=0 returns=1
// ================================================

void WF1DE() // WF1DE
{
  WF1AC(); // WF1AC
  WF1C4(); // WF1C4
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf1e6: WORD 'WF1E8' codep=0x224c wordp=0xf1e8 params=2 returns=0
// ================================================

void WF1E8() // WF1E8
{
  Push(0);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTH", 5); // (.")
    return;
  }
  Push(1);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTHEAST", 9); // (.")
    return;
  }
  Push(1);
  Push(0);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("EAST", 4); // (.")
    return;
  }
  Push(1);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTHEAST", 9); // (.")
    return;
  }
  Push(0);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTH", 5); // (.")
    return;
  }
  Push(-1);
  Push(-1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("SOUTHWEST", 9); // (.")
    return;
  }
  Push(-1);
  Push(0);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("WEST", 4); // (.")
    return;
  }
  Push(-1);
  Push(1);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    PRINT("NORTHWEST", 9); // (.")
    return;
  }
  Pop(); // DROP
  Pop(); // DROP
}


// ================================================
// 0xf2cc: WORD 'WF2CE' codep=0x224c wordp=0xf2ce params=0 returns=1
// ================================================

void WF2CE() // WF2CE
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WEDBA(); // WEDBA
  Push(Pop() - Read16(0x65e1+INST_dash_Y.offset)); //  INST-Y<IFIELD> @ -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  ROT(); // ROT
  Push(Pop() - Read16(0x65e1+INST_dash_X.offset)); //  INST-X<IFIELD> @ -
  ABS(); // ABS
  Push(Read16(regsp)); // DUP
  U_star_(); // U*
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xf2f4: WORD 'WF2F6' codep=0x224c wordp=0xf2f6
// ================================================

void WF2F6() // WF2F6
{
  Push(0x0074);
  Push(0x0096);
  POS_dot_(); // POS.
  Push(8);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF1DE(); // WF1DE
  if (Pop() != 0)
  {
    WF2CE(); // WF2CE
    Push(5);
    DrawR(); // .R
    PRINT("KM.", 3); // (.")
    return;
  }
  PRINT("LOST!", 5); // (.")
}


// ================================================
// 0xf32a: WORD 'WF32C' codep=0x224c wordp=0xf32c
// ================================================

void WF32C() // WF32C
{
  Push(0x0074);
  Push(0x008f);
  POS_dot_(); // POS.
  Push(9);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF1DE(); // WF1DE
  if (Pop() == 0) return;
  WEDBA(); // WEDBA
  WEDAE(); // WEDAE
  ICLOSE(); // ICLOSE
  WEE1A(); // WEE1A
  _2SWAP(); // 2SWAP
  Pop(); Pop(); // 2DROP
  WF1E8(); // WF1E8
}


// ================================================
// 0xf358: WORD '.ENERGY' codep=0x224c wordp=0xf364
// ================================================
// entry

void DrawENERGY() // .ENERGY
{
  Push(0x0074);
  Push(0x00ab);
  POS_dot_(); // POS.
  Push(7);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  WEDA6(); // WEDA6
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    GetColor(YELLOW);
    StoreCOLOR(); // !COLOR
    PRINT("NONE", 4); // (.")
    return;
  }
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Pop() - 0x07d0); //  0x07d0 -
  Push(0x0064);
  Push(0x782f);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_COLOR)); // COLOR @
    GetColor(PINK);
    StoreCOLOR(); // !COLOR
    PRINT("RESERVE", 7); // (.")
    StoreCOLOR(); // !COLOR
  } else
  {
    Push(3);
    DrawR(); // .R
    PRINT("%", 1); // (.")
  }
  Push(0x0074);
  Push(0x00a4);
  POS_dot_(); // POS.
  Push(3);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp__pe_EFF)); // %EFF @
  Push(0x0064);
  Push(-(Read16(pp_E_slash_M) * 4)); // E/M @ 4 * NEGATE
  _star__slash_(); // */
  Push(0x0063);
  MIN(); // MIN
  Push(3);
  DrawR(); // .R
  PRINT("%", 1); // (.")
}


// ================================================
// 0xf409: WORD '.CARGO' codep=0x224c wordp=0xf414
// ================================================
// entry

void DrawCARGO() // .CARGO
{
  Push(0x0074);
  Push(0x009d);
  POS_dot_(); // POS.
  Push(3);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WEDC4.offset)); // WEDC4<IFIELD> @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(5);
    MAX(); // MAX
    Push(5);
    _slash_(); // /
  }
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(3);
  DrawR(); // .R
  PRINT("% FULL", 6); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf44f: WORD 'WF451' codep=0x224c wordp=0xf451 params=2 returns=2
// ================================================

void WF451() // WF451
{
  Push(Pop() - 0x01e0); //  0x01e0 -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(Pop() - 0x0480); //  0x0480 -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xf477: WORD 'WF479' codep=0x224c wordp=0xf479 params=1 returns=0
// ================================================

void WF479() // WF479
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      PRINT("W", 1); // (.")
    } else
    {
      PRINT("E", 1); // (.")
    }
    return;
  }
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xf49b: WORD 'WF49D' codep=0x224c wordp=0xf49d params=1 returns=0
// ================================================

void WF49D() // WF49D
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      PRINT("S", 1); // (.")
    } else
    {
      PRINT("N", 1); // (.")
    }
    return;
  }
  PRINT(" ", 1); // (.")
}


// ================================================
// 0xf4bf: WORD '.WHERE' codep=0x224c wordp=0xf4ca params=0 returns=0
// ================================================
// entry

void DrawWHERE() // .WHERE
{
  WF1DE(); // WF1DE
  if (Pop() == 0) return;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x0010);
  Push(0x00c5);
  POS_dot_(); // POS.
  WEDBA(); // WEDBA
  WF451(); // WF451
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(4);
  DrawR(); // .R
  WF49D(); // WF49D
  PRINT(" * ", 3); // (.")
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(0);
  DrawR(); // .R
  WF479(); // WF479
}


// ================================================
// 0xf50e: WORD '.DISTANCE' codep=0x224c wordp=0xf51c
// ================================================
// entry

void DrawDISTANCE() // .DISTANCE
{
  WF2F6(); // WF2F6
  WF32C(); // WF32C
}


// ================================================
// 0xf522: WORD '.STATS' codep=0x224c wordp=0xf52d
// ================================================
// entry

void DrawSTATS() // .STATS
{
  unsigned short int a;
  Push(Read16(pp_XORMODE)); // XORMODE @
  a = Pop(); // >R
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WF0E2(); // WF0E2
    WF00D(); // WF00D
  }
  DrawSTARDATE(); // .STARDATE
  DrawWHERE(); // .WHERE
  DrawENERGY(); // .ENERGY
  DrawCARGO(); // .CARGO
  DrawDISTANCE(); // .DISTANCE
  Push(a); // R>
  Push(pp_XORMODE); // XORMODE
  Store_2(); // !_2
}

// 0xf557: db 0x54 0x56 0x43 0x4f 0x4e 0x2d 0x56 0x5f 0x5f 0x00 'TVCON-V__ '

