#include <stdio.h>

void remplissage(int A[3][5]);
void affichage(int A[3][5]);

int main(){
    int A[3][5];
    remplissage(A);
    printf("\n----------------------------------\n");
    affichage(A);
    return 0;
}

void remplissage(int A[3][5]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
}

void affichage(int A[3][5]){
    int i,j;
    printf("A = \n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
}
