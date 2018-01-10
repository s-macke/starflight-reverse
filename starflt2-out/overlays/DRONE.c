// ====== OVERLAY 'DRONE' ======
// store offset = 0xebe0
// overlay size   = 0x0980

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xebf6  codep:0x7394 parp:0xebf6 size:0x0006 C-string:'UNK_0xebf6'
//      UNK_0xebfe  codep:0x7394 parp:0xebfe size:0x0006 C-string:'UNK_0xebfe'
//      UNK_0xec06  codep:0x7394 parp:0xec06 size:0x0006 C-string:'UNK_0xec06'
//      UNK_0xec0e  codep:0x7394 parp:0xec0e size:0x0006 C-string:'UNK_0xec0e'
//      UNK_0xec16  codep:0x224c parp:0xec16 size:0x0008 C-string:'UNK_0xec16'
//      UNK_0xec20  codep:0x1d29 parp:0xec20 size:0x0008 C-string:'UNK_0xec20'
//      UNK_0xec2a  codep:0x224c parp:0xec2a size:0x0022 C-string:'UNK_0xec2a'
//      UNK_0xec4e  codep:0x224c parp:0xec4e size:0x0010 C-string:'UNK_0xec4e'
//      UNK_0xec60  codep:0x224c parp:0xec60 size:0x002e C-string:'UNK_0xec60'
//      UNK_0xec90  codep:0x224c parp:0xec90 size:0x0010 C-string:'UNK_0xec90'
//      UNK_0xeca2  codep:0x224c parp:0xeca2 size:0x004d C-string:'UNK_0xeca2'
//      UNK_0xecf1  codep:0x224c parp:0xecf1 size:0x002c C-string:'UNK_0xecf1'
//      UNK_0xed1f  codep:0x224c parp:0xed1f size:0x0010 C-string:'UNK_0xed1f'
//      UNK_0xed31  codep:0x224c parp:0xed31 size:0x0032 C-string:'UNK_0xed31'
//      UNK_0xed65  codep:0x224c parp:0xed65 size:0x0008 C-string:'UNK_0xed65'
//      UNK_0xed6f  codep:0x1d29 parp:0xed6f size:0x0003 C-string:'UNK_0xed6f'
//      UNK_0xed74  codep:0x224c parp:0xed74 size:0x0008 C-string:'UNK_0xed74'
//      UNK_0xed7e  codep:0x224c parp:0xed7e size:0x0006 C-string:'UNK_0xed7e'
//      UNK_0xed86  codep:0x224c parp:0xed86 size:0x0008 C-string:'UNK_0xed86'
//      UNK_0xed90  codep:0x224c parp:0xed90 size:0x0012 C-string:'UNK_0xed90'
//      UNK_0xeda4  codep:0x224c parp:0xeda4 size:0x0012 C-string:'UNK_0xeda4'
//      UNK_0xedb8  codep:0x1d29 parp:0xedb8 size:0x0003 C-string:'UNK_0xedb8'
//      UNK_0xedbd  codep:0x224c parp:0xedbd size:0x0008 C-string:'UNK_0xedbd'
//      UNK_0xedc7  codep:0x224c parp:0xedc7 size:0x0006 C-string:'UNK_0xedc7'
//      UNK_0xedcf  codep:0x224c parp:0xedcf size:0x0012 C-string:'UNK_0xedcf'
//      UNK_0xede3  codep:0x224c parp:0xede3 size:0x0012 C-string:'UNK_0xede3'
//      UNK_0xedf7  codep:0x224c parp:0xedf7 size:0x0020 C-string:'UNK_0xedf7'
//      UNK_0xee19  codep:0x224c parp:0xee19 size:0x000a C-string:'UNK_0xee19'
//      UNK_0xee25  codep:0x224c parp:0xee25 size:0x0008 C-string:'UNK_0xee25'
//      UNK_0xee2f  codep:0x224c parp:0xee2f size:0x002a C-string:'UNK_0xee2f'
//      UNK_0xee5b  codep:0x224c parp:0xee5b size:0x0016 C-string:'UNK_0xee5b'
//      UNK_0xee73  codep:0x224c parp:0xee73 size:0x001c C-string:'UNK_0xee73'
//      UNK_0xee91  codep:0x224c parp:0xee91 size:0x000e C-string:'UNK_0xee91'
//      UNK_0xeea1  codep:0x224c parp:0xeea1 size:0x002a C-string:'UNK_0xeea1'
//      UNK_0xeecd  codep:0x224c parp:0xeecd size:0x000a C-string:'UNK_0xeecd'
//      UNK_0xeed9  codep:0x224c parp:0xeed9 size:0x000a C-string:'UNK_0xeed9'
//      UNK_0xeee5  codep:0x224c parp:0xeee5 size:0x0012 C-string:'UNK_0xeee5'
//      UNK_0xeef9  codep:0x224c parp:0xeef9 size:0x001a C-string:'UNK_0xeef9'
//      UNK_0xef15  codep:0x224c parp:0xef15 size:0x0016 C-string:'UNK_0xef15'
//      UNK_0xef2d  codep:0x224c parp:0xef2d size:0x0020 C-string:'UNK_0xef2d'
//         TD-SCRO  codep:0x4b3b parp:0xef59 size:0x000c C-string:'TD_dash_SCRO'
//      UNK_0xef67  codep:0x224c parp:0xef67 size:0x001c C-string:'UNK_0xef67'
//      UNK_0xef85  codep:0x224c parp:0xef85 size:0x0026 C-string:'UNK_0xef85'
//      UNK_0xefad  codep:0x224c parp:0xefad size:0x000c C-string:'UNK_0xefad'
//      UNK_0xefbb  codep:0x224c parp:0xefbb size:0x000c C-string:'UNK_0xefbb'
//      UNK_0xefc9  codep:0x224c parp:0xefc9 size:0x000c C-string:'UNK_0xefc9'
//      UNK_0xefd7  codep:0x224c parp:0xefd7 size:0x000c C-string:'UNK_0xefd7'
//            ACT#  codep:0x1d29 parp:0xefec size:0x0002 C-string:'ACT_n_'
//      UNK_0xeff0  codep:0x224c parp:0xeff0 size:0x000a C-string:'UNK_0xeff0'
//      UNK_0xeffc  codep:0x224c parp:0xeffc size:0x002c C-string:'UNK_0xeffc'
//      UNK_0xf02a  codep:0x224c parp:0xf02a size:0x0010 C-string:'UNK_0xf02a'
//      UNK_0xf03c  codep:0x224c parp:0xf03c size:0x000c C-string:'UNK_0xf03c'
//      UNK_0xf04a  codep:0x224c parp:0xf04a size:0x0016 C-string:'UNK_0xf04a'
//      UNK_0xf062  codep:0x224c parp:0xf062 size:0x0016 C-string:'UNK_0xf062'
//         ACT-SCR  codep:0x4b3b parp:0xf084 size:0x000c C-string:'ACT_dash_SCR'
//      UNK_0xf092  codep:0x224c parp:0xf092 size:0x0018 C-string:'UNK_0xf092'
//         ACTION?  codep:0x224c parp:0xf0b6 size:0x0006 C-string:'ACTION_ask_'
//      UNK_0xf0be  codep:0x224c parp:0xf0be size:0x0004 C-string:'UNK_0xf0be'
//      UNK_0xf0c4  codep:0x224c parp:0xf0c4 size:0x0004 C-string:'UNK_0xf0c4'
//         #>ACTIO  codep:0x4b3b parp:0xf0d4 size:0x0010 C-string:'_n__gt_ACTIO'
//      UNK_0xf0e6  codep:0x1d29 parp:0xf0e6 size:0x0002 C-string:'UNK_0xf0e6'
//      UNK_0xf0ea  codep:0x224c parp:0xf0ea size:0x0006 C-string:'UNK_0xf0ea'
//      UNK_0xf0f2  codep:0x224c parp:0xf0f2 size:0x000a C-string:'UNK_0xf0f2'
//      UNK_0xf0fe  codep:0x224c parp:0xf0fe size:0x000a C-string:'UNK_0xf0fe'
//      UNK_0xf10a  codep:0x224c parp:0xf10a size:0x000a C-string:'UNK_0xf10a'
//      UNK_0xf116  codep:0x224c parp:0xf116 size:0x000a C-string:'UNK_0xf116'
//      UNK_0xf122  codep:0x224c parp:0xf122 size:0x000a C-string:'UNK_0xf122'
//      UNK_0xf12e  codep:0x224c parp:0xf12e size:0x000a C-string:'UNK_0xf12e'
//      UNK_0xf13a  codep:0x1d29 parp:0xf13a size:0x0002 C-string:'UNK_0xf13a'
//      UNK_0xf13e  codep:0x224c parp:0xf13e size:0x0011 C-string:'UNK_0xf13e'
//         10!TIME  codep:0xf144 parp:0xf15b size:0x0001 C-string:'_10_ex_TIME'
//         20!TIME  codep:0xf144 parp:0xf168 size:0x0001 C-string:'_20_ex_TIME'
//         30!TIME  codep:0xf144 parp:0xf175 size:0x0001 C-string:'_30_ex_TIME'
//          5!TIME  codep:0xf144 parp:0xf181 size:0x0001 C-string:'_5_ex_TIME'
//          7!TIME  codep:0xf144 parp:0xf18d size:0x0001 C-string:'_7_ex_TIME'
//         13!TIME  codep:0xf144 parp:0xf19a size:0x0001 C-string:'_13_ex_TIME'
//          3!TIME  codep:0xf144 parp:0xf1a6 size:0x0001 C-string:'_3_ex_TIME'
//      UNK_0xf1a9  codep:0x224c parp:0xf1a9 size:0x0028 C-string:'UNK_0xf1a9'
//         (TIMER)  codep:0xaccc parp:0xf1dd size:0x0044 C-string:'_ro_TIMER_rc_'
//      UNK_0xf223  codep:0x224c parp:0xf223 size:0x0012 C-string:'UNK_0xf223'
//           TIMES  codep:0x1d29 parp:0xf23f size:0x0030 C-string:'TIMES'
//      UNK_0xf271  codep:0x224c parp:0xf271 size:0x000a C-string:'UNK_0xf271'
//      UNK_0xf27d  codep:0x224c parp:0xf27d size:0x000a C-string:'UNK_0xf27d'
//      UNK_0xf289  codep:0x224c parp:0xf289 size:0x0040 C-string:'UNK_0xf289'
//      UNK_0xf2cb  codep:0x224c parp:0xf2cb size:0x0020 C-string:'UNK_0xf2cb'
//      UNK_0xf2ed  codep:0x224c parp:0xf2ed size:0x002e C-string:'UNK_0xf2ed'
//      UNK_0xf31d  codep:0x224c parp:0xf31d size:0x001e C-string:'UNK_0xf31d'
//      UNK_0xf33d  codep:0x224c parp:0xf33d size:0x0012 C-string:'UNK_0xf33d'
//      UNK_0xf351  codep:0x224c parp:0xf351 size:0x0032 C-string:'UNK_0xf351'
//      UNK_0xf385  codep:0x224c parp:0xf385 size:0x0018 C-string:'UNK_0xf385'
//      UNK_0xf39f  codep:0x224c parp:0xf39f size:0x0008 C-string:'UNK_0xf39f'
//      UNK_0xf3a9  codep:0x224c parp:0xf3a9 size:0x001e C-string:'UNK_0xf3a9'
//      UNK_0xf3c9  codep:0x224c parp:0xf3c9 size:0x002e C-string:'UNK_0xf3c9'
//      UNK_0xf3f9  codep:0x224c parp:0xf3f9 size:0x0074 C-string:'UNK_0xf3f9'
//      UNK_0xf46f  codep:0x224c parp:0xf46f size:0x0020 C-string:'UNK_0xf46f'
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
const unsigned short int pp_UNK_0xec20 = 0xec20; // UNK_0xec20 size: 8
// {0x00, 0x00, 0x7e, 0xff, 0x5a, 0x3c, 0x42, 0xe7}

