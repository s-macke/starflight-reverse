// ====== OVERLAY 'STP-OV' ======
// store offset = 0xefc0
// overlay size   = 0x05a0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xefd6  codep:0x744d parp:0xefd6 size:0x0003 C-string:'UNK_0xefd6'
//      UNK_0xefdb  codep:0x1d29 parp:0xefdb size:0x0002 C-string:'UNK_0xefdb'
//          SIC'EM  codep:0x224c parp:0xefe8 size:0x0048 C-string:'SIC_i_EM'
//      UNK_0xf032  codep:0x1d29 parp:0xf032 size:0x0002 C-string:'UNK_0xf032'
//      UNK_0xf036  codep:0x1d29 parp:0xf036 size:0x0002 C-string:'UNK_0xf036'
//      UNK_0xf03a  codep:0x1d29 parp:0xf03a size:0x0006 C-string:'UNK_0xf03a'
//      UNK_0xf042  codep:0x1d29 parp:0xf042 size:0x0004 C-string:'UNK_0xf042'
//      UNK_0xf048  codep:0x224c parp:0xf048 size:0x003e C-string:'UNK_0xf048'
//      UNK_0xf088  codep:0x224c parp:0xf088 size:0x000a C-string:'UNK_0xf088'
//      UNK_0xf094  codep:0x224c parp:0xf094 size:0x000b C-string:'UNK_0xf094'
//      UNK_0xf0a1  codep:0x224c parp:0xf0a1 size:0x000b C-string:'UNK_0xf0a1'
//      UNK_0xf0ae  codep:0x224c parp:0xf0ae size:0x000c C-string:'UNK_0xf0ae'
//      UNK_0xf0bc  codep:0x224c parp:0xf0bc size:0x000b C-string:'UNK_0xf0bc'
//      UNK_0xf0c9  codep:0x224c parp:0xf0c9 size:0x000e C-string:'UNK_0xf0c9'
//      UNK_0xf0d9  codep:0x224c parp:0xf0d9 size:0x000a C-string:'UNK_0xf0d9'
//      UNK_0xf0e5  codep:0x224c parp:0xf0e5 size:0x000e C-string:'UNK_0xf0e5'
//      UNK_0xf0f5  codep:0x224c parp:0xf0f5 size:0x000f C-string:'UNK_0xf0f5'
//      UNK_0xf106  codep:0x224c parp:0xf106 size:0x0009 C-string:'UNK_0xf106'
//      UNK_0xf111  codep:0x224c parp:0xf111 size:0x0011 C-string:'UNK_0xf111'
//      UNK_0xf124  codep:0x224c parp:0xf124 size:0x0014 C-string:'UNK_0xf124'
//      UNK_0xf13a  codep:0x224c parp:0xf13a size:0x000b C-string:'UNK_0xf13a'
//      UNK_0xf147  codep:0x224c parp:0xf147 size:0x000b C-string:'UNK_0xf147'
//      UNK_0xf154  codep:0x224c parp:0xf154 size:0x000a C-string:'UNK_0xf154'
//      UNK_0xf160  codep:0x224c parp:0xf160 size:0x000d C-string:'UNK_0xf160'
//      UNK_0xf16f  codep:0x224c parp:0xf16f size:0x0011 C-string:'UNK_0xf16f'
//      UNK_0xf182  codep:0x224c parp:0xf182 size:0x000c C-string:'UNK_0xf182'
//      UNK_0xf190  codep:0x224c parp:0xf190 size:0x000b C-string:'UNK_0xf190'
//      UNK_0xf19d  codep:0x224c parp:0xf19d size:0x0016 C-string:'UNK_0xf19d'
//      UNK_0xf1b5  codep:0x224c parp:0xf1b5 size:0x0009 C-string:'UNK_0xf1b5'
//      UNK_0xf1c0  codep:0x224c parp:0xf1c0 size:0x000c C-string:'UNK_0xf1c0'
//      UNK_0xf1ce  codep:0x224c parp:0xf1ce size:0x000c C-string:'UNK_0xf1ce'
//      UNK_0xf1dc  codep:0x224c parp:0xf1dc size:0x000e C-string:'UNK_0xf1dc'
//      UNK_0xf1ec  codep:0x224c parp:0xf1ec size:0x000e C-string:'UNK_0xf1ec'
//      UNK_0xf1fc  codep:0x224c parp:0xf1fc size:0x000f C-string:'UNK_0xf1fc'
//      UNK_0xf20d  codep:0x224c parp:0xf20d size:0x0014 C-string:'UNK_0xf20d'
//      UNK_0xf223  codep:0x224c parp:0xf223 size:0x000c C-string:'UNK_0xf223'
//      UNK_0xf231  codep:0x224c parp:0xf231 size:0x0019 C-string:'UNK_0xf231'
//      UNK_0xf24c  codep:0x224c parp:0xf24c size:0x0009 C-string:'UNK_0xf24c'
//      UNK_0xf257  codep:0x224c parp:0xf257 size:0x0013 C-string:'UNK_0xf257'
//      UNK_0xf26c  codep:0x224c parp:0xf26c size:0x0009 C-string:'UNK_0xf26c'
//      UNK_0xf277  codep:0x224c parp:0xf277 size:0x000e C-string:'UNK_0xf277'
//      UNK_0xf287  codep:0x1d29 parp:0xf287 size:0x0012 C-string:'UNK_0xf287'
//      UNK_0xf29b  codep:0x1d29 parp:0xf29b size:0x0030 C-string:'UNK_0xf29b'
//      UNK_0xf2cd  codep:0x1d29 parp:0xf2cd size:0x0018 C-string:'UNK_0xf2cd'
//      UNK_0xf2e7  codep:0x224c parp:0xf2e7 size:0x0044 C-string:'UNK_0xf2e7'
//      UNK_0xf32d  codep:0x224c parp:0xf32d size:0x001c C-string:'UNK_0xf32d'
//      UNK_0xf34b  codep:0x224c parp:0xf34b size:0x0053 C-string:'UNK_0xf34b'
//      UNK_0xf3a0  codep:0x224c parp:0xf3a0 size:0x0042 C-string:'UNK_0xf3a0'
//      UNK_0xf3e4  codep:0x224c parp:0xf3e4 size:0x005b C-string:'UNK_0xf3e4'
//      UNK_0xf441  codep:0x224c parp:0xf441 size:0x0017 C-string:'UNK_0xf441'
//      UNK_0xf45a  codep:0x224c parp:0xf45a size:0x0033 C-string:'UNK_0xf45a'
//      UNK_0xf48f  codep:0x224c parp:0xf48f size:0x0028 C-string:'UNK_0xf48f'
//             STP  codep:0x224c parp:0xf4bf size:0x002c C-string:'STP'
//            2NDS  codep:0x224c parp:0xf4f4 size:0x0000 C-string:'_2NDS'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int pp_IsAUTO; // ?AUTO
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_GLOBALSEED; // GLOBALSEED
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp_IsSECURE; // ?SECURE
extern LoadDataType ART_dash_NAME; // ART-NAME
extern IFieldType INST_dash_X; // INST-X
void COUNT(); // COUNT
void MOD(); // MOD
void BEEP(); // BEEP
void D_dot_(); // D.
void MS(); // MS
void RRND(); // RRND
void C_ex_(); // C!
void Store_3(); // !_3
void StoreD(); // D!
void OFF(); // OFF
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void CTERASE(); // CTERASE
void TTY_dash_SCR(); // TTY-SCR
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _dash_XTRAILING(); // -XTRAILING
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void U_star_(); // U*
void U_slash_MOD(); // U/MOD
void _st_(); // <
void TIME(); // TIME
void GetEXECUTE(); // @EXECUTE


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xefdb = 0xefdb; // UNK_0xefdb size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf032 = 0xf032; // UNK_0xf032 size: 2
// {0x15, 0x00}

