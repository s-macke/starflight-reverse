// ====== OVERLAY 'PORTMENU-OV' ======
// store offset = 0xe930
// overlay size   = 0x0c30

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE946  codep:0x744d parp:0xe946 size:0x0003 C-string:'WE946'
//           WE94B  codep:0x744d parp:0xe94b size:0x0003 C-string:'WE94B'
//           WE950  codep:0x744d parp:0xe950 size:0x0003 C-string:'WE950'
//           WE955  codep:0x224c parp:0xe955 size:0x0064 C-string:'WE955'
//           WE9BB  codep:0x224c parp:0xe9bb size:0x000c C-string:'WE9BB'
//           WE9C9  codep:0x224c parp:0xe9c9 size:0x003c C-string:'WE9C9'
//           WEA07  codep:0x1d29 parp:0xea07 size:0x0002 C-string:'WEA07'
//           WEA0B  codep:0x224c parp:0xea0b size:0x005e C-string:'WEA0B'
//           WEA6B  codep:0x1d29 parp:0xea6b size:0x0002 C-string:'WEA6B'
//           WEA6F  codep:0x1d29 parp:0xea6f size:0x0002 C-string:'WEA6F'
//           WEA73  codep:0x1d29 parp:0xea73 size:0x0002 C-string:'WEA73'
//           WEA77  codep:0x1d29 parp:0xea77 size:0x0002 C-string:'WEA77'
//           WEA7B  codep:0x1d29 parp:0xea7b size:0x0002 C-string:'WEA7B'
//           WEA7F  codep:0x224c parp:0xea7f size:0x0010 C-string:'WEA7F'
//           WEA91  codep:0x224c parp:0xea91 size:0x000e C-string:'WEA91'
//           WEAA1  codep:0x224c parp:0xeaa1 size:0x000e C-string:'WEAA1'
//           WEAB1  codep:0x224c parp:0xeab1 size:0x000e C-string:'WEAB1'
//           WEAC1  codep:0x224c parp:0xeac1 size:0x000e C-string:'WEAC1'
//           WEAD1  codep:0x224c parp:0xead1 size:0x000e C-string:'WEAD1'
//           WEAE1  codep:0x224c parp:0xeae1 size:0x0008 C-string:'WEAE1'
//           WEAEB  codep:0x744d parp:0xeaeb size:0x0003 C-string:'WEAEB'
//           WEAF0  codep:0x224c parp:0xeaf0 size:0x00b0 C-string:'WEAF0'
//           WEBA2  codep:0x224c parp:0xeba2 size:0x0058 C-string:'WEBA2'
//           WEBFC  codep:0x1d29 parp:0xebfc size:0x0002 C-string:'WEBFC'
//       (|REGION)  codep:0xec0c parp:0xec0c size:0x0068 C-string:'_ro__v_REGION_rc_'
//            |EGA  codep:0xec7d parp:0xec7d size:0x0038 C-string:'_v_EGA'
//         |REGION  codep:0x224c parp:0xecc1 size:0x002a C-string:'_v_REGION'
//           WECED  codep:0x1d29 parp:0xeced size:0x0002 C-string:'WECED'
//           WECF1  codep:0x1d29 parp:0xecf1 size:0x001d C-string:'WECF1'
//           WED10  codep:0x224c parp:0xed10 size:0x0028 C-string:'WED10'
//           WED3A  codep:0x1d29 parp:0xed3a size:0x0004 C-string:'WED3A'
//           WED40  codep:0x224c parp:0xed40 size:0x000c C-string:'WED40'
//           WED4E  codep:0x224c parp:0xed4e size:0x0012 C-string:'WED4E'
//           WED62  codep:0x224c parp:0xed62 size:0x000e C-string:'WED62'
//           WED72  codep:0x224c parp:0xed72 size:0x0014 C-string:'WED72'
//           WED88  codep:0x224c parp:0xed88 size:0x0017 C-string:'WED88'
//           WEDA1  codep:0x224c parp:0xeda1 size:0x0010 C-string:'WEDA1'
//           WEDB3  codep:0x224c parp:0xedb3 size:0x0009 C-string:'WEDB3'
//           WEDBE  codep:0x224c parp:0xedbe size:0x000f C-string:'WEDBE'
//           WEDCF  codep:0x224c parp:0xedcf size:0x0010 C-string:'WEDCF'
//           WEDE1  codep:0x224c parp:0xede1 size:0x001a C-string:'WEDE1'
//         (.DOOR)  codep:0x4a4f parp:0xee07 size:0x0020 C-string:'_ro__dot_DOOR_rc_'
//           WEE29  codep:0x224c parp:0xee29 size:0x000e C-string:'WEE29'
//           WEE39  codep:0x224c parp:0xee39 size:0x0034 C-string:'WEE39'
//           WEE6F  codep:0x224c parp:0xee6f size:0x0044 C-string:'WEE6F'
//           WEEB5  codep:0x1d29 parp:0xeeb5 size:0x0078 C-string:'WEEB5'
//           WEF2F  codep:0x224c parp:0xef2f size:0x0012 C-string:'WEF2F'
//           WEF43  codep:0x224c parp:0xef43 size:0x0020 C-string:'WEF43'
//           WEF65  codep:0x224c parp:0xef65 size:0x000e C-string:'WEF65'
//           WEF75  codep:0x224c parp:0xef75 size:0x0026 C-string:'WEF75'
//           WEF9D  codep:0x224c parp:0xef9d size:0x0036 C-string:'WEF9D'
//           WEFD5  codep:0x224c parp:0xefd5 size:0x0024 C-string:'WEFD5'
//           WEFFB  codep:0x224c parp:0xeffb size:0x0034 C-string:'WEFFB'
//           WF031  codep:0x224c parp:0xf031 size:0x0018 C-string:'WF031'
//           WF04B  codep:0x224c parp:0xf04b size:0x0016 C-string:'WF04B'
//           WF063  codep:0x224c parp:0xf063 size:0x0020 C-string:'WF063'
//           WF085  codep:0x224c parp:0xf085 size:0x000a C-string:'WF085'
//           WF091  codep:0x224c parp:0xf091 size:0x000c C-string:'WF091'
//           WF09F  codep:0x1d29 parp:0xf09f size:0x0002 C-string:'WF09F'
//           WF0A3  codep:0x1d29 parp:0xf0a3 size:0x0002 C-string:'WF0A3'
//           WF0A7  codep:0x1d29 parp:0xf0a7 size:0x000c C-string:'WF0A7'
//           WF0B5  codep:0x1d29 parp:0xf0b5 size:0x009a C-string:'WF0B5'
//           WF151  codep:0x1d29 parp:0xf151 size:0x0038 C-string:'WF151'
//           WF18B  codep:0x224c parp:0xf18b size:0x001c C-string:'WF18B'
//           WF1A9  codep:0x224c parp:0xf1a9 size:0x003e C-string:'WF1A9'
//           WF1E9  codep:0x224c parp:0xf1e9 size:0x0040 C-string:'WF1E9'
//           WF22B  codep:0x224c parp:0xf22b size:0x000c C-string:'WF22B'
//           WF239  codep:0x224c parp:0xf239 size:0x0058 C-string:'WF239'
//           WF293  codep:0x224c parp:0xf293 size:0x000c C-string:'WF293'
//           WF2A1  codep:0x224c parp:0xf2a1 size:0x0010 C-string:'WF2A1'
//           WF2B3  codep:0x224c parp:0xf2b3 size:0x0056 C-string:'WF2B3'
//           WF30B  codep:0x224c parp:0xf30b size:0x003e C-string:'WF30B'
//           WF34B  codep:0x224c parp:0xf34b size:0x0014 C-string:'WF34B'
//           WF361  codep:0x224c parp:0xf361 size:0x0016 C-string:'WF361'
//           WF379  codep:0x224c parp:0xf379 size:0x0016 C-string:'WF379'
//           WF391  codep:0x224c parp:0xf391 size:0x0016 C-string:'WF391'
//           WF3A9  codep:0x224c parp:0xf3a9 size:0x005a C-string:'WF3A9'
//        PORT-PIC  codep:0x224c parp:0xf410 size:0x004a C-string:'PORT_dash_PIC'
//         DO-ROOM  codep:0x4a4f parp:0xf466 size:0x0020 C-string:'DO_dash_ROOM'
//           WF488  codep:0x224c parp:0xf488 size:0x0024 C-string:'WF488'
//           XWALK  codep:0x4a4f parp:0xf4b6 size:0x000c C-string:'XWALK'
//           YWALK  codep:0x4a4f parp:0xf4cc size:0x000c C-string:'YWALK'
//         WALKIES  codep:0x224c parp:0xf4e4 size:0x0000 C-string:'WALKIES'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp_BUF_dash_SEG; // BUF-SEG
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_LSYSEG; // LSYSEG
extern const unsigned short int pp_MSYSEG; // MSYSEG
extern const unsigned short int pp_SSYSEG; // SSYSEG
extern const unsigned short int pp_IsRECALL; // ?RECALL
extern const unsigned short int pp_Is_gt_OP; // ?>OP
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp__i__dot_VITAL; // '.VITAL
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp__i__dot_VEHICLE_dash_STATUS; // '.VEHICLE-STATUS
extern const unsigned short int pp__i_VEHICLE_dash_CYCLE; // 'VEHICLE-CYCLE
extern const unsigned short int pp__i_CREW_dash_C; // 'CREW-C
extern const unsigned short int pp__i_REPAIR; // 'REPAIR
extern const unsigned short int pp__i_TREATM; // 'TREATM
extern const unsigned short int pp_E_dash_USE; // E-USE
extern const unsigned short int pp__10_star_CARGO; // 10*CARGO
extern const unsigned short int pp_STIME; // STIME
extern const unsigned short int pp_IsFANLYZ; // ?FANLYZ
extern LoadDataType ELEM_dash_VAL; // ELEM-VAL
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void PAD(); // PAD
void BEEP(); // BEEP
void MS(); // MS
void NOP(); // NOP
void D_gt_(); // D>
void WITHIN(); // WITHIN
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void FILE_st_(); // FILE<
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void StoreCOLOR(); // !COLOR
void _gt_DISPLAY(); // >DISPLAY
void _gt_HIDDEN(); // >HIDDEN
void SCR_dash_RES(); // SCR-RES
void DARK(); // DARK
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void _gt_SND(); // >SND
void BEEPON(); // BEEPON
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void CTINIT(); // CTINIT
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _2_at_(); // 2@
void ADDR_gt_SEG(); // ADDR>SEG
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void GetDS(); // @DS
void _plus__dash__at_(); // +-@
void DISPLAY_dash_WAIT(); // DISPLAY-WAIT
void LPLOT(); // LPLOT
void _co_BLT_cc_(); // {BLT}
void _ro__v_REGION_rc_(); // (|REGION)
void _v_EGA(); // |EGA


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEA07 = 0xea07; // WEA07 size: 2
// {0x00, 0x00}

