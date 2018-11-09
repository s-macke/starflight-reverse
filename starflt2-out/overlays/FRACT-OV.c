// ====== OVERLAY 'FRACT-OV' ======
// store offset = 0xe340
// overlay size   = 0x1220

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE356  codep:0x1d29 wordp:0xe356 size:0x0002 C-string:'WE356'
//           WE35A  codep:0x1d29 wordp:0xe35a size:0x0002 C-string:'WE35A'
//           WE35E  codep:0x1d29 wordp:0xe35e size:0x0004 C-string:'WE35E'
//           WE364  codep:0x2214 wordp:0xe364 size:0x0002 C-string:'WE364'
//           WE368  codep:0x1d29 wordp:0xe368 size:0x0002 C-string:'WE368'
//           WE36C  codep:0x1d29 wordp:0xe36c size:0x0002 C-string:'WE36C'
//           WE370  codep:0x1d29 wordp:0xe370 size:0x0002 C-string:'WE370'
//           WE374  codep:0x1d29 wordp:0xe374 size:0x0002 C-string:'WE374'
//           WE378  codep:0x1d29 wordp:0xe378 size:0x0002 C-string:'WE378'
//           WE37C  codep:0x1d29 wordp:0xe37c size:0x0002 C-string:'WE37C'
//           WE380  codep:0x3b74 wordp:0xe380 size:0x0004 C-string:'WE380'
//           WE386  codep:0x2214 wordp:0xe386 size:0x0002 C-string:'WE386'
//           WE38A  codep:0x1d29 wordp:0xe38a size:0x0002 C-string:'WE38A'
//           WE38E  codep:0x1d29 wordp:0xe38e size:0x0002 C-string:'WE38E'
//           WE392  codep:0x1d29 wordp:0xe392 size:0x0002 C-string:'WE392'
//           WE396  codep:0x1d29 wordp:0xe396 size:0x0002 C-string:'WE396'
//           WE39A  codep:0x224c wordp:0xe39a size:0x000a C-string:'WE39A'
//           WE3A6  codep:0x224c wordp:0xe3a6 size:0x0018 C-string:'WE3A6'
//           WE3C0  codep:0x1d29 wordp:0xe3c0 size:0x001e C-string:'WE3C0'
//           WE3E0  codep:0x1d29 wordp:0xe3e0 size:0x0018 C-string:'WE3E0'
//           WE3FA  codep:0x1d29 wordp:0xe3fa size:0x006d C-string:'WE3FA'
//           WE469  codep:0x1d29 wordp:0xe469 size:0x004e C-string:'WE469'
//           WE4B9  codep:0x1d29 wordp:0xe4b9 size:0x0034 C-string:'WE4B9'
//           WE4EF  codep:0x1d29 wordp:0xe4ef size:0x001e C-string:'WE4EF'
//           WE50F  codep:0x1d29 wordp:0xe50f size:0x0026 C-string:'WE50F'
//           WE537  codep:0xe537 wordp:0xe537 size:0x0008 C-string:'WE537'
//           WE541  codep:0x224c wordp:0xe541 size:0x002a C-string:'WE541'
//           WE56D  codep:0x1d29 wordp:0xe56d size:0x0045 C-string:'WE56D'
//           WE5B4  codep:0x1d29 wordp:0xe5b4 size:0x0045 C-string:'WE5B4'
//           WE5FB  codep:0x1d29 wordp:0xe5fb size:0x0033 C-string:'WE5FB'
//           WE630  codep:0x1d29 wordp:0xe630 size:0x005f C-string:'WE630'
//           WE691  codep:0x1d29 wordp:0xe691 size:0x0017 C-string:'WE691'
//           WE6AA  codep:0x1d29 wordp:0xe6aa size:0x0016 C-string:'WE6AA'
//           WE6C2  codep:0x1d29 wordp:0xe6c2 size:0x009a C-string:'WE6C2'
//           WE75E  codep:0xe75e wordp:0xe75e size:0x0010 C-string:'WE75E'
//           WE770  codep:0xe770 wordp:0xe770 size:0x001a C-string:'WE770'
//           WE78C  codep:0x224c wordp:0xe78c size:0x001c C-string:'WE78C'
//    MERCATOR-GEN  codep:0x224c wordp:0xe7b9 size:0x003c C-string:'MERCATOR_dash_GEN'
//           WE7F7  codep:0x3b74 wordp:0xe7f7 size:0x0004 C-string:'WE7F7'
//           WE7FD  codep:0x2214 wordp:0xe7fd size:0x0002 C-string:'WE7FD'
//           WE801  codep:0x224c wordp:0xe801 size:0x000c C-string:'WE801'
//           WE80F  codep:0x224c wordp:0xe80f size:0x005e C-string:'WE80F'
//           WE86F  codep:0x224c wordp:0xe86f size:0x0030 C-string:'WE86F'
//           WE8A1  codep:0x224c wordp:0xe8a1 size:0x0054 C-string:'WE8A1'
//           WE8F7  codep:0x224c wordp:0xe8f7 size:0x0028 C-string:'WE8F7'
//           WE921  codep:0x224c wordp:0xe921 size:0x002c C-string:'WE921'
//           WE94F  codep:0x224c wordp:0xe94f size:0x0028 C-string:'WE94F'
//           WE979  codep:0x224c wordp:0xe979 size:0x000a C-string:'WE979'
//           WE985  codep:0x224c wordp:0xe985 size:0x009a C-string:'WE985'
//           WEA21  codep:0x224c wordp:0xea21 size:0x0014 C-string:'WEA21'
//           WEA37  codep:0x224c wordp:0xea37 size:0x005e C-string:'WEA37'
//           WEA97  codep:0x224c wordp:0xea97 size:0x0034 C-string:'WEA97'
//           WEACD  codep:0x1d29 wordp:0xeacd size:0x0002 C-string:'WEACD'
//           WEAD1  codep:0xead1 wordp:0xead1 size:0x0009 C-string:'WEAD1'
//           WEADC  codep:0xeadc wordp:0xeadc size:0x000c C-string:'WEADC'
//           WEAEA  codep:0xeaea wordp:0xeaea size:0x000c C-string:'WEAEA'
//           WEAF8  codep:0xeaf8 wordp:0xeaf8 size:0x000c C-string:'WEAF8'
//           WEB06  codep:0x224c wordp:0xeb06 size:0x0006 C-string:'WEB06'
//           WEB0E  codep:0x224c wordp:0xeb0e size:0x0006 C-string:'WEB0E'
//           WEB16  codep:0x224c wordp:0xeb16 size:0x0008 C-string:'WEB16'
//           WEB20  codep:0x224c wordp:0xeb20 size:0x0006 C-string:'WEB20'
//           WEB28  codep:0x224c wordp:0xeb28 size:0x0006 C-string:'WEB28'
//           WEB30  codep:0x224c wordp:0xeb30 size:0x0006 C-string:'WEB30'
//           WEB38  codep:0x224c wordp:0xeb38 size:0x0008 C-string:'WEB38'
//           WEB42  codep:0x224c wordp:0xeb42 size:0x0008 C-string:'WEB42'
//           WEB4C  codep:0x224c wordp:0xeb4c size:0x0006 C-string:'WEB4C'
//           WEB54  codep:0x224c wordp:0xeb54 size:0x0008 C-string:'WEB54'
//           WEB5E  codep:0x224c wordp:0xeb5e size:0x0016 C-string:'WEB5E'
//         POLYPTR  codep:0x1d29 wordp:0xeb80 size:0x0002 C-string:'POLYPTR'
//           WEB84  codep:0x1d29 wordp:0xeb84 size:0x0002 C-string:'WEB84'
//           WEB88  codep:0x1d29 wordp:0xeb88 size:0x0002 C-string:'WEB88'
//           WEB8C  codep:0x1d29 wordp:0xeb8c size:0x0002 C-string:'WEB8C'
//           WEB90  codep:0x224c wordp:0xeb90 size:0x006a C-string:'WEB90'
//           WEBFC  codep:0x224c wordp:0xebfc size:0x0060 C-string:'WEBFC'
// POLYGON-EXTRACT  codep:0x224c wordp:0xec70 size:0x0054 C-string:'POLYGON_dash_EXTRACT'
//           WECC6  codep:0x224c wordp:0xecc6 size:0x0068 C-string:'WECC6'
//           WED30  codep:0x1d29 wordp:0xed30 size:0x0002 C-string:'WED30'
//           WED34  codep:0xed34 wordp:0xed34 size:0x000e C-string:'WED34'
//           WED44  codep:0xed44 wordp:0xed44 size:0x000a C-string:'WED44'
//           WED50  codep:0xed50 wordp:0xed50 size:0x0010 C-string:'WED50'
//           WED62  codep:0xed62 wordp:0xed62 size:0x0011 C-string:'WED62'
//           FADDR  codep:0x1d29 wordp:0xed7d size:0x0002 C-string:'FADDR'
//           WED81  codep:0x1d29 wordp:0xed81 size:0x0002 C-string:'WED81'
//           WED85  codep:0x1d29 wordp:0xed85 size:0x0002 C-string:'WED85'
//           WED89  codep:0x1d29 wordp:0xed89 size:0x0002 C-string:'WED89'
//           WED8D  codep:0x224c wordp:0xed8d size:0x004a C-string:'WED8D'
//           WEDD9  codep:0x224c wordp:0xedd9 size:0x008a C-string:'WEDD9'
//           WEE65  codep:0xee65 wordp:0xee65 size:0x002f C-string:'WEE65'
//           WEE96  codep:0xee96 wordp:0xee96 size:0x002a C-string:'WEE96'
//           WEEC2  codep:0xeec2 wordp:0xeec2 size:0x0008 C-string:'WEEC2'
//           WEECC  codep:0xeecc wordp:0xeecc size:0x0017 C-string:'WEECC'
//           WEEE5  codep:0xeee5 wordp:0xeee5 size:0x0013 C-string:'WEEE5'
//           WEEFA  codep:0x224c wordp:0xeefa size:0x008a C-string:'WEEFA'
//           WEF86  codep:0x224c wordp:0xef86 size:0x0018 C-string:'WEF86'
//      MAKE-GLOBE  codep:0x224c wordp:0xefad size:0x0006 C-string:'MAKE_dash_GLOBE'
//           WEFB5  codep:0x224c wordp:0xefb5 size:0x0022 C-string:'WEFB5'
//           WEFD9  codep:0x224c wordp:0xefd9 size:0x0020 C-string:'WEFD9'
//           WEFFB  codep:0x224c wordp:0xeffb size:0x0026 C-string:'WEFFB'
//           WF023  codep:0x224c wordp:0xf023 size:0x0024 C-string:'WF023'
//           WF049  codep:0x224c wordp:0xf049 size:0x0040 C-string:'WF049'
//           WF08B  codep:0x224c wordp:0xf08b size:0x0040 C-string:'WF08B'
//         SCRLCON  codep:0x224c wordp:0xf0d7 size:0x0022 C-string:'SCRLCON'
//      NEWCONTOUR  codep:0x224c wordp:0xf108 size:0x0000 C-string:'NEWCONTOUR'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_SEED_3; // SEED_3
extern const unsigned short int pp_SPHEREW; // SPHEREW
extern const unsigned short int pp_SIGNEXT; // SIGNEXT
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp_XUR; // XUR
extern const unsigned short int pp_YUR; // YUR
extern const unsigned short int pp_XBUF_dash_SE; // XBUF-SE
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_Y2; // Y2
extern const unsigned short int pp_X2; // X2
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_DXCON; // DXCON
extern const unsigned short int pp_DYCON; // DYCON
extern const unsigned short int pp_GLOBALS; // GLOBALS
extern ArrayType MERCATO; // MERCATO
extern ArrayType CONANCH; // CONANCH
extern ArrayType CONTOUR; // CONTOUR
extern ArrayType FACE; // FACE
void ABS(); // ABS
void MOD(); // MOD
void PICK(); // PICK
void _2OVER(); // 2OVER
void RRND(); // RRND
void _n_BYTES(); // #BYTES
void _n_COLZ(); // #COLZ
void _n_ROWZ(); // #ROWZ
void ACELLAD(); // ACELLAD
void A_ex_(); // A!
void A_at_(); // A@
void SETLARR(); // SETLARR
void SETREGI(); // SETREGI
void FILLREG(); // FILLREG
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _2_ex__2(); // 2!_2
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void COLORMA_2(); // COLORMA_2
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void _gt_(); // >
void _0_st_(); // 0<
void L_at_(); // L@
void L_ex_(); // L!
void LC_at_(); // LC@
void LC_ex_(); // LC!
void LCMOVE(); // LCMOVE
void _st_LCMOVE(); // <LCMOVE
void L_plus__dash__at_(); // L+-@
void WE537(); // WE537
void WE75E(); // WE75E
void WE770(); // WE770
void WEAD1(); // WEAD1
void WEADC(); // WEADC
void WEAEA(); // WEAEA
void WEAF8(); // WEAF8
void WED34(); // WED34
void WED44(); // WED44
void WED50(); // WED50
void WED62(); // WED62
void WEE65(); // WEE65
void WEE96(); // WEE96
void WEEC2(); // WEEC2
void WEECC(); // WEECC
void WEEE5(); // WEEE5


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE356 = 0xe356; // WE356 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE35A = 0xe35a; // WE35A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE35E = 0xe35e; // WE35E size: 4
// {0x56, 0x3a, 0x20, 0x6e}

