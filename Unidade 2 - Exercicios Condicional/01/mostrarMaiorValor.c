#include <stdio.h>

int main(){
	//declarando váriaveis
	float x, y;
	
	
	printf("\n Escreva dois numeros para verificar qual o maior");
	
	//leitura dos valores
	printf("\n Escreva o primeiro valor: ");
        scanf("%f", &x);
        printf(" Escreva o segundo valor: ");
        scanf("%f", &y);

	//comparação e impressão na tela do maior valor
	if(x > y){
		printf(" O %f e o maior valor", x);
	} else {
		printf(" O %f e o maior valor", y);
	}
	return 0;
}
