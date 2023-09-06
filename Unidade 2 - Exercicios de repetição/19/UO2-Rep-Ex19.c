#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    int fatorial = 1;
    for(int i = N; i>0; i--){
        fatorial *= i;
    }
    printf("%d\n", fatorial);
    return 0;
}