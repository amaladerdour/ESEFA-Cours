#include<stdio.h>
int main()
{
    float a,b,p,s;
    printf("saisir la largeur d'un rectangle:\n");
    scanf("%f",&a);
    printf("saisir la longueur d'un rectangle:\n");
    scanf("%f",&b);
    p=(a+b)*2;
    s=a*b;
    printf("le perimetre du rectangle est: %f \n la surface est: %f \n",p,s);
    return 0;
}
