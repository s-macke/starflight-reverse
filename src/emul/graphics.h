#ifndef GRAPHICS_H
#define GRAPHICS_H

    extern int colortable[16];

    void GraphicsInit();
    void GraphicsUpdate();
    void GraphicsWait();
    void GraphicsQuit();

    void GraphicsMode(int mode); // 0 = text, 1 = ega graphics
    void GraphicsClear(int color);
    void GraphicsText(char *s, int n);
    void GraphicsCarriageReturn();
    void GraphicsSetCursor(int x, int y);
    void GraphicsChar(unsigned char s);
    void GraphicsLine(int x1, int y1, int x2, int y2, int color, int xormode);
    void GraphicsPixel(int x, int y, int color);
    void GraphicsBLT(int x1, int y1, int w, int h, char* image, int color);
    unsigned short GraphicsGetChar();
    int GraphicsCharsInBuffer();
    void GraphicsSave(char *filename);


#endif
