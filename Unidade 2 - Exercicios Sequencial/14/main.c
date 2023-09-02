#include <stdio.h>

int main() {
    float horasTrabalhadas, salarioMinimo, horasExtras;

    printf("digite o numero de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("digite o valor do salario min: ");
    scanf("%f", &salarioMinimo);

    printf("digite o numero de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

    float valorHora = salarioMinimo / 8.0;
    float valorHoraExtra = salarioMinimo / 4.0;

    printf("O salario a receber eh: %.2f\n", (horasTrabalhadas * valorHora) + (horasExtras * valorHoraExtra));

    return 0;
}
