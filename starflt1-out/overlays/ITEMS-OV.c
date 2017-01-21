// ====== OVERLAY 'ITEMS-OV' ======
// store offset = 0xdde0
// overlay size   = 0x1780

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//        revision  codep:0x1d29 parp:0xddf6 size:0x0002 C-string:'revision'
//      UNK_0xddfa  codep:0x1d29 parp:0xddfa size:0x00cd C-string:'UNK_0xddfa'
//      UNK_0xdec9  codep:0x1d29 parp:0xdec9 size:0x0002 C-string:'UNK_0xdec9'
//      UNK_0xdecd  codep:0x224c parp:0xdecd size:0x0032 C-string:'UNK_0xdecd'
//      UNK_0xdf01  codep:0x224c parp:0xdf01 size:0x0008 C-string:'UNK_0xdf01'
//      UNK_0xdf0b  codep:0x224c parp:0xdf0b size:0x0048 C-string:'UNK_0xdf0b'
//      UNK_0xdf55  codep:0x224c parp:0xdf55 size:0x008a C-string:'UNK_0xdf55'
//      UNK_0xdfe1  codep:0x2214 parp:0xdfe1 size:0x0002 C-string:'UNK_0xdfe1'
//      UNK_0xdfe5  codep:0x73ea parp:0xdfe5 size:0x0006 C-string:'UNK_0xdfe5'
//      UNK_0xdfed  codep:0x744d parp:0xdfed size:0x0003 C-string:'UNK_0xdfed'
//      UNK_0xdff2  codep:0x744d parp:0xdff2 size:0x000b C-string:'UNK_0xdff2'
//      UNK_0xdfff  codep:0x744d parp:0xdfff size:0x0003 C-string:'UNK_0xdfff'
//      UNK_0xe004  codep:0x744d parp:0xe004 size:0x0003 C-string:'UNK_0xe004'
//      UNK_0xe009  codep:0x73ea parp:0xe009 size:0x0006 C-string:'UNK_0xe009'
//      UNK_0xe011  codep:0x744d parp:0xe011 size:0x0003 C-string:'UNK_0xe011'
//      UNK_0xe016  codep:0x744d parp:0xe016 size:0x0003 C-string:'UNK_0xe016'
//      UNK_0xe01b  codep:0x744d parp:0xe01b size:0x0017 C-string:'UNK_0xe01b'
//      UNK_0xe034  codep:0x224c parp:0xe034 size:0x000e C-string:'UNK_0xe034'
//      UNK_0xe044  codep:0x224c parp:0xe044 size:0x0018 C-string:'UNK_0xe044'
//      UNK_0xe05e  codep:0x224c parp:0xe05e size:0x0012 C-string:'UNK_0xe05e'
//      UNK_0xe072  codep:0x224c parp:0xe072 size:0x0010 C-string:'UNK_0xe072'
//      UNK_0xe084  codep:0x224c parp:0xe084 size:0x002f C-string:'UNK_0xe084'
//      UNK_0xe0b5  codep:0x224c parp:0xe0b5 size:0x00ca C-string:'UNK_0xe0b5'
//      UNK_0xe181  codep:0x224c parp:0xe181 size:0x000b C-string:'UNK_0xe181'
//      UNK_0xe18e  codep:0x224c parp:0xe18e size:0x0009 C-string:'UNK_0xe18e'
//           .desc  codep:0x224c parp:0xe199 size:0x000d C-string:'_dot_desc'
//           .eras  codep:0x224c parp:0xe1a8 size:0x000a C-string:'_dot_eras'
//      UNK_0xe1b4  codep:0x224c parp:0xe1b4 size:0x000b C-string:'UNK_0xe1b4'
//            lpos  codep:0x224c parp:0xe1c1 size:0x0008 C-string:'lpos'
//      UNK_0xe1cb  codep:0x1d29 parp:0xe1cb size:0x0006 C-string:'UNK_0xe1cb'
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
//      UNK_0xe38a  codep:0x224c parp:0xe38a size:0x000c C-string:'UNK_0xe38a'
//         ?VOLUME  codep:0x224c parp:0xe398 size:0x0083 C-string:'_ask_VOLUME'
//       (EXTRACT)  codep:0x224c parp:0xe429 size:0x0030 C-string:'_ro_EXTRACT_rc_'
//       plextract  codep:0x224c parp:0xe45b size:0x0008 C-string:'plextract'
//       tvextract  codep:0x224c parp:0xe465 size:0x0008 C-string:'tvextract'
//           niche  codep:0x73ea parp:0xe46f size:0x0006 C-string:'niche'
//         i.level  codep:0x73ea parp:0xe477 size:0x0006 C-string:'i_dot_level'
//      size.index  codep:0x73ea parp:0xe47f size:0x0006 C-string:'size_dot_index'
//       niche>val  codep:0x224c parp:0xe487 size:0x0032 C-string:'niche_gt_val'
//           ?dist  codep:0x224c parp:0xe4bb size:0x0034 C-string:'_ask_dist'
//         valuate  codep:0x224c parp:0xe4f1 size:0x0030 C-string:'valuate'
//      UNK_0xe523  codep:0x224c parp:0xe523 size:0x0034 C-string:'UNK_0xe523'
//      info-setup  codep:0x224c parp:0xe559 size:0x000c C-string:'info_dash_setup'
//          $setup  codep:0x224c parp:0xe567 size:0x002a C-string:'_do_setup'
//          $match  codep:0x224c parp:0xe593 size:0x002c C-string:'_do_match'
//      UNK_0xe5c1  codep:0x224c parp:0xe5c1 size:0x0010 C-string:'UNK_0xe5c1'
//      UNK_0xe5d3  codep:0x224c parp:0xe5d3 size:0x000a C-string:'UNK_0xe5d3'
//      UNK_0xe5df  codep:0x224c parp:0xe5df size:0x003b C-string:'UNK_0xe5df'
//      UNK_0xe61c  codep:0x224c parp:0xe61c size:0x001a C-string:'UNK_0xe61c'
//      UNK_0xe638  codep:0x224c parp:0xe638 size:0x0038 C-string:'UNK_0xe638'
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
//      UNK_0xea32  codep:0x224c parp:0xea32 size:0x0038 C-string:'UNK_0xea32'
//      UNK_0xea6c  codep:0x224c parp:0xea6c size:0x0008 C-string:'UNK_0xea6c'
//      UNK_0xea76  codep:0x224c parp:0xea76 size:0x0042 C-string:'UNK_0xea76'
//      UNK_0xeaba  codep:0x1d29 parp:0xeaba size:0x0004 C-string:'UNK_0xeaba'
//      UNK_0xeac0  codep:0x224c parp:0xeac0 size:0x0054 C-string:'UNK_0xeac0'
//      UNK_0xeb16  codep:0x224c parp:0xeb16 size:0x003a C-string:'UNK_0xeb16'
//      UNK_0xeb52  codep:0x73ea parp:0xeb52 size:0x0006 C-string:'UNK_0xeb52'
//      UNK_0xeb5a  codep:0x73ea parp:0xeb5a size:0x0006 C-string:'UNK_0xeb5a'
//      UNK_0xeb62  codep:0x224c parp:0xeb62 size:0x0022 C-string:'UNK_0xeb62'
//      UNK_0xeb86  codep:0x224c parp:0xeb86 size:0x0043 C-string:'UNK_0xeb86'
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
//      UNK_0xf29c  codep:0x224c parp:0xf29c size:0x0050 C-string:'UNK_0xf29c'
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
extern const unsigned short int pp__ask_CRITIC; // ?CRITIC
extern const unsigned short int pp_ELEM_dash_AM; // ELEM-AM
extern const unsigned short int pp__i_FLARE; // 'FLARE
extern const unsigned short int pp__ro_FLARE_rc_; // (FLARE)
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp__ask_BOMB; // ?BOMB
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp__ask_WIN; // ?WIN
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
extern const unsigned short int pp_STAR_dash_HR; // STAR-HR
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp__ask_FLAT; // ?FLAT
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp__ro_BOMB_rc_; // (BOMB)
extern const unsigned short int pp_LAST_dash_UPDATE; // LAST-UPDATE
extern const unsigned short int pp_ANCHOR_dash_CONTOUR; // ANCHOR-CONTOUR
extern const unsigned short int pp_TVEHICLE; // TVEHICLE
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp_SUPER_dash_BOX; // SUPER-BOX
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_SURFACE_rc_; // (SURFACE)
extern const unsigned short int pp_THIS_dash_RE; // THIS-RE
extern const unsigned short int pp_LSCAN; // LSCAN
extern LoadDataType SHAPE; // SHAPE
extern LoadDataType RESEMBLES; // RESEMBLES
extern LoadDataType SPEC_dash_NAME; // SPEC-NAME
extern IFieldType INST_dash_SP; // INST-SP
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
void PAD(); // PAD
void _dot_(); // .
void _dot_R(); // .R
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
void _ex__3(); // !_3
void _plus__ex_(); // +!
void _1_dot_5_ex_(); // 1.5!
void _2_ex_(); // 2!
void D_ex_(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void _at_RECORD(); // @RECORD
void _at_INST_dash_CLASS(); // @INST-CLASS
void _at_INST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void CI_i_(); // CI'
void CJ(); // CJ
void _ask_NULL(); // ?NULL
void _ask_CHILD(); // ?CHILD
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void _at__gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void _ask_LAST(); // ?LAST
void _ask_FIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void IINSERT(); // IINSERT
void IEXTRACT(); // IEXTRACT
void _at_NEWSPACE(); // @NEWSPACE
void MAXSPACE(); // MAXSPACE
void IFIND(); // IFIND
void _gt_INACTIVE(); // >INACTIVE
void IDELETE(); // IDELETE
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void _ex_COLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _at_ID(); // @ID
void _at_IL(); // @IL
void _at_IH(); // @IH
void _dot_BACKGR(); // .BACKGR
void POINT_gt_ICON(); // POINT>ICON
void _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
void _ask_ICONS_dash_AT(); // ?ICONS-AT
void _dash_ICON(); // -ICON
void _plus_ICON(); // +ICON
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void _gt_TVCT(); // >TVCT
void CLICK(); // CLICK
void _at_CRS(); // @CRS
void _ex_CRS(); // !CRS
void _do__dot_(); // $.
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void WINDOW(); // WINDOW
void WLINE_dash_UP(); // WLINE-UP
void WLINE_dash_D(); // WLINE-D
void GCR(); // GCR
void WSHORTE(); // WSHORTE
void XYSCAN(); // XYSCAN
void _ask_TRIG(); // ?TRIG
void _ask_QUIT(); // ?QUIT
void Y_slash_N(); // Y/N
void CURSORSPACE(); // CURSORSPACE
void TEXT_gt_PA(); // TEXT>PA
void _ask_NEW_dash_HO(); // ?NEW-HO
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
void EXIT(); // EXIT
void TIME(); // TIME
void _at_EXECUTE(); // @EXECUTE
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
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

const unsigned short int pp_UNK_0xddfa = 0xddfa; // UNK_0xddfa size: 205
// {0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x3c, 0x3b, 0xe9, 0x97, 0xdd, 0xc5, 0x50, 0x52, 0x4f, 0x42, 0xd3, 0xa0, 0x3c, 0x49, 0xe9, 0xdc, 0xdd, 0x86, 0x25, 0x54, 0x4f, 0x54, 0x41, 0xcc, 0x29, 0x1d, 0x64, 0x00, 0x0c, 0xde, 0x87, 0x25, 0x52, 0x45, 0x4d, 0x41, 0x49, 0xce, 0x4c, 0x22, 0x5d, 0x17, 0x64, 0x00, 0x1f, 0x31, 0x36, 0x32, 0x38, 0x0f, 0x90, 0x16, 0x01, 0xde, 0x84, 0x4d, 0x41, 0x52, 0xcb, 0x4c, 0x22, 0x3d, 0x23, 0xed, 0x23, 0x3b, 0xe9, 0xb8, 0x15, 0x50, 0x0e, 0x38, 0x0c, 0x3e, 0x13, 0x89, 0x12, 0xfa, 0x15, 0x06, 0x00, 0x50, 0x0e, 0x4a, 0x17, 0x8b, 0x3b, 0x5c, 0x15, 0xec, 0xff, 0xed, 0x22, 0x7f, 0x0e, 0x7b, 0x3b, 0x72, 0x0f, 0x76, 0x6d, 0x9f, 0x6d, 0x20, 0x0f, 0x1f, 0xde, 0x76, 0x6d, 0x90, 0x16, 0xf4, 0xdd, 0x82, 0x25, 0xac, 0x4c, 0x22, 0x1f, 0xde, 0x7f, 0x0e, 0x7f, 0x0e, 0xae, 0x0b, 0x72, 0x0f, 0xaf, 0x21, 0x83, 0x6d, 0xfc, 0xe2, 0x90, 0x16, 0x18, 0xde, 0x82, 0x30, 0xd0, 0x4c, 0x22, 0x20, 0x0f, 0x7b, 0xde, 0x90, 0x16, 0x25, 0xde, 0x84, 0x21, 0x43, 0x53, 0xd0, 0x4c, 0x22, 0x12, 0x0f, 0xb4, 0x05, 0x76, 0x6d, 0x90, 0x16, 0x91, 0xde, 0xc5, 0x45, 0x43, 0x41, 0x53, 0xc5, 0x4c, 0x22, 0xd9, 0x1f, 0xb4, 0x05, 0xae, 0x0b, 0xa3, 0xde, 0x7b, 0x3b, 0x90, 0x16, 0x3d, 0xde, 0xc3, 0x45}

const unsigned short int pp_UNK_0xdec9 = 0xdec9; // UNK_0xdec9 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe1cb = 0xe1cb; // UNK_0xe1cb size: 6
// {0x00, 0x00, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_UNK_0xeaba = 0xeaba; // UNK_0xeaba size: 4
// {0x56, 0x3a, 0x20, 0x78}

const unsigned short int pp_UNK_0xebcb = 0xebcb; // UNK_0xebcb size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xee93 = 0xee93; // UNK_0xee93 size: 3
// {0x3a, 0x20, 0x05}


const unsigned short int cc_UNK_0xdfe1 = 0xdfe1; // UNK_0xdfe1


// 0xddf2: db 0x77 0x01 'w '

// ================================================
// 0xddf4: WORD 'revision' codep=0x1d29 parp=0xddf6
// ================================================
// 0xddf6: db 0x3a 0x20 ': '

// ================================================
// 0xddf8: WORD 'UNK_0xddfa' codep=0x1d29 parp=0xddfa
// ================================================
// 0xddfa: db 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x3c 0x3b 0xe9 0x97 0xdd 0xc5 0x50 0x52 0x4f 0x42 0xd3 0xa0 0x3c 0x49 0xe9 0xdc 0xdd 0x86 0x25 0x54 0x4f 0x54 0x41 0xcc 0x29 0x1d 0x64 0x00 0x0c 0xde 0x87 0x25 0x52 0x45 0x4d 0x41 0x49 0xce 0x4c 0x22 0x5d 0x17 0x64 0x00 0x1f 0x31 0x36 0x32 0x38 0x0f 0x90 0x16 0x01 0xde 0x84 0x4d 0x41 0x52 0xcb 0x4c 0x22 0x3d 0x23 0xed 0x23 0x3b 0xe9 0xb8 0x15 0x50 0x0e 0x38 0x0c 0x3e 0x13 0x89 0x12 0xfa 0x15 0x06 0x00 0x50 0x0e 0x4a 0x17 0x8b 0x3b 0x5c 0x15 0xec 0xff 0xed 0x22 0x7f 0x0e 0x7b 0x3b 0x72 0x0f 0x76 0x6d 0x9f 0x6d 0x20 0x0f 0x1f 0xde 0x76 0x6d 0x90 0x16 0xf4 0xdd 0x82 0x25 0xac 0x4c 0x22 0x1f 0xde 0x7f 0x0e 0x7f 0x0e 0xae 0x0b 0x72 0x0f 0xaf 0x21 0x83 0x6d 0xfc 0xe2 0x90 0x16 0x18 0xde 0x82 0x30 0xd0 0x4c 0x22 0x20 0x0f 0x7b 0xde 0x90 0x16 0x25 0xde 0x84 0x21 0x43 0x53 0xd0 0x4c 0x22 0x12 0x0f 0xb4 0x05 0x76 0x6d 0x90 0x16 0x91 0xde 0xc5 0x45 0x43 0x41 0x53 0xc5 0x4c 0x22 0xd9 0x1f 0xb4 0x05 0xae 0x0b 0xa3 0xde 0x7b 0x3b 0x90 0x16 0x3d 0xde 0xc3 0x45 ': ) :  ALLOT <;    PROB  <I    %TOTA ) d    %REMAI L"] d  1628      MAR L"=# #;   P 8 >       P J  ;\    " {;r vm m    vm     % L"      r  ! m       0 L"  {   %  !CS L"    vm     ECAS L"        {;  =  E'

// ================================================
// 0xdec7: WORD 'UNK_0xdec9' codep=0x1d29 parp=0xdec9
// ================================================
// 0xdec9: db 0x3a 0x20 ': '

// ================================================
// 0xdecb: WORD 'UNK_0xdecd' codep=0x224c parp=0xdecd
// ================================================

void UNK_0xdecd() // UNK_0xdecd
{
  unsigned short int a;
  a = Pop(); // >R
  _at_CRS(); // @CRS
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
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
  Push(1);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  _ex_CRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF_2(); // OFF_2
}


// ================================================
// 0xdeff: WORD 'UNK_0xdf01' codep=0x224c parp=0xdf01
// ================================================

void UNK_0xdf01() // UNK_0xdf01
{
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  UNK_0xdecd(); // UNK_0xdecd
}


// ================================================
// 0xdf09: WORD 'UNK_0xdf0b' codep=0x224c parp=0xdf0b
// ================================================

void UNK_0xdf0b() // UNK_0xdf0b
{
  _ask_NEW_dash_HO(); // ?NEW-HO
  if (Pop() != 0)
  {
    TIME(); // TIME
    _2_at_(); // 2@
    Push(pp_LAST_dash_UPDATE); // LAST-UPDATE
    D_ex_(); // D!
    Push(1);
    Push(pp_STAR_dash_HR); // STAR-HR
    _plus__ex_(); // +!
    Push(pp_STAR_dash_HR); // STAR-HR
    Push(Read16(Pop())); // @
    Push(0x0018);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(pp_STAR_dash_HR); // STAR-HR
      OFF(); // OFF
      Push(1);
      Push(pp_STARDATE); // STARDATE
      _plus__ex_(); // +!
    }
  }
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(pp__ro_FLARE_rc_); // (FLARE)
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  Push(pp__ask_WIN); // ?WIN
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__i_FLARE); // 'FLARE
  _at_EXECUTE(); // @EXECUTE
}


