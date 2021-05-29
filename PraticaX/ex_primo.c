#include <stdio.h>

int main(void){

    int qtd_teste, numero, i, j;

    scanf("%d", &qtd_teste);

    for (i=0 ; i < qtd_teste ; i++){
        scanf("%d", &numero);
         for (j=1 ; j < numero ; j++){
                if (numero % j == 0 && (j != 1 && j != numero)){
                    printf("%d nao eh primo\n", numero);
                    break;
                }
            }
    if (numero == j){
        printf("%d eh primo\n", numero);
    }
    }

    return 0;
}