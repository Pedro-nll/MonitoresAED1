//1. Imprimir os números pares entre 2 e 50.

#include <stdio.h>

int main()
{
    for(int i = 2; i<=50; i++) 
    {
        if(i % 2 == 0) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}