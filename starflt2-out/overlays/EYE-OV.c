// ====== OVERLAY 'EYE-OV' ======
// store offset = 0xebb0
// overlay size   = 0x09b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WEBC6  codep:0x7420 parp:0xebc6 size:0x0003 C-string:'WEBC6'
//           WEBCB  codep:0x7420 parp:0xebcb size:0x0003 C-string:'WEBCB'
//           WEBD0  codep:0x7420 parp:0xebd0 size:0x0003 C-string:'WEBD0'
//           WEBD5  codep:0x224c parp:0xebd5 size:0x0008 C-string:'WEBD5'
//           WEBDF  codep:0x224c parp:0xebdf size:0x0006 C-string:'WEBDF'
//           WEBE7  codep:0x224c parp:0xebe7 size:0x0014 C-string:'WEBE7'
//           WEBFD  codep:0x224c parp:0xebfd size:0x004c C-string:'WEBFD'
//           WEC4B  codep:0x1d29 parp:0xec4b size:0x0004 C-string:'WEC4B'
//           WEC51  codep:0x1d29 parp:0xec51 size:0x0002 C-string:'WEC51'
//           WEC55  codep:0x1d29 parp:0xec55 size:0x0002 C-string:'WEC55'
//           WEC59  codep:0x1d29 parp:0xec59 size:0x0002 C-string:'WEC59'
//           WEC5D  codep:0x1d29 parp:0xec5d size:0x0002 C-string:'WEC5D'
//           WEC61  codep:0x1d29 parp:0xec61 size:0x0002 C-string:'WEC61'
//           WEC65  codep:0x224c parp:0xec65 size:0x0016 C-string:'WEC65'
//           WEC7D  codep:0x1d29 parp:0xec7d size:0x0004 C-string:'WEC7D'
//           WEC83  codep:0x224c parp:0xec83 size:0x0014 C-string:'WEC83'
//           WEC99  codep:0x224c parp:0xec99 size:0x0006 C-string:'WEC99'
//           WECA1  codep:0x224c parp:0xeca1 size:0x000c C-string:'WECA1'
//           WECAF  codep:0x224c parp:0xecaf size:0x000c C-string:'WECAF'
//           WECBD  codep:0x224c parp:0xecbd size:0x0036 C-string:'WECBD'
//           WECF5  codep:0x224c parp:0xecf5 size:0x0066 C-string:'WECF5'
//           WED5D  codep:0x1d29 parp:0xed5d size:0x003c C-string:'WED5D'
//           WED9B  codep:0x1d29 parp:0xed9b size:0x0002 C-string:'WED9B'
//           WED9F  codep:0x1d29 parp:0xed9f size:0x0002 C-string:'WED9F'
//           WEDA3  codep:0x224c parp:0xeda3 size:0x0010 C-string:'WEDA3'
//           WEDB5  codep:0x224c parp:0xedb5 size:0x006e C-string:'WEDB5'
//           WEE25  codep:0x224c parp:0xee25 size:0x0018 C-string:'WEE25'
//           WEE3F  codep:0x224c parp:0xee3f size:0x007c C-string:'WEE3F'
//           WEEBD  codep:0x224c parp:0xeebd size:0x0024 C-string:'WEEBD'
//           WEEE3  codep:0x224c parp:0xeee3 size:0x001a C-string:'WEEE3'
//           WEEFF  codep:0x224c parp:0xeeff size:0x000c C-string:'WEEFF'
//           WEF0D  codep:0x224c parp:0xef0d size:0x0006 C-string:'WEF0D'
//           WEF15  codep:0x224c parp:0xef15 size:0x0006 C-string:'WEF15'
//           WEF1D  codep:0x224c parp:0xef1d size:0x0006 C-string:'WEF1D'
//           WEF25  codep:0x224c parp:0xef25 size:0x006c C-string:'WEF25'
//           WEF93  codep:0x224c parp:0xef93 size:0x003f C-string:'WEF93'
//           WEFD4  codep:0x224c parp:0xefd4 size:0x00a2 C-string:'WEFD4'
//           WF078  codep:0x224c parp:0xf078 size:0x001e C-string:'WF078'
//           WF098  codep:0x224c parp:0xf098 size:0x0018 C-string:'WF098'
//           WF0B2  codep:0x224c parp:0xf0b2 size:0x0016 C-string:'WF0B2'
//           WF0CA  codep:0x224c parp:0xf0ca size:0x0032 C-string:'WF0CA'
//           WF0FE  codep:0x224c parp:0xf0fe size:0x0046 C-string:'WF0FE'
//           WF146  codep:0x224c parp:0xf146 size:0x001c C-string:'WF146'
//           WF164  codep:0x224c parp:0xf164 size:0x000e C-string:'WF164'
//           WF174  codep:0x2214 parp:0xf174 size:0x0002 C-string:'WF174'
//           WF178  codep:0x2214 parp:0xf178 size:0x0002 C-string:'WF178'
//           WF17C  codep:0x2214 parp:0xf17c size:0x0002 C-string:'WF17C'
//           WF180  codep:0x2214 parp:0xf180 size:0x0002 C-string:'WF180'
//           WF184  codep:0x224c parp:0xf184 size:0x0020 C-string:'WF184'
//           WF1A6  codep:0x224c parp:0xf1a6 size:0x000e C-string:'WF1A6'
//           WF1B6  codep:0x224c parp:0xf1b6 size:0x00ad C-string:'WF1B6'
//           WF265  codep:0x224c parp:0xf265 size:0x0030 C-string:'WF265'
//           WF297  codep:0x224c parp:0xf297 size:0x0014 C-string:'WF297'
//           WF2AD  codep:0x224c parp:0xf2ad size:0x0089 C-string:'WF2AD'
//           WF338  codep:0x224c parp:0xf338 size:0x00bf C-string:'WF338'
//           WF3F9  codep:0x224c parp:0xf3f9 size:0x0010 C-string:'WF3F9'
//           WF40B  codep:0x224c parp:0xf40b size:0x0024 C-string:'WF40B'
//           WF431  codep:0x224c parp:0xf431 size:0x000e C-string:'WF431'
//           WF441  codep:0x224c parp:0xf441 size:0x001c C-string:'WF441'
//           WF45F  codep:0x224c parp:0xf45f size:0x0044 C-string:'WF45F'
//           WF4A5  codep:0x224c parp:0xf4a5 size:0x0056 C-string:'WF4A5'
//          DO-EYE  codep:0x224c parp:0xf506 size:0x0000 C-string:'DO_dash_EYE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_SEED_3; // SEED_3
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp__10_star_CARG; // 10*CARG
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void BEEP(); // BEEP
void MS(); // MS
void D_dash_(); // D-
void DMAX(); // DMAX
void RRND(); // RRND
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _2_ex__2(); // 2!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void RNDCLR(); // RNDCLR
void BFILL(); // BFILL
void DARK(); // DARK
void VCLIPSE(); // VCLIPSE
void DCLIPSE(); // DCLIPSE
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void LCOPYBL(); // LCOPYBL
void BYE_2(); // BYE_2
void StoreVISWIN(); // !VISWIN
void StoreIX(); // !IX
void StoreIY(); // !IY
void INIT_dash_IC(); // INIT-IC
void POINT_gt_I(); // POINT>I
void DrawLOCAL_dash_(); // .LOCAL-
void IsICON_eq_I(); // ?ICON=I
void _plus_ICONBO(); // +ICONBO
void ORGLIST(); // ORGLIST
void BEEPON_2(); // BEEPON_2
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _slash_STARD(); // /STARD
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void CI(); // CI
void LPLOT(); // LPLOT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEC4B = 0xec4b; // WEC4B size: 4
// {0x56, 0x3a, 0x20, 0xae}

