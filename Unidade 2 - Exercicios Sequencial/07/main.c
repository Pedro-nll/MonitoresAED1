#include <stdio.h>

int main(void){
    int baseMenor, baseMaior, altura;
    printf("Digite o valor das bases do trapezio: ");
    scanf("%d %d", &baseMaior, &baseMenor);

    // Caso o usuario digite os valores das bases ao contrário da forma em que salvamos
    // no scanf (base maior sendo o primeiro numero e a base menor o segundo), trocamos
    // os valores por meio desse condicional:
    if(baseMaior < baseMenor){
        int aux = baseMaior;
        baseMaior = baseMenor;
        baseMenor = aux;
    }

    printf("Digite a altura do trapezio: ");
    scanf("%d", &altura);

    printf("A area do trapezio eh: %d\n", ((baseMaior + baseMenor)*altura)/2);

    return 0;
}