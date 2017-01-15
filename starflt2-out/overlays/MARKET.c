// ====== OVERLAY 'MARKET' ======
// store offset = 0xe810
// overlay size   = 0x0d50

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe826  codep:0x224c parp:0xe826 size:0x003e C-string:'UNK_0xe826'
//      UNK_0xe866  codep:0x224c parp:0xe866 size:0x0008 C-string:'UNK_0xe866'
//      UNK_0xe870  codep:0x224c parp:0xe870 size:0x0008 C-string:'UNK_0xe870'
//      UNK_0xe87a  codep:0x224c parp:0xe87a size:0x000e C-string:'UNK_0xe87a'
//      UNK_0xe88a  codep:0x224c parp:0xe88a size:0x0012 C-string:'UNK_0xe88a'
//      UNK_0xe89e  codep:0x7394 parp:0xe89e size:0x0006 C-string:'UNK_0xe89e'
//      UNK_0xe8a6  codep:0x224c parp:0xe8a6 size:0x0006 C-string:'UNK_0xe8a6'
//      UNK_0xe8ae  codep:0x224c parp:0xe8ae size:0x0006 C-string:'UNK_0xe8ae'
//      UNK_0xe8b6  codep:0x224c parp:0xe8b6 size:0x0006 C-string:'UNK_0xe8b6'
//      UNK_0xe8be  codep:0x224c parp:0xe8be size:0x0004 C-string:'UNK_0xe8be'
//      UNK_0xe8c4  codep:0x224c parp:0xe8c4 size:0x0048 C-string:'UNK_0xe8c4'
//      UNK_0xe90e  codep:0x7394 parp:0xe90e size:0x0006 C-string:'UNK_0xe90e'
//      UNK_0xe916  codep:0x7394 parp:0xe916 size:0x0006 C-string:'UNK_0xe916'
//      UNK_0xe91e  codep:0x7394 parp:0xe91e size:0x0006 C-string:'UNK_0xe91e'
//      UNK_0xe926  codep:0x7394 parp:0xe926 size:0x0006 C-string:'UNK_0xe926'
//      UNK_0xe92e  codep:0x224c parp:0xe92e size:0x000c C-string:'UNK_0xe92e'
//      UNK_0xe93c  codep:0x224c parp:0xe93c size:0x0004 C-string:'UNK_0xe93c'
//      UNK_0xe942  codep:0x224c parp:0xe942 size:0x0012 C-string:'UNK_0xe942'
//      UNK_0xe956  codep:0x224c parp:0xe956 size:0x0004 C-string:'UNK_0xe956'
//      UNK_0xe95c  codep:0x224c parp:0xe95c size:0x0004 C-string:'UNK_0xe95c'
//      UNK_0xe962  codep:0x224c parp:0xe962 size:0x0004 C-string:'UNK_0xe962'
//      UNK_0xe968  codep:0x224c parp:0xe968 size:0x0004 C-string:'UNK_0xe968'
//      UNK_0xe96e  codep:0x224c parp:0xe96e size:0x000a C-string:'UNK_0xe96e'
//      UNK_0xe97a  codep:0x224c parp:0xe97a size:0x005c C-string:'UNK_0xe97a'
//           MCURS  codep:0x1d29 parp:0xe9e0 size:0x000d C-string:'MCURS'
//      UNK_0xe9ef  codep:0x224c parp:0xe9ef size:0x003e C-string:'UNK_0xe9ef'
//      UNK_0xea2f  codep:0x224c parp:0xea2f size:0x0016 C-string:'UNK_0xea2f'
//      UNK_0xea47  codep:0x224c parp:0xea47 size:0x0006 C-string:'UNK_0xea47'
//      UNK_0xea4f  codep:0x224c parp:0xea4f size:0x0006 C-string:'UNK_0xea4f'
//      UNK_0xea57  codep:0x224c parp:0xea57 size:0x003c C-string:'UNK_0xea57'
//      UNK_0xea95  codep:0x224c parp:0xea95 size:0x0043 C-string:'UNK_0xea95'
//      UNK_0xeada  codep:0x224c parp:0xeada size:0x006c C-string:'UNK_0xeada'
//      UNK_0xeb48  codep:0x224c parp:0xeb48 size:0x000e C-string:'UNK_0xeb48'
//      UNK_0xeb58  codep:0x224c parp:0xeb58 size:0x0006 C-string:'UNK_0xeb58'
//      UNK_0xeb60  codep:0x224c parp:0xeb60 size:0x000e C-string:'UNK_0xeb60'
//      UNK_0xeb70  codep:0x224c parp:0xeb70 size:0x0008 C-string:'UNK_0xeb70'
//      UNK_0xeb7a  codep:0x224c parp:0xeb7a size:0x0039 C-string:'UNK_0xeb7a'
//      UNK_0xebb5  codep:0x224c parp:0xebb5 size:0x000a C-string:'UNK_0xebb5'
//      UNK_0xebc1  codep:0x224c parp:0xebc1 size:0x0008 C-string:'UNK_0xebc1'
//      UNK_0xebcb  codep:0x224c parp:0xebcb size:0x002c C-string:'UNK_0xebcb'
//      UNK_0xebf9  codep:0x224c parp:0xebf9 size:0x002c C-string:'UNK_0xebf9'
//      UNK_0xec27  codep:0x224c parp:0xec27 size:0x0040 C-string:'UNK_0xec27'
//      UNK_0xec69  codep:0x224c parp:0xec69 size:0x0014 C-string:'UNK_0xec69'
//           C>VAL  codep:0x4b3b parp:0xec87 size:0x0014 C-string:'C_gt_VAL'
//      UNK_0xec9d  codep:0x224c parp:0xec9d size:0x0026 C-string:'UNK_0xec9d'
//      UNK_0xecc5  codep:0x224c parp:0xecc5 size:0x0012 C-string:'UNK_0xecc5'
//      UNK_0xecd9  codep:0x224c parp:0xecd9 size:0x0026 C-string:'UNK_0xecd9'
//      UNK_0xed01  codep:0x224c parp:0xed01 size:0x002a C-string:'UNK_0xed01'
//      UNK_0xed2d  codep:0x224c parp:0xed2d size:0x0008 C-string:'UNK_0xed2d'
//          T>NAME  codep:0x4b3b parp:0xed40 size:0x0014 C-string:'T_gt_NAME'
//      UNK_0xed56  codep:0x2214 parp:0xed56 size:0x0002 C-string:'UNK_0xed56'
//      UNK_0xed5a  codep:0x2214 parp:0xed5a size:0x0002 C-string:'UNK_0xed5a'
//      UNK_0xed5e  codep:0x2214 parp:0xed5e size:0x0002 C-string:'UNK_0xed5e'
//            TLEN  codep:0x4b3b parp:0xed69 size:0x000c C-string:'TLEN'
//      UNK_0xed77  codep:0x224c parp:0xed77 size:0x001e C-string:'UNK_0xed77'
//      UNK_0xed97  codep:0x224c parp:0xed97 size:0x0016 C-string:'UNK_0xed97'
//      UNK_0xedaf  codep:0x224c parp:0xedaf size:0x0036 C-string:'UNK_0xedaf'
//      UNK_0xede7  codep:0x224c parp:0xede7 size:0x0010 C-string:'UNK_0xede7'
//      UNK_0xedf9  codep:0x224c parp:0xedf9 size:0x0016 C-string:'UNK_0xedf9'
//      UNK_0xee11  codep:0x224c parp:0xee11 size:0x0006 C-string:'UNK_0xee11'
//      UNK_0xee19  codep:0x224c parp:0xee19 size:0x0018 C-string:'UNK_0xee19'
//      UNK_0xee33  codep:0x224c parp:0xee33 size:0x0016 C-string:'UNK_0xee33'
//      UNK_0xee4b  codep:0x224c parp:0xee4b size:0x000e C-string:'UNK_0xee4b'
//      UNK_0xee5b  codep:0x224c parp:0xee5b size:0x000e C-string:'UNK_0xee5b'
//      UNK_0xee6b  codep:0x224c parp:0xee6b size:0x0004 C-string:'UNK_0xee6b'
//      UNK_0xee71  codep:0x224c parp:0xee71 size:0x0010 C-string:'UNK_0xee71'
//      UNK_0xee83  codep:0x1d29 parp:0xee83 size:0x0002 C-string:'UNK_0xee83'
//      UNK_0xee87  codep:0x224c parp:0xee87 size:0x0014 C-string:'UNK_0xee87'
//      UNK_0xee9d  codep:0x224c parp:0xee9d size:0x0030 C-string:'UNK_0xee9d'
//      UNK_0xeecf  codep:0x224c parp:0xeecf size:0x0012 C-string:'UNK_0xeecf'
//      UNK_0xeee3  codep:0x224c parp:0xeee3 size:0x002f C-string:'UNK_0xeee3'
//      UNK_0xef14  codep:0x224c parp:0xef14 size:0x0042 C-string:'UNK_0xef14'
//      UNK_0xef58  codep:0x224c parp:0xef58 size:0x001a C-string:'UNK_0xef58'
//      UNK_0xef74  codep:0x224c parp:0xef74 size:0x0010 C-string:'UNK_0xef74'
//      UNK_0xef86  codep:0x224c parp:0xef86 size:0x0008 C-string:'UNK_0xef86'
//      UNK_0xef90  codep:0x224c parp:0xef90 size:0x000c C-string:'UNK_0xef90'
//      UNK_0xef9e  codep:0x224c parp:0xef9e size:0x000e C-string:'UNK_0xef9e'
//      UNK_0xefae  codep:0x224c parp:0xefae size:0x000e C-string:'UNK_0xefae'
//      UNK_0xefbe  codep:0x224c parp:0xefbe size:0x0012 C-string:'UNK_0xefbe'
//      UNK_0xefd2  codep:0x224c parp:0xefd2 size:0x0006 C-string:'UNK_0xefd2'
//      UNK_0xefda  codep:0x224c parp:0xefda size:0x0006 C-string:'UNK_0xefda'
//      UNK_0xefe2  codep:0x224c parp:0xefe2 size:0x000e C-string:'UNK_0xefe2'
//      UNK_0xeff2  codep:0x224c parp:0xeff2 size:0x0018 C-string:'UNK_0xeff2'
//      UNK_0xf00c  codep:0x224c parp:0xf00c size:0x001a C-string:'UNK_0xf00c'
//      UNK_0xf028  codep:0x224c parp:0xf028 size:0x000e C-string:'UNK_0xf028'
//      UNK_0xf038  codep:0x224c parp:0xf038 size:0x001a C-string:'UNK_0xf038'
//      UNK_0xf054  codep:0x224c parp:0xf054 size:0x0022 C-string:'UNK_0xf054'
//      UNK_0xf078  codep:0x224c parp:0xf078 size:0x004c C-string:'UNK_0xf078'
//      UNK_0xf0c6  codep:0x224c parp:0xf0c6 size:0x0012 C-string:'UNK_0xf0c6'
//      UNK_0xf0da  codep:0x224c parp:0xf0da size:0x0012 C-string:'UNK_0xf0da'
//      UNK_0xf0ee  codep:0x224c parp:0xf0ee size:0x001a C-string:'UNK_0xf0ee'
//      UNK_0xf10a  codep:0x224c parp:0xf10a size:0x0016 C-string:'UNK_0xf10a'
//      UNK_0xf122  codep:0x224c parp:0xf122 size:0x0010 C-string:'UNK_0xf122'
//      UNK_0xf134  codep:0x224c parp:0xf134 size:0x0006 C-string:'UNK_0xf134'
//      UNK_0xf13c  codep:0x224c parp:0xf13c size:0x0014 C-string:'UNK_0xf13c'
//      UNK_0xf152  codep:0x224c parp:0xf152 size:0x004e C-string:'UNK_0xf152'
//      UNK_0xf1a2  codep:0x224c parp:0xf1a2 size:0x000a C-string:'UNK_0xf1a2'
//      UNK_0xf1ae  codep:0x224c parp:0xf1ae size:0x0018 C-string:'UNK_0xf1ae'
//      UNK_0xf1c8  codep:0x2214 parp:0xf1c8 size:0x0002 C-string:'UNK_0xf1c8'
//            ID>#  codep:0x4b3b parp:0xf1d3 size:0x0014 C-string:'ID_gt__n_'
//      UNK_0xf1e9  codep:0x224c parp:0xf1e9 size:0x0020 C-string:'UNK_0xf1e9'
//      UNK_0xf20b  codep:0x224c parp:0xf20b size:0x000a C-string:'UNK_0xf20b'
//      UNK_0xf217  codep:0x224c parp:0xf217 size:0x000a C-string:'UNK_0xf217'
//      UNK_0xf223  codep:0x224c parp:0xf223 size:0x0049 C-string:'UNK_0xf223'
//      UNK_0xf26e  codep:0x224c parp:0xf26e size:0x0034 C-string:'UNK_0xf26e'
//      UNK_0xf2a4  codep:0x224c parp:0xf2a4 size:0x002e C-string:'UNK_0xf2a4'
//      UNK_0xf2d4  codep:0x224c parp:0xf2d4 size:0x001c C-string:'UNK_0xf2d4'
//      UNK_0xf2f2  codep:0x224c parp:0xf2f2 size:0x000a C-string:'UNK_0xf2f2'
//      UNK_0xf2fe  codep:0x224c parp:0xf2fe size:0x000a C-string:'UNK_0xf2fe'
//      UNK_0xf30a  codep:0x224c parp:0xf30a size:0x0012 C-string:'UNK_0xf30a'
//         P>REPLY  codep:0x4b3b parp:0xf328 size:0x0010 C-string:'P_gt_REPLY'
//      UNK_0xf33a  codep:0x224c parp:0xf33a size:0x0010 C-string:'UNK_0xf33a'
//      UNK_0xf34c  codep:0x224c parp:0xf34c size:0x0012 C-string:'UNK_0xf34c'
//      UNK_0xf360  codep:0x224c parp:0xf360 size:0x0028 C-string:'UNK_0xf360'
//      UNK_0xf38a  codep:0x224c parp:0xf38a size:0x002c C-string:'UNK_0xf38a'
//      UNK_0xf3b8  codep:0x224c parp:0xf3b8 size:0x0030 C-string:'UNK_0xf3b8'
//      UNK_0xf3ea  codep:0x224c parp:0xf3ea size:0x000c C-string:'UNK_0xf3ea'
//      UNK_0xf3f8  codep:0x224c parp:0xf3f8 size:0x000c C-string:'UNK_0xf3f8'
//      UNK_0xf406  codep:0x224c parp:0xf406 size:0x0073 C-string:'UNK_0xf406'
//      UNK_0xf47b  codep:0x224c parp:0xf47b size:0x0008 C-string:'UNK_0xf47b'
//      UNK_0xf485  codep:0x224c parp:0xf485 size:0x0008 C-string:'UNK_0xf485'
//        T>ACTION  codep:0x4b3b parp:0xf49a size:0x0010 C-string:'T_gt_ACTION'
//      UNK_0xf4ac  codep:0x224c parp:0xf4ac size:0x0024 C-string:'UNK_0xf4ac'
//      UNK_0xf4d2  codep:0x224c parp:0xf4d2 size:0x0032 C-string:'UNK_0xf4d2'
//           TRADE  codep:0x224c parp:0xf50e size:0x0000 C-string:'TRADE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_PIC_n_; // PIC#
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_WCHARS; // WCHARS
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_TERMINA; // TERMINA
extern const unsigned short int pp_TBOX; // TBOX
extern const unsigned short int pp__1ST; // 1ST
extern const unsigned short int pp_SELLING; // SELLING
extern const unsigned short int pp_BARTERI; // BARTERI
extern const unsigned short int pp__ask_REPLY; // ?REPLY
extern const unsigned short int pp_PLAST; // PLAST
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp_SUPER_dash_B; // SUPER-B
extern const unsigned short int pp__ro_THIS_dash_I; // (THIS-I
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern const unsigned short int pp__ro_THING_rc_; // (THING)
extern const unsigned short int pp_CTTOP; // CTTOP
extern const unsigned short int pp_CTBOT; // CTBOT
void M_star_(); // M*
void MAX(); // MAX
void MIN(); // MIN
void PAD(); // PAD
void D_dot_(); // D.
void U_dot_(); // U.
void MS(); // MS
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void D_eq_(); // D=
void WITHIN(); // WITHIN
void DMIN(); // DMIN
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void _at_INST_dash_C(); // @INST-C
void _at_INST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void ILAST(); // ILAST
void IINSERT(); // IINSERT
void _gt_INSERT(); // >INSERT
void IEXTRAC(); // IEXTRAC
void IFLD_at_(); // IFLD@
void IFIND(); // IFIND
void _ex_COLOR(); // !COLOR
void _at_COLOR(); // @COLOR
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_DISPLA(); // >DISPLA
void LCOPYBL(); // LCOPYBL
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void BEEPON_2(); // BEEPON_2
void _at_CRS(); // @CRS
void _ex_CRS(); // !CRS
void POLY_dash_ER(); // POLY-ER
void WUP(); // WUP
void GCR(); // GCR
void _gt_BOTT(); // >BOTT
void _dot_TTY(); // .TTY
void XYSCAN(); // XYSCAN
void _ask_TRIG(); // ?TRIG
void _ask_QUIT(); // ?QUIT
void CURSORS(); // CURSORS
void BLD_dash_CRS(); // BLD-CRS
void SET_dash_CRS(); // SET-CRS
void _dash_XTRAIL(); // -XTRAIL
void GET_dash_BOX(); // GET-BOX
void MAKE_dash_SC(); // MAKE-SC
void DELETE_dash_(); // DELETE-
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void CI(); // CI
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_MCURS = 0xe9e0; // MCURS size: 13
// {0x02, 0x0a, 0x02, 0x09, 0x33, 0x0a, 0x36, 0x09, 0x34, 0x0a, 0x6b, 0x09, 0x33}

