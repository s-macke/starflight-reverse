// ====== OVERLAY 'SEED-OV' ======
// store offset = 0xec00
// overlay size   = 0x0960

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xec1a  codep:0x2214 parp:0xec1a size:0x0002 C-string:'UNK_0xec1a'
//      UNK_0xec1e  codep:0x2214 parp:0xec1e size:0x0002 C-string:'UNK_0xec1e'
//      UNK_0xec22  codep:0x2214 parp:0xec22 size:0x0002 C-string:'UNK_0xec22'
//      UNK_0xec26  codep:0x73ea parp:0xec26 size:0x0006 C-string:'UNK_0xec26'
//      UNK_0xec2e  codep:0x73ea parp:0xec2e size:0x0006 C-string:'UNK_0xec2e'
//      UNK_0xec36  codep:0x1d29 parp:0xec36 size:0x0002 C-string:'UNK_0xec36'
//      UNK_0xec3a  codep:0x73ea parp:0xec3a size:0x0006 C-string:'UNK_0xec3a'
//      UNK_0xec42  codep:0x73ea parp:0xec42 size:0x0006 C-string:'UNK_0xec42'
//      UNK_0xec4a  codep:0x73ea parp:0xec4a size:0x0006 C-string:'UNK_0xec4a'
//      UNK_0xec52  codep:0x73ea parp:0xec52 size:0x0006 C-string:'UNK_0xec52'
//      UNK_0xec5a  codep:0x73ea parp:0xec5a size:0x000b C-string:'UNK_0xec5a'
//      UNK_0xec67  codep:0x73ea parp:0xec67 size:0x0006 C-string:'UNK_0xec67'
//      UNK_0xec6f  codep:0x73ea parp:0xec6f size:0x0006 C-string:'UNK_0xec6f'
//      UNK_0xec77  codep:0x744d parp:0xec77 size:0x0003 C-string:'UNK_0xec77'
//      UNK_0xec7c  codep:0x744d parp:0xec7c size:0x0003 C-string:'UNK_0xec7c'
//      UNK_0xec81  codep:0x73ea parp:0xec81 size:0x0006 C-string:'UNK_0xec81'
//      UNK_0xec89  codep:0x744d parp:0xec89 size:0x0003 C-string:'UNK_0xec89'
//      UNK_0xec8e  codep:0x744d parp:0xec8e size:0x0003 C-string:'UNK_0xec8e'
//      UNK_0xec93  codep:0x744d parp:0xec93 size:0x0003 C-string:'UNK_0xec93'
//      UNK_0xec98  codep:0x73ea parp:0xec98 size:0x0006 C-string:'UNK_0xec98'
//      UNK_0xeca0  codep:0x73ea parp:0xeca0 size:0x0006 C-string:'UNK_0xeca0'
//      UNK_0xeca8  codep:0x744d parp:0xeca8 size:0x0033 C-string:'UNK_0xeca8'
//      UNK_0xecdd  codep:0x224c parp:0xecdd size:0x001c C-string:'UNK_0xecdd'
//      UNK_0xecfb  codep:0x224c parp:0xecfb size:0x001c C-string:'UNK_0xecfb'
//      UNK_0xed19  codep:0x224c parp:0xed19 size:0x0016 C-string:'UNK_0xed19'
//      UNK_0xed31  codep:0x224c parp:0xed31 size:0x000a C-string:'UNK_0xed31'
//      UNK_0xed3d  codep:0x224c parp:0xed3d size:0x000a C-string:'UNK_0xed3d'
//      UNK_0xed49  codep:0x224c parp:0xed49 size:0x0010 C-string:'UNK_0xed49'
//      UNK_0xed5b  codep:0x224c parp:0xed5b size:0x001c C-string:'UNK_0xed5b'
//      UNK_0xed79  codep:0x224c parp:0xed79 size:0x0010 C-string:'UNK_0xed79'
//      UNK_0xed8b  codep:0x224c parp:0xed8b size:0x0010 C-string:'UNK_0xed8b'
//      UNK_0xed9d  codep:0x224c parp:0xed9d size:0x0010 C-string:'UNK_0xed9d'
//      UNK_0xedaf  codep:0x224c parp:0xedaf size:0x0050 C-string:'UNK_0xedaf'
//      UNK_0xee01  codep:0x224c parp:0xee01 size:0x0012 C-string:'UNK_0xee01'
//      UNK_0xee15  codep:0x224c parp:0xee15 size:0x0036 C-string:'UNK_0xee15'
//      UNK_0xee4d  codep:0x224c parp:0xee4d size:0x0042 C-string:'UNK_0xee4d'
//      UNK_0xee91  codep:0x224c parp:0xee91 size:0x0052 C-string:'UNK_0xee91'
//      UNK_0xeee5  codep:0x73ea parp:0xeee5 size:0x0006 C-string:'UNK_0xeee5'
//      UNK_0xeeed  codep:0x73ea parp:0xeeed size:0x0006 C-string:'UNK_0xeeed'
//      UNK_0xeef5  codep:0x73ea parp:0xeef5 size:0x0006 C-string:'UNK_0xeef5'
//      UNK_0xeefd  codep:0x73ea parp:0xeefd size:0x0006 C-string:'UNK_0xeefd'
//      UNK_0xef05  codep:0x73ea parp:0xef05 size:0x0006 C-string:'UNK_0xef05'
//      UNK_0xef0d  codep:0x73ea parp:0xef0d size:0x0006 C-string:'UNK_0xef0d'
//      UNK_0xef15  codep:0x73ea parp:0xef15 size:0x0006 C-string:'UNK_0xef15'
//      UNK_0xef1d  codep:0x73ea parp:0xef1d size:0x0006 C-string:'UNK_0xef1d'
//      UNK_0xef25  codep:0x73ea parp:0xef25 size:0x0006 C-string:'UNK_0xef25'
//      UNK_0xef2d  codep:0x73ea parp:0xef2d size:0x0006 C-string:'UNK_0xef2d'
//      UNK_0xef35  codep:0x73ea parp:0xef35 size:0x0006 C-string:'UNK_0xef35'
//      UNK_0xef3d  codep:0x73ea parp:0xef3d size:0x0006 C-string:'UNK_0xef3d'
//      UNK_0xef45  codep:0x73ea parp:0xef45 size:0x0006 C-string:'UNK_0xef45'
//      UNK_0xef4d  codep:0x73ea parp:0xef4d size:0x0006 C-string:'UNK_0xef4d'
//      UNK_0xef55  codep:0x73ea parp:0xef55 size:0x0006 C-string:'UNK_0xef55'
//      UNK_0xef5d  codep:0x73ea parp:0xef5d size:0x0016 C-string:'UNK_0xef5d'
//      UNK_0xef75  codep:0x224c parp:0xef75 size:0x0012 C-string:'UNK_0xef75'
//      UNK_0xef89  codep:0x224c parp:0xef89 size:0x003a C-string:'UNK_0xef89'
//      UNK_0xefc5  codep:0x224c parp:0xefc5 size:0x003a C-string:'UNK_0xefc5'
//      UNK_0xf001  codep:0x224c parp:0xf001 size:0x0008 C-string:'UNK_0xf001'
//      UNK_0xf00b  codep:0x224c parp:0xf00b size:0x001e C-string:'UNK_0xf00b'
//      UNK_0xf02b  codep:0x224c parp:0xf02b size:0x004c C-string:'UNK_0xf02b'
//      UNK_0xf079  codep:0x224c parp:0xf079 size:0x004c C-string:'UNK_0xf079'
//      UNK_0xf0c7  codep:0x224c parp:0xf0c7 size:0x002e C-string:'UNK_0xf0c7'
//      UNK_0xf0f7  codep:0x224c parp:0xf0f7 size:0x004a C-string:'UNK_0xf0f7'
//      UNK_0xf143  codep:0x224c parp:0xf143 size:0x001e C-string:'UNK_0xf143'
//      UNK_0xf163  codep:0x224c parp:0xf163 size:0x0024 C-string:'UNK_0xf163'
//      UNK_0xf189  codep:0x224c parp:0xf189 size:0x0010 C-string:'UNK_0xf189'
//      UNK_0xf19b  codep:0x224c parp:0xf19b size:0x0024 C-string:'UNK_0xf19b'
//      UNK_0xf1c1  codep:0x224c parp:0xf1c1 size:0x0044 C-string:'UNK_0xf1c1'
//      UNK_0xf207  codep:0x224c parp:0xf207 size:0x003c C-string:'UNK_0xf207'
//      UNK_0xf245  codep:0x224c parp:0xf245 size:0x0024 C-string:'UNK_0xf245'
//      UNK_0xf26b  codep:0x224c parp:0xf26b size:0x0032 C-string:'UNK_0xf26b'
//      UNK_0xf29f  codep:0x224c parp:0xf29f size:0x001a C-string:'UNK_0xf29f'
//      UNK_0xf2bb  codep:0x224c parp:0xf2bb size:0x0030 C-string:'UNK_0xf2bb'
//      UNK_0xf2ed  codep:0x224c parp:0xf2ed size:0x001e C-string:'UNK_0xf2ed'
//      UNK_0xf30d  codep:0x224c parp:0xf30d size:0x000c C-string:'UNK_0xf30d'
//      UNK_0xf31b  codep:0x224c parp:0xf31b size:0x000a C-string:'UNK_0xf31b'
//      UNK_0xf327  codep:0x224c parp:0xf327 size:0x002a C-string:'UNK_0xf327'
//          ?EXIST  codep:0x224c parp:0xf35c size:0x0084 C-string:'_ask_EXIST'
//      UNK_0xf3e2  codep:0x224c parp:0xf3e2 size:0x0008 C-string:'UNK_0xf3e2'
//      UNK_0xf3ec  codep:0x224c parp:0xf3ec size:0x0008 C-string:'UNK_0xf3ec'
//      UNK_0xf3f6  codep:0x224c parp:0xf3f6 size:0x0008 C-string:'UNK_0xf3f6'
//      UNK_0xf400  codep:0x224c parp:0xf400 size:0x002a C-string:'UNK_0xf400'
//      UNK_0xf42c  codep:0x224c parp:0xf42c size:0x0014 C-string:'UNK_0xf42c'
//      UNK_0xf442  codep:0x224c parp:0xf442 size:0x0010 C-string:'UNK_0xf442'
//      UNK_0xf454  codep:0x224c parp:0xf454 size:0x0012 C-string:'UNK_0xf454'
//      UNK_0xf468  codep:0x224c parp:0xf468 size:0x0028 C-string:'UNK_0xf468'
//      UNK_0xf492  codep:0x224c parp:0xf492 size:0x0036 C-string:'UNK_0xf492'
//          POPULA  codep:0x224c parp:0xf4d3 size:0x0000 C-string:'POPULA'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__3; // 3
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__dash_1; // -1
extern const unsigned short int pp__ask_CRITIC; // ?CRITIC
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_MOVED; // MOVED
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_PLHI; // PLHI
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
void D_st_(); // D<
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_eq_(); // D=
void RRND(); // RRND
void ACELLADDR(); // ACELLADDR
void A_at_(); // A@
void SETLARRAY(); // SETLARRAY
void C_ex_(); // C!
void _ex__3(); // !_3
void _plus__ex_(); // +!
void _1_dot_5_ex_(); // 1.5!
void _2_ex_(); // 2!
void OFF(); // OFF
void _at_RECORD(); // @RECORD
void CDROP(); // CDROP
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void _ask_LAST(); // ?LAST
void INEXT(); // INEXT
void IPREV(); // IPREV
void ILAST(); // ILAST
void IINSERT(); // IINSERT
void IEXTRACT(); // IEXTRACT
void _at_NEWSPACE(); // @NEWSPACE
void MAXSPACE(); // MAXSPACE
void IFLD_at_(); // IFLD@
void _ask_CLASS_slash_(); // ?CLASS/
void IFIND(); // IFIND
void ALL(); // ALL
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void _ask_INVIS(); // ?INVIS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xec36 = 0xec36; // UNK_0xec36 size: 2
// {0x01, 0x00}


