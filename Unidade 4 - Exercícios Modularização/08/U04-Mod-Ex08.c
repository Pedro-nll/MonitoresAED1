#include<stdio.h>

#define qtdeNotas 3

float notaFinal(float nota1,float nota2,float nota3, char operacao){
    float notaF;
    if(operacao == 'A'){
        notaF = nota1 + nota2 + nota3;
        notaF = notaF/qtdeNotas;

    } else if(operacao == 'P'){
        int nDivisor = 5+3+2;
        notaF = nota1*5 + nota2*3 + nota3*2;
        notaF = notaF/nDivisor;
    }

    return notaF;
}

int main() {
    int qtdeAlunos;
    char tipoOperacao;
    scanf("%d", &qtdeAlunos);
    getchar();
    scanf("%c", &tipoOperacao);
    float nota[qtdeAlunos][qtdeNotas+1];
    for(int i=0; i<qtdeAlunos; i++){
        for(int j=0; j<qtdeNotas; j++){
            scanf("%f", &nota[i][j]);
        }
        nota[i][qtdeNotas] = notaFinal(nota[i][0],nota[i][1],nota[i][2], tipoOperacao);
    }

    for(int i=0; i<qtdeAlunos; i++){
        for(int j=0; j<qtdeNotas+1; j++){
            printf("%.2f ", nota[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
