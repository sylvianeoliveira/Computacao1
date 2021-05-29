#include <stdio.h>

int produto (int x, int y);
int main(void){

    int num_x, num_y, resultado;

    printf("Insira o valor de x: ");
    scanf("%d", &num_x);

    printf("Insira o valor de y: ");
    scanf("%d", &num_y);

    resultado = produto(num_x, num_y);

    printf("O produto entre %d e %d eh: %d.\n", num_x, num_y, resultado);

    return 0;
}

int produto (int x, int y){
    if (y == 1) return x;

    return x+ produto(x, y - 1);
}