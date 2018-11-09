// ====== OVERLAY 'ITEMS-OV' ======
// store offset = 0xdde0
// overlay size   = 0x1780

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//        revision  codep:0x1d29 wordp:0xddf6 size:0x0002 C-string:'revision'
//         ttlines  codep:0x1d29 wordp:0xddfa size:0x0002 C-string:'ttlines'
//      PHRASE-MEM  codep:0x1d29 wordp:0xddfe size:0x00c9 C-string:'PHRASE_dash_MEM'
//           WDEC9  codep:0x1d29 wordp:0xdec9 size:0x0002 C-string:'WDEC9'
//           WDECD  codep:0x224c wordp:0xdecd size:0x0032 C-string:'WDECD'
//           WDF01  codep:0x224c wordp:0xdf01 size:0x0008 C-string:'WDF01'
//           WDF0B  codep:0x224c wordp:0xdf0b size:0x0048 C-string:'WDF0B'
//           WDF55  codep:0x224c wordp:0xdf55 size:0x001e C-string:'WDF55'
//           WDF75  codep:0x2214 wordp:0xdf75 size:0x0002 C-string:'WDF75'
//           WDF79  codep:0x224c wordp:0xdf79 size:0x002e C-string:'WDF79'
//    WRITE-PHRASE  codep:0x224c wordp:0xdfa9 size:0x002a C-string:'WRITE_dash_PHRASE'
//          planet  codep:0x2214 wordp:0xdfd5 size:0x0002 C-string:'planet'
//        creature  codep:0x2214 wordp:0xdfd9 size:0x0002 C-string:'creature'
//        artifact  codep:0x2214 wordp:0xdfdd size:0x0002 C-string:'artifact'
//    analyze-text  codep:0x2214 wordp:0xdfe1 size:0x0002 C-string:'analyze_dash_text'
//           WDFE5  codep:0x73ea wordp:0xdfe5 size:0x0006 C-string:'WDFE5'
//           WDFED  codep:0x744d wordp:0xdfed size:0x0003 C-string:'WDFED'
//     content-vol  codep:0x744d wordp:0xdff2 size:0x0003 C-string:'content_dash_vol'
//          volume  codep:0x73ea wordp:0xdff7 size:0x0006 C-string:'volume'
//            hits  codep:0x744d wordp:0xdfff size:0x0003 C-string:'hits'
//          behave  codep:0x744d wordp:0xe004 size:0x0003 C-string:'behave'
//            biod  codep:0x73ea wordp:0xe009 size:0x0006 C-string:'biod'
//      inst-starx  codep:0x744d wordp:0xe011 size:0x0003 C-string:'inst_dash_starx'
//      inst-stary  codep:0x744d wordp:0xe016 size:0x0003 C-string:'inst_dash_stary'
//      inst-plan#  codep:0x744d wordp:0xe01b size:0x0003 C-string:'inst_dash_plan_n_'
//        whichguy  codep:0x224c wordp:0xe020 size:0x0012 C-string:'whichguy'
//           reorg  codep:0x224c wordp:0xe034 size:0x000e C-string:'reorg'
//           WE044  codep:0x224c wordp:0xe044 size:0x0018 C-string:'WE044'
//          werase  codep:0x224c wordp:0xe05e size:0x0012 C-string:'werase'
//           WE072  codep:0x224c wordp:0xe072 size:0x0010 C-string:'WE072'
//           WE084  codep:0x224c wordp:0xe084 size:0x002f C-string:'WE084'
//      art-analyz  codep:0x224c wordp:0xe0b5 size:0x0026 C-string:'art_dash_analyz'
//           WE0DD  codep:0x224c wordp:0xe0dd size:0x0028 C-string:'WE0DD'
//           WE107  codep:0x224c wordp:0xe107 size:0x000e C-string:'WE107'
//           WE117  codep:0x224c wordp:0xe117 size:0x0068 C-string:'WE117'
//           WE181  codep:0x224c wordp:0xe181 size:0x000b C-string:'WE181'
//           WE18E  codep:0x224c wordp:0xe18e size:0x0009 C-string:'WE18E'
//           .desc  codep:0x224c wordp:0xe199 size:0x000d C-string:'Drawdesc'
//           .eras  codep:0x224c wordp:0xe1a8 size:0x000a C-string:'Draweras'
//           WE1B4  codep:0x224c wordp:0xe1b4 size:0x000b C-string:'WE1B4'
//            lpos  codep:0x224c wordp:0xe1c1 size:0x0008 C-string:'lpos'
//           WE1CB  codep:0x1d29 wordp:0xe1cb size:0x0002 C-string:'WE1CB'
//           WE1CF  codep:0x1d29 wordp:0xe1cf size:0x0002 C-string:'WE1CF'
//       #options!  codep:0x224c wordp:0xe1d3 size:0x0006 C-string:'_n_options_ex_'
//           WE1DB  codep:0x224c wordp:0xe1db size:0x000c C-string:'WE1DB'
//           WE1E9  codep:0x224c wordp:0xe1e9 size:0x0012 C-string:'WE1E9'
//         tm.opts  codep:0x224c wordp:0xe1fd size:0x0017 C-string:'tm_dot_opts'
//         tl.opts  codep:0x224c wordp:0xe216 size:0x000c C-string:'tl_dot_opts'
//           WE224  codep:0x224c wordp:0xe224 size:0x0012 C-string:'WE224'
//           WE238  codep:0x224c wordp:0xe238 size:0x0012 C-string:'WE238'
//       T.OPTIONS  codep:0x4a4f wordp:0xe258 size:0x0024 C-string:'T_dot_OPTIONS'
//           WE27E  codep:0x224c wordp:0xe27e size:0x000c C-string:'WE27E'
//           WE28C  codep:0x224c wordp:0xe28c size:0x0012 C-string:'WE28C'
//           WE2A0  codep:0x224c wordp:0xe2a0 size:0x0017 C-string:'WE2A0'
//           WE2B9  codep:0x224c wordp:0xe2b9 size:0x003e C-string:'WE2B9'
//           WE2F9  codep:0x224c wordp:0xe2f9 size:0x000c C-string:'WE2F9'
//           WE307  codep:0x224c wordp:0xe307 size:0x000e C-string:'WE307'
//       P.OPTIONS  codep:0x4a4f wordp:0xe323 size:0x001c C-string:'P_dot_OPTIONS'
//           WE341  codep:0x224c wordp:0xe341 size:0x0026 C-string:'WE341'
//           WE369  codep:0x224c wordp:0xe369 size:0x001f C-string:'WE369'
//        volume+!  codep:0x224c wordp:0xe38a size:0x000c C-string:'volume_plus__ex_'
//         ?VOLUME  codep:0x224c wordp:0xe398 size:0x0083 C-string:'IsVOLUME'
//       (EXTRACT)  codep:0x224c wordp:0xe429 size:0x0030 C-string:'_ro_EXTRACT_rc_'
//       plextract  codep:0x224c wordp:0xe45b size:0x0008 C-string:'plextract'
//       tvextract  codep:0x224c wordp:0xe465 size:0x0008 C-string:'tvextract'
//           niche  codep:0x73ea wordp:0xe46f size:0x0006 C-string:'niche'
//         i.level  codep:0x73ea wordp:0xe477 size:0x0006 C-string:'i_dot_level'
//      size.index  codep:0x73ea wordp:0xe47f size:0x0006 C-string:'size_dot_index'
//       niche>val  codep:0x224c wordp:0xe487 size:0x0032 C-string:'niche_gt_val'
//           ?dist  codep:0x224c wordp:0xe4bb size:0x0034 C-string:'Isdist'
//         valuate  codep:0x224c wordp:0xe4f1 size:0x0030 C-string:'valuate'
//             1$=  codep:0x224c wordp:0xe523 size:0x0034 C-string:'_1_do__eq_'
//      info-setup  codep:0x224c wordp:0xe559 size:0x000c C-string:'info_dash_setup'
//          $setup  codep:0x224c wordp:0xe567 size:0x002a C-string:'_do_setup'
//          $match  codep:0x224c wordp:0xe593 size:0x002c C-string:'_do_match'
//            tvxy  codep:0x224c wordp:0xe5c1 size:0x0010 C-string:'tvxy'
//             xy!  codep:0x224c wordp:0xe5d3 size:0x000a C-string:'xy_ex_'
//          .cargo  codep:0x224c wordp:0xe5df size:0x003b C-string:'Drawcargo'
//          ?>spec  codep:0x224c wordp:0xe61c size:0x001a C-string:'Is_gt_spec'
//         ?attack  codep:0x224c wordp:0xe638 size:0x0038 C-string:'Isattack'
//           WE672  codep:0x224c wordp:0xe672 size:0x0008 C-string:'WE672'
//           WE67C  codep:0x224c wordp:0xe67c size:0x003a C-string:'WE67C'
//           WE6B8  codep:0x224c wordp:0xe6b8 size:0x0073 C-string:'WE6B8'
//           WE72D  codep:0x224c wordp:0xe72d size:0x002c C-string:'WE72D'
//           WE75B  codep:0x224c wordp:0xe75b size:0x00b1 C-string:'WE75B'
//           WE80E  codep:0x224c wordp:0xe80e size:0x0026 C-string:'WE80E'
//           WE836  codep:0x224c wordp:0xe836 size:0x0022 C-string:'WE836'
//           WE85A  codep:0x224c wordp:0xe85a size:0x0022 C-string:'WE85A'
//           WE87E  codep:0x224c wordp:0xe87e size:0x002e C-string:'WE87E'
//           WE8AE  codep:0x224c wordp:0xe8ae size:0x0050 C-string:'WE8AE'
//           WE900  codep:0x224c wordp:0xe900 size:0x0006 C-string:'WE900'
//           WE908  codep:0x224c wordp:0xe908 size:0x0006 C-string:'WE908'
//           WE910  codep:0x224c wordp:0xe910 size:0x008e C-string:'WE910'
//           WE9A0  codep:0x224c wordp:0xe9a0 size:0x0008 C-string:'WE9A0'
//           WE9AA  codep:0x224c wordp:0xe9aa size:0x004e C-string:'WE9AA'
//           WE9FA  codep:0x224c wordp:0xe9fa size:0x0036 C-string:'WE9FA'
//          pickup  codep:0x224c wordp:0xea32 size:0x001c C-string:'pickup'
//       delete.it  codep:0x224c wordp:0xea50 size:0x000c C-string:'delete_dot_it'
//        pldelete  codep:0x224c wordp:0xea5e size:0x000c C-string:'pldelete'
//        tvdelete  codep:0x224c wordp:0xea6c size:0x0008 C-string:'tvdelete'
//         new>box  codep:0x224c wordp:0xea76 size:0x0042 C-string:'new_gt_box'
//            clsp  codep:0x1d29 wordp:0xeaba size:0x0004 C-string:'clsp'
//      ?deposited  codep:0x224c wordp:0xeac0 size:0x0054 C-string:'Isdeposited'
//          dropit  codep:0x224c wordp:0xeb16 size:0x003a C-string:'dropit'
//       art-anlyz  codep:0x73ea wordp:0xeb52 size:0x0006 C-string:'art_dash_anlyz'
//        art-text  codep:0x73ea wordp:0xeb5a size:0x0006 C-string:'art_dash_text'
//         arttalk  codep:0x224c wordp:0xeb62 size:0x0022 C-string:'arttalk'
//        art.desc  codep:0x224c wordp:0xeb86 size:0x0043 C-string:'art_dot_desc'
//           WEBCB  codep:0x1d29 wordp:0xebcb size:0x0002 C-string:'WEBCB'
//          TS.ACT  codep:0x4a4f wordp:0xebd8 size:0x000c C-string:'TS_dot_ACT'
//          PS.ACT  codep:0x4a4f wordp:0xebef size:0x0008 C-string:'PS_dot_ACT'
//           WEBF9  codep:0x224c wordp:0xebf9 size:0x0012 C-string:'WEBF9'
//           WEC0D  codep:0x224c wordp:0xec0d size:0x001c C-string:'WEC0D'
//           WEC2B  codep:0x224c wordp:0xec2b size:0x0014 C-string:'WEC2B'
//           WEC41  codep:0x224c wordp:0xec41 size:0x000e C-string:'WEC41'
//           WEC51  codep:0x224c wordp:0xec51 size:0x0014 C-string:'WEC51'
//           WEC67  codep:0x224c wordp:0xec67 size:0x0006 C-string:'WEC67'
//           WEC6F  codep:0x224c wordp:0xec6f size:0x0006 C-string:'WEC6F'
//          PA.ACT  codep:0x4a4f wordp:0xec80 size:0x000c C-string:'PA_dot_ACT'
//          TA.ACT  codep:0x4a4f wordp:0xec97 size:0x000c C-string:'TA_dot_ACT'
//           WECA5  codep:0x224c wordp:0xeca5 size:0x0012 C-string:'WECA5'
//           WECB9  codep:0x224c wordp:0xecb9 size:0x0018 C-string:'WECB9'
//           WECD3  codep:0x224c wordp:0xecd3 size:0x0036 C-string:'WECD3'
//           WED0B  codep:0x224c wordp:0xed0b size:0x000a C-string:'WED0B'
//           WED17  codep:0x224c wordp:0xed17 size:0x000c C-string:'WED17'
//          PM.ACT  codep:0x4a4f wordp:0xed2e size:0x000c C-string:'PM_dot_ACT'
//          TM.ACT  codep:0x4a4f wordp:0xed45 size:0x000c C-string:'TM_dot_ACT'
//           WED53  codep:0x224c wordp:0xed53 size:0x0012 C-string:'WED53'
//           WED67  codep:0x224c wordp:0xed67 size:0x0026 C-string:'WED67'
//          PL.ACT  codep:0x4a4f wordp:0xed98 size:0x0010 C-string:'PL_dot_ACT'
//           WEDAA  codep:0x224c wordp:0xedaa size:0x0014 C-string:'WEDAA'
//          DO.BIO  codep:0x4a4f wordp:0xedc9 size:0x000c C-string:'DO_dot_BIO'
//        DISPATCH  codep:0x4a4f wordp:0xede2 size:0x001c C-string:'DISPATCH'
//           WEE00  codep:0x224c wordp:0xee00 size:0x003c C-string:'WEE00'
//           WEE3E  codep:0x224c wordp:0xee3e size:0x0053 C-string:'WEE3E'
//           WEE93  codep:0x1d29 wordp:0xee93 size:0x0003 C-string:'WEE93'
//           WEE98  codep:0x224c wordp:0xee98 size:0x0006 C-string:'WEE98'
//           WEEA0  codep:0x224c wordp:0xeea0 size:0x0010 C-string:'WEEA0'
//           WEEB2  codep:0x224c wordp:0xeeb2 size:0x0010 C-string:'WEEB2'
//           WEEC4  codep:0x224c wordp:0xeec4 size:0x000e C-string:'WEEC4'
//           WEED4  codep:0x224c wordp:0xeed4 size:0x000e C-string:'WEED4'
//           WEEE4  codep:0x224c wordp:0xeee4 size:0x0026 C-string:'WEEE4'
//       full-text  codep:0x224c wordp:0xef0c size:0x0012 C-string:'full_dash_text'
//           WEF20  codep:0x224c wordp:0xef20 size:0x0010 C-string:'WEF20'
//           WEF32  codep:0x224c wordp:0xef32 size:0x002e C-string:'WEF32'
//           WEF62  codep:0x224c wordp:0xef62 size:0x002a C-string:'WEF62'
//           WEF8E  codep:0x224c wordp:0xef8e size:0x0016 C-string:'WEF8E'
//           WEFA6  codep:0x224c wordp:0xefa6 size:0x002c C-string:'WEFA6'
//           WEFD4  codep:0x224c wordp:0xefd4 size:0x002c C-string:'WEFD4'
//           WF002  codep:0x224c wordp:0xf002 size:0x0024 C-string:'WF002'
//           WF028  codep:0x224c wordp:0xf028 size:0x007e C-string:'WF028'
//           WF0A8  codep:0x224c wordp:0xf0a8 size:0x000a C-string:'WF0A8'
//           WF0B4  codep:0x224c wordp:0xf0b4 size:0x0028 C-string:'WF0B4'
//           WF0DE  codep:0x224c wordp:0xf0de size:0x0028 C-string:'WF0DE'
//           qtbtn  codep:0x224c wordp:0xf108 size:0x002a C-string:'qtbtn'
//           WF134  codep:0x224c wordp:0xf134 size:0x0040 C-string:'WF134'
//           WF176  codep:0x224c wordp:0xf176 size:0x001c C-string:'WF176'
//           WF194  codep:0x224c wordp:0xf194 size:0x0006 C-string:'WF194'
//           WF19C  codep:0x224c wordp:0xf19c size:0x0008 C-string:'WF19C'
//           WF1A6  codep:0x224c wordp:0xf1a6 size:0x002c C-string:'WF1A6'
//           WF1D4  codep:0x224c wordp:0xf1d4 size:0x0032 C-string:'WF1D4'
//       TD-SCROLL  codep:0x4a4f wordp:0xf214 size:0x000c C-string:'TD_dash_SCROLL'
//           WF222  codep:0x224c wordp:0xf222 size:0x002e C-string:'WF222'
//           WF252  codep:0x224c wordp:0xf252 size:0x0048 C-string:'WF252'
//           WF29C  codep:0x224c wordp:0xf29c size:0x003c C-string:'WF29C'
//           WF2DA  codep:0x224c wordp:0xf2da size:0x0012 C-string:'WF2DA'
//           WF2EE  codep:0x224c wordp:0xf2ee size:0x002c C-string:'WF2EE'
//           WF31C  codep:0x224c wordp:0xf31c size:0x002a C-string:'WF31C'
//           WF348  codep:0x224c wordp:0xf348 size:0x0020 C-string:'WF348'
//           WF36A  codep:0x224c wordp:0xf36a size:0x006a C-string:'WF36A'
//           WF3D6  codep:0x224c wordp:0xf3d6 size:0x0020 C-string:'WF3D6'
//           WF3F8  codep:0x224c wordp:0xf3f8 size:0x0018 C-string:'WF3F8'
//           WF412  codep:0x224c wordp:0xf412 size:0x0026 C-string:'WF412'
//    return-items  codep:0x224c wordp:0xf43a size:0x0008 C-string:'return_dash_items'
//         >DEBRIS  codep:0x224c wordp:0xf44e size:0x0008 C-string:'_gt_DEBRIS'
//           WF458  codep:0x224c wordp:0xf458 size:0x0026 C-string:'WF458'
//           WF480  codep:0x224c wordp:0xf480 size:0x000e C-string:'WF480'
//        (/ITEMS)  codep:0x224c wordp:0xf49b size:0x0000 C-string:'_ro__slash_ITEMS_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TEXTC_slash_L; // TEXTC/L
extern const unsigned short int pp_IsCRITIC; // ?CRITIC
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp__i_FLARE; // 'FLARE
extern const unsigned short int pp__ro_FLARE_rc_; // (FLARE)
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_IsBOMB; // ?BOMB
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_IsWIN; // ?WIN
extern const unsigned short int pp_CTCOLOR; // CTCOLOR
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WRIGHT; // WRIGHT
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_LINE_dash_COUNT; // LINE-COUNT
extern const unsigned short int pp_PM_dash_PTR; // PM-PTR
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_IsFLAT; // ?FLAT
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp__ro_BOMB_rc_; // (BOMB)
extern const unsigned short int pp_LAST_dash_UPDATE; // LAST-UPDATE
extern const unsigned short int pp_ANCHOR_dash_CONTOUR; // ANCHOR-CONTOUR
extern const unsigned short int pp_TVEHICLE; // TVEHICLE
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp_SUPER_dash_BOX; // SUPER-BOX
extern const unsigned short int pp__ro_SYSTEM_rc_; // (SYSTEM)
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern const unsigned short int pp__ro_SURFACE_rc_; // (SURFACE)
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern const unsigned short int pp_LSCAN; // LSCAN
extern LoadDataType SHAPE; // SHAPE
extern LoadDataType RESEMBLES; // RESEMBLES
extern LoadDataType SPEC_dash_NAME; // SPEC-NAME
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color GREEN; // GREEN
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SPECIES; // INST-SPECIES
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType INST_dash_VAL; // INST-VAL
extern IFieldType INST_dash_DATE; // INST-DATE
extern IFieldType PHR_dash_CNT; // PHR-CNT
extern IFieldType PHRASE_dash_MEM; // PHRASE-MEM
extern IFieldType TEXT_dash_IN; // TEXT-IN
void COUNT(); // COUNT
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void CFA(); // CFA
void PAD(); // PAD
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void DrawR(); // .R
void MS(); // MS
void NOP(); // NOP
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_eq_(); // D=
void WITHIN(); // WITHIN
void KEY_2(); // KEY_2
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void _2_ex_(); // 2!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void GetRECORD(); // @RECORD
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void CI_i_(); // CI'
void CJ(); // CJ
void IsNULL(); // ?NULL
void IsCHILD(); // ?CHILD
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IINSERT(); // IINSERT
void IEXTRACT(); // IEXTRACT
void GetNEWSPACE(); // @NEWSPACE
void MAXSPACE(); // MAXSPACE
void IFIND(); // IFIND
void _gt_INACTIVE(); // >INACTIVE
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void GetID(); // @ID
void GetIL(); // @IL
void GetIH(); // @IH
void DrawBACKGROUND(); // .BACKGROUND
void POINT_gt_ICON(); // POINT>ICON
void DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
void IsICONS_dash_AT(); // ?ICONS-AT
void _dash_ICON(); // -ICON
void _plus_ICON(); // +ICON
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void _gt_TVCT(); // >TVCT
void CLICK(); // CLICK
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void WINDOW(); // WINDOW
void WLINE_dash_UP(); // WLINE-UP
void WLINE_dash_D(); // WLINE-D
void GCR(); // GCR
void WSHORTE(); // WSHORTE
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void IsQUIT(); // ?QUIT
void Y_slash_N(); // Y/N
void CURSORSPACE(); // CURSORSPACE
void TEXT_gt_PA(); // TEXT>PA
void IsNEW_dash_HO(); // ?NEW-HO
void GET_dash_BOX(); // GET-BOX
void MAKE_dash_SC(); // MAKE-SC
void delete_dash_scroll_dash_box(); // delete-scroll-box
void BOX_gt_TOC(); // BOX>TOC
void _gt_BOX(); // >BOX
void _ro_BOX_gt__rc_(); // (BOX>)
void CLASS_gt_B(); // CLASS>B
void HUFF_gt_(); // HUFF>
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _slash_MOD(); // /MOD
void _dash_(); // -
void _4_star_(); // 4*
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st_C_ex__gt_(); // <C!>
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void C_gt_(); // C>
void CI(); // CI
void V_gt_DISPLAY(); // V>DISPLAY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_revision = 0xddf6; // revision size: 2
// {0x3a, 0x20}

