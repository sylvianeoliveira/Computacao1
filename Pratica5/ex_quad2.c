#include <stdio.h>
#include <stdbool.h>

int main(void){

    int ordem, i, j, valor;
    int matriz[101][101];
    while (true){
        scanf(" %d", &ordem);
        if (ordem == 0){
            break;
        }
        valor = 1;
        for (i=0; i < ordem; i++){ /* Preenche a primeira coluna */
            matriz[i][0] = valor;
            valor += 1;
        }
        for (i=0; i < ordem; i++){ /* Linha da matriz */
            for (j=1; j < ordem; j++){ /* Coluna da matriz */
                if (j > i){
                    matriz[i][j] = matriz[i][j-1] + 1; /* Triangular superior */
                }
                else{ /* Triangular inferior */
                     matriz[i][j] = matriz[i][j-1] - 1;
                }
            }
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