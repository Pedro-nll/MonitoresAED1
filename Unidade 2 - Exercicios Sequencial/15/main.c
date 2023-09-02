#include <stdio.h>

int main() {
    float horas;

    printf("Digite a quantidade de horas: ");
    scanf("%f", &horas);

    printf("%.2f horas sao %.2f minutos\n", horas, horas * 60);

    return 0;
}
