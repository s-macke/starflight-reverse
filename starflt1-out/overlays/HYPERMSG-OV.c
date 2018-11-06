// ====== OVERLAY 'HYPERMSG-OV' ======
// store offset = 0xe550
// overlay size   = 0x1010

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE566  codep:0x224c parp:0xe566 size:0x0008 C-string:'WE566'
//           WE570  codep:0x224c parp:0xe570 size:0x0006 C-string:'WE570'
//           WE578  codep:0x2214 parp:0xe578 size:0x0002 C-string:'WE578'
//           WE57C  codep:0x2214 parp:0xe57c size:0x0002 C-string:'WE57C'
//           WE580  codep:0x2214 parp:0xe580 size:0x0002 C-string:'WE580'
//           WE584  codep:0x2214 parp:0xe584 size:0x0002 C-string:'WE584'
//           WE588  codep:0x2214 parp:0xe588 size:0x0002 C-string:'WE588'
//           WE58C  codep:0x224c parp:0xe58c size:0x000e C-string:'WE58C'
//           WE59C  codep:0x744d parp:0xe59c size:0x0003 C-string:'WE59C'
//           WE5A1  codep:0x73ea parp:0xe5a1 size:0x0006 C-string:'WE5A1'
//           WE5A9  codep:0x744d parp:0xe5a9 size:0x0003 C-string:'WE5A9'
//           WE5AE  codep:0x73ea parp:0xe5ae size:0x0006 C-string:'WE5AE'
//           WE5B6  codep:0x73ea parp:0xe5b6 size:0x0006 C-string:'WE5B6'
//           WE5BE  codep:0x744d parp:0xe5be size:0x0003 C-string:'WE5BE'
//           WE5C3  codep:0x744d parp:0xe5c3 size:0x0003 C-string:'WE5C3'
//           WE5C8  codep:0x744d parp:0xe5c8 size:0x0003 C-string:'WE5C8'
//           WE5CD  codep:0x744d parp:0xe5cd size:0x0003 C-string:'WE5CD'
//           WE5D2  codep:0x744d parp:0xe5d2 size:0x0003 C-string:'WE5D2'
//           WE5D7  codep:0x744d parp:0xe5d7 size:0x0003 C-string:'WE5D7'
//           WE5DC  codep:0x744d parp:0xe5dc size:0x0003 C-string:'WE5DC'
//           WE5E1  codep:0x744d parp:0xe5e1 size:0x0003 C-string:'WE5E1'
//         GET-VES  codep:0x4a4f parp:0xe5f0 size:0x0010 C-string:'GET_dash_VES'
//           WE602  codep:0x224c parp:0xe602 size:0x0012 C-string:'WE602'
//           WE616  codep:0x224c parp:0xe616 size:0x0070 C-string:'WE616'
//         +A-VESS  codep:0x224c parp:0xe692 size:0x00a6 C-string:'_plus_A_dash_VESS'
//           WE73A  codep:0x224c parp:0xe73a size:0x002a C-string:'WE73A'
//            ?PRL  codep:0x224c parp:0xe76d size:0x00ac C-string:'IsPRL'
//           WE81B  codep:0x224c parp:0xe81b size:0x0010 C-string:'WE81B'
//           WE82D  codep:0x224c parp:0xe82d size:0x001c C-string:'WE82D'
//           WE84B  codep:0x224c parp:0xe84b size:0x0034 C-string:'WE84B'
//           WE881  codep:0x224c parp:0xe881 size:0x001a C-string:'WE881'
//           WE89D  codep:0x224c parp:0xe89d size:0x0012 C-string:'WE89D'
//           WE8B1  codep:0x744d parp:0xe8b1 size:0x0003 C-string:'WE8B1'
//           WE8B6  codep:0x224c parp:0xe8b6 size:0x0036 C-string:'WE8B6'
//           WE8EE  codep:0x224c parp:0xe8ee size:0x001a C-string:'WE8EE'
//      DISP-SETUP  codep:0x4a4f parp:0xe917 size:0x0018 C-string:'DISP_dash_SETUP'
//           WE931  codep:0x1d29 parp:0xe931 size:0x0002 C-string:'WE931'
//           WE935  codep:0x224c parp:0xe935 size:0x001a C-string:'WE935'
//           WE951  codep:0x224c parp:0xe951 size:0x0012 C-string:'WE951'
//        DO-FLARE  codep:0x224c parp:0xe970 size:0x00de C-string:'DO_dash_FLARE'
//           WEA50  codep:0x224c parp:0xea50 size:0x0021 C-string:'WEA50'
//           WEA73  codep:0x224c parp:0xea73 size:0x000a C-string:'WEA73'
//           WEA7F  codep:0x224c parp:0xea7f size:0x000b C-string:'WEA7F'
//           WEA8C  codep:0x224c parp:0xea8c size:0x000d C-string:'WEA8C'
//           WEA9B  codep:0x224c parp:0xea9b size:0x000e C-string:'WEA9B'
//           WEAAB  codep:0x224c parp:0xeaab size:0x0016 C-string:'WEAAB'
//           WEAC3  codep:0x224c parp:0xeac3 size:0x0015 C-string:'WEAC3'
//           WEADA  codep:0x224c parp:0xeada size:0x002c C-string:'WEADA'
//           WEB08  codep:0x224c parp:0xeb08 size:0x001c C-string:'WEB08'
//           WEB26  codep:0x224c parp:0xeb26 size:0x000e C-string:'WEB26'
//           WEB36  codep:0x224c parp:0xeb36 size:0x0021 C-string:'WEB36'
//           WEB59  codep:0x224c parp:0xeb59 size:0x001b C-string:'WEB59'
//           WEB76  codep:0x224c parp:0xeb76 size:0x0017 C-string:'WEB76'
//           WEB8F  codep:0x224c parp:0xeb8f size:0x0012 C-string:'WEB8F'
//            NF-M  codep:0x4a4f parp:0xebaa size:0x0018 C-string:'NF_dash_M'
//         NF-MESS  codep:0x224c parp:0xebce size:0x0006 C-string:'NF_dash_MESS'
//           WEBD6  codep:0x224c parp:0xebd6 size:0x002c C-string:'WEBD6'
//           WEC04  codep:0x224c parp:0xec04 size:0x0027 C-string:'WEC04'
//           WEC2D  codep:0x224c parp:0xec2d size:0x0028 C-string:'WEC2D'
//           WEC57  codep:0x224c parp:0xec57 size:0x0026 C-string:'WEC57'
//           WEC7F  codep:0x224c parp:0xec7f size:0x0045 C-string:'WEC7F'
//            NS-M  codep:0x4a4f parp:0xeccd size:0x0018 C-string:'NS_dash_M'
//         NS-MESS  codep:0x224c parp:0xecf1 size:0x0006 C-string:'NS_dash_MESS'
//           WECF9  codep:0x744d parp:0xecf9 size:0x0003 C-string:'WECF9'
//           WECFE  codep:0x744d parp:0xecfe size:0x0003 C-string:'WECFE'
//           WED03  codep:0x1d29 parp:0xed03 size:0x0002 C-string:'WED03'
//           WED07  codep:0x1d29 parp:0xed07 size:0x0002 C-string:'WED07'
//           WED0B  codep:0x224c parp:0xed0b size:0x003e C-string:'WED0B'
//           WED4B  codep:0x224c parp:0xed4b size:0x0047 C-string:'WED4B'
//           WED94  codep:0x224c parp:0xed94 size:0x003c C-string:'WED94'
//           WEDD2  codep:0x224c parp:0xedd2 size:0x0012 C-string:'WEDD2'
//           WEDE6  codep:0x224c parp:0xede6 size:0x0023 C-string:'WEDE6'
//           WEE0B  codep:0x224c parp:0xee0b size:0x0018 C-string:'WEE0B'
//           WEE25  codep:0x224c parp:0xee25 size:0x0014 C-string:'WEE25'
//           WEE3B  codep:0x224c parp:0xee3b size:0x005e C-string:'WEE3B'
//           HCASE  codep:0x4a4f parp:0xeea3 size:0x0014 C-string:'HCASE'
//            HEAT  codep:0x224c parp:0xeec0 size:0x0010 C-string:'HEAT'
//           WEED2  codep:0x73ea parp:0xeed2 size:0x0006 C-string:'WEED2'
//         P-LSEED  codep:0x73ea parp:0xeee4 size:0x0006 C-string:'P_dash_LSEED'
//           WEEEC  codep:0x73ea parp:0xeeec size:0x0006 C-string:'WEEEC'
//           WEEF4  codep:0x744d parp:0xeef4 size:0x0003 C-string:'WEEF4'
//           WEEF9  codep:0x744d parp:0xeef9 size:0x0003 C-string:'WEEF9'
//           WEEFE  codep:0x224c parp:0xeefe size:0x0012 C-string:'WEEFE'
//            S>CM  codep:0x4a4f parp:0xef19 size:0x0010 C-string:'S_gt_CM'
//           WEF2B  codep:0x224c parp:0xef2b size:0x0008 C-string:'WEF2B'
//            OSET  codep:0x224c parp:0xef3c size:0x00a5 C-string:'OSET'
//           WEFE3  codep:0x224c parp:0xefe3 size:0x0006 C-string:'WEFE3'
//           WEFEB  codep:0x224c parp:0xefeb size:0x0014 C-string:'WEFEB'
//           WF001  codep:0x224c parp:0xf001 size:0x001f C-string:'WF001'
//           WF022  codep:0x224c parp:0xf022 size:0x0054 C-string:'WF022'
//           WF078  codep:0x224c parp:0xf078 size:0x0028 C-string:'WF078'
//            UF-M  codep:0x4a4f parp:0xf0a9 size:0x0018 C-string:'UF_dash_M'
//         UF-MESS  codep:0x224c parp:0xf0cd size:0x0006 C-string:'UF_dash_MESS'
//           WF0D5  codep:0x224c parp:0xf0d5 size:0x0017 C-string:'WF0D5'
//           WF0EE  codep:0x224c parp:0xf0ee size:0x0006 C-string:'WF0EE'
//           WF0F6  codep:0x224c parp:0xf0f6 size:0x0006 C-string:'WF0F6'
//           WF0FE  codep:0x224c parp:0xf0fe size:0x0006 C-string:'WF0FE'
//           WF106  codep:0x224c parp:0xf106 size:0x0006 C-string:'WF106'
//            US-M  codep:0x4a4f parp:0xf115 size:0x0014 C-string:'US_dash_M'
//         US-MESS  codep:0x224c parp:0xf135 size:0x0006 C-string:'US_dash_MESS'
//           WF13D  codep:0x224c parp:0xf13d size:0x000a C-string:'WF13D'
//           WF149  codep:0x224c parp:0xf149 size:0x0018 C-string:'WF149'
//           WF163  codep:0x224c parp:0xf163 size:0x001d C-string:'WF163'
//           WF182  codep:0x224c parp:0xf182 size:0x0014 C-string:'WF182'
//             .EX  codep:0x4a4f parp:0xf19e size:0x000c C-string:'DrawEX'
//           WF1AC  codep:0x744d parp:0xf1ac size:0x0003 C-string:'WF1AC'
//           WF1B1  codep:0x1d29 parp:0xf1b1 size:0x0002 C-string:'WF1B1'
//            DMSG  codep:0x224c parp:0xf1bc size:0x0066 C-string:'DMSG'
//           WF224  codep:0x224c parp:0xf224 size:0x0006 C-string:'WF224'
//           WF22C  codep:0x224c parp:0xf22c size:0x0012 C-string:'WF22C'
//           WF240  codep:0x224c parp:0xf240 size:0x0006 C-string:'WF240'
//           WF248  codep:0x224c parp:0xf248 size:0x0006 C-string:'WF248'
//           WF250  codep:0x224c parp:0xf250 size:0x0006 C-string:'WF250'
//          (CTXT)  codep:0x4a4f parp:0xf261 size:0x0018 C-string:'_ro_CTXT_rc_'
//           WF27B  codep:0x1d29 parp:0xf27b size:0x0002 C-string:'WF27B'
//           WF27F  codep:0x1d29 parp:0xf27f size:0x0002 C-string:'WF27F'
//           WF283  codep:0x1d29 parp:0xf283 size:0x0002 C-string:'WF283'
//           WF287  codep:0x1d29 parp:0xf287 size:0x0002 C-string:'WF287'
//           WF28B  codep:0x224c parp:0xf28b size:0x007f C-string:'WF28B'
//           WF30C  codep:0x744d parp:0xf30c size:0x0003 C-string:'WF30C'
//           WF311  codep:0x744d parp:0xf311 size:0x0003 C-string:'WF311'
//           WF316  codep:0x744d parp:0xf316 size:0x0003 C-string:'WF316'
//           WF31B  codep:0x224c parp:0xf31b size:0x0016 C-string:'WF31B'
//           WF333  codep:0x224c parp:0xf333 size:0x0076 C-string:'WF333'
//           WF3AB  codep:0x224c parp:0xf3ab size:0x0048 C-string:'WF3AB'
//           WF3F5  codep:0x224c parp:0xf3f5 size:0x002e C-string:'WF3F5'
//           WF425  codep:0x224c parp:0xf425 size:0x0016 C-string:'WF425'
//           WF43D  codep:0x1d29 parp:0xf43d size:0x0002 C-string:'WF43D'
//          TRAK-E  codep:0x224c parp:0xf44a size:0x0092 C-string:'TRAK_dash_E'
//           WF4DE  codep:0x224c parp:0xf4de size:0x0006 C-string:'WF4DE'
//           WF4E6  codep:0x224c parp:0xf4e6 size:0x0006 C-string:'WF4E6'
//           WF4EE  codep:0x2214 parp:0xf4ee size:0x0002 C-string:'WF4EE'
//           @'EXT  codep:0x4a4f parp:0xf4fa size:0x0010 C-string:'Get_i_EXT'
//         (!'EXT)  codep:0x224c parp:0xf516 size:0x0000 C-string:'_ro__ex__i_EXT_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCALE; // *MAPSCALE
extern const unsigned short int cc__i_OVBACK; // 'OVBACK
extern const unsigned short int cc_IsA_dash_WEAP; // ?A-WEAP
extern const unsigned short int cc__i_ANSYS; // 'ANSYS
extern const unsigned short int pp_TCLR; // TCLR
extern const unsigned short int pp__i_HEAT; // 'HEAT
extern const unsigned short int pp__i_TRAK; // 'TRAK
extern const unsigned short int pp_TRAK_dash_HR; // TRAK-HR
extern const unsigned short int pp_A_dash_STRENGTH; // A-STRENGTH
extern const unsigned short int pp__ro_FLARE_rc_; // (FLARE)
extern const unsigned short int pp_AVCNT; // AVCNT
extern const unsigned short int pp_IsWIN; // ?WIN
extern const unsigned short int pp__i_FLY; // 'FLY
extern const unsigned short int pp__i_UNNEST; // 'UNNEST
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_LOCRADIUS; // LOCRADIUS
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_IsFUEL_dash_DIE; // ?FUEL-DIE
extern const unsigned short int pp_GLOBALSEED; // GLOBALSEED
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp__star_GLOBAL; // *GLOBAL
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_FORCEPTASK; // FORCEPTASK
extern const unsigned short int pp_SKIP2NEST; // SKIP2NEST
extern const unsigned short int pp_Is12; // ?12
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_HEADING; // HEADING
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp__i_EXTERNAL_dash_EVENTS; // 'EXTERNAL-EVENTS
extern const unsigned short int pp_SENSE_dash_ADDR; // SENSE-ADDR
extern const unsigned short int pp_ENC_dash_TIME; // ENC-TIME
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_ANCHOR_dash_CONTOUR; // ANCHOR-CONTOUR
extern const unsigned short int pp__ro_SYSTEM_rc_; // (SYSTEM)
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern const unsigned short int pp__ro_ENCOUNTER_rc_; // (ENCOUNTER)
extern const unsigned short int pp_IsCALLING; // ?CALLING
extern Color BLACK; // BLACK
extern Color PINK; // PINK
extern Color ORANGE; // ORANGE
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType _pe_NAME; // %NAME
void _star__slash_(); // */
void MAX(); // MAX
void MIN(); // MIN
void PAD(); // PAD
void BEEP(); // BEEP
void Draw(); // .
void DrawR(); // .R
void MS(); // MS
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void ROLL(); // ROLL
void _2OVER(); // 2OVER
void D0_eq_(); // D0=
void D_eq_(); // D=
void WITHIN(); // WITHIN
void KEY_2(); // KEY_2
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void _star_CREATE(); // *CREATE
void SAVE_dash_OVERLAY(); // SAVE-OVERLAY
void StoreCOLOR(); // !COLOR
void _gt_DISPLAY(); // >DISPLAY
void DARK(); // DARK
void BYE(); // BYE
void _gt_2FONT(); // >2FONT
void DrawCIRCLE(); // .CIRCLE
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void StoreIX(); // !IX
void StoreIY(); // !IY
void INIT_dash_ICONLIST(); // INIT-ICONLIST
void POINT_gt_ICON(); // POINT>ICON
void IsICONS_dash_AT(); // ?ICONS-AT
void _plus_ICON(); // +ICON
void _plus_ICONBOX(); // +ICONBOX
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void CTPOS_dot_(); // CTPOS.
void CTERASE(); // CTERASE
void _gt_SND(); // >SND
void BEEPON(); // BEEPON
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void DATE_do__gt_ADR(); // DATE$>ADR
void DrawSORD(); // .SORD
void MROTATE(); // MROTATE
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void _plus__dash__at_(); // +-@
void CI(); // CI
void BFILL(); // BFILL


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE931 = 0xe931; // WE931 size: 2
// {0x00, 0x00}

