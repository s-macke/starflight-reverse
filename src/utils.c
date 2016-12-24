#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"utils.h"

char* Forth2CString(char *in)
{
    static char out[1024];
    memset(out, 0, 1024);
    int n = strlen(in);
    int j = 0;
    int i = 0;

    if (in[0] >= '0')
    if (in[0] <= '9')
    {
        out[j++] = '_';
    }

    for(; i<n; i++)
    {
        if ((in[i] >= 'a') && (in[i] <= 'z'))
        {
            out[j++] = in[i];
            continue;
        }
        if ((in[i] >= 'A') && (in[i] <= 'Z'))
        {
            out[j++] = in[i];
            continue;
        }
        if ((in[i] >= '0') && (in[i] <= '9'))
        {
            out[j++] = in[i];
            continue;
        }
        switch(in[i])
        {
            case '_':
                out[j++] = '_';
                break;

            case '(':
                out[j++] = '_';
                out[j++] = 'r';
                out[j++] = 'o';
                out[j++] = '_';
                break;

            case '.':
                out[j++] = '_';
                out[j++] = 'd';
                out[j++] = 'o';
                out[j++] = 't';
                out[j++] = '_';
                break;

            case '$':
                out[j++] = '_';
                out[j++] = 'd';
                out[j++] = 'o';
                out[j++] = '_';
                break;

            case ')':
                out[j++] = '_';
                out[j++] = 'r';
                out[j++] = 'c';
                out[j++] = '_';
                break;

            case '/':
                out[j++] = '_';
                out[j++] = 's';
                out[j++] = 'l';
                out[j++] = 'a';
                out[j++] = 's';
                out[j++] = 'h';
                out[j++] = '_';
                break;

            case '!':
                out[j++] = '_';
                out[j++] = 'e';
                out[j++] = 'x';
                out[j++] = '_';
                break;

            case '-':
                out[j++] = '_';
                out[j++] = 'd';
                out[j++] = 'a';
                out[j++] = 's';
                out[j++] = 'h';
                out[j++] = '_';
                break;

            case '>':
                out[j++] = '_';
                out[j++] = 'g';
                out[j++] = 't';
                out[j++] = '_';
                break;

            case '<':
                out[j++] = '_';
                out[j++] = 's';
                out[j++] = 't';
                out[j++] = '_';
                break;

            case '=':
                out[j++] = '_';
                out[j++] = 'e';
                out[j++] = 'q';
                out[j++] = '_';
                break;

            case '#':
                out[j++] = '_';
                out[j++] = 'n';
                out[j++] = '_';
                break;

            case '?':
                out[j++] = '_';
                out[j++] = 'a';
                out[j++] = 's';
                out[j++] = 'k';
                out[j++] = '_';
                break;

            case '\'':
                out[j++] = '_';
                out[j++] = 'i';
                out[j++] = '_';
                break;

            case '+':
                out[j++] = '_';
                out[j++] = 'p';
                out[j++] = 'l';
                out[j++] = 'u';
                out[j++] = 's';
                out[j++] = '_';
                break;

            case '%':
                out[j++] = '_';
                out[j++] = 'p';
                out[j++] = 'e';
                out[j++] = '_';
                break;

            case '@':
                out[j++] = '_';
                out[j++] = 'a';
                out[j++] = 't';
                out[j++] = '_';
                break;

            case '&':
                out[j++] = '_';
                out[j++] = 'a';
                out[j++] = 'n';
                out[j++] = 'd';
                out[j++] = '_';
                break;

            case '*':
                out[j++] = '_';
                out[j++] = 's';
                out[j++] = 't';
                out[j++] = 'a';
                out[j++] = 'r';
                out[j++] = '_';
                break;

            case ';':
                out[j++] = '_';
                out[j++] = 's';
                out[j++] = 'c';
                out[j++] = '_';
                break;

            case '[':
                out[j++] = '_';
                out[j++] = 'b';
                out[j++] = 'o';
                out[j++] = '_';
                break;

            case ']':
                out[j++] = '_';
                out[j++] = 'b';
                out[j++] = 'c';
                out[j++] = '_';
                break;

            case '{':
                out[j++] = '_';
                out[j++] = 'c';
                out[j++] = 'o';
                out[j++] = '_';
                break;

            case '}':
                out[j++] = '_';
                out[j++] = 'c';
                out[j++] = 'c';
                out[j++] = '_';
                break;

                case '"':
                out[j++] = '_';
                out[j++] = 'q';
                out[j++] = 'm';
                out[j++] = '_';
                break;

            case ',':
                out[j++] = '_';
                out[j++] = 'c';
                out[j++] = 'o';
                out[j++] = '_';
                break;

            case ':':
                out[j++] = '_';
                out[j++] = 'c';
                out[j++] = '_';
                break;

            case '^':
                out[j++] = '_';
                out[j++] = 'h';
                out[j++] = '_';
                break;

            case '|':
                out[j++] = '_';
                out[j++] = 'v';
                out[j++] = '_';
                break;

            case '~':
                out[j++] = '_';
                out[j++] = 't';
                out[j++] = '_';
                break;

            case '\\':
                out[j++] = '_';
                out[j++] = 'b';
                out[j++] = 's';
                out[j++] = '_';
                break;

            case 0x7F:
                break;

            default:
                fprintf(stderr, "sign '%c' (0x%02x) not found\n", in[i], in[i]);
                exit(1);
                break;
        }
    }
    return out;
}
