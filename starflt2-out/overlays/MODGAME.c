// ====== OVERLAY 'MODGAME' ======
// store offset = 0xdcf0
// overlay size   = 0x1870

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== Dictionary ==========
// =================================
//           WDD06  codep:0x2214 wordp:0xdd06 size:0x0002 C-string:'WDD06'
//           WDD0A  codep:0x2214 wordp:0xdd0a size:0x0002 C-string:'WDD0A'
//           WDD0E  codep:0x2214 wordp:0xdd0e size:0x0002 C-string:'WDD0E'
//           WDD12  codep:0x2214 wordp:0xdd12 size:0x0002 C-string:'WDD12'
//           WDD16  codep:0x2214 wordp:0xdd16 size:0x0002 C-string:'WDD16'
//           WDD1A  codep:0x2214 wordp:0xdd1a size:0x0002 C-string:'WDD1A'
//           WDD1E  codep:0x2214 wordp:0xdd1e size:0x0002 C-string:'WDD1E'
//           WDD22  codep:0x2214 wordp:0xdd22 size:0x0002 C-string:'WDD22'
//           WDD26  codep:0x2214 wordp:0xdd26 size:0x0002 C-string:'WDD26'
//           WDD2A  codep:0x2214 wordp:0xdd2a size:0x0002 C-string:'WDD2A'
//           WDD2E  codep:0x1d29 wordp:0xdd2e size:0x0002 C-string:'WDD2E'
//           WDD32  codep:0x1d29 wordp:0xdd32 size:0x00e2 C-string:'WDD32'
//           WDE16  codep:0x1d29 wordp:0xde16 size:0x0002 C-string:'WDE16'
//           WDE1A  codep:0x1d29 wordp:0xde1a size:0x0002 C-string:'WDE1A'
//           WDE1E  codep:0x224c wordp:0xde1e size:0x000c C-string:'WDE1E'
//           WDE2C  codep:0x224c wordp:0xde2c size:0x0010 C-string:'WDE2C'
//           WDE3E  codep:0x1d29 wordp:0xde3e size:0x0002 C-string:'WDE3E'
//           WDE42  codep:0x1d29 wordp:0xde42 size:0x0002 C-string:'WDE42'
//           WDE46  codep:0x1d29 wordp:0xde46 size:0x0002 C-string:'WDE46'
//           WDE4A  codep:0x1d29 wordp:0xde4a size:0x0002 C-string:'WDE4A'
//           WDE4E  codep:0x1d29 wordp:0xde4e size:0x0002 C-string:'WDE4E'
//           WDE52  codep:0x1d29 wordp:0xde52 size:0x0002 C-string:'WDE52'
//           WDE56  codep:0x1d29 wordp:0xde56 size:0x0002 C-string:'WDE56'
//           WDE5A  codep:0x1d29 wordp:0xde5a size:0x0002 C-string:'WDE5A'
//           WDE5E  codep:0x1d29 wordp:0xde5e size:0x0002 C-string:'WDE5E'
//           WDE62  codep:0x1d29 wordp:0xde62 size:0x0002 C-string:'WDE62'
//           WDE66  codep:0x1d29 wordp:0xde66 size:0x0002 C-string:'WDE66'
//           WDE6A  codep:0x1d29 wordp:0xde6a size:0x0002 C-string:'WDE6A'
//           WDE6E  codep:0x1d29 wordp:0xde6e size:0x0002 C-string:'WDE6E'
//           WDE72  codep:0x1d29 wordp:0xde72 size:0x0002 C-string:'WDE72'
//           WDE76  codep:0x1d29 wordp:0xde76 size:0x0002 C-string:'WDE76'
//           WDE7A  codep:0x1d29 wordp:0xde7a size:0x0002 C-string:'WDE7A'
//           WDE7E  codep:0x224c wordp:0xde7e size:0x007a C-string:'WDE7E'
//           WDEFA  codep:0x2214 wordp:0xdefa size:0x0002 C-string:'WDEFA'
//            HOST  codep:0x53f7 wordp:0xdf05 size:0x001e C-string:'HOST'
//           WDF25  codep:0x2214 wordp:0xdf25 size:0x0002 C-string:'WDF25'
//         VECTORS  codep:0x53f7 wordp:0xdf33 size:0x0024 C-string:'VECTORS'
//           WDF59  codep:0x224c wordp:0xdf59 size:0x002c C-string:'WDF59'
//           WDF87  codep:0x224c wordp:0xdf87 size:0x002c C-string:'WDF87'
//           WDFB5  codep:0x1d29 wordp:0xdfb5 size:0x0004 C-string:'WDFB5'
//           WDFBB  codep:0x224c wordp:0xdfbb size:0x0022 C-string:'WDFBB'
//           WDFDF  codep:0x224c wordp:0xdfdf size:0x0022 C-string:'WDFDF'
//           WE003  codep:0x224c wordp:0xe003 size:0x0022 C-string:'WE003'
//           WE027  codep:0x1d29 wordp:0xe027 size:0x0002 C-string:'WE027'
//           WE02B  codep:0x1d29 wordp:0xe02b size:0x0002 C-string:'WE02B'
//           WE02F  codep:0x224c wordp:0xe02f size:0x000a C-string:'WE02F'
//           WE03B  codep:0x224c wordp:0xe03b size:0x0016 C-string:'WE03B'
//           STARE  codep:0x2214 wordp:0xe05b size:0x000d C-string:'STARE'
//           STARV  codep:0x2214 wordp:0xe072 size:0x000d C-string:'STARV'
//           WE081  codep:0x224c wordp:0xe081 size:0x005e C-string:'WE081'
//           WE0E1  codep:0x224c wordp:0xe0e1 size:0x0044 C-string:'WE0E1'
//           WE127  codep:0x224c wordp:0xe127 size:0x001a C-string:'WE127'
//           WE143  codep:0x224c wordp:0xe143 size:0x001d C-string:'WE143'
//           WE162  codep:0x224c wordp:0xe162 size:0x0018 C-string:'WE162'
//           WE17C  codep:0x224c wordp:0xe17c size:0x001b C-string:'WE17C'
//           WE199  codep:0x224c wordp:0xe199 size:0x000a C-string:'WE199'
//           WE1A5  codep:0x224c wordp:0xe1a5 size:0x0008 C-string:'WE1A5'
//           WE1AF  codep:0x224c wordp:0xe1af size:0x0094 C-string:'WE1AF'
//           WE245  codep:0x224c wordp:0xe245 size:0x000a C-string:'WE245'
//           WE251  codep:0x224c wordp:0xe251 size:0x0016 C-string:'WE251'
//           WE269  codep:0x224c wordp:0xe269 size:0x001c C-string:'WE269'
//           WE287  codep:0x224c wordp:0xe287 size:0x0016 C-string:'WE287'
//           WE29F  codep:0x224c wordp:0xe29f size:0x0040 C-string:'WE29F'
//           WE2E1  codep:0x224c wordp:0xe2e1 size:0x0028 C-string:'WE2E1'
//           WE30B  codep:0x224c wordp:0xe30b size:0x0042 C-string:'WE30B'
//           WE34F  codep:0x224c wordp:0xe34f size:0x000e C-string:'WE34F'
//           WE35F  codep:0x224c wordp:0xe35f size:0x006c C-string:'WE35F'
//           WE3CD  codep:0x224c wordp:0xe3cd size:0x000a C-string:'WE3CD'
//           WE3D9  codep:0x224c wordp:0xe3d9 size:0x0034 C-string:'WE3D9'
//           WE40F  codep:0x224c wordp:0xe40f size:0x0020 C-string:'WE40F'
//           WE431  codep:0x224c wordp:0xe431 size:0x001e C-string:'WE431'
//           WE451  codep:0x224c wordp:0xe451 size:0x000c C-string:'WE451'
//           WE45F  codep:0x224c wordp:0xe45f size:0x00de C-string:'WE45F'
//           WE53F  codep:0x224c wordp:0xe53f size:0x0030 C-string:'WE53F'
//           WE571  codep:0x224c wordp:0xe571 size:0x0084 C-string:'WE571'
//           WE5F7  codep:0x224c wordp:0xe5f7 size:0x0013 C-string:'WE5F7'
//           WE60C  codep:0x224c wordp:0xe60c size:0x0044 C-string:'WE60C'
//           WE652  codep:0x224c wordp:0xe652 size:0x0020 C-string:'WE652'
//           WE674  codep:0x224c wordp:0xe674 size:0x0006 C-string:'WE674'
//           WE67C  codep:0x224c wordp:0xe67c size:0x0006 C-string:'WE67C'
//           WE684  codep:0x224c wordp:0xe684 size:0x0008 C-string:'WE684'
//           WE68E  codep:0x224c wordp:0xe68e size:0x0014 C-string:'WE68E'
//           WE6A4  codep:0x224c wordp:0xe6a4 size:0x0016 C-string:'WE6A4'
//           WE6BC  codep:0x224c wordp:0xe6bc size:0x000c C-string:'WE6BC'
//           WE6CA  codep:0x224c wordp:0xe6ca size:0x00a4 C-string:'WE6CA'
//           WE770  codep:0x224c wordp:0xe770 size:0x004f C-string:'WE770'
//           WE7C1  codep:0x224c wordp:0xe7c1 size:0x0062 C-string:'WE7C1'
//           WE825  codep:0x224c wordp:0xe825 size:0x0028 C-string:'WE825'
//           WE84F  codep:0x224c wordp:0xe84f size:0x003c C-string:'WE84F'
//           WE88D  codep:0x224c wordp:0xe88d size:0x0034 C-string:'WE88D'
//           WE8C3  codep:0x224c wordp:0xe8c3 size:0x0047 C-string:'WE8C3'
//           WE90C  codep:0x224c wordp:0xe90c size:0x0014 C-string:'WE90C'
//           WE922  codep:0x224c wordp:0xe922 size:0x002d C-string:'WE922'
//           WE951  codep:0x224c wordp:0xe951 size:0x0008 C-string:'WE951'
//           WE95B  codep:0x224c wordp:0xe95b size:0x0078 C-string:'WE95B'
//           WE9D5  codep:0x224c wordp:0xe9d5 size:0x001e C-string:'WE9D5'
//           PRESE  codep:0x224c wordp:0xe9fd size:0x0018 C-string:'PRESE'
//           WEA17  codep:0x224c wordp:0xea17 size:0x0006 C-string:'WEA17'
//           WEA1F  codep:0x224c wordp:0xea1f size:0x0006 C-string:'WEA1F'
//           WEA27  codep:0x224c wordp:0xea27 size:0x0008 C-string:'WEA27'
//           WEA31  codep:0x224c wordp:0xea31 size:0x000c C-string:'WEA31'
//           WEA3F  codep:0x224c wordp:0xea3f size:0x001a C-string:'WEA3F'
//           WEA5B  codep:0x224c wordp:0xea5b size:0x0012 C-string:'WEA5B'
//           WEA6F  codep:0x224c wordp:0xea6f size:0x0008 C-string:'WEA6F'
//           WEA79  codep:0x224c wordp:0xea79 size:0x001c C-string:'WEA79'
//           WEA97  codep:0x224c wordp:0xea97 size:0x0014 C-string:'WEA97'
//           WEAAD  codep:0x224c wordp:0xeaad size:0x0028 C-string:'WEAAD'
//           WEAD7  codep:0x224c wordp:0xead7 size:0x0034 C-string:'WEAD7'
//           WEB0D  codep:0x224c wordp:0xeb0d size:0x003c C-string:'WEB0D'
//           WEB4B  codep:0x224c wordp:0xeb4b size:0x0025 C-string:'WEB4B'
//           WEB72  codep:0x224c wordp:0xeb72 size:0x002f C-string:'WEB72'
//           WEBA3  codep:0x224c wordp:0xeba3 size:0x001e C-string:'WEBA3'
//           PRMSA  codep:0xebcb wordp:0xebcb size:0x001d C-string:'PRMSA'
//           PRMLO  codep:0xebf2 wordp:0xebf2 size:0x002d C-string:'PRMLO'
//           RETSA  codep:0xec29 wordp:0xec29 size:0x001d C-string:'RETSA'
//           RETJM  codep:0xec50 wordp:0xec50 size:0x0028 C-string:'RETJM'
//           WEC7A  codep:0x224c wordp:0xec7a size:0x0082 C-string:'WEC7A'
//           WECFE  codep:0x224c wordp:0xecfe size:0x0006 C-string:'WECFE'
//           WED06  codep:0x224c wordp:0xed06 size:0x0006 C-string:'WED06'
//           WED0E  codep:0x224c wordp:0xed0e size:0x0006 C-string:'WED0E'
//           WED16  codep:0x224c wordp:0xed16 size:0x0014 C-string:'WED16'
//           WED2C  codep:0x224c wordp:0xed2c size:0x000c C-string:'WED2C'
//           WED3A  codep:0x224c wordp:0xed3a size:0x000c C-string:'WED3A'
//           WED48  codep:0x224c wordp:0xed48 size:0x0014 C-string:'WED48'
//           WED5E  codep:0x224c wordp:0xed5e size:0x0014 C-string:'WED5E'
//           WED74  codep:0x224c wordp:0xed74 size:0x0006 C-string:'WED74'
//           WED7C  codep:0x224c wordp:0xed7c size:0x001e C-string:'WED7C'
//           WED9C  codep:0x224c wordp:0xed9c size:0x000a C-string:'WED9C'
//           WEDA8  codep:0x224c wordp:0xeda8 size:0x000c C-string:'WEDA8'
//           WEDB6  codep:0x224c wordp:0xedb6 size:0x000c C-string:'WEDB6'
//           WEDC4  codep:0x224c wordp:0xedc4 size:0x0024 C-string:'WEDC4'
//           WEDEA  codep:0x224c wordp:0xedea size:0x000a C-string:'WEDEA'
//           WEDF6  codep:0x224c wordp:0xedf6 size:0x000e C-string:'WEDF6'
//           WEE06  codep:0x224c wordp:0xee06 size:0x000a C-string:'WEE06'
//           WEE12  codep:0x224c wordp:0xee12 size:0x0008 C-string:'WEE12'
//           WEE1C  codep:0x224c wordp:0xee1c size:0x0022 C-string:'WEE1C'
//           WEE40  codep:0x224c wordp:0xee40 size:0x000e C-string:'WEE40'
//           WEE50  codep:0x224c wordp:0xee50 size:0x0014 C-string:'WEE50'
//           WEE66  codep:0x224c wordp:0xee66 size:0x001a C-string:'WEE66'
//           WEE82  codep:0x224c wordp:0xee82 size:0x002e C-string:'WEE82'
//           LOAD.  codep:0x224c wordp:0xeeba size:0x0026 C-string:'LOAD_dot_'
//           WEEE2  codep:0x224c wordp:0xeee2 size:0x0022 C-string:'WEEE2'
//           WEF06  codep:0x224c wordp:0xef06 size:0x0016 C-string:'WEF06'
//           WEF1E  codep:0x224c wordp:0xef1e size:0x001c C-string:'WEF1E'
//           WEF3C  codep:0x224c wordp:0xef3c size:0x0016 C-string:'WEF3C'
//           WEF54  codep:0x224c wordp:0xef54 size:0x0032 C-string:'WEF54'
//           WEF88  codep:0x224c wordp:0xef88 size:0x0012 C-string:'WEF88'
//           WEF9C  codep:0x224c wordp:0xef9c size:0x003f C-string:'WEF9C'
//           WEFDD  codep:0x224c wordp:0xefdd size:0x003a C-string:'WEFDD'
//           WF019  codep:0x224c wordp:0xf019 size:0x0121 C-string:'WF019'
//           WF13C  codep:0x224c wordp:0xf13c size:0x002a C-string:'WF13C'
//           WF168  codep:0x224c wordp:0xf168 size:0x002a C-string:'WF168'
//           WF194  codep:0x224c wordp:0xf194 size:0x002f C-string:'WF194'
//           WF1C5  codep:0x224c wordp:0xf1c5 size:0x002c C-string:'WF1C5'
//           KEY>O  codep:0x4b3b wordp:0xf1fb size:0x0014 C-string:'KEY_gt_O'
//           OPTIO  codep:0x1d29 wordp:0xf219 size:0x0002 C-string:'OPTIO'
//           WF21D  codep:0x224c wordp:0xf21d size:0x001a C-string:'WF21D'
//           NEW.G  codep:0x224c wordp:0xf241 size:0x0016 C-string:'NEW_dot_G'
//           WF259  codep:0x224c wordp:0xf259 size:0x00fd C-string:'WF259'
//           WF358  codep:0x224c wordp:0xf358 size:0x0016 C-string:'WF358'
//           WF370  codep:0x224c wordp:0xf370 size:0x001c C-string:'WF370'
//           WF38E  codep:0x224c wordp:0xf38e size:0x0006 C-string:'WF38E'
//           WF396  codep:0x224c wordp:0xf396 size:0x001c C-string:'WF396'
//         GAMEO_2  codep:0x4b3b wordp:0xf3bc size:0x0014 C-string:'GAMEO_2'
//           WF3D2  codep:0x224c wordp:0xf3d2 size:0x000e C-string:'WF3D2'
//           WF3E2  codep:0x224c wordp:0xf3e2 size:0x0006 C-string:'WF3E2'
//           WF3EA  codep:0x224c wordp:0xf3ea size:0x0016 C-string:'WF3EA'
//           WF402  codep:0x224c wordp:0xf402 size:0x0025 C-string:'WF402'
//           WF429  codep:0x224c wordp:0xf429 size:0x0020 C-string:'WF429'
//            ERR!  codep:0x224c wordp:0xf452 size:0x002c C-string:'ERR_ex_'
//         GAMEO_1  codep:0x224c wordp:0xf488 size:0x0030 C-string:'GAMEO_1'
//            BOSS  codep:0x224c wordp:0xf4c1 size:0x003a C-string:'BOSS'
//           START  codep:0x224c wordp:0xf505 size:0x0000 C-string:'START'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_BL; // BL
extern const unsigned short int cc_AX; // AX
extern const unsigned short int cc_BX; // BX
extern const unsigned short int cc_CX; // CX
extern const unsigned short int cc_DX; // DX
extern const unsigned short int cc_DS; // DS
extern const unsigned short int cc__16K; // 16K
extern const unsigned short int cc_TRUE; // TRUE
extern const unsigned short int cc_FALSE; // FALSE
extern const unsigned short int pp__n_CACHE; // #CACHE
extern const unsigned short int pp_DTA_1; // DTA_1
extern const unsigned short int pp_SYSK; // SYSK
extern const unsigned short int pp_OVA; // OVA
extern const unsigned short int pp_ASKMOUN; // ASKMOUN
extern const unsigned short int pp__i_BYE; // 'BYE
extern const unsigned short int pp_BMAP; // BMAP
extern const unsigned short int pp_FONTSEG; // FONTSEG
extern const unsigned short int pp_XBUF_dash_SE; // XBUF-SE
extern const unsigned short int pp_HUB; // HUB
extern const unsigned short int pp_PIC_n_; // PIC#
extern const unsigned short int pp_TIMESTA; // TIMESTA
extern const unsigned short int pp_HBUF_dash_SE; // HBUF-SE
extern const unsigned short int pp_DBUF_dash_SE; // DBUF-SE
extern const unsigned short int pp_COLOR; // COLOR
extern const unsigned short int pp_BUF_dash_SEG; // BUF-SEG
extern const unsigned short int pp_MONITOR; // MONITOR
extern const unsigned short int pp_ICON_h_; // ICON^
extern const unsigned short int pp_YBLT; // YBLT
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_LFSEG; // LFSEG
extern const unsigned short int pp_LSYSEG; // LSYSEG
extern const unsigned short int pp_MSYSEG; // MSYSEG
extern const unsigned short int pp_SSYSEG; // SSYSEG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp__bo__n_CACHE; // [#CACHE
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_IsEGA; // ?EGA
extern const unsigned short int pp__3DSEG; // 3DSEG
extern const unsigned short int pp_DERROR; // DERROR
extern const unsigned short int pp__i_VERSIO; // 'VERSIO
extern const unsigned short int user_TIB; // TIB
extern const unsigned short int user_ROW; // ROW
extern const unsigned short int user_COL; // COL
extern Color BLACK; // BLACK
extern Color WHITE; // WHITE
void _ro_RESTORE_rc_(); // (RESTORE)
void AUTO_dash_CACHE(); // AUTO-CACHE
void _ro_SETUP_rc_(); // (SETUP)
void M_star__slash_(); // M*/
void MAX(); // MAX
void UMIN(); // UMIN
void PAD(); // PAD
void QUIT(); // QUIT
void BEEP(); // BEEP
void _dash_TRAILING(); // -TRAILING
void MS(); // MS
void UPDATE(); // UPDATE
void UNMOUNT(); // UNMOUNT
void NODRIVES(); // NODRIVES
void EMITS(); // EMITS
void EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
void NOP(); // NOP
void IsUNRAVEL(); // ?UNRAVEL
void PICK(); // PICK
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _gt_TIB(); // >TIB
void DRV(); // DRV
void NAM(); // NAM
void TYP(); // TYP
void RECSIZE(); // RECSIZE
void RELREC(); // RELREC
void SYSTEM(); // SYSTEM
void SYSUTIL(); // SYSUTIL
void DOSCALL(); // DOSCALL
void SETFCB(); // SETFCB
void INIT(); // INIT
void FCBCALL(); // FCBCALL
void OPEN(); // OPEN
void CLOSE(); // CLOSE
void READNEX(); // READNEX
void WRITENE(); // WRITENE
void DOS_dash_DTA(); // DOS-DTA
void READ_dash_RA(); // READ-RA
void WRITE_dash_R(); // WRITE-R
void MAKE_st_NA(); // MAKE<NA
void USING(); // USING
void _ro_LDS_rc_(); // (LDS)
void KEY_2(); // KEY_2
void BMOFF(); // BMOFF
void BMSEG(); // BMSEG
void BMPAL(); // BMPAL
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _2_ex__2(); // 2!_2
void ON_2(); // ON_2
void _099(); // 099
void CMOVE_2(); // CMOVE_2
void FILL_2(); // FILL_2
void BLOCK_2(); // BLOCK_2
void MOUNTA(); // MOUNTA
void MOUNTB(); // MOUNTB
void FILE_st_(); // FILE<
void SET_dash_CUR(); // SET-CUR
void SAVE_dash_BU(); // SAVE-BU
void FLUSH_2(); // FLUSH_2
void PAD_v_16(); // PAD|16
void PAD_gt_SEG(); // PAD>SEG
void GetMODE(); // @MODE
void IsVGA(); // ?VGA
void StoreCOLOR(); // !COLOR
void SETDBUF(); // SETDBUF
void DARK(); // DARK
void LLINE(); // LLINE
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void _gt_3FONT(); // >3FONT
void LDPAL(); // LDPAL
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void DrawRAW(); // .RAW
void _gt_ALPHA(); // >ALPHA
void _gt_A(); // >A
void _gt_LORES(); // >LORES
void H_gt_D(); // H>D
void SCR_dash_RES(); // SCR-RES
void BYE_2(); // BYE_2
void POS_dot_(); // POS.
void Draw1LOGO(); // .1LOGO
void POLY_dash_WI(); // POLY-WI
void BEEPON_2(); // BEEPON_2
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void StorePAL(); // !PAL
void DOS(); // DOS
void PORTM(); // PORTM
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void U_slash_MOD(); // U/MOD
void _gt_(); // >
void _0_gt_(); // 0>
void U_st_(); // U<
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void L_ex_(); // L!
void LC_ex_(); // LC!
void LCMOVE(); // LCMOVE
void GetDS(); // @DS
void GRCALL(); // GRCALL
void L_at_PIXEL(); // L@PIXEL
void PRMSA(); // PRMSA
void PRMLO(); // PRMLO
void RETSA(); // RETSA
void RETJM(); // RETJM


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_WDD2E = 0xdd2e; // WDD2E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDD32 = 0xdd32; // WDD32 size: 226
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xc7, 0x3f, 0x52, 0x45, 0x43, 0x41, 0x4c, 0xcc, 0xac, 0x3c, 0x32, 0x35, 0x34, 0xdd, 0xc8, 0x41, 0x52, 0x54, 0x2d, 0x54, 0x45, 0x58, 0xd4, 0xac, 0x3c, 0xa5, 0xe4, 0xed, 0xdc, 0xc9, 0x41, 0x52, 0x54, 0x2d, 0x41, 0x4e, 0x4c, 0x59, 0xda, 0xac, 0x3c, 0x00, 0x00, 0xcd, 0x3f, 0x45, 0x4e, 0x43, 0x35, 0x36, 0x32, 0x35, 0x35, 0x52, 0x2d, 0x4f, 0xce, 0xac, 0x3c, 0x54, 0xe3, 0x66, 0xdd, 0xc8, 0x45, 0x4e, 0x43, 0x2d, 0x50, 0x41, 0x53, 0xd4, 0xac, 0x3c, 0x59, 0xe3, 0x00, 0x00, 0xcb, 0x45, 0x4e, 0x43, 0x2d, 0x50, 0x52, 0x45, 0x53, 0x45, 0x4e, 0xd4, 0xac, 0x3c, 0x5e, 0xe3, 0x7a, 0xdd, 0xca, 0x43, 0x41, 0x4e, 0x2d, 0x53, 0x57, 0x49, 0x54, 0x43, 0xc8, 0xac, 0x3c, 0x63, 0xe3, 0x89, 0xdd, 0xc6, 0x4b, 0x45, 0x59, 0x49, 0x4e, 0xc3, 0xac, 0x3c, 0x68, 0xe3, 0xac, 0xdd, 0xc5, 0x53, 0x43, 0x41, 0x4e, 0xd2, 0xac, 0x3c, 0x6c, 0xe3, 0xb9, 0xdd, 0xc5, 0x44, 0x58, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x70, 0xe3, 0xc5, 0xdd, 0xc5, 0x44, 0x59, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x74, 0xe3, 0x9b, 0xdd, 0xc4, 0x58, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x78, 0xe3, 0xdd, 0xdd, 0xc4, 0x59, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x7c, 0xe3, 0xe8, 0xdd, 0xc4, 0x58, 0x53, 0x48, 0xd0, 0xac, 0x3c, 0x80, 0xe3, 0xf3, 0xdd, 0xc4, 0x59, 0x53, 0x48, 0xd0, 0xac, 0x3c, 0x84, 0xe3, 0xfe, 0xdd, 0xc8, 0x44, 0x49, 0x53, 0x54, 0x41, 0x4e, 0x29, 0x1d, 0x3a, 0x20}

