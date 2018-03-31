// ====== OVERLAY 'DESCRIBE' ======
// store offset = 0xe5f0
// overlay size   = 0x0f70

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//      UNK_0xe606  codep:0x224c parp:0xe606 size:0x001a C-string:'UNK_0xe606'
//      UNK_0xe622  codep:0x7394 parp:0xe622 size:0x0006 C-string:'UNK_0xe622'
//      UNK_0xe62a  codep:0x7394 parp:0xe62a size:0x0006 C-string:'UNK_0xe62a'
//      UNK_0xe632  codep:0x7394 parp:0xe632 size:0x0006 C-string:'UNK_0xe632'
//      UNK_0xe63a  codep:0x7394 parp:0xe63a size:0x0006 C-string:'UNK_0xe63a'
//      UNK_0xe642  codep:0x7394 parp:0xe642 size:0x0006 C-string:'UNK_0xe642'
//      UNK_0xe64a  codep:0x7420 parp:0xe64a size:0x0003 C-string:'UNK_0xe64a'
//      UNK_0xe64f  codep:0x7420 parp:0xe64f size:0x0003 C-string:'UNK_0xe64f'
//      UNK_0xe654  codep:0x7420 parp:0xe654 size:0x0003 C-string:'UNK_0xe654'
//      UNK_0xe659  codep:0x7420 parp:0xe659 size:0x0003 C-string:'UNK_0xe659'
//      UNK_0xe65e  codep:0x7420 parp:0xe65e size:0x0003 C-string:'UNK_0xe65e'
//      UNK_0xe663  codep:0x7394 parp:0xe663 size:0x0006 C-string:'UNK_0xe663'
//      UNK_0xe66b  codep:0x7394 parp:0xe66b size:0x0006 C-string:'UNK_0xe66b'
//      UNK_0xe673  codep:0x7394 parp:0xe673 size:0x0006 C-string:'UNK_0xe673'
//      UNK_0xe67b  codep:0x7394 parp:0xe67b size:0x0006 C-string:'UNK_0xe67b'
//      UNK_0xe683  codep:0x7394 parp:0xe683 size:0x0006 C-string:'UNK_0xe683'
//      UNK_0xe68b  codep:0x7394 parp:0xe68b size:0x001e C-string:'UNK_0xe68b'
//      UNK_0xe6ab  codep:0x7394 parp:0xe6ab size:0x0006 C-string:'UNK_0xe6ab'
//      UNK_0xe6b3  codep:0x7420 parp:0xe6b3 size:0x0003 C-string:'UNK_0xe6b3'
//      UNK_0xe6b8  codep:0x7420 parp:0xe6b8 size:0x0003 C-string:'UNK_0xe6b8'
//      UNK_0xe6bd  codep:0x7394 parp:0xe6bd size:0x0006 C-string:'UNK_0xe6bd'
//      UNK_0xe6c5  codep:0x7394 parp:0xe6c5 size:0x0006 C-string:'UNK_0xe6c5'
//      UNK_0xe6cd  codep:0x7394 parp:0xe6cd size:0x0006 C-string:'UNK_0xe6cd'
//      UNK_0xe6d5  codep:0x7420 parp:0xe6d5 size:0x0003 C-string:'UNK_0xe6d5'
//      UNK_0xe6da  codep:0x224c parp:0xe6da size:0x0016 C-string:'UNK_0xe6da'
//          APAUSE  codep:0x224c parp:0xe6fb size:0x0068 C-string:'APAUSE'
//      UNK_0xe765  codep:0x224c parp:0xe765 size:0x000a C-string:'UNK_0xe765'
//      UNK_0xe771  codep:0x224c parp:0xe771 size:0x001c C-string:'UNK_0xe771'
//      UNK_0xe78f  codep:0x224c parp:0xe78f size:0x0006 C-string:'UNK_0xe78f'
//      UNK_0xe797  codep:0x224c parp:0xe797 size:0x002e C-string:'UNK_0xe797'
//      UNK_0xe7c7  codep:0x224c parp:0xe7c7 size:0x0016 C-string:'UNK_0xe7c7'
//      UNK_0xe7df  codep:0x224c parp:0xe7df size:0x0052 C-string:'UNK_0xe7df'
//      UNK_0xe833  codep:0x224c parp:0xe833 size:0x000a C-string:'UNK_0xe833'
//      UNK_0xe83f  codep:0x1d29 parp:0xe83f size:0x0002 C-string:'UNK_0xe83f'
//      UNK_0xe843  codep:0x224c parp:0xe843 size:0x000e C-string:'UNK_0xe843'
//      UNK_0xe853  codep:0x224c parp:0xe853 size:0x0056 C-string:'UNK_0xe853'
//      UNK_0xe8ab  codep:0x224c parp:0xe8ab size:0x0006 C-string:'UNK_0xe8ab'
//      UNK_0xe8b3  codep:0x224c parp:0xe8b3 size:0x0040 C-string:'UNK_0xe8b3'
//      UNK_0xe8f5  codep:0x224c parp:0xe8f5 size:0x0014 C-string:'UNK_0xe8f5'
//      UNK_0xe90b  codep:0x224c parp:0xe90b size:0x0049 C-string:'UNK_0xe90b'
//      UNK_0xe956  codep:0x224c parp:0xe956 size:0x001a C-string:'UNK_0xe956'
//      UNK_0xe972  codep:0x224c parp:0xe972 size:0x0019 C-string:'UNK_0xe972'
//      UNK_0xe98d  codep:0x224c parp:0xe98d size:0x001b C-string:'UNK_0xe98d'
//      UNK_0xe9aa  codep:0x224c parp:0xe9aa size:0x000e C-string:'UNK_0xe9aa'
//      UNK_0xe9ba  codep:0x224c parp:0xe9ba size:0x0012 C-string:'UNK_0xe9ba'
//      UNK_0xe9ce  codep:0x224c parp:0xe9ce size:0x0006 C-string:'UNK_0xe9ce'
//        >SPECIAL  codep:0x4b3b parp:0xe9e1 size:0x0018 C-string:'_gt_SPECIAL'
//      UNK_0xe9fb  codep:0x224c parp:0xe9fb size:0x0036 C-string:'UNK_0xe9fb'
//      UNK_0xea33  codep:0x224c parp:0xea33 size:0x001c C-string:'UNK_0xea33'
//      UNK_0xea51  codep:0x224c parp:0xea51 size:0x0016 C-string:'UNK_0xea51'
//         .PHRASE  codep:0x224c parp:0xea73 size:0x000e C-string:'DrawPHRASE'
//      UNK_0xea83  codep:0x224c parp:0xea83 size:0x0010 C-string:'UNK_0xea83'
//        .APHRASE  codep:0x224c parp:0xeaa0 size:0x000e C-string:'DrawAPHRASE'
//      UNK_0xeab0  codep:0x224c parp:0xeab0 size:0x0008 C-string:'UNK_0xeab0'
//      UNK_0xeaba  codep:0x224c parp:0xeaba size:0x000a C-string:'UNK_0xeaba'
//      UNK_0xeac6  codep:0x224c parp:0xeac6 size:0x0008 C-string:'UNK_0xeac6'
//      UNK_0xead0  codep:0x224c parp:0xead0 size:0x000a C-string:'UNK_0xead0'
//      UNK_0xeadc  codep:0x224c parp:0xeadc size:0x0006 C-string:'UNK_0xeadc'
//      UNK_0xeae4  codep:0x2214 parp:0xeae4 size:0x0002 C-string:'UNK_0xeae4'
//      UNK_0xeae8  codep:0x2214 parp:0xeae8 size:0x0002 C-string:'UNK_0xeae8'
//      UNK_0xeaec  codep:0x2214 parp:0xeaec size:0x0002 C-string:'UNK_0xeaec'
//      UNK_0xeaf0  codep:0x2214 parp:0xeaf0 size:0x0002 C-string:'UNK_0xeaf0'
//      UNK_0xeaf4  codep:0x2214 parp:0xeaf4 size:0x0002 C-string:'UNK_0xeaf4'
//        RACE>TRA  codep:0x4b3b parp:0xeb03 size:0x0030 C-string:'RACE_gt_TRA'
//      UNK_0xeb35  codep:0x1d29 parp:0xeb35 size:0x001a C-string:'UNK_0xeb35'
//      UNK_0xeb51  codep:0x224c parp:0xeb51 size:0x0010 C-string:'UNK_0xeb51'
//      UNK_0xeb63  codep:0x1d29 parp:0xeb63 size:0x0002 C-string:'UNK_0xeb63'
//      UNK_0xeb67  codep:0x224c parp:0xeb67 size:0x0024 C-string:'UNK_0xeb67'
//      UNK_0xeb8d  codep:0x224c parp:0xeb8d size:0x0032 C-string:'UNK_0xeb8d'
//      UNK_0xebc1  codep:0x224c parp:0xebc1 size:0x000a C-string:'UNK_0xebc1'
//      UNK_0xebcd  codep:0x224c parp:0xebcd size:0x000c C-string:'UNK_0xebcd'
//      UNK_0xebdb  codep:0x1d29 parp:0xebdb size:0x0003 C-string:'UNK_0xebdb'
//      UNK_0xebe0  codep:0x224c parp:0xebe0 size:0x0008 C-string:'UNK_0xebe0'
//      UNK_0xebea  codep:0x224c parp:0xebea size:0x0006 C-string:'UNK_0xebea'
//      UNK_0xebf2  codep:0x224c parp:0xebf2 size:0x0008 C-string:'UNK_0xebf2'
//      UNK_0xebfc  codep:0x224c parp:0xebfc size:0x0012 C-string:'UNK_0xebfc'
//      UNK_0xec10  codep:0x224c parp:0xec10 size:0x0012 C-string:'UNK_0xec10'
//      UNK_0xec24  codep:0x1d29 parp:0xec24 size:0x0003 C-string:'UNK_0xec24'
//      UNK_0xec29  codep:0x224c parp:0xec29 size:0x0008 C-string:'UNK_0xec29'
//      UNK_0xec33  codep:0x224c parp:0xec33 size:0x0006 C-string:'UNK_0xec33'
//      UNK_0xec3b  codep:0x224c parp:0xec3b size:0x0012 C-string:'UNK_0xec3b'
//      UNK_0xec4f  codep:0x224c parp:0xec4f size:0x0012 C-string:'UNK_0xec4f'
//      UNK_0xec63  codep:0x224c parp:0xec63 size:0x0012 C-string:'UNK_0xec63'
//      UNK_0xec77  codep:0x224c parp:0xec77 size:0x0010 C-string:'UNK_0xec77'
//      UNK_0xec89  codep:0x224c parp:0xec89 size:0x0032 C-string:'UNK_0xec89'
//      UNK_0xecbd  codep:0x224c parp:0xecbd size:0x0050 C-string:'UNK_0xecbd'
//      UNK_0xed0f  codep:0x224c parp:0xed0f size:0x0006 C-string:'UNK_0xed0f'
//      UNK_0xed17  codep:0x224c parp:0xed17 size:0x0032 C-string:'UNK_0xed17'
//      UNK_0xed4b  codep:0x224c parp:0xed4b size:0x0010 C-string:'UNK_0xed4b'
//      UNK_0xed5d  codep:0x224c parp:0xed5d size:0x000c C-string:'UNK_0xed5d'
//      UNK_0xed6b  codep:0x224c parp:0xed6b size:0x0008 C-string:'UNK_0xed6b'
//      UNK_0xed75  codep:0x224c parp:0xed75 size:0x0030 C-string:'UNK_0xed75'
//      UNK_0xeda7  codep:0x224c parp:0xeda7 size:0x0010 C-string:'UNK_0xeda7'
//      UNK_0xedb9  codep:0x224c parp:0xedb9 size:0x0016 C-string:'UNK_0xedb9'
//      UNK_0xedd1  codep:0x224c parp:0xedd1 size:0x0022 C-string:'UNK_0xedd1'
//        RACE-SCR  codep:0x4b3b parp:0xee00 size:0x000c C-string:'RACE_dash_SCR'
//      UNK_0xee0e  codep:0x224c parp:0xee0e size:0x003e C-string:'UNK_0xee0e'
//      UNK_0xee4e  codep:0x224c parp:0xee4e size:0x003c C-string:'UNK_0xee4e'
//      UNK_0xee8c  codep:0x224c parp:0xee8c size:0x000a C-string:'UNK_0xee8c'
//          ?COMSG  codep:0x224c parp:0xeea1 size:0x001e C-string:'IsCOMSG'
//      UNK_0xeec1  codep:0x224c parp:0xeec1 size:0x000a C-string:'UNK_0xeec1'
//      UNK_0xeecd  codep:0x224c parp:0xeecd size:0x000a C-string:'UNK_0xeecd'
//      UNK_0xeed9  codep:0x224c parp:0xeed9 size:0x000a C-string:'UNK_0xeed9'
//      UNK_0xeee5  codep:0x224c parp:0xeee5 size:0x000a C-string:'UNK_0xeee5'
//      UNK_0xeef1  codep:0x224c parp:0xeef1 size:0x000a C-string:'UNK_0xeef1'
//      UNK_0xeefd  codep:0x224c parp:0xeefd size:0x000a C-string:'UNK_0xeefd'
//      UNK_0xef09  codep:0x224c parp:0xef09 size:0x0012 C-string:'UNK_0xef09'
//      UNK_0xef1d  codep:0x224c parp:0xef1d size:0x0012 C-string:'UNK_0xef1d'
//      UNK_0xef31  codep:0x224c parp:0xef31 size:0x0012 C-string:'UNK_0xef31'
//      UNK_0xef45  codep:0x224c parp:0xef45 size:0x000a C-string:'UNK_0xef45'
//      UNK_0xef51  codep:0x224c parp:0xef51 size:0x0022 C-string:'UNK_0xef51'
//      UNK_0xef75  codep:0x224c parp:0xef75 size:0x000a C-string:'UNK_0xef75'
//      UNK_0xef81  codep:0x224c parp:0xef81 size:0x000a C-string:'UNK_0xef81'
//      UNK_0xef8d  codep:0x224c parp:0xef8d size:0x000a C-string:'UNK_0xef8d'
//      UNK_0xef99  codep:0x224c parp:0xef99 size:0x000a C-string:'UNK_0xef99'
//      UNK_0xefa5  codep:0x224c parp:0xefa5 size:0x000a C-string:'UNK_0xefa5'
//      UNK_0xefb1  codep:0x224c parp:0xefb1 size:0x000a C-string:'UNK_0xefb1'
//        #>SURFAC  codep:0x4b3b parp:0xefc8 size:0x0018 C-string:'_n__gt_SURFAC'
//      UNK_0xefe2  codep:0x224c parp:0xefe2 size:0x004a C-string:'UNK_0xefe2'
//      UNK_0xf02e  codep:0x224c parp:0xf02e size:0x0024 C-string:'UNK_0xf02e'
//      UNK_0xf054  codep:0x224c parp:0xf054 size:0x003e C-string:'UNK_0xf054'
//      UNK_0xf094  codep:0x224c parp:0xf094 size:0x0016 C-string:'UNK_0xf094'
//      UNK_0xf0ac  codep:0x1d29 parp:0xf0ac size:0x0096 C-string:'UNK_0xf0ac'
//      UNK_0xf144  codep:0x224c parp:0xf144 size:0x0022 C-string:'UNK_0xf144'
//      UNK_0xf168  codep:0x224c parp:0xf168 size:0x000a C-string:'UNK_0xf168'
//      UNK_0xf174  codep:0x224c parp:0xf174 size:0x0042 C-string:'UNK_0xf174'
//      UNK_0xf1b8  codep:0x224c parp:0xf1b8 size:0x000a C-string:'UNK_0xf1b8'
//      UNK_0xf1c4  codep:0x224c parp:0xf1c4 size:0x0022 C-string:'UNK_0xf1c4'
//      UNK_0xf1e8  codep:0x2214 parp:0xf1e8 size:0x0002 C-string:'UNK_0xf1e8'
//      UNK_0xf1ec  codep:0x224c parp:0xf1ec size:0x004c C-string:'UNK_0xf1ec'
//      UNK_0xf23a  codep:0x224c parp:0xf23a size:0x006a C-string:'UNK_0xf23a'
//      UNK_0xf2a6  codep:0x224c parp:0xf2a6 size:0x0012 C-string:'UNK_0xf2a6'
//          SYSCAN  codep:0x224c parp:0xf2c3 size:0x0084 C-string:'SYSCAN'
//      UNK_0xf349  codep:0x224c parp:0xf349 size:0x001a C-string:'UNK_0xf349'
//           RCASE  codep:0x4b3b parp:0xf36d size:0x001c C-string:'RCASE'
//      UNK_0xf38b  codep:0x224c parp:0xf38b size:0x0018 C-string:'UNK_0xf38b'
//      UNK_0xf3a5  codep:0x224c parp:0xf3a5 size:0x003a C-string:'UNK_0xf3a5'
//      UNK_0xf3e1  codep:0x224c parp:0xf3e1 size:0x0010 C-string:'UNK_0xf3e1'
//      UNK_0xf3f3  codep:0x224c parp:0xf3f3 size:0x0020 C-string:'UNK_0xf3f3'
//      UNK_0xf415  codep:0x224c parp:0xf415 size:0x000e C-string:'UNK_0xf415'
//      UNK_0xf425  codep:0x224c parp:0xf425 size:0x0010 C-string:'UNK_0xf425'
//      UNK_0xf437  codep:0x224c parp:0xf437 size:0x0028 C-string:'UNK_0xf437'
//      UNK_0xf461  codep:0x224c parp:0xf461 size:0x000c C-string:'UNK_0xf461'
//      UNK_0xf46f  codep:0x224c parp:0xf46f size:0x0008 C-string:'UNK_0xf46f'
//      UNK_0xf479  codep:0x224c parp:0xf479 size:0x0008 C-string:'UNK_0xf479'
//      UNK_0xf483  codep:0x224c parp:0xf483 size:0x0008 C-string:'UNK_0xf483'
//      UNK_0xf48d  codep:0x224c parp:0xf48d size:0x000e C-string:'UNK_0xf48d'
//        CLASS>TY  codep:0x4b3b parp:0xf4a8 size:0x002c C-string:'CLASS_gt_TY'
//        DESCRIBE  codep:0x224c parp:0xf4e1 size:0x0000 C-string:'DESCRIBE'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp_BEEPMS; // BEEPMS
extern const unsigned short int pp_BEEPTONE; // BEEPTONE
extern const unsigned short int pp_XLL; // XLL
extern const unsigned short int pp_YLL; // YLL
extern const unsigned short int pp_XUR; // XUR
extern const unsigned short int pp_YUR; // YUR
extern const unsigned short int pp__i_ASYS; // 'ASYS
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_WTOP; // WTOP
extern const unsigned short int pp_WBOTTOM; // WBOTTOM
extern const unsigned short int pp_WLEFT; // WLEFT
extern const unsigned short int pp_WLINES; // WLINES
extern const unsigned short int pp_WCHARS; // WCHARS
extern const unsigned short int pp_IsON_dash_PLA; // ?ON-PLA
extern const unsigned short int pp_CTX; // CTX
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_FQUIT; // FQUIT
extern const unsigned short int pp_SCROLL_dash_; // SCROLL-
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_LINE_dash_CO; // LINE-CO
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_HAZE; // HAZE
extern const unsigned short int pp__ro_SCROLL_1; // (SCROLL_1
extern const unsigned short int pp__ro_SYSTEM; // (SYSTEM
extern const unsigned short int pp__ro_ORBIT_rc_; // (ORBIT)
extern const unsigned short int pp__ro_PLANET; // (PLANET
extern const unsigned short int pp_LSCAN; // LSCAN
extern const unsigned short int pp_NOF; // NOF
extern LoadDataType ART_dash_NAM; // ART-NAM
extern Color DK_dash_BLUE; // DK-BLUE
extern Color RED; // RED
extern Color BLUE; // BLUE
extern Color PINK; // PINK
extern Color WHITE; // WHITE
extern IFieldType INST_dash_OF; // INST-OF
extern IFieldType INST_dash_QT; // INST-QT
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
extern IFieldType PHRASE; // PHRASE
extern IFieldType TEXT_dash_TE; // TEXT-TE
extern IFieldType PHRASE_do_; // PHRASE$
void COUNT(); // COUNT
void _star__slash_(); // */
void D_plus__dash_(); // D+-
void MAX(); // MAX
void MIN(); // MIN
void _n__gt_(); // #>
void _n_S(); // #S
void _st__n_(); // <#
void SIGN(); // SIGN
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void SPACE(); // SPACE
void MS(); // MS
void NOP(); // NOP
void UNRAVEL(); // UNRAVEL
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void ACELLAD(); // ACELLAD
void A_at_(); // A@
void SETLARR(); // SETLARR
void FULLARR(); // FULLARR
void SETREGI(); // SETREGI
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void GetRECORD(); // @RECORD
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void CDROP(); // CDROP
void CI_i_(); // CI'
void CJ(); // CJ
void IsNULL(); // ?NULL
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void INEXT(); // INEXT
void IPREV(); // IPREV
void ILAST(); // ILAST
void IFIND(); // IFIND
void ALL(); // ALL
void _star_CREATE(); // *CREATE
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void GetCOLOR(); // @COLOR
void _gt_1FONT(); // >1FONT
void _gt_DISPLA(); // >DISPLA
void GetIL(); // @IL
void GetIH(); // @IH
void POINT_gt_I(); // POINT>I
void POS_dot_(); // POS.
void _gt_SSCT(); // >SSCT
void CTERASE(); // CTERASE
void CLICK(); // CLICK
void GetCRS(); // @CRS
void StoreCRS(); // !CRS
void _do__dot_(); // $.
void WUP(); // WUP
void WLINE_dash_U(); // WLINE-U
void WLINE_dash_D(); // WLINE-D
void _gt_BOTT(); // >BOTT
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void TXT_dash_WIN(); // TXT-WIN
void _i_KEY(); // 'KEY
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void CURSORS(); // CURSORS
void _do__ex_(); // $!
void _dash_XTRAIL(); // -XTRAIL
void _gt_XOR(); // >XOR
void MAKE_dash_SC(); // MAKE-SC
void DELETE_dash_(); // DELETE-
void HUFF_gt_(); // HUFF>
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_st_(); // 0<
void TIME(); // TIME
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void _st__ex__gt_(); // <!>
void CI(); // CI
void LPLOT(); // LPLOT
void LXPLOT(); // LXPLOT
void BLT(); // BLT
void _ro_XYSCAN(); // (XYSCAN


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe83f = 0xe83f; // UNK_0xe83f size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xeb35 = 0xeb35; // UNK_0xeb35 size: 26
// {0x56, 0x3a, 0x20, 0x56, 0x4c, 0x22, 0x48, 0xe6, 0x83, 0x4a, 0x33, 0xeb, 0x83, 0x4a, 0x07, 0x40, 0xfa, 0x15, 0x06, 0x00, 0x32, 0x0e, 0xc3, 0x51, 0x90, 0x16}

