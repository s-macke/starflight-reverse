// ====== OVERLAY 'HYPER-OV' ======
// store offset = 0xd960
// overlay size   = 0x1c00

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//   SET-'EXTERNAL  codep:0x224c parp:0xd976 size:0x0008 C-string:'SET_dash__i_EXTERNAL'
//           SHP>C  codep:0x224c parp:0xd980 size:0x0006 C-string:'SHP_gt_C'
//           PLN>C  codep:0x224c parp:0xd988 size:0x0006 C-string:'PLN_gt_C'
//           ORB>C  codep:0x224c parp:0xd990 size:0x0006 C-string:'ORB_gt_C'
//           SYS>C  codep:0x224c parp:0xd998 size:0x0006 C-string:'SYS_gt_C'
//           ENC>C  codep:0x224c parp:0xd9a0 size:0x0006 C-string:'ENC_gt_C'
//         2ICLOSE  codep:0x224c parp:0xd9a8 size:0x0006 C-string:'_2ICLOSE'
//        RCOLLIDE  codep:0x2214 parp:0xd9b0 size:0x0002 C-string:'RCOLLIDE'
//       PRTRADIUS  codep:0x2214 parp:0xd9b4 size:0x0002 C-string:'PRTRADIUS'
//       DEFRADIUS  codep:0x2214 parp:0xd9b8 size:0x0002 C-string:'DEFRADIUS'
//       ORBRADIUS  codep:0x2214 parp:0xd9bc size:0x0002 C-string:'ORBRADIUS'
//       ENCRADIUS  codep:0x2214 parp:0xd9c0 size:0x0002 C-string:'ENCRADIUS'
//       SYSRADIUS  codep:0x2214 parp:0xd9c4 size:0x0002 C-string:'SYSRADIUS'
//       VISLENGTH  codep:0x2214 parp:0xd9c8 size:0x0002 C-string:'VISLENGTH'
//        VISWIDTH  codep:0x2214 parp:0xd9cc size:0x0002 C-string:'VISWIDTH'
//         BVISOFF  codep:0x2214 parp:0xd9d0 size:0x0002 C-string:'BVISOFF'
//         LVISOFF  codep:0x2214 parp:0xd9d4 size:0x0002 C-string:'LVISOFF'
//        MAXSPEED  codep:0x2214 parp:0xd9d8 size:0x0002 C-string:'MAXSPEED'
//        (RADIUS)  codep:0x1d29 parp:0xd9dc size:0x0002 C-string:'_ro_RADIUS_rc_'
//       [CONTEXT]  codep:0x1d29 parp:0xd9e0 size:0x0002 C-string:'_bo_CONTEXT_bc_'
//           WD9E4  codep:0x1d29 parp:0xd9e4 size:0x0002 C-string:'WD9E4'
//           WD9E8  codep:0x1d29 parp:0xd9e8 size:0x0002 C-string:'WD9E8'
//           WD9EC  codep:0x1d29 parp:0xd9ec size:0x0002 C-string:'WD9EC'
//       (COLLIDE)  codep:0x1d29 parp:0xd9f0 size:0x0004 C-string:'_ro_COLLIDE_rc_'
//            XCRS  codep:0x1d29 parp:0xd9f6 size:0x0002 C-string:'XCRS'
//            YCRS  codep:0x1d29 parp:0xd9fa size:0x0002 C-string:'YCRS'
//       NAV-SKILL  codep:0x1d29 parp:0xd9fe size:0x0002 C-string:'NAV_dash_SKILL'
//      'AUX-CLEAN  codep:0x1d29 parp:0xda02 size:0x0002 C-string:'_i_AUX_dash_CLEAN'
// ?HAS-RING-DEVICE  codep:0x1d29 parp:0xda06 size:0x0002 C-string:'IsHAS_dash_RING_dash_DEVICE'
//          ESPEED  codep:0x1d29 parp:0xda0a size:0x0002 C-string:'ESPEED'
//             ?HW  codep:0x1d29 parp:0xda0e size:0x0002 C-string:'IsHW'
//           WDA12  codep:0x1d29 parp:0xda12 size:0x0002 C-string:'WDA12'
//           WDA16  codep:0x1d29 parp:0xda16 size:0x0002 C-string:'WDA16'
//            %ACC  codep:0x744d parp:0xda1a size:0x0003 C-string:'_pe_ACC'
//        %HEADING  codep:0x744d parp:0xda1f size:0x0003 C-string:'_pe_HEADING'
//         %ENGINE  codep:0x744d parp:0xda24 size:0x0003 C-string:'_pe_ENGINE'
//         %ACLASS  codep:0x744d parp:0xda29 size:0x0003 C-string:'_pe_ACLASS'
//            SCNT  codep:0x744d parp:0xda2e size:0x0003 C-string:'SCNT'
//         %SCLASS  codep:0x744d parp:0xda33 size:0x0003 C-string:'_pe_SCLASS'
//            ACNT  codep:0x744d parp:0xda38 size:0x0003 C-string:'ACNT'
//           WDA3D  codep:0x744d parp:0xda3d size:0x0003 C-string:'WDA3D'
//           WDA42  codep:0x744d parp:0xda42 size:0x0003 C-string:'WDA42'
//          DEST-X  codep:0x744d parp:0xda47 size:0x0003 C-string:'DEST_dash_X'
//          DEST-Y  codep:0x744d parp:0xda4c size:0x0003 C-string:'DEST_dash_Y'
//    ?HOME-PLANET  codep:0x744d parp:0xda51 size:0x0003 C-string:'IsHOME_dash_PLANET'
//           WDA56  codep:0x744d parp:0xda56 size:0x0003 C-string:'WDA56'
//      ORBIT-MASK  codep:0x744d parp:0xda5b size:0x0003 C-string:'ORBIT_dash_MASK'
//       FLAREDATE  codep:0x744d parp:0xda60 size:0x0003 C-string:'FLAREDATE'
//           WDA65  codep:0x73ea parp:0xda65 size:0x0006 C-string:'WDA65'
//             BET  codep:0x744d parp:0xda6d size:0x0003 C-string:'BET'
//         @COORDS  codep:0x224c parp:0xda72 size:0x0008 C-string:'GetCOORDS'
//         !COORDS  codep:0x224c parp:0xda7c size:0x0008 C-string:'StoreCOORDS'
//         !XYTRNS  codep:0x224c parp:0xda86 size:0x000a C-string:'StoreXYTRNS'
//          @XYABS  codep:0x224c parp:0xda92 size:0x000a C-string:'GetXYABS'
//          @XYSHP  codep:0x224c parp:0xda9e size:0x0008 C-string:'GetXYSHP'
//           CTXT#  codep:0x224c parp:0xdaa8 size:0x0006 C-string:'CTXT_n_'
//          !XYSHP  codep:0x224c parp:0xdab0 size:0x0008 C-string:'StoreXYSHP'
//       !%HEADING  codep:0x224c parp:0xdaba size:0x000a C-string:'Store_pe_HEADING'
//         ?XIDENC  codep:0x224c parp:0xdac6 size:0x0008 C-string:'IsXIDENC'
//          0XYCRS  codep:0x224c parp:0xdad0 size:0x000c C-string:'_0XYCRS'
//         ?PLANET  codep:0x224c parp:0xdade size:0x000a C-string:'IsPLANET'
//        ?*ORPLAN  codep:0x224c parp:0xdaea size:0x000e C-string:'Is_star_ORPLAN'
//          ?HYPER  codep:0x224c parp:0xdafa size:0x0008 C-string:'IsHYPER'
//        ORBSETUP  codep:0x224c parp:0xdb04 size:0x002c C-string:'ORBSETUP'
//           WDB32  codep:0x224c parp:0xdb32 size:0x002c C-string:'WDB32'
//           WDB60  codep:0x224c parp:0xdb60 size:0x0010 C-string:'WDB60'
//        .AUXSHIP  codep:0x224c parp:0xdb72 size:0x005e C-string:'DrawAUXSHIP'
//       MAX#SHIPS  codep:0x744d parp:0xdbd2 size:0x0003 C-string:'MAX_n_SHIPS'
// #SHIPS-DESTROYED  codep:0x744d parp:0xdbd7 size:0x0003 C-string:'_n_SHIPS_dash_DESTROYED'
//        BASE-EDL  codep:0x744d parp:0xdbdc size:0x0003 C-string:'BASE_dash_EDL'
//             NAV  codep:0x744d parp:0xdbe1 size:0x0003 C-string:'NAV'
//            ^NAV  codep:0x744d parp:0xdbe6 size:0x0003 C-string:'_h_NAV'
//           WDBEB  codep:0x224c parp:0xdbeb size:0x002c C-string:'WDBEB'
//           WDC19  codep:0x224c parp:0xdc19 size:0x002a C-string:'WDC19'
//        CHARGE-D  codep:0x224c parp:0xdc45 size:0x0034 C-string:'CHARGE_dash_D'
//            PS>C  codep:0x4a4f parp:0xdc82 size:0x0018 C-string:'PS_gt_C'
//      >CONS-DISP  codep:0x224c parp:0xdc9c size:0x0028 C-string:'_gt_CONS_dash_DISP'
//      ENCCLEANUP  codep:0x224c parp:0xdcc6 size:0x00a2 C-string:'ENCCLEANUP'
//        ENCSETUP  codep:0x224c parp:0xdd6a size:0x0058 C-string:'ENCSETUP'
//        PRTSETUP  codep:0x224c parp:0xddc4 size:0x0014 C-string:'PRTSETUP'
//      PRTCLEANUP  codep:0x224c parp:0xddda size:0x0016 C-string:'PRTCLEANUP'
//       MAKE-STAR  codep:0x224c parp:0xddf2 size:0x001e C-string:'MAKE_dash_STAR'
//       KILL-STAR  codep:0x224c parp:0xde12 size:0x0016 C-string:'KILL_dash_STAR'
//      PREV-ORBIT  codep:0x1d29 parp:0xde2a size:0x0002 C-string:'PREV_dash_ORBIT'
//          ORBITs  codep:0x1d29 parp:0xde2e size:0x0002 C-string:'ORBITs'
//      GET-ORBIT#  codep:0x224c parp:0xde32 size:0x002a C-string:'GET_dash_ORBIT_n_'
//        (>ORBIT)  codep:0x224c parp:0xde5e size:0x004c C-string:'_ro__gt_ORBIT_rc_'
//          ORBIT>  codep:0x224c parp:0xdeac size:0x0028 C-string:'ORBIT_gt_'
//         >ORBITS  codep:0x224c parp:0xded6 size:0x001e C-string:'_gt_ORBITS'
//         ?-ORBIT  codep:0x224c parp:0xdef6 size:0x001e C-string:'Is_dash_ORBIT'
//           WDF16  codep:0x224c parp:0xdf16 size:0x001e C-string:'WDF16'
//           WDF36  codep:0x224c parp:0xdf36 size:0x0008 C-string:'WDF36'
//        SETRNDXY  codep:0x224c parp:0xdf40 size:0x001c C-string:'SETRNDXY'
//           WDF5E  codep:0x224c parp:0xdf5e size:0x0050 C-string:'WDF5E'
//         OCOORDS  codep:0x224c parp:0xdfb0 size:0x0016 C-string:'OCOORDS'
//             >XY  codep:0x4a4f parp:0xdfce size:0x000c C-string:'_gt_XY'
//        SETPLNXY  codep:0x224c parp:0xdfdc size:0x001c C-string:'SETPLNXY'
//            SC>C  codep:0x4a4f parp:0xe001 size:0x001c C-string:'SC_gt_C'
//            .SUN  codep:0x224c parp:0xe01f size:0x0012 C-string:'DrawSUN'
//         .PLANET  codep:0x224c parp:0xe033 size:0x0064 C-string:'DrawPLANET'
//         .AUXSYS  codep:0x224c parp:0xe0a3 size:0x0062 C-string:'DrawAUXSYS'
//        SYSSETUP  codep:0x224c parp:0xe107 size:0x0022 C-string:'SYSSETUP'
//      SYSCLEANUP  codep:0x224c parp:0xe12b size:0x0028 C-string:'SYSCLEANUP'
//          RNDCPT  codep:0x224c parp:0xe155 size:0x004a C-string:'RNDCPT'
//   ?CAN-NAVIGATE  codep:0x224c parp:0xe1a1 size:0x000c C-string:'IsCAN_dash_NAVIGATE'
//      >[CONTEXT]  codep:0x224c parp:0xe1af size:0x001a C-string:'_gt__bo_CONTEXT_bc_'
//           CTX>C  codep:0x224c parp:0xe1cb size:0x0006 C-string:'CTX_gt_C'
//      ![CONTEXT]  codep:0x224c parp:0xe1d3 size:0x000a C-string:'Store_bo_CONTEXT_bc_'
//           RADII  codep:0x4a4f parp:0xe1e7 size:0x0014 C-string:'RADII'
//            IVAR  codep:0x4a4f parp:0xe204 size:0x0014 C-string:'IVAR'
//         #CPARMS  codep:0x224c parp:0xe21a size:0x001e C-string:'_n_CPARMS'
//         !CPARMS  codep:0x224c parp:0xe23a size:0x0016 C-string:'StoreCPARMS'
//           WE252  codep:0x224c parp:0xe252 size:0x0004 C-string:'WE252'
//           WE258  codep:0x224c parp:0xe258 size:0x0008 C-string:'WE258'
//           WE262  codep:0x224c parp:0xe262 size:0x0018 C-string:'WE262'
//          XYCASE  codep:0x4a4f parp:0xe285 size:0x000c C-string:'XYCASE'
//    .COORDINATES  codep:0x224c parp:0xe293 size:0x0066 C-string:'DrawCOORDINATES'
//            XBND  codep:0x2214 parp:0xe2fb size:0x0002 C-string:'XBND'
//            YBND  codep:0x2214 parp:0xe2ff size:0x0002 C-string:'YBND'
//            XLIM  codep:0x2214 parp:0xe303 size:0x0002 C-string:'XLIM'
//            YLIM  codep:0x2214 parp:0xe307 size:0x0002 C-string:'YLIM'
//           SDUST  codep:0x1d29 parp:0xe30b size:0x0018 C-string:'SDUST'
//           >DUST  codep:0x224c parp:0xe325 size:0x002a C-string:'_gt_DUST'
//           ?DUST  codep:0x224c parp:0xe351 size:0x0022 C-string:'IsDUST'
//         (.DUST)  codep:0x224c parp:0xe375 size:0x0052 C-string:'_ro__dot_DUST_rc_'
//           .DUST  codep:0x224c parp:0xe3c9 size:0x0024 C-string:'DrawDUST'
//            .MVS  codep:0x224c parp:0xe3f6 size:0x004a C-string:'DrawMVS'
//      .FLUX-ICON  codep:0x224c parp:0xe442 size:0x0076 C-string:'DrawFLUX_dash_ICON'
//       ?CHANGEXY  codep:0x224c parp:0xe4ba size:0x003e C-string:'IsCHANGEXY'
//    (?NEWHEADXY)  codep:0x224c parp:0xe4fa size:0x0064 C-string:'_ro__ask_NEWHEADXY_rc_'
//      >NEWHEADXY  codep:0x224c parp:0xe560 size:0x000e C-string:'_gt_NEWHEADXY'
//          #SLOPE  codep:0x224c parp:0xe570 size:0x001c C-string:'_n_SLOPE'
//          #RELXY  codep:0x224c parp:0xe58e size:0x000e C-string:'_n_RELXY'
//           #QUAD  codep:0x224c parp:0xe59e size:0x004e C-string:'_n_QUAD'
//        #HEADING  codep:0x224c parp:0xe5ee size:0x006e C-string:'_n_HEADING'
//        HEADDXDY  codep:0x1d29 parp:0xe65e size:0x0010 C-string:'HEADDXDY'
//       #HEADDXDY  codep:0x224c parp:0xe670 size:0x0012 C-string:'_n_HEADDXDY'
//         #NEXTXY  codep:0x224c parp:0xe684 size:0x001a C-string:'_n_NEXTXY'
//         #VECTXY  codep:0x224c parp:0xe6a0 size:0x001c C-string:'_n_VECTXY'
//           #DIST  codep:0x224c parp:0xe6be size:0x0024 C-string:'_n_DIST'
//          #SPEED  codep:0x224c parp:0xe6e4 size:0x0012 C-string:'_n_SPEED'
//      #NEWHEADXY  codep:0x224c parp:0xe6f8 size:0x002e C-string:'_n_NEWHEADXY'
//         DWITHIN  codep:0x224c parp:0xe728 size:0x0018 C-string:'DWITHIN'
//     (-ENDURIUM)  codep:0x224c parp:0xe742 size:0x00a8 C-string:'_ro__dash_ENDURIUM_rc_'
//       -ENDURIUM  codep:0x224c parp:0xe7ec size:0x0012 C-string:'_dash_ENDURIUM'
//           USE-E  codep:0x224c parp:0xe808 size:0x0054 C-string:'USE_dash_E'
//         ?IN-NEB  codep:0x224c parp:0xe85e size:0x0092 C-string:'IsIN_dash_NEB'
//      #VES-SPEED  codep:0x224c parp:0xe8f2 size:0x0012 C-string:'_n_VES_dash_SPEED'
//          TWELVE  codep:0x2214 parp:0xe906 size:0x0002 C-string:'TWELVE'
//          CSPEED  codep:0x4a4f parp:0xe913 size:0x000c C-string:'CSPEED'
//            #ACC  codep:0x1d29 parp:0xe921 size:0x0002 C-string:'_n_ACC'
//          KEYINC  codep:0x1d29 parp:0xe925 size:0x0002 C-string:'KEYINC'
//       !MAXSPEED  codep:0x224c parp:0xe929 size:0x0014 C-string:'StoreMAXSPEED'
//            !S/A  codep:0x224c parp:0xe93f size:0x001e C-string:'StoreS_slash_A'
//      ACCELERATE  codep:0x224c parp:0xe95f size:0x003a C-string:'ACCELERATE'
//      NEST-SETUP  codep:0x4a4f parp:0xe9a5 size:0x0014 C-string:'NEST_dash_SETUP'
//    NEST-SPACEXY  codep:0x224c parp:0xe9bb size:0x002c C-string:'NEST_dash_SPACEXY'
//            NEST  codep:0x224c parp:0xe9f0 size:0x0068 C-string:'NEST'
//      >ENCOUNTER  codep:0x224c parp:0xea5a size:0x0024 C-string:'_gt_ENCOUNTER'
//       ?BOX-NEST  codep:0x224c parp:0xea80 size:0x0022 C-string:'IsBOX_dash_NEST'
//  SET-FLUX-STATE  codep:0x224c parp:0xeaa4 size:0x0034 C-string:'SET_dash_FLUX_dash_STATE'
//          JMPSHP  codep:0x224c parp:0xeae3 size:0x0038 C-string:'JMPSHP'
//      >FLUX-NODE  codep:0x224c parp:0xeb1d size:0x002a C-string:'_gt_FLUX_dash_NODE'
//         COLLIDE  codep:0x4a4f parp:0xeb53 size:0x0018 C-string:'COLLIDE'
//          ?-*BOX  codep:0x224c parp:0xeb6d size:0x0010 C-string:'Is_dash__star_BOX'
//             ?~C  codep:0x4a4f parp:0xeb85 size:0x0010 C-string:'Is_t_C'
//      ?COLLISION  codep:0x224c parp:0xeb97 size:0x00a0 C-string:'IsCOLLISION'
//           WEC39  codep:0x224c parp:0xec39 size:0x0022 C-string:'WEC39'
//      ?2NEST.ETC  codep:0x224c parp:0xec5d size:0x004a C-string:'Is2NEST_dot_ETC'
//       ?STARPORT  codep:0x224c parp:0xeca9 size:0x007d C-string:'IsSTARPORT'
//    UNNEST-CLEAN  codep:0x4a4f parp:0xed32 size:0x0014 C-string:'UNNEST_dash_CLEAN'
//  UNNEST-SPACEXY  codep:0x224c parp:0xed48 size:0x0022 C-string:'UNNEST_dash_SPACEXY'
//         ?UNNEST  codep:0x224c parp:0xed6c size:0x0054 C-string:'IsUNNEST'
//  ?DOUBLE-UNNEST  codep:0x224c parp:0xedc2 size:0x0016 C-string:'IsDOUBLE_dash_UNNEST'
//          UNNEST  codep:0x224c parp:0xede3 size:0x006e C-string:'UNNEST'
//           WEE53  codep:0x224c parp:0xee53 size:0x0028 C-string:'WEE53'
//        (GET-AUX  codep:0x224c parp:0xee87 size:0x0012 C-string:'_ro_GET_dash_AUX'
//           WEE9B  codep:0x224c parp:0xee9b size:0x0026 C-string:'WEE9B'
//             FLY  codep:0x224c parp:0xeec9 size:0x0046 C-string:'FLY'
//           WEF11  codep:0x224c parp:0xef11 size:0x001a C-string:'WEF11'
// SET-DESTINATION  codep:0x224c parp:0xef37 size:0x00c0 C-string:'SET_dash_DESTINATION'
//       SETUP-MOV  codep:0x224c parp:0xf003 size:0x009c C-string:'SETUP_dash_MOV'
//     CLEANUP-MOV  codep:0x224c parp:0xf0ab size:0x006e C-string:'CLEANUP_dash_MOV'
//         CHK-MOV  codep:0x224c parp:0xf125 size:0x008e C-string:'CHK_dash_MOV'
//           WF1B5  codep:0x224c parp:0xf1b5 size:0x002f C-string:'WF1B5'
//           +NEST  codep:0x224c parp:0xf1ee size:0x000a C-string:'_plus_NEST'
//     COME-HITHER  codep:0x224c parp:0xf204 size:0x0000 C-string:'COME_dash_HITHER'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCALE; // *MAPSCALE
extern const unsigned short int pp_TCLR; // TCLR
extern const unsigned short int pp_IsAUTO; // ?AUTO
extern const unsigned short int pp__ro_FLARE_rc_; // (FLARE)
extern const unsigned short int pp_AVCNT; // AVCNT
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_CXSP; // CXSP
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp__h_VES; // ^VES
extern const unsigned short int pp_DBUF_dash_SEG; // DBUF-SEG
extern const unsigned short int pp_IsWIN; // ?WIN
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_LOCRADIUS; // LOCRADIUS
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_IsFUEL_dash_DIE; // ?FUEL-DIE
extern const unsigned short int pp_IsG_dash_AWARE; // ?G-AWARE
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp_IGLOBAL; // IGLOBAL
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_FORCEPTASK; // FORCEPTASK
extern const unsigned short int pp_IsPORT; // ?PORT
extern const unsigned short int pp_SKIP2NEST; // SKIP2NEST
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp_FORCEKEY; // FORCEKEY
extern const unsigned short int pp_SKEY; // SKEY
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_HEADING; // HEADING
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_TIME_dash_PASSING; // TIME-PASSING
extern const unsigned short int pp__i__dot_VEHICLE_dash_STATUS; // '.VEHICLE-STATUS
extern const unsigned short int pp__i_VEHICLE_dash_CYCLE; // 'VEHICLE-CYCLE
extern const unsigned short int pp_IsSUP; // ?SUP
extern const unsigned short int pp_VSTIME; // VSTIME
extern const unsigned short int pp__10_star_CARGO; // 10*CARGO
extern const unsigned short int pp_SENSE_dash_ADDR; // SENSE-ADDR
extern const unsigned short int pp__10_star_END; // 10*END
extern const unsigned short int pp_ENC_dash_TIME; // ENC-TIME
extern const unsigned short int pp_NAV_dash_TIME; // NAV-TIME
extern const unsigned short int pp_XWLD_c_XPIX; // XWLD:XPIX
extern const unsigned short int pp_YWLD_c_YPIX; // YWLD:YPIX
extern const unsigned short int pp_ANCHOR_dash_CONTOUR; // ANCHOR-CONTOUR
extern const unsigned short int pp__ro_SYSTEM_rc_; // (SYSTEM)
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET_rc_; // (PLANET)
extern const unsigned short int pp__ro_ENCOUNTER_rc_; // (ENCOUNTER)
extern const unsigned short int pp__ro_SHIPBOX_rc_; // (SHIPBOX)
extern const unsigned short int pp__ro_AORIGINATOR; // (AORIGINATOR
extern const unsigned short int pp_YTABLE; // YTABLE
extern const unsigned short int pp_IsCALLING; // ?CALLING
extern LoadDataType _1BTN; // 1BTN
extern Color BLACK; // BLACK
extern Color DK_dash_GREEN; // DK-GREEN
extern Color GREEN; // GREEN
extern Color RED; // RED
extern Color VIOLET; // VIOLET
extern Color BROWN; // BROWN
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color ORANGE; // ORANGE
extern Color YELLOW; // YELLOW
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QTY; // INST-QTY
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void Draw(); // .
void DrawR(); // .R
void NOP(); // NOP
void PICK(); // PICK
void ROLL(); // ROLL
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_eq_(); // D=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void DMIN(); // DMIN
void DMAX(); // DMAX
void BIT(); // BIT
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _1_dot_5_ex_(); // 1.5!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void StoreINST_dash_SPECIES(); // !INST-SPECIES
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void CI_i_(); // CI'
void IsNULL(); // ?NULL
void Is_dash_NULL(); // ?-NULL
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
void IFIRST(); // IFIRST
void IINSERT(); // IINSERT
void _st_INSERT(); // <INSERT
void IEXTRACT(); // IEXTRACT
void IFIND(); // IFIND
void MAKE1ST(); // MAKE1ST
void IDELETE(); // IDELETE
void EACH(); // EACH
void ICREATE(); // ICREATE
void _star_CREATE(); // *CREATE
void SAVE_dash_OVERLAY(); // SAVE-OVERLAY
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void BLT(); // BLT
void DrawELLIPSE(); // .ELLIPSE
void FILLELLIP(); // FILLELLIP
void FILLCIRC(); // FILLCIRC
void StoreVISWINDOW(); // !VISWINDOW
void _gt_1ICONFONT(); // >1ICONFONT
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIC(); // @IC
void GetIL(); // @IL
void GetIH(); // @IH
void StoreIX(); // !IX
void StoreIY(); // !IY
void StoreID(); // !ID
void StoreIC(); // !IC
void POINT_gt_ICON(); // POINT>ICON
void DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
void IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
void IsICONS_dash_AT(); // ?ICONS-AT
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void _gt_SND(); // >SND
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
void _i_KEY(); // 'KEY
void CURSORSPACE(); // CURSORSPACE
void CFIGARRAYS(); // CFIGARRAYS
void ORGIADDR(); // ORGIADDR
void ORBUP(); // ORBUP
void CONTEXT_dash_CASES(); // CONTEXT-CASES
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void U_st_(); // U<
void TIME(); // TIME
void LC_at_(); // LC@
void GetEXECUTE(); // @EXECUTE
void _1_dot_5_at_(); // 1.5@
void _plus__dash__at_(); // +-@
void CI(); // CI
void _gt_V(); // >V
void V_gt_(); // V>
void BFILL(); // BFILL
void LPLOT(); // LPLOT
void LXPLOT(); // LXPLOT
void V_gt_DISPLAY(); // V>DISPLAY
void WLD_gt_SCR(); // WLD>SCR
void _ro_XYSCAN_rc_(); // (XYSCAN)


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp__ro_RADIUS_rc_ = 0xd9dc; // (RADIUS) size: 2
// {0x00, 0x00}

