#include <stdio.h>

int main(void){

    int vetor[10], i, numero;

    scanf("%d", &numero);

    for (i = 0; i < 10; i++){
        vetor[i] = numero;
        numero *= 2;
        printf("N[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}