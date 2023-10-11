#include <stdio.h>

void calculaConceito(int N){
    if(N>0 && N<=39){
        printf("F\n");
    }else if(N>=40 && N<=59){
        printf("E\n");
    }else if(N>=60 && N<=69){
        printf("D\n");
    }else if(N>=70 && N<=79){
        printf("C\n");
    }else if(N>= 80 && N<90){
        printf("B\n");
    }else{
        printf("A\n");
    }
}

int main(void){
    int N;
    scanf("%d", &N);
    int vet[N];
    for(int i = 0; i<N; i++){
        scanf("%d", vet+i);
    }
    for(int i = 0; i<N;i++){
        calculaConceito(vet[i]);
    }
    return 0;
}