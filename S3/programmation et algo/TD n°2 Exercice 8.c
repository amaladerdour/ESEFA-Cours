#include<stdio.h>
#include<stdlib.h>

 int additionMatrice(float **A,float **B);
 int SoustractionMatrice(float**A,float**B);
 int MultiplicationNombre(float **A,int N );
 int TranspositionMatrice(float **A);
 int MultiplicationMatrice(float**A,float **B);

 int main()
{
    int i,j,Nb,N;
    float **A, **B;
    // le menu
    printf("Bienvenue sur mon programme qui permet de faire les Op�rations sur les matrices\n");
    do{
    printf("\n*******************menu**********************\n");
    printf("saisir un nombre pour faire:\n 0-Pour quit�\n 1- Addition de deux matrices\n 2- Soustraction de deux matrices\n 3- transposition d'une matrice\n 4- Multiplication de deux matrices\n 5- Multiplication d'une matrice par un nombre\n");
    scanf("%d",&Nb);

    switch(Nb)
    {
        case 0: ;break;
        case 1: additionMatrice( A,B);  break;
        case 2: SoustractionMatrice(A,B); break;
        case 3: TranspositionMatrice( A); break;
        case 4: MultiplicationMatrice( A, B); break;
        case 5:  MultiplicationNombre(A,N); break;

    default: printf(" erreur");
    }
    }while(Nb!=0);

    return 0;
}
// 1- Addition d'une matrice
 int additionMatrice(float **A,float **B)
{
    float **C ;
    int i,j,n,m;

    /* Saisie des donn�es */
    printf("\nl'Addition de deux matrices\n");
            printf("*** Matrice A ***\n");
            printf("entre les nombres des lignes n et des colones m de matrice A et B:\n");
            scanf("%d%d",&n,&m);
    //tableau dynamique 2D
      A= malloc(n * sizeof(float));
      B= malloc(n * sizeof(float));
    for(i=0;i<n;i++)
      A[i]=malloc((i+1)*sizeof(**A));
    for(i=0;i<n;i++)
      B[i]=malloc((i+1)*sizeof(**B));
      //saisie la matrice A
    for(i=0 ;i<n ;i++)
        for(j=0 ;j<m ;j++)
        {
            printf("A[%d][%d]=\t",i,j);
            scanf("%f",&A[i][j]);
        }
            printf("*** Matrice B ***\n");
        for(i=0 ;i<n ;i++)
        for(j=0 ;j<m ;j++)
        {
            printf("B[%d][%d]=\t",i,j);
            scanf("%f",&B[i][j]);
        }
 /* Affichage des matrices */
 printf("Matrice donn�e A :\n");
 for (i=0; i<n; i++)
    {
     for (j=0; j<m; j++)
          printf("\t%f", A[i][j]);
     printf("\n");
    }
 printf("Matrice donn�e B :\n");
 for (i=0; i<n; i++)
    {
     for (j=0; j<m; j++)
          printf("\t%f", B[i][j]);
     printf("\n");
    }
 //tableau dynamique 2D
   C=malloc(n*sizeof(float));
    for(i=0;i<n;i++)
       C[i]=malloc((i+1)*sizeof(**C));
 /* Affectation du r�sultat de l'addition � C */
    for (i=0; i<n; i++)
     for (j=0; j<m; j++)
        C[i][j]=A[i][j]+B[i][j];
        for(i=0;i<n;i++)


 /* afficher du r�sultat (la matrice A+B=C */
        printf("*** Matrice A+B =***\n");

    for(i=0 ;i<n ;i++)
    {
        for(j=0 ;j<m ;j++)
             printf("\t%f",C[i][j]);
             printf("\n");
    }

    return 0;
}
// 2- la soustraction d'une matrice
 int SoustractionMatrice(float**A,float**B)
{
    float **C ;
    int i,j,n,m;
    printf("\nla soustraction de deux matrices\n");
    /* Saisie des donn�es */

            printf("*** Matrice A ***\n");
            printf("saisir les nombres des lignes n et des colonnes m de matrice A et B:\n");
            scanf("%d%d",&n,&m);
    //tableau dynamique 2D
     A= malloc(n * sizeof(float));
     B= malloc(n * sizeof(float));
    for(i=0;i<n;i++)
      A[i]=malloc((i+1)*sizeof(**A));
    for(i=0;i<n;i++)
      B[i]=malloc((i+1)*sizeof(**B));
    // saisie la matrice A
    for(i=0 ;i<n ;i++)
        for(j=0 ;j<m ;j++)
        {
            printf("A[%d][%d]=\t",i,j);
            scanf("%f",&A[i][j]);
        }
            printf("*** Matrice B ***\n");
        for(i=0 ;i<n ;i++)
        for(j=0 ;j<m ;j++)
        {
            printf("B[%d][%d]=\t",i,j);
            scanf("%f",&B[i][j]);
        }
 /* Affichage des matrices */
 printf("Matrice donn�e A :\n");
 for (i=0; i<n; i++)
    {
     for (j=0; j<m; j++)
          printf("\t%f", A[i][j]);
     printf("\n");
    }
 printf("Matrice donn�e B :\n");
 for (i=0; i<n; i++)
    {
     for (j=0; j<m; j++)
          printf("\t%f", B[i][j]);
     printf("\n");
    }
    //tableau dynamique 2D
    C=malloc(n*sizeof(float));
    for(i=0;i<n;i++)
       C[i]=malloc((i+1)*sizeof(**C));
 /* Affectation du r�sultat de l'addition � C */
    for (i=0; i<n; i++)
     for (j=0; j<m; j++)
        C[i][j]=A[i][j]-B[i][j];
 /* afficher du r�sultat (la matrice A-B=C */
        printf("*** Matrice A-B =***\n");
    for(i=0 ;i<n ;i++)
    {
        for(j=0 ;j<m ;j++)
             printf("\t%f",C[i][j]);
             printf("\n");
    }
    return 1;
}