const unsigned short int pp_ttlines = 0xddfa; // ttlines size: 2
// {0x3a, 0x20}

const unsigned short int pp_PHRASE_dash_MEM = 0xddfe; // PHRASE-MEM size: 201
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x3c, 0x3b, 0xe9, 0x97, 0xdd, 0xc5, 0x50, 0x52, 0x4f, 0x42, 0xd3, 0xa0, 0x3c, 0x49, 0xe9, 0xdc, 0xdd, 0x86, 0x25, 0x54, 0x4f, 0x54, 0x41, 0xcc, 0x29, 0x1d, 0x64, 0x00, 0x0c, 0xde, 0x87, 0x25, 0x52, 0x45, 0x4d, 0x41, 0x49, 0xce, 0x4c, 0x22, 0x5d, 0x17, 0x64, 0x00, 0x1f, 0x31, 0x36, 0x32, 0x38, 0x0f, 0x90, 0x16, 0x01, 0xde, 0x84, 0x4d, 0x41, 0x52, 0xcb, 0x4c, 0x22, 0x3d, 0x23, 0xed, 0x23, 0x3b, 0xe9, 0xb8, 0x15, 0x50, 0x0e, 0x38, 0x0c, 0x3e, 0x13, 0x89, 0x12, 0xfa, 0x15, 0x06, 0x00, 0x50, 0x0e, 0x4a, 0x17, 0x8b, 0x3b, 0x5c, 0x15, 0xec, 0xff, 0xed, 0x22, 0x7f, 0x0e, 0x7b, 0x3b, 0x72, 0x0f, 0x76, 0x6d, 0x9f, 0x6d, 0x20, 0x0f, 0x1f, 0xde, 0x76, 0x6d, 0x90, 0x16, 0xf4, 0xdd, 0x82, 0x25, 0xac, 0x4c, 0x22, 0x1f, 0xde, 0x7f, 0x0e, 0x7f, 0x0e, 0xae, 0x0b, 0x72, 0x0f, 0xaf, 0x21, 0x83, 0x6d, 0xfc, 0xe2, 0x90, 0x16, 0x18, 0xde, 0x82, 0x30, 0xd0, 0x4c, 0x22, 0x20, 0x0f, 0x7b, 0xde, 0x90, 0x16, 0x25, 0xde, 0x84, 0x21, 0x43, 0x53, 0xd0, 0x4c, 0x22, 0x12, 0x0f, 0xb4, 0x05, 0x76, 0x6d, 0x90, 0x16, 0x91, 0xde, 0xc5, 0x45, 0x43, 0x41, 0x53, 0xc5, 0x4c, 0x22, 0xd9, 0x1f, 0xb4, 0x05, 0xae, 0x0b, 0xa3, 0xde, 0x7b, 0x3b, 0x90, 0x16, 0x3d, 0xde, 0xc3, 0x45}

