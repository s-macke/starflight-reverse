
#include "global.h"
#include<stdio.h>

#ifdef STARFLT1

WORDRENAME renamewords[] =
{
    {0x21, 0xd9a0, "ENC>C"}, // Wd9a0
    {0x21, 0xd998, "SYS>C"}, // Wd998
    {0x21, 0xd990, "ORB>C"}, // Wd990
    {0x21, 0xd980, "SHP>C"}, // "Wd980" HYPER-OV
    {0x21, 0xd988, "PLN>C"}, // "Wd988" HYPER-OV

    {0x21, 0xd9b0, "RCOLLIDE"}, // Wd9b0
    {0x21, 0xd9b4, "PRTRADIUS"}, // Wd9b4
    {0x21, 0xd9b8, "DEFRADIUS"}, // Wd9b8
    {0x21, 0xd9bc, "ORBRADIUS"}, // Wd9bc
    {0x21, 0xd9c0, "ENCRADIUS"}, // Wd9c0
    {0x21, 0xd9c4, "SYSRADIUS"}, // Wd9c4

    {0x21, 0xd9c8, "VISLENGTH"}, // Wd9c8
    {0x21, 0xd9cc, "VISWIDTH"}, // Wd9cc
    {0x21, 0xd9d0, "BVISOFF"}, // Wd9d0
    {0x21, 0xd9d4, "LVISOFF"}, // Wd9d4
    {0x21, 0xd9dc, "(RADIUS)"}, // Wd9dc

    {0x21, 0xdaa8, "CTXT#"}, // "Wdaa8"
    {0x21, 0xe1af, ">[CONTEXT]"}, // "We1af"
    {0x21, 0xe1d3, "![CONTEXT]"}, // "We1d3"
    {0x21, 0xe21a, "#CPARMS"}, // "We21a"
    {0x21, 0xe23a, "!CPARMS"}, // "We23a"
    {0x21, 0xdc9c, ">CONS-DISP"}, // "Wdc9c"
    {0x21, 0xedc2, "?DOUBLE-UNNEST"}, // "Wedc2" HYPER-OV
    {0x21, 0xed6c, "?UNNEST"}, // "Wed6c" HYPER-OV
    {0x21, 0xda92, "@XYABS"}, // "Wda92" HYPER-OV
    {0x21, 0xeca9, "?STARPORT"}, // "Weca9" HYPER-OV
    {0x21, 0xda60, "FLAREDATE"}, // "Wda60" HYPER-OV
    {0x21, 0xec5d, "?2NEST.ETC"}, // "Wec5d" HYPER-OV
    {0x21, 0xeb97, "?COLLISION"}, // "Web97" HYPER-OV
    {0x21, 0xe9a5, "NEST-SETUP"}, // "NEST-SE"
    {0x21, 0xed32, "UNNEST-CLEAN"}, // "UNNEST-"
    {0x21, 0xed48, "UNNEST-SPACEXY"}, // "Wed48"
    {0x21, 0xee87, "(GET-AUX"}, // "(GET-AU"
    {0x21, 0xef37, "SET-DESTINATION"}, // "SET-DES"
    {0x21, 0xf003, "SETUP-MOV"}, // "SETUP-M"
    {0x21, 0xf0ab, "CLEANUP-MOV"}, // "CLEANUP"
    {0x21, 0xf204, "COME-HITHER"}, // "COME-HI"
    {0x21, 0xd976, "SET-'EXTERNAL"}, // Wd976
    {0x21, 0xeb1d, ">FLUX-NODE"}, // Web1d
    {0x21, 0xea5a, ">ENCOUNTER"}, // Wea5a
    {0x21, 0xeb6d, "?-*BOX"}, // Web6d
    {0x21, 0xea80, "?BOX-NEST"}, // Wea80
    {0x21, 0xeaa4, "SET-FLUX-STATE"}, // Weaa4
    {0x21, 0xda72, "@COORDS"}, // Wda72
    {0x21, 0xd9a8, "2ICLOSE"}, // Wd9a8
    {0x21, 0xe93f, "!S/A"}, // We93f
    {0x21, 0xda0a, "ESPEED"}, // Wda0a
    {0x21, 0xd9d8, "MAXSPEED"}, // Wd9d8
    {0x21, 0xe929, "!MAXSPEED"}, // We929
    {0x21, 0xdc45, "CHARGE-D"}, // Wdc45
    {0x21, 0xdd6a, "ENCSETUP"}, // Wdd6a
    {0x21, 0xddc4, "PRTSETUP"}, // Wddc4
    {0x21, 0xda02, "'AUX-CLEAN"}, // Wda02
    {0x21, 0xda0e, "?HW"}, // Wda0e
    {0x21, 0xdcc6, "ENCCLEANUP"}, // Wdcc6
    {0x21, 0xda86, "!XYTRNS"}, // Wda86
    {0x21, 0xe6f8, "#NEWHEADXY"}, // We6f8
    {0x21, 0xe728, "DWITHIN"}, // We728
    {0x21, 0xe742, "(-ENDURIUM)"}, // We742
    {0x21, 0xe7ec, "-ENDURIUM"}, // We7ec
    {0x21, 0xe85e, "?IN-NEB"}, // We85e
    {0x21, 0xe8f2, "#VES-SPEED"}, // We8f2
    {0x21, 0xe906, "TWELVE"}, // We906
    {0x21, 0xe921, "#ACC"}, // We921
    {0x21, 0xe925, "KEYINC"}, // We925
    {0x21, 0xe95f, "ACCELERATE"}, // We95f



    {0x21, 0xda1a, "%ACC"}, // Wda1a
    {0x21, 0xda1f, "%HEADING"}, // Wda1f
    {0x21, 0xda24, "%ENGINE"}, // Wda24
    {0x21, 0xda29, "%ACLASS"}, // Wda29
    {0x21, 0xda2e, "SCNT"}, // Wda2e
    {0x21, 0xda33, "%SCLASS"}, // Wda33
    {0x21, 0xda38, "ACNT"}, // Wda38
    {0x21, 0xda47, "DEST-X"}, // Wda47
    {0x21, 0xda4c, "DEST-Y"}, // Wda4c
    {0x21, 0xda51, "?HOME-PLANET"}, // Wda51
    //{0x21, 0xda56, "?ENCOUNTER-ON"}, // Wda56
    {0x21, 0xda5b, "ORBIT-MASK"}, // Wda5b
    {0x21, 0xda6d, "BET"}, // Wda6d

    {0x21, 0xdbd2, "MAX#SHIPS"}, // Wdbd2
    {0x21, 0xdbd7, "#SHIPS-DESTROYED"}, // Wdbd7
    {0x21, 0xdbdc, "BASE-EDL"}, // Wdbdc
    {0x21, 0xdbe1, "NAV"}, // Wdbe1
    {0x21, 0xdbe6, "^NAV"}, // Wdbe6

    {0x21, 0xe01f, ".SUN"}, // We01f
    {0x21, 0xe033, ".PLANET"}, // We033
    {0x21, 0xdade, "?PLANET"}, // Wdade
    {0x21, 0xdb72, ".AUXSHIP"}, // Wdb72
    {0x21, 0xdab0, "!XYSHP"}, // Wdab0
    {0x21, 0xda7c, "!COORDS"}, // Wda7c
    {0x21, 0xda9e, "@XYSHP"}, // Wda9e
    {0x21, 0xdac6, "?XIDENC"}, // Wdac6
    {0x21, 0xdaba, "!%HEADING"}, // Wdaba
    {0x21, 0xd9fa, "YCRS"}, // Wd9fa
    {0x21, 0xd9f6, "XCRS"}, // Wd9f6
    {0x21, 0xdad0, "0XYCRS"}, // Wdad0
    {0x21, 0xdaea, "?*ORPLAN"}, // Wdaea
    {0x21, 0xdafa, "?HYPER"}, // Wdafa
    {0x21, 0xd9f0, "(COLLIDE)"}, // Wd9f0
    {0x21, 0xdb04, "ORBSETUP"}, // Wdb04
    {0x21, 0xe107, "SYSSETUP"}, // We107
    {0x21, 0xe9bb, "NEST-SPACEXY"}, // We9bb
    {0x21, 0xe684, "#NEXTXY"}, // We684
    {0x21, 0xe560, ">NEWHEADXY"}, // We560
    {0x21, 0xddda, "PRTCLEANUP"}, // Wddda
    {0x21, 0xddf2, "MAKE-STAR"}, // Wddf2
    {0x21, 0xde12, "KILL-STAR"}, // Wde12
    {0x21, 0xde32, "GET-ORBIT#"}, // Wde32
    {0x21, 0xde2a, "PREV-ORBIT"}, // Wde2a
    {0x21, 0xde2e, "ORBITs"}, // Wde2e
    {0x21, 0xde5e, "(>ORBIT)"}, // Wde5e
    {0x21, 0xdeac, "ORBIT>"}, // Wdeac
    {0x21, 0xded6, ">ORBITS"}, // Wded6
    {0x21, 0xdef6, "?-ORBIT"}, // Wdef6
    {0x21, 0xdfdc, "SETPLNXY"}, // Wdfdc
    {0x21, 0xdfb0, "OCOORDS"}, // Wdfb0
    {0x21, 0xdf40, "SETRNDXY"}, // Wdf40
    {0x21, 0xe12b, "SYSCLEANUP"}, // We12b
    {0x21, 0xd9e0, "[CONTEXT]"}, // Wd9e0
    {0x21, 0xe1cb, "CTX>C"}, // We1cb
    {0x21, 0xe293, ".COORDINATES"}, // We293
    {0x21, 0xe1a1, "?CAN-NAVIGATE"}, // We1a1
    {0x21, 0xe2fb, "XBND"}, // We2fb
    {0x21, 0xe2ff, "YBND"}, // We2ff
    {0x21, 0xe303, "XLIM"}, // We303
    {0x21, 0xe307, "YLIM"}, // We307
    {0x21, 0xe30b, "SDUST"}, // We30b
    {0x21, 0xe325, ">DUST"}, // We325
    {0x21, 0xe351, "?DUST"}, // We351
    {0x21, 0xe375, "(.DUST)"}, // We375
    {0x21, 0xe3c9, ".DUST"}, // We3c9
    {0x21, 0xe442, ".FLUX-ICON"}, // We442
    {0x21, 0xd9fe, "NAV-SKILL"}, // Wd9fe
    {0x21, 0xda06, "?HAS-RING-DEVICE"}, // Wda06
    {0x21, 0xe155, "RNDCPT"}, // We155
    {0x21, 0xe4ba, "?CHANGEXY"}, // We4ba
    {0x21, 0xe4fa, "(?NEWHEADXY)"}, // We4fa
    {0x21, 0xe570, "#SLOPE"}, // We570
    {0x21, 0xe58e, "#RELXY"}, // We58e
    {0x21, 0xe59e, "#QUAD"}, // We59e
    {0x21, 0xe5ee, "#HEADING"}, // We5ee
    {0x21, 0xe65e, "HEADDXDY"}, // We65e
    {0x21, 0xe670, "#HEADDXDY"}, // We670
    {0x21, 0xe6a0, "#VECTXY"}, // We6a0
    {0x21, 0xe6be, "#DIST"}, // We6be
    {0x21, 0xe6e4, "#SPEED"}, // We6e4


    {0x2a, 0xdfda, "VECTORERRORS"}, // "VECTOR"
    {0x2a, 0xee15, "LOAD.GAME"}, // "LOAD.G"
    {0x2a, 0xef5a, "SET.DISPLAY.MODE"}, // "SET.DI"
    {0x2a, 0xf0ae, "POLICE.WARNING"}, // "POLICE"
    {0x2a, 0xf51d, "GAMEOPS"}, // "GAMEOP"
    {0x2a, 0xf4dc, ">GAMEOPTIONS"}, // "Wf4dc"
    {0x2a, 0xf4ec, "GAMEOPTIONS"}, // "Wf4ec"
    {0x2a, 0xf504, "<GAMEOPTIONS"}, // "Wf504"
    {0x2a, 0xf538, "START.GAME"}, // "START."
    {0xff, 0x09d6, "INITIAL-DPB"}, // "INITIAL-DP"
    {0xff, 0x30a8, "ADVANCE>DEF"}, // "ADVANCE"
    {0xff, 0x4cca, "SPHEREWRAP"}, // "SPHEREW"
    {0xff, 0x4cd8, "SIGNEXTEND"}, // "SIGNEXT"
    {0xff, 0x4d50, "ACELLADDR"}, // "ACELLAD"
    {0xff, 0x4da4, "!OFFSETS"}, // "!OFFSET"
    {0xff, 0x4e13, "SETLARRAY"}, // "SETLARR"
    {0xff, 0x4e75, "FULLARRAY"}, // "FULLARR"
    {0xff, 0x4e8f, "SETREGION"}, // "SETREGI"
    {0xff, 0x4ead, "FILLREGION"}, // "FILLREG"
    {0xff, 0x4f26, "DK-GREEN"}, // "DK-GREE"
    {0xff, 0x4f7e, "LT-GREEN"}, // "LT-GREE"
    {0xff, 0x4ffb, "IHEADLEN"}, // "IHEADLE"
    {0xff, 0x5015, "*MAPSCALE"}, // "*MAPSCA"
    {0xff, 0x50c2, "DBUF-SIZE"}, // "DBUF-SI"
    {0xff, 0x5188, "INACTIVE"}, // "INACTIV"
    {0xff, 0x5198, "FRAGMENT"}, // "FRAGMEN"
    {0xff, 0x51b6, "*ASSIGN-CREW"}, // "*ASSIGN"
    {0xff, 0x5351, "A-STRENGTH"}, // "A-STREN"
    {0xff, 0x536c, "TIMESTAMP"}, // "TIMESTA"
    {0xff, 0x537a, "RELAXTIME"}, // "RELAXTI"
    {0xff, 0x5540, "'.FLUX-ICON"}, // "'.FLUX-"
    {0xff, 0x55d8, "HBUF-SEG"}, // "HBUF-SE"
    {0xff, 0x55e6, "DBUF-SEG"}, // "DBUF-SE"
    {0xff, 0x5858, "LOCRADIUS"}, // "LOCRADI"
    {0xff, 0x58cd, "TILE-PTR"}, // "TILE-PT"
    {0xff, 0x58db, "?FUEL-DIE"}, // "?FUEL-D"
    {0xff, 0x58e9, "?G-AWARE"}, // "?G-AWAR"
    {0xff, 0x5979, "GLOBALSEED"}, // "GLOBALS"
    {0xff, 0x5ae7, "FORCEPTASK"}, // "FORCEPT"
    {0xff, 0x5c13, "SKIP2NEST"}, // "SKIP2NE"
    {0xff, 0x5d0a, "FORCEKEY"}, // "FORCEKE"
    {0xff, 0x5d31, "[#CACHE]"}, // "[#CACHE"
    {0xff, 0x5d5a, "LINE-COUNT"}, // "LINE-CO"
    {0xff, 0x5e74, "STARDATE"}, // "STARDAT"
    {0xff, 0x5e82, "TIME-PASSING"}, // "TIME-PA"
    {0xff, 0x5eed, "[KEYINT]"}, // "[KEYINT"
    {0xff, 0x5f32, "'.VEHICLE-STATUS"}, // "'.VEHIC"
    {0xff, 0x5f40, "'VEHICLE-CYCLE"}, // "'VEHICL"
    {0xff, 0x5f5c, "'EXTERNAL-EVENTS"}, // "'EXTERN"
    {0xff, 0x60ca, "10*CARGO"}, // "10*CARG"
    {0xff, 0x60da, "SENSE-ADDR"}, // "SENSE-A"
    {0xff, 0x6126, "ENC-TIME"}, // "ENC-TIM"
    {0xff, 0x6136, "NAV-TIME"}, // "NAV-TIM"
    {0xff, 0x61d2, "BOX-IADDR"}, // "BOX-IAD"
    {0xff, 0x6201, "LAST-UPDATE"}, // "LAST-UP"
    {0xff, 0x6211, "XWLD:XPIX"}, // "XWLD:XP"
    {0xff, 0x6221, "YWLD:YPIX"}, // "YWLD:YP"
    {0xff, 0x6230, "ANCHOR-CONTOUR"}, // "ANCHOR"
    {0xff, 0x626f, "TVEHICLE"}, // "TVEHICL"
    {0xff, 0x628f, "SUPER-BOX"}, // "SUPER-B"
    {0xff, 0x62bf, "(PLANET)"}, // (PLANET
    {0xff, 0x629f, "(SYSTEM)"}, // (SYSTEM
    {0xff, 0x62df, "(ENCOUNTER)"}, // "(ENCOUN"
    {0xff, 0x62ef, "(SHIPBOX)"}, // "(SHIPBO"
    {0xff, 0x62ff, "(AORIGINATOR"}, // "(AORIGI"
    {0xff, 0x6a99, "MERCATOR"}, // "MERCATO"
    {0xff, 0x6aad, "CONANCHOR"}, // "CONANCH"
    {0xff, 0x6b31, "GVERTEX>GRIDCOLOR"}, // "GVERTEX"
    {0xff, 0x6b57, "GRIDCOLOR"}, // "GRIDCOL"
    {0xff, 0x6b7e, "9X9COARSE"}, // "9X9COAR"
    {0xff, 0x6b92, "9X9FINE>GVERTEX"}, // "9X9FINE"
    {0xff, 0x6ba6, "XFORMVERT"}, // "XFORMVE"
    {0xff, 0x6c04, "*SHIP-CONFIG"}, // "*SHIP-C"
    {0xff, 0x6c52, "*STARSHIP-HOLD"}, // "*STARSH"
    {0xff, 0x6c62, "'VERSIONERR"}, // "'VERSIO"
    {0xff, 0x6f0f, ":VERSION"}, // ":VERSIO"
    {0xff, 0x6eda, ":SIGNATURE"}, // ":SIGNAT"
    {0xff, 0x6ee8, ":TIMESTAMP"}, // ":TIMEST"
    {0xff, 0x74ab, "INST-QTY"}, // "INST-QT"
    {0xff, 0x74f6, "!INST-SPECIES"}, // "!INST-S"
    {0xff, 0x74e4, "!INST-CLASS"}, // "W74e4"
    {0xff, 0x7520, "@INST-CLASS"}, // "@INST-C"
    {0xff, 0x7532, "@INST-SPECIES"}, // "@INST-S"
    {0xff, 0x798c, "SET-CURRENT"}, // "SET-CUR"
    {0xff, 0x7b4f, "SAVE-BUFFERS"}, // "SAVE-BU"
    {0xff, 0x7bf5, "IEXTRACT"}, // "IEXTRAC"
    {0xff, 0x7c49, "@NEWSPACE"}, // "@NEWSPA"
    {0xff, 0x7c5b, "!NEWSPACE"}, // "!NEWSPA"
    {0xff, 0x7c79, "MAXSPACE"}, // "MAXSPAC"
    {0xff, 0x7eae, ">INACTIVE"}, // ">INACTI"
    {0xff, 0x7f8b, "NULLPOINTERS"}, // "NULLPOI"
    {0xff, 0x82a6, "OV-CANCEL"}, // "OV-CANC"
    {0xff, 0x83aa, "SAVE-OVERLAY"}, // "SAVE-OV"
    {0xff, 0x8427, "OPEN-OVERLAY"}, // "OPEN-OV"
    {0xff, 0x84b9, "CLOSE-OVERLAY"}, // "CLOSE-O"
    {0xff, 0x8891, "SCANPOLY"}, // "SCANPOL"
    {0xff, 0x89a1, "SETCLIPWINDOW"}, // "SETCLIP"
    {0xff, 0x89eb, "VCLIPSET"}, // "VCLIPSE"
    {0xff, 0x8a07, "DCLIPSET"}, // "DCLIPSE"
    {0xff, 0x8a96, "?HERCULES"}, // "?HERCUL"
    {0xff, 0x8ba3, ">MAINVIEW"}, // ">MAINVI"
    {0xff, 0x8bd1, ">DISPLAY"}, // ">DISPLA"
    {0xff, 0x8e88, "|DISPLAY"}, // "|DISPLA"
    {0xff, 0x8d09, "DISPLAY-WAIT"}, // "DISPLAY"
    {0xff, 0x8eff, "SAVE-SCR"}, // "SAVE-SC"
    {0xff, 0x9055, "LFILLPOLY"}, // "LFILLPO"
    {0xff, 0x906b, "LCOPYBLK"}, // "LCOPYBL"
    {0xff, 0x9081, "TILEFILL"}, // "TILEFIL"
    {0xff, 0x90ad, "V>DISPLAY"}, // "V>DISPL"
    {0xff, 0x95d6, "BLK>BUFFER"}, // "BLK>BUF"
    {0xff, 0x9632, ".ELLIPSE"}, // ".ELLIPS"
    {0xff, 0x9674, "FILLELLIP"}, // "FILLELL"
    {0xff, 0x96ca, "FILLCIRC"}, // "FILLCIR"
    {0xff, 0x9778, "SET-COLORMAP"}, // "SET-COL"
    {0xff, 0x97cc, "COLORMAP"}, // "COLORMA"
    {0xff, 0x9805, "CELLCOLOR"}, // "CELLCOL"
    {0xff, 0x9841, "BUFFERXY"}, // "BUFFERX"
    {0xff, 0x9880, ".1X2CELL"}, // ".1X2CEL"
    {0xff, 0x989a, ".2X2CELL"}, // ".2X2CEL"
    {0xff, 0x98be, ".4X4CELL"}, // ".4X4CEL"
    {0xff, 0x98dc, ".8X8CELL"}, // ".8X8CEL"
    {0xff, 0x98dc, ".8X8CELL+R"}, // ".8X8CEL"
    {0xff, 0x98fa, ".REGION+"}, // ".REGION"
    {0xff, 0x99d4, "!VISWINDOW"}, // "!VISWIN"
    {0xff, 0x9a18, ">1ICONFONT"}, // ">1ICONF"
    {0xff, 0x9b98, "INIT-ICONLIST"}, // "INIT-IC"
    {0xff, 0x9cea, "POINT>ICON"}, // "POINT>I"
    {0xff, 0x9cfc, ".LOCAL-ICONS"}, // ".LOCAL-"
    {0xff, 0x9f42, "+ICONBOX"}, // "+ICONBO"
    {0xff, 0xa0f0, "POLY-WINDOW-FILL"}, // "POLY-WI"
    {0xff, 0xa424, "WLINE-UP"}, // "WLINE-U"
    {0xff, 0xa7a6, "ERASE-AUXILLARY"}, // "ERASE-A"
    {0xff, 0xa912, "SHIP-CONSOLE"}, // "SHIP-CO"
    {0xff, 0xabc6, "CURSORSPACE"}, // "CURSORS"
    {0xff, 0xad1b, "INST-VAL"}, // "INST-VA"
    {0xff, 0xad3a, "INST-DATE"}, // "INST-DA"
    {0xff, 0xad49, "RESEMBLES"}, // "RESEMBL"
    {0xff, 0xad5b, "BOX-NAME"}, // "BOX-NAM"
    {0xff, 0xad7a, "ORIG-NAME"}, // "ORIG-NA"
    {0xff, 0xad8c, "SPEC-NAME"}, // "SPEC-NA"
    {0xff, 0xadb0, "ELEM-NAME"}, // "ELEM-NA"
    {0xff, 0xadc2, "ELEM-VAL"}, // "ELEM-VA"
    {0xff, 0xadd4, "ART-NAME"}, // "ART-NAM"
    {0xff, 0xae18, "PHRASE-MEM"}, // "PHRASE"
    {0xff, 0xae67, "<CTVERSIONERROR>"}, // "<CTVERS"
    {0xff, 0xae85, "<CTASKMOUNT>"}, // "<CTASKM"
    {0xff, 0xb439, "INSTALLXKEY"}, // "INSTALL"
    {0xff, 0xb485, "RESTOREKEY"}, // "RESTORE"
    {0xff, 0xb4b1, "CFIGARRAYS"}, // "CFIGARR"
    {0xff, 0xbac4, "DATE$>ADR"}, // "DATE$>A"
    {0xff, 0xc104, "?SHIP-REPAIR"}, // "?SHIP-R"
    {0xff, 0xc834, "SET-PLANET"}, // "SET-PLAN"
    {0xff, 0xcba0, "SHPMOV-OV"}, // "SHPMOV-"
    {0xff, 0xcb80, "SHPMOV-VOC"}, // "SHPMOV-"
    {0xff, 0xd452, "STARTGAME"}, // "STARTG"
    {0xff, 0xd489, "LET-THERE-BE-STARFLIGHT"}, // "LET-TH"

    {0x2a, 0xe05c, "SET.COLORS"}, // "We05c"
    {0x2a, 0xde82, "RESUME"}, // "Wde82"
    {0x2a, 0xe881, ".RESUMING"}, // "We881"
    {0x2a, 0xe4d0, ".GAMEOPS"}, // "We4d0"
    {0x2a, 0xf495, "GET-OPTION#"}, // "Wf495"
    {0x2a, 0xf4ca, "GAMEOPCASE"}, // "GAMEOP"

    {0x2a, 0xe93b, "RESTOREDISPLAY"}, // "We93b"
    {0x2a, 0xe9ab, "ONCACHE"}, // "We9ab"
    {0x2a, 0xea51, "POPVECT"}, // "Wea51"
    {0x2a, 0xe999, "ESCENABLE"}, // "We999"
    {0x2a, 0xe86d, "GDE"}, // "We86d"

    {0x2a, 0xe991, "ESCDISABLE"}, // "We991"
    {0x2a, 0xe9a1, "OFFCACHE"}, // "We9a1"
    {0x2a, 0xea27, "PUSHVECT"}, // "Wea27"
    {0x2a, 0xe9d5, "NEWDOSMSGS"}, // "We9d5"
    {0x2a, 0xe967, "PRESERVEDISPLAY"}, // "We967"
    {0xff, 0xa345, "POLY-ERASE-TEXT"}, // "POLY-ER"

    {0x22, 0xedc9, "?.CERTAIN"}, // "Wedc9" ANALYZE-OV
    {0x22, 0xeb76, "%MASS"}, // "Web76" ANALYZE-OV
    {0x22, 0xed72, ".SIZE"}, // "Wed72" ANALYZE-OV
    {0x22, 0xee09, "HEADER"}, // "Wee09" ANALYZE-OV
    {0x22, 0xee5b, ".TYPE"}, // "Wee5b" ANALYZE-OV
    {0x22, 0xee81, ".SHIELDS"}, // "Wee81" ANALYZE-OV
    {0x22, 0xef07, ".WEAP"}, // "Wef07" ANALYZE-OV
    {0xff, 0xaf69, "-XTRAILING"}, // "-XTRAIL" ANALYZE-OV
    {0x22, 0xef3c, ".DELEM"}, // "Wef3c" ANALYZE-OV
    {0x22, 0xef8e, ".CONSTIT"}, // "Wef8e" ANALYZE-OV
    {0x22, 0xf107, ".SURF"}, // "Wf107" ANALYZE-OV
    {0x22, 0xf131, ".GRAV"}, // "Wf131" ANALYZE-OV
    {0x22, 0xed19, ".OBJECT"}, // "Wed19" ANALYZE-OV
    {0x22, 0xefc5, ".ORBIT"}, // "Wefc5" ANALYZE-OV
    {0x22, 0xf27a, ".WEATH"}, // "Wf27a" ANALYZE-OV
    {0x22, 0xebdf, "ATMO.ACTIVITY"}, // "Webdf" ANALYZE-OV
    {0x23, 0xf0ce, "LAUNCH"}, // "Wf0ce" LAUNCH-OV
    {0x23, 0xf36c, "PORTLEAVE"}, // "Wf36c" LAUNCH-OV
    {0x23, 0xf09a, "COUNTDOWN"}, // "Wf09a" LAUNCH-OV
    {0x17, 0xf2a6, "altitude"}, // "Wf2a6" LIST-ICONS-OV
    {0x17, 0xf34f, "ICON-KEY"}, // "Wf34f" LIST-ICONS-OV
    {0x17, 0xf3c6, ".BLT"}, // "Wf3c6" LIST-ICONS-OV
    {0x17, 0xf3f2, "PAUSE-PAGE"}, // "Wf3f2" LIST-ICONS-OV
    {0x17, 0xf42c, "SEE-BLTS"}, // "Wf42c" LIST-ICONS-OV
    {0x17, 0xf48a, "title"}, // "Wf48a" LIST-ICONS-OV
    {0x26, 0xe1fd, "tm.opts"}, // "We1fd" ITEMS-OV
    {0x26, 0xe1c1, "lpos"}, // "We1c1" ITEMS-OV
    {0x26, 0xe1a8, ".eras"}, // "We1a8" ITEMS-OV
    {0x26, 0xe1d3, "#options!"}, // "We1d3" ITEMS-OV
    {0x26, 0xe216, "tl.opts"}, // "We216" ITEMS-OV
    {0x26, 0xe199, ".desc"}, // "We199" ITEMS-OV
    {0x26, 0xe398, "?VOLUME"}, // "We398" ITEMS-OV
    {0x26, 0xddf6, "revision"}, // "Wddf6" ITEMS-OV
    {0x26, 0xddf6, "werase"}, // "We0b5" ITEMS-OV
    {0xff, 0x62cf, "(SURFACE)"}, // "(SURFAC"
    {0x26, 0xe45b, "plextract"}, // "We45b" ITEMS-OV
    {0x26, 0xe465, "tvextract"}, // "We465" ITEMS-OV
    {0x26, 0xe487, "niche>val"}, // "We487" ITEMS-OV
    {0x26, 0xe46f, "niche"}, // "We46f" ITEMS-OV
    {0x26, 0xe4bb, "?dist"}, // "We4bb" ITEMS-OV
    {0x26, 0xe4f1, "valuate"}, // "We4f1" ITEMS-OV
    {0x26, 0xe477, "i.level"}, // "We477" ITEMS-OV
    {0x26, 0xe47f, "size.index"}, // "We47f" ITEMS-OV
    {0x26, 0xe559, "info-setup"}, // "We559" ITEMS-OV
    {0x26, 0xe567, "$setup"}, // "We567" ITEMS-OV
    {0x26, 0xe593, "$match"}, // "We593" ITEMS-OV
    {0x26, 0xf108, "qtbtn"}, // "Wf108" ITEMS-OV
    {0xff, 0xbb14, "delete-scroll-box"}, // "DELETE-"
    {0x26, 0xf43a, "return-items"}, // "Wf43a"
    {0x26, 0xef0c, "full-text"}, // "Wef0c"

    {0x08, 0xefc5, "SET-BANK"}, // "Wefc5" BANK-OV
    {0x08, 0xf4c4, ".BANK"}, // "Wf4c4" BANK-OV
    {0x08, 0xf4ac, ".BALANCE"}, // "Wf4ac" BANK-OV
    {0x08, 0xefa4, "MASTERBALANCE"}, // "Wefa4" BANK-OV
    {0x08, 0xefa9, "BALANCE"}, // "Wefa9" BANK-OV
    {0x08, 0xefae, "TFLAG"}, // "Wefae" BANK-OV
    {0x08, 0xefbb, "T-AMT"}, // "Wefbb" BANK-OV
    {0x08, 0xefc0, "T-DATE"}, // "Wefc0" BANK-OV
    {0x08, 0xefb3, "TRANSTEXT"}, // "Wefb3" BANK-OV
    {0x08, 0xef86, "TRIM"}, // "Wef86" BANK-OV
    {0x08, 0xef90, "3RIGHT"}, // "Wef90" BANK-OV
    {0x08, 0xef94, "3LEFT"}, // "Wef94" BANK-OV
    {0x08, 0xef98, "3PLUS"}, // "Wef98" BANK-OV
    {0x08, 0xef9c, "2RIGHT"}, // "Wef9c" BANK-OV
    {0x08, 0xefa0, "2LEFT"}, // "Wefa0" BANK-OV
    {0x08, 0xf112, "DOTS"}, // "Wf112" BANK-OV
    {0x08, 0xf128, ".DOTS"}, // "Wf128" BANK-OV
    {0x08, 0xf152, ".BDATE"}, // "Wf152" BANK-OV
    {0x08, 0xf196, ".$AMT"}, // "Wf196" BANK-OV
    {0x08, 0xf1da, "?.MESS"}, // "Wf1da" BANK-OV
    {0x08, 0xf1e2, "BTITLE"}, // "Wf1e2" BANK-OV
    {0x08, 0xf26f, "BOFRAME"}, // "Wf26f" BANK-OV
    {0x08, 0xf3ab, "BINFO"}, // "Wf3ab" BANK-OV
    {0x08, 0xf464, "BSCREEN"}, // "Wf464" BANK-OV
    {0x08, 0xf472, "BMESS"}, // "Wf472" BANK-OV

    {0x2A, 0xe3bc, "BORDER"}, // "We3bc" GAME-OV
    {0x2A, 0xe5c1, ".LOADHEAD"}, // "We5c1" GAME-OV
    {0x2A, 0xeddc, "DATALOAD"}, // "Weddc" GAME-OV
    {0x2A, 0xe1b2, "!$"}, // "We1b2" GAME-OV
    {0x2A, 0xe06e, "$LEN"}, // "We06e" GAME-OV
    {0x2A, 0xdf92, "$ADDR"}, // "Wdf92" GAME-OV
    {0x2A, 0xe1be, "#CPL"}, // "We1be" GAME-OV
    {0x2A, 0xe1d6, "#LPS"}, // "We1d6" GAME-OV
    {0x2A, 0xe1f4, "?BL<-"}, // "We1f4" GAME-OV
    {0x2A, 0xe20c, "##LINES"}, // "We20c" GAME-OV
    {0x2A, 0xdf9e, "SUB$ADDR"}, // "Wdf9e" GAME-OV
    {0x2A, 0xe24e, "#YBLT"}, // "We24e" GAME-OV
    {0x2A, 0xe278, "#XBLT"}, // "We278" GAME-OV
    {0x2A, 0xe2b6, ".SUB"}, // "We2b6" GAME-OV
    {0x2A, 0xe2c6, ".#LINES"}, // "We2c6" GAME-OV
    {0x2A, 0xe340, "BORDERMARGIN"}, // "We340" GAME-OV
    {0x2A, 0xe376, "ERASEWIND"}, // "We376" GAME-OV
    {0x2A, 0xe3b0, ".PAGE"}, // "We3b0" GAME-OV
    {0x2A, 0xe599, ".SAVEHEAD"}, // "We599" GAME-OV
    {0x2A, 0xe9b9, "CHECKSUM"}, // "We9b9" GAME-OV
    {0x2A, 0xdf6a, "CKSUM"}, // "Wdf6a" GAME-OV
    {0x2A, 0xebfc, "|DISK"}, // "Webfc" GAME-OV

    {0x2A, 0xec80, "<DISK"}, // "Wec80" GAME-OV
    {0x2A, 0xec88, ">DISK"}, // "Wec88" GAME-OV
    {0x2A, 0xec90, "ARB"}, // "Wec90" GAME-OV
    {0x2A, 0xec9e, "ARRAYSPACE"}, // "Wec9e" GAME-OV
    {0x2A, 0xecb4, "ARR>DISK"}, // "Wecb4" GAME-OV
    {0x2A, 0xe9e9, "?INNERSPACE"}, // "We9e9" GAME-OV
    {0x2A, 0xe0fa, "OUTERSPACE"}, // "We0fa" GAME-OV
    {0x2A, 0xed72, "SETSAVE"}, // "Wed72" GAME-OV
    {0x2A, 0xee39, "SAVEGAME"}, // "Wee39" GAME-OV
    {0x2A, 0xeeb1, "BOX"}, // "Weeb1" GAME-OV
    {0x2A, 0xeee5, "SET.DISPLAY.VECTORS"}, // "Weee5" GAME-OV
    {0x2A, 0xe7ee, "?-writeable"}, // "We7ee" GAME-OV
    {0x2A, 0xf527, "?GAME.IN.PROGRESS"}, // "Wf527" GAME-OV
    {0x2A, 0xe824, "nomaster"}, // "We824" GAME-OV

    {0x27, 0xe2a5, "?ALIEN-HIT-WITH-LASER"}, // "?ALIEN-HIT" BEHAV-OV
    {0x27, 0xe2ee, "?ALIEN-HIT-WITH-STUNNER"}, // "?ALIEN-HIT" BEHAV-OV
    {0x27, 0xe4d9, "?WANTS-TO-FLY"}, // "?WANTS-TO-" BEHAV-OV
    {0x27, 0xe4f2, "?WANTS-TO-FLOAT"}, // "?WANTS-TO-" BEHAV-OV
    {0x27, 0xe727, "ERASE-LIFEFORM-FROM-ARRAY"}, // "ERASE-LIFE" BEHAV-OV
    {0x27, 0xee0d, "angle>text"}, // "Wee0d" BEHAV-OV
    {0x18, 0xf417, "plan-tseed"}, // "Wf417" MOVE-OV
    {0x04, 0xf423, "GETSITE_1"}, // "GETSITE" SITE-OV
    {0x04, 0xf537, "GETSITE_2"}, // "GETSITE"
    {0xff, 0x6192, "(SCROLL_1"}, // "(SCROLL" maybe (SCROLL-BOX)
    {0xff, 0x61b2, "(SCROLL_2"}, // "(SCROLL"
    {0xff, 0x1320, "OFF_1"}, // "OFF"
    {0xff, 0x4886, "OFF_2"}, // "OFF"
    {0xff, 0x6dc7, "OFF"}, // "OFF"
    {0xff, 0x132f, "ON"}, // "ON"
    {0xff, 0x4873, "ON_2"}, // "ON"
    {0xff, 0x6db9, "ON_3"}, // "ON"
    {0xff, 0x3bc2, "THRU_1"}, // "THRU"
    {0xff, 0x6f1a, "THRU_2"}, // "THRU"
    {0xff, 0xa227, "BEEPON"}, // "BEEPON"
    {0xff, 0x2638, "BEEPON_2"}, // "BEEPON"
    {0xff, 0x3df7, "'_1"}, // "'"
    {0xff, 0x1b7d, "'_2"}, // "'"
    {0xff, 0x6dec, "CMOVE"}, // "CMOVE"
    {0xff, 0x0d10, "CMOVE_2"}, // "CMOVE"
    {0xff, 0x6e41, "LOAD_1"}, // "LOAD"
    {0xff, 0x06a2, "LOAD_2"}, // "LOAD"
    {0xff, 0x9d96, "?ICONS-AT"}, // "?ICONS-"
    {0xff, 0x9d82, "?ICONS-LOCUS"}, // "?ICONS-"
    {0xff, 0x3913, "FLUSH"}, // "FLUSH"
    {0xff, 0x3913, "FLUSH"}, // "FLUSH"
    {0xff, 0x7b5f, "FLUSH_2"}, // "FLUSH"
    {0xff, 0x3880, "LBLOCK_1"}, // "LBLOCK"
    {0xff, 0x6e32, "LBLOCK_2"}, // "LBLOCK"
    {0xff, 0x6dff, "FILL_1"}, // "FILL"
    {0xff, 0x0d35, "FILL_2"}, // "FILL"
    {0xff, 0x0be1, "!"}, // "!"
    {0xff, 0x6b78, "!_2"}, // "!"
    {0xff, 0x6d78, "!_3" }, // "!"
    {0xff, 0xbd1f, "MISC-VOC"}, // "MISC"
    {0xff, 0xbd3d, "MISC-OV"}, // "MISC"
    {0xff, 0x965e, ".CIRCLE"}, // ".CIRCLE"
    {0xff, 0x9c34, ".CIRCLEICON"}, // ".CIRCLE"
    {0xff, 0x6d94, "1.5!"}, // "1.5!"
    {0xff, 0x49ae, "1.5!_2"}, // "1.5!"
    {0xff, 0x6d85, "+!_2"}, // "+!"
    {0xff, 0x0f85, "+!"}, // "+!"
    {0xff, 0x6d6c, "C!"}, // "C!"
    {0xff, 0x0c60, "C!_2"}, // "C!"
    {0xff, 0x6da1, "2!"}, // "2!"
    {0xff, 0x0c24, "2!_2"}, // "2!"
    {0xff, 0x085d, "BYE_2"}, // "BYE"
    {0xff, 0x8fd9, "BYE"}, // "BYE"
    {0xff, 0xd463, "GAMEOP_1"}, // "GAMEOP"
    {0xff, 0xd476, "GAMEOP_2"}, // "GAMEOP"
    {0xff, 0xc897, "DAMAGE_1"}, // "DAMAGE-"
    {0xff, 0xc8b7, "DAMAGE_2"}, // "DAMAGE-"

    {0xff, 0x5a5c, "CONTEXT-ID#"}, // "CONTEXT"
    {0xff, 0x05ac, "CONTEXT_2"}, // "CONTEXT"
    {0xff, 0x38ad, "SAVE-BU_1"}, // "SAVE-BU"
    {0xff, 0x7b4f, "SAVE-BU_2"}, // "SAVE-BU"
    {0xff, 0x385f, "BLOCK_1"}, // "BLOCK"
    {0xff, 0x6e21, "BLOCK_2"}, // "BLOCK"
    {0xff, 0x06ac, "KEY_1"}, // "KEY"
    {0xff, 0x48ab, "KEY_2"}, // "KEY"
    {0xff, 0x5d6b, "?REUSE"}, // "W5d6b"
    {0xff, 0x80d1, "SET?REUSE"}, // "SET?REU"
    {0xff, 0x8083, "GET-NEW-INSTANCE"}, // "W8083"
    {0xff, 0x5e58, "?RECYCLED"}, // "W5e58"
    {0xff, 0x7a3f, "1STCHILD"}, // "W7a3f"
    {0xff, 0x81d7, ".DRJ"}, // "W81d7"
    {0xff, 0x4fff, "END-CX"}, // "W4fff"
    {0xff, 0x7d6b, "V>SWAP!"}, // "W7d6b"
    {0xff, 0x5521, "'TRAVERS"}, // "'TRAVER"
    {0xff, 0x7d5f, "DUP@>V!"}, // "W7d5f"
    {0xff, 0x7e38, "MAP>LEAF"}, // "W7e38"
    {0xff, 0x8294, "OVA@"}, // "W8294"
    {0xff, 0x7063, "MOUNT-VSA"}, // "W7063"
    {0xff, 0x70cb, "VSA>VA"}, // "W70cb"
    {0xff, 0x82ee, "?ROOMERROR"}, // "W82ee"
    {0xff, 0x8309, "OV-VERIFY"}, // "W8309"
    {0xff, 0x82e2, "VSA>BUFADR"}, // "W82e2"
    {0xff, 0x8332, "LOAD-OVERLAY"}, // "W8332"
    {0xff, 0x8403, "DP-SWITCH"}, // "W8403"
    {0xff, 0x5007, "EM"}, // "W5007"
    {0xff, 0x847b, ".CVSAS"}, // "W847b"
    {0xff, 0x8538, "TREJECT/TACCEPT"}, // "W8538"
    {0xff, 0x8596, "INT/O"}, // "W8596"
    {0xff, 0x8605, "CLIP"}, // "W8605"
    {0xff, 0x87e1, "SCANCON"}, // "W87e1"
    {0xff, 0x8aa2, "YTABLE.ADDRESS"}, // "W8aa2"
    {0xff, 0x8b8d, "?HID-DIS"}, // "W8b8d"
    {0xff, 0x8e70, "SCANLINE"}, // "W8e70"
    {0xff, 0x9604, "!EPARMS"}, // "W9604"
    {0xff, 0x9390, "?EXTENTX"}, // "W9390"
    {0xff, 0x96d6, "FRAMELEN"}, // "W96d6"
    {0xff, 0xb309, "AINSTALLS"}, // "Wb309"
    {0xff, 0xb32f, "BINSTALLS"}, // "Wb32f"
    {0xff, 0x6325, "KEYINTADDR"}, // "W6325"
    {0xff, 0xb503, "CONFIGURE-SYSTEM"}, // "CONFIGU"
    {0xff, 0x54a1, "1BUFADR"}, // "W54a1"
    {0xff, 0x54a5, "2BUFADR"}, // "W54a5"
    {0xff, PARPRINT, "SET_STR_AS_PARAM"}, // "W3f3b"
    {0xff, 0xb2cb, "LFCLAIM"}, // "Wb2cb"
    {0xff, 0xb2dd, "AINSTALL"}, // "Wb2dd"
    {0xff, 0xb2ff, "BINSTALL"}, // "Wb2ff"
    {0xff, 0x74fe, "@INST-SIB"}, // "W74fe"
    {0xff, 0x7506, "@INST-PREV"}, // "W7506"
    {0xff, 0x750e, "@INST-OFF"}, // "W750e"
    {0xff, 0x7460, "INST-SIB"}, // "INST-SI"
    {0xff, 0x746f, "INST-PREV"}, // "INST-PR"
    {0xff, 0x747e, "INST-OFF"}, // "INST-OF"
    {0xff, 0x748d, "INST-CLASS"}, // "INST-CL"
    {0xff, 0x749c, "INST-SPECIES"}, // "INST-SP"
    {0xff, 0x763a, "@[IOFF]"}, // "W763a"
    {0xff, 0x7646, "IBFR>ICACHE"}, // "W7646"
    {0xff, 0x54f6, "$SEG"}, // "W54f6"
    {0xff, 0x5584, "$OLD"}, // "W5584"
    {0xff, 0x5590, "LENINST"}, // "W5590"
    {0xff, 0x765c, "ICACHE>IBFR"}, // "W765c"
    {0xff, 0x7672, "BVA>BUF"}, // "W7672"
    {0xff, 0x734b, "?BMOUNT"}, // "W734b"
    {0xff, 0x7684, "PRIORITIZE"}, // "PRIORIT"
    {0xff, 0x76b8, "ITLEN"}, // "W76b8"
    {0xff, 0x76ec, "POINT>I"}, // "W76ec"
    {0xff, 0x558c, "[IOFF]"}, // "W558c"
    {0xff, 0x7788, "?UPDINST"}, // "W7788"
    {0xff, 0x7790, "?IN$LOC"}, // "W7790"
    {0xff, 0x54f2, "LOCSEC"}, // "W54f2"
    {0xff, 0x5578, "QTYINST"}, // "W5578"
    {0xff, 0x7800, "-LINST"}, // "W7800"
    {0xff, 0x787c, "?$COLLECT"}, // "W787c"
    {0xff, 0x557c, "$MAX"}, // "W557c"
    {0xff, 0x5580, "$FREE"}, // "W5580"
    {0xff, 0x57dd, "ELEMENT"}, // "W57dd"
    {0xff, 0x57e1, "SCAN+"}, // "W57e1"
    {0xff, 0x57fb, "#HORIZ"}, // "W57fb"
    {0xff, 0x59be, "IXSEG"}, // "W59be"
    {0xff, 0x59c2, "IYSEG"}, // "W59c2"
    {0xff, 0x59c6, "IDSEG"}, // "W59c6"
    {0xff, 0x59ca, "ICSEG"}, // "W59ca"
    {0xff, 0x59ce, "ILSEG"}, // "W59ce"
    {0xff, 0x5a4a, "(STOP-COMM)"}, // "(STOP-C"
    {0xff, 0x5a4e, "CENTERADJUST"}, // "W5a4e"
    {0xff, 0x6930, "NEB-TABLE"}, // "W6930"
    {0xff, 0x6972, "NEB2"}, // "W6972"
    {0xff, 0x69b4, "V1"}, // "W69b4"
    {0xff, 0x69f6, "V2"}, // "W69f6"
    {0xff, 0xb3e4, "INIT-CRS"}, // "Wb3e4"
    {0xff, 0xb45f, "KILLBREAK"}, // "Wb45f"
    {0xff, 0xb46f, "farb"}, // "Wb46f" // not sure if this is right
    {0xff, 0xb49f, "FLIMP"}, // "Wb49f"
    {0xff, 0xb1a4, "RESTOREINT24"}, // "Wb1a4"
    {0xff, 0x4b3e, "2'S-BIT"}, // "W4b3e"
    {0xff, 0x4b78, "1'S-BIT"}, // "W4b78"
    {0xff, 0x4b08, "D2*"}, // "W4b08"
    {0xff, 0x4b17, "EASY-BITS"}, // "W4b17"
    {0xff, 0x4c87, "(SLIPPER)"}, // "W4c87"
    {0xff, 0xa070, "INIT-VIEWSCREEN-POLY"}, // "Wa070"
    {0xff, 0xa08c, "POLY-WINDOW-BOUND"}, // "Wa08c"
    {0xff, 0xa235, "mussegswap"}, // "Wa235"
    {0xff, 0xa25d, "muson"}, // "Wa25d"
    {0xff, 0xa267, "musoff"}, // "Wa267"
    {0xff, 0x54d8, "#CIRC"}, // "W54d8"
    {0xff, 0x9e53, "PERCOLATE"}, // "W9e53"
    {0xff, 0x9d18, "?ILOCUS"}, // "W9d18"
    {0xff, 0x9e14, "XCHGICON"}, // "W9e14"
    {0xff, 0x5128, "ILIMIT"}, // "W5128"
    {0xff, 0x9eb1, "?IID"}, // "W9eb1"
    {0xff, 0x5b04, "BICON"}, // "W5b04"
    {0xff, 0x9daa, "?ICON-IADDR"}, // "?ICON=I"
    {0xff, 0x9bee, ".8X8ICON"}, // "W9bee"
    {0xff, 0x50d0, "NULL-ICON"}, // "NULL-IC"
    {0xff, 0x9c92, ".ICONCASES"}, // ".ICONCA"
    {0xff, 0x9c76, ".STARSYS"}, // "W9c76"
    {0xff, 0x9c22, ".FLUX-ICON"}, // "W9c22"
    {0xff, 0x9bb6, "{8X8ICON}"}, // "W9bb6"
    {0xff, 0x9bae, ".BACKGROUND"}, // ".BACKGR"
    {0xff, 0x9a6c, "@IW"}, // "W9a6c"
    {0xff, 0x9a56, ">3ICONFONT"}, // ">3ICONF"
    {0xff, 0x99e8, "FILE>ICONIMAGE"}, // "W99e8"
    {0xff, 0x986e, ".CELL"}, // "W986e"
    {0xff, 0x96fe, ".PACKBLT"}, // ".PACKBL"
    {0xff, 0x90eb, ".{SCANELLIP}"}, // "{SCANEL"
    {0xff, 0x90d9, "{.ELLIP}"}, // "{.ELLIP"
    {0xff, 0x9460, "{GTYPE}"}, // "W9460"
    {0xff, 0x52d5, "7CHAR"}, // "W52d5"
    {0xff, 0x52d9, "7SPACING"}, // "W52d9"
    {0xff, 0x52dd, "9CHAR"}, // "W52dd"
    {0xff, 0x953f, "{3FONT}"}, // "W953f"
    {0xff, 0x93fa, "{1FONT}"}, // "W93fa"
    {0xff, 0x93b1, "BEXTENT"}, // "W93b1"
    {0xff, 0x8df0, ">ALPHACODE"}, // "W8df0"
    {0xff, 0x8d8b, ">LORES"}, // "W8d8b"
    {0xff, 0x8b5d, "HID-DIS"}, // "W8b5d"
    {0xff, 0x5253, "CLIP-TABLE"}, // "CLIP-TA"
    {0xff, 0x5305, "BUTTON-ON"}, // "W5305"
    {0xff, 0x52fd, "HIGHLIGHT-BUTTON"}, // "W52fd"
    {0xff, 0x52f1, "BUTTON"}, // "W52f1"
    {0xff, 0x52e1, "1LOGO"}, // "W52e1"
    {0xff, 0x4c5b, "CURVE"}, // "W4c5b"
    {0xff, 0xa98d, "UL"}, // "Wa98d"
    {0xff, 0xa995, "U0"}, // "Wa995"
    {0xff, 0xa9a5, "UR"}, // "Wa9a5"
    {0xff, 0xa99d, "0L"}, // "Wa99d"
    {0xff, 0xa9b1, "0R"}, // "Wa9b1"
    {0xff, 0xa9bd, "DL"}, // "Wa9bd"
    {0xff, 0xa9c5, "DZ"}, // "Wa9c5"
    {0xff, 0xa9cd, "DR"}, // "Wa9cd"
    {0xff, 0xa9d5, "XY0"}, // "Wa9d5"
    {0xff, 0xa9db, "TRIG"}, // "Wa9db"
    {0xff, 0xa9ef, "(XYSCAN)"}, // "(XYSCAN"
    {0xff, 0xaa98, "NEXT-BUTTON"}, // "Waa98"
    {0xff, 0xaaac, "XEQ-BUTTON"}, // "Waaac"
    {0xff, 0x5cc3, "(SRDEPTH)"}, // "W5cc3"
    {0xff, 0xacd3, ">ASCEND"}, // "Wacd3"
    {0xff, 0xacf3, "NEXT-NODE"}, // "NEXT-NO"
    {0xff, 0x761f, "?ONLY"}, // "W761f"
    {0xff, 0x54ea, "LOISEG"}, // "W54ea"
    {0xff, 0x54ee, "HIISEG"}, // "W54ee"
    {0xff, 0x77a4, "?UPDATE>CACHE"}, // "W77a4"
    {0xff, 0x77c0, "?UPD>DISK"}, // "W77c0"
    {0xff, 0x615c, "IADDR"}, // "W615c"
    {0xff, 0x5588, "$NEW"}, // "W5588"
    {0xff, 0x54b4, "VSP"}, // "W54b4"
    {0xff, 0x5003, "END-V"}, // "W5003"
    {0xff, 0x7b23, "IC>DSK"}, // "W7b23"
    {0xff, 0x74dc, "!INST-OFF"}, // "W74dc"
    {0xff, 0x74cc, "!INST-SIB"}, // "W74cc"
    {0xff, 0x74d4, "!INST-PREV"}, // "W74d4"
    {0xff, 0x7c37, "NEWSPACE"}, // "W7c37"
    {0xff, 0x516a, "VANEWSPACE"}, // "VANEWSP"
    {0xff, 0x7c89, "BLKSPACE"}, // "W7c89"
    {0xff, 0x7d17, "?CLASS/SPECIES"}, // "?CLASS/"
    {0xff, 0x7d39, "?CHOICE"}, // "W7d39"
    {0xff, 0x5532, "'?CHOICE"}, // "W5532"
    {0xff, 0x7d41, "?EXIT"}, // "W7d41"
    {0xff, 0x7d49, "TRAVERS"}, // "W7d49"
    {0xff, 0x7dca, "SELECT-2DROP"}, // "SELECT-"
    {0xff, 0x7e1e, "MAP>ROOT"}, // "W7e1e"
    {0xff, 0x7df6, "3SELECTDROP"}, // "W7df6"
    {0xff, 0x7e02, "=FIND"}, // "W7e02"
    {0xff, 0x7d01, "?FLD="}, // "W7d01"
    {0xff, 0x7e70, "EXTRACTED>INACTIVE"}, // "W7e70"
    {0xff, 0x7eca, "(IDELETE)"}, // "W7eca"
    {0xff, 0x7f08, "SELECT-MAP"}, // "W7f08"
    {0xff, 0x7f79, "THROW-AWAY"}, // "W7f79"
    {0xff, 0x5508, "'THROW-AWAY"}, // "'THROW-"
    {0xff, 0x7f9b, "CHILDEXTRACT"}, // "W7f9b"
    {0xff, 0x7fb1, "TRY-INACTIVE"}, // "W7fb1"
    {0xff, 0x7fe7, "NEWFRAGMENT"}, // "W7fe7"
    {0xff, 0x7c63, "+!NEWSPACE"}, // "W7c63"
    {0xff, 0x8049, "TRY-NEWSPACE"}, // "W8049"
    {0xff, 0x81e3, ".INM"}, // "W81e3"
    {0xff, 0x824a, "INDENT.INM"}, // "W824a"
    {0xff, 0xd445, "GAME-OV"}, // "GAME-O"
    {0xff, 0x8ee7, ">LORES_2"}, // ">LORES"
    {0xff, 0x4892, "CAPSON"}, // "W4892"
    {0xff, 0x718d, "RECADD"}, // "W718d"
    {0xff, 0x7221, "DFIELD"}, // "W7221"
    {0xff, 0x71dd, "DOFFBLK"}, // "W71dd"
    {0xff, 0x7295, "BVSA>OFFBLK"}, // "W7295"
    {0xff, 0x7244, "FILE-NAME"}, // "FILE-NA" 12 ASCII characters
    {0xff, 0x7251, "FILE-TYPE"}, // "FILE-TY" 0=fixed,1=var,2=overlay
    {0xff, 0x725e, "FILE-START"}, // "FILE-ST" start of file on disk
    {0xff, 0x726b, "FILE-END"}, // "FILE-EN" end of file on disk
    {0xff, 0x7278, "FILE-#REC"}, // "FILE-#R" max # records
    {0xff, 0x7285, "FILE-RLEN"}, // "FILE-RL" max record length
    {0xff, 0x7292, "FILE-SLEN"}, // "FILE-SL" status record length
    {0xff, 0x6f81, "?AFILE"}, // W6f81
    {0xff, 0x7357, "|REC"}, // W7357
    {0xff, 0x547f, "LRECORD#"}, // W547f
    {0xff, 0x547b, "LFILE#"}, // W547b
    {0xff, 0x5483, "LRECORD#"}, // W5483
    {0xff, 0x7379, "?-RECINBUF"}, // W7379
    {0xff, 0x7425, "IFLDADR"}, // W7425
    {0xff, 0x790C, "DISK>IBFR"}, // W790c
    {0xff, 0xc4e5, "OVFLUX-EFFECT"}, // OVFLU

    {0x00, 0xef66, "HIBEEP"}, // Wef66
    {0x00, 0xef6a, "LOBEEP"}, // Wef6a
    {0x00, 0xef6e, "PHRASE$"}, // Wef6e
    {0x00, 0xef73, "MESSPREFIX"}, // Wef73
    {0x00, 0xf026, ".PHRASE"}, // Wf026
    {0x00, 0xf064, ".PHRASES"}, // Wf064
    {0x00, 0xf158, "?DELETE"}, // Wf158
    {0x00, 0xf186, "CRIT-DELETE"}, // Wf166
    {0x00, 0xf1ac, "OTHER-DELETE"}, // Wf1ac
    {0x00, 0xf1d6, ".BOMBMESS"}, // Wf1d6
    {0x00, 0xf252, "FLASHCOLOR"}, // Wf252
    {0x00, 0xf25e, "EXPLOSION"}, // Wf25e
    {0x00, 0xf29e, "?CRYSTAL"}, // Wf29e
    {0x00, 0xf2b0, "?ATNEXUS"}, // Wf2b0
    {0x00, 0xf2e6, "ORBIT-MASK"}, // Wf2e6
    {0x00, 0xf2eb, "CLRORBMASK"}, // Wf2eb
    {0x00, 0xf430, "?DELETEPLANET"}, // Wf430

    {0x10, 0xe42f, "plan-life"}, // We42f
    {0x10, 0xe437, "atmo.density"}, // We437
    {0x10, 0xe43f, "narrowest"}, // We43f
    {0x10, 0xe447, "flattest"}, // We447
    {0x10, 0xe44f, "plan-mass"}, // We44f
    {0x10, 0xe457, "cllo"}, // We457
    {0x10, 0xe45f, "clhi"}, // We45f
    {0x10, 0xe467, "shape"}, // We467
    {0x10, 0xe46f, "exterior"}, // We46f
    {0x10, 0xe477, "size.index"}, // We477
    {0x10, 0xe47f, "niche"}, // We47f
    {0x10, 0xe487, "reddest"}, // We487
    {0x10, 0xe48f, "bluest"}, // We48f
    {0x10, 0xe497, "texture"}, // We497
    {0x10, 0xe49f, "w.append"}, // We49f
    {0x10, 0xe4a7, "w#"}, // We4a7
    {0x10, 0xe4af, "d.append"}, // We4af
    {0x10, 0xe4b7, "d#"}, // We4b7
    {0x10, 0xe4bf, "a.append"}, // We4bf
    {0x10, 0xe4c7, "a#"}, // We4c7
    {0x10, 0xe4cf, "g.append"}, // We4cf
    {0x10, 0xe4d7, "g#"}, // We4d7
    {0x10, 0xe4df, "g.mobility"}, // We4df
    {0x10, 0xe4e7, "a.mobility"}, // We4e7
    {0x10, 0xe4ef, "orlo"}, // We4ef
    {0x10, 0xe4f7, "orhi"}, // We4f7
    {0x10, 0xe296, "planet"}, // We296
    {0x10, 0xe29a, "star"}, // We29a
    {0x10, 0xe29e, "regions"}, // We29e
    {0x10, 0xe2a2, "creature"}, // We2a2
    {0x10, 0xe2ab, "difind"}, // We2ab
    {0x10, 0xe2d7, "iaddr-array"}, // We2d7
    {0x10, 0xe2cb, "1.5,"}, // We2cb
    {0x10, 0xe2b3, "rput"}, // We2b3
    {0x10, 0xe2bf, "rget"}, // We2bf
    {0x10, 0xe344, "?s"}, // We344
    {0x10, 0xe2a6, "crowding"}, // We2a6
    {0x10, 0xf4c0, "order.parms"}, // Wf4c0
    {0x10, 0xf4c0, "do.oparms"}, // Wf4a6

    {0x10, 0xede0, "sizing"}, // Wede0
    {0x10, 0xef75, "dye"}, // Wef75
    {0x10, 0xefd1, "fortify"}, // Wefd1
    {0x10, 0xf015, "decorate"}, // Wf015
    {0x10, 0xf02b, "trimming"}, // Wf02b
    {0x10, 0xf136, "elevate"}, // Wf136
    {0x10, 0xf210, "nubile"}, // Wf210
    {0x10, 0xf278, "stroll"}, // Wf278
    {0x10, 0xf430, "animate"}, // Wf430
    {0x10, 0xf404, "movem"}, // Wf404
    {0x10, 0xf494, "texturize"}, // Wf494
    {0x10, 0xee38, "spec>color"}, // Wee38
    {0x10, 0xe4ff, "spec>color"}, // We4ff
    {0x10, 0xe50d, "?2dup"}, // We50d
    {0x10, 0xe51b, "whichguy"}, // We51b
    {0x10, 0xe52f, "MAPS"}, // We52f
    {0x10, 0xe53d, "PROBS"}, // We53d
    {0x10, 0xe5d5, "CHANCE"}, // We5d5
    {0x10, 0xe5fd, "RESULT"}, // We5fd
    {0x10, 0xe762, "class.parms"}, // We762
    {0x10, 0xe6f8, "shaper"}, // We6f8
    {0x10, 0xe740, "pelts"}, // We740
    {0x10, 0xe70e, "outfit"}, // We70e
    {0x10, 0xe60b, "(kng)"}, // We60b

    {0x24, 0xf3f0, "NOVA"}, // Wf3f0
    {0x24, 0xf456, "INIT-HYPER-STARS"}, // Wf456
    {0x24, 0xf3a6, "HYPER-DOTS"}, // Wf3a6
    {0x24, 0xf470, "HYPER-PLOT"}, // Wf470
    {0x24, 0xf4d0, "HYPER-FRAME"}, // Wf4d0
    {0x24, 0xf3da, "?STAR-TRAIL"}, // Wf3da

    {0x26, 0xeb52, "art-anlyz"}, // Web52
    {0x26, 0xeb5a, "art-text"}, // Web5a
    {0x26, 0xdfa9, "WRITE-PHRASE"}, // Wdfa9
    {0x26, 0xddfe, "PHRASE-MEM"}, // Wddfe
    {0x26, 0xddfa, "ttlines"}, // Wddfa
    {0x26, 0xdfd5, "planet"}, // Wdfd5
    {0x26, 0xdfd9, "creature"}, // Wdfd9
    {0x26, 0xe020, "whichguy"}, // We020
    {0x26, 0xe034, "reorg"}, // We034
    {0x26, 0xeb86, "art.desc"}, // Web86
    {0x26, 0xe05e, "werase"}, // We05e
    {0x26, 0xe0b5, "art-analyz"}, // We0b5
    {0x26, 0xdfe1, "analyze-text"}, // Wdfe1
    {0x26, 0xeb62, "arttalk"}, // Web62
    {0x26, 0xeb16, "dropit"}, // Web16
    {0x26, 0xe38a, "volume+!"}, // We38a
    {0x26, 0xe5df, ".cargo"}, // We5df
    {0x26, 0xeac0, "?deposited"}, // Weac0
    {0x26, 0xe5c1, "tvxy"}, // We5c1
    {0x26, 0xe5d3, "xy!"}, // We5d3
    {0x26, 0xea76, "new>box"}, // Wea76
    {0x26, 0xeaba, "clsp"}, // Weaba
    {0x26, 0xea6c, "tvdelete"}, // Wea6c
    {0x26, 0xea5e, "pldelete"}, // Wea5e
    {0x26, 0xea50, "delete.it"}, // Wea50
    {0x26, 0xea32, "pickup"}, // Wea32
    {0x26, 0xe523, "1$="}, // We523
    {0x26, 0xdff2, "content-vol"}, // Wdff2
    {0x26, 0xe61c, "?>spec"}, // We61c
    {0x26, 0xe638, "?attack"}, // We638
    {0x26, 0xe004, "behave"}, // We004
    {0x26, 0xdfff, "hits"}, // Wdfff
    {0x26, 0xdfdd, "artifact"}, // Wdfdd
    //{0x26, 0xdfe5, "content-vol"}, // Wdfe5
    {0x26, 0xe009, "biod"}, // We009
    {0x26, 0xe011, "inst-starx"}, // We011
    {0x26, 0xe016, "inst-stary"}, // We016
    {0x26, 0xe01b, "inst-plan#"}, // We01b
    {0x26, 0xdff7, "volume"}, // Wdff7






    // named by me
    {0xff, 0xbc87, "HUFF_LSCAN_INIT"}, // Wbc87
    {0xff, 0xbca5, "HUFF_LSCAN_FINISH"}, // Wbca5
    {0xff, 0xbc8f, "HUFF_LSCAN_ADDCHAR"}, // Wbc8f
    {0xff, 0xbbb0, "HUFF_PHRASE_INIT"}, // Wbbb0
    {0xff, 0xbbb4, "HUFF_PHRASE_FINISH"}, // Wbbb4
    {0xff, 0xbbac, "HUFF_PHRASE_ADDCHAR"}, // Wbbac
    {0xff, 0xbba8, "HUFF_ACTIVE_POINTER_BIT"}, // Wbba8
    {0xff, 0xbba0, "HUFF_ACTIVE_POINTER_BYTE"}, // Wbba0
    {0xff, 0xbb9c, "HUFF_BT_POINTER"}, // Wbb9c
    {0xff, 0xbbb8, "HUFF_MOVE_ACTIVE_POINTER"}, // Wbbb8
    {0x0, 0x0, NULL}
};

