#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, n, *pvetor, contador=0;
    float media;

    puts("Insira o numero de elementos do seu vetor:");
    scanf("%d", &n);

    pvetor = (int *) malloc(n * sizeof(int));
    if (!pvetor){
        puts("Sem memoria.");
        return 1;
    }

    puts("Insira os elementos do seu vetor:");
    for (i=0; i < n; i++){
        scanf("%d", pvetor + i);
    }

    media = 0.0;
    for(i=0; i < n; i++){
        media += *(pvetor + i);
    }
    media /= n;

    printf("A media dos elementos do vetor digitado e: %.2f\n", media);
    printf("Os numeros maiores do que a media sao:");
    for(i=0; i < n; i++){
        if (pvetor[i] > media){
            printf(" %d", *(pvetor + i));
            contador++;
        }
    }
    printf("\nQuantidade de numeros maiores do que a media: %d numeros.", contador);
    free(pvetor);

    return 0;
}