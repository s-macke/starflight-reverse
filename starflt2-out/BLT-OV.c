// ====== OVERLAY 'BLT-OV' ======
// store offset = 0xefe0
// overlay size   = 0x0580

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xb0eb C-string:'UNK_0x3f09'
// 1870:      UNK_0xeff6  codep:0x1d29 parp:0xeff6 size:0x000e C-string:'UNK_0xeff6'
// 1871:      UNK_0xf006  codep:0x1d29 parp:0xf006 size:0x0013 C-string:'UNK_0xf006'
// 1872:      UNK_0xf01b  codep:0x1d29 parp:0xf01b size:0x0029 C-string:'UNK_0xf01b'
// 1873:      UNK_0xf046  codep:0x224c parp:0xf046 size:0x0010 C-string:'UNK_0xf046'
// 1874:      UNK_0xf058  codep:0x224c parp:0xf058 size:0x000e C-string:'UNK_0xf058'
// 1875:      UNK_0xf068  codep:0x1d29 parp:0xf068 size:0x0011 C-string:'UNK_0xf068'
// 1876:      UNK_0xf07b  codep:0x224c parp:0xf07b size:0x0094 C-string:'UNK_0xf07b'
// 1877:      UNK_0xf111  codep:0x224c parp:0xf111 size:0x0018 C-string:'UNK_0xf111'
// 1878:      UNK_0xf12b  codep:0x224c parp:0xf12b size:0x0018 C-string:'UNK_0xf12b'
// 1879:      UNK_0xf145  codep:0x224c parp:0xf145 size:0x0032 C-string:'UNK_0xf145'
// 1880:      UNK_0xf179  codep:0x224c parp:0xf179 size:0x0010 C-string:'UNK_0xf179'
// 1881:            LDAP  codep:0x224c parp:0xf192 size:0x0044 C-string:'LDAP'
// 1882:      UNK_0xf1d8  codep:0x224c parp:0xf1d8 size:0x0026 C-string:'UNK_0xf1d8'
// 1883:      UNK_0xf200  codep:0x224c parp:0xf200 size:0x000e C-string:'UNK_0xf200'
// 1884:      UNK_0xf210  codep:0x224c parp:0xf210 size:0x0010 C-string:'UNK_0xf210'
// 1885:      UNK_0xf222  codep:0x224c parp:0xf222 size:0x0036 C-string:'UNK_0xf222'
// 1886:      UNK_0xf25a  codep:0x224c parp:0xf25a size:0x000e C-string:'UNK_0xf25a'
// 1887:      UNK_0xf26a  codep:0x224c parp:0xf26a size:0x0014 C-string:'UNK_0xf26a'
// 1888:      UNK_0xf280  codep:0x224c parp:0xf280 size:0x0088 C-string:'UNK_0xf280'
// 1889:      UNK_0xf30a  codep:0x224c parp:0xf30a size:0x0044 C-string:'UNK_0xf30a'
// 1890:            SETB  codep:0x224c parp:0xf357 size:0x0036 C-string:'SETB'
// 1891:            ESTA  codep:0x2214 parp:0xf396 size:0x000d C-string:'ESTA'
// 1892:            VSTA  codep:0x2214 parp:0xf3ac size:0x000d C-string:'VSTA'
// 1893:      UNK_0xf3bb  codep:0x224c parp:0xf3bb size:0x005a C-string:'UNK_0xf3bb'
// 1894:            LDSY  codep:0x224c parp:0xf41e size:0x003e C-string:'LDSY'
// 1895:            @.HY  codep:0x224c parp:0xf465 size:0x005c C-string:'_at__dot_HY'
// 1896:            .TPI  codep:0x224c parp:0xf4ca size:0x0036 C-string:'_dot_TPI'
// 1897:            .API  codep:0x224c parp:0xf509 size:0x0000 C-string:'_dot_API'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xeff6[14] = {0x0c, 0x0c, 0x08, 0x02, 0x0b, 0x07, 0x04, 0x05, 0x06, 0x03, 0x0a, 0x09, 0x1e, 0x1f}; // UNK_0xeff6
unsigned char UNK_0xf006[19] = {0x1a, 0x0c, 0x04, 0x11, 0x08, 0x02, 0x12, 0x10, 0x14, 0x0f, 0x0d, 0x16, 0x17, 0x19, 0x1b, 0x18, 0x13, 0x15, 0x0e}; // UNK_0xf006
unsigned char UNK_0xf01b[41] = {0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x03, 0x00, 0x04, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x00}; // UNK_0xf01b
unsigned char UNK_0xf068[17] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x29, 0x92, 0x0c, 0xdb, 0x23, 0x5d, 0x17, 0x20}; // UNK_0xf068

