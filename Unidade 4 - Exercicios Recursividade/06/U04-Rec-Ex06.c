#include <stdio.h>

int conversaoBinaria(int n){
    if(n > 1){
        conversaoBinaria(n/2);
    }
    printf("%d", n%2);
    return 0;
}

int main(void){
    int N;
    scanf("%d", &N);
    if(N < 0){
        // REPRESENTACAO COM SINAL DE MAGNITUDE
        printf("1");
        conversaoBinaria(N*-1);
    }else{
        conversaoBinaria(N);
    }
    printf("\n");
    return 0;
}