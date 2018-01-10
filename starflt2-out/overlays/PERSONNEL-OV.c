// ====== OVERLAY 'PERSONNEL-OV' ======
// store offset = 0xe3d0
// overlay size   = 0x1190

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe3e6  codep:0x224c parp:0xe3e6 size:0x0006 C-string:'UNK_0xe3e6'
//      UNK_0xe3ee  codep:0x224c parp:0xe3ee size:0x000e C-string:'UNK_0xe3ee'
//      UNK_0xe3fe  codep:0x224c parp:0xe3fe size:0x003a C-string:'UNK_0xe3fe'
//      UNK_0xe43a  codep:0x224c parp:0xe43a size:0x0066 C-string:'UNK_0xe43a'
//      UNK_0xe4a2  codep:0x224c parp:0xe4a2 size:0x0026 C-string:'UNK_0xe4a2'
//      UNK_0xe4ca  codep:0x224c parp:0xe4ca size:0x0008 C-string:'UNK_0xe4ca'
//      UNK_0xe4d4  codep:0x2214 parp:0xe4d4 size:0x0002 C-string:'UNK_0xe4d4'
//      UNK_0xe4d8  codep:0x2214 parp:0xe4d8 size:0x0002 C-string:'UNK_0xe4d8'
//      UNK_0xe4dc  codep:0x2214 parp:0xe4dc size:0x0002 C-string:'UNK_0xe4dc'
//      UNK_0xe4e0  codep:0x224c parp:0xe4e0 size:0x000a C-string:'UNK_0xe4e0'
//      UNK_0xe4ec  codep:0x224c parp:0xe4ec size:0x0008 C-string:'UNK_0xe4ec'
//      UNK_0xe4f6  codep:0x224c parp:0xe4f6 size:0x0008 C-string:'UNK_0xe4f6'
//      UNK_0xe500  codep:0x224c parp:0xe500 size:0x0008 C-string:'UNK_0xe500'
//      UNK_0xe50a  codep:0x224c parp:0xe50a size:0x0008 C-string:'UNK_0xe50a'
//      UNK_0xe514  codep:0x7420 parp:0xe514 size:0x0003 C-string:'UNK_0xe514'
//      UNK_0xe519  codep:0x1d29 parp:0xe519 size:0x000e C-string:'UNK_0xe519'
//      UNK_0xe529  codep:0x224c parp:0xe529 size:0x002c C-string:'UNK_0xe529'
//      UNK_0xe557  codep:0x224c parp:0xe557 size:0x001e C-string:'UNK_0xe557'
//      UNK_0xe577  codep:0x1d29 parp:0xe577 size:0x0008 C-string:'UNK_0xe577'
//      UNK_0xe581  codep:0x224c parp:0xe581 size:0x0038 C-string:'UNK_0xe581'
//      UNK_0xe5bb  codep:0x224c parp:0xe5bb size:0x0016 C-string:'UNK_0xe5bb'
//      UNK_0xe5d3  codep:0x224c parp:0xe5d3 size:0x000c C-string:'UNK_0xe5d3'
//      UNK_0xe5e1  codep:0x224c parp:0xe5e1 size:0x0008 C-string:'UNK_0xe5e1'
//      UNK_0xe5eb  codep:0x224c parp:0xe5eb size:0x0017 C-string:'UNK_0xe5eb'
//      UNK_0xe604  codep:0x224c parp:0xe604 size:0x001a C-string:'UNK_0xe604'
//      UNK_0xe620  codep:0x224c parp:0xe620 size:0x0025 C-string:'UNK_0xe620'
//      UNK_0xe647  codep:0x224c parp:0xe647 size:0x0018 C-string:'UNK_0xe647'
//      UNK_0xe661  codep:0x7394 parp:0xe661 size:0x0006 C-string:'UNK_0xe661'
//      UNK_0xe669  codep:0x7394 parp:0xe669 size:0x0006 C-string:'UNK_0xe669'
//      UNK_0xe671  codep:0x7394 parp:0xe671 size:0x0006 C-string:'UNK_0xe671'
//      UNK_0xe679  codep:0x7394 parp:0xe679 size:0x0006 C-string:'UNK_0xe679'
//      UNK_0xe681  codep:0x7394 parp:0xe681 size:0x0006 C-string:'UNK_0xe681'
//      UNK_0xe689  codep:0x7420 parp:0xe689 size:0x0003 C-string:'UNK_0xe689'
//      UNK_0xe68e  codep:0x7420 parp:0xe68e size:0x0003 C-string:'UNK_0xe68e'
//      UNK_0xe693  codep:0x7420 parp:0xe693 size:0x0003 C-string:'UNK_0xe693'
//      UNK_0xe698  codep:0x7420 parp:0xe698 size:0x0003 C-string:'UNK_0xe698'
//      UNK_0xe69d  codep:0x7420 parp:0xe69d size:0x0003 C-string:'UNK_0xe69d'
//      UNK_0xe6a2  codep:0x7420 parp:0xe6a2 size:0x0003 C-string:'UNK_0xe6a2'
//      UNK_0xe6a7  codep:0x7420 parp:0xe6a7 size:0x0003 C-string:'UNK_0xe6a7'
//      UNK_0xe6ac  codep:0x7420 parp:0xe6ac size:0x0003 C-string:'UNK_0xe6ac'
//      UNK_0xe6b1  codep:0x7394 parp:0xe6b1 size:0x0006 C-string:'UNK_0xe6b1'
//      UNK_0xe6b9  codep:0x7394 parp:0xe6b9 size:0x0006 C-string:'UNK_0xe6b9'
//      UNK_0xe6c1  codep:0x7394 parp:0xe6c1 size:0x0006 C-string:'UNK_0xe6c1'
//      UNK_0xe6c9  codep:0x224c parp:0xe6c9 size:0x0138 C-string:'UNK_0xe6c9'
//      UNK_0xe803  codep:0x224c parp:0xe803 size:0x0022 C-string:'UNK_0xe803'
//      UNK_0xe827  codep:0x224c parp:0xe827 size:0x0038 C-string:'UNK_0xe827'
//      UNK_0xe861  codep:0x1d29 parp:0xe861 size:0x0011 C-string:'UNK_0xe861'
//      UNK_0xe874  codep:0x224c parp:0xe874 size:0x00a5 C-string:'UNK_0xe874'
//      UNK_0xe91b  codep:0x1d29 parp:0xe91b size:0x0002 C-string:'UNK_0xe91b'
//      UNK_0xe91f  codep:0x224c parp:0xe91f size:0x0006 C-string:'UNK_0xe91f'
//      UNK_0xe927  codep:0x224c parp:0xe927 size:0x0118 C-string:'UNK_0xe927'
//      UNK_0xea41  codep:0x224c parp:0xea41 size:0x0040 C-string:'UNK_0xea41'
//      UNK_0xea83  codep:0x224c parp:0xea83 size:0x00ce C-string:'UNK_0xea83'
//      UNK_0xeb53  codep:0x224c parp:0xeb53 size:0x0054 C-string:'UNK_0xeb53'
//      UNK_0xeba9  codep:0x224c parp:0xeba9 size:0x008e C-string:'UNK_0xeba9'
//      UNK_0xec39  codep:0x224c parp:0xec39 size:0x0102 C-string:'UNK_0xec39'
//      UNK_0xed3d  codep:0x224c parp:0xed3d size:0x000c C-string:'UNK_0xed3d'
//      UNK_0xed4b  codep:0x224c parp:0xed4b size:0x0078 C-string:'UNK_0xed4b'
//      UNK_0xedc5  codep:0x224c parp:0xedc5 size:0x002e C-string:'UNK_0xedc5'
//      UNK_0xedf5  codep:0x224c parp:0xedf5 size:0x0020 C-string:'UNK_0xedf5'
//      UNK_0xee17  codep:0x224c parp:0xee17 size:0x0020 C-string:'UNK_0xee17'
//      UNK_0xee39  codep:0x1d29 parp:0xee39 size:0x0002 C-string:'UNK_0xee39'
//      UNK_0xee3d  codep:0x224c parp:0xee3d size:0x00ec C-string:'UNK_0xee3d'
//      UNK_0xef2b  codep:0x224c parp:0xef2b size:0x00ab C-string:'UNK_0xef2b'
//      UNK_0xefd8  codep:0x224c parp:0xefd8 size:0x002c C-string:'UNK_0xefd8'
//      UNK_0xf006  codep:0x224c parp:0xf006 size:0x0024 C-string:'UNK_0xf006'
//      UNK_0xf02c  codep:0x224c parp:0xf02c size:0x0054 C-string:'UNK_0xf02c'
//      UNK_0xf082  codep:0x224c parp:0xf082 size:0x00c5 C-string:'UNK_0xf082'
//      UNK_0xf149  codep:0x224c parp:0xf149 size:0x002c C-string:'UNK_0xf149'
//      UNK_0xf177  codep:0x224c parp:0xf177 size:0x0063 C-string:'UNK_0xf177'
//      UNK_0xf1dc  codep:0x224c parp:0xf1dc size:0x0039 C-string:'UNK_0xf1dc'
//      UNK_0xf217  codep:0x224c parp:0xf217 size:0x0082 C-string:'UNK_0xf217'
//      UNK_0xf29b  codep:0x1d29 parp:0xf29b size:0x0015 C-string:'UNK_0xf29b'
//      UNK_0xf2b2  codep:0x224c parp:0xf2b2 size:0x0010 C-string:'UNK_0xf2b2'
//      UNK_0xf2c4  codep:0x224c parp:0xf2c4 size:0x00a4 C-string:'UNK_0xf2c4'
//      UNK_0xf36a  codep:0x224c parp:0xf36a size:0x0036 C-string:'UNK_0xf36a'
//      UNK_0xf3a2  codep:0x224c parp:0xf3a2 size:0x0042 C-string:'UNK_0xf3a2'
//      UNK_0xf3e6  codep:0x224c parp:0xf3e6 size:0x0010 C-string:'UNK_0xf3e6'
//      UNK_0xf3f8  codep:0x224c parp:0xf3f8 size:0x009c C-string:'UNK_0xf3f8'
//      UNK_0xf496  codep:0x224c parp:0xf496 size:0x0034 C-string:'UNK_0xf496'
//    PFILE-FUNCTI  codep:0x4b3b parp:0xf4db size:0x0014 C-string:'PFILE_dash_FUNCTI'
//       (U-PFILE)  codep:0x224c parp:0xf4fd size:0x0000 C-string:'_ro_U_dash_PFILE_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_XSTART; // XSTART
extern const unsigned short int pp_XEND; // XEND
extern const unsigned short int pp_YLINE; // YLINE
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_NCRS; // NCRS
extern const unsigned short int pp_OCRS; // OCRS
extern const unsigned short int pp__dash_AIN; // -AIN
extern const unsigned short int pp_CRSCOLO; // CRSCOLO
extern const unsigned short int pp_SIL_h_; // SIL^
extern const unsigned short int pp_Is10; // ?10
extern Color BLACK; // BLACK
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_SI; // INST-SI
extern IFieldType INST_dash_SP; // INST-SP
void COUNT(); // COUNT
void MOD(); // MOD
void MIN(); // MIN
void PAD(); // PAD
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void DrawR(); // .R
void D_dot_R(); // D.R
void NOP(); // NOP
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_gt_(); // D>
void DMIN(); // DMIN
void _3_star_(); // 3*
void _gt_FLAG(); // >FLAG
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void _do__eq_(); // $=
void StoreINST_dash_S(); // !INST-S
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void SET_dash_CUR(); // SET-CUR
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void INEXT(); // INEXT
void IPREV(); // IPREV
void PAD_v_16(); // PAD|16
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void GetCOLOR(); // @COLOR
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_3FONT(); // >3FONT
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SC(); // SAVE-SC
void SCR_dash_RES(); // SCR-RES
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void POLY_dash_WI(); // POLY-WI
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void POS_dot_PXT(); // POS.PXT
void CTINIT(); // CTINIT
void IsMRC(); // ?MRC
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void CURSORS(); // CURSORS
void BLD_dash_CRS(); // BLD-CRS
void SET_dash_CRS(); // SET-CRS
void _do__ex_(); // $!
void CMESS(); // CMESS
void _0MESS(); // 0MESS
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_MOD(); // /MOD
void _dash_(); // -
void DNEGATE(); // DNEGATE
void U_star_(); // U*
void U_slash_MOD(); // U/MOD
void _st_(); // <
void _0_st_(); // 0<
void _0_gt_(); // 0>
void TIME(); // TIME
void LCMOVE(); // LCMOVE
void GetDS(); // @DS
void _gt_C(); // >C
void CI(); // CI
void HLINE(); // HLINE
void BLT(); // BLT


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe519 = 0xe519; // UNK_0xe519 size: 14
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x0a, 0x0f, 0x0a, 0x14}

