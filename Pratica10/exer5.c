#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct _ALUNOS{
    char nome[82];
    float media_final;
} ALUNOS;

int main(void){
    FILE *arquivo;
    ALUNOS aluno[TAM];
    int i;

    for(i=0; i < TAM; i++){
        printf("Nome do aluno %d:\n", i+1);
        scanf("%s", aluno[i].nome);
        printf("Entre com a nota de %s:\n", aluno[i].nome);
        scanf("%f", &aluno[i].media_final);
    }

    arquivo = fopen("ex6.txt", "w");
    if (arquivo == NULL) exit(1);

    for(i=0; i < TAM; i++){
        fprintf(arquivo, "%s - %.1f\n", aluno[i].nome, aluno[i].media_final);
    }

    return 0;
}