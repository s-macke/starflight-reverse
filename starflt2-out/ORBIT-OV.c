// ====== OVERLAY 'ORBIT-OV' ======
// store offset = 0xdb20
// overlay size   = 0x1a40

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xdb36  codep:0x2214 parp:0xdb36 size:0x0002 C-string:'UNK_0xdb36'
//      UNK_0xdb3a  codep:0x2214 parp:0xdb3a size:0x0002 C-string:'UNK_0xdb3a'
//      UNK_0xdb3e  codep:0x2214 parp:0xdb3e size:0x0002 C-string:'UNK_0xdb3e'
//      UNK_0xdb42  codep:0x1d29 parp:0xdb42 size:0x000c C-string:'UNK_0xdb42'
//      UNK_0xdb50  codep:0x1d29 parp:0xdb50 size:0x0002 C-string:'UNK_0xdb50'
//      UNK_0xdb54  codep:0x1d29 parp:0xdb54 size:0x0002 C-string:'UNK_0xdb54'
//      UNK_0xdb58  codep:0x1d29 parp:0xdb58 size:0x0002 C-string:'UNK_0xdb58'
//      UNK_0xdb5c  codep:0x1d29 parp:0xdb5c size:0x0002 C-string:'UNK_0xdb5c'
//      UNK_0xdb60  codep:0x1d29 parp:0xdb60 size:0x0002 C-string:'UNK_0xdb60'
//      UNK_0xdb64  codep:0x1d29 parp:0xdb64 size:0x0002 C-string:'UNK_0xdb64'
//      UNK_0xdb68  codep:0x1d29 parp:0xdb68 size:0x0002 C-string:'UNK_0xdb68'
//      UNK_0xdb6c  codep:0x1d29 parp:0xdb6c size:0x0002 C-string:'UNK_0xdb6c'
//      UNK_0xdb70  codep:0x1d29 parp:0xdb70 size:0x0002 C-string:'UNK_0xdb70'
//      UNK_0xdb74  codep:0x1d29 parp:0xdb74 size:0x0002 C-string:'UNK_0xdb74'
//      UNK_0xdb78  codep:0x1d29 parp:0xdb78 size:0x0002 C-string:'UNK_0xdb78'
//      UNK_0xdb7c  codep:0x1d29 parp:0xdb7c size:0x0002 C-string:'UNK_0xdb7c'
//      UNK_0xdb80  codep:0x1d29 parp:0xdb80 size:0x0002 C-string:'UNK_0xdb80'
//      UNK_0xdb84  codep:0x1d29 parp:0xdb84 size:0x0002 C-string:'UNK_0xdb84'
//      UNK_0xdb88  codep:0x1d29 parp:0xdb88 size:0x0002 C-string:'UNK_0xdb88'
//      UNK_0xdb8c  codep:0x1d29 parp:0xdb8c size:0x0002 C-string:'UNK_0xdb8c'
//      UNK_0xdb90  codep:0x1d29 parp:0xdb90 size:0x0002 C-string:'UNK_0xdb90'
//      UNK_0xdb94  codep:0x1d29 parp:0xdb94 size:0x0002 C-string:'UNK_0xdb94'
//      UNK_0xdb98  codep:0x1d29 parp:0xdb98 size:0x0002 C-string:'UNK_0xdb98'
//      UNK_0xdb9c  codep:0x1d29 parp:0xdb9c size:0x0002 C-string:'UNK_0xdb9c'
//      UNK_0xdba0  codep:0x1d29 parp:0xdba0 size:0x0002 C-string:'UNK_0xdba0'
//      UNK_0xdba4  codep:0x1d29 parp:0xdba4 size:0x0002 C-string:'UNK_0xdba4'
//      UNK_0xdba8  codep:0x1d29 parp:0xdba8 size:0x0002 C-string:'UNK_0xdba8'
//      UNK_0xdbac  codep:0x1d29 parp:0xdbac size:0x0002 C-string:'UNK_0xdbac'
//      UNK_0xdbb0  codep:0x1d29 parp:0xdbb0 size:0x0002 C-string:'UNK_0xdbb0'
//      UNK_0xdbb4  codep:0x1d29 parp:0xdbb4 size:0x0002 C-string:'UNK_0xdbb4'
//      UNK_0xdbb8  codep:0x1d29 parp:0xdbb8 size:0x0006 C-string:'UNK_0xdbb8'
//      UNK_0xdbc0  codep:0x1d29 parp:0xdbc0 size:0x0002 C-string:'UNK_0xdbc0'
//      UNK_0xdbc4  codep:0x1d29 parp:0xdbc4 size:0x0002 C-string:'UNK_0xdbc4'
//      UNK_0xdbc8  codep:0x1d29 parp:0xdbc8 size:0x0002 C-string:'UNK_0xdbc8'
//      UNK_0xdbcc  codep:0x1d29 parp:0xdbcc size:0x0016 C-string:'UNK_0xdbcc'
//      UNK_0xdbe4  codep:0x1d29 parp:0xdbe4 size:0x0002 C-string:'UNK_0xdbe4'
//      UNK_0xdbe8  codep:0x1d29 parp:0xdbe8 size:0x0020 C-string:'UNK_0xdbe8'
//      UNK_0xdc0a  codep:0x1d29 parp:0xdc0a size:0x0008 C-string:'UNK_0xdc0a'
//      UNK_0xdc14  codep:0x1d29 parp:0xdc14 size:0x0020 C-string:'UNK_0xdc14'
//      UNK_0xdc36  codep:0x1d29 parp:0xdc36 size:0x0008 C-string:'UNK_0xdc36'
//      UNK_0xdc40  codep:0x1d29 parp:0xdc40 size:0x0030 C-string:'UNK_0xdc40'
//      UNK_0xdc72  codep:0x1d29 parp:0xdc72 size:0x0018 C-string:'UNK_0xdc72'
//      UNK_0xdc8c  codep:0x7394 parp:0xdc8c size:0x004e C-string:'UNK_0xdc8c'
//      UNK_0xdcdc  codep:0xdcdc parp:0xdcdc size:0x0098 C-string:'UNK_0xdcdc'
//      UNK_0xdd76  codep:0x224c parp:0xdd76 size:0x0026 C-string:'UNK_0xdd76'
//      UNK_0xdd9e  codep:0x224c parp:0xdd9e size:0x004c C-string:'UNK_0xdd9e'
//      UNK_0xddec  codep:0x224c parp:0xddec size:0x004e C-string:'UNK_0xddec'
//         SETQUAD  codep:0xde46 parp:0xde46 size:0x0009 C-string:'SETQUAD'
//             C*/  codep:0xde57 parp:0xde57 size:0x000e C-string:'C_star__slash_'
//      UNK_0xde67  codep:0x224c parp:0xde67 size:0x002c C-string:'UNK_0xde67'
//      UNK_0xde95  codep:0x224c parp:0xde95 size:0x0022 C-string:'UNK_0xde95'
//      UNK_0xdeb9  codep:0x224c parp:0xdeb9 size:0x001e C-string:'UNK_0xdeb9'
//      UNK_0xded9  codep:0x224c parp:0xded9 size:0x0016 C-string:'UNK_0xded9'
//      UNK_0xdef1  codep:0x224c parp:0xdef1 size:0x0016 C-string:'UNK_0xdef1'
//      UNK_0xdf09  codep:0x224c parp:0xdf09 size:0x0016 C-string:'UNK_0xdf09'
//      UNK_0xdf21  codep:0x224c parp:0xdf21 size:0x0012 C-string:'UNK_0xdf21'
//      UNK_0xdf35  codep:0x224c parp:0xdf35 size:0x0028 C-string:'UNK_0xdf35'
//      UNK_0xdf5f  codep:0x224c parp:0xdf5f size:0x0016 C-string:'UNK_0xdf5f'
//      UNK_0xdf77  codep:0x224c parp:0xdf77 size:0x002e C-string:'UNK_0xdf77'
//      UNK_0xdfa7  codep:0x224c parp:0xdfa7 size:0x002c C-string:'UNK_0xdfa7'
//      UNK_0xdfd5  codep:0x224c parp:0xdfd5 size:0x0018 C-string:'UNK_0xdfd5'
//      UNK_0xdfef  codep:0x224c parp:0xdfef size:0x0030 C-string:'UNK_0xdfef'
//      UNK_0xe021  codep:0x224c parp:0xe021 size:0x001a C-string:'UNK_0xe021'
//      UNK_0xe03d  codep:0x224c parp:0xe03d size:0x0012 C-string:'UNK_0xe03d'
//      UNK_0xe051  codep:0x224c parp:0xe051 size:0x001a C-string:'UNK_0xe051'
//      UNK_0xe06d  codep:0x224c parp:0xe06d size:0x0010 C-string:'UNK_0xe06d'
//      UNK_0xe07f  codep:0x224c parp:0xe07f size:0x002e C-string:'UNK_0xe07f'
//      UNK_0xe0af  codep:0xe0af parp:0xe0af size:0x0049 C-string:'UNK_0xe0af'
//      UNK_0xe0fa  codep:0xe0fa parp:0xe0fa size:0x0070 C-string:'UNK_0xe0fa'
//      UNK_0xe16c  codep:0xe16c parp:0xe16c size:0x0050 C-string:'UNK_0xe16c'
//      UNK_0xe1be  codep:0x224c parp:0xe1be size:0x006a C-string:'UNK_0xe1be'
//      UNK_0xe22a  codep:0x224c parp:0xe22a size:0x0070 C-string:'UNK_0xe22a'
//      UNK_0xe29c  codep:0x224c parp:0xe29c size:0x002e C-string:'UNK_0xe29c'
//      UNK_0xe2cc  codep:0x224c parp:0xe2cc size:0x001e C-string:'UNK_0xe2cc'
//      UNK_0xe2ec  codep:0x224c parp:0xe2ec size:0x0016 C-string:'UNK_0xe2ec'
//      UNK_0xe304  codep:0x224c parp:0xe304 size:0x004e C-string:'UNK_0xe304'
//      UNK_0xe354  codep:0x224c parp:0xe354 size:0x0050 C-string:'UNK_0xe354'
//      UNK_0xe3a6  codep:0x224c parp:0xe3a6 size:0x0028 C-string:'UNK_0xe3a6'
//      UNK_0xe3d0  codep:0xe3d0 parp:0xe3d0 size:0x001c C-string:'UNK_0xe3d0'
//      UNK_0xe3ee  codep:0xe3ee parp:0xe3ee size:0x0008 C-string:'UNK_0xe3ee'
//      UNK_0xe3f8  codep:0x224c parp:0xe3f8 size:0x009a C-string:'UNK_0xe3f8'
//      UNK_0xe494  codep:0x224c parp:0xe494 size:0x0012 C-string:'UNK_0xe494'
//      UNK_0xe4a8  codep:0x224c parp:0xe4a8 size:0x0036 C-string:'UNK_0xe4a8'
//      UNK_0xe4e0  codep:0x224c parp:0xe4e0 size:0x005c C-string:'UNK_0xe4e0'
//      UNK_0xe53e  codep:0x1d29 parp:0xe53e size:0x0002 C-string:'UNK_0xe53e'
//      UNK_0xe542  codep:0x224c parp:0xe542 size:0x0054 C-string:'UNK_0xe542'
//      UNK_0xe598  codep:0x224c parp:0xe598 size:0x001a C-string:'UNK_0xe598'
//      UNK_0xe5b4  codep:0x224c parp:0xe5b4 size:0x001c C-string:'UNK_0xe5b4'
//      UNK_0xe5d2  codep:0x224c parp:0xe5d2 size:0x004c C-string:'UNK_0xe5d2'
//      UNK_0xe620  codep:0x224c parp:0xe620 size:0x001a C-string:'UNK_0xe620'
//        SHOWSITE  codep:0x224c parp:0xe647 size:0x0016 C-string:'SHOWSITE'
//       >VIEWSITE  codep:0x224c parp:0xe66b size:0x0040 C-string:'_gt_VIEWSITE'
//      UNK_0xe6ad  codep:0x224c parp:0xe6ad size:0x003c C-string:'UNK_0xe6ad'
//      UNK_0xe6eb  codep:0x224c parp:0xe6eb size:0x0064 C-string:'UNK_0xe6eb'
//      UNK_0xe751  codep:0x224c parp:0xe751 size:0x0056 C-string:'UNK_0xe751'
//      UNK_0xe7a9  codep:0x224c parp:0xe7a9 size:0x003a C-string:'UNK_0xe7a9'
//      UNK_0xe7e5  codep:0x224c parp:0xe7e5 size:0x0042 C-string:'UNK_0xe7e5'
//      UNK_0xe829  codep:0x224c parp:0xe829 size:0x0060 C-string:'UNK_0xe829'
//      UNK_0xe88b  codep:0x224c parp:0xe88b size:0x0030 C-string:'UNK_0xe88b'
//      UNK_0xe8bd  codep:0x224c parp:0xe8bd size:0x0024 C-string:'UNK_0xe8bd'
//      UNK_0xe8e3  codep:0x224c parp:0xe8e3 size:0x0012 C-string:'UNK_0xe8e3'
//      UNK_0xe8f7  codep:0x224c parp:0xe8f7 size:0x0038 C-string:'UNK_0xe8f7'
//      UNK_0xe931  codep:0x224c parp:0xe931 size:0x003c C-string:'UNK_0xe931'
//      UNK_0xe96f  codep:0x224c parp:0xe96f size:0x002c C-string:'UNK_0xe96f'
//      UNK_0xe99d  codep:0x224c parp:0xe99d size:0x002e C-string:'UNK_0xe99d'
//      UNK_0xe9cd  codep:0x224c parp:0xe9cd size:0x002c C-string:'UNK_0xe9cd'
//      UNK_0xe9fb  codep:0x224c parp:0xe9fb size:0x0038 C-string:'UNK_0xe9fb'
//      UNK_0xea35  codep:0x224c parp:0xea35 size:0x0052 C-string:'UNK_0xea35'
//      UNK_0xea89  codep:0x224c parp:0xea89 size:0x0018 C-string:'UNK_0xea89'
//      UNK_0xeaa3  codep:0x224c parp:0xeaa3 size:0x006e C-string:'UNK_0xeaa3'
//      UNK_0xeb13  codep:0x224c parp:0xeb13 size:0x0088 C-string:'UNK_0xeb13'
//         SEEGRID  codep:0x224c parp:0xeba7 size:0x0016 C-string:'SEEGRID'
//      UNK_0xebbf  codep:0x224c parp:0xebbf size:0x0018 C-string:'UNK_0xebbf'
//      UNK_0xebd9  codep:0x224c parp:0xebd9 size:0x003c C-string:'UNK_0xebd9'
//      UNK_0xec17  codep:0x224c parp:0xec17 size:0x0040 C-string:'UNK_0xec17'
//      UNK_0xec59  codep:0x224c parp:0xec59 size:0x0098 C-string:'UNK_0xec59'
//      UNK_0xecf3  codep:0x224c parp:0xecf3 size:0x001c C-string:'UNK_0xecf3'
//      UNK_0xed11  codep:0x224c parp:0xed11 size:0x002a C-string:'UNK_0xed11'
//      UNK_0xed3d  codep:0x224c parp:0xed3d size:0x0068 C-string:'UNK_0xed3d'
//      UNK_0xeda7  codep:0x224c parp:0xeda7 size:0x0034 C-string:'UNK_0xeda7'
//      UNK_0xeddd  codep:0x224c parp:0xeddd size:0x0034 C-string:'UNK_0xeddd'
//      UNK_0xee13  codep:0x224c parp:0xee13 size:0x0060 C-string:'UNK_0xee13'
//      UNK_0xee75  codep:0x224c parp:0xee75 size:0x003a C-string:'UNK_0xee75'
//      UNK_0xeeb1  codep:0x224c parp:0xeeb1 size:0x0026 C-string:'UNK_0xeeb1'
//      UNK_0xeed9  codep:0x224c parp:0xeed9 size:0x0042 C-string:'UNK_0xeed9'
//      UNK_0xef1d  codep:0x224c parp:0xef1d size:0x001e C-string:'UNK_0xef1d'
//      UNK_0xef3d  codep:0x224c parp:0xef3d size:0x0026 C-string:'UNK_0xef3d'
//      UNK_0xef65  codep:0x224c parp:0xef65 size:0x001e C-string:'UNK_0xef65'
//      UNK_0xef85  codep:0x224c parp:0xef85 size:0x0026 C-string:'UNK_0xef85'
//      UNK_0xefad  codep:0x224c parp:0xefad size:0x001a C-string:'UNK_0xefad'
//      UNK_0xefc9  codep:0x224c parp:0xefc9 size:0x000e C-string:'UNK_0xefc9'
//      UNK_0xefd9  codep:0x224c parp:0xefd9 size:0x000a C-string:'UNK_0xefd9'
//      UNK_0xefe5  codep:0x224c parp:0xefe5 size:0x0016 C-string:'UNK_0xefe5'
//      UNK_0xeffd  codep:0x224c parp:0xeffd size:0x00c2 C-string:'UNK_0xeffd'
//      UNK_0xf0c1  codep:0x224c parp:0xf0c1 size:0x000e C-string:'UNK_0xf0c1'
//         DESCEND  codep:0x224c parp:0xf0db size:0x008d C-string:'DESCEND'
//      UNK_0xf16a  codep:0x224c parp:0xf16a size:0x006c C-string:'UNK_0xf16a'
//      UNK_0xf1d8  codep:0x224c parp:0xf1d8 size:0x0046 C-string:'UNK_0xf1d8'
//      UNK_0xf220  codep:0x224c parp:0xf220 size:0x0012 C-string:'UNK_0xf220'
//      UNK_0xf234  codep:0x1d29 parp:0xf234 size:0x0002 C-string:'UNK_0xf234'
//      UNK_0xf238  codep:0x224c parp:0xf238 size:0x0068 C-string:'UNK_0xf238'
//          ASCEND  codep:0x224c parp:0xf2ab size:0x0008 C-string:'ASCEND'
//      UNK_0xf2b5  codep:0x224c parp:0xf2b5 size:0x0006 C-string:'UNK_0xf2b5'
//      UNK_0xf2bd  codep:0x224c parp:0xf2bd size:0x002a C-string:'UNK_0xf2bd'
//      UNK_0xf2e9  codep:0x224c parp:0xf2e9 size:0x0026 C-string:'UNK_0xf2e9'
//         SKYCASE  codep:0x4b3b parp:0xf31b size:0x0014 C-string:'SKYCASE'
//      UNK_0xf331  codep:0x224c parp:0xf331 size:0x000c C-string:'UNK_0xf331'
//      INIT-ORBIT  codep:0x224c parp:0xf34c size:0x0024 C-string:'INIT_dash_ORBIT'
//          ROTATE  codep:0x224c parp:0xf37b size:0x0000 C-string:'ROTATE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__3; // 3
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__5; // 5
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__7; // 7
extern const unsigned short int cc__8; // 8
extern const unsigned short int cc__9; // 9
extern const unsigned short int cc__dash_1; // -1
extern const unsigned short int cc__dash_2; // -2
extern const unsigned short int cc_POLYSEG; // POLYSEG
extern const unsigned short int pp_SEED_3; // SEED_3
extern const unsigned short int pp_SPHEREW; // SPHEREW
extern const unsigned short int pp_SIGNEXT; // SIGNEXT
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp_XUR; // XUR
extern const unsigned short int pp_YUR; // YUR
extern const unsigned short int pp_ATMO; // ATMO
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_DCOLOR; // DCOLOR
extern const unsigned short int pp_Y1; // Y1
extern const unsigned short int pp_X1; // X1
extern const unsigned short int pp__n_IN; // #IN
extern const unsigned short int pp_VIN; // VIN
extern const unsigned short int pp_VOUT; // VOUT
extern const unsigned short int pp_OIN; // OIN
extern const unsigned short int pp_OOUT; // OOUT
extern const unsigned short int pp__ask_OPEN; // ?OPEN
extern const unsigned short int pp__ask_FUEL_dash_D; // ?FUEL-D
extern const unsigned short int pp_DXVIS; // DXVIS
extern const unsigned short int pp_DYVIS; // DYVIS
extern const unsigned short int pp_XCON; // XCON
extern const unsigned short int pp_YCON; // YCON
extern const unsigned short int pp_DXCON; // DXCON
extern const unsigned short int pp_DYCON; // DYCON
extern const unsigned short int pp_XVIS; // XVIS
extern const unsigned short int pp_YVIS; // YVIS
extern const unsigned short int pp_GLOBALS; // GLOBALS
extern const unsigned short int pp__ask_NEB; // ?NEB
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp__3DSEG; // 3DSEG
extern const unsigned short int pp_VIN_i_; // VIN'
extern const unsigned short int pp_YSCREEN; // YSCREEN
extern const unsigned short int pp_XSCREEN; // XSCREEN
extern const unsigned short int pp__n_CLRMAP; // #CLRMAP
extern const unsigned short int pp__ro_PLANET; // (PLANET
void _star__slash_(); // */
void ABS(); // ABS
void M_star_(); // M*
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void RRND(); // RRND
void SQRT(); // SQRT
void _n_COLZ(); // #COLZ
void ACELLAD(); // ACELLAD
void A_ex_(); // A!
void A_at_(); // A@
void SETLARR(); // SETLARR
void SETREGI(); // SETREGI
void C_ex__2(); // C!_2
void _ex__2(); // !_2
void _plus__ex__2(); // +!_2
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void MODULE(); // MODULE
void _1PIX(); // 1PIX
void _2PIX(); // 2PIX
void NBCLR(); // NBCLR
void _ex_COLOR(); // !COLOR
void BFILL(); // BFILL
void DARK(); // DARK
void LLINE(); // LLINE
void _dot_CIRCLE_1(); // .CIRCLE_1
void LFILLPO(); // LFILLPO
void SETCLIP(); // SETCLIP
void VCLIPSE(); // VCLIPSE
void DCLIPSE(); // DCLIPSE
void _gt_MAINVI(); // >MAINVI
void _gt_DISPLA(); // >DISPLA
void V_gt_DISPL(); // V>DISPL
void SET_dash_COL(); // SET-COL
void COLORMA_2(); // COLORMA_2
void _ex_XYSEED(); // !XYSEED
void CTERASE(); // CTERASE
void CTINIT(); // CTINIT
void _dot_TTY(); // .TTY
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void L_at_(); // L@
void L_ex_(); // L!
void LC_at_(); // LC@
void LC_ex_(); // LC!
void _1_dot_5_at_(); // 1.5@
void _at_DS(); // @DS
void L_plus__dash__at_(); // L+-@
void LPLOT(); // LPLOT
void CLIPPER(); // CLIPPER
void SCANPOL(); // SCANPOL
void UNK_0xdcdc(); // UNK_0xdcdc
void SETQUAD(); // SETQUAD
void C_star__slash_(); // C*/
void UNK_0xe0af(); // UNK_0xe0af
void UNK_0xe0fa(); // UNK_0xe0fa
void UNK_0xe16c(); // UNK_0xe16c
void UNK_0xe3d0(); // UNK_0xe3d0
void UNK_0xe3ee(); // UNK_0xe3ee


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xdb42 = 0xdb42; // UNK_0xdb42 size: 12
// {0x08, 0x19, 0x29, 0x38, 0x47, 0x54, 0x5f, 0x6a, 0x72, 0x78, 0x7d, 0x7f}

