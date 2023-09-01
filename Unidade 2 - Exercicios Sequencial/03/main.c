#include <stdio.h>

//A keyword "#define" define uma constante (primeiro argumento) e atribui a ela um valor (segundo argumento)
#define peso1 1
#define peso2 2
#define peso3 3
#define peso4 4

void main (void){
    int nota1, nota2, nota3, nota4;
    printf("Digite o primeiro numero: ");
    scanf("%d", &nota1);
    printf("Digite o segundo numero: ");
    scanf("%d", &nota2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &nota3);
    printf("Digite o quarto numero: ");
    scanf("%d", &nota4);

    printf("A media ponderada eh: %d\n", (nota1*peso1 + nota2*peso2 + nota3*peso3 + nota4*peso4) / (peso1 + peso2 + peso3 + peso4));
}