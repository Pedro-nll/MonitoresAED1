#include <stdio.h>

int main() {
    float salarioFixo, vendas, comissao, salarioFinal;

    printf("Digite o salario fixo do funcionário: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor das vendas no mes: ");
    scanf("%f", &vendas);

    comissao = 0.04 * vendas;

    salarioFinal = salarioFixo + comissao;

    printf("Comissao: R$ %.2f\n", comissao);
    printf("Salario Final: R$ %.2f\n", salarioFinal);

    return 0;
}
