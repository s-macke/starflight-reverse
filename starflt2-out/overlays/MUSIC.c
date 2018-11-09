// ====== OVERLAY 'MUSIC' ======
// store offset = 0xeb60
// overlay size   = 0x0a00

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEB76  codep:0x2214 wordp:0xeb76 size:0x0002 C-string:'WEB76'
//           WEB7A  codep:0x2214 wordp:0xeb7a size:0x0002 C-string:'WEB7A'
//           WEB7E  codep:0x2214 wordp:0xeb7e size:0x0002 C-string:'WEB7E'
//           WEB82  codep:0x2214 wordp:0xeb82 size:0x0002 C-string:'WEB82'
//           WEB86  codep:0x2214 wordp:0xeb86 size:0x0002 C-string:'WEB86'
//           WEB8A  codep:0x2214 wordp:0xeb8a size:0x0002 C-string:'WEB8A'
//           WEB8E  codep:0x2214 wordp:0xeb8e size:0x0002 C-string:'WEB8E'
//           WEB92  codep:0x2214 wordp:0xeb92 size:0x0002 C-string:'WEB92'
//           WEB96  codep:0x2214 wordp:0xeb96 size:0x0002 C-string:'WEB96'
//           WEB9A  codep:0x2214 wordp:0xeb9a size:0x0002 C-string:'WEB9A'
//           WEB9E  codep:0x2214 wordp:0xeb9e size:0x0002 C-string:'WEB9E'
//           WEBA2  codep:0x2214 wordp:0xeba2 size:0x0002 C-string:'WEBA2'
//           WEBA6  codep:0x2214 wordp:0xeba6 size:0x0002 C-string:'WEBA6'
//           WEBAA  codep:0x1d29 wordp:0xebaa size:0x0002 C-string:'WEBAA'
//           WEBAE  codep:0x224c wordp:0xebae size:0x0006 C-string:'WEBAE'
//           WEBB6  codep:0x224c wordp:0xebb6 size:0x0006 C-string:'WEBB6'
//           WEBBE  codep:0x224c wordp:0xebbe size:0x0006 C-string:'WEBBE'
//           WEBC6  codep:0x224c wordp:0xebc6 size:0x0006 C-string:'WEBC6'
//           WEBCE  codep:0x224c wordp:0xebce size:0x01c9 C-string:'WEBCE'
//            RND1  codep:0x1d29 wordp:0xeda0 size:0x000a C-string:'RND1'
//            RND2  codep:0x1d29 wordp:0xedb3 size:0x000a C-string:'RND2'
//            RND3  codep:0x1d29 wordp:0xedc6 size:0x000a C-string:'RND3'
//              P6  codep:0x1d29 wordp:0xedd7 size:0x0014 C-string:'P6'
//           GLISS  codep:0x1d29 wordp:0xedf5 size:0x0016 C-string:'GLISS'
//              P1  codep:0x1d29 wordp:0xee12 size:0x001a C-string:'P1'
//              R,  codep:0x224c wordp:0xee33 size:0x000a C-string:'R_co_'
//           0SONG  codep:0x1d29 wordp:0xee47 size:0x000e C-string:'_0SONG'
//              P9  codep:0x1d29 wordp:0xee5c size:0x0006 C-string:'P9'
//           1SONG  codep:0x1d29 wordp:0xee6c size:0x0005 C-string:'_1SONG'
//             P10  codep:0x1d29 wordp:0xee79 size:0x0006 C-string:'P10'
//           2SONG  codep:0x1d29 wordp:0xee89 size:0x001a C-string:'_2SONG'
//           WEEA5  codep:0x1d29 wordp:0xeea5 size:0x0002 C-string:'WEEA5'
//           WEEA9  codep:0x224c wordp:0xeea9 size:0x0016 C-string:'WEEA9'
//           WEEC1  codep:0x224c wordp:0xeec1 size:0x0014 C-string:'WEEC1'
//           WEED7  codep:0x224c wordp:0xeed7 size:0x0020 C-string:'WEED7'
//           WEEF9  codep:0x224c wordp:0xeef9 size:0x0030 C-string:'WEEF9'
//           WEF2B  codep:0x224c wordp:0xef2b size:0x002c C-string:'WEF2B'
//           WEF59  codep:0x224c wordp:0xef59 size:0x0012 C-string:'WEF59'
//         INITMUS  codep:0x224c wordp:0xef77 size:0x0032 C-string:'INITMUS'
//           HIMUS  codep:0x224c wordp:0xefb3 size:0x001c C-string:'HIMUS'
//           WEFD1  codep:0x224c wordp:0xefd1 size:0x0010 C-string:'WEFD1'
//           WEFE3  codep:0x224c wordp:0xefe3 size:0x0026 C-string:'WEFE3'
//           WF00B  codep:0x224c wordp:0xf00b size:0x000e C-string:'WF00B'
//           WF01B  codep:0x224c wordp:0xf01b size:0x0010 C-string:'WF01B'
//           WF02D  codep:0x1d29 wordp:0xf02d size:0x0004 C-string:'WF02D'
//           WF033  codep:0x224c wordp:0xf033 size:0x003c C-string:'WF033'
//           WF071  codep:0x224c wordp:0xf071 size:0x0044 C-string:'WF071'
//           WF0B7  codep:0x224c wordp:0xf0b7 size:0x0006 C-string:'WF0B7'
//           WF0BF  codep:0x224c wordp:0xf0bf size:0x0014 C-string:'WF0BF'
//           WF0D5  codep:0x224c wordp:0xf0d5 size:0x0088 C-string:'WF0D5'
//           !VPAL  codep:0x224c wordp:0xf167 size:0x001e C-string:'StoreVPAL'
//         SETABLT  codep:0x224c wordp:0xf191 size:0x002e C-string:'SETABLT'
//            EGAT  codep:0x2214 wordp:0xf1c8 size:0x0010 C-string:'EGAT'
//            EGAB  codep:0x2214 wordp:0xf1e1 size:0x0010 C-string:'EGAB'
//            VGAS  codep:0x2214 wordp:0xf1fa size:0x000d C-string:'VGAS'
//           WF209  codep:0x224c wordp:0xf209 size:0x0012 C-string:'WF209'
//           WF21D  codep:0x224c wordp:0xf21d size:0x003a C-string:'WF21D'
//           WF259  codep:0x1d29 wordp:0xf259 size:0x0002 C-string:'WF259'
//           WF25D  codep:0x1d29 wordp:0xf25d size:0x0002 C-string:'WF25D'
//           WF261  codep:0x1d29 wordp:0xf261 size:0x0002 C-string:'WF261'
//           WF265  codep:0x1d29 wordp:0xf265 size:0x0002 C-string:'WF265'
//           WF269  codep:0x1d29 wordp:0xf269 size:0x0002 C-string:'WF269'
//           PARAS  codep:0x1d29 wordp:0xf275 size:0x0008 C-string:'PARAS'
//           WF27F  codep:0x224c wordp:0xf27f size:0x0012 C-string:'WF27F'
//              @K  codep:0xf298 wordp:0xf298 size:0x0008 C-string:'GetK'
//        ?ALREADY  codep:0xf2ad wordp:0xf2ad size:0x0012 C-string:'IsALREADY'
//           WF2C1  codep:0x224c wordp:0xf2c1 size:0x0023 C-string:'WF2C1'
//           WF2E6  codep:0x224c wordp:0xf2e6 size:0x000c C-string:'WF2E6'
//           WF2F4  codep:0x224c wordp:0xf2f4 size:0x0016 C-string:'WF2F4'
//           WF30C  codep:0x224c wordp:0xf30c size:0x0012 C-string:'WF30C'
//           WF320  codep:0x224c wordp:0xf320 size:0x0036 C-string:'WF320'
//           WF358  codep:0x224c wordp:0xf358 size:0x002e C-string:'WF358'
//           WF388  codep:0x224c wordp:0xf388 size:0x001c C-string:'WF388'
//     TANDY-ALLOC  codep:0x224c wordp:0xf3b4 size:0x003c C-string:'TANDY_dash_ALLOC'
//           WF3F2  codep:0x224c wordp:0xf3f2 size:0x001a C-string:'WF3F2'
//           WF40E  codep:0x224c wordp:0xf40e size:0x0020 C-string:'WF40E'
//           WF430  codep:0x224c wordp:0xf430 size:0x003a C-string:'WF430'
//   SPLASH.SCREEN  codep:0x224c wordp:0xf47c size:0x0054 C-string:'SPLASH_dot_SCREEN'
//          INTROS  codep:0x224c wordp:0xf4db size:0x0000 C-string:'INTROS'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_AX; // AX
extern const unsigned short int cc_BX; // BX
extern const unsigned short int cc_DS; // DS
extern const unsigned short int cc_MUSSEG; // MUSSEG
extern const unsigned short int cc__16K; // 16K
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_SYSK; // SYSK
extern const unsigned short int pp_TANDY; // TANDY
extern const unsigned short int pp_BMAP; // BMAP
extern const unsigned short int pp_P_slash_B; // P/B
extern const unsigned short int pp_FONTSEG; // FONTSEG
extern const unsigned short int pp_XBUF_dash_SE; // XBUF-SE
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp_SRC; // SRC
extern const unsigned short int pp_DST; // DST
extern const unsigned short int pp_SEGME; // SEGME
extern const unsigned short int pp_PLZ; // PLZ
void MAX(); // MAX
void _co_(); // ,
void QUIT(); // QUIT
void Is(); // ?
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_gt_(); // D>
void DOSCALL(); // DOSCALL
void SETBLOC(); // SETBLOC
void IsERR(); // ?ERR
void _ro_LDS_rc_(); // (LDS)
void KEY_2(); // KEY_2
void RRND(); // RRND
void BMOFF(); // BMOFF
void BMSEG(); // BMSEG
void BMWIDE(); // BMWIDE
void BMBYTES(); // BMBYTES
void BMHIGH(); // BMHIGH
void BMPAL(); // BMPAL
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void ON_2(); // ON_2
void _099(); // 099
void FILE_st_(); // FILE<
void SAVE_dash_OV(); // SAVE-OV
void PAD_v_16(); // PAD|16
void PAD_gt_SEG(); // PAD>SEG
void IsVGA(); // ?VGA
void IsCGA(); // ?CGA
void DARK(); // DARK
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void DrawRAW(); // .RAW
void _gt_LORES(); // >LORES
void SCR_dash_RES(); // SCR-RES
void BYE_2(); // BYE_2
void BEEPON_2(); // BEEPON_2
void CTINIT(); // CTINIT
void _i_KEY(); // 'KEY
void _ro__ex_SET_rc_(); // (!SET)
void _ro__ex_OLD_rc_(); // (!OLD)
void _2_at_(); // 2@
void SEG_gt_ADDR(); // SEG>ADDR
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _4_star_(); // 4*
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void L_at_(); // L@
void L_ex_(); // L!
void LC_at_(); // LC@
void LC_ex_(); // LC!
void LCMOVE(); // LCMOVE
void GetDS(); // @DS
void GRCALL(); // GRCALL
void _gt_PLANES(); // >PLANES
void GetK(); // @K
void IsALREADY(); // ?ALREADY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEBAA = 0xebaa; // WEBAA size: 2
// {0xe0, 0xeb}

