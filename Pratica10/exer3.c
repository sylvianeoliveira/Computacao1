#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(void){
    FILE *arquivo;
    float notas[TAM][2];
    int i;
    char nome_arquivo[30];

    printf("Insira o nome do arquivo onde as notas serao armazenadas (Ex:'notas.txt'): ");
    scanf("%s", nome_arquivo);
    
    for(i=0; i < TAM; i++){
        printf("Entre com as notas do aluno %d:\n", i+1);
        scanf("%f %f", &notas[i][0], &notas[i][1]);
    }

    arquivo = fopen(nome_arquivo, "w");
    if (arquivo == NULL) exit(1);
    
    for(i=0; i < TAM; i++){
        fprintf(arquivo, "%.1f %.1f\n", notas[i][0], notas[i][1]);
    }
    fclose(arquivo);
    return 0;
}
