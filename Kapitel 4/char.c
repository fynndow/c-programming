#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Geben Sie einen Wert ein: ");
    int eingabe;
    eingabe = getchar();
    printf("Eingegebener Wert (int): %i \n", eingabe);
    eingabe++;
    printf("Nächster Buchstabe ist (char): %c \n", eingabe);
    return 0;
}
