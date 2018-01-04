// ====== OVERLAY 'BLT-OV' ======
// store offset = 0xefe0
// overlay size   = 0x0580

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xeff6  codep:0x1d29 parp:0xeff6 size:0x000e C-string:'UNK_0xeff6'
//      UNK_0xf006  codep:0x1d29 parp:0xf006 size:0x0013 C-string:'UNK_0xf006'
//      UNK_0xf01b  codep:0x1d29 parp:0xf01b size:0x0029 C-string:'UNK_0xf01b'
//      UNK_0xf046  codep:0x224c parp:0xf046 size:0x0010 C-string:'UNK_0xf046'
//      UNK_0xf058  codep:0x224c parp:0xf058 size:0x000e C-string:'UNK_0xf058'
//      UNK_0xf068  codep:0x1d29 parp:0xf068 size:0x0011 C-string:'UNK_0xf068'
//      UNK_0xf07b  codep:0x224c parp:0xf07b size:0x0094 C-string:'UNK_0xf07b'
//      UNK_0xf111  codep:0x224c parp:0xf111 size:0x0018 C-string:'UNK_0xf111'
//      UNK_0xf12b  codep:0x224c parp:0xf12b size:0x0018 C-string:'UNK_0xf12b'
//      UNK_0xf145  codep:0x224c parp:0xf145 size:0x0032 C-string:'UNK_0xf145'
//      UNK_0xf179  codep:0x224c parp:0xf179 size:0x0010 C-string:'UNK_0xf179'
//            LDAP  codep:0x224c parp:0xf192 size:0x0044 C-string:'LDAP'
//      UNK_0xf1d8  codep:0x224c parp:0xf1d8 size:0x0026 C-string:'UNK_0xf1d8'
//      UNK_0xf200  codep:0x224c parp:0xf200 size:0x000e C-string:'UNK_0xf200'
//      UNK_0xf210  codep:0x224c parp:0xf210 size:0x0010 C-string:'UNK_0xf210'
//      UNK_0xf222  codep:0x224c parp:0xf222 size:0x0036 C-string:'UNK_0xf222'
//      UNK_0xf25a  codep:0x224c parp:0xf25a size:0x000e C-string:'UNK_0xf25a'
//      UNK_0xf26a  codep:0x224c parp:0xf26a size:0x0014 C-string:'UNK_0xf26a'
//      UNK_0xf280  codep:0x224c parp:0xf280 size:0x0088 C-string:'UNK_0xf280'
//      UNK_0xf30a  codep:0x224c parp:0xf30a size:0x0044 C-string:'UNK_0xf30a'
//            SETB  codep:0x224c parp:0xf357 size:0x0036 C-string:'SETB'
//            ESTA  codep:0x2214 parp:0xf396 size:0x000d C-string:'ESTA'
//            VSTA  codep:0x2214 parp:0xf3ac size:0x000d C-string:'VSTA'
//      UNK_0xf3bb  codep:0x224c parp:0xf3bb size:0x005a C-string:'UNK_0xf3bb'
//            LDSY  codep:0x224c parp:0xf41e size:0x003e C-string:'LDSY'
//            @.HY  codep:0x224c parp:0xf465 size:0x005c C-string:'Get_dot_HY'
//            .TPI  codep:0x224c parp:0xf4ca size:0x0036 C-string:'DrawTPI'
//            .API  codep:0x224c parp:0xf509 size:0x0000 C-string:'DrawAPI'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int pp_DTA_1; // DTA_1
extern const unsigned short int pp_SKIPPED; // SKIPPED
extern const unsigned short int pp_CANSKIP; // CANSKIP
extern const unsigned short int pp_BMAP; // BMAP
extern const unsigned short int pp_P_slash_B; // P/B
extern const unsigned short int pp_FONTSEG; // FONTSEG
extern const unsigned short int pp_XBUF_dash_SE; // XBUF-SE
extern const unsigned short int pp_PIC_n_; // PIC#
extern const unsigned short int pp_LSYSEG; // LSYSEG
extern const unsigned short int pp_MSYSEG; // MSYSEG
extern const unsigned short int pp_SSYSEG; // SSYSEG
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp_PIC_h_; // PIC^
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern const unsigned short int pp_PCGA; // PCGA
extern const unsigned short int pp_SRC; // SRC
extern const unsigned short int pp_DST; // DST
extern const unsigned short int pp_SEGME; // SEGME
extern const unsigned short int pp_PLZ; // PLZ
void MAX(); // MAX
void _gt_TIB(); // >TIB
void NAM(); // NAM
void TYP(); // TYP
void RECSIZE(); // RECSIZE
void RELREC(); // RELREC
void DOS_dash_DTA(); // DOS-DTA
void READ_dash_RA(); // READ-RA
void USING(); // USING
void _ro_LDS_rc_(); // (LDS)
void BMOFF(); // BMOFF
void BMSEG(); // BMSEG
void BMWIDE(); // BMWIDE
void BMBYTES(); // BMBYTES
void BMHIGH(); // BMHIGH
void BMPAL(); // BMPAL
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void MOUNTB(); // MOUNTB
void GetINST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void Get_gt_C_plus_S(); // @>C+S
void SAVE_dash_OV(); // SAVE-OV
void IsVGA(); // ?VGA
void IsCGA(); // ?CGA
void DARK(); // DARK
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void DrawRAW(); // .RAW
void V_gt_DISPL(); // V>DISPL
void DOS(); // DOS
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _4_star_(); // 4*
void L_at_(); // L@
void LC_at_(); // LC@
void LC_ex_(); // LC!
void LCMOVE(); // LCMOVE
void GetDS(); // @DS
void _gt_PLANES(); // >PLANES


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xeff6 = 0xeff6; // UNK_0xeff6 size: 14
// {0x0c, 0x0c, 0x08, 0x02, 0x0b, 0x07, 0x04, 0x05, 0x06, 0x03, 0x0a, 0x09, 0x1e, 0x1f}

