// ====== OVERLAY 'ITEMS-OV' ======
// store offset = 0xdde0
// overlay size   = 0x1780

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//        revision  codep:0x1d29 parp:0xddf6 size:0x0002 C-string:'revision'
//         ttlines  codep:0x1d29 parp:0xddfa size:0x0002 C-string:'ttlines'
//      PHRASE-MEM  codep:0x1d29 parp:0xddfe size:0x00c9 C-string:'PHRASE_dash_MEM'
//      UNK_0xdec9  codep:0x1d29 parp:0xdec9 size:0x0002 C-string:'UNK_0xdec9'
//      UNK_0xdecd  codep:0x224c parp:0xdecd size:0x0032 C-string:'UNK_0xdecd'
//      UNK_0xdf01  codep:0x224c parp:0xdf01 size:0x0008 C-string:'UNK_0xdf01'
//      UNK_0xdf0b  codep:0x224c parp:0xdf0b size:0x0048 C-string:'UNK_0xdf0b'
//      UNK_0xdf55  codep:0x224c parp:0xdf55 size:0x001e C-string:'UNK_0xdf55'
//      UNK_0xdf75  codep:0x2214 parp:0xdf75 size:0x0002 C-string:'UNK_0xdf75'
//      UNK_0xdf79  codep:0x224c parp:0xdf79 size:0x002e C-string:'UNK_0xdf79'
//    WRITE-PHRASE  codep:0x224c parp:0xdfa9 size:0x002a C-string:'WRITE_dash_PHRASE'
//          planet  codep:0x2214 parp:0xdfd5 size:0x0002 C-string:'planet'
//        creature  codep:0x2214 parp:0xdfd9 size:0x0002 C-string:'creature'
//        artifact  codep:0x2214 parp:0xdfdd size:0x0002 C-string:'artifact'
//    analyze-text  codep:0x2214 parp:0xdfe1 size:0x0002 C-string:'analyze_dash_text'
//      UNK_0xdfe5  codep:0x73ea parp:0xdfe5 size:0x0006 C-string:'UNK_0xdfe5'
//      UNK_0xdfed  codep:0x744d parp:0xdfed size:0x0003 C-string:'UNK_0xdfed'
//     content-vol  codep:0x744d parp:0xdff2 size:0x0003 C-string:'content_dash_vol'
//          volume  codep:0x73ea parp:0xdff7 size:0x0006 C-string:'volume'
//            hits  codep:0x744d parp:0xdfff size:0x0003 C-string:'hits'
//          behave  codep:0x744d parp:0xe004 size:0x0003 C-string:'behave'
//            biod  codep:0x73ea parp:0xe009 size:0x0006 C-string:'biod'
//      inst-starx  codep:0x744d parp:0xe011 size:0x0003 C-string:'inst_dash_starx'
//      inst-stary  codep:0x744d parp:0xe016 size:0x0003 C-string:'inst_dash_stary'
//      inst-plan#  codep:0x744d parp:0xe01b size:0x0003 C-string:'inst_dash_plan_n_'
//        whichguy  codep:0x224c parp:0xe020 size:0x0012 C-string:'whichguy'
//           reorg  codep:0x224c parp:0xe034 size:0x000e C-string:'reorg'
//      UNK_0xe044  codep:0x224c parp:0xe044 size:0x0018 C-string:'UNK_0xe044'
//          werase  codep:0x224c parp:0xe05e size:0x0012 C-string:'werase'
//      UNK_0xe072  codep:0x224c parp:0xe072 size:0x0010 C-string:'UNK_0xe072'
//      UNK_0xe084  codep:0x224c parp:0xe084 size:0x002f C-string:'UNK_0xe084'
//      art-analyz  codep:0x224c parp:0xe0b5 size:0x0026 C-string:'art_dash_analyz'
//      UNK_0xe0dd  codep:0x224c parp:0xe0dd size:0x0028 C-string:'UNK_0xe0dd'
//      UNK_0xe107  codep:0x224c parp:0xe107 size:0x000e C-string:'UNK_0xe107'
//      UNK_0xe117  codep:0x224c parp:0xe117 size:0x0068 C-string:'UNK_0xe117'
//      UNK_0xe181  codep:0x224c parp:0xe181 size:0x000b C-string:'UNK_0xe181'
//      UNK_0xe18e  codep:0x224c parp:0xe18e size:0x0009 C-string:'UNK_0xe18e'
//           .desc  codep:0x224c parp:0xe199 size:0x000d C-string:'Drawdesc'
//           .eras  codep:0x224c parp:0xe1a8 size:0x000a C-string:'Draweras'
//      UNK_0xe1b4  codep:0x224c parp:0xe1b4 size:0x000b C-string:'UNK_0xe1b4'
//            lpos  codep:0x224c parp:0xe1c1 size:0x0008 C-string:'lpos'
//      UNK_0xe1cb  codep:0x1d29 parp:0xe1cb size:0x0002 C-string:'UNK_0xe1cb'
//      UNK_0xe1cf  codep:0x1d29 parp:0xe1cf size:0x0002 C-string:'UNK_0xe1cf'
//       #options!  codep:0x224c parp:0xe1d3 size:0x0006 C-string:'_n_options_ex_'
//      UNK_0xe1db  codep:0x224c parp:0xe1db size:0x000c C-string:'UNK_0xe1db'
//      UNK_0xe1e9  codep:0x224c parp:0xe1e9 size:0x0012 C-string:'UNK_0xe1e9'
//         tm.opts  codep:0x224c parp:0xe1fd size:0x0017 C-string:'tm_dot_opts'
//         tl.opts  codep:0x224c parp:0xe216 size:0x000c C-string:'tl_dot_opts'
//      UNK_0xe224  codep:0x224c parp:0xe224 size:0x0012 C-string:'UNK_0xe224'
//      UNK_0xe238  codep:0x224c parp:0xe238 size:0x0012 C-string:'UNK_0xe238'
//       T.OPTIONS  codep:0x4a4f parp:0xe258 size:0x0024 C-string:'T_dot_OPTIONS'
//      UNK_0xe27e  codep:0x224c parp:0xe27e size:0x000c C-string:'UNK_0xe27e'
//      UNK_0xe28c  codep:0x224c parp:0xe28c size:0x0012 C-string:'UNK_0xe28c'
//      UNK_0xe2a0  codep:0x224c parp:0xe2a0 size:0x0017 C-string:'UNK_0xe2a0'
//      UNK_0xe2b9  codep:0x224c parp:0xe2b9 size:0x003e C-string:'UNK_0xe2b9'
//      UNK_0xe2f9  codep:0x224c parp:0xe2f9 size:0x000c C-string:'UNK_0xe2f9'
//      UNK_0xe307  codep:0x224c parp:0xe307 size:0x000e C-string:'UNK_0xe307'
//       P.OPTIONS  codep:0x4a4f parp:0xe323 size:0x001c C-string:'P_dot_OPTIONS'
//      UNK_0xe341  codep:0x224c parp:0xe341 size:0x0026 C-string:'UNK_0xe341'
//      UNK_0xe369  codep:0x224c parp:0xe369 size:0x001f C-string:'UNK_0xe369'
//        volume+!  codep:0x224c parp:0xe38a size:0x000c C-string:'volume_plus__ex_'
//         ?VOLUME  codep:0x224c parp:0xe398 size:0x0083 C-string:'IsVOLUME'
//       (EXTRACT)  codep:0x224c parp:0xe429 size:0x0030 C-string:'_ro_EXTRACT_rc_'
//       plextract  codep:0x224c parp:0xe45b size:0x0008 C-string:'plextract'
//       tvextract  codep:0x224c parp:0xe465 size:0x0008 C-string:'tvextract'
//           niche  codep:0x73ea parp:0xe46f size:0x0006 C-string:'niche'
//         i.level  codep:0x73ea parp:0xe477 size:0x0006 C-string:'i_dot_level'
//      size.index  codep:0x73ea parp:0xe47f size:0x0006 C-string:'size_dot_index'
//       niche>val  codep:0x224c parp:0xe487 size:0x0032 C-string:'niche_gt_val'
//           ?dist  codep:0x224c parp:0xe4bb size:0x0034 C-string:'Isdist'
//         valuate  codep:0x224c parp:0xe4f1 size:0x0030 C-string:'valuate'
//             1$=  codep:0x224c parp:0xe523 size:0x0034 C-string:'_1_do__eq_'
//      info-setup  codep:0x224c parp:0xe559 size:0x000c C-string:'info_dash_setup'
//          $setup  codep:0x224c parp:0xe567 size:0x002a C-string:'_do_setup'
//          $match  codep:0x224c parp:0xe593 size:0x002c C-string:'_do_match'
//            tvxy  codep:0x224c parp:0xe5c1 size:0x0010 C-string:'tvxy'
//             xy!  codep:0x224c parp:0xe5d3 size:0x000a C-string:'xy_ex_'
//          .cargo  codep:0x224c parp:0xe5df size:0x003b C-string:'Drawcargo'
//          ?>spec  codep:0x224c parp:0xe61c size:0x001a C-string:'Is_gt_spec'
//         ?attack  codep:0x224c parp:0xe638 size:0x0038 C-string:'Isattack'
//      UNK_0xe672  codep:0x224c parp:0xe672 size:0x0008 C-string:'UNK_0xe672'
//      UNK_0xe67c  codep:0x224c parp:0xe67c size:0x003a C-string:'UNK_0xe67c'
//      UNK_0xe6b8  codep:0x224c parp:0xe6b8 size:0x0073 C-string:'UNK_0xe6b8'
//      UNK_0xe72d  codep:0x224c parp:0xe72d size:0x002c C-string:'UNK_0xe72d'
//      UNK_0xe75b  codep:0x224c parp:0xe75b size:0x00b1 C-string:'UNK_0xe75b'
//      UNK_0xe80e  codep:0x224c parp:0xe80e size:0x0026 C-string:'UNK_0xe80e'
//      UNK_0xe836  codep:0x224c parp:0xe836 size:0x0022 C-string:'UNK_0xe836'
//      UNK_0xe85a  codep:0x224c parp:0xe85a size:0x0022 C-string:'UNK_0xe85a'
//      UNK_0xe87e  codep:0x224c parp:0xe87e size:0x002e C-string:'UNK_0xe87e'
//      UNK_0xe8ae  codep:0x224c parp:0xe8ae size:0x0050 C-string:'UNK_0xe8ae'
//      UNK_0xe900  codep:0x224c parp:0xe900 size:0x0006 C-string:'UNK_0xe900'
//      UNK_0xe908  codep:0x224c parp:0xe908 size:0x0006 C-string:'UNK_0xe908'
//      UNK_0xe910  codep:0x224c parp:0xe910 size:0x008e C-string:'UNK_0xe910'
//      UNK_0xe9a0  codep:0x224c parp:0xe9a0 size:0x0008 C-string:'UNK_0xe9a0'
//      UNK_0xe9aa  codep:0x224c parp:0xe9aa size:0x004e C-string:'UNK_0xe9aa'
//      UNK_0xe9fa  codep:0x224c parp:0xe9fa size:0x0036 C-string:'UNK_0xe9fa'
//          pickup  codep:0x224c parp:0xea32 size:0x001c C-string:'pickup'
//       delete.it  codep:0x224c parp:0xea50 size:0x000c C-string:'delete_dot_it'
//        pldelete  codep:0x224c parp:0xea5e size:0x000c C-string:'pldelete'
//        tvdelete  codep:0x224c parp:0xea6c size:0x0008 C-string:'tvdelete'
//         new>box  codep:0x224c parp:0xea76 size:0x0042 C-string:'new_gt_box'
//            clsp  codep:0x1d29 parp:0xeaba size:0x0004 C-string:'clsp'
//      ?deposited  codep:0x224c parp:0xeac0 size:0x0054 C-string:'Isdeposited'
//          dropit  codep:0x224c parp:0xeb16 size:0x003a C-string:'dropit'
//       art-anlyz  codep:0x73ea parp:0xeb52 size:0x0006 C-string:'art_dash_anlyz'
//        art-text  codep:0x73ea parp:0xeb5a size:0x0006 C-string:'art_dash_text'
//         arttalk  codep:0x224c parp:0xeb62 size:0x0022 C-string:'arttalk'
//        art.desc  codep:0x224c parp:0xeb86 size:0x0043 C-string:'art_dot_desc'
//      UNK_0xebcb  codep:0x1d29 parp:0xebcb size:0x0002 C-string:'UNK_0xebcb'
//          TS.ACT  codep:0x4a4f parp:0xebd8 size:0x000c C-string:'TS_dot_ACT'
//          PS.ACT  codep:0x4a4f parp:0xebef size:0x0008 C-string:'PS_dot_ACT'
//      UNK_0xebf9  codep:0x224c parp:0xebf9 size:0x0012 C-string:'UNK_0xebf9'
//      UNK_0xec0d  codep:0x224c parp:0xec0d size:0x001c C-string:'UNK_0xec0d'
//      UNK_0xec2b  codep:0x224c parp:0xec2b size:0x0014 C-string:'UNK_0xec2b'
//      UNK_0xec41  codep:0x224c parp:0xec41 size:0x000e C-string:'UNK_0xec41'
//      UNK_0xec51  codep:0x224c parp:0xec51 size:0x0014 C-string:'UNK_0xec51'
//      UNK_0xec67  codep:0x224c parp:0xec67 size:0x0006 C-string:'UNK_0xec67'
//      UNK_0xec6f  codep:0x224c parp:0xec6f size:0x0006 C-string:'UNK_0xec6f'
//          PA.ACT  codep:0x4a4f parp:0xec80 size:0x000c C-string:'PA_dot_ACT'
//          TA.ACT  codep:0x4a4f parp:0xec97 size:0x000c C-string:'TA_dot_ACT'
//      UNK_0xeca5  codep:0x224c parp:0xeca5 size:0x0012 C-string:'UNK_0xeca5'
//      UNK_0xecb9  codep:0x224c parp:0xecb9 size:0x0018 C-string:'UNK_0xecb9'
//      UNK_0xecd3  codep:0x224c parp:0xecd3 size:0x0036 C-string:'UNK_0xecd3'
//      UNK_0xed0b  codep:0x224c parp:0xed0b size:0x000a C-string:'UNK_0xed0b'
//      UNK_0xed17  codep:0x224c parp:0xed17 size:0x000c C-string:'UNK_0xed17'
//          PM.ACT  codep:0x4a4f parp:0xed2e size:0x000c C-string:'PM_dot_ACT'
//          TM.ACT  codep:0x4a4f parp:0xed45 size:0x000c C-string:'TM_dot_ACT'
//      UNK_0xed53  codep:0x224c parp:0xed53 size:0x0012 C-string:'UNK_0xed53'
//      UNK_0xed67  codep:0x224c parp:0xed67 size:0x0026 C-string:'UNK_0xed67'
//          PL.ACT  codep:0x4a4f parp:0xed98 size:0x0010 C-string:'PL_dot_ACT'
//      UNK_0xedaa  codep:0x224c parp:0xedaa size:0x0014 C-string:'UNK_0xedaa'
//          DO.BIO  codep:0x4a4f parp:0xedc9 size:0x000c C-string:'DO_dot_BIO'
//        DISPATCH  codep:0x4a4f parp:0xede2 size:0x001c C-string:'DISPATCH'
//      UNK_0xee00  codep:0x224c parp:0xee00 size:0x003c C-string:'UNK_0xee00'
//      UNK_0xee3e  codep:0x224c parp:0xee3e size:0x0053 C-string:'UNK_0xee3e'
//      UNK_0xee93  codep:0x1d29 parp:0xee93 size:0x0003 C-string:'UNK_0xee93'
//      UNK_0xee98  codep:0x224c parp:0xee98 size:0x0006 C-string:'UNK_0xee98'
//      UNK_0xeea0  codep:0x224c parp:0xeea0 size:0x0010 C-string:'UNK_0xeea0'
//      UNK_0xeeb2  codep:0x224c parp:0xeeb2 size:0x0010 C-string:'UNK_0xeeb2'
//      UNK_0xeec4  codep:0x224c parp:0xeec4 size:0x000e C-string:'UNK_0xeec4'
//      UNK_0xeed4  codep:0x224c parp:0xeed4 size:0x000e C-string:'UNK_0xeed4'
//      UNK_0xeee4  codep:0x224c parp:0xeee4 size:0x0026 C-string:'UNK_0xeee4'
//       full-text  codep:0x224c parp:0xef0c size:0x0012 C-string:'full_dash_text'
//      UNK_0xef20  codep:0x224c parp:0xef20 size:0x0010 C-string:'UNK_0xef20'
//      UNK_0xef32  codep:0x224c parp:0xef32 size:0x002e C-string:'UNK_0xef32'
//      UNK_0xef62  codep:0x224c parp:0xef62 size:0x002a C-string:'UNK_0xef62'
//      UNK_0xef8e  codep:0x224c parp:0xef8e size:0x0016 C-string:'UNK_0xef8e'
//      UNK_0xefa6  codep:0x224c parp:0xefa6 size:0x002c C-string:'UNK_0xefa6'
//      UNK_0xefd4  codep:0x224c parp:0xefd4 size:0x002c C-string:'UNK_0xefd4'
//      UNK_0xf002  codep:0x224c parp:0xf002 size:0x0024 C-string:'UNK_0xf002'
//      UNK_0xf028  codep:0x224c parp:0xf028 size:0x007e C-string:'UNK_0xf028'
//      UNK_0xf0a8  codep:0x224c parp:0xf0a8 size:0x000a C-string:'UNK_0xf0a8'
//      UNK_0xf0b4  codep:0x224c parp:0xf0b4 size:0x0028 C-string:'UNK_0xf0b4'
//      UNK_0xf0de  codep:0x224c parp:0xf0de size:0x0028 C-string:'UNK_0xf0de'
//           qtbtn  codep:0x224c parp:0xf108 size:0x002a C-string:'qtbtn'
//      UNK_0xf134  codep:0x224c parp:0xf134 size:0x0040 C-string:'UNK_0xf134'
//      UNK_0xf176  codep:0x224c parp:0xf176 size:0x001c C-string:'UNK_0xf176'
//      UNK_0xf194  codep:0x224c parp:0xf194 size:0x0006 C-string:'UNK_0xf194'
//      UNK_0xf19c  codep:0x224c parp:0xf19c size:0x0008 C-string:'UNK_0xf19c'
//      UNK_0xf1a6  codep:0x224c parp:0xf1a6 size:0x002c C-string:'UNK_0xf1a6'
//      UNK_0xf1d4  codep:0x224c parp:0xf1d4 size:0x0032 C-string:'UNK_0xf1d4'
//       TD-SCROLL  codep:0x4a4f parp:0xf214 size:0x000c C-string:'TD_dash_SCROLL'
//      UNK_0xf222  codep:0x224c parp:0xf222 size:0x002e C-string:'UNK_0xf222'
//      UNK_0xf252  codep:0x224c parp:0xf252 size:0x0048 C-string:'UNK_0xf252'
//      UNK_0xf29c  codep:0x224c parp:0xf29c size:0x003c C-string:'UNK_0xf29c'
//      UNK_0xf2da  codep:0x224c parp:0xf2da size:0x0012 C-string:'UNK_0xf2da'
//      UNK_0xf2ee  codep:0x224c parp:0xf2ee size:0x002c C-string:'UNK_0xf2ee'
//      UNK_0xf31c  codep:0x224c parp:0xf31c size:0x002a C-string:'UNK_0xf31c'
//      UNK_0xf348  codep:0x224c parp:0xf348 size:0x0020 C-string:'UNK_0xf348'
//      UNK_0xf36a  codep:0x224c parp:0xf36a size:0x006a C-string:'UNK_0xf36a'
//      UNK_0xf3d6  codep:0x224c parp:0xf3d6 size:0x0020 C-string:'UNK_0xf3d6'
//      UNK_0xf3f8  codep:0x224c parp:0xf3f8 size:0x0018 C-string:'UNK_0xf3f8'
//      UNK_0xf412  codep:0x224c parp:0xf412 size:0x0026 C-string:'UNK_0xf412'
//    return-items  codep:0x224c parp:0xf43a size:0x0008 C-string:'return_dash_items'
//         >DEBRIS  codep:0x224c parp:0xf44e size:0x0008 C-string:'_gt_DEBRIS'
//      UNK_0xf458  codep:0x224c parp:0xf458 size:0x0026 C-string:'UNK_0xf458'
//      UNK_0xf480  codep:0x224c parp:0xf480 size:0x000e C-string:'UNK_0xf480'
//        (/ITEMS)  codep:0x224c parp:0xf49b size:0x0000 C-string:'_ro__slash_ITEMS_rc_'

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

