// ====== OVERLAY 'SCIENCE' ======
// store offset = 0xdf90
// overlay size   = 0x15d0

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xdfa6  codep:0x1d29 parp:0xdfa6 size:0x0002 C-string:'UNK_0xdfa6'
//      UNK_0xdfaa  codep:0x7420 parp:0xdfaa size:0x0003 C-string:'UNK_0xdfaa'
//      UNK_0xdfaf  codep:0x1d29 parp:0xdfaf size:0x0002 C-string:'UNK_0xdfaf'
//      UNK_0xdfb3  codep:0x1d29 parp:0xdfb3 size:0x0002 C-string:'UNK_0xdfb3'
//      UNK_0xdfb7  codep:0x224c parp:0xdfb7 size:0x004a C-string:'UNK_0xdfb7'
//      UNK_0xe003  codep:0x7420 parp:0xe003 size:0x0003 C-string:'UNK_0xe003'
//      UNK_0xe008  codep:0x7420 parp:0xe008 size:0x0003 C-string:'UNK_0xe008'
//      UNK_0xe00d  codep:0x7420 parp:0xe00d size:0x0003 C-string:'UNK_0xe00d'
//      UNK_0xe012  codep:0x7420 parp:0xe012 size:0x0003 C-string:'UNK_0xe012'
//      UNK_0xe017  codep:0x7420 parp:0xe017 size:0x0003 C-string:'UNK_0xe017'
//      UNK_0xe01c  codep:0x7420 parp:0xe01c size:0x0003 C-string:'UNK_0xe01c'
//      UNK_0xe021  codep:0x7420 parp:0xe021 size:0x0003 C-string:'UNK_0xe021'
//      UNK_0xe026  codep:0x7420 parp:0xe026 size:0x0008 C-string:'UNK_0xe026'
//      UNK_0xe030  codep:0x7420 parp:0xe030 size:0x0003 C-string:'UNK_0xe030'
//      UNK_0xe035  codep:0x7420 parp:0xe035 size:0x000d C-string:'UNK_0xe035'
//      UNK_0xe044  codep:0x7394 parp:0xe044 size:0x0006 C-string:'UNK_0xe044'
//      UNK_0xe04c  codep:0x7394 parp:0xe04c size:0x0006 C-string:'UNK_0xe04c'
//      UNK_0xe054  codep:0x7394 parp:0xe054 size:0x0006 C-string:'UNK_0xe054'
//      UNK_0xe05c  codep:0x7394 parp:0xe05c size:0x0006 C-string:'UNK_0xe05c'
//      UNK_0xe064  codep:0x7420 parp:0xe064 size:0x0003 C-string:'UNK_0xe064'
//      UNK_0xe069  codep:0x7394 parp:0xe069 size:0x0013 C-string:'UNK_0xe069'
//      UNK_0xe07e  codep:0x7420 parp:0xe07e size:0x0003 C-string:'UNK_0xe07e'
//      UNK_0xe083  codep:0x7394 parp:0xe083 size:0x0006 C-string:'UNK_0xe083'
//      UNK_0xe08b  codep:0x7394 parp:0xe08b size:0x0006 C-string:'UNK_0xe08b'
//      UNK_0xe093  codep:0x7394 parp:0xe093 size:0x0006 C-string:'UNK_0xe093'
//      UNK_0xe09b  codep:0x7394 parp:0xe09b size:0x0006 C-string:'UNK_0xe09b'
//      UNK_0xe0a3  codep:0x7394 parp:0xe0a3 size:0x0006 C-string:'UNK_0xe0a3'
//      UNK_0xe0ab  codep:0x224c parp:0xe0ab size:0x004a C-string:'UNK_0xe0ab'
//      UNK_0xe0f7  codep:0x224c parp:0xe0f7 size:0x0006 C-string:'UNK_0xe0f7'
//      UNK_0xe0ff  codep:0x224c parp:0xe0ff size:0x0006 C-string:'UNK_0xe0ff'
//      UNK_0xe107  codep:0x224c parp:0xe107 size:0x0010 C-string:'UNK_0xe107'
//         BIO/ENR  codep:0x4b3b parp:0xe123 size:0x001c C-string:'BIO_slash_ENR'
//      UNK_0xe141  codep:0x224c parp:0xe141 size:0x000e C-string:'UNK_0xe141'
//      UNK_0xe151  codep:0x224c parp:0xe151 size:0x00a2 C-string:'UNK_0xe151'
//      UNK_0xe1f5  codep:0x224c parp:0xe1f5 size:0x0010 C-string:'UNK_0xe1f5'
//      UNK_0xe207  codep:0x224c parp:0xe207 size:0x000a C-string:'UNK_0xe207'
//      UNK_0xe213  codep:0x224c parp:0xe213 size:0x0052 C-string:'UNK_0xe213'
//      UNK_0xe267  codep:0x224c parp:0xe267 size:0x000e C-string:'UNK_0xe267'
//      UNK_0xe277  codep:0x224c parp:0xe277 size:0x0050 C-string:'UNK_0xe277'
//      UNK_0xe2c9  codep:0x224c parp:0xe2c9 size:0x0006 C-string:'UNK_0xe2c9'
//          ?HEAVY  codep:0x224c parp:0xe2da size:0x000e C-string:'_ask_HEAVY'
//      UNK_0xe2ea  codep:0x224c parp:0xe2ea size:0x009c C-string:'UNK_0xe2ea'
//      UNK_0xe388  codep:0x224c parp:0xe388 size:0x0024 C-string:'UNK_0xe388'
//      UNK_0xe3ae  codep:0x224c parp:0xe3ae size:0x0018 C-string:'UNK_0xe3ae'
//      UNK_0xe3c8  codep:0x224c parp:0xe3c8 size:0x003e C-string:'UNK_0xe3c8'
//      UNK_0xe408  codep:0x224c parp:0xe408 size:0x003e C-string:'UNK_0xe408'
//      UNK_0xe448  codep:0x224c parp:0xe448 size:0x0022 C-string:'UNK_0xe448'
//      UNK_0xe46c  codep:0x224c parp:0xe46c size:0x002a C-string:'UNK_0xe46c'
//      UNK_0xe498  codep:0x224c parp:0xe498 size:0x0021 C-string:'UNK_0xe498'
//      UNK_0xe4bb  codep:0x224c parp:0xe4bb size:0x0020 C-string:'UNK_0xe4bb'
//      UNK_0xe4dd  codep:0x224c parp:0xe4dd size:0x0038 C-string:'UNK_0xe4dd'
//      UNK_0xe517  codep:0x224c parp:0xe517 size:0x005a C-string:'UNK_0xe517'
//      UNK_0xe573  codep:0x224c parp:0xe573 size:0x0006 C-string:'UNK_0xe573'
//      UNK_0xe57b  codep:0x1d29 parp:0xe57b size:0x0010 C-string:'UNK_0xe57b'
//      UNK_0xe58d  codep:0x224c parp:0xe58d size:0x0010 C-string:'UNK_0xe58d'
//      UNK_0xe59f  codep:0x224c parp:0xe59f size:0x00a6 C-string:'UNK_0xe59f'
//      UNK_0xe647  codep:0x224c parp:0xe647 size:0x00f5 C-string:'UNK_0xe647'
//      UNK_0xe73e  codep:0x1d29 parp:0xe73e size:0x0002 C-string:'UNK_0xe73e'
//      UNK_0xe742  codep:0x1d29 parp:0xe742 size:0x0002 C-string:'UNK_0xe742'
//      UNK_0xe746  codep:0x1d29 parp:0xe746 size:0x0002 C-string:'UNK_0xe746'
//      UNK_0xe74a  codep:0x1d29 parp:0xe74a size:0x0002 C-string:'UNK_0xe74a'
//      UNK_0xe74e  codep:0x224c parp:0xe74e size:0x0014 C-string:'UNK_0xe74e'
//      UNK_0xe764  codep:0x224c parp:0xe764 size:0x000c C-string:'UNK_0xe764'
//      UNK_0xe772  codep:0x224c parp:0xe772 size:0x000c C-string:'UNK_0xe772'
//      UNK_0xe780  codep:0x224c parp:0xe780 size:0x001c C-string:'UNK_0xe780'
//      UNK_0xe79e  codep:0x224c parp:0xe79e size:0x001a C-string:'UNK_0xe79e'
//      UNK_0xe7ba  codep:0x224c parp:0xe7ba size:0x0022 C-string:'UNK_0xe7ba'
//      UNK_0xe7de  codep:0x224c parp:0xe7de size:0x0024 C-string:'UNK_0xe7de'
//      UNK_0xe804  codep:0x224c parp:0xe804 size:0x0024 C-string:'UNK_0xe804'
//      UNK_0xe82a  codep:0x224c parp:0xe82a size:0x0020 C-string:'UNK_0xe82a'
//      UNK_0xe84c  codep:0x224c parp:0xe84c size:0x0066 C-string:'UNK_0xe84c'
//      UNK_0xe8b4  codep:0x224c parp:0xe8b4 size:0x000a C-string:'UNK_0xe8b4'
//      UNK_0xe8c0  codep:0x224c parp:0xe8c0 size:0x0044 C-string:'UNK_0xe8c0'
//      UNK_0xe906  codep:0x224c parp:0xe906 size:0x0008 C-string:'UNK_0xe906'
//      UNK_0xe910  codep:0x1d29 parp:0xe910 size:0x0002 C-string:'UNK_0xe910'
//      UNK_0xe914  codep:0x1d29 parp:0xe914 size:0x0002 C-string:'UNK_0xe914'
//      UNK_0xe918  codep:0x1d29 parp:0xe918 size:0x0008 C-string:'UNK_0xe918'
//      UNK_0xe922  codep:0x224c parp:0xe922 size:0x0038 C-string:'UNK_0xe922'
//      UNK_0xe95c  codep:0x224c parp:0xe95c size:0x0042 C-string:'UNK_0xe95c'
//      UNK_0xe9a0  codep:0x224c parp:0xe9a0 size:0x007a C-string:'UNK_0xe9a0'
//      UNK_0xea1c  codep:0x224c parp:0xea1c size:0x009e C-string:'UNK_0xea1c'
//      UNK_0xeabc  codep:0x224c parp:0xeabc size:0x00bc C-string:'UNK_0xeabc'
//      UNK_0xeb7a  codep:0x224c parp:0xeb7a size:0x0030 C-string:'UNK_0xeb7a'
//      UNK_0xebac  codep:0x224c parp:0xebac size:0x0026 C-string:'UNK_0xebac'
//      UNK_0xebd4  codep:0x224c parp:0xebd4 size:0x001c C-string:'UNK_0xebd4'
//      UNK_0xebf2  codep:0x224c parp:0xebf2 size:0x000c C-string:'UNK_0xebf2'
//      UNK_0xec00  codep:0x1d29 parp:0xec00 size:0x0009 C-string:'UNK_0xec00'
//      UNK_0xec0b  codep:0x224c parp:0xec0b size:0x0018 C-string:'UNK_0xec0b'
//      UNK_0xec25  codep:0x224c parp:0xec25 size:0x00a0 C-string:'UNK_0xec25'
//      UNK_0xecc7  codep:0x1d29 parp:0xecc7 size:0x0005 C-string:'UNK_0xecc7'
//      UNK_0xecce  codep:0x1d29 parp:0xecce size:0x0005 C-string:'UNK_0xecce'
//      UNK_0xecd5  codep:0x224c parp:0xecd5 size:0x0014 C-string:'UNK_0xecd5'
//      UNK_0xeceb  codep:0x224c parp:0xeceb size:0x0058 C-string:'UNK_0xeceb'
//      UNK_0xed45  codep:0x224c parp:0xed45 size:0x0006 C-string:'UNK_0xed45'
//      UNK_0xed4d  codep:0x224c parp:0xed4d size:0x001e C-string:'UNK_0xed4d'
//      UNK_0xed6d  codep:0x224c parp:0xed6d size:0x000f C-string:'UNK_0xed6d'
//      UNK_0xed7e  codep:0x224c parp:0xed7e size:0x0012 C-string:'UNK_0xed7e'
//      UNK_0xed92  codep:0x224c parp:0xed92 size:0x000a C-string:'UNK_0xed92'
//      UNK_0xed9e  codep:0x224c parp:0xed9e size:0x000e C-string:'UNK_0xed9e'
//      UNK_0xedae  codep:0x224c parp:0xedae size:0x008b C-string:'UNK_0xedae'
//      UNK_0xee3b  codep:0x224c parp:0xee3b size:0x0052 C-string:'UNK_0xee3b'
//      UNK_0xee8f  codep:0x224c parp:0xee8f size:0x008a C-string:'UNK_0xee8f'
//      UNK_0xef1b  codep:0x224c parp:0xef1b size:0x0083 C-string:'UNK_0xef1b'
//      UNK_0xefa0  codep:0x224c parp:0xefa0 size:0x0010 C-string:'UNK_0xefa0'
//      UNK_0xefb2  codep:0x224c parp:0xefb2 size:0x00b8 C-string:'UNK_0xefb2'
//      UNK_0xf06c  codep:0x224c parp:0xf06c size:0x0036 C-string:'UNK_0xf06c'
//      UNK_0xf0a4  codep:0x224c parp:0xf0a4 size:0x0034 C-string:'UNK_0xf0a4'
//      UNK_0xf0da  codep:0x224c parp:0xf0da size:0x000a C-string:'UNK_0xf0da'
//      UNK_0xf0e6  codep:0x224c parp:0xf0e6 size:0x0046 C-string:'UNK_0xf0e6'
//       .READINGS  codep:0x4b3b parp:0xf13a size:0x0010 C-string:'_dot_READINGS'
//      (/SENSORS)  codep:0x224c parp:0xf159 size:0x00b3 C-string:'_ro__slash_SENSORS_rc_'
//      UNK_0xf20e  codep:0x224c parp:0xf20e size:0x003e C-string:'UNK_0xf20e'
//      UNK_0xf24e  codep:0x224c parp:0xf24e size:0x0010 C-string:'UNK_0xf24e'
//      UNK_0xf260  codep:0x224c parp:0xf260 size:0x0006 C-string:'UNK_0xf260'
//      UNK_0xf268  codep:0x224c parp:0xf268 size:0x0036 C-string:'UNK_0xf268'
//      UNK_0xf2a0  codep:0x224c parp:0xf2a0 size:0x0012 C-string:'UNK_0xf2a0'
//      UNK_0xf2b4  codep:0x224c parp:0xf2b4 size:0x0020 C-string:'UNK_0xf2b4'
//      UNK_0xf2d6  codep:0x224c parp:0xf2d6 size:0x0052 C-string:'UNK_0xf2d6'
//      UNK_0xf32a  codep:0x224c parp:0xf32a size:0x0006 C-string:'UNK_0xf32a'
//          CTXT>I  codep:0x4b3b parp:0xf33b size:0x000c C-string:'CTXT_gt_I'
//      UNK_0xf349  codep:0x224c parp:0xf349 size:0x0004 C-string:'UNK_0xf349'
//      UNK_0xf34f  codep:0x224c parp:0xf34f size:0x0006 C-string:'UNK_0xf34f'
//      UNK_0xf357  codep:0x224c parp:0xf357 size:0x0008 C-string:'UNK_0xf357'
//      UNK_0xf361  codep:0x224c parp:0xf361 size:0x0008 C-string:'UNK_0xf361'
//      UNK_0xf36b  codep:0x224c parp:0xf36b size:0x0010 C-string:'UNK_0xf36b'
//      UNK_0xf37d  codep:0x224c parp:0xf37d size:0x001e C-string:'UNK_0xf37d'
//      UNK_0xf39d  codep:0x224c parp:0xf39d size:0x0022 C-string:'UNK_0xf39d'
//      UNK_0xf3c1  codep:0x224c parp:0xf3c1 size:0x0032 C-string:'UNK_0xf3c1'
//       'DO-CLOUD  codep:0x1d29 parp:0xf401 size:0x0002 C-string:'_i_DO_dash_CLOUD'
//      UNK_0xf405  codep:0x224c parp:0xf405 size:0x0008 C-string:'UNK_0xf405'
//      UNK_0xf40f  codep:0x224c parp:0xf40f size:0x0046 C-string:'UNK_0xf40f'
//       .STARDATE  codep:0x224c parp:0xf463 size:0x004c C-string:'_dot_STARDATE'
//      UNK_0xf4b1  codep:0x224c parp:0xf4b1 size:0x0016 C-string:'UNK_0xf4b1'
//      UNK_0xf4c9  codep:0x224c parp:0xf4c9 size:0x001c C-string:'UNK_0xf4c9'
//      UNK_0xf4e7  codep:0x224c parp:0xf4e7 size:0x0042 C-string:'UNK_0xf4e7'
//       (/STATUS)  codep:0x224c parp:0xf537 size:0x000e C-string:'_ro__slash_STATUS_rc_'
//      .STAT-TEXT  codep:0x224c parp:0xf554 size:0x0000 C-string:'_dot_STAT_dash_TEXT'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xdfa6 = 0xdfa6; // UNK_0xdfa6 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdfaf = 0xdfaf; // UNK_0xdfaf size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdfb3 = 0xdfb3; // UNK_0xdfb3 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe57b = 0xe57b; // UNK_0xe57b size: 16
// {0xe7, 0x31, 0x30, 0x9e, 0x0c, 0xc3, 0xc3, 0x30, 0xff, 0x1e, 0xf3, 0xff, 0x3c, 0xcf, 0x00, 0xc0}

