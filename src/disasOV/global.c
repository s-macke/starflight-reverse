
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
    {0xff, 0x61a2, "(ORIGINATOR)"}, // "(ORIGIN"
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
    {0xff, 0x62ff, "(AORIGINATOR)"}, // "(AORIGI"
    {0xff, 0x630f, "THIS-REGION"}, // "THIS-RE"
    {0xff, 0x631f, "(THIS-ITEM)"}, // "(THIS-I"
    {0xff, 0x6329, "CXS"}, // W6329
    {0xff, 0x63a3, "VSTK"}, // W63a3
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
    {0xff, 0x6192, "(SCROLL-BOX)"}, // "(SCROLL"
    {0xff, 0x61b2, "(SCROLL-CONT)"}, // "(SCROLL"
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
    {0xff, 0x05ac, "CONTEXT"}, // "CONTEXT"
    {0xff, 0x38ad, "SAVE-BUFFERS2"}, // "SAVE-BU"
    {0xff, 0x7b4f, "SAVE-BUFFERS"}, // "SAVE-BU"
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
    {0xff, wordpRINT, "SET_STR_AS_PARAM"}, // "W3f3b"
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
    {0xff, 0x5483, "LRECORD#2"}, // W5483
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

    {0x23, 0xf152, "VSXLINE"}, // WF152
    {0x23, 0xf162, ".STARLINE"}, // WF152

    {0x02, 0xe39a, "SETSCALE"}, // WE39A
    {0x02, 0xe35a, "STD"}, // WE35A
    {0x02, 0xe35e, "RATIO"}, // WE35e
    {0x02, 0xe3a6, "GENANCHORS"}, // WE3A6
    {0x02, 0xe3c0, "[RRND]"}, // WE3C0
    {0x02, 0xe3fa, "DISPLACEMENT"}, // WE3FA
    {0x02, 0xe356, "XYANCHOR"}, // WE356
    {0x02, 0xe370, "X0'"}, // WE370
    {0x02, 0xe374, "Y0'"}, // WE374
    {0x02, 0xe364, "FNULL"}, // WE364
    {0x02, 0xe380, "MERCATOR-RATIO"}, // WE380
    {0x02, 0xe386, "MERCATOR-SCALE"}, // WE386
    {0x02, 0xe541, "SETANCHORS"}, // WE541
    {0x02, 0xe537, "!HEIGHT"}, // WE537
    {0x02, 0xe78c, "FRACT-REGION"}, // WE78C
    {0x02, 0xe75e, "FRACTALIZE"}, // WE75E
    {0x02, 0xe770, "FILLARRAY"}, // WE770
    {0x02, 0xf049, "SCRLXCON"}, // WF049
    {0x02, 0xf08b, "SCRLYCON"}, // WF08B
    {0x02, 0xea21, "ANCHOR_CONTOUR"}, // WEA21
    {0x02, 0xea97, "FRACT_CONTOUR"}, // WEA97
    {0x02, 0xefb5, "UPSCRL"}, // WEFB5
    {0x02, 0xefd9, "DNSCRL"}, // WEFD9
    {0x02, 0xeffb, "RTSCRL"}, // WEFFB
    {0x02, 0xf023, "LFSCRL"}, // WF023
    {0x02, 0xecc6, "BUILD-CONTINENTS"}, // WECC6
    {0x02, 0xef86, "REDUCE-ALL"}, // WEF86
    {0x02, 0xeefa, "REDUCE-FACE"}, // WEEFA
    {0x02, 0xed85, "TAD"}, // WED85
    {0x02, 0xed89, "#POL"}, // WED89
    {0x02, 0xeecc, "?MCLR"}, // WEECC
    {0x02, 0xeec2, "DROP-POLY"}, // WEEC2
    {0x02, 0xee96, "POP-POLY"}, // WEE96
    {0x02, 0xee65, "PUSH-POLY"}, // WEE65
    {0x02, 0xeee5, "MAINPOLY"}, // WEEE5
    {0x02, 0xed81, "MAINCOLOR"}, // WED81
    {0x02, 0xed8d, "CACCUM"}, // WED8D
    {0x02, 0xedd9, "MAJOR-COLOR"}, // WEDD9
    {0x02, 0xed34, "+TMP"}, // WED34
    {0x02, 0xed30, "[TMP]"}, // WED30
    {0x02, 0xed50, "@TMP"}, // WED50
    {0x02, 0xed62, "!TMP"}, // WED62
    {0x02, 0xed44, "-TMP"}, // WED44
    {0x02, 0xeb84, "POLYCOUNTER"}, // WEB84
    {0x02, 0xead1, "+FRAME"}, // WEAD1
    {0x02, 0xebfc, "?HOMOGENOUS"}, // WEBFC
    {0x02, 0xeb90, "OUTPOLY"}, // WEB90
    {0x02, 0xeb5e, "MIDPTT"}, // WEB5E
    {0x02, 0xeb06, "@X1"}, // WEB06
    {0x02, 0xeb20, "@Y1"}, // WEB20
    {0x02, 0xeb0e, "@X2"}, // WEB0E
    {0x02, 0xeb28, "@Y2"}, // WEB28
    {0x02, 0xeb16, "@XMID"}, // WEB16
    {0x02, 0xeb30, "@YMID"}, // WEB30
    {0x02, 0xeadc, "-FRAME"}, // WEADC
    {0x02, 0xeb54, "!STD"}, // WEB54
    {0x02, 0xeb38, "@STD"}, // WEB38
    {0x02, 0xeb42, "!XMID"}, // WEB42
    {0x02, 0xeb4C, "!YMID"}, // WEB4C
    {0x02, 0xeb88, "ULY"}, // WEB88
    {0x02, 0xeb8c, "ULX"}, // WEB8C
    {0x02, 0xeaf8, "!FRAME"}, // WEAF8
    {0x02, 0xeaea, "@FRAME"}, // WEAEA
    {0x02, 0xeacd, "FRAME"}, // WEACD
    {0x02, 0xe7f7, "CONTOUR-RATIO"}, // WE7F7
    {0x02, 0xe7fd, "CONTOUR-SCALE"}, // WE7FD
    {0x02, 0xe801, "INIT-CONTOUR"}, // WE801
    {0x02, 0xea37, "SUB-CON-FRACT"}, // WEA37
    {0x02, 0xe8a1, "CONANCHOR-HOR"}, // WE8A1
    {0x02, 0xe8f7, "CONANCHOR-VER"}, // WE8F7
    {0x02, 0xe921, "CONANCHOR-CNT1"}, // WE921
    {0x02, 0xe94f, "CONANCHOR-CNT2"}, // WE94F
    {0x02, 0xe985, "CONANCHOR>CONTOUR"}, // WE985
    {0x02, 0xe80f, "MERC>CONANCHOR"}, // WE80F
    {0x02, 0xe979, "SETRELORIGIN"}, // WE979
    {0x02, 0xe86f, "AV-MIDPT"}, // WE86F
    {0x02, 0xe392, "RTEMP"}, // WE392
    {0x02, 0xe6c2, "[FRACTAL]"}, // WE6C2
    {0x02, 0xe6aa, "NEWSTD"}, // WE6AA
    {0x02, 0xe691, "MIDPT"}, // WE691
    {0x02, 0xe630, "CENTER"}, // WE630
    {0x02, 0xe5fb, "EDGES"}, // WE5FB
    {0x02, 0xe368, "DY>1"}, // WE368
    {0x02, 0xe36c, "DX>1"}, // WE36C
    {0x02, 0xe5b4, "YSHIFT"}, // WE5B4
    {0x02, 0xe56d, "XSHIFT"}, // WE56D
    {0x02, 0xe50f, "[!HEIGHT]"}, // WE50F
    {0x02, 0xe38e, "RT1"}, // WE38
    {0x02, 0xe4ef, "[A@]"}, // WE4EF
    {0x02, 0xe37c, "OCELL"}, // WE37C
    {0x02, 0xe378, "SCELL"}, // WE378
    {0x02, 0xe4b9, "[ACELLADDR]"}, // WE4B9
    {0x02, 0xe469, "[SWRAP]"}, // WE469
    {0x02, 0xe3e0, "C+LIMIT"}, // WE3E0
    {0x02, 0xe38a, "RT0"}, // WE38A
    {0x02, 0xe396, "TY"}, // WE396

    {0x14, 0xeefd, ".COMM-PIC"}, // WEEFD
    {0x14, 0xd97f, "CPIC"}, // WD97F
    {0x14, 0xdadf, "OBSEQUIOUS"}, // WDADF
    {0x14, 0xdae3, "FRIENDLY"}, // WDAE3
    {0x14, 0xdae7, "NEUTRAL"}, // WDAE7
    {0x14, 0xdaeb, "HOSTILE"}, // WDAEB
    {0x14, 0xdaef, "FIGHT"}, // WDAEF

    {0x14, 0xdaf3, "THEMSELVES"}, // WDAF7
    {0x14, 0xdaf7, "OTHER_RACES"}, // WDAF7
    {0x14, 0xdafb, "GEN'L-INFO"}, // WDAFB
    {0x14, 0xdaff, "ANCIENTS"}, // WDAFF
    {0x14, 0xdb03, "OLD-EMPIRE"}, // WDB03

    {0x14, 0xdb6a, "P>ORIGINATOR"}, // WDB6A
    {0x14, 0xda13, "P-POSTURE"}, // WDA13
    {0x14, 0xda2f, "POSTURE"}, // WDA2F
    {0x14, 0xda1b, "P-SUBJECT"}, // WDA1B
    {0x14, 0xda3f, "SUBJECT"}, // WDA3F

    {0x14, 0xd998, "FPE"}, // WD998
    {0x14, 0xd99d, "HPE"}, // WD99D
    {0x14, 0xdbc9, "POSTURE-EFFECT"}, // WDBC9

    {0x05, 0xeed2, "P-TSEED"}, // WEED2
    {0x05, 0xeeec, "P-SURF"}, // WEEEC

    {0x11, 0xe4b6, "whichguy"}, // We4b6
    {0x11, 0xe0da, "creature"}, // WE0DA
    {0x11, 0xe0d6, "planet"}, // WE0D6

    {0x11, 0xf162, "set-size"}, // WF162
    {0x11, 0xebb3, "squish"}, // WEBB3
    {0x11, 0xec3f, "anger"}, // WEC3F
    {0x11, 0xec81, "durable"}, // WEC81
    {0x11, 0xec8b, "stunable"}, // WEC8B
    {0x11, 0xec95, "movers"}, // WEC95
    {0x11, 0xef31, "set.icon"}, // WEF31
    {0x11, 0xf0b0, "highness"}, // WF0B0
    {0x11, 0xf14a, "smarts"}, // WF14A
    {0x11, 0xf17a, "sculpts"}, // WF17A
    {0x11, 0xf4cc, "similarity"}, // WF4CC
    {0x11, 0xed37, "modify"}, // WED37
    {0x11, 0xedaf, "colorant"}, // WEDAF
    {0x11, 0xefdb, "paint"}, // WEFDB
    {0x11, 0xf11e, "sizer"}, // WF11E
    {0x11, 0xf1b6, "?plant"}, // WF1B6
    {0x11, 0xf256, "?icky"}, // WF256
    {0x11, 0xf384, "?something"}, // WF384
    {0x11, 0xe2de, "atmo.density"}, // WE2DE
    {0x11, 0xe2e6, "narrowest"}, // WE2E6
    {0x11, 0xe2ee, "flattest"}, // WE2EE
    {0x11, 0xe2c7, "%%"}, // WE2C7
    {0x11, 0xe2bb, "slip!"}, // WE2BB
    {0x11, 0xe2b3, "slipper"}, // WE2B3
    {0x11, 0xe29d, "scale"}, // WE29D
    {0x11, 0xe121, "lookup"}, // WE121
    {0x11, 0xe0f4, "rput"}, // WE0F4
    {0x11, 0xe100, "rget"}, // WE100
    {0x11, 0xe10c, "iaddr-array"}, // WE10C
    {0x11, 0xe285, "rand%"}, // WE285
    {0x11, 0xe5fe, "retrieve"}, // WE5FE
    {0x11, 0xebe7, "madness"}, // WEBE7
    {0x11, 0xef99, "colorize"}, // WEF99
    {0x11, 0xed63, "customize"}, // WED63
    {0x11, 0xedef, "1image"}, // WEDEF
    {0x11, 0xee1d, "2image"}, // WEE1D
    {0x11, 0xee77, "3image"}, // WEE77
    {0x11, 0xeeb1, "4image"}, // WEEB1
    {0x11, 0xe27b, "coin"}, // WE27B
    {0x11, 0xeb97, "?pure"}, // WEB97
    {0x11, 0xe598, "result"}, // WE598
    {0x11, 0xecf9, "(modify)"}, // WECF9
    {0x11, 0xe0e6, "?2dup"}, // WE0E6
    {0x11, 0xec57, "strength-rule"}, // WEC57
    {0x11, 0xE5A6, "rollem"}, // WE5A6
    {0x11, 0xE570, "CHANCE"}, // WE570
    {0x11, 0xE4D8, "PROPS"}, // WE4D8
    {0x11, 0xE4CA, "MAPS"}, // WE4CA
    {0x11, 0xE291, "crandom"}, // WE291
    {0x11, 0xE0DE, "difind"}, // WE0DE
    {0x11, 0xF0FA, "(size)"}, // WF0FA

    //{0xff, 0xD875, "does>"}, // WD875 //very strange word in LP-OV

    // creature data
    {0x11, 0xE2F6, "shape"}, // WE2F6
    {0x11, 0xE2FE, "exterior"}, // WE2FE
    {0x11, 0xE306, "size.index"}, // WE306
    {0x11, 0xE316, "reddest"}, // WE316
    {0x11, 0xE31E, "bluest"}, // WE31E
    {0x11, 0xE326, "texture"}, // WE326
    {0x11, 0xE3AE, "i.level"}, // WE3AE
    {0x11, 0xE3BE, "proportion"}, // WE3BE
    {0x11, 0xe30e, "niche"}, // WE30E
    {0x11, 0xE346, "d#"}, // WE346
    {0x11, 0xE33E, "d.append"}, // WE33E
    {0x11, 0xE3DE, "d.struc"}, // WE3DE
    {0x11, 0xE3E6, "d.propor"}, // WE3E6
    {0x11, 0xE3EE, "d.size"}, // WE3FE
    {0x11, 0xE3C6, "d.hue"}, // WE3C6
    {0x11, 0xE3CE, "d.tint"}, // WE3CE
    {0x11, 0xE3D6, "d.lumens"}, // WE3D6
    {0x11, 0xE336, "w#"}, // WE336
    {0x11, 0xE32E, "w.append"}, // WE32E
    {0x11, 0xE40E, "w.struc"}, // WE40E
    {0x11, 0xE416, "w.propor"}, // WE416
    {0x11, 0xE41E, "w.size"}, // WE42E
    {0x11, 0xE3F6, "w.hue"}, // WE3F6
    {0x11, 0xE3FE, "w.tint"}, // WE3FE
    {0x11, 0xE3F6, "w.lumens"}, // WE3F6
    {0x11, 0xE356, "a#"}, // WE356
    {0x11, 0xE34E, "a.append"}, // WE34E
    {0x11, 0xE43E, "a.struc"}, // WE43E
    {0x11, 0xE446, "a.propor"}, // WE446
    {0x11, 0xE44E, "a.size"}, // WE45E
    {0x11, 0xE426, "a.hue"}, // WE426
    {0x11, 0xE42E, "a.tint"}, // WE42E
    {0x11, 0xE436, "a.lumens"}, // WE436
    {0x11, 0xE366, "g#"}, // WE366
    {0x11, 0xE35E, "g.append"}, // WE35E
    {0x11, 0xE46E, "g.struc"}, // WE47E
    {0x11, 0xE476, "g.propor"}, // WE476
    {0x11, 0xE47E, "g.size"}, // WE48E
    {0x11, 0xE456, "g.hue"}, // WE456
    {0x11, 0xE45E, "g.tint"}, // WE45E
    {0x11, 0xE466, "g.lumens"}, // WE466
    {0x11, 0xE36E, "g.mobility"}, // WE36E
    {0x11, 0xe4a6, "resembles"}, // WE4A6
    {0x11, 0xE4AE, "size"}, // WE4AE
    {0x11, 0xE39E, "i.level"}, // WE39E
    {0x11, 0xE49E, "icon"}, // WE49E
    {0x11, 0xE486, "s.hue"}, // WE486
    {0x11, 0xE48E, "s.tint"}, // WE48E
    {0x11, 0xE496, "s.lumens"}, // WE496
    {0x11, 0xE37E, "slowest"}, // WE37E
    {0x11, 0xE386, "fastest"}, // WE386
    {0x11, 0xE376, "a.mobility"}, // WE376
    {0x11, 0xE3A6, "a.level"}, // WE3A6
    {0x11, 0xE38E, "stun.effect"}, // WE38E
    {0x11, 0xE396, "hit.points"}, // WE396
    {0x11, 0xE3B6, "volume"}, // WE3B6