const unsigned short int cc_ESTA = 0xf399; // ESTA
const unsigned short int cc_VSTA = 0xf3af; // VSTA


// 0xeff2: db 0x57 0x00 'W '

// ================================================
// 0xeff4: WORD 'UNK_0xeff6' codep=0x1d29 parp=0xeff6
// ================================================
// 0xeff6: db 0x0c 0x0c 0x08 0x02 0x0b 0x07 0x04 0x05 0x06 0x03 0x0a 0x09 0x1e 0x1f '              '

// ================================================
// 0xf004: WORD 'UNK_0xf006' codep=0x1d29 parp=0xf006
// ================================================
// 0xf006: db 0x1a 0x0c 0x04 0x11 0x08 0x02 0x12 0x10 0x14 0x0f 0x0d 0x16 0x17 0x19 0x1b 0x18 0x13 0x15 0x0e '                   '

// ================================================
// 0xf019: WORD 'UNK_0xf01b' codep=0x1d29 parp=0xf01b
// ================================================
// 0xf01b: db 0x00 0x00 0x01 0x02 0x02 0x02 0x03 0x00 0x04 0x05 0x06 0x06 0x06 0x06 0x06 0x06 0x06 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x07 0x08 0x09 0x0a 0x0b 0x0c 0x0d 0x0e 0x0f 0x10 0x11 0x12 0x00 '                                         '

// ================================================
// 0xf044: WORD 'UNK_0xf046' codep=0x224c parp=0xf046
// ================================================

void UNK_0xf046() // UNK_0xf046
{
  Push(pp_FONTSEG); // FONTSEG
  Push(Read16(Pop())); // @
  Push(0x008f);
  FILE_dash__n_R(); // FILE-#R
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf056: WORD 'UNK_0xf058' codep=0x224c parp=0xf058
// ================================================

void UNK_0xf058() // UNK_0xf058
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp_DTA); // DTA
  D_ex_(); // D!
  DOS_dash_DTA(); // DOS-DTA
}


// ================================================
// 0xf066: WORD 'UNK_0xf068' codep=0x1d29 parp=0xf068
// ================================================
// 0xf068: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x29 0x92 0x0c 0xdb 0x23 0x5d 0x17 0x20 ':  ALLOT )   #]  '

// ================================================
// 0xf079: WORD 'UNK_0xf07b' codep=0x224c parp=0xf07b
// ================================================

void UNK_0xf07b() // UNK_0xf07b
{
  Push(pp_UNK_0xf068); // UNK_0xf068
  Push(0x000f);
  Push(cc_BL); // BL
  FILL(); // FILL
  Push(pp_UNK_0xf068); // UNK_0xf068
  Push(cc__8); // 8
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  DOS(); // DOS
  NAM(); // NAM
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  DUP(); // DUP
  Push(cc_BL); // BL
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  LEAVE(); // LEAVE
  goto label2;

  label1:
  OVER(); // OVER
  C_ex_(); // C!
  Push(Pop()+1); // 1+

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Push(0x002e);
  OVER(); // OVER
  C_ex_(); // C!
  Push(Pop()+1); // 1+
  Push(cc__3); // 3
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  DOS(); // DOS
  TYP(); // TYP
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  DUP(); // DUP
  Push(cc_BL); // BL
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  LEAVE(); // LEAVE
  goto label4;

  label3:
  OVER(); // OVER
  C_ex_(); // C!
  Push(Pop()+1); // 1+

  label4:
  j++;
  } while(j<jmax); // (LOOP) 0xffdc

  Pop(); // DROP
  SAVE_dash_OV(); // SAVE-OV
}

