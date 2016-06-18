// ====== OVERLAY 'EYE-OV' ======
// store offset = 0xebb0
// overlay size   = 0x09b0

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xacbb C-string:'UNK_0x3f09'
// 1870:      UNK_0xebc6  codep:0x7420 parp:0xebc6 size:0x0003 C-string:'UNK_0xebc6'
// 1871:      UNK_0xebcb  codep:0x7420 parp:0xebcb size:0x0003 C-string:'UNK_0xebcb'
// 1872:      UNK_0xebd0  codep:0x7420 parp:0xebd0 size:0x0003 C-string:'UNK_0xebd0'
// 1873:      UNK_0xebd5  codep:0x224c parp:0xebd5 size:0x0008 C-string:'UNK_0xebd5'
// 1874:      UNK_0xebdf  codep:0x224c parp:0xebdf size:0x0006 C-string:'UNK_0xebdf'
// 1875:      UNK_0xebe7  codep:0x224c parp:0xebe7 size:0x0014 C-string:'UNK_0xebe7'
// 1876:      UNK_0xebfd  codep:0x224c parp:0xebfd size:0x004c C-string:'UNK_0xebfd'
// 1877:      UNK_0xec4b  codep:0x1d29 parp:0xec4b size:0x0004 C-string:'UNK_0xec4b'
// 1878:      UNK_0xec51  codep:0x1d29 parp:0xec51 size:0x0002 C-string:'UNK_0xec51'
// 1879:      UNK_0xec55  codep:0x1d29 parp:0xec55 size:0x0002 C-string:'UNK_0xec55'
// 1880:      UNK_0xec59  codep:0x1d29 parp:0xec59 size:0x0002 C-string:'UNK_0xec59'
// 1881:      UNK_0xec5d  codep:0x1d29 parp:0xec5d size:0x0002 C-string:'UNK_0xec5d'
// 1882:      UNK_0xec61  codep:0x1d29 parp:0xec61 size:0x0002 C-string:'UNK_0xec61'
// 1883:      UNK_0xec65  codep:0x224c parp:0xec65 size:0x0016 C-string:'UNK_0xec65'
// 1884:      UNK_0xec7d  codep:0x1d29 parp:0xec7d size:0x0004 C-string:'UNK_0xec7d'
// 1885:      UNK_0xec83  codep:0x224c parp:0xec83 size:0x0014 C-string:'UNK_0xec83'
// 1886:      UNK_0xec99  codep:0x224c parp:0xec99 size:0x0006 C-string:'UNK_0xec99'
// 1887:      UNK_0xeca1  codep:0x224c parp:0xeca1 size:0x000c C-string:'UNK_0xeca1'
// 1888:      UNK_0xecaf  codep:0x224c parp:0xecaf size:0x000c C-string:'UNK_0xecaf'
// 1889:      UNK_0xecbd  codep:0x224c parp:0xecbd size:0x0036 C-string:'UNK_0xecbd'
// 1890:      UNK_0xecf5  codep:0x224c parp:0xecf5 size:0x0066 C-string:'UNK_0xecf5'
// 1891:      UNK_0xed5d  codep:0x1d29 parp:0xed5d size:0x003c C-string:'UNK_0xed5d'
// 1892:      UNK_0xed9b  codep:0x1d29 parp:0xed9b size:0x0002 C-string:'UNK_0xed9b'
// 1893:      UNK_0xed9f  codep:0x1d29 parp:0xed9f size:0x0002 C-string:'UNK_0xed9f'
// 1894:      UNK_0xeda3  codep:0x224c parp:0xeda3 size:0x0010 C-string:'UNK_0xeda3'
// 1895:      UNK_0xedb5  codep:0x224c parp:0xedb5 size:0x006e C-string:'UNK_0xedb5'
// 1896:      UNK_0xee25  codep:0x224c parp:0xee25 size:0x0018 C-string:'UNK_0xee25'
// 1897:      UNK_0xee3f  codep:0x224c parp:0xee3f size:0x007c C-string:'UNK_0xee3f'
// 1898:      UNK_0xeebd  codep:0x224c parp:0xeebd size:0x0024 C-string:'UNK_0xeebd'
// 1899:      UNK_0xeee3  codep:0x224c parp:0xeee3 size:0x001a C-string:'UNK_0xeee3'
// 1900:      UNK_0xeeff  codep:0x224c parp:0xeeff size:0x000c C-string:'UNK_0xeeff'
// 1901:      UNK_0xef0d  codep:0x224c parp:0xef0d size:0x0006 C-string:'UNK_0xef0d'
// 1902:      UNK_0xef15  codep:0x224c parp:0xef15 size:0x0006 C-string:'UNK_0xef15'
// 1903:      UNK_0xef1d  codep:0x224c parp:0xef1d size:0x0006 C-string:'UNK_0xef1d'
// 1904:      UNK_0xef25  codep:0x224c parp:0xef25 size:0x006c C-string:'UNK_0xef25'
// 1905:      UNK_0xef93  codep:0x224c parp:0xef93 size:0x003f C-string:'UNK_0xef93'
// 1906:      UNK_0xefd4  codep:0x224c parp:0xefd4 size:0x00a2 C-string:'UNK_0xefd4'
// 1907:      UNK_0xf078  codep:0x224c parp:0xf078 size:0x001e C-string:'UNK_0xf078'
// 1908:      UNK_0xf098  codep:0x224c parp:0xf098 size:0x0018 C-string:'UNK_0xf098'
// 1909:      UNK_0xf0b2  codep:0x224c parp:0xf0b2 size:0x0016 C-string:'UNK_0xf0b2'
// 1910:      UNK_0xf0ca  codep:0x224c parp:0xf0ca size:0x0032 C-string:'UNK_0xf0ca'
// 1911:      UNK_0xf0fe  codep:0x224c parp:0xf0fe size:0x0046 C-string:'UNK_0xf0fe'
// 1912:      UNK_0xf146  codep:0x224c parp:0xf146 size:0x001c C-string:'UNK_0xf146'
// 1913:      UNK_0xf164  codep:0x224c parp:0xf164 size:0x000e C-string:'UNK_0xf164'
// 1914:      UNK_0xf174  codep:0x2214 parp:0xf174 size:0x0002 C-string:'UNK_0xf174'
// 1915:      UNK_0xf178  codep:0x2214 parp:0xf178 size:0x0002 C-string:'UNK_0xf178'
// 1916:      UNK_0xf17c  codep:0x2214 parp:0xf17c size:0x0002 C-string:'UNK_0xf17c'
// 1917:      UNK_0xf180  codep:0x2214 parp:0xf180 size:0x0002 C-string:'UNK_0xf180'
// 1918:      UNK_0xf184  codep:0x224c parp:0xf184 size:0x0020 C-string:'UNK_0xf184'
// 1919:      UNK_0xf1a6  codep:0x224c parp:0xf1a6 size:0x000e C-string:'UNK_0xf1a6'
// 1920:      UNK_0xf1b6  codep:0x224c parp:0xf1b6 size:0x00ad C-string:'UNK_0xf1b6'
// 1921:      UNK_0xf265  codep:0x224c parp:0xf265 size:0x0030 C-string:'UNK_0xf265'
// 1922:      UNK_0xf297  codep:0x224c parp:0xf297 size:0x0014 C-string:'UNK_0xf297'
// 1923:      UNK_0xf2ad  codep:0x224c parp:0xf2ad size:0x0089 C-string:'UNK_0xf2ad'
// 1924:      UNK_0xf338  codep:0x224c parp:0xf338 size:0x00bf C-string:'UNK_0xf338'
// 1925:      UNK_0xf3f9  codep:0x224c parp:0xf3f9 size:0x0010 C-string:'UNK_0xf3f9'
// 1926:      UNK_0xf40b  codep:0x224c parp:0xf40b size:0x0024 C-string:'UNK_0xf40b'
// 1927:      UNK_0xf431  codep:0x224c parp:0xf431 size:0x000e C-string:'UNK_0xf431'
// 1928:      UNK_0xf441  codep:0x224c parp:0xf441 size:0x001c C-string:'UNK_0xf441'
// 1929:      UNK_0xf45f  codep:0x224c parp:0xf45f size:0x0044 C-string:'UNK_0xf45f'
// 1930:      UNK_0xf4a5  codep:0x224c parp:0xf4a5 size:0x0056 C-string:'UNK_0xf4a5'
// 1931:          DO-EYE  codep:0x224c parp:0xf506 size:0x0000 C-string:'DO_dash_EYE'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xec4b[4] = {0x56, 0x3a, 0x20, 0xae}; // UNK_0xec4b
unsigned char UNK_0xec51[2] = {0x3a, 0x20}; // UNK_0xec51
unsigned char UNK_0xec55[2] = {0x3a, 0x20}; // UNK_0xec55
unsigned char UNK_0xec59[2] = {0x3a, 0x20}; // UNK_0xec59
unsigned char UNK_0xec5d[2] = {0x3a, 0x20}; // UNK_0xec5d
unsigned char UNK_0xec61[2] = {0x3a, 0x20}; // UNK_0xec61
unsigned char UNK_0xec7d[4] = {0x56, 0x3a, 0x20, 0x66}; // UNK_0xec7d
unsigned char UNK_0xed5d[60] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x53, 0x48, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x20, 0x45, 0x59, 0x45, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x56, 0x52, 0x41, 0x28, 0x72, 0x66, 0x67, 0x31, 0x34, 0x61, 0x70, 0x72, 0x38, 0x38, 0x29}; // UNK_0xed5d
unsigned char UNK_0xed9b[2] = {0x3a, 0x20}; // UNK_0xed9b
unsigned char UNK_0xed9f[2] = {0x3a, 0x20}; // UNK_0xed9f