const unsigned short int pp_UNK_0xf036 = 0xf036; // UNK_0xf036 size: 2
// {0x02, 0x00}

const unsigned short int pp_UNK_0xf03a = 0xf03a; // UNK_0xf03a size: 6
// {0x03, 0x00, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_UNK_0xf042 = 0xf042; // UNK_0xf042 size: 4
// {0x56, 0x3a, 0x20, 0x4f}

const unsigned short int pp_UNK_0xf287 = 0xf287; // UNK_0xf287 size: 18
// {0x88, 0xf0, 0x94, 0xf0, 0xa1, 0xf0, 0xae, 0xf0, 0xbc, 0xf0, 0xc9, 0xf0, 0xd9, 0xf0, 0xe5, 0xf0, 0xf5, 0xf0}

const unsigned short int pp_UNK_0xf29b = 0xf29b; // UNK_0xf29b size: 48
// {0x06, 0xf1, 0x11, 0xf1, 0x24, 0xf1, 0x3a, 0xf1, 0x47, 0xf1, 0x54, 0xf1, 0x60, 0xf1, 0x6f, 0xf1, 0x82, 0xf1, 0x90, 0xf1, 0x9d, 0xf1, 0xb5, 0xf1, 0xc0, 0xf1, 0xce, 0xf1, 0xdc, 0xf1, 0xec, 0xf1, 0xfc, 0xf1, 0x0d, 0xf2, 0x23, 0xf2, 0x31, 0xf2, 0x4c, 0xf2, 0x57, 0xf2, 0x6c, 0xf2, 0x77, 0xf2}

