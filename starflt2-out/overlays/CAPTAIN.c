// ====== OVERLAY 'CAPTAIN' ======
// store offset = 0xe420
// overlay size   = 0x1140

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xe436  codep:0x1d29 parp:0xe436 size:0x0002 C-string:'UNK_0xe436'
//      UNK_0xe43a  codep:0x1d29 parp:0xe43a size:0x0002 C-string:'UNK_0xe43a'
//      UNK_0xe43e  codep:0x1d29 parp:0xe43e size:0x0004 C-string:'UNK_0xe43e'
//      UNK_0xe444  codep:0x1d29 parp:0xe444 size:0x0002 C-string:'UNK_0xe444'
//      UNK_0xe448  codep:0x1d29 parp:0xe448 size:0x0002 C-string:'UNK_0xe448'
//      UNK_0xe44c  codep:0x224c parp:0xe44c size:0x0006 C-string:'UNK_0xe44c'
//      UNK_0xe454  codep:0x224c parp:0xe454 size:0x0008 C-string:'UNK_0xe454'
//      UNK_0xe45e  codep:0x7394 parp:0xe45e size:0x0006 C-string:'UNK_0xe45e'
//      UNK_0xe466  codep:0x224c parp:0xe466 size:0x000a C-string:'UNK_0xe466'
//      UNK_0xe472  codep:0x224c parp:0xe472 size:0x0008 C-string:'UNK_0xe472'
//      UNK_0xe47c  codep:0x224c parp:0xe47c size:0x0029 C-string:'UNK_0xe47c'
//      UNK_0xe4a7  codep:0x7394 parp:0xe4a7 size:0x0006 C-string:'UNK_0xe4a7'
//      UNK_0xe4af  codep:0x7394 parp:0xe4af size:0x0006 C-string:'UNK_0xe4af'
//      UNK_0xe4b7  codep:0x7394 parp:0xe4b7 size:0x0006 C-string:'UNK_0xe4b7'
//      UNK_0xe4bf  codep:0x7420 parp:0xe4bf size:0x0003 C-string:'UNK_0xe4bf'
//      UNK_0xe4c4  codep:0x7394 parp:0xe4c4 size:0x0006 C-string:'UNK_0xe4c4'
//      UNK_0xe4cc  codep:0x7394 parp:0xe4cc size:0x0006 C-string:'UNK_0xe4cc'
//      UNK_0xe4d4  codep:0x7394 parp:0xe4d4 size:0x0006 C-string:'UNK_0xe4d4'
//      UNK_0xe4dc  codep:0x7394 parp:0xe4dc size:0x0006 C-string:'UNK_0xe4dc'
//      UNK_0xe4e4  codep:0x7394 parp:0xe4e4 size:0x0006 C-string:'UNK_0xe4e4'
//      UNK_0xe4ec  codep:0x7420 parp:0xe4ec size:0x0003 C-string:'UNK_0xe4ec'
//      UNK_0xe4f1  codep:0x7394 parp:0xe4f1 size:0x0006 C-string:'UNK_0xe4f1'
//      UNK_0xe4f9  codep:0x7394 parp:0xe4f9 size:0x0006 C-string:'UNK_0xe4f9'
//      UNK_0xe501  codep:0x7420 parp:0xe501 size:0x0003 C-string:'UNK_0xe501'
//      UNK_0xe506  codep:0x7420 parp:0xe506 size:0x0003 C-string:'UNK_0xe506'
//      UNK_0xe50b  codep:0x7420 parp:0xe50b size:0x0003 C-string:'UNK_0xe50b'
//      UNK_0xe510  codep:0x7420 parp:0xe510 size:0x0003 C-string:'UNK_0xe510'
//      UNK_0xe515  codep:0x7420 parp:0xe515 size:0x0003 C-string:'UNK_0xe515'
//      UNK_0xe51a  codep:0x7420 parp:0xe51a size:0x0003 C-string:'UNK_0xe51a'
//      UNK_0xe51f  codep:0x7420 parp:0xe51f size:0x0003 C-string:'UNK_0xe51f'
//      UNK_0xe524  codep:0x7420 parp:0xe524 size:0x0003 C-string:'UNK_0xe524'
//      UNK_0xe529  codep:0x7420 parp:0xe529 size:0x0003 C-string:'UNK_0xe529'
//      UNK_0xe52e  codep:0x7420 parp:0xe52e size:0x0003 C-string:'UNK_0xe52e'
//      UNK_0xe533  codep:0x7420 parp:0xe533 size:0x0003 C-string:'UNK_0xe533'
//      UNK_0xe538  codep:0x7420 parp:0xe538 size:0x0003 C-string:'UNK_0xe538'
//      UNK_0xe53d  codep:0x7420 parp:0xe53d size:0x0003 C-string:'UNK_0xe53d'
//      UNK_0xe542  codep:0x1d29 parp:0xe542 size:0x0002 C-string:'UNK_0xe542'
//      UNK_0xe546  codep:0x224c parp:0xe546 size:0x000a C-string:'UNK_0xe546'
//      UNK_0xe552  codep:0x224c parp:0xe552 size:0x0010 C-string:'UNK_0xe552'
//      UNK_0xe564  codep:0x224c parp:0xe564 size:0x0008 C-string:'UNK_0xe564'
//      UNK_0xe56e  codep:0x224c parp:0xe56e size:0x000c C-string:'UNK_0xe56e'
//            .BAL  codep:0x224c parp:0xe583 size:0x0046 C-string:'DrawBAL'
//      UNK_0xe5cb  codep:0x224c parp:0xe5cb size:0x0006 C-string:'UNK_0xe5cb'
//      UNK_0xe5d3  codep:0x224c parp:0xe5d3 size:0x0010 C-string:'UNK_0xe5d3'
//      UNK_0xe5e5  codep:0x224c parp:0xe5e5 size:0x0010 C-string:'UNK_0xe5e5'
//      UNK_0xe5f7  codep:0x224c parp:0xe5f7 size:0x000e C-string:'UNK_0xe5f7'
//      UNK_0xe607  codep:0x224c parp:0xe607 size:0x000e C-string:'UNK_0xe607'
//      UNK_0xe617  codep:0x224c parp:0xe617 size:0x0032 C-string:'UNK_0xe617'
//      UNK_0xe64b  codep:0x224c parp:0xe64b size:0x000a C-string:'UNK_0xe64b'
//      UNK_0xe657  codep:0x224c parp:0xe657 size:0x002a C-string:'UNK_0xe657'
//      UNK_0xe683  codep:0x224c parp:0xe683 size:0x0036 C-string:'UNK_0xe683'
//      UNK_0xe6bb  codep:0x224c parp:0xe6bb size:0x0010 C-string:'UNK_0xe6bb'
//      UNK_0xe6cd  codep:0x224c parp:0xe6cd size:0x0016 C-string:'UNK_0xe6cd'
//       TD-SCROLL  codep:0x4b3b parp:0xe6f1 size:0x000c C-string:'TD_dash_SCROLL'
//      UNK_0xe6ff  codep:0x224c parp:0xe6ff size:0x002e C-string:'UNK_0xe6ff'
//      UNK_0xe72f  codep:0x224c parp:0xe72f size:0x0027 C-string:'UNK_0xe72f'
//      UNK_0xe758  codep:0x224c parp:0xe758 size:0x0042 C-string:'UNK_0xe758'
//      UNK_0xe79c  codep:0x224c parp:0xe79c size:0x0056 C-string:'UNK_0xe79c'
//      UNK_0xe7f4  codep:0x224c parp:0xe7f4 size:0x003c C-string:'UNK_0xe7f4'
//      UNK_0xe832  codep:0x224c parp:0xe832 size:0x0014 C-string:'UNK_0xe832'
//      UNK_0xe848  codep:0x224c parp:0xe848 size:0x0028 C-string:'UNK_0xe848'
//      UNK_0xe872  codep:0x224c parp:0xe872 size:0x0030 C-string:'UNK_0xe872'
//      UNK_0xe8a4  codep:0x224c parp:0xe8a4 size:0x002a C-string:'UNK_0xe8a4'
//      UNK_0xe8d0  codep:0x224c parp:0xe8d0 size:0x008e C-string:'UNK_0xe8d0'
//      UNK_0xe960  codep:0x224c parp:0xe960 size:0x002a C-string:'UNK_0xe960'
//      UNK_0xe98c  codep:0x224c parp:0xe98c size:0x00c4 C-string:'UNK_0xe98c'
//      UNK_0xea52  codep:0x224c parp:0xea52 size:0x001c C-string:'UNK_0xea52'
//      UNK_0xea70  codep:0x224c parp:0xea70 size:0x0029 C-string:'UNK_0xea70'
//      UNK_0xea9b  codep:0x224c parp:0xea9b size:0x0046 C-string:'UNK_0xea9b'
//      UNK_0xeae3  codep:0x224c parp:0xeae3 size:0x0048 C-string:'UNK_0xeae3'
//      UNK_0xeb2d  codep:0x224c parp:0xeb2d size:0x0026 C-string:'UNK_0xeb2d'
//      UNK_0xeb55  codep:0x224c parp:0xeb55 size:0x004c C-string:'UNK_0xeb55'
//      UNK_0xeba3  codep:0x224c parp:0xeba3 size:0x006c C-string:'UNK_0xeba3'
//      UNK_0xec11  codep:0x224c parp:0xec11 size:0x0028 C-string:'UNK_0xec11'
//      UNK_0xec3b  codep:0x224c parp:0xec3b size:0x0044 C-string:'UNK_0xec3b'
//      UNK_0xec81  codep:0x224c parp:0xec81 size:0x0026 C-string:'UNK_0xec81'
//      UNK_0xeca9  codep:0x224c parp:0xeca9 size:0x0022 C-string:'UNK_0xeca9'
//      UNK_0xeccd  codep:0x224c parp:0xeccd size:0x0022 C-string:'UNK_0xeccd'
//      UNK_0xecf1  codep:0x224c parp:0xecf1 size:0x002e C-string:'UNK_0xecf1'
//      UNK_0xed21  codep:0x224c parp:0xed21 size:0x003e C-string:'UNK_0xed21'
//      UNK_0xed61  codep:0x224c parp:0xed61 size:0x0014 C-string:'UNK_0xed61'
//      UNK_0xed77  codep:0x224c parp:0xed77 size:0x001c C-string:'UNK_0xed77'
//       1STOPTION  codep:0x4b3b parp:0xeda1 size:0x0018 C-string:'_1STOPTION'
//      UNK_0xedbb  codep:0x1d29 parp:0xedbb size:0x0002 C-string:'UNK_0xedbb'
//      UNK_0xedbf  codep:0x1d29 parp:0xedbf size:0x0002 C-string:'UNK_0xedbf'
//       DO-OPTION  codep:0x224c parp:0xedcf size:0x0016 C-string:'DO_dash_OPTION'
//      UNK_0xede7  codep:0x224c parp:0xede7 size:0x0010 C-string:'UNK_0xede7'
//      UNK_0xedf9  codep:0x224c parp:0xedf9 size:0x001b C-string:'UNK_0xedf9'
//      UNK_0xee16  codep:0x224c parp:0xee16 size:0x0024 C-string:'UNK_0xee16'
//    ITEM-OPTIONS  codep:0x4b3b parp:0xee4b size:0x0014 C-string:'ITEM_dash_OPTIONS'
//      UNK_0xee61  codep:0x224c parp:0xee61 size:0x0051 C-string:'UNK_0xee61'
//      UNK_0xeeb4  codep:0x224c parp:0xeeb4 size:0x00a4 C-string:'UNK_0xeeb4'
//      UNK_0xef5a  codep:0x224c parp:0xef5a size:0x0024 C-string:'UNK_0xef5a'
//        (/ITEMS)  codep:0x224c parp:0xef8b size:0x0094 C-string:'_ro__slash_ITEMS_rc_'
//        >DESCEND  codep:0x224c parp:0xf02c size:0x0031 C-string:'_gt_DESCEND'
//      UNK_0xf05f  codep:0x224c parp:0xf05f size:0x00ac C-string:'UNK_0xf05f'
//      UNK_0xf10d  codep:0x224c parp:0xf10d size:0x001b C-string:'UNK_0xf10d'
//      UNK_0xf12a  codep:0x224c parp:0xf12a size:0x003d C-string:'UNK_0xf12a'
//  (/LAUNCH/LAND)  codep:0x224c parp:0xf17a size:0x0044 C-string:'_ro__slash_LAUNCH_slash_LAND_rc_'
//      UNK_0xf1c0  codep:0x1d29 parp:0xf1c0 size:0x0002 C-string:'UNK_0xf1c0'
//      UNK_0xf1c4  codep:0x224c parp:0xf1c4 size:0x0006 C-string:'UNK_0xf1c4'
//      UNK_0xf1cc  codep:0x224c parp:0xf1cc size:0x0010 C-string:'UNK_0xf1cc'
//      UNK_0xf1de  codep:0x224c parp:0xf1de size:0x0010 C-string:'UNK_0xf1de'
//      UNK_0xf1f0  codep:0x224c parp:0xf1f0 size:0x0020 C-string:'UNK_0xf1f0'
//      UNK_0xf212  codep:0x224c parp:0xf212 size:0x001a C-string:'UNK_0xf212'
//      UNK_0xf22e  codep:0x224c parp:0xf22e size:0x001c C-string:'UNK_0xf22e'
//      UNK_0xf24c  codep:0x224c parp:0xf24c size:0x0018 C-string:'UNK_0xf24c'
//      UNK_0xf266  codep:0x224c parp:0xf266 size:0x000a C-string:'UNK_0xf266'
//      UNK_0xf272  codep:0x224c parp:0xf272 size:0x0016 C-string:'UNK_0xf272'
//      UNK_0xf28a  codep:0x224c parp:0xf28a size:0x0039 C-string:'UNK_0xf28a'
//      UNK_0xf2c5  codep:0x224c parp:0xf2c5 size:0x003c C-string:'UNK_0xf2c5'
//      UNK_0xf303  codep:0x224c parp:0xf303 size:0x004e C-string:'UNK_0xf303'
//      UNK_0xf353  codep:0x224c parp:0xf353 size:0x0030 C-string:'UNK_0xf353'
//      UNK_0xf385  codep:0x224c parp:0xf385 size:0x0034 C-string:'UNK_0xf385'
//      UNK_0xf3bb  codep:0x224c parp:0xf3bb size:0x001f C-string:'UNK_0xf3bb'
//      UNK_0xf3dc  codep:0x224c parp:0xf3dc size:0x0065 C-string:'UNK_0xf3dc'
//     (/LOG-PLAN)  codep:0x224c parp:0xf451 size:0x0000 C-string:'_ro__slash_LOG_dash_PLAN_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_HYDRO; // HYDRO
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_IsEVAL; // ?EVAL
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_PORTDAT; // PORTDAT
extern const unsigned short int pp_IsPORT; // ?PORT
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp__i_LAUNCH; // 'LAUNCH
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp__i_EXTERN; // 'EXTERN
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp__10_star_CARG; // 10*CARG
extern const unsigned short int pp_STIME; // STIME
extern const unsigned short int pp_ETIME; // ETIME
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_THIS_dash_I; // (THIS-I
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp_CTTOP; // CTTOP
extern LoadDataType _1BTN; // 1BTN
extern Color BLACK; // BLACK
extern Color DK_dash_GREE; // DK-GREE
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SP; // INST-SP
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType PHRASE; // PHRASE
extern IFieldType TEXT_dash_CO; // TEXT-CO
extern IFieldType TEXT_dash_IN; // TEXT-IN
extern IFieldType TEXT_dash_TE; // TEXT-TE
void COUNT(); // COUNT
void _star__slash_(); // */
void M_star_(); // M*
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void PAD(); // PAD
void BEEP(); // BEEP
void DrawR(); // .R
void D_dot_R(); // D.R
void MS(); // MS
void NOP(); // NOP
void _2OVER(); // 2OVER
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void BIT(); // BIT
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void StoreINST_dash_S(); // !INST-S
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void CI_i_(); // CI'
void IsCHILD(); // ?CHILD
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void _gt_C_plus_(); // >C+
void INEXT(); // INEXT
void IPREV(); // IPREV
void IFIRST(); // IFIRST
void _st_INSERT(); // <INSERT
void _gt_INSERT(); // >INSERT
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void SAVE_dash_OV(); // SAVE-OV
void StoreCOLOR(); // !COLOR
void _gt_1FONT(); // >1FONT
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_I(); // POINT>I
void IsICONS_dash__2(); // ?ICONS-_2
void POS_dot_(); // POS.
void WINDOW(); // WINDOW
void POLY_dash_WI(); // POLY-WI
void _gt_SSCT(); // >SSCT
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POLY_dash_ER(); // POLY-ER
void WLINE_dash_U(); // WLINE-U
void WLINE_dash_D(); // WLINE-D
void GCR(); // GCR
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsQUIT(); // ?QUIT
void Y_slash_N(); // Y/N
void CURSORS(); // CURSORS
void SUBROOT(); // SUBROOT
void U_gt__do_(); // U>$
void TEXT_gt_PA(); // TEXT>PA
void BOX_gt_LIS(); // BOX>LIS
void GET_dash_BOX(); // GET-BOX
void MAKE_dash_SC(); // MAKE-SC
void DELETE_dash_(); // DELETE-
void _gt_BOX(); // >BOX
void ITEM_gt_PA(); // ITEM>PA
void HUFF_gt_(); // HUFF>
void DrawSORD(); // .SORD
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
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void CI(); // CI
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe436 = 0xe436; // UNK_0xe436 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe43a = 0xe43a; // UNK_0xe43a size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe43e = 0xe43e; // UNK_0xe43e size: 4
// {0x56, 0x3a, 0x20, 0x58}

