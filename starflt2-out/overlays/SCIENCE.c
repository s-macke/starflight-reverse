// ====== OVERLAY 'SCIENCE' ======
// store offset = 0xdf90
// overlay size   = 0x15d0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WDFA6  codep:0x1d29 parp:0xdfa6 size:0x0002 C-string:'WDFA6'
//           WDFAA  codep:0x7420 parp:0xdfaa size:0x0003 C-string:'WDFAA'
//           WDFAF  codep:0x1d29 parp:0xdfaf size:0x0002 C-string:'WDFAF'
//           WDFB3  codep:0x1d29 parp:0xdfb3 size:0x0002 C-string:'WDFB3'
//           WDFB7  codep:0x224c parp:0xdfb7 size:0x004a C-string:'WDFB7'
//           WE003  codep:0x7420 parp:0xe003 size:0x0003 C-string:'WE003'
//           WE008  codep:0x7420 parp:0xe008 size:0x0003 C-string:'WE008'
//           WE00D  codep:0x7420 parp:0xe00d size:0x0003 C-string:'WE00D'
//           WE012  codep:0x7420 parp:0xe012 size:0x0003 C-string:'WE012'
//           WE017  codep:0x7420 parp:0xe017 size:0x0003 C-string:'WE017'
//           WE01C  codep:0x7420 parp:0xe01c size:0x0003 C-string:'WE01C'
//           WE021  codep:0x7420 parp:0xe021 size:0x0003 C-string:'WE021'
//           WE026  codep:0x7420 parp:0xe026 size:0x0003 C-string:'WE026'
//           WE02B  codep:0x7420 parp:0xe02b size:0x0003 C-string:'WE02B'
//           WE030  codep:0x7420 parp:0xe030 size:0x0003 C-string:'WE030'
//           WE035  codep:0x7420 parp:0xe035 size:0x0003 C-string:'WE035'
//           WE03A  codep:0x7420 parp:0xe03a size:0x0003 C-string:'WE03A'
//           WE03F  codep:0x7420 parp:0xe03f size:0x0003 C-string:'WE03F'
//           WE044  codep:0x7394 parp:0xe044 size:0x0006 C-string:'WE044'
//           WE04C  codep:0x7394 parp:0xe04c size:0x0006 C-string:'WE04C'
//           WE054  codep:0x7394 parp:0xe054 size:0x0006 C-string:'WE054'
//           WE05C  codep:0x7394 parp:0xe05c size:0x0006 C-string:'WE05C'
//           WE064  codep:0x7420 parp:0xe064 size:0x0003 C-string:'WE064'
//           WE069  codep:0x7394 parp:0xe069 size:0x0006 C-string:'WE069'
//           WE071  codep:0x7420 parp:0xe071 size:0x0003 C-string:'WE071'
//           WE076  codep:0x7394 parp:0xe076 size:0x0006 C-string:'WE076'
//           WE07E  codep:0x7420 parp:0xe07e size:0x0003 C-string:'WE07E'
//           WE083  codep:0x7394 parp:0xe083 size:0x0006 C-string:'WE083'
//           WE08B  codep:0x7394 parp:0xe08b size:0x0006 C-string:'WE08B'
//           WE093  codep:0x7394 parp:0xe093 size:0x0006 C-string:'WE093'
//           WE09B  codep:0x7394 parp:0xe09b size:0x0006 C-string:'WE09B'
//           WE0A3  codep:0x7394 parp:0xe0a3 size:0x0006 C-string:'WE0A3'
//           WE0AB  codep:0x224c parp:0xe0ab size:0x004a C-string:'WE0AB'
//           WE0F7  codep:0x224c parp:0xe0f7 size:0x0006 C-string:'WE0F7'
//           WE0FF  codep:0x224c parp:0xe0ff size:0x0006 C-string:'WE0FF'
//           WE107  codep:0x224c parp:0xe107 size:0x0006 C-string:'WE107'
//           WE10F  codep:0x224c parp:0xe10f size:0x0008 C-string:'WE10F'
//         BIO/ENR  codep:0x4b3b parp:0xe123 size:0x001c C-string:'BIO_slash_ENR'
//           WE141  codep:0x224c parp:0xe141 size:0x000e C-string:'WE141'
//           WE151  codep:0x224c parp:0xe151 size:0x00a2 C-string:'WE151'
//           WE1F5  codep:0x224c parp:0xe1f5 size:0x0010 C-string:'WE1F5'
//           WE207  codep:0x224c parp:0xe207 size:0x000a C-string:'WE207'
//           WE213  codep:0x224c parp:0xe213 size:0x0052 C-string:'WE213'
//           WE267  codep:0x224c parp:0xe267 size:0x000e C-string:'WE267'
//           WE277  codep:0x224c parp:0xe277 size:0x0050 C-string:'WE277'
//           WE2C9  codep:0x224c parp:0xe2c9 size:0x0006 C-string:'WE2C9'
//          ?HEAVY  codep:0x224c parp:0xe2da size:0x000e C-string:'IsHEAVY'
//           WE2EA  codep:0x224c parp:0xe2ea size:0x009c C-string:'WE2EA'
//           WE388  codep:0x224c parp:0xe388 size:0x0024 C-string:'WE388'
//           WE3AE  codep:0x224c parp:0xe3ae size:0x0018 C-string:'WE3AE'
//           WE3C8  codep:0x224c parp:0xe3c8 size:0x003e C-string:'WE3C8'
//           WE408  codep:0x224c parp:0xe408 size:0x003e C-string:'WE408'
//           WE448  codep:0x224c parp:0xe448 size:0x0022 C-string:'WE448'
//           WE46C  codep:0x224c parp:0xe46c size:0x002a C-string:'WE46C'
//           WE498  codep:0x224c parp:0xe498 size:0x0021 C-string:'WE498'
//           WE4BB  codep:0x224c parp:0xe4bb size:0x0020 C-string:'WE4BB'
//           WE4DD  codep:0x224c parp:0xe4dd size:0x0038 C-string:'WE4DD'
//           WE517  codep:0x224c parp:0xe517 size:0x005a C-string:'WE517'
//           WE573  codep:0x224c parp:0xe573 size:0x0006 C-string:'WE573'
//           WE57B  codep:0x1d29 parp:0xe57b size:0x0010 C-string:'WE57B'
//           WE58D  codep:0x224c parp:0xe58d size:0x0010 C-string:'WE58D'
//           WE59F  codep:0x224c parp:0xe59f size:0x00a6 C-string:'WE59F'
//           WE647  codep:0x224c parp:0xe647 size:0x00f5 C-string:'WE647'
//           WE73E  codep:0x1d29 parp:0xe73e size:0x0002 C-string:'WE73E'
//           WE742  codep:0x1d29 parp:0xe742 size:0x0002 C-string:'WE742'
//           WE746  codep:0x1d29 parp:0xe746 size:0x0002 C-string:'WE746'
//           WE74A  codep:0x1d29 parp:0xe74a size:0x0002 C-string:'WE74A'
//           WE74E  codep:0x224c parp:0xe74e size:0x0014 C-string:'WE74E'
//           WE764  codep:0x224c parp:0xe764 size:0x000c C-string:'WE764'
//           WE772  codep:0x224c parp:0xe772 size:0x000c C-string:'WE772'
//           WE780  codep:0x224c parp:0xe780 size:0x001c C-string:'WE780'
//           WE79E  codep:0x224c parp:0xe79e size:0x001a C-string:'WE79E'
//           WE7BA  codep:0x224c parp:0xe7ba size:0x0022 C-string:'WE7BA'
//           WE7DE  codep:0x224c parp:0xe7de size:0x0024 C-string:'WE7DE'
//           WE804  codep:0x224c parp:0xe804 size:0x0024 C-string:'WE804'
//           WE82A  codep:0x224c parp:0xe82a size:0x0020 C-string:'WE82A'
//           WE84C  codep:0x224c parp:0xe84c size:0x0066 C-string:'WE84C'
//           WE8B4  codep:0x224c parp:0xe8b4 size:0x000a C-string:'WE8B4'
//           WE8C0  codep:0x224c parp:0xe8c0 size:0x0044 C-string:'WE8C0'
//           WE906  codep:0x224c parp:0xe906 size:0x0008 C-string:'WE906'
//           WE910  codep:0x1d29 parp:0xe910 size:0x0002 C-string:'WE910'
//           WE914  codep:0x1d29 parp:0xe914 size:0x0002 C-string:'WE914'
//           WE918  codep:0x1d29 parp:0xe918 size:0x0008 C-string:'WE918'
//           WE922  codep:0x224c parp:0xe922 size:0x0038 C-string:'WE922'
//           WE95C  codep:0x224c parp:0xe95c size:0x0042 C-string:'WE95C'
//           WE9A0  codep:0x224c parp:0xe9a0 size:0x007a C-string:'WE9A0'
//           WEA1C  codep:0x224c parp:0xea1c size:0x009e C-string:'WEA1C'
//           WEABC  codep:0x224c parp:0xeabc size:0x00bc C-string:'WEABC'
//           WEB7A  codep:0x224c parp:0xeb7a size:0x0030 C-string:'WEB7A'
//           WEBAC  codep:0x224c parp:0xebac size:0x0026 C-string:'WEBAC'
//           WEBD4  codep:0x224c parp:0xebd4 size:0x001c C-string:'WEBD4'
//           WEBF2  codep:0x224c parp:0xebf2 size:0x000c C-string:'WEBF2'
//           WEC00  codep:0x1d29 parp:0xec00 size:0x0009 C-string:'WEC00'
//           WEC0B  codep:0x224c parp:0xec0b size:0x0018 C-string:'WEC0B'
//           WEC25  codep:0x224c parp:0xec25 size:0x00a0 C-string:'WEC25'
//           WECC7  codep:0x1d29 parp:0xecc7 size:0x0005 C-string:'WECC7'
//           WECCE  codep:0x1d29 parp:0xecce size:0x0005 C-string:'WECCE'
//           WECD5  codep:0x224c parp:0xecd5 size:0x0014 C-string:'WECD5'
//           WECEB  codep:0x224c parp:0xeceb size:0x0058 C-string:'WECEB'
//           WED45  codep:0x224c parp:0xed45 size:0x0006 C-string:'WED45'
//           WED4D  codep:0x224c parp:0xed4d size:0x001e C-string:'WED4D'
//           WED6D  codep:0x224c parp:0xed6d size:0x000f C-string:'WED6D'
//           WED7E  codep:0x224c parp:0xed7e size:0x0012 C-string:'WED7E'
//           WED92  codep:0x224c parp:0xed92 size:0x000a C-string:'WED92'
//           WED9E  codep:0x224c parp:0xed9e size:0x000e C-string:'WED9E'
//           WEDAE  codep:0x224c parp:0xedae size:0x008b C-string:'WEDAE'
//           WEE3B  codep:0x224c parp:0xee3b size:0x0052 C-string:'WEE3B'
//           WEE8F  codep:0x224c parp:0xee8f size:0x008a C-string:'WEE8F'
//           WEF1B  codep:0x224c parp:0xef1b size:0x0083 C-string:'WEF1B'
//           WEFA0  codep:0x224c parp:0xefa0 size:0x0010 C-string:'WEFA0'
//           WEFB2  codep:0x224c parp:0xefb2 size:0x00b8 C-string:'WEFB2'
//           WF06C  codep:0x224c parp:0xf06c size:0x0036 C-string:'WF06C'
//           WF0A4  codep:0x224c parp:0xf0a4 size:0x0034 C-string:'WF0A4'
//           WF0DA  codep:0x224c parp:0xf0da size:0x000a C-string:'WF0DA'
//           WF0E6  codep:0x224c parp:0xf0e6 size:0x0046 C-string:'WF0E6'
//       .READINGS  codep:0x4b3b parp:0xf13a size:0x0010 C-string:'DrawREADINGS'
//      (/SENSORS)  codep:0x224c parp:0xf159 size:0x00b3 C-string:'_ro__slash_SENSORS_rc_'
//           WF20E  codep:0x224c parp:0xf20e size:0x003e C-string:'WF20E'
//           WF24E  codep:0x224c parp:0xf24e size:0x0010 C-string:'WF24E'
//           WF260  codep:0x224c parp:0xf260 size:0x0006 C-string:'WF260'
//           WF268  codep:0x224c parp:0xf268 size:0x0036 C-string:'WF268'
//           WF2A0  codep:0x224c parp:0xf2a0 size:0x0012 C-string:'WF2A0'
//           WF2B4  codep:0x224c parp:0xf2b4 size:0x0020 C-string:'WF2B4'
//           WF2D6  codep:0x224c parp:0xf2d6 size:0x0052 C-string:'WF2D6'
//           WF32A  codep:0x224c parp:0xf32a size:0x0006 C-string:'WF32A'
//          CTXT>I  codep:0x4b3b parp:0xf33b size:0x000c C-string:'CTXT_gt_I'
//           WF349  codep:0x224c parp:0xf349 size:0x0004 C-string:'WF349'
//           WF34F  codep:0x224c parp:0xf34f size:0x0006 C-string:'WF34F'
//           WF357  codep:0x224c parp:0xf357 size:0x0008 C-string:'WF357'
//           WF361  codep:0x224c parp:0xf361 size:0x0008 C-string:'WF361'
//           WF36B  codep:0x224c parp:0xf36b size:0x0010 C-string:'WF36B'
//           WF37D  codep:0x224c parp:0xf37d size:0x001e C-string:'WF37D'
//           WF39D  codep:0x224c parp:0xf39d size:0x0022 C-string:'WF39D'
//           WF3C1  codep:0x224c parp:0xf3c1 size:0x0032 C-string:'WF3C1'
//       'DO-CLOUD  codep:0x1d29 parp:0xf401 size:0x0002 C-string:'_i_DO_dash_CLOUD'
//           WF405  codep:0x224c parp:0xf405 size:0x0008 C-string:'WF405'
//           WF40F  codep:0x224c parp:0xf40f size:0x0046 C-string:'WF40F'
//       .STARDATE  codep:0x224c parp:0xf463 size:0x004c C-string:'DrawSTARDATE'
//           WF4B1  codep:0x224c parp:0xf4b1 size:0x0016 C-string:'WF4B1'
//           WF4C9  codep:0x224c parp:0xf4c9 size:0x001c C-string:'WF4C9'
//           WF4E7  codep:0x224c parp:0xf4e7 size:0x0042 C-string:'WF4E7'
//       (/STATUS)  codep:0x224c parp:0xf537 size:0x000e C-string:'_ro__slash_STATUS_rc_'
//      .STAT-TEXT  codep:0x224c parp:0xf554 size:0x0000 C-string:'DrawSTAT_dash_TEXT'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp_XUR; // XUR
extern const unsigned short int pp_YUR; // YUR
extern const unsigned short int pp_HYDRO; // HYDRO
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_XSTART; // XSTART
extern const unsigned short int pp_XEND; // XEND
extern const unsigned short int pp_YLINE; // YLINE
extern const unsigned short int pp__i__dot_HUFF; // '.HUFF
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_IsPORT; // ?PORT
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_IsCOMBAT; // ?COMBAT
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_HAZE; // HAZE
extern const unsigned short int pp_STAGES; // STAGES
extern const unsigned short int pp__pe_SLUG; // %SLUG
extern const unsigned short int pp_VSTIME; // VSTIME
extern const unsigned short int pp__10_star_CARG; // 10*CARG
extern const unsigned short int pp_SENSE_dash_A; // SENSE-A
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_LKEYTIM; // LKEYTIM
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_YWLD_c_YP; // YWLD:YP
extern const unsigned short int pp_OK_dash_TALK; // OK-TALK
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_ENCOUN; // (ENCOUN
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern LoadDataType ELEM_dash_NA; // ELEM-NA
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color DK_dash_GREE; // DK-GREE
extern Color GREEN; // GREEN
extern Color RED; // RED
extern Color VIOLET; // VIOLET
extern Color GREY1; // GREY1
extern Color BLUE; // BLUE
extern Color LT_dash_GREE; // LT-GREE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color PINK; // PINK
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SI; // INST-SI
extern IFieldType INST_dash_OF; // INST-OF
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void _n_(); // #
void _n__gt_(); // #>
void _st__n_(); // <#
void Draw(); // .
void DrawR(); // .R
void D_dot_(); // D.
void D_dot_R(); // D.R
void SPACES(); // SPACES
void MS(); // MS
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void SQRT(); // SQRT
void ACELLAD(); // ACELLAD
void A_at_(); // A@
void SETLARR(); // SETLARR
void FULLARR(); // FULLARR
void SETREGI(); // SETREGI
void I_gt_C(); // I>C
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void MEM_st_DSK(); // MEM<DSK
void GetRECORD(); // @RECORD
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CI_i_(); // CI'
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void ILAST(); // ILAST
void IFIND(); // IFIND
void PAD_v_16(); // PAD|16
void StoreCOLOR(); // !COLOR
void GetCOLOR(); // @COLOR
void LLINE(); // LLINE
void FILLCIR(); // FILLCIR
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_I(); // POINT>I
void IsICONS_dash__1(); // ?ICONS-_1
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void BEEPON_2(); // BEEPON_2
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void POLY_dash_ER(); // POLY-ER
void WUP(); // WUP
void CTCR(); // CTCR
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void ERASE_dash_A(); // ERASE-A
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _dash_XTRAIL(); // -XTRAIL
void ORGIA(); // ORGIA
void _2_at_(); // 2@
void ADDR_gt_SEG(); // ADDR>SEG
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void D_plus_(); // D+
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void _plus_BIT(); // +BIT
void C_gt_(); // C>
void CI(); // CI
void LPLOT(); // LPLOT
void HLINE(); // HLINE
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WDFA6 = 0xdfa6; // WDFA6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDFAF = 0xdfaf; // WDFAF size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDFB3 = 0xdfb3; // WDFB3 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE57B = 0xe57b; // WE57B size: 16
// {0xe7, 0x31, 0x30, 0x9e, 0x0c, 0xc3, 0xc3, 0x30, 0xff, 0x1e, 0xf3, 0xff, 0x3c, 0xcf, 0x00, 0xc0}

