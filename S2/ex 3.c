#include<stdio.h>
void main()
{
    float n1,n2,somme,moyanne;
    printf("Saisir deux nomdres:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    somme=n1+n2;
    moyanne=somme/2;
    printf("la somme est: %f \n la moyenne est:%f \n",somme,moyanne);
    return 0;
}
