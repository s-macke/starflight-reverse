// ====== OVERLAY 'HYPERMSG-OV' ======
// store offset = 0xe550
// overlay size   = 0x1010

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe566  codep:0x224c parp:0xe566 size:0x0008 C-string:'UNK_0xe566'
//      UNK_0xe570  codep:0x224c parp:0xe570 size:0x0006 C-string:'UNK_0xe570'
//      UNK_0xe578  codep:0x2214 parp:0xe578 size:0x0002 C-string:'UNK_0xe578'
//      UNK_0xe57c  codep:0x2214 parp:0xe57c size:0x0002 C-string:'UNK_0xe57c'
//      UNK_0xe580  codep:0x2214 parp:0xe580 size:0x0002 C-string:'UNK_0xe580'
//      UNK_0xe584  codep:0x2214 parp:0xe584 size:0x0002 C-string:'UNK_0xe584'
//      UNK_0xe588  codep:0x2214 parp:0xe588 size:0x0002 C-string:'UNK_0xe588'
//      UNK_0xe58c  codep:0x224c parp:0xe58c size:0x000e C-string:'UNK_0xe58c'
//      UNK_0xe59c  codep:0x744d parp:0xe59c size:0x0003 C-string:'UNK_0xe59c'
//      UNK_0xe5a1  codep:0x73ea parp:0xe5a1 size:0x0006 C-string:'UNK_0xe5a1'
//      UNK_0xe5a9  codep:0x744d parp:0xe5a9 size:0x0003 C-string:'UNK_0xe5a9'
//      UNK_0xe5ae  codep:0x73ea parp:0xe5ae size:0x0006 C-string:'UNK_0xe5ae'
//      UNK_0xe5b6  codep:0x73ea parp:0xe5b6 size:0x0006 C-string:'UNK_0xe5b6'
//      UNK_0xe5be  codep:0x744d parp:0xe5be size:0x0003 C-string:'UNK_0xe5be'
//      UNK_0xe5c3  codep:0x744d parp:0xe5c3 size:0x0003 C-string:'UNK_0xe5c3'
//      UNK_0xe5c8  codep:0x744d parp:0xe5c8 size:0x0003 C-string:'UNK_0xe5c8'
//      UNK_0xe5cd  codep:0x744d parp:0xe5cd size:0x0003 C-string:'UNK_0xe5cd'
//      UNK_0xe5d2  codep:0x744d parp:0xe5d2 size:0x0003 C-string:'UNK_0xe5d2'
//      UNK_0xe5d7  codep:0x744d parp:0xe5d7 size:0x0003 C-string:'UNK_0xe5d7'
//      UNK_0xe5dc  codep:0x744d parp:0xe5dc size:0x0003 C-string:'UNK_0xe5dc'
//      UNK_0xe5e1  codep:0x744d parp:0xe5e1 size:0x0003 C-string:'UNK_0xe5e1'
//         GET-VES  codep:0x4a4f parp:0xe5f0 size:0x0010 C-string:'GET_dash_VES'
//      UNK_0xe602  codep:0x224c parp:0xe602 size:0x0012 C-string:'UNK_0xe602'
//      UNK_0xe616  codep:0x224c parp:0xe616 size:0x0070 C-string:'UNK_0xe616'
//         +A-VESS  codep:0x224c parp:0xe692 size:0x00a6 C-string:'_plus_A_dash_VESS'
//      UNK_0xe73a  codep:0x224c parp:0xe73a size:0x002a C-string:'UNK_0xe73a'
//            ?PRL  codep:0x224c parp:0xe76d size:0x00ac C-string:'IsPRL'
//      UNK_0xe81b  codep:0x224c parp:0xe81b size:0x0010 C-string:'UNK_0xe81b'
//      UNK_0xe82d  codep:0x224c parp:0xe82d size:0x001c C-string:'UNK_0xe82d'
//      UNK_0xe84b  codep:0x224c parp:0xe84b size:0x0034 C-string:'UNK_0xe84b'
//      UNK_0xe881  codep:0x224c parp:0xe881 size:0x001a C-string:'UNK_0xe881'
//      UNK_0xe89d  codep:0x224c parp:0xe89d size:0x0012 C-string:'UNK_0xe89d'
//      UNK_0xe8b1  codep:0x744d parp:0xe8b1 size:0x0003 C-string:'UNK_0xe8b1'
//      UNK_0xe8b6  codep:0x224c parp:0xe8b6 size:0x0036 C-string:'UNK_0xe8b6'
//      UNK_0xe8ee  codep:0x224c parp:0xe8ee size:0x001a C-string:'UNK_0xe8ee'
//      DISP-SETUP  codep:0x4a4f parp:0xe917 size:0x0018 C-string:'DISP_dash_SETUP'
//      UNK_0xe931  codep:0x1d29 parp:0xe931 size:0x0002 C-string:'UNK_0xe931'
//      UNK_0xe935  codep:0x224c parp:0xe935 size:0x001a C-string:'UNK_0xe935'
//      UNK_0xe951  codep:0x224c parp:0xe951 size:0x0012 C-string:'UNK_0xe951'
//        DO-FLARE  codep:0x224c parp:0xe970 size:0x00de C-string:'DO_dash_FLARE'
//      UNK_0xea50  codep:0x224c parp:0xea50 size:0x0021 C-string:'UNK_0xea50'
//      UNK_0xea73  codep:0x224c parp:0xea73 size:0x000a C-string:'UNK_0xea73'
//      UNK_0xea7f  codep:0x224c parp:0xea7f size:0x000b C-string:'UNK_0xea7f'
//      UNK_0xea8c  codep:0x224c parp:0xea8c size:0x000d C-string:'UNK_0xea8c'
//      UNK_0xea9b  codep:0x224c parp:0xea9b size:0x000e C-string:'UNK_0xea9b'
//      UNK_0xeaab  codep:0x224c parp:0xeaab size:0x0016 C-string:'UNK_0xeaab'
//      UNK_0xeac3  codep:0x224c parp:0xeac3 size:0x0015 C-string:'UNK_0xeac3'
//      UNK_0xeada  codep:0x224c parp:0xeada size:0x002c C-string:'UNK_0xeada'
//      UNK_0xeb08  codep:0x224c parp:0xeb08 size:0x001c C-string:'UNK_0xeb08'
//      UNK_0xeb26  codep:0x224c parp:0xeb26 size:0x000e C-string:'UNK_0xeb26'
//      UNK_0xeb36  codep:0x224c parp:0xeb36 size:0x0021 C-string:'UNK_0xeb36'
//      UNK_0xeb59  codep:0x224c parp:0xeb59 size:0x001b C-string:'UNK_0xeb59'
//      UNK_0xeb76  codep:0x224c parp:0xeb76 size:0x0017 C-string:'UNK_0xeb76'
//      UNK_0xeb8f  codep:0x224c parp:0xeb8f size:0x0012 C-string:'UNK_0xeb8f'
//            NF-M  codep:0x4a4f parp:0xebaa size:0x0018 C-string:'NF_dash_M'
//         NF-MESS  codep:0x224c parp:0xebce size:0x0006 C-string:'NF_dash_MESS'
//      UNK_0xebd6  codep:0x224c parp:0xebd6 size:0x002c C-string:'UNK_0xebd6'
//      UNK_0xec04  codep:0x224c parp:0xec04 size:0x0027 C-string:'UNK_0xec04'
//      UNK_0xec2d  codep:0x224c parp:0xec2d size:0x0028 C-string:'UNK_0xec2d'
//      UNK_0xec57  codep:0x224c parp:0xec57 size:0x0026 C-string:'UNK_0xec57'
//      UNK_0xec7f  codep:0x224c parp:0xec7f size:0x0045 C-string:'UNK_0xec7f'
//            NS-M  codep:0x4a4f parp:0xeccd size:0x0018 C-string:'NS_dash_M'
//         NS-MESS  codep:0x224c parp:0xecf1 size:0x0006 C-string:'NS_dash_MESS'
//      UNK_0xecf9  codep:0x744d parp:0xecf9 size:0x0003 C-string:'UNK_0xecf9'
//      UNK_0xecfe  codep:0x744d parp:0xecfe size:0x0003 C-string:'UNK_0xecfe'
//      UNK_0xed03  codep:0x1d29 parp:0xed03 size:0x0002 C-string:'UNK_0xed03'
//      UNK_0xed07  codep:0x1d29 parp:0xed07 size:0x0002 C-string:'UNK_0xed07'
//      UNK_0xed0b  codep:0x224c parp:0xed0b size:0x003e C-string:'UNK_0xed0b'
//      UNK_0xed4b  codep:0x224c parp:0xed4b size:0x0047 C-string:'UNK_0xed4b'
//      UNK_0xed94  codep:0x224c parp:0xed94 size:0x003c C-string:'UNK_0xed94'
//      UNK_0xedd2  codep:0x224c parp:0xedd2 size:0x0012 C-string:'UNK_0xedd2'
//      UNK_0xede6  codep:0x224c parp:0xede6 size:0x0023 C-string:'UNK_0xede6'
//      UNK_0xee0b  codep:0x224c parp:0xee0b size:0x0018 C-string:'UNK_0xee0b'
//      UNK_0xee25  codep:0x224c parp:0xee25 size:0x0014 C-string:'UNK_0xee25'
//      UNK_0xee3b  codep:0x224c parp:0xee3b size:0x005e C-string:'UNK_0xee3b'
//           HCASE  codep:0x4a4f parp:0xeea3 size:0x0014 C-string:'HCASE'
//            HEAT  codep:0x224c parp:0xeec0 size:0x0010 C-string:'HEAT'
//      UNK_0xeed2  codep:0x73ea parp:0xeed2 size:0x0006 C-string:'UNK_0xeed2'
//         P-LSEED  codep:0x73ea parp:0xeee4 size:0x0006 C-string:'P_dash_LSEED'
//      UNK_0xeeec  codep:0x73ea parp:0xeeec size:0x0006 C-string:'UNK_0xeeec'
//      UNK_0xeef4  codep:0x744d parp:0xeef4 size:0x0003 C-string:'UNK_0xeef4'
//      UNK_0xeef9  codep:0x744d parp:0xeef9 size:0x0003 C-string:'UNK_0xeef9'
//      UNK_0xeefe  codep:0x224c parp:0xeefe size:0x0012 C-string:'UNK_0xeefe'
//            S>CM  codep:0x4a4f parp:0xef19 size:0x0010 C-string:'S_gt_CM'
//      UNK_0xef2b  codep:0x224c parp:0xef2b size:0x0008 C-string:'UNK_0xef2b'
//            OSET  codep:0x224c parp:0xef3c size:0x00a5 C-string:'OSET'
//      UNK_0xefe3  codep:0x224c parp:0xefe3 size:0x0006 C-string:'UNK_0xefe3'
//      UNK_0xefeb  codep:0x224c parp:0xefeb size:0x0014 C-string:'UNK_0xefeb'
//      UNK_0xf001  codep:0x224c parp:0xf001 size:0x001f C-string:'UNK_0xf001'
//      UNK_0xf022  codep:0x224c parp:0xf022 size:0x0054 C-string:'UNK_0xf022'
//      UNK_0xf078  codep:0x224c parp:0xf078 size:0x0028 C-string:'UNK_0xf078'
//            UF-M  codep:0x4a4f parp:0xf0a9 size:0x0018 C-string:'UF_dash_M'
//         UF-MESS  codep:0x224c parp:0xf0cd size:0x0006 C-string:'UF_dash_MESS'
//      UNK_0xf0d5  codep:0x224c parp:0xf0d5 size:0x0017 C-string:'UNK_0xf0d5'
//      UNK_0xf0ee  codep:0x224c parp:0xf0ee size:0x0006 C-string:'UNK_0xf0ee'
//      UNK_0xf0f6  codep:0x224c parp:0xf0f6 size:0x0006 C-string:'UNK_0xf0f6'
//      UNK_0xf0fe  codep:0x224c parp:0xf0fe size:0x0006 C-string:'UNK_0xf0fe'
//      UNK_0xf106  codep:0x224c parp:0xf106 size:0x0006 C-string:'UNK_0xf106'
//            US-M  codep:0x4a4f parp:0xf115 size:0x0014 C-string:'US_dash_M'
//         US-MESS  codep:0x224c parp:0xf135 size:0x0006 C-string:'US_dash_MESS'
//      UNK_0xf13d  codep:0x224c parp:0xf13d size:0x000a C-string:'UNK_0xf13d'
//      UNK_0xf149  codep:0x224c parp:0xf149 size:0x0018 C-string:'UNK_0xf149'
//      UNK_0xf163  codep:0x224c parp:0xf163 size:0x001d C-string:'UNK_0xf163'
//      UNK_0xf182  codep:0x224c parp:0xf182 size:0x0014 C-string:'UNK_0xf182'
//             .EX  codep:0x4a4f parp:0xf19e size:0x000c C-string:'DrawEX'
//      UNK_0xf1ac  codep:0x744d parp:0xf1ac size:0x0003 C-string:'UNK_0xf1ac'
//      UNK_0xf1b1  codep:0x1d29 parp:0xf1b1 size:0x0002 C-string:'UNK_0xf1b1'
//            DMSG  codep:0x224c parp:0xf1bc size:0x0066 C-string:'DMSG'
//      UNK_0xf224  codep:0x224c parp:0xf224 size:0x0006 C-string:'UNK_0xf224'
//      UNK_0xf22c  codep:0x224c parp:0xf22c size:0x0012 C-string:'UNK_0xf22c'
//      UNK_0xf240  codep:0x224c parp:0xf240 size:0x0006 C-string:'UNK_0xf240'
//      UNK_0xf248  codep:0x224c parp:0xf248 size:0x0006 C-string:'UNK_0xf248'
//      UNK_0xf250  codep:0x224c parp:0xf250 size:0x0006 C-string:'UNK_0xf250'
//          (CTXT)  codep:0x4a4f parp:0xf261 size:0x0018 C-string:'_ro_CTXT_rc_'
//      UNK_0xf27b  codep:0x1d29 parp:0xf27b size:0x0002 C-string:'UNK_0xf27b'
//      UNK_0xf27f  codep:0x1d29 parp:0xf27f size:0x0002 C-string:'UNK_0xf27f'
//      UNK_0xf283  codep:0x1d29 parp:0xf283 size:0x0002 C-string:'UNK_0xf283'
//      UNK_0xf287  codep:0x1d29 parp:0xf287 size:0x0002 C-string:'UNK_0xf287'
//      UNK_0xf28b  codep:0x224c parp:0xf28b size:0x007f C-string:'UNK_0xf28b'
//      UNK_0xf30c  codep:0x744d parp:0xf30c size:0x0003 C-string:'UNK_0xf30c'
//      UNK_0xf311  codep:0x744d parp:0xf311 size:0x0003 C-string:'UNK_0xf311'
//      UNK_0xf316  codep:0x744d parp:0xf316 size:0x0003 C-string:'UNK_0xf316'
//      UNK_0xf31b  codep:0x224c parp:0xf31b size:0x0016 C-string:'UNK_0xf31b'
//      UNK_0xf333  codep:0x224c parp:0xf333 size:0x0076 C-string:'UNK_0xf333'
//      UNK_0xf3ab  codep:0x224c parp:0xf3ab size:0x0048 C-string:'UNK_0xf3ab'
//      UNK_0xf3f5  codep:0x224c parp:0xf3f5 size:0x002e C-string:'UNK_0xf3f5'
//      UNK_0xf425  codep:0x224c parp:0xf425 size:0x0016 C-string:'UNK_0xf425'
//      UNK_0xf43d  codep:0x1d29 parp:0xf43d size:0x0002 C-string:'UNK_0xf43d'
//          TRAK-E  codep:0x224c parp:0xf44a size:0x0092 C-string:'TRAK_dash_E'
//      UNK_0xf4de  codep:0x224c parp:0xf4de size:0x0006 C-string:'UNK_0xf4de'
//      UNK_0xf4e6  codep:0x224c parp:0xf4e6 size:0x0006 C-string:'UNK_0xf4e6'
//      UNK_0xf4ee  codep:0x2214 parp:0xf4ee size:0x0002 C-string:'UNK_0xf4ee'
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
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_ENCOUNTER; // (ENCOUNTER
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
const unsigned short int pp_UNK_0xe931 = 0xe931; // UNK_0xe931 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xed03 = 0xed03; // UNK_0xed03 size: 2
// {0x46, 0x00}

