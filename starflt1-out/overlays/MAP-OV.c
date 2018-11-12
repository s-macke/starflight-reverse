// ====== OVERLAY 'MAP-OV' ======
// store offset = 0xe520
// overlay size   = 0x1040

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WE536  codep:0x1d29 wordp:0xe536 size:0x0002 C-string:'WE536'
//           WE53A  codep:0x1d29 wordp:0xe53a size:0x0002 C-string:'WE53A'
//           WE53E  codep:0x1d29 wordp:0xe53e size:0x0002 C-string:'WE53E'
//           WE542  codep:0x1d29 wordp:0xe542 size:0x0002 C-string:'WE542'
//           WE546  codep:0x1d29 wordp:0xe546 size:0x0002 C-string:'WE546'
//           WE54A  codep:0x1d29 wordp:0xe54a size:0x0002 C-string:'WE54A'
//           WE54E  codep:0x1d29 wordp:0xe54e size:0x0002 C-string:'WE54E'
//           WE552  codep:0x1d29 wordp:0xe552 size:0x0002 C-string:'WE552'
//           WE556  codep:0x1d29 wordp:0xe556 size:0x0002 C-string:'WE556'
//           WE55A  codep:0x744d wordp:0xe55a size:0x0003 C-string:'WE55A'
//           WE55F  codep:0x744d wordp:0xe55f size:0x0003 C-string:'WE55F'
//           WE564  codep:0x744d wordp:0xe564 size:0x0003 C-string:'WE564'
//           WE569  codep:0x1d29 wordp:0xe569 size:0x000c C-string:'WE569'
//           WE577  codep:0x1d29 wordp:0xe577 size:0x0002 C-string:'WE577'
//           WE57B  codep:0x224c wordp:0xe57b size:0x0018 C-string:'WE57B'
//           WE595  codep:0x224c wordp:0xe595 size:0x007c C-string:'WE595'
//           WE613  codep:0x224c wordp:0xe613 size:0x005e C-string:'WE613'
//           WE673  codep:0x224c wordp:0xe673 size:0x0012 C-string:'WE673'
//           WE687  codep:0x224c wordp:0xe687 size:0x0096 C-string:'WE687'
//           WE71F  codep:0x224c wordp:0xe71f size:0x000a C-string:'WE71F'
//           WE72B  codep:0x224c wordp:0xe72b size:0x00eb C-string:'WE72B'
//           WE818  codep:0x224c wordp:0xe818 size:0x0042 C-string:'WE818'
//           WE85C  codep:0x224c wordp:0xe85c size:0x004a C-string:'WE85C'
//           WE8A8  codep:0x224c wordp:0xe8a8 size:0x0048 C-string:'WE8A8'
//           WE8F2  codep:0x224c wordp:0xe8f2 size:0x004e C-string:'WE8F2'
//           WE942  codep:0x224c wordp:0xe942 size:0x003a C-string:'WE942'
//           WE97E  codep:0x224c wordp:0xe97e size:0x0036 C-string:'WE97E'
//           WE9B6  codep:0x224c wordp:0xe9b6 size:0x0006 C-string:'WE9B6'
//           WE9BE  codep:0x224c wordp:0xe9be size:0x008c C-string:'WE9BE'
//           WEA4C  codep:0x224c wordp:0xea4c size:0x0022 C-string:'WEA4C'
//           WEA70  codep:0x224c wordp:0xea70 size:0x0030 C-string:'WEA70'
//           WEAA2  codep:0x224c wordp:0xeaa2 size:0x000a C-string:'WEAA2'
//           WEAAE  codep:0x224c wordp:0xeaae size:0x0016 C-string:'WEAAE'
//           WEAC6  codep:0x224c wordp:0xeac6 size:0x0010 C-string:'WEAC6'
//           WEAD8  codep:0x224c wordp:0xead8 size:0x0040 C-string:'WEAD8'
//           WEB1A  codep:0x224c wordp:0xeb1a size:0x001e C-string:'WEB1A'
//           WEB3A  codep:0x224c wordp:0xeb3a size:0x0055 C-string:'WEB3A'
//           WEB91  codep:0x224c wordp:0xeb91 size:0x003c C-string:'WEB91'
//           WEBCF  codep:0x224c wordp:0xebcf size:0x003e C-string:'WEBCF'
//           WEC0F  codep:0x224c wordp:0xec0f size:0x0046 C-string:'WEC0F'
//           WEC57  codep:0x224c wordp:0xec57 size:0x0029 C-string:'WEC57'
//           WEC82  codep:0x224c wordp:0xec82 size:0x0028 C-string:'WEC82'
//           WECAC  codep:0x224c wordp:0xecac size:0x0012 C-string:'WECAC'
//           WECC0  codep:0x224c wordp:0xecc0 size:0x008a C-string:'WECC0'
//           WED4C  codep:0x224c wordp:0xed4c size:0x0014 C-string:'WED4C'
//      (/STARMAP)  codep:0x224c wordp:0xed6f size:0x0000 C-string:'_ro__slash_STARMAP_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCALE; // *MAPSCALE
extern const unsigned short int cc_NULL_dash_ICON; // NULL-ICON
extern const unsigned short int cc_SYS_dash_ICO; // SYS-ICO
extern const unsigned short int pp_CLIP_dash_TABLE; // CLIP-TABLE
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp__n_IN; // #IN
extern const unsigned short int pp_VIN; // VIN
extern const unsigned short int pp_VOUT; // VOUT
extern const unsigned short int pp_OIN; // OIN
extern const unsigned short int pp_OOUT; // OOUT
extern const unsigned short int pp_IsOPEN; // ?OPEN
extern const unsigned short int pp_ILEFT; // ILEFT
extern const unsigned short int pp_IRIGHT; // IRIGHT
extern const unsigned short int pp_IBELOW; // IBELOW
extern const unsigned short int pp_IABOVE; // IABOVE
extern const unsigned short int pp_LOCRADIUS; // LOCRADIUS
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp_BVIS; // BVIS
extern const unsigned short int pp_LVIS; // LVIS
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_NAV_dash_TIME; // NAV-TIME
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_LKEYTIM; // LKEYTIM
extern const unsigned short int pp_XWLD_c_XPIX; // XWLD:XPIX
extern const unsigned short int pp_YWLD_c_YPIX; // YWLD:YPIX
extern const unsigned short int pp_ANCHOR_dash_CONTOUR; // ANCHOR-CONTOUR
extern const unsigned short int pp_LSCAN; // LSCAN
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color ORANGE; // ORANGE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MIN(); // MIN
void D_st_(); // D<
void _n_(); // #
void _n__gt_(); // #>
void _st__n_(); // <#
void DrawR(); // .R
void MS(); // MS
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_gt_(); // D>
void SQRT(); // SQRT
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void _2_ex_(); // 2!
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void StoreCOLOR(); // !COLOR
void DCLIPSET(); // DCLIPSET
void _gt_DISPLAY(); // >DISPLAY
void DARK(); // DARK
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void FILLCIRC(); // FILLCIRC
void StoreVISWINDOW(); // !VISWINDOW
void _gt_1ICONFONT(); // >1ICONFONT
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIC(); // @IC
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_ICON(); // POINT>ICON
void IsICONSI(); // ?ICONSI
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
void CLICK(); // CLICK
void POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void TIME(); // TIME
void GetDS(); // @DS
void CLIPPER(); // CLIPPER
void LPLOT(); // LPLOT
void LLINE(); // LLINE
void IsINVIS(); // ?INVIS
void WLD_gt_SCR(); // WLD>SCR


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WE536 = 0xe536; // WE536 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE53A = 0xe53a; // WE53A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE53E = 0xe53e; // WE53E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE542 = 0xe542; // WE542 size: 2
// {0xe8, 0x03}