const unsigned short int cc_UNK_0xec1a = 0xec1a; // UNK_0xec1a
const unsigned short int cc_UNK_0xec1e = 0xec1e; // UNK_0xec1e
const unsigned short int cc_UNK_0xec22 = 0xec22; // UNK_0xec22


// 0xec12: db 0x93 0x00 0x14 0x22 0x20 0x00 '   "  '

// ================================================
// 0xec18: WORD 'UNK_0xec1a' codep=0x2214 parp=0xec1a
// ================================================
// 0xec1a: db 0x43 0x00 'C '

// ================================================
// 0xec1c: WORD 'UNK_0xec1e' codep=0x2214 parp=0xec1e
// ================================================
// 0xec1e: db 0x44 0x00 'D '

// ================================================
// 0xec20: WORD 'UNK_0xec22' codep=0x2214 parp=0xec22
// ================================================
// 0xec22: db 0x1c 0x00 '  '

// ================================================
// 0xec24: WORD 'UNK_0xec26' codep=0x73ea parp=0xec26
// ================================================
// 0xec26: db 0x20 0x0f 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec2c: WORD 'UNK_0xec2e' codep=0x73ea parp=0xec2e
// ================================================
// 0xec2e: db 0x20 0x10 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec34: WORD 'UNK_0xec36' codep=0x1d29 parp=0xec36
// ================================================
// 0xec36: db 0x01 0x00 '  '