const unsigned short int pp_UNK_0xf2cd = 0xf2cd; // UNK_0xf2cd size: 24
// {0x0c, 0x0f, 0x1d, 0x01, 0x17, 0x06, 0x0b, 0x25, 0x2b, 0x2a, 0x2e, 0x07, 0x04, 0x12, 0x1e, 0x0e, 0x1b, 0x18, 0x03, 0x10, 0x0a, 0x05, 0x13, 0x02}




// 0xefd2: db 0x57 0x00 'W '

// ================================================
// 0xefd4: WORD 'UNK_0xefd6' codep=0x744d parp=0xefd6
// ================================================
IFieldType UNK_0xefd6 = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xefd9: WORD 'UNK_0xefdb' codep=0x1d29 parp=0xefdb
// ================================================
// 0xefdb: db 0x3a 0x20 ': '

// ================================================
// 0xefdd: WORD 'SIC'EM' codep=0x224c parp=0xefe8 params=0 returns=2
// ================================================
// entry

void SIC_i_EM() // SIC'EM
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+UNK_0xefd6.offset)&0xFF); // UNK_0xefd6<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  _st_(); // <
  Push(pp_UNK_0xefdb); // UNK_0xefdb
  Store_3(); // !_3
  Push(0x0080);
  Push(Pop() | Pop()); // OR
  Push(0x63ef+UNK_0xefd6.offset); // UNK_0xefd6<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(Read16(pp_YABS)); // YABS @
  Push(Read16(pp_XABS)); // XABS @
  Push2Words("*ARREST");
  _gt_C_plus_S(); // >C+S
  Push(0x63ef+INST_dash_X.offset); // INST-X<IFIELD>
  StoreD(); // D!
  ICLOSE(); // ICLOSE
  Push2Words("*ARREST");
  Push(0xcc1a); // probable '>NEST'
  MODULE(); // MODULE
  Push(!Read16(pp_IsAUTO)); // ?AUTO @ NOT
  if (Pop() == 0) return;
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf030: WORD 'UNK_0xf032' codep=0x1d29 parp=0xf032
// ================================================
// 0xf032: db 0x15 0x00 '  '

// ================================================
// 0xf034: WORD 'UNK_0xf036' codep=0x1d29 parp=0xf036
// ================================================
// 0xf036: db 0x02 0x00 '  '

