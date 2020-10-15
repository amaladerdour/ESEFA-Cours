#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a;
    char nom[50] ;
    printf("saisir un nombre reel:");
    scanf("%f",&a);
    printf("saisir un nom:");
    scanf("%s",nom);
    printf("le nombre que vous avez saisir est : %f \nle nom que vous avez saisir est : %s",a,nom);
    return 0;
}