const unsigned short int pp_UNK_0xf006 = 0xf006; // UNK_0xf006 size: 19
// {0x1a, 0x0c, 0x04, 0x11, 0x08, 0x02, 0x12, 0x10, 0x14, 0x0f, 0x0d, 0x16, 0x17, 0x19, 0x1b, 0x18, 0x13, 0x15, 0x0e}

const unsigned short int pp_UNK_0xf01b = 0xf01b; // UNK_0xf01b size: 41
// {0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x03, 0x00, 0x04, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x00}

const unsigned short int pp_UNK_0xf068 = 0xf068; // UNK_0xf068 size: 17
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x29, 0x92, 0x0c, 0xdb, 0x23, 0x5d, 0x17, 0x20}


const unsigned short int cc_ESTA = 0xf396; // ESTA
const unsigned short int cc_VSTA = 0xf3ac; // VSTA


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
  Func6("FILE-#R");
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
  Push(0);
  Push(pp_DTA_1); // DTA_1
  StoreD(); // D!
  DOS_dash_DTA(); // DOS-DTA
}


// ================================================
// 0xf066: WORD 'UNK_0xf068' codep=0x1d29 parp=0xf068
// ================================================
// 0xf068: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x29 0x92 0x0c 0xdb 0x23 0x5d 0x17 0x20 ':  ALLOT )   #]  '

// ================================================
// 0xf079: WORD 'UNK_0xf07b' codep=0x224c parp=0xf07b params=0 returns=0
// ================================================

