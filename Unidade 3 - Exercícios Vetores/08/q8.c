#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    int *v;

    scanf("%d", &n);
    v = malloc(sizeof(int) * n);

    for(int i = 0; i<n; i++){
        scanf("%d", &v[i]);
    }
    
    for(int i = 0; i<n; i++){
        if(i % 2 == 1){
            printf("%d ", v[i]);
        }
    }
    free(v);
    return 0;
}