const unsigned short int pp_UNK_0xe73e = 0xe73e; // UNK_0xe73e size: 2
// {0xff, 0xff}

const unsigned short int pp_UNK_0xe742 = 0xe742; // UNK_0xe742 size: 2
// {0xff, 0xf6}

const unsigned short int pp_UNK_0xe746 = 0xe746; // UNK_0xe746 size: 2
// {0xa0, 0x5f}

const unsigned short int pp_UNK_0xe74a = 0xe74a; // UNK_0xe74a size: 2
// {0x50, 0xa9}

const unsigned short int pp_UNK_0xe910 = 0xe910; // UNK_0xe910 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe914 = 0xe914; // UNK_0xe914 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe918 = 0xe918; // UNK_0xe918 size: 8
// {0x81, 0xc3, 0x81, 0x81, 0x81, 0x81, 0xc3, 0x81}

const unsigned short int pp_UNK_0xec00 = 0xec00; // UNK_0xec00 size: 9
// {0x04, 0x0d, 0x0e, 0x0b, 0x09, 0x03, 0x06, 0x07, 0x08}

const unsigned short int pp_UNK_0xecc7 = 0xecc7; // UNK_0xecc7 size: 5
// {0x01, 0x01, 0x16, 0x1b, 0x00}

const unsigned short int pp_UNK_0xecce = 0xecce; // UNK_0xecce size: 5
// {0x02, 0x01, 0x16, 0x1b, 0x00}

const unsigned short int pp__i_DO_dash_CLOUD = 0xf401; // 'DO-CLOUD size: 2
// {0xda, 0xc5}




// 0xdfa2: db 0x5d 0x01 '] '

// ================================================
// 0xdfa4: WORD 'UNK_0xdfa6' codep=0x1d29 parp=0xdfa6
// ================================================
// 0xdfa6: db 0x3a 0x20 ': '

// ================================================
// 0xdfa8: WORD 'UNK_0xdfaa' codep=0x7420 parp=0xdfaa
// ================================================
// 0xdfaa: db 0x34 0x0b 0x01 '4  '

// ================================================
// 0xdfad: WORD 'UNK_0xdfaf' codep=0x1d29 parp=0xdfaf
// ================================================
// 0xdfaf: db 0x3a 0x20 ': '

// ================================================
// 0xdfb1: WORD 'UNK_0xdfb3' codep=0x1d29 parp=0xdfb3
// ================================================
// 0xdfb3: db 0x3a 0x20 ': '

// ================================================
// 0xdfb5: WORD 'UNK_0xdfb7' codep=0x224c parp=0xdfb7
// ================================================

void UNK_0xdfb7() // UNK_0xdfb7
{
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(pp__pe_SLUG); // %SLUG
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(pp__pe_SLUG); // %SLUG
  Push(Read16(Pop())); // @
  Push(0x000a);
  Push(0); // 0
  Push(0x000a);
  RRND(); // RRND
  Push(cc__4); // 4
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  _dash_(); // -

  label2:
  Push(0x000a);
  MAX(); // MAX
  Push(0x0063);
  MIN(); // MIN
  Push(pp__pe_SLUG); // %SLUG
  _ex__2(); // !_2
}


// ================================================
// 0xe001: WORD 'UNK_0xe003' codep=0x7420 parp=0xe003
// ================================================
// 0xe003: db 0x14 0x25 0x02 ' % '

// ================================================
// 0xe006: WORD 'UNK_0xe008' codep=0x7420 parp=0xe008
// ================================================
// 0xe008: db 0x14 0x11 0x02 '   '

// ================================================
// 0xe00b: WORD 'UNK_0xe00d' codep=0x7420 parp=0xe00d
// ================================================
// 0xe00d: db 0x14 0x19 0x02 '   '

