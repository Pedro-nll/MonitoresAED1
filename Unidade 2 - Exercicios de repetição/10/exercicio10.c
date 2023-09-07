#include <stdio.h>

int main()
{
    int valorLido, produto=0;

    scanf("%d", &valorLido);
    if(valorLido != 0){
        produto = 1;
        while(valorLido != 0){
            produto*=valorLido;
            scanf("%d", &valorLido);
        }    
    }
    
    printf("%d", produto);
}
