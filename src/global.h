#ifndef GLOBAL_H
#define GLOBAL_H

typedef struct
{
    int id;
    int startaddress;
    char *name;
    unsigned short entrypoints[16];
    int nentrypoints;

} OVERLAYS;

extern OVERLAYS overlays[];


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
    #define CODELOADDATA 0x73ea // code executed when data is loaded from directory
    #define CODELOADOVERLAY 0x83F8

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
    #define CODELOADDATA 0x7394 // code executed when data is loaded from directory
    #define CODELOADOVERLAY 0x83DD
#else
    #error no starfleet defined
#endif


#endif
