// ====== OVERLAY 'STP-OV' ======
// store offset = 0xefc0
// overlay size   = 0x05a0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WEFD6  codep:0x744d parp:0xefd6 size:0x0003 C-string:'WEFD6'
//           WEFDB  codep:0x1d29 parp:0xefdb size:0x0002 C-string:'WEFDB'
//          SIC'EM  codep:0x224c parp:0xefe8 size:0x0048 C-string:'SIC_i_EM'
//           WF032  codep:0x1d29 parp:0xf032 size:0x0002 C-string:'WF032'
//           WF036  codep:0x1d29 parp:0xf036 size:0x0002 C-string:'WF036'
//           WF03A  codep:0x1d29 parp:0xf03a size:0x0002 C-string:'WF03A'
//           WF03E  codep:0x1d29 parp:0xf03e size:0x0002 C-string:'WF03E'
//           WF042  codep:0x1d29 parp:0xf042 size:0x0004 C-string:'WF042'
//           WF048  codep:0x224c parp:0xf048 size:0x003e C-string:'WF048'
//           WF088  codep:0x224c parp:0xf088 size:0x000a C-string:'WF088'
//           WF094  codep:0x224c parp:0xf094 size:0x000b C-string:'WF094'
//           WF0A1  codep:0x224c parp:0xf0a1 size:0x000b C-string:'WF0A1'
//           WF0AE  codep:0x224c parp:0xf0ae size:0x000c C-string:'WF0AE'
//           WF0BC  codep:0x224c parp:0xf0bc size:0x000b C-string:'WF0BC'
//           WF0C9  codep:0x224c parp:0xf0c9 size:0x000e C-string:'WF0C9'
//           WF0D9  codep:0x224c parp:0xf0d9 size:0x000a C-string:'WF0D9'
//           WF0E5  codep:0x224c parp:0xf0e5 size:0x000e C-string:'WF0E5'
//           WF0F5  codep:0x224c parp:0xf0f5 size:0x000f C-string:'WF0F5'
//           WF106  codep:0x224c parp:0xf106 size:0x0009 C-string:'WF106'
//           WF111  codep:0x224c parp:0xf111 size:0x0011 C-string:'WF111'
//           WF124  codep:0x224c parp:0xf124 size:0x0014 C-string:'WF124'
//           WF13A  codep:0x224c parp:0xf13a size:0x000b C-string:'WF13A'
//           WF147  codep:0x224c parp:0xf147 size:0x000b C-string:'WF147'
//           WF154  codep:0x224c parp:0xf154 size:0x000a C-string:'WF154'
//           WF160  codep:0x224c parp:0xf160 size:0x000d C-string:'WF160'
//           WF16F  codep:0x224c parp:0xf16f size:0x0011 C-string:'WF16F'
//           WF182  codep:0x224c parp:0xf182 size:0x000c C-string:'WF182'
//           WF190  codep:0x224c parp:0xf190 size:0x000b C-string:'WF190'
//           WF19D  codep:0x224c parp:0xf19d size:0x0016 C-string:'WF19D'
//           WF1B5  codep:0x224c parp:0xf1b5 size:0x0009 C-string:'WF1B5'
//           WF1C0  codep:0x224c parp:0xf1c0 size:0x000c C-string:'WF1C0'
//           WF1CE  codep:0x224c parp:0xf1ce size:0x000c C-string:'WF1CE'
//           WF1DC  codep:0x224c parp:0xf1dc size:0x000e C-string:'WF1DC'
//           WF1EC  codep:0x224c parp:0xf1ec size:0x000e C-string:'WF1EC'
//           WF1FC  codep:0x224c parp:0xf1fc size:0x000f C-string:'WF1FC'
//           WF20D  codep:0x224c parp:0xf20d size:0x0014 C-string:'WF20D'
//           WF223  codep:0x224c parp:0xf223 size:0x000c C-string:'WF223'
//           WF231  codep:0x224c parp:0xf231 size:0x0019 C-string:'WF231'
//           WF24C  codep:0x224c parp:0xf24c size:0x0009 C-string:'WF24C'
//           WF257  codep:0x224c parp:0xf257 size:0x0013 C-string:'WF257'
//           WF26C  codep:0x224c parp:0xf26c size:0x0009 C-string:'WF26C'
//           WF277  codep:0x224c parp:0xf277 size:0x000e C-string:'WF277'
//           WF287  codep:0x1d29 parp:0xf287 size:0x0012 C-string:'WF287'
//           WF29B  codep:0x1d29 parp:0xf29b size:0x0030 C-string:'WF29B'
//           WF2CD  codep:0x1d29 parp:0xf2cd size:0x0018 C-string:'WF2CD'
//           WF2E7  codep:0x224c parp:0xf2e7 size:0x0044 C-string:'WF2E7'
//           WF32D  codep:0x224c parp:0xf32d size:0x001c C-string:'WF32D'
//           WF34B  codep:0x224c parp:0xf34b size:0x0053 C-string:'WF34B'
//           WF3A0  codep:0x224c parp:0xf3a0 size:0x0042 C-string:'WF3A0'
//           WF3E4  codep:0x224c parp:0xf3e4 size:0x005b C-string:'WF3E4'
//           WF441  codep:0x224c parp:0xf441 size:0x0017 C-string:'WF441'
//           WF45A  codep:0x224c parp:0xf45a size:0x0033 C-string:'WF45A'
//           WF48F  codep:0x224c parp:0xf48f size:0x0028 C-string:'WF48F'
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
const unsigned short int pp_WEFDB = 0xefdb; // WEFDB size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF032 = 0xf032; // WF032 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF036 = 0xf036; // WF036 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF03A = 0xf03a; // WF03A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF03E = 0xf03e; // WF03E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF042 = 0xf042; // WF042 size: 4
// {0x56, 0x3a, 0x20, 0x4f}