const unsigned short int pp_WE368 = 0xe368; // WE368 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE36C = 0xe36c; // WE36C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE370 = 0xe370; // WE370 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE374 = 0xe374; // WE374 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE378 = 0xe378; // WE378 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE37C = 0xe37c; // WE37C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE38A = 0xe38a; // WE38A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE38E = 0xe38e; // WE38E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE392 = 0xe392; // WE392 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE396 = 0xe396; // WE396 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE3C0 = 0xe3c0; // WE3C0 size: 30
// {0x8b, 0x06, 0x9c, 0x4b, 0xb9, 0xbd, 0x7a, 0xf7, 0xe9, 0x05, 0x0f, 0x1b, 0x89, 0x06, 0x9c, 0x4b, 0x5a, 0x5b, 0x59, 0x52, 0x2b, 0xd9, 0xf7, 0xe3, 0x03, 0xd1, 0x58, 0x52, 0x50, 0xc3}

const unsigned short int pp_WE3E0 = 0xe3e0; // WE3E0 size: 24
// {0x5b, 0x58, 0x59, 0x03, 0xc1, 0x3d, 0x7f, 0x00, 0x7e, 0x03, 0xb8, 0x7f, 0x00, 0x3d, 0x81, 0xff, 0x79, 0x03, 0xb8, 0x81, 0xff, 0x50, 0x53, 0xc3}

const unsigned short int pp_WE3FA = 0xe3fa; // WE3FA size: 109
// {0x5b, 0x58, 0x59, 0x53, 0x8b, 0x16, 0x56, 0xe3, 0x0b, 0xd2, 0x7e, 0x50, 0x03, 0x0e, 0x70, 0xe3, 0x03, 0x06, 0x74, 0xe3, 0x79, 0x09, 0x40, 0xf7, 0xd8, 0x81, 0xc1, 0x80, 0x04, 0xeb, 0x12, 0xba, 0xc0, 0x03, 0x3b, 0xc2, 0x78, 0x0b, 0x2b, 0xc2, 0xf7, 0xd8, 0x03, 0xc2, 0x40, 0x81, 0xc1, 0x80, 0x04, 0x89, 0x06, 0x9c, 0x4b, 0x51, 0xb8, 0x01, 0x00, 0x50, 0xf7, 0xd8, 0x50, 0xe8, 0x86, 0xff, 0x59, 0x8f, 0x06, 0x9c, 0x4b, 0x51, 0xb8, 0x01, 0x00, 0x50, 0xf7, 0xd8, 0x50, 0xe8, 0x76, 0xff, 0x58, 0x59, 0x33, 0x06, 0x49, 0x5b, 0x33, 0xc1, 0x89, 0x06, 0x9c, 0x4b, 0x8b, 0x46, 0x0e, 0x8b, 0xc8, 0xf7, 0xd9, 0x51, 0x50, 0xe8, 0x5e, 0xff, 0x58, 0x59, 0x50, 0x51, 0xc3}

const unsigned short int pp_WE469 = 0xe469; // WE469 size: 78
// {0x5a, 0x58, 0x59, 0x0b, 0xc0, 0x79, 0x0f, 0x40, 0xf7, 0xd8, 0x8b, 0x1e, 0x60, 0x4d, 0x8b, 0x1f, 0xd1, 0xeb, 0x03, 0xcb, 0xeb, 0x1c, 0x8b, 0x1e, 0x60, 0x4d, 0x8b, 0x5f, 0x02, 0x3b, 0xc3, 0x78, 0x11, 0x2b, 0xc3, 0xf7, 0xd8, 0x03, 0xc3, 0x40, 0x8b, 0x1e, 0x60, 0x4d, 0x8b, 0x1f, 0xd1, 0xeb, 0x03, 0xcb, 0x0b, 0xc9, 0x79, 0x08, 0x8b, 0x1e, 0x60, 0x4d, 0x03, 0x0f, 0xeb, 0x0c, 0x8b, 0x1e, 0x60, 0x4d, 0x8b, 0x1f, 0x3b, 0xcb, 0x78, 0x02, 0x2b, 0xcb, 0x51, 0x50, 0x52, 0xc3}

const unsigned short int pp_WE4B9 = 0xe4b9; // WE4B9 size: 52
// {0x8f, 0x06, 0x8a, 0xe3, 0x8b, 0x06, 0x39, 0x4d, 0x0b, 0xc0, 0x7e, 0x03, 0xe8, 0xa1, 0xff, 0x8b, 0x1e, 0x60, 0x4d, 0x8b, 0x47, 0x06, 0x8b, 0x5f, 0x04, 0x59, 0xd1, 0xe1, 0x03, 0xd9, 0x1e, 0x8e, 0xd8, 0x8b, 0x0f, 0x1f, 0x5a, 0x03, 0xca, 0x89, 0x06, 0x78, 0xe3, 0x89, 0x0e, 0x7c, 0xe3, 0xff, 0x36, 0x8a, 0xe3, 0xc3}

const unsigned short int pp_WE4EF = 0xe4ef; // WE4EF size: 30
// {0x5a, 0x8b, 0x1e, 0x7c, 0xe3, 0x1e, 0xff, 0x36, 0x78, 0xe3, 0x1f, 0x8a, 0x07, 0x1f, 0x8b, 0x0e, 0x47, 0x4d, 0x0b, 0xc9, 0x7e, 0x03, 0x98, 0xeb, 0x02, 0x32, 0xe4, 0x50, 0x52, 0xc3}

const unsigned short int pp_WE50F = 0xe50f; // WE50F size: 38
// {0x8f, 0x06, 0x8e, 0xe3, 0xe8, 0xa3, 0xff, 0xe8, 0xd6, 0xff, 0x58, 0x3d, 0x80, 0xff, 0x75, 0x10, 0x58, 0x1e, 0xff, 0x36, 0x78, 0xe3, 0x8b, 0x1e, 0x7c, 0xe3, 0x1f, 0x88, 0x07, 0x1f, 0xeb, 0x01, 0x58, 0xff, 0x36, 0x8e, 0xe3, 0xc3}

const unsigned short int pp_WE56D = 0xe56d; // WE56D size: 69
// {0x59, 0x8f, 0x06, 0x96, 0xe3, 0x51, 0xff, 0x76, 0x08, 0xff, 0x36, 0x96, 0xe3, 0xe8, 0x3c, 0xff, 0xe8, 0x6f, 0xff, 0xff, 0x76, 0x04, 0xff, 0x36, 0x96, 0xe3, 0xe8, 0x2f, 0xff, 0xe8, 0x62, 0xff, 0x58, 0x59, 0x03, 0xc1, 0xd1, 0xf8, 0x50, 0x8b, 0x5e, 0x08, 0x03, 0x5e, 0x04, 0xd1, 0xfb, 0x53, 0xff, 0x36, 0x96, 0xe3, 0xe8, 0x56, 0xfe, 0xe8, 0x39, 0xfe, 0xff, 0x76, 0x0c, 0xff, 0x36, 0x96, 0xe3, 0xe8, 0x5e, 0xff, 0xc3}

const unsigned short int pp_WE5B4 = 0xe5b4; // WE5B4 size: 69
// {0x59, 0x8f, 0x06, 0x96, 0xe3, 0x51, 0xff, 0x36, 0x96, 0xe3, 0xff, 0x76, 0x06, 0xe8, 0xf5, 0xfe, 0xe8, 0x28, 0xff, 0xff, 0x36, 0x96, 0xe3, 0xff, 0x76, 0x02, 0xe8, 0xe8, 0xfe, 0xe8, 0x1b, 0xff, 0x58, 0x59, 0x03, 0xc1, 0xd1, 0xf8, 0x50, 0xff, 0x36, 0x96, 0xe3, 0x8b, 0x5e, 0x06, 0x03, 0x5e, 0x02, 0xd1, 0xfb, 0x53, 0xe8, 0x0f, 0xfe, 0xe8, 0xf2, 0xfd, 0xff, 0x36, 0x96, 0xe3, 0xff, 0x76, 0x0a, 0xe8, 0x17, 0xff, 0xc3}

const unsigned short int pp_WE5FB = 0xe5fb; // WE5FB size: 51
// {0x8b, 0x06, 0x68, 0xe3, 0x0b, 0xc0, 0x7e, 0x11, 0x8b, 0x46, 0x08, 0x0b, 0xc0, 0x75, 0x04, 0x50, 0xe8, 0xa6, 0xff, 0xff, 0x76, 0x04, 0xe8, 0xa0, 0xff, 0x8b, 0x06, 0x6c, 0xe3, 0x0b, 0xc0, 0x7e, 0x11, 0x8b, 0x46, 0x06, 0x0b, 0xc0, 0x75, 0x04, 0x50, 0xe8, 0x46, 0xff, 0xff, 0x76, 0x02, 0xe8, 0x40, 0xff, 0xc3}

const unsigned short int pp_WE630 = 0xe630; // WE630 size: 95
// {0x8b, 0x06, 0x68, 0xe3, 0x23, 0x06, 0x6c, 0xe3, 0x7e, 0x54, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x06, 0xe8, 0x76, 0xfe, 0xe8, 0xa9, 0xfe, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x02, 0xe8, 0x6a, 0xfe, 0xe8, 0x9d, 0xfe, 0xff, 0x76, 0x08, 0xff, 0x76, 0x0a, 0xe8, 0x5e, 0xfe, 0xe8, 0x91, 0xfe, 0xff, 0x76, 0x04, 0xff, 0x76, 0x0a, 0xe8, 0x52, 0xfe, 0xe8, 0x85, 0xfe, 0x58, 0x59, 0x03, 0xc1, 0x59, 0x03, 0xc1, 0x59, 0x03, 0xc1, 0xd1, 0xf8, 0xd1, 0xf8, 0x50, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x0a, 0xe8, 0x78, 0xfd, 0xe8, 0x5b, 0xfd, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x0a, 0xe8, 0x81, 0xfe, 0xc3}

const unsigned short int pp_WE691 = 0xe691; // WE691 size: 23
// {0x8b, 0x46, 0x08, 0x03, 0x46, 0x04, 0xd1, 0xf8, 0x89, 0x46, 0x0c, 0x8b, 0x46, 0x06, 0x03, 0x46, 0x02, 0xd1, 0xf8, 0x89, 0x46, 0x0a, 0xc3}

const unsigned short int pp_WE6AA = 0xe6aa; // WE6AA size: 22
// {0x8b, 0x46, 0x0e, 0xf7, 0x26, 0x60, 0xe3, 0xf7, 0x36, 0x5e, 0xe3, 0x0b, 0xc0, 0x7f, 0x03, 0xb8, 0x01, 0x00, 0x89, 0x46, 0x0e, 0xc3}