// 0xf0ef: db 0x4c 0x22 0x8d 0x85 0x5d 0x17 0x36 0x00 0xe1 0x72 0xae 0x4a 0xd7 0x39 0x16 0x6d 0x77 0x85 0xa1 0x39 0x16 0x6d 0xaf 0x3b 0x98 0x39 0x16 0x6d 0x4d 0x85 0x90 0x16 'L"  ] 6  r J 9 mw  9 m ; 9 mM   '

// ================================================
// 0xf10f: WORD 'UNK_0xf111' codep=0x224c parp=0xf111
// ================================================

void UNK_0xf111() // UNK_0xf111
{
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xeff6); // UNK_0xeff6
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  BMPAL(); // BMPAL
  C_ex_(); // C!
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf129: WORD 'UNK_0xf12b' codep=0x224c parp=0xf12b
// ================================================

void UNK_0xf12b() // UNK_0xf12b
{
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xf006); // UNK_0xf006
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  BMPAL(); // BMPAL
  C_ex_(); // C!
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf143: WORD 'UNK_0xf145' codep=0x224c parp=0xf145
// ================================================

void UNK_0xf145() // UNK_0xf145
{
  UNK_0xf07b(); // UNK_0xf07b
  _gt_TIB(); // >TIB
  USING(); // USING
  Push(pp_SKIPPED); // SKIPPED
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  RELREC(); // RELREC
  _ex_(); // !
  RELREC(); // RELREC
  Push(Pop()+2); // 2+
  _099(); // 099
  RECSIZE(); // RECSIZE
  _ex_(); // !
  UNK_0xf058(); // UNK_0xf058
  READ_dash_RA(); // READ-RA
  Pop(); // DROP
  Push(pp_UNK_0xf068); // UNK_0xf068
  Push(0x000f);
  _gt_TIB(); // >TIB
  USING(); // USING
  R_gt_(); // R>
  Push(pp_SKIPPED); // SKIPPED
  _ex_(); // !
}


// ================================================
// 0xf177: WORD 'UNK_0xf179' codep=0x224c parp=0xf179
// ================================================

void UNK_0xf179() // UNK_0xf179
{
  Push(pp__ro_TRADER); // (TRADER
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  Push(pp_UNK_0xf01b); // UNK_0xf01b
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf189: WORD 'LDAP' codep=0x224c parp=0xf192
// ================================================
// entry

void LDAP() // LDAP
{
  Push(0x0c1c);
  UNK_0xf179(); // UNK_0xf179
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;

  UNK_0x3f09("trpics.vga");
  goto label2;

  label1:

  UNK_0x3f09("trpics.ega");

  label2:
  UNK_0xf145(); // UNK_0xf145
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp_PIC_h_); // PIC^
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x0c1c);
  LCMOVE(); // LCMOVE
  UNK_0xf179(); // UNK_0xf179
  UNK_0xf12b(); // UNK_0xf12b
}


// ================================================
// 0xf1d6: WORD 'UNK_0xf1d8' codep=0x224c parp=0xf1d8
// ================================================

void UNK_0xf1d8() // UNK_0xf1d8
{
  BMWIDE(); // BMWIDE
  Push(Read16(Pop())); // @
  Push(pp_P_slash_B); // P/B
  Push(Read16(Pop())); // @
  DUP(); // DUP
  _gt_R(); // >R
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  _slash_(); // /
  DUP(); // DUP
  BMBYTES(); // BMBYTES
  C_ex_(); // C!
  BMHIGH(); // BMHIGH
  C_at_(); // C@
  Push(Pop() * Pop()); // *
  Push(pp_PLZ); // PLZ
  _ex_(); // !
}


