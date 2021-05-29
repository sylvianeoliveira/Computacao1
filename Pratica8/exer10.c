#include <stdio.h>
#define TAM 5

typedef struct _JOGADOR{
    int pontos;
    char nome[42];
} JOGADOR;

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

    for(i=0; i < TAM; i++){
        printf("Jogador %d\n", i+1);
        printf("Nome: %s\n", jogadores[i].nome);
        printf("Pontos: %d\n\n", jogadores[i].pontos);
    }

    return 0;
}