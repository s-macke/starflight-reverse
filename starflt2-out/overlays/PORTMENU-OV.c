// ====== OVERLAY 'PORTMENU-OV' ======
// store offset = 0xece0
// overlay size   = 0x0880

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xecf6  codep:0x7420 parp:0xecf6 size:0x0003 C-string:'UNK_0xecf6'
//      UNK_0xecfb  codep:0x7420 parp:0xecfb size:0x0003 C-string:'UNK_0xecfb'
//      UNK_0xed00  codep:0x7420 parp:0xed00 size:0x0003 C-string:'UNK_0xed00'
//      UNK_0xed05  codep:0x7420 parp:0xed05 size:0x0003 C-string:'UNK_0xed05'
//      UNK_0xed0a  codep:0x1d29 parp:0xed0a size:0x0002 C-string:'UNK_0xed0a'
//      UNK_0xed0e  codep:0x224c parp:0xed0e size:0x0044 C-string:'UNK_0xed0e'
//      UNK_0xed54  codep:0x224c parp:0xed54 size:0x000c C-string:'UNK_0xed54'
//      UNK_0xed62  codep:0x224c parp:0xed62 size:0x0028 C-string:'UNK_0xed62'
//      UNK_0xed8c  codep:0x1d29 parp:0xed8c size:0x0002 C-string:'UNK_0xed8c'
//      UNK_0xed90  codep:0x224c parp:0xed90 size:0x005e C-string:'UNK_0xed90'
//            MANX  codep:0x1d29 parp:0xedf7 size:0x0002 C-string:'MANX'
//            MANY  codep:0x1d29 parp:0xee02 size:0x0002 C-string:'MANY'
//      UNK_0xee06  codep:0x224c parp:0xee06 size:0x0010 C-string:'UNK_0xee06'
//      UNK_0xee18  codep:0x224c parp:0xee18 size:0x000e C-string:'UNK_0xee18'
//      UNK_0xee28  codep:0x224c parp:0xee28 size:0x000e C-string:'UNK_0xee28'
//      UNK_0xee38  codep:0x224c parp:0xee38 size:0x000e C-string:'UNK_0xee38'
//      UNK_0xee48  codep:0x224c parp:0xee48 size:0x000e C-string:'UNK_0xee48'
//      UNK_0xee58  codep:0x224c parp:0xee58 size:0x000e C-string:'UNK_0xee58'
//      UNK_0xee68  codep:0x224c parp:0xee68 size:0x0008 C-string:'UNK_0xee68'
//         |REGION  codep:0x224c parp:0xee7c size:0x0052 C-string:'_v_REGION'
//      UNK_0xeed0  codep:0x1d29 parp:0xeed0 size:0x0002 C-string:'UNK_0xeed0'
//      UNK_0xeed4  codep:0x1d29 parp:0xeed4 size:0x000f C-string:'UNK_0xeed4'
//      UNK_0xeee5  codep:0x224c parp:0xeee5 size:0x0028 C-string:'UNK_0xeee5'
//      UNK_0xef0f  codep:0x1d29 parp:0xef0f size:0x0004 C-string:'UNK_0xef0f'
//      UNK_0xef15  codep:0x224c parp:0xef15 size:0x000c C-string:'UNK_0xef15'
//      UNK_0xef23  codep:0x224c parp:0xef23 size:0x0012 C-string:'UNK_0xef23'
//      UNK_0xef37  codep:0x224c parp:0xef37 size:0x000f C-string:'UNK_0xef37'
//      UNK_0xef48  codep:0x224c parp:0xef48 size:0x0017 C-string:'UNK_0xef48'
//      UNK_0xef61  codep:0x224c parp:0xef61 size:0x000e C-string:'UNK_0xef61'
//      UNK_0xef71  codep:0x224c parp:0xef71 size:0x0014 C-string:'UNK_0xef71'
//      UNK_0xef87  codep:0x224c parp:0xef87 size:0x0010 C-string:'UNK_0xef87'
//      UNK_0xef99  codep:0x224c parp:0xef99 size:0x0009 C-string:'UNK_0xef99'
//      UNK_0xefa4  codep:0x224c parp:0xefa4 size:0x0010 C-string:'UNK_0xefa4'
//      UNK_0xefb6  codep:0x224c parp:0xefb6 size:0x001a C-string:'UNK_0xefb6'
//         (.DOOR)  codep:0x4b3b parp:0xefdc size:0x0020 C-string:'_ro__dot_DOOR_rc_'
//      UNK_0xeffe  codep:0x224c parp:0xeffe size:0x000e C-string:'UNK_0xeffe'
//      UNK_0xf00e  codep:0x224c parp:0xf00e size:0x001e C-string:'UNK_0xf00e'
//      UNK_0xf02e  codep:0x224c parp:0xf02e size:0x0044 C-string:'UNK_0xf02e'
//      UNK_0xf074  codep:0x1d29 parp:0xf074 size:0x0004 C-string:'UNK_0xf074'
//          STPORT  codep:0x2214 parp:0xf083 size:0x000c C-string:'STPORT'
//      UNK_0xf091  codep:0x224c parp:0xf091 size:0x000e C-string:'UNK_0xf091'
//      UNK_0xf0a1  codep:0x224c parp:0xf0a1 size:0x0014 C-string:'UNK_0xf0a1'
//      UNK_0xf0b7  codep:0x224c parp:0xf0b7 size:0x0063 C-string:'UNK_0xf0b7'
//      UNK_0xf11c  codep:0x224c parp:0xf11c size:0x007a C-string:'UNK_0xf11c'
//      UNK_0xf198  codep:0x224c parp:0xf198 size:0x0024 C-string:'UNK_0xf198'
//      UNK_0xf1be  codep:0x1d29 parp:0xf1be size:0x0002 C-string:'UNK_0xf1be'
//      UNK_0xf1c2  codep:0x1d29 parp:0xf1c2 size:0x0002 C-string:'UNK_0xf1c2'
//      UNK_0xf1c6  codep:0x1d29 parp:0xf1c6 size:0x000c C-string:'UNK_0xf1c6'
//      UNK_0xf1d4  codep:0x1d29 parp:0xf1d4 size:0x009a C-string:'UNK_0xf1d4'
//      UNK_0xf270  codep:0x1d29 parp:0xf270 size:0x0038 C-string:'UNK_0xf270'
//      UNK_0xf2aa  codep:0x224c parp:0xf2aa size:0x001c C-string:'UNK_0xf2aa'
//      UNK_0xf2c8  codep:0x224c parp:0xf2c8 size:0x003e C-string:'UNK_0xf2c8'
//      UNK_0xf308  codep:0x224c parp:0xf308 size:0x0034 C-string:'UNK_0xf308'
//      UNK_0xf33e  codep:0x224c parp:0xf33e size:0x0006 C-string:'UNK_0xf33e'
//      UNK_0xf346  codep:0x224c parp:0xf346 size:0x000a C-string:'UNK_0xf346'
//      UNK_0xf352  codep:0x224c parp:0xf352 size:0x000c C-string:'UNK_0xf352'
//      UNK_0xf360  codep:0x224c parp:0xf360 size:0x001c C-string:'UNK_0xf360'
//      UNK_0xf37e  codep:0x224c parp:0xf37e size:0x0050 C-string:'UNK_0xf37e'
//      UNK_0xf3d0  codep:0x224c parp:0xf3d0 size:0x003e C-string:'UNK_0xf3d0'
//      UNK_0xf410  codep:0x224c parp:0xf410 size:0x000a C-string:'UNK_0xf410'
//      UNK_0xf41c  codep:0x224c parp:0xf41c size:0x000c C-string:'UNK_0xf41c'
//      UNK_0xf42a  codep:0x224c parp:0xf42a size:0x005a C-string:'UNK_0xf42a'
//      UNK_0xf486  codep:0x224c parp:0xf486 size:0x000c C-string:'UNK_0xf486'
//         DO-ROOM  codep:0x4b3b parp:0xf49e size:0x0020 C-string:'DO_dash_ROOM'
//      UNK_0xf4c0  codep:0x224c parp:0xf4c0 size:0x0032 C-string:'UNK_0xf4c0'
//           XWALK  codep:0x4b3b parp:0xf4fc size:0x000c C-string:'XWALK'
//         WALKIES  codep:0x224c parp:0xf514 size:0x0030 C-string:'WALKIES'
//            PPIC  codep:0x224c parp:0xf54d size:0x0000 C-string:'PPIC'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_AX; // AX
extern const unsigned short int cc_BX; // BX
extern const unsigned short int cc_CX; // CX
extern const unsigned short int cc_DX; // DX
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_ASKMOUN; // ASKMOUN
extern const unsigned short int pp_XBUF_dash_SE; // XBUF-SE
extern const unsigned short int pp_HUB; // HUB
extern const unsigned short int pp_IsTV; // ?TV
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_IsRECALL; // ?RECALL
extern const unsigned short int pp_Is_gt_OP; // ?>OP
extern const unsigned short int pp__pe_VAL; // %VAL
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PIC_h_; // PIC^
extern const unsigned short int pp__i__dot_VITAL; // '.VITAL
extern const unsigned short int pp__i__dot_DATE; // '.DATE
extern const unsigned short int pp__i__dot_VEHIC; // '.VEHIC
extern const unsigned short int pp__i_VEHICL; // 'VEHICL
extern const unsigned short int pp__i_CREW_dash_C; // 'CREW-C
extern const unsigned short int pp__i_REPAIR; // 'REPAIR
extern const unsigned short int pp__i_TREATM; // 'TREATM
extern const unsigned short int pp_E_dash_USE; // E-USE
extern const unsigned short int pp__10_star_CARG; // 10*CARG
extern const unsigned short int pp_STIME; // STIME
extern const unsigned short int pp__i_VERSIO; // 'VERSIO
extern Color BLACK; // BLACK
extern Color GREY2; // GREY2
extern Color WHITE; // WHITE
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void BEEP(); // BEEP
void MS(); // MS
void NOP(); // NOP
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _ro_LDS_rc_(); // (LDS)
void RRND(); // RRND
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void MOUNTB(); // MOUNTB
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void SAVE_dash_BU(); // SAVE-BU
void SAVE_dash_OV(); // SAVE-OV
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void DARK(); // DARK
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void DrawRAW(); // .RAW
void D_gt_H(); // D>H
void H_gt_D(); // H>D
void SAVE_dash_SC(); // SAVE-SC
void SCR_dash_RES(); // SCR-RES
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void _gt_SSCT(); // >SSCT
void _gt_SND(); // >SND
void BEEPON_2(); // BEEPON_2
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void _0_st_(); // 0<
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void LCMOVE(); // LCMOVE
void GetDS(); // @DS
void _plus__dash__at_(); // +-@
void GRCALL(); // GRCALL
void L_at_PIXEL(); // L@PIXEL
void LPLOT(); // LPLOT
void BLT(); // BLT
void DISPLAY(); // DISPLAY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xed0a = 0xed0a; // UNK_0xed0a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xed8c = 0xed8c; // UNK_0xed8c size: 2
// {0x00, 0x00}