const unsigned short int pp_WED03 = 0xed03; // WED03 size: 2
// {0x46, 0x00}

const unsigned short int pp_WED07 = 0xed07; // WED07 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF1B1 = 0xf1b1; // WF1B1 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF27B = 0xf27b; // WF27B size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF27F = 0xf27f; // WF27F size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF283 = 0xf283; // WF283 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF287 = 0xf287; // WF287 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF43D = 0xf43d; // WF43D size: 2
// {0x3a, 0x20}


const unsigned short int cc_WE578 = 0xe578; // WE578
const unsigned short int cc_WE57C = 0xe57c; // WE57C
const unsigned short int cc_WE580 = 0xe580; // WE580
const unsigned short int cc_WE584 = 0xe584; // WE584
const unsigned short int cc_WE588 = 0xe588; // WE588
const unsigned short int cc_WF4EE = 0xf4ee; // WF4EE


// 0xe562: db 0xff 0x00 '  '

// ================================================
// 0xe564: WORD 'WE566' codep=0x224c parp=0xe566 params=0 returns=0
// ================================================

void WE566() // WE566
{
  Push(Read16(pp_TCLR)); // TCLR @
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe56e: WORD 'WE570' codep=0x224c parp=0xe570 params=0 returns=0
// ================================================

void WE570() // WE570
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe576: WORD 'WE578' codep=0x2214 parp=0xe578
// ================================================
// orphan
// 0xe578: dw 0x0000

// ================================================
// 0xe57a: WORD 'WE57C' codep=0x2214 parp=0xe57c
// ================================================
// 0xe57c: dw 0x004b

// ================================================
// 0xe57e: WORD 'WE580' codep=0x2214 parp=0xe580
// ================================================
// 0xe580: dw 0x0000

// ================================================
// 0xe582: WORD 'WE584' codep=0x2214 parp=0xe584
// ================================================
// 0xe584: dw 0x0016

// ================================================
// 0xe586: WORD 'WE588' codep=0x2214 parp=0xe588
// ================================================
// 0xe588: dw 0x0190

// ================================================
// 0xe58a: WORD 'WE58C' codep=0x224c parp=0xe58c params=0 returns=0
// ================================================

void WE58C() // WE58C
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push2Words("NULL");
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe59a: WORD 'WE59C' codep=0x744d parp=0xe59c
// ================================================
IFieldType WE59C = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xe59f: WORD 'WE5A1' codep=0x73ea parp=0xe5a1
// ================================================
LoadDataType WE5A1 = {VESSELIDX, 0x05, 0x01, 0x49, 0x6491};

// ================================================
// 0xe5a7: WORD 'WE5A9' codep=0x744d parp=0xe5a9
// ================================================
IFieldType WE5A9 = {VESSELIDX, 0x0c, 0x01};

// ================================================
// 0xe5ac: WORD 'WE5AE' codep=0x73ea parp=0xe5ae
// ================================================
LoadDataType WE5AE = {VESSELIDX, 0x06, 0x01, 0x49, 0x6491};

// ================================================
// 0xe5b4: WORD 'WE5B6' codep=0x73ea parp=0xe5b6
// ================================================
LoadDataType WE5B6 = {VESSELIDX, 0x0c, 0x04, 0x49, 0x6491};

// ================================================
// 0xe5bc: WORD 'WE5BE' codep=0x744d parp=0xe5be
// ================================================
IFieldType WE5BE = {VESSELIDX, 0x12, 0x04};

// ================================================
// 0xe5c1: WORD 'WE5C3' codep=0x744d parp=0xe5c3
// ================================================
IFieldType WE5C3 = {ENCOUNTERIDX, 0x15, 0x01};

// ================================================
// 0xe5c6: WORD 'WE5C8' codep=0x744d parp=0xe5c8
// ================================================
IFieldType WE5C8 = {ENCOUNTERIDX, 0x16, 0x01};

// ================================================
// 0xe5cb: WORD 'WE5CD' codep=0x744d parp=0xe5cd
// ================================================
IFieldType WE5CD = {ENCOUNTERIDX, 0x17, 0x01};

// ================================================
// 0xe5d0: WORD 'WE5D2' codep=0x744d parp=0xe5d2
// ================================================
IFieldType WE5D2 = {ENCOUNTERIDX, 0x18, 0x01};

// ================================================
// 0xe5d5: WORD 'WE5D7' codep=0x744d parp=0xe5d7
// ================================================
IFieldType WE5D7 = {ENCOUNTERIDX, 0x19, 0x01};

// ================================================
// 0xe5da: WORD 'WE5DC' codep=0x744d parp=0xe5dc
// ================================================
IFieldType WE5DC = {ENCOUNTERIDX, 0x13, 0x01};

// ================================================
// 0xe5df: WORD 'WE5E1' codep=0x744d parp=0xe5e1
// ================================================
IFieldType WE5E1 = {ENCOUNTERIDX, 0x14, 0x01};

// ================================================
// 0xe5e4: WORD 'GET-VES' codep=0x4a4f parp=0xe5f0
// ================================================

void GET_dash_VES() // GET-VES
{
  switch(Pop()) // GET-VES
  {
  case 0:
    Push(0x63ef+WE5D7.offset); // IFIELD
    break;
  case 1:
    Push(0x63ef+WE5D2.offset); // IFIELD
    break;
  case 2:
    Push(0x63ef+WE5CD.offset); // IFIELD
    break;
  default:
    Push(0x63ef+WE5C8.offset); // IFIELD
    break;

  }
}

// ================================================
// 0xe600: WORD 'WE602' codep=0x224c parp=0xe602 params=0 returns=0
// ================================================

void WE602() // WE602
{
  Push(Read16(pp_IsCALLING)); // ?CALLING @
  if (Pop() == 0) return;
  Push(0xc437); // 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
}


// ================================================
// 0xe614: WORD 'WE616' codep=0x224c parp=0xe616 params=0 returns=3
// ================================================

void WE616() // WE616
{
  unsigned short int a, b;
  Push(Read16(cc_WE584)); // WE584
  Push(Read16(pp_IsCALLING)); // ?CALLING @
  if (Pop() != 0)
  {
    Push(Pop() - 7); //  7 -
    Push(Read16(regsp)); // DUP
    Push(0);
    Push(2);
    RRND(); // RRND
    Push(Pop() * 2 - 1); //  2* 1-
    Push(Pop() * Pop()); // *
    SWAP(); // SWAP
    Push(Read16(regsp)); // DUP
    Push(-Pop()); //  NEGATE
    SWAP(); // SWAP
    RRND(); // RRND
    Push(0);
    Push(2);
    RRND(); // RRND
    if (Pop() != 0)
    {
      SWAP(); // SWAP
    }
  } else
  {
    Push(6);
    _slash_(); // /
    Push(Read16(regsp)); // DUP
    Push(-Pop()); //  NEGATE
    SWAP(); // SWAP
    Push(Pop() + 1); //  1+
    _2DUP(); // 2DUP
    RRND(); // RRND
    b = Pop(); // >R
    RRND(); // RRND
    Push(b); // R>
  }
  Push(Read16(pp_IsCALLING)); // ?CALLING @
  if (Pop() == 0) return;
  LoadData(WE5A1); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  _plus__ex__2(); // +!_2
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(a); // R>
}


// ================================================
// 0xe686: WORD '+A-VESS' codep=0x224c parp=0xe692
// ================================================
// entry

void _plus_A_dash_VESS() // +A-VESS
{
  unsigned short int i, imax;
  Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+WE5C3.offset)&0xFF); // WE5C3<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Pop() - 2); //  2-
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  RRND(); // RRND
  Push(1);
  MAX(); // MAX
  Push(Read16(0x63ef+WE5DC.offset)&0xFF); // WE5DC<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Read16(0x63ef+WE5E1.offset)&0xFF); // WE5E1<IFIELD> C@
  ROT(); // ROT
  Push(0x00ff);
  _st_(); // <
  Push(Pop() * Pop()); // *
  _dash_(); // -
  MIN(); // MIN
  Push(0x0014 - Read16(pp_AVCNT)); // 0x0014 AVCNT @ -
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_AVCNT); // AVCNT
  _plus__ex__2(); // +!_2
  Push(Read16(regsp)); // DUP
  Push(pp__n_VESS); // #VESS
  _plus__ex__2(); // +!_2
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0019);
    do
    {
      Push(0);
      Push(4);
      RRND(); // RRND
      GET_dash_VES(); // GET-VES case
      Push(Read16(Pop())&0xFF); //  C@
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    } while(Pop() == 0);
    IOPEN(); // IOPEN
    Push(1);
    _star_CREATE(); // *CREATE
    WE616(); // WE616
    SWAP(); // SWAP
    Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
    StoreD(); // D!
    Push(0);
    Push(7);
    RRND(); // RRND
    Push(0x63ef+WE59C.offset); // WE59C<IFIELD>
    C_ex_(); // C!
    LoadData(WE5AE); // from 'VESSEL'
    Push(Read16(Pop())&0xFF); //  C@
    Push(0x63ef+WE5A9.offset); // WE5A9<IFIELD>
    C_ex_(); // C!
    LoadData(WE5B6); // from 'VESSEL'
    _2_at_(); // 2@
    Push(0x63ef+WE5BE.offset); // WE5BE<IFIELD>
    StoreD(); // D!
    WE602(); // WE602
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
  Push(Read16(pp_IsCALLING)); // ?CALLING @
  if (Pop() == 0) return;
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  StoreD(); // D!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe738: WORD 'WE73A' codep=0x224c parp=0xe73a params=1 returns=1
// ================================================

