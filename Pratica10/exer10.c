#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    FILE *pa, *arquivo_copia;
    char *nome = "texto2.txt", nome_copia[50];
    char c;

    puts("Insira o nome do seu novo arquivo copia (Ex: copia.txt):");
    scanf("%s", nome_copia);

    pa = fopen(nome, "r");
    if(!pa){
        printf("Erro ao abrir %s \n", nome);
        return 1;
    }
    arquivo_copia = fopen(nome_copia, "w");
        if(!arquivo_copia){
        puts("Erro");
        exit(1);
    }

    while (1){
        c = fgetc(pa);
        if(c == EOF) break;
        fprintf(arquivo_copia, "%c", c);
    }

    fclose(pa);
    fclose(arquivo_copia);
    return 0;
}