void UNK_0xf07b() // UNK_0xf07b
{
  unsigned short int i, imax, j, jmax;
  Push(pp_UNK_0xf068); // UNK_0xf068
  Push(0x000f);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push(pp_UNK_0xf068); // UNK_0xf068
  Push(8);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    DOS(); // DOS
    NAM(); // NAM
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(regsp)); // DUP
    Push(Read16(cc_BL)); // BL
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); // DROP
      imax = i; // LEAVE
    } else
    {
      OVER(); // OVER
      C_ex__2(); // C!_2
      Push(Pop()+1); // 1+
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(0x002e);
  OVER(); // OVER
  C_ex__2(); // C!_2
  Push(Pop()+1); // 1+
  Push(3);
  Push(0);

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    Push(j); // I
    DOS(); // DOS
    TYP(); // TYP
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(regsp)); // DUP
    Push(Read16(cc_BL)); // BL
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); // DROP
      jmax = j; // LEAVE
    } else
    {
      OVER(); // OVER
      C_ex__2(); // C!_2
      Push(Pop()+1); // 1+
    }
    j++;
  } while(j<jmax); // (LOOP)

  Pop(); // DROP
  SAVE_dash_OV(); // SAVE-OV
}

// 0xf0ef: db 0x4c 0x22 0x8d 0x85 0x5d 0x17 0x36 0x00 0xe1 0x72 0xae 0x4a 0xd7 0x39 0x16 0x6d 0x77 0x85 0xa1 0x39 0x16 0x6d 0xaf 0x3b 0x98 0x39 0x16 0x6d 0x4d 0x85 0x90 0x16 'L"  ] 6  r J 9 mw  9 m ; 9 mM   '

// ================================================
// 0xf10f: WORD 'UNK_0xf111' codep=0x224c parp=0xf111
// ================================================

void UNK_0xf111() // UNK_0xf111
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(pp_UNK_0xeff6); // UNK_0xeff6
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    BMPAL(); // BMPAL
    C_ex__2(); // C!_2
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf129: WORD 'UNK_0xf12b' codep=0x224c parp=0xf12b
// ================================================

void UNK_0xf12b() // UNK_0xf12b
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(pp_UNK_0xf006); // UNK_0xf006
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    BMPAL(); // BMPAL
    C_ex__2(); // C!_2
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf143: WORD 'UNK_0xf145' codep=0x224c parp=0xf145
// ================================================

void UNK_0xf145() // UNK_0xf145
{
  unsigned short int a;
  UNK_0xf07b(); // UNK_0xf07b
  _gt_TIB(); // >TIB
  USING(); // USING
  Push(pp_SKIPPED); // SKIPPED
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  RELREC(); // RELREC
  Store_2(); // !_2
  RELREC(); // RELREC
  Push(Pop()+2); // 2+
  _099(); // 099
  RECSIZE(); // RECSIZE
  Store_2(); // !_2
  UNK_0xf058(); // UNK_0xf058
  READ_dash_RA(); // READ-RA
  Pop(); // DROP
  Push(pp_UNK_0xf068); // UNK_0xf068
  Push(0x000f);
  _gt_TIB(); // >TIB
  USING(); // USING
  Push(a); // R>
  Push(pp_SKIPPED); // SKIPPED
  Store_2(); // !_2
}


// ================================================
// 0xf177: WORD 'UNK_0xf179' codep=0x224c parp=0xf179 params=0 returns=1
// ================================================

void UNK_0xf179() // UNK_0xf179
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
  GetINST_dash_S(); // @INST-S
  Push(pp_UNK_0xf01b); // UNK_0xf01b
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
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
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("trpics.vga");
  } else
  {
    SET_STR_AS_PARAM("trpics.ega");
  }
  UNK_0xf145(); // UNK_0xf145
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0);
  Push(pp_PIC_h_); // PIC^
  Push(Read16(Pop())); // @
  Push(0);
  Push(0x0c1c);
  LCMOVE(); // LCMOVE
  UNK_0xf179(); // UNK_0xf179
  UNK_0xf12b(); // UNK_0xf12b
}


// ================================================
// 0xf1d6: WORD 'UNK_0xf1d8' codep=0x224c parp=0xf1d8 params=0 returns=1
// ================================================

