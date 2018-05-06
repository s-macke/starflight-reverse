// ====== OVERLAY 'SENT-OV' ======
// store offset = 0xe2b0
// overlay size   = 0x12b0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xe2c6  codep:0x2214 parp:0xe2c6 size:0x0002 C-string:'UNK_0xe2c6'
//      UNK_0xe2ca  codep:0x2214 parp:0xe2ca size:0x0002 C-string:'UNK_0xe2ca'
//      UNK_0xe2ce  codep:0x2214 parp:0xe2ce size:0x0002 C-string:'UNK_0xe2ce'
//      UNK_0xe2d2  codep:0x2214 parp:0xe2d2 size:0x0002 C-string:'UNK_0xe2d2'
//      UNK_0xe2d6  codep:0x2214 parp:0xe2d6 size:0x0002 C-string:'UNK_0xe2d6'
//      UNK_0xe2da  codep:0x2214 parp:0xe2da size:0x0002 C-string:'UNK_0xe2da'
//      UNK_0xe2de  codep:0x224c parp:0xe2de size:0x0006 C-string:'UNK_0xe2de'
//      UNK_0xe2e6  codep:0x224c parp:0xe2e6 size:0x000a C-string:'UNK_0xe2e6'
//      UNK_0xe2f2  codep:0x224c parp:0xe2f2 size:0x000a C-string:'UNK_0xe2f2'
//      UNK_0xe2fe  codep:0x224c parp:0xe2fe size:0x000a C-string:'UNK_0xe2fe'
//      UNK_0xe30a  codep:0x224c parp:0xe30a size:0x0013 C-string:'UNK_0xe30a'
//           CARDS  codep:0xe312 parp:0xe327 size:0x003c C-string:'CARDS'
//        NICHE-SE  codep:0xe312 parp:0xe370 size:0x002d C-string:'NICHE_dash_SE'
//      UNK_0xe39f  codep:0x224c parp:0xe39f size:0x002e C-string:'UNK_0xe39f'
//      UNK_0xe3cf  codep:0x224c parp:0xe3cf size:0x001a C-string:'UNK_0xe3cf'
//      UNK_0xe3eb  codep:0x224c parp:0xe3eb size:0x001a C-string:'UNK_0xe3eb'
//      UNK_0xe407  codep:0x224c parp:0xe407 size:0x000a C-string:'UNK_0xe407'
//      UNK_0xe413  codep:0x224c parp:0xe413 size:0x0008 C-string:'UNK_0xe413'
//      UNK_0xe41d  codep:0x224c parp:0xe41d size:0x000a C-string:'UNK_0xe41d'
//      UNK_0xe429  codep:0x224c parp:0xe429 size:0x0006 C-string:'UNK_0xe429'
//      UNK_0xe431  codep:0x2214 parp:0xe431 size:0x0002 C-string:'UNK_0xe431'
//      UNK_0xe435  codep:0x224c parp:0xe435 size:0x002e C-string:'UNK_0xe435'
//        PROBABLE  codep:0x1d29 parp:0xe470 size:0x0002 C-string:'PROBABLE'
//      UNK_0xe474  codep:0x224c parp:0xe474 size:0x0006 C-string:'UNK_0xe474'
//      UNK_0xe47c  codep:0x224c parp:0xe47c size:0x000a C-string:'UNK_0xe47c'
//      UNK_0xe488  codep:0x224c parp:0xe488 size:0x0015 C-string:'UNK_0xe488'
//      UNK_0xe49f  codep:0x73ea parp:0xe49f size:0x0006 C-string:'UNK_0xe49f'
//            HITS  codep:0x744d parp:0xe4ae size:0x0003 C-string:'HITS'
//      UNK_0xe4b3  codep:0x744d parp:0xe4b3 size:0x0003 C-string:'UNK_0xe4b3'
//      UNK_0xe4b8  codep:0x73ea parp:0xe4b8 size:0x0006 C-string:'UNK_0xe4b8'
//      UNK_0xe4c0  codep:0x73ea parp:0xe4c0 size:0x0006 C-string:'UNK_0xe4c0'
//      UNK_0xe4c8  codep:0x73ea parp:0xe4c8 size:0x0006 C-string:'UNK_0xe4c8'
//      UNK_0xe4d0  codep:0x73ea parp:0xe4d0 size:0x0006 C-string:'UNK_0xe4d0'
//      UNK_0xe4d8  codep:0x73ea parp:0xe4d8 size:0x0006 C-string:'UNK_0xe4d8'
//      UNK_0xe4e0  codep:0x73ea parp:0xe4e0 size:0x0006 C-string:'UNK_0xe4e0'
//      UNK_0xe4e8  codep:0x73ea parp:0xe4e8 size:0x0006 C-string:'UNK_0xe4e8'
//      UNK_0xe4f0  codep:0x73ea parp:0xe4f0 size:0x0006 C-string:'UNK_0xe4f0'
//      UNK_0xe4f8  codep:0x73ea parp:0xe4f8 size:0x0006 C-string:'UNK_0xe4f8'
//      UNK_0xe500  codep:0x73ea parp:0xe500 size:0x0006 C-string:'UNK_0xe500'
//      UNK_0xe508  codep:0x73ea parp:0xe508 size:0x0006 C-string:'UNK_0xe508'
//      UNK_0xe510  codep:0x73ea parp:0xe510 size:0x0006 C-string:'UNK_0xe510'
//      UNK_0xe518  codep:0x73ea parp:0xe518 size:0x0006 C-string:'UNK_0xe518'
//      UNK_0xe520  codep:0x73ea parp:0xe520 size:0x0006 C-string:'UNK_0xe520'
//      UNK_0xe528  codep:0x73ea parp:0xe528 size:0x0006 C-string:'UNK_0xe528'
//      UNK_0xe530  codep:0x73ea parp:0xe530 size:0x0006 C-string:'UNK_0xe530'
//      UNK_0xe538  codep:0x73ea parp:0xe538 size:0x0006 C-string:'UNK_0xe538'
//      UNK_0xe540  codep:0x73ea parp:0xe540 size:0x0006 C-string:'UNK_0xe540'
//      UNK_0xe548  codep:0x73ea parp:0xe548 size:0x0006 C-string:'UNK_0xe548'
//      UNK_0xe550  codep:0x73ea parp:0xe550 size:0x0006 C-string:'UNK_0xe550'
//      UNK_0xe558  codep:0x73ea parp:0xe558 size:0x0006 C-string:'UNK_0xe558'
//      UNK_0xe560  codep:0x73ea parp:0xe560 size:0x0006 C-string:'UNK_0xe560'
//      UNK_0xe568  codep:0x73ea parp:0xe568 size:0x0006 C-string:'UNK_0xe568'
//      UNK_0xe570  codep:0x73ea parp:0xe570 size:0x0006 C-string:'UNK_0xe570'
//      UNK_0xe578  codep:0x73ea parp:0xe578 size:0x0006 C-string:'UNK_0xe578'
//      UNK_0xe580  codep:0x73ea parp:0xe580 size:0x0006 C-string:'UNK_0xe580'
//      UNK_0xe588  codep:0x73ea parp:0xe588 size:0x0006 C-string:'UNK_0xe588'
//      UNK_0xe590  codep:0x73ea parp:0xe590 size:0x0006 C-string:'UNK_0xe590'
//      UNK_0xe598  codep:0x73ea parp:0xe598 size:0x0006 C-string:'UNK_0xe598'
//      UNK_0xe5a0  codep:0x73ea parp:0xe5a0 size:0x0006 C-string:'UNK_0xe5a0'
//      UNK_0xe5a8  codep:0x73ea parp:0xe5a8 size:0x0006 C-string:'UNK_0xe5a8'
//      UNK_0xe5b0  codep:0x73ea parp:0xe5b0 size:0x0006 C-string:'UNK_0xe5b0'
//      UNK_0xe5b8  codep:0x73ea parp:0xe5b8 size:0x0006 C-string:'UNK_0xe5b8'
//      UNK_0xe5c0  codep:0x73ea parp:0xe5c0 size:0x0006 C-string:'UNK_0xe5c0'
//      UNK_0xe5c8  codep:0x73ea parp:0xe5c8 size:0x0006 C-string:'UNK_0xe5c8'
//      UNK_0xe5d0  codep:0x73ea parp:0xe5d0 size:0x0006 C-string:'UNK_0xe5d0'
//      UNK_0xe5d8  codep:0x73ea parp:0xe5d8 size:0x0006 C-string:'UNK_0xe5d8'
//      UNK_0xe5e0  codep:0x73ea parp:0xe5e0 size:0x0006 C-string:'UNK_0xe5e0'
//      UNK_0xe5e8  codep:0x73ea parp:0xe5e8 size:0x0006 C-string:'UNK_0xe5e8'
//      UNK_0xe5f0  codep:0x73ea parp:0xe5f0 size:0x0006 C-string:'UNK_0xe5f0'
//      UNK_0xe5f8  codep:0x73ea parp:0xe5f8 size:0x0006 C-string:'UNK_0xe5f8'
//      UNK_0xe600  codep:0x73ea parp:0xe600 size:0x0006 C-string:'UNK_0xe600'
//      UNK_0xe608  codep:0x73ea parp:0xe608 size:0x0006 C-string:'UNK_0xe608'
//      UNK_0xe610  codep:0x73ea parp:0xe610 size:0x0006 C-string:'UNK_0xe610'
//      UNK_0xe618  codep:0x73ea parp:0xe618 size:0x0006 C-string:'UNK_0xe618'
//      UNK_0xe620  codep:0x73ea parp:0xe620 size:0x0006 C-string:'UNK_0xe620'
//      UNK_0xe628  codep:0x73ea parp:0xe628 size:0x0006 C-string:'UNK_0xe628'
//      UNK_0xe630  codep:0x73ea parp:0xe630 size:0x0006 C-string:'UNK_0xe630'
//      UNK_0xe638  codep:0x73ea parp:0xe638 size:0x0006 C-string:'UNK_0xe638'
//      UNK_0xe640  codep:0x73ea parp:0xe640 size:0x0006 C-string:'UNK_0xe640'
//      UNK_0xe648  codep:0x73ea parp:0xe648 size:0x0006 C-string:'UNK_0xe648'
//      UNK_0xe650  codep:0x73ea parp:0xe650 size:0x0006 C-string:'UNK_0xe650'
//      UNK_0xe658  codep:0x73ea parp:0xe658 size:0x0006 C-string:'UNK_0xe658'
//      UNK_0xe660  codep:0x73ea parp:0xe660 size:0x0006 C-string:'UNK_0xe660'
//      UNK_0xe668  codep:0x73ea parp:0xe668 size:0x0006 C-string:'UNK_0xe668'
//      UNK_0xe670  codep:0x73ea parp:0xe670 size:0x0006 C-string:'UNK_0xe670'
//      UNK_0xe678  codep:0x73ea parp:0xe678 size:0x0006 C-string:'UNK_0xe678'
//      UNK_0xe680  codep:0x744d parp:0xe680 size:0x0003 C-string:'UNK_0xe680'
//      UNK_0xe685  codep:0x744d parp:0xe685 size:0x0003 C-string:'UNK_0xe685'
//      UNK_0xe68a  codep:0x744d parp:0xe68a size:0x0003 C-string:'UNK_0xe68a'
//      UNK_0xe68f  codep:0x224c parp:0xe68f size:0x000c C-string:'UNK_0xe68f'
//      UNK_0xe69d  codep:0x224c parp:0xe69d size:0x000c C-string:'UNK_0xe69d'
//      UNK_0xe6ab  codep:0x224c parp:0xe6ab size:0x0012 C-string:'UNK_0xe6ab'
//      UNK_0xe6bf  codep:0x3b68 parp:0xe6bf size:0x0004 C-string:'UNK_0xe6bf'
//      UNK_0xe6c5  codep:0x1d29 parp:0xe6c5 size:0x0002 C-string:'UNK_0xe6c5'
//      UNK_0xe6c9  codep:0x1d29 parp:0xe6c9 size:0x0191 C-string:'UNK_0xe6c9'
//            SHOW  codep:0x1d29 parp:0xe863 size:0x0002 C-string:'SHOW'
//      UNK_0xe867  codep:0x224c parp:0xe867 size:0x004e C-string:'UNK_0xe867'
//      UNK_0xe8b7  codep:0x224c parp:0xe8b7 size:0x000e C-string:'UNK_0xe8b7'
//      UNK_0xe8c7  codep:0x224c parp:0xe8c7 size:0x0074 C-string:'UNK_0xe8c7'
//      UNK_0xe93d  codep:0x224c parp:0xe93d size:0x000c C-string:'UNK_0xe93d'
//      UNK_0xe94b  codep:0x224c parp:0xe94b size:0x0096 C-string:'UNK_0xe94b'
//      UNK_0xe9e3  codep:0x224c parp:0xe9e3 size:0x0028 C-string:'UNK_0xe9e3'
//      UNK_0xea0d  codep:0x224c parp:0xea0d size:0x000c C-string:'UNK_0xea0d'
//      UNK_0xea1b  codep:0x224c parp:0xea1b size:0x0012 C-string:'UNK_0xea1b'
//      UNK_0xea2f  codep:0x3b68 parp:0xea2f size:0x0004 C-string:'UNK_0xea2f'
//      UNK_0xea35  codep:0x224c parp:0xea35 size:0x0006 C-string:'UNK_0xea35'
//      UNK_0xea3d  codep:0x224c parp:0xea3d size:0x0008 C-string:'UNK_0xea3d'
//      UNK_0xea47  codep:0x224c parp:0xea47 size:0x001a C-string:'UNK_0xea47'
//      UNK_0xea63  codep:0x1d29 parp:0xea63 size:0x0002 C-string:'UNK_0xea63'
//      UNK_0xea67  codep:0x224c parp:0xea67 size:0x001f C-string:'UNK_0xea67'
//             VTB  codep:0xea73 parp:0xea8e size:0x0008 C-string:'VTB'
//        POSSESSI  codep:0xea73 parp:0xeaa3 size:0x0008 C-string:'POSSESSI'
//         PRONOUN  codep:0xea73 parp:0xeab7 size:0x0008 C-string:'PRONOUN'
//        DETERMIN  codep:0xea73 parp:0xeacc size:0x0008 C-string:'DETERMIN'
//        POSSES.P  codep:0xea73 parp:0xeae1 size:0x0008 C-string:'POSSES_dot_P'
//      UNK_0xeaeb  codep:0x224c parp:0xeaeb size:0x000e C-string:'UNK_0xeaeb'
//      UNK_0xeafb  codep:0x224c parp:0xeafb size:0x0050 C-string:'UNK_0xeafb'
//      UNK_0xeb4d  codep:0x224c parp:0xeb4d size:0x0010 C-string:'UNK_0xeb4d'
//      UNK_0xeb5f  codep:0x224c parp:0xeb5f size:0x000e C-string:'UNK_0xeb5f'
//      UNK_0xeb6f  codep:0x224c parp:0xeb6f size:0x0008 C-string:'UNK_0xeb6f'
//      UNK_0xeb79  codep:0x224c parp:0xeb79 size:0x0010 C-string:'UNK_0xeb79'
//      UNK_0xeb8b  codep:0x224c parp:0xeb8b size:0x0024 C-string:'UNK_0xeb8b'
//      UNK_0xebb1  codep:0x224c parp:0xebb1 size:0x001c C-string:'UNK_0xebb1'
//      UNK_0xebcf  codep:0x224c parp:0xebcf size:0x000a C-string:'UNK_0xebcf'
//      UNK_0xebdb  codep:0x224c parp:0xebdb size:0x005e C-string:'UNK_0xebdb'
//      UNK_0xec3b  codep:0x224c parp:0xec3b size:0x0016 C-string:'UNK_0xec3b'
//      UNK_0xec53  codep:0x224c parp:0xec53 size:0x0024 C-string:'UNK_0xec53'
//      UNK_0xec79  codep:0x224c parp:0xec79 size:0x0028 C-string:'UNK_0xec79'
//      UNK_0xeca3  codep:0x224c parp:0xeca3 size:0x0020 C-string:'UNK_0xeca3'
//      UNK_0xecc5  codep:0x224c parp:0xecc5 size:0x0036 C-string:'UNK_0xecc5'
//      UNK_0xecfd  codep:0x224c parp:0xecfd size:0x002c C-string:'UNK_0xecfd'
//      UNK_0xed2b  codep:0x224c parp:0xed2b size:0x002c C-string:'UNK_0xed2b'
//      UNK_0xed59  codep:0x224c parp:0xed59 size:0x003a C-string:'UNK_0xed59'
//      UNK_0xed95  codep:0x224c parp:0xed95 size:0x0056 C-string:'UNK_0xed95'
//      UNK_0xeded  codep:0x224c parp:0xeded size:0x0066 C-string:'UNK_0xeded'
//      UNK_0xee55  codep:0x1d29 parp:0xee55 size:0x0010 C-string:'UNK_0xee55'
//      UNK_0xee67  codep:0x1d29 parp:0xee67 size:0x0010 C-string:'UNK_0xee67'
//      UNK_0xee79  codep:0x1d29 parp:0xee79 size:0x0010 C-string:'UNK_0xee79'
//      UNK_0xee8b  codep:0x1d29 parp:0xee8b size:0x0010 C-string:'UNK_0xee8b'
//      UNK_0xee9d  codep:0x1d29 parp:0xee9d size:0x0002 C-string:'UNK_0xee9d'
//      UNK_0xeea1  codep:0x224c parp:0xeea1 size:0x0006 C-string:'UNK_0xeea1'
//      UNK_0xeea9  codep:0x1d29 parp:0xeea9 size:0x0002 C-string:'UNK_0xeea9'
//      UNK_0xeead  codep:0x224c parp:0xeead size:0x001c C-string:'UNK_0xeead'
//      UNK_0xeecb  codep:0x224c parp:0xeecb size:0x00b6 C-string:'UNK_0xeecb'
//      UNK_0xef83  codep:0x224c parp:0xef83 size:0x0042 C-string:'UNK_0xef83'
//        POSSIBIL  codep:0xe963 parp:0xefd2 size:0x0018 C-string:'POSSIBIL'
//      UNK_0xefec  codep:0x224c parp:0xefec size:0x0080 C-string:'UNK_0xefec'
//      UNK_0xf06e  codep:0x224c parp:0xf06e size:0x0056 C-string:'UNK_0xf06e'
//           SAYIT  codep:0x224c parp:0xf0ce size:0x0014 C-string:'SAYIT'
//         ANALOGS  codep:0xe963 parp:0xf0ee size:0x0076 C-string:'ANALOGS'
//      UNK_0xf166  codep:0x224c parp:0xf166 size:0x0084 C-string:'UNK_0xf166'
//      UNK_0xf1ec  codep:0x224c parp:0xf1ec size:0x0020 C-string:'UNK_0xf1ec'
//      UNK_0xf20e  codep:0x224c parp:0xf20e size:0x000e C-string:'UNK_0xf20e'
//      UNK_0xf21e  codep:0x224c parp:0xf21e size:0x0011 C-string:'UNK_0xf21e'
//      UNK_0xf231  codep:0x224c parp:0xf231 size:0x0012 C-string:'UNK_0xf231'
//      UNK_0xf245  codep:0x224c parp:0xf245 size:0x0034 C-string:'UNK_0xf245'
//      UNK_0xf27b  codep:0x224c parp:0xf27b size:0x001c C-string:'UNK_0xf27b'
//      UNK_0xf299  codep:0x224c parp:0xf299 size:0x0024 C-string:'UNK_0xf299'
//      UNK_0xf2bf  codep:0x224c parp:0xf2bf size:0x000e C-string:'UNK_0xf2bf'
//      UNK_0xf2cf  codep:0x224c parp:0xf2cf size:0x0011 C-string:'UNK_0xf2cf'
//        CLASS>DE  codep:0x4a4f parp:0xf2ed size:0x0024 C-string:'CLASS_gt_DE'
//        CLASS>TY  codep:0x4a4f parp:0xf31e size:0x0024 C-string:'CLASS_gt_TY'
//           ?TALK  codep:0x224c parp:0xf34c size:0x0000 C-string:'IsTALK'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_TEXTC_slash_L; // TEXTC/L
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_PLANTS; // PLANTS
extern const unsigned short int pp_ANIMALS; // ANIMALS
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_LINE_dash_COUNT; // LINE-COUNT
extern const unsigned short int pp_PM_dash_PTR; // PM-PTR
extern LoadDataType SHAPE; // SHAPE
extern LoadDataType RESEMBLES; // RESEMBLES
extern LoadDataType SPEC_dash_NAME; // SPEC-NAME
extern LoadDataType ART_dash_NAME; // ART-NAME
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType PHR_dash_CNT; // PHR-CNT
extern IFieldType PHRASE_dash_MEM; // PHRASE-MEM
void COUNT(); // COUNT
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void _co_(); // ,
void ALLOT(); // ALLOT
void CFA(); // CFA
void HERE(); // HERE
void QUIT(); // QUIT
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void RANGE(); // RANGE
void PICK(); // PICK
void ROLL(); // ROLL
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_eq_(); // D=
void _3_star_(); // 3*
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void GetRECORD(); // @RECORD
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void IFLD_at_(); // IFLD@
void IFIND(); // IFIND
void StoreCOLOR(); // !COLOR
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_ICON(); // POINT>ICON
void POS_dot_(); // POS.
void WLINE_dash_UP(); // WLINE-UP
void U_gt__do_(); // U>$
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void U_st_(); // U<
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void CI(); // CI
void CARDS(); // CARDS
void NICHE_dash_SE(); // NICHE-SE
void POSSESSI(); // POSSESSI
void PRONOUN(); // PRONOUN
void POSSIBIL(); // POSSIBIL
void ANALOGS(); // ANALOGS


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_PROBABLE = 0xe470; // PROBABLE size: 2
// {0x03, 0x9c}

