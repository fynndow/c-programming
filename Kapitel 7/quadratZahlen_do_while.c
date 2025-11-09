#include <stdio.h>



int main(int argc, char const *argv[])
{
    int zahl = 10;
    do
    {
        printf("%i\n", zahl*zahl);
        zahl--;
    } while (zahl > 0);
    
    return 0;
}
