#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("saisir trois nombres entier:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    a=d;
    b=c;
    c=a;
    d=c;
    printf("a= %d \n b= %d \n c= %d\n",a,b,c,d);
    return 0;
}
