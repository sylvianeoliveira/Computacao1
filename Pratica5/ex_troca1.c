#include <stdio.h>

int main(void){

    int vetor_troca[20], i;

    for (i=19; i >= 0; i--){
        scanf("%d", &vetor_troca[i]);
    }

    for (i=0; i < 20; i++){
        printf("N[%d] = %d\n", i, vetor_troca[i]);
    }

    return 0;
}