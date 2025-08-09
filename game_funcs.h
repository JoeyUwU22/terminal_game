#ifndef game_h
#define game_h
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#endif

#define MAX_CHARACTER 25
#define FILENAME_SIZE 1024

typedef struct node 
{
    char *id;
    char *dialogue;
    struct node *next;
    struct node *prev;
} node;

enum rooms {
    ROOM1,
    ROOM2
};

void clear(void);

void type(char * text);

void clearinput(void);