// ================================================
// 0xe010: WORD 'UNK_0xe012' codep=0x7420 parp=0xe012
// ================================================
// 0xe012: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xe015: WORD 'UNK_0xe017' codep=0x7420 parp=0xe017
// ================================================
// 0xe017: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xe01a: WORD 'UNK_0xe01c' codep=0x7420 parp=0xe01c
// ================================================
// 0xe01c: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xe01f: WORD 'UNK_0xe021' codep=0x7420 parp=0xe021
// ================================================
// 0xe021: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xe024: WORD 'UNK_0xe026' codep=0x7420 parp=0xe026
// ================================================
// 0xe026: db 0x14 0x45 0x04 0x20 0x74 0x14 0x15 0x02 ' E  t   '

// ================================================
// 0xe02e: WORD 'UNK_0xe030' codep=0x7420 parp=0xe030
// ================================================
// 0xe030: db 0x14 0x56 0x01 ' V '

// ================================================
// 0xe033: WORD 'UNK_0xe035' codep=0x7420 parp=0xe035
// ================================================
// 0xe035: db 0x14 0x57 0x01 0x20 0x74 0x10 0x1a 0x01 0x20 0x74 0x11 0x14 0x03 ' W  t    t   '

// ================================================
// 0xe042: WORD 'UNK_0xe044' codep=0x7394 parp=0xe044
// ================================================
// 0xe044: db 0x19 0x01 0x03 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe04a: WORD 'UNK_0xe04c' codep=0x7394 parp=0xe04c
// ================================================
// 0xe04c: db 0x19 0x07 0x02 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe052: WORD 'UNK_0xe054' codep=0x7394 parp=0xe054
// ================================================
// 0xe054: db 0x19 0x18 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe05a: WORD 'UNK_0xe05c' codep=0x7394 parp=0xe05c
// ================================================
// 0xe05c: db 0x19 0x15 0x01 0x24 0x5d 0x6b '   $]k'

// ================================================
// 0xe062: WORD 'UNK_0xe064' codep=0x7420 parp=0xe064
// ================================================
// 0xe064: db 0x19 0x12 0x02 '   '

// ================================================
// 0xe067: WORD 'UNK_0xe069' codep=0x7394 parp=0xe069
// ================================================
// 0xe069: db 0x19 0x0c 0x02 0x24 0x5d 0x6b 0x20 0x74 0x19 0x14 0x02 0x94 0x73 0x19 0x0e 0x02 0x24 0x5d 0x6b '   $]k t    s   $]k'

// ================================================
// 0xe07c: WORD 'UNK_0xe07e' codep=0x7420 parp=0xe07e
// ================================================
// 0xe07e: db 0x19 0x11 0x07 '   '

// ================================================
// 0xe081: WORD 'UNK_0xe083' codep=0x7394 parp=0xe083
// ================================================
// 0xe083: db 0x20 0x02 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe089: WORD 'UNK_0xe08b' codep=0x7394 parp=0xe08b
// ================================================
// 0xe08b: db 0x20 0x04 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe091: WORD 'UNK_0xe093' codep=0x7394 parp=0xe093
// ================================================
// 0xe093: db 0x20 0x09 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe099: WORD 'UNK_0xe09b' codep=0x7394 parp=0xe09b
// ================================================
// 0xe09b: db 0x20 0x0c 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xe0a1: WORD 'UNK_0xe0a3' codep=0x7394 parp=0xe0a3
// ================================================
// 0xe0a3: db 0x1e 0x00 0x03 0x07 0x3e 0x6c '    >l'

// ================================================
// 0xe0a9: WORD 'UNK_0xe0ab' codep=0x224c parp=0xe0ab
// ================================================

void UNK_0xe0ab() // UNK_0xe0ab
{
  Push(0x6a5a); // probable 'MERCATO'
  SETLARR(); // SETLARR
  FULLARR(); // FULLARR
  SETREGI(); // SETREGI
  Push(0); // 0
  Push(pp_YUR); // YUR
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_XUR); // XUR
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(0x003f);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(1); // 1
  goto label2;

  label1:
  Push(0); // 0

  label2:
  Push(Pop() + Pop()); // +
  j++;
  } while(j<jmax); // (LOOP) 0xffe2

  i++;
  } while(i<imax); // (LOOP) 0xffd2

}


// ================================================
// 0xe0f5: WORD 'UNK_0xe0f7' codep=0x224c parp=0xe0f7
// ================================================

void UNK_0xe0f7() // UNK_0xe0f7
{
  Push(cc_FALSE); // FALSE
  Push(Read16(regsp)); // DUP
}


// ================================================
// 0xe0fd: WORD 'UNK_0xe0ff' codep=0x224c parp=0xe0ff
// ================================================

void UNK_0xe0ff() // UNK_0xe0ff
{
  Push(cc_TRUE); // TRUE
  Push(Read16(regsp)); // DUP
}


// ================================================
// 0xe105: WORD 'UNK_0xe107' codep=0x224c parp=0xe107
// ================================================

void UNK_0xe107() // UNK_0xe107
{
  Push(cc_FALSE); // FALSE
  Push(cc_TRUE); // TRUE
}

// 0xe10d: db 0x4c 0x22 0xcf 0x51 0x32 0x62 0xae 0x0b 0x90 0x16 'L" Q2b    '

// ================================================
// 0xe117: WORD 'BIO/ENR' codep=0x4b3b parp=0xe123
// ================================================

void BIO_slash_ENR() // BIO/ENR
{
  switch(Pop()) // BIO/ENR
  {
  case 20:
    UNK_0xe107(); // UNK_0xe107
    break;
  case 22:
    UNK_0xe0f7(); // UNK_0xe0f7
    break;
  case 27:
    UNK_0xe107(); // UNK_0xe107
    break;
  case 32:
    UNK_0xe0f7(); // UNK_0xe0f7
    break;
  case 29:
    UNK_0xe107(); // UNK_0xe107
    break;
  case 0:
    UNK_0xe0f7(); // UNK_0xe0f7
    break;
  default:
    UNK_0xe0ff(); // UNK_0xe0ff
    break;

  }
}

// ================================================
// 0xe13f: WORD 'UNK_0xe141' codep=0x224c parp=0xe141
// ================================================

void UNK_0xe141() // UNK_0xe141
{
  _at_INST_dash_S(); // @INST-S
  BIO_slash_ENR(); // BIO/ENR case
  Push(pp_UNK_0xdfb3); // UNK_0xdfb3
  _ex__2(); // !_2
  Push(pp_UNK_0xdfaf); // UNK_0xdfaf
  _ex__2(); // !_2
}


// ================================================
// 0xe14f: WORD 'UNK_0xe151' codep=0x224c parp=0xe151
// ================================================

