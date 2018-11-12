// ====== OVERLAY 'WEAPONS' ======
// store offset = 0xec10
// overlay size   = 0x0950

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEC26  codep:0x224c wordp:0xec26 size:0x0010 C-string:'WEC26'
//           WEC38  codep:0x224c wordp:0xec38 size:0x000a C-string:'WEC38'
//           WEC44  codep:0x224c wordp:0xec44 size:0x0006 C-string:'WEC44'
//           WEC4C  codep:0x224c wordp:0xec4c size:0x0006 C-string:'WEC4C'
//           WEC54  codep:0x224c wordp:0xec54 size:0x0008 C-string:'WEC54'
//           WEC5E  codep:0x2214 wordp:0xec5e size:0x0002 C-string:'WEC5E'
//           WEC62  codep:0x7420 wordp:0xec62 size:0x0003 C-string:'WEC62'
//           WEC67  codep:0x7420 wordp:0xec67 size:0x0003 C-string:'WEC67'
//           WEC6C  codep:0x7420 wordp:0xec6c size:0x0003 C-string:'WEC6C'
//           WEC71  codep:0x7420 wordp:0xec71 size:0x0003 C-string:'WEC71'
//           WEC76  codep:0x7420 wordp:0xec76 size:0x0003 C-string:'WEC76'
//           WEC7B  codep:0x224c wordp:0xec7b size:0x0010 C-string:'WEC7B'
//           WEC8D  codep:0x224c wordp:0xec8d size:0x001c C-string:'WEC8D'
//           WECAB  codep:0x224c wordp:0xecab size:0x0006 C-string:'WECAB'
//           WECB3  codep:0x224c wordp:0xecb3 size:0x0006 C-string:'WECB3'
//           WECBB  codep:0x224c wordp:0xecbb size:0x0008 C-string:'WECBB'
//           WECC5  codep:0x224c wordp:0xecc5 size:0x003a C-string:'WECC5'
//           WED01  codep:0x224c wordp:0xed01 size:0x000c C-string:'WED01'
//           WED0F  codep:0x224c wordp:0xed0f size:0x000c C-string:'WED0F'
//           WED1D  codep:0x224c wordp:0xed1d size:0x000c C-string:'WED1D'
//           WED2B  codep:0x224c wordp:0xed2b size:0x000c C-string:'WED2B'
//           WED39  codep:0x224c wordp:0xed39 size:0x000c C-string:'WED39'
//           WED47  codep:0x224c wordp:0xed47 size:0x0014 C-string:'WED47'
//           WED5D  codep:0x1d29 wordp:0xed5d size:0x0002 C-string:'WED5D'
//           WED61  codep:0x224c wordp:0xed61 size:0x0046 C-string:'WED61'
//           WEDA9  codep:0x224c wordp:0xeda9 size:0x000a C-string:'WEDA9'
//           WEDB5  codep:0x224c wordp:0xedb5 size:0x0024 C-string:'WEDB5'
//           WEDDB  codep:0x224c wordp:0xeddb size:0x0008 C-string:'WEDDB'
//           WEDE5  codep:0x224c wordp:0xede5 size:0x0010 C-string:'WEDE5'
//           WEDF7  codep:0x224c wordp:0xedf7 size:0x0066 C-string:'WEDF7'
//           WEE5F  codep:0x224c wordp:0xee5f size:0x004b C-string:'WEE5F'
//           WEEAC  codep:0x224c wordp:0xeeac size:0x0032 C-string:'WEEAC'
//           WEEE0  codep:0x224c wordp:0xeee0 size:0x0014 C-string:'WEEE0'
//           WEEF6  codep:0x224c wordp:0xeef6 size:0x000a C-string:'WEEF6'
//           WEF02  codep:0x224c wordp:0xef02 size:0x0008 C-string:'WEF02'
//           WEF0C  codep:0x224c wordp:0xef0c size:0x0016 C-string:'WEF0C'
//           WEF24  codep:0x224c wordp:0xef24 size:0x0006 C-string:'WEF24'
//           WEF2C  codep:0x224c wordp:0xef2c size:0x001a C-string:'WEF2C'
//           WEF48  codep:0x224c wordp:0xef48 size:0x000a C-string:'WEF48'
//           WEF54  codep:0x224c wordp:0xef54 size:0x0030 C-string:'WEF54'
//           WEF86  codep:0x224c wordp:0xef86 size:0x001c C-string:'WEF86'
//           WEFA4  codep:0x224c wordp:0xefa4 size:0x002e C-string:'WEFA4'
//           WEFD4  codep:0x224c wordp:0xefd4 size:0x0026 C-string:'WEFD4'
//           WEFFC  codep:0x224c wordp:0xeffc size:0x0048 C-string:'WEFFC'
//           WF046  codep:0x1d29 wordp:0xf046 size:0x0004 C-string:'WF046'
//           WF04C  codep:0x1d29 wordp:0xf04c size:0x0004 C-string:'WF04C'
//           WF052  codep:0x1d29 wordp:0xf052 size:0x0004 C-string:'WF052'
//           WF058  codep:0x1d29 wordp:0xf058 size:0x0004 C-string:'WF058'
//           WF05E  codep:0x1d29 wordp:0xf05e size:0x0004 C-string:'WF05E'
//           WF064  codep:0x224c wordp:0xf064 size:0x000e C-string:'WF064'
//           WF074  codep:0x224c wordp:0xf074 size:0x001e C-string:'WF074'
//           WF094  codep:0x224c wordp:0xf094 size:0x0052 C-string:'WF094'
//           WF0E8  codep:0x224c wordp:0xf0e8 size:0x000a C-string:'WF0E8'
//           WF0F4  codep:0x224c wordp:0xf0f4 size:0x0042 C-string:'WF0F4'
//           WF138  codep:0x224c wordp:0xf138 size:0x001e C-string:'WF138'
//           WF158  codep:0x224c wordp:0xf158 size:0x0018 C-string:'WF158'
//           WF172  codep:0x224c wordp:0xf172 size:0x0098 C-string:'WF172'
//           WF20C  codep:0x224c wordp:0xf20c size:0x003c C-string:'WF20C'
//           WF24A  codep:0x224c wordp:0xf24a size:0x0008 C-string:'WF24A'
//           WF254  codep:0x1d29 wordp:0xf254 size:0x0002 C-string:'WF254'
//           WF258  codep:0x224c wordp:0xf258 size:0x0012 C-string:'WF258'
//           WF26C  codep:0x224c wordp:0xf26c size:0x003c C-string:'WF26C'
//           WF2AA  codep:0x224c wordp:0xf2aa size:0x0010 C-string:'WF2AA'
//           WF2BC  codep:0x224c wordp:0xf2bc size:0x0016 C-string:'WF2BC'
//           WF2D4  codep:0x224c wordp:0xf2d4 size:0x001e C-string:'WF2D4'
//           WF2F4  codep:0x224c wordp:0xf2f4 size:0x0010 C-string:'WF2F4'
//           WF306  codep:0x224c wordp:0xf306 size:0x003e C-string:'WF306'
//       GNUNK>NUL  codep:0x224c wordp:0xf352 size:0x0020 C-string:'GNUNK_gt_NUL'
//           WF374  codep:0x224c wordp:0xf374 size:0x0046 C-string:'WF374'
//           WF3BC  codep:0x224c wordp:0xf3bc size:0x0032 C-string:'WF3BC'
//           WF3F0  codep:0x224c wordp:0xf3f0 size:0x0056 C-string:'WF3F0'
//           WF448  codep:0x224c wordp:0xf448 size:0x002c C-string:'WF448'
//           WF476  codep:0x224c wordp:0xf476 size:0x0010 C-string:'WF476'
//          DONULL  codep:0x224c wordp:0xf491 size:0x0086 C-string:'DONULL'
//            TARG  codep:0x224c wordp:0xf520 size:0x0000 C-string:'TARG'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp__i_WAX; // 'WAX
extern const unsigned short int pp_WEAPON_dash_; // WEAPON-
extern const unsigned short int pp_IsSUP; // ?SUP
extern const unsigned short int pp_NLR; // NLR
extern const unsigned short int pp_EYEXY; // EYEXY
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp_NTIME; // NTIME
extern const unsigned short int pp_NOF; // NOF
extern const unsigned short int pp__n_MISS; // #MISS
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color GREEN; // GREEN
extern Color RED; // RED
extern Color VIOLET; // VIOLET
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SI; // INST-SI
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void ABS(); // ABS
void M_star__slash_(); // M*/
void MAX(); // MAX
void Draw(); // .
void SPACE(); // SPACE
void MS(); // MS
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void KEY_2(); // KEY_2
void _3_star_(); // 3*
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void IsNULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void NBCLR(); // NBCLR
void StoreCOLOR(); // !COLOR
void BFILL(); // BFILL
void DrawCIRCLE_1(); // .CIRCLE_1
void FILLCIR(); // FILLCIR
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void VCLIPSE(); // VCLIPSE
void DCLIPSE(); // DCLIPSE
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void BYE_2(); // BYE_2
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_I(); // POINT>I
void DrawLOCAL_dash_(); // .LOCAL-
void IsICONS_dash__1(); // ?ICONS-_1
void POS_dot_(); // POS.
void CTERASE(); // CTERASE
void BEEPON_2(); // BEEPON_2
void SONG(); // SONG
void POLY_dash_ER(); // POLY-ER
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void Y_slash_N(); // Y/N
void _do__ex_(); // $!
void DrawSORD(); // .SORD
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void CI(); // CI
void LXPLOT(); // LXPLOT
void DISPLAY(); // DISPLAY
void IsINVIS(); // ?INVIS
void WLD_gt_SCR(); // WLD>SCR


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WED5D = 0xed5d; // WED5D size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF046 = 0xf046; // WF046 size: 4
// {0x56, 0x3a, 0x20, 0x0a}

