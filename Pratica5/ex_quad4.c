#include <stdio.h>
#include <stdbool.h>

int main(void){

    int ordem, i, j, aux;
    int matriz[102][102];

    while ((scanf(" %d", &ordem)) != EOF){
        aux = ordem - ordem / 3;

        for (i=0; i < ordem; i++){ /* Preenche a matriz com 0 e as diagonais com 2 e 3*/

	        for(j=0; j < ordem; j++){
                if ((i >= ordem/3 && i < aux) && (j >= ordem/3 && j < aux)){
                    matriz[i][j] = 1;
                }
                else if (i == j || j == ordem - i -1){
                    matriz[i][i] = 2;
                    matriz[i][ordem - i -1] = 3;
                }
                else{
                    matriz[i][j] = 0;
                }
            } 
        }       
        
        matriz[ordem/2][ordem/2] = 4; /* Preenche o elemento central com 4 */
        
        for(i=0; i < ordem; i++){  /* Imprimi a matriz */
            for(j=0; j < ordem; j++){
                printf("%d", matriz[i][j]);
                }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}