#include <stdio.h>
#define DIM 12

int main(void){
    int i, j;
    char operador;
    float matriz[DIM][DIM], soma=0, media;

    scanf("%c", &operador);
    
    for (i=0; i < DIM; i++){ /* linha da matriz */
        for (j=0; j < DIM; j++){ /* coluna da matriz */
            scanf("%f", &matriz[i][j]);
            if (j > i){
                soma += matriz[i][j];
            }
        }
    }

    if (operador == 'S'){
        printf("%.1f\n", soma);
    }
    else{
        media = soma/66;
        printf("%.1f\n", media);
    }

    return 0;
}