const unsigned short int pp_RND1 = 0xeda0; // RND1 size: 10
// {0x01, 0x3d, 0x01, 0x15, 0x01, 0x2d, 0x01, 0x25, 0x00, 0x00}

const unsigned short int pp_RND2 = 0xedb3; // RND2 size: 10
// {0x01, 0x4d, 0x01, 0x15, 0x01, 0x25, 0x01, 0x05, 0x00, 0x00}

const unsigned short int pp_RND3 = 0xedc6; // RND3 size: 10
// {0x01, 0x3d, 0x01, 0x4d, 0x01, 0x2d, 0x01, 0x05, 0x00, 0x00}

const unsigned short int pp_P6 = 0xedd7; // P6 size: 20
// {0x09, 0x3d, 0x03, 0x2d, 0x09, 0x1d, 0x03, 0x2d, 0x09, 0x15, 0x03, 0x1d, 0x09, 0x05, 0x03, 0x54, 0x70, 0x05, 0x00, 0x00}

const unsigned short int pp_GLISS = 0xedf5; // GLISS size: 22
// {0x01, 0x07, 0x01, 0x0f, 0x01, 0x27, 0x01, 0x2f, 0x01, 0x37, 0x01, 0x3f, 0x01, 0x47, 0x01, 0x4f, 0x01, 0x57, 0x01, 0x5f, 0x00, 0x00}

const unsigned short int pp_P1 = 0xee12; // P1 size: 26
// {0x09, 0x3c, 0x03, 0x2c, 0x09, 0x24, 0x03, 0x2c, 0x09, 0x14, 0x03, 0x24, 0x09, 0x04, 0x03, 0x14, 0x09, 0x53, 0x03, 0x4b, 0x18, 0x3b, 0x0c, 0x3b, 0x00, 0x00}

