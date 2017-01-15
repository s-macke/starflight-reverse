// ====== OVERLAY 'PORTMENU-OV' ======
// store offset = 0xe930
// overlay size   = 0x0c30

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe946  codep:0x744d parp:0xe946 size:0x0003 C-string:'UNK_0xe946'
//      UNK_0xe94b  codep:0x744d parp:0xe94b size:0x0003 C-string:'UNK_0xe94b'
//      UNK_0xe950  codep:0x744d parp:0xe950 size:0x0003 C-string:'UNK_0xe950'
//      UNK_0xe955  codep:0x224c parp:0xe955 size:0x0064 C-string:'UNK_0xe955'
//      UNK_0xe9bb  codep:0x224c parp:0xe9bb size:0x000c C-string:'UNK_0xe9bb'
//      UNK_0xe9c9  codep:0x224c parp:0xe9c9 size:0x003c C-string:'UNK_0xe9c9'
//      UNK_0xea07  codep:0x1d29 parp:0xea07 size:0x0002 C-string:'UNK_0xea07'
//      UNK_0xea0b  codep:0x224c parp:0xea0b size:0x005e C-string:'UNK_0xea0b'
//      UNK_0xea6b  codep:0x1d29 parp:0xea6b size:0x0002 C-string:'UNK_0xea6b'
//      UNK_0xea6f  codep:0x1d29 parp:0xea6f size:0x0002 C-string:'UNK_0xea6f'
//      UNK_0xea73  codep:0x1d29 parp:0xea73 size:0x0002 C-string:'UNK_0xea73'
//      UNK_0xea77  codep:0x1d29 parp:0xea77 size:0x0002 C-string:'UNK_0xea77'
//      UNK_0xea7b  codep:0x1d29 parp:0xea7b size:0x0002 C-string:'UNK_0xea7b'
//      UNK_0xea7f  codep:0x224c parp:0xea7f size:0x0010 C-string:'UNK_0xea7f'
//      UNK_0xea91  codep:0x224c parp:0xea91 size:0x000e C-string:'UNK_0xea91'
//      UNK_0xeaa1  codep:0x224c parp:0xeaa1 size:0x000e C-string:'UNK_0xeaa1'
//      UNK_0xeab1  codep:0x224c parp:0xeab1 size:0x000e C-string:'UNK_0xeab1'
//      UNK_0xeac1  codep:0x224c parp:0xeac1 size:0x000e C-string:'UNK_0xeac1'
//      UNK_0xead1  codep:0x224c parp:0xead1 size:0x000e C-string:'UNK_0xead1'
//      UNK_0xeae1  codep:0x224c parp:0xeae1 size:0x0008 C-string:'UNK_0xeae1'
//      UNK_0xeaeb  codep:0x744d parp:0xeaeb size:0x0003 C-string:'UNK_0xeaeb'
//      UNK_0xeaf0  codep:0x224c parp:0xeaf0 size:0x00b0 C-string:'UNK_0xeaf0'
//      UNK_0xeba2  codep:0x224c parp:0xeba2 size:0x0058 C-string:'UNK_0xeba2'
//      UNK_0xebfc  codep:0x1d29 parp:0xebfc size:0x0002 C-string:'UNK_0xebfc'
//       (|REGION)  codep:0xec0c parp:0xec0c size:0x0068 C-string:'_ro__v_REGION_rc_'
//            |EGA  codep:0xec7d parp:0xec7d size:0x0038 C-string:'_v_EGA'
//         |REGION  codep:0x224c parp:0xecc1 size:0x002a C-string:'_v_REGION'
//      UNK_0xeced  codep:0x1d29 parp:0xeced size:0x0002 C-string:'UNK_0xeced'
//      UNK_0xecf1  codep:0x1d29 parp:0xecf1 size:0x001d C-string:'UNK_0xecf1'
//      UNK_0xed10  codep:0x224c parp:0xed10 size:0x0028 C-string:'UNK_0xed10'
//      UNK_0xed3a  codep:0x1d29 parp:0xed3a size:0x0004 C-string:'UNK_0xed3a'
//      UNK_0xed40  codep:0x224c parp:0xed40 size:0x000c C-string:'UNK_0xed40'
//      UNK_0xed4e  codep:0x224c parp:0xed4e size:0x0012 C-string:'UNK_0xed4e'
//      UNK_0xed62  codep:0x224c parp:0xed62 size:0x000e C-string:'UNK_0xed62'
//      UNK_0xed72  codep:0x224c parp:0xed72 size:0x0014 C-string:'UNK_0xed72'
//      UNK_0xed88  codep:0x224c parp:0xed88 size:0x0017 C-string:'UNK_0xed88'
//      UNK_0xeda1  codep:0x224c parp:0xeda1 size:0x0010 C-string:'UNK_0xeda1'
//      UNK_0xedb3  codep:0x224c parp:0xedb3 size:0x0009 C-string:'UNK_0xedb3'
//      UNK_0xedbe  codep:0x224c parp:0xedbe size:0x000f C-string:'UNK_0xedbe'
//      UNK_0xedcf  codep:0x224c parp:0xedcf size:0x0010 C-string:'UNK_0xedcf'
//      UNK_0xede1  codep:0x224c parp:0xede1 size:0x001a C-string:'UNK_0xede1'
//         (.DOOR)  codep:0x4a4f parp:0xee07 size:0x0020 C-string:'_ro__dot_DOOR_rc_'
//      UNK_0xee29  codep:0x224c parp:0xee29 size:0x000e C-string:'UNK_0xee29'
//      UNK_0xee39  codep:0x224c parp:0xee39 size:0x0034 C-string:'UNK_0xee39'
//      UNK_0xee6f  codep:0x224c parp:0xee6f size:0x0044 C-string:'UNK_0xee6f'
//      UNK_0xeeb5  codep:0x1d29 parp:0xeeb5 size:0x0078 C-string:'UNK_0xeeb5'
//      UNK_0xef2f  codep:0x224c parp:0xef2f size:0x0012 C-string:'UNK_0xef2f'
//      UNK_0xef43  codep:0x224c parp:0xef43 size:0x0020 C-string:'UNK_0xef43'
//      UNK_0xef65  codep:0x224c parp:0xef65 size:0x000e C-string:'UNK_0xef65'
//      UNK_0xef75  codep:0x224c parp:0xef75 size:0x0026 C-string:'UNK_0xef75'
//      UNK_0xef9d  codep:0x224c parp:0xef9d size:0x0036 C-string:'UNK_0xef9d'
//      UNK_0xefd5  codep:0x224c parp:0xefd5 size:0x0024 C-string:'UNK_0xefd5'
//      UNK_0xeffb  codep:0x224c parp:0xeffb size:0x0034 C-string:'UNK_0xeffb'
//      UNK_0xf031  codep:0x224c parp:0xf031 size:0x0018 C-string:'UNK_0xf031'
//      UNK_0xf04b  codep:0x224c parp:0xf04b size:0x0016 C-string:'UNK_0xf04b'
//      UNK_0xf063  codep:0x224c parp:0xf063 size:0x0020 C-string:'UNK_0xf063'
//      UNK_0xf085  codep:0x224c parp:0xf085 size:0x000a C-string:'UNK_0xf085'
//      UNK_0xf091  codep:0x224c parp:0xf091 size:0x000c C-string:'UNK_0xf091'
//      UNK_0xf09f  codep:0x1d29 parp:0xf09f size:0x0002 C-string:'UNK_0xf09f'
//      UNK_0xf0a3  codep:0x1d29 parp:0xf0a3 size:0x0002 C-string:'UNK_0xf0a3'
//      UNK_0xf0a7  codep:0x1d29 parp:0xf0a7 size:0x000c C-string:'UNK_0xf0a7'
//      UNK_0xf0b5  codep:0x1d29 parp:0xf0b5 size:0x009a C-string:'UNK_0xf0b5'
//      UNK_0xf151  codep:0x1d29 parp:0xf151 size:0x0038 C-string:'UNK_0xf151'
//      UNK_0xf18b  codep:0x224c parp:0xf18b size:0x001c C-string:'UNK_0xf18b'
//      UNK_0xf1a9  codep:0x224c parp:0xf1a9 size:0x003e C-string:'UNK_0xf1a9'
//      UNK_0xf1e9  codep:0x224c parp:0xf1e9 size:0x0040 C-string:'UNK_0xf1e9'
//      UNK_0xf22b  codep:0x224c parp:0xf22b size:0x000c C-string:'UNK_0xf22b'
//      UNK_0xf239  codep:0x224c parp:0xf239 size:0x0058 C-string:'UNK_0xf239'
//      UNK_0xf293  codep:0x224c parp:0xf293 size:0x000c C-string:'UNK_0xf293'
//      UNK_0xf2a1  codep:0x224c parp:0xf2a1 size:0x0010 C-string:'UNK_0xf2a1'
//      UNK_0xf2b3  codep:0x224c parp:0xf2b3 size:0x0056 C-string:'UNK_0xf2b3'
//      UNK_0xf30b  codep:0x224c parp:0xf30b size:0x003e C-string:'UNK_0xf30b'
//      UNK_0xf34b  codep:0x224c parp:0xf34b size:0x0014 C-string:'UNK_0xf34b'
//      UNK_0xf361  codep:0x224c parp:0xf361 size:0x0016 C-string:'UNK_0xf361'
//      UNK_0xf379  codep:0x224c parp:0xf379 size:0x0016 C-string:'UNK_0xf379'
//      UNK_0xf391  codep:0x224c parp:0xf391 size:0x0016 C-string:'UNK_0xf391'
//      UNK_0xf3a9  codep:0x224c parp:0xf3a9 size:0x005a C-string:'UNK_0xf3a9'
//        PORT-PIC  codep:0x224c parp:0xf410 size:0x004a C-string:'PORT_dash_PIC'
//         DO-ROOM  codep:0x4a4f parp:0xf466 size:0x0020 C-string:'DO_dash_ROOM'
//      UNK_0xf488  codep:0x224c parp:0xf488 size:0x0024 C-string:'UNK_0xf488'
//           XWALK  codep:0x4a4f parp:0xf4b6 size:0x000c C-string:'XWALK'
//           YWALK  codep:0x4a4f parp:0xf4cc size:0x000c C-string:'YWALK'
//         WALKIES  codep:0x224c parp:0xf4e4 size:0x0000 C-string:'WALKIES'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp__ask_TV; // ?TV
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
extern const unsigned short int pp__ask_RECALL; // ?RECALL
extern const unsigned short int pp__ask__gt_OP; // ?>OP
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp__ask_EGA; // ?EGA
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
extern const unsigned short int pp__ask_FANLYZ; // ?FANLYZ
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
void _ex__3(); // !_3
void _plus__ex_(); // +!
void D_ex_(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void FILE_st_(); // FILE<
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void _ask_FIRST(); // ?FIRST
void INEXT(); // INEXT
void _ex_COLOR(); // !COLOR
void _gt_DISPLAY(); // >DISPLAY
void _gt_HIDDEN(); // >HIDDEN
void SCR_dash_RES(); // SCR-RES
void DARK(); // DARK
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void _gt_SND(); // >SND
void BEEPON(); // BEEPON
void _at_CRS(); // @CRS
void _ex_CRS(); // !CRS
void CTINIT(); // CTINIT
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void _ask_TRIG(); // ?TRIG
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
void _at_DS(); // @DS
void _plus__dash__at_(); // +-@
void DISPLAY(); // DISPLAY
void LPLOT(); // LPLOT
void _co_BLT_cc_(); // {BLT}
void _ro__v_REGION_rc_(); // (|REGION)
void _v_EGA(); // |EGA


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xea07 = 0xea07; // UNK_0xea07 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xea6b = 0xea6b; // UNK_0xea6b size: 2
// {0x4a, 0x00}

const unsigned short int pp_UNK_0xea6f = 0xea6f; // UNK_0xea6f size: 2
// {0x5e, 0x00}

const unsigned short int pp_UNK_0xea73 = 0xea73; // UNK_0xea73 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xea77 = 0xea77; // UNK_0xea77 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xea7b = 0xea7b; // UNK_0xea7b size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xebfc = 0xebfc; // UNK_0xebfc size: 2
// {0x5e, 0x00}

const unsigned short int pp_UNK_0xeced = 0xeced; // UNK_0xeced size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xecf1 = 0xecf1; // UNK_0xecf1 size: 29
// {0x07, 0x7a, 0x7e, 0x44, 0x54, 0x5f, 0x69, 0x82, 0x92, 0x2e, 0x32, 0x42, 0x57, 0x38, 0x43, 0x15, 0x24, 0x38, 0x40, 0x76, 0x87, 0x5f, 0x69, 0x0d, 0x15, 0x57, 0x63, 0x48, 0x50}

const unsigned short int pp_UNK_0xed3a = 0xed3a; // UNK_0xed3a size: 4
// {0x07, 0x00, 0x46, 0xa9}

const unsigned short int pp_UNK_0xeeb5 = 0xeeb5; // UNK_0xeeb5 size: 120
// {0x11, 0x7d, 0x7d, 0x3f, 0x60, 0x7d, 0x00, 0x02, 0x7d, 0x77, 0x60, 0x71, 0x9e, 0x00, 0x03, 0x77, 0x6a, 0x71, 0x87, 0xb9, 0x00, 0x03, 0x6a, 0x59, 0x87, 0x93, 0x29, 0x01, 0x03, 0x59, 0x4c, 0x93, 0x8e, 0xdb, 0xfe, 0x01, 0x4c, 0x3d, 0x8e, 0x7e, 0xc7, 0xff, 0x01, 0x3d, 0x33, 0x7e, 0x6d, 0xf3, 0xff, 0x01, 0x33, 0x2e, 0x6d, 0x54, 0x1e, 0x00, 0x01, 0x2e, 0x2e, 0x54, 0x46, 0x2e, 0x00, 0x00, 0x2e, 0x36, 0x46, 0x24, 0x3e, 0x00, 0x00, 0x36, 0x3c, 0x24, 0x1a, 0x4b, 0x00, 0x00, 0x3c, 0x4a, 0x1a, 0x0c, 0x56, 0x00, 0x00, 0x4a, 0x56, 0x0c, 0x06, 0x62, 0x00, 0x00, 0x56, 0x62, 0x06, 0x0c, 0x4a, 0x00, 0x02, 0x62, 0x6f, 0x0c, 0x19, 0x56, 0x00, 0x02, 0x6f, 0x77, 0x19, 0x2a, 0x64, 0x00, 0x02, 0x77, 0x7d, 0x2a, 0x3f, 0x6b, 0x00, 0x02}

const unsigned short int pp_UNK_0xf09f = 0xf09f; // UNK_0xf09f size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xf0a3 = 0xf0a3; // UNK_0xf0a3 size: 2
// {0xff, 0xff}

const unsigned short int pp_UNK_0xf0a7 = 0xf0a7; // UNK_0xf0a7 size: 12
// {0x00, 0x03, 0x03, 0x00, 0x02, 0x05, 0x00, 0x02, 0x02, 0xff, 0x03, 0x03}

const unsigned short int pp_UNK_0xf0b5 = 0xf0b5; // UNK_0xf0b5 size: 154
// {0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x3e, 0xba, 0x05, 0x0a, 0xc0, 0x06, 0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x1d, 0xba, 0x04, 0x0a, 0x00, 0x02, 0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x5c, 0xba, 0x01, 0x0a, 0x80, 0x00, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x70, 0x00, 0x2d, 0x54, 0x0d, 0x06, 0xc0, 0x04, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x20, 0x00, 0x1c, 0x30, 0x06, 0x04, 0x80, 0x01, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x20, 0x00, 0x18, 0x30, 0x02, 0x04, 0x80, 0x01, 0x1f, 0x1c, 0x87, 0x0f, 0xc0, 0xc1, 0xf8, 0x00, 0x1d, 0xba, 0x04, 0x0a, 0x00, 0x02, 0x1f, 0x1c, 0x87, 0x0f, 0xc0, 0xc1, 0xf8, 0x00, 0x5c, 0xba, 0x01, 0x0a, 0x80, 0x00, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x70, 0x00, 0x5a, 0x54, 0x05, 0x0c, 0x40, 0x86, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x20, 0x00, 0x1c, 0x18, 0x03, 0x04, 0x00, 0x03, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x20, 0x00, 0x0c, 0x18, 0x02, 0x04, 0x00, 0x03}

const unsigned short int pp_UNK_0xf151 = 0xf151; // UNK_0xf151 size: 56
// {0xc4, 0x00, 0x02, 0x03, 0x1e, 0x01, 0x01, 0x04, 0x14, 0x00, 0x00, 0x05, 0xe2, 0xff, 0x01, 0x04, 0x3c, 0x00, 0x02, 0x03, 0xc4, 0x00, 0xfe, 0x08, 0x1e, 0x01, 0xff, 0x09, 0x14, 0x00, 0x00, 0x0a, 0xe2, 0xff, 0xff, 0x09, 0x3c, 0x00, 0xfe, 0x08, 0x9c, 0x03, 0x00, 0x06, 0x9c, 0x03, 0x00, 0x07, 0x9c, 0xfd, 0x00, 0x01, 0x9c, 0xfd, 0x00, 0x02}




// 0xe942: db 0xbe 0x00 '  '

// ================================================
// 0xe944: WORD 'UNK_0xe946' codep=0x744d parp=0xe946
// ================================================
// 0xe946: db 0x14 0x14 0x01 '   '

// ================================================
// 0xe949: WORD 'UNK_0xe94b' codep=0x744d parp=0xe94b
// ================================================
// 0xe94b: db 0x10 0x20 0x02 '   '

// ================================================
// 0xe94e: WORD 'UNK_0xe950' codep=0x744d parp=0xe950
// ================================================
// 0xe950: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xe953: WORD 'UNK_0xe955' codep=0x224c parp=0xe955
// ================================================

void UNK_0xe955() // UNK_0xe955
{
  unsigned short int a;
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  Push(Pop() + Pop()); // +
  RRND(); // RRND
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  _dash_(); // -
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
      SetColor("LT-BLUE");
    } else
    {
      SetColor("GREY1");
    }
  } else
  {
    SetColor("GREY2");
  }
  _ex_COLOR(); // !COLOR
  Push(a); // R>
  Pop(); // DROP
  LPLOT(); // LPLOT
  Push(0x1421);
  Push(0x7e64);
  RRND(); // RRND
  Push(0);
  Push(pp_STIME); // STIME
  D_ex_(); // D!
}