const unsigned short int pp_UNK_0xe577 = 0xe577; // UNK_0xe577 size: 8
// {0x00, 0x18, 0x38, 0x51, 0x7f, 0xa2, 0xb4, 0xce}

const unsigned short int pp_UNK_0xe861 = 0xe861; // UNK_0xe861 size: 17
// {0x03, 0x0a, 0x02, 0x09, 0x29, 0x0a, 0x2c, 0x09, 0x25, 0x0a, 0x52, 0x09, 0x29, 0x0a, 0x7c, 0x09, 0x23}

const unsigned short int pp_UNK_0xe91b = 0xe91b; // UNK_0xe91b size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xee39 = 0xee39; // UNK_0xee39 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf29b = 0xf29b; // UNK_0xf29b size: 21
// {0x04, 0xa5, 0x0d, 0x09, 0x1f, 0x9e, 0x0d, 0x09, 0x2b, 0x97, 0x0d, 0x09, 0x2f, 0x90, 0x0d, 0x09, 0x3b, 0x89, 0x0d, 0x09, 0x23}


const unsigned short int cc_UNK_0xe4d4 = 0xe4d4; // UNK_0xe4d4
const unsigned short int cc_UNK_0xe4d8 = 0xe4d8; // UNK_0xe4d8
const unsigned short int cc_UNK_0xe4dc = 0xe4dc; // UNK_0xe4dc


// 0xe3e2: db 0x19 0x01 '  '

// ================================================
// 0xe3e4: WORD 'UNK_0xe3e6' codep=0x224c parp=0xe3e6
// ================================================

