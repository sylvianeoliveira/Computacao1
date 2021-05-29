#include <stdio.h>

int main(void){

    int vetor[10], i, valor;

    for (i=0; i < 10; i++){
        scanf("%d", &valor);
        if (valor <= 0){
            vetor[i] = 1;
        }
        else{
            vetor[i] = valor;
        }
    }
    for (i=0; i < 10; i++){
        printf("X[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}