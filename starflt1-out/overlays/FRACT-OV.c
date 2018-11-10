// ====== OVERLAY 'FRACT-OV' ======
// store offset = 0xe340
// overlay size   = 0x1220

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//        XYANCHOR  codep:0x1d29 wordp:0xe356 size:0x0002 C-string:'XYANCHOR'
//             STD  codep:0x1d29 wordp:0xe35a size:0x0002 C-string:'STD'
//           RATIO  codep:0x1d29 wordp:0xe35e size:0x0004 C-string:'RATIO'
//           FNULL  codep:0x2214 wordp:0xe364 size:0x0002 C-string:'FNULL'
//            DY>1  codep:0x1d29 wordp:0xe368 size:0x0002 C-string:'DY_gt_1'
//            DX>1  codep:0x1d29 wordp:0xe36c size:0x0002 C-string:'DX_gt_1'
//             X0'  codep:0x1d29 wordp:0xe370 size:0x0002 C-string:'X0_i_'
//             Y0'  codep:0x1d29 wordp:0xe374 size:0x0002 C-string:'Y0_i_'
//           SCELL  codep:0x1d29 wordp:0xe378 size:0x0002 C-string:'SCELL'
//           OCELL  codep:0x1d29 wordp:0xe37c size:0x0002 C-string:'OCELL'
//  MERCATOR-RATIO  codep:0x3b68 wordp:0xe380 size:0x0004 C-string:'MERCATOR_dash_RATIO'
//  MERCATOR-SCALE  codep:0x2214 wordp:0xe386 size:0x0002 C-string:'MERCATOR_dash_SCALE'
//             RT0  codep:0x1d29 wordp:0xe38a size:0x0002 C-string:'RT0'
//             RT1  codep:0x1d29 wordp:0xe38e size:0x0002 C-string:'RT1'
//           RTEMP  codep:0x1d29 wordp:0xe392 size:0x0002 C-string:'RTEMP'
//              TY  codep:0x1d29 wordp:0xe396 size:0x0002 C-string:'TY'
//        SETSCALE  codep:0x224c wordp:0xe39a size:0x000a C-string:'SETSCALE'
//      GENANCHORS  codep:0x224c wordp:0xe3a6 size:0x0018 C-string:'GENANCHORS'
//          [RRND]  codep:0x1d29 wordp:0xe3c0 size:0x001e C-string:'_bo_RRND_bc_'
//         C+LIMIT  codep:0x1d29 wordp:0xe3e0 size:0x0018 C-string:'C_plus_LIMIT'
//    DISPLACEMENT  codep:0x1d29 wordp:0xe3fa size:0x006d C-string:'DISPLACEMENT'
//         [SWRAP]  codep:0x1d29 wordp:0xe469 size:0x004e C-string:'_bo_SWRAP_bc_'
//     [ACELLADDR]  codep:0x1d29 wordp:0xe4b9 size:0x0034 C-string:'_bo_ACELLADDR_bc_'
//            [A@]  codep:0x1d29 wordp:0xe4ef size:0x001e C-string:'_bo_A_at__bc_'
//       [!HEIGHT]  codep:0x1d29 wordp:0xe50f size:0x0026 C-string:'_bo__ex_HEIGHT_bc_'
//         !HEIGHT  codep:0xe537 wordp:0xe537 size:0x0008 C-string:'StoreHEIGHT'
//      SETANCHORS  codep:0x224c wordp:0xe541 size:0x002a C-string:'SETANCHORS'
//          XSHIFT  codep:0x1d29 wordp:0xe56d size:0x0045 C-string:'XSHIFT'
//          YSHIFT  codep:0x1d29 wordp:0xe5b4 size:0x0045 C-string:'YSHIFT'
//           EDGES  codep:0x1d29 wordp:0xe5fb size:0x0033 C-string:'EDGES'
//          CENTER  codep:0x1d29 wordp:0xe630 size:0x005f C-string:'CENTER'
//           MIDPT  codep:0x1d29 wordp:0xe691 size:0x0017 C-string:'MIDPT'
//          NEWSTD  codep:0x1d29 wordp:0xe6aa size:0x0016 C-string:'NEWSTD'
//       [FRACTAL]  codep:0x1d29 wordp:0xe6c2 size:0x009a C-string:'_bo_FRACTAL_bc_'
//      FRACTALIZE  codep:0xe75e wordp:0xe75e size:0x0010 C-string:'FRACTALIZE'
//       FILLARRAY  codep:0xe770 wordp:0xe770 size:0x001a C-string:'FILLARRAY'
//    FRACT-REGION  codep:0x224c wordp:0xe78c size:0x001c C-string:'FRACT_dash_REGION'
//    MERCATOR-GEN  codep:0x224c wordp:0xe7b9 size:0x003c C-string:'MERCATOR_dash_GEN'
//   CONTOUR-RATIO  codep:0x3b68 wordp:0xe7f7 size:0x0004 C-string:'CONTOUR_dash_RATIO'
//   CONTOUR-SCALE  codep:0x2214 wordp:0xe7fd size:0x0002 C-string:'CONTOUR_dash_SCALE'
//    INIT-CONTOUR  codep:0x224c wordp:0xe801 size:0x000c C-string:'INIT_dash_CONTOUR'
//  MERC>CONANCHOR  codep:0x224c wordp:0xe80f size:0x005e C-string:'MERC_gt_CONANCHOR'
//        AV-MIDPT  codep:0x224c wordp:0xe86f size:0x0030 C-string:'AV_dash_MIDPT'
//   CONANCHOR-HOR  codep:0x224c wordp:0xe8a1 size:0x0054 C-string:'CONANCHOR_dash_HOR'
//   CONANCHOR-VER  codep:0x224c wordp:0xe8f7 size:0x0028 C-string:'CONANCHOR_dash_VER'
//  CONANCHOR-CNT1  codep:0x224c wordp:0xe921 size:0x002c C-string:'CONANCHOR_dash_CNT1'
//  CONANCHOR-CNT2  codep:0x224c wordp:0xe94f size:0x0028 C-string:'CONANCHOR_dash_CNT2'
//    SETRELORIGIN  codep:0x224c wordp:0xe979 size:0x000a C-string:'SETRELORIGIN'
// CONANCHOR>CONTOUR  codep:0x224c wordp:0xe985 size:0x009a C-string:'CONANCHOR_gt_CONTOUR'
//  ANCHOR_CONTOUR  codep:0x224c wordp:0xea21 size:0x0014 C-string:'ANCHOR_CONTOUR'
//   SUB-CON-FRACT  codep:0x224c wordp:0xea37 size:0x005e C-string:'SUB_dash_CON_dash_FRACT'
//   FRACT_CONTOUR  codep:0x224c wordp:0xea97 size:0x0034 C-string:'FRACT_CONTOUR'
//           FRAME  codep:0x1d29 wordp:0xeacd size:0x0002 C-string:'FRAME'
//          +FRAME  codep:0xead1 wordp:0xead1 size:0x0009 C-string:'_plus_FRAME'
//          -FRAME  codep:0xeadc wordp:0xeadc size:0x000c C-string:'_dash_FRAME'
//          @FRAME  codep:0xeaea wordp:0xeaea size:0x000c C-string:'GetFRAME'
//          !FRAME  codep:0xeaf8 wordp:0xeaf8 size:0x000c C-string:'StoreFRAME'
//             @X1  codep:0x224c wordp:0xeb06 size:0x0006 C-string:'GetX1'
//             @X2  codep:0x224c wordp:0xeb0e size:0x0006 C-string:'GetX2'
//           @XMID  codep:0x224c wordp:0xeb16 size:0x0008 C-string:'GetXMID'
//             @Y1  codep:0x224c wordp:0xeb20 size:0x0006 C-string:'GetY1'
//             @Y2  codep:0x224c wordp:0xeb28 size:0x0006 C-string:'GetY2'
//           @YMID  codep:0x224c wordp:0xeb30 size:0x0006 C-string:'GetYMID'
//            @STD  codep:0x224c wordp:0xeb38 size:0x0008 C-string:'GetSTD'
//           !XMID  codep:0x224c wordp:0xeb42 size:0x0008 C-string:'StoreXMID'
//           !YMID  codep:0x224c wordp:0xeb4c size:0x0006 C-string:'StoreYMID'
//            !STD  codep:0x224c wordp:0xeb54 size:0x0008 C-string:'StoreSTD'
//          MIDPTT  codep:0x224c wordp:0xeb5e size:0x0016 C-string:'MIDPTT'
//         POLYPTR  codep:0x1d29 wordp:0xeb80 size:0x0002 C-string:'POLYPTR'
//     POLYCOUNTER  codep:0x1d29 wordp:0xeb84 size:0x0002 C-string:'POLYCOUNTER'
//             ULY  codep:0x1d29 wordp:0xeb88 size:0x0002 C-string:'ULY'
//             ULX  codep:0x1d29 wordp:0xeb8c size:0x0002 C-string:'ULX'
//         OUTPOLY  codep:0x224c wordp:0xeb90 size:0x006a C-string:'OUTPOLY'
//     ?HOMOGENOUS  codep:0x224c wordp:0xebfc size:0x0060 C-string:'IsHOMOGENOUS'
// POLYGON-EXTRACT  codep:0x224c wordp:0xec70 size:0x0054 C-string:'POLYGON_dash_EXTRACT'
// BUILD-CONTINENTS  codep:0x224c wordp:0xecc6 size:0x0068 C-string:'BUILD_dash_CONTINENTS'
//           [TMP]  codep:0x1d29 wordp:0xed30 size:0x0002 C-string:'_bo_TMP_bc_'
//            +TMP  codep:0xed34 wordp:0xed34 size:0x000e C-string:'_plus_TMP'
//            -TMP  codep:0xed44 wordp:0xed44 size:0x000a C-string:'_dash_TMP'
//            @TMP  codep:0xed50 wordp:0xed50 size:0x0010 C-string:'GetTMP'
//            !TMP  codep:0xed62 wordp:0xed62 size:0x0011 C-string:'StoreTMP'
//           FADDR  codep:0x1d29 wordp:0xed7d size:0x0002 C-string:'FADDR'
//       MAINCOLOR  codep:0x1d29 wordp:0xed81 size:0x0002 C-string:'MAINCOLOR'
//             TAD  codep:0x1d29 wordp:0xed85 size:0x0002 C-string:'TAD'
//            #POL  codep:0x1d29 wordp:0xed89 size:0x0002 C-string:'_n_POL'
//          CACCUM  codep:0x224c wordp:0xed8d size:0x004a C-string:'CACCUM'
//     MAJOR-COLOR  codep:0x224c wordp:0xedd9 size:0x008a C-string:'MAJOR_dash_COLOR'
//       PUSH-POLY  codep:0xee65 wordp:0xee65 size:0x002f C-string:'PUSH_dash_POLY'
//        POP-POLY  codep:0xee96 wordp:0xee96 size:0x002a C-string:'POP_dash_POLY'
//       DROP-POLY  codep:0xeec2 wordp:0xeec2 size:0x0008 C-string:'DROP_dash_POLY'
//           ?MCLR  codep:0xeecc wordp:0xeecc size:0x0017 C-string:'IsMCLR'
//        MAINPOLY  codep:0xeee5 wordp:0xeee5 size:0x0013 C-string:'MAINPOLY'
//     REDUCE-FACE  codep:0x224c wordp:0xeefa size:0x008a C-string:'REDUCE_dash_FACE'
//      REDUCE-ALL  codep:0x224c wordp:0xef86 size:0x0018 C-string:'REDUCE_dash_ALL'
//      MAKE-GLOBE  codep:0x224c wordp:0xefad size:0x0006 C-string:'MAKE_dash_GLOBE'
//          UPSCRL  codep:0x224c wordp:0xefb5 size:0x0022 C-string:'UPSCRL'
//          DNSCRL  codep:0x224c wordp:0xefd9 size:0x0020 C-string:'DNSCRL'
//          RTSCRL  codep:0x224c wordp:0xeffb size:0x0026 C-string:'RTSCRL'
//          LFSCRL  codep:0x224c wordp:0xf023 size:0x0024 C-string:'LFSCRL'
//        SCRLXCON  codep:0x224c wordp:0xf049 size:0x0040 C-string:'SCRLXCON'
//        SCRLYCON  codep:0x224c wordp:0xf08b size:0x0040 C-string:'SCRLYCON'
//         SCRLCON  codep:0x224c wordp:0xf0d7 size:0x0022 C-string:'SCRLCON'
//      NEWCONTOUR  codep:0x224c wordp:0xf108 size:0x0000 C-string:'NEWCONTOUR'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_SEED; // SEED
extern const unsigned short int pp_SPHEREWRAP; // SPHEREWRAP
extern const unsigned short int pp_SIGNEXTEND; // SIGNEXTEND
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp_XUR; // XUR
extern const unsigned short int pp_YUR; // YUR
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_Y2; // Y2
extern const unsigned short int pp_X2; // X2
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_DXCON; // DXCON
extern const unsigned short int pp_DYCON; // DYCON
extern const unsigned short int pp_GLOBALSEED; // GLOBALSEED
extern ArrayType MERCATOR; // MERCATOR
extern ArrayType CONANCHOR; // CONANCHOR
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
void ACELLADDR(); // ACELLADDR
void A_ex_(); // A!
void A_at_(); // A@
void SETLARRAY(); // SETLARRAY
void SETREGION(); // SETREGION
void FILLREGION(); // FILLREGION
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _2_ex_(); // 2!
void ON_3(); // ON_3
void OFF(); // OFF
void FILL_1(); // FILL_1
void XHBUF_dash_SEG(); // XHBUF-SEG
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
void COLORMAP(); // COLORMAP
void StoreHEIGHT(); // !HEIGHT
void FRACTALIZE(); // FRACTALIZE
void FILLARRAY(); // FILLARRAY
void _plus_FRAME(); // +FRAME
void _dash_FRAME(); // -FRAME
void GetFRAME(); // @FRAME
void StoreFRAME(); // !FRAME
void _plus_TMP(); // +TMP
void _dash_TMP(); // -TMP
void GetTMP(); // @TMP
void StoreTMP(); // !TMP
void PUSH_dash_POLY(); // PUSH-POLY
void POP_dash_POLY(); // POP-POLY
void DROP_dash_POLY(); // DROP-POLY
void IsMCLR(); // ?MCLR
void MAINPOLY(); // MAINPOLY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_XYANCHOR = 0xe356; // XYANCHOR size: 2
// {0x3a, 0x20}