const unsigned short int pp_UNK_0xdb50 = 0xdb50; // UNK_0xdb50 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb54 = 0xdb54; // UNK_0xdb54 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb58 = 0xdb58; // UNK_0xdb58 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb5c = 0xdb5c; // UNK_0xdb5c size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb60 = 0xdb60; // UNK_0xdb60 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb64 = 0xdb64; // UNK_0xdb64 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb68 = 0xdb68; // UNK_0xdb68 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb6c = 0xdb6c; // UNK_0xdb6c size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb70 = 0xdb70; // UNK_0xdb70 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb74 = 0xdb74; // UNK_0xdb74 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb78 = 0xdb78; // UNK_0xdb78 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb7c = 0xdb7c; // UNK_0xdb7c size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb80 = 0xdb80; // UNK_0xdb80 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb84 = 0xdb84; // UNK_0xdb84 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb88 = 0xdb88; // UNK_0xdb88 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb8c = 0xdb8c; // UNK_0xdb8c size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb90 = 0xdb90; // UNK_0xdb90 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb94 = 0xdb94; // UNK_0xdb94 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb98 = 0xdb98; // UNK_0xdb98 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdb9c = 0xdb9c; // UNK_0xdb9c size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdba0 = 0xdba0; // UNK_0xdba0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdba4 = 0xdba4; // UNK_0xdba4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdba8 = 0xdba8; // UNK_0xdba8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdbac = 0xdbac; // UNK_0xdbac size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdbb0 = 0xdbb0; // UNK_0xdbb0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdbb4 = 0xdbb4; // UNK_0xdbb4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdbb8 = 0xdbb8; // UNK_0xdbb8 size: 6
// {0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_UNK_0xdbc0 = 0xdbc0; // UNK_0xdbc0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdbc4 = 0xdbc4; // UNK_0xdbc4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdbc8 = 0xdbc8; // UNK_0xdbc8 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdbcc = 0xdbcc; // UNK_0xdbcc size: 22
// {0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_UNK_0xdbe4 = 0xdbe4; // UNK_0xdbe4 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xdbe8 = 0xdbe8; // UNK_0xdbe8 size: 32
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x43, 0x4f, 0x4e, 0x41, 0x4e, 0x43, 0x48, 0x4f, 0x52, 0x2d, 0x56, 0x45, 0xd2, 0xac, 0x3c, 0xf5, 0x37, 0x33, 0x33, 0xce, 0x43, 0x4f, 0x4e, 0x41, 0x4e}

const unsigned short int pp_UNK_0xdc0a = 0xdc0a; // UNK_0xdc0a size: 8
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xac}

const unsigned short int pp_UNK_0xdc14 = 0xdc14; // UNK_0xdc14 size: 32
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x41, 0x4e, 0x43, 0x48, 0x4f, 0x52, 0x2d, 0x43, 0x4e, 0x54, 0xb2, 0xac, 0x3c, 0x4d, 0xe9, 0x58, 0xdb, 0xcc, 0x53, 0x45, 0x54, 0x52, 0x45, 0x4c, 0x4f}

const unsigned short int pp_UNK_0xdc36 = 0xdc36; // UNK_0xdc36 size: 8
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xa3}

const unsigned short int pp_UNK_0xdc40 = 0xdc40; // UNK_0xdc40 size: 48
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x4f, 0x52, 0x3e, 0x43, 0x4f, 0x4e, 0x54, 0x4f, 0x55, 0xd2, 0xac, 0x3c, 0x83, 0xe9, 0x2c, 0xdc, 0xce, 0x41, 0x4e, 0x43, 0x48, 0x4f, 0x52, 0x2d, 0x43, 0x4f, 0x4e, 0x54, 0x4f, 0x55, 0xd2, 0xac, 0x3c, 0x1f, 0xea, 0x17, 0xdc, 0xcd, 0x53, 0x55, 0x42}

const unsigned short int pp_UNK_0xdc72 = 0xdc72; // UNK_0xdc72 size: 24
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xd4, 0xac, 0x3c, 0x35, 0xea, 0xb6, 0xdb, 0xcd, 0x46, 0x52, 0x41, 0x43, 0x54, 0x2d, 0x43, 0x4f, 0x4e}

const unsigned short int pp_UNK_0xe53e = 0xe53e; // UNK_0xe53e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xf234 = 0xf234; // UNK_0xf234 size: 2
// {0x3a, 0x20}


const unsigned short int cc_UNK_0xdb36 = 0xdb36; // UNK_0xdb36
const unsigned short int cc_UNK_0xdb3a = 0xdb3a; // UNK_0xdb3a
const unsigned short int cc_UNK_0xdb3e = 0xdb3e; // UNK_0xdb3e


// 0xdb32: db 0x87 0x01 '  '

// ================================================
// 0xdb34: WORD 'UNK_0xdb36' codep=0x2214 parp=0xdb36
// ================================================
// 0xdb36: db 0x7f 0x00 ' '

// ================================================
// 0xdb38: WORD 'UNK_0xdb3a' codep=0x2214 parp=0xdb3a
// ================================================
// 0xdb3a: db 0x32 0x00 '2 '

// ================================================
// 0xdb3c: WORD 'UNK_0xdb3e' codep=0x2214 parp=0xdb3e
// ================================================
// 0xdb3e: db 0x42 0x00 'B '

// ================================================
// 0xdb40: WORD 'UNK_0xdb42' codep=0x1d29 parp=0xdb42
// ================================================
// 0xdb42: db 0x08 0x19 0x29 0x38 0x47 0x54 0x5f 0x6a 0x72 0x78 0x7d 0x7f '  )8GT_jrx}'

// ================================================
// 0xdb4e: WORD 'UNK_0xdb50' codep=0x1d29 parp=0xdb50
// ================================================
// 0xdb50: db 0x3a 0x20 ': '

// ================================================
// 0xdb52: WORD 'UNK_0xdb54' codep=0x1d29 parp=0xdb54
// ================================================
// 0xdb54: db 0x3a 0x20 ': '

// ================================================
// 0xdb56: WORD 'UNK_0xdb58' codep=0x1d29 parp=0xdb58
// ================================================
// 0xdb58: db 0x3a 0x20 ': '

// ================================================
// 0xdb5a: WORD 'UNK_0xdb5c' codep=0x1d29 parp=0xdb5c
// ================================================
// 0xdb5c: db 0x3a 0x20 ': '

// ================================================
// 0xdb5e: WORD 'UNK_0xdb60' codep=0x1d29 parp=0xdb60
// ================================================
// 0xdb60: db 0x3a 0x20 ': '

// ================================================
// 0xdb62: WORD 'UNK_0xdb64' codep=0x1d29 parp=0xdb64
// ================================================
// 0xdb64: db 0x3a 0x20 ': '

// ================================================
// 0xdb66: WORD 'UNK_0xdb68' codep=0x1d29 parp=0xdb68
// ================================================
// 0xdb68: db 0x3a 0x20 ': '

// ================================================
// 0xdb6a: WORD 'UNK_0xdb6c' codep=0x1d29 parp=0xdb6c
// ================================================
// 0xdb6c: db 0x3a 0x20 ': '

// ================================================
// 0xdb6e: WORD 'UNK_0xdb70' codep=0x1d29 parp=0xdb70
// ================================================
// 0xdb70: db 0x3a 0x20 ': '

// ================================================
// 0xdb72: WORD 'UNK_0xdb74' codep=0x1d29 parp=0xdb74
// ================================================
// 0xdb74: db 0x3a 0x20 ': '

// ================================================
// 0xdb76: WORD 'UNK_0xdb78' codep=0x1d29 parp=0xdb78
// ================================================
// 0xdb78: db 0x3a 0x20 ': '

// ================================================
// 0xdb7a: WORD 'UNK_0xdb7c' codep=0x1d29 parp=0xdb7c
// ================================================
// 0xdb7c: db 0x3a 0x20 ': '

// ================================================
// 0xdb7e: WORD 'UNK_0xdb80' codep=0x1d29 parp=0xdb80
// ================================================
// 0xdb80: db 0x3a 0x20 ': '

// ================================================
// 0xdb82: WORD 'UNK_0xdb84' codep=0x1d29 parp=0xdb84
// ================================================
// 0xdb84: db 0x3a 0x20 ': '

// ================================================
// 0xdb86: WORD 'UNK_0xdb88' codep=0x1d29 parp=0xdb88
// ================================================
// 0xdb88: db 0x3a 0x20 ': '

