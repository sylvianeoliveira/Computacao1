#include <stdio.h>

int main(void){
    int i;
    float vetor[100];

    for (i=0; i < 100; i++){
        scanf("%f", &vetor[i]);
    }

    for (i=0; i < 100; i++){
        if (vetor[i] <= 10){
            printf("A[%d] = %.1f\n", i, vetor[i]);
        }
    }
    return 0;
}