const unsigned short int pp__0SONG = 0xee47; // 0SONG size: 14
// {0x01, 0x15, 0x02, 0x03, 0xc0, 0x01, 0x01, 0x15, 0x02, 0x01, 0x32, 0x02, 0x00, 0x00}

const unsigned short int pp_P9 = 0xee5c; // P9 size: 6
// {0x43, 0x06, 0x12, 0xff, 0x00, 0x00}

const unsigned short int pp__1SONG = 0xee6c; // 1SONG size: 5
// {0x0d, 0x7c, 0x02, 0x00, 0x00}

const unsigned short int pp_P10 = 0xee79; // P10 size: 6
// {0x43, 0x2c, 0x06, 0xff, 0x00, 0x00}

const unsigned short int pp__2SONG = 0xee89; // 2SONG size: 26
// {0x02, 0xc0, 0x01, 0x02, 0xd3, 0x01, 0x02, 0xc0, 0x01, 0x02, 0xe6, 0x01, 0x02, 0xc0, 0x01, 0x02, 0xd3, 0x01, 0x02, 0xe6, 0x01, 0xff, 0x99, 0x02, 0x00, 0x00}

const unsigned short int pp_WEEA5 = 0xeea5; // WEEA5 size: 2
// {0x00, 0x00}

const unsigned short int pp_WF02D = 0xf02d; // WF02D size: 4
// {0x3a, 0x20, 0x05, 0x41}

const unsigned short int pp_WF259 = 0xf259; // WF259 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF25D = 0xf25d; // WF25D size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF261 = 0xf261; // WF261 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF265 = 0xf265; // WF265 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF269 = 0xf269; // WF269 size: 2
// {0x3a, 0x20}

const unsigned short int pp_PARAS = 0xf275; // PARAS size: 8
// {0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20}


const unsigned short int cc_WEB76 = 0xeb76; // WEB76
const unsigned short int cc_WEB7A = 0xeb7a; // WEB7A
const unsigned short int cc_WEB7E = 0xeb7e; // WEB7E
const unsigned short int cc_WEB82 = 0xeb82; // WEB82
const unsigned short int cc_WEB86 = 0xeb86; // WEB86
const unsigned short int cc_WEB8A = 0xeb8a; // WEB8A
const unsigned short int cc_WEB8E = 0xeb8e; // WEB8E
const unsigned short int cc_WEB92 = 0xeb92; // WEB92
const unsigned short int cc_WEB96 = 0xeb96; // WEB96
const unsigned short int cc_WEB9A = 0xeb9a; // WEB9A
const unsigned short int cc_WEB9E = 0xeb9e; // WEB9E
const unsigned short int cc_WEBA2 = 0xeba2; // WEBA2
const unsigned short int cc_WEBA6 = 0xeba6; // WEBA6
const unsigned short int cc_EGAT = 0xf1c8; // EGAT
const unsigned short int cc_EGAB = 0xf1e1; // EGAB
const unsigned short int cc_VGAS = 0xf1fa; // VGAS


// 0xeb72: db 0x99 0x00 '  '

// ================================================
// 0xeb74: WORD 'WEB76' codep=0x2214 wordp=0xeb76
// ================================================
// 0xeb76: dw 0x0000

// ================================================
// 0xeb78: WORD 'WEB7A' codep=0x2214 wordp=0xeb7a
// ================================================
// 0xeb7a: dw 0x0002

// ================================================
// 0xeb7c: WORD 'WEB7E' codep=0x2214 wordp=0xeb7e
// ================================================
// 0xeb7e: dw 0x000e

// ================================================
// 0xeb80: WORD 'WEB82' codep=0x2214 wordp=0xeb82
// ================================================
// orphan
// 0xeb82: dw 0x0003

// ================================================
// 0xeb84: WORD 'WEB86' codep=0x2214 wordp=0xeb86
// ================================================
// orphan
// 0xeb86: dw 0x0005

// ================================================
// 0xeb88: WORD 'WEB8A' codep=0x2214 wordp=0xeb8a
// ================================================
// orphan
// 0xeb8a: dw 0x0007

// ================================================
// 0xeb8c: WORD 'WEB8E' codep=0x2214 wordp=0xeb8e
// ================================================
// orphan
// 0xeb8e: dw 0x0009

// ================================================
// 0xeb90: WORD 'WEB92' codep=0x2214 wordp=0xeb92
// ================================================
// orphan
// 0xeb92: dw 0x000a

// ================================================
// 0xeb94: WORD 'WEB96' codep=0x2214 wordp=0xeb96
// ================================================
// orphan
// 0xeb96: dw 0x000b

// ================================================
// 0xeb98: WORD 'WEB9A' codep=0x2214 wordp=0xeb9a
// ================================================
// orphan
// 0xeb9a: dw 0x000c

// ================================================
// 0xeb9c: WORD 'WEB9E' codep=0x2214 wordp=0xeb9e
// ================================================
// orphan
// 0xeb9e: dw 0x000d

// ================================================
// 0xeba0: WORD 'WEBA2' codep=0x2214 wordp=0xeba2
// ================================================
// orphan
// 0xeba2: dw 0x0010

// ================================================
// 0xeba4: WORD 'WEBA6' codep=0x2214 wordp=0xeba6
// ================================================
// orphan
// 0xeba6: dw 0x0024

// ================================================
// 0xeba8: WORD 'WEBAA' codep=0x1d29 wordp=0xebaa
// ================================================
// 0xebaa: db 0xe0 0xeb '  '

// ================================================
// 0xebac: WORD 'WEBAE' codep=0x224c wordp=0xebae params=1 returns=2
// ================================================

void WEBAE() // WEBAE
{
  Push(Read16(cc_MUSSEG)); // MUSSEG
  SWAP(); // SWAP
}


// ================================================
// 0xebb4: WORD 'WEBB6' codep=0x224c wordp=0xebb6 params=2 returns=0
// ================================================

void WEBB6() // WEBB6
{
  WEBAE(); // WEBAE
  L_ex_(); // L!
}


// ================================================
// 0xebbc: WORD 'WEBBE' codep=0x224c wordp=0xebbe params=1 returns=1
// ================================================

void WEBBE() // WEBBE
{
  WEBAE(); // WEBAE
  L_at_(); // L@
}


// ================================================
// 0xebc4: WORD 'WEBC6' codep=0x224c wordp=0xebc6 params=1 returns=1
// ================================================
// orphan

void WEBC6() // WEBC6
{
  WEBAE(); // WEBAE
  LC_at_(); // LC@
}