void WE73A() // WE73A
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(0);
  Push(0x000f);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i + (i >> 4)); // I I 16* +
    StoreCOLOR(); // !COLOR
    Push(0x0028);
    Push(0x0082);
    Push(a); // J
    DrawCIRCLE(); // .CIRCLE
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(a); // R>
}


// ================================================
// 0xe764: WORD '?PRL' codep=0x224c parp=0xe76d params=0 returns=1
// ================================================
// entry

void IsPRL() // ?PRL
{
  unsigned short int i, imax;
  Push((Read16(pp_CONTEXT_dash_ID_n_)==4?1:0) & Read16(cc_IsA_dash_WEAP)); // CONTEXT-ID# @ 4 = ?A-WEAP AND
  Push(Read16(pp__n_VESS)); // #VESS @
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ARREST");
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0x000d);
  Push(0xbdd8); // 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(0xbf42); // '?HEAVY'
  MODULE(); // MODULE
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("THE CRYSTAL PEARL IS PULSING!");
  DrawTTY(); // .TTY
  GetCRS(); // @CRS
  Push(1);
  Push(0x0010);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WE73A(); // WE73A
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  StoreCRS(); // !CRS
  while(1)
  {
    Push(!(Read16(pp_CONTEXT_dash_ID_n_)==3?1:0)); // CONTEXT-ID# @ 3 = NOT
    if (Pop() == 0) break;

    Push(Read16(pp__i_UNNEST)); // 'UNNEST @
    MODULE(); // MODULE
  }
  Push(Read16(pp_HEADING)); // HEADING @
  Push(0);
  Push(0x07d0);
  RRND(); // RRND
  Push(0);
  Push(0x06e0);
  RRND(); // RRND
  Push(4);
  ROLL(); // ROLL
}