void UNK_0xe3e6() // UNK_0xe3e6
{
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe3ec: WORD 'UNK_0xe3ee' codep=0x224c parp=0xe3ee
// ================================================

void UNK_0xe3ee() // UNK_0xe3ee
{
  SetColor(WHITE);
  SetColor(RED);
  SetColor(RED);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
}


// ================================================
// 0xe3fc: WORD 'UNK_0xe3fe' codep=0x224c parp=0xe3fe params=0 returns=1
// ================================================

void UNK_0xe3fe() // UNK_0xe3fe
{
  unsigned short int i, imax;
  Push(Read16(cc_TRUE)); // TRUE
  Push2Words("*ASSIGN");
  _gt_C_plus_S(); // >C+S
  Push((0x65e1+INST_dash_SI.offset) + 0x0011); // INST-SI<IFIELD> 0x0011 +
  Push(6);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _3_star_(); // 3*
    OVER(); // OVER
    Push(Pop() + Pop()); // +
    Get_gt_C_plus_S(); // @>C+S
    Push(6);
    _eq_SPECIE(); // =SPECIE
    ICLOSE(); // ICLOSE
    if (Pop() != 0)
    {
      SWAP(); // SWAP
      if (Pop() == 0) Push(1); else Push(0); // NOT
      SWAP(); // SWAP
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe438: WORD 'UNK_0xe43a' codep=0x224c parp=0xe43a
// ================================================

void UNK_0xe43a() // UNK_0xe43a
{
  unsigned short int i, imax, j, jmax;
  GetCOLOR(); // @COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  StoreCOLOR(); // !COLOR
  PAD_v_16(); // PAD|16
  Push(6);
  Push(Pop() + Pop()); // +
  PAD_v_16(); // PAD|16
  Push(4);
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_YBLT)); // YBLT @
    Push(i); // I
    _dash_(); // -
    Push(pp_YLINE); // YLINE
    Store_2(); // !_2
    Push(Read16(regsp)); // DUP
    Push(Read8(Pop())&0xFF); // C@
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(0);

      j = Pop();
      jmax = Pop();
      do // (DO)
      {
        Push(Read16(regsp)); // DUP
        Push(Pop()+1); // 1+
        Push(Read8(Pop())&0xFF); // C@
        Push(Read16(pp_XBLT)); // XBLT @
        Push(Pop() + Pop()); // +
        Push(pp_XSTART); // XSTART
        Store_2(); // !_2
        Push(Read16(regsp)); // DUP
        Push(Pop()+2); // 2+
        Push(Read8(Pop())&0xFF); // C@
        Push(Read16(pp_XBLT)); // XBLT @
        Push(Pop() + Pop()); // +
        Push(pp_XEND); // XEND
        Store_2(); // !_2
        HLINE(); // HLINE
        Push(Pop()+2); // 2+
        j++;
      } while(j<jmax); // (LOOP)

    }
    Push(Pop()+1); // 1+
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe4a0: WORD 'UNK_0xe4a2' codep=0x224c parp=0xe4a2 params=0 returns=0
// ================================================

void UNK_0xe4a2() // UNK_0xe4a2
{
  Push(0xb6fd); // probable 'OV#IN$'
  MODULE(); // MODULE
}

// 0xe4aa: db 0x4c 0x22 0x5d 0x17 0x0e 0xb7 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x1f 0xb7 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x30 0xb7 0xd9 0x84 0x90 0x16 'L"]       L"]       L"] 0     '

// ================================================
// 0xe4c8: WORD 'UNK_0xe4ca' codep=0x224c parp=0xe4ca params=0 returns=0
// ================================================

void UNK_0xe4ca() // UNK_0xe4ca
{
  Push(0xb752); // probable 'OVTRIM_1'
  MODULE(); // MODULE
}


// ================================================
// 0xe4d2: WORD 'UNK_0xe4d4' codep=0x2214 parp=0xe4d4
// ================================================
// 0xe4d4: dw 0x0005

// ================================================
// 0xe4d6: WORD 'UNK_0xe4d8' codep=0x2214 parp=0xe4d8
// ================================================
// 0xe4d8: dw 0x0003

// ================================================
// 0xe4da: WORD 'UNK_0xe4dc' codep=0x2214 parp=0xe4dc
// ================================================
// 0xe4dc: dw 0x0004

// ================================================
// 0xe4de: WORD 'UNK_0xe4e0' codep=0x224c parp=0xe4e0
// ================================================

void UNK_0xe4e0() // UNK_0xe4e0
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
}


// ================================================
// 0xe4ea: WORD 'UNK_0xe4ec' codep=0x224c parp=0xe4ec params=0 returns=0
// ================================================

void UNK_0xe4ec() // UNK_0xe4ec
{
  Push(0xc261); // probable 'OVINIT-_1'
  MODULE(); // MODULE
}


// ================================================
// 0xe4f4: WORD 'UNK_0xe4f6' codep=0x224c parp=0xe4f6 params=0 returns=0
// ================================================

void UNK_0xe4f6() // UNK_0xe4f6
{
  Push(0xc273); // probable 'OVTRANS'
  MODULE(); // MODULE
}


// ================================================
// 0xe4fe: WORD 'UNK_0xe500' codep=0x224c parp=0xe500 params=0 returns=0
// ================================================

void UNK_0xe500() // UNK_0xe500
{
  Push(0xc285); // probable 'OVD@BAL'
  MODULE(); // MODULE
}


// ================================================
// 0xe508: WORD 'UNK_0xe50a' codep=0x224c parp=0xe50a params=0 returns=0
// ================================================

void UNK_0xe50a() // UNK_0xe50a
{
  Push(0xc2a9); // probable 'OV?BALA'
  MODULE(); // MODULE
}


// ================================================
// 0xe512: WORD 'UNK_0xe514' codep=0x7420 parp=0xe514
// ================================================
IFieldType UNK_0xe514 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xe517: WORD 'UNK_0xe519' codep=0x1d29 parp=0xe519
// ================================================
// 0xe519: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x14 0x00 0x0a 0x0f 0x0a 0x14 '              '

// ================================================
// 0xe527: WORD 'UNK_0xe529' codep=0x224c parp=0xe529 params=1 returns=1
// ================================================

void UNK_0xe529() // UNK_0xe529
{
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe519); // UNK_0xe519
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xe519); // UNK_0xe519
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(-Pop()); // NEGATE
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
}

// 0xe549: db 0x4c 0x22 0xdb 0x23 0x5d 0x17 0x80 0x00 0x72 0x0f 0x90 0x16 'L" #]   r   '

// ================================================
// 0xe555: WORD 'UNK_0xe557' codep=0x224c parp=0xe557 params=1 returns=1
// ================================================

void UNK_0xe557() // UNK_0xe557
{
  PAD(); // PAD
  _do__ex_(); // $!
  PAD(); // PAD
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
  OVER(); // OVER
  Push(Pop()-1); // 1-
  C_ex__2(); // C!_2
  Push(Pop()-1); // 1-
}

// 0xe56b: db 0x4c 0x22 0x87 0x3b 0x46 0x5a 0x23 0x6d 0x90 0x16 'L" ;FZ#m  '

// ================================================
// 0xe575: WORD 'UNK_0xe577' codep=0x1d29 parp=0xe577
// ================================================
// 0xe577: db 0x00 0x18 0x38 0x51 0x7f 0xa2 0xb4 0xce '  8Q   '

// ================================================
// 0xe57f: WORD 'UNK_0xe581' codep=0x224c parp=0xe581 params=1 returns=0
// ================================================

void UNK_0xe581() // UNK_0xe581
{
  unsigned short int a;
  Push(pp_UNK_0xe577); // UNK_0xe577
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(Read16(pp_SIL_h_)); // SIL^ @
  Push(Read16(a)); // R@
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(0);
  GetDS(); // @DS
  PAD_v_16(); // PAD|16
  Push(Read16(a)); // R@
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(a); // R>
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
  Push(Pop()<<4); // 16*
  LCMOVE(); // LCMOVE
}

// 0xe5a9: db 0x4c 0x22 0x97 0x49 0x5d 0x17 0x0d 0x00 0x5f 0x12 0xfa 0x15 0xf6 0xff 0x90 0x16 'L" I]   _       '

// ================================================
// 0xe5b9: WORD 'UNK_0xe5bb' codep=0x224c parp=0xe5bb params=0 returns=1
// ================================================

