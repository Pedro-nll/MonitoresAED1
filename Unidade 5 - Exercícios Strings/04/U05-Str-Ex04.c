#include <stdio.h>
#include <string.h>

int main() {
    char S[101]; 
    int N;

    // Lê a string S
    scanf("%100[^\n]", S);

    // Converter a string para letras minúsculas 
    for (int i = 0; S[i]; i++) {
        if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = S[i] + 32; // Adiciona 32 para converter maiúscula em minúscula
        }
    }

    // Lê o conjunto de caracteres
    scanf(" %d", &N);
    char characters[N+1];
    for (int i = 0; i < N; i++) {
        scanf(" %c", &characters[i]);
        if (characters[i] >= 'A' && characters[i] <= 'Z') {
            characters[i] = characters[i] + 32; // Converte maiúscula em minúscula
        }
    }
    characters[N] = '\0';

    // Conta as ocorrências dos caracteres
    for (int i = 0; characters[i] != '\0'; i++) {
        int qtdeIguais=0;
        int posicoes[101];
        for (int j = 0; j < 100; j++) {
            if (S[j] == characters[i]) {
                posicoes[qtdeIguais] = j;
                qtdeIguais++;
            }
        }
        printf("%d", qtdeIguais);
        for(int j=0; j<qtdeIguais; j++){
            printf(" %d", (int)posicoes[j]);
        }
        printf("\n");
    }

    return 0;
}

