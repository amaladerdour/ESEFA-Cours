#include <stdio.h>
int main()
{
    int a,b ,q,r ;
    printf("saisir deux entiers a et b:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    q=a/b;
    r=a%b;
    printf("le quotient de deux nombres qui vous avez entre est: %d \n le reste est: %d \n",q,r);
    return 0;
}
