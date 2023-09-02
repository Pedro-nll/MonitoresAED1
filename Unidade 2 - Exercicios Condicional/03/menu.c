#include <stdio.h>
#include <math.h>

int main(){
	//declaração das variáveis
	int selecao;
	int x, y;

	printf("Menu de opcoes:");
	printf("\n[1] - Somar dois numeros");
	printf("\n[2] - Raiz quadrada de um numero:");
	printf("\nDigite a opcao desejada: ");
	scanf("%d", &selecao);

	if(selecao == 1){ //Seleção 1 -> soma de dois numeros
		//leitura dos dados
		printf("\nDigite o primeiro numero: ");
		scanf("%d", &x);
		printf("\nDigite o segundo numero: ");
		scanf("%d", &y);

		//mostrar a soma
		printf("\nA soma e igual a %d", x+y);

	} else if(selecao == 2) { //Selecao 2 -> raiz quadrada 
		//leitura de dados
		printf("\nDigite o numero: ");
		scanf("%i", &x);
		
		//mostrar raiz quadrada
		printf("\nA raiz quadrada e igual a %f", sqrt(x));
	}

        return 0;
}