const unsigned short int pp_WE73E = 0xe73e; // WE73E size: 2
// {0xff, 0xff}

const unsigned short int pp_WE742 = 0xe742; // WE742 size: 2
// {0xff, 0xf6}

const unsigned short int pp_WE746 = 0xe746; // WE746 size: 2
// {0xa0, 0x5f}

const unsigned short int pp_WE74A = 0xe74a; // WE74A size: 2
// {0x50, 0xa9}

const unsigned short int pp_WE910 = 0xe910; // WE910 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE914 = 0xe914; // WE914 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE918 = 0xe918; // WE918 size: 8
// {0x81, 0xc3, 0x81, 0x81, 0x81, 0x81, 0xc3, 0x81}

const unsigned short int pp_WEC00 = 0xec00; // WEC00 size: 9
// {0x04, 0x0d, 0x0e, 0x0b, 0x09, 0x03, 0x06, 0x07, 0x08}

const unsigned short int pp_WECC7 = 0xecc7; // WECC7 size: 5
// {0x01, 0x01, 0x16, 0x1b, 0x00}

const unsigned short int pp_WECCE = 0xecce; // WECCE size: 5
// {0x02, 0x01, 0x16, 0x1b, 0x00}

const unsigned short int pp__i_DO_dash_CLOUD = 0xf401; // 'DO-CLOUD size: 2
// {0xda, 0xc5}




// 0xdfa2: db 0x5d 0x01 '] '

// ================================================
// 0xdfa4: WORD 'WDFA6' codep=0x1d29 parp=0xdfa6
// ================================================
// 0xdfa6: db 0x3a 0x20 ': '

// ================================================
// 0xdfa8: WORD 'WDFAA' codep=0x7420 parp=0xdfaa
// ================================================
IFieldType WDFAA = {ORIGINATORIDX, 0x0b, 0x01};

// ================================================
// 0xdfad: WORD 'WDFAF' codep=0x1d29 parp=0xdfaf
// ================================================
// 0xdfaf: db 0x3a 0x20 ': '

// ================================================
// 0xdfb1: WORD 'WDFB3' codep=0x1d29 parp=0xdfb3
// ================================================
// 0xdfb3: db 0x3a 0x20 ': '

// ================================================
// 0xdfb5: WORD 'WDFB7' codep=0x224c parp=0xdfb7 params=0 returns=0
// ================================================

