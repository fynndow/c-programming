#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name1[20];
    char name2[20];

    printf("Gebe den ersten Namen ein: \n");
    scanf("%s", name1);

    printf("Gebe den zweiten Namen ein \n");
    scanf("%s", name2);
    
    if (strcmp(name1, name2) > 0)
    {
        printf("%s steht vor %s im Alphabet", name2, name1);
    }
    else if (strcmp(name1, name2) < 0)
    {
        printf("%s steht vor %s im Alphabet", name1, name2);
    }
    else
    {
        printf("Die Werte sind an gleicher alphabetischer Reihenfolge.");
    }
    

    return 0;
}