const unsigned short int pp_STD = 0xe35a; // STD size: 2
// {0x3a, 0x20}

const unsigned short int pp_RATIO = 0xe35e; // RATIO size: 4
// {0x56, 0x3a, 0x20, 0x6e}

const unsigned short int pp_DY_gt_1 = 0xe368; // DY>1 size: 2
// {0x3a, 0x20}

const unsigned short int pp_DX_gt_1 = 0xe36c; // DX>1 size: 2
// {0x3a, 0x20}

const unsigned short int pp_X0_i_ = 0xe370; // X0' size: 2
// {0x3a, 0x20}

const unsigned short int pp_Y0_i_ = 0xe374; // Y0' size: 2
// {0x3a, 0x20}

const unsigned short int pp_SCELL = 0xe378; // SCELL size: 2
// {0x3a, 0x20}

const unsigned short int pp_OCELL = 0xe37c; // OCELL size: 2
// {0x3a, 0x20}

const unsigned short int pp_RT0 = 0xe38a; // RT0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_RT1 = 0xe38e; // RT1 size: 2
// {0x3a, 0x20}

const unsigned short int pp_RTEMP = 0xe392; // RTEMP size: 2
// {0x3a, 0x20}

const unsigned short int pp_TY = 0xe396; // TY size: 2
// {0x3a, 0x20}

const unsigned short int pp__bo_RRND_bc_ = 0xe3c0; // [RRND] size: 30
// {0x8b, 0x06, 0xb0, 0x4a, 0xb9, 0xbd, 0x7a, 0xf7, 0xe9, 0x05, 0x0f, 0x1b, 0x89, 0x06, 0xb0, 0x4a, 0x5a, 0x5b, 0x59, 0x52, 0x2b, 0xd9, 0xf7, 0xe3, 0x03, 0xd1, 0x58, 0x52, 0x50, 0xc3}

const unsigned short int pp_C_plus_LIMIT = 0xe3e0; // C+LIMIT size: 24
// {0x5b, 0x58, 0x59, 0x03, 0xc1, 0x3d, 0x7f, 0x00, 0x7e, 0x03, 0xb8, 0x7f, 0x00, 0x3d, 0x81, 0xff, 0x79, 0x03, 0xb8, 0x81, 0xff, 0x50, 0x53, 0xc3}

const unsigned short int pp_DISPLACEMENT = 0xe3fa; // DISPLACEMENT size: 109
// {0x5b, 0x58, 0x59, 0x53, 0x8b, 0x16, 0x56, 0xe3, 0x0b, 0xd2, 0x7e, 0x50, 0x03, 0x0e, 0x70, 0xe3, 0x03, 0x06, 0x74, 0xe3, 0x79, 0x09, 0x40, 0xf7, 0xd8, 0x81, 0xc1, 0x80, 0x04, 0xeb, 0x12, 0xba, 0xc0, 0x03, 0x3b, 0xc2, 0x78, 0x0b, 0x2b, 0xc2, 0xf7, 0xd8, 0x03, 0xc2, 0x40, 0x81, 0xc1, 0x80, 0x04, 0x89, 0x06, 0xb0, 0x4a, 0x51, 0xb8, 0x01, 0x00, 0x50, 0xf7, 0xd8, 0x50, 0xe8, 0x86, 0xff, 0x59, 0x8f, 0x06, 0xb0, 0x4a, 0x51, 0xb8, 0x01, 0x00, 0x50, 0xf7, 0xd8, 0x50, 0xe8, 0x76, 0xff, 0x58, 0x59, 0x33, 0x06, 0x79, 0x59, 0x33, 0xc1, 0x89, 0x06, 0xb0, 0x4a, 0x8b, 0x46, 0x0e, 0x8b, 0xc8, 0xf7, 0xd9, 0x51, 0x50, 0xe8, 0x5e, 0xff, 0x58, 0x59, 0x50, 0x51, 0xc3}

const unsigned short int pp__bo_SWRAP_bc_ = 0xe469; // [SWRAP] size: 78
// {0x5a, 0x58, 0x59, 0x0b, 0xc0, 0x79, 0x0f, 0x40, 0xf7, 0xd8, 0x8b, 0x1e, 0xf1, 0x4c, 0x8b, 0x1f, 0xd1, 0xeb, 0x03, 0xcb, 0xeb, 0x1c, 0x8b, 0x1e, 0xf1, 0x4c, 0x8b, 0x5f, 0x02, 0x3b, 0xc3, 0x78, 0x11, 0x2b, 0xc3, 0xf7, 0xd8, 0x03, 0xc3, 0x40, 0x8b, 0x1e, 0xf1, 0x4c, 0x8b, 0x1f, 0xd1, 0xeb, 0x03, 0xcb, 0x0b, 0xc9, 0x79, 0x08, 0x8b, 0x1e, 0xf1, 0x4c, 0x03, 0x0f, 0xeb, 0x0c, 0x8b, 0x1e, 0xf1, 0x4c, 0x8b, 0x1f, 0x3b, 0xcb, 0x78, 0x02, 0x2b, 0xcb, 0x51, 0x50, 0x52, 0xc3}

const unsigned short int pp__bo_ACELLADDR_bc_ = 0xe4b9; // [ACELLADDR] size: 52
// {0x8f, 0x06, 0x8a, 0xe3, 0x8b, 0x06, 0xca, 0x4c, 0x0b, 0xc0, 0x7e, 0x03, 0xe8, 0xa1, 0xff, 0x8b, 0x1e, 0xf1, 0x4c, 0x8b, 0x47, 0x06, 0x8b, 0x5f, 0x04, 0x59, 0xd1, 0xe1, 0x03, 0xd9, 0x1e, 0x8e, 0xd8, 0x8b, 0x0f, 0x1f, 0x5a, 0x03, 0xca, 0x89, 0x06, 0x78, 0xe3, 0x89, 0x0e, 0x7c, 0xe3, 0xff, 0x36, 0x8a, 0xe3, 0xc3}

const unsigned short int pp__bo_A_at__bc_ = 0xe4ef; // [A@] size: 30
// {0x5a, 0x8b, 0x1e, 0x7c, 0xe3, 0x1e, 0xff, 0x36, 0x78, 0xe3, 0x1f, 0x8a, 0x07, 0x1f, 0x8b, 0x0e, 0xd8, 0x4c, 0x0b, 0xc9, 0x7e, 0x03, 0x98, 0xeb, 0x02, 0x32, 0xe4, 0x50, 0x52, 0xc3}

const unsigned short int pp__bo__ex_HEIGHT_bc_ = 0xe50f; // [!HEIGHT] size: 38
// {0x8f, 0x06, 0x8e, 0xe3, 0xe8, 0xa3, 0xff, 0xe8, 0xd6, 0xff, 0x58, 0x3d, 0x80, 0xff, 0x75, 0x10, 0x58, 0x1e, 0xff, 0x36, 0x78, 0xe3, 0x8b, 0x1e, 0x7c, 0xe3, 0x1f, 0x88, 0x07, 0x1f, 0xeb, 0x01, 0x58, 0xff, 0x36, 0x8e, 0xe3, 0xc3}

const unsigned short int pp_XSHIFT = 0xe56d; // XSHIFT size: 69
// {0x59, 0x8f, 0x06, 0x96, 0xe3, 0x51, 0xff, 0x76, 0x08, 0xff, 0x36, 0x96, 0xe3, 0xe8, 0x3c, 0xff, 0xe8, 0x6f, 0xff, 0xff, 0x76, 0x04, 0xff, 0x36, 0x96, 0xe3, 0xe8, 0x2f, 0xff, 0xe8, 0x62, 0xff, 0x58, 0x59, 0x03, 0xc1, 0xd1, 0xf8, 0x50, 0x8b, 0x5e, 0x08, 0x03, 0x5e, 0x04, 0xd1, 0xfb, 0x53, 0xff, 0x36, 0x96, 0xe3, 0xe8, 0x56, 0xfe, 0xe8, 0x39, 0xfe, 0xff, 0x76, 0x0c, 0xff, 0x36, 0x96, 0xe3, 0xe8, 0x5e, 0xff, 0xc3}

