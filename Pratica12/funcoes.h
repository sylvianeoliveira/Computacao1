/*
 * funcoes.h
 * 
 * Copyright 2016 Adriano Cruz <adriano@nce.ufrj.br>
 * 
 */

#ifndef FUNCOES_H
#define FUNCOES_H

#include "Defs.h"
#include "Globais.h"

void leTamanhoTurma(void); 
void leNotas(TURMA *); 
void imprimeNotas(TURMA );
void calculaMedia(TURMA *);
void calculaMaiorNota(TURMA *);
void calculaMenorNota(TURMA *);
void imprimeDados(TURMA);
double desvio_padrao(TURMA *t);

#endif