const unsigned short int pp_WDE16 = 0xde16; // WDE16 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE1A = 0xde1a; // WDE1A size: 2
// {0x37, 0x6f}

const unsigned short int pp_WDE3E = 0xde3e; // WDE3E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE42 = 0xde42; // WDE42 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE46 = 0xde46; // WDE46 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE4A = 0xde4a; // WDE4A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE4E = 0xde4e; // WDE4E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE52 = 0xde52; // WDE52 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE56 = 0xde56; // WDE56 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE5A = 0xde5a; // WDE5A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE5E = 0xde5e; // WDE5E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE62 = 0xde62; // WDE62 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE66 = 0xde66; // WDE66 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE6A = 0xde6a; // WDE6A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE6E = 0xde6e; // WDE6E size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE72 = 0xde72; // WDE72 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE76 = 0xde76; // WDE76 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDE7A = 0xde7a; // WDE7A size: 2
// {0x3a, 0x20}

const unsigned short int pp_WDFB5 = 0xdfb5; // WDFB5 size: 4
// {0x3a, 0x20, 0x05, 0x41}

const unsigned short int pp_WE027 = 0xe027; // WE027 size: 2
// {0x3a, 0x20}

const unsigned short int pp_WE02B = 0xe02b; // WE02B size: 2
// {0x3a, 0x20}