const unsigned short int pp_WEA6B = 0xea6b; // WEA6B size: 2
// {0x10, 0x00}

const unsigned short int pp_WEA6F = 0xea6f; // WEA6F size: 2
// {0x63, 0x00}

const unsigned short int pp_WEA73 = 0xea73; // WEA73 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEA77 = 0xea77; // WEA77 size: 2
// {0x00, 0x00}

const unsigned short int pp_WEA7B = 0xea7b; // WEA7B size: 2
// {0x00, 0x00}

const unsigned short int pp_WEBFC = 0xebfc; // WEBFC size: 2
// {0x3a, 0x20}

const unsigned short int pp_WECED = 0xeced; // WECED size: 2
// {0x06, 0x00}

const unsigned short int pp_WECF1 = 0xecf1; // WECF1 size: 29
// {0x07, 0x7a, 0x7e, 0x44, 0x54, 0x5f, 0x69, 0x82, 0x92, 0x2e, 0x32, 0x42, 0x57, 0x38, 0x43, 0x15, 0x24, 0x38, 0x40, 0x76, 0x87, 0x5f, 0x69, 0x0d, 0x15, 0x57, 0x63, 0x48, 0x50}

const unsigned short int pp_WED3A = 0xed3a; // WED3A size: 4
// {0x56, 0x3a, 0x20, 0x20}

const unsigned short int pp_WEEB5 = 0xeeb5; // WEEB5 size: 120
// {0x11, 0x7d, 0x7d, 0x3f, 0x60, 0x7d, 0x00, 0x02, 0x7d, 0x77, 0x60, 0x71, 0x9e, 0x00, 0x03, 0x77, 0x6a, 0x71, 0x87, 0xb9, 0x00, 0x03, 0x6a, 0x59, 0x87, 0x93, 0x29, 0x01, 0x03, 0x59, 0x4c, 0x93, 0x8e, 0xdb, 0xfe, 0x01, 0x4c, 0x3d, 0x8e, 0x7e, 0xc7, 0xff, 0x01, 0x3d, 0x33, 0x7e, 0x6d, 0xf3, 0xff, 0x01, 0x33, 0x2e, 0x6d, 0x54, 0x1e, 0x00, 0x01, 0x2e, 0x2e, 0x54, 0x46, 0x2e, 0x00, 0x00, 0x2e, 0x36, 0x46, 0x24, 0x3e, 0x00, 0x00, 0x36, 0x3c, 0x24, 0x1a, 0x4b, 0x00, 0x00, 0x3c, 0x4a, 0x1a, 0x0c, 0x56, 0x00, 0x00, 0x4a, 0x56, 0x0c, 0x06, 0x62, 0x00, 0x00, 0x56, 0x62, 0x06, 0x0c, 0x4a, 0x00, 0x02, 0x62, 0x6f, 0x0c, 0x19, 0x56, 0x00, 0x02, 0x6f, 0x77, 0x19, 0x2a, 0x64, 0x00, 0x02, 0x77, 0x7d, 0x2a, 0x3f, 0x6b, 0x00, 0x02}

const unsigned short int pp_WF09F = 0xf09f; // WF09F size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF0A3 = 0xf0a3; // WF0A3 size: 2
// {0xff, 0xff}

const unsigned short int pp_WF0A7 = 0xf0a7; // WF0A7 size: 12
// {0x00, 0x03, 0x03, 0x00, 0x02, 0x05, 0x00, 0x02, 0x02, 0xff, 0x03, 0x03}

