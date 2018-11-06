// ====== OVERLAY 'PERSONNEL-OV' ======
// store offset = 0xe3d0
// overlay size   = 0x1190

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//           WE3E6  codep:0x224c parp:0xe3e6 size:0x0006 C-string:'WE3E6'
//           WE3EE  codep:0x224c parp:0xe3ee size:0x000e C-string:'WE3EE'
//           WE3FE  codep:0x224c parp:0xe3fe size:0x003a C-string:'WE3FE'
//           WE43A  codep:0x224c parp:0xe43a size:0x0066 C-string:'WE43A'
//           WE4A2  codep:0x224c parp:0xe4a2 size:0x0008 C-string:'WE4A2'
//           WE4AC  codep:0x224c parp:0xe4ac size:0x0008 C-string:'WE4AC'
//           WE4B6  codep:0x224c parp:0xe4b6 size:0x0008 C-string:'WE4B6'
//           WE4C0  codep:0x224c parp:0xe4c0 size:0x0008 C-string:'WE4C0'
//           WE4CA  codep:0x224c parp:0xe4ca size:0x0008 C-string:'WE4CA'
//           WE4D4  codep:0x2214 parp:0xe4d4 size:0x0002 C-string:'WE4D4'
//           WE4D8  codep:0x2214 parp:0xe4d8 size:0x0002 C-string:'WE4D8'
//           WE4DC  codep:0x2214 parp:0xe4dc size:0x0002 C-string:'WE4DC'
//           WE4E0  codep:0x224c parp:0xe4e0 size:0x000a C-string:'WE4E0'
//           WE4EC  codep:0x224c parp:0xe4ec size:0x0008 C-string:'WE4EC'
//           WE4F6  codep:0x224c parp:0xe4f6 size:0x0008 C-string:'WE4F6'
//           WE500  codep:0x224c parp:0xe500 size:0x0008 C-string:'WE500'
//           WE50A  codep:0x224c parp:0xe50a size:0x0008 C-string:'WE50A'
//           WE514  codep:0x7420 parp:0xe514 size:0x0003 C-string:'WE514'
//           WE519  codep:0x1d29 parp:0xe519 size:0x000e C-string:'WE519'
//           WE529  codep:0x224c parp:0xe529 size:0x0020 C-string:'WE529'
//           WE54B  codep:0x224c parp:0xe54b size:0x000a C-string:'WE54B'
//           WE557  codep:0x224c parp:0xe557 size:0x0014 C-string:'WE557'
//           WE56D  codep:0x224c parp:0xe56d size:0x0008 C-string:'WE56D'
//           WE577  codep:0x1d29 parp:0xe577 size:0x0008 C-string:'WE577'
//           WE581  codep:0x224c parp:0xe581 size:0x0028 C-string:'WE581'
//           WE5AB  codep:0x224c parp:0xe5ab size:0x000e C-string:'WE5AB'
//           WE5BB  codep:0x224c parp:0xe5bb size:0x0016 C-string:'WE5BB'
//           WE5D3  codep:0x224c parp:0xe5d3 size:0x000c C-string:'WE5D3'
//           WE5E1  codep:0x224c parp:0xe5e1 size:0x0008 C-string:'WE5E1'
//           WE5EB  codep:0x224c parp:0xe5eb size:0x0017 C-string:'WE5EB'
//           WE604  codep:0x224c parp:0xe604 size:0x001a C-string:'WE604'
//           WE620  codep:0x224c parp:0xe620 size:0x0025 C-string:'WE620'
//           WE647  codep:0x224c parp:0xe647 size:0x0018 C-string:'WE647'
//           WE661  codep:0x7394 parp:0xe661 size:0x0006 C-string:'WE661'
//           WE669  codep:0x7394 parp:0xe669 size:0x0006 C-string:'WE669'
//           WE671  codep:0x7394 parp:0xe671 size:0x0006 C-string:'WE671'
//           WE679  codep:0x7394 parp:0xe679 size:0x0006 C-string:'WE679'
//           WE681  codep:0x7394 parp:0xe681 size:0x0006 C-string:'WE681'
//           WE689  codep:0x7420 parp:0xe689 size:0x0003 C-string:'WE689'
//           WE68E  codep:0x7420 parp:0xe68e size:0x0003 C-string:'WE68E'
//           WE693  codep:0x7420 parp:0xe693 size:0x0003 C-string:'WE693'
//           WE698  codep:0x7420 parp:0xe698 size:0x0003 C-string:'WE698'
//           WE69D  codep:0x7420 parp:0xe69d size:0x0003 C-string:'WE69D'
//           WE6A2  codep:0x7420 parp:0xe6a2 size:0x0003 C-string:'WE6A2'
//           WE6A7  codep:0x7420 parp:0xe6a7 size:0x0003 C-string:'WE6A7'
//           WE6AC  codep:0x7420 parp:0xe6ac size:0x0003 C-string:'WE6AC'
//           WE6B1  codep:0x7394 parp:0xe6b1 size:0x0006 C-string:'WE6B1'
//           WE6B9  codep:0x7394 parp:0xe6b9 size:0x0006 C-string:'WE6B9'
//           WE6C1  codep:0x7394 parp:0xe6c1 size:0x0006 C-string:'WE6C1'
//           WE6C9  codep:0x224c parp:0xe6c9 size:0x0138 C-string:'WE6C9'
//           WE803  codep:0x224c parp:0xe803 size:0x0022 C-string:'WE803'
//           WE827  codep:0x224c parp:0xe827 size:0x0038 C-string:'WE827'
//           WE861  codep:0x1d29 parp:0xe861 size:0x0011 C-string:'WE861'
//           WE874  codep:0x224c parp:0xe874 size:0x00a5 C-string:'WE874'
//           WE91B  codep:0x1d29 parp:0xe91b size:0x0002 C-string:'WE91B'
//           WE91F  codep:0x224c parp:0xe91f size:0x0006 C-string:'WE91F'
//           WE927  codep:0x224c parp:0xe927 size:0x0118 C-string:'WE927'
//           WEA41  codep:0x224c parp:0xea41 size:0x0040 C-string:'WEA41'
//           WEA83  codep:0x224c parp:0xea83 size:0x00ce C-string:'WEA83'
//           WEB53  codep:0x224c parp:0xeb53 size:0x0054 C-string:'WEB53'
//           WEBA9  codep:0x224c parp:0xeba9 size:0x008e C-string:'WEBA9'
//           WEC39  codep:0x224c parp:0xec39 size:0x0102 C-string:'WEC39'
//           WED3D  codep:0x224c parp:0xed3d size:0x000c C-string:'WED3D'
//           WED4B  codep:0x224c parp:0xed4b size:0x0078 C-string:'WED4B'
//           WEDC5  codep:0x224c parp:0xedc5 size:0x002e C-string:'WEDC5'
//           WEDF5  codep:0x224c parp:0xedf5 size:0x0020 C-string:'WEDF5'
//           WEE17  codep:0x224c parp:0xee17 size:0x0020 C-string:'WEE17'
//           WEE39  codep:0x1d29 parp:0xee39 size:0x0002 C-string:'WEE39'
//           WEE3D  codep:0x224c parp:0xee3d size:0x00ec C-string:'WEE3D'
//           WEF2B  codep:0x224c parp:0xef2b size:0x00ab C-string:'WEF2B'
//           WEFD8  codep:0x224c parp:0xefd8 size:0x002c C-string:'WEFD8'
//           WF006  codep:0x224c parp:0xf006 size:0x0024 C-string:'WF006'
//           WF02C  codep:0x224c parp:0xf02c size:0x0054 C-string:'WF02C'
//           WF082  codep:0x224c parp:0xf082 size:0x00c5 C-string:'WF082'
//           WF149  codep:0x224c parp:0xf149 size:0x002c C-string:'WF149'
//           WF177  codep:0x224c parp:0xf177 size:0x0063 C-string:'WF177'
//           WF1DC  codep:0x224c parp:0xf1dc size:0x0039 C-string:'WF1DC'
//           WF217  codep:0x224c parp:0xf217 size:0x0082 C-string:'WF217'
//           WF29B  codep:0x1d29 parp:0xf29b size:0x0015 C-string:'WF29B'
//           WF2B2  codep:0x224c parp:0xf2b2 size:0x0010 C-string:'WF2B2'
//           WF2C4  codep:0x224c parp:0xf2c4 size:0x00a4 C-string:'WF2C4'
//           WF36A  codep:0x224c parp:0xf36a size:0x0036 C-string:'WF36A'
//           WF3A2  codep:0x224c parp:0xf3a2 size:0x0042 C-string:'WF3A2'
//           WF3E6  codep:0x224c parp:0xf3e6 size:0x0010 C-string:'WF3E6'
//           WF3F8  codep:0x224c parp:0xf3f8 size:0x009c C-string:'WF3F8'
//           WF496  codep:0x224c parp:0xf496 size:0x0034 C-string:'WF496'
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
void KEY_2(); // KEY_2
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
const unsigned short int pp_WE519 = 0xe519; // WE519 size: 14
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x0a, 0x0f, 0x0a, 0x14}