const unsigned short int pp_WE6C2 = 0xe6c2; // WE6C2 size: 154
// {0x8b, 0xec, 0x8b, 0x46, 0x04, 0x2b, 0x46, 0x08, 0x48, 0x7e, 0x05, 0xb8, 0x01, 0x00, 0xeb, 0x02, 0x33, 0xc0, 0x89, 0x06, 0x6c, 0xe3, 0x8b, 0x4e, 0x02, 0x2b, 0x4e, 0x06, 0x49, 0x7e, 0x05, 0xb9, 0x01, 0x00, 0xeb, 0x02, 0x33, 0xc9, 0x89, 0x0e, 0x68, 0xe3, 0x0b, 0xc1, 0x7e, 0x64, 0xe8, 0x9e, 0xff, 0xe8, 0x05, 0xff, 0xe8, 0x37, 0xff, 0xe8, 0xae, 0xff, 0x33, 0xc0, 0xff, 0x76, 0x0e, 0x50, 0x50, 0xff, 0x76, 0x08, 0xff, 0x76, 0x06, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x0a, 0xe8, 0xb0, 0xff, 0x33, 0xc0, 0xff, 0x76, 0x0e, 0x50, 0x50, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x06, 0xff, 0x76, 0x04, 0xff, 0x76, 0x0a, 0xe8, 0x9a, 0xff, 0x33, 0xc0, 0xff, 0x76, 0x0e, 0x50, 0x50, 0xff, 0x76, 0x08, 0xff, 0x76, 0x0a, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x02, 0xe8, 0x84, 0xff, 0x33, 0xc0, 0xff, 0x76, 0x0e, 0x50, 0x50, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x0a, 0xff, 0x76, 0x04, 0xff, 0x76, 0x02, 0xe8, 0x6e, 0xff, 0x58, 0x83, 0xc4, 0x0e, 0x8b, 0xec, 0x50, 0xc3}

const unsigned short int pp_WEACD = 0xeacd; // WEACD size: 2
// {0x3a, 0x20}

const unsigned short int pp_POLYPTR = 0xeb80; // POLYPTR size: 2
// {0x20, 0x4f}

const unsigned short int pp_WEB84 = 0xeb84; // WEB84 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEB88 = 0xeb88; // WEB88 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEB8C = 0xeb8c; // WEB8C size: 2
// {0x3a, 0x20}

const unsigned short int pp_WED30 = 0xed30; // WED30 size: 2
// {0x3a, 0x20}

const unsigned short int pp_FADDR = 0xed7d; // FADDR size: 2
// {0x20, 0x2d}

const unsigned short int pp_WED81 = 0xed81; // WED81 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WED85 = 0xed85; // WED85 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WED89 = 0xed89; // WED89 size: 2
// {0x3a, 0x20}


const unsigned short int cc_WE364 = 0xe364; // WE364
const unsigned short int cc_WE386 = 0xe386; // WE386
const unsigned short int cc_WE7FD = 0xe7fd; // WE7FD


// 0xe352: db 0xde 0x00 '  '

// ================================================
// 0xe354: WORD 'WE356' codep=0x1d29 wordp=0xe356
// ================================================
// 0xe356: db 0x3a 0x20 ': '

// ================================================
// 0xe358: WORD 'WE35A' codep=0x1d29 wordp=0xe35a
// ================================================
// 0xe35a: db 0x3a 0x20 ': '

// ================================================
// 0xe35c: WORD 'WE35E' codep=0x1d29 wordp=0xe35e
// ================================================
// 0xe35e: db 0x56 0x3a 0x20 0x6e 'V: n'

// ================================================
// 0xe362: WORD 'WE364' codep=0x2214 wordp=0xe364
// ================================================
// 0xe364: dw 0xff80

// ================================================
// 0xe366: WORD 'WE368' codep=0x1d29 wordp=0xe368
// ================================================
// orphan
// 0xe368: db 0x3a 0x20 ': '

// ================================================
// 0xe36a: WORD 'WE36C' codep=0x1d29 wordp=0xe36c
// ================================================
// orphan
// 0xe36c: db 0x3a 0x20 ': '

// ================================================
// 0xe36e: WORD 'WE370' codep=0x1d29 wordp=0xe370
// ================================================
// 0xe370: db 0x3a 0x20 ': '

// ================================================
// 0xe372: WORD 'WE374' codep=0x1d29 wordp=0xe374
// ================================================
// 0xe374: db 0x3a 0x20 ': '

// ================================================
// 0xe376: WORD 'WE378' codep=0x1d29 wordp=0xe378
// ================================================
// orphan
// 0xe378: db 0x3a 0x20 ': '

// ================================================
// 0xe37a: WORD 'WE37C' codep=0x1d29 wordp=0xe37c
// ================================================
// orphan
// 0xe37c: db 0x3a 0x20 ': '

// ================================================
// 0xe37e: WORD 'WE380' codep=0x3b74 wordp=0xe380
// ================================================
// 0xe380: dw 0x7fff 0x5192

// ================================================
// 0xe384: WORD 'WE386' codep=0x2214 wordp=0xe386
// ================================================
// 0xe386: dw 0x0075

// ================================================
// 0xe388: WORD 'WE38A' codep=0x1d29 wordp=0xe38a
// ================================================
// orphan
// 0xe38a: db 0x3a 0x20 ': '

// ================================================
// 0xe38c: WORD 'WE38E' codep=0x1d29 wordp=0xe38e
// ================================================
// orphan
// 0xe38e: db 0x3a 0x20 ': '

// ================================================
// 0xe390: WORD 'WE392' codep=0x1d29 wordp=0xe392
// ================================================
// orphan
// 0xe392: db 0x3a 0x20 ': '

// ================================================
// 0xe394: WORD 'WE396' codep=0x1d29 wordp=0xe396
// ================================================
// orphan
// 0xe396: db 0x3a 0x20 ': '

// ================================================
// 0xe398: WORD 'WE39A' codep=0x224c wordp=0xe39a params=3 returns=0
// ================================================

void WE39A() // WE39A
{
  Push(pp_WE35A); // WE35A
  Store_2(); // !_2
  Push(pp_WE35E); // WE35E
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xe3a4: WORD 'WE3A6' codep=0x224c wordp=0xe3a6 params=0 returns=1
// ================================================

void WE3A6() // WE3A6
{
  unsigned short int i, imax;
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_WE35A)); // WE35A @
    Push(Read16(regsp)); // DUP
    Push(-Pop()); //  NEGATE
    SWAP(); // SWAP
    RRND(); // RRND
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe3be: WORD 'WE3C0' codep=0x1d29 wordp=0xe3c0 params=0 returns=1
// ================================================
// orphan
// 0xe3c0: mov    ax,[4B9C] // SEED_3
// 0xe3c4: mov    cx,7ABD
// 0xe3c7: imul   cx
// 0xe3c9: add    ax,1B0F
// 0xe3cc: mov    [4B9C],ax // SEED_3
// 0xe3d0: pop    dx
// 0xe3d1: pop    bx
// 0xe3d2: pop    cx
// 0xe3d3: push   dx
// 0xe3d4: sub    bx,cx
// 0xe3d6: mul    bx
// 0xe3d8: add    dx,cx
// 0xe3da: pop    ax
// 0xe3db: push   dx
// 0xe3dc: push   ax
// 0xe3dd: ret    


// ================================================
// 0xe3de: WORD 'WE3E0' codep=0x1d29 wordp=0xe3e0 params=0 returns=1
// ================================================
// 0xe3e0: pop    bx
// 0xe3e1: pop    ax
// 0xe3e2: pop    cx
// 0xe3e3: add    ax,cx
// 0xe3e5: cmp    ax,007F
// 0xe3e8: jle    E3ED
// 0xe3ea: mov    ax,007F
// 0xe3ed: cmp    ax,FF81
// 0xe3f0: jns    E3F5
// 0xe3f2: mov    ax,FF81
// 0xe3f5: push   ax
// 0xe3f6: push   bx
// 0xe3f7: ret    


// ================================================
// 0xe3f8: WORD 'WE3FA' codep=0x1d29 wordp=0xe3fa params=0 returns=1
// ================================================
// 0xe3fa: pop    bx
// 0xe3fb: pop    ax
// 0xe3fc: pop    cx
// 0xe3fd: push   bx
// 0xe3fe: mov    dx,[E356] // WE356
// 0xe402: or     dx,dx
// 0xe404: jle    E456
// 0xe406: add    cx,[E370] // WE370
// 0xe40a: add    ax,[E374] // WE374
// 0xe40e: jns    E419
// 0xe410: inc    ax
// 0xe411: neg    ax
// 0xe413: add    cx,0480
// 0xe417: jmp    E42B
// 0xe419: mov    dx,03C0
// 0xe41c: cmp    ax,dx
// 0xe41e: js     E42B
// 0xe420: sub    ax,dx
// 0xe422: neg    ax
// 0xe424: add    ax,dx
// 0xe426: inc    ax
// 0xe427: add    cx,0480
// 0xe42b: mov    [4B9C],ax // SEED_3
// 0xe42f: push   cx
// 0xe430: mov    ax,0001
// 0xe433: push   ax
// 0xe434: neg    ax
// 0xe436: push   ax
// 0xe437: call   E3C0
// 0xe43a: pop    cx
// 0xe43b: pop    word ptr [4B9C] // SEED_3
// 0xe43f: push   cx
// 0xe440: mov    ax,0001
// 0xe443: push   ax
// 0xe444: neg    ax
// 0xe446: push   ax
// 0xe447: call   E3C0
// 0xe44a: pop    ax
// 0xe44b: pop    cx
// 0xe44c: xor    ax,[5B49] // GLOBALS
// 0xe450: xor    ax,cx
// 0xe452: mov    [4B9C],ax // SEED_3
// 0xe456: mov    ax,[bp+0E]
// 0xe459: mov    cx,ax
// 0xe45b: neg    cx
// 0xe45d: push   cx
// 0xe45e: push   ax
// 0xe45f: call   E3C0
// 0xe462: pop    ax
// 0xe463: pop    cx
// 0xe464: push   ax
// 0xe465: push   cx
// 0xe466: ret    


// ================================================
// 0xe467: WORD 'WE469' codep=0x1d29 wordp=0xe469 params=0 returns=1
// ================================================
// 0xe469: pop    dx
// 0xe46a: pop    ax
// 0xe46b: pop    cx
// 0xe46c: or     ax,ax
// 0xe46e: jns    E47F
// 0xe470: inc    ax
// 0xe471: neg    ax
// 0xe473: mov    bx,[4D60] // 'ARRAY
// 0xe477: mov    bx,[bx]
// 0xe479: shr    bx,1
// 0xe47b: add    cx,bx
// 0xe47d: jmp    E49B
// 0xe47f: mov    bx,[4D60] // 'ARRAY
// 0xe483: mov    bx,[bx+02]
// 0xe486: cmp    ax,bx
// 0xe488: js     E49B
// 0xe48a: sub    ax,bx
// 0xe48c: neg    ax
// 0xe48e: add    ax,bx
// 0xe490: inc    ax
// 0xe491: mov    bx,[4D60] // 'ARRAY
// 0xe495: mov    bx,[bx]
// 0xe497: shr    bx,1
// 0xe499: add    cx,bx
// 0xe49b: or     cx,cx
// 0xe49d: jns    E4A7
// 0xe49f: mov    bx,[4D60] // 'ARRAY
// 0xe4a3: add    cx,[bx]
// 0xe4a5: jmp    E4B3
// 0xe4a7: mov    bx,[4D60] // 'ARRAY
// 0xe4ab: mov    bx,[bx]
// 0xe4ad: cmp    cx,bx
// 0xe4af: js     E4B3
// 0xe4b1: sub    cx,bx
// 0xe4b3: push   cx
// 0xe4b4: push   ax
// 0xe4b5: push   dx
// 0xe4b6: ret    


// ================================================
// 0xe4b7: WORD 'WE4B9' codep=0x1d29 wordp=0xe4b9 params=0 returns=1
// ================================================
// 0xe4b9: pop    word ptr [E38A] // WE38A
// 0xe4bd: mov    ax,[4D39] // SPHEREW
// 0xe4c1: or     ax,ax
// 0xe4c3: jle    E4C8
// 0xe4c5: call   E469
// 0xe4c8: mov    bx,[4D60] // 'ARRAY
// 0xe4cc: mov    ax,[bx+06]
// 0xe4cf: mov    bx,[bx+04]
// 0xe4d2: pop    cx
// 0xe4d3: shl    cx,1
// 0xe4d5: add    bx,cx
// 0xe4d7: push   ds
// 0xe4d8: mov    ds,ax
// 0xe4da: mov    cx,[bx]
// 0xe4dc: pop    ds
// 0xe4dd: pop    dx
// 0xe4de: add    cx,dx
// 0xe4e0: mov    [E378],ax // WE378
// 0xe4e4: mov    [E37C],cx // WE37C
// 0xe4e8: push   word ptr [E38A] // WE38A
// 0xe4ec: ret    