const unsigned short int pp_WF0B5 = 0xf0b5; // WF0B5 size: 154
// {0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x3e, 0xba, 0x05, 0x0a, 0xc0, 0x06, 0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x1d, 0xba, 0x04, 0x0a, 0x00, 0x02, 0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x5c, 0xba, 0x01, 0x0a, 0x80, 0x00, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x70, 0x00, 0x2d, 0x54, 0x0d, 0x06, 0xc0, 0x04, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x20, 0x00, 0x1c, 0x30, 0x06, 0x04, 0x80, 0x01, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x20, 0x00, 0x18, 0x30, 0x02, 0x04, 0x80, 0x01, 0x1f, 0x1c, 0x87, 0x0f, 0xc0, 0xc1, 0xf8, 0x00, 0x1d, 0xba, 0x04, 0x0a, 0x00, 0x02, 0x1f, 0x1c, 0x87, 0x0f, 0xc0, 0xc1, 0xf8, 0x00, 0x5c, 0xba, 0x01, 0x0a, 0x80, 0x00, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x70, 0x00, 0x5a, 0x54, 0x05, 0x0c, 0x40, 0x86, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x20, 0x00, 0x1c, 0x18, 0x03, 0x04, 0x00, 0x03, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x20, 0x00, 0x0c, 0x18, 0x02, 0x04, 0x00, 0x03}

const unsigned short int pp_WF151 = 0xf151; // WF151 size: 56
// {0xc4, 0x00, 0x02, 0x03, 0x1e, 0x01, 0x01, 0x04, 0x14, 0x00, 0x00, 0x05, 0xe2, 0xff, 0x01, 0x04, 0x3c, 0x00, 0x02, 0x03, 0xc4, 0x00, 0xfe, 0x08, 0x1e, 0x01, 0xff, 0x09, 0x14, 0x00, 0x00, 0x0a, 0xe2, 0xff, 0xff, 0x09, 0x3c, 0x00, 0xfe, 0x08, 0x9c, 0x03, 0x00, 0x06, 0x9c, 0x03, 0x00, 0x07, 0x9c, 0xfd, 0x00, 0x01, 0x9c, 0xfd, 0x00, 0x02}




// 0xe942: db 0xbe 0x00 '  '

// ================================================
// 0xe944: WORD 'WE946' codep=0x744d parp=0xe946
// ================================================
IFieldType WE946 = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xe949: WORD 'WE94B' codep=0x744d parp=0xe94b
// ================================================
IFieldType WE94B = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xe94e: WORD 'WE950' codep=0x744d parp=0xe950
// ================================================
IFieldType WE950 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe953: WORD 'WE955' codep=0x224c parp=0xe955 params=0 returns=0
// ================================================

void WE955() // WE955
{
  unsigned short int a;
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x000a); //  0x000a +
  RRND(); // RRND
  Push(Read16(pp_YBLT) + 1); // YBLT @ 1+
  Push(Read16(regsp)); // DUP
  Push(Pop() - 0x000c); //  0x000c -
  SWAP(); // SWAP
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(a); // I
  Push(0x0057);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(a); // I
    Push(0x005d);
    _gt_(); // >
    if (Pop() != 0)
    {
      GetColor(LT_dash_BLUE);
    } else
    {
      GetColor(GREY1);
    }
  } else
  {
    GetColor(GREY2);
  }
  StoreCOLOR(); // !COLOR
  Push(a); // R>
  Pop(); // DROP
  LPLOT(); // LPLOT
  Push(0x1421);
  Push(0x7e64);
  RRND(); // RRND
  Push(0);
  Push(pp_STIME); // STIME
  StoreD(); // D!
}


// ================================================
// 0xe9b9: WORD 'WE9BB' codep=0x224c parp=0xe9bb params=1 returns=0
// ================================================

void WE9BB() // WE9BB
{
  BEEPON(); // BEEPON
  Push(Read16(regsp)); // DUP
  Push(Pop() * 2); //  2*
  RRND(); // RRND
  TONE(); // TONE
}


// ================================================
// 0xe9c7: WORD 'WE9C9' codep=0x224c parp=0xe9c9 params=0 returns=2
// ================================================

void WE9C9() // WE9C9
{
  unsigned short int i, imax, j, jmax;
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x1388);
  Push(0x7530);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WE9BB(); // WE9BB
    WE955(); // WE955
    Push(1);
    MS(); // MS
    Push(0xff6a);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(0x04e2);
  Push(0x0064);

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    Push(j); // I
    WE9BB(); // WE9BB
    WE955(); // WE955
    j++;
  } while(j<jmax); // (LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xea05: WORD 'WEA07' codep=0x1d29 parp=0xea07
// ================================================
// 0xea07: db 0x00 0x00 '  '

// ================================================
// 0xea09: WORD 'WEA0B' codep=0x224c parp=0xea0b params=0 returns=0
// ================================================

void WEA0B() // WEA0B
{
  unsigned short int a;
  Push((Read16(pp_STARDATE) - Read16(pp_WEA07)) * 0x0014); // STARDATE @ WEA07 @ - 0x0014 *
  a = Pop(); // >R
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  do
  {
    Push(Read16(0x63ef+WE94B.offset)&0xFF); // WE94B<IFIELD> C@
    Push(Read16(regsp)); // DUP
    Push(!(Pop() & 8)); //  8 AND NOT
    SWAP(); // SWAP
    Push((Pop() & 2)==0?1:0); //  2 AND 0=
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(a + (Read16(0x63ef+WE950.offset)&0xFF)); // I WE950<IFIELD> C@ +
      Push(0x0064);
      MIN(); // MIN
      Push(0x63ef+WE950.offset); // WE950<IFIELD>
      C_ex_(); // C!
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Pop(); // DROP
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(pp_WEA07); // WEA07
  Store_3(); // !_3
}


// ================================================
// 0xea69: WORD 'WEA6B' codep=0x1d29 parp=0xea6b
// ================================================
// 0xea6b: db 0x10 0x00 '  '

// ================================================
// 0xea6d: WORD 'WEA6F' codep=0x1d29 parp=0xea6f
// ================================================
// 0xea6f: db 0x63 0x00 'c '

// ================================================
// 0xea71: WORD 'WEA73' codep=0x1d29 parp=0xea73
// ================================================
// 0xea73: db 0x3a 0x20 ': '

// ================================================
// 0xea75: WORD 'WEA77' codep=0x1d29 parp=0xea77
// ================================================
// 0xea77: db 0x00 0x00 '  '

// ================================================
// 0xea79: WORD 'WEA7B' codep=0x1d29 parp=0xea7b
// ================================================
// 0xea7b: db 0x00 0x00 '  '

// ================================================
// 0xea7d: WORD 'WEA7F' codep=0x224c parp=0xea7f params=0 returns=1
// ================================================

void WEA7F() // WEA7F
{
  Push(Read16(pp_Is_gt_OP)); // ?>OP @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    BEEP(); // BEEP
  }
  Push(!Pop()); //  NOT
}


// ================================================
// 0xea8f: WORD 'WEA91' codep=0x224c parp=0xea91 params=0 returns=0
// ================================================

void WEA91() // WEA91
{
  WEA7F(); // WEA7F
  if (Pop() == 0) return;
  Push(0xc650); // 'U-PF'
  MODULE(); // MODULE
}


// ================================================
// 0xea9f: WORD 'WEAA1' codep=0x224c parp=0xeaa1 params=0 returns=0
// ================================================

void WEAA1() // WEAA1
{
  WEA7F(); // WEA7F
  if (Pop() == 0) return;
  Push(0xc610); // 'U-AC'
  MODULE(); // MODULE
}


// ================================================
// 0xeaaf: WORD 'WEAB1' codep=0x224c parp=0xeab1 params=0 returns=0
// ================================================

