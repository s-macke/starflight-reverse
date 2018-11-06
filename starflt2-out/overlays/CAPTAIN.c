// ====== OVERLAY 'CAPTAIN' ======
// store offset = 0xe420
// overlay size   = 0x1140

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE436  codep:0x1d29 parp:0xe436 size:0x0002 C-string:'WE436'
//           WE43A  codep:0x1d29 parp:0xe43a size:0x0002 C-string:'WE43A'
//           WE43E  codep:0x1d29 parp:0xe43e size:0x0004 C-string:'WE43E'
//           WE444  codep:0x1d29 parp:0xe444 size:0x0002 C-string:'WE444'
//           WE448  codep:0x1d29 parp:0xe448 size:0x0002 C-string:'WE448'
//           WE44C  codep:0x224c parp:0xe44c size:0x0006 C-string:'WE44C'
//           WE454  codep:0x224c parp:0xe454 size:0x0008 C-string:'WE454'
//           WE45E  codep:0x7394 parp:0xe45e size:0x0006 C-string:'WE45E'
//           WE466  codep:0x224c parp:0xe466 size:0x000a C-string:'WE466'
//           WE472  codep:0x224c parp:0xe472 size:0x0008 C-string:'WE472'
//           WE47C  codep:0x224c parp:0xe47c size:0x0029 C-string:'WE47C'
//           WE4A7  codep:0x7394 parp:0xe4a7 size:0x0006 C-string:'WE4A7'
//           WE4AF  codep:0x7394 parp:0xe4af size:0x0006 C-string:'WE4AF'
//           WE4B7  codep:0x7394 parp:0xe4b7 size:0x0006 C-string:'WE4B7'
//           WE4BF  codep:0x7420 parp:0xe4bf size:0x0003 C-string:'WE4BF'
//           WE4C4  codep:0x7394 parp:0xe4c4 size:0x0006 C-string:'WE4C4'
//           WE4CC  codep:0x7394 parp:0xe4cc size:0x0006 C-string:'WE4CC'
//           WE4D4  codep:0x7394 parp:0xe4d4 size:0x0006 C-string:'WE4D4'
//           WE4DC  codep:0x7394 parp:0xe4dc size:0x0006 C-string:'WE4DC'
//           WE4E4  codep:0x7394 parp:0xe4e4 size:0x0006 C-string:'WE4E4'
//           WE4EC  codep:0x7420 parp:0xe4ec size:0x0003 C-string:'WE4EC'
//           WE4F1  codep:0x7394 parp:0xe4f1 size:0x0006 C-string:'WE4F1'
//           WE4F9  codep:0x7394 parp:0xe4f9 size:0x0006 C-string:'WE4F9'
//           WE501  codep:0x7420 parp:0xe501 size:0x0003 C-string:'WE501'
//           WE506  codep:0x7420 parp:0xe506 size:0x0003 C-string:'WE506'
//           WE50B  codep:0x7420 parp:0xe50b size:0x0003 C-string:'WE50B'
//           WE510  codep:0x7420 parp:0xe510 size:0x0003 C-string:'WE510'
//           WE515  codep:0x7420 parp:0xe515 size:0x0003 C-string:'WE515'
//           WE51A  codep:0x7420 parp:0xe51a size:0x0003 C-string:'WE51A'
//           WE51F  codep:0x7420 parp:0xe51f size:0x0003 C-string:'WE51F'
//           WE524  codep:0x7420 parp:0xe524 size:0x0003 C-string:'WE524'
//           WE529  codep:0x7420 parp:0xe529 size:0x0003 C-string:'WE529'
//           WE52E  codep:0x7420 parp:0xe52e size:0x0003 C-string:'WE52E'
//           WE533  codep:0x7420 parp:0xe533 size:0x0003 C-string:'WE533'
//           WE538  codep:0x7420 parp:0xe538 size:0x0003 C-string:'WE538'
//           WE53D  codep:0x7420 parp:0xe53d size:0x0003 C-string:'WE53D'
//           WE542  codep:0x1d29 parp:0xe542 size:0x0002 C-string:'WE542'
//           WE546  codep:0x224c parp:0xe546 size:0x000a C-string:'WE546'
//           WE552  codep:0x224c parp:0xe552 size:0x0010 C-string:'WE552'
//           WE564  codep:0x224c parp:0xe564 size:0x0008 C-string:'WE564'
//           WE56E  codep:0x224c parp:0xe56e size:0x000c C-string:'WE56E'
//            .BAL  codep:0x224c parp:0xe583 size:0x0046 C-string:'DrawBAL'
//           WE5CB  codep:0x224c parp:0xe5cb size:0x0006 C-string:'WE5CB'
//           WE5D3  codep:0x224c parp:0xe5d3 size:0x0010 C-string:'WE5D3'
//           WE5E5  codep:0x224c parp:0xe5e5 size:0x0010 C-string:'WE5E5'
//           WE5F7  codep:0x224c parp:0xe5f7 size:0x000e C-string:'WE5F7'
//           WE607  codep:0x224c parp:0xe607 size:0x000e C-string:'WE607'
//           WE617  codep:0x224c parp:0xe617 size:0x0032 C-string:'WE617'
//           WE64B  codep:0x224c parp:0xe64b size:0x000a C-string:'WE64B'
//           WE657  codep:0x224c parp:0xe657 size:0x002a C-string:'WE657'
//           WE683  codep:0x224c parp:0xe683 size:0x0036 C-string:'WE683'
//           WE6BB  codep:0x224c parp:0xe6bb size:0x0010 C-string:'WE6BB'
//           WE6CD  codep:0x224c parp:0xe6cd size:0x0016 C-string:'WE6CD'
//       TD-SCROLL  codep:0x4b3b parp:0xe6f1 size:0x000c C-string:'TD_dash_SCROLL'
//           WE6FF  codep:0x224c parp:0xe6ff size:0x002e C-string:'WE6FF'
//           WE72F  codep:0x224c parp:0xe72f size:0x0027 C-string:'WE72F'
//           WE758  codep:0x224c parp:0xe758 size:0x0042 C-string:'WE758'
//           WE79C  codep:0x224c parp:0xe79c size:0x0056 C-string:'WE79C'
//           WE7F4  codep:0x224c parp:0xe7f4 size:0x003c C-string:'WE7F4'
//           WE832  codep:0x224c parp:0xe832 size:0x0014 C-string:'WE832'
//           WE848  codep:0x224c parp:0xe848 size:0x0028 C-string:'WE848'
//           WE872  codep:0x224c parp:0xe872 size:0x0030 C-string:'WE872'
//           WE8A4  codep:0x224c parp:0xe8a4 size:0x002a C-string:'WE8A4'
//           WE8D0  codep:0x224c parp:0xe8d0 size:0x008e C-string:'WE8D0'
//           WE960  codep:0x224c parp:0xe960 size:0x002a C-string:'WE960'
//           WE98C  codep:0x224c parp:0xe98c size:0x00c4 C-string:'WE98C'
//           WEA52  codep:0x224c parp:0xea52 size:0x001c C-string:'WEA52'
//           WEA70  codep:0x224c parp:0xea70 size:0x0029 C-string:'WEA70'
//           WEA9B  codep:0x224c parp:0xea9b size:0x0046 C-string:'WEA9B'
//           WEAE3  codep:0x224c parp:0xeae3 size:0x0048 C-string:'WEAE3'
//           WEB2D  codep:0x224c parp:0xeb2d size:0x0026 C-string:'WEB2D'
//           WEB55  codep:0x224c parp:0xeb55 size:0x004c C-string:'WEB55'
//           WEBA3  codep:0x224c parp:0xeba3 size:0x006c C-string:'WEBA3'
//           WEC11  codep:0x224c parp:0xec11 size:0x0028 C-string:'WEC11'
//           WEC3B  codep:0x224c parp:0xec3b size:0x0044 C-string:'WEC3B'
//           WEC81  codep:0x224c parp:0xec81 size:0x0026 C-string:'WEC81'
//           WECA9  codep:0x224c parp:0xeca9 size:0x0022 C-string:'WECA9'
//           WECCD  codep:0x224c parp:0xeccd size:0x0022 C-string:'WECCD'
//           WECF1  codep:0x224c parp:0xecf1 size:0x002e C-string:'WECF1'
//           WED21  codep:0x224c parp:0xed21 size:0x003e C-string:'WED21'
//           WED61  codep:0x224c parp:0xed61 size:0x0014 C-string:'WED61'
//           WED77  codep:0x224c parp:0xed77 size:0x001c C-string:'WED77'
//       1STOPTION  codep:0x4b3b parp:0xeda1 size:0x0018 C-string:'_1STOPTION'
//           WEDBB  codep:0x1d29 parp:0xedbb size:0x0002 C-string:'WEDBB'
//           WEDBF  codep:0x1d29 parp:0xedbf size:0x0002 C-string:'WEDBF'
//       DO-OPTION  codep:0x224c parp:0xedcf size:0x0016 C-string:'DO_dash_OPTION'
//           WEDE7  codep:0x224c parp:0xede7 size:0x0010 C-string:'WEDE7'
//           WEDF9  codep:0x224c parp:0xedf9 size:0x001b C-string:'WEDF9'
//           WEE16  codep:0x224c parp:0xee16 size:0x0024 C-string:'WEE16'
//    ITEM-OPTIONS  codep:0x4b3b parp:0xee4b size:0x0014 C-string:'ITEM_dash_OPTIONS'
//           WEE61  codep:0x224c parp:0xee61 size:0x0051 C-string:'WEE61'
//           WEEB4  codep:0x224c parp:0xeeb4 size:0x00a4 C-string:'WEEB4'
//           WEF5A  codep:0x224c parp:0xef5a size:0x0024 C-string:'WEF5A'
//        (/ITEMS)  codep:0x224c parp:0xef8b size:0x0094 C-string:'_ro__slash_ITEMS_rc_'
//        >DESCEND  codep:0x224c parp:0xf02c size:0x0031 C-string:'_gt_DESCEND'
//           WF05F  codep:0x224c parp:0xf05f size:0x00ac C-string:'WF05F'
//           WF10D  codep:0x224c parp:0xf10d size:0x001b C-string:'WF10D'
//           WF12A  codep:0x224c parp:0xf12a size:0x003d C-string:'WF12A'
//  (/LAUNCH/LAND)  codep:0x224c parp:0xf17a size:0x0044 C-string:'_ro__slash_LAUNCH_slash_LAND_rc_'
//           WF1C0  codep:0x1d29 parp:0xf1c0 size:0x0002 C-string:'WF1C0'
//           WF1C4  codep:0x224c parp:0xf1c4 size:0x0006 C-string:'WF1C4'
//           WF1CC  codep:0x224c parp:0xf1cc size:0x0010 C-string:'WF1CC'
//           WF1DE  codep:0x224c parp:0xf1de size:0x0010 C-string:'WF1DE'
//           WF1F0  codep:0x224c parp:0xf1f0 size:0x0020 C-string:'WF1F0'
//           WF212  codep:0x224c parp:0xf212 size:0x001a C-string:'WF212'
//           WF22E  codep:0x224c parp:0xf22e size:0x001c C-string:'WF22E'
//           WF24C  codep:0x224c parp:0xf24c size:0x0018 C-string:'WF24C'
//           WF266  codep:0x224c parp:0xf266 size:0x000a C-string:'WF266'
//           WF272  codep:0x224c parp:0xf272 size:0x0016 C-string:'WF272'
//           WF28A  codep:0x224c parp:0xf28a size:0x0039 C-string:'WF28A'
//           WF2C5  codep:0x224c parp:0xf2c5 size:0x003c C-string:'WF2C5'
//           WF303  codep:0x224c parp:0xf303 size:0x004e C-string:'WF303'
//           WF353  codep:0x224c parp:0xf353 size:0x0030 C-string:'WF353'
//           WF385  codep:0x224c parp:0xf385 size:0x0034 C-string:'WF385'
//           WF3BB  codep:0x224c parp:0xf3bb size:0x001f C-string:'WF3BB'
//           WF3DC  codep:0x224c parp:0xf3dc size:0x0065 C-string:'WF3DC'
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
const unsigned short int pp_WE436 = 0xe436; // WE436 size: 2
// {0x00, 0x00}