// ================================================
// 0xf038: WORD 'UNK_0xf03a' codep=0x1d29 parp=0xf03a
// ================================================
// 0xf03a: db 0x03 0x00 0x29 0x1d 0x3a 0x20 '  ) : '

// ================================================
// 0xf040: WORD 'UNK_0xf042' codep=0x1d29 parp=0xf042
// ================================================
// 0xf042: db 0x56 0x3a 0x20 0x4f 'V: O'

// ================================================
// 0xf046: WORD 'UNK_0xf048' codep=0x224c parp=0xf048 params=0 returns=1
// ================================================

void UNK_0xf048() // UNK_0xf048
{
  Push(Read16(pp_UNK_0xf032)); // UNK_0xf032 @
  Push(Read16(pp_UNK_0xf036)); // UNK_0xf036 @
  _2DUP(); // 2DUP
  _st_(); // <
  if (Pop() != 0)
  {
    _dash_(); // -
    Push(0x0018);
    Push(Pop() + Pop()); // +
  } else
  {
    _dash_(); // -
  }
  Push(Read16(regsp)); // DUP
  Push(Pop()+1); // 1+
  Push(Pop() * Pop()); // *
  Push(Read16(pp_UNK_0xf03a)); // UNK_0xf03a @
  Push(Read16(regsp)); // DUP
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x0025);
  Push(Pop() + Pop()); // +
  Push(0x0133);
  MOD(); // MOD
}


// ================================================
// 0xf086: WORD 'UNK_0xf088' codep=0x224c parp=0xf088 params=0 returns=2
// ================================================

void UNK_0xf088() // UNK_0xf088
{
  SET_STR_AS_PARAM("VELOX");
}


// ================================================
// 0xf092: WORD 'UNK_0xf094' codep=0x224c parp=0xf094 params=0 returns=2
// ================================================

void UNK_0xf094() // UNK_0xf094
{
  SET_STR_AS_PARAM("THRYNN");
}


// ================================================
// 0xf09f: WORD 'UNK_0xf0a1' codep=0x224c parp=0xf0a1 params=0 returns=2
// ================================================

void UNK_0xf0a1() // UNK_0xf0a1
{
  SET_STR_AS_PARAM("ELOWAN");
}


// ================================================
// 0xf0ac: WORD 'UNK_0xf0ae' codep=0x224c parp=0xf0ae params=0 returns=2
// ================================================

void UNK_0xf0ae() // UNK_0xf0ae
{
  SET_STR_AS_PARAM("MECHANS");
}


// ================================================
// 0xf0ba: WORD 'UNK_0xf0bc' codep=0x224c parp=0xf0bc params=0 returns=2
// ================================================

void UNK_0xf0bc() // UNK_0xf0bc
{
  SET_STR_AS_PARAM("SPEMIN");
}


// ================================================
// 0xf0c7: WORD 'UNK_0xf0c9' codep=0x224c parp=0xf0c9 params=0 returns=2
// ================================================

void UNK_0xf0c9() // UNK_0xf0c9
{
  SET_STR_AS_PARAM("GAZURTOID");
}


// ================================================
// 0xf0d7: WORD 'UNK_0xf0d9' codep=0x224c parp=0xf0d9 params=0 returns=2
// ================================================

void UNK_0xf0d9() // UNK_0xf0d9
{
  SET_STR_AS_PARAM("UHLEK");
}


// ================================================
// 0xf0e3: WORD 'UNK_0xf0e5' codep=0x224c parp=0xf0e5 params=0 returns=2
// ================================================

void UNK_0xf0e5() // UNK_0xf0e5
{
  SET_STR_AS_PARAM("MINSTRELS");
}


// ================================================
// 0xf0f3: WORD 'UNK_0xf0f5' codep=0x224c parp=0xf0f5 params=0 returns=2
// ================================================

void UNK_0xf0f5() // UNK_0xf0f5
{
  SET_STR_AS_PARAM("MYSTERIONS");
}


// ================================================
// 0xf104: WORD 'UNK_0xf106' codep=0x224c parp=0xf106 params=0 returns=2
// ================================================