void UNK_0xe151() // UNK_0xe151
{
  unsigned short int a = Pop(); // >R
  Push(a); // I
  Push(0); // 0
  Push(0x0014);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  PRINT("CRITICAL", 8); // (.")
  goto label2;

  label1:
  Push(a); // I
  Push(0x0014);
  Push(0x0032);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  PRINT("HEAVY", 5); // (.")
  goto label2;

  label3:
  Push(a); // I
  Push(0x0032);
  Push(0x0050);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label4;
  PRINT("MODERATE", 8); // (.")
  goto label2;

  label4:
  Push(a); // I
  Push(0x0050);
  Push(0x005f);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label5;
  PRINT("SLIGHT", 6); // (.")
  goto label2;

  label5:
  Push(a); // I
  Push(0x005f);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label6;
  PRINT("MINIMAL", 7); // (.")
  goto label2;

  label6:
  PRINT("NONE", 4); // (.")

  label2:
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe1f3: WORD 'UNK_0xe1f5' codep=0x224c parp=0xe1f5
// ================================================

void UNK_0xe1f5() // UNK_0xe1f5
{
  Push(0x0028);
  _st_(); // <
  if (Pop() == 0) return;
  SetColor("PINK");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe205: WORD 'UNK_0xe207' codep=0x224c parp=0xe207
// ================================================

void UNK_0xe207() // UNK_0xe207
{
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  SetColor("LT-BLUE");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe211: WORD 'UNK_0xe213' codep=0x224c parp=0xe213
// ================================================

void UNK_0xe213() // UNK_0xe213
{
  Push2Words("NULL");
  Push(0x000e);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x65f2); // IFIELD(UNK_0xe008)
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  _0_gt_(); // 0>
  Push(i); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  MAX(); // MAX
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x65f2); // IFIELD(UNK_0xe008)
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffd4

  Push(1); // 1
  MAX(); // MAX
  _slash_(); // /
  Push(0x65f2); // IFIELD(UNK_0xe008)
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
  Push(0x0013);
  _gt_(); // >
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xe265: WORD 'UNK_0xe267' codep=0x224c parp=0xe267
// ================================================

void UNK_0xe267() // UNK_0xe267
{
  Push(cc__8); // 8
  UNK_0xe207(); // UNK_0xe207
  UNK_0xe213(); // UNK_0xe213
  Push(Read16(regsp)); // DUP
  UNK_0xe1f5(); // UNK_0xe1f5
  UNK_0xe151(); // UNK_0xe151
}


// ================================================
// 0xe275: WORD 'UNK_0xe277' codep=0x224c parp=0xe277
// ================================================

void UNK_0xe277() // UNK_0xe277
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(Read16(regsp)); // DUP
  Push(cc__7); // 7
  Push(0x000a);
  WITHIN(); // WITHIN
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(cc__7); // 7
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(0x001e);
  MOD(); // MOD
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(0xc014); // probable 'BLDLI_2'
  MODULE(); // MODULE
  Push(0xbfda); // probable 'EDL>P'
  MODULE(); // MODULE

  label2:
  goto label3;

  label1:
  Pop(); // DROP

  label3:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe2c7: WORD 'UNK_0xe2c9' codep=0x224c parp=0xe2c9
// ================================================

void UNK_0xe2c9() // UNK_0xe2c9
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe2cf: WORD '?HEAVY' codep=0x224c parp=0xe2da
// ================================================
// entry

void _ask_HEAVY() // ?HEAVY
{
  UNK_0xe2c9(); // UNK_0xe2c9
  UNK_0xe213(); // UNK_0xe213
  Push(0x0032);
  _st_(); // <
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe2e8: WORD 'UNK_0xe2ea' codep=0x224c parp=0xe2ea
// ================================================

void UNK_0xe2ea() // UNK_0xe2ea
{
  Push(pp__n_AUX); // #AUX
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(0x0068);
  Push(0x00b7);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  Push(0x000d);
  UNK_0xe207(); // UNK_0xe207
  Push(1); // 1
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
  Push(0x012c);
  _slash_MOD(); // /MOD
  Push(0x121f);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x001e);
  _slash_MOD(); // /MOD
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(".", 1); // (.")
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("-", 1); // (.")
  Push(0); // 0
  _st__n_(); // <#
  _n_(); // #
  _n_(); // #
  _n__gt_(); // #>
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT("-", 1); // (.")
  Push(0); // 0
  _dot_R(); // .R
  goto label1;

  label2:
  PRINT("??-??-???", 9); // (.")

  label1:
  UNK_0xdfb7(); // UNK_0xdfb7
  UNK_0xe277(); // UNK_0xe277
}


// ================================================
// 0xe386: WORD 'UNK_0xe388' codep=0x224c parp=0xe388
// ================================================

void UNK_0xe388() // UNK_0xe388
{
  Push(cc__4); // 4
  UNK_0xe207(); // UNK_0xe207
  Push(0x6626); // IFIELD(UNK_0xe026)
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;

  UNK_0x3f09("UP");
  goto label2;

  label1:

  UNK_0x3f09("DOWN");

  label2:
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe3ac: WORD 'UNK_0xe3ae' codep=0x224c parp=0xe3ae
// ================================================

void UNK_0xe3ae() // UNK_0xe3ae
{
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(0x0096);
  M_star_(); // M*
  D_gt_(); // D>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  SetColor("PINK");
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe3c6: WORD 'UNK_0xe3c8' codep=0x224c parp=0xe3c8
// ================================================

void UNK_0xe3c8() // UNK_0xe3c8
{
  Push(cc__5); // 5
  UNK_0xe207(); // UNK_0xe207
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  UNK_0xe3ae(); // UNK_0xe3ae
  Push(0x0064);
  U_slash_MOD(); // U/MOD
  Push(0); // 0
  _dot_R(); // .R
  PRINT(".", 1); // (.")
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0); // 0
  _dot_R(); // .R
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(0x2710); Push(0x0000);
  D_st_(); // D<
  if (Pop() == 0) goto label1;
  _dot_(); // .
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe406: WORD 'UNK_0xe408' codep=0x224c parp=0xe408
// ================================================

void UNK_0xe408() // UNK_0xe408
{
  Push(cc__6); // 6
  UNK_0xe207(); // UNK_0xe207
  UNK_0xe2c9(); // UNK_0xe2c9
  Push(0x6600); // IFIELD(UNK_0xe017)
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  Push(0x6624); // IFIELD(UNK_0xe021)
  Push(Read16(Pop())); // @
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  MAX(); // MAX
  _dash_(); // -
  Push(0x0064);
  ROT(); // ROT
  _star__slash_(); // */
  _dot_(); // .
  PRINT("%", 1); // (.")
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe446: WORD 'UNK_0xe448' codep=0x224c parp=0xe448
// ================================================

void UNK_0xe448() // UNK_0xe448
{
  SWAP(); // SWAP
  Push(0x008f);
  Push(Pop() + Pop()); // +
  Push(0x008f);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(i); // I
  OVER(); // OVER
  Push(Pop()+2); // 2+
  Push(i); // I
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xfff2

  Pop(); // DROP
}


// ================================================
// 0xe46a: WORD 'UNK_0xe46c' codep=0x224c parp=0xe46c
// ================================================

void UNK_0xe46c() // UNK_0xe46c
{
  SWAP(); // SWAP
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Push(0x00a8);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x00a7);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(i); // I
  OVER(); // OVER
  Push(Pop()+2); // 2+
  Push(i); // I
  LLINE(); // LLINE
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff0

  Pop(); // DROP
}


// ================================================
// 0xe496: WORD 'UNK_0xe498' codep=0x224c parp=0xe498
// ================================================

void UNK_0xe498() // UNK_0xe498
{
  Push(cc__7); // 7
  UNK_0xe207(); // UNK_0xe207
  Push(0x6626); // IFIELD(UNK_0xe026)
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  PRINT("UN", 2); // (.")

  label1:
  PRINT("ARMED", 5); // (.")
}


// ================================================
// 0xe4b9: WORD 'UNK_0xe4bb' codep=0x224c parp=0xe4bb
// ================================================

void UNK_0xe4bb() // UNK_0xe4bb
{
  Push(0x0015);
  _eq_SPECIE(); // =SPECIE
  _at_INST_dash_S(); // @INST-S
  Push(0x0017);
  Push(0x0019);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  Push(0x001e);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe4db: WORD 'UNK_0xe4dd' codep=0x224c parp=0xe4dd
// ================================================

void UNK_0xe4dd() // UNK_0xe4dd
{
  SetColor("YELLOW");
  _ex_COLOR(); // !COLOR
  Push(0x6613); // IFIELD(UNK_0xe01c)
  Push(Read16(Pop())); // @
  Push(0x003c);
  _slash_(); // /
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0065);
  UNK_0xe448(); // UNK_0xe448

  label1:
  Push(0x0019);
  Push(0x6613); // IFIELD(UNK_0xe01c)
  Push(Read16(Pop())); // @
  Push(0x003c);
  _slash_(); // /
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x0065);
  UNK_0xe46c(); // UNK_0xe46c
}


// ================================================
// 0xe515: WORD 'UNK_0xe517' codep=0x224c parp=0xe517
// ================================================

void UNK_0xe517() // UNK_0xe517
{
  Push(0x65fa); // IFIELD(UNK_0xe00d)
  Push(Read16(Pop())); // @
  Push(0x00ff);
  Push(Pop() & Pop()); // AND
  Push(1); // 1
  Push(0x0065);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  Push(0x6611); // IFIELD(UNK_0xe012)
  Push(Read16(Pop())); // @
  Push(0x09c4);
  MIN(); // MIN
  Push(0x0064);
  _slash_(); // /
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0056);
  UNK_0xe448(); // UNK_0xe448

  label1:
  Push(0x0019);
  Push(0x6611); // IFIELD(UNK_0xe012)
  Push(Read16(Pop())); // @
  Push(0x09c4);
  MIN(); // MIN
  Push(0x0064);
  _slash_(); // /
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x0056);
  UNK_0xe46c(); // UNK_0xe46c
}


// ================================================
// 0xe571: WORD 'UNK_0xe573' codep=0x224c parp=0xe573
// ================================================

void UNK_0xe573() // UNK_0xe573
{
  UNK_0xe4dd(); // UNK_0xe4dd
  UNK_0xe517(); // UNK_0xe517
}


// ================================================
// 0xe579: WORD 'UNK_0xe57b' codep=0x1d29 parp=0xe57b
// ================================================
// 0xe57b: db 0xe7 0x31 0x30 0x9e 0x0c 0xc3 0xc3 0x30 0xff 0x1e 0xf3 0xff 0x3c 0xcf 0x00 0xc0 ' 10    0    <   '

// ================================================
// 0xe58b: WORD 'UNK_0xe58d' codep=0x224c parp=0xe58d
// ================================================

void UNK_0xe58d() // UNK_0xe58d
{
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  _2OVER(); // 2OVER
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xfffa

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe59d: WORD 'UNK_0xe59f' codep=0x224c parp=0xe59f
// ================================================

void UNK_0xe59f() // UNK_0xe59f
{
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  Push(0x0055);
  Push(0x008e);
  Push(0x0055);
  Push(0x00a8);
  Push(0x0059);
  Push(0x00a8);
  Push(0x0059);
  Push(0x008e);
  Push(0x0055);
  Push(0x008e);
  Push(cc__4); // 4
  UNK_0xe58d(); // UNK_0xe58d
  Push(0x0064);
  Push(0x008e);
  Push(0x0064);
  Push(0x00a8);
  Push(0x0068);
  Push(0x00a8);
  Push(0x0068);
  Push(0x008e);
  Push(0x0064);
  Push(0x008e);
  Push(cc__4); // 4
  UNK_0xe58d(); // UNK_0xe58d
  _gt_1FONT(); // >1FONT
  Push(0x0056);
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("S", 1); // (.")
  Push(0x0065);
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("A", 1); // (.")
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xe57b); // UNK_0xe57b
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  Push(cc__6); // 6
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(0x0014);
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex__2(); // !_2
  Push(0x005c);
  Push(0x00a3);
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xe645: WORD 'UNK_0xe647' codep=0x224c parp=0xe647
// ================================================

void UNK_0xe647() // UNK_0xe647
{
  UNK_0xe2c9(); // UNK_0xe2c9
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x0069);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("STATUS", 6); // (.")
  _gt_1FONT(); // >1FONT
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("LT-GREE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x0055);
  Push(0x00b7);
  POS_dot_(); // POS.
  PRINT("DATE:", 5); // (.")
  _at_CRS(); // @CRS
  Push(1); // 1
  UNK_0xe2ea(); // UNK_0xe2ea
  _ex_CRS(); // !CRS
  Push(0x0055);
  Push(0x00af);
  POS_dot_(); // POS.
  PRINT("DAMAGE:", 7); // (.")
  _at_CRS(); // @CRS
  UNK_0xe267(); // UNK_0xe267
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x00a6);
  POS_dot_(); // POS.
  PRINT("CARGO:", 6); // (.")
  _at_CRS(); // @CRS
  UNK_0xe408(); // UNK_0xe408
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x009d);
  POS_dot_(); // POS.
  PRINT("ENERGY:", 7); // (.")
  _at_CRS(); // @CRS
  UNK_0xe3c8(); // UNK_0xe3c8
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x0094);
  POS_dot_(); // POS.
  PRINT("SHIELDS:", 8); // (.")
  _at_CRS(); // @CRS
  UNK_0xe388(); // UNK_0xe388
  _ex_CRS(); // !CRS
  Push(0x006b);
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("WEAP:", 5); // (.")
  _at_CRS(); // @CRS
  UNK_0xe498(); // UNK_0xe498
  _ex_CRS(); // !CRS
  _at_CRS(); // @CRS
  UNK_0xe573(); // UNK_0xe573
  _ex_CRS(); // !CRS
  ICLOSE(); // ICLOSE
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  M_star_(); // M*
  D_st_(); // D<
  if (Pop() == 0) goto label1;
  Push(0x0dac); Push(0x0000);
  goto label2;

  label1:
  Push(0x1d4c); Push(0x0000);

  label2:
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  Push(pp_VSTIME); // VSTIME
  D_ex_(); // D!
}


// ================================================
// 0xe73c: WORD 'UNK_0xe73e' codep=0x1d29 parp=0xe73e
// ================================================
// 0xe73e: db 0xff 0xff '  '

// ================================================
// 0xe740: WORD 'UNK_0xe742' codep=0x1d29 parp=0xe742
// ================================================
// 0xe742: db 0xff 0xf6 '  '

// ================================================
// 0xe744: WORD 'UNK_0xe746' codep=0x1d29 parp=0xe746
// ================================================
// 0xe746: db 0xa0 0x5f ' _'

// ================================================
// 0xe748: WORD 'UNK_0xe74a' codep=0x1d29 parp=0xe74a
// ================================================
// 0xe74a: db 0x50 0xa9 'P '

// ================================================
// 0xe74c: WORD 'UNK_0xe74e' codep=0x224c parp=0xe74e
// ================================================