const unsigned short int pp_UNK_0xed07 = 0xed07; // UNK_0xed07 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf1b1 = 0xf1b1; // UNK_0xf1b1 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf27b = 0xf27b; // UNK_0xf27b size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf27f = 0xf27f; // UNK_0xf27f size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf283 = 0xf283; // UNK_0xf283 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf287 = 0xf287; // UNK_0xf287 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf43d = 0xf43d; // UNK_0xf43d size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xe578 = 0xe578; // UNK_0xe578
const unsigned short int cc_UNK_0xe57c = 0xe57c; // UNK_0xe57c
const unsigned short int cc_UNK_0xe580 = 0xe580; // UNK_0xe580
const unsigned short int cc_UNK_0xe584 = 0xe584; // UNK_0xe584
const unsigned short int cc_UNK_0xe588 = 0xe588; // UNK_0xe588
const unsigned short int cc_UNK_0xf4ee = 0xf4ee; // UNK_0xf4ee


// 0xe562: db 0xff 0x00 '  '

// ================================================
// 0xe564: WORD 'UNK_0xe566' codep=0x224c parp=0xe566 params=0 returns=0
// ================================================

void UNK_0xe566() // UNK_0xe566
{
  Push(Read16(pp_TCLR)); // TCLR @
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe56e: WORD 'UNK_0xe570' codep=0x224c parp=0xe570 params=0 returns=0
// ================================================

void UNK_0xe570() // UNK_0xe570
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe576: WORD 'UNK_0xe578' codep=0x2214 parp=0xe578
// ================================================
// orphan
// 0xe578: dw 0x0000

// ================================================
// 0xe57a: WORD 'UNK_0xe57c' codep=0x2214 parp=0xe57c
// ================================================
// 0xe57c: dw 0x004b

// ================================================
// 0xe57e: WORD 'UNK_0xe580' codep=0x2214 parp=0xe580
// ================================================
// 0xe580: dw 0x0000

// ================================================
// 0xe582: WORD 'UNK_0xe584' codep=0x2214 parp=0xe584
// ================================================
// 0xe584: dw 0x0016

// ================================================
// 0xe586: WORD 'UNK_0xe588' codep=0x2214 parp=0xe588
// ================================================
// 0xe588: dw 0x0190

// ================================================
// 0xe58a: WORD 'UNK_0xe58c' codep=0x224c parp=0xe58c params=0 returns=0
// ================================================

void UNK_0xe58c() // UNK_0xe58c
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push2Words("NULL");
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe59a: WORD 'UNK_0xe59c' codep=0x744d parp=0xe59c
// ================================================
IFieldType UNK_0xe59c = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xe59f: WORD 'UNK_0xe5a1' codep=0x73ea parp=0xe5a1
// ================================================
LoadDataType UNK_0xe5a1 = {VESSELIDX, 0x05, 0x01, 0x49, 0x6491};

// ================================================
// 0xe5a7: WORD 'UNK_0xe5a9' codep=0x744d parp=0xe5a9
// ================================================
IFieldType UNK_0xe5a9 = {VESSELIDX, 0x0c, 0x01};

// ================================================
// 0xe5ac: WORD 'UNK_0xe5ae' codep=0x73ea parp=0xe5ae
// ================================================
LoadDataType UNK_0xe5ae = {VESSELIDX, 0x06, 0x01, 0x49, 0x6491};

// ================================================
// 0xe5b4: WORD 'UNK_0xe5b6' codep=0x73ea parp=0xe5b6
// ================================================
LoadDataType UNK_0xe5b6 = {VESSELIDX, 0x0c, 0x04, 0x49, 0x6491};

// ================================================
// 0xe5bc: WORD 'UNK_0xe5be' codep=0x744d parp=0xe5be
// ================================================
IFieldType UNK_0xe5be = {VESSELIDX, 0x12, 0x04};

// ================================================
// 0xe5c1: WORD 'UNK_0xe5c3' codep=0x744d parp=0xe5c3
// ================================================
IFieldType UNK_0xe5c3 = {ENCOUNTERIDX, 0x15, 0x01};

// ================================================
// 0xe5c6: WORD 'UNK_0xe5c8' codep=0x744d parp=0xe5c8
// ================================================
IFieldType UNK_0xe5c8 = {ENCOUNTERIDX, 0x16, 0x01};

// ================================================
// 0xe5cb: WORD 'UNK_0xe5cd' codep=0x744d parp=0xe5cd
// ================================================
IFieldType UNK_0xe5cd = {ENCOUNTERIDX, 0x17, 0x01};

// ================================================
// 0xe5d0: WORD 'UNK_0xe5d2' codep=0x744d parp=0xe5d2
// ================================================
IFieldType UNK_0xe5d2 = {ENCOUNTERIDX, 0x18, 0x01};

// ================================================
// 0xe5d5: WORD 'UNK_0xe5d7' codep=0x744d parp=0xe5d7
// ================================================
IFieldType UNK_0xe5d7 = {ENCOUNTERIDX, 0x19, 0x01};

// ================================================
// 0xe5da: WORD 'UNK_0xe5dc' codep=0x744d parp=0xe5dc
// ================================================
IFieldType UNK_0xe5dc = {ENCOUNTERIDX, 0x13, 0x01};

// ================================================
// 0xe5df: WORD 'UNK_0xe5e1' codep=0x744d parp=0xe5e1
// ================================================
IFieldType UNK_0xe5e1 = {ENCOUNTERIDX, 0x14, 0x01};

// ================================================
// 0xe5e4: WORD 'GET-VES' codep=0x4a4f parp=0xe5f0
// ================================================

void GET_dash_VES() // GET-VES
{
  switch(Pop()) // GET-VES
  {
  case 0:
    Push(0x63ef+UNK_0xe5d7.offset); // IFIELD
    break;
  case 1:
    Push(0x63ef+UNK_0xe5d2.offset); // IFIELD
    break;
  case 2:
    Push(0x63ef+UNK_0xe5cd.offset); // IFIELD
    break;
  default:
    Push(0x63ef+UNK_0xe5c8.offset); // IFIELD
    break;

  }
}

// ================================================
// 0xe600: WORD 'UNK_0xe602' codep=0x224c parp=0xe602 params=0 returns=0
// ================================================

void UNK_0xe602() // UNK_0xe602
{
  Push(Read16(pp_IsCALLING)); // ?CALLING @
  if (Pop() == 0) return;
  Push(0xc437); // probable 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
}


// ================================================
// 0xe614: WORD 'UNK_0xe616' codep=0x224c parp=0xe616 params=0 returns=3
// ================================================

void UNK_0xe616() // UNK_0xe616
{
  unsigned short int a, b;
  Push(Read16(cc_UNK_0xe584)); // UNK_0xe584
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
  LoadData(UNK_0xe5a1); // from 'VESSEL'
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
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+UNK_0xe5c3.offset)&0xFF); // UNK_0xe5c3<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Pop() - 2); //  2-
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  RRND(); // RRND
  Push(1);
  MAX(); // MAX
  Push(Read16(0x63ef+UNK_0xe5dc.offset)&0xFF); // UNK_0xe5dc<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Read16(0x63ef+UNK_0xe5e1.offset)&0xFF); // UNK_0xe5e1<IFIELD> C@
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
    UNK_0xe616(); // UNK_0xe616
    SWAP(); // SWAP
    Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
    StoreD(); // D!
    Push(0);
    Push(7);
    RRND(); // RRND
    Push(0x63ef+UNK_0xe59c.offset); // UNK_0xe59c<IFIELD>
    C_ex_(); // C!
    LoadData(UNK_0xe5ae); // from 'VESSEL'
    Push(Read16(Pop())&0xFF); //  C@
    Push(0x63ef+UNK_0xe5a9.offset); // UNK_0xe5a9<IFIELD>
    C_ex_(); // C!
    LoadData(UNK_0xe5b6); // from 'VESSEL'
    _2_at_(); // 2@
    Push(0x63ef+UNK_0xe5be.offset); // UNK_0xe5be<IFIELD>
    StoreD(); // D!
    UNK_0xe602(); // UNK_0xe602
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
// 0xe738: WORD 'UNK_0xe73a' codep=0x224c parp=0xe73a
// ================================================

