#include "Aufgabe2_square.h"
#include <stdio.h>
#include "Aufgabe2_user_input.h"

void square()
{
    int num = userInput();
    printf("Die Quadratzahl ihrer Eingabe ist: %i", num * num);

};