// ====== OVERLAY 'CAPTAIN' ======
// store offset = 0xde20
// overlay size   = 0x1740

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WDE36  codep:0x1d29 wordp:0xde36 size:0x0002 C-string:'WDE36'
//           WDE3A  codep:0x1d29 wordp:0xde3a size:0x0002 C-string:'WDE3A'
//           WDE3E  codep:0x1d29 wordp:0xde3e size:0x0004 C-string:'WDE3E'
//           WDE44  codep:0x1d29 wordp:0xde44 size:0x0006 C-string:'WDE44'
//           WDE4C  codep:0x1d29 wordp:0xde4c size:0x0006 C-string:'WDE4C'
//           WDE54  codep:0x1d29 wordp:0xde54 size:0x0006 C-string:'WDE54'
//           WDE5C  codep:0x1d29 wordp:0xde5c size:0x0006 C-string:'WDE5C'
//           WDE64  codep:0x3b68 wordp:0xde64 size:0x0004 C-string:'WDE64'
//           WDE6A  codep:0x3b68 wordp:0xde6a size:0x0004 C-string:'WDE6A'
//           WDE70  codep:0x1d29 wordp:0xde70 size:0x0002 C-string:'WDE70'
//           WDE74  codep:0x224c wordp:0xde74 size:0x0008 C-string:'WDE74'
//           WDE7E  codep:0x224c wordp:0xde7e size:0x003c C-string:'WDE7E'
//           WDEBC  codep:0x224c wordp:0xdebc size:0x0080 C-string:'WDEBC'
//           WDF3E  codep:0x224c wordp:0xdf3e size:0x0076 C-string:'WDF3E'
//           WDFB6  codep:0x224c wordp:0xdfb6 size:0x0046 C-string:'WDFB6'
//           WDFFE  codep:0x744d wordp:0xdffe size:0x0003 C-string:'WDFFE'
//           WE003  codep:0x224c wordp:0xe003 size:0x0037 C-string:'WE003'
//           WE03C  codep:0x73ea wordp:0xe03c size:0x0006 C-string:'WE03C'
//           WE044  codep:0x73ea wordp:0xe044 size:0x0006 C-string:'WE044'
//           WE04C  codep:0x73ea wordp:0xe04c size:0x0006 C-string:'WE04C'
//           WE054  codep:0x744d wordp:0xe054 size:0x0003 C-string:'WE054'
//           WE059  codep:0x73ea wordp:0xe059 size:0x0006 C-string:'WE059'
//           WE061  codep:0x73ea wordp:0xe061 size:0x0006 C-string:'WE061'
//           WE069  codep:0x73ea wordp:0xe069 size:0x0006 C-string:'WE069'
//           WE071  codep:0x73ea wordp:0xe071 size:0x0006 C-string:'WE071'
//           WE079  codep:0x73ea wordp:0xe079 size:0x0006 C-string:'WE079'
//           WE081  codep:0x744d wordp:0xe081 size:0x0003 C-string:'WE081'
//           WE086  codep:0x73ea wordp:0xe086 size:0x0006 C-string:'WE086'
//           WE08E  codep:0x73ea wordp:0xe08e size:0x0006 C-string:'WE08E'
//           WE096  codep:0x744d wordp:0xe096 size:0x0003 C-string:'WE096'
//           WE09B  codep:0x744d wordp:0xe09b size:0x0003 C-string:'WE09B'
//           WE0A0  codep:0x744d wordp:0xe0a0 size:0x0003 C-string:'WE0A0'
//           WE0A5  codep:0x744d wordp:0xe0a5 size:0x0003 C-string:'WE0A5'
//           WE0AA  codep:0x744d wordp:0xe0aa size:0x0003 C-string:'WE0AA'
//           WE0AF  codep:0x744d wordp:0xe0af size:0x0003 C-string:'WE0AF'
//           WE0B4  codep:0x744d wordp:0xe0b4 size:0x0003 C-string:'WE0B4'
//           WE0B9  codep:0x744d wordp:0xe0b9 size:0x0003 C-string:'WE0B9'
//           WE0BE  codep:0x744d wordp:0xe0be size:0x0003 C-string:'WE0BE'
//           WE0C3  codep:0x744d wordp:0xe0c3 size:0x0003 C-string:'WE0C3'
//           WE0C8  codep:0x744d wordp:0xe0c8 size:0x0003 C-string:'WE0C8'
//           WE0CD  codep:0x744d wordp:0xe0cd size:0x0003 C-string:'WE0CD'
//           WE0D2  codep:0x744d wordp:0xe0d2 size:0x0003 C-string:'WE0D2'
//           WE0D7  codep:0x1d29 wordp:0xe0d7 size:0x0002 C-string:'WE0D7'
//           WE0DB  codep:0x224c wordp:0xe0db size:0x000a C-string:'WE0DB'
//           WE0E7  codep:0x224c wordp:0xe0e7 size:0x0010 C-string:'WE0E7'
//           WE0F9  codep:0x224c wordp:0xe0f9 size:0x0030 C-string:'WE0F9'
//           WE12B  codep:0x224c wordp:0xe12b size:0x0060 C-string:'WE12B'
//           WE18D  codep:0x224c wordp:0xe18d size:0x0022 C-string:'WE18D'
//           WE1B1  codep:0x224c wordp:0xe1b1 size:0x0052 C-string:'WE1B1'
//           WE205  codep:0x224c wordp:0xe205 size:0x000c C-string:'WE205'
//           WE213  codep:0x224c wordp:0xe213 size:0x0026 C-string:'WE213'
//           WE23B  codep:0x224c wordp:0xe23b size:0x0018 C-string:'WE23B'
//           WE255  codep:0x224c wordp:0xe255 size:0x003a C-string:'WE255'
//           WE291  codep:0x224c wordp:0xe291 size:0x0046 C-string:'WE291'
//        CHAR>SCR  codep:0x4a4f wordp:0xe2e4 size:0x0010 C-string:'CHAR_gt_SCR'
//           WE2F6  codep:0x224c wordp:0xe2f6 size:0x0056 C-string:'WE2F6'
//           WE34E  codep:0x224c wordp:0xe34e size:0x0044 C-string:'WE34E'
//           WE394  codep:0x224c wordp:0xe394 size:0x0020 C-string:'WE394'
//           WE3B6  codep:0x224c wordp:0xe3b6 size:0x0022 C-string:'WE3B6'
//           WE3DA  codep:0x224c wordp:0xe3da size:0x0044 C-string:'WE3DA'
//     (/CAPT-LOG)  codep:0x224c wordp:0xe42e size:0x0032 C-string:'_ro__slash_CAPT_dash_LOG_rc_'
//           WE462  codep:0x224c wordp:0xe462 size:0x0006 C-string:'WE462'
//           WE46A  codep:0x224c wordp:0xe46a size:0x0010 C-string:'WE46A'
//           WE47C  codep:0x224c wordp:0xe47c size:0x0010 C-string:'WE47C'
//           WE48E  codep:0x224c wordp:0xe48e size:0x000e C-string:'WE48E'
//           WE49E  codep:0x224c wordp:0xe49e size:0x000e C-string:'WE49E'
//           WE4AE  codep:0x224c wordp:0xe4ae size:0x0032 C-string:'WE4AE'
//           WE4E2  codep:0x224c wordp:0xe4e2 size:0x000a C-string:'WE4E2'
//           WE4EE  codep:0x224c wordp:0xe4ee size:0x002a C-string:'WE4EE'
//           WE51A  codep:0x224c wordp:0xe51a size:0x0036 C-string:'WE51A'
//           WE552  codep:0x224c wordp:0xe552 size:0x0010 C-string:'WE552'
//           WE564  codep:0x224c wordp:0xe564 size:0x0016 C-string:'WE564'
//       TD-SCROLL  codep:0x4a4f wordp:0xe588 size:0x000c C-string:'TD_dash_SCROLL'
//           WE596  codep:0x224c wordp:0xe596 size:0x002e C-string:'WE596'
//           WE5C6  codep:0x224c wordp:0xe5c6 size:0x0027 C-string:'WE5C6'
//           WE5EF  codep:0x224c wordp:0xe5ef size:0x0042 C-string:'WE5EF'
//           WE633  codep:0x224c wordp:0xe633 size:0x0056 C-string:'WE633'
//           WE68B  codep:0x224c wordp:0xe68b size:0x003c C-string:'WE68B'
//           WE6C9  codep:0x224c wordp:0xe6c9 size:0x0014 C-string:'WE6C9'
//           WE6DF  codep:0x224c wordp:0xe6df size:0x0028 C-string:'WE6DF'
//           WE709  codep:0x224c wordp:0xe709 size:0x0030 C-string:'WE709'
//           WE73B  codep:0x224c wordp:0xe73b size:0x002a C-string:'WE73B'
//           WE767  codep:0x224c wordp:0xe767 size:0x008e C-string:'WE767'
//           WE7F7  codep:0x224c wordp:0xe7f7 size:0x002a C-string:'WE7F7'
//           WE823  codep:0x224c wordp:0xe823 size:0x00c4 C-string:'WE823'
//           WE8E9  codep:0x224c wordp:0xe8e9 size:0x001c C-string:'WE8E9'
//           WE907  codep:0x224c wordp:0xe907 size:0x0029 C-string:'WE907'
//           WE932  codep:0x224c wordp:0xe932 size:0x003c C-string:'WE932'
//           WE970  codep:0x224c wordp:0xe970 size:0x0048 C-string:'WE970'
//           WE9BA  codep:0x224c wordp:0xe9ba size:0x0026 C-string:'WE9BA'
//           WE9E2  codep:0x224c wordp:0xe9e2 size:0x0030 C-string:'WE9E2'
//           WEA14  codep:0x224c wordp:0xea14 size:0x004c C-string:'WEA14'
//           WEA62  codep:0x224c wordp:0xea62 size:0x0090 C-string:'WEA62'
//           WEAF4  codep:0x224c wordp:0xeaf4 size:0x001e C-string:'WEAF4'
//           WEB14  codep:0x224c wordp:0xeb14 size:0x006c C-string:'WEB14'
//           WEB82  codep:0x224c wordp:0xeb82 size:0x001a C-string:'WEB82'
//           WEB9E  codep:0x224c wordp:0xeb9e size:0x0020 C-string:'WEB9E'
//           WEBC0  codep:0x224c wordp:0xebc0 size:0x0026 C-string:'WEBC0'
//           WEBE8  codep:0x224c wordp:0xebe8 size:0x0022 C-string:'WEBE8'
//           WEC0C  codep:0x224c wordp:0xec0c size:0x0022 C-string:'WEC0C'
//           WEC30  codep:0x224c wordp:0xec30 size:0x002e C-string:'WEC30'
//           WEC60  codep:0x224c wordp:0xec60 size:0x0011 C-string:'WEC60'
//           WEC73  codep:0x224c wordp:0xec73 size:0x006a C-string:'WEC73'
//           WECDF  codep:0x224c wordp:0xecdf size:0x0014 C-string:'WECDF'
//           WECF5  codep:0x224c wordp:0xecf5 size:0x001a C-string:'WECF5'
//       1STOPTION  codep:0x4a4f wordp:0xed1d size:0x0018 C-string:'_1STOPTION'
//           WED37  codep:0x1d29 wordp:0xed37 size:0x0002 C-string:'WED37'
//           WED3B  codep:0x1d29 wordp:0xed3b size:0x0002 C-string:'WED3B'
//       DO-OPTION  codep:0x224c wordp:0xed4b size:0x0016 C-string:'DO_dash_OPTION'
//           WED63  codep:0x224c wordp:0xed63 size:0x0010 C-string:'WED63'
//           WED75  codep:0x224c wordp:0xed75 size:0x0014 C-string:'WED75'
//           WED8B  codep:0x224c wordp:0xed8b size:0x001b C-string:'WED8B'
//           WEDA8  codep:0x224c wordp:0xeda8 size:0x0024 C-string:'WEDA8'
//    ITEM-OPTIONS  codep:0x4a4f wordp:0xeddd size:0x0018 C-string:'ITEM_dash_OPTIONS'
//           WEDF7  codep:0x224c wordp:0xedf7 size:0x0051 C-string:'WEDF7'
//           WEE4A  codep:0x224c wordp:0xee4a size:0x00a6 C-string:'WEE4A'
//           WEEF2  codep:0x224c wordp:0xeef2 size:0x0024 C-string:'WEEF2'
//        (/ITEMS)  codep:0x224c wordp:0xef23 size:0x0088 C-string:'_ro__slash_ITEMS_rc_'
//           WEFAD  codep:0x224c wordp:0xefad size:0x0010 C-string:'WEFAD'
//           WEFBF  codep:0x224c wordp:0xefbf size:0x0008 C-string:'WEFBF'
//        >DESCEND  codep:0x224c wordp:0xefd4 size:0x0031 C-string:'_gt_DESCEND'
//           WF007  codep:0x224c wordp:0xf007 size:0x00c4 C-string:'WF007'
//           WF0CD  codep:0x224c wordp:0xf0cd size:0x001b C-string:'WF0CD'
//           WF0EA  codep:0x224c wordp:0xf0ea size:0x0040 C-string:'WF0EA'
//  (/LAUNCH/LAND)  codep:0x224c wordp:0xf13d size:0x004e C-string:'_ro__slash_LAUNCH_slash_LAND_rc_'
//           WF18D  codep:0x1d29 wordp:0xf18d size:0x0002 C-string:'WF18D'
//           WF191  codep:0x224c wordp:0xf191 size:0x0006 C-string:'WF191'
//           WF199  codep:0x224c wordp:0xf199 size:0x0010 C-string:'WF199'
//           WF1AB  codep:0x224c wordp:0xf1ab size:0x0010 C-string:'WF1AB'
//           WF1BD  codep:0x224c wordp:0xf1bd size:0x0020 C-string:'WF1BD'
//           WF1DF  codep:0x224c wordp:0xf1df size:0x001a C-string:'WF1DF'
//           WF1FB  codep:0x224c wordp:0xf1fb size:0x001c C-string:'WF1FB'
//           WF219  codep:0x224c wordp:0xf219 size:0x0018 C-string:'WF219'
//           WF233  codep:0x224c wordp:0xf233 size:0x000a C-string:'WF233'
//           WF23F  codep:0x224c wordp:0xf23f size:0x0016 C-string:'WF23F'
//           WF257  codep:0x224c wordp:0xf257 size:0x0039 C-string:'WF257'
//           WF292  codep:0x224c wordp:0xf292 size:0x0038 C-string:'WF292'
//           WF2CC  codep:0x1d29 wordp:0xf2cc size:0x0002 C-string:'WF2CC'
//           WF2D0  codep:0x224c wordp:0xf2d0 size:0x003c C-string:'WF2D0'
//           WF30E  codep:0x224c wordp:0xf30e size:0x0038 C-string:'WF30E'
//           WF348  codep:0x224c wordp:0xf348 size:0x0030 C-string:'WF348'
//           WF37A  codep:0x224c wordp:0xf37a size:0x0036 C-string:'WF37A'
//           WF3B2  codep:0x224c wordp:0xf3b2 size:0x001f C-string:'WF3B2'
//           WF3D3  codep:0x224c wordp:0xf3d3 size:0x0057 C-string:'WF3D3'
//     (/LOG-PLAN)  codep:0x224c wordp:0xf43a size:0x0000 C-string:'_ro__slash_LOG_dash_PLAN_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp_HYDRO; // HYDRO
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_IsEVAL; // ?EVAL
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_PORTDAT; // PORTDAT
extern const unsigned short int pp_IsPORT; // ?PORT
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp__i_LAUNCH; // 'LAUNCH
extern const unsigned short int pp_CTX; // CTX
extern const unsigned short int pp_CTY; // CTY
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_Is12; // ?12
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp__i_EXTERNAL_dash_EVENTS; // 'EXTERNAL-EVENTS
extern const unsigned short int pp_E_dash_USE; // E-USE
extern const unsigned short int pp_IsSECURE; // ?SECURE
extern const unsigned short int pp__10_star_CARGO; // 10*CARGO
extern const unsigned short int pp_STIME; // STIME
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp__ro_SYSTEM_rc_; // (SYSTEM)
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern const unsigned short int pp__ro_THIS_dash_I; // (THIS-I
extern const unsigned short int pp_LSCAN; // LSCAN
extern LoadDataType _1BTN; // 1BTN
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color DK_dash_GREEN; // DK-GREEN
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SPECIES; // INST-SPECIES
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType PHRASE_dash_MEM; // PHRASE-MEM
extern IFieldType TEXT_dash_CO; // TEXT-CO
extern IFieldType TEXT_dash_IN; // TEXT-IN
extern IFieldType TEXT_dash_TE; // TEXT-TE
void COUNT(); // COUNT
void _star__slash_(); // */
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void PAD(); // PAD
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void DrawR(); // .R
void SPACES(); // SPACES
void MS(); // MS
void NOP(); // NOP
void PICK(); // PICK
void _2OVER(); // 2OVER
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMAX(); // DMAX
void BIT(); // BIT
void _3_star_(); // 3*
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void _do__eq_(); // $=
void StoreINST_dash_SPECIES(); // !INST-SPECIES
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void CI_i_(); // CI'
void IsCHILD(); // ?CHILD
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
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
void SAVE_dash_OVERLAY(); // SAVE-OVERLAY
void StoreCOLOR(); // !COLOR
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void DARK(); // DARK
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_ICON(); // POINT>ICON
void IsICONS_dash_AT(); // ?ICONS-AT
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void WINDOW(); // WINDOW
void WLINE_dash_UP(); // WLINE-UP
void WLINE_dash_D(); // WLINE-D
void GCR(); // GCR
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void ERASE_dash_T(); // ERASE-T
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsQUIT(); // ?QUIT
void Y_slash_N(); // Y/N
void CURSORSPACE(); // CURSORSPACE
void SUBROOT(); // SUBROOT
void U_gt__do_(); // U>$
void TEXT_gt_PA(); // TEXT>PA
void DATE_do__gt_ADR(); // DATE$>ADR
void BOX_gt_LIS(); // BOX>LIS
void GET_dash_BOX(); // GET-BOX
void MAKE_dash_SC(); // MAKE-SC
void delete_dash_scroll_dash_box(); // delete-scroll-box
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
void DNEGATE(); // DNEGATE
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void _plus__dash__at_(); // +-@
void CI(); // CI
void LLINE(); // LLINE
void V_gt_DISPLAY(); // V>DISPLAY
void _ro_XYSCAN_rc_(); // (XYSCAN)


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WDE36 = 0xde36; // WDE36 size: 2
// {0x00, 0x00}

