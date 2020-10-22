#include<stdio.h>
int main()
{
    float n1,n2,moyanne;
    int c1,c2;
    printf("saisir deux nombres: \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    printf("saisir leurs coefficients: \n");
    scanf("%d",&c1);
    scanf("%d",&c2);
    moyanne=((n1*c1)+(n2*c2))/(c1+c2);
    printf("la moyenne des nombres est: %f \n",moyanne);
    return 0;
}