const unsigned short int pp_UNK_0xe6c5 = 0xe6c5; // UNK_0xe6c5 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe6c9 = 0xe6c9; // UNK_0xe6c9 size: 401
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xd9, 0x01, 0x30, 0xc6, 0xd9, 0x01, 0x39, 0xdb, 0xd9, 0x01, 0x43, 0xf8, 0xd9, 0x01, 0x64, 0x1c, 0xda, 0x01, 0x09, 0x2c, 0xd9, 0x01, 0x12, 0x01, 0xd5, 0x01, 0x1b, 0x2e, 0xda, 0x01, 0x23, 0x5a, 0xd9, 0x01, 0x2c, 0x6e, 0xd9, 0x01, 0x35, 0x81, 0xd9, 0x01, 0x3d, 0x5a, 0xd5, 0x01, 0x46, 0xc6, 0xd9, 0x31, 0x35, 0x32, 0x30, 0x01, 0x05, 0x65, 0xd8, 0x01, 0x09, 0x75, 0xd8, 0x01, 0x0d, 0x8b, 0xd8, 0x01, 0x11, 0xc0, 0xd4, 0x01, 0x15, 0xa1, 0xd8, 0x01, 0x19, 0x18, 0xd4, 0x01, 0x1d, 0xb4, 0xd8, 0x01, 0x21, 0xdd, 0xd8, 0x01, 0x24, 0xf2, 0xd8, 0x01, 0x27, 0xd5, 0xd4, 0x01, 0x2a, 0x05, 0xd9, 0x01, 0x2d, 0x1a, 0xd9, 0x01, 0x30, 0x2f, 0xd4, 0x01, 0x33, 0x81, 0xd9, 0x01, 0x36, 0xb2, 0xd9, 0x01, 0x39, 0xc6, 0xd9, 0x01, 0x3d, 0xc7, 0xd8, 0x01, 0x41, 0xdb, 0xd9, 0x01, 0x64, 0xf8, 0xd9, 0x01, 0x07, 0xc6, 0xd3, 0x01, 0x0e, 0x28, 0xd8, 0x01, 0x15, 0xe0, 0xd3, 0x01, 0x1b, 0x00, 0xd4, 0x01, 0x21, 0x51, 0xd8, 0x01, 0x28, 0x1a, 0xd9, 0x01, 0x2f, 0x2f, 0xd4, 0x01, 0x35, 0x6e, 0xd9, 0x01, 0x3b, 0x81, 0xd9, 0x01, 0x42, 0x05, 0xd9, 0x01, 0x49, 0x3d, 0xd8, 0x01, 0x64, 0xd5, 0xd4, 0x01, 0x0a, 0x5a, 0xd9, 0x01, 0x14, 0x6e, 0xd9, 0x01, 0x1d, 0x98, 0xd9, 0x01, 0x26, 0xb2, 0xd9, 0x01, 0x30, 0x5a, 0xd5, 0x01, 0x39, 0xc6, 0xd9, 0x01, 0x43, 0xdb, 0xd9, 0x01, 0x64, 0xf8, 0xd9, 0x01, 0x07, 0xe9, 0xd7, 0x01, 0x0e, 0x96, 0xd3, 0x01, 0x15, 0x00, 0xd8, 0x01, 0x1b, 0x14, 0xd8, 0x01, 0x21, 0xdd, 0xd8, 0x01, 0x28, 0xf2, 0xd8, 0x01, 0x2f, 0x1a, 0xd9, 0x01, 0x35, 0x2f, 0xd4, 0x01, 0x3b, 0x5a, 0xd9, 0x01, 0x42, 0xf8, 0xd9, 0x01, 0x49, 0xaf, 0xd3, 0x01, 0x64, 0x6e, 0xd9, 0x01, 0x06, 0x59, 0xd7, 0x01, 0x0a, 0x73, 0xd7, 0x01, 0x0e, 0x86, 0xd7, 0x01, 0x13, 0x98, 0xd7, 0x01, 0x17, 0xac, 0xd7, 0x01, 0x1b, 0xbf, 0xd7, 0x01, 0x20, 0xd7, 0xd7, 0x01, 0x24, 0x00, 0xd8, 0x01, 0x28, 0x14, 0xd8, 0x01, 0x2d, 0xc7, 0xd8, 0x01, 0x31, 0x7c, 0xd3, 0x01, 0x35, 0xdd, 0xd8, 0x01, 0x3a, 0xf2, 0xd8, 0x01, 0x3f, 0x2f, 0xd4, 0x01, 0x43, 0x5a, 0xd9, 0x01, 0x64, 0xf8, 0xd9, 0x01, 0x09, 0x86, 0xd7, 0x01, 0x10, 0x98, 0xd7, 0x01, 0x18, 0xac, 0xd7, 0x01, 0x1f, 0xbf, 0xd7, 0x01, 0x27, 0xd7, 0xd7, 0x01, 0x2e, 0x14, 0xd8, 0x01, 0x36, 0xf2, 0xd8, 0x01, 0x3d, 0x5a, 0xd9, 0x01, 0x45, 0xdb, 0xd9, 0x01, 0x64, 0xf8, 0xd9, 0x01, 0x0a, 0xac, 0xd7, 0x01, 0x14, 0xbf, 0xd7, 0x01, 0x1d, 0xd7, 0xd7, 0x01, 0x26, 0x14, 0xd8, 0x01, 0x30, 0xb4, 0xd8, 0x01, 0x39, 0xb2, 0xd9, 0x01, 0x43, 0xc6, 0xd9, 0x01, 0x64, 0xdb}

