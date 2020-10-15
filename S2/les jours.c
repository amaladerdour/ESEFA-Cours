#include<stdio.h>
main()
{
    float n,i,s=0;
    printf("saisir un nombre n");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
        s=s+1/i;
    printf("%f",s);
}