// ================================================
// 0xe9b9: WORD 'UNK_0xe9bb' codep=0x224c parp=0xe9bb
// ================================================

void UNK_0xe9bb() // UNK_0xe9bb
{
  BEEPON(); // BEEPON
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  RRND(); // RRND
  TONE(); // TONE
}


// ================================================
// 0xe9c7: WORD 'UNK_0xe9c9' codep=0x224c parp=0xe9c9
// ================================================

void UNK_0xe9c9() // UNK_0xe9c9
{
  unsigned short int i, imax, j, jmax;
  SetColor("GREY2");
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x1388);
  Push(0x7530);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0xe9bb(); // UNK_0xe9bb
    UNK_0xe955(); // UNK_0xe955
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
    UNK_0xe9bb(); // UNK_0xe9bb
    UNK_0xe955(); // UNK_0xe955
    j++;
  } while(j<jmax); // (LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xea05: WORD 'UNK_0xea07' codep=0x1d29 parp=0xea07
// ================================================
// 0xea07: db 0x00 0x00 '  '

// ================================================
// 0xea09: WORD 'UNK_0xea0b' codep=0x224c parp=0xea0b
// ================================================

void UNK_0xea0b() // UNK_0xea0b
{
  unsigned short int a;
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xea07); // UNK_0xea07
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0x0014);
  Push(Pop() * Pop()); // *
  a = Pop(); // >R
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  do
  {
    Push(0x640f); // IFIELD(UNK_0xe94b)
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(regsp)); // DUP
    Push(8);
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) Push(1); else Push(0); // NOT
    SWAP(); // SWAP
    Push(2);
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) Push(1); else Push(0); // 0=
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(a); // I
      Push(0x640e); // IFIELD(UNK_0xe950)
      Push(Read8(Pop())&0xFF); // C@
      Push(Pop() + Pop()); // +
      Push(0x0064);
      MIN(); // MIN
      Push(0x640e); // IFIELD(UNK_0xe950)
      C_ex_(); // C!
    }
    INEXT(); // INEXT
    _ask_FIRST(); // ?FIRST
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Pop(); // DROP
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xea07); // UNK_0xea07
  _ex__3(); // !_3
}