const unsigned short int pp_WF287 = 0xf287; // WF287 size: 18
// {0x88, 0xf0, 0x94, 0xf0, 0xa1, 0xf0, 0xae, 0xf0, 0xbc, 0xf0, 0xc9, 0xf0, 0xd9, 0xf0, 0xe5, 0xf0, 0xf5, 0xf0}

const unsigned short int pp_WF29B = 0xf29b; // WF29B size: 48
// {0x06, 0xf1, 0x11, 0xf1, 0x24, 0xf1, 0x3a, 0xf1, 0x47, 0xf1, 0x54, 0xf1, 0x60, 0xf1, 0x6f, 0xf1, 0x82, 0xf1, 0x90, 0xf1, 0x9d, 0xf1, 0xb5, 0xf1, 0xc0, 0xf1, 0xce, 0xf1, 0xdc, 0xf1, 0xec, 0xf1, 0xfc, 0xf1, 0x0d, 0xf2, 0x23, 0xf2, 0x31, 0xf2, 0x4c, 0xf2, 0x57, 0xf2, 0x6c, 0xf2, 0x77, 0xf2}

const unsigned short int pp_WF2CD = 0xf2cd; // WF2CD size: 24
// {0x0c, 0x0f, 0x1d, 0x01, 0x17, 0x06, 0x0b, 0x25, 0x2b, 0x2a, 0x2e, 0x07, 0x04, 0x12, 0x1e, 0x0e, 0x1b, 0x18, 0x03, 0x10, 0x0a, 0x05, 0x13, 0x02}




// 0xefd2: db 0x57 0x00 'W '

// ================================================
// 0xefd4: WORD 'WEFD6' codep=0x744d parp=0xefd6
// ================================================
IFieldType WEFD6 = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xefd9: WORD 'WEFDB' codep=0x1d29 parp=0xefdb
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
  Push(Read16(0x63ef+WEFD6.offset)&0xFF); // WEFD6<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(0x0080);
  _st_(); // <
  Push(pp_WEFDB); // WEFDB
  Store_3(); // !_3
  Push(Pop() | 0x0080); //  0x0080 OR
  Push(0x63ef+WEFD6.offset); // WEFD6<IFIELD>
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
  Push(0xcc1a); // '>NEST'
  MODULE(); // MODULE
  Push(!Read16(pp_IsAUTO)); // ?AUTO @ NOT
  if (Pop() == 0) return;
  Push(!Pop()); //  NOT
}


// ================================================
// 0xf030: WORD 'WF032' codep=0x1d29 parp=0xf032
// ================================================
// 0xf032: db 0x3a 0x20 ': '

// ================================================
// 0xf034: WORD 'WF036' codep=0x1d29 parp=0xf036
// ================================================
// 0xf036: db 0x3a 0x20 ': '