void UNK_0xe73a() // UNK_0xe73a
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
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  _1_dot_5_at_(); // 1.5@
  Push2Words("*ARREST");
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0x000d);
  Push(0xbdd8); // probable 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(0xbf42); // probable '?HEAVY'
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
    UNK_0xe73a(); // UNK_0xe73a
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  StoreCRS(); // !CRS

  label2:
  Push(!(Read16(pp_CONTEXT_dash_ID_n_)==3?1:0)); // CONTEXT-ID# @ 3 = NOT
  if (Pop() == 0) goto label1;
  Push(Read16(pp__i_UNNEST)); // 'UNNEST @
  MODULE(); // MODULE
  goto label2;

  label1:
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
// 0xe819: WORD 'UNK_0xe81b' codep=0x224c parp=0xe81b params=1 returns=0
// ================================================

void UNK_0xe81b() // UNK_0xe81b
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  StoreD(); // D!
  Push(pp_LOCRADIUS); // LOCRADIUS
  Store_3(); // !_3
}


// ================================================
// 0xe82b: WORD 'UNK_0xe82d' codep=0x224c parp=0xe82d params=0 returns=0
// ================================================

void UNK_0xe82d() // UNK_0xe82d
{
  UNK_0xe58c(); // UNK_0xe58c
  Push(pp_XABS); // XABS
  OFF(); // OFF
  Push(pp_YABS); // YABS
  OFF(); // OFF
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  _plus_ICONBOX(); // +ICONBOX
  UNK_0xe570(); // UNK_0xe570
  Push(Read16(cc_UNK_0xe580)); // UNK_0xe580
  UNK_0xe81b(); // UNK_0xe81b
}


