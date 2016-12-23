#ifndef STARFLT_H
#define STARFLT_H

    extern unsigned short EMIT;
    extern unsigned short TYPE;

    extern unsigned short cc__1;
    extern unsigned short cc__2;
    extern unsigned short cc__3;
    extern unsigned short cc__4;
    extern unsigned short cc__5;
    extern unsigned short cc__6;
    extern unsigned short cc__7;
    extern unsigned short cc__8;
    extern unsigned short cc__9;
    extern unsigned short cc__dash_1;

    // for MUSIC OV
    extern unsigned short cc_MUSSEG;

    // ---------------------------------
    
    void Func6(char *s);
    void Func8(char *s);
    void Func14(char *s);
    void PRINT(char *s, int n);
    void Push2Words(char *s);
    void SetColor(char *s);
    void LoadData(char *s);

    void _gt_HIDDEN(); // >HIDDEN
    void _gt_DISPLA(); // >DISPLA
    void SCR_dash_RES(); // SCR-RES
    void XYSCAN(); // XYSCAN
    void _ask_TRIG(); // ?TRIG
    void MODULE(); // MODULE
    void _gt_C_plus_S(); // >C+S
    void C_ex_(); // C!
    void ICLOSE(); // ICLOSE
    void INEXT(); // INEXT
    void _ask_FIRST(); // ?FIRST
    void LEAVE(); // LEAVE
    void IDELETE(); // IDELETE
    void ILAST(); // ILAST
    void COVER(); // COVER
    void SET_dash_CUR(); // SET-CUR

    void _2_at_(); // 2@
    void D_ex_(); // D!
    void D_gt_(); // D>
    void IOPEN(); // IOPEN
    void SWAP(); // SWAP
    void _star_CREATE(); // *CREATE
    void IFIRST(); // IFIRST

    void D_dash_(); // D-
    void _ex_(); // !
    void M_star__slash_(); // M*/
    void _dash_(); // -
    void _2DUP(); // 2DUP
    void D0_eq_(); // D0=

    void _plus__ex_(); // +!

    void OFF(); // OFF
    void ON(); // ON
    void _gt_1FONT(); // >1FONT
    void DARK(); // DARK
    void LPLOT(); // LPLOT

    void LLINE(); // LLINE
    void CTINIT(); // CTINIT
    void POS_dot_(); // POS.
    void _gt_3FONT(); // >3FONT
    void D_plus_(); // D+
    void _ex_COLOR(); // !COLOR
    void _do__dot_(); // $.
    void _dot_1LOGO(); // .1LOGO
    void BLT(); // BLT
    void D_dot_R(); // D.R
    void D_st_(); // D<
    void _gt_R(); // >R
    void R_gt_(); // R>
    void DMIN(); // DMIN
    
    void _dot_(); // .
    void DABS(); // DABS
    
    void _slash_MOD(); // /MOD
    void _st__n_(); // <#
    void _n_(); // #
    void _n__gt_(); // #>

    void SET_dash_CURRENT(); // SET-CURRENT
    void _ex__3();
    void Exec(unsigned short);
    void ON_3();
    void _gt_DISPLAY();
    
    void L_ex_();
    void L_at_();
    void LC_ex_();
    void R_at_();
    void AUTO_dash_CACHE();
    
    void FLUSH_2();
    void BEEPOFF();
    void CFIGARRAYS();
    void _gt_LORES();
    void SONG();
    void _slash_();
    void BLOCK_2();
    void DISPLAY();
    void ROT();
    void MS();
    void _i_KEY();
    void _2OVER();
    void  TIME();
    void  PLOT();
    void  _st__ex__gt_();
    void  C_gt_EGA();
    void  LC_at_();
    void SEG_gt_ADDR();
    void _co_();
    void _ro__ex_OLD_rc_();
    void _eq_();
    void OVER();
    void FILE_st_();
    void LCMOVE();
    void _at_DS();
    void _ro__ex_SET_rc_();
     
    
#endif