// ================================================
// 0xf038: WORD 'WF03A' codep=0x1d29 parp=0xf03a
// ================================================
// 0xf03a: db 0x3a 0x20 ': '

// ================================================
// 0xf03c: WORD 'WF03E' codep=0x1d29 parp=0xf03e
// ================================================
// orphan
// 0xf03e: db 0x3a 0x20 ': '

// ================================================
// 0xf040: WORD 'WF042' codep=0x1d29 parp=0xf042
// ================================================
// 0xf042: db 0x56 0x3a 0x20 0x4f 'V: O'

// ================================================
// 0xf046: WORD 'WF048' codep=0x224c parp=0xf048 params=0 returns=1
// ================================================
// orphan

void WF048() // WF048
{
  Push(Read16(pp_WF032)); // WF032 @
  Push(Read16(pp_WF036)); // WF036 @
  _2DUP(); // 2DUP
  _st_(); // <
  if (Pop() != 0)
  {
    _dash_(); // -
    Push(Pop() + 0x0018); //  0x0018 +
  } else
  {
    _dash_(); // -
  }
  Push(Read16(regsp)); // DUP
  Push(Pop() + 1); //  1+
  Push(Pop() * Pop()); // *
  Push(Read16(pp_WF03A)); // WF03A @
  Push(Read16(regsp)); // DUP
  Push(Pop() - 1); //  1-
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Pop() + 0x0025); //  0x0025 +
  Push(0x0133);
  MOD(); // MOD
}


// ================================================
// 0xf086: WORD 'WF088' codep=0x224c parp=0xf088 params=0 returns=2
// ================================================
// orphan

void WF088() // WF088
{
  SET_STR_AS_PARAM("VELOX");
}


// ================================================
// 0xf092: WORD 'WF094' codep=0x224c parp=0xf094 params=0 returns=2
// ================================================
// orphan

void WF094() // WF094
{
  SET_STR_AS_PARAM("THRYNN");
}


// ================================================
// 0xf09f: WORD 'WF0A1' codep=0x224c parp=0xf0a1 params=0 returns=2
// ================================================
// orphan

void WF0A1() // WF0A1
{
  SET_STR_AS_PARAM("ELOWAN");
}


// ================================================
// 0xf0ac: WORD 'WF0AE' codep=0x224c parp=0xf0ae params=0 returns=2
// ================================================
// orphan

void WF0AE() // WF0AE
{
  SET_STR_AS_PARAM("MECHANS");
}


// ================================================
// 0xf0ba: WORD 'WF0BC' codep=0x224c parp=0xf0bc params=0 returns=2
// ================================================
// orphan

void WF0BC() // WF0BC
{
  SET_STR_AS_PARAM("SPEMIN");
}


// ================================================
// 0xf0c7: WORD 'WF0C9' codep=0x224c parp=0xf0c9 params=0 returns=2
// ================================================
// orphan

void WF0C9() // WF0C9
{
  SET_STR_AS_PARAM("GAZURTOID");
}


// ================================================
// 0xf0d7: WORD 'WF0D9' codep=0x224c parp=0xf0d9 params=0 returns=2
// ================================================
// orphan

void WF0D9() // WF0D9
{
  SET_STR_AS_PARAM("UHLEK");
}


// ================================================
// 0xf0e3: WORD 'WF0E5' codep=0x224c parp=0xf0e5 params=0 returns=2
// ================================================
// orphan

void WF0E5() // WF0E5
{
  SET_STR_AS_PARAM("MINSTRELS");
}


// ================================================
// 0xf0f3: WORD 'WF0F5' codep=0x224c parp=0xf0f5 params=0 returns=2
// ================================================
// orphan

void WF0F5() // WF0F5
{
  SET_STR_AS_PARAM("MYSTERIONS");
}


// ================================================
// 0xf104: WORD 'WF106' codep=0x224c parp=0xf106 params=0 returns=2
// ================================================
// orphan

void WF106() // WF106
{
  SET_STR_AS_PARAM("ARTH");
}


// ================================================
// 0xf10f: WORD 'WF111' codep=0x224c parp=0xf111 params=0 returns=2
// ================================================
// orphan

void WF111() // WF111
{
  SET_STR_AS_PARAM("THOSS/ELERAN");
}


