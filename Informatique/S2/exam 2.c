#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=5;++i)
    {
        if (i==2) continue;
        if(i==4)break;
        printf("%d",i);
    }






}