// ================================================
// 0xdb8a: WORD 'UNK_0xdb8c' codep=0x1d29 parp=0xdb8c
// ================================================
// 0xdb8c: db 0x3a 0x20 ': '

// ================================================
// 0xdb8e: WORD 'UNK_0xdb90' codep=0x1d29 parp=0xdb90
// ================================================
// 0xdb90: db 0x3a 0x20 ': '

// ================================================
// 0xdb92: WORD 'UNK_0xdb94' codep=0x1d29 parp=0xdb94
// ================================================
// 0xdb94: db 0x3a 0x20 ': '

// ================================================
// 0xdb96: WORD 'UNK_0xdb98' codep=0x1d29 parp=0xdb98
// ================================================
// 0xdb98: db 0x3a 0x20 ': '

// ================================================
// 0xdb9a: WORD 'UNK_0xdb9c' codep=0x1d29 parp=0xdb9c
// ================================================
// 0xdb9c: db 0x3a 0x20 ': '

// ================================================
// 0xdb9e: WORD 'UNK_0xdba0' codep=0x1d29 parp=0xdba0
// ================================================
// 0xdba0: db 0x3a 0x20 ': '

// ================================================
// 0xdba2: WORD 'UNK_0xdba4' codep=0x1d29 parp=0xdba4
// ================================================
// 0xdba4: db 0x3a 0x20 ': '

// ================================================
// 0xdba6: WORD 'UNK_0xdba8' codep=0x1d29 parp=0xdba8
// ================================================
// 0xdba8: db 0x3a 0x20 ': '

// ================================================
// 0xdbaa: WORD 'UNK_0xdbac' codep=0x1d29 parp=0xdbac
// ================================================
// 0xdbac: db 0x3a 0x20 ': '

// ================================================
// 0xdbae: WORD 'UNK_0xdbb0' codep=0x1d29 parp=0xdbb0
// ================================================
// 0xdbb0: db 0x3a 0x20 ': '

// ================================================
// 0xdbb2: WORD 'UNK_0xdbb4' codep=0x1d29 parp=0xdbb4
// ================================================
// 0xdbb4: db 0x3a 0x20 ': '

// ================================================
// 0xdbb6: WORD 'UNK_0xdbb8' codep=0x1d29 parp=0xdbb8
// ================================================
// 0xdbb8: db 0x3a 0x20 0x29 0x1d 0x3a 0x20 ': ) : '

// ================================================
// 0xdbbe: WORD 'UNK_0xdbc0' codep=0x1d29 parp=0xdbc0
// ================================================
// 0xdbc0: db 0x3a 0x20 ': '

// ================================================
// 0xdbc2: WORD 'UNK_0xdbc4' codep=0x1d29 parp=0xdbc4
// ================================================
// 0xdbc4: db 0x3a 0x20 ': '

// ================================================
// 0xdbc6: WORD 'UNK_0xdbc8' codep=0x1d29 parp=0xdbc8
// ================================================
// 0xdbc8: db 0x3a 0x20 ': '

// ================================================
// 0xdbca: WORD 'UNK_0xdbcc' codep=0x1d29 parp=0xdbcc
// ================================================
// 0xdbcc: db 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 0x29 0x1d 0x3a 0x20 ': ) : ) : ) : ) : ) : '

// ================================================
// 0xdbe2: WORD 'UNK_0xdbe4' codep=0x1d29 parp=0xdbe4
// ================================================
// 0xdbe4: db 0x3a 0x20 ': '

// ================================================
// 0xdbe6: WORD 'UNK_0xdbe8' codep=0x1d29 parp=0xdbe8
// ================================================
// 0xdbe8: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x43 0x4f 0x4e 0x41 0x4e 0x43 0x48 0x4f 0x52 0x2d 0x56 0x45 0xd2 0xac 0x3c 0xf5 0x37 0x33 0x33 0xce 0x43 0x4f 0x4e 0x41 0x4e ' ALLOT CONANCHOR-VE  < 733 CONAN'

// ================================================
// 0xdc08: WORD 'UNK_0xdc0a' codep=0x1d29 parp=0xdc0a
// ================================================
// 0xdc0a: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xac ' ALLOT  '

// ================================================
// 0xdc12: WORD 'UNK_0xdc14' codep=0x1d29 parp=0xdc14
// ================================================
// 0xdc14: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x41 0x4e 0x43 0x48 0x4f 0x52 0x2d 0x43 0x4e 0x54 0xb2 0xac 0x3c 0x4d 0xe9 0x58 0xdb 0xcc 0x53 0x45 0x54 0x52 0x45 0x4c 0x4f ' ALLOT ANCHOR-CNT  <M X  SETRELO'

// ================================================
// 0xdc34: WORD 'UNK_0xdc36' codep=0x1d29 parp=0xdc36
// ================================================
// 0xdc36: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xa3 ' ALLOT  '

// ================================================
// 0xdc3e: WORD 'UNK_0xdc40' codep=0x1d29 parp=0xdc40
// ================================================
// 0xdc40: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x4f 0x52 0x3e 0x43 0x4f 0x4e 0x54 0x4f 0x55 0xd2 0xac 0x3c 0x83 0xe9 0x2c 0xdc 0xce 0x41 0x4e 0x43 0x48 0x4f 0x52 0x2d 0x43 0x4f 0x4e 0x54 0x4f 0x55 0xd2 0xac 0x3c 0x1f 0xea 0x17 0xdc 0xcd 0x53 0x55 0x42 ' ALLOT OR>CONTOU  <  ,  ANCHOR-CONTOU  <     SUB'

// ================================================
// 0xdc70: WORD 'UNK_0xdc72' codep=0x1d29 parp=0xdc72
// ================================================
// 0xdc72: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xd4 0xac 0x3c 0x35 0xea 0xb6 0xdb 0xcd 0x46 0x52 0x41 0x43 0x54 0x2d 0x43 0x4f 0x4e ' ALLOT   <5    FRACT-CON'

// ================================================
// 0xdc8a: WORD 'UNK_0xdc8c' codep=0x7394 parp=0xdc8c
// ================================================
// 0xdc8c: db 0x20 0x02 0x02 0x17 0x49 0x6c 0x29 0x1d 0x8b 0xc1 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0x03 0xc1 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0x03 0xc1 0x40 0xd1 0xf8 0x03 0xc2 0x40 0xd1 0xf8 0xc3 0x29 0x1d 0x8b 0xc2 0xc3 0x94 0xdc 0x99 0xdc 0xa8 0xdc 0xb2 0xdc 0xc1 0xdc 0x29 0x1d '    Il)    )     @    @   )     @   )     @    @   )              ) '
// 0xdcd0: shl    bx,1
// 0xdcd2: add    bx,DCC4
// 0xdcd6: mov    ax,[bx]
// 0xdcd8: jmp    ax

// ================================================
// 0xdcda: WORD 'UNK_0xdcdc' codep=0xdcdc parp=0xdcdc
// ================================================
// 0xdcdc: pop    word ptr [DBD4]
// 0xdce0: pop    word ptr [DBD8]
// 0xdce4: mov    bx,[DBD0]
// 0xdce8: add    bx,0E
// 0xdceb: mov    cx,[bx]
// 0xdced: sub    bx,04
// 0xdcf0: mov    dx,[bx]
// 0xdcf2: mov    bx,[DBD8]
// 0xdcf6: call   DCD0
// 0xdcf9: push   ax
// 0xdcfa: mov    bx,[DBD0]
// 0xdcfe: add    bx,02
// 0xdd01: mov    cx,[bx]
// 0xdd03: add    bx,04
// 0xdd06: mov    dx,[bx]
// 0xdd08: mov    bx,[DBD8]
// 0xdd0c: call   DCD0
// 0xdd0f: mov    dx,ax
// 0xdd11: pop    cx
// 0xdd12: mov    bx,[DBD4]
// 0xdd16: call   DCD0
// 0xdd19: push   ax
// 0xdd1a: mov    bx,[DBD0]
// 0xdd1e: mov    dx,[bx]
// 0xdd20: add    bx,0C
// 0xdd23: mov    cx,[bx]
// 0xdd25: mov    bx,[DBD4]
// 0xdd29: call   DCD0
// 0xdd2c: push   ax
// 0xdd2d: mov    bx,[DBD0]
// 0xdd31: add    bx,04
// 0xdd34: mov    dx,[bx]
// 0xdd36: add    bx,04
// 0xdd39: mov    cx,[bx]
// 0xdd3b: mov    bx,[DBD4]
// 0xdd3f: call   DCD0
// 0xdd42: mov    dx,ax
// 0xdd44: pop    cx
// 0xdd45: mov    bx,[DBD8]
// 0xdd49: call   DCD0
// 0xdd4c: push   ax
// 0xdd4d: lodsw
// 0xdd4e: mov    bx,ax
// 0xdd50: jmp    word ptr [bx]
// 0xdd52: db 0x4c 0x22 0x7f 0x0e 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x95 0x4d 0x20 0x0f 0xb8 0x15 0x50 0x0e 0x6e 0x0e 0xbd 0x4d 0xff 0x4d 0xd0 0x15 0xf6 0xff 0xd0 0x15 0xec 0xff 0x90 0x16 'L" r      M    P n  M M          '

// ================================================
// 0xdd74: WORD 'UNK_0xdd76' codep=0x224c parp=0xdd76
// ================================================

void UNK_0xdd76() // UNK_0xdd76
{
  signed short int i, imax;
  signed short int j, jmax;
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Pop()-1); // 1-

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  _n_COLZ(); // #COLZ
  Push(Pop()-1); // 1-

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  ACELLAD(); // ACELLAD
  A_ex_(); // A!
  Push(Read16(cc__dash_1)); // -1
  int step = Pop();
  j += step;
  if (((step>=0) && (j>=jmax)) || ((step<0) && (j<=jmax))) break;
  } while(1); // (+LOOP) 0xfff4

  Push(Read16(cc__dash_1)); // -1
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xffe6

}


// ================================================
// 0xdd9c: WORD 'UNK_0xdd9e' codep=0x224c parp=0xdd9e
// ================================================

void UNK_0xdd9e() // UNK_0xdd9e
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(pp_SPHEREW); // SPHEREW
  _099(); // 099
  Push(0x6af2); // probable 'GVERTEX'
  SETLARR(); // SETLARR
  Push(Read16(cc__6)); // 6
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__6)); // 6
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(0x0020);
  Push(Pop() * Pop()); // *
  Push(0x004e);
  _dash_(); // -
  Push(0); // 0
  Push(i); // J
  Push(0x0020);
  Push(Pop() * Pop()); // *
  Push(0x004e);
  _dash_(); // -
  Push(i); // J
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(1); // 1
  UNK_0xdd76(); // UNK_0xdd76
  j++;
  } while(j<jmax); // (LOOP) 0xffd2

  i++;
  } while(i<imax); // (LOOP) 0xffc8

}


// ================================================
// 0xddea: WORD 'UNK_0xddec' codep=0x224c parp=0xddec
// ================================================

void UNK_0xddec() // UNK_0xddec
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(pp_SPHEREW); // SPHEREW
  _099(); // 099
  Push(0x6af2); // probable 'GVERTEX'
  SETLARR(); // SETLARR
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(Read16(cc__4)); // 4
  Push(Pop() * Pop()); // *
  Push(0x000e);
  _dash_(); // -
  Push(0); // 0
  Push(i); // J
  Push(Read16(cc__4)); // 4
  Push(Pop() * Pop()); // *
  Push(0x000e);
  _dash_(); // -
  Push(i); // J
  Push(Read16(cc__9)); // 9
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(0x0024);
  Push(Pop() + Pop()); // +
  Push(1); // 1
  UNK_0xdd76(); // UNK_0xdd76
  j++;
  } while(j<jmax); // (LOOP) 0xffd0

  i++;
  } while(i<imax); // (LOOP) 0xffc6

}


// ================================================
// 0xde3a: WORD 'SETQUAD' codep=0xde46 parp=0xde46
// ================================================
// 0xde46: mov    [DBD0],sp
// 0xde4a: lodsw
// 0xde4b: mov    bx,ax
// 0xde4d: jmp    word ptr [bx]

// ================================================
// 0xde4f: WORD 'C*/' codep=0xde57 parp=0xde57
// ================================================
// 0xde57: pop    dx
// 0xde58: pop    cx
// 0xde59: pop    ax
// 0xde5a: imul   cl
// 0xde5c: idiv   dl
// 0xde5e: cbw    
// 0xde5f: push   ax
// 0xde60: lodsw
// 0xde61: mov    bx,ax
// 0xde63: jmp    word ptr [bx]

// ================================================
// 0xde65: WORD 'UNK_0xde67' codep=0x224c parp=0xde67
// ================================================

void UNK_0xde67() // UNK_0xde67
{
  Push(pp_UNK_0xdb78); // UNK_0xdb78
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdb84); // UNK_0xdb84
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xdb90); // UNK_0xdb90
  _ex__2(); // !_2
  Push(pp_UNK_0xdb7c); // UNK_0xdb7c
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdb88); // UNK_0xdb88
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xdb94); // UNK_0xdb94
  _ex__2(); // !_2
  Push(pp_UNK_0xdb80); // UNK_0xdb80
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdb8c); // UNK_0xdb8c
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xdb98); // UNK_0xdb98
  _ex__2(); // !_2
}


// ================================================
// 0xde93: WORD 'UNK_0xde95' codep=0x224c parp=0xde95
// ================================================

void UNK_0xde95() // UNK_0xde95
{
  Push(pp_UNK_0xdb98); // UNK_0xdb98
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  Push(pp_UNK_0xdb90); // UNK_0xdb90
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_UNK_0xdb9c); // UNK_0xdb9c
  _ex__2(); // !_2
}


// ================================================
// 0xdeb7: WORD 'UNK_0xdeb9' codep=0x224c parp=0xdeb9
// ================================================

void UNK_0xdeb9() // UNK_0xdeb9
{
  Push(pp_UNK_0xdb9c); // UNK_0xdb9c
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  Push(pp_UNK_0xdb94); // UNK_0xdb94
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  M_star_(); // M*
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_UNK_0xdba8); // UNK_0xdba8
  _ex__2(); // !_2
}


// ================================================
// 0xded7: WORD 'UNK_0xded9' codep=0x224c parp=0xded9
// ================================================

void UNK_0xded9() // UNK_0xded9
{
  Push(pp_UNK_0xdb90); // UNK_0xdb90
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdb9c); // UNK_0xdb9c
  Push(Read16(Pop())); // @
  _star__slash_(); // */
  Push(pp_UNK_0xdba0); // UNK_0xdba0
  _ex__2(); // !_2
}


// ================================================
// 0xdeef: WORD 'UNK_0xdef1' codep=0x224c parp=0xdef1
// ================================================

void UNK_0xdef1() // UNK_0xdef1
{
  Push(pp_UNK_0xdb98); // UNK_0xdb98
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdb9c); // UNK_0xdb9c
  Push(Read16(Pop())); // @
  _star__slash_(); // */
  Push(pp_UNK_0xdba4); // UNK_0xdba4
  _ex__2(); // !_2
}


// ================================================
// 0xdf07: WORD 'UNK_0xdf09' codep=0x224c parp=0xdf09
// ================================================

void UNK_0xdf09() // UNK_0xdf09
{
  Push(pp_UNK_0xdb94); // UNK_0xdb94
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdba8); // UNK_0xdba8
  Push(Read16(Pop())); // @
  _star__slash_(); // */
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  _ex__2(); // !_2
}


// ================================================
// 0xdf1f: WORD 'UNK_0xdf21' codep=0x224c parp=0xdf21
// ================================================

void UNK_0xdf21() // UNK_0xdf21
{
  Push(pp_UNK_0xdb9c); // UNK_0xdb9c
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(pp_UNK_0xdba8); // UNK_0xdba8
  Push(Read16(Pop())); // @
  _star__slash_(); // */
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  _ex__2(); // !_2
}


