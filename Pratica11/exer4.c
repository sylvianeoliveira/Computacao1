/* Le arquivo com três n umeros */
#include <stdio.h>

int main(void){

    FILE *arquivo;
    int i;
    float resposta[3];

    arquivo = fopen("reais.bin","r");
    if (!arquivo) return 1;

    fread(resposta, sizeof(float), 3, arquivo);

    for (i=0; i < 3; i++){  /*Leitura do arquivo no terminal para saber se deu certo*/
        printf("%f ", resposta[i]);
    }
    printf ("\n");

    fclose(arquivo);

    return 0;
}