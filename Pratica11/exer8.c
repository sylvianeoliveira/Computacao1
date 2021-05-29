#include <stdio.h>

typedef struct _JOGADOR{
    char nome[40];
    int recorde;
} JOGADOR;

int main(void){
    FILE *pFile;
    JOGADOR recordistas[3];
    int i;
    char linha[80];
    pFile = fopen("estruturas.bin", "wb");
    if (!pFile) return 1;

    for (i=0; i <3; i++){
        printf("Nome Jogador (so um nome!!!) %d: ", i);
        scanf("%s", recordistas[i].nome);
        fflush(stdin);
        printf("Recorde Jogador %d: ", i);
        gets(linha);
        sscanf(linha, "%d", &recordistas[i].recorde);
    }

    fwrite(recordistas, sizeof(JOGADOR), 3, pFile);
    fclose(pFile);

    return 0;
}