#include <stdio.h>

int main()
{
    int N, soma = 0, valorLido;
    scanf("%d", &N);
    while(N>0){
        scanf("%d", &valorLido);
        if(valorLido%2 == 1){
            soma+=valorLido;
        }
        N--;
    }
    printf("%d", soma);
}