void UNK_0xf106() // UNK_0xf106
{
  SET_STR_AS_PARAM("ARTH");
}


// ================================================
// 0xf10f: WORD 'UNK_0xf111' codep=0x224c parp=0xf111 params=0 returns=2
// ================================================

void UNK_0xf111() // UNK_0xf111
{
  SET_STR_AS_PARAM("THOSS/ELERAN");
}


// ================================================
// 0xf122: WORD 'UNK_0xf124' codep=0x224c parp=0xf124 params=0 returns=2
// ================================================

void UNK_0xf124() // UNK_0xf124
{
  SET_STR_AS_PARAM("HARRISON'S BASE");
}


// ================================================
// 0xf138: WORD 'UNK_0xf13a' codep=0x224c parp=0xf13a params=0 returns=2
// ================================================

void UNK_0xf13a() // UNK_0xf13a
{
  SET_STR_AS_PARAM("SPHEXI");
}


// ================================================
// 0xf145: WORD 'UNK_0xf147' codep=0x224c parp=0xf147 params=0 returns=2
// ================================================

void UNK_0xf147() // UNK_0xf147
{
  SET_STR_AS_PARAM("SPEWTA");
}


// ================================================
// 0xf152: WORD 'UNK_0xf154' codep=0x224c parp=0xf154 params=0 returns=2
// ================================================

void UNK_0xf154() // UNK_0xf154
{
  SET_STR_AS_PARAM("EARTH");
}


// ================================================
// 0xf15e: WORD 'UNK_0xf160' codep=0x224c parp=0xf160 params=0 returns=2
// ================================================

void UNK_0xf160() // UNK_0xf160
{
  SET_STR_AS_PARAM("MARDAN 2");
}


// ================================================
// 0xf16d: WORD 'UNK_0xf16f' codep=0x224c parp=0xf16f params=0 returns=2
// ================================================

void UNK_0xf16f() // UNK_0xf16f
{
  SET_STR_AS_PARAM("NEW SCOTLAND");
}


// ================================================
// 0xf180: WORD 'UNK_0xf182' codep=0x224c parp=0xf182 params=0 returns=2
// ================================================

void UNK_0xf182() // UNK_0xf182
{
  SET_STR_AS_PARAM("KOANN 3");
}


// ================================================
// 0xf18e: WORD 'UNK_0xf190' codep=0x224c parp=0xf190 params=0 returns=2
// ================================================

void UNK_0xf190() // UNK_0xf190
{
  SET_STR_AS_PARAM("HEAVEN");
}


// ================================================
// 0xf19b: WORD 'UNK_0xf19d' codep=0x224c parp=0xf19d params=0 returns=2
// ================================================

void UNK_0xf19d() // UNK_0xf19d
{
  SET_STR_AS_PARAM("UHLEK BRAIN WORLD");
}


// ================================================
// 0xf1b3: WORD 'UNK_0xf1b5' codep=0x224c parp=0xf1b5 params=0 returns=2
// ================================================

void UNK_0xf1b5() // UNK_0xf1b5
{
  SET_STR_AS_PARAM("GAAL");
}


// ================================================
// 0xf1be: WORD 'UNK_0xf1c0' codep=0x224c parp=0xf1c0 params=0 returns=2
// ================================================

void UNK_0xf1c0() // UNK_0xf1c0
{
  SET_STR_AS_PARAM("AKTERON");
}


// ================================================
// 0xf1cc: WORD 'UNK_0xf1ce' codep=0x224c parp=0xf1ce params=0 returns=2
// ================================================

void UNK_0xf1ce() // UNK_0xf1ce
{
  SET_STR_AS_PARAM("NIRVANA");
}


// ================================================
// 0xf1da: WORD 'UNK_0xf1dc' codep=0x224c parp=0xf1dc params=0 returns=2
// ================================================

void UNK_0xf1dc() // UNK_0xf1dc
{
  SET_STR_AS_PARAM("THE STAFF");
}


