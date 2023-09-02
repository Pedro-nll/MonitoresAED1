#include <stdio.h>

int main(void){
    int x, y;
    printf("Digite os valores de x e y separados por um espaco: ");
    // É possível ler mais de um numero com um unico scanf
    // É possível separar os números no scanf por quebras de linha ou espaços
    scanf("%d %d", &x, &y);
    printf("O resto da divisao de %d por %d eh %d\n", x, y, x%y);
    return 0;
}