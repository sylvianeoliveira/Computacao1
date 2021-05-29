#include <stdio.h>

int main(void){

    int numero, fatorial=1;

    scanf("%d", &numero);

    for (numero ; numero > 0 ; numero--){
        fatorial = fatorial * numero;
    }
    printf("%d\n", fatorial);

    return 0;
}