const unsigned short int pp_WE577 = 0xe577; // WE577 size: 8
// {0x00, 0x18, 0x38, 0x51, 0x7f, 0xa2, 0xb4, 0xce}

const unsigned short int pp_WE861 = 0xe861; // WE861 size: 17
// {0x03, 0x0a, 0x02, 0x09, 0x29, 0x0a, 0x2c, 0x09, 0x25, 0x0a, 0x52, 0x09, 0x29, 0x0a, 0x7c, 0x09, 0x23}

const unsigned short int pp_WE91B = 0xe91b; // WE91B size: 2
// {0x3a, 0x20}

const unsigned short int pp_WEE39 = 0xee39; // WEE39 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WF29B = 0xf29b; // WF29B size: 21
// {0x04, 0xa5, 0x0d, 0x09, 0x1f, 0x9e, 0x0d, 0x09, 0x2b, 0x97, 0x0d, 0x09, 0x2f, 0x90, 0x0d, 0x09, 0x3b, 0x89, 0x0d, 0x09, 0x23}


const unsigned short int cc_WE4D4 = 0xe4d4; // WE4D4
const unsigned short int cc_WE4D8 = 0xe4d8; // WE4D8
const unsigned short int cc_WE4DC = 0xe4dc; // WE4DC


// 0xe3e2: db 0x19 0x01 '  '

// ================================================
// 0xe3e4: WORD 'WE3E6' codep=0x224c parp=0xe3e6
// ================================================

void WE3E6() // WE3E6
{
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe3ec: WORD 'WE3EE' codep=0x224c parp=0xe3ee
// ================================================

void WE3EE() // WE3EE
{
  GetColor(WHITE);
  GetColor(RED);
  GetColor(RED);
  IsMRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
}


// ================================================
// 0xe3fc: WORD 'WE3FE' codep=0x224c parp=0xe3fe params=0 returns=1
// ================================================

void WE3FE() // WE3FE
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
      Push(!Pop()); //  NOT
      SWAP(); // SWAP
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe438: WORD 'WE43A' codep=0x224c parp=0xe43a
// ================================================

void WE43A() // WE43A
{
  unsigned short int i, imax, j, jmax;
  GetCOLOR(); // @COLOR
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  StoreCOLOR(); // !COLOR
  PAD_v_16(); // PAD|16
  Push(Pop() + 6); //  6 +
  PAD_v_16(); // PAD|16
  Push(Read16(Pop() + 4)); //  4 + @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_YBLT) - i); // YBLT @ I -
    Push(pp_YLINE); // YLINE
    Store_2(); // !_2
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop())&0xFF); //  C@
    if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
    if (Pop() != 0)
    {
      Push(0);

      j = Pop();
      jmax = Pop();
      do // (DO)
      {
        Push(Read16(regsp)); // DUP
        Push((Read16(Pop() + 1)&0xFF) + Read16(pp_XBLT)); //  1+ C@ XBLT @ +
        Push(pp_XSTART); // XSTART
        Store_2(); // !_2
        Push(Read16(regsp)); // DUP
        Push((Read16(Pop() + 2)&0xFF) + Read16(pp_XBLT)); //  2+ C@ XBLT @ +
        Push(pp_XEND); // XEND
        Store_2(); // !_2
        HLINE(); // HLINE
        Push(Pop() + 2); //  2+
        j++;
      } while(j<jmax); // (LOOP)

    }
    Push(Pop() + 1); //  1+
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xe4a0: WORD 'WE4A2' codep=0x224c parp=0xe4a2 params=0 returns=0
// ================================================

void WE4A2() // WE4A2
{
  Push(0xb6fd); // 'OV#IN$'
  MODULE(); // MODULE
}


// ================================================
// 0xe4aa: WORD 'WE4AC' codep=0x224c parp=0xe4ac params=0 returns=0
// ================================================
// orphan

void WE4AC() // WE4AC
{
  Push(0xb70e); // 'OVQUIT'
  MODULE(); // MODULE
}


// ================================================
// 0xe4b4: WORD 'WE4B6' codep=0x224c parp=0xe4b6 params=0 returns=0
// ================================================
// orphan

