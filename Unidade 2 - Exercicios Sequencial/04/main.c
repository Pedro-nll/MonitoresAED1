#include <stdio.h>
#include <math.h>

void main(void){
    // unsigned int significa que essa variavel so vai armazenar numeros inteiros e sem sinal, 
    // ganhando o espaço de memoria que seria usado para os numeros negativos e permitindo o tipo int
    // armazenar numeros positivos maiores
    unsigned int numeroPositivo;
    printf("Informe um numero inteiro POSITIVO: ");
    scanf("%d", &numeroPositivo);

    printf("O cubo de %d eh %lf\n", numeroPositivo, pow(numeroPositivo, 3));
    printf("a raiz quadrada de %d eh %lf\n", numeroPositivo, sqrt(numeroPositivo));
    printf("a raiz cubica de %d eh %lf\n", numeroPositivo, cbrt(numeroPositivo));
    printf("O seno de %d eh %lf\n", numeroPositivo, sin(numeroPositivo));
    printf("O cosseno de %d eh %lf\n", numeroPositivo, cos(numeroPositivo));
}