const unsigned short int pp_SHOW = 0xe863; // SHOW size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xea63 = 0xea63; // UNK_0xea63 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xee55 = 0xee55; // UNK_0xee55 size: 16
// {0x00, 0xe5, 0x08, 0xe5, 0xc8, 0xe5, 0xd0, 0xe5, 0xd8, 0xe5, 0xe0, 0xe5, 0xe8, 0xe5, 0xf0, 0xe5}

const unsigned short int pp_UNK_0xee67 = 0xee67; // UNK_0xee67 size: 16
// {0x10, 0xe5, 0x18, 0xe5, 0x98, 0xe5, 0xa0, 0xe5, 0xa8, 0xe5, 0xb0, 0xe5, 0xb8, 0xe5, 0xc0, 0xe5}

const unsigned short int pp_UNK_0xee79 = 0xee79; // UNK_0xee79 size: 16
// {0x30, 0xe5, 0x38, 0xe5, 0x28, 0xe6, 0x30, 0xe6, 0x38, 0xe6, 0x40, 0xe6, 0x48, 0xe6, 0x50, 0xe6}

const unsigned short int pp_UNK_0xee8b = 0xee8b; // UNK_0xee8b size: 16
// {0x20, 0xe5, 0x28, 0xe5, 0xf8, 0xe5, 0x00, 0xe6, 0x08, 0xe6, 0x10, 0xe6, 0x18, 0xe6, 0x20, 0xe6}

const unsigned short int pp_UNK_0xee9d = 0xee9d; // UNK_0xee9d size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xeea9 = 0xeea9; // UNK_0xeea9 size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xe2c6 = 0xe2c6; // UNK_0xe2c6
const unsigned short int cc_UNK_0xe2ca = 0xe2ca; // UNK_0xe2ca
const unsigned short int cc_UNK_0xe2ce = 0xe2ce; // UNK_0xe2ce
const unsigned short int cc_UNK_0xe2d2 = 0xe2d2; // UNK_0xe2d2
const unsigned short int cc_UNK_0xe2d6 = 0xe2d6; // UNK_0xe2d6
const unsigned short int cc_UNK_0xe2da = 0xe2da; // UNK_0xe2da
const unsigned short int cc_UNK_0xe431 = 0xe431; // UNK_0xe431


// 0xe2c2: db 0x10 0x01 '  '

// ================================================
// 0xe2c4: WORD 'UNK_0xe2c6' codep=0x2214 parp=0xe2c6
// ================================================
// orphan
// 0xe2c6: dw 0x0020

// ================================================
// 0xe2c8: WORD 'UNK_0xe2ca' codep=0x2214 parp=0xe2ca
// ================================================
// orphan
// 0xe2ca: dw 0x0018

// ================================================
// 0xe2cc: WORD 'UNK_0xe2ce' codep=0x2214 parp=0xe2ce
// ================================================
// orphan
// 0xe2ce: dw 0x0043

// ================================================
// 0xe2d0: WORD 'UNK_0xe2d2' codep=0x2214 parp=0xe2d2
// ================================================
// 0xe2d2: dw 0x0044

// ================================================
// 0xe2d4: WORD 'UNK_0xe2d6' codep=0x2214 parp=0xe2d6
// ================================================
// orphan
// 0xe2d6: dw 0x001c

// ================================================
// 0xe2d8: WORD 'UNK_0xe2da' codep=0x2214 parp=0xe2da
// ================================================
// orphan
// 0xe2da: dw 0x0039

// ================================================
// 0xe2dc: WORD 'UNK_0xe2de' codep=0x224c parp=0xe2de
// ================================================
// orphan

void UNK_0xe2de() // UNK_0xe2de
{
  _2DUP(); // 2DUP
  IFIND(); // IFIND
}


// ================================================
// 0xe2e4: WORD 'UNK_0xe2e6' codep=0x224c parp=0xe2e6 params=0 returns=2
// ================================================

void UNK_0xe2e6() // UNK_0xe2e6
{
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  Push(Read16(pp_FILE_n_)); // FILE# @
}


// ================================================
// 0xe2f0: WORD 'UNK_0xe2f2' codep=0x224c parp=0xe2f2 params=2 returns=0
// ================================================

void UNK_0xe2f2() // UNK_0xe2f2
{
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
}


// ================================================
// 0xe2fc: WORD 'UNK_0xe2fe' codep=0x224c parp=0xe2fe params=2 returns=0
// ================================================
// orphan

void UNK_0xe2fe() // UNK_0xe2fe
{
  HERE(); // HERE
  Push(3);
  ALLOT(); // ALLOT
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xe308: WORD 'UNK_0xe30a' codep=0x224c parp=0xe30a
// ================================================
// orphan

void UNK_0xe30a() // UNK_0xe30a
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(0);
  UNK_0xe2fe(); // UNK_0xe2fe
  CODE(); // (;CODE) inlined assembler code
// 0xe312: call   1649
  SWAP(); // SWAP
  _3_star_(); // 3*
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe31d: WORD 'CARDS' codep=0xe312 parp=0xe327
// ================================================
// 0xe327: db 0x13 0x00 0x00 0xbb 0xc3 0x01 0xd0 0xc3 0x01 0xe2 0xc3 0x01 0x00 0xc4 0x01 0x12 0xc4 0x01 0x29 0xc4 0x01 0x40 0xc4 0x01 0x5c 0xc4 0x01 0x70 0xc4 0x01 0x85 0xc4 0x01 0x9b 0xc4 0x01 0xb1 0xc4 0x01 0xc8 0xc4 0x01 0xdd 0xc4 0x01 0xf3 0xc4 0x01 0x09 0xc5 0x01 0x20 0xc5 0x01 0x36 0xc5 0x01 0x51 0xc5 0x01 '                  )  @  \  p                          6  Q  '

// ================================================
// 0xe363: WORD 'NICHE-SE' codep=0xe312 parp=0xe370
// ================================================
// 0xe370: db 0x0e 0x00 0x00 0x61 0xc7 0x01 0x7d 0xc7 0x01 0x00 0x00 0x00 0x92 0xc7 0x01 0x00 0x00 0x00 0xa8 0xc7 0x01 0x00 0x00 0x00 0xc9 0xc7 0x01 0x00 0x00 0x00 0xdf 0xc7 0x01 0x00 0x00 0x00 0x00 0xc8 0x01 0x00 0x00 0x00 0x15 0xc8 0x01 '   a  }                                      '

// ================================================
// 0xe39d: WORD 'UNK_0xe39f' codep=0x224c parp=0xe39f params=2 returns=3
// ================================================

void UNK_0xe39f() // UNK_0xe39f
{
  unsigned short int a, b;
  UNK_0xe2e6(); // UNK_0xe2e6
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push((Read16(((Read16(0x63ef+PHR_dash_CNT.offset)&0xFF) - 1) + (0x63ef+PHRASE_dash_MEM.offset))&0xFF)==0x0053?1:0); // PHR-CNT<IFIELD> C@ 1- PHRASE-MEM<IFIELD> + C@ 0x0053 =
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==4?1:0); //  4 =
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  UNK_0xe2f2(); // UNK_0xe2f2
}


// ================================================
// 0xe3cd: WORD 'UNK_0xe3cf' codep=0x224c parp=0xe3cf params=2 returns=3
// ================================================

void UNK_0xe3cf() // UNK_0xe3cf
{
  unsigned short int a, b;
  UNK_0xe2e6(); // UNK_0xe2e6
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==5?1:0); //  5 =
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  UNK_0xe2f2(); // UNK_0xe2f2
}


// ================================================
// 0xe3e9: WORD 'UNK_0xe3eb' codep=0x224c parp=0xe3eb params=2 returns=3
// ================================================
// orphan

void UNK_0xe3eb() // UNK_0xe3eb
{
  unsigned short int a, b;
  UNK_0xe2e6(); // UNK_0xe2e6
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==3?1:0); //  3 =
  ICLOSE(); // ICLOSE
  Push(b); // R>
  Push(a); // R>
  UNK_0xe2f2(); // UNK_0xe2f2
}


// ================================================
// 0xe405: WORD 'UNK_0xe407' codep=0x224c parp=0xe407 params=0 returns=1
// ================================================
// orphan

void UNK_0xe407() // UNK_0xe407
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xe411: WORD 'UNK_0xe413' codep=0x224c parp=0xe413 params=0 returns=1
// ================================================

void UNK_0xe413() // UNK_0xe413
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xe41b: WORD 'UNK_0xe41d' codep=0x224c parp=0xe41d params=0 returns=1
// ================================================

void UNK_0xe41d() // UNK_0xe41d
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xe427: WORD 'UNK_0xe429' codep=0x224c parp=0xe429 params=3 returns=1
// ================================================
// orphan

void UNK_0xe429() // UNK_0xe429
{
  MIN(); // MIN
  MAX(); // MAX
}


// ================================================
// 0xe42f: WORD 'UNK_0xe431' codep=0x2214 parp=0xe431
// ================================================
// orphan
// 0xe431: dw 0x002e

// ================================================
// 0xe433: WORD 'UNK_0xe435' codep=0x224c parp=0xe435 params=3 returns=2
// ================================================

void UNK_0xe435() // UNK_0xe435
{
  Push(0xe431); // probable 'UNK_0xe431'
  Store_3(); // !_3
  Push(0xe431); // probable 'UNK_0xe431'
  CFA(); // CFA
  Push(0x2790); // probable '-TRAILING'
  Push(Pop() + 0x000e); //  0x000e +
  Store_3(); // !_3
  _dash_TRAILING(); // -TRAILING
  Push(0x099a); // probable 'BL'
  CFA(); // CFA
  Push(0x2790); // probable '-TRAILING'
  Push(Pop() + 0x000e); //  0x000e +
  Store_3(); // !_3
}


// ================================================
// 0xe463: WORD 'PROBABLE' codep=0x1d29 parp=0xe470
// ================================================
// 0xe470: db 0x03 0x9c '  '

// ================================================
// 0xe472: WORD 'UNK_0xe474' codep=0x224c parp=0xe474 params=1 returns=0
// ================================================

void UNK_0xe474() // UNK_0xe474
{
  Push(pp_PROBABLE); // PROBABLE
  Store_3(); // !_3
}


// ================================================
// 0xe47a: WORD 'UNK_0xe47c' codep=0x224c parp=0xe47c params=0 returns=1
// ================================================

void UNK_0xe47c() // UNK_0xe47c
{
  UNK_0xe41d(); // UNK_0xe41d
  Push(Read16(pp_PROBABLE)); // PROBABLE @
  _st_(); // <
}


// ================================================
// 0xe486: WORD 'UNK_0xe488' codep=0x224c parp=0xe488
// ================================================
// orphan

void UNK_0xe488() // UNK_0xe488
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(0);
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xe490: call   1649
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xe49d: WORD 'UNK_0xe49f' codep=0x73ea parp=0xe49f
// ================================================
// orphan
LoadDataType UNK_0xe49f = {STARIDX, 0x00, 0x03, 0x00, 0x0000};

// ================================================
// 0xe4a5: WORD 'HITS' codep=0x744d parp=0xe4ae
// ================================================
IFieldType HITS = {CREATUREIDX, 0x11, 0x01};

// ================================================
// 0xe4b1: WORD 'UNK_0xe4b3' codep=0x744d parp=0xe4b3
// ================================================
// orphan
IFieldType UNK_0xe4b3 = {REGIONSIDX, 0x0b, 0x02};

// ================================================
// 0xe4b6: WORD 'UNK_0xe4b8' codep=0x73ea parp=0xe4b8
// ================================================
LoadDataType UNK_0xe4b8 = {ELEMENTIDX, 0x00, 0x10, 0x17, 0x650a};

// ================================================
// 0xe4be: WORD 'UNK_0xe4c0' codep=0x73ea parp=0xe4c0
// ================================================
// orphan
LoadDataType UNK_0xe4c0 = {ARTIFACTIDX, 0x1d, 0x01, 0x1e, 0x652c};

// ================================================
// 0xe4c6: WORD 'UNK_0xe4c8' codep=0x73ea parp=0xe4c8
// ================================================
// orphan
LoadDataType UNK_0xe4c8 = {ARTIFACTIDX, 0x18, 0x01, 0x1e, 0x652c};