const unsigned short int pp_UNK_0xe444 = 0xe444; // UNK_0xe444 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe448 = 0xe448; // UNK_0xe448 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe542 = 0xe542; // UNK_0xe542 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xedbb = 0xedbb; // UNK_0xedbb size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xedbf = 0xedbf; // UNK_0xedbf size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf1c0 = 0xf1c0; // UNK_0xf1c0 size: 2
// {0x3a, 0x20}




// 0xe432: db 0x12 0x01 '  '

// ================================================
// 0xe434: WORD 'UNK_0xe436' codep=0x1d29 parp=0xe436
// ================================================
// 0xe436: db 0x00 0x00 '  '

// ================================================
// 0xe438: WORD 'UNK_0xe43a' codep=0x1d29 parp=0xe43a
// ================================================
// 0xe43a: db 0x00 0x00 '  '

// ================================================
// 0xe43c: WORD 'UNK_0xe43e' codep=0x1d29 parp=0xe43e
// ================================================
// 0xe43e: db 0x56 0x3a 0x20 0x58 'V: X'

// ================================================
// 0xe442: WORD 'UNK_0xe444' codep=0x1d29 parp=0xe444
// ================================================
// 0xe444: db 0x00 0x00 '  '

// ================================================
// 0xe446: WORD 'UNK_0xe448' codep=0x1d29 parp=0xe448
// ================================================
// 0xe448: db 0x00 0x00 '  '

