#include <stdio.h>

int main(void){
    FILE * arquivo;
    long tamanho;

    arquivo = fopen("ex1.bin","rb");
    if (arquivo == NULL){
        puts("Erro");
    }

    fseek(arquivo , 0, SEEK_END);
    tamanho = ftell(arquivo);
    fclose (arquivo);
    printf("O tamanho do arquivo ex1.bin eh %ld bytes.\n", tamanho);

    return 0;
}