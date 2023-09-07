#include <stdio.h>

int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);

    for(int i = n; i<=m; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