void UNK_0xe5bb() // UNK_0xe5bb
{
  Push(Read16(0x65e1+UNK_0xe514.offset)&0xFF); // UNK_0xe514<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(2);
  Push(Pop() & Pop()); // AND
  _gt_FLAG(); // >FLAG
  SWAP(); // SWAP
  Push(1);
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe5d1: WORD 'UNK_0xe5d3' codep=0x224c parp=0xe5d3 params=0 returns=1
// ================================================

void UNK_0xe5d3() // UNK_0xe5d3
{
  Push((Read16(0x65e1+UNK_0xe514.offset)&0xFF) & 0x0010); // UNK_0xe514<IFIELD> C@ 0x0010 AND
}


// ================================================
// 0xe5df: WORD 'UNK_0xe5e1' codep=0x224c parp=0xe5e1 params=0 returns=1
// ================================================

void UNK_0xe5e1() // UNK_0xe5e1
{
  UNK_0xe5bb(); // UNK_0xe5bb
  UNK_0xe5d3(); // UNK_0xe5d3
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe5e9: WORD 'UNK_0xe5eb' codep=0x224c parp=0xe5eb params=0 returns=0
// ================================================

void UNK_0xe5eb() // UNK_0xe5eb
{
  PRINT("AND PRESS SPACEBAR", 18); // (.")
}


// ================================================
// 0xe602: WORD 'UNK_0xe604' codep=0x224c parp=0xe604 params=0 returns=0
// ================================================

void UNK_0xe604() // UNK_0xe604
{
  PRINT("PAGE THROUGH FILES ^\\", 21); // (.")
}


// ================================================
// 0xe61e: WORD 'UNK_0xe620' codep=0x224c parp=0xe620
// ================================================

void UNK_0xe620() // UNK_0xe620
{
  Push(Read16(regsp)); // DUP
  _0MESS(); // 0MESS
  Push(0x0025);
  CMESS(); // CMESS
  PRINT("SELECT OPTIONS [] ", 18); // (.")
  UNK_0xe5eb(); // UNK_0xe5eb
  StoreCRS(); // !CRS
}


// ================================================
// 0xe645: WORD 'UNK_0xe647' codep=0x224c parp=0xe647
// ================================================

void UNK_0xe647() // UNK_0xe647
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe65f: WORD 'UNK_0xe661' codep=0x7394 parp=0xe661
// ================================================
LoadDataType UNK_0xe661 = {CREWMEMBERIDX, 0x00, 0x08, 0x14, 0x6ac8};

// ================================================
// 0xe667: WORD 'UNK_0xe669' codep=0x7394 parp=0xe669
// ================================================
LoadDataType UNK_0xe669 = {CREWMEMBERIDX, 0x08, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe66f: WORD 'UNK_0xe671' codep=0x7394 parp=0xe671
// ================================================
LoadDataType UNK_0xe671 = {CREWMEMBERIDX, 0x0d, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe677: WORD 'UNK_0xe679' codep=0x7394 parp=0xe679
// ================================================
LoadDataType UNK_0xe679 = {CREWMEMBERIDX, 0x12, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe67f: WORD 'UNK_0xe681' codep=0x7394 parp=0xe681
// ================================================
LoadDataType UNK_0xe681 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe687: WORD 'UNK_0xe689' codep=0x7420 parp=0xe689
// ================================================
IFieldType UNK_0xe689 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe68c: WORD 'UNK_0xe68e' codep=0x7420 parp=0xe68e
// ================================================
IFieldType UNK_0xe68e = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xe691: WORD 'UNK_0xe693' codep=0x7420 parp=0xe693
// ================================================
IFieldType UNK_0xe693 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xe696: WORD 'UNK_0xe698' codep=0x7420 parp=0xe698
// ================================================
IFieldType UNK_0xe698 = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xe69b: WORD 'UNK_0xe69d' codep=0x7420 parp=0xe69d
// ================================================
IFieldType UNK_0xe69d = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xe6a0: WORD 'UNK_0xe6a2' codep=0x7420 parp=0xe6a2
// ================================================
IFieldType UNK_0xe6a2 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xe6a5: WORD 'UNK_0xe6a7' codep=0x7420 parp=0xe6a7
// ================================================
IFieldType UNK_0xe6a7 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe6aa: WORD 'UNK_0xe6ac' codep=0x7420 parp=0xe6ac
// ================================================
IFieldType UNK_0xe6ac = {CREWMEMBERIDX, 0x22, 0x01};

// ================================================
// 0xe6af: WORD 'UNK_0xe6b1' codep=0x7394 parp=0xe6b1
// ================================================
LoadDataType UNK_0xe6b1 = {PSTATSIDX, 0x00, 0x09, 0x0b, 0x90d6};

// ================================================
// 0xe6b7: WORD 'UNK_0xe6b9' codep=0x7394 parp=0xe6b9
// ================================================
LoadDataType UNK_0xe6b9 = {PSTATSIDX, 0x09, 0x01, 0x0b, 0x90d6};

// ================================================
// 0xe6bf: WORD 'UNK_0xe6c1' codep=0x7394 parp=0xe6c1
// ================================================
LoadDataType UNK_0xe6c1 = {PSTATSIDX, 0x0a, 0x01, 0x0b, 0x90d6};

// ================================================
// 0xe6c7: WORD 'UNK_0xe6c9' codep=0x224c parp=0xe6c9
// ================================================

void UNK_0xe6c9() // UNK_0xe6c9
{
  unsigned short int i, imax;
  Push(0x00c3);
  Push(1);
  Push(0x001c);
  Push(0x0043);
  SetColor(GREY1);
  POLY_dash_WI(); // POLY-WI
  Push(0x00b6);
  Push(0x0044);
  Push(0x001c);
  Push(0x009d);
  SetColor(GREY1);
  POLY_dash_WI(); // POLY-WI
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor(WHITE);
  SetColor(RED);
  SetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(Pop()+1); // 1+
    Push(0x001c);
    OVER(); // OVER
    Push(0x00c3);
    LLINE(); // LLINE
    Push(0x009d);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x001c);
    OVER(); // OVER
    Push(0x00b6);
    LLINE(); // LLINE
    Push(3);
    Push(0x001a);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x009c);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x0044);
    Push(0x00b7);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x009c);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(3);
    Push(0x00c4);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x0041);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x0042);
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x00b9);
    OVER(); // OVER
    Push(0x00c3);
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(0x004e);
  Push(0x00c5);
  SetColor(DK_dash_BLUE);
  Draw1LOGO(); // .1LOGO
  _gt_3FONT(); // >3FONT
  Push(0x005f);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("PERSONNEL", 9); // (.")
  SetColor(BLACK);
  SetColor(BLACK);
  SetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x000a);
  Push(0x00bd);
  POS_dot_(); // POS.
  PRINT("FILE#", 5); // (.")
  SetColor(WHITE);
  SetColor(RED);
  SetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(2);
  Push(0x001c);
  Push(Read16(cc_UNK_0xe4d8)); // UNK_0xe4d8
  Push(2);
  Push(0x00c4);
  Push(Read16(cc_UNK_0xe4dc)); // UNK_0xe4dc
  Push(0x0041);
  Push(0x00c4);
  Push(Read16(cc_UNK_0xe4d8)); // UNK_0xe4d8
  Push(0x009c);
  Push(0x001c);
  Push(Read16(cc_UNK_0xe4dc)); // UNK_0xe4dc
  Push(0x009c);
  Push(0x00b7);
  Push(Read16(cc_UNK_0xe4d8)); // UNK_0xe4d8
  Push(0x0043);
  Push(0x00b9);
  Push(Read16(cc_UNK_0xe4d8)); // UNK_0xe4d8
  Push(6);
  UNK_0xe4ca(); // UNK_0xe4ca
}


// ================================================
// 0xe801: WORD 'UNK_0xe803' codep=0x224c parp=0xe803 params=0 returns=1
// ================================================

void UNK_0xe803() // UNK_0xe803
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0);

  label2:
  IsLAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  Push(Read16(0x65e1+UNK_0xe514.offset)&0xFF); // UNK_0xe514<IFIELD> C@
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xe825: WORD 'UNK_0xe827' codep=0x224c parp=0xe827 params=1 returns=0
// ================================================

void UNK_0xe827() // UNK_0xe827
{
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(Read16(0x65e1+UNK_0xe6ac.offset)&0xFF); // UNK_0xe6ac<IFIELD> C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    IPREV(); // IPREV
    return;
  }
  _0_gt_(); // 0>
  Push(Read16(0x65e1+UNK_0xe514.offset)&0xFF); // UNK_0xe514<IFIELD> C@
  UNK_0xe803(); // UNK_0xe803
  Push(Pop() | Pop()); // OR
  Push(Read16(0x65e1+UNK_0xe6ac.offset)&0xFF); // UNK_0xe6ac<IFIELD> C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xe85f: WORD 'UNK_0xe861' codep=0x1d29 parp=0xe861
// ================================================
// 0xe861: db 0x03 0x0a 0x02 0x09 0x29 0x0a 0x2c 0x09 0x25 0x0a 0x52 0x09 0x29 0x0a 0x7c 0x09 0x23 '    ) , % R ) | #'

// ================================================
// 0xe872: WORD 'UNK_0xe874' codep=0x224c parp=0xe874
// ================================================

void UNK_0xe874() // UNK_0xe874
{
  CTINIT(); // CTINIT
  Push(0x009f);
  Push(1);
  Push(1);
  Push(1);
  LLINE(); // LLINE
  Push(0x009f);
  Push(0x000b);
  Push(1);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(1);
  Push(1);
  Push(1);
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x002b);
  Push(1);
  Push(0x002b);
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x0051);
  Push(1);
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x007b);
  Push(1);
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x009f);
  Push(1);
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x000b);
  Push(8);
  POS_dot_(); // POS.
  PRINT("CREATE", 6); // (.")
  Push(0x0035);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("TRAIN", 5); // (.")
  Push(0x005b);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("DELETE", 6); // (.")
  Push(0x0085);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe919: WORD 'UNK_0xe91b' codep=0x1d29 parp=0xe91b
// ================================================
// 0xe91b: db 0x3a 0x20 ': '

