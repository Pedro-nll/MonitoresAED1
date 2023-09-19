#include <stdio.h>
#include <math.h>

int main(void) {

  int tamanho = 30;
  int vetor[tamanho];

  for(int i = 1; i <= tamanho; i++){
    vetor[i] = pow(i, 2); 

    printf("%d ", vetor[i]);
  }
  
  return 0;
}