const unsigned short int pp_WEC51 = 0xec51; // WEC51 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEC55 = 0xec55; // WEC55 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEC59 = 0xec59; // WEC59 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEC5D = 0xec5d; // WEC5D size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEC61 = 0xec61; // WEC61 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEC7D = 0xec7d; // WEC7D size: 4
// {0x56, 0x3a, 0x20, 0x66}

const unsigned short int pp_WED5D = 0xed5d; // WED5D size: 60
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x53, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x20, 0x45, 0x59, 0x45, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x56, 0x52, 0x41, 0x28, 0x72, 0x66, 0x67, 0x31, 0x34, 0x61, 0x70, 0x72, 0x38, 0x38, 0x29}

const unsigned short int pp_WED9B = 0xed9b; // WED9B size: 2
// {0x3a, 0x20}

const unsigned short int pp_WED9F = 0xed9f; // WED9F size: 2
// {0x3a, 0x20}


const unsigned short int cc_WF174 = 0xf174; // WF174
const unsigned short int cc_WF178 = 0xf178; // WF178
const unsigned short int cc_WF17C = 0xf17c; // WF17C
const unsigned short int cc_WF180 = 0xf180; // WF180


// 0xebc2: db 0x9b 0x00 '  '

// ================================================
// 0xebc4: WORD 'WEBC6' codep=0x7420 parp=0xebc6
// ================================================
IFieldType WEBC6 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xebc9: WORD 'WEBCB' codep=0x7420 parp=0xebcb
// ================================================
IFieldType WEBCB = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xebce: WORD 'WEBD0' codep=0x7420 parp=0xebd0
// ================================================
IFieldType WEBD0 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xebd3: WORD 'WEBD5' codep=0x224c parp=0xebd5 params=1 returns=1
// ================================================