// ================================================
// 0xe44a: WORD 'UNK_0xe44c' codep=0x224c parp=0xe44c params=0 returns=0
// ================================================

void UNK_0xe44c() // UNK_0xe44c
{
  Push(pp_UNK_0xe448); // UNK_0xe448
  ON_2(); // ON_2
}


// ================================================
// 0xe452: WORD 'UNK_0xe454' codep=0x224c parp=0xe454 params=0 returns=0
// ================================================
// orphan

void UNK_0xe454() // UNK_0xe454
{
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
}


// ================================================
// 0xe45c: WORD 'UNK_0xe45e' codep=0x7394 parp=0xe45e
// ================================================
LoadDataType UNK_0xe45e = {PLANETIDX, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe464: WORD 'UNK_0xe466' codep=0x224c parp=0xe466
// ================================================

void UNK_0xe466() // UNK_0xe466
{
  LoadData(UNK_0xe45e); // from 'PLANET'
  Push(!((Read16(Pop())&0xFF)==0?1:0)); //  C@ 0= NOT
}


// ================================================
// 0xe470: WORD 'UNK_0xe472' codep=0x224c parp=0xe472 params=0 returns=0
// ================================================

void UNK_0xe472() // UNK_0xe472
{
  Push(1);
  Push(pp_WBOTTOM); // WBOTTOM
  Store_2(); // !_2
}


// ================================================
// 0xe47a: WORD 'UNK_0xe47c' codep=0x224c parp=0xe47c params=0 returns=0
// ================================================

void UNK_0xe47c() // UNK_0xe47c
{
  Push(Read16(pp_ETIME)); // ETIME @
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("DRONE RECALLED");
  DrawTTY(); // .TTY
  Push(0x03e8);
  MS(); // MS
  Push(pp_ETIME); // ETIME
  _099(); // 099
}


// ================================================
// 0xe4a5: WORD 'UNK_0xe4a7' codep=0x7394 parp=0xe4a7
// ================================================
// orphan
LoadDataType UNK_0xe4a7 = {ARTIFACTIDX, 0x18, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe4ad: WORD 'UNK_0xe4af' codep=0x7394 parp=0xe4af
// ================================================
// orphan
LoadDataType UNK_0xe4af = {ARTIFACTIDX, 0x1d, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe4b5: WORD 'UNK_0xe4b7' codep=0x7394 parp=0xe4b7
// ================================================
// orphan
LoadDataType UNK_0xe4b7 = {ANALYZE_TEXTIDX, 0x00, 0xbe, 0x00, 0x6e57};

// ================================================
// 0xe4bd: WORD 'UNK_0xe4bf' codep=0x7420 parp=0xe4bf
// ================================================
IFieldType UNK_0xe4bf = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xe4c2: WORD 'UNK_0xe4c4' codep=0x7394 parp=0xe4c4
// ================================================
// orphan
LoadDataType UNK_0xe4c4 = {PLANETIDX, 0x07, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe4ca: WORD 'UNK_0xe4cc' codep=0x7394 parp=0xe4cc
// ================================================
LoadDataType UNK_0xe4cc = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe4d2: WORD 'UNK_0xe4d4' codep=0x7394 parp=0xe4d4
// ================================================
LoadDataType UNK_0xe4d4 = {PLANETIDX, 0x11, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe4da: WORD 'UNK_0xe4dc' codep=0x7394 parp=0xe4dc
// ================================================
LoadDataType UNK_0xe4dc = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe4e2: WORD 'UNK_0xe4e4' codep=0x7394 parp=0xe4e4
// ================================================
LoadDataType UNK_0xe4e4 = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe4ea: WORD 'UNK_0xe4ec' codep=0x7420 parp=0xe4ec
// ================================================
IFieldType UNK_0xe4ec = {VESSELIDX, 0x12, 0x07};

// ================================================
// 0xe4ef: WORD 'UNK_0xe4f1' codep=0x7394 parp=0xe4f1
// ================================================
LoadDataType UNK_0xe4f1 = {PLANETIDX, 0x0f, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe4f7: WORD 'UNK_0xe4f9' codep=0x7394 parp=0xe4f9
// ================================================
LoadDataType UNK_0xe4f9 = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe4ff: WORD 'UNK_0xe501' codep=0x7420 parp=0xe501
// ================================================
IFieldType UNK_0xe501 = {EVALUATIONIDX, 0x0a, 0x01};

// ================================================
// 0xe504: WORD 'UNK_0xe506' codep=0x7420 parp=0xe506
// ================================================
IFieldType UNK_0xe506 = {EVALUATIONIDX, 0x0b, 0x02};

// ================================================
// 0xe509: WORD 'UNK_0xe50b' codep=0x7420 parp=0xe50b
// ================================================
IFieldType UNK_0xe50b = {EVALUATIONIDX, 0x11, 0x02};

// ================================================
// 0xe50e: WORD 'UNK_0xe510' codep=0x7420 parp=0xe510
// ================================================
IFieldType UNK_0xe510 = {EVALUATIONIDX, 0x13, 0x01};

// ================================================
// 0xe513: WORD 'UNK_0xe515' codep=0x7420 parp=0xe515
// ================================================
IFieldType UNK_0xe515 = {EVALUATIONIDX, 0x14, 0x01};

// ================================================
// 0xe518: WORD 'UNK_0xe51a' codep=0x7420 parp=0xe51a
// ================================================
IFieldType UNK_0xe51a = {EVALUATIONIDX, 0x15, 0x0f};

// ================================================
// 0xe51d: WORD 'UNK_0xe51f' codep=0x7420 parp=0xe51f
// ================================================
// orphan
IFieldType UNK_0xe51f = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xe522: WORD 'UNK_0xe524' codep=0x7420 parp=0xe524
// ================================================
// orphan
IFieldType UNK_0xe524 = {DIRECTORYIDX, 0x13, 0x02};

// ================================================
// 0xe527: WORD 'UNK_0xe529' codep=0x7420 parp=0xe529
// ================================================
IFieldType UNK_0xe529 = {STARSYSTEMIDX, 0x12, 0x01};

// ================================================
// 0xe52c: WORD 'UNK_0xe52e' codep=0x7420 parp=0xe52e
// ================================================
// orphan
IFieldType UNK_0xe52e = {DIRECTORYIDX, 0x15, 0x01};

// ================================================
// 0xe531: WORD 'UNK_0xe533' codep=0x7420 parp=0xe533
// ================================================
// orphan
IFieldType UNK_0xe533 = {DIRECTORYIDX, 0x16, 0x01};

// ================================================
// 0xe536: WORD 'UNK_0xe538' codep=0x7420 parp=0xe538
// ================================================
// orphan
IFieldType UNK_0xe538 = {DIRECTORYIDX, 0x17, 0x01};

// ================================================
// 0xe53b: WORD 'UNK_0xe53d' codep=0x7420 parp=0xe53d
// ================================================
IFieldType UNK_0xe53d = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe540: WORD 'UNK_0xe542' codep=0x1d29 parp=0xe542
// ================================================
// 0xe542: db 0x3a 0x20 ': '

// ================================================
// 0xe544: WORD 'UNK_0xe546' codep=0x224c parp=0xe546 params=2 returns=0
// ================================================
// orphan

void UNK_0xe546() // UNK_0xe546
{
  CTPOS_dot_(); // CTPOS.
  Push(-1);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe550: WORD 'UNK_0xe552' codep=0x224c parp=0xe552 params=0 returns=0
// ================================================

void UNK_0xe552() // UNK_0xe552
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  Push(1);
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
}


// ================================================
// 0xe562: WORD 'UNK_0xe564' codep=0x224c parp=0xe564 params=3 returns=0
// ================================================

void UNK_0xe564() // UNK_0xe564
{
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xe56c: WORD 'UNK_0xe56e' codep=0x224c parp=0xe56e
// ================================================

void UNK_0xe56e() // UNK_0xe56e
{
  Push(0xc285); // probable 'OVD@BAL'
  MODULE(); // MODULE
  Push(7);
  D_dot_R(); // D.R
}


// ================================================
// 0xe57a: WORD '.BAL' codep=0x224c parp=0xe583
// ================================================

void DrawBAL() // .BAL
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(Read16(pp_WLEFT) + 3); // WLEFT @ 3+
  Push(Read16(pp_WTOP) - 2); // WTOP @ 2-
  POS_dot_(); // POS.
  PRINT("YOUR ACCOUNT BALANCE IS: ", 25); // (.")
  UNK_0xe56e(); // UNK_0xe56e
  PRINT(" SP", 3); // (.")
  Push(0x2710); Push(0x0000);
  Push(0xbe96); // probable 'CPAUS'
  MODULE(); // MODULE
  CTERASE(); // CTERASE
}


// ================================================
// 0xe5c9: WORD 'UNK_0xe5cb' codep=0x224c parp=0xe5cb params=0 returns=2
// ================================================

void UNK_0xe5cb() // UNK_0xe5cb
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xe5d1: WORD 'UNK_0xe5d3' codep=0x224c parp=0xe5d3 params=0 returns=0
// ================================================

void UNK_0xe5d3() // UNK_0xe5d3
{
  UNK_0xe5cb(); // UNK_0xe5cb
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5e3: WORD 'UNK_0xe5e5' codep=0x224c parp=0xe5e5 params=0 returns=0
// ================================================

void UNK_0xe5e5() // UNK_0xe5e5
{
  UNK_0xe5cb(); // UNK_0xe5cb
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5f5: WORD 'UNK_0xe5f7' codep=0x224c parp=0xe5f7 params=0 returns=0
// ================================================

void UNK_0xe5f7() // UNK_0xe5f7
{
  UNK_0xe5cb(); // UNK_0xe5cb
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe605: WORD 'UNK_0xe607' codep=0x224c parp=0xe607 params=2 returns=0
// ================================================

void UNK_0xe607() // UNK_0xe607
{
  _gt_C_plus_S(); // >C+S
  Push2Words("*EOL");
  _gt_C_plus_S(); // >C+S
  BOX_gt_LIS(); // BOX>LIS
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe615: WORD 'UNK_0xe617' codep=0x224c parp=0xe617
// ================================================

void UNK_0xe617() // UNK_0xe617
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(3);
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(7);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  GetColor(WHITE);
  GetColor(GREY1);
  GetColor(DK_dash_GREE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
  StoreCRS(); // !CRS
}


// ================================================
// 0xe649: WORD 'UNK_0xe64b' codep=0x224c parp=0xe64b
// ================================================

void UNK_0xe64b() // UNK_0xe64b
{
  Push(Read16(pp_WTOP) + 1); // WTOP @ 1+
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xe655: WORD 'UNK_0xe657' codep=0x224c parp=0xe657
// ================================================

void UNK_0xe657() // UNK_0xe657
{
  unsigned short int i, imax;
  CTINIT(); // CTINIT
  Push(Read16(pp_WLINES)); // WLINES @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push(Read16(pp_WTOP) - i * 7); // WTOP @ I 7 * -
    POS_dot_(); // POS.
    TEXT_gt_PA(); // TEXT>PA
    PAD(); // PAD
    _do__dot_(); // $.
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe681: WORD 'UNK_0xe683' codep=0x224c parp=0xe683
// ================================================

void UNK_0xe683() // UNK_0xe683
{
  unsigned short int a;
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0);
  do
  {
    Push(Pop() + 1); //  1+
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  a = Pop(); // >R
  _gt_1FONT(); // >1FONT
  Push(0x002b);
  Push(3);
  Push(5);
  Push(a); // R>
  MIN(); // MIN
  Push(0x0026);
  WINDOW(); // WINDOW
  UNK_0xe657(); // UNK_0xe657
  IPREV(); // IPREV
  UNK_0xe64b(); // UNK_0xe64b
}


// ================================================
// 0xe6b9: WORD 'UNK_0xe6bb' codep=0x224c parp=0xe6bb
// ================================================

void UNK_0xe6bb() // UNK_0xe6bb
{
  INEXT(); // INEXT
  UNK_0xe5d3(); // UNK_0xe5d3
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  UNK_0xe64b(); // UNK_0xe64b
  WLINE_dash_U(); // WLINE-U
  UNK_0xe64b(); // UNK_0xe64b
}


// ================================================
// 0xe6cb: WORD 'UNK_0xe6cd' codep=0x224c parp=0xe6cd
// ================================================

void UNK_0xe6cd() // UNK_0xe6cd
{
  IPREV(); // IPREV
  UNK_0xe5e5(); // UNK_0xe5e5
  UNK_0xe5cb(); // UNK_0xe5cb
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  PAD(); // PAD
  UNK_0xe64b(); // UNK_0xe64b
  WLINE_dash_D(); // WLINE-D
  UNK_0xe64b(); // UNK_0xe64b
}


// ================================================
// 0xe6e3: WORD 'TD-SCROLL' codep=0x4b3b parp=0xe6f1
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 1:
    UNK_0xe6bb(); // UNK_0xe6bb
    break;
  case 65535:
    UNK_0xe6cd(); // UNK_0xe6cd
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe6fd: WORD 'UNK_0xe6ff' codep=0x224c parp=0xe6ff
// ================================================

void UNK_0xe6ff() // UNK_0xe6ff
{
  Push(0x0038);
  Push(0);
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  Push(0x0026);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push(1);
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe72d: WORD 'UNK_0xe72f' codep=0x224c parp=0xe72f
// ================================================

void UNK_0xe72f() // UNK_0xe72f
{
  SET_STR_AS_PARAM("ELEMENTS");
  Push(pp_UNK_0xe43e); // UNK_0xe43e
  _1_dot_5_at_(); // 1.5@
  Push2Words("*STARSH");
  UNK_0xe6ff(); // UNK_0xe6ff
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _st_INSERT(); // <INSERT
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xe43a); // UNK_0xe43a
  ON_2(); // ON_2
}


// ================================================
// 0xe756: WORD 'UNK_0xe758' codep=0x224c parp=0xe758
// ================================================

void UNK_0xe758() // UNK_0xe758
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(pp_UNK_0xe43e); // UNK_0xe43e
  _1_dot_5_ex__2(); // 1.5!_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  do
  {
    Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
    Get_gt_C_plus_S(); // @>C+S
    GetINST_dash_C(); // @INST-C
    Push(Pop()==0x000b?1:0); //  0x000b =
    GetINST_dash_S(); // @INST-S
    Push(Pop()==0x000a?1:0); //  0x000a =
    Push(Pop() & Pop()); // AND
    Push(!Pop()); //  NOT
    ICLOSE(); // ICLOSE
    if (Pop() == 0) return;
    INEXT(); // INEXT
  } while(1);
}


// ================================================
// 0xe79a: WORD 'UNK_0xe79c' codep=0x224c parp=0xe79c params=0 returns=1
// ================================================

void UNK_0xe79c() // UNK_0xe79c
{
  unsigned short int a;
  GetINST_dash_S(); // @INST-S
  a = Pop(); // >R
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0);
  do
  {
    Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
    Get_gt_C_plus_S(); // @>C+S
    GetINST_dash_S(); // @INST-S
    Push(Pop()==a?1:0); //  I =
    GetINST_dash_C(); // @INST-C
    Push(Pop()==0x001a?1:0); //  0x001a =
    Push(Pop() & Pop()); // AND
    Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
    _2_at_(); // 2@
    Push(0xffff); Push(0xffff);
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    Push(Pop() | Pop()); // OR
    ICLOSE(); // ICLOSE
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp__ro_THIS_dash_I); // (THIS-I
      _1_dot_5_ex__2(); // 1.5!_2
    }
    INEXT(); // INEXT
    Push(Read16(regsp)); // DUP
    IsFIRST(); // ?FIRST
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(a); // R>
  Pop(); // DROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe7f2: WORD 'UNK_0xe7f4' codep=0x224c parp=0xe7f4 params=2 returns=0
// ================================================

void UNK_0xe7f4() // UNK_0xe7f4
{
  SUBROOT(); // SUBROOT
  _gt_C_plus_S(); // >C+S
  UNK_0xe79c(); // UNK_0xe79c
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(!Read16(pp_UNK_0xe43a)); // UNK_0xe43a @ NOT
    if (Pop() != 0)
    {
      UNK_0xe72f(); // UNK_0xe72f
    }
    Push(pp__ro_SCROLL_1); // (SCROLL_1
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    UNK_0xe758(); // UNK_0xe758
    CI(); // CI
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    ITEM_gt_PA(); // ITEM>PA
    PAD(); // PAD
    COUNT(); // COUNT
    CI(); // CI
    Push(pp_UNK_0xe43e); // UNK_0xe43e
    _1_dot_5_at_(); // 1.5@
    UNK_0xe6ff(); // UNK_0xe6ff
    _2SWAP(); // 2SWAP
    _gt_INSERT(); // >INSERT
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe830: WORD 'UNK_0xe832' codep=0x224c parp=0xe832
// ================================================

void UNK_0xe832() // UNK_0xe832
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  SWAP(); // SWAP
  ICLOSE(); // ICLOSE
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__2(); // ?ICONS-_2
}


// ================================================
// 0xe846: WORD 'UNK_0xe848' codep=0x224c parp=0xe848
// ================================================

void UNK_0xe848() // UNK_0xe848
{
  GetID(); // @ID
  Push(Pop()==0x002b?1:0); //  0x002b =
  if (Pop() != 0)
  {
    GetIL(); // @IL
    GetIH(); // @IH
    _gt_C_plus_S(); // >C+S
    Push((0x65e1+UNK_0xe4ec.offset) + 3); // UNK_0xe4ec<IFIELD> 3 +
    _2_at_(); // 2@
    D0_eq_(); // D0=
    Push(!Pop()); //  NOT
    ICLOSE(); // ICLOSE
    return;
  }
  Push(0);
}


// ================================================
// 0xe870: WORD 'UNK_0xe872' codep=0x224c parp=0xe872 params=0 returns=0
// ================================================

void UNK_0xe872() // UNK_0xe872
{
  unsigned short int i, imax;
  Push(pp_UNK_0xe436); // UNK_0xe436
  _099(); // 099
  Push(Read16(pp_CONTEXT_3)==4?1:0); // CONTEXT_3 @ 4 =
  if (Pop() != 0)
  {
    UNK_0xe832(); // UNK_0xe832
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      POINT_gt_I(); // POINT>I
      UNK_0xe848(); // UNK_0xe848
      Push(pp_UNK_0xe436); // UNK_0xe436
      _plus__ex__2(); // +!_2
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(!(Read16(pp_UNK_0xe436)==0?1:0)); // UNK_0xe436 @ 0= NOT
  Push(pp_UNK_0xe436); // UNK_0xe436
  Store_2(); // !_2
}


// ================================================
// 0xe8a2: WORD 'UNK_0xe8a4' codep=0x224c parp=0xe8a4
// ================================================

void UNK_0xe8a4() // UNK_0xe8a4
{
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0030);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      Push(0xffff); Push(0xffff);
      Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
      StoreD(); // D!
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    CDROP(); // CDROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8ce: WORD 'UNK_0xe8d0' codep=0x224c parp=0xe8d0
// ================================================

void UNK_0xe8d0() // UNK_0xe8d0
{
  unsigned short int i, imax, j, jmax;
  UNK_0xe832(); // UNK_0xe832
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    GetID(); // @ID
    Push(Pop()==0x002b?1:0); //  0x002b =
    if (Pop() != 0)
    {
      Push(0x00ff);
      Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
      MIN(); // MIN
      Push(Read16(regsp)); // DUP
      Push(pp_ELEM_dash_AM); // ELEM-AM
      Store_2(); // !_2
      Push(-Pop()); //  NEGATE
      Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
      _plus__ex__2(); // +!_2
      GetINST_dash_S(); // @INST-S
      Push(Read16(regsp)); // DUP
      Push(pp_UNK_0xe542); // UNK_0xe542
      Store_2(); // !_2
      Push(Pop()==6?1:0); //  6 =
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      if (Pop() != 0)
      {
        Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
        Push((0x65e1+UNK_0xe4ec.offset) + 3); // UNK_0xe4ec<IFIELD> 3 +
        C_ex__2(); // C!_2
      } else
      {
        Push(3);
        Push(0);

        j = Pop();
        jmax = Pop();
        do // (DO)
        {
          Push((Read16((0x65e1+UNK_0xe4ec.offset) + j)&0xFF)==0?1:0); // UNK_0xe4ec<IFIELD> I + C@ 0=
          if (Pop() != 0)
          {
            Push(Read16(pp_UNK_0xe542)); // UNK_0xe542 @
            Push((0x65e1+UNK_0xe4ec.offset) + j); // UNK_0xe4ec<IFIELD> I +
            C_ex__2(); // C!_2
            Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
            Push(((0x65e1+UNK_0xe4ec.offset) + 4) + j); // UNK_0xe4ec<IFIELD> 4 + I +
            C_ex__2(); // C!_2
            jmax = j; // LEAVE
          }
          j++;
        } while(j<jmax); // (LOOP)

      }
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe95e: WORD 'UNK_0xe960' codep=0x224c parp=0xe960
// ================================================

void UNK_0xe960() // UNK_0xe960
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0030);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      UNK_0xe8d0(); // UNK_0xe8d0
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
    IDELETE(); // IDELETE
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe98a: WORD 'UNK_0xe98c' codep=0x224c parp=0xe98c
// ================================================

void UNK_0xe98c() // UNK_0xe98c
{
  unsigned short int i, imax, j, jmax;
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(0x0031);
    StoreINST_dash_S(); // !INST-S
  }
  ICLOSE(); // ICLOSE
  UNK_0xe832(); // UNK_0xe832
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    UNK_0xe848(); // UNK_0xe848
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      Push(4);
      Push(0);

      j = Pop();
      jmax = Pop();
      do // (DO)
      {
        Push(Read16(((0x65e1+UNK_0xe4ec.offset) + 3) + j)&0xFF); // UNK_0xe4ec<IFIELD> 3 + I + C@
        if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
        if (Pop() != 0)
        {
          Push(0x001a);
          Push(j==0?1:0); // I 0=
          if (Pop() != 0)
          {
            Push(6);
          } else
          {
            Push(Read16((0x65e1+UNK_0xe4ec.offset) + (j - 1))&0xFF); // UNK_0xe4ec<IFIELD> I 1- + C@
          }
          ICREATE(); // ICREATE
          _gt_C_plus_S(); // >C+S
          Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
          Store_2(); // !_2
          CI(); // CI
          ICLOSE(); // ICLOSE
          Push2Words("*STARSH");
          _gt_C_plus_S(); // >C+S
          _gt_BOX(); // >BOX
          ICLOSE(); // ICLOSE
        }
        j++;
      } while(j<jmax); // (LOOP)

      Push(0x65e1+UNK_0xe4ec.offset); // UNK_0xe4ec<IFIELD>
      Push(7);
      Push(0);
      FILL_2(); // FILL_2
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Push(Pop() & Read16(pp_UNK_0xe436)); //  UNK_0xe436 @ AND
  if (Pop() != 0)
  {
    Push(0x0030);
    StoreINST_dash_S(); // !INST-S
  }
  IFIRST(); // IFIRST
  Push(0x000b);
  Push(0x0031);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(0x000a);
    StoreINST_dash_S(); // !INST-S
  }
  ICLOSE(); // ICLOSE
  UNK_0xe8a4(); // UNK_0xe8a4
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea50: WORD 'UNK_0xea52' codep=0x224c parp=0xea52
// ================================================

void UNK_0xea52() // UNK_0xea52
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(pp_WTOP) - 6); // WTOP @ 6 -
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(1);
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  Push(a); // R>
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xea6e: WORD 'UNK_0xea70' codep=0x224c parp=0xea70
// ================================================

void UNK_0xea70() // UNK_0xea70
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT("SCROLL ITEMS: ^\\  QUIT: []", 26); // (.")
}


// ================================================
// 0xea99: WORD 'UNK_0xea9b' codep=0x224c parp=0xea9b
// ================================================

void UNK_0xea9b() // UNK_0xea9b
{
  _gt_1FONT(); // >1FONT
  _gt_SSCT(); // >SSCT
  CTERASE(); // CTERASE
  UNK_0xea70(); // UNK_0xea70
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _plus__ex__2(); // +!_2
  Push(4);
  Push(Read16(pp_WTOP) + 7); // WTOP @ 7 +
  POS_dot_(); // POS.
  PRINT("ITEM", 4); // (.")
  Push(0x006c);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("VOLUME", 6); // (.")
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("VALUE", 5); // (.")
}


// ================================================
// 0xeae1: WORD 'UNK_0xeae3' codep=0x224c parp=0xeae3
// ================================================

void UNK_0xeae3() // UNK_0xeae3
{
  UNK_0xe5f7(); // UNK_0xe5f7
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(0x000a);
  _slash_MOD(); // /MOD
  ICLOSE(); // ICLOSE
  UNK_0xe5cb(); // UNK_0xe5cb
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+TEXT_dash_TE.offset) + 0x001a); // TEXT-TE<IFIELD> 0x001a +
  Push(6);
  Push(0x002e);
  FILL_2(); // FILL_2
  U_gt__do_(); // U>$
  Push((0x65e1+TEXT_dash_TE.offset) + 0x001e); // TEXT-TE<IFIELD> 0x001e +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read16(Pop())&0xFF); //  C@
  Push((0x65e1+TEXT_dash_TE.offset) + 0x001f); // TEXT-TE<IFIELD> 0x001f +
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb2b: WORD 'UNK_0xeb2d' codep=0x224c parp=0xeb2d params=0 returns=0
// ================================================

void UNK_0xeb2d() // UNK_0xeb2d
{
  UNK_0xe5f7(); // UNK_0xe5f7
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  UNK_0xe5cb(); // UNK_0xe5cb
  _gt_C_plus_S(); // >C+S
  IDELETE(); // IDELETE
  Push(-1);
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb53: WORD 'UNK_0xeb55' codep=0x224c parp=0xeb55
// ================================================
// orphan

void UNK_0xeb55() // UNK_0xeb55
{
  Push(0xbf80); // probable 'CTUP'
  MODULE(); // MODULE
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT("PRESS ANY KEY TO CONTINUE", 25); // (.")
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xea60); Push(0x0000);
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    _i_KEY(); // 'KEY
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeba1: WORD 'UNK_0xeba3' codep=0x224c parp=0xeba3
// ================================================

void UNK_0xeba3() // UNK_0xeba3
{
  Push(0xcd01); // probable 'KEY-EL'
  MODULE(); // MODULE
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  Push(Read16(regsp)); // DUP
  Push(-Pop()); //  NEGATE
  Push(Read16(regsp)); // DUP
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _plus__ex__2(); // +!_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xe53d.offset); // UNK_0xe53d<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(0xfff6);
  M_star_(); // M*
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG
  StoreD(); // D!
  Push(0x001a);
  GetINST_dash_S(); // @INST-S
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  _2DUP(); // 2DUP
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  if (Pop() != 0)
  {
    UNK_0xeae3(); // UNK_0xeae3
    UNK_0xeb2d(); // UNK_0xeb2d
    UNK_0xe7f4(); // UNK_0xe7f4
    UNK_0xeae3(); // UNK_0xeae3
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Push(0xb6ec); // probable '=CARGO'
  MODULE(); // MODULE
  DrawSORD(); // .SORD
}


// ================================================
// 0xec0f: WORD 'UNK_0xec11' codep=0x224c parp=0xec11 params=0 returns=4
// ================================================

void UNK_0xec11() // UNK_0xec11
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
  Push(0xbf6f); // probable 'P>CT'
  MODULE(); // MODULE
  Push(0x4e20); Push(0x0000);
  Push(0xbe96); // probable 'CPAUS'
  MODULE(); // MODULE
}


// ================================================
// 0xec39: WORD 'UNK_0xec3b' codep=0x224c parp=0xec3b
// ================================================

void UNK_0xec3b() // UNK_0xec3b
{
  Push(Read16(pp_WTOP) - 6); // WTOP @ 6 -
  UNK_0xe617(); // UNK_0xe617
  Push(7);
  Push(pp_CTTOP); // CTTOP
  _plus__ex__2(); // +!_2
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
  CTERASE(); // CTERASE
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_2(); // !_2
  UNK_0xec11(); // UNK_0xec11
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      UNK_0xec11(); // UNK_0xec11
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
  }
  Push(0xfff9);
  Push(pp_CTTOP); // CTTOP
  _plus__ex__2(); // +!_2
  Push(1);
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xec7f: WORD 'UNK_0xec81' codep=0x224c parp=0xec81 params=2 returns=2
// ================================================
// orphan

void UNK_0xec81() // UNK_0xec81
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
// 0xeca7: WORD 'UNK_0xeca9' codep=0x224c parp=0xeca9 params=1 returns=0
// ================================================
// orphan

void UNK_0xeca9() // UNK_0xeca9
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
// 0xeccb: WORD 'UNK_0xeccd' codep=0x224c parp=0xeccd params=1 returns=0
// ================================================
// orphan

void UNK_0xeccd() // UNK_0xeccd
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
// 0xecef: WORD 'UNK_0xecf1' codep=0x224c parp=0xecf1
// ================================================
// orphan

void UNK_0xecf1() // UNK_0xecf1
{
  UNK_0xec81(); // UNK_0xec81
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(0);
  DrawR(); // .R
  UNK_0xeccd(); // UNK_0xeccd
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
  UNK_0xeca9(); // UNK_0xeca9
}


// ================================================
// 0xed1f: WORD 'UNK_0xed21' codep=0x224c parp=0xed21
// ================================================

void UNK_0xed21() // UNK_0xed21
{
  Push(Read16(pp_UNK_0xe448)); // UNK_0xe448 @
  if (Pop() != 0)
  {
    Push(1);
    Push(5);
    CTPOS_dot_(); // CTPOS.
    GetColor(WHITE);
    StoreCOLOR(); // !COLOR
    PRINT("REVISING...", 11); // (.")
  }
  DELETE_dash_(); // DELETE-
  MAKE_dash_SC(); // MAKE-SC
  Push2Words("*STARSH");
  GET_dash_BOX(); // GET-BOX
  Push(1);
  Push(5);
  CTPOS_dot_(); // CTPOS.
  Push(0x000b);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  Push2Words("*STARSH");
  UNK_0xe607(); // UNK_0xe607
  UNK_0xe683(); // UNK_0xe683
}


// ================================================
// 0xed5f: WORD 'UNK_0xed61' codep=0x224c parp=0xed61 params=2 returns=0
// ================================================

void UNK_0xed61() // UNK_0xed61
{
  UNK_0xe44c(); // UNK_0xe44c
  Push(0xccf0); // probable 'TOSS'
  MODULE(); // MODULE
  Pop(); Pop(); // 2DROP
  Push(0xb6ec); // probable '=CARGO'
  MODULE(); // MODULE
  DrawSORD(); // .SORD
}


// ================================================
// 0xed75: WORD 'UNK_0xed77' codep=0x224c parp=0xed77 params=2 returns=0
// ================================================

void UNK_0xed77() // UNK_0xed77
{
  UNK_0xe44c(); // UNK_0xe44c
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() != 0)
  {
    UNK_0xeba3(); // UNK_0xeba3
    return;
  }
  UNK_0xed61(); // UNK_0xed61
}


// ================================================
// 0xed93: WORD '1STOPTION' codep=0x4b3b parp=0xeda1
// ================================================

void _1STOPTION() // 1STOPTION
{
  switch(Pop()) // 1STOPTION
  {
  case 28:
    UNK_0xed61(); // UNK_0xed61
    break;
  case 27:
    UNK_0xec3b(); // UNK_0xec3b
    break;
  case 26:
    UNK_0xed77(); // UNK_0xed77
    break;
  case 68:
    UNK_0xed61(); // UNK_0xed61
    break;
  case 9:
    UNK_0xed61(); // UNK_0xed61
    break;
  default:
    UNK_0xed61(); // UNK_0xed61
    break;

  }
}

// ================================================
// 0xedb9: WORD 'UNK_0xedbb' codep=0x1d29 parp=0xedbb
// ================================================
// 0xedbb: db 0x3a 0x20 ': '

// ================================================
// 0xedbd: WORD 'UNK_0xedbf' codep=0x1d29 parp=0xedbf
// ================================================
// 0xedbf: db 0x3a 0x20 ': '

// ================================================
// 0xedc1: WORD 'DO-OPTION' codep=0x224c parp=0xedcf
// ================================================

void DO_dash_OPTION() // DO-OPTION
{
  Push(Read16(pp_UNK_0xedbb)); // UNK_0xedbb @
  if (Pop() != 0)
  {
    UNK_0xed61(); // UNK_0xed61
  } else
  {
    GetINST_dash_C(); // @INST-C
    _1STOPTION(); // 1STOPTION case
  }
  Push(1);
}


// ================================================
// 0xede5: WORD 'UNK_0xede7' codep=0x224c parp=0xede7 params=0 returns=1
// ================================================

void UNK_0xede7() // UNK_0xede7
{
  PRINT(" JETTISON", 9); // (.")
  Push(0);
}


// ================================================
// 0xedf7: WORD 'UNK_0xedf9' codep=0x224c parp=0xedf9 params=0 returns=1
// ================================================

void UNK_0xedf9() // UNK_0xedf9
{
  PRINT(" PLAYBACK", 9); // (.")
  GCR(); // GCR
  PRINT(" ERASE", 6); // (.")
  Push(1);
}


// ================================================
// 0xee14: WORD 'UNK_0xee16' codep=0x224c parp=0xee16 params=0 returns=1
// ================================================

void UNK_0xee16() // UNK_0xee16
{
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() != 0)
  {
    PRINT(" PICKUP", 7); // (.")
    Push(0);
    return;
  }
  UNK_0xede7(); // UNK_0xede7
}


// ================================================
// 0xee3a: WORD 'ITEM-OPTIONS' codep=0x4b3b parp=0xee4b
// ================================================

void ITEM_dash_OPTIONS() // ITEM-OPTIONS
{
  switch(Pop()) // ITEM-OPTIONS
  {
  case 28:
    UNK_0xede7(); // UNK_0xede7
    break;
  case 27:
    UNK_0xedf9(); // UNK_0xedf9
    break;
  case 68:
    UNK_0xede7(); // UNK_0xede7
    break;
  case 26:
    UNK_0xee16(); // UNK_0xee16
    break;
  default:
    UNK_0xede7(); // UNK_0xede7
    break;

  }
}

// ================================================
// 0xee5f: WORD 'UNK_0xee61' codep=0x224c parp=0xee61
// ================================================

void UNK_0xee61() // UNK_0xee61
{
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 7); // WTOP @ 7 -
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  GetINST_dash_C(); // @INST-C
  ITEM_dash_OPTIONS(); // ITEM-OPTIONS case
  Push(pp_UNK_0xedbf); // UNK_0xedbf
  Store_2(); // !_2
  Push(pp_UNK_0xedbb); // UNK_0xedbb
  _099(); // 099
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(4);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT("^\\ SELECT OPTION OR [ QUIT ]", 28); // (.")
  Push(Read16(pp_WTOP) - 6); // WTOP @ 6 -
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xeeb2: WORD 'UNK_0xeeb4' codep=0x224c parp=0xeeb4 params=0 returns=0
// ================================================

void UNK_0xeeb4() // UNK_0xeeb4
{
  UNK_0xe5f7(); // UNK_0xe5f7
  GetINST_dash_C(); // @INST-C
  ICLOSE(); // ICLOSE
  Push(!(Pop()==0x000b?1:0)); //  0x000b = NOT
  if (Pop() != 0)
  {
    UNK_0xe5f7(); // UNK_0xe5f7
    GetColor(BLACK);
    UNK_0xe64b(); // UNK_0xe64b
    UNK_0xea52(); // UNK_0xea52
    UNK_0xee61(); // UNK_0xee61
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        Push(-Pop() + Read16(pp_UNK_0xedbb)); //  NEGATE UNK_0xedbb @ +
        Push(Read16(regsp)); // DUP
        Push(0);
        Push(Read16(pp_UNK_0xedbf) + 1); // UNK_0xedbf @ 1+
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          Push((Read16(pp_WTOP) - (Read16(pp_UNK_0xedbb) + 1) * 7) + 1); // WTOP @ UNK_0xedbb @ 1+ 7 * - 1+
          UNK_0xe617(); // UNK_0xe617
          Push(Read16(regsp)); // DUP
          Push(pp_UNK_0xedbb); // UNK_0xedbb
          Store_2(); // !_2
          Push(Read16(pp_WTOP)); // WTOP @
          SWAP(); // SWAP
          Push((Pop() + 1) * 7); //  1+ 7 *
          _dash_(); // -
          Push(Pop() + 1); //  1+
          UNK_0xe617(); // UNK_0xe617
        } else
        {
          Pop(); // DROP
        }
      }
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        DO_dash_OPTION(); // DO-OPTION
      } else
      {
        Push(0);
      }
      Push(Pop() | Read16(pp_FQUIT)); //  FQUIT @ OR
    } while(Pop() == 0);
    Push(3);
    _star_CLOSE(); // *CLOSE
    Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
    Push(1);
    _gt_(); // >
    if (Pop() != 0)
    {
      UNK_0xea9b(); // UNK_0xea9b
      UNK_0xed21(); // UNK_0xed21
    }
    return;
  }
  BEEP(); // BEEP
}


// ================================================
// 0xef58: WORD 'UNK_0xef5a' codep=0x224c parp=0xef5a
// ================================================

void UNK_0xef5a() // UNK_0xef5a
{
  CTINIT(); // CTINIT
  PRINT("STARSHIP HOLD IS EMPTY.", 23); // (.")
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xef7e: WORD '(/ITEMS)' codep=0x224c parp=0xef8b
// ================================================
// entry

void _ro__slash_ITEMS_rc_() // (/ITEMS)
{
  DrawBAL(); // .BAL
  CTERASE(); // CTERASE
  UNK_0xe872(); // UNK_0xe872
  Push(Read16(pp_UNK_0xe436)); // UNK_0xe436 @
  Push(Read16(regsp)); // DUP
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Push(pp_UNK_0xe43a); // UNK_0xe43a
  Store_2(); // !_2
  CI(); // CI
  Push(Pop() | Pop()); // OR
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(0x002b);
    Push(3);
    Push(7);
    Push(0x0026);
    WINDOW(); // WINDOW
    UNK_0xe472(); // UNK_0xe472
    UNK_0xea9b(); // UNK_0xea9b
    MAKE_dash_SC(); // MAKE-SC
    Push(pp_ESC_dash_EN); // ESC-EN
    _099(); // 099
    if (Pop() != 0)
    {
      UNK_0xe98c(); // UNK_0xe98c
    }
    Push2Words("*STARSH");
    GET_dash_BOX(); // GET-BOX
    Push2Words("*STARSH");
    UNK_0xe607(); // UNK_0xe607
    UNK_0xe683(); // UNK_0xe683
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      TD_dash_SCROLL(); // TD-SCROLL case
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        UNK_0xeeb4(); // UNK_0xeeb4
        Push(pp_FQUIT); // FQUIT
        _099(); // 099
      }
      IsQUIT(); // ?QUIT
      Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
      Push(2);
      _st_(); // <
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    DELETE_dash_(); // DELETE-
    Push(pp_ESC_dash_EN); // ESC-EN
    ON_2(); // ON_2
    UNK_0xe64b(); // UNK_0xe64b
  } else
  {
    Pop(); // DROP
    UNK_0xef5a(); // UNK_0xef5a
  }
  _gt_SSCT(); // >SSCT
  CTERASE(); // CTERASE
  UNK_0xe960(); // UNK_0xe960
}


// ================================================
// 0xf01f: WORD '>DESCEND' codep=0x224c parp=0xf02c
// ================================================
// entry

void _gt_DESCEND() // >DESCEND
{
  UNK_0xe552(); // UNK_0xe552
  SET_STR_AS_PARAM("LAUNCH");
  LoadData(_1BTN); // from 'BUTTONS'
  UNK_0xe564(); // UNK_0xe564
  Push(pp_CONTEXT_3); // CONTEXT_3
  _099(); // 099
  Push(0x3a48); // probable 'NOP'
  Push(pp__i_EXTERN); // 'EXTERN
  Store_2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16(0x65e1+UNK_0xe4bf.offset)&0xFF) & 0x00ef); // UNK_0xe4bf<IFIELD> C@ 0x00ef AND
  Push(0x65e1+UNK_0xe4bf.offset); // UNK_0xe4bf<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf05d: WORD 'UNK_0xf05f' codep=0x224c parp=0xf05f
// ================================================

void UNK_0xf05f() // UNK_0xf05f
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("READY TO LAUNCH", 15); // (.")
  CTCR(); // CTCR
  PRINT("CONFIRM: [N Y]", 14); // (.")
  Y_slash_N(); // Y/N
  if (Pop() != 0)
  {
    Push(Read16(pp_CONTEXT_3)==0?1:0); // CONTEXT_3 @ 0=
    Push(pp__ro_PLANET); // (PLANET
    _1_dot_5_at_(); // 1.5@
    D0_eq_(); // D0=
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(Read16(pp__i_LAUNCH)); // 'LAUNCH @
      MODULE(); // MODULE
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        UNK_0xe47c(); // UNK_0xe47c
        Push(0xbd8b); // probable 'SEEGR'
        MODULE(); // MODULE
        Push(0xd272); // probable 'OVCOU'
        MODULE(); // MODULE
        Push(0xbd67); // probable 'ASCEN'
        MODULE(); // MODULE
        Push(0xbd9b); // probable 'MROTA'
        Push(pp__i_EXTERN); // 'EXTERN
        Store_2(); // !_2
      }
    } else
    {
      Push(0xd272); // probable 'OVCOU'
      MODULE(); // MODULE
      Push(1);
    }
    if (Pop() != 0)
    {
      UNK_0xe552(); // UNK_0xe552
      SET_STR_AS_PARAM("LAND  ");
      LoadData(_1BTN); // from 'BUTTONS'
      UNK_0xe564(); // UNK_0xe564
    }
    Push(pp_STIME); // STIME
    _2_at_(); // 2@
    Push(0x03e8); Push(0x0000);
    D_st_(); // D<
    Pop(); // DROP
    return;
  }
  CTERASE(); // CTERASE
  PRINT("CANCELLED", 9); // (.")
}


