#include <stdio.h>
#include <ctype.h>
#include "Aufgabe2.h"

char input()
{
    char name[100];
    printf("Gib deinen Namen ein: \n");
    scanf("%s", name);
    name[0] = toupper(name[0]);
    printf("Dein Name lautet: %s\n", name);
    return name[0];
}