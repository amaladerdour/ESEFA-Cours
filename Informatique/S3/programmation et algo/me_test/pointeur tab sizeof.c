
#include<stdio.h>
int main(){
    int age[]={14,12,15,16,17};
    int *p= age;
    int i, numElement= sizeof(age)/sizeof(int);// numéro des elements de tableau sur la taille de int dans la memoir=5
    for(i=0;i<numElement;i++)
    {
        printf("l'adresse %p contient la valeur %d \n ",(int)p,*p);
        p++;
    }

return 0;}
