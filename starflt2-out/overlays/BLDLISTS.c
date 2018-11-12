// ====== OVERLAY 'BLDLISTS' ======
// store offset = 0xeb70
// overlay size   = 0x09f0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WEB86  codep:0x2214 wordp:0xeb86 size:0x0002 C-string:'WEB86'
//           WEB8A  codep:0x2214 wordp:0xeb8a size:0x0002 C-string:'WEB8A'
//           WEB8E  codep:0x2214 wordp:0xeb8e size:0x0002 C-string:'WEB8E'
//           WEB92  codep:0x2214 wordp:0xeb92 size:0x0002 C-string:'WEB92'
//           WEB96  codep:0x2214 wordp:0xeb96 size:0x0002 C-string:'WEB96'
//           WEB9A  codep:0x7420 wordp:0xeb9a size:0x0003 C-string:'WEB9A'
//           WEB9F  codep:0x7420 wordp:0xeb9f size:0x0003 C-string:'WEB9F'
//           WEBA4  codep:0x7420 wordp:0xeba4 size:0x0003 C-string:'WEBA4'
//           WEBA9  codep:0x7420 wordp:0xeba9 size:0x0003 C-string:'WEBA9'
//           WEBAE  codep:0x7394 wordp:0xebae size:0x0006 C-string:'WEBAE'
//           WEBB6  codep:0x7394 wordp:0xebb6 size:0x0006 C-string:'WEBB6'
//           WEBBE  codep:0x7394 wordp:0xebbe size:0x0006 C-string:'WEBBE'
//           WEBC6  codep:0x7394 wordp:0xebc6 size:0x0006 C-string:'WEBC6'
//           WEBCE  codep:0x7394 wordp:0xebce size:0x0006 C-string:'WEBCE'
//           WEBD6  codep:0x7394 wordp:0xebd6 size:0x0006 C-string:'WEBD6'
//           WEBDE  codep:0x7394 wordp:0xebde size:0x0006 C-string:'WEBDE'
//           WEBE6  codep:0x7394 wordp:0xebe6 size:0x0006 C-string:'WEBE6'
//           WEBEE  codep:0x7394 wordp:0xebee size:0x0006 C-string:'WEBEE'
//           WEBF6  codep:0x7394 wordp:0xebf6 size:0x0006 C-string:'WEBF6'
//           WEBFE  codep:0x7394 wordp:0xebfe size:0x0006 C-string:'WEBFE'
//           WEC06  codep:0x7394 wordp:0xec06 size:0x0006 C-string:'WEC06'
//           WEC0E  codep:0x7394 wordp:0xec0e size:0x0006 C-string:'WEC0E'
//           WEC16  codep:0x7394 wordp:0xec16 size:0x0006 C-string:'WEC16'
//           WEC1E  codep:0x7394 wordp:0xec1e size:0x0006 C-string:'WEC1E'
//           WEC26  codep:0x7394 wordp:0xec26 size:0x0006 C-string:'WEC26'
//           WEC2E  codep:0x7394 wordp:0xec2e size:0x0006 C-string:'WEC2E'
//           WEC36  codep:0x7394 wordp:0xec36 size:0x0006 C-string:'WEC36'
//           WEC3E  codep:0x7394 wordp:0xec3e size:0x0006 C-string:'WEC3E'
//           WEC46  codep:0x7394 wordp:0xec46 size:0x0006 C-string:'WEC46'
//           WEC4E  codep:0x7394 wordp:0xec4e size:0x0006 C-string:'WEC4E'
//           WEC56  codep:0x7394 wordp:0xec56 size:0x0006 C-string:'WEC56'
//           WEC5E  codep:0x224c wordp:0xec5e size:0x000c C-string:'WEC5E'
//           WEC6C  codep:0x224c wordp:0xec6c size:0x000c C-string:'WEC6C'
//           WEC7A  codep:0x224c wordp:0xec7a size:0x0006 C-string:'WEC7A'
//           WEC82  codep:0x224c wordp:0xec82 size:0x000e C-string:'WEC82'
//           WEC92  codep:0x224c wordp:0xec92 size:0x0038 C-string:'WEC92'
//           WECCC  codep:0x224c wordp:0xeccc size:0x0036 C-string:'WECCC'
//           !TAMT  codep:0x224c wordp:0xed0c size:0x0012 C-string:'StoreTAMT'
//           @TAMT  codep:0x224c wordp:0xed28 size:0x000e C-string:'GetTAMT'
//           WED38  codep:0x7394 wordp:0xed38 size:0x0006 C-string:'WED38'
//           WED40  codep:0x7394 wordp:0xed40 size:0x0006 C-string:'WED40'
//           WED48  codep:0x7394 wordp:0xed48 size:0x0006 C-string:'WED48'
//           WED50  codep:0x7394 wordp:0xed50 size:0x0006 C-string:'WED50'
//           WED58  codep:0x7394 wordp:0xed58 size:0x0006 C-string:'WED58'
//           WED60  codep:0x7394 wordp:0xed60 size:0x0006 C-string:'WED60'
//           WED68  codep:0x7394 wordp:0xed68 size:0x0006 C-string:'WED68'
//           WED70  codep:0x224c wordp:0xed70 size:0x0010 C-string:'WED70'
//           WED82  codep:0x224c wordp:0xed82 size:0x0006 C-string:'WED82'
//           WED8A  codep:0x224c wordp:0xed8a size:0x0006 C-string:'WED8A'
//           WED92  codep:0x224c wordp:0xed92 size:0x0006 C-string:'WED92'
//           WED9A  codep:0x224c wordp:0xed9a size:0x0006 C-string:'WED9A'
//        (GET.BAS  codep:0x4b3b wordp:0xedad size:0x0014 C-string:'_ro_GET_dot_BAS'
//        (GETUSE)  codep:0x4b3b wordp:0xedce size:0x0014 C-string:'_ro_GETUSE_rc_'
//           WEDE4  codep:0x224c wordp:0xede4 size:0x000c C-string:'WEDE4'
//           WEDF2  codep:0x224c wordp:0xedf2 size:0x0012 C-string:'WEDF2'
//           WEE06  codep:0x224c wordp:0xee06 size:0x0014 C-string:'WEE06'
//           WEE1C  codep:0x1d29 wordp:0xee1c size:0x0005 C-string:'WEE1C'
//           WEE23  codep:0x1d29 wordp:0xee23 size:0x0005 C-string:'WEE23'
//           WEE2A  codep:0x1d29 wordp:0xee2a size:0x0005 C-string:'WEE2A'
//           WEE31  codep:0x224c wordp:0xee31 size:0x000c C-string:'WEE31'
//           WEE3F  codep:0x224c wordp:0xee3f size:0x0010 C-string:'WEE3F'
//           WEE51  codep:0x224c wordp:0xee51 size:0x0004 C-string:'WEE51'
//           WEE57  codep:0x224c wordp:0xee57 size:0x0010 C-string:'WEE57'
//           WEE69  codep:0x224c wordp:0xee69 size:0x0010 C-string:'WEE69'
//           WEE7B  codep:0x224c wordp:0xee7b size:0x000c C-string:'WEE7B'
//           WEE89  codep:0x224c wordp:0xee89 size:0x000e C-string:'WEE89'
//           WEE99  codep:0x224c wordp:0xee99 size:0x0026 C-string:'WEE99'
//           WEEC1  codep:0x224c wordp:0xeec1 size:0x0016 C-string:'WEEC1'
//           WEED9  codep:0x224c wordp:0xeed9 size:0x0018 C-string:'WEED9'
//           WEEF3  codep:0x224c wordp:0xeef3 size:0x000e C-string:'WEEF3'
//           WEF03  codep:0x224c wordp:0xef03 size:0x004a C-string:'WEF03'
//           WEF4F  codep:0x224c wordp:0xef4f size:0x0016 C-string:'WEF4F'
//           WEF67  codep:0x224c wordp:0xef67 size:0x0012 C-string:'WEF67'
//           WEF7B  codep:0x224c wordp:0xef7b size:0x0016 C-string:'WEF7B'
//           WEF93  codep:0x224c wordp:0xef93 size:0x0018 C-string:'WEF93'
//           WEFAD  codep:0x224c wordp:0xefad size:0x005a C-string:'WEFAD'
//           WF009  codep:0x224c wordp:0xf009 size:0x0014 C-string:'WF009'
//           WF01F  codep:0x224c wordp:0xf01f size:0x0010 C-string:'WF01F'
//           WF031  codep:0x224c wordp:0xf031 size:0x0006 C-string:'WF031'
//           WF039  codep:0x224c wordp:0xf039 size:0x002e C-string:'WF039'
//           WF069  codep:0x1d29 wordp:0xf069 size:0x0004 C-string:'WF069'
//           WF06F  codep:0x1d29 wordp:0xf06f size:0x0004 C-string:'WF06F'
//           WF075  codep:0x224c wordp:0xf075 size:0x003c C-string:'WF075'
//           WF0B3  codep:0x224c wordp:0xf0b3 size:0x0008 C-string:'WF0B3'
//           WF0BD  codep:0x224c wordp:0xf0bd size:0x0024 C-string:'WF0BD'
//           WF0E3  codep:0x224c wordp:0xf0e3 size:0x001a C-string:'WF0E3'
//           WF0FF  codep:0x224c wordp:0xf0ff size:0x000e C-string:'WF0FF'
//           WF10F  codep:0x224c wordp:0xf10f size:0x0018 C-string:'WF10F'
//           WF129  codep:0x224c wordp:0xf129 size:0x0018 C-string:'WF129'
//           WF143  codep:0x224c wordp:0xf143 size:0x001e C-string:'WF143'
//           WF163  codep:0x224c wordp:0xf163 size:0x0012 C-string:'WF163'
//           WF177  codep:0x224c wordp:0xf177 size:0x0016 C-string:'WF177'
//           WF18F  codep:0x224c wordp:0xf18f size:0x0012 C-string:'WF18F'
//           WF1A3  codep:0x224c wordp:0xf1a3 size:0x0012 C-string:'WF1A3'
//           WF1B7  codep:0x224c wordp:0xf1b7 size:0x000c C-string:'WF1B7'
//           WF1C5  codep:0x1d29 wordp:0xf1c5 size:0x0004 C-string:'WF1C5'
//           WF1CB  codep:0x1d29 wordp:0xf1cb size:0x0004 C-string:'WF1CB'
//           WF1D1  codep:0x224c wordp:0xf1d1 size:0x0048 C-string:'WF1D1'
//           WF21B  codep:0x224c wordp:0xf21b size:0x0016 C-string:'WF21B'
//           WF233  codep:0x224c wordp:0xf233 size:0x001a C-string:'WF233'
//           WF24F  codep:0x224c wordp:0xf24f size:0x000e C-string:'WF24F'
//           WF25F  codep:0x224c wordp:0xf25f size:0x002c C-string:'WF25F'
//           WF28D  codep:0x224c wordp:0xf28d size:0x0014 C-string:'WF28D'
//           WF2A3  codep:0x224c wordp:0xf2a3 size:0x0016 C-string:'WF2A3'
//           WF2BB  codep:0x224c wordp:0xf2bb size:0x001a C-string:'WF2BB'
//           WF2D7  codep:0x224c wordp:0xf2d7 size:0x0034 C-string:'WF2D7'
//           WF30D  codep:0x224c wordp:0xf30d size:0x000c C-string:'WF30D'
//           WF31B  codep:0x224c wordp:0xf31b size:0x001e C-string:'WF31B'
//           WF33B  codep:0x224c wordp:0xf33b size:0x0026 C-string:'WF33B'
//           WF363  codep:0x1d29 wordp:0xf363 size:0x0029 C-string:'WF363'
//        TRADE>OR  codep:0x224c wordp:0xf399 size:0x001e C-string:'TRADE_gt_OR'
//        APOST>PO  codep:0x4b3b wordp:0xf3c4 size:0x0014 C-string:'APOST_gt_PO'
//           WF3DA  codep:0x224c wordp:0xf3da size:0x000c C-string:'WF3DA'
//           WF3E8  codep:0x224c wordp:0xf3e8 size:0x0034 C-string:'WF3E8'
//           WF41E  codep:0x224c wordp:0xf41e size:0x0066 C-string:'WF41E'
//        SET-CARG  codep:0x224c wordp:0xf491 size:0x0024 C-string:'SET_dash_CARG'
//           WF4B7  codep:0x224c wordp:0xf4b7 size:0x003e C-string:'WF4B7'
//        BLD-LIST  codep:0x224c wordp:0xf502 size:0x0000 C-string:'BLD_dash_LIST'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_MUSSEG; // MUSSEG
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_SEED_3; // SEED_3
extern const unsigned short int pp_EDL; // EDL
extern const unsigned short int pp_A_dash_POSTU; // A-POSTU
extern const unsigned short int pp_GLOBALS; // GLOBALS
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_TV_dash_HOLD; // TV-HOLD
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp__ro_AORIGI; // (AORIGI
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp__ro_TRADER; // (TRADER
extern LoadDataType ELEM_dash_VA; // ELEM-VA
extern LoadDataType ART_dash_VAL; // ART-VAL
extern LoadDataType ART_dash_VOL; // ART-VOL
extern Color WHITE; // WHITE
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_VA; // INST-VA
extern IFieldType ASKING; // ASKING
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void ABS(); // ABS
void MOD(); // MOD
void MIN(); // MIN
void MS(); // MS
void UNRAVEL(); // UNRAVEL
void _2OVER(); // 2OVER
void D_eq_(); // D=
void WITHIN(); // WITHIN
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _099(); // 099
void StoreINST_dash_S(); // !INST-S
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void _eq_SPECIE(); // =SPECIE
void CI_i_(); // CI'
void IsNULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IPREV(); // IPREV
void IINSERT(); // IINSERT
void IEXTRAC(); // IEXTRAC
void IFLD_at_(); // IFLD@
void IFLD_ex_(); // IFLD!
void IFIND(); // IFIND
void IDELETE(); // IDELETE
void ALL(); // ALL
void ICREATE(); // ICREATE
void StoreCOLOR(); // !COLOR
void SONG(); // SONG
void DrawTTY(); // .TTY
void _do__ex_(); // $!
void ORGIA(); // ORGIA
void _gt_BOX(); // >BOX
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void _gt_(); // >
void _st_(); // <
void BEEPOFF(); // BEEPOFF
void LC_ex_(); // LC!
void _1_dot_5_at_(); // 1.5@
void _plus_BIT(); // +BIT
void _st__ex__gt_(); // <!>
void CI(); // CI


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WEE1C = 0xee1c; // WEE1C size: 5
// {0x00, 0x03, 0x05, 0x08, 0x0b}