// ================================================
// 0xf1ea: WORD 'UNK_0xf1ec' codep=0x224c parp=0xf1ec params=0 returns=2
// ================================================

void UNK_0xf1ec() // UNK_0xf1ec
{
  SET_STR_AS_PARAM("THE CROSS");
}


// ================================================
// 0xf1fa: WORD 'UNK_0xf1fc' codep=0x224c parp=0xf1fc params=0 returns=2
// ================================================

void UNK_0xf1fc() // UNK_0xf1fc
{
  SET_STR_AS_PARAM("PYTHAGORAS");
}


// ================================================
// 0xf20b: WORD 'UNK_0xf20d' codep=0x224c parp=0xf20d params=0 returns=2
// ================================================

void UNK_0xf20d() // UNK_0xf20d
{
  SET_STR_AS_PARAM("THE 4 SEEDLINGS");
}


// ================================================
// 0xf221: WORD 'UNK_0xf223' codep=0x224c parp=0xf223 params=0 returns=2
// ================================================

void UNK_0xf223() // UNK_0xf223
{
  SET_STR_AS_PARAM("THE AXE");
}


// ================================================
// 0xf22f: WORD 'UNK_0xf231' codep=0x224c parp=0xf231 params=0 returns=2
// ================================================

void UNK_0xf231() // UNK_0xf231
{
  SET_STR_AS_PARAM("CITY OF THE ANCIENTS");
}


// ================================================
// 0xf24a: WORD 'UNK_0xf24c' codep=0x224c parp=0xf24c params=0 returns=2
// ================================================

void UNK_0xf24c() // UNK_0xf24c
{
  SET_STR_AS_PARAM("MARS");
}


// ================================================
// 0xf255: WORD 'UNK_0xf257' codep=0x224c parp=0xf257 params=0 returns=2
// ================================================

void UNK_0xf257() // UNK_0xf257
{
  SET_STR_AS_PARAM("CRYSTAL PLANET");
}


// ================================================
// 0xf26a: WORD 'UNK_0xf26c' codep=0x224c parp=0xf26c params=0 returns=2
// ================================================

void UNK_0xf26c() // UNK_0xf26c
{
  SET_STR_AS_PARAM("ELAN");
}


// ================================================
// 0xf275: WORD 'UNK_0xf277' codep=0x224c parp=0xf277 params=0 returns=2
// ================================================

void UNK_0xf277() // UNK_0xf277
{
  SET_STR_AS_PARAM("VOTIPUTOX");
}


// ================================================
// 0xf285: WORD 'UNK_0xf287' codep=0x1d29 parp=0xf287
// ================================================
// 0xf287: db 0x88 0xf0 0x94 0xf0 0xa1 0xf0 0xae 0xf0 0xbc 0xf0 0xc9 0xf0 0xd9 0xf0 0xe5 0xf0 0xf5 0xf0 '                  '

// ================================================
// 0xf299: WORD 'UNK_0xf29b' codep=0x1d29 parp=0xf29b
// ================================================
// 0xf29b: db 0x06 0xf1 0x11 0xf1 0x24 0xf1 0x3a 0xf1 0x47 0xf1 0x54 0xf1 0x60 0xf1 0x6f 0xf1 0x82 0xf1 0x90 0xf1 0x9d 0xf1 0xb5 0xf1 0xc0 0xf1 0xce 0xf1 0xdc 0xf1 0xec 0xf1 0xfc 0xf1 0x0d 0xf2 0x23 0xf2 0x31 0xf2 0x4c 0xf2 0x57 0xf2 0x6c 0xf2 0x77 0xf2 '    $ : G T ` o                     # 1 L W l w '

// ================================================
// 0xf2cb: WORD 'UNK_0xf2cd' codep=0x1d29 parp=0xf2cd
// ================================================
// 0xf2cd: db 0x0c 0x0f 0x1d 0x01 0x17 0x06 0x0b 0x25 0x2b 0x2a 0x2e 0x07 0x04 0x12 0x1e 0x0e 0x1b 0x18 0x03 0x10 0x0a 0x05 0x13 0x02 '       %+*.             '

