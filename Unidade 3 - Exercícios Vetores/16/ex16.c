#include <stdio.h>

int main()
{
    //declaração de variáveis
    int aluno[100];
    int qtde;
    int maisNovo=0, maisVelho=0, soma=0, qtdeMaioresDe16=0, qtdeMenoresDe16=0;
    
    //leitura inicial para estabelecer a quantidade de idades a serem lidas
    scanf("%d", &qtde);
    
    for (int i=0; i<qtde; i++){
        scanf("%d", &aluno[i]);
        soma += aluno[i];
        if(aluno[i]<aluno[maisNovo])
            maisNovo = i;
        else if(aluno[i]>aluno[maisVelho])
            maisVelho = i;
        
        if(aluno[i]>16)
           qtdeMaioresDe16++;
        else
           qtdeMenoresDe16++;
    }

    printf("Total de alunos com idade menor ou igual a 16 anos: %d\n"
           "Total de alunos com idade maior que 16 anos: %d\n"
           "Idade média da turma: %.2f\n"
           "Idade do aluno mais novo: %d\n"
           "Idade do aluno mais velho: %d", qtdeMenoresDe16, qtdeMaioresDe16, (float)soma/qtde, aluno[maisNovo], aluno[maisVelho]);
    
    return 0;
}
