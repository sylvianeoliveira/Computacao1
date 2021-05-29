#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(void){
    FILE *arquivo;
    float notas[TAM][2], media;
    int i;
    char nome_arquivo[30];

    printf("Insira o nome do arquivo criado anteriormente (Ex:'notas.txt'): ");
    scanf("%s", nome_arquivo);
    
    arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) exit(1);

    while (!feof(arquivo)){
        for(i=0; i < TAM; i++){
            fscanf(arquivo, "%f", &notas[i][0]);
            fscanf(arquivo, "%f", &notas[i][1]);
        }
    }
    
    fclose(arquivo);

    fopen(nome_arquivo, "w");
    if (arquivo == NULL) exit(1);

    for(i=0; i < TAM; i++){
        media = (notas[i][0] + notas[i][1]) / 2.0;
        fprintf(arquivo, "%.1f %.1f %.1f\n", notas[i][0], notas[i][1], media);
    }

    fclose(arquivo);
    return 0;
}   
    