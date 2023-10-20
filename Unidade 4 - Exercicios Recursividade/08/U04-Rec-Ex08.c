#include <stdio.h>
void inverteVetor(int vet[], int N){
    if(N > 0){
        printf("%d ", vet[N-1]);
        inverteVetor(vet, N-1);
    }
}

int main(void){
    int N; //TAMANHO DO VETOR
    scanf("%d", &N);
    int vet[N];
    for(int i = 0; i < N; i++){
        scanf("%d", vet + i);
    }
    inverteVetor(vet, N);
    printf("\n");
    return 0;
}