OVERLAYS overlays[] =
{
{0x42, 0x0000, "DPART-OV"},
{0x46, 0x0000, "CHKFLIGHT-OV"},
{0x47, 0x0000, "FRACT-OV"},
{0x48, 0x0000, "ICONP-OV"},
{0x49, 0x0000, "SITE-OV"},
{0x4a, 0x0000, "HYPERMSG-OV"},
{0x4e, 0x0000, "BLT-OV"},
{0x4f, 0x0000, "MISC-OV"},
{0x50, 0x0000, "BANK-OV"},
{0x51, 0x0000, "ASSCREW-OV"},

{0x52, 0x0000, "PERSONNEL-OV"},
{0x53, 0x0000, "SHIPGRPH-OV"},
{0x54, 0x0000, "CONFIG-OV"},
{0x55, 0x0000, "TDEPOT-OV"},
{0x57, 0x0000, "PORTMENU-OV"},
{0x58, 0x0000, "VITA-OV"},
{0x59, 0x0000, "HP-OV"},
{0x5a, 0x0000, "LP-OV"},
{0x5b, 0x0000, "SENT-OV"},
{0x5c, 0x0000, "TV-OV"},

{0x5d, 0x0000, "COMM-OV"},
{0x5e, 0x0000, "COMMSPEC-OV"},
{0x5f, 0x0000, "SEED-OV"},
{0x60, 0x0000, "LISTICONS"},
{0x61, 0x0000, "MOVE-OV"},
{0x62, 0x0000, "ENGINEER"},
{0x63, 0x0000, "DOCTOR"},
{0x64, 0x0000, "ORBIT-OV"},
{0x65, 0x0000, "CAPTAIN"},
{0x66, 0x0000, "SCIENCE"},

{0x67, 0x0000, "NAVIGATR"},
{0x68, 0x0000, "SHIPBUTTONS"},
{0x69, 0x0000, "MAP-OV"},
{0x6a, 0x0000, "HYPER-OV"},
{0x6b, 0x0000, "ANALYZE-OV"},
{0x6c, 0x0000, "LAUNCH-OV"},
{0x6d, 0x0000, "FLUX-EFFECT"},
{0x6e, 0x0000, "OP-OV"},
{0x6f, 0x0000, "ITEMS-OV"},
{0x73, 0x0000, "BEHAV-OV"},

{0x76, 0x0000, "HEAL-OV"},
{0x77, 0x0000, "REPAIR-OV"},
{0x78, 0x0000, "GAME-OV"},
{0x79, 0x0000, "PLSET-OV"},
{0x7a, 0x0000, "MAPS-OV"},
{0x7c, 0x0000, "STORM-OV"},
{0x83, 0x0000, "IT-OV"},
{0x84, 0x0000, "COMBAT-OV"},
{0x85, 0x0000, "DAMAGE-OV"},
{0x86, 0x0000, "LAND-OV"},

{0x89, 0x0000, "MUSIC"},
{0x8b, 0x0000, "STP-OV"},
{0x0, 0x0000, NULL},
};