// ================================================
// 0xe849: WORD 'UNK_0xe84b' codep=0x224c parp=0xe84b params=0 returns=0
// ================================================

void UNK_0xe84b() // UNK_0xe84b
{
  Push(pp_XABS); // XABS
  OFF(); // OFF
  Push(pp_YABS); // YABS
  OFF(); // OFF
  UNK_0xe58c(); // UNK_0xe58c
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
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
  UNK_0xe570(); // UNK_0xe570
  Push(Read16(cc_UNK_0xe584)); // UNK_0xe584
  UNK_0xe81b(); // UNK_0xe81b
  ORGLIST(); // ORGLIST
  Push(0xc92a); // probable 'CSC'
  MODULE(); // MODULE
}


// ================================================
// 0xe87f: WORD 'UNK_0xe881' codep=0x224c parp=0xe881 params=0 returns=0
// ================================================

void UNK_0xe881() // UNK_0xe881
{
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(pp__ro_FLARE_rc_); // (FLARE)
  Store_3(); // !_3
  IOPEN(); // IOPEN
  _plus_ICONBOX(); // +ICONBOX
  UNK_0xe570(); // UNK_0xe570
  Push(Read16(cc_UNK_0xe588)); // UNK_0xe588
  UNK_0xe81b(); // UNK_0xe81b
}


// ================================================
// 0xe89b: WORD 'UNK_0xe89d' codep=0x224c parp=0xe89d
// ================================================

void UNK_0xe89d() // UNK_0xe89d
{
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0xc437); // probable 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe8af: WORD 'UNK_0xe8b1' codep=0x744d parp=0xe8b1
// ================================================
IFieldType UNK_0xe8b1 = {STARSYSTEMIDX, 0x0b, 0x02};

// ================================================
// 0xe8b4: WORD 'UNK_0xe8b6' codep=0x224c parp=0xe8b6 params=0 returns=1
// ================================================

void UNK_0xe8b6() // UNK_0xe8b6
{
  CI(); // CI
  Push2Words("*ARTH");
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push2Words("*ASYS");
    _gt_C_plus_S(); // >C+S
    Push(Read16(pp_STARDATE)); // STARDATE @
    Push(Read16(0x63ef+UNK_0xe8b1.offset)); // UNK_0xe8b1<IFIELD> @
    _st_(); // <
    Push(!Pop()); //  NOT
    Push(Read16(pp_IsWIN)); // ?WIN @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+UNK_0xe8b1.offset)); // UNK_0xe8b1<IFIELD> @
      _gt_(); // >
      Push(Pop() & Pop()); // AND
    }
    ICLOSE(); // ICLOSE
    return;
  }
  Push(1);
}


// ================================================
// 0xe8ec: WORD 'UNK_0xe8ee' codep=0x224c parp=0xe8ee params=0 returns=0
// ================================================

void UNK_0xe8ee() // UNK_0xe8ee
{
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  INIT_dash_ICONLIST(); // INIT-ICONLIST
  _plus_ICONBOX(); // +ICONBOX
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  Push(pp__star_GLOBAL); // *GLOBAL
  Store_3(); // !_3
  UNK_0xe570(); // UNK_0xe570
  Push(Read16(cc_UNK_0xe57c)); // UNK_0xe57c
  UNK_0xe81b(); // UNK_0xe81b
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
    UNK_0xe82d(); // UNK_0xe82d
    break;
  case 2:
    UNK_0xe881(); // UNK_0xe881
    break;
  case 3:
    UNK_0xe8ee(); // UNK_0xe8ee
    break;
  case 4:
    UNK_0xe84b(); // UNK_0xe84b
    break;
  case 5:
    UNK_0xe89d(); // UNK_0xe89d
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe92f: WORD 'UNK_0xe931' codep=0x1d29 parp=0xe931
// ================================================
// 0xe931: db 0x00 0x00 '  '

// ================================================
// 0xe933: WORD 'UNK_0xe935' codep=0x224c parp=0xe935 params=0 returns=3
// ================================================

void UNK_0xe935() // UNK_0xe935
{
  Push(0x03e8);
  MS(); // MS
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  Push(pp_UNK_0xe931); // UNK_0xe931
  OFF(); // OFF
  Push(0);
  Push(Read16(cc__i_ANSYS)); // 'ANSYS
  MODULE(); // MODULE
}


// ================================================
// 0xe94f: WORD 'UNK_0xe951' codep=0x224c parp=0xe951 params=0 returns=0
// ================================================

void UNK_0xe951() // UNK_0xe951
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
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xe951(); // UNK_0xe951
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
  UNK_0xe951(); // UNK_0xe951
  PRINT("FLARED ON STARDATE", 18); // (.")
  UNK_0xe951(); // UNK_0xe951
  Push(Read16(pp_STARDATE)); // STARDATE @
  PAD(); // PAD
  DATE_do__gt_ADR(); // DATE$>ADR
  PAD(); // PAD
  Push(0x000a);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  UNK_0xe951(); // UNK_0xe951
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  PRINT("THE ISS ", 8); // (.")
  Push(0x63ef+_pe_NAME.offset); // %NAME<IFIELD>
  _do__dot_(); // $.
  UNK_0xe951(); // UNK_0xe951
  PRINT("AND CREW WERE INCINERATED.", 26); // (.")
  UNK_0xe951(); // UNK_0xe951
  UNK_0xe951(); // UNK_0xe951
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
// 0xea4e: WORD 'UNK_0xea50' codep=0x224c parp=0xea50 params=2 returns=0
// ================================================

void UNK_0xea50() // UNK_0xea50
{
  SET_STR_AS_PARAM("...COMMENCING ");
  DrawTTY(); // .TTY
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" TRAVEL", 7); // (.")
}


// ================================================
// 0xea71: WORD 'UNK_0xea73' codep=0x224c parp=0xea73 params=0 returns=2
// ================================================

void UNK_0xea73() // UNK_0xea73
{
  SET_STR_AS_PARAM("ORBIT");
}


// ================================================
// 0xea7d: WORD 'UNK_0xea7f' codep=0x224c parp=0xea7f params=0 returns=2
// ================================================

void UNK_0xea7f() // UNK_0xea7f
{
  SET_STR_AS_PARAM("SYSTEM");
}


// ================================================
// 0xea8a: WORD 'UNK_0xea8c' codep=0x224c parp=0xea8c params=0 returns=2
// ================================================