// ================================================
// 0xe91d: WORD 'UNK_0xe91f' codep=0x224c parp=0xe91f params=3 returns=0
// ================================================

void UNK_0xe91f() // UNK_0xe91f
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xe925: WORD 'UNK_0xe927' codep=0x224c parp=0xe927
// ================================================

void UNK_0xe927() // UNK_0xe927
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(pp_UNK_0xe91b); // UNK_0xe91b
  Store_2(); // !_2
  CTINIT(); // CTINIT
  SetColor(BLACK);
  SetColor(BLACK);
  SetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x000a);
  Push(0x0029);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(6);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  Push(a); // R>
  UNK_0xe91f(); // UNK_0xe91f
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xea3f: WORD 'UNK_0xea41' codep=0x224c parp=0xea41 params=0 returns=0
// ================================================

void UNK_0xea41() // UNK_0xea41
{
  UNK_0xe5e1(); // UNK_0xe5e1
  if (Pop() == 0) return;
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _gt_3FONT(); // >3FONT
  Push(0x000a);
  Push(0x0032);
  POS_dot_(); // POS.
  UNK_0xe5bb(); // UNK_0xe5bb
  if (Pop() != 0)
  {
    SetColor(RED);
    StoreCOLOR(); // !COLOR
    PRINT("DEAD", 4); // (.")
  } else
  {
    SetColor(BLUE);
    StoreCOLOR(); // !COLOR
    PRINT("COMATOSE", 8); // (.")
  }
  StoreCRS(); // !CRS
}


// ================================================
// 0xea81: WORD 'UNK_0xea83' codep=0x224c parp=0xea83
// ================================================

void UNK_0xea83() // UNK_0xea83
{
  unsigned short int a;
  Push(Read16(pp_UNK_0xe91b)); // UNK_0xe91b @
  a = Pop(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  CTINIT(); // CTINIT
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    UNK_0xe3e6(); // UNK_0xe3e6
  }
  Push(0x65e1+UNK_0xe689.offset); // UNK_0xe689<IFIELD>
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() != 0)
  {
    _do__dot_(); // $.
  } else
  {
    Pop(); // DROP
  }
  Push(0x007a);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(Read16(0x65e1+UNK_0xe6a7.offset)&0xFF); // UNK_0xe6a7<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  Push(Read16(0x65e1+UNK_0xe68e.offset)&0xFF); // UNK_0xe68e<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(UNK_0xe661); // from 'CREWMEMBER'
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  Push(Read16(0x65e1+UNK_0xe693.offset)&0xFF); // UNK_0xe693<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  Push(Read16(0x65e1+UNK_0xe698.offset)&0xFF); // UNK_0xe698<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(UNK_0xe681); // from 'CREWMEMBER'
  Push(Read8(Pop())&0xFF); // C@
  Push(2);
  DrawR(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(a); // I
  UNK_0xe91f(); // UNK_0xe91f
  Push(Read16(0x65e1+UNK_0xe69d.offset)&0xFF); // UNK_0xe69d<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(6);
  Push(a); // R>
  UNK_0xe91f(); // UNK_0xe91f
  Push(Read16(0x65e1+UNK_0xe6a2.offset)&0xFF); // UNK_0xe6a2<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(UNK_0xe679); // from 'CREWMEMBER'
  Push(Read8(Pop())&0xFF); // C@
  Push(2);
  DrawR(); // .R
}


// ================================================
// 0xeb51: WORD 'UNK_0xeb53' codep=0x224c parp=0xeb53
// ================================================

void UNK_0xeb53() // UNK_0xeb53
{
  UNK_0xe581(); // UNK_0xe581
  Push(0x00c8);
  Push(0x0080);
  POS_dot_(); // POS.
  UNK_0xe529(); // UNK_0xe529
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  UNK_0xe43a(); // UNK_0xe43a
  UNK_0xe5e1(); // UNK_0xe5e1
  if (Pop() == 0) return;
  GetCRS(); // @CRS
  UNK_0xe5bb(); // UNK_0xe5bb
  if (Pop() != 0)
  {
    SetColor(RED);
  } else
  {
    SetColor(BLUE);
  }
  StoreCOLOR(); // !COLOR
  Push(0x0064);
  Push(0x0080);
  Push(0x0099);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x0064);
  Push(0x001e);
  Push(0x0099);
  Push(0x0080);
  LLINE(); // LLINE
  StoreCRS(); // !CRS
}


// ================================================
// 0xeba7: WORD 'UNK_0xeba9' codep=0x224c parp=0xeba9
// ================================================

void UNK_0xeba9() // UNK_0xeba9
{
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  Push(0x0087);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  SetColor(BLACK);
  SetColor(BLACK);
  SetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x000a);
  Push(0x005c);
  POS_dot_(); // POS.
  PRINT("TYPE    : ", 10); // (.")
  LoadData(UNK_0xe6b1); // from 'PSTATS'
  Push(9);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x000a);
  Push(0x0050);
  POS_dot_(); // POS.
  PRINT("AVG. HT.: ", 10); // (.")
  LoadData(UNK_0xe6b9); // from 'PSTATS'
  Push(Read8(Pop())&0xFF); // C@
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0);
  DrawR(); // .R
  PRINT(".", 1); // (.")
  Draw(); // .
  PRINT("M", 1); // (.")
  Push(0x000a);
  Push(0x0044);
  POS_dot_(); // POS.
  PRINT("AVG. WT.: ", 10); // (.")
  LoadData(UNK_0xe6c1); // from 'PSTATS'
  Push(Read8(Pop())&0xFF); // C@
  Draw(); // .
  PRINT("KG", 2); // (.")
  StoreCRS(); // !CRS
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xec37: WORD 'UNK_0xec39' codep=0x224c parp=0xec39
// ================================================

void UNK_0xec39() // UNK_0xec39
{
  unsigned short int a, i, imax;
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  GetCRS(); // @CRS
  Push(0x0080);
  Push(5);
  Push(0x001e);
  Push(0x0099);
  SetColor(GREY1);
  POLY_dash_WI(); // POLY-WI
  Push(Read16(pp_UNK_0xe91b)); // UNK_0xe91b @
  a = Pop(); // >R
  Push(0x000e);
  SetColor(GREY1);
  Push(0x0030);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x000a);
  POS_dot_PXT(); // POS.PXT
  Push(3);
  SetColor(GREY1);
  Push(0x0030);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x007a);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(3);
    SetColor(GREY1);
    Push(i); // I
    Push(7);
    Push(Pop() * Pop()); // *
    Push(6);
    Push(Pop() + Pop()); // +
    Push(a); // J
    Push(Pop() + Pop()); // +
    Push(0x004a);
    POS_dot_PXT(); // POS.PXT
    Push(2);
    Push(i); // I
    Push(4);
    Push((Pop()==Pop())?1:0); // =
    Push(5);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    SetColor(GREY1);
    Push(i); // I
    Push(7);
    Push(Pop() * Pop()); // *
    Push(6);
    Push(Pop() + Pop()); // +
    Push(a); // J
    Push(Pop() + Pop()); // +
    Push(0x008d);
    Push(i); // I
    Push(4);
    Push((Pop()==Pop())?1:0); // =
    Push(0xffea);
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    POS_dot_PXT(); // POS.PXT
    i++;
  } while(i<imax); // (LOOP)

  Push(2);
  SetColor(GREY1);
  Push(0x003d);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x0028);
  POS_dot_PXT(); // POS.PXT
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    UNK_0xe3e6(); // UNK_0xe3e6
  }
  Push(0x0028);
  Push(0x003d);
  Push(a); // R>
  UNK_0xe91f(); // UNK_0xe91f
  Push((Read16(0x65e1+UNK_0xe6ac.offset)&0xFF) + 1); // UNK_0xe6ac<IFIELD> C@ 1+
  Push(2);
  DrawR(); // .R
  Push(Read16(0x65e1+UNK_0xe514.offset) & 1); // UNK_0xe514<IFIELD> @ 1 AND
  if (Pop() != 0)
  {
    Push(0x0080);
    Push(0x0064);
    Push(0x001e);
    Push(0x0099);
    SetColor(GREY1);
    POLY_dash_WI(); // POLY-WI
    GetINST_dash_S(); // @INST-S
    Push(Read16(regsp)); // DUP
    UNK_0xeb53(); // UNK_0xeb53
    UNK_0xeba9(); // UNK_0xeba9
    UNK_0xea83(); // UNK_0xea83
  }
  UNK_0xea41(); // UNK_0xea41
  StoreCRS(); // !CRS
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xed3b: WORD 'UNK_0xed3d' codep=0x224c parp=0xed3d params=1 returns=0
// ================================================

