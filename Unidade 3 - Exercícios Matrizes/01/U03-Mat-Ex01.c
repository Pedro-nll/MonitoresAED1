#include <stdio.h>

int main(void){
    int matriz[4][2] = {{-5, 10},{-2, 7},{0, -8},{3, -4}};
    for(int i = 0; i<4;i++){
        for(int j = 0; j<2; j++){
            if(matriz[i][j] >= 0) printf("%d\t", matriz[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}