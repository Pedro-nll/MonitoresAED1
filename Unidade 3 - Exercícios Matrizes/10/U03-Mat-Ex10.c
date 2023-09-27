#include <stdio.h>
// Faça um algoritmo que lê duas matrizes A e B de dimensão M x N. O algoritmo deve criar uma terceira matriz C igual à adição das duas matrizes, isto é, C = A + B. M e N são digitados pelo usuário.

int main(){
    int M, N;
    scanf("%d", &M); //linhas
    scanf("%d", &N); //colunas

    int A[M][N], B[M][N], C[M][N];
    //leitura de A
    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++){
            scanf("%d", &A[i][j]);
        }
    }
    //leitura de B
    for (int i=0; i<M; i++){
           for (int j=0; j<N; j++){
               scanf("%d", &B[i][j]);
           }
    }

    //cálculo de c
    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++){
              C[i][j] = A[i][j] + B[i][j];
        }
    }

    //print c
    for (int i=0; i<M; i++){
           for (int j=0; j<N; j++){
                 printf("%d ", C[i][j]);
           }
           printf("\n");
    }





    return 0;
}