const unsigned short int pp_WE546 = 0xe546; // WE546 size: 2
// {0x20, 0x03}

const unsigned short int pp_WE54A = 0xe54a; // WE54A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE54E = 0xe54e; // WE54E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE552 = 0xe552; // WE552 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE556 = 0xe556; // WE556 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE569 = 0xe569; // WE569 size: 12
// {0x20, 0x10, 0x81, 0x40, 0x3b, 0x02, 0x10, 0x88, 0x40, 0x20, 0x00, 0x81}

const unsigned short int pp_WE577 = 0xe577; // WE577 size: 2
// {0x80, 0xf7}




// 0xe532: db 0x92 0x00 '  '

// ================================================
// 0xe534: WORD 'WE536' codep=0x1d29 wordp=0xe536
// ================================================
// 0xe536: db 0x3a 0x20 ': '

// ================================================
// 0xe538: WORD 'WE53A' codep=0x1d29 wordp=0xe53a
// ================================================
// 0xe53a: db 0x3a 0x20 ': '

// ================================================
// 0xe53c: WORD 'WE53E' codep=0x1d29 wordp=0xe53e
// ================================================
// 0xe53e: db 0x3a 0x20 ': '

// ================================================
// 0xe540: WORD 'WE542' codep=0x1d29 wordp=0xe542
// ================================================
// 0xe542: db 0xe8 0x03 '  '

// ================================================
// 0xe544: WORD 'WE546' codep=0x1d29 wordp=0xe546
// ================================================
// 0xe546: db 0x20 0x03 '  '

// ================================================
// 0xe548: WORD 'WE54A' codep=0x1d29 wordp=0xe54a
// ================================================
// 0xe54a: db 0x3a 0x20 ': '

// ================================================
// 0xe54c: WORD 'WE54E' codep=0x1d29 wordp=0xe54e
// ================================================
// 0xe54e: db 0x3a 0x20 ': '

// ================================================
// 0xe550: WORD 'WE552' codep=0x1d29 wordp=0xe552
// ================================================
// 0xe552: db 0x3a 0x20 ': '

// ================================================
// 0xe554: WORD 'WE556' codep=0x1d29 wordp=0xe556
// ================================================
// 0xe556: db 0x3a 0x20 ': '

// ================================================
// 0xe558: WORD 'WE55A' codep=0x744d wordp=0xe55a
// ================================================
IFieldType WE55A = {FLUX_NODEIDX, 0x0b, 0x02};

// ================================================
// 0xe55d: WORD 'WE55F' codep=0x744d wordp=0xe55f
// ================================================
IFieldType WE55F = {FLUX_NODEIDX, 0x11, 0x02};

// ================================================
// 0xe562: WORD 'WE564' codep=0x744d wordp=0xe564
// ================================================
IFieldType WE564 = {SHIPIDX, 0x13, 0x02};

// ================================================
// 0xe567: WORD 'WE569' codep=0x1d29 wordp=0xe569
// ================================================
// 0xe569: db 0x20 0x10 0x81 0x40 0x3b 0x02 0x10 0x88 0x40 0x20 0x00 0x81 '   @;   @   '

// ================================================
// 0xe575: WORD 'WE577' codep=0x1d29 wordp=0xe577
// ================================================
// 0xe577: db 0x80 0xf7 '  '

// ================================================
// 0xe579: WORD 'WE57B' codep=0x224c wordp=0xe57b params=0 returns=0
// ================================================

void WE57B() // WE57B
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(pp_WE54A); // WE54A
  Store_3(); // !_3
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(pp_WE54E); // WE54E
  Store_3(); // !_3
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe593: WORD 'WE595' codep=0x224c wordp=0xe595 params=0 returns=0
// ================================================

