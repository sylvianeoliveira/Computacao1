#include <stdio.h>

int main(void){

    int i, j, teste, numero;
    unsigned long long int vetor_fibonacci[61];
    
    vetor_fibonacci[0] = 0;
    vetor_fibonacci[1] = 1;

    for(i=2; i < 61; i++){
        vetor_fibonacci[i] = vetor_fibonacci[i-1] + vetor_fibonacci[i-2];
    }

    scanf("%d", &teste);

    for(j=0; j < teste; j++){
        scanf("%d", &numero);
        printf("Fib(%d) = %lld\n", numero, vetor_fibonacci[numero]);
    }

    return 0;
}