const unsigned short int pp__bo_CONTEXT_bc_ = 0xd9e0; // [CONTEXT] size: 2
// {0x8c, 0x63}

const unsigned short int pp_WD9E4 = 0xd9e4; // WD9E4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD9E8 = 0xd9e8; // WD9E8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WD9EC = 0xd9ec; // WD9EC size: 2
// {0x00, 0x00}

const unsigned short int pp__ro_COLLIDE_rc_ = 0xd9f0; // (COLLIDE) size: 4
// {0x00, 0x00, 0x00, 0x62}

const unsigned short int pp_XCRS = 0xd9f6; // XCRS size: 2
// {0xff, 0xff}

const unsigned short int pp_YCRS = 0xd9fa; // YCRS size: 2
// {0x00, 0x00}

const unsigned short int pp_NAV_dash_SKILL = 0xd9fe; // NAV-SKILL size: 2
// {0x3a, 0x20}

const unsigned short int pp__i_AUX_dash_CLEAN = 0xda02; // 'AUX-CLEAN size: 2
// {0xa3, 0xe0}

const unsigned short int pp_IsHAS_dash_RING_dash_DEVICE = 0xda06; // ?HAS-RING-DEVICE size: 2
// {0x3a, 0x20}

const unsigned short int pp_ESPEED = 0xda0a; // ESPEED size: 2
// {0x02, 0x00}

const unsigned short int pp_IsHW = 0xda0e; // ?HW size: 2
// {0x00, 0x00}

const unsigned short int pp_WDA12 = 0xda12; // WDA12 size: 2
// {0x00, 0x00}

const unsigned short int pp_WDA16 = 0xda16; // WDA16 size: 2
// {0x3a, 0x20}

const unsigned short int pp_PREV_dash_ORBIT = 0xde2a; // PREV-ORBIT size: 2
// {0x07, 0x00}

const unsigned short int pp_ORBITs = 0xde2e; // ORBITs size: 2
// {0x75, 0x00}

const unsigned short int pp_SDUST = 0xe30b; // SDUST size: 24
// {0x07, 0xc6, 0x7c, 0xa9, 0xaa, 0xbf, 0x2b, 0x18, 0x2d, 0x0a, 0x13, 0x4b, 0x13, 0x1a, 0xd8, 0x56, 0x21, 0xa4, 0x5f, 0x8d, 0x59, 0x9d, 0xca, 0x85}

const unsigned short int pp_HEADDXDY = 0xe65e; // HEADDXDY size: 16
// {0x01, 0x00, 0x01, 0x01, 0x00, 0x01, 0xff, 0x01, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x01, 0xff}

const unsigned short int pp__n_ACC = 0xe921; // #ACC size: 2
// {0x00, 0x00}

const unsigned short int pp_KEYINC = 0xe925; // KEYINC size: 2
// {0x00, 0x00}


const unsigned short int cc_RCOLLIDE = 0xd9b0; // RCOLLIDE
const unsigned short int cc_PRTRADIUS = 0xd9b4; // PRTRADIUS
const unsigned short int cc_DEFRADIUS = 0xd9b8; // DEFRADIUS
const unsigned short int cc_ORBRADIUS = 0xd9bc; // ORBRADIUS
const unsigned short int cc_ENCRADIUS = 0xd9c0; // ENCRADIUS
const unsigned short int cc_SYSRADIUS = 0xd9c4; // SYSRADIUS
const unsigned short int cc_VISLENGTH = 0xd9c8; // VISLENGTH
const unsigned short int cc_VISWIDTH = 0xd9cc; // VISWIDTH
const unsigned short int cc_BVISOFF = 0xd9d0; // BVISOFF
const unsigned short int cc_LVISOFF = 0xd9d4; // LVISOFF
const unsigned short int cc_MAXSPEED = 0xd9d8; // MAXSPEED
const unsigned short int cc_XBND = 0xe2fb; // XBND
const unsigned short int cc_YBND = 0xe2ff; // YBND
const unsigned short int cc_XLIM = 0xe303; // XLIM
const unsigned short int cc_YLIM = 0xe307; // YLIM
const unsigned short int cc_TWELVE = 0xe906; // TWELVE


// 0xd972: db 0x91 0x01 '  '

// ================================================
// 0xd974: WORD 'SET-'EXTERNAL' codep=0x224c parp=0xd976 params=0 returns=0
// ================================================

void SET_dash__i_EXTERNAL() // SET-'EXTERNAL
{
  Push(0xca8c); // '!'EXT'
  MODULE(); // MODULE
}


// ================================================
// 0xd97e: WORD 'SHP>C' codep=0x224c parp=0xd980 params=0 returns=0
// ================================================

void SHP_gt_C() // SHP>C
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xd986: WORD 'PLN>C' codep=0x224c parp=0xd988 params=0 returns=0
// ================================================