void UNK_0xea8c() // UNK_0xea8c
{
  SET_STR_AS_PARAM("STARPORT");
}


// ================================================
// 0xea99: WORD 'UNK_0xea9b' codep=0x224c parp=0xea9b params=0 returns=2
// ================================================

void UNK_0xea9b() // UNK_0xea9b
{
  SET_STR_AS_PARAM("ENCOUNTER");
}


// ================================================
// 0xeaa9: WORD 'UNK_0xeaab' codep=0x224c parp=0xeaab params=0 returns=0
// ================================================

void UNK_0xeaab() // UNK_0xeaab
{
  SET_STR_AS_PARAM("STANDING BY TO ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xeac1: WORD 'UNK_0xeac3' codep=0x224c parp=0xeac3 params=0 returns=0
// ================================================

void UNK_0xeac3() // UNK_0xeac3
{
  UNK_0xeaab(); // UNK_0xeaab
  PRINT("DOCK WITH ", 10); // (.")
  UNK_0xea8c(); // UNK_0xea8c
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xead8: WORD 'UNK_0xeada' codep=0x224c parp=0xeada params=0 returns=0
// ================================================

void UNK_0xeada() // UNK_0xeada
{
  UNK_0xeaab(); // UNK_0xeaab
  UNK_0xea73(); // UNK_0xea73
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ENC_dash_TIME); // ENC-TIME
  StoreD(); // D!
  SET_STR_AS_PARAM("PRESS SPACEBAR TO ORBIT");
  DrawTTY(); // .TTY
}


// ================================================
// 0xeb06: WORD 'UNK_0xeb08' codep=0x224c parp=0xeb08
// ================================================

void UNK_0xeb08() // UNK_0xeb08
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xe8b6(); // UNK_0xe8b6
  Push(!Pop()); //  NOT
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    UNK_0xeac3(); // UNK_0xeac3
  } else
  {
    UNK_0xeada(); // UNK_0xeada
  }
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb24: WORD 'UNK_0xeb26' codep=0x224c parp=0xeb26 params=0 returns=0
// ================================================

void UNK_0xeb26() // UNK_0xeb26
{
  PRINT(" COMPLETE", 9); // (.")
}


// ================================================
// 0xeb34: WORD 'UNK_0xeb36' codep=0x224c parp=0xeb36 params=0 returns=0
// ================================================

void UNK_0xeb36() // UNK_0xeb36
{
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  UNK_0xea73(); // UNK_0xea73
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" ESTABLISHED", 12); // (.")
  Push(pp_IsFUEL_dash_DIE); // ?FUEL-DIE
  OFF(); // OFF
}


// ================================================
// 0xeb57: WORD 'UNK_0xeb59' codep=0x224c parp=0xeb59 params=0 returns=3
// ================================================

void UNK_0xeb59() // UNK_0xeb59
{
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  UNK_0xea7f(); // UNK_0xea7f
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" ENTRY", 6); // (.")
  UNK_0xeb26(); // UNK_0xeb26
  UNK_0xe935(); // UNK_0xe935
}


// ================================================
// 0xeb74: WORD 'UNK_0xeb76' codep=0x224c parp=0xeb76 params=0 returns=0
// ================================================

void UNK_0xeb76() // UNK_0xeb76
{
  SET_STR_AS_PARAM("...DOCKING");
  DrawTTY(); // .TTY
  UNK_0xeb26(); // UNK_0xeb26
  Push(Read16(cc__i_OVBACK)); // 'OVBACK
  MODULE(); // MODULE
}


// ================================================
// 0xeb8d: WORD 'UNK_0xeb8f' codep=0x224c parp=0xeb8f params=0 returns=0
// ================================================

void UNK_0xeb8f() // UNK_0xeb8f
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
    UNK_0xeb08(); // UNK_0xeb08
    break;
  case 2:
    UNK_0xeb59(); // UNK_0xeb59
    break;
  case 4:
    UNK_0xeb8f(); // UNK_0xeb8f
    break;
  case 5:
    UNK_0xeb76(); // UNK_0xeb76
    break;
  case 6:
    UNK_0xeb36(); // UNK_0xeb36
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
  UNK_0xe566(); // UNK_0xe566
  NF_dash_M(); // NF-M case
}


// ================================================
// 0xebd4: WORD 'UNK_0xebd6' codep=0x224c parp=0xebd6 params=0 returns=0
// ================================================

void UNK_0xebd6() // UNK_0xebd6
{
  SET_STR_AS_PARAM("COMPUTING SUB-");
  DrawTTY(); // .TTY
  UNK_0xea73(); // UNK_0xea73
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL TRAJECTORY...", 16); // (.")
}


// ================================================
// 0xec02: WORD 'UNK_0xec04' codep=0x224c parp=0xec04 params=0 returns=0
// ================================================

void UNK_0xec04() // UNK_0xec04
{
  SET_STR_AS_PARAM("INITIATING ");
  DrawTTY(); // .TTY
  UNK_0xea73(); // UNK_0xea73
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL MANEUVER...", 14); // (.")
}


// ================================================
// 0xec2b: WORD 'UNK_0xec2d' codep=0x224c parp=0xec2d params=0 returns=0
// ================================================

void UNK_0xec2d() // UNK_0xec2d
{
  SET_STR_AS_PARAM("COMMENCING ");
  DrawTTY(); // .TTY
  UNK_0xea7f(); // UNK_0xea7f
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" PENETRATION...", 15); // (.")
}


// ================================================
// 0xec55: WORD 'UNK_0xec57' codep=0x224c parp=0xec57 params=0 returns=0
// ================================================

void UNK_0xec57() // UNK_0xec57
{
  SET_STR_AS_PARAM("INITIATING DOCKING PROCEDURE...");
  DrawTTY(); // .TTY
}


// ================================================
// 0xec7d: WORD 'UNK_0xec7f' codep=0x224c parp=0xec7f params=0 returns=8
// ================================================

void UNK_0xec7f() // UNK_0xec7f
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
    UNK_0xebd6(); // UNK_0xebd6
    break;
  case 2:
    UNK_0xec2d(); // UNK_0xec2d
    break;
  case 4:
    UNK_0xec7f(); // UNK_0xec7f
    break;
  case 5:
    UNK_0xec57(); // UNK_0xec57
    break;
  case 6:
    UNK_0xec04(); // UNK_0xec04
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
  UNK_0xe566(); // UNK_0xe566
  NS_dash_M(); // NS-M case
}


// ================================================
// 0xecf7: WORD 'UNK_0xecf9' codep=0x744d parp=0xecf9
// ================================================
IFieldType UNK_0xecf9 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xecfc: WORD 'UNK_0xecfe' codep=0x744d parp=0xecfe
// ================================================
IFieldType UNK_0xecfe = {SHIPIDX, 0x11, 0x02};

// ================================================
// 0xed01: WORD 'UNK_0xed03' codep=0x1d29 parp=0xed03
// ================================================
// orphan
// 0xed03: db 0x46 0x00 'F '

// ================================================
// 0xed05: WORD 'UNK_0xed07' codep=0x1d29 parp=0xed07
// ================================================
// 0xed07: db 0x3a 0x20 ': '

// ================================================
// 0xed09: WORD 'UNK_0xed0b' codep=0x224c parp=0xed0b params=0 returns=0
// ================================================

void UNK_0xed0b() // UNK_0xed0b
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+UNK_0xecfe.offset)&0xFF); // UNK_0xecfe<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x0080); //  0x0080 AND
  SWAP(); // SWAP
  Push((Pop() & 0x007f) >> 1); //  0x007f AND 2/
  Push(Pop() | Pop()); // OR
  Push(0x63ef+UNK_0xecfe.offset); // UNK_0xecfe<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() != 0)
  {
    Push(0xbe4b); // probable 'OVDBA'
  } else
  {
    Push(0xbe2b); // probable 'OV/DA'
  }
  MODULE(); // MODULE
}


// ================================================
// 0xed49: WORD 'UNK_0xed4b' codep=0x224c parp=0xed4b params=0 returns=0
// ================================================

