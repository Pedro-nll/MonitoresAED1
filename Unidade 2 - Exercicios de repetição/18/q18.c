#include <stdio.h>

int main(void){
    float S = 0.0;
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        if(i%2 == 0){
            S += 1.0/(1+i*2);
        } else{
            S -= 1.0/(1+i*2);
        }
    }
    
    float pi = S * 4;
    printf("%.2f\n", pi);
    return 0;
}