// ================================================
// 0xea69: WORD 'UNK_0xea6b' codep=0x1d29 parp=0xea6b
// ================================================
// 0xea6b: db 0x4a 0x00 'J '

// ================================================
// 0xea6d: WORD 'UNK_0xea6f' codep=0x1d29 parp=0xea6f
// ================================================
// 0xea6f: db 0x5e 0x00 '^ '

// ================================================
// 0xea71: WORD 'UNK_0xea73' codep=0x1d29 parp=0xea73
// ================================================
// 0xea73: db 0x00 0x00 '  '

// ================================================
// 0xea75: WORD 'UNK_0xea77' codep=0x1d29 parp=0xea77
// ================================================
// 0xea77: db 0x00 0x00 '  '

// ================================================
// 0xea79: WORD 'UNK_0xea7b' codep=0x1d29 parp=0xea7b
// ================================================
// 0xea7b: db 0x00 0x00 '  '

// ================================================
// 0xea7d: WORD 'UNK_0xea7f' codep=0x224c parp=0xea7f
// ================================================

void UNK_0xea7f() // UNK_0xea7f
{
  Push(pp__ask__gt_OP); // ?>OP
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    BEEP(); // BEEP
  }
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xea8f: WORD 'UNK_0xea91' codep=0x224c parp=0xea91
// ================================================

