#include <stdio.h>

int main()
{
    float a[20];
    float resp = 0;

    printf("Digite 20 numeros reais: \n");

    for(int i = 0; i < 20; i++)
    {
        scanf("%f", &a[i]);
    }


    for(int i = 0; i < 10; i++)
    {
        resp += (a[i] - a[19 - i]) * (a[i] - a[19 - i]);
    }

    printf("O resultado da exprecao e: %f", resp);


    return 0;
}