/*
    {0x11, 0xE37E, "orlo"}, // WE37E
    {0x11, 0xE386, "orhi"}, // WE386
    {0x11, 0xE3BE, "height"}, // WE3BE
*/

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
    {0x2b, 0xEC72, "ATMO.ACTIVITY"}, // WEC72
    {0x2b, 0xEC7A, "ATMO.DENSITY"}, // WEC7A
    {0x2b, 0xEC5A, "SURFTYPE"}, // WEC5A
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
{0x0, 0x0000, NULL}
};

STRINGENTRY strings[]=
{
  { .offset=0x01c29b, .string="NORTH"},
  { .offset=0x00d42a, .string="GARGANTUAN"},
  { .offset=0x00d414, .string="HUMONGOUS"},
  { .offset=0x00d400, .string="MASSIVE"},
  { .offset=0x00d3df, .string="HUGE"},
  { .offset=0x00d3c8, .string="VERY LARGE"},
  { .offset=0x00d3b6, .string="LARGE"},
  { .offset=0x00d3a6, .string="BIG"},
  { .offset=0x00d394, .string="SMALL"},
  { .offset=0x00d383, .string="TINY"},
  { .offset=0x00d371, .string="BLACK"},
  { .offset=0x00d360, .string="GREY"},
  { .offset=0x00d34e, .string="WHITE"},
  { .offset=0x00d334, .string="MULTI-COLORED"},
  { .offset=0x00d31f, .string="LAVENDAR"},
  { .offset=0x00d309, .string="TURQUOISE"},
  { .offset=0x00d2f2, .string="LIME GREEN"},
  { .offset=0x00d2d7, .string="BROWNISH GREEN"},
  { .offset=0x00d2bc, .string="COPPER-COLORED"},
  { .offset=0x00d2aa, .string="BEIGE"},
  { .offset=0x00d298, .string="BROWN"},
  { .offset=0x00d287, .string="PINK"},
  { .offset=0x00d26e, .string="RUST-COLORED"},
  { .offset=0x00d25a, .string="MARROON"},
  { .offset=0x00d247, .string="PURPLE"},
  { .offset=0x00d234, .string="VIOLET"},
  { .offset=0x00d21e, .string="VERY BLUE"},
  { .offset=0x00d20d, .string="BLUE"},
  { .offset=0x00d1f6, .string="BLUE-GREEN"},
  { .offset=0x00d1e4, .string="GREEN"},
  { .offset=0x00d1c8, .string="YELLOWISH GREEN"},
  { .offset=0x00d1af, .string="LEMON YELLOW"},
  { .offset=0x00d19c, .string="YELLOW"},
  { .offset=0x00d17f, .string="YELLOWISH ORANGE"},
  { .offset=0x00d16c, .string="ORANGE"},
  { .offset=0x00d151, .string="REDDISH ORANGE"},
  { .offset=0x00d141, .string="RED"},
  { .offset=0x00d12b, .string="ATTACKING"},
  { .offset=0x00d117, .string="STUNNED"},
  { .offset=0x00d104, .string="EATING"},
  { .offset=0x00d0f1, .string="EATING"},
  { .offset=0x00d0db, .string="WANDERING"},
  { .offset=0x00d0c7, .string="SESSILE"},
  { .offset=0x00d0b4, .string="MOBILE"},
  { .offset=0x00d09f, .string="AIRBORNE"},
  { .offset=0x00d08a, .string="FLOATING"},
  { .offset=0x00d077, .string="FLYING"},
  { .offset=0x00d063, .string="LEAPING"},
  { .offset=0x00d04f, .string="JUMPING"},
  { .offset=0x00d03b, .string="HOPPING"},
  { .offset=0x00d027, .string="WALKING"},
  { .offset=0x00d014, .string="MOVING"},
  { .offset=0x00d000, .string="ROLLING"},
  { .offset=0x00cfe9, .string="CRAWLING"},
  { .offset=0x00cfd2, .string="SLITHERING"},
  { .offset=0x00cfbd, .string="CREEPING"},
  { .offset=0x00cfaa, .string="OOZING"},
  { .offset=0x00cf95, .string="DELICATE"},
  { .offset=0x00cf81, .string="WILLOWY"},
  { .offset=0x00cf6d, .string="SPINDLY"},
  { .offset=0x00cf5c, .string="THIN"},
  { .offset=0x00cf47, .string="GRACEFUL"},
  { .offset=0x00cf33, .string="SLENDER"},
  { .offset=0x00cf20, .string="NARROW"},
  { .offset=0x00cf0a, .string="ELONGATED"},
  { .offset=0x00cef8, .string="SQUAT"},
  { .offset=0x00cee6, .string="THICK"},
  { .offset=0x00ced5, .string="WIDE"},
  { .offset=0x00cec4, .string="FLAT"},
  { .offset=0x00ceae, .string="FLATTENED"},
  { .offset=0x00ce9d, .string="HAIR"},
  { .offset=0x00ce8d, .string="FUR"},
  { .offset=0x00ce7b, .string="ARMOR"},
  { .offset=0x00ce6a, .string="SKIN"},
  { .offset=0x00ce59, .string="HEAD"},
  { .offset=0x00ce48, .string="BARK"},
  { .offset=0x00ce36, .string="STALK"},
  { .offset=0x00ce25, .string="STEM"},
  { .offset=0x00ce14, .string="MANE"},
  { .offset=0x00ce02, .string="CREST"},
  { .offset=0x00cdf0, .string="SHELL"},
  { .offset=0x00cddf, .string="TAIL"},
  { .offset=0x00cdca, .string="BAZWANGO"},
  { .offset=0x00cdb8, .string="SNOUT"},
  { .offset=0x00cda6, .string="CILIA"},
  { .offset=0x00cd95, .string="FEET"},
  { .offset=0x00cd80, .string="BRANCHES"},
  { .offset=0x00cd6e, .string="VINES"},
  { .offset=0x00cd5b, .string="LEAVES"},
  { .offset=0x00cd49, .string="BULBS"},
  { .offset=0x00cd35, .string="BERRIES"},
  { .offset=0x00cd22, .string="FRUITS"},
  { .offset=0x00cd0e, .string="FLOWERS"},
  { .offset=0x00ccfb, .string="QUILLS"},
  { .offset=0x00cce9, .string="CLAWS"},
  { .offset=0x00ccd6, .string="PLUMES"},
  { .offset=0x00ccc1, .string="WHISKERS"},
  { .offset=0x00ccaf, .string="TEETH"},
  { .offset=0x00cc9c, .string="THORNS"},
  { .offset=0x00cc89, .string="SCALES"},
  { .offset=0x00cc73, .string="BILATERAL"},
  { .offset=0x00cc60, .string="RADIAL"},
  { .offset=0x00cc4a, .string="SPHERICAL"},
  { .offset=0x00cc34, .string="IRREGULAR"},
  { .offset=0x00cc1e, .string="AMORPHOUS"},
  { .offset=0x00cc00, .string="PATTERNED SURFACE"},
  { .offset=0x00cbd5, .string="SURFACE"},
  { .offset=0x00cbb7, .string="FEATHERED SURFACE"},
  { .offset=0x00cb9f, .string="EXOSKELETON"},
  { .offset=0x00cb8e, .string="WITH"},
  { .offset=0x00cb77, .string="AGGRESSION"},
  { .offset=0x00cb65, .string="LEVEL"},
  { .offset=0x00cb54, .string="MANY"},
  { .offset=0x00cb46, .string="."},
  { .offset=0x00cb37, .string="M."},
  { .offset=0x00cb27, .string="CM."},
  { .offset=0x00cb16, .string="TALL"},
  { .offset=0x00cb02, .string="ROUGHLY"},
  { .offset=0x00cae8, .string="APPROXIMATELY"},
  { .offset=0x00cad1, .string="ONE OF THE"},
  { .offset=0x00cabe, .string="IN THE"},
  { .offset=0x00caaf, .string="OR"},
  { .offset=0x00ca9a, .string="COULD BE"},
  { .offset=0x00ca7f, .string="REPRESENTED BY"},
  { .offset=0x00ca71, .string=","},
  { .offset=0x00ca5f, .string="BEING"},
  { .offset=0x00ca4e, .string="MANY"},
  { .offset=0x00ca3e, .string="ITS"},
  { .offset=0x00ca2c, .string="THEIR"},
  { .offset=0x00ca19, .string="ANIMAL"},
  { .offset=0x00ca09, .string="AND"},
  { .offset=0x00c9f7, .string="ABOUT"},
  { .offset=0x00c9e4, .string="AROUND"},
  { .offset=0x00c9d6, .string=" "},
  { .offset=0x00c9c1, .string="LIFEFORM"},
  { .offset=0x00c9ac, .string="CREATURE"},
  { .offset=0x00c99b, .string="SOME"},
  { .offset=0x00c98d, .string="A"},
  { .offset=0x00c97e, .string="AN"},
  { .offset=0x00c970, .string="S"},
  { .offset=0x00c960, .string="HAS"},
  { .offset=0x00c94f, .string="HAVE"},
  { .offset=0x00c940, .string="IT"},
  { .offset=0x00c92f, .string="THEY"},
  { .offset=0x00c91f, .string="ARE"},
  { .offset=0x00c910, .string="IS"},
  { .offset=0x00c8fe, .string="THERE"},
  { .offset=0x00c8eb, .string="SINEWY"},
  { .offset=0x00c8d9, .string="SHORT"},
  { .offset=0x00c8c8, .string="LONG"},
  { .offset=0x00c8b5, .string="STUBBY"},
  { .offset=0x00c898, .string="POWERFUL LOOKING"},
  { .offset=0x00c883, .string="MUSCULAR"},
  { .offset=0x00c86f, .string="JOINTED"},
  { .offset=0x00c855, .string="MULTI-JOINTED"},
  { .offset=0x00c83e, .string="MEMBRANOUS"},
  { .offset=0x00c82b, .string="SPINEY"},
  { .offset=0x00c817, .string="GNARLED"},
  { .offset=0x00c800, .string="PREHENSILE"},
  { .offset=0x00c7e6, .string="GELATINOUS"},
  { .offset=0x00c7d4, .string="RIGID"},
  { .offset=0x00c7bf, .string="FEATHERY"},
  { .offset=0x00c7ac, .string="CURVED"},
  { .offset=0x00c797, .string="SWEEPING"},
  { .offset=0x00c781, .string="INTRICATE"},
  { .offset=0x00c76e, .string="WEBBED"},
  { .offset=0x00c75b, .string="FLOPPY"},
  { .offset=0x00c745, .string="VESTIGIAL"},
  { .offset=0x00c72f, .string="BUTTERFLY"},
  { .offset=0x00c71f, .string="BAT"},
  { .offset=0x00c70b, .string="BULBOUS"},
  { .offset=0x00c6f7, .string="BULGING"},
  { .offset=0x00c6e2, .string="GLOBULAR"},
  { .offset=0x00c6ce, .string="POINTED"},
  { .offset=0x00c6ba, .string="PRONGED"},
  { .offset=0x00c6a5, .string="FLEXIBLE"},
  { .offset=0x00c693, .string="SHARP"},
  { .offset=0x00c67b, .string="RAZOR SHARP"},
  { .offset=0x00c668, .string="HOOKED"},
  { .offset=0x00c654, .string="CONICAL"},
  { .offset=0x00c642, .string="BLUNT"},
  { .offset=0x00c62f, .string="SPIKED"},
  { .offset=0x00c615, .string="SPIRAL-SHAPED"},
  { .offset=0x00c5fd, .string="RETRACTIBLE"},
  { .offset=0x00c5eb, .string="SABER"},
  { .offset=0x00c5d6, .string="ARMOURED"},
  { .offset=0x00c5c3, .string="CUPPED"},
  { .offset=0x00c5af, .string="SPLAYED"},
  { .offset=0x00c598, .string="PROTRUDING"},
  { .offset=0x00c587, .string="OVAL"},
  { .offset=0x00c571, .string="OCTAGONAL"},
  { .offset=0x00c55f, .string="ROUND"},
  { .offset=0x00c54c, .string="CUBOID"},
  { .offset=0x00c536, .string="SCALLOPED"},
  { .offset=0x00c51a, .string="FINELY SCULPTED"},
  { .offset=0x00c503, .string="PUPIL-LESS"},
  { .offset=0x00c4ee, .string="DEEP SET"},
  { .offset=0x00c4d7, .string="TRIANGULAR"},
  { .offset=0x00c4c2, .string="CIRCULAR"},
  { .offset=0x00c4af, .string="GAPING"},
  { .offset=0x00c499, .string="CAVERNOUS"},
  { .offset=0x00c483, .string="HEXAGONAL"},
  { .offset=0x00c470, .string="SQUARE"},
  { .offset=0x00c45b, .string="DETAILED"},
  { .offset=0x00c443, .string="CYLINDRICAL"},
  { .offset=0x00c42b, .string="RECTANGULAR"},
  { .offset=0x00c416, .string="BRANCHED"},
  { .offset=0x00c400, .string="ROOT-LIKE"},
  { .offset=0x00c3e7, .string="STALK-LIKE"},
  { .offset=0x00c3d1, .string="STEM-LIKE"},
  { .offset=0x00c3bb, .string="WHIP-LIKE"},
  { .offset=0x00c3a5, .string="FANG-LIKE"},
  { .offset=0x00c38f, .string="LEAF-LIKE"},
  { .offset=0x00c37a, .string="FIN-LIKE"},
  { .offset=0x00c363, .string="BLADE-LIKE"},
  { .offset=0x00c34c, .string="THORN-LIKE"},
  { .offset=0x00c335, .string="TALON-LIKE"},
  { .offset=0x00c31f, .string="HOLE-LIKE"},
  { .offset=0x00c308, .string="SLASH-LIKE"},
  { .offset=0x00c2e9, .string="IRREGULARLY-SHAPED"},
  { .offset=0x00c2d2, .string="FAN-SHAPED"},
  { .offset=0x00c2ba, .string="TEAR-SHAPED"},
  { .offset=0x00c2a2, .string="DOME-SHAPED"},
  { .offset=0x00c288, .string="SPHERE-SHAPED"},
  { .offset=0x00c271, .string="ROD-SHAPED"},
  { .offset=0x00c258, .string="SPEAR-SHAPED"},
  { .offset=0x00c23e, .string="NEEDLE-SHAPED"},
  { .offset=0x00c224, .string="SAUCER-SHAPED"},
  { .offset=0x00c20c, .string="DISK-SHAPED"},
  { .offset=0x00c1f4, .string="DISH-SHAPED"},
  { .offset=0x00c1dc, .string="BOWL-SHAPED"},
  { .offset=0x00c1c3, .string="HEART-SHAPED"},
  { .offset=0x00c1a8, .string="DIAMOND-SHAPED"},
  { .offset=0x00c18d, .string="PYRAMID-SHAPED"},
  { .offset=0x00c17c, .string="SOFT"},
  { .offset=0x00c16a, .string="GUMMY"},
  { .offset=0x00c158, .string="GOOEY"},
  { .offset=0x00c145, .string="STICKY"},
  { .offset=0x00c131, .string="VISCOUS"},
  { .offset=0x00c11c, .string="STEAMING"},
  { .offset=0x00c107, .string="BLOOPING"},
  { .offset=0x00c0f4, .string="SMOOTH"},
  { .offset=0x00c0e2, .string="ROUGH"},
  { .offset=0x00c0cb, .string="WIND-SWEPT"},
  { .offset=0x00c0b7, .string="POWDERY"},
  { .offset=0x00c0a7, .string="WET"},
  { .offset=0x00c092, .string="GRAVELLY"},
  { .offset=0x00c079, .string="FINE-GRAINED"},
  { .offset=0x00c067, .string="ROCKY"},
  { .offset=0x00c04f, .string="CRYSTALLINE"},
  { .offset=0x00c03c, .string="SHINEY"},
  { .offset=0x00c028, .string="CRACKED"},
  { .offset=0x00c013, .string="DRIPPING"},
  { .offset=0x00c000, .string="GLASSY"},
  { .offset=0x00bfe1, .string="JAGGED"},
  { .offset=0x00bfcf, .string="SLICK"},
  { .offset=0x00bfbc, .string="BROKEN"},
  { .offset=0x00bfa9, .string="CRUSTY"},
  { .offset=0x00bf98, .string="DAMP"},
  { .offset=0x00bf85, .string="VEINED"},
  { .offset=0x00bf73, .string="BUMPY"},
  { .offset=0x00bf60, .string="COARSE"},
  { .offset=0x00bf4e, .string="SANDY"},
  { .offset=0x00bf3b, .string="POCKED"},
  { .offset=0x00bf26, .string="STRIATED"},
  { .offset=0x00bf14, .string="DUSTY"},
  { .offset=0x00bf01, .string="CRAGGY"},
  { .offset=0x00beee, .string="GNARLY"},
  { .offset=0x00bedb, .string="THORNY"},
  { .offset=0x00beca, .string="OILY"},
  { .offset=0x00beb6, .string="FIBROUS"},
  { .offset=0x00bea3, .string="SPONGY"},
  { .offset=0x00be93, .string="DRY"},
  { .offset=0x00be7e, .string="LEATHERY"},
  { .offset=0x00be6b, .string="FLESHY"},
  { .offset=0x00be5a, .string="HARD"},
  { .offset=0x00be41, .string="PLASTIC-LIKE"},
  { .offset=0x00be2f, .string="HORNY"},
  { .offset=0x00be1b, .string="RUBBERY"},
  { .offset=0x00be09, .string="WARTY"},
  { .offset=0x00bdf7, .string="HAIRY"},
  { .offset=0x00bde5, .string="FUZZY"},
  { .offset=0x00bdd1, .string="BRISTLY"},
  { .offset=0x00bdbc, .string="SERRATED"},
  { .offset=0x00bda7, .string="METALLIC"},
  { .offset=0x00bd91, .string="SHIVERING"},
  { .offset=0x00bd7d, .string="MUCOUSY"},
  { .offset=0x00bd6b, .string="LEAFY"},
  { .offset=0x00bd55, .string="CHITENOUS"},
  { .offset=0x00bd43, .string="BONEY"},
  { .offset=0x00bd32, .string="DULL"},
  { .offset=0x00bd20, .string="FILMY"},
  { .offset=0x00bd0e, .string="DOWNY"},
  { .offset=0x00bcfd, .string="WAXY"},
  { .offset=0x00bce9, .string="KNURLED"},
  { .offset=0x00bcd6, .string="MATTED"},
  { .offset=0x00bcc4, .string="CURLY"},
  { .offset=0x00bcb0, .string="TANGLED"},
  { .offset=0x00bc9e, .string="WIREY"},
  { .offset=0x00bc8a, .string="FLOWING"},
  { .offset=0x00bc77, .string="RUSTED"},
  { .offset=0x00bc62, .string="THATCHED"},
  { .offset=0x00bc52, .string="ARM"},
  { .offset=0x00bc3e, .string="STINGER"},
  { .offset=0x00bc29, .string="TENTACLE"},
  { .offset=0x00bc13, .string="PSEUDOPOD"},
  { .offset=0x00bc00, .string="PINCER"},
  { .offset=0x00bbe0, .string="MOUTH"},
  { .offset=0x00bbd0, .string="LEG"},
  { .offset=0x00bbc0, .string="EYE"},
  { .offset=0x00bbaa, .string="EYE STALK"},
  { .offset=0x00bb95, .string="EYE SPOT"},
  { .offset=0x00bb7c, .string="COMPOUND EYE"},
  { .offset=0x00bb69, .string="FEELER"},
  { .offset=0x00bb54, .string="MANDIBLE"},
  { .offset=0x00bb3f, .string="ACID SAC"},
  { .offset=0x00bb28, .string="POISON SAC"},
  { .offset=0x00bb04, .string="FENDIBULAR EXTREMULATOR"},
  { .offset=0x00baf1, .string="HOOTER"},
  { .offset=0x00bae0, .string="TATA"},
  { .offset=0x00bac9, .string="PROJECTION"},
  { .offset=0x00bab9, .string="EAR"},
  { .offset=0x00baa2, .string="PROTRUSION"},
  { .offset=0x00ba8c, .string="FLOAT SAC"},
  { .offset=0x00ba7b, .string="WING"},
  { .offset=0x00ba6a, .string="HORN"},
  { .offset=0x00ba59, .string="TUSK"},
  { .offset=0x00ba48, .string="BEAK"},
  { .offset=0x00ba31, .string="SHIMMERING"},
  { .offset=0x00ba19, .string="TRANSLUCENT"},
  { .offset=0x00ba01, .string="LUMINESCENT"},
  { .offset=0x00b9ed, .string="GLOWING"},
  { .offset=0x00b9da, .string="BRIGHT"},
  { .offset=0x00b9c5, .string="BLINDING"},
  { .offset=0x00b9b3, .string="LIGHT"},
  { .offset=0x00b99f, .string="GREYISH"},
  { .offset=0x00b98e, .string="DARK"},
  { .offset=0x00b96e, .string="OMNIVEROUS PRODUCER"},
  { .offset=0x00b959, .string="OMNIVORE"},
  { .offset=0x00b938, .string="CARNIVEROUS PRODUCER"},
  { .offset=0x00b922, .string="CARNIVORE"},
  { .offset=0x00b901, .string="HERBIVEROUS PRODUCER"},
  { .offset=0x00b8eb, .string="HERBIVORE"},
  { .offset=0x00b8d6, .string="PRODUCER"},
  { .offset=0x00b8ba, .string="CARPET LIFEFORM"},
  { .offset=0x00b8a1, .string="ANEMONE-LIKE"},
  { .offset=0x00b88b, .string="EWOK-LIKE"},
  { .offset=0x00b871, .string="STARFISH-LIKE"},
  { .offset=0x00b85d, .string="FUNGOID"},
  { .offset=0x00b847, .string="ROCK-LIKE"},
  { .offset=0x00b82f, .string="TURTLE-LIKE"},
  { .offset=0x00b817, .string="SPIDER-LIKE"},
  { .offset=0x00b800, .string="SNAKE-LIKE"},
  { .offset=0x00b7d9, .string="SNAIL-LIKE"},
  { .offset=0x00b7c3, .string="SLUG-LIKE"},
  { .offset=0x00b7ab, .string="RODENT-LIKE"},
  { .offset=0x00b795, .string="REPTILIAN"},
  { .offset=0x00b77f, .string="BEAR-LIKE"},
  { .offset=0x00b768, .string="PLANT-LIKE"},
  { .offset=0x00b752, .string="INSECTOID"},
  { .offset=0x00b73d, .string="HUMANOID"},
  { .offset=0x00b723, .string="DINOSAUR-LIKE"},
  { .offset=0x00b70d, .string="BIRD-LIKE"},
  { .offset=0x00b6f3, .string="ANTELOPE-LIKE"},
  { .offset=0x00b6da, .string="BALLOON-LIKE"},
  { .offset=0x00b6c4, .string="TREE-LIKE"},
  { .offset=0x00b6af, .string="AMOEBOID"},
  { .offset=0x00b699, .string="GROTESQUE"},
  { .offset=0x00b67e, .string="INSANELY GREAT"},
  { .offset=0x00b668, .string="RIGHTEOUS"},
  { .offset=0x00b651, .string="INCREDIBLE"},
  { .offset=0x00b63b, .string="BEAUTIFUL"},
  { .offset=0x00b625, .string="SEDUCTIVE"},
  { .offset=0x00b610, .string="GORGEOUS"},
  { .offset=0x00b5f9, .string="FUNKADELIC"},
  { .offset=0x00b5e3, .string="BODACIOUS"},
  { .offset=0x00b5cd, .string="UPLIFTING"},
  { .offset=0x00b5b8, .string="EDIFYING"},
  { .offset=0x00b5a4, .string="AWESOME"},
  { .offset=0x00b588, .string="TOTALLY RADICAL"},
  { .offset=0x00b571, .string="OUTRAGEOUS"},
  { .offset=0x00b55a, .string="NAUSEATING"},
  { .offset=0x00b548, .string="GRODY"},
  { .offset=0x00b535, .string="GROOVY"},
  { .offset=0x00b523, .string="MONDO"},
  { .offset=0x00b50e, .string="BITCHIN'"},
  { .offset=0x00b4f6, .string="SUBFREEZING"},
  { .offset=0x00b4e2, .string="FURNACE"},
  { .offset=0x00b4ce, .string="SEARING"},
  { .offset=0x00b4b9, .string="TROPICAL"},
  { .offset=0x00b4a3, .string="TEMPERATE"},
  { .offset=0x00b490, .string="ARCTIC"},
  { .offset=0x00b479, .string="NORTH WEST"},
  { .offset=0x00b468, .string="WEST"},
  { .offset=0x00b451, .string="SOUTH WEST"},
  { .offset=0x00b43f, .string="SOUTH"},
  { .offset=0x00b428, .string="SOUTH EAST"},
  { .offset=0x00b417, .string="EAST"},
  { .offset=0x00b400, .string="NORTH EAST"},
  { .offset=0x00b3db, .string="NORTH"},
  { .offset=0x0094a1, .string="ENTRY 4 CONT.- THIS CRYSTAL PLANET WAS THEIR LAST DEFENSE. I CAN HARDLY BLAME THEM. CARBON BASED LIFE MUST HAVE SEEMED SOMETHING LIKE A VIRUS TO THEM. JUST THE SAME, I HOPE THE EXPLOSION WORKS. IT LOOKS LIKE AT THIS POINT IT'S US OR THEM. MCCONNELL OUT."},
  { .offset=0x009400, .string="ENTRY 4 CONT.- THEIR METABOLISM IS SO MUCH SLOWER THAN OURS THEY LIVE IN AN ENTIRELY DIFFERENT TIME FRAMEWORK. I DON'T THINK THEY EVEN KNOW WE ARE SENTIENT. I BELIEVE IT WAS ONLY BECAUSE OF A LINK THRU THE CRYSTAL PLANET THAT CONTACT WAS MADE AT ALL."},
  { .offset=0x00933f, .string="ENTRY 4 CONT.- I CAN HARDLY BELIEVE IT! THOSE WEIRD LUMPS ARE ACTUALLY INTELLIGENT LIFE. THE ANCIENTS ARE ENDURIUM! AND WE HAVE SPENT HUNDREDS OF YEARS HUNTING THEM TO BURN FOR FUEL IN OUR SHIPS."},
  { .offset=0x0092a6, .string="ENTRY 4 CONT. - I WISH THERE WAS SOME WAY FOR ME TO COMMUNICATE WHAT I HAVE FOUND. THE EXPLOSION IS SET FOR T-MINUS 40 MINUTES. IN THE EVENT THAT THE CRYSTAL PLANET IS NOT DESTROYED, I CAN ONLY HOPE THAT THIS LOG IS FOUND BY SOMEONE."},
  { .offset=0x009222, .string="ENTRY 4 - I HAVE JUST HAD AN ASTOUNDING EXPERIENCE! I CAN HARDLY BELIEVE IT BUT I SEEM TO HAVE MADE TELEPATHIC CONTACT WITH THE ANCIENTS. THEY ARE HERE! ON THE CRYSTAL PLANET, CONTROLLING IT!"},
  { .offset=0x0091a8, .string="ENTRY 3 - I HAVE REACHED THE CONTROL CENTER AND HAVE SET THE CHARGES. IT APPEARS TO BE A MASSIVE RUIN OF THE ANCIENTS. THE QUEER CRYSTALLINE LUMPS OF ENDURIUM ARE EVERYWHERE HERE."},
  { .offset=0x009146, .string="ENTRY 2 CONT. - I AM THEREFORE WRITING IN THIS LOG AS PLANNED, AND WILL ATTEMPT TO FIND A SAFE PLACE FOR IT BEFORE THE EXPLOSION."},
  { .offset=0x0090b9, .string="ENTRY 2 - IT WOULD SEEM THAT THE ELECTRO-MAGNETIC FIELD AROUND THE CRYSTAL PLANET IS, IN FACT, BLOCKING COMMUNICATIONS SINCE IT HAS BEEN AN HOUR AND I HAVE STILL RECEIVED NO TRANSMISSION FROM CRYSTAL BASE 1."},
  { .offset=0x009000, .string="LOG ENTRY, 8-8-3382, COMMANDER MCCONNELL, ENTRY 1 - I HAVE SUCCESSFULLY TELEPORTED TO THE CRYSTAL PLANET! I AM DIZZY AND HAVE EXPERIENCED A PROFOUND SENSE OF DISORIENTAION BUT OTHER THAN THAT I SEEM TO BE FINE. THE CONTROL NEXUS IS VISIBLE FROM HERE."},
  { .offset=0x008f6a, .string="LASTLY, A BOMB OF SUFFICIENT EXPLOSIVE POWER IS REQUIRED. THE ACTUAL FORCE NECESSARY IS UNKNOWN BUT OUR BEST ESTIMATES INDICATE SOMETHING ON THE ORDER OF BEVA-TONS."},
  { .offset=0x008f06, .string="PLANET IN SYSTEM 20,198. UNFORTUNATELY THIS IS DEEP IN UHLEK SPACE. THE CRYSTAL PLANET IS ONLY VULNERABLE AT THE CONTROL NEXUS."},
  { .offset=0x008e67, .string="THIS IS IN THE POSSESSION OF THE VELOX AND IS KNOWN TO THEM AS THE SMALL EGG. THE SECOND DEVICE IS THE CRYSTAL CONE. THIS IS NEEDED TO IDENTIFY FROM ORBIT THE LOCATION OF THE CONTROL NEXUS, AND IS KNOWN TO BE AT COORDINATES 29S X 55W ON THE FIRST"},
  { .offset=0x008dbf, .string="RESEARCH COUNCIL RECOMMENDATION 5-5-3386 - ...THEREFORE IT IS OUR FINDING THAT THE ONLY EFFECTIVE MEANS OF DESTROYING THE CRYSTAL PLANET IS WITH THE USE OF 3 DEVICES. THE FIRST OF THESE, THE CRYSTAL ORB, IS NEEDED TO NULLIFY THE DEFENSES OF THE PLANET."},
  { .offset=0x008d27, .string="AT EXACTLY 12 HRS AND 11 MINUTES AFTER HIS DEPARTURE WE WITNESSED AN EXPLOSION ON THE PLANET'S SURFACE. WE ARE NOW SENDING OUT DRONES TO TEST THE DEFENSES OF THE CRYSTAL PLANET IN AN ATTEMPT TO ASCERTAIN THE EFFECT OF THE EXPLOSION..."},
  { .offset=0x008c9c, .string="COMMUNICATION TRANSCRIPT - CRYSTAL BASE 1 TO AKTERON INSTITUTE, 8-8-3382   ...BEEN 14 HOURS SINCE COMMANDER MCCONNELL WAS SENT DOWN. AT NO POINT HAVE WE RECEIVED ANY COMMUNICATION FROM HIM."},
  { .offset=0x008c00, .string="HE WILL LOCATE AND DESTROY THE CONTROL CENTER OF THE CRYSTAL PLANET. POTENTIAL PROBLEMS INCLUDE - TELPORTATION RELIABILITY, INSUFFICIENT EXPLOSIVE POWER, COMMUNICATIONS THROUGH THE MAGNETIC FIELD GENERATED BY THE PLANET, LOCATION OF..."},
  { .offset=0x008b43, .string="BECAUSE OF THE PROBLEMS INVOLVED WITH A TELEPORTATION OF THIS DISTANCE WE WILL NOT BE ABLE TO RETRIEVE THE OPERATIVE. THE VOLUNTEER WILL BE SENT IN WITH A NUCLEAR EXPLOSIVE. IF POSSIBLE HE WILL STAY IN COMMUNICATION WITH THE STARBASE."},
  { .offset=0x008a9e, .string="REPORT - PROJECT TELEPORT, 1-2-3380 - ...IN SHORT WE HAVE DEVISED A SCHEME TO TELEPORT AN OPERATIVE FROM A SPECIALLY BUILT STARBASE (WHICH WILL BE KNOWN AS CRYSTAL BASE 1) TO THE SURFACE OF THE CRYSTAL PLANET."},
  { .offset=0x008a58, .string="SIGN - RONALD PETER GAAL MEMORIAL RESEARCH STATION."},
  { .offset=0x0089db, .string="THEIR BOMB BLEW OUT THE ENTIRE AFT QUARTER SECTION OF THE SHIP. I DON'T KNOW HOW WE MADE IT DOWN TO THE SURFACE IN THAT DEFECTIVE POD. I JUST HOPE OUR LUCK HOLDS OUT. CAPTAIN OUT."},
  { .offset=0x008940, .string="THE MECHANS ARE CURRENTLY IN PREPARATION PHASE CODE BLUE. OUR ARRIVAL WOULD HAVE INITIATED CODE RED, AND WE WOULD HAVE TAKEN CONTROL OF THE MECHANS. I BELIEVE OUR SHIP WAS SABOTAGED BY THE LAYTONITES, DAMN THEM. HALF OF MY CREW IS DEAD."},
  { .offset=0x00888f, .string="CAPTAIN'S LOG ENTRY - OCTOBER 31, 3480 - WE HAVE MANAGED TO SET UP A CAMP OF SORTS HERE, AND HAVE ENOUGH SUPPLIES TO KEEP US ALIVE FOR SEVERAL MONTHS. WE WERE ON OUR WAY TO ESTABLISH THE NOAH 9 COLONY WORLD OF 'HEAVEN' WHEN THE SHIP BLEW."},
  { .offset=0x008800, .string="RECONNAISSANCE REPORT - TO OFFENSIVE HEADQUARTERS AT 56N X 16W ON MARDAN 2 - FIGHTING BETWEEN THE VELOX AND GAZURTOID IS STILL HEATED. WE HAVE BEEN KEEPING A LOW PROFILE AND..."},
  { .offset=0x00871f, .string="INTELLIGENCE COMMUNICATION - ...SHIP WAS ATTACKED BY THE GAZURTOID. ALL CREW WERE KILLED AND THE NEW CLOAKING DEVICE WAS STOLEN. A PROBE WAS ABLE TO TRACK THEIR SHIP'S TACHYON TRAIL TO THE SYSTEM 68,66. OTHER THAN THAT WE DON'T..."},
  { .offset=0x00867f, .string="REPORT - TO COLONY CONTROL AT 16S X 20W , PLANET 4, SYSTEM 118,146 - DUE TO THE INCREASED DEMAND FOR HYPER-TRITICALE AND A RECENT INFESTATION OF SMALL FURRY CREATURES WHICH HAVE DEPLETED OUR STOCK WE..."},
  { .offset=0x008601, .string="MICROFILM - ...REASON TO BELIEVE THERE IS A BLACK EGG DEVICE IN SOME PHLEGMAK RUINS AT 52N X 16E ON THE THIRD PLANET OF SYSTEM 238,189..."},
  { .offset=0x008597, .string="AMIDST PILES OF ALIEN BOOKS SOME WRITING FROM THE OLD EMPIRE - ...THE PYTHAGORAS CONSTELLATION AT 216,87..."},
  { .offset=0x00853b, .string="THE ONLY THING DECIPHERABLE IN SOME ALIEN WRITINGS ARE PLANETARY COORDINATES 12N X 32E ."},
  { .offset=0x0084b8, .string="WRITING IN A VARIANT OF OLD EMPIRE ENGLISH - ...HARRISON HAS LANDED AND BUILT STRUCTURES AT 44S X 137W . TO ENSURE OUR SAFETY WE MUST REPORT HIM TO THE EMPIRE."},
  { .offset=0x008400, .string="NOTES - ...INFORMATION HAS SUCCESSFULLY PINPOINTED THE TESSERACT ENERGY ENHANCER AND THE RED CYLINDER ANCIENT-RUIN LOCATER DEVICE AT 15N X 44W ON PLANET 5 OF SYSTEM 18,50 , AND AT 59N X 64W ON PLANET 3 OF SYSTEM 112,200 RESPECTIVELY..."},
  { .offset=0x0082db, .string="INSTITUTE RESEARCH REPORT TO ELOWAN HOMEWORLD BASE 60S X 45E  - WE HAVE ASCERTAINED THAT THE DEAD ZONE IS COREWARD OF THE X-COORDINATE 200. WE HAVE ALSO DETERMINED THAT THE CAUSE OF THE FLARES IS SOMEWHERE COREWARD AND UPSPIN OF OUR PRESENT LOCATION..."},
  { .offset=0x008260, .string="NEWSPAPER - ... OF THE EMPIRE NOW SUSPECT THAT HARRISON'S BASE IS HERE ON NEW SCOTLAND AND THAT HIS TROOPS ARE SECRETED HERE AMONGST OUR POPULATION..."},
  { .offset=0x0081ee, .string="PAPERS - HARRISON HAS ONCE AGAIN BEEN SUCCESSFUL IN HIS LATEST RAID. THIS TIME THE ATTACK WAS ON SIX EMPIRE CARGO SHIPS BOUND FOR..."},
  { .offset=0x00818f, .string="ORDERS - ...REPORT IMMEDIATELY TO BASE 59N X 22E FOR NEW ORDERS FROM HARRISON. THE NEXT..."},
  { .offset=0x0080e3, .string="REPORT - ... HAVE FINALLY LOCATED HARRISON'S BASE OF OPERATIONS ON NEW SCOTLAND, AND ONCE AGAIN HE'S A STEP AHEAD OF US. WE BELIEVE HE MAY HAVE RELOCATED AT 44S X 137W ON THE FIRST PLANET OF SYSTEM 81,98. WE WILL PROCEED TO..."},
  { .offset=0x008089, .string="COORDINATE LISTING - ... AT 59N X 22E, BASE 2 AT 54N X 13E DOMICILE AT..."},
  { .offset=0x008043, .string="SOME ARCANE AND INDECIPHERABLE PHLEGMAK WRITING."},
  { .offset=0x008000, .string="SIGN - MARDAN 4 MINING STATION NO. 244"},
  { .offset=0x007fb9, .string="SIGN - MARDAN 4 MINING STATION NO. 17"},
  { .offset=0x007f77, .string="SIGN - MARDAN 4 MINING STATION NO. 82"},
  { .offset=0x007f14, .string="REQUEST - ...MINING STATIONS 25 THROUGH 158 ON PLANET 4 REQUEST IMMEDIATE SUPPLIES. WE ARE..."},
  { .offset=0x007eb3, .string="NOTICE - TO ALL PERSONNEL - EARTH BASE ONE, AT 12N X 104W IS TEMPORARILY QUARANTINED DUE TO..."},
  { .offset=0x007e4d, .string="LETTER - ...HEREBY REQUEST THAT THE RESEARCHERS AT THE MARS POLAR STATION BE DIRECTED TO LOOK INTO THIS AND ..."},
  { .offset=0x007e08, .string="SIGN - STARFLIGHT NAVIGATIONAL RESEARCH STATION"},
  { .offset=0x007d51, .string="NEWSPAPER APRIL 1, 3465 - A REPRESENTATIVE FROM CMIS, CHRISTIAN MISSIONARIES IN SPACE, REPORTS THE SUCCESSFUL CONVERSION OF AN ENTIRE PLANET OF QUASI-HUMANOIDS IN THE OMEGA SECTOR. 'ONCE AGAIN WE HAVE SAVED A RACE FROM THEIR NATIVE CULTURAL DEPRAVITY.'"},
  { .offset=0x007ca2, .string="NEWSPAPER - FEB. 8, 3465 - ...THE DEATH OF JOHNNY BEAVER MARKED THE EXTINCTION OF THE LAST ANIMAL SPECIES OTHER THAN MAN ON EARTH. THE ENVIRONMENTAL PROTECTION AGENCY WAS FORCED TO CLOSE DOWN DUE TO THE LACK OF ANY ENVIRONMENT TO PROTECT."},
  { .offset=0x007c00, .string="NEWSPAPER - NOVEMBER 20, 3450 - ...THE EQUAL RIGHTS AMENDMENT FOR ANDROIDS WAS FINALLY RATIFIED LAST FRIDAY. THERE IS STILL SUBSTANTIAL CONTROVERSY, HOWEVER, OVER THE PROPOSED EQUAL RIGHTS AMENDMENT FOR WOMEN."},
  { .offset=0x007b09, .string="NEWSPAPER - 3404 - LOVELY LUNAR LANSCAPES. OWN YOUR OWN HOME IN THOSE FINAL YEARS AFTER RETIREMENT. LIVE IN QUIET SERENITY BY THE SEA OF TRANQUILITY. CRATERSIDE HOMES ARE NOW AVAILABLE AND START AT ONLY 699,000,000. SENIOR CITIZENS 200 YRS AND UP ONLY."},
  { .offset=0x007a55, .string="ANCIENT HISTORY TEXT BOOK - ...IN PRIMITIVE SOCIETIES IT BECAME POPULAR FOR A SHORT TIME TO SIT COUNTLESS HOURS IN FRONT OF 2 DIMENSIONAL PHOSPHOR SCREENS AND LIVE OUT FANTASIES. MANY HISTORIANS BELIEVE THIS ACTIVITY MARKED THE DOWNFALL OF CIVILIZATION."},
  { .offset=0x007a00, .string="SIGN -  FIRST CHURCH OF THE LAST LAUGH. TODAY'S SERMON - SO FAR, SO WHAT?"},
  { .offset=0x007986, .string="MAGAZINE - MAY 3, 3450 - IN AN INTERVIEW YESTERDAY GEORGE SCHMENGE, THE DONOR FOR THE FIRST SUCCESSFUL BRAIN TRANSPLANT HAD LITTLE TO SAY."},
  { .offset=0x0078f5, .string="NEWSPAPER - MARCH 22, 3477 - NEW GOVERNMENT TAX HIKE TO GO INTO EFFECT. EFFECTIVE THIS APRIL MIDDLE INCOME FAMILIES CAN EXPECT TO PAY 260% OF THEIR ANNUAL INCOME IN TAXES."},
  { .offset=0x007897, .string="NEWSPAPER - JAN 28, 3478 - SCIENTISTS EXPECT CANCER CURE BREAKTHROUGH ANY DAY..."},
  { .offset=0x007800, .string="NEWSPAPER - JULY 1, 3476 - THE EMPEROR OF THE UNITED STATES ANNOUNCED THAT THE ROYAL FAMILY WILL BE ON HAND AT THIS YEAR'S 17TH CENTENNIAL CELEBRATION TO BE HELD IN THE CAPITOL AT DISNEYLAND."},
  { .offset=0x007769, .string="CORNERSTONE INSCRIPTION - BEN AND ANNA'S ACADEMY OF INDEPENDENT THINKING"},
  { .offset=0x0076b7, .string="LOG - ...PEOPLE ARE PANICKING. THE SOLAR FLARES ARE INTENSIFYING. THE BEST ESTIMATES GIVE US 3 DAYS AT THE OUTSIDE. LOG ENTRY 2-28-3480 SURFACE TEMP. IS AT 150 DEGREES C., ONLY BEING THIS FAR UNDERGROUND HAS KEPT US ALIVE THIS LONG..."},
  { .offset=0x00764a, .string="INVOICE - ...SECOND SHIPMENT OF IRIDIUM TO ARRIVE AT 56N X 16W H.Q. ON MARDAN 2 NO LATER THAN THE THIRD DAY OF..."},
  { .offset=0x0075ce, .string="THIS AWARD INCLUDES A SPECIAL BONUS OF 500,000 MU WHEN YOU RETURN TO STARPORT. THANK YOU FOR SAVING EVERYTHING THAT WE HOLD DEAR. -- LEIGH V. MALONE, CHAIRMAN OF INTERSTEL. (END TRANSMISSION)"},
  { .offset=0x01e624, .string="SNOW AND ICE"},
  { .offset=0x01e63c, .string="BLACK AND STAR-FILLED."},
  { .offset=0x01e65e, .string="CRATERED ROCK AND DUST"},
  { .offset=0x01e680, .string="SAND"},
  { .offset=0x01e690, .string="ROCK AND DIRT"},
  { .offset=0x01e6a9, .string="CRACKED PLAINS AND HILLS OF"},
  { .offset=0x01e6d0, .string="VOLCANIC ROCK, STEAMING VENTS,"},
  { .offset=0x01e6fa, .string="BOILING POOLS AND FLOWING LAVA"},
  { .offset=0x01e724, .string="ROCKY SAND"},
  { .offset=0x01e73a, .string="PEBBLY SAND"},
  { .offset=0x01e751, .string="POWDERY SAND"},
  { .offset=0x01e769, .string="COARSE SAND"},
  { .offset=0x01e780, .string="OCEANS AND "},
  { .offset=0x01e797, .string="SMOOTH AND FEATURELESS"},
  { .offset=0x01e7b9, .string="DARK GREY"},
  { .offset=0x01e7ce, .string="BLUE TINTED"},
  { .offset=0x01e7e5, .string="LIGHT GREY"},
  { .offset=0x01e800, .string="GREEN TINTED"},
  { .offset=0x01e818, .string="YELLOWISH"},
  { .offset=0x01e82d, .string="RED TINTED"},
  { .offset=0x01e843, .string="REDDISH"},
  { .offset=0x01e856, .string="YELLOW TINTED"},
  { .offset=0x01e86f, .string="BROWNISH"},
  { .offset=0x01e883, .string="MUDDY BROWN"},
  { .offset=0x01e89a, .string="DARK BLUE"},
  { .offset=0x01e8af, .string="ORANGEISH"},
  { .offset=0x01e8c4, .string="PURPLEISH"},
  { .offset=0x01e8d9, .string="GREENISH"},
  { .offset=0x01e8ed, .string="BLUEISH"},
  { .offset=0x01e900, .string="MOSS-LIKE"},
  { .offset=0x01e915, .string="GRASS-LIKE"},
  { .offset=0x01e92b, .string="LICHEN-LIKE"},
  { .offset=0x01e942, .string="GELATINOUS"},
  { .offset=0x01e958, .string="COVERED IN PLACES BY A"},
  { .offset=0x01e97a, .string="WITH "},
  { .offset=0x01e98b, .string="IT IS RAINING HEAVILY."},
  { .offset=0x01e9ad, .string="IT IS OVERCAST."},
  { .offset=0x01e9c8, .string="IT IS SNOWING LIGHTLY."},
  { .offset=0x01e9ea, .string="IT IS MISTY."},
  { .offset=0x01ea02, .string="YOU ARE IN AN ELECTRICAL STORM."},
  { .offset=0x01ea2d, .string="THE GROUND IS SHAKING AND RUMBLING."},
  { .offset=0x01ea5c, .string="IT IS SNOWING HEAVILY."},
  { .offset=0x01ea7e, .string="IT IS HAILING."},
  { .offset=0x01ea98, .string="YOU ARE IN A THUNDER STORM."},
  { .offset=0x01eabf, .string="YOU ARE IN A WINDSTORM."},
  { .offset=0x01eae2, .string="IT IS FOGGY."},
  { .offset=0x01eafa, .string="IT IS HAZY."},
  { .offset=0x01eb11, .string="IT IS RAINING."},
  { .offset=0x01eb2b, .string="IT IS CLEAR."},
  { .offset=0x01eb43, .string="NITROGEN"},
  { .offset=0x01eb57, .string="OXYGEN"},
  { .offset=0x01eb69, .string="METHANE"},
  { .offset=0x01eb7c, .string="CARBON MONOXIDE"},
  { .offset=0x01eb97, .string="WATER"},
  { .offset=0x01eba8, .string="AMMONIA COMPOUNDS"},
  { .offset=0x01ebc5, .string="CHLORINE COMPOUNDS"},
  { .offset=0x01ebe3, .string="METHANOL, ETHANOL"},
  { .offset=0x01ec00, .string="SULFUR COMPOUNDS"},
  { .offset=0x01ec1c, .string="SILICON COMPOUNDS"},
  { .offset=0x01ec39, .string="SODIUM COMPOUNDS"},
  { .offset=0x01ec55, .string="FLUORINE COMPOUNDS"},
  { .offset=0x01ec73, .string="METAL COMPOUNDS"},
  { .offset=0x01ec8e, .string="HYDROGEN, HELIUM"},
  { .offset=0x01ecaa, .string="NITROGEN, OXYGEN"},
  { .offset=0x01ecc6, .string="OXYGEN, CARBON DIOXIDE"},
  { .offset=0x01ece8, .string="AMMONIA, HYDROGEN"},
  { .offset=0x01ed05, .string="METHANE, AMMONIA, ARGON"},
  { .offset=0x01ed28, .string="FLUORINE, CHLORINE"},
  { .offset=0x01ed46, .string="METHANE, HYDROGEN CYANIDE"},
  { .offset=0x01ed6b, .string="OXYGEN, HYDROGEN"},
  { .offset=0x01ed87, .string="HYDROGEN"},
  { .offset=0x01ed9b, .string="NONE"},
  { .offset=0x01e60d, .string="GARGANTUAN"},
  { .offset=0x01e5f7, .string="HUMONGOUS"},
  { .offset=0x01e5e3, .string="MASSIVE"},
  { .offset=0x01e5d2, .string="HUGE"},
  { .offset=0x01e5bb, .string="VERY LARGE"},
  { .offset=0x01e5a9, .string="LARGE"},
  { .offset=0x01e599, .string="BIG"},
  { .offset=0x01e587, .string="SMALL"},
  { .offset=0x01e576, .string="TINY"},
  { .offset=0x01e564, .string="BLACK"},
  { .offset=0x01e553, .string="GREY"},
  { .offset=0x01e541, .string="WHITE"},
  { .offset=0x01e527, .string="MULTI-COLORED"},
  { .offset=0x01e512, .string="LAVENDAR"},
  { .offset=0x01e4fc, .string="TURQUOISE"},
  { .offset=0x01e4e5, .string="LIME GREEN"},
  { .offset=0x01e4ca, .string="BROWNISH GREEN"},
  { .offset=0x01e4af, .string="COPPER-COLORED"},
  { .offset=0x01e49d, .string="BEIGE"},
  { .offset=0x01e48b, .string="BROWN"},
  { .offset=0x01e47a, .string="PINK"},
  { .offset=0x01e461, .string="RUST-COLORED"},
  { .offset=0x01e44d, .string="MARROON"},
  { .offset=0x01e43a, .string="PURPLE"},
  { .offset=0x01e427, .string="VIOLET"},
  { .offset=0x01e411, .string="VERY BLUE"},
  { .offset=0x01e400, .string="BLUE"},
  { .offset=0x01e3dc, .string="BLUE-GREEN"},
  { .offset=0x01e3ca, .string="GREEN"},
  { .offset=0x01e3ae, .string="YELLOWISH GREEN"},
  { .offset=0x01e395, .string="LEMON YELLOW"},
  { .offset=0x01e382, .string="YELLOW"},
  { .offset=0x01e365, .string="YELLOWISH ORANGE"},
  { .offset=0x01e352, .string="ORANGE"},
  { .offset=0x01e337, .string="REDDISH ORANGE"},
  { .offset=0x01e327, .string="RED"},
  { .offset=0x01e316, .string="HURT"},
  { .offset=0x01e302, .string="FLEEING"},
  { .offset=0x01e2e9, .string="FLEEING MATE"},
  { .offset=0x01e2d1, .string="APPROACHING"},
  { .offset=0x01e2b4, .string="APPROACHING MATE"},
  { .offset=0x01e29f, .string="ATTACKED"},
  { .offset=0x01e28c, .string="EATING"},
  { .offset=0x01e276, .string="WANDERING"},
  { .offset=0x01e262, .string="STUNNED"},
  { .offset=0x01e24c, .string="ATTACKING"},
  { .offset=0x01e238, .string="SESSILE"},
  { .offset=0x01e225, .string="MOBILE"},
  { .offset=0x01e210, .string="AIRBORNE"},
  { .offset=0x01e1fb, .string="FLOATING"},
  { .offset=0x01e1e8, .string="FLYING"},
  { .offset=0x01e1d4, .string="LEAPING"},
  { .offset=0x01e1c0, .string="JUMPING"},
  { .offset=0x01e1ac, .string="HOPPING"},
  { .offset=0x01e198, .string="WALKING"},
  { .offset=0x01e185, .string="MOVING"},
  { .offset=0x01e171, .string="ROLLING"},
  { .offset=0x01e15c, .string="CRAWLING"},
  { .offset=0x01e145, .string="SLITHERING"},
  { .offset=0x01e130, .string="CREEPING"},
  { .offset=0x01e11d, .string="OOZING"},
  { .offset=0x01e108, .string="DELICATE"},
  { .offset=0x01e0f4, .string="WILLOWY"},
  { .offset=0x01e0e0, .string="SPINDLY"},
  { .offset=0x01e0cf, .string="THIN"},
  { .offset=0x01e0ba, .string="GRACEFUL"},
  { .offset=0x01e0a6, .string="SLENDER"},
  { .offset=0x01e093, .string="NARROW"},
  { .offset=0x01e07d, .string="ELONGATED"},
  { .offset=0x01e06b, .string="SQUAT"},
  { .offset=0x01e059, .string="THICK"},
  { .offset=0x01e048, .string="WIDE"},
  { .offset=0x01e037, .string="FLAT"},
  { .offset=0x01e021, .string="FLATTENED"},
  { .offset=0x01e010, .string="HAIR"},
  { .offset=0x01e000, .string="FUR"},
  { .offset=0x01dfe4, .string="ARMOR"},
  { .offset=0x01dfd3, .string="SKIN"},
  { .offset=0x01dfc2, .string="HEAD"},
  { .offset=0x01dfb1, .string="BARK"},
  { .offset=0x01df9f, .string="STALK"},
  { .offset=0x01df8e, .string="STEM"},
  { .offset=0x01df7d, .string="MANE"},
  { .offset=0x01df6b, .string="CREST"},
  { .offset=0x01df59, .string="SHELL"},
  { .offset=0x01df48, .string="TAIL"},
  { .offset=0x01df33, .string="BAZWANGO"},
  { .offset=0x01df21, .string="SNOUT"},
  { .offset=0x01df0f, .string="CILIA"},
  { .offset=0x01defe, .string="FEET"},
  { .offset=0x01dee9, .string="BRANCHES"},
  { .offset=0x01ded7, .string="VINES"},
  { .offset=0x01dec4, .string="LEAVES"},
  { .offset=0x01deb2, .string="BULBS"},
  { .offset=0x01de9e, .string="BERRIES"},
  { .offset=0x01de8b, .string="FRUITS"},
  { .offset=0x01de77, .string="FLOWERS"},
  { .offset=0x01de64, .string="QUILLS"},
  { .offset=0x01de52, .string="CLAWS"},
  { .offset=0x01de3f, .string="PLUMES"},
  { .offset=0x01de2a, .string="WHISKERS"},
  { .offset=0x01de18, .string="TEETH"},
  { .offset=0x01de05, .string="THORNS"},
  { .offset=0x01ddf2, .string="SCALES"},
  { .offset=0x01dddc, .string="BILATERAL"},
  { .offset=0x01ddc9, .string="RADIAL"},
  { .offset=0x01ddb3, .string="SPHERICAL"},
  { .offset=0x01dd9d, .string="IRREGULAR"},
  { .offset=0x01dd87, .string="AMORPHOUS"},
  { .offset=0x01dd69, .string="PATTERNED SURFACE"},
  { .offset=0x01dd55, .string="SURFACE"},
  { .offset=0x01dd37, .string="FEATHERED SURFACE"},
  { .offset=0x01dd1f, .string="EXOSKELETON"},
  { .offset=0x01dd05, .string="APPEARS TO BE"},
  { .offset=0x01dcf4, .string="WITH"},
  { .offset=0x01dcdd, .string="AGGRESSION"},
  { .offset=0x01dccb, .string="LEVEL"},
  { .offset=0x01dcba, .string="MANY"},
  { .offset=0x01dcac, .string="."},
  { .offset=0x01dc9d, .string="M."},
  { .offset=0x01dc8d, .string="CM."},
  { .offset=0x01dc7c, .string="TALL"},
  { .offset=0x01dc68, .string="ROUGHLY"},
  { .offset=0x01dc4e, .string="APPROXIMATELY"},
  { .offset=0x01dc37, .string="ONE OF THE"},
  { .offset=0x01dc24, .string="IN THE"},
  { .offset=0x01dc15, .string="OR"},
  { .offset=0x01dc00, .string="COULD BE"},
  { .offset=0x01dbd1, .string="REPRESENTED BY"},
  { .offset=0x01dbc3, .string=","},
  { .offset=0x01dbb1, .string="BEING"},
  { .offset=0x01dba0, .string="MANY"},
  { .offset=0x01db90, .string="ITS"},
  { .offset=0x01db7e, .string="THEIR"},
  { .offset=0x01db6b, .string="ANIMAL"},
  { .offset=0x01db5b, .string="AND"},
  { .offset=0x01db49, .string="ABOUT"},
  { .offset=0x01db36, .string="AROUND"},
  { .offset=0x01db28, .string=" "},
  { .offset=0x01db13, .string="LIFEFORM"},
  { .offset=0x01dafe, .string="CREATURE"},
  { .offset=0x01daed, .string="SOME"},
  { .offset=0x01dadf, .string="A"},
  { .offset=0x01dad0, .string="AN"},
  { .offset=0x01dac2, .string="S"},
  { .offset=0x01dab2, .string="HAS"},
  { .offset=0x01daa1, .string="HAVE"},
  { .offset=0x01da92, .string="IT"},
  { .offset=0x01da81, .string="THEY"},
  { .offset=0x01da72, .string="  "},
  { .offset=0x01da62, .string="ARE"},
  { .offset=0x01da53, .string="IS"},
  { .offset=0x01da41, .string="THERE"},
  { .offset=0x01da2e, .string="SINEWY"},
  { .offset=0x01da1c, .string="SHORT"},
  { .offset=0x01da0b, .string="LONG"},
  { .offset=0x01d9f8, .string="STUBBY"},
  { .offset=0x01d9db, .string="POWERFUL LOOKING"},
  { .offset=0x01d9c6, .string="MUSCULAR"},
  { .offset=0x01d9b2, .string="JOINTED"},
  { .offset=0x01d998, .string="MULTI-JOINTED"},
  { .offset=0x01d981, .string="MEMBRANOUS"},
  { .offset=0x01d96e, .string="SPINEY"},
  { .offset=0x01d95a, .string="GNARLED"},
  { .offset=0x01d943, .string="PREHENSILE"},
  { .offset=0x01d92c, .string="GELATINOUS"},
  { .offset=0x01d91a, .string="RIGID"},
  { .offset=0x01d905, .string="FEATHERY"},
  { .offset=0x01d8f2, .string="CURVED"},
  { .offset=0x01d8dd, .string="SWEEPING"},
  { .offset=0x01d8c7, .string="INTRICATE"},
  { .offset=0x01d8b4, .string="WEBBED"},
  { .offset=0x01d8a1, .string="FLOPPY"},
  { .offset=0x01d88b, .string="VESTIGIAL"},
  { .offset=0x01d875, .string="BUTTERFLY"},
  { .offset=0x01d865, .string="BAT"},
  { .offset=0x01d851, .string="BULBOUS"},
  { .offset=0x01d83d, .string="BULGING"},
  { .offset=0x01d828, .string="GLOBULAR"},
  { .offset=0x01d814, .string="POINTED"},
  { .offset=0x01d800, .string="PRONGED"},
  { .offset=0x01d7e9, .string="FLEXIBLE"},
  { .offset=0x01d7d7, .string="SHARP"},
  { .offset=0x01d7bf, .string="RAZOR SHARP"},
  { .offset=0x01d7ac, .string="HOOKED"},
  { .offset=0x01d798, .string="CONICAL"},
  { .offset=0x01d786, .string="BLUNT"},
  { .offset=0x01d773, .string="SPIKED"},
  { .offset=0x01d759, .string="SPIRAL-SHAPED"},
  { .offset=0x01d741, .string="RETRACTIBLE"},
  { .offset=0x01d72f, .string="SABER"},
  { .offset=0x01d71a, .string="ARMOURED"},
  { .offset=0x01d707, .string="CUPPED"},
  { .offset=0x01d6f3, .string="SPLAYED"},
  { .offset=0x01d6dc, .string="PROTRUDING"},
  { .offset=0x01d6cb, .string="OVAL"},
  { .offset=0x01d6b5, .string="OCTAGONAL"},
  { .offset=0x01d6a3, .string="ROUND"},
  { .offset=0x01d690, .string="CUBOID"},
  { .offset=0x01d67a, .string="SCALLOPED"},
  { .offset=0x01d65e, .string="FINELY SCULPTED"},
  { .offset=0x01d647, .string="PUPIL-LESS"},
  { .offset=0x01d632, .string="DEEP SET"},
  { .offset=0x01d61b, .string="TRIANGULAR"},
  { .offset=0x01d606, .string="CIRCULAR"},
  { .offset=0x01d5f3, .string="GAPING"},
  { .offset=0x01d5dd, .string="CAVERNOUS"},
  { .offset=0x01d5c7, .string="HEXAGONAL"},
  { .offset=0x01d5b4, .string="SQUARE"},
  { .offset=0x01d59f, .string="DETAILED"},
  { .offset=0x01d587, .string="CYLINDRICAL"},
  { .offset=0x01d56f, .string="RECTANGULAR"},
  { .offset=0x01d55a, .string="BRANCHED"},
  { .offset=0x01d544, .string="ROOT-LIKE"},
  { .offset=0x01d52d, .string="STALK-LIKE"},
  { .offset=0x01d517, .string="STEM-LIKE"},
  { .offset=0x01d501, .string="WHIP-LIKE"},
  { .offset=0x01d4eb, .string="FANG-LIKE"},
  { .offset=0x01d4d5, .string="LEAF-LIKE"},
  { .offset=0x01d4c0, .string="FIN-LIKE"},
  { .offset=0x01d4a9, .string="BLADE-LIKE"},
  { .offset=0x01d492, .string="THORN-LIKE"},
  { .offset=0x01d47b, .string="TALON-LIKE"},
  { .offset=0x01d465, .string="HOLE-LIKE"},
  { .offset=0x01d44e, .string="SLASH-LIKE"},
  { .offset=0x01d42f, .string="IRREGULARLY-SHAPED"},
  { .offset=0x01d418, .string="FAN-SHAPED"},
  { .offset=0x01d400, .string="TEAR-SHAPED"},
  { .offset=0x01d3e0, .string="DOME-SHAPED"},
  { .offset=0x01d3c6, .string="SPHERE-SHAPED"},
  { .offset=0x01d3af, .string="ROD-SHAPED"},
  { .offset=0x01d396, .string="SPEAR-SHAPED"},
  { .offset=0x01d37c, .string="NEEDLE-SHAPED"},
  { .offset=0x01d362, .string="SAUCER-SHAPED"},
  { .offset=0x01d34a, .string="DISK-SHAPED"},
  { .offset=0x01d332, .string="DISH-SHAPED"},
  { .offset=0x01d31a, .string="BOWL-SHAPED"},
  { .offset=0x01d301, .string="HEART-SHAPED"},
  { .offset=0x01d2e6, .string="DIAMOND-SHAPED"},
  { .offset=0x01d2cb, .string="PYRAMID-SHAPED"},
  { .offset=0x01d2ba, .string="SOFT"},
  { .offset=0x01d2a8, .string="GUMMY"},
  { .offset=0x01d296, .string="GOOEY"},
  { .offset=0x01d283, .string="STICKY"},
  { .offset=0x01d26f, .string="VISCOUS"},
  { .offset=0x01d25a, .string="STEAMING"},
  { .offset=0x01d245, .string="BLOOPING"},
  { .offset=0x01d232, .string="SMOOTH"},
  { .offset=0x01d220, .string="ROUGH"},
  { .offset=0x01d209, .string="WIND-SWEPT"},
  { .offset=0x01d1f5, .string="POWDERY"},
  { .offset=0x01d1e5, .string="WET"},
  { .offset=0x01d1d0, .string="GRAVELLY"},
  { .offset=0x01d1b7, .string="FINE-GRAINED"},
  { .offset=0x01d1a5, .string="ROCKY"},
  { .offset=0x01d18d, .string="CRYSTALLINE"},
  { .offset=0x01d17a, .string="SHINEY"},
  { .offset=0x01d166, .string="CRACKED"},
  { .offset=0x01d151, .string="DRIPPING"},
  { .offset=0x01d13e, .string="GLASSY"},
  { .offset=0x01d12b, .string="JAGGED"},
  { .offset=0x01d119, .string="SLICK"},
  { .offset=0x01d106, .string="BROKEN"},
  { .offset=0x01d0f3, .string="CRUSTY"},
  { .offset=0x01d0e2, .string="DAMP"},
  { .offset=0x01d0cf, .string="VEINED"},
  { .offset=0x01d0bd, .string="BUMPY"},
  { .offset=0x01d0aa, .string="COARSE"},
  { .offset=0x01d098, .string="SANDY"},
  { .offset=0x01d085, .string="POCKED"},
  { .offset=0x01d070, .string="STRIATED"},
  { .offset=0x01d05e, .string="DUSTY"},
  { .offset=0x01d04b, .string="CRAGGY"},
  { .offset=0x01d038, .string="GNARLY"},
  { .offset=0x01d025, .string="THORNY"},
  { .offset=0x01d014, .string="OILY"},
  { .offset=0x01d000, .string="FIBROUS"},
  { .offset=0x01cfdc, .string="SPONGY"},
  { .offset=0x01cfcc, .string="DRY"},
  { .offset=0x01cfb7, .string="LEATHERY"},
  { .offset=0x01cfa4, .string="FLESHY"},
  { .offset=0x01cf93, .string="HARD"},
  { .offset=0x01cf7a, .string="PLASTIC-LIKE"},
  { .offset=0x01cf68, .string="HORNY"},
  { .offset=0x01cf54, .string="RUBBERY"},
  { .offset=0x01cf42, .string="WARTY"},
  { .offset=0x01cf30, .string="HAIRY"},
  { .offset=0x01cf1e, .string="FUZZY"},
  { .offset=0x01cf0a, .string="BRISTLY"},
  { .offset=0x01cef5, .string="SERRATED"},
  { .offset=0x01cee0, .string="METALLIC"},
  { .offset=0x01ceca, .string="SHIVERING"},
  { .offset=0x01ceb6, .string="MUCOUSY"},
  { .offset=0x01cea4, .string="LEAFY"},
  { .offset=0x01ce8e, .string="CHITENOUS"},
  { .offset=0x01ce7c, .string="BONEY"},
  { .offset=0x01ce6b, .string="DULL"},
  { .offset=0x01ce59, .string="FILMY"},
  { .offset=0x01ce47, .string="DOWNY"},
  { .offset=0x01ce36, .string="WAXY"},
  { .offset=0x01ce22, .string="KNURLED"},
  { .offset=0x01ce0f, .string="MATTED"},
  { .offset=0x01cdfd, .string="CURLY"},
  { .offset=0x01cde9, .string="TANGLED"},
  { .offset=0x01cdd7, .string="WIREY"},
  { .offset=0x01cdc3, .string="FLOWING"},
  { .offset=0x01cdb0, .string="RUSTED"},
  { .offset=0x01cd9b, .string="THATCHED"},
  { .offset=0x01cd8b, .string="ARM"},
  { .offset=0x01cd77, .string="STINGER"},
  { .offset=0x01cd62, .string="TENTACLE"},
  { .offset=0x01cd4c, .string="PSEUDOPOD"},
  { .offset=0x01cd39, .string="PINCER"},
  { .offset=0x01cd27, .string="MOUTH"},
  { .offset=0x01cd17, .string="LEG"},
  { .offset=0x01cd07, .string="EYE"},
  { .offset=0x01ccf1, .string="EYE STALK"},
  { .offset=0x01ccdc, .string="EYE SPOT"},
  { .offset=0x01ccc3, .string="COMPOUND EYE"},
  { .offset=0x01ccb0, .string="FEELER"},
  { .offset=0x01cc9b, .string="MANDIBLE"},
  { .offset=0x01cc86, .string="ACID SAC"},
  { .offset=0x01cc6f, .string="POISON SAC"},
  { .offset=0x01cc4b, .string="FENDIBULAR EXTREMULATOR"},
  { .offset=0x01cc38, .string="HOOTER"},
  { .offset=0x01cc27, .string="TATA"},
  { .offset=0x01cc10, .string="PROJECTION"},
  { .offset=0x01cc00, .string="EAR"},
  { .offset=0x01cbe1, .string="PROTRUSION"},
  { .offset=0x01cbcb, .string="FLOAT SAC"},
  { .offset=0x01cbba, .string="WING"},
  { .offset=0x01cba9, .string="HORN"},
  { .offset=0x01cb98, .string="TUSK"},
  { .offset=0x01cb87, .string="BEAK"},
  { .offset=0x01cb70, .string="SHIMMERING"},
  { .offset=0x01cb58, .string="TRANSLUCENT"},
  { .offset=0x01cb40, .string="LUMINESCENT"},
  { .offset=0x01cb2c, .string="GLOWING"},
  { .offset=0x01cb19, .string="BRIGHT"},
  { .offset=0x01cb04, .string="BLINDING"},
  { .offset=0x01caf2, .string="LIGHT"},
  { .offset=0x01cade, .string="GREYISH"},
  { .offset=0x01cacd, .string="DARK"},
  { .offset=0x01cab9, .string="HEIGHT:"},
  { .offset=0x01caa8, .string="DEAD"},
  { .offset=0x01ca86, .string="INTELLIGENCE ANALOG: "},
  { .offset=0x01ca66, .string="AGGRESSION ANALOG: "},
  { .offset=0x01ca4d, .string="BIO-STATUS: "},
  { .offset=0x01ca39, .string="NICHE: "},
  { .offset=0x01ca23, .string="IN STASIS"},
  { .offset=0x01ca12, .string="DEAD"},
  { .offset=0x01ca00, .string="ALIVE"},
  { .offset=0x01c9f0, .string="APE"},
  { .offset=0x01c9dd, .string="MONKEY"},
  { .offset=0x01c9cd, .string="FOX"},
  { .offset=0x01c9bd, .string="CAT"},
  { .offset=0x01c9aa, .string="RABBIT"},
  { .offset=0x01c996, .string="PENGUIN"},
  { .offset=0x01c984, .string="MOUSE"},
  { .offset=0x01c974, .string="ANT"},
  { .offset=0x01c961, .string="LIZARD"},
  { .offset=0x01c950, .string="SLUG"},
  { .offset=0x01c93d, .string="SPONGE"},
  { .offset=0x01c927, .string="FIRESHARK"},
  { .offset=0x01c913, .string="PIRANHA"},
  { .offset=0x01c8ff, .string="GRIZZLY"},
  { .offset=0x01c8ed, .string="RHINO"},
  { .offset=0x01c8dc, .string="WOLF"},
  { .offset=0x01c8c8, .string="BOB-CAT"},
  { .offset=0x01c8b6, .string="HORSE"},
  { .offset=0x01c8a0, .string="ARMADILLO"},
  { .offset=0x01c890, .string="EMU"},
  { .offset=0x01c87e, .string="SHEEP"},
  { .offset=0x01c869, .string="GOLDFISH"},
  { .offset=0x01c858, .string="CLAM"},
  { .offset=0x01c847, .string="TREE"},
  { .offset=0x01c835, .string="DAISY"},
  { .offset=0x01c815, .string="OMNIVEROUS PRODUCER"},
  { .offset=0x01c800, .string="OMNIVORE"},
  { .offset=0x01c7df, .string="CARNIVEROUS PRODUCER"},
  { .offset=0x01c7c9, .string="CARNIVORE"},
  { .offset=0x01c7a8, .string="HERBIVEROUS PRODUCER"},
  { .offset=0x01c792, .string="HERBIVORE"},
  { .offset=0x01c77d, .string="PRODUCER"},
  { .offset=0x01c761, .string="CARPET LIFEFORM"},
  { .offset=0x01c748, .string="ANEMONE-LIKE"},
  { .offset=0x01c732, .string="EWOK-LIKE"},
  { .offset=0x01c718, .string="STARFISH-LIKE"},
  { .offset=0x01c704, .string="FUNGOID"},
  { .offset=0x01c6ee, .string="ROCK-LIKE"},
  { .offset=0x01c6d6, .string="TURTLE-LIKE"},
  { .offset=0x01c6be, .string="SPIDER-LIKE"},
  { .offset=0x01c6a7, .string="SNAKE-LIKE"},
  { .offset=0x01c690, .string="SNAIL-LIKE"},
  { .offset=0x01c67a, .string="SLUG-LIKE"},
  { .offset=0x01c662, .string="RODENT-LIKE"},
  { .offset=0x01c64c, .string="REPTILIAN"},
  { .offset=0x01c636, .string="BEAR-LIKE"},
  { .offset=0x01c61f, .string="PLANT-LIKE"},
  { .offset=0x01c609, .string="INSECTOID"},
  { .offset=0x01c5f4, .string="HUMANOID"},
  { .offset=0x01c5da, .string="DINOSAUR-LIKE"},
  { .offset=0x01c5c4, .string="BIRD-LIKE"},
  { .offset=0x01c5aa, .string="ANTELOPE-LIKE"},
  { .offset=0x01c591, .string="BALLOON-LIKE"},
  { .offset=0x01c57b, .string="TREE-LIKE"},
  { .offset=0x01c567, .string="AMEBOID"},
  { .offset=0x01c551, .string="GROTESQUE"},
  { .offset=0x01c536, .string="INSANELY GREAT"},
  { .offset=0x01c520, .string="RIGHTEOUS"},
  { .offset=0x01c509, .string="INCREDIBLE"},
  { .offset=0x01c4f3, .string="BEAUTIFUL"},
  { .offset=0x01c4dd, .string="SEDUCTIVE"},
  { .offset=0x01c4c8, .string="GORGEOUS"},
  { .offset=0x01c4b1, .string="FUNKADELIC"},
  { .offset=0x01c49b, .string="BODACIOUS"},
  { .offset=0x01c485, .string="UPLIFTING"},
  { .offset=0x01c470, .string="EDIFYING"},
  { .offset=0x01c45c, .string="AWESOME"},
  { .offset=0x01c440, .string="TOTALLY RADICAL"},
  { .offset=0x01c429, .string="OUTRAGEOUS"},
  { .offset=0x01c412, .string="NAUSEATING"},
  { .offset=0x01c400, .string="GRODY"},
  { .offset=0x01c3e2, .string="GROOVY"},
  { .offset=0x01c3d0, .string="MONDO"},
  { .offset=0x01c3bb, .string="BITCHIN'"},
  { .offset=0x01c3a3, .string="SUBFREEZING"},
  { .offset=0x01c38f, .string="FURNACE"},
  { .offset=0x01c37b, .string="SEARING"},
  { .offset=0x01c366, .string="TROPICAL"},
  { .offset=0x01c350, .string="TEMPERATE"},
  { .offset=0x01c33d, .string="ARCTIC"},
  { .offset=0x01c326, .string="NORTH WEST"},
  { .offset=0x01c315, .string="WEST"},
  { .offset=0x01c2fe, .string="SOUTH WEST"},
  { .offset=0x01c2ec, .string="SOUTH"},
  { .offset=0x01c2d5, .string="SOUTH EAST"},
  { .offset=0x01c2c4, .string="EAST"},
  { .offset=0x01c2ad, .string="NORTH EAST"},
  { .offset=-1, .string=NULL}
};



