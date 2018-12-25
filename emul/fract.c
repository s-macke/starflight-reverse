#include<stdio.h>

#include "fract.h"

void RRND()
{
    unsigned short ax, bx, cx, dx;
    ax = Read16(0x4ab0); // SEED
    cx = 0x7abd;
    ax = (signed short)cx * (signed short)ax;
    ax += 0x1b0f;
    Write16(0x4ab0, ax); // SEED

    dx = Pop();
    bx = Pop();
    cx = Pop();
    Push(dx);
    bx -= cx;
    unsigned int mul = (unsigned int)ax * (unsigned int)bx;
    dx = (mul >> 16) + cx;
    ax = Pop();
    Push(dx);
    Push(ax);
// 0xe3c0: mov    ax,[4AB0] // SEED
// 0xe3c4: mov    cx,7ABD
// 0xe3c7: imul   cx
// 0xe3c9: add    ax,1B0F
// 0xe3cc: mov    [4AB0],ax // SEED

// 0xe3d0: pop    dx
// 0xe3d1: pop    bx
// 0xe3d2: pop    cx
// 0xe3d3: push   dx
// 0xe3d4: sub    bx,cx
// 0xe3d6: mul    bx
// 0xe3d8: add    dx,cx
// 0xe3da: pop    ax
// 0xe3db: push   dx
// 0xe3dc: push   ax
// 0xe3dd: ret
}

void C_PLUS_LIMIT()
{
    signed short bx, ax, cx;
    bx = Pop();
    ax = Pop();
    cx = Pop();
    ax += cx;
    if (ax > 0x7F)
    {
        ax = 0x7F;
    }
    if (ax < -0x7F)
    {
        ax = -0x7F;
    }
    Push(ax);
    Push(bx);
}

void DISPLACEMENT()
{
    unsigned short bx, ax, cx, dx;
    bx = Pop();
    ax = Pop();
    cx = Pop();
    Push(bx);
    dx = Read16(0xe356); // XYANCHOR
    if (dx)
    {
        cx += Read16(0xe370); // X0'
        ax += Read16(0xe374); // Y0'
        if (ax&0x8000)
        {
            ax = -(ax + 1);
            cx += 0x0480;
        }
        else
        {
            dx = 0x3c0;
            if (dx <= ax)
            {
                ax = dx - ax + dx + 1;
                cx += 0x480;
            }
        }
        Write16(0x4ab0, ax); // SEED
        Push(cx);
        ax = 1;
        Push(ax);
        ax = -1;
        Push(ax);
        RRND();
        cx = Pop();
        Write16(0x4ab0, Pop()); // SEED
        Push(cx);
        ax = 1;
        Push(ax);
        ax = -1;
        Push(ax);
        RRND();
        ax = Pop();
        cx = Pop();
        ax = ax ^ Read16(0x5979); // GLOBALSEED
        ax = ax ^ cx;
        Write16(0x4ab0, ax); // SEED
    }
    ax = Read16(regbp+0xe);
    cx = -ax;
    Push(cx);
    Push(ax);
    RRND();
    ax = Pop();
    cx = Pop();
    Push(ax);
    Push(cx);
}

void SWRAP()
{
    unsigned short dx, ax, bx, cx;
    dx = Pop();
    ax = Pop();
    cx = Pop();
    if (ax >= 0x8000)
    {
        ax = -(ax+1);
        bx = Read16(Read16(0x4CF1)) >> 1; // 'ARRAY
        cx += bx;
    } else
    {
        bx = Read16(Read16(0x4CF1)+2);
    // 0xe486: cmp    ax,bx
    // 0xe488: js     E49B
        if (bx <= ax)
        {
            // 0xe48a
            ax = bx - ax + bx + 1;
            bx = Read16(Read16(0x4CF1));
            bx = bx >> 1;
            cx += bx;
        }
    }

    if (cx >= 0x8000)
    {
        cx += Read16(Read16(0x4CF1));
    } else
    {
        bx = Read16(Read16(0x4CF1));
        if (bx <= cx) {
            cx -= bx;
        }
    }
    Push(cx);
    Push(ax);
    Push(dx);
}

void ACELLADDR()
{
    unsigned short ax, bx, cx, dx;

    Write16(0xe38a, Pop()); // RT0
    ax = Read16(0x4CCa); // SPHEREWRAP
    if (ax) SWRAP();
    bx = Read16(0x4cf1); // 'ARRAY
    ax = Read16(bx+6);
    bx = Read16(bx+4);
    cx = Pop() << 1;
    bx += cx;
    cx = Read16Long(ax, bx);
    dx = Pop();
    cx += dx;
    Write16(0xe378, ax); // SCELL
    Write16(0xe37C, cx); // OCELL
    Push(Read16(0xe38a));
}

