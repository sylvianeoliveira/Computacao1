#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, n, *pvetor;
    float media;

    scanf("%d", &n); /*Lê o número de elementos*/

    pvetor = (int *) malloc(n * sizeof(int)); /*Aloca memória para os elementos*/
    if (!pvetor){
        puts("Sem memoria.");
        return 1;
    }

    for (i=0; i < n; i++){ /*Lê o vetor mudando de byte em byte*/
        scanf("%d", pvetor + i);
    }

    media = 0.0;
    for(i=0; i < n; i++){ /*Faz o somatório da média andando de byte em byte*/
        media += *(pvetor + i);
    }
    printf("%f\n", media/n); /*Imprime a média*/

    free(pvetor); /*Libera a memória utlizada*/

    return 0;
}