// ================================================
// 0xe4ed: WORD 'WE4EF' codep=0x1d29 wordp=0xe4ef params=0 returns=1
// ================================================
// 0xe4ef: pop    dx
// 0xe4f0: mov    bx,[E37C] // WE37C
// 0xe4f4: push   ds
// 0xe4f5: push   word ptr [E378] // WE378
// 0xe4f9: pop    ds
// 0xe4fa: mov    al,[bx]
// 0xe4fc: pop    ds
// 0xe4fd: mov    cx,[4D47] // SIGNEXT
// 0xe501: or     cx,cx
// 0xe503: jle    E508
// 0xe505: cbw    
// 0xe506: jmp    E50A
// 0xe508: xor    ah,ah
// 0xe50a: push   ax
// 0xe50b: push   dx
// 0xe50c: ret    


// ================================================
// 0xe50d: WORD 'WE50F' codep=0x1d29 wordp=0xe50f params=0 returns=1
// ================================================
// 0xe50f: pop    word ptr [E38E] // WE38E
// 0xe513: call   E4B9
// 0xe516: call   E4EF
// 0xe519: pop    ax
// 0xe51a: cmp    ax,FF80
// 0xe51d: jnz    E52F
// 0xe51f: pop    ax
// 0xe520: push   ds
// 0xe521: push   word ptr [E378] // WE378
// 0xe525: mov    bx,[E37C] // WE37C
// 0xe529: pop    ds
// 0xe52a: mov    [bx],al
// 0xe52c: pop    ds
// 0xe52d: jmp    E530
// 0xe52f: pop    ax
// 0xe530: push   word ptr [E38E] // WE38E
// 0xe534: ret    


// ================================================
// 0xe535: WORD 'WE537' codep=0xe537 wordp=0xe537
// ================================================
// 0xe537: call   E50F
// 0xe53a: lodsw
// 0xe53b: mov    bx,ax
// 0xe53d: jmp    word ptr [bx]

// ================================================
// 0xe53f: WORD 'WE541' codep=0x224c wordp=0xe541
// ================================================

void WE541() // WE541
{
  Push(Read16(pp_XUR)); // XUR @
  Push(Read16(pp_YLL)); // YLL @
  WE537(); // WE537
  Push(Read16(pp_XUR)); // XUR @
  Push(Read16(pp_YUR)); // YUR @
  WE537(); // WE537
  Push(Read16(pp_XLL)); // XLL @
  Push(Read16(pp_YUR)); // YUR @
  WE537(); // WE537
  Push(Read16(pp_XLL)); // XLL @
  Push(Read16(pp_YLL)); // YLL @
  WE537(); // WE537
}


// ================================================
// 0xe56b: WORD 'WE56D' codep=0x1d29 wordp=0xe56d params=0 returns=1
// ================================================
// orphan
// 0xe56d: pop    cx
// 0xe56e: pop    word ptr [E396] // WE396
// 0xe572: push   cx
// 0xe573: push   word ptr [bp+08]
// 0xe576: push   word ptr [E396] // WE396
// 0xe57a: call   E4B9
// 0xe57d: call   E4EF
// 0xe580: push   word ptr [bp+04]
// 0xe583: push   word ptr [E396] // WE396
// 0xe587: call   E4B9
// 0xe58a: call   E4EF
// 0xe58d: pop    ax
// 0xe58e: pop    cx
// 0xe58f: add    ax,cx
// 0xe591: sar    ax,1
// 0xe593: push   ax
// 0xe594: mov    bx,[bp+08]
// 0xe597: add    bx,[bp+04]
// 0xe59a: sar    bx,1
// 0xe59c: push   bx
// 0xe59d: push   word ptr [E396] // WE396
// 0xe5a1: call   E3FA
// 0xe5a4: call   E3E0
// 0xe5a7: push   word ptr [bp+0C]
// 0xe5aa: push   word ptr [E396] // WE396
// 0xe5ae: call   E50F
// 0xe5b1: ret    


// ================================================
// 0xe5b2: WORD 'WE5B4' codep=0x1d29 wordp=0xe5b4 params=0 returns=1
// ================================================
// 0xe5b4: pop    cx
// 0xe5b5: pop    word ptr [E396] // WE396
// 0xe5b9: push   cx
// 0xe5ba: push   word ptr [E396] // WE396
// 0xe5be: push   word ptr [bp+06]
// 0xe5c1: call   E4B9
// 0xe5c4: call   E4EF
// 0xe5c7: push   word ptr [E396] // WE396
// 0xe5cb: push   word ptr [bp+02]
// 0xe5ce: call   E4B9
// 0xe5d1: call   E4EF
// 0xe5d4: pop    ax
// 0xe5d5: pop    cx
// 0xe5d6: add    ax,cx
// 0xe5d8: sar    ax,1
// 0xe5da: push   ax
// 0xe5db: push   word ptr [E396] // WE396
// 0xe5df: mov    bx,[bp+06]
// 0xe5e2: add    bx,[bp+02]
// 0xe5e5: sar    bx,1
// 0xe5e7: push   bx
// 0xe5e8: call   E3FA
// 0xe5eb: call   E3E0
// 0xe5ee: push   word ptr [E396] // WE396
// 0xe5f2: push   word ptr [bp+0A]
// 0xe5f5: call   E50F
// 0xe5f8: ret    


// ================================================
// 0xe5f9: WORD 'WE5FB' codep=0x1d29 wordp=0xe5fb params=0 returns=1
// ================================================
// 0xe5fb: mov    ax,[E368] // WE368
// 0xe5ff: or     ax,ax
// 0xe601: jle    E614
// 0xe603: mov    ax,[bp+08]
// 0xe606: or     ax,ax
// 0xe608: jnz    E60E
// 0xe60a: push   ax
// 0xe60b: call   E5B4
// 0xe60e: push   word ptr [bp+04]
// 0xe611: call   E5B4
// 0xe614: mov    ax,[E36C] // WE36C
// 0xe618: or     ax,ax
// 0xe61a: jle    E62D
// 0xe61c: mov    ax,[bp+06]
// 0xe61f: or     ax,ax
// 0xe621: jnz    E627
// 0xe623: push   ax
// 0xe624: call   E56D
// 0xe627: push   word ptr [bp+02]
// 0xe62a: call   E56D
// 0xe62d: ret    


// ================================================
// 0xe62e: WORD 'WE630' codep=0x1d29 wordp=0xe630 params=0 returns=1
// ================================================
// 0xe630: mov    ax,[E368] // WE368
// 0xe634: and    ax,[E36C] // WE36C
// 0xe638: jle    E68E
// 0xe63a: push   word ptr [bp+0C]
// 0xe63d: push   word ptr [bp+06]
// 0xe640: call   E4B9
// 0xe643: call   E4EF
// 0xe646: push   word ptr [bp+0C]
// 0xe649: push   word ptr [bp+02]
// 0xe64c: call   E4B9
// 0xe64f: call   E4EF
// 0xe652: push   word ptr [bp+08]
// 0xe655: push   word ptr [bp+0A]
// 0xe658: call   E4B9
// 0xe65b: call   E4EF
// 0xe65e: push   word ptr [bp+04]
// 0xe661: push   word ptr [bp+0A]
// 0xe664: call   E4B9
// 0xe667: call   E4EF
// 0xe66a: pop    ax
// 0xe66b: pop    cx
// 0xe66c: add    ax,cx
// 0xe66e: pop    cx
// 0xe66f: add    ax,cx
// 0xe671: pop    cx
// 0xe672: add    ax,cx
// 0xe674: sar    ax,1
// 0xe676: sar    ax,1
// 0xe678: push   ax
// 0xe679: push   word ptr [bp+0C]
// 0xe67c: push   word ptr [bp+0A]
// 0xe67f: call   E3FA
// 0xe682: call   E3E0
// 0xe685: push   word ptr [bp+0C]
// 0xe688: push   word ptr [bp+0A]
// 0xe68b: call   E50F
// 0xe68e: ret    


// ================================================
// 0xe68f: WORD 'WE691' codep=0x1d29 wordp=0xe691 params=0 returns=1
// ================================================
// 0xe691: mov    ax,[bp+08]
// 0xe694: add    ax,[bp+04]
// 0xe697: sar    ax,1
// 0xe699: mov    [bp+0C],ax
// 0xe69c: mov    ax,[bp+06]
// 0xe69f: add    ax,[bp+02]
// 0xe6a2: sar    ax,1
// 0xe6a4: mov    [bp+0A],ax
// 0xe6a7: ret    


// ================================================
// 0xe6a8: WORD 'WE6AA' codep=0x1d29 wordp=0xe6aa params=0 returns=1
// ================================================
// 0xe6aa: mov    ax,[bp+0E]
// 0xe6ad: mul    word ptr [E360] // WE35E
// 0xe6b1: div    word ptr [E35E] // WE35E
// 0xe6b5: or     ax,ax
// 0xe6b7: jg     E6BC
// 0xe6b9: mov    ax,0001
// 0xe6bc: mov    [bp+0E],ax
// 0xe6bf: ret    


// ================================================
// 0xe6c0: WORD 'WE6C2' codep=0x1d29 wordp=0xe6c2 params=0 returns=1
// ================================================
// 0xe6c2: mov    bp,sp
// 0xe6c4: mov    ax,[bp+04]
// 0xe6c7: sub    ax,[bp+08]
// 0xe6ca: dec    ax
// 0xe6cb: jle    E6D2
// 0xe6cd: mov    ax,0001
// 0xe6d0: jmp    E6D4
// 0xe6d2: xor    ax,ax
// 0xe6d4: mov    [E36C],ax // WE36C
// 0xe6d8: mov    cx,[bp+02]
// 0xe6db: sub    cx,[bp+06]
// 0xe6de: dec    cx
// 0xe6df: jle    E6E6
// 0xe6e1: mov    cx,0001
// 0xe6e4: jmp    E6E8
// 0xe6e6: xor    cx,cx
// 0xe6e8: mov    [E368],cx // WE368
// 0xe6ec: or     ax,cx
// 0xe6ee: jle    E754
// 0xe6f0: call   E691
// 0xe6f3: call   E5FB
// 0xe6f6: call   E630
// 0xe6f9: call   E6AA
// 0xe6fc: xor    ax,ax
// 0xe6fe: push   word ptr [bp+0E]
// 0xe701: push   ax
// 0xe702: push   ax
// 0xe703: push   word ptr [bp+08]
// 0xe706: push   word ptr [bp+06]
// 0xe709: push   word ptr [bp+0C]
// 0xe70c: push   word ptr [bp+0A]
// 0xe70f: call   E6C2
// 0xe712: xor    ax,ax
// 0xe714: push   word ptr [bp+0E]
// 0xe717: push   ax
// 0xe718: push   ax
// 0xe719: push   word ptr [bp+0C]
// 0xe71c: push   word ptr [bp+06]
// 0xe71f: push   word ptr [bp+04]
// 0xe722: push   word ptr [bp+0A]
// 0xe725: call   E6C2
// 0xe728: xor    ax,ax
// 0xe72a: push   word ptr [bp+0E]
// 0xe72d: push   ax
// 0xe72e: push   ax
// 0xe72f: push   word ptr [bp+08]
// 0xe732: push   word ptr [bp+0A]
// 0xe735: push   word ptr [bp+0C]
// 0xe738: push   word ptr [bp+02]
// 0xe73b: call   E6C2
// 0xe73e: xor    ax,ax
// 0xe740: push   word ptr [bp+0E]
// 0xe743: push   ax
// 0xe744: push   ax
// 0xe745: push   word ptr [bp+0C]
// 0xe748: push   word ptr [bp+0A]
// 0xe74b: push   word ptr [bp+04]
// 0xe74e: push   word ptr [bp+02]
// 0xe751: call   E6C2
// 0xe754: pop    ax
// 0xe755: add    sp,0E
// 0xe758: mov    bp,sp
// 0xe75a: push   ax
// 0xe75b: ret    