const unsigned short int pp_MANX = 0xedf7; // MANX size: 2
// {0x06, 0x00}

const unsigned short int pp_MANY = 0xee02; // MANY size: 2
// {0x52, 0x00}

const unsigned short int pp_UNK_0xeed0 = 0xeed0; // UNK_0xeed0 size: 2
// {0x01, 0x00}

const unsigned short int pp_UNK_0xeed4 = 0xeed4; // UNK_0xeed4 size: 15
// {0x07, 0x04, 0x12, 0x1d, 0x27, 0x2d, 0x3c, 0x47, 0x51, 0x5c, 0x66, 0x6e, 0x7c, 0x88, 0x92}

const unsigned short int pp_UNK_0xef0f = 0xef0f; // UNK_0xef0f size: 4
// {0x56, 0x3a, 0x20, 0x56}

const unsigned short int pp_UNK_0xf074 = 0xf074; // UNK_0xf074 size: 4
// {0x3a, 0x20, 0x05, 0x41}

const unsigned short int pp_UNK_0xf1be = 0xf1be; // UNK_0xf1be size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf1c2 = 0xf1c2; // UNK_0xf1c2 size: 2
// {0xff, 0xff}

const unsigned short int pp_UNK_0xf1c6 = 0xf1c6; // UNK_0xf1c6 size: 12
// {0x00, 0x03, 0x03, 0x00, 0x02, 0x05, 0x00, 0x02, 0x02, 0x0f, 0x03, 0x03}