const unsigned short int pp_WEE23 = 0xee23; // WEE23 size: 5
// {0x00, 0x0f, 0x12, 0x15, 0x18}

const unsigned short int pp_WEE2A = 0xee2a; // WEE2A size: 5
// {0x00, 0x23, 0x28, 0x2d, 0x32}

const unsigned short int pp_WF069 = 0xf069; // WF069 size: 4
// {0x00, 0x32, 0x46, 0x5a}

const unsigned short int pp_WF06F = 0xf06f; // WF06F size: 4
// {0x00, 0x6f, 0x83, 0x97}

const unsigned short int pp_WF1C5 = 0xf1c5; // WF1C5 size: 4
// {0x00, 0x0a, 0x0b, 0x0d}

const unsigned short int pp_WF1CB = 0xf1cb; // WF1CB size: 4
// {0x00, 0x0a, 0x0f, 0x15}

const unsigned short int pp_WF363 = 0xf363; // WF363 size: 41
// {0x00, 0x01, 0x02, 0x08, 0x08, 0x08, 0x0a, 0x03, 0x04, 0x05, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x06, 0x00, 0x17, 0x17, 0x17, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06}


const unsigned short int cc_WEB86 = 0xeb86; // WEB86
const unsigned short int cc_WEB8A = 0xeb8a; // WEB8A
const unsigned short int cc_WEB8E = 0xeb8e; // WEB8E
const unsigned short int cc_WEB92 = 0xeb92; // WEB92
const unsigned short int cc_WEB96 = 0xeb96; // WEB96