// ================================================
// 0xdf33: WORD 'UNK_0xdf35' codep=0x224c parp=0xdf35
// ================================================

void UNK_0xdf35() // UNK_0xdf35
{
  Push(pp_UNK_0xdba4); // UNK_0xdba4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdba0); // UNK_0xdba0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  C_ex__2(); // C!_2
}


// ================================================
// 0xdf5d: WORD 'UNK_0xdf5f' codep=0x224c parp=0xdf5f
// ================================================

void UNK_0xdf5f() // UNK_0xdf5f
{
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(Pop()+2); // 2+
  C_ex__2(); // C!_2
}


// ================================================
// 0xdf75: WORD 'UNK_0xdf77' codep=0x224c parp=0xdf77
// ================================================

void UNK_0xdf77() // UNK_0xdf77
{
  Push(pp_UNK_0xdba0); // UNK_0xdba0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdba4); // UNK_0xdba4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
}


// ================================================
// 0xdfa5: WORD 'UNK_0xdfa7' codep=0x224c parp=0xdfa7
// ================================================

void UNK_0xdfa7() // UNK_0xdfa7
{
  Push(pp_UNK_0xdba4); // UNK_0xdba4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdba0); // UNK_0xdba0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  _dash_(); // -
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(Read16(cc__8)); // 8
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
}


// ================================================
// 0xdfd3: WORD 'UNK_0xdfd5' codep=0x224c parp=0xdfd5
// ================================================

void UNK_0xdfd5() // UNK_0xdfd5
{
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(0x000a);
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
}


// ================================================
// 0xdfed: WORD 'UNK_0xdfef' codep=0x224c parp=0xdfef
// ================================================

void UNK_0xdfef() // UNK_0xdfef
{
  Push(pp_UNK_0xdba0); // UNK_0xdba0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdba4); // UNK_0xdba4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  _dash_(); // -
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(0x000c);
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
}


// ================================================
// 0xe01f: WORD 'UNK_0xe021' codep=0x224c parp=0xe021
// ================================================

void UNK_0xe021() // UNK_0xe021
{
  Push(pp_UNK_0xdba0); // UNK_0xdba0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(0x0010);
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
}


// ================================================
// 0xe03b: WORD 'UNK_0xe03d' codep=0x224c parp=0xe03d
// ================================================

void UNK_0xe03d() // UNK_0xe03d
{
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(0x0012);
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
}


// ================================================
// 0xe04f: WORD 'UNK_0xe051' codep=0x224c parp=0xe051
// ================================================

void UNK_0xe051() // UNK_0xe051
{
  Push(pp_UNK_0xdba4); // UNK_0xdba4
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  Push(Read16(Pop())); // @
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  C_star__slash_(); // C*/
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(0x0014);
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
}


// ================================================
// 0xe06b: WORD 'UNK_0xe06d' codep=0x224c parp=0xe06d
// ================================================

void UNK_0xe06d() // UNK_0xe06d
{
  Push(pp_UNK_0xdba8); // UNK_0xdba8
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(0x0016);
  Push(Pop() + Pop()); // +
  _ex__2(); // !_2
}


// ================================================
// 0xe07d: WORD 'UNK_0xe07f' codep=0x224c parp=0xe07f
// ================================================

void UNK_0xe07f() // UNK_0xe07f
{
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(0x0018);
  Push(0); // 0
  FILL_2(); // FILL_2
  UNK_0xde67(); // UNK_0xde67
  UNK_0xde95(); // UNK_0xde95
  UNK_0xdeb9(); // UNK_0xdeb9
  UNK_0xded9(); // UNK_0xded9
  UNK_0xdef1(); // UNK_0xdef1
  UNK_0xdf09(); // UNK_0xdf09
  UNK_0xdf21(); // UNK_0xdf21
  UNK_0xdf35(); // UNK_0xdf35
  UNK_0xdf5f(); // UNK_0xdf5f
  UNK_0xdf77(); // UNK_0xdf77
  UNK_0xdfa7(); // UNK_0xdfa7
  UNK_0xdfd5(); // UNK_0xdfd5
  UNK_0xdfef(); // UNK_0xdfef
  UNK_0xe021(); // UNK_0xe021
  UNK_0xe03d(); // UNK_0xe03d
  UNK_0xe051(); // UNK_0xe051
  UNK_0xe06d(); // UNK_0xe06d
}


// ================================================
// 0xe0ad: WORD 'UNK_0xe0af' codep=0xe0af parp=0xe0af
// ================================================
// 0xe0af: push   si
// 0xe0b0: push   di
// 0xe0b1: push   es
// 0xe0b2: mov    cx,[5F56]
// 0xe0b6: mov    es,cx
// 0xe0b8: mov    si,[57D4]
// 0xe0bc: mov    di,[5F61]
// 0xe0c0: mov    cx,[57BF]
// 0xe0c4: mov    dl,[DB84]
// 0xe0c8: mov    dh,[DB88]
// 0xe0cc: mov    bl,[DB8C]
// 0xe0d0: es:    
// 0xe0d1: mov    al,[si]
// 0xe0d3: sub    al,dl
// 0xe0d5: es:    
// 0xe0d6: mov    [di],al
// 0xe0d8: inc    si
// 0xe0d9: inc    di
// 0xe0da: es:    
// 0xe0db: mov    al,[si]
// 0xe0dd: sub    al,dh
// 0xe0df: es:    
// 0xe0e0: mov    [di],al
// 0xe0e2: inc    si
// 0xe0e3: inc    di
// 0xe0e4: es:    
// 0xe0e5: mov    al,[si]
// 0xe0e7: sub    al,bl
// 0xe0e9: es:    
// 0xe0ea: mov    [di],al
// 0xe0ec: inc    si
// 0xe0ed: inc    di
// 0xe0ee: loop   E0D0
// 0xe0f0: pop    es
// 0xe0f1: pop    di
// 0xe0f2: pop    si
// 0xe0f3: lodsw
// 0xe0f4: mov    bx,ax
// 0xe0f6: jmp    word ptr [bx]

// ================================================
// 0xe0f8: WORD 'UNK_0xe0fa' codep=0xe0fa parp=0xe0fa
// ================================================
// 0xe0fa: push   di
// 0xe0fb: push   bp
// 0xe0fc: push   si
// 0xe0fd: mov    si,DC72
// 0xe100: mov    cx,0003
// 0xe103: mov    dh,[si]
// 0xe105: add    si,02
// 0xe108: mov    dl,[si]
// 0xe10a: add    si,02
// 0xe10d: mov    bh,[si]
// 0xe10f: add    si,02
// 0xe112: mov    ax,[si]
// 0xe114: mov    [DBBC],ax
// 0xe118: add    si,02
// 0xe11b: push   si
// 0xe11c: push   cx
// 0xe11d: sub    cx,03
// 0xe120: neg    cx
// 0xe122: shl    cx,1
// 0xe124: add    cx,[57DF]
// 0xe128: mov    di,cx
// 0xe12a: mov    si,[5F61]
// 0xe12e: push   es
// 0xe12f: mov    cx,[5F56]
// 0xe133: mov    es,cx
// 0xe135: mov    cx,[57BF]
// 0xe139: mov    bp,[DBBC]
// 0xe13d: es:    
// 0xe13e: mov    al,[si]
// 0xe140: inc    si
// 0xe141: imul   dh
// 0xe143: add    bp,ax
// 0xe145: es:    
// 0xe146: mov    al,[si]
// 0xe148: inc    si
// 0xe149: imul   dl
// 0xe14b: add    bp,ax
// 0xe14d: es:    
// 0xe14e: mov    al,[si]
// 0xe150: inc    si
// 0xe151: imul   bh
// 0xe153: add    bp,ax
// 0xe155: es:    
// 0xe156: mov    [di],bp
// 0xe158: add    di,06
// 0xe15b: loop   E139
// 0xe15d: pop    es
// 0xe15e: pop    cx
// 0xe15f: pop    si
// 0xe160: loop   E103
// 0xe162: pop    si
// 0xe163: pop    bp
// 0xe164: pop    di
// 0xe165: lodsw
// 0xe166: mov    bx,ax
// 0xe168: jmp    word ptr [bx]

// ================================================
// 0xe16a: WORD 'UNK_0xe16c' codep=0xe16c parp=0xe16c
// ================================================
// 0xe16c: push   di
// 0xe16d: push   bp
// 0xe16e: push   si
// 0xe16f: push   es
// 0xe170: mov    di,[57DF]
// 0xe174: add    di,04
// 0xe177: mov    si,[5F6F]
// 0xe17b: mov    cx,[5F56]
// 0xe17f: mov    es,cx
// 0xe181: mov    bp,[DBC4]
// 0xe185: mov    cx,[57BF]
// 0xe189: es:    
// 0xe18a: mov    bx,[di]
// 0xe18c: sub    di,02
// 0xe18f: es:    
// 0xe190: mov    ax,[di]
// 0xe192: imul   bp
// 0xe194: idiv   bx
// 0xe196: add    ax,si
// 0xe198: es:    
// 0xe199: mov    [di],ax
// 0xe19b: sub    di,02
// 0xe19e: es:    
// 0xe19f: mov    ax,[di]
// 0xe1a1: imul   word ptr [DBC0]
// 0xe1a5: idiv   bx
// 0xe1a7: add    ax,[5F7D]
// 0xe1ab: es:    
// 0xe1ac: mov    [di],ax
// 0xe1ae: add    di,0A
// 0xe1b1: loop   E189
// 0xe1b3: pop    es
// 0xe1b4: pop    si
// 0xe1b5: pop    bp
// 0xe1b6: pop    di
// 0xe1b7: lodsw
// 0xe1b8: mov    bx,ax
// 0xe1ba: jmp    word ptr [bx]

// ================================================
// 0xe1bc: WORD 'UNK_0xe1be' codep=0x224c parp=0xe1be
// ================================================

void UNK_0xe1be() // UNK_0xe1be
{
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(1); // 1
  SWAP(); // SWAP
  goto label2;

  label1:
  Push(Read16(regsp)); // DUP
  Push(0x0018);
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(1); // 1
  SWAP(); // SWAP
  Push(0x0017);
  _dash_(); // -
  Push(-Pop()); // NEGATE
  goto label2;

  label3:
  Push(Read16(regsp)); // DUP
  Push(0x0024);
  _st_(); // <
  if (Pop() == 0) goto label4;
  Push(Read16(cc__dash_1)); // -1
  SWAP(); // SWAP
  Push(0x0018);
  _dash_(); // -
  goto label2;

  label4:
  Push(Read16(cc__dash_1)); // -1
  SWAP(); // SWAP
  Push(0x002f);
  _dash_(); // -
  Push(-Pop()); // NEGATE

  label2:
  Push(pp_UNK_0xdb42); // UNK_0xdb42
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  Push(Read16(cc__dash_1)); // -1
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe228: WORD 'UNK_0xe22a' codep=0x224c parp=0xe22a
// ================================================

void UNK_0xe22a() // UNK_0xe22a
{
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(1); // 1
  SWAP(); // SWAP
  Push(0x000b);
  _dash_(); // -
  Push(-Pop()); // NEGATE
  goto label2;

  label1:
  Push(Read16(regsp)); // DUP
  Push(0x0018);
  _st_(); // <
  if (Pop() == 0) goto label3;
  Push(Read16(cc__dash_1)); // -1
  SWAP(); // SWAP
  Push(0x000c);
  _dash_(); // -
  goto label2;

  label3:
  Push(Read16(regsp)); // DUP
  Push(0x0024);
  _st_(); // <
  if (Pop() == 0) goto label4;
  Push(Read16(cc__dash_1)); // -1
  SWAP(); // SWAP
  Push(0x0023);
  _dash_(); // -
  Push(-Pop()); // NEGATE
  goto label2;

  label4:
  Push(1); // 1
  SWAP(); // SWAP
  Push(0x0024);
  _dash_(); // -

  label2:
  Push(pp_UNK_0xdb42); // UNK_0xdb42
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  Push(Read16(cc__dash_1)); // -1
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe29a: WORD 'UNK_0xe29c' codep=0x224c parp=0xe29c
// ================================================

void UNK_0xe29c() // UNK_0xe29c
{
  Push(Read16(regsp)); // DUP
  Push(0x000b);
  _dash_(); // -
  ABS(); // ABS
  OVER(); // OVER
  Push(0x000b);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(Pop()-1); // 1-

  label1:
  Push(pp_UNK_0xdb42); // UNK_0xdb42
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  Push(0x000b);
  _gt_(); // >
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe2ca: WORD 'UNK_0xe2cc' codep=0x224c parp=0xe2cc
// ================================================

void UNK_0xe2cc() // UNK_0xe2cc
{
  Push(Read16(regsp)); // DUP
  Push(0x000b);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0017);
  SWAP(); // SWAP
  _dash_(); // -
  ABS(); // ABS

  label1:
  Push(pp_UNK_0xdb42); // UNK_0xdb42
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
}


// ================================================
// 0xe2ea: WORD 'UNK_0xe2ec' codep=0x224c parp=0xe2ec
// ================================================

void UNK_0xe2ec() // UNK_0xe2ec
{
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  _ex__2(); // !_2
  Push(0x00b0);
  Push(0x0064);
  _star__slash_(); // */
  Push(pp_UNK_0xdbc4); // UNK_0xdbc4
  _ex__2(); // !_2
}


// ================================================
// 0xe302: WORD 'UNK_0xe304' codep=0x224c parp=0xe304
// ================================================

void UNK_0xe304() // UNK_0xe304
{
  Push(pp_UNK_0xdbc8); // UNK_0xdbc8
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  UNK_0xe29c(); // UNK_0xe29c
  Push(pp_UNK_0xdbac); // UNK_0xdbac
  _ex__2(); // !_2
  UNK_0xe2cc(); // UNK_0xe2cc
  Push(pp_UNK_0xdbb0); // UNK_0xdbb0
  _ex__2(); // !_2
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  UNK_0xe1be(); // UNK_0xe1be
  Push(pp_UNK_0xdba0); // UNK_0xdba0
  _ex__2(); // !_2
  UNK_0xe22a(); // UNK_0xe22a
  Push(pp_UNK_0xdba4); // UNK_0xdba4
  _ex__2(); // !_2
  Push(Read16(cc_UNK_0xdb3a)); // UNK_0xdb3a
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdba8); // UNK_0xdba8
  _ex__2(); // !_2
  Push(pp_UNK_0xdc72); // UNK_0xdc72
  Push(0x0018);
  Push(0); // 0
  FILL_2(); // FILL_2
  UNK_0xdf35(); // UNK_0xdf35
  UNK_0xdf5f(); // UNK_0xdf5f
  UNK_0xdf77(); // UNK_0xdf77
  UNK_0xdfa7(); // UNK_0xdfa7
  UNK_0xdfd5(); // UNK_0xdfd5
  UNK_0xdfef(); // UNK_0xdfef
  UNK_0xe021(); // UNK_0xe021
  UNK_0xe03d(); // UNK_0xe03d
  UNK_0xe051(); // UNK_0xe051
  UNK_0xe06d(); // UNK_0xe06d
}


// ================================================
// 0xe352: WORD 'UNK_0xe354' codep=0x224c parp=0xe354
// ================================================

void UNK_0xe354() // UNK_0xe354
{
  Push(0x0086);
  Push(pp__n_IN); // #IN
  _ex__2(); // !_2
  Push(0x6b67); // probable 'XFORMVE'
  Push(Read16(cc__6)); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp__3DSEG); // 3DSEG
  _ex__2(); // !_2
  Push(0); // 0
  Push(pp_VOUT); // VOUT
  _ex__2(); // !_2
  Push(0x6aa9); // probable 'VERTEX'
  Push(Read16(cc__6)); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp__3DSEG); // 3DSEG
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop()<<4); // 16*
  Push(pp_VIN_i_); // VIN'
  _ex__2(); // !_2
  Push(0x003c);
  Push(pp_YSCREEN); // YSCREEN
  _ex__2(); // !_2
  Push(0x0024);
  Push(pp_XSCREEN); // XSCREEN
  _ex__2(); // !_2
  UNK_0xe0fa(); // UNK_0xe0fa
  Push(0x003e);
  Push(pp__n_IN); // #IN
  _ex__2(); // !_2
  UNK_0xe16c(); // UNK_0xe16c
}


