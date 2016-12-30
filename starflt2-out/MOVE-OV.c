// ====== OVERLAY 'MOVE-OV' ======
// store offset = 0xea20
// overlay size   = 0x0b40

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xea36  codep:0x224c parp:0xea36 size:0x0006 C-string:'UNK_0xea36'
//      UNK_0xea3e  codep:0x224c parp:0xea3e size:0x0006 C-string:'UNK_0xea3e'
//      UNK_0xea46  codep:0x224c parp:0xea46 size:0x002e C-string:'UNK_0xea46'
//      UNK_0xea76  codep:0x224c parp:0xea76 size:0x0020 C-string:'UNK_0xea76'
//      UNK_0xea98  codep:0x7394 parp:0xea98 size:0x0006 C-string:'UNK_0xea98'
//      UNK_0xeaa0  codep:0x224c parp:0xeaa0 size:0x0012 C-string:'UNK_0xeaa0'
//            S>CM  codep:0x4b3b parp:0xeabb size:0x001e C-string:'S_gt_CM'
//      UNK_0xeadb  codep:0x224c parp:0xeadb size:0x0014 C-string:'UNK_0xeadb'
//      UNK_0xeaf1  codep:0x224c parp:0xeaf1 size:0x000a C-string:'UNK_0xeaf1'
//      UNK_0xeafd  codep:0x224c parp:0xeafd size:0x000a C-string:'UNK_0xeafd'
//      UNK_0xeb09  codep:0x224c parp:0xeb09 size:0x0018 C-string:'UNK_0xeb09'
//      UNK_0xeb23  codep:0x224c parp:0xeb23 size:0x002e C-string:'UNK_0xeb23'
//         SET-SPE  codep:0x224c parp:0xeb5d size:0x002a C-string:'SET_dash_SPE'
//          .STATS  codep:0x224c parp:0xeb92 size:0x0008 C-string:'_dot_STATS'
//         .DISTAN  codep:0x224c parp:0xeba6 size:0x0008 C-string:'_dot_DISTAN'
//          .WHERE  codep:0x224c parp:0xebb9 size:0x0008 C-string:'_dot_WHERE'
//         .ENERGY  codep:0x224c parp:0xebcd size:0x0008 C-string:'_dot_ENERGY'
//      UNK_0xebd7  codep:0x224c parp:0xebd7 size:0x0016 C-string:'UNK_0xebd7'
//            CBLT  codep:0x1d29 parp:0xebf6 size:0x0004 C-string:'CBLT'
//           CBLTP  codep:0xec04 parp:0xec04 size:0x002c C-string:'CBLTP'
//      UNK_0xec32  codep:0x224c parp:0xec32 size:0x00c6 C-string:'UNK_0xec32'
//      UNK_0xecfa  codep:0x224c parp:0xecfa size:0x002e C-string:'UNK_0xecfa'
//      UNK_0xed2a  codep:0x224c parp:0xed2a size:0x005e C-string:'UNK_0xed2a'
//      UNK_0xed8a  codep:0x224c parp:0xed8a size:0x0010 C-string:'UNK_0xed8a'
//         .STARDA  codep:0x224c parp:0xeda6 size:0x0008 C-string:'_dot_STARDA'
//      UNK_0xedb0  codep:0x1d29 parp:0xedb0 size:0x0002 C-string:'UNK_0xedb0'
//      UNK_0xedb4  codep:0x1d29 parp:0xedb4 size:0x0006 C-string:'UNK_0xedb4'
//      UNK_0xedbc  codep:0x2214 parp:0xedbc size:0x000a C-string:'UNK_0xedbc'
//      UNK_0xedc8  codep:0x224c parp:0xedc8 size:0x0010 C-string:'UNK_0xedc8'
//          #BOXES  codep:0x224c parp:0xede3 size:0x0022 C-string:'_n_BOXES'
//      UNK_0xee07  codep:0x224c parp:0xee07 size:0x0016 C-string:'UNK_0xee07'
//      UNK_0xee1f  codep:0x224c parp:0xee1f size:0x001e C-string:'UNK_0xee1f'
//      UNK_0xee3f  codep:0x224c parp:0xee3f size:0x000c C-string:'UNK_0xee3f'
//      UNK_0xee4d  codep:0x224c parp:0xee4d size:0x000c C-string:'UNK_0xee4d'
//      UNK_0xee5b  codep:0x224c parp:0xee5b size:0x0086 C-string:'UNK_0xee5b'
//      UNK_0xeee3  codep:0x224c parp:0xeee3 size:0x000c C-string:'UNK_0xeee3'
//      UNK_0xeef1  codep:0x224c parp:0xeef1 size:0x000e C-string:'UNK_0xeef1'
//      UNK_0xef01  codep:0x224c parp:0xef01 size:0x0054 C-string:'UNK_0xef01'
//      UNK_0xef57  codep:0x224c parp:0xef57 size:0x0020 C-string:'UNK_0xef57'
//      UNK_0xef79  codep:0x224c parp:0xef79 size:0x001e C-string:'UNK_0xef79'
//      UNK_0xef99  codep:0x224c parp:0xef99 size:0x000c C-string:'UNK_0xef99'
//      UNK_0xefa7  codep:0x224c parp:0xefa7 size:0x0008 C-string:'UNK_0xefa7'
//      UNK_0xefb1  codep:0x224c parp:0xefb1 size:0x002c C-string:'UNK_0xefb1'
//      UNK_0xefdf  codep:0x224c parp:0xefdf size:0x002c C-string:'UNK_0xefdf'
//      UNK_0xf00d  codep:0x224c parp:0xf00d size:0x0058 C-string:'UNK_0xf00d'
//      UNK_0xf067  codep:0x224c parp:0xf067 size:0x002c C-string:'UNK_0xf067'
//      UNK_0xf095  codep:0x224c parp:0xf095 size:0x0022 C-string:'UNK_0xf095'
//      UNK_0xf0b9  codep:0x224c parp:0xf0b9 size:0x0006 C-string:'UNK_0xf0b9'
//         ?POPULA  codep:0x224c parp:0xf0cb size:0x0056 C-string:'_ask_POPULA'
//      UNK_0xf123  codep:0x224c parp:0xf123 size:0x0048 C-string:'UNK_0xf123'
//      UNK_0xf16d  codep:0x224c parp:0xf16d size:0x0028 C-string:'UNK_0xf16d'
//      UNK_0xf197  codep:0x224c parp:0xf197 size:0x0040 C-string:'UNK_0xf197'
//      UNK_0xf1d9  codep:0x224c parp:0xf1d9 size:0x0026 C-string:'UNK_0xf1d9'
//      UNK_0xf201  codep:0x224c parp:0xf201 size:0x0008 C-string:'UNK_0xf201'
//      UNK_0xf20b  codep:0x224c parp:0xf20b size:0x0016 C-string:'UNK_0xf20b'
//      UNK_0xf223  codep:0x224c parp:0xf223 size:0x000c C-string:'UNK_0xf223'
//      UNK_0xf231  codep:0x224c parp:0xf231 size:0x002c C-string:'UNK_0xf231'
//      UNK_0xf25f  codep:0x224c parp:0xf25f size:0x0034 C-string:'UNK_0xf25f'
//      UNK_0xf295  codep:0x224c parp:0xf295 size:0x0076 C-string:'UNK_0xf295'
//      UNK_0xf30d  codep:0x224c parp:0xf30d size:0x0074 C-string:'UNK_0xf30d'
//      UNK_0xf383  codep:0x224c parp:0xf383 size:0x0044 C-string:'UNK_0xf383'
//      UNK_0xf3c9  codep:0x224c parp:0xf3c9 size:0x000e C-string:'UNK_0xf3c9'
//      UNK_0xf3d9  codep:0x224c parp:0xf3d9 size:0x000c C-string:'UNK_0xf3d9'
//      UNK_0xf3e7  codep:0x224c parp:0xf3e7 size:0x0024 C-string:'UNK_0xf3e7'
//      UNK_0xf40d  codep:0x224c parp:0xf40d size:0x0008 C-string:'UNK_0xf40d'
//      UNK_0xf417  codep:0x224c parp:0xf417 size:0x002e C-string:'UNK_0xf417'
//      UNK_0xf447  codep:0x224c parp:0xf447 size:0x0016 C-string:'UNK_0xf447'
//      UNK_0xf45f  codep:0x224c parp:0xf45f size:0x000c C-string:'UNK_0xf45f'
//      UNK_0xf46d  codep:0x224c parp:0xf46d size:0x000e C-string:'UNK_0xf46d'
//      UNK_0xf47d  codep:0x224c parp:0xf47d size:0x000a C-string:'UNK_0xf47d'
//      UNK_0xf489  codep:0x224c parp:0xf489 size:0x000e C-string:'UNK_0xf489'
//      UNK_0xf499  codep:0x224c parp:0xf499 size:0x0050 C-string:'UNK_0xf499'
//            TELE  codep:0x224c parp:0xf4f2 size:0x003d C-string:'TELE'
//         TV-MOVE  codep:0x224c parp:0xf53b size:0x0000 C-string:'TV_dash_MOVE'

// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_CBLT = 0xebf6; // CBLT size: 4
// {0xff, 0x66, 0x00, 0x66}

const unsigned short int pp_UNK_0xedb0 = 0xedb0; // UNK_0xedb0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xedb4 = 0xedb4; // UNK_0xedb4 size: 6
// {0x3a, 0x20, 0x14, 0x22, 0xd0, 0x07}


const unsigned short int cc_UNK_0xedbc = 0x47d0; // UNK_0xedbc


// 0xea32: db 0xb4 0x00 '  '

// ================================================
// 0xea34: WORD 'UNK_0xea36' codep=0x224c parp=0xea36
// ================================================

void UNK_0xea36() // UNK_0xea36
{
  Push(pp_TVEHICL); // TVEHICL
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xea3c: WORD 'UNK_0xea3e' codep=0x224c parp=0xea3e
// ================================================

void UNK_0xea3e() // UNK_0xea3e
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xea44: WORD 'UNK_0xea46' codep=0x224c parp=0xea46
// ================================================

void UNK_0xea46() // UNK_0xea46
{
  _ask_NEW_dash_HO(); // ?NEW-HO
  if (Pop() == 0) return;
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_LAST_dash_UP); // LAST-UP
  D_ex_(); // D!
  Push(1); // 1
  Push(pp_STAR_dash_HR); // STAR-HR
  _plus__ex__2(); // +!_2
  Push(pp_STAR_dash_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(0x0018);
  _eq_(); // =
  if (Pop() == 0) return;
  Push(pp_STAR_dash_HR); // STAR-HR
  _099(); // 099
  Push(1); // 1
  Push(pp_STARDAT); // STARDAT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xea74: WORD 'UNK_0xea76' codep=0x224c parp=0xea76
// ================================================

void UNK_0xea76() // UNK_0xea76
{
  _gt_TVCT(); // >TVCT
  CTERASE(); // CTERASE
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(0); // 0
  CTPOS_dot_(); // CTPOS.
}

// 0xea86: db 0x94 0x73 0x20 0x07 0x02 0x17 0x49 0x6c 0x94 0x73 0x20 0x01 0x01 0x17 0x49 0x6c ' s    Il s    Il'

// ================================================
// 0xea96: WORD 'UNK_0xea98' codep=0x7394 parp=0xea98
// ================================================
// 0xea98: db 0x20 0x04 0x01 0x17 0x49 0x6c '    Il'

// ================================================
// 0xea9e: WORD 'UNK_0xeaa0' codep=0x224c parp=0xeaa0
// ================================================

void UNK_0xeaa0() // UNK_0xeaa0
{
  LoadData("UNK_0xea98"); // from 'PLANET      '
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) goto label1;
  Push(1); // 1
  return;

  label1:
  Push(2); // 2
}


// ================================================
// 0xeab2: WORD 'S>CM' codep=0x4b3b parp=0xeabb
// ================================================

void S_gt_CM() // S>CM
{
  switch(Pop()) // S>CM
  {
  case 4:
    Push(cc__4); // 4
    break;
  case 1:
    Push(cc__5); // 5
    break;
  case 3:
    Push(cc__3); // 3
    break;
  default:
    UNK_0xeaa0(); // UNK_0xeaa0
    break;

  }
}
// 0xeacb: db 0x4c 0x22 0x3c 0xea 0x8e 0xea 0x92 0x0c 0xb9 0xea 0xdf 0x79 0x90 0x16 'L"<        y  '

// ================================================
// 0xead9: WORD 'UNK_0xeadb' codep=0x224c parp=0xeadb
// ================================================

void UNK_0xeadb() // UNK_0xeadb
{
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
}

// 0xeae5: db 0x4c 0x22 0x34 0xea 0xd9 0xea 0xdf 0x79 0x90 0x16 'L"4    y  '

// ================================================
// 0xeaef: WORD 'UNK_0xeaf1' codep=0x224c parp=0xeaf1
// ================================================

void UNK_0xeaf1() // UNK_0xeaf1
{
  Push(0x65f0); // IFIELD(INST-Y)
  _ex__2(); // !_2
  Push(0x65ee); // IFIELD(INST-X)
  _ex__2(); // !_2
}


// ================================================
// 0xeafb: WORD 'UNK_0xeafd' codep=0x224c parp=0xeafd
// ================================================

void UNK_0xeafd() // UNK_0xeafd
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
}


