#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *arquivo;
    int numero, qtd=0, *vetor_numeros, i=0;
    
    arquivo = fopen("conjunto_inteiro.txt", "r");
    if (arquivo == NULL) exit(1);

    while (1){
        fscanf(arquivo, "%d", &numero);
        qtd++;
        
        if(feof(arquivo)){
            break;
        }
    }

    vetor_numeros = (int *) malloc(qtd * sizeof(char));
        if (!vetor_numeros){
            puts("Sem memoria");
            return 1;
        }

    rewind(arquivo);

    while (1){
        fscanf(arquivo, "%d", &numero);
        vetor_numeros[i] = numero;
        i++;
        
        if(feof(arquivo)){
            break;
        }
    }
    
    for(i=qtd-1; i >= 0; i--){
        printf("%d\n", vetor_numeros[i]);
    }
    puts("Acabou");
    free(vetor_numeros);
    fclose(arquivo);
    return 0;
}   