#include <stdio.h>

int modulo (int x, int y);

int main(void){
    int num_x, num_y, resultado;

    printf("Insira o valor de x: ");
    scanf("%d", &num_x);

    printf("Insira o valor de y: ");
    scanf("%d", &num_y);

    resultado = modulo(num_x, num_y);

    printf("O resto da divisao entre %d e %d eh: %d.\n", num_x, num_y, resultado);

    return 0;
}

int modulo (int x, int y){
    if (y > x) return x;
    return modulo(x-y , y);
}