const unsigned short int pp_UNK_0xf1d4 = 0xf1d4; // UNK_0xf1d4 size: 154
// {0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x3e, 0xba, 0x05, 0x0a, 0xc0, 0x06, 0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x1d, 0xba, 0x04, 0x0a, 0x00, 0x02, 0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x5c, 0xba, 0x01, 0x0a, 0x80, 0x00, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x70, 0x00, 0x2d, 0x54, 0x0d, 0x06, 0xc0, 0x04, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x20, 0x00, 0x1c, 0x30, 0x06, 0x04, 0x80, 0x01, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x20, 0x00, 0x18, 0x30, 0x02, 0x04, 0x80, 0x01, 0x1f, 0x1c, 0x87, 0x0f, 0xc0, 0xc1, 0xf8, 0x00, 0x1d, 0xba, 0x04, 0x0a, 0x00, 0x02, 0x1f, 0x1c, 0x87, 0x0f, 0xc0, 0xc1, 0xf8, 0x00, 0x5c, 0xba, 0x01, 0x0a, 0x80, 0x00, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x70, 0x00, 0x5a, 0x54, 0x05, 0x0c, 0x40, 0x86, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x20, 0x00, 0x1c, 0x18, 0x03, 0x04, 0x00, 0x03, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x20, 0x00, 0x0c, 0x18, 0x02, 0x04, 0x00, 0x03}

const unsigned short int pp_UNK_0xf270 = 0xf270; // UNK_0xf270 size: 56
// {0xc4, 0x00, 0x02, 0x03, 0x1e, 0x01, 0x01, 0x04, 0x14, 0x00, 0x00, 0x05, 0xe2, 0xff, 0x01, 0x04, 0x3c, 0x00, 0x02, 0x03, 0xc4, 0x00, 0xfe, 0x08, 0x1e, 0x01, 0xff, 0x09, 0x14, 0x00, 0x00, 0x0a, 0xe2, 0xff, 0xff, 0x09, 0x3c, 0x00, 0xfe, 0x08, 0x9c, 0x03, 0x00, 0x06, 0x9c, 0x03, 0x00, 0x07, 0x9c, 0xfd, 0x00, 0x01, 0x9c, 0xfd, 0x00, 0x02}


const unsigned short int cc_STPORT = 0xf083; // STPORT


// 0xecf2: db 0x88 0x00 '  '

// ================================================
// 0xecf4: WORD 'UNK_0xecf6' codep=0x7420 parp=0xecf6
// ================================================
IFieldType UNK_0xecf6 = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xecf9: WORD 'UNK_0xecfb' codep=0x7420 parp=0xecfb
// ================================================
IFieldType UNK_0xecfb = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xecfe: WORD 'UNK_0xed00' codep=0x7420 parp=0xed00
// ================================================
IFieldType UNK_0xed00 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xed03: WORD 'UNK_0xed05' codep=0x7420 parp=0xed05
// ================================================
IFieldType UNK_0xed05 = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xed08: WORD 'UNK_0xed0a' codep=0x1d29 parp=0xed0a orphan
// ================================================
// 0xed0a: db 0x3a 0x20 ': '

// ================================================
// 0xed0c: WORD 'UNK_0xed0e' codep=0x224c parp=0xed0e
// ================================================

void UNK_0xed0e() // UNK_0xed0e
{
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x000a); //  0x000a +
  RRND(); // RRND
  Push(Read16(pp_YBLT) + 1); // YBLT @ 1+
  Push(Read16(regsp)); // DUP
  Push(Pop() - 0x000c); //  0x000c -
  SWAP(); // SWAP
  RRND(); // RRND
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  Push(Pop() * 2); //  2*
  SWAP(); // SWAP
  _gt_HIDDEN(); // >HIDDEN
  L_at_PIXEL(); // L@PIXEL
  _gt_DISPLA(); // >DISPLA
  StoreCOLOR(); // !COLOR
  LPLOT(); // LPLOT
  Push(0x1421);
  Push(0x7e64);
  RRND(); // RRND
  Push(0);
  Push(pp_STIME); // STIME
  StoreD(); // D!
}


// ================================================
// 0xed52: WORD 'UNK_0xed54' codep=0x224c parp=0xed54 params=1 returns=0
// ================================================

void UNK_0xed54() // UNK_0xed54
{
  BEEPON_2(); // BEEPON_2
  Push(Read16(regsp)); // DUP
  Push(Pop() * 2); //  2*
  RRND(); // RRND
  TONE(); // TONE
}


// ================================================
// 0xed60: WORD 'UNK_0xed62' codep=0x224c parp=0xed62
// ================================================

void UNK_0xed62() // UNK_0xed62
{
  unsigned short int i, imax;
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(0x0096);
  Push(Read16(cc_MPS)); // MPS
  Push(2);
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  Push(0x0064);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    UNK_0xed54(); // UNK_0xed54
    UNK_0xed0e(); // UNK_0xed0e
    i++;
  } while(i<imax); // (LOOP)

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xed8a: WORD 'UNK_0xed8c' codep=0x1d29 parp=0xed8c
// ================================================
// 0xed8c: db 0x00 0x00 '  '

// ================================================
// 0xed8e: WORD 'UNK_0xed90' codep=0x224c parp=0xed90 params=0 returns=0
// ================================================