void WEBD5() // WEBD5
{
  Push((Read16(Pop())&0xFF) & 7); //  C@ 7 AND
}


// ================================================
// 0xebdd: WORD 'WEBDF' codep=0x224c parp=0xebdf params=0 returns=0
// ================================================

void WEBDF() // WEBDF
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xebe5: WORD 'WEBE7' codep=0x224c parp=0xebe7 params=0 returns=1
// ================================================

void WEBE7() // WEBE7
{
  Push(0x0036);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  Push(Pop() & !Read16(pp_PAST)); //  PAST @ NOT AND
}


// ================================================
// 0xebfb: WORD 'WEBFD' codep=0x224c parp=0xebfd
// ================================================

void WEBFD() // WEBFD
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("PRESENCE OF UHL WEAPON IS PREVENTING");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("OUR ENTRY INTO THE ANOMALY");
  DrawTTY(); // .TTY
}


// ================================================
// 0xec49: WORD 'WEC4B' codep=0x1d29 parp=0xec4b
// ================================================
// 0xec4b: db 0x56 0x3a 0x20 0xae 'V:  '

// ================================================
// 0xec4f: WORD 'WEC51' codep=0x1d29 parp=0xec51
// ================================================
// 0xec51: db 0x3a 0x20 ': '

// ================================================
// 0xec53: WORD 'WEC55' codep=0x1d29 parp=0xec55
// ================================================
// 0xec55: db 0x3a 0x20 ': '

// ================================================
// 0xec57: WORD 'WEC59' codep=0x1d29 parp=0xec59
// ================================================
// 0xec59: db 0x3a 0x20 ': '

// ================================================
// 0xec5b: WORD 'WEC5D' codep=0x1d29 parp=0xec5d
// ================================================
// 0xec5d: db 0x3a 0x20 ': '

// ================================================
// 0xec5f: WORD 'WEC61' codep=0x1d29 parp=0xec61
// ================================================
// 0xec61: db 0x3a 0x20 ': '

// ================================================
// 0xec63: WORD 'WEC65' codep=0x224c parp=0xec65 params=0 returns=0
// ================================================

void WEC65() // WEC65
{
  Push(pp_WEC51); // WEC51
  _099(); // 099
  Push(pp_WEC55); // WEC55
  _099(); // 099
  Push(pp_WEC59); // WEC59
  _099(); // 099
  Push(pp_WEC5D); // WEC5D
  _099(); // 099
  Push(pp_WEC61); // WEC61
  _099(); // 099
}


// ================================================
// 0xec7b: WORD 'WEC7D' codep=0x1d29 parp=0xec7d
// ================================================
// 0xec7d: db 0x56 0x3a 0x20 0x66 'V: f'

// ================================================
// 0xec81: WORD 'WEC83' codep=0x224c parp=0xec83 params=0 returns=1
// ================================================
// orphan

void WEC83() // WEC83
{
  Push(pp_WEC7D); // WEC7D
  _2_at_(); // 2@
  Push(0x0fa0); Push(0x0000);
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
}


// ================================================
// 0xec97: WORD 'WEC99' codep=0x224c parp=0xec99 params=1 returns=1
// ================================================

void WEC99() // WEC99
{
  Push((Pop() >> 1) * 2); //  2/ 2*
}


