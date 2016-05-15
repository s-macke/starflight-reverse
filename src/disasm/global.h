/****************************************************************************
*                                                                           *
*                            Third Year Project                             *
*                                                                           *
*                            An IBM PC Emulator                             *
*                          For Unix and X Windows                           *
*                                                                           *
*                             By David Hedley                               *
*                                                                           *
*                                                                           *
* This program is Copyrighted.  Consult the file COPYRIGHT for more details *
*                                                                           *
****************************************************************************/

/* This is GLOBAL.H  It contains definitions for the program wide functions */


#ifndef GLOBAL_H
#define GLOBAL_H

#include "mytypes.h"

/* Added by dtrg. */

#include <stdio.h>
#include <stdlib.h>

#ifdef ME
#       include "uprotos.h"
#endif

#ifndef FALSE
#    define FALSE 0
#endif
#ifndef TRUE
#    define TRUE (!FALSE)
#endif

#define MEMORY_SIZE (1024*1024+65536)

#ifdef INLINE_FUNCTIONS
#    define INLINE inline
#    define INLINE2 inline
#else
#    define INLINE
#    define INLINE2
#endif

#ifdef DEBUG
#   define D(x) x
#else
#   define D(x)
#endif

#ifdef DEBUG2
#   define D2(x) x
#else
#   define D2(x)
#endif

#ifdef _HPUX_SOURCE
#ifndef __hpux
#define __hpux
#endif
#endif

extern BYTE *memory;
extern char *progname;

void init_cpu(void);
void execute(void);
void exit_emu(void);
void read_pcemurc(void);

#endif






