#include <stdio.h>
#include <stdlib.h>

int maior(int *vetor, int tamanho);
int teste_maior(int *vetor, int tamanho, int posicao, int maior);

int main(void){
    int i, *vetor, tamanho, resultado;

    printf("Insira o numero de elementos do seu vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *) malloc(tamanho * sizeof(int));
    if (!vetor){
        puts("Sem memoria!");
        return 1;
    }
    printf("Insira os elementos do seu vetor: ");
    for(i=0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    resultado = maior(vetor, tamanho);

    printf("O maior elemento do seu vetor eh: %d", resultado);


    return 0;
}

int maior(int *vetor, int tamanho){
    return teste_maior(vetor, tamanho, 1, vetor[0]);
}
int teste_maior(int *vetor, int tamanho, int posicao, int maior){
    if (posicao == tamanho) return maior;

    if (vetor[posicao] > maior){
        maior = vetor[posicao];
    }
    if (posicao < tamanho){
        return teste_maior(vetor, tamanho, posicao + 1, maior);
    }
    else{
        return 1;
    }
}