// ================================================
// 0xf10b: WORD 'UNK_0xf10d' codep=0x224c parp=0xf10d
// ================================================

void UNK_0xf10d() // UNK_0xf10d
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE'RE NOT IN ORBIT", 18); // (.")
}


// ================================================
// 0xf128: WORD 'UNK_0xf12a' codep=0x224c parp=0xf12a params=0 returns=0
// ================================================

void UNK_0xf12a() // UNK_0xf12a
{
  Push(Read16(pp_IsPORT)); // ?PORT @
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    CTERASE(); // CTERASE
    PRINT("WE CAN'T LAND HERE", 18); // (.")
    Push(0);
    return;
  }
  Push(Read16(pp_CONTEXT_3)==1?1:0); // CONTEXT_3 @ 1 =
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  UNK_0xf10d(); // UNK_0xf10d
  Push(0);
}


// ================================================
// 0xf167: WORD '(/LAUNCH/LAND)' codep=0x224c parp=0xf17a params=0 returns=1
// ================================================
// entry

void _ro__slash_LAUNCH_slash_LAND_rc_() // (/LAUNCH/LAND)
{
  Push(Read16(pp_CONTEXT_3)==1?1:0); // CONTEXT_3 @ 1 =
  if (Pop() != 0)
  {
    Push(5);
    Push(0xb77c); // probable 'OV?.EQ'
    MODULE(); // MODULE
  } else
  {
    Push(1);
  }
  if (Pop() != 0)
  {
    Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    SWAP(); // SWAP
    Push(Pop()==5?1:0); //  5 =
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      UNK_0xf05f(); // UNK_0xf05f
      Push(0);
    } else
    {
      UNK_0xf12a(); // UNK_0xf12a
    }
    return;
  }
  Push(0);
}


