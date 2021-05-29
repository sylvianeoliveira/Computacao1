#include <stdio.h>

int main (void){
    FILE *arquivo, *arquivo2;
    char nome[100];
    int numero;
    
    arquivo = fopen("leitura-exer11.txt", "r");
    arquivo2 = fopen("imprime-exer11.txt", "w");
    if (arquivo == NULL || arquivo2 == NULL){
        return 1;
    }

    while (1){
        fscanf(arquivo, "%s %d", nome, &numero);
        fprintf(arquivo2, "%d %s\n", numero, nome);
        if(feof(arquivo)) break;
    }

    fclose(arquivo);
    fclose(arquivo2);
    return 0;
}