// ================================================
// 0xf1fe: WORD 'UNK_0xf200' codep=0x224c parp=0xf200
// ================================================

void UNK_0xf200() // UNK_0xf200
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  L_at_(); // L@
  BMWIDE(); // BMWIDE
  _ex_(); // !
}


// ================================================
// 0xf20e: WORD 'UNK_0xf210' codep=0x224c parp=0xf210
// ================================================

void UNK_0xf210() // UNK_0xf210
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0x000a);
  LC_at_(); // LC@
  BMHIGH(); // BMHIGH
  C_ex_(); // C!
}


// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x224c parp=0xf222
// ================================================

void UNK_0xf222() // UNK_0xf222
{
  UNK_0xf200(); // UNK_0xf200
  UNK_0xf210(); // UNK_0xf210
  UNK_0xf1d8(); // UNK_0xf1d8
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0x000d);
  Push(pp_SRC); // SRC
  _ex_(); // !
  Push(2); // 2
  DUP(); // DUP
  Push(pp_DST); // DST
  _ex_(); // !
  BMOFF(); // BMOFF
  _ex_(); // !
  UNK_0xf046(); // UNK_0xf046
  Push(pp_SEGME); // SEGME
  _ex_(); // !

  label1:
  Push(0); // 0
  Push(pp_BMAP); // BMAP
  Push(0x000c);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
}


// ================================================
// 0xf258: WORD 'UNK_0xf25a' codep=0x224c parp=0xf25a
// ================================================

void UNK_0xf25a() // UNK_0xf25a
{
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(pp_PCGA); // PCGA
  Push(Pop() + Pop()); // +
  C_at_(); // C@
}


// ================================================
// 0xf268: WORD 'UNK_0xf26a' codep=0x224c parp=0xf26a
// ================================================

void UNK_0xf26a() // UNK_0xf26a
{
  BMSEG(); // BMSEG
  Push(Read16(Pop())); // @
  Push(pp_SRC); // SRC
  Push(Read16(Pop())); // @
  LC_at_(); // LC@
  DUP(); // DUP
  Push(1); // 1
  Push(pp_SRC); // SRC
  _plus__ex_(); // +!
}


// ================================================
// 0xf27e: WORD 'UNK_0xf280' codep=0x224c parp=0xf280
// ================================================

void UNK_0xf280() // UNK_0xf280
{
  BMOFF(); // BMOFF
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(pp_DST); // DST
  _ex_(); // !
  Push(pp_SRC); // SRC
  _ex_(); // !
  BMBYTES(); // BMBYTES
  C_at_(); // C@
  DUP(); // DUP
  Push(Pop()+1); // 1+
  Push(Pop()>>1); // 2/
  BMBYTES(); // BMBYTES
  C_ex_(); // C!
  BMHIGH(); // BMHIGH
  Push(Read16(Pop())); // @
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  DUP(); // DUP

  label3:
  UNK_0xf26a(); // UNK_0xf26a
  Push(Pop()>>4); // 16/
  UNK_0xf25a(); // UNK_0xf25a
  Push(0x0040);
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  UNK_0xf25a(); // UNK_0xf25a
  Push(Pop()<<4); // 16*
  _gt_R(); // >R
  Push(Pop()-1); // 1-
  DUP(); // DUP
  if (Pop() == 0) goto label1;
  UNK_0xf26a(); // UNK_0xf26a
  Push(Pop()>>4); // 16/
  UNK_0xf25a(); // UNK_0xf25a
  _4_star_(); // 4*
  _gt_R(); // >R
  UNK_0xf25a(); // UNK_0xf25a
  goto label2;

  label1:
  NULL(); // NULL
  _gt_R(); // >R

  label2:
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  R_gt_(); // R>
  Push(Pop() | Pop()); // OR
  BMSEG(); // BMSEG
  Push(Read16(Pop())); // @
  Push(pp_DST); // DST
  Push(Read16(Pop())); // @
  LC_ex_(); // LC!
  Push(1); // 1
  Push(pp_DST); // DST
  _plus__ex_(); // +!
  Push(Pop()-1); // 1-
  Push(0); // 0
  MAX(); // MAX
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  i++;
  } while(i<imax); // (LOOP) 0xffa2

  Pop(); // DROP
}


