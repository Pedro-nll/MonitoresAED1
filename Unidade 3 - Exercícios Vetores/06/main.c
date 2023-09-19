#include <stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  int vet[n];
  int positivos = 0, negativos = 0;
  for (int i = 0; i < n; i++){
    scanf("%d", &vet[i]);
    if (vet[i] < 0){  
    negativos++;
    }
    else{
      positivos += vet[i];
    }
  }
  printf("%d %d", negativos, positivos);
  return 0;
}
