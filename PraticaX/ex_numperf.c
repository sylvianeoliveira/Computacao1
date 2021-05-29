#include <stdio.h>

int main(void){

    int qtd_teste, numero, i, j, soma;

    scanf("%d", &qtd_teste);
    for (i=0 ; i < qtd_teste ; i++){
        soma=0;
        scanf("%d", &numero);
            for(j=1 ; j < numero ; j++){
                if (numero % j == 0){
                    soma += j;
                }
            }
        soma == numero ? printf("%d eh perfeito\n", numero) : printf("%d nao eh perfeito\n", numero) ;
    }
    return 0;
}