// ================================================
// 0xe3a4: WORD 'UNK_0xe3a6' codep=0x224c parp=0xe3a6
// ================================================

void UNK_0xe3a6() // UNK_0xe3a6
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(0); // 0
  SWAP(); // SWAP
  ReadArray(Read16(0x6abb + 6), 0x0120); // FACET
  LC_at_(); // LC@
  Push(Read16(cc__4)); // 4
  SWAP(); // SWAP
  ReadArray(Read16(0x6b67 + 6), 0x0324); // XFORMVE
  L_at_(); // L@
  Push(a); // R>
  Push(0x003e);
  Push(Pop() + Pop()); // +
  Push(Read16(cc__4)); // 4
  SWAP(); // SWAP
  ReadArray(Read16(0x6b67 + 6), 0x0324); // XFORMVE
  L_at_(); // L@
  _gt_(); // >
}


// ================================================
// 0xe3ce: WORD 'UNK_0xe3d0' codep=0xe3d0 parp=0xe3d0
// ================================================
// 0xe3d0: mov    cx,0004
// 0xe3d3: mov    bx,DBE8
// 0xe3d6: add    bx,0E
// 0xe3d9: pop    ax
// 0xe3da: pop    dx
// 0xe3db: mov    [bx],dx
// 0xe3dd: sub    bx,02
// 0xe3e0: mov    [bx],ax
// 0xe3e2: sub    bx,02
// 0xe3e5: loop   E3D9
// 0xe3e7: lodsw
// 0xe3e8: mov    bx,ax
// 0xe3ea: jmp    word ptr [bx]

// ================================================
// 0xe3ec: WORD 'UNK_0xe3ee' codep=0xe3ee parp=0xe3ee
// ================================================
// 0xe3ee: add    sp,10
// 0xe3f1: lodsw
// 0xe3f2: mov    bx,ax
// 0xe3f4: jmp    word ptr [bx]

// ================================================
// 0xe3f6: WORD 'UNK_0xe3f8' codep=0x224c parp=0xe3f8
// ================================================

void UNK_0xe3f8() // UNK_0xe3f8
{
  unsigned short int a;
  unsigned short int b;
  Push(Read16(cc_POLYSEG)); // POLYSEG
  a = Pop(); // >R
  b = Pop(); // >R
  Push(a); // I'
  Push(b); // I
  LC_at_(); // LC@
  _ex_COLOR(); // !COLOR
  Push(a); // I'
  Push(b); // I
  Push(Pop()+1); // 1+
  LC_at_(); // LC@
  Push(a); // I'
  Push(b); // I
  Push(Pop()+2); // 2+
  LC_at_(); // LC@
  UNK_0xdcdc(); // UNK_0xdcdc
  Push(a); // I'
  Push(b); // I
  Push(Read16(cc__3)); // 3
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  Push(a); // I'
  Push(b); // I
  Push(Pop()+2); // 2+
  LC_at_(); // LC@
  UNK_0xdcdc(); // UNK_0xdcdc
  Push(a); // I'
  Push(b); // I
  Push(Read16(cc__3)); // 3
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  Push(a); // I'
  Push(b); // I
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  UNK_0xdcdc(); // UNK_0xdcdc
  Push(a); // I'
  Push(b); // I
  Push(Pop()+1); // 1+
  LC_at_(); // LC@
  Push(b); // R>
  Push(a); // R>
  SWAP(); // SWAP
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  UNK_0xdcdc(); // UNK_0xdcdc
  UNK_0xe3d0(); // UNK_0xe3d0
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(pp_VIN); // VIN
  _ex__2(); // !_2
  Push(pp_UNK_0xdc14); // UNK_0xdc14
  Push(pp_VOUT); // VOUT
  _ex__2(); // !_2
  Push(pp_UNK_0xdc0a); // UNK_0xdc0a
  Push(pp_OIN); // OIN
  _ex__2(); // !_2
  Push(pp_UNK_0xdc36); // UNK_0xdc36
  Push(pp_OOUT); // OOUT
  _ex__2(); // !_2
  Push(0); // 0
  Push(pp__ask_OPEN); // ?OPEN
  _ex__2(); // !_2
  Push(Read16(cc__4)); // 4
  Push(pp__n_IN); // #IN
  _ex__2(); // !_2
  CLIPPER(); // CLIPPER
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(2); // 2
  _gt_(); // >
  if (Pop() == 0) return;
  SCANPOL(); // SCANPOL
  LFILLPO(); // LFILLPO
}


// ================================================
// 0xe492: WORD 'UNK_0xe494' codep=0x224c parp=0xe494
// ================================================

void UNK_0xe494() // UNK_0xe494
{
  Push(0); // 0
  OVER(); // OVER
  ReadArray(Read16(0x6b67 + 6), 0x0324); // XFORMVE
  L_at_(); // L@
  Push(2); // 2
  ROT(); // ROT
  ReadArray(Read16(0x6b67 + 6), 0x0324); // XFORMVE
  L_at_(); // L@
}


// ================================================
// 0xe4a6: WORD 'UNK_0xe4a8' codep=0x224c parp=0xe4a8
// ================================================

void UNK_0xe4a8() // UNK_0xe4a8
{
  unsigned short int a;
  unsigned short int b;
  Push(0); // 0
  SWAP(); // SWAP
  ReadArray(Read16(0x6abb + 6), 0x0120); // FACET
  a = Pop(); // >R
  b = Pop(); // >R
  Push(b); // I
  Push(a); // I'
  LC_at_(); // LC@
  UNK_0xe494(); // UNK_0xe494
  Push(b); // I
  Push(a); // I'
  Push(Pop()+1); // 1+
  LC_at_(); // LC@
  UNK_0xe494(); // UNK_0xe494
  Push(b); // I
  Push(a); // I'
  Push(Pop()+2); // 2+
  LC_at_(); // LC@
  UNK_0xe494(); // UNK_0xe494
  Push(b); // R>
  Push(a); // R>
  Push(Read16(cc__3)); // 3
  Push(Pop() + Pop()); // +
  LC_at_(); // LC@
  UNK_0xe494(); // UNK_0xe494
  SETQUAD(); // SETQUAD
}


// ================================================
// 0xe4de: WORD 'UNK_0xe4e0' codep=0x224c parp=0xe4e0
// ================================================

void UNK_0xe4e0() // UNK_0xe4e0
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  NBCLR(); // NBCLR
  goto label2;

  label1:
  SetColor("BLACK");

  label2:
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  Push(Read16(Pop())); // @
  Push(Read16(cc__6)); // 6
  Push(0x000b);
  _star__slash_(); // */
  Push(Read16(regsp)); // DUP
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  Push(Read16(Pop())); // @
  Push(0x0032);
  _slash_(); // /
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  _2DUP(); // 2DUP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0x0024);
  Push(0x003c);
  Push(i); // I
  _dot_CIRCLE_1(); // .CIRCLE_1
  i++;
  } while(i<imax); // (LOOP) 0xfff2


  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(0x0024);
  Push(0x003d);
  Push(j); // I
  _dot_CIRCLE_1(); // .CIRCLE_1
  j++;
  } while(j<jmax); // (LOOP) 0xfff2

}


// ================================================
// 0xe53c: WORD 'UNK_0xe53e' codep=0x1d29 parp=0xe53e
// ================================================
// 0xe53e: db 0x3a 0x20 ': '

// ================================================
// 0xe540: WORD 'UNK_0xe542' codep=0x224c parp=0xe542
// ================================================

void UNK_0xe542() // UNK_0xe542
{
  signed short int i, imax;
  signed short int j, jmax;
  UNK_0xe304(); // UNK_0xe304
  UNK_0xe354(); // UNK_0xe354
  Push(pp_UNK_0xe53e); // UNK_0xe53e
  _099(); // 099
  Push(0x0048);
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe3a6(); // UNK_0xe3a6
  if (Pop() == 0) goto label1;
  Push(i); // I
  UNK_0xe4a8(); // UNK_0xe4a8
  Push(0); // 0
  Push(i); // I
  ReadArray(Read16(0x6acc + 6), 0x00d8); // FACE
  L_at_(); // L@
  Push(2); // 2
  Push(i); // I
  ReadArray(Read16(0x6acc + 6), 0x00d8); // FACE
  LC_at_(); // LC@
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  UNK_0xe3f8(); // UNK_0xe3f8
  Push(Read16(cc__5)); // 5
  Push(Pop() + Pop()); // +
  j++;
  } while(j<jmax); // (LOOP) 0xfff6

  Pop(); // DROP
  UNK_0xe3ee(); // UNK_0xe3ee

  label1:
  Exec("?TERMINAL"); // call of word 0x25bc '(?TERMINAL)'
  if (Pop() == 0) goto label2;
  Push(pp_UNK_0xe53e); // UNK_0xe53e
  ON_2(); // ON_2
  imax = i; // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffc2

  UNK_0xe4e0(); // UNK_0xe4e0
}


// ================================================
// 0xe596: WORD 'UNK_0xe598' codep=0x224c parp=0xe598
// ================================================

void UNK_0xe598() // UNK_0xe598
{
  Push(0x0028);
  _slash_(); // /
  Push(0x0017);
  SWAP(); // SWAP
  _dash_(); // -
  SWAP(); // SWAP
  Push(0x0030);
  _slash_(); // /
  SWAP(); // SWAP
}


// ================================================
// 0xe5b2: WORD 'UNK_0xe5b4' codep=0x224c parp=0xe5b4
// ================================================

void UNK_0xe5b4() // UNK_0xe5b4
{
  signed short int i, imax;
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(0x0047);
  RRND(); // RRND
  Push(0); // 0
  Push(0x0077);
  RRND(); // RRND
  LPLOT(); // LPLOT
  i++;
  } while(i<imax); // (LOOP) 0xffec

}


// ================================================
// 0xe5d0: WORD 'UNK_0xe5d2' codep=0x224c parp=0xe5d2
// ================================================

void UNK_0xe5d2() // UNK_0xe5d2
{
  NBCLR(); // NBCLR
  _ex_COLOR(); // !COLOR
  Push(pp__ask_NEB); // ?NEB
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  DARK(); // DARK
  Push(pp_GLOBALS); // GLOBALS
  Push(Read16(Pop())); // @
  Push(pp_SEED_3); // SEED_3
  _ex__2(); // !_2
  Push(1); // 1
  Push(Read16(cc__4)); // 4
  RRND(); // RRND
  UNK_0xe5b4(); // UNK_0xe5b4
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(2); // 2
  Push(Read16(cc__5)); // 5
  RRND(); // RRND
  UNK_0xe5b4(); // UNK_0xe5b4
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  Push(2); // 2
  Push(Read16(cc__5)); // 5
  RRND(); // RRND
  UNK_0xe5b4(); // UNK_0xe5b4
  SetColor("GREY1");
  _ex_COLOR(); // !COLOR
  Push(Read16(cc__4)); // 4
  Push(Read16(cc__9)); // 9
  RRND(); // RRND
  UNK_0xe5b4(); // UNK_0xe5b4
  return;

  label1:
  BFILL(); // BFILL
}


// ================================================
// 0xe61e: WORD 'UNK_0xe620' codep=0x224c parp=0xe620
// ================================================

void UNK_0xe620() // UNK_0xe620
{
  _gt_MAINVI(); // >MAINVI
  VCLIPSE(); // VCLIPSE
  UNK_0xe5d2(); // UNK_0xe5d2
  UNK_0xe542(); // UNK_0xe542
  Push(pp_UNK_0xe53e); // UNK_0xe53e
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  V_gt_DISPL(); // V>DISPL

  label1:
  _gt_DISPLA(); // >DISPLA
  DCLIPSE(); // DCLIPSE
}


// ================================================
// 0xe63a: WORD 'SHOWSITE' codep=0x224c parp=0xe647
// ================================================
// entry

void SHOWSITE() // SHOWSITE
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  UNK_0xe598(); // UNK_0xe598
  Push(pp_UNK_0xdbc8); // UNK_0xdbc8
  _ex__2(); // !_2
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  _ex__2(); // !_2
  UNK_0xe620(); // UNK_0xe620
}


// ================================================
// 0xe65d: WORD '>VIEWSITE' codep=0x224c parp=0xe66b
// ================================================

void _gt_VIEWSITE() // >VIEWSITE
{
  Push(0x012c);
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(cc__5)); // 5
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  Push(pp_UNK_0xdbe4); // UNK_0xdbe4
  _ex__2(); // !_2

  label2:
  SHOWSITE(); // SHOWSITE
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x012c);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xdbe4); // UNK_0xdbe4
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x012c);
  MIN(); // MIN
  UNK_0xe2ec(); // UNK_0xe2ec
  goto label2;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe6ab: WORD 'UNK_0xe6ad' codep=0x224c parp=0xe6ad
// ================================================

void UNK_0xe6ad() // UNK_0xe6ad
{
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(pp_XUR); // XUR
  Push(Read16(Pop())); // @
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(pp_XUR); // XUR
  Push(Read16(Pop())); // @
  Push(pp_YUR); // YUR
  Push(Read16(Pop())); // @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(pp_XLL); // XLL
  Push(Read16(Pop())); // @
  Push(pp_YLL); // YLL
  Push(Read16(Pop())); // @
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  Push(Pop()>>1); // 2/
}


// ================================================
// 0xe6e9: WORD 'UNK_0xe6eb' codep=0x224c parp=0xe6eb
// ================================================

void UNK_0xe6eb() // UNK_0xe6eb
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(pp_SIGNEXT); // SIGNEXT
  ON_2(); // ON_2
  Push(pp_SPHEREW); // SPHEREW
  _099(); // 099
  Push(0x6a82); // probable 'CONTOUR'
  SETLARR(); // SETLARR
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(Read16(cc__8)); // 8
  Push(Pop() * Pop()); // *
  Push(Pop()+1); // 1+
  Push(pp_XVIS); // XVIS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(i); // J
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(Pop()+1); // 1+
  Push(pp_YVIS); // YVIS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(Read16(cc__8)); // 8
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(Read16(cc__6)); // 6
  Push(Pop() + Pop()); // +
  SETREGI(); // SETREGI
  UNK_0xe6ad(); // UNK_0xe6ad
  Push(j); // I
  Push(i); // J
  ReadArray(Read16(0x6b3f + 6), 0x0051); // 9X9COAR
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffbe

  i++;
  } while(i<imax); // (LOOP) 0xffb4

}


// ================================================
// 0xe74f: WORD 'UNK_0xe751' codep=0x224c parp=0xe751
// ================================================

void UNK_0xe751() // UNK_0xe751
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(Read16(cc__3)); // 3
  _dash_(); // -
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_X1); // X1
  _ex__2(); // !_2
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(Read16(cc__3)); // 3
  Push(Pop() + Pop()); // +
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_Y1); // Y1
  _ex__2(); // !_2
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(pp_X1); // X1
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_Y1); // Y1
  Push(Read16(Pop())); // @
  Push(i); // J
  _dash_(); // -
  ReadArray(Read16(0x6a82 + 6), 0x1811); // CONTOUR
  LC_at_(); // LC@
  Push(j); // I
  Push(i); // J
  ReadArray(Read16(0x6b53 + 6), 0x0051); // 9X9FINE
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffe2

  i++;
  } while(i<imax); // (LOOP) 0xffd8

}


// ================================================
// 0xe7a7: WORD 'UNK_0xe7a9' codep=0x224c parp=0xe7a9
// ================================================