void WDFB7() // WDFB7
{
  Push((Read16(pp_STAR_dash_HR)==0?1:0) & !(Read16(pp__pe_SLUG)==0x0064?1:0)); // STAR-HR @ 0= %SLUG @ 0x0064 = NOT AND
  if (Pop() == 0) return;
  Push(Read16(pp__pe_SLUG)); // %SLUG @
  Push(0x000a);
  Push(0);
  Push(0x000a);
  RRND(); // RRND
  Push(4);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Pop() + Pop()); // +
  } else
  {
    _dash_(); // -
  }
  Push(0x000a);
  MAX(); // MAX
  Push(0x0063);
  MIN(); // MIN
  Push(pp__pe_SLUG); // %SLUG
  Store_2(); // !_2
}


// ================================================
// 0xe001: WORD 'WE003' codep=0x7420 parp=0xe003
// ================================================
IFieldType WE003 = {SHIPIDX, 0x25, 0x02};

// ================================================
// 0xe006: WORD 'WE008' codep=0x7420 parp=0xe008
// ================================================
IFieldType WE008 = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xe00b: WORD 'WE00D' codep=0x7420 parp=0xe00d
// ================================================
IFieldType WE00D = {SHIPIDX, 0x19, 0x02};

// ================================================
// 0xe010: WORD 'WE012' codep=0x7420 parp=0xe012
// ================================================
IFieldType WE012 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xe015: WORD 'WE017' codep=0x7420 parp=0xe017
// ================================================
IFieldType WE017 = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xe01a: WORD 'WE01C' codep=0x7420 parp=0xe01c
// ================================================
IFieldType WE01C = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xe01f: WORD 'WE021' codep=0x7420 parp=0xe021
// ================================================
IFieldType WE021 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe024: WORD 'WE026' codep=0x7420 parp=0xe026
// ================================================
IFieldType WE026 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xe029: WORD 'WE02B' codep=0x7420 parp=0xe02b
// ================================================
// orphan
IFieldType WE02B = {SHIPIDX, 0x15, 0x02};

// ================================================
// 0xe02e: WORD 'WE030' codep=0x7420 parp=0xe030
// ================================================
IFieldType WE030 = {SHIPIDX, 0x56, 0x01};

// ================================================
// 0xe033: WORD 'WE035' codep=0x7420 parp=0xe035
// ================================================
IFieldType WE035 = {SHIPIDX, 0x57, 0x01};

// ================================================
// 0xe038: WORD 'WE03A' codep=0x7420 parp=0xe03a
// ================================================
// orphan
IFieldType WE03A = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xe03d: WORD 'WE03F' codep=0x7420 parp=0xe03f
// ================================================
// orphan
IFieldType WE03F = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xe042: WORD 'WE044' codep=0x7394 parp=0xe044
// ================================================
LoadDataType WE044 = {VESSELIDX, 0x01, 0x03, 0x24, 0x6b5d};

// ================================================
// 0xe04a: WORD 'WE04C' codep=0x7394 parp=0xe04c
// ================================================
LoadDataType WE04C = {VESSELIDX, 0x07, 0x02, 0x24, 0x6b5d};

// ================================================
// 0xe052: WORD 'WE054' codep=0x7394 parp=0xe054
// ================================================
LoadDataType WE054 = {VESSELIDX, 0x18, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe05a: WORD 'WE05C' codep=0x7394 parp=0xe05c
// ================================================
LoadDataType WE05C = {VESSELIDX, 0x15, 0x01, 0x24, 0x6b5d};

// ================================================
// 0xe062: WORD 'WE064' codep=0x7420 parp=0xe064
// ================================================
IFieldType WE064 = {VESSELIDX, 0x12, 0x02};

// ================================================
// 0xe067: WORD 'WE069' codep=0x7394 parp=0xe069
// ================================================
LoadDataType WE069 = {VESSELIDX, 0x0c, 0x02, 0x24, 0x6b5d};

// ================================================
// 0xe06f: WORD 'WE071' codep=0x7420 parp=0xe071
// ================================================
// orphan
IFieldType WE071 = {VESSELIDX, 0x14, 0x02};

// ================================================
// 0xe074: WORD 'WE076' codep=0x7394 parp=0xe076
// ================================================
// orphan
LoadDataType WE076 = {VESSELIDX, 0x0e, 0x02, 0x24, 0x6b5d};

// ================================================
// 0xe07c: WORD 'WE07E' codep=0x7420 parp=0xe07e
// ================================================
IFieldType WE07E = {VESSELIDX, 0x11, 0x07};

// ================================================
// 0xe081: WORD 'WE083' codep=0x7394 parp=0xe083
// ================================================
LoadDataType WE083 = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe089: WORD 'WE08B' codep=0x7394 parp=0xe08b
// ================================================
LoadDataType WE08B = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe091: WORD 'WE093' codep=0x7394 parp=0xe093
// ================================================
LoadDataType WE093 = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe099: WORD 'WE09B' codep=0x7394 parp=0xe09b
// ================================================
LoadDataType WE09B = {PLANETIDX, 0x0c, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe0a1: WORD 'WE0A3' codep=0x7394 parp=0xe0a3
// ================================================
LoadDataType WE0A3 = {COMPOUNDSIDX, 0x00, 0x03, 0x07, 0x6c3e};

// ================================================
// 0xe0a9: WORD 'WE0AB' codep=0x224c parp=0xe0ab
// ================================================

void WE0AB() // WE0AB
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
// 0xe0f5: WORD 'WE0F7' codep=0x224c parp=0xe0f7 params=0 returns=2
// ================================================

void WE0F7() // WE0F7
{
  Push(Read16(cc_FALSE)); // FALSE
  Push(Read16(regsp)); // DUP
}


// ================================================
// 0xe0fd: WORD 'WE0FF' codep=0x224c parp=0xe0ff params=0 returns=2
// ================================================

void WE0FF() // WE0FF
{
  Push(Read16(cc_TRUE)); // TRUE
  Push(Read16(regsp)); // DUP
}


// ================================================
// 0xe105: WORD 'WE107' codep=0x224c parp=0xe107 params=0 returns=2
// ================================================

void WE107() // WE107
{
  Push(Read16(cc_FALSE)); // FALSE
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xe10d: WORD 'WE10F' codep=0x224c parp=0xe10f params=0 returns=2
// ================================================
// orphan

void WE10F() // WE10F
{
  Push(Read16(cc_FALSE)); // FALSE
  Push(Read16(pp_PAST)); // PAST @
}


// ================================================
// 0xe117: WORD 'BIO/ENR' codep=0x4b3b parp=0xe123
// ================================================

void BIO_slash_ENR() // BIO/ENR
{
  switch(Pop()) // BIO/ENR
  {
  case 20:
    WE107(); // WE107
    break;
  case 22:
    WE0F7(); // WE0F7
    break;
  case 27:
    WE107(); // WE107
    break;
  case 32:
    WE0F7(); // WE0F7
    break;
  case 29:
    WE107(); // WE107
    break;
  case 0:
    WE0F7(); // WE0F7
    break;
  default:
    WE0FF(); // WE0FF
    break;

  }
}

// ================================================
// 0xe13f: WORD 'WE141' codep=0x224c parp=0xe141
// ================================================

void WE141() // WE141
{
  GetINST_dash_S(); // @INST-S
  BIO_slash_ENR(); // BIO/ENR case
  Push(pp_WDFB3); // WDFB3
  Store_2(); // !_2
  Push(pp_WDFAF); // WDFAF
  Store_2(); // !_2
}


// ================================================
// 0xe14f: WORD 'WE151' codep=0x224c parp=0xe151 params=1 returns=0
// ================================================

void WE151() // WE151
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(0);
  Push(0x0014);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    PRINT("CRITICAL", 8); // (.")
  } else
  {
    Push(a); // I
    Push(0x0014);
    Push(0x0032);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      PRINT("HEAVY", 5); // (.")
    } else
    {
      Push(a); // I
      Push(0x0032);
      Push(0x0050);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        PRINT("MODERATE", 8); // (.")
      } else
      {
        Push(a); // I
        Push(0x0050);
        Push(0x005f);
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          PRINT("SLIGHT", 6); // (.")
        } else
        {
          Push(a); // I
          Push(0x005f);
          Push(0x0064);
          WITHIN(); // WITHIN
          if (Pop() != 0)
          {
            PRINT("MINIMAL", 7); // (.")
          } else
          {
            PRINT("NONE", 4); // (.")
          }
        }
      }
    }
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe1f3: WORD 'WE1F5' codep=0x224c parp=0xe1f5 params=1 returns=0
// ================================================

