/*Escreva um programa que grave em um arquivo bin ́ario chamado reais.bin
trˆes n umeros reais lidos do teclado.*/

#include <stdio.h>

int main (void){
    FILE *arquivo;
    float numeros[3];

    arquivo = fopen ("reais.bin", "wb");
    if (!arquivo) return 1;

    puts("Insira 3 numeros reais: ");
    scanf("%f %f %f", &numeros[0], &numeros[1], &numeros[2]);

    fwrite (numeros, sizeof(float), 3, arquivo);
    fclose (arquivo);

    return 0;
}