//3- Multiplication par un Nombre:
    int MultiplicationNombre(float **A,int N )
    {
    float **C;
    int i,j,n,m;
    printf("\nla multiplication d'une matrice par un nombre\n");
    printf ("entre le nombres des lignes n et des colonnes m: \n");
    scanf ("%d%d",&n,&m);
 //tableau dynamique 2D
     A= malloc(n * sizeof(float));
    for(i=0;i<n;i++)
      A[i]=malloc((i+1)*sizeof(**A));
 //saisie la matrice A
    printf("entre les  nombres du matrice A\n");
    for (i=0;i<n;i++)
        for(j=0;j<m;j++)
    {
        printf("A[%d][%d]=\t",i,j);
        scanf("%f",&A[i][j]);
    }
    printf("saisir un nombre pour multiplier par la matrice A:\n");
    scanf("%d",&N);
 //tableau dynamique 2D
    C=malloc(n*sizeof(float));
    for(i=0;i<n;i++)
       C[i]=malloc((i+1)*sizeof(**C));
 // calcule de C=A*N
    for (i=0;i<n;i++)
        for(j=0;j<m;j++)
           C[i][j]=A[i][j]*N;
 //affichage de la matrise C =A*N
    for (i=0;i<n;i++)
     {   for(j=0;j<m;j++)
        printf("\t%f",C[i][j]);
        printf("\n");
    }

return 1;}
// 4- transposition d'une matrice
 int TranspositionMatrice(float **A)
{
    float **B;
    int n,m,i,j;
        printf("\nTransposition d'une matrice \n");
        printf("entre les nombres des lignes n et des colonnes m:\n");
        scanf("%d%d",&n,&m);
 //tableau dynamique 2D
     A= malloc(n * sizeof(float));
    for(i=0;i<n;i++)
      A[i]=malloc((i+1)*sizeof(**A));

//saisie de la matrice A
        printf("saisir les valeurs de matrice A\n");
    for(i=0; i<n; i++)
     for(j=0; j<m; j++)
     {
        printf("A[%d][%d]=\t",i,j);
        scanf("%f",&A[i][j]);
     }
 //tableau dynamique 2D
     B= malloc(n * sizeof(float));
    for(i=0;i<n;i++)
      B[i]=malloc((i+1)*sizeof(**B));
//Transposition de la matrice A est la matrice B
    for(i=0; i<n; i++)
     for(j=0; j<m; j++)
         A[i][j]=B[j][i];
 //affichage du transposition (la matrice B)
    for(i=0 ;i<m ;i++ )
     {
     for(j=0 ;j<n ;j++)

        printf("\t%f",B[i][j]);
        printf("\n");
     }
        return 1;
}

//5- la multiplication par une matrice :
 int MultiplicationMatrice(float**A,float **B)
{
    float **C ;
    int i,j,n,m,p,k;
    printf("\nla multiplication de deux matrices\n");
    /* Saisie des donn�es */
            printf("*** Matrice A ***\n");
            printf("entre les nombres des lignes n et des colonnes m de matrice A:\n");
            scanf("%d%d",&n,&m);
    //tableau dynamique 2D
     A= malloc(n * sizeof(float));
    for(i=0;i<n;i++)
      A[i]=malloc((i+1)*sizeof(**A));
    //saisie de la matrice A
    for(i=0 ;i<n ;i++)
        for(j=0 ;j<m ;j++)
        {
            printf("A[%d][%d]=\t",i,j);
            scanf("%f",&A[i][j]);
        }
            printf("*** Matrice B ***\n");
            printf("le nombre de ligne de B est: %d \n",m);
            printf("entre les nombres des colonnes p de matrice B:\n");
            scanf("%d",&p);
  //tableau dynamique 2D
     B= malloc(n * sizeof(float));
    for(i=0;i<n;i++)
      B[i]=malloc((i+1)*sizeof(**B));
 //saisie de B
        for(i=0 ;i<m ;i++)
        for(j=0 ;j<p ;j++)
        {
            printf("B[%d][%d]=\t",i,j);
            scanf("%f",&B[i][j]);
        }
 /* Affichage des matrices */
 printf("Matrice donn�e A :\n");
 for (i=0; i<n; i++)
    {
     for (j=0; j<m; j++)
          printf("\t%f", A[i][j]);
     printf("\n");
    }
 printf("Matrice donn�e B :\n");
 for (i=0; i<m; i++)
    {
     for (j=0; j<p; j++)
          printf("\t%f", B[i][j]);
     printf("\n");
    }
 //tableau dynamique 2D
      C=malloc(n*sizeof(float));
    for(i=0;i<n;i++)
      C[i]=malloc((i+1)*sizeof(**C));
 /* Affectation du r�sultat de la multiplication � C */
    for (i=0; i<n; i++)
     for (j=0; j<p; j++)
         {
          C[i][j]=0;
          for (k=0; k<m; k++)
               C[i][j] += A[i][k]*B[k][j];
         }
  /* Edition du r�sultat */
        printf("*** Matrice A*B =***\n");
    for(i=0 ;i<n ;i++)
    {
        for(j=0 ;j<p ;j++)
             printf("\t%f",C[i][j]);
             printf("\n");
    }
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