const unsigned short int pp_YSHIFT = 0xe5b4; // YSHIFT size: 69
// {0x59, 0x8f, 0x06, 0x96, 0xe3, 0x51, 0xff, 0x36, 0x96, 0xe3, 0xff, 0x76, 0x06, 0xe8, 0xf5, 0xfe, 0xe8, 0x28, 0xff, 0xff, 0x36, 0x96, 0xe3, 0xff, 0x76, 0x02, 0xe8, 0xe8, 0xfe, 0xe8, 0x1b, 0xff, 0x58, 0x59, 0x03, 0xc1, 0xd1, 0xf8, 0x50, 0xff, 0x36, 0x96, 0xe3, 0x8b, 0x5e, 0x06, 0x03, 0x5e, 0x02, 0xd1, 0xfb, 0x53, 0xe8, 0x0f, 0xfe, 0xe8, 0xf2, 0xfd, 0xff, 0x36, 0x96, 0xe3, 0xff, 0x76, 0x0a, 0xe8, 0x17, 0xff, 0xc3}

const unsigned short int pp_EDGES = 0xe5fb; // EDGES size: 51
// {0x8b, 0x06, 0x68, 0xe3, 0x0b, 0xc0, 0x7e, 0x11, 0x8b, 0x46, 0x08, 0x0b, 0xc0, 0x75, 0x04, 0x50, 0xe8, 0xa6, 0xff, 0xff, 0x76, 0x04, 0xe8, 0xa0, 0xff, 0x8b, 0x06, 0x6c, 0xe3, 0x0b, 0xc0, 0x7e, 0x11, 0x8b, 0x46, 0x06, 0x0b, 0xc0, 0x75, 0x04, 0x50, 0xe8, 0x46, 0xff, 0xff, 0x76, 0x02, 0xe8, 0x40, 0xff, 0xc3}

const unsigned short int pp_CENTER = 0xe630; // CENTER size: 95
// {0x8b, 0x06, 0x68, 0xe3, 0x23, 0x06, 0x6c, 0xe3, 0x7e, 0x54, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x06, 0xe8, 0x76, 0xfe, 0xe8, 0xa9, 0xfe, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x02, 0xe8, 0x6a, 0xfe, 0xe8, 0x9d, 0xfe, 0xff, 0x76, 0x08, 0xff, 0x76, 0x0a, 0xe8, 0x5e, 0xfe, 0xe8, 0x91, 0xfe, 0xff, 0x76, 0x04, 0xff, 0x76, 0x0a, 0xe8, 0x52, 0xfe, 0xe8, 0x85, 0xfe, 0x58, 0x59, 0x03, 0xc1, 0x59, 0x03, 0xc1, 0x59, 0x03, 0xc1, 0xd1, 0xf8, 0xd1, 0xf8, 0x50, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x0a, 0xe8, 0x78, 0xfd, 0xe8, 0x5b, 0xfd, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x0a, 0xe8, 0x81, 0xfe, 0xc3}

const unsigned short int pp_MIDPT = 0xe691; // MIDPT size: 23
// {0x8b, 0x46, 0x08, 0x03, 0x46, 0x04, 0xd1, 0xf8, 0x89, 0x46, 0x0c, 0x8b, 0x46, 0x06, 0x03, 0x46, 0x02, 0xd1, 0xf8, 0x89, 0x46, 0x0a, 0xc3}

const unsigned short int pp_NEWSTD = 0xe6aa; // NEWSTD size: 22
// {0x8b, 0x46, 0x0e, 0xf7, 0x26, 0x60, 0xe3, 0xf7, 0x36, 0x5e, 0xe3, 0x0b, 0xc0, 0x7f, 0x03, 0xb8, 0x01, 0x00, 0x89, 0x46, 0x0e, 0xc3}

const unsigned short int pp__bo_FRACTAL_bc_ = 0xe6c2; // [FRACTAL] size: 154
// {0x8b, 0xec, 0x8b, 0x46, 0x04, 0x2b, 0x46, 0x08, 0x48, 0x7e, 0x05, 0xb8, 0x01, 0x00, 0xeb, 0x02, 0x33, 0xc0, 0x89, 0x06, 0x6c, 0xe3, 0x8b, 0x4e, 0x02, 0x2b, 0x4e, 0x06, 0x49, 0x7e, 0x05, 0xb9, 0x01, 0x00, 0xeb, 0x02, 0x33, 0xc9, 0x89, 0x0e, 0x68, 0xe3, 0x0b, 0xc1, 0x7e, 0x64, 0xe8, 0x9e, 0xff, 0xe8, 0x05, 0xff, 0xe8, 0x37, 0xff, 0xe8, 0xae, 0xff, 0x33, 0xc0, 0xff, 0x76, 0x0e, 0x50, 0x50, 0xff, 0x76, 0x08, 0xff, 0x76, 0x06, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x0a, 0xe8, 0xb0, 0xff, 0x33, 0xc0, 0xff, 0x76, 0x0e, 0x50, 0x50, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x06, 0xff, 0x76, 0x04, 0xff, 0x76, 0x0a, 0xe8, 0x9a, 0xff, 0x33, 0xc0, 0xff, 0x76, 0x0e, 0x50, 0x50, 0xff, 0x76, 0x08, 0xff, 0x76, 0x0a, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x02, 0xe8, 0x84, 0xff, 0x33, 0xc0, 0xff, 0x76, 0x0e, 0x50, 0x50, 0xff, 0x76, 0x0c, 0xff, 0x76, 0x0a, 0xff, 0x76, 0x04, 0xff, 0x76, 0x02, 0xe8, 0x6e, 0xff, 0x58, 0x83, 0xc4, 0x0e, 0x8b, 0xec, 0x50, 0xc3}

const unsigned short int pp_FRAME = 0xeacd; // FRAME size: 2
// {0x3a, 0x20}

const unsigned short int pp_POLYPTR = 0xeb80; // POLYPTR size: 2
// {0x20, 0x4f}

const unsigned short int pp_POLYCOUNTER = 0xeb84; // POLYCOUNTER size: 2
// {0x3a, 0x20}

const unsigned short int pp_ULY = 0xeb88; // ULY size: 2
// {0x3a, 0x20}

const unsigned short int pp_ULX = 0xeb8c; // ULX size: 2
// {0x3a, 0x20}

const unsigned short int pp__bo_TMP_bc_ = 0xed30; // [TMP] size: 2
// {0x3a, 0x20}

const unsigned short int pp_FADDR = 0xed7d; // FADDR size: 2
// {0x20, 0x2d}

const unsigned short int pp_MAINCOLOR = 0xed81; // MAINCOLOR size: 2
// {0x3a, 0x20}

const unsigned short int pp_TAD = 0xed85; // TAD size: 2
// {0x3a, 0x20}

const unsigned short int pp__n_POL = 0xed89; // #POL size: 2
// {0x3a, 0x20}


const unsigned short int cc_FNULL = 0xe364; // FNULL
const unsigned short int cc_MERCATOR_dash_SCALE = 0xe386; // MERCATOR-SCALE
const unsigned short int cc_CONTOUR_dash_SCALE = 0xe7fd; // CONTOUR-SCALE


// 0xe352: db 0xde 0x00 '  '

// ================================================
// 0xe354: WORD 'XYANCHOR' codep=0x1d29 wordp=0xe356
// ================================================
// 0xe356: db 0x3a 0x20 ': '

// ================================================
// 0xe358: WORD 'STD' codep=0x1d29 wordp=0xe35a
// ================================================
// 0xe35a: db 0x3a 0x20 ': '

// ================================================
// 0xe35c: WORD 'RATIO' codep=0x1d29 wordp=0xe35e
// ================================================
// 0xe35e: db 0x56 0x3a 0x20 0x6e 'V: n'

// ================================================
// 0xe362: WORD 'FNULL' codep=0x2214 wordp=0xe364
// ================================================
// 0xe364: dw 0xff80

// ================================================
// 0xe366: WORD 'DY>1' codep=0x1d29 wordp=0xe368
// ================================================
// orphan
// 0xe368: db 0x3a 0x20 ': '

// ================================================
// 0xe36a: WORD 'DX>1' codep=0x1d29 wordp=0xe36c
// ================================================
// orphan
// 0xe36c: db 0x3a 0x20 ': '

// ================================================
// 0xe36e: WORD 'X0'' codep=0x1d29 wordp=0xe370
// ================================================
// 0xe370: db 0x3a 0x20 ': '

// ================================================
// 0xe372: WORD 'Y0'' codep=0x1d29 wordp=0xe374
// ================================================
// 0xe374: db 0x3a 0x20 ': '

// ================================================
// 0xe376: WORD 'SCELL' codep=0x1d29 wordp=0xe378
// ================================================
// orphan
// 0xe378: db 0x3a 0x20 ': '

// ================================================
// 0xe37a: WORD 'OCELL' codep=0x1d29 wordp=0xe37c
// ================================================
// orphan
// 0xe37c: db 0x3a 0x20 ': '

// ================================================
// 0xe37e: WORD 'MERCATOR-RATIO' codep=0x3b68 wordp=0xe380
// ================================================
// 0xe380: dw 0x7fff 0x5192

// ================================================
// 0xe384: WORD 'MERCATOR-SCALE' codep=0x2214 wordp=0xe386
// ================================================
// 0xe386: dw 0x0075

// ================================================
// 0xe388: WORD 'RT0' codep=0x1d29 wordp=0xe38a
// ================================================
// orphan
// 0xe38a: db 0x3a 0x20 ': '

// ================================================
// 0xe38c: WORD 'RT1' codep=0x1d29 wordp=0xe38e
// ================================================
// orphan
// 0xe38e: db 0x3a 0x20 ': '

// ================================================
// 0xe390: WORD 'RTEMP' codep=0x1d29 wordp=0xe392
// ================================================
// orphan
// 0xe392: db 0x3a 0x20 ': '

// ================================================
// 0xe394: WORD 'TY' codep=0x1d29 wordp=0xe396
// ================================================
// orphan
// 0xe396: db 0x3a 0x20 ': '

// ================================================
// 0xe398: WORD 'SETSCALE' codep=0x224c wordp=0xe39a params=3 returns=0
// ================================================

void SETSCALE() // SETSCALE
{
  Push(pp_STD); // STD
  Store_3(); // !_3
  Push(pp_RATIO); // RATIO
  _2_ex_(); // 2!
}


// ================================================
// 0xe3a4: WORD 'GENANCHORS' codep=0x224c wordp=0xe3a6 params=0 returns=1
// ================================================