// ================================================
// 0xf2e5: WORD 'UNK_0xf2e7' codep=0x224c parp=0xf2e7
// ================================================

void UNK_0xf2e7() // UNK_0xf2e7
{
  Push(Read16(pp_UNK_0xf032) * 2 + pp_UNK_0xf29b); // UNK_0xf032 @ 2* UNK_0xf29b +
  GetEXECUTE(); // @EXECUTE
  DrawTTY(); // .TTY
  Push(Read16(Read16(pp_UNK_0xf036) + pp_UNK_0xf2cd)&0xFF); // UNK_0xf036 @ UNK_0xf2cd + C@
  Push(pp_RECORD_n_); // RECORD#
  Store_3(); // !_3
  Push(0x001c);
  Push(pp_FILE_n_); // FILE#
  Store_3(); // !_3
  LoadData(ART_dash_NAME); // from 'ARTIFACT'
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAILING(); // -XTRAILING
  DrawTTY(); // .TTY
  SET_dash_CURRENT(); // SET-CURRENT
  Push(Read16(pp_UNK_0xf03a) * 2 + pp_UNK_0xf287); // UNK_0xf03a @ 2* UNK_0xf287 +
  GetEXECUTE(); // @EXECUTE
  DrawTTY(); // .TTY
}


// ================================================
// 0xf32b: WORD 'UNK_0xf32d' codep=0x224c parp=0xf32d
// ================================================

void UNK_0xf32d() // UNK_0xf32d
{
  PRINT(" SECURITY CODE FOR:", 19); // (.")
  UNK_0xf2e7(); // UNK_0xf2e7
  TTY_dash_SCR(); // TTY-SCR
}


// ================================================
// 0xf349: WORD 'UNK_0xf34b' codep=0x224c parp=0xf34b params=0 returns=0
// ================================================

void UNK_0xf34b() // UNK_0xf34b
{
  unsigned short int i, imax;
  SET_STR_AS_PARAM("CODE: ");
  DrawTTY(); // .TTY
  Push(-1);
  Push(pp__dash_AIN); // -AIN
  Store_3(); // !_3
  Push(0x000a);
  Push(0xbd5b); // probable 'OV#IN$'
  MODULE(); // MODULE
  Push2Words("NULL");
  ROT(); // ROT
  COUNT(); // COUNT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    SWAP(); // SWAP
    Push(0x000a);
    U_star_(); // U*
    ROT(); // ROT
    Push(0x000a);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    Push(i); // I
    Push(Read8(Pop())&0xFF); // C@
    Push(0x0030);
    _dash_(); // -
    Push(0);
    D_plus_(); // D+
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_UNK_0xf042); // UNK_0xf042
  StoreD(); // D!
}


// ================================================
// 0xf39e: WORD 'UNK_0xf3a0' codep=0x224c parp=0xf3a0
// ================================================

void UNK_0xf3a0() // UNK_0xf3a0
{
  TIME(); // TIME
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(pp_GLOBALSEED); // GLOBALSEED
  Store_3(); // !_3
  Push(0);
  Push(0x0018);
  RRND(); // RRND
  Push(pp_UNK_0xf032); // UNK_0xf032
  Store_3(); // !_3
  Push(0);
  Push(0x0018);
  RRND(); // RRND
  Push(pp_UNK_0xf036); // UNK_0xf036
  Store_3(); // !_3
  Push(0);
  Push(9);
  RRND(); // RRND
  Push(pp_UNK_0xf03a); // UNK_0xf03a
  Store_3(); // !_3
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("REQUEST");
  DrawTTY(); // .TTY
  UNK_0xf32d(); // UNK_0xf32d
  TTY_dash_SCR(); // TTY-SCR
  UNK_0xf34b(); // UNK_0xf34b
}