void WE595() // WE595
{
  Push(Read16(pp_WE542) - 0x0044 * Read16(cc__star_MAPSCALE)); // WE542 @ 0x0044 *MAPSCALE * -
  Push(0);
  MAX(); // MAX
  Push(Read16(cc__star_MAPSCALE) * 0x006f); // *MAPSCALE 0x006f *
  MIN(); // MIN
  Push(Read16(pp_WE546) - 0x0029 * Read16(cc__star_MAPSCALE)); // WE546 @ 0x0029 *MAPSCALE * -
  Push(0);
  MAX(); // MAX
  Push(Read16(cc__star_MAPSCALE) * 0x0089); // *MAPSCALE 0x0089 *
  MIN(); // MIN
  OVER(); // OVER
  Push(Pop() + 0x008b * Read16(cc__star_MAPSCALE)); //  0x008b *MAPSCALE * +
  OVER(); // OVER
  Push(Pop() + 0x0053 * Read16(cc__star_MAPSCALE)); //  0x0053 *MAPSCALE * +
  StoreVISWINDOW(); // !VISWINDOW
  Push(0x00c8 * Read16(cc__star_MAPSCALE)); // 0x00c8 *MAPSCALE *
  Push(pp_LOCRADIUS); // LOCRADIUS
  Store_3(); // !_3
  Push(Read16(pp_WE542)); // WE542 @
  Push(pp_XABS); // XABS
  Store_3(); // !_3
  Push(Read16(pp_WE546)); // WE546 @
  Push(pp_YABS); // YABS
  Store_3(); // !_3
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe611: WORD 'WE613' codep=0x224c wordp=0xe613 params=0 returns=0
// ================================================

void WE613() // WE613
{
  Push(0x00c7);
  Push(0x009f);
  Push(0x0021);
  Push(0x0014);
  Push(Read16(regsp)); // DUP
  Push(pp_ILEFT); // ILEFT
  Store_3(); // !_3
  Push(pp_CLIP_dash_TABLE + 0x0012); // CLIP-TABLE 0x0012 +
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(pp_IBELOW); // IBELOW
  Store_3(); // !_3
  Push(pp_CLIP_dash_TABLE + 0x000d); // CLIP-TABLE 0x000d +
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(pp_IRIGHT); // IRIGHT
  Store_3(); // !_3
  Push(pp_CLIP_dash_TABLE + 8); // CLIP-TABLE 8 +
  Store_3(); // !_3
  Push(Read16(regsp)); // DUP
  Push(pp_IABOVE); // IABOVE
  Store_3(); // !_3
  Push(pp_CLIP_dash_TABLE + 3); // CLIP-TABLE 3 +
  Store_3(); // !_3
  Push(0x0014);
  Push(pp_XLLDEST); // XLLDEST
  Store_3(); // !_3
  Push(0x0021);
  Push(pp_YLLDEST); // YLLDEST
  Store_3(); // !_3
}


// ================================================
// 0xe671: WORD 'WE673' codep=0x224c wordp=0xe673 params=0 returns=0
// ================================================

void WE673() // WE673
{
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  Push(2);
  Push(pp_YWLD_c_YPIX); // YWLD:YPIX
  _2_ex_(); // 2!
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  Push(1);
  Push(pp_XWLD_c_XPIX); // XWLD:XPIX
  _2_ex_(); // 2!
}


// ================================================
// 0xe685: WORD 'WE687' codep=0x224c wordp=0xe687 params=0 returns=0
// ================================================

void WE687() // WE687
{
  unsigned short int i, imax, j, jmax, k, kmax, l, lmax;
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  Push(0x0011);
  Push(0x00c7);
  Push(0x0011);
  Push(0x001e);
  LLINE(); // LLINE

  i = 0x002b;
  imax = 0x00c7;
  do // (DO)
  {
    Push(0x0012);
    Push(i); // I
    LPLOT(); // LPLOT
    Push(0x000a);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)


  j = 0x0053;
  jmax = 0x00c7;
  do // (DO)
  {
    Push(0x0013);
    Push(j); // I
    LPLOT(); // LPLOT
    Push(0x0032);
    int step = Pop();
    j += step;
    if (((step>=0) && (j>=jmax)) || ((step<0) && (j<=jmax))) break;
  } while(1); // (+LOOP)

  Push(0x009c);
  Push(0x001d);
  Push(0x0011);
  Push(0x001d);
  LLINE(); // LLINE

  k = 0x0019;
  kmax = 0x009c;
  do // (DO)
  {
    Push(k); // I
    Push(0x001e);
    Push(k); // I
    Push(0x001f);
    LLINE(); // LLINE
    Push(5);
    int step = Pop();
    k += step;
    if (((step>=0) && (k>=kmax)) || ((step<0) && (k<=kmax))) break;
  } while(1); // (+LOOP)


  l = 0x002d;
  lmax = 0x009c;
  do // (DO)
  {
    Push(l); // I
    Push(0x0020);
    LPLOT(); // LPLOT
    Push(0x0019);
    int step = Pop();
    l += step;
    if (((step>=0) && (l>=lmax)) || ((step<0) && (l<=lmax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe71d: WORD 'WE71F' codep=0x224c wordp=0xe71f params=0 returns=1
// ================================================

void WE71F() // WE71F
{
  GetColor(GREY1);
  GetColor(GREY1);
  GetColor(LT_dash_BLUE);
  IsMRC(); // ?MRC
}


// ================================================
// 0xe729: WORD 'WE72B' codep=0x224c wordp=0xe72b params=0 returns=0
// ================================================

void WE72B() // WE72B
{
  Push(0x0013);
  Push(4);
  Push(1);
  Push(0x009b);
  WE71F(); // WE71F
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  Push(0x009b);
  Push(0);
  Push(5);
  Push(0);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x0013);
  Push(5);
  Push(0x0013);
  LLINE(); // LLINE
  Push(0x0017);
  Push(9);
  Push(0x0017);
  Push(0);
  LLINE(); // LLINE
  Push(0x0044);
  Push(9);
  Push(0x0044);
  Push(0);
  LLINE(); // LLINE
  Push(4);
  Push(0x0013);
  Push(4);
  Push(0);
  LLINE(); // LLINE
  Push(0x002b);
  Push(0x0013);
  Push(0x002b);
  Push(0);
  LLINE(); // LLINE
  Push(0x005d);
  Push(0x0013);
  Push(0x005d);
  Push(0);
  LLINE(); // LLINE
  Push(0x0083);
  Push(0x0013);
  Push(0x0083);
  Push(0);
  LLINE(); // LLINE
  Push(0x009c);
  Push(0x0013);
  Push(0x009c);
  Push(0);
  LLINE(); // LLINE
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(9);
  Push(0x0010);
  POS_dot_(); // POS.
  PRINT("POSITION", 8); // (.")
  Push(0x002f);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("DESTINATION", 11); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("DISTANCE", 8); // (.")
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  Store_3(); // !_3
  PRINT("FUEL", 4); // (.")
}


// ================================================
// 0xe816: WORD 'WE818' codep=0x224c wordp=0xe818
// ================================================

void WE818() // WE818
{
  Push(Read16(pp_WE542)); // WE542 @
  Push(Read16(pp_WE546)); // WE546 @
  WLD_gt_SCR(); // WLD>SCR
  Push(Pop() + 6); //  6 +
  SWAP(); // SWAP
  Push(Pop() - 3); //  3 -
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x000d);
  Push(pp_LBLT); // LBLT
  Store_3(); // !_3
  Push(7);
  Push(pp_WBLT); // WBLT
  Store_3(); // !_3
  Push(pp_WE569); // WE569
  Push(pp_ABLT); // ABLT
  Store_3(); // !_3
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  GetColor(ORANGE);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_3(); // ON_3
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
}


// ================================================
// 0xe85a: WORD 'WE85C' codep=0x224c wordp=0xe85c
// ================================================

void WE85C() // WE85C
{
  Push(Read16(pp_WE54A)); // WE54A @
  Push(Read16(pp_WE54E)); // WE54E @
  _2DUP(); // 2DUP
  IsINVIS(); // ?INVIS
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_3(); // !_3
  if (Pop() != 0)
  {
    WLD_gt_SCR(); // WLD>SCR
    Push(Pop() + 1); //  1+
    SWAP(); // SWAP
    Push(Pop() - 1); //  1-
    SWAP(); // SWAP
    POS_dot_(); // POS.
    Push(3);
    Push(pp_LBLT); // LBLT
    Store_3(); // !_3
    Push(3);
    Push(pp_WBLT); // WBLT
    Store_3(); // !_3
    Push(pp_WE577); // WE577
    Push(pp_ABLT); // ABLT
    Store_3(); // !_3
    GetColor(BLUE);
    StoreCOLOR(); // !COLOR
    Push(pp_XORMODE); // XORMODE
    OFF(); // OFF
    BLT(); // BLT
    Push(pp_XORMODE); // XORMODE
    ON_3(); // ON_3
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe8a6: WORD 'WE8A8' codep=0x224c wordp=0xe8a8 params=0 returns=1
// ================================================

void WE8A8() // WE8A8
{
  unsigned short int i, imax;
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT

  i = 0x0028;
  imax = 0x009c;
  do // (DO)
  {
    Push(i); // I
    Push(0x001a);
    POS_dot_(); // POS.
    Push(3);
    GetColor(BLACK);
    POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
    Push(Read16(pp_LVIS)); // LVIS @
    Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
    _slash_(); // /
    Push((Pop() + i) - 0x000f); //  I + 0x000f -
    Push(0);
    _st__n_(); // <#
    _n_(); // #
    _n_(); // #
    _n_(); // #
    _n__gt_(); // #>
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x0019);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe8f0: WORD 'WE8F2' codep=0x224c wordp=0xe8f2 params=0 returns=1
// ================================================

void WE8F2() // WE8F2
{
  unsigned short int i, imax;
  GetColor(GREY2);
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT

  i = 0x0055;
  imax = 0x00c7;
  do // (DO)
  {
    Push(4);
    Push(i); // I
    POS_dot_(); // POS.
    Push(3);
    GetColor(BLACK);
    POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
    Push(1);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    Push(Read16(pp_BVIS)); // BVIS @
    Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
    _slash_(); // /
    Push(Pop() + (i - 0x0023 >> 1)); //  I 0x0023 - 2/ +
    Push(0);
    _st__n_(); // <#
    _n_(); // #
    _n_(); // #
    _n_(); // #
    _n__gt_(); // #>
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x0032);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe940: WORD 'WE942' codep=0x224c wordp=0xe942
// ================================================

void WE942() // WE942
{
  unsigned short int i, imax;
  Push(Read16(cc_NULL_dash_ICON)); // NULL-ICON
  Push(Read16(cc_SYS_dash_ICO)); // SYS-ICO
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONSI(); // ?ICONSI
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    POINT_gt_ICON(); // POINT>ICON
    GetIC(); // @IC
    StoreCOLOR(); // !COLOR
    GetIX(); // @IX
    GetIY(); // @IY
    WLD_gt_SCR(); // WLD>SCR
    GetID(); // @ID
    Push((Pop() - Read16(cc_NULL_dash_ICON)) * Read16(cc__star_MAPSCALE)); //  NULL-ICON - *MAPSCALE *
    Push(pp_YWLD_c_YPIX); // YWLD:YPIX
    _2_at_(); // 2@
    SWAP(); // SWAP
    _star__slash_(); // */
    FILLCIRC(); // FILLCIRC
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe97c: WORD 'WE97E' codep=0x224c wordp=0xe97e
// ================================================

void WE97E() // WE97E
{
  unsigned short int i, imax;
  Push(Read16(cc_SYS_dash_ICO) - 1); // SYS-ICO 1-
  Push(Read16(cc_SYS_dash_ICO) + 1); // SYS-ICO 1+
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONSI(); // ?ICONSI
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    POINT_gt_ICON(); // POINT>ICON
    GetIC(); // @IC
    StoreCOLOR(); // !COLOR
    GetIX(); // @IX
    GetIY(); // @IY
    IsINVIS(); // ?INVIS
    if (Pop() != 0)
    {
      GetIX(); // @IX
      GetIY(); // @IY
      WLD_gt_SCR(); // WLD>SCR
      LPLOT(); // LPLOT
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe9b4: WORD 'WE9B6' codep=0x224c wordp=0xe9b6 params=1 returns=1
// ================================================

void WE9B6() // WE9B6
{
  Push(Pop() + pp_LSCAN); //  LSCAN +
}


// ================================================
// 0xe9bc: WORD 'WE9BE' codep=0x224c wordp=0xe9be
// ================================================

void WE9BE() // WE9BE
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_st_(); // D<
  if (Pop() != 0)
  {
    _2SWAP(); // 2SWAP
  }
  Push(0);
  WE9B6(); // WE9B6
  Store_3(); // !_3
  Push(2);
  WE9B6(); // WE9B6
  Store_3(); // !_3
  Push(4);
  WE9B6(); // WE9B6
  Store_3(); // !_3
  Push(6);
  WE9B6(); // WE9B6
  Store_3(); // !_3
  Push(2);
  Push(pp__n_IN); // #IN
  Store_3(); // !_3
  Push(0);
  WE9B6(); // WE9B6
  Push(pp_VIN); // VIN
  Store_3(); // !_3
  Push(0x0014);
  WE9B6(); // WE9B6
  Push(pp_VOUT); // VOUT
  Store_3(); // !_3
  Push(0x0028);
  WE9B6(); // WE9B6
  Push(pp_OIN); // OIN
  Store_3(); // !_3
  Push(0x003c);
  WE9B6(); // WE9B6
  Push(pp_OOUT); // OOUT
  Store_3(); // !_3
  Push(pp_IsOPEN); // ?OPEN
  ON_3(); // ON_3
  CLIPPER(); // CLIPPER
  Push(Read16(pp__n_IN)); // #IN @
  Push(pp_IsOPEN); // ?OPEN
  OFF(); // OFF
  if (Pop() != 0)
  {
    Push(Read16(pp_VIN)); // VIN @
    a = Pop(); // >R
    Push(Read16(a + 2)); // I 2+ @
    Push(Read16(a)); // I @
    Push(Read16(a + 6)); // I 6 + @
    Push(Read16(a + 4)); // R> 4 + @
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xea4a: WORD 'WEA4C' codep=0x224c wordp=0xea4c
// ================================================

void WEA4C() // WEA4C
{
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  WLD_gt_SCR(); // WLD>SCR
  Push(Read16(0x63ef+WE55A.offset)); // WE55A<IFIELD> @
  Push(Read16(0x63ef+WE55F.offset)); // WE55F<IFIELD> @
  WLD_gt_SCR(); // WLD>SCR
  ICLOSE(); // ICLOSE
  WE9BE(); // WE9BE
  if (Pop() == 0) return;
  LLINE(); // LLINE
}


// ================================================
// 0xea6e: WORD 'WEA70' codep=0x224c wordp=0xea70
// ================================================

void WEA70() // WEA70
{
  unsigned short int i, imax;
  GetColor(GREY1);
  StoreCOLOR(); // !COLOR

  i = 0;
  imax = Read16(pp_ILOCAL); // ILOCAL @
  do // (DO)
  {
    Push(i); // I
    POINT_gt_ICON(); // POINT>ICON
    GetID(); // @ID
    Push(Pop()==0x00ff?1:0); //  0x00ff =
    GetIC(); // @IC
    Push(Pop()==3?1:0); //  3 =
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      WEA4C(); // WEA4C
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeaa0: WORD 'WEAA2' codep=0x224c wordp=0xeaa2
// ================================================

void WEAA2() // WEAA2
{
  WEA70(); // WEA70
  WE97E(); // WE97E
  WE942(); // WE942
  WE85C(); // WE85C
}


// ================================================
// 0xeaac: WORD 'WEAAE' codep=0x224c wordp=0xeaae params=0 returns=0
// ================================================

void WEAAE() // WEAAE
{
  Push(0x00c7);
  Push(0x0014);
  Push(0x0021);
  Push(0x009f);
  GetColor(BLACK);
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
}


// ================================================
// 0xeac4: WORD 'WEAC6' codep=0x224c wordp=0xeac6
// ================================================

void WEAC6() // WEAC6
{
  WEAAE(); // WEAAE
  WE595(); // WE595
  WE613(); // WE613
  WEAA2(); // WEAA2
  DCLIPSET(); // DCLIPSET
  WE8A8(); // WE8A8
  WE8F2(); // WE8F2
}


// ================================================
// 0xead6: WORD 'WEAD8' codep=0x224c wordp=0xead8 params=0 returns=2
// ================================================

void WEAD8() // WEAD8
{
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x0033);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE71F(); // WE71F
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(Read16(pp_WE542) + 3); // WE542 @ 3+
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(3);
  DrawR(); // .R
  Push(0x004b);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE71F(); // WE71F
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(Read16(pp_WE546) + 3); // WE546 @ 3+
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xeb18: WORD 'WEB1A' codep=0x224c wordp=0xeb1a params=0 returns=0
// ================================================

void WEB1A() // WEB1A
{
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x006b);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE71F(); // WE71F
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(Read16(pp_WE552)); // WE552 @
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xeb38: WORD 'WEB3A' codep=0x224c wordp=0xeb3a params=0 returns=0
// ================================================

void WEB3A() // WEB3A
{
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x008a);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE71F(); // WE71F
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(Read16(pp_WE552) * Read16(cc__star_MAPSCALE)); // WE552 @ *MAPSCALE *
  Push(Read16(pp__dash_END)); // -END @
  Push(0x0064);
  _star__slash_(); // */
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(3);
    DrawR(); // .R
    return;
  }
  Push(Read16(pp_WE552)); // WE552 @
  if (Pop() != 0)
  {
    Push(0x008e);
    Push(7);
    POS_dot_(); // POS.
    PRINT("<1", 2); // (.")
    return;
  }
  Push(0);
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xeb8f: WORD 'WEB91' codep=0x224c wordp=0xeb91 params=0 returns=4
// ================================================

void WEB91() // WEB91
{
  Push(Read16(pp_WE54A) - Read16(pp_WE542)); // WE54A @ WE542 @ -
  ABS(); // ABS
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(Read16(pp_WE54E) - Read16(pp_WE546)); // WE54E @ WE546 @ -
  ABS(); // ABS
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_WE552); // WE552
  Store_3(); // !_3
  WEAD8(); // WEAD8
  WEB1A(); // WEB1A
  WEB3A(); // WEB3A
}


// ================================================
// 0xebcd: WORD 'WEBCF' codep=0x224c wordp=0xebcf params=0 returns=2
// ================================================

void WEBCF() // WEBCF
{
  _gt_1FONT(); // >1FONT
  GetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(9);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE71F(); // WE71F
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(Read16(pp_WE54A) + 3); // WE54A @ 3+
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(3);
  DrawR(); // .R
  Push(0x001d);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  WE71F(); // WE71F
  POLY_dash_ERASE_dash_TEXT(); // POLY-ERASE-TEXT
  Push(Read16(pp_WE54E) + 3); // WE54E @ 3+
  Push(Read16(cc__star_MAPSCALE)); // *MAPSCALE
  _slash_(); // /
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xec0d: WORD 'WEC0F' codep=0x224c wordp=0xec0f params=0 returns=0
// ================================================

void WEC0F() // WEC0F
{
  Push(Read16(pp_WE542) + Read16(pp_WE53A)); // WE542 @ WE53A @ +
  Push(0);
  MAX(); // MAX
  Push(0x00f9 * Read16(cc__star_MAPSCALE)); // 0x00f9 *MAPSCALE *
  MIN(); // MIN
  Push(Pop() - Read16(pp_WE542)); //  WE542 @ -
  Push(pp_WE53A); // WE53A
  Store_3(); // !_3
  Push(Read16(pp_WE546) + Read16(pp_WE53E)); // WE546 @ WE53E @ +
  Push(0);
  MAX(); // MAX
  Push(0x00db * Read16(cc__star_MAPSCALE)); // 0x00db *MAPSCALE *
  MIN(); // MIN
  Push(Pop() - Read16(pp_WE546)); //  WE546 @ -
  Push(pp_WE53E); // WE53E
  Store_3(); // !_3
}


// ================================================
// 0xec55: WORD 'WEC57' codep=0x224c wordp=0xec57 params=0 returns=0
// ================================================

void WEC57() // WEC57
{
  SET_STR_AS_PARAM("I CAN'T GET OUR BEARINGS, CAPTAIN.");
  DrawTTY(); // .TTY
}


// ================================================
// 0xec80: WORD 'WEC82' codep=0x224c wordp=0xec82 params=0 returns=0
// ================================================

void WEC82() // WEC82
{
  SET_STR_AS_PARAM("WE'RE NOT IN HYPERSPACE, CAPTAIN.");
  DrawTTY(); // .TTY
}


// ================================================
// 0xecaa: WORD 'WECAC' codep=0x224c wordp=0xecac params=1 returns=0
// ================================================

void WECAC() // WECAC
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  if (Pop() != 0)
  {
    WEC82(); // WEC82
    return;
  }
  WEC57(); // WEC57
}


// ================================================
// 0xecbe: WORD 'WECC0' codep=0x224c wordp=0xecc0
// ================================================

void WECC0() // WECC0
{
  do
  {
    XYSCAN(); // XYSCAN
    Push(0x00fa); Push(0x0000);
    Push(pp_KEYTIME); // KEYTIME
    _2_at_(); // 2@
    Push(pp_LKEYTIM); // LKEYTIM
    _2_at_(); // 2@
    D_dash_(); // D-
    D_gt_(); // D>
    Push((Pop() * Read16(pp_WE536)) * 2); //  WE536 @ * 2*
    Push(1);
    MAX(); // MAX
    Push(0x000a);
    MIN(); // MIN
    Push(pp_WE536); // WE536
    Store_3(); // !_3
    Push((Pop() * Read16(pp_WE536)) * Read16(cc__star_MAPSCALE)); //  WE536 @ * *MAPSCALE *
    Push(pp_WE53A); // WE53A
    Store_3(); // !_3
    Push((Pop() * Read16(pp_WE536)) * Read16(cc__star_MAPSCALE)); //  WE536 @ * *MAPSCALE *
    Push(pp_WE53E); // WE53E
    Store_3(); // !_3
    WEC0F(); // WEC0F
    Push(Read16(pp_WE53A)); // WE53A @
    Push(Read16(pp_WE53E)); // WE53E @
    D0_eq_(); // D0=
    Push(!Pop()); //  NOT
    if (Pop() != 0)
    {
      WE818(); // WE818
      Push(Read16(pp_WE53A)); // WE53A @
      Push(pp_WE542); // WE542
      _plus__ex__2(); // +!_2
      Push(Read16(pp_WE53E)); // WE53E @
      Push(pp_WE546); // WE546
      _plus__ex__2(); // +!_2
      Push(Read16(pp_WE542)); // WE542 @
      Push(Read16(pp_WE546)); // WE546 @
      IsINVIS(); // ?INVIS
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        WEAC6(); // WEAC6
      }
      WE818(); // WE818
      WEB91(); // WEB91
      CLICK(); // CLICK
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
}


// ================================================
// 0xed4a: WORD 'WED4C' codep=0x224c wordp=0xed4c
// ================================================

void WED4C() // WED4C
{
  unsigned short int i, imax;

  i = 0;
  imax = 7;
  do // (DO)
  {
    WE818(); // WE818
    Push(0x00c8);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xed60: WORD '(/STARMAP)' codep=0x224c wordp=0xed6f params=0 returns=1
// ================================================
// entry

void _ro__slash_STARMAP_rc_() // (/STARMAP)
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIME); // NAV-TIME
  _2_at_(); // 2@
  D_gt_(); // D>
  Push(Pop() & (Read16(pp_CONTEXT_dash_ID_n_)==3?1:0)); //  CONTEXT-ID# @ 3 = AND
  if (Pop() != 0)
  {
    Push(Read16(pp_BVIS)); // BVIS @
    Push(Read16(pp_LVIS)); // LVIS @
    Push2Words("*SHIP");
    _gt_C_plus_S(); // >C+S
    Push((Read16((0x63ef+WE564.offset) + 1)&0xFF) & 7); // WE564<IFIELD> 1+ C@ 7 AND
    Push(Read16(0x63ef+WE564.offset)&0xFF); // WE564<IFIELD> C@
    Push(0x0064);
    _star__slash_(); // */
    ICLOSE(); // ICLOSE
    Push(pp_WE556); // WE556
    Store_3(); // !_3
    Push(Read16(pp_LOCRADIUS)); // LOCRADIUS @
    Push(Read16(pp_XABS)); // XABS @
    Push(Read16(pp_YABS)); // YABS @
    WE57B(); // WE57B
    DCLIPSET(); // DCLIPSET
    WE673(); // WE673
    _gt_DISPLAY(); // >DISPLAY
    DARK(); // DARK
    WE687(); // WE687
    WE72B(); // WE72B
    WEAC6(); // WEAC6
    WEB91(); // WEB91
    DCLIPSET(); // DCLIPSET
    Push(pp_XORMODE); // XORMODE
    OFF(); // OFF
    WEBCF(); // WEBCF
    WEAD8(); // WEAD8
    WEB1A(); // WEB1A
    WEB3A(); // WEB3A
    WED4C(); // WED4C
    WECC0(); // WECC0
    Push(pp_YABS); // YABS
    Store_3(); // !_3
    Push(pp_XABS); // XABS
    Store_3(); // !_3
    Push(pp_LOCRADIUS); // LOCRADIUS
    Store_3(); // !_3
    Push(0xec78);
    Push(Read16(regsp)); // DUP
    Push(pp_ANCHOR_dash_CONTOUR); // ANCHOR-CONTOUR
    StoreD(); // D!
    ORGLIST(); // ORGLIST
    _gt_1ICONFONT(); // >1ICONFONT
    Push(8);
    Push(0x0030);
    Push(pp_YWLD_c_YPIX); // YWLD:YPIX
    StoreD(); // D!
    Push(8);
    Push(0x0020);
    Push(pp_XWLD_c_XPIX); // XWLD:XPIX
    StoreD(); // D!
    Push(pp_LVIS); // LVIS
    Store_3(); // !_3
    Push(pp_BVIS); // BVIS
    Store_3(); // !_3
    Push(pp_XLLDEST); // XLLDEST
    OFF(); // OFF
    Push(pp_YLLDEST); // YLLDEST
    OFF(); // OFF
    Push(1);
    return;
  }
  Push(!(Read16(pp_CONTEXT_dash_ID_n_)==3?1:0)); // CONTEXT-ID# @ 3 = NOT
  WECAC(); // WECAC
  Push(0);
}

// 0xee31: db 0x2a 0x4d 0x41 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x20 0x72 0x66 0x67 0x32 0x37 0x6a 0x61 0x6e 0x38 0x36 0x29 0x47 0x31 0x31 0x34 0x36 0x22 0xdc 0x1b 0x04 0x4e 0x4f 0x4e 0x45 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x09 0x53 0x48 0x49 0x45 0x4c 0x44 0x53 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x70 0x00 0xb0 0xeb 0xae 0x0b 0xc8 0x0d 0xfa 0x15 0x58 0x00 0x8b 0xeb 0x92 0x0c 0x3d 0x0f 0x5f 0x12 0x07 0x13 0xfa 0x15 0x42 0x00 0xdc 0x1b 0x06 0x43 0x4c 0x41 0x53 0x53 0x20 0x5d 0x17 0xc8 0x00 0x4c 0x0f 0xb8 0x27 0xdc 0x1b 0x0b 0x45 0x51 0x55 0x49 0x56 0x41 0x4c 0x45 0x4e 0x54 0x20 0xa4 0x50 0xfa 0x15 0x0f 0x00 0xdc 0x1b 0x06 0x52 0x41 0x49 0x53 0x45 0x44 0x60 0x16 0x0c 0x00 0xdc 0x1b 0x07 0x4c 0x4f 0x57 0x45 0x52 0x45 0x44 0x60 0x16 0x06 0x00 0x32 0x0e 0x60 0xec 0x60 0x16 0x10 0x00 0x74 0xee 0xdc 0x1b 0x09 0x20 0x41 0x50 0x50 0x41 0x52 0x45 0x4e 0x54 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x0f 0x57 0x45 0x41 0x50 0x4f 0x4e 0x20 0x53 0x54 0x41 0x54 0x55 0x53 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x19 0x00 0xb2 0x50 0x07 0x13 0xfa 0x15 0x09 0x00 0xdc 0x1b 0x04 0x4e 0x4f 0x54 0x20 0xdc 0x1b 0x05 0x41 0x52 0x4d 0x45 0x44 0x90 0x16 0x4c 0x22 0x41 0x0e 0x93 0xeb 0x73 0x3b 0x72 0x0f 0x72 0x0f 0x92 0x0c 0xfa 0x15 0x3e 0x00 0xc8 0x0d 0xfa 0x15 0x0e 0x00 0x93 0xeb 0xf6 0x0f 0x72 0x0f 0x92 0x0c 0x60 0x16 0x04 0x00 0x8b 0x3b 0x9b 0x54 0x76 0x6d 0x5d 0x17 0x1a 0x00 0x8d 0x54 0x76 0x6d 0x83 0xeb 0x5d 0x17 0x10 0x00 0x5d 0x17 0x2e 0x00 0x67 0xaf 0xe6 0x06 0x8a 0x79 0xd3 0xa4 0x5d 0x17 0x0f 0x00 0xa5 0x29 0x60 0x16 0x04 0x00 0x32 0x0e 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x0e 0x43 0x4f 0x4e 0x53 0x54 0x49 0x54 0x55 0x45 0x4e 0x54 0x53 0x3a 0x20 0x28 0xa5 0x20 0x0f 0x3a 0xef 0x2e 0x0f 0x3a 0xef 0x3d 0x0f 0x3a 0xef 0x73 0x3b 0x3a 0xef 0x90 0x16 0x4c 0x22 0xad 0x62 0x02 0x7a 0xa9 0x74 0xae 0x0b 0xc9 0x79 0x90 0x16 0x4c 0x22 0x5d 0x17 0x14 0x00 0x2e 0x0f 0x51 0xa1 0x6f 0x4f 0x17 0x85 0xdc 0x1b 0x0e 0x4f 0x52 0x42 0x49 0x54 0x20 0x4e 0x55 0x4d 0x42 0x45 0x52 0x3a 0x20 0x28 0xa5 0xb5 0xef 0xb8 0x27 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x41 0x52 0x43 0x54 0x49 0x43 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x53 0x55 0x42 0x2d 0xea 0xef 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x09 0x54 0x45 0x4d 0x50 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x54 0x52 0x4f 0x50 0x49 0x43 0x41 0x4c 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x53 0x45 0x41 0x52 0x49 0x4e 0x47 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x49 0x4e 0x46 0x45 0x52 0x4e 0x4f 0x90 0x16 0x00 0x00 0x86 0x2e 0x54 0x44 0x45 0x53 0xc3 0x4f 0x4a 0x06 0x00 0x48 0x3a 0x00 0x00 0xf9 0xef 0x01 0x00 0xec 0xef 0x02 0x00 0x06 0xf0 0x03 0x00 0x16 0xf0 0x04 0x00 0x25 0xf0 0x05 0x00 0x33 0xf0 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x0d 0x54 0x45 0x4d 0x50 0x45 0x52 0x41 0x54 0x55 0x52 0x45 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x25 0x00 0xf5 0xeb 0x92 0x0c 0xed 0xeb 0x92 0x0c 0x41 0x0e 0x48 0xf0 0x7f 0x0e 0x5f 0x12 0xfa 0x15 0x08 0x00 0x32 0x0e 0x60 0x16 0x0b 0x00 0xdc 0x1b 0x04 0x20 0x54 0x4f 0x20 0x48 0xf0 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x03 0x47 0x41 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x4c 0x49 0x51 0x55 0x49 0x44 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x46 0x52 0x4f 0x5a 0x45 0x4e 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x52 0x4f 0x43 0x4b 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x4d 0x4f 0x4c 0x54 0x45 0x4e 0x90 0x16 0x3f 0xee 0x87 0x28 0x2e 0x53 0x55 0x52 0x46 0xa9 0x4f 0x4a 0x05 0x00 0x62 0xec 0x01 0x00 0xa7 0xf0 0x02 0x00 0xb1 0xf0 0x03 0x00 0xbe 0xf0 0x05 0x00 0xcb 0xf0 0x04 0x00 0xd6 0xf0 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x15 0x50 0x52 0x45 0x44 0x4f 0x4d 0x49 0x4e 0x41 0x4e 0x54 0x20 0x53 0x55 0x52 0x46 0x41 0x43 0x45 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x08 0x00 0xc5 0xeb 0x92 0x0c 0xeb 0xf0 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x09 0x47 0x52 0x41 0x56 0x49 0x54 0x59 0x3a 0x20 0xc7 0xed 0x41 0x0e 0xe7 0x58 0x76 0x6d 0xfa 0x15 0x46 0x00 0xcd 0xeb 0xae 0x0b 0x41 0x0e 0x5d 0x17 0x20 0x03 0x2d 0x12 0xfa 0x15 0x18 0x00 0x5d 0x17 0x20 0x03 0x92 0x0f 0x20 0x0f 0xa5 0x4b 0x5d 0x17 0x0a 0x00 0xb3 0x0f 0x5d 0x17 0x20 0x03 0x72 0x0f 0x5d 0x17 0x64 0x00 0x60 0x0f 0x20 0x0f 0xe1 0x27 0xdc 0x1b 0x01 0x2e 0x5d 0x17 0x0a 0x00 0x60 0x0f 0x20 0x0f 0xe1 0x27 0xb8 0x27 0xdc 0x1b 0x01 0x47 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x54 0x48 0x49 0x4e 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0x91 0xf1 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x54 0x48 0x49 0x43 0x4b 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0xb9 0xf1 0x90 0x16 0xe3 0xf0 0x87 0x28 0x2e 0x41 0x54 0x4d 0x4f 0xa9 0x4f 0x4a 0x05 0x00 0x76 0xee 0x01 0x00 0x9e 0xf1 0x02 0x00 0x93 0xf1 0x03 0x00 0xac 0xf1 0x04 0x00 0xbb 0xf1 0x05 0x00 0xc7 0xf1 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x15 0x41 0x54 0x4d 0x4f 0x53 0x50 0x48 0x45 0x52 0x49 0x43 0x20 0x44 0x45 0x4e 0x53 0x49 0x54 0x59 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x08 0x00 0xe5 0xeb 0x92 0x0c 0xdd 0xf1 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x43 0x41 0x4c 0x4d 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x56 0x49 0x4f 0x4c 0x45 0x4e 0x54 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0x3b 0xf2 0x90 0x16 0xf7 0xec 0x88 0x28 0x2e 0x57 0x45 0x41 0x54 0x48 0xa9 0x4f 0x4a 0x04 0x00 0x76 0xee 0x01 0x00 0x23 0xf2 0x02 0x00 0x2e 0xf2 0x03 0x00 0x3d 0xf2 0x04 0x00 0x4b 0xf2 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x10 0x47 0x4c 0x4f 0x42 0x41 0x4c 0x20 0x57 0x45 0x41 0x54 0x48 0x45 0x52 0x3a 0x20 0xc7 0xed 0xfa 0x15 0x08 0x00 0xdd 0xeb 0xae 0x0b 0x62 0xf2 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x11 0x20 0x53 0x50 0x45 0x43 0x54 0x52 0x41 0x4c 0x20 0x43 0x4c 0x41 0x53 0x53 0x3a 0x20 0x28 0xa5 0x30 0x75 0x6b 0x06 0x90 0x16 0x29 0x1d 0x4d 0x4b 0x47 0x46 0x41 0x42 0x4f 0x4c 0x22 0xb4 0x0d 0x3d 0x0f 0x93 0x3b 0x20 0x0f 0xb8 0x15 0xe7 0x0f 0xbd 0xf2 0x50 0x0e 0x72 0x0f 0x92 0x0c 0x6e 0x0e 0x5f 0x12 0xfa 0x15 0x04 0x00 0x4a 0x17 0xd0 0x15 0xea 0xff 0x90 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x0c 0x20 0x45 0x43 0x4f 0x53 0x50 0x48 0x45 0x52 0x45 0x3a 0x20 0x30 0x75 0xc6 0xf2 0x41 0x0e 0x28 0xa5 0x25 0x10 0xb8 0x27 0xdc 0x1b 0x02 0x2d 0x20 0x9b 0x3b 0xad 0x11 0xb8 0x27 0x90 0x16 0x4c 0x22 0x07 0xee 0xdc 0x1b 0x08 0x20 0x53 0x54 0x41 0x54 0x45 0x3a 0x20 0xc7 0xed 0xfa 0x15 0xb8 0x00 0xfd 0xeb 0xae 0x0b 0x72 0x5e 0xae 0x0b 0x92 0x0f 0x41 0x0e 0xb4 0x0d 0x2e 0x0f 0x5d 0x17 0x8f 0x01 0x57 0x40 0x07 0x13 0x7a 0x56 0xae 0x0b 0x3e 0x13 0xfa 0x15 0x25 0x00 0xdc 0x1b 0x07 0x53 0x54 0x41 0x42 0x4c 0x45 0x20 0x02 0xec 0xfa 0x15 0x11 0x00 0xdc 0x1b 0x0c 0x28 0x50 0x4f 0x53 0x54 0x2d 0x46 0x4c 0x41 0x52 0x45 0x29 0x60 0x16 0x6f 0x00 0x50 0x0e 0x5d 0x17 0x3c 0x00 0x2d 0x12 0xfa 0x15 0x1e 0x00 0xab 0x4f 0x17 0x85 0xdc 0x1b 0x11 0x53 0x4c 0x49 0x47 0x48 0x54 0x4c 0x59 0x20 0x55 0x4e 0x53 0x54 0x41 0x42 0x4c 0x45 0x60 0x16 0x47 0x00 0x93 0x4f 0x17 0x85 0xd3 0xa4 0xdc 0x1b 0x25 0x20 0x20 0x55 0x4e 0x53 0x54 0x41 0x42 0x4c 0x45 0x20 0x2d 0x20 0x45 0x53 0x54 0x49 0x4d 0x41 0x54 0x45 0x44 0x20 0x54 0x49 0x4d 0x45 0x20 0x54 0x4f 0x20 0x46 0x4c 0x41 0x52 0x45 0x3a 0xd3 0xa4 0x3d 0x0f 0xa5 0x29 0x50 0x0e 0xb8 0x27 0xdc 0x1b 0x0a 0x41 0x52 0x54 0x48 0x20 0x44 0x41 0x59 0x53 0x2e 0x90 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x70 0xed 0x90 0x16 0x4c 0x22 0x8c 0xef 0x90 0x16 0x4c 0x22 0x59 0xee 0x70 0xed 0x7f 0xee 0x05 0xef 0x90 0x16 0x00 0x00 0x8a 0x28 0x2e 0x56 0x2f 0x50 0x2d 0x4f 0x42 0x4a 0xa9 0x4f 0x4a 0x02 0x00 0xf7 0xf3 0x16 0x00 0xeb 0xf3 0x18 0x00 0xf1 0xf3 0x4c 0x22 0x30 0x75 0x0e 0xf4 0x90 0x16 0x4c 0x22 0xc3 0xef 0x05 0xf1 0x2f 0xf1 0xf7 0xf1 0x66 0xf0 0x78 0xf2 0x90 0x16 0x4c 0x22 0x9d 0xf2 0xf0 0xf2 0x24 0xec 0xbb 0xc7 0xae 0x0b 0xfa 0x15 0x04 0x00 0x1c 0xf3 0x90 0x16 0x03 0xf4 0x8b 0x28 0x2e 0x41 0x4e 0x41 0x4c 0x59 0x53 0x49 0x53 0xa9 0x4f 0x4a 0x03 0x00 0x6e 0x3a 0x20 0x00 0x26 0xf4 0x17 0x00 0x36 0xf4 0x19 0x00 0x1e 0xf4 0x4a 0xf4 0x8b 0x28 0x2f 0x41 0x4e 0x41 0x4c 0x59 0x53 0x49 0x53 0xa9 0x4c 0x22 0x28 0xa5 0x81 0xa1 0xd8 0x60 0x95 0x49 0xf0 0x0d 0xa5 0x10 0x16 0x16 0x02 0x00 0x00 0x00 0x46 0x40 0xfa 0x15 0x16 0x00 0xf2 0x79 0x17 0xed 0x1e 0x75 0x56 0xf4 0xc9 0x79 0x16 0x16 0x58 0x1b 0x00 0x00 0x60 0x16 0x57 0x00 0x3e 0x13 0xfa 0x15 0x26 0x00 0xdc 0x1b 0x1d 0x49 0x20 0x53 0x41 0x49 0x44 0x20 0x54 0x48 0x45 0x52 0x45 0x27 0x53 0x20 0x4e 0x4f 0x54 0x48 0x49 0x4e 0x47 0x20 0x54 0x48 0x45 0x52 0x45 0x21 0x60 0x16 0x25 0x00 0xdc 0x1b 0x20 0x49 0x20 0x4e 0x45 0x45 0x44 0x20 0x41 0x20 0x43 0x55 0x52 0x52 0x45 0x4e 0x54 0x20 0x53 0x45 0x4e 0x53 0x4f 0x52 0x20 0x52 0x45 0x41 0x44 0x49 0x4e 0x47 0x2e 0x32 0x0e 0x16 0x16 0xdc 0x05 0x00 0x00 0x98 0x2a 0x38 0x0c 0x65 0x10 0x3e 0x62 0xac 0x6d 0xb8 0x48 0xd8 0x60 0x92 0x6d 0x90 0x16 0x41 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x72 0x6c 0x61 0x79 0x20 0x53 0x75 0x66 0x66 0x69 0x78 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x39 0x2f 0x31 0x30 0x2f 0x38 0x35 0x29 0x31 0x31 0x35 0x35 0x44 0x4f 0x43 0x54 0x4f 0x52 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 '*MAP____________________________------------------( rfg27jan86)G1146"   NONE  L"     SHIELDS:     p         X     = _     B    CLASS ]   L  '   EQUIVALENT  P       RAISED`      LOWERED`   2 ` `   t     APPARENT  L"     WEAPON STATUS:        P         NOT    ARMED  L"A   s;r r     >           r   `    ; Tvm]    Tvm  ]   ] . g    y  ]    )`   2   L"     CONSTITUENTS: (   : . : = : s;:   L" b z t   y  L"]   . Q oO     ORBIT NUMBER: (    '  L"   ARCTIC  L"   SUB-    L"   TEMPERATE  L"   TROPICAL  L"   SEARING  L"   INFERNO     .TDES OJ  H:                  %   3 L"     TEMPERATURE:     %         A H  _     2 `       TO H   L"   GAS  L"   LIQUID  L"   FROZEN  L"   ROCK  L"   MOLTEN  ?  (.SURF OJ  b                     L"     PREDOMINANT SURFACE:               L"     GRAVITY:   A  Xvm  F     A ]   -     ]        K]     ]   r ] d `    '   .]   `    ' '   G  L"   THIN  L"   VERY     L"   MODERATE  L"   THICK  L"   VERY        (.ATMO OJ  v                     L"     ATMOSPHERIC DENSITY:               L"   CALM  L"   MODERATE  L"   VIOLENT  L"   VERY ;      (.WEATH OJ  v   #   .   =   K L"     GLOBAL WEATHER:           b   L"      SPECTRAL CLASS: ( 0uk   ) MKGFABOL"  =  ;        P r   n _     J       2   L"      ECOSPHERE: 0u  A ( %  '   -  ;   '  L"      STATE:           r^    A   . ]   W@  zV  >   %    STABLE          (POST-FLARE)` o P ] < -      O     SLIGHTLY UNSTABLE` G  O      %  UNSTABLE - ESTIMATED TIME TO FLARE:  =  )P  '   ARTH DAYS.  2   L"p   L"    L"Y p         (.V/P-OBJ OJ            L"0u    L"    /   f x   L"    $                (.ANALYSIS OJ  n:  &   6     J  (/ANALYSIS L"(    ` I          F@     y   uV  y  X   ` W >   &    I SAID THERE'S NOTHING THERE!` %    I NEED A CURRENT SENSOR READING.2        *8 e >b m H ` m  AN-VOC__________________________rlay Suffix-------------9/10/85)1155DOCTOR----------- '

