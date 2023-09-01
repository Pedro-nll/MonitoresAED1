#include <stdio.h>

int main (void){
    //Situacao (i) - Variaveis em double
    //Inicializacao das variaveis
    double A = 4;
    double B = 5;
    double C = 1;

    printf("Resultado de a (i): %lf\n", (B*A-B*B/4*C));
    printf("Resultado de b (i): %lf\n", ((A * B) / 3 * 3));
    printf("Resultado de c (i): %lf\n", (((B + C) / 2 * A + 10) * 3 * B) - 6);
    printf("Resultado de d (i): %lf\n", (7.0 * 10.0 - 50 % 3 * 4.0 + 9.0));
    printf("Resultado de e (i): %lf\n", ((7 * (10 - 5) % 3) * 4.0 + 9.0));

    printf("---------- SITUACAO ii -------------\n");
    int Aii = 4;
    int Bii = 5;
    int Cii = 1;
    printf("Resultado de a (i): %d\n", (Bii*Aii-Bii*Bii/4*Cii));
    printf("Resultado de b (i): %d\n", ((Aii * Bii) / 3 * 3));
    printf("Resultado de C (i): %d\n", (((Bii + Cii) / 2 * Aii + 10) * 3 * Bii) - 6);
    printf("Resultado de d (i): %d\n", ( 7 * 10 - 50 % 3 * 4 + 9));
    printf("Resultado de e (i): %d\n", ((7 * (10 - 5) % 3) * 4 + 9));
    
    return 0; 
}