// ================================================
// 0xec38: WORD 'UNK_0xec3a' codep=0x73ea parp=0xec3a
// ================================================
// 0xec3a: db 0x20 0x0c 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec40: WORD 'UNK_0xec42' codep=0x73ea parp=0xec42
// ================================================
// 0xec42: db 0x20 0x0d 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec48: WORD 'UNK_0xec4a' codep=0x73ea parp=0xec4a
// ================================================
// 0xec4a: db 0x20 0x0e 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec50: WORD 'UNK_0xec52' codep=0x73ea parp=0xec52
// ================================================
// 0xec52: db 0x20 0x09 0x01 0x16 0x8f 0x65 '     e'

// ================================================
// 0xec58: WORD 'UNK_0xec5a' codep=0x73ea parp=0xec5a
// ================================================
// 0xec5a: db 0x43 0x1b 0x01 0x1c 0xcd 0x69 0x4d 0x74 0x43 0x0b 0x02 'C    iMtC  '

// ================================================
// 0xec65: WORD 'UNK_0xec67' codep=0x73ea parp=0xec67
// ================================================
// 0xec67: db 0x44 0x0a 0x01 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xec6d: WORD 'UNK_0xec6f' codep=0x73ea parp=0xec6f
// ================================================
// 0xec6f: db 0x44 0x34 0x01 0x9c 0xd8 0x69 'D4   i'

// ================================================
// 0xec75: WORD 'UNK_0xec77' codep=0x744d parp=0xec77
// ================================================
// 0xec77: db 0x44 0x11 0x01 'D  '

// ================================================
// 0xec7a: WORD 'UNK_0xec7c' codep=0x744d parp=0xec7c
// ================================================
// 0xec7c: db 0x44 0x15 0x01 'D  '

// ================================================
// 0xec7f: WORD 'UNK_0xec81' codep=0x73ea parp=0xec81
// ================================================
// 0xec81: db 0x44 0x33 0x01 0x9c 0xd8 0x69 'D3   i'

// ================================================
// 0xec87: WORD 'UNK_0xec89' codep=0x744d parp=0xec89
// ================================================
// 0xec89: db 0x44 0x12 0x01 'D  '

// ================================================
// 0xec8c: WORD 'UNK_0xec8e' codep=0x744d parp=0xec8e
// ================================================
// 0xec8e: db 0x44 0x18 0x03 'D  '

// ================================================
// 0xec91: WORD 'UNK_0xec93' codep=0x744d parp=0xec93
// ================================================
// 0xec93: db 0x44 0x13 0x01 'D  '

// ================================================
// 0xec96: WORD 'UNK_0xec98' codep=0x73ea parp=0xec98
// ================================================
// 0xec98: db 0x44 0x37 0x01 0x9c 0xd8 0x69 'D7   i'

// ================================================
// 0xec9e: WORD 'UNK_0xeca0' codep=0x73ea parp=0xeca0
// ================================================
// 0xeca0: db 0x44 0x3a 0x02 0x9c 0xd8 0x69 'D:   i'

// ================================================
// 0xeca6: WORD 'UNK_0xeca8' codep=0x744d parp=0xeca8
// ================================================
// 0xeca8: db 0x44 0x1b 0x01 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x00 0x01 0xd8 0x4a 0x90 0x16 0x4c 0x22 0x20 0x0f 0x3d 0x0f 0xd8 0x4a 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xd8 0x4a 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x04 0x00 0xf0 0x0d 0x90 0x16 'D  L"  ]    J  L"  =  J  L". ] d  J  L"  >         '

// ================================================
// 0xecdb: WORD 'UNK_0xecdd' codep=0x224c parp=0xecdd
// ================================================

void UNK_0xecdd() // UNK_0xecdd
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x0012);
  _slash_(); // /
  Push(0x0012);
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  Push(0x0013);
  Push(Pop() + Pop()); // +
  RRND(); // RRND
}


// ================================================
// 0xecf9: WORD 'UNK_0xecfb' codep=0x224c parp=0xecfb
// ================================================

void UNK_0xecfb() // UNK_0xecfb
{
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x001e);
  _slash_(); // /
  Push(0x001e);
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  Push(0x001f);
  Push(Pop() + Pop()); // +
  RRND(); // RRND
}


// ================================================
// 0xed17: WORD 'UNK_0xed19' codep=0x224c parp=0xed19
// ================================================