const unsigned short int pp_UNK_0xdec9 = 0xdec9; // UNK_0xdec9 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe1cb = 0xe1cb; // UNK_0xe1cb size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xe1cf = 0xe1cf; // UNK_0xe1cf size: 2
// {0x3a, 0x20}

const unsigned short int pp_clsp = 0xeaba; // clsp size: 4
// {0x56, 0x3a, 0x20, 0x78}

const unsigned short int pp_UNK_0xebcb = 0xebcb; // UNK_0xebcb size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xee93 = 0xee93; // UNK_0xee93 size: 3
// {0x3a, 0x20, 0x05}


const unsigned short int cc_UNK_0xdf75 = 0xdf75; // UNK_0xdf75
const unsigned short int cc_planet = 0xdfd5; // planet
const unsigned short int cc_creature = 0xdfd9; // creature
const unsigned short int cc_artifact = 0xdfdd; // artifact
const unsigned short int cc_analyze_dash_text = 0xdfe1; // analyze-text


// 0xddf2: db 0x77 0x01 'w '

// ================================================
// 0xddf4: WORD 'revision' codep=0x1d29 parp=0xddf6
// ================================================
// 0xddf6: db 0x3a 0x20 ': '

// ================================================
// 0xddf8: WORD 'ttlines' codep=0x1d29 parp=0xddfa
// ================================================
// 0xddfa: db 0x3a 0x20 ': '

