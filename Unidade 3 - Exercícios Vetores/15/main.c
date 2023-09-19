#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    int A[N], B[N], C[N*2];
    for(int i = 0; i<N; i++) scanf("%d", A+i);
    for(int i = 0; i<N; i++) scanf("%d", B+i);
    int j = 0;
    for(int i = 0; i<N; i++){
        C[j++] = A[i];
        C[j++] = B[i];   
    }
    for(int i =0; i<N*2; i++) printf("%d ", C[i]);
    printf("\n");
    return 0;
}
