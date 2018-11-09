// ====== OVERLAY 'TVITEMS' ======
// store offset = 0xe620
// overlay size   = 0x0f40

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE636  codep:0x1d29 wordp:0xe636 size:0x0002 C-string:'WE636'
//           WE63A  codep:0x1d29 wordp:0xe63a size:0x0002 C-string:'WE63A'
//           WE63E  codep:0x1d29 wordp:0xe63e size:0x0002 C-string:'WE63E'
//           WE642  codep:0x1d29 wordp:0xe642 size:0x0002 C-string:'WE642'
//           WE646  codep:0x224c wordp:0xe646 size:0x0032 C-string:'WE646'
//           WE67A  codep:0x224c wordp:0xe67a size:0x0008 C-string:'WE67A'
//           WE684  codep:0x224c wordp:0xe684 size:0x002e C-string:'WE684'
//           WE6B4  codep:0x224c wordp:0xe6b4 size:0x001e C-string:'WE6B4'
//           WE6D4  codep:0x224c wordp:0xe6d4 size:0x0006 C-string:'WE6D4'
//           WE6DC  codep:0x2214 wordp:0xe6dc size:0x0002 C-string:'WE6DC'
//           WE6E0  codep:0x2214 wordp:0xe6e0 size:0x0002 C-string:'WE6E0'
//           WE6E4  codep:0x2214 wordp:0xe6e4 size:0x0002 C-string:'WE6E4'
//           WE6E8  codep:0x2214 wordp:0xe6e8 size:0x0002 C-string:'WE6E8'
//           WE6EC  codep:0x7420 wordp:0xe6ec size:0x0003 C-string:'WE6EC'
//           WE6F1  codep:0x7394 wordp:0xe6f1 size:0x0006 C-string:'WE6F1'
//           WE6F9  codep:0x7420 wordp:0xe6f9 size:0x0003 C-string:'WE6F9'
//           WE6FE  codep:0x7420 wordp:0xe6fe size:0x0003 C-string:'WE6FE'
//           WE703  codep:0x7420 wordp:0xe703 size:0x0003 C-string:'WE703'
//           WE708  codep:0x7394 wordp:0xe708 size:0x0006 C-string:'WE708'
//           WE710  codep:0x7394 wordp:0xe710 size:0x0006 C-string:'WE710'
//           WE718  codep:0x7394 wordp:0xe718 size:0x0006 C-string:'WE718'
//           WE720  codep:0x7420 wordp:0xe720 size:0x0003 C-string:'WE720'
//           WE725  codep:0x7420 wordp:0xe725 size:0x0003 C-string:'WE725'
//           WE72A  codep:0x224c wordp:0xe72a size:0x0012 C-string:'WE72A'
//           WE73E  codep:0x224c wordp:0xe73e size:0x000e C-string:'WE73E'
//           WE74E  codep:0x224c wordp:0xe74e size:0x0012 C-string:'WE74E'
//           WE762  codep:0x224c wordp:0xe762 size:0x0010 C-string:'WE762'
//           WE774  codep:0x224c wordp:0xe774 size:0x000e C-string:'WE774'
//           WE784  codep:0x224c wordp:0xe784 size:0x0004 C-string:'WE784'
//           WE78A  codep:0x224c wordp:0xe78a size:0x0028 C-string:'WE78A'
//           WE7B4  codep:0x224c wordp:0xe7b4 size:0x000b C-string:'WE7B4'
//           WE7C1  codep:0x224c wordp:0xe7c1 size:0x0009 C-string:'WE7C1'
//           WE7CC  codep:0x224c wordp:0xe7cc size:0x000d C-string:'WE7CC'
//           WE7DB  codep:0x224c wordp:0xe7db size:0x000a C-string:'WE7DB'
//           WE7E7  codep:0x224c wordp:0xe7e7 size:0x000b C-string:'WE7E7'
//           WE7F4  codep:0x224c wordp:0xe7f4 size:0x0008 C-string:'WE7F4'
//           WE7FE  codep:0x1d29 wordp:0xe7fe size:0x0002 C-string:'WE7FE'
//           WE802  codep:0x1d29 wordp:0xe802 size:0x0002 C-string:'WE802'
//           WE806  codep:0x224c wordp:0xe806 size:0x0008 C-string:'WE806'
//           WE810  codep:0x224c wordp:0xe810 size:0x000c C-string:'WE810'
//           WE81E  codep:0x224c wordp:0xe81e size:0x000c C-string:'WE81E'
//           WE82C  codep:0x224c wordp:0xe82c size:0x0017 C-string:'WE82C'
//           WE845  codep:0x224c wordp:0xe845 size:0x0012 C-string:'WE845'
//       T.OPTIONS  codep:0x4b3b wordp:0xe865 size:0x0018 C-string:'T_dot_OPTIONS'
//           WE87F  codep:0x224c wordp:0xe87f size:0x000c C-string:'WE87F'
//           WE88D  codep:0x224c wordp:0xe88d size:0x000c C-string:'WE88D'
//           WE89B  codep:0x224c wordp:0xe89b size:0x0017 C-string:'WE89B'
//           WE8B4  codep:0x224c wordp:0xe8b4 size:0x002c C-string:'WE8B4'
//           WE8E2  codep:0x224c wordp:0xe8e2 size:0x000e C-string:'WE8E2'
//       P.OPTIONS  codep:0x4b3b wordp:0xe8fe size:0x0014 C-string:'P_dot_OPTIONS'
//           WE914  codep:0x224c wordp:0xe914 size:0x000c C-string:'WE914'
//           WE922  codep:0x224c wordp:0xe922 size:0x0012 C-string:'WE922'
//           WE936  codep:0x224c wordp:0xe936 size:0x0014 C-string:'WE936'
//           WE94C  codep:0x224c wordp:0xe94c size:0x000c C-string:'WE94C'
//           WE95A  codep:0x224c wordp:0xe95a size:0x000e C-string:'WE95A'
//       CLASS>VOL  codep:0x4b3b wordp:0xe976 size:0x000c C-string:'CLASS_gt_VOL'
//           WE984  codep:0x224c wordp:0xe984 size:0x004f C-string:'WE984'
//           WE9D5  codep:0x224c wordp:0xe9d5 size:0x000a C-string:'WE9D5'
//           WE9E1  codep:0x224c wordp:0xe9e1 size:0x004e C-string:'WE9E1'
//           WEA31  codep:0x224c wordp:0xea31 size:0x0008 C-string:'WEA31'
//           WEA3B  codep:0x224c wordp:0xea3b size:0x001a C-string:'WEA3B'
//           WEA57  codep:0x224c wordp:0xea57 size:0x0010 C-string:'WEA57'
//           WEA69  codep:0x224c wordp:0xea69 size:0x000a C-string:'WEA69'
//           WEA75  codep:0x224c wordp:0xea75 size:0x0008 C-string:'WEA75'
//           WEA7F  codep:0x224c wordp:0xea7f size:0x0026 C-string:'WEA7F'
//           WEAA7  codep:0x224c wordp:0xeaa7 size:0x002e C-string:'WEAA7'
//           WEAD7  codep:0x224c wordp:0xead7 size:0x0030 C-string:'WEAD7'
//           WEB09  codep:0x224c wordp:0xeb09 size:0x000e C-string:'WEB09'
//           WEB19  codep:0x224c wordp:0xeb19 size:0x0008 C-string:'WEB19'
//           WEB23  codep:0x224c wordp:0xeb23 size:0x0006 C-string:'WEB23'
//           WEB2B  codep:0x224c wordp:0xeb2b size:0x002a C-string:'WEB2B'
//           WEB57  codep:0x224c wordp:0xeb57 size:0x003c C-string:'WEB57'
//           WEB95  codep:0x1d29 wordp:0xeb95 size:0x0004 C-string:'WEB95'
//           WEB9B  codep:0x224c wordp:0xeb9b size:0x0054 C-string:'WEB9B'
//           WEBF1  codep:0x224c wordp:0xebf1 size:0x0030 C-string:'WEBF1'
//           WEC23  codep:0x224c wordp:0xec23 size:0x0004 C-string:'WEC23'
//           WEC29  codep:0x224c wordp:0xec29 size:0x0004 C-string:'WEC29'
//           WEC2F  codep:0x224c wordp:0xec2f size:0x0014 C-string:'WEC2F'
//           WEC45  codep:0x224c wordp:0xec45 size:0x0032 C-string:'WEC45'
//           WEC79  codep:0x224c wordp:0xec79 size:0x0004 C-string:'WEC79'
//           WEC7F  codep:0x224c wordp:0xec7f size:0x0004 C-string:'WEC7F'
//          PA.ACT  codep:0x4b3b wordp:0xec8e size:0x0008 C-string:'PA_dot_ACT'
//          TA.ACT  codep:0x4b3b wordp:0xeca1 size:0x0008 C-string:'TA_dot_ACT'
//           WECAB  codep:0x224c wordp:0xecab size:0x0012 C-string:'WECAB'
//           WECBF  codep:0x224c wordp:0xecbf size:0x001e C-string:'WECBF'
//           WECDF  codep:0x224c wordp:0xecdf size:0x002a C-string:'WECDF'
//           WED0B  codep:0x224c wordp:0xed0b size:0x000a C-string:'WED0B'
//           WED17  codep:0x224c wordp:0xed17 size:0x001a C-string:'WED17'
//          PM.ACT  codep:0x4b3b wordp:0xed3c size:0x000c C-string:'PM_dot_ACT'
//          TM.ACT  codep:0x4b3b wordp:0xed53 size:0x000c C-string:'TM_dot_ACT'
//           WED61  codep:0x224c wordp:0xed61 size:0x0012 C-string:'WED61'
//           WED75  codep:0x224c wordp:0xed75 size:0x0016 C-string:'WED75'
//          PL.ACT  codep:0x4b3b wordp:0xed96 size:0x000c C-string:'PL_dot_ACT'
//          TL.ACT  codep:0x4b3b wordp:0xedad size:0x000c C-string:'TL_dot_ACT'
//           WEDBB  codep:0x224c wordp:0xedbb size:0x0012 C-string:'WEDBB'
//        DISPATCH  codep:0x4b3b wordp:0xedda size:0x0014 C-string:'DISPATCH'
//           WEDF0  codep:0x224c wordp:0xedf0 size:0x004c C-string:'WEDF0'
//           WEE3E  codep:0x224c wordp:0xee3e size:0x0051 C-string:'WEE3E'
//           WEE91  codep:0x1d29 wordp:0xee91 size:0x0003 C-string:'WEE91'
//           WEE96  codep:0x224c wordp:0xee96 size:0x0006 C-string:'WEE96'
//           WEE9E  codep:0x224c wordp:0xee9e size:0x0010 C-string:'WEE9E'
//           WEEB0  codep:0x224c wordp:0xeeb0 size:0x0010 C-string:'WEEB0'
//           WEEC2  codep:0x224c wordp:0xeec2 size:0x000e C-string:'WEEC2'
//           WEED2  codep:0x224c wordp:0xeed2 size:0x000e C-string:'WEED2'
//           WEEE2  codep:0x224c wordp:0xeee2 size:0x0026 C-string:'WEEE2'
//           WEF0A  codep:0x224c wordp:0xef0a size:0x0004 C-string:'WEF0A'
//           WEF10  codep:0x224c wordp:0xef10 size:0x0010 C-string:'WEF10'
//           WEF22  codep:0x224c wordp:0xef22 size:0x002e C-string:'WEF22'
//           WEF52  codep:0x224c wordp:0xef52 size:0x002a C-string:'WEF52'
//           WEF7E  codep:0x224c wordp:0xef7e size:0x0014 C-string:'WEF7E'
//           WEF94  codep:0x224c wordp:0xef94 size:0x002e C-string:'WEF94'
//           WEFC4  codep:0x224c wordp:0xefc4 size:0x002c C-string:'WEFC4'
//           WEFF2  codep:0x224c wordp:0xeff2 size:0x0024 C-string:'WEFF2'
//           WF018  codep:0x224c wordp:0xf018 size:0x007c C-string:'WF018'
//           WF096  codep:0x224c wordp:0xf096 size:0x000a C-string:'WF096'
//           WF0A2  codep:0x224c wordp:0xf0a2 size:0x0028 C-string:'WF0A2'
//           WF0CC  codep:0x224c wordp:0xf0cc size:0x0028 C-string:'WF0CC'
//           WF0F6  codep:0x224c wordp:0xf0f6 size:0x002a C-string:'WF0F6'
//           WF122  codep:0x224c wordp:0xf122 size:0x0040 C-string:'WF122'
//           WF164  codep:0x224c wordp:0xf164 size:0x001c C-string:'WF164'
//           WF182  codep:0x224c wordp:0xf182 size:0x0006 C-string:'WF182'
//           WF18A  codep:0x224c wordp:0xf18a size:0x0008 C-string:'WF18A'
//           WF194  codep:0x224c wordp:0xf194 size:0x0038 C-string:'WF194'
//           WF1CE  codep:0x224c wordp:0xf1ce size:0x003e C-string:'WF1CE'
//       TD-SCROLL  codep:0x4b3b wordp:0xf21a size:0x000c C-string:'TD_dash_SCROLL'
//           WF228  codep:0x224c wordp:0xf228 size:0x002e C-string:'WF228'
//           WF258  codep:0x224c wordp:0xf258 size:0x0048 C-string:'WF258'
//           WF2A2  codep:0x224c wordp:0xf2a2 size:0x003c C-string:'WF2A2'
//           WF2E0  codep:0x224c wordp:0xf2e0 size:0x0012 C-string:'WF2E0'
//           WF2F4  codep:0x224c wordp:0xf2f4 size:0x002c C-string:'WF2F4'
//           WF322  codep:0x224c wordp:0xf322 size:0x0038 C-string:'WF322'
//           WF35C  codep:0x224c wordp:0xf35c size:0x0020 C-string:'WF35C'
//           WF37E  codep:0x224c wordp:0xf37e size:0x0064 C-string:'WF37E'
//           WF3E4  codep:0x224c wordp:0xf3e4 size:0x0020 C-string:'WF3E4'
//           WF406  codep:0x224c wordp:0xf406 size:0x0018 C-string:'WF406'
//           WF420  codep:0x224c wordp:0xf420 size:0x0026 C-string:'WF420'
//           WF448  codep:0x224c wordp:0xf448 size:0x0008 C-string:'WF448'
//         >DEBRIS  codep:0x224c wordp:0xf45c size:0x0008 C-string:'_gt_DEBRIS'
//           WF466  codep:0x224c wordp:0xf466 size:0x0028 C-string:'WF466'
//           WF490  codep:0x224c wordp:0xf490 size:0x000e C-string:'WF490'
//        (/ITEMS)  codep:0x224c wordp:0xf4ab size:0x0000 C-string:'_ro__slash_ITEMS_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int cc_DEAD_dash_IC; // DEAD-IC
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
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
extern const unsigned short int pp_IsFLAT; // ?FLAT
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
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color GREEN; // GREEN
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SP; // INST-SP
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType INST_dash_DA; // INST-DA
extern IFieldType PHRASE; // PHRASE
extern IFieldType TEXT_dash_IN; // TEXT-IN
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
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _2_ex__2(); // 2!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void GetRECORD(); // @RECORD
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void CI_i_(); // CI'
void CJ(); // CJ
void IsNULL(); // ?NULL
void IsCHILD(); // ?CHILD
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IINSERT(); // IINSERT
void IEXTRAC(); // IEXTRAC
void GetNEWSPA(); // @NEWSPA
void MAXSPAC(); // MAXSPAC
void IFIND(); // IFIND
void _gt_INACTI(); // >INACTI
void IDELETE(); // IDELETE
void _star_CREATE(); // *CREATE
void SAVE_dash_OV(); // SAVE-OV
void StoreCOLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void VCLIPSE(); // VCLIPSE
void DCLIPSE(); // DCLIPSE
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void GetID(); // @ID
void GetIC(); // @IC
void GetIL(); // @IL
void GetIH(); // @IH
void DrawBACKGR(); // .BACKGR
void POINT_gt_I(); // POINT>I
void DrawLOCAL_dash_(); // .LOCAL-
void IsICONS_dash__2(); // ?ICONS-_2
void _dash_ICON(); // -ICON
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
void WSHORTE(); // WSHORTE
void _gt_BOTT(); // >BOTT
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsQUIT(); // ?QUIT
void CURSORS(); // CURSORS
void TEXT_gt_PA(); // TEXT>PA
void IsNEW_dash_HO(); // ?NEW-HO
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
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void _4_star_(); // 4*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
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
const unsigned short int pp_WE636 = 0xe636; // WE636 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE63A = 0xe63a; // WE63A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE63E = 0xe63e; // WE63E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE642 = 0xe642; // WE642 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE7FE = 0xe7fe; // WE7FE size: 2
// {0x00, 0x00}