// 0xeb82: db 0x9d 0x00 '  '

// ================================================
// 0xeb84: WORD 'WEB86' codep=0x2214 wordp=0xeb86
// ================================================
// orphan
// 0xeb86: dw 0x0015

// ================================================
// 0xeb88: WORD 'WEB8A' codep=0x2214 wordp=0xeb8a
// ================================================
// 0xeb8a: dw 0x0009

// ================================================
// 0xeb8c: WORD 'WEB8E' codep=0x2214 wordp=0xeb8e
// ================================================
// 0xeb8e: dw 0x001c

// ================================================
// 0xeb90: WORD 'WEB92' codep=0x2214 wordp=0xeb92
// ================================================
// 0xeb92: dw 0x001a

// ================================================
// 0xeb94: WORD 'WEB96' codep=0x2214 wordp=0xeb96
// ================================================
// 0xeb96: dw 0x0044

// ================================================
// 0xeb98: WORD 'WEB9A' codep=0x7420 wordp=0xeb9a
// ================================================
IFieldType WEB9A = {SHIPIDX, 0x43, 0x16};

// ================================================
// 0xeb9d: WORD 'WEB9F' codep=0x7420 wordp=0xeb9f
// ================================================
IFieldType WEB9F = {SHIPIDX, 0x1f, 0x02};

// ================================================
// 0xeba2: WORD 'WEBA4' codep=0x7420 wordp=0xeba4
// ================================================
IFieldType WEBA4 = {BOXIDX, 0x11, 0x02};

// ================================================
// 0xeba7: WORD 'WEBA9' codep=0x7420 wordp=0xeba9
// ================================================
IFieldType WEBA9 = {ORIGINATORIDX, 0x12, 0x01};