const unsigned short int pp_OPTIO = 0xf219; // OPTIO size: 2
// {0x20, 0x20}


const unsigned short int cc_WDD06 = 0xdd06; // WDD06
const unsigned short int cc_WDD0A = 0xdd0a; // WDD0A
const unsigned short int cc_WDD0E = 0xdd0e; // WDD0E
const unsigned short int cc_WDD12 = 0xdd12; // WDD12
const unsigned short int cc_WDD16 = 0xdd16; // WDD16
const unsigned short int cc_WDD1A = 0xdd1a; // WDD1A
const unsigned short int cc_WDD1E = 0xdd1e; // WDD1E
const unsigned short int cc_WDD22 = 0xdd22; // WDD22
const unsigned short int cc_WDD26 = 0xdd26; // WDD26
const unsigned short int cc_WDD2A = 0xdd2a; // WDD2A
const unsigned short int cc_WDEFA = 0xdefa; // WDEFA
const unsigned short int cc_WDF25 = 0xdf25; // WDF25
const unsigned short int cc_STARE = 0xe05b; // STARE
const unsigned short int cc_STARV = 0xe072; // STARV


// 0xdd02: db 0x85 0x01 '  '

// ================================================
// 0xdd04: WORD 'WDD06' codep=0x2214 wordp=0xdd06
// ================================================
// orphan
// 0xdd06: dw 0x004b

// ================================================
// 0xdd08: WORD 'WDD0A' codep=0x2214 wordp=0xdd0a
// ================================================
// 0xdd0a: dw 0x004b

// ================================================
// 0xdd0c: WORD 'WDD0E' codep=0x2214 wordp=0xdd0e
// ================================================
// 0xdd0e: dw 0x007e

// ================================================
// 0xdd10: WORD 'WDD12' codep=0x2214 wordp=0xdd12
// ================================================
// 0xdd12: dw 0x00ae

// ================================================
// 0xdd14: WORD 'WDD16' codep=0x2214 wordp=0xdd16
// ================================================
// 0xdd16: dw 0x00af

// ================================================
// 0xdd18: WORD 'WDD1A' codep=0x2214 wordp=0xdd1a
// ================================================
// 0xdd1a: dw 0x00b0

// ================================================
// 0xdd1c: WORD 'WDD1E' codep=0x2214 wordp=0xdd1e
// ================================================
// orphan
// 0xdd1e: dw 0x0004

// ================================================
// 0xdd20: WORD 'WDD22' codep=0x2214 wordp=0xdd22
// ================================================
// orphan
// 0xdd22: dw 0x0000

// ================================================
// 0xdd24: WORD 'WDD26' codep=0x2214 wordp=0xdd26
// ================================================
// 0xdd26: dw 0x0400

// ================================================
// 0xdd28: WORD 'WDD2A' codep=0x2214 wordp=0xdd2a
// ================================================
// 0xdd2a: dw 0x3a48

// ================================================
// 0xdd2c: WORD 'WDD2E' codep=0x1d29 wordp=0xdd2e
// ================================================
// 0xdd2e: db 0x3a 0x20 ': '

// ================================================
// 0xdd30: WORD 'WDD32' codep=0x1d29 wordp=0xdd32
// ================================================
// 0xdd32: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xc7 0x3f 0x52 0x45 0x43 0x41 0x4c 0xcc 0xac 0x3c 0x32 0x35 0x34 0xdd 0xc8 0x41 0x52 0x54 0x2d 0x54 0x45 0x58 0xd4 0xac 0x3c 0xa5 0xe4 0xed 0xdc 0xc9 0x41 0x52 0x54 0x2d 0x41 0x4e 0x4c 0x59 0xda 0xac 0x3c 0x00 0x00 0xcd 0x3f 0x45 0x4e 0x43 0x35 0x36 0x32 0x35 0x35 0x52 0x2d 0x4f 0xce 0xac 0x3c 0x54 0xe3 0x66 0xdd 0xc8 0x45 0x4e 0x43 0x2d 0x50 0x41 0x53 0xd4 0xac 0x3c 0x59 0xe3 0x00 0x00 0xcb 0x45 0x4e 0x43 0x2d 0x50 0x52 0x45 0x53 0x45 0x4e 0xd4 0xac 0x3c 0x5e 0xe3 0x7a 0xdd 0xca 0x43 0x41 0x4e 0x2d 0x53 0x57 0x49 0x54 0x43 0xc8 0xac 0x3c 0x63 0xe3 0x89 0xdd 0xc6 0x4b 0x45 0x59 0x49 0x4e 0xc3 0xac 0x3c 0x68 0xe3 0xac 0xdd 0xc5 0x53 0x43 0x41 0x4e 0xd2 0xac 0x3c 0x6c 0xe3 0xb9 0xdd 0xc5 0x44 0x58 0x43 0x52 0xd3 0xac 0x3c 0x70 0xe3 0xc5 0xdd 0xc5 0x44 0x59 0x43 0x52 0xd3 0xac 0x3c 0x74 0xe3 0x9b 0xdd 0xc4 0x58 0x43 0x52 0xd3 0xac 0x3c 0x78 0xe3 0xdd 0xdd 0xc4 0x59 0x43 0x52 0xd3 0xac 0x3c 0x7c 0xe3 0xe8 0xdd 0xc4 0x58 0x53 0x48 0xd0 0xac 0x3c 0x80 0xe3 0xf3 0xdd 0xc4 0x59 0x53 0x48 0xd0 0xac 0x3c 0x84 0xe3 0xfe 0xdd 0xc8 0x44 0x49 0x53 0x54 0x41 0x4e 0x29 0x1d 0x3a 0x20 ':  ALLOT  ?RECAL  <254  ART-TEX  <     ART-ANLY  <   ?ENC56255R-O  <T f  ENC-PAS  <Y    ENC-PRESEN  <^ z  CAN-SWITC  <c    KEYIN  <h    SCAN  <l    DXCR  <p    DYCR  <t    XCR  <x    YCR  <|    XSH  <     YSH  <     DISTAN) : '

// ================================================
// 0xde14: WORD 'WDE16' codep=0x1d29 wordp=0xde16
// ================================================
// 0xde16: db 0x3a 0x20 ': '

// ================================================
// 0xde18: WORD 'WDE1A' codep=0x1d29 wordp=0xde1a
// ================================================
// 0xde1a: db 0x37 0x6f '7o'

// ================================================
// 0xde1c: WORD 'WDE1E' codep=0x224c wordp=0xde1e
// ================================================

void WDE1E() // WDE1E
{
  Push(Read16(cc_DX)); // DX
  Store_2(); // !_2
  Push(0x001a);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0xde2a: WORD 'WDE2C' codep=0x224c wordp=0xde2c
// ================================================

void WDE2C() // WDE2C
{
  Push(Read16(pp_FONTSEG)); // FONTSEG @
  Push(0x008f);
  Func6("FILE-#R");
  Push(Read16(Pop())); //  @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xde3c: WORD 'WDE3E' codep=0x1d29 wordp=0xde3e
// ================================================
// 0xde3e: db 0x3a 0x20 ': '

// ================================================
// 0xde40: WORD 'WDE42' codep=0x1d29 wordp=0xde42
// ================================================
// 0xde42: db 0x3a 0x20 ': '

// ================================================
// 0xde44: WORD 'WDE46' codep=0x1d29 wordp=0xde46
// ================================================
// 0xde46: db 0x3a 0x20 ': '

// ================================================
// 0xde48: WORD 'WDE4A' codep=0x1d29 wordp=0xde4a
// ================================================
// 0xde4a: db 0x3a 0x20 ': '

// ================================================
// 0xde4c: WORD 'WDE4E' codep=0x1d29 wordp=0xde4e
// ================================================
// 0xde4e: db 0x3a 0x20 ': '

// ================================================
// 0xde50: WORD 'WDE52' codep=0x1d29 wordp=0xde52
// ================================================
// 0xde52: db 0x3a 0x20 ': '

// ================================================
// 0xde54: WORD 'WDE56' codep=0x1d29 wordp=0xde56
// ================================================
// 0xde56: db 0x3a 0x20 ': '

// ================================================
// 0xde58: WORD 'WDE5A' codep=0x1d29 wordp=0xde5a
// ================================================
// 0xde5a: db 0x3a 0x20 ': '

// ================================================
// 0xde5c: WORD 'WDE5E' codep=0x1d29 wordp=0xde5e
// ================================================
// 0xde5e: db 0x3a 0x20 ': '

// ================================================
// 0xde60: WORD 'WDE62' codep=0x1d29 wordp=0xde62
// ================================================
// 0xde62: db 0x3a 0x20 ': '

// ================================================
// 0xde64: WORD 'WDE66' codep=0x1d29 wordp=0xde66
// ================================================
// orphan
// 0xde66: db 0x3a 0x20 ': '

// ================================================
// 0xde68: WORD 'WDE6A' codep=0x1d29 wordp=0xde6a
// ================================================
// 0xde6a: db 0x3a 0x20 ': '

// ================================================
// 0xde6c: WORD 'WDE6E' codep=0x1d29 wordp=0xde6e
// ================================================
// 0xde6e: db 0x3a 0x20 ': '

// ================================================
// 0xde70: WORD 'WDE72' codep=0x1d29 wordp=0xde72
// ================================================
// 0xde72: db 0x3a 0x20 ': '

// ================================================
// 0xde74: WORD 'WDE76' codep=0x1d29 wordp=0xde76
// ================================================
// 0xde76: db 0x3a 0x20 ': '

// ================================================
// 0xde78: WORD 'WDE7A' codep=0x1d29 wordp=0xde7a
// ================================================
// 0xde7a: db 0x3a 0x20 ': '

// ================================================
// 0xde7c: WORD 'WDE7E' codep=0x224c wordp=0xde7e
// ================================================

void WDE7E() // WDE7E
{
  unsigned short int i, imax, j, jmax;
  USING(); // USING
  DOS(); // DOS
  Push(Read16(regsp)); // DUP
  RECSIZE(); // RECSIZE
  Store_2(); // !_2
  SYSUTIL(); // SYSUTIL
  MAKE_st_NA(); // MAKE<NA
  RECSIZE(); // RECSIZE
  Store_2(); // !_2
  Push(pp_WDE7A); // WDE7A
  _099(); // 099
  SYSTEM(); // SYSTEM
  SWAP(); // SWAP
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {

    i = 0;
    imax = Pop();
    do // (DO)
    {
      PAD(); // PAD
      WDE1E(); // WDE1E
      READNEX(); // READNEX
      Push(Read16(regsp)); // DUP
      Push(pp_WDE7A); // WDE7A
      Store_2(); // !_2
      if (Pop() != 0)
      {
        imax = i; // LEAVE
      }
      i++;
    } while(i<imax); // (LOOP)

  }
  Push(Read16(pp_WDE7A)); // WDE7A @
  if (Pop() != 0)
  {
    Pop(); // DROP
  } else
  {

    j = 0;
    jmax = Pop();
    do // (DO)
    {
      PAD(); // PAD
      WDE1E(); // WDE1E
      SYSTEM(); // SYSTEM
      READNEX(); // READNEX
      Push(Read16(regsp)); // DUP
      Push(pp_WDE7A); // WDE7A
      Store_2(); // !_2
      if (Pop() != 0)
      {
        jmax = j; // LEAVE
      } else
      {
        SYSUTIL(); // SYSUTIL
        PAD(); // PAD
        WDE1E(); // WDE1E
        WRITENE(); // WRITENE
        IsUNRAVEL(); // ?UNRAVEL
      }
      j++;
    } while(j<jmax); // (LOOP)

  }
  SYSUTIL(); // SYSUTIL
  CLOSE(); // CLOSE
  Pop(); // DROP
}


// ================================================
// 0xdef8: WORD 'WDEFA' codep=0x2214 wordp=0xdefa
// ================================================
// 0xdefa: dw 0x000f

// ================================================
// 0xdefc: WORD 'HOST' codep=0x53f7 wordp=0xdf05
// ================================================
// 0xdf05: db 0xa8 0x2c 0xd4 0x40 0xef 0x09 0xc0 0x5e 0x3b 0x57 0x2d 0x57 0x2b 0x54 0xfe 0x59 0xa9 0x53 0xb8 0x51 0x1b 0x5f 0x08 0x52 0x36 0x54 0xc8 0x84 0x10 0x54 ' , @   ^;W-W+T Y S Q _ R6T   T'

// ================================================
// 0xdf23: WORD 'WDF25' codep=0x2214 wordp=0xdf25
// ================================================
// 0xdf25: dw 0x0012

// ================================================
// 0xdf27: WORD 'VECTORS' codep=0x53f7 wordp=0xdf33
// ================================================
// 0xdf33: db 0x47 0x57 0x54 0x57 0x77 0x5a 0x6c 0x5a 0x61 0x5a 0x56 0x5a 0x48 0x5a 0x3d 0x5a 0x8f 0x57 0x0e 0x46 0xe6 0x07 0xfa 0x07 0x5b 0x6c 0x88 0x01 0x8a 0x01 0x12 0x64 0x14 0x64 0x84 0x5a 'GWTWwZlZaZVZHZ=Z W F    [l     d d Z'

// ================================================
// 0xdf57: WORD 'WDF59' codep=0x224c wordp=0xdf59
// ================================================

void WDF59() // WDF59
{
  unsigned short int a;
  Push(Read16(pp_ICON_h_)); // ICON^ @
  a = Pop(); // >R
  Push(Read16(a)); // R@
  Push(0x003e);
  FILE_st_(); // FILE<
  Push(Read16(a)); // R@
  Push(Pop() + 0x0043); //  0x0043 +
  Push(0x003f);
  FILE_st_(); // FILE<
  Push(a + 0x0086); // R> 0x0086 +
  Push(0x0040);
  FILE_st_(); // FILE<
}


// ================================================
// 0xdf85: WORD 'WDF87' codep=0x224c wordp=0xdf87
// ================================================

void WDF87() // WDF87
{
  Push(0);
  Push(Read16(cc_DX)); // DX
  C_ex__2(); // C!_2
  Push(0x0036);
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_DX))); // DX @
  Push(0);
  Push(Read16(Read16(cc_AX))); // AX @
  Push(0x0400);
  Push(Read16(Read16(cc_CX))); // CX @
  _slash_(); // /
  M_star__slash_(); // M*/
  Push(0x05dc); Push(0x0000);
  D_gt_(); // D>
}