void UNK_0xea91() // UNK_0xea91
{
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() == 0) return;
  Push(0xc650); // probable 'U-PF'
  MODULE(); // MODULE
}


// ================================================
// 0xea9f: WORD 'UNK_0xeaa1' codep=0x224c parp=0xeaa1
// ================================================

void UNK_0xeaa1() // UNK_0xeaa1
{
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() == 0) return;
  Push(0xc610); // probable 'U-AC'
  MODULE(); // MODULE
}


// ================================================
// 0xeaaf: WORD 'UNK_0xeab1' codep=0x224c parp=0xeab1
// ================================================

void UNK_0xeab1() // UNK_0xeab1
{
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() == 0) return;
  Push(0xc5b6); // probable 'U-B'
  MODULE(); // MODULE
}


// ================================================
// 0xeabf: WORD 'UNK_0xeac1' codep=0x224c parp=0xeac1
// ================================================

void UNK_0xeac1() // UNK_0xeac1
{
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() == 0) return;
  Push(0xc73a); // probable 'U-SC'
  MODULE(); // MODULE
}


// ================================================
// 0xeacf: WORD 'UNK_0xead1' codep=0x224c parp=0xead1
// ================================================

void UNK_0xead1() // UNK_0xead1
{
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() == 0) return;
  Push(0xc785); // probable 'U-TD'
  MODULE(); // MODULE
}


// ================================================
// 0xeadf: WORD 'UNK_0xeae1' codep=0x224c parp=0xeae1
// ================================================

void UNK_0xeae1() // UNK_0xeae1
{
  Push(0xc7f3); // probable 'U-OP'
  MODULE(); // MODULE
}


// ================================================
// 0xeae9: WORD 'UNK_0xeaeb' codep=0x744d parp=0xeaeb
// ================================================
// 0xeaeb: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xeaee: WORD 'UNK_0xeaf0' codep=0x224c parp=0xeaf0
// ================================================

void UNK_0xeaf0() // UNK_0xeaf0
{
  Push(0xc081); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  _ex__3(); // !_3
  Push(0xc05f); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  _ex__3(); // !_3
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  _ex__3(); // !_3
  Push(0xc104); // probable '?SHIP-REPAIR'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  _ex__3(); // !_3
  Push(0xbf68); // probable '.SORD'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  _ex__3(); // !_3
  Push(0xc136); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  _ex__3(); // !_3
  Push(0xbf56); // probable '/STARDATE'
  Push(pp__i__dot_DATE); // '.DATE
  _ex__3(); // !_3
  Push(0xca8c); // probable '!'EXT'
  MODULE(); // MODULE
  Push(pp_LSYSEG); // LSYSEG
  Push(Read16(Pop())); // @
  Push(0x0070);
  FILE_st_(); // FILE<
  Push(pp_MSYSEG); // MSYSEG
  Push(Read16(Pop())); // @
  Push(0x0071);
  FILE_st_(); // FILE<
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
  Push(0x0072);
  FILE_st_(); // FILE<
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  _ex__3(); // !_3
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(7);
  Push(0x6403); // IFIELD(UNK_0xe946)
  Push(Read8(Pop())&0xFF); // C@
  Push(7);
  Push(Pop() & Pop()); // AND
  _dash_(); // -
  Push(pp_E_dash_USE); // E-USE
  _ex__3(); // !_3
  Push(0x6432); // IFIELD(UNK_0xeaeb)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_CARGO); // 10*CARGO
  D_ex_(); // D!
  Push(0xc776); // probable '<TDART'
  MODULE(); // MODULE
  Push(pp__ask_TV); // ?TV
  ON_3(); // ON_3
  Push(pp__ask_RECALL); // ?RECALL
  OFF(); // OFF
  Push(pp_E_dash_USE); // E-USE
  Push(Read16(Pop())); // @
  Push(7);
  Push(0xbdd8); // probable 'OV?ARTIFACT'
  MODULE(); // MODULE
  if (Pop() != 0)
  {
    Push(Pop()>>1); // 2/
  }
  Push(pp__dash_END); // -END
  _ex__3(); // !_3
  UNK_0xe9c9(); // UNK_0xe9c9
}


// ================================================
// 0xeba0: WORD 'UNK_0xeba2' codep=0x224c parp=0xeba2
// ================================================

void UNK_0xeba2() // UNK_0xeba2
{
  Push(0xd3dc); // probable '?FLIGHT-OK'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  UNK_0xeaf0(); // UNK_0xeaf0
  Push(0xd394); // probable 'OVFLT'
  MODULE(); // MODULE
  Push(0xc5a8); // probable 'I-TRANS'
  MODULE(); // MODULE
  UNK_0xea0b(); // UNK_0xea0b
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp__ask_FANLYZ); // ?FANLYZ
  _ex__3(); // !_3
  Push(0x0030);
  OVER(); // OVER
  _st_(); // <
  Push(0x0085);
  ROT(); // ROT
  _st_(); // <
  Push(Pop() + Pop()); // +
  Push(0x0032);
  Push(Pop() * Pop()); // *
  Push(0x0064);
  Push(Pop() + Pop()); // +
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  _ex__3(); // !_3
  Push(6);
  Push(pp_RECORD_n_); // RECORD#
  _ex__3(); // !_3
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  _ex__3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xebfa: WORD 'UNK_0xebfc' codep=0x1d29 parp=0xebfc
// ================================================
// 0xebfc: db 0x5e 0x00 '^ '

// ================================================
// 0xebfe: WORD '(|REGION)' codep=0xec0c parp=0xec0c
// ================================================
// 0xec0c: pop    word ptr [561C]
// 0xec10: pop    cx
// 0xec11: push   es
// 0xec12: mov    es,cx
// 0xec14: push   si
// 0xec15: push   di
// 0xec16: push   bp
// 0xec17: push   ds
// 0xec18: mov    dx,[5892]
// 0xec1c: shr    dx,1
// 0xec1e: shr    dx,1
// 0xec20: inc    dx
// 0xec21: inc    dx
// 0xec22: mov    bp,[586E]
// 0xec26: shr    bp,1
// 0xec28: xor    di,di
// 0xec2a: mov    ax,[5887]
// 0xec2e: mov    cx,ax
// 0xec30: mov    ax,cx
// 0xec32: pop    ds
// 0xec33: push   ds
// 0xec34: mov    bx,[5863]
// 0xec38: sub    bx,cx
// 0xec3a: inc    bx
// 0xec3b: shl    bx,1
// 0xec3d: add    bx,[563A]
// 0xec41: mov    si,[bx]
// 0xec43: add    si,bp
// 0xec45: mov    cx,dx
// 0xec47: mov    bx,[561C]
// 0xec4b: push   word ptr [5648]
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
// 0xec82: mov    ax,[55E6]
// 0xec86: mov    dx,[55D8]
// 0xec8a: mov    bx,[EBFC]
// 0xec8e: add    bx,03
// 0xec91: shl    bx,1
// 0xec93: add    bx,[563A]
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
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    SWAP(); // SWAP
    Pop(); // DROP
    Push(pp_BUF_dash_SEG); // BUF-SEG
    Push(Read16(Pop())); // @
    Push(0xa000);
    Push((Pop()==Pop())?1:0); // =
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
// 0xeceb: WORD 'UNK_0xeced' codep=0x1d29 parp=0xeced
// ================================================
// 0xeced: db 0x00 0x00 '  '