void UNK_0xe7a9() // UNK_0xe7a9
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(Read16(cc__4)); // 4
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  OVER(); // OVER
  ReadArray(Read16(0x6b04 + 6), 0x0164); // GPOLY
  LC_at_(); // LC@
  Push(Read16(cc__3)); // 3
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  OVER(); // OVER
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_at_(); // LC@
  Push(i); // J
  Push(Read16(cc__3)); // 3
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdc14); // UNK_0xdc14
  Push(Pop() + Pop()); // +
  C_ex__2(); // C!_2
  j++;
  } while(j<jmax); // (LOOP) 0xffe6

  Pop(); // DROP
  i++;
  } while(i<imax); // (LOOP) 0xffd2

  Pop(); // DROP
}


// ================================================
// 0xe7e3: WORD 'UNK_0xe7e5' codep=0x224c parp=0xe7e5
// ================================================

void UNK_0xe7e5() // UNK_0xe7e5
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(Read16(cc__4)); // 4
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  OVER(); // OVER
  ReadArray(Read16(0x6b04 + 6), 0x0164); // GPOLY
  LC_at_(); // LC@
  Push(2); // 2
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(Pop()*2); // 2*
  OVER(); // OVER
  ReadArray(Read16(0x6b67 + 6), 0x0324); // XFORMVE
  L_at_(); // L@
  Push(i); // J
  Push(Read16(cc__4)); // 4
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(Pop() + Pop()); // +
  Push(j); // I
  Push(Pop()-1); // 1-
  Push(-Pop()); // NEGATE
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  _ex__2(); // !_2
  j++;
  } while(j<jmax); // (LOOP) 0xffde

  Pop(); // DROP
  i++;
  } while(i<imax); // (LOOP) 0xffca

  Pop(); // DROP
}


// ================================================
// 0xe827: WORD 'UNK_0xe829' codep=0x224c parp=0xe829
// ================================================

void UNK_0xe829() // UNK_0xe829
{
  Push(0x0075);
  Push(pp__n_IN); // #IN
  _ex__2(); // !_2
  Push(0x6b67); // probable 'XFORMVE'
  Push(Read16(cc__6)); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp__3DSEG); // 3DSEG
  _ex__2(); // !_2
  Push(0); // 0
  Push(pp_VOUT); // VOUT
  _ex__2(); // !_2
  Push(0x6b2b); // probable 'G1VERT'
  Push(Read16(cc__6)); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp__3DSEG); // 3DSEG
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop()<<4); // 16*
  Push(pp_VIN_i_); // VIN'
  _ex__2(); // !_2
  Push(0x6af2); // probable 'GVERTEX'
  Push(Read16(cc__6)); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp__3DSEG); // 3DSEG
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop()<<4); // 16*
  Push(pp_VIN); // VIN
  _ex__2(); // !_2
  Push(0x003c);
  Push(pp_YSCREEN); // YSCREEN
  _ex__2(); // !_2
  Push(0x0024);
  Push(pp_XSCREEN); // XSCREEN
  _ex__2(); // !_2
  UNK_0xe0af(); // UNK_0xe0af
  UNK_0xe0fa(); // UNK_0xe0fa
  UNK_0xe16c(); // UNK_0xe16c
}


// ================================================
// 0xe889: WORD 'UNK_0xe88b' codep=0x224c parp=0xe88b
// ================================================

void UNK_0xe88b() // UNK_0xe88b
{
  unsigned short int a;
  signed short int i, imax;
  a = Pop(); // >R
  Push(0); // 0
  Push(Read16(cc__4)); // 4
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(a); // J
  ReadArray(Read16(0x6b04 + 6), 0x0164); // GPOLY
  LC_at_(); // LC@
  Push(Read16(cc__4)); // 4
  SWAP(); // SWAP
  ReadArray(Read16(0x6b67 + 6), 0x0324); // XFORMVE
  L_at_(); // L@
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  _dash_(); // -
  _0_gt_(); // 0>
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffe2

  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe8bb: WORD 'UNK_0xe8bd' codep=0x224c parp=0xe8bd
// ================================================

void UNK_0xe8bd() // UNK_0xe8bd
{
  Push(Read16(cc__4)); // 4
  Push(pp__n_IN); // #IN
  _ex__2(); // !_2
  Push(pp_UNK_0xdc14); // UNK_0xdc14
  Push(pp_VIN); // VIN
  _ex__2(); // !_2
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(pp_VIN_i_); // VIN'
  _ex__2(); // !_2
  Push(pp_UNK_0xdc40); // UNK_0xdc40
  Push(pp_VOUT); // VOUT
  _ex__2(); // !_2
  _at_DS(); // @DS
  Push(pp__3DSEG); // 3DSEG
  _ex__2(); // !_2
  UNK_0xe0af(); // UNK_0xe0af
  UNK_0xe0fa(); // UNK_0xe0fa
}


// ================================================
// 0xe8e1: WORD 'UNK_0xe8e3' codep=0x224c parp=0xe8e3
// ================================================

void UNK_0xe8e3() // UNK_0xe8e3
{
  Push(0x3e80);
  Push(0x3e80);
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(0xc180); // probable 'HEAL-O'
  SETCLIP(); // SETCLIP
}


// ================================================
// 0xe8f5: WORD 'UNK_0xe8f7' codep=0x224c parp=0xe8f7
// ================================================

void UNK_0xe8f7() // UNK_0xe8f7
{
  signed short int i, imax;
  unsigned short int a;
  Push(Read16(cc__4)); // 4
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdc40); // UNK_0xdc40
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(a); // I
  _ex__2(); // !_2
  Push(a); // R>
  Push(Pop()+2); // 2+
  _ex__2(); // !_2
  i++;
  } while(i<imax); // (LOOP) 0xffd2

}


// ================================================
// 0xe92f: WORD 'UNK_0xe931' codep=0x224c parp=0xe931
// ================================================

void UNK_0xe931() // UNK_0xe931
{
  signed short int i, imax;
  unsigned short int a;
  Push(Read16(cc__4)); // 4
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdc40); // UNK_0xdc40
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(2); // 2
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(a); // I
  _ex__2(); // !_2
  Push(a); // R>
  Push(Pop()+2); // 2+
  _ex__2(); // !_2
  i++;
  } while(i<imax); // (LOOP) 0xffce

}


// ================================================
// 0xe96d: WORD 'UNK_0xe96f' codep=0x224c parp=0xe96f
// ================================================

void UNK_0xe96f() // UNK_0xe96f
{
  signed short int i, imax;
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(2); // 2
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc40); // UNK_0xdc40
  Push(i); // I
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _ex__2(); // !_2
  i++;
  } while(i<imax); // (LOOP) 0xffe0

}


// ================================================
// 0xe99b: WORD 'UNK_0xe99d' codep=0x224c parp=0xe99d
// ================================================

void UNK_0xe99d() // UNK_0xe99d
{
  signed short int i, imax;
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(2); // 2
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc40); // UNK_0xdc40
  Push(i); // I
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Pop()+2); // 2+
  _ex__2(); // !_2
  i++;
  } while(i<imax); // (LOOP) 0xffde

}


// ================================================
// 0xe9cb: WORD 'UNK_0xe9cd' codep=0x224c parp=0xe9cd
// ================================================

void UNK_0xe9cd() // UNK_0xe9cd
{
  signed short int i, imax;
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdc40); // UNK_0xdc40
  Push(i); // I
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  _ex__2(); // !_2
  i++;
  } while(i<imax); // (LOOP) 0xffe0

}


// ================================================
// 0xe9f9: WORD 'UNK_0xe9fb' codep=0x224c parp=0xe9fb
// ================================================

void UNK_0xe9fb() // UNK_0xe9fb
{
  signed short int i, imax;
  unsigned short int a;
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdc40); // UNK_0xdc40
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop()*2); // 2*
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(Pop() + Pop()); // +
  a = Pop(); // >R
  Push(a); // I
  _ex__2(); // !_2
  Push(a); // R>
  Push(Pop()+2); // 2+
  _ex__2(); // !_2
  i++;
  } while(i<imax); // (LOOP) 0xffd4

}


// ================================================
// 0xea33: WORD 'UNK_0xea35' codep=0x224c parp=0xea35
// ================================================

void UNK_0xea35() // UNK_0xea35
{
  UNK_0xe7a9(); // UNK_0xe7a9
  UNK_0xe8bd(); // UNK_0xe8bd
  UNK_0xe8e3(); // UNK_0xe8e3
  UNK_0xe8f7(); // UNK_0xe8f7
  Push(Read16(cc__4)); // 4
  Push(pp__n_IN); // #IN
  _ex__2(); // !_2
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(pp_VIN); // VIN
  _ex__2(); // !_2
  Push(pp_UNK_0xdc14); // UNK_0xdc14
  Push(pp_VOUT); // VOUT
  _ex__2(); // !_2
  Push(pp_UNK_0xdc0a); // UNK_0xdc0a
  Push(pp_OIN); // OIN
  _ex__2(); // !_2
  Push(pp_UNK_0xdc36); // UNK_0xdc36
  Push(pp_OOUT); // OOUT
  _ex__2(); // !_2
  CLIPPER(); // CLIPPER
  UNK_0xe96f(); // UNK_0xe96f
  UNK_0xe931(); // UNK_0xe931
  Push(Read16(cc__4)); // 4
  Push(pp__n_IN); // #IN
  _ex__2(); // !_2
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(pp_VIN); // VIN
  _ex__2(); // !_2
  Push(pp_UNK_0xdc14); // UNK_0xdc14
  Push(pp_VOUT); // VOUT
  _ex__2(); // !_2
  CLIPPER(); // CLIPPER
  UNK_0xe99d(); // UNK_0xe99d
  UNK_0xe9cd(); // UNK_0xe9cd
  VCLIPSE(); // VCLIPSE
  Push(pp_UNK_0xdc40); // UNK_0xdc40
  Push(pp_VOUT); // VOUT
  _ex__2(); // !_2
  UNK_0xe16c(); // UNK_0xe16c
  UNK_0xe9fb(); // UNK_0xe9fb
}


// ================================================
// 0xea87: WORD 'UNK_0xea89' codep=0x224c parp=0xea89
// ================================================

void UNK_0xea89() // UNK_0xea89
{
  Push(0); // 0
  SWAP(); // SWAP
  ReadArray(Read16(0x6b18 + 6), 0x00b2); // GRIDCOL
  OVER(); // OVER
  OVER(); // OVER
  LC_at_(); // LC@
  _ex_COLOR(); // !COLOR
  Push(Pop()+1); // 1+
  LC_at_(); // LC@
  Push(pp_DCOLOR); // DCOLOR
  _ex__2(); // !_2
}


// ================================================
// 0xeaa1: WORD 'UNK_0xeaa3' codep=0x224c parp=0xeaa3
// ================================================

void UNK_0xeaa3() // UNK_0xeaa3
{
  unsigned short int a;
  signed short int i, imax;
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Push(pp_VIN); // VIN
  Push(Read16(Pop())); // @
  a = Pop(); // >R
  Push(a); // I
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  Push(a); // I
  Push(Read16(Pop())); // @
  Push(a); // I
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(Read16(cc__4)); // 4
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Read16(Pop())); // @
  LLINE(); // LLINE
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Read16(cc__4)); // 4
  Push(Pop() * Pop()); // *
  Push(a); // J
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Read16(Pop())); // @
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(Read16(cc__4)); // 4
  Push(Pop() * Pop()); // *
  Push(a); // J
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Read16(Pop())); // @
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xffd2

  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xeb11: WORD 'UNK_0xeb13' codep=0x224c parp=0xeb13
// ================================================

void UNK_0xeb13() // UNK_0xeb13
{
  signed short int i, imax;
  UNK_0xe07f(); // UNK_0xe07f
  UNK_0xe829(); // UNK_0xe829
  Push(0x0059);
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe88b(); // UNK_0xe88b
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Read16(cc__4)); // 4
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label2;
  Push(i); // I
  UNK_0xe7e5(); // UNK_0xe7e5
  Push(Read16(cc__4)); // 4
  Push(pp__n_IN); // #IN
  _ex__2(); // !_2
  goto label3;

  label2:
  Push(i); // I
  UNK_0xea35(); // UNK_0xea35

  label3:
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(2); // 2
  _gt_(); // >
  if (Pop() == 0) goto label4;
  Push(pp_UNK_0xdbe8); // UNK_0xdbe8
  Push(pp_VIN); // VIN
  _ex__2(); // !_2
  Push(pp_UNK_0xdc14); // UNK_0xdc14
  Push(pp_VOUT); // VOUT
  _ex__2(); // !_2
  Push(pp_UNK_0xdc0a); // UNK_0xdc0a
  Push(pp_OIN); // OIN
  _ex__2(); // !_2
  Push(pp_UNK_0xdc36); // UNK_0xdc36
  Push(pp_OOUT); // OOUT
  _ex__2(); // !_2
  Push(pp__ask_OPEN); // ?OPEN
  _099(); // 099
  CLIPPER(); // CLIPPER

  label4:
  Push(pp__n_IN); // #IN
  Push(Read16(Pop())); // @
  Push(2); // 2
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(i); // I
  UNK_0xea89(); // UNK_0xea89
  SCANPOL(); // SCANPOL
  LFILLPO(); // LFILLPO
  Push(i); // I
  Push(0x0018);
  _gt_(); // >
  Push(pp_UNK_0xdb70); // UNK_0xdb70
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xeaa3(); // UNK_0xeaa3

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xff88

}


// ================================================
// 0xeb9b: WORD 'SEEGRID' codep=0x224c parp=0xeba7
// ================================================
// entry

void SEEGRID() // SEEGRID
{
  _gt_MAINVI(); // >MAINVI
  Push(pp_UNK_0xdb50); // UNK_0xdb50
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  _1PIX(); // 1PIX
  UNK_0xeb13(); // UNK_0xeb13
  V_gt_DISPL(); // V>DISPL
  _gt_DISPLA(); // >DISPLA
  _2PIX(); // 2PIX
}


// ================================================
// 0xebbd: WORD 'UNK_0xebbf' codep=0x224c parp=0xebbf
// ================================================

void UNK_0xebbf() // UNK_0xebbf
{
  signed short int i, imax;
  Push(0x0075);
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(1); // 1
  Push(i); // I
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_ex_(); // LC!
  i++;
  } while(i<imax); // (LOOP) 0xfff4

}


// ================================================
// 0xebd7: WORD 'UNK_0xebd9' codep=0x224c parp=0xebd9
// ================================================

void UNK_0xebd9() // UNK_0xebd9
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  _ex_XYSEED(); // !XYSEED
  Push(Read16(cc__7)); // 7
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__7)); // 7
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(2); // 2
  RRND(); // RRND
  Push(1); // 1
  Push(i); // J
  Push(Read16(cc__9)); // 9
  Push(Pop() * Pop()); // *
  Push(0x002e);
  Push(Pop() + Pop()); // +
  Push(j); // I
  Push(Pop() + Pop()); // +
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffe2

  i++;
  } while(i<imax); // (LOOP) 0xffd8

}


// ================================================
// 0xec15: WORD 'UNK_0xec17' codep=0x224c parp=0xec17
// ================================================

void UNK_0xec17() // UNK_0xec17
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(0); // 0
  COLORMA_2(); // COLORMA_2
  Push(0x0059);
  Push(0x0019);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(i); // I
  ReadArray(Read16(0x6b18 + 6), 0x00b2); // GRIDCOL
  LC_at_(); // LC@
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label1;
  Push(Read16(cc__4)); // 4
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(0); // 0
  Push(1); // 1
  Push(j); // I
  Push(i); // J
  ReadArray(Read16(0x6b04 + 6), 0x0164); // GPOLY
  LC_at_(); // LC@
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffee


  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffd2

}


// ================================================
// 0xec57: WORD 'UNK_0xec59' codep=0x224c parp=0xec59
// ================================================