void UNK_0xed3d() // UNK_0xed3d
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  UNK_0xe827(); // UNK_0xe827
  UNK_0xec39(); // UNK_0xec39
}


// ================================================
// 0xed49: WORD 'UNK_0xed4b' codep=0x224c parp=0xed4b
// ================================================

void UNK_0xed4b() // UNK_0xed4b
{
  unsigned short int a;
  Push(Read16(pp_NCRS)); // NCRS @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(cc_UNK_0xe4d4) - 1); // UNK_0xe4d4 1-
  } else
  {
    Push(Read16(cc_UNK_0xe4d4)); // UNK_0xe4d4
    MOD(); // MOD
  }
  a = Pop(); // >R
  Push(a); // I
  Push(pp_OCRS); // OCRS
  Store_2(); // !_2
  Push(a); // I
  Push(pp_NCRS); // NCRS
  Store_2(); // !_2
  SetColor(GREY1);
  SetColor(RED);
  SetColor(RED);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(a); // I
  Push(0x65e1+INST_dash_SP.offset); // INST-SP<IFIELD>
  Store_2(); // !_2
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  LoadData(UNK_0xe669); // from 'CREWMEMBER'
  Push(0x65e1+UNK_0xe68e.offset); // UNK_0xe68e<IFIELD>
  Push(5);
  CMOVE_2(); // CMOVE_2
  Push(1);
  Push(0x65e1+UNK_0xe514.offset); // UNK_0xe514<IFIELD>
  Store_2(); // !_2
  Push(0x0064);
  Push(0x65e1+UNK_0xe6a7.offset); // UNK_0xe6a7<IFIELD>
  C_ex__2(); // C!_2
  Push(Read16(pp_XORMODE)); // XORMODE @
  if (Pop() != 0)
  {
    BLT(); // BLT
  }
  UNK_0xec39(); // UNK_0xec39
  LoadData(UNK_0xe661); // from 'CREWMEMBER'
  Push(Read8(Pop())&0xFF); // C@
  Push(4);
  Push(Pop() * Pop()); // *
  Push(4);
  Push(Pop() + Pop()); // +
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
}


// ================================================
// 0xedc3: WORD 'UNK_0xedc5' codep=0x224c parp=0xedc5
// ================================================

void UNK_0xedc5() // UNK_0xedc5
{
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Push(Read16(pp_NCRS)); // NCRS @
    Push(Read16(pp_OCRS)); // OCRS @
    Push((Pop()==Pop())?1:0); // =
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      UNK_0xed4b(); // UNK_0xed4b
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  BLT(); // BLT
  Push(Read16(regsp)); // DUP
  Push(pp_NCRS); // NCRS
  Store_2(); // !_2
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xedf3: WORD 'UNK_0xedf5' codep=0x224c parp=0xedf5 params=0 returns=0
// ================================================

void UNK_0xedf5() // UNK_0xedf5
{
  PRINT("TYPE THIS CREWMEMBER'S NAME", 27); // (.")
}


// ================================================
// 0xee15: WORD 'UNK_0xee17' codep=0x224c parp=0xee17
// ================================================

void UNK_0xee17() // UNK_0xee17
{
  TIME(); // TIME
  _2_at_(); // 2@
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_dash_(); // D-
    Push(0x0dac); Push(0x0000);
    D_gt_(); // D>
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xee37: WORD 'UNK_0xee39' codep=0x1d29 parp=0xee39
// ================================================
// 0xee39: db 0x3a 0x20 ': '

// ================================================
// 0xee3b: WORD 'UNK_0xee3d' codep=0x224c parp=0xee3d
// ================================================

void UNK_0xee3d() // UNK_0xee3d
{
  unsigned short int a, i, imax;
  LoadData(UNK_0xe671); // from 'CREWMEMBER'
  Push(Read16(pp_OCRS)); // OCRS @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16((0x65e1+UNK_0xe68e.offset) + Read16(pp_OCRS))&0xFF); // UNK_0xe68e<IFIELD> OCRS @ + C@
  _dash_(); // -
  LoadData(UNK_0xe679); // from 'CREWMEMBER'
  Push(Read8(Pop())&0xFF); // C@
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  UNK_0xe500(); // UNK_0xe500
  Push(0x86a0); Push(0x0001);
  DMIN(); // DMIN
  Push(0x012c);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  MIN(); // MIN
  Push(pp_UNK_0xee39); // UNK_0xee39
  Store_2(); // !_2
  UNK_0xe4e0(); // UNK_0xe4e0
  Push(0);
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("BALANCE:", 8); // (.")
  UNK_0xe500(); // UNK_0xe500
  Push(7);
  D_dot_R(); // D.R
  PRINT(" COST: 300 SP/SESSION", 21); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("HOW MANY TRAINING SESSIONS (0-", 30); // (.")
  Push(Read16(pp_UNK_0xee39)); // UNK_0xee39 @
  Push(0);
  DrawR(); // .R
  PRINT(")\? ", 3); // (.")
  SetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(-1);
  Push(pp__dash_AIN); // -AIN
  Store_2(); // !_2
  Push(3);
  UNK_0xe4a2(); // UNK_0xe4a2
  a = Pop(); // >R
  StoreCRS(); // !CRS
  Push(a); // R>
  Push(0);
  SWAP(); // SWAP
  COUNT(); // COUNT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x000a);
    Push(Pop() * Pop()); // *
    Push(i); // I
    Push(Read8(Pop())&0xFF); // C@
    Push(0x0030);
    _dash_(); // -
    Push(Pop() + Pop()); // +
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_UNK_0xee39)); // UNK_0xee39 @
  MIN(); // MIN
  Push(pp_UNK_0xee39); // UNK_0xee39
  Store_2(); // !_2
}


// ================================================
// 0xef29: WORD 'UNK_0xef2b' codep=0x224c parp=0xef2b
// ================================================

void UNK_0xef2b() // UNK_0xef2b
{
  Push(0);
  _0MESS(); // 0MESS
  Push(0);
  Push(0x001c);
  CMESS(); // CMESS
  PRINT("THIS NAME IS ALREADY ON FILE", 28); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0024);
  CMESS(); // CMESS
  PRINT("[ CHOOSE ANOTHER OR CANCEL CREATION ]", 37); // (.")
  StoreCRS(); // !CRS
  do
  {
    XYSCAN(); // XYSCAN
    SWAP(); // SWAP
    Pop(); // DROP
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  } while(Pop() == 0);
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(0);
    Push(0x001c);
    CMESS(); // CMESS
    PRINT("RE-", 3); // (.")
    UNK_0xedf5(); // UNK_0xedf5
    StoreCRS(); // !CRS
    Push(0);
  } else
  {
    Push(0x65e1+UNK_0xe514.offset); // UNK_0xe514<IFIELD>
    _099(); // 099
    UNK_0xec39(); // UNK_0xec39
    Push(1);
  }
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  SetColor(GREY1);
  StoreCOLOR(); // !COLOR
  BLT(); // BLT
  StoreCRS(); // !CRS
  BLT(); // BLT
}


// ================================================
// 0xefd6: WORD 'UNK_0xefd8' codep=0x224c parp=0xefd8 params=0 returns=1
// ================================================

void UNK_0xefd8() // UNK_0xefd8
{
  unsigned short int i, imax;
  CI(); // CI
  _gt_C(); // >C
  Push(1);
  Push(0x0019);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x65e1+UNK_0xe689.offset); // UNK_0xe689<IFIELD>
    PAD(); // PAD
    _do__eq_(); // $=
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(0);
      imax = i; // LEAVE
    } else
    {
      INEXT(); // INEXT
    }
    i++;
  } while(i<imax); // (LOOP)

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf004: WORD 'UNK_0xf006' codep=0x224c parp=0xf006
// ================================================

