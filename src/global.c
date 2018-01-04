
#include "global.h"
#include<stdio.h>

#ifdef STARFLT1

WORDRENAME renamewords[] =
{
    {0x21, 0xe9a5, "NEST-SETUP"}, // "NEST-SE"
    {0x21, 0xed32, "UNNEST-CLEAN"}, // "UNNEST-"
    {0x21, 0xed48, "UNNEST-SPACEXY"}, // "UNK_0xed48"
    {0x21, 0xee87, "(GET-AUX"}, // "(GET-AU"
    {0x21, 0xef37, "SET-DESTINATION"}, // "SET-DES"
    {0x21, 0xf003, "SETUP-MOV"}, // "SETUP-M"
    {0x21, 0xf0ab, "CLEANUP-MOV"}, // "CLEANUP"
    {0x21, 0xf204, "COME-HITHER"}, // "COME-HI"
    {0x2a, 0xdfda, "VECTORERRORS"}, // "VECTOR"
    {0x2a, 0xee15, "LOAD.GAME"}, // "LOAD.G"
    {0x2a, 0xef5a, "SET.DISPLAY.MODE"}, // "SET.DI"
    {0x2a, 0xf0ae, "POLICE.WARNING"}, // "POLICE"
    {0x2a, 0xf51d, "GAMEOPS"}, // "GAMEOP"
    {0x2a, 0xf4dc, ">GAMEOPTIONS"}, // "UNK_0xf4dc"
    {0x2a, 0xf4ec, "GAMEOPTIONS"}, // "UNK_0xf4ec"
    {0x2a, 0xf504, "<GAMEOPTIONS"}, // "UNK_0xf504"
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
    {0xff, 0x62df, "(ENCOUNTER"}, // "(ENCOUN"
    {0xff, 0x62ef, "(SHIPBOX"}, // "(SHIPBO"
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
    {0xff, 0x725e, "FILE-START"}, // "FILE-ST"
    {0xff, 0x7292, "FILE-SLEN"}, // "FILE-SL"
    {0xff, 0x74ab, "INST-QTY"}, // "INST-QT"
    {0xff, 0x74f6, "!INST-SPECIES"}, // "!INST-S"
    {0xff, 0x74e4, "!INST-CLASS"}, // "UNK_0x74e4"
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
    {0x21, 0xd980, "SHP>C"}, // "UNK_0xd980" HYPER-OV
    {0x21, 0xdaa8, "CTXT#"}, // "UNK_0xdaa8"
    {0x21, 0xe1af, ">[CONTEXT]"}, // "UNK_0xe1af"
    {0x21, 0xe1d3, "![CONTEXT]"}, // "UNK_0xe1d3"
    {0x21, 0xe21a, "#CPARMS"}, // "UNK_0xe21a"
    {0x21, 0xe23a, "!CPARMS"}, // "UNK_0xe23a"
    {0x21, 0xdc9c, ">CONS-DISP"}, // "UNK_0xdc9c"
    {0x21, 0xedc2, "?DOUBLE-UNNEST"}, // "UNK_0xedc2" HYPER-OV
    {0x21, 0xed6c, "?UNNEST"}, // "UNK_0xed6c" HYPER-OV
    {0x21, 0xda92, "@XYABS"}, // "UNK_0xda92" HYPER-OV
    {0x21, 0xeca9, "?STARPORT"}, // "UNK_0xeca9" HYPER-OV
    {0x21, 0xda60, "FLAREDATE"}, // "UNK_0xda60" HYPER-OV
    {0x21, 0xd988, "PLN>C"}, // "UNK_0xd988" HYPER-OV
    {0x21, 0xec5d, "?2NEST.ETC"}, // "UNK_0xec5d" HYPER-OV
    {0x21, 0xeb97, "?COLLISION"}, // "UNK_0xeb97" HYPER-OV

    {0x2a, 0xe05c, "SET.COLORS"}, // "UNK_0xe05c"
    {0x2a, 0xde82, "RESUME"}, // "UNK_0xde82"
    {0x2a, 0xe881, ".RESUMING"}, // "UNK_0xe881"
    {0x2a, 0xe4d0, ".GAMEOPS"}, // "UNK_0xe4d0"
    {0x2a, 0xf495, "GET-OPTION#"}, // "UNK_0xf495"
    {0x2a, 0xf4ca, "GAMEOPCASE"}, // "GAMEOP"

    {0x2a, 0xe93b, "RESTOREDISPLAY"}, // "UNK_0xe93b"
    {0x2a, 0xe9ab, "ONCACHE"}, // "UNK_0xe9ab"
    {0x2a, 0xea51, "POPVECT"}, // "UNK_0xea51"
    {0x2a, 0xe999, "ESCENABLE"}, // "UNK_0xe999"
    {0x2a, 0xe86d, "GDE"}, // "UNK_0xe86d"

    {0x2a, 0xe991, "ESCDISABLE"}, // "UNK_0xe991"
    {0x2a, 0xe9a1, "OFFCACHE"}, // "UNK_0xe9a1"
    {0x2a, 0xea27, "PUSHVECT"}, // "UNK_0xea27"
    {0x2a, 0xe9d5, "NEWDOSMSGS"}, // "UNK_0xe9d5"
    {0x2a, 0xe967, "PRESERVEDISPLAY"}, // "UNK_0xe967"
    {0xff, 0xa345, "POLY-ERASE-TEXT"}, // "POLY-ER"

    {0x22, 0xedc9, "?.CERTAIN"}, // "UNK_0xedc9" ANALYZE-OV
    {0x22, 0xeb76, "%MASS"}, // "UNK_0xeb76" ANALYZE-OV
    {0x22, 0xed72, ".SIZE"}, // "UNK_0xed72" ANALYZE-OV
    {0x22, 0xee09, "HEADER"}, // "UNK_0xee09" ANALYZE-OV
    {0x22, 0xee5b, ".TYPE"}, // "UNK_0xee5b" ANALYZE-OV
    {0x22, 0xee81, ".SHIELDS"}, // "UNK_0xee81" ANALYZE-OV
    {0x22, 0xef07, ".WEAP"}, // "UNK_0xef07" ANALYZE-OV
    {0xff, 0xaf69, "-XTRAILING"}, // "-XTRAIL" ANALYZE-OV
    {0x22, 0xef3c, ".DELEM"}, // "UNK_0xef3c" ANALYZE-OV
    {0x22, 0xef8e, ".CONSTIT"}, // "UNK_0xef8e" ANALYZE-OV
    {0x22, 0xf107, ".SURF"}, // "UNK_0xf107" ANALYZE-OV
    {0x22, 0xf131, ".GRAV"}, // "UNK_0xf131" ANALYZE-OV
    {0x22, 0xed19, ".OBJECT"}, // "UNK_0xed19" ANALYZE-OV
    {0x22, 0xefc5, ".ORBIT"}, // "UNK_0xefc5" ANALYZE-OV
    {0x22, 0xf27a, ".WEATH"}, // "UNK_0xf27a" ANALYZE-OV
    {0x22, 0xebdf, "ATMO.ACTIVITY"}, // "UNK_0xebdf" ANALYZE-OV
    {0x23, 0xf0ce, "LAUNCH"}, // "UNK_0xf0ce" LAUNCH-OV
    {0x23, 0xf36c, "PORTLEAVE"}, // "UNK_0xf36c" LAUNCH-OV
    {0x23, 0xf09a, "COUNTDOWN"}, // "UNK_0xf09a" LAUNCH-OV
    {0x17, 0xf2a6, "altitude"}, // "UNK_0xf2a6" LIST-ICONS-OV
    {0x17, 0xf34f, "ICON-KEY"}, // "UNK_0xf34f" LIST-ICONS-OV
    {0x17, 0xf3c6, ".BLT"}, // "UNK_0xf3c6" LIST-ICONS-OV
    {0x17, 0xf3f2, "PAUSE-PAGE"}, // "UNK_0xf3f2" LIST-ICONS-OV
    {0x17, 0xf42c, "SEE-BLTS"}, // "UNK_0xf42c" LIST-ICONS-OV
    {0x17, 0xf48a, "title"}, // "UNK_0xf48a" LIST-ICONS-OV
    {0x26, 0xe1fd, "tm.opts"}, // "UNK_0xe1fd" ITEMS-OV
    {0x26, 0xe1c1, "lpos"}, // "UNK_0xe1c1" ITEMS-OV
    {0x26, 0xe1a8, ".eras"}, // "UNK_0xe1a8" ITEMS-OV
    {0x26, 0xe1d3, "#options!"}, // "UNK_0xe1d3" ITEMS-OV
    {0x26, 0xe216, "tl.opts"}, // "UNK_0xe216" ITEMS-OV
    {0x26, 0xe199, ".desc"}, // "UNK_0xe199" ITEMS-OV
    {0x26, 0xe398, "?VOLUME"}, // "UNK_0xe398" ITEMS-OV
    {0x26, 0xddf6, "revision"}, // "UNK_0xddf6" ITEMS-OV
    {0x26, 0xddf6, "werase"}, // "UNK_0xe0b5" ITEMS-OV
    {0xff, 0x62cf, "(SURFACE)"}, // "(SURFAC"
    {0x26, 0xe45b, "plextract"}, // "UNK_0xe45b" ITEMS-OV
    {0x26, 0xe465, "tvextract"}, // "UNK_0xe465" ITEMS-OV
    {0x26, 0xe487, "niche>val"}, // "UNK_0xe487" ITEMS-OV
    {0x26, 0xe46f, "niche"}, // "UNK_0xe46f" ITEMS-OV
    {0x26, 0xe4bb, "?dist"}, // "UNK_0xe4bb" ITEMS-OV
    {0x26, 0xe4f1, "valuate"}, // "UNK_0xe4f1" ITEMS-OV
    {0x26, 0xe477, "i.level"}, // "UNK_0xe477" ITEMS-OV
    {0x26, 0xe47f, "size.index"}, // "UNK_0xe47f" ITEMS-OV
    {0x26, 0xe559, "info-setup"}, // "UNK_0xe559" ITEMS-OV
    {0x26, 0xe567, "$setup"}, // "UNK_0xe567" ITEMS-OV
    {0x26, 0xe593, "$match"}, // "UNK_0xe593" ITEMS-OV
    {0x26, 0xf108, "qtbtn"}, // "UNK_0xf108" ITEMS-OV
    {0xff, 0xbb14, "delete-scroll-box"}, // "DELETE-"
    {0x26, 0xf43a, "return-items"}, // "UNK_0xf43a"
    {0x26, 0xef0c, "full-text"}, // "UNK_0xef0c"

    {0x08, 0xefc5, "SET-BANK"}, // "UNK_0xefc5" BANK-OV
    {0x08, 0xf4c4, ".BANK"}, // "UNK_0xf4c4" BANK-OV
    {0x08, 0xf4ac, ".BALANCE"}, // "UNK_0xf4ac" BANK-OV
    {0x08, 0xefa4, "MASTERBALANCE"}, // "UNK_0xefa4" BANK-OV
    {0x08, 0xefa9, "BALANCE"}, // "UNK_0xefa9" BANK-OV
    {0x08, 0xefae, "TFLAG"}, // "UNK_0xefae" BANK-OV
    {0x08, 0xefbb, "T-AMT"}, // "UNK_0xefbb" BANK-OV
    {0x08, 0xefc0, "T-DATE"}, // "UNK_0xefc0" BANK-OV
    {0x08, 0xefb3, "TRANSTEXT"}, // "UNK_0xefb3" BANK-OV
    {0x08, 0xef86, "TRIM"}, // "UNK_0xef86" BANK-OV
    {0x08, 0xef90, "3RIGHT"}, // "UNK_0xef90" BANK-OV
    {0x08, 0xef94, "3LEFT"}, // "UNK_0xef94" BANK-OV
    {0x08, 0xef98, "3PLUS"}, // "UNK_0xef98" BANK-OV
    {0x08, 0xef9c, "2RIGHT"}, // "UNK_0xef9c" BANK-OV
    {0x08, 0xefa0, "2LEFT"}, // "UNK_0xefa0" BANK-OV
    {0x08, 0xf112, "DOTS"}, // "UNK_0xf112" BANK-OV
    {0x08, 0xf128, ".DOTS"}, // "UNK_0xf128" BANK-OV
    {0x08, 0xf152, ".BDATE"}, // "UNK_0xf152" BANK-OV
    {0x08, 0xf196, ".$AMT"}, // "UNK_0xf196" BANK-OV
    {0x08, 0xf1da, "?.MESS"}, // "UNK_0xf1da" BANK-OV
    {0x08, 0xf1e2, "BTITLE"}, // "UNK_0xf1e2" BANK-OV
    {0x08, 0xf26f, "BOFRAME"}, // "UNK_0xf26f" BANK-OV
    {0x08, 0xf3ab, "BINFO"}, // "UNK_0xf3ab" BANK-OV
    {0x08, 0xf464, "BSCREEN"}, // "UNK_0xf464" BANK-OV
    {0x08, 0xf472, "BMESS"}, // "UNK_0xf472" BANK-OV

    {0x2A, 0xe3bc, "BORDER"}, // "UNK_0xe3bc" GAME-OV
    {0x2A, 0xe5c1, ".LOADHEAD"}, // "UNK_0xe5c1" GAME-OV
    {0x2A, 0xeddc, "DATALOAD"}, // "UNK_0xeddc" GAME-OV
    {0x2A, 0xe1b2, "!$"}, // "UNK_0xe1b2" GAME-OV
    {0x2A, 0xe06e, "$LEN"}, // "UNK_0xe06e" GAME-OV
    {0x2A, 0xdf92, "$ADDR"}, // "UNK_0xdf92" GAME-OV
    {0x2A, 0xe1be, "#CPL"}, // "UNK_0xe1be" GAME-OV
    {0x2A, 0xe1d6, "#LPS"}, // "UNK_0xe1d6" GAME-OV
    {0x2A, 0xe1f4, "?BL<-"}, // "UNK_0xe1f4" GAME-OV
    {0x2A, 0xe20c, "##LINES"}, // "UNK_0xe20c" GAME-OV
    {0x2A, 0xdf9e, "SUB$ADDR"}, // "UNK_0xdf9e" GAME-OV
    {0x2A, 0xe24e, "#YBLT"}, // "UNK_0xe24e" GAME-OV
    {0x2A, 0xe278, "#XBLT"}, // "UNK_0xe278" GAME-OV
    {0x2A, 0xe2b6, ".SUB"}, // "UNK_0xe2b6" GAME-OV
    {0x2A, 0xe2c6, ".#LINES"}, // "UNK_0xe2c6" GAME-OV
    {0x2A, 0xe340, "BORDERMARGIN"}, // "UNK_0xe340" GAME-OV
    {0x2A, 0xe376, "ERASEWIND"}, // "UNK_0xe376" GAME-OV
    {0x2A, 0xe3b0, ".PAGE"}, // "UNK_0xe3b0" GAME-OV
    {0x2A, 0xe599, ".SAVEHEAD"}, // "UNK_0xe599" GAME-OV
    {0x2A, 0xe9b9, "CHECKSUM"}, // "UNK_0xe9b9" GAME-OV
    {0x2A, 0xdf6a, "CKSUM"}, // "UNK_0xdf6a" GAME-OV
    {0x2A, 0xebfc, "|DISK"}, // "UNK_0xebfc" GAME-OV

    {0x2A, 0xec80, "<DISK"}, // "UNK_0xec80" GAME-OV
    {0x2A, 0xec88, ">DISK"}, // "UNK_0xec88" GAME-OV
    {0x2A, 0xec90, "ARB"}, // "UNK_0xec90" GAME-OV
    {0x2A, 0xec9e, "ARRAYSPACE"}, // "UNK_0xec9e" GAME-OV
    {0x2A, 0xecb4, "ARR>DISK"}, // "UNK_0xecb4" GAME-OV
    {0x2A, 0xe9e9, "?INNERSPACE"}, // "UNK_0xe9e9" GAME-OV
    {0x2A, 0xe0fa, "OUTERSPACE"}, // "UNK_0xe0fa" GAME-OV
    {0x2A, 0xed72, "SETSAVE"}, // "UNK_0xed72" GAME-OV
    {0x2A, 0xee39, "SAVEGAME"}, // "UNK_0xee39" GAME-OV
    {0x2A, 0xeeb1, "BOX"}, // "UNK_0xeeb1" GAME-OV
    {0x2A, 0xeee5, "SET.DISPLAY.VECTORS"}, // "UNK_0xeee5" GAME-OV
    {0x2A, 0xe7ee, "?-writeable"}, // "UNK_0xe7ee" GAME-OV
    {0x2A, 0xf527, "?GAME.IN.PROGRESS"}, // "UNK_0xf527" GAME-OV
    {0x2A, 0xe824, "nomaster"}, // "UNK_0xe824" GAME-OV

    {0x27, 0xe2a5, "?ALIEN-HIT-WITH-LASER"}, // "?ALIEN-HIT" BEHAV-OV
    {0x27, 0xe2ee, "?ALIEN-HIT-WITH-STUNNER"}, // "?ALIEN-HIT" BEHAV-OV
    {0x27, 0xe4d9, "?WANTS-TO-FLY"}, // "?WANTS-TO-" BEHAV-OV
    {0x27, 0xe4f2, "?WANTS-TO-FLOAT"}, // "?WANTS-TO-" BEHAV-OV
    {0x27, 0xe727, "ERASE-LIFEFORM-FROM-ARRAY"}, // "ERASE-LIFE" BEHAV-OV
    {0x27, 0xee0d, "angle>text"}, // "UNK_0xee0d" BEHAV-OV
    {0x18, 0xf417, "plan-tseed"}, // "UNK_0xf417" MOVE-OV
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
    {0xff, 0x9c34, ".CIRCLE_2"}, // ".CIRCLE"
    {0xff, 0x6d94, "1.5!"}, // "1.5!"
    {0xff, 0x49ae, "1.5!_2"}, // "1.5!"
    {0xff, 0x6d85, "+!"}, // "+!"
    {0xff, 0x0f85, "+!_2"}, // "+!"
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
    {0xff, 0x5d6b, "?REUSE"}, // "UNK_0x5d6b"
    {0xff, 0x80d1, "SET?REUSE"}, // "SET?REU"
    {0xff, 0x8083, "GET-NEW-INSTANCE"}, // "UNK_0x8083"
    {0xff, 0x5e58, "?RECYCLED"}, // "UNK_0x5e58"
    {0xff, 0x7a3f, "1STCHILD"}, // "UNK_0x7a3f"
    {0xff, 0x81d7, ".DRJ"}, // "UNK_0x81d7"
    {0xff, 0x4fff, "END-CX"}, // "UNK_0x4fff"
    {0xff, 0x7d6b, "V>SWAP!"}, // "UNK_0x7d6b"
    {0xff, 0x5521, "'TRAVERS"}, // "'TRAVER"
    {0xff, 0x7d5f, "DUP@>V!"}, // "UNK_0x7d5f"
    {0xff, 0x7e38, "MAP>LEAF"}, // "UNK_0x7e38"
    {0xff, 0x8294, "OVA@"}, // "UNK_0x8294"
    {0xff, 0x7063, "MOUNT-VSA"}, // "UNK_0x7063"
    {0xff, 0x70cb, "VSA>VA"}, // "UNK_0x70cb"
    {0xff, 0x82ee, "?ROOMERROR"}, // "UNK_0x82ee"
    {0xff, 0x8309, "OV-VERIFY"}, // "UNK_0x8309"
    {0xff, 0x82e2, "VSA>BUFADR"}, // "UNK_0x82e2"
    {0xff, 0x8332, "LOAD-OVERLAY"}, // "UNK_0x8332"
    {0xff, 0x8403, "DP-SWITCH"}, // "UNK_0x8403"
    {0xff, 0x5007, "EM"}, // "UNK_0x5007"
    {0xff, 0x847b, ".CVSAS"}, // "UNK_0x847b"
    {0xff, 0x8538, "TREJECT/TACCEPT"}, // "UNK_0x8538"
    {0xff, 0x8596, "INT/O"}, // "UNK_0x8596"
    {0xff, 0x8605, "CLIP"}, // "UNK_0x8605"
    {0xff, 0x87e1, "SCANCON"}, // "UNK_0x87e1"
    {0xff, 0x8aa2, "YTABLE.ADDRESS"}, // "UNK_0x8aa2"
    {0xff, 0x8b8d, "?HID-DIS"}, // "UNK_0x8b8d"
    {0xff, 0x8e70, "SCANLINE"}, // "UNK_0x8e70"
    {0xff, 0x9604, "!EPARMS"}, // "UNK_0x9604"
    {0xff, 0x9390, "?EXTENTX"}, // "UNK_0x9390"
    {0xff, 0x96d6, "FRAMELEN"}, // "UNK_0x96d6"
    {0xff, 0xb309, "AINSTALLS"}, // "UNK_0xb309"
    {0xff, 0xb32f, "BINSTALLS"}, // "UNK_0xb32f"
    {0xff, 0x6325, "KEYINTADDR"}, // "UNK_0x6325"
    {0xff, 0xb503, "CONFIGURE-SYSTEM"}, // "CONFIGU"
    {0xff, 0x54a1, "1BUFADR"}, // "UNK_0x54a1"
    {0xff, 0x54a5, "1BUFADR"}, // "UNK_0x54a5"
    {0xff, PARPRINT, "SET_STR_AS_PARAM"}, // "UNK_0x3f3b"
    {0xff, 0xb2cb, "LFCLAIM"}, // "UNK_0xb2cb"
    {0xff, 0xb2dd, "AINSTALL"}, // "UNK_0xb2dd"
    {0xff, 0xb2ff, "BINSTALL"}, // "UNK_0xb2ff"
    {0xff, 0x74fe, "@INST-SIB"}, // "UNK_0x74fe"
    {0xff, 0x7506, "@INST-PREV"}, // "UNK_0x7506"
    {0xff, 0x750e, "@INST-OFF"}, // "UNK_0x750e"
    {0xff, 0x7460, "INST-SIB"}, // "INST-SI"
    {0xff, 0x746f, "INST-PREV"}, // "INST-PR"
    {0xff, 0x747e, "INST-OFF"}, // "INST-OF"
    {0xff, 0x748d, "INST-CLASS"}, // "INST-CL"
    {0xff, 0x749c, "INST-SPECIES"}, // "INST-SP"
    {0xff, 0x763a, "@[IOFF]"}, // "UNK_0x763a"
    {0xff, 0x7646, "IBFR>ICACHE"}, // "UNK_0x7646"
    {0xff, 0x54f6, "$SEG"}, // "UNK_0x54f6"
    {0xff, 0x5584, "$OLD"}, // "UNK_0x5584"
    {0xff, 0x5590, "LENINST"}, // "UNK_0x5590"
    {0xff, 0x765c, "ICACHE>IBFR"}, // "UNK_0x765c"
    {0xff, 0x7672, "BVA>BUF"}, // "UNK_0x7672"
    {0xff, 0x734b, "?BMOUNT"}, // "UNK_0x734b"
    {0xff, 0x7684, "PRIORITIZE"}, // "PRIORIT"
    {0xff, 0x76b8, "ITLEN"}, // "UNK_0x76b8"
    {0xff, 0x76ec, "POINT>I"}, // "UNK_0x76ec"
    {0xff, 0x558c, "[IOFF]"}, // "UNK_0x558c"
    {0xff, 0x7788, "?UPDINST"}, // "UNK_0x7788"
    {0xff, 0x7790, "?IN$LOC"}, // "UNK_0x7790"
    {0xff, 0x54f2, "LOCSEC"}, // "UNK_0x54f2"
    {0xff, 0x5578, "QTYINST"}, // "UNK_0x5578"
    {0xff, 0x7800, "-LINST"}, // "UNK_0x7800"
    {0xff, 0x787c, "?$COLLECT"}, // "UNK_0x787c"
    {0xff, 0x557c, "$MAX"}, // "UNK_0x557c"
    {0xff, 0x5580, "$FREE"}, // "UNK_0x5580"
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
    {0xff, 0x0be1, "!_1" }, // !
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
    {0xff, 0x0f85, "+!_1" }, // +!
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
    {0xff, PARPRINT, "SET_STR_AS_PARAM"}, // "UNK_0x3f09"
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