void UNK_0xe74e() // UNK_0xe74e
{
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex__2(); // !_2
  Push(cc__3); // 3
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(cc__4); // 4
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
}


// ================================================
// 0xe762: WORD 'UNK_0xe764' codep=0x224c parp=0xe764
// ================================================

void UNK_0xe764() // UNK_0xe764
{
  UNK_0xe74e(); // UNK_0xe74e
  Push(pp_UNK_0xe73e); // UNK_0xe73e
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xe770: WORD 'UNK_0xe772' codep=0x224c parp=0xe772
// ================================================

void UNK_0xe772() // UNK_0xe772
{
  UNK_0xe74e(); // UNK_0xe74e
  Push(pp_UNK_0xe742); // UNK_0xe742
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xe77e: WORD 'UNK_0xe780' codep=0x224c parp=0xe780
// ================================================

void UNK_0xe780() // UNK_0xe780
{
  Push(0x6600); // IFIELD(UNK_0xe017)
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(0x6624); // IFIELD(UNK_0xe021)
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0x01f4);
  _slash_(); // /
}


// ================================================
// 0xe79c: WORD 'UNK_0xe79e' codep=0x224c parp=0xe79e
// ================================================

void UNK_0xe79e() // UNK_0xe79e
{
  UNK_0xe780(); // UNK_0xe780
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xe764(); // UNK_0xe764
  Push(cc__4); // 4
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  i++;
  } while(i<imax); // (LOOP) 0xfff6

}


// ================================================
// 0xe7b8: WORD 'UNK_0xe7ba' codep=0x224c parp=0xe7ba
// ================================================

void UNK_0xe7ba() // UNK_0xe7ba
{
  Push(0x6600); // IFIELD(UNK_0xe017)
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  UNK_0xe780(); // UNK_0xe780
  _dash_(); // -
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xe772(); // UNK_0xe772
  Push(cc__4); // 4
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  i++;
  } while(i<imax); // (LOOP) 0xfff6

}


// ================================================
// 0xe7dc: WORD 'UNK_0xe7de' codep=0x224c parp=0xe7de
// ================================================

void UNK_0xe7de() // UNK_0xe7de
{
  Push(0x6637); // IFIELD(UNK_0xe030)
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xe74e(); // UNK_0xe74e
  Push(pp_UNK_0xe746); // UNK_0xe746
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  BLT(); // BLT
  Push(cc__4); // 4
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  i++;
  } while(i<imax); // (LOOP) 0xfff6

}


// ================================================
// 0xe802: WORD 'UNK_0xe804' codep=0x224c parp=0xe804
// ================================================

void UNK_0xe804() // UNK_0xe804
{
  Push(0x6638); // IFIELD(UNK_0xe035)
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xe74e(); // UNK_0xe74e
  Push(pp_UNK_0xe74a); // UNK_0xe74a
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  BLT(); // BLT
  Push(cc__4); // 4
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  i++;
  } while(i<imax); // (LOOP) 0xfff6

}


// ================================================
// 0xe828: WORD 'UNK_0xe82a' codep=0x224c parp=0xe82a
// ================================================

void UNK_0xe82a() // UNK_0xe82a
{
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  CTINIT(); // CTINIT
  Push(0xbe45); // probable '.HUFF'
  MODULE(); // MODULE
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe84a: WORD 'UNK_0xe84c' codep=0x224c parp=0xe84c
// ================================================

void UNK_0xe84c() // UNK_0xe84c
{
  _at_COLOR(); // @COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _ex_COLOR(); // !COLOR
  PAD_v_16(); // PAD|16
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  PAD_v_16(); // PAD|16
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(i); // I
  _dash_(); // -
  Push(pp_YLINE); // YLINE
  _ex__2(); // !_2
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_XSTART); // XSTART
  _ex__2(); // !_2
  Push(Read16(regsp)); // DUP
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_XEND); // XEND
  _ex__2(); // !_2
  HLINE(); // HLINE
  Push(Pop()+2); // 2+
  j++;
  } while(j<jmax); // (LOOP) 0xffda


  label1:
  Push(Pop()+1); // 1+
  i++;
  } while(i<imax); // (LOOP) 0xffba

  Pop(); // DROP
}


// ================================================
// 0xe8b2: WORD 'UNK_0xe8b4' codep=0x224c parp=0xe8b4
// ================================================

void UNK_0xe8b4() // UNK_0xe8b4
{
  SetColor("BLACK");
  ERASE_dash_A(); // ERASE-A
  UNK_0xe59f(); // UNK_0xe59f
  UNK_0xe647(); // UNK_0xe647
}


// ================================================
// 0xe8be: WORD 'UNK_0xe8c0' codep=0x224c parp=0xe8c0
// ================================================

void UNK_0xe8c0() // UNK_0xe8c0
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(0x0012);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(0); // 0
  goto label2;

  label1:
  LoadData("UNK_0xe08b"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0059);
  SWAP(); // SWAP
  _at_RECORD(); // @RECORD
  Push(cc__7); // 7
  Push(Pop() + Pop()); // +
  Push(0); // 0
  Push(cc__7); // 7
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  OVER(); // OVER
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  i++;
  } while(i<imax); // (LOOP) 0xfff4

  SWAP(); // SWAP
  Pop(); // DROP

  label2:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe904: WORD 'UNK_0xe906' codep=0x224c parp=0xe906
// ================================================

void UNK_0xe906() // UNK_0xe906
{
  Push2Words("NULL");
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xe90e: WORD 'UNK_0xe910' codep=0x1d29 parp=0xe910
// ================================================
// 0xe910: db 0x3a 0x20 ': '

// ================================================
// 0xe912: WORD 'UNK_0xe914' codep=0x1d29 parp=0xe914
// ================================================
// 0xe914: db 0x3a 0x20 ': '

// ================================================
// 0xe916: WORD 'UNK_0xe918' codep=0x1d29 parp=0xe918
// ================================================
// 0xe918: db 0x81 0xc3 0x81 0x81 0x81 0x81 0xc3 0x81 '        '

// ================================================
// 0xe920: WORD 'UNK_0xe922' codep=0x224c parp=0xe922
// ================================================

void UNK_0xe922() // UNK_0xe922
{
  _ex_COLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe910); // UNK_0xe910
  _ex__2(); // !_2
  Push(0x004c);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe914); // UNK_0xe914
  _ex__2(); // !_2
  Push(Pop()+1); // 1+
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  Push(cc__8); // 8
  Push(Read16(regsp)); // DUP
  Push(pp_LBLT); // LBLT
  _ex__2(); // !_2
  Push(pp_WBLT); // WBLT
  _ex__2(); // !_2
  Push(pp_UNK_0xe918); // UNK_0xe918
  Push(pp_ABLT); // ABLT
  _ex__2(); // !_2
  BLT(); // BLT
}


// ================================================
// 0xe95a: WORD 'UNK_0xe95c' codep=0x224c parp=0xe95c
// ================================================

void UNK_0xe95c() // UNK_0xe95c
{
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  SetColor("RED");
  UNK_0xe922(); // UNK_0xe922
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  MAX(); // MAX
  Push(0x0043);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe914); // UNK_0xe914
  _ex__2(); // !_2
  SWAP(); // SWAP
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  MAX(); // MAX
  Push(0x0072);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe910); // UNK_0xe910
  _ex__2(); // !_2
  SetColor("RED");
  UNK_0xe922(); // UNK_0xe922
  CLICK(); // CLICK
}


// ================================================
// 0xe99e: WORD 'UNK_0xe9a0' codep=0x224c parp=0xe9a0
// ================================================

void UNK_0xe9a0() // UNK_0xe9a0
{
  XYSCAN(); // XYSCAN
  Push(pp_KEYTIME); // KEYTIME
  _2_at_(); // 2@
  Push(pp_LKEYTIM); // LKEYTIM
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0x00c8); Push(0x0000);
  D_st_(); // D<
  unsigned short int a = Pop(); // >R
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(cc__4); // 4
  Push(a); // I
  Push(Pop() * Pop()); // *
  Push(1); // 1
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(cc__4); // 4
  Push(a); // I
  Push(Pop() * Pop()); // *
  Push(1); // 1
  MAX(); // MAX
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  OVER(); // OVER
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  Push(0x0073);
  WITHIN(); // WITHIN
  OVER(); // OVER
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(cc__3); // 3
  Push(0x0044);
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  UNK_0xe95c(); // UNK_0xe95c
  Push(0x0032);
  MS(); // MS
  goto label3;

  label2:
  Pop(); Pop();// 2DROP

  label3:
  goto label4;

  label1:
  Pop(); Pop();// 2DROP

  label4:
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xea1a: WORD 'UNK_0xea1c' codep=0x224c parp=0xea1c
// ================================================

void UNK_0xea1c() // UNK_0xea1c
{
  SetColor("DK-GREE");
  _ex_COLOR(); // !COLOR
  Push(0x0054);
  Push(0x00b4);
  POS_dot_(); // POS.
  PRINT("MASS", 4); // (.")
  Push(0x0054);
  Push(0x00a5);
  POS_dot_(); // POS.
  PRINT("TONS", 4); // (.")
  unsigned short int a = Pop(); // >R
  Push(0); // 0
  _2DUP(); // 2DUP
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0); // 0
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x00ac);
  POS_dot_(); // POS.

  label2:
  _2DUP(); // 2DUP
  Push2Words("NULL");
  D_gt_(); // D>
  if (Pop() == 0) goto label1;
  Push(a); // R>
  Push(Pop()+1); // 1+
  unsigned short int b = Pop(); // >R
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0); // 0
  _2SWAP(); // 2SWAP
  Push(0x000a);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0); // 0
  _2SWAP(); // 2SWAP
  goto label2;

  label1:
  Pop(); Pop();// 2DROP
  Push(a); // R>
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label3;
  ROT(); // ROT
  ROT(); // ROT
  Push(0); // 0
  D_dot_R(); // D.R
  PRINT("*", 1); // (.")
  Push(0x000a);
  Push(0); // 0
  _dot_R(); // .R
  Push(cc__3); // 3
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(0); // 0

  label3:
  D_dot_(); // D.
}


// ================================================
// 0xeaba: WORD 'UNK_0xeabc' codep=0x224c parp=0xeabc
// ================================================