const unsigned short int pp_WDE3A = 0xde3a; // WDE3A size: 2
// {0x00, 0x00}

const unsigned short int pp_WDE3E = 0xde3e; // WDE3E size: 4
// {0x56, 0x3a, 0x20, 0x58}

const unsigned short int pp_WDE44 = 0xde44; // WDE44 size: 6
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c}

const unsigned short int pp_WDE4C = 0xde4c; // WDE4C size: 6
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c}

const unsigned short int pp_WDE54 = 0xde54; // WDE54 size: 6
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c}

const unsigned short int pp_WDE5C = 0xde5c; // WDE5C size: 6
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c}

const unsigned short int pp_WDE70 = 0xde70; // WDE70 size: 2
// {0x77, 0x00}

const unsigned short int pp_WE0D7 = 0xe0d7; // WE0D7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WED37 = 0xed37; // WED37 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WED3B = 0xed3b; // WED3B size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF18D = 0xf18d; // WF18D size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF2CC = 0xf2cc; // WF2CC size: 2
// {0x00, 0x00}




// 0xde32: db 0x6d 0x01 'm '

// ================================================
// 0xde34: WORD 'WDE36' codep=0x1d29 wordp=0xde36
// ================================================
// 0xde36: db 0x00 0x00 '  '

// ================================================
// 0xde38: WORD 'WDE3A' codep=0x1d29 wordp=0xde3a
// ================================================
// 0xde3a: db 0x00 0x00 '  '

// ================================================
// 0xde3c: WORD 'WDE3E' codep=0x1d29 wordp=0xde3e
// ================================================
// 0xde3e: db 0x56 0x3a 0x20 0x58 'V: X'

// ================================================
// 0xde42: WORD 'WDE44' codep=0x1d29 wordp=0xde44
// ================================================
// 0xde44: db 0x3a 0x20 0x05 0x41 0x4c 0x4c ':  ALL'

// ================================================
// 0xde4a: WORD 'WDE4C' codep=0x1d29 wordp=0xde4c
// ================================================
// 0xde4c: db 0x3a 0x20 0x05 0x41 0x4c 0x4c ':  ALL'

// ================================================
// 0xde52: WORD 'WDE54' codep=0x1d29 wordp=0xde54
// ================================================
// 0xde54: db 0x3a 0x20 0x05 0x41 0x4c 0x4c ':  ALL'

// ================================================
// 0xde5a: WORD 'WDE5C' codep=0x1d29 wordp=0xde5c
// ================================================
// 0xde5c: db 0x3a 0x20 0x05 0x41 0x4c 0x4c ':  ALL'

// ================================================
// 0xde62: WORD 'WDE64' codep=0x3b68 wordp=0xde64
// ================================================
// 0xde64: dw 0x004c 0x0004

// ================================================
// 0xde68: WORD 'WDE6A' codep=0x3b68 wordp=0xde6a
// ================================================
// 0xde6a: dw 0x00c0 0x0048

// ================================================
// 0xde6e: WORD 'WDE70' codep=0x1d29 wordp=0xde70
// ================================================
// 0xde70: db 0x77 0x00 'w '

// ================================================
// 0xde72: WORD 'WDE74' codep=0x224c wordp=0xde74 params=0 returns=0
// ================================================

void WDE74() // WDE74
{
  Push(0xbdd8); // 'OV?ARTIFACT'
  MODULE(); // MODULE
}


// ================================================
// 0xde7c: WORD 'WDE7E' codep=0x224c wordp=0xde7e params=10 returns=2
// ================================================