// ================================================
// 0xf1be: WORD 'UNK_0xf1c0' codep=0x1d29 parp=0xf1c0
// ================================================
// 0xf1c0: db 0x3a 0x20 ': '

// ================================================
// 0xf1c2: WORD 'UNK_0xf1c4' codep=0x224c parp=0xf1c4 params=1 returns=0
// ================================================

void UNK_0xf1c4() // UNK_0xf1c4
{
  Push(pp_UNK_0xf1c0); // UNK_0xf1c0
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf1ca: WORD 'UNK_0xf1cc' codep=0x224c parp=0xf1cc
// ================================================

void UNK_0xf1cc() // UNK_0xf1cc
{
  LoadData(UNK_0xe4f9); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  _st_(); // <
  Push(Read16(regsp)); // DUP
  Push(!Pop()); //  NOT
  UNK_0xf1c4(); // UNK_0xf1c4
}


// ================================================
// 0xf1dc: WORD 'UNK_0xf1de' codep=0x224c parp=0xf1de
// ================================================

void UNK_0xf1de() // UNK_0xf1de
{
  LoadData(UNK_0xe4f1); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(3);
  _gt_(); // >
  Push(Read16(regsp)); // DUP
  Push(!Pop()); //  NOT
  UNK_0xf1c4(); // UNK_0xf1c4
}


// ================================================
// 0xf1ee: WORD 'UNK_0xf1f0' codep=0x224c parp=0xf1f0
// ================================================

void UNK_0xf1f0() // UNK_0xf1f0
{
  LoadData(UNK_0xe4cc); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x0045);
  _gt_(); // >
  OVER(); // OVER
  Push(0x0083);
  _st_(); // <
  Push(Pop() + Pop()); // +
  UNK_0xf1c4(); // UNK_0xf1c4
  Push(0x00c8);
  _gt_(); // >
}