void WEAB1() // WEAB1
{
  WEA7F(); // WEA7F
  if (Pop() == 0) return;
  Push(0xc5b6); // 'U-B'
  MODULE(); // MODULE
}


// ================================================
// 0xeabf: WORD 'WEAC1' codep=0x224c parp=0xeac1 params=0 returns=0
// ================================================

void WEAC1() // WEAC1
{
  WEA7F(); // WEA7F
  if (Pop() == 0) return;
  Push(0xc73a); // 'U-SC'
  MODULE(); // MODULE
}


// ================================================
// 0xeacf: WORD 'WEAD1' codep=0x224c parp=0xead1 params=0 returns=0
// ================================================

void WEAD1() // WEAD1
{
  WEA7F(); // WEA7F
  if (Pop() == 0) return;
  Push(0xc785); // 'U-TD'
  MODULE(); // MODULE
}


// ================================================
// 0xeadf: WORD 'WEAE1' codep=0x224c parp=0xeae1 params=0 returns=0
// ================================================

void WEAE1() // WEAE1
{
  Push(0xc7f3); // 'U-OP'
  MODULE(); // MODULE
}


// ================================================
// 0xeae9: WORD 'WEAEB' codep=0x744d parp=0xeaeb
// ================================================
IFieldType WEAEB = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xeaee: WORD 'WEAF0' codep=0x224c parp=0xeaf0
// ================================================

void WEAF0() // WEAF0
{
  Push(0xc081); // '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  Store_3(); // !_3
  Push(0xc05f); // 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  Store_3(); // !_3
  Push(0x3a48); // 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  Store_3(); // !_3
  Push(0xc104); // '?SHIP-REPAIR'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  Store_3(); // !_3
  Push(0xbf68); // '.SORD'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  Store_3(); // !_3
  Push(0xc136); // 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  Store_3(); // !_3
  Push(0xbf56); // '/STARDATE'
  Push(pp__i__dot_DATE); // '.DATE
  Store_3(); // !_3
  Push(0xca8c); // '!'EXT'
  MODULE(); // MODULE
  Push(Read16(pp_LSYSEG)); // LSYSEG @
  Push(0x0070);
  FILE_st_(); // FILE<
  Push(Read16(pp_MSYSEG)); // MSYSEG @
  Push(0x0071);
  FILE_st_(); // FILE<
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  Push(0x0072);
  FILE_st_(); // FILE<
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  Store_3(); // !_3
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(7 - ((Read16(0x63ef+WE946.offset)&0xFF) & 7)); // 7 WE946<IFIELD> C@ 7 AND -
  Push(pp_E_dash_USE); // E-USE
  Store_3(); // !_3
  Push(Read16(0x63ef+WEAEB.offset)); // WEAEB<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_CARGO); // 10*CARGO
  StoreD(); // D!
  Push(0xc776); // '<TDART'
  MODULE(); // MODULE
  Push(pp_IsTV); // ?TV
  ON_3(); // ON_3
  Push(pp_IsRECALL); // ?RECALL
  OFF(); // OFF
  Push(Read16(pp_E_dash_USE)); // E-USE @
  Push(7);
  Push(0xbdd8); // 'OV?ARTIFACT'
  MODULE(); // MODULE
  if (Pop() != 0)
  {
    Push(Pop() >> 1); //  2/
  }
  Push(pp__dash_END); // -END
  Store_3(); // !_3
  WE9C9(); // WE9C9
}


// ================================================
// 0xeba0: WORD 'WEBA2' codep=0x224c parp=0xeba2 params=1 returns=0
// ================================================

void WEBA2() // WEBA2
{
  Push(0xd3dc); // '?FLIGHT-OK'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  WEAF0(); // WEAF0
  Push(0xd394); // 'OVFLT'
  MODULE(); // MODULE
  Push(0xc5a8); // 'I-TRANS'
  MODULE(); // MODULE
  WEA0B(); // WEA0B
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(Read16(regsp)); // DUP
  Push(pp_IsFANLYZ); // ?FANLYZ
  Store_3(); // !_3
  Push(0x0030);
  OVER(); // OVER
  _st_(); // <
  Push(0x0085);
  ROT(); // ROT
  _st_(); // <
  Push(Pop() + Pop()); // +
  Push(Pop() * 0x0032 + 0x0064); //  0x0032 * 0x0064 +
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  LoadData(ELEM_dash_VAL); // from 'ELEMENT'
  Store_3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xebfa: WORD 'WEBFC' codep=0x1d29 parp=0xebfc
// ================================================
// 0xebfc: db 0x3a 0x20 ': '

// ================================================
// 0xebfe: WORD '(|REGION)' codep=0xec0c parp=0xec0c
// ================================================
// 0xec0c: pop    word ptr [561C] // X1
// 0xec10: pop    cx
// 0xec11: push   es
// 0xec12: mov    es,cx
// 0xec14: push   si
// 0xec15: push   di
// 0xec16: push   bp
// 0xec17: push   ds
// 0xec18: mov    dx,[5892] // WBLT
// 0xec1c: shr    dx,1
// 0xec1e: shr    dx,1
// 0xec20: inc    dx
// 0xec21: inc    dx
// 0xec22: mov    bp,[586E] // XBLT
// 0xec26: shr    bp,1
// 0xec28: xor    di,di
// 0xec2a: mov    ax,[5887] // LBLT
// 0xec2e: mov    cx,ax
// 0xec30: mov    ax,cx
// 0xec32: pop    ds
// 0xec33: push   ds
// 0xec34: mov    bx,[5863] // YBLT
// 0xec38: sub    bx,cx
// 0xec3a: inc    bx
// 0xec3b: shl    bx,1
// 0xec3d: add    bx,[563A] // YTABL
// 0xec41: mov    si,[bx]
// 0xec43: add    si,bp
// 0xec45: mov    cx,dx
// 0xec47: mov    bx,[561C] // X1
// 0xec4b: push   word ptr [5648] // BUF-SEG
// 0xec4f: pop    ds
// 0xec50: or     bx,bx
// 0xec52: jz     EC5A
// 0xec54: push   ds
// 0xec55: push   es
// 0xec56: pop    ds
// 0xec57: pop    es
// 0xec58: xchg   si,di
// 0xec5a: repz   
// 0xec5b: movsw
// 0xec5c: mov    cx,ax
// 0xec5e: or     bx,bx
// 0xec60: jz     EC68
// 0xec62: push   ds
// 0xec63: push   es
// 0xec64: pop    ds
// 0xec65: pop    es
// 0xec66: xchg   si,di
// 0xec68: loop   EC30
// 0xec6a: pop    ds
// 0xec6b: pop    bp
// 0xec6c: pop    di
// 0xec6d: pop    si
// 0xec6e: pop    es
// 0xec6f: lodsw
// 0xec70: mov    bx,ax
// 0xec72: jmp    word ptr [bx]

// ================================================
// 0xec74: WORD '|EGA' codep=0xec7d parp=0xec7d
// ================================================
// 0xec7d: pop    cx
// 0xec7e: push   ds
// 0xec7f: push   es
// 0xec80: push   di
// 0xec81: push   si
// 0xec82: mov    ax,[55E6] // DBUF-SEG
// 0xec86: mov    dx,[55D8] // HBUF-SEG
// 0xec8a: mov    bx,[EBFC] // WEBFC
// 0xec8e: add    bx,03
// 0xec91: shl    bx,1
// 0xec93: add    bx,[563A] // YTABL
// 0xec97: mov    si,[bx]
// 0xec99: mov    di,si
// 0xec9b: test   cx,0001
// 0xec9f: jnz    ECA2
// 0xeca1: xchg   ax,dx
// 0xeca2: mov    es,ax
// 0xeca4: mov    ds,dx
// 0xeca6: mov    cx,02D0
// 0xeca9: call   8E32
// 0xecac: pop    si
// 0xecad: pop    di
// 0xecae: pop    es
// 0xecaf: pop    ds
// 0xecb0: lodsw
// 0xecb1: mov    bx,ax
// 0xecb3: jmp    word ptr [bx]

// ================================================
// 0xecb5: WORD '|REGION' codep=0x224c parp=0xecc1
// ================================================

void _v_REGION() // |REGION
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    SWAP(); // SWAP
    Pop(); // DROP
    Push(Read16(pp_BUF_dash_SEG)==0xa000?1:0); // BUF-SEG @ 0xa000 =
    if (Pop() != 0)
    {
      _v_EGA(); // |EGA
    } else
    {
      Pop(); // DROP
    }
    return;
  }
  _ro__v_REGION_rc_(); // (|REGION)
}