// ================================================
// 0xddfc: WORD 'PHRASE-MEM' codep=0x1d29 parp=0xddfe
// ================================================
// orphan
// 0xddfe: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x3c 0x3b 0xe9 0x97 0xdd 0xc5 0x50 0x52 0x4f 0x42 0xd3 0xa0 0x3c 0x49 0xe9 0xdc 0xdd 0x86 0x25 0x54 0x4f 0x54 0x41 0xcc 0x29 0x1d 0x64 0x00 0x0c 0xde 0x87 0x25 0x52 0x45 0x4d 0x41 0x49 0xce 0x4c 0x22 0x5d 0x17 0x64 0x00 0x1f 0x31 0x36 0x32 0x38 0x0f 0x90 0x16 0x01 0xde 0x84 0x4d 0x41 0x52 0xcb 0x4c 0x22 0x3d 0x23 0xed 0x23 0x3b 0xe9 0xb8 0x15 0x50 0x0e 0x38 0x0c 0x3e 0x13 0x89 0x12 0xfa 0x15 0x06 0x00 0x50 0x0e 0x4a 0x17 0x8b 0x3b 0x5c 0x15 0xec 0xff 0xed 0x22 0x7f 0x0e 0x7b 0x3b 0x72 0x0f 0x76 0x6d 0x9f 0x6d 0x20 0x0f 0x1f 0xde 0x76 0x6d 0x90 0x16 0xf4 0xdd 0x82 0x25 0xac 0x4c 0x22 0x1f 0xde 0x7f 0x0e 0x7f 0x0e 0xae 0x0b 0x72 0x0f 0xaf 0x21 0x83 0x6d 0xfc 0xe2 0x90 0x16 0x18 0xde 0x82 0x30 0xd0 0x4c 0x22 0x20 0x0f 0x7b 0xde 0x90 0x16 0x25 0xde 0x84 0x21 0x43 0x53 0xd0 0x4c 0x22 0x12 0x0f 0xb4 0x05 0x76 0x6d 0x90 0x16 0x91 0xde 0xc5 0x45 0x43 0x41 0x53 0xc5 0x4c 0x22 0xd9 0x1f 0xb4 0x05 0xae 0x0b 0xa3 0xde 0x7b 0x3b 0x90 0x16 0x3d 0xde 0xc3 0x45 ':  ALLOT <;    PROB  <I    %TOTA ) d    %REMAI L"] d  1628      MAR L"=# #;   P 8 >       P J  ;\    " {;r vm m    vm     % L"      r  ! m       0 L"  {   %  !CS L"    vm     ECAS L"        {;  =  E'

// ================================================
// 0xdec7: WORD 'UNK_0xdec9' codep=0x1d29 parp=0xdec9
// ================================================
// 0xdec9: db 0x3a 0x20 ': '

// ================================================
// 0xdecb: WORD 'UNK_0xdecd' codep=0x224c parp=0xdecd params=1 returns=0
// ================================================

void UNK_0xdecd() // UNK_0xdecd
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
// 0xdeff: WORD 'UNK_0xdf01' codep=0x224c parp=0xdf01 params=0 returns=0
// ================================================

void UNK_0xdf01() // UNK_0xdf01
{
  Push(Read16(pp_WTOP)); // WTOP @
  UNK_0xdecd(); // UNK_0xdecd
}


// ================================================
// 0xdf09: WORD 'UNK_0xdf0b' codep=0x224c parp=0xdf0b params=0 returns=0
// ================================================

void UNK_0xdf0b() // UNK_0xdf0b
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
// 0xdf53: WORD 'UNK_0xdf55' codep=0x224c parp=0xdf55 params=2 returns=0
// ================================================

void UNK_0xdf55() // UNK_0xdf55
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
// 0xdf73: WORD 'UNK_0xdf75' codep=0x2214 parp=0xdf75
// ================================================
// orphan
// 0xdf75: dw 0x002e

// ================================================
// 0xdf77: WORD 'UNK_0xdf79' codep=0x224c parp=0xdf79 params=3 returns=2
// ================================================
// orphan

