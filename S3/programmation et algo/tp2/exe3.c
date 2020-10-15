#include <stdio.h>

int main(){
    //les dimentions de la matrice saisie par l'utilisateur
    int M,N;
    printf("Donnez les dimentions (N,M) de la matrice:\n");
    scanf("%d%d", &N, &M);

    //Donnez les valeurs de la matrice A
    int A[N][M];
    int i, j;
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    //Calculer le transpose de la matrice A et le stocker dans une matrice B
    int B[M][N]; //les dimentions de la matrice B sont l'opposé de la matrice A (M-->N et N-->M)
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            B[i][j] = A[j][i];
        }
    }

    //Afficher les matrice A et B
    printf("A = \n");
    for(i=0; i<N; i++){
        for(j=0; j<M; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("B = \n");
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