void UNK_0xed90() // UNK_0xed90
{
  unsigned short int a;
  Push((Read16(pp_STARDAT) - Read16(pp_UNK_0xed8c)) * 0x0014); // STARDAT @ UNK_0xed8c @ - 0x0014 *
  a = Pop(); // >R
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  do
  {
    Push(Read16(0x65e1+UNK_0xecfb.offset)&0xFF); // UNK_0xecfb<IFIELD> C@
    Push(Read16(regsp)); // DUP
    Push(!(Pop() & 8)); //  8 AND NOT
    SWAP(); // SWAP
    Push((Pop() & 2)==0?1:0); //  2 AND 0=
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(a + (Read16(0x65e1+UNK_0xed00.offset)&0xFF)); // I UNK_0xed00<IFIELD> C@ +
      Push(0x0064);
      MIN(); // MIN
      Push(0x65e1+UNK_0xed00.offset); // UNK_0xed00<IFIELD>
      C_ex__2(); // C!_2
    }
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Pop(); // DROP
  Push(Read16(pp_STARDAT)); // STARDAT @
  Push(pp_UNK_0xed8c); // UNK_0xed8c
  Store_2(); // !_2
}


// ================================================
// 0xedee: WORD 'MANX' codep=0x1d29 parp=0xedf7
// ================================================
// 0xedf7: db 0x06 0x00 '  '

// ================================================
// 0xedf9: WORD 'MANY' codep=0x1d29 parp=0xee02
// ================================================
// 0xee02: db 0x52 0x00 'R '

// ================================================
// 0xee04: WORD 'UNK_0xee06' codep=0x224c parp=0xee06 params=0 returns=1
// ================================================

void UNK_0xee06() // UNK_0xee06
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
// 0xee16: WORD 'UNK_0xee18' codep=0x224c parp=0xee18 params=0 returns=0
// ================================================

void UNK_0xee18() // UNK_0xee18
{
  UNK_0xee06(); // UNK_0xee06
  if (Pop() == 0) return;
  Push(0xcbcf); // probable 'U-PF'
  MODULE(); // MODULE
}


// ================================================
// 0xee26: WORD 'UNK_0xee28' codep=0x224c parp=0xee28 params=0 returns=0
// ================================================

void UNK_0xee28() // UNK_0xee28
{
  UNK_0xee06(); // UNK_0xee06
  if (Pop() == 0) return;
  Push(0xcb98); // probable 'U-A'
  MODULE(); // MODULE
}


// ================================================
// 0xee36: WORD 'UNK_0xee38' codep=0x224c parp=0xee38 params=0 returns=0
// ================================================

void UNK_0xee38() // UNK_0xee38
{
  UNK_0xee06(); // UNK_0xee06
  if (Pop() == 0) return;
  Push(0xc2db); // probable 'U-B'
  MODULE(); // MODULE
}


// ================================================
// 0xee46: WORD 'UNK_0xee48' codep=0x224c parp=0xee48 params=0 returns=0
// ================================================

void UNK_0xee48() // UNK_0xee48
{
  UNK_0xee06(); // UNK_0xee06
  if (Pop() == 0) return;
  Push(0xcca7); // probable 'U-SC'
  MODULE(); // MODULE
}


// ================================================
// 0xee56: WORD 'UNK_0xee58' codep=0x224c parp=0xee58 params=0 returns=0
// ================================================

void UNK_0xee58() // UNK_0xee58
{
  UNK_0xee06(); // UNK_0xee06
  if (Pop() == 0) return;
  Push(0xcce1); // probable 'U-TD'
  MODULE(); // MODULE
}


// ================================================
// 0xee66: WORD 'UNK_0xee68' codep=0x224c parp=0xee68 params=0 returns=0
// ================================================

void UNK_0xee68() // UNK_0xee68
{
  Push(0xcd3b); // probable 'U-OP'
  MODULE(); // MODULE
}


// ================================================
// 0xee70: WORD '|REGION' codep=0x224c parp=0xee7c
// ================================================

void _v_REGION() // |REGION
{
  if (Pop() != 0)
  {
    H_gt_D(); // H>D
  } else
  {
    D_gt_H(); // D>H
  }
  Push(Read16(cc_AX)); // AX
  _099(); // 099
  Push(Read16(pp_YBLT)); // YBLT @
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_BX) + 1); // BX 1+
  C_ex__2(); // C!_2
  Push(Read16(cc_DX) + 1); // DX 1+
  C_ex__2(); // C!_2
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_BX)); // BX
  C_ex__2(); // C!_2
  Push(Read16(cc_DX)); // DX
  C_ex__2(); // C!_2
  Push(Read16(pp_YBLT) - 0x000c); // YBLT @ 0x000c -
  Push(Read16(cc_CX) + 1); // CX 1+
  C_ex__2(); // C!_2
  Push(Read16(pp_XBLT) + 0x0014); // XBLT @ 0x0014 +
  Push(Read16(cc_CX)); // CX
  C_ex__2(); // C!_2
  GRCALL(); // GRCALL
}


// ================================================
// 0xeece: WORD 'UNK_0xeed0' codep=0x1d29 parp=0xeed0
// ================================================
// 0xeed0: db 0x01 0x00 '  '

// ================================================
// 0xeed2: WORD 'UNK_0xeed4' codep=0x1d29 parp=0xeed4
// ================================================
// 0xeed4: db 0x07 0x04 0x12 0x1d 0x27 0x2d 0x3c 0x47 0x51 0x5c 0x66 0x6e 0x7c 0x88 0x92 '    '-<GQ\fn|  '

// ================================================
// 0xeee3: WORD 'UNK_0xeee5' codep=0x224c parp=0xeee5 params=2 returns=0
// ================================================

void UNK_0xeee5() // UNK_0xeee5
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
// 0xef0d: WORD 'UNK_0xef0f' codep=0x1d29 parp=0xef0f
// ================================================
// 0xef0f: db 0x56 0x3a 0x20 0x56 'V: V'

// ================================================
// 0xef13: WORD 'UNK_0xef15' codep=0x224c parp=0xef15
// ================================================

void UNK_0xef15() // UNK_0xef15
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xef0f); // UNK_0xef0f
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xef21: WORD 'UNK_0xef23' codep=0x224c parp=0xef23
// ================================================

