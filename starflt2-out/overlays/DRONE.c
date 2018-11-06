// ====== OVERLAY 'DRONE' ======
// store offset = 0xebe0
// overlay size   = 0x0980

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WEBF6  codep:0x7394 parp:0xebf6 size:0x0006 C-string:'WEBF6'
//           WEBFE  codep:0x7394 parp:0xebfe size:0x0006 C-string:'WEBFE'
//           WEC06  codep:0x7394 parp:0xec06 size:0x0006 C-string:'WEC06'
//           WEC0E  codep:0x7394 parp:0xec0e size:0x0006 C-string:'WEC0E'
//           WEC16  codep:0x224c parp:0xec16 size:0x0008 C-string:'WEC16'
//           WEC20  codep:0x1d29 parp:0xec20 size:0x0008 C-string:'WEC20'
//           WEC2A  codep:0x224c parp:0xec2a size:0x0022 C-string:'WEC2A'
//           WEC4E  codep:0x224c parp:0xec4e size:0x0010 C-string:'WEC4E'
//           WEC60  codep:0x224c parp:0xec60 size:0x002e C-string:'WEC60'
//           WEC90  codep:0x224c parp:0xec90 size:0x0010 C-string:'WEC90'
//           WECA2  codep:0x224c parp:0xeca2 size:0x004d C-string:'WECA2'
//           WECF1  codep:0x224c parp:0xecf1 size:0x002c C-string:'WECF1'
//           WED1F  codep:0x224c parp:0xed1f size:0x0010 C-string:'WED1F'
//           WED31  codep:0x224c parp:0xed31 size:0x0032 C-string:'WED31'
//           WED65  codep:0x224c parp:0xed65 size:0x0008 C-string:'WED65'
//           WED6F  codep:0x1d29 parp:0xed6f size:0x0003 C-string:'WED6F'
//           WED74  codep:0x224c parp:0xed74 size:0x0008 C-string:'WED74'
//           WED7E  codep:0x224c parp:0xed7e size:0x0006 C-string:'WED7E'
//           WED86  codep:0x224c parp:0xed86 size:0x0008 C-string:'WED86'
//           WED90  codep:0x224c parp:0xed90 size:0x0012 C-string:'WED90'
//           WEDA4  codep:0x224c parp:0xeda4 size:0x0012 C-string:'WEDA4'
//           WEDB8  codep:0x1d29 parp:0xedb8 size:0x0003 C-string:'WEDB8'
//           WEDBD  codep:0x224c parp:0xedbd size:0x0008 C-string:'WEDBD'
//           WEDC7  codep:0x224c parp:0xedc7 size:0x0006 C-string:'WEDC7'
//           WEDCF  codep:0x224c parp:0xedcf size:0x0012 C-string:'WEDCF'
//           WEDE3  codep:0x224c parp:0xede3 size:0x0012 C-string:'WEDE3'
//           WEDF7  codep:0x224c parp:0xedf7 size:0x0020 C-string:'WEDF7'
//           WEE19  codep:0x224c parp:0xee19 size:0x000a C-string:'WEE19'
//           WEE25  codep:0x224c parp:0xee25 size:0x0008 C-string:'WEE25'
//           WEE2F  codep:0x224c parp:0xee2f size:0x002a C-string:'WEE2F'
//           WEE5B  codep:0x224c parp:0xee5b size:0x0016 C-string:'WEE5B'
//           WEE73  codep:0x224c parp:0xee73 size:0x001c C-string:'WEE73'
//           WEE91  codep:0x224c parp:0xee91 size:0x000e C-string:'WEE91'
//           WEEA1  codep:0x224c parp:0xeea1 size:0x002a C-string:'WEEA1'
//           WEECD  codep:0x224c parp:0xeecd size:0x000a C-string:'WEECD'
//           WEED9  codep:0x224c parp:0xeed9 size:0x000a C-string:'WEED9'
//           WEEE5  codep:0x224c parp:0xeee5 size:0x0012 C-string:'WEEE5'
//           WEEF9  codep:0x224c parp:0xeef9 size:0x001a C-string:'WEEF9'
//           WEF15  codep:0x224c parp:0xef15 size:0x0016 C-string:'WEF15'
//           WEF2D  codep:0x224c parp:0xef2d size:0x0020 C-string:'WEF2D'
//         TD-SCRO  codep:0x4b3b parp:0xef59 size:0x000c C-string:'TD_dash_SCRO'
//           WEF67  codep:0x224c parp:0xef67 size:0x001c C-string:'WEF67'
//           WEF85  codep:0x224c parp:0xef85 size:0x0026 C-string:'WEF85'
//           WEFAD  codep:0x224c parp:0xefad size:0x000c C-string:'WEFAD'
//           WEFBB  codep:0x224c parp:0xefbb size:0x000c C-string:'WEFBB'
//           WEFC9  codep:0x224c parp:0xefc9 size:0x000c C-string:'WEFC9'
//           WEFD7  codep:0x224c parp:0xefd7 size:0x000c C-string:'WEFD7'
//            ACT#  codep:0x1d29 parp:0xefec size:0x0002 C-string:'ACT_n_'
//           WEFF0  codep:0x224c parp:0xeff0 size:0x000a C-string:'WEFF0'
//           WEFFC  codep:0x224c parp:0xeffc size:0x001a C-string:'WEFFC'
//           WF018  codep:0x224c parp:0xf018 size:0x0010 C-string:'WF018'
//           WF02A  codep:0x224c parp:0xf02a size:0x0010 C-string:'WF02A'
//           WF03C  codep:0x224c parp:0xf03c size:0x000c C-string:'WF03C'
//           WF04A  codep:0x224c parp:0xf04a size:0x0016 C-string:'WF04A'
//           WF062  codep:0x224c parp:0xf062 size:0x0016 C-string:'WF062'
//         ACT-SCR  codep:0x4b3b parp:0xf084 size:0x000c C-string:'ACT_dash_SCR'
//           WF092  codep:0x224c parp:0xf092 size:0x0018 C-string:'WF092'
//         ACTION?  codep:0x224c parp:0xf0b6 size:0x0006 C-string:'ACTION_ask_'
//           WF0BE  codep:0x224c parp:0xf0be size:0x0004 C-string:'WF0BE'
//           WF0C4  codep:0x224c parp:0xf0c4 size:0x0004 C-string:'WF0C4'
//         #>ACTIO  codep:0x4b3b parp:0xf0d4 size:0x0010 C-string:'_n__gt_ACTIO'
//           WF0E6  codep:0x1d29 parp:0xf0e6 size:0x0002 C-string:'WF0E6'
//           WF0EA  codep:0x224c parp:0xf0ea size:0x0006 C-string:'WF0EA'
//           WF0F2  codep:0x224c parp:0xf0f2 size:0x000a C-string:'WF0F2'
//           WF0FE  codep:0x224c parp:0xf0fe size:0x000a C-string:'WF0FE'
//           WF10A  codep:0x224c parp:0xf10a size:0x000a C-string:'WF10A'
//           WF116  codep:0x224c parp:0xf116 size:0x000a C-string:'WF116'
//           WF122  codep:0x224c parp:0xf122 size:0x000a C-string:'WF122'
//           WF12E  codep:0x224c parp:0xf12e size:0x000a C-string:'WF12E'
//           WF13A  codep:0x1d29 parp:0xf13a size:0x0002 C-string:'WF13A'
//           WF13E  codep:0x224c parp:0xf13e size:0x0011 C-string:'WF13E'
//         10!TIME  codep:0xf144 parp:0xf15b size:0x0001 C-string:'_10_ex_TIME'
//         20!TIME  codep:0xf144 parp:0xf168 size:0x0001 C-string:'_20_ex_TIME'
//         30!TIME  codep:0xf144 parp:0xf175 size:0x0001 C-string:'_30_ex_TIME'
//          5!TIME  codep:0xf144 parp:0xf181 size:0x0001 C-string:'_5_ex_TIME'
//          7!TIME  codep:0xf144 parp:0xf18d size:0x0001 C-string:'_7_ex_TIME'
//         13!TIME  codep:0xf144 parp:0xf19a size:0x0001 C-string:'_13_ex_TIME'
//          3!TIME  codep:0xf144 parp:0xf1a6 size:0x0001 C-string:'_3_ex_TIME'
//           WF1A9  codep:0x224c parp:0xf1a9 size:0x0028 C-string:'WF1A9'
//         (TIMER)  codep:0xaccc parp:0xf1dd size:0x0044 C-string:'_ro_TIMER_rc_'
//           WF223  codep:0x224c parp:0xf223 size:0x0012 C-string:'WF223'
//           TIMES  codep:0x1d29 parp:0xf23f size:0x0030 C-string:'TIMES'
//           WF271  codep:0x224c parp:0xf271 size:0x000a C-string:'WF271'
//           WF27D  codep:0x224c parp:0xf27d size:0x000a C-string:'WF27D'
//           WF289  codep:0x224c parp:0xf289 size:0x0040 C-string:'WF289'
//           WF2CB  codep:0x224c parp:0xf2cb size:0x0020 C-string:'WF2CB'
//           WF2ED  codep:0x224c parp:0xf2ed size:0x002e C-string:'WF2ED'
//           WF31D  codep:0x224c parp:0xf31d size:0x001e C-string:'WF31D'
//           WF33D  codep:0x224c parp:0xf33d size:0x0012 C-string:'WF33D'
//           WF351  codep:0x224c parp:0xf351 size:0x0032 C-string:'WF351'
//           WF385  codep:0x224c parp:0xf385 size:0x0018 C-string:'WF385'
//           WF39F  codep:0x224c parp:0xf39f size:0x0008 C-string:'WF39F'
//           WF3A9  codep:0x224c parp:0xf3a9 size:0x001e C-string:'WF3A9'
//           WF3C9  codep:0x224c parp:0xf3c9 size:0x002e C-string:'WF3C9'
//           WF3F9  codep:0x224c parp:0xf3f9 size:0x0074 C-string:'WF3F9'
//           WF46F  codep:0x224c parp:0xf46f size:0x0020 C-string:'WF46F'
//          RECALL  codep:0x224c parp:0xf49a size:0x002c C-string:'RECALL'
//           DRONE  codep:0x224c parp:0xf4d0 size:0x0000 C-string:'DRONE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp__ro_ELIST_rc_; // (ELIST)
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_ETIME; // ETIME
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp__n_ETIME; // #ETIME
extern const unsigned short int pp_NOF; // NOF
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType TEXT_dash_CO; // TEXT-CO
extern IFieldType TEXT_dash_TE; // TEXT-TE
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void M_slash_(); // M/
void MAX(); // MAX
void MIN(); // MIN
void C_co_(); // C,
void BEEP(); // BEEP
void MS(); // MS
void NOP(); // NOP
void D_dash_(); // D-
void WITHIN(); // WITHIN
void KEY_2(); // KEY_2
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void ACELLAD(); // ACELLAD
void A_at_(); // A@
void SETLARR(); // SETLARR
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void CDROP(); // CDROP
void CI_i_(); // CI'
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void _star_CREATE(); // *CREATE
void SAVE_dash_OV(); // SAVE-OV
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void DrawBACKGR(); // .BACKGR
void DrawLOCAL_dash_(); // .LOCAL-
void _plus_ICON_2(); // +ICON_2
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void _gt_TVCT(); // >TVCT
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void WLINE_dash_U(); // WLINE-U
void WLINE_dash_D(); // WLINE-D
void GCR(); // GCR
void _gt_BOTT(); // >BOTT
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void CURSORS(); // CURSORS
void _do__ex_(); // $!
void DISTRAC(); // DISTRAC
void _2_at_(); // 2@
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _st_(); // <
void TIME(); // TIME
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void _st__ex__gt_(); // <!>
void CI(); // CI
void BLT(); // BLT
void WLD_gt_SCR(); // WLD>SCR
void _10_ex_TIME(); // 10!TIME
void _20_ex_TIME(); // 20!TIME
void _30_ex_TIME(); // 30!TIME
void _5_ex_TIME(); // 5!TIME
void _7_ex_TIME(); // 7!TIME
void _13_ex_TIME(); // 13!TIME
void _3_ex_TIME(); // 3!TIME


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEC20 = 0xec20; // WEC20 size: 8
// {0x00, 0x00, 0x7e, 0xff, 0x5a, 0x3c, 0x42, 0xe7}