// ================================================
// 0xecef: WORD 'UNK_0xecf1' codep=0x1d29 parp=0xecf1
// ================================================
// 0xecf1: db 0x07 0x7a 0x7e 0x44 0x54 0x5f 0x69 0x82 0x92 0x2e 0x32 0x42 0x57 0x38 0x43 0x15 0x24 0x38 0x40 0x76 0x87 0x5f 0x69 0x0d 0x15 0x57 0x63 0x48 0x50 ' z~DT_i  .2BW8C $8@v _i  WcHP'

// ================================================
// 0xed0e: WORD 'UNK_0xed10' codep=0x224c parp=0xed10
// ================================================

void UNK_0xed10() // UNK_0xed10
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop()*2); // 2*
    Push(0x0050);
    SWAP(); // SWAP
    _dash_(); // -
    Push(0x00c7);
    POS_dot_(); // POS.
    CTINIT(); // CTINIT
    Push(Read16(regsp)); // DUP
    Push(Pop()-1); // 1-
    Push(Read8(Pop())&0xFF); // C@
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xed38: WORD 'UNK_0xed3a' codep=0x1d29 parp=0xed3a
// ================================================
// 0xed3a: db 0x07 0x00 0x46 0xa9 '  F '

// ================================================
// 0xed3e: WORD 'UNK_0xed40' codep=0x224c parp=0xed40
// ================================================

void UNK_0xed40() // UNK_0xed40
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xed3a); // UNK_0xed3a
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xed4c: WORD 'UNK_0xed4e' codep=0x224c parp=0xed4e
// ================================================

void UNK_0xed4e() // UNK_0xed4e
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x9c40); Push(0x0000);
  D_plus_(); // D+
  Push(pp_UNK_0xed3a); // UNK_0xed3a
  D_ex_(); // D!
}


// ================================================
// 0xed60: WORD 'UNK_0xed62' codep=0x224c parp=0xed62
// ================================================

void UNK_0xed62() // UNK_0xed62
{
  UNK_0x3f3b("PERSONNEL");
}


// ================================================
// 0xed70: WORD 'UNK_0xed72' codep=0x224c parp=0xed72
// ================================================

void UNK_0xed72() // UNK_0xed72
{
  UNK_0x3f3b("CREW ASSIGNMENT");
}


// ================================================
// 0xed86: WORD 'UNK_0xed88' codep=0x224c parp=0xed88
// ================================================

void UNK_0xed88() // UNK_0xed88
{
  UNK_0x3f3b("SHIP CONFIGURATION");
}


// ================================================
// 0xed9f: WORD 'UNK_0xeda1' codep=0x224c parp=0xeda1
// ================================================

void UNK_0xeda1() // UNK_0xeda1
{
  UNK_0x3f3b("TRADE DEPOT");
}


// ================================================
// 0xedb1: WORD 'UNK_0xedb3' codep=0x224c parp=0xedb3
// ================================================

void UNK_0xedb3() // UNK_0xedb3
{
  UNK_0x3f3b("BANK");
}


// ================================================
// 0xedbc: WORD 'UNK_0xedbe' codep=0x224c parp=0xedbe
// ================================================

void UNK_0xedbe() // UNK_0xedbe
{
  UNK_0x3f3b("OPERATIONS");
}


// ================================================
// 0xedcd: WORD 'UNK_0xedcf' codep=0x224c parp=0xedcf
// ================================================

void UNK_0xedcf() // UNK_0xedcf
{
  UNK_0x3f3b("DOCKING BAY");
}


// ================================================
// 0xeddf: WORD 'UNK_0xede1' codep=0x224c parp=0xede1
// ================================================

void UNK_0xede1() // UNK_0xede1
{
  Push(0x00c7);
  Push(0x002c);
  Push(0x00c0);
  Push(0x0072);
  SetColor("BLACK");
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
    UNK_0xed62(); // UNK_0xed62
    break;
  case 2:
    UNK_0xed72(); // UNK_0xed72
    break;
  case 3:
    UNK_0xed88(); // UNK_0xed88
    break;
  case 4:
    UNK_0xeda1(); // UNK_0xeda1
    break;
  case 5:
    UNK_0xedb3(); // UNK_0xedb3
    break;
  case 6:
    UNK_0xedbe(); // UNK_0xedbe
    break;
  case 7:
    UNK_0xedcf(); // UNK_0xedcf
    break;
  default:
    UNK_0xede1(); // UNK_0xede1
    break;

  }
}

// ================================================
// 0xee27: WORD 'UNK_0xee29' codep=0x224c parp=0xee29
// ================================================

void UNK_0xee29() // UNK_0xee29
{
  _at_CRS(); // @CRS
  Push(pp_UNK_0xeced); // UNK_0xeced
  Push(Read16(Pop())); // @
  _ro__dot_DOOR_rc_(); // (.DOOR) case
  UNK_0xed10(); // UNK_0xed10
  _ex_CRS(); // !CRS
}


// ================================================
// 0xee37: WORD 'UNK_0xee39' codep=0x224c parp=0xee39
// ================================================

void UNK_0xee39() // UNK_0xee39
{
  unsigned short int a;
  Push(4);
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xecf1); // UNK_0xecf1
  Push(Pop()+1); // 1+
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  WITHIN(); // WITHIN
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(a); // I
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // R>
  Push(3);
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xee6d: WORD 'UNK_0xee6f' codep=0x224c parp=0xee6f
// ================================================

void UNK_0xee6f() // UNK_0xee6f
{
  unsigned short int i, imax;
  Push(pp_UNK_0xeced); // UNK_0xeced
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(pp_UNK_0xecf1); // UNK_0xecf1
    Push(Read8(Pop())&0xFF); // C@
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      UNK_0xee39(); // UNK_0xee39
      if (Pop() != 0)
      {
        Push(i); // I
        Push(Pop()+1); // 1+
        Push(pp_UNK_0xeced); // UNK_0xeced
        _ex__3(); // !_3
        UNK_0xee29(); // UNK_0xee29
        imax = i; // LEAVE
      }
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  Push(pp_UNK_0xeced); // UNK_0xeced
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  UNK_0xee39(); // UNK_0xee39
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(pp_UNK_0xeced); // UNK_0xeced
  OFF(); // OFF
  UNK_0xee29(); // UNK_0xee29
}