const unsigned short int cc_UNK_0xf174 = 0x0040; // UNK_0xf174
const unsigned short int cc_UNK_0xf178 = 0x003e; // UNK_0xf178
const unsigned short int cc_UNK_0xf17c = 0x0009; // UNK_0xf17c
const unsigned short int cc_UNK_0xf180 = 0x0008; // UNK_0xf180


// 0xebc2: db 0x9b 0x00 '  '

// ================================================
// 0xebc4: WORD 'UNK_0xebc6' codep=0x7420 parp=0xebc6
// ================================================
// 0xebc6: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xebc9: WORD 'UNK_0xebcb' codep=0x7420 parp=0xebcb
// ================================================
// 0xebcb: db 0x14 0x1a 0x01 '   '

// ================================================
// 0xebce: WORD 'UNK_0xebd0' codep=0x7420 parp=0xebd0
// ================================================
// 0xebd0: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xebd3: WORD 'UNK_0xebd5' codep=0x224c parp=0xebd5
// ================================================

void UNK_0xebd5() // UNK_0xebd5
{
  C_at_(); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xebdd: WORD 'UNK_0xebdf' codep=0x224c parp=0xebdf
// ================================================

void UNK_0xebdf() // UNK_0xebdf
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xebe5: WORD 'UNK_0xebe7' codep=0x224c parp=0xebe7
// ================================================

void UNK_0xebe7() // UNK_0xebe7
{
  Push(0x0036);
  Push(0xb76b);
  MODULE(); // MODULE
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xebfb: WORD 'UNK_0xebfd' codep=0x224c parp=0xebfd
// ================================================

void UNK_0xebfd() // UNK_0xebfd
{
  CTINIT(); // CTINIT

  UNK_0x3f09("PRESENCE OF UHL WEAPON IS PREVENTING");
  _dot_TTY(); // .TTY

  UNK_0x3f09("OUR ENTRY INTO THE ANOMALY");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xec49: WORD 'UNK_0xec4b' codep=0x1d29 parp=0xec4b
// ================================================
// 0xec4b: db 0x56 0x3a 0x20 0xae 'V:  '

// ================================================
// 0xec4f: WORD 'UNK_0xec51' codep=0x1d29 parp=0xec51
// ================================================
// 0xec51: db 0x3a 0x20 ': '

// ================================================
// 0xec53: WORD 'UNK_0xec55' codep=0x1d29 parp=0xec55
// ================================================
// 0xec55: db 0x3a 0x20 ': '

// ================================================
// 0xec57: WORD 'UNK_0xec59' codep=0x1d29 parp=0xec59
// ================================================
// 0xec59: db 0x3a 0x20 ': '

// ================================================
// 0xec5b: WORD 'UNK_0xec5d' codep=0x1d29 parp=0xec5d
// ================================================
// 0xec5d: db 0x3a 0x20 ': '

// ================================================
// 0xec5f: WORD 'UNK_0xec61' codep=0x1d29 parp=0xec61
// ================================================
// 0xec61: db 0x3a 0x20 ': '

// ================================================
// 0xec63: WORD 'UNK_0xec65' codep=0x224c parp=0xec65
// ================================================

void UNK_0xec65() // UNK_0xec65
{
  Push(pp_UNK_0xec51); // UNK_0xec51
  _099(); // 099
  Push(pp_UNK_0xec55); // UNK_0xec55
  _099(); // 099
  Push(pp_UNK_0xec59); // UNK_0xec59
  _099(); // 099
  Push(pp_UNK_0xec5d); // UNK_0xec5d
  _099(); // 099
  Push(pp_UNK_0xec61); // UNK_0xec61
  _099(); // 099
}


// ================================================
// 0xec7b: WORD 'UNK_0xec7d' codep=0x1d29 parp=0xec7d
// ================================================
// 0xec7d: db 0x56 0x3a 0x20 0x66 'V: f'

// ================================================
// 0xec81: WORD 'UNK_0xec83' codep=0x224c parp=0xec83
// ================================================

void UNK_0xec83() // UNK_0xec83
{
  Push(pp_UNK_0xec7d); // UNK_0xec7d
  _2_at_(); // 2@
  Push(0x0fa0); Pust(0x0000);
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
}


// ================================================
// 0xec97: WORD 'UNK_0xec99' codep=0x224c parp=0xec99
// ================================================

void UNK_0xec99() // UNK_0xec99
{
  Push(Pop()>>1); // 2/
  Push(Pop()*2); // 2*
}


// ================================================
// 0xec9f: WORD 'UNK_0xeca1' codep=0x224c parp=0xeca1
// ================================================

void UNK_0xeca1() // UNK_0xeca1
{
  Push(0); // 0
  Push(0x00a0);
  RRND(); // RRND
  UNK_0xec99(); // UNK_0xec99
}


// ================================================
// 0xecad: WORD 'UNK_0xecaf' codep=0x224c parp=0xecaf
// ================================================

void UNK_0xecaf() // UNK_0xecaf
{
  Push(0); // 0
  Push(0x00c9);
  RRND(); // RRND
  UNK_0xec99(); // UNK_0xec99
}


// ================================================
// 0xecbb: WORD 'UNK_0xecbd' codep=0x224c parp=0xecbd
// ================================================

void UNK_0xecbd() // UNK_0xecbd
{
  UNK_0xeca1(); // UNK_0xeca1
  Push(0x008c);
  MIN(); // MIN
  UNK_0xecaf(); // UNK_0xecaf
  Push(0x0014);
  MAX(); // MAX
  _2DUP(); // 2DUP
  Push(2); // 2
  Push(0x0015);
  RRND(); // RRND
  UNK_0xec99(); // UNK_0xec99
  _dash_(); // -
  SWAP(); // SWAP
  Push(2); // 2
  Push(0x0015);
  RRND(); // RRND
  UNK_0xec99(); // UNK_0xec99
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  UNK_0xeca1(); // UNK_0xeca1
  UNK_0xecaf(); // UNK_0xecaf
  LCOPYBL(); // LCOPYBL
}


// ================================================
// 0xecf3: WORD 'UNK_0xecf5' codep=0x224c parp=0xecf5
// ================================================

void UNK_0xecf5() // UNK_0xecf5
{
  Push(0x03e8);
  TONE(); // TONE
  TIME(); // TIME
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(pp_SEED); // SEED
  _ex_(); // !
  SetColor("YELLOW");
  _ex_COLOR(); // !COLOR

  UNK_0x3f09("GAME OVER - NO FUEL");
  _dot_TTY(); // .TTY
  Push(0x1388);
  MS(); // MS

  UNK_0x3f09("WARP ENGINES ABOUT TO... ");
  _dot_TTY(); // .TTY
  BEEPON(); // BEEPON
  Push(0x1388);
  MS(); // MS
  BEEPOFF(); // BEEPOFF

  label1:
  UNK_0xecbd(); // UNK_0xecbd
  _ask_TERMINAL(); // ?TERMINAL
  if (Pop() == 0) goto label1;
  BYE(); // BYE
}


// ================================================
// 0xed5b: WORD 'UNK_0xed5d' codep=0x1d29 parp=0xed5d
// ================================================
// 0xed5d: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4f 0x53 0x48 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x5c 0x20 0x45 0x59 0x45 0x20 0x20 0x20 0x20 0x20 0x4f 0x56 0x52 0x41 0x28 0x72 0x66 0x67 0x31 0x34 0x61 0x70 0x72 0x38 0x38 0x29 ':  ALLOT OSH                      \ EYE     OVRA(rfg14apr88)'

// ================================================
// 0xed99: WORD 'UNK_0xed9b' codep=0x1d29 parp=0xed9b
// ================================================
// 0xed9b: db 0x3a 0x20 ': '

// ================================================
// 0xed9d: WORD 'UNK_0xed9f' codep=0x1d29 parp=0xed9f
// ================================================
// 0xed9f: db 0x3a 0x20 ': '

// ================================================
// 0xeda1: WORD 'UNK_0xeda3' codep=0x224c parp=0xeda3
// ================================================

void UNK_0xeda3() // UNK_0xeda3
{
  Push(Pop() * Pop()); // *
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  Push(Pop()*2); // 2*
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
}


// ================================================
// 0xedb3: WORD 'UNK_0xedb5' codep=0x224c parp=0xedb5
// ================================================

void UNK_0xedb5() // UNK_0xedb5
{
  _gt_R(); // >R
  Push(0x000a);
  Push(pp_UNK_0xed9f); // UNK_0xed9f
  Push(Read16(Pop())); // @
  RRND(); // RRND
  Push(h); // I
  Push(Pop()+1); // 1+
  C_ex_(); // C!
  Push(1); // 1
  Push(h); // I
  C_ex_(); // C!
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x0048);
  UNK_0xeda3(); // UNK_0xeda3
  Push(0xffdc);
  Push(0x0024);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffdc);
  MAX(); // MAX
  Push(0x0023);
  MIN(); // MIN
  Push(h); // I
  Push(Pop()+2); // 2+
  _ex_(); // !
  Push(0x0078);
  UNK_0xeda3(); // UNK_0xeda3
  Push(0xffc4);
  Push(0x003c);
  RRND(); // RRND
  Push(Pop() + Pop()); // +
  Push(0xffc4);
  MAX(); // MAX
  Push(0x003b);
  MIN(); // MIN
  R_gt_(); // R>
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  _ex_(); // !
}


// ================================================
// 0xee23: WORD 'UNK_0xee25' codep=0x224c parp=0xee25
// ================================================

void UNK_0xee25() // UNK_0xee25
{
  Push(0x003c);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(pp_UNK_0xed5d); // UNK_0xed5d
  Push(i); // I
  Push(Pop() + Pop()); // +
  UNK_0xedb5(); // UNK_0xedb5
  Push(cc__6); // 6
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff4

}


// ================================================
// 0xee3d: WORD 'UNK_0xee3f' codep=0x224c parp=0xee3f
// ================================================

void UNK_0xee3f() // UNK_0xee3f
{
  Push(pp_UNK_0xed5d); // UNK_0xed5d
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(h); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(h); // I
  C_at_(); // C@
  _slash_(); // /
  Push(0x0024);
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0047);
  MIN(); // MIN
  Push(h); // I
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(h); // I
  C_at_(); // C@
  _slash_(); // /
  Push(0x003c);
  Push(Pop() + Pop()); // +
  Push(0); // 0
  MAX(); // MAX
  Push(0x0077);
  MIN(); // MIN
  LPLOT(); // LPLOT
  Push(pp_UNK_0xed9f); // UNK_0xed9f
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(Pop() * Pop()); // *
  DUP(); // DUP
  Push(0x00c8);
  Push(Pop() + Pop()); // +
  RRND(); // RRND
  TONE(); // TONE
  Push(h); // I
  C_at_(); // C@
  Push(Pop()+1); // 1+
  DUP(); // DUP
  Push(h); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  R_gt_(); // R>
  UNK_0xedb5(); // UNK_0xedb5
  return;

  label1:
  R_gt_(); // R>
  C_ex_(); // C!
}


