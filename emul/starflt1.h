#ifndef STARFLT_H
#define STARFLT_H

typedef void ForthFunctionType(void);

typedef struct
{
    // FILE-RL
    // FILE-START

    unsigned char fileidx;
    unsigned char dummy2, blocksize1, blocksize2;
    unsigned short addr;
} LoadDataType; // Also called AFIELD

typedef struct
{
    unsigned char fileidx;
    unsigned char offset;
    unsigned char size;
} IFieldType; // Instance field

typedef struct
{
    unsigned short int width;
    unsigned short int height;
    unsigned short bx;
    unsigned short ds;
} ArrayType;

typedef unsigned char Color;

typedef unsigned short Overlay;

typedef void (*WordCallDef)();

    void SIGFLD(char *s);
    void Func6(char *s);
    void Func8(char *s);
    void Func9(char *s);
    void Func14(char *s);
    void PRINT(char *s, int n);
    void Push2Words(char *s);
    void SetColor(Color color);
    void GetTableEntry(char *s);
    void LoadData(LoadDataType dt);
    void UNK_0x3f3b(char *s);
    void SET_STR_AS_PARAM(char *s);
    void Exec(char *s);
    void LoadOverlay(char *s);
    void DOTASKS(WordCallDef a, WordCallDef b, WordCallDef c);
    void DOTASKS2(WordCallDef a, WordCallDef b, WordCallDef c, WordCallDef d);

    void Rule(char *s);
    void ReadArray(ArrayType a);
    void ABORT(char *s, int n);
    void CODE();
    void MODULE();

    // for starfight2
    void UNK_0x3f09(char *s);
    void Func12(char *s);
    void Func5(char *s);

#endif