// ================================================
// 0xec9f: WORD 'WECA1' codep=0x224c parp=0xeca1 params=0 returns=1
// ================================================

void WECA1() // WECA1
{
  Push(0);
  Push(0x00a0);
  RRND(); // RRND
  WEC99(); // WEC99
}


// ================================================
// 0xecad: WORD 'WECAF' codep=0x224c parp=0xecaf params=0 returns=1
// ================================================

void WECAF() // WECAF
{
  Push(0);
  Push(0x00c9);
  RRND(); // RRND
  WEC99(); // WEC99
}


// ================================================
// 0xecbb: WORD 'WECBD' codep=0x224c parp=0xecbd
// ================================================

void WECBD() // WECBD
{
  WECA1(); // WECA1
  Push(0x008c);
  MIN(); // MIN
  WECAF(); // WECAF
  Push(0x0014);
  MAX(); // MAX
  _2DUP(); // 2DUP
  Push(2);
  Push(0x0015);
  RRND(); // RRND
  WEC99(); // WEC99
  _dash_(); // -
  SWAP(); // SWAP
  Push(2);
  Push(0x0015);
  RRND(); // RRND
  WEC99(); // WEC99
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  WECA1(); // WECA1
  WECAF(); // WECAF
  LCOPYBL(); // LCOPYBL
}


// ================================================
// 0xecf3: WORD 'WECF5' codep=0x224c parp=0xecf5
// ================================================

void WECF5() // WECF5
{
  Push(0x03e8);
  TONE(); // TONE
  TIME(); // TIME
  Push(Read16(Pop() + 2)); //  2+ @
  Push(pp_SEED_3); // SEED_3
  Store_2(); // !_2
  GetColor(YELLOW);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("GAME OVER - NO FUEL");
  DrawTTY(); // .TTY
  Push(0x1388);
  MS(); // MS
  SET_STR_AS_PARAM("WARP ENGINES ABOUT TO... ");
  DrawTTY(); // .TTY
  BEEPON_2(); // BEEPON_2
  Push(0x1388);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
  do
  {
    WECBD(); // WECBD
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
  } while(Pop() == 0);
  BYE_2(); // BYE_2
}


// ================================================
// 0xed5b: WORD 'WED5D' codep=0x1d29 parp=0xed5d
// ================================================
// 0xed5d: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4f 0x53 0x48 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x45 0x59 0x45 0x20 0x20 0x20 0x20 0x20 0x4f 0x56 0x52 0x41 0x28 0x72 0x66 0x67 0x31 0x34 0x61 0x70 0x72 0x38 0x38 0x29 ':  ALLOT OSH                      \ EYE     OVRA(rfg14apr88)'

// ================================================
// 0xed99: WORD 'WED9B' codep=0x1d29 parp=0xed9b
// ================================================
// 0xed9b: db 0x3a 0x20 ': '

// ================================================
// 0xed9d: WORD 'WED9F' codep=0x1d29 parp=0xed9f
// ================================================
// 0xed9f: db 0x3a 0x20 ': '

// ================================================
// 0xeda1: WORD 'WEDA3' codep=0x224c parp=0xeda3 params=2 returns=1
// ================================================

void WEDA3() // WEDA3
{
  Push(Pop() * Pop()); // *
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Pop() * 2 - 1); //  2* 1-
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xedb3: WORD 'WEDB5' codep=0x224c parp=0xedb5 params=1 returns=0
// ================================================

void WEDB5() // WEDB5
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x000a);
  Push(Read16(pp_WED9F)); // WED9F @
  RRND(); // RRND
  Push(a + 1); // I 1+
  C_ex__2(); // C!_2
  Push(1);
  Push(a); // I
  C_ex__2(); // C!_2
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  Push(0x0048);
  WEDA3(); // WEDA3
  Push(0xffdc);
  Push(0x0024);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffdc);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(a + 2); // I 2+
  Store_2(); // !_2
  Push(0x0078);
  WEDA3(); // WEDA3
  Push(0xffc4);
  Push(0x003c);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffc4);
  MAX(); // MAX
  Push(0x003b);
  MIN(); // MIN
  Push(a + 4); // R> 4 +
  Store_2(); // !_2
}


// ================================================
// 0xee23: WORD 'WEE25' codep=0x224c parp=0xee25 params=0 returns=0
// ================================================

