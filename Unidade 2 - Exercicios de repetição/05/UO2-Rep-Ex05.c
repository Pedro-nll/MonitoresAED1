#include <stdio.h>

int main(void){
    int N, M;
    int soma = 1;
    scanf("%d %d", &N, &M);
    for(int i = N; i<=M; i++){
        soma *= i;
    }
    printf("%d\n", soma);
    return 0;
}