// ================================================
// 0xeb07: WORD 'UNK_0xeb09' codep=0x224c parp=0xeb09
// ================================================

void UNK_0xeb09() // UNK_0xeb09
{
  _gt_R(); // >R
  Push(0x00c5);
  Push(0x000c);
  Push(0x00c1);
  Push(0x0044);
  R_gt_(); // R>
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xeb21: WORD 'UNK_0xeb23' codep=0x224c parp=0xeb23
// ================================================

void UNK_0xeb23() // UNK_0xeb23
{
  Push(0x6a82); // probable 'CONTOUR'
  SETLARR(); // SETLARR
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  _dash_(); // -
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _dash_(); // -
}

// 0xeb41: db 0x4c 0x22 0x21 0xeb 0xbd 0x4d 0xff 0x4d 0x5d 0x17 0x10 0x00 0x46 0x12 0x90 0x16 'L"!  M M]   F   '

// ================================================
// 0xeb51: WORD 'SET-SPE' codep=0x224c parp=0xeb5d
// ================================================
// entry

void SET_dash_SPE() // SET-SPE
{
  UNK_0xeb23(); // UNK_0xeb23
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(Read16(regsp)); // DUP
  Push(0x0010);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0xff56);
  goto label2;

  label1:
  Push(cc__3); // 3
  Push(2); // 2
  _star__slash_(); // */
  Push(-Pop()); // NEGATE

  label2:
  Push(pp_E_slash_M); // E/M
  _ex__2(); // !_2
}


// ================================================
// 0xeb87: WORD '.STATS' codep=0x224c parp=0xeb92
// ================================================

void _dot_STATS() // .STATS
{
  Push(0xcf2b); // probable '.ST'
  MODULE(); // MODULE
}


// ================================================
// 0xeb9a: WORD '.DISTAN' codep=0x224c parp=0xeba6
// ================================================

void _dot_DISTAN() // .DISTAN
{
  Push(0xcf71); // probable '.DI'
  MODULE(); // MODULE
}


// ================================================
// 0xebae: WORD '.WHERE' codep=0x224c parp=0xebb9
// ================================================

void _dot_WHERE() // .WHERE
{
  Push(0xcf39); // probable '.WH'
  MODULE(); // MODULE
}


// ================================================
// 0xebc1: WORD '.ENERGY' codep=0x224c parp=0xebcd
// ================================================

void _dot_ENERGY() // .ENERGY
{
  Push(0xcf55); // probable '.EN'
  MODULE(); // MODULE
}


// ================================================
// 0xebd5: WORD 'UNK_0xebd7' codep=0x224c parp=0xebd7
// ================================================

void UNK_0xebd7() // UNK_0xebd7
{
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _dash_(); // -
}


// ================================================
// 0xebed: WORD 'CBLT' codep=0x1d29 parp=0xebf6
// ================================================
// 0xebf6: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xebfa: WORD 'CBLTP' codep=0xec04 parp=0xec04
// ================================================
// 0xec04: pop    ax
// 0xec05: add    ax,0003
// 0xec08: mov    [5A3D],ax
// 0xec0c: pop    ax
// 0xec0d: add    ax,0006
// 0xec10: mov    [5A48],ax
// 0xec14: mov    word ptr [5A6C],0004
// 0xec1a: mov    word ptr [5A61],0006
// 0xec20: mov    word ptr [5A77],EBF6
// 0xec26: push   ds
// 0xec27: pop    word ptr [5A84]
// 0xec2b: lodsw
// 0xec2c: mov    bx,ax
// 0xec2e: jmp    word ptr [bx]

// ================================================
// 0xec30: WORD 'UNK_0xec32' codep=0x224c parp=0xec32
// ================================================

void UNK_0xec32() // UNK_0xec32
{
  Push(pp_BLTSEG); // BLTSEG
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__8); // 8
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  Push(i); // J
  Push(Pop() + Pop()); // +
  _2DUP(); // 2DUP
  CELLCOL(); // CELLCOL
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  CELLCOL(); // CELLCOL
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(j); // I
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  R_gt_(); // R>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_R(); // >R

  label1:
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  CELLCOL(); // CELLCOL
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  CELLCOL(); // CELLCOL
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(j); // I
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label2;
  R_gt_(); // R>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  _gt_R(); // >R

  label2:
  Push(j); // I
  Push(j); // I'
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label3;
  Push(j); // I
  Push(j); // I'
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label3;
  Push(j); // I
  _0_gt_(); // 0>
  if (Pop() == 0) goto label4;
  Push(j); // I
  goto label5;

  label4:
  Push(j); // I'

  label5:
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _ex_COLOR(); // !COLOR
  _2DUP(); // 2DUP
  Push(cc__3); // 3
  Push(cc__3); // 3
  BUFFERX(); // BUFFERX
  Push(Pop()-1); // 1-
  CBLTP(); // CBLTP
  BLT(); // BLT

  label3:
  R_gt_(); // R>
  R_gt_(); // R>
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  j++;
  } while(j<jmax); // (LOOP) 0xff58

  i++;
  } while(i<imax); // (LOOP) 0xff4e

  Push(pp_BLTSEG); // BLTSEG
  _ex__2(); // !_2
}


