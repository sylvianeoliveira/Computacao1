/*
 * funcoes.c
 * 
 * Copyright 2016 Adriano Cruz <adriano@nce.ufrj.br>
 * 
 */

#include <stdio.h>
#include "Defs.h"
#include "Globais.h"
#include <math.h>

#define MAX 100

/* Le um valor para gTamanhoTurma */
void leTamanhoTurma(void){
    printf("Insira o tamanho da turma: ");
    scanf("%d", &gTamanhoTurma);
}

void leNotas(TURMA *t){
    int i;
    for (i=0; i < gTamanhoTurma; i++){
        printf("Insira a nota do aluno %d: ", i+1);
        scanf("%lf", &t->notas[i]);
    }
}

void imprimeNotas(TURMA t){
    int i;
    for (i=0; i < gTamanhoTurma; i++){
        printf("A nota do aluno %d eh: %.1lf\n", i+1, t.notas[i]);
    }
}
/* Calcula a media e armazena na estrutura t */
void calculaMedia(TURMA *t){
    int i;
    double soma=0.0;
    for (i=0; i < gTamanhoTurma; i++){
        soma += t->notas[i];
    }
    t->media = soma / gTamanhoTurma;
}

/* Calcula o maior nota e armazena na estrutura t */
void calculaMaiorNota(TURMA *t){
    int i;
    t->maiorNota = t->notas[0];
    for (i=1; i < gTamanhoTurma; i++){
        if (t->notas[i] > t->notas[i-1]){
            t->maiorNota = t->notas[i];
        }
    }
}

/* Calcula o menor nota e armazena na estrutura t */
void calculaMenorNota(TURMA *t){
    int i;
    t->menorNota = t->notas[0];
    for (i=1; i < gTamanhoTurma; i++){
        if (t->notas[i] < t->notas[i-1]){
            t->menorNota = t->notas[i];
        }
    }
}

/* Imprime media, desvio padrao, maior e menor nota da turma */
void imprimeDados(TURMA t){
    int i;
    double somatorio=0.0, resultado;
    for(i=0; i < gTamanhoTurma; i++){
        somatorio = somatorio + pow(t.media - t.notas[i], 2);
    }
    resultado = sqrt(somatorio/(gTamanhoTurma-1));
    printf("A media das notas eh: %.1lf\n", t.media);
    printf("O desvio padrao eh: %.1lf\n", resultado);
    printf("A maior nota eh: %.1lf\n", t.maiorNota);
    printf("A menor nota eh: %.1lf\n", t.menorNota);

}
