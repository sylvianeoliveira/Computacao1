#include <stdio.h>
#include <stdlib.h>

void ordenacao_bolha(int *pvetor, int n);

int main(void){
    int i, n, *pvetor;
    
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

    ordenacao_bolha(pvetor, n);
	printf("O vetor digitado em ordem crescente e:\n");
    for(i=0; i < n; i++){
		printf("%d ", *(pvetor + i));
	}

    free(pvetor);

    return 0;
}

void ordenacao_bolha(int *pvetor, int n){
    int i, j, temp;
    for(i=0; i < n; i++){
        for(j= i + 1; j < n; j++){
            if (pvetor[i] > pvetor[j]){
                temp = pvetor[i];
                pvetor[i] = pvetor[j];
                pvetor[j] = temp;
            }
        }
    }
}