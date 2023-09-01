#include <stdio.h>
#include <stdbool.h>

int main(){
	//declaração de variáveis
	int x, y, z;
	bool valorIncorreto = false;
	float media;

	//leitura de dados
	printf("Escreva a primeira nota: ");
	scanf("%d", &x);

        if( x>10 || x<0 ){ //se x for maior que 10 ou menor que 0 existe um valor incorreto
		valorIncorreto = true;
	}

	if( valorIncorreto == false){ //só executa o conteudo do if se os valores anteriores estiverem corretos
		
		printf("Escreva a segunda nota: ");
        	scanf("%d", &y);

		if( y>10 || y<0){ //se y for maior que 10 ou menor que 0 existe um valor incorreto
			valorIncorreto = true;
		}
	}
	
	if( valorIncorreto == false){ //só executa o conteudo do if se os valores anteriores estiverem corretos
		
		printf("Escreva a terceira nota: ");
       		scanf("%d", &z);
		
                if( y>10 || y<0){ //se y for maior que 10 ou menor que 0 existe um valor incorreto
                        valorIncorreto = true;
                }
	}

	//calculo e print na tela
	media = (float)(x + y + z )/3;

	if(valorIncorreto == true){ //algum valor errado digitado
		printf("\nNota invalida");
	} 
	else if(media < 4.0){ // media menor que 4
		printf("\nReprovado. Nota final - %.2f", media);
	}
        else if(media < 7.0){ // media maior que 4 e menor que 7
                printf("\nDeve fazer exame. Nota final - %.2f", media);
        }
        else{ //media maior que 7
                printf("\nAprovado. Nota final - %.2f", media);
        }

	return 0;
}