const unsigned short int pp_UNK_0xeb63 = 0xeb63; // UNK_0xeb63 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xebdb = 0xebdb; // UNK_0xebdb size: 3
// {0x3a, 0x20, 0x05}

const unsigned short int pp_UNK_0xec24 = 0xec24; // UNK_0xec24 size: 3
// {0x3a, 0x20, 0x05}

const unsigned short int pp_UNK_0xf0ac = 0xf0ac; // UNK_0xf0ac size: 150
// {0x3a, 0x20, 0x4c, 0x22, 0x16, 0x16, 0x60, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xf1, 0x9f, 0xaa, 0xf0, 0xae, 0x0b, 0xb8, 0x27, 0x90, 0x16, 0x4c, 0x22, 0x16, 0x16, 0x75, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xf1, 0x9f, 0x20, 0xe6, 0x92, 0x0c, 0xc6, 0xef, 0xe6, 0x06, 0x90, 0x16, 0x4c, 0x22, 0x16, 0x16, 0x97, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xf1, 0x9f, 0x52, 0xf0, 0xb8, 0x27, 0x90, 0x16, 0x4c, 0x22, 0x16, 0x16, 0xb0, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xf1, 0x9f, 0x38, 0xe6, 0x92, 0x0c, 0xe0, 0xef, 0x5d, 0x17, 0x80, 0x04, 0xc4, 0x0f, 0x5d, 0x17, 0x64, 0x00, 0xad, 0x11, 0xb8, 0x27, 0x90, 0x16, 0x4c, 0x22, 0x16, 0x16, 0xce, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xf1, 0x9f, 0x40, 0xe6, 0x92, 0x0c, 0xdd, 0x4a, 0x32, 0x62, 0xae, 0x0b, 0x07, 0x13, 0xf5, 0x12, 0xfa, 0x15, 0x0e, 0x00, 0x16, 0x16, 0xe6, 0x58, 0x02, 0x00, 0x04, 0xe6, 0x60, 0x16, 0x0a, 0x00, 0x16, 0x16, 0xfa, 0x58, 0x02, 0x00, 0x04, 0xe6, 0xe6, 0x06, 0x90, 0x16}