const unsigned short int pp_WE802 = 0xe802; // WE802 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEB95 = 0xeb95; // WEB95 size: 4
// {0x56, 0x3a, 0x20, 0x40}

const unsigned short int pp_WEE91 = 0xee91; // WEE91 size: 3
// {0x3a, 0x20, 0x05}


const unsigned short int cc_WE6DC = 0xe6dc; // WE6DC
const unsigned short int cc_WE6E0 = 0xe6e0; // WE6E0
const unsigned short int cc_WE6E4 = 0xe6e4; // WE6E4
const unsigned short int cc_WE6E8 = 0xe6e8; // WE6E8


// 0xe632: db 0xf4 0x00 '  '

// ================================================
// 0xe634: WORD 'WE636' codep=0x1d29 wordp=0xe636
// ================================================
// 0xe636: db 0x3a 0x20 ': '

// ================================================
// 0xe638: WORD 'WE63A' codep=0x1d29 wordp=0xe63a
// ================================================
// 0xe63a: db 0x3a 0x20 ': '

// ================================================
// 0xe63c: WORD 'WE63E' codep=0x1d29 wordp=0xe63e
// ================================================
// 0xe63e: db 0x3a 0x20 ': '

// ================================================
// 0xe640: WORD 'WE642' codep=0x1d29 wordp=0xe642
// ================================================
// 0xe642: db 0x3a 0x20 ': '