// ================================================
// 0xe819: WORD 'WE81B' codep=0x224c parp=0xe81b params=1 returns=0
// ================================================

void WE81B() // WE81B
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  StoreD(); // D!
  Push(pp_LOCRADIUS); // LOCRADIUS
  Store_3(); // !_3
}


// ================================================
// 0xe82b: WORD 'WE82D' codep=0x224c parp=0xe82d params=0 returns=0
// ================================================

void WE82D() // WE82D
{
  WE58C(); // WE58C
  Push(pp_XABS); // XABS
  OFF(); // OFF
  Push(pp_YABS); // YABS
  OFF(); // OFF
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  _plus_ICONBOX(); // +ICONBOX
  WE570(); // WE570
  Push(Read16(cc_WE580)); // WE580
  WE81B(); // WE81B
}


// ================================================
// 0xe849: WORD 'WE84B' codep=0x224c parp=0xe84b params=0 returns=0
// ================================================

void WE84B() // WE84B
{
  Push(pp_XABS); // XABS
  OFF(); // OFF
  Push(pp_YABS); // YABS
  OFF(); // OFF
  WE58C(); // WE58C
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x0013?1:0); //  0x0013 =
  if (Pop() != 0)
  {
    Push(pp_SKIP2NEST); // SKIP2NEST
    ON_3(); // ON_3
  }
  IOPEN(); // IOPEN
  _plus_ICONBOX(); // +ICONBOX
  WE570(); // WE570
  Push(Read16(cc_WE584)); // WE584
  WE81B(); // WE81B
  ORGLIST(); // ORGLIST
  Push(0xc92a); // 'CSC'
  MODULE(); // MODULE
}


// ================================================
// 0xe87f: WORD 'WE881' codep=0x224c parp=0xe881 params=0 returns=0
// ================================================

void WE881() // WE881
{
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(pp__ro_FLARE_rc_); // (FLARE)
  Store_3(); // !_3
  IOPEN(); // IOPEN
  _plus_ICONBOX(); // +ICONBOX
  WE570(); // WE570
  Push(Read16(cc_WE588)); // WE588
  WE81B(); // WE81B
}


// ================================================
// 0xe89b: WORD 'WE89D' codep=0x224c parp=0xe89d
// ================================================

void WE89D() // WE89D
{
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0xc437); // 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8af: WORD 'WE8B1' codep=0x744d parp=0xe8b1
// ================================================
IFieldType WE8B1 = {STARSYSTEMIDX, 0x0b, 0x02};

// ================================================
// 0xe8b4: WORD 'WE8B6' codep=0x224c parp=0xe8b6 params=0 returns=1
// ================================================

void WE8B6() // WE8B6
{
  CI(); // CI
  Push2Words("*ARTH");
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push2Words("*ASYS");
    _gt_C_plus_S(); // >C+S
    Push(Read16(pp_STARDATE)); // STARDATE @
    Push(Read16(0x63ef+WE8B1.offset)); // WE8B1<IFIELD> @
    _st_(); // <
    Push(!Pop()); //  NOT
    Push(Read16(pp_IsWIN)); // ?WIN @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+WE8B1.offset)); // WE8B1<IFIELD> @
      _gt_(); // >
      Push(Pop() & Pop()); // AND
    }
    ICLOSE(); // ICLOSE
    return;
  }
  Push(1);
}


// ================================================
// 0xe8ec: WORD 'WE8EE' codep=0x224c parp=0xe8ee params=0 returns=0
// ================================================

void WE8EE() // WE8EE
{
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  _plus_ICONBOX(); // +ICONBOX
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  Push(pp__star_GLOBAL); // *GLOBAL
  Store_3(); // !_3
  WE570(); // WE570
  Push(Read16(cc_WE57C)); // WE57C
  WE81B(); // WE81B
}


// ================================================
// 0xe908: WORD 'DISP-SETUP' codep=0x4a4f parp=0xe917
// ================================================
// entry

void DISP_dash_SETUP() // DISP-SETUP
{
  switch(Pop()) // DISP-SETUP
  {
  case 1:
    WE82D(); // WE82D
    break;
  case 2:
    WE881(); // WE881
    break;
  case 3:
    WE8EE(); // WE8EE
    break;
  case 4:
    WE84B(); // WE84B
    break;
  case 5:
    WE89D(); // WE89D
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe92f: WORD 'WE931' codep=0x1d29 parp=0xe931
// ================================================
// 0xe931: db 0x00 0x00 '  '

// ================================================
// 0xe933: WORD 'WE935' codep=0x224c parp=0xe935 params=0 returns=3
// ================================================

void WE935() // WE935
{
  Push(0x03e8);
  MS(); // MS
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_at_(); // 1.5@
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  Push(pp_WE931); // WE931
  OFF(); // OFF
  Push(0);
  Push(Read16(cc__i_ANSYS)); // 'ANSYS
  MODULE(); // MODULE
}


// ================================================
// 0xe94f: WORD 'WE951' codep=0x224c parp=0xe951 params=0 returns=0
// ================================================

void WE951() // WE951
{
  Push(0x000a);
  Push(Read16(pp_YBLT) - 0x000b); // YBLT @ 0x000b -
  POS_dot_(); // POS.
}


// ================================================
// 0xe963: WORD 'DO-FLARE' codep=0x224c parp=0xe970
// ================================================
// entry

void DO_dash_FLARE() // DO-FLARE
{
  unsigned short int i, imax;
  _gt_DISPLAY(); // >DISPLAY
  BEEPOFF(); // BEEPOFF
  Push(0x0032);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x000c);
    Push(0x000f);
    RRND(); // RRND
    Push(Read16(regsp)); // DUP
    Push(Pop() >> 4); //  16*
    Push(Pop() + Pop()); // +
    StoreCOLOR(); // !COLOR
    BFILL(); // BFILL
    i++;
  } while(i<imax); // (LOOP)

  DARK(); // DARK
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x000a);
  Push(0x00c7);
  POS_dot_(); // POS.
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  Get_gt_C_plus_S(); // @>C+S
  WE951(); // WE951
  PRINT("STAR IN SYSTEM ", 15); // (.")
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(0);
  DrawR(); // .R
  PRINT(", ", 2); // (.")
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Draw(); // .
  WE951(); // WE951
  PRINT("FLARED ON STARDATE", 18); // (.")
  WE951(); // WE951
  Push(Read16(pp_STARDATE)); // STARDATE @
  PAD(); // PAD
  DATE_do__gt_ADR(); // DATE$>ADR
  PAD(); // PAD
  Push(0x000a);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  WE951(); // WE951
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  PRINT("THE ISS ", 8); // (.")
  Push(0x63ef+_pe_NAME.offset); // %NAME<IFIELD>
  _do__dot_(); // $.
  WE951(); // WE951
  PRINT("AND CREW WERE INCINERATED.", 26); // (.")
  WE951(); // WE951
  WE951(); // WE951
  PRINT("GAME OVER", 9); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP
  do
  {
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
  } while(Pop() == 0);
  BYE(); // BYE
}