void WE4B6() // WE4B6
{
  Push(0xb71f); // 'OV.0$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe4be: WORD 'WE4C0' codep=0x224c parp=0xe4c0 params=0 returns=0
// ================================================
// orphan

void WE4C0() // WE4C0
{
  Push(0xb730); // 'OV0$$$'
  MODULE(); // MODULE
}


// ================================================
// 0xe4c8: WORD 'WE4CA' codep=0x224c parp=0xe4ca params=0 returns=0
// ================================================

void WE4CA() // WE4CA
{
  Push(0xb752); // 'OVTRIM_1'
  MODULE(); // MODULE
}


// ================================================
// 0xe4d2: WORD 'WE4D4' codep=0x2214 parp=0xe4d4
// ================================================
// 0xe4d4: dw 0x0005

// ================================================
// 0xe4d6: WORD 'WE4D8' codep=0x2214 parp=0xe4d8
// ================================================
// 0xe4d8: dw 0x0003

// ================================================
// 0xe4da: WORD 'WE4DC' codep=0x2214 parp=0xe4dc
// ================================================
// 0xe4dc: dw 0x0004

// ================================================
// 0xe4de: WORD 'WE4E0' codep=0x224c parp=0xe4e0
// ================================================

void WE4E0() // WE4E0
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
}


// ================================================
// 0xe4ea: WORD 'WE4EC' codep=0x224c parp=0xe4ec params=0 returns=0
// ================================================

void WE4EC() // WE4EC
{
  Push(0xc261); // 'OVINIT-_1'
  MODULE(); // MODULE
}


// ================================================
// 0xe4f4: WORD 'WE4F6' codep=0x224c parp=0xe4f6 params=0 returns=0
// ================================================

void WE4F6() // WE4F6
{
  Push(0xc273); // 'OVTRANS'
  MODULE(); // MODULE
}


// ================================================
// 0xe4fe: WORD 'WE500' codep=0x224c parp=0xe500 params=0 returns=0
// ================================================

void WE500() // WE500
{
  Push(0xc285); // 'OVD@BAL'
  MODULE(); // MODULE
}


// ================================================
// 0xe508: WORD 'WE50A' codep=0x224c parp=0xe50a params=0 returns=0
// ================================================

void WE50A() // WE50A
{
  Push(0xc2a9); // 'OV?BALA'
  MODULE(); // MODULE
}


// ================================================
// 0xe512: WORD 'WE514' codep=0x7420 parp=0xe514
// ================================================
IFieldType WE514 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xe517: WORD 'WE519' codep=0x1d29 parp=0xe519
// ================================================
// 0xe519: db 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x14 0x00 0x0a 0x0f 0x0a 0x14 '              '

// ================================================
// 0xe527: WORD 'WE529' codep=0x224c parp=0xe529 params=1 returns=1
// ================================================

void WE529() // WE529
{
  Push(Read16(regsp)); // DUP
  Push(Pop() * 2); //  2*
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + pp_WE519)&0xFF); //  WE519 + C@
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  Push(-(Read16((Pop() + 1) + pp_WE519)&0xFF)); //  1+ WE519 + C@ NEGATE
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe549: WORD 'WE54B' codep=0x224c parp=0xe54b params=0 returns=1
// ================================================
// orphan

void WE54B() // WE54B
{
  PAD(); // PAD
  Push(Pop() + 0x0080); //  0x0080 +
}


// ================================================
// 0xe555: WORD 'WE557' codep=0x224c parp=0xe557 params=1 returns=1
// ================================================

void WE557() // WE557
{
  PAD(); // PAD
  _do__ex_(); // $!
  PAD(); // PAD
  COUNT(); // COUNT
  _dash_TRAILING(); // -TRAILING
  OVER(); // OVER
  Push(Pop() - 1); //  1-
  C_ex__2(); // C!_2
  Push(Pop() - 1); //  1-
}


// ================================================
// 0xe56b: WORD 'WE56D' codep=0x224c parp=0xe56d params=0 returns=0
// ================================================
// orphan

