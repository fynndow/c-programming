#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array1[] = {3, 23, 7, 64, 9};
    int array2[5];

    for (int i = 0; i < sizeof(array1)/sizeof(array1[0]); i++)
    {
        array2[i] = array1[i] * array1[i];
        printf("Array1 Wert: %i Array2 Wert: %i \n", array1[i], array2[i]);
    }
    return 0;
}