// ================================================
// 0xea4e: WORD 'WEA50' codep=0x224c parp=0xea50 params=2 returns=0
// ================================================

void WEA50() // WEA50
{
  SET_STR_AS_PARAM("...COMMENCING ");
  DrawTTY(); // .TTY
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" TRAVEL", 7); // (.")
}


// ================================================
// 0xea71: WORD 'WEA73' codep=0x224c parp=0xea73 params=0 returns=2
// ================================================

void WEA73() // WEA73
{
  SET_STR_AS_PARAM("ORBIT");
}


// ================================================
// 0xea7d: WORD 'WEA7F' codep=0x224c parp=0xea7f params=0 returns=2
// ================================================

void WEA7F() // WEA7F
{
  SET_STR_AS_PARAM("SYSTEM");
}


// ================================================
// 0xea8a: WORD 'WEA8C' codep=0x224c parp=0xea8c params=0 returns=2
// ================================================

void WEA8C() // WEA8C
{
  SET_STR_AS_PARAM("STARPORT");
}


// ================================================
// 0xea99: WORD 'WEA9B' codep=0x224c parp=0xea9b params=0 returns=2
// ================================================

void WEA9B() // WEA9B
{
  SET_STR_AS_PARAM("ENCOUNTER");
}


// ================================================
// 0xeaa9: WORD 'WEAAB' codep=0x224c parp=0xeaab params=0 returns=0
// ================================================

void WEAAB() // WEAAB
{
  SET_STR_AS_PARAM("STANDING BY TO ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xeac1: WORD 'WEAC3' codep=0x224c parp=0xeac3 params=0 returns=0
// ================================================

void WEAC3() // WEAC3
{
  WEAAB(); // WEAAB
  PRINT("DOCK WITH ", 10); // (.")
  WEA8C(); // WEA8C
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xead8: WORD 'WEADA' codep=0x224c parp=0xeada params=0 returns=0
// ================================================

void WEADA() // WEADA
{
  WEAAB(); // WEAAB
  WEA73(); // WEA73
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ENC_dash_TIME); // ENC-TIME
  StoreD(); // D!
  SET_STR_AS_PARAM("PRESS SPACEBAR TO ORBIT");
  DrawTTY(); // .TTY
}


// ================================================
// 0xeb06: WORD 'WEB08' codep=0x224c parp=0xeb08
// ================================================

void WEB08() // WEB08
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  WE8B6(); // WE8B6
  Push(!Pop()); //  NOT
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    WEAC3(); // WEAC3
  } else
  {
    WEADA(); // WEADA
  }
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb24: WORD 'WEB26' codep=0x224c parp=0xeb26 params=0 returns=0
// ================================================

void WEB26() // WEB26
{
  PRINT(" COMPLETE", 9); // (.")
}


// ================================================
// 0xeb34: WORD 'WEB36' codep=0x224c parp=0xeb36 params=0 returns=0
// ================================================

void WEB36() // WEB36
{
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  WEA73(); // WEA73
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" ESTABLISHED", 12); // (.")
  Push(pp_IsFUEL_dash_DIE); // ?FUEL-DIE
  OFF(); // OFF
}


// ================================================
// 0xeb57: WORD 'WEB59' codep=0x224c parp=0xeb59 params=0 returns=3
// ================================================

void WEB59() // WEB59
{
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  WEA7F(); // WEA7F
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" ENTRY", 6); // (.")
  WEB26(); // WEB26
  WE935(); // WE935
}


// ================================================
// 0xeb74: WORD 'WEB76' codep=0x224c parp=0xeb76 params=0 returns=0
// ================================================

void WEB76() // WEB76
{
  SET_STR_AS_PARAM("...DOCKING");
  DrawTTY(); // .TTY
  WEB26(); // WEB26
  Push(Read16(cc__i_OVBACK)); // 'OVBACK
  MODULE(); // MODULE
}


// ================================================
// 0xeb8d: WORD 'WEB8F' codep=0x224c parp=0xeb8f params=0 returns=0
// ================================================

void WEB8F() // WEB8F
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x03e8); Push(0x0000);
  D_plus_(); // D+
  Push(pp_KEYTIME); // KEYTIME
  StoreD(); // D!
}


// ================================================
// 0xeba1: WORD 'NF-M' codep=0x4a4f parp=0xebaa
// ================================================

void NF_dash_M() // NF-M
{
  switch(Pop()) // NF-M
  {
  case 1:
    WEB08(); // WEB08
    break;
  case 2:
    WEB59(); // WEB59
    break;
  case 4:
    WEB8F(); // WEB8F
    break;
  case 5:
    WEB76(); // WEB76
    break;
  case 6:
    WEB36(); // WEB36
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xebc2: WORD 'NF-MESS' codep=0x224c parp=0xebce
// ================================================
// entry

void NF_dash_MESS() // NF-MESS
{
  WE566(); // WE566
  NF_dash_M(); // NF-M case
}


// ================================================
// 0xebd4: WORD 'WEBD6' codep=0x224c parp=0xebd6 params=0 returns=0
// ================================================

void WEBD6() // WEBD6
{
  SET_STR_AS_PARAM("COMPUTING SUB-");
  DrawTTY(); // .TTY
  WEA73(); // WEA73
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL TRAJECTORY...", 16); // (.")
}


// ================================================
// 0xec02: WORD 'WEC04' codep=0x224c parp=0xec04 params=0 returns=0
// ================================================

void WEC04() // WEC04
{
  SET_STR_AS_PARAM("INITIATING ");
  DrawTTY(); // .TTY
  WEA73(); // WEA73
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL MANEUVER...", 14); // (.")
}


// ================================================
// 0xec2b: WORD 'WEC2D' codep=0x224c parp=0xec2d params=0 returns=0
// ================================================

void WEC2D() // WEC2D
{
  SET_STR_AS_PARAM("COMMENCING ");
  DrawTTY(); // .TTY
  WEA7F(); // WEA7F
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" PENETRATION...", 15); // (.")
}


// ================================================
// 0xec55: WORD 'WEC57' codep=0x224c parp=0xec57 params=0 returns=0
// ================================================

void WEC57() // WEC57
{
  SET_STR_AS_PARAM("INITIATING DOCKING PROCEDURE...");
  DrawTTY(); // .TTY
}


// ================================================
// 0xec7d: WORD 'WEC7F' codep=0x224c parp=0xec7f params=0 returns=8
// ================================================

void WEC7F() // WEC7F
{
  SET_STR_AS_PARAM("SCANNERS INDICATE UNIDENTIFIED OBJECT!");
  DrawTTY(); // .TTY
  Push(0x02bc);
  Push(0x1e78);
  Push(0x007d);
  Push(3);
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(5);
  _gt_SND(); // >SND
}


// ================================================
// 0xecc4: WORD 'NS-M' codep=0x4a4f parp=0xeccd
// ================================================

void NS_dash_M() // NS-M
{
  switch(Pop()) // NS-M
  {
  case 0:
    WEBD6(); // WEBD6
    break;
  case 2:
    WEC2D(); // WEC2D
    break;
  case 4:
    WEC7F(); // WEC7F
    break;
  case 5:
    WEC57(); // WEC57
    break;
  case 6:
    WEC04(); // WEC04
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xece5: WORD 'NS-MESS' codep=0x224c parp=0xecf1
// ================================================
// entry

void NS_dash_MESS() // NS-MESS
{
  WE566(); // WE566
  NS_dash_M(); // NS-M case
}


// ================================================
// 0xecf7: WORD 'WECF9' codep=0x744d parp=0xecf9
// ================================================
IFieldType WECF9 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xecfc: WORD 'WECFE' codep=0x744d parp=0xecfe
// ================================================
IFieldType WECFE = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xed01: WORD 'WED03' codep=0x1d29 parp=0xed03
// ================================================
// orphan
// 0xed03: db 0x46 0x00 'F '

// ================================================
// 0xed05: WORD 'WED07' codep=0x1d29 parp=0xed07
// ================================================
// 0xed07: db 0x3a 0x20 ': '

// ================================================
// 0xed09: WORD 'WED0B' codep=0x224c parp=0xed0b params=0 returns=0
// ================================================

void WED0B() // WED0B
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+WECFE.offset)&0xFF); // WECFE<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x0080); //  0x0080 AND
  SWAP(); // SWAP
  Push((Pop() & 0x007f) >> 1); //  0x007f AND 2/
  Push(Pop() | Pop()); // OR
  Push(0x63ef+WECFE.offset); // WECFE<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() != 0)
  {
    Push(0xbe4b); // 'OVDBA'
  } else
  {
    Push(0xbe2b); // 'OV/DA'
  }
  MODULE(); // MODULE
}