void WEE25() // WEE25
{
  unsigned short int i, imax;
  Push(0x003c);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_WED5D + i); // WED5D I +
    WEDB5(); // WEDB5
    Push(6);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xee3d: WORD 'WEE3F' codep=0x224c parp=0xee3f params=1 returns=2
// ================================================

void WEE3F() // WEE3F
{
  unsigned short int a;
  Push(Pop() + pp_WED5D); //  WED5D +
  a = Pop(); // >R
  Push(Read16(a + 4)); // I 4 + @
  Push(Read16(a)&0xFF); // I C@
  _slash_(); // /
  Push(Pop() + 0x0024); //  0x0024 +
  Push(0);
  MAX(); // MAX
  Push(0x0047);
  MIN(); // MIN
  Push(Read16(a + 2)); // I 2+ @
  Push(Read16(a)&0xFF); // I C@
  _slash_(); // /
  Push(Pop() + 0x003c); //  0x003c +
  Push(0);
  MAX(); // MAX
  Push(0x0077);
  MIN(); // MIN
  LPLOT(); // LPLOT
  Push(Read16(pp_WED9F) * 0x0064); // WED9F @ 0x0064 *
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x00c8); //  0x00c8 +
  RRND(); // RRND
  TONE(); // TONE
  Push((Read16(a)&0xFF) + 1); // I C@ 1+
  Push(Read16(regsp)); // DUP
  Push(Pop()==(Read16(a + 1)&0xFF)?1:0); //  I 1+ C@ =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(a); // R>
    WEDB5(); // WEDB5
    return;
  }
  Push(a); // R>
  C_ex__2(); // C!_2
}


// ================================================
// 0xeebb: WORD 'WEEBD' codep=0x224c parp=0xeebd
// ================================================