// ================================================
// 0xe75c: WORD 'WE75E' codep=0xe75e wordp=0xe75e
// ================================================
// 0xe75e: mov    [E392],bp // WE392
// 0xe762: call   E6C2
// 0xe765: mov    bp,[E392] // WE392
// 0xe769: lodsw
// 0xe76a: mov    bx,ax
// 0xe76c: jmp    word ptr [bx]

// ================================================
// 0xe76e: WORD 'WE770' codep=0xe770 wordp=0xe770
// ================================================
// 0xe770: pop    ax
// 0xe771: mov    bx,[4D60] // 'ARRAY
// 0xe775: mov    cx,[bx+04]
// 0xe778: mov    bx,[bx+06]
// 0xe77b: push   es
// 0xe77c: push   di
// 0xe77d: mov    es,bx
// 0xe77f: xor    di,di
// 0xe781: repz   
// 0xe782: stosb
// 0xe783: pop    di
// 0xe784: pop    es
// 0xe785: lodsw
// 0xe786: mov    bx,ax
// 0xe788: jmp    word ptr [bx]

// ================================================
// 0xe78a: WORD 'WE78C' codep=0x224c wordp=0xe78c
// ================================================

void WE78C() // WE78C
{
  Push(Read16(pp_WE35A)); // WE35A @
  Push(0);
  Push(0);
  Push(Read16(pp_XLL)); // XLL @
  Push(Read16(pp_YLL)); // YLL @
  Push(Read16(pp_XUR)); // XUR @
  Push(Read16(pp_YUR)); // YUR @
  WE75E(); // WE75E
}


// ================================================
// 0xe7a8: WORD 'MERCATOR-GEN' codep=0x224c wordp=0xe7b9
// ================================================
// entry

void MERCATOR_dash_GEN() // MERCATOR-GEN
{
  Push(Read16(regsp)); // DUP
  Push(pp_SEED_3); // SEED_3
  Store_2(); // !_2
  Push(pp_GLOBALS); // GLOBALS
  Store_2(); // !_2
  Push(pp_WE356); // WE356
  _099(); // 099
  Push2Words("WE380");
  Push(Read16(cc_WE386)); // WE386
  WE39A(); // WE39A
  Push(pp_SPHEREW); // SPHEREW
  ON_2(); // ON_2
  Push(pp_SIGNEXT); // SIGNEXT
  ON_2(); // ON_2
  Push(0x6a5a); // 'MERCATO'
  SETLARR(); // SETLARR
  Push(0);
  Push(0);
  Push(0x0030);
  Push(0x0017);
  SETREGI(); // SETREGI
  Push(Read16(cc_WE364)); // WE364
  WE770(); // WE770
  WE3A6(); // WE3A6
  WE541(); // WE541
  WE78C(); // WE78C
}


// ================================================
// 0xe7f5: WORD 'WE7F7' codep=0x3b74 wordp=0xe7f7
// ================================================
// 0xe7f7: dw 0x7fff 0x5192

// ================================================
// 0xe7fb: WORD 'WE7FD' codep=0x2214 wordp=0xe7fd
// ================================================
// 0xe7fd: dw 0x0014

// ================================================
// 0xe7ff: WORD 'WE801' codep=0x224c wordp=0xe801
// ================================================

void WE801() // WE801
{
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  Push(Read16(cc_WE364)); // WE364
  WE770(); // WE770
}


// ================================================
// 0xe80d: WORD 'WE80F' codep=0x224c wordp=0xe80f
// ================================================

void WE80F() // WE80F
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_YCON)); // YCON @
  Push(0x0028);
  _slash_(); // /
  Push(pp_Y2); // Y2
  Store_2(); // !_2
  Push(Read16(pp_XCON)); // XCON @
  Push(0x0030);
  _slash_(); // /
  Push(pp_X2); // X2
  Store_2(); // !_2
  Push(pp_SPHEREW); // SPHEREW
  ON_2(); // ON_2
  Push(0x6a5a); // 'MERCATO'
  SETLARR(); // SETLARR
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(3);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j + Read16(pp_X2)); // I X2 @ +
      Push(Read16(pp_Y2) + i); // Y2 @ J +
      ACELLAD(); // ACELLAD
      A_at_(); // A@
      Push(j * 4); // I 4 *
      Push(i * 2); // J 2*
      ReadArray(CONANCH); // CONANCH
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe86d: WORD 'WE86F' codep=0x224c wordp=0xe86f
// ================================================

void WE86F() // WE86F
{
  unsigned short int a, b, c;
  _2OVER(); // 2OVER
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  a = Pop(); // >R
  _2DUP(); // 2DUP
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(Pop() + a >> 1); //  R> + 2/
  b = Pop(); // >R
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
  c = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
  Push(c); // R>
  Push(b); // R>
  ROT(); // ROT
  ROT(); // ROT
  ACELLAD(); // ACELLAD
  A_ex_(); // A!
}


// ================================================
// 0xe89f: WORD 'WE8A1' codep=0x224c wordp=0xe8a1
// ================================================

void WE8A1() // WE8A1
{
  unsigned short int i, imax, j, jmax;
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(2);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j * 4); // I 4 *
      Push(i * 2); // J 2*
      OVER(); // OVER
      Push(Pop() + 4); //  4 +
      OVER(); // OVER
      WE86F(); // WE86F
      Push(j * 4); // I 4 *
      Push(i * 2); // J 2*
      OVER(); // OVER
      Push(Pop() + 2); //  2 +
      OVER(); // OVER
      WE86F(); // WE86F
      Push((j + 1) * 4); // I 1+ 4 *
      Push(i * 2); // J 2*
      OVER(); // OVER
      Push(Pop() - 2); //  2 -
      OVER(); // OVER
      WE86F(); // WE86F
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe8f5: WORD 'WE8F7' codep=0x224c wordp=0xe8f7
// ================================================

void WE8F7() // WE8F7
{
  unsigned short int i, imax, j, jmax;
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(3);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j * 4); // I 4 *
      Push(i * 2); // J 2*
      OVER(); // OVER
      OVER(); // OVER
      Push(Pop() + 2); //  2+
      WE86F(); // WE86F
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe91f: WORD 'WE921' codep=0x224c wordp=0xe921
// ================================================

void WE921() // WE921
{
  unsigned short int i, imax, j, jmax;
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(2);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j * 4); // I 4 *
      Push(i * 2 + 1); // J 2* 1+
      OVER(); // OVER
      Push(Pop() + 4); //  4 +
      OVER(); // OVER
      WE86F(); // WE86F
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe94d: WORD 'WE94F' codep=0x224c wordp=0xe94f
// ================================================

void WE94F() // WE94F
{
  unsigned short int i, imax, j, jmax;
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(4);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j * 2 + 1); // I 2* 1+
      Push(i * 2); // J 2*
      OVER(); // OVER
      OVER(); // OVER
      Push(Pop() + 2); //  2+
      WE86F(); // WE86F
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe977: WORD 'WE979' codep=0x224c wordp=0xe979 params=2 returns=0
// ================================================

void WE979() // WE979
{
  Push(pp_WE374); // WE374
  Store_2(); // !_2
  Push(pp_WE370); // WE370
  Store_2(); // !_2
}


// ================================================
// 0xe983: WORD 'WE985' codep=0x224c wordp=0xe985 params=0 returns=4
// ================================================

void WE985() // WE985
{
  unsigned short int a, i, imax, j, jmax;
  Push(Read16(pp_XCON)); // XCON @
  Push(0x0030);
  MOD(); // MOD
  Push(0x000c);
  _slash_(); // /
  Push(Read16(pp_YCON)); // YCON @
  Push(0x0028);
  MOD(); // MOD
  Push(0x0014);
  _slash_(); // /
  OVER(); // OVER
  Push(Read16(pp_XCON)); // XCON @
  Push(0x0030);
  _slash_(); // /
  Push(Pop() * 0x0030); //  0x0030 *
  SWAP(); // SWAP
  Push(Pop() * 0x000c); //  0x000c *
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Read16(pp_YCON)); // YCON @
  Push(0x0028);
  _slash_(); // /
  Push(Pop() * 0x0028); //  0x0028 *
  OVER(); // OVER
  Push(Pop() * 0x0014); //  0x0014 *
  Push(Pop() + Pop()); // +
  Push(a); // R>
  SWAP(); // SWAP
  WE979(); // WE979
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(6);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      OVER(); // OVER
      Push(Pop() + j); //  I +
      OVER(); // OVER
      Push(Pop() + i); //  J +
      ReadArray(CONANCH); // CONANCH
      LC_at_(); // LC@
      Push(j * 0x000c); // I 0x000c *
      Push(i * 0x0014); // J 0x0014 *
      ReadArray(CONTOUR); // CONTOUR
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea1f: WORD 'WEA21' codep=0x224c wordp=0xea21
// ================================================

void WEA21() // WEA21
{
  WE80F(); // WE80F
  Push(0x6a6e); // 'CONANCH'
  SETLARR(); // SETLARR
  WE8A1(); // WE8A1
  WE8F7(); // WE8F7
  WE921(); // WE921
  WE94F(); // WE94F
  WE985(); // WE985
}


// ================================================
// 0xea35: WORD 'WEA37' codep=0x224c wordp=0xea37
// ================================================

