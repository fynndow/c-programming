#include <stdio.h>
#include <string.h>

struct Buch
{

    char titel[20];

};

int main(int argc, char const *argv[])
{
    char buchstabe;
    struct Buch potter;
    struct Buch volleyball;
    struct Buch tennis;
    struct Buch handball;
    struct Buch fussball;
    strcpy(potter.titel, "Harry Potter Teil 1");
    strcpy(volleyball.titel, "volleyball");
    strcpy(tennis.titel, "tennis");
    strcpy(handball.titel, "handball");
    strcpy(fussball.titel, "fussball");

    printf("Geben sie den Buchstaben des gesuchten Werkes ein: \n");
    buchstabe = getchar();

    if (buchstabe == 'p')
    {
        printf("%s", potter.titel);
    }
    else if (buchstabe == 'v')
    {
        printf("%s", volleyball.titel);
    }
    else if (buchstabe == 't')
    {
        printf("%s", tennis.titel);
    }
    else if (buchstabe == 'h')
    {
        printf("%s", handball.titel);
    }
    else if (buchstabe == 'f')
    {
        printf("%s", fussball.titel);
    }
    else {
        printf("kein passendes buch gefunden");
    }
    



    return 0;
}