// ================================================
// 0xe644: WORD 'WE646' codep=0x224c wordp=0xe646
// ================================================

void WE646() // WE646
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
  Push(0x009a);
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
// 0xe678: WORD 'WE67A' codep=0x224c wordp=0xe67a
// ================================================

void WE67A() // WE67A
{
  Push(Read16(pp_WTOP)); // WTOP @
  WE646(); // WE646
}


// ================================================
// 0xe682: WORD 'WE684' codep=0x224c wordp=0xe684 params=0 returns=0
// ================================================

void WE684() // WE684
{
  IsNEW_dash_HO(); // ?NEW-HO
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UP); // LAST-UP
  StoreD(); // D!
  Push(1);
  Push(pp_STAR_dash_HR); // STAR-HR
  _plus__ex__2(); // +!_2
  Push(Read16(pp_STAR_dash_HR)==0x0018?1:0); // STAR-HR @ 0x0018 =
  if (Pop() == 0) return;
  Push(pp_STAR_dash_HR); // STAR-HR
  _099(); // 099
  Push(1);
  Push(pp_STARDAT); // STARDAT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe6b2: WORD 'WE6B4' codep=0x224c wordp=0xe6b4 params=2 returns=0
// ================================================

void WE6B4() // WE6B4
{
  SWAP(); // SWAP
  _4_star_(); // 4*
  Push(Pop() + (Read16(pp_WLEFT) + 2)); //  WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe6d2: WORD 'WE6D4' codep=0x224c wordp=0xe6d4 params=1 returns=1
// ================================================

void WE6D4() // WE6D4
{
  Push(!(Pop()==0?1:0)); //  0= NOT
}


// ================================================
// 0xe6da: WORD 'WE6DC' codep=0x2214 wordp=0xe6dc
// ================================================
// orphan
// 0xe6dc: dw 0x0020

// ================================================
// 0xe6de: WORD 'WE6E0' codep=0x2214 wordp=0xe6e0
// ================================================
// 0xe6e0: dw 0x0044

// ================================================
// 0xe6e2: WORD 'WE6E4' codep=0x2214 wordp=0xe6e4
// ================================================
// orphan
// 0xe6e4: dw 0x001c

// ================================================
// 0xe6e6: WORD 'WE6E8' codep=0x2214 wordp=0xe6e8
// ================================================
// orphan
// 0xe6e8: dw 0x0039

// ================================================
// 0xe6ea: WORD 'WE6EC' codep=0x7420 wordp=0xe6ec
// ================================================
IFieldType WE6EC = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xe6ef: WORD 'WE6F1' codep=0x7394 wordp=0xe6f1
// ================================================
LoadDataType WE6F1 = {ARTIFACTIDX, 0x1e, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe6f7: WORD 'WE6F9' codep=0x7420 wordp=0xe6f9
// ================================================
// orphan
IFieldType WE6F9 = {DIRECTORYIDX, 0x15, 0x01};

// ================================================
// 0xe6fc: WORD 'WE6FE' codep=0x7420 wordp=0xe6fe
// ================================================
// orphan
IFieldType WE6FE = {DIRECTORYIDX, 0x16, 0x01};

// ================================================
// 0xe701: WORD 'WE703' codep=0x7420 wordp=0xe703
// ================================================
// orphan
IFieldType WE703 = {DIRECTORYIDX, 0x17, 0x01};

// ================================================
// 0xe706: WORD 'WE708' codep=0x7394 wordp=0xe708
// ================================================
// orphan
LoadDataType WE708 = {CREATUREIDX, 0x14, 0x02, 0x22, 0x6f07};

// ================================================
// 0xe70e: WORD 'WE710' codep=0x7394 wordp=0xe710
// ================================================
LoadDataType WE710 = {CREATUREIDX, 0x1b, 0x01, 0x22, 0x6f07};

// ================================================
// 0xe716: WORD 'WE718' codep=0x7394 wordp=0xe718
// ================================================
// orphan
LoadDataType WE718 = {CREATUREIDX, 0x1c, 0x01, 0x22, 0x6f07};

// ================================================
// 0xe71e: WORD 'WE720' codep=0x7420 wordp=0xe720
// ================================================
IFieldType WE720 = {CREATUREIDX, 0x17, 0x01};

// ================================================
// 0xe723: WORD 'WE725' codep=0x7420 wordp=0xe725
// ================================================
IFieldType WE725 = {CREATUREIDX, 0x18, 0x01};

// ================================================
// 0xe728: WORD 'WE72A' codep=0x224c wordp=0xe72a params=0 returns=0
// ================================================
// orphan

void WE72A() // WE72A
{
  Push(Read16(cc_WE6E0)); // WE6E0
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xe73c: WORD 'WE73E' codep=0x224c wordp=0xe73e params=0 returns=0
// ================================================

void WE73E() // WE73E
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe74c: WORD 'WE74E' codep=0x224c wordp=0xe74e params=0 returns=0
// ================================================

void WE74E() // WE74E
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
// 0xe760: WORD 'WE762' codep=0x224c wordp=0xe762
// ================================================

void WE762() // WE762
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
  DrawBACKGR(); // .BACKGR
  DrawLOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xe772: WORD 'WE774' codep=0x224c wordp=0xe774 params=0 returns=2
// ================================================

void WE774() // WE774
{
  Push(0x4e20); Push(0x0000);
  Push(0xbe96); // 'CPAUS'
  MODULE(); // MODULE
}


// ================================================
// 0xe782: WORD 'WE784' codep=0x224c wordp=0xe784
// ================================================

void WE784() // WE784
{
  CTERASE(); // CTERASE
}


// ================================================
// 0xe788: WORD 'WE78A' codep=0x224c wordp=0xe78a
// ================================================
// orphan

void WE78A() // WE78A
{
  unsigned short int i, imax;
  Push(0x2001);
  PAD(); // PAD
  Store_2(); // !_2
  Push(Read16(pp_WE63A)); // WE63A @
  Push(Read16(pp_WLINES)); // WLINES @
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    PAD(); // PAD
    WLINE_dash_U(); // WLINE-U
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_WE63A); // WE63A
  _099(); // 099
}


// ================================================
// 0xe7b2: WORD 'WE7B4' codep=0x224c wordp=0xe7b4 params=0 returns=0
// ================================================

void WE7B4() // WE7B4
{
  PRINT("PICKUP", 6); // (.")
}


// ================================================
// 0xe7bf: WORD 'WE7C1' codep=0x224c wordp=0xe7c1 params=0 returns=0
// ================================================

void WE7C1() // WE7C1
{
  PRINT("DROP", 4); // (.")
}


// ================================================
// 0xe7ca: WORD 'WE7CC' codep=0x224c wordp=0xe7cc params=0 returns=0
// ================================================

void WE7CC() // WE7CC
{
  PRINT("DESCRIBE", 8); // (.")
}


// ================================================
// 0xe7d9: WORD 'WE7DB' codep=0x224c wordp=0xe7db params=0 returns=0
// ================================================

void WE7DB() // WE7DB
{
  PRINT("ERASE", 5); // (.")
}


// ================================================
// 0xe7e5: WORD 'WE7E7' codep=0x224c wordp=0xe7e7 params=0 returns=0
// ================================================

void WE7E7() // WE7E7
{
  PRINT("RECORD", 6); // (.")
}


// ================================================
// 0xe7f2: WORD 'WE7F4' codep=0x224c wordp=0xe7f4 params=1 returns=0
// ================================================

void WE7F4() // WE7F4
{
  Push(0);
  SWAP(); // SWAP
  WE6B4(); // WE6B4
}


// ================================================
// 0xe7fc: WORD 'WE7FE' codep=0x1d29 wordp=0xe7fe
// ================================================
// 0xe7fe: db 0x00 0x00 '  '

// ================================================
// 0xe800: WORD 'WE802' codep=0x1d29 wordp=0xe802
// ================================================
// orphan
// 0xe802: db 0x3a 0x20 ': '

// ================================================
// 0xe804: WORD 'WE806' codep=0x224c wordp=0xe806 params=1 returns=0
// ================================================

void WE806() // WE806
{
  Push(pp_WE7FE); // WE7FE
  Store_2(); // !_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xe80e: WORD 'WE810' codep=0x224c wordp=0xe810 params=0 returns=0
// ================================================

void WE810() // WE810
{
  Push(1);
  Push(Read16(regsp)); // DUP
  WE7F4(); // WE7F4
  WE7C1(); // WE7C1
  WE806(); // WE806
}


// ================================================
// 0xe81c: WORD 'WE81E' codep=0x224c wordp=0xe81e params=0 returns=0
// ================================================

void WE81E() // WE81E
{
  Push(1);
  Push(Read16(regsp)); // DUP
  WE7F4(); // WE7F4
  WE7C1(); // WE7C1
  WE806(); // WE806
}


// ================================================
// 0xe82a: WORD 'WE82C' codep=0x224c wordp=0xe82c params=0 returns=0
// ================================================

void WE82C() // WE82C
{
  Push(1);
  WE7F4(); // WE7F4
  PRINT("READ", 4); // (.")
  Push(2);
  Push(Read16(regsp)); // DUP
  WE7F4(); // WE7F4
  WE7DB(); // WE7DB
  WE806(); // WE806
}


// ================================================
// 0xe843: WORD 'WE845' codep=0x224c wordp=0xe845 params=0 returns=0
// ================================================

void WE845() // WE845
{
  Push(1);
  WE7F4(); // WE7F4
  WE7C1(); // WE7C1
  Push(2);
  Push(Read16(regsp)); // DUP
  WE7F4(); // WE7F4
  WE7CC(); // WE7CC
  WE806(); // WE806
}


// ================================================
// 0xe857: WORD 'T.OPTIONS' codep=0x4b3b wordp=0xe865
// ================================================

void T_dot_OPTIONS() // T.OPTIONS
{
  switch(Pop()) // T.OPTIONS
  {
  case 26:
    WE810(); // WE810
    break;
  case 28:
    WE81E(); // WE81E
    break;
  case 27:
    WE82C(); // WE82C
    break;
  case 68:
    WE845(); // WE845
    break;
  case 11:
    return; // EXIT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe87d: WORD 'WE87F' codep=0x224c wordp=0xe87f params=0 returns=0
// ================================================

void WE87F() // WE87F
{
  Push(1);
  Push(Read16(regsp)); // DUP
  WE7F4(); // WE7F4
  WE7B4(); // WE7B4
  WE806(); // WE806
}


// ================================================
// 0xe88b: WORD 'WE88D' codep=0x224c wordp=0xe88d params=0 returns=0
// ================================================

void WE88D() // WE88D
{
  Push(1);
  Push(Read16(regsp)); // DUP
  WE7F4(); // WE7F4
  WE7B4(); // WE7B4
  WE806(); // WE806
}


// ================================================
// 0xe899: WORD 'WE89B' codep=0x224c wordp=0xe89b params=0 returns=0
// ================================================

void WE89B() // WE89B
{
  Push(1);
  WE7F4(); // WE7F4
  PRINT("READ", 4); // (.")
  Push(2);
  Push(Read16(regsp)); // DUP
  WE7F4(); // WE7F4
  WE7E7(); // WE7E7
  WE806(); // WE806
}


// ================================================
// 0xe8b2: WORD 'WE8B4' codep=0x224c wordp=0xe8b4 params=0 returns=0
// ================================================

void WE8B4() // WE8B4
{
  Push(Read16(0x65e1+WE720.offset)&0xFF); // WE720<IFIELD> C@
  if (Pop() != 0)
  {
    Push(1);
    WE7F4(); // WE7F4
    PRINT("CAPTURE", 7); // (.")
  } else
  {
    Push(1);
    WE7F4(); // WE7F4
    WE7B4(); // WE7B4
  }
  Push(2);
  Push(Read16(regsp)); // DUP
  WE7F4(); // WE7F4
  WE7CC(); // WE7CC
  WE806(); // WE806
}


// ================================================
// 0xe8e0: WORD 'WE8E2' codep=0x224c wordp=0xe8e2
// ================================================

void WE8E2() // WE8E2
{
  WE74E(); // WE74E
  WE784(); // WE784
  Push(0);
  Push(0);
  WE6B4(); // WE6B4
  GCR(); // GCR
}


// ================================================
// 0xe8f0: WORD 'P.OPTIONS' codep=0x4b3b wordp=0xe8fe
// ================================================

void P_dot_OPTIONS() // P.OPTIONS
{
  switch(Pop()) // P.OPTIONS
  {
  case 26:
    WE87F(); // WE87F
    break;
  case 28:
    WE88D(); // WE88D
    break;
  case 27:
    WE89B(); // WE89B
    break;
  case 68:
    WE8B4(); // WE8B4
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe912: WORD 'WE914' codep=0x224c wordp=0xe914
// ================================================

void WE914() // WE914
{
  Push(0);
  Push(5);
  WE6B4(); // WE6B4
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe920: WORD 'WE922' codep=0x224c wordp=0xe922 params=0 returns=1
// ================================================

void WE922() // WE922
{
  Push(0x01f4);
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(Pop() - Read16(0x65e1+WE6EC.offset)); //  WE6EC<IFIELD> @ -
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe934: WORD 'WE936' codep=0x224c wordp=0xe936
// ================================================

void WE936() // WE936
{
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  LoadData(WE6F1); // from 'ARTIFACT'
  Push((Read16(Pop())&0xFF) - 1); //  C@ 1-
  if (Pop() == 0) return;
  WE922(); // WE922
  MIN(); // MIN
}


// ================================================
// 0xe94a: WORD 'WE94C' codep=0x224c wordp=0xe94c params=1 returns=0
// ================================================

void WE94C() // WE94C
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+WE6EC.offset); // WE6EC<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe958: WORD 'WE95A' codep=0x224c wordp=0xe95a params=0 returns=1
// ================================================

void WE95A() // WE95A
{
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  WE922(); // WE922
  MIN(); // MIN
  Push(1);
  MAX(); // MAX
}


// ================================================
// 0xe968: WORD 'CLASS>VOL' codep=0x4b3b wordp=0xe976
// ================================================

void CLASS_gt_VOL() // CLASS>VOL
{
  switch(Pop()) // CLASS>VOL
  {
  case 27:
    Push(0);
    break;
  case 28:
    WE936(); // WE936
    break;
  default:
    WE95A(); // WE95A
    break;

  }
}

// ================================================
// 0xe982: WORD 'WE984' codep=0x224c wordp=0xe984 params=1 returns=1
// ================================================

void WE984() // WE984
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(Pop() + Read16(0x65e1+WE6EC.offset)); //  WE6EC<IFIELD> @ +
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  _gt_(); // >
  if (Pop() != 0)
  {
    _gt_TVCT(); // >TVCT
    WE784(); // WE784
    Push(pp_WE636); // WE636
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
// 0xe9d3: WORD 'WE9D5' codep=0x224c wordp=0xe9d5
// ================================================

void WE9D5() // WE9D5
{
  GetINST_dash_C(); // @INST-C
  CLASS_gt_VOL(); // CLASS>VOL case
  Push(Read16(regsp)); // DUP
  WE984(); // WE984
}


// ================================================
// 0xe9df: WORD 'WE9E1' codep=0x224c wordp=0xe9e1
// ================================================

void WE9E1() // WE9E1
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  } else
  {
    GetINST_dash_C(); // @INST-C
    CLASS_gt_VOL(); // CLASS>VOL case
  }
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
  WE74E(); // WE74E
  WE784(); // WE784
  CI(); // CI
  _2DUP(); // 2DUP
  Push(pp_ITEM); // ITEM
  _1_dot_5_ex__2(); // 1.5!_2
  _2SWAP(); // 2SWAP
  GetINST_dash_C(); // @INST-C
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
  IsNULL(); // ?NULL
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea2f: WORD 'WEA31' codep=0x224c wordp=0xea31
// ================================================

void WEA31() // WEA31
{
  Push(pp__ro_SURFAC); // (SURFAC
  _1_dot_5_at_(); // 1.5@
  WE9E1(); // WE9E1
}


// ================================================
// 0xea39: WORD 'WEA3B' codep=0x224c wordp=0xea3b
// ================================================

void WEA3B() // WEA3B
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  WE9E1(); // WE9E1
  Push(pp_WE636); // WE636
  ON_2(); // ON_2
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea55: WORD 'WEA57' codep=0x224c wordp=0xea57 params=0 returns=2
// ================================================

void WEA57() // WEA57
{
  Push(pp_TVEHICL); // TVEHICL
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea67: WORD 'WEA69' codep=0x224c wordp=0xea69 params=2 returns=0
// ================================================

void WEA69() // WEA69
{
  Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xea73: WORD 'WEA75' codep=0x224c wordp=0xea75 params=0 returns=0
// ================================================

void WEA75() // WEA75
{
  Push(0xcf63); // '.CA'
  MODULE(); // MODULE
}


// ================================================
// 0xea7d: WORD 'WEA7F' codep=0x224c wordp=0xea7f
// ================================================

void WEA7F() // WEA7F
{
  LoadData(WE710); // from 'CREATURE'
  Push(((Read16(Pop())&0xFF) & 1) & ((Read16(0x65e1+WE725.offset)&0xFF)==0?1:0)); //  C@ 1 AND WE725<IFIELD> C@ 0= AND
  Push(Read16(0x65e1+WE720.offset)&0xFF); // WE720<IFIELD> C@
  WE6D4(); // WE6D4
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0);
    return;
  }
  Push(1);
}


// ================================================
// 0xeaa5: WORD 'WEAA7' codep=0x224c wordp=0xeaa7 params=0 returns=2
// ================================================

void WEAA7() // WEAA7
{
  PRINT("LIFEFORM CAPTURED AND PUT IN STASIS", 35); // (.")
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xead5: WORD 'WEAD7' codep=0x224c wordp=0xead7 params=0 returns=2
// ================================================

void WEAD7() // WEAD7
{
  PRINT("LIFEFORM AVOIDS CAPTURE - USE STUNNER", 37); // (.")
  Push(0x0bb8);
  MS(); // MS
}


// ================================================
// 0xeb07: WORD 'WEB09' codep=0x224c wordp=0xeb09 params=0 returns=0
// ================================================
// orphan

void WEB09() // WEB09
{
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  WE922(); // WE922
  MIN(); // MIN
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xeb17: WORD 'WEB19' codep=0x224c wordp=0xeb19
// ================================================
// orphan

void WEB19() // WEB19
{
  _dash_ICON(); // -ICON
  WE73E(); // WE73E
  IDELETE(); // IDELETE
}


// ================================================
// 0xeb21: WORD 'WEB23' codep=0x224c wordp=0xeb23
// ================================================

void WEB23() // WEB23
{
  WEA3B(); // WEA3B
  _gt_INACTI(); // >INACTI
}


// ================================================
// 0xeb29: WORD 'WEB2B' codep=0x224c wordp=0xeb2b
// ================================================

void WEB2B() // WEB2B
{
  WE9D5(); // WE9D5
  if (Pop() != 0)
  {
    WEA31(); // WEA31
    _gt_C_plus_S(); // >C+S
    _dash_ICON(); // -ICON
    CI(); // CI
    Push(pp_TV_dash_HOLD); // TV-HOLD
    Get_gt_C_plus_S(); // @>C+S
    _gt_BOX(); // >BOX
    Push(2);
    _star_CLOSE(); // *CLOSE
    Push(pp_WE636); // WE636
    ON_2(); // ON_2
  } else
  {
    Pop(); // DROP
    Push(0);
  }
  WE94C(); // WE94C
  WEA75(); // WEA75
}


// ================================================
// 0xeb55: WORD 'WEB57' codep=0x224c wordp=0xeb57
// ================================================

void WEB57() // WEB57
{
  unsigned short int a;
  _2DUP(); // 2DUP
  _2DUP(); // 2DUP
  Push(pp_ITEM); // ITEM
  _1_dot_5_ex__2(); // 1.5!_2
  _gt_C_plus_S(); // >C+S
  GetINST_dash_C(); // @INST-C
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(a); // I
  CLASS_gt_B(); // CLASS>B
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
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


// ================================================
// 0xeb93: WORD 'WEB95' codep=0x1d29 wordp=0xeb95
// ================================================
// orphan
// 0xeb95: db 0x56 0x3a 0x20 0x40 'V: @'

// ================================================
// 0xeb99: WORD 'WEB9B' codep=0x224c wordp=0xeb9b
// ================================================
// orphan

void WEB9B() // WEB9B
{
  unsigned short int i, imax, a;
  Push(pp_WEB95); // WEB95
  _2_ex__2(); // 2!_2
  WEA57(); // WEA57
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__2(); // ?ICONS-_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);
  SWAP(); // SWAP
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      SWAP(); // SWAP
      POINT_gt_I(); // POINT>I
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      a = Pop(); // >R
      GetINST_dash_C(); // @INST-C
      GetINST_dash_S(); // @INST-S
      Push(pp_WEB95); // WEB95
      _2_at_(); // 2@
      D_eq_(); // D=
      Push(a); // R>
      SWAP(); // SWAP
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(1);
      }
      ICLOSE(); // ICLOSE
    } else
    {
      SWAP(); // SWAP
      Pop(); // DROP
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xebef: WORD 'WEBF1' codep=0x224c wordp=0xebf1
// ================================================

void WEBF1() // WEBF1
{
  WEA3B(); // WEA3B
  _gt_C_plus_S(); // >C+S
  Push(-Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @ NEGATE
  WE94C(); // WE94C
  WEA75(); // WEA75
  WEA57(); // WEA57
  WEA69(); // WEA69
  CI(); // CI
  Push(pp__ro_SURFAC); // (SURFAC
  Get_gt_C_plus_S(); // @>C+S
  WEB57(); // WEB57
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(0xba55); // 'ICON-'
  MODULE(); // MODULE
  _plus_ICON_2(); // +ICON_2
  WE73E(); // WE73E
  ICLOSE(); // ICLOSE
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec21: WORD 'WEC23' codep=0x224c wordp=0xec23
// ================================================

void WEC23() // WEC23
{
  WEBF1(); // WEBF1
}


// ================================================
// 0xec27: WORD 'WEC29' codep=0x224c wordp=0xec29
// ================================================

void WEC29() // WEC29
{
  WEB2B(); // WEB2B
}


// ================================================
// 0xec2d: WORD 'WEC2F' codep=0x224c wordp=0xec2f
// ================================================

void WEC2F() // WEC2F
{
  Pop(); // DROP
  Push(Read16(pp_WE642)); // WE642 @
  if (Pop() != 0)
  {
    WEC23(); // WEC23
    return;
  }
  WEC29(); // WEC29
}


// ================================================
// 0xec43: WORD 'WEC45' codep=0x224c wordp=0xec45
// ================================================

void WEC45() // WEC45
{
  WE8E2(); // WE8E2
  WEA7F(); // WEA7F
  if (Pop() != 0)
  {
    WE9D5(); // WE9D5
    if (Pop() != 0)
    {
      Pop(); // DROP
      WEAA7(); // WEAA7
      WE914(); // WE914
      WEB2B(); // WEB2B
    } else
    {
      Pop(); // DROP
    }
  } else
  {
    WEAD7(); // WEAD7
  }
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WEA75(); // WEA75
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xec77: WORD 'WEC79' codep=0x224c wordp=0xec79
// ================================================

void WEC79() // WEC79
{
  WEC29(); // WEC29
}


// ================================================
// 0xec7d: WORD 'WEC7F' codep=0x224c wordp=0xec7f
// ================================================

void WEC7F() // WEC7F
{
  WEC23(); // WEC23
}


// ================================================
// 0xec83: WORD 'PA.ACT' codep=0x4b3b wordp=0xec8e
// ================================================

void PA_dot_ACT() // PA.ACT
{
  switch(Pop()) // PA.ACT
  {
  case 1:
    WEC79(); // WEC79
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xec96: WORD 'TA.ACT' codep=0x4b3b wordp=0xeca1
// ================================================

void TA_dot_ACT() // TA.ACT
{
  switch(Pop()) // TA.ACT
  {
  case 1:
    WEC7F(); // WEC7F
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeca9: WORD 'WECAB' codep=0x224c wordp=0xecab
// ================================================

void WECAB() // WECAB
{
  Push(Read16(pp_WE642)); // WE642 @
  if (Pop() != 0)
  {
    TA_dot_ACT(); // TA.ACT case
    return;
  }
  PA_dot_ACT(); // PA.ACT case
}


// ================================================
// 0xecbd: WORD 'WECBF' codep=0x224c wordp=0xecbf params=0 returns=4
// ================================================

void WECBF() // WECBF
{
  Push(0x65e1+INST_dash_SP.offset); // INST-SP<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  ICLOSE(); // ICLOSE
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0xbf6f); // 'P>CT'
  MODULE(); // MODULE
  WE774(); // WE774
}


// ================================================
// 0xecdd: WORD 'WECDF' codep=0x224c wordp=0xecdf params=0 returns=4
// ================================================

void WECDF() // WECDF
{
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
  WECBF(); // WECBF
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      Push(0xbf80); // 'CTUP'
      MODULE(); // MODULE
      WECBF(); // WECBF
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
  }
  Push(0xbf80); // 'CTUP'
  MODULE(); // MODULE
}


// ================================================
// 0xed09: WORD 'WED0B' codep=0x224c wordp=0xed0b
// ================================================

void WED0B() // WED0B
{
  WE67A(); // WE67A
  WE74E(); // WE74E
  WE784(); // WE784
  WECDF(); // WECDF
}


// ================================================
// 0xed15: WORD 'WED17' codep=0x224c wordp=0xed17
// ================================================

void WED17() // WED17
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    Push(-1);
  } else
  {
    Push(Read16(pp_STARDAT)); // STARDAT @
  }
  Push(0x65e1+INST_dash_DA.offset); // INST-DA<IFIELD>
  Store_2(); // !_2
  WEB2B(); // WEB2B
}


// ================================================
// 0xed31: WORD 'PM.ACT' codep=0x4b3b wordp=0xed3c
// ================================================

void PM_dot_ACT() // PM.ACT
{
  switch(Pop()) // PM.ACT
  {
  case 1:
    WED0B(); // WED0B
    break;
  case 2:
    WED17(); // WED17
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed48: WORD 'TM.ACT' codep=0x4b3b wordp=0xed53
// ================================================

void TM_dot_ACT() // TM.ACT
{
  switch(Pop()) // TM.ACT
  {
  case 1:
    WED0B(); // WED0B
    break;
  case 2:
    WEB23(); // WEB23
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed5f: WORD 'WED61' codep=0x224c wordp=0xed61
// ================================================

void WED61() // WED61
{
  Push(Read16(pp_WE642)); // WE642 @
  if (Pop() != 0)
  {
    TM_dot_ACT(); // TM.ACT case
    return;
  }
  PM_dot_ACT(); // PM.ACT case
}


// ================================================
// 0xed73: WORD 'WED75' codep=0x224c wordp=0xed75
// ================================================

void WED75() // WED75
{
  WE67A(); // WE67A
  WE74E(); // WE74E
  WE784(); // WE784
  Push(5);
  Push(pp_WE63A); // WE63A
  _st__ex__gt_(); // <!>
  GetINST_dash_C(); // @INST-C
  Push(0xbe35); // '.LIFE'
  MODULE(); // MODULE
}


// ================================================
// 0xed8b: WORD 'PL.ACT' codep=0x4b3b wordp=0xed96
// ================================================

void PL_dot_ACT() // PL.ACT
{
  switch(Pop()) // PL.ACT
  {
  case 1:
    WEC45(); // WEC45
    break;
  case 2:
    WED75(); // WED75
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeda2: WORD 'TL.ACT' codep=0x4b3b wordp=0xedad
// ================================================

void TL_dot_ACT() // TL.ACT
{
  switch(Pop()) // TL.ACT
  {
  case 1:
    WEC23(); // WEC23
    break;
  case 2:
    WED75(); // WED75
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xedb9: WORD 'WEDBB' codep=0x224c wordp=0xedbb
// ================================================

void WEDBB() // WEDBB
{
  Push(Read16(pp_WE642)); // WE642 @
  if (Pop() != 0)
  {
    TL_dot_ACT(); // TL.ACT case
    return;
  }
  PL_dot_ACT(); // PL.ACT case
}


// ================================================
// 0xedcd: WORD 'DISPATCH' codep=0x4b3b wordp=0xedda
// ================================================

void DISPATCH() // DISPATCH
{
  switch(Pop()) // DISPATCH
  {
  case 68:
    WEDBB(); // WEDBB
    break;
  case 27:
    WED61(); // WED61
    break;
  case 26:
    WEC2F(); // WEC2F
    break;
  case 28:
    WECAB(); // WECAB
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xedee: WORD 'WEDF0' codep=0x224c wordp=0xedf0
// ================================================

void WEDF0() // WEDF0
{
  Push(0x001b);
  Push(0x0015);
  POS_dot_(); // POS.
  Push(Read16(pp_COLOR)); // COLOR @
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("SCROLL ITEMS: ^\\   QUIT: []", 27); // (.")
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
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
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee3c: WORD 'WEE3E' codep=0x224c wordp=0xee3e params=0 returns=0
// ================================================

void WEE3E() // WEE3E
{
  Push(Read16(pp_WE636)); // WE636 @
  if (Pop() == 0) return;
  _gt_TVCT(); // >TVCT
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WE784(); // WE784
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WE762(); // WE762
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  _gt_BOTT(); // >BOTT
  PRINT("REVISING TERRAIN VEHICLE INVENTORY", 34); // (.")
  Push(pp_WE636); // WE636
  OFF_2(); // OFF_2
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee8f: WORD 'WEE91' codep=0x1d29 wordp=0xee91
// ================================================
// 0xee91: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xee94: WORD 'WEE96' codep=0x224c wordp=0xee96 params=0 returns=2
// ================================================

void WEE96() // WEE96
{
  Push(pp_WEE91); // WEE91
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xee9c: WORD 'WEE9E' codep=0x224c wordp=0xee9e params=0 returns=0
// ================================================

void WEE9E() // WEE9E
{
  WEE96(); // WEE96
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp_WEE91); // WEE91
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeae: WORD 'WEEB0' codep=0x224c wordp=0xeeb0 params=0 returns=0
// ================================================

void WEEB0() // WEEB0
{
  WEE96(); // WEE96
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp_WEE91); // WEE91
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeec0: WORD 'WEEC2' codep=0x224c wordp=0xeec2 params=0 returns=0
// ================================================

void WEEC2() // WEEC2
{
  WEE96(); // WEE96
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeed0: WORD 'WEED2' codep=0x224c wordp=0xeed2
// ================================================

void WEED2() // WEED2
{
  WE67A(); // WE67A
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WE67A(); // WE67A
}


// ================================================
// 0xeee0: WORD 'WEEE2' codep=0x224c wordp=0xeee2 params=0 returns=0
// ================================================

void WEEE2() // WEEE2
{
  unsigned short int i, imax;
  Push(Read16(pp_SCROLL_dash_) - 7); // SCROLL- @ 7 -
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
      GetColor(BLACK);
      WSHORTE(); // WSHORTE
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xef08: WORD 'WEF0A' codep=0x224c wordp=0xef0a params=0 returns=0
// ================================================

void WEF0A() // WEF0A
{
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xef0e: WORD 'WEF10' codep=0x224c wordp=0xef10 params=0 returns=1
// ================================================

void WEF10() // WEF10
{
  WEEC2(); // WEEC2
  GetINST_dash_C(); // @INST-C
  Push(!(Pop()==0x000b?1:0)); //  0x000b = NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef20: WORD 'WEF22' codep=0x224c wordp=0xef22
// ================================================

void WEF22() // WEF22
{
  WE67A(); // WE67A
  Push(pp_WE63E); // WE63E
  _st__plus__ex__gt_(); // <+!>
  Push(pp_WE63E); // WE63E
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  Push(1);
  MAX(); // MAX
  Push(Read16(pp_WE7FE)); // WE7FE @
  MIN(); // MIN
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
  _gt_TVCT(); // >TVCT
  Push(-(Read16(pp_WE63E) * 7)); // WE63E @ 7 * NEGATE
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WE67A(); // WE67A
}


// ================================================
// 0xef50: WORD 'WEF52' codep=0x224c wordp=0xef52 params=0 returns=0
// ================================================

void WEF52() // WEF52
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
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
  Push(pp_WE642); // WE642
  _st__ex__gt_(); // <!>
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef7c: WORD 'WEF7E' codep=0x224c wordp=0xef7e params=0 returns=2
// ================================================

void WEF7E() // WEF7E
{
  WEF0A(); // WEF0A
  WEE3E(); // WEE3E
  DELETE_dash_(); // DELETE-
  MAKE_dash_SC(); // MAKE-SC
  Push(pp_SUPER_dash_B); // SUPER-B
  _1_dot_5_at_(); // 1.5@
  GET_dash_BOX(); // GET-BOX
  WEF52(); // WEF52
  WEEE2(); // WEEE2
}


// ================================================
// 0xef92: WORD 'WEF94' codep=0x224c wordp=0xef94
// ================================================

void WEF94() // WEF94
{
  _gt_TVCT(); // >TVCT
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WE784(); // WE784
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WEEC2(); // WEEC2
  GetINST_dash_C(); // @INST-C
  Push(Read16(pp_WE642)); // WE642 @
  if (Pop() != 0)
  {
    T_dot_OPTIONS(); // T.OPTIONS case
  } else
  {
    P_dot_OPTIONS(); // P.OPTIONS case
  }
  WEED2(); // WEED2
}


// ================================================
// 0xefc2: WORD 'WEFC4' codep=0x224c wordp=0xefc4
// ================================================

void WEFC4() // WEFC4
{
  unsigned short int i, imax;
  WEDF0(); // WEDF0
  Push(Read16(pp_WLINES)); // WLINES @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push((Read16(pp_WTOP) - 1) - i * 7); // WTOP @ 1- I 7 * -
    POS_dot_(); // POS.
    TEXT_gt_PA(); // TEXT>PA
    PAD(); // PAD
    _do__dot_(); // $.
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeff0: WORD 'WEFF2' codep=0x224c wordp=0xeff2
// ================================================

void WEFF2() // WEFF2
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_WEE91); // WEE91
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0);
  do
  {
    Push(Pop() + 1); //  1+
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  _gt_1FONT(); // >1FONT
  WEFC4(); // WEFC4
  IPREV(); // IPREV
  WE67A(); // WE67A
  Pop(); // DROP
}


// ================================================
// 0xf016: WORD 'WF018' codep=0x224c wordp=0xf018
// ================================================

void WF018() // WF018
{
  Push(1);
  Push(pp_WE63E); // WE63E
  Store_2(); // !_2
  Push(pp_WE636); // WE636
  _099(); // 099
  Push(pp_FQUIT); // FQUIT
  _099(); // 099
  while(1)
  {
    IsQUIT(); // ?QUIT
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    XYSCAN(); // XYSCAN
    Push(1);
    Push(0);
    _2OVER(); // 2OVER
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      Push(-1);
      WEF22(); // WEF22
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
        WEF22(); // WEF22
      } else
      {
        Pop(); // DROP
        IsTRIG(); // ?TRIG
        if (Pop() != 0)
        {
          Push(Read16(pp_WE63E)); // WE63E @
          GetINST_dash_C(); // @INST-C
          DISPATCH(); // DISPATCH case
          Push(Read16(pp_WE636)); // WE636 @
          if (Pop() != 0)
          {
            WEF7E(); // WEF7E
          }
          Push(pp_FQUIT); // FQUIT
          ON_2(); // ON_2
        }
        Pop(); // DROP
      }
    }
  }
  Push(3);
  _star_CLOSE(); // *CLOSE
  _gt_TVCT(); // >TVCT
  WE784(); // WE784
  WEEE2(); // WEEE2
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WEFF2(); // WEFF2
  WEF52(); // WEF52
}


// ================================================
// 0xf094: WORD 'WF096' codep=0x224c wordp=0xf096
// ================================================

void WF096() // WF096
{
  Push(Read16(pp_COLOR)); // COLOR @
  SWAP(); // SWAP
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf0a0: WORD 'WF0A2' codep=0x224c wordp=0xf0a2
// ================================================

void WF0A2() // WF0A2
{
  WF096(); // WF096
  GetColor(BLACK);
  WF096(); // WF096
  Push(0x0053);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT(" ", 1); // (.")
  StoreCOLOR(); // !COLOR
  Push(0x0053);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("^", 1); // (.")
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf0ca: WORD 'WF0CC' codep=0x224c wordp=0xf0cc
// ================================================

void WF0CC() // WF0CC
{
  WF096(); // WF096
  GetColor(BLACK);
  WF096(); // WF096
  Push(0x0057);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT(" ", 1); // (.")
  StoreCOLOR(); // !COLOR
  Push(0x0057);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("\\", 1); // (.")
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf0f4: WORD 'WF0F6' codep=0x224c wordp=0xf0f6
// ================================================

void WF0F6() // WF0F6
{
  WF096(); // WF096
  GetColor(BLACK);
  WF096(); // WF096
  Push(0x007f);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("  ", 2); // (.")
  StoreCOLOR(); // !COLOR
  Push(0x007f);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("[]", 2); // (.")
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf120: WORD 'WF122' codep=0x224c wordp=0xf122 params=0 returns=1
// ================================================

void WF122() // WF122
{
  WEEC2(); // WEEC2
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x000b?1:0); //  0x000b =
  if (Pop() != 0)
  {
    GetINST_dash_S(); // @INST-S
    Push(Read16(regsp)); // DUP
    Push(Pop()==0x0028?1:0); //  0x0028 =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(1);
    } else
    {
      Push(Pop()==0x002c?1:0); //  0x002c =
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
// 0xf162: WORD 'WF164' codep=0x224c wordp=0xf164 params=1 returns=0
// ================================================

void WF164() // WF164
{
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(-1);
    Push(pp_WE642); // WE642
    _st__ex__gt_(); // <!>
  }
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(0);
  Push(pp_WE642); // WE642
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf180: WORD 'WF182' codep=0x224c wordp=0xf182 params=0 returns=0
// ================================================

void WF182() // WF182
{
  WF122(); // WF122
  WF164(); // WF164
}


// ================================================
// 0xf188: WORD 'WF18A' codep=0x224c wordp=0xf18a params=0 returns=0
// ================================================

void WF18A() // WF18A
{
  WF122(); // WF122
  Push(-Pop()); //  NEGATE
  WF164(); // WF164
}


// ================================================
// 0xf192: WORD 'WF194' codep=0x224c wordp=0xf194
// ================================================

void WF194() // WF194
{
  GetColor(GREEN);
  WF0A2(); // WF0A2
  CLICK(); // CLICK
  INEXT(); // INEXT
  WEE9E(); // WEE9E
  WF182(); // WF182
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  WE67A(); // WE67A
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
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
  WE67A(); // WE67A
  GetColor(LT_dash_BLUE);
  WF0A2(); // WF0A2
}


// ================================================
// 0xf1cc: WORD 'WF1CE' codep=0x224c wordp=0xf1ce
// ================================================

void WF1CE() // WF1CE
{
  GetColor(GREEN);
  WF0CC(); // WF0CC
  CLICK(); // CLICK
  WF18A(); // WF18A
  IPREV(); // IPREV
  WEEB0(); // WEEB0
  WEE96(); // WEE96
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  PAD(); // PAD
  WE67A(); // WE67A
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
  WE67A(); // WE67A
  GetColor(LT_dash_BLUE);
  WF0CC(); // WF0CC
}


// ================================================
// 0xf20c: WORD 'TD-SCROLL' codep=0x4b3b wordp=0xf21a
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 65535:
    WF1CE(); // WF1CE
    break;
  case 1:
    WF194(); // WF194
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf226: WORD 'WF228' codep=0x224c wordp=0xf228
// ================================================

void WF228() // WF228
{
  do
  {
    WE684(); // WE684
    XYSCAN(); // XYSCAN
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      TD_dash_SCROLL(); // TD-SCROLL case
    } else
    {
      Pop(); // DROP
    }
    IsTRIG(); // ?TRIG
    WEF10(); // WEF10
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      WEF94(); // WEF94
      Push(pp_FQUIT); // FQUIT
      _099(); // 099
      WF018(); // WF018
    }
    Push(Read16(pp_FQUIT)); // FQUIT @
  } while(Pop() == 0);
}


// ================================================
// 0xf256: WORD 'WF258' codep=0x224c wordp=0xf258 params=2 returns=2
// ================================================

void WF258() // WF258
{
  Push2Words("0.");
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    while(1)
    {
      _2DUP(); // 2DUP
      Push(Pop() | Pop()); // OR
      Push(Pop()==0?1:0); //  0=
      IsLAST(); // ?LAST
      Push(Pop()==0?1:0); //  0=
      Push(Pop() & Pop()); // AND
      if (Pop() == 0) break;

      CJ(); // CJ
      CI(); // CI
      D_eq_(); // D=
      if (Pop() != 0)
      {
        Pop(); Pop(); // 2DROP
        CI_i_(); // CI'
      }
      INEXT(); // INEXT
    }
    CJ(); // CJ
    CI(); // CI
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      CI_i_(); // CI'
    }
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2a0: WORD 'WF2A2' codep=0x224c wordp=0xf2a2 params=0 returns=2
// ================================================

void WF2A2() // WF2A2
{
  Push2Words("0.");
  while(1)
  {
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    Push(Pop()==0?1:0); //  0=
    IsLAST(); // ?LAST
    Push(Pop()==0?1:0); //  0=
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
      WF258(); // WF258
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
  }
}


// ================================================
// 0xf2de: WORD 'WF2E0' codep=0x224c wordp=0xf2e0 params=0 returns=0
// ================================================
// orphan

void WF2E0() // WF2E0
{
  IsNULL(); // ?NULL
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  IPREV(); // IPREV
  Push2Words("0.");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xf2f2: WORD 'WF2F4' codep=0x224c wordp=0xf2f4 params=0 returns=0
// ================================================

void WF2F4() // WF2F4
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  WF258(); // WF258
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(pp__ro_PLANET); // (PLANET
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    WF2A2(); // WF2A2
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
// 0xf320: WORD 'WF322' codep=0x224c wordp=0xf322
// ================================================

void WF322() // WF322
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001b?1:0); //  0x001b =
  if (Pop() != 0)
  {
    Push(Read16(pp_PAST)); // PAST @
    if (Pop() != 0)
    {
      Push(-1);
    } else
    {
      Push(Read16(pp_STARDAT)); // STARDAT @
    }
    Push(0x65e1+INST_dash_DA.offset); // INST-DA<IFIELD>
    Store_2(); // !_2
  }
  IEXTRAC(); // IEXTRAC
  Push(pp__ro_SURFAC); // (SURFAC
  Get_gt_C_plus_S(); // @>C+S
  WEB57(); // WEB57
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  Push(-1);
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf35a: WORD 'WF35C' codep=0x224c wordp=0xf35c params=0 returns=1
// ================================================

void WF35C() // WF35C
{
  WEA57(); // WEA57
  Push(Pop() - Read16(0x65e1+INST_dash_Y.offset)); //  INST-Y<IFIELD> @ -
  ABS(); // ABS
  Push(2);
  _st_(); // <
  SWAP(); // SWAP
  Push(Pop() - Read16(0x65e1+INST_dash_X.offset)); //  INST-X<IFIELD> @ -
  ABS(); // ABS
  Push(2);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf37c: WORD 'WF37E' codep=0x224c wordp=0xf37e
// ================================================

void WF37E() // WF37E
{
  unsigned short int i, imax, a;
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_I(); // POINT>I
    GetID(); // @ID
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
    Push(Pop()==0x00fe?1:0); //  0x00fe =
    Push(Pop() | Pop()); // OR
    Push(Pop() | (a==0x002d?1:0)); //  R> 0x002d = OR
    GetIC(); // @IC
    Push(!(Pop()==Read16(cc_DEAD_dash_IC)?1:0)); //  DEAD-IC = NOT
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      WF35C(); // WF35C
      if (Pop() != 0)
      {
        WF2F4(); // WF2F4
        WF322(); // WF322
        CDROP(); // CDROP
        ICLOSE(); // ICLOSE
      }
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf3e2: WORD 'WF3E4' codep=0x224c wordp=0xf3e4 params=2 returns=0
// ================================================

void WF3E4() // WF3E4
{
  CJ(); // CJ
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    WEA57(); // WEA57
    Push(0x65e1+INST_dash_Y.offset); // INST-Y<IFIELD>
    Store_2(); // !_2
    Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
    Store_2(); // !_2
  }
  _ro_BOX_gt__rc_(); // (BOX>)
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
}


// ================================================
// 0xf404: WORD 'WF406' codep=0x224c wordp=0xf406
// ================================================

void WF406() // WF406
{
  IOPEN(); // IOPEN
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    WF3E4(); // WF3E4
  }
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  IPREV(); // IPREV
}


// ================================================
// 0xf41e: WORD 'WF420' codep=0x224c wordp=0xf420 params=0 returns=0
// ================================================

void WF420() // WF420
{
  Push(0x7d00);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
  IOPEN(); // IOPEN
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    WF406(); // WF406
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x000a);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf446: WORD 'WF448' codep=0x224c wordp=0xf448 params=0 returns=0
// ================================================

void WF448() // WF448
{
  Push(pp__ro_SURFAC); // (SURFAC
  Get_gt_C_plus_S(); // @>C+S
  WF420(); // WF420
}


// ================================================
// 0xf450: WORD '>DEBRIS' codep=0x224c wordp=0xf45c params=0 returns=0
// ================================================
// entry

void _gt_DEBRIS() // >DEBRIS
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  WF420(); // WF420
}


// ================================================
// 0xf464: WORD 'WF466' codep=0x224c wordp=0xf466
// ================================================

void WF466() // WF466
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
  Push(pp_IsFLAT); // ?FLAT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf48e: WORD 'WF490' codep=0x224c wordp=0xf490
// ================================================

void WF490() // WF490
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  WF466(); // WF466
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf49e: WORD '(/ITEMS)' codep=0x224c wordp=0xf4ab
// ================================================
// entry

void _ro__slash_ITEMS_rc_() // (/ITEMS)
{
  _gt_TVCT(); // >TVCT
  WE784(); // WE784
  MAXSPAC(); // MAXSPAC
  _1_dot_5_at_(); // 1.5@
  GetNEWSPA(); // @NEWSPA
  D_st_(); // D<
  Push(!(Pop() & Read16(pp_IsCRITIC))); //  ?CRITIC @ AND NOT
  if (Pop() != 0)
  {
    Push(pp_NOF); // NOF
    ON_2(); // ON_2
    do
    {
      Push(pp__ro_SCROLL_1); // (SCROLL_1
      _1_dot_5_at_(); // 1.5@
      Push(Pop() | Pop()); // OR
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        MAKE_dash_SC(); // MAKE-SC
        Push(pp_ESC_dash_EN); // ESC-EN
        _099(); // 099
        WF37E(); // WF37E
        Push(pp_SUPER_dash_B); // SUPER-B
        _1_dot_5_at_(); // 1.5@
        GET_dash_BOX(); // GET-BOX
      }
      Push(pp_XORMODE); // XORMODE
      _099(); // 099
      WEEE2(); // WEEE2
      GetColor(WHITE);
      StoreCOLOR(); // !COLOR
      WEFF2(); // WEFF2
      WEF52(); // WEF52
      WF228(); // WF228
      IsQUIT(); // ?QUIT
    } while(Pop() == 0);
    GetColor(GREEN);
    WF0F6(); // WF0F6
    DELETE_dash_(); // DELETE-
    Push2Words("0.");
    Push(pp__ro_SCROLL_1); // (SCROLL_1
    _1_dot_5_ex__2(); // 1.5!_2
    Push(pp_ESC_dash_EN); // ESC-EN
    ON_2(); // ON_2
    WF448(); // WF448
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    WEF0A(); // WEF0A
    Push(7);
    Push(pp_WE63A); // WE63A
    _st__ex__gt_(); // <!>
    GetColor(LT_dash_BLUE);
    WF0F6(); // WF0F6
    WE67A(); // WE67A
    WE784(); // WE784
    WF490(); // WF490
    Push(pp_NOF); // NOF
    _099(); // 099
  } else
  {
    Push(6);
    Push(0);
    WE6B4(); // WE6B4
    PRINT("NOT ENOUGH STORAGE FOR FUNCTION", 31); // (.")
    Push(0x0fa0);
    MS(); // MS
    WE784(); // WE784
  }
  WEF0A(); // WEF0A
}

// 0xf55b: db 0x49 0x54 0x45 0x4d 0x53 0x00 'ITEMS '