void WEA37() // WEA37
{
  unsigned short int a;
  Push(Pop() * 0x0014); //  0x0014 *
  SWAP(); // SWAP
  Push(Pop() * 0x000c); //  0x000c *
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() + 1); //  1+
  OVER(); // OVER
  Push(Pop() + 1); //  1+
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(Pop()==Read16(cc_WE364)?1:0); //  WE364 =
  a = Pop(); // >R
  OVER(); // OVER
  Push(Pop() + 0x000b); //  0x000b +
  OVER(); // OVER
  Push(Pop() + 0x0013); //  0x0013 +
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push((Pop()==Read16(cc_WE364)?1:0) & a); //  WE364 = R> AND
  if (Pop() != 0)
  {
    OVER(); // OVER
    Push(Pop() + 0x000c); //  0x000c +
    OVER(); // OVER
    Push(Pop() + 0x0014); //  0x0014 +
    SETREGI(); // SETREGI
    WE78C(); // WE78C
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea95: WORD 'WEA97' codep=0x224c wordp=0xea97
// ================================================

void WEA97() // WEA97
{
  unsigned short int i, imax, j, jmax;
  Push(pp_SPHEREW); // SPHEREW
  _099(); // 099
  Push(pp_SIGNEXT); // SIGNEXT
  ON_2(); // ON_2
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  Push(pp_WE356); // WE356
  ON_2(); // ON_2
  Push2Words("WE7F7");
  Push(Read16(cc_WE7FD)); // WE7FD
  WE39A(); // WE39A
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(5);
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      WEA37(); // WEA37
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeacb: WORD 'WEACD' codep=0x1d29 wordp=0xeacd
// ================================================
// orphan
// 0xeacd: db 0x3a 0x20 ': '

// ================================================
// 0xeacf: WORD 'WEAD1' codep=0xead1 wordp=0xead1
// ================================================
// 0xead1: mov    [EACD],sp // WEACD
// 0xead5: lodsw
// 0xead6: mov    bx,ax
// 0xead8: jmp    word ptr [bx]

// ================================================
// 0xeada: WORD 'WEADC' codep=0xeadc wordp=0xeadc
// ================================================
// 0xeadc: add    sp,0E
// 0xeadf: mov    [EACD],sp // WEACD
// 0xeae3: lodsw
// 0xeae4: mov    bx,ax
// 0xeae6: jmp    word ptr [bx]

// ================================================
// 0xeae8: WORD 'WEAEA' codep=0xeaea wordp=0xeaea
// ================================================
// 0xeaea: pop    bx
// 0xeaeb: add    bx,[EACD] // WEACD
// 0xeaef: push   word ptr [bx]
// 0xeaf1: lodsw
// 0xeaf2: mov    bx,ax
// 0xeaf4: jmp    word ptr [bx]

// ================================================
// 0xeaf6: WORD 'WEAF8' codep=0xeaf8 wordp=0xeaf8
// ================================================
// 0xeaf8: pop    bx
// 0xeaf9: add    bx,[EACD] // WEACD
// 0xeafd: pop    word ptr [bx]
// 0xeaff: lodsw
// 0xeb00: mov    bx,ax
// 0xeb02: jmp    word ptr [bx]

// ================================================
// 0xeb04: WORD 'WEB06' codep=0x224c wordp=0xeb06
// ================================================

void WEB06() // WEB06
{
  Push(6);
  WEAEA(); // WEAEA
}


// ================================================
// 0xeb0c: WORD 'WEB0E' codep=0x224c wordp=0xeb0e
// ================================================

void WEB0E() // WEB0E
{
  Push(2);
  WEAEA(); // WEAEA
}


// ================================================
// 0xeb14: WORD 'WEB16' codep=0x224c wordp=0xeb16
// ================================================

void WEB16() // WEB16
{
  Push(0x000a);
  WEAEA(); // WEAEA
}


// ================================================
// 0xeb1e: WORD 'WEB20' codep=0x224c wordp=0xeb20
// ================================================

void WEB20() // WEB20
{
  Push(4);
  WEAEA(); // WEAEA
}


// ================================================
// 0xeb26: WORD 'WEB28' codep=0x224c wordp=0xeb28
// ================================================

void WEB28() // WEB28
{
  Push(0);
  WEAEA(); // WEAEA
}


// ================================================
// 0xeb2e: WORD 'WEB30' codep=0x224c wordp=0xeb30
// ================================================

void WEB30() // WEB30
{
  Push(8);
  WEAEA(); // WEAEA
}


// ================================================
// 0xeb36: WORD 'WEB38' codep=0x224c wordp=0xeb38
// ================================================

void WEB38() // WEB38
{
  Push(0x000c);
  WEAEA(); // WEAEA
}


// ================================================
// 0xeb40: WORD 'WEB42' codep=0x224c wordp=0xeb42
// ================================================

void WEB42() // WEB42
{
  Push(0x000a);
  WEAF8(); // WEAF8
}


// ================================================
// 0xeb4a: WORD 'WEB4C' codep=0x224c wordp=0xeb4c
// ================================================

void WEB4C() // WEB4C
{
  Push(8);
  WEAF8(); // WEAF8
}


// ================================================
// 0xeb52: WORD 'WEB54' codep=0x224c wordp=0xeb54
// ================================================

void WEB54() // WEB54
{
  Push(0x000c);
  WEAF8(); // WEAF8
}


// ================================================
// 0xeb5c: WORD 'WEB5E' codep=0x224c wordp=0xeb5e
// ================================================

void WEB5E() // WEB5E
{
  WEB06(); // WEB06
  WEB0E(); // WEB0E
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
  WEB42(); // WEB42
  WEB20(); // WEB20
  WEB28(); // WEB28
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
  WEB4C(); // WEB4C
}


// ================================================
// 0xeb74: WORD 'POLYPTR' codep=0x1d29 wordp=0xeb80
// ================================================
// 0xeb80: db 0x20 0x4f ' O'

// ================================================
// 0xeb82: WORD 'WEB84' codep=0x1d29 wordp=0xeb84
// ================================================
// 0xeb84: db 0x3a 0x20 ': '

// ================================================
// 0xeb86: WORD 'WEB88' codep=0x1d29 wordp=0xeb88
// ================================================
// 0xeb88: db 0x3a 0x20 ': '

// ================================================
// 0xeb8a: WORD 'WEB8C' codep=0x1d29 wordp=0xeb8c
// ================================================
// 0xeb8c: db 0x3a 0x20 ': '

// ================================================
// 0xeb8e: WORD 'WEB90' codep=0x224c wordp=0xeb90
// ================================================

void WEB90() // WEB90
{
  unsigned short int a;
  Push(Read16(pp_POLYPTR)); // POLYPTR @
  a = Pop(); // >R
  WEB38(); // WEB38
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(a); // I
  LC_ex_(); // LC!
  WEB06(); // WEB06
  Push(Pop() - Read16(pp_WEB8C)); //  WEB8C @ -
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(a + 1); // I 1+
  LC_ex_(); // LC!
  Push(Read16(pp_WEB88)); // WEB88 @
  WEB20(); // WEB20
  _dash_(); // -
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(a + 2); // I 2+
  LC_ex_(); // LC!
  WEB0E(); // WEB0E
  Push(Pop() - Read16(pp_WEB8C)); //  WEB8C @ -
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(a + 3); // I 3 +
  LC_ex_(); // LC!
  Push(Read16(pp_WEB88)); // WEB88 @
  WEB28(); // WEB28
  _dash_(); // -
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(a + 4); // R> 4 +
  LC_ex_(); // LC!
  Push(5);
  Push(pp_POLYPTR); // POLYPTR
  _plus__ex__2(); // +!_2
  Push(1);
  Push(pp_WEB84); // WEB84
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xebfa: WORD 'WEBFC' codep=0x224c wordp=0xebfc
// ================================================

void WEBFC() // WEBFC
{
  unsigned short int i, imax, j, jmax;
  WEB06(); // WEB06
  WEB20(); // WEB20
  Push(Pop() - 1); //  1-
  ReadArray(MERCATO); // MERCATO
  L_plus__dash__at_(); // L+-@
  COLORMA_2(); // COLORMA_2
  Push(Read16(pp_COLOR)); // COLOR @
  WEB54(); // WEB54
  WEB20(); // WEB20
  WEB28(); // WEB28

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    WEB0E(); // WEB0E
    WEB06(); // WEB06

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ReadArray(MERCATO); // MERCATO
      L_plus__dash__at_(); // L+-@
      COLORMA_2(); // COLORMA_2
      Push(Read16(pp_COLOR)); // COLOR @
      WEB38(); // WEB38
      Push((Pop()==Pop())?1:0); // =
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        Push(0x03e7);
        WEB54(); // WEB54
        jmax = j; // LEAVE
      }
      j++;
    } while(j<jmax); // (LOOP)

    WEB38(); // WEB38
    Push(Pop()==0x03e7?1:0); //  0x03e7 =
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  WEB38(); // WEB38
  Push(!(Pop()==0x03e7?1:0)); //  0x03e7 = NOT
}


// ================================================
// 0xec5c: WORD 'POLYGON-EXTRACT' codep=0x224c wordp=0xec70
// ================================================

void POLYGON_dash_EXTRACT() // POLYGON-EXTRACT
{
  WEAD1(); // WEAD1
  WEBFC(); // WEBFC
  if (Pop() != 0)
  {
    WEB90(); // WEB90
  } else
  {
    WEB5E(); // WEB5E
    Push(0);
    Push(0);
    Push(0);
    WEB06(); // WEB06
    WEB20(); // WEB20
    WEB16(); // WEB16
    WEB30(); // WEB30
    POLYGON_dash_EXTRACT(); // POLYGON-EXTRACT
    Push(0);
    Push(0);
    Push(0);
    WEB16(); // WEB16
    WEB20(); // WEB20
    WEB0E(); // WEB0E
    WEB30(); // WEB30
    POLYGON_dash_EXTRACT(); // POLYGON-EXTRACT
    Push(0);
    Push(0);
    Push(0);
    WEB06(); // WEB06
    WEB30(); // WEB30
    WEB16(); // WEB16
    WEB28(); // WEB28
    POLYGON_dash_EXTRACT(); // POLYGON-EXTRACT
    Push(0);
    Push(0);
    Push(0);
    WEB16(); // WEB16
    WEB30(); // WEB30
    WEB0E(); // WEB0E
    WEB28(); // WEB28
    POLYGON_dash_EXTRACT(); // POLYGON-EXTRACT
  }
  WEADC(); // WEADC
}


// ================================================
// 0xecc4: WORD 'WECC6' codep=0x224c wordp=0xecc6
// ================================================

void WECC6() // WECC6
{
  unsigned short int i, imax;
  Push(pp_POLYPTR); // POLYPTR
  _099(); // 099
  Push(0x0048);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(0);
    Push(0);
    Push(i); // I
    Push(0x000c);
    _slash_MOD(); // /MOD
    Push(6);
    SWAP(); // SWAP
    _dash_(); // -
    Push((Pop() * 2) * 2); //  2* 2*
    Push(Read16(regsp)); // DUP
    Push(pp_WEB88); // WEB88
    Store_2(); // !_2
    SWAP(); // SWAP
    Push(Pop() * 4); //  4 *
    Push(Read16(regsp)); // DUP
    Push(pp_WEB8C); // WEB8C
    Store_2(); // !_2
    SWAP(); // SWAP
    OVER(); // OVER
    Push(Pop() + 4); //  4 +
    OVER(); // OVER
    Push(Pop() - 4); //  4 -
    Push(pp_WEB84); // WEB84
    _099(); // 099
    Push(Read16(pp_POLYPTR)); // POLYPTR @
    Push(0);
    Push(i); // I
    ReadArray(FACE); // FACE
    L_ex_(); // L!
    POLYGON_dash_EXTRACT(); // POLYGON-EXTRACT
    Push(Read16(pp_WEB84)); // WEB84 @
    Push(2);
    Push(i); // I
    ReadArray(FACE); // FACE
    LC_ex_(); // LC!
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xed2e: WORD 'WED30' codep=0x1d29 wordp=0xed30
// ================================================
// 0xed30: db 0x3a 0x20 ': '

// ================================================
// 0xed32: WORD 'WED34' codep=0xed34 wordp=0xed34
// ================================================
// 0xed34: mov    [ED30],sp // WED30
// 0xed38: pop    ax
// 0xed39: shl    ax,1
// 0xed3b: sub    sp,ax
// 0xed3d: lodsw
// 0xed3e: mov    bx,ax
// 0xed40: jmp    word ptr [bx]

// ================================================
// 0xed42: WORD 'WED44' codep=0xed44 wordp=0xed44
// ================================================
// 0xed44: pop    ax
// 0xed45: shl    ax,1
// 0xed47: add    sp,ax
// 0xed49: lodsw
// 0xed4a: mov    bx,ax
// 0xed4c: jmp    word ptr [bx]

// ================================================
// 0xed4e: WORD 'WED50' codep=0xed50 wordp=0xed50
// ================================================
// 0xed50: pop    bx
// 0xed51: shl    bx,1
// 0xed53: neg    bx
// 0xed55: add    bx,[ED30] // WED30
// 0xed59: push   word ptr [bx]
// 0xed5b: lodsw
// 0xed5c: mov    bx,ax
// 0xed5e: jmp    word ptr [bx]

// ================================================
// 0xed60: WORD 'WED62' codep=0xed62 wordp=0xed62
// ================================================
// 0xed62: pop    bx
// 0xed63: shl    bx,1
// 0xed65: neg    bx
// 0xed67: add    bx,[ED30] // WED30
// 0xed6b: pop    ax
// 0xed6c: mov    [bx],ax
// 0xed6e: lodsw
// 0xed6f: mov    bx,ax
// 0xed71: jmp    word ptr [bx]

// ================================================
// 0xed73: WORD 'FADDR' codep=0x1d29 wordp=0xed7d
// ================================================
// 0xed7d: db 0x20 0x2d ' -'

// ================================================
// 0xed7f: WORD 'WED81' codep=0x1d29 wordp=0xed81
// ================================================
// 0xed81: db 0x3a 0x20 ': '

// ================================================
// 0xed83: WORD 'WED85' codep=0x1d29 wordp=0xed85
// ================================================
// 0xed85: db 0x3a 0x20 ': '

// ================================================
// 0xed87: WORD 'WED89' codep=0x1d29 wordp=0xed89
// ================================================
// 0xed89: db 0x3a 0x20 ': '

// ================================================
// 0xed8b: WORD 'WED8D' codep=0x224c wordp=0xed8d
// ================================================

void WED8D() // WED8D
{
  unsigned short int i, imax;
  Push(0x0020);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    WED50(); // WED50
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      Push(i); // I
      WED62(); // WED62
      Push(1);
      Push(i + 1); // I 1+
      WED62(); // WED62
      imax = i; // LEAVE
    } else
    {
      Push((Pop()==Pop())?1:0); // =
      if (Pop() != 0)
      {
        Push(i + 1); // I 1+
        Push(Read16(regsp)); // DUP
        WED50(); // WED50
        Push(Pop() + 1); //  1+
        SWAP(); // SWAP
        WED62(); // WED62
        imax = i; // LEAVE
        Pop(); // DROP
      }
    }
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xedd7: WORD 'WEDD9' codep=0x224c wordp=0xedd9
// ================================================

void WEDD9() // WEDD9
{
  unsigned short int a, b, i, imax, j, jmax, c;
  a = Pop(); // >R
  b = Pop(); // >R
  Push(0x0022);
  WED34(); // WED34
  Push(Read16(pp_WED30) - 0x0044); // WED30 @ 0x0044 -
  Push(0x0046);
  Push(0);
  FILL_2(); // FILL_2
  Push(b); // R>
  Push(a); // R>
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
    OVER(); // OVER
    LC_at_(); // LC@
    WED8D(); // WED8D
    Push(Pop() + 5); //  5 +
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  Push(0x0020);
  Push(0);

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    Push(j); // I
    WED50(); // WED50
    Push(j + 1); // I 1+
    WED50(); // WED50
    Push(Read16(regsp)); // DUP
    Push(0x0021);
    WED50(); // WED50
    _gt_(); // >
    if (Pop() != 0)
    {
      Push(0x0021);
      WED62(); // WED62
      Push(0x0020);
      WED62(); // WED62
    } else
    {
      Pop(); // DROP
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        jmax = j; // LEAVE
      }
    }
    Push(2);
    int step = Pop();
    j += step;
    if (((step>=0) && (j>=jmax)) || ((step<0) && (j<=jmax))) break;
  } while(1); // (+LOOP)

  Push(0x0020);
  WED50(); // WED50
  c = Pop(); // >R
  Push(0x0022);
  WED44(); // WED44
  Push(c); // R>
}