void UNK_0xf1d8() // UNK_0xf1d8
{
  unsigned short int a;
  BMWIDE(); // BMWIDE
  Push(Read16(Pop())); // @
  Push(pp_P_slash_B); // P/B
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop()-1); // 1-
  Push(Pop() + Pop()); // +
  Push(a); // R>
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  BMBYTES(); // BMBYTES
  C_ex__2(); // C!_2
  BMHIGH(); // BMHIGH
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() * Pop()); // *
  Push(pp_PLZ); // PLZ
  Store_2(); // !_2
}


// ================================================
// 0xf1fe: WORD 'UNK_0xf200' codep=0x224c parp=0xf200 params=0 returns=0
// ================================================

void UNK_0xf200() // UNK_0xf200
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(3);
  L_at_(); // L@
  BMWIDE(); // BMWIDE
  Store_2(); // !_2
}


// ================================================
// 0xf20e: WORD 'UNK_0xf210' codep=0x224c parp=0xf210 params=0 returns=0
// ================================================

void UNK_0xf210() // UNK_0xf210
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0x000a);
  LC_at_(); // LC@
  BMHIGH(); // BMHIGH
  C_ex__2(); // C!_2
}


// ================================================
// 0xf220: WORD 'UNK_0xf222' codep=0x224c parp=0xf222 params=0 returns=1
// ================================================

void UNK_0xf222() // UNK_0xf222
{
  UNK_0xf200(); // UNK_0xf200
  UNK_0xf210(); // UNK_0xf210
  UNK_0xf1d8(); // UNK_0xf1d8
  Push(pp_IsEGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    Push(0x000d);
    Push(pp_SRC); // SRC
    Store_2(); // !_2
    Push(2);
    Push(Read16(regsp)); // DUP
    Push(pp_DST); // DST
    Store_2(); // !_2
    BMOFF(); // BMOFF
    Store_2(); // !_2
    UNK_0xf046(); // UNK_0xf046
    Push(pp_SEGME); // SEGME
    Store_2(); // !_2
  }
  Push(0);
  Push(pp_BMAP); // BMAP
  Push(0x000c);
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
}


// ================================================
// 0xf258: WORD 'UNK_0xf25a' codep=0x224c parp=0xf25a params=1 returns=1
// ================================================