#else

WORDRENAME renamewords[] =
{
    {0x07, 0xf441, "GETSITE_1" }, // GETSITE
    {0x07, 0xf547, "GETSITE_2" }, // GETSITE
    {0x34, 0xf488, "GAMEO_1" }, // GAMEO
    {0x34, 0xf3bc, "GAMEO_2" }, // GAMEO
    {0x39, 0xefc6, "DO-OPEN_1" }, // DO-OPEN
    {0x39, 0xf558, "DO-OPEN_2" }, // DO-OPEN
    {0xff, 0xd09f, "TELE_1" }, // TELE
    {0xff, 0xd0ae, "TELE_2" }, // TELE
    {0xff, 0xcba7, "PFIL-VOC" }, // PFIL
    {0xff, 0xcbc4, "PFIL-OV" }, // PFIL
    {0xff, 0x3bce, "THRU_1" }, // THRU
    {0xff, 0x6ec0, "THRU_2" }, // THRU
    {0xff, 0x2638, "BEEPON_1" }, // BEEPON
    {0xff, 0x9ce4, "BEEPON_2" }, // BEEPON
    {0xff, 0x1b7d, "'_1" }, // '
    {0xff, 0x3e03, "'_2" }, // '
    {0xff, 0x4961, "ON_1" }, // ON
    {0xff, 0x6d59, "ON_2" }, // ON
    {0xff, 0x132f, "ON_3" }, // ON
    {0xff, 0x0d10, "CMOVE_1" }, // CMOVE
    {0xff, 0x6d8c, "CMOVE_2" }, // CMOVE
    {0xff, 0x06a2, "LOAD_1" }, // LOAD
    {0xff, 0x6de1, "LOAD_2" }, // LOAD
    {0xff, 0xcf9d, "SEED-OV" }, // SEED
    {0xff, 0xcf80, "SEED-VOC" }, // SEED
    {0xff, 0x4b9c, "SEED_3" }, // SEED
    {0xff, 0xcb72, "ACR-VOC" }, // ACR
    {0xff, 0xcb8e, "ACR-OV" }, // ACR
    {0xff, 0x97c4, "?ICONS-_1" }, // ?ICONS-
    {0xff, 0x97d8, "?ICONS-_2" }, // ?ICONS-
    {0xff, 0x90af, "COLORMA_1" }, // COLORMA
    {0xff, 0x90e8, "COLORMA_2" }, // COLORMA
    {0xff, 0x3913, "FLUSH_1" }, // FLUSH
    {0xff, 0x7b8c, "FLUSH_2" }, // FLUSH
    {0xff, 0x3880, "LBLOCK_1" }, // LBLOCK
    {0xff, 0x6dd2, "LBLOCK_2" }, // LBLOCK
    {0xff, 0x1320, "OFF_1" }, // OFF
    {0xff, 0x4974, "OFF_2" }, // OFF
    {0xff, 0x0d35, "FILL_1" }, // FILL
    {0xff, 0x6d9f, "FILL_2" }, // FILL
    {0xff, 0x0be1, "!" }, // ! // ! this is the standard store
    {0xff, 0x6d18, "!_2" }, // !
    {0xff, 0x05ac, "CONTEXT_1" }, // CONTEXT
    {0xff, 0xca30, "CONTEXT_2" }, // CONTEXT
    {0xff, 0x5c2c, "CONTEXT_3" }, // CONTEXT
    {0xff, 0xce34, "STO-VOC" }, // STO
    {0xff, 0xce50, "STO-OV" }, // STO
    {0xff, 0xc261, "OVINIT-_1" }, // OVINIT-
    {0xff, 0xbed7, "OVINIT-_2" }, // OVINIT-
    {0xff, 0xc008, "BLDLI-OV" }, // BLDLI
    {0xff, 0xc014, "BLDLI" }, // BLDLI
    {0xff, 0xbfea, "BLDLI-VOC" }, // BLDLI
    {0xff, 0xba65, "+ICON_1" }, // +ICON
    {0xff, 0x9952, "+ICON_2" }, // +ICON
    {0xff, 0xb6c1, "MISC-VOC" }, // MISC-
    {0xff, 0xb6df, "MISC-OV" }, // MISC-
    {0xff, 0x8974, ".CIRCLE_1" }, // .CIRCLE
    {0xff, 0x95f4, ".CIRCLE_2" }, // .CIRCLE
    {0xff, 0x6c80, ">0FONT_1" }, // >0FONT
    {0xff, 0x8ab3, ">0FONT_2" }, // >0FONT
    {0xff, 0x63d2, "(SCROLL_1" }, // (SCROLL
    {0xff, 0x63f2, "(SCROLL_2" }, // (SCROLL
    {0xff, 0x4a9c, "1.5!_1" }, // 1.5!
    {0xff, 0x6d34, "1.5!_2" }, // 1.5!
    {0xff, 0x0f85, "+!" }, // +!
    {0xff, 0x6d25, "+!_2" }, // +!
    {0xff, 0x0c60, "C!_1" }, // C!
    {0xff, 0x6d0c, "C!_2" }, // C!
    {0xff, 0x0c24, "2!_1" }, // 2!
    {0xff, 0x6d41, "2!_2" }, // 2!
    {0xff, 0x085d, "BYE_1" }, // BYE
    {0xff, 0x9041, "BYE_2" }, // BYE
    {0xff, 0xd454, "TRY-L_1" }, // TRY-L
    {0xff, 0xd444, "TRY-L_2" }, // TRY-L
    {0xff, 0xcbe1, "SHIP-GR-VOC" }, // SHIP-GR
    {0xff, 0xcc01, "SHIP-GR-OV" }, // SHIP-GR
    {0xff, 0xc7a2, "COMBAU-VOC" }, // COMBAU
    {0xff, 0xc7c1, "COMBAU-OV" }, // COMBAU
    {0xff, 0xc754, "DNL_1" }, // DNL
    {0xff, 0xc738, "DNL_2" }, // DNL
    {0xff, 0xc668, "DAMAGE-VOC" }, // DAMAGE-
    {0xff, 0xc688, "DAMAGE-OV" }, // DAMAGE-
    {0xff, 0xbd27, "ORBIT_1" }, // ORBIT
    {0xff, 0xbd09, "ORBIT_2" }, // ORBIT
    {0xff, 0xb752, "OVTRIM_1" }, // OVTRIM
    {0xff, 0xb741, "OVTRIM_2" }, // OVTRIM
    {0xff, 0x385f, "BLOCK_1" }, // BLOCK
    {0xff, 0x6dc1, "BLOCK_2" }, // BLOCK
    {0xff, 0x2c3c, "DTA_1" }, // DTA
    {0xff, 0xc728, "DTA_2" }, // DTA
    {0xff, 0x06ac, "KEY_1" }, // KEY
    {0xff, 0x4999, "KEY_2" }, // KEY
    {0xff, PARPRINT, "SET_STR_AS_PARAM"}, // "W3f09"
    {0xff, 0x4e13, "!OFFSETS"}, // "!OFFSET"
    {0xff, 0xb0c1, "LFCLAIM"}, // "Wb0c1"
    {0xff, 0xb0d3, "AINSTALL"}, // "Wb0d3"
    {0xff, 0xb0f5, "BINSTALL"}, // "Wb0f5"
    {0xff, 0xb0ff, "AINSTALLS"}, // "Wbb0ff"
    {0xff, 0xb141, "BINSTALLS"}, // "Wb141"
    {0xff, 0x4bf4, "D2*"}, // "W4bf4"
    {0xff, 0x4c03, "EASY-BITS"}, // "W4c03"

    // named by me
    {0xff, 0xbbd2, "HUFF_LSCAN_INIT"}, // Wbbd2
    {0xff, 0xbbf0, "HUFF_LSCAN_FINISH"}, // Wbbf0
    {0xff, 0xbbda, "HUFF_LSCAN_ADDCHAR"}, // Wbbda
    {0xff, 0xbafb, "HUFF_PHRASE_INIT"}, // Wbafb
    {0xff, 0xbaff, "HUFF_PHRASE_FINISH"}, // Wbaff
    {0xff, 0xbaf7, "HUFF_PHRASE_ADDCHAR"}, // Wbaf7
    {0xff, 0xbaf3, "HUFF_ACTIVE_POINTER_BIT"}, // Wbaf3
    {0xff, 0xbaeb, "HUFF_ACTIVE_POINTER_BYTE"}, // Wbaeb
    {0xff, 0xbae7, "HUFF_BT_POINTER"}, // Wbae7

    {0xff, 0xbb03, "HUFF_MOVE_ACTIVE_POINTER"}, // Wbb03
    {0x0, 0x0, NULL}
};