void PLN_gt_C() // PLN>C
{
  Push(pp__ro_PLANET_rc_); // (PLANET)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd98e: WORD 'ORB>C' codep=0x224c parp=0xd990 params=0 returns=0
// ================================================

void ORB_gt_C() // ORB>C
{
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd996: WORD 'SYS>C' codep=0x224c parp=0xd998 params=0 returns=0
// ================================================

void SYS_gt_C() // SYS>C
{
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd99e: WORD 'ENC>C' codep=0x224c parp=0xd9a0 params=0 returns=0
// ================================================

void ENC_gt_C() // ENC>C
{
  Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xd9a6: WORD '2ICLOSE' codep=0x224c parp=0xd9a8 params=0 returns=0
// ================================================

void _2ICLOSE() // 2ICLOSE
{
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xd9ae: WORD 'RCOLLIDE' codep=0x2214 parp=0xd9b0
// ================================================
// 0xd9b0: dw 0x0003

// ================================================
// 0xd9b2: WORD 'PRTRADIUS' codep=0x2214 parp=0xd9b4
// ================================================
// 0xd9b4: dw 0x0000

// ================================================
// 0xd9b6: WORD 'DEFRADIUS' codep=0x2214 parp=0xd9b8
// ================================================
// 0xd9b8: dw 0x004b

// ================================================
// 0xd9ba: WORD 'ORBRADIUS' codep=0x2214 parp=0xd9bc
// ================================================
// 0xd9bc: dw 0x0000

// ================================================
// 0xd9be: WORD 'ENCRADIUS' codep=0x2214 parp=0xd9c0
// ================================================
// 0xd9c0: dw 0x0016

// ================================================
// 0xd9c2: WORD 'SYSRADIUS' codep=0x2214 parp=0xd9c4
// ================================================
// 0xd9c4: dw 0x0190

// ================================================
// 0xd9c6: WORD 'VISLENGTH' codep=0x2214 parp=0xd9c8
// ================================================
// 0xd9c8: dw 0x0040

// ================================================
// 0xd9ca: WORD 'VISWIDTH' codep=0x2214 parp=0xd9cc
// ================================================
// 0xd9cc: dw 0x003e

// ================================================
// 0xd9ce: WORD 'BVISOFF' codep=0x2214 parp=0xd9d0
// ================================================
// 0xd9d0: dw 0x0009

// ================================================
// 0xd9d2: WORD 'LVISOFF' codep=0x2214 parp=0xd9d4
// ================================================
// 0xd9d4: dw 0x0008

// ================================================
// 0xd9d6: WORD 'MAXSPEED' codep=0x2214 parp=0xd9d8
// ================================================
// 0xd9d8: dw 0x000c

// ================================================
// 0xd9da: WORD '(RADIUS)' codep=0x1d29 parp=0xd9dc
// ================================================
// 0xd9dc: db 0x00 0x00 '  '

// ================================================
// 0xd9de: WORD '[CONTEXT]' codep=0x1d29 parp=0xd9e0
// ================================================
// 0xd9e0: db 0x8c 0x63 ' c'

// ================================================
// 0xd9e2: WORD 'WD9E4' codep=0x1d29 parp=0xd9e4
// ================================================
// 0xd9e4: db 0x3a 0x20 ': '

// ================================================
// 0xd9e6: WORD 'WD9E8' codep=0x1d29 parp=0xd9e8
// ================================================
// 0xd9e8: db 0x3a 0x20 ': '

// ================================================
// 0xd9ea: WORD 'WD9EC' codep=0x1d29 parp=0xd9ec
// ================================================
// 0xd9ec: db 0x00 0x00 '  '

// ================================================
// 0xd9ee: WORD '(COLLIDE)' codep=0x1d29 parp=0xd9f0
// ================================================
// 0xd9f0: db 0x00 0x00 0x00 0x62 '   b'

// ================================================
// 0xd9f4: WORD 'XCRS' codep=0x1d29 parp=0xd9f6
// ================================================
// 0xd9f6: db 0xff 0xff '  '

// ================================================
// 0xd9f8: WORD 'YCRS' codep=0x1d29 parp=0xd9fa
// ================================================
// 0xd9fa: db 0x00 0x00 '  '

// ================================================
// 0xd9fc: WORD 'NAV-SKILL' codep=0x1d29 parp=0xd9fe
// ================================================
// 0xd9fe: db 0x3a 0x20 ': '

// ================================================
// 0xda00: WORD ''AUX-CLEAN' codep=0x1d29 parp=0xda02
// ================================================
// 0xda02: db 0xa3 0xe0 '  '

// ================================================
// 0xda04: WORD '?HAS-RING-DEVICE' codep=0x1d29 parp=0xda06
// ================================================
// 0xda06: db 0x3a 0x20 ': '

// ================================================
// 0xda08: WORD 'ESPEED' codep=0x1d29 parp=0xda0a
// ================================================
// 0xda0a: db 0x02 0x00 '  '

// ================================================
// 0xda0c: WORD '?HW' codep=0x1d29 parp=0xda0e
// ================================================
// 0xda0e: db 0x00 0x00 '  '

// ================================================
// 0xda10: WORD 'WDA12' codep=0x1d29 parp=0xda12
// ================================================
// 0xda12: db 0x00 0x00 '  '

// ================================================
// 0xda14: WORD 'WDA16' codep=0x1d29 parp=0xda16
// ================================================
// orphan
// 0xda16: db 0x3a 0x20 ': '

// ================================================
// 0xda18: WORD '%ACC' codep=0x744d parp=0xda1a
// ================================================
IFieldType _pe_ACC = {SHIPIDX, 0x25, 0x02};

// ================================================
// 0xda1d: WORD '%HEADING' codep=0x744d parp=0xda1f
// ================================================
IFieldType _pe_HEADING = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xda22: WORD '%ENGINE' codep=0x744d parp=0xda24
// ================================================
IFieldType _pe_ENGINE = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xda27: WORD '%ACLASS' codep=0x744d parp=0xda29
// ================================================
IFieldType _pe_ACLASS = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xda2c: WORD 'SCNT' codep=0x744d parp=0xda2e
// ================================================
IFieldType SCNT = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xda31: WORD '%SCLASS' codep=0x744d parp=0xda33
// ================================================
IFieldType _pe_SCLASS = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xda36: WORD 'ACNT' codep=0x744d parp=0xda38
// ================================================
IFieldType ACNT = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xda3b: WORD 'WDA3D' codep=0x744d parp=0xda3d
// ================================================
IFieldType WDA3D = {SHIPIDX, 0x43, 0x02};

// ================================================
// 0xda40: WORD 'WDA42' codep=0x744d parp=0xda42
// ================================================
IFieldType WDA42 = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xda45: WORD 'DEST-X' codep=0x744d parp=0xda47
// ================================================
IFieldType DEST_dash_X = {FLUX_NODEIDX, 0x0b, 0x02};

// ================================================
// 0xda4a: WORD 'DEST-Y' codep=0x744d parp=0xda4c
// ================================================
IFieldType DEST_dash_Y = {FLUX_NODEIDX, 0x11, 0x02};

// ================================================
// 0xda4f: WORD '?HOME-PLANET' codep=0x744d parp=0xda51
// ================================================
IFieldType IsHOME_dash_PLANET = {ENCOUNTERIDX, 0x0b, 0x01};

// ================================================
// 0xda54: WORD 'WDA56' codep=0x744d parp=0xda56
// ================================================
IFieldType WDA56 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xda59: WORD 'ORBIT-MASK' codep=0x744d parp=0xda5b
// ================================================
IFieldType ORBIT_dash_MASK = {STARSYSTEMIDX, 0x11, 0x01};

// ================================================
// 0xda5e: WORD 'FLAREDATE' codep=0x744d parp=0xda60
// ================================================
IFieldType FLAREDATE = {STARSYSTEMIDX, 0x0b, 0x02};

// ================================================
// 0xda63: WORD 'WDA65' codep=0x73ea parp=0xda65
// ================================================
LoadDataType WDA65 = {PLANETIDX, 0x01, 0x01, 0x16, 0x658f};

// ================================================
// 0xda6b: WORD 'BET' codep=0x744d parp=0xda6d
// ================================================
// orphan
IFieldType BET = {ORIGINATORIDX, 0x14, 0x01};

// ================================================
// 0xda70: WORD '@COORDS' codep=0x224c parp=0xda72 params=0 returns=2
// ================================================

void GetCOORDS() // @COORDS
{
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  _2_at_(); // 2@
  SWAP(); // SWAP
}


// ================================================
// 0xda7a: WORD '!COORDS' codep=0x224c parp=0xda7c params=2 returns=0
// ================================================

void StoreCOORDS() // !COORDS
{
  SWAP(); // SWAP
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
}


// ================================================
// 0xda84: WORD '!XYTRNS' codep=0x224c parp=0xda86 params=2 returns=0
// ================================================

void StoreXYTRNS() // !XYTRNS
{
  Push(pp_WD9E8); // WD9E8
  Store_3(); // !_3
  Push(pp_WD9E4); // WD9E4
  Store_3(); // !_3
}


// ================================================
// 0xda90: WORD '@XYABS' codep=0x224c parp=0xda92 params=0 returns=2
// ================================================

void GetXYABS() // @XYABS
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
}


// ================================================
// 0xda9c: WORD '@XYSHP' codep=0x224c parp=0xda9e params=0 returns=2
// ================================================

void GetXYSHP() // @XYSHP
{
  SHP_gt_C(); // SHP>C
  GetCOORDS(); // @COORDS
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdaa6: WORD 'CTXT#' codep=0x224c parp=0xdaa8 params=0 returns=1
// ================================================

void CTXT_n_() // CTXT#
{
  Push(Read16(pp_CONTEXT_dash_ID_n_)); // CONTEXT-ID# @
}


// ================================================
// 0xdaae: WORD '!XYSHP' codep=0x224c parp=0xdab0 params=2 returns=0
// ================================================

void StoreXYSHP() // !XYSHP
{
  SHP_gt_C(); // SHP>C
  StoreCOORDS(); // !COORDS
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdab8: WORD '!%HEADING' codep=0x224c parp=0xdaba params=1 returns=0
// ================================================

void Store_pe_HEADING() // !%HEADING
{
  SHP_gt_C(); // SHP>C
  Push(0x63ef+_pe_HEADING.offset); // %HEADING<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdac4: WORD '?XIDENC' codep=0x224c parp=0xdac6 params=0 returns=1
// ================================================

void IsXIDENC() // ?XIDENC
{
  CTXT_n_(); // CTXT#
  Push(Pop()==4?1:0); //  4 =
}


// ================================================
// 0xdace: WORD '0XYCRS' codep=0x224c parp=0xdad0 params=0 returns=0
// ================================================

void _0XYCRS() // 0XYCRS
{
  GetXYABS(); // @XYABS
  Push(pp_YCRS); // YCRS
  Store_3(); // !_3
  Push(pp_XCRS); // XCRS
  Store_3(); // !_3
}


// ================================================
// 0xdadc: WORD '?PLANET' codep=0x224c parp=0xdade params=0 returns=1
// ================================================

void IsPLANET() // ?PLANET
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x0020?1:0); //  0x0020 =
}


// ================================================
// 0xdae8: WORD '?*ORPLAN' codep=0x224c parp=0xdaea params=0 returns=1
// ================================================

void Is_star_ORPLAN() // ?*ORPLAN
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x0018?1:0); //  0x0018 =
  IsPLANET(); // ?PLANET
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xdaf8: WORD '?HYPER' codep=0x224c parp=0xdafa params=0 returns=1
// ================================================

void IsHYPER() // ?HYPER
{
  CTXT_n_(); // CTXT#
  Push(Pop()==3?1:0); //  3 =
}


// ================================================
// 0xdb02: WORD 'ORBSETUP' codep=0x224c parp=0xdb04
// ================================================

void ORBSETUP() // ORBSETUP
{
  Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
  Get_gt_C_plus_S(); // @>C+S
  CI(); // CI
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex_(); // 1.5!
  IOPEN(); // IOPEN
  Push(0x0020);
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
  CI(); // CI
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_ex_(); // 1.5!
  _2ICLOSE(); // 2ICLOSE
  Push(pp_GWF); // GWF
  OFF(); // OFF
  Push(pp_IsG_dash_AWARE); // ?G-AWARE
  OFF(); // OFF
  Push(pp_IsFUEL_dash_DIE); // ?FUEL-DIE
  OFF(); // OFF
}


// ================================================
// 0xdb30: WORD 'WDB32' codep=0x224c parp=0xdb32 params=0 returns=0
// ================================================

void WDB32() // WDB32
{
  Push(pp_IsPORT); // ?PORT
  OFF(); // OFF
  Push(pp_WD9EC); // WD9EC
  OFF(); // OFF
  ORB_gt_C(); // ORB>C
  GetCOORDS(); // @COORDS
  StoreXYTRNS(); // !XYTRNS
  ICLOSE(); // ICLOSE
  Push(0xc885); // 'DEPART'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp__ro_PLANET_rc_); // (PLANET)
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex_(); // 1.5!
  Push(pp_IsHW); // ?HW
  OFF(); // OFF
  Push(pp_WD9EC); // WD9EC
  OFF(); // OFF
}


// ================================================
// 0xdb5e: WORD 'WDB60' codep=0x224c parp=0xdb60 params=1 returns=0
// ================================================
// orphan

void WDB60() // WDB60
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  StoreD(); // D!
  Push(pp_LOCRADIUS); // LOCRADIUS
  Store_3(); // !_3
}


// ================================================
// 0xdb70: WORD '.AUXSHIP' codep=0x224c parp=0xdb72 params=0 returns=0
// ================================================

void DrawAUXSHIP() // .AUXSHIP
{
  unsigned short int a;
  CTXT_n_(); // CTXT#
  Push(3);
  _st_(); // <
  Push(Pop() & (Read16(pp__n_AUX)==5?1:0)); //  #AUX @ 5 = AND
  if (Pop() == 0) return;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp__ro_RADIUS_rc_)); // (RADIUS) @
  a = Pop(); // >R
  Push(Read16(pp_XABS)); // XABS @
  Push(0x0024);
  Push(a); // I
  _star__slash_(); // */
  Push(0xffdb);
  MAX(); // MAX
  Push(0x0024);
  MIN(); // MIN
  Push(Pop() + 0x0078); //  0x0078 +
  Push(Read16(pp_YABS)); // YABS @
  Push(0x0024);
  Push(a); // R>
  _star__slash_(); // */
  Push(0xffdd);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(Pop() + 0x00a1); //  0x00a1 +
  LXPLOT(); // LXPLOT
}


// ================================================
// 0xdbd0: WORD 'MAX#SHIPS' codep=0x744d parp=0xdbd2
// ================================================
IFieldType MAX_n_SHIPS = {ENCOUNTERIDX, 0x13, 0x01};

// ================================================
// 0xdbd5: WORD '#SHIPS-DESTROYED' codep=0x744d parp=0xdbd7
// ================================================
IFieldType _n_SHIPS_dash_DESTROYED = {ENCOUNTERIDX, 0x14, 0x01};

// ================================================
// 0xdbda: WORD 'BASE-EDL' codep=0x744d parp=0xdbdc
// ================================================
IFieldType BASE_dash_EDL = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xdbdf: WORD 'NAV' codep=0x744d parp=0xdbe1
// ================================================
IFieldType NAV = {ASSIGN_CREWIDX, 0x17, 0x03};

// ================================================
// 0xdbe4: WORD '^NAV' codep=0x744d parp=0xdbe6
// ================================================
IFieldType _h_NAV = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xdbe9: WORD 'WDBEB' codep=0x224c parp=0xdbeb params=0 returns=0
// ================================================

void WDBEB() // WDBEB
{
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x0019?1:0); //  0x0019 =
    if (Pop() != 0)
    {
      IDELETE(); // IDELETE
      Push(0);
    } else
    {
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    }
    IsNULL(); // ?NULL
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdc17: WORD 'WDC19' codep=0x224c parp=0xdc19 params=0 returns=0
// ================================================

void WDC19() // WDC19
{
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(4);
  Push(6);
  WITHIN(); // WITHIN
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x000b?1:0); //  0x000b =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(0);
  Push(0x07d0);
  RRND(); // RRND
  Push(0);
  Push(0x06e0);
  RRND(); // RRND
  StoreCOORDS(); // !COORDS
}


// ================================================
// 0xdc43: WORD 'CHARGE-D' codep=0x224c parp=0xdc45 params=0 returns=0
// ================================================

void CHARGE_dash_D() // CHARGE-D
{
  SHP_gt_C(); // SHP>C
  Push(((Read16(0x63ef+_pe_SCLASS.offset)&0xFF) & 7) * 0x01f4); // %SCLASS<IFIELD> C@ 7 AND 0x01f4 *
  Push(0x63ef+SCNT.offset); // SCNT<IFIELD>
  Store_3(); // !_3
  Push(Read16(0x63ef+ACNT.offset)); // ACNT<IFIELD> @
  Push((Read16(0x63ef+_pe_ACLASS.offset)&0xFF) & 7); // %ACLASS<IFIELD> C@ 7 AND
  Push(Read16(regsp)); // DUP
  Push((Pop() + 1) * 0x00fa); //  1+ 0x00fa *
  _star__slash_(); // */
  Push(0x63ef+_pe_ACLASS.offset); // %ACLASS<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdc79: WORD 'PS>C' codep=0x4a4f parp=0xdc82
// ================================================

void PS_gt_C() // PS>C
{
  switch(Pop()) // PS>C
  {
  case 0:
    GetColor(GREY2);
    break;
  case 1:
    GetColor(VIOLET);
    break;
  case 2:
    GetColor(BLUE);
    break;
  case 3:
    GetColor(WHITE);
    break;
  case 4:
    GetColor(ORANGE);
    break;
  default:
    GetColor(BROWN);
    break;

  }
}

// ================================================
// 0xdc9a: WORD '>CONS-DISP' codep=0x224c parp=0xdc9c params=0 returns=0
// ================================================

void _gt_CONS_dash_DISP() // >CONS-DISP
{
  IsXIDENC(); // ?XIDENC
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  _gt_1ICONFONT(); // >1ICONFONT
  Push(8);
  Push(0x0030);
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  StoreD(); // D!
  Push(8);
  Push(0x0020);
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  StoreD(); // D!
  Push(pp_XLLDEST); // XLLDEST
  OFF(); // OFF
  Push(pp_YLLDEST); // YLLDEST
  OFF(); // OFF
}


// ================================================
// 0xdcc4: WORD 'ENCCLEANUP' codep=0x224c parp=0xdcc6 params=0 returns=1
// ================================================

void ENCCLEANUP() // ENCCLEANUP
{
  ENC_gt_C(); // ENC>C
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x0013?1:0); //  0x0013 =
  if (Pop() != 0)
  {
    Push(pp_SKIP2NEST); // SKIP2NEST
    ON_3(); // ON_3
  }
  GetCOORDS(); // @COORDS
  StoreXYTRNS(); // !XYTRNS
  Push(Read16(0x63ef+MAX_n_SHIPS.offset)&0xFF); // MAX#SHIPS<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Pop() - (Read16(0x63ef+_n_SHIPS_dash_DESTROYED.offset)&0xFF)); //  #SHIPS-DESTROYED<IFIELD> C@ -
  _0_gt_(); // 0>
  SWAP(); // SWAP
  Push(Pop()==0x00ff?1:0); //  0x00ff =
  Push(Pop() | Pop()); // OR
  Push(Read16(regsp)); // DUP
  Push(0x63ef+WDA56.offset); // WDA56<IFIELD>
  C_ex_(); // C!
  Push(!Pop() & Read16(pp_WD9EC) | Read16(pp_SKIP2NEST)); //  NOT WD9EC @ AND SKIP2NEST @ OR
  Push(pp_SKIP2NEST); // SKIP2NEST
  Store_3(); // !_3
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(pp_EDL) - (Read16(0x63ef+BASE_dash_EDL.offset)&0xFF)); // EDL @ BASE-EDL<IFIELD> C@ -
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  Push(Pop() * 2 - 1); //  2* 1-
  SWAP(); // SWAP
  ABS(); // ABS
  Push(3);
  _slash_(); // /
  Push(5);
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  Push(Pop() + (Read16(0x63ef+BASE_dash_EDL.offset)&0xFF)); //  BASE-EDL<IFIELD> C@ +
  Push(0x0064);
  MIN(); // MIN
  Push(0);
  MAX(); // MAX
  Push(0x63ef+BASE_dash_EDL.offset); // BASE-EDL<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  WDBEB(); // WDBEB
  WDC19(); // WDC19
  ICLOSE(); // ICLOSE
  Push2Words("NULL");
  Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
  _1_dot_5_ex_(); // 1.5!
  Push(0xc1f3); // '>HAIL'
  MODULE(); // MODULE
  Push2Words("NULL");
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  CHARGE_dash_D(); // CHARGE-D
}