void GENANCHORS() // GENANCHORS
{
  unsigned short int i, imax;
  Push(4);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_STD)); // STD @
    Push(Read16(regsp)); // DUP
    Push(-Pop()); //  NEGATE
    SWAP(); // SWAP
    RRND(); // RRND
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe3be: WORD '[RRND]' codep=0x1d29 wordp=0xe3c0 params=0 returns=1
// ================================================
// orphan
// 0xe3c0: mov    ax,[4AB0] // SEED
// 0xe3c4: mov    cx,7ABD
// 0xe3c7: imul   cx
// 0xe3c9: add    ax,1B0F
// 0xe3cc: mov    [4AB0],ax // SEED
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
// 0xe3de: WORD 'C+LIMIT' codep=0x1d29 wordp=0xe3e0 params=0 returns=1
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
// 0xe3f8: WORD 'DISPLACEMENT' codep=0x1d29 wordp=0xe3fa params=0 returns=1
// ================================================
// 0xe3fa: pop    bx
// 0xe3fb: pop    ax
// 0xe3fc: pop    cx
// 0xe3fd: push   bx
// 0xe3fe: mov    dx,[E356] // XYANCHOR
// 0xe402: or     dx,dx
// 0xe404: jle    E456
// 0xe406: add    cx,[E370] // X0'
// 0xe40a: add    ax,[E374] // Y0'
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
// 0xe42b: mov    [4AB0],ax // SEED
// 0xe42f: push   cx
// 0xe430: mov    ax,0001
// 0xe433: push   ax
// 0xe434: neg    ax
// 0xe436: push   ax
// 0xe437: call   E3C0
// 0xe43a: pop    cx
// 0xe43b: pop    word ptr [4AB0] // SEED
// 0xe43f: push   cx
// 0xe440: mov    ax,0001
// 0xe443: push   ax
// 0xe444: neg    ax
// 0xe446: push   ax
// 0xe447: call   E3C0
// 0xe44a: pop    ax
// 0xe44b: pop    cx
// 0xe44c: xor    ax,[5979] // GLOBALSEED
// 0xe450: xor    ax,cx
// 0xe452: mov    [4AB0],ax // SEED
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
// 0xe467: WORD '[SWRAP]' codep=0x1d29 wordp=0xe469 params=0 returns=1
// ================================================
// 0xe469: pop    dx
// 0xe46a: pop    ax
// 0xe46b: pop    cx
// 0xe46c: or     ax,ax
// 0xe46e: jns    E47F
// 0xe470: inc    ax
// 0xe471: neg    ax
// 0xe473: mov    bx,[4CF1] // 'ARRAY
// 0xe477: mov    bx,[bx]
// 0xe479: shr    bx,1
// 0xe47b: add    cx,bx
// 0xe47d: jmp    E49B
// 0xe47f: mov    bx,[4CF1] // 'ARRAY
// 0xe483: mov    bx,[bx+02]
// 0xe486: cmp    ax,bx
// 0xe488: js     E49B
// 0xe48a: sub    ax,bx
// 0xe48c: neg    ax
// 0xe48e: add    ax,bx
// 0xe490: inc    ax
// 0xe491: mov    bx,[4CF1] // 'ARRAY
// 0xe495: mov    bx,[bx]
// 0xe497: shr    bx,1
// 0xe499: add    cx,bx
// 0xe49b: or     cx,cx
// 0xe49d: jns    E4A7
// 0xe49f: mov    bx,[4CF1] // 'ARRAY
// 0xe4a3: add    cx,[bx]
// 0xe4a5: jmp    E4B3
// 0xe4a7: mov    bx,[4CF1] // 'ARRAY
// 0xe4ab: mov    bx,[bx]
// 0xe4ad: cmp    cx,bx
// 0xe4af: js     E4B3
// 0xe4b1: sub    cx,bx
// 0xe4b3: push   cx
// 0xe4b4: push   ax
// 0xe4b5: push   dx
// 0xe4b6: ret    


// ================================================
// 0xe4b7: WORD '[ACELLADDR]' codep=0x1d29 wordp=0xe4b9 params=0 returns=1
// ================================================
// 0xe4b9: pop    word ptr [E38A] // RT0
// 0xe4bd: mov    ax,[4CCA] // SPHEREWRAP
// 0xe4c1: or     ax,ax
// 0xe4c3: jle    E4C8
// 0xe4c5: call   E469
// 0xe4c8: mov    bx,[4CF1] // 'ARRAY
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
// 0xe4e0: mov    [E378],ax // SCELL
// 0xe4e4: mov    [E37C],cx // OCELL
// 0xe4e8: push   word ptr [E38A] // RT0
// 0xe4ec: ret    


// ================================================
// 0xe4ed: WORD '[A@]' codep=0x1d29 wordp=0xe4ef params=0 returns=1
// ================================================
// 0xe4ef: pop    dx
// 0xe4f0: mov    bx,[E37C] // OCELL
// 0xe4f4: push   ds
// 0xe4f5: push   word ptr [E378] // SCELL
// 0xe4f9: pop    ds
// 0xe4fa: mov    al,[bx]
// 0xe4fc: pop    ds
// 0xe4fd: mov    cx,[4CD8] // SIGNEXTEND
// 0xe501: or     cx,cx
// 0xe503: jle    E508
// 0xe505: cbw    
// 0xe506: jmp    E50A
// 0xe508: xor    ah,ah
// 0xe50a: push   ax
// 0xe50b: push   dx
// 0xe50c: ret    


// ================================================
// 0xe50d: WORD '[!HEIGHT]' codep=0x1d29 wordp=0xe50f params=0 returns=1
// ================================================
// 0xe50f: pop    word ptr [E38E] // RT1
// 0xe513: call   E4B9
// 0xe516: call   E4EF
// 0xe519: pop    ax
// 0xe51a: cmp    ax,FF80
// 0xe51d: jnz    E52F
// 0xe51f: pop    ax
// 0xe520: push   ds
// 0xe521: push   word ptr [E378] // SCELL
// 0xe525: mov    bx,[E37C] // OCELL
// 0xe529: pop    ds
// 0xe52a: mov    [bx],al
// 0xe52c: pop    ds
// 0xe52d: jmp    E530
// 0xe52f: pop    ax
// 0xe530: push   word ptr [E38E] // RT1
// 0xe534: ret    


// ================================================
// 0xe535: WORD '!HEIGHT' codep=0xe537 wordp=0xe537
// ================================================
// 0xe537: call   E50F
// 0xe53a: lodsw
// 0xe53b: mov    bx,ax
// 0xe53d: jmp    word ptr [bx]

// ================================================
// 0xe53f: WORD 'SETANCHORS' codep=0x224c wordp=0xe541
// ================================================

void SETANCHORS() // SETANCHORS
{
  Push(Read16(pp_XUR)); // XUR @
  Push(Read16(pp_YLL)); // YLL @
  StoreHEIGHT(); // !HEIGHT
  Push(Read16(pp_XUR)); // XUR @
  Push(Read16(pp_YUR)); // YUR @
  StoreHEIGHT(); // !HEIGHT
  Push(Read16(pp_XLL)); // XLL @
  Push(Read16(pp_YUR)); // YUR @
  StoreHEIGHT(); // !HEIGHT
  Push(Read16(pp_XLL)); // XLL @
  Push(Read16(pp_YLL)); // YLL @
  StoreHEIGHT(); // !HEIGHT
}


// ================================================
// 0xe56b: WORD 'XSHIFT' codep=0x1d29 wordp=0xe56d params=0 returns=1
// ================================================
// orphan
// 0xe56d: pop    cx
// 0xe56e: pop    word ptr [E396] // TY
// 0xe572: push   cx
// 0xe573: push   word ptr [bp+08]
// 0xe576: push   word ptr [E396] // TY
// 0xe57a: call   E4B9
// 0xe57d: call   E4EF
// 0xe580: push   word ptr [bp+04]
// 0xe583: push   word ptr [E396] // TY
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
// 0xe59d: push   word ptr [E396] // TY
// 0xe5a1: call   E3FA
// 0xe5a4: call   E3E0
// 0xe5a7: push   word ptr [bp+0C]
// 0xe5aa: push   word ptr [E396] // TY
// 0xe5ae: call   E50F
// 0xe5b1: ret    


// ================================================
// 0xe5b2: WORD 'YSHIFT' codep=0x1d29 wordp=0xe5b4 params=0 returns=1
// ================================================
// 0xe5b4: pop    cx
// 0xe5b5: pop    word ptr [E396] // TY
// 0xe5b9: push   cx
// 0xe5ba: push   word ptr [E396] // TY
// 0xe5be: push   word ptr [bp+06]
// 0xe5c1: call   E4B9
// 0xe5c4: call   E4EF
// 0xe5c7: push   word ptr [E396] // TY
// 0xe5cb: push   word ptr [bp+02]
// 0xe5ce: call   E4B9
// 0xe5d1: call   E4EF
// 0xe5d4: pop    ax
// 0xe5d5: pop    cx
// 0xe5d6: add    ax,cx
// 0xe5d8: sar    ax,1
// 0xe5da: push   ax
// 0xe5db: push   word ptr [E396] // TY
// 0xe5df: mov    bx,[bp+06]
// 0xe5e2: add    bx,[bp+02]
// 0xe5e5: sar    bx,1
// 0xe5e7: push   bx
// 0xe5e8: call   E3FA
// 0xe5eb: call   E3E0
// 0xe5ee: push   word ptr [E396] // TY
// 0xe5f2: push   word ptr [bp+0A]
// 0xe5f5: call   E50F
// 0xe5f8: ret    


// ================================================
// 0xe5f9: WORD 'EDGES' codep=0x1d29 wordp=0xe5fb params=0 returns=1
// ================================================
// 0xe5fb: mov    ax,[E368] // DY>1
// 0xe5ff: or     ax,ax
// 0xe601: jle    E614
// 0xe603: mov    ax,[bp+08]
// 0xe606: or     ax,ax
// 0xe608: jnz    E60E
// 0xe60a: push   ax
// 0xe60b: call   E5B4
// 0xe60e: push   word ptr [bp+04]
// 0xe611: call   E5B4
// 0xe614: mov    ax,[E36C] // DX>1
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
// 0xe62e: WORD 'CENTER' codep=0x1d29 wordp=0xe630 params=0 returns=1
// ================================================
// 0xe630: mov    ax,[E368] // DY>1
// 0xe634: and    ax,[E36C] // DX>1
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
// 0xe68f: WORD 'MIDPT' codep=0x1d29 wordp=0xe691 params=0 returns=1
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
// 0xe6a8: WORD 'NEWSTD' codep=0x1d29 wordp=0xe6aa params=0 returns=1
// ================================================
// 0xe6aa: mov    ax,[bp+0E]
// 0xe6ad: mul    word ptr [E360] // RATIO
// 0xe6b1: div    word ptr [E35E] // RATIO
// 0xe6b5: or     ax,ax
// 0xe6b7: jg     E6BC
// 0xe6b9: mov    ax,0001
// 0xe6bc: mov    [bp+0E],ax
// 0xe6bf: ret    