void AGet() // [A@]
{
    unsigned short ax, cx, temp;
    unsigned char al;
    temp = Pop();

    al = Read8Long(Read16(0xe378), Read16(0xe37c)); // SCELL OCELL
    cx = Read16(0x4CD8); // SIGNEXTEND
    if (cx) // not sure here
    {
        ax = (signed short)((signed char)al);
    } else
    {
        ax = al;
    }

    Push(ax);
    Push(temp);
}

void FRACT_StoreHeight() // Set Anchor
{
    unsigned short ax;
    /*
    unsigned short x, y;
    y = Pop();
    x = Pop();
    printf("StoreHeight x=%i y=%i\n", x, y);
*/
    Write16(0xe38e, Pop()); // RT1
    ACELLADDR();
    AGet();
    ax = Pop();
    if (ax == 0xFF80)
    {
        ax = Pop();
        Write8Long(Read16(0xe378), Read16(0xe37c), ax&0xFF); // SCELL OCELL
    }
    else
    {
        ax = Pop();
    }
    Push(Read16(0xe38e)); // RT1
}

void XSHIFT()
{
    unsigned short ax, bx, cx;
    cx = Pop();
    Write16(0xe396, Pop()); // TY
    Push(cx);
    Push(Read16(regbp+8));
    Push(Read16(0xe396)); // TY
    ACELLADDR();
    AGet();
    Push(Read16(regbp+4));
    Push(Read16(0xe396)); // TY
    ACELLADDR();
    AGet();
    ax = Pop();

    cx = Pop();
    ax += cx;
    ax = ((signed short)ax) >> 1;
    Push(ax);

    bx = Read16(regbp+8);
    bx += Read16(regbp+4);
    bx = ((signed short)bx) >> 1;
    Push(bx);
    Push(Read16(0xe396)); // TY

    DISPLACEMENT();
    C_PLUS_LIMIT();

    Push(Read16(regbp+0xc));
    Push(Read16(0xe396)); // TY
    FRACT_StoreHeight();
}

void YSHIFT()
{
    unsigned short ax, bx, cx;
    cx = Pop();
    Write16(0xe396, Pop()); // TY
    Push(cx);
    Push(Read16(0xe396)); // TY
    Push(Read16(regbp+6));
    ACELLADDR();
    AGet();
    Push(Read16(0xe396)); // TY
    Push(Read16(regbp+2));
    ACELLADDR();
    AGet();
    ax = Pop();

    cx = Pop();
    ax += cx;
    ax = ((signed short)ax) >> 1;
    Push(ax);

    Push(Read16(0xe396)); // TY
    bx = Read16(regbp+6);
    bx += Read16(regbp+2);
    bx = ((signed short)bx) >> 1;
    Push(bx);

    DISPLACEMENT();
    C_PLUS_LIMIT();

    Push(Read16(0xe396)); // TY
    Push(Read16(regbp+0xa));
    FRACT_StoreHeight();
}

void EDGES()
{
    unsigned short ax;
    ax = Read16(0xe368); // DY>1
    if (ax != 0)
    {
        ax = Read16(regbp+8);
        if (ax == 0) {
            Push(ax);
            YSHIFT();
        }
        Push(Read16(regbp+4));
        YSHIFT();
    }

    ax = Read16(0xe36c); // DX>1
    if (ax != 0)
    {
        ax = Read16(regbp+6);
        if (ax == 0)
        {
            Push(ax);
            XSHIFT();
        }
        Push(Read16(regbp+2));
        XSHIFT();
    }
}

void CENTER()
{
    unsigned short ax, cx;
    ax = Read16(0xe368) & Read16(0xe36c); // DY>1 and DX>1
    if (ax == 0) return;
    Push(Read16(regbp+0xC));
    Push(Read16(regbp+0x6));
    ACELLADDR();
    AGet();
    Push(Read16(regbp+0xC));
    Push(Read16(regbp+0x2));
    ACELLADDR();
    AGet();
    Push(Read16(regbp+0x8));
    Push(Read16(regbp+0xA));
    ACELLADDR();
    AGet();
    Push(Read16(regbp+0x4));
    Push(Read16(regbp+0xA));
    ACELLADDR();
    AGet();
    ax = Pop();
    cx = Pop();
    ax += cx;
    cx = Pop();
    ax += cx;
    cx = Pop();
    ax += cx;
    ax = ((signed short)ax) >> 2;
    Push(ax);
    Push(Read16(regbp+0xC));
    Push(Read16(regbp+0xA));
    DISPLACEMENT();
    C_PLUS_LIMIT();
    Push(Read16(regbp+0xC));
    Push(Read16(regbp+0xA));
    FRACT_StoreHeight();
}

