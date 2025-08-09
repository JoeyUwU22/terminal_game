#include "game_funcs.h"

void clear(void)
{
    system("cls");
}

void type(char *text)
{
    int textlen = strlen(text);
    for (int i = 0; i < textlen; i++)
    {
        printf("%c", text[i]);
        Sleep(80);
    }
}

void clearinput(void)
{
    int c;
    while((c = getchar()) != '\n' && c != EOF){}
    printf("\n");
}

