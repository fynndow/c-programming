#include <stdio.h>


int userInput()
{
    int number;
    printf("Geben Sie eine beliebige Zahl ein: \n");
    scanf("%i", &number);
    return number;
}

int abfrage(){

    int loopNumber = userInput();
    int num = 0;
    for (int loopNumber = 0; loopNumber < 10; loopNumber++)
    {
        printf("Die Zahlen für die Summe sind: %i\n", loopNumber);
        num += loopNumber;
    }
    return num;
    
}




int main(int argc, char const *argv[])
{
    printf("Das Ergebnis ist: %i", abfrage());
    return 0;
}