void WE1F5() // WE1F5
{
  Push(0x0028);
  _st_(); // <
  if (Pop() == 0) return;
  GetColor(PINK);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe205: WORD 'WE207' codep=0x224c parp=0xe207
// ================================================

void WE207() // WE207
{
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe211: WORD 'WE213' codep=0x224c parp=0xe213 params=0 returns=2
// ================================================

void WE213() // WE213
{
  unsigned short int i, imax;
  Push2Words("NULL");
  Push(0x000e);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(((0x65e1+WE008.offset) + i) + 1)&0xFF); // WE008<IFIELD> I + 1+ C@
    _0_gt_(); // 0>
    Push(i==0?1:0); // I 0=
    MAX(); // MAX
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
    Push(Pop() + ((Read16((0x65e1+WE008.offset) + i)&0xFF) & 0x007f)); //  WE008<IFIELD> I + C@ 0x007f AND +
    SWAP(); // SWAP
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(1);
  MAX(); // MAX
  _slash_(); // /
  Push((Read16(0x65e1+WE008.offset)&0xFF) & 0x007f); // WE008<IFIELD> C@ 0x007f AND
  Push(0x0013);
  _gt_(); // >
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe265: WORD 'WE267' codep=0x224c parp=0xe267
// ================================================

void WE267() // WE267
{
  Push(8);
  WE207(); // WE207
  WE213(); // WE213
  Push(Read16(regsp)); // DUP
  WE1F5(); // WE1F5
  WE151(); // WE151
}


// ================================================
// 0xe275: WORD 'WE277' codep=0x224c parp=0xe277 params=0 returns=0
// ================================================

void WE277() // WE277
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  Push(7);
  Push(0x000a);
  WITHIN(); // WITHIN
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  Push(2);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(7);
    Push(Read16(pp_STARDAT)); // STARDAT @
    Push(0x001e);
    MOD(); // MOD
    Push(0x000a);
    _slash_(); // /
    Push(Pop() + Pop()); // +
    Push((Pop()==Pop())?1:0); // =
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      Push(0xc014); // 'BLDLI'
      MODULE(); // MODULE
      Push(0xbfda); // 'EDL>P'
      MODULE(); // MODULE
    }
  } else
  {
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe2c7: WORD 'WE2C9' codep=0x224c parp=0xe2c9 params=0 returns=0
// ================================================

void WE2C9() // WE2C9
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe2cf: WORD '?HEAVY' codep=0x224c parp=0xe2da params=0 returns=2
// ================================================
// entry

void IsHEAVY() // ?HEAVY
{
  WE2C9(); // WE2C9
  WE213(); // WE213
  Push(0x0032);
  _st_(); // <
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe2e8: WORD 'WE2EA' codep=0x224c parp=0xe2ea params=1 returns=0
// ================================================

void WE2EA() // WE2EA
{
  Push(Pop() | (Read16(pp__n_AUX)==1?1:0)); //  #AUX @ 1 = OR
  if (Pop() != 0)
  {
    Push(0x0068);
    Push(0x00b7);
    POS_dot_(); // POS.
    _gt_1FONT(); // >1FONT
    Push(0x000d);
    WE207(); // WE207
    Push(1);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    Push(!Read16(pp_PAST)); // PAST @ NOT
    if (Pop() != 0)
    {
      Push(Read16(pp_STARDAT)); // STARDAT @
      Push(0x012c);
      _slash_MOD(); // /MOD
      Push(Pop() + 0x121f); //  0x121f +
      SWAP(); // SWAP
      Push(0x001e);
      _slash_MOD(); // /MOD
      Push(Pop() + 1); //  1+
      SWAP(); // SWAP
      Push(Pop() + 1); //  1+
      Push(0);
      _st__n_(); // <#
      _n_(); // #
      _n_(); // #
      _n__gt_(); // #>
      Exec("TYPE"); // call of word 0x2690 '(TYPE)'
      PRINT(".", 1); // (.")
      Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
      Push(0);
      _st__n_(); // <#
      _n_(); // #
      _n_(); // #
      _n__gt_(); // #>
      Exec("TYPE"); // call of word 0x2690 '(TYPE)'
      PRINT("-", 1); // (.")
      Push(0);
      _st__n_(); // <#
      _n_(); // #
      _n_(); // #
      _n__gt_(); // #>
      Exec("TYPE"); // call of word 0x2690 '(TYPE)'
      PRINT("-", 1); // (.")
      Push(0);
      DrawR(); // .R
    } else
    {
      PRINT("\?\?-\?\?-\?\?\?", 9); // (.")
    }
  }
  WDFB7(); // WDFB7
  WE277(); // WE277
}


// ================================================
// 0xe386: WORD 'WE388' codep=0x224c parp=0xe388
// ================================================

void WE388() // WE388
{
  Push(4);
  WE207(); // WE207
  Push(Read16(0x65e1+WE026.offset) & 8); // WE026<IFIELD> @ 8 AND
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("UP");
  } else
  {
    SET_STR_AS_PARAM("DOWN");
  }
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe3ac: WORD 'WE3AE' codep=0x224c parp=0xe3ae params=2 returns=0
// ================================================

void WE3AE() // WE3AE
{
  Push(Read16(pp__dash_END)); // -END @
  Push(0x0096);
  M_star_(); // M*
  D_gt_(); // D>
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  GetColor(PINK);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe3c6: WORD 'WE3C8' codep=0x224c parp=0xe3c8
// ================================================

void WE3C8() // WE3C8
{
  Push(5);
  WE207(); // WE207
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  WE3AE(); // WE3AE
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  Push(0);
  DrawR(); // .R
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0);
  DrawR(); // .R
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(0x2710); Push(0x0000);
  D_st_(); // D<
  if (Pop() != 0)
  {
    Draw(); // .
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xe406: WORD 'WE408' codep=0x224c parp=0xe408
// ================================================

void WE408() // WE408
{
  Push(6);
  WE207(); // WE207
  WE2C9(); // WE2C9
  Push(Read16(0x65e1+WE017.offset)); // WE017<IFIELD> @
  _plus_BIT(); // +BIT
  Push((Pop() + 1) * 0x01f4); //  1+ 0x01f4 *
  Push(Read16(regsp)); // DUP
  Push(Read16(0x65e1+WE021.offset)); // WE021<IFIELD> @
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  MAX(); // MAX
  _dash_(); // -
  Push(0x0064);
  ROT(); // ROT
  _star__slash_(); // */
  Draw(); // .
  PRINT("%", 1); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe446: WORD 'WE448' codep=0x224c parp=0xe448 params=2 returns=0
// ================================================

void WE448() // WE448
{
  unsigned short int i, imax;
  SWAP(); // SWAP
  Push(Pop() + 0x008f); //  0x008f +
  Push(0x008f);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    OVER(); // OVER
    Push(Pop() + 2); //  2+
    Push(i); // I
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe46a: WORD 'WE46C' codep=0x224c parp=0xe46c
// ================================================

void WE46C() // WE46C
{
  unsigned short int i, imax;
  SWAP(); // SWAP
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x00a8);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x00a7);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    OVER(); // OVER
    Push(Pop() + 2); //  2+
    Push(i); // I
    LLINE(); // LLINE
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe496: WORD 'WE498' codep=0x224c parp=0xe498
// ================================================

void WE498() // WE498
{
  Push(7);
  WE207(); // WE207
  Push(!(Read16(0x65e1+WE026.offset) & 3)); // WE026<IFIELD> @ 3 AND NOT
  if (Pop() != 0)
  {
    PRINT("UN", 2); // (.")
  }
  PRINT("ARMED", 5); // (.")
}


// ================================================
// 0xe4b9: WORD 'WE4BB' codep=0x224c parp=0xe4bb params=0 returns=1
// ================================================

void WE4BB() // WE4BB
{
  Push(0x0015);
  _eq_SPECIE(); // =SPECIE
  GetINST_dash_S(); // @INST-S
  Push(0x0017);
  Push(0x0019);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  Push(0x001e);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
}


// ================================================
// 0xe4db: WORD 'WE4DD' codep=0x224c parp=0xe4dd
// ================================================

void WE4DD() // WE4DD
{
  GetColor(YELLOW);
  StoreCOLOR(); // !COLOR
  Push(Read16(0x65e1+WE01C.offset)); // WE01C<IFIELD> @
  Push(0x003c);
  _slash_(); // /
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0065);
    WE448(); // WE448
  }
  Push(0x0019);
  Push(Read16(0x65e1+WE01C.offset)); // WE01C<IFIELD> @
  Push(0x003c);
  _slash_(); // /
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x0065);
  WE46C(); // WE46C
}


// ================================================
// 0xe515: WORD 'WE517' codep=0x224c parp=0xe517 params=0 returns=0
// ================================================

void WE517() // WE517
{
  Push(Read16(0x65e1+WE00D.offset) & 0x00ff); // WE00D<IFIELD> @ 0x00ff AND
  Push(1);
  Push(0x0065);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  Push(Read16(0x65e1+WE012.offset)); // WE012<IFIELD> @
  Push(0x09c4);
  MIN(); // MIN
  Push(0x0064);
  _slash_(); // /
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0056);
    WE448(); // WE448
  }
  Push(0x0019);
  Push(Read16(0x65e1+WE012.offset)); // WE012<IFIELD> @
  Push(0x09c4);
  MIN(); // MIN
  Push(0x0064);
  _slash_(); // /
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x0056);
  WE46C(); // WE46C
}


// ================================================
// 0xe571: WORD 'WE573' codep=0x224c parp=0xe573
// ================================================

void WE573() // WE573
{
  WE4DD(); // WE4DD
  WE517(); // WE517
}


// ================================================
// 0xe579: WORD 'WE57B' codep=0x1d29 parp=0xe57b
// ================================================
// 0xe57b: db 0xe7 0x31 0x30 0x9e 0x0c 0xc3 0xc3 0x30 0xff 0x1e 0xf3 0xff 0x3c 0xcf 0x00 0xc0 ' 10    0    <   '

// ================================================
// 0xe58b: WORD 'WE58D' codep=0x224c parp=0xe58d params=5 returns=0
// ================================================

void WE58D() // WE58D
{
  unsigned short int i, imax;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _2OVER(); // 2OVER
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe59d: WORD 'WE59F' codep=0x224c parp=0xe59f
// ================================================

void WE59F() // WE59F
{
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  Push(0x0055);
  Push(0x008e);
  Push(0x0055);
  Push(0x00a8);
  Push(0x0059);
  Push(0x00a8);
  Push(0x0059);
  Push(0x008e);
  Push(0x0055);
  Push(0x008e);
  Push(4);
  WE58D(); // WE58D
  Push(0x0064);
  Push(0x008e);
  Push(0x0064);
  Push(0x00a8);
  Push(0x0068);
  Push(0x00a8);
  Push(0x0068);
  Push(0x008e);
  Push(0x0064);
  Push(0x008e);
  Push(4);
  WE58D(); // WE58D
  _gt_1FONT(); // >1FONT
  Push(0x0056);
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("S", 1); // (.")
  Push(0x0065);
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("A", 1); // (.")
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(pp_WE57B); // WE57B
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(6);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(0x0014);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  Push(0x005c);
  Push(0x00a3);
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xe645: WORD 'WE647' codep=0x224c parp=0xe647
// ================================================

void WE647() // WE647
{
  WE2C9(); // WE2C9
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x0069);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  GetColor(WHITE);
  GetColor(WHITE);
  GetColor(LT_dash_GREE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x0055);
  Push(0x00b7);
  POS_dot_(); // POS.
  PRINT("DATE:", 5); // (.")
  GetCRS(); // @CRS
  Push(1);
  WE2EA(); // WE2EA
  StoreCRS(); // !CRS
  Push(0x0055);
  Push(0x00af);
  POS_dot_(); // POS.
  PRINT("DAMAGE:", 7); // (.")
  GetCRS(); // @CRS
  WE267(); // WE267
  StoreCRS(); // !CRS
  Push(0x006b);
  Push(0x00a6);
  POS_dot_(); // POS.
  PRINT("CARGO:", 6); // (.")
  GetCRS(); // @CRS
  WE408(); // WE408
  StoreCRS(); // !CRS
  Push(0x006b);
  Push(0x009d);
  POS_dot_(); // POS.
  PRINT("ENERGY:", 7); // (.")
  GetCRS(); // @CRS
  WE3C8(); // WE3C8
  StoreCRS(); // !CRS
  Push(0x006b);
  Push(0x0094);
  POS_dot_(); // POS.
  PRINT("SHIELDS:", 8); // (.")
  GetCRS(); // @CRS
  WE388(); // WE388
  StoreCRS(); // !CRS
  Push(0x006b);
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("WEAP:", 5); // (.")
  GetCRS(); // @CRS
  WE498(); // WE498
  StoreCRS(); // !CRS
  GetCRS(); // @CRS
  WE573(); // WE573
  StoreCRS(); // !CRS
  ICLOSE(); // ICLOSE
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(3);
  M_star_(); // M*
  D_st_(); // D<
  if (Pop() != 0)
  {
    Push(0x0dac); Push(0x0000);
  } else
  {
    Push(0x1d4c); Push(0x0000);
  }
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_VSTIME); // VSTIME
  StoreD(); // D!
}


