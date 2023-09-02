#include <stdio.h>

int main() {
    float minutos;

    printf("Digite a quantidade de minutos: ");
    scanf("%f", &minutos);

    printf("%.2f minutos sao %.2f minutos\n", minutos, minutos / 60);

    return 0;
}