const unsigned short int pp_WE43A = 0xe43a; // WE43A size: 2
// {0x00, 0x00}

const unsigned short int pp_WE43E = 0xe43e; // WE43E size: 4
// {0x56, 0x3a, 0x20, 0x58}

const unsigned short int pp_WE444 = 0xe444; // WE444 size: 2
// {0x00, 0x00}

const unsigned short int pp_WE448 = 0xe448; // WE448 size: 2
// {0x00, 0x00}

const unsigned short int pp_WE542 = 0xe542; // WE542 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEDBB = 0xedbb; // WEDBB size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEDBF = 0xedbf; // WEDBF size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF1C0 = 0xf1c0; // WF1C0 size: 2
// {0x3a, 0x20}




// 0xe432: db 0x12 0x01 '  '

// ================================================
// 0xe434: WORD 'WE436' codep=0x1d29 parp=0xe436
// ================================================
// 0xe436: db 0x00 0x00 '  '

// ================================================
// 0xe438: WORD 'WE43A' codep=0x1d29 parp=0xe43a
// ================================================
// 0xe43a: db 0x00 0x00 '  '

// ================================================
// 0xe43c: WORD 'WE43E' codep=0x1d29 parp=0xe43e
// ================================================
// 0xe43e: db 0x56 0x3a 0x20 0x58 'V: X'