// ================================================
// 0xdf53: WORD 'UNK_0xdf55' codep=0x224c parp=0xdf55
// ================================================

void UNK_0xdf55() // UNK_0xdf55
{
  SWAP(); // SWAP
  _4_star_(); // 4*
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+2); // 2+
  Push(Pop() + Pop()); // +
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  ROT(); // ROT
  Push(7);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
}

// 0xdf73: db 0x14 0x22 0x2e 0x00 0x4c 0x22 0x5d 0x17 0x75 0xdf 0x76 0x6d 0x5d 0x17 0x75 0xdf 0xc1 0x21 0x5d 0x17 0x90 0x27 0x5d 0x17 0x0e 0x00 0x72 0x0f 0x76 0x6d 0x8e 0x27 0x5d 0x17 0x9a 0x09 0xc1 0x21 0x5d 0x17 0x90 0x27 0x5d 0x17 0x0e 0x00 0x72 0x0f 0x76 0x6d 0x90 0x16 0x4c 0x22 0xfc 0xdd 0x65 0x5d 0xfd 0x4b 0x58 0x5d 0xae 0x0b 0x20 0x0f 0xb8 0x15 0x65 0x5d 0xae 0x0b 0x22 0xa4 0x22 0x51 0xe7 0x0f 0x65 0x5d 0x11 0x4c 0xd0 0x15 0xf0 0xff 0x58 0x5d 0xae 0x0b 0xf8 0xdd 0x11 0x4c 0x90 0x16 0x14 0x22 0x20 0x00 0x14 0x22 0x44 0x00 0x14 0x22 0x1c 0x00 ' ". L"] u vm] u  !]  ']   r vm ']    !]  ']   r vm  L"  e] KX]      e]  " "Q  e] L    X]     L   "   "D  "  '