// ================================================
// 0xeebb: WORD 'UNK_0xeebd' codep=0x224c parp=0xeebd
// ================================================

void UNK_0xeebd() // UNK_0xeebd
{
  Push(pp_UNK_0xed9b); // UNK_0xed9b
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  DARK(); // DARK

  label1:
  RNDCLR(); // RNDCLR
  Push(0x003c);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xee3f(); // UNK_0xee3f
  Push(cc__6); // 6
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff8

  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xeee1: WORD 'UNK_0xeee3' codep=0x224c parp=0xeee3
// ================================================

void UNK_0xeee3() // UNK_0xeee3
{
  _gt_MAINVI(); // >MAINVI
  Push(0x0014);
  Push(pp_UNK_0xed9f); // UNK_0xed9f
  _ex_(); // !
  Push(0); // 0
  Push(cc__3); // 3
  RRND(); // RRND
  Push(pp_UNK_0xed9b); // UNK_0xed9b
  _ex_(); // !
  UNK_0xeebd(); // UNK_0xeebd
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xeefd: WORD 'UNK_0xeeff' codep=0x224c parp=0xeeff
// ================================================

void UNK_0xeeff() // UNK_0xeeff
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  UNK_0xeee3(); // UNK_0xeee3
  _ex_COLOR(); // !COLOR
  _dot_TTY(); // .TTY
}


// ================================================
// 0xef0b: WORD 'UNK_0xef0d' codep=0x224c parp=0xef0d
// ================================================

void UNK_0xef0d() // UNK_0xef0d
{
  Push(pp__dash_END); // -END
  Push(Read16(Pop())); // @
}


// ================================================
// 0xef13: WORD 'UNK_0xef15' codep=0x224c parp=0xef15
// ================================================

void UNK_0xef15() // UNK_0xef15
{
  Push(pp__dash_END); // -END
  _ex_(); // !
}


// ================================================
// 0xef1b: WORD 'UNK_0xef1d' codep=0x224c parp=0xef1d
// ================================================

void UNK_0xef1d() // UNK_0xef1d
{
  UNK_0xef0d(); // UNK_0xef0d
  Push(0); // 0
}


// ================================================
// 0xef23: WORD 'UNK_0xef25' codep=0x224c parp=0xef25
// ================================================

void UNK_0xef25() // UNK_0xef25
{
  UNK_0xef0d(); // UNK_0xef0d
  _gt_R(); // >R
  UNK_0xef15(); // UNK_0xef15
  Push(pp__10_star_CARG); // 10*CARG
  _2_at_(); // 2@
  UNK_0xef1d(); // UNK_0xef1d
  D_plus_(); // D+
  Push(pp__10_star_CARG); // 10*CARG
  D_ex_(); // D!
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  UNK_0xef1d(); // UNK_0xef1d
  D_dash_(); // D-
  Push2Words("NULL");
  DMAX(); // DMAX
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  UNK_0xef0d(); // UNK_0xef0d
  Push(0x000a);
  _slash_(); // /
  UNK_0xef15(); // UNK_0xef15
  UNK_0xebdf(); // UNK_0xebdf
  UNK_0xef0d(); // UNK_0xef0d
  Func8("UNK_0xebc6");
  _plus__ex_(); // +!
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  Pop(); // DROP
  Func8("INST-QT");
  Push(Read16(Pop())); // @
  UNK_0xef0d(); // UNK_0xef0d
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Func8("INST-QT");
  _ex_(); // !
  Push(cc__4); // 4
  _star_CLOSE(); // *CLOSE
  R_gt_(); // R>
  UNK_0xef15(); // UNK_0xef15
}


// ================================================
// 0xef91: WORD 'UNK_0xef93' codep=0x224c parp=0xef93
// ================================================

void UNK_0xef93() // UNK_0xef93
{

  UNK_0x3f09("COMMANDER, WE ARE ONCE AGAIN IN OUR");
  _dot_TTY(); // .TTY

  UNK_0x3f09("OWN TIME PERIOD.");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xefd2: WORD 'UNK_0xefd4' codep=0x224c parp=0xefd4
// ================================================

void UNK_0xefd4() // UNK_0xefd4
{

  UNK_0x3f09("COMMANDER, FROM OUR ANALYSIS OF THE");
  _dot_TTY(); // .TTY

  UNK_0x3f09("LOCAL STELLAR FORMATIONS, WE HAVE");
  _dot_TTY(); // .TTY

  UNK_0x3f09("DETERMINED THAT WE HAVE SOMEHOW");
  _dot_TTY(); // .TTY

  UNK_0x3f09("TRAVELLED BACK IN TIME.");
  _dot_TTY(); // .TTY
  UNK_0xebdf(); // UNK_0xebdf
  Func8("UNK_0xebcb");
  UNK_0xebd5(); // UNK_0xebd5
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Func8("UNK_0xebd0");
  _ex_(); // !
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf076: WORD 'UNK_0xf078' codep=0x224c parp=0xf078
// ================================================

void UNK_0xf078() // UNK_0xf078
{
  UNK_0xebdf(); // UNK_0xebdf
  Push(0x09c4);
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  _slash_(); // /

  label1:
  Push(0xc6a5);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf096: WORD 'UNK_0xf098' codep=0x224c parp=0xf098
// ================================================

void UNK_0xf098() // UNK_0xf098
{
  Push(0x0020);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  RNDCLR(); // RNDCLR
  BFILL(); // BFILL
  V_gt_DISPL(); // V>DISPL
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  DARK(); // DARK
  V_gt_DISPL(); // V>DISPL
}


// ================================================
// 0xf0b0: WORD 'UNK_0xf0b2' codep=0x224c parp=0xf0b2
// ================================================

void UNK_0xf0b2() // UNK_0xf0b2
{
  CTINIT(); // CTINIT
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xefd4(); // UNK_0xefd4
  goto label2;

  label1:
  UNK_0xef93(); // UNK_0xef93

  label2:
  _slash_STARD(); // /STARD
}


// ================================================
// 0xf0c8: WORD 'UNK_0xf0ca' codep=0x224c parp=0xf0ca
// ================================================

void UNK_0xf0ca() // UNK_0xf0ca
{
  Push(pp_UNK_0xed9b); // UNK_0xed9b
  _099(); // 099
  _gt_MAINVI(); // >MAINVI
  BEEPON(); // BEEPON
  Push(0x001e);
  Push(0x0168);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(cc__6); // 6
  _slash_(); // /
  Push(pp_UNK_0xed9f); // UNK_0xed9f
  _ex_(); // !
  UNK_0xeebd(); // UNK_0xeebd
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff0

  Push(0x00fa);
  MS(); // MS
  UNK_0xf098(); // UNK_0xf098
  _gt_DISPLA(); // >DISPLA
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf0fc: WORD 'UNK_0xf0fe' codep=0x224c parp=0xf0fe
// ================================================

void UNK_0xf0fe() // UNK_0xf0fe
{
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_PAST); // PAST
  _ex_(); // !
  INIT_dash_IC(); // INIT-IC
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  _plus_ICONBO(); // +ICONBO
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  UNK_0xf0ca(); // UNK_0xf0ca
  UNK_0xf078(); // UNK_0xf078
  Push(0x1388);
  Push(pp_PAST); // PAST
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  _slash_(); // /

  label1:
  UNK_0xef25(); // UNK_0xef25
  Push(pp__10_star_END); // 10*END
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  UNK_0xecf5(); // UNK_0xecf5

  label2:
  Push(pp_FTRIG); // FTRIG
  ON(); // ON
  UNK_0xf0b2(); // UNK_0xf0b2
}


// ================================================
// 0xf144: WORD 'UNK_0xf146' codep=0x224c parp=0xf146
// ================================================

void UNK_0xf146() // UNK_0xf146
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  _0_gt_(); // 0>
  if (Pop() == 0) goto label2;
  UNK_0xf0fe(); // UNK_0xf0fe

  label2:
  Push(pp_FTRIG); // FTRIG
  ON(); // ON
  return;

  label1:
  Push(pp_UNK_0xec61); // UNK_0xec61
  _099(); // 099
}


// ================================================
// 0xf162: WORD 'UNK_0xf164' codep=0x224c parp=0xf164
// ================================================

void UNK_0xf164() // UNK_0xf164
{
  XYSCAN(); // XYSCAN
  SWAP(); // SWAP
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(0); // 0
}


// ================================================
// 0xf172: WORD 'UNK_0xf174' codep=0x2214 parp=0xf174
// ================================================
// 0xf174: db 0x40 0x00 '@ '

// ================================================
// 0xf176: WORD 'UNK_0xf178' codep=0x2214 parp=0xf178
// ================================================
// 0xf178: db 0x3e 0x00 '> '

// ================================================
// 0xf17a: WORD 'UNK_0xf17c' codep=0x2214 parp=0xf17c
// ================================================
// 0xf17c: db 0x09 0x00 '  '

// ================================================
// 0xf17e: WORD 'UNK_0xf180' codep=0x2214 parp=0xf180
// ================================================
// 0xf180: db 0x08 0x00 '  '

// ================================================
// 0xf182: WORD 'UNK_0xf184' codep=0x224c parp=0xf184
// ================================================

void UNK_0xf184() // UNK_0xf184
{
  _2DUP(); // 2DUP
  Push(cc_UNK_0xf17c); // UNK_0xf17c
  _dash_(); // -
  SWAP(); // SWAP
  Push(cc_UNK_0xf180); // UNK_0xf180
  _dash_(); // -
  SWAP(); // SWAP
  _2SWAP(); // 2SWAP
  Push(cc_UNK_0xf174); // UNK_0xf174
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(cc_UNK_0xf178); // UNK_0xf178
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  _ex_VISWIN(); // !VISWIN
}


// ================================================
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x224c parp=0xf1a6
// ================================================

void UNK_0xf1a6() // UNK_0xf1a6
{
  Push(pp_UNK_0xec61); // UNK_0xec61
  ON(); // ON
  Push(pp_UNK_0xec5d); // UNK_0xec5d
  ON(); // ON
  Push(pp_FTRIG); // FTRIG
  ON(); // ON
}


// ================================================
// 0xf1b4: WORD 'UNK_0xf1b6' codep=0x224c parp=0xf1b6
// ================================================

void UNK_0xf1b6() // UNK_0xf1b6
{
  SetColor("YELLOW");
  _ex_COLOR(); // !COLOR

  UNK_0x3f09(" ");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("WARNING        WARNING         WARNING");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09(" ");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("WE ARE PROCEEDING THROUGH THE ANOMALY.");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("PLEASE CONFIRM:");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09(" ");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("      [BACK OUT      GO THROUGH]      ");
  UNK_0xeeff(); // UNK_0xeeff
}


// ================================================
// 0xf263: WORD 'UNK_0xf265' codep=0x224c parp=0xf265
// ================================================

void UNK_0xf265() // UNK_0xf265
{
  Push(pp_UNK_0xec5d); // UNK_0xec5d
  ON(); // ON
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  BEEP(); // BEEP
  Push(pp_UNK_0xec5d); // UNK_0xec5d
  _099(); // 099
  UNK_0xebe7(); // UNK_0xebe7
  if (Pop() == 0) goto label3;
  UNK_0xebfd(); // UNK_0xebfd
  UNK_0xf1a6(); // UNK_0xf1a6

  label3:
  goto label4;

  label2:
  UNK_0xf1a6(); // UNK_0xf1a6

  label4:
  return;

  label1:
  Push(pp_UNK_0xec59); // UNK_0xec59
  _099(); // 099
}


// ================================================
// 0xf295: WORD 'UNK_0xf297' codep=0x224c parp=0xf297
// ================================================

void UNK_0xf297() // UNK_0xf297
{
  UNK_0xebdf(); // UNK_0xebdf
  Push(0xc6a5);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_UNK_0xec7d); // UNK_0xec7d
  D_ex_(); // D!
}


// ================================================
// 0xf2ab: WORD 'UNK_0xf2ad' codep=0x224c parp=0xf2ad
// ================================================

void UNK_0xf2ad() // UNK_0xf2ad
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f09("IF WE APPLY FULL REVERSE THRUST WE MAY");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("BE ABLE TO BACK OUT. SHALL WE ATTEMPT ");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("TO ESCAPE?");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("              [NO   YES] ");
  UNK_0xeeff(); // UNK_0xeeff
}


// ================================================
// 0xf336: WORD 'UNK_0xf338' codep=0x224c parp=0xf338
// ================================================

void UNK_0xf338() // UNK_0xf338
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR

  UNK_0x3f09("COMMANDER, THE SHIP'S HULL IS UNDER");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("TERRIFIC PRESSURE AND WE ARE IN DANGER");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("OF SUSTAINING MAJOR DAMAGE. OUR ENERGY");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("STORES ARE ALSO BEING DRAINED AT AN");
  UNK_0xeeff(); // UNK_0xeeff

  UNK_0x3f09("ALARMING RATE.");
  UNK_0xeeff(); // UNK_0xeeff
}


