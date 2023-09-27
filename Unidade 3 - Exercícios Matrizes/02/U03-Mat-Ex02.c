#include <stdio.h>

int main(void){
    int M, N;
    scanf("%d %d", &M, &N);
    int matriz[M][N];
    for(int i = 0; i < M; i++){
        for(int j =0; j<N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(matriz[i][j] > 15 && matriz[i][j] < 25){
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}