// ================================================
// 0xf210: WORD 'UNK_0xf212' codep=0x224c parp=0xf212
// ================================================

void UNK_0xf212() // UNK_0xf212
{
  LoadData(UNK_0xe4d4); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  OVER(); // OVER
  Push(3);
  _st_(); // <
  Push(Pop() + Pop()); // +
  UNK_0xf1c4(); // UNK_0xf1c4
  Push(2);
  _gt_(); // >
}


// ================================================
// 0xf22c: WORD 'UNK_0xf22e' codep=0x224c parp=0xf22e params=0 returns=1
// ================================================

void UNK_0xf22e() // UNK_0xf22e
{
  Push(Read16(pp_ATMO)); // ATMO @
  Push(0x000f);
  Push(0x0011);
  WITHIN(); // WITHIN
  Push(!(Pop() | (Read16(pp_HYDRO)==2?1:0))); //  HYDRO @ 2 = OR NOT
}


// ================================================
// 0xf24a: WORD 'UNK_0xf24c' codep=0x224c parp=0xf24c params=0 returns=1
// ================================================

void UNK_0xf24c() // UNK_0xf24c
{
  Push(!((Read16(pp_HYDRO)==5?1:0) | (Read16(pp_ATMO)==0x0015?1:0))); // HYDRO @ 5 = ATMO @ 0x0015 = OR NOT
}


