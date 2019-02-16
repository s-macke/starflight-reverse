#ifndef CALL_H
#define CALL_H

enum RETURNCODE {OK, ERROR, EXIT, INPUT};

enum RETURNCODE Call(unsigned short addr, unsigned short bx);
enum RETURNCODE Step();
void InitEmulator();
void EnableInterpreter();
void DisableInterpreterOutput();
void EnableDebug();
void PrintCStack();

void FillKeyboardBufferString(char *str);
void FillKeyboardBufferKey(unsigned short key);

#endif
