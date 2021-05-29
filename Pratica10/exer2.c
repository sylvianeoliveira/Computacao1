#include <stdio.h>

int main(void){
    FILE *arquivo;
    float numero1, numero2;
    puts("Entre com o primeiro numero real:");
    scanf("%f", &numero1);
    puts("Entre com o segundo numero real:");
    scanf("%f", &numero2);

    arquivo = fopen("ex2.txt", "w");
    
    fprintf(arquivo, "%f %f", numero1, numero2);

    fclose(arquivo);
    return 0;
}