// ================================================
// 0xf264: WORD 'UNK_0xf266' codep=0x224c parp=0xf266
// ================================================

void UNK_0xf266() // UNK_0xf266
{
  LoadData(UNK_0xe4dc); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _0_gt_(); // 0>
  UNK_0xf1c4(); // UNK_0xf1c4
}


// ================================================
// 0xf270: WORD 'UNK_0xf272' codep=0x224c parp=0xf272
// ================================================

void UNK_0xf272() // UNK_0xf272
{
  LoadData(UNK_0xe4e4); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(0x0032);
  _slash_(); // /
  MAX(); // MAX
  UNK_0xf1c4(); // UNK_0xf1c4
}


// ================================================
// 0xf288: WORD 'UNK_0xf28a' codep=0x224c parp=0xf28a
// ================================================

void UNK_0xf28a() // UNK_0xf28a
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("NAME THIS PLANET: ", 18); // (.")
  CTCR(); // CTCR
  Push(0x65e1+UNK_0xe51a.offset); // UNK_0xe51a<IFIELD>
  Push(0x000f);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(0x000f);
  Push(0xb6fd); // probable 'OV#IN$'
  MODULE(); // MODULE
  COUNT(); // COUNT
  Push(0x65e1+UNK_0xe51a.offset); // UNK_0xe51a<IFIELD>
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xf2c3: WORD 'UNK_0xf2c5' codep=0x224c parp=0xf2c5
// ================================================

