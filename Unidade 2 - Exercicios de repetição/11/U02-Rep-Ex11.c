#include <stdio.h>
int main(void){
    int somatorio = 0;
    int numeros5 = 0;
    int valor;
    do{
        scanf("%d", &valor);
        if(valor != -1){
            somatorio++;
        }
        if(valor == 5){
            numeros5++;
        }
    }while(valor != -1);
    printf("%d %d\n", somatorio, numeros5);
    return 0;
}