void UNK_0xed4b() // UNK_0xed4b
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("CAPTAIN,");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("THE SHIP IS BEGINNING TO VIBRATE!");
  DrawTTY(); // .TTY
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xecf9.offset); // UNK_0xecf9<IFIELD>
  OFF(); // OFF
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xed07); // UNK_0xed07
  OFF(); // OFF
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xed92: WORD 'UNK_0xed94' codep=0x224c parp=0xed94 params=0 returns=0
// ================================================

void UNK_0xed94() // UNK_0xed94
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(1);
  Push(7);
  RRND(); // RRND
  Push(Pop() * 2 + (0x63ef+UNK_0xecfe.offset)); //  2* UNK_0xecfe<IFIELD> +
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
  Push(0xbe2b); // probable 'OV/DA'
  MODULE(); // MODULE
}


// ================================================
// 0xedd0: WORD 'UNK_0xedd2' codep=0x224c parp=0xedd2 params=0 returns=0
// ================================================

void UNK_0xedd2() // UNK_0xedd2
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("THE HULL ");
  DrawTTY(); // .TTY
}


// ================================================
// 0xede4: WORD 'UNK_0xede6' codep=0x224c parp=0xede6 params=0 returns=0
// ================================================

void UNK_0xede6() // UNK_0xede6
{
  UNK_0xedd2(); // UNK_0xedd2
  PRINT("TEMPERATURE IS INCREASING!", 26); // (.")
  UNK_0xed0b(); // UNK_0xed0b
}


// ================================================
// 0xee09: WORD 'UNK_0xee0b' codep=0x224c parp=0xee0b params=0 returns=0
// ================================================

void UNK_0xee0b() // UNK_0xee0b
{
  UNK_0xedd2(); // UNK_0xedd2
  PRINT("IS GLOWING RED!", 15); // (.")
  UNK_0xed0b(); // UNK_0xed0b
}


// ================================================
// 0xee23: WORD 'UNK_0xee25' codep=0x224c parp=0xee25 params=0 returns=0
// ================================================

void UNK_0xee25() // UNK_0xee25
{
  UNK_0xedd2(); // UNK_0xedd2
  PRINT("IS MELTING!", 11); // (.")
  UNK_0xed0b(); // UNK_0xed0b
}


// ================================================
// 0xee39: WORD 'UNK_0xee3b' codep=0x224c parp=0xee3b
// ================================================

void UNK_0xee3b() // UNK_0xee3b
{
  unsigned short int i, imax;
  UNK_0xedd2(); // UNK_0xedd2
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
  Push(0x4f0c); // probable 'BLACK'
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
    UNK_0xede6(); // UNK_0xede6
    break;
  case 140:
    UNK_0xee0b(); // UNK_0xee0b
    break;
  case 210:
    UNK_0xee25(); // UNK_0xee25
    break;
  case 280:
    UNK_0xee3b(); // UNK_0xee3b
    break;
  default:
    UNK_0xed94(); // UNK_0xed94
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
  Push(pp_UNK_0xed07); // UNK_0xed07
  _plus__ex__2(); // +!_2
  Push(Read16(pp_UNK_0xed07)); // UNK_0xed07 @
  HCASE(); // HCASE case
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xeed0: WORD 'UNK_0xeed2' codep=0x73ea parp=0xeed2
// ================================================
LoadDataType UNK_0xeed2 = {PLANETIDX, 0x07, 0x02, 0x16, 0x658f};

// ================================================
// 0xeed8: WORD 'P-LSEED' codep=0x73ea parp=0xeee4
// ================================================
LoadDataType P_dash_LSEED = {PLANETIDX, 0x04, 0x01, 0x16, 0x658f};

// ================================================
// 0xeeea: WORD 'UNK_0xeeec' codep=0x73ea parp=0xeeec
// ================================================
LoadDataType UNK_0xeeec = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};

// ================================================
// 0xeef2: WORD 'UNK_0xeef4' codep=0x744d parp=0xeef4
// ================================================
IFieldType UNK_0xeef4 = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xeef7: WORD 'UNK_0xeef9' codep=0x744d parp=0xeef9
// ================================================
IFieldType UNK_0xeef9 = {ASSIGN_CREWIDX, 0x14, 0x03};

// ================================================
// 0xeefc: WORD 'UNK_0xeefe' codep=0x224c parp=0xeefe
// ================================================

void UNK_0xeefe() // UNK_0xeefe
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
    UNK_0xeefe(); // UNK_0xeefe
    break;

  }
}

// ================================================
// 0xef29: WORD 'UNK_0xef2b' codep=0x224c parp=0xef2b
// ================================================

void UNK_0xef2b() // UNK_0xef2b
{
  LoadData(UNK_0xeeec); // from 'PLANET'
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
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xe8b6(); // UNK_0xe8b6
  if (Pop() != 0)
  {
    Push(pp_UNK_0xe931); // UNK_0xe931
    ON_3(); // ON_3
    UNK_0xef2b(); // UNK_0xef2b
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
      LoadData(UNK_0xeed2); // from 'PLANET'
      Push(Read16(Pop())); //  @
    }
    Push(Read16(regsp)); // DUP
    Push(pp_GLOBALSEED); // GLOBALSEED
    Store_3(); // !_3
    Push(0xc834); // probable 'SET-PLANET'
    MODULE(); // MODULE
    Push(0xc380); // probable 'INIT-ORBIT'
    MODULE(); // MODULE
    MROTATE(); // MROTATE
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Pop()==0x0017?1:0); //  0x0017 =
    if (Pop() != 0)
    {
      Push(1);
      Push(0xbdd8); // probable 'OV?ARTIFACT'
      MODULE(); // MODULE
      if (Pop() != 0)
      {
        SET_STR_AS_PARAM("THE CRYSTAL ORB IS GLOWING");
        DrawTTY(); // .TTY
        Push(0x3a48); // probable 'NOP'
      } else
      {
        UNK_0xed4b(); // UNK_0xed4b
        Push(Read16(pp__i_HEAT)); // 'HEAT @
        Push(pp_FORCEPTASK); // FORCEPTASK
        ON_3(); // ON_3
      }
    } else
    {
      Push(0xc3f3); // probable 'MROTATE'
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
// 0xefe1: WORD 'UNK_0xefe3' codep=0x224c parp=0xefe3 params=0 returns=0
// ================================================

void UNK_0xefe3() // UNK_0xefe3
{
  UNK_0xea7f(); // UNK_0xea7f
  UNK_0xea50(); // UNK_0xea50
}


// ================================================
// 0xefe9: WORD 'UNK_0xefeb' codep=0x224c parp=0xefeb params=0 returns=0
// ================================================

void UNK_0xefeb() // UNK_0xefeb
{
  SET_STR_AS_PARAM("INTER-STELLAR");
  UNK_0xea50(); // UNK_0xea50
}


// ================================================
// 0xefff: WORD 'UNK_0xf001' codep=0x224c parp=0xf001 params=0 returns=0
// ================================================

void UNK_0xf001() // UNK_0xf001
{
  Push(0xc4e5); // probable 'OVFLU'
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  UNK_0xea8c(); // UNK_0xea8c
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" CLEAR", 6); // (.")
}


// ================================================
// 0xf020: WORD 'UNK_0xf022' codep=0x224c parp=0xf022 params=0 returns=0
// ================================================

void UNK_0xf022() // UNK_0xf022
{
  SET_STR_AS_PARAM("...");
  DrawTTY(); // .TTY
  UNK_0xea9b(); // UNK_0xea9b
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" TERMINATED", 11); // (.")
  Push(0xbef3); // probable 'OV/STATUS'
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
// 0xf076: WORD 'UNK_0xf078' codep=0x224c parp=0xf078 params=0 returns=0
// ================================================

void UNK_0xf078() // UNK_0xf078
{
  SET_STR_AS_PARAM("OUTSIDE ");
  DrawTTY(); // .TTY
  UNK_0xea73(); // UNK_0xea73
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("AL RANGE", 8); // (.")
  Push(Read16(pp_UNK_0xe931)); // UNK_0xe931 @
  if (Pop() == 0) return;
  UNK_0xe935(); // UNK_0xe935
}


// ================================================
// 0xf0a0: WORD 'UF-M' codep=0x4a4f parp=0xf0a9
// ================================================