// ================================================
// 0xecf8: WORD 'UNK_0xecfa' codep=0x224c parp=0xecfa
// ================================================

void UNK_0xecfa() // UNK_0xecfa
{
  Push(0x6a82); // probable 'CONTOUR'
  SETLARR(); // SETLARR
  UNK_0xebd7(); // UNK_0xebd7
  Push(0x0016);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0x000d);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  OVER(); // OVER
  Push(cc__8); // 8
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x000e);
  Push(Pop() + Pop()); // +
  SETREGI(); // SETREGI
  _dot_REGION(); // .REGION
  UNK_0xec32(); // UNK_0xec32
}


// ================================================
// 0xed28: WORD 'UNK_0xed2a' codep=0x224c parp=0xed2a
// ================================================

void UNK_0xed2a() // UNK_0xed2a
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  MOD(); // MOD
  _dash_(); // -
  Push(0x0018);
  _dash_(); // -
  Push(pp_XCON); // XCON
  _ex__2(); // !_2
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0014);
  MOD(); // MOD
  _dash_(); // -
  Push(0x0028);
  _dash_(); // -
  Push(pp_YCON); // YCON
  _ex__2(); // !_2
  Push(pp_DXCON); // DXCON
  _099(); // 099
  Push(pp_DYCON); // DYCON
  _099(); // 099
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(0x0012);
  _dash_(); // -
  Push(pp_XVIS); // XVIS
  _ex__2(); // !_2
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(0x001e);
  _dash_(); // -
  Push(pp_YVIS); // YVIS
  _ex__2(); // !_2
  Push(pp_DXVIS); // DXVIS
  _099(); // 099
  Push(pp_DYVIS); // DYVIS
  _099(); // 099
}


// ================================================
// 0xed88: WORD 'UNK_0xed8a' codep=0x224c parp=0xed8a
// ================================================

