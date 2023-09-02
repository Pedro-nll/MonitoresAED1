#include <stdio.h>

int main(){
	//declarando variáveis
	int x;

	//leitura de dados
	printf("\nEscreva um numero para verificar se ele e par ou impar: ");
	scanf("%d", &x);

	//verificar se o número possui resto quando dividido por 2
	if(x % 2 == 0){
		printf("O numero %d e par", x);
	} else {
		printf("O numero %d e impar", x);
	}
	return 0;
}