// ================================================
// 0xebcc: WORD 'WEBCE' codep=0x224c wordp=0xebce params=2 returns=0
// ================================================

void WEBCE() // WEBCE
{
  WEBAE(); // WEBAE
  LC_ex_(); // LC!
}

// 0xebd4: db 0x01 0x21 0x20 0x20 0x20 0x41 0x44 0x44 0x52 0x20 0x31 0x30 0xb3 0x01 0x4c 0x4c 0x4f 0x54 0x20 0x52 0x20 0x20 0x20 0x20 0x20 0x34 0xff 0x00 0x67 0x02 0x8c 0x02 0xa9 0x02 0x43 0x52 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x32 0x30 0x44 0x31 0xf0 0xfd 0xf8 0x7e 0x7c 0x3f 0xbe 0x1f 0xfd 0x0f 0xef 0x07 0xf7 0x03 0xfb 0x01 0xb1 0xef 0xd8 0x77 0xec 0x3b 0xf6 0x1d 0xfb 0x0e 0x7d 0x07 0xbe 0x03 0xdf 0x01 0x3d 0xe2 0x1e 0x71 0x8f 0x38 0x47 0x1c 0x23 0x0e 0x11 0x07 0x88 0x03 0xc4 0x01 0x89 0xd5 0xc4 0x6a 0x62 0x35 0xb1 0x1a 0x58 0x0d 0xac 0x06 0x56 0x03 0xab 0x01 0x8e 0xc9 0xc7 0x64 0x63 0x32 0x31 0x19 0x98 0x0c 0x4c 0x06 0x26 0x03 0x93 0x01 0x3d 0xbe 0x1e 0x5f 0x8f 0x2f 0xc7 0x17 0xe3 0x0b 0xf1 0x05 0xf8 0x02 0x7c 0x01 0x90 0xb3 0xc8 0x59 0xe4 0x2c 0x72 0x16 0x39 0x0b 0x9c 0x05 0xce 0x02 0x67 0x01 0x7c 0xa9 0xbe 0x54 0x5f 0x2a 0x2f 0x15 0x97 0x0a 0x4b 0x05 0xa5 0x02 0x52 0x01 0xf8 0x9f 0xfc 0x4f 0xfe 0x27 0xff 0x13 0xff 0x09 0xff 0x04 0x7f 0x02 0x3f 0x01 0xff 0x96 0x7f 0x4b 0xbf 0x25 0xdf 0x12 0x6f 0x09 0xb7 0x04 0x5b 0x02 0x2d 0x01 0x84 0x8e 0x42 0x47 0xa1 0x23 0xd0 0x11 0xe8 0x08 0x74 0x04 0x3a 0x02 0x1d 0x01 0x85 0x86 0x42 0x43 0xa1 0x21 0xd0 0x10 0x68 0x08 0x34 0x04 0x1a 0x02 0x0d 0x01 0xb0 0xb6 0xe6 0x43 0x8a 0xc2 0xe6 0x42 0x8a 0xc6 0xe6 0x42 0xe4 0x61 0x0c 0x03 0xe6 0x61 0xc3 0xba 0x61 0x00 0xec 0x24 0xfc 0xee 0xc3 0x56 0x57 0x1e 0x52 0x51 0x53 0x50 0x0e 0x1f 0x8a 0x06 0x02 0x00 0x84 0xc0 0x75 0x03 0xe9 0x98 0x00 0x33 0xdb 0xfe 0x4f 0x0a 0x74 0x03 0xe9 0x8e 0x00 0x8a 0x47 0x0d 0x84 0xc0 0x75 0x13 0x8a 0x47 0x0c 0x84 0xc0 0x74 0x0c 0x88 0x47 0x0a 0xe8 0xc6 0xff 0xc6 0x47 0x0d 0x01 0xeb 0xe3 0x8b 0x77 0x07 0xfc 0xac 0x24 0x7f 0x74 0x3b 0x32 0xe4 0xa8 0x40 0x74 0x04 0x24 0x3f 0xfe 0xc4 0x88 0x47 0x0b 0x88 0x67 0x0c 0xac 0x89 0x77 0x07 0x3c 0xff 0x75 0x05 0x8a 0x47 0x0b 0xeb 0xce 0x8a 0x67 0x0b 0x2a 0x67 0x0c 0x88 0x67 0x0a 0x32 0xf6 0x8a 0xd0 0xd1 0xe2 0x8b 0xfa 0x8b 0x55 0x24 0xe8 0x70 0xff 0xc6 0x47 0x0d 0x00 0xe9 0x30 0x00 0x8b 0x77 0x05 0xfe 0x4f 0x09 0x75 0x18 0x83 0xc6 0x03 0x8a 0x04 0x84 0xc0 0x75 0x09 0x33 0xc0 0x89 0x06 0x02 0x00 0xe9 0x16 0x00 0x89 0x77 0x05 0x88 0x47 0x09 0x8b 0x44 0x01 0x89 0x47 0x07 0xc6 0x47 0x0a 0x01 0xc6 0x47 0x0d 0x01 0xeb 0x8c 0x58 0x5b 0x59 0x5a 0x1f 0x5f 0x5e 0xea 0x00 0x00 0x00 0x00 ' !   ADDR 10  LLOT R     4  g     CR        20D1   ~|?             w ;    }     =  q 8G #          jb5  X   V      dc21   L &   =  _ /        |    Y ,r 9     g |  T_*/   K   R    O '       ?   K %  o   [ -   BG #    t :     BC !  h 4        C   B   B a   a  a  $   VW RQSP        u    3  O t     G   u  G   t  G     G     w   $t;2  @t $?   G  g   w < u  G    g *g  g 2        U$ p  G   0  w  O u        u 3         w  G  D  G  G   G    X[YZ _^     '

// ================================================
// 0xed97: WORD 'RND1' codep=0x1d29 wordp=0xeda0
// ================================================
// 0xeda0: db 0x01 0x3d 0x01 0x15 0x01 0x2d 0x01 0x25 0x00 0x00 ' =   - %  '

// ================================================
// 0xedaa: WORD 'RND2' codep=0x1d29 wordp=0xedb3
// ================================================
// 0xedb3: db 0x01 0x4d 0x01 0x15 0x01 0x25 0x01 0x05 0x00 0x00 ' M   %    '

// ================================================
// 0xedbd: WORD 'RND3' codep=0x1d29 wordp=0xedc6
// ================================================
// 0xedc6: db 0x01 0x3d 0x01 0x4d 0x01 0x2d 0x01 0x05 0x00 0x00 ' = M -    '