void UNK_0xeabc() // UNK_0xeabc
{
  UNK_0xe906(); // UNK_0xe906
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  Push(0); // 0
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x0032);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0xfffb);
  Push(0x0019);
  RRND(); // RRND
  TONE(); // TONE
  _2DUP(); // 2DUP
  SetColor("GREEN");
  UNK_0xe922(); // UNK_0xe922
  Push(cc__5); // 5
  MS(); // MS
  _2DUP(); // 2DUP
  SetColor("RED");
  UNK_0xe922(); // UNK_0xe922
  Push(cc__5); // 5
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffde

  BEEPOFF(); // BEEPOFF
  Pop(); Pop();// 2DROP
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0012);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(0x001f);
  _dash_(); // -
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_at_(); // 2@
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x001e);
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  Push(0x003f);
  _dash_(); // -
  Push(pp_YWLD_c_YP); // YWLD:YP
  _2_at_(); // 2@
  _star__slash_(); // */
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_at_(); // 2@
  SWAP(); // SWAP
  _slash_(); // /
  Push(Pop()+1); // 1+
  Push(0); // 0
  SQRT(); // SQRT
  _dash_(); // -
  Push(pp_ILOCAL); // ILOCAL
  Push(Read16(Pop())); // @
  _ask_ICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  POINT_gt_I(); // POINT>I
  _at_IL(); // @IL
  _at_IH(); // @IH
  Push2Words("*SHIP");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  _at_IL(); // @IL
  _at_IH(); // @IH
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2

  label2:
  j++;
  } while(j<jmax); // (LOOP) 0xffe6


  label1:
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xeb78: WORD 'UNK_0xeb7a' codep=0x224c parp=0xeb7a
// ================================================

void UNK_0xeb7a() // UNK_0xeb7a
{
  Push(0x00b6);
  Push(0x006f);
  Push(0x007e);
  Push(0x009c);
  SetColor("GREY1");
  SetColor("GREY1");
  SetColor("VIOLET");
  _ask_MRC(); // ?MRC
  POLY_dash_WI(); // POLY-WI
  Push(0x00b4);
  Push(0x0071);
  Push(0x0080);
  Push(0x009a);
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xebaa: WORD 'UNK_0xebac' codep=0x224c parp=0xebac
// ================================================

void UNK_0xebac() // UNK_0xebac
{
  SetColor("DK-BLUE");
  _ex_COLOR(); // !COLOR
  Push(0x009c);
  Push(0x00b7);
  Push(0x0053);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x006e);
  Push(0x007e);
  OVER(); // OVER
  Push(0x00b6);
  LLINE(); // LLINE
}


// ================================================
// 0xebd2: WORD 'UNK_0xebd4' codep=0x224c parp=0xebd4
// ================================================

void UNK_0xebd4() // UNK_0xebd4
{
  CTINIT(); // CTINIT
  _gt_2FONT(); // >2FONT
  Push(0x0067);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("SENSORS", 7); // (.")
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xebf0: WORD 'UNK_0xebf2' codep=0x224c parp=0xebf2
// ================================================

void UNK_0xebf2() // UNK_0xebf2
{
  SetColor("BLACK");
  ERASE_dash_A(); // ERASE-A
  UNK_0xebac(); // UNK_0xebac
  UNK_0xeb7a(); // UNK_0xeb7a
  UNK_0xebd4(); // UNK_0xebd4
}


// ================================================
// 0xebfe: WORD 'UNK_0xec00' codep=0x1d29 parp=0xec00
// ================================================
// 0xec00: db 0x04 0x0d 0x0e 0x0b 0x09 0x03 0x06 0x07 0x08 '         '

// ================================================
// 0xec09: WORD 'UNK_0xec0b' codep=0x224c parp=0xec0b
// ================================================

void UNK_0xec0b() // UNK_0xec0b
{
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xec00); // UNK_0xec00
  Push(Pop() + Pop()); // +
  Push(0); // 0
  Push(cc__3); // 3
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xec23: WORD 'UNK_0xec25' codep=0x224c parp=0xec25
// ================================================

void UNK_0xec25() // UNK_0xec25
{
  unsigned short int a = Pop(); // >R
  Push(a); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(a); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(a); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0); // 0
  SQRT(); // SQRT
  Push(Pop()+1); // 1+
  Push(0); // 0
  SWAP(); // SWAP
  RRND(); // RRND
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) goto label2;
  Push(-Pop()); // NEGATE

  label2:
  unsigned short int b = Pop(); // >R
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) goto label3;
  Push(-Pop()); // NEGATE

  label3:
  Push(cc__9); // 9
  Push(0x000f);
  _star__slash_(); // */
  Push(a); // I'
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(b); // R>
  Push(a); // I
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  goto label4;

  label1:
  Push(a); // I
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  RRND(); // RRND
  Push(a); // I
  Push(cc__5); // 5
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // I
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()+1); // 1+
  RRND(); // RRND

  label4:
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xecc5: WORD 'UNK_0xecc7' codep=0x1d29 parp=0xecc7
// ================================================
// 0xecc7: db 0x01 0x01 0x16 0x1b 0x00 '     '

// ================================================
// 0xeccc: WORD 'UNK_0xecce' codep=0x1d29 parp=0xecce
// ================================================
// 0xecce: db 0x02 0x01 0x16 0x1b 0x00 '     '

// ================================================
// 0xecd3: WORD 'UNK_0xecd5' codep=0x224c parp=0xecd5
// ================================================

void UNK_0xecd5() // UNK_0xecd5
{
  LoadData("UNK_0xe093"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe0ab(); // UNK_0xe0ab
  Push(0x0480);
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
}


// ================================================
// 0xece9: WORD 'UNK_0xeceb' codep=0x224c parp=0xeceb
// ================================================

void UNK_0xeceb() // UNK_0xeceb
{
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(0x00ff);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label2;
  Push(pp_UNK_0xdfaf); // UNK_0xdfaf
  ON_2(); // ON_2
  goto label3;

  label2:
  Push(pp_UNK_0xdfb3); // UNK_0xdfb3
  ON_2(); // ON_2

  label3:
  Push(Read16(regsp)); // DUP
  UNK_0xec0b(); // UNK_0xec0b
  UNK_0xec25(); // UNK_0xec25
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label4;
  unsigned short int a = Pop(); // >R
  Push(0x0071);
  Push(Pop() + Pop()); // +
  Push(a); // R>
  Push(0x007f);
  Push(Pop() + Pop()); // +
  BEEPON_2(); // BEEPON_2
  LPLOT(); // LPLOT
  BEEPOFF(); // BEEPOFF
  goto label5;

  label4:
  Pop(); Pop();// 2DROP

  label5:
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xed43: WORD 'UNK_0xed45' codep=0x224c parp=0xed45
// ================================================

void UNK_0xed45() // UNK_0xed45
{
  PRINT("%", 1); // (.")
}


// ================================================
// 0xed4b: WORD 'UNK_0xed4d' codep=0x224c parp=0xed4d
// ================================================

void UNK_0xed4d() // UNK_0xed4d
{
  Push(pp_RECORD_n_); // RECORD#
  _ex__2(); // !_2
  Push(0x001a);
  Push(pp_FILE_n_); // FILE#
  _ex__2(); // !_2
  LoadData("ELEM-NA"); // from 'ELEMENT     '
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xed6b: WORD 'UNK_0xed6d' codep=0x224c parp=0xed6d
// ================================================

void UNK_0xed6d() // UNK_0xed6d
{
  SetColor("BLUE");
  _ex_COLOR(); // !COLOR
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  PRINT(": ", 2); // (.")
  CTINIT(); // CTINIT
}


// ================================================
// 0xed7c: WORD 'UNK_0xed7e' codep=0x224c parp=0xed7e
// ================================================

void UNK_0xed7e() // UNK_0xed7e
{
  Push(0x001d);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) return;
  Push(0x00cf);
  UNK_0xe82a(); // UNK_0xe82a
}


// ================================================
// 0xed90: WORD 'UNK_0xed92' codep=0x224c parp=0xed92
// ================================================

void UNK_0xed92() // UNK_0xed92
{
  CTINIT(); // CTINIT
  Push(0x00d6);
  UNK_0xe82a(); // UNK_0xe82a
}


// ================================================
// 0xed9c: WORD 'UNK_0xed9e' codep=0x224c parp=0xed9e
// ================================================

void UNK_0xed9e() // UNK_0xed9e
{
  UNK_0xed4d(); // UNK_0xed4d
  CTCR(); // CTCR
  Push(0x000d);
  SPACES(); // SPACES
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xedac: WORD 'UNK_0xedae' codep=0x224c parp=0xedae
// ================================================

void UNK_0xedae() // UNK_0xedae
{
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT

  UNK_0x3f09("ATMOSPHERE");
  UNK_0xed6d(); // UNK_0xed6d
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  Push(pp_RECORD_n_); // RECORD#
  _ex__2(); // !_2
  Push(0x001e);
  Push(pp_FILE_n_); // FILE#
  _ex__2(); // !_2
  LoadData("UNK_0xe0a3"); // from 'COMPOUNDS   '
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ec); // IFIELD(PHRASE$)
  COUNT(); // COUNT
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  ICLOSE(); // ICLOSE

  UNK_0x3f09("HYDROSPHERE");
  UNK_0xed6d(); // UNK_0xed6d
  Push(pp_HYDRO); // HYDRO
  Push(Read16(Pop())); // @
  Push(pp_RECORD_n_); // RECORD#
  _ex__2(); // !_2
  Push(0x001e);
  Push(pp_FILE_n_); // FILE#
  _ex__2(); // !_2
  LoadData("UNK_0xe0a3"); // from 'COMPOUNDS   '
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ec); // IFIELD(PHRASE$)
  COUNT(); // COUNT
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR
  ICLOSE(); // ICLOSE
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S

  UNK_0x3f09("LITHOSPHERE");
  UNK_0xed6d(); // UNK_0xed6d
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  LoadData("UNK_0xe09b"); // from 'PLANET      '
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xed9e(); // UNK_0xed9e
  i++;
  } while(i<imax); // (LOOP) 0xfff4

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee39: WORD 'UNK_0xee3b' codep=0x224c parp=0xee3b
// ================================================

void UNK_0xee3b() // UNK_0xee3b
{
  SetColor("GREY1");
  SetColor("GREY1");
  SetColor("DK-GREE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x0054);
  Push(0x009a);
  POS_dot_(); // POS.
  PRINT("BIO", 3); // (.")
  Push(0x0054);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("MIN", 3); // (.")
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x0093);
  POS_dot_(); // POS.
  UNK_0xe8c0(); // UNK_0xe8c0
  Push(cc__3); // 3
  _dot_R(); // .R
  UNK_0xed45(); // UNK_0xed45
  Push(0x0055);
  Push(0x0085);
  POS_dot_(); // POS.
  UNK_0xecd5(); // UNK_0xecd5
  Push(cc__3); // 3
  _dot_R(); // .R
  UNK_0xed45(); // UNK_0xed45
}


// ================================================
// 0xee8d: WORD 'UNK_0xee8f' codep=0x224c parp=0xee8f
// ================================================

void UNK_0xee8f() // UNK_0xee8f
{
  LoadData("UNK_0xe054"); // from 'VESSEL      '
  _2_at_(); // 2@
  D0_eq_(); // D0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f09("OBJECT CONSTITUENTS");
  UNK_0xed6d(); // UNK_0xed6d
  LoadData("UNK_0xe054"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xe4bb(); // UNK_0xe4bb
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  CTCR(); // CTCR
  Push(cc__6); // 6
  UNK_0xed4d(); // UNK_0xed4d

  label2:
  Push(cc__3); // 3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label3;
  Push(0x65f2); // IFIELD(UNK_0xe07e)
  Push(Pop()+1); // 1+
  goto label4;

  label3:
  LoadData("UNK_0xe05c"); // from 'VESSEL      '

  label4:
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label5;
  CTCR(); // CTCR
  UNK_0xed4d(); // UNK_0xed4d

  label5:
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x0fa0); Push(0x0000);
  D_plus_(); // D+
  Push(pp_OK_dash_TALK); // OK-TALK
  D_ex_(); // D!
  return;

  label1:
  Push(0x001d);
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) return;
  WUP(); // WUP
  UNK_0xed7e(); // UNK_0xed7e
}


