#include <stdio.h>

int main()
{
    int N, produto=1, numeroLido;
    scanf("%d", &N);
    while(N>0){
        scanf("%d", &numeroLido);
        produto *= numeroLido;
        N--;
    }
    printf("%d", produto);
}
