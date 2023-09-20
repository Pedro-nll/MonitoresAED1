#include <stdio.h>

int main()
{
    int tamVetor = 5;
    int vetor[tamVetor];
    
    for(int i=0; i<tamVetor; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    //Utilizado o Algoritmo de ordenação por bolha:
    for(int i=0; i<tamVetor; i++){
        for(int j=tamVetor-1; j>i; j--){
            if(vetor[j]<vetor[j-1]){
                int aux = vetor[j];
                vetor[j] = vetor[j-1];
                vetor[j-1] = aux;
            }
        }
    }

    for(int i=0; i<tamVetor; i++){
        printf("%d elemento - %d\n", i+1, vetor[i]);
    }

    return 0;
}
