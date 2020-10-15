#include <stdio.h>

void afficher(int C[3][3], char name);
void add(int A[3][3], int B[3][3], int C[3][3]);
void sub(int A[3][3], int B[3][3], int C[3][3]);
void mult_n(int A[3][3], int C[3][3], int n);
void trans(int A[3][3], int C[3][3]);

int main(){
    int A[3][3] = {{1,1,1},{2,3,2},{1,1,1}};
    int B[3][3] = {{1,1,1},{2,2,2},{1,1,1}};
    int C[3][3], D[3][3];
    add(A,B,C);
    sub(A,B,D);
    afficher(C,'C');
    printf("\n");
    afficher(D,'D');
    printf("\n");
    int N[3][3];
    mult_n(A, N, 2);
    afficher(N, 'N');
    printf("\n");
    int M[3][3];
    trans(A,M);
    afficher(A, 'A');
    printf("\n");
    afficher(M, 'M');
    return 0;
}

void add(int A[3][3], int B[3][3], int C[3][3]){
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void sub(int A[3][3], int B[3][3], int C[3][3]){
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void mult_n(int A[3][3], int C[3][3], int n){
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            C[i][j] = A[i][j] * n;
        }
    }
}

void trans(int A[3][3], int C[3][3]){
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            C[i][j] = A[j][i];
        }
    }
}

void afficher(int C[3][3], char name){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i == 1 && j == 0)
                printf("%c = %d", name, C[i][j]);
            else
                printf("    %d", C[i][j]);
        }
        printf("\n");
    }
}
