#include <stdio.h>
#include <string.h>

int main() {
    char palavraAtual[100];
    char maiorTam[100];
    char menorTam[100];
    char maiorLex[100];
    char menorLex[100];

    // Inicialize as variáveis
    strcpy(maiorTam, "");
    strcpy(menorTam, "");
    strcpy(maiorLex, "");
    strcpy(menorLex, "");

    while (1) {
        scanf("%s", palavraAtual);

        if (strcmp(palavraAtual, "-1") == 0) {
            break;
        }

        if (strlen(palavraAtual) > strlen(maiorTam)) {
            strcpy(maiorTam, palavraAtual);
        }
        if (strlen(palavraAtual) < strlen(menorTam) || strcmp(menorTam, "") == 0) {
            strcpy(menorTam, palavraAtual);
        }

        if (strcmp(palavraAtual, maiorLex) > 0 || strcmp(maiorLex, "") == 0) {
            strcpy(maiorLex, palavraAtual);
        }
        if (strcmp(palavraAtual, menorLex) < 0 || strcmp(menorLex, "") == 0) {
            strcpy(menorLex, palavraAtual);
        }
    }

    // Exiba os resultados
    printf("%s\n", maiorTam);
    printf("%s\n", menorTam);
    printf("%s\n", maiorLex);
    printf("%s\n", menorLex);

    return 0;
}
