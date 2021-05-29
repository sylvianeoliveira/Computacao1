#include <stdio.h>
#define TAM 5

typedef struct _JOGADOR{
    int pontos;
    char nome[42];
} JOGADOR;

void ordena_vetor(JOGADOR vetor[], int tam);
int maior_ponto(JOGADOR j1, JOGADOR j2);

int main(void){
    JOGADOR jogadores[TAM];
    int i, j;

    for(i=0; i < TAM; i++){
        printf("Insira o nome do jogador %d: ", i+1);
        fgets(jogadores[i].nome, 44, stdin);
        for(j=0; j < 44; j++){
            if (jogadores[i].nome[j] == '\n'){
                jogadores[i].nome[j] = '\0';
            }
        }
        printf("Insira a quantidade de pontos do jogador %d: ", i+1);
        scanf("%d", &jogadores[i].pontos);
        getchar();
        printf("\n");
    }

    ordena_vetor(jogadores, TAM);
    for(i=0; i < TAM; i++){
        printf("Jogador %d\n", i+1);
        printf("Nome: %s\n", jogadores[i].nome);
        printf("Pontos: %d\n\n", jogadores[i].pontos);
    }

    printf("Insira o nome de mais um jogador: ");
        fgets(jogadores[4].nome, 44, stdin);
        for(j=0; j < 44; j++){
            if (jogadores[4].nome[j] == '\n'){
                jogadores[4].nome[j] = '\0';
            }
        }
    printf("Insira a pontuacao deste jogador: ");
    scanf("%d", &jogadores[4].pontos);
    getchar();

    ordena_vetor(jogadores, TAM);
    for(i=0; i < TAM; i++){
        printf("Jogador %d\n", i+1);
        printf("Nome: %s\n", jogadores[i].nome);
        printf("Pontos: %d\n\n", jogadores[i].pontos);
    }

    return 0;
}

int maior_ponto(JOGADOR j1, JOGADOR j2){
    if (j1.pontos > j2.pontos){
        return 1;
    }
    else if(j1.pontos < j2.pontos){
        return -1;
    }
    else{
        return 0;
    }
}

void ordena_vetor(JOGADOR vetor[], int tam){
    int i, j;
    JOGADOR temp;
    for(i=0; i < tam; i++){
        for(j= i + 1; j < tam; j++){
            if(maior_ponto(vetor[i], vetor[j]) == -1){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}