// ================================================
// 0xef19: WORD 'UNK_0xef1b' codep=0x224c parp=0xef1b
// ================================================

void UNK_0xef1b() // UNK_0xef1b
{
  SetColor("DK-GREE");
  _ex_COLOR(); // !COLOR
  Push(0x0054);
  Push(0x009a);
  POS_dot_(); // POS.
  PRINT("BIO", 3); // (.")
  Push(0x0054);
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("ENERGY", 6); // (.")
  CTINIT(); // CTINIT
  Push(0x0055);
  Push(0x0093);
  POS_dot_(); // POS.
  Push(pp_UNK_0xdfa6); // UNK_0xdfa6
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfaf); // UNK_0xdfaf
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(cc__3); // 3
  _dot_R(); // .R
  UNK_0xed45(); // UNK_0xed45
  Push(0x0055);
  Push(0x0085);
  POS_dot_(); // POS.
  Push(pp_UNK_0xdfa6); // UNK_0xdfa6
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfb3); // UNK_0xdfb3
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdfaf); // UNK_0xdfaf
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfa6); // UNK_0xdfa6
  Push(Read16(Pop())); // @
  Push(0x0064);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0x004b);
  Push(0x0056);
  RRND(); // RRND
  Push(0x0064);
  _star__slash_(); // */

  label1:
  Push(cc__3); // 3
  _dot_R(); // .R
  UNK_0xed45(); // UNK_0xed45
}


// ================================================
// 0xef9e: WORD 'UNK_0xefa0' codep=0x224c parp=0xefa0
// ================================================

void UNK_0xefa0() // UNK_0xefa0
{
  LoadData("UNK_0xe083"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(cc__6); // 6
  Push(Pop() * Pop()); // *
  Push(0x0013);
  UNK_0xea1c(); // UNK_0xea1c
}


// ================================================
// 0xefb0: WORD 'UNK_0xefb2' codep=0x224c parp=0xefb2
// ================================================

void UNK_0xefb2() // UNK_0xefb2
{
  Push(0x00b6);
  Push(0x006f);
  Push(0x007e);
  Push(0x009c);
  SetColor("GREY1");
  SetColor("GREY1");
  SetColor("VIOLET");
  _ask_MRC(); // ?MRC
  POLY_dash_WI(); // POLY-WI
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Push(0x0087);
  Push(0x009a);
  LoadData("UNK_0xe083"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_(); // /
  Push(0x0019);
  MIN(); // MIN
  Push(cc__4); // 4
  MAX(); // MAX
  unsigned short int a = Pop(); // >R
  Push(a); // I
  FILLCIR(); // FILLCIR
  Push(a); // R>
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xecc7); // UNK_0xecc7
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
  Push(pp_UNK_0xecce); // UNK_0xecce
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
  UNK_0xe8c0(); // UNK_0xe8c0
  Push(0x00ff);
  Push(0x0064);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) goto label1;
  Push(1); // 1
  goto label2;

  label1:
  Push(0x00ff);

  label2:
  Push(pp_UNK_0xecc7); // UNK_0xecc7
  C_ex__2(); // C!_2
  UNK_0xecd5(); // UNK_0xecd5
  Push(Read16(regsp)); // DUP
  _0_gt_(); // 0>
  if (Pop() == 0) goto label3;
  Push(2); // 2
  goto label4;

  label3:
  Push(0x00ff);

  label4:
  Push(pp_UNK_0xecce); // UNK_0xecce
  C_ex__2(); // C!_2
  MAX(); // MAX
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label5;
  Push(0x0096);
  MAX(); // MAX
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_UNK_0xecc7); // UNK_0xecc7
  UNK_0xeceb(); // UNK_0xeceb
  Push(pp_UNK_0xecce); // UNK_0xecce
  UNK_0xeceb(); // UNK_0xeceb
  i++;
  } while(i<imax); // (LOOP) 0xfff6


  label5:
  UNK_0xefa0(); // UNK_0xefa0
  UNK_0xee3b(); // UNK_0xee3b
  UNK_0xedae(); // UNK_0xedae
}


// ================================================
// 0xf06a: WORD 'UNK_0xf06c' codep=0x224c parp=0xf06c
// ================================================

void UNK_0xf06c() // UNK_0xf06c
{
  UNK_0xebf2(); // UNK_0xebf2
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x00e2);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  Push(0x00b4);
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  Push(0x0027);
  Push(Pop() * Pop()); // *
  PAD_v_16(); // PAD|16
  ADDR_gt_SEG(); // ADDR>SEG
  SWAP(); // SWAP
  Push(0x007b);
  Func6("FILE-ST");
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x0027);
  MEM_st_DSK(); // MEM<DSK
  UNK_0xe84c(); // UNK_0xe84c
}


// ================================================
// 0xf0a2: WORD 'UNK_0xf0a4' codep=0x224c parp=0xf0a4
// ================================================

void UNK_0xf0a4() // UNK_0xf0a4
{
  Push(0x0083);
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  Push(0x0059);
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  Push(0x0010);
  SetColor("BLACK");
  POLY_dash_ER(); // POLY-ER
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  UNK_0xe79e(); // UNK_0xe79e
  UNK_0xe7ba(); // UNK_0xe7ba
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xe7de(); // UNK_0xe7de
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  UNK_0xe804(); // UNK_0xe804
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf0d8: WORD 'UNK_0xf0da' codep=0x224c parp=0xf0da
// ================================================

void UNK_0xf0da() // UNK_0xf0da
{
  LoadData("UNK_0xe04c"); // from 'VESSEL      '
  Push(Read16(Pop())); // @
  Push(0); // 0
  UNK_0xea1c(); // UNK_0xea1c
}


// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x224c parp=0xf0e6
// ================================================

void UNK_0xf0e6() // UNK_0xf0e6
{
  UNK_0xe141(); // UNK_0xe141
  Push(0); // 0
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label1;
  Push(0x0015);
  goto label2;

  label1:
  LoadData("UNK_0xe044"); // from 'VESSEL      '
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop()-1); // 1-

  label2:
  UNK_0xf06c(); // UNK_0xf06c
  Push(0x65f3); // IFIELD(UNK_0xe064)
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0064);
  LoadData("UNK_0xe069"); // from 'VESSEL      '
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  Push(1); // 1
  MAX(); // MAX
  _star__slash_(); // */
  Push(0x0064);
  MIN(); // MIN
  Push(pp_UNK_0xdfa6); // UNK_0xdfa6
  _ex__2(); // !_2
  UNK_0xf0da(); // UNK_0xf0da
  UNK_0xef1b(); // UNK_0xef1b
  UNK_0xee8f(); // UNK_0xee8f
}


// ================================================
// 0xf12c: WORD '.READINGS' codep=0x4b3b parp=0xf13a
// ================================================

void _dot_READINGS() // .READINGS
{
  switch(Pop()) // .READINGS
  {
  case 25:
    UNK_0xf0e6(); // UNK_0xf0e6
    break;
  case 32:
    UNK_0xefb2(); // UNK_0xefb2
    break;
  case 60:
    UNK_0xed92(); // UNK_0xed92
    break;
  default:
    UNK_0xe906(); // UNK_0xe906
    break;

  }
}

// ================================================
// 0xf14a: WORD '(/SENSORS)' codep=0x224c parp=0xf159
// ================================================
// entry

void _ro__slash_SENSORS_rc_() // (/SENSORS)
{
  Push(1); // 1
  Push(0xb77c); // probable 'OV?.EQ'
  MODULE(); // MODULE
  Push(pp_IGLOBAL); // IGLOBAL
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
  Push(pp__ask_PORT); // ?PORT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(2); // 2
  Push(pp__n_AUX); // #AUX
  _ex__2(); // !_2
  UNK_0xebf2(); // UNK_0xebf2
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _2DUP(); // 2DUP
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
  goto label2;

  label1:
  Push(0x0023);
  Push(0x003b);
  SetColor("RED");
  UNK_0xe922(); // UNK_0xe922

  label5:
  UNK_0xe9a0(); // UNK_0xe9a0
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label5;
  UNK_0xeabc(); // UNK_0xeabc
  Push(pp_UNK_0xe914); // UNK_0xe914
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe910); // UNK_0xe910
  Push(Read16(Pop())); // @
  SetColor("RED");
  UNK_0xe922(); // UNK_0xe922

  label2:
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  _gt_C_plus_S(); // >C+S
  _at_INST_dash_C(); // @INST-C
  _dot_READINGS(); // .READINGS case
  ICLOSE(); // ICLOSE
  goto label4;

  label3:
  Pop(); Pop();// 2DROP

  label4:
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_at_(); // 1.5@
  D0_eq_(); // D0=
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("THERE'S NOTHING THERE.", 22); // (.")
  Push(0x0001); Push(0x0000);
  Push(pp_SENSE_dash_A); // SENSE-A
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf20c: WORD 'UNK_0xf20e' codep=0x224c parp=0xf20e
// ================================================

void UNK_0xf20e() // UNK_0xf20e
{
  Push(cc_FALSE); // FALSE
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1); // IFIELD(INST-SI)
  Push(0x0011);
  Push(Pop() + Pop()); // +
  Push(0x0012);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(cc__5); // 5
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  Pop(); // DROP
  Push(cc_TRUE); // TRUE
  SWAP(); // SWAP
  imax = i; // LEAVE

  label1:
  ICLOSE(); // ICLOSE
  Push(cc__3); // 3
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe0

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf24c: WORD 'UNK_0xf24e' codep=0x224c parp=0xf24e
// ================================================

