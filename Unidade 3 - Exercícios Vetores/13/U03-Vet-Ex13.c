#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int vetorOriginal[n];
    int vetorInvertido[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &vetorOriginal[i]);
        vetorInvertido[n-i-1] = vetorOriginal[i];
    }

    for(int i = 0; i<n; i++)
    {
        printf("%d ", vetorOriginal[i]);
    }

    printf("\n");

    for(int i = 0; i<n; i++)
    {
        printf("%d ", vetorInvertido[i]);
    }

    return 0;
}