void UNK_0xec59() // UNK_0xec59
{
  signed short int i, imax;
  signed short int j, jmax;
  signed short int k, kmax;
  signed short int l, lmax;
  Push(Read16(cc__5)); // 5
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__5)); // 5
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(1); // 1
  Push(i); // J
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  L_plus__dash__at_(); // L+-@
  COLORMA_2(); // COLORMA_2
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0100);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0); // 0
  Push(i); // J
  Push(Read16(cc__5)); // 5
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  ReadArray(Read16(0x6b18 + 6), 0x00b2); // GRIDCOL
  L_ex_(); // L!
  j++;
  } while(j<jmax); // (LOOP) 0xffce

  i++;
  } while(i<imax); // (LOOP) 0xffc4

  Push(Read16(cc__8)); // 8
  Push(0); // 0

  k = Pop();
  kmax = Pop();
  do // (DO)
  {
  Push(Read16(cc__8)); // 8
  Push(0); // 0

  l = Pop();
  lmax = Pop();
  do // (DO)
  {
  Push(1); // 1
  Push(k); // J
  Push(Read16(cc__9)); // 9
  Push(Pop() * Pop()); // *
  Push(l); // I
  Push(Pop() + Pop()); // +
  Push(0x0024);
  Push(Pop() + Pop()); // +
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  L_plus__dash__at_(); // L+-@
  COLORMA_2(); // COLORMA_2
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0100);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0); // 0
  Push(k); // J
  Push(Read16(cc__8)); // 8
  Push(Pop() * Pop()); // *
  Push(l); // I
  Push(Pop() + Pop()); // +
  Push(0x0019);
  Push(Pop() + Pop()); // +
  ReadArray(Read16(0x6b18 + 6), 0x00b2); // GRIDCOL
  L_ex_(); // L!
  l++;
  } while(l<lmax); // (LOOP) 0xffc2

  k++;
  } while(k<kmax); // (LOOP) 0xffb8

  UNK_0xebbf(); // UNK_0xebbf
}


// ================================================
// 0xecf1: WORD 'UNK_0xecf3' codep=0x224c parp=0xecf3
// ================================================

void UNK_0xecf3() // UNK_0xecf3
{
  signed short int i, imax;
  Push(0x0075);
  Push(0x0024);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(regsp)); // DUP
  Push(1); // 1
  Push(i); // I
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_ex_(); // LC!
  i++;
  } while(i<imax); // (LOOP) 0xfff4

  Pop(); // DROP
}


// ================================================
// 0xed0f: WORD 'UNK_0xed11' codep=0x224c parp=0xed11
// ================================================

void UNK_0xed11() // UNK_0xed11
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(0); // 0
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  ReadArray(Read16(0x6b3f + 6), 0x0051); // 9X9COAR
  L_plus__dash__at_(); // L+-@
  Push(Pop() + Pop()); // +
  j++;
  } while(j<jmax); // (LOOP) 0xfff4

  i++;
  } while(i<imax); // (LOOP) 0xffea

  Push(0x0051);
  _slash_(); // /
  UNK_0xecf3(); // UNK_0xecf3
}


// ================================================
// 0xed3b: WORD 'UNK_0xed3d' codep=0x224c parp=0xed3d
// ================================================

void UNK_0xed3d() // UNK_0xed3d
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  UNK_0xe598(); // UNK_0xe598
  Push(0x0017);
  SWAP(); // SWAP
  _dash_(); // -
  Push(Pop()+2); // 2+
  Push(pp_Y1); // Y1
  _ex__2(); // !_2
  Push(2); // 2
  _dash_(); // -
  Push(pp_X1); // X1
  _ex__2(); // !_2
  Push(pp_SPHEREW); // SPHEREW
  ON_2(); // ON_2
  Push(pp_SIGNEXT); // SIGNEXT
  ON_2(); // ON_2
  Push(0x6a5a); // probable 'MERCATO'
  SETLARR(); // SETLARR
  Push(Read16(cc__6)); // 6
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__6)); // 6
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(pp_X1); // X1
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_Y1); // Y1
  Push(Read16(Pop())); // @
  Push(i); // J
  _dash_(); // -
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  Push(1); // 1
  Push(i); // J
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffda

  i++;
  } while(i<imax); // (LOOP) 0xffd0

}


// ================================================
// 0xeda5: WORD 'UNK_0xeda7' codep=0x224c parp=0xeda7
// ================================================

void UNK_0xeda7() // UNK_0xeda7
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  ReadArray(Read16(0x6b3f + 6), 0x0051); // 9X9COAR
  LC_at_(); // LC@
  Push(1); // 1
  Push(i); // J
  Push(Read16(cc__9)); // 9
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(0x0024);
  Push(Pop() + Pop()); // +
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffe0

  i++;
  } while(i<imax); // (LOOP) 0xffd6

}


// ================================================
// 0xeddb: WORD 'UNK_0xeddd' codep=0x224c parp=0xeddd
// ================================================

void UNK_0xeddd() // UNK_0xeddd
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__9)); // 9
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  Push(i); // J
  ReadArray(Read16(0x6b53 + 6), 0x0051); // 9X9FINE
  LC_at_(); // LC@
  Push(1); // 1
  Push(i); // J
  Push(Read16(cc__9)); // 9
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(0x0024);
  Push(Pop() + Pop()); // +
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffe0

  i++;
  } while(i<imax); // (LOOP) 0xffd6

}


// ================================================
// 0xee11: WORD 'UNK_0xee13' codep=0x224c parp=0xee13
// ================================================

void UNK_0xee13() // UNK_0xee13
{
  signed short int i, imax;
  UNK_0xed3d(); // UNK_0xed3d
  UNK_0xed11(); // UNK_0xed11
  UNK_0xec59(); // UNK_0xec59
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  _099(); // 099
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  _ex__2(); // !_2
  Push(pp_UNK_0xdb70); // UNK_0xdb70
  _099(); // 099
  Push(pp_UNK_0xdb78); // UNK_0xdb78
  _099(); // 099
  Push(0x0032);
  Push(pp_UNK_0xdb7c); // UNK_0xdb7c
  _ex__2(); // !_2
  Push(pp_UNK_0xdb80); // UNK_0xdb80
  ON_2(); // ON_2
  Push(pp_UNK_0xdb84); // UNK_0xdb84
  _099(); // 099
  Push(pp_UNK_0xdb88); // UNK_0xdb88
  _099(); // 099
  Push(pp_UNK_0xdb8c); // UNK_0xdb8c
  _099(); // 099
  Push(0x001e);
  UNK_0xe2ec(); // UNK_0xe2ec
  SEEGRID(); // SEEGRID
  Push(0x0023);
  UNK_0xe2ec(); // UNK_0xe2ec
  SEEGRID(); // SEEGRID
  UNK_0xed3d(); // UNK_0xed3d
  UNK_0xeda7(); // UNK_0xeda7
  UNK_0xec59(); // UNK_0xec59
  Push(0x008c);
  Push(0x0028);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe2ec(); // UNK_0xe2ec
  SEEGRID(); // SEEGRID
  Push(0x001e);
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xfff4

}


// ================================================
// 0xee73: WORD 'UNK_0xee75' codep=0x224c parp=0xee75
// ================================================

void UNK_0xee75() // UNK_0xee75
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
}


// ================================================
// 0xeeaf: WORD 'UNK_0xeeb1' codep=0x224c parp=0xeeb1
// ================================================

void UNK_0xeeb1() // UNK_0xeeb1
{
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
// 0xeed7: WORD 'UNK_0xeed9' codep=0x224c parp=0xeed9
// ================================================

void UNK_0xeed9() // UNK_0xeed9
{
  signed short int i, imax;
  signed short int j, jmax;
  Push(0x0014);
  _dash_(); // -
  Push(Read16(cc__6)); // 6
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(Read16(cc__6)); // 6
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(1); // 1
  OVER(); // OVER
  Push(i); // J
  Push(Read16(cc__9)); // 9
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(Pop() + Pop()); // +
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_at_(); // LC@
  Push(1); // 1
  Push(i); // J
  Push(Read16(cc__6)); // 6
  Push(Pop() * Pop()); // *
  Push(j); // I
  Push(Pop() + Pop()); // +
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffda

  i++;
  } while(i<imax); // (LOOP) 0xffd0

  Pop(); // DROP
}


// ================================================
// 0xef1b: WORD 'UNK_0xef1d' codep=0x224c parp=0xef1d
// ================================================

void UNK_0xef1d() // UNK_0xef1d
{
  Push(pp_UNK_0xdb54); // UNK_0xdb54
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xdb60); // UNK_0xdb60
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  _dash_(); // -
  ABS(); // ABS
  Push(0); // 0
  SQRT(); // SQRT
  Push(pp_UNK_0xdb58); // UNK_0xdb58
  _ex__2(); // !_2
}


// ================================================
// 0xef3b: WORD 'UNK_0xef3d' codep=0x224c parp=0xef3d
// ================================================

void UNK_0xef3d() // UNK_0xef3d
{
  Push(pp_UNK_0xdb5c); // UNK_0xdb5c
  Push(Read16(Pop())); // @
  Push(0x002f);
  Push(0x0167);
  _star__slash_(); // */
  Push(0x0030);
  MOD(); // MOD
  UNK_0xe1be(); // UNK_0xe1be
  Push(pp_UNK_0xdb58); // UNK_0xdb58
  Push(Read16(Pop())); // @
  Push(0x007f);
  _star__slash_(); // */
  Push(pp_UNK_0xdb78); // UNK_0xdb78
  _ex__2(); // !_2
}


// ================================================
// 0xef63: WORD 'UNK_0xef65' codep=0x224c parp=0xef65
// ================================================

void UNK_0xef65() // UNK_0xef65
{
  Push(pp_UNK_0xdb68); // UNK_0xdb68
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdb60); // UNK_0xdb60
  _plus__ex__2(); // +!_2
  Push(pp_UNK_0xdb60); // UNK_0xdb60
  Push(Read16(Pop())); // @
  Push(0x0018);
  MIN(); // MIN
  Push(0xffe9);
  MAX(); // MAX
  Push(pp_UNK_0xdb60); // UNK_0xdb60
  _ex__2(); // !_2
}


// ================================================
// 0xef83: WORD 'UNK_0xef85' codep=0x224c parp=0xef85
// ================================================

void UNK_0xef85() // UNK_0xef85
{
  Push(pp_UNK_0xdb5c); // UNK_0xdb5c
  Push(Read16(Pop())); // @
  Push(0x002f);
  Push(0x0167);
  _star__slash_(); // */
  Push(0x0030);
  MOD(); // MOD
  UNK_0xe22a(); // UNK_0xe22a
  Push(pp_UNK_0xdb58); // UNK_0xdb58
  Push(Read16(Pop())); // @
  Push(0x007f);
  _star__slash_(); // */
  Push(pp_UNK_0xdb80); // UNK_0xdb80
  _ex__2(); // !_2
}


// ================================================
// 0xefab: WORD 'UNK_0xefad' codep=0x224c parp=0xefad
// ================================================

void UNK_0xefad() // UNK_0xefad
{
  Push(pp_UNK_0xdb60); // UNK_0xdb60
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdb54); // UNK_0xdb54
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(2); // 2
  MAX(); // MAX
  Push(0x0031);
  MIN(); // MIN
  Push(pp_UNK_0xdb7c); // UNK_0xdb7c
  _ex__2(); // !_2
}


// ================================================
// 0xefc7: WORD 'UNK_0xefc9' codep=0x224c parp=0xefc9
// ================================================

void UNK_0xefc9() // UNK_0xefc9
{
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdb6c); // UNK_0xdb6c
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  UNK_0xe2ec(); // UNK_0xe2ec
}


// ================================================
// 0xefd7: WORD 'UNK_0xefd9' codep=0x224c parp=0xefd9
// ================================================

void UNK_0xefd9() // UNK_0xefd9
{
  Push(pp_UNK_0xdb64); // UNK_0xdb64
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdb5c); // UNK_0xdb5c
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xefe3: WORD 'UNK_0xefe5' codep=0x224c parp=0xefe5
// ================================================

void UNK_0xefe5() // UNK_0xefe5
{
  UNK_0xef1d(); // UNK_0xef1d
  UNK_0xef3d(); // UNK_0xef3d
  UNK_0xefad(); // UNK_0xefad
  UNK_0xef85(); // UNK_0xef85
}

// 0xefef: db 0x4c 0x22 0xaf 0x64 0x2f 0x7a 0x34 0x75 0xdf 0x79 0x90 0x16 'L" d/z4u y  '

// ================================================
// 0xeffb: WORD 'UNK_0xeffd' codep=0x224c parp=0xeffd
// ================================================

void UNK_0xeffd() // UNK_0xeffd
{
  Push(0x0167);
  Push(pp_UNK_0xdb5c); // UNK_0xdb5c
  _ex__2(); // !_2
  Push(0x0019);
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xdb54); // UNK_0xdb54
  _ex__2(); // !_2
  Push(Pop()-1); // 1-
  Push(pp_UNK_0xdb60); // UNK_0xdb60
  _ex__2(); // !_2
  Push(Read16(cc__7)); // 7
  Push(pp_UNK_0xdb64); // UNK_0xdb64
  _ex__2(); // !_2
  Push(1); // 1
  Push(pp_UNK_0xdb88); // UNK_0xdb88
  _ex__2(); // !_2
  Push(0xfffb);
  Push(pp_UNK_0xdb68); // UNK_0xdb68
  _ex__2(); // !_2
  Push(Read16(cc__8)); // 8
  Push(pp_UNK_0xdb6c); // UNK_0xdb6c
  _ex__2(); // !_2
  Push(0x0019);
  UNK_0xe2ec(); // UNK_0xe2ec
  SEEGRID(); // SEEGRID
  Push(1); // 1
  Push(pp_UNK_0xdb80); // UNK_0xdb80
  _plus__ex__2(); // +!_2
  Push(0x0023);
  UNK_0xe2ec(); // UNK_0xe2ec
  SEEGRID(); // SEEGRID
  Push(pp_UNK_0xdb70); // UNK_0xdb70
  ON_2(); // ON_2
  CTINIT(); // CTINIT

  UNK_0x3f09("TOPOGRAPHY NET LOCKED ON");
  _dot_TTY(); // .TTY
  UNK_0xebd9(); // UNK_0xebd9
  UNK_0xec17(); // UNK_0xec17

  label2:
  UNK_0xefe5(); // UNK_0xefe5
  SEEGRID(); // SEEGRID
  UNK_0xefc9(); // UNK_0xefc9
  UNK_0xef65(); // UNK_0xef65
  UNK_0xefd9(); // UNK_0xefd9
  Push(pp_UNK_0xdb7c); // UNK_0xdb7c
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(Read16(cc__dash_2)); // -2
  Push(pp_UNK_0xdb68); // UNK_0xdb68
  _ex__2(); // !_2

  label1:
  Push(2); // 2
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label2;
  Push(pp__ask_FUEL_dash_D); // ?FUEL-D
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  CTINIT(); // CTINIT

  UNK_0x3f09("SAFE LANDING, COMMANDER.");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf0bf: WORD 'UNK_0xf0c1' codep=0x224c parp=0xf0c1
// ================================================

void UNK_0xf0c1() // UNK_0xf0c1
{
  UNK_0xeda7(); // UNK_0xeda7
  Push(Read16(cc_UNK_0xdb3e)); // UNK_0xdb3e
  UNK_0xeed9(); // UNK_0xeed9
  UNK_0xeddd(); // UNK_0xeddd
  UNK_0xec59(); // UNK_0xec59
  UNK_0xeffd(); // UNK_0xeffd
}


// ================================================
// 0xf0cf: WORD 'DESCEND' codep=0x224c parp=0xf0db
// ================================================
// entry