// ================================================
// 0xedd0: WORD 'P6' codep=0x1d29 wordp=0xedd7
// ================================================
// 0xedd7: db 0x09 0x3d 0x03 0x2d 0x09 0x1d 0x03 0x2d 0x09 0x15 0x03 0x1d 0x09 0x05 0x03 0x54 0x70 0x05 0x00 0x00 ' = -   -       Tp   '

// ================================================
// 0xedeb: WORD 'GLISS' codep=0x1d29 wordp=0xedf5
// ================================================
// 0xedf5: db 0x01 0x07 0x01 0x0f 0x01 0x27 0x01 0x2f 0x01 0x37 0x01 0x3f 0x01 0x47 0x01 0x4f 0x01 0x57 0x01 0x5f 0x00 0x00 '     ' / 7 ? G O W _  '

// ================================================
// 0xee0b: WORD 'P1' codep=0x1d29 wordp=0xee12
// ================================================
// 0xee12: db 0x09 0x3c 0x03 0x2c 0x09 0x24 0x03 0x2c 0x09 0x14 0x03 0x24 0x09 0x04 0x03 0x14 0x09 0x53 0x03 0x4b 0x18 0x3b 0x0c 0x3b 0x00 0x00 ' < , $ ,   $     S K ; ;  '

// ================================================
// 0xee2c: WORD 'R,' codep=0x224c wordp=0xee33
// ================================================

void R_co_() // R,
{
  Push(Read16(cc_MUSSEG)); // MUSSEG
  SEG_gt_ADDR(); // SEG>ADDR
  _dash_(); // -
  _co_(); // ,
}


// ================================================
// 0xee3d: WORD '0SONG' codep=0x1d29 wordp=0xee47
// ================================================
// 0xee47: db 0x01 0x15 0x02 0x03 0xc0 0x01 0x01 0x15 0x02 0x01 0x32 0x02 0x00 0x00 '          2   '

// ================================================
// 0xee55: WORD 'P9' codep=0x1d29 wordp=0xee5c
// ================================================
// 0xee5c: db 0x43 0x06 0x12 0xff 0x00 0x00 'C     '

// ================================================
// 0xee62: WORD '1SONG' codep=0x1d29 wordp=0xee6c
// ================================================
// 0xee6c: db 0x0d 0x7c 0x02 0x00 0x00 ' |   '

// ================================================
// 0xee71: WORD 'P10' codep=0x1d29 wordp=0xee79
// ================================================
// 0xee79: db 0x43 0x2c 0x06 0xff 0x00 0x00 'C,    '

// ================================================
// 0xee7f: WORD '2SONG' codep=0x1d29 wordp=0xee89
// ================================================
// 0xee89: db 0x02 0xc0 0x01 0x02 0xd3 0x01 0x02 0xc0 0x01 0x02 0xe6 0x01 0x02 0xc0 0x01 0x02 0xd3 0x01 0x02 0xe6 0x01 0xff 0x99 0x02 0x00 0x00 '                          '

// ================================================
// 0xeea3: WORD 'WEEA5' codep=0x1d29 wordp=0xeea5
// ================================================
// 0xeea5: db 0x00 0x00 '  '

// ================================================
// 0xeea7: WORD 'WEEA9' codep=0x224c wordp=0xeea9
// ================================================