// ================================================
// 0xf308: WORD 'UNK_0xf30a' codep=0x224c parp=0xf30a
// ================================================

void UNK_0xf30a() // UNK_0xf30a
{
  BMHIGH(); // BMHIGH
  C_at_(); // C@
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_SRC); // SRC
  Push(Read16(Pop())); // @
  Push(pp_DST); // DST
  Push(Read16(Pop())); // @
  BMBYTES(); // BMBYTES
  C_at_(); // C@
  DUP(); // DUP
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  _gt_PLANES(); // >PLANES
  Push(cc__4); // 4
  Push(pp_SRC); // SRC
  _plus__ex_(); // +!
  Push(1); // 1
  Push(pp_DST); // DST
  _plus__ex_(); // +!
  j++;
  } while(j<jmax); // (LOOP) 0xfff0

  Push(Pop() + Pop()); // +
  Push(pp_DST); // DST
  _ex_(); // !
  BMWIDE(); // BMWIDE
  Push(Read16(Pop())); // @
  Push(Pop()>>1); // 2/
  Push(Pop() + Pop()); // +
  Push(pp_SRC); // SRC
  _ex_(); // !
  i++;
  } while(i<imax); // (LOOP) 0xffc8

}


// ================================================
// 0xf34e: WORD 'SETB' codep=0x224c parp=0xf357
// ================================================
// entry

void SETB() // SETB
{
  UNK_0xf222(); // UNK_0xf222
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf30a(); // UNK_0xf30a
  UNK_0xf046(); // UNK_0xf046
  Push(2); // 2
  goto label2;

  label1:
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0x000d);

  label2:
  BMOFF(); // BMOFF
  _ex_(); // !
  BMSEG(); // BMSEG
  _ex_(); // !
  NULL(); // NULL
  BMWIDE(); // BMWIDE
  Push(Pop()+2); // 2+
  D_ex_(); // D!
  _ask_CGA(); // ?CGA
  if (Pop() == 0) return;
  UNK_0xf280(); // UNK_0xf280
}


// ================================================
// 0xf38d: WORD 'ESTA' codep=0x2214 parp=0xf396
// ================================================
// 0xf396: db 0x99 0xf3 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x65 0x67 0x61 0x00 '   stars.ega '

// ================================================
// 0xf3a3: WORD 'VSTA' codep=0x2214 parp=0xf3ac
// ================================================
// 0xf3ac: db 0xaf 0xf3 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x76 0x67 0x61 0x00 '   stars.vga '

// ================================================
// 0xf3b9: WORD 'UNK_0xf3bb' codep=0x224c parp=0xf3bb
// ================================================

void UNK_0xf3bb() // UNK_0xf3bb
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x060d);
  LCMOVE(); // LCMOVE
  SETB(); // SETB
  _gt_R(); // >R
  Push(0x0012);
  BMOFF(); // BMOFF
  _ex_(); // !
  R_at_(); // R@
  BMSEG(); // BMSEG
  _ex_(); // !
  Push(0); // 0
  BMPAL(); // BMPAL
  Push(Pop()-1); // 1-
  _ex_(); // !
  _at_DS(); // @DS
  Push(pp_BMAP); // BMAP
  R_at_(); // R@
  Push(0); // 0
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf046(); // UNK_0xf046
  Push(2); // 2
  goto label2;

  label1:
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0x000d);

  label2:
  R_gt_(); // R>
  Push(0x0012);
  Push(0x078a);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xf415: WORD 'LDSY' codep=0x224c parp=0xf41e