const unsigned short int pp_UNK_0xed6f = 0xed6f; // UNK_0xed6f size: 3
// {0x3a, 0x20, 0x05}

const unsigned short int pp_UNK_0xedb8 = 0xedb8; // UNK_0xedb8 size: 3
// {0x3a, 0x20, 0x05}

const unsigned short int pp_ACT_n_ = 0xefec; // ACT# size: 2
// {0x01, 0x00}

const unsigned short int pp_UNK_0xf0e6 = 0xf0e6; // UNK_0xf0e6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf13a = 0xf13a; // UNK_0xf13a size: 2
// {0x3a, 0x20}

const unsigned short int pp_TIMES = 0xf23f; // TIMES size: 48
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4e, 0x54, 0x53, 0x20, 0x01, 0x00, 0x00, 0x1a, 0x06, 0x00, 0x00, 0x33, 0x07, 0x00, 0x00, 0x64, 0x08, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x1f, 0x02, 0x00, 0x00, 0x2e, 0x03, 0x00, 0x00, 0x3d, 0x04, 0x00, 0x00, 0x64, 0x05, 0x00, 0x00, 0x10, 0x06}




// 0xebf2: db 0x98 0x00 '  '

// ================================================
// 0xebf4: WORD 'UNK_0xebf6' codep=0x7394 parp=0xebf6
// ================================================
LoadDataType UNK_0xebf6 = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xebfc: WORD 'UNK_0xebfe' codep=0x7394 parp=0xebfe
// ================================================
LoadDataType UNK_0xebfe = {PLANETIDX, 0x0d, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec04: WORD 'UNK_0xec06' codep=0x7394 parp=0xec06
// ================================================
LoadDataType UNK_0xec06 = {PLANETIDX, 0x0e, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec0c: WORD 'UNK_0xec0e' codep=0x7394 parp=0xec0e
// ================================================
LoadDataType UNK_0xec0e = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xec14: WORD 'UNK_0xec16' codep=0x224c parp=0xec16 params=0 returns=2
// ================================================

void UNK_0xec16() // UNK_0xec16
{
  Push(0x0018);
  Push(1);
}


// ================================================
// 0xec1e: WORD 'UNK_0xec20' codep=0x1d29 parp=0xec20
// ================================================
// 0xec20: db 0x00 0x00 0x7e 0xff 0x5a 0x3c 0x42 0xe7 '  ~ Z<B '

// ================================================
// 0xec28: WORD 'UNK_0xec2a' codep=0x224c parp=0xec2a
// ================================================

void UNK_0xec2a() // UNK_0xec2a
{
  Push(8);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(8);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  Push(pp_UNK_0xec20); // UNK_0xec20
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _st__ex__gt_(); // <!>
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xec4c: WORD 'UNK_0xec4e' codep=0x224c parp=0xec4e
// ================================================

void UNK_0xec4e() // UNK_0xec4e
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
// 0xec5e: WORD 'UNK_0xec60' codep=0x224c parp=0xec60
// ================================================

void UNK_0xec60() // UNK_0xec60
{
  _gt_MAINVI(); // >MAINVI
  DrawBACKGR(); // .BACKGR
  UNK_0xec2a(); // UNK_0xec2a
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
// 0xec8e: WORD 'UNK_0xec90' codep=0x224c parp=0xec90
// ================================================

void UNK_0xec90() // UNK_0xec90
{
  Push(1);
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xeca0: WORD 'UNK_0xeca2' codep=0x224c parp=0xeca2
// ================================================

void UNK_0xeca2() // UNK_0xeca2
{
  unsigned short int i, imax;
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("(F2) OR LAUNCH TO RECALL DRONE");
  DrawTTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
  UNK_0xec90(); // UNK_0xec90
  UNK_0xec90(); // UNK_0xec90
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
    UNK_0xec60(); // UNK_0xec60
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xecef: WORD 'UNK_0xecf1' codep=0x224c parp=0xecf1 params=0 returns=0
// ================================================

void UNK_0xecf1() // UNK_0xecf1
{
  unsigned short int i, imax;
  Push(Read16(pp_CONTEXT_3)==0?1:0); // CONTEXT_3 @ 0=
  if (Pop() == 0) return;
  UNK_0xec90(); // UNK_0xec90
  UNK_0xec90(); // UNK_0xec90
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
    UNK_0xec60(); // UNK_0xec60
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xed1d: WORD 'UNK_0xed1f' codep=0x224c parp=0xed1f params=2 returns=2
// ================================================

void UNK_0xed1f() // UNK_0xed1f
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
// 0xed2f: WORD 'UNK_0xed31' codep=0x224c parp=0xed31
// ================================================

void UNK_0xed31() // UNK_0xed31
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
  SetColor(DK_dash_BLUE);
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
// 0xed63: WORD 'UNK_0xed65' codep=0x224c parp=0xed65
// ================================================

void UNK_0xed65() // UNK_0xed65
{
  Push(Read16(pp_WTOP)); // WTOP @
  UNK_0xed31(); // UNK_0xed31
}


// ================================================
// 0xed6d: WORD 'UNK_0xed6f' codep=0x1d29 parp=0xed6f
// ================================================
// 0xed6f: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xed72: WORD 'UNK_0xed74' codep=0x224c parp=0xed74
// ================================================

void UNK_0xed74() // UNK_0xed74
{
  CI(); // CI
  Push(pp_UNK_0xed6f); // UNK_0xed6f
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xed7c: WORD 'UNK_0xed7e' codep=0x224c parp=0xed7e params=0 returns=2
// ================================================

void UNK_0xed7e() // UNK_0xed7e
{
  Push(pp_UNK_0xed6f); // UNK_0xed6f
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xed84: WORD 'UNK_0xed86' codep=0x224c parp=0xed86 params=0 returns=0
// ================================================

void UNK_0xed86() // UNK_0xed86
{
  Push(pp__ro_ELIST_rc_); // (ELIST)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
}


// ================================================
// 0xed8e: WORD 'UNK_0xed90' codep=0x224c parp=0xed90
// ================================================

void UNK_0xed90() // UNK_0xed90
{
  UNK_0xed86(); // UNK_0xed86
  CDROP(); // CDROP
  UNK_0xed7e(); // UNK_0xed7e
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  UNK_0xed74(); // UNK_0xed74
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeda2: WORD 'UNK_0xeda4' codep=0x224c parp=0xeda4
// ================================================

void UNK_0xeda4() // UNK_0xeda4
{
  UNK_0xed86(); // UNK_0xed86
  CDROP(); // CDROP
  UNK_0xed7e(); // UNK_0xed7e
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  UNK_0xed74(); // UNK_0xed74
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xedb6: WORD 'UNK_0xedb8' codep=0x1d29 parp=0xedb8
// ================================================
// 0xedb8: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xedbb: WORD 'UNK_0xedbd' codep=0x224c parp=0xedbd
// ================================================

void UNK_0xedbd() // UNK_0xedbd
{
  CI(); // CI
  Push(pp_UNK_0xedb8); // UNK_0xedb8
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xedc5: WORD 'UNK_0xedc7' codep=0x224c parp=0xedc7 params=0 returns=2
// ================================================

void UNK_0xedc7() // UNK_0xedc7
{
  Push(pp_UNK_0xedb8); // UNK_0xedb8
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xedcd: WORD 'UNK_0xedcf' codep=0x224c parp=0xedcf
// ================================================

void UNK_0xedcf() // UNK_0xedcf
{
  UNK_0xed86(); // UNK_0xed86
  CDROP(); // CDROP
  UNK_0xedc7(); // UNK_0xedc7
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  UNK_0xedbd(); // UNK_0xedbd
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xede1: WORD 'UNK_0xede3' codep=0x224c parp=0xede3
// ================================================

void UNK_0xede3() // UNK_0xede3
{
  UNK_0xed86(); // UNK_0xed86
  CDROP(); // CDROP
  UNK_0xedc7(); // UNK_0xedc7
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  UNK_0xedbd(); // UNK_0xedbd
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xedf5: WORD 'UNK_0xedf7' codep=0x224c parp=0xedf7
// ================================================

void UNK_0xedf7() // UNK_0xedf7
{
  Push(Read16(0x65e1+TEXT_dash_CO.offset)); // TEXT-CO<IFIELD> @
  if (Pop() != 0)
  {
    SetColor(WHITE);
  } else
  {
    IsCGA(); // ?CGA
    if (Pop() != 0)
    {
      SetColor(RED);
    } else
    {
      SetColor(GREY1);
    }
  }
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee17: WORD 'UNK_0xee19' codep=0x224c parp=0xee19 params=0 returns=0
// ================================================

void UNK_0xee19() // UNK_0xee19
{
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xee23: WORD 'UNK_0xee25' codep=0x224c parp=0xee25
// ================================================

void UNK_0xee25() // UNK_0xee25
{
  UNK_0xedf7(); // UNK_0xedf7
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  _do__dot_(); // $.
}


// ================================================
// 0xee2d: WORD 'UNK_0xee2f' codep=0x224c parp=0xee2f
// ================================================

void UNK_0xee2f() // UNK_0xee2f
{
  unsigned short int i, imax;
  UNK_0xee19(); // UNK_0xee19
  Push(Read16(pp_WLINES)); // WLINES @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push(Read16(pp_WTOP) - 2); // WTOP @ 2 -
    Push(i); // I
    Push(7);
    Push(Pop() * Pop()); // *
    _dash_(); // -
    POS_dot_(); // POS.
    UNK_0xee25(); // UNK_0xee25
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xee59: WORD 'UNK_0xee5b' codep=0x224c parp=0xee5b
// ================================================

void UNK_0xee5b() // UNK_0xee5b
{
  UNK_0xed86(); // UNK_0xed86
  UNK_0xed74(); // UNK_0xed74
  UNK_0xee2f(); // UNK_0xee2f
  IPREV(); // IPREV
  UNK_0xedbd(); // UNK_0xedbd
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(2);
  _star_CLOSE(); // *CLOSE
  UNK_0xed86(); // UNK_0xed86
}


// ================================================
// 0xee71: WORD 'UNK_0xee73' codep=0x224c parp=0xee73 params=0 returns=0
// ================================================

void UNK_0xee73() // UNK_0xee73
{
  UNK_0xed86(); // UNK_0xed86

  label2:
  INEXT(); // INEXT
  IsFIRST(); // ?FIRST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0);
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  Store_2(); // !_2
  goto label2;

  label1:
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee8f: WORD 'UNK_0xee91' codep=0x224c parp=0xee91 params=0 returns=0
// ================================================

void UNK_0xee91() // UNK_0xee91
{
  UNK_0xed86(); // UNK_0xed86
  Push(0);
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  Store_2(); // !_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee9f: WORD 'UNK_0xeea1' codep=0x224c parp=0xeea1 params=0 returns=0
// ================================================

void UNK_0xeea1() // UNK_0xeea1
{
  IsTRIG(); // ?TRIG
  if (Pop() == 0) return;
  UNK_0xed7e(); // UNK_0xed7e
  _gt_C_plus_S(); // >C+S
  Push(!Read16(0x65e1+TEXT_dash_CO.offset)); // TEXT-CO<IFIELD> @ NOT
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  Store_2(); // !_2
  IsFIRST(); // ?FIRST
  if (Pop() != 0)
  {
    UNK_0xee73(); // UNK_0xee73
  } else
  {
    UNK_0xee91(); // UNK_0xee91
  }
  UNK_0xee2f(); // UNK_0xee2f
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeecb: WORD 'UNK_0xeecd' codep=0x224c parp=0xeecd
// ================================================

void UNK_0xeecd() // UNK_0xeecd
{
  Push(0x6813); Push(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
}


// ================================================
// 0xeed7: WORD 'UNK_0xeed9' codep=0x224c parp=0xeed9
// ================================================

void UNK_0xeed9() // UNK_0xeed9
{
  Push(0x6830); Push(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
}


// ================================================
// 0xeee3: WORD 'UNK_0xeee5' codep=0x224c parp=0xeee5
// ================================================

void UNK_0xeee5() // UNK_0xeee5
{
  _gt_BOTT(); // >BOTT
  UNK_0xeed9(); // UNK_0xeed9
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(8);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  UNK_0xeecd(); // UNK_0xeecd
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xeef7: WORD 'UNK_0xeef9' codep=0x224c parp=0xeef9
// ================================================

void UNK_0xeef9() // UNK_0xeef9
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  UNK_0xeee5(); // UNK_0xeee5
  Push(-1);
  Push(pp_WLINES); // WLINES
  _plus__ex__2(); // +!_2
  Push(7);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
  CTERASE(); // CTERASE
  UNK_0xee5b(); // UNK_0xee5b
}


// ================================================
// 0xef13: WORD 'UNK_0xef15' codep=0x224c parp=0xef15
// ================================================

void UNK_0xef15() // UNK_0xef15
{
  CLICK(); // CLICK
  UNK_0xed90(); // UNK_0xed90
  UNK_0xedcf(); // UNK_0xedcf
  UNK_0xedf7(); // UNK_0xedf7
  UNK_0xedc7(); // UNK_0xedc7
  _gt_C_plus_S(); // >C+S
  UNK_0xedf7(); // UNK_0xedf7
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  WLINE_dash_U(); // WLINE-U
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef2b: WORD 'UNK_0xef2d' codep=0x224c parp=0xef2d
// ================================================

void UNK_0xef2d() // UNK_0xef2d
{
  CLICK(); // CLICK
  UNK_0xeda4(); // UNK_0xeda4
  UNK_0xede3(); // UNK_0xede3
  Push(-2);
  Push(pp_WTOP); // WTOP
  _plus__ex__2(); // +!_2
  UNK_0xed7e(); // UNK_0xed7e
  _gt_C_plus_S(); // >C+S
  UNK_0xedf7(); // UNK_0xedf7
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
    UNK_0xef2d(); // UNK_0xef2d
    break;
  case 1:
    UNK_0xef15(); // UNK_0xef15
    break;
  default:
    UNK_0xeea1(); // UNK_0xeea1
    break;

  }
}

// ================================================
// 0xef65: WORD 'UNK_0xef67' codep=0x224c parp=0xef67
// ================================================

void UNK_0xef67() // UNK_0xef67
{
  do
  {
    XYSCAN(); // XYSCAN
    if (Pop() == 0) Push(1); else Push(0); // 0=
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
// 0xef83: WORD 'UNK_0xef85' codep=0x224c parp=0xef85
// ================================================

void UNK_0xef85() // UNK_0xef85
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  UNK_0xeed9(); // UNK_0xeed9
  DrawTTY(); // .TTY
  Push(0x684f); Push(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  DrawTTY(); // .TTY
  UNK_0xeecd(); // UNK_0xeecd
  DrawTTY(); // .TTY
  Push(0x6881); Push(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  DrawTTY(); // .TTY
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xefab: WORD 'UNK_0xefad' codep=0x224c parp=0xefad
// ================================================

void UNK_0xefad() // UNK_0xefad
{
  UNK_0xef85(); // UNK_0xef85
  UNK_0xeef9(); // UNK_0xeef9
  UNK_0xef67(); // UNK_0xef67
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xefb9: WORD 'UNK_0xefbb' codep=0x224c parp=0xefbb
// ================================================

void UNK_0xefbb() // UNK_0xefbb
{
  Push(0x68ac); Push(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xefc7: WORD 'UNK_0xefc9' codep=0x224c parp=0xefc9
// ================================================

void UNK_0xefc9() // UNK_0xefc9
{
  Push(0x68df); Push(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xefd5: WORD 'UNK_0xefd7' codep=0x224c parp=0xefd7
// ================================================

void UNK_0xefd7() // UNK_0xefd7
{
  Push(0x690e); Push(0x0002);
  UNK_0xed1f(); // UNK_0xed1f
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xefe3: WORD 'ACT#' codep=0x1d29 parp=0xefec
// ================================================
// 0xefec: db 0x01 0x00 '  '

// ================================================
// 0xefee: WORD 'UNK_0xeff0' codep=0x224c parp=0xeff0 params=0 returns=0
// ================================================

void UNK_0xeff0() // UNK_0xeff0
{
  GCR(); // GCR
  Push(1);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xeffa: WORD 'UNK_0xeffc' codep=0x224c parp=0xeffc
// ================================================

void UNK_0xeffc() // UNK_0xeffc
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  UNK_0xefbb(); // UNK_0xefbb
  UNK_0xeff0(); // UNK_0xeff0
  UNK_0xefc9(); // UNK_0xefc9
  UNK_0xeff0(); // UNK_0xeff0
  UNK_0xefd7(); // UNK_0xefd7
  UNK_0xed65(); // UNK_0xed65
  Push(1);
  Push(pp_ACT_n_); // ACT#
  Store_2(); // !_2
}

// 0xf016: db 0x4c 0x22 0x22 0x5e 0xae 0x0b 0x5d 0x17 0x3b 0x01 0x5d 0x17 0x45 0x01 0x25 0x40 0x90 0x16 'L""^  ] ; ] E %@  '

// ================================================
// 0xf028: WORD 'UNK_0xf02a' codep=0x224c parp=0xf02a params=1 returns=1
// ================================================

void UNK_0xf02a() // UNK_0xf02a
{
  Push(Read16(pp_WTOP)); // WTOP @
  SWAP(); // SWAP
  Push(Pop()-1); // 1-
  Push(7);
  Push(Pop() * Pop()); // *
  _dash_(); // -
}


// ================================================
// 0xf03a: WORD 'UNK_0xf03c' codep=0x224c parp=0xf03c
// ================================================

void UNK_0xf03c() // UNK_0xf03c
{
  SWAP(); // SWAP
  UNK_0xf02a(); // UNK_0xf02a
  UNK_0xed31(); // UNK_0xed31
  UNK_0xf02a(); // UNK_0xf02a
  UNK_0xed31(); // UNK_0xed31
}


// ================================================
// 0xf048: WORD 'UNK_0xf04a' codep=0x224c parp=0xf04a
// ================================================

void UNK_0xf04a() // UNK_0xf04a
{
  Push(Read16(pp_ACT_n_)); // ACT# @
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  Push(3);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_ACT_n_); // ACT#
  Store_2(); // !_2
  UNK_0xf03c(); // UNK_0xf03c
}


// ================================================
// 0xf060: WORD 'UNK_0xf062' codep=0x224c parp=0xf062
// ================================================

void UNK_0xf062() // UNK_0xf062
{
  Push(Read16(pp_ACT_n_)); // ACT# @
  Push(Read16(regsp)); // DUP
  Push(Pop()-1); // 1-
  Push(1);
  MAX(); // MAX
  Push(Read16(regsp)); // DUP
  Push(pp_ACT_n_); // ACT#
  Store_2(); // !_2
  UNK_0xf03c(); // UNK_0xf03c
}


// ================================================
// 0xf078: WORD 'ACT-SCR' codep=0x4b3b parp=0xf084
// ================================================

void ACT_dash_SCR() // ACT-SCR
{
  switch(Pop()) // ACT-SCR
  {
  case 65535:
    UNK_0xf04a(); // UNK_0xf04a
    break;
  case 1:
    UNK_0xf062(); // UNK_0xf062
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf090: WORD 'UNK_0xf092' codep=0x224c parp=0xf092
// ================================================

void UNK_0xf092() // UNK_0xf092
{
  do
  {
    XYSCAN(); // XYSCAN
    if (Pop() == 0) Push(1); else Push(0); // 0=
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
  UNK_0xeffc(); // UNK_0xeffc
  UNK_0xf092(); // UNK_0xf092
}


// ================================================
// 0xf0bc: WORD 'UNK_0xf0be' codep=0x224c parp=0xf0be params=0 returns=1
// ================================================

void UNK_0xf0be() // UNK_0xf0be
{
  Push(1);
}


// ================================================
// 0xf0c2: WORD 'UNK_0xf0c4' codep=0x224c parp=0xf0c4 params=0 returns=1
// ================================================

void UNK_0xf0c4() // UNK_0xf0c4
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
    UNK_0xf0be(); // UNK_0xf0be
    break;
  case 2:
    UNK_0xefad(); // UNK_0xefad
    break;
  case 3:
    UNK_0xf0c4(); // UNK_0xf0c4
    break;
  default:
    BEEP(); // BEEP
    break;

  }
}

// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x1d29 parp=0xf0e6
// ================================================
// 0xf0e6: db 0x3a 0x20 ': '

// ================================================
// 0xf0e8: WORD 'UNK_0xf0ea' codep=0x224c parp=0xf0ea params=0 returns=0
// ================================================

void UNK_0xf0ea() // UNK_0xf0ea
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xf0f0: WORD 'UNK_0xf0f2' codep=0x224c parp=0xf0f2
// ================================================

void UNK_0xf0f2() // UNK_0xf0f2
{
  UNK_0xf0ea(); // UNK_0xf0ea
  LoadData(UNK_0xebf6); // from 'PLANET'
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0fc: WORD 'UNK_0xf0fe' codep=0x224c parp=0xf0fe
// ================================================

void UNK_0xf0fe() // UNK_0xf0fe
{
  UNK_0xf0ea(); // UNK_0xf0ea
  LoadData(UNK_0xebfe); // from 'PLANET'
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf108: WORD 'UNK_0xf10a' codep=0x224c parp=0xf10a
// ================================================

void UNK_0xf10a() // UNK_0xf10a
{
  UNK_0xf0ea(); // UNK_0xf0ea
  LoadData(UNK_0xec06); // from 'PLANET'
  Push(Read8(Pop())&0xFF); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf114: WORD 'UNK_0xf116' codep=0x224c parp=0xf116
// ================================================

void UNK_0xf116() // UNK_0xf116
{
  Push(Read16(pp_UNK_0xf0e6)); // UNK_0xf0e6 @
  UNK_0xf0f2(); // UNK_0xf0f2
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x224c parp=0xf122
// ================================================

void UNK_0xf122() // UNK_0xf122
{
  Push(Read16(pp_UNK_0xf0e6)); // UNK_0xf0e6 @
  UNK_0xf0fe(); // UNK_0xf0fe
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf12c: WORD 'UNK_0xf12e' codep=0x224c parp=0xf12e
// ================================================

void UNK_0xf12e() // UNK_0xf12e
{
  Push(Read16(pp_UNK_0xf0e6)); // UNK_0xf0e6 @
  UNK_0xf10a(); // UNK_0xf10a
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf138: WORD 'UNK_0xf13a' codep=0x1d29 parp=0xf13a
// ================================================
// 0xf13a: db 0x3a 0x20 ': '

// ================================================
// 0xf13c: WORD 'UNK_0xf13e' codep=0x224c parp=0xf13e
// ================================================

void UNK_0xf13e() // UNK_0xf13e
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  C_co_(); // C,
  CODE(); // (;CODE) inlined assembler code
// 0xf144: call   1649
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xf13a); // UNK_0xf13a
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
// 0xf1a7: WORD 'UNK_0xf1a9' codep=0x224c parp=0xf1a9
// ================================================

void UNK_0xf1a9() // UNK_0xf1a9
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
  Push(pp_UNK_0xf13a); // UNK_0xf13a
  Store_2(); // !_2
}


// ================================================
// 0xf1d1: WORD '(TIMER)' codep=0xaccc parp=0xf1dd
// ================================================

void _ro_TIMER_rc_() // (TIMER) rule
{
  int b;

  b = 1;
  UNK_0xf116(); // UNK_0xf116
  b = b && Pop();
  UNK_0xf122(); // UNK_0xf122
  b = b && Pop();
  UNK_0xf12e(); // UNK_0xf12e
  b = b && Pop();
  if (b)
  {
    _3_ex_TIME(); // 3!TIME
  }

  b = 1;
  UNK_0xf116(); // UNK_0xf116
  b = b && Pop();
  UNK_0xf122(); // UNK_0xf122
  b = b && Pop();
  UNK_0xf12e(); // UNK_0xf12e
  b = b && !Pop();
  if (b)
  {
    _5_ex_TIME(); // 5!TIME
  }

  b = 1;
  UNK_0xf116(); // UNK_0xf116
  b = b && !Pop();
  UNK_0xf122(); // UNK_0xf122
  b = b && Pop();
  UNK_0xf12e(); // UNK_0xf12e
  b = b && Pop();
  if (b)
  {
    _13_ex_TIME(); // 13!TIME
  }

  b = 1;
  UNK_0xf116(); // UNK_0xf116
  b = b && Pop();
  UNK_0xf122(); // UNK_0xf122
  b = b && !Pop();
  UNK_0xf12e(); // UNK_0xf12e
  b = b && Pop();
  if (b)
  {
    _7_ex_TIME(); // 7!TIME
  }

  b = 1;
  UNK_0xf116(); // UNK_0xf116
  b = b && Pop();
  UNK_0xf122(); // UNK_0xf122
  b = b && !Pop();
  UNK_0xf12e(); // UNK_0xf12e
  b = b && !Pop();
  if (b)
  {
    _10_ex_TIME(); // 10!TIME
  }

  b = 1;
  UNK_0xf116(); // UNK_0xf116
  b = b && !Pop();
  UNK_0xf122(); // UNK_0xf122
  b = b && Pop();
  UNK_0xf12e(); // UNK_0xf12e
  b = b && !Pop();
  if (b)
  {
    _20_ex_TIME(); // 20!TIME
  }

  b = 1;
  UNK_0xf116(); // UNK_0xf116
  b = b && !Pop();
  UNK_0xf122(); // UNK_0xf122
  b = b && !Pop();
  UNK_0xf12e(); // UNK_0xf12e
  b = b && Pop();
  if (b)
  {
    _30_ex_TIME(); // 30!TIME
  }
}


// ================================================
// 0xf221: WORD 'UNK_0xf223' codep=0x224c parp=0xf223
// ================================================

void UNK_0xf223() // UNK_0xf223
{
  Push(0xf1dd); // probable '(TIMER)'
  DISTRAC(); // DISTRAC
  _ro_TIMER_rc_(); // (TIMER) rule
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf1a9(); // UNK_0xf1a9
}


// ================================================
// 0xf235: WORD 'TIMES' codep=0x1d29 parp=0xf23f
// ================================================
// 0xf23f: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4e 0x54 0x53 0x20 0x01 0x00 0x00 0x1a 0x06 0x00 0x00 0x33 0x07 0x00 0x00 0x64 0x08 0x00 0x00 0x10 0x01 0x00 0x00 0x1f 0x02 0x00 0x00 0x2e 0x03 0x00 0x00 0x3d 0x04 0x00 0x00 0x64 0x05 0x00 0x00 0x10 0x06 ' ALLOT NTS        3   d           .   =   d     '

// ================================================
// 0xf26f: WORD 'UNK_0xf271' codep=0x224c parp=0xf271 params=2 returns=0
// ================================================

void UNK_0xf271() // UNK_0xf271
{
  Push(Pop()*2); // 2*
  Push(pp_TIMES); // TIMES
  Push(Pop() + Pop()); // +
  Store_2(); // !_2
}


// ================================================
// 0xf27b: WORD 'UNK_0xf27d' codep=0x224c parp=0xf27d params=1 returns=1
// ================================================

void UNK_0xf27d() // UNK_0xf27d
{
  Push(Pop()*2); // 2*
  Push(pp_TIMES); // TIMES
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf287: WORD 'UNK_0xf289' codep=0x224c parp=0xf289 params=0 returns=0
// ================================================

void UNK_0xf289() // UNK_0xf289
{
  unsigned short int i, imax, j, jmax;
  Push(pp_TIMES); // TIMES
  UNK_0xec16(); // UNK_0xec16
  Pop(); // DROP
  Push(Pop()*2); // 2*
  Push(0);
  FILL_2(); // FILL_2
  UNK_0xed86(); // UNK_0xed86
  Push(Read16(0x65e1+TEXT_dash_CO.offset)); // TEXT-CO<IFIELD> @
  if (Pop() != 0)
  {
    UNK_0xec16(); // UNK_0xec16

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(1);
      Push(i); // I
      UNK_0xf271(); // UNK_0xf271
      i++;
    } while(i<imax); // (LOOP)

  } else
  {
    UNK_0xec16(); // UNK_0xec16

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      INEXT(); // INEXT
      Push(Read16(0x65e1+TEXT_dash_CO.offset)); // TEXT-CO<IFIELD> @
      Push(j); // I
      UNK_0xf271(); // UNK_0xf271
      j++;
    } while(j<jmax); // (LOOP)

  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf2c9: WORD 'UNK_0xf2cb' codep=0x224c parp=0xf2cb
// ================================================

void UNK_0xf2cb() // UNK_0xf2cb
{
  unsigned short int i, imax;
  UNK_0xec16(); // UNK_0xec16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_UNK_0xf0e6); // UNK_0xf0e6
    Store_2(); // !_2
    UNK_0xf223(); // UNK_0xf223
    Push(Read16(pp_UNK_0xf13a)); // UNK_0xf13a @
    Push(i); // I
    UNK_0xf27d(); // UNK_0xf27d
    Push(Pop() * Pop()); // *
    Push(i); // I
    UNK_0xf271(); // UNK_0xf271
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf2eb: WORD 'UNK_0xf2ed' codep=0x224c parp=0xf2ed params=0 returns=3
// ================================================

void UNK_0xf2ed() // UNK_0xf2ed
{
  Push(0x00ff);
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  Push(0x6a82); // probable 'CONTOUR'
  SETLARR(); // SETLARR
  SWAP(); // SWAP
  Push(Read16(pp_XCON) + 1); // XCON @ 1+
  _dash_(); // -
  SWAP(); // SWAP
  Push(Read16(pp_YCON) + 1); // YCON @ 1+
  _dash_(); // -
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  _dash_(); // -
}


// ================================================
// 0xf31b: WORD 'UNK_0xf31d' codep=0x224c parp=0xf31d params=0 returns=2
// ================================================

void UNK_0xf31d() // UNK_0xf31d
{
  unsigned short int i, imax;
  UNK_0xf2ed(); // UNK_0xf2ed
  UNK_0xec16(); // UNK_0xec16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0xf27d(); // UNK_0xf27d
    OVER(); // OVER
    Push(0x0064);
    _star__slash_(); // */
    Push(i); // I
    UNK_0xf271(); // UNK_0xf271
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf33b: WORD 'UNK_0xf33d' codep=0x224c parp=0xf33d params=2 returns=1
// ================================================

void UNK_0xf33d() // UNK_0xf33d
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
// 0xf34f: WORD 'UNK_0xf351' codep=0x224c parp=0xf351
// ================================================

void UNK_0xf351() // UNK_0xf351
{
  unsigned short int i, imax;
  Push(0x0065);
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(UNK_0xec0e); // from 'PLANET'
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0064);
  Push(0x0100);
  _star__slash_(); // */
  _dash_(); // -
  UNK_0xec16(); // UNK_0xec16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0xf27d(); // UNK_0xf27d
    OVER(); // OVER
    Push(Pop() * Pop()); // *
    Push(i); // I
    UNK_0xf271(); // UNK_0xf271
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf383: WORD 'UNK_0xf385' codep=0x224c parp=0xf385 params=0 returns=0
// ================================================

void UNK_0xf385() // UNK_0xf385
{
  unsigned short int i, imax;
  UNK_0xec16(); // UNK_0xec16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x1388);
    Push(i); // I
    UNK_0xf27d(); // UNK_0xf27d
    UNK_0xf33d(); // UNK_0xf33d
    Push(i); // I
    UNK_0xf271(); // UNK_0xf271
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf39d: WORD 'UNK_0xf39f' codep=0x224c parp=0xf39f
// ================================================

void UNK_0xf39f() // UNK_0xf39f
{
  UNK_0xf31d(); // UNK_0xf31d
  UNK_0xf351(); // UNK_0xf351
  UNK_0xf385(); // UNK_0xf385
}


// ================================================
// 0xf3a7: WORD 'UNK_0xf3a9' codep=0x224c parp=0xf3a9 params=0 returns=1
// ================================================

void UNK_0xf3a9() // UNK_0xf3a9
{
  unsigned short int i, imax;
  Push(0);
  UNK_0xec16(); // UNK_0xec16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0xf27d(); // UNK_0xf27d
    Push(Pop() + Pop()); // +
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0x0021);
  MIN(); // MIN
}


// ================================================
// 0xf3c7: WORD 'UNK_0xf3c9' codep=0x224c parp=0xf3c9
// ================================================

void UNK_0xf3c9() // UNK_0xf3c9
{
  Push(0x01f4);
  UNK_0xf2cb(); // UNK_0xf2cb
  UNK_0xf39f(); // UNK_0xf39f
  UNK_0xf3a9(); // UNK_0xf3a9
  SAVE_dash_OV(); // SAVE-OV
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _slash_(); // /
    Push(6);
    Push(Pop() * Pop()); // *
    Push(pp_ETIME); // ETIME
    Store_2(); // !_2
  } else
  {
    Pop(); // DROP
  }
  Push(Read16(pp_ACT_n_)); // ACT# @
  UNK_0xf02a(); // UNK_0xf02a
  UNK_0xed31(); // UNK_0xed31
}


// ================================================
// 0xf3f7: WORD 'UNK_0xf3f9' codep=0x224c parp=0xf3f9
// ================================================

void UNK_0xf3f9() // UNK_0xf3f9
{
  unsigned short int i, imax;
  Push(pp_THIS_dash_RE); // THIS-RE
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  UNK_0xec16(); // UNK_0xec16

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0xf27d(); // UNK_0xf27d
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Pop()-1); // 1-
      Push(Read16(pp_ETIME)); // ETIME @
      Push(6);
      _slash_(); // /
      Push(Pop()-1); // 1-
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
        Push(0xba55); // probable 'ICON-'
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
  UNK_0xec4e(); // UNK_0xec4e
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf46d: WORD 'UNK_0xf46f' codep=0x224c parp=0xf46f
// ================================================

void UNK_0xf46f() // UNK_0xf46f
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
  Push(Read16(pp_NOF)==0?1:0); // NOF @ 0=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xecf1(); // UNK_0xecf1
    Push(pp_NOF); // NOF
    ON_2(); // ON_2
    UNK_0xf3f9(); // UNK_0xf3f9
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
  Push(0xb78d); // probable 'TV?ART'
  MODULE(); // MODULE
  Push(Pop() & Pop()); // AND
  Push(Read16(pp_NOF)==0?1:0); // NOF @ 0=
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(!Read16(pp_ETIME)); // ETIME @ NOT
    if (Pop() != 0)
    {
      Push(pp_NOF); // NOF
      ON_2(); // ON_2
      Push(0);
      Push(0);
      UNK_0xec60(); // UNK_0xec60
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
      Push(1);
      Push((Pop()==Pop())?1:0); // =
      if (Pop() != 0)
      {
        UNK_0xf289(); // UNK_0xf289
        UNK_0xf3c9(); // UNK_0xf3c9
        UNK_0xeca2(); // UNK_0xeca2
        TIME(); // TIME
        _2_at_(); // 2@
        Push(pp__n_ETIME); // #ETIME
        StoreD(); // D!
      } else
      {
        UNK_0xec4e(); // UNK_0xec4e
      }
    } else
    {
      UNK_0xf46f(); // UNK_0xf46f
      RECALL(); // RECALL
    }
    Push(pp_NOF); // NOF
    _099(); // 099
    CTERASE(); // CTERASE
  } else
  {
    Push(0xb7e7); // probable '.NOFUN'
    MODULE(); // MODULE
    Push(0x07d0);
    MS(); // MS
  }
  Push2Words("NULL");
}

// 0xf55a: db 0x44 0x52 0x4f 0x4e 0x45 0x2d 0x00 'DRONE- '