void WEEA9() // WEEA9
{
  Push(pp_WEEA5); // WEEA5
  Push(Read16(regsp)); // DUP
  _i_KEY(); // 'KEY
  if (Pop() != 0)
  {
    ON_2(); // ON_2
  } else
  {
    Pop(); // DROP
  }
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xeebf: WORD 'WEEC1' codep=0x224c wordp=0xeec1 params=0 returns=0
// ================================================

void WEEC1() // WEEC1
{
  unsigned short int i, imax;
  Push(0x001e * Read16(cc_MPS)); // 0x001e MPS *
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    NOP(); // NOP
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeed5: WORD 'WEED7' codep=0x224c wordp=0xeed7
// ================================================

void WEED7() // WEED7
{
  unsigned short int i, imax;
  WEEA9(); // WEEA9
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(0);
  Push(0x03e8);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    TONE(); // TONE
    WEEC1(); // WEEC1
    Push(0xffec);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xeef7: WORD 'WEEF9' codep=0x224c wordp=0xeef9
// ================================================

void WEEF9() // WEEF9
{
  unsigned short int i, imax;
  WEEA9(); // WEEA9
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  BEEPON_2(); // BEEPON_2
  Push(0x07d0);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WEEC1(); // WEEC1
    WEEA9(); // WEEA9
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    Push(i); // I
    Push(5);
    _slash_(); // /
    Push(Pop() + 0x0064); //  0x0064 +
    TONE(); // TONE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xef29: WORD 'WEF2B' codep=0x224c wordp=0xef2b
// ================================================

void WEF2B() // WEF2B
{
  unsigned short int i, imax;
  WEEA9(); // WEEA9
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(0x03e8);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0064);
    Push(0x012c);
    RRND(); // RRND
    TONE(); // TONE
    WEEC1(); // WEEC1
    WEEA9(); // WEEA9
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xef57: WORD 'WEF59' codep=0x224c wordp=0xef59 params=0 returns=3
// ================================================

void WEF59() // WEF59
{
  Push(0x001c);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_WEB7E)); // WEB7E
  WEBBE(); // WEBBE
  Push((Pop()==Pop())?1:0); // =
  Push(!Pop()); //  NOT
}


// ================================================
// 0xef6b: WORD 'INITMUS' codep=0x224c wordp=0xef77 params=0 returns=0
// ================================================

void INITMUS() // INITMUS
{
  unsigned short int a;
  WEF59(); // WEF59
  if (Pop() != 0)
  {
    Push(0);
    Push(Read16(cc_WEB7A)); // WEB7A
    WEBCE(); // WEBCE
    Push(Read16(cc_WEB76)); // WEB76
    WEBBE(); // WEBBE
    a = Pop(); // >R
    Push(a); // I
    WEBB6(); // WEBB6
    Push(a + 2); // R> 2+
    WEBB6(); // WEBB6
    Push(Read16(cc_MUSSEG)); // MUSSEG
    Push(Read16(cc_WEB7E)); // WEB7E
    WEBBE(); // WEBBE
    Push(0x001c);
    _ro__ex_SET_rc_(); // (!SET)
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xefa9: WORD 'HIMUS' codep=0x224c wordp=0xefb3 params=0 returns=0
// ================================================
// entry

void HIMUS() // HIMUS
{
  WEF59(); // WEF59
  if (Pop() != 0)
  {
    GetDS(); // @DS
    Push(Read16(pp_WEBAA)); // WEBAA @
    Push(Read16(cc_MUSSEG)); // MUSSEG
    Push(0);
    Push(0x0320);
    LCMOVE(); // LCMOVE
    INITMUS(); // INITMUS
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xefcf: WORD 'WEFD1' codep=0x224c wordp=0xefd1
// ================================================

void WEFD1() // WEFD1
{
  Push(Read16(pp_FONTSEG)); // FONTSEG @
  Push(0x008f);
  Func6("FILE-#R");
  Push(Read16(Pop())); //  @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xefe1: WORD 'WEFE3' codep=0x224c wordp=0xefe3 params=0 returns=1
// ================================================

void WEFE3() // WEFE3
{
  unsigned short int a;
  BMWIDE(); // BMWIDE
  Push(Read16(Pop())); //  @
  Push(Read16(pp_P_slash_B)); // P/B @
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop() - 1); //  1-
  Push(Pop() + Pop()); // +
  Push(a); // R>
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  BMBYTES(); // BMBYTES
  C_ex__2(); // C!_2
  BMHIGH(); // BMHIGH
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() * Pop()); // *
  Push(pp_PLZ); // PLZ
  Store_2(); // !_2
}


// ================================================
// 0xf009: WORD 'WF00B' codep=0x224c wordp=0xf00b params=0 returns=0
// ================================================

void WF00B() // WF00B
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(3);
  L_at_(); // L@
  BMWIDE(); // BMWIDE
  Store_2(); // !_2
}


// ================================================
// 0xf019: WORD 'WF01B' codep=0x224c wordp=0xf01b params=0 returns=0
// ================================================

void WF01B() // WF01B
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0x000a);
  LC_at_(); // LC@
  BMHIGH(); // BMHIGH
  C_ex__2(); // C!_2
}


// ================================================
// 0xf02b: WORD 'WF02D' codep=0x1d29 wordp=0xf02d
// ================================================
// orphan
// 0xf02d: db 0x3a 0x20 0x05 0x41 ':  A'

// ================================================
// 0xf031: WORD 'WF033' codep=0x224c wordp=0xf033 params=0 returns=1
// ================================================
// orphan

void WF033() // WF033
{
  WF00B(); // WF00B
  WF01B(); // WF01B
  WEFE3(); // WEFE3
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    Push(0x000d);
    Push(pp_SRC); // SRC
    Store_2(); // !_2
    Push(2);
    Push(Read16(regsp)); // DUP
    Push(pp_DST); // DST
    Store_2(); // !_2
    BMOFF(); // BMOFF
    Store_2(); // !_2
    WEFD1(); // WEFD1
    Push(pp_SEGME); // SEGME
    Store_2(); // !_2
    WEFD1(); // WEFD1
    BMSEG(); // BMSEG
    Store_2(); // !_2
  }
  Push(0);
  Push(pp_BMAP + 0x000c); // BMAP 0x000c +
  Store_2(); // !_2
}


// ================================================
// 0xf06f: WORD 'WF071' codep=0x224c wordp=0xf071
// ================================================

void WF071() // WF071
{
  unsigned short int i, imax, j, jmax;
  BMHIGH(); // BMHIGH
  Push(Read16(Pop())&0xFF); //  C@
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_SRC)); // SRC @
    Push(Read16(pp_DST)); // DST @
    BMBYTES(); // BMBYTES
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      _gt_PLANES(); // >PLANES
      Push(4);
      Push(pp_SRC); // SRC
      _plus__ex__2(); // +!_2
      Push(1);
      Push(pp_DST); // DST
      _plus__ex__2(); // +!_2
      j++;
    } while(j<jmax); // (LOOP)

    Push(Pop() + Pop()); // +
    Push(pp_DST); // DST
    Store_2(); // !_2
    BMWIDE(); // BMWIDE
    Push(Read16(Pop()) >> 1); //  @ 2/
    Push(Pop() + Pop()); // +
    Push(pp_SRC); // SRC
    Store_2(); // !_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf0b5: WORD 'WF0B7' codep=0x224c wordp=0xf0b7 params=1 returns=1
// ================================================

void WF0B7() // WF0B7
{
  Push(Pop() & 3); //  3 AND
}


// ================================================
// 0xf0bd: WORD 'WF0BF' codep=0x224c wordp=0xf0bf params=0 returns=2
// ================================================

void WF0BF() // WF0BF
{
  BMSEG(); // BMSEG
  Push(Read16(Pop())); //  @
  Push(Read16(pp_SRC)); // SRC @
  LC_at_(); // LC@
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(pp_SRC); // SRC
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf0d3: WORD 'WF0D5' codep=0x224c wordp=0xf0d5 params=0 returns=0
// ================================================

void WF0D5() // WF0D5
{
  unsigned short int i, imax, a, b, c, d;
  BMOFF(); // BMOFF
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(pp_DST); // DST
  Store_2(); // !_2
  Push(pp_SRC); // SRC
  Store_2(); // !_2
  BMBYTES(); // BMBYTES
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1 >> 1); //  1+ 2/
  BMBYTES(); // BMBYTES
  C_ex__2(); // C!_2
  BMHIGH(); // BMHIGH
  Push(Read16(Pop())); //  @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    do
    {
      WF0BF(); // WF0BF
      Push(Pop() >> 4); //  16/
      WF0B7(); // WF0B7
      Push(Pop() * 0x0040); //  0x0040 *
      a = Pop(); // >R
      WF0B7(); // WF0B7
      Push(Pop() >> 4); //  16*
      b = Pop(); // >R
      Push(Pop() - 1); //  1-
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        WF0BF(); // WF0BF
        Push(Pop() >> 4); //  16/
        WF0B7(); // WF0B7
        _4_star_(); // 4*
        c = Pop(); // >R
        WF0B7(); // WF0B7
      } else
      {
        Push2Words("NULL");
        d = Pop(); // >R
      }
      Push(((Pop() | c) | b) | a); //  R> OR R> OR R> OR
      BMSEG(); // BMSEG
      Push(Read16(Pop())); //  @
      Push(Read16(pp_DST)); // DST @
      LC_ex_(); // LC!
      Push(1);
      Push(pp_DST); // DST
      _plus__ex__2(); // +!_2
      Push(Pop() - 1); //  1-
      Push(0);
      MAX(); // MAX
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      Push(Pop()==0?1:0); //  0=
    } while(Pop() == 0);
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf15d: WORD '!VPAL' codep=0x224c wordp=0xf167
// ================================================