// ================================================
// entry

void LDSY() // LDSY
{
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;
  Push(cc_VSTA); // VSTA
  goto label2;

  label1:
  Push(cc_ESTA); // ESTA

  label2:
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
  _ro_LDS_rc_(); // (LDS)
  MOUNTB(); // MOUNTB
  Push(pp_LSYSEG); // LSYSEG
  Push(Read16(Pop())); // @
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
  Push(0x04e2);
  UNK_0xf3bb(); // UNK_0xf3bb
  Push(pp_MSYSEG); // MSYSEG
  Push(Read16(Pop())); // @
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
  Push(0x018d);
  UNK_0xf3bb(); // UNK_0xf3bb
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0); // 0
  UNK_0xf3bb(); // UNK_0xf3bb
}


// ================================================
// 0xf45c: WORD '@.HY' codep=0x224c parp=0xf465
// ================================================
// entry

void _at__dot_HY() // @.HY
{
  Push(pp_CANSKIP); // CANSKIP
  ON(); // ON
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  DUP(); // DUP
  Push(pp_PIC_n_); // PIC#
  _ex_(); // !
  Push(Pop()-1); // 1-
  DUP(); // DUP
  _gt_R(); // >R
  Push(0x21cd);
  SWAP(); // SWAP
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;

  UNK_0x3f09("cpics.vga");
  goto label2;

  label1:

  UNK_0x3f09("cpics.ega");

  label2:
  UNK_0xf145(); // UNK_0xf145
  SETB(); // SETB
  R_gt_(); // R>
  UNK_0xf111(); // UNK_0xf111
  Push(cc__4); // 4
  Push(0x00bf);
  _dot_RAW(); // .RAW
  Push(0); // 0
  BMPAL(); // BMPAL
  C_ex_(); // C!
  Push(pp_CANSKIP); // CANSKIP
  _099(); // 099
}


// ================================================
// 0xf4c1: WORD '.TPI' codep=0x224c parp=0xf4ca
// ================================================
// entry

void _dot_TPI() // .TPI
{
  Push(pp_CANSKIP); // CANSKIP
  ON(); // ON
  DUP(); // DUP
  Push(0x0021);
  Push(Pop() + Pop()); // +
  Push(pp_PIC_n_); // PIC#
  _ex_(); // !
  Push(0x0c1c);
  SWAP(); // SWAP

  UNK_0x3f09("strpics.raw");
  UNK_0xf145(); // UNK_0xf145
  SETB(); // SETB
  Push(cc__4); // 4
  Push(0x00c5);
  _dot_RAW(); // .RAW
  Push(pp_CANSKIP); // CANSKIP
  _099(); // 099
}


// ================================================
// 0xf500: WORD '.API' codep=0x224c parp=0xf509
// ================================================
// entry

void _dot_API() // .API
{
  Push(pp_UNK_0xf01b); // UNK_0xf01b
  Push(Pop() + Pop()); // +
  C_at_(); // C@
  DUP(); // DUP
  Push(0x000f);
  Push(Pop() + Pop()); // +
  Push(pp_PIC_n_); // PIC#
  _ex_(); // !
  _gt_R(); // >R
  Push(pp_PIC_h_); // PIC^
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x0c1c);
  LCMOVE(); // LCMOVE
  SETB(); // SETB
  R_gt_(); // R>
  UNK_0xf12b(); // UNK_0xf12b
  Push(cc__4); // 4
  Push(0x00c5);
  _dot_RAW(); // .RAW
  Push(0); // 0
  BMPAL(); // BMPAL
  C_ex_(); // C!
}

// 0xf545: db 0x42 0x4c 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BLT-VOC____________________ '
  