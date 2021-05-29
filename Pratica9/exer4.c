#include <stdio.h>

int fatorial(int n);
int main(void){
    int numero, resultado;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);
    printf("O fatorial de %d eh: %d.\n", numero, resultado);
    return 0;
}

int fatorial(int n){
    if(n == 0) return 1;
    return n * fatorial(n-1);
}