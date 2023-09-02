#include <stdio.h>

int main(void){
    int comprimento, largura;
    printf("digite o comprimento do retangulo: ");
    scanf("%d", &comprimento);
    printf("Digite a largura do retangulo: ");
    scanf("%d", &largura);

    printf("A area do retangulo eh: %d\n", largura*comprimento);
    printf("O perimetro do retangulo eh: %d\n", largura*2+comprimento*2);
    return 0;
}