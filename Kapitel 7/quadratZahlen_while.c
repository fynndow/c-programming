#include <stdio.h>

int main(int argc, char const *argv[])
{
    int zahl = 10;

    while (zahl > 0)
    {
        printf("%i\n", zahl*zahl);
        zahl--;
    }
    
    return 0;
}