// ================================================
// 0xeeb3: WORD 'UNK_0xeeb5' codep=0x1d29 parp=0xeeb5
// ================================================
// 0xeeb5: db 0x11 0x7d 0x7d 0x3f 0x60 0x7d 0x00 0x02 0x7d 0x77 0x60 0x71 0x9e 0x00 0x03 0x77 0x6a 0x71 0x87 0xb9 0x00 0x03 0x6a 0x59 0x87 0x93 0x29 0x01 0x03 0x59 0x4c 0x93 0x8e 0xdb 0xfe 0x01 0x4c 0x3d 0x8e 0x7e 0xc7 0xff 0x01 0x3d 0x33 0x7e 0x6d 0xf3 0xff 0x01 0x33 0x2e 0x6d 0x54 0x1e 0x00 0x01 0x2e 0x2e 0x54 0x46 0x2e 0x00 0x00 0x2e 0x36 0x46 0x24 0x3e 0x00 0x00 0x36 0x3c 0x24 0x1a 0x4b 0x00 0x00 0x3c 0x4a 0x1a 0x0c 0x56 0x00 0x00 0x4a 0x56 0x0c 0x06 0x62 0x00 0x00 0x56 0x62 0x06 0x0c 0x4a 0x00 0x02 0x62 0x6f 0x0c 0x19 0x56 0x00 0x02 0x6f 0x77 0x19 0x2a 0x64 0x00 0x02 0x77 0x7d 0x2a 0x3f 0x6b 0x00 0x02 ' }}?`}  }w`q   wjq    jY  )  YL     L= ~   =3~m   3.mT   ..TF.  .6F$>  6<$ K  <J  V  JV  b  Vb  J  bo  V  ow *d  w}*?k  '

// ================================================
// 0xef2d: WORD 'UNK_0xef2f' codep=0x224c parp=0xef2f
// ================================================

void UNK_0xef2f() // UNK_0xef2f
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
// 0xef41: WORD 'UNK_0xef43' codep=0x224c parp=0xef43
// ================================================

void UNK_0xef43() // UNK_0xef43
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
  Push(a); // I
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // R>
  Push(3);
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
}


// ================================================
// 0xef63: WORD 'UNK_0xef65' codep=0x224c parp=0xef65
// ================================================

void UNK_0xef65() // UNK_0xef65
{
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xef73: WORD 'UNK_0xef75' codep=0x224c parp=0xef75
// ================================================

void UNK_0xef75() // UNK_0xef75
{
  unsigned short int a;
  a = Pop(); // >R
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(a); // I
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // R>
  Push(6);
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(1);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    MIN(); // MIN
    return;
  }
  MAX(); // MAX
}


// ================================================
// 0xef9b: WORD 'UNK_0xef9d' codep=0x224c parp=0xef9d
// ================================================

void UNK_0xef9d() // UNK_0xef9d
{
  unsigned short int a;
  a = Pop(); // >R
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(a); // I
  Push(4);
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(a); // I
  UNK_0xef43(); // UNK_0xef43
  SWAP(); // SWAP
  UNK_0xef2f(); // UNK_0xef2f
  Push(a); // R>
  Push(6);
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(1);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    MIN(); // MIN
    return;
  }
  MAX(); // MAX
}


// ================================================
// 0xefd3: WORD 'UNK_0xefd5' codep=0x224c parp=0xefd5
// ================================================

void UNK_0xefd5() // UNK_0xefd5
{
  unsigned short int a;
  a = Pop(); // >R
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // R>
  Push(6);
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(2);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    MIN(); // MIN
    return;
  }
  MAX(); // MAX
}


// ================================================
// 0xeff9: WORD 'UNK_0xeffb' codep=0x224c parp=0xeffb
// ================================================

void UNK_0xeffb() // UNK_0xeffb
{
  unsigned short int a;
  a = Pop(); // >R
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(a); // I
  UNK_0xef43(); // UNK_0xef43
  UNK_0xef2f(); // UNK_0xef2f
  Push(a); // I
  Push(4);
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(a); // R>
  Push(6);
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(2);
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    MIN(); // MIN
    return;
  }
  MAX(); // MAX
}


// ================================================
// 0xf02f: WORD 'UNK_0xf031' codep=0x224c parp=0xf031
// ================================================

void UNK_0xf031() // UNK_0xf031
{
  Push(Read16(regsp)); // DUP
  Push(Pop()+2); // 2+
  UNK_0xef65(); // UNK_0xef65
  if (Pop() != 0)
  {
    UNK_0xef75(); // UNK_0xef75
  } else
  {
    UNK_0xef9d(); // UNK_0xef9d
  }
  Push(pp_XBLT); // XBLT
  _ex__3(); // !_3
}


// ================================================
// 0xf049: WORD 'UNK_0xf04b' codep=0x224c parp=0xf04b
// ================================================

void UNK_0xf04b() // UNK_0xf04b
{
  Push(Read16(regsp)); // DUP
  UNK_0xef65(); // UNK_0xef65
  if (Pop() != 0)
  {
    UNK_0xefd5(); // UNK_0xefd5
  } else
  {
    UNK_0xeffb(); // UNK_0xeffb
  }
  Push(pp_YBLT); // YBLT
  _ex__3(); // !_3
}


// ================================================
// 0xf061: WORD 'UNK_0xf063' codep=0x224c parp=0xf063
// ================================================

void UNK_0xf063() // UNK_0xf063
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  MIN(); // MIN
  Push(a); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // R>
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  MAX(); // MAX
  Push(Pop()+1); // 1+
  WITHIN(); // WITHIN
}


// ================================================
// 0xf083: WORD 'UNK_0xf085' codep=0x224c parp=0xf085
// ================================================

void UNK_0xf085() // UNK_0xf085
{
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  UNK_0xf063(); // UNK_0xf063
}


// ================================================
// 0xf08f: WORD 'UNK_0xf091' codep=0x224c parp=0xf091
// ================================================

void UNK_0xf091() // UNK_0xf091
{
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
  UNK_0xf063(); // UNK_0xf063
}


// ================================================
// 0xf09d: WORD 'UNK_0xf09f' codep=0x1d29 parp=0xf09f
// ================================================
// 0xf09f: db 0x00 0x00 '  '

// ================================================
// 0xf0a1: WORD 'UNK_0xf0a3' codep=0x1d29 parp=0xf0a3
// ================================================
// 0xf0a3: db 0xff 0xff '  '

// ================================================
// 0xf0a5: WORD 'UNK_0xf0a7' codep=0x1d29 parp=0xf0a7
// ================================================
// 0xf0a7: db 0x00 0x03 0x03 0x00 0x02 0x05 0x00 0x02 0x02 0xff 0x03 0x03 '            '

// ================================================
// 0xf0b3: WORD 'UNK_0xf0b5' codep=0x1d29 parp=0xf0b5
// ================================================
// 0xf0b5: db 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x3e 0xba 0x05 0x0a 0xc0 0x06 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x1d 0xba 0x04 0x0a 0x00 0x02 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x5c 0xba 0x01 0x0a 0x80 0x00 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x70 0x00 0x2d 0x54 0x0d 0x06 0xc0 0x04 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x20 0x00 0x1c 0x30 0x06 0x04 0x80 0x01 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x20 0x00 0x18 0x30 0x02 0x04 0x80 0x01 0x1f 0x1c 0x87 0x0f 0xc0 0xc1 0xf8 0x00 0x1d 0xba 0x04 0x0a 0x00 0x02 0x1f 0x1c 0x87 0x0f 0xc0 0xc1 0xf8 0x00 0x5c 0xba 0x01 0x0a 0x80 0x00 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x70 0x00 0x5a 0x54 0x05 0x0c 0x40 0x86 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x20 0x00 0x1c 0x18 0x03 0x04 0x00 0x03 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x20 0x00 0x0c 0x18 0x02 0x04 0x00 0x03 '     A  >          A             A  \           p -T             0             0                          \           p ZT  @                             '

