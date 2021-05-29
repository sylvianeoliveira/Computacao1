#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *arquivo;
    int numero;
    
    arquivo = fopen("conjunto_inteiro.txt", "r");
    if (arquivo == NULL) exit(1);

    while (1){
        fscanf(arquivo, "%d", &numero);
        printf("%d\n", numero);
        
        if(feof(arquivo)){
            puts("Acabou");
            break;
        }
    }
    fclose(arquivo);
    return 0;
}   
    