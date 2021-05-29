#include <stdio.h>

int main(void){
    FILE *arquivo;
    float numero;
    puts("Entre com um numero real:");
    scanf("%f", &numero);
    arquivo = fopen("ex1.txt", "w");
    fprintf(arquivo, "%f", numero);
    fclose(arquivo);
    return 0;
}