// ================================================
// 0xf122: WORD 'WF124' codep=0x224c parp=0xf124 params=0 returns=2
// ================================================
// orphan

void WF124() // WF124
{
  SET_STR_AS_PARAM("HARRISON'S BASE");
}


// ================================================
// 0xf138: WORD 'WF13A' codep=0x224c parp=0xf13a params=0 returns=2
// ================================================
// orphan

void WF13A() // WF13A
{
  SET_STR_AS_PARAM("SPHEXI");
}


// ================================================
// 0xf145: WORD 'WF147' codep=0x224c parp=0xf147 params=0 returns=2
// ================================================
// orphan

void WF147() // WF147
{
  SET_STR_AS_PARAM("SPEWTA");
}


// ================================================
// 0xf152: WORD 'WF154' codep=0x224c parp=0xf154 params=0 returns=2
// ================================================
// orphan

void WF154() // WF154
{
  SET_STR_AS_PARAM("EARTH");
}


// ================================================
// 0xf15e: WORD 'WF160' codep=0x224c parp=0xf160 params=0 returns=2
// ================================================
// orphan

void WF160() // WF160
{
  SET_STR_AS_PARAM("MARDAN 2");
}


// ================================================
// 0xf16d: WORD 'WF16F' codep=0x224c parp=0xf16f params=0 returns=2
// ================================================
// orphan

void WF16F() // WF16F
{
  SET_STR_AS_PARAM("NEW SCOTLAND");
}


// ================================================
// 0xf180: WORD 'WF182' codep=0x224c parp=0xf182 params=0 returns=2
// ================================================
// orphan

void WF182() // WF182
{
  SET_STR_AS_PARAM("KOANN 3");
}


// ================================================
// 0xf18e: WORD 'WF190' codep=0x224c parp=0xf190 params=0 returns=2
// ================================================
// orphan

void WF190() // WF190
{
  SET_STR_AS_PARAM("HEAVEN");
}


// ================================================
// 0xf19b: WORD 'WF19D' codep=0x224c parp=0xf19d params=0 returns=2
// ================================================
// orphan

void WF19D() // WF19D
{
  SET_STR_AS_PARAM("UHLEK BRAIN WORLD");
}


// ================================================
// 0xf1b3: WORD 'WF1B5' codep=0x224c parp=0xf1b5 params=0 returns=2
// ================================================
// orphan

void WF1B5() // WF1B5
{
  SET_STR_AS_PARAM("GAAL");
}


// ================================================
// 0xf1be: WORD 'WF1C0' codep=0x224c parp=0xf1c0 params=0 returns=2
// ================================================
// orphan

void WF1C0() // WF1C0
{
  SET_STR_AS_PARAM("AKTERON");
}


// ================================================
// 0xf1cc: WORD 'WF1CE' codep=0x224c parp=0xf1ce params=0 returns=2
// ================================================
// orphan

void WF1CE() // WF1CE
{
  SET_STR_AS_PARAM("NIRVANA");
}


// ================================================
// 0xf1da: WORD 'WF1DC' codep=0x224c parp=0xf1dc params=0 returns=2
// ================================================
// orphan

void WF1DC() // WF1DC
{
  SET_STR_AS_PARAM("THE STAFF");
}


// ================================================
// 0xf1ea: WORD 'WF1EC' codep=0x224c parp=0xf1ec params=0 returns=2
// ================================================
// orphan

void WF1EC() // WF1EC
{
  SET_STR_AS_PARAM("THE CROSS");
}


// ================================================
// 0xf1fa: WORD 'WF1FC' codep=0x224c parp=0xf1fc params=0 returns=2
// ================================================
// orphan

void WF1FC() // WF1FC
{
  SET_STR_AS_PARAM("PYTHAGORAS");
}


// ================================================
// 0xf20b: WORD 'WF20D' codep=0x224c parp=0xf20d params=0 returns=2
// ================================================
// orphan

void WF20D() // WF20D
{
  SET_STR_AS_PARAM("THE 4 SEEDLINGS");
}


// ================================================
// 0xf221: WORD 'WF223' codep=0x224c parp=0xf223 params=0 returns=2
// ================================================
// orphan

void WF223() // WF223
{
  SET_STR_AS_PARAM("THE AXE");
}