void UNK_0xed19() // UNK_0xed19
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xec26"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xec2e"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  OVER(); // OVER
  _dash_(); // -
  Push(Pop()+1); // 1+
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed2f: WORD 'UNK_0xed31' codep=0x224c parp=0xed31
// ================================================

void UNK_0xed31() // UNK_0xed31
{
  Push(0x63fc); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x63fe); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
}


// ================================================
// 0xed3b: WORD 'UNK_0xed3d' codep=0x224c parp=0xed3d
// ================================================

void UNK_0xed3d() // UNK_0xed3d
{
  Push(0x63fe); // IFIELD(INST-Y)
  _ex__3(); // !_3
  Push(0x63fc); // IFIELD(INST-X)
  _ex__3(); // !_3
}


// ================================================
// 0xed47: WORD 'UNK_0xed49' codep=0x224c parp=0xed49
// ================================================

void UNK_0xed49() // UNK_0xed49
{
  _2DUP(); // 2DUP
  _ask_INVIS(); // ?INVIS
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp_MOVED); // MOVED
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xed59: WORD 'UNK_0xed5b' codep=0x224c parp=0xed5b
// ================================================

void UNK_0xed5b() // UNK_0xed5b
{
  Push(0x6ac1); // probable 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  SWAP(); // SWAP
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  _dash_(); // -
  SWAP(); // SWAP
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  _dash_(); // -
}


// ================================================
// 0xed77: WORD 'UNK_0xed79' codep=0x224c parp=0xed79
// ================================================

void UNK_0xed79() // UNK_0xed79
{
  _2DUP(); // 2DUP
  UNK_0xed5b(); // UNK_0xed5b
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0020);
  _gt_(); // >
}


// ================================================
// 0xed89: WORD 'UNK_0xed8b' codep=0x224c parp=0xed8b
// ================================================

void UNK_0xed8b() // UNK_0xed8b
{
  _2DUP(); // 2DUP
  UNK_0xed5b(); // UNK_0xed5b
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x0040);
  _st_(); // <
}


// ================================================
// 0xed9b: WORD 'UNK_0xed9d' codep=0x224c parp=0xed9d
// ================================================

void UNK_0xed9d() // UNK_0xed9d
{
  _2DUP(); // 2DUP
  UNK_0xed5b(); // UNK_0xed5b
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(0x003f);
  _gt_(); // >
}


// ================================================
// 0xedad: WORD 'UNK_0xedaf' codep=0x224c parp=0xedaf
// ================================================

void UNK_0xedaf() // UNK_0xedaf
{
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x01e0);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x03c0);
  SWAP(); // SWAP
  _dash_(); // -

  label1:
  Push(0x01e0);
  UNK_0xed19(); // UNK_0xed19
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop()+1); // 1+
  ROT(); // ROT
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop() + Pop()); // +
}

// 0xeddf: db 0x4c 0x22 0x1e 0x75 0x5d 0x17 0x29 0x00 0x5f 0x12 0xfa 0x15 0x12 0x00 0x30 0x75 0x41 0x0e 0x73 0x3b 0x46 0x12 0xfa 0x15 0x04 0x00 0x15 0x10 0xf4 0x74 0x90 0x16 'L" u] ) _     0uA s;F        t  '

// ================================================
// 0xedff: WORD 'UNK_0xee01' codep=0x224c parp=0xee01
// ================================================

void UNK_0xee01() // UNK_0xee01
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xede1);
  ALL(); // ALL
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee13: WORD 'UNK_0xee15' codep=0x224c parp=0xee15
// ================================================

