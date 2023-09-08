#include <stdio.h>

//3. Ler N números reais e imprimir qual foi o maior e o menor número informado.

int main()
{
    int n;
    int maior;
    int menor;
    int aux;
    scanf("%d", &n);

    scanf("%d", &aux);
    maior = aux;
    menor = aux;

    for(int i = 0; i<n-1; i++)
    {
        scanf("%d", &aux);
        if(maior < aux)
        {
            maior = aux;
        }

        if(menor > aux)
        {
            menor = aux;
        }
    }
    printf("%d %d\n", maior, menor);


    return 0;
}