// ================================================
// 0xe442: WORD 'WE444' codep=0x1d29 parp=0xe444
// ================================================
// 0xe444: db 0x00 0x00 '  '

// ================================================
// 0xe446: WORD 'WE448' codep=0x1d29 parp=0xe448
// ================================================
// 0xe448: db 0x00 0x00 '  '

// ================================================
// 0xe44a: WORD 'WE44C' codep=0x224c parp=0xe44c params=0 returns=0
// ================================================

void WE44C() // WE44C
{
  Push(pp_WE448); // WE448
  ON_2(); // ON_2
}


// ================================================
// 0xe452: WORD 'WE454' codep=0x224c parp=0xe454 params=0 returns=0
// ================================================
// orphan

void WE454() // WE454
{
  Push(0xb76b); // 'OV?ART'
  MODULE(); // MODULE
}


// ================================================
// 0xe45c: WORD 'WE45E' codep=0x7394 parp=0xe45e
// ================================================
LoadDataType WE45E = {PLANETIDX, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe464: WORD 'WE466' codep=0x224c parp=0xe466
// ================================================

void WE466() // WE466
{
  LoadData(WE45E); // from 'PLANET'
  Push(!((Read16(Pop())&0xFF)==0?1:0)); //  C@ 0= NOT
}


// ================================================
// 0xe470: WORD 'WE472' codep=0x224c parp=0xe472 params=0 returns=0
// ================================================

void WE472() // WE472
{
  Push(1);
  Push(pp_WBOTTOM); // WBOTTOM
  Store_2(); // !_2
}


// ================================================
// 0xe47a: WORD 'WE47C' codep=0x224c parp=0xe47c params=0 returns=0
// ================================================

void WE47C() // WE47C
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
// 0xe4a5: WORD 'WE4A7' codep=0x7394 parp=0xe4a7
// ================================================
// orphan
LoadDataType WE4A7 = {ARTIFACTIDX, 0x18, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe4ad: WORD 'WE4AF' codep=0x7394 parp=0xe4af
// ================================================
// orphan
LoadDataType WE4AF = {ARTIFACTIDX, 0x1d, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xe4b5: WORD 'WE4B7' codep=0x7394 parp=0xe4b7
// ================================================
// orphan
LoadDataType WE4B7 = {ANALYZE_TEXTIDX, 0x00, 0xbe, 0x00, 0x6e57};

// ================================================
// 0xe4bd: WORD 'WE4BF' codep=0x7420 parp=0xe4bf
// ================================================
IFieldType WE4BF = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xe4c2: WORD 'WE4C4' codep=0x7394 parp=0xe4c4
// ================================================
// orphan
LoadDataType WE4C4 = {PLANETIDX, 0x07, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe4ca: WORD 'WE4CC' codep=0x7394 parp=0xe4cc
// ================================================
LoadDataType WE4CC = {PLANETIDX, 0x02, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe4d2: WORD 'WE4D4' codep=0x7394 parp=0xe4d4
// ================================================
LoadDataType WE4D4 = {PLANETIDX, 0x11, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe4da: WORD 'WE4DC' codep=0x7394 parp=0xe4dc
// ================================================
LoadDataType WE4DC = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe4e2: WORD 'WE4E4' codep=0x7394 parp=0xe4e4
// ================================================
LoadDataType WE4E4 = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe4ea: WORD 'WE4EC' codep=0x7420 parp=0xe4ec
// ================================================
IFieldType WE4EC = {VESSELIDX, 0x12, 0x07};

// ================================================
// 0xe4ef: WORD 'WE4F1' codep=0x7394 parp=0xe4f1
// ================================================
LoadDataType WE4F1 = {PLANETIDX, 0x0f, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe4f7: WORD 'WE4F9' codep=0x7394 parp=0xe4f9
// ================================================
LoadDataType WE4F9 = {PLANETIDX, 0x10, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe4ff: WORD 'WE501' codep=0x7420 parp=0xe501
// ================================================
IFieldType WE501 = {EVALUATIONIDX, 0x0a, 0x01};

// ================================================
// 0xe504: WORD 'WE506' codep=0x7420 parp=0xe506
// ================================================
IFieldType WE506 = {EVALUATIONIDX, 0x0b, 0x02};

// ================================================
// 0xe509: WORD 'WE50B' codep=0x7420 parp=0xe50b
// ================================================
IFieldType WE50B = {EVALUATIONIDX, 0x11, 0x02};

// ================================================
// 0xe50e: WORD 'WE510' codep=0x7420 parp=0xe510
// ================================================
IFieldType WE510 = {EVALUATIONIDX, 0x13, 0x01};

// ================================================
// 0xe513: WORD 'WE515' codep=0x7420 parp=0xe515
// ================================================
IFieldType WE515 = {EVALUATIONIDX, 0x14, 0x01};

// ================================================
// 0xe518: WORD 'WE51A' codep=0x7420 parp=0xe51a
// ================================================
IFieldType WE51A = {EVALUATIONIDX, 0x15, 0x0f};

// ================================================
// 0xe51d: WORD 'WE51F' codep=0x7420 parp=0xe51f
// ================================================
// orphan
IFieldType WE51F = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xe522: WORD 'WE524' codep=0x7420 parp=0xe524
// ================================================
// orphan
IFieldType WE524 = {DIRECTORYIDX, 0x13, 0x02};

// ================================================
// 0xe527: WORD 'WE529' codep=0x7420 parp=0xe529
// ================================================
IFieldType WE529 = {STARSYSTEMIDX, 0x12, 0x01};

// ================================================
// 0xe52c: WORD 'WE52E' codep=0x7420 parp=0xe52e
// ================================================
// orphan
IFieldType WE52E = {DIRECTORYIDX, 0x15, 0x01};

// ================================================
// 0xe531: WORD 'WE533' codep=0x7420 parp=0xe533
// ================================================
// orphan
IFieldType WE533 = {DIRECTORYIDX, 0x16, 0x01};

// ================================================
// 0xe536: WORD 'WE538' codep=0x7420 parp=0xe538
// ================================================
// orphan
IFieldType WE538 = {DIRECTORYIDX, 0x17, 0x01};

// ================================================
// 0xe53b: WORD 'WE53D' codep=0x7420 parp=0xe53d
// ================================================
IFieldType WE53D = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xe540: WORD 'WE542' codep=0x1d29 parp=0xe542
// ================================================
// 0xe542: db 0x3a 0x20 ': '

// ================================================
// 0xe544: WORD 'WE546' codep=0x224c parp=0xe546 params=2 returns=0
// ================================================
// orphan

void WE546() // WE546
{
  CTPOS_dot_(); // CTPOS.
  Push(-1);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe550: WORD 'WE552' codep=0x224c parp=0xe552 params=0 returns=0
// ================================================

void WE552() // WE552
{
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  Push(1);
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
}


// ================================================
// 0xe562: WORD 'WE564' codep=0x224c parp=0xe564 params=3 returns=0
// ================================================

void WE564() // WE564
{
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xe56c: WORD 'WE56E' codep=0x224c parp=0xe56e
// ================================================

void WE56E() // WE56E
{
  Push(0xc285); // 'OVD@BAL'
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
  WE56E(); // WE56E
  PRINT(" SP", 3); // (.")
  Push(0x2710); Push(0x0000);
  Push(0xbe96); // 'CPAUS'
  MODULE(); // MODULE
  CTERASE(); // CTERASE
}


// ================================================
// 0xe5c9: WORD 'WE5CB' codep=0x224c parp=0xe5cb params=0 returns=2
// ================================================

void WE5CB() // WE5CB
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xe5d1: WORD 'WE5D3' codep=0x224c parp=0xe5d3 params=0 returns=0
// ================================================

void WE5D3() // WE5D3
{
  WE5CB(); // WE5CB
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5e3: WORD 'WE5E5' codep=0x224c parp=0xe5e5 params=0 returns=0
// ================================================

void WE5E5() // WE5E5
{
  WE5CB(); // WE5CB
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5f5: WORD 'WE5F7' codep=0x224c parp=0xe5f7 params=0 returns=0
// ================================================

void WE5F7() // WE5F7
{
  WE5CB(); // WE5CB
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe605: WORD 'WE607' codep=0x224c parp=0xe607 params=2 returns=0
// ================================================

void WE607() // WE607
{
  _gt_C_plus_S(); // >C+S
  Push2Words("*EOL");
  _gt_C_plus_S(); // >C+S
  BOX_gt_LIS(); // BOX>LIS
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe615: WORD 'WE617' codep=0x224c parp=0xe617
// ================================================

void WE617() // WE617
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
// 0xe649: WORD 'WE64B' codep=0x224c parp=0xe64b
// ================================================

void WE64B() // WE64B
{
  Push(Read16(pp_WTOP) + 1); // WTOP @ 1+
  WE617(); // WE617
}


// ================================================
// 0xe655: WORD 'WE657' codep=0x224c parp=0xe657
// ================================================

void WE657() // WE657
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
// 0xe681: WORD 'WE683' codep=0x224c parp=0xe683
// ================================================

void WE683() // WE683
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
  WE657(); // WE657
  IPREV(); // IPREV
  WE64B(); // WE64B
}


// ================================================
// 0xe6b9: WORD 'WE6BB' codep=0x224c parp=0xe6bb
// ================================================

void WE6BB() // WE6BB
{
  INEXT(); // INEXT
  WE5D3(); // WE5D3
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  WE64B(); // WE64B
  WLINE_dash_U(); // WLINE-U
  WE64B(); // WE64B
}


// ================================================
// 0xe6cb: WORD 'WE6CD' codep=0x224c parp=0xe6cd
// ================================================

void WE6CD() // WE6CD
{
  IPREV(); // IPREV
  WE5E5(); // WE5E5
  WE5CB(); // WE5CB
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  PAD(); // PAD
  WE64B(); // WE64B
  WLINE_dash_D(); // WLINE-D
  WE64B(); // WE64B
}


// ================================================
// 0xe6e3: WORD 'TD-SCROLL' codep=0x4b3b parp=0xe6f1
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 1:
    WE6BB(); // WE6BB
    break;
  case 65535:
    WE6CD(); // WE6CD
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe6fd: WORD 'WE6FF' codep=0x224c parp=0xe6ff
// ================================================

void WE6FF() // WE6FF
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
// 0xe72d: WORD 'WE72F' codep=0x224c parp=0xe72f
// ================================================

void WE72F() // WE72F
{
  SET_STR_AS_PARAM("ELEMENTS");
  Push(pp_WE43E); // WE43E
  _1_dot_5_at_(); // 1.5@
  Push2Words("*STARSH");
  WE6FF(); // WE6FF
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _st_INSERT(); // <INSERT
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_WE43A); // WE43A
  ON_2(); // ON_2
}


// ================================================
// 0xe756: WORD 'WE758' codep=0x224c parp=0xe758
// ================================================

void WE758() // WE758
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(pp_WE43E); // WE43E
  _1_dot_5_ex__2(); // 1.5!_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  while(1)
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
  }
}


// ================================================
// 0xe79a: WORD 'WE79C' codep=0x224c parp=0xe79c params=0 returns=1
// ================================================

void WE79C() // WE79C
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
// 0xe7f2: WORD 'WE7F4' codep=0x224c parp=0xe7f4 params=2 returns=0
// ================================================

void WE7F4() // WE7F4
{
  SUBROOT(); // SUBROOT
  _gt_C_plus_S(); // >C+S
  WE79C(); // WE79C
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(!Read16(pp_WE43A)); // WE43A @ NOT
    if (Pop() != 0)
    {
      WE72F(); // WE72F
    }
    Push(pp__ro_SCROLL_1); // (SCROLL_1
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    WE758(); // WE758
    CI(); // CI
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    ITEM_gt_PA(); // ITEM>PA
    PAD(); // PAD
    COUNT(); // COUNT
    CI(); // CI
    Push(pp_WE43E); // WE43E
    _1_dot_5_at_(); // 1.5@
    WE6FF(); // WE6FF
    _2SWAP(); // 2SWAP
    _gt_INSERT(); // >INSERT
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe830: WORD 'WE832' codep=0x224c parp=0xe832
// ================================================

void WE832() // WE832
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
// 0xe846: WORD 'WE848' codep=0x224c parp=0xe848
// ================================================

void WE848() // WE848
{
  GetID(); // @ID
  Push(Pop()==0x002b?1:0); //  0x002b =
  if (Pop() != 0)
  {
    GetIL(); // @IL
    GetIH(); // @IH
    _gt_C_plus_S(); // >C+S
    Push((0x65e1+WE4EC.offset) + 3); // WE4EC<IFIELD> 3 +
    _2_at_(); // 2@
    D0_eq_(); // D0=
    Push(!Pop()); //  NOT
    ICLOSE(); // ICLOSE
    return;
  }
  Push(0);
}


// ================================================
// 0xe870: WORD 'WE872' codep=0x224c parp=0xe872 params=0 returns=0
// ================================================

void WE872() // WE872
{
  unsigned short int i, imax;
  Push(pp_WE436); // WE436
  _099(); // 099
  Push(Read16(pp_CONTEXT_3)==4?1:0); // CONTEXT_3 @ 4 =
  if (Pop() != 0)
  {
    WE832(); // WE832
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      POINT_gt_I(); // POINT>I
      WE848(); // WE848
      Push(pp_WE436); // WE436
      _plus__ex__2(); // +!_2
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(!(Read16(pp_WE436)==0?1:0)); // WE436 @ 0= NOT
  Push(pp_WE436); // WE436
  Store_2(); // !_2
}


// ================================================
// 0xe8a2: WORD 'WE8A4' codep=0x224c parp=0xe8a4
// ================================================

void WE8A4() // WE8A4
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
// 0xe8ce: WORD 'WE8D0' codep=0x224c parp=0xe8d0
// ================================================

void WE8D0() // WE8D0
{
  unsigned short int i, imax, j, jmax;
  WE832(); // WE832
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
      Push(pp_WE542); // WE542
      Store_2(); // !_2
      Push(Pop()==6?1:0); //  6 =
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      if (Pop() != 0)
      {
        Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
        Push((0x65e1+WE4EC.offset) + 3); // WE4EC<IFIELD> 3 +
        C_ex__2(); // C!_2
      } else
      {
        Push(3);
        Push(0);

        j = Pop();
        jmax = Pop();
        do // (DO)
        {
          Push((Read16((0x65e1+WE4EC.offset) + j)&0xFF)==0?1:0); // WE4EC<IFIELD> I + C@ 0=
          if (Pop() != 0)
          {
            Push(Read16(pp_WE542)); // WE542 @
            Push((0x65e1+WE4EC.offset) + j); // WE4EC<IFIELD> I +
            C_ex__2(); // C!_2
            Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
            Push(((0x65e1+WE4EC.offset) + 4) + j); // WE4EC<IFIELD> 4 + I +
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
// 0xe95e: WORD 'WE960' codep=0x224c parp=0xe960
// ================================================

void WE960() // WE960
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
      WE8D0(); // WE8D0
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
// 0xe98a: WORD 'WE98C' codep=0x224c parp=0xe98c
// ================================================

void WE98C() // WE98C
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
  WE832(); // WE832
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    WE848(); // WE848
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
        Push(Read16(((0x65e1+WE4EC.offset) + 3) + j)&0xFF); // WE4EC<IFIELD> 3 + I + C@
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
            Push(Read16((0x65e1+WE4EC.offset) + (j - 1))&0xFF); // WE4EC<IFIELD> I 1- + C@
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

      Push(0x65e1+WE4EC.offset); // WE4EC<IFIELD>
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
  Push(Pop() & Read16(pp_WE436)); //  WE436 @ AND
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
  WE8A4(); // WE8A4
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea50: WORD 'WEA52' codep=0x224c parp=0xea52
// ================================================

void WEA52() // WEA52
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
// 0xea6e: WORD 'WEA70' codep=0x224c parp=0xea70
// ================================================

void WEA70() // WEA70
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT("SCROLL ITEMS: ^\\  QUIT: []", 26); // (.")
}


// ================================================
// 0xea99: WORD 'WEA9B' codep=0x224c parp=0xea9b
// ================================================

void WEA9B() // WEA9B
{
  _gt_1FONT(); // >1FONT
  _gt_SSCT(); // >SSCT
  CTERASE(); // CTERASE
  WEA70(); // WEA70
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
// 0xeae1: WORD 'WEAE3' codep=0x224c parp=0xeae3
// ================================================

void WEAE3() // WEAE3
{
  WE5F7(); // WE5F7
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(0x000a);
  _slash_MOD(); // /MOD
  ICLOSE(); // ICLOSE
  WE5CB(); // WE5CB
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
// 0xeb2b: WORD 'WEB2D' codep=0x224c parp=0xeb2d params=0 returns=0
// ================================================

void WEB2D() // WEB2D
{
  WE5F7(); // WE5F7
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_(); // >C+
  WE5CB(); // WE5CB
  _gt_C_plus_S(); // >C+S
  IDELETE(); // IDELETE
  Push(-1);
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb53: WORD 'WEB55' codep=0x224c parp=0xeb55
// ================================================
// orphan

void WEB55() // WEB55
{
  Push(0xbf80); // 'CTUP'
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
// 0xeba1: WORD 'WEBA3' codep=0x224c parp=0xeba3
// ================================================

void WEBA3() // WEBA3
{
  Push(0xcd01); // 'KEY-EL'
  MODULE(); // MODULE
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  Push(Read16(regsp)); // DUP
  Push(-Pop()); //  NEGATE
  Push(Read16(regsp)); // DUP
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _plus__ex__2(); // +!_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+WE53D.offset); // WE53D<IFIELD>
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
    WEAE3(); // WEAE3
    WEB2D(); // WEB2D
    WE7F4(); // WE7F4
    WEAE3(); // WEAE3
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
  DrawSORD(); // .SORD
}


// ================================================
// 0xec0f: WORD 'WEC11' codep=0x224c parp=0xec11 params=0 returns=4
// ================================================

void WEC11() // WEC11
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
  Push(0x4e20); Push(0x0000);
  Push(0xbe96); // 'CPAUS'
  MODULE(); // MODULE
}


// ================================================
// 0xec39: WORD 'WEC3B' codep=0x224c parp=0xec3b
// ================================================

void WEC3B() // WEC3B
{
  Push(Read16(pp_WTOP) - 6); // WTOP @ 6 -
  WE617(); // WE617
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
  WEC11(); // WEC11
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      WEC11(); // WEC11
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
// 0xec7f: WORD 'WEC81' codep=0x224c parp=0xec81 params=2 returns=2
// ================================================
// orphan

void WEC81() // WEC81
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
// 0xeca7: WORD 'WECA9' codep=0x224c parp=0xeca9 params=1 returns=0
// ================================================
// orphan

void WECA9() // WECA9
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
// 0xeccb: WORD 'WECCD' codep=0x224c parp=0xeccd params=1 returns=0
// ================================================
// orphan

void WECCD() // WECCD
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
// 0xecef: WORD 'WECF1' codep=0x224c parp=0xecf1
// ================================================
// orphan

void WECF1() // WECF1
{
  WEC81(); // WEC81
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(0);
  DrawR(); // .R
  WECCD(); // WECCD
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
  WECA9(); // WECA9
}


// ================================================
// 0xed1f: WORD 'WED21' codep=0x224c parp=0xed21
// ================================================

void WED21() // WED21
{
  Push(Read16(pp_WE448)); // WE448 @
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
  WE607(); // WE607
  WE683(); // WE683
}


// ================================================
// 0xed5f: WORD 'WED61' codep=0x224c parp=0xed61 params=2 returns=0
// ================================================

void WED61() // WED61
{
  WE44C(); // WE44C
  Push(0xccf0); // 'TOSS'
  MODULE(); // MODULE
  Pop(); Pop(); // 2DROP
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
  DrawSORD(); // .SORD
}


// ================================================
// 0xed75: WORD 'WED77' codep=0x224c parp=0xed77 params=2 returns=0
// ================================================

void WED77() // WED77
{
  WE44C(); // WE44C
  Push(0x65e1+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  Push(0xffff); Push(0xffff);
  D_eq_(); // D=
  if (Pop() != 0)
  {
    WEBA3(); // WEBA3
    return;
  }
  WED61(); // WED61
}


// ================================================
// 0xed93: WORD '1STOPTION' codep=0x4b3b parp=0xeda1
// ================================================

void _1STOPTION() // 1STOPTION
{
  switch(Pop()) // 1STOPTION
  {
  case 28:
    WED61(); // WED61
    break;
  case 27:
    WEC3B(); // WEC3B
    break;
  case 26:
    WED77(); // WED77
    break;
  case 68:
    WED61(); // WED61
    break;
  case 9:
    WED61(); // WED61
    break;
  default:
    WED61(); // WED61
    break;

  }
}

// ================================================
// 0xedb9: WORD 'WEDBB' codep=0x1d29 parp=0xedbb
// ================================================
// 0xedbb: db 0x3a 0x20 ': '

// ================================================
// 0xedbd: WORD 'WEDBF' codep=0x1d29 parp=0xedbf
// ================================================
// 0xedbf: db 0x3a 0x20 ': '

// ================================================
// 0xedc1: WORD 'DO-OPTION' codep=0x224c parp=0xedcf
// ================================================

void DO_dash_OPTION() // DO-OPTION
{
  Push(Read16(pp_WEDBB)); // WEDBB @
  if (Pop() != 0)
  {
    WED61(); // WED61
  } else
  {
    GetINST_dash_C(); // @INST-C
    _1STOPTION(); // 1STOPTION case
  }
  Push(1);
}


// ================================================
// 0xede5: WORD 'WEDE7' codep=0x224c parp=0xede7 params=0 returns=1
// ================================================

void WEDE7() // WEDE7
{
  PRINT(" JETTISON", 9); // (.")
  Push(0);
}


// ================================================
// 0xedf7: WORD 'WEDF9' codep=0x224c parp=0xedf9 params=0 returns=1
// ================================================

void WEDF9() // WEDF9
{
  PRINT(" PLAYBACK", 9); // (.")
  GCR(); // GCR
  PRINT(" ERASE", 6); // (.")
  Push(1);
}


// ================================================
// 0xee14: WORD 'WEE16' codep=0x224c parp=0xee16 params=0 returns=1
// ================================================

void WEE16() // WEE16
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
  WEDE7(); // WEDE7
}


// ================================================
// 0xee3a: WORD 'ITEM-OPTIONS' codep=0x4b3b parp=0xee4b
// ================================================

void ITEM_dash_OPTIONS() // ITEM-OPTIONS
{
  switch(Pop()) // ITEM-OPTIONS
  {
  case 28:
    WEDE7(); // WEDE7
    break;
  case 27:
    WEDF9(); // WEDF9
    break;
  case 68:
    WEDE7(); // WEDE7
    break;
  case 26:
    WEE16(); // WEE16
    break;
  default:
    WEDE7(); // WEDE7
    break;

  }
}

// ================================================
// 0xee5f: WORD 'WEE61' codep=0x224c parp=0xee61
// ================================================

void WEE61() // WEE61
{
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WTOP) - 7); // WTOP @ 7 -
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  GetINST_dash_C(); // @INST-C
  ITEM_dash_OPTIONS(); // ITEM-OPTIONS case
  Push(pp_WEDBF); // WEDBF
  Store_2(); // !_2
  Push(pp_WEDBB); // WEDBB
  _099(); // 099
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(4);
  Push(6);
  CTPOS_dot_(); // CTPOS.
  PRINT("^\\ SELECT OPTION OR [ QUIT ]", 28); // (.")
  Push(Read16(pp_WTOP) - 6); // WTOP @ 6 -
  WE617(); // WE617
}


// ================================================
// 0xeeb2: WORD 'WEEB4' codep=0x224c parp=0xeeb4 params=0 returns=0
// ================================================

void WEEB4() // WEEB4
{
  WE5F7(); // WE5F7
  GetINST_dash_C(); // @INST-C
  ICLOSE(); // ICLOSE
  Push(!(Pop()==0x000b?1:0)); //  0x000b = NOT
  if (Pop() != 0)
  {
    WE5F7(); // WE5F7
    GetColor(BLACK);
    WE64B(); // WE64B
    WEA52(); // WEA52
    WEE61(); // WEE61
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() != 0)
      {
        Push(-Pop() + Read16(pp_WEDBB)); //  NEGATE WEDBB @ +
        Push(Read16(regsp)); // DUP
        Push(0);
        Push(Read16(pp_WEDBF) + 1); // WEDBF @ 1+
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          Push((Read16(pp_WTOP) - (Read16(pp_WEDBB) + 1) * 7) + 1); // WTOP @ WEDBB @ 1+ 7 * - 1+
          WE617(); // WE617
          Push(Read16(regsp)); // DUP
          Push(pp_WEDBB); // WEDBB
          Store_2(); // !_2
          Push(Read16(pp_WTOP)); // WTOP @
          SWAP(); // SWAP
          Push((Pop() + 1) * 7); //  1+ 7 *
          _dash_(); // -
          Push(Pop() + 1); //  1+
          WE617(); // WE617
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
      WEA9B(); // WEA9B
      WED21(); // WED21
    }
    return;
  }
  BEEP(); // BEEP
}


// ================================================
// 0xef58: WORD 'WEF5A' codep=0x224c parp=0xef5a
// ================================================

void WEF5A() // WEF5A
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
  WE872(); // WE872
  Push(Read16(pp_WE436)); // WE436 @
  Push(Read16(regsp)); // DUP
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Push(pp_WE43A); // WE43A
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
    WE472(); // WE472
    WEA9B(); // WEA9B
    MAKE_dash_SC(); // MAKE-SC
    Push(pp_ESC_dash_EN); // ESC-EN
    _099(); // 099
    if (Pop() != 0)
    {
      WE98C(); // WE98C
    }
    Push2Words("*STARSH");
    GET_dash_BOX(); // GET-BOX
    Push2Words("*STARSH");
    WE607(); // WE607
    WE683(); // WE683
    do
    {
      XYSCAN(); // XYSCAN
      Pop(); // DROP
      TD_dash_SCROLL(); // TD-SCROLL case
      IsTRIG(); // ?TRIG
      if (Pop() != 0)
      {
        WEEB4(); // WEEB4
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
    WE64B(); // WE64B
  } else
  {
    Pop(); // DROP
    WEF5A(); // WEF5A
  }
  _gt_SSCT(); // >SSCT
  CTERASE(); // CTERASE
  WE960(); // WE960
}


// ================================================
// 0xf01f: WORD '>DESCEND' codep=0x224c parp=0xf02c
// ================================================
// entry

void _gt_DESCEND() // >DESCEND
{
  WE552(); // WE552
  SET_STR_AS_PARAM("LAUNCH");
  LoadData(_1BTN); // from 'BUTTONS'
  WE564(); // WE564
  Push(pp_CONTEXT_3); // CONTEXT_3
  _099(); // 099
  Push(0x3a48); // 'NOP'
  Push(pp__i_EXTERN); // 'EXTERN
  Store_2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16(0x65e1+WE4BF.offset)&0xFF) & 0x00ef); // WE4BF<IFIELD> C@ 0x00ef AND
  Push(0x65e1+WE4BF.offset); // WE4BF<IFIELD>
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf05d: WORD 'WF05F' codep=0x224c parp=0xf05f
// ================================================

void WF05F() // WF05F
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
        WE47C(); // WE47C
        Push(0xbd8b); // 'SEEGR'
        MODULE(); // MODULE
        Push(0xd272); // 'OVCOU'
        MODULE(); // MODULE
        Push(0xbd67); // 'ASCEN'
        MODULE(); // MODULE
        Push(0xbd9b); // 'MROTA'
        Push(pp__i_EXTERN); // 'EXTERN
        Store_2(); // !_2
      }
    } else
    {
      Push(0xd272); // 'OVCOU'
      MODULE(); // MODULE
      Push(1);
    }
    if (Pop() != 0)
    {
      WE552(); // WE552
      SET_STR_AS_PARAM("LAND  ");
      LoadData(_1BTN); // from 'BUTTONS'
      WE564(); // WE564
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
// 0xf10b: WORD 'WF10D' codep=0x224c parp=0xf10d
// ================================================

void WF10D() // WF10D
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WE'RE NOT IN ORBIT", 18); // (.")
}


// ================================================
// 0xf128: WORD 'WF12A' codep=0x224c parp=0xf12a params=0 returns=0
// ================================================

void WF12A() // WF12A
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
  WF10D(); // WF10D
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
    Push(0xb77c); // 'OV?.EQ'
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
      WF05F(); // WF05F
      Push(0);
    } else
    {
      WF12A(); // WF12A
    }
    return;
  }
  Push(0);
}


// ================================================
// 0xf1be: WORD 'WF1C0' codep=0x1d29 parp=0xf1c0
// ================================================
// 0xf1c0: db 0x3a 0x20 ': '

// ================================================
// 0xf1c2: WORD 'WF1C4' codep=0x224c parp=0xf1c4 params=1 returns=0
// ================================================

void WF1C4() // WF1C4
{
  Push(pp_WF1C0); // WF1C0
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf1ca: WORD 'WF1CC' codep=0x224c parp=0xf1cc
// ================================================

void WF1CC() // WF1CC
{
  LoadData(WE4F9); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  _st_(); // <
  Push(Read16(regsp)); // DUP
  Push(!Pop()); //  NOT
  WF1C4(); // WF1C4
}


// ================================================
// 0xf1dc: WORD 'WF1DE' codep=0x224c parp=0xf1de
// ================================================

void WF1DE() // WF1DE
{
  LoadData(WE4F1); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(3);
  _gt_(); // >
  Push(Read16(regsp)); // DUP
  Push(!Pop()); //  NOT
  WF1C4(); // WF1C4
}


// ================================================
// 0xf1ee: WORD 'WF1F0' codep=0x224c parp=0xf1f0
// ================================================

void WF1F0() // WF1F0
{
  LoadData(WE4CC); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x0045);
  _gt_(); // >
  OVER(); // OVER
  Push(0x0083);
  _st_(); // <
  Push(Pop() + Pop()); // +
  WF1C4(); // WF1C4
  Push(0x00c8);
  _gt_(); // >
}


// ================================================
// 0xf210: WORD 'WF212' codep=0x224c parp=0xf212
// ================================================

void WF212() // WF212
{
  LoadData(WE4D4); // from 'PLANET'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(4);
  _st_(); // <
  OVER(); // OVER
  Push(3);
  _st_(); // <
  Push(Pop() + Pop()); // +
  WF1C4(); // WF1C4
  Push(2);
  _gt_(); // >
}


// ================================================
// 0xf22c: WORD 'WF22E' codep=0x224c parp=0xf22e params=0 returns=1
// ================================================

void WF22E() // WF22E
{
  Push(Read16(pp_ATMO)); // ATMO @
  Push(0x000f);
  Push(0x0011);
  WITHIN(); // WITHIN
  Push(!(Pop() | (Read16(pp_HYDRO)==2?1:0))); //  HYDRO @ 2 = OR NOT
}


// ================================================
// 0xf24a: WORD 'WF24C' codep=0x224c parp=0xf24c params=0 returns=1
// ================================================

void WF24C() // WF24C
{
  Push(!((Read16(pp_HYDRO)==5?1:0) | (Read16(pp_ATMO)==0x0015?1:0))); // HYDRO @ 5 = ATMO @ 0x0015 = OR NOT
}


// ================================================
// 0xf264: WORD 'WF266' codep=0x224c parp=0xf266
// ================================================

void WF266() // WF266
{
  LoadData(WE4DC); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  _0_gt_(); // 0>
  WF1C4(); // WF1C4
}


// ================================================
// 0xf270: WORD 'WF272' codep=0x224c parp=0xf272
// ================================================

void WF272() // WF272
{
  LoadData(WE4E4); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(0x0032);
  _slash_(); // /
  MAX(); // MAX
  WF1C4(); // WF1C4
}


// ================================================
// 0xf288: WORD 'WF28A' codep=0x224c parp=0xf28a
// ================================================

void WF28A() // WF28A
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("NAME THIS PLANET: ", 18); // (.")
  CTCR(); // CTCR
  Push(0x65e1+WE51A.offset); // WE51A<IFIELD>
  Push(0x000f);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(0x000f);
  Push(0xb6fd); // 'OV#IN$'
  MODULE(); // MODULE
  COUNT(); // COUNT
  Push(0x65e1+WE51A.offset); // WE51A<IFIELD>
  SWAP(); // SWAP
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xf2c3: WORD 'WF2C5' codep=0x224c parp=0xf2c5
// ================================================

void WF2C5() // WF2C5
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
  Push(0x65e1+WE510.offset); // WE510<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xf301: WORD 'WF303' codep=0x224c parp=0xf303
// ================================================

void WF303() // WF303
{
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  WF1DE(); // WF1DE
  WF1CC(); // WF1CC
  Push(Pop() * 2); //  2*
  Push(Pop() | Pop()); // OR
  WF1F0(); // WF1F0
  Push(Pop() * 4); //  4 *
  Push(Pop() | Pop()); // OR
  WE466(); // WE466
  Push(Pop() * 0x0040); //  0x0040 *
  Push(Pop() | Pop()); // OR
  WF212(); // WF212
  Push(Pop() * 8); //  8 *
  Push(Pop() | Pop()); // OR
  WF22E(); // WF22E
  Push(Pop() >> 4); //  16*
  Push(Pop() | Pop()); // OR
  WF24C(); // WF24C
  Push(Pop() * 0x0020); //  0x0020 *
  Push(Pop() | Pop()); // OR
  Push(Pop() | Read16(pp_PAST) * 0x0080); //  PAST @ 0x0080 * OR
  WF266(); // WF266
  WF272(); // WF272
  ICLOSE(); // ICLOSE
  Push(0x65e1+WE515.offset); // WE515<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xf351: WORD 'WF353' codep=0x224c parp=0xf353 params=0 returns=0
// ================================================

void WF353() // WF353
{
  Push(Read16(0x65e1+WE515.offset)&0xFF); // WE515<IFIELD> C@
  if (Pop() != 0)
  {
    Push(Read16(pp_WE444)); // WE444 @
    Push(8);
    MIN(); // MIN
    Push(Pop() * 0x000a); //  0x000a *
    Push(1);
    Push(pp_WE444); // WE444
    _plus__ex__2(); // +!_2
    SAVE_dash_OV(); // SAVE-OV
  } else
  {
    Push(Read16(pp_WF1C0) * 5); // WF1C0 @ 5 *
  }
  Push(0x65e1+WE501.offset); // WE501<IFIELD>
  C_ex__2(); // C!_2
}


// ================================================
// 0xf383: WORD 'WF385' codep=0x224c parp=0xf385
// ================================================

void WF385() // WF385
{
  Push(pp_WF1C0); // WF1C0
  _099(); // 099
  WF2C5(); // WF2C5
  Push(Read16(pp_STARDAT)); // STARDAT @
  Push(0x65e1+WE506.offset); // WE506<IFIELD>
  Store_2(); // !_2
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(1);
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _plus__ex__2(); // +!_2
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(0x65e1+WE50B.offset); // WE50B<IFIELD>
  Store_2(); // !_2
  WF303(); // WF303
  WF353(); // WF353
  WF28A(); // WF28A
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(pp_IsEVAL); // ?EVAL
  ON_2(); // ON_2
}


// ================================================
// 0xf3b9: WORD 'WF3BB' codep=0x224c parp=0xf3bb
// ================================================

void WF3BB() // WF3BB
{
  WF385(); // WF385
  CTCR(); // CTCR
  PRINT("RECOMMENDATION LOGGED.", 22); // (.")
}


// ================================================
// 0xf3da: WORD 'WF3DC' codep=0x224c parp=0xf3dc params=0 returns=1
// ================================================

void WF3DC() // WF3DC
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  BIT(); // BIT
  Push(Read16(regsp)); // DUP
  ICLOSE(); // ICLOSE
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  Push(Pop() & (Read16(0x65e1+WE529.offset)&0xFF)); //  WE529<IFIELD> C@ AND
  Push(Read16(regsp)); // DUP
  ROT(); // ROT
  Push(Pop() | Read16(0x65e1+WE529.offset)&0xFF); //  WE529<IFIELD> C@ OR
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    Pop(); // DROP
  } else
  {
    Push(0x65e1+WE529.offset); // WE529<IFIELD>
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
  if (Pop() != 0)
  {
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
          WF3DC(); // WF3DC
          if (Pop() != 0)
          {
            Push(0xc2cd); // 'I-TRANS'
            MODULE(); // MODULE
            Push(Read16(pp_STARDAT)); // STARDAT @
            Push(pp_PORTDAT); // PORTDAT
            Store_2(); // !_2
            WF3BB(); // WF3BB
          }
        }
      } else
      {
        WF10D(); // WF10D
      }
    }
    return;
  }
  WF10D(); // WF10D
}

// 0xf530: db 0x43 0x41 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x43 0x41 0x50 0x54 0x41 0x49 0x4e 0x20 0x2d 0x2d 0x2d 0x00 'CAP-VOC_________________________ for CAPTAIN --- '