void UNK_0xf24e() // UNK_0xf24e
{
  ILAST(); // ILAST
  CI(); // CI
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(0x65e7); // IFIELD(INST-OF)
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf25e: WORD 'UNK_0xf260' codep=0x224c parp=0xf260
// ================================================

void UNK_0xf260() // UNK_0xf260
{
  Push(pp__ro_ENCOUN); // (ENCOUN
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xf266: WORD 'UNK_0xf268' codep=0x224c parp=0xf268
// ================================================

void UNK_0xf268() // UNK_0xf268
{
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1); // IFIELD(INST-SI)
  Push(0x0011);
  Push(Pop() + Pop()); // +
  Push(0x0012);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(cc__5); // 5
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  CI(); // CI
  imax = i; // LEAVE

  label1:
  ICLOSE(); // ICLOSE
  Push(cc__3); // 3
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe4

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf29e: WORD 'UNK_0xf2a0' codep=0x224c parp=0xf2a0
// ================================================

void UNK_0xf2a0() // UNK_0xf2a0
{
  Push(cc__8); // 8
  ORGIA(); // ORGIA
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ec); // IFIELD(UNK_0xdfaa)
  Push(Read8(Pop())&0xFF); // C@
  I_gt_C(); // I>C
  _ex_COLOR(); // !COLOR
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2b2: WORD 'UNK_0xf2b4' codep=0x224c parp=0xf2b4
// ================================================

void UNK_0xf2b4() // UNK_0xf2b4
{
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  UNK_0xf260(); // UNK_0xf260
  _gt_C_plus_S(); // >C+S
  Push(cc__7); // 7
  _eq_SPECIE(); // =SPECIE
  if (Pop() == 0) Push(1); else Push(0); // NOT
  ICLOSE(); // ICLOSE
  return;

  label1:
  Push(cc_TRUE); // TRUE
}


// ================================================
// 0xf2d4: WORD 'UNK_0xf2d6' codep=0x224c parp=0xf2d6
// ================================================

void UNK_0xf2d6() // UNK_0xf2d6
{
  UNK_0xf20e(); // UNK_0xf20e
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  UNK_0xf2b4(); // UNK_0xf2b4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0); // 0
  Push(0x0019);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push2Words("*PLIST");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x0061);
  IFIND(); // IFIND
  Pop(); // DROP
  C_gt_(); // C>
  ICLOSE(); // ICLOSE
  UNK_0xf268(); // UNK_0xf268
  _gt_C_plus_S(); // >C+S
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf2a0(); // UNK_0xf2a0
  Push(pp__i__dot_HUFF); // '.HUFF
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  UNK_0xf24e(); // UNK_0xf24e
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf328: WORD 'UNK_0xf32a' codep=0x224c parp=0xf32a
// ================================================

void UNK_0xf32a() // UNK_0xf32a
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xf330: WORD 'CTXT>I' codep=0x4b3b parp=0xf33b
// ================================================

void CTXT_gt_I() // CTXT>I
{
  switch(Pop()) // CTXT>I
  {
  case 3:
    Push2Words("*SHIP");
    break;
  case 4:
    UNK_0xf260(); // UNK_0xf260
    break;
  default:
    UNK_0xf32a(); // UNK_0xf32a
    break;

  }
}

// ================================================
// 0xf347: WORD 'UNK_0xf349' codep=0x224c parp=0xf349
// ================================================

void UNK_0xf349() // UNK_0xf349
{
  Push(pp_STAGES); // STAGES
}


// ================================================
// 0xf34d: WORD 'UNK_0xf34f' codep=0x224c parp=0xf34f
// ================================================

void UNK_0xf34f() // UNK_0xf34f
{
  Push(pp_STAGES); // STAGES
  Push(Pop()+2); // 2+
}


// ================================================
// 0xf355: WORD 'UNK_0xf357' codep=0x224c parp=0xf357
// ================================================

void UNK_0xf357() // UNK_0xf357
{
  Push(pp_STAGES); // STAGES
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf35f: WORD 'UNK_0xf361' codep=0x224c parp=0xf361
// ================================================

void UNK_0xf361() // UNK_0xf361
{
  Push(pp_STAGES); // STAGES
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf369: WORD 'UNK_0xf36b' codep=0x224c parp=0xf36b
// ================================================

void UNK_0xf36b() // UNK_0xf36b
{
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0aaa);
  Push(Pop() * Pop()); // *
  Push(pp_STARDAT); // STARDAT
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf37b: WORD 'UNK_0xf37d' codep=0x224c parp=0xf37d
// ================================================

void UNK_0xf37d() // UNK_0xf37d
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push2Words("NULL");
  D_eq_(); // D=
  if (Pop() == 0) return;
  UNK_0xf36b(); // UNK_0xf36b
  Push(pp_HAZE); // HAZE
  D_ex_(); // D!
  Push(pp_STAGES); // STAGES
  Push(0x000e);
  Push(0); // 0
  FILL_2(); // FILL_2
}


// ================================================
// 0xf39b: WORD 'UNK_0xf39d' codep=0x224c parp=0xf39d
// ================================================

void UNK_0xf39d() // UNK_0xf39d
{
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_plus_(); // D+
  UNK_0xf36b(); // UNK_0xf36b
  D_st_(); // D<
  OVER(); // OVER
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  OVER(); // OVER
  ON_2(); // ON_2

  label1:
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf3bf: WORD 'UNK_0xf3c1' codep=0x224c parp=0xf3c1
// ================================================

void UNK_0xf3c1() // UNK_0xf3c1
{
  Push(pp_CONTEXT_3); // CONTEXT_3
  Push(Read16(Pop())); // @
  CTXT_gt_I(); // CTXT>I case
  _gt_C_plus_S(); // >C+S
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x02d8);
  Push(0x04e0);
  WITHIN(); // WITHIN
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(0x02e8);
  Push(0x0640);
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3f3: WORD ''DO-CLOUD' codep=0x1d29 parp=0xf401
// ================================================
// 0xf401: db 0xda 0xc5 '  '

// ================================================
// 0xf403: WORD 'UNK_0xf405' codep=0x224c parp=0xf405
// ================================================

void UNK_0xf405() // UNK_0xf405
{
  Push(pp__i_DO_dash_CLOUD); // 'DO-CLOUD
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf40d: WORD 'UNK_0xf40f' codep=0x224c parp=0xf40f
// ================================================

void UNK_0xf40f() // UNK_0xf40f
{
  UNK_0xf349(); // UNK_0xf349
  Push2Words("0.");
  UNK_0xf39d(); // UNK_0xf39d
  if (Pop() == 0) goto label1;
  Push(1); // 1
  UNK_0xf405(); // UNK_0xf405

  label1:
  UNK_0xf34f(); // UNK_0xf34f
  Push(0xbff4); Push(0x0000);
  UNK_0xf39d(); // UNK_0xf39d
  if (Pop() == 0) goto label2;
  Push(2); // 2
  UNK_0xf405(); // UNK_0xf405

  label2:
  UNK_0xf357(); // UNK_0xf357
  Push(0x7fe8); Push(0x0001);
  UNK_0xf39d(); // UNK_0xf39d
  if (Pop() == 0) goto label3;
  Push(cc__4); // 4
  UNK_0xf405(); // UNK_0xf405

  label3:
  UNK_0xf361(); // UNK_0xf361
  Push(0xffe0); Push(0x0001);
  UNK_0xf39d(); // UNK_0xf39d
  if (Pop() == 0) return;
  Push(cc__5); // 5
  UNK_0xf405(); // UNK_0xf405
}


// ================================================
// 0xf455: WORD '.STARDATE' codep=0x224c parp=0xf463
// ================================================
// entry

void _dot_STARDATE() // .STARDATE
{
  UNK_0xe2ea(); // UNK_0xe2ea
  UNK_0xf2d6(); // UNK_0xf2d6
  UNK_0xf3c1(); // UNK_0xf3c1
  if (Pop() == 0) goto label1;
  UNK_0xf37d(); // UNK_0xf37d
  UNK_0xf40f(); // UNK_0xf40f
  return;

  label1:
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  UNK_0xf349(); // UNK_0xf349
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xf36b(); // UNK_0xf36b
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  D_dash_(); // D-
  Push(0xffe0); Push(0x0001);
  D_st_(); // D<
  if (Pop() == 0) goto label2;
  Push(0); // 0
  UNK_0xf405(); // UNK_0xf405

  label2:
  Push2Words("NULL");
  Push(pp_HAZE); // HAZE
  D_ex_(); // D!
}


// ================================================
// 0xf4af: WORD 'UNK_0xf4b1' codep=0x224c parp=0xf4b1
// ================================================

void UNK_0xf4b1() // UNK_0xf4b1
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) goto label1;
  SetColor("YELLOW");
  goto label2;

  label1:
  SetColor("RED");

  label2:
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xf4c7: WORD 'UNK_0xf4c9' codep=0x224c parp=0xf4c9
// ================================================

void UNK_0xf4c9() // UNK_0xf4c9
{
  RRND(); // RRND
  Push(0x0090);
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  UNK_0xf4b1(); // UNK_0xf4b1
  LPLOT(); // LPLOT
}


// ================================================
// 0xf4e5: WORD 'UNK_0xf4e7' codep=0x224c parp=0xf4e7
// ================================================

void UNK_0xf4e7() // UNK_0xf4e7
{
  Push(pp__ask_COMBAT); // ?COMBAT
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xe2c9(); // UNK_0xe2c9
  Push(0x6606); // IFIELD(UNK_0xe003)
  Push(Read16(Pop())); // @
  Push(Pop()*2); // 2*
  Push(Read16(regsp)); // DUP
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(0x005c);
  Push(0x005e);
  UNK_0xf4c9(); // UNK_0xf4c9
  Push(j); // I
  Push(0x0060);
  Push(0x0062);
  UNK_0xf4c9(); // UNK_0xf4c9
  j++;
  } while(j<jmax); // (LOOP) 0xffe6

  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf529: WORD '(/STATUS)' codep=0x224c parp=0xf537
// ================================================
// entry

void _ro__slash_STATUS_rc_() // (/STATUS)
{
  UNK_0xe8b4(); // UNK_0xe8b4
  UNK_0xf0a4(); // UNK_0xf0a4
  UNK_0xf4e7(); // UNK_0xf4e7
  Push(1); // 1
  Push(pp__n_AUX); // #AUX
  _ex__2(); // !_2
}


// ================================================
// 0xf545: WORD '.STAT-TEXT' codep=0x224c parp=0xf554
// ================================================
// entry

void _dot_STAT_dash_TEXT() // .STAT-TEXT
{
  UNK_0xe647(); // UNK_0xe647
  UNK_0xf0a4(); // UNK_0xf0a4
  UNK_0xf4e7(); // UNK_0xf4e7
}

// 0xf55c: db 0x53 0x43 0x49 0x2d 0x00 'SCI- '
  