// ================================================
// 0xdd68: WORD 'ENCSETUP' codep=0x224c parp=0xdd6a
// ================================================

void ENCSETUP() // ENCSETUP
{
  Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
  _1_dot_5_ex_(); // 1.5!
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() != 0)
  {
    Push(0x3a48); // 'NOP'
    Push(pp__i_AUX_dash_CLEAN); // 'AUX-CLEAN
    Store_3(); // !_3
  }
  Push(pp_AVCNT); // AVCNT
  OFF(); // OFF
  ENC_gt_C(); // ENC>C
  GetINST_dash_SPECIES(); // @INST-SPECIES
  ORGIADDR(); // ORGIADDR
  _1_dot_5_at_(); // 1.5@
  Push(Read16(0x63ef+IsHOME_dash_PLANET.offset)&0xFF); // ?HOME-PLANET<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(pp_IsHW); // ?HW
  Store_3(); // !_3
  Push(Pop() + 1); //  1+
  Push(pp__n_VESS); // #VESS
  OFF(); // OFF
  Push(pp_IsCALLING); // ?CALLING
  OFF(); // OFF
  Push(0xcac9); // '+A-VESS'
  MODULE(); // MODULE
  Push(pp_IsCALLING); // ?CALLING
  ON_3(); // ON_3
  ICLOSE(); // ICLOSE
  Push(pp__h_VES); // ^VES
  OFF(); // OFF
  Push(0xc195); // 'OVINIT-COMM'
  MODULE(); // MODULE
  Push(0xc938); // 'C&C'
  MODULE(); // MODULE
}


// ================================================
// 0xddc2: WORD 'PRTSETUP' codep=0x224c parp=0xddc4 params=0 returns=0
// ================================================

void PRTSETUP() // PRTSETUP
{
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  OFF(); // OFF
  Push(pp_IsPORT); // ?PORT
  ON_3(); // ON_3
  Push(2);
  Store_pe_HEADING(); // !%HEADING
  Push(2);
  Push(pp_HEADING); // HEADING
  Store_3(); // !_3
}


// ================================================
// 0xddd8: WORD 'PRTCLEANUP' codep=0x224c parp=0xddda params=0 returns=0
// ================================================

void PRTCLEANUP() // PRTCLEANUP
{
  Push(pp_TIME_dash_PASSING); // TIME-PASSING
  ON_3(); // ON_3
  CFIGARRAYS(); // CFIGARRAYS
  Push(2);
  Store_pe_HEADING(); // !%HEADING
  Push(2);
  Push(pp_HEADING); // HEADING
  Store_3(); // !_3
  Push2Words("NULL");
  StoreXYTRNS(); // !XYTRNS
}


// ================================================
// 0xddf0: WORD 'MAKE-STAR' codep=0x224c parp=0xddf2
// ================================================

void MAKE_dash_STAR() // MAKE-STAR
{
  SYS_gt_C(); // SYS>C
  Push(Read16(0x63ef+INST_dash_QTY.offset)); // INST-QTY<IFIELD> @
  Push(0x0018);
  GetINST_dash_SPECIES(); // @INST-SPECIES
  IOPEN(); // IOPEN
  Push(1);
  _star_CREATE(); // *CREATE
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
  Push2Words("NULL");
  StoreCOORDS(); // !COORDS
  _2ICLOSE(); // 2ICLOSE
}


// ================================================
// 0xde10: WORD 'KILL-STAR' codep=0x224c parp=0xde12
// ================================================

void KILL_dash_STAR() // KILL-STAR
{
  SYS_gt_C(); // SYS>C
  IOPEN(); // IOPEN
  Push(0x0018);
  Push(0);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  _2ICLOSE(); // 2ICLOSE
}


// ================================================
// 0xde28: WORD 'PREV-ORBIT' codep=0x1d29 parp=0xde2a
// ================================================
// 0xde2a: db 0x07 0x00 '  '

// ================================================
// 0xde2c: WORD 'ORBITs' codep=0x1d29 parp=0xde2e
// ================================================
// 0xde2e: db 0x75 0x00 'u '

// ================================================
// 0xde30: WORD 'GET-ORBIT#' codep=0x224c parp=0xde32 params=0 returns=1
// ================================================

void GET_dash_ORBIT_n_() // GET-ORBIT#
{
  unsigned short int i, imax;
  Push(9);
  Push(Read16(pp_PREV_dash_ORBIT) + 1); // PREV-ORBIT @ 1+

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    BIT(); // BIT
    Push(Pop() & Read16(pp_ORBITs)); //  ORBITs @ AND
    if (Pop() != 0)
    {
      Push(i); // I
      Push(pp_PREV_dash_ORBIT); // PREV-ORBIT
      Store_3(); // !_3
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_PREV_dash_ORBIT)); // PREV-ORBIT @
}


// ================================================
// 0xde5c: WORD '(>ORBIT)' codep=0x224c parp=0xde5e
// ================================================

void _ro__gt_ORBIT_rc_() // (>ORBIT)
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x0020?1:0); //  0x0020 =
  if (Pop() != 0)
  {
    GET_dash_ORBIT_n_(); // GET-ORBIT#
  } else
  {
    Push(0);
  }
  Push(0x000b);
  Push(4);
  ICREATE(); // ICREATE
  IEXTRACT(); // IEXTRACT
  _2OVER(); // 2OVER
  IINSERT(); // IINSERT
  IsNULL(); // ?NULL
  if (Pop() != 0)
  {
    CI_i_(); // CI'
    IINSERT(); // IINSERT
    IFIRST(); // IFIRST
  } else
  {
    CI(); // CI
    _st_INSERT(); // <INSERT
    IsFIRST(); // ?FIRST
    if (Pop() != 0)
    {
      IPREV(); // IPREV
      MAKE1ST(); // MAKE1ST
    } else
    {
      IPREV(); // IPREV
    }
  }
  Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xdeaa: WORD 'ORBIT>' codep=0x224c parp=0xdeac
// ================================================

void ORBIT_gt_() // ORBIT>
{
  IOPEN(); // IOPEN
  while(1)
  {
    Is_dash_NULL(); // ?-NULL
    if (Pop() == 0) break;

    IEXTRACT(); // IEXTRACT
    CI_i_(); // CI'
    _st_INSERT(); // <INSERT
    ICLOSE(); // ICLOSE
    IsFIRST(); // ?FIRST
    if (Pop() != 0)
    {
      IPREV(); // IPREV
      MAKE1ST(); // MAKE1ST
      INEXT(); // INEXT
    }
    IOPEN(); // IOPEN
  }
  ICLOSE(); // ICLOSE
  IDELETE(); // IDELETE
}


// ================================================
// 0xded4: WORD '>ORBITS' codep=0x224c parp=0xded6
// ================================================

void _gt_ORBITS() // >ORBITS
{
  Push(pp_PREV_dash_ORBIT); // PREV-ORBIT
  OFF(); // OFF
  SYS_gt_C(); // SYS>C
  Push(Read16(0x63ef+ORBIT_dash_MASK.offset)&0xFF); // ORBIT-MASK<IFIELD> C@
  Push(pp_ORBITs); // ORBITs
  Store_3(); // !_3
  IOPEN(); // IOPEN
  Push(0xdaea); // '?*ORPLAN'
  Push(0xde5e); // '(>ORBIT)'
  EACH(); // EACH
  _2ICLOSE(); // 2ICLOSE
}


// ================================================
// 0xdef4: WORD '?-ORBIT' codep=0x224c parp=0xdef6 params=0 returns=0
// ================================================

void Is_dash_ORBIT() // ?-ORBIT
{
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x000b?1:0); //  0x000b =
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==4?1:0); //  4 =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    ORBIT_gt_(); // ORBIT>
    return;
  }
  INEXT(); // INEXT
}


// ================================================
// 0xdf14: WORD 'WDF16' codep=0x224c parp=0xdf16 params=0 returns=0
// ================================================

void WDF16() // WDF16
{
  SYS_gt_C(); // SYS>C
  IOPEN(); // IOPEN
  while(1)
  {
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    Is_dash_ORBIT(); // ?-ORBIT
  }
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    Is_dash_ORBIT(); // ?-ORBIT
  }
  _2ICLOSE(); // 2ICLOSE
}


// ================================================
// 0xdf34: WORD 'WDF36' codep=0x224c parp=0xdf36 params=0 returns=2
// ================================================
// orphan

void WDF36() // WDF36
{
  SYS_gt_C(); // SYS>C
  GetCOORDS(); // @COORDS
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdf3e: WORD 'SETRNDXY' codep=0x224c parp=0xdf40 params=0 returns=0
// ================================================

void SETRNDXY() // SETRNDXY
{
  Push(Read16(cc_SYSRADIUS) - 5); // SYSRADIUS 5 -
  Push(Read16(regsp)); // DUP
  Push(-Pop()); //  NEGATE
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  RRND(); // RRND
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  RRND(); // RRND
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xdf5c: WORD 'WDF5E' codep=0x224c parp=0xdf5e params=0 returns=0
// ================================================

void WDF5E() // WDF5E
{
  unsigned short int a;
  Push(Read16(0x63ef+INST_dash_QTY.offset) * 4 + 2); // INST-QTY<IFIELD> @ 4 * 2+
  a = Pop(); // >R
  Push(-a); // I NEGATE
  Push(a + 1); // I 1+
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Read16(cc_SYSRADIUS)); // SYSRADIUS
  Push(0x0024);
  _star__slash_(); // */
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  Store_3(); // !_3
  Push(a * a); // I R> *
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0);
  SQRT(); // SQRT
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(Pop() * 2 - 1); //  2* 1-
  Push(Pop() * Pop()); // *
  Push(Read16(cc_SYSRADIUS)); // SYSRADIUS
  Push(0x0024);
  _star__slash_(); // */
  Push(0x63ef+INST_dash_Y.offset); // INST-Y<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xdfae: WORD 'OCOORDS' codep=0x224c parp=0xdfb0 params=0 returns=0
// ================================================

void OCOORDS() // OCOORDS
{
  IOPEN(); // IOPEN
  IsPLANET(); // ?PLANET
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    WDF5E(); // WDF5E
    return;
  }
  Push2Words("NULL");
  StoreCOORDS(); // !COORDS
}


// ================================================
// 0xdfc6: WORD '>XY' codep=0x4a4f parp=0xdfce
// ================================================

void _gt_XY() // >XY
{
  switch(Pop()) // >XY
  {
  case 11:
    OCOORDS(); // OCOORDS
    break;
  case 61:
    SETRNDXY(); // SETRNDXY
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xdfda: WORD 'SETPLNXY' codep=0x224c parp=0xdfdc params=0 returns=0
// ================================================

void SETPLNXY() // SETPLNXY
{
  SYS_gt_C(); // SYS>C
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    do
    {
      GetINST_dash_CLASS(); // @INST-CLASS
      _gt_XY(); // >XY case
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
    } while(Pop() == 0);
    ICLOSE(); // ICLOSE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xdff8: WORD 'SC>C' codep=0x4a4f parp=0xe001
// ================================================

void SC_gt_C() // SC>C
{
  switch(Pop()) // SC>C
  {
  case 77:
    GetColor(RED);
    break;
  case 75:
    GetColor(ORANGE);
    break;
  case 71:
    GetColor(YELLOW);
    break;
  case 70:
    GetColor(WHITE);
    break;
  case 65:
    GetColor(GREEN);
    break;
  case 66:
    GetColor(LT_dash_BLUE);
    break;
  default:
    GetColor(BLUE);
    break;

  }
}

// ================================================
// 0xe01d: WORD '.SUN' codep=0x224c parp=0xe01f
// ================================================

void DrawSUN() // .SUN
{
  SC_gt_C(); // SC>C case
  StoreCOLOR(); // !COLOR
  Push(0x0078);
  Push(0x00a1);
  Push(2);
  FILLCIRC(); // FILLCIRC
}


// ================================================
// 0xe031: WORD '.PLANET' codep=0x224c parp=0xe033
// ================================================

void DrawPLANET() // .PLANET
{
  do
  {
    GetINST_dash_CLASS(); // @INST-CLASS
    Push(Pop()==0x000b?1:0); //  0x000b =
    IOPEN(); // IOPEN
    IsPLANET(); // ?PLANET
    Push(Pop() & Pop()); // AND
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      LoadData(WDA65); // from 'PLANET'
      Push(Read16(Pop())&0xFF); //  C@
      PS_gt_C(); // PS>C case
      StoreCOLOR(); // !COLOR
    }
    ICLOSE(); // ICLOSE
    Push(Read16(regsp)); // DUP
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      INEXT(); // INEXT
      IsFIRST(); // ?FIRST
      Push(Pop() | Pop()); // OR
    } else
    {
      Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
      Push(0x0024);
      Push(Read16(cc_SYSRADIUS)); // SYSRADIUS
      _star__slash_(); // */
      Push(Pop() + 0x0078); //  0x0078 +
      Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
      Push(0x0024);
      Push(Read16(cc_SYSRADIUS)); // SYSRADIUS
      _star__slash_(); // */
      Push(Pop() + 0x00a1); //  0x00a1 +
      Push(1);
      Push(1);
      Push(1);
      FILLELLIP(); // FILLELLIP
      INEXT(); // INEXT
    }
  } while(Pop() == 0);
}


// ================================================
// 0xe097: WORD '.AUXSYS' codep=0x224c parp=0xe0a3 params=0 returns=0
// ================================================
// entry

void DrawAUXSYS() // .AUXSYS
{
  unsigned short int i, imax;
  Push(Read16(pp_CONTEXT_dash_ID_n_)==2?1:0); // CONTEXT-ID# @ 2 =
  if (Pop() == 0) return;
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  GetColor(BLACK);
  ERASE_dash_AUXILLARY(); // ERASE-AUXILLARY
  Push(5);
  Push(pp__n_AUX); // #AUX
  Store_3(); // !_3
  SYS_gt_C(); // SYS>C
  GetINST_dash_SPECIES(); // @INST-SPECIES
  DrawSUN(); // .SUN
  Push(Read16(0x63ef+ORBIT_dash_MASK.offset)&0xFF); // ORBIT-MASK<IFIELD> C@
  IOPEN(); // IOPEN
  Push(9);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    BIT(); // BIT
    OVER(); // OVER
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      GetColor(GREY1);
      StoreCOLOR(); // !COLOR
      Push(0x0078);
      Push(0x00a1);
      Push(i * 4 + 1); // I 4 * 1+
      Push(1);
      Push(1);
      DrawELLIPSE(); // .ELLIPSE
      DrawPLANET(); // .PLANET
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  IFIRST(); // IFIRST
  _2ICLOSE(); // 2ICLOSE
  DrawAUXSHIP(); // .AUXSHIP
}


// ================================================
// 0xe105: WORD 'SYSSETUP' codep=0x224c parp=0xe107
// ================================================

void SYSSETUP() // SYSSETUP
{
  Push(Read16(pp_WDA12)); // WDA12 @
  Push(pp_IsNEB); // ?NEB
  Store_3(); // !_3
  Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
  _1_dot_5_at_(); // 1.5@
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_ex_(); // 1.5!
  Push(0xe0a3); // '.AUXSYS'
  Push(pp__i_AUX_dash_CLEAN); // 'AUX-CLEAN
  Store_3(); // !_3
  MAKE_dash_STAR(); // MAKE-STAR
  _gt_ORBITS(); // >ORBITS
  SETPLNXY(); // SETPLNXY
  DrawAUXSYS(); // .AUXSYS
}


// ================================================
// 0xe129: WORD 'SYSCLEANUP' codep=0x224c parp=0xe12b
// ================================================

void SYSCLEANUP() // SYSCLEANUP
{
  SYS_gt_C(); // SYS>C
  GetCOORDS(); // @COORDS
  StoreXYTRNS(); // !XYTRNS
  ICLOSE(); // ICLOSE
  WDF16(); // WDF16
  KILL_dash_STAR(); // KILL-STAR
  Push2Words("NULL");
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_ex_(); // 1.5!
  Push(0xbef3); // 'OV/STATUS'
  MODULE(); // MODULE
  Push(-1);
  Push(pp__ro_FLARE_rc_); // (FLARE)
  Store_3(); // !_3
  Push(0x3a48); // 'NOP'
  Push(pp__i_AUX_dash_CLEAN); // 'AUX-CLEAN
  Store_3(); // !_3
}


// ================================================
// 0xe153: WORD 'RNDCPT' codep=0x224c parp=0xe155 params=1 returns=2
// ================================================
// orphan

void RNDCPT() // RNDCPT
{
  Push(0);
  OVER(); // OVER
  Push(3);
  Push(2);
  _star__slash_(); // */
  Push(Pop() + 1); //  1+
  RRND(); // RRND
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  OVER(); // OVER
  Push(2);
  Push(3);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0);
  SQRT(); // SQRT
  Push(0);
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  RRND(); // RRND
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() != 0)
  {
    Push(-Pop()); //  NEGATE
  }
  SWAP(); // SWAP
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); //  NEGATE
}


// ================================================
// 0xe19f: WORD '?CAN-NAVIGATE' codep=0x224c parp=0xe1a1 params=0 returns=1
// ================================================