const unsigned short int cc_UNK_0xeae4 = 0xeae4; // UNK_0xeae4
const unsigned short int cc_UNK_0xeae8 = 0xeae8; // UNK_0xeae8
const unsigned short int cc_UNK_0xeaec = 0xeaec; // UNK_0xeaec
const unsigned short int cc_UNK_0xeaf0 = 0xeaf0; // UNK_0xeaf0
const unsigned short int cc_UNK_0xeaf4 = 0xeaf4; // UNK_0xeaf4
const unsigned short int cc_UNK_0xf1e8 = 0xf1e8; // UNK_0xf1e8


// 0xe602: db 0xf4 0x00 '  '

// ================================================
// 0xe604: WORD 'UNK_0xe606' codep=0x224c parp=0xe606 params=2 returns=2
// ================================================

void UNK_0xe606() // UNK_0xe606
{
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+PHRASE_do_.offset); // PHRASE$<IFIELD>
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  Push(0);
  GetDS(); // @DS
  _2OVER(); // 2OVER
  _gt_XOR(); // >XOR
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe620: WORD 'UNK_0xe622' codep=0x7394 parp=0xe622
// ================================================
// orphan
LoadDataType UNK_0xe622 = {PLANETIDX, 0x01, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe628: WORD 'UNK_0xe62a' codep=0x7394 parp=0xe62a
// ================================================
LoadDataType UNK_0xe62a = {PLANETIDX, 0x04, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe630: WORD 'UNK_0xe632' codep=0x7394 parp=0xe632
// ================================================
LoadDataType UNK_0xe632 = {PLANETIDX, 0x07, 0x02, 0x17, 0x6c49};

// ================================================
// 0xe638: WORD 'UNK_0xe63a' codep=0x7394 parp=0xe63a
// ================================================
// orphan
LoadDataType UNK_0xe63a = {PLANETIDX, 0x09, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe640: WORD 'UNK_0xe642' codep=0x7394 parp=0xe642
// ================================================
// orphan
LoadDataType UNK_0xe642 = {PLANETIDX, 0x16, 0x01, 0x17, 0x6c49};

// ================================================
// 0xe648: WORD 'UNK_0xe64a' codep=0x7420 parp=0xe64a
// ================================================
IFieldType UNK_0xe64a = {COMM_MSGIDX, 0x0b, 0x03};

// ================================================
// 0xe64d: WORD 'UNK_0xe64f' codep=0x7420 parp=0xe64f
// ================================================
// orphan
IFieldType UNK_0xe64f = {ENCOUNTERIDX, 0x1c, 0x01};

// ================================================
// 0xe652: WORD 'UNK_0xe654' codep=0x7420 parp=0xe654
// ================================================
IFieldType UNK_0xe654 = {ENCOUNTERIDX, 0x1d, 0x01};

// ================================================
// 0xe657: WORD 'UNK_0xe659' codep=0x7420 parp=0xe659
// ================================================
IFieldType UNK_0xe659 = {ENCOUNTERIDX, 0x1a, 0x01};

// ================================================
// 0xe65c: WORD 'UNK_0xe65e' codep=0x7420 parp=0xe65e
// ================================================
IFieldType UNK_0xe65e = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xe661: WORD 'UNK_0xe663' codep=0x7394 parp=0xe663
// ================================================
LoadDataType UNK_0xe663 = {TRADERSIDX, 0x00, 0x10, 0x32, 0x6ad1};

// ================================================
// 0xe669: WORD 'UNK_0xe66b' codep=0x7394 parp=0xe66b
// ================================================
LoadDataType UNK_0xe66b = {TRADERSIDX, 0x13, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe671: WORD 'UNK_0xe673' codep=0x7394 parp=0xe673
// ================================================
// orphan
LoadDataType UNK_0xe673 = {TRADERSIDX, 0x1d, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe679: WORD 'UNK_0xe67b' codep=0x7394 parp=0xe67b
// ================================================
// orphan
LoadDataType UNK_0xe67b = {TRADERSIDX, 0x1f, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe681: WORD 'UNK_0xe683' codep=0x7394 parp=0xe683
// ================================================
// orphan
LoadDataType UNK_0xe683 = {TRADERSIDX, 0x20, 0x01, 0x32, 0x6ad1};

// ================================================
// 0xe689: WORD 'UNK_0xe68b' codep=0x7394 parp=0xe68b
// ================================================
// orphan
LoadDataType UNK_0xe68b = {TRADERSIDX, 0x21, 0x01, 0x32, 0x6ad1};
// 0xe691: db 0x94 0x73 0x15 0x22 0x01 0x32 0xd1 0x6a 0x94 0x73 0x15 0x23 0x01 0x32 0xd1 0x6a 0x94 0x73 0x18 0x00 0x03 0x00 0x00 0x00 ' s " 2 j s # 2 j s      '

// ================================================
// 0xe6a9: WORD 'UNK_0xe6ab' codep=0x7394 parp=0xe6ab
// ================================================
LoadDataType UNK_0xe6ab = {ELEMENTIDX, 0x00, 0x10, 0x17, 0x6ba9};

// ================================================
// 0xe6b1: WORD 'UNK_0xe6b3' codep=0x7420 parp=0xe6b3
// ================================================
IFieldType UNK_0xe6b3 = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xe6b6: WORD 'UNK_0xe6b8' codep=0x7420 parp=0xe6b8
// ================================================
// orphan
IFieldType UNK_0xe6b8 = {CREWMEMBERIDX, 0x20, 0x02};

// ================================================
// 0xe6bb: WORD 'UNK_0xe6bd' codep=0x7394 parp=0xe6bd
// ================================================
LoadDataType UNK_0xe6bd = {CREATUREIDX, 0x00, 0x14, 0x22, 0x6f07};

// ================================================
// 0xe6c3: WORD 'UNK_0xe6c5' codep=0x7394 parp=0xe6c5
// ================================================
LoadDataType UNK_0xe6c5 = {CREATUREIDX, 0x17, 0x03, 0x22, 0x6f07};

// ================================================
// 0xe6cb: WORD 'UNK_0xe6cd' codep=0x7394 parp=0xe6cd
// ================================================
LoadDataType UNK_0xe6cd = {CREATUREIDX, 0x1f, 0x01, 0x22, 0x6f07};

// ================================================
// 0xe6d3: WORD 'UNK_0xe6d5' codep=0x7420 parp=0xe6d5
// ================================================
// orphan
IFieldType UNK_0xe6d5 = {CREATUREIDX, 0x17, 0x01};

// ================================================
// 0xe6d8: WORD 'UNK_0xe6da' codep=0x224c parp=0xe6da params=1 returns=0
// ================================================
// orphan

void UNK_0xe6da() // UNK_0xe6da
{
  Push(0x001c);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe6f0: WORD 'APAUSE' codep=0x224c parp=0xe6fb
// ================================================
// entry

void APAUSE() // APAUSE
{
  unsigned short int a, b;
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  GetCOLOR(); // @COLOR
  a = Pop(); // >R
  Push(Read16(pp_IsON_dash_PLA)); // ?ON-PLA @
  b = Pop(); // >R
  Push(b); // I
  if (Pop() != 0)
  {
    GetColor(PINK);
  } else
  {
    GetColor(BLUE);
  }
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    Pop(); // DROP
    GetColor(WHITE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+
  do
  {
    TIME(); // TIME
    _2_at_(); // 2@
    _2OVER(); // 2OVER
    D_gt_(); // D>
    _i_KEY(); // 'KEY
    Push(Read16(regsp)); // DUP
    _ro_XYSCAN(); // (XYSCAN case
    Pop(); Pop(); // 2DROP
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(b); // I
  if (Pop() != 0)
  {
    GetColor(RED);
  } else
  {
    GetColor(DK_dash_BLUE);
  }
  StoreCOLOR(); // !COLOR
  TXT_dash_WIN(); // TXT-WIN
  Pop(); Pop(); // 2DROP
  Push(b); // R>
  Pop(); // DROP
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe763: WORD 'UNK_0xe765' codep=0x224c parp=0xe765
// ================================================

void UNK_0xe765() // UNK_0xe765
{
  Push(0x4e20); Push(0x0000);
  APAUSE(); // APAUSE
}


// ================================================
// 0xe76f: WORD 'UNK_0xe771' codep=0x224c parp=0xe771 params=0 returns=0
// ================================================

void UNK_0xe771() // UNK_0xe771
{
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
  Push(Read16(pp_LINE_dash_CO)); // LINE-CO @
  Push(Read16(pp_WLINES)); // WLINES @
  _gt_(); // >
  if (Pop() == 0) return;
  UNK_0xe765(); // UNK_0xe765
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
}


// ================================================
// 0xe78d: WORD 'UNK_0xe78f' codep=0x224c parp=0xe78f
// ================================================

void UNK_0xe78f() // UNK_0xe78f
{
  UNK_0xe771(); // UNK_0xe771
  WUP(); // WUP
}


// ================================================
// 0xe795: WORD 'UNK_0xe797' codep=0x224c parp=0xe797
// ================================================

void UNK_0xe797() // UNK_0xe797
{
  unsigned short int i, imax, a;
  _2DUP(); // 2DUP
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push((Read16(Pop())&0xFF)==Read16(cc_BL)?1:0); //  C@ BL =
    if (Pop() != 0)
    {
      Push(Pop() + 1); //  1+
    } else
    {
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  a = Pop(); // >R
  SWAP(); // SWAP
  Push(Pop() - a); //  I -
  Push(Pop() + Pop()); // +
  Push(a); // R>
  SWAP(); // SWAP
}


// ================================================
// 0xe7c5: WORD 'UNK_0xe7c7' codep=0x224c parp=0xe7c7
// ================================================
// orphan

void UNK_0xe7c7() // UNK_0xe7c7
{
  Push(0);
  SWAP(); // SWAP
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  D_plus__dash_(); // D+-
  _st__n_(); // <#
  _n_S(); // #S
  ROT(); // ROT
  SIGN(); // SIGN
  _n__gt_(); // #>
}


// ================================================
// 0xe7dd: WORD 'UNK_0xe7df' codep=0x224c parp=0xe7df
// ================================================

void UNK_0xe7df() // UNK_0xe7df
{
  unsigned short int i, imax;
  UNK_0xe797(); // UNK_0xe797
  _2DUP(); // 2DUP
  Push(Pop() + 1); //  1+
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0);
  ROT(); // ROT
  ROT(); // ROT

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(((Read16(i)&0xFF)==Read16(cc_BL)?1:0) | (i + 1==imax?1:0)); // I C@ BL = I 1+ I' = OR
    if (Pop() != 0)
    {
      Pop(); // DROP
      Push(i); // I
      Push(3);
      PICK(); // PICK
      _dash_(); // -
      imax = i; // LEAVE
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(Read16(regsp)); // DUP
  Push(4);
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  Push(Pop() + 1); //  1+
  ROT(); // ROT
  Push(3);
  PICK(); // PICK
  _dash_(); // -
  Push(Pop() - 1); //  1-
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe831: WORD 'UNK_0xe833' codep=0x224c parp=0xe833 params=2 returns=2
// ================================================

void UNK_0xe833() // UNK_0xe833
{
  Push(Pop() - 1); //  1-
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
}


// ================================================
// 0xe83d: WORD 'UNK_0xe83f' codep=0x1d29 parp=0xe83f
// ================================================
// 0xe83f: db 0x3a 0x20 ': '

// ================================================
// 0xe841: WORD 'UNK_0xe843' codep=0x224c parp=0xe843 params=1 returns=1
// ================================================

void UNK_0xe843() // UNK_0xe843
{
  Push(Pop() + Read16(pp_CTX)); //  CTX @ +
  Push(Read16(pp_WCHARS)); // WCHARS @
  _st_(); // <
}


// ================================================
// 0xe851: WORD 'UNK_0xe853' codep=0x224c parp=0xe853 params=2 returns=0
// ================================================

void UNK_0xe853() // UNK_0xe853
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    UNK_0xe843(); // UNK_0xe843
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      UNK_0xe78f(); // UNK_0xe78f
      _gt_BOTT(); // >BOTT
      Push(pp_CTX); // CTX
      _099(); // 099
    }
    OVER(); // OVER
    Push(!(((Read16(Pop())&0xFF)==0x002e?1:0) | (Read16(pp_CTX)==0?1:0))); //  C@ 0x002e = CTX @ 0= OR NOT
    if (Pop() != 0)
    {
      SPACE(); // SPACE
    }
    Push(Read16(regsp)); // DUP
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(Read16(pp_UNK_0xe83f)); // UNK_0xe83f @
    if (Pop() != 0)
    {
      Push(0xfffc);
      Push(pp_XBLT); // XBLT
      _plus__ex__2(); // +!_2
      Push(pp_UNK_0xe83f); // UNK_0xe83f
      _099(); // 099
    }
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xe8a9: WORD 'UNK_0xe8ab' codep=0x224c parp=0xe8ab params=0 returns=1
// ================================================
// orphan

void UNK_0xe8ab() // UNK_0xe8ab
{
  GetINST_dash_S(); // @INST-S
  Push(Pop()==0?1:0); //  0=
}


// ================================================
// 0xe8b1: WORD 'UNK_0xe8b3' codep=0x224c parp=0xe8b3 params=1 returns=1
// ================================================
// orphan

void UNK_0xe8b3() // UNK_0xe8b3
{
  unsigned short int a;
  Push(Read16(0x65e1+UNK_0xe6b8.offset)); // UNK_0xe6b8<IFIELD> @
  a = Pop(); // >R
  UNK_0xe8ab(); // UNK_0xe8ab
  Push(Read16(a)); // R@
  Push(Pop() & 1); //  1 AND
  Push(Read16(a)); // R@
  Push(!(Pop() & 2)); //  2 AND NOT
  Push(Read16(a)); // R@
  Push(Pop() & 8); //  8 AND
  _gt_FLAG(); // >FLAG
  Push(Read16(a)); // R@
  Push(!(Pop() & 0x0010) | (Read16(pp_CONTEXT_3)==0?1:0)); //  0x0010 AND NOT CONTEXT_3 @ 0= OR
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  Push(Pop() + Pop()); // +
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe8f3: WORD 'UNK_0xe8f5' codep=0x224c parp=0xe8f5
// ================================================

void UNK_0xe8f5() // UNK_0xe8f5
{
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0);
  Push(0xe8b3); // probable 'UNK_0xe8b3'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xe909: WORD 'UNK_0xe90b' codep=0x224c parp=0xe90b params=0 returns=0
// ================================================
// orphan

void UNK_0xe90b() // UNK_0xe90b
{
  Push(0);
  UNK_0xe8b3(); // UNK_0xe8b3
  if (Pop() == 0) return;
  Push(0x65e1+UNK_0xe6b3.offset); // UNK_0xe6b3<IFIELD>
  COUNT(); // COUNT
  UNK_0xe853(); // UNK_0xe853
  Push(pp_UNK_0xe83f); // UNK_0xe83f
  ON_2(); // ON_2
  UNK_0xe8f5(); // UNK_0xe8f5
  Push(1);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(Read16(regsp)); // DUP
    Push(Pop()==2?1:0); //  2 =
    if (Pop() != 0)
    {
      SET_STR_AS_PARAM(" AND ");
      UNK_0xe853(); // UNK_0xe853
    } else
    {
      Push(Read16(regsp)); // DUP
      Push(1);
      _gt_(); // >
      if (Pop() != 0)
      {
        SET_STR_AS_PARAM(", ");
        UNK_0xe853(); // UNK_0xe853
      }
    }
  }
  Push(Pop() - 1); //  1-
}


// ================================================
// 0xe954: WORD 'UNK_0xe956' codep=0x224c parp=0xe956
// ================================================

void UNK_0xe956() // UNK_0xe956
{
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xe8f5(); // UNK_0xe8f5
  Push(0xe90b); // probable 'UNK_0xe90b'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  Pop(); // DROP
  UNK_0xe833(); // UNK_0xe833
  Push(0);
}


// ================================================
// 0xe970: WORD 'UNK_0xe972' codep=0x224c parp=0xe972
// ================================================

void UNK_0xe972() // UNK_0xe972
{
  UNK_0xe8f5(); // UNK_0xe8f5
  Push(Pop() - 1); //  1-
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("ARE");
    return;
  }
  SET_STR_AS_PARAM("IS");
}


// ================================================
// 0xe98b: WORD 'UNK_0xe98d' codep=0x224c parp=0xe98d
// ================================================

void UNK_0xe98d() // UNK_0xe98d
{
  UNK_0xe8f5(); // UNK_0xe8f5
  Push(Pop() - 1); //  1-
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("HAVE");
    return;
  }
  SET_STR_AS_PARAM("HAS");
}


// ================================================
// 0xe9a8: WORD 'UNK_0xe9aa' codep=0x224c parp=0xe9aa
// ================================================

void UNK_0xe9aa() // UNK_0xe9aa
{
  UNK_0xe8f5(); // UNK_0xe8f5
  Push(Pop() - 1); //  1-
  if (Pop() == 0) return;
  SET_STR_AS_PARAM("S");
}


// ================================================
// 0xe9b8: WORD 'UNK_0xe9ba' codep=0x224c parp=0xe9ba params=2 returns=3
// ================================================

void UNK_0xe9ba() // UNK_0xe9ba
{
  CJ(); // CJ
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+UNK_0xe6b3.offset); // UNK_0xe6b3<IFIELD>
  COUNT(); // COUNT
  UNK_0xe853(); // UNK_0xe853
  ICLOSE(); // ICLOSE
  UNK_0xe833(); // UNK_0xe833
  Push(0);
}


// ================================================
// 0xe9cc: WORD 'UNK_0xe9ce' codep=0x224c parp=0xe9ce params=1 returns=1
// ================================================
// orphan

void UNK_0xe9ce() // UNK_0xe9ce
{
  Pop(); // DROP
  Push(0);
}


// ================================================
// 0xe9d4: WORD '>SPECIAL' codep=0x4b3b parp=0xe9e1
// ================================================

void _gt_SPECIAL() // >SPECIAL
{
  switch(Pop()) // >SPECIAL
  {
  case 37:
    UNK_0xe956(); // UNK_0xe956
    break;
  case 47:
    UNK_0xe972(); // UNK_0xe972
    break;
  case 35:
    UNK_0xe98d(); // UNK_0xe98d
    break;
  case 43:
    UNK_0xe9aa(); // UNK_0xe9aa
    break;
  case 42:
    UNK_0xe9ba(); // UNK_0xe9ba
    break;
  default:
    Push(0);
    break;

  }
}

// ================================================
// 0xe9f9: WORD 'UNK_0xe9fb' codep=0x224c parp=0xe9fb
// ================================================

void UNK_0xe9fb() // UNK_0xe9fb
{
  unsigned short int a;
  Push(pp_UNK_0xe83f); // UNK_0xe83f
  _099(); // 099
  GetCOLOR(); // @COLOR
  a = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(Pop()==1?1:0); //  1 =
  Push(pp_HAZE); // HAZE
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    OVER(); // OVER
    Push(Read16(Pop())&0xFF); //  C@
    _gt_SPECIAL(); // >SPECIAL case
  } else
  {
    Push(0);
  }
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    UNK_0xe853(); // UNK_0xe853
    UNK_0xe833(); // UNK_0xe833
  }
  Push(a); // R>
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xea31: WORD 'UNK_0xea33' codep=0x224c parp=0xea33
// ================================================

void UNK_0xea33() // UNK_0xea33
{
  _gt_BOTT(); // >BOTT
  UNK_0xe78f(); // UNK_0xe78f
  do
  {
    UNK_0xe7df(); // UNK_0xe7df
    UNK_0xe9fb(); // UNK_0xe9fb
    UNK_0xe853(); // UNK_0xe853
    Push(1);
    Push(pp_CTX); // CTX
    _plus__ex__2(); // +!_2
    Push(Read16(regsp)); // DUP
    _0_st_(); // 0<
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xea4f: WORD 'UNK_0xea51' codep=0x224c parp=0xea51
// ================================================

void UNK_0xea51() // UNK_0xea51
{
  Push(pp_CTX); // CTX
  _099(); // 099
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  Push(0x65e1+PHRASE.offset); // PHRASE<IFIELD>
  COUNT(); // COUNT
  HUFF_gt_(); // HUFF>
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  UNK_0xea33(); // UNK_0xea33
}


// ================================================
// 0xea67: WORD '.PHRASE' codep=0x224c parp=0xea73 params=0 returns=0
// ================================================
// entry

void DrawPHRASE() // .PHRASE
{
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _gt_1FONT(); // >1FONT
  UNK_0xea51(); // UNK_0xea51
}


// ================================================
// 0xea81: WORD 'UNK_0xea83' codep=0x224c parp=0xea83 params=0 returns=0
// ================================================

void UNK_0xea83() // UNK_0xea83
{
  ILAST(); // ILAST
  CI(); // CI
  CI_i_(); // CI'
  _gt_C_plus_S(); // >C+S
  Push(0x65e1+INST_dash_OF.offset); // INST-OF<IFIELD>
  _1_dot_5_ex__2(); // 1.5!_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xea93: WORD '.APHRASE' codep=0x224c parp=0xeaa0 params=2 returns=0
// ================================================
// entry

void DrawAPHRASE() // .APHRASE
{
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  DrawPHRASE(); // .PHRASE
  UNK_0xea83(); // UNK_0xea83
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeaae: WORD 'UNK_0xeab0' codep=0x224c parp=0xeab0 params=2 returns=1
// ================================================
// orphan

void UNK_0xeab0() // UNK_0xeab0
{
  Push(0x0064);
  _star__slash_(); // */
}


// ================================================
// 0xeab8: WORD 'UNK_0xeaba' codep=0x224c parp=0xeaba params=0 returns=1
// ================================================
// orphan

void UNK_0xeaba() // UNK_0xeaba
{
  Push(0);
  Push(0x0100);
  RRND(); // RRND
}


// ================================================
// 0xeac4: WORD 'UNK_0xeac6' codep=0x224c parp=0xeac6 params=0 returns=1
// ================================================
// orphan

void UNK_0xeac6() // UNK_0xeac6
{
  Push(0);
  Push(2);
  RRND(); // RRND
}


// ================================================
// 0xeace: WORD 'UNK_0xead0' codep=0x224c parp=0xead0 params=0 returns=1
// ================================================
// orphan

void UNK_0xead0() // UNK_0xead0
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xeada: WORD 'UNK_0xeadc' codep=0x224c parp=0xeadc params=3 returns=1
// ================================================
// orphan

void UNK_0xeadc() // UNK_0xeadc
{
  MIN(); // MIN
  MAX(); // MAX
}


// ================================================
// 0xeae2: WORD 'UNK_0xeae4' codep=0x2214 parp=0xeae4
// ================================================
// 0xeae4: dw 0x000a

// ================================================
// 0xeae6: WORD 'UNK_0xeae8' codep=0x2214 parp=0xeae8
// ================================================
// 0xeae8: dw 0x0011

// ================================================
// 0xeaea: WORD 'UNK_0xeaec' codep=0x2214 parp=0xeaec
// ================================================
// 0xeaec: dw 0x0029

// ================================================
// 0xeaee: WORD 'UNK_0xeaf0' codep=0x2214 parp=0xeaf0
// ================================================
// 0xeaf0: dw 0x002a

// ================================================
// 0xeaf2: WORD 'UNK_0xeaf4' codep=0x2214 parp=0xeaf4
// ================================================
// 0xeaf4: dw 0x002b

// ================================================
// 0xeaf6: WORD 'RACE>TRA' codep=0x4b3b parp=0xeb03
// ================================================

void RACE_gt_TRA() // RACE>TRA
{
  switch(Pop()) // RACE>TRA
  {
  case 1:
    Push(1);
    break;
  case 2:
    Push(2);
    break;
  case 8:
    Push(3);
    break;
  case 11:
    Push(Read16(cc_UNK_0xeaf4)); // UNK_0xeaf4
    break;
  case 10:
    Push(6);
    break;
  case 4:
    Push(8);
    break;
  case 5:
    Push(9);
    break;
  case 7:
    Push(Read16(cc_UNK_0xeae4)); // UNK_0xeae4
    break;
  case 6:
    Push(Read16(cc_UNK_0xeae8)); // UNK_0xeae8
    break;
  case 18:
    Push(Read16(cc_UNK_0xeaec)); // UNK_0xeaec
    break;
  case 19:
    Push(Read16(cc_UNK_0xeaf0)); // UNK_0xeaf0
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xeb33: WORD 'UNK_0xeb35' codep=0x1d29 parp=0xeb35
// ================================================
// 0xeb35: db 0x56 0x3a 0x20 0x56 0x4c 0x22 0x48 0xe6 0x83 0x4a 0x33 0xeb 0x83 0x4a 0x07 0x40 0xfa 0x15 0x06 0x00 0x32 0x0e 0xc3 0x51 0x90 0x16 'V: VL"H  J3  J @    2  Q  '

// ================================================
// 0xeb4f: WORD 'UNK_0xeb51' codep=0x224c parp=0xeb51
// ================================================

void UNK_0xeb51() // UNK_0xeb51
{
  Push(Read16(cc_FALSE)); // FALSE
  Push2Words("*MESS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0xeb3b);
  ALL(); // ALL
}


// ================================================
// 0xeb61: WORD 'UNK_0xeb63' codep=0x1d29 parp=0xeb63
// ================================================
// 0xeb63: db 0x3a 0x20 ': '

// ================================================
// 0xeb65: WORD 'UNK_0xeb67' codep=0x224c parp=0xeb67
// ================================================

void UNK_0xeb67() // UNK_0xeb67
{
  UNK_0xeb51(); // UNK_0xeb51
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label1;
  Push(Read16(cc_UNK_0xeaf4)); // UNK_0xeaf4
  Push(Read16(pp_UNK_0xeb63)); // UNK_0xeb63 @
  Push(1);
  _star_CREATE(); // *CREATE
  Push(pp_UNK_0xeb35); // UNK_0xeb35
  _1_dot_5_at_(); // 1.5@
  Push(0x65e1+UNK_0xe64a.offset); // UNK_0xe64a<IFIELD>
  _1_dot_5_ex__2(); // 1.5!_2
  goto label1;

  label1:
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xeb8b: WORD 'UNK_0xeb8d' codep=0x224c parp=0xeb8d
// ================================================

void UNK_0xeb8d() // UNK_0xeb8d
{
  unsigned short int a;
  a = Pop(); // >R
  GetCRS(); // @CRS
  Push(3);
  Push(a); // R>
  POS_dot_(); // POS.
  CURSORS(); // CURSORS
  Push(pp_ABLT); // ABLT
  _st__ex__gt_(); // <!>
  Push(7);
  Push(pp_LBLT); // LBLT
  _st__ex__gt_(); // <!>
  Push(0x0099);
  Push(pp_WBLT); // WBLT
  _st__ex__gt_(); // <!>
  GetColor(DK_dash_BLUE);
  StoreCOLOR(); // !COLOR
  Push(1);
  Push(pp_XORMODE); // XORMODE
  _st__ex__gt_(); // <!>
  BLT(); // BLT
  StoreCRS(); // !CRS
  Push(pp_XORMODE); // XORMODE
  OFF_2(); // OFF_2
}


// ================================================
// 0xebbf: WORD 'UNK_0xebc1' codep=0x224c parp=0xebc1
// ================================================

void UNK_0xebc1() // UNK_0xebc1
{
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  UNK_0xeb8d(); // UNK_0xeb8d
}


// ================================================
// 0xebcb: WORD 'UNK_0xebcd' codep=0x224c parp=0xebcd
// ================================================

void UNK_0xebcd() // UNK_0xebcd
{
  RACE_gt_TRA(); // RACE>TRA case
  Push(0x0015);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
}


// ================================================
// 0xebd9: WORD 'UNK_0xebdb' codep=0x1d29 parp=0xebdb
// ================================================
// 0xebdb: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xebde: WORD 'UNK_0xebe0' codep=0x224c parp=0xebe0 params=0 returns=0
// ================================================

void UNK_0xebe0() // UNK_0xebe0
{
  CI(); // CI
  Push(pp_UNK_0xebdb); // UNK_0xebdb
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xebe8: WORD 'UNK_0xebea' codep=0x224c parp=0xebea params=0 returns=2
// ================================================

void UNK_0xebea() // UNK_0xebea
{
  Push(pp_UNK_0xebdb); // UNK_0xebdb
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xebf0: WORD 'UNK_0xebf2' codep=0x224c parp=0xebf2 params=0 returns=0
// ================================================

void UNK_0xebf2() // UNK_0xebf2
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
}


// ================================================
// 0xebfa: WORD 'UNK_0xebfc' codep=0x224c parp=0xebfc params=0 returns=0
// ================================================

void UNK_0xebfc() // UNK_0xebfc
{
  UNK_0xebf2(); // UNK_0xebf2
  CDROP(); // CDROP
  UNK_0xebea(); // UNK_0xebea
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  UNK_0xebe0(); // UNK_0xebe0
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec0e: WORD 'UNK_0xec10' codep=0x224c parp=0xec10 params=0 returns=0
// ================================================

void UNK_0xec10() // UNK_0xec10
{
  UNK_0xebf2(); // UNK_0xebf2
  CDROP(); // CDROP
  UNK_0xebea(); // UNK_0xebea
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  UNK_0xebe0(); // UNK_0xebe0
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec22: WORD 'UNK_0xec24' codep=0x1d29 parp=0xec24
// ================================================
// 0xec24: db 0x3a 0x20 0x05 ':  '

// ================================================
// 0xec27: WORD 'UNK_0xec29' codep=0x224c parp=0xec29 params=0 returns=0
// ================================================

void UNK_0xec29() // UNK_0xec29
{
  CI(); // CI
  Push(pp_UNK_0xec24); // UNK_0xec24
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xec31: WORD 'UNK_0xec33' codep=0x224c parp=0xec33 params=0 returns=2
// ================================================

void UNK_0xec33() // UNK_0xec33
{
  Push(pp_UNK_0xec24); // UNK_0xec24
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0xec39: WORD 'UNK_0xec3b' codep=0x224c parp=0xec3b params=0 returns=0
// ================================================

void UNK_0xec3b() // UNK_0xec3b
{
  UNK_0xebf2(); // UNK_0xebf2
  CDROP(); // CDROP
  UNK_0xec33(); // UNK_0xec33
  _gt_C_plus_S(); // >C+S
  INEXT(); // INEXT
  UNK_0xec29(); // UNK_0xec29
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec4d: WORD 'UNK_0xec4f' codep=0x224c parp=0xec4f params=0 returns=0
// ================================================

void UNK_0xec4f() // UNK_0xec4f
{
  UNK_0xebf2(); // UNK_0xebf2
  CDROP(); // CDROP
  UNK_0xec33(); // UNK_0xec33
  _gt_C_plus_S(); // >C+S
  IPREV(); // IPREV
  UNK_0xec29(); // UNK_0xec29
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec61: WORD 'UNK_0xec63' codep=0x224c parp=0xec63
// ================================================

void UNK_0xec63() // UNK_0xec63
{
  Push2Words("*MESS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(Read16(cc_UNK_0xeaf4)); // UNK_0xeaf4
  SWAP(); // SWAP
  IFIND(); // IFIND
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec75: WORD 'UNK_0xec77' codep=0x224c parp=0xec77
// ================================================

void UNK_0xec77() // UNK_0xec77
{
  UNK_0xebf2(); // UNK_0xebf2
  Push(0x0038);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xec87: WORD 'UNK_0xec89' codep=0x224c parp=0xec89
// ================================================

void UNK_0xec89() // UNK_0xec89
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0x0038);
  OVER(); // OVER
  Push(1);
  _star_CREATE(); // *CREATE
  UNK_0xebcd(); // UNK_0xebcd
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  Push(0x0026);
  Push(Read16(cc_BL)); // BL
  FILL_2(); // FILL_2
  Push((0x65e1+TEXT_dash_TE.offset) + 1); // TEXT-TE<IFIELD> 1+
  Push(0x0010);
  CMOVE_2(); // CMOVE_2
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push(1);
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xecbb: WORD 'UNK_0xecbd' codep=0x224c parp=0xecbd
// ================================================

void UNK_0xecbd() // UNK_0xecbd
{
  unsigned short int i, imax, a;
  MAKE_dash_SC(); // MAKE-SC
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  Push(pp_SCROLL_dash_); // SCROLL-
  _099(); // 099
  Push(1);
  Push(2);
  Push(6);
  Push(4);
  Push(7);
  Push(0x0012);
  Push(Read16(cc_UNK_0xeae4)); // UNK_0xeae4
  Push(8);
  Push(0x000b);
  Push(0x0013);
  Push(5);
  Push(0x000b);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    a = Pop(); // >R
    Push(Read16(a)); // R@
    UNK_0xec63(); // UNK_0xec63
    if (Pop() != 0)
    {
      Push(Read16(a)); // R@
      UNK_0xec77(); // UNK_0xec77
      Push(!Pop()); //  NOT
      if (Pop() != 0)
      {
        Push(Read16(a)); // R@
        UNK_0xec89(); // UNK_0xec89
      }
    }
    Push(a); // R>
    Pop(); // DROP
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xed0d: WORD 'UNK_0xed0f' codep=0x224c parp=0xed0f params=0 returns=0
// ================================================

void UNK_0xed0f() // UNK_0xed0f
{
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  _do__dot_(); // $.
}


// ================================================
// 0xed15: WORD 'UNK_0xed17' codep=0x224c parp=0xed17
// ================================================

void UNK_0xed17() // UNK_0xed17
{
  unsigned short int i, imax;
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(Read16(pp_WLINES)); // WLINES @
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  MIN(); // MIN
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_WLEFT)); // WLEFT @
    Push((Read16(pp_WTOP) - 2) - i * 7); // WTOP @ 2 - I 7 * -
    POS_dot_(); // POS.
    UNK_0xed0f(); // UNK_0xed0f
    INEXT(); // INEXT
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xed49: WORD 'UNK_0xed4b' codep=0x224c parp=0xed4b
// ================================================

void UNK_0xed4b() // UNK_0xed4b
{
  UNK_0xebf2(); // UNK_0xebf2
  UNK_0xebe0(); // UNK_0xebe0
  UNK_0xed17(); // UNK_0xed17
  IPREV(); // IPREV
  UNK_0xec29(); // UNK_0xec29
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xed5b: WORD 'UNK_0xed5d' codep=0x224c parp=0xed5d
// ================================================

void UNK_0xed5d() // UNK_0xed5d
{
  Push(0x53a4); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  DrawTTY(); // .TTY
}


// ================================================
// 0xed69: WORD 'UNK_0xed6b' codep=0x224c parp=0xed6b
// ================================================

void UNK_0xed6b() // UNK_0xed6b
{
  UNK_0xebc1(); // UNK_0xebc1
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xed73: WORD 'UNK_0xed75' codep=0x224c parp=0xed75
// ================================================

void UNK_0xed75() // UNK_0xed75
{
  _gt_SSCT(); // >SSCT
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  UNK_0xed5d(); // UNK_0xed5d
  Push(Read16(pp_SCROLL_dash_)); // SCROLL- @
  Push(Read16(pp_WLINES) - 1); // WLINES @ 1-
  MIN(); // MIN
  Push(pp_WLINES); // WLINES
  Store_2(); // !_2
  Push(Read16(pp_WTOP) - Read16(pp_WLINES) * 7); // WTOP @ WLINES @ 7 * -
  Push(pp_WBOTTOM); // WBOTTOM
  Store_2(); // !_2
  UNK_0xed4b(); // UNK_0xed4b
  UNK_0xed6b(); // UNK_0xed6b
}


// ================================================
// 0xeda5: WORD 'UNK_0xeda7' codep=0x224c parp=0xeda7 params=0 returns=1
// ================================================

void UNK_0xeda7() // UNK_0xeda7
{
  Push(pp__ro_SCROLL_1); // (SCROLL_1
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xedb7: WORD 'UNK_0xedb9' codep=0x224c parp=0xedb9
// ================================================

void UNK_0xedb9() // UNK_0xedb9
{
  CLICK(); // CLICK
  UNK_0xebfc(); // UNK_0xebfc
  UNK_0xec3b(); // UNK_0xec3b
  UNK_0xec33(); // UNK_0xec33
  _gt_C_plus_S(); // >C+S
  UNK_0xed6b(); // UNK_0xed6b
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  WLINE_dash_U(); // WLINE-U
  UNK_0xed6b(); // UNK_0xed6b
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedcf: WORD 'UNK_0xedd1' codep=0x224c parp=0xedd1
// ================================================

void UNK_0xedd1() // UNK_0xedd1
{
  CLICK(); // CLICK
  UNK_0xec10(); // UNK_0xec10
  UNK_0xec4f(); // UNK_0xec4f
  UNK_0xebea(); // UNK_0xebea
  _gt_C_plus_S(); // >C+S
  UNK_0xed6b(); // UNK_0xed6b
  Push(-2);
  Push(pp_WTOP); // WTOP
  _plus__ex__2(); // +!_2
  Push(0x65e1+TEXT_dash_TE.offset); // TEXT-TE<IFIELD>
  WLINE_dash_D(); // WLINE-D
  Push(2);
  Push(pp_WTOP); // WTOP
  _plus__ex__2(); // +!_2
  UNK_0xed6b(); // UNK_0xed6b
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xedf3: WORD 'RACE-SCR' codep=0x4b3b parp=0xee00
// ================================================

void RACE_dash_SCR() // RACE-SCR
{
  switch(Pop()) // RACE-SCR
  {
  case 65535:
    UNK_0xedd1(); // UNK_0xedd1
    break;
  case 1:
    UNK_0xedb9(); // UNK_0xedb9
    break;
  default:
    NOP(); // NOP
    break;

  }
}

// ================================================
// 0xee0c: WORD 'UNK_0xee0e' codep=0x224c parp=0xee0e
// ================================================

void UNK_0xee0e() // UNK_0xee0e
{
  UNK_0xecbd(); // UNK_0xecbd
  UNK_0xeda7(); // UNK_0xeda7
  if (Pop() == 0) goto label1;
  UNK_0xed75(); // UNK_0xed75
  UNK_0xebf2(); // UNK_0xebf2
  do
  {
    XYSCAN(); // XYSCAN
    Push(Pop()==0?1:0); //  0=
    if (Pop() != 0)
    {
      RACE_dash_SCR(); // RACE-SCR case
    } else
    {
      Pop(); // DROP
    }
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
  UNK_0xebea(); // UNK_0xebea
  _gt_C_plus_S(); // >C+S
  GetINST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  goto label1;

  label1:
  Push(2);
  _star_CLOSE(); // *CLOSE
  DELETE_dash_(); // DELETE-
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
  _gt_SSCT(); // >SSCT
  CTERASE(); // CTERASE
}


// ================================================
// 0xee4c: WORD 'UNK_0xee4e' codep=0x224c parp=0xee4e params=0 returns=1
// ================================================
// orphan

void UNK_0xee4e() // UNK_0xee4e
{
  Push(Read16(pp_PAST)); // PAST @
  _gt_FLAG(); // >FLAG
  Push(Read16(0x65e1+UNK_0xe64f.offset)&0xFF); // UNK_0xe64f<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(!Read16(pp_PAST)); // PAST @ NOT
  Push(Read16(0x65e1+UNK_0xe654.offset)&0xFF); // UNK_0xe654<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Read16(0x65e1+UNK_0xe659.offset)&0xFF); // UNK_0xe659<IFIELD> C@
  if (Pop() != 0)
  {
    CI(); // CI
    Push(Pop() | Pop()); // OR
    Push(Pop() & Read16(pp_STARDAT)); //  STARDAT @ AND
    _gt_FLAG(); // >FLAG
    Push(Pop() & Pop()); // AND
  }
  Push(Pop() & (Read16(0x65e1+UNK_0xe65e.offset)&0xFF)); //  UNK_0xe65e<IFIELD> C@ AND
}


// ================================================
// 0xee8a: WORD 'UNK_0xee8c' codep=0x224c parp=0xee8c params=0 returns=2
// ================================================

void UNK_0xee8c() // UNK_0xee8c
{
  Push(0x5400); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xee96: WORD '?COMSG' codep=0x224c parp=0xeea1
// ================================================
// entry

void IsCOMSG() // ?COMSG
{
  if (Pop() != 0)
  {
    UNK_0xee0e(); // UNK_0xee0e
    _gt_SSCT(); // >SSCT
    CTINIT(); // CTINIT
    Push(pp_LINE_dash_CO); // LINE-CO
    _099(); // 099
    return;
  }
  Push(pp_UNK_0xeb63); // UNK_0xeb63
  Store_2(); // !_2
  Push(pp_UNK_0xeb35); // UNK_0xeb35
  _1_dot_5_ex__2(); // 1.5!_2
  UNK_0xeb67(); // UNK_0xeb67
}


// ================================================
// 0xeebf: WORD 'UNK_0xeec1' codep=0x224c parp=0xeec1 params=0 returns=2
// ================================================

void UNK_0xeec1() // UNK_0xeec1
{
  Push(0x5478); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xeecb: WORD 'UNK_0xeecd' codep=0x224c parp=0xeecd params=0 returns=2
// ================================================

void UNK_0xeecd() // UNK_0xeecd
{
  Push(0x54c0); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xeed7: WORD 'UNK_0xeed9' codep=0x224c parp=0xeed9 params=0 returns=2
// ================================================

void UNK_0xeed9() // UNK_0xeed9
{
  Push(0x5556); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xeee3: WORD 'UNK_0xeee5' codep=0x224c parp=0xeee5 params=0 returns=2
// ================================================

void UNK_0xeee5() // UNK_0xeee5
{
  Push(0x55e5); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xeeef: WORD 'UNK_0xeef1' codep=0x224c parp=0xeef1 params=0 returns=2
// ================================================

void UNK_0xeef1() // UNK_0xeef1
{
  Push(0x5674); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xeefb: WORD 'UNK_0xeefd' codep=0x224c parp=0xeefd params=0 returns=2
// ================================================

void UNK_0xeefd() // UNK_0xeefd
{
  Push(0x5707); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xef07: WORD 'UNK_0xef09' codep=0x224c parp=0xef09 params=0 returns=2
// ================================================

void UNK_0xef09() // UNK_0xef09
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    UNK_0xeef1(); // UNK_0xeef1
    return;
  }
  UNK_0xeefd(); // UNK_0xeefd
}


// ================================================
// 0xef1b: WORD 'UNK_0xef1d' codep=0x224c parp=0xef1d params=0 returns=2
// ================================================

void UNK_0xef1d() // UNK_0xef1d
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    UNK_0xeec1(); // UNK_0xeec1
    return;
  }
  UNK_0xeee5(); // UNK_0xeee5
}


// ================================================
// 0xef2f: WORD 'UNK_0xef31' codep=0x224c parp=0xef31 params=0 returns=2
// ================================================

void UNK_0xef31() // UNK_0xef31
{
  Push(Read16(pp_PAST)); // PAST @
  if (Pop() != 0)
  {
    UNK_0xee8c(); // UNK_0xee8c
    return;
  }
  UNK_0xeed9(); // UNK_0xeed9
}


// ================================================
// 0xef43: WORD 'UNK_0xef45' codep=0x224c parp=0xef45
// ================================================

void UNK_0xef45() // UNK_0xef45
{
  WUP(); // WUP
  Push(1);
  Push(pp_LINE_dash_CO); // LINE-CO
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xef4f: WORD 'UNK_0xef51' codep=0x224c parp=0xef51
// ================================================
// orphan

void UNK_0xef51() // UNK_0xef51
{
  GetINST_dash_S(); // @INST-S
  Push(0);
  Push(0x0012);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    CI(); // CI
    Pop(); // DROP
  } else
  {
    LoadData(UNK_0xe632); // from 'PLANET'
    Push(Read16(Pop())); //  @
  }
  Push(0xbaa2); // probable 'MERCA'
  MODULE(); // MODULE
}


// ================================================
// 0xef73: WORD 'UNK_0xef75' codep=0x224c parp=0xef75 params=0 returns=2
// ================================================

void UNK_0xef75() // UNK_0xef75
{
  Push(0x578a); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xef7f: WORD 'UNK_0xef81' codep=0x224c parp=0xef81 params=0 returns=2
// ================================================

void UNK_0xef81() // UNK_0xef81
{
  Push(0x579a); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xef8b: WORD 'UNK_0xef8d' codep=0x224c parp=0xef8d params=0 returns=2
// ================================================

void UNK_0xef8d() // UNK_0xef8d
{
  Push(0x57ad); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xef97: WORD 'UNK_0xef99' codep=0x224c parp=0xef99 params=0 returns=2
// ================================================

void UNK_0xef99() // UNK_0xef99
{
  Push(0x57c0); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xefa3: WORD 'UNK_0xefa5' codep=0x224c parp=0xefa5 params=0 returns=2
// ================================================

void UNK_0xefa5() // UNK_0xefa5
{
  Push(0x57d3); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xefaf: WORD 'UNK_0xefb1' codep=0x224c parp=0xefb1 params=0 returns=2
// ================================================

void UNK_0xefb1() // UNK_0xefb1
{
  Push(0x57e4); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
}


// ================================================
// 0xefbb: WORD '#>SURFAC' codep=0x4b3b parp=0xefc8
// ================================================

void _n__gt_SURFAC() // #>SURFAC
{
  switch(Pop()) // #>SURFAC
  {
  case 1:
    UNK_0xef75(); // UNK_0xef75
    break;
  case 2:
    UNK_0xef8d(); // UNK_0xef8d
    break;
  case 3:
    UNK_0xef81(); // UNK_0xef81
    break;
  case 4:
    UNK_0xef99(); // UNK_0xef99
    break;
  case 5:
    UNK_0xefa5(); // UNK_0xefa5
    break;
  default:
    UNK_0xefb1(); // UNK_0xefb1
    break;

  }
}

// ================================================
// 0xefe0: WORD 'UNK_0xefe2' codep=0x224c parp=0xefe2
// ================================================
// orphan

void UNK_0xefe2() // UNK_0xefe2
{
  unsigned short int i, imax, j, jmax;
  Push(0x6a5a); // probable 'MERCATO'
  SETLARR(); // SETLARR
  FULLARR(); // FULLARR
  SETREGI(); // SETREGI
  Push(0);
  Push(Read16(pp_YUR) + 1); // YUR @ 1+
  Push(Read16(pp_YLL)); // YLL @

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(pp_XUR) + 1); // XUR @ 1+
    Push(Read16(pp_XLL)); // XLL @

    j = Pop();
    jmax = Pop();
    do // (DO)
    {
      Push(j); // I
      Push(i); // J
      ACELLAD(); // ACELLAD
      A_at_(); // A@
      Push(0x003f);
      _gt_(); // >
      if (Pop() != 0)
      {
        Push(1);
      } else
      {
        Push(0);
      }
      Push(Pop() + Pop()); // +
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf02c: WORD 'UNK_0xf02e' codep=0x224c parp=0xf02e params=0 returns=0
// ================================================
// orphan

void UNK_0xf02e() // UNK_0xf02e
{
  Push(Read16(pp_BEEPMS)); // BEEPMS @
  Push(Read16(pp_BEEPTONE)); // BEEPTONE @
  Push(0x07d0);
  Push(pp_BEEPTONE); // BEEPTONE
  Store_2(); // !_2
  Push(0x0032);
  Push(pp_BEEPMS); // BEEPMS
  Store_2(); // !_2
  BEEP(); // BEEP
  Push(pp_BEEPTONE); // BEEPTONE
  Store_2(); // !_2
  Push(pp_BEEPMS); // BEEPMS
  Store_2(); // !_2
}


// ================================================
// 0xf052: WORD 'UNK_0xf054' codep=0x224c parp=0xf054
// ================================================
// orphan

void UNK_0xf054() // UNK_0xf054
{
  unsigned short int i, imax;
  GetINST_dash_S(); // @INST-S
  Push(0x0012);
  _st_(); // <
  if (Pop() != 0)
  {
    Push(0);
    return;
  }
  LoadData(UNK_0xe62a); // from 'PLANET'
  Push(Read16(Pop())&0xFF); //  C@
  Push(0x0059);
  SWAP(); // SWAP
  GetRECORD(); // @RECORD
  Push(Pop() + 7); //  7 +
  Push(0);
  Push(7);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    OVER(); // OVER
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    Push(Pop() + Pop()); // +
    i++;
  } while(i<imax); // (LOOP)

  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xf092: WORD 'UNK_0xf094' codep=0x224c parp=0xf094
// ================================================

void UNK_0xf094() // UNK_0xf094
{
  Push(0x5800); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  DrawTTY(); // .TTY
  Push(0x5830); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  DrawTTY(); // .TTY
}


// ================================================
// 0xf0aa: WORD 'UNK_0xf0ac' codep=0x1d29 parp=0xf0ac
// ================================================
// 0xf0ac: db 0x3a 0x20 0x4c 0x22 0x16 0x16 0x60 0x58 0x02 0x00 0x04 0xe6 0xf1 0x9f 0xaa 0xf0 0xae 0x0b 0xb8 0x27 0x90 0x16 0x4c 0x22 0x16 0x16 0x75 0x58 0x02 0x00 0x04 0xe6 0xf1 0x9f 0x20 0xe6 0x92 0x0c 0xc6 0xef 0xe6 0x06 0x90 0x16 0x4c 0x22 0x16 0x16 0x97 0x58 0x02 0x00 0x04 0xe6 0xf1 0x9f 0x52 0xf0 0xb8 0x27 0x90 0x16 0x4c 0x22 0x16 0x16 0xb0 0x58 0x02 0x00 0x04 0xe6 0xf1 0x9f 0x38 0xe6 0x92 0x0c 0xe0 0xef 0x5d 0x17 0x80 0x04 0xc4 0x0f 0x5d 0x17 0x64 0x00 0xad 0x11 0xb8 0x27 0x90 0x16 0x4c 0x22 0x16 0x16 0xce 0x58 0x02 0x00 0x04 0xe6 0xf1 0x9f 0x40 0xe6 0x92 0x0c 0xdd 0x4a 0x32 0x62 0xae 0x0b 0x07 0x13 0xf5 0x12 0xfa 0x15 0x0e 0x00 0x16 0x16 0xe6 0x58 0x02 0x00 0x04 0xe6 0x60 0x16 0x0a 0x00 0x16 0x16 0xfa 0x58 0x02 0x00 0x04 0xe6 0xe6 0x06 0x90 0x16 ': L"  `X           '  L"  uX                L"   X      R  '  L"   X      8     ]     ] d    '  L"   X      @    J2b             X    `      X        '

// ================================================
// 0xf142: WORD 'UNK_0xf144' codep=0x224c parp=0xf144
// ================================================

void UNK_0xf144() // UNK_0xf144
{
// db 0x43
// db 0xef
// db 0xd2
// db 0x9f
// db 0x8b
// db 0x75
// db 0xaf
// db 0x64
// db 0x32
// db 0x6d
// db 0x5d
// db 0x17
// db 0xf9
// db 0xbc
// db 0xd9
// db 0x84
// db 0x4f
// db 0xef
// db 0xae
// db 0xf0
// db 0xc2
// db 0xf0
// db 0xd8
// db 0xf0
// db 0xea
// db 0xf0
// db 0x0c
// db 0xf1
// db 0x43
// db 0xef
// db 0x63
// db 0xe7
// db 0x90
// db 0x16
}


// ================================================
// 0xf166: WORD 'UNK_0xf168' codep=0x224c parp=0xf168 params=0 returns=1
// ================================================

void UNK_0xf168() // UNK_0xf168
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x0020?1:0); //  0x0020 =
}


// ================================================
// 0xf172: WORD 'UNK_0xf174' codep=0x224c parp=0xf174 params=0 returns=0
// ================================================
// orphan

void UNK_0xf174() // UNK_0xf174
{
  GetINST_dash_C(); // @INST-C
  Push(Pop()==0x000b?1:0); //  0x000b =
  if (Pop() != 0)
  {
    CI(); // CI
    Push(pp__ro_ORBIT_rc_); // (ORBIT)
    _1_dot_5_ex__2(); // 1.5!_2
    IOPEN(); // IOPEN
    UNK_0xf168(); // UNK_0xf168
    if (Pop() != 0)
    {
      Push(1);
      Push(pp_UNK_0xf0ac); // UNK_0xf0ac
      _plus__ex__2(); // +!_2
      UNK_0xf144(); // UNK_0xf144
    }
    ICLOSE(); // ICLOSE
  } else
  {
    UNK_0xf168(); // UNK_0xf168
    if (Pop() != 0)
    {
      Push(1);
      Push(pp_UNK_0xf0ac); // UNK_0xf0ac
      _plus__ex__2(); // +!_2
      UNK_0xf144(); // UNK_0xf144
    }
  }
  Push(Read16(pp_FQUIT)); // FQUIT @
  if (Pop() == 0) return;
  ILAST(); // ILAST
}


// ================================================
// 0xf1b6: WORD 'UNK_0xf1b8' codep=0x224c parp=0xf1b8 params=0 returns=2
// ================================================

void UNK_0xf1b8() // UNK_0xf1b8
{
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xf1c2: WORD 'UNK_0xf1c4' codep=0x224c parp=0xf1c4
// ================================================

void UNK_0xf1c4() // UNK_0xf1c4
{
  Push(pp_UNK_0xf0ac); // UNK_0xf0ac
  _099(); // 099
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf174); // probable 'UNK_0xf174'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
  Push2Words("NULL");
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_ex__2(); // 1.5!_2
  Push2Words("NULL");
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xf1e6: WORD 'UNK_0xf1e8' codep=0x2214 parp=0xf1e8
// ================================================
// orphan
// 0xf1e8: dw 0x0190

// ================================================
// 0xf1ea: WORD 'UNK_0xf1ec' codep=0x224c parp=0xf1ec params=2 returns=0
// ================================================
// orphan

void UNK_0xf1ec() // UNK_0xf1ec
{
  unsigned short int i, imax;
  UNK_0xee4e(); // UNK_0xee4e
  if (Pop() != 0)
  {
    GetColor(PINK);
    StoreCOLOR(); // !COLOR
    _gt_DISPLA(); // >DISPLA
    Push(0x0024);
    Push(Read16(cc_UNK_0xf1e8)); // UNK_0xf1e8
    _star__slash_(); // */
    Push(Pop() + 0x00a1); //  0x00a1 +
    SWAP(); // SWAP
    Push(0x0024);
    Push(Read16(cc_UNK_0xf1e8)); // UNK_0xf1e8
    _star__slash_(); // */
    Push(Pop() + 0x0078); //  0x0078 +
    SWAP(); // SWAP
    UNK_0xf02e(); // UNK_0xf02e
    Push(6);
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      _2DUP(); // 2DUP
      LXPLOT(); // LXPLOT
      Push(0x012c);
      MS(); // MS
      i++;
    } while(i<imax); // (LOOP)

    LPLOT(); // LPLOT
    return;
  }
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xf238: WORD 'UNK_0xf23a' codep=0x224c parp=0xf23a params=0 returns=0
// ================================================
// orphan

void UNK_0xf23a() // UNK_0xf23a
{
  unsigned short int a;
  GetINST_dash_C(); // @INST-C
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(Pop()==0x003d?1:0); //  0x003d =
  if (Pop() == 0) goto label1;
  UNK_0xf1b8(); // UNK_0xf1b8
  UNK_0xf1ec(); // UNK_0xf1ec
  goto label2;

  label1:
  Push(Read16(a)); // R@
  Push(Pop()==0x000b?1:0); //  0x000b =
  if (Pop() == 0) goto label2;
  IOPEN(); // IOPEN
  UNK_0xf168(); // UNK_0xf168
  if (Pop() == 0) goto label3;
  IOPEN(); // IOPEN
  IsNULL(); // ?NULL
  Push(!Pop()); //  NOT
  if (Pop() == 0) goto label4;

  label7:
  Push(0x003d);
  Push(0);
  IFIND(); // IFIND
  if (Pop() != 0)
  {
    CJ(); // CJ
    _gt_C_plus_S(); // >C+S
    UNK_0xf1b8(); // UNK_0xf1b8
    ICLOSE(); // ICLOSE
    UNK_0xf1ec(); // UNK_0xf1ec
    IsLAST(); // ?LAST
    Push(!Pop()); //  NOT
  } else
  {
    Push(Read16(cc_FALSE)); // FALSE
  }
  if (Pop() == 0) goto label4;
  INEXT(); // INEXT
  goto label7;

  label4:
  ICLOSE(); // ICLOSE

  label3:
  ICLOSE(); // ICLOSE

  label2:
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf2a4: WORD 'UNK_0xf2a6' codep=0x224c parp=0xf2a6
// ================================================

void UNK_0xf2a6() // UNK_0xf2a6
{
  Push(pp__ro_SYSTEM); // (SYSTEM
  Get_gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  Push(0xf23a); // probable 'UNK_0xf23a'
  ALL(); // ALL
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xf2b8: WORD 'SYSCAN' codep=0x224c parp=0xf2c3 params=0 returns=2
// ================================================
// entry

void SYSCAN() // SYSCAN
{
  Push(8);
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
  Push(Pop() & (Read16(pp_NOF)==0?1:0)); //  NOF @ 0= AND
  if (Pop() != 0)
  {
    Push(Read16(pp_CONTEXT_3)==2?1:0); // CONTEXT_3 @ 2 =
    if (Pop() != 0)
    {
      Push(pp_NOF); // NOF
      ON_2(); // ON_2
      Push(pp_FQUIT); // FQUIT
      _099(); // 099
      CTINIT(); // CTINIT
      SET_STR_AS_PARAM("SCANNING...");
      DrawTTY(); // .TTY
      Push(Read16(pp__i_ASYS)); // 'ASYS @
      MODULE(); // MODULE
      UNK_0xf2a6(); // UNK_0xf2a6
      UNK_0xf1c4(); // UNK_0xf1c4
      Push(pp_FTRIG); // FTRIG
      _099(); // 099
    } else
    {
      Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
      Push(5);
      _st_(); // <
      Push(Pop() & !Read16(pp_IsON_dash_PLA)); //  ?ON-PLA @ NOT AND
      if (Pop() != 0)
      {
        BEEP(); // BEEP
        CTINIT(); // CTINIT
        UNK_0xf094(); // UNK_0xf094
      }
    }
  } else
  {
    Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
    Push(5);
    _st_(); // <
    if (Pop() != 0)
    {
      Push(0xb7e7); // probable '.NOFUN'
      MODULE(); // MODULE
    }
  }
  Push2Words("NULL");
  Push(pp_NOF); // NOF
  _099(); // 099
}


// ================================================
// 0xf347: WORD 'UNK_0xf349' codep=0x224c parp=0xf349
// ================================================
// orphan

void UNK_0xf349() // UNK_0xf349
{
  PRINT("A DEAD ", 7); // (.")
  LoadData(UNK_0xe6bd); // from 'CREATURE'
  Push(0x0014);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf363: WORD 'RCASE' codep=0x4b3b parp=0xf36d
// ================================================

void RCASE() // RCASE
{
  switch(Pop()) // RCASE
  {
  case 1:
    UNK_0xef31(); // UNK_0xef31
    break;
  case 2:
    UNK_0xeecd(); // UNK_0xeecd
    break;
  case 3:
    UNK_0xef31(); // UNK_0xef31
    break;
  case 4:
    UNK_0xeecd(); // UNK_0xeecd
    break;
  case 5:
    UNK_0xef09(); // UNK_0xef09
    break;
  case 6:
    UNK_0xef1d(); // UNK_0xef1d
    break;
  default:
    UNRAVEL(); // UNRAVEL
    break;

  }
}

// ================================================
// 0xf389: WORD 'UNK_0xf38b' codep=0x224c parp=0xf38b
// ================================================

void UNK_0xf38b() // UNK_0xf38b
{
  LoadData(UNK_0xe6c5); // from 'CREATURE'
  Get_gt_C_plus_S(); // @>C+S
  DrawPHRASE(); // .PHRASE
  ICLOSE(); // ICLOSE
  UNK_0xe765(); // UNK_0xe765
  UNK_0xe78f(); // UNK_0xe78f
  LoadData(UNK_0xe6cd); // from 'CREATURE'
  Get_gt_C_plus_S(); // @>C+S
  DrawPHRASE(); // .PHRASE
  ICLOSE(); // ICLOSE
  UNK_0xe765(); // UNK_0xe765
}


// ================================================
// 0xf3a3: WORD 'UNK_0xf3a5' codep=0x224c parp=0xf3a5
// ================================================

void UNK_0xf3a5() // UNK_0xf3a5
{
  PRINT("SOME ", 5); // (.")
  LoadData(UNK_0xe663); // from 'TRADERS'
  Push(0x0010);
  _dash_TRAILING(); // -TRAILING
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  LoadData(UNK_0xe66b); // from 'TRADERS'
  Push(Read16(Pop())&0xFF); //  C@
  Push(2);
  _gt_(); // >
  if (Pop() != 0)
  {
    Push(0x590b); Push(0x0002);
    UNK_0xe606(); // UNK_0xe606
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    return;
  }
  PRINT(" ON FOOT.", 9); // (.")
}


// ================================================
// 0xf3df: WORD 'UNK_0xf3e1' codep=0x224c parp=0xf3e1
// ================================================

void UNK_0xf3e1() // UNK_0xf3e1
{
  Push(pp_CTX); // CTX
  _099(); // 099
  Push(pp_LINE_dash_CO); // LINE-CO
  _099(); // 099
  GetINST_dash_S(); // @INST-S
  RCASE(); // RCASE case
  UNK_0xea33(); // UNK_0xea33
}


// ================================================
// 0xf3f1: WORD 'UNK_0xf3f3' codep=0x224c parp=0xf3f3 params=2 returns=0
// ================================================
// orphan

void UNK_0xf3f3() // UNK_0xf3f3
{
  SWAP(); // SWAP
  Push(Pop() * 4 + (Read16(pp_WLEFT) + 2)); //  4 * WLEFT @ 2+ +
  Push(Read16(pp_WTOP) - 1); // WTOP @ 1-
  ROT(); // ROT
  Push(Pop() * 7); //  7 *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xf413: WORD 'UNK_0xf415' codep=0x224c parp=0xf415 params=0 returns=0
// ================================================

void UNK_0xf415() // UNK_0xf415
{
  PRINT("YOUR SHIP", 9); // (.")
}


// ================================================
// 0xf423: WORD 'UNK_0xf425' codep=0x224c parp=0xf425
// ================================================

void UNK_0xf425() // UNK_0xf425
{
  LoadData(ART_dash_NAM); // from 'ARTIFACT'
  Push(0x0018);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf435: WORD 'UNK_0xf437' codep=0x224c parp=0xf437
// ================================================

void UNK_0xf437() // UNK_0xf437
{
  Push(Read16(0x65e1+INST_dash_QT.offset)); // INST-QT<IFIELD> @
  Push(Read16(cc_UNK_0xeae4)); // UNK_0xeae4
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Draw(); // .
  Push(0x5926); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  LoadData(UNK_0xe6ab); // from 'ELEMENT'
  Push(0x0010);
  Push(0x002e);
  _dash_XTRAIL(); // -XTRAIL
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf45f: WORD 'UNK_0xf461' codep=0x224c parp=0xf461 params=0 returns=0
// ================================================

void UNK_0xf461() // UNK_0xf461
{
  Push(0x5942); Push(0x0002);
  UNK_0xe606(); // UNK_0xe606
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xf46d: WORD 'UNK_0xf46f' codep=0x224c parp=0xf46f params=0 returns=0
// ================================================

void UNK_0xf46f() // UNK_0xf46f
{
  Push(0xbdda); // probable '.CULT'
  MODULE(); // MODULE
}


// ================================================
// 0xf477: WORD 'UNK_0xf479' codep=0x224c parp=0xf479 params=0 returns=0
// ================================================

void UNK_0xf479() // UNK_0xf479
{
  Push(0xbdda); // probable '.CULT'
  MODULE(); // MODULE
}


// ================================================
// 0xf481: WORD 'UNK_0xf483' codep=0x224c parp=0xf483 params=0 returns=0
// ================================================
// orphan

void UNK_0xf483() // UNK_0xf483
{
  Push(0xbdea); // probable '.RACE'
  MODULE(); // MODULE
}


// ================================================
// 0xf48b: WORD 'UNK_0xf48d' codep=0x224c parp=0xf48d params=0 returns=0
// ================================================

void UNK_0xf48d() // UNK_0xf48d
{
  PRINT("A MESSAGE", 9); // (.")
}


// ================================================
// 0xf49b: WORD 'CLASS>TY' codep=0x4b3b parp=0xf4a8
// ================================================
// entry

void CLASS_gt_TY() // CLASS>TY
{
  switch(Pop()) // CLASS>TY
  {
  case 68:
    UNK_0xf38b(); // UNK_0xf38b
    break;
  case 42:
    UNK_0xf461(); // UNK_0xf461
    break;
  case 20:
    UNK_0xf415(); // UNK_0xf415
    break;
  case 41:
    UNK_0xf3e1(); // UNK_0xf3e1
    break;
  case 26:
    UNK_0xf437(); // UNK_0xf437
    break;
  case 28:
    UNK_0xf425(); // UNK_0xf425
    break;
  case 21:
    UNK_0xf3a5(); // UNK_0xf3a5
    break;
  case 31:
    UNK_0xf46f(); // UNK_0xf46f
    break;
  case 33:
    UNK_0xf479(); // UNK_0xf479
    break;
  case 27:
    UNK_0xf48d(); // UNK_0xf48d
    break;
  default:
    BEEP(); // BEEP
    break;

  }
}

// ================================================
// 0xf4d4: WORD 'DESCRIBE' codep=0x224c parp=0xf4e1 params=1 returns=0
// ================================================
// entry

void DESCRIBE() // DESCRIBE
{
  unsigned short int a, i, imax;
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(Read16(pp_COLOR)); // COLOR @
  a = Pop(); // >R
  CTINIT(); // CTINIT
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    GetIL(); // @IL
    GetIH(); // @IH
    _gt_C_plus_S(); // >C+S
    GetINST_dash_C(); // @INST-C
    _gt_BOTT(); // >BOTT
    CLASS_gt_TY(); // CLASS>TY case
    ICLOSE(); // ICLOSE
    Push(imax); // I'
    Push(1);
    _gt_(); // >
    Push(Pop() & !(i + 1==imax?1:0)); //  I 1+ I' = NOT AND
    if (Pop() != 0)
    {
      Push(0x05dc);
      MS(); // MS
      UNK_0xef45(); // UNK_0xef45
      UNK_0xef45(); // UNK_0xef45
    }
    i++;
  } while(i<imax); // (LOOP)

  Push(a); // R>
  StoreCOLOR(); // !COLOR
}

// 0xf52d: db 0x44 0x45 0x53 0x43 0x52 0x49 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x55 0x52 0x45 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DESCRI__________________________URE________________ '

