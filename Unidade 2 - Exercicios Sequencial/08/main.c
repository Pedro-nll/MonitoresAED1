#include <stdio.h>
#include <math.h>

int main(void){
    double raio;
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    printf("Usando pi pela biblioteca math.h temos que a area da circunferencia eh: %lf\n", raio*raio*M_PI);
    printf("Usando pi como 3.14 temos a area sendo: %lf\n", raio*raio*3.14);

    return 0;
}