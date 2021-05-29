/* fwrite example : write buffer */
#include <stdio.h>

int main (void){
    FILE *pFile;
    int buffer[] = {10, 20, 30};
    
    pFile = fopen ("myfile.bin", "wb");
    if (!pFile) return 1;

    fwrite (buffer, sizeof(int), 3, pFile); /*Escreve o vetor buffer no arquivo*/
    fclose (pFile);

    return 0;
}