// ================================================
// 0xeceb: WORD 'WECED' codep=0x1d29 parp=0xeced
// ================================================
// 0xeced: db 0x06 0x00 '  '

// ================================================
// 0xecef: WORD 'WECF1' codep=0x1d29 parp=0xecf1
// ================================================
// 0xecf1: db 0x07 0x7a 0x7e 0x44 0x54 0x5f 0x69 0x82 0x92 0x2e 0x32 0x42 0x57 0x38 0x43 0x15 0x24 0x38 0x40 0x76 0x87 0x5f 0x69 0x0d 0x15 0x57 0x63 0x48 0x50 ' z~DT_i  .2BW8C $8@v _i  WcHP'

// ================================================
// 0xed0e: WORD 'WED10' codep=0x224c parp=0xed10 params=2 returns=0
// ================================================

void WED10() // WED10
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop() * 2); //  2*
    Push(0x0050);
    SWAP(); // SWAP
    _dash_(); // -
    Push(0x00c7);
    POS_dot_(); // POS.
    CTINIT(); // CTINIT
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() - 1)&0xFF); //  1- C@
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xed38: WORD 'WED3A' codep=0x1d29 parp=0xed3a
// ================================================
// 0xed3a: db 0x56 0x3a 0x20 0x20 'V:  '

// ================================================
// 0xed3e: WORD 'WED40' codep=0x224c parp=0xed40 params=0 returns=1
// ================================================
// orphan

void WED40() // WED40
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_WED3A); // WED3A
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xed4c: WORD 'WED4E' codep=0x224c parp=0xed4e params=0 returns=0
// ================================================

void WED4E() // WED4E
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x9c40); Push(0x0000);
  D_plus_(); // D+
  Push(pp_WED3A); // WED3A
  StoreD(); // D!
}


// ================================================
// 0xed60: WORD 'WED62' codep=0x224c parp=0xed62 params=0 returns=2
// ================================================

void WED62() // WED62
{
  SET_STR_AS_PARAM("PERSONNEL");
}


// ================================================
// 0xed70: WORD 'WED72' codep=0x224c parp=0xed72 params=0 returns=2
// ================================================

void WED72() // WED72
{
  SET_STR_AS_PARAM("CREW ASSIGNMENT");
}


// ================================================
// 0xed86: WORD 'WED88' codep=0x224c parp=0xed88 params=0 returns=2
// ================================================

void WED88() // WED88
{
  SET_STR_AS_PARAM("SHIP CONFIGURATION");
}


// ================================================
// 0xed9f: WORD 'WEDA1' codep=0x224c parp=0xeda1 params=0 returns=2
// ================================================

void WEDA1() // WEDA1
{
  SET_STR_AS_PARAM("TRADE DEPOT");
}


// ================================================
// 0xedb1: WORD 'WEDB3' codep=0x224c parp=0xedb3 params=0 returns=2
// ================================================

void WEDB3() // WEDB3
{
  SET_STR_AS_PARAM("BANK");
}


// ================================================
// 0xedbc: WORD 'WEDBE' codep=0x224c parp=0xedbe params=0 returns=2
// ================================================

void WEDBE() // WEDBE
{
  SET_STR_AS_PARAM("OPERATIONS");
}


// ================================================
// 0xedcd: WORD 'WEDCF' codep=0x224c parp=0xedcf params=0 returns=2
// ================================================

void WEDCF() // WEDCF
{
  SET_STR_AS_PARAM("DOCKING BAY");
}


// ================================================
// 0xeddf: WORD 'WEDE1' codep=0x224c parp=0xede1 params=0 returns=2
// ================================================

void WEDE1() // WEDE1
{
  Push(0x00c7);
  Push(0x002c);
  Push(0x00c0);
  Push(0x0072);
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0);
  Push(0);
}


// ================================================
// 0xedfb: WORD '(.DOOR)' codep=0x4a4f parp=0xee07
// ================================================

void _ro__dot_DOOR_rc_() // (.DOOR)
{
  switch(Pop()) // (.DOOR)
  {
  case 1:
    WED62(); // WED62
    break;
  case 2:
    WED72(); // WED72
    break;
  case 3:
    WED88(); // WED88
    break;
  case 4:
    WEDA1(); // WEDA1
    break;
  case 5:
    WEDB3(); // WEDB3
    break;
  case 6:
    WEDBE(); // WEDBE
    break;
  case 7:
    WEDCF(); // WEDCF
    break;
  default:
    WEDE1(); // WEDE1
    break;

  }
}

// ================================================
// 0xee27: WORD 'WEE29' codep=0x224c parp=0xee29
// ================================================

void WEE29() // WEE29
{
  GetCRS(); // @CRS
  Push(Read16(pp_WECED)); // WECED @
  _ro__dot_DOOR_rc_(); // (.DOOR) case
  WED10(); // WED10
  StoreCRS(); // !CRS
}


// ================================================
// 0xee37: WORD 'WEE39' codep=0x224c parp=0xee39 params=1 returns=1
// ================================================

void WEE39() // WEE39
{
  unsigned short int a;
  Push(Pop() * 4 + (pp_WECF1 + 1)); //  4 * WECF1 1+ +
  a = Pop(); // >R
  Push(Read16(pp_YBLT)); // YBLT @
  Push(Read16(a)&0xFF); // I C@
  Push(Read16(a + 1)&0xFF); // I 1+ C@
  WITHIN(); // WITHIN
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(a + 2)&0xFF); // I 2+ C@
  Push(Read16(a + 3)&0xFF); // R> 3 + C@
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xee6d: WORD 'WEE6F' codep=0x224c parp=0xee6f params=0 returns=0
// ================================================