// ================================================
// 0xe6c0: WORD '[FRACTAL]' codep=0x1d29 wordp=0xe6c2 params=0 returns=1
// ================================================
// 0xe6c2: mov    bp,sp
// 0xe6c4: mov    ax,[bp+04]
// 0xe6c7: sub    ax,[bp+08]
// 0xe6ca: dec    ax
// 0xe6cb: jle    E6D2
// 0xe6cd: mov    ax,0001
// 0xe6d0: jmp    E6D4
// 0xe6d2: xor    ax,ax
// 0xe6d4: mov    [E36C],ax // DX>1
// 0xe6d8: mov    cx,[bp+02]
// 0xe6db: sub    cx,[bp+06]
// 0xe6de: dec    cx
// 0xe6df: jle    E6E6
// 0xe6e1: mov    cx,0001
// 0xe6e4: jmp    E6E8
// 0xe6e6: xor    cx,cx
// 0xe6e8: mov    [E368],cx // DY>1
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
// 0xe75c: WORD 'FRACTALIZE' codep=0xe75e wordp=0xe75e
// ================================================
// 0xe75e: mov    [E392],bp // RTEMP
// 0xe762: call   E6C2
// 0xe765: mov    bp,[E392] // RTEMP
// 0xe769: lodsw
// 0xe76a: mov    bx,ax
// 0xe76c: jmp    word ptr [bx]

// ================================================
// 0xe76e: WORD 'FILLARRAY' codep=0xe770 wordp=0xe770
// ================================================
// 0xe770: pop    ax
// 0xe771: mov    bx,[4CF1] // 'ARRAY
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
// 0xe78a: WORD 'FRACT-REGION' codep=0x224c wordp=0xe78c
// ================================================

void FRACT_dash_REGION() // FRACT-REGION
{
  Push(Read16(pp_STD)); // STD @
  Push(0);
  Push(0);
  Push(Read16(pp_XLL)); // XLL @
  Push(Read16(pp_YLL)); // YLL @
  Push(Read16(pp_XUR)); // XUR @
  Push(Read16(pp_YUR)); // YUR @
  FRACTALIZE(); // FRACTALIZE
}


// ================================================
// 0xe7a8: WORD 'MERCATOR-GEN' codep=0x224c wordp=0xe7b9
// ================================================
// entry

void MERCATOR_dash_GEN() // MERCATOR-GEN
{
  Push(Read16(regsp)); // DUP
  Push(pp_SEED); // SEED
  Store_3(); // !_3
  Push(pp_GLOBALSEED); // GLOBALSEED
  Store_3(); // !_3
  Push(pp_XYANCHOR); // XYANCHOR
  OFF(); // OFF
  Push2Words("MERCATOR-RATIO");
  Push(Read16(cc_MERCATOR_dash_SCALE)); // MERCATOR-SCALE
  SETSCALE(); // SETSCALE
  Push(pp_SPHEREWRAP); // SPHEREWRAP
  ON_3(); // ON_3
  Push(pp_SIGNEXTEND); // SIGNEXTEND
  ON_3(); // ON_3
  Push(0x6a99); // 'MERCATOR'
  SETLARRAY(); // SETLARRAY
  Push(0);
  Push(0);
  Push(0x0030);
  Push(0x0017);
  SETREGION(); // SETREGION
  Push(Read16(cc_FNULL)); // FNULL
  FILLARRAY(); // FILLARRAY
  GENANCHORS(); // GENANCHORS
  SETANCHORS(); // SETANCHORS
  FRACT_dash_REGION(); // FRACT-REGION
}


// ================================================
// 0xe7f5: WORD 'CONTOUR-RATIO' codep=0x3b68 wordp=0xe7f7
// ================================================
// 0xe7f7: dw 0x7fff 0x5192

// ================================================
// 0xe7fb: WORD 'CONTOUR-SCALE' codep=0x2214 wordp=0xe7fd
// ================================================
// 0xe7fd: dw 0x0014

// ================================================
// 0xe7ff: WORD 'INIT-CONTOUR' codep=0x224c wordp=0xe801
// ================================================

void INIT_dash_CONTOUR() // INIT-CONTOUR
{
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(Read16(cc_FNULL)); // FNULL
  FILLARRAY(); // FILLARRAY
}


// ================================================
// 0xe80d: WORD 'MERC>CONANCHOR' codep=0x224c wordp=0xe80f
// ================================================

void MERC_gt_CONANCHOR() // MERC>CONANCHOR
{
  unsigned short int i, imax, j, jmax;
  Push(Read16(pp_YCON)); // YCON @
  Push(0x0028);
  _slash_(); // /
  Push(pp_Y2); // Y2
  Store_3(); // !_3
  Push(Read16(pp_XCON)); // XCON @
  Push(0x0030);
  _slash_(); // /
  Push(pp_X2); // X2
  Store_3(); // !_3
  Push(pp_SPHEREWRAP); // SPHEREWRAP
  ON_3(); // ON_3
  Push(0x6a99); // 'MERCATOR'
  SETLARRAY(); // SETLARRAY
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
      ACELLADDR(); // ACELLADDR
      A_at_(); // A@
      Push(j * 4); // I 4 *
      Push(i * 2); // J 2*
      ReadArray(CONANCHOR); // CONANCHOR
      LC_ex_(); // LC!
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe86d: WORD 'AV-MIDPT' codep=0x224c wordp=0xe86f
// ================================================

void AV_dash_MIDPT() // AV-MIDPT
{
  unsigned short int a, b, c;
  _2OVER(); // 2OVER
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  a = Pop(); // >R
  _2DUP(); // 2DUP
  ACELLADDR(); // ACELLADDR
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
  ACELLADDR(); // ACELLADDR
  A_ex_(); // A!
}


// ================================================
// 0xe89f: WORD 'CONANCHOR-HOR' codep=0x224c wordp=0xe8a1
// ================================================

void CONANCHOR_dash_HOR() // CONANCHOR-HOR
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
      AV_dash_MIDPT(); // AV-MIDPT
      Push(j * 4); // I 4 *
      Push(i * 2); // J 2*
      OVER(); // OVER
      Push(Pop() + 2); //  2 +
      OVER(); // OVER
      AV_dash_MIDPT(); // AV-MIDPT
      Push((j + 1) * 4); // I 1+ 4 *
      Push(i * 2); // J 2*
      OVER(); // OVER
      Push(Pop() - 2); //  2 -
      OVER(); // OVER
      AV_dash_MIDPT(); // AV-MIDPT
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe8f5: WORD 'CONANCHOR-VER' codep=0x224c wordp=0xe8f7
// ================================================

void CONANCHOR_dash_VER() // CONANCHOR-VER
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
      AV_dash_MIDPT(); // AV-MIDPT
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe91f: WORD 'CONANCHOR-CNT1' codep=0x224c wordp=0xe921
// ================================================

void CONANCHOR_dash_CNT1() // CONANCHOR-CNT1
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
      AV_dash_MIDPT(); // AV-MIDPT
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe94d: WORD 'CONANCHOR-CNT2' codep=0x224c wordp=0xe94f
// ================================================

void CONANCHOR_dash_CNT2() // CONANCHOR-CNT2
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
      AV_dash_MIDPT(); // AV-MIDPT
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe977: WORD 'SETRELORIGIN' codep=0x224c wordp=0xe979 params=2 returns=0
// ================================================

void SETRELORIGIN() // SETRELORIGIN
{
  Push(pp_Y0_i_); // Y0'
  Store_3(); // !_3
  Push(pp_X0_i_); // X0'
  Store_3(); // !_3
}


// ================================================
// 0xe983: WORD 'CONANCHOR>CONTOUR' codep=0x224c wordp=0xe985 params=0 returns=4
// ================================================

void CONANCHOR_gt_CONTOUR() // CONANCHOR>CONTOUR
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
  SETRELORIGIN(); // SETRELORIGIN
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
      ReadArray(CONANCHOR); // CONANCHOR
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
// 0xea1f: WORD 'ANCHOR_CONTOUR' codep=0x224c wordp=0xea21
// ================================================

void ANCHOR_CONTOUR() // ANCHOR_CONTOUR
{
  MERC_gt_CONANCHOR(); // MERC>CONANCHOR
  Push(0x6aad); // 'CONANCHOR'
  SETLARRAY(); // SETLARRAY
  CONANCHOR_dash_HOR(); // CONANCHOR-HOR
  CONANCHOR_dash_VER(); // CONANCHOR-VER
  CONANCHOR_dash_CNT1(); // CONANCHOR-CNT1
  CONANCHOR_dash_CNT2(); // CONANCHOR-CNT2
  CONANCHOR_gt_CONTOUR(); // CONANCHOR>CONTOUR
}


// ================================================
// 0xea35: WORD 'SUB-CON-FRACT' codep=0x224c wordp=0xea37
// ================================================

void SUB_dash_CON_dash_FRACT() // SUB-CON-FRACT
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
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push(Pop()==Read16(cc_FNULL)?1:0); //  FNULL =
  a = Pop(); // >R
  OVER(); // OVER
  Push(Pop() + 0x000b); //  0x000b +
  OVER(); // OVER
  Push(Pop() + 0x0013); //  0x0013 +
  ACELLADDR(); // ACELLADDR
  A_at_(); // A@
  Push((Pop()==Read16(cc_FNULL)?1:0) & a); //  FNULL = R> AND
  if (Pop() != 0)
  {
    OVER(); // OVER
    Push(Pop() + 0x000c); //  0x000c +
    OVER(); // OVER
    Push(Pop() + 0x0014); //  0x0014 +
    SETREGION(); // SETREGION
    FRACT_dash_REGION(); // FRACT-REGION
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea95: WORD 'FRACT_CONTOUR' codep=0x224c wordp=0xea97
// ================================================

void FRACT_CONTOUR() // FRACT_CONTOUR
{
  unsigned short int i, imax, j, jmax;
  Push(pp_SPHEREWRAP); // SPHEREWRAP
  OFF(); // OFF
  Push(pp_SIGNEXTEND); // SIGNEXTEND
  ON_3(); // ON_3
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  Push(pp_XYANCHOR); // XYANCHOR
  ON_3(); // ON_3
  Push2Words("CONTOUR-RATIO");
  Push(Read16(cc_CONTOUR_dash_SCALE)); // CONTOUR-SCALE
  SETSCALE(); // SETSCALE
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
      SUB_dash_CON_dash_FRACT(); // SUB-CON-FRACT
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeacb: WORD 'FRAME' codep=0x1d29 wordp=0xeacd
// ================================================
// orphan
// 0xeacd: db 0x3a 0x20 ': '

// ================================================
// 0xeacf: WORD '+FRAME' codep=0xead1 wordp=0xead1
// ================================================
// 0xead1: mov    [EACD],sp // FRAME
// 0xead5: lodsw
// 0xead6: mov    bx,ax
// 0xead8: jmp    word ptr [bx]

// ================================================
// 0xeada: WORD '-FRAME' codep=0xeadc wordp=0xeadc
// ================================================
// 0xeadc: add    sp,0E
// 0xeadf: mov    [EACD],sp // FRAME
// 0xeae3: lodsw
// 0xeae4: mov    bx,ax
// 0xeae6: jmp    word ptr [bx]

// ================================================
// 0xeae8: WORD '@FRAME' codep=0xeaea wordp=0xeaea
// ================================================
// 0xeaea: pop    bx
// 0xeaeb: add    bx,[EACD] // FRAME
// 0xeaef: push   word ptr [bx]
// 0xeaf1: lodsw
// 0xeaf2: mov    bx,ax
// 0xeaf4: jmp    word ptr [bx]

// ================================================
// 0xeaf6: WORD '!FRAME' codep=0xeaf8 wordp=0xeaf8
// ================================================
// 0xeaf8: pop    bx
// 0xeaf9: add    bx,[EACD] // FRAME
// 0xeafd: pop    word ptr [bx]
// 0xeaff: lodsw
// 0xeb00: mov    bx,ax
// 0xeb02: jmp    word ptr [bx]

// ================================================
// 0xeb04: WORD '@X1' codep=0x224c wordp=0xeb06
// ================================================

void GetX1() // @X1
{
  Push(6);
  GetFRAME(); // @FRAME
}


// ================================================
// 0xeb0c: WORD '@X2' codep=0x224c wordp=0xeb0e
// ================================================

void GetX2() // @X2
{
  Push(2);
  GetFRAME(); // @FRAME
}


// ================================================
// 0xeb14: WORD '@XMID' codep=0x224c wordp=0xeb16
// ================================================

void GetXMID() // @XMID
{
  Push(0x000a);
  GetFRAME(); // @FRAME
}


// ================================================
// 0xeb1e: WORD '@Y1' codep=0x224c wordp=0xeb20
// ================================================

void GetY1() // @Y1
{
  Push(4);
  GetFRAME(); // @FRAME
}


// ================================================
// 0xeb26: WORD '@Y2' codep=0x224c wordp=0xeb28
// ================================================

void GetY2() // @Y2
{
  Push(0);
  GetFRAME(); // @FRAME
}


// ================================================
// 0xeb2e: WORD '@YMID' codep=0x224c wordp=0xeb30
// ================================================

void GetYMID() // @YMID
{
  Push(8);
  GetFRAME(); // @FRAME
}


// ================================================
// 0xeb36: WORD '@STD' codep=0x224c wordp=0xeb38
// ================================================

void GetSTD() // @STD
{
  Push(0x000c);
  GetFRAME(); // @FRAME
}


// ================================================
// 0xeb40: WORD '!XMID' codep=0x224c wordp=0xeb42
// ================================================

void StoreXMID() // !XMID
{
  Push(0x000a);
  StoreFRAME(); // !FRAME
}


// ================================================
// 0xeb4a: WORD '!YMID' codep=0x224c wordp=0xeb4c
// ================================================

void StoreYMID() // !YMID
{
  Push(8);
  StoreFRAME(); // !FRAME
}


// ================================================
// 0xeb52: WORD '!STD' codep=0x224c wordp=0xeb54
// ================================================

void StoreSTD() // !STD
{
  Push(0x000c);
  StoreFRAME(); // !FRAME
}


// ================================================
// 0xeb5c: WORD 'MIDPTT' codep=0x224c wordp=0xeb5e
// ================================================

void MIDPTT() // MIDPTT
{
  GetX1(); // @X1
  GetX2(); // @X2
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
  StoreXMID(); // !XMID
  GetY1(); // @Y1
  GetY2(); // @Y2
  Push(Pop() + Pop()); // +
  Push(Pop() >> 1); //  2/
  StoreYMID(); // !YMID
}


// ================================================
// 0xeb74: WORD 'POLYPTR' codep=0x1d29 wordp=0xeb80
// ================================================
// 0xeb80: db 0x20 0x4f ' O'

// ================================================
// 0xeb82: WORD 'POLYCOUNTER' codep=0x1d29 wordp=0xeb84
// ================================================
// 0xeb84: db 0x3a 0x20 ': '

// ================================================
// 0xeb86: WORD 'ULY' codep=0x1d29 wordp=0xeb88
// ================================================
// 0xeb88: db 0x3a 0x20 ': '

// ================================================
// 0xeb8a: WORD 'ULX' codep=0x1d29 wordp=0xeb8c
// ================================================
// 0xeb8c: db 0x3a 0x20 ': '

// ================================================
// 0xeb8e: WORD 'OUTPOLY' codep=0x224c wordp=0xeb90
// ================================================

void OUTPOLY() // OUTPOLY
{
  unsigned short int a;
  Push(Read16(pp_POLYPTR)); // POLYPTR @
  a = Pop(); // >R
  GetSTD(); // @STD
  XHBUF_dash_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); //  @
  Push(a); // I
  LC_ex_(); // LC!
  GetX1(); // @X1
  Push(Pop() - Read16(pp_ULX)); //  ULX @ -
  XHBUF_dash_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); //  @
  Push(a + 1); // I 1+
  LC_ex_(); // LC!
  Push(Read16(pp_ULY)); // ULY @
  GetY1(); // @Y1
  _dash_(); // -
  XHBUF_dash_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); //  @
  Push(a + 2); // I 2+
  LC_ex_(); // LC!
  GetX2(); // @X2
  Push(Pop() - Read16(pp_ULX)); //  ULX @ -
  XHBUF_dash_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); //  @
  Push(a + 3); // I 3 +
  LC_ex_(); // LC!
  Push(Read16(pp_ULY)); // ULY @
  GetY2(); // @Y2
  _dash_(); // -
  XHBUF_dash_SEG(); // XHBUF-SEG
  Push(Read16(Pop())); //  @
  Push(a + 4); // R> 4 +
  LC_ex_(); // LC!
  Push(5);
  Push(pp_POLYPTR); // POLYPTR
  _plus__ex__2(); // +!_2
  Push(1);
  Push(pp_POLYCOUNTER); // POLYCOUNTER
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xebfa: WORD '?HOMOGENOUS' codep=0x224c wordp=0xebfc
// ================================================

