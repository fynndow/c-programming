#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char textGesamt[60];
    char eingabe1[20];
    char eingabe2[20];
    char eingabe3[20];

    printf("Geben Sie den ersten Text ein.\n");
    scanf("%s", eingabe1);
    printf("Geben Sie den zweiten Text ein.\n");
    scanf("%s", eingabe2);
    printf("Geben Sie den dritten Text ein.\n");
    scanf("%s", eingabe3);
    strcpy(textGesamt, eingabe1);
    strncat(textGesamt, " ", 2);
    strncat(textGesamt, eingabe2, 20);
    strncat(textGesamt, " ", 2);
    strncat(textGesamt, eingabe3, 20);
    
    printf("die zusammengesetzte eingabe ist: %s\n", textGesamt);
    return 0;
}