void WEE6F() // WEE6F
{
  unsigned short int i, imax;
  Push(Read16(pp_WECED)==0?1:0); // WECED @ 0=
  if (Pop() != 0)
  {
    Push(Read16(pp_WECF1)&0xFF); // WECF1 C@
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      WEE39(); // WEE39
      if (Pop() != 0)
      {
        Push(i + 1); // I 1+
        Push(pp_WECED); // WECED
        Store_3(); // !_3
        WEE29(); // WEE29
        imax = i; // LEAVE
      }
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  Push(Read16(pp_WECED) - 1); // WECED @ 1-
  WEE39(); // WEE39
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(pp_WECED); // WECED
  OFF(); // OFF
  WEE29(); // WEE29
}


// ================================================
// 0xeeb3: WORD 'WEEB5' codep=0x1d29 parp=0xeeb5
// ================================================
// 0xeeb5: db 0x11 0x7d 0x7d 0x3f 0x60 0x7d 0x00 0x02 0x7d 0x77 0x60 0x71 0x9e 0x00 0x03 0x77 0x6a 0x71 0x87 0xb9 0x00 0x03 0x6a 0x59 0x87 0x93 0x29 0x01 0x03 0x59 0x4c 0x93 0x8e 0xdb 0xfe 0x01 0x4c 0x3d 0x8e 0x7e 0xc7 0xff 0x01 0x3d 0x33 0x7e 0x6d 0xf3 0xff 0x01 0x33 0x2e 0x6d 0x54 0x1e 0x00 0x01 0x2e 0x2e 0x54 0x46 0x2e 0x00 0x00 0x2e 0x36 0x46 0x24 0x3e 0x00 0x00 0x36 0x3c 0x24 0x1a 0x4b 0x00 0x00 0x3c 0x4a 0x1a 0x0c 0x56 0x00 0x00 0x4a 0x56 0x0c 0x06 0x62 0x00 0x00 0x56 0x62 0x06 0x0c 0x4a 0x00 0x02 0x62 0x6f 0x0c 0x19 0x56 0x00 0x02 0x6f 0x77 0x19 0x2a 0x64 0x00 0x02 0x77 0x7d 0x2a 0x3f 0x6b 0x00 0x02 ' }}?`}  }w`q   wjq    jY  )  YL     L= ~   =3~m   3.mT   ..TF.  .6F$>  6<$ K  <J  V  JV  b  Vb  J  bo  V  ow *d  w}*?k  '

// ================================================
// 0xef2d: WORD 'WEF2F' codep=0x224c parp=0xef2f params=3 returns=1
// ================================================

void WEF2F() // WEF2F
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    _star__slash_(); // */
    return;
  }
  Pop(); Pop(); // 2DROP
  Push(0);
}


// ================================================
// 0xef41: WORD 'WEF43' codep=0x224c parp=0xef43 params=1 returns=2
// ================================================

void WEF43() // WEF43
{
  unsigned short int a;
  a = Pop(); // >R
  Push((Read16(a)&0xFF) - (Read16(a + 1)&0xFF)); // I C@ I 1+ C@ -
  Push((Read16(a + 2)&0xFF) - (Read16(a + 3)&0xFF)); // I 2+ C@ R> 3 + C@ -
}


// ================================================
// 0xef63: WORD 'WEF65' codep=0x224c parp=0xef65 params=1 returns=1
// ================================================

void WEF65() // WEF65
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  SWAP(); // SWAP
  Push(Read16(Pop() + 1)&0xFF); //  1+ C@
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xef73: WORD 'WEF75' codep=0x224c parp=0xef75 params=1 returns=1
// ================================================

void WEF75() // WEF75
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(a + 2)&0xFF); // I 2+ C@
  Push((Read16(a + 6)&0xFF) & 1); // R> 6 + C@ 1 AND
  if (Pop() != 0)
  {
    MIN(); // MIN
    return;
  }
  MAX(); // MAX
}


// ================================================
// 0xef9b: WORD 'WEF9D' codep=0x224c parp=0xef9d params=1 returns=1
// ================================================

void WEF9D() // WEF9D
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(pp_YBLT) - Read16(a + 4)); // YBLT @ I 4 + @ -
  Push(a); // I
  WEF43(); // WEF43
  SWAP(); // SWAP
  WEF2F(); // WEF2F
  Push((Read16(a + 6)&0xFF) & 1); // R> 6 + C@ 1 AND
  if (Pop() != 0)
  {
    MIN(); // MIN
    return;
  }
  MAX(); // MAX
}


// ================================================
// 0xefd3: WORD 'WEFD5' codep=0x224c parp=0xefd5 params=1 returns=1
// ================================================

void WEFD5() // WEFD5
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(pp_YBLT)); // YBLT @
  Push(Read16(a)&0xFF); // I C@
  Push((Read16(a + 6)&0xFF) & 2); // R> 6 + C@ 2 AND
  if (Pop() != 0)
  {
    MIN(); // MIN
    return;
  }
  MAX(); // MAX
}


// ================================================
// 0xeff9: WORD 'WEFFB' codep=0x224c parp=0xeffb params=1 returns=1
// ================================================

void WEFFB() // WEFFB
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(pp_YBLT)); // YBLT @
  Push(Read16(pp_XBLT)); // XBLT @
  Push(a); // I
  WEF43(); // WEF43
  WEF2F(); // WEF2F
  Push(Pop() + Read16(a + 4)); //  I 4 + @ +
  Push((Read16(a + 6)&0xFF) & 2); // R> 6 + C@ 2 AND
  if (Pop() != 0)
  {
    MIN(); // MIN
    return;
  }
  MAX(); // MAX
}


// ================================================
// 0xf02f: WORD 'WF031' codep=0x224c parp=0xf031 params=1 returns=0
// ================================================

void WF031() // WF031
{
  Push(Read16(regsp)); // DUP
  Push(Pop() + 2); //  2+
  WEF65(); // WEF65
  if (Pop() != 0)
  {
    WEF75(); // WEF75
  } else
  {
    WEF9D(); // WEF9D
  }
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
}


// ================================================
// 0xf049: WORD 'WF04B' codep=0x224c parp=0xf04b params=1 returns=0
// ================================================

void WF04B() // WF04B
{
  Push(Read16(regsp)); // DUP
  WEF65(); // WEF65
  if (Pop() != 0)
  {
    WEFD5(); // WEFD5
  } else
  {
    WEFFB(); // WEFFB
  }
  Push(pp_YBLT); // YBLT
  Store_3(); // !_3
}


// ================================================
// 0xf061: WORD 'WF063' codep=0x224c parp=0xf063 params=2 returns=1
// ================================================

void WF063() // WF063
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(a)&0xFF); // I C@
  Push(Read16(a + 1)&0xFF); // I 1+ C@
  MIN(); // MIN
  Push(Read16(a)&0xFF); // I C@
  Push(Read16(a + 1)&0xFF); // R> 1+ C@
  MAX(); // MAX
  Push(Pop() + 1); //  1+
  WITHIN(); // WITHIN
}


// ================================================
// 0xf083: WORD 'WF085' codep=0x224c parp=0xf085 params=1 returns=1
// ================================================

void WF085() // WF085
{
  Push(Read16(pp_YBLT)); // YBLT @
  SWAP(); // SWAP
  WF063(); // WF063
}


// ================================================
// 0xf08f: WORD 'WF091' codep=0x224c parp=0xf091 params=1 returns=1
// ================================================

void WF091() // WF091
{
  Push(Read16(pp_XBLT)); // XBLT @
  SWAP(); // SWAP
  Push(Pop() + 2); //  2+
  WF063(); // WF063
}


// ================================================
// 0xf09d: WORD 'WF09F' codep=0x1d29 parp=0xf09f
// ================================================
// 0xf09f: db 0x3a 0x20 ': '