// ================================================
// 0xf3f7: WORD 'UNK_0xf3f9' codep=0x224c parp=0xf3f9
// ================================================

void UNK_0xf3f9() // UNK_0xf3f9
{
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(pp_UNK_0xec4b); // UNK_0xec4b
  D_ex_(); // D!
  Push(pp_UNK_0xec7d); // UNK_0xec7d
  D_ex_(); // D!
}


// ================================================
// 0xf409: WORD 'UNK_0xf40b' codep=0x224c parp=0xf40b
// ================================================

void UNK_0xf40b() // UNK_0xf40b
{
  Push(pp_UNK_0xec4b); // UNK_0xec4b
  _2_at_(); // 2@
  D_plus_(); // D+
  TIME(); // TIME
  _2_at_(); // 2@
  D_st_(); // D<
  OVER(); // OVER
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  DUP(); // DUP
  if (Pop() == 0) goto label1;
  OVER(); // OVER
  ON(); // ON

  label1:
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf42f: WORD 'UNK_0xf431' codep=0x224c parp=0xf431
// ================================================

void UNK_0xf431() // UNK_0xf431
{
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xf43f: WORD 'UNK_0xf441' codep=0x224c parp=0xf441
// ================================================

void UNK_0xf441() // UNK_0xf441
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
  DARK(); // DARK
  Push(0xec78);
  DUP(); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
  _dot_LOCAL_dash_(); // .LOCAL-
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xf45d: WORD 'UNK_0xf45f' codep=0x224c parp=0xf45f
// ================================================

void UNK_0xf45f() // UNK_0xf45f
{
  Push2Words("*EYE");
  _gt_C_plus_S(); // >C+S
  Func8("INST-X");
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  UNK_0xf431(); // UNK_0xf431
  Push(Pop() + Pop()); // +
  Func8("INST-Y");
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  UNK_0xf431(); // UNK_0xf431
  Push(Pop() + Pop()); // +
  _2DUP(); // 2DUP
  Push(pp_YABS); // YABS
  _ex_(); // !
  Push(pp_XABS); // XABS
  _ex_(); // !
  UNK_0xebdf(); // UNK_0xebdf
  _2DUP(); // 2DUP
  Func8("INST-Y");
  _ex_(); // !
  Func8("INST-X");
  _ex_(); // !
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  Pop(); // DROP
  POINT_gt_I(); // POINT>I
  _2DUP(); // 2DUP
  _ex_IY(); // !IY
  _ex_IX(); // !IX
  UNK_0xf184(); // UNK_0xf184
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf4a3: WORD 'UNK_0xf4a5' codep=0x224c parp=0xf4a5
// ================================================

void UNK_0xf4a5() // UNK_0xf4a5
{
  Push(pp_UNK_0xec51); // UNK_0xec51
  Push(0x1388); Pust(0x0000);
  UNK_0xf40b(); // UNK_0xf40b
  if (Pop() == 0) goto label1;
  UNK_0xf338(); // UNK_0xf338

  label1:
  Push(pp_UNK_0xec55); // UNK_0xec55
  Push(0x2ee0); Pust(0x0000);
  UNK_0xf40b(); // UNK_0xf40b
  if (Pop() == 0) goto label2;
  UNK_0xf2ad(); // UNK_0xf2ad

  label2:
  Push(pp_UNK_0xec59); // UNK_0xec59
  Push(0x32c8); Pust(0x0000);
  UNK_0xf40b(); // UNK_0xf40b
  if (Pop() == 0) goto label3;
  UNK_0xf164(); // UNK_0xf164
  UNK_0xf265(); // UNK_0xf265

  label3:
  Push(pp_UNK_0xec5d); // UNK_0xec5d
  Push(0x36b0); Pust(0x0000);
  UNK_0xf40b(); // UNK_0xf40b
  if (Pop() == 0) goto label4;
  UNK_0xf1b6(); // UNK_0xf1b6

  label4:
  Push(pp_UNK_0xec61); // UNK_0xec61
  Push(0x3a98); Pust(0x0000);
  UNK_0xf40b(); // UNK_0xf40b
  if (Pop() == 0) return;
  UNK_0xf164(); // UNK_0xf164
  UNK_0xf146(); // UNK_0xf146
}


// ================================================
// 0xf4fb: WORD 'DO-EYE' codep=0x224c parp=0xf506
// ================================================
// entry

void DO_dash_EYE() // DO-EYE
{
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  UNK_0xee25(); // UNK_0xee25
  UNK_0xf3f9(); // UNK_0xf3f9
  UNK_0xec65(); // UNK_0xec65
  Push(0xc1b8);
  MODULE(); // MODULE

  label2:
  XYSCAN(); // XYSCAN
  Pop(); Pop();// 2DROP
  Push(pp_FTRIG); // FTRIG
  _099(); // 099
  UNK_0xeee3(); // UNK_0xeee3
  UNK_0xec83(); // UNK_0xec83
  if (Pop() == 0) goto label1;
  Push(0x0014);
  UNK_0xf297(); // UNK_0xf297
  Push(0x0032);
  UNK_0xef25(); // UNK_0xef25

  label1:
  UNK_0xf4a5(); // UNK_0xf4a5
  Push(pp_LKEY); // LKEY
  _099(); // 099
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label2;
  UNK_0xebdf(); // UNK_0xebdf
  UNK_0xf45f(); // UNK_0xf45f
  UNK_0xf441(); // UNK_0xf441
  Push(0xc6ba);
  MODULE(); // MODULE
  ICLOSE(); // ICLOSE
  Push(pp_ESC_dash_EN); // ESC-EN
  ON(); // ON
}

// 0xf552: db 0x45 0x59 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'EYE-VOC_______ '
  