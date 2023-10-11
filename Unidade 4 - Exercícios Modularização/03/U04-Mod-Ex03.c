#include <stdio.h>
#include <string.h>

int resp[505];
int cont = 0;

void trianguloValido(float x, float y, float z)
{
    if(x < y)
    {
        int aux = x;
        x = y;
        y = aux;
    }

    if(x < z)
    {
        int aux = x;
        x = z;
        z = aux;
    }

    if(x >= y + z)
    {
        resp[cont] = 4;
        return;
    }

    if(x == y && y == z)
    {
        resp[cont] = 1;
        return;
    }

    if(x != y && x != z && y != z)
    {
        resp[cont] = 2;
        return;
    }

    resp[cont] = 3;
}

int main()
{

    while(1)
    {
        float a;
        float b;
        float c;

        scanf("%f", &a);

        if(a == -1)
            break;

        scanf("%f %f", &b, &c);

        trianguloValido(a, b, c);

        cont++;
    }


    for(int i = 0; i < cont; i++)
    {
        switch(resp[i])
        {
            case 1:
                printf("equilatero\n");
                break;

            case 2:
                printf("escaleno\n");
                break;

            case 3:
                printf("isoceles\n");
                break;

            case 4:
                printf("Triangulo invalido\n");
                break;

            default:
                break;

        }
    }



    return 0;
}

/*

10 20 30
54 87 20
1 1 1
87 798 786
10 10 15
10 15 20
1 5 2
97 2 92
10 10 15
98 98 97
10 10 10
2.54 45.78 1.78
0.1 0.2 0.3
54.7 45.7 45.87
10 15 20
98 98 1
5 5 5
3 4 5
5 4 3
4 5 3
4 3 5
98 98 45
10 10 11
54 54 54
123.1 123.1 123.1
-1


*/
