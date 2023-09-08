#include <stdio.h>

int main(){
    int n;
    float n1, n2, n3;
    float soma = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%f %f %f", &n1, &n2, &n3);
        soma += n1+n2+n3;
    }

    printf("%.1f ", soma);
    soma/=n;
    printf("%.1f", soma);
    
    return 0;
}