void StoreVPAL() // !VPAL
{
  PAD_gt_SEG(); // PAD>SEG
  Push(0x0036);
  FILE_st_(); // FILE<
  GetDS(); // @DS
  Push(Read16(cc_DS)); // DS
  Store_2(); // !_2
  PAD_v_16(); // PAD|16
  Push(Read16(cc_BX)); // BX
  Store_2(); // !_2
  Push(9);
  Push(Read16(cc_AX)); // AX
  Store_2(); // !_2
  GRCALL(); // GRCALL
}


// ================================================
// 0xf185: WORD 'SETABLT' codep=0x224c wordp=0xf191
// ================================================
// entry

void SETABLT() // SETABLT
{
  WF033(); // WF033
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    WF071(); // WF071
    WEFD1(); // WEFD1
    Push(2);
  } else
  {
    Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
    Push(0x000d);
  }
  BMOFF(); // BMOFF
  Store_2(); // !_2
  BMSEG(); // BMSEG
  Store_2(); // !_2
  IsCGA(); // ?CGA
  if (Pop() == 0) return;
  WF0D5(); // WF0D5
}


// ================================================
// 0xf1bf: WORD 'EGAT' codep=0x2214 wordp=0xf1c8
// ================================================
// 0xf1c8: dw 0xf1cb
// 0xf1ca: db 0x00 0x73 0x70 0x6c 0x73 0x68 0x74 0x6f 0x70 0x2e 0x65 0x67 0x61 0x00 ' splshtop.ega '

// ================================================
// 0xf1d8: WORD 'EGAB' codep=0x2214 wordp=0xf1e1
// ================================================
// 0xf1e1: dw 0xf1e4
// 0xf1e3: db 0x00 0x73 0x70 0x6c 0x73 0x68 0x62 0x6f 0x74 0x2e 0x65 0x67 0x61 0x00 ' splshbot.ega '

// ================================================
// 0xf1f1: WORD 'VGAS' codep=0x2214 wordp=0xf1fa
// ================================================
// 0xf1fa: dw 0xf1fd
// 0xf1fc: db 0x00 0x73 0x70 0x6c 0x73 0x68 0x2e 0x76 0x67 0x61 0x00 ' splsh.vga '

// ================================================
// 0xf207: WORD 'WF209' codep=0x224c wordp=0xf209
// ================================================

void WF209() // WF209
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(Read16(cc_VGAS)); // VGAS
    return;
  }
  Push(Read16(cc_EGAB)); // EGAB
  Push(Read16(cc_EGAT)); // EGAT
}


// ================================================
// 0xf21b: WORD 'WF21D' codep=0x224c wordp=0xf21d
// ================================================

void WF21D() // WF21D
{
  WF209(); // WF209
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  _ro_LDS_rc_(); // (LDS)
  SETABLT(); // SETABLT
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(1);
    BMPAL(); // BMPAL
    C_ex__2(); // C!_2
  }
  DARK(); // DARK
  Push(0);
  Push(0x00c7);
  DrawRAW(); // .RAW
  IsVGA(); // ?VGA
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  _ro_LDS_rc_(); // (LDS)
  SETABLT(); // SETABLT
  Push(0);
  Push(0x0064);
  DrawRAW(); // .RAW
}


// ================================================
// 0xf257: WORD 'WF259' codep=0x1d29 wordp=0xf259
// ================================================
// 0xf259: db 0x3a 0x20 ': '

// ================================================
// 0xf25b: WORD 'WF25D' codep=0x1d29 wordp=0xf25d
// ================================================
// 0xf25d: db 0x3a 0x20 ': '

// ================================================
// 0xf25f: WORD 'WF261' codep=0x1d29 wordp=0xf261
// ================================================
// 0xf261: db 0x3a 0x20 ': '

// ================================================
// 0xf263: WORD 'WF265' codep=0x1d29 wordp=0xf265
// ================================================
// orphan
// 0xf265: db 0x3a 0x20 ': '

// ================================================
// 0xf267: WORD 'WF269' codep=0x1d29 wordp=0xf269
// ================================================
// orphan
// 0xf269: db 0x3a 0x20 ': '

// ================================================
// 0xf26b: WORD 'PARAS' codep=0x1d29 wordp=0xf275
// ================================================
// 0xf275: db 0x00 0x04 0x00 0x08 0x00 0x10 0x00 0x20 '        '

// ================================================
// 0xf27d: WORD 'WF27F' codep=0x224c wordp=0xf27f params=0 returns=1
// ================================================

void WF27F() // WF27F
{
  Push(0xf000);
  Push(0xc000);
  LC_at_(); // LC@
  Push(Pop()==0x0021?1:0); //  0x0021 =
}


// ================================================
// 0xf291: WORD '@K' codep=0xf298 wordp=0xf298
// ================================================
// 0xf298: int    12
// 0xf29a: push   ax
// 0xf29b: lodsw
// 0xf29c: mov    bx,ax
// 0xf29e: jmp    word ptr [bx]

// ================================================
// 0xf2a0: WORD '?ALREADY' codep=0xf2ad wordp=0xf2ad
// ================================================
// 0xf2ad: mov    ax,7000
// 0xf2b0: mov    bx,0001
// 0xf2b3: int    15
// 0xf2b5: jae    F2B9
// 0xf2b7: xor    dx,dx
// 0xf2b9: push   dx
// 0xf2ba: lodsw
// 0xf2bb: mov    bx,ax
// 0xf2bd: jmp    word ptr [bx]

// ================================================
// 0xf2bf: WORD 'WF2C1' codep=0x224c wordp=0xf2c1 params=0 returns=0
// ================================================

void WF2C1() // WF2C1
{
  IsERR(); // ?ERR
  if (Pop() == 0) return;
  Push(Read16(cc_AX)); // AX
  Is(); // ?
  PRINT("DOS call error !", 16); // (.")
  KEY_2(); // KEY_2
  QUIT(); // QUIT
}


// ================================================
// 0xf2e4: WORD 'WF2E6' codep=0x224c wordp=0xf2e6 params=0 returns=0
// ================================================

void WF2E6() // WF2E6
{
  Push(Read16(cc__16K) * 2 >> 4); // 16K 2* 16/
  Push(pp_WF25D); // WF25D
  Store_2(); // !_2
}


// ================================================
// 0xf2f2: WORD 'WF2F4' codep=0x224c wordp=0xf2f4 params=1 returns=1
// ================================================

void WF2F4() // WF2F4
{
  Push(0x0100);
  _slash_(); // /
  Push(Read16((Pop() & 3) + pp_PARAS)); //  3 AND PARAS + @
  Push(pp_WF259); // WF259
  Store_2(); // !_2
}