// ================================================
// 0xebac: WORD 'WEBAE' codep=0x7394 wordp=0xebae
// ================================================
LoadDataType WEBAE = {TRADERSIDX, 0x29, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xebb4: WORD 'WEBB6' codep=0x7394 wordp=0xebb6
// ================================================
LoadDataType WEBB6 = {PLANETIDX, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xebbc: WORD 'WEBBE' codep=0x7394 wordp=0xebbe
// ================================================
LoadDataType WEBBE = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xebc4: WORD 'WEBC6' codep=0x7394 wordp=0xebc6
// ================================================
LoadDataType WEBC6 = {TRADERSIDX, 0x14, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xebcc: WORD 'WEBCE' codep=0x7394 wordp=0xebce
// ================================================
// orphan
LoadDataType WEBCE = {TRADERSIDX, 0x15, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xebd4: WORD 'WEBD6' codep=0x7394 wordp=0xebd6
// ================================================
LoadDataType WEBD6 = {TRADERSIDX, 0x16, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xebdc: WORD 'WEBDE' codep=0x7394 wordp=0xebde
// ================================================
// orphan
LoadDataType WEBDE = {TRADERSIDX, 0x1a, 0x03, 0x32, 0x6ad1};

// ================================================
// 0xebe4: WORD 'WEBE6' codep=0x7394 wordp=0xebe6
// ================================================
LoadDataType WEBE6 = {TRADERSIDX, 0x1d, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xebec: WORD 'WEBEE' codep=0x7394 wordp=0xebee
// ================================================
// orphan
LoadDataType WEBEE = {TRADERSIDX, 0x1e, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xebf4: WORD 'WEBF6' codep=0x7394 wordp=0xebf6
// ================================================
LoadDataType WEBF6 = {TRADERSIDX, 0x1f, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xebfc: WORD 'WEBFE' codep=0x7394 wordp=0xebfe
// ================================================
LoadDataType WEBFE = {TRADERSIDX, 0x20, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec04: WORD 'WEC06' codep=0x7394 wordp=0xec06
// ================================================
LoadDataType WEC06 = {TRADERSIDX, 0x21, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec0c: WORD 'WEC0E' codep=0x7394 wordp=0xec0e
// ================================================
LoadDataType WEC0E = {TRADERSIDX, 0x23, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec14: WORD 'WEC16' codep=0x7394 wordp=0xec16
// ================================================
// orphan
LoadDataType WEC16 = {TRADERSIDX, 0x25, 0x02, 0x32, 0x6ad1};

// ================================================
// 0xec1c: WORD 'WEC1E' codep=0x7394 wordp=0xec1e
// ================================================
LoadDataType WEC1E = {TRADERSIDX, 0x2b, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec24: WORD 'WEC26' codep=0x7394 wordp=0xec26
// ================================================
LoadDataType WEC26 = {TRADERSIDX, 0x2c, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec2c: WORD 'WEC2E' codep=0x7394 wordp=0xec2e
// ================================================
LoadDataType WEC2E = {TRADERSIDX, 0x2d, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec34: WORD 'WEC36' codep=0x7394 wordp=0xec36
// ================================================
LoadDataType WEC36 = {TRADERSIDX, 0x31, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec3c: WORD 'WEC3E' codep=0x7394 wordp=0xec3e
// ================================================
LoadDataType WEC3E = {TRADERSIDX, 0x2a, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec44: WORD 'WEC46' codep=0x7394 wordp=0xec46
// ================================================
LoadDataType WEC46 = {TRADERSIDX, 0x2e, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec4c: WORD 'WEC4E' codep=0x7394 wordp=0xec4e
// ================================================
LoadDataType WEC4E = {TRADERSIDX, 0x2f, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec54: WORD 'WEC56' codep=0x7394 wordp=0xec56
// ================================================
LoadDataType WEC56 = {TRADERSIDX, 0x30, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xec5c: WORD 'WEC5E' codep=0x224c wordp=0xec5e
// ================================================
// orphan

void WEC5E() // WEC5E
{
  Push(0xebbe); // 'WEBBE'
  IFLD_at_(); // IFLD@
  Push(Pop()==4?1:0); //  4 =
}


// ================================================
// 0xec6a: WORD 'WEC6C' codep=0x224c wordp=0xec6c params=0 returns=2
// ================================================

void WEC6C() // WEC6C
{
  Push(Read16(pp_STARDAT)); // STARDAT @
  Push(0x002d);
  _slash_(); // /
}


// ================================================
// 0xec78: WORD 'WEC7A' codep=0x224c wordp=0xec7a params=0 returns=0
// ================================================

void WEC7A() // WEC7A
{
  Push(pp__ro_TRADER); // (TRADER
  Get_gt_C_plus_S(); // @>C+S
}


// ================================================
// 0xec80: WORD 'WEC82' codep=0x224c wordp=0xec82 params=1 returns=1
// ================================================

void WEC82() // WEC82
{
  Push(Read16(regsp)); // DUP
  Push(Pop() >> 1); //  2/
  Push(0);
  SWAP(); // SWAP
  RRND(); // RRND
  _dash_(); // -
}


// ================================================
// 0xec90: WORD 'WEC92' codep=0x224c wordp=0xec92
// ================================================

void WEC92() // WEC92
{
  WEC7A(); // WEC7A
  WEC6C(); // WEC6C
  LoadData(WEC36); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  _gt_(); // >
  if (Pop() != 0)
  {
    LoadData(WEBC6); // from 'TRADERS'
    Push((Read16(Pop())&0xFF) * 0x0032); //  C@ 0x0032 *
    Push(Read16(regsp)); // DUP
    WEC82(); // WEC82
    LoadData(WEC46); // from 'TRADERS'
    C_ex__2(); // C!_2
    Push(Read16(regsp)); // DUP
    WEC82(); // WEC82
    LoadData(WEC4E); // from 'TRADERS'
    C_ex__2(); // C!_2
    WEC82(); // WEC82
    LoadData(WEC56); // from 'TRADERS'
    C_ex__2(); // C!_2
    WEC6C(); // WEC6C
    LoadData(WEC36); // from 'TRADERS'
    C_ex__2(); // C!_2
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xecca: WORD 'WECCC' codep=0x224c wordp=0xeccc
// ================================================

void WECCC() // WECCC
{
  unsigned short int a;
  WEC7A(); // WEC7A
  a = Pop(); // >R
  Push(Read16(a)); // R@
  LoadData(WEBE6); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    Push(0xec46); // 'WEC46'
  } else
  {
    Push(Read16(a)); // R@
    LoadData(WEBF6); // from 'TRADERS'
    Push(Read16(Pop())&0xFF); //  C@
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(0xec4e); // 'WEC4E'
    } else
    {
      Push(0xec56); // 'WEC56'
    }
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xed02: WORD '!TAMT' codep=0x224c wordp=0xed0c
// ================================================
// entry

void StoreTAMT() // !TAMT
{
  SWAP(); // SWAP
  Push(0x000a);
  _slash_(); // /
  SWAP(); // SWAP
  WECCC(); // WECCC
  IFLD_ex_(); // IFLD!
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed1e: WORD '@TAMT' codep=0x224c wordp=0xed28
// ================================================
// entry

void GetTAMT() // @TAMT
{
  WECCC(); // WECCC
  IFLD_at_(); // IFLD@
  Push(Pop() * 0x000a); //  0x000a *
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed36: WORD 'WED38' codep=0x7394 wordp=0xed38
// ================================================
LoadDataType WED38 = {ARTIFACTIDX, 0x1f, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xed3e: WORD 'WED40' codep=0x7394 wordp=0xed40
// ================================================
LoadDataType WED40 = {ARTIFACTIDX, 0x1e, 0x01, 0x20, 0x6bcd};

// ================================================
// 0xed46: WORD 'WED48' codep=0x7394 wordp=0xed48
// ================================================
LoadDataType WED48 = {CREATUREIDX, 0x14, 0x02, 0x22, 0x6f07};

// ================================================
// 0xed4e: WORD 'WED50' codep=0x7394 wordp=0xed50
// ================================================
LoadDataType WED50 = {CREATUREIDX, 0x16, 0x01, 0x22, 0x6f07};

// ================================================
// 0xed56: WORD 'WED58' codep=0x7394 wordp=0xed58
// ================================================
LoadDataType WED58 = {ELEMENTIDX, 0x16, 0x01, 0x17, 0x6ba9};

// ================================================
// 0xed5e: WORD 'WED60' codep=0x7394 wordp=0xed60
// ================================================
LoadDataType WED60 = {STISIDX, 0x18, 0x02, 0x1b, 0x6a54};

// ================================================
// 0xed66: WORD 'WED68' codep=0x7394 wordp=0xed68
// ================================================
LoadDataType WED68 = {STISIDX, 0x1a, 0x01, 0x1b, 0x6a54};

// ================================================
// 0xed6e: WORD 'WED70' codep=0x224c wordp=0xed70 params=2 returns=2
// ================================================

void WED70() // WED70
{
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed80: WORD 'WED82' codep=0x224c wordp=0xed82
// ================================================

void WED82() // WED82
{
  LoadData(ART_dash_VAL); // from 'ARTIFACT'
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xed88: WORD 'WED8A' codep=0x224c wordp=0xed8a
// ================================================

void WED8A() // WED8A
{
  LoadData(ELEM_dash_VA); // from 'ELEMENT'
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xed90: WORD 'WED92' codep=0x224c wordp=0xed92
// ================================================

void WED92() // WED92
{
  LoadData(WED60); // from 'STIS'
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xed98: WORD 'WED9A' codep=0x224c wordp=0xed9a
// ================================================

void WED9A() // WED9A
{
  LoadData(WED48); // from 'CREATURE'
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xeda0: WORD '(GET.BAS' codep=0x4b3b wordp=0xedad
// ================================================

void _ro_GET_dot_BAS() // (GET.BAS
{
  switch(Pop()) // (GET.BAS
  {
  case 28:
    WED82(); // WED82
    break;
  case 26:
    WED8A(); // WED8A
    break;
  case 9:
    WED92(); // WED92
    break;
  case 68:
    WED9A(); // WED9A
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xedc1: WORD '(GETUSE)' codep=0x4b3b wordp=0xedce
// ================================================

void _ro_GETUSE_rc_() // (GETUSE)
{
  switch(Pop()) // (GETUSE)
  {
  case 68:
    LoadData(WED50); // from 'CREATURE'
    break;
  case 28:
    LoadData(WED38); // from 'ARTIFACT'
    break;
  case 26:
    LoadData(WED58); // from 'ELEMENT'
    break;
  case 9:
    LoadData(WED68); // from 'STIS'
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xede2: WORD 'WEDE4' codep=0x224c wordp=0xede4 params=2 returns=2
// ================================================

void WEDE4() // WEDE4
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+INST_dash_VA.offset); // INST-VA<IFIELD>
  _099(); // 099
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedf0: WORD 'WEDF2' codep=0x224c wordp=0xedf2
// ================================================

void WEDF2() // WEDF2
{
  Push(Read16(cc_WEB8A)); // WEB8A
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  WEDE4(); // WEDE4
  _2SWAP(); // 2SWAP
  _2OVER(); // 2OVER
  _2SWAP(); // 2SWAP
  IINSERT(); // IINSERT
}


// ================================================
// 0xee04: WORD 'WEE06' codep=0x224c wordp=0xee06
// ================================================

void WEE06() // WEE06
{
  _gt_C_plus_S(); // >C+S
  Push(0x0010);
  Push(0xed68); // 'WED68'
  IFLD_ex_(); // IFLD!
  Push(0);
  LoadData(WED68); // from 'STIS'
  C_ex__2(); // C!_2
}


// ================================================
// 0xee1a: WORD 'WEE1C' codep=0x1d29 wordp=0xee1c
// ================================================
// 0xee1c: db 0x00 0x03 0x05 0x08 0x0b '     '

// ================================================
// 0xee21: WORD 'WEE23' codep=0x1d29 wordp=0xee23
// ================================================
// 0xee23: db 0x00 0x0f 0x12 0x15 0x18 '     '

// ================================================
// 0xee28: WORD 'WEE2A' codep=0x1d29 wordp=0xee2a
// ================================================
// 0xee2a: db 0x00 0x23 0x28 0x2d 0x32 ' #(-2'

// ================================================
// 0xee2f: WORD 'WEE31' codep=0x224c wordp=0xee31 params=1 returns=0
// ================================================

void WEE31() // WEE31
{
  Push(Read16(regsp)); // DUP
  Push(pp_GLOBALS); // GLOBALS
  Store_2(); // !_2
  Push(pp_SEED_3); // SEED_3
  Store_2(); // !_2
}


// ================================================
// 0xee3d: WORD 'WEE3F' codep=0x224c wordp=0xee3f params=0 returns=1
// ================================================

void WEE3F() // WEE3F
{
  WEC7A(); // WEC7A
  GetINST_dash_S(); // @INST-S
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  Push(Pop() + Read16(pp_STARDAT)); //  STARDAT @ +
}


// ================================================
// 0xee4f: WORD 'WEE51' codep=0x224c wordp=0xee51 params=0 returns=1
// ================================================

void WEE51() // WEE51
{
  WEE3F(); // WEE3F
}


// ================================================
// 0xee55: WORD 'WEE57' codep=0x224c wordp=0xee57
// ================================================

void WEE57() // WEE57
{
  WEC7A(); // WEC7A
  LoadData(WEBBE); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  Push(Read16(Pop() + pp_WEE23)&0xFF); //  WEE23 + C@
}


// ================================================
// 0xee67: WORD 'WEE69' codep=0x224c wordp=0xee69
// ================================================

void WEE69() // WEE69
{
  WEC7A(); // WEC7A
  LoadData(WEBC6); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  Push(Read16(Pop() + pp_WEE1C)&0xFF); //  WEE1C + C@
}


// ================================================
// 0xee79: WORD 'WEE7B' codep=0x224c wordp=0xee7b
// ================================================

void WEE7B() // WEE7B
{
  WEE69(); // WEE69
  Push(0);
  WEE57(); // WEE57
  RRND(); // RRND
  _gt_(); // >
}


// ================================================
// 0xee87: WORD 'WEE89' codep=0x224c wordp=0xee89 params=0 returns=0
// ================================================

void WEE89() // WEE89
{
  Push2Words("*4SALE");
  _gt_C_plus_S(); // >C+S
  Push(1);
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee97: WORD 'WEE99' codep=0x224c wordp=0xee99
// ================================================

void WEE99() // WEE99
{
  unsigned short int i, imax;
  WEE51(); // WEE51
  WEE31(); // WEE31
  Push2Words("*4SALE");
  WEE57(); // WEE57

  i = 1;
  imax = Pop();
  do // (DO)
  {
    WEE7B(); // WEE7B
    if (Pop() != 0)
    {
      _2DUP(); // 2DUP
      Push(i); // I
      WEDF2(); // WEDF2
      WEE06(); // WEE06
      WEE89(); // WEE89
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xeebf: WORD 'WEEC1' codep=0x224c wordp=0xeec1 params=1 returns=0
// ================================================

void WEEC1() // WEEC1
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Read16(cc_WEB8E)); // WEB8E
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  WEDE4(); // WEDE4
  Push2Words("*4SALE");
  IINSERT(); // IINSERT
  WEE89(); // WEE89
}


// ================================================
// 0xeed7: WORD 'WEED9' codep=0x224c wordp=0xeed9
// ================================================

void WEED9() // WEED9
{
  WEC7A(); // WEC7A
  LoadData(WEBE6); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WEEC1(); // WEEC1
  LoadData(WEBF6); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WEEC1(); // WEEC1
  LoadData(WEBFE); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WEEC1(); // WEEC1
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xeef1: WORD 'WEEF3' codep=0x224c wordp=0xeef3 params=0 returns=0
// ================================================

void WEEF3() // WEEF3
{
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  Push(1);
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _plus__ex__2(); // +!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef01: WORD 'WEF03' codep=0x224c wordp=0xef03
// ================================================

void WEF03() // WEF03
{
  unsigned short int i, imax;
  WEC7A(); // WEC7A
  LoadData(WEBC6); // from 'TRADERS'
  Push(Read16((Read16(Pop())&0xFF) + pp_WEE2A)&0xFF); //  C@ WEE2A + C@
  ICLOSE(); // ICLOSE

  i = 1;
  imax = 0x0018;
  do // (DO)
  {
    WEE3F(); // WEE3F
    Push(Pop() + i); //  I +
    WEE31(); // WEE31
    Push(1);
    Push(0x0064);
    RRND(); // RRND
    OVER(); // OVER
    _st_(); // <
    if (Pop() != 0)
    {
      Push(Read16(cc_WEB8A)); // WEB8A
      Push(i); // I
      ICREATE(); // ICREATE
      WEDE4(); // WEDE4
      _2DUP(); // 2DUP
      Push2Words("*2BUY");
      IINSERT(); // IINSERT
      WEEF3(); // WEEF3
      WEE06(); // WEE06
      ICLOSE(); // ICLOSE
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
}


// ================================================
// 0xef4d: WORD 'WEF4F' codep=0x224c wordp=0xef4f params=1 returns=0
// ================================================

void WEF4F() // WEF4F
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Read16(cc_WEB8E)); // WEB8E
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  WEDE4(); // WEDE4
  Push2Words("*2BUY");
  IINSERT(); // IINSERT
  WEEF3(); // WEEF3
}


// ================================================
// 0xef65: WORD 'WEF67' codep=0x224c wordp=0xef67
// ================================================

void WEF67() // WEF67
{
  WEC7A(); // WEC7A
  LoadData(WEC06); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WEF4F(); // WEF4F
  LoadData(WEC0E); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WEF4F(); // WEF4F
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xef79: WORD 'WEF7B' codep=0x224c wordp=0xef7b params=1 returns=0
// ================================================

void WEF7B() // WEF7B
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Read16(cc_WEB96)); // WEB96
  SWAP(); // SWAP
  ICREATE(); // ICREATE
  WEDE4(); // WEDE4
  Push2Words("*2BUY");
  IINSERT(); // IINSERT
  WEEF3(); // WEEF3
}


// ================================================
// 0xef91: WORD 'WEF93' codep=0x224c wordp=0xef93
// ================================================

void WEF93() // WEF93
{
  WEC7A(); // WEC7A
  LoadData(WEC1E); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WEF7B(); // WEF7B
  LoadData(WEC26); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WEF7B(); // WEF7B
  LoadData(WEC2E); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  WEF7B(); // WEF7B
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xefab: WORD 'WEFAD' codep=0x224c wordp=0xefad
// ================================================

void WEFAD() // WEFAD
{
  unsigned short int i, imax;
  WEC7A(); // WEC7A
  LoadData(WEBC6); // from 'TRADERS'
  Push((Read16((Read16(Pop())&0xFF) + pp_WEE2A)&0xFF) >> 1); //  C@ WEE2A + C@ 2/
  Push(0x0017);
  Push(6);
  _eq_SPECIE(); // =SPECIE
  if (Pop() != 0)
  {
    Push(Pop() + 1); //  1+
  }

  i = 1;
  imax = Pop();
  do // (DO)
  {
    WEE51(); // WEE51
    Push(Pop() + i); //  I +
    WEE31(); // WEE31
    Push(1);
    Push(0x0064);
    RRND(); // RRND
    OVER(); // OVER
    _st_(); // <
    Push(Pop() | (i==0x0017?1:0)); //  I 0x0017 = OR
    if (Pop() != 0)
    {
      Push(Read16(cc_WEB92)); // WEB92
      Push(i); // I
      ICREATE(); // ICREATE
      WEDE4(); // WEDE4
      Push2Words("*2BUY");
      IINSERT(); // IINSERT
      WEEF3(); // WEEF3
    }
    i++;
  } while(i<imax); // (LOOP)

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf007: WORD 'WF009' codep=0x224c wordp=0xf009
// ================================================

void WF009() // WF009
{
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _099(); // 099
  WEF03(); // WEF03
  WEF67(); // WEF67
  WEFAD(); // WEFAD
  WEF93(); // WEF93
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf01d: WORD 'WF01F' codep=0x224c wordp=0xf01f
// ================================================

void WF01F() // WF01F
{
  Push2Words("*4SALE");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  _099(); // 099
  WEE99(); // WEE99
  WEED9(); // WEED9
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf02f: WORD 'WF031' codep=0x224c wordp=0xf031
// ================================================

void WF031() // WF031
{
  WF01F(); // WF01F
  WF009(); // WF009
}


// ================================================
// 0xf037: WORD 'WF039' codep=0x224c wordp=0xf039
// ================================================

void WF039() // WF039
{
  WEE89(); // WEE89
  Push(0x001a);
  Push(6);
  ICREATE(); // ICREATE
  _gt_C_plus_S(); // >C+S
  Push(0x000a);
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  Push(3);
  LoadData(WED58); // from 'ELEMENT'
  C_ex__2(); // C!_2
  LoadData(ELEM_dash_VA); // from 'ELEMENT'
  Push(Read16(Pop())); //  @
  Push(0x65e1+ASKING.offset); // ASKING<IFIELD>
  Store_2(); // !_2
  CI(); // CI
  ICLOSE(); // ICLOSE
  Push2Words("*4SALE");
  IINSERT(); // IINSERT
}


// ================================================
// 0xf067: WORD 'WF069' codep=0x1d29 wordp=0xf069
// ================================================
// 0xf069: db 0x00 0x32 0x46 0x5a ' 2FZ'

// ================================================
// 0xf06d: WORD 'WF06F' codep=0x1d29 wordp=0xf06f
// ================================================
// 0xf06f: db 0x00 0x6f 0x83 0x97 ' o  '

// ================================================
// 0xf073: WORD 'WF075' codep=0x224c wordp=0xf075
// ================================================
// orphan

void WF075() // WF075
{
  GetINST_dash_S(); // @INST-S
  WEE51(); // WEE51
  Push(Pop() + Pop()); // +
  WEE31(); // WEE31
  GetINST_dash_C(); // @INST-C
  _ro_GET_dot_BAS(); // (GET.BAS case
  WEC7A(); // WEC7A
  Push(0xebce); // 'WEBCE'
  IFLD_at_(); // IFLD@
  ICLOSE(); // ICLOSE
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + pp_WF069)&0xFF); //  WF069 + C@
  SWAP(); // SWAP
  Push(Read16(Pop() + pp_WF06F)&0xFF); //  WF06F + C@
  RRND(); // RRND
  Push(0x0064);
  _star__slash_(); // */
  ABS(); // ABS
  Push(0x7fbc);
  MIN(); // MIN
  Push(0x65e1+INST_dash_VA.offset); // INST-VA<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf0b1: WORD 'WF0B3' codep=0x224c wordp=0xf0b3 params=0 returns=1
// ================================================

void WF0B3() // WF0B3
{
  Push(Read16(0x65e1+INST_dash_VA.offset)==0?1:0); // INST-VA<IFIELD> @ 0=
}


// ================================================
// 0xf0bb: WORD 'WF0BD' codep=0x224c wordp=0xf0bd
// ================================================

void WF0BD() // WF0BD
{
  Push(Read16(0x65e1+INST_dash_VA.offset)); // INST-VA<IFIELD> @
  GetINST_dash_C(); // @INST-C
  GetINST_dash_S(); // @INST-S
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(0x65e1+INST_dash_VA.offset); // INST-VA<IFIELD>
    Store_2(); // !_2
  } else
  {
    Pop(); // DROP
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf0e1: WORD 'WF0E3' codep=0x224c wordp=0xf0e3 params=0 returns=1
// ================================================

void WF0E3() // WF0E3
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==Read16(cc_WEB8E)?1:0); //  WEB8E =
  if (Pop() != 0)
  {
    LoadData(WED40); // from 'ARTIFACT'
    Push((Read16(Pop())&0xFF)==2?1:0); //  C@ 2 =
    return;
  }
  Push(Read16(cc_FALSE)); // FALSE
}


// ================================================
// 0xf0fd: WORD 'WF0FF' codep=0x224c wordp=0xf0ff
// ================================================

void WF0FF() // WF0FF
{
  WEE3F(); // WEE3F
  GetINST_dash_S(); // @INST-S
  Push(Pop() + Pop()); // +
  WEE31(); // WEE31
  Push(Read16(cc_WEB8E)); // WEB8E
  _ro_GET_dot_BAS(); // (GET.BAS case
}


// ================================================
// 0xf10d: WORD 'WF10F' codep=0x224c wordp=0xf10f
// ================================================

void WF10F() // WF10F
{
  WF0FF(); // WF0FF
  Push(0x0032);
  Push(0x0079);
  RRND(); // RRND
  Push(0x0064);
  _star__slash_(); // */
  Push(0x65e1+INST_dash_VA.offset); // INST-VA<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf127: WORD 'WF129' codep=0x224c wordp=0xf129
// ================================================

void WF129() // WF129
{
  WF0FF(); // WF0FF
  Push(0x0078);
  Push(0x00c9);
  RRND(); // RRND
  Push(0x0064);
  _star__slash_(); // */
  Push(0x65e1+INST_dash_VA.offset); // INST-VA<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf141: WORD 'WF143' codep=0x224c wordp=0xf143 params=0 returns=0
// ================================================

void WF143() // WF143
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x001c?1:0); //  0x001c =
  if (Pop() != 0)
  {
    LoadData(ART_dash_VOL); // from 'ARTIFACT'
    Push(Read16(Pop())); //  @
  } else
  {
    Push(0x000a);
  }
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf161: WORD 'WF163' codep=0x224c wordp=0xf163
// ================================================

void WF163() // WF163
{
  WF0E3(); // WF0E3
  if (Pop() != 0)
  {
    WF10F(); // WF10F
    return;
  }
  WF075(); // WF075
  WF0BD(); // WF0BD
}


// ================================================
// 0xf175: WORD 'WF177' codep=0x224c wordp=0xf177 params=0 returns=0
// ================================================

void WF177() // WF177
{
  WF0E3(); // WF0E3
  if (Pop() != 0)
  {
    WF129(); // WF129
    return;
  }
  WF0B3(); // WF0B3
  if (Pop() == 0) return;
  WF075(); // WF075
}


// ================================================
// 0xf18d: WORD 'WF18F' codep=0x224c wordp=0xf18f
// ================================================

void WF18F() // WF18F
{
  Push2Words("*4SALE");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf163); // 'WF163'
  ALL(); // ALL
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1a1: WORD 'WF1A3' codep=0x224c wordp=0xf1a3
// ================================================

void WF1A3() // WF1A3
{
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf177); // 'WF177'
  ALL(); // ALL
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1b5: WORD 'WF1B7' codep=0x224c wordp=0xf1b7 params=0 returns=1
// ================================================

void WF1B7() // WF1B7
{
  GetINST_dash_C(); // @INST-C
  Push(!(Pop()==0x001b?1:0)); //  0x001b = NOT
}


// ================================================
// 0xf1c3: WORD 'WF1C5' codep=0x1d29 wordp=0xf1c5
// ================================================
// 0xf1c5: db 0x00 0x0a 0x0b 0x0d '    '

// ================================================
// 0xf1c9: WORD 'WF1CB' codep=0x1d29 wordp=0xf1cb
// ================================================
// 0xf1cb: db 0x00 0x0a 0x0f 0x15 '    '

// ================================================
// 0xf1cf: WORD 'WF1D1' codep=0x224c wordp=0xf1d1 params=0 returns=0
// ================================================
// orphan

void WF1D1() // WF1D1
{
  WF1B7(); // WF1B7
  if (Pop() == 0) return;
  Push(Read16(0x65e1+INST_dash_VA.offset)); // INST-VA<IFIELD> @
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + pp_WF1C5)&0xFF); //  WF1C5 + C@
  SWAP(); // SWAP
  Push(Read16(Pop() + pp_WF1CB)&0xFF); //  WF1CB + C@
  RRND(); // RRND
  Push(0x000a);
  CI_i_(); // CI'
  Push2Words("*2BUY");
  D_eq_(); // D=
  if (Pop() != 0)
  {
    SWAP(); // SWAP
  }
  _star__slash_(); // */
  ABS(); // ABS
  Push(0x7ff8);
  MIN(); // MIN
  Push(0x65e1+ASKING.offset); // ASKING<IFIELD>
  Store_2(); // !_2
  Push(0);
  GetINST_dash_C(); // @INST-C
  _ro_GETUSE_rc_(); // (GETUSE) case
  C_ex__2(); // C!_2
  WF143(); // WF143
}


// ================================================
// 0xf219: WORD 'WF21B' codep=0x224c wordp=0xf21b params=0 returns=0
// ================================================

void WF21B() // WF21B
{
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  IsLAST(); // ?LAST
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    IPREV(); // IPREV
  }
  IDELETE(); // IDELETE
}


// ================================================
// 0xf231: WORD 'WF233' codep=0x224c wordp=0xf233
// ================================================

void WF233() // WF233
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf21b); // 'WF21B'
  ALL(); // ALL
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    IDELETE(); // IDELETE
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf24d: WORD 'WF24F' codep=0x224c wordp=0xf24f
// ================================================

void WF24F() // WF24F
{
  Push2Words("*2BUY");
  WF233(); // WF233
  Push2Words("*4SALE");
  WF233(); // WF233
  Push2Words("BUY-LIS");
  WF233(); // WF233
}


// ================================================
// 0xf25d: WORD 'WF25F' codep=0x224c wordp=0xf25f
// ================================================

void WF25F() // WF25F
{
  WEC7A(); // WEC7A
  LoadData(WEBD6); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  Push2Words("*4SALE");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf1d1); // 'WF1D1'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf1d1); // 'WF1D1'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  Pop(); // DROP
}


// ================================================
// 0xf28b: WORD 'WF28D' codep=0x224c wordp=0xf28d
// ================================================

void WF28D() // WF28D
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(0x5b65); Push(0x0002);
  WED70(); // WED70
  DrawTTY(); // .TTY
  Push(2);
  SONG(); // SONG
}


// ================================================
// 0xf2a1: WORD 'WF2A3' codep=0x224c wordp=0xf2a3
// ================================================

void WF2A3() // WF2A3
{
  Push(0);
  Push(Read16(cc_MUSSEG)); // MUSSEG
  Push(2);
  LC_ex_(); // LC!
  BEEPOFF(); // BEEPOFF
  Push(0x5b8f); Push(0x0002);
  WED70(); // WED70
  DrawTTY(); // .TTY
}


// ================================================
// 0xf2b9: WORD 'WF2BB' codep=0x224c wordp=0xf2bb params=0 returns=1
// ================================================

void WF2BB() // WF2BB
{
  GetINST_dash_S(); // @INST-S
  Push(0x0019);
  Push(0x001c);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(4);
    return;
  }
  Push(2);
}


// ================================================
// 0xf2d5: WORD 'WF2D7' codep=0x224c wordp=0xf2d7 params=0 returns=0
// ================================================

void WF2D7() // WF2D7
{
  WF1B7(); // WF1B7
  if (Pop() == 0) return;
  GetINST_dash_C(); // @INST-C
  GetINST_dash_S(); // @INST-S
  Push2Words("*2BUY");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    Push(Read16(0x65e1+INST_dash_VA.offset)); // INST-VA<IFIELD> @
    Push(Read16(0x65e1+ASKING.offset)); // ASKING<IFIELD> @
  } else
  {
    Push(0);
    Push(Read16(regsp)); // DUP
  }
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(0x65e1+ASKING.offset); // ASKING<IFIELD>
  Store_2(); // !_2
  Push(0x65e1+INST_dash_VA.offset); // INST-VA<IFIELD>
  Store_2(); // !_2
}


// ================================================
// 0xf30b: WORD 'WF30D' codep=0x224c wordp=0xf30d params=0 returns=2
// ================================================

void WF30D() // WF30D
{
  IEXTRAC(); // IEXTRAC
  Push2Words("BUY-LIS");
  _gt_C_plus_S(); // >C+S
  _gt_BOX(); // >BOX
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf319: WORD 'WF31B' codep=0x224c wordp=0xf31b params=0 returns=0
// ================================================

void WF31B() // WF31B
{
  Push2Words("*4SALE");
  _gt_C_plus_S(); // >C+S
  while(1)
  {
    IOPEN(); // IOPEN
    IsNULL(); // ?NULL
    Push(!Pop()); //  NOT
    ICLOSE(); // ICLOSE
    if (Pop() == 0) break;

    IOPEN(); // IOPEN
    WF30D(); // WF30D
    ICLOSE(); // ICLOSE
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf339: WORD 'WF33B' codep=0x224c wordp=0xf33b params=1 returns=1
// ================================================

void WF33B() // WF33B
{
  Push(Read16(regsp)); // DUP
  Push(7);
  Push(0x000a);
  WITHIN(); // WITHIN
  if (Pop() == 0) return;
  Pop(); // DROP
  Push(7);
  Push(Read16(pp_STARDAT)); // STARDAT @
  Push(0x001e);
  MOD(); // MOD
  Push(0x000a);
  _slash_(); // /
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xf361: WORD 'WF363' codep=0x1d29 wordp=0xf363
// ================================================
// 0xf363: db 0x00 0x01 0x02 0x08 0x08 0x08 0x0a 0x03 0x04 0x05 0x07 0x07 0x07 0x07 0x07 0x07 0x07 0x06 0x06 0x06 0x00 0x17 0x17 0x17 0x17 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x06 '                                         '

// ================================================
// 0xf38c: WORD 'TRADE>OR' codep=0x224c wordp=0xf399 params=1 returns=1
// ================================================
// entry

void TRADE_gt_OR() // TRADE>OR
{
  Push(Read16(Pop() + pp_WF363)&0xFF); //  WF363 + C@
  Push(Read16(regsp)); // DUP
  Push(Pop()==8?1:0); //  8 =
  if (Pop() == 0) return;
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() == 0) return;
  Push(Pop() + 3); //  3 +
}


// ================================================
// 0xf3b7: WORD 'APOST>PO' codep=0x4b3b wordp=0xf3c4
// ================================================

void APOST_gt_PO() // APOST>PO
{
  switch(Pop()) // APOST>PO
  {
  case 16:
    Push(4);
    break;
  case 2:
    Push(1);
    break;
  case 1:
    Push(1);
    break;
  case 8:
    Push(4);
    break;
  default:
    Push(2);
    break;

  }
}

// ================================================
// 0xf3d8: WORD 'WF3DA' codep=0x224c wordp=0xf3da
// ================================================

void WF3DA() // WF3DA
{
  IOPEN(); // IOPEN
  Push(0xf2d7); // 'WF2D7'
  ALL(); // ALL
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3e6: WORD 'WF3E8' codep=0x224c wordp=0xf3e8 params=0 returns=0
// ================================================

void WF3E8() // WF3E8
{
  Push(0xb6ec); // '=CARGO'
  MODULE(); // MODULE
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+WEB9A.offset)); // WEB9A<IFIELD> @
  Push(Read16(0x65e1+WEB9F.offset)); // WEB9F<IFIELD> @
  _plus_BIT(); // +BIT
  Push((Pop() + 1) * 0x01f4); //  1+ 0x01f4 *
  Push(Read16(regsp)); // DUP
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+INST_dash_QT.offset); // INST-QT<IFIELD>
  Store_2(); // !_2
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x65e1+WEBA4.offset); // WEBA4<IFIELD>
  Store_2(); // !_2
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf41c: WORD 'WF41E' codep=0x224c wordp=0xf41e
// ================================================

void WF41E() // WF41E
{
  WEC7A(); // WEC7A
  GetINST_dash_S(); // @INST-S
  TRADE_gt_OR(); // TRADE>OR
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    ORGIA(); // ORGIA
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(pp__ro_AORIGI); // (AORIGI
    _1_dot_5_ex__2(); // 1.5!_2
    _gt_C_plus_S(); // >C+S
    GetINST_dash_S(); // @INST-S
    Push(Pop()==6?1:0); //  6 =
    if (Pop() != 0)
    {
      Push(0x0023);
    } else
    {
      Push(Read16(0x65e1+WEBA9.offset)&0xFF); // WEBA9<IFIELD> C@
    }
    Push(pp_EDL); // EDL
    _st__ex__gt_(); // <!>
    ICLOSE(); // ICLOSE
    Push(0xbfda); // 'EDL>P'
    MODULE(); // MODULE
    Push(Read16(pp_A_dash_POSTU)&0xFF); // A-POSTU C@
    APOST_gt_PO(); // APOST>PO case
  } else
  {
    WF2BB(); // WF2BB
  }
  Push(Read16(regsp)); // DUP
  LoadData(WEBAE); // from 'TRADERS'
  C_ex__2(); // C!_2
  Push(Pop()==4?1:0); //  4 =
  if (Pop() != 0)
  {
    Push(0x000a);
  } else
  {
    Push(4);
  }
  LoadData(WEC3E); // from 'TRADERS'
  C_ex__2(); // C!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf484: WORD 'SET-CARG' codep=0x224c wordp=0xf491
// ================================================
// entry

void SET_dash_CARG() // SET-CARG
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xf3da); // 'WF3DA'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(pp_TV_dash_HOLD); // TV-HOLD
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf3da); // 'WF3DA'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  WF3E8(); // WF3E8
}


// ================================================
// 0xf4b5: WORD 'WF4B7' codep=0x224c wordp=0xf4b7
// ================================================

void WF4B7() // WF4B7
{
  unsigned short int a, b;
  Push(pp__ro_PLANET); // (PLANET
  Get_gt_C_plus_S(); // @>C+S
  LoadData(WEBB6); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  ICLOSE(); // ICLOSE
  a = Pop(); // >R
  Push(Read16(a)); // R@
  _gt_FLAG(); // >FLAG
  Push(Pop() & !Read16(pp_PAST)); //  PAST @ NOT AND
  Push(a); // R>
  SWAP(); // SWAP
  b = Pop(); // >R
  WF33B(); // WF33B
  WEC7A(); // WEC7A
  Push(Read16(b)); // R@
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Pop(); // DROP
    Push(0);
  }
  StoreINST_dash_S(); // !INST-S
  Push(Read16(b)); // R@
  if (Pop() != 0)
  {
    WF41E(); // WF41E
  }
  Push(b); // R>
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4f5: WORD 'BLD-LIST' codep=0x224c wordp=0xf502
// ================================================
// entry

void BLD_dash_LIST() // BLD-LIST
{
  WF24F(); // WF24F
  WF4B7(); // WF4B7
  if (Pop() == 0) return;
  WF28D(); // WF28D
  WEC7A(); // WEC7A
  LoadData(WEBD6); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  _gt_FLAG(); // >FLAG
  ICLOSE(); // ICLOSE
  if (Pop() != 0)
  {
    WF031(); // WF031
    WF18F(); // WF18F
    WF1A3(); // WF1A3
    WF25F(); // WF25F
    WF039(); // WF039
    SET_dash_CARG(); // SET-CARG
    WF31B(); // WF31B
    WEC92(); // WEC92
    WF2A3(); // WF2A3
    return;
  }
  Push(0x0bb8);
  MS(); // MS
  WF2A3(); // WF2A3
}

// 0xf53a: db 0x42 0x4c 0x44 0x4c 0x49 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x90 0x16 0x43 0x4f 0x4d 0x4d 0x00 'BLDLI___________________________  COMM '

