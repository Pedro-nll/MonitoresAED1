#include <stdio.h>

int main (void) {
    int n1, n2, n3;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("A soma eh %d\n", n1+n2+n3);
    printf("O produto eh %d\n", n1*n2*n3);
    return 0;
}