// ================================================
// 0xe73c: WORD 'WE73E' codep=0x1d29 parp=0xe73e
// ================================================
// 0xe73e: db 0xff 0xff '  '

// ================================================
// 0xe740: WORD 'WE742' codep=0x1d29 parp=0xe742
// ================================================
// 0xe742: db 0xff 0xf6 '  '

// ================================================
// 0xe744: WORD 'WE746' codep=0x1d29 parp=0xe746
// ================================================
// 0xe746: db 0xa0 0x5f ' _'

// ================================================
// 0xe748: WORD 'WE74A' codep=0x1d29 parp=0xe74a
// ================================================
// 0xe74a: db 0x50 0xa9 'P '

// ================================================
// 0xe74c: WORD 'WE74E' codep=0x224c parp=0xe74e params=0 returns=0
// ================================================

void WE74E() // WE74E
{
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  Push(3);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(4);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
}


// ================================================
// 0xe762: WORD 'WE764' codep=0x224c parp=0xe764
// ================================================

void WE764() // WE764
{
  WE74E(); // WE74E
  Push(pp_WE73E); // WE73E
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xe770: WORD 'WE772' codep=0x224c parp=0xe772
// ================================================

void WE772() // WE772
{
  WE74E(); // WE74E
  Push(pp_WE742); // WE742
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xe77e: WORD 'WE780' codep=0x224c parp=0xe780 params=0 returns=2
// ================================================

void WE780() // WE780
{
  Push(Read16(0x65e1+WE017.offset)); // WE017<IFIELD> @
  _plus_BIT(); // +BIT
  Push((Pop() + 1) * 0x01f4 - Read16(0x65e1+WE021.offset)); //  1+ 0x01f4 * WE021<IFIELD> @ -
  Push(0x01f4);
  _slash_(); // /
}


// ================================================
// 0xe79c: WORD 'WE79E' codep=0x224c parp=0xe79e params=0 returns=1
// ================================================

void WE79E() // WE79E
{
  unsigned short int i, imax;
  WE780(); // WE780
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WE764(); // WE764
    Push(4);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe7b8: WORD 'WE7BA' codep=0x224c parp=0xe7ba params=0 returns=1
// ================================================

void WE7BA() // WE7BA
{
  unsigned short int i, imax;
  Push(Read16(0x65e1+WE017.offset)); // WE017<IFIELD> @
  _plus_BIT(); // +BIT
  WE780(); // WE780
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WE772(); // WE772
    Push(4);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe7dc: WORD 'WE7DE' codep=0x224c parp=0xe7de params=0 returns=0
// ================================================

void WE7DE() // WE7DE
{
  unsigned short int i, imax;
  Push(Read16(0x65e1+WE030.offset)&0xFF); // WE030<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  WE74E(); // WE74E
  Push(pp_WE746); // WE746
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    BLT(); // BLT
    Push(4);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe802: WORD 'WE804' codep=0x224c parp=0xe804 params=0 returns=0
// ================================================

void WE804() // WE804
{
  unsigned short int i, imax;
  Push(Read16(0x65e1+WE035.offset)&0xFF); // WE035<IFIELD> C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  WE74E(); // WE74E
  Push(pp_WE74A); // WE74A
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    BLT(); // BLT
    Push(4);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe828: WORD 'WE82A' codep=0x224c parp=0xe82a
// ================================================

void WE82A() // WE82A
{
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  CTINIT(); // CTINIT
  Push(0xbe45); // '.HUFF'
  MODULE(); // MODULE
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe84a: WORD 'WE84C' codep=0x224c parp=0xe84c
// ================================================

void WE84C() // WE84C
{
  unsigned short int i, imax, j, jmax;
  GetCOLOR(); // @COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  StoreCOLOR(); // !COLOR
  PAD_v_16(); // PAD|16
  Push(Pop() + 6); //  6 +
  PAD_v_16(); // PAD|16
  Push(Read16(Pop() + 4)); //  4 + @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_YBLT) - i); // YBLT @ I -
    Push(pp_YLINE); // YLINE
    Store_2(); // !_2
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())&0xFF); //  C@
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(0);

      j = Pop();
      jmax = Pop();
      do // (DO)
      {
        Push(Read16(regsp)); // DUP
        Push((Read16(Pop() + 1)&0xFF) + Read16(pp_XBLT)); //  1+ C@ XBLT @ +
        Push(pp_XSTART); // XSTART
        Store_2(); // !_2
        Push(Read16(regsp)); // DUP
        Push((Read16(Pop() + 2)&0xFF) + Read16(pp_XBLT)); //  2+ C@ XBLT @ +
        Push(pp_XEND); // XEND
        Store_2(); // !_2
        HLINE(); // HLINE
        Push(Pop() + 2); //  2+
        j++;
      } while(j<jmax); // (LOOP)

    }
    Push(Pop() + 1); //  1+
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe8b2: WORD 'WE8B4' codep=0x224c parp=0xe8b4
// ================================================

void WE8B4() // WE8B4
{
  GetColor(BLACK);
  ERASE_dash_A(); // ERASE-A
  WE59F(); // WE59F
  WE647(); // WE647
}


// ================================================
// 0xe8be: WORD 'WE8C0' codep=0x224c parp=0xe8c0
// ================================================

void WE8C0() // WE8C0
{
  unsigned short int i, imax;
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(0x0012);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(0);
  } else
  {
    LoadData(WE08B); // from 'PLANET'
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
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe904: WORD 'WE906' codep=0x224c parp=0xe906 params=0 returns=0
// ================================================

void WE906() // WE906
{
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xe90e: WORD 'WE910' codep=0x1d29 parp=0xe910
// ================================================
// 0xe910: db 0x3a 0x20 ': '

// ================================================
// 0xe912: WORD 'WE914' codep=0x1d29 parp=0xe914
// ================================================
// 0xe914: db 0x3a 0x20 ': '

// ================================================
// 0xe916: WORD 'WE918' codep=0x1d29 parp=0xe918
// ================================================
// 0xe918: db 0x81 0xc3 0x81 0x81 0x81 0x81 0xc3 0x81 '        '

// ================================================
// 0xe920: WORD 'WE922' codep=0x224c parp=0xe922
// ================================================

void WE922() // WE922
{
  StoreCOLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  Push(pp_WE910); // WE910
  Store_2(); // !_2
  Push(Pop() + 0x004c); //  0x004c +
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(Read16(regsp)); // DUP
  Push(pp_WE914); // WE914
  Store_2(); // !_2
  Push(Pop() + 1); //  1+
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(8);
  Push(Read16(regsp)); // DUP
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(pp_WE918); // WE918
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xe95a: WORD 'WE95C' codep=0x224c parp=0xe95c
// ================================================

void WE95C() // WE95C
{
  Push(Read16(pp_WE914)); // WE914 @
  Push(Read16(pp_WE910)); // WE910 @
  GetColor(RED);
  WE922(); // WE922
  Push(Pop() + Read16(pp_WE914)); //  WE914 @ +
  Push(3);
  MAX(); // MAX
  Push(0x0043);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_WE914); // WE914
  Store_2(); // !_2
  SWAP(); // SWAP
  Push(Pop() + Read16(pp_WE910)); //  WE910 @ +
  Push(3);
  MAX(); // MAX
  Push(0x0072);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_WE910); // WE910
  Store_2(); // !_2
  GetColor(RED);
  WE922(); // WE922
  CLICK(); // CLICK
}


// ================================================
// 0xe99e: WORD 'WE9A0' codep=0x224c parp=0xe9a0
// ================================================

void WE9A0() // WE9A0
{
  unsigned short int a;
  XYSCAN(); // XYSCAN
  Push(pp_KEYTIME); // KEYTIME
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x00c8); Push(0x0000);
  D_st_(); // D<
  a = Pop(); // >R
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(4 * a); // 4 I *
    Push(1);
    MAX(); // MAX
    Push(Pop() * Pop()); // *
    SWAP(); // SWAP
    Push(4 * a); // 4 I *
    Push(1);
    MAX(); // MAX
    Push(Pop() * Pop()); // *
    SWAP(); // SWAP
    OVER(); // OVER
    Push(Pop() + Read16(pp_WE910)); //  WE910 @ +
    Push(3);
    Push(0x0073);
    WITHIN(); // WITHIN
    OVER(); // OVER
    Push(Pop() + Read16(pp_WE914)); //  WE914 @ +
    Push(3);
    Push(0x0044);
    WITHIN(); // WITHIN
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      WE95C(); // WE95C
      Push(0x0032);
      MS(); // MS
    } else
    {
      Pop(); Pop(); // 2DROP
    }
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xea1a: WORD 'WEA1C' codep=0x224c parp=0xea1c
// ================================================

void WEA1C() // WEA1C
{
  unsigned short int a, b;
  GetColor(DK_dash_GREE);
  StoreCOLOR(); // !COLOR
  Push(0x0054);
  Push(0x00b4);
  POS_dot_(); // POS.
  PRINT("MASS", 4); // (.")
  Push(0x0054);
  Push(0x00a5);
  POS_dot_(); // POS.
  PRINT("TONS", 4); // (.")
  a = Pop(); // >R
  Push(0);
  _2DUP(); // 2DUP
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0);
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x00ac);
  POS_dot_(); // POS.
  while(1)
  {
    _2DUP(); // 2DUP
    Push2Words("NULL");
    D_gt_(); // D>
    if (Pop() == 0) break;

    Push(a + 1); // R> 1+
    b = Pop(); // >R
    Push(0x000a);
    U_slash_MOD(); // U/MOD
    SWAP(); // SWAP
    Pop(); // DROP
    Push(0);
    _2SWAP(); // 2SWAP
    Push(0x000a);
    U_slash_MOD(); // U/MOD
    SWAP(); // SWAP
    Pop(); // DROP
    Push(0);
    _2SWAP(); // 2SWAP
  }
  Pop(); Pop(); // 2DROP
  Push(a); // R>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    ROT(); // ROT
    ROT(); // ROT
    Push(0);
    D_dot_R(); // D.R
    PRINT("*", 1); // (.")
    Push(0x000a);
    Push(0);
    DrawR(); // .R
    Push(3);
    Push(pp_YBLT); // YBLT
    _plus__ex__2(); // +!_2
    Push(0);
  }
  D_dot_(); // D.
}


// ================================================
// 0xeaba: WORD 'WEABC' codep=0x224c parp=0xeabc
// ================================================

void WEABC() // WEABC
{
  unsigned short int i, imax, j, jmax;
  WE906(); // WE906
  Push(Read16(pp_WE914)); // WE914 @
  Push(Read16(pp_WE910)); // WE910 @
  Push(0);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x0032);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0xfffb);
    Push(0x0019);
    RRND(); // RRND
    TONE(); // TONE
    _2DUP(); // 2DUP
    GetColor(GREEN);
    WE922(); // WE922
    Push(5);
    MS(); // MS
    _2DUP(); // 2DUP
    GetColor(RED);
    WE922(); // WE922
    Push(5);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
  Pop(); Pop(); // 2DROP
  Push(Read16(pp_XVIS) + 0x0012); // XVIS @ 0x0012 +
  Push(Read16(pp_WE914) - 0x001f); // WE914 @ 0x001f -
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_at_(); // 2@
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(Read16(pp_YVIS) + 0x001e); // YVIS @ 0x001e +
  Push(Read16(pp_WE910) - 0x003f); // WE910 @ 0x003f -
  Push(pp_YWLD_c_YP); // YWLD:YP
  _2_at_(); // 2@
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(4);
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_at_(); // 2@
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + 1); //  1+
  Push(0);
  SQRT(); // SQRT
  _dash_(); // -
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      POINT_gt_I(); // POINT>I
      GetIL(); // @IL
      GetIH(); // @IH
      Push2Words("*SHIP");
      D_eq_(); // D=
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        GetIL(); // @IL
        GetIH(); // @IH
        Push(pp_SENSE_dash_A); // SENSE-A
        _1_dot_5_ex__2(); // 1.5!_2
      }
      j++;
    } while(j<jmax); // (LOOP)

  }
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xeb78: WORD 'WEB7A' codep=0x224c parp=0xeb7a
// ================================================

