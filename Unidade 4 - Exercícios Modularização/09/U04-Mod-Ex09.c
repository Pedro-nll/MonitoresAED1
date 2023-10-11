#include <stdio.h>

double calcularRendaPerCapita(int n, double salarios[], int dependentes[]);

int main()
{
    int n;
    scanf("%d", &n);
    double salario[n], rendaPerCapita;
    int dependente[n];
    for(int i=0; i<n; i++){
        scanf("%lf", &salario[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &dependente[i]);
    }
    rendaPerCapita = calcularRendaPerCapita(n, salario, dependente);
    printf("%.2lf", rendaPerCapita);
    return 0;
}

double calcularRendaPerCapita(int n, double salarios[], int dependentes[]){
    double somaSalarios = 0;
    int somaDependentes = 0;
    for (int i = 0; i < n; i++) {
        somaSalarios += salarios[i];
        somaDependentes += dependentes[i];
    }

    return somaSalarios/somaDependentes;
}
