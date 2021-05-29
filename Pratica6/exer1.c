#include <stdio.h>

long int fat (long int n);

int main(void){
    long int numero;
    while (1){
            scanf("%ld", &numero);
            if (numero < 0) break;
            printf("O fatorial de %ld vale %ld\n", numero, fat(numero));
        }
    return 0;
}

long int fat (long int n){
    if (n <= 1 ){
        return 1;
    }
    else{
        return fat(n-1) * n;
    }
}