// ================================================
// 0xf22f: WORD 'WF231' codep=0x224c parp=0xf231 params=0 returns=2
// ================================================
// orphan

void WF231() // WF231
{
  SET_STR_AS_PARAM("CITY OF THE ANCIENTS");
}


// ================================================
// 0xf24a: WORD 'WF24C' codep=0x224c parp=0xf24c params=0 returns=2
// ================================================
// orphan

void WF24C() // WF24C
{
  SET_STR_AS_PARAM("MARS");
}


// ================================================
// 0xf255: WORD 'WF257' codep=0x224c parp=0xf257 params=0 returns=2
// ================================================
// orphan

void WF257() // WF257
{
  SET_STR_AS_PARAM("CRYSTAL PLANET");
}


// ================================================
// 0xf26a: WORD 'WF26C' codep=0x224c parp=0xf26c params=0 returns=2
// ================================================
// orphan

void WF26C() // WF26C
{
  SET_STR_AS_PARAM("ELAN");
}


// ================================================
// 0xf275: WORD 'WF277' codep=0x224c parp=0xf277 params=0 returns=2
// ================================================
// orphan

void WF277() // WF277
{
  SET_STR_AS_PARAM("VOTIPUTOX");
}


// ================================================
// 0xf285: WORD 'WF287' codep=0x1d29 parp=0xf287
// ================================================
// 0xf287: db 0x88 0xf0 0x94 0xf0 0xa1 0xf0 0xae 0xf0 0xbc 0xf0 0xc9 0xf0 0xd9 0xf0 0xe5 0xf0 0xf5 0xf0 '                  '

// ================================================
// 0xf299: WORD 'WF29B' codep=0x1d29 parp=0xf29b
// ================================================
// 0xf29b: db 0x06 0xf1 0x11 0xf1 0x24 0xf1 0x3a 0xf1 0x47 0xf1 0x54 0xf1 0x60 0xf1 0x6f 0xf1 0x82 0xf1 0x90 0xf1 0x9d 0xf1 0xb5 0xf1 0xc0 0xf1 0xce 0xf1 0xdc 0xf1 0xec 0xf1 0xfc 0xf1 0x0d 0xf2 0x23 0xf2 0x31 0xf2 0x4c 0xf2 0x57 0xf2 0x6c 0xf2 0x77 0xf2 '    $ : G T ` o                     # 1 L W l w '

// ================================================
// 0xf2cb: WORD 'WF2CD' codep=0x1d29 parp=0xf2cd
// ================================================
// 0xf2cd: db 0x0c 0x0f 0x1d 0x01 0x17 0x06 0x0b 0x25 0x2b 0x2a 0x2e 0x07 0x04 0x12 0x1e 0x0e 0x1b 0x18 0x03 0x10 0x0a 0x05 0x13 0x02 '       %+*.             '

// ================================================
// 0xf2e5: WORD 'WF2E7' codep=0x224c parp=0xf2e7
// ================================================

void WF2E7() // WF2E7
{
  Push(Read16(pp_WF032) * 2 + pp_WF29B); // WF032 @ 2* WF29B +
  GetEXECUTE(); // @EXECUTE
  DrawTTY(); // .TTY
  Push(Read16(Read16(pp_WF036) + pp_WF2CD)&0xFF); // WF036 @ WF2CD + C@
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
  Push(Read16(pp_WF03A) * 2 + pp_WF287); // WF03A @ 2* WF287 +
  GetEXECUTE(); // @EXECUTE
  DrawTTY(); // .TTY
}


// ================================================
// 0xf32b: WORD 'WF32D' codep=0x224c parp=0xf32d
// ================================================

void WF32D() // WF32D
{
  PRINT(" SECURITY CODE FOR:", 19); // (.")
  WF2E7(); // WF2E7
  TTY_dash_SCR(); // TTY-SCR
}


// ================================================
// 0xf349: WORD 'WF34B' codep=0x224c parp=0xf34b params=0 returns=0
// ================================================