void UNK_0xed8a() // UNK_0xed8a
{
  _gt_C_plus_S(); // >C+S
  Push(0x65ec); // IFIELD(PHRASE$)
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed9a: WORD '.STARDA' codep=0x224c parp=0xeda6
// ================================================

void _dot_STARDA() // .STARDA
{
  Push(0xcf47); // probable '.DA'
  MODULE(); // MODULE
}


// ================================================
// 0xedae: WORD 'UNK_0xedb0' codep=0x1d29 parp=0xedb0
// ================================================
// 0xedb0: db 0x3a 0x20 ': '

// ================================================
// 0xedb2: WORD 'UNK_0xedb4' codep=0x1d29 parp=0xedb4
// ================================================
// 0xedb4: db 0x3a 0x20 0x14 0x22 0xd0 0x07 ':  "  '

// ================================================
// 0xedba: WORD 'UNK_0xedbc' codep=0x2214 parp=0xedbc
// ================================================
// 0xedbc: db 0xd0 0x47 0x94 0x73 0x44 0x90 0x02 0x22 0x07 0x6f ' G sD  " o'

// ================================================
// 0xedc6: WORD 'UNK_0xedc8' codep=0x224c parp=0xedc8
// ================================================

void UNK_0xedc8() // UNK_0xedc8
{
  UNK_0xea36(); // UNK_0xea36
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  UNK_0xeaf1(); // UNK_0xeaf1
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedd8: WORD '#BOXES' codep=0x224c parp=0xede3
// ================================================

void _n_BOXES() // #BOXES
{
  Push(0); // 0
  UNK_0xea3e(); // UNK_0xea3e
  IOPEN(); // IOPEN

  label2:
  Push(0x000b);
  Push(0x000b);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+
  INEXT(); // INEXT
  goto label2;

  label1:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xee05: WORD 'UNK_0xee07' codep=0x224c parp=0xee07
// ================================================

void UNK_0xee07() // UNK_0xee07
{
  _n_BOXES(); // #BOXES
  Push(0x0006);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(pp__i_THROW_dash_); // 'THROW-
  _at_EXECUTE(); // @EXECUTE
  Push(pp__ask_CRITIC); // ?CRITIC
  _099(); // 099
}


// ================================================
// 0xee1d: WORD 'UNK_0xee1f' codep=0x224c parp=0xee1f
// ================================================

void UNK_0xee1f() // UNK_0xee1f
{
  Push(pp_UNK_0xedb0); // UNK_0xedb0
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_DXVIS); // DXVIS
  _st__ex__gt_(); // <!>
  Push(pp_XVIS); // XVIS
  _st__plus__ex__gt_(); // <+!>
  Push(pp_UNK_0xedb4); // UNK_0xedb4
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_DYVIS); // DYVIS
  _st__ex__gt_(); // <!>
  Push(pp_YVIS); // YVIS
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xee3d: WORD 'UNK_0xee3f' codep=0x224c parp=0xee3f
// ================================================

void UNK_0xee3f() // UNK_0xee3f
{
  Push(Read16(regsp)); // DUP
  Push(pp_DXCON); // DXCON
  _st__ex__gt_(); // <!>
  Push(pp_XCON); // XCON
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xee4b: WORD 'UNK_0xee4d' codep=0x224c parp=0xee4d
// ================================================

void UNK_0xee4d() // UNK_0xee4d
{
  Push(Read16(regsp)); // DUP
  Push(pp_DYCON); // DYCON
  _st__ex__gt_(); // <!>
  Push(pp_YCON); // YCON
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xee59: WORD 'UNK_0xee5b' codep=0x224c parp=0xee5b
// ================================================

void UNK_0xee5b() // UNK_0xee5b
{
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  _2DUP(); // 2DUP
  Push(Pop()-1); // 1-
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  Push(0xfff4);
  goto label2;

  label1:
  Push(0x001a);
  Push(Pop() + Pop()); // +
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Push(0x000c);
  goto label2;

  label3:
  Push(0); // 0

  label2:
  UNK_0xee3f(); // UNK_0xee3f
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _2DUP(); // 2DUP
  Push(Pop()-1); // 1-
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Pop(); Pop();// 2DROP
  Push(0xffec);
  goto label5;

  label4:
  Push(0x002a);
  Push(Pop() + Pop()); // +
  _eq_(); // =
  if (Pop() == 0) goto label6;
  Push(0x0014);
  goto label5;

  label6:
  Push(0); // 0

  label5:
  UNK_0xee4d(); // UNK_0xee4d
  Push(pp_DXCON); // DXCON
  Push(Read16(Pop())); // @
  Push(pp_DYCON); // DYCON
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(0xbad2); // probable 'SCRLC'
  MODULE(); // MODULE
}

// 0xeed9: db 0x4c 0x22 0xf0 0x0d 0x4c 0x7e 0x90 0x16 'L"  L~  '

// ================================================
// 0xeee1: WORD 'UNK_0xeee3' codep=0x224c parp=0xeee3
// ================================================

void UNK_0xeee3() // UNK_0xeee3
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}


// ================================================
// 0xeeef: WORD 'UNK_0xeef1' codep=0x224c parp=0xeef1
// ================================================

void UNK_0xeef1() // UNK_0xeef1
{
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xeeff: WORD 'UNK_0xef01' codep=0x224c parp=0xef01
// ================================================

void UNK_0xef01() // UNK_0xef01
{
  _gt_C_plus_S(); // >C+S
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) goto label1;
  POINT_gt_I(); // POINT>I
  UNK_0xeadb(); // UNK_0xeadb
  _ex_IY(); // !IY
  _ex_IX(); // !IX

  label1:
  ICLOSE(); // ICLOSE
}

// 0xef17: db 0x4c 0x22 0xbb 0x74 0xae 0x0b 0xc9 0x74 0xae 0x0b 0x5d 0x17 0xfe 0x00 0x72 0x52 0x8b 0x75 0x90 0x16 0x4c 0x22 0x22 0x75 0x41 0x0e 0x5d 0x17 0x1b 0x00 0x5f 0x12 0xf2 0x0e 0x5d 0x17 0x30 0x00 0x5f 0x12 0x3e 0x13 0xfa 0x15 0x08 0x00 0x17 0xef 0x60 0x16 0x08 0x00 0x5d 0x17 0x55 0xba 0xd9 0x84 0x50 0x99 0x90 0x16 'L" t   t  ]   rR u  L""uA ]   _   ] 0 _ >       `   ] U   P   '

// ================================================
// 0xef55: WORD 'UNK_0xef57' codep=0x224c parp=0xef57
// ================================================

void UNK_0xef57() // UNK_0xef57
{
  IOPEN(); // IOPEN
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0xef2d);
  ALL(); // ALL
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef77: WORD 'UNK_0xef79' codep=0x224c parp=0xef79
// ================================================

void UNK_0xef79() // UNK_0xef79
{
  Push(0x001e);
  _slash_(); // /
  Push(0x001e);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(0x0012);
  _slash_(); // /
  Push(0x0012);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
}


// ================================================
// 0xef97: WORD 'UNK_0xef99' codep=0x224c parp=0xef99
// ================================================

void UNK_0xef99() // UNK_0xef99
{
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  _ex_XYSEED(); // !XYSEED
}


// ================================================
// 0xefa5: WORD 'UNK_0xefa7' codep=0x224c parp=0xefa7
// ================================================

void UNK_0xefa7() // UNK_0xefa7
{
  UNK_0xeafd(); // UNK_0xeafd
  UNK_0xef79(); // UNK_0xef79
  UNK_0xeaf1(); // UNK_0xeaf1
}


// ================================================
// 0xefaf: WORD 'UNK_0xefb1' codep=0x224c parp=0xefb1
// ================================================

void UNK_0xefb1() // UNK_0xefb1
{
  UNK_0xee07(); // UNK_0xee07
  Push(0x000b);
  Push(0x000b);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex__2(); // 1.5!_2
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  UNK_0xefa7(); // UNK_0xefa7
  UNK_0xef99(); // UNK_0xef99
  Push(0); // 0
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefdd: WORD 'UNK_0xefdf' codep=0x224c parp=0xefdf
// ================================================

void UNK_0xefdf() // UNK_0xefdf
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  UNK_0xeee3(); // UNK_0xeee3
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  _gt_C_plus_S(); // >C+S
  UNK_0xeafd(); // UNK_0xeafd
  UNK_0xef79(); // UNK_0xef79
  UNK_0xeadb(); // UNK_0xeadb
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Push(0); // 0
  goto label3;

  label2:
  Push(1); // 1

  label3:
  ICLOSE(); // ICLOSE
  return;

  label1:
  Push(1); // 1
}


// ================================================
// 0xf00b: WORD 'UNK_0xf00d' codep=0x224c parp=0xf00d
// ================================================

void UNK_0xf00d() // UNK_0xf00d
{
  UNK_0xeafd(); // UNK_0xeafd
  UNK_0xef79(); // UNK_0xef79
  Push2Words("NULL");
  UNK_0xea3e(); // UNK_0xea3e
  IOPEN(); // IOPEN

  label4:
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  Push(0x000b);
  _eq_SPECIE(); // =SPECIE
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
  _2DUP(); // 2DUP
  UNK_0xeadb(); // UNK_0xeadb
  D_eq_(); // D=
  if (Pop() == 0) goto label3;
  CI(); // CI
  goto label2;

  label3:
  Push2Words("NULL");

  label2:
  INEXT(); // INEXT
  goto label4;

  label1:
  _gt_R(); // >R
  _gt_R(); // >R
  Pop(); Pop();// 2DROP
  R_gt_(); // R>
  R_gt_(); // R>
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf065: WORD 'UNK_0xf067' codep=0x224c parp=0xf067
// ================================================

void UNK_0xf067() // UNK_0xf067
{
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x000e);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(0x0016);
  Push(Pop() + Pop()); // +
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(0x0029);
  Push(Pop() + Pop()); // +
  _ex_VISWIN(); // !VISWIN
}


// ================================================
// 0xf093: WORD 'UNK_0xf095' codep=0x224c parp=0xf095
// ================================================

void UNK_0xf095() // UNK_0xf095
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  UNK_0xef57(); // UNK_0xef57
  IOPEN(); // IOPEN
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf0b7: WORD 'UNK_0xf0b9' codep=0x224c parp=0xf0b9
// ================================================

void UNK_0xf0b9() // UNK_0xf0b9
{
  Push(pp_MOVED); // MOVED
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf0bf: WORD '?POPULA' codep=0x224c parp=0xf0cb
// ================================================
// entry

void _ask_POPULA() // ?POPULA
{
  UNK_0xefdf(); // UNK_0xefdf
  if (Pop() == 0) return;
  Push(pp__ask_NEW); // ?NEW
  ON_2(); // ON_2
  UNK_0xf00d(); // UNK_0xf00d
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  UNK_0xefb1(); // UNK_0xefb1
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  UNK_0xf0b9(); // UNK_0xf0b9
  if (Pop() == 0) goto label2;
  UNK_0xea76(); // UNK_0xea76
  Push(0x6934); Push(0x0002);
  UNK_0xed8a(); // UNK_0xed8a
  Exec(TYPE); // call of word 0x2690 '(TYPE)'

  label2:
  Push(0xcfa8); // probable 'POPU'
  MODULE(); // MODULE
  UNK_0xef57(); // UNK_0xef57
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  UNK_0xf0b9(); // UNK_0xf0b9
  if (Pop() == 0) goto label3;
  CTERASE(); // CTERASE

  label3:
  return;

  label1:
  UNK_0xf095(); // UNK_0xf095
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf121: WORD 'UNK_0xf123' codep=0x224c parp=0xf123
// ================================================

void UNK_0xf123() // UNK_0xf123
{
  SetColor("PINK");
  UNK_0xeb09(); // UNK_0xeb09
  _dot_WHERE(); // .WHERE
  Push(pp__ask_NEW); // ?NEW
  ON_2(); // ON_2
  Push(pp_MOVED); // MOVED
  ON_2(); // ON_2
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xedb0); // UNK_0xedb0
  _st__ex__gt_(); // <!>
  Push(pp_XABS); // XABS
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xedb4); // UNK_0xedb4
  _st__ex__gt_(); // <!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  UNK_0xee1f(); // UNK_0xee1f
  UNK_0xee5b(); // UNK_0xee5b
  _ask_POPULA(); // ?POPULA
  _gt_MAINVI(); // >MAINVI
  UNK_0xf067(); // UNK_0xf067
  UNK_0xedc8(); // UNK_0xedc8
  Push(pp_TVEHICL); // TVEHICL
  _1_dot_5_at_(); // 1.5@
  UNK_0xef01(); // UNK_0xef01
  UNK_0xeef1(); // UNK_0xeef1
  UNK_0xecfa(); // UNK_0xecfa
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  SetColor("GREEN");
  UNK_0xeb09(); // UNK_0xeb09
  _dot_WHERE(); // .WHERE
  UNK_0xea46(); // UNK_0xea46
}


// ================================================
// 0xf16b: WORD 'UNK_0xf16d' codep=0x224c parp=0xf16d
// ================================================

void UNK_0xf16d() // UNK_0xf16d
{
  _2OVER(); // 2OVER
  ROT(); // ROT
  SWAP(); // SWAP
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  _slash_(); // /

  label1:
  _gt_R(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label2;
  Push(Read16(regsp)); // DUP
  ABS(); // ABS
  _slash_(); // /

  label2:
  R_gt_(); // R>
}


// ================================================
// 0xf195: WORD 'UNK_0xf197' codep=0x224c parp=0xf197
// ================================================

void UNK_0xf197() // UNK_0xf197
{
  Push(0x001c);
  Push(0x0029);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _gt_C_plus_S(); // >C+S
  UNK_0xeafd(); // UNK_0xeafd
  UNK_0xeaf1(); // UNK_0xeaf1
  LoadData("ART-VOL"); // from 'ARTIFACT    '
  Push(Read16(Pop())); // @
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2
  ICLOSE(); // ICLOSE
}

// 0xf1bb: db 0x4c 0x22 0xdc 0x55 0xae 0x0b 0xf2 0x5f 0xae 0x0b 0x92 0x0f 0x41 0x0e 0xfa 0x15 0x0a 0x00 0xf2 0x5f 0xae 0x0b 0xdc 0x55 0x16 0x6d 0x90 0x16 'L" U   _    A      _   U m  '

// ================================================
// 0xf1d7: WORD 'UNK_0xf1d9' codep=0x224c parp=0xf1d9
// ================================================

void UNK_0xf1d9() // UNK_0xf1d9
{
  UNK_0xea76(); // UNK_0xea76
  Push(0x6956); Push(0x0002);
  UNK_0xed8a(); // UNK_0xed8a
  _dot_TTY(); // .TTY
  Y_slash_N(); // Y/N
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;

  UNK_0x3f09("CANCELLED");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf1ff: WORD 'UNK_0xf201' codep=0x224c parp=0xf201
// ================================================

void UNK_0xf201() // UNK_0xf201
{
  SetColor("BLACK");
  UNK_0xeb09(); // UNK_0xeb09
  _dot_WHERE(); // .WHERE
}


// ================================================
// 0xf209: WORD 'UNK_0xf20b' codep=0x224c parp=0xf20b
// ================================================

void UNK_0xf20b() // UNK_0xf20b
{
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xedb4); // UNK_0xedb4
  _st__ex__gt_(); // <!>
  Push(pp_YABS); // YABS
  _st__plus__ex__gt_(); // <+!>
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xedb0); // UNK_0xedb0
  _st__ex__gt_(); // <!>
  Push(pp_XABS); // XABS
  _st__plus__ex__gt_(); // <+!>
}


// ================================================
// 0xf221: WORD 'UNK_0xf223' codep=0x224c parp=0xf223
// ================================================

void UNK_0xf223() // UNK_0xf223
{
  UNK_0xf20b(); // UNK_0xf20b
  UNK_0xee1f(); // UNK_0xee1f
  UNK_0xee5b(); // UNK_0xee5b
  SET_dash_SPE(); // SET-SPE
  _dot_DISTAN(); // .DISTAN
}


// ================================================
// 0xf22f: WORD 'UNK_0xf231' codep=0x224c parp=0xf231
// ================================================

void UNK_0xf231() // UNK_0xf231
{
  UNK_0xf223(); // UNK_0xf223
  _gt_MAINVI(); // >MAINVI
  UNK_0xf067(); // UNK_0xf067
  NOP(); // NOP
  UNK_0xeef1(); // UNK_0xeef1
  UNK_0xecfa(); // UNK_0xecfa
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  Push(0); // 0
  Push(cc__5); // 5
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0xc1b8); // probable '(ROL'
  MODULE(); // MODULE
  Push(pp__i_INJURE); // 'INJURE
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
}


// ================================================
// 0xf25d: WORD 'UNK_0xf25f' codep=0x224c parp=0xf25f
// ================================================

void UNK_0xf25f() // UNK_0xf25f
{
  Push(pp__at__co_0_star_1_sc_); // @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  BEEPON_2(); // BEEPON_2
  Push(0x07d0);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(0x0010);
  RRND(); // RRND
  I_gt_C(); // I>C
  UNK_0xeb09(); // UNK_0xeb09
  Push(i); // I
  Push(cc__5); // 5
  _slash_(); // /
  Push(0x0064);
  Push(Pop() + Pop()); // +
  TONE(); // TONE
  i++;
  } while(i<imax); // (LOOP) 0xffe4

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf293: WORD 'UNK_0xf295' codep=0x224c parp=0xf295
// ================================================

void UNK_0xf295() // UNK_0xf295
{
  UNK_0xea76(); // UNK_0xea76
  Push(0x697a); Push(0x0002);
  UNK_0xed8a(); // UNK_0xed8a
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  GCR(); // GCR
  Push(1); // 1
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(0x6993); Push(0x0002);
  UNK_0xed8a(); // UNK_0xed8a
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Push(0x03e8);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
  Push(0xcff8); // probable '>DEBRIS'
  MODULE(); // MODULE
  Push(pp__ask_TV); // ?TV
  OFF_2(); // OFF_2
  UNK_0xf197(); // UNK_0xf197
  Push(pp_LCOLOR); // LCOLOR
  _099(); // 099
  SetColor("BLACK");
  UNK_0xeb09(); // UNK_0xeb09
  _dot_WHERE(); // .WHERE
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xeadb(); // UNK_0xeadb
  ICLOSE(); // ICLOSE

  label2:
  UNK_0xeafd(); // UNK_0xeafd
  _2OVER(); // 2OVER
  UNK_0xf16d(); // UNK_0xf16d
  _2DUP(); // 2DUP
  Push2Words("NULL");
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf231(); // UNK_0xf231
  Pop(); Pop();// 2DROP
  goto label2;

  label1:
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
  Push(pp_TVEHICL); // TVEHICL
  _at__gt_C_plus_S(); // @>C+S
  _dash_ICON(); // -ICON
  ICLOSE(); // ICLOSE
  Push(pp_FTRIG); // FTRIG
  ON_1(); // ON_1
  UNK_0xedc8(); // UNK_0xedc8
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf30b: WORD 'UNK_0xf30d' codep=0x224c parp=0xf30d
// ================================================

void UNK_0xf30d() // UNK_0xf30d
{
  Push(0x000c);
  Push(0xb78d); // probable 'TV?ART'
  MODULE(); // MODULE
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Push(pp_NOF); // NOF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(pp_NOF); // NOF
  ON_2(); // ON_2
  UNK_0xf1d9(); // UNK_0xf1d9
  if (Pop() == 0) goto label2;
  Push(0x69ba); Push(0x0002);
  UNK_0xed8a(); // UNK_0xed8a
  _dot_TTY(); // .TTY
  UNK_0xf25f(); // UNK_0xf25f
  UNK_0xf201(); // UNK_0xf201
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xeadb(); // UNK_0xeadb
  ICLOSE(); // ICLOSE
  UNK_0xeafd(); // UNK_0xeafd
  ROT(); // ROT
  SWAP(); // SWAP
  _dash_(); // -
  _gt_R(); // >R
  _dash_(); // -
  R_gt_(); // R>
  UNK_0xf20b(); // UNK_0xf20b
  UNK_0xedc8(); // UNK_0xedc8
  UNK_0xeef1(); // UNK_0xeef1
  UNK_0xed2a(); // UNK_0xed2a
  Push(0xbab2); // probable 'NEWCO'
  MODULE(); // MODULE

  label2:
  Push(pp_NOF); // NOF
  _099(); // 099
  return;

  label1:
  Push(pp__ask_ON_dash_PLA); // ?ON-PLA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  _gt_TVCT(); // >TVCT
  CTINIT(); // CTINIT

  label3:
  Push(0xb7e7); // probable '.NOFUN'
  MODULE(); // MODULE
}


// ================================================
// 0xf381: WORD 'UNK_0xf383' codep=0x224c parp=0xf383
// ================================================

void UNK_0xf383() // UNK_0xf383
{
  UNK_0xea36(); // UNK_0xea36
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xedbc); // UNK_0xedbc
  _gt_(); // >
  _gt_R(); // >R
  Push(pp_E_slash_M); // E/M
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(pp__pe_EFF); // %EFF
  Push(Read16(Pop())); // @
  _star__slash_(); // */
  Push(0x65ec); // IFIELD(INST-QT)
  _plus__ex__2(); // +!_2
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(cc_UNK_0xedbc); // UNK_0xedbc
  _st_(); // <
  R_gt_(); // R>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  BEEP(); // BEEP
  Push(0x69e0); Push(0x0002);
  UNK_0xed8a(); // UNK_0xed8a
  _dot_TTY(); // .TTY
  Push(cc__dash_1); // -1
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
}


// ================================================
// 0xf3c7: WORD 'UNK_0xf3c9' codep=0x224c parp=0xf3c9
// ================================================

void UNK_0xf3c9() // UNK_0xf3c9
{
  UNK_0xea36(); // UNK_0xea36
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf3d7: WORD 'UNK_0xf3d9' codep=0x224c parp=0xf3d9
// ================================================

void UNK_0xf3d9() // UNK_0xf3d9
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor("GREEN");
  UNK_0xeb09(); // UNK_0xeb09
  _dot_WHERE(); // .WHERE
}


// ================================================
// 0xf3e5: WORD 'UNK_0xf3e7' codep=0x224c parp=0xf3e7
// ================================================

void UNK_0xf3e7() // UNK_0xf3e7
{
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0152);
  _eq_(); // =
  SWAP(); // SWAP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  Push(pp_FTRIG); // FTRIG
  _099(); // 099
  Pop(); Pop();// 2DROP
  Push(pp_SKEY); // SKEY
  Push(Read16(Pop())); // @
  _ro_XYSCAN(); // (XYSCAN case
}


// ================================================
// 0xf40b: WORD 'UNK_0xf40d' codep=0x224c parp=0xf40d
// ================================================

void UNK_0xf40d() // UNK_0xf40d
{
  _dot_ENERGY(); // .ENERGY
  Pop(); Pop();// 2DROP
  UNK_0xf295(); // UNK_0xf295
}


// ================================================
// 0xf415: WORD 'UNK_0xf417' codep=0x224c parp=0xf417
// ================================================

void UNK_0xf417() // UNK_0xf417
{
  Push(0xf1bd);
  Push(pp__i_VEHICL); // 'VEHICL
  _st__ex__gt_(); // <!>
  Push(0xcf1b); // probable 'DO-STORM'
  Push(pp__i_REPAIR); // 'REPAIR
  _st__ex__gt_(); // <!>
  Push(0xeb92); // probable '.STATS'
  Push(pp__i__dot_VEHIC); // '.VEHIC
  _st__ex__gt_(); // <!>
  Push(pp__i_SIMULA); // 'SIMULA
  Push(Read16(Pop())); // @
  Push(pp__i_EXTERN); // 'EXTERN
  _st__ex__gt_(); // <!>
  Push(0xeda6); // probable '.STARDA'
  Push(pp__i__dot_DATE); // '.DATE
  _st__ex__gt_(); // <!>
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
}


// ================================================
// 0xf445: WORD 'UNK_0xf447' codep=0x224c parp=0xf447
// ================================================

void UNK_0xf447() // UNK_0xf447
{
  _ask_TRIG(); // ?TRIG
  Pop(); // DROP
  UNK_0xf3d9(); // UNK_0xf3d9
  UNK_0xf417(); // UNK_0xf417
  SetColor("GREEN");
  Push(pp_LCOLOR); // LCOLOR
  _ex__2(); // !_2
  Push(cc__dash_1); // -1
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
}


// ================================================
// 0xf45d: WORD 'UNK_0xf45f' codep=0x224c parp=0xf45f
// ================================================

void UNK_0xf45f() // UNK_0xf45f
{
  Push(pp__i_TVT); // 'TVT
  Push(Read16(Pop())); // @
  MODULE(); // MODULE
  Push(pp_TIME_dash_PA); // TIME-PA
  _099(); // 099
}


// ================================================
// 0xf46b: WORD 'UNK_0xf46d' codep=0x224c parp=0xf46d
// ================================================

void UNK_0xf46d() // UNK_0xf46d
{
  UNK_0xf45f(); // UNK_0xf45f
  UNK_0xf201(); // UNK_0xf201
  SetColor("BLACK");
  Push(pp_LCOLOR); // LCOLOR
  _ex__2(); // !_2
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf47b: WORD 'UNK_0xf47d' codep=0x224c parp=0xf47d
// ================================================

void UNK_0xf47d() // UNK_0xf47d
{
  UNK_0xf123(); // UNK_0xf123
  SET_dash_SPE(); // SET-SPE
  UNK_0xf383(); // UNK_0xf383
  _dot_STATS(); // .STATS
}


// ================================================
// 0xf487: WORD 'UNK_0xf489' codep=0x224c parp=0xf489
// ================================================

void UNK_0xf489() // UNK_0xf489
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  Push(pp_FTRIG); // FTRIG
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf497: WORD 'UNK_0xf499' codep=0x224c parp=0xf499
// ================================================

void UNK_0xf499() // UNK_0xf499
{
  _ro_XYSCAN(); // (XYSCAN case
  UNK_0xf489(); // UNK_0xf489
  if (Pop() == 0) goto label1;
  UNK_0xf3c9(); // UNK_0xf3c9
  if (Pop() == 0) goto label2;
  UNK_0xf40d(); // UNK_0xf40d
  goto label3;

  label2:
  UNK_0xf47d(); // UNK_0xf47d

  label5:
  XYSCAN(); // XYSCAN
  UNK_0xf3e7(); // UNK_0xf3e7
  UNK_0xf489(); // UNK_0xf489
  UNK_0xf3c9(); // UNK_0xf3c9
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label4;
  UNK_0xf47d(); // UNK_0xf47d
  goto label5;

  label4:
  Pop(); Pop();// 2DROP
  UNK_0xf3c9(); // UNK_0xf3c9
  if (Pop() == 0) goto label3;
  Push2Words("0.");
  UNK_0xf40d(); // UNK_0xf40d
  Pop(); Pop();// 2DROP

  label3:
  goto label6;

  label1:
  Pop(); Pop();// 2DROP

  label6:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0); // 0
  Push(pp_TIME_dash_PA); // TIME-PA
  _099(); // 099
}


// ================================================
// 0xf4e9: WORD 'TELE' codep=0x224c parp=0xf4f2
// ================================================
// entry

void TELE() // TELE
{
  Push(pp__i_KEY_dash_CA); // 'KEY-CA
  Push(Read16(Pop())); // @
  Push(0xf499);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf30d(); // UNK_0xf30d
  goto label2;

  label1:
  CTINIT(); // CTINIT

  UNK_0x3f09("PLEASE DROP OUT OF MOVE MODE");
  _dot_TTY(); // .TTY

  label2:
  Push2Words("NULL");
}


// ================================================
// 0xf52f: WORD 'TV-MOVE' codep=0x224c parp=0xf53b
// ================================================
// entry

void TV_dash_MOVE() // TV-MOVE
{
  Push(0xf46d);
  Push(0xf499);
  Push(0xf447);
  DOTASKS(UNK_0xf447, UNK_0xf499, UNK_0xf46d);
  Push(pp__i_SIMULA); // 'SIMULA
  _at_EXECUTE(); // @EXECUTE
  Push(pp_TIME_dash_PA); // TIME-PA
  ON_2(); // ON_2
}

// 0xf553: db 0x4d 0x4f 0x56 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MOVE-VOC_____ '
  