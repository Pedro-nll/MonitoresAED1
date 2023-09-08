#include <stdio.h>
#include <math.h>

int fatorial(int num);

int main(void){
    float x;
    scanf("%f", &x);
    int N;
    scanf("%d", &N);
    float senx = 0;

    for(int i = 0; i<N; i++){
        if(i%2 == 0) senx += (pow(x, (1+i*2)) / fatorial(1+i*2));
        else senx -= (pow(x, (1+i*2)) / fatorial(1+i*2));
    }
    

    printf("%.2f\n",senx);
    return 0;
}

int fatorial(int num){
    int somatorio = 1;
    for(int i = num; i>0; i--){
        somatorio *= i;
    }
    return somatorio;
}