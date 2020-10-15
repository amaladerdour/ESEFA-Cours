#include<stdio.h>

main()
{
    int pgcd,a,b;
    printf("saisir deux nombres");
    scanf("%d%d",&a,&b);

            while(a*b!=0)
                if (a>b)
                    a=a-b;
                else
                b=b-a;
                if(a==0)
                 pgcd=b;
                    else
                    pgcd=a;
                printf("pgcd %d",pgcd);

}