void UNK_0xef23() // UNK_0xef23
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x9c40); Push(0x0000);
  D_plus_(); // D+
  Push(pp_UNK_0xef0f); // UNK_0xef0f
  StoreD(); // D!
}


// ================================================
// 0xef35: WORD 'UNK_0xef37' codep=0x224c parp=0xef37 params=0 returns=2
// ================================================

void UNK_0xef37() // UNK_0xef37
{
  SET_STR_AS_PARAM("OPERATIONS");
}


// ================================================
// 0xef46: WORD 'UNK_0xef48' codep=0x224c parp=0xef48 params=0 returns=2
// ================================================

void UNK_0xef48() // UNK_0xef48
{
  SET_STR_AS_PARAM("SHIP CONFIGURATION");
}


// ================================================
// 0xef5f: WORD 'UNK_0xef61' codep=0x224c parp=0xef61 params=0 returns=2
// ================================================

void UNK_0xef61() // UNK_0xef61
{
  SET_STR_AS_PARAM("PERSONNEL");
}


// ================================================
// 0xef6f: WORD 'UNK_0xef71' codep=0x224c parp=0xef71 params=0 returns=2
// ================================================

void UNK_0xef71() // UNK_0xef71
{
  SET_STR_AS_PARAM("CREW ASSIGNMENT");
}


// ================================================
// 0xef85: WORD 'UNK_0xef87' codep=0x224c parp=0xef87 params=0 returns=2
// ================================================

void UNK_0xef87() // UNK_0xef87
{
  SET_STR_AS_PARAM("TRADE DEPOT");
}


// ================================================
// 0xef97: WORD 'UNK_0xef99' codep=0x224c parp=0xef99 params=0 returns=2
// ================================================

void UNK_0xef99() // UNK_0xef99
{
  SET_STR_AS_PARAM("BANK");
}


// ================================================
// 0xefa2: WORD 'UNK_0xefa4' codep=0x224c parp=0xefa4 params=0 returns=2
// ================================================

void UNK_0xefa4() // UNK_0xefa4
{
  SET_STR_AS_PARAM("DOCKING BAY");
}


// ================================================
// 0xefb4: WORD 'UNK_0xefb6' codep=0x224c parp=0xefb6
// ================================================

void UNK_0xefb6() // UNK_0xefb6
{
  Push(0x00c7);
  Push(0x002c);
  Push(0x00c0);
  Push(0x0072);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
  Push(0);
  Push(0);
}


// ================================================
// 0xefd0: WORD '(.DOOR)' codep=0x4b3b parp=0xefdc
// ================================================

void _ro__dot_DOOR_rc_() // (.DOOR)
{
  switch(Pop()) // (.DOOR)
  {
  case 1:
    UNK_0xef37(); // UNK_0xef37
    break;
  case 2:
    UNK_0xef99(); // UNK_0xef99
    break;
  case 3:
    UNK_0xef61(); // UNK_0xef61
    break;
  case 4:
    UNK_0xef71(); // UNK_0xef71
    break;
  case 5:
    UNK_0xef87(); // UNK_0xef87
    break;
  case 6:
    UNK_0xef48(); // UNK_0xef48
    break;
  case 7:
    UNK_0xefa4(); // UNK_0xefa4
    break;
  default:
    UNK_0xefb6(); // UNK_0xefb6
    break;

  }
}

// ================================================
// 0xeffc: WORD 'UNK_0xeffe' codep=0x224c parp=0xeffe
// ================================================

void UNK_0xeffe() // UNK_0xeffe
{
  GetCRS(); // @CRS
  Push(Read16(pp_UNK_0xeed0)); // UNK_0xeed0 @
  _ro__dot_DOOR_rc_(); // (.DOOR) case
  UNK_0xeee5(); // UNK_0xeee5
  StoreCRS(); // !CRS
}


// ================================================
// 0xf00c: WORD 'UNK_0xf00e' codep=0x224c parp=0xf00e params=1 returns=1
// ================================================

void UNK_0xf00e() // UNK_0xf00e
{
  unsigned short int a;
  Push(Pop() * 2 + (pp_UNK_0xeed4 + 1)); //  2 * UNK_0xeed4 1+ +
  a = Pop(); // >R
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(a)&0xFF); // I C@
  Push(Read16(a + 1)&0xFF); // R> 1+ C@
  WITHIN(); // WITHIN
}


// ================================================
// 0xf02c: WORD 'UNK_0xf02e' codep=0x224c parp=0xf02e params=0 returns=0
// ================================================

