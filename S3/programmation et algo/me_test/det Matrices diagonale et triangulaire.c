#include<stdio.h>
#include<stdlib.h>
//det Matrices diagonale et triangulaire
//la valeur du d�terminant est �gale au produit des termes de la diagonale principale.
int main()
{
    int j,i,n;
    float det;
    //float *Tab = malloc(n * n*sizeof(float));
    float **Tab=malloc(n*sizeof(float));
    for(i=0;i<n;i++)
      Tab[i]=malloc((i+1)*sizeof(**Tab));


    printf("saisie un nombre des lignes\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            printf("entre Tab [%d][%d]= \t",i,j);
            scanf("%f",&Tab[i][j]);
        }
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
          printf(" Tab [%d][%d]= %f\t",i,j,Tab[i][j]);

    det=1;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(i==j)
        det = det * Tab[i][j];

        printf("det=%f",det);
        free(Tab);
return 0;
}
//6- Inversion des matrices carr�e
/* int InversionMatrices(float **A)
{
    int i,j,n,m;
    float **I,**B;
     A= malloc(n * sizeof(float));
    for(i=0;i<n;i++)
      A[i]=malloc((i+1)*sizeof(**A));
    // la saisie de la dimension N e M
    printf("Entrer le nombre des lignes N et des colonne M\t");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
      for(j=0;j<m;j++)
        I[i][j]=1;
    // La sasie les nombre de matrice A
    for(i=0;i<n;i++)
      for(j=0;j<m;j++)
       {
           printf("A[%d][%d]=\t",i,j);
        scanf("%f",&A[i][j]);
       }
    // afficher la matrice A
      printf("Matrice donn�e A :\n");
 for (i=0; i<n; i++)
    {
     for (j=0; j<m; j++)
          printf("\t%f", A[i][j]);
     printf("\n");
    }
 //l'Invertion de matrice A
     for(i=0;i<n;i++)
      for(j=0;j<m;j++)
        MultiplicationMatrice(A[i][j],B[i][j]);
 // afficher l'Invertion de matrice A
     printf("Invertion de Matrice  A est :\n");
      for (i=0; i<n; i++)
    {
     for (j=0; j<m; j++)
          printf("\t%f", B[i][j]);
     printf("\n");
    }*/