const unsigned short int pp_WED6F = 0xed6f; // WED6F size: 3
// {0x3a, 0x20, 0x05}

const unsigned short int pp_WEDB8 = 0xedb8; // WEDB8 size: 3
// {0x3a, 0x20, 0x05}

const unsigned short int pp_ACT_n_ = 0xefec; // ACT# size: 2
// {0x01, 0x00}

const unsigned short int pp_WF0E6 = 0xf0e6; // WF0E6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF13A = 0xf13a; // WF13A size: 2
// {0x3a, 0x20}

const unsigned short int pp_TIMES = 0xf23f; // TIMES size: 48
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4e, 0x54, 0x53, 0x20, 0x01, 0x00, 0x00, 0x1a, 0x06, 0x00, 0x00, 0x33, 0x07, 0x00, 0x00, 0x64, 0x08, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x1f, 0x02, 0x00, 0x00, 0x2e, 0x03, 0x00, 0x00, 0x3d, 0x04, 0x00, 0x00, 0x64, 0x05, 0x00, 0x00, 0x10, 0x06}




// 0xebf2: db 0x98 0x00 '  '

// ================================================
// 0xebf4: WORD 'WEBF6' codep=0x7394 parp=0xebf6
// ================================================
LoadDataType WEBF6 = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xebfc: WORD 'WEBFE' codep=0x7394 parp=0xebfe
// ================================================
LoadDataType WEBFE = {PLANETIDX, 0x0d, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec04: WORD 'WEC06' codep=0x7394 parp=0xec06
// ================================================
LoadDataType WEC06 = {PLANETIDX, 0x0e, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec0c: WORD 'WEC0E' codep=0x7394 parp=0xec0e
// ================================================
LoadDataType WEC0E = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec14: WORD 'WEC16' codep=0x224c parp=0xec16 params=0 returns=2
// ================================================

void WEC16() // WEC16
{
  Push(0x0018);
  Push(1);
}


// ================================================
// 0xec1e: WORD 'WEC20' codep=0x1d29 parp=0xec20
// ================================================
// 0xec20: db 0x00 0x00 0x7e 0xff 0x5a 0x3c 0x42 0xe7 '  ~ Z<B '

// ================================================
// 0xec28: WORD 'WEC2A' codep=0x224c parp=0xec2a
// ================================================

void WEC2A() // WEC2A
{
  Push(8);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(8);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  Push(pp_WEC20); // WEC20
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _st__ex__gt_(); // <!>
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xec4c: WORD 'WEC4E' codep=0x224c parp=0xec4e
// ================================================

void WEC4E() // WEC4E
{
  _gt_MAINVI(); // >MAINVI
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  DrawBACKGR(); // .BACKGR
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xec5e: WORD 'WEC60' codep=0x224c parp=0xec60
// ================================================

void WEC60() // WEC60
{
  _gt_MAINVI(); // >MAINVI
  DrawBACKGR(); // .BACKGR
  WEC2A(); // WEC2A
  Push(Read16(pp_YABS)); // YABS @
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(Read16(pp_XABS) - 1); // XABS @ 1-
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  WLD_gt_SCR(); // WLD>SCR
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  BLT(); // BLT
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xec8e: WORD 'WEC90' codep=0x224c parp=0xec90 params=0 returns=1
// ================================================

void WEC90() // WEC90
{
  Push(1);
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xeca0: WORD 'WECA2' codep=0x224c parp=0xeca2
// ================================================

void WECA2() // WECA2
{
  unsigned short int i, imax;
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("(F2) OR LAUNCH TO RECALL DRONE");
  DrawTTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  WEC90(); // WEC90
  WEC90(); // WEC90
  Push(7);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    OVER(); // OVER
    Push(Pop() * Pop()); // *
    Push(i); // I
    OVER(); // OVER
    Push(Pop() * Pop()); // *
    WEC60(); // WEC60
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xecef: WORD 'WECF1' codep=0x224c parp=0xecf1 params=0 returns=0
// ================================================

void WECF1() // WECF1
{
  unsigned short int i, imax;
  Push(Read16(pp_CONTEXT_3)==0?1:0); // CONTEXT_3 @ 0=
  if (Pop() == 0) return;
  WEC90(); // WEC90
  WEC90(); // WEC90
  Push(0);
  Push(5);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    OVER(); // OVER
    Push(Pop() * Pop()); // *
    Push(i); // I
    OVER(); // OVER
    Push(Pop() * Pop()); // *
    WEC60(); // WEC60
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xed1d: WORD 'WED1F' codep=0x224c parp=0xed1f params=2 returns=2
// ================================================

void WED1F() // WED1F
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
// 0xed2f: WORD 'WED31' codep=0x224c parp=0xed31
// ================================================

void WED31() // WED31
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(3);
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  Push(7);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(0x0099);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(1);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  StoreCRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF_2(); // OFF_2
}


// ================================================
// 0xed63: WORD 'WED65' codep=0x224c parp=0xed65
// ================================================

void WED65() // WED65
{
  Push(Read16(pp_WTOP)); // WTOP @
  WED31(); // WED31
}


// ================================================
// 0xed6d: WORD 'WED6F' codep=0x1d29 parp=0xed6f
// ================================================
// 0xed6f: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xed72: WORD 'WED74' codep=0x224c parp=0xed74 params=0 returns=0
// ================================================

void WED74() // WED74
{
  CI(); // CI
  Push(pp_WED6F); // WED6F
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xed7c: WORD 'WED7E' codep=0x224c parp=0xed7e params=0 returns=2
// ================================================

void WED7E() // WED7E
{
  Push(pp_WED6F); // WED6F
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xed84: WORD 'WED86' codep=0x224c parp=0xed86 params=0 returns=0
// ================================================

void WED86() // WED86
{
  Push(pp__ro_ELIST_rc_); // (ELIST)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
}


// ================================================
// 0xed8e: WORD 'WED90' codep=0x224c parp=0xed90 params=0 returns=0
// ================================================

void WED90() // WED90
{
  WED86(); // WED86
  CDROP(); // CDROP
  WED7E(); // WED7E
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  WED74(); // WED74
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeda2: WORD 'WEDA4' codep=0x224c parp=0xeda4 params=0 returns=0
// ================================================

void WEDA4() // WEDA4
{
  WED86(); // WED86
  CDROP(); // CDROP
  WED7E(); // WED7E
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  WED74(); // WED74
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xedb6: WORD 'WEDB8' codep=0x1d29 parp=0xedb8
// ================================================
// 0xedb8: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xedbb: WORD 'WEDBD' codep=0x224c parp=0xedbd params=0 returns=0
// ================================================

void WEDBD() // WEDBD
{
  CI(); // CI
  Push(pp_WEDB8); // WEDB8
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xedc5: WORD 'WEDC7' codep=0x224c parp=0xedc7 params=0 returns=2
// ================================================

void WEDC7() // WEDC7
{
  Push(pp_WEDB8); // WEDB8
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xedcd: WORD 'WEDCF' codep=0x224c parp=0xedcf params=0 returns=0
// ================================================

void WEDCF() // WEDCF
{
  WED86(); // WED86
  CDROP(); // CDROP
  WEDC7(); // WEDC7
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  WEDBD(); // WEDBD
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xede1: WORD 'WEDE3' codep=0x224c parp=0xede3 params=0 returns=0
// ================================================

void WEDE3() // WEDE3
{
  WED86(); // WED86
  CDROP(); // CDROP
  WEDC7(); // WEDC7
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  WEDBD(); // WEDBD
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xedf5: WORD 'WEDF7' codep=0x224c parp=0xedf7
// ================================================

void WEDF7() // WEDF7
{
  Push(Read16(0x65e1+TEXT_dash_CO.offset)); // TEXT-CO<IFIELD> @
  if (Pop() != 0)
  {
    GetColor(WHITE);
  } else
  {
    IsCGA(); // ?CGA
    if (Pop() != 0)
    {
      GetColor(RED);
    } else
    {
      GetColor(GREY1);
    }
  }
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee17: WORD 'WEE19' codep=0x224c parp=0xee19 params=0 returns=0
// ================================================

void WEE19() // WEE19
{
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xee23: WORD 'WEE25' codep=0x224c parp=0xee25
// ================================================

void WEE25() // WEE25
{
  WEDF7(); // WEDF7
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  _do__dot_(); // $.
}


// ================================================
// 0xee2d: WORD 'WEE2F' codep=0x224c parp=0xee2f
// ================================================

void WEE2F() // WEE2F
{
  unsigned short int i, imax;
  WEE19(); // WEE19
  Push(Read16(pp_WLINES)); // WLINES @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push((Read16(pp_WTOP) - 2) - i * 7); // WTOP @ 2 - I 7 * -
    POS_dot_(); // POS.
    WEE25(); // WEE25
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xee59: WORD 'WEE5B' codep=0x224c parp=0xee5b
// ================================================

void WEE5B() // WEE5B
{
  WED86(); // WED86
  WED74(); // WED74
  WEE2F(); // WEE2F
  IPREV(); // IPREV
  WEDBD(); // WEDBD
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(2);
  _star_CLOSE(); // *CLOSE
  WED86(); // WED86
}


// ================================================
// 0xee71: WORD 'WEE73' codep=0x224c parp=0xee73 params=0 returns=0
// ================================================

void WEE73() // WEE73
{
  WED86(); // WED86
  while(1)
  {
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    Push(0);
    Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
    Store_2(); // !_2
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee8f: WORD 'WEE91' codep=0x224c parp=0xee91 params=0 returns=0
// ================================================

void WEE91() // WEE91
{
  WED86(); // WED86
  Push(0);
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  Store_2(); // !_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee9f: WORD 'WEEA1' codep=0x224c parp=0xeea1 params=0 returns=0
// ================================================

void WEEA1() // WEEA1
{
  IsTRIG(); // ?TRIG
  if (Pop() == 0) return;
  WED7E(); // WED7E
  _gt_C_plus_S(); // >C+S
  Push(!Read16(0x65e1+TEXT_dash_CO.offset)); // TEXT-CO<IFIELD> @ NOT
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  Store_2(); // !_2
  IsFIRST(); // ?FIRST
  if (Pop() != 0)
  {
    WEE73(); // WEE73
  } else
  {
    WEE91(); // WEE91
  }
  WEE2F(); // WEE2F
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeecb: WORD 'WEECD' codep=0x224c parp=0xeecd params=0 returns=2
// ================================================

void WEECD() // WEECD
{
  Push(0x6813); Push(0x0002);
  WED1F(); // WED1F
}


// ================================================
// 0xeed7: WORD 'WEED9' codep=0x224c parp=0xeed9 params=0 returns=2
// ================================================

void WEED9() // WEED9
{
  Push(0x6830); Push(0x0002);
  WED1F(); // WED1F
}


// ================================================
// 0xeee3: WORD 'WEEE5' codep=0x224c parp=0xeee5 params=0 returns=0
// ================================================

void WEEE5() // WEEE5
{
  _gt_BOTT(); // >BOTT
  WEED9(); // WEED9
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(8);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  WEECD(); // WEECD
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xeef7: WORD 'WEEF9' codep=0x224c parp=0xeef9
// ================================================

void WEEF9() // WEEF9
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  WEEE5(); // WEEE5
  Push(-1);
  Push(pp_WLINES); // WLINES
  _plus__ex__2(); // +!_2
  Push(7);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
  CTERASE(); // CTERASE
  WEE5B(); // WEE5B
}


// ================================================
// 0xef13: WORD 'WEF15' codep=0x224c parp=0xef15
// ================================================

void WEF15() // WEF15
{
  CLICK(); // CLICK
  WED90(); // WED90
  WEDCF(); // WEDCF
  WEDF7(); // WEDF7
  WEDC7(); // WEDC7
  _gt_C_plus_S(); // >C+S
  WEDF7(); // WEDF7
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  WLINE_dash_U(); // WLINE-U
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef2b: WORD 'WEF2D' codep=0x224c parp=0xef2d
// ================================================

void WEF2D() // WEF2D
{
  CLICK(); // CLICK
  WEDA4(); // WEDA4
  WEDE3(); // WEDE3
  Push(-2);
  Push(pp_WTOP); // WTOP
  _plus__ex__2(); // +!_2
  WED7E(); // WED7E
  _gt_C_plus_S(); // >C+S
  WEDF7(); // WEDF7
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  WLINE_dash_D(); // WLINE-D
  ICLOSE(); // ICLOSE
  Push(2);
  Push(pp_WTOP); // WTOP
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xef4d: WORD 'TD-SCRO' codep=0x4b3b parp=0xef59
// ================================================

void TD_dash_SCRO() // TD-SCRO
{
  switch(Pop()) // TD-SCRO
  {
  case 65535:
    WEF2D(); // WEF2D
    break;
  case 1:
    WEF15(); // WEF15
    break;
  default:
    WEEA1(); // WEEA1
    break;

  }
}

// ================================================
// 0xef65: WORD 'WEF67' codep=0x224c parp=0xef67
// ================================================

void WEF67() // WEF67
{
  do
  {
    XYSCAN(); // XYSCAN
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      TD_dash_SCRO(); // TD-SCRO case
    } else
    {
      Pop(); // DROP
    }
    Push(Read16(pp_FQUIT)); // FQUIT @
  } while(Pop() == 0);
  Push(0);
}


// ================================================
// 0xef83: WORD 'WEF85' codep=0x224c parp=0xef85
// ================================================

void WEF85() // WEF85
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  WEED9(); // WEED9
  DrawTTY(); // .TTY
  Push(0x684f); Push(0x0002);
  WED1F(); // WED1F
  DrawTTY(); // .TTY
  WEECD(); // WEECD
  DrawTTY(); // .TTY
  Push(0x6881); Push(0x0002);
  WED1F(); // WED1F
  DrawTTY(); // .TTY
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xefab: WORD 'WEFAD' codep=0x224c parp=0xefad
// ================================================

void WEFAD() // WEFAD
{
  WEF85(); // WEF85
  WEEF9(); // WEEF9
  WEF67(); // WEF67
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xefb9: WORD 'WEFBB' codep=0x224c parp=0xefbb params=0 returns=0
// ================================================

void WEFBB() // WEFBB
{
  Push(0x68ac); Push(0x0002);
  WED1F(); // WED1F
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xefc7: WORD 'WEFC9' codep=0x224c parp=0xefc9 params=0 returns=0
// ================================================

void WEFC9() // WEFC9
{
  Push(0x68df); Push(0x0002);
  WED1F(); // WED1F
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xefd5: WORD 'WEFD7' codep=0x224c parp=0xefd7 params=0 returns=0
// ================================================

void WEFD7() // WEFD7
{
  Push(0x690e); Push(0x0002);
  WED1F(); // WED1F
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xefe3: WORD 'ACT#' codep=0x1d29 parp=0xefec
// ================================================
// 0xefec: db 0x01 0x00 '  '

// ================================================
// 0xefee: WORD 'WEFF0' codep=0x224c parp=0xeff0 params=0 returns=0
// ================================================

void WEFF0() // WEFF0
{
  GCR(); // GCR
  Push(1);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xeffa: WORD 'WEFFC' codep=0x224c parp=0xeffc
// ================================================

void WEFFC() // WEFFC
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  WEFBB(); // WEFBB
  WEFF0(); // WEFF0
  WEFC9(); // WEFC9
  WEFF0(); // WEFF0
  WEFD7(); // WEFD7
  WED65(); // WED65
  Push(1);
  Push(pp_ACT_n_); // ACT#
  Store_2(); // !_2
}


// ================================================
// 0xf016: WORD 'WF018' codep=0x224c parp=0xf018 params=0 returns=1
// ================================================
// orphan

void WF018() // WF018
{
  Push(Read16(pp_LKEY)); // LKEY @
  Push(0x013b);
  Push(0x0145);
  WITHIN(); // WITHIN
}


// ================================================
// 0xf028: WORD 'WF02A' codep=0x224c parp=0xf02a params=1 returns=1
// ================================================

void WF02A() // WF02A
{
  Push(Read16(pp_WTOP)); // WTOP @
  SWAP(); // SWAP
  Push((Pop() - 1) * 7); //  1- 7 *
  _dash_(); // -
}


// ================================================
// 0xf03a: WORD 'WF03C' codep=0x224c parp=0xf03c
// ================================================

void WF03C() // WF03C
{
  SWAP(); // SWAP
  WF02A(); // WF02A
  WED31(); // WED31
  WF02A(); // WF02A
  WED31(); // WED31
}


// ================================================
// 0xf048: WORD 'WF04A' codep=0x224c parp=0xf04a
// ================================================

void WF04A() // WF04A
{
  Push(Read16(pp_ACT_n_)); // ACT# @
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1); //  1+
  Push(3);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_ACT_n_); // ACT#
  Store_2(); // !_2
  WF03C(); // WF03C
}


// ================================================
// 0xf060: WORD 'WF062' codep=0x224c parp=0xf062
// ================================================

void WF062() // WF062
{
  Push(Read16(pp_ACT_n_)); // ACT# @
  Push(Read16(regsp)); // DUP
  Push(Pop() - 1); //  1-
  Push(1);
  MAX(); // MAX
  Push(Read16(regsp)); // DUP
  Push(pp_ACT_n_); // ACT#
  Store_2(); // !_2
  WF03C(); // WF03C
}


// ================================================
// 0xf078: WORD 'ACT-SCR' codep=0x4b3b parp=0xf084
// ================================================

void ACT_dash_SCR() // ACT-SCR
{
  switch(Pop()) // ACT-SCR
  {
  case 65535:
    WF04A(); // WF04A
    break;
  case 1:
    WF062(); // WF062
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf090: WORD 'WF092' codep=0x224c parp=0xf092
// ================================================

void WF092() // WF092
{
  do
  {
    XYSCAN(); // XYSCAN
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      ACT_dash_SCR(); // ACT-SCR case
    } else
    {
      Pop(); // DROP
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
}


// ================================================
// 0xf0aa: WORD 'ACTION?' codep=0x224c parp=0xf0b6
// ================================================

void ACTION_ask_() // ACTION?
{
  WEFFC(); // WEFFC
  WF092(); // WF092
}


// ================================================
// 0xf0bc: WORD 'WF0BE' codep=0x224c parp=0xf0be params=0 returns=1
// ================================================

void WF0BE() // WF0BE
{
  Push(1);
}


// ================================================
// 0xf0c2: WORD 'WF0C4' codep=0x224c parp=0xf0c4 params=0 returns=1
// ================================================

void WF0C4() // WF0C4
{
  Push(2);
}


// ================================================
// 0xf0c8: WORD '#>ACTIO' codep=0x4b3b parp=0xf0d4
// ================================================

void _n__gt_ACTIO() // #>ACTIO
{
  switch(Pop()) // #>ACTIO
  {
  case 1:
    WF0BE(); // WF0BE
    break;
  case 2:
    WEFAD(); // WEFAD
    break;
  case 3:
    WF0C4(); // WF0C4
    break;
  default:
    BEEP(); // BEEP
    break;

  }
}

// ================================================
// 0xf0e4: WORD 'WF0E6' codep=0x1d29 parp=0xf0e6
// ================================================
// 0xf0e6: db 0x3a 0x20 ': '

// ================================================
// 0xf0e8: WORD 'WF0EA' codep=0x224c parp=0xf0ea params=0 returns=0
// ================================================

void WF0EA() // WF0EA
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xf0f0: WORD 'WF0F2' codep=0x224c parp=0xf0f2
// ================================================

void WF0F2() // WF0F2
{
  WF0EA(); // WF0EA
  LoadData(WEBF6); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0fc: WORD 'WF0FE' codep=0x224c parp=0xf0fe
// ================================================

void WF0FE() // WF0FE
{
  WF0EA(); // WF0EA
  LoadData(WEBFE); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf108: WORD 'WF10A' codep=0x224c parp=0xf10a
// ================================================

void WF10A() // WF10A
{
  WF0EA(); // WF0EA
  LoadData(WEC06); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf114: WORD 'WF116' codep=0x224c parp=0xf116
// ================================================

void WF116() // WF116
{
  Push(Read16(pp_WF0E6)); // WF0E6 @
  WF0F2(); // WF0F2
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf120: WORD 'WF122' codep=0x224c parp=0xf122
// ================================================

void WF122() // WF122
{
  Push(Read16(pp_WF0E6)); // WF0E6 @
  WF0FE(); // WF0FE
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf12c: WORD 'WF12E' codep=0x224c parp=0xf12e
// ================================================

void WF12E() // WF12E
{
  Push(Read16(pp_WF0E6)); // WF0E6 @
  WF10A(); // WF10A
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf138: WORD 'WF13A' codep=0x1d29 parp=0xf13a
// ================================================
// 0xf13a: db 0x3a 0x20 ': '

// ================================================
// 0xf13c: WORD 'WF13E' codep=0x224c parp=0xf13e
// ================================================
// orphan

void WF13E() // WF13E
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  C_co_(); // C,
  CODE(); // (;CODE) inlined assembler code
// 0xf144: call   1649
  Push(Read16(Pop())&0xFF); //  C@
  Push(pp_WF13A); // WF13A
  Store_2(); // !_2
}


// ================================================
// 0xf14f: WORD '10!TIME' codep=0xf144 parp=0xf15b
// ================================================
// 0xf15b: db 0x0a ' '

// ================================================
// 0xf15c: WORD '20!TIME' codep=0xf144 parp=0xf168
// ================================================
// 0xf168: db 0x14 ' '

// ================================================
// 0xf169: WORD '30!TIME' codep=0xf144 parp=0xf175
// ================================================
// 0xf175: db 0x1e ' '

// ================================================
// 0xf176: WORD '5!TIME' codep=0xf144 parp=0xf181
// ================================================
// 0xf181: db 0x05 ' '

// ================================================
// 0xf182: WORD '7!TIME' codep=0xf144 parp=0xf18d
// ================================================
// 0xf18d: db 0x07 ' '

// ================================================
// 0xf18e: WORD '13!TIME' codep=0xf144 parp=0xf19a
// ================================================
// 0xf19a: db 0x0d ' '

// ================================================
// 0xf19b: WORD '3!TIME' codep=0xf144 parp=0xf1a6
// ================================================
// 0xf1a6: db 0x03 ' '

// ================================================
// 0xf1a7: WORD 'WF1A9' codep=0x224c parp=0xf1a9 params=0 returns=0
// ================================================

void WF1A9() // WF1A9
{
  Push(0);
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(0x0032);
    Push(0x00c9);
    RRND(); // RRND
  } else
  {
    Push(0);
  }
  Push(pp_WF13A); // WF13A
  Store_2(); // !_2
}


// ================================================
// 0xf1d1: WORD '(TIMER)' codep=0xaccc parp=0xf1dd
// ================================================

void _ro_TIMER_rc_() // (TIMER) rule
{
  int b;

  b = 1;
  WF116(); // WF116
  b = b && Pop();
  WF122(); // WF122
  b = b && Pop();
  WF12E(); // WF12E
  b = b && Pop();
  if (b)
  {
    _3_ex_TIME(); // 3!TIME
  }

  b = 1;
  WF116(); // WF116
  b = b && Pop();
  WF122(); // WF122
  b = b && Pop();
  WF12E(); // WF12E
  b = b && !Pop();
  if (b)
  {
    _5_ex_TIME(); // 5!TIME
  }

  b = 1;
  WF116(); // WF116
  b = b && !Pop();
  WF122(); // WF122
  b = b && Pop();
  WF12E(); // WF12E
  b = b && Pop();
  if (b)
  {
    _13_ex_TIME(); // 13!TIME
  }

  b = 1;
  WF116(); // WF116
  b = b && Pop();
  WF122(); // WF122
  b = b && !Pop();
  WF12E(); // WF12E
  b = b && Pop();
  if (b)
  {
    _7_ex_TIME(); // 7!TIME
  }

  b = 1;
  WF116(); // WF116
  b = b && Pop();
  WF122(); // WF122
  b = b && !Pop();
  WF12E(); // WF12E
  b = b && !Pop();
  if (b)
  {
    _10_ex_TIME(); // 10!TIME
  }

  b = 1;
  WF116(); // WF116
  b = b && !Pop();
  WF122(); // WF122
  b = b && Pop();
  WF12E(); // WF12E
  b = b && !Pop();
  if (b)
  {
    _20_ex_TIME(); // 20!TIME
  }

  b = 1;
  WF116(); // WF116
  b = b && !Pop();
  WF122(); // WF122
  b = b && !Pop();
  WF12E(); // WF12E
  b = b && Pop();
  if (b)
  {
    _30_ex_TIME(); // 30!TIME
  }
}


// ================================================
// 0xf221: WORD 'WF223' codep=0x224c parp=0xf223
// ================================================

void WF223() // WF223
{
  Push(0xf1dd); // '(TIMER)'
  DISTRAC(); // DISTRAC
  _ro_TIMER_rc_(); // (TIMER) rule
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  WF1A9(); // WF1A9
}


// ================================================
// 0xf235: WORD 'TIMES' codep=0x1d29 parp=0xf23f
// ================================================
// 0xf23f: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4e 0x54 0x53 0x20 0x01 0x00 0x00 0x1a 0x06 0x00 0x00 0x33 0x07 0x00 0x00 0x64 0x08 0x00 0x00 0x10 0x01 0x00 0x00 0x1f 0x02 0x00 0x00 0x2e 0x03 0x00 0x00 0x3d 0x04 0x00 0x00 0x64 0x05 0x00 0x00 0x10 0x06 ' ALLOT NTS        3   d           .   =   d     '

// ================================================
// 0xf26f: WORD 'WF271' codep=0x224c parp=0xf271 params=2 returns=0
// ================================================

void WF271() // WF271
{
  Push(Pop() * 2 + pp_TIMES); //  2* TIMES +
  Store_2(); // !_2
}


// ================================================
// 0xf27b: WORD 'WF27D' codep=0x224c parp=0xf27d params=1 returns=1
// ================================================

void WF27D() // WF27D
{
  Push(Read16(Pop() * 2 + pp_TIMES)); //  2* TIMES + @
}


// ================================================
// 0xf287: WORD 'WF289' codep=0x224c parp=0xf289 params=0 returns=0
// ================================================

void WF289() // WF289
{
  unsigned short int i, imax, j, jmax;
  Push(pp_TIMES); // TIMES
  WEC16(); // WEC16
  Pop(); // DROP
  Push(Pop() * 2); //  2*
  Push(0);
  FILL_2(); // FILL_2
  WED86(); // WED86
  Push(Read16(0x65e1+TEXT_dash_CO.offset)); // TEXT-CO<IFIELD> @
  if (Pop() != 0)
  {
    WEC16(); // WEC16

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(1);
      Push(i); // I
      WF271(); // WF271
      i++;
    } while(i<imax); // (LOOP)

  } else
  {
    WEC16(); // WEC16

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      INEXT(); // INEXT
      Push(Read16(0x65e1+TEXT_dash_CO.offset)); // TEXT-CO<IFIELD> @
      Push(j); // I
      WF271(); // WF271
      j++;
    } while(j<jmax); // (LOOP)

  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf2c9: WORD 'WF2CB' codep=0x224c parp=0xf2cb
// ================================================

void WF2CB() // WF2CB
{
  unsigned short int i, imax;
  WEC16(); // WEC16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_WF0E6); // WF0E6
    Store_2(); // !_2
    WF223(); // WF223
    Push(Read16(pp_WF13A)); // WF13A @
    Push(i); // I
    WF27D(); // WF27D
    Push(Pop() * Pop()); // *
    Push(i); // I
    WF271(); // WF271
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf2eb: WORD 'WF2ED' codep=0x224c parp=0xf2ed
// ================================================

void WF2ED() // WF2ED
{
  Push(0x00ff);
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  SWAP(); // SWAP
  Push(Pop() - (Read16(pp_XCON) + 1)); //  XCON @ 1+ -
  SWAP(); // SWAP
  Push(Pop() - (Read16(pp_YCON) + 1)); //  YCON @ 1+ -
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  _dash_(); // -
}


// ================================================
// 0xf31b: WORD 'WF31D' codep=0x224c parp=0xf31d
// ================================================

void WF31D() // WF31D
{
  unsigned short int i, imax;
  WF2ED(); // WF2ED
  WEC16(); // WEC16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WF27D(); // WF27D
    OVER(); // OVER
    Push(0x0064);
    _star__slash_(); // */
    Push(i); // I
    WF271(); // WF271
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf33b: WORD 'WF33D' codep=0x224c parp=0xf33d params=2 returns=1
// ================================================

void WF33D() // WF33D
{
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    _slash_(); // /
    return;
  }
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf34f: WORD 'WF351' codep=0x224c parp=0xf351
// ================================================

void WF351() // WF351
{
  unsigned short int i, imax;
  Push(0x0065);
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WEC0E); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0064);
  Push(0x0100);
  _star__slash_(); // */
  _dash_(); // -
  WEC16(); // WEC16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WF27D(); // WF27D
    OVER(); // OVER
    Push(Pop() * Pop()); // *
    Push(i); // I
    WF271(); // WF271
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf383: WORD 'WF385' codep=0x224c parp=0xf385 params=0 returns=0
// ================================================

void WF385() // WF385
{
  unsigned short int i, imax;
  WEC16(); // WEC16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x1388);
    Push(i); // I
    WF27D(); // WF27D
    WF33D(); // WF33D
    Push(i); // I
    WF271(); // WF271
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf39d: WORD 'WF39F' codep=0x224c parp=0xf39f
// ================================================

void WF39F() // WF39F
{
  WF31D(); // WF31D
  WF351(); // WF351
  WF385(); // WF385
}


// ================================================
// 0xf3a7: WORD 'WF3A9' codep=0x224c parp=0xf3a9 params=0 returns=1
// ================================================

void WF3A9() // WF3A9
{
  unsigned short int i, imax;
  Push(0);
  WEC16(); // WEC16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WF27D(); // WF27D
    Push(Pop() + Pop()); // +
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0x0021);
  MIN(); // MIN
}


// ================================================
// 0xf3c7: WORD 'WF3C9' codep=0x224c parp=0xf3c9
// ================================================

void WF3C9() // WF3C9
{
  Push(0x01f4);
  WF2CB(); // WF2CB
  WF39F(); // WF39F
  WF3A9(); // WF3A9
  SAVE_dash_OV(); // SAVE-OV
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _slash_(); // /
    Push(Pop() * 6); //  6 *
    Push(pp_ETIME); // ETIME
    Store_2(); // !_2
  } else
  {
    Pop(); // DROP
  }
  Push(Read16(pp_ACT_n_)); // ACT# @
  WF02A(); // WF02A
  WED31(); // WED31
}


// ================================================
// 0xf3f7: WORD 'WF3F9' codep=0x224c parp=0xf3f9
// ================================================

void WF3F9() // WF3F9
{
  unsigned short int i, imax;
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  WEC16(); // WEC16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WF27D(); // WF27D
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Pop() - 1); //  1-
      Push(Read16(pp_ETIME)); // ETIME @
      Push(6);
      _slash_(); // /
      Push(Pop() - 1); //  1-
      Push(Pop() * Pop()); // *
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        Push(0x001a);
        Push(i); // I
        Push(1);
        _star_CREATE(); // *CREATE
        Push(0x01f4);
        MIN(); // MIN
        Push(0);
        MAX(); // MAX
        Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
        Store_2(); // !_2
        Push(Read16(pp_XABS)); // XABS @
        Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
        Store_2(); // !_2
        Push(Read16(pp_YABS) - 1); // YABS @ 1-
        Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
        Store_2(); // !_2
        Push(0xba55); // 'ICON-'
        MODULE(); // MODULE
        _plus_ICON_2(); // +ICON_2
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  StoreD(); // D!
  ORGLIST(); // ORGLIST
  WEC4E(); // WEC4E
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf46d: WORD 'WF46F' codep=0x224c parp=0xf46f params=0 returns=0
// ================================================

void WF46F() // WF46F
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp__n_ETIME); // #ETIME
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x03e8);
  M_slash_(); // M/
  SWAP(); // SWAP
  Pop(); // DROP
  Push(Read16(pp_ETIME)); // ETIME @
  MIN(); // MIN
  Push(pp_ETIME); // ETIME
  Store_2(); // !_2
}


// ================================================
// 0xf48f: WORD 'RECALL' codep=0x224c parp=0xf49a params=0 returns=0
// ================================================
// entry

void RECALL() // RECALL
{
  Push(Read16(pp_ETIME)); // ETIME @
  _gt_FLAG(); // >FLAG
  Push(Pop() & (Read16(pp_NOF)==0?1:0)); //  NOF @ 0= AND
  if (Pop() != 0)
  {
    WECF1(); // WECF1
    Push(pp_NOF); // NOF
    ON_2(); // ON_2
    WF3F9(); // WF3F9
    Push(pp_NOF); // NOF
    _099(); // 099
    Push(pp_ETIME); // ETIME
    _099(); // 099
    Func12("'F2");
    Pop(); Pop(); // 2DROP
  }
  Push(pp_NOF); // NOF
  _099(); // 099
}


// ================================================
// 0xf4c6: WORD 'DRONE' codep=0x224c parp=0xf4d0 params=0 returns=4
// ================================================
// entry

void DRONE() // DRONE
{
  Push(Read16(pp_CONTEXT_3)==0?1:0); // CONTEXT_3 @ 0=
  Push(0x0034);
  Push(0xb78d); // 'TV?ART'
  MODULE(); // MODULE
  Push(Pop() & Pop()); // AND
  Push(Pop() & (Read16(pp_NOF)==0?1:0)); //  NOF @ 0= AND
  if (Pop() != 0)
  {
    Push(!Read16(pp_ETIME)); // ETIME @ NOT
    if (Pop() != 0)
    {
      Push(pp_NOF); // NOF
      ON_2(); // ON_2
      Push(0);
      Push(0);
      WEC60(); // WEC60
      Push(pp_ESC_dash_EN); // ESC-EN
      _099(); // 099
      do
      {
        ACTION_ask_(); // ACTION?
        Push(Read16(pp_ACT_n_)); // ACT# @
        _n__gt_ACTIO(); // #>ACTIO case
        if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      } while(Pop() == 0);
      Push(pp_ESC_dash_EN); // ESC-EN
      ON_2(); // ON_2
      Push(pp_NOF); // NOF
      _099(); // 099
      Push(Pop()==1?1:0); //  1 =
      if (Pop() != 0)
      {
        WF289(); // WF289
        WF3C9(); // WF3C9
        WECA2(); // WECA2
        TIME(); // TIME
        _2_at_(); // 2@
        Push(pp__n_ETIME); // #ETIME
        StoreD(); // D!
      } else
      {
        WEC4E(); // WEC4E
      }
    } else
    {
      WF46F(); // WF46F
      RECALL(); // RECALL
    }
    Push(pp_NOF); // NOF
    _099(); // 099
    CTERASE(); // CTERASE
  } else
  {
    Push(0xb7e7); // '.NOFUN'
    MODULE(); // MODULE
    Push(0x07d0);
    MS(); // MS
  }
  Push2Words("NULL");
}

// 0xf55a: db 0x44 0x52 0x4f 0x4e 0x45 0x2d 0x00 'DRONE- '