// ================================================
// 0xdfdf: WORD 'UNK_0xdfe1' codep=0x2214 parp=0xdfe1
// ================================================
// 0xdfe1: dw 0x0039

// ================================================
// 0xdfe3: WORD 'UNK_0xdfe5' codep=0x73ea parp=0xdfe5
// ================================================
LoadDataType UNK_0xdfe5 = {0x44, 0x33, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xdfeb: WORD 'UNK_0xdfed' codep=0x744d parp=0xdfed
// ================================================
IFieldType UNK_0xdfed = {0x44, 0x12, 0x01};

// ================================================
// 0xdff0: WORD 'UNK_0xdff2' codep=0x744d parp=0xdff2
// ================================================
IFieldType UNK_0xdff2 = {0x0b, 0x11, 0x02};
// 0xdff5: db 0xea 0x73 0x44 0x3a 0x02 0x9c 0xd8 0x69 ' sD:   i'

// ================================================
// 0xdffd: WORD 'UNK_0xdfff' codep=0x744d parp=0xdfff
// ================================================
IFieldType UNK_0xdfff = {0x44, 0x11, 0x01};

// ================================================
// 0xe002: WORD 'UNK_0xe004' codep=0x744d parp=0xe004
// ================================================
IFieldType UNK_0xe004 = {0x44, 0x1b, 0x01};

// ================================================
// 0xe007: WORD 'UNK_0xe009' codep=0x73ea parp=0xe009
// ================================================
LoadDataType UNK_0xe009 = {0x44, 0x9a, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe00f: WORD 'UNK_0xe011' codep=0x744d parp=0xe011
// ================================================
IFieldType UNK_0xe011 = {0x00, 0x15, 0x01};

// ================================================
// 0xe014: WORD 'UNK_0xe016' codep=0x744d parp=0xe016
// ================================================
IFieldType UNK_0xe016 = {0x00, 0x16, 0x01};

// ================================================
// 0xe019: WORD 'UNK_0xe01b' codep=0x744d parp=0xe01b
// ================================================
IFieldType UNK_0xe01b = {0x00, 0x17, 0x01};
// 0xe01e: db 0x4c 0x22 0xd7 0xdf 0x41 0x0e 0x8d 0x54 0x76 0x6d 0x9b 0x54 0xae 0x0b 0x99 0x73 0x32 0x0e 0x90 0x16 'L"  A  Tvm T   s2   '

// ================================================
// 0xe032: WORD 'UNK_0xe034' codep=0x224c parp=0xe034
// ================================================

void UNK_0xe034() // UNK_0xe034
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe042: WORD 'UNK_0xe044' codep=0x224c parp=0xe044
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
// 0xe05c: WORD 'UNK_0xe05e' codep=0x224c parp=0xe05e
// ================================================

void UNK_0xe05e() // UNK_0xe05e
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
  _dot_BACKGR(); // .BACKGR
  _dot_LOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xe082: WORD 'UNK_0xe084' codep=0x224c parp=0xe084
// ================================================

void UNK_0xe084() // UNK_0xe084
{
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(5);
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("PRESS KEY TO CONTINUE ", 22); // (.")
}


// ================================================
// 0xe0b3: WORD 'UNK_0xe0b5' codep=0x224c parp=0xe0b5
// ================================================

void UNK_0xe0b5() // UNK_0xe0b5
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  SetColor("BLACK");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0);
  Push(0);
  UNK_0xdf55(); // UNK_0xdf55
  _ex_COLOR(); // !COLOR
}

// 0xe0db: db 0x4c 0x22 0x5d 0x17 0x01 0x20 0xdb 0x23 0x76 0x6d 0xf8 0xdd 0xae 0x0b 0xf6 0x5b 0xae 0x0b 0x7f 0x0e 0x92 0x0f 0x72 0x0f 0x20 0x0f 0xb8 0x15 0xdb 0x23 0x22 0xa4 0xd0 0x15 0xfa 0xff 0xf8 0xdd 0xc5 0x6d 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x5f 0x12 0xb4 0x0d 0x2d 0x12 0x90 0x0e 0x3e 0x13 0x90 0x16 0x4c 0x22 0x65 0x5d 0xae 0x0b 0xfc 0xdd 0x92 0x0f 0x22 0x51 0xe7 0x0f 0x4c 0x0f 0x22 0x51 0xe7 0x0f 0xb3 0x0f 0xfc 0xdd 0x72 0x0f 0x41 0x0e 0x92 0x0c 0x73 0x3b 0xae 0x3f 0x72 0x0f 0x22 0x51 0x05 0xe1 0xfa 0x15 0x1e 0x00 0x22 0x51 0xe7 0x0f 0x72 0x0f 0x41 0x0e 0x20 0x0f 0xf2 0x0e 0xf5 0x4b 0x41 0x0e 0xe7 0x0f 0x65 0x5d 0xfd 0x4b 0x2e 0x0f 0x58 0x5d 0x11 0x4c 0x41 0x0e 0x92 0x0c 0x73 0x3b 0xae 0x3f 0x72 0x0f 0xf2 0x0e 0xf5 0x4b 0x41 0x0e 0xb4 0x0d 0x65 0x5d 0xae 0x0b 0xf2 0x0e 0xea 0x6d 0x90 0x0e 0x65 0x5d 0x11 0x4c 0x90 0x16 'L"]    #vm     [     r      #"        m  L"  _   -   >   L"e]      "Q  L "Q      r A   s; ?r "Q      "Q  r A      KA   e] K. X] LA   s; ?r    KA   e]     m  e] L  '

// ================================================
// 0xe17f: WORD 'UNK_0xe181' codep=0x224c parp=0xe181
// ================================================

void UNK_0xe181() // UNK_0xe181
{
  PRINT("PICKUP", 6); // (.")
}


// ================================================
// 0xe18c: WORD 'UNK_0xe18e' codep=0x224c parp=0xe18e
// ================================================

void UNK_0xe18e() // UNK_0xe18e
{
  PRINT("DROP", 4); // (.")
}


// ================================================
// 0xe197: WORD '.desc' codep=0x224c parp=0xe199
// ================================================

void _dot_desc() // .desc
{
  PRINT("DESCRIBE", 8); // (.")
}


// ================================================
// 0xe1a6: WORD '.eras' codep=0x224c parp=0xe1a8
// ================================================

void _dot_eras() // .eras
{
  PRINT("ERASE", 5); // (.")
}


// ================================================
// 0xe1b2: WORD 'UNK_0xe1b4' codep=0x224c parp=0xe1b4
// ================================================

void UNK_0xe1b4() // UNK_0xe1b4
{
  PRINT("RECORD", 6); // (.")
}


// ================================================
// 0xe1bf: WORD 'lpos' codep=0x224c parp=0xe1c1
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
// 0xe1cb: db 0x00 0x00 0x29 0x1d 0x3a 0x20 '  ) : '

// ================================================
// 0xe1d1: WORD '#options!' codep=0x224c parp=0xe1d3
// ================================================

void _n_options_ex_() // #options!
{
  Push(pp_UNK_0xe1cb); // UNK_0xe1cb
  _ex__3(); // !_3
}


// ================================================
// 0xe1d9: WORD 'UNK_0xe1db' codep=0x224c parp=0xe1db
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
// 0xe1e7: WORD 'UNK_0xe1e9' codep=0x224c parp=0xe1e9
// ================================================