// ================================================
// 0xe4ce: WORD 'UNK_0xe4d0' codep=0x73ea parp=0xe4d0
// ================================================
LoadDataType UNK_0xe4d0 = {CREATUREIDX, 0x07, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4d6: WORD 'UNK_0xe4d8' codep=0x73ea parp=0xe4d8
// ================================================
// orphan
LoadDataType UNK_0xe4d8 = {CREATUREIDX, 0x0b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe4de: WORD 'UNK_0xe4e0' codep=0x73ea parp=0xe4e0
// ================================================
LoadDataType UNK_0xe4e0 = {CREATUREIDX, 0x0c, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe4e6: WORD 'UNK_0xe4e8' codep=0x73ea parp=0xe4e8
// ================================================
// orphan
LoadDataType UNK_0xe4e8 = {CREATUREIDX, 0x0d, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4ee: WORD 'UNK_0xe4f0' codep=0x73ea parp=0xe4f0
// ================================================
// orphan
LoadDataType UNK_0xe4f0 = {CREATUREIDX, 0x10, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4f6: WORD 'UNK_0xe4f8' codep=0x73ea parp=0xe4f8
// ================================================
LoadDataType UNK_0xe4f8 = {CREATUREIDX, 0x13, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe4fe: WORD 'UNK_0xe500' codep=0x73ea parp=0xe500
// ================================================
// orphan
LoadDataType UNK_0xe500 = {CREATUREIDX, 0x16, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe506: WORD 'UNK_0xe508' codep=0x73ea parp=0xe508
// ================================================
// orphan
LoadDataType UNK_0xe508 = {CREATUREIDX, 0x19, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe50e: WORD 'UNK_0xe510' codep=0x73ea parp=0xe510
// ================================================
// orphan
LoadDataType UNK_0xe510 = {CREATUREIDX, 0x1a, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe516: WORD 'UNK_0xe518' codep=0x73ea parp=0xe518
// ================================================
// orphan
LoadDataType UNK_0xe518 = {CREATUREIDX, 0x1d, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe51e: WORD 'UNK_0xe520' codep=0x73ea parp=0xe520
// ================================================
// orphan
LoadDataType UNK_0xe520 = {CREATUREIDX, 0x1e, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe526: WORD 'UNK_0xe528' codep=0x73ea parp=0xe528
// ================================================
// orphan
LoadDataType UNK_0xe528 = {CREATUREIDX, 0x21, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe52e: WORD 'UNK_0xe530' codep=0x73ea parp=0xe530
// ================================================
// orphan
LoadDataType UNK_0xe530 = {CREATUREIDX, 0x22, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe536: WORD 'UNK_0xe538' codep=0x73ea parp=0xe538
// ================================================
// orphan
LoadDataType UNK_0xe538 = {CREATUREIDX, 0x25, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe53e: WORD 'UNK_0xe540' codep=0x73ea parp=0xe540
// ================================================
LoadDataType UNK_0xe540 = {CREATUREIDX, 0x26, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe546: WORD 'UNK_0xe548' codep=0x73ea parp=0xe548
// ================================================
LoadDataType UNK_0xe548 = {CREATUREIDX, 0x29, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe54e: WORD 'UNK_0xe550' codep=0x73ea parp=0xe550
// ================================================
// orphan
LoadDataType UNK_0xe550 = {CREATUREIDX, 0x30, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe556: WORD 'UNK_0xe558' codep=0x73ea parp=0xe558
// ================================================
// orphan
LoadDataType UNK_0xe558 = {CREATUREIDX, 0x31, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe55e: WORD 'UNK_0xe560' codep=0x73ea parp=0xe560
// ================================================
// orphan
LoadDataType UNK_0xe560 = {CREATUREIDX, 0x32, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe566: WORD 'UNK_0xe568' codep=0x73ea parp=0xe568
// ================================================
LoadDataType UNK_0xe568 = {CREATUREIDX, 0x33, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe56e: WORD 'UNK_0xe570' codep=0x73ea parp=0xe570
// ================================================
LoadDataType UNK_0xe570 = {CREATUREIDX, 0x36, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe576: WORD 'UNK_0xe578' codep=0x73ea parp=0xe578
// ================================================
LoadDataType UNK_0xe578 = {CREATUREIDX, 0x37, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe57e: WORD 'UNK_0xe580' codep=0x73ea parp=0xe580
// ================================================
LoadDataType UNK_0xe580 = {CREATUREIDX, 0x38, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe586: WORD 'UNK_0xe588' codep=0x73ea parp=0xe588
// ================================================
// orphan
LoadDataType UNK_0xe588 = {CREATUREIDX, 0x3a, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe58e: WORD 'UNK_0xe590' codep=0x73ea parp=0xe590
// ================================================
LoadDataType UNK_0xe590 = {CREATUREIDX, 0x3c, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe596: WORD 'UNK_0xe598' codep=0x73ea parp=0xe598
// ================================================
// orphan
LoadDataType UNK_0xe598 = {CREATUREIDX, 0x3f, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe59e: WORD 'UNK_0xe5a0' codep=0x73ea parp=0xe5a0
// ================================================
// orphan
LoadDataType UNK_0xe5a0 = {CREATUREIDX, 0x42, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5a6: WORD 'UNK_0xe5a8' codep=0x73ea parp=0xe5a8
// ================================================
// orphan
LoadDataType UNK_0xe5a8 = {CREATUREIDX, 0x45, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5ae: WORD 'UNK_0xe5b0' codep=0x73ea parp=0xe5b0
// ================================================
// orphan
LoadDataType UNK_0xe5b0 = {CREATUREIDX, 0x48, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5b6: WORD 'UNK_0xe5b8' codep=0x73ea parp=0xe5b8
// ================================================
// orphan
LoadDataType UNK_0xe5b8 = {CREATUREIDX, 0x4b, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5be: WORD 'UNK_0xe5c0' codep=0x73ea parp=0xe5c0
// ================================================
// orphan
LoadDataType UNK_0xe5c0 = {CREATUREIDX, 0x4e, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5c6: WORD 'UNK_0xe5c8' codep=0x73ea parp=0xe5c8
// ================================================
// orphan
LoadDataType UNK_0xe5c8 = {CREATUREIDX, 0x51, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5ce: WORD 'UNK_0xe5d0' codep=0x73ea parp=0xe5d0
// ================================================
// orphan
LoadDataType UNK_0xe5d0 = {CREATUREIDX, 0x54, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5d6: WORD 'UNK_0xe5d8' codep=0x73ea parp=0xe5d8
// ================================================
// orphan
LoadDataType UNK_0xe5d8 = {CREATUREIDX, 0x57, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5de: WORD 'UNK_0xe5e0' codep=0x73ea parp=0xe5e0
// ================================================
// orphan
LoadDataType UNK_0xe5e0 = {CREATUREIDX, 0x5a, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5e6: WORD 'UNK_0xe5e8' codep=0x73ea parp=0xe5e8
// ================================================
// orphan
LoadDataType UNK_0xe5e8 = {CREATUREIDX, 0x5d, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5ee: WORD 'UNK_0xe5f0' codep=0x73ea parp=0xe5f0
// ================================================
// orphan
LoadDataType UNK_0xe5f0 = {CREATUREIDX, 0x60, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5f6: WORD 'UNK_0xe5f8' codep=0x73ea parp=0xe5f8
// ================================================
// orphan
LoadDataType UNK_0xe5f8 = {CREATUREIDX, 0x63, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe5fe: WORD 'UNK_0xe600' codep=0x73ea parp=0xe600
// ================================================
// orphan
LoadDataType UNK_0xe600 = {CREATUREIDX, 0x66, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe606: WORD 'UNK_0xe608' codep=0x73ea parp=0xe608
// ================================================
// orphan
LoadDataType UNK_0xe608 = {CREATUREIDX, 0x69, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe60e: WORD 'UNK_0xe610' codep=0x73ea parp=0xe610
// ================================================
// orphan
LoadDataType UNK_0xe610 = {CREATUREIDX, 0x6c, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe616: WORD 'UNK_0xe618' codep=0x73ea parp=0xe618
// ================================================
// orphan
LoadDataType UNK_0xe618 = {CREATUREIDX, 0x6f, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe61e: WORD 'UNK_0xe620' codep=0x73ea parp=0xe620
// ================================================
// orphan
LoadDataType UNK_0xe620 = {CREATUREIDX, 0x72, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe626: WORD 'UNK_0xe628' codep=0x73ea parp=0xe628
// ================================================
// orphan
LoadDataType UNK_0xe628 = {CREATUREIDX, 0x75, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe62e: WORD 'UNK_0xe630' codep=0x73ea parp=0xe630
// ================================================
// orphan
LoadDataType UNK_0xe630 = {CREATUREIDX, 0x78, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe636: WORD 'UNK_0xe638' codep=0x73ea parp=0xe638
// ================================================
// orphan
LoadDataType UNK_0xe638 = {CREATUREIDX, 0x7b, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe63e: WORD 'UNK_0xe640' codep=0x73ea parp=0xe640
// ================================================
// orphan
LoadDataType UNK_0xe640 = {CREATUREIDX, 0x7e, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe646: WORD 'UNK_0xe648' codep=0x73ea parp=0xe648
// ================================================
// orphan
LoadDataType UNK_0xe648 = {CREATUREIDX, 0x81, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe64e: WORD 'UNK_0xe650' codep=0x73ea parp=0xe650
// ================================================
// orphan
LoadDataType UNK_0xe650 = {CREATUREIDX, 0x84, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe656: WORD 'UNK_0xe658' codep=0x73ea parp=0xe658
// ================================================
// orphan
LoadDataType UNK_0xe658 = {CREATUREIDX, 0x87, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe65e: WORD 'UNK_0xe660' codep=0x73ea parp=0xe660
// ================================================
// orphan
LoadDataType UNK_0xe660 = {CREATUREIDX, 0x8a, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe666: WORD 'UNK_0xe668' codep=0x73ea parp=0xe668
// ================================================
// orphan
LoadDataType UNK_0xe668 = {CREATUREIDX, 0x8d, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe66e: WORD 'UNK_0xe670' codep=0x73ea parp=0xe670
// ================================================
// orphan
LoadDataType UNK_0xe670 = {CREATUREIDX, 0x90, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xe676: WORD 'UNK_0xe678' codep=0x73ea parp=0xe678
// ================================================
LoadDataType UNK_0xe678 = {CREATUREIDX, 0x95, 0x03, 0x9c, 0x69d8};

// ================================================
// 0xe67e: WORD 'UNK_0xe680' codep=0x744d parp=0xe680
// ================================================
IFieldType UNK_0xe680 = {CREATUREIDX, 0x12, 0x01};

// ================================================
// 0xe683: WORD 'UNK_0xe685' codep=0x744d parp=0xe685
// ================================================
IFieldType UNK_0xe685 = {CREATUREIDX, 0x15, 0x01};

// ================================================
// 0xe688: WORD 'UNK_0xe68a' codep=0x744d parp=0xe68a
// ================================================
IFieldType UNK_0xe68a = {CREATUREIDX, 0x1b, 0x01};

// ================================================
// 0xe68d: WORD 'UNK_0xe68f' codep=0x224c parp=0xe68f params=1 returns=2
// ================================================

void UNK_0xe68f() // UNK_0xe68f
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  PICK(); // PICK
  Push(a); // R>
  PICK(); // PICK
}


// ================================================
// 0xe69b: WORD 'UNK_0xe69d' codep=0x224c parp=0xe69d params=2 returns=2
// ================================================

void UNK_0xe69d() // UNK_0xe69d
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xe6a9: WORD 'UNK_0xe6ab' codep=0x224c parp=0xe6ab params=0 returns=0
// ================================================
// orphan

void UNK_0xe6ab() // UNK_0xe6ab
{
  Push(Read16(cc_UNK_0xe2d2)); // UNK_0xe2d2
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xe6bd: WORD 'UNK_0xe6bf' codep=0x3b68 parp=0xe6bf
// ================================================
// 0xe6bf: dw 0x0001 0xdb28

// ================================================
// 0xe6c3: WORD 'UNK_0xe6c5' codep=0x1d29 parp=0xe6c5
// ================================================
// 0xe6c5: db 0x3a 0x20 ': '

// ================================================
// 0xe6c7: WORD 'UNK_0xe6c9' codep=0x1d29 parp=0xe6c9
// ================================================
// 0xe6c9: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xd9 0x01 0x30 0xc6 0xd9 0x01 0x39 0xdb 0xd9 0x01 0x43 0xf8 0xd9 0x01 0x64 0x1c 0xda 0x01 0x09 0x2c 0xd9 0x01 0x12 0x01 0xd5 0x01 0x1b 0x2e 0xda 0x01 0x23 0x5a 0xd9 0x01 0x2c 0x6e 0xd9 0x01 0x35 0x81 0xd9 0x01 0x3d 0x5a 0xd5 0x01 0x46 0xc6 0xd9 0x31 0x35 0x32 0x30 0x01 0x05 0x65 0xd8 0x01 0x09 0x75 0xd8 0x01 0x0d 0x8b 0xd8 0x01 0x11 0xc0 0xd4 0x01 0x15 0xa1 0xd8 0x01 0x19 0x18 0xd4 0x01 0x1d 0xb4 0xd8 0x01 0x21 0xdd 0xd8 0x01 0x24 0xf2 0xd8 0x01 0x27 0xd5 0xd4 0x01 0x2a 0x05 0xd9 0x01 0x2d 0x1a 0xd9 0x01 0x30 0x2f 0xd4 0x01 0x33 0x81 0xd9 0x01 0x36 0xb2 0xd9 0x01 0x39 0xc6 0xd9 0x01 0x3d 0xc7 0xd8 0x01 0x41 0xdb 0xd9 0x01 0x64 0xf8 0xd9 0x01 0x07 0xc6 0xd3 0x01 0x0e 0x28 0xd8 0x01 0x15 0xe0 0xd3 0x01 0x1b 0x00 0xd4 0x01 0x21 0x51 0xd8 0x01 0x28 0x1a 0xd9 0x01 0x2f 0x2f 0xd4 0x01 0x35 0x6e 0xd9 0x01 0x3b 0x81 0xd9 0x01 0x42 0x05 0xd9 0x01 0x49 0x3d 0xd8 0x01 0x64 0xd5 0xd4 0x01 0x0a 0x5a 0xd9 0x01 0x14 0x6e 0xd9 0x01 0x1d 0x98 0xd9 0x01 0x26 0xb2 0xd9 0x01 0x30 0x5a 0xd5 0x01 0x39 0xc6 0xd9 0x01 0x43 0xdb 0xd9 0x01 0x64 0xf8 0xd9 0x01 0x07 0xe9 0xd7 0x01 0x0e 0x96 0xd3 0x01 0x15 0x00 0xd8 0x01 0x1b 0x14 0xd8 0x01 0x21 0xdd 0xd8 0x01 0x28 0xf2 0xd8 0x01 0x2f 0x1a 0xd9 0x01 0x35 0x2f 0xd4 0x01 0x3b 0x5a 0xd9 0x01 0x42 0xf8 0xd9 0x01 0x49 0xaf 0xd3 0x01 0x64 0x6e 0xd9 0x01 0x06 0x59 0xd7 0x01 0x0a 0x73 0xd7 0x01 0x0e 0x86 0xd7 0x01 0x13 0x98 0xd7 0x01 0x17 0xac 0xd7 0x01 0x1b 0xbf 0xd7 0x01 0x20 0xd7 0xd7 0x01 0x24 0x00 0xd8 0x01 0x28 0x14 0xd8 0x01 0x2d 0xc7 0xd8 0x01 0x31 0x7c 0xd3 0x01 0x35 0xdd 0xd8 0x01 0x3a 0xf2 0xd8 0x01 0x3f 0x2f 0xd4 0x01 0x43 0x5a 0xd9 0x01 0x64 0xf8 0xd9 0x01 0x09 0x86 0xd7 0x01 0x10 0x98 0xd7 0x01 0x18 0xac 0xd7 0x01 0x1f 0xbf 0xd7 0x01 0x27 0xd7 0xd7 0x01 0x2e 0x14 0xd8 0x01 0x36 0xf2 0xd8 0x01 0x3d 0x5a 0xd9 0x01 0x45 0xdb 0xd9 0x01 0x64 0xf8 0xd9 0x01 0x0a 0xac 0xd7 0x01 0x14 0xbf 0xd7 0x01 0x1d 0xd7 0xd7 0x01 0x26 0x14 0xd8 0x01 0x30 0xb4 0xd8 0x01 0x39 0xb2 0xd9 0x01 0x43 0xc6 0xd9 0x01 0x64 0xdb ':  ALLOT   0   9   C   d    ,       .  #Z  ,n  5   =Z  F  1520  e   u                      !   $   '   *   -   0/  3   6   9   =   A   d        (          !Q  (   //  5n  ;   B   I=  d    Z   n      &   0Z  9   C   d                   !   (   /   5/  ;Z  B   I   dn   Y   s                      $   (   -   1|  5   :   ?/  CZ  d                   '   .   6   =Z  E   d               &   0   9   C   d '

// ================================================
// 0xe85a: WORD 'SHOW' codep=0x1d29 parp=0xe863
// ================================================
// 0xe863: db 0x00 0x00 '  '

// ================================================
// 0xe865: WORD 'UNK_0xe867' codep=0x224c parp=0xe867 params=0 returns=0
// ================================================

void UNK_0xe867() // UNK_0xe867
{
  unsigned short int i, imax;
  Push(pp_UNK_0xe6c9); // UNK_0xe6c9
  Push(pp_PM_dash_PTR); // PM-PTR
  Store_3(); // !_3
  Push(Read16(pp_LINE_dash_COUNT)); // LINE-COUNT @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_PM_dash_PTR)); // PM-PTR @
    Push(Read16(pp_UNK_0xe6c5)); // UNK_0xe6c5 @
    Push(Read16(pp_WLINES) - 1); // WLINES @ 1-
    _gt_(); // >
    if (Pop() != 0)
    {
      Push(0x03e8);
      MS(); // MS
    }
    Push(Read16(pp_SHOW)); // SHOW @
    if (Pop() != 0)
    {
      COUNT(); // COUNT
      Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    } else
    {
      WLINE_dash_UP(); // WLINE-UP
    }
    Push(Read16(cc_TEXTC_slash_L) + 1); // TEXTC/L 1+
    Push(pp_PM_dash_PTR); // PM-PTR
    _plus__ex__2(); // +!_2
    Push(1);
    Push(pp_UNK_0xe6c5); // UNK_0xe6c5
    _plus__ex__2(); // +!_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe8b5: WORD 'UNK_0xe8b7' codep=0x224c parp=0xe8b7 params=2 returns=1
// ================================================

void UNK_0xe8b7() // UNK_0xe8b7
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push((Pop()==Pop())?1:0); // =
  a = Pop(); // >R
  _gt_(); // >
  Push(Pop() | a); //  R> OR
}


// ================================================
// 0xe8c5: WORD 'UNK_0xe8c7' codep=0x224c parp=0xe8c7 params=1 returns=0
// ================================================

void UNK_0xe8c7() // UNK_0xe8c7
{
  unsigned short int a;
  Push(Read16(pp_PM_dash_PTR) - pp_UNK_0xe6c9); // PM-PTR @ UNK_0xe6c9 -
  Push(Read16(cc_TEXTC_slash_L) + 1); // TEXTC/L 1+
  _slash_(); // /
  Push(Pop() * (Read16(cc_TEXTC_slash_L) + 1) + pp_UNK_0xe6c9); //  TEXTC/L 1+ * UNK_0xe6c9 +
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(3);
  PICK(); // PICK
  Push(Read16(regsp)); // DUP
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Pop() + 2); //  2+
  }
  Push(Pop() + Pop()); // +
  Push(Read16(cc_TEXTC_slash_L)); // TEXTC/L
  UNK_0xe8b7(); // UNK_0xe8b7
  if (Pop() != 0)
  {
    Push(Pop() + (Read16(cc_TEXTC_slash_L) + 1)); //  TEXTC/L 1+ +
    Push(Read16(regsp)); // DUP
    Push(0);
    SWAP(); // SWAP
    C_ex_(); // C!
    Push(Read16(regsp)); // DUP
    Push(Pop() + 1); //  1+
    Push(pp_PM_dash_PTR); // PM-PTR
    Store_3(); // !_3
    Push(1);
    Push(pp_LINE_dash_COUNT); // LINE-COUNT
    _plus__ex__2(); // +!_2
  }
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(3);
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Read16(pp_PM_dash_PTR)); // PM-PTR @
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(a); // R>
  Push(pp_PM_dash_PTR); // PM-PTR
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe93b: WORD 'UNK_0xe93d' codep=0x224c parp=0xe93d params=1 returns=2
// ================================================
// orphan

void UNK_0xe93d() // UNK_0xe93d
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop()) + 2); //  @ 2+
  RANGE(); // RANGE
  Push(Pop() + 2); //  2+
}


// ================================================
// 0xe949: WORD 'UNK_0xe94b' codep=0x224c parp=0xe94b
// ================================================
// orphan

void UNK_0xe94b() // UNK_0xe94b
{
  unsigned short int i, imax, a;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  Push(Pop() * 6); //  6 *
  Push(Read16(regsp)); // DUP
  _co_(); // ,
  HERE(); // HERE
  OVER(); // OVER
  ALLOT(); // ALLOT
  SWAP(); // SWAP
  Push(0);
  FILL_1(); // FILL_1
  CODE(); // (;CODE) inlined assembler code
// 0xe963: call   1649
  Push(0);
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  Push(4);
  ROLL(); // ROLL
  UNK_0xe93d(); // UNK_0xe93d

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _2_at_(); // 2@
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    a = Pop(); // >R
    Push(3);
    PICK(); // PICK
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() & a); //  R> AND
    if (Pop() != 0)
    {
      Push(i); // I
      Push(4);
      ROLL(); // ROLL
      Pop(); // DROP
      ROT(); // ROT
      ROT(); // ROT
      imax = i; // LEAVE
    }
    Push(6);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); Pop(); // 2DROP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(Pop() + 4)); //  4 + @
    return;
  }
  PRINT("INDEX NOT IN PROBABILITY ARRAY! ", 32); // (.")
  UNRAVEL(); // UNRAVEL
  QUIT(); // QUIT
}


// ================================================
// 0xe9e1: WORD 'UNK_0xe9e3' codep=0x224c parp=0xe9e3 params=2 returns=2
// ================================================

void UNK_0xe9e3() // UNK_0xe9e3
{
  unsigned short int a;
  do
  {
    OVER(); // OVER
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    Push(Read16(regsp)); // DUP
    Push(!(Pop()==0x0064?1:0)); //  0x0064 = NOT
    a = Pop(); // >R
    _gt_(); // >
    Push(Pop() & a); //  R> AND
    if (Pop() == 0) return;
    Push((Pop() + 1) + 3); //  1+ 3 +
  } while(1);
}


// ================================================
// 0xea0b: WORD 'UNK_0xea0d' codep=0x224c parp=0xea0d params=2 returns=2
// ================================================

void UNK_0xea0d() // UNK_0xea0d
{
  UNK_0xe9e3(); // UNK_0xe9e3
  Push(Pop() + 1); //  1+
  _1_dot_5_at_(); // 1.5@
  ROT(); // ROT
  Pop(); // DROP
}


// ================================================
// 0xea19: WORD 'UNK_0xea1b' codep=0x224c parp=0xea1b params=1 returns=1
// ================================================

void UNK_0xea1b() // UNK_0xea1b
{
  Push(4);
  MOD(); // MOD
  if (Pop() != 0)
  {
    Push(pp_PLANTS); // PLANTS
    return;
  }
  Push(pp_ANIMALS); // ANIMALS
}


// ================================================
// 0xea2d: WORD 'UNK_0xea2f' codep=0x3b68 parp=0xea2f
// ================================================
// 0xea2f: dw 0x0001 0xdcac

// ================================================
// 0xea33: WORD 'UNK_0xea35' codep=0x224c parp=0xea35 params=0 returns=2
// ================================================

void UNK_0xea35() // UNK_0xea35
{
  Push(-1);
  Push(-1);
}


// ================================================
// 0xea3b: WORD 'UNK_0xea3d' codep=0x224c parp=0xea3d params=2 returns=3
// ================================================

void UNK_0xea3d() // UNK_0xea3d
{
  _2DUP(); // 2DUP
  UNK_0xea35(); // UNK_0xea35
  D_eq_(); // D=
}


// ================================================
// 0xea45: WORD 'UNK_0xea47' codep=0x224c parp=0xea47 params=0 returns=0
// ================================================

void UNK_0xea47() // UNK_0xea47
{
  Push(2);
  UNK_0xe474(); // UNK_0xe474
  UNK_0xe47c(); // UNK_0xe47c
  if (Pop() == 0) return;
  Push2Words("UNK_0xe6bf");
  Push(1);
  Push(0x0014);
  RRND(); // RRND
  CARDS(); // CARDS
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xea61: WORD 'UNK_0xea63' codep=0x1d29 parp=0xea63
// ================================================
// 0xea63: db 0x00 0x00 '  '

// ================================================
// 0xea65: WORD 'UNK_0xea67' codep=0x224c parp=0xea67
// ================================================
// orphan

void UNK_0xea67() // UNK_0xea67
{
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  _co_(); // ,
  _co_(); // ,
  _co_(); // ,
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xea73: call   1649
  Push(Read16(pp_UNK_0xea63)); // UNK_0xea63 @
  if (Pop() != 0)
  {
    Push(Pop() + 4); //  4 +
  }
  _2_at_(); // 2@
}


// ================================================
// 0xea86: WORD 'VTB' codep=0xea73 parp=0xea8e
// ================================================
// 0xea8e: db 0x01 0x00 0x53 0xda 0x01 0x00 0x62 0xda '  S   b '

// ================================================
// 0xea96: WORD 'POSSESSI' codep=0xea73 parp=0xeaa3
// ================================================
// 0xeaa3: db 0x01 0x00 0xb2 0xda 0x01 0x00 0xa1 0xda '        '

// ================================================
// 0xeaab: WORD 'PRONOUN' codep=0xea73 parp=0xeab7
// ================================================
// 0xeab7: db 0x01 0x00 0x92 0xda 0x01 0x00 0x81 0xda '        '

// ================================================
// 0xeabf: WORD 'DETERMIN' codep=0xea73 parp=0xeacc
// ================================================
// 0xeacc: db 0x01 0x00 0xdf 0xda 0x01 0x00 0xed 0xda '        '

// ================================================
// 0xead4: WORD 'POSSES.P' codep=0xea73 parp=0xeae1
// ================================================
// 0xeae1: db 0x01 0x00 0x90 0xdb 0x01 0x00 0x7e 0xdb '      ~ '

// ================================================
// 0xeae9: WORD 'UNK_0xeaeb' codep=0x224c parp=0xeaeb params=1 returns=1
// ================================================

void UNK_0xeaeb() // UNK_0xeaeb
{
  Push(Read16(regsp)); // DUP
  Push(Pop() - 1); //  1-
  Push(0);
  MAX(); // MAX
  Push(pp_UNK_0xea63); // UNK_0xea63
  Store_3(); // !_3
}


// ================================================
// 0xeaf9: WORD 'UNK_0xeafb' codep=0x224c parp=0xeafb params=2 returns=3
// ================================================

void UNK_0xeafb() // UNK_0xeafb
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push2Words("0.");
  D_eq_(); // D=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    _gt_C_plus_S(); // >C+S
    Push(Read16(0x63ef+PHRASE_dash_MEM.offset)&0xFF); // PHRASE-MEM<IFIELD> C@
    a = Pop(); // >R
    Push(Read16(a)); // R@
    Push(Pop()==0x0041?1:0); //  0x0041 =
    Push(Read16(a)); // R@
    Push(Pop()==0x0045?1:0); //  0x0045 =
    Push(Read16(a)); // R@
    Push(Pop()==0x0049?1:0); //  0x0049 =
    Push(Read16(a)); // R@
    Push((Pop()==0x004f?1:0) | (a==0x0055?1:0)); //  0x004f = R> 0x0055 = OR
    Push(Pop() | Pop()); // OR
    Push(Pop() | Pop()); // OR
    Push(Pop() | Pop()); // OR
    ICLOSE(); // ICLOSE
    return;
  }
  Push(0);
}


// ================================================
// 0xeb4b: WORD 'UNK_0xeb4d' codep=0x224c parp=0xeb4d params=0 returns=0
// ================================================

void UNK_0xeb4d() // UNK_0xeb4d
{
  UNK_0xe413(); // UNK_0xe413
  if (Pop() == 0) return;
  Push2Words("UNK_0xe6bf");
  Push(0xdcba); Push(0x0001);
}


// ================================================
// 0xeb5d: WORD 'UNK_0xeb5f' codep=0x224c parp=0xeb5f params=2 returns=0
// ================================================

void UNK_0xeb5f() // UNK_0xeb5f
{
  UNK_0xe69d(); // UNK_0xe69d
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push2Words("UNK_0xe6bf");
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xeb6d: WORD 'UNK_0xeb6f' codep=0x224c parp=0xeb6f params=2 returns=3
// ================================================

void UNK_0xeb6f() // UNK_0xeb6f
{
  _2DUP(); // 2DUP
  Push2Words("UNK_0xea2f");
  D_eq_(); // D=
}


// ================================================
// 0xeb77: WORD 'UNK_0xeb79' codep=0x224c parp=0xeb79 params=2 returns=2
// ================================================

void UNK_0xeb79() // UNK_0xeb79
{
  UNK_0xeb6f(); // UNK_0xeb6f
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(0xdbc3); Push(0x0001);
}


// ================================================
// 0xeb89: WORD 'UNK_0xeb8b' codep=0x224c parp=0xeb8b params=2 returns=2
// ================================================

void UNK_0xeb8b() // UNK_0xeb8b
{
  unsigned short int a;
  UNK_0xe3cf(); // UNK_0xe3cf
  Push(Pop()==0?1:0); //  0=
  a = Pop(); // >R
  UNK_0xe39f(); // UNK_0xe39f
  Push((Pop()==0?1:0) & a); //  0= R> AND
  if (Pop() == 0) return;
  Push(Read16(pp_UNK_0xea63)); // UNK_0xea63 @
  if (Pop() == 0) return;
  Push(0xdac2); Push(0x0001);
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xebaf: WORD 'UNK_0xebb1' codep=0x224c parp=0xebb1 params=2 returns=6
// ================================================

void UNK_0xebb1() // UNK_0xebb1
{
  UNK_0xeafb(); // UNK_0xeafb
  if (Pop() != 0)
  {
    Push(0xdad0); Push(0x0001);
  } else
  {
    Push(0xdadf); Push(0x0001);
  }
  Push2Words("UNK_0xe6bf");
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xebcd: WORD 'UNK_0xebcf' codep=0x224c parp=0xebcf params=2 returns=2
// ================================================

void UNK_0xebcf() // UNK_0xebcf
{
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
  Push(Read16(0x63ef+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
}


// ================================================
// 0xebd9: WORD 'UNK_0xebdb' codep=0x224c parp=0xebdb params=2 returns=2
// ================================================

void UNK_0xebdb() // UNK_0xebdb
{
  UNK_0xeb6f(); // UNK_0xeb6f
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;

  label4:
  Push2Words("UNK_0xea2f");
  _2OVER(); // 2OVER
  D_dash_(); // D-
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xea3d(); // UNK_0xea3d
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    U_gt__do_(); // U>$
    UNK_0xe8c7(); // UNK_0xe8c7
  } else
  {
    CI(); // CI
    Push2Words("UNK_0xe6bf");
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Push(!((Read16(Read16(pp_PM_dash_PTR))&0xFF)==0?1:0)); // PM-PTR @ C@ 0= NOT
      if (Pop() != 0)
      {
        UNK_0xebcf(); // UNK_0xebcf
        UNK_0xe8c7(); // UNK_0xe8c7
        ICLOSE(); // ICLOSE
      } else
      {
        Pop(); Pop(); // 2DROP
      }
    } else
    {
      UNK_0xebcf(); // UNK_0xebcf
      UNK_0xe8c7(); // UNK_0xe8c7
      ICLOSE(); // ICLOSE
    }
  }
  goto label4;

  label1:
  UNK_0xebcf(); // UNK_0xebcf
  UNK_0xe8c7(); // UNK_0xe8c7
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xec39: WORD 'UNK_0xec3b' codep=0x224c parp=0xec3b params=0 returns=0
// ================================================

void UNK_0xec3b() // UNK_0xec3b
{
  Push(1);
  Push(pp_LINE_dash_COUNT); // LINE-COUNT
  Store_3(); // !_3
  Push(0);
  Push(pp_UNK_0xe6c9); // UNK_0xe6c9
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1); //  1+
  Push(pp_PM_dash_PTR); // PM-PTR
  Store_3(); // !_3
  C_ex_(); // C!
}


// ================================================
// 0xec51: WORD 'UNK_0xec53' codep=0x224c parp=0xec53 params=0 returns=0
// ================================================

void UNK_0xec53() // UNK_0xec53
{
  unsigned short int a, b;
  Push(Read16(cc_TEXTC_slash_L)); // TEXTC/L
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(pp_UNK_0xe6c9); // UNK_0xe6c9
  Push(Read16(regsp)); // DUP
  b = Pop(); // >R
  C_ex_(); // C!
  Push(b + 1); // R> 1+
  Push(a); // R>
  Push(Read16(cc_BL)); // BL
  FILL_1(); // FILL_1
  Push(1);
  Push(pp_LINE_dash_COUNT); // LINE-COUNT
  Store_3(); // !_3
  Push(pp_UNK_0xe6c9); // UNK_0xe6c9
  WLINE_dash_UP(); // WLINE-UP
}


// ================================================
// 0xec77: WORD 'UNK_0xec79' codep=0x224c parp=0xec79 params=2 returns=0
// ================================================

void UNK_0xec79() // UNK_0xec79
{
  unsigned short int a, b;
  _2DUP(); // 2DUP
  UNK_0xeb6f(); // UNK_0xeb6f
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    UNK_0xec3b(); // UNK_0xec3b
    Pop(); Pop(); // 2DROP
    UNK_0xe2e6(); // UNK_0xe2e6
    a = Pop(); // >R
    b = Pop(); // >R
    UNK_0xebdb(); // UNK_0xebdb
    UNK_0xe867(); // UNK_0xe867
    Push(b); // R>
    Push(a); // R>
    UNK_0xe2f2(); // UNK_0xe2f2
    return;
  }
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeca1: WORD 'UNK_0xeca3' codep=0x224c parp=0xeca3
// ================================================

void UNK_0xeca3() // UNK_0xeca3
{
  LoadData(UNK_0xe4e0); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  UNK_0xea1b(); // UNK_0xea1b
  Push(Pop()==pp_PLANTS?1:0); //  PLANTS =
  if (Pop() != 0)
  {
    Push(0xdb13); Push(0x0001);
    return;
  }
  Push(0xdafe); Push(0x0001);
}


// ================================================
// 0xecc3: WORD 'UNK_0xecc5' codep=0x224c parp=0xecc5
// ================================================

void UNK_0xecc5() // UNK_0xecc5
{
  unsigned short int a;
  LoadData(RESEMBLES); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  UNK_0xe69d(); // UNK_0xe69d
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    LoadData(SHAPE); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(0xdddc); Push(0x0001);
    D_eq_(); // D=
    a = Pop(); // >R
    LoadData(UNK_0xe4e0); // from 'CREATURE'
    Push(Read16(Pop())&0xFF); //  C@
    UNK_0xea1b(); // UNK_0xea1b
    Push((Pop()==pp_PLANTS?1:0) & a); //  PLANTS = R> AND
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
    }
  }
  Push2Words("UNK_0xe6bf");
}


// ================================================
// 0xecfb: WORD 'UNK_0xecfd' codep=0x224c parp=0xecfd
// ================================================

void UNK_0xecfd() // UNK_0xecfd
{
  Push2Words("UNK_0xe6bf");
  Push(0xdcf4); Push(0x0001);
  Push2Words("UNK_0xe6bf");
  UNK_0xeb79(); // UNK_0xeb79
  UNK_0xeca3(); // UNK_0xeca3
  Push2Words("UNK_0xe6bf");
  UNK_0xecc5(); // UNK_0xecc5
  Push(0x0028);
  UNK_0xe474(); // UNK_0xe474
  UNK_0xe47c(); // UNK_0xe47c
  if (Pop() != 0)
  {
    LoadData(UNK_0xe590); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
    Push2Words("UNK_0xe6bf");
  }
  LoadData(UNK_0xe678); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  UNK_0xebb1(); // UNK_0xebb1
}


// ================================================
// 0xed29: WORD 'UNK_0xed2b' codep=0x224c parp=0xed2b params=3 returns=0
// ================================================

void UNK_0xed2b() // UNK_0xed2b
{
  unsigned short int a, b, c;
  UNK_0xe47c(); // UNK_0xe47c
  if (Pop() != 0)
  {
    ROT(); // ROT
    a = Pop(); // >R
    SWAP(); // SWAP
    b = Pop(); // >R
    c = Pop(); // >R
    Push2Words("UNK_0xe6bf");
    Push(c); // R>
    IFLD_at_(); // IFLD@
    Push(b); // R>
    IFLD_at_(); // IFLD@
    UNK_0xeb5f(); // UNK_0xeb5f
    Push(a); // R>
    IFLD_at_(); // IFLD@
    UNK_0xeb5f(); // UNK_0xeb5f
    return;
  }
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xed57: WORD 'UNK_0xed59' codep=0x224c parp=0xed59 params=1 returns=0
// ================================================

void UNK_0xed59() // UNK_0xed59
{
  unsigned short int a;
  Push(1);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    UNK_0xebb1(); // UNK_0xebb1
    return;
  }
  Push(0x00ff);
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    UNK_0xeb4d(); // UNK_0xeb4d
    return;
  }
  a = Pop(); // >R
  Push(Read16(a)); // R@
  if (Pop() != 0)
  {
    Push2Words("UNK_0xe6bf");
    Push(Read16(a)); // R@
    UNK_0xea35(); // UNK_0xea35
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xed93: WORD 'UNK_0xed95' codep=0x224c parp=0xed95
// ================================================

void UNK_0xed95() // UNK_0xed95
{
  unsigned short int a, b, c, d;
  Push2Words("UNK_0xea2f");
  LoadData(UNK_0xe4d0); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  a = Pop(); // >R
  b = Pop(); // >R
  Push(0xe668); // probable 'UNK_0xe668'
  Push(0xe660); // probable 'UNK_0xe660'
  Push(0xe658); // probable 'UNK_0xe658'
  Push(0x003c);
  UNK_0xe474(); // UNK_0xe474
  UNK_0xed2b(); // UNK_0xed2b
  LoadData(UNK_0xe4f8); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  UNK_0xeb5f(); // UNK_0xeb5f
  Push(b); // R>
  Push(a); // R>
  UNK_0xe39f(); // UNK_0xe39f
  Push(Pop()==0?1:0); //  0=
  c = Pop(); // >R
  UNK_0xe3cf(); // UNK_0xe3cf
  Push(Pop()==0?1:0); //  0=
  d = Pop(); // >R
  Push(0xdfb1); Push(0x0001);
  D_eq_(); // D=
  Push(!Pop() & (d & c)); //  NOT R> R> AND AND
  if (Pop() != 0)
  {
    UNK_0xebb1(); // UNK_0xebb1
  }
  Push(0);
  Push(pp_UNK_0xea63); // UNK_0xea63
  Store_3(); // !_3
}


// ================================================
// 0xedeb: WORD 'UNK_0xeded' codep=0x224c parp=0xeded
// ================================================

void UNK_0xeded() // UNK_0xeded
{
  Push2Words("UNK_0xea2f");
  Push((Read16(0x63ef+HITS.offset)&0xFF)==0?1:0); // HITS<IFIELD> C@ 0=
  if (Pop() != 0)
  {
    Push(0xcaa8); Push(0x0001);
  } else
  {
    Push(Read16(0x63ef+UNK_0xe680.offset)&0xFF); // UNK_0xe680<IFIELD> C@
    LoadData(UNK_0xe568); // from 'CREATURE'
    Push(Read16(Pop())&0xFF); //  C@
    _st_(); // <
    if (Pop() != 0)
    {
      Push(0xe262); Push(0x0001);
    } else
    {
      Push((Read16(0x63ef+UNK_0xe68a.offset)&0xFF) & 1); // UNK_0xe68a<IFIELD> C@ 1 AND
      if (Pop() != 0)
      {
        Push(0xe24c); Push(0x0001);
      } else
      {
        Push(Read16(0x63ef+UNK_0xe685.offset)&0xFF); // UNK_0xe685<IFIELD> C@
        if (Pop() != 0)
        {
          LoadData(UNK_0xe548); // from 'CREATURE'
          _1_dot_5_at_(); // 1.5@
        } else
        {
          LoadData(UNK_0xe540); // from 'CREATURE'
          _1_dot_5_at_(); // 1.5@
        }
      }
    }
  }
  Push2Words("UNK_0xe6bf");
  Push(0xdd05); Push(0x0001);
  Push2Words("UNK_0xe6bf");
  PRONOUN(); // PRONOUN
}


// ================================================
// 0xee53: WORD 'UNK_0xee55' codep=0x1d29 parp=0xee55
// ================================================
// 0xee55: db 0x00 0xe5 0x08 0xe5 0xc8 0xe5 0xd0 0xe5 0xd8 0xe5 0xe0 0xe5 0xe8 0xe5 0xf0 0xe5 '                '

// ================================================
// 0xee65: WORD 'UNK_0xee67' codep=0x1d29 parp=0xee67
// ================================================
// 0xee67: db 0x10 0xe5 0x18 0xe5 0x98 0xe5 0xa0 0xe5 0xa8 0xe5 0xb0 0xe5 0xb8 0xe5 0xc0 0xe5 '                '

// ================================================
// 0xee77: WORD 'UNK_0xee79' codep=0x1d29 parp=0xee79
// ================================================
// 0xee79: db 0x30 0xe5 0x38 0xe5 0x28 0xe6 0x30 0xe6 0x38 0xe6 0x40 0xe6 0x48 0xe6 0x50 0xe6 '0 8 ( 0 8 @ H P '

// ================================================
// 0xee89: WORD 'UNK_0xee8b' codep=0x1d29 parp=0xee8b
// ================================================
// 0xee8b: db 0x20 0xe5 0x28 0xe5 0xf8 0xe5 0x00 0xe6 0x08 0xe6 0x10 0xe6 0x18 0xe6 0x20 0xe6 '  (             '

// ================================================
// 0xee9b: WORD 'UNK_0xee9d' codep=0x1d29 parp=0xee9d
// ================================================
// 0xee9d: db 0x3a 0x20 ': '

// ================================================
// 0xee9f: WORD 'UNK_0xeea1' codep=0x224c parp=0xeea1 params=0 returns=1
// ================================================

void UNK_0xeea1() // UNK_0xeea1
{
  Push(Read16(pp_UNK_0xee9d)); // UNK_0xee9d @
}


// ================================================
// 0xeea7: WORD 'UNK_0xeea9' codep=0x1d29 parp=0xeea9
// ================================================
// 0xeea9: db 0x3a 0x20 ': '

// ================================================
// 0xeeab: WORD 'UNK_0xeead' codep=0x224c parp=0xeead params=2 returns=2
// ================================================

void UNK_0xeead() // UNK_0xeead
{
  Push(Read16(pp_UNK_0xeea9)); // UNK_0xeea9 @
  if (Pop() != 0)
  {
    Push(0xdb5b); Push(0x0001);
    Push2Words("UNK_0xe6bf");
  } else
  {
    UNK_0xeb79(); // UNK_0xeb79
  }
  Push(pp_UNK_0xeea9); // UNK_0xeea9
  OFF(); // OFF
}


// ================================================
// 0xeec9: WORD 'UNK_0xeecb' codep=0x224c parp=0xeecb
// ================================================

void UNK_0xeecb() // UNK_0xeecb
{
  unsigned short int a, b, c, d;
  UNK_0xeea1(); // UNK_0xeea1
  Push(Read16(Pop())); //  @
  IFLD_at_(); // IFLD@
  UNK_0xe69d(); // UNK_0xe69d
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    _2OVER(); // 2OVER
    UNK_0xeb6f(); // UNK_0xeb6f
    a = Pop(); // >R
    Pop(); Pop(); // 2DROP
    Push(a==0?1:0); // R> 0=
    if (Pop() != 0)
    {
      b = Pop(); // >R
      c = Pop(); // >R
      Push2Words("UNK_0xe6bf");
      UNK_0xeead(); // UNK_0xeead
      Push(c); // R>
      Push(b); // R>
    } else
    {
      Push(pp_UNK_0xeea9); // UNK_0xeea9
      ON_3(); // ON_3
    }
    UNK_0xeea1(); // UNK_0xeea1
    Push(Read16(Pop() + 2)); //  2 + @
    IFLD_at_(); // IFLD@
    UNK_0xeaeb(); // UNK_0xeaeb
    Pop(); // DROP
    UNK_0xeb8b(); // UNK_0xeb8b
    UNK_0xeea1(); // UNK_0xeea1
    d = Pop(); // >R
    Push(Read16(d)); // R@
    Push(Read16(Pop() + 8)); //  8 + @
    Push(Read16(d)); // R@
    Push(Read16(Pop() + 6)); //  6 + @
    Push(Read16(d + 4)); // R> 4 + @
    Push(0x0032);
    UNK_0xe474(); // UNK_0xe474
    UNK_0xed2b(); // UNK_0xed2b
    UNK_0xea47(); // UNK_0xea47
    UNK_0xeea1(); // UNK_0xeea1
    Push(Read16(Pop() + 0x000a)); //  0x000a + @
    IFLD_at_(); // IFLD@
    UNK_0xe69d(); // UNK_0xe69d
    Push(Pop() | Pop()); // OR
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      UNK_0xe413(); // UNK_0xe413
      if (Pop() != 0)
      {
        UNK_0xeea1(); // UNK_0xeea1
        Push(Read16(Pop() + 0x000c)); //  0x000c + @
        IFLD_at_(); // IFLD@
        UNK_0xeb5f(); // UNK_0xeb5f
      }
    } else
    {
      UNK_0xeb5f(); // UNK_0xeb5f
    }
    UNK_0xeea1(); // UNK_0xeea1
    Push(Read16(Pop() + 0x000e)); //  0x000e + @
    IFLD_at_(); // IFLD@
    UNK_0xeb5f(); // UNK_0xeb5f
    UNK_0xeea1(); // UNK_0xeea1
    Push(Read16(Pop() + 2)); //  2+ @
    IFLD_at_(); // IFLD@
    UNK_0xed59(); // UNK_0xed59
  }
  Push(pp_UNK_0xea63); // UNK_0xea63
  OFF(); // OFF
}


// ================================================
// 0xef81: WORD 'UNK_0xef83' codep=0x224c parp=0xef83
// ================================================

void UNK_0xef83() // UNK_0xef83
{
  Push2Words("UNK_0xea2f");
  LoadData(UNK_0xe578); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x001e);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(pp_UNK_0xee55); // UNK_0xee55
    Push(pp_UNK_0xee9d); // UNK_0xee9d
    Store_3(); // !_3
    UNK_0xeecb(); // UNK_0xeecb
  }
  Push(pp_UNK_0xee67); // UNK_0xee67
  Push(pp_UNK_0xee9d); // UNK_0xee9d
  Store_3(); // !_3
  UNK_0xeecb(); // UNK_0xeecb
  Push(pp_UNK_0xee8b); // UNK_0xee8b
  Push(pp_UNK_0xee9d); // UNK_0xee9d
  Store_3(); // !_3
  UNK_0xeecb(); // UNK_0xeecb
  Push(pp_UNK_0xee79); // UNK_0xee79
  Push(pp_UNK_0xee9d); // UNK_0xee9d
  Store_3(); // !_3
  UNK_0xeecb(); // UNK_0xeecb
  UNK_0xeb6f(); // UNK_0xeb6f
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push2Words("UNK_0xe6bf");
  POSSESSI(); // POSSESSI
  Push2Words("UNK_0xe6bf");
  PRONOUN(); // PRONOUN
}


// ================================================
// 0xefc5: WORD 'POSSIBIL' codep=0xe963 parp=0xefd2
// ================================================
// 0xefd2: db 0x06 0x00 0x00 0x00 0x01 0x00 0xda 0xef 0x14 0x49 0xdb 0x01 0x27 0x68 0xdc 0x01 0x39 0x4e 0xdc 0x01 0x64 0x36 0xdb 0x01 '         I  'h  9N  d6  '

// ================================================
// 0xefea: WORD 'UNK_0xefec' codep=0x224c parp=0xefec params=0 returns=0
// ================================================

void UNK_0xefec() // UNK_0xefec
{
  unsigned short int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
  UNK_0xe413(); // UNK_0xe413
  if (Pop() == 0) return;
  UNK_0xe41d(); // UNK_0xe41d
  a = Pop(); // >R
  Push(9);
  UNK_0xe68f(); // UNK_0xe68f
  Push(0xdc9d); Push(0x0001);
  D_eq_(); // D=
  if (Pop() != 0)
  {
    b = Pop(); // >R
    c = Pop(); // >R
    d = Pop(); // >R
    e = Pop(); // >R
    f = Pop(); // >R
    g = Pop(); // >R
    h = Pop(); // >R
    i = Pop(); // >R
    j = Pop(); // >R
    Pop(); Pop(); // 2DROP
    Pop(); Pop(); // 2DROP
    Pop(); Pop(); // 2DROP
    Pop(); Pop(); // 2DROP
    Pop(); // DROP
    Push(j); // R>
    Push(i); // R>
    Push(h); // R>
    Push(g); // R>
    Push(f); // R>
    Push(e); // R>
    Push(d); // R>
    Push(c); // R>
    Push(b); // R>
  }
  k = Pop(); // >R
  l = Pop(); // >R
  m = Pop(); // >R
  n = Pop(); // >R
  Push(0x000a);
  OVER(); // OVER
  U_st_(); // U<
  if (Pop() != 0)
  {
    Push(0x000a);
    _slash_(); // /
    Push(Pop() * 0x000a); //  0x000a *
  }
  Push(n); // R>
  Push(m); // R>
  Push(l); // R>
  Push(k); // R>
  Push(a); // R>
  Push(0x0001); Push(0x0000);
  POSSIBIL(); // POSSIBIL
  UNK_0xea0d(); // UNK_0xea0d
  Push2Words("UNK_0xe6bf");
}


// ================================================
// 0xf06c: WORD 'UNK_0xf06e' codep=0x224c parp=0xf06e
// ================================================

void UNK_0xf06e() // UNK_0xf06e
{
  unsigned short int a, b;
  Push2Words("UNK_0xea2f");
  Push(0xdc7c); Push(0x0001);
  Push2Words("UNK_0xe6bf");
  LoadData(UNK_0xe580); // from 'CREATURE'
  Push(Read16(Pop())); //  @
  Push(Read16(regsp)); // DUP
  Push(0x0064);
  _st_(); // <
  if (Pop() != 0)
  {
    a = Pop(); // >R
    Push(0xdc8d); Push(0x0001);
  } else
  {
    Push(0x0064);
    _slash_MOD(); // /MOD
    b = Pop(); // >R
    Push(0xdc8d); Push(0x0001);
    Push2Words("UNK_0xe6bf");
    Push(5);
    ROLL(); // ROLL
    UNK_0xea35(); // UNK_0xea35
    Push2Words("UNK_0xe6bf");
    Push(0xdc9d); Push(0x0001);
  }
  Push2Words("UNK_0xe6bf");
  Push(a); // R>
  UNK_0xea35(); // UNK_0xea35
  Push2Words("UNK_0xe6bf");
  UNK_0xefec(); // UNK_0xefec
  Push(0xcab9); Push(0x0001);
}


// ================================================
// 0xf0c4: WORD 'SAYIT' codep=0x224c parp=0xf0ce
// ================================================

void SAYIT() // SAYIT
{
  Push(pp_UNK_0xe6c5); // UNK_0xe6c5
  OFF_2(); // OFF_2
  UNK_0xed95(); // UNK_0xed95
  UNK_0xecfd(); // UNK_0xecfd
  UNK_0xec79(); // UNK_0xec79
  UNK_0xef83(); // UNK_0xef83
  UNK_0xec79(); // UNK_0xec79
  UNK_0xeded(); // UNK_0xeded
  UNK_0xec79(); // UNK_0xec79
}


// ================================================
// 0xf0e2: WORD 'ANALOGS' codep=0xe963 parp=0xf0ee
// ================================================
// 0xf0ee: db 0x0c 0x00 0x00 0x00 0x01 0x00 0xfc 0xf0 0x00 0x00 0x02 0x00 0x34 0xf1 0x05 0x35 0xc8 0x01 0x0a 0x47 0xc8 0x01 0x0f 0x58 0xc8 0x01 0x14 0x69 0xc8 0x01 0x1e 0x7e 0xc8 0x01 0x1f 0x90 0xc8 0x01 0x20 0xa0 0xc8 0x01 0x2d 0xb6 0xc8 0x01 0x3c 0xc8 0xc8 0x01 0x4b 0xdc 0xc8 0x01 0x55 0xed 0xc8 0x01 0x5a 0xff 0xc8 0x01 0x5f 0x13 0xc9 0x01 0x64 0x27 0xc9 0x01 0x04 0x3d 0xc9 0x01 0x08 0x50 0xc9 0x01 0x0c 0x74 0xc9 0x01 0x14 0x61 0xc9 0x01 0x1e 0x84 0xc9 0x01 0x1f 0x90 0xc8 0x01 0x20 0x96 0xc9 0x01 0x2d 0xaa 0xc9 0x01 0x3c 0xbd 0xc9 0x01 0x4b 0xcd 0xc9 0x01 0x5a 0xdd 0xc9 0x01 0x64 0xf0 0xc9 0x01 '            4  5   G   X   i   ~          -   <   K   U   Z   _   d'   =   P   t   a              -   <   K   Z   d   '

// ================================================
// 0xf164: WORD 'UNK_0xf166' codep=0x224c parp=0xf166
// ================================================

void UNK_0xf166() // UNK_0xf166
{
  unsigned short int a, b;
  UNK_0xe2e6(); // UNK_0xe2e6
  a = Pop(); // >R
  b = Pop(); // >R
  Push(pp_UNK_0xe6c5); // UNK_0xe6c5
  OFF(); // OFF
  UNK_0xec3b(); // UNK_0xec3b
  UNK_0xf06e(); // UNK_0xf06e
  UNK_0xec79(); // UNK_0xec79
  UNK_0xec3b(); // UNK_0xec3b
  Push(0xca39); Push(0x0001);
  UNK_0xebcf(); // UNK_0xebcf
  UNK_0xe8c7(); // UNK_0xe8c7
  ICLOSE(); // ICLOSE
  LoadData(UNK_0xe4e0); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  NICHE_dash_SE(); // NICHE-SE
  _1_dot_5_at_(); // 1.5@
  UNK_0xebcf(); // UNK_0xebcf
  UNK_0xe8c7(); // UNK_0xe8c7
  ICLOSE(); // ICLOSE
  UNK_0xe867(); // UNK_0xe867
  UNK_0xec3b(); // UNK_0xec3b
  Push(0xca66); Push(0x0001);
  UNK_0xebcf(); // UNK_0xebcf
  UNK_0xe8c7(); // UNK_0xe8c7
  ICLOSE(); // ICLOSE
  LoadData(UNK_0xe578); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0001); Push(0x0000);
  ANALOGS(); // ANALOGS
  UNK_0xea0d(); // UNK_0xea0d
  UNK_0xebcf(); // UNK_0xebcf
  UNK_0xe8c7(); // UNK_0xe8c7
  ICLOSE(); // ICLOSE
  UNK_0xe867(); // UNK_0xe867
  UNK_0xec3b(); // UNK_0xec3b
  Push(0xca86); Push(0x0001);
  UNK_0xebcf(); // UNK_0xebcf
  UNK_0xe8c7(); // UNK_0xe8c7
  ICLOSE(); // ICLOSE
  LoadData(UNK_0xe570); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0002); Push(0x0000);
  ANALOGS(); // ANALOGS
  UNK_0xea0d(); // UNK_0xea0d
  UNK_0xebcf(); // UNK_0xebcf
  UNK_0xe8c7(); // UNK_0xe8c7
  ICLOSE(); // ICLOSE
  UNK_0xe867(); // UNK_0xe867
  Push(3);
  Push(pp_UNK_0xe6c5); // UNK_0xe6c5
  _plus__ex__2(); // +!_2
  Push(b); // R>
  Push(a); // R>
  UNK_0xe2f2(); // UNK_0xe2f2
}


// ================================================
// 0xf1ea: WORD 'UNK_0xf1ec' codep=0x224c parp=0xf1ec params=2 returns=0
// ================================================

void UNK_0xf1ec() // UNK_0xf1ec
{
  SWAP(); // SWAP
  Push(Pop() * 4 + (Read16(pp_WLEFT) + 2)); //  4 * WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf20c: WORD 'UNK_0xf20e' codep=0x224c parp=0xf20e params=0 returns=0
// ================================================

void UNK_0xf20e() // UNK_0xf20e
{
  Push(0);
  Push(6);
  UNK_0xf1ec(); // UNK_0xf1ec
  Push(1);
  Push(pp_UNK_0xe6c5); // UNK_0xe6c5
  Store_3(); // !_3
}


// ================================================
// 0xf21c: WORD 'UNK_0xf21e' codep=0x224c parp=0xf21e params=0 returns=0
// ================================================

void UNK_0xf21e() // UNK_0xf21e
{
  UNK_0xf20e(); // UNK_0xf20e
  PRINT("YOUR SHIP ", 10); // (.")
}


// ================================================
// 0xf22f: WORD 'UNK_0xf231' codep=0x224c parp=0xf231
// ================================================

void UNK_0xf231() // UNK_0xf231
{
  UNK_0xf20e(); // UNK_0xf20e
  LoadData(ART_dash_NAME); // from 'ARTIFACT'
  Push(0x0018);
  Push(0x002e);
  UNK_0xe435(); // UNK_0xe435
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf243: WORD 'UNK_0xf245' codep=0x224c parp=0xf245
// ================================================

void UNK_0xf245() // UNK_0xf245
{
  UNK_0xf20e(); // UNK_0xf20e
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(0x000a);
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Draw(); // .
  PRINT("CUBIC METER(S) ", 15); // (.")
  LoadData(UNK_0xe4b8); // from 'ELEMENT'
  Push(0x0010);
  Push(0x002e);
  UNK_0xe435(); // UNK_0xe435
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf279: WORD 'UNK_0xf27b' codep=0x224c parp=0xf27b params=0 returns=0
// ================================================

void UNK_0xf27b() // UNK_0xf27b
{
  UNK_0xf20e(); // UNK_0xf20e
  PRINT("YOUR TERRAIN VEHICLE ", 21); // (.")
}


// ================================================
// 0xf297: WORD 'UNK_0xf299' codep=0x224c parp=0xf299
// ================================================

void UNK_0xf299() // UNK_0xf299
{
  UNK_0xf20e(); // UNK_0xf20e
  PRINT("A ", 2); // (.")
  LoadData(SPEC_dash_NAME); // from 'SPECIMEN'
  Push(0x0010);
  Push(0x002e);
  UNK_0xe435(); // UNK_0xe435
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" SPECIMEN ", 10); // (.")
}


// ================================================
// 0xf2bd: WORD 'UNK_0xf2bf' codep=0x224c parp=0xf2bf params=0 returns=0
// ================================================

void UNK_0xf2bf() // UNK_0xf2bf
{
  UNK_0xf20e(); // UNK_0xf20e
  PRINT("A RUIN ", 7); // (.")
}


// ================================================
// 0xf2cd: WORD 'UNK_0xf2cf' codep=0x224c parp=0xf2cf params=0 returns=0
// ================================================

void UNK_0xf2cf() // UNK_0xf2cf
{
  UNK_0xf20e(); // UNK_0xf20e
  PRINT("A MESSAGE ", 10); // (.")
}


// ================================================
// 0xf2e0: WORD 'CLASS>DE' codep=0x4a4f parp=0xf2ed
// ================================================
// entry

void CLASS_gt_DE() // CLASS>DE
{
  switch(Pop()) // CLASS>DE
  {
  case 68:
    SAYIT(); // SAYIT
    break;
  case 42:
    UNK_0xf27b(); // UNK_0xf27b
    break;
  case 40:
    UNK_0xf299(); // UNK_0xf299
    break;
  case 20:
    UNK_0xf21e(); // UNK_0xf21e
    break;
  case 41:
    UNK_0xf2bf(); // UNK_0xf2bf
    break;
  case 26:
    UNK_0xf245(); // UNK_0xf245
    break;
  case 28:
    UNK_0xf231(); // UNK_0xf231
    break;
  case 27:
    UNK_0xf2cf(); // UNK_0xf2cf
    break;
  default:
    BEEP(); // BEEP
    break;

  }
}

// ================================================
// 0xf311: WORD 'CLASS>TY' codep=0x4a4f parp=0xf31e
// ================================================

void CLASS_gt_TY() // CLASS>TY
{
  switch(Pop()) // CLASS>TY
  {
  case 68:
    UNK_0xf166(); // UNK_0xf166
    break;
  case 42:
    UNK_0xf27b(); // UNK_0xf27b
    break;
  case 40:
    UNK_0xf299(); // UNK_0xf299
    break;
  case 20:
    UNK_0xf21e(); // UNK_0xf21e
    break;
  case 41:
    UNK_0xf2bf(); // UNK_0xf2bf
    break;
  case 26:
    UNK_0xf245(); // UNK_0xf245
    break;
  case 28:
    UNK_0xf231(); // UNK_0xf231
    break;
  case 27:
    UNK_0xf2cf(); // UNK_0xf2cf
    break;
  default:
    BEEP(); // BEEP
    break;

  }
}

// ================================================
// 0xf342: WORD '?TALK' codep=0x224c parp=0xf34c params=1 returns=0
// ================================================
// entry

void IsTALK() // ?TALK
{
  unsigned short int a, i, imax;
  Push(Read16(pp_COLOR)); // COLOR @
  a = Pop(); // >R
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      POINT_gt_ICON(); // POINT>ICON
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      GetINST_dash_CLASS(); // @INST-CLASS
      Push(Read16(pp_NCRS)==3?1:0); // NCRS @ 3 =
      if (Pop() != 0)
      {
        CLASS_gt_DE(); // CLASS>DE case
      } else
      {
        CLASS_gt_TY(); // CLASS>TY case
      }
      ICLOSE(); // ICLOSE
      Push(imax); // I'
      Push(1);
      _gt_(); // >
      Push(Pop() & !(i + 1==imax?1:0)); //  I 1+ I' = NOT AND
      if (Pop() != 0)
      {
        Push(0x05dc);
        MS(); // MS
        UNK_0xec53(); // UNK_0xec53
        UNK_0xec53(); // UNK_0xec53
      }
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}

// 0xf3aa: db 0x53 0x45 0x4e 0x54 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x60 0x16 0xfc 0x00 0xfc 0xe2 0x95 0x49 0x16 0x16 0x05 0xd9 0x01 0x00 0x39 0x40 0x4c 0xe3 0x95 0x49 0x16 0x16 0xba 0xcb 0x01 0x00 0x39 0x40 0xf5 0x12 0xfa 0x15 0x32 0x32 0x37 0x32 0xc4 0xc5 0x01 0x00 0x60 0x16 0xd4 0x00 0x24 0xe3 0x95 0x49 0x16 0x16 0xb6 0xce 0x01 0x00 0x39 0x40 0xfa 0x15 0x26 0x00 0x3c 0xe3 0x95 0x49 0x16 0x16 0x59 0xdf 0x01 0x00 0x39 0x40 0xfa 0x15 0x0c 0x00 0x16 0x16 0x90 0xc6 0x01 0x00 0x60 0x16 0x08 0x00 0x16 0x16 0x7a 0xc6 0x01 0x00 0x60 0x16 0xa0 0x00 0xfc 0xe2 0x95 0x49 0x16 0x16 0x00 0xe0 0x01 0x00 0x39 0x40 0xfa 0x15 0x8e 0x00 0x04 0xe3 0x73 0x3b 0x46 0x12 0xfa 0x15 0x0c 0x00 0x16 0x16 0x62 0xc6 0x01 0x00 0x60 0x16 0x76 0x00 0x5c 0xe3 0x95 0x49 0x16 0x16 0x17 0xcd 0x01 0x00 0x39 0x40 0xb4 0x0d 0x64 0xe3 0x92 0x0c 0x41 0x0e 0x73 0x3b 0x5f 0x12 0xf2 0x0e 0x7b 0x3b 0x5f 0x12 0x3e 0x13 0x90 0x0e 0xf5 0x12 0xfa 0x15 0x4c 0x00 0xbc 0xe3 0x95 0x49 0xf0 0x0d 0xf0 0x0d 0x16 0x16 0x59 0xe0 0x01 0x00 0x39 0x40 0x06 0x0e 0x16 0x16 0x6b 0xe0 0x01 0x00 0x39 0x40 0x3e 0x13 0xfa 0x15 0x0e 0x00 0x32 0x0e 0x16 0x16 0x36 0xc6 0x01 0x00 0x60 0x16 0x1c 0x00 0x20 0x0f 0x4d 0xe2 0x1f 0xe1 0x9b 0x3b 0x2d 0x12 0xfa 0x15 0x0c 0x00 0x16 0x16 0xaa 0xc5 0x01 0x00 0x60 0x16 0x04 0x00 0x58 0x51 0x60 0x16 0x04 0x00 0x58 0x51 0x60 0x16 0x04 0x00 0x58 0x51 0x90 0x16 0x4c 0x22 0x0c 0xe3 0x92 0x0c 0x7b 0x3b 0x9f 0x11 0xfa 0x15 0x08 0x00 0xb4 0xf1 0x60 0x16 0x0e 0x00 0x54 0xf2 0xc8 0x0d 0x89 0x12 0xfa 0x15 0x04 0x00 0x82 0xf3 0xa4 0xe4 0x92 0x6d 0x90 0x16 0xe8 0xe1 0x8a 0x53 0x50 0x45 0x43 0x2e 0x50 0x41 0x52 0xcd 0x4c 0x22 0xb4 0xe4 0x9b 0x54 0xae 0x0b 0xae 0x4a 0xfd 0x4b 0x60 0xf1 0xb1 0xeb 0x3d 0xec 0x7f 0xec 0x89 0xec 0x93 0xec 0x2f 0xef 0xae 0xf0 0x48 0xf1 0x78 0xf1 0xca 0xf4 0x35 0xed 0xad 0xed 0xd9 0xef 0x1c 0xf1 0x90 0x16 0x4c 0x4f 0x50 0x41 0x52 0x4d 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x32 0x32 0x31 0x38 0x2d 0x2d 0x2d 0x2d 0x00 'SENTS___________________________`      I      9@L  I      9@    2272    `   $  I      9@  & <  I  Y   9@          `     z   `      I      9@      s;F       b   ` v \  I      9@  d   A s;_   {;_ >       L    I      Y   9@    k   9@>     2   6   `     M    ;-           `   XQ`   XQ`   XQ  L"    {;        `   T              m     SPEC.PAR L"   T   J K`   =      /   H x   5         LOPARMS________________________________---------2218---- '

