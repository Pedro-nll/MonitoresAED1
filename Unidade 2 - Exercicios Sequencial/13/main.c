#include <stdio.h>

int main() {
    float precoProduto;

    printf("Digite o preco do produto: ");
    scanf("%f", &precoProduto);

    printf("Novo preco com desconto de 10%%: R$ %.2f\n", precoProduto * 0.9);
    printf("Novo preco com aumento de 20%%: R$ %.2f\n", precoProduto * 1.2);

    return 0;
}