void UNK_0xdf79() // UNK_0xdf79
{
  Push(0xdf75); // probable 'UNK_0xdf75'
  Store_3(); // !_3
  Push(0xdf75); // probable 'UNK_0xdf75'
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
// 0xdfa7: WORD 'WRITE-PHRASE' codep=0x224c parp=0xdfa9 params=0 returns=0
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
// 0xdfd3: WORD 'planet' codep=0x2214 parp=0xdfd5
// ================================================
// orphan
// 0xdfd5: dw 0x0020

// ================================================
// 0xdfd7: WORD 'creature' codep=0x2214 parp=0xdfd9
// ================================================
// 0xdfd9: dw 0x0044

// ================================================
// 0xdfdb: WORD 'artifact' codep=0x2214 parp=0xdfdd
// ================================================
// orphan
// 0xdfdd: dw 0x001c

// ================================================
// 0xdfdf: WORD 'analyze-text' codep=0x2214 parp=0xdfe1
// ================================================
// 0xdfe1: dw 0x0039

// ================================================
// 0xdfe3: WORD 'UNK_0xdfe5' codep=0x73ea parp=0xdfe5
// ================================================
LoadDataType UNK_0xdfe5 = {CREATUREIDX, 0x33, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xdfeb: WORD 'UNK_0xdfed' codep=0x744d parp=0xdfed
// ================================================
IFieldType UNK_0xdfed = {CREATUREIDX, 0x12, 0x01};

// ================================================
// 0xdff0: WORD 'content-vol' codep=0x744d parp=0xdff2
// ================================================
IFieldType content_dash_vol = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xdff5: WORD 'volume' codep=0x73ea parp=0xdff7
// ================================================
// orphan
LoadDataType volume = {CREATUREIDX, 0x3a, 0x02, 0x9c, 0x69d8};

// ================================================
// 0xdffd: WORD 'hits' codep=0x744d parp=0xdfff
// ================================================
IFieldType hits = {CREATUREIDX, 0x11, 0x01};

// ================================================
// 0xe002: WORD 'behave' codep=0x744d parp=0xe004
// ================================================
IFieldType behave = {CREATUREIDX, 0x1b, 0x01};

// ================================================
// 0xe007: WORD 'biod' codep=0x73ea parp=0xe009
// ================================================
LoadDataType biod = {CREATUREIDX, 0x9a, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe00f: WORD 'inst-starx' codep=0x744d parp=0xe011
// ================================================
IFieldType inst_dash_starx = {DIRECTORYIDX, 0x15, 0x01};

// ================================================
// 0xe014: WORD 'inst-stary' codep=0x744d parp=0xe016
// ================================================
IFieldType inst_dash_stary = {DIRECTORYIDX, 0x16, 0x01};

// ================================================
// 0xe019: WORD 'inst-plan#' codep=0x744d parp=0xe01b
// ================================================
IFieldType inst_dash_plan_n_ = {DIRECTORYIDX, 0x17, 0x01};

// ================================================
// 0xe01e: WORD 'whichguy' codep=0x224c parp=0xe020 params=0 returns=0
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
// 0xe032: WORD 'reorg' codep=0x224c parp=0xe034 params=0 returns=0
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
// 0xe042: WORD 'UNK_0xe044' codep=0x224c parp=0xe044 params=0 returns=0
// ================================================

void UNK_0xe044() // UNK_0xe044
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
// 0xe05c: WORD 'werase' codep=0x224c parp=0xe05e params=0 returns=0
// ================================================

void werase() // werase
{
  UNK_0xe044(); // UNK_0xe044
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  Push(-1);
  Push(pp_WLINES); // WLINES
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xe070: WORD 'UNK_0xe072' codep=0x224c parp=0xe072
// ================================================

void UNK_0xe072() // UNK_0xe072
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
// 0xe082: WORD 'UNK_0xe084' codep=0x224c parp=0xe084 params=0 returns=0
// ================================================

void UNK_0xe084() // UNK_0xe084
{
  Push(Read16(pp_WLEFT) + 1); // WLEFT @ 1+
  Push(Read16(pp_WBOTTOM) + 5); // WBOTTOM @ 5 +
  POS_dot_(); // POS.
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  PRINT("PRESS KEY TO CONTINUE ", 22); // (.")
}


// ================================================
// 0xe0b3: WORD 'art-analyz' codep=0x224c parp=0xe0b5 params=0 returns=0
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
  UNK_0xdf55(); // UNK_0xdf55
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe0db: WORD 'UNK_0xe0dd' codep=0x224c parp=0xe0dd params=0 returns=0
// ================================================
// orphan

void UNK_0xe0dd() // UNK_0xe0dd
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
// 0xe105: WORD 'UNK_0xe107' codep=0x224c parp=0xe107 params=2 returns=1
// ================================================
// orphan

void UNK_0xe107() // UNK_0xe107
{
  unsigned short int a;
  _2DUP(); // 2DUP
  Push((Pop()==Pop())?1:0); // =
  a = Pop(); // >R
  _gt_(); // >
  Push(Pop() | a); //  R> OR
}


// ================================================
// 0xe115: WORD 'UNK_0xe117' codep=0x224c parp=0xe117 params=1 returns=0
// ================================================
// orphan

void UNK_0xe117() // UNK_0xe117
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
  UNK_0xe107(); // UNK_0xe107
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
// 0xe17f: WORD 'UNK_0xe181' codep=0x224c parp=0xe181 params=0 returns=0
// ================================================

void UNK_0xe181() // UNK_0xe181
{
  PRINT("PICKUP", 6); // (.")
}


// ================================================
// 0xe18c: WORD 'UNK_0xe18e' codep=0x224c parp=0xe18e params=0 returns=0
// ================================================

void UNK_0xe18e() // UNK_0xe18e
{
  PRINT("DROP", 4); // (.")
}


// ================================================
// 0xe197: WORD '.desc' codep=0x224c parp=0xe199 params=0 returns=0
// ================================================

void Drawdesc() // .desc
{
  PRINT("DESCRIBE", 8); // (.")
}


// ================================================
// 0xe1a6: WORD '.eras' codep=0x224c parp=0xe1a8 params=0 returns=0
// ================================================

void Draweras() // .eras
{
  PRINT("ERASE", 5); // (.")
}


// ================================================
// 0xe1b2: WORD 'UNK_0xe1b4' codep=0x224c parp=0xe1b4 params=0 returns=0
// ================================================

void UNK_0xe1b4() // UNK_0xe1b4
{
  PRINT("RECORD", 6); // (.")
}


// ================================================
// 0xe1bf: WORD 'lpos' codep=0x224c parp=0xe1c1 params=1 returns=0
// ================================================

void lpos() // lpos
{
  Push(0);
  SWAP(); // SWAP
  UNK_0xdf55(); // UNK_0xdf55
}


// ================================================
// 0xe1c9: WORD 'UNK_0xe1cb' codep=0x1d29 parp=0xe1cb
// ================================================
// 0xe1cb: db 0x00 0x00 '  '

// ================================================
// 0xe1cd: WORD 'UNK_0xe1cf' codep=0x1d29 parp=0xe1cf
// ================================================
// orphan
// 0xe1cf: db 0x3a 0x20 ': '

// ================================================
// 0xe1d1: WORD '#options!' codep=0x224c parp=0xe1d3 params=1 returns=0
// ================================================

void _n_options_ex_() // #options!
{
  Push(pp_UNK_0xe1cb); // UNK_0xe1cb
  Store_3(); // !_3
}


// ================================================
// 0xe1d9: WORD 'UNK_0xe1db' codep=0x224c parp=0xe1db params=0 returns=0
// ================================================

void UNK_0xe1db() // UNK_0xe1db
{
  Push(1);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  UNK_0xe18e(); // UNK_0xe18e
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe1e7: WORD 'UNK_0xe1e9' codep=0x224c parp=0xe1e9 params=0 returns=0
// ================================================

void UNK_0xe1e9() // UNK_0xe1e9
{
  Push(1);
  lpos(); // lpos
  UNK_0xe18e(); // UNK_0xe18e
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Drawdesc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe1fb: WORD 'tm.opts' codep=0x224c parp=0xe1fd params=0 returns=0
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
// 0xe214: WORD 'tl.opts' codep=0x224c parp=0xe216 params=0 returns=0
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
// 0xe222: WORD 'UNK_0xe224' codep=0x224c parp=0xe224 params=0 returns=0
// ================================================

void UNK_0xe224() // UNK_0xe224
{
  Push(1);
  lpos(); // lpos
  UNK_0xe18e(); // UNK_0xe18e
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Drawdesc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe236: WORD 'UNK_0xe238' codep=0x224c parp=0xe238 params=0 returns=0
// ================================================

void UNK_0xe238() // UNK_0xe238
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
// 0xe24a: WORD 'T.OPTIONS' codep=0x4a4f parp=0xe258
// ================================================

void T_dot_OPTIONS() // T.OPTIONS
{
  switch(Pop()) // T.OPTIONS
  {
  case 26:
    UNK_0xe1db(); // UNK_0xe1db
    break;
  case 28:
    UNK_0xe1e9(); // UNK_0xe1e9
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
    UNK_0xe224(); // UNK_0xe224
    break;
  case 43:
    UNK_0xe238(); // UNK_0xe238
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
// 0xe27c: WORD 'UNK_0xe27e' codep=0x224c parp=0xe27e params=0 returns=0
// ================================================

void UNK_0xe27e() // UNK_0xe27e
{
  Push(1);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  UNK_0xe181(); // UNK_0xe181
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe28a: WORD 'UNK_0xe28c' codep=0x224c parp=0xe28c params=0 returns=0
// ================================================

void UNK_0xe28c() // UNK_0xe28c
{
  Push(1);
  lpos(); // lpos
  UNK_0xe181(); // UNK_0xe181
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Drawdesc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe29e: WORD 'UNK_0xe2a0' codep=0x224c parp=0xe2a0 params=0 returns=0
// ================================================

void UNK_0xe2a0() // UNK_0xe2a0
{
  Push(1);
  lpos(); // lpos
  PRINT("READ", 4); // (.")
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  UNK_0xe1b4(); // UNK_0xe1b4
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe2b7: WORD 'UNK_0xe2b9' codep=0x224c parp=0xe2b9 params=0 returns=0
// ================================================

void UNK_0xe2b9() // UNK_0xe2b9
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
    UNK_0xe181(); // UNK_0xe181
  }
  Push(2);
  lpos(); // lpos
  UNK_0xe1b4(); // UNK_0xe1b4
  PRINT(" BIO-DATA", 9); // (.")
  Push(3);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  Drawdesc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe2f7: WORD 'UNK_0xe2f9' codep=0x224c parp=0xe2f9 params=0 returns=0
// ================================================

void UNK_0xe2f9() // UNK_0xe2f9
{
  Push(1);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  UNK_0xe181(); // UNK_0xe181
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe305: WORD 'UNK_0xe307' codep=0x224c parp=0xe307 params=0 returns=0
// ================================================

void UNK_0xe307() // UNK_0xe307
{
  werase(); // werase
  art_dash_analyz(); // art-analyz
  Push(0);
  Push(0);
  UNK_0xdf55(); // UNK_0xdf55
  GCR(); // GCR
}


// ================================================
// 0xe315: WORD 'P.OPTIONS' codep=0x4a4f parp=0xe323
// ================================================

void P_dot_OPTIONS() // P.OPTIONS
{
  switch(Pop()) // P.OPTIONS
  {
  case 26:
    UNK_0xe27e(); // UNK_0xe27e
    break;
  case 28:
    UNK_0xe28c(); // UNK_0xe28c
    break;
  case 27:
    UNK_0xe2a0(); // UNK_0xe2a0
    break;
  case 30:
    UNK_0xe2b9(); // UNK_0xe2b9
    break;
  case 68:
    UNK_0xe2b9(); // UNK_0xe2b9
    break;
  case 40:
    UNK_0xe2f9(); // UNK_0xe2f9
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe33f: WORD 'UNK_0xe341' codep=0x224c parp=0xe341 params=0 returns=2
// ================================================

void UNK_0xe341() // UNK_0xe341
{
  PRINT("LIFEFORM ALREADY RECORDED", 25); // (.")
  Push(0x05dc);
  MS(); // MS
  UNK_0xe307(); // UNK_0xe307
}


// ================================================
// 0xe367: WORD 'UNK_0xe369' codep=0x224c parp=0xe369 params=0 returns=2
// ================================================

void UNK_0xe369() // UNK_0xe369
{
  PRINT("DUPLICATE SPECIMEN", 18); // (.")
  Push(0x05dc);
  MS(); // MS
  UNK_0xe307(); // UNK_0xe307
}


// ================================================
// 0xe388: WORD 'volume+!' codep=0x224c parp=0xe38a params=1 returns=0
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
// 0xe396: WORD '?VOLUME' codep=0x224c parp=0xe398 params=0 returns=2
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
    UNK_0xe044(); // UNK_0xe044
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
// 0xe41b: WORD '(EXTRACT)' codep=0x224c parp=0xe429 params=2 returns=1
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
// 0xe459: WORD 'plextract' codep=0x224c parp=0xe45b params=0 returns=1
// ================================================

void plextract() // plextract
{
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  _1_dot_5_at_(); // 1.5@
  _ro_EXTRACT_rc_(); // (EXTRACT)
}


// ================================================
// 0xe463: WORD 'tvextract' codep=0x224c parp=0xe465 params=0 returns=1
// ================================================

void tvextract() // tvextract
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  _ro_EXTRACT_rc_(); // (EXTRACT)
}


// ================================================
// 0xe46d: WORD 'niche' codep=0x73ea parp=0xe46f
// ================================================
LoadDataType niche = {CREATUREIDX, 0x0c, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe475: WORD 'i.level' codep=0x73ea parp=0xe477
// ================================================
LoadDataType i_dot_level = {CREATUREIDX, 0x36, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe47d: WORD 'size.index' codep=0x73ea parp=0xe47f
// ================================================
LoadDataType size_dot_index = {CREATUREIDX, 0x0b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe485: WORD 'niche>val' codep=0x224c parp=0xe487
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
// 0xe4b9: WORD '?dist' codep=0x224c parp=0xe4bb params=0 returns=2
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
// 0xe4ef: WORD 'valuate' codep=0x224c parp=0xe4f1
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
// 0xe521: WORD '1$=' codep=0x224c parp=0xe523
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
// 0xe557: WORD 'info-setup' codep=0x224c parp=0xe559 params=0 returns=0
// ================================================

void info_dash_setup() // info-setup
{
  Push(0);
  Push(5);
  UNK_0xdf55(); // UNK_0xdf55
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe565: WORD '$setup' codep=0x224c parp=0xe567
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
// 0xe591: WORD '$match' codep=0x224c parp=0xe593
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
// 0xe5bf: WORD 'tvxy' codep=0x224c parp=0xe5c1 params=0 returns=2
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
// 0xe5d1: WORD 'xy!' codep=0x224c parp=0xe5d3 params=2 returns=0
// ================================================

void xy_ex_() // xy!
{
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xe5dd: WORD '.cargo' codep=0x224c parp=0xe5df params=0 returns=0
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
// 0xe61a: WORD '?>spec' codep=0x224c parp=0xe61c
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
// 0xe636: WORD '?attack' codep=0x224c parp=0xe638
// ================================================

void Isattack() // ?attack
{
  Push(((Read16(0x63ef+behave.offset)&0xFF) & 1) & (((Read16(0x63ef+hits.offset)&0xFF)==0?1:0)==0?1:0)); // behave<IFIELD> C@ 1 AND hits<IFIELD> C@ 0= 0= AND
  Push(Read16(0x63ef+UNK_0xdfed.offset)&0xFF); // UNK_0xdfed<IFIELD> C@
  LoadData(UNK_0xdfe5); // from 'CREATURE'
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
// 0xe670: WORD 'UNK_0xe672' codep=0x224c parp=0xe672 params=1 returns=2
// ================================================

void UNK_0xe672() // UNK_0xe672
{
  Push(Read16(Pop())); //  @
  Push(8);
  _slash_(); // /
}


// ================================================
// 0xe67a: WORD 'UNK_0xe67c' codep=0x224c parp=0xe67c params=1 returns=2
// ================================================

void UNK_0xe67c() // UNK_0xe67c
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
  UNK_0xe672(); // UNK_0xe672
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  UNK_0xe672(); // UNK_0xe672
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
// 0xe6b6: WORD 'UNK_0xe6b8' codep=0x224c parp=0xe6b8
// ================================================

void UNK_0xe6b8() // UNK_0xe6b8
{
  UNK_0xe307(); // UNK_0xe307
  Push(pp_revision); // revision
  ON_3(); // ON_3
  valuate(); // valuate
  LoadData(biod); // from 'CREATURE'
  Push((Read16(Pop())&0xFF) & 0x000f); //  C@ 0x000f AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0);
    UNK_0xe341(); // UNK_0xe341
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
  UNK_0xe67c(); // UNK_0xe67c
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
// 0xe72b: WORD 'UNK_0xe72d' codep=0x224c parp=0xe72d params=0 returns=0
// ================================================

void UNK_0xe72d() // UNK_0xe72d
{
  info_dash_setup(); // info-setup
  PRINT("THE CAPTURE ATTEMPT WAS UNSUCCESSFUL ", 37); // (.")
}


// ================================================
// 0xe759: WORD 'UNK_0xe75b' codep=0x224c parp=0xe75b
// ================================================

void UNK_0xe75b() // UNK_0xe75b
{
  unsigned short int a;
  UNK_0xe307(); // UNK_0xe307
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
      UNK_0xe072(); // UNK_0xe072
      Push(0x0028);
      info_dash_setup(); // info-setup
      PRINT("LIFEFORM CAPTURED AND PUT IN STASIS ", 36); // (.")
      SWAP(); // SWAP
      ICREATE(); // ICREATE
      _gt_C_plus_S(); // >C+S
      UNK_0xe67c(); // UNK_0xe67c
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
      UNK_0xe369(); // UNK_0xe369
    } else
    {
      UNK_0xe72d(); // UNK_0xe72d
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
// 0xe80c: WORD 'UNK_0xe80e' codep=0x224c parp=0xe80e params=2 returns=2
// ================================================

void UNK_0xe80e() // UNK_0xe80e
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
// 0xe834: WORD 'UNK_0xe836' codep=0x224c parp=0xe836 params=1 returns=0
// ================================================

void UNK_0xe836() // UNK_0xe836
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
// 0xe858: WORD 'UNK_0xe85a' codep=0x224c parp=0xe85a params=1 returns=0
// ================================================

void UNK_0xe85a() // UNK_0xe85a
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
// 0xe87c: WORD 'UNK_0xe87e' codep=0x224c parp=0xe87e params=2 returns=0
// ================================================

void UNK_0xe87e() // UNK_0xe87e
{
  UNK_0xe80e(); // UNK_0xe80e
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  Push(0);
  DrawR(); // .R
  UNK_0xe85a(); // UNK_0xe85a
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
  UNK_0xe836(); // UNK_0xe836
}


// ================================================
// 0xe8ac: WORD 'UNK_0xe8ae' codep=0x224c parp=0xe8ae params=1 returns=0
// ================================================

void UNK_0xe8ae() // UNK_0xe8ae
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
// 0xe8fe: WORD 'UNK_0xe900' codep=0x224c parp=0xe900 params=0 returns=0
// ================================================

void UNK_0xe900() // UNK_0xe900
{
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe906: WORD 'UNK_0xe908' codep=0x224c parp=0xe908 params=0 returns=0
// ================================================

void UNK_0xe908() // UNK_0xe908
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe90e: WORD 'UNK_0xe910' codep=0x224c parp=0xe910 params=0 returns=0
// ================================================

void UNK_0xe910() // UNK_0xe910
{
  UNK_0xe307(); // UNK_0xe307
  Push(0);
  Push(0);
  UNK_0xdf55(); // UNK_0xdf55
  Push(-2);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  UNK_0xe900(); // UNK_0xe900
  PRINT("SYSTEM: ", 8); // (.")
  UNK_0xe908(); // UNK_0xe908
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
  UNK_0xe900(); // UNK_0xe900
  PRINT("PLANET: ", 8); // (.")
  UNK_0xe908(); // UNK_0xe908
  Push(Read16(0x63ef+inst_dash_plan_n_.offset)&0xFF); // inst-plan#<IFIELD> C@
  Draw(); // .
  GCR(); // GCR
  UNK_0xe900(); // UNK_0xe900
  PRINT("LOCATION: ", 10); // (.")
  UNK_0xe908(); // UNK_0xe908
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  UNK_0xe87e(); // UNK_0xe87e
  Push(0x005a);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  UNK_0xe900(); // UNK_0xe900
  PRINT("DATE: ", 6); // (.")
  UNK_0xe908(); // UNK_0xe908
  Push(Read16(0x63ef+INST_dash_DATE.offset)); // INST-DATE<IFIELD> @
  UNK_0xe8ae(); // UNK_0xe8ae
  UNK_0xe084(); // UNK_0xe084
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xe99e: WORD 'UNK_0xe9a0' codep=0x224c parp=0xe9a0 params=0 returns=1
// ================================================

void UNK_0xe9a0() // UNK_0xe9a0
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==3?1:0); //  3 =
}


// ================================================
// 0xe9a8: WORD 'UNK_0xe9aa' codep=0x224c parp=0xe9aa params=0 returns=0
// ================================================

void UNK_0xe9aa() // UNK_0xe9aa
{
  UNK_0xe9a0(); // UNK_0xe9a0
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
// 0xe9f8: WORD 'UNK_0xe9fa' codep=0x224c parp=0xe9fa params=0 returns=0
// ================================================

void UNK_0xe9fa() // UNK_0xe9fa
{
  UNK_0xe9a0(); // UNK_0xe9a0
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
// 0xea30: WORD 'pickup' codep=0x224c parp=0xea32 params=0 returns=0
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
// 0xea4e: WORD 'delete.it' codep=0x224c parp=0xea50
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
// 0xea5c: WORD 'pldelete' codep=0x224c parp=0xea5e params=0 returns=1
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
// 0xea6a: WORD 'tvdelete' codep=0x224c parp=0xea6c params=0 returns=1
// ================================================

void tvdelete() // tvdelete
{
  tvextract(); // tvextract
  _dash_ICON(); // -ICON
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea74: WORD 'new>box' codep=0x224c parp=0xea76
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
// 0xeab8: WORD 'clsp' codep=0x1d29 parp=0xeaba
// ================================================
// 0xeaba: db 0x56 0x3a 0x20 0x78 'V: x'

// ================================================
// 0xeabe: WORD '?deposited' codep=0x224c parp=0xeac0
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
// 0xeb14: WORD 'dropit' codep=0x224c parp=0xeb16
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
  Push(0xc437); // probable 'ICON-PARM'
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
// 0xeb50: WORD 'art-anlyz' codep=0x73ea parp=0xeb52
// ================================================
LoadDataType art_dash_anlyz = {ARTIFACTIDX, 0x1d, 0x01, 0x1e, 0x652c};

// ================================================
// 0xeb58: WORD 'art-text' codep=0x73ea parp=0xeb5a
// ================================================
LoadDataType art_dash_text = {ARTIFACTIDX, 0x18, 0x01, 0x1e, 0x652c};

// ================================================
// 0xeb60: WORD 'arttalk' codep=0x224c parp=0xeb62 params=1 returns=0
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
// 0xeb84: WORD 'art.desc' codep=0x224c parp=0xeb86
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
    UNK_0xe084(); // UNK_0xe084
    KEY_2(); // KEY_2
    Pop(); // DROP
    return;
  }
  PRINT("THIS ITEM NOT ANALYZED", 22); // (.")
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xebc9: WORD 'UNK_0xebcb' codep=0x1d29 parp=0xebcb
// ================================================
// 0xebcb: db 0x3a 0x20 ': '

// ================================================
// 0xebcd: WORD 'TS.ACT' codep=0x4a4f parp=0xebd8
// ================================================

void TS_dot_ACT() // TS.ACT
{
  switch(Pop()) // TS.ACT
  {
  case 1:
    dropit(); // dropit
    break;
  case 2:
    UNK_0xe910(); // UNK_0xe910
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xebe4: WORD 'PS.ACT' codep=0x4a4f parp=0xebef
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
// 0xebf7: WORD 'UNK_0xebf9' codep=0x224c parp=0xebf9
// ================================================

void UNK_0xebf9() // UNK_0xebf9
{
  Push(Read16(pp_UNK_0xebcb)); // UNK_0xebcb @
  if (Pop() != 0)
  {
    TS_dot_ACT(); // TS.ACT case
    return;
  }
  PS_dot_ACT(); // PS.ACT case
}


// ================================================
// 0xec0b: WORD 'UNK_0xec0d' codep=0x224c parp=0xec0d params=0 returns=0
// ================================================

void UNK_0xec0d() // UNK_0xec0d
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
// 0xec29: WORD 'UNK_0xec2b' codep=0x224c parp=0xec2b
// ================================================

void UNK_0xec2b() // UNK_0xec2b
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
// 0xec3f: WORD 'UNK_0xec41' codep=0x224c parp=0xec41 params=0 returns=0
// ================================================

void UNK_0xec41() // UNK_0xec41
{
  Push(Read16(pp_ELEM_dash_AM)); // ELEM-AM @
  UNK_0xec0d(); // UNK_0xec0d
  pickup(); // pickup
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec4f: WORD 'UNK_0xec51' codep=0x224c parp=0xec51 params=1 returns=0
// ================================================

void UNK_0xec51() // UNK_0xec51
{
  Pop(); // DROP
  Push(Read16(pp_UNK_0xebcb)); // UNK_0xebcb @
  if (Pop() != 0)
  {
    UNK_0xec2b(); // UNK_0xec2b
    return;
  }
  UNK_0xec41(); // UNK_0xec41
}


// ================================================
// 0xec65: WORD 'UNK_0xec67' codep=0x224c parp=0xec67 params=0 returns=0
// ================================================

void UNK_0xec67() // UNK_0xec67
{
  UNK_0xe9fa(); // UNK_0xe9fa
  pickup(); // pickup
}


// ================================================
// 0xec6d: WORD 'UNK_0xec6f' codep=0x224c parp=0xec6f
// ================================================

void UNK_0xec6f() // UNK_0xec6f
{
  UNK_0xe9aa(); // UNK_0xe9aa
  dropit(); // dropit
}


// ================================================
// 0xec75: WORD 'PA.ACT' codep=0x4a4f parp=0xec80
// ================================================

void PA_dot_ACT() // PA.ACT
{
  switch(Pop()) // PA.ACT
  {
  case 1:
    UNK_0xec67(); // UNK_0xec67
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
// 0xec8c: WORD 'TA.ACT' codep=0x4a4f parp=0xec97
// ================================================

void TA_dot_ACT() // TA.ACT
{
  switch(Pop()) // TA.ACT
  {
  case 1:
    UNK_0xec6f(); // UNK_0xec6f
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
// 0xeca3: WORD 'UNK_0xeca5' codep=0x224c parp=0xeca5
// ================================================

void UNK_0xeca5() // UNK_0xeca5
{
  Push(Read16(pp_UNK_0xebcb)); // UNK_0xebcb @
  if (Pop() != 0)
  {
    TA_dot_ACT(); // TA.ACT case
    return;
  }
  PA_dot_ACT(); // PA.ACT case
}


// ================================================
// 0xecb7: WORD 'UNK_0xecb9' codep=0x224c parp=0xecb9 params=0 returns=2
// ================================================

void UNK_0xecb9() // UNK_0xecb9
{
  Push(0x63ef+INST_dash_SPECIES.offset); // INST-SPECIES<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // PHRASE-MEM<IFIELD>
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  ICLOSE(); // ICLOSE
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0xc216); // probable 'P>CT'
  MODULE(); // MODULE
}


// ================================================
// 0xecd1: WORD 'UNK_0xecd3' codep=0x224c parp=0xecd3 params=0 returns=2
// ================================================

void UNK_0xecd3() // UNK_0xecd3
{
  GetColor(WHITE);
  Push(pp_CTCOLOR); // CTCOLOR
  Store_3(); // !_3
  UNK_0xecb9(); // UNK_0xecb9
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      Push(0xc227); // probable 'CTUP'
      MODULE(); // MODULE
      UNK_0xe084(); // UNK_0xe084
      KEY_2(); // KEY_2
      Pop(); // DROP
      UNK_0xecb9(); // UNK_0xecb9
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
  }
  Push(0xc227); // probable 'CTUP'
  MODULE(); // MODULE
  UNK_0xe084(); // UNK_0xe084
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xed09: WORD 'UNK_0xed0b' codep=0x224c parp=0xed0b params=0 returns=2
// ================================================

void UNK_0xed0b() // UNK_0xed0b
{
  UNK_0xdf01(); // UNK_0xdf01
  werase(); // werase
  art_dash_analyz(); // art-analyz
  UNK_0xecd3(); // UNK_0xecd3
}


// ================================================
// 0xed15: WORD 'UNK_0xed17' codep=0x224c parp=0xed17 params=0 returns=0
// ================================================

void UNK_0xed17() // UNK_0xed17
{
  Push(Read16(pp_STARDATE)); // STARDATE @
  Push(0x63ef+INST_dash_DATE.offset); // INST-DATE<IFIELD>
  Store_3(); // !_3
  pickup(); // pickup
}


// ================================================
// 0xed23: WORD 'PM.ACT' codep=0x4a4f parp=0xed2e
// ================================================

void PM_dot_ACT() // PM.ACT
{
  switch(Pop()) // PM.ACT
  {
  case 1:
    UNK_0xed0b(); // UNK_0xed0b
    break;
  case 2:
    UNK_0xed17(); // UNK_0xed17
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed3a: WORD 'TM.ACT' codep=0x4a4f parp=0xed45
// ================================================

void TM_dot_ACT() // TM.ACT
{
  switch(Pop()) // TM.ACT
  {
  case 1:
    UNK_0xed0b(); // UNK_0xed0b
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
// 0xed51: WORD 'UNK_0xed53' codep=0x224c parp=0xed53
// ================================================

void UNK_0xed53() // UNK_0xed53
{
  Push(Read16(pp_UNK_0xebcb)); // UNK_0xebcb @
  if (Pop() != 0)
  {
    TM_dot_ACT(); // TM.ACT case
    return;
  }
  PM_dot_ACT(); // PM.ACT case
}


// ================================================
// 0xed65: WORD 'UNK_0xed67' codep=0x224c parp=0xed67 params=0 returns=1
// ================================================

void UNK_0xed67() // UNK_0xed67
{
  UNK_0xdf01(); // UNK_0xdf01
  werase(); // werase
  art_dash_analyz(); // art-analyz
  Push(5);
  Push(pp_ttlines); // ttlines
  _st__ex__gt_(); // <!>
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(0xcd8c); // probable 'SAYIT'
  MODULE(); // MODULE
  SET_STR_AS_PARAM(" ");
  Pop(); // DROP
  Push(Pop() - 1); //  1-
  WLINE_dash_UP(); // WLINE-UP
  UNK_0xe084(); // UNK_0xe084
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xed8d: WORD 'PL.ACT' codep=0x4a4f parp=0xed98
// ================================================

void PL_dot_ACT() // PL.ACT
{
  switch(Pop()) // PL.ACT
  {
  case 1:
    UNK_0xe75b(); // UNK_0xe75b
    break;
  case 2:
    UNK_0xe6b8(); // UNK_0xe6b8
    break;
  case 3:
    UNK_0xed67(); // UNK_0xed67
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xeda8: WORD 'UNK_0xedaa' codep=0x224c parp=0xedaa
// ================================================

void UNK_0xedaa() // UNK_0xedaa
{
  Push(Read16(pp_UNK_0xebcb)); // UNK_0xebcb @
  if (Pop() != 0)
  {
    Pop(); // DROP
    UNK_0xed67(); // UNK_0xed67
    return;
  }
  PL_dot_ACT(); // PL.ACT case
}


// ================================================
// 0xedbe: WORD 'DO.BIO' codep=0x4a4f parp=0xedc9
// ================================================

void DO_dot_BIO() // DO.BIO
{
  switch(Pop()) // DO.BIO
  {
  case 1:
    UNK_0xe910(); // UNK_0xe910
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
// 0xedd5: WORD 'DISPATCH' codep=0x4a4f parp=0xede2
// ================================================

void DISPATCH() // DISPATCH
{
  switch(Pop()) // DISPATCH
  {
  case 68:
    UNK_0xedaa(); // UNK_0xedaa
    break;
  case 27:
    UNK_0xed53(); // UNK_0xed53
    break;
  case 26:
    UNK_0xec51(); // UNK_0xec51
    break;
  case 28:
    UNK_0xeca5(); // UNK_0xeca5
    break;
  case 40:
    UNK_0xebf9(); // UNK_0xebf9
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
// 0xedfe: WORD 'UNK_0xee00' codep=0x224c parp=0xee00 params=0 returns=0
// ================================================

void UNK_0xee00() // UNK_0xee00
{
  Push(6);
  Push(6);
  UNK_0xdf55(); // UNK_0xdf55
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
// 0xee3c: WORD 'UNK_0xee3e' codep=0x224c parp=0xee3e params=0 returns=0
// ================================================

void UNK_0xee3e() // UNK_0xee3e
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
  UNK_0xe072(); // UNK_0xe072
  GetColor(LT_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(0);
  Push(6);
  UNK_0xdf55(); // UNK_0xdf55
  PRINT("REVISING TERRAIN VEHICLE INVENTORY", 34); // (.")
  Push(pp_revision); // revision
  OFF_2(); // OFF_2
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee91: WORD 'UNK_0xee93' codep=0x1d29 parp=0xee93
// ================================================
// 0xee93: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xee96: WORD 'UNK_0xee98' codep=0x224c parp=0xee98 params=0 returns=2
// ================================================

void UNK_0xee98() // UNK_0xee98
{
  Push(pp_UNK_0xee93); // UNK_0xee93
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xee9e: WORD 'UNK_0xeea0' codep=0x224c parp=0xeea0 params=0 returns=0
// ================================================

void UNK_0xeea0() // UNK_0xeea0
{
  UNK_0xee98(); // UNK_0xee98
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  CI(); // CI
  Push(pp_UNK_0xee93); // UNK_0xee93
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeeb0: WORD 'UNK_0xeeb2' codep=0x224c parp=0xeeb2 params=0 returns=0
// ================================================

void UNK_0xeeb2() // UNK_0xeeb2
{
  UNK_0xee98(); // UNK_0xee98
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  CI(); // CI
  Push(pp_UNK_0xee93); // UNK_0xee93
  _1_dot_5_ex_(); // 1.5!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeec2: WORD 'UNK_0xeec4' codep=0x224c parp=0xeec4 params=0 returns=0
// ================================================

void UNK_0xeec4() // UNK_0xeec4
{
  UNK_0xee98(); // UNK_0xee98
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_IN.offset); // TEXT-IN<IFIELD>
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeed2: WORD 'UNK_0xeed4' codep=0x224c parp=0xeed4 params=0 returns=0
// ================================================

void UNK_0xeed4() // UNK_0xeed4
{
  UNK_0xdf01(); // UNK_0xdf01
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xdf01(); // UNK_0xdf01
}


// ================================================
// 0xeee2: WORD 'UNK_0xeee4' codep=0x224c parp=0xeee4 params=0 returns=0
// ================================================

void UNK_0xeee4() // UNK_0xeee4
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
// 0xef0a: WORD 'full-text' codep=0x224c parp=0xef0c params=0 returns=0
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
// 0xef1e: WORD 'UNK_0xef20' codep=0x224c parp=0xef20 params=0 returns=1
// ================================================

void UNK_0xef20() // UNK_0xef20
{
  UNK_0xeec4(); // UNK_0xeec4
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(!(Pop()==0x000b?1:0)); //  0x000b = NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef30: WORD 'UNK_0xef32' codep=0x224c parp=0xef32 params=1 returns=0
// ================================================

void UNK_0xef32() // UNK_0xef32
{
  UNK_0xdf01(); // UNK_0xdf01
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  _st__plus__ex__gt_(); // <+!>
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  Push(1);
  MAX(); // MAX
  Push(Read16(pp_UNK_0xe1cb)); // UNK_0xe1cb @
  MIN(); // MIN
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
  UNK_0xe044(); // UNK_0xe044
  Push(-(Read16(pp_UNK_0xdec9) * 7)); // UNK_0xdec9 @ 7 * NEGATE
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xdf01(); // UNK_0xdf01
}


// ================================================
// 0xef60: WORD 'UNK_0xef62' codep=0x224c parp=0xef62 params=0 returns=0
// ================================================

void UNK_0xef62() // UNK_0xef62
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
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  _st__ex__gt_(); // <!>
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef8c: WORD 'UNK_0xef8e' codep=0x224c parp=0xef8e params=0 returns=2
// ================================================

void UNK_0xef8e() // UNK_0xef8e
{
  UNK_0xe044(); // UNK_0xe044
  full_dash_text(); // full-text
  UNK_0xee3e(); // UNK_0xee3e
  delete_dash_scroll_dash_box(); // delete-scroll-box
  MAKE_dash_SC(); // MAKE-SC
  Push(pp_SUPER_dash_BOX); // SUPER-BOX
  _1_dot_5_at_(); // 1.5@
  GET_dash_BOX(); // GET-BOX
  UNK_0xef62(); // UNK_0xef62
  UNK_0xeee4(); // UNK_0xeee4
}


// ================================================
// 0xefa4: WORD 'UNK_0xefa6' codep=0x224c parp=0xefa6
// ================================================

void UNK_0xefa6() // UNK_0xefa6
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
  UNK_0xeec4(); // UNK_0xeec4
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Read16(pp_UNK_0xebcb)); // UNK_0xebcb @
  if (Pop() != 0)
  {
    T_dot_OPTIONS(); // T.OPTIONS case
  } else
  {
    P_dot_OPTIONS(); // P.OPTIONS case
  }
  UNK_0xeed4(); // UNK_0xeed4
}


// ================================================
// 0xefd2: WORD 'UNK_0xefd4' codep=0x224c parp=0xefd4 params=0 returns=0
// ================================================

void UNK_0xefd4() // UNK_0xefd4
{
  unsigned short int i, imax;
  UNK_0xee00(); // UNK_0xee00
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
// 0xf000: WORD 'UNK_0xf002' codep=0x224c parp=0xf002 params=0 returns=0
// ================================================

void UNK_0xf002() // UNK_0xf002
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_UNK_0xee93); // UNK_0xee93
  _1_dot_5_ex_(); // 1.5!
  Push(0);
  do
  {
    Push(Pop() + 1); //  1+
    INEXT(); // INEXT
    IsFIRST(); // ?FIRST
  } while(Pop() == 0);
  _gt_1FONT(); // >1FONT
  UNK_0xefd4(); // UNK_0xefd4
  IPREV(); // IPREV
  UNK_0xdf01(); // UNK_0xdf01
  Pop(); // DROP
}


// ================================================
// 0xf026: WORD 'UNK_0xf028' codep=0x224c parp=0xf028 params=0 returns=0
// ================================================

void UNK_0xf028() // UNK_0xf028
{
  Push(1);
  Push(pp_UNK_0xdec9); // UNK_0xdec9
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
      UNK_0xef32(); // UNK_0xef32
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
        UNK_0xef32(); // UNK_0xef32
      } else
      {
        Pop(); // DROP
        IsTRIG(); // ?TRIG
        if (Pop() != 0)
        {
          Push(Read16(pp_UNK_0xdec9)); // UNK_0xdec9 @
          GetINST_dash_CLASS(); // @INST-CLASS
          DISPATCH(); // DISPATCH case
          Push(Read16(pp_revision)); // revision @
          if (Pop() != 0)
          {
            UNK_0xef8e(); // UNK_0xef8e
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
  UNK_0xe044(); // UNK_0xe044
  art_dash_analyz(); // art-analyz
  UNK_0xeee4(); // UNK_0xeee4
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  UNK_0xf002(); // UNK_0xf002
  UNK_0xef62(); // UNK_0xef62
}


// ================================================
// 0xf0a6: WORD 'UNK_0xf0a8' codep=0x224c parp=0xf0a8 params=1 returns=1
// ================================================

void UNK_0xf0a8() // UNK_0xf0a8
{
  Push(Read16(pp_COLOR)); // COLOR @
  SWAP(); // SWAP
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xf0b2: WORD 'UNK_0xf0b4' codep=0x224c parp=0xf0b4 params=1 returns=0
// ================================================

void UNK_0xf0b4() // UNK_0xf0b4
{
  UNK_0xf0a8(); // UNK_0xf0a8
  GetColor(BLACK);
  UNK_0xf0a8(); // UNK_0xf0a8
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
// 0xf0dc: WORD 'UNK_0xf0de' codep=0x224c parp=0xf0de params=1 returns=0
// ================================================

void UNK_0xf0de() // UNK_0xf0de
{
  UNK_0xf0a8(); // UNK_0xf0a8
  GetColor(BLACK);
  UNK_0xf0a8(); // UNK_0xf0a8
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
// 0xf106: WORD 'qtbtn' codep=0x224c parp=0xf108 params=1 returns=0
// ================================================

void qtbtn() // qtbtn
{
  UNK_0xf0a8(); // UNK_0xf0a8
  GetColor(BLACK);
  UNK_0xf0a8(); // UNK_0xf0a8
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
// 0xf132: WORD 'UNK_0xf134' codep=0x224c parp=0xf134 params=0 returns=1
// ================================================

void UNK_0xf134() // UNK_0xf134
{
  UNK_0xeec4(); // UNK_0xeec4
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
// 0xf174: WORD 'UNK_0xf176' codep=0x224c parp=0xf176 params=1 returns=0
// ================================================

void UNK_0xf176() // UNK_0xf176
{
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() != 0)
  {
    Push(-1);
    Push(pp_UNK_0xebcb); // UNK_0xebcb
    _st__ex__gt_(); // <!>
  }
  _0_st_(); // 0<
  if (Pop() == 0) return;
  Push(0);
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf192: WORD 'UNK_0xf194' codep=0x224c parp=0xf194 params=0 returns=0
// ================================================

void UNK_0xf194() // UNK_0xf194
{
  UNK_0xf134(); // UNK_0xf134
  UNK_0xf176(); // UNK_0xf176
}


// ================================================
// 0xf19a: WORD 'UNK_0xf19c' codep=0x224c parp=0xf19c params=0 returns=0
// ================================================

void UNK_0xf19c() // UNK_0xf19c
{
  UNK_0xf134(); // UNK_0xf134
  Push(-Pop()); //  NEGATE
  UNK_0xf176(); // UNK_0xf176
}


// ================================================
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x224c parp=0xf1a6 params=0 returns=0
// ================================================

void UNK_0xf1a6() // UNK_0xf1a6
{
  GetColor(GREEN);
  UNK_0xf0b4(); // UNK_0xf0b4
  CLICK(); // CLICK
  INEXT(); // INEXT
  UNK_0xeea0(); // UNK_0xeea0
  UNK_0xf194(); // UNK_0xf194
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  UNK_0xdf01(); // UNK_0xdf01
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(-1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WLINE_dash_UP(); // WLINE-UP
  Push(1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xdf01(); // UNK_0xdf01
  GetColor(LT_dash_BLUE);
  UNK_0xf0b4(); // UNK_0xf0b4
}


// ================================================
// 0xf1d2: WORD 'UNK_0xf1d4' codep=0x224c parp=0xf1d4 params=0 returns=0
// ================================================

void UNK_0xf1d4() // UNK_0xf1d4
{
  GetColor(GREEN);
  UNK_0xf0de(); // UNK_0xf0de
  CLICK(); // CLICK
  UNK_0xf19c(); // UNK_0xf19c
  IPREV(); // IPREV
  UNK_0xeeb2(); // UNK_0xeeb2
  UNK_0xee98(); // UNK_0xee98
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  PAD(); // PAD
  UNK_0xdf01(); // UNK_0xdf01
  Push(-1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WLINE_dash_D(); // WLINE-D
  Push(1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xdf01(); // UNK_0xdf01
  GetColor(LT_dash_BLUE);
  UNK_0xf0de(); // UNK_0xf0de
}


// ================================================
// 0xf206: WORD 'TD-SCROLL' codep=0x4a4f parp=0xf214
// ================================================

void TD_dash_SCROLL() // TD-SCROLL
{
  switch(Pop()) // TD-SCROLL
  {
  case 65535:
    UNK_0xf1d4(); // UNK_0xf1d4
    break;
  case 1:
    UNK_0xf1a6(); // UNK_0xf1a6
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x224c parp=0xf222
// ================================================

void UNK_0xf222() // UNK_0xf222
{
  do
  {
    UNK_0xdf0b(); // UNK_0xdf0b
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
    UNK_0xef20(); // UNK_0xef20
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      UNK_0xefa6(); // UNK_0xefa6
      Push(pp_FQUIT); // FQUIT
      OFF(); // OFF
      UNK_0xf028(); // UNK_0xf028
    }
    Push(Read16(pp_FQUIT)); // FQUIT @
  } while(Pop() == 0);
}


// ================================================
// 0xf250: WORD 'UNK_0xf252' codep=0x224c parp=0xf252 params=2 returns=2
// ================================================

void UNK_0xf252() // UNK_0xf252
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
// 0xf29a: WORD 'UNK_0xf29c' codep=0x224c parp=0xf29c params=0 returns=2
// ================================================

void UNK_0xf29c() // UNK_0xf29c
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
      UNK_0xf252(); // UNK_0xf252
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
// 0xf2d8: WORD 'UNK_0xf2da' codep=0x224c parp=0xf2da params=0 returns=0
// ================================================
// orphan

void UNK_0xf2da() // UNK_0xf2da
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
// 0xf2ec: WORD 'UNK_0xf2ee' codep=0x224c parp=0xf2ee params=0 returns=0
// ================================================

void UNK_0xf2ee() // UNK_0xf2ee
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  UNK_0xf252(); // UNK_0xf252
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(pp__ro_PLANET_rc_); // (PLANET)
    Get_gt_C_plus_S(); // @>C+S
    IOPEN(); // IOPEN
    UNK_0xf29c(); // UNK_0xf29c
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
// 0xf31a: WORD 'UNK_0xf31c' codep=0x224c parp=0xf31c
// ================================================

void UNK_0xf31c() // UNK_0xf31c
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
// 0xf346: WORD 'UNK_0xf348' codep=0x224c parp=0xf348 params=0 returns=1
// ================================================

void UNK_0xf348() // UNK_0xf348
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
// 0xf368: WORD 'UNK_0xf36a' codep=0x224c parp=0xf36a
// ================================================

void UNK_0xf36a() // UNK_0xf36a
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
      UNK_0xf348(); // UNK_0xf348
      if (Pop() != 0)
      {
        UNK_0xf2ee(); // UNK_0xf2ee
        UNK_0xf31c(); // UNK_0xf31c
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
// 0xf3d4: WORD 'UNK_0xf3d6' codep=0x224c parp=0xf3d6 params=2 returns=0
// ================================================

void UNK_0xf3d6() // UNK_0xf3d6
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
// 0xf3f6: WORD 'UNK_0xf3f8' codep=0x224c parp=0xf3f8
// ================================================

void UNK_0xf3f8() // UNK_0xf3f8
{
  IOPEN(); // IOPEN
  while(1)
  {
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    UNK_0xf3d6(); // UNK_0xf3d6
  }
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  IPREV(); // IPREV
}


// ================================================
// 0xf410: WORD 'UNK_0xf412' codep=0x224c parp=0xf412 params=0 returns=0
// ================================================

void UNK_0xf412() // UNK_0xf412
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

    UNK_0xf3f8(); // UNK_0xf3f8
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x000a);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf438: WORD 'return-items' codep=0x224c parp=0xf43a params=0 returns=0
// ================================================

void return_dash_items() // return-items
{
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xf412(); // UNK_0xf412
}


// ================================================
// 0xf442: WORD '>DEBRIS' codep=0x224c parp=0xf44e params=0 returns=0
// ================================================
// entry

void _gt_DEBRIS() // >DEBRIS
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  UNK_0xf412(); // UNK_0xf412
}


// ================================================
// 0xf456: WORD 'UNK_0xf458' codep=0x224c parp=0xf458
// ================================================

void UNK_0xf458() // UNK_0xf458
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
// 0xf47e: WORD 'UNK_0xf480' codep=0x224c parp=0xf480
// ================================================

void UNK_0xf480() // UNK_0xf480
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  UNK_0xf458(); // UNK_0xf458
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf48e: WORD '(/ITEMS)' codep=0x224c parp=0xf49b params=0 returns=4
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
      UNK_0xe044(); // UNK_0xe044
      art_dash_analyz(); // art-analyz
      Push(pp__ro_SCROLL_1); // (SCROLL_1
      _1_dot_5_at_(); // 1.5@
      Push(Pop() | Pop()); // OR
      Push(Pop()==0?1:0); //  0=
      if (Pop() != 0)
      {
        MAKE_dash_SC(); // MAKE-SC
        UNK_0xf36a(); // UNK_0xf36a
        Push(pp_SUPER_dash_BOX); // SUPER-BOX
        _1_dot_5_at_(); // 1.5@
        GET_dash_BOX(); // GET-BOX
      }
      Push(pp_XORMODE); // XORMODE
      OFF(); // OFF
      GetColor(WHITE);
      StoreCOLOR(); // !COLOR
      UNK_0xeee4(); // UNK_0xeee4
      GetColor(WHITE);
      StoreCOLOR(); // !COLOR
      UNK_0xf002(); // UNK_0xf002
      UNK_0xef62(); // UNK_0xef62
      UNK_0xf222(); // UNK_0xf222
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
    UNK_0xdf01(); // UNK_0xdf01
    art_dash_analyz(); // art-analyz
    UNK_0xf480(); // UNK_0xf480
    return;
  }
  UNK_0xe044(); // UNK_0xe044
  art_dash_analyz(); // art-analyz
  Push(6);
  Push(0);
  UNK_0xdf55(); // UNK_0xdf55
  PRINT("NOT ENOUGH STORAGE FOR FUNCTION", 31); // (.")
  Push(0x0fa0);
  MS(); // MS
  art_dash_analyz(); // art-analyz
}

// 0xf541: db 0x49 0x54 0x45 0x4d 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ITEMS__________________________ '