void WE56D() // WE56D
{
  Push(4);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xe575: WORD 'WE577' codep=0x1d29 parp=0xe577
// ================================================
// 0xe577: db 0x00 0x18 0x38 0x51 0x7f 0xa2 0xb4 0xce '  8Q   '

// ================================================
// 0xe57f: WORD 'WE581' codep=0x224c parp=0xe581 params=1 returns=0
// ================================================

void WE581() // WE581
{
  unsigned short int a;
  Push(Pop() + pp_WE577); //  WE577 +
  a = Pop(); // >R
  Push(Read16(pp_SIL_h_)); // SIL^ @
  Push(Read16(a)); // R@
  Push(Read16(Pop())&0xFF); //  C@
  Push(Pop() + Pop()); // +
  Push(0);
  GetDS(); // @DS
  PAD_v_16(); // PAD|16
  Push(Read16(a)); // R@
  Push((Read16(Pop() + 1)&0xFF) - (Read16(a)&0xFF) >> 4); //  1+ C@ R> C@ - 16*
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xe5a9: WORD 'WE5AB' codep=0x224c parp=0xe5ab
// ================================================
// orphan

void WE5AB() // WE5AB
{
  do
  {
    KEY_2(); // KEY_2
    Push(Pop()==0x000d?1:0); //  0x000d =
  } while(Pop() == 0);
}


// ================================================
// 0xe5b9: WORD 'WE5BB' codep=0x224c parp=0xe5bb params=0 returns=1
// ================================================

void WE5BB() // WE5BB
{
  Push(Read16(0x65e1+WE514.offset)&0xFF); // WE514<IFIELD> C@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 2); //  2 AND
  _gt_FLAG(); // >FLAG
  SWAP(); // SWAP
  Push(Pop() & 1); //  1 AND
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe5d1: WORD 'WE5D3' codep=0x224c parp=0xe5d3 params=0 returns=1
// ================================================

void WE5D3() // WE5D3
{
  Push((Read16(0x65e1+WE514.offset)&0xFF) & 0x0010); // WE514<IFIELD> C@ 0x0010 AND
}


// ================================================
// 0xe5df: WORD 'WE5E1' codep=0x224c parp=0xe5e1 params=0 returns=1
// ================================================

void WE5E1() // WE5E1
{
  WE5BB(); // WE5BB
  WE5D3(); // WE5D3
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe5e9: WORD 'WE5EB' codep=0x224c parp=0xe5eb params=0 returns=0
// ================================================

void WE5EB() // WE5EB
{
  PRINT("AND PRESS SPACEBAR", 18); // (.")
}


// ================================================
// 0xe602: WORD 'WE604' codep=0x224c parp=0xe604 params=0 returns=0
// ================================================

void WE604() // WE604
{
  PRINT("PAGE THROUGH FILES ^\\", 21); // (.")
}


// ================================================
// 0xe61e: WORD 'WE620' codep=0x224c parp=0xe620
// ================================================

void WE620() // WE620
{
  Push(Read16(regsp)); // DUP
  _0MESS(); // 0MESS
  Push(0x0025);
  CMESS(); // CMESS
  PRINT("SELECT OPTIONS [] ", 18); // (.")
  WE5EB(); // WE5EB
  StoreCRS(); // !CRS
}


// ================================================
// 0xe645: WORD 'WE647' codep=0x224c parp=0xe647
// ================================================

void WE647() // WE647
{
  PRINT("A DEAD CREWMEMBER", 17); // (.")
  StoreCRS(); // !CRS
}


// ================================================
// 0xe65f: WORD 'WE661' codep=0x7394 parp=0xe661
// ================================================
LoadDataType WE661 = {CREWMEMBERIDX, 0x00, 0x08, 0x14, 0x6ac8};

// ================================================
// 0xe667: WORD 'WE669' codep=0x7394 parp=0xe669
// ================================================
LoadDataType WE669 = {CREWMEMBERIDX, 0x08, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe66f: WORD 'WE671' codep=0x7394 parp=0xe671
// ================================================
LoadDataType WE671 = {CREWMEMBERIDX, 0x0d, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe677: WORD 'WE679' codep=0x7394 parp=0xe679
// ================================================
LoadDataType WE679 = {CREWMEMBERIDX, 0x12, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe67f: WORD 'WE681' codep=0x7394 parp=0xe681
// ================================================
LoadDataType WE681 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6ac8};

// ================================================
// 0xe687: WORD 'WE689' codep=0x7420 parp=0xe689
// ================================================
IFieldType WE689 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe68c: WORD 'WE68E' codep=0x7420 parp=0xe68e
// ================================================
IFieldType WE68E = {CREWMEMBERIDX, 0x1a, 0x01};

// ================================================
// 0xe691: WORD 'WE693' codep=0x7420 parp=0xe693
// ================================================
IFieldType WE693 = {CREWMEMBERIDX, 0x1b, 0x01};

// ================================================
// 0xe696: WORD 'WE698' codep=0x7420 parp=0xe698
// ================================================
IFieldType WE698 = {CREWMEMBERIDX, 0x1c, 0x01};

// ================================================
// 0xe69b: WORD 'WE69D' codep=0x7420 parp=0xe69d
// ================================================
IFieldType WE69D = {CREWMEMBERIDX, 0x1d, 0x01};

// ================================================
// 0xe6a0: WORD 'WE6A2' codep=0x7420 parp=0xe6a2
// ================================================
IFieldType WE6A2 = {CREWMEMBERIDX, 0x1e, 0x01};

// ================================================
// 0xe6a5: WORD 'WE6A7' codep=0x7420 parp=0xe6a7
// ================================================
IFieldType WE6A7 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xe6aa: WORD 'WE6AC' codep=0x7420 parp=0xe6ac
// ================================================
IFieldType WE6AC = {CREWMEMBERIDX, 0x22, 0x01};

// ================================================
// 0xe6af: WORD 'WE6B1' codep=0x7394 parp=0xe6b1
// ================================================
LoadDataType WE6B1 = {PSTATSIDX, 0x00, 0x09, 0x0b, 0x90d6};

// ================================================
// 0xe6b7: WORD 'WE6B9' codep=0x7394 parp=0xe6b9
// ================================================
LoadDataType WE6B9 = {PSTATSIDX, 0x09, 0x01, 0x0b, 0x90d6};

// ================================================
// 0xe6bf: WORD 'WE6C1' codep=0x7394 parp=0xe6c1
// ================================================
LoadDataType WE6C1 = {PSTATSIDX, 0x0a, 0x01, 0x0b, 0x90d6};

// ================================================
// 0xe6c7: WORD 'WE6C9' codep=0x224c parp=0xe6c9
// ================================================

void WE6C9() // WE6C9
{
  unsigned short int i, imax;
  Push(0x00c3);
  Push(1);
  Push(0x001c);
  Push(0x0043);
  GetColor(GREY1);
  POLY_dash_WI(); // POLY-WI
  Push(0x00b6);
  Push(0x0044);
  Push(0x001c);
  Push(0x009d);
  GetColor(GREY1);
  POLY_dash_WI(); // POLY-WI
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetColor(WHITE);
  GetColor(RED);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(2);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i + 1); // I 1+
    Push(0x001c);
    OVER(); // OVER
    Push(0x00c3);
    LLINE(); // LLINE
    Push(0x009d + i); // 0x009d I +
    Push(0x001c);
    OVER(); // OVER
    Push(0x00b6);
    LLINE(); // LLINE
    Push(3);
    Push(0x001a + i); // 0x001a I +
    Push(0x009c);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x0044);
    Push(0x00b7 + i); // 0x00b7 I +
    Push(0x009c);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(3);
    Push(0x00c4 + i); // 0x00c4 I +
    Push(0x0041);
    OVER(); // OVER
    LLINE(); // LLINE
    Push(0x0042 + i); // 0x0042 I +
    Push(0x00b9);
    OVER(); // OVER
    Push(0x00c3);
    LLINE(); // LLINE
    i++;
  } while(i<imax); // (LOOP)

  Push(0x004e);
  Push(0x00c5);
  GetColor(DK_dash_BLUE);
  Draw1LOGO(); // .1LOGO
  _gt_3FONT(); // >3FONT
  Push(0x005f);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("PERSONNEL", 9); // (.")
  GetColor(BLACK);
  GetColor(BLACK);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x000a);
  Push(0x00bd);
  POS_dot_(); // POS.
  PRINT("FILE#", 5); // (.")
  GetColor(WHITE);
  GetColor(RED);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(2);
  Push(0x001c);
  Push(Read16(cc_WE4D8)); // WE4D8
  Push(2);
  Push(0x00c4);
  Push(Read16(cc_WE4DC)); // WE4DC
  Push(0x0041);
  Push(0x00c4);
  Push(Read16(cc_WE4D8)); // WE4D8
  Push(0x009c);
  Push(0x001c);
  Push(Read16(cc_WE4DC)); // WE4DC
  Push(0x009c);
  Push(0x00b7);
  Push(Read16(cc_WE4D8)); // WE4D8
  Push(0x0043);
  Push(0x00b9);
  Push(Read16(cc_WE4D8)); // WE4D8
  Push(6);
  WE4CA(); // WE4CA
}


// ================================================
// 0xe801: WORD 'WE803' codep=0x224c parp=0xe803 params=0 returns=1
// ================================================

void WE803() // WE803
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0);
  while(1)
  {
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    INEXT(); // INEXT
    Push(Read16(0x65e1+WE514.offset)&0xFF); // WE514<IFIELD> C@
    _0_gt_(); // 0>
    Push(Pop() + Pop()); // +
  }
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xe825: WORD 'WE827' codep=0x224c parp=0xe827 params=1 returns=0
// ================================================

void WE827() // WE827
{
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  Push(Read16(0x65e1+WE6AC.offset)&0xFF); // WE6AC<IFIELD> C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() != 0)
  {
    Pop(); // DROP
    IPREV(); // IPREV
    return;
  }
  _0_gt_(); // 0>
  Push(Read16(0x65e1+WE514.offset)&0xFF); // WE514<IFIELD> C@
  WE803(); // WE803
  Push(Pop() | Pop()); // OR
  Push(Read16(0x65e1+WE6AC.offset)&0xFF); // WE6AC<IFIELD> C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xe85f: WORD 'WE861' codep=0x1d29 parp=0xe861
// ================================================
// 0xe861: db 0x03 0x0a 0x02 0x09 0x29 0x0a 0x2c 0x09 0x25 0x0a 0x52 0x09 0x29 0x0a 0x7c 0x09 0x23 '    ) , % R ) | #'

// ================================================
// 0xe872: WORD 'WE874' codep=0x224c parp=0xe874
// ================================================

void WE874() // WE874
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
// 0xe919: WORD 'WE91B' codep=0x1d29 parp=0xe91b
// ================================================
// 0xe91b: db 0x3a 0x20 ': '

// ================================================
// 0xe91d: WORD 'WE91F' codep=0x224c parp=0xe91f params=3 returns=0
// ================================================

void WE91F() // WE91F
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xe925: WORD 'WE927' codep=0x224c parp=0xe927
// ================================================

void WE927() // WE927
{
  unsigned short int a;
  a = Pop(); // >R
  Push(a); // I
  Push(pp_WE91B); // WE91B
  Store_2(); // !_2
  CTINIT(); // CTINIT
  GetColor(BLACK);
  GetColor(BLACK);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x000a);
  Push(0x0029);
  Push(a); // I
  WE91F(); // WE91F
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(a); // I
  WE91F(); // WE91F
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(a); // I
  WE91F(); // WE91F
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(a); // I
  WE91F(); // WE91F
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(a); // I
  WE91F(); // WE91F
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(6);
  Push(a); // I
  WE91F(); // WE91F
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  Push(a); // R>
  WE91F(); // WE91F
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xea3f: WORD 'WEA41' codep=0x224c parp=0xea41 params=0 returns=0
// ================================================

void WEA41() // WEA41
{
  WE5E1(); // WE5E1
  if (Pop() == 0) return;
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _gt_3FONT(); // >3FONT
  Push(0x000a);
  Push(0x0032);
  POS_dot_(); // POS.
  WE5BB(); // WE5BB
  if (Pop() != 0)
  {
    GetColor(RED);
    StoreCOLOR(); // !COLOR
    PRINT("DEAD", 4); // (.")
  } else
  {
    GetColor(BLUE);
    StoreCOLOR(); // !COLOR
    PRINT("COMATOSE", 8); // (.")
  }
  StoreCRS(); // !CRS
}


// ================================================
// 0xea81: WORD 'WEA83' codep=0x224c parp=0xea83
// ================================================

void WEA83() // WEA83
{
  unsigned short int a;
  Push(Read16(pp_WE91B)); // WE91B @
  a = Pop(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(a); // I
  WE91F(); // WE91F
  CTINIT(); // CTINIT
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    WE3E6(); // WE3E6
  }
  Push(0x65e1+WE689.offset); // WE689<IFIELD>
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
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
  Push(Read16(0x65e1+WE6A7.offset)&0xFF); // WE6A7<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(a); // I
  WE91F(); // WE91F
  Push(Read16(0x65e1+WE68E.offset)&0xFF); // WE68E<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(WE661); // from 'CREWMEMBER'
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(a); // I
  WE91F(); // WE91F
  Push(Read16(0x65e1+WE693.offset)&0xFF); // WE693<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(a); // I
  WE91F(); // WE91F
  Push(Read16(0x65e1+WE698.offset)&0xFF); // WE698<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(WE681); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(a); // I
  WE91F(); // WE91F
  Push(Read16(0x65e1+WE69D.offset)&0xFF); // WE69D<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x004a);
  Push(6);
  Push(a); // R>
  WE91F(); // WE91F
  Push(Read16(0x65e1+WE6A2.offset)&0xFF); // WE6A2<IFIELD> C@
  Push(3);
  DrawR(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  LoadData(WE679); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  DrawR(); // .R
}


// ================================================
// 0xeb51: WORD 'WEB53' codep=0x224c parp=0xeb53
// ================================================

void WEB53() // WEB53
{
  WE581(); // WE581
  Push(0x00c8);
  Push(0x0080);
  POS_dot_(); // POS.
  WE529(); // WE529
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  WE43A(); // WE43A
  WE5E1(); // WE5E1
  if (Pop() == 0) return;
  GetCRS(); // @CRS
  WE5BB(); // WE5BB
  if (Pop() != 0)
  {
    GetColor(RED);
  } else
  {
    GetColor(BLUE);
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
// 0xeba7: WORD 'WEBA9' codep=0x224c parp=0xeba9
// ================================================

void WEBA9() // WEBA9
{
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  Push(0x0087);
  Push(pp_FILE_n_); // FILE#
  Store_2(); // !_2
  GetCRS(); // @CRS
  CTINIT(); // CTINIT
  GetColor(BLACK);
  GetColor(BLACK);
  GetColor(DK_dash_BLUE);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(0x000a);
  Push(0x005c);
  POS_dot_(); // POS.
  PRINT("TYPE    : ", 10); // (.")
  LoadData(WE6B1); // from 'PSTATS'
  Push(9);
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(0x000a);
  Push(0x0050);
  POS_dot_(); // POS.
  PRINT("AVG. HT.: ", 10); // (.")
  LoadData(WE6B9); // from 'PSTATS'
  Push(Read16(Pop())&0xFF); //  C@
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
  LoadData(WE6C1); // from 'PSTATS'
  Push(Read16(Pop())&0xFF); //  C@
  Draw(); // .
  PRINT("KG", 2); // (.")
  StoreCRS(); // !CRS
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xec37: WORD 'WEC39' codep=0x224c parp=0xec39
// ================================================

void WEC39() // WEC39
{
  unsigned short int a, i, imax;
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  GetCRS(); // @CRS
  Push(0x0080);
  Push(5);
  Push(0x001e);
  Push(0x0099);
  GetColor(GREY1);
  POLY_dash_WI(); // POLY-WI
  Push(Read16(pp_WE91B)); // WE91B @
  a = Pop(); // >R
  Push(0x000e);
  GetColor(GREY1);
  Push(0x0030 + a); // 0x0030 I +
  Push(0x000a);
  POS_dot_PXT(); // POS.PXT
  Push(3);
  GetColor(GREY1);
  Push(0x0030 + a); // 0x0030 I +
  Push(0x007a);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(3);
    GetColor(GREY1);
    Push((i * 7 + 6) + a); // I 7 * 6 + J +
    Push(0x004a);
    POS_dot_PXT(); // POS.PXT
    Push(2 + (i==4?1:0) * 5); // 2 I 4 = 5 * +
    GetColor(GREY1);
    Push((i * 7 + 6) + a); // I 7 * 6 + J +
    Push(0x008d + (i==4?1:0) * 0xffea); // 0x008d I 4 = 0xffea * +
    POS_dot_PXT(); // POS.PXT
    i++;
  } while(i<imax); // (LOOP)

  Push(2);
  GetColor(GREY1);
  Push(0x003d + a); // 0x003d I +
  Push(0x0028);
  POS_dot_PXT(); // POS.PXT
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    WE3E6(); // WE3E6
  }
  Push(0x0028);
  Push(0x003d);
  Push(a); // R>
  WE91F(); // WE91F
  Push((Read16(0x65e1+WE6AC.offset)&0xFF) + 1); // WE6AC<IFIELD> C@ 1+
  Push(2);
  DrawR(); // .R
  Push(Read16(0x65e1+WE514.offset) & 1); // WE514<IFIELD> @ 1 AND
  if (Pop() != 0)
  {
    Push(0x0080);
    Push(0x0064);
    Push(0x001e);
    Push(0x0099);
    GetColor(GREY1);
    POLY_dash_WI(); // POLY-WI
    GetINST_dash_S(); // @INST-S
    Push(Read16(regsp)); // DUP
    WEB53(); // WEB53
    WEBA9(); // WEBA9
    WEA83(); // WEA83
  }
  WEA41(); // WEA41
  StoreCRS(); // !CRS
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xed3b: WORD 'WED3D' codep=0x224c parp=0xed3d params=1 returns=0
// ================================================

void WED3D() // WED3D
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  WE827(); // WE827
  WEC39(); // WEC39
}


// ================================================
// 0xed49: WORD 'WED4B' codep=0x224c parp=0xed4b
// ================================================

void WED4B() // WED4B
{
  unsigned short int a;
  Push(Read16(pp_NCRS)); // NCRS @
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(Read16(cc_WE4D4) - 1); // WE4D4 1-
  } else
  {
    Push(Read16(cc_WE4D4)); // WE4D4
    MOD(); // MOD
  }
  a = Pop(); // >R
  Push(a); // I
  Push(pp_OCRS); // OCRS
  Store_2(); // !_2
  Push(a); // I
  Push(pp_NCRS); // NCRS
  Store_2(); // !_2
  GetColor(GREY1);
  GetColor(RED);
  GetColor(RED);
  IsMRC(); // ?MRC
  StoreCOLOR(); // !COLOR
  Push(a); // I
  Push(0x65e1+INST_dash_SP.offset); // INST-SP<IFIELD>
  Store_2(); // !_2
  Push(a); // R>
  Push(pp_RECORD_n_); // RECORD#
  Store_2(); // !_2
  LoadData(WE669); // from 'CREWMEMBER'
  Push(0x65e1+WE68E.offset); // WE68E<IFIELD>
  Push(5);
  CMOVE_2(); // CMOVE_2
  Push(1);
  Push(0x65e1+WE514.offset); // WE514<IFIELD>
  Store_2(); // !_2
  Push(0x0064);
  Push(0x65e1+WE6A7.offset); // WE6A7<IFIELD>
  C_ex__2(); // C!_2
  Push(Read16(pp_XORMODE)); // XORMODE @
  if (Pop() != 0)
  {
    BLT(); // BLT
  }
  WEC39(); // WEC39
  LoadData(WE661); // from 'CREWMEMBER'
  Push((Read16(Pop())&0xFF) * 4 + 4); //  C@ 4 * 4 +
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
}


// ================================================
// 0xedc3: WORD 'WEDC5' codep=0x224c parp=0xedc5
// ================================================

void WEDC5() // WEDC5
{
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Push(!(Read16(pp_NCRS)==Read16(pp_OCRS)?1:0)); // NCRS @ OCRS @ = NOT
    if (Pop() != 0)
    {
      WED4B(); // WED4B
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
// 0xedf3: WORD 'WEDF5' codep=0x224c parp=0xedf5 params=0 returns=0
// ================================================

void WEDF5() // WEDF5
{
  PRINT("TYPE THIS CREWMEMBER'S NAME", 27); // (.")
}


// ================================================
// 0xee15: WORD 'WEE17' codep=0x224c parp=0xee17
// ================================================

void WEE17() // WEE17
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
// 0xee37: WORD 'WEE39' codep=0x1d29 parp=0xee39
// ================================================
// 0xee39: db 0x3a 0x20 ': '

// ================================================
// 0xee3b: WORD 'WEE3D' codep=0x224c parp=0xee3d
// ================================================

void WEE3D() // WEE3D
{
  unsigned short int a, i, imax;
  LoadData(WE671); // from 'CREWMEMBER'
  Push((Read16(Pop() + Read16(pp_OCRS))&0xFF) - (Read16((0x65e1+WE68E.offset) + Read16(pp_OCRS))&0xFF)); //  OCRS @ + C@ WE68E<IFIELD> OCRS @ + C@ -
  LoadData(WE679); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_MOD(); // /MOD
  SWAP(); // SWAP
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  WE500(); // WE500
  Push(0x86a0); Push(0x0001);
  DMIN(); // DMIN
  Push(0x012c);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
  MIN(); // MIN
  Push(pp_WEE39); // WEE39
  Store_2(); // !_2
  WE4E0(); // WE4E0
  Push(0);
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("BALANCE:", 8); // (.")
  WE500(); // WE500
  Push(7);
  D_dot_R(); // D.R
  PRINT(" COST: 300 SP/SESSION", 21); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("HOW MANY TRAINING SESSIONS (0-", 30); // (.")
  Push(Read16(pp_WEE39)); // WEE39 @
  Push(0);
  DrawR(); // .R
  PRINT(")\? ", 3); // (.")
  GetColor(BLUE);
  StoreCOLOR(); // !COLOR
  Push(-1);
  Push(pp__dash_AIN); // -AIN
  Store_2(); // !_2
  Push(3);
  WE4A2(); // WE4A2
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
    Push(Pop() * 0x000a + ((Read16(i)&0xFF) - 0x0030)); //  0x000a * I C@ 0x0030 - +
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(pp_WEE39)); // WEE39 @
  MIN(); // MIN
  Push(pp_WEE39); // WEE39
  Store_2(); // !_2
}


// ================================================
// 0xef29: WORD 'WEF2B' codep=0x224c parp=0xef2b
// ================================================

void WEF2B() // WEF2B
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
    WEDF5(); // WEDF5
    StoreCRS(); // !CRS
    Push(0);
  } else
  {
    Push(0x65e1+WE514.offset); // WE514<IFIELD>
    _099(); // 099
    WEC39(); // WEC39
    Push(1);
  }
  GetCRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR
  BLT(); // BLT
  StoreCRS(); // !CRS
  BLT(); // BLT
}


// ================================================
// 0xefd6: WORD 'WEFD8' codep=0x224c parp=0xefd8 params=0 returns=1
// ================================================

void WEFD8() // WEFD8
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
    Push(0x65e1+WE689.offset); // WE689<IFIELD>
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
// 0xf004: WORD 'WF006' codep=0x224c parp=0xf006
// ================================================

void WF006() // WF006
{
  Push(0);
  Push(0x001b);
  CMESS(); // CMESS
  WEDF5(); // WEDF5
  StoreCRS(); // !CRS
  Push(0x003c);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(8);
  Push(0x0032);
  Push(Read16(pp_WE91B)); // WE91B @
  WE91F(); // WE91F
  BLT(); // BLT
}


// ================================================
// 0xf02a: WORD 'WF02C' codep=0x224c parp=0xf02c
// ================================================

void WF02C() // WF02C
{
  WF006(); // WF006
  do
  {
    GetCRS(); // @CRS
    CTINIT(); // CTINIT
    IsCGA(); // ?CGA
    if (Pop() != 0)
    {
      GetColor(WHITE);
    } else
    {
      GetColor(BLUE);
    }
    StoreCOLOR(); // !COLOR
    Push(0x000a);
    Push(0x0030);
    Push(Read16(pp_WE91B)); // WE91B @
    WE91F(); // WE91F
    Push(pp__dash_AIN); // -AIN
    _099(); // 099
    Push(0x000d);
    WE4A2(); // WE4A2
    WE557(); // WE557
    Pop(); // DROP
    StoreCRS(); // !CRS
    WEFD8(); // WEFD8
    if (Pop() != 0)
    {
      PAD(); // PAD
      Push(0x65e1+WE689.offset); // WE689<IFIELD>
      _do__ex_(); // $!
      Push(1);
    } else
    {
      WEF2B(); // WEF2B
    }
  } while(Pop() == 0);
  BLT(); // BLT
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf080: WORD 'WF082' codep=0x224c parp=0xf082
// ================================================

void WF082() // WF082
{
  Push(0);
  _0MESS(); // 0MESS
  Push(1);
  _0MESS(); // 0MESS
  GetCRS(); // @CRS
  Push((Read16(0x65e1+WE514.offset)&0xFF)==0?1:0); // WE514<IFIELD> C@ 0=
  if (Pop() != 0)
  {
    Push(0x65e1+WE689.offset); // WE689<IFIELD>
    _099(); // 099
    Push(0x65e1+WE68E.offset); // WE68E<IFIELD>
    Push(5);
    Push(0);
    FILL_2(); // FILL_2
    Push(pp_NCRS); // NCRS
    _099(); // 099
    Push(pp_OCRS); // OCRS
    _099(); // 099
    Push(0x0075);
    Push(0x0024);
    Push(Read16(pp_WE91B)); // WE91B @
    WE91F(); // WE91F
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
    WE5EB(); // WE5EB
    StoreCRS(); // !CRS
    Push(pp_XORMODE); // XORMODE
    _099(); // 099
    Push(0);
    StoreINST_dash_S(); // !INST-S
    Push(pp_RECORD_n_); // RECORD#
    _099(); // 099
    GetCRS(); // @CRS
    WED4B(); // WED4B
    WEDC5(); // WEDC5
    WF02C(); // WF02C
    StoreCRS(); // !CRS
  } else
  {
    Push(0);
    Push(0x0016);
    CMESS(); // CMESS
    PRINT("THIS FILE IS NOT EMPTY", 22); // (.")
    StoreCRS(); // !CRS
    WEE17(); // WEE17
    Push(0);
    _0MESS(); // 0MESS
  }
  StoreCRS(); // !CRS
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  WE604(); // WE604
  StoreCRS(); // !CRS
  Push(1);
  WE620(); // WE620
}


// ================================================
// 0xf147: WORD 'WF149' codep=0x224c parp=0xf149
// ================================================

void WF149() // WF149
{
  WE4E0(); // WE4E0
  Push(0);
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("SELECT SKILL ^\\", 15); // (.")
  StoreCRS(); // !CRS
  Push(1);
  Push(0x0012);
  CMESS(); // CMESS
  WE5EB(); // WE5EB
  StoreCRS(); // !CRS
}


// ================================================
// 0xf175: WORD 'WF177' codep=0x224c parp=0xf177
// ================================================

void WF177() // WF177
{
  Push(Read16(0x65e1+WE514.offset) & 2); // WE514<IFIELD> @ 2 AND
  if (Pop() != 0)
  {
    Push(0);
    _0MESS(); // 0MESS
    Push(0);
    Push(0x0021);
    CMESS(); // CMESS
    PRINT("YOU CAN'T TRAIN ", 16); // (.")
    WE647(); // WE647
  } else
  {
    Push(0);
    Push(0x001d);
    CMESS(); // CMESS
    PRINT("THERE IS NO ONE HERE TO TRAIN", 29); // (.")
    StoreCRS(); // !CRS
  }
  WEE17(); // WEE17
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1da: WORD 'WF1DC' codep=0x224c parp=0xf1dc params=0 returns=2
// ================================================

void WF1DC() // WF1DC
{
  Push(0x012c); Push(0x0000);
  WE50A(); // WE50A
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(0);
  Push(0x0012);
  CMESS(); // CMESS
  PRINT("INSUFFICIENT FUNDS", 18); // (.")
  BEEP(); // BEEP
  StoreCRS(); // !CRS
  WEE17(); // WEE17
  Push(0);
  _0MESS(); // 0MESS
}


// ================================================
// 0xf215: WORD 'WF217' codep=0x224c parp=0xf217
// ================================================

void WF217() // WF217
{
  LoadData(WE671); // from 'CREWMEMBER'
  Push((Read16(Pop() + Read16(pp_OCRS))&0xFF)==(Read16((0x65e1+WE68E.offset) + Read16(pp_OCRS))&0xFF)?1:0); //  OCRS @ + C@ WE68E<IFIELD> OCRS @ + C@ =
  if (Pop() != 0)
  {
    WE4E0(); // WE4E0
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
    WEE17(); // WEE17
    WE4E0(); // WE4E0
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xf299: WORD 'WF29B' codep=0x1d29 parp=0xf29b
// ================================================
// 0xf29b: db 0x04 0xa5 0x0d 0x09 0x1f 0x9e 0x0d 0x09 0x2b 0x97 0x0d 0x09 0x2f 0x90 0x0d 0x09 0x3b 0x89 0x0d 0x09 0x23 '        +   /   ;   #'

// ================================================
// 0xf2b0: WORD 'WF2B2' codep=0x224c parp=0xf2b2
// ================================================

void WF2B2() // WF2B2
{
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    GetColor(RED);
    return;
  }
  GetColor(GREY2);
}


// ================================================
// 0xf2c2: WORD 'WF2C4' codep=0x224c parp=0xf2c4
// ================================================

void WF2C4() // WF2C4
{
  WF2B2(); // WF2B2
  Push(pp_CRSCOLO); // CRSCOLO
  Store_2(); // !_2
  WF149(); // WF149
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_WF29B); // WF29B
  BLD_dash_CRS(); // BLD-CRS
  do
  {
    XYSCAN(); // XYSCAN
    Pop(); // DROP
    Push(Pop() * -1); //  -1 *
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    Push(pp_WF29B); // WF29B
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  WF217(); // WF217
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    WEE3D(); // WEE3D
    Push(0x012c);
    Push(Read16(pp_WEE39)); // WEE39 @
    U_star_(); // U*
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      DNEGATE(); // DNEGATE
      Push(0xc2ed); // 'T+BALAN'
      MODULE(); // MODULE
    } else
    {
      Pop(); Pop(); // 2DROP
    }
    Push(Read16((0x65e1+WE68E.offset) + Read16(pp_OCRS))&0xFF); // WE68E<IFIELD> OCRS @ + C@
    LoadData(WE679); // from 'CREWMEMBER'
    Push(Read16(Pop())&0xFF); //  C@
    Push((Read16(0x65e1+WE514.offset)&0xFF) & 0x0010); // WE514<IFIELD> C@ 0x0010 AND
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(0);
    }
    Push(Pop() * Read16(pp_WEE39)); //  WEE39 @ *
    Push(Pop() + Pop()); // +
    LoadData(WE671); // from 'CREWMEMBER'
    Push(Read16(Pop() + Read16(pp_OCRS))&0xFF); //  OCRS @ + C@
    MIN(); // MIN
    Push((0x65e1+WE68E.offset) + Read16(pp_OCRS)); // WE68E<IFIELD> OCRS @ +
    C_ex__2(); // C!_2
    WEC39(); // WEC39
  }
  WF2B2(); // WF2B2
  StoreCOLOR(); // !COLOR
  BLT(); // BLT
  Push(0);
  _0MESS(); // 0MESS
  WE3EE(); // WE3EE
}


// ================================================
// 0xf368: WORD 'WF36A' codep=0x224c parp=0xf36a params=0 returns=1
// ================================================

void WF36A() // WF36A
{
  GetINST_dash_S(); // @INST-S
  Push(Pop()==4?1:0); //  4 =
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  Push(0);
  Push(0x0019);
  CMESS(); // CMESS
  PRINT("ANDROIDS CAN'T BE TRAINED", 25); // (.")
  StoreCRS(); // !CRS
  WEE17(); // WEE17
}


// ================================================
// 0xf3a0: WORD 'WF3A2' codep=0x224c parp=0xf3a2
// ================================================

void WF3A2() // WF3A2
{
  WE4E0(); // WE4E0
  Push(Read16(0x65e1+WE514.offset) + 1 & 3); // WE514<IFIELD> @ 1 XOR 3 AND
  if (Pop() != 0)
  {
    WF177(); // WF177
  } else
  {
    WF36A(); // WF36A
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WF1DC(); // WF1DC
      if (Pop() != 0)
      {
        GetCRS(); // @CRS
        WF2C4(); // WF2C4
        StoreCRS(); // !CRS
      }
    }
  }
  Push(0);
  _0MESS(); // 0MESS
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  WE604(); // WE604
  StoreCRS(); // !CRS
  Push(1);
  WE620(); // WE620
}


// ================================================
// 0xf3e4: WORD 'WF3E6' codep=0x224c parp=0xf3e6 params=0 returns=0
// ================================================

void WF3E6() // WF3E6
{
  Push(0x65e1+WE514.offset); // WE514<IFIELD>
  _099(); // 099
  Push(0x65e1+WE689.offset); // WE689<IFIELD>
  Push(0x000f);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0xf3f6: WORD 'WF3F8' codep=0x224c parp=0xf3f8
// ================================================

void WF3F8() // WF3F8
{
  WE4E0(); // WE4E0
  Push((Read16(0x65e1+WE514.offset)&0xFF)==0?1:0); // WE514<IFIELD> C@ 0=
  if (Pop() != 0)
  {
    Push(0);
    Push(0x001a);
    CMESS(); // CMESS
    PRINT("THIS FILE IS ALREADY EMPTY", 26); // (.")
    StoreCRS(); // !CRS
    WEE17(); // WEE17
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
      WF3E6(); // WF3E6
      WEC39(); // WEC39
    }
    WE4E0(); // WE4E0
  }
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  WE604(); // WE604
  StoreCRS(); // !CRS
  Push(1);
  WE620(); // WE620
}


// ================================================
// 0xf494: WORD 'WF496' codep=0x224c parp=0xf496
// ================================================

void WF496() // WF496
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  WE3EE(); // WE3EE
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_NCRS); // NCRS
  _099(); // 099
  WE6C9(); // WE6C9
  WE874(); // WE874
  Push(pp_WE861); // WE861
  BLD_dash_CRS(); // BLD-CRS
  Push(0x0081);
  WE927(); // WE927
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  WEC39(); // WEC39
  Push(0);
  Push(0x0015);
  CMESS(); // CMESS
  WE604(); // WE604
  StoreCRS(); // !CRS
  Push(1);
  WE620(); // WE620
}