void UNK_0xe1e9() // UNK_0xe1e9
{
  Push(1);
  lpos(); // lpos
  UNK_0xe18e(); // UNK_0xe18e
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  _dot_desc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe1fb: WORD 'tm.opts' codep=0x224c parp=0xe1fd
// ================================================

void tm_dot_opts() // tm.opts
{
  Push(1);
  lpos(); // lpos
  PRINT("READ", 4); // (.")
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  _dot_eras(); // .eras
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe214: WORD 'tl.opts' codep=0x224c parp=0xe216
// ================================================

void tl_dot_opts() // tl.opts
{
  Push(1);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  _dot_desc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe222: WORD 'UNK_0xe224' codep=0x224c parp=0xe224
// ================================================

void UNK_0xe224() // UNK_0xe224
{
  Push(1);
  lpos(); // lpos
  UNK_0xe18e(); // UNK_0xe18e
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  _dot_desc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe236: WORD 'UNK_0xe238' codep=0x224c parp=0xe238
// ================================================

void UNK_0xe238() // UNK_0xe238
{
  Push(1);
  lpos(); // lpos
  _dot_desc(); // .desc
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  _dot_eras(); // .eras
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
    EXIT(); // EXIT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe27c: WORD 'UNK_0xe27e' codep=0x224c parp=0xe27e
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
// 0xe28a: WORD 'UNK_0xe28c' codep=0x224c parp=0xe28c
// ================================================

void UNK_0xe28c() // UNK_0xe28c
{
  Push(1);
  lpos(); // lpos
  UNK_0xe181(); // UNK_0xe181
  Push(2);
  Push(Read16(regsp)); // DUP
  lpos(); // lpos
  _dot_desc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe29e: WORD 'UNK_0xe2a0' codep=0x224c parp=0xe2a0
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
// 0xe2b7: WORD 'UNK_0xe2b9' codep=0x224c parp=0xe2b9
// ================================================

void UNK_0xe2b9() // UNK_0xe2b9
{
  Push(0x63ef+UNK_0xdfff.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
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
  _dot_desc(); // .desc
  _n_options_ex_(); // #options!
}


// ================================================
// 0xe2f7: WORD 'UNK_0xe2f9' codep=0x224c parp=0xe2f9
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
// 0xe305: WORD 'UNK_0xe307' codep=0x224c parp=0xe307
// ================================================

void UNK_0xe307() // UNK_0xe307
{
  UNK_0xe05e(); // UNK_0xe05e
  UNK_0xe0b5(); // UNK_0xe0b5
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
// 0xe33f: WORD 'UNK_0xe341' codep=0x224c parp=0xe341
// ================================================

void UNK_0xe341() // UNK_0xe341
{
  PRINT("LIFEFORM ALREADY RECORDED", 25); // (.")
  Push(0x05dc);
  MS(); // MS
  UNK_0xe307(); // UNK_0xe307
}


// ================================================
// 0xe367: WORD 'UNK_0xe369' codep=0x224c parp=0xe369
// ================================================

void UNK_0xe369() // UNK_0xe369
{
  PRINT("DUPLICATE SPECIMEN", 18); // (.")
  Push(0x05dc);
  MS(); // MS
  UNK_0xe307(); // UNK_0xe307
}


// ================================================
// 0xe388: WORD 'UNK_0xe38a' codep=0x224c parp=0xe38a
// ================================================

void UNK_0xe38a() // UNK_0xe38a
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63ef+UNK_0xdff2.offset); // IFIELD
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe396: WORD '?VOLUME' codep=0x224c parp=0xe398
// ================================================

void _ask_VOLUME() // ?VOLUME
{
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(Read16(regsp)); // DUP
  Push(0x001a);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(pp_ELEM_dash_AM); // ELEM-AM
    Push(Read16(Pop())); // @
    Push(1);
    MAX(); // MAX
  } else
  {
    Push(0x001b);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(0);
    } else
    {
      Push(0x63ef+INST_dash_QTY.offset); // IFIELD
      Push(Read16(Pop())); // @
    }
  }
  Push(Read16(regsp)); // DUP
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63ef+UNK_0xdff2.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  _gt_(); // >
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push2Words("0.");
    UNK_0xe044(); // UNK_0xe044
    UNK_0xe0b5(); // UNK_0xe0b5
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
// 0xe41b: WORD '(EXTRACT)' codep=0x224c parp=0xe429
// ================================================

void _ro_EXTRACT_rc_() // (EXTRACT)
{
  unsigned short int a;
  UNK_0xe05e(); // UNK_0xe05e
  UNK_0xe0b5(); // UNK_0xe0b5
  CI(); // CI
  _2SWAP(); // 2SWAP
  _at_INST_dash_CLASS(); // @INST-CLASS
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
  _ask_NULL(); // ?NULL
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
// 0xe459: WORD 'plextract' codep=0x224c parp=0xe45b
// ================================================

void plextract() // plextract
{
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  _1_dot_5_at_(); // 1.5@
  _ro_EXTRACT_rc_(); // (EXTRACT)
}


// ================================================
// 0xe463: WORD 'tvextract' codep=0x224c parp=0xe465
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
LoadDataType niche = {0x44, 0x0c, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe475: WORD 'i.level' codep=0x73ea parp=0xe477
// ================================================
LoadDataType i_dot_level = {0x44, 0x36, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe47d: WORD 'size.index' codep=0x73ea parp=0xe47f
// ================================================
LoadDataType size_dot_index = {0x44, 0x0b, 0x01, 0x9c, 0x69d8};

// ================================================
// 0xe485: WORD 'niche>val' codep=0x224c parp=0xe487
// ================================================

void niche_gt_val() // niche>val
{
  LoadData(niche); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(4);
  MOD(); // MOD
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0x000a);
    return;
  }
  Push(2);
  MOD(); // MOD
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(0x001e);
    return;
  }
  Push(0x0032);
}


// ================================================
// 0xe4b9: WORD '?dist' codep=0x224c parp=0xe4bb
// ================================================

void _ask_dist() // ?dist
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x03e8);
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x0320);
  _dash_(); // -
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
  LoadData(i_dot_level); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  LoadData(size_dot_index); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() * Pop()); // *
  _ask_dist(); // ?dist
  Push(Pop()+1); // 1+
  Push(Pop() * Pop()); // *
  Push(0x63ef+UNK_0xdfff.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(0x000a);
    _slash_(); // /
  }
  Push(1);
  MAX(); // MAX
}


// ================================================
// 0xe521: WORD 'UNK_0xe523' codep=0x224c parp=0xe523
// ================================================

void UNK_0xe523() // UNK_0xe523
{
  unsigned short int i, imax;
  Push(1);
  LoadData(SPEC_dash_NAME); // from 'SPECIMEN    '
  Push(3);
  PICK(); // PICK
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    PAD(); // PAD
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    Push((Pop()==Pop())?1:0); // =
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      SWAP(); // SWAP
      if (Pop() == 0) Push(1); else Push(0); // 0=
      SWAP(); // SWAP
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe557: WORD 'info-setup' codep=0x224c parp=0xe559
// ================================================

void info_dash_setup() // info-setup
{
  Push(0);
  Push(5);
  UNK_0xdf55(); // UNK_0xdf55
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe565: WORD '$setup' codep=0x224c parp=0xe567
// ================================================

void _do_setup() // $setup
{
  unsigned short int a;
  LoadData(RESEMBLES); // from 'CREATURE    '
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    LoadData(SHAPE); // from 'CREATURE    '
    _1_dot_5_at_(); // 1.5@
  }
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // IFIELD
  PAD(); // PAD
  Push(0x63ef+PHR_dash_CNT.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
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
    UNK_0xe523(); // UNK_0xe523
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
// 0xe5bf: WORD 'UNK_0xe5c1' codep=0x224c parp=0xe5c1
// ================================================

void UNK_0xe5c1() // UNK_0xe5c1
{
  Push(pp_TVEHICLE); // TVEHICLE
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5d1: WORD 'UNK_0xe5d3' codep=0x224c parp=0xe5d3
// ================================================

void UNK_0xe5d3() // UNK_0xe5d3
{
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  _ex__3(); // !_3
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  _ex__3(); // !_3
}


// ================================================
// 0xe5dd: WORD 'UNK_0xe5df' codep=0x224c parp=0xe5df
// ================================================

void UNK_0xe5df() // UNK_0xe5df
{
  Push(0x0074);
  Push(0x009d);
  POS_dot_(); // POS.
  Push(3);
  SetColor("BLACK");
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63ef+UNK_0xdff2.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  if (Pop() != 0)
  {
    Push(5);
    MAX(); // MAX
    Push(5);
    _slash_(); // /
  }
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(3);
  _dot_R(); // .R
  PRINT("% FULL", 6); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe61a: WORD 'UNK_0xe61c' codep=0x224c parp=0xe61c
// ================================================

void UNK_0xe61c() // UNK_0xe61c
{
  valuate(); // valuate
  _do_match(); // $match
  _ask_VOLUME(); // ?VOLUME
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
// 0xe636: WORD 'UNK_0xe638' codep=0x224c parp=0xe638
// ================================================

void UNK_0xe638() // UNK_0xe638
{
  Push(0x63ef+UNK_0xe004.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(1);
  Push(Pop() & Pop()); // AND
  Push(0x63ef+UNK_0xdfff.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(0x63ef+UNK_0xdfed.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  LoadData(UNK_0xdfe5); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
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
// 0xe670: WORD 'UNK_0xe672' codep=0x224c parp=0xe672
// ================================================

void UNK_0xe672() // UNK_0xe672
{
  Push(Read16(Pop())); // @
  Push(8);
  _slash_(); // /
}


// ================================================
// 0xe67a: WORD 'UNK_0xe67c' codep=0x224c parp=0xe67c
// ================================================

void UNK_0xe67c() // UNK_0xe67c
{
  Push(0x63ef+INST_dash_VAL.offset); // IFIELD
  _ex__3(); // !_3
  UNK_0xe5c1(); // UNK_0xe5c1
  UNK_0xe5d3(); // UNK_0xe5d3
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  OFF(); // OFF
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(0x63ef+INST_dash_DATE.offset); // IFIELD
  _ex__3(); // !_3
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  UNK_0xe672(); // UNK_0xe672
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  UNK_0xe672(); // UNK_0xe672
  ICLOSE(); // ICLOSE
  Push(0x63ef+UNK_0xe016.offset); // IFIELD
  C_ex_(); // C!
  Push(0x63ef+UNK_0xe011.offset); // IFIELD
  C_ex_(); // C!
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(0x63ef+UNK_0xe01b.offset); // IFIELD
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
  LoadData(UNK_0xe009); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000f);
  Push(Pop() & Pop()); // AND
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
    LoadData(UNK_0xe009); // from 'CREATURE    '
    Push(Read8(Pop())&0xFF); // C@
    Push(Pop() + Pop()); // +
    LoadData(UNK_0xe009); // from 'CREATURE    '
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
  _at__gt_C_plus_S(); // @>C+S
  _gt_BOX(); // >BOX
  CDROP(); // CDROP
  info_dash_setup(); // info-setup
  PRINT("LIFEFORM RECORDED ", 18); // (.")
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe72b: WORD 'UNK_0xe72d' codep=0x224c parp=0xe72d
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
  UNK_0xe638(); // UNK_0xe638
  LoadData(UNK_0xe009); // from 'CREATURE    '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0010);
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    UNK_0xe61c(); // UNK_0xe61c
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
      Push(0x63ef+INST_dash_QTY.offset); // IFIELD
      _ex__3(); // !_3
      C_gt_(); // C>
      Push(pp_TV_dash_HOLD); // TV-HOLD
      _at__gt_C_plus_S(); // @>C+S
      _gt_BOX(); // >BOX
      ICLOSE(); // ICLOSE
      Push(0x00f0);
      LoadData(UNK_0xe009); // from 'CREATURE    '
      Push(Read8(Pop())&0xFF); // C@
      Push(Pop() + Pop()); // +
      LoadData(UNK_0xe009); // from 'CREATURE    '
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
    UNK_0xe38a(); // UNK_0xe38a
  } else
  {
    LoadData(UNK_0xe009); // from 'CREATURE    '
    Push(Read8(Pop())&0xFF); // C@
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
  UNK_0xe5df(); // UNK_0xe5df
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe80c: WORD 'UNK_0xe80e' codep=0x224c parp=0xe80e
// ================================================

void UNK_0xe80e() // UNK_0xe80e
{
  Push(0x01e0);
  _dash_(); // -
  Push(0x000a);
  Push(0x0035);
  _star__slash_(); // */
  SWAP(); // SWAP
  Push(0x0480);
  _dash_(); // -
  Push(0x000a);
  Push(0x0040);
  _star__slash_(); // */
  SWAP(); // SWAP
}


// ================================================
// 0xe834: WORD 'UNK_0xe836' codep=0x224c parp=0xe836
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
// 0xe858: WORD 'UNK_0xe85a' codep=0x224c parp=0xe85a
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
// 0xe87c: WORD 'UNK_0xe87e' codep=0x224c parp=0xe87e
// ================================================

void UNK_0xe87e() // UNK_0xe87e
{
  UNK_0xe80e(); // UNK_0xe80e
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); // NEGATE
  }
  Push(0);
  _dot_R(); // .R
  UNK_0xe85a(); // UNK_0xe85a
  PRINT(" * ", 3); // (.")
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(-Pop()); // NEGATE
  }
  Push(0);
  _dot_R(); // .R
  UNK_0xe836(); // UNK_0xe836
}


// ================================================
// 0xe8ac: WORD 'UNK_0xe8ae' codep=0x224c parp=0xe8ae
// ================================================

void UNK_0xe8ae() // UNK_0xe8ae
{
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x120c);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    PRINT("0", 1); // (.")
  }
  Push(0);
  _dot_R(); // .R
  PRINT("-", 1); // (.")
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() != 0)
  {
    PRINT("0", 1); // (.")
  }
  Push(0);
  _dot_R(); // .R
  PRINT("-", 1); // (.")
  Push(0);
  _dot_R(); // .R
}


// ================================================
// 0xe8fe: WORD 'UNK_0xe900' codep=0x224c parp=0xe900
// ================================================

void UNK_0xe900() // UNK_0xe900
{
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe906: WORD 'UNK_0xe908' codep=0x224c parp=0xe908
// ================================================

void UNK_0xe908() // UNK_0xe908
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe90e: WORD 'UNK_0xe910' codep=0x224c parp=0xe910
// ================================================

void UNK_0xe910() // UNK_0xe910
{
  UNK_0xe307(); // UNK_0xe307
  Push(0);
  Push(0);
  UNK_0xdf55(); // UNK_0xdf55
  Push(-2);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  UNK_0xe900(); // UNK_0xe900
  PRINT("SYSTEM: ", 8); // (.")
  UNK_0xe908(); // UNK_0xe908
  Push(0x63ef+UNK_0xe011.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  _dot_R(); // .R
  PRINT(",", 1); // (.")
  Push(0x63ef+UNK_0xe016.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  Push(3);
  _dot_R(); // .R
  Push(0x005a);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  UNK_0xe900(); // UNK_0xe900
  PRINT("PLANET: ", 8); // (.")
  UNK_0xe908(); // UNK_0xe908
  Push(0x63ef+UNK_0xe01b.offset); // IFIELD
  Push(Read8(Pop())&0xFF); // C@
  _dot_(); // .
  GCR(); // GCR
  UNK_0xe900(); // UNK_0xe900
  PRINT("LOCATION: ", 10); // (.")
  UNK_0xe908(); // UNK_0xe908
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
  UNK_0xe87e(); // UNK_0xe87e
  Push(0x005a);
  Push(pp_XBLT); // XBLT
  _st__ex__gt_(); // <!>
  UNK_0xe900(); // UNK_0xe900
  PRINT("DATE: ", 6); // (.")
  UNK_0xe908(); // UNK_0xe908
  Push(0x63ef+INST_dash_DATE.offset); // IFIELD
  Push(Read16(Pop())); // @
  UNK_0xe8ae(); // UNK_0xe8ae
  UNK_0xe084(); // UNK_0xe084
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xe99e: WORD 'UNK_0xe9a0' codep=0x224c parp=0xe9a0
// ================================================

void UNK_0xe9a0() // UNK_0xe9a0
{
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  Push(3);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xe9a8: WORD 'UNK_0xe9aa' codep=0x224c parp=0xe9aa
// ================================================

void UNK_0xe9aa() // UNK_0xe9aa
{
  UNK_0xe9a0(); // UNK_0xe9a0
  if (Pop() == 0) return;
  GCR(); // GCR
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("ARM THIS DEVICE\? NO [  ] YES ", 29); // (.")
  Y_slash_N(); // Y/N
  if (Pop() != 0)
  {
    Push(pp__ro_ORBIT_rc_); // (ORBIT)
    _at__gt_C_plus_S(); // @>C+S
    Push(0x63ef+INST_dash_QTY.offset); // IFIELD
    Push(Read16(Pop())); // @
    ICLOSE(); // ICLOSE
    CI(); // CI
    Push(pp__ro_BOMB_rc_); // (BOMB)
    _1_dot_5_ex_(); // 1.5!
  } else
  {
    Push(0);
  }
  Push(pp__ask_BOMB); // ?BOMB
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xe9f8: WORD 'UNK_0xe9fa' codep=0x224c parp=0xe9fa
// ================================================

void UNK_0xe9fa() // UNK_0xe9fa
{
  UNK_0xe9a0(); // UNK_0xe9a0
  Push(pp__ask_BOMB); // ?BOMB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__ask_BOMB); // ?BOMB
  OFF_2(); // OFF_2
  GCR(); // GCR
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("DISARMING DEVICE ", 17); // (.")
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xea30: WORD 'UNK_0xea32' codep=0x224c parp=0xea32
// ================================================

void UNK_0xea32() // UNK_0xea32
{
  _ask_VOLUME(); // ?VOLUME
  if (Pop() != 0)
  {
    plextract(); // plextract
    _gt_C_plus_S(); // >C+S
    _dash_ICON(); // -ICON
    C_gt_(); // C>
    Push(pp_TV_dash_HOLD); // TV-HOLD
    _at__gt_C_plus_S(); // @>C+S
    _gt_BOX(); // >BOX
    ICLOSE(); // ICLOSE
  }
  UNK_0xe38a(); // UNK_0xe38a
  UNK_0xe5df(); // UNK_0xe5df
}

// 0xea4e: db 0x4c 0x22 0x79 0x9e 0x32 0xe0 0xda 0x7e 0xf4 0xdd 0xb7 0x6d 0x90 0x16 0x4c 0x22 0x59 0xe4 0x79 0x9e 0xde 0x0d 0xf4 0xdd 0xc5 0x6d 0x90 0x16 'L"y 2  ~   m  L"Y y      m  '

// ================================================
// 0xea6a: WORD 'UNK_0xea6c' codep=0x224c parp=0xea6c
// ================================================

void UNK_0xea6c() // UNK_0xea6c
{
  tvextract(); // tvextract
  _dash_ICON(); // -ICON
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea74: WORD 'UNK_0xea76' codep=0x224c parp=0xea76
// ================================================

void UNK_0xea76() // UNK_0xea76
{
  unsigned short int a;
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_CLASS(); // @INST-CLASS
  a = Pop(); // >R
  ICLOSE(); // ICLOSE
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(a); // I
  CLASS_gt_B(); // CLASS>B
  IFIND(); // IFIND
  if (Pop() == 0) Push(1); else Push(0); // 0=
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
  _at_INST_dash_CLASS(); // @INST-CLASS
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  ICLOSE(); // ICLOSE
  Pop(); Pop(); // 2DROP
  CI(); // CI
  IINSERT(); // IINSERT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeab8: WORD 'UNK_0xeaba' codep=0x1d29 parp=0xeaba
// ================================================
// 0xeaba: db 0x56 0x3a 0x20 0x78 'V: x'

// ================================================
// 0xeabe: WORD 'UNK_0xeac0' codep=0x224c parp=0xeac0
// ================================================

void UNK_0xeac0() // UNK_0xeac0
{
  unsigned short int i, imax, a;
  Push(pp_UNK_0xeaba); // UNK_0xeaba
  _2_ex_(); // 2!
  UNK_0xe5c1(); // UNK_0xe5c1
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash_AT(); // ?ICONS-AT
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
    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() != 0)
    {
      SWAP(); // SWAP
      POINT_gt_ICON(); // POINT>ICON
      _at_IL(); // @IL
      _at_IH(); // @IH
      _gt_C_plus_S(); // >C+S
      a = Pop(); // >R
      _at_INST_dash_CLASS(); // @INST-CLASS
      _at_INST_dash_SPECIES(); // @INST-SPECIES
      Push(pp_UNK_0xeaba); // UNK_0xeaba
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
// 0xeb14: WORD 'UNK_0xeb16' codep=0x224c parp=0xeb16
// ================================================

void UNK_0xeb16() // UNK_0xeb16
{
  tvextract(); // tvextract
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  UNK_0xe38a(); // UNK_0xe38a
  UNK_0xe5df(); // UNK_0xe5df
  _at_INST_dash_CLASS(); // @INST-CLASS
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  UNK_0xeac0(); // UNK_0xeac0
  UNK_0xe5c1(); // UNK_0xe5c1
  UNK_0xe5d3(); // UNK_0xe5d3
  Push(0xc437); // probable 'ICON-PARM'
  MODULE(); // MODULE
  _plus_ICON(); // +ICON
  UNK_0xe034(); // UNK_0xe034
  C_gt_(); // C>
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  _at__gt_C_plus_S(); // @>C+S
  ROT(); // ROT
  if (Pop() != 0)
  {
    _gt_BOX(); // >BOX
  } else
  {
    UNK_0xea76(); // UNK_0xea76
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb50: WORD 'UNK_0xeb52' codep=0x73ea parp=0xeb52
// ================================================
LoadDataType UNK_0xeb52 = {0x1c, 0x1d, 0x01, 0x1e, 0x652c};

// ================================================
// 0xeb58: WORD 'UNK_0xeb5a' codep=0x73ea parp=0xeb5a
// ================================================
LoadDataType UNK_0xeb5a = {0x1c, 0x18, 0x01, 0x1e, 0x652c};

// ================================================
// 0xeb60: WORD 'UNK_0xeb62' codep=0x224c parp=0xeb62
// ================================================

void UNK_0xeb62() // UNK_0xeb62
{
  unsigned short int i, imax;
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(i); // I
    Push(0x0026);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    Push(0x0026);
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    GCR(); // GCR
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xeb84: WORD 'UNK_0xeb86' codep=0x224c parp=0xeb86
// ================================================

void UNK_0xeb86() // UNK_0xeb86
{
  UNK_0xe05e(); // UNK_0xe05e
  UNK_0xe0b5(); // UNK_0xe0b5
  LoadData(UNK_0xeb52); // from 'ARTIFACT    '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    Push(Read16(cc_UNK_0xdfe1)); // UNK_0xdfe1
    LoadData(UNK_0xeb5a); // from 'ARTIFACT    '
    Push(Read8(Pop())&0xFF); // C@
    _at_RECORD(); // @RECORD
    UNK_0xeb62(); // UNK_0xeb62
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
    UNK_0xeb16(); // UNK_0xeb16
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
    UNK_0xea32(); // UNK_0xea32
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
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    TS_dot_ACT(); // TS.ACT case
    return;
  }
  PS_dot_ACT(); // PS.ACT case
}


// ================================================
// 0xec0b: WORD 'UNK_0xec0d' codep=0x224c parp=0xec0d
// ================================================

void UNK_0xec0d() // UNK_0xec0d
{
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(0x01f4);
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63ef+UNK_0xdff2.offset); // IFIELD
  Push(Read16(Pop())); // @
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
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  Push(Read16(Pop())); // @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
  UNK_0xeb16(); // UNK_0xeb16
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec3f: WORD 'UNK_0xec41' codep=0x224c parp=0xec41
// ================================================

void UNK_0xec41() // UNK_0xec41
{
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  UNK_0xec0d(); // UNK_0xec0d
  UNK_0xea32(); // UNK_0xea32
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xec4f: WORD 'UNK_0xec51' codep=0x224c parp=0xec51
// ================================================

void UNK_0xec51() // UNK_0xec51
{
  Pop(); // DROP
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xec2b(); // UNK_0xec2b
    return;
  }
  UNK_0xec41(); // UNK_0xec41
}


// ================================================
// 0xec65: WORD 'UNK_0xec67' codep=0x224c parp=0xec67
// ================================================

void UNK_0xec67() // UNK_0xec67
{
  UNK_0xe9fa(); // UNK_0xe9fa
  UNK_0xea32(); // UNK_0xea32
}


// ================================================
// 0xec6d: WORD 'UNK_0xec6f' codep=0x224c parp=0xec6f
// ================================================

void UNK_0xec6f() // UNK_0xec6f
{
  UNK_0xe9aa(); // UNK_0xe9aa
  UNK_0xeb16(); // UNK_0xeb16
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
    UNK_0xeb86(); // UNK_0xeb86
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
    UNK_0xeb86(); // UNK_0xeb86
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
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    TA_dot_ACT(); // TA.ACT case
    return;
  }
  PA_dot_ACT(); // PA.ACT case
}


// ================================================
// 0xecb7: WORD 'UNK_0xecb9' codep=0x224c parp=0xecb9
// ================================================

void UNK_0xecb9() // UNK_0xecb9
{
  Push(0x63ef+INST_dash_SP.offset); // IFIELD
  _at__gt_C_plus_S(); // @>C+S
  Push(0x63ef+PHRASE_dash_MEM.offset); // IFIELD
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  ICLOSE(); // ICLOSE
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0xc216); // probable 'P>CT'
  MODULE(); // MODULE
}


// ================================================
// 0xecd1: WORD 'UNK_0xecd3' codep=0x224c parp=0xecd3
// ================================================

void UNK_0xecd3() // UNK_0xecd3
{
  SetColor("WHITE");
  Push(pp_CTCOLOR); // CTCOLOR
  _ex__3(); // !_3
  UNK_0xecb9(); // UNK_0xecb9
  _ask_CHILD(); // ?CHILD
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
      _ask_FIRST(); // ?FIRST
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
// 0xed09: WORD 'UNK_0xed0b' codep=0x224c parp=0xed0b
// ================================================

void UNK_0xed0b() // UNK_0xed0b
{
  UNK_0xdf01(); // UNK_0xdf01
  UNK_0xe05e(); // UNK_0xe05e
  UNK_0xe0b5(); // UNK_0xe0b5
  UNK_0xecd3(); // UNK_0xecd3
}


// ================================================
// 0xed15: WORD 'UNK_0xed17' codep=0x224c parp=0xed17
// ================================================

void UNK_0xed17() // UNK_0xed17
{
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(0x63ef+INST_dash_DATE.offset); // IFIELD
  _ex__3(); // !_3
  UNK_0xea32(); // UNK_0xea32
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
    UNK_0xea6c(); // UNK_0xea6c
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
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    TM_dot_ACT(); // TM.ACT case
    return;
  }
  PM_dot_ACT(); // PM.ACT case
}


// ================================================
// 0xed65: WORD 'UNK_0xed67' codep=0x224c parp=0xed67
// ================================================

void UNK_0xed67() // UNK_0xed67
{
  UNK_0xdf01(); // UNK_0xdf01
  UNK_0xe05e(); // UNK_0xe05e
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(5);
  Push(pp_UNK_0xddfa); // UNK_0xddfa
  _st__ex__gt_(); // <!>
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0xcd8c); // probable 'SAYIT'
  MODULE(); // MODULE
  UNK_0x3f3b(" ");
  Pop(); // DROP
  Push(Pop()-1); // 1-
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
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
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
    UNK_0xea6c(); // UNK_0xea6c
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
// 0xedfe: WORD 'UNK_0xee00' codep=0x224c parp=0xee00
// ================================================

void UNK_0xee00() // UNK_0xee00
{
  Push(6);
  Push(6);
  UNK_0xdf55(); // UNK_0xdf55
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  PRINT("SCROLL ITEMS: ^\\   QUIT: []", 27); // (.")
  Push(7);
  Push(pp_WBOTTOM); // WBOTTOM
  _st__plus__ex__gt_(); // <+!>
  Push(-1);
  Push(pp_WLINES); // WLINES
  _st__plus__ex__gt_(); // <+!>
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xee3c: WORD 'UNK_0xee3e' codep=0x224c parp=0xee3e
// ================================================

void UNK_0xee3e() // UNK_0xee3e
{
  Push(pp_revision); // revision
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(0xfff9);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xe072(); // UNK_0xe072
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
  Push(0);
  Push(6);
  UNK_0xdf55(); // UNK_0xdf55
  PRINT("REVISING TERRAIN VEHICLE INVENTORY", 34); // (.")
  Push(pp_revision); // revision
  OFF_2(); // OFF_2
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xee91: WORD 'UNK_0xee93' codep=0x1d29 parp=0xee93
// ================================================
// 0xee93: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xee96: WORD 'UNK_0xee98' codep=0x224c parp=0xee98
// ================================================

void UNK_0xee98() // UNK_0xee98
{
  Push(pp_UNK_0xee93); // UNK_0xee93
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xee9e: WORD 'UNK_0xeea0' codep=0x224c parp=0xeea0
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
// 0xeeb0: WORD 'UNK_0xeeb2' codep=0x224c parp=0xeeb2
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
// 0xeec2: WORD 'UNK_0xeec4' codep=0x224c parp=0xeec4
// ================================================

void UNK_0xeec4() // UNK_0xeec4
{
  UNK_0xee98(); // UNK_0xee98
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+TEXT_dash_IN.offset); // IFIELD
  _1_dot_5_at_(); // 1.5@
  ICLOSE(); // ICLOSE
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeed2: WORD 'UNK_0xeed4' codep=0x224c parp=0xeed4
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
// 0xeee2: WORD 'UNK_0xeee4' codep=0x224c parp=0xeee4
// ================================================

void UNK_0xeee4() // UNK_0xeee4
{
  unsigned short int i, imax;
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
  Push(6);
  _dash_(); // -
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
      SetColor("BLACK");
      WSHORTE(); // WSHORTE
      i++;
    } while(i<imax); // (LOOP)

    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xef0a: WORD 'full-text' codep=0x224c parp=0xef0c
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
// 0xef1e: WORD 'UNK_0xef20' codep=0x224c parp=0xef20
// ================================================

void UNK_0xef20() // UNK_0xef20
{
  UNK_0xeec4(); // UNK_0xeec4
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef30: WORD 'UNK_0xef32' codep=0x224c parp=0xef32
// ================================================

void UNK_0xef32() // UNK_0xef32
{
  UNK_0xdf01(); // UNK_0xdf01
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  _st__plus__ex__gt_(); // <+!>
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  Push(1);
  MAX(); // MAX
  Push(pp_UNK_0xe1cb); // UNK_0xe1cb
  Push(Read16(Pop())); // @
  MIN(); // MIN
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
  UNK_0xe044(); // UNK_0xe044
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  Push(Read16(Pop())); // @
  Push(7);
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xdf01(); // UNK_0xdf01
}


// ================================================
// 0xef60: WORD 'UNK_0xef62' codep=0x224c parp=0xef62
// ================================================

void UNK_0xef62() // UNK_0xef62
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x63ef+TEXT_dash_IN.offset); // IFIELD
  _at__gt_C_plus_S(); // @>C+S
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
// 0xef8c: WORD 'UNK_0xef8e' codep=0x224c parp=0xef8e
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
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(7);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xeec4(); // UNK_0xeec4
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(pp_UNK_0xebcb); // UNK_0xebcb
  Push(Read16(Pop())); // @
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
// 0xefd2: WORD 'UNK_0xefd4' codep=0x224c parp=0xefd4
// ================================================

void UNK_0xefd4() // UNK_0xefd4
{
  unsigned short int i, imax;
  UNK_0xee00(); // UNK_0xee00
  Push(pp_WLINES); // WLINES
  Push(Read16(Pop())); // @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_WLEFT); // WLEFT
    Push(Read16(Pop())); // @
    Push(pp_WTOP); // WTOP
    Push(Read16(Pop())); // @
    Push(Pop()-1); // 1-
    Push(i); // I
    Push(7);
    Push(Pop() * Pop()); // *
    _dash_(); // -
    POS_dot_(); // POS.
    TEXT_gt_PA(); // TEXT>PA
    PAD(); // PAD
    _do__dot_(); // $.
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf000: WORD 'UNK_0xf002' codep=0x224c parp=0xf002
// ================================================

void UNK_0xf002() // UNK_0xf002
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CI(); // CI
  Push(pp_UNK_0xee93); // UNK_0xee93
  _1_dot_5_ex_(); // 1.5!
  Push(0);
  do
  {
    Push(Pop()+1); // 1+
    INEXT(); // INEXT
    _ask_FIRST(); // ?FIRST
  } while(Pop() == 0);
  _gt_1FONT(); // >1FONT
  UNK_0xefd4(); // UNK_0xefd4
  IPREV(); // IPREV
  UNK_0xdf01(); // UNK_0xdf01
  Pop(); // DROP
}


// ================================================
// 0xf026: WORD 'UNK_0xf028' codep=0x224c parp=0xf028
// ================================================

void UNK_0xf028() // UNK_0xf028
{
  Push(1);
  Push(pp_UNK_0xdec9); // UNK_0xdec9
  _ex__3(); // !_3
  Push(pp_revision); // revision
  OFF(); // OFF
  Push(pp_FQUIT); // FQUIT
  OFF(); // OFF

  label4:
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
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
      _ask_TRIG(); // ?TRIG
      if (Pop() != 0)
      {
        Push(pp_UNK_0xdec9); // UNK_0xdec9
        Push(Read16(Pop())); // @
        _at_INST_dash_CLASS(); // @INST-CLASS
        DISPATCH(); // DISPATCH case
        Push(pp_revision); // revision
        Push(Read16(Pop())); // @
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
  goto label4;

  label1:
  CDROP(); // CDROP
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  UNK_0xe044(); // UNK_0xe044
  UNK_0xe0b5(); // UNK_0xe0b5
  UNK_0xeee4(); // UNK_0xeee4
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xf002(); // UNK_0xf002
  UNK_0xef62(); // UNK_0xef62
}


// ================================================
// 0xf0a6: WORD 'UNK_0xf0a8' codep=0x224c parp=0xf0a8
// ================================================

void UNK_0xf0a8() // UNK_0xf0a8
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf0b2: WORD 'UNK_0xf0b4' codep=0x224c parp=0xf0b4
// ================================================

void UNK_0xf0b4() // UNK_0xf0b4
{
  UNK_0xf0a8(); // UNK_0xf0a8
  SetColor("BLACK");
  UNK_0xf0a8(); // UNK_0xf0a8
  Push(0x0055);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT(" ", 1); // (.")
  _ex_COLOR(); // !COLOR
  Push(0x0055);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("^", 1); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf0dc: WORD 'UNK_0xf0de' codep=0x224c parp=0xf0de
// ================================================

void UNK_0xf0de() // UNK_0xf0de
{
  UNK_0xf0a8(); // UNK_0xf0a8
  SetColor("BLACK");
  UNK_0xf0a8(); // UNK_0xf0a8
  Push(0x005b);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT(" ", 1); // (.")
  _ex_COLOR(); // !COLOR
  Push(0x005b);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("\\", 1); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf106: WORD 'qtbtn' codep=0x224c parp=0xf108
// ================================================

void qtbtn() // qtbtn
{
  UNK_0xf0a8(); // UNK_0xf0a8
  SetColor("BLACK");
  UNK_0xf0a8(); // UNK_0xf0a8
  Push(0x0085);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("  ", 2); // (.")
  _ex_COLOR(); // !COLOR
  Push(0x0085);
  Push(0x0015);
  POS_dot_(); // POS.
  PRINT("[]", 2); // (.")
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf132: WORD 'UNK_0xf134' codep=0x224c parp=0xf134
// ================================================

void UNK_0xf134() // UNK_0xf134
{
  UNK_0xeec4(); // UNK_0xeec4
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x000b);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    _at_INST_dash_SPECIES(); // @INST-SPECIES
    Push(Read16(regsp)); // DUP
    Push(0x0028);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(1);
    } else
    {
      Push(0x002c);
      Push((Pop()==Pop())?1:0); // =
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
// 0xf174: WORD 'UNK_0xf176' codep=0x224c parp=0xf176
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
// 0xf192: WORD 'UNK_0xf194' codep=0x224c parp=0xf194
// ================================================

void UNK_0xf194() // UNK_0xf194
{
  UNK_0xf134(); // UNK_0xf134
  UNK_0xf176(); // UNK_0xf176
}


// ================================================
// 0xf19a: WORD 'UNK_0xf19c' codep=0x224c parp=0xf19c
// ================================================

void UNK_0xf19c() // UNK_0xf19c
{
  UNK_0xf134(); // UNK_0xf134
  Push(-Pop()); // NEGATE
  UNK_0xf176(); // UNK_0xf176
}


// ================================================
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x224c parp=0xf1a6
// ================================================

void UNK_0xf1a6() // UNK_0xf1a6
{
  SetColor("GREEN");
  UNK_0xf0b4(); // UNK_0xf0b4
  CLICK(); // CLICK
  INEXT(); // INEXT
  UNK_0xeea0(); // UNK_0xeea0
  UNK_0xf194(); // UNK_0xf194
  TEXT_gt_PA(); // TEXT>PA
  PAD(); // PAD
  UNK_0xdf01(); // UNK_0xdf01
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(-1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  WLINE_dash_UP(); // WLINE-UP
  Push(1);
  Push(pp_WTOP); // WTOP
  _st__plus__ex__gt_(); // <+!>
  UNK_0xdf01(); // UNK_0xdf01
  SetColor("LT-BLUE");
  UNK_0xf0b4(); // UNK_0xf0b4
}


// ================================================
// 0xf1d2: WORD 'UNK_0xf1d4' codep=0x224c parp=0xf1d4
// ================================================

void UNK_0xf1d4() // UNK_0xf1d4
{
  SetColor("GREEN");
  UNK_0xf0de(); // UNK_0xf0de
  CLICK(); // CLICK
  UNK_0xf19c(); // UNK_0xf19c
  IPREV(); // IPREV
  UNK_0xeeb2(); // UNK_0xeeb2
  UNK_0xee98(); // UNK_0xee98
  _gt_C_plus_S(); // >C+S
  TEXT_gt_PA(); // TEXT>PA
  ICLOSE(); // ICLOSE
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
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
  SetColor("LT-BLUE");
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
    if (Pop() == 0) Push(1); else Push(0); // 0=
    if (Pop() != 0)
    {
      TD_dash_SCROLL(); // TD-SCROLL case
    } else
    {
      Pop(); // DROP
    }
    _ask_TRIG(); // ?TRIG
    UNK_0xef20(); // UNK_0xef20
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      UNK_0xefa6(); // UNK_0xefa6
      Push(pp_FQUIT); // FQUIT
      OFF(); // OFF
      UNK_0xf028(); // UNK_0xf028
    }
    Push(pp_FQUIT); // FQUIT
    Push(Read16(Pop())); // @
  } while(Pop() == 0);
}


// ================================================
// 0xf250: WORD 'UNK_0xf252' codep=0x224c parp=0xf252
// ================================================

void UNK_0xf252() // UNK_0xf252
{
  Push2Words("0.");
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;

  label4:
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  CJ(); // CJ
  CI(); // CI
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    CI_i_(); // CI'
  }
  INEXT(); // INEXT
  goto label4;

  label2:
  CJ(); // CJ
  CI(); // CI
  D_eq_(); // D=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    CI_i_(); // CI'
  }

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf29a: WORD 'UNK_0xf29c' codep=0x224c parp=0xf29c
// ================================================

void UNK_0xf29c() // UNK_0xf29c
{
  Push2Words("0.");
  do
  {
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() == 0) Push(1); else Push(0); // 0=
    _ask_LAST(); // ?LAST
    if (Pop() == 0) Push(1); else Push(0); // 0=
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
  } while(1);
}

// 0xf2d8: db 0x4c 0x22 0xf1 0x75 0xfa 0x15 0x0c 0x00 0xc9 0x79 0xda 0x7e 0x9c 0x7a 0x58 0x51 0xf2 0x79 0x90 0x16 'L" u     y ~ zXQ y  '

// ================================================
// 0xf2ec: WORD 'UNK_0xf2ee' codep=0x224c parp=0xf2ee
// ================================================

void UNK_0xf2ee() // UNK_0xf2ee
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  UNK_0xf252(); // UNK_0xf252
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Pop(); Pop(); // 2DROP
    Push(pp__ro_PLANET); // (PLANET
    _at__gt_C_plus_S(); // @>C+S
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
  _at_INST_dash_CLASS(); // @INST-CLASS
  Push(0x001b);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(pp_STARDATE); // STARDATE
    Push(Read16(Pop())); // @
    Push(0x63ef+INST_dash_DATE.offset); // IFIELD
    _ex__3(); // !_3
  }
  IEXTRACT(); // IEXTRACT
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xea76(); // UNK_0xea76
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  Push(-1);
  Push(0x63ef+INST_dash_QTY.offset); // IFIELD
  _plus__ex_(); // +!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf346: WORD 'UNK_0xf348' codep=0x224c parp=0xf348
// ================================================

void UNK_0xf348() // UNK_0xf348
{
  UNK_0xe5c1(); // UNK_0xe5c1
  Push(0x63ef+INST_dash_Y.offset); // IFIELD
  Push(Read16(Pop())); // @
  _dash_(); // -
  ABS(); // ABS
  Push(2);
  _st_(); // <
  SWAP(); // SWAP
  Push(0x63ef+INST_dash_X.offset); // IFIELD
  Push(Read16(Pop())); // @
  _dash_(); // -
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
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_ICON(); // POINT>ICON
    _at_ID(); // @ID
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
    Push(0x00fe);
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() | Pop()); // OR
    Push(a); // R>
    Push(0x002c);
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      _at_IL(); // @IL
      _at_IH(); // @IH
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
// 0xf3d4: WORD 'UNK_0xf3d6' codep=0x224c parp=0xf3d6
// ================================================

void UNK_0xf3d6() // UNK_0xf3d6
{
  CJ(); // CJ
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _1_dot_5_at_(); // 1.5@
  D_eq_(); // D=
  if (Pop() != 0)
  {
    UNK_0xe5c1(); // UNK_0xe5c1
    Push(0x63ef+INST_dash_Y.offset); // IFIELD
    _ex__3(); // !_3
    Push(0x63ef+INST_dash_X.offset); // IFIELD
    _ex__3(); // !_3
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

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf3d6(); // UNK_0xf3d6
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
  IPREV(); // IPREV
}


// ================================================
// 0xf410: WORD 'UNK_0xf412' codep=0x224c parp=0xf412
// ================================================

void UNK_0xf412() // UNK_0xf412
{
  Push(0x7d00);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
  IOPEN(); // IOPEN

  label2:
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf3f8(); // UNK_0xf3f8
  goto label2;

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(0x000a);
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf438: WORD 'return-items' codep=0x224c parp=0xf43a
// ================================================

void return_dash_items() // return-items
{
  Push(pp__ro_SURFACE_rc_); // (SURFACE)
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf412(); // UNK_0xf412
}


// ================================================
// 0xf442: WORD '>DEBRIS' codep=0x224c parp=0xf44e
// ================================================
// entry

void _gt_DEBRIS() // >DEBRIS
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
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
  Push(pp__ask_FLAT); // ?FLAT
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf47e: WORD 'UNK_0xf480' codep=0x224c parp=0xf480
// ================================================

void UNK_0xf480() // UNK_0xf480
{
  Push(pp_TV_dash_HOLD); // TV-HOLD
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  UNK_0xf458(); // UNK_0xf458
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf48e: WORD '(/ITEMS)' codep=0x224c parp=0xf49b
// ================================================
// entry

void _ro__slash_ITEMS_rc_() // (/ITEMS)
{
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  _at_NEWSPACE(); // @NEWSPACE
  D_st_(); // D<
  Push(pp__ask_CRITIC); // ?CRITIC
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    do
    {
      UNK_0xe044(); // UNK_0xe044
      UNK_0xe0b5(); // UNK_0xe0b5
      Push(pp__ro_SCROLL_1); // (SCROLL_1
      _1_dot_5_at_(); // 1.5@
      Push(Pop() | Pop()); // OR
      if (Pop() == 0) Push(1); else Push(0); // 0=
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
      SetColor("WHITE");
      _ex_COLOR(); // !COLOR
      UNK_0xeee4(); // UNK_0xeee4
      SetColor("WHITE");
      _ex_COLOR(); // !COLOR
      UNK_0xf002(); // UNK_0xf002
      UNK_0xef62(); // UNK_0xef62
      UNK_0xf222(); // UNK_0xf222
      _ask_QUIT(); // ?QUIT
    } while(Pop() == 0);
    SetColor("GREEN");
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
    Push(pp_UNK_0xddfa); // UNK_0xddfa
    _st__ex__gt_(); // <!>
    SetColor("LT-BLUE");
    qtbtn(); // qtbtn
    UNK_0xdf01(); // UNK_0xdf01
    UNK_0xe0b5(); // UNK_0xe0b5
    UNK_0xf480(); // UNK_0xf480
    return;
  }
  UNK_0xe044(); // UNK_0xe044
  UNK_0xe0b5(); // UNK_0xe0b5
  Push(6);
  Push(0);
  UNK_0xdf55(); // UNK_0xdf55
  PRINT("NOT ENOUGH STORAGE FOR FUNCTION", 31); // (.")
  Push(0x0fa0);
  MS(); // MS
  UNK_0xe0b5(); // UNK_0xe0b5
}

// 0xf541: db 0x49 0x54 0x45 0x4d 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ITEMS__________________________ '

