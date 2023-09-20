#include <stdio.h>

int main()
{
    int qtde;
    int vetor[200];
    
    scanf("%d", &qtde);
    for(int i=0; i<qtde; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    //Utilizado o Algoritmo de ordenação por bolha:
    for(int i=0; i<qtde; i++){
        for(int j=qtde-1; j>i; j--){
            if(vetor[j]<vetor[j-1]){
                int aux = vetor[j];
                vetor[j] = vetor[j-1];
                vetor[j-1] = aux;
            }
        }
    }

    //Print do array
    printf("Vetor = {");
    for(int i=0; i<qtde-1; i++){
        printf("%d, ", vetor[i]);
    }
    printf("%d}", vetor[qtde-1]);


    //Uma vez que ordenado fica mais facil verificar se existem elementos repetidos
    printf("\n\nElementos repetidos no array:");
    for(int i=0; i<qtde; i++){
        if(vetor[i]==vetor[i+1]){
            printf("\n%d", vetor[i]);
            int aux = vetor[i];
            i++;
            while(vetor[i+1] == aux){ //Forma para evitar o print de elementos repetidamente se tiver uma sequência maior que 2 elementos iguais no array
                i++;
            }
        }
    }

    return 0;
}
