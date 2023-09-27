#include <stdio.h>

int main(void){
    int M,N;
    scanf("%d %d", &M, &N);
    int matriz[M][N];
    int somaLinhas[M];
    for(int i = 0; i<M; i++){
        somaLinhas[i] = 0;
        for(int j = 0; j<N; j++){
            scanf("%d", &matriz[i][j]);
            somaLinhas[i] += matriz[i][j];
        }
    }
    for(int i = 0; i<M; i++){
        printf("%d ", somaLinhas[i]);
    }
    printf("\n");
    return 0;
}