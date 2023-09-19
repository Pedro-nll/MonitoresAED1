#include <stdio.h>

int main(void) {
  int alunos;
  
  scanf("%d", &alunos);
  
  float notas[alunos]; 

  for(int i = 0; i < alunos; i++){
    scanf("%f", &notas[i]); 
  }

  float soma = 0, notaMaior, notaMenor;
  
  for(int i = 0; i < alunos; i++){
    if(i == 0){
      notaMaior = notas[i];
      notaMenor = notas[i];
    }
    else if(notas[i] > notaMaior){
      notaMaior = notas[i];
    }
    else if(notas[i] < notaMenor){
      notaMenor = notas[i];
    }

    soma += notas[i];
  }

  float media = soma/alunos; 

  printf("%.1f %.1f %.1f", notaMaior, notaMenor, media);

  return 0;
}
