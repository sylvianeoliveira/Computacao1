#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *arquivo, *novo_arquivo;
    int i, numero, numero_novo[10];
    
    arquivo = fopen("conjunto_inteiro.txt", "r");
    if (arquivo == NULL) exit(1);
    novo_arquivo = fopen("novo_conjunto_inteiro.txt", "w");
    if (arquivo == NULL) exit(1);

    while (1){
        fscanf(arquivo, "%d", &numero);
        fprintf(novo_arquivo, "%d\n", numero);
        
        if(feof(arquivo)){
            break;
        }
    }
    fclose(arquivo);
    fclose(novo_arquivo);

    for(i=0; i < 10; i++){
        printf("Insira o numero %d: \n", i+1);
        scanf("%d", &numero_novo[i]);
    }

    novo_arquivo = fopen("novo_conjunto_inteiro.txt", "a");
    if (arquivo == NULL) exit(1);

    for(i=0; i < 10; i++){
        fprintf(novo_arquivo, "%d\n", numero_novo[i]);
    }

    fclose(novo_arquivo);
    return 0;
}   