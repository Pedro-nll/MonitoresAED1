#include <stdio.h>
#include <string.h>

int main() {
    char S[201]; 
    char S2[4]; 

    // Lê a primeira string S
    scanf("%200[^\n]", S);
    getchar();

    // Lê a segunda string S2
    scanf("%3s", S2);

    int qtde = 0; // Contador de ocorrências
    int positions[201]; // Array para armazenar as posições
    int tamS2 = strlen(S2);

    for (int i = 0; S[i+tamS2-1]!='\0'; i++) {
        if (strncmp(S + i, S2, strlen(S2)) == 0) { //compara s2 a cada posição do vetor principal (S1)
            positions[qtde] = i;
            qtde++;
        }
    }

    // Imprimir o número de ocorrências e as posições
    printf("%d", qtde);

    for (int i = 0; i < qtde; i++) {
        printf(" %d", positions[i]);
    }

    printf("\n");

    return 0;
}

