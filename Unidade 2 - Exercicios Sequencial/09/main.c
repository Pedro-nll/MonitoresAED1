#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    int discriminante = b * b - 4 * a * c;

    // Como não existem raizes negativas, verificamos se o disciminante será maior que 0
    if (discriminante > 0) {
        int raiz_positiva = (-b + (int)sqrt(discriminante)) / (a * 2);
        int raiz_negativa = (-b - (int)sqrt(discriminante)) / (a * 2);

        printf("Pegando o valor positivo da raiz temos a raiz %d\n", raiz_positiva);
        printf("Pegando o valor negativo da raiz temos a raiz %d\n", raiz_negativa);
    } 
    //Caso o discriminante seja igual a zero significa que só existe uma raiz
    else if (discriminante == 0) {
        int raiz_unica = -b / (a * 2);
        printf("A raiz única é %d\n", raiz_unica);
    } 
    else {
        printf("As raízes não existem no conjunto dos números inteiros.\n");
    }

    return 0;
}
