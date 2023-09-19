#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    int *v1, *v2, *vRes;
    int i;

    scanf("%d", &n);

    v1 = malloc(sizeof(int) * n);
    v2 = malloc(sizeof(int) * n);
    vRes = malloc(sizeof(int) * n);

    for(i = 0; i<n; i++){
        scanf("%d", &v1[i]);
    }
    for(i = 0; i<n; i++){
        scanf("%d", &v2[i]);
    }
    
    for(int i = 0; i<n; i++){
        if(v1[i] == v2[i]){
            vRes[i] = 1;
        }
        else{
            vRes[i] = 0;
        }
    }

    for(i = 0; i<n; i++){
        printf("%d ", vRes[i]);
    }
    free(v1);
    free(v2);
    free(vRes);
    return 0;
}