void UNK_0xf02e() // UNK_0xf02e
{
  unsigned short int i, imax;
  Push(Read16(pp_UNK_0xeed0)==0?1:0); // UNK_0xeed0 @ 0=
  if (Pop() != 0)
  {
    Push(Read16(pp_UNK_0xeed4)&0xFF); // UNK_0xeed4 C@
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(i); // I
      UNK_0xf00e(); // UNK_0xf00e
      if (Pop() != 0)
      {
        Push(i + 1); // I 1+
        Push(pp_UNK_0xeed0); // UNK_0xeed0
        Store_2(); // !_2
        UNK_0xeffe(); // UNK_0xeffe
        imax = i; // LEAVE
      }
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  Push(Read16(pp_UNK_0xeed0) - 1); // UNK_0xeed0 @ 1-
  UNK_0xf00e(); // UNK_0xf00e
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(pp_UNK_0xeed0); // UNK_0xeed0
  _099(); // 099
  UNK_0xeffe(); // UNK_0xeffe
}


// ================================================
// 0xf072: WORD 'UNK_0xf074' codep=0x1d29 parp=0xf074 orphan
// ================================================
// 0xf074: db 0x3a 0x20 0x05 0x41 ':  A'

// ================================================
// 0xf078: WORD 'STPORT' codep=0x2214 parp=0xf083
// ================================================
// 0xf083: dw 0xf086
// 0xf085: db 0x00 0x70 0x6f 0x72 0x74 0x2e 0x72 0x61 0x77 0x00 ' port.raw '

// ================================================
// 0xf08f: WORD 'UNK_0xf091' codep=0x224c parp=0xf091
// ================================================

void UNK_0xf091() // UNK_0xf091
{
  SAVE_dash_BU(); // SAVE-BU
  Push(Read16(cc_STPORT)); // STPORT
  Push(Read16(pp_PIC_h_)); // PIC^ @
  _ro_LDS_rc_(); // (LDS)
  MOUNTB(); // MOUNTB
}


// ================================================
// 0xf09f: WORD 'UNK_0xf0a1' codep=0x224c parp=0xf0a1
// ================================================

void UNK_0xf0a1() // UNK_0xf0a1
{
  CTINIT(); // CTINIT
  Push(0xaa3b); // probable '<CTASKM'
  Push(pp_ASKMOUN); // ASKMOUN
  Store_2(); // !_2
  Push(0xaa1d); // probable '<CTVERS'
  Push(pp__i_VERSIO); // 'VERSIO
  Store_2(); // !_2
}


// ================================================
// 0xf0b5: WORD 'UNK_0xf0b7' codep=0x224c parp=0xf0b7
// ================================================

void UNK_0xf0b7() // UNK_0xf0b7
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  _gt_SSCT(); // >SSCT
  CTINIT(); // CTINIT
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("WAIT..");
    DrawTTY(); // .TTY
  }
  Push(Read16(pp_PIC_h_)); // PIC^ @
  Push(0);
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0);
  Push(0x3ded);
  LCMOVE(); // LCMOVE
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    _gt_HIDDEN(); // >HIDDEN
  } else
  {
    _gt_DISPLA(); // >DISPLA
  }
  DARK(); // DARK
  Push(0xb9f9); // probable 'SETBLT'
  MODULE(); // MODULE
  Push(0);
  Push(0x0096);
  DrawRAW(); // .RAW
  UNK_0xf0a1(); // UNK_0xf0a1
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    SCR_dash_RES(); // SCR-RES
  } else
  {
    SAVE_dash_SC(); // SAVE-SC
  }
  H_gt_D(); // H>D
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xf11a: WORD 'UNK_0xf11c' codep=0x224c parp=0xf11c
// ================================================

void UNK_0xf11c() // UNK_0xf11c
{
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  Push(0xc1f8); // probable '?APP'
  Push(pp__i_CREW_dash_C); // 'CREW-C
  Store_2(); // !_2
  Push(0xc1c7); // probable 'HEAL'
  Push(pp__i_TREATM); // 'TREATM
  Store_2(); // !_2
  Push(0x3a48); // probable 'NOP'
  Push(pp__i__dot_VITAL); // '.VITAL
  Store_2(); // !_2
  Push(0xc39d); // probable '?SHIP-R'
  Push(pp__i_VEHICL); // 'VEHICL
  Store_2(); // !_2
  Push(0xc0f9); // probable '.SORD'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  Store_2(); // !_2
  Push(0xc3cf); // probable 'MREPAIR'
  Push(pp__i_REPAIR); // 'REPAIR
  Store_2(); // !_2
  Push(0xc0e7); // probable '/STARD'
  Push(pp__i__dot_DATE); // '.DATE
  Store_2(); // !_2
  Push(0xca0d); // probable '!'EXT'
  MODULE(); // MODULE
  Push(0x0032);
  Push(pp__pe_VAL); // %VAL
  Store_2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(7 - ((Read16(0x65e1+UNK_0xecf6.offset)&0xFF) & 7)); // 7 UNK_0xecf6<IFIELD> C@ 7 AND -
  Push(pp_E_dash_USE); // E-USE
  Store_2(); // !_2
  Push(Read16(0x65e1+UNK_0xed05.offset)); // UNK_0xed05<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(0x000a);
  U_star_(); // U*
  Push(pp__10_star_CARG); // 10*CARG
  StoreD(); // D!
  Push(pp_IsTV); // ?TV
  ON_2(); // ON_2
  Push(pp_IsRECALL); // ?RECALL
  _099(); // 099
  UNK_0xed62(); // UNK_0xed62
}


// ================================================
// 0xf196: WORD 'UNK_0xf198' codep=0x224c parp=0xf198 params=1 returns=0
// ================================================

void UNK_0xf198() // UNK_0xf198
{
  Push(0xd4cc); // probable '?FLIG'
  MODULE(); // MODULE
  if (Pop() == 0) return;
  UNK_0xf11c(); // UNK_0xf11c
  Push(0xc8c3); // probable '?FRE'
  MODULE(); // MODULE
  Push(0xd491); // probable 'OVFLT'
  MODULE(); // MODULE
  UNK_0xf091(); // UNK_0xf091
  Push(0xc2cd); // probable 'I-TRANS'
  MODULE(); // MODULE
  UNK_0xed90(); // UNK_0xed90
}


// ================================================
// 0xf1bc: WORD 'UNK_0xf1be' codep=0x1d29 parp=0xf1be
// ================================================
// 0xf1be: db 0x3a 0x20 ': '

// ================================================
// 0xf1c0: WORD 'UNK_0xf1c2' codep=0x1d29 parp=0xf1c2
// ================================================
// 0xf1c2: db 0xff 0xff '  '

// ================================================
// 0xf1c4: WORD 'UNK_0xf1c6' codep=0x1d29 parp=0xf1c6
// ================================================
// 0xf1c6: db 0x00 0x03 0x03 0x00 0x02 0x05 0x00 0x02 0x02 0x0f 0x03 0x03 '            '