void UNK_0xf25a() // UNK_0xf25a
{
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(pp_PCGA); // PCGA
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xf268: WORD 'UNK_0xf26a' codep=0x224c parp=0xf26a params=0 returns=2
// ================================================

void UNK_0xf26a() // UNK_0xf26a
{
  BMSEG(); // BMSEG
  Push(Read16(Pop())); // @
  Push(pp_SRC); // SRC
  Push(Read16(Pop())); // @
  LC_at_(); // LC@
  Push(Read16(regsp)); // DUP
  Push(1);
  Push(pp_SRC); // SRC
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xf27e: WORD 'UNK_0xf280' codep=0x224c parp=0xf280
// ================================================

void UNK_0xf280() // UNK_0xf280
{
  unsigned short int i, imax, a, b, c, d;
  BMOFF(); // BMOFF
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(pp_DST); // DST
  Store_2(); // !_2
  Push(pp_SRC); // SRC
  Store_2(); // !_2
  BMBYTES(); // BMBYTES
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  Push(Pop()>>1); // 2/
  BMBYTES(); // BMBYTES
  C_ex__2(); // C!_2
  BMHIGH(); // BMHIGH
  Push(Read16(Pop())); // @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    do
    {
      UNK_0xf26a(); // UNK_0xf26a
      Push(Pop()>>4); // 16/
      UNK_0xf25a(); // UNK_0xf25a
      Push(0x0040);
      Push(Pop() * Pop()); // *
      a = Pop(); // >R
      UNK_0xf25a(); // UNK_0xf25a
      Push(Pop()<<4); // 16*
      b = Pop(); // >R
      Push(Pop()-1); // 1-
      Push(Read16(regsp)); // DUP
      if (Pop() != 0)
      {
        UNK_0xf26a(); // UNK_0xf26a
        Push(Pop()>>4); // 16/
        UNK_0xf25a(); // UNK_0xf25a
        _4_star_(); // 4*
        c = Pop(); // >R
        UNK_0xf25a(); // UNK_0xf25a
      } else
      {
        Push2Words("NULL");
        d = Pop(); // >R
      }
      Push(c); // R>
      Push(Pop() | Pop()); // OR
      Push(b); // R>
      Push(Pop() | Pop()); // OR
      Push(a); // R>
      Push(Pop() | Pop()); // OR
      BMSEG(); // BMSEG
      Push(Read16(Pop())); // @
      Push(pp_DST); // DST
      Push(Read16(Pop())); // @
      LC_ex_(); // LC!
      Push(1);
      Push(pp_DST); // DST
      _plus__ex__2(); // +!_2
      Push(Pop()-1); // 1-
      Push(0);
      MAX(); // MAX
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
      if (Pop() == 0) Push(1); else Push(0); // 0=
    } while(Pop() == 0);
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xf308: WORD 'UNK_0xf30a' codep=0x224c parp=0xf30a
// ================================================

void UNK_0xf30a() // UNK_0xf30a
{
  unsigned short int i, imax, j, jmax;
  BMHIGH(); // BMHIGH
  Push(Read8(Pop())&0xFF); // C@
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(pp_SRC); // SRC
    Push(Read16(Pop())); // @
    Push(pp_DST); // DST
    Push(Read16(Pop())); // @
    BMBYTES(); // BMBYTES
    Push(Read8(Pop())&0xFF); // C@
    Push(Read16(regsp)); // DUP
    Push(0);

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      _gt_PLANES(); // >PLANES
      Push(4);
      Push(pp_SRC); // SRC
      _plus__ex__2(); // +!_2
      Push(1);
      Push(pp_DST); // DST
      _plus__ex__2(); // +!_2
      j++;
    } while(j<jmax); // (LOOP)

    Push(Pop() + Pop()); // +
    Push(pp_DST); // DST
    Store_2(); // !_2
    BMWIDE(); // BMWIDE
    Push(Read16(Pop())); // @
    Push(Pop()>>1); // 2/
    Push(Pop() + Pop()); // +
    Push(pp_SRC); // SRC
    Store_2(); // !_2
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf34e: WORD 'SETB' codep=0x224c parp=0xf357
// ================================================
// entry

void SETB() // SETB
{
  UNK_0xf222(); // UNK_0xf222
  Push(pp_IsEGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xf30a(); // UNK_0xf30a
    UNK_0xf046(); // UNK_0xf046
    Push(2);
  } else
  {
    Push(pp_XBUF_dash_SE); // XBUF-SE
    Push(Read16(Pop())); // @
    Push(0x000d);
  }
  BMOFF(); // BMOFF
  Store_2(); // !_2
  BMSEG(); // BMSEG
  Store_2(); // !_2
  Push2Words("NULL");
  BMWIDE(); // BMWIDE
  Push(Pop()+2); // 2+
  StoreD(); // D!
  IsCGA(); // ?CGA
  if (Pop() == 0) return;
  UNK_0xf280(); // UNK_0xf280
}


// ================================================
// 0xf38d: WORD 'ESTA' codep=0x2214 parp=0xf396
// ================================================
// 0xf396: dw 0xf399
// 0xf398: db 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x65 0x67 0x61 0x00 ' stars.ega '

// ================================================
// 0xf3a3: WORD 'VSTA' codep=0x2214 parp=0xf3ac
// ================================================
// 0xf3ac: dw 0xf3af
// 0xf3ae: db 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x76 0x67 0x61 0x00 ' stars.vga '

// ================================================
// 0xf3b9: WORD 'UNK_0xf3bb' codep=0x224c parp=0xf3bb
// ================================================

void UNK_0xf3bb() // UNK_0xf3bb
{
  unsigned short int a;
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0);
  Push(0x060d);
  LCMOVE(); // LCMOVE
  SETB(); // SETB
  a = Pop(); // >R
  Push(0x0012);
  BMOFF(); // BMOFF
  Store_2(); // !_2
  Push(Read16(a)); // R@
  BMSEG(); // BMSEG
  Store_2(); // !_2
  Push(0);
  BMPAL(); // BMPAL
  Push(Pop()-1); // 1-
  Store_2(); // !_2
  GetDS(); // @DS
  Push(pp_BMAP); // BMAP
  Push(Read16(a)); // R@
  Push(0);
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(pp_IsEGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() != 0)
  {
    UNK_0xf046(); // UNK_0xf046
    Push(2);
  } else
  {
    Push(pp_XBUF_dash_SE); // XBUF-SE
    Push(Read16(Pop())); // @
    Push(0x000d);
  }
  Push(a); // R>
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
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(Read16(cc_VSTA)); // VSTA
  } else
  {
    Push(Read16(cc_ESTA)); // ESTA
  }
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
  Push(Read16(regsp)); // DUP
  Push(0);
  UNK_0xf3bb(); // UNK_0xf3bb
}


// ================================================
// 0xf45c: WORD '@.HY' codep=0x224c parp=0xf465
// ================================================
// entry

void Get_dot_HY() // @.HY
{
  unsigned short int a;
  Push(pp_CANSKIP); // CANSKIP
  ON_2(); // ON_2
  _gt_MAINVI(); // >MAINVI
  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  Push(Read16(regsp)); // DUP
  Push(pp_PIC_n_); // PIC#
  Store_2(); // !_2
  Push(Pop()-1); // 1-
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(0x21cd);
  SWAP(); // SWAP
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("cpics.vga");
  } else
  {
    SET_STR_AS_PARAM("cpics.ega");
  }
  UNK_0xf145(); // UNK_0xf145
  SETB(); // SETB
  Push(a); // R>
  UNK_0xf111(); // UNK_0xf111
  Push(4);
  Push(0x00bf);
  DrawRAW(); // .RAW
  Push(0);
  BMPAL(); // BMPAL
  C_ex__2(); // C!_2
  Push(pp_CANSKIP); // CANSKIP
  _099(); // 099
}


