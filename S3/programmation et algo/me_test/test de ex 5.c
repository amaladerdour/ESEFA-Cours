#include<stdio.h>
int main()
{ // 1- saisir et test si elements de tableau(comprises entre 0 et 20)
    int i,N;
    float T[15],somme=0,moyenne,max;
   for(i=0;i<15;i++)
   {
       printf("entre la note %d :\t",i);
       scanf("%f",&T[i]);

   }
   for(i=0;i<15;i++)

    if((T[i]>=0)&&(T[i]<=20))
    ;
        else
        printf("erreur\n la note %f ne peut pas comprises entre 0 et 20\n",T[i]);
    // 2- l'afiichage
    printf("les notes que vous avez entre est:\n");
    for(i=0;i<15;i++)
        printf("%.2f \t",T[i]);
    // 3-la somme (calculer + afficher)
    for(i=0;i<15;i++)
        somme+=T[i];
    printf("somme = %f\n",somme);
    // 4- la moyenne
    moyenne= somme/15;
    printf("la moyenne = %f\n",moyenne);
    // 5- le nombre de note superieur a 10
    for(i=0;i<15;i++)
        if(T[i]>10)
        N++;
    printf("le nombre de note superieur à 10 est: %d\n",N);
    // 6- la note le plus grande
    for(i=0;i<15;i++)
    {
        if (T[i]<T[i+1])
        max=T[i+1];
        else
        max=T[i];
    }
      printf("le plus grande note est :%f\n",max);


 return 0 ;
}