void WEB7A() // WEB7A
{
  Push(0x00b6);
  Push(0x006f);
  Push(0x007e);
  Push(0x009c);
  GetColor(GREY1);
  GetColor(GREY1);
  GetColor(VIOLET);
  IsMRC(); // ?MRC
  POLY_dash_WI(); // POLY-WI
  Push(0x00b4);
  Push(0x0071);
  Push(0x0080);
  Push(0x009a);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xebaa: WORD 'WEBAC' codep=0x224c parp=0xebac
// ================================================

void WEBAC() // WEBAC
{
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(0x009c);
  Push(0x00b7);
  Push(0x0053);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x006e);
  Push(0x007e);
  OVER(); // OVER
  Push(0x00b6);
  LLINE(); // LLINE
}


// ================================================
// 0xebd2: WORD 'WEBD4' codep=0x224c parp=0xebd4
// ================================================

void WEBD4() // WEBD4
{
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x0067);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("SENSORS", 7); // (.")
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xebf0: WORD 'WEBF2' codep=0x224c parp=0xebf2
// ================================================

void WEBF2() // WEBF2
{
  GetColor(BLACK);
  ERASE_dash_A(); // ERASE-A
  WEBAC(); // WEBAC
  WEB7A(); // WEB7A
  WEBD4(); // WEBD4
}


// ================================================
// 0xebfe: WORD 'WEC00' codep=0x1d29 parp=0xec00
// ================================================
// 0xec00: db 0x04 0x0d 0x0e 0x0b 0x09 0x03 0x06 0x07 0x08 '         '

// ================================================
// 0xec09: WORD 'WEC0B' codep=0x224c parp=0xec0b
// ================================================

void WEC0B() // WEC0B
{
  Push((Read16(Pop())&0xFF) * 3 + pp_WEC00); //  C@ 3 * WEC00 +
  Push(0);
  Push(3);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())&0xFF); //  C@
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xec23: WORD 'WEC25' codep=0x224c parp=0xec25 params=1 returns=2
// ================================================

void WEC25() // WEC25
{
  unsigned short int a, b;
  a = Pop(); // >R
  Push(Read16(a + 1)&0xFF); // I 1+ C@
  if (Pop() != 0)
  {
    Push(0);
    Push((Read16(a + 4)&0xFF) + 1); // I 4 + C@ 1+
    RRND(); // RRND
    Push(Read16(a + 4)&0xFF); // I 4 + C@
    Push(Read16(regsp)); // DUP
    Push(Pop() * Pop()); // *
    OVER(); // OVER
    Push(Read16(regsp)); // DUP
    Push(Pop() * Pop()); // *
    _dash_(); // -
    Push(0);
    SQRT(); // SQRT
    Push(Pop() + 1); //  1+
    Push(0);
    SWAP(); // SWAP
    RRND(); // RRND
    Push(0);
    Push(2);
    RRND(); // RRND
    if (Pop() != 0)
    {
      Push(-Pop()); //  NEGATE
    }
    b = Pop(); // >R
    Push(0);
    Push(2);
    RRND(); // RRND
    if (Pop() != 0)
    {
      Push(-Pop()); //  NEGATE
    }
    Push(9);
    Push(0x000f);
    _star__slash_(); // */
    Push(Pop() + (Read16(a + 2)&0xFF)); //  I' 2+ C@ +
    Push(b + (Read16(a + 3)&0xFF)); // R> I 3 + C@ +
  } else
  {
    Push(Read16(a + 2)&0xFF); // I 2+ C@
    Push((Read16(a + 4)&0xFF) + 1); // I 4 + C@ 1+
    RRND(); // RRND
    Push(Read16(a + 5)&0xFF); // I 5 + C@
    Push((Read16(a + 3)&0xFF) + 1); // I 3 + C@ 1+
    RRND(); // RRND
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xecc5: WORD 'WECC7' codep=0x1d29 parp=0xecc7
// ================================================
// 0xecc7: db 0x01 0x01 0x16 0x1b 0x00 '     '

// ================================================
// 0xeccc: WORD 'WECCE' codep=0x1d29 parp=0xecce
// ================================================
// 0xecce: db 0x02 0x01 0x16 0x1b 0x00 '     '

// ================================================
// 0xecd3: WORD 'WECD5' codep=0x224c parp=0xecd5
// ================================================

void WECD5() // WECD5
{
  LoadData(WE093); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  WE0AB(); // WE0AB
  Push(0x0480);
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
}


// ================================================
// 0xece9: WORD 'WECEB' codep=0x224c parp=0xeceb params=1 returns=0
// ================================================

void WECEB() // WECEB
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x00ff);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push((Read16(Pop())&0xFF)==1?1:0); //  C@ 1 =
    if (Pop() != 0)
    {
      Push(pp_WDFAF); // WDFAF
      ON_2(); // ON_2
    } else
    {
      Push(pp_WDFB3); // WDFB3
      ON_2(); // ON_2
    }
    Push(Read16(regsp)); // DUP
    WEC0B(); // WEC0B
    WEC25(); // WEC25
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      a = Pop(); // >R
      Push(Pop() + 0x0071); //  0x0071 +
      Push(a + 0x007f); // R> 0x007f +
      BEEPON_2(); // BEEPON_2
      LPLOT(); // LPLOT
      BEEPOFF(); // BEEPOFF
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xed43: WORD 'WED45' codep=0x224c parp=0xed45 params=0 returns=0
// ================================================

void WED45() // WED45
{
  PRINT("%", 1); // (.")
}


// ================================================
// 0xed4b: WORD 'WED4D' codep=0x224c parp=0xed4d
// ================================================

void WED4D() // WED4D
{
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  LoadData(ELEM_dash_NA); // from 'ELEMENT'
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xed6b: WORD 'WED6D' codep=0x224c parp=0xed6d
// ================================================

void WED6D() // WED6D
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(": ", 2); // (.")
  CTINIT(); // CTINIT
}


// ================================================
// 0xed7c: WORD 'WED7E' codep=0x224c parp=0xed7e params=0 returns=0
// ================================================

void WED7E() // WED7E
{
  Push(0x001d);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) return;
  Push(0x00cf);
  WE82A(); // WE82A
}


// ================================================
// 0xed90: WORD 'WED92' codep=0x224c parp=0xed92
// ================================================

void WED92() // WED92
{
  CTINIT(); // CTINIT
  Push(0x00d6);
  WE82A(); // WE82A
}


// ================================================
// 0xed9c: WORD 'WED9E' codep=0x224c parp=0xed9e
// ================================================