// ================================================
// 0xf1d2: WORD 'UNK_0xf1d4' codep=0x1d29 parp=0xf1d4
// ================================================
// 0xf1d4: db 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x3e 0xba 0x05 0x0a 0xc0 0x06 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x1d 0xba 0x04 0x0a 0x00 0x02 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x5c 0xba 0x01 0x0a 0x80 0x00 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x70 0x00 0x2d 0x54 0x0d 0x06 0xc0 0x04 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x20 0x00 0x1c 0x30 0x06 0x04 0x80 0x01 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x20 0x00 0x18 0x30 0x02 0x04 0x80 0x01 0x1f 0x1c 0x87 0x0f 0xc0 0xc1 0xf8 0x00 0x1d 0xba 0x04 0x0a 0x00 0x02 0x1f 0x1c 0x87 0x0f 0xc0 0xc1 0xf8 0x00 0x5c 0xba 0x01 0x0a 0x80 0x00 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x70 0x00 0x5a 0x54 0x05 0x0c 0x40 0x86 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x20 0x00 0x1c 0x18 0x03 0x04 0x00 0x03 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x20 0x00 0x0c 0x18 0x02 0x04 0x00 0x03 '     A  >          A             A  \           p -T             0             0                          \           p ZT  @                             '

// ================================================
// 0xf26e: WORD 'UNK_0xf270' codep=0x1d29 parp=0xf270
// ================================================
// 0xf270: db 0xc4 0x00 0x02 0x03 0x1e 0x01 0x01 0x04 0x14 0x00 0x00 0x05 0xe2 0xff 0x01 0x04 0x3c 0x00 0x02 0x03 0xc4 0x00 0xfe 0x08 0x1e 0x01 0xff 0x09 0x14 0x00 0x00 0x0a 0xe2 0xff 0xff 0x09 0x3c 0x00 0xfe 0x08 0x9c 0x03 0x00 0x06 0x9c 0x03 0x00 0x07 0x9c 0xfd 0x00 0x01 0x9c 0xfd 0x00 0x02 '                <                   <                   '

// ================================================
// 0xf2a8: WORD 'UNK_0xf2aa' codep=0x224c parp=0xf2aa params=0 returns=0
// ================================================

void UNK_0xf2aa() // UNK_0xf2aa
{
  Push(Read16(pp_UNK_0xf1d4 + 0x000c) + 0x8040); // UNK_0xf1d4 0x000c + @ 0x8040 XOR
  Push(pp_UNK_0xf1d4 + 0x000c); // UNK_0xf1d4 0x000c +
  Store_2(); // !_2
}


// ================================================
// 0xf2c6: WORD 'UNK_0xf2c8' codep=0x224c parp=0xf2c8
// ================================================

void UNK_0xf2c8() // UNK_0xf2c8
{
  GetCRS(); // @CRS
  Push(pp_UNK_0xf1c6 + Read16(pp_UNK_0xf1be) * 3); // UNK_0xf1c6 UNK_0xf1be @ 3 * +
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  StoreCOLOR(); // !COLOR
  Push(Read16(Pop() + 1)&0xFF); //  1+ C@
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(Read16(Pop() + 2)&0xFF); //  2+ C@
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(-2);
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(2);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(pp_UNK_0xf1c2); // UNK_0xf1c2
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  BLT(); // BLT
  StoreCRS(); // !CRS
}


// ================================================
// 0xf306: WORD 'UNK_0xf308' codep=0x224c parp=0xf308
// ================================================

void UNK_0xf308() // UNK_0xf308
{
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  Push(9);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(0x000c);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  CTINIT(); // CTINIT
  Push(pp_UNK_0xf1d4); // UNK_0xf1d4
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(Read16(pp_MANX)); // MANX @
  Push(Read16(pp_MANY)); // MANY @
  POS_dot_(); // POS.
  Push(0);
  _v_REGION(); // |REGION
  BLT(); // BLT
  Push(pp_UNK_0xf1be); // UNK_0xf1be
  _099(); // 099
  UNK_0xf2c8(); // UNK_0xf2c8
}


// ================================================
// 0xf33c: WORD 'UNK_0xf33e' codep=0x224c parp=0xf33e
// ================================================

void UNK_0xf33e() // UNK_0xf33e
{
  Push(1);
  _v_REGION(); // |REGION
}


// ================================================
// 0xf344: WORD 'UNK_0xf346' codep=0x224c parp=0xf346
// ================================================

void UNK_0xf346() // UNK_0xf346
{
  Push(0);
  _v_REGION(); // |REGION
  BLT(); // BLT
  UNK_0xf2c8(); // UNK_0xf2c8
}


// ================================================
// 0xf350: WORD 'UNK_0xf352' codep=0x224c parp=0xf352 params=0 returns=0
// ================================================

void UNK_0xf352() // UNK_0xf352
{
  Push(0);
  Push(0x03e8);
  Push(1);
  _gt_SND(); // >SND
}


// ================================================
// 0xf35e: WORD 'UNK_0xf360' codep=0x224c parp=0xf360 params=0 returns=0
// ================================================

void UNK_0xf360() // UNK_0xf360
{
  Push(Read16(pp_XBLT)); // XBLT @
  Push(2);
  MAX(); // MAX
  Push(0x009b);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(pp_MANX); // MANX
  Store_2(); // !_2
  SAVE_dash_OV(); // SAVE-OV
}


// ================================================
// 0xf37c: WORD 'UNK_0xf37e' codep=0x224c parp=0xf37e
// ================================================

void UNK_0xf37e() // UNK_0xf37e
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Pop() * 0x000e + pp_UNK_0xf1d4); //  0x000e * UNK_0xf1d4 +
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(pp_YBLT)); // YBLT @
  _2SWAP(); // 2SWAP
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  UNK_0xf360(); // UNK_0xf360
  Push(Read16(pp_XBLT)); // XBLT @
  Push(Read16(pp_YBLT)); // YBLT @
  _2SWAP(); // 2SWAP
  POS_dot_(); // POS.
  DISPLAY(); // DISPLAY
  UNK_0xf33e(); // UNK_0xf33e
  POS_dot_(); // POS.
  UNK_0xf346(); // UNK_0xf346
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    UNK_0xf352(); // UNK_0xf352
  }
  ABS(); // ABS
  Push(3);
  Push(4);
  _star__slash_(); // */
  MS(); // MS
}


// ================================================
// 0xf3ce: WORD 'UNK_0xf3d0' codep=0x224c parp=0xf3d0
// ================================================