// ================================================
// 0xed49: WORD 'WED4B' codep=0x224c parp=0xed4b params=0 returns=0
// ================================================

void WED4B() // WED4B
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("CAPTAIN,");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("THE SHIP IS BEGINNING TO VIBRATE!");
  DrawTTY(); // .TTY
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WECF9.offset); // WECF9<IFIELD>
  OFF(); // OFF
  ICLOSE(); // ICLOSE
  Push(pp_WED07); // WED07
  OFF(); // OFF
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xed92: WORD 'WED94' codep=0x224c parp=0xed94 params=0 returns=0
// ================================================

void WED94() // WED94
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(1);
  Push(7);
  RRND(); // RRND
  Push(Pop() * 2 + (0x63ef+WECFE.offset)); //  2* WECFE<IFIELD> +
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x0080); //  0x0080 AND
  SWAP(); // SWAP
  Push((Pop() & 0x007f) - 3); //  0x007f AND 3 -
  Push(0);
  MAX(); // MAX
  Push(Pop() | Pop()); // OR
  SWAP(); // SWAP
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(0xbe2b); // 'OV/DA'
  MODULE(); // MODULE
}


// ================================================
// 0xedd0: WORD 'WEDD2' codep=0x224c parp=0xedd2 params=0 returns=0
// ================================================

void WEDD2() // WEDD2
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("THE HULL ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xede4: WORD 'WEDE6' codep=0x224c parp=0xede6 params=0 returns=0
// ================================================

void WEDE6() // WEDE6
{
  WEDD2(); // WEDD2
  PRINT("TEMPERATURE IS INCREASING!", 26); // (.")
  WED0B(); // WED0B
}


// ================================================
// 0xee09: WORD 'WEE0B' codep=0x224c parp=0xee0b params=0 returns=0
// ================================================

void WEE0B() // WEE0B
{
  WEDD2(); // WEDD2
  PRINT("IS GLOWING RED!", 15); // (.")
  WED0B(); // WED0B
}


// ================================================
// 0xee23: WORD 'WEE25' codep=0x224c parp=0xee25 params=0 returns=0
// ================================================

void WEE25() // WEE25
{
  WEDD2(); // WEDD2
  PRINT("IS MELTING!", 11); // (.")
  WED0B(); // WED0B
}


// ================================================
// 0xee39: WORD 'WEE3B' codep=0x224c parp=0xee3b
// ================================================

void WEE3B() // WEE3B
{
  unsigned short int i, imax;
  WEDD2(); // WEDD2
  PRINT("IS ... AHHHHHH!", 15); // (.")
  BEEPON(); // BEEPON
  Push(0x9c40);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(-1);
    Push(0x2710);
    RRND(); // RRND
    TONE(); // TONE
    Push(1);
    i += Pop();
  } while(i<imax); // (/LOOP)

  BEEPOFF(); // BEEPOFF
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  GetColor(YELLOW);
  Push(0x4f0c); // 'BLACK'
  Store_3(); // !_3
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("**SHIP MELTED**");
  DrawTTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE(); // BYE
}


// ================================================
// 0xee99: WORD 'HCASE' codep=0x4a4f parp=0xeea3
// ================================================

void HCASE() // HCASE
{
  switch(Pop()) // HCASE
  {
  case 70:
    WEDE6(); // WEDE6
    break;
  case 140:
    WEE0B(); // WEE0B
    break;
  case 210:
    WEE25(); // WEE25
    break;
  case 280:
    WEE3B(); // WEE3B
    break;
  default:
    WED94(); // WED94
    break;

  }
}

// ================================================
// 0xeeb7: WORD 'HEAT' codep=0x224c parp=0xeec0
// ================================================
// entry

void HEAT() // HEAT
{
  Push(1);
  Push(pp_WED07); // WED07
  _plus__ex__2(); // +!_2
  Push(Read16(pp_WED07)); // WED07 @
  HCASE(); // HCASE case
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xeed0: WORD 'WEED2' codep=0x73ea parp=0xeed2
// ================================================
LoadDataType WEED2 = {PLANETIDX, 0x07, 0x02, 0x16, 0x658f};

// ================================================
// 0xeed8: WORD 'P-LSEED' codep=0x73ea parp=0xeee4
// ================================================
LoadDataType P_dash_LSEED = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xeeea: WORD 'WEEEC' codep=0x73ea parp=0xeeec
// ================================================
LoadDataType WEEEC = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};

// ================================================
// 0xeef2: WORD 'WEEF4' codep=0x744d parp=0xeef4
// ================================================
IFieldType WEEF4 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xeef7: WORD 'WEEF9' codep=0x744d parp=0xeef9
// ================================================
IFieldType WEEF9 = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xeefc: WORD 'WEEFE' codep=0x224c parp=0xeefe
// ================================================

void WEEFE() // WEEFE
{
  LoadData(P_dash_LSEED); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  Push(2);
}


// ================================================
// 0xef10: WORD 'S>CM' codep=0x4a4f parp=0xef19
// ================================================

void S_gt_CM() // S>CM
{
  switch(Pop()) // S>CM
  {
  case 4:
    Push(4);
    break;
  case 1:
    Push(5);
    break;
  case 3:
    Push(3);
    break;
  default:
    WEEFE(); // WEEFE
    break;

  }
}

// ================================================
// 0xef29: WORD 'WEF2B' codep=0x224c parp=0xef2b
// ================================================

void WEF2B() // WEF2B
{
  LoadData(WEEEC); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  S_gt_CM(); // S>CM case
}


// ================================================
// 0xef33: WORD 'OSET' codep=0x224c parp=0xef3c
// ================================================
// entry

void OSET() // OSET
{
  Push(6);
  NS_dash_MESS(); // NS-MESS
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
  WE8B6(); // WE8B6
  if (Pop() != 0)
  {
    Push(pp_WE931); // WE931
    ON_3(); // ON_3
    WEF2B(); // WEF2B
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(0);
    Push(0x0012);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      CI(); // CI
      Pop(); // DROP
    } else
    {
      LoadData(WEED2); // from 'PLANET'
      Push(Read16(Pop())); //  @
    }
    Push(Read16(regsp)); // DUP
    Push(pp_GLOBALSEED); // GLOBALSEED
    Store_3(); // !_3
    Push(0xc834); // 'SET-PLANET'
    MODULE(); // MODULE
    Push(0xc380); // 'INIT-ORBIT'
    MODULE(); // MODULE
    MROTATE(); // MROTATE
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop()==0x0017?1:0); //  0x0017 =
    if (Pop() != 0)
    {
      Push(1);
      Push(0xbdd8); // 'OV?ARTIFACT'
      MODULE(); // MODULE
      if (Pop() != 0)
      {
        SET_STR_AS_PARAM("THE CRYSTAL ORB IS GLOWING");
        DrawTTY(); // .TTY
        Push(0x3a48); // 'NOP'
      } else
      {
        WED4B(); // WED4B
        Push(Read16(pp__i_HEAT)); // 'HEAT @
        Push(pp_FORCEPTASK); // FORCEPTASK
        ON_3(); // ON_3
      }
    } else
    {
      Push(0xc3f3); // 'MROTATE'
    }
    Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
    Store_3(); // !_3
    Push(-1);
    Push(pp_PLHI); // PLHI
    Store_3(); // !_3
  }
  ICLOSE(); // ICLOSE
  Push(6);
  NF_dash_MESS(); // NF-MESS
}


// ================================================
// 0xefe1: WORD 'WEFE3' codep=0x224c parp=0xefe3 params=0 returns=0
// ================================================

void WEFE3() // WEFE3
{
  WEA7F(); // WEA7F
  WEA50(); // WEA50
}


// ================================================
// 0xefe9: WORD 'WEFEB' codep=0x224c parp=0xefeb params=0 returns=0
// ================================================

void WEFEB() // WEFEB
{
  SET_STR_AS_PARAM("INTER-STELLAR");
  WEA50(); // WEA50
}


// ================================================
// 0xefff: WORD 'WF001' codep=0x224c parp=0xf001 params=0 returns=0
// ================================================

void WF001() // WF001
{
  Push(0xc4e5); // 'OVFLUX-EFFECT'
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  WEA8C(); // WEA8C
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" CLEAR", 6); // (.")
}


// ================================================
// 0xf020: WORD 'WF022' codep=0x224c parp=0xf022 params=0 returns=0
// ================================================