#else // Starflight 2


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
    {0xff, wordpRINT, "SET_STR_AS_PARAM"}, // "W3f09"
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
{0x00, 0x0000, NULL}
};


STRINGENTRY strings[]=
{
  { .offset=0x02468e, .string="NORTH"},
  { .offset=0x0202f4, .string="IN OUR TYPICALLY CLEVER FASHION WE HAVE SOLD IT TO THE FOOLISH G'NUNK WHO WERE WILLING TO PAY AN EXORBITANT AMT. PRAISE THE GREAT BLOB GODDESS."},
  { .offset=0x020281, .string=" UPON CLOSER EXAMINATION WE, THE HIGH BLOB COUNCIL, HAVE DETERMINED THAT THE MOST VALUABLE THING IS ACTUALLY JUST A WORTHLESS LUMP OF SHINEY GREEN GLASS."},
  { .offset=0x020215, .string="NOTICE TO ALL SPEMIN WORSHIPPERS WHO HAVE COME HERE TO THESE SACRED LEGHK RUINS TO GAZE UPON THE MOST VALUABLE THING"},
  { .offset=0x0201a4, .string="... LAST STRONGHOLD AT THE HALLS OF MEMORY, LOCATED AT 26S X 135E ... PREPARING FOR DEATH ... HOPE ... DESPAIR ... "},
  { .offset=0x0200ee, .string="... NOT LONG BEFORE ... LAST OF US WILL BE FORCED TO CHOOSE BETWEEN SUICIDE OR PSYCHIC DOMINATION... WE ARE LOST... GAVE KEY TO THE GUARDIAN SATELLITE TO THE DWEENLE... PERHAPS SOME DAY, IF ANY OF US HAVE SURVIVED... REBUILD OUR CIVILIZATION."},
  { .offset=0x02005c, .string="... HAVE DISCOVERED A CONTINUUM FLUX PATH THAT LEADS FROM THE HALLS OF MEMORY TO THE ANOMALY... FEW HAVE ATTEMPTED ESCAPE THROUGH THE ANOMALY. UNKNOWN IF... HAVE BEEN SUCCESSFUL."},
  { .offset=0x020000, .string="... ONLY SYSTEM IN THE NEBULA... HALLS OF MEMORY... VITAL THAT IT REMAIN PROTECTED..."},
  { .offset=0x01ff65, .string="THEY MIGHT POSSIBLY DESTROY IT OR USE IT FOR DESTRUCTIVE PURPOSES... HAVE CREATED THE GUARDIAN FORTRESS SATELLITE..."},
  { .offset=0x01fee8, .string="..TO PROTECT THE HALLS OF MEMORY FROM THOSE UNDER THE CONTROL OF THE UHL... CANNOT AFFORD TO LET THEM HAVE ACCESS TO ALL OF THE INFORMATION THERE..."},
  { .offset=0x01fe4d, .string="...BUT IT SEEMS TO BE COMPLETELY INVULNERABLE...FOR SOME REASON THE DWEENLE SEEM UNAFFECTED...DEATH TOLL IS NOW AT 16.4 BILLION AND PROSPECTS FOR THE FEW OF US THAT REMAIN SANE ARE NOT ENCOURAGING."},
  { .offset=0x01fdcb, .string="...BREAKDOWN OF OUR ENTIRE CIVILIZATION...PANIC...MASS SUICIDES...HAVE ATTEMPTED TO FLEE IN COLONY SHIPS BUT THERE SIMPLY HASN'T BEEN ENOUGH TIME..."},
  { .offset=0x01fd4b, .string="...CONTACT OF A VERY LIMITED NATURE. IT REFERS TO ITSELF AS UHL. IT APPEARS TO BE MUCH TOO STRONG FOR US. THERE IS LITTLE WE CAN DO. RECOMMEND THAT YOU..."},
  { .offset=0x01fc9c, .string="...UNABLE TO DETERMINE ITS ORIGIN, ITS MOTIVATIONS, OR ITS PRECISE NATURE. WE DO NOT EVEN KNOW IF IT IS SENTIENT. ALL WE KNOW IS THAT IT PERVADES OUR SPACE AND THREATENS OUR EXISTENCE. MILLIONS HAVE GONE INSANE. PLEASE, WE NEED ASSISTANCE..."},
  { .offset=0x01fc00, .string="THIS IS THE A-CLASS STAR THAT FORMS THE TRIANGLE. OF COURSE, I SUPPOSE IF THERE HAPPENED TO BE ... NO, THE COINCIDENCE WOULD BE TOO GREAT. YET, IT IS POSSIBLE. AND, IT WOULD EXPLAIN THIS PUZZLE... - CAPTAIN OF THE ELTHAR-ESH"},
  { .offset=0x01fb61, .string="9 DAYS WE HAVE SPENT HERE TRYING TO FIGURE OUT WHERE WE COULD HAVE GONE WRONG. I AM CERTAIN THAT THOSE ON ELTHESH COULD NOT HAVE BEEN MISTAKEN. THE HALLS OF MEMORY SHOULD BE HERE."},
  { .offset=0x01fae6, .string="IF WE ARE UNSUCCESFUL, THEN IT WILL BE TOO LATE FOR OUR RACE. WHOEVER YOU ARE, IF YOU ARE NOT UHL, GOOD LUCK AND WISH US LUCK IF YOU CAN. - CAPTAIN OF THE ELTHAR-ESH."},
  { .offset=0x01fa4d, .string="WE SHALL LEAVE THE ORIGINAL HERE IN CASE WE ARE UNSUCCESFUL AND ANY OTHER ATTEMPTS ARE MADE AFTER US. NOW, WE SHALL PROCEED ON TO THE HALLS OF MEMORY, AND HOPEFULLY THIS TIME WE SHALL BE ABLE TO GET PAST THE GUARDIAN SATELLITE."},
  { .offset=0x01f9b6, .string="TO ANY WHO MAY COME AFTER US. WE HAVE BUILT THIS STRUCTURE AND STOPPED HERE TO REST AND REPAIR OUR SHIP. WE HAVE STUDIED THE GUARDIAN TRANSMITTER KEY AND HAVE MADE A DUPLICATE FOR OUR OWN NEEDS."},
  { .offset=0x01f93a, .string="WE SURMISE THAT THESE WERE CONSTELLATIONS IN THE LEGHK COSMOLOGY, BUT AS TO WHERE THESE ARE ... PERHAPS THOSE ABOARD THE ELTHAR-ESH WILL BE ABLE TO ANSWER THE QUESTION ... "},
  { .offset=0x01f8c1, .string="WE HAVE ASCERTAINED THAT THE STAR SYSTEM THAT THE HALLS OF MEMORY ARE IN IS A GREEN CLASS-A STAR AND FORMS AN EQUILATERAL TRIANGLE WITH THE HOOK AND THE 6 YELLOW STONES."},
  { .offset=0x01f877, .string="WE KNOW THAT THE HALLS ARE LOCATED SOMEWHERE NEAR THE COORDINATES 30S X 134E."},
  { .offset=0x01f800, .string="IF ONLY WE COULD FIND IT, PERHAPS WE COULD FIND ANSWERS THERE THAT MIGHT SAVE US. WE KNOW THAT THEIR PLASMA BOLT WEAPONRY AND SHIELDING WERE FAR SUPERIOR TO OURS."},
  { .offset=0x01f753, .string="... HAVE DISCOVERED THAT THERE EXISTS A PLACE BUILT BY THE LEGHK, AND REFERRED TO THEM AS THE HALLS OF MEMORY. THIS, WE HAVE DETERMINED, WAS THE REPOSITORY OF ALL THE CUMULATIVE LEARNING OF THE ANCIENT LEGHK CIVILIZATION."},
  { .offset=0x01f701, .string="TAKE NOTE- BEWARE THE SHYNEUM PLANET IN THE SYSTEM 117,153. THERE RESIDES AN AWFUL THING."},
  { .offset=0x01f64d, .string="TO ANY WHO FOLLOW- THIS IS TO STATE THAT WE BEAR OUR UMANU BROTHERS NO MALICE, FOR WE KNOW THAT IT WAS NOT REALLY THEY WHO DESTROYED US. OUR DEATHS DO NOT MATTER, AS ALL MUST DIE, BUT THE SADNESS OF THE NATURE OF OUR PARTING IS TOO MUCH FOR US TO BEAR."},
  { .offset=0x024a04, .string="SNOW AND ICE"},
  { .offset=0x024a1c, .string="BLACK AND STAR-FILLED."},
  { .offset=0x024a3e, .string="CRATERED ROCK AND DUST"},
  { .offset=0x024a60, .string="SAND"},
  { .offset=0x024a70, .string="ROCK AND DIRT"},
  { .offset=0x024a89, .string="CRACKED PLAINS AND HILLS OF"},
  { .offset=0x024ab0, .string="VOLCANIC ROCK, STEAMING VENTS,"},
  { .offset=0x024ada, .string="BOILING POOLS AND FLOWING LAVA"},
  { .offset=0x024b04, .string="ROCKY SAND"},
  { .offset=0x024b1a, .string="PEBBLY SAND"},
  { .offset=0x024b31, .string="POWDERY SAND"},
  { .offset=0x024b49, .string="COARSE SAND"},
  { .offset=0x024b60, .string="OCEANS AND "},
  { .offset=0x024b77, .string="SMOOTH AND FEATURELESS"},
  { .offset=0x024b99, .string="DARK GREY"},
  { .offset=0x024bae, .string="BLUE TINTED"},
  { .offset=0x024bc5, .string="LIGHT GREY"},
  { .offset=0x024bdb, .string="GREEN TINTED"},
  { .offset=0x024c00, .string="YELLOWISH"},
  { .offset=0x024c15, .string="RED TINTED"},
  { .offset=0x024c2b, .string="REDDISH"},
  { .offset=0x024c3e, .string="YELLOW TINTED"},
  { .offset=0x024c57, .string="BROWNISH"},
  { .offset=0x024c6b, .string="MUDDY BROWN"},
  { .offset=0x024c82, .string="BLACK"},
  { .offset=0x024c93, .string="DARK BLUE"},
  { .offset=0x024ca8, .string="WHITE"},
  { .offset=0x024cb9, .string="ORANGEISH"},
  { .offset=0x024cce, .string="PURPLEISH"},
  { .offset=0x024ce3, .string="GREENISH"},
  { .offset=0x024cf7, .string="BLUEISH"},
  { .offset=0x024d0a, .string="MOSS-LIKE"},
  { .offset=0x024d1f, .string="GRASS-LIKE"},
  { .offset=0x024d35, .string="FUNGOID"},
  { .offset=0x024d48, .string="LICHEN-LIKE"},
  { .offset=0x024d5f, .string="GELATINOUS"},
  { .offset=0x024d75, .string="FIBROUS"},
  { .offset=0x024d88, .string="LEAFY"},
  { .offset=0x024d99, .string="SPONGY"},
  { .offset=0x024dab, .string="COVERED IN PLACES BY A"},
  { .offset=0x024dcd, .string="CARPET LIFEFORM"},
  { .offset=0x024de8, .string="WITH "},
  { .offset=0x024df9, .string="IT IS RAINING HEAVILY."},
  { .offset=0x024e1b, .string="IT IS OVERCAST."},
  { .offset=0x024e36, .string="IT IS SNOWING LIGHTLY."},
  { .offset=0x024e58, .string="IT IS MISTY."},
  { .offset=0x024e70, .string="YOU ARE IN AN ELECTRICAL STORM."},
  { .offset=0x024e9b, .string="THE GROUND IS SHAKING AND RUMBLING."},
  { .offset=0x024eca, .string="IT IS SNOWING HEAVILY."},
  { .offset=0x024eec, .string="IT IS HAILING."},
  { .offset=0x024f06, .string="YOU ARE IN A THUNDER STORM."},
  { .offset=0x024f2d, .string="YOU ARE IN A WINDSTORM."},
  { .offset=0x024f50, .string="IT IS FOGGY."},
  { .offset=0x024f68, .string="IT IS HAZY."},
  { .offset=0x024f7f, .string="IT IS RAINING."},
  { .offset=0x024f99, .string="IT IS CLEAR."},
  { .offset=0x024fb1, .string="NITROGEN"},
  { .offset=0x024fc5, .string="OXYGEN"},
  { .offset=0x024fd7, .string="METHANE"},
  { .offset=0x025000, .string="CARBON MONOXIDE"},
  { .offset=0x02501b, .string="WATER"},
  { .offset=0x02502c, .string="AMMONIA COMPOUNDS"},
  { .offset=0x025049, .string="CHLORINE COMPOUNDS"},
  { .offset=0x025067, .string="METHANOL, ETHANOL"},
  { .offset=0x025084, .string="SULFUR COMPOUNDS"},
  { .offset=0x0250a0, .string="SILICON COMPOUNDS"},
  { .offset=0x0250bd, .string="SODIUM COMPOUNDS"},
  { .offset=0x0250d9, .string="FLUORINE COMPOUNDS"},
  { .offset=0x0250f7, .string="METAL COMPOUNDS"},
  { .offset=0x025112, .string="HYDROGEN, HELIUM"},
  { .offset=0x02512e, .string="NITROGEN, OXYGEN"},
  { .offset=0x02514a, .string="OXYGEN, CARBON DIOXIDE"},
  { .offset=0x02516c, .string="AMMONIA, HYDROGEN"},
  { .offset=0x025189, .string="METHANE, AMMONIA, ARGON"},
  { .offset=0x0251ac, .string="FLUORINE, CHLORINE"},
  { .offset=0x0251ca, .string="METHANE, HYDROGEN CYANIDE"},
  { .offset=0x0251ef, .string="OXYGEN, HYDROGEN"},
  { .offset=0x02520b, .string="HYDROGEN"},
  { .offset=0x02521f, .string="NONE"},
  { .offset=0x0249f2, .string="BLACK"},
  { .offset=0x0249e1, .string="GREY"},
  { .offset=0x0249cf, .string="WHITE"},
  { .offset=0x0249b5, .string="MULTI-COLORED"},
  { .offset=0x0249a0, .string="LAVENDAR"},
  { .offset=0x02498a, .string="TURQUOISE"},
  { .offset=0x024973, .string="LIME GREEN"},
  { .offset=0x024958, .string="BROWNISH GREEN"},
  { .offset=0x02493d, .string="COPPER-COLORED"},
  { .offset=0x02492b, .string="BEIGE"},
  { .offset=0x024919, .string="BROWN"},
  { .offset=0x024908, .string="PINK"},
  { .offset=0x0248ef, .string="RUST-COLORED"},
  { .offset=0x0248db, .string="MARROON"},
  { .offset=0x0248c8, .string="PURPLE"},
  { .offset=0x0248b5, .string="VIOLET"},
  { .offset=0x02489f, .string="VERY BLUE"},
  { .offset=0x02488e, .string="BLUE"},
  { .offset=0x024877, .string="BLUE-GREEN"},
  { .offset=0x024865, .string="GREEN"},
  { .offset=0x024849, .string="YELLOWISH GREEN"},
  { .offset=0x024830, .string="LEMON YELLOW"},
  { .offset=0x02481d, .string="YELLOW"},
  { .offset=0x024800, .string="YELLOWISH ORANGE"},
  { .offset=0x0247d9, .string="ORANGE"},
  { .offset=0x0247be, .string="REDDISH ORANGE"},
  { .offset=0x0247ae, .string="RED"},
  { .offset=0x024796, .string="SUBFREEZING"},
  { .offset=0x024782, .string="FURNACE"},
  { .offset=0x02476e, .string="SEARING"},
  { .offset=0x024759, .string="TROPICAL"},
  { .offset=0x024743, .string="TEMPERATE"},
  { .offset=0x024730, .string="ARCTIC"},
  { .offset=0x024719, .string="NORTH WEST"},
  { .offset=0x024708, .string="WEST"},
  { .offset=0x0246f1, .string="SOUTH WEST"},
  { .offset=0x0246df, .string="SOUTH"},
  { .offset=0x0246c8, .string="SOUTH EAST"},
  { .offset=0x0246b7, .string="EAST"},
  { .offset=0x0246a0, .string="NORTH EAST"},
  { .offset=-1, .string=NULL}
};


#endif
