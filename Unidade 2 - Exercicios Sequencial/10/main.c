#include <stdio.h>

int main(void){
    float salarioAtual;
    printf("Digite o valor do salario atual: ");
    scanf("%f", &salarioAtual);

    printf("O novo salario sera %f\n", salarioAtual*1.25);
    return 0;
}