void UF_dash_M() // UF-M
{
  switch(Pop()) // UF-M
  {
  case 6:
    UNK_0xefe3(); // UNK_0xefe3
    break;
  case 2:
    UNK_0xefeb(); // UNK_0xefeb
    break;
  case 4:
    UNK_0xf022(); // UNK_0xf022
    break;
  case 5:
    UNK_0xf001(); // UNK_0xf001
    break;
  case 1:
    UNK_0xf078(); // UNK_0xf078
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
  UNK_0xe566(); // UNK_0xe566
  UF_dash_M(); // UF-M case
}


// ================================================
// 0xf0d3: WORD 'UNK_0xf0d5' codep=0x224c parp=0xf0d5 params=2 returns=0
// ================================================

void UNK_0xf0d5() // UNK_0xf0d5
{
  SET_STR_AS_PARAM("LEAVING ");
  DrawTTY(); // .TTY
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT("...", 3); // (.")
}


// ================================================
// 0xf0ec: WORD 'UNK_0xf0ee' codep=0x224c parp=0xf0ee params=0 returns=0
// ================================================

void UNK_0xf0ee() // UNK_0xf0ee
{
  UNK_0xea7f(); // UNK_0xea7f
  UNK_0xf0d5(); // UNK_0xf0d5
}


// ================================================
// 0xf0f4: WORD 'UNK_0xf0f6' codep=0x224c parp=0xf0f6 params=0 returns=0
// ================================================

void UNK_0xf0f6() // UNK_0xf0f6
{
  UNK_0xea8c(); // UNK_0xea8c
  UNK_0xf0d5(); // UNK_0xf0d5
}


// ================================================
// 0xf0fc: WORD 'UNK_0xf0fe' codep=0x224c parp=0xf0fe params=0 returns=0
// ================================================

void UNK_0xf0fe() // UNK_0xf0fe
{
  UNK_0xea9b(); // UNK_0xea9b
  UNK_0xf0d5(); // UNK_0xf0d5
}


// ================================================
// 0xf104: WORD 'UNK_0xf106' codep=0x224c parp=0xf106 params=0 returns=0
// ================================================

void UNK_0xf106() // UNK_0xf106
{
  UNK_0xea73(); // UNK_0xea73
  UNK_0xf0d5(); // UNK_0xf0d5
}


// ================================================
// 0xf10c: WORD 'US-M' codep=0x4a4f parp=0xf115
// ================================================

void US_dash_M() // US-M
{
  switch(Pop()) // US-M
  {
  case 6:
    UNK_0xf106(); // UNK_0xf106
    break;
  case 2:
    UNK_0xf0ee(); // UNK_0xf0ee
    break;
  case 4:
    UNK_0xf0fe(); // UNK_0xf0fe
    break;
  case 5:
    UNK_0xf0f6(); // UNK_0xf0f6
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
  UNK_0xe566(); // UNK_0xe566
  US_dash_M(); // US-M case
}


// ================================================
// 0xf13b: WORD 'UNK_0xf13d' codep=0x224c parp=0xf13d params=3 returns=0
// ================================================

void UNK_0xf13d() // UNK_0xf13d
{
  StoreCOLOR(); // !COLOR
  DrawTTY(); // .TTY
  BEEP(); // BEEP
  DrawSORD(); // .SORD
}


// ================================================
// 0xf147: WORD 'UNK_0xf149' codep=0x224c parp=0xf149 params=0 returns=0
// ================================================

void UNK_0xf149() // UNK_0xf149
{
  SET_STR_AS_PARAM("FUEL SUPPLY LOW");
  GetColor(YELLOW);
  UNK_0xf13d(); // UNK_0xf13d
}


// ================================================
// 0xf161: WORD 'UNK_0xf163' codep=0x224c parp=0xf163 params=0 returns=0
// ================================================

void UNK_0xf163() // UNK_0xf163
{
  SET_STR_AS_PARAM("FUEL SUPPLY CRITICAL");
  GetColor(ORANGE);
  UNK_0xf13d(); // UNK_0xf13d
}


// ================================================
// 0xf180: WORD 'UNK_0xf182' codep=0x224c parp=0xf182 params=0 returns=0
// ================================================

void UNK_0xf182() // UNK_0xf182
{
  SET_STR_AS_PARAM("OUT OF FUEL");
  GetColor(PINK);
  UNK_0xf13d(); // UNK_0xf13d
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
    UNK_0xf163(); // UNK_0xf163
    break;
  case 3:
    UNK_0xf149(); // UNK_0xf149
    break;
  default:
    UNK_0xf182(); // UNK_0xf182
    break;

  }
}

// ================================================
// 0xf1aa: WORD 'UNK_0xf1ac' codep=0x744d parp=0xf1ac
// ================================================
IFieldType UNK_0xf1ac = {VESSELIDX, 0x15, 0x04};

// ================================================
// 0xf1af: WORD 'UNK_0xf1b1' codep=0x1d29 parp=0xf1b1
// ================================================
// 0xf1b1: db 0x3a 0x20 ': '

// ================================================
// 0xf1b3: WORD 'DMSG' codep=0x224c parp=0xf1bc
// ================================================
// entry

void DMSG() // DMSG
{
  unsigned short int i, imax;
  Push(pp_UNK_0xf1b1); // UNK_0xf1b1
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
      Push(0x63ef+UNK_0xf1ac.offset); // UNK_0xf1ac<IFIELD>
      _2_at_(); // 2@
      Push(Pop() | Pop()); // OR
      ICLOSE(); // ICLOSE
      if (Pop() != 0)
      {
        Push(pp_UNK_0xf1b1); // UNK_0xf1b1
        ON_3(); // ON_3
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_UNK_0xf1b1)); // UNK_0xf1b1 @
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("READY TO PICK UP DEBRIS");
  DrawTTY(); // .TTY
}


// ================================================
// 0xf222: WORD 'UNK_0xf224' codep=0x224c parp=0xf224 params=1 returns=1
// ================================================

void UNK_0xf224() // UNK_0xf224
{
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xf22a: WORD 'UNK_0xf22c' codep=0x224c parp=0xf22c params=1 returns=1
// ================================================

void UNK_0xf22c() // UNK_0xf22c
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
// 0xf23e: WORD 'UNK_0xf240' codep=0x224c parp=0xf240 params=1 returns=1
// ================================================

void UNK_0xf240() // UNK_0xf240
{
  Pop(); // DROP
  Push(2);
}


// ================================================
// 0xf246: WORD 'UNK_0xf248' codep=0x224c parp=0xf248 params=1 returns=1
// ================================================

void UNK_0xf248() // UNK_0xf248
{
  Pop(); // DROP
  Push(4);
}


// ================================================
// 0xf24e: WORD 'UNK_0xf250' codep=0x224c parp=0xf250 params=1 returns=1
// ================================================

void UNK_0xf250() // UNK_0xf250
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
    UNK_0xf224(); // UNK_0xf224
    break;
  case 11:
    UNK_0xf22c(); // UNK_0xf22c
    break;
  case 23:
    UNK_0xf240(); // UNK_0xf240
    break;
  case 61:
    UNK_0xf248(); // UNK_0xf248
    break;
  case 18:
    UNK_0xf250(); // UNK_0xf250
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf279: WORD 'UNK_0xf27b' codep=0x1d29 parp=0xf27b
// ================================================
// 0xf27b: db 0x3a 0x20 ': '

// ================================================
// 0xf27d: WORD 'UNK_0xf27f' codep=0x1d29 parp=0xf27f
// ================================================
// 0xf27f: db 0x3a 0x20 ': '

// ================================================
// 0xf281: WORD 'UNK_0xf283' codep=0x1d29 parp=0xf283
// ================================================
// 0xf283: db 0x3a 0x20 ': '

// ================================================
// 0xf285: WORD 'UNK_0xf287' codep=0x1d29 parp=0xf287
// ================================================
// 0xf287: db 0x3a 0x20 ': '

// ================================================
// 0xf289: WORD 'UNK_0xf28b' codep=0x224c parp=0xf28b params=0 returns=2
// ================================================

void UNK_0xf28b() // UNK_0xf28b
{
  Push(Read16(pp_UNK_0xf27b)); // UNK_0xf27b @
  Push(0x0096);
  _gt_(); // >
  Push(Read16(pp_UNK_0xf283)); // UNK_0xf283 @
  Push(8);
  _slash_(); // /
  Push(Pop() * 8); //  8 *
  Push(Read16(pp_UNK_0xf287)); // UNK_0xf287 @
  Push(8);
  _slash_(); // /
  Push(Pop() * 8); //  8 *
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(Read16(pp_UNK_0xf27f)); // UNK_0xf27f @
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    SET_STR_AS_PARAM("MOTION DETECTED AT");
    DrawTTY(); // .TTY
    Push(pp_UNK_0xf27f); // UNK_0xf27f
    OFF(); // OFF
  }
  SET_STR_AS_PARAM(" X:");
  DrawTTY(); // .TTY
  Push(Read16(pp_UNK_0xf283)); // UNK_0xf283 @
  Push(0xfff8);
  _slash_(); // /
  Draw(); // .
  Push(7);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT(" Y:", 3); // (.")
  Push(Read16(pp_UNK_0xf287)); // UNK_0xf287 @
  Push(0xfff8);
  _slash_(); // /
  Draw(); // .
}


