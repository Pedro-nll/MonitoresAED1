#include <stdio.h>
#include <math.h>

int main(void){
    int x1, x2, y1, y2;

    printf("Digite os valores de x e y do ponto 1: ");
    scanf("%d %d", &x1, &y1);
    printf("Digite os valores de x e y do ponto 2: ");
    scanf("%d %d", &x2, &y2);

    printf("A distancia entre os pontos eh de: %lf", sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
    return 0;
}