void WED9E() // WED9E
{
  WED4D(); // WED4D
  CTCR(); // CTCR
  Push(0x000d);
  SPACES(); // SPACES
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xedac: WORD 'WEDAE' codep=0x224c parp=0xedae
// ================================================

void WEDAE() // WEDAE
{
  unsigned short int i, imax;
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("ATMOSPHERE");
  WED6D(); // WED6D
  Push(Read16(pp_ATMO)); // ATMO @
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  Push(0x001e);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  LoadData(WE0A3); // from 'COMPOUNDS'
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  COUNT(); // COUNT
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  ICLOSE(); // ICLOSE
  SET_STR_AS_PARAM("HYDROSPHERE");
  WED6D(); // WED6D
  Push(Read16(pp_HYDRO)); // HYDRO @
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  Push(0x001e);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  LoadData(WE0A3); // from 'COMPOUNDS'
  Get_gt_C_plus_S(); // @>C+S
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  COUNT(); // COUNT
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  ICLOSE(); // ICLOSE
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  SET_STR_AS_PARAM("LITHOSPHERE");
  WED6D(); // WED6D
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    LoadData(WE09B); // from 'PLANET'
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    WED9E(); // WED9E
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee39: WORD 'WEE3B' codep=0x224c parp=0xee3b
// ================================================

void WEE3B() // WEE3B
{
  GetColor(GREY1);
  GetColor(GREY1);
  GetColor(DK_dash_GREE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x0054);
  Push(0x009a);
  POS_dot_(); // POS.
  PRINT("BIO", 3); // (.")
  Push(0x0054);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("MIN", 3); // (.")
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x0093);
  POS_dot_(); // POS.
  WE8C0(); // WE8C0
  Push(3);
  DrawR(); // .R
  WED45(); // WED45
  Push(0x0055);
  Push(0x0085);
  POS_dot_(); // POS.
  WECD5(); // WECD5
  Push(3);
  DrawR(); // .R
  WED45(); // WED45
}


// ================================================
// 0xee8d: WORD 'WEE8F' codep=0x224c parp=0xee8f
// ================================================

void WEE8F() // WEE8F
{
  unsigned short int i, imax;
  LoadData(WE054); // from 'VESSEL'
  _2_at_(); // 2@
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    CTERASE(); // CTERASE
    SET_STR_AS_PARAM("OBJECT CONSTITUENTS");
    WED6D(); // WED6D
    LoadData(WE054); // from 'VESSEL'
    Push(Read16(Pop())&0xFF); //  C@
    WE4BB(); // WE4BB
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      CTCR(); // CTCR
      Push(6);
      WED4D(); // WED4D
    }
    Push(3);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(0);
      _eq_SPECIE(); // =SPECIE
      if (Pop() != 0)
      {
        Push((0x65e1+WE07E.offset) + 1); // WE07E<IFIELD> 1+
      } else
      {
        LoadData(WE05C); // from 'VESSEL'
      }
      Push(Read16(Pop() + i)&0xFF); //  I + C@
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        CTCR(); // CTCR
        WED4D(); // WED4D
      }
      i++;
    } while(i<imax); // (LOOP)

    TIME(); // TIME
    _2_at_(); // 2@
    Push(0x0fa0); Push(0x0000);
    D_plus_(); // D+
    Push(pp_OK_dash_TALK); // OK-TALK
    StoreD(); // D!
    return;
  }
  Push(0x001d);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) return;
  WUP(); // WUP
  WED7E(); // WED7E
}


// ================================================
// 0xef19: WORD 'WEF1B' codep=0x224c parp=0xef1b
// ================================================

void WEF1B() // WEF1B
{
  GetColor(DK_dash_GREE);
  StoreCOLOR(); // !COLOR
  Push(0x0054);
  Push(0x009a);
  POS_dot_(); // POS.
  PRINT("BIO", 3); // (.")
  Push(0x0054);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("ENERGY", 6); // (.")
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x0093);
  POS_dot_(); // POS.
  Push(Read16(pp_WDFA6) * Read16(pp_WDFAF)); // WDFA6 @ WDFAF @ *
  Push(3);
  DrawR(); // .R
  WED45(); // WED45
  Push(0x0055);
  Push(0x0085);
  POS_dot_(); // POS.
  Push(Read16(pp_WDFA6) * Read16(pp_WDFB3)); // WDFA6 @ WDFB3 @ *
  Push(Read16(pp_WDFAF)); // WDFAF @
  Push(Read16(pp_WDFA6)); // WDFA6 @
  Push(0x0064);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0x004b);
    Push(0x0056);
    RRND(); // RRND
    Push(0x0064);
    _star__slash_(); // */
  }
  Push(3);
  DrawR(); // .R
  WED45(); // WED45
}


// ================================================
// 0xef9e: WORD 'WEFA0' codep=0x224c parp=0xefa0
// ================================================

void WEFA0() // WEFA0
{
  LoadData(WE083); // from 'PLANET'
  Push(Read16(Pop()) * 6); //  @ 6 *
  Push(0x0013);
  WEA1C(); // WEA1C
}


// ================================================
// 0xefb0: WORD 'WEFB2' codep=0x224c parp=0xefb2
// ================================================

void WEFB2() // WEFB2
{
  unsigned short int a, i, imax;
  Push(0x00b6);
  Push(0x006f);
  Push(0x007e);
  Push(0x009c);
  GetColor(GREY1);
  GetColor(GREY1);
  GetColor(VIOLET);
  IsMRC(); // ?MRC
  POLY_dash_WI(); // POLY-WI
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x0087);
  Push(0x009a);
  LoadData(WE083); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(0x000a);
  _slash_(); // /
  Push(0x0019);
  MIN(); // MIN
  Push(4);
  MAX(); // MAX
  a = Pop(); // >R
  Push(a); // I
  FILLCIR(); // FILLCIR
  Push(a); // R>
  Push(Read16(regsp)); // DUP
  Push(pp_WECC7 + 4); // WECC7 4 +
  C_ex__2(); // C!_2
  Push(pp_WECCE + 4); // WECCE 4 +
  C_ex__2(); // C!_2
  WE8C0(); // WE8C0
  Push(0x00ff);
  Push(0x0064);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(1);
  } else
  {
    Push(0x00ff);
  }
  Push(pp_WECC7); // WECC7
  C_ex__2(); // C!_2
  WECD5(); // WECD5
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(2);
  } else
  {
    Push(0x00ff);
  }
  Push(pp_WECCE); // WECCE
  C_ex__2(); // C!_2
  MAX(); // MAX
  Push(Pop() * 3); //  3 *
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0096);
    MAX(); // MAX
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(pp_WECC7); // WECC7
      WECEB(); // WECEB
      Push(pp_WECCE); // WECCE
      WECEB(); // WECEB
      i++;
    } while(i<imax); // (LOOP)

  }
  WEFA0(); // WEFA0
  WEE3B(); // WEE3B
  WEDAE(); // WEDAE
}


// ================================================
// 0xf06a: WORD 'WF06C' codep=0x224c parp=0xf06c
// ================================================

void WF06C() // WF06C
{
  WEBF2(); // WEBF2
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x00e2);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(0x00b4);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(Pop() * 0x0027); //  0x0027 *
  PAD_v_16(); // PAD|16
  ADDR_gt_SEG(); // ADDR>SEG
  SWAP(); // SWAP
  Push(0x007b);
  Func6("FILE-ST");
  Push(Read16(Pop())); //  @
  Push(Pop() + Pop()); // +
  Push(0x0027);
  MEM_st_DSK(); // MEM<DSK
  WE84C(); // WE84C
}


// ================================================
// 0xf0a2: WORD 'WF0A4' codep=0x224c parp=0xf0a4
// ================================================