// ================================================
// 0xf30a: WORD 'UNK_0xf30c' codep=0x744d parp=0xf30c
// ================================================
IFieldType UNK_0xf30c = {ENCOUNTERIDX, 0x11, 0x01};

// ================================================
// 0xf30f: WORD 'UNK_0xf311' codep=0x744d parp=0xf311
// ================================================
IFieldType UNK_0xf311 = {ENCOUNTERIDX, 0x12, 0x01};

// ================================================
// 0xf314: WORD 'UNK_0xf316' codep=0x744d parp=0xf316
// ================================================
IFieldType UNK_0xf316 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xf319: WORD 'UNK_0xf31b' codep=0x224c parp=0xf31b params=3 returns=1
// ================================================

void UNK_0xf31b() // UNK_0xf31b
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
// 0xf331: WORD 'UNK_0xf333' codep=0x224c parp=0xf333 params=0 returns=2
// ================================================

void UNK_0xf333() // UNK_0xf333
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
    UNK_0xf31b(); // UNK_0xf31b
  }
  Push(pp_UNK_0xf287); // UNK_0xf287
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
    UNK_0xf31b(); // UNK_0xf31b
  }
  Push(pp_UNK_0xf283); // UNK_0xf283
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  Pop(); Pop(); // 2DROP
  UNK_0xf28b(); // UNK_0xf28b
}


// ================================================
// 0xf3a9: WORD 'UNK_0xf3ab' codep=0x224c parp=0xf3ab params=0 returns=1
// ================================================

void UNK_0xf3ab() // UNK_0xf3ab
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x003d?1:0); //  0x003d =
  if (Pop() != 0)
  {
    Push(0x63ef+UNK_0xf30c.offset); // UNK_0xf30c<IFIELD>
    _plus__dash__at_(); // +-@
    Push(0xffc1);
    Push(0x0040);
    WITHIN(); // WITHIN
    Push(0x63ef+UNK_0xf311.offset); // UNK_0xf311<IFIELD>
    _plus__dash__at_(); // +-@
    Push(0xffc0);
    Push(0x0040);
    WITHIN(); // WITHIN
    Push(Pop() & Pop()); // AND
    Push(((Pop() | (Read16(pp_CONTEXT_dash_ID_n_)==2?1:0)) | Read16(pp_Is12)) & (Read16(0x63ef+UNK_0xf316.offset)&0xFF)); //  CONTEXT-ID# @ 2 = OR ?12 @ OR UNK_0xf316<IFIELD> C@ AND
    return;
  }
  Push(0);
}


// ================================================
// 0xf3f3: WORD 'UNK_0xf3f5' codep=0x224c parp=0xf3f5 params=0 returns=0
// ================================================

void UNK_0xf3f5() // UNK_0xf3f5
{
  Push(0x63ef+UNK_0xf30c.offset); // UNK_0xf30c<IFIELD>
  _plus__dash__at_(); // +-@
  Push(Pop() + Read16(pp_UNK_0xf283)); //  UNK_0xf283 @ +
  Push(0x63ef+UNK_0xf30c.offset); // UNK_0xf30c<IFIELD>
  C_ex_(); // C!
  Push(0x63ef+UNK_0xf311.offset); // UNK_0xf311<IFIELD>
  _plus__dash__at_(); // +-@
  Push(Pop() + Read16(pp_UNK_0xf287)); //  UNK_0xf287 @ +
  Push(0x63ef+UNK_0xf311.offset); // UNK_0xf311<IFIELD>
  C_ex_(); // C!
  Push(Read16(pp_UNK_0xf283)); // UNK_0xf283 @
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(pp_UNK_0xf287)); // UNK_0xf287 @
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf423: WORD 'UNK_0xf425' codep=0x224c parp=0xf425
// ================================================

void UNK_0xf425() // UNK_0xf425
{
  GetIX(); // @IX
  Push(Pop() + Read16(pp_UNK_0xf283)); //  UNK_0xf283 @ +
  StoreIX(); // !IX
  GetIY(); // @IY
  Push(Pop() + Read16(pp_UNK_0xf287)); //  UNK_0xf287 @ +
  StoreIY(); // !IY
}


// ================================================
// 0xf43b: WORD 'UNK_0xf43d' codep=0x1d29 parp=0xf43d
// ================================================
// 0xf43d: db 0x3a 0x20 ': '

// ================================================
// 0xf43f: WORD 'TRAK-E' codep=0x224c parp=0xf44a
// ================================================
// entry

void TRAK_dash_E() // TRAK-E
{
  unsigned short int i, imax;
  Push(pp_UNK_0xf43d); // UNK_0xf43d
  OFF(); // OFF
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+UNK_0xeef9.offset); // UNK_0xeef9<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+UNK_0xeef4.offset)&0xFF); // UNK_0xeef4<IFIELD> C@
  Push(pp_UNK_0xf27b); // UNK_0xf27b
  Store_3(); // !_3
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xf27f); // UNK_0xf27f
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
      UNK_0xf3ab(); // UNK_0xf3ab
      if (Pop() != 0)
      {
        UNK_0xf333(); // UNK_0xf333
        UNK_0xf425(); // UNK_0xf425
        UNK_0xf3f5(); // UNK_0xf3f5
      }
      Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
      Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
      ICLOSE(); // ICLOSE
      Push(Read16(pp_XABS)); // XABS @
      Push(Read16(pp_YABS)); // YABS @
      D_eq_(); // D=
      if (Pop() != 0)
      {
        Push(pp_UNK_0xf43d); // UNK_0xf43d
        ON_3(); // ON_3
      }
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_STAR_dash_HR)); // STAR-HR @
  Push(pp_TRAK_dash_HR); // TRAK-HR
  Store_3(); // !_3
  Push(Read16(pp_UNK_0xf43d)); // UNK_0xf43d @
  if (Pop() == 0) return;
  Push(Read16(pp__i_FLY)); // 'FLY @
  MODULE(); // MODULE
}


// ================================================
// 0xf4dc: WORD 'UNK_0xf4de' codep=0x224c parp=0xf4de params=0 returns=1
// ================================================

void UNK_0xf4de() // UNK_0xf4de
{
  Push(Read16(pp__i_TRAK)); // 'TRAK @
}


// ================================================
// 0xf4e4: WORD 'UNK_0xf4e6' codep=0x224c parp=0xf4e6 params=0 returns=1
// ================================================

void UNK_0xf4e6() // UNK_0xf4e6
{
  Push(0xafa3); // probable 'CEX+WAX'
}


// ================================================
// 0xf4ec: WORD 'UNK_0xf4ee' codep=0x2214 parp=0xf4ee
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
    UNK_0xf4de(); // UNK_0xf4de
    break;
  case 3:
    UNK_0xf4de(); // UNK_0xf4de
    break;
  case 4:
    UNK_0xf4e6(); // UNK_0xf4e6
    break;
  default:
    Push(Read16(cc_UNK_0xf4ee)); // UNK_0xf4ee
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
  Push(0xbdd8); // probable 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(pp_Is12); // ?12
  Store_3(); // !_3
}

// 0xf530: db 0x48 0x4d 0x49 0x53 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x49 0x58 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'HMISC-VOC_______________________IX ------------- '

