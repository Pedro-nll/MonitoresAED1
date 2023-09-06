#include <stdio.h>

int main(void){
    float c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    float nulo = 0, branco = 0;

    int voto;
    do{
        scanf("%d", &voto);
        switch (voto)
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            nulo++;
            break;
        case 6:
            branco++;
            break;
        default:
            break;
        }
    }while(voto != 0);
    printf("%.0f %.0f %.0f %.0f\n", c1,c2,c3,c4);
    printf("%.0f\n", nulo);
    printf("%.2f\n", (branco/(c1+c2+c3+c4+nulo+branco))*100.0);
    return 0;
}