const unsigned short int pp_WF04C = 0xf04c; // WF04C size: 4
// {0x56, 0x3a, 0x20, 0x5d}

const unsigned short int pp_WF052 = 0xf052; // WF052 size: 4
// {0x56, 0x3a, 0x20, 0x90}

const unsigned short int pp_WF058 = 0xf058; // WF058 size: 4
// {0x56, 0x3a, 0x20, 0xc2}

const unsigned short int pp_WF05E = 0xf05e; // WF05E size: 4
// {0x56, 0x3a, 0x20, 0x89}

const unsigned short int pp_WF254 = 0xf254; // WF254 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WEC5E = 0xec5e; // WEC5E


// 0xec22: db 0x94 0x00 '  '

// ================================================
// 0xec24: WORD 'WEC26' codep=0x224c wordp=0xec26 params=0 returns=1
// ================================================
// orphan

void WEC26() // WEC26
{
  Push(pp__ro_AORIGI); // (AORIGI
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(Pop()==0x000a?1:0); //  0x000a =
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec36: WORD 'WEC38' codep=0x224c wordp=0xec38 params=0 returns=2
// ================================================

void WEC38() // WEC38
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xec42: WORD 'WEC44' codep=0x224c wordp=0xec44 params=0 returns=0
// ================================================

void WEC44() // WEC44
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xec4a: WORD 'WEC4C' codep=0x224c wordp=0xec4c params=0 returns=1
// ================================================

void WEC4C() // WEC4C
{
  Push(Read16(pp_XWLD_c_XP)); // XWLD:XP @
}


// ================================================
// 0xec52: WORD 'WEC54' codep=0x224c wordp=0xec54 params=0 returns=2
// ================================================

void WEC54() // WEC54
{
  WEC44(); // WEC44
  WEC38(); // WEC38
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec5c: WORD 'WEC5E' codep=0x2214 wordp=0xec5e
// ================================================
// orphan
// 0xec5e: dw 0x0014

// ================================================
// 0xec60: WORD 'WEC62' codep=0x7420 wordp=0xec62
// ================================================
IFieldType WEC62 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xec65: WORD 'WEC67' codep=0x7420 wordp=0xec67
// ================================================
// orphan
IFieldType WEC67 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xec6a: WORD 'WEC6C' codep=0x7420 wordp=0xec6c
// ================================================
IFieldType WEC6C = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xec6f: WORD 'WEC71' codep=0x7420 wordp=0xec71
// ================================================
// orphan
IFieldType WEC71 = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xec74: WORD 'WEC76' codep=0x7420 wordp=0xec76
// ================================================
IFieldType WEC76 = {SHIPIDX, 0x57, 0x01};

// ================================================
// 0xec79: WORD 'WEC7B' codep=0x224c wordp=0xec7b params=2 returns=2
// ================================================

void WEC7B() // WEC7B
{
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec8b: WORD 'WEC8D' codep=0x224c wordp=0xec8d params=4 returns=1
// ================================================
// orphan

void WEC8D() // WEC8D
{
  unsigned short int a;
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xeca9: WORD 'WECAB' codep=0x224c wordp=0xecab
// ================================================

void WECAB() // WECAB
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
}


// ================================================
// 0xecb1: WORD 'WECB3' codep=0x224c wordp=0xecb3
// ================================================

void WECB3() // WECB3
{
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xecb9: WORD 'WECBB' codep=0x224c wordp=0xecbb
// ================================================

void WECBB() // WECBB
{
  SET_STR_AS_PARAM(" ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xecc3: WORD 'WECC5' codep=0x224c wordp=0xecc5 params=2 returns=2
// ================================================
// orphan

void WECC5() // WECC5
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push2Words("0.");
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
// 0xecff: WORD 'WED01' codep=0x224c wordp=0xed01 params=0 returns=3
// ================================================

void WED01() // WED01
{
  Push(0x6285); Push(0x0002);
  WEC7B(); // WEC7B
  GetColor(RED);
}


// ================================================
// 0xed0d: WORD 'WED0F' codep=0x224c wordp=0xed0f params=0 returns=3
// ================================================

void WED0F() // WED0F
{
  Push(0x62a0); Push(0x0002);
  WEC7B(); // WEC7B
  GetColor(RED);
}


// ================================================
// 0xed1b: WORD 'WED1D' codep=0x224c wordp=0xed1d params=0 returns=3
// ================================================

void WED1D() // WED1D
{
  Push(0x62c5); Push(0x0002);
  WEC7B(); // WEC7B
  GetColor(YELLOW);
}


// ================================================
// 0xed29: WORD 'WED2B' codep=0x224c wordp=0xed2b params=0 returns=3
// ================================================

void WED2B() // WED2B
{
  Push(0x62e7); Push(0x0002);
  WEC7B(); // WEC7B
  GetColor(YELLOW);
}


// ================================================
// 0xed37: WORD 'WED39' codep=0x224c wordp=0xed39 params=0 returns=3
// ================================================

void WED39() // WED39
{
  Push(0x630c); Push(0x0002);
  WEC7B(); // WEC7B
  GetColor(GREEN);
}


// ================================================
// 0xed45: WORD 'WED47' codep=0x224c wordp=0xed47
// ================================================

void WED47() // WED47
{
  CTERASE(); // CTERASE
  Push(0x6326); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xed5b: WORD 'WED5D' codep=0x1d29 wordp=0xed5d
// ================================================
// 0xed5d: db 0x3a 0x20 ': '

// ================================================
// 0xed5f: WORD 'WED61' codep=0x224c wordp=0xed61
// ================================================

void WED61() // WED61
{
  unsigned short int i, imax, j, jmax;
  Push(pp_WED5D); // WED5D
  _099(); // 099

  i = 0;
  imax = 0x000e;
  do // (DO)
  {
    Push(pp_EYEXY); // EYEXY
    _2_at_(); // 2@
    Push(i); // I
    Push(Read16(pp_ILOCAL)); // ILOCAL @
    IsICONS_dash__1(); // ?ICONS-_1
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {

      j = 0;
      jmax = Pop();
      do // (DO)
      {
        POINT_gt_I(); // POINT>I
        GetID(); // @ID
        Push(0x001b);
        Push(0x0023);
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          Push(0x012c);
          Push(pp_WED5D); // WED5D
          _plus__ex__2(); // +!_2
        }
        j++;
      } while(j<jmax); // (LOOP)

    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeda7: WORD 'WEDA9' codep=0x224c wordp=0xeda9 params=0 returns=1
// ================================================

void WEDA9() // WEDA9
{
  WEC44(); // WEC44
  Push(Read16(0x65e1+WEC6C.offset)); // WEC6C<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedb3: WORD 'WEDB5' codep=0x224c wordp=0xedb5 params=0 returns=1
// ================================================

void WEDB5() // WEDB5
{
  Push(Read16(pp_IsSUP) & !(Read16(pp_NLR)==-1?1:0)); // ?SUP @ NLR @ -1 = NOT AND
  if (Pop() != 0)
  {
    WEC44(); // WEC44
    Push(Read16(0x65e1+WEC62.offset)); // WEC62<IFIELD> @
    ICLOSE(); // ICLOSE
    return;
  }
  Push(0);
}


// ================================================
// 0xedd9: WORD 'WEDDB' codep=0x224c wordp=0xeddb params=0 returns=1
// ================================================

void WEDDB() // WEDDB
{
  WEDA9(); // WEDA9
  WEDB5(); // WEDB5
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xede3: WORD 'WEDE5' codep=0x224c wordp=0xede5 params=0 returns=1
// ================================================

void WEDE5() // WEDE5
{
  Push(Read16(pp_WED5D)); // WED5D @
  WEDDB(); // WEDDB
  _dash_(); // -
  Push(0x00c8);
  _gt_(); // >
}


// ================================================
// 0xedf5: WORD 'WEDF7' codep=0x224c wordp=0xedf7
// ================================================

void WEDF7() // WEDF7
{
  unsigned short int a;
  Push(0x003b);
  Push(0x0028);
  POS_dot_(); // POS.
  Push(0x0018);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  WED61(); // WED61
  Push(Read16(pp_WED5D)); // WED5D @
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    WED39(); // WED39
  } else
  {
    WEDDB(); // WEDDB
    Push(Read16(a)); // R@
    _dash_(); // -
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      WEDE5(); // WEDE5
      if (Pop() != 0)
      {
        WED01(); // WED01
      } else
      {
        WED0F(); // WED0F
      }
    } else
    {
      WEDB5(); // WEDB5
      Push(Read16(a)); // R@
      _dash_(); // -
      _0_st_(); // 0<
      if (Pop() != 0)
      {
        WED1D(); // WED1D
      } else
      {
        WED2B(); // WED2B
      }
    }
  }
  Push(a); // R>
  Pop(); // DROP
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xee5d: WORD 'WEE5F' codep=0x224c wordp=0xee5f
// ================================================

void WEE5F() // WEE5F
{
  unsigned short int i, imax;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  _gt_2FONT(); // >2FONT

  i = 0;
  imax = 3;
  do // (DO)
  {
    CTERASE(); // CTERASE
    Push(0x00fa);
    MS(); // MS
    PRINT("TARGETING", 9); // (.")
    Push(0x00fa);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _gt_1FONT(); // >1FONT
  Push(3);
  Push(0x0028);
  POS_dot_(); // POS.
  PRINT("SAFETY FACTOR:", 14); // (.")
}


// ================================================
// 0xeeaa: WORD 'WEEAC' codep=0x224c wordp=0xeeac
// ================================================

void WEEAC() // WEEAC
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("YOU HAVE ");
  DrawTTY(); // .TTY
  WEC44(); // WEC44
  Push(Read16(0x65e1+WEC76.offset)&0xFF); // WEC76<IFIELD> C@
  Draw(); // .
  SPACE(); // SPACE
  ICLOSE(); // ICLOSE
  Push(0x6356); Push(0x0002);
  WEC7B(); // WEC7B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x6378); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
}


// ================================================
// 0xeede: WORD 'WEEE0' codep=0x224c wordp=0xeee0 params=0 returns=0
// ================================================

void WEEE0() // WEEE0
{
  WEC44(); // WEC44
  Push((Read16(0x65e1+WEC76.offset)&0xFF) - 1); // WEC76<IFIELD> C@ 1-
  Push(0);
  MAX(); // MAX
  Push(0x65e1+WEC76.offset); // WEC76<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeef4: WORD 'WEEF6' codep=0x224c wordp=0xeef6 params=0 returns=1
// ================================================

void WEEF6() // WEEF6
{
  WEC44(); // WEC44
  Push(Read16(0x65e1+WEC76.offset)&0xFF); // WEC76<IFIELD> C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef00: WORD 'WEF02' codep=0x224c wordp=0xef02 params=0 returns=0
// ================================================

void WEF02() // WEF02
{
  WEC54(); // WEC54
  Push(pp_EYEXY); // EYEXY
  StoreD(); // D!
}


// ================================================
// 0xef0a: WORD 'WEF0C' codep=0x224c wordp=0xef0c
// ================================================

void WEF0C() // WEF0C
{
  Push(Read16(pp_IsNEB)); // ?NEB @
  if (Pop() != 0)
  {
    NBCLR(); // NBCLR
  } else
  {
    GetColor(BLACK);
  }
  StoreCOLOR(); // !COLOR
  BFILL(); // BFILL
}


// ================================================
// 0xef22: WORD 'WEF24' codep=0x224c wordp=0xef24
// ================================================

void WEF24() // WEF24
{
  WEF0C(); // WEF0C
  DrawLOCAL_dash_(); // .LOCAL-
}


// ================================================
// 0xef2a: WORD 'WEF2C' codep=0x224c wordp=0xef2c
// ================================================

void WEF2C() // WEF2C
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push(Pop() + Read16(pp_EYEXY + 2)); //  EYEXY 2+ @ +
  a = Pop(); // >R
  Push(Pop() + Read16(pp_EYEXY)); //  EYEXY @ +
  Push(a); // R>
  SWAP(); // SWAP
  IsINVIS(); // ?INVIS
}


// ================================================
// 0xef46: WORD 'WEF48' codep=0x224c wordp=0xef48 params=2 returns=2
// ================================================

void WEF48() // WEF48
{
  WEC4C(); // WEC4C
  Push(Pop() >> 1); //  2/
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
}


// ================================================
// 0xef52: WORD 'WEF54' codep=0x224c wordp=0xef54
// ================================================

void WEF54() // WEF54
{
  unsigned short int i, imax;
  WECAB(); // WECAB
  Push(1);
  Push(8);
  WEC4C(); // WEC4C
  Push(Pop() * Pop()); // *

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WEF24(); // WEF24
    GetColor(WHITE);
    StoreCOLOR(); // !COLOR
    Push(pp_EYEXY); // EYEXY
    _2_at_(); // 2@
    WLD_gt_SCR(); // WLD>SCR
    WEF48(); // WEF48
    WEF48(); // WEF48
    Push(i); // I
    DrawCIRCLE_1(); // .CIRCLE_1
    V_gt_DISPL(); // V>DISPL
    WEC4C(); // WEC4C
    Push(-Pop() * 2); //  NEGATE 2*
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  WECB3(); // WECB3
}


// ================================================
// 0xef84: WORD 'WEF86' codep=0x224c wordp=0xef86
// ================================================

void WEF86() // WEF86
{
  Push(0x012c);
  GetIL(); // @IL
  GetIH(); // @IH
  _gt_C_plus_S(); // >C+S
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0014?1:0); //  0x0014 =
  Push(0xc6d9); // 'BLST'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefa2: WORD 'WEFA4' codep=0x224c wordp=0xefa4
// ================================================

void WEFA4() // WEFA4
{
  unsigned short int i, imax, j, jmax;
  CTERASE(); // CTERASE

  i = 0;
  imax = 0x000e;
  do // (DO)
  {
    Push(pp_EYEXY); // EYEXY
    _2_at_(); // 2@
    Push(i); // I
    Push(Read16(pp_ILOCAL)); // ILOCAL @
    IsICONS_dash__1(); // ?ICONS-_1
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {

      j = 0;
      jmax = Pop();
      do // (DO)
      {
        POINT_gt_I(); // POINT>I
        WEF86(); // WEF86
        j++;
      } while(j<jmax); // (LOOP)

    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xefd2: WORD 'WEFD4' codep=0x224c wordp=0xefd4
// ================================================

void WEFD4() // WEFD4
{
  unsigned short int i, imax;
  StoreCOLOR(); // !COLOR
  BFILL(); // BFILL
  V_gt_DISPL(); // V>DISPL
  Push(0x2710);
  Push(Read16(cc_MPS)); // MPS
  _slash_(); // /

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(i); // I
    Push(0x000a);
    _slash_(); // /
    RRND(); // RRND
    TONE(); // TONE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeffa: WORD 'WEFFC' codep=0x224c wordp=0xeffc
// ================================================

void WEFFC() // WEFFC
{
  unsigned short int i, imax;
  WECAB(); // WECAB
  WEF24(); // WEF24
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR

  i = 2;
  imax = 0x001e;
  do // (DO)
  {
    Push(pp_EYEXY); // EYEXY
    _2_at_(); // 2@
    WLD_gt_SCR(); // WLD>SCR
    WEF48(); // WEF48
    WEF48(); // WEF48
    Push(i); // I
    DrawCIRCLE_1(); // .CIRCLE_1
    DISPLAY(); // DISPLAY
    V_gt_DISPL(); // V>DISPL
    i++;
  } while(i<imax); // (LOOP)

  BEEPON_2(); // BEEPON_2
  GetColor(WHITE);
  WEFD4(); // WEFD4
  GetColor(BLUE);
  WEFD4(); // WEFD4
  GetColor(LT_dash_BLUE);
  WEFD4(); // WEFD4
  GetColor(DK_dash_BLUE);
  WEFD4(); // WEFD4
  BEEPOFF(); // BEEPOFF
  WEF24(); // WEF24
  V_gt_DISPL(); // V>DISPL
  WECB3(); // WECB3
  Push(0x003c);
  MS(); // MS
}


// ================================================
// 0xf044: WORD 'WF046' codep=0x1d29 wordp=0xf046
// ================================================
// 0xf046: db 0x56 0x3a 0x20 0x0a 'V:  '

// ================================================
// 0xf04a: WORD 'WF04C' codep=0x1d29 wordp=0xf04c
// ================================================
// 0xf04c: db 0x56 0x3a 0x20 0x5d 'V: ]'

// ================================================
// 0xf050: WORD 'WF052' codep=0x1d29 wordp=0xf052
// ================================================
// 0xf052: db 0x56 0x3a 0x20 0x90 'V:  '

// ================================================
// 0xf056: WORD 'WF058' codep=0x1d29 wordp=0xf058
// ================================================
// 0xf058: db 0x56 0x3a 0x20 0xc2 'V:  '

// ================================================
// 0xf05c: WORD 'WF05E' codep=0x1d29 wordp=0xf05e
// ================================================
// 0xf05e: db 0x56 0x3a 0x20 0x89 'V:  '

// ================================================
// 0xf062: WORD 'WF064' codep=0x224c wordp=0xf064 params=2 returns=2
// ================================================
// orphan

void WF064() // WF064
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0);
  SWAP(); // SWAP
  Push(1);
  Push(a); // R>
  M_star__slash_(); // M*/
}


// ================================================
// 0xf072: WORD 'WF074' codep=0x224c wordp=0xf074 params=0 returns=0
// ================================================

void WF074() // WF074
{
  Push(pp_WF04C); // WF04C
  _2_at_(); // 2@
  Push(pp_WF058); // WF058
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_WF04C); // WF04C
  StoreD(); // D!
  Push(pp_WF052); // WF052
  _2_at_(); // 2@
  Push(pp_WF05E); // WF05E
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_WF052); // WF052
  StoreD(); // D!
}


// ================================================
// 0xf092: WORD 'WF094' codep=0x224c wordp=0xf094 params=0 returns=0
// ================================================

void WF094() // WF094
{
  unsigned short int a;
  WEC54(); // WEC54
  Push(pp_WF04C); // WF04C
  Store_2(); // !_2
  Push(pp_WF052); // WF052
  Store_2(); // !_2
  Push(Read16(pp_EYEXY + 2) - Read16(pp_WF052)); // EYEXY 2+ @ WF052 @ -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  Push(Read16(pp_EYEXY) - Read16(pp_WF04C)); // EYEXY @ WF04C @ -
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  ROT(); // ROT
  MAX(); // MAX
  a = Pop(); // >R
  Push(Read16(a)); // R@
  WF064(); // WF064
  Push(pp_WF058); // WF058
  StoreD(); // D!
  Push(a); // R>
  WF064(); // WF064
  Push(pp_WF05E); // WF05E
  StoreD(); // D!
  Push(0x8000);
  Push(Read16(regsp)); // DUP
  Push(pp_WF052 + 2); // WF052 2+
  Store_2(); // !_2
  Push(pp_WF04C + 2); // WF04C 2+
  Store_2(); // !_2
}


// ================================================
// 0xf0e6: WORD 'WF0E8' codep=0x224c wordp=0xf0e8 params=0 returns=2
// ================================================

void WF0E8() // WF0E8
{
  Push(Read16(pp_WF052)); // WF052 @
  Push(Read16(pp_WF04C)); // WF04C @
}


// ================================================
// 0xf0f2: WORD 'WF0F4' codep=0x224c wordp=0xf0f4
// ================================================

void WF0F4() // WF0F4
{
  WEC54(); // WEC54
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WECAB(); // WECAB
  WLD_gt_SCR(); // WLD>SCR
  LXPLOT(); // LXPLOT
  WF094(); // WF094
  while(1)
  {
    WF0E8(); // WF0E8
    Push(pp_WF046); // WF046
    StoreD(); // D!
    WF0E8(); // WF0E8
    Push(pp_EYEXY); // EYEXY
    _2_at_(); // 2@
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    Push(pp_WF046); // WF046
    _2_at_(); // 2@
    WLD_gt_SCR(); // WLD>SCR
    LXPLOT(); // LXPLOT
    WF074(); // WF074
    WF0E8(); // WF0E8
    WLD_gt_SCR(); // WLD>SCR
    LXPLOT(); // LXPLOT
    V_gt_DISPL(); // V>DISPL
    Push(0x003c);
    MS(); // MS
  }
  WECB3(); // WECB3
}


// ================================================
// 0xf136: WORD 'WF138' codep=0x224c wordp=0xf138 params=0 returns=0
// ================================================

void WF138() // WF138
{
  Push2Words("*MISS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    IDELETE(); // IDELETE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(pp__n_MISS); // #MISS
  _099(); // 099
}


// ================================================
// 0xf156: WORD 'WF158' codep=0x224c wordp=0xf158
// ================================================

void WF158() // WF158
{
  WF0F4(); // WF0F4
  WEFFC(); // WEFFC
  WEFA4(); // WEFA4
  WF138(); // WF138
  WEEE0(); // WEEE0
  DrawSORD(); // .SORD
  Push(0x0064);
  Push(0xbf4a); // 'OV+!EDL'
  MODULE(); // MODULE
}


// ================================================
// 0xf170: WORD 'WF172' codep=0x224c wordp=0xf172
// ================================================

void WF172() // WF172
{
  WEEF6(); // WEEF6
  if (Pop() != 0)
  {
    WEF02(); // WEF02
    WEEAC(); // WEEAC
    Y_slash_N(); // Y/N
    if (Pop() != 0)
    {
      WEE5F(); // WEE5F
      do
      {
        TIME(); // TIME
        _2_at_(); // 2@
        Push(pp_KEYTIME); // KEYTIME
        _2_at_(); // 2@
        D_dash_(); // D-
        Push(0x1388); Push(0x0000);
        D_gt_(); // D>
        if (Pop() != 0)
        {
          Push(pp__i_WAX); // 'WAX
          GetEXECUTE(); // @EXECUTE
        }
        XYSCAN(); // XYSCAN
        WEF2C(); // WEF2C
        if (Pop() != 0)
        {
          Push(pp_EYEXY + 2); // EYEXY 2+
          _plus__ex__2(); // +!_2
          Push(pp_EYEXY); // EYEXY
          _plus__ex__2(); // +!_2
        } else
        {
          Pop(); Pop(); // 2DROP
        }
        WEF54(); // WEF54
        WEDF7(); // WEDF7
        IsTRIG(); // ?TRIG
      } while(Pop() == 0);
      WEDE5(); // WEDE5
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        WF158(); // WF158
        Push(pp_WEAPON_dash_); // WEAPON-
        ON_2(); // ON_2
      } else
      {
        WED47(); // WED47
      }
      Push(0x03e8);
      MS(); // MS
      CTERASE(); // CTERASE
    } else
    {
      SET_STR_AS_PARAM("CANCELLED");
      DrawTTY(); // .TTY
    }
  } else
  {
    CTINIT(); // CTINIT
    CTERASE(); // CTERASE
    Push(0x63a8); Push(0x0002);
    WEC7B(); // WEC7B
    DrawTTY(); // .TTY
  }
  WECAB(); // WECAB
  WEF24(); // WEF24
  V_gt_DISPL(); // V>DISPL
  WECB3(); // WECB3
}


// ================================================
// 0xf20a: WORD 'WF20C' codep=0x224c wordp=0xf20c params=0 returns=1
// ================================================

void WF20C() // WF20C
{
  unsigned short int i, imax;
  Push(Read16(cc_TRUE)); // TRUE
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    GetINST_dash_S(); // @INST-S
    ICLOSE(); // ICLOSE
    Push(Pop()==6?1:0); //  6 =
    if (Pop() != 0)
    {
      SWAP(); // SWAP
      Push(!Pop()); //  NOT
      SWAP(); // SWAP
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf248: WORD 'WF24A' codep=0x224c wordp=0xf24a params=0 returns=0
// ================================================

void WF24A() // WF24A
{
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
}


// ================================================
// 0xf252: WORD 'WF254' codep=0x1d29 wordp=0xf254
// ================================================
// 0xf254: db 0x3a 0x20 ': '

// ================================================
// 0xf256: WORD 'WF258' codep=0x224c wordp=0xf258
// ================================================

void WF258() // WF258
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
}


// ================================================
// 0xf26a: WORD 'WF26C' codep=0x224c wordp=0xf26c
// ================================================

void WF26C() // WF26C
{
  WF258(); // WF258
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0);
    SWAP(); // SWAP
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
      Push(Read16(regsp)); // DUP
      Push(pp_WF254); // WF254
      Store_2(); // !_2
      SWAP(); // SWAP
      _dash_(); // -
      _0_st_(); // 0<
      Push(!Pop()); //  NOT
    } else
    {
      Pop(); // DROP
      Push(0);
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); Pop(); // 2DROP
    Push(0);
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2a8: WORD 'WF2AA' codep=0x224c wordp=0xf2aa
// ================================================

void WF2AA() // WF2AA
{
  WF258(); // WF258
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xf2ba: WORD 'WF2BC' codep=0x224c wordp=0xf2bc params=0 returns=0
// ================================================

void WF2BC() // WF2BC
{
  while(1)
  {
    CI(); // CI
    Push2Words("*STARSH");
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    CDROP(); // CDROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2d2: WORD 'WF2D4' codep=0x224c wordp=0xf2d4
// ================================================

void WF2D4() // WF2D4
{
  WF2AA(); // WF2AA
  Push(-Pop()); //  NEGATE
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  WF2BC(); // WF2BC
  WF24A(); // WF24A
  DrawSORD(); // .SORD
}


// ================================================
// 0xf2f2: WORD 'WF2F4' codep=0x224c wordp=0xf2f4
// ================================================

void WF2F4() // WF2F4
{
  WLD_gt_SCR(); // WLD>SCR
  WEF48(); // WEF48
  WEF48(); // WEF48
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  WEC4C(); // WEC4C
  FILLCIR(); // FILLCIR
}


// ================================================
// 0xf304: WORD 'WF306' codep=0x224c wordp=0xf306
// ================================================

void WF306() // WF306
{
  unsigned short int i, imax;
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  WECAB(); // WECAB

  i = 0;
  imax = 5;
  do // (DO)
  {
    GetColor(VIOLET);
    StoreCOLOR(); // !COLOR
    BFILL(); // BFILL
    _2DUP(); // 2DUP
    WF2F4(); // WF2F4
    DrawLOCAL_dash_(); // .LOCAL-
    DISPLAY(); // DISPLAY
    V_gt_DISPL(); // V>DISPL
    Push(0x0020);
    MS(); // MS
    WEF0C(); // WEF0C
    DrawLOCAL_dash_(); // .LOCAL-
    DISPLAY(); // DISPLAY
    V_gt_DISPL(); // V>DISPL
    Push(0x0020);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  WECB3(); // WECB3
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf344: WORD 'GNUNK>NUL' codep=0x224c wordp=0xf352
// ================================================
// entry

void GNUNK_gt_NUL() // GNUNK>NUL
{
  WF306(); // WF306
  Push(-1);
  Push(pp_NLR); // NLR
  Store_2(); // !_2
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NTIME); // NTIME
  StoreD(); // D!
  Push(Read16(pp_IsSUP)); // ?SUP @
  if (Pop() == 0) return;
  Push(0xc636); // 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xf372: WORD 'WF374' codep=0x224c wordp=0xf374
// ================================================

void WF374() // WF374
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  WF306(); // WF306
  ICLOSE(); // ICLOSE
  Push(0x0096);
  Push(4);
  WF2D4(); // WF2D4
  Push(1);
  Push(pp_NLR); // NLR
  Store_2(); // !_2
  Push(0x0032);
  Push(0xbf4a); // 'OV+!EDL'
  MODULE(); // MODULE
  Push(1);
  SONG(); // SONG
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NTIME); // NTIME
  StoreD(); // D!
  GetColor(YELLOW);
  StoreCOLOR(); // !COLOR
  Push(0x63c8); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Push(0x6400); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
}


// ================================================
// 0xf3ba: WORD 'WF3BC' codep=0x224c wordp=0xf3bc
// ================================================

void WF3BC() // WF3BC
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WECBB(); // WECBB
  Push(0x6421); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Push(0x644f); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Push(0x647f); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Push(0x649f); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf3ee: WORD 'WF3F0' codep=0x224c wordp=0xf3f0
// ================================================

void WF3F0() // WF3F0
{
  Push(0x64bf); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Push(0x64ef); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  Push(0x651c); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Push(0x0bb8);
  MS(); // MS
  BEEPON_2(); // BEEPON_2
  Push(0x0064);
  TONE(); // TONE
  Push(0x504a); // 'YELLOW'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x4fa9); // 'BLACK'
  C_ex__2(); // C!_2
  CTERASE(); // CTERASE
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(0x653c); Push(0x0002);
  WEC7B(); // WEC7B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE_2(); // BYE_2
}


// ================================================
// 0xf446: WORD 'WF448' codep=0x224c wordp=0xf448
// ================================================

void WF448() // WF448
{
  CTINIT(); // CTINIT
  WECBB(); // WECBB
  Push(0x6562); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Push(0x6594); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Push(0x65bf); Push(0x0002);
  WEC7B(); // WEC7B
  DrawTTY(); // .TTY
  Y_slash_N(); // Y/N
  if (Pop() == 0) return;
  WF3F0(); // WF3F0
}


// ================================================
// 0xf474: WORD 'WF476' codep=0x224c wordp=0xf476
// ================================================

void WF476() // WF476
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  Push(0x65ed); Push(0x0002);
  WEC7B(); // WEC7B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf486: WORD 'DONULL' codep=0x224c wordp=0xf491
// ================================================
// entry

void DONULL() // DONULL
{
  CTINIT(); // CTINIT
  Push((Read16(pp_CONTEXT_3)==4?1:0) & (Read16(pp_NOF)==0?1:0)); // CONTEXT_3 @ 4 = NOF @ 0= AND
  if (Pop() != 0)
  {
    Push(pp_NOF); // NOF
    ON_2(); // ON_2
    Push(0x000d);
    Push(0xb76b); // 'OV?ART'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      WF3BC(); // WF3BC
      if (Pop() != 0)
      {
        Push(0x00c8);
        Push(4);
        WF26C(); // WF26C
        if (Pop() != 0)
        {
          WF20C(); // WF20C
          Push(!Pop()); //  NOT
          if (Pop() != 0)
          {
            Push(pp_NOF); // NOF
            ON_2(); // ON_2
            WF374(); // WF374
            Push(pp_NOF); // NOF
            _099(); // 099
          } else
          {
            WF448(); // WF448
          }
        } else
        {
          WF476(); // WF476
        }
      } else
      {
        SET_STR_AS_PARAM("CANCELLED");
        DrawTTY(); // .TTY
      }
    } else
    {
      Push(0xb7e7); // '.NOFUN'
      MODULE(); // MODULE
    }
  } else
  {
    Push(0xb7e7); // '.NOFUN'
    MODULE(); // MODULE
  }
  Push2Words("NULL");
  Push(pp_NOF); // NOF
  _099(); // 099
}


// ================================================
// 0xf517: WORD 'TARG' codep=0x224c wordp=0xf520 params=0 returns=2
// ================================================
// entry

void TARG() // TARG
{
  Push((Read16(pp_CONTEXT_3)==4?1:0) & (Read16(pp_NOF)==0?1:0)); // CONTEXT_3 @ 4 = NOF @ 0= AND
  if (Pop() != 0)
  {
    Push(pp_NOF); // NOF
    ON_2(); // ON_2
    WF172(); // WF172
    Push(pp_NOF); // NOF
    _099(); // 099
  } else
  {
    Push(0xb7e7); // '.NOFUN'
    MODULE(); // MODULE
  }
  Push2Words("NULL");
}

// 0xf54c: db 0x57 0x45 0x41 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'WEAP________________ '

