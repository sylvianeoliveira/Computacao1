#include <stdio.h>
#include <string.h>

#define TAM 20

double maior_elemento_vetor(double vetor[], int tam);
double media_elemento_vetor(double vetor[], int tam);
void ordena_vetor(double vetor[], int tam);
void le_vetor(double vetor[], int tam);
void imprime_vetor(double vetor[], int tam);

int main(void){
    double vetor[TAM];
    double media, maior;

    le_vetor(vetor, TAM);
    maior = maior_elemento_vetor(vetor, TAM);
    media = media_elemento_vetor(vetor, TAM);
    printf("Maior elemento e: %.2f\n", maior);
    printf("Media do Vetor e: %.2f\n", media);
    ordena_vetor(vetor, TAM);
    imprime_vetor(vetor, TAM);

    return 0;
}

double maior_elemento_vetor(double vetor[], int tam){
    int i;
    double maior_elemento = vetor[0];
    for (i=1; i < tam; i++){
        if (vetor[i] > maior_elemento){
            maior_elemento = vetor[i];
        }
    }
    return maior_elemento;
}
double media_elemento_vetor(double vetor[], int tam){
    int i;
    double soma = 0;
    double tamanho = tam;

    for(i=0; i < tam; i++){
        soma += vetor[i];
    }
    return soma / tamanho;
}
void le_vetor(double vetor[], int tam){
    int i;
    for (i=0; i < tam; i++){
        scanf("%lf", &vetor[i]);
    }
}
void ordena_vetor(double vetor[], int tam){
    int i, j;
    double temp;
    for(i=0; i < tam; i++){
        for(j= i + 1; j < tam; j++){
            if(vetor[i] > vetor[j]){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}
void imprime_vetor(double vetor[], int tam){
    int i;
    for (i=0; i < tam ; i++){
        printf("%.2lf ", vetor[i]);
    }
}