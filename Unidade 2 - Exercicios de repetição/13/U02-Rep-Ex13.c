#include <stdio.h>

int isPrimo(int n){
    int resp = 1;
    if( n==1 || (n != 2 && n % 2 == 0) ){
        resp = 0;
    }
    else{
        for(int i=3; i<n/2; i+=2){
            if(n % i == 0){
                resp = 0;
                i = n;  //break
            }
        }   
    }
    return resp;
}

int main(){
    int n;

    scanf("%d", &n);
    printf("%d\n", isPrimo(n));
    
    return 0;
}
