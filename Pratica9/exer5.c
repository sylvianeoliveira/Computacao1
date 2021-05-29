#include <stdio.h>
#define TAM 100

void inverte_vetor (double vetor[]);
void teste_inverte_vetor (double vetor[], int posicao);

int main(void){
    int i;
    double vetor[TAM];
    
    printf("Insira um vetor de 100 elementos.\n");
    for(i=0; i < TAM; i++){
        scanf("%lf", &vetor[i]);
    }
    inverte_vetor(vetor);
    printf("Seu vetor invertido eh:");
    for(i=0; i < TAM; i++){
        printf(" %lf", vetor[i]);
    }
    return 0;
}

void inverte_vetor (double vetor[]){
    teste_inverte_vetor(vetor, 0);
}

void teste_inverte_vetor (double vetor[], int posicao){
    double temp;
    if (posicao < TAM - posicao - 1){
        temp = vetor[posicao];
        vetor[posicao] = vetor[TAM-posicao-1];
        vetor[TAM-posicao-1] = temp;
        teste_inverte_vetor(vetor, posicao + 1);
    }
}