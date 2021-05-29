/* Le arquivo com três números */
#include <stdio.h>

int main(void){

    FILE *pFile;
    int respos[3];
    int i;

    pFile = fopen("myfile.bin","r");
    if (!pFile) return 1;

    fread(respos, sizeof(int), 3, pFile);

    for (i=0; i < 3; i++){  /*Leitura do arquivo no terminal para saber se deu certo*/
        printf("%d ", respos[i]);
    }
    printf ("\n");

    fclose(pFile);

    return 0;
}