void WEEBD() // WEEBD
{
  unsigned short int i, imax;
  Push(!Read16(pp_WED9B)); // WED9B @ NOT
  if (Pop() != 0)
  {
    DARK(); // DARK
  }
  RNDCLR(); // RNDCLR
  Push(0x003c);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WEE3F(); // WEE3F
    Push(6);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xeee1: WORD 'WEEE3' codep=0x224c parp=0xeee3
// ================================================

void WEEE3() // WEEE3
{
  _gt_MAINVI(); // >MAINVI
  Push(0x0014);
  Push(pp_WED9F); // WED9F
  Store_2(); // !_2
  Push(0);
  Push(3);
  RRND(); // RRND
  Push(pp_WED9B); // WED9B
  Store_2(); // !_2
  WEEBD(); // WEEBD
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xeefd: WORD 'WEEFF' codep=0x224c parp=0xeeff
// ================================================

void WEEFF() // WEEFF
{
  Push(Read16(pp_COLOR)); // COLOR @
  WEEE3(); // WEEE3
  StoreCOLOR(); // !COLOR
  DrawTTY(); // .TTY
}


// ================================================
// 0xef0b: WORD 'WEF0D' codep=0x224c parp=0xef0d params=0 returns=1
// ================================================

void WEF0D() // WEF0D
{
  Push(Read16(pp__dash_END)); // -END @
}


// ================================================
// 0xef13: WORD 'WEF15' codep=0x224c parp=0xef15 params=1 returns=0
// ================================================

void WEF15() // WEF15
{
  Push(pp__dash_END); // -END
  Store_2(); // !_2
}


// ================================================
// 0xef1b: WORD 'WEF1D' codep=0x224c parp=0xef1d params=0 returns=2
// ================================================

void WEF1D() // WEF1D
{
  WEF0D(); // WEF0D
  Push(0);
}


// ================================================
// 0xef23: WORD 'WEF25' codep=0x224c parp=0xef25
// ================================================

void WEF25() // WEF25
{
  unsigned short int a;
  WEF0D(); // WEF0D
  a = Pop(); // >R
  WEF15(); // WEF15
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  WEF1D(); // WEF1D
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  WEF1D(); // WEF1D
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  WEF0D(); // WEF0D
  Push(0x000a);
  _slash_(); // /
  WEF15(); // WEF15
  WEBDF(); // WEBDF
  WEF0D(); // WEF0D
  Push(0x65e1+WEBC6.offset); // WEBC6<IFIELD>
  _plus__ex__2(); // +!_2
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(6);
  IFIND(); // IFIND
  Pop(); // DROP
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  WEF0D(); // WEF0D
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  Push(4);
  _star_CLOSE(); // *CLOSE
  Push(a); // R>
  WEF15(); // WEF15
}


// ================================================
// 0xef91: WORD 'WEF93' codep=0x224c parp=0xef93
// ================================================

void WEF93() // WEF93
{
  SET_STR_AS_PARAM("COMMANDER, WE ARE ONCE AGAIN IN OUR");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("OWN TIME PERIOD.");
  DrawTTY(); // .TTY
}


// ================================================
// 0xefd2: WORD 'WEFD4' codep=0x224c parp=0xefd4
// ================================================

void WEFD4() // WEFD4
{
  SET_STR_AS_PARAM("COMMANDER, FROM OUR ANALYSIS OF THE");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("LOCAL STELLAR FORMATIONS, WE HAVE");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("DETERMINED THAT WE HAVE SOMEHOW");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("TRAVELLED BACK IN TIME.");
  DrawTTY(); // .TTY
  WEBDF(); // WEBDF
  Push(0x65e1+WEBCB.offset); // WEBCB<IFIELD>
  WEBD5(); // WEBD5
  Push(Pop() * 0x01f4); //  0x01f4 *
  Push(0x65e1+WEBD0.offset); // WEBD0<IFIELD>
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf076: WORD 'WF078' codep=0x224c parp=0xf078 params=0 returns=1
// ================================================

void WF078() // WF078
{
  WEBDF(); // WEBDF
  Push(0x09c4);
  Push(!Read16(pp_PAST)); // PAST @ NOT
  if (Pop() != 0)
  {
    Push(5);
    _slash_(); // /
  }
  Push(0xc6a5); // '>DAM'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf096: WORD 'WF098' codep=0x224c parp=0xf098
// ================================================

void WF098() // WF098
{
  unsigned short int i, imax;
  Push(0x0020);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    RNDCLR(); // RNDCLR
    BFILL(); // BFILL
    V_gt_DISPL(); // V>DISPL
    i++;
  } while(i<imax); // (LOOP)

  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf0b0: WORD 'WF0B2' codep=0x224c parp=0xf0b2
// ================================================

void WF0B2() // WF0B2
{
  CTINIT(); // CTINIT
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    WEFD4(); // WEFD4
  } else
  {
    WEF93(); // WEF93
  }
  _slash_STARD(); // /STARD
}


// ================================================
// 0xf0c8: WORD 'WF0CA' codep=0x224c parp=0xf0ca
// ================================================

void WF0CA() // WF0CA
{
  unsigned short int i, imax;
  Push(pp_WED9B); // WED9B
  _099(); // 099
  _gt_MAINVI(); // >MAINVI
  BEEPON_2(); // BEEPON_2
  Push(0x001e);
  Push(0x0168);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(6);
    _slash_(); // /
    Push(pp_WED9F); // WED9F
    Store_2(); // !_2
    WEEBD(); // WEEBD
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(0x00fa);
  MS(); // MS
  WF098(); // WF098
  _gt_DISPLA(); // >DISPLA
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf0fc: WORD 'WF0FE' codep=0x224c parp=0xf0fe
// ================================================

void WF0FE() // WF0FE
{
  Push(!Read16(pp_PAST)); // PAST @ NOT
  Push(pp_PAST); // PAST
  Store_2(); // !_2
  INIT_dash_IC(); // INIT-IC
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  Push(2);
  _star_CLOSE(); // *CLOSE
  WF0CA(); // WF0CA
  WF078(); // WF078
  Push(0x1388);
  Push(!Read16(pp_PAST)); // PAST @ NOT
  if (Pop() != 0)
  {
    Push(5);
    _slash_(); // /
  }
  WEF25(); // WEF25
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    WECF5(); // WECF5
  }
  Push(pp_FTRIG); // FTRIG
  ON_2(); // ON_2
  WF0B2(); // WF0B2
}


// ================================================
// 0xf144: WORD 'WF146' codep=0x224c parp=0xf146 params=1 returns=0
// ================================================

void WF146() // WF146
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_gt_(); // 0>
    if (Pop() != 0)
    {
      WF0FE(); // WF0FE
    }
    Push(pp_FTRIG); // FTRIG
    ON_2(); // ON_2
    return;
  }
  Push(pp_WEC61); // WEC61
  _099(); // 099
}


// ================================================
// 0xf162: WORD 'WF164' codep=0x224c parp=0xf164
// ================================================

void WF164() // WF164
{
  XYSCAN(); // XYSCAN
  SWAP(); // SWAP
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xf172: WORD 'WF174' codep=0x2214 parp=0xf174
// ================================================
// 0xf174: dw 0x0040

// ================================================
// 0xf176: WORD 'WF178' codep=0x2214 parp=0xf178
// ================================================
// 0xf178: dw 0x003e

// ================================================
// 0xf17a: WORD 'WF17C' codep=0x2214 parp=0xf17c
// ================================================
// 0xf17c: dw 0x0009

// ================================================
// 0xf17e: WORD 'WF180' codep=0x2214 parp=0xf180
// ================================================
// 0xf180: dw 0x0008

// ================================================
// 0xf182: WORD 'WF184' codep=0x224c parp=0xf184 params=2 returns=0
// ================================================

void WF184() // WF184
{
  _2DUP(); // 2DUP
  Push(Pop() - Read16(cc_WF17C)); //  WF17C -
  SWAP(); // SWAP
  Push(Pop() - Read16(cc_WF180)); //  WF180 -
  SWAP(); // SWAP
  _2SWAP(); // 2SWAP
  Push(Pop() + Read16(cc_WF174)); //  WF174 +
  SWAP(); // SWAP
  Push(Pop() + Read16(cc_WF178)); //  WF178 +
  SWAP(); // SWAP
  StoreVISWIN(); // !VISWIN
}


// ================================================
// 0xf1a4: WORD 'WF1A6' codep=0x224c parp=0xf1a6 params=0 returns=0
// ================================================

void WF1A6() // WF1A6
{
  Push(pp_WEC61); // WEC61
  ON_2(); // ON_2
  Push(pp_WEC5D); // WEC5D
  ON_2(); // ON_2
  Push(pp_FTRIG); // FTRIG
  ON_2(); // ON_2
}


// ================================================
// 0xf1b4: WORD 'WF1B6' codep=0x224c parp=0xf1b6
// ================================================

void WF1B6() // WF1B6
{
  GetColor(YELLOW);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM(" ");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("WARNING        WARNING         WARNING");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM(" ");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("WE ARE PROCEEDING THROUGH THE ANOMALY.");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("PLEASE CONFIRM:");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM(" ");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("      [BACK OUT      GO THROUGH]      ");
  WEEFF(); // WEEFF
}


// ================================================
// 0xf263: WORD 'WF265' codep=0x224c parp=0xf265 params=1 returns=0
// ================================================

void WF265() // WF265
{
  Push(pp_WEC5D); // WEC5D
  ON_2(); // ON_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      BEEP(); // BEEP
      Push(pp_WEC5D); // WEC5D
      _099(); // 099
      WEBE7(); // WEBE7
      if (Pop() != 0)
      {
        WEBFD(); // WEBFD
        WF1A6(); // WF1A6
      }
    } else
    {
      WF1A6(); // WF1A6
    }
    return;
  }
  Push(pp_WEC59); // WEC59
  _099(); // 099
}