void WF0A4() // WF0A4
{
  Push(0x0083);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(0x0059);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(0x0010);
  GetColor(BLACK);
  POLY_dash_ER(); // POLY-ER
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  WE79E(); // WE79E
  WE7BA(); // WE7BA
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WE7DE(); // WE7DE
  GetColor(RED);
  StoreCOLOR(); // !COLOR
  WE804(); // WE804
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0d8: WORD 'WF0DA' codep=0x224c parp=0xf0da
// ================================================

void WF0DA() // WF0DA
{
  LoadData(WE04C); // from 'VESSEL'
  Push(Read16(Pop())); //  @
  Push(0);
  WEA1C(); // WEA1C
}


// ================================================
// 0xf0e4: WORD 'WF0E6' codep=0x224c parp=0xf0e6
// ================================================

void WF0E6() // WF0E6
{
  WE141(); // WE141
  Push(0);
  _eq_SPECIE(); // =SPECIE
  if (Pop() != 0)
  {
    Push(0x0015);
  } else
  {
    LoadData(WE044); // from 'VESSEL'
    Push((Read16(Pop())&0xFF) - 1); //  C@ 1-
  }
  WF06C(); // WF06C
  Push(0x65e1+WE064.offset); // WE064<IFIELD>
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  Push(0);
  MAX(); // MAX
  Push(0x0064);
  LoadData(WE069); // from 'VESSEL'
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  Push(1);
  MAX(); // MAX
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
  Push(pp_WDFA6); // WDFA6
  Store_2(); // !_2
  WF0DA(); // WF0DA
  WEF1B(); // WEF1B
  WEE8F(); // WEE8F
}


// ================================================
// 0xf12c: WORD '.READINGS' codep=0x4b3b parp=0xf13a
// ================================================

void DrawREADINGS() // .READINGS
{
  switch(Pop()) // .READINGS
  {
  case 25:
    WF0E6(); // WF0E6
    break;
  case 32:
    WEFB2(); // WEFB2
    break;
  case 60:
    WED92(); // WED92
    break;
  default:
    WE906(); // WE906
    break;

  }
}

// ================================================
// 0xf14a: WORD '(/SENSORS)' codep=0x224c parp=0xf159 params=0 returns=0
// ================================================
// entry

void _ro__slash_SENSORS_rc_() // (/SENSORS)
{
  Push(1);
  Push(0xb77c); // 'OV?.EQ'
  MODULE(); // MODULE
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  _0_gt_(); // 0>
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  Push(2);
  _st_(); // <
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  Push(Pop() & !Read16(pp_IsPORT)); //  ?PORT @ NOT AND
  if (Pop() == 0) return;
  Push(2);
  Push(pp__n_AUX); // #AUX
  Store_2(); // !_2
  WEBF2(); // WEBF2
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  Push(2);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(pp__ro_PLANET); // (PLANET
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(pp_SENSE_dash_A); // SENSE-A
    _1_dot_5_ex__2(); // 1.5!_2
  } else
  {
    Push(0x0023);
    Push(0x003b);
    GetColor(RED);
    WE922(); // WE922
    do
    {
      WE9A0(); // WE9A0
      IsTRIG(); // ?TRIG
    } while(Pop() == 0);
    WEABC(); // WEABC
    Push(Read16(pp_WE914)); // WE914 @
    Push(Read16(pp_WE910)); // WE910 @
    GetColor(RED);
    WE922(); // WE922
  }
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    _gt_C_plus_S(); // >C+S
    GetINST_dash_C(); // @INST-C
    DrawREADINGS(); // .READINGS case
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("THERE'S NOTHING THERE.", 22); // (.")
  Push(0x0001); Push(0x0000);
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf20c: WORD 'WF20E' codep=0x224c parp=0xf20e params=0 returns=1
// ================================================

void WF20E() // WF20E
{
  unsigned short int i, imax;
  Push(Read16(cc_FALSE)); // FALSE
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +
  Push(0x0012);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    Push(5);
    _eq_SPECIE(); // =SPECIE
    if (Pop() != 0)
    {
      SWAP(); // SWAP
      Pop(); // DROP
      Push(Read16(cc_TRUE)); // TRUE
      SWAP(); // SWAP
      imax = i; // LEAVE
    }
    ICLOSE(); // ICLOSE
    Push(3);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf24c: WORD 'WF24E' codep=0x224c parp=0xf24e params=0 returns=0
// ================================================

void WF24E() // WF24E
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
// 0xf25e: WORD 'WF260' codep=0x224c parp=0xf260 params=0 returns=2
// ================================================

void WF260() // WF260
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xf266: WORD 'WF268' codep=0x224c parp=0xf268 params=0 returns=1
// ================================================

void WF268() // WF268
{
  unsigned short int i, imax;
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +
  Push(0x0012);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    Push(5);
    _eq_SPECIE(); // =SPECIE
    if (Pop() != 0)
    {
      Pop(); // DROP
      CI(); // CI
      imax = i; // LEAVE
    }
    ICLOSE(); // ICLOSE
    Push(3);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf29e: WORD 'WF2A0' codep=0x224c parp=0xf2a0
// ================================================

void WF2A0() // WF2A0
{
  Push(8);
  ORGIA(); // ORGIA
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+WDFAA.offset)&0xFF); // WDFAA<IFIELD> C@
  I_gt_C(); // I>C
  StoreCOLOR(); // !COLOR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2b2: WORD 'WF2B4' codep=0x224c parp=0xf2b4 params=0 returns=1
// ================================================

void WF2B4() // WF2B4
{
  Push(Read16(pp_CONTEXT_3)==4?1:0); // CONTEXT_3 @ 4 =
  if (Pop() != 0)
  {
    WF260(); // WF260
    _gt_C_plus_S(); // >C+S
    Push(7);
    _eq_SPECIE(); // =SPECIE
    Push(!Pop()); //  NOT
    ICLOSE(); // ICLOSE
    return;
  }
  Push(Read16(cc_TRUE)); // TRUE
}


// ================================================
// 0xf2d4: WORD 'WF2D6' codep=0x224c parp=0xf2d6 params=0 returns=0
// ================================================

void WF2D6() // WF2D6
{
  WF20E(); // WF20E
  Push(Pop() & !(Read16(pp_CONTEXT_3)==1?1:0)); //  CONTEXT_3 @ 1 = NOT AND
  WF2B4(); // WF2B4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0);
  Push(0x0019);
  RRND(); // RRND
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0061);
  IFIND(); // IFIND
  Pop(); // DROP
  C_gt_(); // C>
  ICLOSE(); // ICLOSE
  WF268(); // WF268
  _gt_C_plus_S(); // >C+S
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WF2A0(); // WF2A0
  Push(Read16(pp__i__dot_HUFF)); // '.HUFF @
  MODULE(); // MODULE
  WF24E(); // WF24E
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf328: WORD 'WF32A' codep=0x224c parp=0xf32a params=0 returns=2
// ================================================

void WF32A() // WF32A
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xf330: WORD 'CTXT>I' codep=0x4b3b parp=0xf33b
// ================================================

void CTXT_gt_I() // CTXT>I
{
  switch(Pop()) // CTXT>I
  {
  case 3:
    Push2Words("*SHIP");
    break;
  case 4:
    WF260(); // WF260
    break;
  default:
    WF32A(); // WF32A
    break;

  }
}

// ================================================
// 0xf347: WORD 'WF349' codep=0x224c parp=0xf349 params=0 returns=1
// ================================================

void WF349() // WF349
{
  Push(pp_STAGES); // STAGES
}


// ================================================
// 0xf34d: WORD 'WF34F' codep=0x224c parp=0xf34f params=0 returns=1
// ================================================

void WF34F() // WF34F
{
  Push(pp_STAGES + 2); // STAGES 2+
}


// ================================================
// 0xf355: WORD 'WF357' codep=0x224c parp=0xf357 params=0 returns=1
// ================================================

void WF357() // WF357
{
  Push(pp_STAGES + 6); // STAGES 6 +
}


// ================================================
// 0xf35f: WORD 'WF361' codep=0x224c parp=0xf361 params=0 returns=1
// ================================================

void WF361() // WF361
{
  Push(pp_STAGES + 8); // STAGES 8 +
}


// ================================================
// 0xf369: WORD 'WF36B' codep=0x224c parp=0xf36b params=0 returns=2
// ================================================

void WF36B() // WF36B
{
  Push(Read16(pp_STAR_dash_HR) * 0x0aaa); // STAR-HR @ 0x0aaa *
  Push(Read16(pp_STARDAT)); // STARDAT @
}


// ================================================
// 0xf37b: WORD 'WF37D' codep=0x224c parp=0xf37d params=0 returns=0
// ================================================

void WF37D() // WF37D
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push2Words("NULL");
  D_eq_(); // D=
  if (Pop() == 0) return;
  WF36B(); // WF36B
  Push(pp_HAZE); // HAZE
  StoreD(); // D!
  Push(pp_STAGES); // STAGES
  Push(0x000e);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0xf39b: WORD 'WF39D' codep=0x224c parp=0xf39d params=3 returns=1
// ================================================

void WF39D() // WF39D
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_plus_(); // D+
  WF36B(); // WF36B
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
// 0xf3bf: WORD 'WF3C1' codep=0x224c parp=0xf3c1
// ================================================

void WF3C1() // WF3C1
{
  Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
  CTXT_gt_I(); // CTXT>I case
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(0x02d8);
  Push(0x04e0);
  WITHIN(); // WITHIN
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(0x02e8);
  Push(0x0640);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  Push(Pop() & !Read16(pp_PAST)); //  PAST @ NOT AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3f3: WORD ''DO-CLOUD' codep=0x1d29 parp=0xf401
// ================================================
// 0xf401: db 0xda 0xc5 '  '

// ================================================
// 0xf403: WORD 'WF405' codep=0x224c parp=0xf405 params=0 returns=0
// ================================================

void WF405() // WF405
{
  Push(Read16(pp__i_DO_dash_CLOUD)); // 'DO-CLOUD @
  MODULE(); // MODULE
}


// ================================================
// 0xf40d: WORD 'WF40F' codep=0x224c parp=0xf40f params=0 returns=0
// ================================================

void WF40F() // WF40F
{
  WF349(); // WF349
  Push2Words("0.");
  WF39D(); // WF39D
  if (Pop() != 0)
  {
    Push(1);
    WF405(); // WF405
  }
  WF34F(); // WF34F
  Push(0xbff4); Push(0x0000);
  WF39D(); // WF39D
  if (Pop() != 0)
  {
    Push(2);
    WF405(); // WF405
  }
  WF357(); // WF357
  Push(0x7fe8); Push(0x0001);
  WF39D(); // WF39D
  if (Pop() != 0)
  {
    Push(4);
    WF405(); // WF405
  }
  WF361(); // WF361
  Push(0xffe0); Push(0x0001);
  WF39D(); // WF39D
  if (Pop() == 0) return;
  Push(5);
  WF405(); // WF405
}


// ================================================
// 0xf455: WORD '.STARDATE' codep=0x224c parp=0xf463
// ================================================
// entry

void DrawSTARDATE() // .STARDATE
{
  WE2EA(); // WE2EA
  WF2D6(); // WF2D6
  WF3C1(); // WF3C1
  if (Pop() != 0)
  {
    WF37D(); // WF37D
    WF40F(); // WF40F
    return;
  }
  Push(!Read16(pp_PAST)); // PAST @ NOT
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  WF349(); // WF349
  Push(Read16(Pop())); //  @
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    WF36B(); // WF36B
    Push(pp_HAZE); // HAZE
    _2_at_(); // 2@
    D_dash_(); // D-
    Push(0xffe0); Push(0x0001);
    D_st_(); // D<
    if (Pop() != 0)
    {
      Push(0);
      WF405(); // WF405
    }
  }
  Push2Words("NULL");
  Push(pp_HAZE); // HAZE
  StoreD(); // D!
}


// ================================================
// 0xf4af: WORD 'WF4B1' codep=0x224c parp=0xf4b1
// ================================================

void WF4B1() // WF4B1
{
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() != 0)
  {
    GetColor(YELLOW);
  } else
  {
    GetColor(RED);
  }
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf4c7: WORD 'WF4C9' codep=0x224c parp=0xf4c9
// ================================================

void WF4C9() // WF4C9
{
  RRND(); // RRND
  Push(0x0090);
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() & 1); //  1 AND
  if (Pop() != 0)
  {
    Push(Pop() + 1); //  1+
  }
  WF4B1(); // WF4B1
  LPLOT(); // LPLOT
}


// ================================================
// 0xf4e5: WORD 'WF4E7' codep=0x224c parp=0xf4e7 params=0 returns=0
// ================================================

void WF4E7() // WF4E7
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_IsCOMBAT)); // ?COMBAT @
  if (Pop() == 0) return;
  WE2C9(); // WE2C9
  Push(Read16(0x65e1+WE003.offset) * 2); // WE003<IFIELD> @ 2*
  Push(Read16(regsp)); // DUP
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(0x005c);
      Push(0x005e);
      WF4C9(); // WF4C9
      Push(j); // I
      Push(0x0060);
      Push(0x0062);
      WF4C9(); // WF4C9
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf529: WORD '(/STATUS)' codep=0x224c parp=0xf537
// ================================================
// entry

void _ro__slash_STATUS_rc_() // (/STATUS)
{
  WE8B4(); // WE8B4
  WF0A4(); // WF0A4
  WF4E7(); // WF4E7
  Push(1);
  Push(pp__n_AUX); // #AUX
  Store_2(); // !_2
}


// ================================================
// 0xf545: WORD '.STAT-TEXT' codep=0x224c parp=0xf554
// ================================================
// entry

void DrawSTAT_dash_TEXT() // .STAT-TEXT
{
  WE647(); // WE647
  WF0A4(); // WF0A4
  WF4E7(); // WF4E7
}

// 0xf55c: db 0x53 0x43 0x49 0x2d 0x00 'SCI- '