// ================================================
// 0xdfb3: WORD 'WDFB5' codep=0x1d29 wordp=0xdfb5
// ================================================
// orphan
// 0xdfb5: db 0x3a 0x20 0x05 0x41 ':  A'

// ================================================
// 0xdfb9: WORD 'WDFBB' codep=0x224c wordp=0xdfbb
// ================================================
// orphan

void WDFBB() // WDFBB
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(Read16(regsp)); // DUP
  Push(0x004b);
  FILE_st_(); // FILE<
  Push(0);
  Push(0x6b04); // 'GPOLY'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(0);
  Push(0x0164);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xdfdd: WORD 'WDFDF' codep=0x224c wordp=0xdfdf
// ================================================

void WDFDF() // WDFDF
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(Read16(regsp)); // DUP
  Push(0x004c);
  FILE_st_(); // FILE<
  Push(0);
  Push(0x6abb); // 'FACET'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(0);
  Push(0x0120);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xe001: WORD 'WE003' codep=0x224c wordp=0xe003
// ================================================

void WE003() // WE003
{
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(Read16(regsp)); // DUP
  Push(0x004d);
  FILE_st_(); // FILE<
  Push(0);
  Push(0x6aa9); // 'VERTEX'
  Push(Read16(Pop() + 6)); //  6 + @
  Push(0);
  Push(0x0192);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xe025: WORD 'WE027' codep=0x1d29 wordp=0xe027
// ================================================
// 0xe027: db 0x3a 0x20 ': '

// ================================================
// 0xe029: WORD 'WE02B' codep=0x1d29 wordp=0xe02b
// ================================================
// 0xe02b: db 0x3a 0x20 ': '

// ================================================
// 0xe02d: WORD 'WE02F' codep=0x224c wordp=0xe02f params=1 returns=0
// ================================================

void WE02F() // WE02F
{
  Push(pp_WE027); // WE027
  Store_2(); // !_2
  Push(pp_WE02B); // WE02B
  _099(); // 099
}


// ================================================
// 0xe039: WORD 'WE03B' codep=0x224c wordp=0xe03b params=2 returns=0
// ================================================

void WE03B() // WE03B
{
  Push(Read16(pp_WE027) + Read16(pp_WE02B)); // WE027 @ WE02B @ +
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(pp_WE02B); // WE02B
  _plus__ex__2(); // +!_2
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xe051: WORD 'STARE' codep=0x2214 wordp=0xe05b
// ================================================
// 0xe05b: dw 0xe05e
// 0xe05d: db 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x65 0x67 0x61 0x00 ' stars.ega '

// ================================================
// 0xe068: WORD 'STARV' codep=0x2214 wordp=0xe072
// ================================================
// 0xe072: dw 0xe075
// 0xe074: db 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x76 0x67 0x61 0x00 ' stars.vga '

// ================================================
// 0xe07f: WORD 'WE081' codep=0x224c wordp=0xe081 params=3 returns=0
// ================================================

void WE081() // WE081
{
  unsigned short int a;
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  Push(0);
  Push(0x060d);
  LCMOVE(); // LCMOVE
  Push(0xb603); // 'SETABLT'
  MODULE(); // MODULE
  a = Pop(); // >R
  Push(0x0012);
  BMOFF(); // BMOFF
  Store_2(); // !_2
  Push(Read16(a)); // R@
  BMSEG(); // BMSEG
  Store_2(); // !_2
  Push(0);
  BMPAL(); // BMPAL
  Push(Pop() - 1); //  1-
  Store_2(); // !_2
  GetDS(); // @DS
  Push(pp_BMAP); // BMAP
  Push(Read16(a)); // R@
  Push(0);
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    WDE2C(); // WDE2C
    Push(2);
  } else
  {
    Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
    Push(0x000d);
  }
  Push(a); // R>
  Push(0x0012);
  Push(0x078a);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xe0df: WORD 'WE0E1' codep=0x224c wordp=0xe0e1
// ================================================

void WE0E1() // WE0E1
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    Push(Read16(cc_STARV)); // STARV
  } else
  {
    Push(Read16(cc_STARE)); // STARE
  }
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  _ro_LDS_rc_(); // (LDS)
  MOUNTA(); // MOUNTA
  Push(Read16(pp_LSYSEG)); // LSYSEG @
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  Push(0x04e2);
  WE081(); // WE081
  Push(Read16(pp_MSYSEG)); // MSYSEG @
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  Push(0x018d);
  WE081(); // WE081
  Push(Read16(pp_SSYSEG)); // SSYSEG @
  Push(Read16(regsp)); // DUP
  Push(0);
  WE081(); // WE081
  WDFBB(); // WDFBB
  WDFDF(); // WDFDF
  WE003(); // WE003
}


// ================================================
// 0xe125: WORD 'WE127' codep=0x224c wordp=0xe127 params=0 returns=0
// ================================================

void WE127() // WE127
{
  PRINT("1. SAVE GAME & RESUME", 21); // (.")
}


// ================================================
// 0xe141: WORD 'WE143' codep=0x224c wordp=0xe143 params=0 returns=0
// ================================================

void WE143() // WE143
{
  PRINT("3. RESUME WITHOUT SAVING", 24); // (.")
}


// ================================================
// 0xe160: WORD 'WE162' codep=0x224c wordp=0xe162 params=0 returns=0
// ================================================

void WE162() // WE162
{
  PRINT("2. SAVE GAME & QUIT", 19); // (.")
}


// ================================================
// 0xe17a: WORD 'WE17C' codep=0x224c wordp=0xe17c params=0 returns=0
// ================================================

void WE17C() // WE17C
{
  PRINT("7. QUIT WITHOUT SAVING", 22); // (.")
}


// ================================================
// 0xe197: WORD 'WE199' codep=0x224c wordp=0xe199 params=0 returns=1
// ================================================

void WE199() // WE199
{
  GetDS(); // @DS
  Push(Pop() + 0x1000); //  0x1000 +
}


// ================================================
// 0xe1a3: WORD 'WE1A5' codep=0x224c wordp=0xe1a5 params=0 returns=0
// ================================================

void WE1A5() // WE1A5
{
  WE199(); // WE199
  Push(pp_WDE1A); // WDE1A
  Store_2(); // !_2
}


// ================================================
// 0xe1ad: WORD 'WE1AF' codep=0x224c wordp=0xe1af
// ================================================

void WE1AF() // WE1AF
{
  unsigned short int i, imax, j, jmax;
  PAD(); // PAD
  Push(0x000e);
  Push(0);
  FILL_2(); // FILL_2
  GetDS(); // @DS
  PAD(); // PAD
  Push(Read16(pp_WDE1A)); // WDE1A @
  Push(0);
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(0x000c);
  SWAP(); // SWAP
  Push(Read16(regsp)); // DUP
  Push(Pop() - 0x0064); //  0x0064 -
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {

    j = 0;
    jmax = 0x0140;
    do // (DO)
    {
      Push(Pop() + 1); //  1+
      Push(Read16(regsp)); // DUP
      Push(j); // I
      Push(i); // J
      L_at_PIXEL(); // L@PIXEL
      Push((Pop() & 0x000f) >> 4); //  0x000f AND 16*
      Push(j + 1); // I 1+
      Push(i); // J
      L_at_PIXEL(); // L@PIXEL
      Push(Pop() & 0x000f); //  0x000f AND
      Push(Pop() + Pop()); // +
      Push(Read16(pp_WDE1A)); // WDE1A @
      ROT(); // ROT
      LC_ex_(); // LC!
      Push(2);
      int step = Pop();
      j += step;
      if (((step>=0) && (j>=jmax)) || ((step<0) && (j<=jmax))) break;
    } while(1); // (+LOOP)

    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); // DROP
  Push(0x0140);
  Push(Read16(regsp)); // DUP
  Push(Read16(pp_WDE1A)); // WDE1A @
  Push(3);
  L_ex_(); // L!
  Push(Pop() >> 1); //  2/
  Push(Read16(pp_WDE1A)); // WDE1A @
  Push(9);
  LC_ex_(); // LC!
  Push(0x0064);
  Push(Read16(pp_WDE1A)); // WDE1A @
  Push(0x000a);
  LC_ex_(); // LC!
}


// ================================================
// 0xe243: WORD 'WE245' codep=0x224c wordp=0xe245 params=2 returns=0
// ================================================

void WE245() // WE245
{
  Push(pp_WE02B); // WE02B
  Store_2(); // !_2
  Push(pp_WDE62); // WDE62
  Store_2(); // !_2
}


// ================================================
// 0xe24f: WORD 'WE251' codep=0x224c wordp=0xe251 params=0 returns=1
// ================================================

void WE251() // WE251
{
  Push(Read16(pp_WDE42) - Read16(pp_WDE3E)); // WDE42 @ WDE3E @ -
  Push(Read16(pp_WDE52)); // WDE52 @
  _slash_(); // /
  Push(pp_WDE5A); // WDE5A
  Store_2(); // !_2
}


// ================================================
// 0xe267: WORD 'WE269' codep=0x224c wordp=0xe269 params=0 returns=1
// ================================================

void WE269() // WE269
{
  Push(Read16(pp_WDE46) - Read16(pp_WDE4A)); // WDE46 @ WDE4A @ -
  Push(Read16(pp_WDE4E) + Read16(pp_WDE56)); // WDE4E @ WDE56 @ +
  _slash_(); // /
  Push(pp_WDE5E); // WDE5E
  Store_2(); // !_2
}


// ================================================
// 0xe285: WORD 'WE287' codep=0x224c wordp=0xe287 params=1 returns=1
// ================================================

void WE287() // WE287
{
  while(1)
  {
    Push(Read16(regsp)); // DUP
    Push(!((Read16(Pop())&0xFF)==Read16(cc_BL)?1:0)); //  C@ BL = NOT
    if (Pop() == 0) return;
    Push(Pop() - 1); //  1-
  }
}


// ================================================
// 0xe29d: WORD 'WE29F' codep=0x224c wordp=0xe29f params=0 returns=0
// ================================================

void WE29F() // WE29F
{
  Push(Read16(pp_WDE62)); // WDE62 @
  Push(pp_WDE6E); // WDE6E
  Store_2(); // !_2
  Push(1);
  Push(pp_WDE6A); // WDE6A
  Store_2(); // !_2
  while(1)
  {
    Push(Read16(pp_WDE6E) + Read16(pp_WDE5A)); // WDE6E @ WDE5A @ +
    Push(Read16(regsp)); // DUP
    Push(Read16(pp_WDE62) + Read16(pp_WE02B)); // WDE62 @ WE02B @ +
    U_st_(); // U<
    if (Pop() == 0) break;

    WE287(); // WE287
    Push(Pop() + 1); //  1+
    Push(pp_WDE6E); // WDE6E
    Store_2(); // !_2
    Push(1);
    Push(pp_WDE6A); // WDE6A
    _plus__ex__2(); // +!_2
  }
  Pop(); // DROP
}


// ================================================
// 0xe2df: WORD 'WE2E1' codep=0x224c wordp=0xe2e1 params=0 returns=0
// ================================================

void WE2E1() // WE2E1
{
  WE29F(); // WE29F
  Push(-((Read16(pp_WDE5E) - Read16(pp_WDE6A) >> 1) * (Read16(pp_WDE4E) + Read16(pp_WDE56))) + Read16(pp_WDE46)); // WDE5E @ WDE6A @ - 2/ WDE4E @ WDE56 @ + * NEGATE WDE46 @ +
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
}


// ================================================
// 0xe309: WORD 'WE30B' codep=0x224c wordp=0xe30b
// ================================================

