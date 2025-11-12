#include <stdio.h>
#include <math.h>
#include "Aufgabe1.h"

float input()
{
    float eingabe;
    printf("Gib eine Zahl ein: \n");
    scanf("%f", &eingabe);
    return fabs(eingabe);
}