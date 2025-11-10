#include <stdio.h>

int numbers[] = {2,6,9,10};
int arrayAddieren(int array1[]){   
    int result = 0; 
    for (int i = 0; i < 4; i++)
    {
        result += array1[i];
        
    }
    return result;
}


int main(int argc, char const *argv[])
{
    printf("Die Summe des Arrays ist: %i", arrayAddieren(numbers));
    return 0;
}