// ================================================
// 0xf14f: WORD 'UNK_0xf151' codep=0x1d29 parp=0xf151
// ================================================
// 0xf151: db 0xc4 0x00 0x02 0x03 0x1e 0x01 0x01 0x04 0x14 0x00 0x00 0x05 0xe2 0xff 0x01 0x04 0x3c 0x00 0x02 0x03 0xc4 0x00 0xfe 0x08 0x1e 0x01 0xff 0x09 0x14 0x00 0x00 0x0a 0xe2 0xff 0xff 0x09 0x3c 0x00 0xfe 0x08 0x9c 0x03 0x00 0x06 0x9c 0x03 0x00 0x07 0x9c 0xfd 0x00 0x01 0x9c 0xfd 0x00 0x02 '                <                   <                   '

// ================================================
// 0xf189: WORD 'UNK_0xf18b' codep=0x224c parp=0xf18b
// ================================================

void UNK_0xf18b() // UNK_0xf18b
{
  Push(pp_UNK_0xf0b5); // UNK_0xf0b5
  Push(0x000c);
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x8040);
  Push(Pop() ^ Pop()); // XOR
  Push(pp_UNK_0xf0b5); // UNK_0xf0b5
  Push(0x000c);
  Push(Pop() + Pop()); // +
  _ex__3(); // !_3
}


// ================================================
// 0xf1a7: WORD 'UNK_0xf1a9' codep=0x224c parp=0xf1a9
// ================================================

void UNK_0xf1a9() // UNK_0xf1a9
{
  _at_CRS(); // @CRS
  Push(pp_UNK_0xf0a7); // UNK_0xf0a7
  Push(pp_UNK_0xf09f); // UNK_0xf09f
  Push(Read16(Pop())); // @
  Push(3);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  _ex_COLOR(); // !COLOR
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_WBLT); // WBLT
  _ex__3(); // !_3
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  Push(-2);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  Push(2);
  Push(pp_LBLT); // LBLT
  _ex__3(); // !_3
  Push(pp_UNK_0xf0a3); // UNK_0xf0a3
  Push(pp_ABLT); // ABLT
  _ex__3(); // !_3
  _co_BLT_cc_(); // {BLT}
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf1e7: WORD 'UNK_0xf1e9' codep=0x224c parp=0xf1e9
// ================================================

void UNK_0xf1e9() // UNK_0xf1e9
{
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex__3(); // !_3
  Push(9);
  Push(pp_WBLT); // WBLT
  _ex__3(); // !_3
  Push(0x000c);
  Push(pp_LBLT); // LBLT
  _ex__3(); // !_3
  CTINIT(); // CTINIT
  Push(pp_UNK_0xf0b5); // UNK_0xf0b5
  Push(pp_ABLT); // ABLT
  _ex__3(); // !_3
  Push(pp_UNK_0xea6b); // UNK_0xea6b
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xea6f); // UNK_0xea6f
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xebfc); // UNK_0xebfc
  _ex__3(); // !_3
  POS_dot_(); // POS.
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
  Push(0);
  _v_REGION(); // |REGION
  _co_BLT_cc_(); // {BLT}
  Push(pp_UNK_0xf09f); // UNK_0xf09f
  OFF(); // OFF
  UNK_0xf1a9(); // UNK_0xf1a9
}


// ================================================
// 0xf229: WORD 'UNK_0xf22b' codep=0x224c parp=0xf22b
// ================================================

void UNK_0xf22b() // UNK_0xf22b
{
  Push(0);
  Push(0x03e8);
  Push(1);
  _gt_SND(); // >SND
}


// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  unsigned short int i, imax, a;
  Push(pp_UNK_0xea73); // UNK_0xea73
  OFF(); // OFF
  Push(pp_UNK_0xeeb5); // UNK_0xeeb5
  Push(Read8(Pop())&0xFF); // C@
  Push(7);
  Push(Pop() * Pop()); // *
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_UNK_0xeeb5); // UNK_0xeeb5
    Push(Pop()+1); // 1+
    Push(i); // I
    Push(Pop() + Pop()); // +
    a = Pop(); // >R
    Push(a); // I
    UNK_0xf085(); // UNK_0xf085
    Push(Pop()*2); // 2*
    Push(a); // I
    UNK_0xf091(); // UNK_0xf091
    Push(Pop() + Pop()); // +
    Push(Read16(regsp)); // DUP
    Push(2);
    Push(Pop() & Pop()); // AND
    Push(pp_UNK_0xea77); // UNK_0xea77
    Push(Read16(Pop())); // @
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(a); // I
      UNK_0xf031(); // UNK_0xf031
    }
    Push(1);
    Push(Pop() & Pop()); // AND
    Push(pp_UNK_0xea7b); // UNK_0xea7b
    Push(Read16(Pop())); // @
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(a); // I
      UNK_0xf04b(); // UNK_0xf04b
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
// 0xf291: WORD 'UNK_0xf293' codep=0x224c parp=0xf293
// ================================================

void UNK_0xf293() // UNK_0xf293
{
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
  Push(1);
  _v_REGION(); // |REGION
}


// ================================================
// 0xf29f: WORD 'UNK_0xf2a1' codep=0x224c parp=0xf2a1
// ================================================

void UNK_0xf2a1() // UNK_0xf2a1
{
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
  Push(0);
  _v_REGION(); // |REGION
  _co_BLT_cc_(); // {BLT}
  UNK_0xf1a9(); // UNK_0xf1a9
}


// ================================================
// 0xf2b1: WORD 'UNK_0xf2b3' codep=0x224c parp=0xf2b3
// ================================================

void UNK_0xf2b3() // UNK_0xf2b3
{
  Push(0x000e);
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xf0b5); // UNK_0xf0b5
  Push(Pop() + Pop()); // +
  Push(pp_ABLT); // ABLT
  _ex__3(); // !_3
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  _2SWAP(); // 2SWAP
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  UNK_0xf239(); // UNK_0xf239
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  _2SWAP(); // 2SWAP
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xebfc); // UNK_0xebfc
  _ex__3(); // !_3
  DISPLAY(); // DISPLAY
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xf293(); // UNK_0xf293
  POS_dot_(); // POS.
  UNK_0xf2a1(); // UNK_0xf2a1
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    UNK_0xf22b(); // UNK_0xf22b
  }
  ABS(); // ABS
  Push(3);
  Push(4);
  _star__slash_(); // */
  MS(); // MS
}


// ================================================
// 0xf309: WORD 'UNK_0xf30b' codep=0x224c parp=0xf30b
// ================================================

void UNK_0xf30b() // UNK_0xf30b
{
  unsigned short int i, imax, a;
  UNK_0xed4e(); // UNK_0xed4e
  Push(pp_UNK_0xf09f); // UNK_0xf09f
  _ex__3(); // !_3
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_UNK_0xf151); // UNK_0xf151
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Push(i); // I
    Push(4);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    a = Pop(); // >R
    Push(a); // I
    _plus__dash__at_(); // +-@
    Push(a); // I
    Push(Pop()+1); // 1+
    _plus__dash__at_(); // +-@
    Push(a); // I
    Push(Pop()+2); // 2+
    _plus__dash__at_(); // +-@
    Push(a); // R>
    Push(3);
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    UNK_0xf2b3(); // UNK_0xf2b3
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  UNK_0xee6f(); // UNK_0xee6f
}