void DESCEND() // DESCEND
{
  CTINIT(); // CTINIT

  UNK_0x3f09("COMPUTING DESCENT PROFILE...");
  _dot_TTY(); // .TTY
  UNK_0xee75(); // UNK_0xee75
  UNK_0xeeb1(); // UNK_0xeeb1
  Push(0xbab2); // probable 'NEWCO'
  MODULE(); // MODULE
  UNK_0xe6eb(); // UNK_0xe6eb
  UNK_0xe751(); // UNK_0xe751
  CTINIT(); // CTINIT

  UNK_0x3f09("AUTOPILOT ENGAGED. DESCENDING...");
  _dot_TTY(); // .TTY
  _gt_VIEWSITE(); // >VIEWSITE
  UNK_0xee13(); // UNK_0xee13
  Push(pp__ask_FUEL_dash_D); // ?FUEL-D
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  CTERASE(); // CTERASE
  CTINIT(); // CTINIT

  UNK_0x3f09("OUT OF FUEL! CRASH IMMINENT!");
  _dot_TTY(); // .TTY

  label1:
  UNK_0xf0c1(); // UNK_0xf0c1
}


// ================================================
// 0xf168: WORD 'UNK_0xf16a' codep=0x224c parp=0xf16a
// ================================================

void UNK_0xf16a() // UNK_0xf16a
{
  Push(Read16(cc__5)); // 5
  Push(pp_UNK_0xdb68); // UNK_0xdb68
  _ex__2(); // !_2
  Push(pp_UNK_0xdb6c); // UNK_0xdb6c
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdb6c); // UNK_0xdb6c
  _ex__2(); // !_2
  Push(pp_UNK_0xdb64); // UNK_0xdb64
  Push(Read16(Pop())); // @
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdb64); // UNK_0xdb64
  _ex__2(); // !_2

  label2:
  UNK_0xefe5(); // UNK_0xefe5
  SEEGRID(); // SEEGRID
  UNK_0xefc9(); // UNK_0xefc9
  UNK_0xef65(); // UNK_0xef65
  Push(pp_UNK_0xdb5c); // UNK_0xdb5c
  Push(Read16(Pop())); // @
  Push(0x0167);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xefd9(); // UNK_0xefd9

  label1:
  Push(pp_UNK_0xdb7c); // UNK_0xdb7c
  Push(Read16(Pop())); // @
  Push(0x0031);
  Push((Pop()==Pop())?1:0); // =
  Push(pp_UNK_0xdb5c); // UNK_0xdb5c
  Push(Read16(Pop())); // @
  Push(0x0167);
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(pp_UNK_0xdb70); // UNK_0xdb70
  _099(); // 099
  Push(pp_UNK_0xdb78); // UNK_0xdb78
  _099(); // 099
  Push(0x0032);
  Push(pp_UNK_0xdb7c); // UNK_0xdb7c
  _ex__2(); // !_2
  Push(1); // 1
  Push(pp_UNK_0xdb80); // UNK_0xdb80
  _ex__2(); // !_2
  UNK_0xebbf(); // UNK_0xebbf
  UNK_0xefc9(); // UNK_0xefc9
  SEEGRID(); // SEEGRID
}


// ================================================
// 0xf1d6: WORD 'UNK_0xf1d8' codep=0x224c parp=0xf1d8
// ================================================

void UNK_0xf1d8() // UNK_0xf1d8
{
  signed short int i, imax;
  UNK_0xed3d(); // UNK_0xed3d
  UNK_0xeda7(); // UNK_0xeda7
  UNK_0xec59(); // UNK_0xec59
  Push(0x0028);
  Push(0x008c);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe2ec(); // UNK_0xe2ec
  SEEGRID(); // SEEGRID
  Push(0xffe2);
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xfff4

  UNK_0xed3d(); // UNK_0xed3d
  UNK_0xed11(); // UNK_0xed11
  UNK_0xec59(); // UNK_0xec59
  Push(0x0023);
  UNK_0xe2ec(); // UNK_0xe2ec
  SEEGRID(); // SEEGRID
  UNK_0xed3d(); // UNK_0xed3d
  Push(1); // 1
  Push(0x000e);
  ReadArray(Read16(0x6af2 + 6), 0x015f); // GVERTEX
  LC_at_(); // LC@
  UNK_0xecf3(); // UNK_0xecf3
  UNK_0xec59(); // UNK_0xec59
  Push(0x001e);
  UNK_0xe2ec(); // UNK_0xe2ec
  SEEGRID(); // SEEGRID
}


// ================================================
// 0xf21e: WORD 'UNK_0xf220' codep=0x224c parp=0xf220
// ================================================

void UNK_0xf220() // UNK_0xf220
{
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x0030);
  MOD(); // MOD
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  _ex__2(); // !_2
}


// ================================================
// 0xf232: WORD 'UNK_0xf234' codep=0x1d29 parp=0xf234
// ================================================
// 0xf234: db 0x3a 0x20 ': '

// ================================================
// 0xf236: WORD 'UNK_0xf238' codep=0x224c parp=0xf238
// ================================================

void UNK_0xf238() // UNK_0xf238
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  UNK_0xe598(); // UNK_0xe598
  Push(pp_UNK_0xdbc8); // UNK_0xdbc8
  _ex__2(); // !_2
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  _ex__2(); // !_2
  Push(0x012c);
  Push(Read16(regsp)); // DUP
  UNK_0xe2ec(); // UNK_0xe2ec
  Push(pp_UNK_0xdb74); // UNK_0xdb74
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Read16(cc__6)); // 6
  _slash_(); // /
  Push(pp_UNK_0xdbe4); // UNK_0xdbe4
  _ex__2(); // !_2

  label3:
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdbe4); // UNK_0xdbe4
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xdb74); // UNK_0xdb74
  Push(Read16(Pop())); // @
  MAX(); // MAX
  UNK_0xe2ec(); // UNK_0xe2ec
  Push(pp_UNK_0xdbc8); // UNK_0xdbc8
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf234); // UNK_0xf234
  Push(Read16(Pop())); // @
  _st_(); // <
  if (Pop() == 0) goto label1;
  Push(1); // 1
  goto label2;

  label1:
  Push(Read16(cc__dash_1)); // -1

  label2:
  Push(pp_UNK_0xdbc8); // UNK_0xdbc8
  _plus__ex__2(); // +!_2
  UNK_0xe620(); // UNK_0xe620
  UNK_0xf220(); // UNK_0xf220
  Push(pp_UNK_0xdbc0); // UNK_0xdbc0
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdb74); // UNK_0xdb74
  Push(Read16(Pop())); // @
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) goto label3;
}


// ================================================
// 0xf2a0: WORD 'ASCEND' codep=0x224c parp=0xf2ab
// ================================================
// entry

void ASCEND() // ASCEND
{
  UNK_0xf16a(); // UNK_0xf16a
  UNK_0xf1d8(); // UNK_0xf1d8
  UNK_0xf238(); // UNK_0xf238
}


// ================================================
// 0xf2b3: WORD 'UNK_0xf2b5' codep=0x224c parp=0xf2b5
// ================================================

void UNK_0xf2b5() // UNK_0xf2b5
{
  UNK_0xdd9e(); // UNK_0xdd9e
  UNK_0xddec(); // UNK_0xddec
}


// ================================================
// 0xf2bb: WORD 'UNK_0xf2bd' codep=0x224c parp=0xf2bd
// ================================================

void UNK_0xf2bd() // UNK_0xf2bd
{
  Push(pp_GLOBALS); // GLOBALS
  Push(Read16(Pop())); // @
  Push(pp_SEED_3); // SEED_3
  _ex__2(); // !_2
  Push(Read16(cc__5)); // 5
  Push(0x0013);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xf234); // UNK_0xf234
  _ex__2(); // !_2
  Push(pp_UNK_0xdbc8); // UNK_0xdbc8
  _ex__2(); // !_2
  Push(pp_UNK_0xdbcc); // UNK_0xdbcc
  _099(); // 099
  Push(pp_UNK_0xdbb4); // UNK_0xdbb4
  _099(); // 099
  Push(Read16(cc_UNK_0xdb36)); // UNK_0xdb36
  Push(pp_UNK_0xdbb8); // UNK_0xdbb8
  _ex__2(); // !_2
}


// ================================================
// 0xf2e7: WORD 'UNK_0xf2e9' codep=0x224c parp=0xf2e9
// ================================================

void UNK_0xf2e9() // UNK_0xf2e9
{
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
  LoadData("UNK_0xdc8c"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(Read16(cc__3)); // 3
  _slash_(); // /
  ICLOSE(); // ICLOSE
  Push(0x0014);
  MAX(); // MAX
  Push(0x0078);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xdb74); // UNK_0xdb74
  _ex__2(); // !_2
  UNK_0xe2ec(); // UNK_0xe2ec
}


// ================================================
// 0xf30f: WORD 'SKYCASE' codep=0x4b3b parp=0xf31b
// ================================================

void SKYCASE() // SKYCASE
{
  switch(Pop()) // SKYCASE
  {
  case 0:
    SetColor("BLACK");
    break;
  case 7:
    SetColor("YELLOW");
    break;
  case 12:
    SetColor("YELLOW");
    break;
  case 19:
    SetColor("YELLOW");
    break;
  default:
    SetColor("LT-BLUE");
    break;

  }
}

// ================================================
// 0xf32f: WORD 'UNK_0xf331' codep=0x224c parp=0xf331
// ================================================

void UNK_0xf331() // UNK_0xf331
{
  Push(pp_ATMO); // ATMO
  Push(Read16(Pop())); // @
  SKYCASE(); // SKYCASE case
  Push(pp_UNK_0xdb50); // UNK_0xdb50
  _ex__2(); // !_2
}


// ================================================
// 0xf33d: WORD 'INIT-ORBIT' codep=0x224c parp=0xf34c
// ================================================
// entry

void INIT_dash_ORBIT() // INIT-ORBIT
{
  Push(pp_GLOBALS); // GLOBALS
  _ex__2(); // !_2
  Push(pp__n_CLRMAP); // #CLRMAP
  _ex__2(); // !_2
  SET_dash_COL(); // SET-COL
  UNK_0xf2e9(); // UNK_0xf2e9
  UNK_0xf331(); // UNK_0xf331
  Push(pp_GLOBALS); // GLOBALS
  Push(Read16(Pop())); // @
  Push(0xbaa2); // probable 'MERCA'
  MODULE(); // MODULE
  Push(0xbac2); // probable 'MAKE-'
  MODULE(); // MODULE
  UNK_0xf2b5(); // UNK_0xf2b5
  UNK_0xf2bd(); // UNK_0xf2bd
}


// ================================================
// 0xf370: WORD 'ROTATE' codep=0x224c parp=0xf37b
// ================================================
// entry

void ROTATE() // ROTATE
{
  UNK_0xf220(); // UNK_0xf220
  UNK_0xe620(); // UNK_0xe620
}

// 0xf381: db 0x4f 0x52 0x42 0x49 0x54 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x29 0x05 0x10 0x72 0x0f 0x38 0x0c 0x90 0x16 0xbe 0xf1 0x86 0x43 0x4c 0x49 0x53 0x37 0x38 0x34 0x1d 0x02 0x00 0xcf 0x49 0x02 0x00 0xae 0x4b 0x02 0x00 0xdb 0x4b 0x32 0x33 0x32 0x39 0x02 0x00 0x3e 0x4c 0xac 0xf3 0x86 0x43 0x4c 0x49 0x53 0x54 0xb2 0x29 0x1d 0x02 0x00 0xf2 0x49 0x02 0x00 0x93 0x4c 0x02 0x00 0x8a 0x49 0x02 0x00 0x65 0x48 0x02 0x00 0x6b 0x4c 0xcb 0xf3 0x86 0x43 0x4c 0x49 0x53 0x54 0xb3 0x29 0x1d 0x02 0x00 0xe1 0x49 0x02 0x00 0x00 0x4c 0x02 0x00 0x2b 0x4c 0x02 0x00 0x57 0x4c 0x02 0x00 0xf2 0x49 0x4c 0x22 0x16 0x16 0x89 0x4a 0x02 0x00 0x84 0x55 0x32 0x6d 0xb3 0xf3 0x98 0xf3 0x75 0x55 0x32 0x6d 0x90 0x16 0x37 0xf3 0x86 0x28 0x53 0x41 0x4e 0x44 0xa9 0x29 0x1d 0x02 0x00 0x04 0x4b 0x02 0x00 0x1a 0x4b 0x02 0x00 0x49 0x4b 0x02 0x00 0x31 0x4b 0x4c 0x22 0xb9 0x55 0xae 0x0b 0xfa 0x15 0x3a 0x00 0xf1 0xf3 0x98 0xf3 0x75 0x55 0x32 0x6d 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x5d 0x17 0x1f 0x00 0x46 0x12 0xfa 0x15 0x16 0x00 0x20 0x0f 0x87 0x3b 0xc4 0x4b 0x05 0x10 0x05 0x10 0x26 0xf4 0x72 0x0f 0x38 0x0c 0x60 0x16 0x08 0x00 0x16 0x16 0x70 0x4a 0x02 0x00 0x60 0x16 0x0e 0x00 0x16 0x16 0x3e 0x4a 0x02 0x00 0xc4 0x52 0x75 0x55 0x32 0x6d 0x84 0x55 0x32 0x6d 0x90 0x16 0x4c 0x22 0xd2 0xf3 0x98 0xf3 0xa1 0x55 0x32 0x6d 0x38 0xf4 0x90 0x16 0x4c 0x22 0x16 0x16 0xb0 0x4a 0x02 0x00 0x84 0x55 0x32 0x6d 0x16 0x16 0xda 0x4a 0x02 0x00 0x75 0x55 0x32 0x6d 0x90 0x16 0x4c 0x22 0x16 0x16 0x77 0x4b 0x02 0x00 0x84 0x55 0x32 0x6d 0xa6 0x49 0x75 0x55 0x32 0x6d 0x90 0x16 0xea 0xf3 0x89 0x28 0x54 0x45 0x52 0x52 0x41 0x49 0xce 0x3b 0x4b 0x05 0x00 0xb4 0xf4 0x01 0x00 0x8a 0xf3 0x02 0x00 0x8e 0xf4 0x03 0x00 0x09 0xf4 0x04 0x00 0x9c 0xf4 0x05 0x00 0x3a 0xf4 0x4c 0x22 0xa8 0xed 0x92 0x0c 0xd1 0xf4 0x90 0x16 0x4c 0x22 0x20 0x0f 0x57 0xaa 0x16 0x6d 0x90 0x16 0x4c 0x22 0x18 0x5a 0x2f 0x7a 0x3f 0x7a 0x5d 0x17 0xf7 0xf4 0x8c 0x7f 0xe2 0x7a 0x2e 0x0f 0x57 0xaa 0x16 0x6d 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x97 0xf1 0x8a 0x50 0x4c 0x41 0x4e 0x2d 0x52 0x55 0xcc 0x4c 0x22 0xff 0xf4 0xa2 0xee 0xaf 0x64 0x2f 0x7a 0x34 0x75 0x5d 0x17 0x11 0x00 0x2d 0x12 0xfa 0x15 0x08 0x00 0x3e 0xf1 0x60 0x16 0x04 0x00 0x4a 0xf1 0x9f 0xf2 0xeb 0xf4 0x72 0xf3 0xdf 0x79 0x90 0x16 0x53 0x45 0x54 0x54 0x45 0x52 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'ORBIT___________________________)  r 8      CLIS784    I   K   K2329  >L   CLIST )    I   L   I  eH  kL   CLIST )    I   L  +L  WL   IL"   J   U2m    uU2m  7  (SAND )    K   K  IK  1KL" U    :     uU2m. ] d  K]   F        ; K    & r 8 `     pJ  `     >J   RuU2m U2m  L"     U2m8   L"   J   U2m   J  uU2m  L"  wK   U2m IuU2m     (TERRAI ;K                      : L"        L"  W  m  L" Z/z?z]     z. W  m=  z     PLAN-RU L"     d/z4u]   -     > `   J     r  y  SETTER____________ '
  