void WF022() // WF022
{
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  WEA9B(); // WEA9B
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" TERMINATED", 11); // (.")
  Push(0xbef3); // 'OV/STATUS'
  MODULE(); // MODULE
  Push(Read16(pp_SKIP2NEST)); // SKIP2NEST @
  if (Pop() != 0)
  {
    OSET(); // OSET
    Push(pp_FORCEPTASK); // FORCEPTASK
    OFF(); // OFF
  }
  Push(!(Read16(pp_CONTEXT_dash_ID_n_)==1?1:0)); // CONTEXT-ID# @ 1 = NOT
  if (Pop() != 0)
  {
    Push(0xea60); Push(0x0000);
  } else
  {
    Push2Words("NULL");
  }
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_ENC_dash_TIME); // ENC-TIME
  StoreD(); // D!
}


// ================================================
// 0xf076: WORD 'WF078' codep=0x224c parp=0xf078 params=0 returns=0
// ================================================

void WF078() // WF078
{
  SET_STR_AS_PARAM("OUTSIDE ");
  DrawTTY(); // .TTY
  WEA73(); // WEA73
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL RANGE", 8); // (.")
  Push(Read16(pp_WE931)); // WE931 @
  if (Pop() == 0) return;
  WE935(); // WE935
}


// ================================================
// 0xf0a0: WORD 'UF-M' codep=0x4a4f parp=0xf0a9
// ================================================

