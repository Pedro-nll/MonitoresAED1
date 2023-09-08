#include <stdio.h>

int main(){
    int n;
    float soma = 1;

    scanf("%d", &n);

    for(int i = 2; i<=n; i++){
        soma += (float)1/i;
    }

    printf("%.2f", soma);

    return 0;
}