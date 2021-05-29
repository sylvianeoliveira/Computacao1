#include <stdio.h>
#include <stdbool.h>

int main(void){

    int ordem, i, j, valor, justi;
    int matriz[16][16];
    float numero;

    while (true){
        scanf(" %d", &ordem);
        if (ordem == 0){
            break;
        }
        valor = 1;
        for (i=0; i < ordem; i++){ /* Preenche a primeira coluna */
            matriz[i][0] = valor;
            valor *= 2;
        }
        for (i=0; i < ordem; i++){ /* Linha da matriz */
            for (j=1; j < ordem; j++){ /* Coluna da matriz */
                    matriz[i][j] = matriz[i][j-1] * 2; /* Elemento seguinte */
            }
        }

    numero = matriz[ordem - 1][ordem - 1];
    justi = 0;
    while (numero >= 1){
        numero /= 10;
        justi += 1;
    }

    for(i=0; i < ordem; i++){  /* Imprimir a matriz */
	    for(j=0; j < ordem; j++){
            j == 0? printf("%*d", justi, matriz[i][j]) : printf(" %*d", justi, matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}