void UF_dash_M() // UF-M
{
  switch(Pop()) // UF-M
  {
  case 6:
    WEFE3(); // WEFE3
    break;
  case 2:
    WEFEB(); // WEFEB
    break;
  case 4:
    WF022(); // WF022
    break;
  case 5:
    WF001(); // WF001
    break;
  case 1:
    WF078(); // WF078
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf0c1: WORD 'UF-MESS' codep=0x224c parp=0xf0cd
// ================================================
// entry

void UF_dash_MESS() // UF-MESS
{
  WE566(); // WE566
  UF_dash_M(); // UF-M case
}


// ================================================
// 0xf0d3: WORD 'WF0D5' codep=0x224c parp=0xf0d5 params=2 returns=0
// ================================================

void WF0D5() // WF0D5
{
  SET_STR_AS_PARAM("LEAVING ");
  DrawTTY(); // .TTY
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("...", 3); // (.")
}


// ================================================
// 0xf0ec: WORD 'WF0EE' codep=0x224c parp=0xf0ee params=0 returns=0
// ================================================

void WF0EE() // WF0EE
{
  WEA7F(); // WEA7F
  WF0D5(); // WF0D5
}


// ================================================
// 0xf0f4: WORD 'WF0F6' codep=0x224c parp=0xf0f6 params=0 returns=0
// ================================================

void WF0F6() // WF0F6
{
  WEA8C(); // WEA8C
  WF0D5(); // WF0D5
}


// ================================================
// 0xf0fc: WORD 'WF0FE' codep=0x224c parp=0xf0fe params=0 returns=0
// ================================================

void WF0FE() // WF0FE
{
  WEA9B(); // WEA9B
  WF0D5(); // WF0D5
}


// ================================================
// 0xf104: WORD 'WF106' codep=0x224c parp=0xf106 params=0 returns=0
// ================================================

void WF106() // WF106
{
  WEA73(); // WEA73
  WF0D5(); // WF0D5
}


// ================================================
// 0xf10c: WORD 'US-M' codep=0x4a4f parp=0xf115
// ================================================

void US_dash_M() // US-M
{
  switch(Pop()) // US-M
  {
  case 6:
    WF106(); // WF106
    break;
  case 2:
    WF0EE(); // WF0EE
    break;
  case 4:
    WF0FE(); // WF0FE
    break;
  case 5:
    WF0F6(); // WF0F6
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf129: WORD 'US-MESS' codep=0x224c parp=0xf135
// ================================================
// entry

void US_dash_MESS() // US-MESS
{
  WE566(); // WE566
  US_dash_M(); // US-M case
}


// ================================================
// 0xf13b: WORD 'WF13D' codep=0x224c parp=0xf13d params=3 returns=0
// ================================================

void WF13D() // WF13D
{
  StoreCOLOR(); // !COLOR
  DrawTTY(); // .TTY
  BEEP(); // BEEP
  DrawSORD(); // .SORD
}


// ================================================
// 0xf147: WORD 'WF149' codep=0x224c parp=0xf149 params=0 returns=0
// ================================================

void WF149() // WF149
{
  SET_STR_AS_PARAM("FUEL SUPPLY LOW");
  GetColor(YELLOW);
  WF13D(); // WF13D
}


// ================================================
// 0xf161: WORD 'WF163' codep=0x224c parp=0xf163 params=0 returns=0
// ================================================

void WF163() // WF163
{
  SET_STR_AS_PARAM("FUEL SUPPLY CRITICAL");
  GetColor(ORANGE);
  WF13D(); // WF13D
}


// ================================================
// 0xf180: WORD 'WF182' codep=0x224c parp=0xf182 params=0 returns=0
// ================================================

void WF182() // WF182
{
  SET_STR_AS_PARAM("OUT OF FUEL");
  GetColor(PINK);
  WF13D(); // WF13D
}


// ================================================
// 0xf196: WORD '.EX' codep=0x4a4f parp=0xf19e
// ================================================
// entry

void DrawEX() // .EX
{
  switch(Pop()) // .EX
  {
  case 2:
    WF163(); // WF163
    break;
  case 3:
    WF149(); // WF149
    break;
  default:
    WF182(); // WF182
    break;

  }
}

// ================================================
// 0xf1aa: WORD 'WF1AC' codep=0x744d parp=0xf1ac
// ================================================
IFieldType WF1AC = {VESSELIDX, 0x15, 0x04};

// ================================================
// 0xf1af: WORD 'WF1B1' codep=0x1d29 parp=0xf1b1
// ================================================
// 0xf1b1: db 0x3a 0x20 ': '

// ================================================
// 0xf1b3: WORD 'DMSG' codep=0x224c parp=0xf1bc
// ================================================
// entry

void DMSG() // DMSG
{
  unsigned short int i, imax;
  Push(pp_WF1B1); // WF1B1
  OFF(); // OFF
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_AT(); // ?ICONS-AT
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_ICON(); // POINT>ICON
    GetID(); // @ID
    Push(Pop()==0x002b?1:0); //  0x002b =
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      Push(0x63ef+WF1AC.offset); // WF1AC<IFIELD>
      _2_at_(); // 2@
      Push(Pop() | Pop()); // OR
      ICLOSE(); // ICLOSE
      if (Pop() != 0)
      {
        Push(pp_WF1B1); // WF1B1
        ON_3(); // ON_3
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_WF1B1)); // WF1B1 @
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("READY TO PICK UP DEBRIS");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf222: WORD 'WF224' codep=0x224c parp=0xf224 params=1 returns=1
// ================================================

void WF224() // WF224
{
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xf22a: WORD 'WF22C' codep=0x224c parp=0xf22c params=1 returns=1
// ================================================

void WF22C() // WF22C
{
  Push(Pop()==4?1:0); //  4 =
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  Push(3);
}


// ================================================
// 0xf23e: WORD 'WF240' codep=0x224c parp=0xf240 params=1 returns=1
// ================================================

void WF240() // WF240
{
  Pop(); // DROP
  Push(2);
}


// ================================================
// 0xf246: WORD 'WF248' codep=0x224c parp=0xf248 params=1 returns=1
// ================================================

void WF248() // WF248
{
  Pop(); // DROP
  Push(4);
}


// ================================================
// 0xf24e: WORD 'WF250' codep=0x224c parp=0xf250 params=1 returns=1
// ================================================

void WF250() // WF250
{
  Pop(); // DROP
  Push(5);
}


// ================================================
// 0xf256: WORD '(CTXT)' codep=0x4a4f parp=0xf261
// ================================================
// entry

void _ro_CTXT_rc_() // (CTXT)
{
  switch(Pop()) // (CTXT)
  {
  case 32:
    WF224(); // WF224
    break;
  case 11:
    WF22C(); // WF22C
    break;
  case 23:
    WF240(); // WF240
    break;
  case 61:
    WF248(); // WF248
    break;
  case 18:
    WF250(); // WF250
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf279: WORD 'WF27B' codep=0x1d29 parp=0xf27b
// ================================================
// 0xf27b: db 0x3a 0x20 ': '

// ================================================
// 0xf27d: WORD 'WF27F' codep=0x1d29 parp=0xf27f
// ================================================
// 0xf27f: db 0x3a 0x20 ': '

// ================================================
// 0xf281: WORD 'WF283' codep=0x1d29 parp=0xf283
// ================================================
// 0xf283: db 0x3a 0x20 ': '

// ================================================
// 0xf285: WORD 'WF287' codep=0x1d29 parp=0xf287
// ================================================
// 0xf287: db 0x3a 0x20 ': '

// ================================================
// 0xf289: WORD 'WF28B' codep=0x224c parp=0xf28b params=0 returns=2
// ================================================

void WF28B() // WF28B
{
  Push(Read16(pp_WF27B)); // WF27B @
  Push(0x0096);
  _gt_(); // >
  Push(Read16(pp_WF283)); // WF283 @
  Push(8);
  _slash_(); // /
  Push(Pop() * 8); //  8 *
  Push(Read16(pp_WF287)); // WF287 @
  Push(8);
  _slash_(); // /
  Push(Pop() * 8); //  8 *
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(Read16(pp_WF27F)); // WF27F @
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    SET_STR_AS_PARAM("MOTION DETECTED AT");
    DrawTTY(); // .TTY
    Push(pp_WF27F); // WF27F
    OFF(); // OFF
  }
  SET_STR_AS_PARAM(" X:");
  DrawTTY(); // .TTY
  Push(Read16(pp_WF283)); // WF283 @
  Push(0xfff8);
  _slash_(); // /
  Draw(); // .
  Push(7);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT(" Y:", 3); // (.")
  Push(Read16(pp_WF287)); // WF287 @
  Push(0xfff8);
  _slash_(); // /
  Draw(); // .
}


// ================================================
// 0xf30a: WORD 'WF30C' codep=0x744d parp=0xf30c
// ================================================
IFieldType WF30C = {ENCOUNTERIDX, 0x11, 0x01};

// ================================================
// 0xf30f: WORD 'WF311' codep=0x744d parp=0xf311
// ================================================
IFieldType WF311 = {ENCOUNTERIDX, 0x12, 0x01};

// ================================================
// 0xf314: WORD 'WF316' codep=0x744d parp=0xf316
// ================================================
IFieldType WF316 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xf319: WORD 'WF31B' codep=0x224c parp=0xf31b params=3 returns=1
// ================================================

void WF31B() // WF31B
{
  _star__slash_(); // */
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(Pop() * Read16(cc__star_MAPSCALE)); //  *MAPSCALE *
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf331: WORD 'WF333' codep=0x224c parp=0xf333 params=0 returns=2
// ================================================

void WF333() // WF333
{
  unsigned short int a, b;
  Push(Read16(pp_CONTEXT_dash_ID_n_)==2?1:0); // CONTEXT-ID# @ 2 =
  if (Pop() != 0)
  {
    Push(3);
    Push(4);
  } else
  {
    Push(1);
    Push(2);
  }
  Push(Read16(pp_Is12) * 3); // ?12 @ 3 *
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  b = Pop(); // >R
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  SWAP(); // SWAP
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(b); // I
    Push(a); // I'
    WF31B(); // WF31B
  }
  Push(pp_WF287); // WF287
  Store_3(); // !_3
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(b); // I
    Push(a); // I'
    WF31B(); // WF31B
  }
  Push(pp_WF283); // WF283
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  Pop(); Pop(); // 2DROP
  WF28B(); // WF28B
}


// ================================================
// 0xf3a9: WORD 'WF3AB' codep=0x224c parp=0xf3ab params=0 returns=1
// ================================================

void WF3AB() // WF3AB
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x003d?1:0); //  0x003d =
  if (Pop() != 0)
  {
    Push(0x63ef+WF30C.offset); // WF30C<IFIELD>
    _plus__dash__at_(); // +-@
    Push(0xffc1);
    Push(0x0040);
    WITHIN(); // WITHIN
    Push(0x63ef+WF311.offset); // WF311<IFIELD>
    _plus__dash__at_(); // +-@
    Push(0xffc0);
    Push(0x0040);
    WITHIN(); // WITHIN
    Push(Pop() & Pop()); // AND
    Push(((Pop() | (Read16(pp_CONTEXT_dash_ID_n_)==2?1:0)) | Read16(pp_Is12)) & (Read16(0x63ef+WF316.offset)&0xFF)); //  CONTEXT-ID# @ 2 = OR ?12 @ OR WF316<IFIELD> C@ AND
    return;
  }
  Push(0);
}


// ================================================
// 0xf3f3: WORD 'WF3F5' codep=0x224c parp=0xf3f5 params=0 returns=0
// ================================================

void WF3F5() // WF3F5
{
  Push(0x63ef+WF30C.offset); // WF30C<IFIELD>
  _plus__dash__at_(); // +-@
  Push(Pop() + Read16(pp_WF283)); //  WF283 @ +
  Push(0x63ef+WF30C.offset); // WF30C<IFIELD>
  C_ex_(); // C!
  Push(0x63ef+WF311.offset); // WF311<IFIELD>
  _plus__dash__at_(); // +-@
  Push(Pop() + Read16(pp_WF287)); //  WF287 @ +
  Push(0x63ef+WF311.offset); // WF311<IFIELD>
  C_ex_(); // C!
  Push(Read16(pp_WF283)); // WF283 @
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(pp_WF287)); // WF287 @
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf423: WORD 'WF425' codep=0x224c parp=0xf425
// ================================================

void WF425() // WF425
{
  GetIX(); // @IX
  Push(Pop() + Read16(pp_WF283)); //  WF283 @ +
  StoreIX(); // !IX
  GetIY(); // @IY
  Push(Pop() + Read16(pp_WF287)); //  WF287 @ +
  StoreIY(); // !IY
}


// ================================================
// 0xf43b: WORD 'WF43D' codep=0x1d29 parp=0xf43d
// ================================================
// 0xf43d: db 0x3a 0x20 ': '

// ================================================
// 0xf43f: WORD 'TRAK-E' codep=0x224c parp=0xf44a
// ================================================
// entry

void TRAK_dash_E() // TRAK-E
{
  unsigned short int i, imax;
  Push(pp_WF43D); // WF43D
  OFF(); // OFF
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+WEEF9.offset); // WEEF9<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+WEEF4.offset)&0xFF); // WEEF4<IFIELD> C@
  Push(pp_WF27B); // WF27B
  Store_3(); // !_3
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_WF27F); // WF27F
  ON_3(); // ON_3
  Push(Read16(pp_CONTEXT_dash_ID_n_)==2?1:0); // CONTEXT-ID# @ 2 =
  if (Pop() != 0)
  {
    Push(pp_IGLOBAL); // IGLOBAL
  } else
  {
    Push(pp_ILOCAL); // ILOCAL
  }
  Push(Read16(Pop()) - 1); //  @ 1-
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_ICON(); // POINT>ICON
    GetID(); // @ID
    Push(Pop()==0x00fe?1:0); //  0x00fe =
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      WF3AB(); // WF3AB
      if (Pop() != 0)
      {
        WF333(); // WF333
        WF425(); // WF425
        WF3F5(); // WF3F5
      }
      Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
      Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
      ICLOSE(); // ICLOSE
      Push(Read16(pp_XABS)); // XABS @
      Push(Read16(pp_YABS)); // YABS @
      D_eq_(); // D=
      if (Pop() != 0)
      {
        Push(pp_WF43D); // WF43D
        ON_3(); // ON_3
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_TRAK_dash_HR); // TRAK-HR
  Store_3(); // !_3
  Push(Read16(pp_WF43D)); // WF43D @
  if (Pop() == 0) return;
  Push(Read16(pp__i_FLY)); // 'FLY @
  MODULE(); // MODULE
}


// ================================================
// 0xf4dc: WORD 'WF4DE' codep=0x224c parp=0xf4de params=0 returns=1
// ================================================

void WF4DE() // WF4DE
{
  Push(Read16(pp__i_TRAK)); // 'TRAK @
}


// ================================================
// 0xf4e4: WORD 'WF4E6' codep=0x224c parp=0xf4e6 params=0 returns=1
// ================================================

void WF4E6() // WF4E6
{
  Push(0xafa3); // 'CEX+WAX'
}


// ================================================
// 0xf4ec: WORD 'WF4EE' codep=0x2214 parp=0xf4ee
// ================================================
// 0xf4ee: dw 0x3a48

// ================================================
// 0xf4f0: WORD '@'EXT' codep=0x4a4f parp=0xf4fa
// ================================================

void Get_i_EXT() // @'EXT
{
  switch(Pop()) // @'EXT
  {
  case 2:
    WF4DE(); // WF4DE
    break;
  case 3:
    WF4DE(); // WF4DE
    break;
  case 4:
    WF4E6(); // WF4E6
    break;
  default:
    Push(Read16(cc_WF4EE)); // WF4EE
    break;

  }
}

// ================================================
// 0xf50a: WORD '(!'EXT)' codep=0x224c parp=0xf516
// ================================================
// entry

void _ro__ex__i_EXT_rc_() // (!'EXT)
{
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
  Get_i_EXT(); // @'EXT case
  Push(pp__i_EXTERNAL_dash_EVENTS); // 'EXTERNAL-EVENTS
  Store_3(); // !_3
  Push(0x000d);
  Push(0xbdd8); // 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(pp_Is12); // ?12
  Store_3(); // !_3
}

// 0xf530: db 0x48 0x4d 0x49 0x53 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x49 0x58 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'HMISC-VOC_______________________IX ------------- '