void UNK_0xf006() // UNK_0xf006
{
  Push(0);
  Push(0x001b);
  CMESS(); // CMESS
  UNK_0xedf5(); // UNK_0xedf5
  StoreCRS(); // !CRS
  Push(0x003c);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(8);
  Push(0x0032);
  Push(Read16(pp_UNK_0xe91b)); // UNK_0xe91b @
  UNK_0xe91f(); // UNK_0xe91f
  BLT(); // BLT
}


// ================================================
// 0xf02a: WORD 'UNK_0xf02c' codep=0x224c parp=0xf02c
// ================================================

void UNK_0xf02c() // UNK_0xf02c
{
  UNK_0xf006(); // UNK_0xf006
  do
  {
    GetCRS(); // @CRS
    CTINIT(); // CTINIT
    IsCGA(); // ?CGA
    if (Pop() != 0)
    {
      SetColor(WHITE);
    } else
    {
      SetColor(BLUE);
    }
    StoreCOLOR(); // !COLOR
    Push(0x000a);
    Push(0x0030);
    Push(Read16(pp_UNK_0xe91b)); // UNK_0xe91b @
    UNK_0xe91f(); // UNK_0xe91f
    Push(pp__dash_AIN); // -AIN
    _099(); // 099
    Push(0x000d);
    UNK_0xe4a2(); // UNK_0xe4a2
    UNK_0xe557(); // UNK_0xe557
    Pop(); // DROP
    StoreCRS(); // !CRS
    UNK_0xefd8(); // UNK_0xefd8
    if (Pop() != 0)
    {
      PAD(); // PAD
      Push(0x65e1+UNK_0xe689.offset); // UNK_0xe689<IFIELD>
      _do__ex_(); // $!
      Push(1);
    } else
    {
      UNK_0xef2b(); // UNK_0xef2b
    }
  } while(Pop() == 0);
  BLT(); // BLT
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf080: WORD 'UNK_0xf082' codep=0x224c parp=0xf082
// ================================================

void UNK_0xf082() // UNK_0xf082
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  GetCRS(); // @CRS
  Push(Read16(0x65e1+UNK_0xe514.offset)&0xFF); // UNK_0xe514<IFIELD> C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(0x65e1+UNK_0xe689.offset); // UNK_0xe689<IFIELD>
    _099(); // 099
    Push(0x65e1+UNK_0xe68e.offset); // UNK_0xe68e<IFIELD>
    Push(5);
    Push(0);
    FILL_2(); // FILL_2
    Push(pp_NCRS); // NCRS
    _099(); // 099
    Push(pp_OCRS); // OCRS
    _099(); // 099
    Push(0x0075);
    Push(0x0024);
    Push(Read16(pp_UNK_0xe91b)); // UNK_0xe91b @
    UNK_0xe91f(); // UNK_0xe91f
    Push(0x0018);
    Push(pp_WBLT); // WBLT
    Store_2(); // !_2
    Push(9);
    Push(pp_LBLT); // LBLT
    Store_2(); // !_2
    Push(pp_XORMODE); // XORMODE
    _099(); // 099
    CURSORS(); // CURSORS
    Push(pp_ABLT); // ABLT
    Store_2(); // !_2
    Push(0);
    Push(0x0020);
    CMESS(); // CMESS
    CTINIT(); // CTINIT
    PRINT("SELECT RACE ^\\ ", 15); // (.")
    UNK_0xe5eb(); // UNK_0xe5eb
    StoreCRS(); // !CRS
    Push(pp_XORMODE); // XORMODE
    _099(); // 099
    Push(0);
    StoreINST_dash_S(); // !INST-S
    Push(pp_RECORD_n_); // RECORD#
    _099(); // 099
    GetCRS(); // @CRS
    UNK_0xed4b(); // UNK_0xed4b
    UNK_0xedc5(); // UNK_0xedc5
    UNK_0xf02c(); // UNK_0xf02c
    StoreCRS(); // !CRS
  } else
  {
    Push(0);
    Push(0x0016);
    CMESS(); // CMESS
    PRINT("THIS FILE IS NOT EMPTY", 22); // (.")
    StoreCRS(); // !CRS
    UNK_0xee17(); // UNK_0xee17
    Push(0);
    _0MESS(); // 0MESS
  }
  StoreCRS(); // !CRS
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe604(); // UNK_0xe604
  StoreCRS(); // !CRS
  Push(1);
  UNK_0xe620(); // UNK_0xe620
}


// ================================================
// 0xf147: WORD 'UNK_0xf149' codep=0x224c parp=0xf149
// ================================================

void UNK_0xf149() // UNK_0xf149
{
  UNK_0xe4e0(); // UNK_0xe4e0
  Push(0);
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("SELECT SKILL ^\\", 15); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0012);
  CMESS(); // CMESS
  UNK_0xe5eb(); // UNK_0xe5eb
  StoreCRS(); // !CRS
}


// ================================================
// 0xf175: WORD 'UNK_0xf177' codep=0x224c parp=0xf177
// ================================================

void UNK_0xf177() // UNK_0xf177
{
  Push(Read16(0x65e1+UNK_0xe514.offset) & 2); // UNK_0xe514<IFIELD> @ 2 AND
  if (Pop() != 0)
  {
    Push(0);
    _0MESS(); // 0MESS
    Push(0);
    Push(0x0021);
    CMESS(); // CMESS
    PRINT("YOU CAN'T TRAIN ", 16); // (.")
    UNK_0xe647(); // UNK_0xe647
  } else
  {
    Push(0);
    Push(0x001d);
    CMESS(); // CMESS
    PRINT("THERE IS NO ONE HERE TO TRAIN", 29); // (.")
    StoreCRS(); // !CRS
  }
  UNK_0xee17(); // UNK_0xee17
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1da: WORD 'UNK_0xf1dc' codep=0x224c parp=0xf1dc
// ================================================

void UNK_0xf1dc() // UNK_0xf1dc
{
  Push(0x012c); Push(0x0000);
  UNK_0xe50a(); // UNK_0xe50a
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0);
  Push(0x0012);
  CMESS(); // CMESS
  PRINT("INSUFFICIENT FUNDS", 18); // (.")
  BEEP(); // BEEP
  StoreCRS(); // !CRS
  UNK_0xee17(); // UNK_0xee17
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf215: WORD 'UNK_0xf217' codep=0x224c parp=0xf217
// ================================================

void UNK_0xf217() // UNK_0xf217
{
  LoadData(UNK_0xe671); // from 'CREWMEMBER'
  Push(Read16(pp_OCRS)); // OCRS @
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16((0x65e1+UNK_0xe68e.offset) + Read16(pp_OCRS))&0xFF); // UNK_0xe68e<IFIELD> OCRS @ + C@
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    UNK_0xe4e0(); // UNK_0xe4e0
    Push(0);
    Push(0x0022);
    CMESS(); // CMESS
    PRINT("MAXIMUM TRAINING LEVEL HAS ALREADY", 34); // (.")
    StoreCRS(); // !CRS
    Push(1);
    Push(0x001c);
    CMESS(); // CMESS
    PRINT("BEEN ATTAINED FOR THIS SKILL", 28); // (.")
    StoreCRS(); // !CRS
    UNK_0xee17(); // UNK_0xee17
    UNK_0xe4e0(); // UNK_0xe4e0
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xf299: WORD 'UNK_0xf29b' codep=0x1d29 parp=0xf29b
// ================================================
// 0xf29b: db 0x04 0xa5 0x0d 0x09 0x1f 0x9e 0x0d 0x09 0x2b 0x97 0x0d 0x09 0x2f 0x90 0x0d 0x09 0x3b 0x89 0x0d 0x09 0x23 '        +   /   ;   #'

// ================================================
// 0xf2b0: WORD 'UNK_0xf2b2' codep=0x224c parp=0xf2b2
// ================================================

void UNK_0xf2b2() // UNK_0xf2b2
{
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    SetColor(RED);
    return;
  }
  SetColor(GREY2);
}


// ================================================
// 0xf2c2: WORD 'UNK_0xf2c4' codep=0x224c parp=0xf2c4
// ================================================