// ================================================
// 0xf4c1: WORD '.TPI' codep=0x224c parp=0xf4ca
// ================================================
// entry

void DrawTPI() // .TPI
{
  Push(pp_CANSKIP); // CANSKIP
  ON_2(); // ON_2
  Push(Read16(regsp)); // DUP
  Push(0x0021);
  Push(Pop() + Pop()); // +
  Push(pp_PIC_n_); // PIC#
  Store_2(); // !_2
  Push(0x0c1c);
  SWAP(); // SWAP
  SET_STR_AS_PARAM("strpics.raw");
  UNK_0xf145(); // UNK_0xf145
  SETB(); // SETB
  Push(4);
  Push(0x00c5);
  DrawRAW(); // .RAW
  Push(pp_CANSKIP); // CANSKIP
  _099(); // 099
}


// ================================================
// 0xf500: WORD '.API' codep=0x224c parp=0xf509
// ================================================
// entry

void DrawAPI() // .API
{
  unsigned short int a;
  Push(pp_UNK_0xf01b); // UNK_0xf01b
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(0x000f);
  Push(Pop() + Pop()); // +
  Push(pp_PIC_n_); // PIC#
  Store_2(); // !_2
  a = Pop(); // >R
  Push(pp_PIC_h_); // PIC^
  Push(Read16(Pop())); // @
  Push(0);
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0);
  Push(0x0c1c);
  LCMOVE(); // LCMOVE
  SETB(); // SETB
  Push(a); // R>
  UNK_0xf12b(); // UNK_0xf12b
  Push(4);
  Push(0x00c5);
  DrawRAW(); // .RAW
  Push(0);
  BMPAL(); // BMPAL
  C_ex__2(); // C!_2
}

// 0xf545: db 0x42 0x4c 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BLT-VOC____________________ '