void WDE7E() // WDE7E
{
  unsigned short int a, i, imax, b, c;
  StoreCOLOR(); // !COLOR
  a = Pop(); // >R

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(Read16(i + a)&0xFF); // I J + C@
    Push(Read16((i + a) + 1)&0xFF); // I J + 1+ C@
    _2DUP(); // 2DUP
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(a); // R>
  Pop(); // DROP
  b = Pop(); // >R
  c = Pop(); // >R
  LLINE(); // LLINE
  LLINE(); // LLINE
  Push(c); // R>
  Push(b); // R>
  LLINE(); // LLINE
  Push(5);
  MS(); // MS
}


// ================================================
// 0xdeba: WORD 'WDEBC' codep=0x224c wordp=0xdebc params=2 returns=0
// ================================================

void WDEBC() // WDEBC
{
  unsigned short int i, imax;

  i = 0;
  imax = 6;
  do // (DO)
  {
    OVER(); // OVER
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    OVER(); // OVER
    Push(Pop() + i); //  I +
    _plus__dash__at_(); // +-@
    Push(Pop() + Pop()); // +
    Push(Read16(regsp)); // DUP
    Push(i); // I
    Push(2);
    MOD(); // MOD
    if (Pop() != 0)
    {
      Push2Words("WDE6A");
    } else
    {
      Push2Words("WDE64");
    }
    WITHIN(); // WITHIN
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      OVER(); // OVER
      Push(Pop() + i); //  I +
      Push(Read16(regsp)); // DUP
      Push(-(Read16(Pop())&0xFF)); //  C@ NEGATE
      Push(Read16(regsp)); // DUP
      ROT(); // ROT
      C_ex_(); // C!
      Push(Pop() * 2); //  2*
      Push(Pop() + Pop()); // +
      Push(0);
      Push(0x0064);
      RRND(); // RRND
      Push(0x000a);
      _st_(); // <
      if (Pop() != 0)
      {
        Push(1);
        Push(0x0010);
        RRND(); // RRND
        Push(Read16(regsp)); // DUP
        Push(Pop() >> 4); //  16*
        Push(Pop() + Pop()); // +
        Push(pp_WDE70); // WDE70
        Store_3(); // !_3
      }
    }
    Push(3);
    PICK(); // PICK
    Push(Pop() + i); //  I +
    C_ex_(); // C!
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xdf3c: WORD 'WDF3E' codep=0x224c wordp=0xdf3e params=0 returns=0
// ================================================

void WDF3E() // WDF3E
{
  unsigned short int i, imax;

  i = 0;
  imax = 6;
  do // (DO)
  {
    Push(-3);
    Push(4);
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(pp_WDE54 + i); // WDE54 I +
    C_ex_(); // C!
    Push(pp_WDE5C + i); // WDE5C I +
    C_ex_(); // C!
    Push(-3);
    Push(4);
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(pp_WDE54 + (i + 1)); // WDE54 I 1+ +
    C_ex_(); // C!
    Push(pp_WDE5C + (i + 1)); // WDE5C I 1+ +
    C_ex_(); // C!
    Push2Words("WDE64");
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(pp_WDE44 + i); // WDE44 I +
    C_ex_(); // C!
    Push(pp_WDE4C + i); // WDE4C I +
    C_ex_(); // C!
    Push2Words("WDE6A");
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(pp_WDE44 + (i + 1)); // WDE44 I 1+ +
    C_ex_(); // C!
    Push(pp_WDE4C + (i + 1)); // WDE4C I 1+ +
    C_ex_(); // C!
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xdfb4: WORD 'WDFB6' codep=0x224c wordp=0xdfb6
// ================================================

void WDFB6() // WDFB6
{
  unsigned short int i, imax;
  WDF3E(); // WDF3E
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY

  i = 0;
  imax = 0x000a;
  do // (DO)
  {
    Push(pp_WDE44); // WDE44
    Push(Read16(pp_WDE70)); // WDE70 @
    WDE7E(); // WDE7E
    Push(pp_WDE44); // WDE44
    Push(pp_WDE54); // WDE54
    WDEBC(); // WDEBC
    i++;
  } while(i<imax); // (LOOP)

  do
  {
    Push(pp_WDE44); // WDE44
    Push(Read16(pp_WDE70)); // WDE70 @
    WDE7E(); // WDE7E
    Push(pp_WDE44); // WDE44
    Push(pp_WDE54); // WDE54
    WDEBC(); // WDEBC
    Push(pp_WDE4C); // WDE4C
    GetColor(BLACK);
    WDE7E(); // WDE7E
    Push(pp_WDE4C); // WDE4C
    Push(pp_WDE5C); // WDE5C
    WDEBC(); // WDEBC
    _i_KEY(); // 'KEY
  } while(Pop() == 0);
}


// ================================================
// 0xdffc: WORD 'WDFFE' codep=0x744d wordp=0xdffe
// ================================================
IFieldType WDFFE = {CAPT_LOGIDX, 0x0b, 0x24};

// ================================================
// 0xe001: WORD 'WE003' codep=0x224c wordp=0xe003 params=0 returns=0
// ================================================

void WE003() // WE003
{
  IFIRST(); // IFIRST
  Push(0x63ef+WDFFE.offset); // WDFFE<IFIELD>
  PAD(); // PAD
  Push(Pop() + 1); //  1+
  Push(8);
  CMOVE(); // CMOVE
  Push(8);
  PAD(); // PAD
  C_ex_(); // C!
  SET_STR_AS_PARAM("ATARAXIA");
  Pop(); // DROP
  Push(Pop() - 1); //  1-
  PAD(); // PAD
  _do__eq_(); // $=
  if (Pop() != 0)
  {
    Push(0x63ef+WDFFE.offset); // WDFFE<IFIELD>
    Push(8);
    Push(Read16(cc_BL)); // BL
    FILL_1(); // FILL_1
    WDFB6(); // WDFB6
  }
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xe03a: WORD 'WE03C' codep=0x73ea wordp=0xe03c
// ================================================
LoadDataType WE03C = {ARTIFACTIDX, 0x18, 0x01, 0x1e, 0x652c};

// ================================================
// 0xe042: WORD 'WE044' codep=0x73ea wordp=0xe044
// ================================================
LoadDataType WE044 = {ARTIFACTIDX, 0x1d, 0x01, 0x1e, 0x652c};

// ================================================
// 0xe04a: WORD 'WE04C' codep=0x73ea wordp=0xe04c
// ================================================
LoadDataType WE04C = {ANALYZE_TEXTIDX, 0x00, 0xbe, 0xbe, 0x6790};

// ================================================
// 0xe052: WORD 'WE054' codep=0x744d wordp=0xe054
// ================================================
IFieldType WE054 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xe057: WORD 'WE059' codep=0x73ea wordp=0xe059
// ================================================
// orphan
LoadDataType WE059 = {PLANETIDX, 0x07, 0x02, 0x16, 0x658f};

// ================================================
// 0xe05f: WORD 'WE061' codep=0x73ea wordp=0xe061
// ================================================
LoadDataType WE061 = {PLANETIDX, 0x02, 0x02, 0x16, 0x658f};

// ================================================
// 0xe067: WORD 'WE069' codep=0x73ea wordp=0xe069
// ================================================
LoadDataType WE069 = {PLANETIDX, 0x11, 0x02, 0x16, 0x658f};

// ================================================
// 0xe06f: WORD 'WE071' codep=0x73ea wordp=0xe071
// ================================================
LoadDataType WE071 = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xe077: WORD 'WE079' codep=0x73ea wordp=0xe079
// ================================================
LoadDataType WE079 = {PLANETIDX, 0x09, 0x01, 0x16, 0x658f};

// ================================================
// 0xe07f: WORD 'WE081' codep=0x744d wordp=0xe081
// ================================================
IFieldType WE081 = {VESSELIDX, 0x12, 0x07};

// ================================================
// 0xe084: WORD 'WE086' codep=0x73ea wordp=0xe086
// ================================================
LoadDataType WE086 = {PLANETIDX, 0x0f, 0x02, 0x16, 0x658f};

// ================================================
// 0xe08c: WORD 'WE08E' codep=0x73ea wordp=0xe08e
// ================================================
LoadDataType WE08E = {PLANETIDX, 0x10, 0x01, 0x16, 0x658f};

// ================================================
// 0xe094: WORD 'WE096' codep=0x744d wordp=0xe096
// ================================================
IFieldType WE096 = {EVALUATIONIDX, 0x0a, 0x01};

// ================================================
// 0xe099: WORD 'WE09B' codep=0x744d wordp=0xe09b
// ================================================
IFieldType WE09B = {EVALUATIONIDX, 0x0b, 0x02};

// ================================================
// 0xe09e: WORD 'WE0A0' codep=0x744d wordp=0xe0a0
// ================================================
IFieldType WE0A0 = {EVALUATIONIDX, 0x11, 0x02};

// ================================================
// 0xe0a3: WORD 'WE0A5' codep=0x744d wordp=0xe0a5
// ================================================
IFieldType WE0A5 = {EVALUATIONIDX, 0x13, 0x01};

// ================================================
// 0xe0a8: WORD 'WE0AA' codep=0x744d wordp=0xe0aa
// ================================================
IFieldType WE0AA = {EVALUATIONIDX, 0x14, 0x01};

// ================================================
// 0xe0ad: WORD 'WE0AF' codep=0x744d wordp=0xe0af
// ================================================
IFieldType WE0AF = {EVALUATIONIDX, 0x15, 0x0f};

// ================================================
// 0xe0b2: WORD 'WE0B4' codep=0x744d wordp=0xe0b4
// ================================================
// orphan
IFieldType WE0B4 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xe0b7: WORD 'WE0B9' codep=0x744d wordp=0xe0b9
// ================================================
IFieldType WE0B9 = {DIRECTORYIDX, 0x13, 0x02};

// ================================================
// 0xe0bc: WORD 'WE0BE' codep=0x744d wordp=0xe0be
// ================================================
IFieldType WE0BE = {STARSYSTEMIDX, 0x12, 0x01};

// ================================================
// 0xe0c1: WORD 'WE0C3' codep=0x744d wordp=0xe0c3
// ================================================
IFieldType WE0C3 = {DIRECTORYIDX, 0x15, 0x01};

// ================================================
// 0xe0c6: WORD 'WE0C8' codep=0x744d wordp=0xe0c8
// ================================================
IFieldType WE0C8 = {DIRECTORYIDX, 0x16, 0x01};

// ================================================
// 0xe0cb: WORD 'WE0CD' codep=0x744d wordp=0xe0cd
// ================================================
IFieldType WE0CD = {DIRECTORYIDX, 0x17, 0x01};

// ================================================
// 0xe0d0: WORD 'WE0D2' codep=0x744d wordp=0xe0d2
// ================================================
IFieldType WE0D2 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe0d5: WORD 'WE0D7' codep=0x1d29 wordp=0xe0d7
// ================================================
// 0xe0d7: db 0x3a 0x20 ': '

// ================================================
// 0xe0d9: WORD 'WE0DB' codep=0x224c wordp=0xe0db params=2 returns=0
// ================================================

void WE0DB() // WE0DB
{
  CTPOS_dot_(); // CTPOS.
  Push(-1);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe0e5: WORD 'WE0E7' codep=0x224c wordp=0xe0e7 params=0 returns=0
// ================================================

void WE0E7() // WE0E7
{
  Push(0x0032);
  Push(4);
  Push(7);
  Push(0x0024);
  WINDOW(); // WINDOW
}


// ================================================
// 0xe0f7: WORD 'WE0F9' codep=0x224c wordp=0xe0f9 params=0 returns=0
// ================================================

void WE0F9() // WE0F9
{
  unsigned short int i, imax;
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  CI(); // CI

  i = 0;
  imax = Read16(pp_WLINES); // WLINES @
  do // (DO)
  {
    Push(0);
    Push(i); // I
    WE0DB(); // WE0DB
    Push(0x63ef+WDFFE.offset); // WDFFE<IFIELD>
    Push(0x0024);
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push2Words("NULL");
  WE0DB(); // WE0DB
}


// ================================================
// 0xe129: WORD 'WE12B' codep=0x224c wordp=0xe12b params=0 returns=0
// ================================================

void WE12B() // WE12B
{
  GetColor(WHITE);
  ERASE_dash_T(); // ERASE-T
  WE0E7(); // WE0E7
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(0x0094);
  Push(0x0033);
  OVER(); // OVER
  Push(1);
  LLINE(); // LLINE
  Push(0x0033);
  Push(0x0095);
  Push(1);
  Push(0x009e);
  GetColor(DK_dash_BLUE);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  CTINIT(); // CTINIT
  Push(0x0098);
  Push(Read16(regsp)); // DUP
  Push(0x0026);
  POS_dot_(); // POS.
  PRINT("E", 1); // (.")
  Push(Read16(regsp)); // DUP
  Push(0x001f);
  POS_dot_(); // POS.
  PRINT("X", 1); // (.")
  Push(Read16(regsp)); // DUP
  Push(0x0018);
  POS_dot_(); // POS.
  PRINT("I", 1); // (.")
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("T", 1); // (.")
}


// ================================================
// 0xe18b: WORD 'WE18D' codep=0x224c wordp=0xe18d params=0 returns=0
// ================================================

void WE18D() // WE18D
{
  PAD(); // PAD
  Push(0x0024);
  Push(0x0020);
  FILL_1(); // FILL_1
  Push(0x0024);
  PAD(); // PAD
  C_ex_(); // C!
  Push(0x63ef+WDFFE.offset); // WDFFE<IFIELD>
  PAD(); // PAD
  Push(Pop() + 1); //  1+
  Push(0x0024);
  CMOVE(); // CMOVE
}


// ================================================
// 0xe1af: WORD 'WE1B1' codep=0x224c wordp=0xe1b1 params=1 returns=0
// ================================================

void WE1B1() // WE1B1
{
  Push(Read16(pp_CTX)); // CTX @
  Push(Read16(pp_CTY)); // CTY @
  CTINIT(); // CTINIT
  PRINT("#", 1); // (.")
  WE0DB(); // WE0DB
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(1);
  Push(pp_CTX); // CTX
  _plus__ex__2(); // +!_2
  Push(Read16(pp_CTX)==0x0024?1:0); // CTX @ 0x0024 =
  if (Pop() == 0) return;
  INEXT(); // INEXT
  Push(Read16(pp_CTY)==6?1:0); // CTY @ 6 =
  if (Pop() != 0)
  {
    GetColor(BLACK);
    StoreCOLOR(); // !COLOR
    WE18D(); // WE18D
    PAD(); // PAD
    WLINE_dash_UP(); // WLINE-UP
    GetColor(WHITE);
    StoreCOLOR(); // !COLOR
  }
  CTCR(); // CTCR
}


// ================================================
// 0xe203: WORD 'WE205' codep=0x224c wordp=0xe205 params=1 returns=0
// ================================================

void WE205() // WE205
{
  Push((0x63ef+WDFFE.offset) + Read16(pp_CTX)); // WDFFE<IFIELD> CTX @ +
  C_ex_(); // C!
}


// ================================================
// 0xe211: WORD 'WE213' codep=0x224c wordp=0xe213 params=1 returns=0
// ================================================

void WE213() // WE213
{
  unsigned short int a;
  Push(Pop() & 0x007f); //  0x007f AND
  a = Pop(); // >R
  Push(a); // I
  Push(0x0020);
  Push(0x005b);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(a); // I
    WE205(); // WE205
    Push(a); // I
    WE1B1(); // WE1B1
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe239: WORD 'WE23B' codep=0x224c wordp=0xe23b params=1 returns=0
// ================================================

void WE23B() // WE23B
{
  Pop(); // DROP
  Push(Read16(pp_CTX) + 4); // CTX @ 4 +
  Push(0x0023);
  MIN(); // MIN
  Push(Read16(pp_CTY)); // CTY @
  WE0DB(); // WE0DB
}


// ================================================
// 0xe253: WORD 'WE255' codep=0x224c wordp=0xe255 params=1 returns=0
// ================================================

void WE255() // WE255
{
  Pop(); // DROP
  Push(Read16(pp_CTX)); // CTX @
  Push(1);
  Push(0x0024);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("#", 1); // (.")
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(-1);
  Push(pp_CTX); // CTX
  _plus__ex__2(); // +!_2
  Push(0x0020);
  WE205(); // WE205
}


// ================================================
// 0xe28f: WORD 'WE291' codep=0x224c wordp=0xe291 params=1 returns=0
// ================================================

void WE291() // WE291
{
  Pop(); // DROP
  Push(Read16(pp_CTX)); // CTX @
  Push(0x0023);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(pp_FTRIG); // FTRIG
    ON_3(); // ON_3
    return;
  }
  INEXT(); // INEXT
  Push(Read16(pp_CTY)==6?1:0); // CTY @ 6 =
  if (Pop() != 0)
  {
    IsFIRST(); // ?FIRST
    if (Pop() != 0)
    {
      IPREV(); // IPREV
      BEEP(); // BEEP
    } else
    {
      GetColor(BLACK);
      StoreCOLOR(); // !COLOR
      WE18D(); // WE18D
      PAD(); // PAD
      WLINE_dash_UP(); // WLINE-UP
      GetColor(WHITE);
      StoreCOLOR(); // !COLOR
    }
  }
  CTCR(); // CTCR
}


// ================================================
// 0xe2d7: WORD 'CHAR>SCR' codep=0x4a4f wordp=0xe2e4
// ================================================

void CHAR_gt_SCR() // CHAR>SCR
{
  switch(Pop()) // CHAR>SCR
  {
  case 13:
    WE291(); // WE291
    break;
  case 8:
    WE255(); // WE255
    break;
  case 9:
    WE23B(); // WE23B
    break;
  default:
    WE213(); // WE213
    break;

  }
}

// ================================================
// 0xe2f4: WORD 'WE2F6' codep=0x224c wordp=0xe2f6 params=1 returns=0
// ================================================

void WE2F6() // WE2F6
{
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    IPREV(); // IPREV
    Push(Read16(pp_CTY)); // CTY @
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      IsLAST(); // ?LAST
      if (Pop() != 0)
      {
        INEXT(); // INEXT
        BEEP(); // BEEP
      } else
      {
        WE18D(); // WE18D
        PAD(); // PAD
        WLINE_dash_D(); // WLINE-D
      }
    }
  } else
  {
    INEXT(); // INEXT
    Push(Read16(pp_CTY)); // CTY @
    Push(6);
    _gt_(); // >
    if (Pop() != 0)
    {
      IsFIRST(); // ?FIRST
      if (Pop() != 0)
      {
        IPREV(); // IPREV
        BEEP(); // BEEP
      } else
      {
        WE18D(); // WE18D
        PAD(); // PAD
        WLINE_dash_UP(); // WLINE-UP
      }
    }
  }
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe34c: WORD 'WE34E' codep=0x224c wordp=0xe34e
// ================================================

void WE34E() // WE34E
{
  _ro_XYSCAN_rc_(); // (XYSCAN) case
  Push(pp_CTX); // CTX
  _plus__ex__2(); // +!_2
  Push(-Pop()); //  NEGATE
  Push(Read16(regsp)); // DUP
  Push(pp_CTY); // CTY
  _plus__ex__2(); // +!_2
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    WE2F6(); // WE2F6
  }
  Push(Read16(pp_CTX)); // CTX @
  Push(0);
  MAX(); // MAX
  Push(0x0024);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_CTX); // CTX
  Store_3(); // !_3
  Push(Read16(pp_CTY)); // CTY @
  Push(0);
  MAX(); // MAX
  Push(6);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_CTY); // CTY
  Store_3(); // !_3
  WE0DB(); // WE0DB
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
}


// ================================================
// 0xe392: WORD 'WE394' codep=0x224c wordp=0xe394
// ================================================

void WE394() // WE394
{
  Push(0x01f4); Push(0x0000);
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe3b4: WORD 'WE3B6' codep=0x224c wordp=0xe3b6
// ================================================

void WE3B6() // WE3B6
{
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  PRINT("#", 1); // (.")
  WE394(); // WE394
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("#", 1); // (.")
  WE394(); // WE394
  StoreCRS(); // !CRS
}


// ================================================
// 0xe3d8: WORD 'WE3DA' codep=0x224c wordp=0xe3da
// ================================================

void WE3DA() // WE3DA
{
  unsigned short int a;
  do
  {
    WE3B6(); // WE3B6
    _i_KEY(); // 'KEY
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
  a = Pop(); // >R
  Push(a); // I
  Push(0x00ff);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(a); // I
    WE34E(); // WE34E
  } else
  {
    Push(Read16(pp_CTX)); // CTX @
    Push(0x0024);
    _st_(); // <
    Push(Pop() | (a==0x000d?1:0)); //  I 0x000d = OR
    if (Pop() != 0)
    {
      Push(a); // I
      Push(a); // I
      CHAR_gt_SCR(); // CHAR>SCR case
    }
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe41e: WORD '(/CAPT-LOG)' codep=0x224c wordp=0xe42e
// ================================================
// entry

void _ro__slash_CAPT_dash_LOG_rc_() // (/CAPT-LOG)
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002b);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  WE12B(); // WE12B
  WE0F9(); // WE0F9
  Push(pp_FTRIG); // FTRIG
  OFF(); // OFF
  do
  {
    WE3DA(); // WE3DA
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  GetColor(BLACK);
  ERASE_dash_T(); // ERASE-T
  WE003(); // WE003
  ICLOSE(); // ICLOSE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe460: WORD 'WE462' codep=0x224c wordp=0xe462 params=0 returns=2
// ================================================

void WE462() // WE462
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xe468: WORD 'WE46A' codep=0x224c wordp=0xe46a params=0 returns=0
// ================================================

void WE46A() // WE46A
{
  WE462(); // WE462
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe47a: WORD 'WE47C' codep=0x224c wordp=0xe47c params=0 returns=0
// ================================================

void WE47C() // WE47C
{
  WE462(); // WE462
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe48c: WORD 'WE48E' codep=0x224c wordp=0xe48e params=0 returns=0
// ================================================

void WE48E() // WE48E
{
  WE462(); // WE462
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe49c: WORD 'WE49E' codep=0x224c wordp=0xe49e params=2 returns=0
// ================================================

void WE49E() // WE49E
{
  _gt_C_plus_S(); // >C+S
  Push2Words("*EOL");
  _gt_C_plus_S(); // >C+S
  BOX_gt_LIS(); // BOX>LIS
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe4ac: WORD 'WE4AE' codep=0x224c wordp=0xe4ae params=1 returns=0
// ================================================

void WE4AE() // WE4AE
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(3);
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(7);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  GetColor(WHITE);
  GetColor(GREY1);
  GetColor(DK_dash_GREEN);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  BLT(); // BLT
  StoreCRS(); // !CRS
}


// ================================================
// 0xe4e0: WORD 'WE4E2' codep=0x224c wordp=0xe4e2 params=0 returns=0
// ================================================

void WE4E2() // WE4E2
{
  Push(Read16(pp_WTOP) + 1); // WTOP @ 1+
  WE4AE(); // WE4AE
}


// ================================================
// 0xe4ec: WORD 'WE4EE' codep=0x224c wordp=0xe4ee params=0 returns=0
// ================================================

void WE4EE() // WE4EE
{
  unsigned short int i, imax;
  CTINIT(); // CTINIT

  i = 0;
  imax = Read16(pp_WLINES); // WLINES @
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
// 0xe518: WORD 'WE51A' codep=0x224c wordp=0xe51a params=0 returns=0
// ================================================

void WE51A() // WE51A
{
  unsigned short int a;
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex_(); // 1.5!
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
  WE4EE(); // WE4EE
  IPREV(); // IPREV
  WE4E2(); // WE4E2
}


// ================================================
// 0xe550: WORD 'WE552' codep=0x224c wordp=0xe552 params=0 returns=0
// ================================================

void WE552() // WE552
{
  INEXT(); // INEXT
  WE46A(); // WE46A
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  WE4E2(); // WE4E2
  WLINE_dash_UP(); // WLINE-UP
  WE4E2(); // WE4E2
}


// ================================================
// 0xe562: WORD 'WE564' codep=0x224c wordp=0xe564 params=0 returns=0
// ================================================

void WE564() // WE564
{
  IPREV(); // IPREV
  WE47C(); // WE47C
  WE462(); // WE462
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  PAD(); // PAD
  WE4E2(); // WE4E2
  WLINE_dash_D(); // WLINE-D
  WE4E2(); // WE4E2
}


// ================================================
// 0xe57a: WORD 'TD-SCROLL' codep=0x4a4f wordp=0xe588
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 1:
    WE552(); // WE552
    break;
  case 65535:
    WE564(); // WE564
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe594: WORD 'WE596' codep=0x224c wordp=0xe596
// ================================================

void WE596() // WE596
{
  Push(0x0038);
  Push(0);
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_CO.offset); // TEXT-CO<IFIELD>
  _1_dot_5_ex_(); // 1.5!
  Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_ex_(); // 1.5!
  Push(0x63ef+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  Push(0x0026);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  Push(0x63ef+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push(1);
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe5c4: WORD 'WE5C6' codep=0x224c wordp=0xe5c6
// ================================================

void WE5C6() // WE5C6
{
  SET_STR_AS_PARAM("ELEMENTS");
  Push(pp_WDE3E); // WDE3E
  _1_dot_5_at_(); // 1.5@
  Push2Words("*STARSHIP-HOLD");
  WE596(); // WE596
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _st_INSERT(); // <INSERT
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_WDE3A); // WDE3A
  ON_3(); // ON_3
}


// ================================================
// 0xe5ed: WORD 'WE5EF' codep=0x224c wordp=0xe5ef
// ================================================

void WE5EF() // WE5EF
{
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(pp_WDE3E); // WDE3E
  _1_dot_5_ex_(); // 1.5!
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  while(1)
  {
    Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
    Get_gt_C_plus_S(); // @>C+S
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x000b?1:0); //  0x000b =
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop()==0x000a?1:0); //  0x000a =
    Push(Pop() & Pop()); // AND
    Push(!Pop()); //  NOT
    ICLOSE(); // ICLOSE
    if (Pop() == 0) return;
    INEXT(); // INEXT
  }
}


// ================================================
// 0xe631: WORD 'WE633' codep=0x224c wordp=0xe633 params=0 returns=1
// ================================================

void WE633() // WE633
{
  unsigned short int a;
  GetINST_dash_SPECIES(); // @INST-SPECIES
  a = Pop(); // >R
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0);
  do
  {
    Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
    Get_gt_C_plus_S(); // @>C+S
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop()==a?1:0); //  I =
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x001a?1:0); //  0x001a =
    Push(Pop() & Pop()); // AND
    Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
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
      _1_dot_5_ex_(); // 1.5!
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
// 0xe689: WORD 'WE68B' codep=0x224c wordp=0xe68b params=2 returns=0
// ================================================

void WE68B() // WE68B
{
  SUBROOT(); // SUBROOT
  _gt_C_plus_S(); // >C+S
  WE633(); // WE633
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(!Read16(pp_WDE3A)); // WDE3A @ NOT
    if (Pop() != 0)
    {
      WE5C6(); // WE5C6
    }
    Push(pp__ro_SCROLL_1); // (SCROLL_1
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    WE5EF(); // WE5EF
    CI(); // CI
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    ITEM_gt_PA(); // ITEM>PA
    PAD(); // PAD
    COUNT(); // COUNT
    CI(); // CI
    Push(pp_WDE3E); // WDE3E
    _1_dot_5_at_(); // 1.5@
    WE596(); // WE596
    _2SWAP(); // 2SWAP
    _gt_INSERT(); // >INSERT
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe6c7: WORD 'WE6C9' codep=0x224c wordp=0xe6c9
// ================================================

void WE6C9() // WE6C9
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  SWAP(); // SWAP
  ICLOSE(); // ICLOSE
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_AT(); // ?ICONS-AT
}


// ================================================
// 0xe6dd: WORD 'WE6DF' codep=0x224c wordp=0xe6df
// ================================================

void WE6DF() // WE6DF
{
  GetID(); // @ID
  Push(Pop()==0x002b?1:0); //  0x002b =
  if (Pop() != 0)
  {
    GetIL(); // @IL
    GetIH(); // @IH
    _gt_C_plus_S(); // >C+S
    Push((0x63ef+WE081.offset) + 3); // WE081<IFIELD> 3 +
    _2_at_(); // 2@
    D0_eq_(); // D0=
    Push(!Pop()); //  NOT
    ICLOSE(); // ICLOSE
    return;
  }
  Push(0);
}


// ================================================
// 0xe707: WORD 'WE709' codep=0x224c wordp=0xe709 params=0 returns=0
// ================================================

void WE709() // WE709
{
  unsigned short int i, imax;
  Push(pp_WDE36); // WDE36
  OFF(); // OFF
  Push(Read16(pp_CONTEXT_dash_ID_n_)==4?1:0); // CONTEXT-ID# @ 4 =
  if (Pop() != 0)
  {
    WE6C9(); // WE6C9

    i = 0;
    imax = Pop();
    do // (DO)
    {
      POINT_gt_ICON(); // POINT>ICON
      WE6DF(); // WE6DF
      Push(pp_WDE36); // WDE36
      _plus__ex__2(); // +!_2
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(!(Read16(pp_WDE36)==0?1:0)); // WDE36 @ 0= NOT
  Push(pp_WDE36); // WDE36
  Store_3(); // !_3
}


// ================================================
// 0xe739: WORD 'WE73B' codep=0x224c wordp=0xe73b
// ================================================

void WE73B() // WE73B
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
      Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
      StoreD(); // D!
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    CDROP(); // CDROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe765: WORD 'WE767' codep=0x224c wordp=0xe767
// ================================================

void WE767() // WE767
{
  unsigned short int i, imax, j, jmax;
  WE6C9(); // WE6C9

  i = 0;
  imax = Pop();
  do // (DO)
  {
    POINT_gt_ICON(); // POINT>ICON
    GetID(); // @ID
    Push(Pop()==0x002b?1:0); //  0x002b =
    if (Pop() != 0)
    {
      Push(0x00ff);
      Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
      MIN(); // MIN
      Push(Read16(regsp)); // DUP
      Push(pp_ELEM_dash_AM); // ELEM-AM
      Store_3(); // !_3
      Push(-Pop()); //  NEGATE
      Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
      _plus__ex__2(); // +!_2
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(Read16(regsp)); // DUP
      Push(pp_WE0D7); // WE0D7
      Store_3(); // !_3
      Push(Pop()==6?1:0); //  6 =
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      if (Pop() != 0)
      {
        Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
        Push((0x63ef+WE081.offset) + 3); // WE081<IFIELD> 3 +
        C_ex_(); // C!
      } else
      {

        j = 0;
        jmax = 3;
        do // (DO)
        {
          Push((Read16((0x63ef+WE081.offset) + j)&0xFF)==0?1:0); // WE081<IFIELD> I + C@ 0=
          if (Pop() != 0)
          {
            Push(Read16(pp_WE0D7)); // WE0D7 @
            Push((0x63ef+WE081.offset) + j); // WE081<IFIELD> I +
            C_ex_(); // C!
            Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
            Push(((0x63ef+WE081.offset) + 4) + j); // WE081<IFIELD> 4 + I +
            C_ex_(); // C!
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
// 0xe7f5: WORD 'WE7F7' codep=0x224c wordp=0xe7f7
// ================================================

void WE7F7() // WE7F7
{
  Push2Words("*STARSHIP-HOLD");
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
      WE767(); // WE767
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
// 0xe821: WORD 'WE823' codep=0x224c wordp=0xe823
// ================================================

void WE823() // WE823
{
  unsigned short int i, imax, j, jmax;
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(0x0031);
    StoreINST_dash_SPECIES(); // !INST-SPECIES
  }
  ICLOSE(); // ICLOSE
  WE6C9(); // WE6C9

  i = 0;
  imax = Pop();
  do // (DO)
  {
    POINT_gt_ICON(); // POINT>ICON
    WE6DF(); // WE6DF
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S

      j = 0;
      jmax = 4;
      do // (DO)
      {
        Push(Read16(((0x63ef+WE081.offset) + 3) + j)&0xFF); // WE081<IFIELD> 3 + I + C@
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
            Push(Read16((0x63ef+WE081.offset) + (j - 1))&0xFF); // WE081<IFIELD> I 1- + C@
          }
          ICREATE(); // ICREATE
          _gt_C_plus_S(); // >C+S
          Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
          Store_3(); // !_3
          CI(); // CI
          ICLOSE(); // ICLOSE
          Push2Words("*STARSHIP-HOLD");
          _gt_C_plus_S(); // >C+S
          _gt_BOX(); // >BOX
          ICLOSE(); // ICLOSE
        }
        j++;
      } while(j<jmax); // (LOOP)

      Push(0x63ef+WE081.offset); // WE081<IFIELD>
      Push(7);
      Push(0);
      FILL_1(); // FILL_1
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Push(Pop() & Read16(pp_WDE36)); //  WDE36 @ AND
  if (Pop() != 0)
  {
    Push(0x0030);
    StoreINST_dash_SPECIES(); // !INST-SPECIES
  }
  IFIRST(); // IFIRST
  Push(0x000b);
  Push(0x0031);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(0x000a);
    StoreINST_dash_SPECIES(); // !INST-SPECIES
  }
  ICLOSE(); // ICLOSE
  WE73B(); // WE73B
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8e7: WORD 'WE8E9' codep=0x224c wordp=0xe8e9 params=1 returns=0
// ================================================

void WE8E9() // WE8E9
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(pp_WTOP) - 6); // WTOP @ 6 -
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(1);
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  Push(a); // R>
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xe905: WORD 'WE907' codep=0x224c wordp=0xe907 params=0 returns=0
// ================================================

void WE907() // WE907
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT("SCROLL ITEMS: ^\\  QUIT: []", 26); // (.")
}


// ================================================
// 0xe930: WORD 'WE932' codep=0x224c wordp=0xe932 params=0 returns=0
// ================================================

void WE932() // WE932
{
  _gt_1FONT(); // >1FONT
  CTERASE(); // CTERASE
  WE907(); // WE907
  Push(4);
  Push(Read16(pp_WTOP) + 7); // WTOP @ 7 +
  POS_dot_(); // POS.
  PRINT("ITEM", 4); // (.")
  Push(0x006c);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("VOLUME", 6); // (.")
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("VALUE", 5); // (.")
}


// ================================================
// 0xe96e: WORD 'WE970' codep=0x224c wordp=0xe970 params=0 returns=0
// ================================================

void WE970() // WE970
{
  WE48E(); // WE48E
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(0x000a);
  _slash_MOD(); // /MOD
  ICLOSE(); // ICLOSE
  WE462(); // WE462
  _gt_C_plus_S(); // >C+S
  Push((0x63ef+TEXT_dash_TE.offset) + 0x001a); // TEXT-TE<IFIELD> 0x001a +
  Push(6);
  Push(0x002e);
  FILL_1(); // FILL_1
  U_gt__do_(); // U>$
  Push((0x63ef+TEXT_dash_TE.offset) + 0x001e); // TEXT-TE<IFIELD> 0x001e +
  OVER(); // OVER
  _dash_(); // -
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  U_gt__do_(); // U>$
  Pop(); // DROP
  Push(Read16(Pop())&0xFF); //  C@
  Push((0x63ef+TEXT_dash_TE.offset) + 0x001f); // TEXT-TE<IFIELD> 0x001f +
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe9b8: WORD 'WE9BA' codep=0x224c wordp=0xe9ba params=0 returns=0
// ================================================

void WE9BA() // WE9BA
{
  WE48E(); // WE48E
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  WE462(); // WE462
  _gt_C_plus_S(); // >C+S
  IDELETE(); // IDELETE
  Push(-1);
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe9e0: WORD 'WE9E2' codep=0x224c wordp=0xe9e2 params=1 returns=0
// ================================================

void WE9E2() // WE9E2
{
  unsigned short int i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {

    i = 0;
    imax = Pop();
    do // (DO)
    {
      WE462(); // WE462
      WE47C(); // WE47C
      _gt_C_plus_S(); // >C+S
      IDELETE(); // IDELETE
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  WE48E(); // WE48E
  GetINST_dash_CLASS(); // @INST-CLASS
  ICLOSE(); // ICLOSE
  Push(Pop()==0x001a?1:0); //  0x001a =
  if (Pop() == 0) return;
  WE970(); // WE970
}


// ================================================
// 0xea12: WORD 'WEA14' codep=0x224c wordp=0xea14
// ================================================

void WEA14() // WEA14
{
  Push(0xc227); // 'CTUP'
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
// 0xea60: WORD 'WEA62' codep=0x224c wordp=0xea62
// ================================================

void WEA62() // WEA62
{
  unsigned short int i, imax;
  GetColor(BLACK);
  WE8E9(); // WE8E9
  CTINIT(); // CTINIT
  LoadData(WE044); // from 'ARTIFACT'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    LoadData(WE03C); // from 'ARTIFACT'
    Push(Read16(Pop())&0xFF); //  C@
    Push(0x0039);
    Push(pp_FILE_n_); // FILE#
    Store_3(); // !_3
    Push(pp_RECORD_n_); // RECORD#
    Store_3(); // !_3
    Push(0);
    Push(2);
    CTPOS_dot_(); // CTPOS.

    i = 0;
    imax = 0x00be;
    do // (DO)
    {
      LoadData(WE04C); // from 'ANALYZE_TEXT'
      Push(Pop() + i); //  I +
      PAD(); // PAD
      Push(0x0026);
      CMOVE(); // CMOVE
      PAD(); // PAD
      Push(0x0026);
      _dash_TRAILING(); // -TRAILING
      Push(0x0026);
      OVER(); // OVER
      _dash_(); // -
      Push(Pop() >> 1); //  2/
      SPACES(); // SPACES
      Exec("TYPE"); // call of word 0x2690 '(TYPE)'
      GCR(); // GCR
      Push(0x0026);
      int step = Pop();
      i += step;
      if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
    } while(1); // (+LOOP)

    SET_dash_CURRENT(); // SET-CURRENT
  } else
  {
    Push(1);
    Push(3);
    CTPOS_dot_(); // CTPOS.
    PRINT("THIS ARTIFACT HAS NOT BEEN ANALYZED", 35); // (.")
  }
  WEA14(); // WEA14
}


// ================================================
// 0xeaf2: WORD 'WEAF4' codep=0x224c wordp=0xeaf4 params=0 returns=0
// ================================================

void WEAF4() // WEAF4
{
  Push(0x000d);
  WDE74(); // WDE74
  Push(pp_Is12); // ?12
  Store_3(); // !_3
  Push(Read16(pp_E_dash_USE)); // E-USE @
  Push(7);
  WDE74(); // WDE74
  if (Pop() != 0)
  {
    Push(Pop() >> 1); //  2/
  }
  Push(pp__dash_END); // -END
  Store_3(); // !_3
}


// ================================================
// 0xeb12: WORD 'WEB14' codep=0x224c wordp=0xeb14
// ================================================

void WEB14() // WEB14
{
  Push(0xc7ab); // 'KEY-ELEM-AMT'
  MODULE(); // MODULE
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  Push(Read16(regsp)); // DUP
  Push(-Pop()); //  NEGATE
  Push(Read16(regsp)); // DUP
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  _plus__ex__2(); // +!_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WE0D2.offset); // WE0D2<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(0xfff6);
  M_star_(); // M*
  Push(pp__10_star_CARGO); // 10*CARGO
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp__10_star_CARGO); // 10*CARGO
  StoreD(); // D!
  Push(0x001a);
  GetINST_dash_SPECIES(); // @INST-SPECIES
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  _2DUP(); // 2DUP
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  if (Pop() != 0)
  {
    WE970(); // WE970
    WE9BA(); // WE9BA
    WE68B(); // WE68B
    WE970(); // WE970
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Push(0xbd4a); // '=CARGO'
  MODULE(); // MODULE
  DrawSORD(); // .SORD
}


// ================================================
// 0xeb80: WORD 'WEB82' codep=0x224c wordp=0xeb82
// ================================================

void WEB82() // WEB82
{
  Push(0x63ef+INST_dash_SPECIES.offset); // INST-SPECIES<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  ICLOSE(); // ICLOSE
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0xc216); // 'P>CT'
  MODULE(); // MODULE
  WEA14(); // WEA14
}


// ================================================
// 0xeb9c: WORD 'WEB9E' codep=0x224c wordp=0xeb9e
// ================================================

void WEB9E() // WEB9E
{
  CTERASE(); // CTERASE
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
  WEB82(); // WEB82
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    WEB82(); // WEB82
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xebbe: WORD 'WEBC0' codep=0x224c wordp=0xebc0 params=2 returns=2
// ================================================

void WEBC0() // WEBC0
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
// 0xebe6: WORD 'WEBE8' codep=0x224c wordp=0xebe8 params=1 returns=0
// ================================================

void WEBE8() // WEBE8
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
// 0xec0a: WORD 'WEC0C' codep=0x224c wordp=0xec0c params=1 returns=0
// ================================================

void WEC0C() // WEC0C
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
// 0xec2e: WORD 'WEC30' codep=0x224c wordp=0xec30 params=2 returns=0
// ================================================

void WEC30() // WEC30
{
  WEBC0(); // WEBC0
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(0);
  DrawR(); // .R
  WEC0C(); // WEC0C
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
  WEBE8(); // WEBE8
}


// ================================================
// 0xec5e: WORD 'WEC60' codep=0x224c wordp=0xec60 params=2 returns=0
// ================================================

void WEC60() // WEC60
{
  CTCR(); // CTCR
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(": ", 2); // (.")
  CTINIT(); // CTINIT
}


// ================================================
// 0xec71: WORD 'WEC73' codep=0x224c wordp=0xec73
// ================================================

void WEC73() // WEC73
{
  GetColor(BLACK);
  WE8E9(); // WE8E9
  Push(0);
  Push(1);
  CTPOS_dot_(); // CTPOS.
  SET_STR_AS_PARAM("SYSTEM");
  WEC60(); // WEC60
  Push(Read16(0x63ef+WE0C3.offset)&0xFF); // WE0C3<IFIELD> C@
  Push(0);
  DrawR(); // .R
  PRINT(",", 1); // (.")
  Push(Read16(0x63ef+WE0C8.offset)&0xFF); // WE0C8<IFIELD> C@
  Draw(); // .
  SET_STR_AS_PARAM("PLANET");
  WEC60(); // WEC60
  Push(Read16(0x63ef+WE0CD.offset)&0xFF); // WE0CD<IFIELD> C@
  Draw(); // .
  SET_STR_AS_PARAM("LOCATION");
  WEC60(); // WEC60
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  SWAP(); // SWAP
  WEC30(); // WEC30
  SET_STR_AS_PARAM("DATE");
  WEC60(); // WEC60
  Push(Read16(0x63ef+WE0B9.offset)); // WE0B9<IFIELD> @
  PAD(); // PAD
  DATE_do__gt_ADR(); // DATE$>ADR
  PAD(); // PAD
  Push(0x000a);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  WEA14(); // WEA14
}


// ================================================
// 0xecdd: WORD 'WECDF' codep=0x224c wordp=0xecdf params=2 returns=0
// ================================================

void WECDF() // WECDF
{
  Push(0xc794); // 'TOSS'
  MODULE(); // MODULE
  Pop(); // DROP
  WE9E2(); // WE9E2
  Push(0xbd4a); // '=CARGO'
  MODULE(); // MODULE
  DrawSORD(); // .SORD
}


// ================================================
// 0xecf3: WORD 'WECF5' codep=0x224c wordp=0xecf5 params=2 returns=0
// ================================================

void WECF5() // WECF5
{
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() != 0)
  {
    WEB14(); // WEB14
    return;
  }
  WECDF(); // WECDF
}


// ================================================
// 0xed0f: WORD '1STOPTION' codep=0x4a4f wordp=0xed1d
// ================================================

void _1STOPTION() // 1STOPTION
{
  switch(Pop()) // 1STOPTION
  {
  case 28:
    WEA62(); // WEA62
    break;
  case 27:
    WEB9E(); // WEB9E
    break;
  case 26:
    WECF5(); // WECF5
    break;
  case 40:
    WEC73(); // WEC73
    break;
  case 43:
    WEC73(); // WEC73
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed35: WORD 'WED37' codep=0x1d29 wordp=0xed37
// ================================================
// 0xed37: db 0x3a 0x20 ': '

// ================================================
// 0xed39: WORD 'WED3B' codep=0x1d29 wordp=0xed3b
// ================================================
// 0xed3b: db 0x3a 0x20 ': '

// ================================================
// 0xed3d: WORD 'DO-OPTION' codep=0x224c wordp=0xed4b
// ================================================

void DO_dash_OPTION() // DO-OPTION
{
  Push(Read16(pp_WED37)); // WED37 @
  if (Pop() != 0)
  {
    WECDF(); // WECDF
  } else
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    _1STOPTION(); // 1STOPTION case
  }
  Push(1);
}


// ================================================
// 0xed61: WORD 'WED63' codep=0x224c wordp=0xed63 params=0 returns=1
// ================================================

void WED63() // WED63
{
  PRINT(" JETTISON", 9); // (.")
  Push(0);
}


// ================================================
// 0xed73: WORD 'WED75' codep=0x224c wordp=0xed75 params=0 returns=1
// ================================================

void WED75() // WED75
{
  PRINT(" DESCRIBE", 9); // (.")
  GCR(); // GCR
  WED63(); // WED63
  Push(Pop() + 1); //  1+
}


// ================================================
// 0xed89: WORD 'WED8B' codep=0x224c wordp=0xed8b params=0 returns=1
// ================================================

void WED8B() // WED8B
{
  PRINT(" PLAYBACK", 9); // (.")
  GCR(); // GCR
  PRINT(" ERASE", 6); // (.")
  Push(1);
}


// ================================================
// 0xeda6: WORD 'WEDA8' codep=0x224c wordp=0xeda8 params=0 returns=1
// ================================================

void WEDA8() // WEDA8
{
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() != 0)
  {
    PRINT(" PICKUP", 7); // (.")
    Push(0);
    return;
  }
  WED63(); // WED63
}


// ================================================
// 0xedcc: WORD 'ITEM-OPTIONS' codep=0x4a4f wordp=0xeddd
// ================================================

void ITEM_dash_OPTIONS() // ITEM-OPTIONS
{
  switch(Pop()) // ITEM-OPTIONS
  {
  case 28:
    WED75(); // WED75
    break;
  case 27:
    WED8B(); // WED8B
    break;
  case 43:
    WED8B(); // WED8B
    break;
  case 40:
    WED75(); // WED75
    break;
  case 26:
    WEDA8(); // WEDA8
    break;
  default:
    WED63(); // WED63
    break;

  }
}

// ================================================
// 0xedf5: WORD 'WEDF7' codep=0x224c wordp=0xedf7
// ================================================

void WEDF7() // WEDF7
{
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 7); // WTOP @ 7 -
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  GetINST_dash_CLASS(); // @INST-CLASS
  ITEM_dash_OPTIONS(); // ITEM-OPTIONS case
  Push(pp_WED3B); // WED3B
  Store_3(); // !_3
  Push(pp_WED37); // WED37
  OFF(); // OFF
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(4);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT("^\\ SELECT OPTION OR [ QUIT ]", 28); // (.")
  Push(Read16(pp_WTOP) - 6); // WTOP @ 6 -
  WE4AE(); // WE4AE
}


// ================================================
// 0xee48: WORD 'WEE4A' codep=0x224c wordp=0xee4a params=0 returns=0
// ================================================

void WEE4A() // WEE4A
{
  WE48E(); // WE48E
  GetINST_dash_CLASS(); // @INST-CLASS
  ICLOSE(); // ICLOSE
  Push(!(Pop()==0x000b?1:0)); //  0x000b = NOT
  if (Pop() != 0)
  {
    WE48E(); // WE48E
    GetColor(BLACK);
    WE4E2(); // WE4E2
    WE8E9(); // WE8E9
    WEDF7(); // WEDF7
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        Push(-Pop() + Read16(pp_WED37)); //  NEGATE WED37 @ +
        Push(Read16(regsp)); // DUP
        Push(0);
        Push(Read16(pp_WED3B) + 1); // WED3B @ 1+
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          Push((Read16(pp_WTOP) - (Read16(pp_WED37) + 1) * 7) + 1); // WTOP @ WED37 @ 1+ 7 * - 1+
          WE4AE(); // WE4AE
          Push(Read16(regsp)); // DUP
          Push(pp_WED37); // WED37
          Store_3(); // !_3
          Push(Read16(pp_WTOP)); // WTOP @
          SWAP(); // SWAP
          Push((Pop() + 1) * 7); //  1+ 7 *
          _dash_(); // -
          Push(Pop() + 1); //  1+
          WE4AE(); // WE4AE
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
    CDROP(); // CDROP
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
    Push(1);
    _gt_(); // >
    if (Pop() != 0)
    {
      WE932(); // WE932
      WE51A(); // WE51A
    }
    return;
  }
  BEEP(); // BEEP
}


// ================================================
// 0xeef0: WORD 'WEEF2' codep=0x224c wordp=0xeef2 params=0 returns=2
// ================================================

void WEEF2() // WEEF2
{
  CTINIT(); // CTINIT
  PRINT("STARSHIP HOLD IS EMPTY.", 23); // (.")
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xef16: WORD '(/ITEMS)' codep=0x224c wordp=0xef23
// ================================================
// entry

void _ro__slash_ITEMS_rc_() // (/ITEMS)
{
  CTERASE(); // CTERASE
  WE709(); // WE709
  Push(Read16(pp_WDE36)); // WDE36 @
  Push(Read16(regsp)); // DUP
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Push(pp_WDE3A); // WDE3A
  Store_3(); // !_3
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
    WE932(); // WE932
    MAKE_dash_SC(); // MAKE-SC
    if (Pop() != 0)
    {
      WE823(); // WE823
    }
    Push2Words("*STARSHIP-HOLD");
    GET_dash_BOX(); // GET-BOX
    Push2Words("*STARSHIP-HOLD");
    WE49E(); // WE49E
    WE51A(); // WE51A
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      TD_dash_SCROLL(); // TD-SCROLL case
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        WEE4A(); // WEE4A
        Push(pp_FQUIT); // FQUIT
        OFF(); // OFF
      }
      IsQUIT(); // ?QUIT
      Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
      Push(2);
      _st_(); // <
      Push(Pop() | Pop()); // OR
    } while(Pop() == 0);
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    delete_dash_scroll_dash_box(); // delete-scroll-box
    WE4E2(); // WE4E2
  } else
  {
    Pop(); // DROP
    WEEF2(); // WEEF2
  }
  CTERASE(); // CTERASE
  WEAF4(); // WEAF4
  WE7F7(); // WE7F7
}


// ================================================
// 0xefab: WORD 'WEFAD' codep=0x224c wordp=0xefad params=0 returns=0
// ================================================

void WEFAD() // WEFAD
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(1);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
}


// ================================================
// 0xefbd: WORD 'WEFBF' codep=0x224c wordp=0xefbf params=3 returns=0
// ================================================

void WEFBF() // WEFBF
{
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xefc7: WORD '>DESCEND' codep=0x224c wordp=0xefd4
// ================================================
// entry

void _gt_DESCEND() // >DESCEND
{
  WEFAD(); // WEFAD
  SET_STR_AS_PARAM("LAUNCH");
  LoadData(_1BTN); // from 'BUTTONS'
  WEFBF(); // WEFBF
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  OFF(); // OFF
  Push(0x3a48); // 'NOP'
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  Store_3(); // !_3
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16(0x63ef+WE054.offset)&0xFF) & 0x00ef); // WE054<IFIELD> C@ 0x00ef AND
  Push(0x63ef+WE054.offset); // WE054<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf005: WORD 'WF007' codep=0x224c wordp=0xf007
// ================================================

void WF007() // WF007
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("READY TO LAUNCH", 15); // (.")
  CTCR(); // CTCR
  PRINT("CONFIRM: [N Y]", 14); // (.")
  Y_slash_N(); // Y/N
  if (Pop() != 0)
  {
    Push(Read16(pp_CONTEXT_dash_ID_n_)==0?1:0); // CONTEXT-ID# @ 0=
    Push(pp__ro_PLANET_rc_); // (PLANET)
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
        Push(0xc3e1); // 'SEEGRID'
        MODULE(); // MODULE
        Push(0xd184); // 'OVCOU'
        MODULE(); // MODULE
        Push(0xc3ba); // 'ASCEND'
        MODULE(); // MODULE
        Push(0xc3f3); // 'MROTATE'
        Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
        Store_3(); // !_3
      }
    } else
    {
      Push(0xd184); // 'OVCOU'
      MODULE(); // MODULE
      Push(1);
    }
    if (Pop() != 0)
    {
      WEFAD(); // WEFAD
      SET_STR_AS_PARAM("LAND  ");
      LoadData(_1BTN); // from 'BUTTONS'
      WEFBF(); // WEFBF
    }
    Push(pp_STIME); // STIME
    _2_at_(); // 2@
    Push(0x03e8); Push(0x0000);
    D_st_(); // D<
    if (Pop() != 0)
    {
      Push(Read16(pp_IsSECURE)==0?1:0); // ?SECURE @ 0=
      if (Pop() != 0)
      {
        Push(Read16(pp_STARDATE) + 4); // STARDATE @ 4 +
        Push(pp_IsSECURE); // ?SECURE
        Store_3(); // !_3
        BEEP(); // BEEP
      }
    }
    return;
  }
  CTERASE(); // CTERASE
  PRINT("CANCELLED", 9); // (.")
}


// ================================================
// 0xf0cb: WORD 'WF0CD' codep=0x224c wordp=0xf0cd params=0 returns=0
// ================================================

void WF0CD() // WF0CD
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE'RE NOT IN ORBIT", 18); // (.")
}


// ================================================
// 0xf0e8: WORD 'WF0EA' codep=0x224c wordp=0xf0ea params=0 returns=0
// ================================================

void WF0EA() // WF0EA
{
  Push(Read16(pp_IsPORT)); // ?PORT @
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    CTERASE(); // CTERASE
    PRINT("WE CAN'T LAND ON ARTH", 21); // (.")
    Push(0);
    return;
  }
  Push(Read16(pp_CONTEXT_dash_ID_n_)==1?1:0); // CONTEXT-ID# @ 1 =
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  WF0CD(); // WF0CD
  Push(0);
}


// ================================================
// 0xf12a: WORD '(/LAUNCH/LAND)' codep=0x224c wordp=0xf13d params=0 returns=1
// ================================================
// entry

void _ro__slash_LAUNCH_slash_LAND_rc_() // (/LAUNCH/LAND)
{
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  Push(Read16(regsp)); // DUP
  Push(Pop()==1?1:0); //  1 =
  SWAP(); // SWAP
  Push(Pop()==5?1:0); //  5 =
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(5);
    Push(0xbdef); // 'OV?.EQUIP-OK'
    MODULE(); // MODULE
  } else
  {
    Push(1);
  }
  if (Pop() != 0)
  {
    Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    SWAP(); // SWAP
    Push(Pop()==5?1:0); //  5 =
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      WF007(); // WF007
      Push(0);
    } else
    {
      WF0EA(); // WF0EA
    }
    return;
  }
  Push(0);
}


// ================================================
// 0xf18b: WORD 'WF18D' codep=0x1d29 wordp=0xf18d
// ================================================
// 0xf18d: db 0x3a 0x20 ': '

// ================================================
// 0xf18f: WORD 'WF191' codep=0x224c wordp=0xf191 params=1 returns=0
// ================================================

void WF191() // WF191
{
  Push(pp_WF18D); // WF18D
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf197: WORD 'WF199' codep=0x224c wordp=0xf199
// ================================================

void WF199() // WF199
{
  LoadData(WE08E); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  _st_(); // <
  Push(Read16(regsp)); // DUP
  Push(!Pop()); //  NOT
  WF191(); // WF191
}


// ================================================
// 0xf1a9: WORD 'WF1AB' codep=0x224c wordp=0xf1ab
// ================================================

void WF1AB() // WF1AB
{
  LoadData(WE086); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(3);
  _gt_(); // >
  Push(Read16(regsp)); // DUP
  Push(!Pop()); //  NOT
  WF191(); // WF191
}


// ================================================
// 0xf1bb: WORD 'WF1BD' codep=0x224c wordp=0xf1bd
// ================================================

void WF1BD() // WF1BD
{
  LoadData(WE061); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x0045);
  _gt_(); // >
  OVER(); // OVER
  Push(0x0083);
  _st_(); // <
  Push(Pop() + Pop()); // +
  WF191(); // WF191
  Push(0x00c8);
  _gt_(); // >
}


// ================================================
// 0xf1dd: WORD 'WF1DF' codep=0x224c wordp=0xf1df
// ================================================

void WF1DF() // WF1DF
{
  LoadData(WE069); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  OVER(); // OVER
  Push(3);
  _st_(); // <
  Push(Pop() + Pop()); // +
  WF191(); // WF191
  Push(2);
  _gt_(); // >
}


// ================================================
// 0xf1f9: WORD 'WF1FB' codep=0x224c wordp=0xf1fb params=0 returns=1
// ================================================

void WF1FB() // WF1FB
{
  Push(Read16(pp_ATMO)); // ATMO @
  Push(0x000f);
  Push(0x0011);
  WITHIN(); // WITHIN
  Push(!(Pop() | (Read16(pp_HYDRO)==2?1:0))); //  HYDRO @ 2 = OR NOT
}


// ================================================
// 0xf217: WORD 'WF219' codep=0x224c wordp=0xf219 params=0 returns=1
// ================================================

void WF219() // WF219
{
  Push(!((Read16(pp_HYDRO)==5?1:0) | (Read16(pp_ATMO)==0x0015?1:0))); // HYDRO @ 5 = ATMO @ 0x0015 = OR NOT
}


// ================================================
// 0xf231: WORD 'WF233' codep=0x224c wordp=0xf233
// ================================================

void WF233() // WF233
{
  LoadData(WE071); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _0_gt_(); // 0>
  WF191(); // WF191
}


// ================================================
// 0xf23d: WORD 'WF23F' codep=0x224c wordp=0xf23f
// ================================================

void WF23F() // WF23F
{
  LoadData(WE079); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(0x0032);
  _slash_(); // /
  MAX(); // MAX
  WF191(); // WF191
}


// ================================================
// 0xf255: WORD 'WF257' codep=0x224c wordp=0xf257 params=0 returns=0
// ================================================

void WF257() // WF257
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("NAME THIS PLANET: ", 18); // (.")
  CTCR(); // CTCR
  Push(0x63ef+WE0AF.offset); // WE0AF<IFIELD>
  Push(0x000f);
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  Push(0x000f);
  Push(0xbd5b); // 'OV#IN$'
  MODULE(); // MODULE
  COUNT(); // COUNT
  Push(0x63ef+WE0AF.offset); // WE0AF<IFIELD>
  SWAP(); // SWAP
  CMOVE(); // CMOVE
}


// ================================================
// 0xf290: WORD 'WF292' codep=0x224c wordp=0xf292 params=0 returns=3
// ================================================

void WF292() // WF292
{
  Push(0xc52d); // 'OVINIT-BALANCE'
  MODULE(); // MODULE
  Push(Read16(0x63ef+WE096.offset)&0xFF); // WE096<IFIELD> C@
  Push(0x03e8);
  U_star_(); // U*
  Push(0x0064); Push(0x0000);
  DMAX(); // DMAX
  Push(Read16(0x63ef+WE0AA.offset)&0xFF); // WE0AA<IFIELD> C@
  if (Pop() != 0)
  {
    DNEGATE(); // DNEGATE
  }
  Push(0xc5ca); // 'T+BALANCE'
  MODULE(); // MODULE
  Push((Read16(0x63ef+WE0AA.offset)&0xFF)==0?1:0); // WE0AA<IFIELD> C@ 0=
  _3_star_(); // 3*
  Push(0xc542); // 'OVTRANSACT'
  MODULE(); // MODULE
}


// ================================================
// 0xf2ca: WORD 'WF2CC' codep=0x1d29 wordp=0xf2cc
// ================================================
// 0xf2cc: db 0x00 0x00 '  '

// ================================================
// 0xf2ce: WORD 'WF2D0' codep=0x224c wordp=0xf2d0
// ================================================

void WF2D0() // WF2D0
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
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  ICLOSE(); // ICLOSE
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(0x63ef+WE0A5.offset); // WE0A5<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xf30c: WORD 'WF30E' codep=0x224c wordp=0xf30e
// ================================================

void WF30E() // WF30E
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  WF1AB(); // WF1AB
  WF199(); // WF199
  Push(Pop() * 2); //  2*
  Push(Pop() | Pop()); // OR
  WF1BD(); // WF1BD
  Push(Pop() * 4); //  4 *
  Push(Pop() | Pop()); // OR
  WF1DF(); // WF1DF
  Push(Pop() * 8); //  8 *
  Push(Pop() | Pop()); // OR
  WF1FB(); // WF1FB
  Push(Pop() >> 4); //  16*
  Push(Pop() | Pop()); // OR
  WF219(); // WF219
  Push(Pop() * 0x0020); //  0x0020 *
  Push(Pop() | Pop()); // OR
  WF233(); // WF233
  WF23F(); // WF23F
  ICLOSE(); // ICLOSE
  Push(0x63ef+WE0AA.offset); // WE0AA<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xf346: WORD 'WF348' codep=0x224c wordp=0xf348 params=0 returns=0
// ================================================

void WF348() // WF348
{
  Push(Read16(0x63ef+WE0AA.offset)&0xFF); // WE0AA<IFIELD> C@
  if (Pop() != 0)
  {
    Push(Read16(pp_WF2CC)); // WF2CC @
    Push(8);
    MIN(); // MIN
    Push(Pop() * 0x000a); //  0x000a *
    Push(1);
    Push(pp_WF2CC); // WF2CC
    _plus__ex__2(); // +!_2
    SAVE_dash_OVERLAY(); // SAVE-OVERLAY
  } else
  {
    Push(Read16(pp_WF18D) * 5); // WF18D @ 5 *
  }
  Push(0x63ef+WE096.offset); // WE096<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xf378: WORD 'WF37A' codep=0x224c wordp=0xf37a
// ================================================

void WF37A() // WF37A
{
  Push(pp_WF18D); // WF18D
  OFF(); // OFF
  WF2D0(); // WF2D0
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(0x63ef+WE09B.offset); // WE09B<IFIELD>
  Store_3(); // !_3
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(1);
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(0x63ef+WE0A0.offset); // WE0A0<IFIELD>
  Store_3(); // !_3
  WF30E(); // WF30E
  WF348(); // WF348
  WF257(); // WF257
  WF292(); // WF292
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp_IsEVAL); // ?EVAL
  ON_3(); // ON_3
}


// ================================================
// 0xf3b0: WORD 'WF3B2' codep=0x224c wordp=0xf3b2
// ================================================

void WF3B2() // WF3B2
{
  WF37A(); // WF37A
  CTCR(); // CTCR
  PRINT("RECOMMENDATION LOGGED.", 22); // (.")
}


// ================================================
// 0xf3d1: WORD 'WF3D3' codep=0x224c wordp=0xf3d3 params=0 returns=1
// ================================================

void WF3D3() // WF3D3
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  BIT(); // BIT
  Push(Read16(regsp)); // DUP
  ICLOSE(); // ICLOSE
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  Get_gt_C_plus_S(); // @>C+S
  Push(Pop() & (Read16(0x63ef+WE0BE.offset)&0xFF)); //  WE0BE<IFIELD> C@ AND
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  Push(Pop() | Read16(0x63ef+WE0BE.offset)&0xFF); //  WE0BE<IFIELD> C@ OR
  Push(0x63ef+WE0BE.offset); // WE0BE<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    PRINT("THIS PLANET HAS ALREADY BEEN LOGGED.", 36); // (.")
  }
  Push(!Pop()); //  NOT
}


// ================================================
// 0xf42a: WORD '(/LOG-PLAN)' codep=0x224c wordp=0xf43a params=0 returns=0
// ================================================
// entry

void _ro__slash_LOG_dash_PLAN_rc_() // (/LOG-PLAN)
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Push(pp__dash_AIN); // -AIN
  OFF(); // OFF
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  Push(2);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(pp__ro_PLANET_rc_); // (PLANET)
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    Push(0x000c);
    Push(0);
    IFIND(); // IFIND
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    if (Pop() != 0)
    {
      PRINT("THAT'S ARTH YOU FOOL!", 21); // (.")
    } else
    {
      Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
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
          WF3D3(); // WF3D3
          if (Pop() != 0)
          {
            Push(0xc5a8); // 'I-TRANS'
            MODULE(); // MODULE
            Push(Read16(pp_STARDATE)); // STARDATE @
            Push(pp_PORTDAT); // PORTDAT
            Store_3(); // !_3
            WF3B2(); // WF3B2
          }
        }
      } else
      {
        WF0CD(); // WF0CD
      }
    }
    return;
  }
  WF0CD(); // WF0CD
}

// 0xf4ec: db 0x43 0x41 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x43 0x41 0x50 0x54 0x41 0x49 0x4e 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x43 0x31 0x33 0x36 0x35 0x44 0x4f 0x57 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x5f 0x31 0x32 0x38 0x30 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x53 0x54 0x50 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'CAP-VOC_________________________ for CAPTAIN -----------------)C1365DOWN---------------)_1280_____ for STP---------- '

