#ifndef GLOBAL_H
#define GLOBAL_H

#define STRINGLEN 300
#define FALSE 0
#define TRUE (!(FALSE))

// ----------------------------------------------
typedef struct
{
    int id;
    int startaddress;
    char *name;
} OVERLAYS;

extern OVERLAYS overlays[];

// ----------------------------------------------

typedef struct
{
    int ovidx; /* the ovidx and the parp defines a word */
    int parp;
    char *newword;

} WORDRENAME;

extern WORDRENAME renamewords[];

// ----------------------------------------------


#ifdef STARFLT1
    #define CODECALL 0x224c
    #define CODEEXIT 0x1692 // exit function
    #define CODELIT 0x175f // push constant
    #define CODE2LIT 0x1618 // push two constants
    #define CODEPOINTER 0x1d29 // push pointer on stack of (probably constant) variable or pointer.
    #define CODECONSTANT 0x2214 // const variable.
    #define CODEDI 0x1792 // read constants from WORD OPERATOR
    #define PARPRINT 0x3f3B

    #define FILESTAR0 "starflt1-in/STARFLT.COM"
    #define FILESTAR0SIZE 54183
    #define FILESTARA "starflt1-in/STARA.COM"
    #define FILESTARB "starflt1-in/STARB.COM"
    #define DICTLIST1 0xD40F  // Offsets in FORTH Dictionary entry
    #define DICTLIST2 0xD480
    #define DICTLIST3 0xD449
    #define DICTLIST4 0xD46D
    #define DICTLIST5 0x0
    #define REGDI 0x78C // always constant, points to WORD "OPERATOR"
    #define OUTDIR "starflt1-out"
    #define CODELOADDATA      0x73ea // code executed when data is loaded from directory
    #define CODELOADOVERLAY   0x83F8
    #define CODETABLE         0x5275 // "OVT" "IARRAYS"
    #define CODESETCOLOR      0x4ef5 // "BLACK DK-BLUE DL-GREE GREEN RED VIOLET BROWN ... WHITE"
    #define CODEFUNC3         0x6ec1 // ":TIMEST :SIGNAT :CKSUM :SAVE :VERSIO"
    #define CODEPUSH2WORDS    0x3b68 // "(2C:) NULL 0. VANEWSP IROOT .... *EOL"
    #define CODEFUNC5         0x4a96 // "CCASE" (in CASE:)
    #define CODEFUNC6         0x7227 // "FILE-NA FILE-TY FILE-ST FILE-EN FILE-#R FILE-RL FILE-SL"
    #define CODESETVOCABULARY 0x1ab5 // "FORTH MUSIC IT-VOC MISC-"
    #define CODEIFIELD        0x744d // "INST-SI" "INST-PR" "%NAME" "PHR-CNT" "TEXT-CO" "PHRASE$" ...
    #define IFIELDOFFSET      0x63ef
    #define CODEFUNC9         0x3aec // <ON> <OFF> <BLOCK> V= C=
    #define CODECASE          0x4a4f // switch cases
    #define CODEARRAY         0x4e00 // Arrays
    #define CODEFUNC12        0x0000 //
    #define CODERULE          0xb869 //
    #define CODEEXEC          0x17b7 // -FIND ?TERMINAL ABORT BELL TYPE ....



#elif STARFLT2
    #define CODECALL 0x224c
    #define CODEEXIT 0x1692 // exit function
    #define CODELIT 0x175F // push constant
    #define CODE2LIT 0x1618 // push two constants
    #define CODEPOINTER 0x1d29 // push pointer on stack of (probably constant) variable or pointer.
    #define CODECONSTANT 0x2214 // const variable.
    #define CODEDI 0x1792 // read constants from WORD OPERATOR
    #define PARPRINT 0x3f09

    #define FILESTAR0 "starflt2-in/STARFLT2.COM"
    #define FILESTAR0SIZE 54512
    #define FILESTARA "starflt2-in/STAR2A.COM"
    #define FILESTARB "starflt2-in/STAR2B.COM"
    #define DICTLIST1 0xD56A  // Offsets in FORTH Dictionary entry
    #define DICTLIST2 0xD5C2
    #define DICTLIST3 0xD549
    #define DICTLIST4 0xD5B2
    #define DICTLIST5 0xD5A6
    #define REGDI 0x78C // always constant, points to WORD "OPERATOR"
    #define OUTDIR "starflt2-out"

    #define CODELOADDATA      0x7394 // code executed when data is loaded from directory
    #define CODELOADOVERLAY   0x83DD
    #define CODETABLE         0x53f7 // "OVT" "IARRAYS"
    #define CODESETCOLOR      0x4f96 // "BLACK DK-BLUE DL-GREE GREEN RED VIOLET BROWN ... WHITE"
    #define CODEFUNC3         0x6e67 // ":TIMEST :SIGNAT :CKSUM :SAVE :VERSIO"
    #define CODEPUSH2WORDS    0x3b74 // "(2C:) NULL 0. VANEWSP IROOT .... *EOL"
    #define CODEFUNC5         0x4b82 // "CCASE"
    #define CODEFUNC6         0x71d1 // "FILE-NA FILE-TY FILE-ST FILE-EN FILE-#R FILE-RL FILE-SL"
    #define CODESETVOCABULARY 0x1ab5 // "FORTH MUSIC IT-VOC MISC-"
    #define CODEIFIELD        0x7420 // "INST-SI" "INST-PR" "%NAME" "PHR-CNT" "TEXT-CO" "PHRASE$" ...
    #define IFIELDOFFSET      0x65e1
    #define CODEFUNC9         0x3af8 // <ON> <OFF> <BLOCK> V= C=
    #define CODECASE          0x4b3b // switch cases
    #define CODEARRAY         0x4e6f // global arrays
    #define CODEFUNC12        0xa49a // 'F1 'F2 'F3 'F4
    #define CODERULE          0xaccc //
    #define CODEEXEC          0x17b7 // -FIND ?TERMINAL ABORT BELL TYPE ....

#else
    #error no starfleet defined
#endif


#endif
