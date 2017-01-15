// ====== OVERLAY 'TVITEMS' ======
// store offset = 0xe620
// overlay size   = 0x0f40

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe636  codep:0x1d29 parp:0xe636 size:0x0002 C-string:'UNK_0xe636'
//      UNK_0xe63a  codep:0x1d29 parp:0xe63a size:0x0002 C-string:'UNK_0xe63a'
//      UNK_0xe63e  codep:0x1d29 parp:0xe63e size:0x0002 C-string:'UNK_0xe63e'
//      UNK_0xe642  codep:0x1d29 parp:0xe642 size:0x0002 C-string:'UNK_0xe642'
//      UNK_0xe646  codep:0x224c parp:0xe646 size:0x0032 C-string:'UNK_0xe646'
//      UNK_0xe67a  codep:0x224c parp:0xe67a size:0x0008 C-string:'UNK_0xe67a'
//      UNK_0xe684  codep:0x224c parp:0xe684 size:0x002e C-string:'UNK_0xe684'
//      UNK_0xe6b4  codep:0x224c parp:0xe6b4 size:0x001e C-string:'UNK_0xe6b4'
//      UNK_0xe6d4  codep:0x224c parp:0xe6d4 size:0x0016 C-string:'UNK_0xe6d4'
//      UNK_0xe6ec  codep:0x7420 parp:0xe6ec size:0x0003 C-string:'UNK_0xe6ec'
//      UNK_0xe6f1  codep:0x7394 parp:0xe6f1 size:0x001d C-string:'UNK_0xe6f1'
//      UNK_0xe710  codep:0x7394 parp:0xe710 size:0x000e C-string:'UNK_0xe710'
//      UNK_0xe720  codep:0x7420 parp:0xe720 size:0x0003 C-string:'UNK_0xe720'
//      UNK_0xe725  codep:0x7420 parp:0xe725 size:0x0017 C-string:'UNK_0xe725'
//      UNK_0xe73e  codep:0x224c parp:0xe73e size:0x000e C-string:'UNK_0xe73e'
//      UNK_0xe74e  codep:0x224c parp:0xe74e size:0x0012 C-string:'UNK_0xe74e'
//      UNK_0xe762  codep:0x224c parp:0xe762 size:0x0010 C-string:'UNK_0xe762'
//      UNK_0xe774  codep:0x224c parp:0xe774 size:0x000e C-string:'UNK_0xe774'
//      UNK_0xe784  codep:0x224c parp:0xe784 size:0x002e C-string:'UNK_0xe784'
//      UNK_0xe7b4  codep:0x224c parp:0xe7b4 size:0x000b C-string:'UNK_0xe7b4'
//      UNK_0xe7c1  codep:0x224c parp:0xe7c1 size:0x0009 C-string:'UNK_0xe7c1'
//      UNK_0xe7cc  codep:0x224c parp:0xe7cc size:0x000d C-string:'UNK_0xe7cc'
//      UNK_0xe7db  codep:0x224c parp:0xe7db size:0x000a C-string:'UNK_0xe7db'
//      UNK_0xe7e7  codep:0x224c parp:0xe7e7 size:0x000b C-string:'UNK_0xe7e7'
//      UNK_0xe7f4  codep:0x224c parp:0xe7f4 size:0x0008 C-string:'UNK_0xe7f4'
//      UNK_0xe7fe  codep:0x1d29 parp:0xe7fe size:0x0006 C-string:'UNK_0xe7fe'
//      UNK_0xe806  codep:0x224c parp:0xe806 size:0x0008 C-string:'UNK_0xe806'
//      UNK_0xe810  codep:0x224c parp:0xe810 size:0x000c C-string:'UNK_0xe810'
//      UNK_0xe81e  codep:0x224c parp:0xe81e size:0x000c C-string:'UNK_0xe81e'
//      UNK_0xe82c  codep:0x224c parp:0xe82c size:0x0017 C-string:'UNK_0xe82c'
//      UNK_0xe845  codep:0x224c parp:0xe845 size:0x0012 C-string:'UNK_0xe845'
//       T.OPTIONS  codep:0x4b3b parp:0xe865 size:0x0018 C-string:'T_dot_OPTIONS'
//      UNK_0xe87f  codep:0x224c parp:0xe87f size:0x000c C-string:'UNK_0xe87f'
//      UNK_0xe88d  codep:0x224c parp:0xe88d size:0x000c C-string:'UNK_0xe88d'
//      UNK_0xe89b  codep:0x224c parp:0xe89b size:0x0017 C-string:'UNK_0xe89b'
//      UNK_0xe8b4  codep:0x224c parp:0xe8b4 size:0x002c C-string:'UNK_0xe8b4'
//      UNK_0xe8e2  codep:0x224c parp:0xe8e2 size:0x000e C-string:'UNK_0xe8e2'
//       P.OPTIONS  codep:0x4b3b parp:0xe8fe size:0x0014 C-string:'P_dot_OPTIONS'
//      UNK_0xe914  codep:0x224c parp:0xe914 size:0x000c C-string:'UNK_0xe914'
//      UNK_0xe922  codep:0x224c parp:0xe922 size:0x0012 C-string:'UNK_0xe922'
//      UNK_0xe936  codep:0x224c parp:0xe936 size:0x0014 C-string:'UNK_0xe936'
//      UNK_0xe94c  codep:0x224c parp:0xe94c size:0x000c C-string:'UNK_0xe94c'
//      UNK_0xe95a  codep:0x224c parp:0xe95a size:0x000e C-string:'UNK_0xe95a'
//       CLASS>VOL  codep:0x4b3b parp:0xe976 size:0x000c C-string:'CLASS_gt_VOL'
//      UNK_0xe984  codep:0x224c parp:0xe984 size:0x004f C-string:'UNK_0xe984'
//      UNK_0xe9d5  codep:0x224c parp:0xe9d5 size:0x000a C-string:'UNK_0xe9d5'
//      UNK_0xe9e1  codep:0x224c parp:0xe9e1 size:0x004e C-string:'UNK_0xe9e1'
//      UNK_0xea31  codep:0x224c parp:0xea31 size:0x0008 C-string:'UNK_0xea31'
//      UNK_0xea3b  codep:0x224c parp:0xea3b size:0x001a C-string:'UNK_0xea3b'
//      UNK_0xea57  codep:0x224c parp:0xea57 size:0x0010 C-string:'UNK_0xea57'
//      UNK_0xea69  codep:0x224c parp:0xea69 size:0x000a C-string:'UNK_0xea69'
//      UNK_0xea75  codep:0x224c parp:0xea75 size:0x0008 C-string:'UNK_0xea75'
//      UNK_0xea7f  codep:0x224c parp:0xea7f size:0x0026 C-string:'UNK_0xea7f'
//      UNK_0xeaa7  codep:0x224c parp:0xeaa7 size:0x002e C-string:'UNK_0xeaa7'
//      UNK_0xead7  codep:0x224c parp:0xead7 size:0x004a C-string:'UNK_0xead7'
//      UNK_0xeb23  codep:0x224c parp:0xeb23 size:0x0006 C-string:'UNK_0xeb23'
//      UNK_0xeb2b  codep:0x224c parp:0xeb2b size:0x002a C-string:'UNK_0xeb2b'
//      UNK_0xeb57  codep:0x224c parp:0xeb57 size:0x0098 C-string:'UNK_0xeb57'
//      UNK_0xebf1  codep:0x224c parp:0xebf1 size:0x0030 C-string:'UNK_0xebf1'
//      UNK_0xec23  codep:0x224c parp:0xec23 size:0x0004 C-string:'UNK_0xec23'
//      UNK_0xec29  codep:0x224c parp:0xec29 size:0x0004 C-string:'UNK_0xec29'
//      UNK_0xec2f  codep:0x224c parp:0xec2f size:0x0014 C-string:'UNK_0xec2f'
//      UNK_0xec45  codep:0x224c parp:0xec45 size:0x0032 C-string:'UNK_0xec45'
//      UNK_0xec79  codep:0x224c parp:0xec79 size:0x0004 C-string:'UNK_0xec79'
//      UNK_0xec7f  codep:0x224c parp:0xec7f size:0x0004 C-string:'UNK_0xec7f'
//          PA.ACT  codep:0x4b3b parp:0xec8e size:0x0008 C-string:'PA_dot_ACT'
//          TA.ACT  codep:0x4b3b parp:0xeca1 size:0x0008 C-string:'TA_dot_ACT'
//      UNK_0xecab  codep:0x224c parp:0xecab size:0x0012 C-string:'UNK_0xecab'
//      UNK_0xecbf  codep:0x224c parp:0xecbf size:0x001e C-string:'UNK_0xecbf'
//      UNK_0xecdf  codep:0x224c parp:0xecdf size:0x002a C-string:'UNK_0xecdf'
//      UNK_0xed0b  codep:0x224c parp:0xed0b size:0x000a C-string:'UNK_0xed0b'
//      UNK_0xed17  codep:0x224c parp:0xed17 size:0x001a C-string:'UNK_0xed17'
//          PM.ACT  codep:0x4b3b parp:0xed3c size:0x000c C-string:'PM_dot_ACT'
//          TM.ACT  codep:0x4b3b parp:0xed53 size:0x000c C-string:'TM_dot_ACT'
//      UNK_0xed61  codep:0x224c parp:0xed61 size:0x0012 C-string:'UNK_0xed61'
//      UNK_0xed75  codep:0x224c parp:0xed75 size:0x0016 C-string:'UNK_0xed75'
//          PL.ACT  codep:0x4b3b parp:0xed96 size:0x000c C-string:'PL_dot_ACT'
//          TL.ACT  codep:0x4b3b parp:0xedad size:0x000c C-string:'TL_dot_ACT'
//      UNK_0xedbb  codep:0x224c parp:0xedbb size:0x0012 C-string:'UNK_0xedbb'
//        DISPATCH  codep:0x4b3b parp:0xedda size:0x0014 C-string:'DISPATCH'
//      UNK_0xedf0  codep:0x224c parp:0xedf0 size:0x004c C-string:'UNK_0xedf0'
//      UNK_0xee3e  codep:0x224c parp:0xee3e size:0x0051 C-string:'UNK_0xee3e'
//      UNK_0xee91  codep:0x1d29 parp:0xee91 size:0x0003 C-string:'UNK_0xee91'
//      UNK_0xee96  codep:0x224c parp:0xee96 size:0x0006 C-string:'UNK_0xee96'
//      UNK_0xee9e  codep:0x224c parp:0xee9e size:0x0010 C-string:'UNK_0xee9e'
//      UNK_0xeeb0  codep:0x224c parp:0xeeb0 size:0x0010 C-string:'UNK_0xeeb0'
//      UNK_0xeec2  codep:0x224c parp:0xeec2 size:0x000e C-string:'UNK_0xeec2'
//      UNK_0xeed2  codep:0x224c parp:0xeed2 size:0x000e C-string:'UNK_0xeed2'
//      UNK_0xeee2  codep:0x224c parp:0xeee2 size:0x0026 C-string:'UNK_0xeee2'
//      UNK_0xef0a  codep:0x224c parp:0xef0a size:0x0004 C-string:'UNK_0xef0a'
//      UNK_0xef10  codep:0x224c parp:0xef10 size:0x0010 C-string:'UNK_0xef10'
//      UNK_0xef22  codep:0x224c parp:0xef22 size:0x002e C-string:'UNK_0xef22'
//      UNK_0xef52  codep:0x224c parp:0xef52 size:0x002a C-string:'UNK_0xef52'
//      UNK_0xef7e  codep:0x224c parp:0xef7e size:0x0014 C-string:'UNK_0xef7e'
//      UNK_0xef94  codep:0x224c parp:0xef94 size:0x002e C-string:'UNK_0xef94'
//      UNK_0xefc4  codep:0x224c parp:0xefc4 size:0x002c C-string:'UNK_0xefc4'
//      UNK_0xeff2  codep:0x224c parp:0xeff2 size:0x0024 C-string:'UNK_0xeff2'
//      UNK_0xf018  codep:0x224c parp:0xf018 size:0x007c C-string:'UNK_0xf018'
//      UNK_0xf096  codep:0x224c parp:0xf096 size:0x000a C-string:'UNK_0xf096'
//      UNK_0xf0a2  codep:0x224c parp:0xf0a2 size:0x0028 C-string:'UNK_0xf0a2'
//      UNK_0xf0cc  codep:0x224c parp:0xf0cc size:0x0028 C-string:'UNK_0xf0cc'
//      UNK_0xf0f6  codep:0x224c parp:0xf0f6 size:0x002a C-string:'UNK_0xf0f6'
//      UNK_0xf122  codep:0x224c parp:0xf122 size:0x0040 C-string:'UNK_0xf122'
//      UNK_0xf164  codep:0x224c parp:0xf164 size:0x001c C-string:'UNK_0xf164'
//      UNK_0xf182  codep:0x224c parp:0xf182 size:0x0006 C-string:'UNK_0xf182'
//      UNK_0xf18a  codep:0x224c parp:0xf18a size:0x0008 C-string:'UNK_0xf18a'
//      UNK_0xf194  codep:0x224c parp:0xf194 size:0x0038 C-string:'UNK_0xf194'
//      UNK_0xf1ce  codep:0x224c parp:0xf1ce size:0x003e C-string:'UNK_0xf1ce'
//       TD-SCROLL  codep:0x4b3b parp:0xf21a size:0x000c C-string:'TD_dash_SCROLL'
//      UNK_0xf228  codep:0x224c parp:0xf228 size:0x002e C-string:'UNK_0xf228'
//      UNK_0xf258  codep:0x224c parp:0xf258 size:0x0048 C-string:'UNK_0xf258'
//      UNK_0xf2a2  codep:0x224c parp:0xf2a2 size:0x0050 C-string:'UNK_0xf2a2'
//      UNK_0xf2f4  codep:0x224c parp:0xf2f4 size:0x002c C-string:'UNK_0xf2f4'
//      UNK_0xf322  codep:0x224c parp:0xf322 size:0x0038 C-string:'UNK_0xf322'
//      UNK_0xf35c  codep:0x224c parp:0xf35c size:0x0020 C-string:'UNK_0xf35c'
//      UNK_0xf37e  codep:0x224c parp:0xf37e size:0x0064 C-string:'UNK_0xf37e'
//      UNK_0xf3e4  codep:0x224c parp:0xf3e4 size:0x0020 C-string:'UNK_0xf3e4'
//      UNK_0xf406  codep:0x224c parp:0xf406 size:0x0018 C-string:'UNK_0xf406'
//      UNK_0xf420  codep:0x224c parp:0xf420 size:0x0026 C-string:'UNK_0xf420'
//      UNK_0xf448  codep:0x224c parp:0xf448 size:0x0008 C-string:'UNK_0xf448'
//         >DEBRIS  codep:0x224c parp:0xf45c size:0x0008 C-string:'_gt_DEBRIS'
//      UNK_0xf466  codep:0x224c parp:0xf466 size:0x0028 C-string:'UNK_0xf466'
//      UNK_0xf490  codep:0x224c parp:0xf490 size:0x000e C-string:'UNK_0xf490'
//        (/ITEMS)  codep:0x224c parp:0xf4ab size:0x0000 C-string:'_ro__slash_ITEMS_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int cc_DEAD_dash_IC; // DEAD-IC
extern const unsigned short int pp__ask_CRITIC; // ?CRITIC
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp__ask_FLAT; // ?FLAT
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_ITEM; // ITEM
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp_LAST_dash_UP; // LAST-UP
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern const unsigned short int pp_TVEHICL; // TVEHICL
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp_SUPER_dash_B; // SUPER-B
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_SURFAC; // (SURFAC
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp_NOF; // NOF
void COUNT(); // COUNT
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void PAD(); // PAD
void MS(); // MS
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_eq_(); // D=
void WITHIN(); // WITHIN
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _2_ex__2(); // 2!_2
void D_ex_(); // D!
void ON_2(); // ON_2
void _099(); // 099
void _at_INST_dash_C(); // @INST-C
void _at_INST_dash_S(); // @INST-S
void CDROP(); // CDROP
void CI_i_(); // CI'
void CJ(); // CJ
void _ask_NULL(); // ?NULL
void _ask_CHILD(); // ?CHILD
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void _ask_LAST(); // ?LAST
void _ask_FIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IINSERT(); // IINSERT
void IEXTRAC(); // IEXTRAC
void _at_NEWSPA(); // @NEWSPA
void MAXSPAC(); // MAXSPAC
void IFIND(); // IFIND
void _gt_INACTI(); // >INACTI
void IDELETE(); // IDELETE
void _star_CREATE(); // *CREATE
void SAVE_dash_OV(); // SAVE-OV
void _ex_COLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void VCLIPSE(); // VCLIPSE
void DCLIPSE(); // DCLIPSE
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void _at_ID(); // @ID
void _at_IC(); // @IC
void _at_IL(); // @IL
void _at_IH(); // @IH
void _dot_BACKGR(); // .BACKGR
void POINT_gt_I(); // POINT>I
void _dot_LOCAL_dash_(); // .LOCAL-
void _dash_ICON(); // -ICON
void _plus_ICON_2(); // +ICON_2
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void _gt_TVCT(); // >TVCT
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void _at_CRS(); // @CRS
void _ex_CRS(); // !CRS
void _do__dot_(); // $.
void WLINE_dash_U(); // WLINE-U
void WLINE_dash_D(); // WLINE-D
void GCR(); // GCR
void WSHORTE(); // WSHORTE
void _gt_BOTT(); // >BOTT
void XYSCAN(); // XYSCAN
void _ask_TRIG(); // ?TRIG
void _ask_QUIT(); // ?QUIT
void CURSORS(); // CURSORS
void TEXT_gt_PA(); // TEXT>PA
void _ask_NEW_dash_HO(); // ?NEW-HO
void GET_dash_BOX(); // GET-BOX
void MAKE_dash_SC(); // MAKE-SC
void DELETE_dash_(); // DELETE-
void BOX_gt_TOC(); // BOX>TOC
void _gt_BOX(); // >BOX
void _ro_BOX_gt__rc_(); // (BOX>)
void CLASS_gt_B(); // CLASS>B
void HUFF_gt_(); // HUFF>
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void _4_star_(); // 4*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void EXIT(); // EXIT
void TIME(); // TIME
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void C_gt_(); // C>
void CI(); // CI
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe636 = 0xe636; // UNK_0xe636 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe63a = 0xe63a; // UNK_0xe63a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe63e = 0xe63e; // UNK_0xe63e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe642 = 0xe642; // UNK_0xe642 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe7fe = 0xe7fe; // UNK_0xe7fe size: 6
// {0x00, 0x00, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_UNK_0xee91 = 0xee91; // UNK_0xee91 size: 3
// {0x3a, 0x20, 0x05}




