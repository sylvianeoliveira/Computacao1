#include <stdio.h>
#include <string.h>

int main(void){

    int i, j, k, l, n_teste, tamanho_linha, metade;
    char frase[1003], inverso_frase[1003], char_aux;

    scanf("%d", &n_teste); 
    scanf("%c", &char_aux);
    for (k=0; k < n_teste; k++){
        fgets(frase, 1003, stdin);
        for(l=0; l < 1003; l++){
            if (frase[l] == '\n'){
                frase[l] = '\0';
            }
        }
        tamanho_linha = strlen(frase);

        for(i=0; i <= tamanho_linha; i++){ /* Passo 1: + 3 nas letras*/
            if ((frase[i] >= 65 && frase[i] <= 90) || (frase[i] >= 97 && frase[i] <= 122)){
                frase[i] += 3;
            }
        }

        j=0;
        for(i=tamanho_linha - 1; i >= 0; i--){ /* Passo 2: Inverte a linha */
            inverso_frase[j] = frase[i];
            j++;
        }

        inverso_frase[j] = '\0';
  
        metade = (tamanho_linha) / 2;

        for (i = metade; i < tamanho_linha; i++){ /* Passo 3: -1 na metade em diante */
            inverso_frase[i] -= 1;
        }

        printf(inverso_frase);
        printf("\n");
    }

    return 0;
}