void IsHOMOGENOUS() // ?HOMOGENOUS
{
  unsigned short int i, imax, j, jmax;
  GetX1(); // @X1
  GetY1(); // @Y1
  Push(Pop() - 1); //  1-
  ReadArray(MERCATOR); // MERCATOR
  L_plus__dash__at_(); // L+-@
  COLORMAP(); // COLORMAP
  Push(Read16(pp_COLOR)); // COLOR @
  StoreSTD(); // !STD
  GetY1(); // @Y1
  GetY2(); // @Y2

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    GetX2(); // @X2
    GetX1(); // @X1

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ReadArray(MERCATOR); // MERCATOR
      L_plus__dash__at_(); // L+-@
      COLORMAP(); // COLORMAP
      Push(Read16(pp_COLOR)); // COLOR @
      GetSTD(); // @STD
      Push((Pop()==Pop())?1:0); // =
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        Push(0x03e7);
        StoreSTD(); // !STD
        jmax = j; // LEAVE
      }
      j++;
    } while(j<jmax); // (LOOP)

    GetSTD(); // @STD
    Push(Pop()==0x03e7?1:0); //  0x03e7 =
    if (Pop() != 0)
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  GetSTD(); // @STD
  Push(!(Pop()==0x03e7?1:0)); //  0x03e7 = NOT
}


// ================================================
// 0xec5c: WORD 'POLYGON-EXTRACT' codep=0x224c wordp=0xec70
// ================================================

void POLYGON_dash_EXTRACT() // POLYGON-EXTRACT
{
  _plus_FRAME(); // +FRAME
  IsHOMOGENOUS(); // ?HOMOGENOUS
  if (Pop() != 0)
  {
    OUTPOLY(); // OUTPOLY
  } else
  {
    MIDPTT(); // MIDPTT
    Push(0);
    Push(0);
    Push(0);
    GetX1(); // @X1
    GetY1(); // @Y1
    GetXMID(); // @XMID
    GetYMID(); // @YMID
    POLYGON_dash_EXTRACT(); // POLYGON-EXTRACT
    Push(0);
    Push(0);
    Push(0);
    GetXMID(); // @XMID
    GetY1(); // @Y1
    GetX2(); // @X2
    GetYMID(); // @YMID
    POLYGON_dash_EXTRACT(); // POLYGON-EXTRACT
    Push(0);
    Push(0);
    Push(0);
    GetX1(); // @X1
    GetYMID(); // @YMID
    GetXMID(); // @XMID
    GetY2(); // @Y2
    POLYGON_dash_EXTRACT(); // POLYGON-EXTRACT
    Push(0);
    Push(0);
    Push(0);
    GetXMID(); // @XMID
    GetYMID(); // @YMID
    GetX2(); // @X2
    GetY2(); // @Y2
    POLYGON_dash_EXTRACT(); // POLYGON-EXTRACT
  }
  _dash_FRAME(); // -FRAME
}


// ================================================
// 0xecc4: WORD 'BUILD-CONTINENTS' codep=0x224c wordp=0xecc6
// ================================================