// ================================================
// 0xf295: WORD 'WF297' codep=0x224c parp=0xf297 params=0 returns=0
// ================================================

void WF297() // WF297
{
  WEBDF(); // WEBDF
  Push(0xc6a5); // '>DAM'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WEC7D); // WEC7D
  StoreD(); // D!
}


// ================================================
// 0xf2ab: WORD 'WF2AD' codep=0x224c parp=0xf2ad
// ================================================

void WF2AD() // WF2AD
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("IF WE APPLY FULL REVERSE THRUST WE MAY");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("BE ABLE TO BACK OUT. SHALL WE ATTEMPT ");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("TO ESCAPE\?");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("              [NO   YES] ");
  WEEFF(); // WEEFF
}


// ================================================
// 0xf336: WORD 'WF338' codep=0x224c parp=0xf338
// ================================================

void WF338() // WF338
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  SET_STR_AS_PARAM("COMMANDER, THE SHIP'S HULL IS UNDER");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("TERRIFIC PRESSURE AND WE ARE IN DANGER");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("OF SUSTAINING MAJOR DAMAGE. OUR ENERGY");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("STORES ARE ALSO BEING DRAINED AT AN");
  WEEFF(); // WEEFF
  SET_STR_AS_PARAM("ALARMING RATE.");
  WEEFF(); // WEEFF
}