// ================================================
// 0xee63: WORD 'WEE65' codep=0xee65 wordp=0xee65
// ================================================
// 0xee65: mov    cx,es
// 0xee67: mov    dx,[5F1B] // ?EGA
// 0xee6b: and    dx,01
// 0xee6e: jnz    EE76
// 0xee70: mov    dx,[572D] // HBUF-SE
// 0xee74: jmp    EE7A
// 0xee76: mov    dx,[542B] // XBUF-SE
// 0xee7a: mov    es,dx
// 0xee7c: xor    ax,ax
// 0xee7e: pop    bx
// 0xee7f: es:    
// 0xee80: mov    al,[bx]
// 0xee82: inc    bx
// 0xee83: es:    
// 0xee84: push   word ptr [bx]
// 0xee86: add    bx,02
// 0xee89: es:    
// 0xee8a: push   word ptr [bx]
// 0xee8c: push   ax
// 0xee8d: mov    es,cx
// 0xee8f: lodsw
// 0xee90: mov    bx,ax
// 0xee92: jmp    word ptr [bx]

// ================================================
// 0xee94: WORD 'WEE96' codep=0xee96 wordp=0xee96
// ================================================
// 0xee96: mov    cx,es
// 0xee98: mov    dx,[52A2] // POLYSEG
// 0xee9c: mov    es,dx
// 0xee9e: mov    bx,[ED7D] // FADDR
// 0xeea2: pop    ax
// 0xeea3: es:    
// 0xeea4: mov    [bx],al
// 0xeea6: add    bx,03
// 0xeea9: es:    
// 0xeeaa: pop    word ptr [bx]
// 0xeeac: sub    bx,02
// 0xeeaf: es:    
// 0xeeb0: pop    word ptr [bx]
// 0xeeb2: add    bx,04
// 0xeeb5: mov    [ED7D],bx // FADDR
// 0xeeb9: mov    es,cx
// 0xeebb: lodsw
// 0xeebc: mov    bx,ax
// 0xeebe: jmp    word ptr [bx]

// ================================================
// 0xeec0: WORD 'WEEC2' codep=0xeec2 wordp=0xeec2
// ================================================
// 0xeec2: add    sp,06
// 0xeec5: lodsw
// 0xeec6: mov    bx,ax
// 0xeec8: jmp    word ptr [bx]

// ================================================
// 0xeeca: WORD 'WEECC' codep=0xeecc wordp=0xeecc
// ================================================
// 0xeecc: xor    ax,ax
// 0xeece: pop    ax
// 0xeecf: push   ax
// 0xeed0: cmp    ax,[ED81] // WED81
// 0xeed4: jnz    EEDB
// 0xeed6: mov    ax,0001
// 0xeed9: jmp    EEDD
// 0xeedb: xor    ax,ax
// 0xeedd: push   ax
// 0xeede: lodsw
// 0xeedf: mov    bx,ax
// 0xeee1: jmp    word ptr [bx]

// ================================================
// 0xeee3: WORD 'WEEE5' codep=0xeee5 wordp=0xeee5
// ================================================
// 0xeee5: xor    ax,ax
// 0xeee7: push   ax
// 0xeee8: mov    ax,0004
// 0xeeeb: mov    ah,al
// 0xeeed: push   ax
// 0xeeee: mov    ax,[ED81] // WED81
// 0xeef2: push   ax
// 0xeef3: lodsw
// 0xeef4: mov    bx,ax
// 0xeef6: jmp    word ptr [bx]

// ================================================
// 0xeef8: WORD 'WEEFA' codep=0x224c wordp=0xeefa
// ================================================

void WEEFA() // WEEFA
{
  unsigned short int a, i, imax, j, jmax;
  Push(0);
  OVER(); // OVER
  ReadArray(FACE); // FACE
  OVER(); // OVER
  OVER(); // OVER
  L_at_(); // L@
  Push(pp_WED85); // WED85
  Store_2(); // !_2
  Push(Pop() + 2); //  2+
  LC_at_(); // LC@
  a = Pop(); // >R
  Push(Read16(pp_WED85)); // WED85 @
  Push(a); // I
  WEDD9(); // WEDD9
  Push(pp_WED81); // WED81
  Store_2(); // !_2
  Push(a); // I
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_WED85)); // WED85 @
    WEE65(); // WEE65
    Push(5);
    Push(pp_WED85); // WED85
    _plus__ex__2(); // +!_2
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_FADDR)); // FADDR @
  Push(pp_WED85); // WED85
  Store_2(); // !_2
  WEEE5(); // WEEE5
  Push(1);
  Push(pp_WED89); // WED89
  Store_2(); // !_2
  WEE96(); // WEE96
  Push(a); // R>
  Push(0);

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    WEECC(); // WEECC
    if (Pop() != 0)
    {
      WEEC2(); // WEEC2
    } else
    {
      WEE96(); // WEE96
      Push(1);
      Push(pp_WED89); // WED89
      _plus__ex__2(); // +!_2
    }
    j++;
  } while(j<jmax); // (LOOP)

  Push(0);
  SWAP(); // SWAP
  ReadArray(FACE); // FACE
  OVER(); // OVER
  OVER(); // OVER
  Push(Read16(pp_WED85)); // WED85 @
  ROT(); // ROT
  ROT(); // ROT
  L_ex_(); // L!
  Push(Pop() + 2); //  2+
  Push(Read16(pp_WED89)); // WED89 @
  ROT(); // ROT
  ROT(); // ROT
  LC_ex_(); // LC!
}


// ================================================
// 0xef84: WORD 'WEF86' codep=0x224c wordp=0xef86
// ================================================

