#include <stdio.h>

int main() {
    float salario, percentual_aumento, aumento, novo_salario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual_aumento);


    aumento = salario * (percentual_aumento / 100);

    novo_salario = salario + aumento;

    printf("O valor do aumento eh: R$ %.2f\n", aumento);
    printf("O novo salario eh: R$ %.2f\n", novo_salario);

    return 0;
}
