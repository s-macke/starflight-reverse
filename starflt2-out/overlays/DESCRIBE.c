// ====== OVERLAY 'DESCRIBE' ======
// store offset = 0xe5f0
// overlay size   = 0x0f70

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE606  codep:0x224c parp:0xe606 size:0x001a C-string:'WE606'
//           WE622  codep:0x7394 parp:0xe622 size:0x0006 C-string:'WE622'
//           WE62A  codep:0x7394 parp:0xe62a size:0x0006 C-string:'WE62A'
//           WE632  codep:0x7394 parp:0xe632 size:0x0006 C-string:'WE632'
//           WE63A  codep:0x7394 parp:0xe63a size:0x0006 C-string:'WE63A'
//           WE642  codep:0x7394 parp:0xe642 size:0x0006 C-string:'WE642'
//           WE64A  codep:0x7420 parp:0xe64a size:0x0003 C-string:'WE64A'
//           WE64F  codep:0x7420 parp:0xe64f size:0x0003 C-string:'WE64F'
//           WE654  codep:0x7420 parp:0xe654 size:0x0003 C-string:'WE654'
//           WE659  codep:0x7420 parp:0xe659 size:0x0003 C-string:'WE659'
//           WE65E  codep:0x7420 parp:0xe65e size:0x0003 C-string:'WE65E'
//           WE663  codep:0x7394 parp:0xe663 size:0x0006 C-string:'WE663'
//           WE66B  codep:0x7394 parp:0xe66b size:0x0006 C-string:'WE66B'
//           WE673  codep:0x7394 parp:0xe673 size:0x0006 C-string:'WE673'
//           WE67B  codep:0x7394 parp:0xe67b size:0x0006 C-string:'WE67B'
//           WE683  codep:0x7394 parp:0xe683 size:0x0006 C-string:'WE683'
//           WE68B  codep:0x7394 parp:0xe68b size:0x0006 C-string:'WE68B'
//           WE693  codep:0x7394 parp:0xe693 size:0x0006 C-string:'WE693'
//           WE69B  codep:0x7394 parp:0xe69b size:0x0006 C-string:'WE69B'
//           WE6A3  codep:0x7394 parp:0xe6a3 size:0x0006 C-string:'WE6A3'
//           WE6AB  codep:0x7394 parp:0xe6ab size:0x0006 C-string:'WE6AB'
//           WE6B3  codep:0x7420 parp:0xe6b3 size:0x0003 C-string:'WE6B3'
//           WE6B8  codep:0x7420 parp:0xe6b8 size:0x0003 C-string:'WE6B8'
//           WE6BD  codep:0x7394 parp:0xe6bd size:0x0006 C-string:'WE6BD'
//           WE6C5  codep:0x7394 parp:0xe6c5 size:0x0006 C-string:'WE6C5'
//           WE6CD  codep:0x7394 parp:0xe6cd size:0x0006 C-string:'WE6CD'
//           WE6D5  codep:0x7420 parp:0xe6d5 size:0x0003 C-string:'WE6D5'
//           WE6DA  codep:0x224c parp:0xe6da size:0x0016 C-string:'WE6DA'
//          APAUSE  codep:0x224c parp:0xe6fb size:0x0068 C-string:'APAUSE'
//           WE765  codep:0x224c parp:0xe765 size:0x000a C-string:'WE765'
//           WE771  codep:0x224c parp:0xe771 size:0x001c C-string:'WE771'
//           WE78F  codep:0x224c parp:0xe78f size:0x0006 C-string:'WE78F'
//           WE797  codep:0x224c parp:0xe797 size:0x002e C-string:'WE797'
//           WE7C7  codep:0x224c parp:0xe7c7 size:0x0016 C-string:'WE7C7'
//           WE7DF  codep:0x224c parp:0xe7df size:0x0052 C-string:'WE7DF'
//           WE833  codep:0x224c parp:0xe833 size:0x000a C-string:'WE833'
//           WE83F  codep:0x1d29 parp:0xe83f size:0x0002 C-string:'WE83F'
//           WE843  codep:0x224c parp:0xe843 size:0x000e C-string:'WE843'
//           WE853  codep:0x224c parp:0xe853 size:0x0056 C-string:'WE853'
//           WE8AB  codep:0x224c parp:0xe8ab size:0x0006 C-string:'WE8AB'
//           WE8B3  codep:0x224c parp:0xe8b3 size:0x0040 C-string:'WE8B3'
//           WE8F5  codep:0x224c parp:0xe8f5 size:0x0014 C-string:'WE8F5'
//           WE90B  codep:0x224c parp:0xe90b size:0x0049 C-string:'WE90B'
//           WE956  codep:0x224c parp:0xe956 size:0x001a C-string:'WE956'
//           WE972  codep:0x224c parp:0xe972 size:0x0019 C-string:'WE972'
//           WE98D  codep:0x224c parp:0xe98d size:0x001b C-string:'WE98D'
//           WE9AA  codep:0x224c parp:0xe9aa size:0x000e C-string:'WE9AA'
//           WE9BA  codep:0x224c parp:0xe9ba size:0x0012 C-string:'WE9BA'
//           WE9CE  codep:0x224c parp:0xe9ce size:0x0006 C-string:'WE9CE'
//        >SPECIAL  codep:0x4b3b parp:0xe9e1 size:0x0018 C-string:'_gt_SPECIAL'
//           WE9FB  codep:0x224c parp:0xe9fb size:0x0036 C-string:'WE9FB'
//           WEA33  codep:0x224c parp:0xea33 size:0x001c C-string:'WEA33'
//           WEA51  codep:0x224c parp:0xea51 size:0x0016 C-string:'WEA51'
//         .PHRASE  codep:0x224c parp:0xea73 size:0x000e C-string:'DrawPHRASE'
//           WEA83  codep:0x224c parp:0xea83 size:0x0010 C-string:'WEA83'
//        .APHRASE  codep:0x224c parp:0xeaa0 size:0x000e C-string:'DrawAPHRASE'
//           WEAB0  codep:0x224c parp:0xeab0 size:0x0008 C-string:'WEAB0'
//           WEABA  codep:0x224c parp:0xeaba size:0x000a C-string:'WEABA'
//           WEAC6  codep:0x224c parp:0xeac6 size:0x0008 C-string:'WEAC6'
//           WEAD0  codep:0x224c parp:0xead0 size:0x000a C-string:'WEAD0'
//           WEADC  codep:0x224c parp:0xeadc size:0x0006 C-string:'WEADC'
//           WEAE4  codep:0x2214 parp:0xeae4 size:0x0002 C-string:'WEAE4'
//           WEAE8  codep:0x2214 parp:0xeae8 size:0x0002 C-string:'WEAE8'
//           WEAEC  codep:0x2214 parp:0xeaec size:0x0002 C-string:'WEAEC'
//           WEAF0  codep:0x2214 parp:0xeaf0 size:0x0002 C-string:'WEAF0'
//           WEAF4  codep:0x2214 parp:0xeaf4 size:0x0002 C-string:'WEAF4'
//        RACE>TRA  codep:0x4b3b parp:0xeb03 size:0x0030 C-string:'RACE_gt_TRA'
//           WEB35  codep:0x1d29 parp:0xeb35 size:0x0004 C-string:'WEB35'
//           WEB3B  codep:0x224c parp:0xeb3b size:0x0014 C-string:'WEB3B'
//           WEB51  codep:0x224c parp:0xeb51 size:0x0010 C-string:'WEB51'
//           WEB63  codep:0x1d29 parp:0xeb63 size:0x0002 C-string:'WEB63'
//           WEB67  codep:0x224c parp:0xeb67 size:0x0024 C-string:'WEB67'
//           WEB8D  codep:0x224c parp:0xeb8d size:0x0032 C-string:'WEB8D'
//           WEBC1  codep:0x224c parp:0xebc1 size:0x000a C-string:'WEBC1'
//           WEBCD  codep:0x224c parp:0xebcd size:0x000c C-string:'WEBCD'
//           WEBDB  codep:0x1d29 parp:0xebdb size:0x0003 C-string:'WEBDB'
//           WEBE0  codep:0x224c parp:0xebe0 size:0x0008 C-string:'WEBE0'
//           WEBEA  codep:0x224c parp:0xebea size:0x0006 C-string:'WEBEA'
//           WEBF2  codep:0x224c parp:0xebf2 size:0x0008 C-string:'WEBF2'
//           WEBFC  codep:0x224c parp:0xebfc size:0x0012 C-string:'WEBFC'
//           WEC10  codep:0x224c parp:0xec10 size:0x0012 C-string:'WEC10'
//           WEC24  codep:0x1d29 parp:0xec24 size:0x0003 C-string:'WEC24'
//           WEC29  codep:0x224c parp:0xec29 size:0x0008 C-string:'WEC29'
//           WEC33  codep:0x224c parp:0xec33 size:0x0006 C-string:'WEC33'
//           WEC3B  codep:0x224c parp:0xec3b size:0x0012 C-string:'WEC3B'
//           WEC4F  codep:0x224c parp:0xec4f size:0x0012 C-string:'WEC4F'
//           WEC63  codep:0x224c parp:0xec63 size:0x0012 C-string:'WEC63'
//           WEC77  codep:0x224c parp:0xec77 size:0x0010 C-string:'WEC77'
//           WEC89  codep:0x224c parp:0xec89 size:0x0032 C-string:'WEC89'
//           WECBD  codep:0x224c parp:0xecbd size:0x0050 C-string:'WECBD'
//           WED0F  codep:0x224c parp:0xed0f size:0x0006 C-string:'WED0F'
//           WED17  codep:0x224c parp:0xed17 size:0x0032 C-string:'WED17'
//           WED4B  codep:0x224c parp:0xed4b size:0x0010 C-string:'WED4B'
//           WED5D  codep:0x224c parp:0xed5d size:0x000c C-string:'WED5D'
//           WED6B  codep:0x224c parp:0xed6b size:0x0008 C-string:'WED6B'
//           WED75  codep:0x224c parp:0xed75 size:0x0030 C-string:'WED75'
//           WEDA7  codep:0x224c parp:0xeda7 size:0x0010 C-string:'WEDA7'
//           WEDB9  codep:0x224c parp:0xedb9 size:0x0016 C-string:'WEDB9'
//           WEDD1  codep:0x224c parp:0xedd1 size:0x0022 C-string:'WEDD1'
//        RACE-SCR  codep:0x4b3b parp:0xee00 size:0x000c C-string:'RACE_dash_SCR'
//           WEE0E  codep:0x224c parp:0xee0e size:0x003e C-string:'WEE0E'
//           WEE4E  codep:0x224c parp:0xee4e size:0x003c C-string:'WEE4E'
//           WEE8C  codep:0x224c parp:0xee8c size:0x000a C-string:'WEE8C'
//          ?COMSG  codep:0x224c parp:0xeea1 size:0x001e C-string:'IsCOMSG'
//           WEEC1  codep:0x224c parp:0xeec1 size:0x000a C-string:'WEEC1'
//           WEECD  codep:0x224c parp:0xeecd size:0x000a C-string:'WEECD'
//           WEED9  codep:0x224c parp:0xeed9 size:0x000a C-string:'WEED9'
//           WEEE5  codep:0x224c parp:0xeee5 size:0x000a C-string:'WEEE5'
//           WEEF1  codep:0x224c parp:0xeef1 size:0x000a C-string:'WEEF1'
//           WEEFD  codep:0x224c parp:0xeefd size:0x000a C-string:'WEEFD'
//           WEF09  codep:0x224c parp:0xef09 size:0x0012 C-string:'WEF09'
//           WEF1D  codep:0x224c parp:0xef1d size:0x0012 C-string:'WEF1D'
//           WEF31  codep:0x224c parp:0xef31 size:0x0012 C-string:'WEF31'
//           WEF45  codep:0x224c parp:0xef45 size:0x000a C-string:'WEF45'
//           WEF51  codep:0x224c parp:0xef51 size:0x0022 C-string:'WEF51'
//           WEF75  codep:0x224c parp:0xef75 size:0x000a C-string:'WEF75'
//           WEF81  codep:0x224c parp:0xef81 size:0x000a C-string:'WEF81'
//           WEF8D  codep:0x224c parp:0xef8d size:0x000a C-string:'WEF8D'
//           WEF99  codep:0x224c parp:0xef99 size:0x000a C-string:'WEF99'
//           WEFA5  codep:0x224c parp:0xefa5 size:0x000a C-string:'WEFA5'
//           WEFB1  codep:0x224c parp:0xefb1 size:0x000a C-string:'WEFB1'
//        #>SURFAC  codep:0x4b3b parp:0xefc8 size:0x0018 C-string:'_n__gt_SURFAC'
//           WEFE2  codep:0x224c parp:0xefe2 size:0x004a C-string:'WEFE2'
//           WF02E  codep:0x224c parp:0xf02e size:0x0024 C-string:'WF02E'
//           WF054  codep:0x224c parp:0xf054 size:0x003e C-string:'WF054'
//           WF094  codep:0x224c parp:0xf094 size:0x0016 C-string:'WF094'
//           WF0AC  codep:0x1d29 parp:0xf0ac size:0x0002 C-string:'WF0AC'
//           WF0B0  codep:0x224c parp:0xf0b0 size:0x0012 C-string:'WF0B0'
//           WF0C4  codep:0x224c parp:0xf0c4 size:0x0014 C-string:'WF0C4'
//           WF0DA  codep:0x224c parp:0xf0da size:0x0010 C-string:'WF0DA'
//           WF0EC  codep:0x224c parp:0xf0ec size:0x0020 C-string:'WF0EC'
//           WF10E  codep:0x224c parp:0xf10e size:0x0034 C-string:'WF10E'
//           WF144  codep:0x224c parp:0xf144 size:0x0022 C-string:'WF144'
//           WF168  codep:0x224c parp:0xf168 size:0x000a C-string:'WF168'
//           WF174  codep:0x224c parp:0xf174 size:0x0042 C-string:'WF174'
//           WF1B8  codep:0x224c parp:0xf1b8 size:0x000a C-string:'WF1B8'
//           WF1C4  codep:0x224c parp:0xf1c4 size:0x0022 C-string:'WF1C4'
//           WF1E8  codep:0x2214 parp:0xf1e8 size:0x0002 C-string:'WF1E8'
//           WF1EC  codep:0x224c parp:0xf1ec size:0x004c C-string:'WF1EC'
//           WF23A  codep:0x224c parp:0xf23a size:0x006a C-string:'WF23A'
//           WF2A6  codep:0x224c parp:0xf2a6 size:0x0012 C-string:'WF2A6'
//          SYSCAN  codep:0x224c parp:0xf2c3 size:0x0084 C-string:'SYSCAN'
//           WF349  codep:0x224c parp:0xf349 size:0x001a C-string:'WF349'
//           RCASE  codep:0x4b3b parp:0xf36d size:0x001c C-string:'RCASE'
//           WF38B  codep:0x224c parp:0xf38b size:0x0018 C-string:'WF38B'
//           WF3A5  codep:0x224c parp:0xf3a5 size:0x003a C-string:'WF3A5'
//           WF3E1  codep:0x224c parp:0xf3e1 size:0x0010 C-string:'WF3E1'
//           WF3F3  codep:0x224c parp:0xf3f3 size:0x0020 C-string:'WF3F3'
//           WF415  codep:0x224c parp:0xf415 size:0x000e C-string:'WF415'
//           WF425  codep:0x224c parp:0xf425 size:0x0010 C-string:'WF425'
//           WF437  codep:0x224c parp:0xf437 size:0x0028 C-string:'WF437'
//           WF461  codep:0x224c parp:0xf461 size:0x000c C-string:'WF461'
//           WF46F  codep:0x224c parp:0xf46f size:0x0008 C-string:'WF46F'
//           WF479  codep:0x224c parp:0xf479 size:0x0008 C-string:'WF479'
//           WF483  codep:0x224c parp:0xf483 size:0x0008 C-string:'WF483'
//           WF48D  codep:0x224c parp:0xf48d size:0x000e C-string:'WF48D'
//        CLASS>TY  codep:0x4b3b parp:0xf4a8 size:0x002c C-string:'CLASS_gt_TY'
//        DESCRIBE  codep:0x224c parp:0xf4e1 size:0x0000 C-string:'DESCRIBE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_BEEPMS; // BEEPMS
extern const unsigned short int pp_BEEPTONE; // BEEPTONE
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp_XUR; // XUR
extern const unsigned short int pp_YUR; // YUR
extern const unsigned short int pp__i_ASYS; // 'ASYS
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_WCHARS; // WCHARS
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_CTX; // CTX
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_HAZE; // HAZE
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp_NOF; // NOF
extern LoadDataType ART_dash_NAM; // ART-NAM
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color BLUE; // BLUE
extern Color PINK; // PINK
extern Color WHITE; // WHITE
extern IFieldType INST_dash_OF; // INST-OF
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHRASE; // PHRASE
extern IFieldType TEXT_dash_TE; // TEXT-TE
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void D_plus__dash_(); // D+-
void MAX(); // MAX
void MIN(); // MIN
void _n__gt_(); // #>
void _n_S(); // #S
void _st__n_(); // <#
void SIGN(); // SIGN
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void SPACE(); // SPACE
void MS(); // MS
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void ACELLAD(); // ACELLAD
void A_at_(); // A@
void SETLARR(); // SETLARR
void FULLARR(); // FULLARR
void SETREGI(); // SETREGI
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void GetRECORD(); // @RECORD
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void CI_i_(); // CI'
void CJ(); // CJ
void IsNULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void INEXT(); // INEXT
void IPREV(); // IPREV
void ILAST(); // ILAST
void IFIND(); // IFIND
void ALL(); // ALL
void _star_CREATE(); // *CREATE
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void GetCOLOR(); // @COLOR
void _gt_1FONT(); // >1FONT
void _gt_DISPLA(); // >DISPLA
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_I(); // POINT>I
void POS_dot_(); // POS.
void _gt_SSCT(); // >SSCT
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void WUP(); // WUP
void WLINE_dash_U(); // WLINE-U
void WLINE_dash_D(); // WLINE-D
void _gt_BOTT(); // >BOTT
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void TXT_dash_WIN(); // TXT-WIN
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void CURSORS(); // CURSORS
void _do__ex_(); // $!
void _dash_XTRAIL(); // -XTRAIL
void _gt_XOR(); // >XOR
void MAKE_dash_SC(); // MAKE-SC
void DELETE_dash_(); // DELETE-
void HUFF_gt_(); // HUFF>
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void TIME(); // TIME
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void _st__ex__gt_(); // <!>
void CI(); // CI
void LPLOT(); // LPLOT
void LXPLOT(); // LXPLOT
void BLT(); // BLT
void _ro_XYSCAN(); // (XYSCAN


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE83F = 0xe83f; // WE83F size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEB35 = 0xeb35; // WEB35 size: 4
// {0x56, 0x3a, 0x20, 0x56}