// ================================================
// 0xf0a1: WORD 'WF0A3' codep=0x1d29 parp=0xf0a3
// ================================================
// 0xf0a3: db 0xff 0xff '  '

// ================================================
// 0xf0a5: WORD 'WF0A7' codep=0x1d29 parp=0xf0a7
// ================================================
// 0xf0a7: db 0x00 0x03 0x03 0x00 0x02 0x05 0x00 0x02 0x02 0xff 0x03 0x03 '            '

// ================================================
// 0xf0b3: WORD 'WF0B5' codep=0x1d29 parp=0xf0b5
// ================================================
// 0xf0b5: db 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x3e 0xba 0x05 0x0a 0xc0 0x06 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x1d 0xba 0x04 0x0a 0x00 0x02 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x5c 0xba 0x01 0x0a 0x80 0x00 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x70 0x00 0x2d 0x54 0x0d 0x06 0xc0 0x04 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x20 0x00 0x1c 0x30 0x06 0x04 0x80 0x01 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x20 0x00 0x18 0x30 0x02 0x04 0x80 0x01 0x1f 0x1c 0x87 0x0f 0xc0 0xc1 0xf8 0x00 0x1d 0xba 0x04 0x0a 0x00 0x02 0x1f 0x1c 0x87 0x0f 0xc0 0xc1 0xf8 0x00 0x5c 0xba 0x01 0x0a 0x80 0x00 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x70 0x00 0x5a 0x54 0x05 0x0c 0x40 0x86 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x20 0x00 0x1c 0x18 0x03 0x04 0x00 0x03 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x20 0x00 0x0c 0x18 0x02 0x04 0x00 0x03 '     A  >          A             A  \           p -T             0             0                          \           p ZT  @                             '

// ================================================
// 0xf14f: WORD 'WF151' codep=0x1d29 parp=0xf151
// ================================================
// 0xf151: db 0xc4 0x00 0x02 0x03 0x1e 0x01 0x01 0x04 0x14 0x00 0x00 0x05 0xe2 0xff 0x01 0x04 0x3c 0x00 0x02 0x03 0xc4 0x00 0xfe 0x08 0x1e 0x01 0xff 0x09 0x14 0x00 0x00 0x0a 0xe2 0xff 0xff 0x09 0x3c 0x00 0xfe 0x08 0x9c 0x03 0x00 0x06 0x9c 0x03 0x00 0x07 0x9c 0xfd 0x00 0x01 0x9c 0xfd 0x00 0x02 '                <                   <                   '

// ================================================
// 0xf189: WORD 'WF18B' codep=0x224c parp=0xf18b params=0 returns=0
// ================================================

void WF18B() // WF18B
{
  Push(Read16(pp_WF0B5 + 0x000c) + 0x8040); // WF0B5 0x000c + @ 0x8040 XOR
  Push(pp_WF0B5 + 0x000c); // WF0B5 0x000c +
  Store_3(); // !_3
}


// ================================================
// 0xf1a7: WORD 'WF1A9' codep=0x224c parp=0xf1a9 params=0 returns=0
// ================================================

void WF1A9() // WF1A9
{
  GetCRS(); // @CRS
  Push(pp_WF0A7 + Read16(pp_WF09F) * 3); // WF0A7 WF09F @ 3 * +
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  StoreCOLOR(); // !COLOR
  Push(Read16(Pop() + 1)&0xFF); //  1+ C@
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(Read16(Pop() + 2)&0xFF); //  2+ C@
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(-2);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(2);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(pp_WF0A3); // WF0A3
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  _co_BLT_cc_(); // {BLT}
  StoreCRS(); // !CRS
}


// ================================================
// 0xf1e7: WORD 'WF1E9' codep=0x224c parp=0xf1e9
// ================================================

void WF1E9() // WF1E9
{
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  Push(9);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(0x000c);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  CTINIT(); // CTINIT
  Push(pp_WF0B5); // WF0B5
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(Read16(pp_WEA6B)); // WEA6B @
  Push(Read16(pp_WEA6F)); // WEA6F @
  Push(Read16(regsp)); // DUP
  Push(pp_WEBFC); // WEBFC
  Store_3(); // !_3
  POS_dot_(); // POS.
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop() + 1); //  1+
  Push(0);
  _v_REGION(); // |REGION
  _co_BLT_cc_(); // {BLT}
  Push(pp_WF09F); // WF09F
  OFF(); // OFF
  WF1A9(); // WF1A9
}


// ================================================
// 0xf229: WORD 'WF22B' codep=0x224c parp=0xf22b params=0 returns=0
// ================================================

void WF22B() // WF22B
{
  Push(0);
  Push(0x03e8);
  Push(1);
  _gt_SND(); // >SND
}


// ================================================
// 0xf237: WORD 'WF239' codep=0x224c parp=0xf239 params=0 returns=0
// ================================================

void WF239() // WF239
{
  unsigned short int i, imax, a;
  Push(pp_WEA73); // WEA73
  OFF(); // OFF
  Push((Read16(pp_WEEB5)&0xFF) * 7); // WEEB5 C@ 7 *
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push((pp_WEEB5 + 1) + i); // WEEB5 1+ I +
    a = Pop(); // >R
    Push(a); // I
    WF085(); // WF085
    Push(Pop() * 2); //  2*
    Push(a); // I
    WF091(); // WF091
    Push(Pop() + Pop()); // +
    Push(Read16(regsp)); // DUP
    Push((Pop() & 2) & Read16(pp_WEA77)); //  2 AND WEA77 @ AND
    if (Pop() != 0)
    {
      Push(a); // I
      WF031(); // WF031
    }
    Push((Pop() & 1) & Read16(pp_WEA7B)); //  1 AND WEA7B @ AND
    if (Pop() != 0)
    {
      Push(a); // I
      WF04B(); // WF04B
    }
    Push(a); // R>
    Pop(); // DROP
    Push(7);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf291: WORD 'WF293' codep=0x224c parp=0xf293
// ================================================

void WF293() // WF293
{
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop() + 1); //  1+
  Push(1);
  _v_REGION(); // |REGION
}


// ================================================
// 0xf29f: WORD 'WF2A1' codep=0x224c parp=0xf2a1
// ================================================

void WF2A1() // WF2A1
{
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop() + 1); //  1+
  Push(0);
  _v_REGION(); // |REGION
  _co_BLT_cc_(); // {BLT}
  WF1A9(); // WF1A9
}


// ================================================
// 0xf2b1: WORD 'WF2B3' codep=0x224c parp=0xf2b3
// ================================================

void WF2B3() // WF2B3
{
  Push(Pop() * 0x000e + pp_WF0B5); //  0x000e * WF0B5 +
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(pp_YBLT)); // YBLT @
  _2SWAP(); // 2SWAP
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  WF239(); // WF239
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(pp_YBLT)); // YBLT @
  _2SWAP(); // 2SWAP
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  Push(pp_WEBFC); // WEBFC
  Store_3(); // !_3
  DISPLAY_dash_WAIT(); // DISPLAY-WAIT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF293(); // WF293
  POS_dot_(); // POS.
  WF2A1(); // WF2A1
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    WF22B(); // WF22B
  }
  ABS(); // ABS
  Push(3);
  Push(4);
  _star__slash_(); // */
  MS(); // MS
}


// ================================================
// 0xf309: WORD 'WF30B' codep=0x224c parp=0xf30b
// ================================================

