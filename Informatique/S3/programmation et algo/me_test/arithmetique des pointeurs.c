#include<stdio.h>
int main()
{
    /*int A=2,n=1,B;
    int *P;
    P=&A;
     //B=*P+n;
     B=&A+n*sizeof(int);

    printf("A=%d\t B= %d\tn=%d\t P=%p",A,B,n,P);*/
    int A,B,*P;
    A=10;
    B=50;
    P=&A;
    B=*P;
    printf("A=%d,\nB=%d\nP=%d",A,B,P);
    return 0;
}