// ================================================
// 0xf349: WORD 'UNK_0xf34b' codep=0x224c parp=0xf34b
// ================================================

void UNK_0xf34b() // UNK_0xf34b
{
  Push(-1);
  Push(pp_UNK_0xea77); // UNK_0xea77
  _ex__3(); // !_3
  Push(0);
  Push(5);
  Push(1);
  UNK_0xf30b(); // UNK_0xf30b
  Push(pp_UNK_0xea77); // UNK_0xea77
  OFF(); // OFF
}


// ================================================
// 0xf35f: WORD 'UNK_0xf361' codep=0x224c parp=0xf361
// ================================================

void UNK_0xf361() // UNK_0xf361
{
  Push(-1);
  Push(pp_UNK_0xea77); // UNK_0xea77
  _ex__3(); // !_3
  Push(0x0014);
  Push(5);
  Push(2);
  UNK_0xf30b(); // UNK_0xf30b
  Push(pp_UNK_0xea77); // UNK_0xea77
  OFF(); // OFF
}


// ================================================
// 0xf377: WORD 'UNK_0xf379' codep=0x224c parp=0xf379
// ================================================

void UNK_0xf379() // UNK_0xf379
{
  Push(-1);
  Push(pp_UNK_0xea7b); // UNK_0xea7b
  _ex__3(); // !_3
  Push(0x0028);
  Push(2);
  Push(3);
  UNK_0xf30b(); // UNK_0xf30b
  Push(pp_UNK_0xea7b); // UNK_0xea7b
  OFF(); // OFF
}


// ================================================
// 0xf38f: WORD 'UNK_0xf391' codep=0x224c parp=0xf391
// ================================================

void UNK_0xf391() // UNK_0xf391
{
  Push(-1);
  Push(pp_UNK_0xea7b); // UNK_0xea7b
  _ex__3(); // !_3
  Push(0x0030);
  Push(2);
  Push(0);
  UNK_0xf30b(); // UNK_0xf30b
  Push(pp_UNK_0xea7b); // UNK_0xea7b
  OFF(); // OFF
}


// ================================================
// 0xf3a7: WORD 'UNK_0xf3a9' codep=0x224c parp=0xf3a9
// ================================================

void UNK_0xf3a9() // UNK_0xf3a9
{
  unsigned short int i, imax;
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(pp_ABLT); // ABLT
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf0b5); // UNK_0xf0b5
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0);
    Push(0x05dc);
    RRND(); // RRND
    if (Pop() == 0) Push(1); else Push(0); // 0=
    UNK_0xed40(); // UNK_0xed40
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(4);
      Push(0);

      i = Pop();
      imax = Pop();
      do // (DO)
      {
        UNK_0xf18b(); // UNK_0xf18b
        DISPLAY(); // DISPLAY
        UNK_0xf293(); // UNK_0xf293
        UNK_0xf2a1(); // UNK_0xf2a1
        Push(0x0032);
        MS(); // MS
        UNK_0xf18b(); // UNK_0xf18b
        DISPLAY(); // DISPLAY
        UNK_0xf293(); // UNK_0xf293
        UNK_0xf2a1(); // UNK_0xf2a1
        UNK_0xf22b(); // UNK_0xf22b
        Push(0x0096);
        MS(); // MS
        i++;
      } while(i<imax); // (LOOP)

    }
    return;
  }
  Push(pp_UNK_0xf09f); // UNK_0xf09f
  OFF(); // OFF
  Push2Words("NULL");
  Push2Words("NULL");
  UNK_0xf2b3(); // UNK_0xf2b3
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
  Push(0xbe9d); // probable '@.HYBRID'
  MODULE(); // MODULE
  Push(0);
  Push(0x0063);
  POS_dot_(); // POS.
  Push(0x0031);
  Push(0xbe9d); // probable '@.HYBRID'
  MODULE(); // MODULE
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    UNK_0xf1e9(); // UNK_0xf1e9
  }
  UNK_0xede1(); // UNK_0xede1
  Pop(); Pop(); // 2DROP
  UNK_0xee29(); // UNK_0xee29
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xf1e9(); // UNK_0xf1e9
}


// ================================================
// 0xf45a: WORD 'DO-ROOM' codep=0x4a4f parp=0xf466
// ================================================

void DO_dash_ROOM() // DO-ROOM
{
  switch(Pop()) // DO-ROOM
  {
  case 1:
    UNK_0xea91(); // UNK_0xea91
    break;
  case 2:
    UNK_0xeaa1(); // UNK_0xeaa1
    break;
  case 3:
    UNK_0xeac1(); // UNK_0xeac1
    break;
  case 4:
    UNK_0xead1(); // UNK_0xead1
    break;
  case 5:
    UNK_0xeab1(); // UNK_0xeab1
    break;
  case 6:
    UNK_0xeae1(); // UNK_0xeae1
    break;
  case 7:
    UNK_0xeba2(); // UNK_0xeba2
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf486: WORD 'UNK_0xf488' codep=0x224c parp=0xf488
// ================================================

void UNK_0xf488() // UNK_0xf488
{
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xea6b); // UNK_0xea6b
  _ex__3(); // !_3
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xea6f); // UNK_0xea6f
  _ex__3(); // !_3
  Push(pp_UNK_0xeced); // UNK_0xeced
  Push(Read16(Pop())); // @
  DO_dash_ROOM(); // DO-ROOM case
  Push(pp_UNK_0xeced); // UNK_0xeced
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  PORT_dash_PIC(); // PORT-PIC
  UNK_0xed4e(); // UNK_0xed4e
}


// ================================================
// 0xf4ac: WORD 'XWALK' codep=0x4a4f parp=0xf4b6
// ================================================

void XWALK() // XWALK
{
  switch(Pop()) // XWALK
  {
  case 1:
    UNK_0xf34b(); // UNK_0xf34b
    break;
  case 65535:
    UNK_0xf361(); // UNK_0xf361
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
    UNK_0xf379(); // UNK_0xf379
    break;
  case 65535:
    UNK_0xf391(); // UNK_0xf391
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
  UNK_0xed4e(); // UNK_0xed4e
  PORT_dash_PIC(); // PORT-PIC
  do
  {
    XYSCAN(); // XYSCAN
    _2DUP(); // 2DUP
    XWALK(); // XWALK case
    YWALK(); // YWALK case
    Push(Pop() | Pop()); // OR
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      UNK_0xf3a9(); // UNK_0xf3a9
    }
    _ask_TRIG(); // ?TRIG
    if (Pop() != 0)
    {
      UNK_0xf488(); // UNK_0xf488
      _i_KEY(); // 'KEY
      Pop(); // DROP
    }
  } while(1);
}

// 0xf50c: db 0x50 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x50 0x4f 0x52 0x54 0x4d 0x45 0x4e 0x55 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x5f 0x32 0x31 0x39 0x30 0x72 0x20 0x43 0x48 0x4b 0x46 0x4c 0x49 0x47 0x48 0x54 0x2d 0x4f 0x56 0x20 0x2d 0x00 'PM-VOC__________________________for PORTMENU----------------- )_2190r CHKFLIGHT-OV - '

