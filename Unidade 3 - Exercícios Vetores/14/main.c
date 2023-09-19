#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, M;
    scanf("%d %d", &N, &M);
    int A[N];
    for(int i = 0; i<N; i++){
        scanf("%d", A+i);
    }
    int B[M];
    for(int i = 0; i < M; i++){
        scanf("%d", B+i);
    }
    int C[M+N];
    for(int i = 0; i < M+N; i++){
        if(i<N){
            C[i] = A[i];
        }else{
            C[i] = B[i-N];
        }
    }
    for(int i = 0; i < N; i++) printf("%d ", A[i]);
    printf("\n");
    for(int i = 0; i < M; i++) printf("%d ", B[i]);
    printf("\n");
    for(int i = 0; i < M+N; i++) printf("%d ", C[i]);
    printf("\n");
    return 0;
}