const unsigned short int pp_UNK_0xee83 = 0xee83; // UNK_0xee83 size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xed56 = 0xed56; // UNK_0xed56
const unsigned short int cc_UNK_0xed5a = 0xed5a; // UNK_0xed5a
const unsigned short int cc_UNK_0xed5e = 0xed5e; // UNK_0xed5e
const unsigned short int cc_UNK_0xf1c8 = 0xf1c8; // UNK_0xf1c8


// 0xe822: db 0xd4 0x00 '  '

// ================================================
// 0xe824: WORD 'UNK_0xe826' codep=0x224c parp=0xe826
// ================================================

void UNK_0xe826() // UNK_0xe826
{
  unsigned short int a, b, c;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(c); // I
  SWAP(); // SWAP
  Push(a); // J
  OVER(); // OVER
  LLINE(); // LLINE
  Push(c); // I
  OVER(); // OVER
  Push(c); // I
  Push(b); // I'
  LLINE(); // LLINE
  Push(c); // I
  Push(b); // I'
  Push(a); // J
  Push(b); // I'
  LLINE(); // LLINE
  Push(a); // J
  Push(b); // I'
  ROT(); // ROT
  Push(a); // J
  SWAP(); // SWAP
  LLINE(); // LLINE
  Push(c); // R>
  Pop(); // DROP
  Push(b); // R>
  Push(a); // R>
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe864: WORD 'UNK_0xe866' codep=0x224c parp=0xe866
// ================================================

void UNK_0xe866() // UNK_0xe866
{
  Push(1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe86e: WORD 'UNK_0xe870' codep=0x224c parp=0xe870
// ================================================

void UNK_0xe870() // UNK_0xe870
{
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe878: WORD 'UNK_0xe87a' codep=0x224c parp=0xe87a
// ================================================

void UNK_0xe87a() // UNK_0xe87a
{
  UNK_0xe866(); // UNK_0xe866
  Push(1);
  Push(0xb822); // probable 'PSYCH'
  MODULE(); // MODULE
  UNK_0xe870(); // UNK_0xe870
}


// ================================================
// 0xe888: WORD 'UNK_0xe88a' codep=0x224c parp=0xe88a
// ================================================

void UNK_0xe88a() // UNK_0xe88a
{
  UNK_0xe866(); // UNK_0xe866
  Push(0);
  Push(0xb822); // probable 'PSYCH'
  MODULE(); // MODULE
  UNK_0xe870(); // UNK_0xe870
}

// 0xe898: db 0x14 0x22 0x15 0x00 ' "  '

// ================================================
// 0xe89c: WORD 'UNK_0xe89e' codep=0x7394 parp=0xe89e
// ================================================
// 0xe89e: db 0x15 0x00 0x10 0x32 0xd1 0x6a '   2 j'

// ================================================
// 0xe8a4: WORD 'UNK_0xe8a6' codep=0x224c parp=0xe8a6
// ================================================

void UNK_0xe8a6() // UNK_0xe8a6
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe8ac: WORD 'UNK_0xe8ae' codep=0x224c parp=0xe8ae
// ================================================

void UNK_0xe8ae() // UNK_0xe8ae
{
  Push(pp__ro_THING_rc_); // (THING)
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe8b4: WORD 'UNK_0xe8b6' codep=0x224c parp=0xe8b6
// ================================================

void UNK_0xe8b6() // UNK_0xe8b6
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe8bc: WORD 'UNK_0xe8be' codep=0x224c parp=0xe8be
// ================================================

void UNK_0xe8be() // UNK_0xe8be
{
  SetColor("RED");
}


// ================================================
// 0xe8c2: WORD 'UNK_0xe8c4' codep=0x224c parp=0xe8c4
// ================================================

void UNK_0xe8c4() // UNK_0xe8c4
{
  Push(0x000a);
  Push(2);
  Push(2);
  Push(0x009d);
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
  UNK_0xe8be(); // UNK_0xe8be
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(1);
  Push(1);
  Push(0x000b);
  Push(0x0035);
  UNK_0xe826(); // UNK_0xe826
  Push(1);
  Push(0x0035);
  Push(0x000b);
  Push(0x006a);
  UNK_0xe826(); // UNK_0xe826
  Push(1);
  Push(0x006a);
  Push(0x000b);
  Push(0x009e);
  UNK_0xe826(); // UNK_0xe826
}


// ================================================
// 0xe90c: WORD 'UNK_0xe90e' codep=0x7394 parp=0xe90e
// ================================================
// 0xe90e: db 0x44 0x00 0x14 0x22 0x07 0x6f 'D  " o'

// ================================================
// 0xe914: WORD 'UNK_0xe916' codep=0x7394 parp=0xe916
// ================================================
// 0xe916: db 0x44 0x14 0x02 0x22 0x07 0x6f 'D  " o'

// ================================================
// 0xe91c: WORD 'UNK_0xe91e' codep=0x7394 parp=0xe91e
// ================================================
// 0xe91e: db 0x09 0x00 0x18 0x1b 0x54 0x6a '    Tj'

// ================================================
// 0xe924: WORD 'UNK_0xe926' codep=0x7394 parp=0xe926
// ================================================
// 0xe926: db 0x09 0x18 0x02 0x1b 0x54 0x6a '    Tj'

// ================================================
// 0xe92c: WORD 'UNK_0xe92e' codep=0x224c parp=0xe92e
// ================================================

void UNK_0xe92e() // UNK_0xe92e
{
  UNK_0xe8ae(); // UNK_0xe8ae
  Push(0xa9ce); // probable 'ASKING'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe93a: WORD 'UNK_0xe93c' codep=0x224c parp=0xe93c
// ================================================

void UNK_0xe93c() // UNK_0xe93c
{
  SetColor("LT-BLUE");
}


// ================================================
// 0xe940: WORD 'UNK_0xe942' codep=0x224c parp=0xe942
// ================================================

void UNK_0xe942() // UNK_0xe942
{
  SetColor("WHITE");
}

// 0xe946: db 0x4c 0x22 0x0c 0x50 0x90 0x16 0x4c 0x22 0x46 0xe9 0x9d 0x86 0x90 0x16 'L" P  L"F     '

// ================================================
// 0xe954: WORD 'UNK_0xe956' codep=0x224c parp=0xe956
// ================================================

void UNK_0xe956() // UNK_0xe956
{
  SetColor("WHITE");
}


// ================================================
// 0xe95a: WORD 'UNK_0xe95c' codep=0x224c parp=0xe95c
// ================================================

void UNK_0xe95c() // UNK_0xe95c
{
  SetColor("WHITE");
}


// ================================================
// 0xe960: WORD 'UNK_0xe962' codep=0x224c parp=0xe962
// ================================================

void UNK_0xe962() // UNK_0xe962
{
  SetColor("YELLOW");
}


// ================================================
// 0xe966: WORD 'UNK_0xe968' codep=0x224c parp=0xe968
// ================================================

void UNK_0xe968() // UNK_0xe968
{
  SetColor("ORANGE");
}


// ================================================
// 0xe96c: WORD 'UNK_0xe96e' codep=0x224c parp=0xe96e
// ================================================

void UNK_0xe96e() // UNK_0xe96e
{
  SetColor("BLUE");
}

// 0xe972: db 0x4c 0x22 0x0c 0x50 0x90 0x16 'L" P  '

// ================================================
// 0xe978: WORD 'UNK_0xe97a' codep=0x224c parp=0xe97a
// ================================================

void UNK_0xe97a() // UNK_0xe97a
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe8be(); // UNK_0xe8be
  _ex_COLOR(); // !COLOR
  Push(0);
  Push(0);
  Push(0x00c7);
  Push(0x009f);
  UNK_0xe826(); // UNK_0xe826
  UNK_0xe8c4(); // UNK_0xe8c4
  Push(0x0086);
  Push(3);
  Push(0x00c6);
  Push(0x0035);
  UNK_0xe826(); // UNK_0xe826
  Push(0x0086);
  Push(1);
  Push(0x00c6);
  Push(2);
  UNK_0xe826(); // UNK_0xe826
  Push(0x0086);
  Push(0x0038);
  Push(0x00c6);
  Push(0x009e);
  UNK_0xe826(); // UNK_0xe826
  Push(0x0086);
  Push(0x0036);
  Push(0x00c6);
  Push(0x0037);
  UNK_0xe826(); // UNK_0xe826
}


// ================================================
// 0xe9d6: WORD 'MCURS' codep=0x1d29 parp=0xe9e0
// ================================================
// 0xe9e0: db 0x02 0x0a 0x02 0x09 0x33 0x0a 0x36 0x09 0x34 0x0a 0x6b 0x09 0x33 '    3 6 4 k 3'

// ================================================
// 0xe9ed: WORD 'UNK_0xe9ef' codep=0x224c parp=0xe9ef
// ================================================

void UNK_0xe9ef() // UNK_0xe9ef
{
  Push(2);
  Push(pp_WLEFT); // WLEFT
  _ex__2(); // !_2
  Push(0x000d);
  Push(Read16(regsp)); // DUP
  Push(pp_WBOTTOM); // WBOTTOM
  _ex__2(); // !_2
  Push(pp_CTBOT); // CTBOT
  _ex__2(); // !_2
  Push(0x0084);
  Push(Read16(regsp)); // DUP
  Push(pp_WTOP); // WTOP
  _ex__2(); // !_2
  Push(Pop()-1); // 1-
  Push(pp_CTTOP); // CTTOP
  _ex__2(); // !_2
  Push(0x00a0);
  Push(pp_WRIGHT); // WRIGHT
  _ex__2(); // !_2
  Push(0x0010);
  Push(pp_WLINES); // WLINES
  _ex__2(); // !_2
  Push(0x0026);
  Push(pp_WCHARS); // WCHARS
  _ex__2(); // !_2
}


// ================================================
// 0xea2d: WORD 'UNK_0xea2f' codep=0x224c parp=0xea2f
// ================================================

void UNK_0xea2f() // UNK_0xea2f
{
  UNK_0xe93c(); // UNK_0xe93c
  Push(pp_CRSCOLO); // CRSCOLO
  _ex__2(); // !_2
  Push(Read16(regsp)); // DUP
  Push(pp_NCRS); // NCRS
  _ex__2(); // !_2
  Push(pp_OCRS); // OCRS
  _ex__2(); // !_2
  Push(pp_MCURS); // MCURS
  BLD_dash_CRS(); // BLD-CRS
}


// ================================================
// 0xea45: WORD 'UNK_0xea47' codep=0x224c parp=0xea47
// ================================================

void UNK_0xea47() // UNK_0xea47
{
  Push(0);
  UNK_0xea2f(); // UNK_0xea2f
}


// ================================================
// 0xea4d: WORD 'UNK_0xea4f' codep=0x224c parp=0xea4f
// ================================================

void UNK_0xea4f() // UNK_0xea4f
{
  Push(1);
  UNK_0xea2f(); // UNK_0xea2f
}


// ================================================
// 0xea55: WORD 'UNK_0xea57' codep=0x224c parp=0xea57
// ================================================

void UNK_0xea57() // UNK_0xea57
{
  UNK_0xe8c4(); // UNK_0xe8c4
  _gt_1FONT(); // >1FONT
  UNK_0xe942(); // UNK_0xe942
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0013);
  Push(8);
  POS_dot_(); // POS.
  PRINT("BUY", 3); // (.")
  Push(0x0048);
  Push(8);
  POS_dot_(); // POS.
  PRINT("SELL", 4); // (.")
  Push(0x007d);
  Push(8);
  POS_dot_(); // POS.
  PRINT("EXIT", 4); // (.")
  UNK_0xea47(); // UNK_0xea47
}


// ================================================
// 0xea93: WORD 'UNK_0xea95' codep=0x224c parp=0xea95
// ================================================

void UNK_0xea95() // UNK_0xea95
{
  UNK_0xe8c4(); // UNK_0xe8c4
  _gt_1FONT(); // >1FONT
  UNK_0xe942(); // UNK_0xe942
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0011);
  Push(8);
  POS_dot_(); // POS.
  PRINT("AGREE", 5); // (.")
  Push(0x0042);
  Push(8);
  POS_dot_(); // POS.
  PRINT("COUNTER", 7); // (.")
  Push(0x0079);
  Push(8);
  POS_dot_(); // POS.
  PRINT("REFUSE", 6); // (.")
  UNK_0xea4f(); // UNK_0xea4f
}


// ================================================
// 0xead8: WORD 'UNK_0xeada' codep=0x224c parp=0xeada
// ================================================

void UNK_0xeada() // UNK_0xeada
{
  Push(0x003a);
  Push(0x00c3);
  POS_dot_(); // POS.
  PRINT("YOU ARE ", 8); // (.")
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(pp_SELLING); // SELLING
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    PRINT("SELLING", 7); // (.")
  } else
  {
    PRINT("BUYING", 6); // (.")
  }
  _ex_COLOR(); // !COLOR
  Push(0x003a);
  Push(0x00b5);
  POS_dot_(); // POS.
  Push(0x0018);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  Push(pp_SELLING); // SELLING
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    PRINT("TO ", 3); // (.")
    return;
  }
  PRINT("FROM ", 5); // (.")
}


// ================================================
// 0xeb46: WORD 'UNK_0xeb48' codep=0x224c parp=0xeb48
// ================================================

void UNK_0xeb48() // UNK_0xeb48
{
  UNK_0xe8a6(); // UNK_0xe8a6
  LoadData("UNK_0xe89e"); // from 'TRADERS     '
  Push(0x0010);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb56: WORD 'UNK_0xeb58' codep=0x224c parp=0xeb58
// ================================================

void UNK_0xeb58() // UNK_0xeb58
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xeb5e: WORD 'UNK_0xeb60' codep=0x224c parp=0xeb60
// ================================================

void UNK_0xeb60() // UNK_0xeb60
{
  UNK_0xeb58(); // UNK_0xeb58
  _gt_C_plus_S(); // >C+S
  Push(0x65ef); // IFIELD(TEXT-IN)
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeb6e: WORD 'UNK_0xeb70' codep=0x224c parp=0xeb70
// ================================================

void UNK_0xeb70() // UNK_0xeb70
{
  UNK_0xeb60(); // UNK_0xeb60
  CI(); // CI
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb78: WORD 'UNK_0xeb7a' codep=0x224c parp=0xeb7a
// ================================================

void UNK_0xeb7a() // UNK_0xeb7a
{
  Push(0x003a);
  Push(0x008d);
  POS_dot_(); // POS.
  Push(0x0018);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  UNK_0xe96e(); // UNK_0xe96e
  _ex_COLOR(); // !COLOR
  PRINT("BALANCE: ", 9); // (.")
  UNK_0xe942(); // UNK_0xe942
  _ex_COLOR(); // !COLOR
  Push(0xc285); // probable 'OVD@BAL'
  MODULE(); // MODULE
  D_dot_(); // D.
  UNK_0xe96e(); // UNK_0xe96e
  _ex_COLOR(); // !COLOR
  PRINT("SP", 2); // (.")
}


// ================================================
// 0xebb3: WORD 'UNK_0xebb5' codep=0x224c parp=0xebb5
// ================================================

void UNK_0xebb5() // UNK_0xebb5
{
  UNK_0xeb70(); // UNK_0xeb70
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
}


// ================================================
// 0xebbf: WORD 'UNK_0xebc1' codep=0x224c parp=0xebc1
// ================================================

void UNK_0xebc1() // UNK_0xebc1
{
  UNK_0xeb70(); // UNK_0xeb70
  Push2Words("*STARSH");
  D_eq_(); // D=
}


// ================================================
// 0xebc9: WORD 'UNK_0xebcb' codep=0x224c parp=0xebcb
// ================================================

void UNK_0xebcb() // UNK_0xebcb
{
  UNK_0xebb5(); // UNK_0xebb5
  if (Pop() != 0)
  {
    Push(pp_TBOX); // TBOX
    ON_2(); // ON_2
  } else
  {
    UNK_0xebc1(); // UNK_0xebc1
    if (Pop() != 0)
    {
      Push(pp_TBOX); // TBOX
      _099(); // 099
    }
  }
  UNK_0xe8b6(); // UNK_0xe8b6
  UNK_0xeb58(); // UNK_0xeb58
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xebf7: WORD 'UNK_0xebf9' codep=0x224c parp=0xebf9
// ================================================

void UNK_0xebf9() // UNK_0xebf9
{
  UNK_0xebb5(); // UNK_0xebb5
  if (Pop() != 0)
  {
    Push(pp_TBOX); // TBOX
    _099(); // 099
  } else
  {
    UNK_0xebc1(); // UNK_0xebc1
    if (Pop() != 0)
    {
      Push(pp_TBOX); // TBOX
      ON_2(); // ON_2
    }
  }
  UNK_0xe8b6(); // UNK_0xe8b6
  UNK_0xeb58(); // UNK_0xeb58
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec25: WORD 'UNK_0xec27' codep=0x224c parp=0xec27
// ================================================

void UNK_0xec27() // UNK_0xec27
{
  Push(0x002e);
  Push(pp__dash_AIN); // -AIN
  _ex__2(); // !_2
  Push(5);
  Push(0xb6fd); // probable 'OV#IN$'
  MODULE(); // MODULE
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(-1);
    return;
  }
  Push(0);
  PAD(); // PAD
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  Push(Pop() + Pop()); // +
  _ex__2(); // !_2
  Exec("NUMBER"); // call of word 0x13d1 '(NUMBER)'
  Push(0xfde8); Push(0x0000);
  DMIN(); // DMIN
  Pop(); // DROP
}


// ================================================
// 0xec67: WORD 'UNK_0xec69' codep=0x224c parp=0xec69
// ================================================

void UNK_0xec69() // UNK_0xec69
{
  Push(pp_SELLING); // SELLING
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xe95c(); // UNK_0xe95c
  } else
  {
    UNK_0xe956(); // UNK_0xe956
  }
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xec7d: WORD 'C>VAL' codep=0x4b3b parp=0xec87
// ================================================

void C_gt_VAL() // C>VAL
{
  switch(Pop()) // C>VAL
  {
  case 28:
    LoadData("ART-VAL"); // from 'ARTIFACT    '
    break;
  case 26:
    LoadData("ELEM-VA"); // from 'ELEMENT     '
    break;
  case 68:
    LoadData("UNK_0xe916"); // from 'CREATURE    '
    break;
  case 9:
    LoadData("UNK_0xe926"); // from 'STIS        '
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xec9b: WORD 'UNK_0xec9d' codep=0x224c parp=0xec9d
// ================================================

void UNK_0xec9d() // UNK_0xec9d
{
  Push(0xa9ce); // probable 'ASKING'
  IFLD_at_(); // IFLD@
  Push(0x000a);
  _slash_(); // /
  Push(0x0064);
  M_star_(); // M*
  _at_INST_dash_C(); // @INST-C
  C_gt_VAL(); // C>VAL case
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xecc3: WORD 'UNK_0xecc5' codep=0x224c parp=0xecc5
// ================================================

void UNK_0xecc5() // UNK_0xecc5
{
  Push(0x007a);
  Push(0x00aa);
  POS_dot_(); // POS.
  Push(5);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
}


// ================================================
// 0xecd7: WORD 'UNK_0xecd9' codep=0x224c parp=0xecd9
// ================================================

void UNK_0xecd9() // UNK_0xecd9
{
  Push(0x003a);
  Push(0x00aa);
  POS_dot_(); // POS.
  _at_COLOR(); // @COLOR
  UNK_0xe96e(); // UNK_0xe96e
  _ex_COLOR(); // !COLOR
  PRINT("S.T.V. RATING =", 15); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xecff: WORD 'UNK_0xed01' codep=0x224c parp=0xed01
// ================================================

void UNK_0xed01() // UNK_0xed01
{
  UNK_0xecc5(); // UNK_0xecc5
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  _at_COLOR(); // @COLOR
  UNK_0xe942(); // UNK_0xe942
  _ex_COLOR(); // !COLOR
  UNK_0xec9d(); // UNK_0xec9d
  U_dot_(); // U.
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("%", 1); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xed2b: WORD 'UNK_0xed2d' codep=0x224c parp=0xed2d
// ================================================

void UNK_0xed2d() // UNK_0xed2d
{
  UNK_0xeb60(); // UNK_0xeb60
  UNK_0xed01(); // UNK_0xed01
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed35: WORD 'T>NAME' codep=0x4b3b parp=0xed40
// ================================================

void T_gt_NAME() // T>NAME
{
  switch(Pop()) // T>NAME
  {
  case 28:
    LoadData("ART-NAM"); // from 'ARTIFACT    '
    break;
  case 68:
    LoadData("UNK_0xe90e"); // from 'CREATURE    '
    break;
  case 9:
    LoadData("UNK_0xe91e"); // from 'STIS        '
    break;
  case 26:
    LoadData("ELEM-NA"); // from 'ELEMENT     '
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed54: WORD 'UNK_0xed56' codep=0x2214 parp=0xed56
// ================================================
// 0xed56: db 0x10 0x00 '  '

// ================================================
// 0xed58: WORD 'UNK_0xed5a' codep=0x2214 parp=0xed5a
// ================================================
// 0xed5a: db 0x14 0x00 '  '

// ================================================
// 0xed5c: WORD 'UNK_0xed5e' codep=0x2214 parp=0xed5e
// ================================================
// 0xed5e: db 0x18 0x00 '  '

// ================================================
// 0xed60: WORD 'TLEN' codep=0x4b3b parp=0xed69
// ================================================

void TLEN() // TLEN
{
  switch(Pop()) // TLEN
  {
  case 26:
    Push(Read16(cc_UNK_0xed56)); // UNK_0xed56
    break;
  case 68:
    Push(Read16(cc_UNK_0xed5a)); // UNK_0xed5a
    break;
  default:
    Push(Read16(cc_UNK_0xed5e)); // UNK_0xed5e
    break;

  }
}

// ================================================
// 0xed75: WORD 'UNK_0xed77' codep=0x224c parp=0xed77
// ================================================

void UNK_0xed77() // UNK_0xed77
{
  _at_INST_dash_C(); // @INST-C
  Push(Read16(regsp)); // DUP
  T_gt_NAME(); // T>NAME case
  SWAP(); // SWAP
  TLEN(); // TLEN case
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Push(0x003a);
  Push(0x00bc);
  POS_dot_(); // POS.
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xed95: WORD 'UNK_0xed97' codep=0x224c parp=0xed97
// ================================================

void UNK_0xed97() // UNK_0xed97
{
  Push(0x00c5);
  Push(0x0039);
  Push(0x0087);
  Push(0x009d);
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xedad: WORD 'UNK_0xedaf' codep=0x224c parp=0xedaf
// ================================================

void UNK_0xedaf() // UNK_0xedaf
{
  UNK_0xed97(); // UNK_0xed97
  UNK_0xe8ae(); // UNK_0xe8ae
  CI(); // CI
  Push2Words("0.");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_1FONT(); // >1FONT
  UNK_0xe96e(); // UNK_0xe96e
  _ex_COLOR(); // !COLOR
  if (Pop() != 0)
  {
    UNK_0xeada(); // UNK_0xeada
    UNK_0xeb48(); // UNK_0xeb48
    UNK_0xed77(); // UNK_0xed77
    UNK_0xecd9(); // UNK_0xecd9
    UNK_0xed01(); // UNK_0xed01
  } else
  {
    Push(0x003a);
    Push(0x00b5);
    POS_dot_(); // POS.
    UNK_0xeb48(); // UNK_0xeb48
  }
  UNK_0xeb7a(); // UNK_0xeb7a
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xede5: WORD 'UNK_0xede7' codep=0x224c parp=0xede7
// ================================================

void UNK_0xede7() // UNK_0xede7
{
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_CTTOP); // CTTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xedf7: WORD 'UNK_0xedf9' codep=0x224c parp=0xedf9
// ================================================

void UNK_0xedf9() // UNK_0xedf9
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x0085);
  Push(1);
  Push(0x000c);
  Push(0x009e);
  Push(a); // R>
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xee0f: WORD 'UNK_0xee11' codep=0x224c parp=0xee11
// ================================================

void UNK_0xee11() // UNK_0xee11
{
  SetColor("BLACK");
  UNK_0xedf9(); // UNK_0xedf9
}


// ================================================
// 0xee17: WORD 'UNK_0xee19' codep=0x224c parp=0xee19
// ================================================

void UNK_0xee19() // UNK_0xee19
{
  Push(2);
  Push(0x0083);
  Push(0x009e);
  Push(0x0013);
  Push(2);
  Push(0x0084);
  LCOPYBL(); // LCOPYBL
}


// ================================================
// 0xee31: WORD 'UNK_0xee33' codep=0x224c parp=0xee33
// ================================================

void UNK_0xee33() // UNK_0xee33
{
  Push(2);
  Push(0x0084);
  Push(0x009e);
  Push(Read16(cc_UNK_0xed5a)); // UNK_0xed5a
  Push(2);
  Push(0x0083);
  LCOPYBL(); // LCOPYBL
}


// ================================================
// 0xee49: WORD 'UNK_0xee4b' codep=0x224c parp=0xee4b
// ================================================

void UNK_0xee4b() // UNK_0xee4b
{
  unsigned short int i, imax;
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xee19(); // UNK_0xee19
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xee59: WORD 'UNK_0xee5b' codep=0x224c parp=0xee5b
// ================================================

void UNK_0xee5b() // UNK_0xee5b
{
  unsigned short int i, imax;
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xee33(); // UNK_0xee33
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xee69: WORD 'UNK_0xee6b' codep=0x224c parp=0xee6b
// ================================================

void UNK_0xee6b() // UNK_0xee6b
{
  WUP(); // WUP
}


// ================================================
// 0xee6f: WORD 'UNK_0xee71' codep=0x224c parp=0xee71
// ================================================

void UNK_0xee71() // UNK_0xee71
{
  UNK_0xee6b(); // UNK_0xee6b
  _gt_BOTT(); // >BOTT
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xee81: WORD 'UNK_0xee83' codep=0x1d29 parp=0xee83
// ================================================
// 0xee83: db 0x3a 0x20 ': '

// ================================================
// 0xee85: WORD 'UNK_0xee87' codep=0x224c parp=0xee87
// ================================================

void UNK_0xee87() // UNK_0xee87
{
  Push(pp_SELLING); // SELLING
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xe968(); // UNK_0xe968
  } else
  {
    UNK_0xe962(); // UNK_0xe962
  }
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xee9b: WORD 'UNK_0xee9d' codep=0x224c parp=0xee9d
// ================================================

void UNK_0xee9d() // UNK_0xee9d
{
  unsigned short int a;
  a = Pop(); // >R
  _at_CRS(); // @CRS
  Push(1);
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  Push(7);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(0x009e);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  UNK_0xee87(); // UNK_0xee87
  Push(1);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  _ex_CRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF_2(); // OFF_2
}


// ================================================
// 0xeecd: WORD 'UNK_0xeecf' codep=0x224c parp=0xeecf
// ================================================

void UNK_0xeecf() // UNK_0xeecf
{
  Push(0x0083);
  Push(pp_UNK_0xee83); // UNK_0xee83
  Push(Read16(Pop())); // @
  Push(7);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  UNK_0xee9d(); // UNK_0xee9d
}


// ================================================
// 0xeee1: WORD 'UNK_0xeee3' codep=0x224c parp=0xeee3
// ================================================

void UNK_0xeee3() // UNK_0xeee3
{
  _gt_BOTT(); // >BOTT
  UNK_0xe96e(); // UNK_0xe96e
  _ex_COLOR(); // !COLOR
  PRINT(" SCROLL CURSOR: ^\\          QUIT: []", 36); // (.")
}


// ================================================
// 0xef12: WORD 'UNK_0xef14' codep=0x224c parp=0xef14
// ================================================

void UNK_0xef14() // UNK_0xef14
{
  unsigned short int i, imax;
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  UNK_0xee11(); // UNK_0xee11
  UNK_0xec69(); // UNK_0xec69
  UNK_0xede7(); // UNK_0xede7
  UNK_0xe8b6(); // UNK_0xe8b6
  IOPEN(); // IOPEN
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x65f2); // IFIELD(TEXT-TE)
    Push(pp_WCHARS); // WCHARS
    Push(Read16(Pop())); // @
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    GCR(); // GCR
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

  IFIRST(); // IFIRST
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(pp_UNK_0xee83); // UNK_0xee83
  _099(); // 099
  UNK_0xeecf(); // UNK_0xeecf
  UNK_0xeee3(); // UNK_0xeee3
}


// ================================================
// 0xef56: WORD 'UNK_0xef58' codep=0x224c parp=0xef58
// ================================================

void UNK_0xef58() // UNK_0xef58
{
  UNK_0xeb60(); // UNK_0xeb60
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef72: WORD 'UNK_0xef74' codep=0x224c parp=0xef74
// ================================================

void UNK_0xef74() // UNK_0xef74
{
  UNK_0xef58(); // UNK_0xef58
  if (Pop() != 0)
  {
    UNK_0xed2d(); // UNK_0xed2d
    return;
  }
  UNK_0xecc5(); // UNK_0xecc5
}


// ================================================
// 0xef84: WORD 'UNK_0xef86' codep=0x224c parp=0xef86
// ================================================

void UNK_0xef86() // UNK_0xef86
{
  Push(pp_UNK_0xee83); // UNK_0xee83
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xef8e: WORD 'UNK_0xef90' codep=0x224c parp=0xef90
// ================================================

void UNK_0xef90() // UNK_0xef90
{
  Push(pp_UNK_0xee83); // UNK_0xee83
  Push(Read16(Pop())); // @
  Push(0x000f);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xef9c: WORD 'UNK_0xef9e' codep=0x224c parp=0xef9e
// ================================================

void UNK_0xef9e() // UNK_0xef9e
{
  UNK_0xeecf(); // UNK_0xeecf
  Push(-1);
  Push(pp_UNK_0xee83); // UNK_0xee83
  _plus__ex__2(); // +!_2
  UNK_0xeecf(); // UNK_0xeecf
  UNK_0xebf9(); // UNK_0xebf9
}


// ================================================
// 0xefac: WORD 'UNK_0xefae' codep=0x224c parp=0xefae
// ================================================

void UNK_0xefae() // UNK_0xefae
{
  UNK_0xeecf(); // UNK_0xeecf
  Push(1);
  Push(pp_UNK_0xee83); // UNK_0xee83
  _plus__ex__2(); // +!_2
  UNK_0xeecf(); // UNK_0xeecf
  UNK_0xebcb(); // UNK_0xebcb
}


// ================================================
// 0xefbc: WORD 'UNK_0xefbe' codep=0x224c parp=0xefbe
// ================================================

void UNK_0xefbe() // UNK_0xefbe
{
  UNK_0xec69(); // UNK_0xec69
  UNK_0xeb58(); // UNK_0xeb58
  _gt_C_plus_S(); // >C+S
  Push(0x65f2); // IFIELD(TEXT-TE)
  Push(0x0026);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefd0: WORD 'UNK_0xefd2' codep=0x224c parp=0xefd2
// ================================================

void UNK_0xefd2() // UNK_0xefd2
{
  UNK_0xeb58(); // UNK_0xeb58
  D_eq_(); // D=
}


// ================================================
// 0xefd8: WORD 'UNK_0xefda' codep=0x224c parp=0xefda
// ================================================

void UNK_0xefda() // UNK_0xefda
{
  UNK_0xe8b6(); // UNK_0xe8b6
  IOPEN(); // IOPEN
}


// ================================================
// 0xefe0: WORD 'UNK_0xefe2' codep=0x224c parp=0xefe2
// ================================================

void UNK_0xefe2() // UNK_0xefe2
{
  UNK_0xefda(); // UNK_0xefda
  IFIRST(); // IFIRST
  CI(); // CI
  Push(2);
  _star_CLOSE(); // *CLOSE
  UNK_0xefd2(); // UNK_0xefd2
}


// ================================================
// 0xeff0: WORD 'UNK_0xeff2' codep=0x224c parp=0xeff2
// ================================================

void UNK_0xeff2() // UNK_0xeff2
{
  UNK_0xefda(); // UNK_0xefda
  ILAST(); // ILAST
  CI(); // CI
  Push(2);
  _star_CLOSE(); // *CLOSE
  UNK_0xefd2(); // UNK_0xefd2
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(1);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf00a: WORD 'UNK_0xf00c' codep=0x224c parp=0xf00c
// ================================================

void UNK_0xf00c() // UNK_0xf00c
{
  UNK_0xeecf(); // UNK_0xeecf
  UNK_0xee4b(); // UNK_0xee4b
  UNK_0xebcb(); // UNK_0xebcb
  _gt_BOTT(); // >BOTT
  Push(-2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(7);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  UNK_0xefbe(); // UNK_0xefbe
  UNK_0xeecf(); // UNK_0xeecf
}


// ================================================
// 0xf026: WORD 'UNK_0xf028' codep=0x224c parp=0xf028
// ================================================

void UNK_0xf028() // UNK_0xf028
{
  UNK_0xeecf(); // UNK_0xeecf
  UNK_0xee5b(); // UNK_0xee5b
  UNK_0xebf9(); // UNK_0xebf9
  UNK_0xede7(); // UNK_0xede7
  UNK_0xefbe(); // UNK_0xefbe
  UNK_0xeecf(); // UNK_0xeecf
}


// ================================================
// 0xf036: WORD 'UNK_0xf038' codep=0x224c parp=0xf038
// ================================================

void UNK_0xf038() // UNK_0xf038
{
  UNK_0xef86(); // UNK_0xef86
  if (Pop() != 0)
  {
    UNK_0xefe2(); // UNK_0xefe2
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      UNK_0xf028(); // UNK_0xf028
    }
  } else
  {
    UNK_0xef9e(); // UNK_0xef9e
  }
  UNK_0xef74(); // UNK_0xef74
}


// ================================================
// 0xf052: WORD 'UNK_0xf054' codep=0x224c parp=0xf054
// ================================================

void UNK_0xf054() // UNK_0xf054
{
  UNK_0xef90(); // UNK_0xef90
  if (Pop() != 0)
  {
    UNK_0xeff2(); // UNK_0xeff2
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      UNK_0xf00c(); // UNK_0xf00c
    }
  } else
  {
    UNK_0xeff2(); // UNK_0xeff2
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      UNK_0xefae(); // UNK_0xefae
    }
  }
  UNK_0xef74(); // UNK_0xef74
}


// ================================================
// 0xf076: WORD 'UNK_0xf078' codep=0x224c parp=0xf078
// ================================================

void UNK_0xf078() // UNK_0xf078
{
  UNK_0xecd9(); // UNK_0xecd9

  label4:
  XYSCAN(); // XYSCAN
  Push(pp_FTRIG); // FTRIG
  Push(Read16(Pop())); // @
  UNK_0xef58(); // UNK_0xef58
  Push(Pop() & Pop()); // AND
  Push(pp_FQUIT); // FQUIT
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      UNK_0xf054(); // UNK_0xf054
    } else
    {
      UNK_0xf038(); // UNK_0xf038
    }
  }
  goto label4;

  label1:
  Pop(); Pop(); // 2DROP
  _ask_QUIT(); // ?QUIT
  if (Pop() != 0)
  {
    Push2Words("0.");
  } else
  {
    UNK_0xeb60(); // UNK_0xeb60
    CI(); // CI
    ICLOSE(); // ICLOSE
  }
  Push(pp__ro_THING_rc_); // (THING)
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf0c4: WORD 'UNK_0xf0c6' codep=0x224c parp=0xf0c6
// ================================================

void UNK_0xf0c6() // UNK_0xf0c6
{
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0017);
  IFIND(); // IFIND
  Pop(); // DROP
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf0d8: WORD 'UNK_0xf0da' codep=0x224c parp=0xf0da
// ================================================

void UNK_0xf0da() // UNK_0xf0da
{
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0028);
  IFIND(); // IFIND
  Pop(); // DROP
  IEXTRAC(); // IEXTRAC
}


// ================================================
// 0xf0ec: WORD 'UNK_0xf0ee' codep=0x224c parp=0xf0ee
// ================================================

void UNK_0xf0ee() // UNK_0xf0ee
{
  Push(pp_SUPER_dash_B); // SUPER-B
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf0da(); // UNK_0xf0da
  Push2Words("*4SALE");
  IINSERT(); // IINSERT
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xf0c6(); // UNK_0xf0c6
  Push2Words("*4SALE");
  IINSERT(); // IINSERT
  Push(4);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf108: WORD 'UNK_0xf10a' codep=0x224c parp=0xf10a
// ================================================

void UNK_0xf10a() // UNK_0xf10a
{
  Push2Words("*4SALE");
  _gt_C_plus_S(); // >C+S
  UNK_0xf0da(); // UNK_0xf0da
  Push(pp_SUPER_dash_B); // SUPER-B
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _gt_INSERT(); // >INSERT
  Push(4);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x224c parp=0xf122
// ================================================

void UNK_0xf122() // UNK_0xf122
{
  Push2Words("*4SALE");
  _gt_C_plus_S(); // >C+S
  UNK_0xf0c6(); // UNK_0xf0c6
  Push2Words("*SHIP");
  IINSERT(); // IINSERT
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf132: WORD 'UNK_0xf134' codep=0x224c parp=0xf134
// ================================================

void UNK_0xf134() // UNK_0xf134
{
  UNK_0xf10a(); // UNK_0xf10a
  UNK_0xf122(); // UNK_0xf122
}


// ================================================
// 0xf13a: WORD 'UNK_0xf13c' codep=0x224c parp=0xf13c
// ================================================

void UNK_0xf13c() // UNK_0xf13c
{
  Push(0x00c5);
  Push(4);
  Push(0x0087);
  Push(0x0034);
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xf150: WORD 'UNK_0xf152' codep=0x224c parp=0xf152
// ================================================

void UNK_0xf152() // UNK_0xf152
{
  unsigned short int a;
  _at_INST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(0x000e);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(3);
    _dash_(); // -
  }
  Push(Read16(a)); // R@
  Push(0x0028);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(2);
    _dash_(); // -
  }
  Push(Read16(a)); // R@
  Push(0x002e);
  Push(0x0034);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0x0029);
  }
  Push(a); // R>
  Push(0x0033);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(5);
  _dash_(); // -
}


// ================================================
// 0xf1a0: WORD 'UNK_0xf1a2' codep=0x224c parp=0xf1a2
// ================================================

void UNK_0xf1a2() // UNK_0xf1a2
{
  _at_INST_dash_S(); // @INST-S
  Push(0x002d);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf1ac: WORD 'UNK_0xf1ae' codep=0x224c parp=0xf1ae
// ================================================

void UNK_0xf1ae() // UNK_0xf1ae
{
  _at_INST_dash_S(); // @INST-S
  Push(6);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0x0047);
    return;
  }
  Push(0x0045);
}


// ================================================
// 0xf1c6: WORD 'UNK_0xf1c8' codep=0x2214 parp=0xf1c8
// ================================================
// 0xf1c8: db 0x46 0x00 'F '

// ================================================
// 0xf1ca: WORD 'ID>#' codep=0x4b3b parp=0xf1d3
// ================================================

void ID_gt__n_() // ID>#
{
  switch(Pop()) // ID>#
  {
  case 28:
    UNK_0xf152(); // UNK_0xf152
    break;
  case 9:
    UNK_0xf1a2(); // UNK_0xf1a2
    break;
  case 26:
    UNK_0xf1ae(); // UNK_0xf1ae
    break;
  case 68:
    Push(Read16(cc_UNK_0xf1c8)); // UNK_0xf1c8
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xf1e7: WORD 'UNK_0xf1e9' codep=0x224c parp=0xf1e9
// ================================================

void UNK_0xf1e9() // UNK_0xf1e9
{
  UNK_0xf13c(); // UNK_0xf13c
  Push(pp_PIC_n_); // PIC#
  _099(); // 099
  Push(pp__ro_THING_rc_); // (THING)
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_C(); // @INST-C
  ID_gt__n_(); // ID># case
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop()-1); // 1-
    Push(0xb9d8); // probable '.TPIC'
    MODULE(); // MODULE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf209: WORD 'UNK_0xf20b' codep=0x224c parp=0xf20b
// ================================================

void UNK_0xf20b() // UNK_0xf20b
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf215: WORD 'UNK_0xf217' codep=0x224c parp=0xf217
// ================================================

void UNK_0xf217() // UNK_0xf217
{
  UNK_0xf20b(); // UNK_0xf20b
  Push(0xb9e8); // probable '.APIC'
  MODULE(); // MODULE
}


// ================================================
// 0xf221: WORD 'UNK_0xf223' codep=0x224c parp=0xf223
// ================================================

void UNK_0xf223() // UNK_0xf223
{
  _gt_1FONT(); // >1FONT
  Push(0x003a);
  Push(0x009c);
  POS_dot_(); // POS.
  Push(Read16(cc_UNK_0xed5e)); // UNK_0xed5e
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  UNK_0xe96e(); // UNK_0xe96e
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  PRINT("NEW ", 4); // (.")
  Push(pp_SELLING); // SELLING
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    PRINT("PRICE", 5); // (.")
  } else
  {
    PRINT("OFFER", 5); // (.")
  }
  PRINT(" = ", 3); // (.")
  UNK_0xe942(); // UNK_0xe942
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf26c: WORD 'UNK_0xf26e' codep=0x224c parp=0xf26e
// ================================================

void UNK_0xf26e() // UNK_0xf26e
{
  Push(0xc472); // probable 'L>P'
  MODULE(); // MODULE
  Push(pp__1ST); // 1ST
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0);
  MAX(); // MAX
  Push(pp__1ST); // 1ST
  _ex__2(); // !_2
  UNK_0xf223(); // UNK_0xf223
  UNK_0xec27(); // UNK_0xec27
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  if (Pop() != 0)
  {
    Push(pp_PLAST); // PLAST
    _ex__2(); // !_2
  } else
  {
    Pop(); // DROP
  }
  Push(2);
  Push(0xc462); // probable '!PFLAGS'
  MODULE(); // MODULE
}


// ================================================
// 0xf2a2: WORD 'UNK_0xf2a4' codep=0x224c parp=0xf2a4
// ================================================

void UNK_0xf2a4() // UNK_0xf2a4
{

  label2:
  XYSCAN(); // XYSCAN
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  Pop(); // DROP
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0);
  MAX(); // MAX
  Push(2);
  MIN(); // MIN
  Push(pp_NCRS); // NCRS
  _ex__2(); // !_2
  Push(pp_MCURS); // MCURS
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
  goto label2;

  label1:
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf2d2: WORD 'UNK_0xf2d4' codep=0x224c parp=0xf2d4
// ================================================

void UNK_0xf2d4() // UNK_0xf2d4
{
  UNK_0xe92e(); // UNK_0xe92e
  Push(pp_SELLING); // SELLING
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(3);
    Push(Pop() * Pop()); // *
  } else
  {
    Push(3);
    _slash_(); // /
  }
  Push(pp_PLAST); // PLAST
  _ex__2(); // !_2
}


// ================================================
// 0xf2f0: WORD 'UNK_0xf2f2' codep=0x224c parp=0xf2f2
// ================================================

void UNK_0xf2f2() // UNK_0xf2f2
{
  Push(1);
  Push(0xc462); // probable '!PFLAGS'
  MODULE(); // MODULE
}


// ================================================
// 0xf2fc: WORD 'UNK_0xf2fe' codep=0x224c parp=0xf2fe
// ================================================

void UNK_0xf2fe() // UNK_0xf2fe
{
  Push(0);
  Push(0xc462); // probable '!PFLAGS'
  MODULE(); // MODULE
}


// ================================================
// 0xf308: WORD 'UNK_0xf30a' codep=0x224c parp=0xf30a
// ================================================

void UNK_0xf30a() // UNK_0xf30a
{
  Push(0x07d0);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x0032);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf31c: WORD 'P>REPLY' codep=0x4b3b parp=0xf328
// ================================================

void P_gt_REPLY() // P>REPLY
{
  switch(Pop()) // P>REPLY
  {
  case 0:
    UNK_0xf2f2(); // UNK_0xf2f2
    break;
  case 1:
    UNK_0xf26e(); // UNK_0xf26e
    break;
  case 2:
    UNK_0xf2fe(); // UNK_0xf2fe
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf338: WORD 'UNK_0xf33a' codep=0x224c parp=0xf33a
// ================================================

void UNK_0xf33a() // UNK_0xf33a
{
  UNK_0xea95(); // UNK_0xea95
  UNK_0xf2a4(); // UNK_0xf2a4
  UNK_0xf30a(); // UNK_0xf30a
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  P_gt_REPLY(); // P>REPLY case
  UNK_0xe8c4(); // UNK_0xe8c4
}


// ================================================
// 0xf34a: WORD 'UNK_0xf34c' codep=0x224c parp=0xf34c
// ================================================

void UNK_0xf34c() // UNK_0xf34c
{
  Push(pp_BARTERI); // BARTERI
  Push(Read16(Pop())); // @
  Push(pp__ask_REPLY); // ?REPLY
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xf33a(); // UNK_0xf33a
}


// ================================================
// 0xf35e: WORD 'UNK_0xf360' codep=0x224c parp=0xf360
// ================================================

void UNK_0xf360() // UNK_0xf360
{

  label3:
  Push(pp_BARTERI); // BARTERI
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0xc44e); // probable 'DOBARTE'
  MODULE(); // MODULE
  UNK_0xe88a(); // UNK_0xe88a
  Push(pp_BARTERI); // BARTERI
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xe8ae(); // UNK_0xe8ae
    UNK_0xed01(); // UNK_0xed01
    ICLOSE(); // ICLOSE
  }
  UNK_0xf34c(); // UNK_0xf34c
  goto label3;

  label1:
  UNK_0xe87a(); // UNK_0xe87a
}


// ================================================
// 0xf388: WORD 'UNK_0xf38a' codep=0x224c parp=0xf38a
// ================================================

void UNK_0xf38a() // UNK_0xf38a
{
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(0xc43a); // probable 'DOOPEN'
    MODULE(); // MODULE
    UNK_0xe88a(); // UNK_0xe88a
    Push(pp__ask_REPLY); // ?REPLY
    ON_2(); // ON_2
    Push(pp_BARTERI); // BARTERI
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      UNK_0xf2d4(); // UNK_0xf2d4
      UNK_0xf33a(); // UNK_0xf33a
      UNK_0xf360(); // UNK_0xf360
    }
  }
  UNK_0x3f09(" ");
  UNK_0xee71(); // UNK_0xee71
}


// ================================================
// 0xf3b6: WORD 'UNK_0xf3b8' codep=0x224c parp=0xf3b8
// ================================================

void UNK_0xf3b8() // UNK_0xf3b8
{
  UNK_0xee11(); // UNK_0xee11
  MAKE_dash_SC(); // MAKE-SC
  GET_dash_BOX(); // GET-BOX
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  UNK_0xef14(); // UNK_0xef14
  UNK_0xf078(); // UNK_0xf078
  DELETE_dash_(); // DELETE-
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  Push2Words("0.");
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xedaf(); // UNK_0xedaf
  UNK_0xee11(); // UNK_0xee11
  Push(pp__ro_THING_rc_); // (THING)
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  UNK_0xf1e9(); // UNK_0xf1e9
  UNK_0xf38a(); // UNK_0xf38a
  UNK_0xf13c(); // UNK_0xf13c
}


// ================================================
// 0xf3e8: WORD 'UNK_0xf3ea' codep=0x224c parp=0xf3ea
// ================================================

void UNK_0xf3ea() // UNK_0xf3ea
{
  Push(pp_SELLING); // SELLING
  ON_2(); // ON_2
  UNK_0xf30a(); // UNK_0xf30a
  Push2Words("*4SALE");
  UNK_0xf3b8(); // UNK_0xf3b8
}


// ================================================
// 0xf3f6: WORD 'UNK_0xf3f8' codep=0x224c parp=0xf3f8
// ================================================

void UNK_0xf3f8() // UNK_0xf3f8
{
  Push(pp_SELLING); // SELLING
  _099(); // 099
  UNK_0xf30a(); // UNK_0xf30a
  Push2Words("BUY-LIS");
  UNK_0xf3b8(); // UNK_0xf3b8
}


// ================================================
// 0xf404: WORD 'UNK_0xf406' codep=0x224c parp=0xf406
// ================================================

void UNK_0xf406() // UNK_0xf406
{
  Push(pp_A_dash_POSTU); // A-POSTU
  Push(Read16(Pop())); // @
  Push(8);
  _st_(); // <
  if (Pop() != 0)
  {
    SetColor("WHITE");
    _ex_COLOR(); // !COLOR
    UNK_0x3f09("ANY PURCHASED GOODS WILL BE TRANSFERRED");
    _dot_TTY(); // .TTY
    UNK_0x3f09("TO YOUR SHIP. THANK YOU AND COME AGAIN");
    _dot_TTY(); // .TTY
    Push(0x0bb8);
    MS(); // MS
  }
  Push(pp_PIC_n_); // PIC#
  _099(); // 099
}


// ================================================
// 0xf479: WORD 'UNK_0xf47b' codep=0x224c parp=0xf47b
// ================================================

void UNK_0xf47b() // UNK_0xf47b
{
  Push(pp_TERMINA); // TERMINA
  ON_2(); // ON_2
  UNK_0xf30a(); // UNK_0xf30a
}


// ================================================
// 0xf483: WORD 'UNK_0xf485' codep=0x224c parp=0xf485
// ================================================

void UNK_0xf485() // UNK_0xf485
{
  UNK_0xea57(); // UNK_0xea57
  UNK_0xf217(); // UNK_0xf217
  UNK_0xf2a4(); // UNK_0xf2a4
}


// ================================================
// 0xf48d: WORD 'T>ACTION' codep=0x4b3b parp=0xf49a
// ================================================

void T_gt_ACTION() // T>ACTION
{
  switch(Pop()) // T>ACTION
  {
  case 0:
    UNK_0xf3f8(); // UNK_0xf3f8
    break;
  case 1:
    UNK_0xf3ea(); // UNK_0xf3ea
    break;
  case 2:
    UNK_0xf47b(); // UNK_0xf47b
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4aa: WORD 'UNK_0xf4ac' codep=0x224c parp=0xf4ac
// ================================================

void UNK_0xf4ac() // UNK_0xf4ac
{
  do
  {
    Push2Words("0.");
    Push(pp__ro_THING_rc_); // (THING)
    _1_dot_5_ex__2(); // 1.5!_2
    UNK_0xedaf(); // UNK_0xedaf
    Push(pp_TERMINA); // TERMINA
    Push(Read16(Pop())); // @
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() == 0) return;
    Push(pp_TBOX); // TBOX
    _099(); // 099
    UNK_0xf485(); // UNK_0xf485
    Push(pp_NCRS); // NCRS
    Push(Read16(Pop())); // @
    T_gt_ACTION(); // T>ACTION case
  } while(1);
}


// ================================================
// 0xf4d0: WORD 'UNK_0xf4d2' codep=0x224c parp=0xf4d2
// ================================================

void UNK_0xf4d2() // UNK_0xf4d2
{
  Push(0xc261); // probable 'OVINIT-_1'
  MODULE(); // MODULE
  UNK_0xe9ef(); // UNK_0xe9ef
  UNK_0xe97a(); // UNK_0xe97a
  Push(0xba0a); // probable 'LDAPIC'
  MODULE(); // MODULE
  Push(0xc427); // probable 'DOENTER'
  MODULE(); // MODULE
  Push(pp_TERMINA); // TERMINA
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(0x0bb8);
    MS(); // MS
  }
  UNK_0xf4ac(); // UNK_0xf4ac
  UNK_0xe8c4(); // UNK_0xe8c4
  Push(7);
  Push(0xc273); // probable 'OVTRANS'
  MODULE(); // MODULE
}


// ================================================
// 0xf504: WORD 'TRADE' codep=0x224c parp=0xf50e
// ================================================
// entry

void TRADE() // TRADE
{
  unsigned short int a;
  Push(pp__pe_VAL); // %VAL
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(0x0064);
  Push(pp__pe_VAL); // %VAL
  _ex__2(); // !_2
  Push(6);
  Push(pp_CONTEXT_3); // CONTEXT_3
  _ex__2(); // !_2
  Push(0xc024); // probable 'SET-C'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp__ro_THING_rc_); // (THING)
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xf0ee(); // UNK_0xf0ee
  UNK_0xf4d2(); // UNK_0xf4d2
  UNK_0xf406(); // UNK_0xf406
  Push(0);
  Push(pp_CONTEXT_3); // CONTEXT_3
  _ex__2(); // !_2
  Push(a); // R>
  Push(pp__pe_VAL); // %VAL
  _ex__2(); // !_2
  UNK_0xf134(); // UNK_0xf134
  Push(0xb6ec); // probable '=CARGO'
  MODULE(); // MODULE
}

// 0xf54a: db 0x4d 0x41 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MAR___________________ '

