#include "game_funcs.h"

int main()
{
    clear();
    char yn = '\0';
    int start = 0;
    //user initializes game
    while(start == 0)
    {
        type("ready (y/n)? ");
        scanf("%c", &yn);
        yn = tolower(yn);
        if (yn != 'y' && yn != 'n')
        {
            clearinput();
        }
        else if (yn == 'n')
        {
            type("ok bye");
            return 0;
        }
        else start = 1;
    }

    type("HURRAYYYYY!!! LETS BEGIN IN\n");
    Sleep(500);
    // count down till game start
    for (int i = 3; i >= 0; i--)
    {
        if (i != 0)
        {
            printf("%d\n", i);
            Sleep(1000);
        }
        else 
        {
            type("START");
            Sleep(1000);
            break;
        }
    }
    clear();
    // room number
    enum rooms CurrentRoom = ROOM1;
    char *room1_description = "you enter with bugtraps on the cieling and a computer on the desk.\n";
    type(room1_description);
    type("type help for available commands.");
//    while(CurrentRoom == ROOM1)
//    {
//        char userinput[25];
//        fgets(userinput, 25, stdin);
//        if(strcmp(userinput
//    }
    return 0;
}
