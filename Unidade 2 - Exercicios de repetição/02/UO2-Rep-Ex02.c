#include <stdio.h>

int main(void){
    int Q, N;
    scanf("%d %d", &Q, &N);
    for(int i = 1; i<=N;){
        printf("%d ", i);
        i += Q;
    }
    printf("\n");
    return 0;
}