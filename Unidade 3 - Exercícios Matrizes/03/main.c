#include <stdio.h>

int main(void){
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int maior = matriz[0][0];
    int menor = matriz[0][0];
    for(int i=0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(matriz[i][j] > maior) maior = matriz[i][j];
            if(matriz[i][j] < menor) menor = matriz[i][j];
        }
    }
    printf("%d %d\n", maior, menor);
    return 0;
}