void WE30B() // WE30B
{
  _gt_HIDDEN(); // >HIDDEN
  Push(Read16(pp_YBLT)); // YBLT @
  Push(0x0384);
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push(0);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  Push(Read16(pp_WDE6E)); // WDE6E @
  Push(Read16(pp_WDE72)); // WDE72 @
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(pp_YBLT); // YBLT
  Store_2(); // !_2
  Push((Read16(pp_WDE42) + Read16(pp_WDE3E) >> 1) + -(Read16(pp_XBLT) >> 1)); // WDE42 @ WDE3E @ + 2/ XBLT @ 2/ NEGATE +
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  DARK(); // DARK
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xe34d: WORD 'WE34F' codep=0x224c wordp=0xe34f
// ================================================

void WE34F() // WE34F
{
  WE30B(); // WE30B
  Push(Read16(pp_WDE6E)); // WDE6E @
  Push(Read16(pp_WDE72)); // WDE72 @
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe35d: WORD 'WE35F' codep=0x224c wordp=0xe35f
// ================================================

void WE35F() // WE35F
{
  WE2E1(); // WE2E1
  Push(Read16(pp_WDE62)); // WDE62 @
  Push(pp_WDE6E); // WDE6E
  Store_2(); // !_2
  while(1)
  {
    Push(Read16(pp_WDE6E) + Read16(pp_WDE5A)); // WDE6E @ WDE5A @ +
    Push(Read16(regsp)); // DUP
    Push(Read16(pp_WDE62) + Read16(pp_WE02B)); // WDE62 @ WE02B @ +
    U_st_(); // U<
    if (Pop() == 0) break;

    WE287(); // WE287
    Push(Pop() - Read16(pp_WDE6E)); //  WDE6E @ -
    Push(pp_WDE72); // WDE72
    Store_2(); // !_2
    WE34F(); // WE34F
    Push(-(Read16(pp_WDE4E) + Read16(pp_WDE56))); // WDE4E @ WDE56 @ + NEGATE
    Push(pp_YBLT); // YBLT
    _plus__ex__2(); // +!_2
    Push(Read16(pp_WDE72) + 1); // WDE72 @ 1+
    Push(pp_WDE6E); // WDE6E
    _plus__ex__2(); // +!_2
  }
  Pop(); // DROP
  Push((Read16(pp_WDE62) + Read16(pp_WE02B)) - Read16(pp_WDE6E)); // WDE62 @ WE02B @ + WDE6E @ -
  Push(pp_WDE72); // WDE72
  Store_2(); // !_2
  WE34F(); // WE34F
}


// ================================================
// 0xe3cb: WORD 'WE3CD' codep=0x224c wordp=0xe3cd
// ================================================

void WE3CD() // WE3CD
{
  WE245(); // WE245
  WE251(); // WE251
  WE269(); // WE269
  WE35F(); // WE35F
}


// ================================================
// 0xe3d7: WORD 'WE3D9' codep=0x224c wordp=0xe3d9 params=0 returns=0
// ================================================

void WE3D9() // WE3D9
{
  Push(0x0014);
  Push(pp_WDE3E); // WDE3E
  Store_2(); // !_2
  Push(0x008c);
  Push(pp_WDE42); // WDE42
  Store_2(); // !_2
  Push(0x0028);
  Push(pp_WDE4A); // WDE4A
  Store_2(); // !_2
  Push(0x0096);
  Push(pp_WDE46); // WDE46
  Store_2(); // !_2
  Push(3);
  Push(pp_WDE56); // WDE56
  Store_2(); // !_2
  Push(9);
  Push(pp_WDE4E); // WDE4E
  Store_2(); // !_2
  Push(6);
  Push(pp_WDE52); // WDE52
  Store_2(); // !_2
}


// ================================================
// 0xe40d: WORD 'WE40F' codep=0x224c wordp=0xe40f
// ================================================

void WE40F() // WE40F
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(Read16(pp_COLOR)); // COLOR @
  Push(0x0096);
  Push(0x0014);
  Push(0x001e);
  Push(0x0099);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe42f: WORD 'WE431' codep=0x224c wordp=0xe431
// ================================================

void WE431() // WE431
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(Read16(pp_COLOR)); // COLOR @
  Push(0x0011);
  Push(0x0014);
  Push(5);
  Push(0x009f);
  GetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe44f: WORD 'WE451' codep=0x224c wordp=0xe451
// ================================================

void WE451() // WE451
{
  WE3D9(); // WE3D9
  _gt_DISPLA(); // >DISPLA
  WE40F(); // WE40F
  _gt_2FONT(); // >2FONT
  WE3CD(); // WE3CD
}


// ================================================
// 0xe45d: WORD 'WE45F' codep=0x224c wordp=0xe45f
// ================================================

void WE45F() // WE45F
{
  GetColor(WHITE);
  StoreCOLOR(); // !COLOR
  Push(5);
  Push(0x009b);
  Push(0x000a);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x000a);
  Push(0x00a0);
  Push(0x0096);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x00a0);
  Push(0x009b);
  Push(0x009b);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x009b);
  Push(0x009b);
  Push(0x0019);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x0019);
  Push(0x0096);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x0014);
  Push(0x0014);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0014);
  Push(0x0014);
  Push(0x0011);
  Push(0x0017);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x0017);
  Push(0x0011);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x001e);
  Push(0x000e);
  Push(0x0021);
  LLINE(); // LLINE
  Push(0x000e);
  Push(0x0021);
  Push(8);
  Push(0x0021);
  LLINE(); // LLINE
  Push(8);
  Push(0x0021);
  Push(5);
  Push(0x0024);
  LLINE(); // LLINE
  Push(5);
  Push(0x0024);
  Push(5);
  Push(0x009b);
  LLINE(); // LLINE
  Push(5);
  Push(0x001d);
  Push(Read16(pp_COLOR)); // COLOR @
  Draw1LOGO(); // .1LOGO
}


// ================================================
// 0xe53d: WORD 'WE53F' codep=0x224c wordp=0xe53f
// ================================================

void WE53F() // WE53F
{
  _gt_2FONT(); // >2FONT
  Push(0x0014);
  Push(0x0011);
  POS_dot_(); // POS.
  WE431(); // WE431
  PRINT("PRESS ANY KEY TO CONTINUE", 25); // (.")
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xe56f: WORD 'WE571' codep=0x224c wordp=0xe571
// ================================================

void WE571() // WE571
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  WE45F(); // WE45F
  BEEPOFF(); // BEEPOFF
  _gt_3FONT(); // >3FONT
  Push(0x002e);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("GAME", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("OPTIONS", 7); // (.")
  _gt_2FONT(); // >2FONT
  Push(0x0027);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("SELECT AN OPTION", 16); // (.")
  WDF87(); // WDF87
  if (Pop() != 0)
  {
    Push(0x0021);
    Push(0x0082);
    POS_dot_(); // POS.
    WE127(); // WE127
  }
  Push(0x0021);
  Push(0x006e);
  POS_dot_(); // POS.
  WE162(); // WE162
  Push(0x0021);
  Push(0x005a);
  POS_dot_(); // POS.
  WE143(); // WE143
  Push(0x0021);
  Push(0x0046);
  POS_dot_(); // POS.
  WE17C(); // WE17C
}


// ================================================
// 0xe5f5: WORD 'WE5F7' codep=0x224c wordp=0xe5f7
// ================================================
// orphan

void WE5F7() // WE5F7
{
  SET_STR_AS_PARAM("LOADING GAME");
  WE451(); // WE451
}


// ================================================
// 0xe60a: WORD 'WE60C' codep=0x224c wordp=0xe60c
// ================================================

void WE60C() // WE60C
{
  _gt_2FONT(); // >2FONT
  SET_STR_AS_PARAM("COMPLETED");
  WE451(); // WE451
  Push(0x001e);
  Push(0x0011);
  POS_dot_(); // POS.
  WE431(); // WE431
  PRINT("PRESS ANY KEY TO EXIT", 21); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  _gt_A(); // >A
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  BYE_2(); // BYE_2
}


// ================================================
// 0xe650: WORD 'WE652' codep=0x224c wordp=0xe652
// ================================================

void WE652() // WE652
{
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
    Push(pp_WDE76); // WDE76
    Store_2(); // !_2
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xe672: WORD 'WE674' codep=0x224c wordp=0xe674 params=1 returns=0
// ================================================

void WE674() // WE674
{
  Push(pp_TIMESTA); // TIMESTA
  Store_2(); // !_2
}


// ================================================
// 0xe67a: WORD 'WE67C' codep=0x224c wordp=0xe67c params=0 returns=1
// ================================================

void WE67C() // WE67C
{
  Push(Read16(pp_TIMESTA)); // TIMESTA @
}


// ================================================
// 0xe682: WORD 'WE684' codep=0x224c wordp=0xe684 params=1 returns=0
// ================================================

void WE684() // WE684
{
  Push(Read16(regsp)); // DUP
  SIGFLD(":TIMEST");
  Store_2(); // !_2
}


// ================================================
// 0xe68c: WORD 'WE68E' codep=0x224c wordp=0xe68e params=1 returns=0
// ================================================

void WE68E() // WE68E
{
  TIME(); // TIME
  Push(Read16(Pop() + 2)); //  2+ @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    Push(2);
  }
  WE674(); // WE674
}


// ================================================
// 0xe6a2: WORD 'WE6A4' codep=0x224c wordp=0xe6a4
// ================================================

void WE6A4() // WE6A4
{
  WE67C(); // WE67C
  WE68E(); // WE68E
  WE67C(); // WE67C
  SWAP(); // SWAP
  WE674(); // WE674
  MOUNTA(); // MOUNTA
  WE684(); // WE684
  MOUNTB(); // MOUNTB
  WE684(); // WE684
  WE674(); // WE674
}


// ================================================
// 0xe6ba: WORD 'WE6BC' codep=0x224c wordp=0xe6bc params=0 returns=1
// ================================================

void WE6BC() // WE6BC
{
  Push(Read16(pp_OVA) - 0x01f4); // OVA @ 0x01f4 -
}


// ================================================
// 0xe6c8: WORD 'WE6CA' codep=0x224c wordp=0xe6ca
// ================================================

void WE6CA() // WE6CA
{
  WE6BC(); // WE6BC
  Push(Pop() + 0x0032); //  0x0032 +
  WE02F(); // WE02F
  DARK(); // DARK
  WE45F(); // WE45F
  SET_STR_AS_PARAM("PLACE DISK CONTAINING FILE ");
  WE03B(); // WE03B
  NAM(); // NAM
  Push(8);
  _dash_TRAILING(); // -TRAILING
  WE03B(); // WE03B
  Push(0x002e);
  WE6BC(); // WE6BC
  C_ex__2(); // C!_2
  TYP(); // TYP
  WE6BC(); // WE6BC
  Push(Pop() + 1); //  1+
  Push(3);
  CMOVE_2(); // CMOVE_2
  WE6BC(); // WE6BC
  Push(4);
  WE03B(); // WE03B
  SET_STR_AS_PARAM(" INTO ");
  WE03B(); // WE03B
  DRV(); // DRV
  Push(Read16(Pop())&0xFF); //  C@
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("DRIVE ");
    WE6BC(); // WE6BC
    SWAP(); // SWAP
    CMOVE_2(); // CMOVE_2
    Push(Pop() + 0x0040); //  0x0040 +
    WE6BC(); // WE6BC
    Push(Pop() + 7); //  7 +
    C_ex__2(); // C!_2
    WE6BC(); // WE6BC
    Push(7);
  } else
  {
    SET_STR_AS_PARAM("ANY DRIVE");
  }
  WE03B(); // WE03B
  Push(Read16(pp_WE027)); // WE027 @
  Push(Read16(pp_WE02B)); // WE02B @
  WE451(); // WE451
  WE53F(); // WE53F
}


// ================================================
// 0xe76e: WORD 'WE770' codep=0x224c wordp=0xe770
// ================================================

void WE770() // WE770
{
  WE6BC(); // WE6BC
  Push(Pop() + 0x0032); //  0x0032 +
  WE02F(); // WE02F
  DARK(); // DARK
  WE45F(); // WE45F
  SET_STR_AS_PARAM("PLACE DISK CONTAINING THE CORRECT ");
  WE03B(); // WE03B
  WE03B(); // WE03B
  SET_STR_AS_PARAM(" FILE");
  WE03B(); // WE03B
  Push(Read16(pp_WE027)); // WE027 @
  Push(Read16(pp_WE02B)); // WE02B @
  WE451(); // WE451
  WE53F(); // WE53F
}


// ================================================
// 0xe7bf: WORD 'WE7C1' codep=0x224c wordp=0xe7c1 params=0 returns=0
// ================================================

void WE7C1() // WE7C1
{
  unsigned short int a;
  Push(Read16(pp_PIC_n_)); // PIC# @
  a = Pop(); // >R
  Push(Read16(a)); // R@
  if (Pop() != 0)
  {
    Push(Read16(a)); // R@
    Push(0x000e);
    _gt_(); // >
    if (Pop() != 0)
    {
      Push(0xba0a); // 'LDAPIC'
      MODULE(); // MODULE
    }
    IsVGA(); // ?VGA
    if (Pop() != 0)
    {
      Push(Read16(a)); // R@
      Push(0x000f);
      Push(0x0022);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        Push(Read16(a)); // R@
        Push(Pop() - 0x000f); //  0x000f -
        Push(0xb9e8); // '.APIC'
        MODULE(); // MODULE
      } else
      {
        Push(Read16(a)); // R@
        Push(0);
        Push(0x000f);
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          Push(Read16(a)); // R@
          Push(0xb9c8); // '@.HYBR'
          MODULE(); // MODULE
        }
      }
    }
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xe823: WORD 'WE825' codep=0x224c wordp=0xe825
// ================================================

void WE825() // WE825
{
  WE431(); // WE431
  BEEP(); // BEEP
  SET_STR_AS_PARAM("SAVED GAME INTEGRITY ERROR.");
  WE451(); // WE451
  WE60C(); // WE60C
}


// ================================================
// 0xe84d: WORD 'WE84F' codep=0x224c wordp=0xe84f params=1 returns=0
// ================================================

void WE84F() // WE84F
{
  SIGFLD(":SAVE");
  Push(!Read16(Pop())); //  @ NOT
  if (Pop() == 0) return;
  WE431(); // WE431
  BEEP(); // BEEP
  SET_STR_AS_PARAM("GAME IN PROGRESS WAS NOT SAVED.");
  WE451(); // WE451
  _i_KEY(); // 'KEY
  Pop(); // DROP
  WE53F(); // WE53F
  WE60C(); // WE60C
}


// ================================================
// 0xe88b: WORD 'WE88D' codep=0x224c wordp=0xe88d
// ================================================

void WE88D() // WE88D
{
  Push(0x00ff);
  Push(pp_DERROR); // DERROR
  Store_2(); // !_2
  GetDS(); // @DS
  PAD(); // PAD
  Push(Pop() + 0x0032); //  0x0032 +
  Push(pp_DTA_1); // DTA_1
  _2_ex__2(); // 2!_2
  DOS_dash_DTA(); // DOS-DTA
  Push(0);
  RELREC(); // RELREC
  Store_2(); // !_2
  Push(1);
  RECSIZE(); // RECSIZE
  Store_2(); // !_2
  READ_dash_RA(); // READ-RA
  WRITE_dash_R(); // WRITE-R
  Pop(); Pop(); // 2DROP
  INIT(); // INIT
  Push(Read16(pp_DERROR)==0?1:0); // DERROR @ 0=
}


// ================================================
// 0xe8c1: WORD 'WE8C3' codep=0x224c wordp=0xe8c3
// ================================================