const unsigned short int pp_WEB63 = 0xeb63; // WEB63 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEBDB = 0xebdb; // WEBDB size: 3
// {0x3a, 0x20, 0x05}

const unsigned short int pp_WEC24 = 0xec24; // WEC24 size: 3
// {0x3a, 0x20, 0x05}

const unsigned short int pp_WF0AC = 0xf0ac; // WF0AC size: 2
// {0x3a, 0x20}


const unsigned short int cc_WEAE4 = 0xeae4; // WEAE4
const unsigned short int cc_WEAE8 = 0xeae8; // WEAE8
const unsigned short int cc_WEAEC = 0xeaec; // WEAEC
const unsigned short int cc_WEAF0 = 0xeaf0; // WEAF0
const unsigned short int cc_WEAF4 = 0xeaf4; // WEAF4
const unsigned short int cc_WF1E8 = 0xf1e8; // WF1E8


// 0xe602: db 0xf4 0x00 '  '

// ================================================
// 0xe604: WORD 'WE606' codep=0x224c parp=0xe606 params=2 returns=2
// ================================================

void WE606() // WE606
{
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0);
  GetDS(); // @DS
  _2OVER(); // 2OVER
  _gt_XOR(); // >XOR
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe620: WORD 'WE622' codep=0x7394 parp=0xe622
// ================================================
LoadDataType WE622 = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe628: WORD 'WE62A' codep=0x7394 parp=0xe62a
// ================================================
LoadDataType WE62A = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe630: WORD 'WE632' codep=0x7394 parp=0xe632
// ================================================
LoadDataType WE632 = {PLANETIDX, 0x07, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe638: WORD 'WE63A' codep=0x7394 parp=0xe63a
// ================================================
LoadDataType WE63A = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe640: WORD 'WE642' codep=0x7394 parp=0xe642
// ================================================
LoadDataType WE642 = {PLANETIDX, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe648: WORD 'WE64A' codep=0x7420 parp=0xe64a
// ================================================
IFieldType WE64A = {COMM_MSGIDX, 0x0b, 0x03};

// ================================================
// 0xe64d: WORD 'WE64F' codep=0x7420 parp=0xe64f
// ================================================
IFieldType WE64F = {ENCOUNTERIDX, 0x1c, 0x01};

// ================================================
// 0xe652: WORD 'WE654' codep=0x7420 parp=0xe654
// ================================================
IFieldType WE654 = {ENCOUNTERIDX, 0x1d, 0x01};

// ================================================
// 0xe657: WORD 'WE659' codep=0x7420 parp=0xe659
// ================================================
IFieldType WE659 = {ENCOUNTERIDX, 0x1a, 0x01};

// ================================================
// 0xe65c: WORD 'WE65E' codep=0x7420 parp=0xe65e
// ================================================
IFieldType WE65E = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xe661: WORD 'WE663' codep=0x7394 parp=0xe663
// ================================================
LoadDataType WE663 = {TRADERSIDX, 0x00, 0x10, 0x32, 0x6ad1};

// ================================================
// 0xe669: WORD 'WE66B' codep=0x7394 parp=0xe66b
// ================================================
LoadDataType WE66B = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe671: WORD 'WE673' codep=0x7394 parp=0xe673
// ================================================
// orphan
LoadDataType WE673 = {TRADERSIDX, 0x1d, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe679: WORD 'WE67B' codep=0x7394 parp=0xe67b
// ================================================
// orphan
LoadDataType WE67B = {TRADERSIDX, 0x1f, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe681: WORD 'WE683' codep=0x7394 parp=0xe683
// ================================================
// orphan
LoadDataType WE683 = {TRADERSIDX, 0x20, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe689: WORD 'WE68B' codep=0x7394 parp=0xe68b
// ================================================
// orphan
LoadDataType WE68B = {TRADERSIDX, 0x21, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe691: WORD 'WE693' codep=0x7394 parp=0xe693
// ================================================
// orphan
LoadDataType WE693 = {TRADERSIDX, 0x22, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe699: WORD 'WE69B' codep=0x7394 parp=0xe69b
// ================================================
// orphan
LoadDataType WE69B = {TRADERSIDX, 0x23, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe6a1: WORD 'WE6A3' codep=0x7394 parp=0xe6a3
// ================================================
// orphan
LoadDataType WE6A3 = {STARIDX, 0x00, 0x03, 0x00, 0x0000};

// ================================================
// 0xe6a9: WORD 'WE6AB' codep=0x7394 parp=0xe6ab
// ================================================
LoadDataType WE6AB = {ELEMENTIDX, 0x00, 0x10, 0x17, 0x6ba9};

// ================================================
// 0xe6b1: WORD 'WE6B3' codep=0x7420 parp=0xe6b3
// ================================================
IFieldType WE6B3 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe6b6: WORD 'WE6B8' codep=0x7420 parp=0xe6b8
// ================================================
IFieldType WE6B8 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xe6bb: WORD 'WE6BD' codep=0x7394 parp=0xe6bd
// ================================================
// orphan
LoadDataType WE6BD = {CREATUREIDX, 0x00, 0x14, 0x22, 0x6f07};

// ================================================
// 0xe6c3: WORD 'WE6C5' codep=0x7394 parp=0xe6c5
// ================================================
LoadDataType WE6C5 = {CREATUREIDX, 0x17, 0x03, 0x22, 0x6f07};

// ================================================
// 0xe6cb: WORD 'WE6CD' codep=0x7394 parp=0xe6cd
// ================================================
LoadDataType WE6CD = {CREATUREIDX, 0x1f, 0x01, 0x22, 0x6f07};

// ================================================
// 0xe6d3: WORD 'WE6D5' codep=0x7420 parp=0xe6d5
// ================================================
// orphan
IFieldType WE6D5 = {CREATUREIDX, 0x17, 0x01};

// ================================================
// 0xe6d8: WORD 'WE6DA' codep=0x224c parp=0xe6da params=1 returns=0
// ================================================
// orphan

void WE6DA() // WE6DA
{
  Push(0x001c);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe6f0: WORD 'APAUSE' codep=0x224c parp=0xe6fb
// ================================================
// entry

void APAUSE() // APAUSE
{
  unsigned short int a, b;
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  GetCOLOR(); // @COLOR
  a = Pop(); // >R
  Push(Read16(pp_IsON_dash_PLA)); // ?ON-PLA @
  b = Pop(); // >R
  Push(b); // I
  if (Pop() != 0)
  {
    GetColor(PINK);
  } else
  {
    GetColor(BLUE);
  }
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    Pop(); // DROP
    GetColor(WHITE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    _i_KEY(); // 'KEY
    Push(Read16(regsp)); // DUP
    _ro_XYSCAN(); // (XYSCAN case
    Pop(); Pop(); // 2DROP
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(b); // I
  if (Pop() != 0)
  {
    GetColor(RED);
  } else
  {
    GetColor(DK_dash_BLUE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  Pop(); Pop(); // 2DROP
  Push(b); // R>
  Pop(); // DROP
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe763: WORD 'WE765' codep=0x224c parp=0xe765
// ================================================

void WE765() // WE765
{
  Push(0x4e20); Push(0x0000);
  APAUSE(); // APAUSE
}


// ================================================
// 0xe76f: WORD 'WE771' codep=0x224c parp=0xe771 params=0 returns=0
// ================================================

void WE771() // WE771
{
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
  Push(Read16(pp_LINE_dash_CO)); // LINE-CO @
  Push(Read16(pp_WLINES)); // WLINES @
  _gt_(); // >
  if (Pop() == 0) return;
  WE765(); // WE765
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
}


// ================================================
// 0xe78d: WORD 'WE78F' codep=0x224c parp=0xe78f
// ================================================

void WE78F() // WE78F
{
  WE771(); // WE771
  WUP(); // WUP
}


// ================================================
// 0xe795: WORD 'WE797' codep=0x224c parp=0xe797
// ================================================

void WE797() // WE797
{
  unsigned short int i, imax, a;
  _2DUP(); // 2DUP
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push((Read16(Pop())&0xFF)==Read16(cc_BL)?1:0); //  C@ BL =
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
    } else
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  a = Pop(); // >R
  SWAP(); // SWAP
  Push(Pop() - a); //  I -
  Push(Pop() + Pop()); // +
  Push(a); // R>
  SWAP(); // SWAP
}


// ================================================
// 0xe7c5: WORD 'WE7C7' codep=0x224c parp=0xe7c7
// ================================================
// orphan

void WE7C7() // WE7C7
{
  Push(0);
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  D_plus__dash_(); // D+-
  _st__n_(); // <#
  _n_S(); // #S
  ROT(); // ROT
  SIGN(); // SIGN
  _n__gt_(); // #>
}


// ================================================
// 0xe7dd: WORD 'WE7DF' codep=0x224c parp=0xe7df
// ================================================

void WE7DF() // WE7DF
{
  unsigned short int i, imax;
  WE797(); // WE797
  _2DUP(); // 2DUP
  Push(Pop() + 1); //  1+
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0);
  ROT(); // ROT
  ROT(); // ROT

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(((Read16(i)&0xFF)==Read16(cc_BL)?1:0) | (i + 1==imax?1:0)); // I C@ BL = I 1+ I' = OR
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(i); // I
      Push(3);
      PICK(); // PICK
      _dash_(); // -
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(regsp)); // DUP
  Push(4);
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  Push(3);
  PICK(); // PICK
  _dash_(); // -
  Push(Pop() - 1); //  1-
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe831: WORD 'WE833' codep=0x224c parp=0xe833 params=2 returns=2
// ================================================

void WE833() // WE833
{
  Push(Pop() - 1); //  1-
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
}


// ================================================
// 0xe83d: WORD 'WE83F' codep=0x1d29 parp=0xe83f
// ================================================
// 0xe83f: db 0x3a 0x20 ': '

// ================================================
// 0xe841: WORD 'WE843' codep=0x224c parp=0xe843 params=1 returns=1
// ================================================

void WE843() // WE843
{
  Push(Pop() + Read16(pp_CTX)); //  CTX @ +
  Push(Read16(pp_WCHARS)); // WCHARS @
  _st_(); // <
}


// ================================================
// 0xe851: WORD 'WE853' codep=0x224c parp=0xe853 params=2 returns=0
// ================================================

void WE853() // WE853
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    WE843(); // WE843
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      WE78F(); // WE78F
      _gt_BOTT(); // >BOTT
      Push(pp_CTX); // CTX
      _099(); // 099
    }
    OVER(); // OVER
    Push(!(((Read16(Pop())&0xFF)==0x002e?1:0) | (Read16(pp_CTX)==0?1:0))); //  C@ 0x002e = CTX @ 0= OR NOT
    if (Pop() != 0)
    {
      SPACE(); // SPACE
    }
    Push(Read16(regsp)); // DUP
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(Read16(pp_WE83F)); // WE83F @
    if (Pop() != 0)
    {
      Push(0xfffc);
      Push(pp_XBLT); // XBLT
      _plus__ex__2(); // +!_2
      Push(pp_WE83F); // WE83F
      _099(); // 099
    }
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xe8a9: WORD 'WE8AB' codep=0x224c parp=0xe8ab params=0 returns=1
// ================================================

void WE8AB() // WE8AB
{
  GetINST_dash_S(); // @INST-S
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xe8b1: WORD 'WE8B3' codep=0x224c parp=0xe8b3 params=1 returns=1
// ================================================

void WE8B3() // WE8B3
{
  unsigned short int a;
  Push(Read16(0x65e1+WE6B8.offset)); // WE6B8<IFIELD> @
  a = Pop(); // >R
  WE8AB(); // WE8AB
  Push(Read16(a)); // R@
  Push(Pop() & 1); //  1 AND
  Push(Read16(a)); // R@
  Push(!(Pop() & 2)); //  2 AND NOT
  Push(Read16(a)); // R@
  Push(Pop() & 8); //  8 AND
  _gt_FLAG(); // >FLAG
  Push(Read16(a)); // R@
  Push(!(Pop() & 0x0010) | (Read16(pp_CONTEXT_3)==0?1:0)); //  0x0010 AND NOT CONTEXT_3 @ 0= OR
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() + Pop()); // +
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe8f3: WORD 'WE8F5' codep=0x224c parp=0xe8f5
// ================================================

void WE8F5() // WE8F5
{
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0);
  Push(0xe8b3); // 'WE8B3'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe909: WORD 'WE90B' codep=0x224c parp=0xe90b params=0 returns=0
// ================================================

void WE90B() // WE90B
{
  Push(0);
  WE8B3(); // WE8B3
  if (Pop() == 0) return;
  Push(0x65e1+WE6B3.offset); // WE6B3<IFIELD>
  COUNT(); // COUNT
  WE853(); // WE853
  Push(pp_WE83F); // WE83F
  ON_2(); // ON_2
  WE8F5(); // WE8F5
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop()==2?1:0); //  2 =
    if (Pop() != 0)
    {
      SET_STR_AS_PARAM(" AND ");
      WE853(); // WE853
    } else
    {
      Push(Read16(regsp)); // DUP
      Push(1);
      _gt_(); // >
      if (Pop() != 0)
      {
        SET_STR_AS_PARAM(", ");
        WE853(); // WE853
      }
    }
  }
  Push(Pop() - 1); //  1-
}


// ================================================
// 0xe954: WORD 'WE956' codep=0x224c parp=0xe956
// ================================================

void WE956() // WE956
{
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WE8F5(); // WE8F5
  Push(0xe90b); // 'WE90B'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  Pop(); // DROP
  WE833(); // WE833
  Push(0);
}


// ================================================
// 0xe970: WORD 'WE972' codep=0x224c parp=0xe972
// ================================================

void WE972() // WE972
{
  WE8F5(); // WE8F5
  Push(Pop() - 1); //  1-
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("ARE");
    return;
  }
  SET_STR_AS_PARAM("IS");
}


// ================================================
// 0xe98b: WORD 'WE98D' codep=0x224c parp=0xe98d
// ================================================

void WE98D() // WE98D
{
  WE8F5(); // WE8F5
  Push(Pop() - 1); //  1-
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("HAVE");
    return;
  }
  SET_STR_AS_PARAM("HAS");
}


// ================================================
// 0xe9a8: WORD 'WE9AA' codep=0x224c parp=0xe9aa
// ================================================

void WE9AA() // WE9AA
{
  WE8F5(); // WE8F5
  Push(Pop() - 1); //  1-
  if (Pop() == 0) return;
  SET_STR_AS_PARAM("S");
}


// ================================================
// 0xe9b8: WORD 'WE9BA' codep=0x224c parp=0xe9ba params=2 returns=3
// ================================================

void WE9BA() // WE9BA
{
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WE6B3.offset); // WE6B3<IFIELD>
  COUNT(); // COUNT
  WE853(); // WE853
  ICLOSE(); // ICLOSE
  WE833(); // WE833
  Push(0);
}


// ================================================
// 0xe9cc: WORD 'WE9CE' codep=0x224c parp=0xe9ce params=1 returns=1
// ================================================
// orphan

void WE9CE() // WE9CE
{
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xe9d4: WORD '>SPECIAL' codep=0x4b3b parp=0xe9e1
// ================================================

void _gt_SPECIAL() // >SPECIAL
{
  switch(Pop()) // >SPECIAL
  {
  case 37:
    WE956(); // WE956
    break;
  case 47:
    WE972(); // WE972
    break;
  case 35:
    WE98D(); // WE98D
    break;
  case 43:
    WE9AA(); // WE9AA
    break;
  case 42:
    WE9BA(); // WE9BA
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xe9f9: WORD 'WE9FB' codep=0x224c parp=0xe9fb
// ================================================

void WE9FB() // WE9FB
{
  unsigned short int a;
  Push(pp_WE83F); // WE83F
  _099(); // 099
  GetCOLOR(); // @COLOR
  a = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(Pop()==1?1:0); //  1 =
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    _gt_SPECIAL(); // >SPECIAL case
  } else
  {
    Push(0);
  }
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    WE853(); // WE853
    WE833(); // WE833
  }
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xea31: WORD 'WEA33' codep=0x224c parp=0xea33
// ================================================

void WEA33() // WEA33
{
  _gt_BOTT(); // >BOTT
  WE78F(); // WE78F
  do
  {
    WE7DF(); // WE7DF
    WE9FB(); // WE9FB
    WE853(); // WE853
    Push(1);
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea4f: WORD 'WEA51' codep=0x224c parp=0xea51
// ================================================

void WEA51() // WEA51
{
  Push(pp_CTX); // CTX
  _099(); // 099
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  WEA33(); // WEA33
}


// ================================================
// 0xea67: WORD '.PHRASE' codep=0x224c parp=0xea73 params=0 returns=0
// ================================================
// entry

void DrawPHRASE() // .PHRASE
{
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _gt_1FONT(); // >1FONT
  WEA51(); // WEA51
}


// ================================================
// 0xea81: WORD 'WEA83' codep=0x224c parp=0xea83 params=0 returns=0
// ================================================

void WEA83() // WEA83
{
  ILAST(); // ILAST
  CI(); // CI
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+INST_dash_OF.offset); // INST-OF<IFIELD>
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea93: WORD '.APHRASE' codep=0x224c parp=0xeaa0 params=2 returns=0
// ================================================
// entry

void DrawAPHRASE() // .APHRASE
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  DrawPHRASE(); // .PHRASE
  WEA83(); // WEA83
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeaae: WORD 'WEAB0' codep=0x224c parp=0xeab0 params=2 returns=1
// ================================================
// orphan

void WEAB0() // WEAB0
{
  Push(0x0064);
  _star__slash_(); // */
}


// ================================================
// 0xeab8: WORD 'WEABA' codep=0x224c parp=0xeaba params=0 returns=1
// ================================================
// orphan

void WEABA() // WEABA
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xeac4: WORD 'WEAC6' codep=0x224c parp=0xeac6 params=0 returns=1
// ================================================
// orphan

void WEAC6() // WEAC6
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xeace: WORD 'WEAD0' codep=0x224c parp=0xead0 params=0 returns=1
// ================================================
// orphan

void WEAD0() // WEAD0
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xeada: WORD 'WEADC' codep=0x224c parp=0xeadc params=3 returns=1
// ================================================
// orphan

void WEADC() // WEADC
{
  MIN(); // MIN
  MAX(); // MAX
}


// ================================================
// 0xeae2: WORD 'WEAE4' codep=0x2214 parp=0xeae4
// ================================================
// 0xeae4: dw 0x000a

// ================================================
// 0xeae6: WORD 'WEAE8' codep=0x2214 parp=0xeae8
// ================================================
// 0xeae8: dw 0x0011

// ================================================
// 0xeaea: WORD 'WEAEC' codep=0x2214 parp=0xeaec
// ================================================
// 0xeaec: dw 0x0029

// ================================================
// 0xeaee: WORD 'WEAF0' codep=0x2214 parp=0xeaf0
// ================================================
// 0xeaf0: dw 0x002a

// ================================================
// 0xeaf2: WORD 'WEAF4' codep=0x2214 parp=0xeaf4
// ================================================
// 0xeaf4: dw 0x002b

// ================================================
// 0xeaf6: WORD 'RACE>TRA' codep=0x4b3b parp=0xeb03
// ================================================

void RACE_gt_TRA() // RACE>TRA
{
  switch(Pop()) // RACE>TRA
  {
  case 1:
    Push(1);
    break;
  case 2:
    Push(2);
    break;
  case 8:
    Push(3);
    break;
  case 11:
    Push(Read16(cc_WEAF4)); // WEAF4
    break;
  case 10:
    Push(6);
    break;
  case 4:
    Push(8);
    break;
  case 5:
    Push(9);
    break;
  case 7:
    Push(Read16(cc_WEAE4)); // WEAE4
    break;
  case 6:
    Push(Read16(cc_WEAE8)); // WEAE8
    break;
  case 18:
    Push(Read16(cc_WEAEC)); // WEAEC
    break;
  case 19:
    Push(Read16(cc_WEAF0)); // WEAF0
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xeb33: WORD 'WEB35' codep=0x1d29 parp=0xeb35
// ================================================
// 0xeb35: db 0x56 0x3a 0x20 0x56 'V: V'

// ================================================
// 0xeb39: WORD 'WEB3B' codep=0x224c parp=0xeb3b params=0 returns=0
// ================================================
// orphan

void WEB3B() // WEB3B
{
  Push(0x65e1+WE64A.offset); // WE64A<IFIELD>
  _1_dot_5_at_(); // 1.5@
  Push(pp_WEB35); // WEB35
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xeb4f: WORD 'WEB51' codep=0x224c parp=0xeb51
// ================================================

void WEB51() // WEB51
{
  Push(Read16(cc_FALSE)); // FALSE
  Push2Words("*MESS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xeb3b); // 'WEB3B'
  ALL(); // ALL
}


// ================================================
// 0xeb61: WORD 'WEB63' codep=0x1d29 parp=0xeb63
// ================================================
// 0xeb63: db 0x3a 0x20 ': '

// ================================================
// 0xeb65: WORD 'WEB67' codep=0x224c parp=0xeb67
// ================================================

void WEB67() // WEB67
{
  WEB51(); // WEB51
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  Push(Read16(cc_WEAF4)); // WEAF4
  Push(Read16(pp_WEB63)); // WEB63 @
  Push(1);
  _star_CREATE(); // *CREATE
  Push(pp_WEB35); // WEB35
  _1_dot_5_at_(); // 1.5@
  Push(0x65e1+WE64A.offset); // WE64A<IFIELD>
  _1_dot_5_ex__2(); // 1.5!_2
  goto label1;

  label1:
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeb8b: WORD 'WEB8D' codep=0x224c parp=0xeb8d
// ================================================

void WEB8D() // WEB8D
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
// 0xebbf: WORD 'WEBC1' codep=0x224c parp=0xebc1
// ================================================

void WEBC1() // WEBC1
{
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  WEB8D(); // WEB8D
}


// ================================================
// 0xebcb: WORD 'WEBCD' codep=0x224c parp=0xebcd
// ================================================

void WEBCD() // WEBCD
{
  RACE_gt_TRA(); // RACE>TRA case
  Push(0x0015);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
}


// ================================================
// 0xebd9: WORD 'WEBDB' codep=0x1d29 parp=0xebdb
// ================================================
// 0xebdb: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xebde: WORD 'WEBE0' codep=0x224c parp=0xebe0 params=0 returns=0
// ================================================

void WEBE0() // WEBE0
{
  CI(); // CI
  Push(pp_WEBDB); // WEBDB
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xebe8: WORD 'WEBEA' codep=0x224c parp=0xebea params=0 returns=2
// ================================================

void WEBEA() // WEBEA
{
  Push(pp_WEBDB); // WEBDB
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xebf0: WORD 'WEBF2' codep=0x224c parp=0xebf2 params=0 returns=0
// ================================================

void WEBF2() // WEBF2
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
}


// ================================================
// 0xebfa: WORD 'WEBFC' codep=0x224c parp=0xebfc params=0 returns=0
// ================================================

void WEBFC() // WEBFC
{
  WEBF2(); // WEBF2
  CDROP(); // CDROP
  WEBEA(); // WEBEA
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  WEBE0(); // WEBE0
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec0e: WORD 'WEC10' codep=0x224c parp=0xec10 params=0 returns=0
// ================================================

void WEC10() // WEC10
{
  WEBF2(); // WEBF2
  CDROP(); // CDROP
  WEBEA(); // WEBEA
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  WEBE0(); // WEBE0
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec22: WORD 'WEC24' codep=0x1d29 parp=0xec24
// ================================================
// 0xec24: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xec27: WORD 'WEC29' codep=0x224c parp=0xec29 params=0 returns=0
// ================================================

void WEC29() // WEC29
{
  CI(); // CI
  Push(pp_WEC24); // WEC24
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xec31: WORD 'WEC33' codep=0x224c parp=0xec33 params=0 returns=2
// ================================================

void WEC33() // WEC33
{
  Push(pp_WEC24); // WEC24
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xec39: WORD 'WEC3B' codep=0x224c parp=0xec3b params=0 returns=0
// ================================================

void WEC3B() // WEC3B
{
  WEBF2(); // WEBF2
  CDROP(); // CDROP
  WEC33(); // WEC33
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  WEC29(); // WEC29
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec4d: WORD 'WEC4F' codep=0x224c parp=0xec4f params=0 returns=0
// ================================================

void WEC4F() // WEC4F
{
  WEBF2(); // WEBF2
  CDROP(); // CDROP
  WEC33(); // WEC33
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  WEC29(); // WEC29
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec61: WORD 'WEC63' codep=0x224c parp=0xec63
// ================================================

void WEC63() // WEC63
{
  Push2Words("*MESS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(cc_WEAF4)); // WEAF4
  SWAP(); // SWAP
  IFIND(); // IFIND
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec75: WORD 'WEC77' codep=0x224c parp=0xec77
// ================================================

void WEC77() // WEC77
{
  WEBF2(); // WEBF2
  Push(0x0038);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec87: WORD 'WEC89' codep=0x224c parp=0xec89
// ================================================

void WEC89() // WEC89
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0038);
  OVER(); // OVER
  Push(1);
  _star_CREATE(); // *CREATE
  WEBCD(); // WEBCD
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  Push(0x0026);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push((0x65e1+TEXT_dash_TE.offset) + 1); // TEXT-TE<IFIELD> 1+
  Push(0x0010);
  CMOVE_2(); // CMOVE_2
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(1);
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xecbb: WORD 'WECBD' codep=0x224c parp=0xecbd
// ================================================

void WECBD() // WECBD
{
  unsigned short int i, imax, a;
  MAKE_dash_SC(); // MAKE-SC
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  Push(pp_SCROLL_dash_); // SCROLL-
  _099(); // 099
  Push(1);
  Push(2);
  Push(6);
  Push(4);
  Push(7);
  Push(0x0012);
  Push(Read16(cc_WEAE4)); // WEAE4
  Push(8);
  Push(0x000b);
  Push(0x0013);
  Push(5);
  Push(0x000b);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    a = Pop(); // >R
    Push(Read16(a)); // R@
    WEC63(); // WEC63
    if (Pop() != 0)
    {
      Push(Read16(a)); // R@
      WEC77(); // WEC77
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        Push(Read16(a)); // R@
        WEC89(); // WEC89
      }
    }
    Push(a); // R>
    Pop(); // DROP
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xed0d: WORD 'WED0F' codep=0x224c parp=0xed0f params=0 returns=0
// ================================================

void WED0F() // WED0F
{
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  _do__dot_(); // $.
}


// ================================================
// 0xed15: WORD 'WED17' codep=0x224c parp=0xed17
// ================================================

void WED17() // WED17
{
  unsigned short int i, imax;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WLINES)); // WLINES @
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  MIN(); // MIN
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push((Read16(pp_WTOP) - 2) - i * 7); // WTOP @ 2 - I 7 * -
    POS_dot_(); // POS.
    WED0F(); // WED0F
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xed49: WORD 'WED4B' codep=0x224c parp=0xed4b
// ================================================

void WED4B() // WED4B
{
  WEBF2(); // WEBF2
  WEBE0(); // WEBE0
  WED17(); // WED17
  IPREV(); // IPREV
  WEC29(); // WEC29
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xed5b: WORD 'WED5D' codep=0x224c parp=0xed5d
// ================================================

void WED5D() // WED5D
{
  Push(0x53a4); Push(0x0002);
  WE606(); // WE606
  DrawTTY(); // .TTY
}


// ================================================
// 0xed69: WORD 'WED6B' codep=0x224c parp=0xed6b
// ================================================

void WED6B() // WED6B
{
  WEBC1(); // WEBC1
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xed73: WORD 'WED75' codep=0x224c parp=0xed75
// ================================================

void WED75() // WED75
{
  _gt_SSCT(); // >SSCT
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  WED5D(); // WED5D
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  Push(Read16(pp_WLINES) - 1); // WLINES @ 1-
  MIN(); // MIN
  Push(pp_WLINES); // WLINES
  Store_2(); // !_2
  Push(Read16(pp_WTOP) - Read16(pp_WLINES) * 7); // WTOP @ WLINES @ 7 * -
  Push(pp_WBOTTOM); // WBOTTOM
  Store_2(); // !_2
  WED4B(); // WED4B
  WED6B(); // WED6B
}


// ================================================
// 0xeda5: WORD 'WEDA7' codep=0x224c parp=0xeda7 params=0 returns=1
// ================================================

void WEDA7() // WEDA7
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xedb7: WORD 'WEDB9' codep=0x224c parp=0xedb9
// ================================================

void WEDB9() // WEDB9
{
  CLICK(); // CLICK
  WEBFC(); // WEBFC
  WEC3B(); // WEC3B
  WEC33(); // WEC33
  _gt_C_plus_S(); // >C+S
  WED6B(); // WED6B
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  WLINE_dash_U(); // WLINE-U
  WED6B(); // WED6B
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedcf: WORD 'WEDD1' codep=0x224c parp=0xedd1
// ================================================

void WEDD1() // WEDD1
{
  CLICK(); // CLICK
  WEC10(); // WEC10
  WEC4F(); // WEC4F
  WEBEA(); // WEBEA
  _gt_C_plus_S(); // >C+S
  WED6B(); // WED6B
  Push(-2);
  Push(pp_WTOP); // WTOP
  _plus__ex__2(); // +!_2
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  WLINE_dash_D(); // WLINE-D
  Push(2);
  Push(pp_WTOP); // WTOP
  _plus__ex__2(); // +!_2
  WED6B(); // WED6B
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedf3: WORD 'RACE-SCR' codep=0x4b3b parp=0xee00
// ================================================

void RACE_dash_SCR() // RACE-SCR
{
  switch(Pop()) // RACE-SCR
  {
  case 65535:
    WEDD1(); // WEDD1
    break;
  case 1:
    WEDB9(); // WEDB9
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xee0c: WORD 'WEE0E' codep=0x224c parp=0xee0e
// ================================================

void WEE0E() // WEE0E
{
  WECBD(); // WECBD
  WEDA7(); // WEDA7
  if (Pop() == 0) goto label1;
  WED75(); // WED75
  WEBF2(); // WEBF2
  do
  {
    XYSCAN(); // XYSCAN
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      RACE_dash_SCR(); // RACE-SCR case
    } else
    {
      Pop(); // DROP
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  WEBEA(); // WEBEA
  _gt_C_plus_S(); // >C+S
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  goto label1;

  label1:
  Push(2);
  _star_CLOSE(); // *CLOSE
  DELETE_dash_(); // DELETE-
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  _gt_SSCT(); // >SSCT
  CTERASE(); // CTERASE
}


// ================================================
// 0xee4c: WORD 'WEE4E' codep=0x224c parp=0xee4e params=0 returns=1
// ================================================

void WEE4E() // WEE4E
{
  Push(Read16(pp_PAST)); // PAST @
  _gt_FLAG(); // >FLAG
  Push(Read16(0x65e1+WE64F.offset)&0xFF); // WE64F<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(!Read16(pp_PAST)); // PAST @ NOT
  Push(Read16(0x65e1+WE654.offset)&0xFF); // WE654<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Read16(0x65e1+WE659.offset)&0xFF); // WE659<IFIELD> C@
  if (Pop() != 0)
  {
    CI(); // CI
    Push(Pop() | Pop()); // OR
    Push(Pop() & Read16(pp_STARDAT)); //  STARDAT @ AND
    _gt_FLAG(); // >FLAG
    Push(Pop() & Pop()); // AND
  }
  Push(Pop() & (Read16(0x65e1+WE65E.offset)&0xFF)); //  WE65E<IFIELD> C@ AND
}


// ================================================
// 0xee8a: WORD 'WEE8C' codep=0x224c parp=0xee8c params=0 returns=2
// ================================================

void WEE8C() // WEE8C
{
  Push(0x5400); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xee96: WORD '?COMSG' codep=0x224c parp=0xeea1
// ================================================
// entry

void IsCOMSG() // ?COMSG
{
  if (Pop() != 0)
  {
    WEE0E(); // WEE0E
    _gt_SSCT(); // >SSCT
    CTINIT(); // CTINIT
    Push(pp_LINE_dash_CO); // LINE-CO
    _099(); // 099
    return;
  }
  Push(pp_WEB63); // WEB63
  Store_2(); // !_2
  Push(pp_WEB35); // WEB35
  _1_dot_5_ex__2(); // 1.5!_2
  WEB67(); // WEB67
}


// ================================================
// 0xeebf: WORD 'WEEC1' codep=0x224c parp=0xeec1 params=0 returns=2
// ================================================

void WEEC1() // WEEC1
{
  Push(0x5478); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xeecb: WORD 'WEECD' codep=0x224c parp=0xeecd params=0 returns=2
// ================================================

void WEECD() // WEECD
{
  Push(0x54c0); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xeed7: WORD 'WEED9' codep=0x224c parp=0xeed9 params=0 returns=2
// ================================================

void WEED9() // WEED9
{
  Push(0x5556); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xeee3: WORD 'WEEE5' codep=0x224c parp=0xeee5 params=0 returns=2
// ================================================

void WEEE5() // WEEE5
{
  Push(0x55e5); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xeeef: WORD 'WEEF1' codep=0x224c parp=0xeef1 params=0 returns=2
// ================================================

void WEEF1() // WEEF1
{
  Push(0x5674); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xeefb: WORD 'WEEFD' codep=0x224c parp=0xeefd params=0 returns=2
// ================================================

void WEEFD() // WEEFD
{
  Push(0x5707); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xef07: WORD 'WEF09' codep=0x224c parp=0xef09 params=0 returns=2
// ================================================

void WEF09() // WEF09
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    WEEF1(); // WEEF1
    return;
  }
  WEEFD(); // WEEFD
}


// ================================================
// 0xef1b: WORD 'WEF1D' codep=0x224c parp=0xef1d params=0 returns=2
// ================================================

void WEF1D() // WEF1D
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    WEEC1(); // WEEC1
    return;
  }
  WEEE5(); // WEEE5
}


// ================================================
// 0xef2f: WORD 'WEF31' codep=0x224c parp=0xef31 params=0 returns=2
// ================================================

void WEF31() // WEF31
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    WEE8C(); // WEE8C
    return;
  }
  WEED9(); // WEED9
}


// ================================================
// 0xef43: WORD 'WEF45' codep=0x224c parp=0xef45
// ================================================

void WEF45() // WEF45
{
  WUP(); // WUP
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xef4f: WORD 'WEF51' codep=0x224c parp=0xef51
// ================================================

void WEF51() // WEF51
{
  GetINST_dash_S(); // @INST-S
  Push(0);
  Push(0x0012);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    CI(); // CI
    Pop(); // DROP
  } else
  {
    LoadData(WE632); // from 'PLANET'
    Push(Read16(Pop())); //  @
  }
  Push(0xbaa2); // 'MERCA'
  MODULE(); // MODULE
}


// ================================================
// 0xef73: WORD 'WEF75' codep=0x224c parp=0xef75 params=0 returns=2
// ================================================

void WEF75() // WEF75
{
  Push(0x578a); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xef7f: WORD 'WEF81' codep=0x224c parp=0xef81 params=0 returns=2
// ================================================

void WEF81() // WEF81
{
  Push(0x579a); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xef8b: WORD 'WEF8D' codep=0x224c parp=0xef8d params=0 returns=2
// ================================================

void WEF8D() // WEF8D
{
  Push(0x57ad); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xef97: WORD 'WEF99' codep=0x224c parp=0xef99 params=0 returns=2
// ================================================

void WEF99() // WEF99
{
  Push(0x57c0); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xefa3: WORD 'WEFA5' codep=0x224c parp=0xefa5 params=0 returns=2
// ================================================

void WEFA5() // WEFA5
{
  Push(0x57d3); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xefaf: WORD 'WEFB1' codep=0x224c parp=0xefb1 params=0 returns=2
// ================================================

void WEFB1() // WEFB1
{
  Push(0x57e4); Push(0x0002);
  WE606(); // WE606
}


// ================================================
// 0xefbb: WORD '#>SURFAC' codep=0x4b3b parp=0xefc8
// ================================================

void _n__gt_SURFAC() // #>SURFAC
{
  switch(Pop()) // #>SURFAC
  {
  case 1:
    WEF75(); // WEF75
    break;
  case 2:
    WEF8D(); // WEF8D
    break;
  case 3:
    WEF81(); // WEF81
    break;
  case 4:
    WEF99(); // WEF99
    break;
  case 5:
    WEFA5(); // WEFA5
    break;
  default:
    WEFB1(); // WEFB1
    break;

  }
}

// ================================================
// 0xefe0: WORD 'WEFE2' codep=0x224c parp=0xefe2
// ================================================

void WEFE2() // WEFE2
{
  unsigned short int i, imax, j, jmax;
  Push(0x6a5a); // 'MERCATO'
  SETLARR(); // SETLARR
  FULLARR(); // FULLARR
  SETREGI(); // SETREGI
  Push(0);
  Push(Read16(pp_YUR) + 1); // YUR @ 1+
  Push(Read16(pp_YLL)); // YLL @

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_XUR) + 1); // XUR @ 1+
    Push(Read16(pp_XLL)); // XLL @

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ACELLAD(); // ACELLAD
      A_at_(); // A@
      Push(0x003f);
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(1);
      } else
      {
        Push(0);
      }
      Push(Pop() + Pop()); // +
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf02c: WORD 'WF02E' codep=0x224c parp=0xf02e params=0 returns=0
// ================================================

void WF02E() // WF02E
{
  Push(Read16(pp_BEEPMS)); // BEEPMS @
  Push(Read16(pp_BEEPTONE)); // BEEPTONE @
  Push(0x07d0);
  Push(pp_BEEPTONE); // BEEPTONE
  Store_2(); // !_2
  Push(0x0032);
  Push(pp_BEEPMS); // BEEPMS
  Store_2(); // !_2
  BEEP(); // BEEP
  Push(pp_BEEPTONE); // BEEPTONE
  Store_2(); // !_2
  Push(pp_BEEPMS); // BEEPMS
  Store_2(); // !_2
}


// ================================================
// 0xf052: WORD 'WF054' codep=0x224c parp=0xf054
// ================================================

void WF054() // WF054
{
  unsigned short int i, imax;
  GetINST_dash_S(); // @INST-S
  Push(0x0012);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(0);
    return;
  }
  LoadData(WE62A); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0059);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(Pop() + 7); //  7 +
  Push(0);
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    OVER(); // OVER
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    Push(Pop() + Pop()); // +
    i++;
  } while(i<imax); // (LOOP)

  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf092: WORD 'WF094' codep=0x224c parp=0xf094
// ================================================

void WF094() // WF094
{
  Push(0x5800); Push(0x0002);
  WE606(); // WE606
  DrawTTY(); // .TTY
  Push(0x5830); Push(0x0002);
  WE606(); // WE606
  DrawTTY(); // .TTY
}


// ================================================
// 0xf0aa: WORD 'WF0AC' codep=0x1d29 parp=0xf0ac
// ================================================
// 0xf0ac: db 0x3a 0x20 ': '

// ================================================
// 0xf0ae: WORD 'WF0B0' codep=0x224c parp=0xf0b0
// ================================================

void WF0B0() // WF0B0
{
  Push(0x5860); Push(0x0002);
  WE606(); // WE606
  DrawTTY(); // .TTY
  Push(Read16(pp_WF0AC)); // WF0AC @
  Draw(); // .
}


// ================================================
// 0xf0c2: WORD 'WF0C4' codep=0x224c parp=0xf0c4
// ================================================

void WF0C4() // WF0C4
{
  Push(0x5875); Push(0x0002);
  WE606(); // WE606
  DrawTTY(); // .TTY
  LoadData(WE622); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _n__gt_SURFAC(); // #>SURFAC case
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf0d8: WORD 'WF0DA' codep=0x224c parp=0xf0da
// ================================================

void WF0DA() // WF0DA
{
  Push(0x5897); Push(0x0002);
  WE606(); // WE606
  DrawTTY(); // .TTY
  WF054(); // WF054
  Draw(); // .
}


// ================================================
// 0xf0ea: WORD 'WF0EC' codep=0x224c parp=0xf0ec
// ================================================

void WF0EC() // WF0EC
{
  Push(0x58b0); Push(0x0002);
  WE606(); // WE606
  DrawTTY(); // .TTY
  LoadData(WE63A); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  WEFE2(); // WEFE2
  Push(0x0480);
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
  Draw(); // .
}


// ================================================
// 0xf10c: WORD 'WF10E' codep=0x224c parp=0xf10e
// ================================================

void WF10E() // WF10E
{
  Push(0x58ce); Push(0x0002);
  WE606(); // WE606
  DrawTTY(); // .TTY
  LoadData(WE642); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & !Read16(pp_PAST)); //  PAST @ NOT AND
  if (Pop() != 0)
  {
    Push(0x58e6); Push(0x0002);
    WE606(); // WE606
  } else
  {
    Push(0x58fa); Push(0x0002);
    WE606(); // WE606
  }
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf142: WORD 'WF144' codep=0x224c parp=0xf144
// ================================================

void WF144() // WF144
{
  WEF45(); // WEF45
  CTINIT(); // CTINIT
  CI(); // CI
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex__2(); // 1.5!_2
  Push(0xbcf9); // 'SET-PLAN'
  MODULE(); // MODULE
  WEF51(); // WEF51
  WF0B0(); // WF0B0
  WF0C4(); // WF0C4
  WF0DA(); // WF0DA
  WF0EC(); // WF0EC
  WF10E(); // WF10E
  WEF45(); // WEF45
  WE765(); // WE765
}


// ================================================
// 0xf166: WORD 'WF168' codep=0x224c parp=0xf168 params=0 returns=1
// ================================================

void WF168() // WF168
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0020?1:0); //  0x0020 =
}


// ================================================
// 0xf172: WORD 'WF174' codep=0x224c parp=0xf174 params=0 returns=0
// ================================================

void WF174() // WF174
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x000b?1:0); //  0x000b =
  if (Pop() != 0)
  {
    CI(); // CI
    Push(pp__ro_ORBIT_rc_); // (ORBIT)
    _1_dot_5_ex__2(); // 1.5!_2
    IOPEN(); // IOPEN
    WF168(); // WF168
    if (Pop() != 0)
    {
      Push(1);
      Push(pp_WF0AC); // WF0AC
      _plus__ex__2(); // +!_2
      WF144(); // WF144
    }
    ICLOSE(); // ICLOSE
  } else
  {
    WF168(); // WF168
    if (Pop() != 0)
    {
      Push(1);
      Push(pp_WF0AC); // WF0AC
      _plus__ex__2(); // +!_2
      WF144(); // WF144
    }
  }
  Push(Read16(pp_FQUIT)); // FQUIT @
  if (Pop() == 0) return;
  ILAST(); // ILAST
}


// ================================================
// 0xf1b6: WORD 'WF1B8' codep=0x224c parp=0xf1b8 params=0 returns=2
// ================================================

void WF1B8() // WF1B8
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xf1c2: WORD 'WF1C4' codep=0x224c parp=0xf1c4
// ================================================

void WF1C4() // WF1C4
{
  Push(pp_WF0AC); // WF0AC
  _099(); // 099
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf174); // 'WF174'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push2Words("NULL");
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf1e6: WORD 'WF1E8' codep=0x2214 parp=0xf1e8
// ================================================
// 0xf1e8: dw 0x0190

// ================================================
// 0xf1ea: WORD 'WF1EC' codep=0x224c parp=0xf1ec params=2 returns=0
// ================================================

void WF1EC() // WF1EC
{
  unsigned short int i, imax;
  WEE4E(); // WEE4E
  if (Pop() != 0)
  {
    GetColor(PINK);
    StoreCOLOR(); // !COLOR
    _gt_DISPLA(); // >DISPLA
    Push(0x0024);
    Push(Read16(cc_WF1E8)); // WF1E8
    _star__slash_(); // */
    Push(Pop() + 0x00a1); //  0x00a1 +
    SWAP(); // SWAP
    Push(0x0024);
    Push(Read16(cc_WF1E8)); // WF1E8
    _star__slash_(); // */
    Push(Pop() + 0x0078); //  0x0078 +
    SWAP(); // SWAP
    WF02E(); // WF02E
    Push(6);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      _2DUP(); // 2DUP
      LXPLOT(); // LXPLOT
      Push(0x012c);
      MS(); // MS
      i++;
    } while(i<imax); // (LOOP)

    LPLOT(); // LPLOT
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf238: WORD 'WF23A' codep=0x224c parp=0xf23a params=0 returns=0
// ================================================

void WF23A() // WF23A
{
  unsigned short int a;
  GetINST_dash_C(); // @INST-C
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(Pop()==0x003d?1:0); //  0x003d =
  if (Pop() != 0)
  {
    WF1B8(); // WF1B8
    WF1EC(); // WF1EC
  } else
  {
    Push(Read16(a)); // R@
    Push(Pop()==0x000b?1:0); //  0x000b =
    if (Pop() != 0)
    {
      IOPEN(); // IOPEN
      WF168(); // WF168
      if (Pop() != 0)
      {
        IOPEN(); // IOPEN
        IsNULL(); // ?NULL
        Push(!Pop()); //  NOT
        if (Pop() != 0)
        {
          while(1)
          {
            Push(0x003d);
            Push(0);
            IFIND(); // IFIND
            if (Pop() != 0)
            {
              CJ(); // CJ
              _gt_C_plus_S(); // >C+S
              WF1B8(); // WF1B8
              ICLOSE(); // ICLOSE
              WF1EC(); // WF1EC
              IsLAST(); // ?LAST
              Push(!Pop()); //  NOT
            } else
            {
              Push(Read16(cc_FALSE)); // FALSE
            }
            if (Pop() == 0) break;

            INEXT(); // INEXT
          }
        }
        ICLOSE(); // ICLOSE
      }
      ICLOSE(); // ICLOSE
    }
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf2a4: WORD 'WF2A6' codep=0x224c parp=0xf2a6
// ================================================

void WF2A6() // WF2A6
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf23a); // 'WF23A'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf2b8: WORD 'SYSCAN' codep=0x224c parp=0xf2c3 params=0 returns=2
// ================================================
// entry

void SYSCAN() // SYSCAN
{
  Push(8);
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
  Push(Pop() & (Read16(pp_NOF)==0?1:0)); //  NOF @ 0= AND
  if (Pop() != 0)
  {
    Push(Read16(pp_CONTEXT_3)==2?1:0); // CONTEXT_3 @ 2 =
    if (Pop() != 0)
    {
      Push(pp_NOF); // NOF
      ON_2(); // ON_2
      Push(pp_FQUIT); // FQUIT
      _099(); // 099
      CTINIT(); // CTINIT
      SET_STR_AS_PARAM("SCANNING...");
      DrawTTY(); // .TTY
      Push(Read16(pp__i_ASYS)); // 'ASYS @
      MODULE(); // MODULE
      WF2A6(); // WF2A6
      WF1C4(); // WF1C4
      Push(pp_FTRIG); // FTRIG
      _099(); // 099
    } else
    {
      Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
      Push(5);
      _st_(); // <
      Push(Pop() & !Read16(pp_IsON_dash_PLA)); //  ?ON-PLA @ NOT AND
      if (Pop() != 0)
      {
        BEEP(); // BEEP
        CTINIT(); // CTINIT
        WF094(); // WF094
      }
    }
  } else
  {
    Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
    Push(5);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(0xb7e7); // '.NOFUN'
      MODULE(); // MODULE
    }
  }
  Push2Words("NULL");
  Push(pp_NOF); // NOF
  _099(); // 099
}


// ================================================
// 0xf347: WORD 'WF349' codep=0x224c parp=0xf349
// ================================================
// orphan

void WF349() // WF349
{
  PRINT("A DEAD ", 7); // (.")
  LoadData(WE6BD); // from 'CREATURE'
  Push(0x0014);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf363: WORD 'RCASE' codep=0x4b3b parp=0xf36d
// ================================================

void RCASE() // RCASE
{
  switch(Pop()) // RCASE
  {
  case 1:
    WEF31(); // WEF31
    break;
  case 2:
    WEECD(); // WEECD
    break;
  case 3:
    WEF31(); // WEF31
    break;
  case 4:
    WEECD(); // WEECD
    break;
  case 5:
    WEF09(); // WEF09
    break;
  case 6:
    WEF1D(); // WEF1D
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf389: WORD 'WF38B' codep=0x224c parp=0xf38b
// ================================================

void WF38B() // WF38B
{
  LoadData(WE6C5); // from 'CREATURE'
  Get_gt_C_plus_S(); // @>C+S
  DrawPHRASE(); // .PHRASE
  ICLOSE(); // ICLOSE
  WE765(); // WE765
  WE78F(); // WE78F
  LoadData(WE6CD); // from 'CREATURE'
  Get_gt_C_plus_S(); // @>C+S
  DrawPHRASE(); // .PHRASE
  ICLOSE(); // ICLOSE
  WE765(); // WE765
}


// ================================================
// 0xf3a3: WORD 'WF3A5' codep=0x224c parp=0xf3a5
// ================================================

void WF3A5() // WF3A5
{
  PRINT("SOME ", 5); // (.")
  LoadData(WE663); // from 'TRADERS'
  Push(0x0010);
  _dash_TRAILING(); // -TRAILING
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  LoadData(WE66B); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x590b); Push(0x0002);
    WE606(); // WE606
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    return;
  }
  PRINT(" ON FOOT.", 9); // (.")
}


// ================================================
// 0xf3df: WORD 'WF3E1' codep=0x224c parp=0xf3e1
// ================================================

void WF3E1() // WF3E1
{
  Push(pp_CTX); // CTX
  _099(); // 099
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  GetINST_dash_S(); // @INST-S
  RCASE(); // RCASE case
  WEA33(); // WEA33
}


// ================================================
// 0xf3f1: WORD 'WF3F3' codep=0x224c parp=0xf3f3 params=2 returns=0
// ================================================
// orphan

void WF3F3() // WF3F3
{
  SWAP(); // SWAP
  Push(Pop() * 4 + (Read16(pp_WLEFT) + 2)); //  4 * WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf413: WORD 'WF415' codep=0x224c parp=0xf415 params=0 returns=0
// ================================================

void WF415() // WF415
{
  PRINT("YOUR SHIP", 9); // (.")
}


// ================================================
// 0xf423: WORD 'WF425' codep=0x224c parp=0xf425
// ================================================

void WF425() // WF425
{
  LoadData(ART_dash_NAM); // from 'ARTIFACT'
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf435: WORD 'WF437' codep=0x224c parp=0xf437
// ================================================

void WF437() // WF437
{
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(Read16(cc_WEAE4)); // WEAE4
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Draw(); // .
  Push(0x5926); Push(0x0002);
  WE606(); // WE606
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  LoadData(WE6AB); // from 'ELEMENT'
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf45f: WORD 'WF461' codep=0x224c parp=0xf461 params=0 returns=0
// ================================================

void WF461() // WF461
{
  Push(0x5942); Push(0x0002);
  WE606(); // WE606
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf46d: WORD 'WF46F' codep=0x224c parp=0xf46f params=0 returns=0
// ================================================

void WF46F() // WF46F
{
  Push(0xbdda); // '.CULT'
  MODULE(); // MODULE
}


// ================================================
// 0xf477: WORD 'WF479' codep=0x224c parp=0xf479 params=0 returns=0
// ================================================

void WF479() // WF479
{
  Push(0xbdda); // '.CULT'
  MODULE(); // MODULE
}


// ================================================
// 0xf481: WORD 'WF483' codep=0x224c parp=0xf483 params=0 returns=0
// ================================================
// orphan

void WF483() // WF483
{
  Push(0xbdea); // '.RACE'
  MODULE(); // MODULE
}


// ================================================
// 0xf48b: WORD 'WF48D' codep=0x224c parp=0xf48d params=0 returns=0
// ================================================

void WF48D() // WF48D
{
  PRINT("A MESSAGE", 9); // (.")
}


// ================================================
// 0xf49b: WORD 'CLASS>TY' codep=0x4b3b parp=0xf4a8
// ================================================
// entry

void CLASS_gt_TY() // CLASS>TY
{
  switch(Pop()) // CLASS>TY
  {
  case 68:
    WF38B(); // WF38B
    break;
  case 42:
    WF461(); // WF461
    break;
  case 20:
    WF415(); // WF415
    break;
  case 41:
    WF3E1(); // WF3E1
    break;
  case 26:
    WF437(); // WF437
    break;
  case 28:
    WF425(); // WF425
    break;
  case 21:
    WF3A5(); // WF3A5
    break;
  case 31:
    WF46F(); // WF46F
    break;
  case 33:
    WF479(); // WF479
    break;
  case 27:
    WF48D(); // WF48D
    break;
  default:
    BEEP(); // BEEP
    break;

  }
}

// ================================================
// 0xf4d4: WORD 'DESCRIBE' codep=0x224c parp=0xf4e1 params=1 returns=0
// ================================================
// entry

void DESCRIBE() // DESCRIBE
{
  unsigned short int a, i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Read16(pp_COLOR)); // COLOR @
  a = Pop(); // >R
  CTINIT(); // CTINIT
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    GetIL(); // @IL
    GetIH(); // @IH
    _gt_C_plus_S(); // >C+S
    GetINST_dash_C(); // @INST-C
    _gt_BOTT(); // >BOTT
    CLASS_gt_TY(); // CLASS>TY case
    ICLOSE(); // ICLOSE
    Push(imax); // I'
    Push(1);
    _gt_(); // >
    Push(Pop() & !(i + 1==imax?1:0)); //  I 1+ I' = NOT AND
    if (Pop() != 0)
    {
      Push(0x05dc);
      MS(); // MS
      WEF45(); // WEF45
      WEF45(); // WEF45
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  StoreCOLOR(); // !COLOR
}

// 0xf52d: db 0x44 0x45 0x53 0x43 0x52 0x49 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x55 0x52 0x45 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DESCRI__________________________URE________________ '