// ================================================
// 0xf3f7: WORD 'WF3F9' codep=0x224c parp=0xf3f9 params=0 returns=0
// ================================================

void WF3F9() // WF3F9
{
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(pp_WEC4B); // WEC4B
  StoreD(); // D!
  Push(pp_WEC7D); // WEC7D
  StoreD(); // D!
}


// ================================================
// 0xf409: WORD 'WF40B' codep=0x224c parp=0xf40b params=3 returns=1
// ================================================

void WF40B() // WF40B
{
  Push(pp_WEC4B); // WEC4B
  _2_at_(); // 2@
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
  OVER(); // OVER
  Push(Read16(Pop())==0?1:0); //  @ 0=
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    OVER(); // OVER
    ON_2(); // ON_2
  }
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf42f: WORD 'WF431' codep=0x224c parp=0xf431 params=0 returns=0
// ================================================

void WF431() // WF431
{
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xf43f: WORD 'WF441' codep=0x224c parp=0xf441
// ================================================

void WF441() // WF441
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
  DARK(); // DARK
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xf45d: WORD 'WF45F' codep=0x224c parp=0xf45f
// ================================================

void WF45F() // WF45F
{
  Push2Words("*EYE");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(5);
  WF431(); // WF431
  Push(Pop() + Pop()); // +
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(5);
  WF431(); // WF431
  Push(Pop() + Pop()); // +
  _2DUP(); // 2DUP
  Push(pp_YABS); // YABS
  Store_2(); // !_2
  Push(pp_XABS); // XABS
  Store_2(); // !_2
  WEBDF(); // WEBDF
  _2DUP(); // 2DUP
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
  CI(); // CI
  IsICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  _2DUP(); // 2DUP
  StoreIY(); // !IY
  StoreIX(); // !IX
  WF184(); // WF184
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf4a3: WORD 'WF4A5' codep=0x224c parp=0xf4a5 params=0 returns=0
// ================================================

void WF4A5() // WF4A5
{
  Push(pp_WEC51); // WEC51
  Push(0x1388); Push(0x0000);
  WF40B(); // WF40B
  if (Pop() != 0)
  {
    WF338(); // WF338
  }
  Push(pp_WEC55); // WEC55
  Push(0x2ee0); Push(0x0000);
  WF40B(); // WF40B
  if (Pop() != 0)
  {
    WF2AD(); // WF2AD
  }
  Push(pp_WEC59); // WEC59
  Push(0x32c8); Push(0x0000);
  WF40B(); // WF40B
  if (Pop() != 0)
  {
    WF164(); // WF164
    WF265(); // WF265
  }
  Push(pp_WEC5D); // WEC5D
  Push(0x36b0); Push(0x0000);
  WF40B(); // WF40B
  if (Pop() != 0)
  {
    WF1B6(); // WF1B6
  }
  Push(pp_WEC61); // WEC61
  Push(0x3a98); Push(0x0000);
  WF40B(); // WF40B
  if (Pop() == 0) return;
  WF164(); // WF164
  WF146(); // WF146
}


// ================================================
// 0xf4fb: WORD 'DO-EYE' codep=0x224c parp=0xf506
// ================================================
// entry

void DO_dash_EYE() // DO-EYE
{
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  WEE25(); // WEE25
  WF3F9(); // WF3F9
  WEC65(); // WEC65
  Push(0xc1b8); // '(ROL'
  MODULE(); // MODULE
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); Pop(); // 2DROP
    Push(pp_FTRIG); // FTRIG
    _099(); // 099
    WEEE3(); // WEEE3
    WEC83(); // WEC83
    if (Pop() != 0)
    {
      Push(0x0014);
      WF297(); // WF297
      Push(0x0032);
      WEF25(); // WEF25
    }
    WF4A5(); // WF4A5
    Push(pp_LKEY); // LKEY
    _099(); // 099
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  WEBDF(); // WEBDF
  WF45F(); // WF45F
  WF441(); // WF441
  Push(0xc6ba); // '.AUX'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}

// 0xf552: db 0x45 0x59 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'EYE-VOC_______ '