// ================================================
// 0xf4ca: WORD 'PFILE-FUNCTI' codep=0x4b3b parp=0xf4db
// ================================================

void PFILE_dash_FUNCTI() // PFILE-FUNCTI
{
  switch(Pop()) // PFILE-FUNCTI
  {
  case 0:
    WF082(); // WF082
    break;
  case 1:
    WF3A2(); // WF3A2
    break;
  case 2:
    WF3F8(); // WF3F8
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
  WE3FE(); // WE3FE
  a = Pop(); // >R
  WE4EC(); // WE4EC
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  WF496(); // WF496
  do
  {
    XYSCAN(); // XYSCAN
    Push(pp_NCRS); // NCRS
    _plus__ex__2(); // +!_2
    WED3D(); // WED3D
    Push(pp_WE861); // WE861
    SET_dash_CRS(); // SET-CRS
    Pop(); // DROP
    IsTRIG(); // ?TRIG
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(!Pop()); //  NOT
      Push(Read16(pp_OCRS)); // OCRS @
      PFILE_dash_FUNCTI(); // PFILE-FUNCTI case
    }
  } while(Pop() == 0);
  Push(4);
  WE4F6(); // WE4F6
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(a); // R>
  WE3FE(); // WE3FE
  OVER(); // OVER
  Push(Pop()==0?1:0); //  0=
  b = Pop(); // >R
  Push((Pop()==Pop())?1:0); // =
  Push(!Pop() & b); //  NOT R> AND
  if (Pop() == 0) return;
  Push(0x000f);
  Push(pp_Is10); // ?10
  Store_2(); // !_2
}

// 0xf555: db 0x50 0x46 0x49 0x4c 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'PFIL_______ '

