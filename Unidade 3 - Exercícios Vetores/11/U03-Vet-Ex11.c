#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int v[n];
    int primeiro = 0;
    int segundo = 1;

    for(int i = 0; i<n; i++)
    {
        v[i] = primeiro + segundo;
        primeiro = segundo;
        segundo = v[i];
    }

    for(int i = 0; i<n; i++)
    {
        printf("%d ",v[i]);
    }

    return 0;
}