void WE8C3() // WE8C3
{
  CTINIT(); // CTINIT
  SET_STR_AS_PARAM("MUST PLAY ON A WRITABLE COPY.");
  DrawTTY(); // .TTY
  SET_STR_AS_PARAM("PRESS ANY KEY TO EXIT.");
  DrawTTY(); // .TTY
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE_2(); // BYE_2
}


// ================================================
// 0xe90a: WORD 'WE90C' codep=0x224c wordp=0xe90c
// ================================================

void WE90C() // WE90C
{
  CTINIT(); // CTINIT
  Push(0xaa3b); // '<CTASKM'
  Push(pp_ASKMOUN); // ASKMOUN
  Store_2(); // !_2
  Push(0xaa1d); // '<CTVERS'
  Push(pp__i_VERSIO); // 'VERSIO
  Store_2(); // !_2
}


// ================================================
// 0xe920: WORD 'WE922' codep=0x224c wordp=0xe922
// ================================================

void WE922() // WE922
{
  SET_STR_AS_PARAM("RESUMING THE GAME IN PROGRESS...");
  WE451(); // WE451
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe94f: WORD 'WE951' codep=0x224c wordp=0xe951 params=1 returns=0
// ================================================

void WE951() // WE951
{
  if (Pop() == 0) return;
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe959: WORD 'WE95B' codep=0x224c wordp=0xe95b
// ================================================

void WE95B() // WE95B
{
  MOUNTA(); // MOUNTA
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    _gt_HIDDEN(); // >HIDDEN
  } else
  {
    _gt_HIDDEN(); // >HIDDEN
    DARK(); // DARK
    _gt_DISPLA(); // >DISPLA
  }
  DARK(); // DARK
  WE1A5(); // WE1A5
  Push(Read16(pp_WDE1A)); // WDE1A @
  Push(0);
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  OVER(); // OVER
  Push(Read16(cc__16K) + 0x0032); // 16K 0x0032 +
  LCMOVE(); // LCMOVE
  Push(0xb603); // 'SETABLT'
  MODULE(); // MODULE
  Push(0);
  Push(0x00c7);
  DrawRAW(); // .RAW
  WE90C(); // WE90C
  Push(Read16(pp_WDE1A) + 0x0400); // WDE1A @ 0x0400 +
  Push(0);
  Push(Read16(pp_XBUF_dash_SE)); // XBUF-SE @
  OVER(); // OVER
  Push(Read16(cc__16K) + 0x0032); // 16K 0x0032 +
  LCMOVE(); // LCMOVE
  Push(0xb603); // 'SETABLT'
  MODULE(); // MODULE
  Push(0);
  Push(0x0063);
  DrawRAW(); // .RAW
  Push(Read16(pp_IsEGA)); // ?EGA @
  if (Pop() != 0)
  {
    SCR_dash_RES(); // SCR-RES
  }
  WE7C1(); // WE7C1
}


// ================================================
// 0xe9d3: WORD 'WE9D5' codep=0x224c wordp=0xe9d5
// ================================================

void WE9D5() // WE9D5
{
  Push(Read16(pp_HUB)); // HUB @
  if (Pop() != 0)
  {
    MOUNTB(); // MOUNTB
    Push(0xd516); // 'PPIC'
    MODULE(); // MODULE
    WE90C(); // WE90C
  } else
  {
    WE95B(); // WE95B
  }
  H_gt_D(); // H>D
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xe9f3: WORD 'PRESE' codep=0x224c wordp=0xe9fd
// ================================================

void PRESE() // PRESE
{
  WE1A5(); // WE1A5
  Push(0x00c7);
  WE1AF(); // WE1AF
  Push(0x0400);
  Push(pp_WDE1A); // WDE1A
  _plus__ex__2(); // +!_2
  Push(0x0063);
  WE1AF(); // WE1AF
}


// ================================================
// 0xea15: WORD 'WEA17' codep=0x224c wordp=0xea17 params=0 returns=0
// ================================================

void WEA17() // WEA17
{
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
}


// ================================================
// 0xea1d: WORD 'WEA1F' codep=0x224c wordp=0xea1f params=0 returns=0
// ================================================

void WEA1F() // WEA1F
{
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}


// ================================================
// 0xea25: WORD 'WEA27' codep=0x224c wordp=0xea27 params=0 returns=0
// ================================================

void WEA27() // WEA27
{
  Push(pp__n_CACHE); // #CACHE
  _099(); // 099
  AUTO_dash_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xea2f: WORD 'WEA31' codep=0x224c wordp=0xea31 params=0 returns=0
// ================================================

void WEA31() // WEA31
{
  Push(Read16(pp__bo__n_CACHE)); // [#CACHE @
  Push(pp__n_CACHE); // #CACHE
  Store_2(); // !_2
  AUTO_dash_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xea3d: WORD 'WEA3F' codep=0x224c wordp=0xea3f params=2 returns=0
// ================================================

void WEA3F() // WEA3F
{
  unsigned short int i, imax;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(Read16(regsp)); // DUP
    Push(Read16(Pop() + i)&0xFF); //  I + C@
    Push(pp_WDE16); // WDE16
    _plus__ex__2(); // +!_2
    Push(1);
    i += Pop();
  } while(i<imax); // (/LOOP)

  Pop(); // DROP
}


// ================================================
// 0xea59: WORD 'WEA5B' codep=0x224c wordp=0xea5b params=0 returns=0
// ================================================

void WEA5B() // WEA5B
{
  Push(0xe6ca); // 'WE6CA'
  Push(pp_ASKMOUN); // ASKMOUN
  Store_2(); // !_2
  Push(0xe770); // 'WE770'
  Push(pp__i_VERSIO); // 'VERSIO
  Store_2(); // !_2
}


// ================================================
// 0xea6d: WORD 'WEA6F' codep=0x224c wordp=0xea6f params=1 returns=1
// ================================================

void WEA6F() // WEA6F
{
  WE199(); // WE199
  _gt_(); // >
  Push(!Pop()); //  NOT
}


// ================================================
// 0xea77: WORD 'WEA79' codep=0x224c wordp=0xea79 params=1 returns=2
// ================================================

void WEA79() // WEA79
{
  Push(Read16(regsp)); // DUP
  WEA6F(); // WEA6F
  if (Pop() != 0)
  {
    GetDS(); // @DS
    _dash_(); // -
    Push(1);
    return;
  }
  Push(Pop() - Read16(pp_LFSEG)); //  LFSEG @ -
  Push(0);
}


// ================================================
// 0xea95: WORD 'WEA97' codep=0x224c wordp=0xea97 params=2 returns=1
// ================================================

void WEA97() // WEA97
{
  if (Pop() != 0)
  {
    GetDS(); // @DS
    Push(Pop() + Pop()); // +
    return;
  }
  Push(Pop() + Read16(pp_LFSEG)); //  LFSEG @ +
}


// ================================================
// 0xeaab: WORD 'WEAAD' codep=0x224c wordp=0xeaad params=0 returns=6
// ================================================

void WEAAD() // WEAAD
{
  unsigned short int i, imax;
  Push(Read16(pp_BUF_dash_SEG)==Read16(pp_DBUF_dash_SE)?1:0); // BUF-SEG @ DBUF-SE @ =
  Push(Read16(pp_BLTSEG)); // BLTSEG @
  WEA79(); // WEA79
  Push(Read16(pp__3DSEG)); // 3DSEG @
  WEA79(); // WEA79

  i = 0;
  imax = Read16(cc_WDF25); // WDF25
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("VECTORS");
    Push(Read16(Pop())); //  @
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xead5: WORD 'WEAD7' codep=0x224c wordp=0xead7 params=6 returns=0
// ================================================

void WEAD7() // WEAD7
{
  unsigned short int i, imax;

  i = Read16(cc_WDF25) - 1; // WDF25 1-
  imax = 0;
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("VECTORS");
    Store_2(); // !_2
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  WEA97(); // WEA97
  Push(pp__3DSEG); // 3DSEG
  Store_2(); // !_2
  WEA97(); // WEA97
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  if (Pop() != 0)
  {
    Push(pp_DBUF_dash_SE); // DBUF-SE
  } else
  {
    Push(pp_HBUF_dash_SE); // HBUF-SE
  }
  Push(Read16(Pop())); //  @
  Push(pp_BUF_dash_SEG); // BUF-SEG
  Store_2(); // !_2
}


// ================================================
// 0xeb0b: WORD 'WEB0D' codep=0x224c wordp=0xeb0d
// ================================================

void WEB0D() // WEB0D
{
  WE431(); // WE431
  SET_STR_AS_PARAM("LOADING GAME IN PROGRESS...");
  WE451(); // WE451
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
}


// ================================================
// 0xeb49: WORD 'WEB4B' codep=0x224c wordp=0xeb4b
// ================================================

void WEB4B() // WEB4B
{
  WE431(); // WE431
  SET_STR_AS_PARAM("...GAME LOAD COMPLETE.");
  WE451(); // WE451
  Push(0x05dc);
  MS(); // MS
}


// ================================================
// 0xeb70: WORD 'WEB72' codep=0x224c wordp=0xeb72
// ================================================

void WEB72() // WEB72
{
  WE431(); // WE431
  SET_STR_AS_PARAM("SAVING GAME...");
  WE451(); // WE451
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
}


// ================================================
// 0xeba1: WORD 'WEBA3' codep=0x224c wordp=0xeba3
// ================================================
// orphan

void WEBA3() // WEBA3
{
  WE431(); // WE431
  SET_STR_AS_PARAM("GAME SAVE COMPLETE.");
  WE451(); // WE451
  WE60C(); // WE60C
}


// ================================================
// 0xebc1: WORD 'PRMSA' codep=0xebcb wordp=0xebcb
// ================================================
// 0xebcb: pop    bx
// 0xebcc: mov    [bx],sp
// 0xebce: inc    bx
// 0xebcf: inc    bx
// 0xebd0: push   si
// 0xebd1: push   di
// 0xebd2: mov    di,bx
// 0xebd4: mov    si,[078C] // OPERATOR
// 0xebd8: sub    si,03E8
// 0xebdc: mov    cx,03E8
// 0xebdf: repz   
// 0xebe0: movsb
// 0xebe1: pop    di
// 0xebe2: pop    si
// 0xebe3: lodsw
// 0xebe4: mov    bx,ax
// 0xebe6: jmp    word ptr [bx]

// ================================================
// 0xebe8: WORD 'PRMLO' codep=0xebf2 wordp=0xebf2
// ================================================
// 0xebf2: pop    bx
// 0xebf3: mov    sp,[bx]
// 0xebf5: inc    bx
// 0xebf6: inc    bx
// 0xebf7: mov    [bp-02],si
// 0xebfa: mov    [bp-04],di
// 0xebfd: mov    si,bx
// 0xebff: cli    
// 0xec00: push   ds
// 0xec01: pop    es
// 0xec02: mov    di,[078C] // OPERATOR
// 0xec06: sub    di,03E8
// 0xec0a: mov    cx,03E8
// 0xec0d: repz   
// 0xec0e: movsb
// 0xec0f: add    sp,[DD22] // WDD22
// 0xec13: mov    si,[bp-02]
// 0xec16: mov    di,[bp-04]
// 0xec19: sti    
// 0xec1a: lodsw
// 0xec1b: mov    bx,ax
// 0xec1d: jmp    word ptr [bx]

// ================================================
// 0xec1f: WORD 'RETSA' codep=0xec29 wordp=0xec29
// ================================================
// 0xec29: pop    bx
// 0xec2a: mov    [bx],bp
// 0xec2c: inc    bx
// 0xec2d: inc    bx
// 0xec2e: push   si
// 0xec2f: push   di
// 0xec30: mov    di,bx
// 0xec32: mov    si,[078E] // OPERATOR
// 0xec36: sub    si,00DC
// 0xec3a: mov    cx,00DC
// 0xec3d: repz   
// 0xec3e: movsb
// 0xec3f: pop    di
// 0xec40: pop    si
// 0xec41: lodsw
// 0xec42: mov    bx,ax
// 0xec44: jmp    word ptr [bx]

// ================================================
// 0xec46: WORD 'RETJM' codep=0xec50 wordp=0xec50
// ================================================
// 0xec50: cli    
// 0xec51: push   ds
// 0xec52: pop    es
// 0xec53: pop    bx
// 0xec54: mov    bp,[bx]
// 0xec56: inc    bx
// 0xec57: inc    bx
// 0xec58: mov    si,bx
// 0xec5a: push   di
// 0xec5b: mov    di,[078E] // OPERATOR
// 0xec5f: sub    di,00DC
// 0xec63: mov    cx,00DC
// 0xec66: repz   
// 0xec67: movsb
// 0xec68: pop    di
// 0xec69: add    bp,[DD1E] // WDD1E
// 0xec6d: mov    si,[bp+00]
// 0xec70: inc    bp
// 0xec71: inc    bp
// 0xec72: sti    
// 0xec73: lodsw
// 0xec74: mov    bx,ax
// 0xec76: jmp    word ptr [bx]

// ================================================
// 0xec78: WORD 'WEC7A' codep=0x224c wordp=0xec7a params=5 returns=0
// ================================================

void WEC7A() // WEC7A
{
  unsigned short int a, i, imax;
  a = Pop(); // >R
  Push(Read16(regsp)); // DUP
  Push(0);
  Push(0x0400);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  if (Pop() != 0)
  {
    Push(Pop() + 1); //  1+
  }
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {

    i = 0;
    imax = Pop();
    do // (DO)
    {
      Push(4);
      PICK(); // PICK
      Push(Pop() + i * 0x0040); //  I 0x0040 * +
      Push(4);
      PICK(); // PICK
      GetDS(); // @DS
      Push(5);
      PICK(); // PICK
      Push(Pop() + i); //  I +
      BLOCK_2(); // BLOCK_2
      _2OVER(); // 2OVER
      _2OVER(); // 2OVER
      Push(!a); // J NOT
      WE951(); // WE951
      Push(9);
      PICK(); // PICK
      Push(Read16(cc_WDD26)); // WDD26
      UMIN(); // UMIN
      LCMOVE(); // LCMOVE
      Push(a); // J
      if (Pop() != 0)
      {
        UPDATE(); // UPDATE
      }
      Push(5);
      PICK(); // PICK
      Push(Read16(cc_WDD26)); // WDD26
      UMIN(); // UMIN
      WEA3F(); // WEA3F
      Pop(); // DROP
      Pop(); Pop(); // 2DROP
      Push(Pop() - 0x0400); //  0x0400 -
      i++;
    } while(i<imax); // (LOOP)

    Push(a); // I
    if (Pop() != 0)
    {
      SAVE_dash_BU(); // SAVE-BU
    }
  }
  Push(a); // R>
  Pop(); // DROP
  Pop(); Pop(); // 2DROP
  Pop(); Pop(); // 2DROP
}


// ================================================
// 0xecfc: WORD 'WECFE' codep=0x224c wordp=0xecfe params=4 returns=0
// ================================================

void WECFE() // WECFE
{
  Push(0);
  WEC7A(); // WEC7A
}


// ================================================
// 0xed04: WORD 'WED06' codep=0x224c wordp=0xed06 params=4 returns=0
// ================================================

void WED06() // WED06
{
  Push(1);
  WEC7A(); // WEC7A
}


// ================================================
// 0xed0c: WORD 'WED0E' codep=0x224c wordp=0xed0e params=0 returns=1
// ================================================

void WED0E() // WED0E
{
  Push(Read16(pp_SSYSEG)); // SSYSEG @
}


// ================================================
// 0xed14: WORD 'WED16' codep=0x224c wordp=0xed16 params=0 returns=1
// ================================================

void WED16() // WED16
{
  Push(Read16(pp_SYSK) * 0x0040 - 1); // SYSK @ 0x0040 * 1-
  WED0E(); // WED0E
  _dash_(); // -
  Push(Pop() >> 4); //  16*
}


// ================================================
// 0xed2a: WORD 'WED2C' codep=0x224c wordp=0xed2c params=0 returns=0
// ================================================

void WED2C() // WED2C
{
  WED0E(); // WED0E
  Push(0);
  Push(Read16(cc_WDD1A)); // WDD1A
  WED16(); // WED16
  WED06(); // WED06
}


// ================================================
// 0xed38: WORD 'WED3A' codep=0x224c wordp=0xed3a params=0 returns=0
// ================================================

void WED3A() // WED3A
{
  WED0E(); // WED0E
  Push(0);
  Push(Read16(cc_WDD1A)); // WDD1A
  WED16(); // WED16
  WECFE(); // WECFE
}


// ================================================
// 0xed46: WORD 'WED48' codep=0x224c wordp=0xed48 params=0 returns=0
// ================================================

void WED48() // WED48
{
  WE199(); // WE199
  Push(0);
  Push(Read16(cc_WDD0E)); // WDD0E
  Push(Read16(cc__16K) * 2 + 0x0064); // 16K 2* 0x0064 +
  WED06(); // WED06
}


// ================================================
// 0xed5c: WORD 'WED5E' codep=0x224c wordp=0xed5e params=0 returns=0
// ================================================

void WED5E() // WED5E
{
  WE199(); // WE199
  Push(0);
  Push(Read16(cc_WDD0E)); // WDD0E
  Push(Read16(cc__16K) * 2 + 0x0064); // 16K 2* 0x0064 +
  WECFE(); // WECFE
}


// ================================================
// 0xed72: WORD 'WED74' codep=0x224c wordp=0xed74 params=2 returns=0
// ================================================

void WED74() // WED74
{
  SIGFLD(":SAVE");
  Store_2(); // !_2
}


// ================================================
// 0xed7a: WORD 'WED7C' codep=0x224c wordp=0xed7c
// ================================================

void WED7C() // WED7C
{
  WE67C(); // WE67C
  WE68E(); // WE68E
  WE67C(); // WE67C
  WE684(); // WE684
  Push(1);
  WED74(); // WED74
  SWAP(); // SWAP
  WE674(); // WE674
  MOUNTA(); // MOUNTA
  WE684(); // WE684
  Push(1);
  WED74(); // WED74
  WE674(); // WE674
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xed9a: WORD 'WED9C' codep=0x224c wordp=0xed9c params=0 returns=1
// ================================================

void WED9C() // WED9C
{
  Push(Read16(pp_OVA) - Read16(cc_WDD2A)); // OVA @ WDD2A -
}


// ================================================
// 0xeda6: WORD 'WEDA8' codep=0x224c wordp=0xeda8 params=0 returns=0
// ================================================

void WEDA8() // WEDA8
{
  GetDS(); // @DS
  Push(Read16(cc_WDD2A)); // WDD2A
  Push(Read16(cc_WDD0A)); // WDD0A
  WED9C(); // WED9C
  WECFE(); // WECFE
}


// ================================================
// 0xedb4: WORD 'WEDB6' codep=0x224c wordp=0xedb6 params=0 returns=0
// ================================================

void WEDB6() // WEDB6
{
  GetDS(); // @DS
  Push(Read16(cc_WDD2A)); // WDD2A
  Push(Read16(cc_WDD0A)); // WDD0A
  WED9C(); // WED9C
  WED06(); // WED06
}


// ================================================
// 0xedc2: WORD 'WEDC4' codep=0x224c wordp=0xedc4
// ================================================

void WEDC4() // WEDC4
{
  IsVGA(); // ?VGA
  if (Pop() == 0) return;
  PAD_gt_SEG(); // PAD>SEG
  Push(0x0036);
  FILE_st_(); // FILE<
  GetDS(); // @DS
  Push(Read16(cc_DS)); // DS
  Store_2(); // !_2
  PAD_v_16(); // PAD|16
  Push(Read16(cc_BX)); // BX
  Store_2(); // !_2
  Push(9);
  Push(Read16(cc_AX)); // AX
  Store_2(); // !_2
  GRCALL(); // GRCALL
}


// ================================================
// 0xede8: WORD 'WEDEA' codep=0x224c wordp=0xedea
// ================================================

void WEDEA() // WEDEA
{
  Push(Read16(cc_WDD12)); // WDD12
  BLOCK_2(); // BLOCK_2
  RETSA(); // RETSA
  UPDATE(); // UPDATE
}


// ================================================
// 0xedf4: WORD 'WEDF6' codep=0x224c wordp=0xedf6 params=0 returns=1
// ================================================

void WEDF6() // WEDF6
{
  Push(Read16(cc_WDD12)); // WDD12
  BLOCK_2(); // BLOCK_2
  Push(pp_WDD32); // WDD32
  Push(0x00de);
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xee04: WORD 'WEE06' codep=0x224c wordp=0xee06
// ================================================

void WEE06() // WEE06
{
  Push(Read16(cc_WDD16)); // WDD16
  BLOCK_2(); // BLOCK_2
  PRMSA(); // PRMSA
  UPDATE(); // UPDATE
}


// ================================================
// 0xee10: WORD 'WEE12' codep=0x224c wordp=0xee12
// ================================================

void WEE12() // WEE12
{
  Push(Read16(cc_WDD16)); // WDD16
  BLOCK_2(); // BLOCK_2
  PRMLO(); // PRMLO
}


// ================================================
// 0xee1a: WORD 'WEE1C' codep=0x224c wordp=0xee1c
// ================================================

void WEE1C() // WEE1C
{
  WEB72(); // WEB72
  Push(pp_WDE16); // WDE16
  _099(); // 099
  _ro_RESTORE_rc_(); // (RESTORE)
  WEDB6(); // WEDB6
  WED48(); // WED48
  WED2C(); // WED2C
  WEE06(); // WEE06
  WEDEA(); // WEDEA
  Push(Read16(pp_WDE16)); // WDE16 @
  SIGFLD(":CKSUM");
  Store_2(); // !_2
  WED7C(); // WED7C
  _ro_SETUP_rc_(); // (SETUP)
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xee3e: WORD 'WEE40' codep=0x224c wordp=0xee40
// ================================================

void WEE40() // WEE40
{
  Push(0);
  WED74(); // WED74
  MOUNTB(); // MOUNTB
  Push(0);
  WED74(); // WED74
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xee4e: WORD 'WEE50' codep=0x224c wordp=0xee50 params=0 returns=1
// ================================================

void WEE50() // WEE50
{
  unsigned short int i, imax;

  i = 0;
  imax = Read16(cc_WDEFA); // WDEFA
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("HOST");
    Push(Read16(Pop())); //  @
    i++;
  } while(i<imax); // (LOOP)

  _ro_RESTORE_rc_(); // (RESTORE)
}


// ================================================
// 0xee64: WORD 'WEE66' codep=0x224c wordp=0xee66
// ================================================

void WEE66() // WEE66
{
  unsigned short int i, imax;

  i = Read16(cc_WDEFA) - 1; // WDEFA 1-
  imax = 0;
  do // (DO)
  {
    Push(i); // I
    GetTableEntry("HOST");
    Store_2(); // !_2
    Push(-1);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  _ro_SETUP_rc_(); // (SETUP)
  SETDBUF(); // SETDBUF
}


// ================================================
// 0xee80: WORD 'WEE82' codep=0x224c wordp=0xee82
// ================================================

void WEE82() // WEE82
{
  WEB0D(); // WEB0D
  Push(pp_WDE16); // WDE16
  _099(); // 099
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  WEE50(); // WEE50
  WEDA8(); // WEDA8
  WEE66(); // WEE66
  WED5E(); // WED5E
  WED3A(); // WED3A
  WEE12(); // WEE12
  WEDF6(); // WEDF6
  Push(Read16(pp_WDE16)); // WDE16 @
  SIGFLD(":CKSUM");
  Push(Read16(Pop())); //  @
  Push((Pop()==Pop())?1:0); // =
  if (Pop() != 0)
  {
    WEB4B(); // WEB4B
    return;
  }
  WE825(); // WE825
}


// ================================================
// 0xeeb0: WORD 'LOAD.' codep=0x224c wordp=0xeeba
// ================================================

void LOAD_dot_() // LOAD.
{
  WEA5B(); // WEA5B
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  WE45F(); // WE45F
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  WEA27(); // WEA27
  WE84F(); // WE84F
  MOUNTA(); // MOUNTA
  WEE82(); // WEE82
  WEE40(); // WEE40
  _gt_1FONT(); // >1FONT
  _gt_LORES(); // >LORES
  StorePAL(); // !PAL
  WEDC4(); // WEDC4
  Push(pp_WDD2E); // WDD2E
  ON_2(); // ON_2
  Push(pp_WDD32); // WDD32
  RETJM(); // RETJM
}


// ================================================
// 0xeee0: WORD 'WEEE2' codep=0x224c wordp=0xeee2
// ================================================
// orphan

void WEEE2() // WEEE2
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  WE45F(); // WE45F
  WED7C(); // WED7C
  WEE1C(); // WEE1C
  Push(3);
  UNMOUNT(); // UNMOUNT
  MOUNTB(); // MOUNTB
  Push(0);
  BLOCK_2(); // BLOCK_2
  Pop(); // DROP
  UPDATE(); // UPDATE
  SAVE_dash_BU(); // SAVE-BU
  Push(2);
  UNMOUNT(); // UNMOUNT
  WEBA3(); // WEBA3
}


// ================================================
// 0xef04: WORD 'WEF06' codep=0x224c wordp=0xef06 params=1 returns=0
// ================================================

void WEF06() // WEF06
{
  Push(0x00c9);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bb);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xef1c: WORD 'WEF1E' codep=0x224c wordp=0xef1e params=1 returns=0
// ================================================

void WEF1E() // WEF1E
{
  Push(0x00ba);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(Read16(user_ROW)&0xFF); // ROW C@
  SWAP(); // SWAP
  Push(Pop() + (Read16(user_COL)&0xFF)); //  COL C@ +
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(0x00ba);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xef3a: WORD 'WEF3C' codep=0x224c wordp=0xef3c params=1 returns=0
// ================================================

void WEF3C() // WEF3C
{
  Push(0x00c8);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bc);
  Exec("EMIT"); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xef52: WORD 'WEF54' codep=0x224c wordp=0xef54 params=4 returns=0
// ================================================

void WEF54() // WEF54
{
  unsigned short int a, b, i, imax;
  a = Pop(); // >R
  b = Pop(); // >R
  _2DUP(); // 2DUP
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(a); // I'
  WEF06(); // WEF06

  i = 0;
  imax = b; // R>
  do // (DO)
  {
    SWAP(); // SWAP
    Push(Pop() + 1); //  1+
    SWAP(); // SWAP
    _2DUP(); // 2DUP
    Exec("POSITION"); // call of word 0x2767 '(POSITION)'
    Push(a); // J
    WEF1E(); // WEF1E
    i++;
  } while(i<imax); // (LOOP)

  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  SWAP(); // SWAP
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  Push(a); // R>
  WEF3C(); // WEF3C
}


// ================================================
// 0xef86: WORD 'WEF88' codep=0x224c wordp=0xef88
// ================================================

void WEF88() // WEF88
{
  WED7C(); // WED7C
  WEE1C(); // WEE1C
  MOUNTB(); // MOUNTB
  Push(0);
  BLOCK_2(); // BLOCK_2
  Pop(); // DROP
  UPDATE(); // UPDATE
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xef9a: WORD 'WEF9C' codep=0x224c wordp=0xef9c
// ================================================

void WEF9C() // WEF9C
{
  GetMODE(); // @MODE
  _0_gt_(); // 0>
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    _gt_A(); // >A
    PRINT("needs Color Graphics", 20); // (.")
    Push(0x4e20); Push(0x0000);
    WE652(); // WE652
    BYE_2(); // BYE_2
    return;
  }
  Push(Read16(pp_MONITOR)); // MONITOR @
  LDPAL(); // LDPAL
  _gt_DISPLA(); // >DISPLA
  _gt_LORES(); // >LORES
  DARK(); // DARK
}


// ================================================
// 0xefdb: WORD 'WEFDD' codep=0x224c wordp=0xefdd params=0 returns=1
// ================================================

void WEFDD() // WEFDD
{
  unsigned short int i, imax, j, jmax;
  Push(0x1bee);
  TIME(); // TIME
  _2_at_(); // 2@

  i = 0;
  imax = 0x0064;
  do // (DO)
  {

    j = 0;
    jmax = 0x03e8;
    do // (DO)
    {
      NOP(); // NOP
      j++;
    } while(j<jmax); // (LOOP)

    i++;
  } while(i<imax); // (LOOP)

  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
  Pop(); // DROP
  _slash_(); // /
  Push(1);
  MAX(); // MAX
  Push(0x53a9); // 'MPS'
  Store_2(); // !_2
}


// ================================================
// 0xf017: WORD 'WF019' codep=0x224c wordp=0xf019
// ================================================

void WF019() // WF019
{
  _gt_ALPHA(); // >ALPHA
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  Push(1);
  Push(7);
  Push(4);
  Push(0x003e);
  WEF54(); // WEF54
  Push(2);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("WARNING:  Any  Being  caught with an unauthorized  copy or", 58); // (.")
  Push(3);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("version  of  this  Software  Product  will  be punished by", 58); // (.")
  Push(4);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("Interstel Corporate Police.  Punishment  may  include  the", 58); // (.")
  Push(5);
  Push(0x000a);
  Exec("POSITION"); // call of word 0x2767 '(POSITION)'
  PRINT("destruction of the offending Being.", 35); // (.")
  WEFDD(); // WEFDD
  Push(0x9c40); Push(0x0000);
  WE652(); // WE652
  Exec("PAGE"); // call of word 0x274c '(PAGE)'
  _gt_LORES(); // >LORES
  WEDC4(); // WEDC4
  DARK(); // DARK
}


// ================================================
// 0xf13a: WORD 'WF13C' codep=0x224c wordp=0xf13c
// ================================================

void WF13C() // WF13C
{
  Push(0);
  Push(0x00fa);
  Push(0x0400);
  SET_STR_AS_PARAM("star2a.com lastSAVE.sva");
  _gt_TIB(); // >TIB
  WDE7E(); // WDE7E
}


// ================================================
// 0xf166: WORD 'WF168' codep=0x224c wordp=0xf168
// ================================================

void WF168() // WF168
{
  Push(0);
  Push(0x0168);
  Push(0x0400);
  SET_STR_AS_PARAM("star2b.com lastSAVE.svb");
  _gt_TIB(); // >TIB
  WDE7E(); // WDE7E
}


// ================================================
// 0xf192: WORD 'WF194' codep=0x224c wordp=0xf194
// ================================================

void WF194() // WF194
{
  FLUSH_2(); // FLUSH_2
  INIT(); // INIT
  SET_STR_AS_PARAM("lastsave.svb");
  _gt_TIB(); // >TIB
  SETFCB(); // SETFCB
  Pop(); // DROP
  OPEN(); // OPEN
  Push(!(Pop()==0x00ff?1:0)); //  0x00ff = NOT
  Push(0x0013);
  FCBCALL(); // FCBCALL
  Pop(); // DROP
  MOUNTA(); // MOUNTA
}


// ================================================
// 0xf1c3: WORD 'WF1C5' codep=0x224c wordp=0xf1c5
// ================================================

void WF1C5() // WF1C5
{
  Push(0);
  Push(Read16(cc_DX)); // DX
  C_ex__2(); // C!_2
  Push(0x0036);
  DOSCALL(); // DOSCALL
  Push(Read16(Read16(cc_BX))); // BX @
  Push(0);
  Push(Read16(Read16(cc_AX))); // AX @
  Push(0x0400);
  Push(Read16(Read16(cc_CX))); // CX @
  _slash_(); // /
  M_star__slash_(); // M*/
  Push(0x026c); Push(0x0000);
  D_gt_(); // D>
}


// ================================================
// 0xf1f1: WORD 'KEY>O' codep=0x4b3b wordp=0xf1fb
// ================================================

void KEY_gt_O() // KEY>O
{
  switch(Pop()) // KEY>O
  {
  case 1:
    WDF87(); // WDF87
    break;
  case 2:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 3:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  case 7:
    Push(Read16(cc_TRUE)); // TRUE
    break;
  default:
    Push(Read16(cc_FALSE)); // FALSE
    break;

  }
}

// ================================================
// 0xf20f: WORD 'OPTIO' codep=0x1d29 wordp=0xf219
// ================================================
// 0xf219: db 0x20 0x20 '  '

// ================================================
// 0xf21b: WORD 'WF21D' codep=0x224c wordp=0xf21d
// ================================================

void WF21D() // WF21D
{
  do
  {
    _i_KEY(); // 'KEY
    Push(Pop() - 0x0030); //  0x0030 -
    Push(Read16(regsp)); // DUP
    Push(pp_OPTIO); // OPTIO
    Store_2(); // !_2
    KEY_gt_O(); // KEY>O case
  } while(Pop() == 0);
  Push(Read16(pp_LKEY)); // LKEY @
}


// ================================================
// 0xf237: WORD 'NEW.G' codep=0x224c wordp=0xf241
// ================================================

void NEW_dot_G() // NEW.G
{
  WE90C(); // WE90C
  WE6A4(); // WE6A4
  WEA1F(); // WEA1F
  Push(Read16(user_TIB)); // TIB @
  Push(0x0050);
  Push(0);
  FILL_2(); // FILL_2
  PORTM(); // PORTM
}


// ================================================
// 0xf257: WORD 'WF259' codep=0x224c wordp=0xf259
// ================================================

void WF259() // WF259
{
  FLUSH_2(); // FLUSH_2
  NODRIVES(); // NODRIVES
  SET_STR_AS_PARAM("SAVING AS 'LASTSAVE'");
  WE451(); // WE451
  WF194(); // WF194
  WF1C5(); // WF1C5
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    WF13C(); // WF13C
    WF168(); // WF168
    Push(pp_WDD2E); // WDD2E
    Push(Read16(pp_OPTIO)==1?1:0); // OPTIO @ 1 =
    if (Pop() != 0)
    {
      ON_2(); // ON_2
    } else
    {
      _099(); // 099
    }
  } else
  {
    MOUNTA(); // MOUNTA
    SET_STR_AS_PARAM("INSUFFICIENT DISK SPACE");
    WE451(); // WE451
    WE53F(); // WE53F
    _gt_A(); // >A
    Exec("PAGE"); // call of word 0x274c '(PAGE)'
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("Do the following:", 17); // (.")
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("1) Delete some files (650k needed)", 34); // (.")
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("2) Type STARFLT2.", 17); // (.")
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("3) Try save again.", 18); // (.")
    _i_KEY(); // 'KEY
    Pop(); // DROP
    Exec("CR"); // call of word 0x26ee '(CR)'
    PRINT("Press any key to exit", 21); // (.")
    KEY_2(); // KEY_2
    Pop(); // DROP
    BYE_2(); // BYE_2
  }
  FLUSH_2(); // FLUSH_2
  MOUNTA(); // MOUNTA
}


// ================================================
// 0xf356: WORD 'WF358' codep=0x224c wordp=0xf358
// ================================================

void WF358() // WF358
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  WE45F(); // WE45F
  WEF88(); // WEF88
  Push(!Read16(pp_WDD2E)); // WDD2E @ NOT
  if (Pop() == 0) return;
  WF259(); // WF259
}


// ================================================
// 0xf36e: WORD 'WF370' codep=0x224c wordp=0xf370
// ================================================

void WF370() // WF370
{
  WDF87(); // WDF87
  if (Pop() != 0)
  {
    WF358(); // WF358
  } else
  {
    WEF88(); // WEF88
  }
  Push(!Read16(pp_WDD2E)); // WDD2E @ NOT
  if (Pop() == 0) return;
  WE60C(); // WE60C
}


// ================================================
// 0xf38c: WORD 'WF38E' codep=0x224c wordp=0xf38e params=0 returns=0
// ================================================

void WF38E() // WF38E
{
  Push(pp_WDD2E); // WDD2E
  ON_2(); // ON_2
}


// ================================================
// 0xf394: WORD 'WF396' codep=0x224c wordp=0xf396
// ================================================

void WF396() // WF396
{
  WEF88(); // WEF88
  Push(!Read16(pp_WDD2E)); // WDD2E @ NOT
  if (Pop() == 0) return;
  Push(Read16(pp__bo__n_CACHE)); // [#CACHE @
  Push(pp__n_CACHE); // #CACHE
  Store_2(); // !_2
  AUTO_dash_CACHE(); // AUTO-CACHE
  _gt_A(); // >A
  QUIT(); // QUIT
}


// ================================================
// 0xf3b2: WORD 'GAMEO_2' codep=0x4b3b wordp=0xf3bc
// ================================================

void GAMEO_2() // GAMEO_2
{
  switch(Pop()) // GAMEO_2
  {
  case 49:
    WF358(); // WF358
    break;
  case 51:
    WF38E(); // WF38E
    break;
  case 50:
    WF370(); // WF370
    break;
  case 55:
    BYE_2(); // BYE_2
    break;
  default:
    WF396(); // WF396
    break;

  }
}

// ================================================
// 0xf3d0: WORD 'WF3D2' codep=0x224c wordp=0xf3d2
// ================================================

void WF3D2() // WF3D2
{
  WEA17(); // WEA17
  FLUSH_2(); // FLUSH_2
  WEA27(); // WEA27
  WEAAD(); // WEAAD
  WEA5B(); // WEA5B
  PRESE(); // PRESE
}


// ================================================
// 0xf3e0: WORD 'WF3E2' codep=0x224c wordp=0xf3e2 params=1 returns=1
// ================================================

void WF3E2() // WF3E2
{
  SIGFLD(":TIMEST");
  Push(Read16(Pop())); //  @
}


// ================================================
// 0xf3e8: WORD 'WF3EA' codep=0x224c wordp=0xf3ea
// ================================================

void WF3EA() // WF3EA
{
  Push(pp_WDD2E); // WDD2E
  _099(); // 099
  do
  {
    WE571(); // WE571
    WF21D(); // WF21D
    GAMEO_2(); // GAMEO_2 case
    Push(Read16(pp_WDD2E)); // WDD2E @
  } while(Pop() == 0);
  WE922(); // WE922
}


// ================================================
// 0xf400: WORD 'WF402' codep=0x224c wordp=0xf402 params=0 returns=2
// ================================================

void WF402() // WF402
{
  PRINT("Thanks to TSCS for testing", 26); // (.")
  Push(0x0bb8);
  MS(); // MS
}


// ================================================
// 0xf427: WORD 'WF429' codep=0x224c wordp=0xf429
// ================================================

void WF429() // WF429
{
  IsVGA(); // ?VGA
  if (Pop() != 0)
  {
    WEDC4(); // WEDC4
  }
  WE9D5(); // WE9D5
  WE90C(); // WE90C
  WEA31(); // WEA31
  WEAD7(); // WEAD7
  WEA1F(); // WEA1F
  FLUSH_2(); // FLUSH_2
  MOUNTA(); // MOUNTA
  Push(0xb5e0); // 'HIMUS'
  MODULE(); // MODULE
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf449: WORD 'ERR!' codep=0x224c wordp=0xf452
// ================================================
// entry

void ERR_ex_() // ERR!
{
  WF3D2(); // WF3D2
  DARK(); // DARK
  SET_STR_AS_PARAM("PROGRAM OR DISK ERROR");
  WE451(); // WE451
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  WF3EA(); // WF3EA
  WF429(); // WF429
}


// ================================================
// 0xf47e: WORD 'GAMEO_1' codep=0x224c wordp=0xf488
// ================================================
// entry

void GAMEO_1() // GAMEO_1
{
  Push(0x03e8);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x0032);
  MS(); // MS
  Push(0x07d0);
  TONE(); // TONE
  Push(0x0032);
  MS(); // MS
  Push(0x05dc);
  TONE(); // TONE
  Push(0x0032);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
  WF3D2(); // WF3D2
  WF3EA(); // WF3EA
  WF429(); // WF429
}


// ================================================
// 0xf4b8: WORD 'BOSS' codep=0x224c wordp=0xf4c1
// ================================================
// entry

void BOSS() // BOSS
{
  WF3D2(); // WF3D2
  _gt_A(); // >A
  PRINT("A:>", 3); // (.")
  do
  {
    KEY_2(); // KEY_2
    Push(Read16(regsp)); // DUP
    Push(Read16(regsp)); // DUP
    Push(Pop()==0x000d?1:0); //  0x000d =
    if (Pop() != 0)
    {
      Pop(); // DROP
      Exec("CR"); // call of word 0x26ee '(CR)'
      PRINT("A:>", 3); // (.")
    } else
    {
      Exec("EMIT"); // call of word 0x2731 '(EMIT)'
    }
    Push(Pop()==2?1:0); //  2 =
  } while(Pop() == 0);
  _gt_LORES(); // >LORES
  DARK(); // DARK
  WF429(); // WF429
}


// ================================================
// 0xf4fb: WORD 'START' codep=0x224c wordp=0xf505
// ================================================
// entry

void START() // START
{
  WF402(); // WF402
  WEF9C(); // WEF9C
  WE90C(); // WE90C
  WE88D(); // WE88D
  if (Pop() != 0)
  {
    WE8C3(); // WE8C3
  }
  FLUSH_2(); // FLUSH_2
  MOUNTA(); // MOUNTA
  Push(0x9021); // '(BYE)'
  Push(pp__i_BYE); // 'BYE
  Store_2(); // !_2
  Push(0xb5d0); // 'INTROS'
  MODULE(); // MODULE
  WE0E1(); // WE0E1
  WDF59(); // WDF59
  _gt_ALPHA(); // >ALPHA
  WF019(); // WF019
  WF3E2(); // WF3E2
  if (Pop() != 0)
  {
    LOAD_dot_(); // LOAD.
    return;
  }
  NEW_dot_G(); // NEW.G
}

// 0xf53d: db 0x47 0x41 0x4d 0x45 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x20 0x20 0x00 'GAME____________________________    '