void MIDPT()
{
    unsigned short ax;
    ax = Read16(regbp+8);
    ax += Read16(regbp+4);
    ax = ((signed short)ax) >> 1;
    Write16(regbp+0xC, ax);
    ax = Read16(regbp+6);
    ax += Read16(regbp+2);
    ax = ((signed short)ax) >> 1;
    Write16(regbp+0xA, ax);
}

void NEWSTD()
{
    unsigned int ax = Read16(regbp + 0xe);
    unsigned int ratio = Read16(0xe360); // RATIO
    ax = (ax * ratio) / ratio;
    if (((signed int)ax) <= 0) // not sure
    {
        ax = 1;
    }
    Write16(regbp+0xe, ax);
}

void FRACTAL()
{
    unsigned short ax, cx;
    regsp -= 2; // instruction pointer

    regbp = regsp;
    ax = Read16(regbp+4) - Read16(regbp+8) - 1;
    if ((signed short)ax <= 0) ax = 0; else ax = 1; // not sure
    Write16(0xe36c, ax); // DX>1

    cx = Read16(regbp+4) - Read16(regbp+8) - 1;
    if ((signed short)cx <= 0) cx = 0; else cx = 1; // not sure
    Write16(0xe368, cx); // DY>1

    printf("FRACTAL DX>1: %i DY>1: %i %i %i %i %i\n", Read16(0xe36c), Read16(0xe368),
        Read16(regbp+8),
        Read16(regbp+4),
        Read16(regbp+6),
        Read16(regbp+2));

    if (cx > 0 || ax > 0)
    {
        MIDPT();
        EDGES();
        CENTER();
        NEWSTD();

        ax = 0;
        Push(Read16(regbp+0xe));
        Push(ax);
        Push(ax);
        Push(Read16(regbp+0x8));
        Push(Read16(regbp+0x6));
        Push(Read16(regbp+0xC));
        Push(Read16(regbp+0xA));
        FRACTAL(); // recursive

        ax = 0;
        Push(Read16(regbp+0xe));
        Push(ax);
        Push(ax);
        Push(Read16(regbp+0xC));
        Push(Read16(regbp+0x6));
        Push(Read16(regbp+0x4));
        Push(Read16(regbp+0xA));
        FRACTAL(); // recursive

        ax = 0;
        Push(Read16(regbp+0xe));
        Push(ax);
        Push(ax);
        Push(Read16(regbp+0x8));
        Push(Read16(regbp+0xA));
        Push(Read16(regbp+0xC));
        Push(Read16(regbp+0x2));
        FRACTAL(); // recursive

        ax = 0;
        Push(Read16(regbp+0xe));
        Push(ax);
        Push(ax);
        Push(Read16(regbp+0xC));
        Push(Read16(regbp+0xA));
        Push(Read16(regbp+0x4));
        Push(Read16(regbp+0x2));
        FRACTAL(); // recursive
    }

    ax = Pop();
    regsp += 0x0e; // 14
    regbp = regsp;
    Push(ax);
    regsp += 2; //instruction pointer
}

void FRACT_FRACTALIZE()
{
    /*
    unsigned short int yur, xur, yll, xll, dummy1, dummy2, std;
    yur = Pop();
    xur = Pop();
    yll = Pop();
    xll = Pop();
    dummy1 = Pop();
    dummy2 = Pop();
    std = Pop();
    printf("FRACTALIZE xll=%i yll=%i xur=%i yur=%i std=%i\n", xll, yll, xur, yur, std);
    */
    Write16(0xe392, regbp); // RTEMP
    FRACTAL();
    regbp = Read16(0xe392); // RTEMP
}

void FRACT_FILLARRAY()
{
    unsigned short ax, bx, cx;
    ax = Pop();
    bx = Read16(0x4CF1); // 'ARRAY
    cx = Read16(bx+4);
    bx = Read16(bx+6);
    printf("FRACT_FILLARRAY count=%i es=0x%04x al=%i\n", cx, bx, ax&0xFF);
    for(int i=0; i<cx; i++) Write8Long(bx, i, ax&0xFF);
}

