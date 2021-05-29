#include <stdio.h>
#include <stdbool.h>

int main(void){

    int ordem, inicio, camada, i, j, k, fim;
    int matriz[101][101];
    while (true){
        scanf(" %d", &ordem);
        if (ordem == 0){
            break;
        }
        inicio = 0;
        camada = 1;
        fim = ordem - 1;
        for(k=0; k < ordem; k++){ /* Camadas */
            for (i=inicio; i <= fim; i++){ /* Linhas da matriz */
                for (j=inicio; j <= fim; j++){ /* Colunas da matriz */
                    matriz[inicio][j] = camada; /* Linha de cima */
                    matriz[i][inicio] = camada; /* Coluna da esquerda */
                    matriz[fim][j] = camada; /* Linha de baixo */
                    matriz[i][fim] = camada; /* Coluna de baixo */
                }
            }
            fim -= 1;
            inicio += 1;
            camada += 1; /* Aumentar o número da camada */
        }

        for(i=0; i < ordem; i++){  /* Imprimir a matriz */
	        for(j=0; j < ordem; j++){
                j == 0? printf("%3d", matriz[i][j]) : printf(" %3d", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}