void IsCAN_dash_NAVIGATE() // ?CAN-NAVIGATE
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIME); // NAV-TIME
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xe1ad: WORD '>[CONTEXT]' codep=0x224c parp=0xe1af params=0 returns=0
// ================================================

void _gt__bo_CONTEXT_bc_() // >[CONTEXT]
{
  Push(Read16(pp__bo_CONTEXT_bc_)); // [CONTEXT] @
  while(1)
  {
    Push(Read16(pp_CXSP)); // CXSP @
    OVER(); // OVER
    U_st_(); // U<
    if (Pop() == 0) break;

    ICLOSE(); // ICLOSE
  }
  Pop(); // DROP
}


// ================================================
// 0xe1c9: WORD 'CTX>C' codep=0x224c parp=0xe1cb params=0 returns=0
// ================================================
// orphan

void CTX_gt_C() // CTX>C
{
  Push(pp__ro_SHIPBOX_rc_); // (SHIPBOX)
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xe1d1: WORD '![CONTEXT]' codep=0x224c parp=0xe1d3 params=0 returns=0
// ================================================

void Store_bo_CONTEXT_bc_() // ![CONTEXT]
{
  Push(Read16(pp_CXSP)); // CXSP @
  Push(pp__bo_CONTEXT_bc_); // [CONTEXT]
  Store_3(); // !_3
}


// ================================================
// 0xe1dd: WORD 'RADII' codep=0x4a4f parp=0xe1e7
// ================================================

void RADII() // RADII
{
  switch(Pop()) // RADII
  {
  case 1:
    Push(Read16(cc_ORBRADIUS)); // ORBRADIUS
    break;
  case 2:
    Push(Read16(cc_SYSRADIUS)); // SYSRADIUS
    break;
  case 4:
    Push(Read16(cc_ENCRADIUS)); // ENCRADIUS
    break;
  case 5:
    Push(Read16(cc_PRTRADIUS)); // PRTRADIUS
    break;
  default:
    Push(Read16(cc_DEFRADIUS)); // DEFRADIUS
    break;

  }
}

// ================================================
// 0xe1fb: WORD 'IVAR' codep=0x4a4f parp=0xe204
// ================================================

void IVAR() // IVAR
{
  switch(Pop()) // IVAR
  {
  case 0:
    Push(pp__ro_PLANET_rc_); // (PLANET)
    break;
  case 1:
    Push(pp__ro_ORBIT_rc_); // (ORBIT)
    break;
  case 2:
    Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
    break;
  case 4:
    Push(pp__ro_ENCOUNTER_rc_); // (ENCOUNTER)
    break;
  default:
    Push(pp__ro_SHIPBOX_rc_); // (SHIPBOX)
    break;

  }
}

// ================================================
// 0xe218: WORD '#CPARMS' codep=0x224c parp=0xe21a
// ================================================

void _n_CPARMS() // #CPARMS
{
  unsigned short int a, b;
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SPECIES(); // @INST-SPECIES
  GetINST_dash_CLASS(); // @INST-CLASS
  CONTEXT_dash_CASES(); // CONTEXT-CASES
  Push(Read16(regsp)); // DUP
  RADII(); // RADII case
  a = Pop(); // >R
  b = Pop(); // >R
  Push(b); // I
  IVAR(); // IVAR case
  Push(b); // R>
  Push(a); // R>
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe238: WORD '!CPARMS' codep=0x224c parp=0xe23a params=5 returns=0
// ================================================

void StoreCPARMS() // !CPARMS
{
  unsigned short int a;
  Push(pp__ro_RADIUS_rc_); // (RADIUS)
  Store_3(); // !_3
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Store_3(); // !_3
  a = Pop(); // >R
  _2DUP(); // 2DUP
  Push(a); // R>
  _1_dot_5_ex_(); // 1.5!
  Push(pp__ro_SHIPBOX_rc_); // (SHIPBOX)
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0xe250: WORD 'WE252' codep=0x224c parp=0xe252 params=0 returns=2
// ================================================

void WE252() // WE252
{
  GetXYABS(); // @XYABS
}


// ================================================
// 0xe256: WORD 'WE258' codep=0x224c parp=0xe258 params=0 returns=2
// ================================================

void WE258() // WE258
{
  SYS_gt_C(); // SYS>C
  GetCOORDS(); // @COORDS
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe260: WORD 'WE262' codep=0x224c parp=0xe262 params=0 returns=2
// ================================================

void WE262() // WE262
{
  Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WE258(); // WE258
    return;
  }
  ENC_gt_C(); // ENC>C
  GetCOORDS(); // @COORDS
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe27a: WORD 'XYCASE' codep=0x4a4f parp=0xe285
// ================================================

void XYCASE() // XYCASE
{
  switch(Pop()) // XYCASE
  {
  case 3:
    WE252(); // WE252
    break;
  case 4:
    WE262(); // WE262
    break;
  default:
    WE258(); // WE258
    break;

  }
}

// ================================================
// 0xe291: WORD '.COORDINATES' codep=0x224c parp=0xe293 params=0 returns=2
// ================================================

void DrawCOORDINATES() // .COORDINATES
{
  _gt_DISPLAY(); // >DISPLAY
  Push(3);
  GetColor(GREY1);
  Push(0x00c6);
  Push(0x0016);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  Push(3);
  GetColor(GREY1);
  Push(0x00c6);
  Push(0x0030);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  IsCAN_dash_NAVIGATE(); // ?CAN-NAVIGATE
  if (Pop() != 0)
  {
    CTXT_n_(); // CTXT#
    XYCASE(); // XYCASE case
  } else
  {
    Push(0);
    Push(0x06dd); // 'R/W'
    RRND(); // RRND
    Push(0);
    Push(0x07cd);
    RRND(); // RRND
  }
  Push(Pop() + 3); //  3 +
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  SWAP(); // SWAP
  Push(Pop() + 3); //  3 +
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(3);
  DrawR(); // .R
  Push(0x0030);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  Draw(); // .
}


// ================================================
// 0xe2f9: WORD 'XBND' codep=0x2214 parp=0xe2fb
// ================================================
// 0xe2fb: dw 0x0048

// ================================================
// 0xe2fd: WORD 'YBND' codep=0x2214 parp=0xe2ff
// ================================================
// 0xe2ff: dw 0x0078

// ================================================
// 0xe301: WORD 'XLIM' codep=0x2214 parp=0xe303
// ================================================
// 0xe303: dw 0x00ff

// ================================================
// 0xe305: WORD 'YLIM' codep=0x2214 parp=0xe307
// ================================================
// 0xe307: dw 0x00ff

// ================================================
// 0xe309: WORD 'SDUST' codep=0x1d29 parp=0xe30b
// ================================================
// 0xe30b: db 0x07 0xc6 0x7c 0xa9 0xaa 0xbf 0x2b 0x18 0x2d 0x0a 0x13 0x4b 0x13 0x1a 0xd8 0x56 0x21 0xa4 0x5f 0x8d 0x59 0x9d 0xca 0x85 '  |   + -  K   V! _ Y   '

// ================================================
// 0xe323: WORD '>DUST' codep=0x224c parp=0xe325 params=0 returns=0
// ================================================

void _gt_DUST() // >DUST
{
  unsigned short int i, imax;
  Push(pp_SDUST + 0x0018); // SDUST 0x0018 +
  Push(pp_SDUST); // SDUST

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0);
    Push(Read16(cc_XLIM)); // XLIM
    RRND(); // RRND
    Push(i); // I
    C_ex_(); // C!
    Push(0);
    Push(Read16(cc_YLIM)); // YLIM
    RRND(); // RRND
    Push(i + 1); // I 1+
    C_ex_(); // C!
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe34f: WORD '?DUST' codep=0x224c parp=0xe351 params=2 returns=2
// ================================================

void IsDUST() // ?DUST
{
  Push(Read16(cc_YLIM)); // YLIM
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(Read16(cc_YBND)); // YBND
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(Read16(cc_XLIM)); // XLIM
  MOD(); // MOD
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(Read16(cc_XBND)); // XBND
  WITHIN(); // WITHIN
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
}


// ================================================
// 0xe373: WORD '(.DUST)' codep=0x224c parp=0xe375 params=2 returns=0
// ================================================

void _ro__dot_DUST_rc_() // (.DUST)
{
  unsigned short int a;
  Push(Read16(pp_XABS) + 0x01f4); // XABS @ 0x01f4 +
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  Push(Read16(pp_YABS) + 0x01f4); // YABS @ 0x01f4 +
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _2_at_(); // 2@
  SWAP(); // SWAP
  _star__slash_(); // */
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(a); // R>
  IsDUST(); // ?DUST
  _2DUP(); // 2DUP
  Push(Pop() * Pop()); // *
  if (Pop() != 0)
  {
    Push(-(Pop() - Read16(cc_YBND))); //  YBND - NEGATE
    SWAP(); // SWAP
    Push(-(Pop() - Read16(cc_XBND))); //  XBND - NEGATE
    SWAP(); // SWAP
    LPLOT(); // LPLOT
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe3c7: WORD '.DUST' codep=0x224c parp=0xe3c9 params=0 returns=0
// ================================================

void DrawDUST() // .DUST
{
  unsigned short int i, imax;
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  Push(pp_SDUST + 0x0021); // SDUST 0x0021 +
  Push(pp_SDUST); // SDUST

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(i)&0xFF); // I C@
    Push(Read16(i + 1)&0xFF); // I 1+ C@
    _ro__dot_DUST_rc_(); // (.DUST)
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe3ed: WORD '.MVS' codep=0x224c parp=0xe3f6 params=0 returns=0
// ================================================
// entry

void DrawMVS() // .MVS
{
  IsXIDENC(); // ?XIDENC
  CTXT_n_(); // CTXT#
  Push(Pop()==1?1:0); //  1 =
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  _gt_MAINVIEW(); // >MAINVIEW
  VCLIPSET(); // VCLIPSET
  Push(Read16(pp_IsNEB)); // ?NEB @
  CTXT_n_(); // CTXT#
  Push(Pop()==2?1:0); //  2 =
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    GetColor(DK_dash_GREEN);
  } else
  {
    GetColor(BLACK);
  }
  StoreCOLOR(); // !COLOR
  BFILL(); // BFILL
  CTXT_n_(); // CTXT#
  Push(2);
  Push(4);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    DrawDUST(); // .DUST
  }
  ORGLIST(); // ORGLIST
  DrawLOCAL_dash_ICONS(); // .LOCAL-ICONS
  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
}


// ================================================
// 0xe440: WORD '.FLUX-ICON' codep=0x224c parp=0xe442
// ================================================
// orphan

void DrawFLUX_dash_ICON() // .FLUX-ICON
{
  unsigned short int i, imax;
  GetCRS(); // @CRS
  GetIX(); // @IX
  GetIY(); // @IY
  WLD_gt_SCR(); // WLD>SCR
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  CURSORSPACE(); // CURSORSPACE
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  Push(1);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(1);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(Read16(pp_NAV_dash_SKILL)); // NAV-SKILL @
  Push(0x0096);
  _gt_(); // >
  Push(Pop() | Read16(pp_IsHAS_dash_RING_dash_DEVICE)); //  ?HAS-RING-DEVICE @ OR
  if (Pop() != 0)
  {
    Push(Read16(pp_NAV_dash_SKILL) - 0x0096); // NAV-SKILL @ 0x0096 -
    Push(6);
    Push(0x0064);
    _star__slash_(); // */
    Push(Pop() + 1); //  1+
    Push(Read16(pp_IsHAS_dash_RING_dash_DEVICE)); // ?HAS-RING-DEVICE @
    MAX(); // MAX
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      _2DUP(); // 2DUP
      Push(0x000f);
      RNDCPT(); // RNDCPT
      ROT(); // ROT
      Push(Pop() + Pop()); // +
      Push(pp_YBLT); // YBLT
      Store_3(); // !_3
      Push(Pop() + Pop()); // +
      Push(pp_XBLT); // XBLT
      Store_3(); // !_3
      BLT(); // BLT
      i++;
    } while(i<imax); // (LOOP)

  }
  Pop(); Pop(); // 2DROP
  StoreCRS(); // !CRS
}


// ================================================
// 0xe4b8: WORD '?CHANGEXY' codep=0x224c parp=0xe4ba params=3 returns=3
// ================================================

void IsCHANGEXY() // ?CHANGEXY
{
  unsigned short int a, b, c;
  a = Pop(); // >R
  b = Pop(); // >R
  c = Pop(); // >R
  Push(!(((c==Read16(pp_HEADING)?1:0) & (b==Read16(pp_XABS)?1:0)) & (a==Read16(pp_YABS)?1:0))); // I HEADING @ = I' XABS @ = AND J YABS @ = AND NOT
  _gt_V(); // >V
  Push(c); // R>
  Push(b); // R>
  Push(a); // R>
  V_gt_(); // V>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Pop(); Pop(); // 2DROP
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xe4f8: WORD '(?NEWHEADXY)' codep=0x224c parp=0xe4fa
// ================================================

void _ro__ask_NEWHEADXY_rc_() // (?NEWHEADXY)
{
  _2DUP(); // 2DUP
  Push(pp_YABS); // YABS
  Store_3(); // !_3
  Push(pp_XABS); // XABS
  Store_3(); // !_3
  _2DUP(); // 2DUP
  StoreXYSHP(); // !XYSHP
  _2DUP(); // 2DUP
  Push(Read16(pp_ILOCAL) - 1); // ILOCAL @ 1-
  POINT_gt_ICON(); // POINT>ICON
  StoreIY(); // !IY
  StoreIX(); // !IX
  IsXIDENC(); // ?XIDENC
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    Push(Pop() - Read16(cc_BVISOFF)); //  BVISOFF -
    SWAP(); // SWAP
    Push(Pop() - Read16(cc_LVISOFF)); //  LVISOFF -
    SWAP(); // SWAP
    _2SWAP(); // 2SWAP
    Push(Pop() + Read16(cc_VISLENGTH)); //  VISLENGTH +
    SWAP(); // SWAP
    Push(Pop() + Read16(cc_VISWIDTH)); //  VISWIDTH +
    SWAP(); // SWAP
    StoreVISWINDOW(); // !VISWINDOW
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  IsHYPER(); // ?HYPER
  if (Pop() != 0)
  {
    DrawCOORDINATES(); // .COORDINATES
  }
  Push(Read16(regsp)); // DUP
  Push(pp_HEADING); // HEADING
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Store_pe_HEADING(); // !%HEADING
  Push(Pop() + 0x001b); //  0x001b +
  StoreID(); // !ID
}


// ================================================
// 0xe55e: WORD '>NEWHEADXY' codep=0x224c parp=0xe560 params=3 returns=2
// ================================================

void _gt_NEWHEADXY() // >NEWHEADXY
{
  IsCHANGEXY(); // ?CHANGEXY
  if (Pop() == 0) return;
  DrawAUXSHIP(); // .AUXSHIP
  _ro__ask_NEWHEADXY_rc_(); // (?NEWHEADXY)
  DrawAUXSHIP(); // .AUXSHIP
}


// ================================================
// 0xe56e: WORD '#SLOPE' codep=0x224c parp=0xe570 params=2 returns=1
// ================================================

void _n_SLOPE() // #SLOPE
{
  SWAP(); // SWAP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0x0064);
    SWAP(); // SWAP
    _star__slash_(); // */
    Push(1);
    return;
  }
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xe58c: WORD '#RELXY' codep=0x224c parp=0xe58e params=4 returns=2
// ================================================

void _n_RELXY() // #RELXY
{
  unsigned short int a;
  ROT(); // ROT
  _dash_(); // -
  a = Pop(); // >R
  SWAP(); // SWAP
  _dash_(); // -
  Push(a); // R>
}


// ================================================
// 0xe59c: WORD '#QUAD' codep=0x224c parp=0xe59e params=2 returns=1
// ================================================

void _n_QUAD() // #QUAD
{
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(3);
  } else
  {
    Push(0x000c);
  }
  SWAP(); // SWAP
  _0_st_(); // 0<
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(9);
  } else
  {
    Push(6);
  }
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(Pop() & 8); //  8 AND
  if (Pop() != 0)
  {
    Push(Pop() >> 1); //  2/
    return;
  }
  Push(Read16(regsp)); // DUP
  Push(Pop() & 4); //  4 AND
  if (Pop() == 0) return;
  Push(Pop() - 1); //  1-
}


// ================================================
// 0xe5ec: WORD '#HEADING' codep=0x224c parp=0xe5ee params=4 returns=1
// ================================================

void _n_HEADING() // #HEADING
{
  unsigned short int a;
  _n_RELXY(); // #RELXY
  _2DUP(); // 2DUP
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _2DUP(); // 2DUP
    _n_QUAD(); // #QUAD
    a = Pop(); // >R
    Push(!(a & 1)); // I 1 AND NOT
    if (Pop() != 0)
    {
      SWAP(); // SWAP
    }
    ABS(); // ABS
    SWAP(); // SWAP
    ABS(); // ABS
    SWAP(); // SWAP
    _n_SLOPE(); // #SLOPE
    if (Pop() != 0)
    {
      Push(Read16(regsp)); // DUP
      Push(0x0029);
      _st_(); // <
      if (Pop() != 0)
      {
        Pop(); // DROP
        Push(0);
      } else
      {
        Push(0x00f1);
        _gt_(); // >
        if (Pop() != 0)
        {
          Push(2);
        } else
        {
          Push(1);
        }
      }
    } else
    {
      Push(2);
    }
    Push(Pop() + (a - 1) * 2); //  R> 1- 2* +
    return;
  }
  Pop(); Pop(); // 2DROP
  Push(Read16(pp_HEADING)); // HEADING @
}


// ================================================
// 0xe65c: WORD 'HEADDXDY' codep=0x1d29 parp=0xe65e
// ================================================
// 0xe65e: db 0x01 0x00 0x01 0x01 0x00 0x01 0xff 0x01 0xff 0x00 0xff 0xff 0x00 0xff 0x01 0xff '                '

// ================================================
// 0xe66e: WORD '#HEADDXDY' codep=0x224c parp=0xe670 params=1 returns=2
// ================================================

void _n_HEADDXDY() // #HEADDXDY
{
  Push(Pop() * 2 + pp_HEADDXDY); //  2* HEADDXDY +
  Push(Read16(regsp)); // DUP
  _plus__dash__at_(); // +-@
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  _plus__dash__at_(); // +-@
}


// ================================================
// 0xe682: WORD '#NEXTXY' codep=0x224c parp=0xe684 params=2 returns=2
// ================================================

void _n_NEXTXY() // #NEXTXY
{
  unsigned short int a, b;
  _n_HEADDXDY(); // #HEADDXDY
  a = Pop(); // >R
  b = Pop(); // >R
  Push(Pop() - 1); //  1-
  Push(b); // R>
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(-Pop()); //  NEGATE
  SWAP(); // SWAP
  Push(-(Pop() * a)); //  R> * NEGATE
}


// ================================================
// 0xe69e: WORD '#VECTXY' codep=0x224c parp=0xe6a0 params=4 returns=2
// ================================================

void _n_VECTXY() // #VECTXY
{
  unsigned short int a, b;
  a = Pop(); // >R
  _n_HEADDXDY(); // #HEADDXDY
  Push(Pop() * a); //  I *
  SWAP(); // SWAP
  Push(Pop() * a); //  R> *
  SWAP(); // SWAP
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  b = Pop(); // >R
  Push(Pop() + Pop()); // +
  Push(b); // R>
}


// ================================================
// 0xe6bc: WORD '#DIST' codep=0x224c parp=0xe6be params=4 returns=1
// ================================================

void _n_DIST() // #DIST
{
  unsigned short int a;
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(Pop() + a); //  R> +
  Push(0);
  SQRT(); // SQRT
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe6e2: WORD '#SPEED' codep=0x224c parp=0xe6e4 params=0 returns=1
// ================================================

void _n_SPEED() // #SPEED
{
  GetXYABS(); // @XYABS
  Push(Read16(pp_XCRS)); // XCRS @
  Push(Read16(pp_YCRS)); // YCRS @
  _n_DIST(); // #DIST
  Push(Read16(cc_MAXSPEED)); // MAXSPEED
  MIN(); // MIN
}


// ================================================
// 0xe6f6: WORD '#NEWHEADXY' codep=0x224c parp=0xe6f8 params=0 returns=3
// ================================================

void _n_NEWHEADXY() // #NEWHEADXY
{
  unsigned short int a;
  GetXYABS(); // @XYABS
  _2DUP(); // 2DUP
  Push(Read16(pp_XCRS)); // XCRS @
  Push(Read16(pp_YCRS)); // YCRS @
  _n_HEADING(); // #HEADING
  Push(Read16(regsp)); // DUP
  Push(Pop()==8?1:0); //  8 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_HEADING)); // HEADING @
  }
  a = Pop(); // >R
  Push(a); // I
  _n_SPEED(); // #SPEED
  _n_VECTXY(); // #VECTXY
  Push(a); // R>
  ROT(); // ROT
  ROT(); // ROT
}


// ================================================
// 0xe726: WORD 'DWITHIN' codep=0x224c parp=0xe728 params=6 returns=1
// ================================================

void DWITHIN() // DWITHIN
{
  unsigned short int a;
  Push(6);
  PICK(); // PICK
  Push(6);
  PICK(); // PICK
  _2SWAP(); // 2SWAP
  D_st_(); // D<
  a = Pop(); // >R
  D_st_(); // D<
  Push(!Pop() & a); //  NOT R> AND
}


// ================================================
// 0xe740: WORD '(-ENDURIUM)' codep=0x224c parp=0xe742 params=0 returns=0
// ================================================

void _ro__dash_ENDURIUM_rc_() // (-ENDURIUM)
{
  Push(pp__10_star_CARGO); // 10*CARGO
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(0);
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  DMIN(); // DMIN
  D_plus_(); // D+
  Push(pp__10_star_CARGO); // 10*CARGO
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(0);
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(Read16(regsp)); // DUP
  Push(0x0096);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  DWITHIN(); // DWITHIN
  if (Pop() != 0)
  {
    Push(3);
    Push(0xc9e0); // '.EX'
    MODULE(); // MODULE
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Read16(pp__dash_END)); // -END @
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  M_star_(); // M*
  _2DUP(); // 2DUP
  Push(5);
  ROLL(); // ROLL
  Push(0);
  D_plus_(); // D+
  DWITHIN(); // DWITHIN
  if (Pop() != 0)
  {
    Push(2);
    Push(0xc9e0); // '.EX'
    MODULE(); // MODULE
    return;
  }
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  Push(pp_IsAUTO); // ?AUTO
  ON_3(); // ON_3
  Push(1);
  Push(0xc9e0); // '.EX'
  MODULE(); // MODULE
  Push(Read16(pp_IsSUP)); // ?SUP @
  if (Pop() == 0) return;
  Push(0xcb4e); // 'OV-SH'
  MODULE(); // MODULE
}


// ================================================
// 0xe7ea: WORD '-ENDURIUM' codep=0x224c parp=0xe7ec params=0 returns=0
// ================================================

void _dash_ENDURIUM() // -ENDURIUM
{
  IsHYPER(); // ?HYPER
  Push(Pop() & !Read16(pp_IsAUTO)); //  ?AUTO @ NOT AND
  if (Pop() == 0) return;
  _ro__dash_ENDURIUM_rc_(); // (-ENDURIUM)
}


// ================================================
// 0xe7fe: WORD 'USE-E' codep=0x224c parp=0xe808
// ================================================
// entry

void USE_dash_E() // USE-E
{
  Push(Read16(pp__dash_END)); // -END @
  Push(0x000a);
  Push(pp__dash_END); // -END
  Store_3(); // !_3
  _ro__dash_ENDURIUM_rc_(); // (-ENDURIUM)
  Push(pp__dash_END); // -END
  Store_3(); // !_3
  SHP_gt_C(); // SHP>C
  Push(1);
  Push(0x63ef+WDA3D.offset); // WDA3D<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+INST_dash_QTY.offset) - 1); // INST-QTY<IFIELD> @ 1-
      Push(0);
      MAX(); // MAX
      Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
      Store_3(); // !_3
    }
    CDROP(); // CDROP
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe85c: WORD '?IN-NEB' codep=0x224c parp=0xe85e params=0 returns=1
// ================================================

void IsIN_dash_NEB() // ?IN-NEB
{
  unsigned short int a;
  Push(0);
  Push(Read16(pp_DBUF_dash_SEG)); // DBUF-SEG @
  a = Pop(); // >R
  Push(a); // I
  Push(Read16(pp_YTABLE + 0x010c) + 0x0012); // YTABLE 0x010c + @ 0x0012 +
  LC_at_(); // LC@
  Push((Pop() & 0x000f)==1?1:0); //  0x000f AND 1 =
  Push(Pop() + Pop()); // +
  Push(a); // I
  Push(Read16(pp_YTABLE + 0x010c) + 0x0015); // YTABLE 0x010c + @ 0x0015 +
  LC_at_(); // LC@
  Push((Pop() & 0x00f0)==0x0010?1:0); //  0x00f0 AND 0x0010 =
  Push(Pop() + Pop()); // +
  Push(a); // I
  Push(Read16(pp_YTABLE + 0x00fa) + 0x0012); // YTABLE 0x00fa + @ 0x0012 +
  LC_at_(); // LC@
  Push((Pop() & 0x000f)==1?1:0); //  0x000f AND 1 =
  Push(Pop() + Pop()); // +
  Push(a); // R>
  Push(Read16(pp_YTABLE + 0x00fa) + 0x0015); // YTABLE 0x00fa + @ 0x0015 +
  LC_at_(); // LC@
  Push((Pop() & 0x00f0)==0x0010?1:0); //  0x00f0 AND 0x0010 =
  Push(Pop() + Pop()); // +
  Push(2);
  _gt_(); // >
}


// ================================================
// 0xe8f0: WORD '#VES-SPEED' codep=0x224c parp=0xe8f2 params=0 returns=2
// ================================================

void _n_VES_dash_SPEED() // #VES-SPEED
{
  Push(6);
  Push(Read16(pp__n_VESS)); // #VESS @
  Push(1);
  MAX(); // MAX
  _slash_(); // /
  Push(2);
  MAX(); // MAX
}


// ================================================
// 0xe904: WORD 'TWELVE' codep=0x2214 parp=0xe906
// ================================================
// 0xe906: dw 0x000c

// ================================================
// 0xe908: WORD 'CSPEED' codep=0x4a4f parp=0xe913
// ================================================

void CSPEED() // CSPEED
{
  switch(Pop()) // CSPEED
  {
  case 3:
    Push(1);
    break;
  case 4:
    _n_VES_dash_SPEED(); // #VES-SPEED
    break;
  default:
    Push(Read16(cc_TWELVE)); // TWELVE
    break;

  }
}

// ================================================
// 0xe91f: WORD '#ACC' codep=0x1d29 parp=0xe921
// ================================================
// 0xe921: db 0x00 0x00 '  '

// ================================================
// 0xe923: WORD 'KEYINC' codep=0x1d29 parp=0xe925
// ================================================
// 0xe925: db 0x00 0x00 '  '

// ================================================
// 0xe927: WORD '!MAXSPEED' codep=0x224c parp=0xe929
// ================================================

void StoreMAXSPEED() // !MAXSPEED
{
  Push(pp_KEYINC); // KEYINC
  OFF(); // OFF
  Push(pp__n_ACC); // #ACC
  OFF(); // OFF
  CTXT_n_(); // CTXT#
  CSPEED(); // CSPEED case
  Push(0xd9d8); // 'MAXSPEED'
  Store_3(); // !_3
}


// ================================================
// 0xe93d: WORD '!S/A' codep=0x224c parp=0xe93f
// ================================================

void StoreS_slash_A() // !S/A
{
  SHP_gt_C(); // SHP>C
  Push(Read16(0x63ef+_pe_ACC.offset)); // %ACC<IFIELD> @
  Push(Read16(0x63ef+_pe_ENGINE.offset)&0xFF); // %ENGINE<IFIELD> C@
  Push(0x0064);
  _star__slash_(); // */
  Push(2);
  MAX(); // MAX
  Push(pp_ESPEED); // ESPEED
  Store_3(); // !_3
  StoreMAXSPEED(); // !MAXSPEED
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe95d: WORD 'ACCELERATE' codep=0x224c parp=0xe95f params=0 returns=0
// ================================================

void ACCELERATE() // ACCELERATE
{
  Push(Read16(pp__n_ACC)); // #ACC @
  Push(1);
  _st_(); // <
  IsXIDENC(); // ?XIDENC
  Push(!Pop()); //  NOT
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(Read16(pp_KEYINC) + 1); // KEYINC @ 1+
    Push(Read16(cc_MAXSPEED)); // MAXSPEED
    MIN(); // MIN
    Push(pp_KEYINC); // KEYINC
    Store_3(); // !_3
    Push(0x0060);
    Push(Read16(pp_ESPEED)); // ESPEED @
    _slash_(); // /
    Push(pp__n_ACC); // #ACC
    Store_3(); // !_3
    return;
  }
  Push(-1);
  Push(pp__n_ACC); // #ACC
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe999: WORD 'NEST-SETUP' codep=0x4a4f parp=0xe9a5
// ================================================

void NEST_dash_SETUP() // NEST-SETUP
{
  switch(Pop()) // NEST-SETUP
  {
  case 1:
    ORBSETUP(); // ORBSETUP
    break;
  case 2:
    SYSSETUP(); // SYSSETUP
    break;
  case 4:
    ENCSETUP(); // ENCSETUP
    break;
  case 5:
    PRTSETUP(); // PRTSETUP
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xe9b9: WORD 'NEST-SPACEXY' codep=0x224c parp=0xe9bb params=1 returns=0
// ================================================

void NEST_dash_SPACEXY() // NEST-SPACEXY
{
  unsigned short int a, b;
  Push(!(Pop()==1?1:0)); //  1 = NOT
  if (Pop() == 0) return;
  Push(Read16(pp_HEADING)); // HEADING @
  Push(Read16(pp__ro_RADIUS_rc_)); // (RADIUS) @
  OVER(); // OVER
  _n_NEXTXY(); // #NEXTXY
  _2DUP(); // 2DUP
  a = Pop(); // >R
  b = Pop(); // >R
  _gt_NEWHEADXY(); // >NEWHEADXY
  Push(b); // R>
  Push(a); // R>
  Push(pp_YCRS); // YCRS
  Store_3(); // !_3
  Push(pp_XCRS); // XCRS
  Store_3(); // !_3
}


// ================================================
// 0xe9e7: WORD 'NEST' codep=0x224c parp=0xe9f0
// ================================================

void NEST() // NEST
{
  Push(pp__ro_SHIPBOX_rc_); // (SHIPBOX)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  SHP_gt_C(); // SHP>C
  IEXTRACT(); // IEXTRACT
  _gt__bo_CONTEXT_bc_(); // >[CONTEXT]
  _2SWAP(); // 2SWAP
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  IINSERT(); // IINSERT
  Store_bo_CONTEXT_bc_(); // ![CONTEXT]
  CI(); // CI
  _n_CPARMS(); // #CPARMS
  StoreCPARMS(); // !CPARMS
  CTXT_n_(); // CTXT#
  Push(Read16(regsp)); // DUP
  Push(0xc9d2); // 'NSM'
  MODULE(); // MODULE
  Push(Read16(regsp)); // DUP
  NEST_dash_SPACEXY(); // NEST-SPACEXY
  Push(Read16(regsp)); // DUP
  NEST_dash_SETUP(); // NEST-SETUP case
  Push(Read16(regsp)); // DUP
  Push(0xc9fe); // 'D-UP'
  MODULE(); // MODULE
  SET_dash__i_EXTERNAL(); // SET-'EXTERNAL
  _gt_CONS_dash_DISP(); // >CONS-DISP
  _gt_DUST(); // >DUST
  Push(0xc9c4); // 'NFM'
  MODULE(); // MODULE
  CTXT_n_(); // CTXT#
  Push(!(Pop()==5?1:0)); //  5 = NOT
  if (Pop() != 0)
  {
    DrawMVS(); // .MVS
  }
  DrawCOORDINATES(); // .COORDINATES
  Push2Words("NULL");
  Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
  _1_dot_5_ex_(); // 1.5!
  Push2Words("NULL");
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  StoreS_slash_A(); // !S/A
  Push(pp_FORCEKEY); // FORCEKEY
  OFF(); // OFF
}


// ================================================
// 0xea58: WORD '>ENCOUNTER' codep=0x224c parp=0xea5a params=2 returns=0
// ================================================

void _gt_ENCOUNTER() // >ENCOUNTER
{
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  Push(Read16(0x63ef+WDA56.offset)&0xFF); // WDA56<IFIELD> C@
  ICLOSE(); // ICLOSE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_ENC_dash_TIME); // ENC-TIME
  _2_at_(); // 2@
  D_gt_(); // D>
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    NEST(); // NEST
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea7e: WORD '?BOX-NEST' codep=0x224c parp=0xea80 params=2 returns=0
// ================================================

void IsBOX_dash_NEST() // ?BOX-NEST
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(!(Pop()==0x0018?1:0)); //  0x0018 = NOT
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    CI(); // CI
    ICLOSE(); // ICLOSE
    NEST(); // NEST
    return;
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeaa2: WORD 'SET-FLUX-STATE' codep=0x224c parp=0xeaa4
// ================================================

void SET_dash_FLUX_dash_STATE() // SET-FLUX-STATE
{
  unsigned short int i, imax;
  Push(Read16(pp_IGLOBAL)); // IGLOBAL @
  IsICONS_dash_AT(); // ?ICONS-AT
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_ICON(); // POINT>ICON
    GetID(); // @ID
    Push(Pop()==0x00ff?1:0); //  0x00ff =
    if (Pop() != 0)
    {
      Push(3);
      StoreIC(); // !IC
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      Push(1);
      StoreINST_dash_SPECIES(); // !INST-SPECIES
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xead8: WORD 'JMPSHP' codep=0x224c parp=0xeae3
// ================================================
// entry

void JMPSHP() // JMPSHP
{
  Push(0);
  Push(8);
  RRND(); // RRND
  Push(Read16(cc_RCOLLIDE) + 1); // RCOLLIDE 1+
  _n_VECTXY(); // #VECTXY
  _gt_NEWHEADXY(); // >NEWHEADXY
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x00fa - Read16(pp_NAV_dash_SKILL)); // 0x00fa NAV-SKILL @ -
  Push(0x01f4);
  U_star_(); // U*
  D_plus_(); // D+
  Push(pp_NAV_dash_TIME); // NAV-TIME
  StoreD(); // D!
  GetXYABS(); // @XYABS
  StoreXYTRNS(); // !XYTRNS
  IsIN_dash_NEB(); // ?IN-NEB
  Push(pp_IsNEB); // ?NEB
  Store_3(); // !_3
  _i_KEY(); // 'KEY
  Pop(); // DROP
}


// ================================================
// 0xeb1b: WORD '>FLUX-NODE' codep=0x224c parp=0xeb1d
// ================================================

void _gt_FLUX_dash_NODE() // >FLUX-NODE
{
  _gt_C_plus_S(); // >C+S
  GetCOORDS(); // @COORDS
  SET_dash_FLUX_dash_STATE(); // SET-FLUX-STATE
  Push(Read16(0x63ef+DEST_dash_X.offset)); // DEST-X<IFIELD> @
  Push(Read16(0x63ef+DEST_dash_Y.offset)); // DEST-Y<IFIELD> @
  SET_dash_FLUX_dash_STATE(); // SET-FLUX-STATE
  Push(0xc4e5); // 'OVFLUX-EFFECT'
  MODULE(); // MODULE
  Push(Read16(pp_HEADING)); // HEADING @
  Push(Read16(0x63ef+DEST_dash_X.offset)); // DEST-X<IFIELD> @
  Push(Read16(0x63ef+DEST_dash_Y.offset)); // DEST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
  JMPSHP(); // JMPSHP
  DrawMVS(); // .MVS
}


// ================================================
// 0xeb47: WORD 'COLLIDE' codep=0x4a4f parp=0xeb53
// ================================================

void COLLIDE() // COLLIDE
{
  switch(Pop()) // COLLIDE
  {
  case 11:
    IsBOX_dash_NEST(); // ?BOX-NEST
    break;
  case 18:
    NEST(); // NEST
    break;
  case 23:
    NEST(); // NEST
    break;
  case 45:
    _gt_FLUX_dash_NODE(); // >FLUX-NODE
    break;
  case 61:
    _gt_ENCOUNTER(); // >ENCOUNTER
    break;
  default:
    Pop(); Pop(); // 2DROP
    break;

  }
}

// ================================================
// 0xeb6b: WORD '?-*BOX' codep=0x224c parp=0xeb6d
// ================================================

void Is_dash__star_BOX() // ?-*BOX
{
  IOPEN(); // IOPEN
  Push(0x0018);
  Push(0);
  IFIND(); // IFIND
  Push(!Pop()); //  NOT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeb7d: WORD '?~C' codep=0x4a4f parp=0xeb85
// ================================================

void Is_t_C() // ?~C
{
  switch(Pop()) // ?~C
  {
  case 11:
    Is_dash__star_BOX(); // ?-*BOX
    break;
  case 18:
    Push(1);
    break;
  case 23:
    Push(1);
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xeb95: WORD '?COLLISION' codep=0x224c parp=0xeb97
// ================================================

void IsCOLLISION() // ?COLLISION
{
  unsigned short int i, imax;
  GetXYSHP(); // @XYSHP
  Push(Read16(cc_RCOLLIDE)); // RCOLLIDE
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push2Words("NULL");
    Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
    _1_dot_5_ex_(); // 1.5!
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      POINT_gt_ICON(); // POINT>ICON
      GetIL(); // @IL
      GetIH(); // @IH
      Push2Words("*SHIP");
      D_eq_(); // D=
      GetID(); // @ID
      Push(0x0033);
      Push(0x0083);
      WITHIN(); // WITHIN
      GetIC(); // @IC
      GetColor(DK_dash_GREEN);
      Push((Pop()==Pop())?1:0); // =
      Push(Pop() & Pop()); // AND
      Push(Pop() | Pop()); // OR
      Push(!Pop()); //  NOT
      CTXT_n_(); // CTXT#
      Push(!(Pop()==1?1:0)); //  1 = NOT
      Push(Pop() & Pop()); // AND
      if (Pop() != 0)
      {
        GetIL(); // @IL
        GetIH(); // @IH
        Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
        _1_dot_5_ex_(); // 1.5!
      }
      i++;
    } while(i<imax); // (LOOP)

    Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
    _1_dot_5_at_(); // 1.5@
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
      Get_gt_C_plus_S(); // @>C+S
      CI(); // CI
      GetINST_dash_CLASS(); // @INST-CLASS
      Push(Read16(regsp)); // DUP
      Push(!(Pop()==0x0019?1:0)); //  0x0019 = NOT
      if (Pop() != 0)
      {
        Push(Read16(regsp)); // DUP
        Is_t_C(); // ?~C case
        if (Pop() != 0)
        {
          Push(0x0096);
          Push(0x0fa0);
          Push(1);
          _gt_SND(); // >SND
        }
        GetCOORDS(); // @COORDS
        StoreXYTRNS(); // !XYTRNS
      }
      ICLOSE(); // ICLOSE
      Push(1);
    } else
    {
      Push(0);
    }
    return;
  }
  Push(0);
}


// ================================================
// 0xec37: WORD 'WEC39' codep=0x224c parp=0xec39 params=0 returns=2
// ================================================

void WEC39() // WEC39
{
  Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  Push((Pop() & (Read16(pp_WD9EC)==0?1:0)) & (Read16(pp_IsPORT)==0?1:0)); //  WD9EC @ 0= AND ?PORT @ 0= AND
  CTXT_n_(); // CTXT#
  Push(Pop()==1?1:0); //  1 =
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
}


// ================================================
// 0xec5b: WORD '?2NEST.ETC' codep=0x224c parp=0xec5d params=0 returns=1
// ================================================

void Is2NEST_dot_ETC() // ?2NEST.ETC
{
  WEC39(); // WEC39
  if (Pop() != 0)
  {
    PLN_gt_C(); // PLN>C
    IOPEN(); // IOPEN
    Push(0x003d);
    Push(0);
    IFIND(); // IFIND
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+WDA56.offset)&0xFF); // WDA56<IFIELD> C@
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        CI(); // CI
        Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
        _1_dot_5_ex_(); // 1.5!
        Push(pp_WD9EC); // WD9EC
        ON_3(); // ON_3
      }
      Push(Pop() & Pop()); // AND
    }
    _2ICLOSE(); // 2ICLOSE
    Push(Pop() & Pop()); // AND
  }
  if (Pop() != 0)
  {
    Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
    Get_gt_C_plus_S(); // @>C+S
    CI(); // CI
    GetINST_dash_CLASS(); // @INST-CLASS
    ICLOSE(); // ICLOSE
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xeca7: WORD '?STARPORT' codep=0x224c parp=0xeca9 params=0 returns=1
// ================================================

void IsSTARPORT() // ?STARPORT
{
  WEC39(); // WEC39
  if (Pop() != 0)
  {
    SYS_gt_C(); // SYS>C
    Push(Read16(0x63ef+FLAREDATE.offset)); // FLAREDATE<IFIELD> @
    Push(Read16(pp_STARDATE)); // STARDATE @
    _gt_(); // >
    Push(Read16(pp_IsWIN)); // ?WIN @
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(Read16(0x63ef+FLAREDATE.offset)); // FLAREDATE<IFIELD> @
      _gt_(); // >
      Push(!Pop()); //  NOT
      Push(Pop() | Pop()); // OR
    }
    ICLOSE(); // ICLOSE
    PLN_gt_C(); // PLN>C
    IOPEN(); // IOPEN
    Push(0x000c);
    Push(0);
    IFIND(); // IFIND
    Push(Pop() & Pop()); // AND
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      CI(); // CI
      Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
      _1_dot_5_ex_(); // 1.5!
      Push(pp_WD9EC); // WD9EC
      ON_3(); // ON_3
    }
    _2ICLOSE(); // 2ICLOSE
    Push(Pop() & Pop()); // AND
  }
  if (Pop() != 0)
  {
    Push2Words("*SHIP-CONFIG");
    Push(0x0012);
    Push(1);
    Push(0x003a);
    Push(pp_FILE_n_); // FILE#
    Store_3(); // !_3
    Push(1);
    Push(pp_RECORD_n_); // RECORD#
    Store_3(); // !_3
    SET_STR_AS_PARAM("LAUNCH");
    LoadData(_1BTN); // from 'BUTTONS'
    SWAP(); // SWAP
    CMOVE(); // CMOVE
    SET_dash_CURRENT(); // SET-CURRENT
    return;
  }
  Push(0);
}


// ================================================
// 0xed26: WORD 'UNNEST-CLEAN' codep=0x4a4f parp=0xed32
// ================================================

void UNNEST_dash_CLEAN() // UNNEST-CLEAN
{
  switch(Pop()) // UNNEST-CLEAN
  {
  case 1:
    WDB32(); // WDB32
    break;
  case 2:
    SYSCLEANUP(); // SYSCLEANUP
    break;
  case 4:
    ENCCLEANUP(); // ENCCLEANUP
    break;
  case 5:
    PRTCLEANUP(); // PRTCLEANUP
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xed46: WORD 'UNNEST-SPACEXY' codep=0x224c parp=0xed48 params=1 returns=0
// ================================================

void UNNEST_dash_SPACEXY() // UNNEST-SPACEXY
{
  Push(5);
  _st_(); // <
  if (Pop() == 0) return;
  Push(Read16(pp_HEADING)); // HEADING @
  Push(Read16(pp_WD9E4)); // WD9E4 @
  Push(Read16(pp_WD9E8)); // WD9E8 @
  Push(3);
  PICK(); // PICK
  Push(Read16(cc_RCOLLIDE) + 1); // RCOLLIDE 1+
  _n_VECTXY(); // #VECTXY
  _gt_NEWHEADXY(); // >NEWHEADXY
}


// ================================================
// 0xed6a: WORD '?UNNEST' codep=0x224c parp=0xed6c params=0 returns=1
// ================================================

void IsUNNEST() // ?UNNEST
{
  unsigned short int a, i, imax;
  IsHYPER(); // ?HYPER
  if (Pop() != 0)
  {
    Push(0);
    return;
  }
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x003d?1:0); //  0x003d =
  if (Pop() != 0)
  {
    GetXYABS(); // @XYABS
    Push(Read16(pp__ro_RADIUS_rc_)); // (RADIUS) @
    Push(Read16(pp_ILOCAL)); // ILOCAL @
    IsICONS_dash_LOCUS(); // ?ICONS-LOCUS
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(0);

      i = Pop();
      imax = Pop();
      do // (DO)
      {
        Pop(); // DROP
        i++;
      } while(i<imax); // (LOOP)

    }
    Push(a==1?1:0); // R> 1 =
    return;
  }
  GetXYABS(); // @XYABS
  ABS(); // ABS
  SWAP(); // SWAP
  ABS(); // ABS
  MAX(); // MAX
  Push(Read16(pp__ro_RADIUS_rc_)); // (RADIUS) @
  _gt_(); // >
}


// ================================================
// 0xedc0: WORD '?DOUBLE-UNNEST' codep=0x224c parp=0xedc2 params=0 returns=1
// ================================================

void IsDOUBLE_dash_UNNEST() // ?DOUBLE-UNNEST
{
  Push(Read16(pp_WD9EC) & !Read16(pp_SKIP2NEST)); // WD9EC @ SKIP2NEST @ NOT AND
  CTXT_n_(); // CTXT#
  Push(Pop()==1?1:0); //  1 =
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xedd8: WORD 'UNNEST' codep=0x224c parp=0xede3
// ================================================
// entry

void UNNEST() // UNNEST
{
  unsigned short int a;
  Push(pp__ro_SHIPBOX_rc_); // (SHIPBOX)
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  SHP_gt_C(); // SHP>C
  IEXTRACT(); // IEXTRACT
  ICLOSE(); // ICLOSE
  CTXT_n_(); // CTXT#
  a = Pop(); // >R
  Push(a); // I
  Push(0xc9b6); // 'USM'
  MODULE(); // MODULE
  Push(a); // I
  UNNEST_dash_CLEAN(); // UNNEST-CLEAN case
  _gt__bo_CONTEXT_bc_(); // >[CONTEXT]
  ICLOSE(); // ICLOSE
  CI(); // CI
  IINSERT(); // IINSERT
  Store_bo_CONTEXT_bc_(); // ![CONTEXT]
  CI(); // CI
  _n_CPARMS(); // #CPARMS
  StoreCPARMS(); // !CPARMS
  _gt_CONS_dash_DISP(); // >CONS-DISP
  Push(a); // I
  UNNEST_dash_SPACEXY(); // UNNEST-SPACEXY
  _0XYCRS(); // 0XYCRS
  SET_dash__i_EXTERNAL(); // SET-'EXTERNAL
  CTXT_n_(); // CTXT#
  Push(0xc9fe); // 'D-UP'
  MODULE(); // MODULE
  _gt_DUST(); // >DUST
  Push(a); // R>
  Push(0xc9a8); // 'UFM'
  MODULE(); // MODULE
  DrawMVS(); // .MVS
  DrawCOORDINATES(); // .COORDINATES
  Push(pp__i_AUX_dash_CLEAN); // 'AUX-CLEAN
  GetEXECUTE(); // @EXECUTE
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push2Words("NULL");
  Push(pp_SENSE_dash_ADDR); // SENSE-ADDR
  _1_dot_5_ex_(); // 1.5!
  Push(pp_SKIP2NEST); // SKIP2NEST
  OFF(); // OFF
  StoreS_slash_A(); // !S/A
  Push(-Read16(pp_FORCEKEY)); // FORCEKEY @ NEGATE
  Push(pp_FORCEKEY); // FORCEKEY
  Store_3(); // !_3
}


// ================================================
// 0xee51: WORD 'WEE53' codep=0x224c parp=0xee53 params=0 returns=0
// ================================================

void WEE53() // WEE53
{
  IsHYPER(); // ?HYPER
  if (Pop() == 0) return;
  Push(0);
  MAX(); // MAX
  Push(0x00db * Read16(cc__star_MAPSCALE)); // 0x00db *MAPSCALE *
  MIN(); // MIN
  SWAP(); // SWAP
  Push(0);
  MAX(); // MAX
  Push(0x00f9 * Read16(cc__star_MAPSCALE)); // 0x00f9 *MAPSCALE *
  MIN(); // MIN
  SWAP(); // SWAP
}


// ================================================
// 0xee7b: WORD '(GET-AUX' codep=0x224c parp=0xee87 params=0 returns=0
// ================================================
// entry

void _ro_GET_dash_AUX() // (GET-AUX
{
  Push(!(Read16(pp__n_AUX)==5?1:0)); // #AUX @ 5 = NOT
  if (Pop() == 0) return;
  DrawAUXSYS(); // .AUXSYS
}


// ================================================
// 0xee99: WORD 'WEE9B' codep=0x224c parp=0xee9b
// ================================================

void WEE9B() // WEE9B
{
  unsigned short int a, b;
  IsUNNEST(); // ?UNNEST
  IsDOUBLE_dash_UNNEST(); // ?DOUBLE-UNNEST
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNNEST(); // UNNEST
  }
  IsCOLLISION(); // ?COLLISION
  a = Pop(); // >R
  Is2NEST_dot_ETC(); // ?2NEST.ETC
  Push(Pop() | a); //  R> OR
  b = Pop(); // >R
  IsSTARPORT(); // ?STARPORT
  Push(Pop() | b); //  R> OR
  if (Pop() == 0) return;
  COLLIDE(); // COLLIDE case
}


// ================================================
// 0xeec1: WORD 'FLY' codep=0x224c parp=0xeec9
// ================================================
// entry

void FLY() // FLY
{
  _n_NEWHEADXY(); // #NEWHEADXY
  WEE53(); // WEE53
  _gt_NEWHEADXY(); // >NEWHEADXY
  _dash_ENDURIUM(); // -ENDURIUM
  IsHYPER(); // ?HYPER
  if (Pop() != 0)
  {
    Push(Read16(pp_IsNEB)); // ?NEB @
    Push(pp_WDA12); // WDA12
    Store_3(); // !_3
    IsIN_dash_NEB(); // ?IN-NEB
    Push(pp_IsNEB); // ?NEB
    Store_3(); // !_3
  }
  Push(Read16(pp_IsNEB)); // ?NEB @
  if (Pop() != 0)
  {
    SHP_gt_C(); // SHP>C
    Push((Read16(0x63ef+WDA42.offset)&0xFF) & 8); // WDA42<IFIELD> C@ 8 AND
    ICLOSE(); // ICLOSE
  } else
  {
    Push(0);
  }
  DrawMVS(); // .MVS
  if (Pop() != 0)
  {
    Push(0xcb4e); // 'OV-SH'
    MODULE(); // MODULE
  }
  WEE9B(); // WEE9B
}


// ================================================
// 0xef0f: WORD 'WEF11' codep=0x224c parp=0xef11 params=2 returns=2
// ================================================

void WEF11() // WEF11
{
  Push(Read16(Pop())); //  @
  Push(Pop() + Pop()); // +
  Push(-Read16(cc_SYSRADIUS) - 0x000c); // SYSRADIUS NEGATE 0x000c -
  IsHYPER(); // ?HYPER
  Push(!Pop()); //  NOT
  Push(Pop() * Pop()); // *
  MAX(); // MAX
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
}


// ================================================
// 0xef2b: WORD 'SET-DESTINATION' codep=0x224c parp=0xef37
// ================================================

void SET_dash_DESTINATION() // SET-DESTINATION
{
  Push(Read16(regsp)); // DUP
  Push(Pop()==0x0152?1:0); //  0x0152 =
  OVER(); // OVER
  Push((Pop()==0?1:0) & Read16(pp_FORCEKEY)); //  0= FORCEKEY @ AND
  Push(Pop() | Pop()); // OR
  Push(Read16(pp_SKEY)); // SKEY @
  Push(0x005b);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  Push(pp_FORCEKEY); // FORCEKEY
  Store_3(); // !_3
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(pp_SKEY)); // SKEY @
    Push(Read16(regsp)); // DUP
    Push(pp_LKEY); // LKEY
    Store_3(); // !_3
  }
  _ro_XYSCAN_rc_(); // (XYSCAN) case
  Push(Read16(pp_SKEY)); // SKEY @
  Push(0x005b);
  _gt_(); // >
  if (Pop() != 0)
  {
    ACCELERATE(); // ACCELERATE
  } else
  {
    Push(1);
    Push(pp_KEYINC); // KEYINC
    Store_3(); // !_3
    Push(0x0060);
    Push(Read16(pp_ESPEED)); // ESPEED @
    _slash_(); // /
    Push(pp__n_ACC); // #ACC
    Store_3(); // !_3
  }
  Push(Read16(pp_KEYINC)); // KEYINC @
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Pop() * Pop()); // *
  Push(pp_XABS); // XABS
  WEF11(); // WEF11
  Push(Pop() * 0x00f9); //  0x00f9 *
  MIN(); // MIN
  Push(pp_XCRS); // XCRS
  Store_3(); // !_3
  Push(Pop() * Pop()); // *
  Push(pp_YABS); // YABS
  WEF11(); // WEF11
  Push(Pop() * 0x00db); //  0x00db *
  MIN(); // MIN
  Push(pp_YCRS); // YCRS
  Store_3(); // !_3
  Push(Read16(pp_FORCEKEY)); // FORCEKEY @
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(pp_FORCEKEY); // FORCEKEY
    OFF(); // OFF
  }
  Push(Read16(pp_FTRIG)); // FTRIG @
  Push2Words("NULL");
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  D_eq_(); // D=
  IsHYPER(); // ?HYPER
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Pop() | Read16(pp_IsAUTO)); //  ?AUTO @ OR
  if (Pop() != 0)
  {
    Push(!Pop()); //  NOT
    _i_KEY(); // 'KEY
    Pop(); // DROP
  }
  FLY(); // FLY
}