void WF34B() // WF34B
{
  unsigned short int i, imax;
  SET_STR_AS_PARAM("CODE: ");
  DrawTTY(); // .TTY
  Push(-1);
  Push(pp__dash_AIN); // -AIN
  Store_3(); // !_3
  Push(0x000a);
  Push(0xbd5b); // 'OV#IN$'
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
    Push(Pop() * 0x000a); //  0x000a *
    Push(Pop() + Pop()); // +
    Push((Read16(i)&0xFF) - 0x0030); // I C@ 0x0030 -
    Push(0);
    D_plus_(); // D+
    i++;
  } while(i<imax); // (LOOP)

  Push(pp_WF042); // WF042
  StoreD(); // D!
}


// ================================================
// 0xf39e: WORD 'WF3A0' codep=0x224c parp=0xf3a0
// ================================================

void WF3A0() // WF3A0
{
  TIME(); // TIME
  Push(Read16(Pop() + 2)); //  2+ @
  Push(pp_GLOBALSEED); // GLOBALSEED
  Store_3(); // !_3
  Push(0);
  Push(0x0018);
  RRND(); // RRND
  Push(pp_WF032); // WF032
  Store_3(); // !_3
  Push(0);
  Push(0x0018);
  RRND(); // RRND
  Push(pp_WF036); // WF036
  Store_3(); // !_3
  Push(0);
  Push(9);
  RRND(); // RRND
  Push(pp_WF03A); // WF03A
  Store_3(); // !_3
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("REQUEST");
  DrawTTY(); // .TTY
  WF32D(); // WF32D
  TTY_dash_SCR(); // TTY-SCR
  WF34B(); // WF34B
}


// ================================================
// 0xf3e2: WORD 'WF3E4' codep=0x224c parp=0xf3e4
// ================================================

void WF3E4() // WF3E4
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("VERIFYING");
  DrawTTY(); // .TTY
  WF32D(); // WF32D
  SET_STR_AS_PARAM("CODE ENTERED: ");
  DrawTTY(); // .TTY
  Push(pp_WF042); // WF042
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
  Push(Pop()==1?1:0); //  1 =
}


// ================================================
// 0xf43f: WORD 'WF441' codep=0x224c parp=0xf441
// ================================================

void WF441() // WF441
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("RE-ENTER");
  DrawTTY(); // .TTY
  WF32D(); // WF32D
  TTY_dash_SCR(); // TTY-SCR
  WF34B(); // WF34B
}


// ================================================
// 0xf458: WORD 'WF45A' codep=0x224c parp=0xf45a params=0 returns=2
// ================================================

void WF45A() // WF45A
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  SET_STR_AS_PARAM("ARE YOU SURE\? BETTER DOUBLE CHECK!");
  DrawTTY(); // .TTY
  Push(0x07d0);
  MS(); // MS
}


// ================================================
// 0xf48d: WORD 'WF48F' codep=0x224c parp=0xf48f
// ================================================

void WF48F() // WF48F
{
  while(1)
  {
    WF3E4(); // WF3E4
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    WF441(); // WF441
  }
  WF048(); // WF048
  Push(pp_WF042); // WF042
  _2_at_(); // 2@
  Push(0x0133);
  U_slash_MOD(); // U/MOD
  Pop(); // DROP
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & !Read16(pp_IsSECURE)); //  ?SECURE @ NOT AND
}


// ================================================
// 0xf4b7: WORD 'STP' codep=0x224c parp=0xf4bf
// ================================================
// entry

void STP() // STP
{
  WF3A0(); // WF3A0
  WF48F(); // WF48F
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  Push(!Read16(pp_IsSECURE)); // ?SECURE @ NOT
  if (Pop() == 0) return;
  WF45A(); // WF45A
  WF48F(); // WF48F
  Push(!Pop()); //  NOT
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
  WF3A0(); // WF3A0
  WF048(); // WF048
  Push(pp_WF042); // WF042
  _2_at_(); // 2@
  Push(0x0133);
  U_slash_MOD(); // U/MOD
  Pop(); // DROP
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(pp_IsSECURE); // ?SECURE
  OFF(); // OFF
  CTERASE(); // CTERASE
  Push(Read16(pp_WEFDB)); // WEFDB @
  if (Pop() == 0) return;
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16(0x63ef+WEFD6.offset)&0xFF) & 0x007f); // WEFD6<IFIELD> C@ 0x007f AND
  Push(0x63ef+WEFD6.offset); // WEFD6<IFIELD>
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
}

// 0xf52e: db 0x53 0x54 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x53 0x54 0x50 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'STP-VOC_________________________ for STP---------- '