void BUILD_dash_CONTINENTS() // BUILD-CONTINENTS
{
  unsigned short int i, imax;
  Push(pp_POLYPTR); // POLYPTR
  OFF(); // OFF
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
    Push(pp_ULY); // ULY
    Store_3(); // !_3
    SWAP(); // SWAP
    Push(Pop() * 4); //  4 *
    Push(Read16(regsp)); // DUP
    Push(pp_ULX); // ULX
    Store_3(); // !_3
    SWAP(); // SWAP
    OVER(); // OVER
    Push(Pop() + 4); //  4 +
    OVER(); // OVER
    Push(Pop() - 4); //  4 -
    Push(pp_POLYCOUNTER); // POLYCOUNTER
    OFF(); // OFF
    Push(Read16(pp_POLYPTR)); // POLYPTR @
    Push(0);
    Push(i); // I
    ReadArray(FACE); // FACE
    L_ex_(); // L!
    POLYGON_dash_EXTRACT(); // POLYGON-EXTRACT
    Push(Read16(pp_POLYCOUNTER)); // POLYCOUNTER @
    Push(2);
    Push(i); // I
    ReadArray(FACE); // FACE
    LC_ex_(); // LC!
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xed2e: WORD '[TMP]' codep=0x1d29 wordp=0xed30
// ================================================
// 0xed30: db 0x3a 0x20 ': '

// ================================================
// 0xed32: WORD '+TMP' codep=0xed34 wordp=0xed34
// ================================================
// 0xed34: mov    [ED30],sp // [TMP]
// 0xed38: pop    ax
// 0xed39: shl    ax,1
// 0xed3b: sub    sp,ax
// 0xed3d: lodsw
// 0xed3e: mov    bx,ax
// 0xed40: jmp    word ptr [bx]

// ================================================
// 0xed42: WORD '-TMP' codep=0xed44 wordp=0xed44
// ================================================
// 0xed44: pop    ax
// 0xed45: shl    ax,1
// 0xed47: add    sp,ax
// 0xed49: lodsw
// 0xed4a: mov    bx,ax
// 0xed4c: jmp    word ptr [bx]

// ================================================
// 0xed4e: WORD '@TMP' codep=0xed50 wordp=0xed50
// ================================================
// 0xed50: pop    bx
// 0xed51: shl    bx,1
// 0xed53: neg    bx
// 0xed55: add    bx,[ED30] // [TMP]
// 0xed59: push   word ptr [bx]
// 0xed5b: lodsw
// 0xed5c: mov    bx,ax
// 0xed5e: jmp    word ptr [bx]

// ================================================
// 0xed60: WORD '!TMP' codep=0xed62 wordp=0xed62
// ================================================
// 0xed62: pop    bx
// 0xed63: shl    bx,1
// 0xed65: neg    bx
// 0xed67: add    bx,[ED30] // [TMP]
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
// 0xed7f: WORD 'MAINCOLOR' codep=0x1d29 wordp=0xed81
// ================================================
// 0xed81: db 0x3a 0x20 ': '

// ================================================
// 0xed83: WORD 'TAD' codep=0x1d29 wordp=0xed85
// ================================================
// 0xed85: db 0x3a 0x20 ': '

// ================================================
// 0xed87: WORD '#POL' codep=0x1d29 wordp=0xed89
// ================================================
// 0xed89: db 0x3a 0x20 ': '

// ================================================
// 0xed8b: WORD 'CACCUM' codep=0x224c wordp=0xed8d
// ================================================

void CACCUM() // CACCUM
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
    GetTMP(); // @TMP
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      Push(i); // I
      StoreTMP(); // !TMP
      Push(1);
      Push(i + 1); // I 1+
      StoreTMP(); // !TMP
      imax = i; // LEAVE
    } else
    {
      Push((Pop()==Pop())?1:0); // =
      if (Pop() != 0)
      {
        Push(i + 1); // I 1+
        Push(Read16(regsp)); // DUP
        GetTMP(); // @TMP
        Push(Pop() + 1); //  1+
        SWAP(); // SWAP
        StoreTMP(); // !TMP
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
// 0xedd7: WORD 'MAJOR-COLOR' codep=0x224c wordp=0xedd9
// ================================================

void MAJOR_dash_COLOR() // MAJOR-COLOR
{
  unsigned short int a, b, i, imax, j, jmax, c;
  a = Pop(); // >R
  b = Pop(); // >R
  Push(0x0022);
  _plus_TMP(); // +TMP
  Push(Read16(pp__bo_TMP_bc_) - 0x0044); // [TMP] @ 0x0044 -
  Push(0x0046);
  Push(0);
  FILL_1(); // FILL_1
  Push(b); // R>
  Push(a); // R>
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    XHBUF_dash_SEG(); // XHBUF-SEG
    Push(Read16(Pop())); //  @
    OVER(); // OVER
    LC_at_(); // LC@
    CACCUM(); // CACCUM
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
    GetTMP(); // @TMP
    Push(j + 1); // I 1+
    GetTMP(); // @TMP
    Push(Read16(regsp)); // DUP
    Push(0x0021);
    GetTMP(); // @TMP
    _gt_(); // >
    if (Pop() != 0)
    {
      Push(0x0021);
      StoreTMP(); // !TMP
      Push(0x0020);
      StoreTMP(); // !TMP
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
  GetTMP(); // @TMP
  c = Pop(); // >R
  Push(0x0022);
  _dash_TMP(); // -TMP
  Push(c); // R>
}


// ================================================
// 0xee63: WORD 'PUSH-POLY' codep=0xee65 wordp=0xee65
// ================================================
// 0xee65: mov    cx,es
// 0xee67: mov    dx,[5DA3] // ?EGA
// 0xee6b: and    dx,01
// 0xee6e: jnz    EE76
// 0xee70: mov    dx,[55D8] // HBUF-SEG
// 0xee74: jmp    EE7A
// 0xee76: mov    dx,[52B3] // XBUF-SE
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
// 0xee94: WORD 'POP-POLY' codep=0xee96 wordp=0xee96
// ================================================
// 0xee96: mov    cx,es
// 0xee98: mov    dx,[5144] // POLYSEG
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
// 0xeec0: WORD 'DROP-POLY' codep=0xeec2 wordp=0xeec2
// ================================================
// 0xeec2: add    sp,06
// 0xeec5: lodsw
// 0xeec6: mov    bx,ax
// 0xeec8: jmp    word ptr [bx]

// ================================================
// 0xeeca: WORD '?MCLR' codep=0xeecc wordp=0xeecc
// ================================================
// 0xeecc: xor    ax,ax
// 0xeece: pop    ax
// 0xeecf: push   ax
// 0xeed0: cmp    ax,[ED81] // MAINCOLOR
// 0xeed4: jnz    EEDB
// 0xeed6: mov    ax,0001
// 0xeed9: jmp    EEDD
// 0xeedb: xor    ax,ax
// 0xeedd: push   ax
// 0xeede: lodsw
// 0xeedf: mov    bx,ax
// 0xeee1: jmp    word ptr [bx]

// ================================================
// 0xeee3: WORD 'MAINPOLY' codep=0xeee5 wordp=0xeee5
// ================================================
// 0xeee5: xor    ax,ax
// 0xeee7: push   ax
// 0xeee8: mov    ax,0004
// 0xeeeb: mov    ah,al
// 0xeeed: push   ax
// 0xeeee: mov    ax,[ED81] // MAINCOLOR
// 0xeef2: push   ax
// 0xeef3: lodsw
// 0xeef4: mov    bx,ax
// 0xeef6: jmp    word ptr [bx]

// ================================================
// 0xeef8: WORD 'REDUCE-FACE' codep=0x224c wordp=0xeefa
// ================================================

void REDUCE_dash_FACE() // REDUCE-FACE
{
  unsigned short int a, i, imax, j, jmax;
  Push(0);
  OVER(); // OVER
  ReadArray(FACE); // FACE
  OVER(); // OVER
  OVER(); // OVER
  L_at_(); // L@
  Push(pp_TAD); // TAD
  Store_3(); // !_3
  Push(Pop() + 2); //  2+
  LC_at_(); // LC@
  a = Pop(); // >R
  Push(Read16(pp_TAD)); // TAD @
  Push(a); // I
  MAJOR_dash_COLOR(); // MAJOR-COLOR
  Push(pp_MAINCOLOR); // MAINCOLOR
  Store_3(); // !_3
  Push(a); // I
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_TAD)); // TAD @
    PUSH_dash_POLY(); // PUSH-POLY
    Push(5);
    Push(pp_TAD); // TAD
    _plus__ex__2(); // +!_2
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_FADDR)); // FADDR @
  Push(pp_TAD); // TAD
  Store_3(); // !_3
  MAINPOLY(); // MAINPOLY
  Push(1);
  Push(pp__n_POL); // #POL
  Store_3(); // !_3
  POP_dash_POLY(); // POP-POLY
  Push(a); // R>
  Push(0);

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    IsMCLR(); // ?MCLR
    if (Pop() != 0)
    {
      DROP_dash_POLY(); // DROP-POLY
    } else
    {
      POP_dash_POLY(); // POP-POLY
      Push(1);
      Push(pp__n_POL); // #POL
      _plus__ex__2(); // +!_2
    }
    j++;
  } while(j<jmax); // (LOOP)

  Push(0);
  SWAP(); // SWAP
  ReadArray(FACE); // FACE
  OVER(); // OVER
  OVER(); // OVER
  Push(Read16(pp_TAD)); // TAD @
  ROT(); // ROT
  ROT(); // ROT
  L_ex_(); // L!
  Push(Pop() + 2); //  2+
  Push(Read16(pp__n_POL)); // #POL @
  ROT(); // ROT
  ROT(); // ROT
  LC_ex_(); // LC!
}


// ================================================
// 0xef84: WORD 'REDUCE-ALL' codep=0x224c wordp=0xef86
// ================================================