// ================================================
// 0xeff7: WORD 'SETUP-MOV' codep=0x224c parp=0xf003
// ================================================

void SETUP_dash_MOV() // SETUP-MOV
{
  Push(pp_FORCEPTASK); // FORCEPTASK
  ON_3(); // ON_3
  Push(pp_FORCEKEY); // FORCEKEY
  OFF(); // OFF
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_VSTIME); // VSTIME
  StoreD(); // D!
  Push(0xbf98); // '?VCYCLE'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  Store_3(); // !_3
  Push(0xbf68); // '.SORD'
  Push(pp__i__dot_VEHICLE_dash_STATUS); // '.VEHICLE-STATUS
  Store_3(); // !_3
  Push(pp_IsAUTO); // ?AUTO
  OFF(); // OFF
  SHP_gt_C(); // SHP>C
  Push(Read16(0x63ef+_pe_HEADING.offset)&0xFF); // %HEADING<IFIELD> C@
  Push(pp_HEADING); // HEADING
  Store_3(); // !_3
  Push(0xbd4a); // '=CARGO'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  StoreS_slash_A(); // !S/A
  Push(8);
  Push(0xbdd8); // 'OV?ARTIFACT'
  MODULE(); // MODULE
  Push(Pop() >> 4); //  16*
  Push(pp_IsHAS_dash_RING_dash_DEVICE); // ?HAS-RING-DEVICE
  Store_3(); // !_3
  CTXT_n_(); // CTXT#
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    Push(6);
    Push(0xc9b6); // 'USM'
    MODULE(); // MODULE
  }
  Push2Words("*ASSIGN-CREW");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+NAV.offset); // NAV<IFIELD>
  Get_gt_C_plus_S(); // @>C+S
  Push(Read16(0x63ef+_h_NAV.offset)&0xFF); // ^NAV<IFIELD> C@
  Push(pp_NAV_dash_SKILL); // NAV-SKILL
  Store_3(); // !_3
  _2ICLOSE(); // 2ICLOSE
  SET_dash__i_EXTERNAL(); // SET-'EXTERNAL
  _gt_CONS_dash_DISP(); // >CONS-DISP
  Push(Read16(pp_HEADING)); // HEADING @
  GetXYABS(); // @XYABS
  CTXT_n_(); // CTXT#
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    Push(6);
    Push(0xc9a8); // 'UFM'
    MODULE(); // MODULE
    Push(Read16(pp_HEADING)); // HEADING @
    Push(1);
    _n_VECTXY(); // #VECTXY
    _gt_NEWHEADXY(); // >NEWHEADXY
  } else
  {
    _ro__ask_NEWHEADXY_rc_(); // (?NEWHEADXY)
  }
  _0XYCRS(); // 0XYCRS
  FLY(); // FLY
}


