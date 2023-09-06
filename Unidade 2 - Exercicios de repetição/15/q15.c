#include <stdio.h>


int main(){
    int n;
    int primeiro = 0, segundo = 1;
    int fibo = 1;

    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        if(i == 1){
            printf("%d ", fibo);
        }
        else{
            fibo = primeiro + segundo; 
            if(fibo >= n){
                i = n;
            }
            else{
                printf("%d ", fibo);
                primeiro = segundo;
                segundo = fibo;
            }
        }
    }
    return 0;
}