// ================================================
// 0xf30a: WORD 'WF30C' codep=0x224c wordp=0xf30c
// ================================================

void WF30C() // WF30C
{
  Push(Read16(cc_BX)); // BX
  Store_2(); // !_2
  Push(0x0048);
  DOSCALL(); // DOSCALL
  WF2C1(); // WF2C1
  Push(Read16(Read16(cc_AX))); // AX @
}


// ================================================
// 0xf31e: WORD 'WF320' codep=0x224c wordp=0xf320 params=0 returns=0
// ================================================

void WF320() // WF320
{
  Push(Read16(pp_SYSK)); // SYSK @
  Push(0x0160); // '(!OLD)'
  _st_(); // <
  if (Pop() == 0) return;
  PRINT("384k memory minimum needed!", 27); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  BYE_2(); // BYE_2
}


// ================================================
// 0xf356: WORD 'WF358' codep=0x224c wordp=0xf358
// ================================================

void WF358() // WF358
{
  Push(Read16(pp_SYSK) * 0x0040); // SYSK @ 0x0040 *
  OVER(); // OVER
  _dash_(); // -
  Push(pp_WF261); // WF261
  Store_2(); // !_2
  Push(0xc350);
  GetDS(); // @DS
  SETBLOC(); // SETBLOC
  Pop(); // DROP
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() - 1); //  1 -
  GetDS(); // @DS
  SETBLOC(); // SETBLOC
  Pop(); Pop(); // 2DROP
  WF30C(); // WF30C
}


// ================================================
// 0xf386: WORD 'WF388' codep=0x224c wordp=0xf388 params=0 returns=2
// ================================================

void WF388() // WF388
{
  Push(Read16(pp_WF25D) - Read16(pp_WF259)); // WF25D @ WF259 @ -
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  Push(Read16(pp_WF25D)); // WF25D @
  Push(Read16(cc__16K) >> 4); // 16K 16/
  _gt_(); // >
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf3a4: WORD 'TANDY-ALLOC' codep=0x224c wordp=0xf3b4 params=0 returns=0
// ================================================
// entry

void TANDY_dash_ALLOC() // TANDY-ALLOC
{
  Push(pp_TANDY); // TANDY
  _099(); // 099
  WF27F(); // WF27F
  if (Pop() != 0)
  {
    GetK(); // @K
    Push(Read16(regsp)); // DUP
    Push(pp_SYSK); // SYSK
    Store_2(); // !_2
    WF320(); // WF320
    Push(0x0280);
    _st_(); // <
    if (Pop() != 0)
    {
      IsALREADY(); // ?ALREADY
      WF2F4(); // WF2F4
      WF2E6(); // WF2E6
      WF388(); // WF388
      if (Pop() != 0)
      {
        WF358(); // WF358
      } else
      {
        Pop(); // DROP
      }
    }
  }
  Push(0x0010);
  Push(pp_TANDY); // TANDY
  Store_2(); // !_2
}


// ================================================
// 0xf3f0: WORD 'WF3F2' codep=0x224c wordp=0xf3f2
// ================================================

void WF3F2() // WF3F2
{
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
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf40c: WORD 'WF40E' codep=0x224c wordp=0xf40e
// ================================================

void WF40E() // WF40E
{
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    _gt_HIDDEN(); // >HIDDEN
  } else
  {
    _gt_DISPLA(); // >DISPLA
  }
  DARK(); // DARK
  WF21D(); // WF21D
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() == 0) return;
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xf42e: WORD 'WF430' codep=0x224c wordp=0xf430 params=0 returns=1
// ================================================

void WF430() // WF430
{
  unsigned short int i, imax, j, jmax;
  Push(0x1bee);
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x0064);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x03e8);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
  Pop(); // DROP
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(0x53a9); // 'MPS'
  Store_2(); // !_2
}


// ================================================
// 0xf46a: WORD 'SPLASH.SCREEN' codep=0x224c wordp=0xf47c
// ================================================

void SPLASH_dot_SCREEN() // SPLASH.SCREEN
{
  WF430(); // WF430
  _gt_LORES(); // >LORES
  DARK(); // DARK
  CTINIT(); // CTINIT
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    StoreVPAL(); // !VPAL
  }
  WEEA9(); // WEEA9
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WF40E(); // WF40E
  }
  WEEA9(); // WEEA9
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    BEEPON_2(); // BEEPON_2
    WEF2B(); // WEF2B
    WEED7(); // WEED7
    WEED7(); // WEED7
    WEED7(); // WEED7
    WEED7(); // WEED7
    WEED7(); // WEED7
    WEEF9(); // WEEF9
    Push(0);
    Push(Read16(cc_MUSSEG)); // MUSSEG
    Push(2);
    LC_ex_(); // LC!
    BEEPOFF(); // BEEPOFF
    Push(0xafc8); Push(0x0000);
    WF3F2(); // WF3F2
    DARK(); // DARK
  }
  Push(0);
  Push(pp_BMAP + 0x000d); // BMAP 0x000d +
  C_ex__2(); // C!_2
}


// ================================================
// 0xf4d0: WORD 'INTROS' codep=0x224c wordp=0xf4db
// ================================================
// entry

void INTROS() // INTROS
{
  HIMUS(); // HIMUS
  SPLASH_dot_SCREEN(); // SPLASH.SCREEN
}

// 0xf4e1: db 0x4d 0x55 0x53 0x49 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 0xf5 0x00 0xf4 0x00 0xf3 0x00 0xf2 0x00 0xf1 0x00 0xf0 0x00 0xef 0x00 0xee 0x35 0x30 0x32 0xec 0x00 0xeb 0x00 0xea 0x00 0xe9 0x00 0xe8 0x00 0xe7 0x00 0xe6 0x31 0x31 0x35 0x37 0x00 0xe3 0x00 0xe2 0x00 0xe1 0x00 0xe0 0x00 0xdf 0x00 0xde 0x00 0xdd 0x00 0xdc 0x00 0xdb 0x00 0xda 0x00 0xd9 0x00 0xd8 0x00 0xd7 0x00 0xd6 0x00 0xd5 0x00 0xd4 0x00 0xd3 0x00 0xd2 0x00 0xd1 0x00 0xd0 0x00 0xcf 0x00 0xce 0x00 0xcd 0x00 0xcc 0x00 0xcb 0x00 0xca 0x00 0xc9 0x00 0xc8 0x00 0xc7 0x00 0x00 'MUSIC___________________________                502             1157                                                            '