void UNK_0xf2c5() // UNK_0xf2c5
{
  Push2Words("*OP");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002d);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x0024);
  Push(0);
  Push(1);
  _star_CREATE(); // *CREATE
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(0x65e1+UNK_0xe510.offset); // UNK_0xe510<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xf301: WORD 'UNK_0xf303' codep=0x224c parp=0xf303
// ================================================

void UNK_0xf303() // UNK_0xf303
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xf1de(); // UNK_0xf1de
  UNK_0xf1cc(); // UNK_0xf1cc
  Push(Pop() * 2); //  2*
  Push(Pop() | Pop()); // OR
  UNK_0xf1f0(); // UNK_0xf1f0
  Push(Pop() * 4); //  4 *
  Push(Pop() | Pop()); // OR
  UNK_0xe466(); // UNK_0xe466
  Push(Pop() * 0x0040); //  0x0040 *
  Push(Pop() | Pop()); // OR
  UNK_0xf212(); // UNK_0xf212
  Push(Pop() * 8); //  8 *
  Push(Pop() | Pop()); // OR
  UNK_0xf22e(); // UNK_0xf22e
  Push(Pop() >> 4); //  16*
  Push(Pop() | Pop()); // OR
  UNK_0xf24c(); // UNK_0xf24c
  Push(Pop() * 0x0020); //  0x0020 *
  Push(Pop() | Pop()); // OR
  Push(Pop() | Read16(pp_PAST) * 0x0080); //  PAST @ 0x0080 * OR
  UNK_0xf266(); // UNK_0xf266
  UNK_0xf272(); // UNK_0xf272
  ICLOSE(); // ICLOSE
  Push(0x65e1+UNK_0xe515.offset); // UNK_0xe515<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xf351: WORD 'UNK_0xf353' codep=0x224c parp=0xf353 params=0 returns=0
// ================================================

void UNK_0xf353() // UNK_0xf353
{
  Push(Read16(0x65e1+UNK_0xe515.offset)&0xFF); // UNK_0xe515<IFIELD> C@
  if (Pop() != 0)
  {
    Push(Read16(pp_UNK_0xe444)); // UNK_0xe444 @
    Push(8);
    MIN(); // MIN
    Push(Pop() * 0x000a); //  0x000a *
    Push(1);
    Push(pp_UNK_0xe444); // UNK_0xe444
    _plus__ex__2(); // +!_2
    SAVE_dash_OV(); // SAVE-OV
  } else
  {
    Push(Read16(pp_UNK_0xf1c0) * 5); // UNK_0xf1c0 @ 5 *
  }
  Push(0x65e1+UNK_0xe501.offset); // UNK_0xe501<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xf383: WORD 'UNK_0xf385' codep=0x224c parp=0xf385
// ================================================

void UNK_0xf385() // UNK_0xf385
{
  Push(pp_UNK_0xf1c0); // UNK_0xf1c0
  _099(); // 099
  UNK_0xf2c5(); // UNK_0xf2c5
  Push(Read16(pp_STARDAT)); // STARDAT @
  Push(0x65e1+UNK_0xe506.offset); // UNK_0xe506<IFIELD>
  Store_2(); // !_2
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(1);
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(0x65e1+UNK_0xe50b.offset); // UNK_0xe50b<IFIELD>
  Store_2(); // !_2
  UNK_0xf303(); // UNK_0xf303
  UNK_0xf353(); // UNK_0xf353
  UNK_0xf28a(); // UNK_0xf28a
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp_IsEVAL); // ?EVAL
  ON_2(); // ON_2
}


// ================================================
// 0xf3b9: WORD 'UNK_0xf3bb' codep=0x224c parp=0xf3bb
// ================================================

void UNK_0xf3bb() // UNK_0xf3bb
{
  UNK_0xf385(); // UNK_0xf385
  CTCR(); // CTCR
  PRINT("RECOMMENDATION LOGGED.", 22); // (.")
}


// ================================================
// 0xf3da: WORD 'UNK_0xf3dc' codep=0x224c parp=0xf3dc params=0 returns=1
// ================================================

void UNK_0xf3dc() // UNK_0xf3dc
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  BIT(); // BIT
  Push(Read16(regsp)); // DUP
  ICLOSE(); // ICLOSE
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  Push(Pop() & (Read16(0x65e1+UNK_0xe529.offset)&0xFF)); //  UNK_0xe529<IFIELD> C@ AND
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  Push(Pop() | Read16(0x65e1+UNK_0xe529.offset)&0xFF); //  UNK_0xe529<IFIELD> C@ OR
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    Pop(); // DROP
  } else
  {
    Push(0x65e1+UNK_0xe529.offset); // UNK_0xe529<IFIELD>
    C_ex__2(); // C!_2
  }
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    PRINT("THIS PLANET HAS ALREADY BEEN LOGGED.", 36); // (.")
  }
  Push(!Pop()); //  NOT
}


// ================================================
// 0xf441: WORD '(/LOG-PLAN)' codep=0x224c parp=0xf451
// ================================================
// entry

void _ro__slash_LOG_dash_PLAN_rc_() // (/LOG-PLAN)
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(pp__dash_AIN); // -AIN
  _099(); // 099
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  Push(2);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x000c);
  Push(0);
  IFIND(); // IFIND
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    PRINT("THE PLANET THAT STARPORT ORBITS IS", 34); // (.")
    GCR(); // GCR
    PRINT("DEFINITELY NOT COLONIZABLE!", 27); // (.")
  } else
  {
    Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
    Push(2);
    _st_(); // <
    if (Pop() != 0)
    {
      PRINT("RECOMMEND THIS PLANET FOR", 25); // (.")
      CTCR(); // CTCR
      PRINT("COLONIZATION\? [N Y]", 19); // (.")
      Y_slash_N(); // Y/N
      CTCR(); // CTCR
      if (Pop() != 0)
      {
        UNK_0xf3dc(); // UNK_0xf3dc
        if (Pop() != 0)
        {
          Push(0xc2cd); // probable 'I-TRANS'
          MODULE(); // MODULE
          Push(Read16(pp_STARDAT)); // STARDAT @
          Push(pp_PORTDAT); // PORTDAT
          Store_2(); // !_2
          UNK_0xf3bb(); // UNK_0xf3bb
        }
      }
    } else
    {
      UNK_0xf10d(); // UNK_0xf10d
    }
  }
  return;

  label1:
  UNK_0xf10d(); // UNK_0xf10d
}

// 0xf530: db 0x43 0x41 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x43 0x41 0x50 0x54 0x41 0x49 0x4e 0x20 0x2d 0x2d 0x2d 0x00 'CAP-VOC_________________________ for CAPTAIN --- '