// 0xe632: db 0xf4 0x00 '  '

// ================================================
// 0xe634: WORD 'UNK_0xe636' codep=0x1d29 parp=0xe636
// ================================================
// 0xe636: db 0x3a 0x20 ': '

// ================================================
// 0xe638: WORD 'UNK_0xe63a' codep=0x1d29 parp=0xe63a
// ================================================
// 0xe63a: db 0x3a 0x20 ': '

// ================================================
// 0xe63c: WORD 'UNK_0xe63e' codep=0x1d29 parp=0xe63e
// ================================================
// 0xe63e: db 0x3a 0x20 ': '

// ================================================
// 0xe640: WORD 'UNK_0xe642' codep=0x1d29 parp=0xe642
// ================================================
// 0xe642: db 0x3a 0x20 ': '

// ================================================
// 0xe644: WORD 'UNK_0xe646' codep=0x224c parp=0xe646
// ================================================

void UNK_0xe646() // UNK_0xe646
{
  unsigned short int a;
  a = Pop(); // >R
  _at_CRS(); // @CRS
  Push(3);
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  Push(7);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
  Push(1);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  _ex_CRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF_2(); // OFF_2
}


// ================================================
// 0xe678: WORD 'UNK_0xe67a' codep=0x224c parp=0xe67a
// ================================================