void WF30B() // WF30B
{
  unsigned short int i, imax, a;
  WED4E(); // WED4E
  Push(pp_WF09F); // WF09F
  Store_3(); // !_3
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_WF151); // WF151
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Push(Pop() + i * 4); //  I 4 * +
    a = Pop(); // >R
    Push(a); // I
    _plus__dash__at_(); // +-@
    Push(a + 1); // I 1+
    _plus__dash__at_(); // +-@
    Push(a + 2); // I 2+
    _plus__dash__at_(); // +-@
    Push(Read16(a + 3)&0xFF); // R> 3 + C@
    WF2B3(); // WF2B3
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  WEE6F(); // WEE6F
}


// ================================================
// 0xf349: WORD 'WF34B' codep=0x224c parp=0xf34b
// ================================================

void WF34B() // WF34B
{
  Push(-1);
  Push(pp_WEA77); // WEA77
  Store_3(); // !_3
  Push(0);
  Push(5);
  Push(1);
  WF30B(); // WF30B
  Push(pp_WEA77); // WEA77
  OFF(); // OFF
}


// ================================================
// 0xf35f: WORD 'WF361' codep=0x224c parp=0xf361
// ================================================

void WF361() // WF361
{
  Push(-1);
  Push(pp_WEA77); // WEA77
  Store_3(); // !_3
  Push(0x0014);
  Push(5);
  Push(2);
  WF30B(); // WF30B
  Push(pp_WEA77); // WEA77
  OFF(); // OFF
}


// ================================================
// 0xf377: WORD 'WF379' codep=0x224c parp=0xf379
// ================================================

void WF379() // WF379
{
  Push(-1);
  Push(pp_WEA7B); // WEA7B
  Store_3(); // !_3
  Push(0x0028);
  Push(2);
  Push(3);
  WF30B(); // WF30B
  Push(pp_WEA7B); // WEA7B
  OFF(); // OFF
}


// ================================================
// 0xf38f: WORD 'WF391' codep=0x224c parp=0xf391
// ================================================

void WF391() // WF391
{
  Push(-1);
  Push(pp_WEA7B); // WEA7B
  Store_3(); // !_3
  Push(0x0030);
  Push(2);
  Push(0);
  WF30B(); // WF30B
  Push(pp_WEA7B); // WEA7B
  OFF(); // OFF
}


// ================================================
// 0xf3a7: WORD 'WF3A9' codep=0x224c parp=0xf3a9
// ================================================

void WF3A9() // WF3A9
{
  unsigned short int i, imax;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_ABLT)==pp_WF0B5?1:0); // ABLT @ WF0B5 =
  if (Pop() != 0)
  {
    Push(0);
    Push(0x05dc);
    RRND(); // RRND
    Push(Pop()==0?1:0); //  0=
    WED40(); // WED40
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(4);
      Push(0);

      i = Pop();
      imax = Pop();
      do // (DO)
      {
        WF18B(); // WF18B
        DISPLAY_dash_WAIT(); // DISPLAY-WAIT
        WF293(); // WF293
        WF2A1(); // WF2A1
        Push(0x0032);
        MS(); // MS
        WF18B(); // WF18B
        DISPLAY_dash_WAIT(); // DISPLAY-WAIT
        WF293(); // WF293
        WF2A1(); // WF2A1
        WF22B(); // WF22B
        Push(0x0096);
        MS(); // MS
        i++;
      } while(i<imax); // (LOOP)

    }
    return;
  }
  Push(pp_WF09F); // WF09F
  OFF(); // OFF
  Push2Words("NULL");
  Push2Words("NULL");
  WF2B3(); // WF2B3
}


// ================================================
// 0xf403: WORD 'PORT-PIC' codep=0x224c parp=0xf410
// ================================================

void PORT_dash_PIC() // PORT-PIC
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0);
  Push(0x00c7);
  POS_dot_(); // POS.
  Push(0x002c);
  Push(0xbe9d); // '@.HYBRID'
  MODULE(); // MODULE
  Push(0);
  Push(0x0063);
  POS_dot_(); // POS.
  Push(0x0031);
  Push(0xbe9d); // '@.HYBRID'
  MODULE(); // MODULE
  Push(Read16(pp_IsEGA)==0?1:0); // ?EGA @ 0=
  if (Pop() != 0)
  {
    WF1E9(); // WF1E9
  }
  WEDE1(); // WEDE1
  Pop(); Pop(); // 2DROP
  WEE29(); // WEE29
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() == 0) return;
  WF1E9(); // WF1E9
}


// ================================================
// 0xf45a: WORD 'DO-ROOM' codep=0x4a4f parp=0xf466
// ================================================

void DO_dash_ROOM() // DO-ROOM
{
  switch(Pop()) // DO-ROOM
  {
  case 1:
    WEA91(); // WEA91
    break;
  case 2:
    WEAA1(); // WEAA1
    break;
  case 3:
    WEAC1(); // WEAC1
    break;
  case 4:
    WEAD1(); // WEAD1
    break;
  case 5:
    WEAB1(); // WEAB1
    break;
  case 6:
    WEAE1(); // WEAE1
    break;
  case 7:
    WEBA2(); // WEBA2
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf486: WORD 'WF488' codep=0x224c parp=0xf488
// ================================================

void WF488() // WF488
{
  Push(Read16(pp_XBLT)); // XBLT @
  Push(pp_WEA6B); // WEA6B
  Store_3(); // !_3
  Push(Read16(pp_YBLT)); // YBLT @
  Push(pp_WEA6F); // WEA6F
  Store_3(); // !_3
  Push(Read16(pp_WECED)); // WECED @
  DO_dash_ROOM(); // DO-ROOM case
  Push(Read16(pp_WECED)); // WECED @
  if (Pop() == 0) return;
  PORT_dash_PIC(); // PORT-PIC
  WED4E(); // WED4E
}


// ================================================
// 0xf4ac: WORD 'XWALK' codep=0x4a4f parp=0xf4b6
// ================================================

void XWALK() // XWALK
{
  switch(Pop()) // XWALK
  {
  case 1:
    WF34B(); // WF34B
    break;
  case 65535:
    WF361(); // WF361
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4c2: WORD 'YWALK' codep=0x4a4f parp=0xf4cc
// ================================================

void YWALK() // YWALK
{
  switch(Pop()) // YWALK
  {
  case 1:
    WF379(); // WF379
    break;
  case 65535:
    WF391(); // WF391
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4d8: WORD 'WALKIES' codep=0x224c parp=0xf4e4
// ================================================
// entry

void WALKIES() // WALKIES
{
  WED4E(); // WED4E
  PORT_dash_PIC(); // PORT-PIC
  while(1)
  {
    XYSCAN(); // XYSCAN
    _2DUP(); // 2DUP
    XWALK(); // XWALK case
    YWALK(); // YWALK case
    Push(Pop() | Pop()); // OR
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WF3A9(); // WF3A9
    }
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      WF488(); // WF488
      _i_KEY(); // 'KEY
      Pop(); // DROP
    }
  }
}

// 0xf50c: db 0x50 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x50 0x4f 0x52 0x54 0x4d 0x45 0x4e 0x55 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x5f 0x32 0x31 0x39 0x30 0x72 0x20 0x43 0x48 0x4b 0x46 0x4c 0x49 0x47 0x48 0x54 0x2d 0x4f 0x56 0x20 0x2d 0x00 'PM-VOC__________________________for PORTMENU----------------- )_2190r CHKFLIGHT-OV - '