void REDUCE_dash_ALL() // REDUCE-ALL
{
  unsigned short int i, imax;
  Push(0);
  Push(pp_FADDR); // FADDR
  Store_3(); // !_3
  Push(0x0048);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    REDUCE_dash_FACE(); // REDUCE-FACE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xef9e: WORD 'MAKE-GLOBE' codep=0x224c wordp=0xefad
// ================================================
// entry

void MAKE_dash_GLOBE() // MAKE-GLOBE
{
  BUILD_dash_CONTINENTS(); // BUILD-CONTINENTS
  REDUCE_dash_ALL(); // REDUCE-ALL
}


// ================================================
// 0xefb3: WORD 'UPSCRL' codep=0x224c wordp=0xefb5
// ================================================

void UPSCRL() // UPSCRL
{
  Push(0);
  Push(0);
  ACELLADDR(); // ACELLADDR
  ROT(); // ROT
  Push(0);
  SWAP(); // SWAP
  ACELLADDR(); // ACELLADDR
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
// 0xefd7: WORD 'DNSCRL' codep=0x224c wordp=0xefd9
// ================================================

void DNSCRL() // DNSCRL
{
  Push(0);
  SWAP(); // SWAP
  ACELLADDR(); // ACELLADDR
  Push(0);
  Push(0);
  ACELLADDR(); // ACELLADDR
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
// 0xeff9: WORD 'RTSCRL' codep=0x224c wordp=0xeffb
// ================================================

void RTSCRL() // RTSCRL
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
    ACELLADDR(); // ACELLADDR
    Push(3);
    PICK(); // PICK
    Push(i); // I
    ACELLADDR(); // ACELLADDR
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
// 0xf021: WORD 'LFSCRL' codep=0x224c wordp=0xf023
// ================================================

void LFSCRL() // LFSCRL
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
    ACELLADDR(); // ACELLADDR
    Push(0);
    Push(i); // I
    ACELLADDR(); // ACELLADDR
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
// 0xf047: WORD 'SCRLXCON' codep=0x224c wordp=0xf049 params=0 returns=0
// ================================================

void SCRLXCON() // SCRLXCON
{
  Push(Read16(pp_DXCON)); // DXCON @
  if (Pop() == 0) return;
  Push(Read16(pp_DXCON)); // DXCON @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    ABS(); // ABS
    RTSCRL(); // RTSCRL
    Push(0);
    Push(0);
    Push(0x000b);
    Push(0x0064);
  } else
  {
    LFSCRL(); // LFSCRL
    Push(0x0031);
    Push(0);
    Push(0x003c);
    Push(0x0064);
  }
  SETREGION(); // SETREGION
  Push(Read16(cc_FNULL)); // FNULL
  FILLREGION(); // FILLREGION
}


// ================================================
// 0xf089: WORD 'SCRLYCON' codep=0x224c wordp=0xf08b params=0 returns=0
// ================================================

void SCRLYCON() // SCRLYCON
{
  Push(Read16(pp_DYCON)); // DYCON @
  if (Pop() == 0) return;
  Push(Read16(pp_DYCON)); // DYCON @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    ABS(); // ABS
    UPSCRL(); // UPSCRL
    Push(0);
    Push(0);
    Push(0x003c);
    Push(0x0013);
  } else
  {
    DNSCRL(); // DNSCRL
    Push(0);
    Push(0x0051);
    Push(0x003c);
    Push(0x0064);
  }
  SETREGION(); // SETREGION
  Push(Read16(cc_FNULL)); // FNULL
  FILLREGION(); // FILLREGION
}


// ================================================
// 0xf0cb: WORD 'SCRLCON' codep=0x224c wordp=0xf0d7 params=0 returns=0
// ================================================
// entry

void SCRLCON() // SCRLCON
{
  Push(Read16(pp_DXCON) | Read16(pp_DYCON)); // DXCON @ DYCON @ OR
  if (Pop() == 0) return;
  Push(pp_SPHEREWRAP); // SPHEREWRAP
  OFF(); // OFF
  Push(0x6ac1); // 'CONTOUR'
  SETLARRAY(); // SETLARRAY
  SCRLXCON(); // SCRLXCON
  SCRLYCON(); // SCRLYCON
  ANCHOR_CONTOUR(); // ANCHOR_CONTOUR
  FRACT_CONTOUR(); // FRACT_CONTOUR
}


// ================================================
// 0xf0f9: WORD 'NEWCONTOUR' codep=0x224c wordp=0xf108
// ================================================
// entry

void NEWCONTOUR() // NEWCONTOUR
{
  INIT_dash_CONTOUR(); // INIT-CONTOUR
  ANCHOR_CONTOUR(); // ANCHOR_CONTOUR
  FRACT_CONTOUR(); // FRACT_CONTOUR
}

// 0xf110: db 0x46 0x52 0x41 0x43 0x54 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x72 0x66 0x67 0x30 0x33 0x6a 0x75 0x6e 0x38 0x35 0x29 0xea 0x5d 0x17 0x31 0x32 0x32 0x32 0x6a 0x6d 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0xfc 0x18 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x16 0x16 0x98 0x19 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0xce 0x54 0xae 0x0b 0x3d 0x0f 0x5f 0x12 0xfa 0x15 0x3e 0x00 0x16 0x16 0xe5 0x19 0x02 0x00 0x8c 0xea 0xda 0xea 0x20 0x0f 0x20 0x0f 0xb4 0xee 0xfa 0x15 0x2a 0x00 0x5d 0x17 0xc8 0x00 0x8b 0x3b 0xe4 0xeb 0xfa 0x15 0x0c 0x00 0x9b 0x3b 0x82 0xea 0x5a 0xf1 0x60 0x16 0x12 0x00 0xc8 0xec 0xb7 0x6d 0x66 0xf1 0x5d 0x17 0x96 0x00 0xb8 0xec 0x8b 0x3b 0x6c 0xec 0xda 0xea 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0x10 0x1a 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0xce 0x54 0xae 0x0b 0x5d 0x17 0x0c 0x00 0xf5 0x12 0x5d 0x17 0x28 0x00 0x8b 0x3b 0xe4 0xeb 0xb3 0x0f 0xfa 0x15 0x5c 0x00 0xc4 0xf1 0xce 0x54 0xae 0x0b 0x9b 0x3b 0x5f 0x12 0x8b 0x3b 0xb3 0x0f 0x73 0x3b 0x72 0x0f 0x5d 0x17 0x30 0x00 0x72 0x0f 0x73 0x3b 0xae 0x3f 0x5d 0x17 0x82 0x00 0x72 0x0f 0x6a 0x6d 0xda 0xea 0x20 0x0f 0x5d 0x17 0x64 0x00 0xb4 0xee 0xfa 0x15 0x24 0x00 0xcc 0xeb 0xae 0x0b 0xce 0x54 0xae 0x0b 0x9b 0x3b 0x5f 0x12 0x5d 0x17 0x3c 0x00 0xb3 0x0f 0x5d 0x17 0x1e 0x00 0x72 0x0f 0xad 0x11 0x8b 0x3b 0x4c 0xec 0x60 0x16 0x08 0x00 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0xd4 0x1a 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0xd2 0xad 0x41 0x0e 0xdb 0x23 0x5d 0x17 0x18 0x00 0xea 0x6d 0xac 0xeb 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x4e 0x00 0x60 0x16 0x04 0x00 0x98 0x09 0x9c 0x67 0x5d 0x17 0x3b 0x00 0x72 0x0f 0x6a 0x6d 0x9c 0x67 0x5d 0x17 0x3d 0x00 0x72 0x0f 0x41 0x0e 0x5d 0x17 0x18 0x00 0x98 0x09 0xfd 0x6d 0xdb 0x23 0x5d 0x17 0x18 0x00 0x5d 0x17 0x2e 0x00 0x67 0xaf 0xe7 0x0f 0xb3 0x0e 0xf2 0x0e 0xea 0x6d 0x90 0x16 0x4c 0x22 0xe4 0xad 0xae 0x0b 0x20 0x0f 0x5d 0x17 0x21 0x00 0xeb 0x11 0x5d 0x17 0x0a 0x00 0x89 0x11 0xb8 0xec 0x41 0x0e 0x00 0xf0 0x76 0x6d 0x5d 0x17 0x0a 0x00 0x4c 0x0f 0x20 0x0f 0x5d 0x14 0xb4 0x13 0x9f 0x13 0x9c 0x67 0x5d 0x17 0x9b 0x00 0x72 0x0f 0x41 0x0e 0x7b 0x3b 0x98 0x09 0xfd 0x6d 0xf2 0x0e 0xea 0x6d 0x32 0x0e 0x00 0xf0 0xae 0x0b 0x5d 0x17 0x0a 0x00 0x2d 0x12 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x53 0x00 0x60 0x16 0x04 0x00 0x98 0x09 0x9c 0x67 0x5d 0x17 0xaf 0x00 0x72 0x0f 0x3d 0x0f 0xb3 0x0e 0xfd 0x6d 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0x50 0x6c 0xf2 0x79 0x12 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0f 0x00 0x12 0x7e 0xfa 0x15 0x66 0x00 0x12 0x7a 0x2e 0x0f 0x5d 0x17 0x0a 0x00 0xd8 0x4a 0x20 0x0f 0xb8 0x15 0x84 0x7a 0xd0 0x15 0xfc 0xff 0x30 0x75 0x5d 0x17 0x0f 0x00 0x5f 0x12 0xfa 0x15 0x04 0x00 0xb5 0x7a 0x30 0x75 0x5d 0x17 0x0f 0x00 0x5f 0x12 0x07 0x13 0x41 0x0e 0xfa 0x15 0x2a 0x00 0x4c 0xf2 0xde 0x0d 0x58 0xf2 0xa8 0xf2 0x9c 0x67 0xcd 0x0c 0xda 0xea 0x20 0x0f 0x83 0x3b 0xb4 0xee 0xfa 0x15 0x12 0x00 0xc2 0xeb 0x48 0xbb 0xac 0x7e 0x32 0x0e 0x00 0xf0 0xae 0x0b 0x8b 0x3b 0x6c 0xec 0x84 0x7a 0x60 0x7a 0x3e 0x13 0xfa 0x15 0xc0 0xff 0x34 0xec 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0x00 0x1c 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0x94 0xf3 0xda 0xea 0x20 0x0f 0x5d 0x17 0x64 0x00 0xb4 0xee 0xfa 0x15 0x3c 0x00 0x28 0xa5 0x0a 0x4f 0x17 0x85 0xab 0x4f 0x5d 0x17 0x0c 0x4f 0x76 0x6d 0x81 0xa1 0x39 0x3f 0x0d 0x43 0x52 0x45 0x57 0x20 0x41 0x52 0x52 0x45 0x53 0x54 0x45 0x44 0x47 0xa5 0x39 0x3f 0x09 0x47 0x41 0x4d 0x45 0x20 0x4f 0x56 0x45 0x52 0x47 0xa5 0x1f 0xa9 0x32 0x0e 0xa9 0x48 0x32 0x0e 0xd7 0x8f 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0xd8 0x1c 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x16 0x16 0x0f 0x1d 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0xfa 0xf3 0xda 0xea 0x5d 0x17 0xc4 0x09 0xef 0x2a 0xe7 0x5f 0xae 0x0b 0xce 0x84 0xcf 0x5f 0xae 0x0b 0x07 0x13 0xfa 0x15 0x1e 0x00 0x06 0xf4 0xda 0xea 0x5d 0x17 0xc4 0x09 0xef 0x2a 0xc8 0xec 0xb7 0x6d 0x48 0x5a 0xb7 0x6d 0x20 0x0f 0x9e 0xea 0x6a 0x6d 0xc0 0x54 0xc5 0x6d 0xc9 0x79 0x90 0x16 0x29 0x1d 0x04 0x30 0xf1 0xa7 0xed 0xdb 0xed 0x74 0xf1 0x29 0x1d 0x05 0x3f 0xee 0x73 0xee 0x12 0xf0 0x12 0xf3 0xa6 0xf0 0x29 0x1d 0x03 0xc0 0xef 0x36 0xef 0xd2 0xf1 0x29 0x1d 0x01 0x17 0xee 0x29 0x1d 0x01 0xce 0xec 0x29 0x1d 0x02 0x14 0xf4 0xa2 0xf3 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x28 0x00 0xc8 0xec 0xc5 0x6d 0xcd 0x0c 0x05 0x10 0x7f 0x0e 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x50 0x0e 0x37 0x3a 0xc8 0xec 0xae 0x0b 0xfa 0x15 0x04 0x00 0x4a 0x17 0x66 0xbf 0x3d 0x0f 0x5c 0x15 0xec 0xff 0x90 0x16 0x00 0x00 0x87 0x53 0x41 0x2d 0x43 0x41 0x53 0xc5 0x4f 0x4a 0x06 0x00 0x22 0x0f 0x01 0x00 0x54 0xf4 0x07 0x00 0x5f 0xf4 0x08 0x00 0x6c 0xf4 0x03 0x00 0x75 0xf4 0x0a 0x00 0x7a 0xf4 0x15 0x00 0x7f 0xf4 0x4c 0x22 0x98 0x2a 0x38 0x0c 0x3e 0x62 0x38 0x0c 0x46 0x40 0x19 0x06 0x3e 0x13 0xfa 0x15 0xf0 0xff 0x90 0x16 0x00 0x00 0x87 0x28 0x58 0x43 0x4f 0x4d 0x4d 0xa9 0x4c 0x22 0xdc 0xf4 0xfd 0x62 0x02 0x7a 0x30 0x75 0xc9 0x79 0xbe 0xf4 0x84 0xf4 0xdc 0xf4 0x90 0x16 0x58 0x43 0x4f 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x53 0x50 0x45 0x43 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x38 0x2f 0x31 0x33 0x2f 0x38 0x35 0x20 0x41 0x57 0x4b 0x20 0x29 0x31 0x31 0x37 0x35 0xcf 0x8b 0x90 0x16 0x43 0x4f 0x4d 0x4d 0x2d 0x56 0x4f 0x43 0x00 'FRACT___________________________ -----------------rfg03jun85) ] 1222jm y  L"          L"          L"n x  T  = _   >                   * ]    ;       ;  Z `      mf ]      ;l    y  L"          L"n x  T  ]     ] (  ;      \    T   ;_  ;  s;r ] 0 r s; ?]   r jm    ] d     $      T   ;_ ] <   ]   r    ;L `      m   y  L"          L"  A  #]    m      ] N `      g] ; r jm g] = r A ]      m #]   ] . g        m  L"      ] !   ]       A   vm]   L   ]      g]   r A {;   m   m2     ]   -     ] S `      g]   r =    m  L"n x Pl y z]   ]    ~  f  z. ]    J     z    0u]   _      z0u]   _   A   * L   X    g       ;        H  ~2      ;l  z`z>     4  y  L"          L"n x       ] d     < (  O   O]  Ovm  9? CREW ARRESTEDG 9? GAME OVERG   2  H2      m   y  L"          L"          L"n x     ]    * _     _            ]    *   mHZ m    jm T m y  )  0     t )  ? s       )    6   )    )    )      L"    (    m     r     P 7:        J f = \        SA-CAS OJ  "   T   _   l   u   z    L" *8 >b8 F@  >          (XCOMM L"   b z0u y        XCOM-VOC________________________ SPEC -------------8/13/85 AWK )1175    COMM-VOC '