void UNK_0xf3d0() // UNK_0xf3d0
{
  unsigned short int i, imax, a;
  UNK_0xef23(); // UNK_0xef23
  Push(pp_UNK_0xf1be); // UNK_0xf1be
  Store_2(); // !_2
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_UNK_0xf270); // UNK_0xf270
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
    UNK_0xf37e(); // UNK_0xf37e
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  UNK_0xf02e(); // UNK_0xf02e
}


// ================================================
// 0xf40e: WORD 'UNK_0xf410' codep=0x224c parp=0xf410
// ================================================

void UNK_0xf410() // UNK_0xf410
{
  Push(0);
  Push(5);
  Push(1);
  UNK_0xf3d0(); // UNK_0xf3d0
}


// ================================================
// 0xf41a: WORD 'UNK_0xf41c' codep=0x224c parp=0xf41c
// ================================================

void UNK_0xf41c() // UNK_0xf41c
{
  Push(0x0014);
  Push(5);
  Push(2);
  UNK_0xf3d0(); // UNK_0xf3d0
}


// ================================================
// 0xf428: WORD 'UNK_0xf42a' codep=0x224c parp=0xf42a
// ================================================

void UNK_0xf42a() // UNK_0xf42a
{
  unsigned short int i, imax;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_ABLT)==pp_UNK_0xf1d4?1:0); // ABLT @ UNK_0xf1d4 =
  if (Pop() != 0)
  {
    Push(0);
    Push(0x05dc);
    RRND(); // RRND
    Push(Pop()==0?1:0); //  0=
    UNK_0xef15(); // UNK_0xef15
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(4);
      Push(0);

      i = Pop();
      imax = Pop();
      do // (DO)
      {
        UNK_0xf2aa(); // UNK_0xf2aa
        DISPLAY(); // DISPLAY
        UNK_0xf33e(); // UNK_0xf33e
        UNK_0xf346(); // UNK_0xf346
        Push(0x0032);
        MS(); // MS
        UNK_0xf2aa(); // UNK_0xf2aa
        DISPLAY(); // DISPLAY
        UNK_0xf33e(); // UNK_0xf33e
        UNK_0xf346(); // UNK_0xf346
        UNK_0xf352(); // UNK_0xf352
        Push(0x0096);
        MS(); // MS
        i++;
      } while(i<imax); // (LOOP)

    }
    return;
  }
  Push(pp_UNK_0xf1be); // UNK_0xf1be
  _099(); // 099
  Push2Words("NULL");
  Push2Words("NULL");
  UNK_0xf37e(); // UNK_0xf37e
}


// ================================================
// 0xf484: WORD 'UNK_0xf486' codep=0x224c parp=0xf486
// ================================================

void UNK_0xf486() // UNK_0xf486
{
  UNK_0xf0b7(); // UNK_0xf0b7
  UNK_0xf308(); // UNK_0xf308
  UNK_0xefb6(); // UNK_0xefb6
  Pop(); Pop(); // 2DROP
  UNK_0xeffe(); // UNK_0xeffe
}


// ================================================
// 0xf492: WORD 'DO-ROOM' codep=0x4b3b parp=0xf49e
// ================================================

void DO_dash_ROOM() // DO-ROOM
{
  switch(Pop()) // DO-ROOM
  {
  case 3:
    UNK_0xee18(); // UNK_0xee18
    break;
  case 4:
    UNK_0xee28(); // UNK_0xee28
    break;
  case 6:
    UNK_0xee48(); // UNK_0xee48
    break;
  case 5:
    UNK_0xee58(); // UNK_0xee58
    break;
  case 2:
    UNK_0xee38(); // UNK_0xee38
    break;
  case 1:
    UNK_0xee68(); // UNK_0xee68
    break;
  case 7:
    UNK_0xf198(); // UNK_0xf198
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4be: WORD 'UNK_0xf4c0' codep=0x224c parp=0xf4c0
// ================================================

void UNK_0xf4c0() // UNK_0xf4c0
{
  Push(Read16(pp_XBLT)); // XBLT @
  Push(pp_MANX); // MANX
  Store_2(); // !_2
  Push(Read16(pp_UNK_0xeed0)); // UNK_0xeed0 @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(pp_HUB); // HUB
    _099(); // 099
    Push(pp_ESC_dash_EN); // ESC-EN
    _099(); // 099
  }
  DO_dash_ROOM(); // DO-ROOM case
  Push(Read16(pp_UNK_0xeed0)); // UNK_0xeed0 @
  if (Pop() == 0) return;
  Push(pp_HUB); // HUB
  ON_2(); // ON_2
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  UNK_0xf486(); // UNK_0xf486
  UNK_0xef23(); // UNK_0xef23
}


// ================================================
// 0xf4f2: WORD 'XWALK' codep=0x4b3b parp=0xf4fc
// ================================================

void XWALK() // XWALK
{
  switch(Pop()) // XWALK
  {
  case 1:
    UNK_0xf410(); // UNK_0xf410
    break;
  case 65535:
    UNK_0xf41c(); // UNK_0xf41c
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf508: WORD 'WALKIES' codep=0x224c parp=0xf514
// ================================================
// entry

void WALKIES() // WALKIES
{
  Push(5);
  Push(pp_CONTEXT_3); // CONTEXT_3
  Store_2(); // !_2
  UNK_0xf091(); // UNK_0xf091
  UNK_0xef23(); // UNK_0xef23
  UNK_0xf486(); // UNK_0xf486
  do
  {
    XYSCAN(); // XYSCAN
    _2DUP(); // 2DUP
    XWALK(); // XWALK case
    Pop(); // DROP
    Push(Pop() | Pop()); // OR
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      UNK_0xf42a(); // UNK_0xf42a
    }
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      UNK_0xf4c0(); // UNK_0xf4c0
      _i_KEY(); // 'KEY
      Pop(); // DROP
    }
  } while(1);
}


// ================================================
// 0xf544: WORD 'PPIC' codep=0x224c parp=0xf54d
// ================================================
// entry

void PPIC() // PPIC
{
  UNK_0xf091(); // UNK_0xf091
  UNK_0xf486(); // UNK_0xf486
}

// 0xf553: db 0x50 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'PM-VOC_______ '

