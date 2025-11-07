#include <stdio.h>
#include <string.h>

struct Buch
{
    char titel[20];
    char autor[20];
    int preis;
};


int main(int argc, char const *argv[])
{
    struct Buch potter;
    strcpy(potter.titel, "Harry Potter Teil 1");
    strcpy(potter.autor, "J.K. Rowling");
    potter.preis = 20;
    printf("der titel ist: %s\n", potter.titel);
    printf("der preis ist: %d€ \n", potter.preis);
    printf("der autor ist: %s\n", potter.autor);
    return 0;
}