// ================================================
// 0xf09f: WORD 'CLEANUP-MOV' codep=0x224c parp=0xf0ab
// ================================================

void CLEANUP_dash_MOV() // CLEANUP-MOV
{
  Push(pp_FORCEPTASK); // FORCEPTASK
  OFF(); // OFF
  Push(pp_FORCEKEY); // FORCEKEY
  OFF(); // OFF
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(6);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(pp__10_star_END); // 10*END
    _2_at_(); // 2@
    Push(0x000a);
    U_slash_MOD(); // U/MOD
    SWAP(); // SWAP
    _0_gt_(); // 0>
    Push(Pop() + Pop()); // +
    Push(0x63ef+INST_dash_QTY.offset); // INST-QTY<IFIELD>
    Store_3(); // !_3
  }
  Push(0xbd4a); // '=CARGO'
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  _2ICLOSE(); // 2ICLOSE
  CTXT_n_(); // CTXT#
  Push(Pop()==1?1:0); //  1 =
  if (Pop() != 0)
  {
    ORBUP(); // ORBUP
  }
  IsXIDENC(); // ?XIDENC
  if (Pop() != 0)
  {
    Push(0xc9ef); // 'DMSG'
    MODULE(); // MODULE
  }
  Push(0xc104); // '?SHIP-REPAIR'
  Push(pp__i_VEHICLE_dash_CYCLE); // 'VEHICLE-CYCLE
  Store_3(); // !_3
  Push(pp_IsAUTO); // ?AUTO
  ON_3(); // ON_3
  SAVE_dash_OVERLAY(); // SAVE-OVERLAY
}


