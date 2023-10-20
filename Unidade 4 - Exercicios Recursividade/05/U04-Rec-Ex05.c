#include <stdio.h>

int n;
int x;

int qntsvezes(int v[], int indice)
{
    if(indice >= n)
        return 0;

    if(v[indice] == x)
        return 1 + qntsvezes(v, indice + 1);

    return qntsvezes(v, indice + 1);

}

int main()
{
    scanf("%d", &n);
    int v[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d", &x);

    printf("%d", qntsvezes(v, 0));

    return 0;
}