void UNK_0xe67a() // UNK_0xe67a
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  UNK_0xe646(); // UNK_0xe646
}


// ================================================
// 0xe682: WORD 'UNK_0xe684' codep=0x224c parp=0xe684
// ================================================

void UNK_0xe684() // UNK_0xe684
{
  _ask_NEW_dash_HO(); // ?NEW-HO
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UP); // LAST-UP
  D_ex_(); // D!
  Push(1);
  Push(pp_STAR_dash_HR); // STAR-HR
  _plus__ex__2(); // +!_2
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0018);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(pp_STAR_dash_HR); // STAR-HR
  _099(); // 099
  Push(1);
  Push(pp_STARDAT); // STARDAT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe6b2: WORD 'UNK_0xe6b4' codep=0x224c parp=0xe6b4
// ================================================

void UNK_0xe6b4() // UNK_0xe6b4
{
  SWAP(); // SWAP
  _4_star_(); // 4*
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(Pop() + Pop()); // +
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(7);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe6d2: WORD 'UNK_0xe6d4' codep=0x224c parp=0xe6d4
// ================================================

void UNK_0xe6d4() // UNK_0xe6d4
{
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
}

// 0xe6da: db 0x14 0x22 0x20 0x00 0x14 0x22 0x44 0x00 0x14 0x22 0x1c 0x00 0x14 0x22 0x39 0x00 ' "   "D  "   "9 '

// ================================================
// 0xe6ea: WORD 'UNK_0xe6ec' codep=0x7420 parp=0xe6ec
// ================================================
// 0xe6ec: db 0x0b 0x11 0x02 '   '

// ================================================
// 0xe6ef: WORD 'UNK_0xe6f1' codep=0x7394 parp=0xe6f1
// ================================================
// 0xe6f1: db 0x1c 0x1e 0x01 0x20 0xcd 0x6b 0x20 0x74 0x00 0x15 0x01 0x20 0x74 0x00 0x16 0x01 0x20 0x74 0x00 0x17 0x01 0x94 0x73 0x44 0x14 0x02 0x22 0x07 0x6f '     k t    t    t    sD  " o'

// ================================================
// 0xe70e: WORD 'UNK_0xe710' codep=0x7394 parp=0xe710
// ================================================
// 0xe710: db 0x44 0x1b 0x01 0x22 0x07 0x6f 0x94 0x73 0x44 0x1c 0x01 0x22 0x07 0x6f 'D  " o sD  " o'

// ================================================
// 0xe71e: WORD 'UNK_0xe720' codep=0x7420 parp=0xe720
// ================================================
// 0xe720: db 0x44 0x17 0x01 'D  '

// ================================================
// 0xe723: WORD 'UNK_0xe725' codep=0x7420 parp=0xe725
// ================================================
// 0xe725: db 0x44 0x18 0x01 0x4c 0x22 0xde 0xe6 0x41 0x0e 0x11 0x56 0x16 0x6d 0x1f 0x56 0xae 0x0b 0x43 0x73 0x32 0x0e 0x90 0x16 'D  L"  A  V m V  Cs2   '

// ================================================
// 0xe73c: WORD 'UNK_0xe73e' codep=0x224c parp=0xe73e
// ================================================

void UNK_0xe73e() // UNK_0xe73e
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe74c: WORD 'UNK_0xe74e' codep=0x224c parp=0xe74e
// ================================================

void UNK_0xe74e() // UNK_0xe74e
{
  _gt_TVCT(); // >TVCT
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(-1);
  Push(pp_WLINES); // WLINES
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe760: WORD 'UNK_0xe762' codep=0x224c parp=0xe762
// ================================================

void UNK_0xe762() // UNK_0xe762
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xe772: WORD 'UNK_0xe774' codep=0x224c parp=0xe774
// ================================================

void UNK_0xe774() // UNK_0xe774
{
  Push(0x4e20); Push(0x0000);
  Push(0xbe96); // probable 'CPAUS'
  MODULE(); // MODULE
}


// ================================================
// 0xe782: WORD 'UNK_0xe784' codep=0x224c parp=0xe784
// ================================================

void UNK_0xe784() // UNK_0xe784
{
  CTERASE(); // CTERASE
}

// 0xe788: db 0x4c 0x22 0x5d 0x17 0x01 0x20 0xdb 0x23 0x16 0x6d 0x38 0xe6 0xae 0x0b 0x90 0x5d 0xae 0x0b 0x7f 0x0e 0x92 0x0f 0x72 0x0f 0x20 0x0f 0xb8 0x15 0xdb 0x23 0xfc 0x9e 0xd0 0x15 0xfa 0xff 0x38 0xe6 0x65 0x6d 0x90 0x16 'L"]    # m8    ]     r      #      8 em  '

// ================================================
// 0xe7b2: WORD 'UNK_0xe7b4' codep=0x224c parp=0xe7b4
// ================================================

void UNK_0xe7b4() // UNK_0xe7b4
{
  PRINT("PICKUP", 6); // (.")
}


// ================================================
// 0xe7bf: WORD 'UNK_0xe7c1' codep=0x224c parp=0xe7c1
// ================================================

void UNK_0xe7c1() // UNK_0xe7c1
{
  PRINT("DROP", 4); // (.")
}


// ================================================
// 0xe7ca: WORD 'UNK_0xe7cc' codep=0x224c parp=0xe7cc
// ================================================

void UNK_0xe7cc() // UNK_0xe7cc
{
  PRINT("DESCRIBE", 8); // (.")
}


// ================================================
// 0xe7d9: WORD 'UNK_0xe7db' codep=0x224c parp=0xe7db
// ================================================

void UNK_0xe7db() // UNK_0xe7db
{
  PRINT("ERASE", 5); // (.")
}


// ================================================
// 0xe7e5: WORD 'UNK_0xe7e7' codep=0x224c parp=0xe7e7
// ================================================

void UNK_0xe7e7() // UNK_0xe7e7
{
  PRINT("RECORD", 6); // (.")
}


// ================================================
// 0xe7f2: WORD 'UNK_0xe7f4' codep=0x224c parp=0xe7f4
// ================================================

void UNK_0xe7f4() // UNK_0xe7f4
{
  Push(0);
  SWAP(); // SWAP
  UNK_0xe6b4(); // UNK_0xe6b4
}


// ================================================
// 0xe7fc: WORD 'UNK_0xe7fe' codep=0x1d29 parp=0xe7fe
// ================================================
// 0xe7fe: db 0x00 0x00 0x29 0x1d 0x3a 0x20 '  ) : '

// ================================================
// 0xe804: WORD 'UNK_0xe806' codep=0x224c parp=0xe806
// ================================================

void UNK_0xe806() // UNK_0xe806
{
  Push(pp_UNK_0xe7fe); // UNK_0xe7fe
  _ex__2(); // !_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xe80e: WORD 'UNK_0xe810' codep=0x224c parp=0xe810
// ================================================

void UNK_0xe810() // UNK_0xe810
{
  Push(1);
  Push(Read16(regsp)); // DUP
  UNK_0xe7f4(); // UNK_0xe7f4
  UNK_0xe7c1(); // UNK_0xe7c1
  UNK_0xe806(); // UNK_0xe806
}


// ================================================
// 0xe81c: WORD 'UNK_0xe81e' codep=0x224c parp=0xe81e
// ================================================

void UNK_0xe81e() // UNK_0xe81e
{
  Push(1);
  Push(Read16(regsp)); // DUP
  UNK_0xe7f4(); // UNK_0xe7f4
  UNK_0xe7c1(); // UNK_0xe7c1
  UNK_0xe806(); // UNK_0xe806
}


// ================================================
// 0xe82a: WORD 'UNK_0xe82c' codep=0x224c parp=0xe82c
// ================================================

void UNK_0xe82c() // UNK_0xe82c
{
  Push(1);
  UNK_0xe7f4(); // UNK_0xe7f4
  PRINT("READ", 4); // (.")
  Push(2);
  Push(Read16(regsp)); // DUP
  UNK_0xe7f4(); // UNK_0xe7f4
  UNK_0xe7db(); // UNK_0xe7db
  UNK_0xe806(); // UNK_0xe806
}


// ================================================
// 0xe843: WORD 'UNK_0xe845' codep=0x224c parp=0xe845
// ================================================

void UNK_0xe845() // UNK_0xe845
{
  Push(1);
  UNK_0xe7f4(); // UNK_0xe7f4
  UNK_0xe7c1(); // UNK_0xe7c1
  Push(2);
  Push(Read16(regsp)); // DUP
  UNK_0xe7f4(); // UNK_0xe7f4
  UNK_0xe7cc(); // UNK_0xe7cc
  UNK_0xe806(); // UNK_0xe806
}


// ================================================
// 0xe857: WORD 'T.OPTIONS' codep=0x4b3b parp=0xe865
// ================================================

void T_dot_OPTIONS() // T.OPTIONS
{
  switch(Pop()) // T.OPTIONS
  {
  case 26:
    UNK_0xe810(); // UNK_0xe810
    break;
  case 28:
    UNK_0xe81e(); // UNK_0xe81e
    break;
  case 27:
    UNK_0xe82c(); // UNK_0xe82c
    break;
  case 68:
    UNK_0xe845(); // UNK_0xe845
    break;
  case 11:
    EXIT(); // EXIT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe87d: WORD 'UNK_0xe87f' codep=0x224c parp=0xe87f
// ================================================

void UNK_0xe87f() // UNK_0xe87f
{
  Push(1);
  Push(Read16(regsp)); // DUP
  UNK_0xe7f4(); // UNK_0xe7f4
  UNK_0xe7b4(); // UNK_0xe7b4
  UNK_0xe806(); // UNK_0xe806
}


// ================================================
// 0xe88b: WORD 'UNK_0xe88d' codep=0x224c parp=0xe88d
// ================================================

void UNK_0xe88d() // UNK_0xe88d
{
  Push(1);
  Push(Read16(regsp)); // DUP
  UNK_0xe7f4(); // UNK_0xe7f4
  UNK_0xe7b4(); // UNK_0xe7b4
  UNK_0xe806(); // UNK_0xe806
}


// ================================================
// 0xe899: WORD 'UNK_0xe89b' codep=0x224c parp=0xe89b
// ================================================

void UNK_0xe89b() // UNK_0xe89b
{
  Push(1);
  UNK_0xe7f4(); // UNK_0xe7f4
  PRINT("READ", 4); // (.")
  Push(2);
  Push(Read16(regsp)); // DUP
  UNK_0xe7f4(); // UNK_0xe7f4
  UNK_0xe7e7(); // UNK_0xe7e7
  UNK_0xe806(); // UNK_0xe806
}


// ================================================
// 0xe8b2: WORD 'UNK_0xe8b4' codep=0x224c parp=0xe8b4
// ================================================

void UNK_0xe8b4() // UNK_0xe8b4
{
  Push(0x65f8); // IFIELD(UNK_0xe720)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    Push(1);
    UNK_0xe7f4(); // UNK_0xe7f4
    PRINT("CAPTURE", 7); // (.")
  } else
  {
    Push(1);
    UNK_0xe7f4(); // UNK_0xe7f4
    UNK_0xe7b4(); // UNK_0xe7b4
  }
  Push(2);
  Push(Read16(regsp)); // DUP
  UNK_0xe7f4(); // UNK_0xe7f4
  UNK_0xe7cc(); // UNK_0xe7cc
  UNK_0xe806(); // UNK_0xe806
}


// ================================================
// 0xe8e0: WORD 'UNK_0xe8e2' codep=0x224c parp=0xe8e2
// ================================================

void UNK_0xe8e2() // UNK_0xe8e2
{
  UNK_0xe74e(); // UNK_0xe74e
  UNK_0xe784(); // UNK_0xe784
  Push(0);
  Push(0);
  UNK_0xe6b4(); // UNK_0xe6b4
  GCR(); // GCR
}


// ================================================
// 0xe8f0: WORD 'P.OPTIONS' codep=0x4b3b parp=0xe8fe
// ================================================

void P_dot_OPTIONS() // P.OPTIONS
{
  switch(Pop()) // P.OPTIONS
  {
  case 26:
    UNK_0xe87f(); // UNK_0xe87f
    break;
  case 28:
    UNK_0xe88d(); // UNK_0xe88d
    break;
  case 27:
    UNK_0xe89b(); // UNK_0xe89b
    break;
  case 68:
    UNK_0xe8b4(); // UNK_0xe8b4
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe912: WORD 'UNK_0xe914' codep=0x224c parp=0xe914
// ================================================

void UNK_0xe914() // UNK_0xe914
{
  Push(0);
  Push(5);
  UNK_0xe6b4(); // UNK_0xe6b4
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe920: WORD 'UNK_0xe922' codep=0x224c parp=0xe922
// ================================================

void UNK_0xe922() // UNK_0xe922
{
  Push(0x01f4);
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65f2); // IFIELD(UNK_0xe6ec)
  Push(Read16(Pop())); // @
  _dash_(); // -
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe934: WORD 'UNK_0xe936' codep=0x224c parp=0xe936
// ================================================

void UNK_0xe936() // UNK_0xe936
{
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  LoadData("UNK_0xe6f1"); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-
  if (Pop() == 0) return;
  UNK_0xe922(); // UNK_0xe922
  MIN(); // MIN
}


// ================================================
// 0xe94a: WORD 'UNK_0xe94c' codep=0x224c parp=0xe94c
// ================================================

void UNK_0xe94c() // UNK_0xe94c
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65f2); // IFIELD(UNK_0xe6ec)
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe958: WORD 'UNK_0xe95a' codep=0x224c parp=0xe95a
// ================================================

void UNK_0xe95a() // UNK_0xe95a
{
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  UNK_0xe922(); // UNK_0xe922
  MIN(); // MIN
  Push(1);
  MAX(); // MAX
}


// ================================================
// 0xe968: WORD 'CLASS>VOL' codep=0x4b3b parp=0xe976
// ================================================

void CLASS_gt_VOL() // CLASS>VOL
{
  switch(Pop()) // CLASS>VOL
  {
  case 27:
    Push(0);
    break;
  case 28:
    UNK_0xe936(); // UNK_0xe936
    break;
  default:
    UNK_0xe95a(); // UNK_0xe95a
    break;

  }
}

// ================================================
// 0xe982: WORD 'UNK_0xe984' codep=0x224c parp=0xe984
// ================================================

void UNK_0xe984() // UNK_0xe984
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65f2); // IFIELD(UNK_0xe6ec)
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() != 0)
  {
    _gt_TVCT(); // >TVCT
    UNK_0xe784(); // UNK_0xe784
    Push(pp_UNK_0xe636); // UNK_0xe636
    _099(); // 099
    Push(Read16(cc_FALSE)); // FALSE
    PRINT("NOT ENOUGH ROOM IN CARGO HOLD ", 30); // (.")
    Push(0x05dc);
    MS(); // MS
  } else
  {
    Push(Read16(cc_TRUE)); // TRUE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe9d3: WORD 'UNK_0xe9d5' codep=0x224c parp=0xe9d5
// ================================================

void UNK_0xe9d5() // UNK_0xe9d5
{
  _at_INST_dash_C(); // @INST-C
  CLASS_gt_VOL(); // CLASS>VOL case
  Push(Read16(regsp)); // DUP
  UNK_0xe984(); // UNK_0xe984
}


// ================================================
// 0xe9df: WORD 'UNK_0xe9e1' codep=0x224c parp=0xe9e1
// ================================================

void UNK_0xe9e1() // UNK_0xe9e1
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(0x65ec); // IFIELD(INST-QT)
    Push(Read16(Pop())); // @
  } else
  {
    _at_INST_dash_C(); // @INST-C
    CLASS_gt_VOL(); // CLASS>VOL case
  }
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__2(); // !_2
  UNK_0xe74e(); // UNK_0xe74e
  UNK_0xe784(); // UNK_0xe784
  CI(); // CI
  _2DUP(); // 2DUP
  Push(pp_ITEM); // ITEM
  _1_dot_5_ex__2(); // 1.5!_2
  _2SWAP(); // 2SWAP
  _at_INST_dash_C(); // @INST-C
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(a); // R>
  BOX_gt_TOC(); // BOX>TOC
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  _ro_BOX_gt__rc_(); // (BOX>)
  _ask_NULL(); // ?NULL
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea2f: WORD 'UNK_0xea31' codep=0x224c parp=0xea31
// ================================================

void UNK_0xea31() // UNK_0xea31
{
  Push(pp__ro_SURFAC); // (SURFAC
  _1_dot_5_at_(); // 1.5@
  UNK_0xe9e1(); // UNK_0xe9e1
}


// ================================================
// 0xea39: WORD 'UNK_0xea3b' codep=0x224c parp=0xea3b
// ================================================

void UNK_0xea3b() // UNK_0xea3b
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  UNK_0xe9e1(); // UNK_0xe9e1
  Push(pp_UNK_0xe636); // UNK_0xe636
  ON_2(); // ON_2
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea55: WORD 'UNK_0xea57' codep=0x224c parp=0xea57
// ================================================

void UNK_0xea57() // UNK_0xea57
{
  Push(pp_TVEHICL); // TVEHICL
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea67: WORD 'UNK_0xea69' codep=0x224c parp=0xea69
// ================================================

void UNK_0xea69() // UNK_0xea69
{
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
}


// ================================================
// 0xea73: WORD 'UNK_0xea75' codep=0x224c parp=0xea75
// ================================================

void UNK_0xea75() // UNK_0xea75
{
  Push(0xcf63); // probable '.CA'
  MODULE(); // MODULE
}


// ================================================
// 0xea7d: WORD 'UNK_0xea7f' codep=0x224c parp=0xea7f
// ================================================

void UNK_0xea7f() // UNK_0xea7f
{
  LoadData("UNK_0xe710"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(1);
  Push(Pop() & Pop()); // AND
  Push(0x65f9); // IFIELD(UNK_0xe725)
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(0x65f8); // IFIELD(UNK_0xe720)
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe6d4(); // UNK_0xe6d4
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0);
    return;
  }
  Push(1);
}


// ================================================
// 0xeaa5: WORD 'UNK_0xeaa7' codep=0x224c parp=0xeaa7
// ================================================

void UNK_0xeaa7() // UNK_0xeaa7
{
  PRINT("LIFEFORM CAPTURED AND PUT IN STASIS", 35); // (.")
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xead5: WORD 'UNK_0xead7' codep=0x224c parp=0xead7
// ================================================

void UNK_0xead7() // UNK_0xead7
{
  PRINT("LIFEFORM AVOIDS CAPTURE - USE STUNNER", 37); // (.")
  Push(0x0bb8);
  MS(); // MS
}

// 0xeb07: db 0x4c 0x22 0xad 0x74 0xae 0x0b 0x20 0xe9 0xad 0x11 0x59 0x55 0xe9 0x4c 0x90 0x16 0x4c 0x22 0xbb 0x98 0x3c 0xe7 0x1e 0x7f 0x90 0x16 'L" t      YU L  L"  <    '

// ================================================
// 0xeb21: WORD 'UNK_0xeb23' codep=0x224c parp=0xeb23
// ================================================

void UNK_0xeb23() // UNK_0xeb23
{
  UNK_0xea3b(); // UNK_0xea3b
  _gt_INACTI(); // >INACTI
}


// ================================================
// 0xeb29: WORD 'UNK_0xeb2b' codep=0x224c parp=0xeb2b
// ================================================

void UNK_0xeb2b() // UNK_0xeb2b
{
  UNK_0xe9d5(); // UNK_0xe9d5
  if (Pop() != 0)
  {
    UNK_0xea31(); // UNK_0xea31
    _gt_C_plus_S(); // >C+S
    _dash_ICON(); // -ICON
    CI(); // CI
    Push(pp_TV_dash_HOLD); // TV-HOLD
    _at__gt_C_plus_S(); // @>C+S
    _gt_BOX(); // >BOX
    Push(2);
    _star_CLOSE(); // *CLOSE
    Push(pp_UNK_0xe636); // UNK_0xe636
    ON_2(); // ON_2
  } else
  {
    Pop(); // DROP
    Push(0);
  }
  UNK_0xe94c(); // UNK_0xe94c
  UNK_0xea75(); // UNK_0xea75
}


// ================================================
// 0xeb55: WORD 'UNK_0xeb57' codep=0x224c parp=0xeb57
// ================================================

void UNK_0xeb57() // UNK_0xeb57
{
  unsigned short int a;
  _2DUP(); // 2DUP
  _2DUP(); // 2DUP
  Push(pp_ITEM); // ITEM
  _1_dot_5_ex__2(); // 1.5!_2
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(a); // I
  CLASS_gt_B(); // CLASS>B
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(a); // I
    CLASS_gt_B(); // CLASS>B
    Push(0x000b);
    SWAP(); // SWAP
    Push(1);
    _star_CREATE(); // *CREATE
  }
  Push(a); // R>
  BOX_gt_TOC(); // BOX>TOC
  CI(); // CI
  IINSERT(); // IINSERT
  ICLOSE(); // ICLOSE
}

// 0xeb93: db 0x29 0x1d 0x56 0x3a 0x20 0x40 0x4c 0x22 0x93 0xeb 0x3f 0x6d 0x55 0xea 0xc3 0x5b 0xae 0x0b 0xd6 0x97 0xc8 0x0d 0xfa 0x15 0x42 0x00 0x20 0x0f 0xf2 0x0e 0x20 0x0f 0xb8 0x15 0x41 0x0e 0x89 0x12 0xfa 0x15 0x2a 0x00 0xf2 0x0e 0xe4 0x96 0x69 0x94 0x79 0x94 0x1f 0x7a 0xb4 0x0d 0x22 0x75 0x34 0x75 0x93 0xeb 0x38 0x0c 0x07 0x40 0x90 0x0e 0xf2 0x0e 0xfa 0x15 0x06 0x00 0x32 0x0e 0x2e 0x0f 0xdf 0x79 0x60 0x16 0x06 0x00 0xf2 0x0e 0x32 0x0e 0xd0 0x15 0xca 0xff 0x90 0x16 ') V: @L"  ?mU  [        B         A     *     i y  z  "u4u  8  @        2 .  y`     2       '

// ================================================
// 0xebef: WORD 'UNK_0xebf1' codep=0x224c parp=0xebf1
// ================================================

void UNK_0xebf1() // UNK_0xebf1
{
  UNK_0xea3b(); // UNK_0xea3b
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  UNK_0xe94c(); // UNK_0xe94c
  UNK_0xea75(); // UNK_0xea75
  UNK_0xea57(); // UNK_0xea57
  UNK_0xea69(); // UNK_0xea69
  CI(); // CI
  Push(pp__ro_SURFAC); // (SURFAC
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xeb57(); // UNK_0xeb57
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(0xba55); // probable 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  UNK_0xe73e(); // UNK_0xe73e
  ICLOSE(); // ICLOSE
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec21: WORD 'UNK_0xec23' codep=0x224c parp=0xec23
// ================================================

void UNK_0xec23() // UNK_0xec23
{
  UNK_0xebf1(); // UNK_0xebf1
}


// ================================================
// 0xec27: WORD 'UNK_0xec29' codep=0x224c parp=0xec29
// ================================================

void UNK_0xec29() // UNK_0xec29
{
  UNK_0xeb2b(); // UNK_0xeb2b
}


// ================================================
// 0xec2d: WORD 'UNK_0xec2f' codep=0x224c parp=0xec2f
// ================================================

void UNK_0xec2f() // UNK_0xec2f
{
  Pop(); // DROP
  Push(pp_UNK_0xe642); // UNK_0xe642
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xec23(); // UNK_0xec23
    return;
  }
  UNK_0xec29(); // UNK_0xec29
}


// ================================================
// 0xec43: WORD 'UNK_0xec45' codep=0x224c parp=0xec45
// ================================================

void UNK_0xec45() // UNK_0xec45
{
  UNK_0xe8e2(); // UNK_0xe8e2
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() != 0)
  {
    UNK_0xe9d5(); // UNK_0xe9d5
    if (Pop() != 0)
    {
      Pop(); // DROP
      UNK_0xeaa7(); // UNK_0xeaa7
      UNK_0xe914(); // UNK_0xe914
      UNK_0xeb2b(); // UNK_0xeb2b
    } else
    {
      Pop(); // DROP
    }
  } else
  {
    UNK_0xead7(); // UNK_0xead7
  }
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xea75(); // UNK_0xea75
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xec77: WORD 'UNK_0xec79' codep=0x224c parp=0xec79
// ================================================

void UNK_0xec79() // UNK_0xec79
{
  UNK_0xec29(); // UNK_0xec29
}


// ================================================
// 0xec7d: WORD 'UNK_0xec7f' codep=0x224c parp=0xec7f
// ================================================

void UNK_0xec7f() // UNK_0xec7f
{
  UNK_0xec23(); // UNK_0xec23
}


// ================================================
// 0xec83: WORD 'PA.ACT' codep=0x4b3b parp=0xec8e
// ================================================

void PA_dot_ACT() // PA.ACT
{
  switch(Pop()) // PA.ACT
  {
  case 1:
    UNK_0xec79(); // UNK_0xec79
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xec96: WORD 'TA.ACT' codep=0x4b3b parp=0xeca1
// ================================================

void TA_dot_ACT() // TA.ACT
{
  switch(Pop()) // TA.ACT
  {
  case 1:
    UNK_0xec7f(); // UNK_0xec7f
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeca9: WORD 'UNK_0xecab' codep=0x224c parp=0xecab
// ================================================

void UNK_0xecab() // UNK_0xecab
{
  Push(pp_UNK_0xe642); // UNK_0xe642
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    TA_dot_ACT(); // TA.ACT case
    return;
  }
  PA_dot_ACT(); // PA.ACT case
}


// ================================================
// 0xecbd: WORD 'UNK_0xecbf' codep=0x224c parp=0xecbf
// ================================================

void UNK_0xecbf() // UNK_0xecbf
{
  Push(0x65eb); // IFIELD(INST-SP)
  _at__gt_C_plus_S(); // @>C+S
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  Push(0x65ed); // IFIELD(PHRASE)
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  ICLOSE(); // ICLOSE
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0xbf6f); // probable 'P>CT'
  MODULE(); // MODULE
  UNK_0xe774(); // UNK_0xe774
}


// ================================================
// 0xecdd: WORD 'UNK_0xecdf' codep=0x224c parp=0xecdf
// ================================================

void UNK_0xecdf() // UNK_0xecdf
{
  SetColor("WHITE");
  Push(pp_CTCOLOR); // CTCOLOR
  _ex__2(); // !_2
  UNK_0xecbf(); // UNK_0xecbf
  _ask_CHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      Push(0xbf80); // probable 'CTUP'
      MODULE(); // MODULE
      UNK_0xecbf(); // UNK_0xecbf
      INEXT(); // INEXT
      _ask_FIRST(); // ?FIRST
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
  }
  Push(0xbf80); // probable 'CTUP'
  MODULE(); // MODULE
}


// ================================================
// 0xed09: WORD 'UNK_0xed0b' codep=0x224c parp=0xed0b
// ================================================

void UNK_0xed0b() // UNK_0xed0b
{
  UNK_0xe67a(); // UNK_0xe67a
  UNK_0xe74e(); // UNK_0xe74e
  UNK_0xe784(); // UNK_0xe784
  UNK_0xecdf(); // UNK_0xecdf
}


// ================================================
// 0xed15: WORD 'UNK_0xed17' codep=0x224c parp=0xed17
// ================================================

void UNK_0xed17() // UNK_0xed17
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(-1);
  } else
  {
    Push(pp_STARDAT); // STARDAT
    Push(Read16(Pop())); // @
  }
  Push(0x65f4); // IFIELD(INST-DA)
  _ex__2(); // !_2
  UNK_0xeb2b(); // UNK_0xeb2b
}


// ================================================
// 0xed31: WORD 'PM.ACT' codep=0x4b3b parp=0xed3c
// ================================================

void PM_dot_ACT() // PM.ACT
{
  switch(Pop()) // PM.ACT
  {
  case 1:
    UNK_0xed0b(); // UNK_0xed0b
    break;
  case 2:
    UNK_0xed17(); // UNK_0xed17
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed48: WORD 'TM.ACT' codep=0x4b3b parp=0xed53
// ================================================

void TM_dot_ACT() // TM.ACT
{
  switch(Pop()) // TM.ACT
  {
  case 1:
    UNK_0xed0b(); // UNK_0xed0b
    break;
  case 2:
    UNK_0xeb23(); // UNK_0xeb23
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed5f: WORD 'UNK_0xed61' codep=0x224c parp=0xed61
// ================================================

void UNK_0xed61() // UNK_0xed61
{
  Push(pp_UNK_0xe642); // UNK_0xe642
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    TM_dot_ACT(); // TM.ACT case
    return;
  }
  PM_dot_ACT(); // PM.ACT case
}


// ================================================
// 0xed73: WORD 'UNK_0xed75' codep=0x224c parp=0xed75
// ================================================

void UNK_0xed75() // UNK_0xed75
{
  UNK_0xe67a(); // UNK_0xe67a
  UNK_0xe74e(); // UNK_0xe74e
  UNK_0xe784(); // UNK_0xe784
  Push(5);
  Push(pp_UNK_0xe63a); // UNK_0xe63a
  _st__ex__gt_(); // <!>
  _at_INST_dash_C(); // @INST-C
  Push(0xbe35); // probable '.LIFE'
  MODULE(); // MODULE
}


// ================================================
// 0xed8b: WORD 'PL.ACT' codep=0x4b3b parp=0xed96
// ================================================

void PL_dot_ACT() // PL.ACT
{
  switch(Pop()) // PL.ACT
  {
  case 1:
    UNK_0xec45(); // UNK_0xec45
    break;
  case 2:
    UNK_0xed75(); // UNK_0xed75
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeda2: WORD 'TL.ACT' codep=0x4b3b parp=0xedad
// ================================================

void TL_dot_ACT() // TL.ACT
{
  switch(Pop()) // TL.ACT
  {
  case 1:
    UNK_0xec23(); // UNK_0xec23
    break;
  case 2:
    UNK_0xed75(); // UNK_0xed75
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xedb9: WORD 'UNK_0xedbb' codep=0x224c parp=0xedbb
// ================================================

void UNK_0xedbb() // UNK_0xedbb
{
  Push(pp_UNK_0xe642); // UNK_0xe642
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    TL_dot_ACT(); // TL.ACT case
    return;
  }
  PL_dot_ACT(); // PL.ACT case
}


// ================================================
// 0xedcd: WORD 'DISPATCH' codep=0x4b3b parp=0xedda
// ================================================

void DISPATCH() // DISPATCH
{
  switch(Pop()) // DISPATCH
  {
  case 68:
    UNK_0xedbb(); // UNK_0xedbb
    break;
  case 27:
    UNK_0xed61(); // UNK_0xed61
    break;
  case 26:
    UNK_0xec2f(); // UNK_0xec2f
    break;
  case 28:
    UNK_0xecab(); // UNK_0xecab
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xedee: WORD 'UNK_0xedf0' codep=0x224c parp=0xedf0
// ================================================

void UNK_0xedf0() // UNK_0xedf0
{
  Push(0x001b);
  Push(0x0015);
  POS_dot_(); // POS.
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("SCROLL ITEMS: ^\\   QUIT: []", 27); // (.")
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(5);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(7);
    Push(pp_WBOTTOM); // WBOTTOM
    _st__plus__ex__gt_(); // <+!>
    Push(-1);
    Push(pp_WLINES); // WLINES
    _st__plus__ex__gt_(); // <+!>
  }
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xee3c: WORD 'UNK_0xee3e' codep=0x224c parp=0xee3e
// ================================================

void UNK_0xee3e() // UNK_0xee3e
{
  Push(pp_UNK_0xe636); // UNK_0xe636
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  _gt_TVCT(); // >TVCT
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe784(); // UNK_0xe784
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe762(); // UNK_0xe762
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  _gt_BOTT(); // >BOTT
  PRINT("REVISING TERRAIN VEHICLE INVENTORY", 34); // (.")
  Push(pp_UNK_0xe636); // UNK_0xe636
  OFF_2(); // OFF_2
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xee8f: WORD 'UNK_0xee91' codep=0x1d29 parp=0xee91
// ================================================
// 0xee91: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xee94: WORD 'UNK_0xee96' codep=0x224c parp=0xee96
// ================================================

void UNK_0xee96() // UNK_0xee96
{
  Push(pp_UNK_0xee91); // UNK_0xee91
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xee9c: WORD 'UNK_0xee9e' codep=0x224c parp=0xee9e
// ================================================

void UNK_0xee9e() // UNK_0xee9e
{
  UNK_0xee96(); // UNK_0xee96
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp_UNK_0xee91); // UNK_0xee91
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeae: WORD 'UNK_0xeeb0' codep=0x224c parp=0xeeb0
// ================================================

void UNK_0xeeb0() // UNK_0xeeb0
{
  UNK_0xee96(); // UNK_0xee96
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp_UNK_0xee91); // UNK_0xee91
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeec0: WORD 'UNK_0xeec2' codep=0x224c parp=0xeec2
// ================================================

void UNK_0xeec2() // UNK_0xeec2
{
  UNK_0xee96(); // UNK_0xee96
  _gt_C_plus_S(); // >C+S
  Push(0x65ef); // IFIELD(TEXT-IN)
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeed0: WORD 'UNK_0xeed2' codep=0x224c parp=0xeed2
// ================================================

void UNK_0xeed2() // UNK_0xeed2
{
  UNK_0xe67a(); // UNK_0xe67a
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe67a(); // UNK_0xe67a
}


// ================================================
// 0xeee0: WORD 'UNK_0xeee2' codep=0x224c parp=0xeee2
// ================================================

void UNK_0xeee2() // UNK_0xeee2
{
  unsigned short int i, imax;
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(7);
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    ABS(); // ABS
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      SetColor("BLACK");
      WSHORTE(); // WSHORTE
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xef08: WORD 'UNK_0xef0a' codep=0x224c parp=0xef0a
// ================================================

void UNK_0xef0a() // UNK_0xef0a
{
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xef0e: WORD 'UNK_0xef10' codep=0x224c parp=0xef10
// ================================================

void UNK_0xef10() // UNK_0xef10
{
  UNK_0xeec2(); // UNK_0xeec2
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef20: WORD 'UNK_0xef22' codep=0x224c parp=0xef22
// ================================================

void UNK_0xef22() // UNK_0xef22
{
  UNK_0xe67a(); // UNK_0xe67a
  Push(pp_UNK_0xe63e); // UNK_0xe63e
  _st__plus__ex__gt_(); // <+!>
  Push(pp_UNK_0xe63e); // UNK_0xe63e
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  Push(1);
  MAX(); // MAX
  Push(pp_UNK_0xe7fe); // UNK_0xe7fe
  Push(Read16(Pop())); // @
  MIN(); // MIN
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
  _gt_TVCT(); // >TVCT
  Push(pp_UNK_0xe63e); // UNK_0xe63e
  Push(Read16(Pop())); // @
  Push(7);
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe67a(); // UNK_0xe67a
}


// ================================================
// 0xef50: WORD 'UNK_0xef52' codep=0x224c parp=0xef52
// ================================================

void UNK_0xef52() // UNK_0xef52
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x65ef); // IFIELD(TEXT-IN)
  _at__gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(pp__ro_SURFAC); // (SURFAC
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(0);
  } else
  {
    Push(-1);
  }
  Push(pp_UNK_0xe642); // UNK_0xe642
  _st__ex__gt_(); // <!>
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef7c: WORD 'UNK_0xef7e' codep=0x224c parp=0xef7e
// ================================================

void UNK_0xef7e() // UNK_0xef7e
{
  UNK_0xef0a(); // UNK_0xef0a
  UNK_0xee3e(); // UNK_0xee3e
  DELETE_dash_(); // DELETE-
  MAKE_dash_SC(); // MAKE-SC
  Push(pp_SUPER_dash_B); // SUPER-B
  _1_dot_5_at_(); // 1.5@
  GET_dash_BOX(); // GET-BOX
  UNK_0xef52(); // UNK_0xef52
  UNK_0xeee2(); // UNK_0xeee2
}


// ================================================
// 0xef92: WORD 'UNK_0xef94' codep=0x224c parp=0xef94
// ================================================

void UNK_0xef94() // UNK_0xef94
{
  _gt_TVCT(); // >TVCT
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe784(); // UNK_0xe784
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xeec2(); // UNK_0xeec2
  _at_INST_dash_C(); // @INST-C
  Push(pp_UNK_0xe642); // UNK_0xe642
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    T_dot_OPTIONS(); // T.OPTIONS case
  } else
  {
    P_dot_OPTIONS(); // P.OPTIONS case
  }
  UNK_0xeed2(); // UNK_0xeed2
}


// ================================================
// 0xefc2: WORD 'UNK_0xefc4' codep=0x224c parp=0xefc4
// ================================================

void UNK_0xefc4() // UNK_0xefc4
{
  unsigned short int i, imax;
  UNK_0xedf0(); // UNK_0xedf0
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_WLEFT); // WLEFT
    Push(Read16(Pop())); // @
    Push(pp_WTOP); // WTOP
    Push(Read16(Pop())); // @
    Push(Pop()-1); // 1-
    Push(i); // I
    Push(7);
    Push(Pop() * Pop()); // *
    _dash_(); // -
    POS_dot_(); // POS.
    TEXT_gt_PA(); // TEXT>PA
    PAD(); // PAD
    _do__dot_(); // $.
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeff0: WORD 'UNK_0xeff2' codep=0x224c parp=0xeff2
// ================================================

void UNK_0xeff2() // UNK_0xeff2
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_UNK_0xee91); // UNK_0xee91
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0);
  do
  {
    Push(Pop()+1); // 1+
    INEXT(); // INEXT
    _ask_FIRST(); // ?FIRST
  } while(Pop() == 0);
  _gt_1FONT(); // >1FONT
  UNK_0xefc4(); // UNK_0xefc4
  IPREV(); // IPREV
  UNK_0xe67a(); // UNK_0xe67a
  Pop(); // DROP
}


// ================================================
// 0xf016: WORD 'UNK_0xf018' codep=0x224c parp=0xf018
// ================================================

void UNK_0xf018() // UNK_0xf018
{
  Push(1);
  Push(pp_UNK_0xe63e); // UNK_0xe63e
  _ex__2(); // !_2
  Push(pp_UNK_0xe636); // UNK_0xe636
  _099(); // 099
  Push(pp_FQUIT); // FQUIT
  _099(); // 099

  label4:
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  XYSCAN(); // XYSCAN
  Push(1);
  Push(0);
  _2OVER(); // 2OVER
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(-1);
    UNK_0xef22(); // UNK_0xef22
  } else
  {
    Push(-1);
    Push(0);
    _2OVER(); // 2OVER
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      Push(1);
      UNK_0xef22(); // UNK_0xef22
    } else
    {
      Pop(); // DROP
      _ask_TRIG(); // ?TRIG
      if (Pop() != 0)
      {
        Push(pp_UNK_0xe63e); // UNK_0xe63e
        Push(Read16(Pop())); // @
        _at_INST_dash_C(); // @INST-C
        DISPATCH(); // DISPATCH case
        Push(pp_UNK_0xe636); // UNK_0xe636
        Push(Read16(Pop())); // @
        if (Pop() != 0)
        {
          UNK_0xef7e(); // UNK_0xef7e
        }
        Push(pp_FQUIT); // FQUIT
        ON_2(); // ON_2
      }
      Pop(); // DROP
    }
  }
  goto label4;

  label1:
  Push(3);
  _star_CLOSE(); // *CLOSE
  _gt_TVCT(); // >TVCT
  UNK_0xe784(); // UNK_0xe784
  UNK_0xeee2(); // UNK_0xeee2
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xeff2(); // UNK_0xeff2
  UNK_0xef52(); // UNK_0xef52
}


// ================================================
// 0xf094: WORD 'UNK_0xf096' codep=0x224c parp=0xf096
// ================================================

void UNK_0xf096() // UNK_0xf096
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf0a0: WORD 'UNK_0xf0a2' codep=0x224c parp=0xf0a2
// ================================================

void UNK_0xf0a2() // UNK_0xf0a2
{
  UNK_0xf096(); // UNK_0xf096
  SetColor("BLACK");
  UNK_0xf096(); // UNK_0xf096
  Push(0x0053);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT(" ", 1); // (.")
  _ex_COLOR(); // !COLOR
  Push(0x0053);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("^", 1); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf0ca: WORD 'UNK_0xf0cc' codep=0x224c parp=0xf0cc
// ================================================

void UNK_0xf0cc() // UNK_0xf0cc
{
  UNK_0xf096(); // UNK_0xf096
  SetColor("BLACK");
  UNK_0xf096(); // UNK_0xf096
  Push(0x0057);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT(" ", 1); // (.")
  _ex_COLOR(); // !COLOR
  Push(0x0057);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("\\", 1); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf0f4: WORD 'UNK_0xf0f6' codep=0x224c parp=0xf0f6
// ================================================

void UNK_0xf0f6() // UNK_0xf0f6
{
  UNK_0xf096(); // UNK_0xf096
  SetColor("BLACK");
  UNK_0xf096(); // UNK_0xf096
  Push(0x007f);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("  ", 2); // (.")
  _ex_COLOR(); // !COLOR
  Push(0x007f);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("[]", 2); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x224c parp=0xf122
// ================================================

void UNK_0xf122() // UNK_0xf122
{
  UNK_0xeec2(); // UNK_0xeec2
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    _at_INST_dash_S(); // @INST-S
    Push(Read16(regsp)); // DUP
    Push(0x0028);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(1);
    } else
    {
      Push(0x002c);
      Push((Pop()==Pop())?1:0); // =
      if (Pop() != 0)
      {
        Push(-1);
      } else
      {
        Push(0);
      }
    }
  } else
  {
    Push(0);
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf162: WORD 'UNK_0xf164' codep=0x224c parp=0xf164
// ================================================

void UNK_0xf164() // UNK_0xf164
{
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(-1);
    Push(pp_UNK_0xe642); // UNK_0xe642
    _st__ex__gt_(); // <!>
  }
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(0);
  Push(pp_UNK_0xe642); // UNK_0xe642
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf180: WORD 'UNK_0xf182' codep=0x224c parp=0xf182
// ================================================

void UNK_0xf182() // UNK_0xf182
{
  UNK_0xf122(); // UNK_0xf122
  UNK_0xf164(); // UNK_0xf164
}


// ================================================
// 0xf188: WORD 'UNK_0xf18a' codep=0x224c parp=0xf18a
// ================================================

void UNK_0xf18a() // UNK_0xf18a
{
  UNK_0xf122(); // UNK_0xf122
  Push(-Pop()); // NEGATE
  UNK_0xf164(); // UNK_0xf164
}


// ================================================
// 0xf192: WORD 'UNK_0xf194' codep=0x224c parp=0xf194
// ================================================

void UNK_0xf194() // UNK_0xf194
{
  SetColor("GREEN");
  UNK_0xf0a2(); // UNK_0xf0a2
  CLICK(); // CLICK
  INEXT(); // INEXT
  UNK_0xee9e(); // UNK_0xee9e
  UNK_0xf182(); // UNK_0xf182
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  UNK_0xe67a(); // UNK_0xe67a
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(-1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
  WLINE_dash_U(); // WLINE-U
  Push(1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
  UNK_0xe67a(); // UNK_0xe67a
  SetColor("LT-BLUE");
  UNK_0xf0a2(); // UNK_0xf0a2
}


// ================================================
// 0xf1cc: WORD 'UNK_0xf1ce' codep=0x224c parp=0xf1ce
// ================================================

void UNK_0xf1ce() // UNK_0xf1ce
{
  SetColor("GREEN");
  UNK_0xf0cc(); // UNK_0xf0cc
  CLICK(); // CLICK
  UNK_0xf18a(); // UNK_0xf18a
  IPREV(); // IPREV
  UNK_0xeeb0(); // UNK_0xeeb0
  UNK_0xee96(); // UNK_0xee96
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  PAD(); // PAD
  UNK_0xe67a(); // UNK_0xe67a
  Push(-1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
  WLINE_dash_D(); // WLINE-D
  Push(1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
  UNK_0xe67a(); // UNK_0xe67a
  SetColor("LT-BLUE");
  UNK_0xf0cc(); // UNK_0xf0cc
}


// ================================================
// 0xf20c: WORD 'TD-SCROLL' codep=0x4b3b parp=0xf21a
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 65535:
    UNK_0xf1ce(); // UNK_0xf1ce
    break;
  case 1:
    UNK_0xf194(); // UNK_0xf194
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf226: WORD 'UNK_0xf228' codep=0x224c parp=0xf228
// ================================================

void UNK_0xf228() // UNK_0xf228
{
  do
  {
    UNK_0xe684(); // UNK_0xe684
    XYSCAN(); // XYSCAN
    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() != 0)
    {
      TD_dash_SCROLL(); // TD-SCROLL case
    } else
    {
      Pop(); // DROP
    }
    _ask_TRIG(); // ?TRIG
    UNK_0xef10(); // UNK_0xef10
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      UNK_0xef94(); // UNK_0xef94
      Push(pp_FQUIT); // FQUIT
      _099(); // 099
      UNK_0xf018(); // UNK_0xf018
    }
    Push(pp_FQUIT); // FQUIT
    Push(Read16(Pop())); // @
  } while(Pop() == 0);
}


// ================================================
// 0xf256: WORD 'UNK_0xf258' codep=0x224c parp=0xf258
// ================================================

void UNK_0xf258() // UNK_0xf258
{
  Push2Words("0.");
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;

  label4:
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  CJ(); // CJ
  CI(); // CI
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    CI_i_(); // CI'
  }
  INEXT(); // INEXT
  goto label4;

  label2:
  CJ(); // CJ
  CI(); // CI
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    CI_i_(); // CI'
  }

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2a0: WORD 'UNK_0xf2a2' codep=0x224c parp=0xf2a2
// ================================================

void UNK_0xf2a2() // UNK_0xf2a2
{
  Push2Words("0.");
  do
  {
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() == 0) Push(1); else Push(0); // 0=
    _ask_LAST(); // ?LAST
    if (Pop() == 0) Push(1); else Push(0); // 0=
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) return;
    Push(0x000b);
    Push(0);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      CI(); // CI
      CJ(); // CJ
      _gt_C_plus_S(); // >C+S
      UNK_0xf258(); // UNK_0xf258
      ICLOSE(); // ICLOSE
      _2DUP(); // 2DUP
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        _2SWAP(); // 2SWAP
      }
      Pop(); Pop(); // 2DROP
    }
    INEXT(); // INEXT
  } while(1);
}

// 0xf2de: db 0x4c 0x22 0x07 0x76 0xfa 0x15 0x0c 0x00 0xdf 0x79 0x1e 0x7f 0xc9 0x7a 0xc4 0x52 0x1f 0x7a 0x90 0x16 'L" v     y  z R z  '

// ================================================
// 0xf2f2: WORD 'UNK_0xf2f4' codep=0x224c parp=0xf2f4
// ================================================

void UNK_0xf2f4() // UNK_0xf2f4
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  UNK_0xf258(); // UNK_0xf258
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(pp__ro_PLANET); // (PLANET
    _at__gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    UNK_0xf2a2(); // UNK_0xf2a2
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
  }
  C_gt_(); // C>
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xf320: WORD 'UNK_0xf322' codep=0x224c parp=0xf322
// ================================================

void UNK_0xf322() // UNK_0xf322
{
  _at_INST_dash_C(); // @INST-C
  Push(0x001b);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(pp_PAST); // PAST
    Push(Read16(Pop())); // @
    if (Pop() != 0)
    {
      Push(-1);
    } else
    {
      Push(pp_STARDAT); // STARDAT
      Push(Read16(Pop())); // @
    }
    Push(0x65f4); // IFIELD(INST-DA)
    _ex__2(); // !_2
  }
  IEXTRAC(); // IEXTRAC
  Push(pp__ro_SURFAC); // (SURFAC
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xeb57(); // UNK_0xeb57
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  Push(-1);
  Push(0x65ec); // IFIELD(INST-QT)
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf35a: WORD 'UNK_0xf35c' codep=0x224c parp=0xf35c
// ================================================

void UNK_0xf35c() // UNK_0xf35c
{
  UNK_0xea57(); // UNK_0xea57
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(2);
  _st_(); // <
  SWAP(); // SWAP
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(2);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf37c: WORD 'UNK_0xf37e' codep=0x224c parp=0xf37e
// ================================================

void UNK_0xf37e() // UNK_0xf37e
{
  unsigned short int i, imax, a;
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_I(); // POINT>I
    _at_ID(); // @ID
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(0x0011);
    _st_(); // <
    Push(Read16(a)); // R@
    Push(0x0014);
    Push(0x0017);
    WITHIN(); // WITHIN
    Push(Pop() | Pop()); // OR
    Push(Read16(a)); // R@
    Push(0x00fe);
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() | Pop()); // OR
    Push(a); // R>
    Push(0x002d);
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() | Pop()); // OR
    _at_IC(); // @IC
    Push(Read16(cc_DEAD_dash_IC)); // DEAD-IC
    Push((Pop()==Pop())?1:0); // =
    if (Pop() == 0) Push(1); else Push(0); // NOT
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      _at_IL(); // @IL
      _at_IH(); // @IH
      _gt_C_plus_S(); // >C+S
      UNK_0xf35c(); // UNK_0xf35c
      if (Pop() != 0)
      {
        UNK_0xf2f4(); // UNK_0xf2f4
        UNK_0xf322(); // UNK_0xf322
        CDROP(); // CDROP
        ICLOSE(); // ICLOSE
      }
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf3e2: WORD 'UNK_0xf3e4' codep=0x224c parp=0xf3e4
// ================================================

void UNK_0xf3e4() // UNK_0xf3e4
{
  CJ(); // CJ
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    UNK_0xea57(); // UNK_0xea57
    Push(0x65f0); // IFIELD(INST-Y)
    _ex__2(); // !_2
    Push(0x65ee); // IFIELD(INST-X)
    _ex__2(); // !_2
  }
  _ro_BOX_gt__rc_(); // (BOX>)
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
}


// ================================================
// 0xf404: WORD 'UNK_0xf406' codep=0x224c parp=0xf406
// ================================================

void UNK_0xf406() // UNK_0xf406
{
  IOPEN(); // IOPEN

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf3e4(); // UNK_0xf3e4
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  IPREV(); // IPREV
}


// ================================================
// 0xf41e: WORD 'UNK_0xf420' codep=0x224c parp=0xf420
// ================================================

void UNK_0xf420() // UNK_0xf420
{
  Push(0x7d00);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
  IOPEN(); // IOPEN

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf406(); // UNK_0xf406
  goto label2;

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x000a);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf446: WORD 'UNK_0xf448' codep=0x224c parp=0xf448
// ================================================

void UNK_0xf448() // UNK_0xf448
{
  Push(pp__ro_SURFAC); // (SURFAC
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf420(); // UNK_0xf420
}


// ================================================
// 0xf450: WORD '>DEBRIS' codep=0x224c parp=0xf45c
// ================================================
// entry

void _gt_DEBRIS() // >DEBRIS
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf420(); // UNK_0xf420
}


// ================================================
// 0xf464: WORD 'UNK_0xf466' codep=0x224c parp=0xf466
// ================================================

void UNK_0xf466() // UNK_0xf466
{
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001c);
    Push(0x0029);
    IFIND(); // IFIND
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0);
  }
  Push(pp__ask_FLAT); // ?FLAT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf48e: WORD 'UNK_0xf490' codep=0x224c parp=0xf490
// ================================================

void UNK_0xf490() // UNK_0xf490
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  UNK_0xf466(); // UNK_0xf466
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf49e: WORD '(/ITEMS)' codep=0x224c parp=0xf4ab
// ================================================
// entry

void _ro__slash_ITEMS_rc_() // (/ITEMS)
{
  _gt_TVCT(); // >TVCT
  UNK_0xe784(); // UNK_0xe784
  MAXSPAC(); // MAXSPAC
  _1_dot_5_at_(); // 1.5@
  _at_NEWSPA(); // @NEWSPA
  D_st_(); // D<
  Push(pp__ask_CRITIC); // ?CRITIC
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    Push(pp_NOF); // NOF
    ON_2(); // ON_2
    do
    {
      Push(pp__ro_SCROLL_1); // (SCROLL_1
      _1_dot_5_at_(); // 1.5@
      Push(Pop() | Pop()); // OR
      if (Pop() == 0) Push(1); else Push(0); // 0=
      if (Pop() != 0)
      {
        MAKE_dash_SC(); // MAKE-SC
        Push(pp_ESC_dash_EN); // ESC-EN
        _099(); // 099
        UNK_0xf37e(); // UNK_0xf37e
        Push(pp_SUPER_dash_B); // SUPER-B
        _1_dot_5_at_(); // 1.5@
        GET_dash_BOX(); // GET-BOX
      }
      Push(pp_XORMODE); // XORMODE
      _099(); // 099
      UNK_0xeee2(); // UNK_0xeee2
      SetColor("WHITE");
      _ex_COLOR(); // !COLOR
      UNK_0xeff2(); // UNK_0xeff2
      UNK_0xef52(); // UNK_0xef52
      UNK_0xf228(); // UNK_0xf228
      _ask_QUIT(); // ?QUIT
    } while(Pop() == 0);
    SetColor("GREEN");
    UNK_0xf0f6(); // UNK_0xf0f6
    DELETE_dash_(); // DELETE-
    Push2Words("0.");
    Push(pp__ro_SCROLL_1); // (SCROLL_1
    _1_dot_5_ex__2(); // 1.5!_2
    Push(pp_ESC_dash_EN); // ESC-EN
    ON_2(); // ON_2
    UNK_0xf448(); // UNK_0xf448
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    UNK_0xef0a(); // UNK_0xef0a
    Push(7);
    Push(pp_UNK_0xe63a); // UNK_0xe63a
    _st__ex__gt_(); // <!>
    SetColor("LT-BLUE");
    UNK_0xf0f6(); // UNK_0xf0f6
    UNK_0xe67a(); // UNK_0xe67a
    UNK_0xe784(); // UNK_0xe784
    UNK_0xf490(); // UNK_0xf490
    Push(pp_NOF); // NOF
    _099(); // 099
  } else
  {
    Push(6);
    Push(0);
    UNK_0xe6b4(); // UNK_0xe6b4
    PRINT("NOT ENOUGH STORAGE FOR FUNCTION", 31); // (.")
    Push(0x0fa0);
    MS(); // MS
    UNK_0xe784(); // UNK_0xe784
  }
  UNK_0xef0a(); // UNK_0xef0a
}

// 0xf55b: db 0x49 0x54 0x45 0x4d 0x53 0x00 'ITEMS '