// ================================================
// 0xf119: WORD 'CHK-MOV' codep=0x224c parp=0xf125
// ================================================
// entry

void CHK_dash_MOV() // CHK-MOV
{
  Push(0);
  Push2Words("*STARSHIP-HOLD");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x001a);
    Push(6);
    IFIND(); // IFIND
    Push(Pop() * Read16(0x63ef+INST_dash_QTY.offset)); //  INST-QTY<IFIELD> @ *
    Push(0x000a);
    U_star_(); // U*
    CDROP(); // CDROP
  } else
  {
    Push2Words("NULL");
  }
  _2DUP(); // 2DUP
  Push(pp__10_star_END); // 10*END
  StoreD(); // D!
  _2ICLOSE(); // 2ICLOSE
  D0_eq_(); // D0=
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(5);
    Push(0xbdef); // 'OV?.EQUIP-OK'
    MODULE(); // MODULE
    if (Pop() != 0)
    {
      CTXT_n_(); // CTXT#
      Push(1);
      Push(5);
      WITHIN(); // WITHIN
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        CTINIT(); // CTINIT
        SET_STR_AS_PARAM("STANDING BY TO LAUNCH");
        DrawTTY(); // .TTY
      } else
      {
        Push(Pop() + 1); //  1+
      }
    }
    return;
  }
  Push(1);
  Push(0xc9e0); // '.EX'
  MODULE(); // MODULE
}


// ================================================
// 0xf1b3: WORD 'WF1B5' codep=0x224c parp=0xf1b5
// ================================================

void WF1B5() // WF1B5
{
  CTXT_n_(); // CTXT#
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(1);
    Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
    Store_3(); // !_3
  }
  Push(0x003a);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  Push(1);
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  SET_STR_AS_PARAM("LAUNCH");
  LoadData(_1BTN); // from 'BUTTONS'
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf1e4: WORD '+NEST' codep=0x224c parp=0xf1ee
// ================================================
// entry

void _plus_NEST() // +NEST
{
  _2DUP(); // 2DUP
  Push(pp__ro_COLLIDE_rc_); // (COLLIDE)
  _1_dot_5_ex_(); // 1.5!
  NEST(); // NEST
}


// ================================================
// 0xf1f8: WORD 'COME-HITHER' codep=0x224c parp=0xf204
// ================================================
// entry

void COME_dash_HITHER() // COME-HITHER
{
  GetColor(BLUE);
  Push(pp_TCLR); // TCLR
  Store_3(); // !_3
  WF1B5(); // WF1B5
  while(1)
  {
    IsHYPER(); // ?HYPER
    Push(!Pop()); //  NOT
    Push(pp__ro_SYSTEM_rc_); // (SYSTEM)
    _1_dot_5_at_(); // 1.5@
    Push2Words("*ASYS");
    D_eq_(); // D=
    Push(!Pop()); //  NOT
    Push(Pop() & Pop()); // AND
    CTXT_n_(); // CTXT#
    Push(2);
    _st_(); // <
    Push(Pop() | Pop()); // OR
    if (Pop() == 0) break;

    UNNEST(); // UNNEST
  }
  Push(pp_IsNEB); // ?NEB
  OFF(); // OFF
  IsHYPER(); // ?HYPER
  if (Pop() != 0)
  {
    Push2Words("*ASYS");
    _plus_NEST(); // +NEST
  }
  SYS_gt_C(); // SYS>C
  IOPEN(); // IOPEN
  while(1)
  {
    Push(!(Read16(0x63ef+INST_dash_QTY.offset)==3?1:0)); // INST-QTY<IFIELD> @ 3 = NOT
    if (Pop() == 0) break;

    INEXT(); // INEXT
  }
  CI(); // CI
  _2ICLOSE(); // 2ICLOSE
  _plus_NEST(); // +NEST
  Push2Words("*SHIP-CONFIG");
  _plus_NEST(); // +NEST
  GetColor(WHITE);
  Push(pp_TCLR); // TCLR
  Store_3(); // !_3
}

// 0xf266: db 0x53 0x48 0x50 0x4d 0x4f 0x56 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x49 0x58 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x36 0x2f 0x31 0x30 0x2f 0x38 0x36 0x29 0x32 0x34 0x30 0x31 0x4c 0x22 0x5d 0x17 0x5d 0xeb 0x44 0xec 0xa8 0xee 0x89 0x12 0xfa 0x15 0x2c 0x00 0xaf 0x53 0xae 0x0b 0x07 0x13 0xfa 0x15 0x0c 0x00 0x83 0x3b 0x5d 0x17 0xef 0xbd 0xce 0x84 0x32 0x0e 0x5d 0x17 0x62 0xeb 0xd3 0x7c 0x5d 0x17 0x80 0x00 0x3e 0x13 0x5d 0x17 0x62 0xeb 0xed 0x7c 0xaf 0x53 0xb7 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x67 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x71 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x85 0xeb 0x44 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0x7b 0xeb 0x44 0xec 0xf8 0xee 0x89 0x12 0xfa 0x15 0x08 0x00 0xbb 0xea 0xae 0x0b 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x8f 0xeb 0x44 0xec 0x90 0x16 0x0c 0xef 0x88 0x23 0x3e 0x44 0x41 0x4d 0x41 0xc7 0x4f 0x4a 0x08 0x00 0x34 0x0e 0x01 0x00 0xa2 0xf2 0x02 0x00 0xac 0xf2 0x03 0x00 0xe8 0xf2 0x04 0x00 0xf2 0xf2 0x05 0x00 0xfc 0xf2 0x06 0x00 0x1e 0xf3 0x07 0x00 0xe0 0xf0 0x08 0x00 0x06 0xf3 0x4c 0x22 0x41 0x0e 0x2e 0x0f 0xf2 0x0e 0xe7 0x0f 0xd8 0x4a 0x5d 0x17 0x0a 0x00 0x89 0x11 0x41 0x0e 0xb4 0x0d 0x92 0x0f 0x20 0x0f 0x89 0x11 0x90 0x0e 0x90 0x16 0x4c 0x22 0x88 0xec 0xfa 0x15 0x08 0x00 0x46 0xf2 0x60 0x16 0x1e 0x00 0xa1 0xeb 0xae 0x0b 0xfa 0x15 0x08 0x00 0x68 0xf2 0x60 0x16 0x10 0x00 0x5d 0x17 0x0a 0x00 0x51 0xeb 0x92 0x0c 0xc4 0x0f 0x74 0xef 0x30 0xf3 0x90 0x16 0x4c 0x22 0xc8 0x0d 0x89 0x12 0x07 0x13 0xfa 0x15 0x0a 0x00 0x56 0xf3 0x76 0xf3 0x60 0x16 0xf0 0xff 0x98 0xed 0xae 0x0b 0xfa 0x15 0x10 0x00 0x2c 0xf0 0x5d 0x17 0x12 0xc0 0xce 0x84 0x5d 0x17 0x3f 0xc0 0xce 0x84 0xf0 0xec 0x5d 0x17 0x53 0xeb 0xd3 0x7c 0x89 0x12 0xfa 0x15 0x04 0x00 0x25 0xee 0xfe 0xee 0x89 0x12 0xfa 0x15 0x04 0x00 0x44 0xee 0x90 0x16 0x4c 0x22 0x34 0xed 0x05 0x10 0xf3 0xea 0xa2 0xf3 0xc9 0x79 0x90 0x16 0x4c 0x22 0xd8 0xeb 0x6a 0x6d 0xdc 0xeb 0xac 0x6d 0x90 0x16 0x4c 0x22 0xa1 0x8b 0x17 0x85 0xe9 0x89 0x08 0xec 0x6e 0x99 0xb2 0x99 0xf2 0x0e 0x73 0x3b 0x72 0x0f 0xf2 0x0e 0x73 0x3b 0x92 0x0f 0x0f 0x62 0xae 0x0b 0x8b 0x3b 0xad 0x11 0x3d 0x0f 0xb8 0x15 0xf0 0x0d 0x50 0x0e 0x5c 0x96 0x3d 0x0f 0x5c 0x15 0xf6 0xff 0xde 0x0d 0xab 0x90 0x90 0x16 0x4c 0x22 0x02 0xf4 0x28 0xa5 0x05 0x8a 0xcf 0x8b 0xe2 0xeb 0x41 0x0e 0x8b 0x3b 0x5f 0x12 0xfa 0x15 0x18 0x00 0x32 0x0e 0x39 0x3f 0x0b 0x50 0x4c 0x41 0x53 0x4d 0x41 0x20 0x42 0x4f 0x4c 0x54 0x47 0xa5 0x60 0x16 0x17 0x00 0x39 0x3f 0x0e 0x4d 0x49 0x53 0x53 0x49 0x4c 0x45 0x20 0x43 0x4c 0x41 0x53 0x53 0x20 0x47 0xa5 0xb8 0x27 0x90 0x16 0x4c 0x22 0xf6 0xf3 0xf3 0xea 0x89 0x4f 0x02 0xf4 0x08 0xec 0x38 0xf2 0xb4 0x0d 0xf3 0x59 0xae 0x0b 0x94 0x9d 0xc8 0x0d 0xfa 0x15 0x44 0x00 0xa2 0x0e 0xf2 0x0e 0x20 0x0f 0xb8 0x15 0x41 0x0e 0xb3 0x0e 0xe8 0x9c 0x12 0x9b 0x22 0x9b 0xf2 0x79 0x1e 0x75 0x5d 0x17 0x14 0x00 0x5f 0x12 0x07 0x13 0xfa 0x15 0x18 0x00 0x27 0xeb 0x92 0x0c 0xfa 0x15 0x08 0x00 0x98 0xf1 0x60 0x16 0x06 0x00 0x32 0x0e 0xc9 0x79 0x60 0x16 0x06 0x00 0x32 0x0e 0xc9 0x79 0xd0 0x15 0xca 0xff 0x32 0x0e 0x90 0x0e 0x32 0x0e 0xc9 0x79 0x90 0x16 0x4c 0x22 0xf6 0xf3 0x38 0x4f 0x3a 0xf4 0x38 0xf2 0xf3 0xea 0xa2 0xf3 0xc9 0x79 0x90 0x16 0x4c 0x22 0xfa 0x15 0x08 0x00 0x7d 0xf4 0x60 0x16 0x04 0x00 0xe3 0xf4 0x90 0x16 0x4c 0x22 0xfa 0x15 0x08 0x00 0xea 0xf1 0x60 0x16 0x04 0x00 0xe8 0xf3 0x90 0x16 0x20 0xf2 0x89 0x44 0x4f 0x2d 0x44 0x41 0x4d 0xc1 0x4c 0x22 0xfa 0x15 0x08 0x00 0xf5 0xf4 0x60 0x16 0x04 0x00 0x05 0xf5 0x90 0x16 0x44 0x41 0x4d 0x41 0x47 0x45 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'SHPMOV-_________________________IX ---------------------6/10/86)2401L"] ] D       ,  S         ;]     2 ] b  |]   > ] b  | S m  L"] g D   L"] q D   L"]   D   L"] { D                 L"]   D      #>DAMA OJ  4                                 L"A .      J]     A             L"      F `           h `   ]   Q     t 0   L"          V v `           , ]     ] ?     ] S  |      %         D   L"4        y  L"  jm   m  L"        n     s;r   s;   b   ;  =     P \ = \         L"  (       A  ;_     2 9? PLASMA BOLTG `   9? MISSILE CLASS G  '  L"     O    8    Y        D         A       "  y u]   _       '         `   2  y`   2  y    2   2  y  L"  8O: 8      y  L"    } `       L"      `          DO-DAM L"      `       DAMAGE-_________________________----------------- '

