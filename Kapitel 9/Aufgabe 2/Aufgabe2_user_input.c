#include "Aufgabe2_user_input.h"
#include <stdio.h>

int userInput(){
    int eingabe;
    printf("Geben Sie eine beliebige Zahl ein\n");
    scanf("%i", &eingabe);
    return eingabe;
}