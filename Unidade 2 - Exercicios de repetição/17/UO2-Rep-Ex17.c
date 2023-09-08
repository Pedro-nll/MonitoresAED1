#include <stdio.h>

int main(void){
    int N; 
    float S = 0.0;
    scanf("%d", &N);
    float divisor, dividendo;
    for(int i = 0; i<N; i++){
        dividendo = 1+i*2;
        divisor = 1+i;
        S += dividendo/divisor;
    }
    printf("%.2f\n", S);
    return 0;
}