OVERLAYS overlays[] =
{
{0x25, 0x0000, "CULTURE"},
{0x27, 0x0000, "FX"},
{0x31, 0x0000, "ENDING"},
{0x42, 0x0000, "DEPART"},
{0x46, 0x0000, "CHKFLIGHT-OV"},
{0x47, 0x0000, "FRACT-OV"},
{0x48, 0x0000, "ICONP-OV"},
{0x49, 0x0000, "SITE-OV"},
{0x4a, 0x0000, "HYPERMSG-OV"},
{0x4e, 0x0000, "BLT-OV"},

{0x4f, 0x0000, "MISC-OV"},
{0x50, 0x0000, "BANK-OV"},
{0x51, 0x0000, "ASSCREW-OV"},
{0x52, 0x0000, "PERSONNEL-OV"},
{0x53, 0x0000, "SHIPGRPH-OV"},
{0x54, 0x0000, "CONFIG-OV"},
{0x55, 0x0000, "TDEPOT-OV"},
{0x56, 0x0000, "EDIT-OV"},
{0x57, 0x0000, "PORTMENU-OV"},
{0x58, 0x0000, "VITA-OV"},

{0x5a, 0x0000, "EYE-OV"},
{0x5b, 0x0000, "DESCRIBE"},
{0x5c, 0x0000, "TV-OV"},
{0x5d, 0x0000, "COMM-OV"},
{0x5e, 0x0000, "COMMSPEC-OV"},
{0x5f, 0x0000, "SEED-OV"},
{0x60, 0x0000, "LISTICONS"},
{0x61, 0x0000, "MOVE-OV"},
{0x62, 0x0000, "ENGINEER"},
{0x63, 0x0000, "DOCTOR"},

{0x64, 0x0000, "ORBIT-OV"},
{0x65, 0x0000, "CAPTAIN"},
{0x66, 0x0000, "SCIENCE"},
{0x67, 0x0000, "NAVIGATR"},
{0x68, 0x0000, "SHIPBUTTONS"},
{0x69, 0x0000, "MAP-OV"},
{0x6a, 0x0000, "HYPER-OV"},
{0x6b, 0x0000, "ANALYZE-OV"},
{0x6c, 0x0000, "LAUNCH-OV"},
{0x6d, 0x0000, "FLUX-EFFECT"},

{0x6e, 0x0000, "OP-OV"},
{0x6f, 0x0000, "TVITEMS"},
{0x73, 0x0000, "BEHAV-OV"},
{0x76, 0x0000, "HEAL-OV"},
{0x77, 0x0000, "REPAIR-OV"},
{0x79, 0x0000, "PLSET-OV"},
{0x7a, 0x0000, "MAPS-OV"},
{0x7c, 0x0000, "STORM-OV"},
{0x84, 0x0000, "COMBAT-OV"},
{0x85, 0x0000, "DAMAGE-OV"},

{0x86, 0x0000, "LAND-OV"},
{0x89, 0x0000, "MUSIC"},
{0x8a, 0x0000, "MODGAME"},
{0x8b, 0x0000, "STP-OV"},
{0x8e, 0x0000, "COMBAUX"},
{0x92, 0x0000, "IT-OV"},
{0x93, 0x0000, "BLDLISTS"},
{0x94, 0x0000, "BARTER"},
{0x95, 0x0000, "MARKET"},
{0x96, 0x0000, "TVCON-OV"},
{0x97, 0x0000, "CLOUD-OV"},
{0x98, 0x0000, "JUMP"},
{0x99, 0x0000, "SHIPCON"},
{0x9a, 0x0000, "DRONE"},
{0x9b, 0x0000, "WEAPONS"},
{0x00, 0x0000, NULL},
};

#endif