const unsigned short int pp_WDEC9 = 0xdec9; // WDEC9 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE1CB = 0xe1cb; // WE1CB size: 2
// {0x00, 0x00}

const unsigned short int pp_WE1CF = 0xe1cf; // WE1CF size: 2
// {0x3a, 0x20}

const unsigned short int pp_clsp = 0xeaba; // clsp size: 4
// {0x56, 0x3a, 0x20, 0x78}

const unsigned short int pp_WEBCB = 0xebcb; // WEBCB size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEE93 = 0xee93; // WEE93 size: 3
// {0x3a, 0x20, 0x05}


const unsigned short int cc_WDF75 = 0xdf75; // WDF75
const unsigned short int cc_planet = 0xdfd5; // planet
const unsigned short int cc_creature = 0xdfd9; // creature
const unsigned short int cc_artifact = 0xdfdd; // artifact
const unsigned short int cc_analyze_dash_text = 0xdfe1; // analyze-text


// 0xddf2: db 0x77 0x01 'w '

// ================================================
// 0xddf4: WORD 'revision' codep=0x1d29 wordp=0xddf6
// ================================================
// 0xddf6: db 0x3a 0x20 ': '

// ================================================
// 0xddf8: WORD 'ttlines' codep=0x1d29 wordp=0xddfa
// ================================================
// 0xddfa: db 0x3a 0x20 ': '

// ================================================
// 0xddfc: WORD 'PHRASE-MEM' codep=0x1d29 wordp=0xddfe
// ================================================
// orphan
// 0xddfe: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x3c 0x3b 0xe9 0x97 0xdd 0xc5 0x50 0x52 0x4f 0x42 0xd3 0xa0 0x3c 0x49 0xe9 0xdc 0xdd 0x86 0x25 0x54 0x4f 0x54 0x41 0xcc 0x29 0x1d 0x64 0x00 0x0c 0xde 0x87 0x25 0x52 0x45 0x4d 0x41 0x49 0xce 0x4c 0x22 0x5d 0x17 0x64 0x00 0x1f 0x31 0x36 0x32 0x38 0x0f 0x90 0x16 0x01 0xde 0x84 0x4d 0x41 0x52 0xcb 0x4c 0x22 0x3d 0x23 0xed 0x23 0x3b 0xe9 0xb8 0x15 0x50 0x0e 0x38 0x0c 0x3e 0x13 0x89 0x12 0xfa 0x15 0x06 0x00 0x50 0x0e 0x4a 0x17 0x8b 0x3b 0x5c 0x15 0xec 0xff 0xed 0x22 0x7f 0x0e 0x7b 0x3b 0x72 0x0f 0x76 0x6d 0x9f 0x6d 0x20 0x0f 0x1f 0xde 0x76 0x6d 0x90 0x16 0xf4 0xdd 0x82 0x25 0xac 0x4c 0x22 0x1f 0xde 0x7f 0x0e 0x7f 0x0e 0xae 0x0b 0x72 0x0f 0xaf 0x21 0x83 0x6d 0xfc 0xe2 0x90 0x16 0x18 0xde 0x82 0x30 0xd0 0x4c 0x22 0x20 0x0f 0x7b 0xde 0x90 0x16 0x25 0xde 0x84 0x21 0x43 0x53 0xd0 0x4c 0x22 0x12 0x0f 0xb4 0x05 0x76 0x6d 0x90 0x16 0x91 0xde 0xc5 0x45 0x43 0x41 0x53 0xc5 0x4c 0x22 0xd9 0x1f 0xb4 0x05 0xae 0x0b 0xa3 0xde 0x7b 0x3b 0x90 0x16 0x3d 0xde 0xc3 0x45 ':  ALLOT <;    PROB  <I    %TOTA ) d    %REMAI L"] d  1628      MAR L"=# #;   P 8 >       P J  ;\    " {;r vm m    vm     % L"      r  ! m       0 L"  {   %  !CS L"    vm     ECAS L"        {;  =  E'

// ================================================
// 0xdec7: WORD 'WDEC9' codep=0x1d29 wordp=0xdec9
// ================================================
// 0xdec9: db 0x3a 0x20 ': '

// ================================================
// 0xdecb: WORD 'WDECD' codep=0x224c wordp=0xdecd params=1 returns=0
// ================================================

void WDECD() // WDECD
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(3);
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  Push(7);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(0x009a);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(1);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  StoreCRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF_2(); // OFF_2
}


// ================================================
// 0xdeff: WORD 'WDF01' codep=0x224c wordp=0xdf01 params=0 returns=0
// ================================================

void WDF01() // WDF01
{
  Push(Read16(pp_WTOP)); // WTOP @
  WDECD(); // WDECD
}


// ================================================
// 0xdf09: WORD 'WDF0B' codep=0x224c wordp=0xdf0b params=0 returns=0
// ================================================

void WDF0B() // WDF0B
{
  IsNEW_dash_HO(); // ?NEW-HO
  if (Pop() != 0)
  {
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_LAST_dash_UPDATE); // LAST-UPDATE
    StoreD(); // D!
    Push(1);
    Push(pp_STAR_dash_HR); // STAR-HR
    _plus__ex__2(); // +!_2
    Push(Read16(pp_STAR_dash_HR)==0x0018?1:0); // STAR-HR @ 0x0018 =
    if (Pop() != 0)
    {
      Push(pp_STAR_dash_HR); // STAR-HR
      OFF(); // OFF
      Push(1);
      Push(pp_STARDATE); // STARDATE
      _plus__ex__2(); // +!_2
    }
  }
  Push((Read16(pp_STARDATE)==Read16(pp__ro_FLARE_rc_)?1:0) & (Read16(pp_IsWIN)==0?1:0)); // STARDATE @ (FLARE) @ = ?WIN @ 0= AND
  if (Pop() == 0) return;
  Push(pp__i_FLARE); // 'FLARE
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0xdf53: WORD 'WDF55' codep=0x224c wordp=0xdf55 params=2 returns=0
// ================================================

void WDF55() // WDF55
{
  SWAP(); // SWAP
  _4_star_(); // 4*
  Push(Pop() + (Read16(pp_WLEFT) + 2)); //  WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xdf73: WORD 'WDF75' codep=0x2214 wordp=0xdf75
// ================================================
// orphan
// 0xdf75: dw 0x002e

// ================================================
// 0xdf77: WORD 'WDF79' codep=0x224c wordp=0xdf79 params=3 returns=2
// ================================================
// orphan

void WDF79() // WDF79
{
  Push(0xdf75); // 'WDF75'
  Store_3(); // !_3
  Push(0xdf75); // 'WDF75'
  CFA(); // CFA
  Push(0x2790); // '-TRAILING'
  Push(Pop() + 0x000e); //  0x000e +
  Store_3(); // !_3
  _dash_TRAILING(); // -TRAILING
  Push(0x099a); // 'BL'
  CFA(); // CFA
  Push(0x2790); // '-TRAILING'
  Push(Pop() + 0x000e); //  0x000e +
  Store_3(); // !_3
}


// ================================================
// 0xdfa7: WORD 'WRITE-PHRASE' codep=0x224c wordp=0xdfa9 params=0 returns=0
// ================================================
// orphan

void WRITE_dash_PHRASE() // WRITE-PHRASE
{
  unsigned short int i, imax;
  Push(pp_PHRASE_dash_MEM); // PHRASE-MEM
  Push(pp_PM_dash_PTR); // PM-PTR
  _st__ex__gt_(); // <!>
  Push(Read16(pp_LINE_dash_COUNT)); // LINE-COUNT @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_PM_dash_PTR)); // PM-PTR @
    WLINE_dash_UP(); // WLINE-UP
    Push(Read16(cc_TEXTC_slash_L) + 1); // TEXTC/L 1+
    Push(pp_PM_dash_PTR); // PM-PTR
    _st__plus__ex__gt_(); // <+!>
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_LINE_dash_COUNT)); // LINE-COUNT @
  Push(pp_ttlines); // ttlines
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xdfd3: WORD 'planet' codep=0x2214 wordp=0xdfd5
// ================================================
// orphan
// 0xdfd5: dw 0x0020

// ================================================
// 0xdfd7: WORD 'creature' codep=0x2214 wordp=0xdfd9
// ================================================
// 0xdfd9: dw 0x0044

// ================================================
// 0xdfdb: WORD 'artifact' codep=0x2214 wordp=0xdfdd
// ================================================
// orphan
// 0xdfdd: dw 0x001c

// ================================================
// 0xdfdf: WORD 'analyze-text' codep=0x2214 wordp=0xdfe1
// ================================================
// 0xdfe1: dw 0x0039