void WEF86() // WEF86
{
  unsigned short int i, imax;
  Push(0);
  Push(pp_FADDR); // FADDR
  Store_2(); // !_2
  Push(0x0048);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    WEEFA(); // WEEFA
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xef9e: WORD 'MAKE-GLOBE' codep=0x224c wordp=0xefad
// ================================================
// entry

void MAKE_dash_GLOBE() // MAKE-GLOBE
{
  WECC6(); // WECC6
  WEF86(); // WEF86
}


// ================================================
// 0xefb3: WORD 'WEFB5' codep=0x224c wordp=0xefb5
// ================================================

void WEFB5() // WEFB5
{
  Push(0);
  Push(0);
  ACELLAD(); // ACELLAD
  ROT(); // ROT
  Push(0);
  SWAP(); // SWAP
  ACELLAD(); // ACELLAD
  Push(3);
  PICK(); // PICK
  OVER(); // OVER
  _dash_(); // -
  ABS(); // ABS
  _n_BYTES(); // #BYTES
  SWAP(); // SWAP
  _dash_(); // -
  _st_LCMOVE(); // <LCMOVE
}


// ================================================
// 0xefd7: WORD 'WEFD9' codep=0x224c wordp=0xefd9
// ================================================

void WEFD9() // WEFD9
{
  Push(0);
  SWAP(); // SWAP
  ACELLAD(); // ACELLAD
  Push(0);
  Push(0);
  ACELLAD(); // ACELLAD
  Push(3);
  PICK(); // PICK
  OVER(); // OVER
  _dash_(); // -
  ABS(); // ABS
  _n_BYTES(); // #BYTES
  SWAP(); // SWAP
  _dash_(); // -
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xeff9: WORD 'WEFFB' codep=0x224c wordp=0xeffb
// ================================================

void WEFFB() // WEFFB
{
  unsigned short int i, imax;
  _n_ROWZ(); // #ROWZ
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(i); // I
    ACELLAD(); // ACELLAD
    Push(3);
    PICK(); // PICK
    Push(i); // I
    ACELLAD(); // ACELLAD
    _n_COLZ(); // #COLZ
    Push(6);
    PICK(); // PICK
    _dash_(); // -
    _st_LCMOVE(); // <LCMOVE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf021: WORD 'WF023' codep=0x224c wordp=0xf023
// ================================================

void WF023() // WF023
{
  unsigned short int i, imax;
  _n_ROWZ(); // #ROWZ
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    ACELLAD(); // ACELLAD
    Push(0);
    Push(i); // I
    ACELLAD(); // ACELLAD
    _n_COLZ(); // #COLZ
    Push(6);
    PICK(); // PICK
    _dash_(); // -
    LCMOVE(); // LCMOVE
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf047: WORD 'WF049' codep=0x224c wordp=0xf049 params=0 returns=0
// ================================================

void WF049() // WF049
{
  Push(Read16(pp_DXCON)); // DXCON @
  if (Pop() == 0) return;
  Push(Read16(pp_DXCON)); // DXCON @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    ABS(); // ABS
    WEFFB(); // WEFFB
    Push(0);
    Push(0);
    Push(0x000b);
    Push(0x0064);
  } else
  {
    WF023(); // WF023
    Push(0x0031);
    Push(0);
    Push(0x003c);
    Push(0x0064);
  }
  SETREGI(); // SETREGI
  Push(Read16(cc_WE364)); // WE364
  FILLREG(); // FILLREG
}


// ================================================
// 0xf089: WORD 'WF08B' codep=0x224c wordp=0xf08b params=0 returns=0
// ================================================

void WF08B() // WF08B
{
  Push(Read16(pp_DYCON)); // DYCON @
  if (Pop() == 0) return;
  Push(Read16(pp_DYCON)); // DYCON @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    ABS(); // ABS
    WEFB5(); // WEFB5
    Push(0);
    Push(0);
    Push(0x003c);
    Push(0x0013);
  } else
  {
    WEFD9(); // WEFD9
    Push(0);
    Push(0x0051);
    Push(0x003c);
    Push(0x0064);
  }
  SETREGI(); // SETREGI
  Push(Read16(cc_WE364)); // WE364
  FILLREG(); // FILLREG
}


// ================================================
// 0xf0cb: WORD 'SCRLCON' codep=0x224c wordp=0xf0d7 params=0 returns=0
// ================================================
// entry

void SCRLCON() // SCRLCON
{
  Push(Read16(pp_DXCON) | Read16(pp_DYCON)); // DXCON @ DYCON @ OR
  if (Pop() == 0) return;
  Push(pp_SPHEREW); // SPHEREW
  _099(); // 099
  Push(0x6a82); // 'CONTOUR'
  SETLARR(); // SETLARR
  WF049(); // WF049
  WF08B(); // WF08B
  WEA21(); // WEA21
  WEA97(); // WEA97
}


// ================================================
// 0xf0f9: WORD 'NEWCONTOUR' codep=0x224c wordp=0xf108
// ================================================
// entry

void NEWCONTOUR() // NEWCONTOUR
{
  WE801(); // WE801
  WEA21(); // WEA21
  WEA97(); // WEA97
}

// 0xf110: db 0x46 0x52 0x41 0x43 0x54 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x2d 0x2d 0x2d 0x5c 0x20 0x46 0x52 0x41 0x43 0x54 0x41 0x4c 0x20 0x4f 0x56 0x52 0x2d 0x28 0x20 0x72 0x66 0x67 0x30 0x34 0x73 0x65 0x70 0x38 0x38 0x29 0x00 0x31 0x32 0x36 0x38 0x14 0x22 0x2f 0x00 0x14 0x22 0x30 0x00 0x14 0x22 0x5f 0x00 0x14 0x22 0x60 0x00 0x14 0x22 0x62 0x00 0x4c 0x22 0x00 0x6a 0x2f 0x7a 0x90 0x16 0x4c 0x22 0x68 0xf1 0xfa 0xf0 0x92 0x0c 0x5d 0x17 0x5a 0x00 0x72 0x0f 0xdf 0x79 0x90 0x16 0x4c 0x22 0xc9 0xf0 0x92 0x0c 0x5d 0x17 0x1b 0x00 0x72 0x0f 0x90 0x16 0x4c 0x22 0xce 0xf0 0x92 0x0c 0xfa 0x15 0x30 0x00 0x5d 0x17 0x14 0x00 0x46 0x75 0xfa 0x15 0x08 0x00 0x60 0xf1 0x60 0x16 0x1c 0x00 0x5d 0x17 0x1d 0x00 0x46 0x75 0xfa 0x15 0x08 0x00 0x64 0xf1 0x60 0x16 0x0c 0x00 0xd6 0xf0 0x92 0x0c 0x5d 0x17 0x23 0x00 0x72 0x0f 0x60 0x16 0x06 0x00 0x5d 0x17 0x2b 0x00 0x90 0x16 0x00 0x00 0x8d 0x53 0x54 0x41 0x52 0x2d 0x49 0x44 0x2d 0x43 0x41 0x53 0xc5 0x3b 0x4b 0x01 0x00 0x1a 0xf1 0x02 0x00 0x1e 0xf1 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0xdd 0xf1 0x90 0x16 0x00 0x00 0x8f 0x50 0x4c 0x41 0x4e 0x45 0x54 0x2d 0x49 0x44 0x2d 0x43 0xc1 0x3b 0x4b 0x01 0x00 0x22 0xf1 0x02 0x00 0x26 0xf1 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0x00 0xf2 0x90 0x16 0x4c 0x22 0x34 0x75 0x5d 0x17 0x32 0x00 0x72 0x0f 0x90 0x16 0xd0 0xf1 0x86 0x42 0x4f 0x58 0x2d 0x49 0xc4 0x3b 0x4b 0x02 0x00 0x4a 0x52 0x18 0x00 0xe9 0xf1 0x20 0x00 0x0c 0xf2 0x4c 0x22 0x3f 0x7a 0x22 0x75 0x29 0xf2 0xdf 0x79 0x90 0x16 0x4c 0x22 0x32 0x62 0xae 0x0b 0xfa 0x15 0x08 0x00 0x48 0xf1 0x60 0x16 0x04 0x00 0x30 0xf1 0x90 0x16 0x00 0x00 0x88 0x53 0x50 0x41 0x43 0x45 0x2d 0x49 0xc4 0x3b 0x4b 0x09 0x00 0x4a 0x52 0x0b 0x00 0x39 0xf2 0x14 0x00 0x84 0xf1 0x17 0x00 0x3c 0x52 0x18 0x00 0xe9 0xf1 0x19 0x00 0x92 0xf1 0x20 0x00 0x0c 0xf2 0x2d 0x00 0x58 0x52 0x2e 0x00 0x16 0xf2 0x3c 0x00 0x16 0xf1 0x4c 0x22 0x32 0x62 0xae 0x0b 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x31 0x00 0x60 0x16 0x06 0x00 0x5d 0x17 0x61 0x00 0x90 0x16 0xf3 0xf1 0x8d 0x52 0x55 0x49 0x4e 0x2d 0x49 0x44 0x2d 0x43 0x41 0x53 0xc5 0x3b 0x4b 0x04 0x00 0x45 0xf2 0x02 0x00 0x36 0xf1 0x04 0x00 0x36 0xf1 0x05 0x00 0x8e 0xf2 0x06 0x00 0x5e 0xf1 0x4c 0x22 0x68 0xf1 0xfa 0xf0 0x92 0x0c 0x7f 0x3b 0x46 0x12 0xfa 0x15 0x08 0x00 0x54 0xf1 0x60 0x16 0x04 0x00 0x58 0xf1 0xdf 0x79 0x90 0x16 0x4c 0x22 0xdb 0xf0 0x92 0x0c 0x90 0x16 0x4c 0x22 0x34 0x75 0xb4 0x0d 0x50 0x0e 0x97 0x3b 0x5f 0x12 0xfa 0x15 0x08 0x00 0x4c 0xf1 0x60 0x16 0x16 0x00 0x50 0x0e 0x5d 0x17 0x17 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0x44 0xf1 0x60 0x16 0x04 0x00 0x28 0xf1 0x90 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x34 0x75 0xb3 0xf2 0x90 0x16 0x22 0xf2 0x89 0x50 0x4c 0x41 0x4e 0x45 0x54 0x2d 0x49 0xc4 0x3b 0x4b 0x0b 0x00 0x6e 0x3a 0x29 0x00 0x1f 0xf3 0x2a 0x00 0x3e 0xf1 0x44 0x00 0xe7 0xf2 0x14 0x00 0x3a 0xf1 0x1a 0x00 0xef 0xf2 0x1c 0x00 0x2e 0xf1 0x1f 0x00 0x72 0xf1 0x21 0x00 0x52 0xf1 0x15 0x00 0xcb 0xf2 0x1b 0x00 0x42 0xf1 0x30 0x00 0x42 0xf1 0x4c 0x22 0x22 0x75 0x2a 0x5c 0xae 0x0b 0xfa 0x15 0x08 0x00 0x62 0xf2 0x60 0x16 0x04 0x00 0x31 0xf3 0x90 0x16 0x27 0xf3 0x8d 0x53 0x54 0x41 0x52 0x2d 0x49 0x43 0x2d 0x43 0x41 0x53 0xc5 0x3b 0x4b 0x06 0x00 0x28 0x50 0x4d 0x00 0xd7 0x4f 0x4b 0x00 0x3e 0x50 0x47 0x00 0x4a 0x50 0x46 0x00 0x55 0x50 0x41 0x00 0xce 0x4f 0x42 0x00 0x0e 0x50 0x4c 0x22 0x34 0x75 0x88 0xf3 0x90 0x16 0x4c 0x22 0x0f 0x86 0xfa 0x15 0x08 0x00 0xd5 0x4f 0x60 0x16 0x04 0x00 0xc1 0x4f 0x90 0x16 0x4c 0x22 0xe3 0xf0 0x92 0x0c 0xfa 0x15 0x18 0x00 0xe8 0xf0 0x92 0x0c 0x89 0x12 0xfa 0x15 0x08 0x00 0x72 0x52 0x60 0x16 0x04 0x00 0x87 0x3b 0x60 0x16 0x04 0x00 0x64 0x52 0x90 0x16 0x4c 0x22 0x0f 0x86 0xfa 0x15 0x08 0x00 0xec 0x4f 0x60 0x16 0x04 0x00 0xd5 0x4f 0x90 0x16 0x00 0x00 0x8d 0x50 0x4c 0x41 0x4e 0x2d 0x49 0x43 0x2d 0x43 0x41 0x53 0xc5 0x3b 0x4b 0x05 0x00 0xee 0x4f 0x00 0x00 0xf9 0x4f 0x01 0x00 0xe3 0x4f 0x02 0x00 0x0e 0x50 0x03 0x00 0x55 0x50 0x04 0x00 0xe6 0xf3 0x4c 0x22 0xed 0xf0 0x92 0x0c 0x05 0xf4 0x90 0x16 0x4c 0x22 0x34 0x75 0xfa 0x15 0x08 0x00 0x7f 0x3b 0x60 0x16 0x04 0x00 0x72 0x52 0x90 0x16 0x7b 0xf3 0x86 0x42 0x4f 0x58 0x2d 0x49 0xc3 0x3b 0x4b 0x02 0x00 0x74 0x52 0x18 0x00 0xa8 0xf3 0x20 0x00 0x21 0xf4 0x4c 0x22 0x3f 0x7a 0x22 0x75 0x44 0xf4 0xdf 0x79 0x90 0x16 0x4c 0x22 0x02 0xf1 0x92 0x0c 0xfa 0x15 0x16 0x00 0x8b 0x62 0xae 0x0b 0xfa 0x15 0x08 0x00 0x87 0x3b 0x60 0x16 0x04 0x00 0x72 0x52 0x60 0x16 0x04 0x00 0x64 0x52 0x90 0x16 0xf8 0xf3 0x89 0x23 0x49 0x43 0x2d 0x43 0x41 0x53 0x45 0xd3 0x3b 0x4b 0x08 0x00 0x74 0x52 0x0b 0x00 0x54 0xf4 0x17 0x00 0xa8 0xf3 0x20 0x00 0x21 0xf4 0x18 0x00 0xa8 0xf3 0x44 0x00 0xc2 0xf3 0x2d 0x00 0x2b 0xf4 0x2e 0x00 0xb0 0xf3 0x15 0x00 0x60 0xf4 0x4c 0x22 0x22 0x75 0x8c 0xf4 0x90 0x16 0x4c 0x22 0x22 0x75 0x5d 0x17 0x17 0x00 0x5f 0x12 0xfa 0x15 0x14 0x00 0x32 0x62 0xae 0x0b 0x07 0xf1 0x92 0x0c 0x2e 0x0f 0xf5 0x12 0x3e 0x13 0x60 0x16 0x20 0x00 0x22 0x75 0x5d 0x17 0x2e 0x00 0x5f 0x12 0xfa 0x15 0x12 0x00 0x32 0x62 0xae 0x0b 0x07 0x13 0xc4 0xf0 0x92 0x0c 0x3e 0x13 0x60 0x16 0x04 0x00 0x2e 0x0f 0x90 0x16 0x59 0xf2 0x89 0x49 0x43 0x4f 0x4e 0x2d 0x50 0x41 0x52 0xcd 0x4c 0x22 0xbb 0x74 0xae 0x0b 0xc9 0x74 0xae 0x0b 0x63 0xf3 0xb2 0xf4 0x8b 0x75 0x90 0x16 0x4c 0x22 0xba 0xf4 0xfa 0x15 0x06 0x00 0x06 0xf5 0x50 0x99 0x90 0x16 0xfc 0xf4 0x88 0x2b 0x49 0x43 0x4f 0x4e 0x42 0x4f 0xd8 0x4c 0x22 0x5d 0x17 0x1a 0xf5 0x8c 0x7f 0x90 0x16 0x56 0x49 0x43 0x4f 0x4e 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x46 0x49 0x58 0x20 0x5c 0x00 'FRACT___________________________ ---\ FRACTAL OVR-( rfg04sep88) 1268 "/  "0  "_  "`  "b L" j/z  L"h     ] Z r  y  L"    ]   r   L"      0 ]   Fu    ` `   ]   Fu    d `       ] # r `   ] +      STAR-ID-CAS ;K        L"*\         PLANET-ID-C ;K  "   & L"*\      L"4u] 2 r      BOX-I ;K  JR        L"?z"u)  y  L"2b      H `   0      SPACE-I ;K  JR  9       <R            - XR.   <   L"2b      ] 1 `   ] a      RUIN-ID-CAS ;K  E   6   6       ^ L"h     ;F     T `   X  y  L"      L"4u  P  ;_     L `   P ]   _     D `   (   2   L"4u    "  PLANET-I ;K  n:)   * > D     :       .   r ! R       B 0 B L""u*\      b `   1   '  STAR-IC-CAS ;K  (PM  OK >PG JPF UPA  OB  PL"4u    L"       O`    O  L"                  rR`    ;`   dR  L"       O`    O     PLAN-IC-CAS ;K   O   O   O   P  UP    L"        L"4u    ;`   rR  {  BOX-I ;K  tR      ! L"?z"uD  y  L"         b       ;`   rR`   dR     #IC-CASE ;K  tR  T       !     D   - + .     ` L""u    L""u]   _     2b      .   > `   "u] . _     2b        > `   .   Y  ICON-PAR L" t   t  c    u  L"        P      +ICONBO L"]      VICONP__________________________FIX \ '

