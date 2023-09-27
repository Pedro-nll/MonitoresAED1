#include <stdio.h>

int main(void) {
    int M = 0, N = 0;
    scanf("%d %d", &M, &N);
    int matriz[M][N];
    long long int mulcoluna[N];

    for (int j = 0; j < N; j++) {
        mulcoluna[j] = 1;
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
            mulcoluna[j] *= matriz[i][j];
        }
    }

    for (int j = 0; j < N; j++) {
        printf("%d ", mulcoluna[j]);
    }

    printf("\n");
    return 0;
}