// ================================================
// 0xdfe3: WORD 'WDFE5' codep=0x73ea wordp=0xdfe5
// ================================================
LoadDataType WDFE5 = {CREATUREIDX, 0x33, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xdfeb: WORD 'WDFED' codep=0x744d wordp=0xdfed
// ================================================
IFieldType WDFED = {CREATUREIDX, 0x12, 0x01};

// ================================================
// 0xdff0: WORD 'content-vol' codep=0x744d wordp=0xdff2
// ================================================
IFieldType content_dash_vol = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xdff5: WORD 'volume' codep=0x73ea wordp=0xdff7
// ================================================
// orphan
LoadDataType volume = {CREATUREIDX, 0x3a, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xdffd: WORD 'hits' codep=0x744d wordp=0xdfff
// ================================================
IFieldType hits = {CREATUREIDX, 0x11, 0x01};

// ================================================
// 0xe002: WORD 'behave' codep=0x744d wordp=0xe004
// ================================================
IFieldType behave = {CREATUREIDX, 0x1b, 0x01};

// ================================================
// 0xe007: WORD 'biod' codep=0x73ea wordp=0xe009
// ================================================
LoadDataType biod = {CREATUREIDX, 0x9a, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe00f: WORD 'inst-starx' codep=0x744d wordp=0xe011
// ================================================
IFieldType inst_dash_starx = {DIRECTORYIDX, 0x15, 0x01};

// ================================================
// 0xe014: WORD 'inst-stary' codep=0x744d wordp=0xe016
// ================================================
IFieldType inst_dash_stary = {DIRECTORYIDX, 0x16, 0x01};

// ================================================
// 0xe019: WORD 'inst-plan#' codep=0x744d wordp=0xe01b
// ================================================
IFieldType inst_dash_plan_n_ = {DIRECTORYIDX, 0x17, 0x01};

// ================================================
// 0xe01e: WORD 'whichguy' codep=0x224c wordp=0xe020 params=0 returns=0
// ================================================
// orphan

void whichguy() // whichguy
{
  Push(Read16(cc_creature)); // creature
  Push(Read16(regsp)); // DUP
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(Read16(pp_RECORD_n_)); // RECORD# @
  GetRECORD(); // @RECORD
  Pop(); // DROP
}


// ================================================
// 0xe032: WORD 'reorg' codep=0x224c wordp=0xe034 params=0 returns=0
// ================================================

void reorg() // reorg
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe042: WORD 'WE044' codep=0x224c wordp=0xe044 params=0 returns=0
// ================================================

void WE044() // WE044
{
  Push(0x0040);
  Push(3);
  Push(7);
  Push(0x0026);
  WINDOW(); // WINDOW
  Push(-1);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe05c: WORD 'werase' codep=0x224c wordp=0xe05e params=0 returns=0
// ================================================

void werase() // werase
{
  WE044(); // WE044
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(-1);
  Push(pp_WLINES); // WLINES
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe070: WORD 'WE072' codep=0x224c wordp=0xe072
// ================================================

void WE072() // WE072
{
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  DrawBACKGROUND(); // .BACKGROUND
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xe082: WORD 'WE084' codep=0x224c wordp=0xe084 params=0 returns=0
// ================================================

void WE084() // WE084
{
  Push(Read16(pp_WLEFT) + 1); // WLEFT @ 1+
  Push(Read16(pp_WBOTTOM) + 5); // WBOTTOM @ 5 +
  POS_dot_(); // POS.
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS KEY TO CONTINUE ", 22); // (.")
}


// ================================================
// 0xe0b3: WORD 'art-analyz' codep=0x224c wordp=0xe0b5 params=0 returns=0
// ================================================

void art_dash_analyz() // art-analyz
{
  Push(Read16(pp_COLOR)); // COLOR @
  Push(Read16(pp_WTOP)); // WTOP @
  Push(Read16(pp_WLEFT)); // WLEFT @
  Push(Read16(pp_WBOTTOM) - 1); // WBOTTOM @ 1-
  Push(Read16(pp_WRIGHT) + 1); // WRIGHT @ 1+
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0);
  Push(0);
  WDF55(); // WDF55
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe0db: WORD 'WE0DD' codep=0x224c wordp=0xe0dd params=0 returns=0
// ================================================
// orphan

void WE0DD() // WE0DD
{
  unsigned short int i, imax;
  Push(0x2001);
  PAD(); // PAD
  Store_3(); // !_3
  Push(Read16(pp_ttlines)); // ttlines @
  Push(Read16(pp_WLINES)); // WLINES @
  OVER(); // OVER
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    PAD(); // PAD
    WLINE_dash_UP(); // WLINE-UP
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_ttlines); // ttlines
  OFF(); // OFF
}


// ================================================
// 0xe105: WORD 'WE107' codep=0x224c wordp=0xe107 params=2 returns=1
// ================================================
// orphan

void WE107() // WE107
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push((Pop()==Pop())?1:0); // =
  a = Pop(); // >R
  _gt_(); // >
  Push(Pop() | a); //  R> OR
}


// ================================================
// 0xe115: WORD 'WE117' codep=0x224c wordp=0xe117 params=1 returns=0
// ================================================
// orphan

void WE117() // WE117
{
  unsigned short int a;
  Push(Read16(pp_PM_dash_PTR) - pp_PHRASE_dash_MEM); // PM-PTR @ PHRASE-MEM -
  Push(Read16(cc_TEXTC_slash_L) + 1); // TEXTC/L 1+
  _slash_(); // /
  Push(Pop() * (Read16(cc_TEXTC_slash_L) + 1) + pp_PHRASE_dash_MEM); //  TEXTC/L 1+ * PHRASE-MEM +
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(3);
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  Push(Read16(cc_TEXTC_slash_L)); // TEXTC/L
  WE107(); // WE107
  if (Pop() != 0)
  {
    Push(Pop() + (Read16(cc_TEXTC_slash_L) + 1)); //  TEXTC/L 1+ +
    Push(Read16(regsp)); // DUP
    Push(0);
    SWAP(); // SWAP
    _st_C_ex__gt_(); // <C!>
    Push(Read16(regsp)); // DUP
    Push(Pop() + 1); //  1+
    Push(pp_PM_dash_PTR); // PM-PTR
    _st__ex__gt_(); // <!>
    Push(1);
    Push(pp_LINE_dash_COUNT); // LINE-COUNT
    _st__plus__ex__gt_(); // <+!>
  }
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  Push(3);
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  _st_C_ex__gt_(); // <C!>
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Read16(pp_PM_dash_PTR)); // PM-PTR @
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  Push(a); // R>
  Push(pp_PM_dash_PTR); // PM-PTR
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe17f: WORD 'WE181' codep=0x224c wordp=0xe181 params=0 returns=0
// ================================================

void WE181() // WE181
{
  PRINT("PICKUP", 6); // (.")
}


// ================================================
// 0xe18c: WORD 'WE18E' codep=0x224c wordp=0xe18e params=0 returns=0
// ================================================

void WE18E() // WE18E
{
  PRINT("DROP", 4); // (.")
}


// ================================================
// 0xe197: WORD '.desc' codep=0x224c wordp=0xe199 params=0 returns=0
// ================================================

void Drawdesc() // .desc
{
  PRINT("DESCRIBE", 8); // (.")
}


// ================================================
// 0xe1a6: WORD '.eras' codep=0x224c wordp=0xe1a8 params=0 returns=0
// ================================================

void Draweras() // .eras
{
  PRINT("ERASE", 5); // (.")
}


// ================================================
// 0xe1b2: WORD 'WE1B4' codep=0x224c wordp=0xe1b4 params=0 returns=0
// ================================================

void WE1B4() // WE1B4
{
  PRINT("RECORD", 6); // (.")
}


// ================================================
// 0xe1bf: WORD 'lpos' codep=0x224c wordp=0xe1c1 params=1 returns=0
// ================================================

void lpos() // lpos
{
  Push(0);
  SWAP(); // SWAP
  WDF55(); // WDF55
}


// ================================================
// 0xe1c9: WORD 'WE1CB' codep=0x1d29 wordp=0xe1cb
// ================================================
// 0xe1cb: db 0x00 0x00 '  '

// ================================================
// 0xe1cd: WORD 'WE1CF' codep=0x1d29 wordp=0xe1cf
// ================================================
// orphan
// 0xe1cf: db 0x3a 0x20 ': '

// ================================================
// 0xe1d1: WORD '#options!' codep=0x224c wordp=0xe1d3 params=1 returns=0
// ================================================

void _n_options_ex_() // #options!
{
  Push(pp_WE1CB); // WE1CB
  Store_3(); // !_3
}


// ================================================
// 0xe1d9: WORD 'WE1DB' codep=0x224c wordp=0xe1db params=0 returns=0
// ================================================

void WE1DB() // WE1DB
{
  Push(1);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  WE18E(); // WE18E
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe1e7: WORD 'WE1E9' codep=0x224c wordp=0xe1e9 params=0 returns=0
// ================================================

void WE1E9() // WE1E9
{
  Push(1);
  lpos(); // lpos
  WE18E(); // WE18E
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Drawdesc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe1fb: WORD 'tm.opts' codep=0x224c wordp=0xe1fd params=0 returns=0
// ================================================

void tm_dot_opts() // tm.opts
{
  Push(1);
  lpos(); // lpos
  PRINT("READ", 4); // (.")
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Draweras(); // .eras
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe214: WORD 'tl.opts' codep=0x224c wordp=0xe216 params=0 returns=0
// ================================================

void tl_dot_opts() // tl.opts
{
  Push(1);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Drawdesc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe222: WORD 'WE224' codep=0x224c wordp=0xe224 params=0 returns=0
// ================================================

void WE224() // WE224
{
  Push(1);
  lpos(); // lpos
  WE18E(); // WE18E
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Drawdesc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe236: WORD 'WE238' codep=0x224c wordp=0xe238 params=0 returns=0
// ================================================

void WE238() // WE238
{
  Push(1);
  lpos(); // lpos
  Drawdesc(); // .desc
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Draweras(); // .eras
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe24a: WORD 'T.OPTIONS' codep=0x4a4f wordp=0xe258
// ================================================

void T_dot_OPTIONS() // T.OPTIONS
{
  switch(Pop()) // T.OPTIONS
  {
  case 26:
    WE1DB(); // WE1DB
    break;
  case 28:
    WE1E9(); // WE1E9
    break;
  case 27:
    tm_dot_opts(); // tm.opts
    break;
  case 30:
    tl_dot_opts(); // tl.opts
    break;
  case 68:
    tl_dot_opts(); // tl.opts
    break;
  case 40:
    WE224(); // WE224
    break;
  case 43:
    WE238(); // WE238
    break;
  case 11:
    return; // EXIT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe27c: WORD 'WE27E' codep=0x224c wordp=0xe27e params=0 returns=0
// ================================================

void WE27E() // WE27E
{
  Push(1);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  WE181(); // WE181
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe28a: WORD 'WE28C' codep=0x224c wordp=0xe28c params=0 returns=0
// ================================================

void WE28C() // WE28C
{
  Push(1);
  lpos(); // lpos
  WE181(); // WE181
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Drawdesc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe29e: WORD 'WE2A0' codep=0x224c wordp=0xe2a0 params=0 returns=0
// ================================================

void WE2A0() // WE2A0
{
  Push(1);
  lpos(); // lpos
  PRINT("READ", 4); // (.")
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  WE1B4(); // WE1B4
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe2b7: WORD 'WE2B9' codep=0x224c wordp=0xe2b9 params=0 returns=0
// ================================================

void WE2B9() // WE2B9
{
  Push(Read16(0x63ef+hits.offset)&0xFF); // hits<IFIELD> C@
  if (Pop() != 0)
  {
    Push(1);
    lpos(); // lpos
    PRINT("CAPTURE", 7); // (.")
  } else
  {
    Push(1);
    lpos(); // lpos
    WE181(); // WE181
  }
  Push(2);
  lpos(); // lpos
  WE1B4(); // WE1B4
  PRINT(" BIO-DATA", 9); // (.")
  Push(3);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Drawdesc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe2f7: WORD 'WE2F9' codep=0x224c wordp=0xe2f9 params=0 returns=0
// ================================================

void WE2F9() // WE2F9
{
  Push(1);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  WE181(); // WE181
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe305: WORD 'WE307' codep=0x224c wordp=0xe307 params=0 returns=0
// ================================================

void WE307() // WE307
{
  werase(); // werase
  art_dash_analyz(); // art-analyz
  Push(0);
  Push(0);
  WDF55(); // WDF55
  GCR(); // GCR
}


// ================================================
// 0xe315: WORD 'P.OPTIONS' codep=0x4a4f wordp=0xe323
// ================================================

void P_dot_OPTIONS() // P.OPTIONS
{
  switch(Pop()) // P.OPTIONS
  {
  case 26:
    WE27E(); // WE27E
    break;
  case 28:
    WE28C(); // WE28C
    break;
  case 27:
    WE2A0(); // WE2A0
    break;
  case 30:
    WE2B9(); // WE2B9
    break;
  case 68:
    WE2B9(); // WE2B9
    break;
  case 40:
    WE2F9(); // WE2F9
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe33f: WORD 'WE341' codep=0x224c wordp=0xe341 params=0 returns=2
// ================================================

void WE341() // WE341
{
  PRINT("LIFEFORM ALREADY RECORDED", 25); // (.")
  Push(0x05dc);
  MS(); // MS
  WE307(); // WE307
}


// ================================================
// 0xe367: WORD 'WE369' codep=0x224c wordp=0xe369 params=0 returns=2
// ================================================

void WE369() // WE369
{
  PRINT("DUPLICATE SPECIMEN", 18); // (.")
  Push(0x05dc);
  MS(); // MS
  WE307(); // WE307
}


// ================================================
// 0xe388: WORD 'volume+!' codep=0x224c wordp=0xe38a params=1 returns=0
// ================================================

void volume_plus__ex_() // volume+!
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+content_dash_vol.offset); // content-vol<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe396: WORD '?VOLUME' codep=0x224c wordp=0xe398 params=0 returns=2
// ================================================

void IsVOLUME() // ?VOLUME
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x001a?1:0); //  0x001a =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
    Push(1);
    MAX(); // MAX
  } else
  {
    Push(Pop()==0x001b?1:0); //  0x001b =
    if (Pop() != 0)
    {
      Push(0);
    } else
    {
      Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
    }
  }
  Push(Read16(regsp)); // DUP
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(Pop() + Read16(0x63ef+content_dash_vol.offset)); //  content-vol<IFIELD> @ +
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  _gt_(); // >
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push2Words("0.");
    WE044(); // WE044
    art_dash_analyz(); // art-analyz
    Push(pp_revision); // revision
    OFF(); // OFF
    PRINT("NOT ENOUGH ROOM IN CARGO HOLD ", 30); // (.")
    Push(0x05dc);
    MS(); // MS
  } else
  {
    Push(1);
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe41b: WORD '(EXTRACT)' codep=0x224c wordp=0xe429 params=2 returns=1
// ================================================

void _ro_EXTRACT_rc_() // (EXTRACT)
{
  unsigned short int a;
  werase(); // werase
  art_dash_analyz(); // art-analyz
  CI(); // CI
  _2SWAP(); // 2SWAP
  GetINST_dash_CLASS(); // @INST-CLASS
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(a); // R>
  BOX_gt_TOC(); // BOX>TOC
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  _ro_BOX_gt__rc_(); // (BOX>)
  IsNULL(); // ?NULL
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  ICLOSE(); // ICLOSE
  Push(pp_revision); // revision
  ON_3(); // ON_3
}


// ================================================
// 0xe459: WORD 'plextract' codep=0x224c wordp=0xe45b params=0 returns=1
// ================================================

void plextract() // plextract
{
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  _1_dot_5_at_(); // 1.5@
  _ro_EXTRACT_rc_(); // (EXTRACT)
}


// ================================================
// 0xe463: WORD 'tvextract' codep=0x224c wordp=0xe465 params=0 returns=1
// ================================================

void tvextract() // tvextract
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  _ro_EXTRACT_rc_(); // (EXTRACT)
}


// ================================================
// 0xe46d: WORD 'niche' codep=0x73ea wordp=0xe46f
// ================================================
LoadDataType niche = {CREATUREIDX, 0x0c, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe475: WORD 'i.level' codep=0x73ea wordp=0xe477
// ================================================
LoadDataType i_dot_level = {CREATUREIDX, 0x36, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe47d: WORD 'size.index' codep=0x73ea wordp=0xe47f
// ================================================
LoadDataType size_dot_index = {CREATUREIDX, 0x0b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe485: WORD 'niche>val' codep=0x224c wordp=0xe487
// ================================================

void niche_gt_val() // niche>val
{
  LoadData(niche); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(4);
  MOD(); // MOD
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0x000a);
    return;
  }
  Push(2);
  MOD(); // MOD
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(0x001e);
    return;
  }
  Push(0x0032);
}


// ================================================
// 0xe4b9: WORD '?dist' codep=0x224c wordp=0xe4bb params=0 returns=2
// ================================================

void Isdist() // ?dist
{
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_X.offset) - 0x03e8); // INST-X<IFIELD> @ 0x03e8 -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(Read16(0x63ef+INST_dash_Y.offset) - 0x0320); // INST-Y<IFIELD> @ 0x0320 -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(1);
  MAX(); // MAX
  ICLOSE(); // ICLOSE
  Push(8);
  _slash_(); // /
}


// ================================================
// 0xe4ef: WORD 'valuate' codep=0x224c wordp=0xe4f1
// ================================================

void valuate() // valuate
{
  niche_gt_val(); // niche>val
  LoadData(i_dot_level); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  LoadData(size_dot_index); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() * Pop()); // *
  Isdist(); // ?dist
  Push(Pop() + 1); //  1+
  Push(Pop() * Pop()); // *
  Push((Read16(0x63ef+hits.offset)&0xFF)==0?1:0); // hits<IFIELD> C@ 0=
  if (Pop() != 0)
  {
    Push(0x000a);
    _slash_(); // /
  }
  Push(1);
  MAX(); // MAX
}


// ================================================
// 0xe521: WORD '1$=' codep=0x224c wordp=0xe523
// ================================================

void _1_do__eq_() // 1$=
{
  unsigned short int i, imax;
  Push(1);
  LoadData(SPEC_dash_NAME); // from 'SPECIMEN'
  Push(3);
  PICK(); // PICK
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    PAD(); // PAD
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    Push((Pop()==Pop())?1:0); // =
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      SWAP(); // SWAP
      Push(Pop()==0?1:0); //  0=
      SWAP(); // SWAP
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe557: WORD 'info-setup' codep=0x224c wordp=0xe559 params=0 returns=0
// ================================================

void info_dash_setup() // info-setup
{
  Push(0);
  Push(5);
  WDF55(); // WDF55
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe565: WORD '$setup' codep=0x224c wordp=0xe567
// ================================================

void _do_setup() // $setup
{
  unsigned short int a;
  LoadData(RESEMBLES); // from 'CREATURE'
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    LoadData(SHAPE); // from 'CREATURE'
    _1_dot_5_at_(); // 1.5@
  }
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
  PAD(); // PAD
  Push(Read16(0x63ef+PHR_dash_CNT.offset)&0xFF); // PHR-CNT<IFIELD> C@
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  CMOVE(); // CMOVE
  Push(a); // R>
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe591: WORD '$match' codep=0x224c wordp=0xe593
// ================================================

void _do_match() // $match
{
  unsigned short int i, imax;
  _do_setup(); // $setup
  Push(0x0028);
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  Push(0x0040);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(pp_RECORD_n_); // RECORD#
    _st__ex__gt_(); // <!>
    _1_do__eq_(); // 1$=
    if (Pop() != 0)
    {
      Push(i); // I
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xe5bf: WORD 'tvxy' codep=0x224c wordp=0xe5c1 params=0 returns=2
// ================================================

void tvxy() // tvxy
{
  Push(pp_TVEHICLE); // TVEHICLE
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5d1: WORD 'xy!' codep=0x224c wordp=0xe5d3 params=2 returns=0
// ================================================

void xy_ex_() // xy!
{
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xe5dd: WORD '.cargo' codep=0x224c wordp=0xe5df params=0 returns=0
// ================================================

void Drawcargo() // .cargo
{
  Push(0x0074);
  Push(0x009d);
  POS_dot_(); // POS.
  Push(3);
  GetColor(BLACK);
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+content_dash_vol.offset)); // content-vol<IFIELD> @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(5);
    MAX(); // MAX
    Push(5);
    _slash_(); // /
  }
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(3);
  DrawR(); // .R
  PRINT("% FULL", 6); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe61a: WORD '?>spec' codep=0x224c wordp=0xe61c
// ================================================

void Is_gt_spec() // ?>spec
{
  valuate(); // valuate
  _do_match(); // $match
  IsVOLUME(); // ?VOLUME
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    plextract(); // plextract
  } else
  {
    Push2Words("0.");
  }
  _gt_C_plus_S(); // >C+S
  SWAP(); // SWAP
}


// ================================================
// 0xe636: WORD '?attack' codep=0x224c wordp=0xe638
// ================================================

void Isattack() // ?attack
{
  Push(((Read16(0x63ef+behave.offset)&0xFF) & 1) & (((Read16(0x63ef+hits.offset)&0xFF)==0?1:0)==0?1:0)); // behave<IFIELD> C@ 1 AND hits<IFIELD> C@ 0= 0= AND
  Push(Read16(0x63ef+WDFED.offset)&0xFF); // WDFED<IFIELD> C@
  LoadData(WDFE5); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Push(0);
    Push(0x0064);
    RRND(); // RRND
    Push(0x000a);
    _st_(); // <
    return;
  }
  Push(1);
}


// ================================================
// 0xe670: WORD 'WE672' codep=0x224c wordp=0xe672 params=1 returns=2
// ================================================

void WE672() // WE672
{
  Push(Read16(Pop())); //  @
  Push(8);
  _slash_(); // /
}


// ================================================
// 0xe67a: WORD 'WE67C' codep=0x224c wordp=0xe67c params=1 returns=2
// ================================================

void WE67C() // WE67C
{
  Push(0x63ef+INST_dash_VAL.offset); // INST-VAL<IFIELD>
  Store_3(); // !_3
  tvxy(); // tvxy
  xy_ex_(); // xy!
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  OFF(); // OFF
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(0x63ef+INST_dash_DATE.offset); // INST-DATE<IFIELD>
  Store_3(); // !_3
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  WE672(); // WE672
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  WE672(); // WE672
  ICLOSE(); // ICLOSE
  Push(0x63ef+inst_dash_stary.offset); // inst-stary<IFIELD>
  C_ex_(); // C!
  Push(0x63ef+inst_dash_starx.offset); // inst-starx<IFIELD>
  C_ex_(); // C!
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(0x63ef+inst_dash_plan_n_.offset); // inst-plan#<IFIELD>
  C_ex_(); // C!
}


// ================================================
// 0xe6b6: WORD 'WE6B8' codep=0x224c wordp=0xe6b8
// ================================================

void WE6B8() // WE6B8
{
  WE307(); // WE307
  Push(pp_revision); // revision
  ON_3(); // ON_3
  valuate(); // valuate
  LoadData(biod); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 0x000f); //  C@ 0x000f AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0);
    WE341(); // WE341
    Push(pp_revision); // revision
    OFF(); // OFF
  } else
  {
    Push(0x000f);
    LoadData(biod); // from 'CREATURE'
    Push(Read16(Pop())&0xFF); //  C@
    Push(Pop() + Pop()); // +
    LoadData(biod); // from 'CREATURE'
    C_ex_(); // C!
  }
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(8);
  _slash_(); // /
  Push(0x002b);
  _do_match(); // $match
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  WE67C(); // WE67C
  C_gt_(); // C>
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  _gt_BOX(); // >BOX
  CDROP(); // CDROP
  info_dash_setup(); // info-setup
  PRINT("LIFEFORM RECORDED ", 18); // (.")
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe72b: WORD 'WE72D' codep=0x224c wordp=0xe72d params=0 returns=0
// ================================================

void WE72D() // WE72D
{
  info_dash_setup(); // info-setup
  PRINT("THE CAPTURE ATTEMPT WAS UNSUCCESSFUL ", 37); // (.")
}


// ================================================
// 0xe759: WORD 'WE75B' codep=0x224c wordp=0xe75b
// ================================================

void WE75B() // WE75B
{
  unsigned short int a;
  WE307(); // WE307
  Isattack(); // ?attack
  LoadData(biod); // from 'CREATURE'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0010);
  _gt_(); // >
  Push(!Pop()); //  NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Is_gt_spec(); // ?>spec
    a = Pop(); // >R
    if (Pop() != 0)
    {
      _dash_ICON(); // -ICON
      WE072(); // WE072
      Push(0x0028);
      info_dash_setup(); // info-setup
      PRINT("LIFEFORM CAPTURED AND PUT IN STASIS ", 36); // (.")
      SWAP(); // SWAP
      ICREATE(); // ICREATE
      _gt_C_plus_S(); // >C+S
      WE67C(); // WE67C
      Push(Read16(a)); // R@
      Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
      Store_3(); // !_3
      C_gt_(); // C>
      Push(pp_TV_dash_HOLD); // TV-HOLD
      Get_gt_C_plus_S(); // @>C+S
      _gt_BOX(); // >BOX
      ICLOSE(); // ICLOSE
      Push(0x00f0);
      LoadData(biod); // from 'CREATURE'
      Push(Read16(Pop())&0xFF); //  C@
      Push(Pop() + Pop()); // +
      LoadData(biod); // from 'CREATURE'
      C_ex_(); // C!
      CI(); // CI
      ICLOSE(); // ICLOSE
      _gt_INACTIVE(); // >INACTIVE
    } else
    {
      Pop(); Pop(); // 2DROP
      ICLOSE(); // ICLOSE
    }
    Push(a); // R>
    volume_plus__ex_(); // volume+!
  } else
  {
    LoadData(biod); // from 'CREATURE'
    Push(Read16(Pop())&0xFF); //  C@
    Push(0x0010);
    _gt_(); // >
    if (Pop() != 0)
    {
      WE369(); // WE369
    } else
    {
      WE72D(); // WE72D
    }
  }
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Drawcargo(); // .cargo
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe80c: WORD 'WE80E' codep=0x224c wordp=0xe80e params=2 returns=2
// ================================================

void WE80E() // WE80E
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
// 0xe834: WORD 'WE836' codep=0x224c wordp=0xe836 params=1 returns=0
// ================================================

void WE836() // WE836
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
// 0xe858: WORD 'WE85A' codep=0x224c wordp=0xe85a params=1 returns=0
// ================================================

void WE85A() // WE85A
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
// 0xe87c: WORD 'WE87E' codep=0x224c wordp=0xe87e params=2 returns=0
// ================================================

void WE87E() // WE87E
{
  WE80E(); // WE80E
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(0);
  DrawR(); // .R
  WE85A(); // WE85A
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
  WE836(); // WE836
}


// ================================================
// 0xe8ac: WORD 'WE8AE' codep=0x224c wordp=0xe8ae params=1 returns=0
// ================================================

void WE8AE() // WE8AE
{
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(Pop() + 0x120c); //  0x120c +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    PRINT("0", 1); // (.")
  }
  Push(0);
  DrawR(); // .R
  PRINT("-", 1); // (.")
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    PRINT("0", 1); // (.")
  }
  Push(0);
  DrawR(); // .R
  PRINT("-", 1); // (.")
  Push(0);
  DrawR(); // .R
}


// ================================================
// 0xe8fe: WORD 'WE900' codep=0x224c wordp=0xe900 params=0 returns=0
// ================================================

void WE900() // WE900
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe906: WORD 'WE908' codep=0x224c wordp=0xe908 params=0 returns=0
// ================================================

void WE908() // WE908
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe90e: WORD 'WE910' codep=0x224c wordp=0xe910 params=0 returns=0
// ================================================

void WE910() // WE910
{
  WE307(); // WE307
  Push(0);
  Push(0);
  WDF55(); // WDF55
  Push(-2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  WE900(); // WE900
  PRINT("SYSTEM: ", 8); // (.")
  WE908(); // WE908
  Push(Read16(0x63ef+inst_dash_starx.offset)&0xFF); // inst-starx<IFIELD> C@
  Push(3);
  DrawR(); // .R
  PRINT(",", 1); // (.")
  Push(Read16(0x63ef+inst_dash_stary.offset)&0xFF); // inst-stary<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x005a);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  WE900(); // WE900
  PRINT("PLANET: ", 8); // (.")
  WE908(); // WE908
  Push(Read16(0x63ef+inst_dash_plan_n_.offset)&0xFF); // inst-plan#<IFIELD> C@
  Draw(); // .
  GCR(); // GCR
  WE900(); // WE900
  PRINT("LOCATION: ", 10); // (.")
  WE908(); // WE908
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  WE87E(); // WE87E
  Push(0x005a);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  WE900(); // WE900
  PRINT("DATE: ", 6); // (.")
  WE908(); // WE908
  Push(Read16(0x63ef+INST_dash_DATE.offset)); // INST-DATE<IFIELD> @
  WE8AE(); // WE8AE
  WE084(); // WE084
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xe99e: WORD 'WE9A0' codep=0x224c wordp=0xe9a0 params=0 returns=1
// ================================================

void WE9A0() // WE9A0
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==3?1:0); //  3 =
}


// ================================================
// 0xe9a8: WORD 'WE9AA' codep=0x224c wordp=0xe9aa params=0 returns=0
// ================================================

void WE9AA() // WE9AA
{
  WE9A0(); // WE9A0
  if (Pop() == 0) return;
  GCR(); // GCR
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("ARM THIS DEVICE\? NO [  ] YES ", 29); // (.")
  Y_slash_N(); // Y/N
  if (Pop() != 0)
  {
    Push(pp__ro_ORBIT_rc_); // (ORBIT)
    Get_gt_C_plus_S(); // @>C+S
    Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
    ICLOSE(); // ICLOSE
    CI(); // CI
    Push(pp__ro_BOMB_rc_); // (BOMB)
    _1_dot_5_ex_(); // 1.5!
  } else
  {
    Push(0);
  }
  Push(pp_IsBOMB); // ?BOMB
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe9f8: WORD 'WE9FA' codep=0x224c wordp=0xe9fa params=0 returns=0
// ================================================

void WE9FA() // WE9FA
{
  WE9A0(); // WE9A0
  Push(Pop() & ((Read16(pp_IsBOMB)==0?1:0)==0?1:0)); //  ?BOMB @ 0= 0= AND
  if (Pop() == 0) return;
  Push(pp_IsBOMB); // ?BOMB
  OFF_2(); // OFF_2
  GCR(); // GCR
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("DISARMING DEVICE ", 17); // (.")
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xea30: WORD 'pickup' codep=0x224c wordp=0xea32 params=0 returns=0
// ================================================

void pickup() // pickup
{
  IsVOLUME(); // ?VOLUME
  if (Pop() != 0)
  {
    plextract(); // plextract
    _gt_C_plus_S(); // >C+S
    _dash_ICON(); // -ICON
    C_gt_(); // C>
    Push(pp_TV_dash_HOLD); // TV-HOLD
    Get_gt_C_plus_S(); // @>C+S
    _gt_BOX(); // >BOX
    ICLOSE(); // ICLOSE
  }
  volume_plus__ex_(); // volume+!
  Drawcargo(); // .cargo
}


// ================================================
// 0xea4e: WORD 'delete.it' codep=0x224c wordp=0xea50
// ================================================
// orphan

void delete_dot_it() // delete.it
{
  _dash_ICON(); // -ICON
  reorg(); // reorg
  IDELETE(); // IDELETE
  Push(pp_revision); // revision
  ON_3(); // ON_3
}


// ================================================
// 0xea5c: WORD 'pldelete' codep=0x224c wordp=0xea5e params=0 returns=1
// ================================================
// orphan

void pldelete() // pldelete
{
  plextract(); // plextract
  _dash_ICON(); // -ICON
  Pop(); Pop(); // 2DROP
  Push(pp_revision); // revision
  OFF(); // OFF
}


// ================================================
// 0xea6a: WORD 'tvdelete' codep=0x224c wordp=0xea6c params=0 returns=1
// ================================================

void tvdelete() // tvdelete
{
  tvextract(); // tvextract
  _dash_ICON(); // -ICON
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea74: WORD 'new>box' codep=0x224c wordp=0xea76
// ================================================

void new_gt_box() // new>box
{
  unsigned short int a;
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_CLASS(); // @INST-CLASS
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(a); // I
  CLASS_gt_B(); // CLASS>B
  IFIND(); // IFIND
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(a); // I
    CLASS_gt_B(); // CLASS>B
    Push(0x000b);
    SWAP(); // SWAP
    Push(1);
    _star_CREATE(); // *CREATE
  }
  Push(a); // R>
  BOX_gt_TOC(); // BOX>TOC
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_CLASS(); // @INST-CLASS
  GetINST_dash_SPECIES(); // @INST-SPECIES
  ICLOSE(); // ICLOSE
  Pop(); Pop(); // 2DROP
  CI(); // CI
  IINSERT(); // IINSERT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeab8: WORD 'clsp' codep=0x1d29 wordp=0xeaba
// ================================================
// 0xeaba: db 0x56 0x3a 0x20 0x78 'V: x'

// ================================================
// 0xeabe: WORD '?deposited' codep=0x224c wordp=0xeac0
// ================================================
// orphan

void Isdeposited() // ?deposited
{
  unsigned short int i, imax, a;
  Push(pp_clsp); // clsp
  _2_ex_(); // 2!
  tvxy(); // tvxy
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_AT(); // ?ICONS-AT
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);
  SWAP(); // SWAP
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      SWAP(); // SWAP
      POINT_gt_ICON(); // POINT>ICON
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      a = Pop(); // >R
      GetINST_dash_CLASS(); // @INST-CLASS
      GetINST_dash_SPECIES(); // @INST-SPECIES
      Push(pp_clsp); // clsp
      _2_at_(); // 2@
      D_eq_(); // D=
      Push(a); // R>
      SWAP(); // SWAP
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(1);
      }
      ICLOSE(); // ICLOSE
    } else
    {
      SWAP(); // SWAP
      Pop(); // DROP
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeb14: WORD 'dropit' codep=0x224c wordp=0xeb16
// ================================================

void dropit() // dropit
{
  tvextract(); // tvextract
  _gt_C_plus_S(); // >C+S
  Push(-Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @ NEGATE
  volume_plus__ex_(); // volume+!
  Drawcargo(); // .cargo
  GetINST_dash_CLASS(); // @INST-CLASS
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Isdeposited(); // ?deposited
  tvxy(); // tvxy
  xy_ex_(); // xy!
  Push(0xc437); // 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  reorg(); // reorg
  C_gt_(); // C>
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  Get_gt_C_plus_S(); // @>C+S
  ROT(); // ROT
  if (Pop() != 0)
  {
    _gt_BOX(); // >BOX
  } else
  {
    new_gt_box(); // new>box
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb50: WORD 'art-anlyz' codep=0x73ea wordp=0xeb52
// ================================================
LoadDataType art_dash_anlyz = {ARTIFACTIDX, 0x1d, 0x01, 0x1e, 0x652c};

// ================================================
// 0xeb58: WORD 'art-text' codep=0x73ea wordp=0xeb5a
// ================================================
LoadDataType art_dash_text = {ARTIFACTIDX, 0x18, 0x01, 0x1e, 0x652c};

// ================================================
// 0xeb60: WORD 'arttalk' codep=0x224c wordp=0xeb62 params=1 returns=0
// ================================================

void arttalk() // arttalk
{
  unsigned short int i, imax;
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop() + i * 0x0026); //  I 0x0026 * +
    Push(0x0026);
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    GCR(); // GCR
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xeb84: WORD 'art.desc' codep=0x224c wordp=0xeb86
// ================================================

void art_dot_desc() // art.desc
{
  werase(); // werase
  art_dash_analyz(); // art-analyz
  LoadData(art_dash_anlyz); // from 'ARTIFACT'
  Push(Read16(Pop())&0xFF); //  C@
  if (Pop() != 0)
  {
    Push(Read16(cc_analyze_dash_text)); // analyze-text
    LoadData(art_dash_text); // from 'ARTIFACT'
    Push(Read16(Pop())&0xFF); //  C@
    GetRECORD(); // @RECORD
    arttalk(); // arttalk
    SET_dash_CURRENT(); // SET-CURRENT
    WE084(); // WE084
    KEY_2(); // KEY_2
    Pop(); // DROP
    return;
  }
  PRINT("THIS ITEM NOT ANALYZED", 22); // (.")
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xebc9: WORD 'WEBCB' codep=0x1d29 wordp=0xebcb
// ================================================
// 0xebcb: db 0x3a 0x20 ': '

// ================================================
// 0xebcd: WORD 'TS.ACT' codep=0x4a4f wordp=0xebd8
// ================================================

void TS_dot_ACT() // TS.ACT
{
  switch(Pop()) // TS.ACT
  {
  case 1:
    dropit(); // dropit
    break;
  case 2:
    WE910(); // WE910
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xebe4: WORD 'PS.ACT' codep=0x4a4f wordp=0xebef
// ================================================

void PS_dot_ACT() // PS.ACT
{
  switch(Pop()) // PS.ACT
  {
  case 1:
    pickup(); // pickup
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xebf7: WORD 'WEBF9' codep=0x224c wordp=0xebf9
// ================================================

void WEBF9() // WEBF9
{
  Push(Read16(pp_WEBCB)); // WEBCB @
  if (Pop() != 0)
  {
    TS_dot_ACT(); // TS.ACT case
    return;
  }
  PS_dot_ACT(); // PS.ACT case
}


// ================================================
// 0xec0b: WORD 'WEC0D' codep=0x224c wordp=0xec0d params=0 returns=0
// ================================================

void WEC0D() // WEC0D
{
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(0x01f4);
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+content_dash_vol.offset)); // content-vol<IFIELD> @
  ICLOSE(); // ICLOSE
  _dash_(); // -
  MIN(); // MIN
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec29: WORD 'WEC2B' codep=0x224c wordp=0xec2b
// ================================================

void WEC2B() // WEC2B
{
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
  dropit(); // dropit
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec3f: WORD 'WEC41' codep=0x224c wordp=0xec41 params=0 returns=0
// ================================================

void WEC41() // WEC41
{
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  WEC0D(); // WEC0D
  pickup(); // pickup
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec4f: WORD 'WEC51' codep=0x224c wordp=0xec51 params=1 returns=0
// ================================================

void WEC51() // WEC51
{
  Pop(); // DROP
  Push(Read16(pp_WEBCB)); // WEBCB @
  if (Pop() != 0)
  {
    WEC2B(); // WEC2B
    return;
  }
  WEC41(); // WEC41
}


// ================================================
// 0xec65: WORD 'WEC67' codep=0x224c wordp=0xec67 params=0 returns=0
// ================================================

void WEC67() // WEC67
{
  WE9FA(); // WE9FA
  pickup(); // pickup
}


// ================================================
// 0xec6d: WORD 'WEC6F' codep=0x224c wordp=0xec6f
// ================================================

void WEC6F() // WEC6F
{
  WE9AA(); // WE9AA
  dropit(); // dropit
}


// ================================================
// 0xec75: WORD 'PA.ACT' codep=0x4a4f wordp=0xec80
// ================================================

void PA_dot_ACT() // PA.ACT
{
  switch(Pop()) // PA.ACT
  {
  case 1:
    WEC67(); // WEC67
    break;
  case 2:
    art_dot_desc(); // art.desc
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xec8c: WORD 'TA.ACT' codep=0x4a4f wordp=0xec97
// ================================================

void TA_dot_ACT() // TA.ACT
{
  switch(Pop()) // TA.ACT
  {
  case 1:
    WEC6F(); // WEC6F
    break;
  case 2:
    art_dot_desc(); // art.desc
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeca3: WORD 'WECA5' codep=0x224c wordp=0xeca5
// ================================================

void WECA5() // WECA5
{
  Push(Read16(pp_WEBCB)); // WEBCB @
  if (Pop() != 0)
  {
    TA_dot_ACT(); // TA.ACT case
    return;
  }
  PA_dot_ACT(); // PA.ACT case
}


// ================================================
// 0xecb7: WORD 'WECB9' codep=0x224c wordp=0xecb9 params=0 returns=2
// ================================================

void WECB9() // WECB9
{
  Push(0x63ef+INST_dash_SPECIES.offset); // INST-SPECIES<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  ICLOSE(); // ICLOSE
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0xc216); // 'P>CT'
  MODULE(); // MODULE
}


// ================================================
// 0xecd1: WORD 'WECD3' codep=0x224c wordp=0xecd3 params=0 returns=2
// ================================================

void WECD3() // WECD3
{
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
  WECB9(); // WECB9
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      Push(0xc227); // 'CTUP'
      MODULE(); // MODULE
      WE084(); // WE084
      KEY_2(); // KEY_2
      Pop(); // DROP
      WECB9(); // WECB9
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
  }
  Push(0xc227); // 'CTUP'
  MODULE(); // MODULE
  WE084(); // WE084
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xed09: WORD 'WED0B' codep=0x224c wordp=0xed0b params=0 returns=2
// ================================================

void WED0B() // WED0B
{
  WDF01(); // WDF01
  werase(); // werase
  art_dash_analyz(); // art-analyz
  WECD3(); // WECD3
}


// ================================================
// 0xed15: WORD 'WED17' codep=0x224c wordp=0xed17 params=0 returns=0
// ================================================

void WED17() // WED17
{
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(0x63ef+INST_dash_DATE.offset); // INST-DATE<IFIELD>
  Store_3(); // !_3
  pickup(); // pickup
}


// ================================================
// 0xed23: WORD 'PM.ACT' codep=0x4a4f wordp=0xed2e
// ================================================

void PM_dot_ACT() // PM.ACT
{
  switch(Pop()) // PM.ACT
  {
  case 1:
    WED0B(); // WED0B
    break;
  case 2:
    WED17(); // WED17
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed3a: WORD 'TM.ACT' codep=0x4a4f wordp=0xed45
// ================================================

void TM_dot_ACT() // TM.ACT
{
  switch(Pop()) // TM.ACT
  {
  case 1:
    WED0B(); // WED0B
    break;
  case 2:
    tvdelete(); // tvdelete
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed51: WORD 'WED53' codep=0x224c wordp=0xed53
// ================================================

void WED53() // WED53
{
  Push(Read16(pp_WEBCB)); // WEBCB @
  if (Pop() != 0)
  {
    TM_dot_ACT(); // TM.ACT case
    return;
  }
  PM_dot_ACT(); // PM.ACT case
}


// ================================================
// 0xed65: WORD 'WED67' codep=0x224c wordp=0xed67 params=0 returns=1
// ================================================

void WED67() // WED67
{
  WDF01(); // WDF01
  werase(); // werase
  art_dash_analyz(); // art-analyz
  Push(5);
  Push(pp_ttlines); // ttlines
  _st__ex__gt_(); // <!>
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(0xcd8c); // 'SAYIT'
  MODULE(); // MODULE
  SET_STR_AS_PARAM(" ");
  Pop(); // DROP
  Push(Pop() - 1); //  1-
  WLINE_dash_UP(); // WLINE-UP
  WE084(); // WE084
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xed8d: WORD 'PL.ACT' codep=0x4a4f wordp=0xed98
// ================================================

void PL_dot_ACT() // PL.ACT
{
  switch(Pop()) // PL.ACT
  {
  case 1:
    WE75B(); // WE75B
    break;
  case 2:
    WE6B8(); // WE6B8
    break;
  case 3:
    WED67(); // WED67
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeda8: WORD 'WEDAA' codep=0x224c wordp=0xedaa
// ================================================

void WEDAA() // WEDAA
{
  Push(Read16(pp_WEBCB)); // WEBCB @
  if (Pop() != 0)
  {
    Pop(); // DROP
    WED67(); // WED67
    return;
  }
  PL_dot_ACT(); // PL.ACT case
}


// ================================================
// 0xedbe: WORD 'DO.BIO' codep=0x4a4f wordp=0xedc9
// ================================================

void DO_dot_BIO() // DO.BIO
{
  switch(Pop()) // DO.BIO
  {
  case 1:
    WE910(); // WE910
    break;
  case 2:
    tvdelete(); // tvdelete
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xedd5: WORD 'DISPATCH' codep=0x4a4f wordp=0xede2
// ================================================

void DISPATCH() // DISPATCH
{
  switch(Pop()) // DISPATCH
  {
  case 68:
    WEDAA(); // WEDAA
    break;
  case 27:
    WED53(); // WED53
    break;
  case 26:
    WEC51(); // WEC51
    break;
  case 28:
    WECA5(); // WECA5
    break;
  case 40:
    WEBF9(); // WEBF9
    break;
  case 43:
    DO_dot_BIO(); // DO.BIO case
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xedfe: WORD 'WEE00' codep=0x224c wordp=0xee00 params=0 returns=0
// ================================================

void WEE00() // WEE00
{
  Push(6);
  Push(6);
  WDF55(); // WDF55
  Push(Read16(pp_COLOR)); // COLOR @
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("SCROLL ITEMS: ^\\   QUIT: []", 27); // (.")
  Push(7);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
  Push(-1);
  Push(pp_WLINES); // WLINES
  _st__plus__ex__gt_(); // <+!>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee3c: WORD 'WEE3E' codep=0x224c wordp=0xee3e params=0 returns=0
// ================================================

void WEE3E() // WEE3E
{
  Push(Read16(pp_revision)); // revision @
  if (Pop() == 0) return;
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  art_dash_analyz(); // art-analyz
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WE072(); // WE072
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(6);
  WDF55(); // WDF55
  PRINT("REVISING TERRAIN VEHICLE INVENTORY", 34); // (.")
  Push(pp_revision); // revision
  OFF_2(); // OFF_2
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee91: WORD 'WEE93' codep=0x1d29 wordp=0xee93
// ================================================
// 0xee93: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xee96: WORD 'WEE98' codep=0x224c wordp=0xee98 params=0 returns=2
// ================================================

void WEE98() // WEE98
{
  Push(pp_WEE93); // WEE93
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xee9e: WORD 'WEEA0' codep=0x224c wordp=0xeea0 params=0 returns=0
// ================================================

void WEEA0() // WEEA0
{
  WEE98(); // WEE98
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp_WEE93); // WEE93
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb0: WORD 'WEEB2' codep=0x224c wordp=0xeeb2 params=0 returns=0
// ================================================

void WEEB2() // WEEB2
{
  WEE98(); // WEE98
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp_WEE93); // WEE93
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeec2: WORD 'WEEC4' codep=0x224c wordp=0xeec4 params=0 returns=0
// ================================================

void WEEC4() // WEEC4
{
  WEE98(); // WEE98
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeed2: WORD 'WEED4' codep=0x224c wordp=0xeed4 params=0 returns=0
// ================================================

void WEED4() // WEED4
{
  WDF01(); // WDF01
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WDF01(); // WDF01
}


// ================================================
// 0xeee2: WORD 'WEEE4' codep=0x224c wordp=0xeee4 params=0 returns=0
// ================================================

void WEEE4() // WEEE4
{
  unsigned short int i, imax;
  Push(Read16(pp_SCROLL_dash_) - 6); // SCROLL- @ 6 -
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    ABS(); // ABS
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      GetColor(BLACK);
      WSHORTE(); // WSHORTE
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xef0a: WORD 'full-text' codep=0x224c wordp=0xef0c params=0 returns=0
// ================================================

void full_dash_text() // full-text
{
  Push(7);
  Push(0x0010);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__ex__gt_(); // <!>
  Push(pp_WLINES); // WLINES
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xef1e: WORD 'WEF20' codep=0x224c wordp=0xef20 params=0 returns=1
// ================================================

void WEF20() // WEF20
{
  WEEC4(); // WEEC4
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(!(Pop()==0x000b?1:0)); //  0x000b = NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef30: WORD 'WEF32' codep=0x224c wordp=0xef32 params=1 returns=0
// ================================================

void WEF32() // WEF32
{
  WDF01(); // WDF01
  Push(pp_WDEC9); // WDEC9
  _st__plus__ex__gt_(); // <+!>
  Push(pp_WDEC9); // WDEC9
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  Push(1);
  MAX(); // MAX
  Push(Read16(pp_WE1CB)); // WE1CB @
  MIN(); // MIN
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
  WE044(); // WE044
  Push(-(Read16(pp_WDEC9) * 7)); // WDEC9 @ 7 * NEGATE
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WDF01(); // WDF01
}


// ================================================
// 0xef60: WORD 'WEF62' codep=0x224c wordp=0xef62 params=0 returns=0
// ================================================

void WEF62() // WEF62
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Push(0);
  } else
  {
    Push(-1);
  }
  Push(pp_WEBCB); // WEBCB
  _st__ex__gt_(); // <!>
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef8c: WORD 'WEF8E' codep=0x224c wordp=0xef8e params=0 returns=2
// ================================================

void WEF8E() // WEF8E
{
  WE044(); // WE044
  full_dash_text(); // full-text
  WEE3E(); // WEE3E
  delete_dash_scroll_dash_box(); // delete-scroll-box
  MAKE_dash_SC(); // MAKE-SC
  Push(pp_SUPER_dash_BOX); // SUPER-BOX
  _1_dot_5_at_(); // 1.5@
  GET_dash_BOX(); // GET-BOX
  WEF62(); // WEF62
  WEEE4(); // WEEE4
}


// ================================================
// 0xefa4: WORD 'WEFA6' codep=0x224c wordp=0xefa6
// ================================================

void WEFA6() // WEFA6
{
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  art_dash_analyz(); // art-analyz
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WEEC4(); // WEEC4
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Read16(pp_WEBCB)); // WEBCB @
  if (Pop() != 0)
  {
    T_dot_OPTIONS(); // T.OPTIONS case
  } else
  {
    P_dot_OPTIONS(); // P.OPTIONS case
  }
  WEED4(); // WEED4
}


// ================================================
// 0xefd2: WORD 'WEFD4' codep=0x224c wordp=0xefd4 params=0 returns=0
// ================================================

void WEFD4() // WEFD4
{
  unsigned short int i, imax;
  WEE00(); // WEE00
  Push(Read16(pp_WLINES)); // WLINES @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push((Read16(pp_WTOP) - 1) - i * 7); // WTOP @ 1- I 7 * -
    POS_dot_(); // POS.
    TEXT_gt_PA(); // TEXT>PA
    PAD(); // PAD
    _do__dot_(); // $.
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf000: WORD 'WF002' codep=0x224c wordp=0xf002 params=0 returns=0
// ================================================

void WF002() // WF002
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_WEE93); // WEE93
  _1_dot_5_ex_(); // 1.5!
  Push(0);
  do
  {
    Push(Pop() + 1); //  1+
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  _gt_1FONT(); // >1FONT
  WEFD4(); // WEFD4
  IPREV(); // IPREV
  WDF01(); // WDF01
  Pop(); // DROP
}


// ================================================
// 0xf026: WORD 'WF028' codep=0x224c wordp=0xf028 params=0 returns=0
// ================================================

void WF028() // WF028
{
  Push(1);
  Push(pp_WDEC9); // WDEC9
  Store_3(); // !_3
  Push(pp_revision); // revision
  OFF(); // OFF
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF
  while(1)
  {
    IsQUIT(); // ?QUIT
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    XYSCAN(); // XYSCAN
    Push(1);
    Push(0);
    _2OVER(); // 2OVER
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      Push(-1);
      WEF32(); // WEF32
    } else
    {
      Push(-1);
      Push(0);
      _2OVER(); // 2OVER
      D_eq_(); // D=
      if (Pop() != 0)
      {
        Pop(); Pop(); // 2DROP
        Push(1);
        WEF32(); // WEF32
      } else
      {
        Pop(); // DROP
        IsTRIG(); // ?TRIG
        if (Pop() != 0)
        {
          Push(Read16(pp_WDEC9)); // WDEC9 @
          GetINST_dash_CLASS(); // @INST-CLASS
          DISPATCH(); // DISPATCH case
          Push(Read16(pp_revision)); // revision @
          if (Pop() != 0)
          {
            WEF8E(); // WEF8E
          }
          Push(pp_FQUIT); // FQUIT
          ON_3(); // ON_3
        }
        Pop(); // DROP
      }
    }
  }
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  WE044(); // WE044
  art_dash_analyz(); // art-analyz
  WEEE4(); // WEEE4
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  WF002(); // WF002
  WEF62(); // WEF62
}


// ================================================
// 0xf0a6: WORD 'WF0A8' codep=0x224c wordp=0xf0a8 params=1 returns=1
// ================================================

void WF0A8() // WF0A8
{
  Push(Read16(pp_COLOR)); // COLOR @
  SWAP(); // SWAP
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf0b2: WORD 'WF0B4' codep=0x224c wordp=0xf0b4 params=1 returns=0
// ================================================

void WF0B4() // WF0B4
{
  WF0A8(); // WF0A8
  GetColor(BLACK);
  WF0A8(); // WF0A8
  Push(0x0055);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT(" ", 1); // (.")
  StoreCOLOR(); // !COLOR
  Push(0x0055);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("^", 1); // (.")
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf0dc: WORD 'WF0DE' codep=0x224c wordp=0xf0de params=1 returns=0
// ================================================

void WF0DE() // WF0DE
{
  WF0A8(); // WF0A8
  GetColor(BLACK);
  WF0A8(); // WF0A8
  Push(0x005b);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT(" ", 1); // (.")
  StoreCOLOR(); // !COLOR
  Push(0x005b);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("\\", 1); // (.")
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf106: WORD 'qtbtn' codep=0x224c wordp=0xf108 params=1 returns=0
// ================================================

void qtbtn() // qtbtn
{
  WF0A8(); // WF0A8
  GetColor(BLACK);
  WF0A8(); // WF0A8
  Push(0x0085);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("  ", 2); // (.")
  StoreCOLOR(); // !COLOR
  Push(0x0085);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("[]", 2); // (.")
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf132: WORD 'WF134' codep=0x224c wordp=0xf134 params=0 returns=1
// ================================================

void WF134() // WF134
{
  WEEC4(); // WEEC4
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x000b?1:0); //  0x000b =
  if (Pop() != 0)
  {
    GetINST_dash_SPECIES(); // @INST-SPECIES
    Push(Read16(regsp)); // DUP
    Push(Pop()==0x0028?1:0); //  0x0028 =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(1);
    } else
    {
      Push(Pop()==0x002c?1:0); //  0x002c =
      if (Pop() != 0)
      {
        Push(-1);
      } else
      {
        Push(0);
      }
    }
  } else
  {
    Push(0);
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf174: WORD 'WF176' codep=0x224c wordp=0xf176 params=1 returns=0
// ================================================

void WF176() // WF176
{
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(-1);
    Push(pp_WEBCB); // WEBCB
    _st__ex__gt_(); // <!>
  }
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(0);
  Push(pp_WEBCB); // WEBCB
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf192: WORD 'WF194' codep=0x224c wordp=0xf194 params=0 returns=0
// ================================================

void WF194() // WF194
{
  WF134(); // WF134
  WF176(); // WF176
}


// ================================================
// 0xf19a: WORD 'WF19C' codep=0x224c wordp=0xf19c params=0 returns=0
// ================================================

void WF19C() // WF19C
{
  WF134(); // WF134
  Push(-Pop()); //  NEGATE
  WF176(); // WF176
}


// ================================================
// 0xf1a4: WORD 'WF1A6' codep=0x224c wordp=0xf1a6 params=0 returns=0
// ================================================

void WF1A6() // WF1A6
{
  GetColor(GREEN);
  WF0B4(); // WF0B4
  CLICK(); // CLICK
  INEXT(); // INEXT
  WEEA0(); // WEEA0
  WF194(); // WF194
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  WDF01(); // WDF01
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(-1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WLINE_dash_UP(); // WLINE-UP
  Push(1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WDF01(); // WDF01
  GetColor(LT_dash_BLUE);
  WF0B4(); // WF0B4
}


// ================================================
// 0xf1d2: WORD 'WF1D4' codep=0x224c wordp=0xf1d4 params=0 returns=0
// ================================================

void WF1D4() // WF1D4
{
  GetColor(GREEN);
  WF0DE(); // WF0DE
  CLICK(); // CLICK
  WF19C(); // WF19C
  IPREV(); // IPREV
  WEEB2(); // WEEB2
  WEE98(); // WEE98
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  PAD(); // PAD
  WDF01(); // WDF01
  Push(-1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WLINE_dash_D(); // WLINE-D
  Push(1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WDF01(); // WDF01
  GetColor(LT_dash_BLUE);
  WF0DE(); // WF0DE
}


// ================================================
// 0xf206: WORD 'TD-SCROLL' codep=0x4a4f wordp=0xf214
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 65535:
    WF1D4(); // WF1D4
    break;
  case 1:
    WF1A6(); // WF1A6
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf220: WORD 'WF222' codep=0x224c wordp=0xf222
// ================================================

void WF222() // WF222
{
  do
  {
    WDF0B(); // WDF0B
    XYSCAN(); // XYSCAN
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      TD_dash_SCROLL(); // TD-SCROLL case
    } else
    {
      Pop(); // DROP
    }
    IsTRIG(); // ?TRIG
    WEF20(); // WEF20
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      WEFA6(); // WEFA6
      Push(pp_FQUIT); // FQUIT
      OFF(); // OFF
      WF028(); // WF028
    }
    Push(Read16(pp_FQUIT)); // FQUIT @
  } while(Pop() == 0);
}


// ================================================
// 0xf250: WORD 'WF252' codep=0x224c wordp=0xf252 params=2 returns=2
// ================================================

void WF252() // WF252
{
  Push2Words("0.");
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    while(1)
    {
      _2DUP(); // 2DUP
      Push(Pop() | Pop()); // OR
      Push(Pop()==0?1:0); //  0=
      IsLAST(); // ?LAST
      Push(Pop()==0?1:0); //  0=
      Push(Pop() & Pop()); // AND
      if (Pop() == 0) break;

      CJ(); // CJ
      CI(); // CI
      D_eq_(); // D=
      if (Pop() != 0)
      {
        Pop(); Pop(); // 2DROP
        CI_i_(); // CI'
      }
      INEXT(); // INEXT
    }
    CJ(); // CJ
    CI(); // CI
    D_eq_(); // D=
    if (Pop() != 0)
    {
      Pop(); Pop(); // 2DROP
      CI_i_(); // CI'
    }
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf29a: WORD 'WF29C' codep=0x224c wordp=0xf29c params=0 returns=2
// ================================================

void WF29C() // WF29C
{
  Push2Words("0.");
  while(1)
  {
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    Push(Pop()==0?1:0); //  0=
    IsLAST(); // ?LAST
    Push(Pop()==0?1:0); //  0=
    Push(Pop() & Pop()); // AND
    if (Pop() == 0) return;
    Push(0x000b);
    Push(0);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      CI(); // CI
      CJ(); // CJ
      _gt_C_plus_S(); // >C+S
      WF252(); // WF252
      ICLOSE(); // ICLOSE
      _2DUP(); // 2DUP
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        _2SWAP(); // 2SWAP
      }
      Pop(); Pop(); // 2DROP
    }
    INEXT(); // INEXT
  }
}


// ================================================
// 0xf2d8: WORD 'WF2DA' codep=0x224c wordp=0xf2da params=0 returns=0
// ================================================
// orphan

void WF2DA() // WF2DA
{
  IsNULL(); // ?NULL
  if (Pop() == 0) return;
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  IPREV(); // IPREV
  Push2Words("0.");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xf2ec: WORD 'WF2EE' codep=0x224c wordp=0xf2ee params=0 returns=0
// ================================================

void WF2EE() // WF2EE
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  WF252(); // WF252
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(pp__ro_PLANET_rc_); // (PLANET)
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    WF29C(); // WF29C
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
  }
  C_gt_(); // C>
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xf31a: WORD 'WF31C' codep=0x224c wordp=0xf31c
// ================================================

void WF31C() // WF31C
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x001b?1:0); //  0x001b =
  if (Pop() != 0)
  {
    Push(Read16(pp_STARDATE)); // STARDATE @
    Push(0x63ef+INST_dash_DATE.offset); // INST-DATE<IFIELD>
    Store_3(); // !_3
  }
  IEXTRACT(); // IEXTRACT
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  Get_gt_C_plus_S(); // @>C+S
  new_gt_box(); // new>box
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  Push(-1);
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf346: WORD 'WF348' codep=0x224c wordp=0xf348 params=0 returns=1
// ================================================

void WF348() // WF348
{
  tvxy(); // tvxy
  Push(Pop() - Read16(0x63ef+INST_dash_Y.offset)); //  INST-Y<IFIELD> @ -
  ABS(); // ABS
  Push(2);
  _st_(); // <
  SWAP(); // SWAP
  Push(Pop() - Read16(0x63ef+INST_dash_X.offset)); //  INST-X<IFIELD> @ -
  ABS(); // ABS
  Push(2);
  _st_(); // <
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf368: WORD 'WF36A' codep=0x224c wordp=0xf36a
// ================================================

void WF36A() // WF36A
{
  unsigned short int i, imax, a;
  Push(0x7d00);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_ICON(); // POINT>ICON
    GetID(); // @ID
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(0x0011);
    _st_(); // <
    Push(Read16(a)); // R@
    Push(0x0014);
    Push(0x0017);
    WITHIN(); // WITHIN
    Push(Pop() | Pop()); // OR
    Push(Read16(a)); // R@
    Push(Pop()==0x00fe?1:0); //  0x00fe =
    Push(Pop() | Pop()); // OR
    Push(Pop() | (a==0x002c?1:0)); //  R> 0x002c = OR
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      WF348(); // WF348
      if (Pop() != 0)
      {
        WF2EE(); // WF2EE
        WF31C(); // WF31C
        CDROP(); // CDROP
        ICLOSE(); // ICLOSE
      }
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(0x000a);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf3d4: WORD 'WF3D6' codep=0x224c wordp=0xf3d6 params=2 returns=0
// ================================================

void WF3D6() // WF3D6
{
  CJ(); // CJ
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    tvxy(); // tvxy
    Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
    Store_3(); // !_3
    Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
    Store_3(); // !_3
  }
  _ro_BOX_gt__rc_(); // (BOX>)
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
}


// ================================================
// 0xf3f6: WORD 'WF3F8' codep=0x224c wordp=0xf3f8
// ================================================

void WF3F8() // WF3F8
{
  IOPEN(); // IOPEN
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    WF3D6(); // WF3D6
  }
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  IPREV(); // IPREV
}


// ================================================
// 0xf410: WORD 'WF412' codep=0x224c wordp=0xf412 params=0 returns=0
// ================================================

void WF412() // WF412
{
  Push(0x7d00);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
  IOPEN(); // IOPEN
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    WF3F8(); // WF3F8
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x000a);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf438: WORD 'return-items' codep=0x224c wordp=0xf43a params=0 returns=0
// ================================================

void return_dash_items() // return-items
{
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  Get_gt_C_plus_S(); // @>C+S
  WF412(); // WF412
}


// ================================================
// 0xf442: WORD '>DEBRIS' codep=0x224c wordp=0xf44e params=0 returns=0
// ================================================
// entry

void _gt_DEBRIS() // >DEBRIS
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  WF412(); // WF412
}


// ================================================
// 0xf456: WORD 'WF458' codep=0x224c wordp=0xf458
// ================================================

void WF458() // WF458
{
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001c);
    Push(5);
    IFIND(); // IFIND
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0);
  }
  Push(pp_IsFLAT); // ?FLAT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf47e: WORD 'WF480' codep=0x224c wordp=0xf480
// ================================================

void WF480() // WF480
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  WF458(); // WF458
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf48e: WORD '(/ITEMS)' codep=0x224c wordp=0xf49b params=0 returns=4
// ================================================
// entry

void _ro__slash_ITEMS_rc_() // (/ITEMS)
{
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  GetNEWSPACE(); // @NEWSPACE
  D_st_(); // D<
  Push(!(Pop() & Read16(pp_IsCRITIC))); //  ?CRITIC @ AND NOT
  if (Pop() != 0)
  {
    do
    {
      WE044(); // WE044
      art_dash_analyz(); // art-analyz
      Push(pp__ro_SCROLL_1); // (SCROLL_1
      _1_dot_5_at_(); // 1.5@
      Push(Pop() | Pop()); // OR
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        MAKE_dash_SC(); // MAKE-SC
        WF36A(); // WF36A
        Push(pp_SUPER_dash_BOX); // SUPER-BOX
        _1_dot_5_at_(); // 1.5@
        GET_dash_BOX(); // GET-BOX
      }
      Push(pp_XORMODE); // XORMODE
      OFF(); // OFF
      GetColor(WHITE);
      StoreCOLOR(); // !COLOR
      WEEE4(); // WEEE4
      GetColor(WHITE);
      StoreCOLOR(); // !COLOR
      WF002(); // WF002
      WEF62(); // WEF62
      WF222(); // WF222
      IsQUIT(); // ?QUIT
    } while(Pop() == 0);
    GetColor(GREEN);
    qtbtn(); // qtbtn
    delete_dash_scroll_dash_box(); // delete-scroll-box
    Push2Words("0.");
    Push(pp__ro_SCROLL_1); // (SCROLL_1
    _1_dot_5_ex_(); // 1.5!
    return_dash_items(); // return-items
    CDROP(); // CDROP
    ICLOSE(); // ICLOSE
    full_dash_text(); // full-text
    Push(7);
    Push(pp_ttlines); // ttlines
    _st__ex__gt_(); // <!>
    GetColor(LT_dash_BLUE);
    qtbtn(); // qtbtn
    WDF01(); // WDF01
    art_dash_analyz(); // art-analyz
    WF480(); // WF480
    return;
  }
  WE044(); // WE044
  art_dash_analyz(); // art-analyz
  Push(6);
  Push(0);
  WDF55(); // WDF55
  PRINT("NOT ENOUGH STORAGE FOR FUNCTION", 31); // (.")
  Push(0x0fa0);
  MS(); // MS
  art_dash_analyz(); // art-analyz
}

// 0xf541: db 0x49 0x54 0x45 0x4d 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ITEMS__________________________ '