void UNK_0xee15() // UNK_0xee15
{
  LoadData("UNK_0xec6f"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x6400); // IFIELD(UNK_0xec77)
  C_ex_(); // C!
  Push(0); // 0
  Push(0x6404); // IFIELD(UNK_0xec7c)
  C_ex_(); // C!
  LoadData("UNK_0xeca0"); // from 'CREATURE    '
  Push(Read16(Pop())); // @
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  LoadData("UNK_0xec98"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x6402); // IFIELD(UNK_0xec93)
  C_ex_(); // C!
  Push2Words("0.");
  Push(0x6407); // IFIELD(UNK_0xec8e)
  _1_dot_5_ex_(); // 1.5!
  Push(0); // 0
  Push(0x640a); // IFIELD(UNK_0xeca8)
  C_ex_(); // C!
  LoadData("UNK_0xec81"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x6401); // IFIELD(UNK_0xec89)
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee4b: WORD 'UNK_0xee4d' codep=0x224c parp=0xee4d
// ================================================

void UNK_0xee4d() // UNK_0xee4d
{
  unsigned short int a;
  unsigned short int b;
  unsigned short int c;
  unsigned short int d;
  UNK_0xecdd(); // UNK_0xecdd
  UNK_0xecfb(); // UNK_0xecfb
  UNK_0xed79(); // UNK_0xed79
  a = Pop(); // >R
  UNK_0xed49(); // UNK_0xed49
  b = Pop(); // >R
  UNK_0xed8b(); // UNK_0xed8b
  Push(b); // R>
  Push(a); // R>
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  c = Pop(); // >R
  d = Pop(); // >R
  Push(Read16(cc_UNK_0xec1e)); // UNK_0xec1e
  Push(Read16(cc__3)); // 3
  PICK(); // PICK
  Push(1); // 1
  _star_CREATE(); // *CREATE
  ILAST(); // ILAST
  Push(d); // R>
  Push(c); // R>
  UNK_0xed3d(); // UNK_0xed3d
  UNK_0xee15(); // UNK_0xee15
  Push(1); // 1
  Push(0x63fa); // IFIELD(INST-QTY)
  _plus__ex_(); // +!
  return;

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xee8f: WORD 'UNK_0xee91' codep=0x224c parp=0xee91
// ================================================

void UNK_0xee91() // UNK_0xee91
{
  signed short int i, imax;
  unsigned short int a;
  Push(Read16(cc_UNK_0xec1e)); // UNK_0xec1e
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  Push(0); // 0
  Push(pp_PLHI); // PLHI
  Push(Read16(Pop())); // @
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  LoadData("UNK_0xec67"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__3)); // 3
  PICK(); // PICK
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(i); // I
  SWAP(); // SWAP
  a = Pop(); // >R
  SWAP(); // SWAP
  Push(a); // R>
  Push(Pop()+1); // 1+

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffde

  SWAP(); // SWAP
  Pop(); // DROP
}

// 0xeecb: db 0xea 0x73 0x44 0x02 0x02 0x9c 0xd8 0x69 0xea 0x73 0x44 0x04 0x03 0x9c 0xd8 0x69 0xea 0x73 0x44 0x07 0x03 0x9c 0xd8 0x69 ' sD    i sD    i sD    i'

// ================================================
// 0xeee3: WORD 'UNK_0xeee5' codep=0x73ea parp=0xeee5
// ================================================
// 0xeee5: db 0x44 0x0b 0x01 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xeeeb: WORD 'UNK_0xeeed' codep=0x73ea parp=0xeeed
// ================================================
// 0xeeed: db 0x44 0x0d 0x03 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xeef3: WORD 'UNK_0xeef5' codep=0x73ea parp=0xeef5
// ================================================
// 0xeef5: db 0x44 0x10 0x03 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x73ea parp=0xeefd
// ================================================
// 0xeefd: db 0x44 0x13 0x03 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xef03: WORD 'UNK_0xef05' codep=0x73ea parp=0xef05
// ================================================
// 0xef05: db 0x44 0x16 0x03 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xef0b: WORD 'UNK_0xef0d' codep=0x73ea parp=0xef0d
// ================================================
// 0xef0d: db 0x44 0x19 0x01 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xef13: WORD 'UNK_0xef15' codep=0x73ea parp=0xef15
// ================================================
// 0xef15: db 0x44 0x1a 0x03 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xef1b: WORD 'UNK_0xef1d' codep=0x73ea parp=0xef1d
// ================================================
// 0xef1d: db 0x44 0x1d 0x01 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xef23: WORD 'UNK_0xef25' codep=0x73ea parp=0xef25
// ================================================
// 0xef25: db 0x44 0x1e 0x03 0x9c 0xd8 0x69 'D    i'

// ================================================
// 0xef2b: WORD 'UNK_0xef2d' codep=0x73ea parp=0xef2d
// ================================================
// 0xef2d: db 0x44 0x21 0x01 0x9c 0xd8 0x69 'D!   i'

// ================================================
// 0xef33: WORD 'UNK_0xef35' codep=0x73ea parp=0xef35
// ================================================
// 0xef35: db 0x44 0x22 0x03 0x9c 0xd8 0x69 'D"   i'

// ================================================
// 0xef3b: WORD 'UNK_0xef3d' codep=0x73ea parp=0xef3d
// ================================================
// 0xef3d: db 0x44 0x25 0x01 0x9c 0xd8 0x69 'D%   i'

// ================================================
// 0xef43: WORD 'UNK_0xef45' codep=0x73ea parp=0xef45
// ================================================
// 0xef45: db 0x44 0x26 0x03 0x9c 0xd8 0x69 'D&   i'

// ================================================
// 0xef4b: WORD 'UNK_0xef4d' codep=0x73ea parp=0xef4d
// ================================================
// 0xef4d: db 0x44 0x29 0x03 0x9c 0xd8 0x69 'D)   i'

// ================================================
// 0xef53: WORD 'UNK_0xef55' codep=0x73ea parp=0xef55
// ================================================
// 0xef55: db 0x44 0x2e 0x02 0x9c 0xd8 0x69 'D.   i'

// ================================================
// 0xef5b: WORD 'UNK_0xef5d' codep=0x73ea parp=0xef5d
// ================================================
// 0xef5d: db 0x44 0x9b 0x01 0x9c 0xd8 0x69 0xea 0x73 0x20 0x0a 0x01 0x16 0x8f 0x65 0xea 0x73 0x20 0x0b 0x01 0x16 0x8f 0x65 'D    i s     e s     e'

// ================================================
// 0xef73: WORD 'UNK_0xef75' codep=0x224c parp=0xef75
// ================================================

void UNK_0xef75() // UNK_0xef75
{
  Push(Read16(cc_UNK_0xec1e)); // UNK_0xec1e
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  Push(pp_RECORD_n_); // RECORD#
  Push(Read16(Pop())); // @
  _at_RECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xef87: WORD 'UNK_0xef89' codep=0x224c parp=0xef89
// ================================================

void UNK_0xef89() // UNK_0xef89
{
  LoadData("UNK_0xeee5"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xef0d"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xef05"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  LoadData("UNK_0xeeed"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  LoadData("UNK_0xeef5"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  LoadData("UNK_0xef1d"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xef15"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  LoadData("UNK_0xef4d"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  LoadData("UNK_0xef2d"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xef25"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  LoadData("UNK_0xef45"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  LoadData("UNK_0xef3d"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  LoadData("UNK_0xef35"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  LoadData("UNK_0xeefd"); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xefc3: WORD 'UNK_0xefc5' codep=0x224c parp=0xefc5
// ================================================

void UNK_0xefc5() // UNK_0xefc5
{
  LoadData("UNK_0xeefd"); // from 'CREATURE    '
  _1_dot_5_ex_(); // 1.5!
  LoadData("UNK_0xef35"); // from 'CREATURE    '
  _1_dot_5_ex_(); // 1.5!
  LoadData("UNK_0xef3d"); // from 'CREATURE    '
  C_ex_(); // C!
  LoadData("UNK_0xef45"); // from 'CREATURE    '
  _1_dot_5_ex_(); // 1.5!
  LoadData("UNK_0xef25"); // from 'CREATURE    '
  _1_dot_5_ex_(); // 1.5!
  LoadData("UNK_0xef2d"); // from 'CREATURE    '
  C_ex_(); // C!
  LoadData("UNK_0xef4d"); // from 'CREATURE    '
  _1_dot_5_ex_(); // 1.5!
  LoadData("UNK_0xef15"); // from 'CREATURE    '
  _1_dot_5_ex_(); // 1.5!
  LoadData("UNK_0xef1d"); // from 'CREATURE    '
  C_ex_(); // C!
  LoadData("UNK_0xeef5"); // from 'CREATURE    '
  _1_dot_5_ex_(); // 1.5!
  LoadData("UNK_0xeeed"); // from 'CREATURE    '
  _1_dot_5_ex_(); // 1.5!
  LoadData("UNK_0xef05"); // from 'CREATURE    '
  _1_dot_5_ex_(); // 1.5!
  LoadData("UNK_0xef0d"); // from 'CREATURE    '
  C_ex_(); // C!
  LoadData("UNK_0xeee5"); // from 'CREATURE    '
  C_ex_(); // C!
}


// ================================================
// 0xefff: WORD 'UNK_0xf001' codep=0x224c parp=0xf001
// ================================================

void UNK_0xf001() // UNK_0xf001
{
  LoadData("UNK_0xef55"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xf009: WORD 'UNK_0xf00b' codep=0x224c parp=0xf00b
// ================================================

void UNK_0xf00b() // UNK_0xf00b
{
  Push(0xef55); // probable 'UNK_0xef55'

  label2:
  Push(Read16(regsp)); // DUP
  IFLD_at_(); // IFLD@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(Read16(cc__dash_1)); // -1
  Push(pp_RECORD_n_); // RECORD#
  _st__plus__ex__gt_(); // <+!>
  UNK_0xef75(); // UNK_0xef75
  goto label2;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf029: WORD 'UNK_0xf02b' codep=0x224c parp=0xf02b
// ================================================

void UNK_0xf02b() // UNK_0xf02b
{
  unsigned short int a;
  OVER(); // OVER
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  UNK_0xef75(); // UNK_0xef75
  LoadData("UNK_0xef5d"); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  UNK_0xf001(); // UNK_0xf001
  Push(pp_RECORD_n_); // RECORD#
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_RECORD_n_); // RECORD#
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  UNK_0xf00b(); // UNK_0xf00b
  UNK_0xef89(); // UNK_0xef89
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  UNK_0xef75(); // UNK_0xef75
  UNK_0xefc5(); // UNK_0xefc5

  label1:
  Push(0xcd40); // probable 'OTHER-PAR'
  MODULE(); // MODULE
  OVER(); // OVER
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  UNK_0xef75(); // UNK_0xef75
  Push(1); // 1
  LoadData("UNK_0xef5d"); // from 'CREATURE    '
  C_ex_(); // C!
}


// ================================================
// 0xf077: WORD 'UNK_0xf079' codep=0x224c parp=0xf079
// ================================================

void UNK_0xf079() // UNK_0xf079
{
  unsigned short int a;
  signed short int i, imax;
  unsigned short int b;
  signed short int j, jmax;
  UNK_0xedaf(); // UNK_0xedaf
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  UNK_0xee91(); // UNK_0xee91
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
  Push(Read16(cc_UNK_0xec1a)); // UNK_0xec1a
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  LoadData("UNK_0xec5a"); // from 'REGIONS     '
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  OVER(); // OVER
  RRND(); // RRND
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  b = Pop(); // >R
  UNK_0xf02b(); // UNK_0xf02b
  Push(b); // R>
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  UNK_0xee4d(); // UNK_0xee4d
  j++;
  } while(j<jmax); // (LOOP) 0xfffc


  label1:
  SWAP(); // SWAP
  Pop(); // DROP
  i++;
  } while(i<imax); // (LOOP) 0xffde

  Pop(); // DROP
}


// ================================================
// 0xf0c5: WORD 'UNK_0xf0c7' codep=0x224c parp=0xf0c7
// ================================================

void UNK_0xf0c7() // UNK_0xf0c7
{
  LoadData("UNK_0xec3a"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(cc__6)); // 6
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;

  label3:
  Push(1); // 1
  Push(0x0017);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Read16(cc__6)); // 6
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  goto label3;

  label2:
  return;

  label1:
  Push(Read16(cc__6)); // 6
}


// ================================================
// 0xf0f5: WORD 'UNK_0xf0f7' codep=0x224c parp=0xf0f7
// ================================================

void UNK_0xf0f7() // UNK_0xf0f7
{
  Push(0); // 0
  Push(0x0064);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(0x0032);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  LoadData("UNK_0xec3a"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  return;

  label1:
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  _st_(); // <
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  LoadData("UNK_0xec42"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  return;

  label2:
  Push(0x005a);
  _st_(); // <
  if (Pop() == 0) goto label3;
  LoadData("UNK_0xec4a"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  return;

  label3:
  UNK_0xf0c7(); // UNK_0xf0c7
}


// ================================================
// 0xf141: WORD 'UNK_0xf143' codep=0x224c parp=0xf143
// ================================================

void UNK_0xf143() // UNK_0xf143
{
  unsigned short int a;
  Push(0x001c);
  Push(1); // 1
  _ask_CLASS_slash_(); // ?CLASS/
  a = Pop(); // >R
  Pop(); Pop();// 2DROP
  Push(a); // R>
  if (Pop() == 0) return;
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  Push(0x5239); // probable '*SP'
  _2_ex_(); // 2!
}


// ================================================
// 0xf161: WORD 'UNK_0xf163' codep=0x224c parp=0xf163
// ================================================

void UNK_0xf163() // UNK_0xf163
{
  Push(0x001a);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  UNK_0xed3d(); // UNK_0xed3d
  Push(0x000a);
  Push(0x0064);
  RRND(); // RRND
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
}


// ================================================
// 0xf187: WORD 'UNK_0xf189' codep=0x224c parp=0xf189
// ================================================

void UNK_0xf189() // UNK_0xf189
{

  label1:
  Push(Read16(cc__dash_1)); // -1
  Push(2); // 2
  RRND(); // RRND
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf199: WORD 'UNK_0xf19b' codep=0x224c parp=0xf19b
// ================================================

void UNK_0xf19b() // UNK_0xf19b
{
  Push(0); // 0
  Push(pp_UNK_0xec36); // UNK_0xec36
  Push(Read16(Pop())); // @
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xf189(); // UNK_0xf189
  SWAP(); // SWAP
  UNK_0xf189(); // UNK_0xf189
  SWAP(); // SWAP
  Push(Read16(cc__6)); // 6
  UNK_0xf163(); // UNK_0xf163
  ICLOSE(); // ICLOSE
  return;

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf1bf: WORD 'UNK_0xf1c1' codep=0x224c parp=0xf1c1
// ================================================

void UNK_0xf1c1() // UNK_0xf1c1
{
  signed short int i, imax;
  unsigned short int a;
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xec52"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x000a);
  _slash_(); // /
  Push(0); // 0
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  UNK_0xecdd(); // UNK_0xecdd
  UNK_0xecfb(); // UNK_0xecfb
  UNK_0xed9d(); // UNK_0xed9d
  a = Pop(); // >R
  UNK_0xed49(); // UNK_0xed49
  Push(a); // R>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xf0f7(); // UNK_0xf0f7
  UNK_0xf163(); // UNK_0xf163
  ICLOSE(); // ICLOSE
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffe0


  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf205: WORD 'UNK_0xf207' codep=0x224c parp=0xf207
// ================================================

void UNK_0xf207() // UNK_0xf207
{
  unsigned short int a;
  unsigned short int b;
  Push(pp_THIS_dash_RE); // THIS-RE
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0); // 0
  a = Pop(); // >R

  label3:
  Push(0x0029);
  Push(0); // 0
  IFIND(); // IFIND
  Push(Read16(a)); // R@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  UNK_0xed31(); // UNK_0xed31
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Push(a); // R>
  Pop(); // DROP
  Push(1); // 1
  b = Pop(); // >R

  label2:
  INEXT(); // INEXT
  goto label3;

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(a); // R>
}


// ================================================
// 0xf243: WORD 'UNK_0xf245' codep=0x224c parp=0xf245
// ================================================

void UNK_0xf245() // UNK_0xf245
{
  Push(0x0010);
  Push(0x0030);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(0x002e);
  _gt_(); // >
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0x002f);
  Push(0x0033);
  RRND(); // RRND
}


// ================================================
// 0xf269: WORD 'UNK_0xf26b' codep=0x224c parp=0xf26b
// ================================================

void UNK_0xf26b() // UNK_0xf26b
{
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  Push(0x001e);
  _st_(); // <
  if (Pop() == 0) return;
  Push(Read16(cc_UNK_0xec22)); // UNK_0xec22
  UNK_0xf245(); // UNK_0xf245
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  _2DUP(); // 2DUP
  UNK_0xed3d(); // UNK_0xed3d
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  Push(0x63fa); // IFIELD(INST-QTY)
  _ex__3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf29d: WORD 'UNK_0xf29f' codep=0x224c parp=0xf29f
// ================================================

void UNK_0xf29f() // UNK_0xf29f
{
  unsigned short int a;

  label2:
  UNK_0xecdd(); // UNK_0xecdd
  UNK_0xecfb(); // UNK_0xecfb
  UNK_0xed49(); // UNK_0xed49
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP

  label1:
  Push(a); // R>
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xf2b9: WORD 'UNK_0xf2bb' codep=0x224c parp=0xf2bb
// ================================================

void UNK_0xf2bb() // UNK_0xf2bb
{
  unsigned short int a;
  UNK_0xf29f(); // UNK_0xf29f
  UNK_0xed79(); // UNK_0xed79
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  if (Pop() == 0) goto label1;
  ROT(); // ROT
  Push(0x0029);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  _2DUP(); // 2DUP
  UNK_0xed3d(); // UNK_0xed3d
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(a); // R>
}


// ================================================
// 0xf2eb: WORD 'UNK_0xf2ed' codep=0x224c parp=0xf2ed
// ================================================

void UNK_0xf2ed() // UNK_0xf2ed
{
  Push(0x001e);
  _slash_(); // /
  Push(0x001e);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(0x0012);
  _slash_(); // /
  Push(0x0012);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
}


// ================================================
// 0xf30b: WORD 'UNK_0xf30d' codep=0x224c parp=0xf30d
// ================================================

void UNK_0xf30d() // UNK_0xf30d
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xed31(); // UNK_0xed31
  UNK_0xf2ed(); // UNK_0xf2ed
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf319: WORD 'UNK_0xf31b' codep=0x224c parp=0xf31b
// ================================================

void UNK_0xf31b() // UNK_0xf31b
{
  UNK_0xed31(); // UNK_0xed31
  UNK_0xf2ed(); // UNK_0xf2ed
  _2OVER(); // 2OVER
  D_eq_(); // D=
}


// ================================================
// 0xf325: WORD 'UNK_0xf327' codep=0x224c parp=0xf327
// ================================================

void UNK_0xf327() // UNK_0xf327
{
  Push(0x001c);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(Read16(cc__3)); // 3
  goto label2;

  label1:
  Push(Read16(cc__3)); // 3

  label2:
  Push(0x0029);
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  UNK_0xed3d(); // UNK_0xed3d
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf351: WORD '?EXIST' codep=0x224c parp=0xf35c
// ================================================

void _ask_EXIST() // ?EXIST
{
  unsigned short int a;
  unsigned short int b;
  unsigned short int c;
  unsigned short int d;
  a = Pop(); // >R
  Push(1); // 1
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label6:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(Read16(a)); // R@
  Push(0); // 0
  IFIND(); // IFIND
  Push(Read16(regsp)); // DUP
  b = Pop(); // >R
  if (Pop() == 0) goto label2;
  UNK_0xf30d(); // UNK_0xf30d
  UNK_0xf31b(); // UNK_0xf31b
  if (Pop() == 0) goto label3;
  UNK_0xed31(); // UNK_0xed31
  Push(0x0029);
  Push(Read16(cc__4)); // 4
  _ask_CLASS_slash_(); // ?CLASS/
  c = Pop(); // >R
  Pop(); Pop();// 2DROP
  Push(c); // R>
  if (Pop() == 0) goto label4;
  _2DUP(); // 2DUP
  UNK_0xf19b(); // UNK_0xf19b

  label4:
  UNK_0xf143(); // UNK_0xf143
  IEXTRACT(); // IEXTRACT
  IPREV(); // IPREV
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  Push(a); // I'
  Push(0x0029);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  d = Pop(); // >R
  UNK_0xf207(); // UNK_0xf207
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(d); // R>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label5;
  Push(a); // I'
  UNK_0xf327(); // UNK_0xf327
  goto label3;

  label5:
  Pop(); Pop();// 2DROP

  label3:
  Pop(); Pop();// 2DROP

  label2:
  INEXT(); // INEXT
  Push(b); // R>
  goto label6;

  label1:
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf3e0: WORD 'UNK_0xf3e2' codep=0x224c parp=0xf3e2
// ================================================

void UNK_0xf3e2() // UNK_0xf3e2
{
  Push(0x001b);
  _ask_EXIST(); // ?EXIST
}


// ================================================
// 0xf3ea: WORD 'UNK_0xf3ec' codep=0x224c parp=0xf3ec
// ================================================

void UNK_0xf3ec() // UNK_0xf3ec
{
  Push(0x001c);
  _ask_EXIST(); // ?EXIST
}


// ================================================
// 0xf3f4: WORD 'UNK_0xf3f6' codep=0x224c parp=0xf3f6
// ================================================

void UNK_0xf3f6() // UNK_0xf3f6
{
  Push(0x0029);
  _ask_EXIST(); // ?EXIST
}


// ================================================
// 0xf3fe: WORD 'UNK_0xf400' codep=0x224c parp=0xf400
// ================================================

void UNK_0xf400() // UNK_0xf400
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label2:
  Push(0x001b);
  Push(0); // 0
  IFIND(); // IFIND
  UNK_0xed31(); // UNK_0xed31
  Push2Words("NULL");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  goto label2;

  label1:
  UNK_0xed31(); // UNK_0xed31
  Push2Words("NULL");
  D_eq_(); // D=
}


// ================================================
// 0xf42a: WORD 'UNK_0xf42c' codep=0x224c parp=0xf42c
// ================================================

void UNK_0xf42c() // UNK_0xf42c
{
  UNK_0xf400(); // UNK_0xf400
  Push(1); // 1
  Push(0x0064);
  RRND(); // RRND
  Push(0x0032);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf440: WORD 'UNK_0xf442' codep=0x224c parp=0xf442
// ================================================

void UNK_0xf442() // UNK_0xf442
{
  UNK_0xed3d(); // UNK_0xed3d
  Push(0x6402); // IFIELD(INST-DATE)
  OFF(); // OFF
  IEXTRACT(); // IEXTRACT
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
}


// ================================================
// 0xf452: WORD 'UNK_0xf454' codep=0x224c parp=0xf454
// ================================================

void UNK_0xf454() // UNK_0xf454
{
  UNK_0xf42c(); // UNK_0xf42c
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  UNK_0xf442(); // UNK_0xf442
  UNK_0xee01(); // UNK_0xee01

  label1:
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf466: WORD 'UNK_0xf468' codep=0x224c parp=0xf468
// ================================================

void UNK_0xf468() // UNK_0xf468
{
  unsigned short int a;
  Push(0); // 0
  Push(0x0140);
  ROT(); // ROT
  IFLD_at_(); // IFLD@
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  _dash_(); // -
  Push(0x0040);
  _slash_(); // /
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  return;

  label1:
  a = Pop(); // >R
  Pop(); Pop();// 2DROP
  Push(a); // R>
}


// ================================================
// 0xf490: WORD 'UNK_0xf492' codep=0x224c parp=0xf492
// ================================================

void UNK_0xf492() // UNK_0xf492
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  Push(0xef65);
  UNK_0xf468(); // UNK_0xf468
  if (Pop() == 0) goto label1;
  Push(2); // 2
  UNK_0xf2bb(); // UNK_0xf2bb
  if (Pop() == 0) goto label2;
  UNK_0xf26b(); // UNK_0xf26b

  label2:
  UNK_0xf19b(); // UNK_0xf19b

  label1:
  Push(0xef6d);
  UNK_0xf468(); // UNK_0xf468
  if (Pop() == 0) goto label3;
  Push(1); // 1
  UNK_0xf2bb(); // UNK_0xf2bb
  if (Pop() == 0) goto label4;
  UNK_0xf26b(); // UNK_0xf26b
  UNK_0xf454(); // UNK_0xf454

  label4:
  Pop(); Pop();// 2DROP

  label3:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4c8: WORD 'POPULA' codep=0x224c parp=0xf4d3
// ================================================
// entry

void POPULA() // POPULA
{
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  _at_NEWSPACE(); // @NEWSPACE
  Push(0x017c);
  Push(0); // 0
  D_plus_(); // D+
  D_st_(); // D<
  Push(pp__ask_CRITIC); // ?CRITIC
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp_PLHI); // PLHI
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf079(); // UNK_0xf079

  label2:
  UNK_0xf1c1(); // UNK_0xf1c1

  label1:
  UNK_0xf3f6(); // UNK_0xf3f6
  UNK_0xf3ec(); // UNK_0xf3ec
  UNK_0xf3e2(); // UNK_0xf3e2
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  _at_NEWSPACE(); // @NEWSPACE
  Push(0x017c);
  Push(0); // 0
  D_plus_(); // D+
  D_st_(); // D<
  Push(pp__ask_CRITIC); // ?CRITIC
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf492(); // UNK_0xf492
}

// 0xf521: db 0x53 0x45 0x45 0x44 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0xf1 0xf3 0x86 0x2e 0x53 0x54 0x4f 0x52 0xcd 0x4c 0x22 0x83 0xf4 0x36 0xf4 0xfc 0xf2 0x90 0x16 0x4d 0x41 0x50 0x53 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x00 'SEEDER__________________________   .STOR L"  6     MAPS-VOC____ '
  