// ================================================
// 0xf3e2: WORD 'UNK_0xf3e4' codep=0x224c parp=0xf3e4
// ================================================

void UNK_0xf3e4() // UNK_0xf3e4
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("VERIFYING");
  DrawTTY(); // .TTY
  UNK_0xf32d(); // UNK_0xf32d
  SET_STR_AS_PARAM("CODE ENTERED: ");
  DrawTTY(); // .TTY
  Push(pp_UNK_0xf042); // UNK_0xf042
  _2_at_(); // 2@
  D_dot_(); // D.
  SET_STR_AS_PARAM("CONFIRM [N Y]");
  DrawTTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  do
  {
    XYSCAN(); // XYSCAN
    IsTRIG(); // ?TRIG
    if (Pop() != 0)
    {
      BEEP(); // BEEP
    }
    SWAP(); // SWAP
    Pop(); // DROP
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
  Push(1);
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0xf43f: WORD 'UNK_0xf441' codep=0x224c parp=0xf441
// ================================================

void UNK_0xf441() // UNK_0xf441
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("RE-ENTER");
  DrawTTY(); // .TTY
  UNK_0xf32d(); // UNK_0xf32d
  TTY_dash_SCR(); // TTY-SCR
  UNK_0xf34b(); // UNK_0xf34b
}


// ================================================
// 0xf458: WORD 'UNK_0xf45a' codep=0x224c parp=0xf45a
// ================================================

void UNK_0xf45a() // UNK_0xf45a
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("ARE YOU SURE\? BETTER DOUBLE CHECK!");
  DrawTTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xf48d: WORD 'UNK_0xf48f' codep=0x224c parp=0xf48f
// ================================================

void UNK_0xf48f() // UNK_0xf48f
{

  label2:
  UNK_0xf3e4(); // UNK_0xf3e4
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf441(); // UNK_0xf441
  goto label2;

  label1:
  UNK_0xf048(); // UNK_0xf048
  Push(pp_UNK_0xf042); // UNK_0xf042
  _2_at_(); // 2@
  Push(0x0133);
  U_slash_MOD(); // U/MOD
  Pop(); // DROP
  Push((Pop()==Pop())?1:0); // =
  Push(!Read16(pp_IsSECURE)); // ?SECURE @ NOT
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xf4b7: WORD 'STP' codep=0x224c parp=0xf4bf
// ================================================
// entry

void STP() // STP
{
  UNK_0xf3a0(); // UNK_0xf3a0
  UNK_0xf48f(); // UNK_0xf48f
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(!Read16(pp_IsSECURE)); // ?SECURE @ NOT
  if (Pop() == 0) return;
  UNK_0xf45a(); // UNK_0xf45a
  UNK_0xf48f(); // UNK_0xf48f
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(Read16(pp_STARDATE) + 4); // STARDATE @ 4 +
  Push(pp_IsSECURE); // ?SECURE
  Store_3(); // !_3
}


// ================================================
// 0xf4eb: WORD '2NDS' codep=0x224c parp=0xf4f4
// ================================================
// entry

void _2NDS() // 2NDS
{
  UNK_0xf3a0(); // UNK_0xf3a0
  UNK_0xf048(); // UNK_0xf048
  Push(pp_UNK_0xf042); // UNK_0xf042
  _2_at_(); // 2@
  Push(0x0133);
  U_slash_MOD(); // U/MOD
  Pop(); // DROP
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(pp_IsSECURE); // ?SECURE
  OFF(); // OFF
  CTERASE(); // CTERASE
  Push(Read16(pp_UNK_0xefdb)); // UNK_0xefdb @
  if (Pop() == 0) return;
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16(0x63ef+UNK_0xefd6.offset)&0xFF) & 0x007f); // UNK_0xefd6<IFIELD> C@ 0x007f AND
  Push(0x63ef+UNK_0xefd6.offset); // UNK_0xefd6<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}

// 0xf52e: db 0x53 0x54 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x53 0x54 0x50 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'STP-VOC_________________________ for STP---------- '

