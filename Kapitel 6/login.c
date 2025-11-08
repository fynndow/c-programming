#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char user[] = "meinName";
    char password[] = "halloichbins123";

    char userEingabe[20];
    char passwordEingabe[20];

    printf("Gib deinen Nutzernamen ein: \n");
    scanf("%s", userEingabe);
    printf("Gib dein Passwort ein: \n");
    scanf("%s", passwordEingabe);

    if ((strcmp(user, userEingabe) == 0) && (strcmp(password, passwordEingabe) == 0))
    {
        printf("Hallo %s!", user);
    } else {
        printf("Falsche Anmeldedaten!");
    }
    
    return 0;
}
