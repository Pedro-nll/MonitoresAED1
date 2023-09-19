#include <stdio.h>
#include <stdlib.h>

int main(void) {



  int posicoes[100];
  for (int i = 0; i < 100; i++){
    // Gera numeros aleatorios
  /*  posicoes[i] = rand() % 200 - 100; */


    // Escrever todos os numeros
    printf("Qual o numero da posicao %d", i);
    scanf("%d", &posicoes[i]);
    
  }
  for (int i = 0; i < 100; i++){
    if (posicoes[i] > 0){
      printf("%d\n", posicoes[i]);
    }
  }



    
  return 0;
}