void UNK_0xf2c4() // UNK_0xf2c4
{
  UNK_0xf2b2(); // UNK_0xf2b2
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
  UNK_0xf149(); // UNK_0xf149
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_UNK_0xf29b); // UNK_0xf29b
  BLD_dash_CRS(); // BLD-CRS
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    Push(-1);
    Push(Pop() * Pop()); // *
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Push(pp_UNK_0xf29b); // UNK_0xf29b
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  UNK_0xf217(); // UNK_0xf217
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() != 0)
  {
    UNK_0xee3d(); // UNK_0xee3d
    Push(0x012c);
    Push(Read16(pp_UNK_0xee39)); // UNK_0xee39 @
    U_star_(); // U*
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      DNEGATE(); // DNEGATE
      Push(0xc2ed); // probable 'T+BALAN'
      MODULE(); // MODULE
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    Push(Read16((0x65e1+UNK_0xe68e.offset) + Read16(pp_OCRS))&0xFF); // UNK_0xe68e<IFIELD> OCRS @ + C@
    LoadData(UNK_0xe679); // from 'CREWMEMBER'
    Push(Read8(Pop())&0xFF); // C@
    Push((Read16(0x65e1+UNK_0xe514.offset)&0xFF) & 0x0010); // UNK_0xe514<IFIELD> C@ 0x0010 AND
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(0);
    }
    Push(Read16(pp_UNK_0xee39)); // UNK_0xee39 @
    Push(Pop() * Pop()); // *
    Push(Pop() + Pop()); // +
    LoadData(UNK_0xe671); // from 'CREWMEMBER'
    Push(Read16(pp_OCRS)); // OCRS @
    Push(Pop() + Pop()); // +
    Push(Read8(Pop())&0xFF); // C@
    MIN(); // MIN
    Push((0x65e1+UNK_0xe68e.offset) + Read16(pp_OCRS)); // UNK_0xe68e<IFIELD> OCRS @ +
    C_ex__2(); // C!_2
    UNK_0xec39(); // UNK_0xec39
  }
  UNK_0xf2b2(); // UNK_0xf2b2
  StoreCOLOR(); // !COLOR
  BLT(); // BLT
  Push(0);
  _0MESS(); // 0MESS
  UNK_0xe3ee(); // UNK_0xe3ee
}


// ================================================
// 0xf368: WORD 'UNK_0xf36a' codep=0x224c parp=0xf36a params=0 returns=1
// ================================================

void UNK_0xf36a() // UNK_0xf36a
{
  GetINST_dash_S(); // @INST-S
  Push(4);
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0);
  Push(0x0019);
  CMESS(); // CMESS
  PRINT("ANDROIDS CAN'T BE TRAINED", 25); // (.")
  StoreCRS(); // !CRS
  UNK_0xee17(); // UNK_0xee17
}


// ================================================
// 0xf3a0: WORD 'UNK_0xf3a2' codep=0x224c parp=0xf3a2
// ================================================

void UNK_0xf3a2() // UNK_0xf3a2
{
  UNK_0xe4e0(); // UNK_0xe4e0
  Push(Read16(0x65e1+UNK_0xe514.offset) + 1 & 3); // UNK_0xe514<IFIELD> @ 1 XOR 3 AND
  if (Pop() != 0)
  {
    UNK_0xf177(); // UNK_0xf177
  } else
  {
    UNK_0xf36a(); // UNK_0xf36a
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      UNK_0xf1dc(); // UNK_0xf1dc
      if (Pop() != 0)
      {
        GetCRS(); // @CRS
        UNK_0xf2c4(); // UNK_0xf2c4
        StoreCRS(); // !CRS
      }
    }
  }
  Push(0);
  _0MESS(); // 0MESS
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe604(); // UNK_0xe604
  StoreCRS(); // !CRS
  Push(1);
  UNK_0xe620(); // UNK_0xe620
}


// ================================================
// 0xf3e4: WORD 'UNK_0xf3e6' codep=0x224c parp=0xf3e6 params=0 returns=0
// ================================================

void UNK_0xf3e6() // UNK_0xf3e6
{
  Push(0x65e1+UNK_0xe514.offset); // UNK_0xe514<IFIELD>
  _099(); // 099
  Push(0x65e1+UNK_0xe689.offset); // UNK_0xe689<IFIELD>
  Push(0x000f);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0xf3f6: WORD 'UNK_0xf3f8' codep=0x224c parp=0xf3f8
// ================================================

void UNK_0xf3f8() // UNK_0xf3f8
{
  UNK_0xe4e0(); // UNK_0xe4e0
  Push(Read16(0x65e1+UNK_0xe514.offset)&0xFF); // UNK_0xe514<IFIELD> C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    Push(0);
    Push(0x001a);
    CMESS(); // CMESS
    PRINT("THIS FILE IS ALREADY EMPTY", 26); // (.")
    StoreCRS(); // !CRS
    UNK_0xee17(); // UNK_0xee17
    Push(0);
    _0MESS(); // 0MESS
  } else
  {
    Push(0);
    Push(0x0017);
    CMESS(); // CMESS
    PRINT("DELETE THIS CREWMEMBER\?", 23); // (.")
    StoreCRS(); // !CRS
    Push(1);
    Push(7);
    CMESS(); // CMESS
    PRINT("[N  Y]", 6); // (.")
    StoreCRS(); // !CRS
    do
    {
      XYSCAN(); // XYSCAN
      SWAP(); // SWAP
      Pop(); // DROP
      if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    } while(Pop() == 0);
    _0_gt_(); // 0>
    if (Pop() != 0)
    {
      UNK_0xf3e6(); // UNK_0xf3e6
      UNK_0xec39(); // UNK_0xec39
    }
    UNK_0xe4e0(); // UNK_0xe4e0
  }
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe604(); // UNK_0xe604
  StoreCRS(); // !CRS
  Push(1);
  UNK_0xe620(); // UNK_0xe620
}


// ================================================
// 0xf494: WORD 'UNK_0xf496' codep=0x224c parp=0xf496
// ================================================

void UNK_0xf496() // UNK_0xf496
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  UNK_0xe3ee(); // UNK_0xe3ee
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_NCRS); // NCRS
  _099(); // 099
  UNK_0xe6c9(); // UNK_0xe6c9
  UNK_0xe874(); // UNK_0xe874
  Push(pp_UNK_0xe861); // UNK_0xe861
  BLD_dash_CRS(); // BLD-CRS
  Push(0x0081);
  UNK_0xe927(); // UNK_0xe927
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  UNK_0xec39(); // UNK_0xec39
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe604(); // UNK_0xe604
  StoreCRS(); // !CRS
  Push(1);
  UNK_0xe620(); // UNK_0xe620
}


// ================================================
// 0xf4ca: WORD 'PFILE-FUNCTI' codep=0x4b3b parp=0xf4db
// ================================================

void PFILE_dash_FUNCTI() // PFILE-FUNCTI
{
  switch(Pop()) // PFILE-FUNCTI
  {
  case 0:
    UNK_0xf082(); // UNK_0xf082
    break;
  case 1:
    UNK_0xf3a2(); // UNK_0xf3a2
    break;
  case 2:
    UNK_0xf3f8(); // UNK_0xf3f8
    break;
  case 3:
    if (Pop() == 0) Push(1); else Push(0); // NOT
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xf4ef: WORD '(U-PFILE)' codep=0x224c parp=0xf4fd
// ================================================
// entry

void _ro_U_dash_PFILE_rc_() // (U-PFILE)
{
  unsigned short int a, b;
  UNK_0xe3fe(); // UNK_0xe3fe
  a = Pop(); // >R
  UNK_0xe4ec(); // UNK_0xe4ec
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf496(); // UNK_0xf496
  do
  {
    XYSCAN(); // XYSCAN
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    UNK_0xed3d(); // UNK_0xed3d
    Push(pp_UNK_0xe861); // UNK_0xe861
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
    IsTRIG(); // ?TRIG
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      if (Pop() == 0) Push(1); else Push(0); // NOT
      Push(Read16(pp_OCRS)); // OCRS @
      PFILE_dash_FUNCTI(); // PFILE-FUNCTI case
    }
  } while(Pop() == 0);
  Push(4);
  UNK_0xe4f6(); // UNK_0xe4f6
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(a); // R>
  UNK_0xe3fe(); // UNK_0xe3fe
  OVER(); // OVER
  if (Pop() == 0) Push(1); else Push(0); // 0=
  b = Pop(); // >R
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(b); // R>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  Push(0x000f);
  Push(pp_Is10); // ?10
  Store_2(); // !_2
}

// 0xf555: db 0x50 0x46 0x49 0x4c 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'PFIL_______ '

