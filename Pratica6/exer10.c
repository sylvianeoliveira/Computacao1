#include <stdio.h>
#include <string.h>

#define TAM 300
int onde_esta(char frase1[], char frase2[]);
void recebe(char frase[]);

int main(void){
    int posicao;
    char frase1[TAM], frase2[TAM];

    recebe(frase1);
    recebe(frase2);

    posicao = onde_esta(frase1, frase2);
    posicao == -1? printf("A frase 2 nao esta contida na frase 1.\n") : printf("A frase 2 esta contida na frase 1 e comeca na posicao %d.", posicao);

    return 0;
}

int onde_esta(char frase1[], char frase2[]){
    int i, j, contador = 0;
    int tamanho_frase2 = strlen(frase2);
    for (i=0; frase1[i] != '\0'; i++){
        if (frase1[i] == frase2[0]){
            for (j=0; frase2[j] != '\0'; j++){
                if (frase2[j] != frase1[j+i]){
                    break;
                }
                else{
                    contador += 1;
                }
            }
            if (contador == tamanho_frase2){
                return i;
            }
            else contador = 0;
        }
    }
    return -1;
}

void recebe(char frase[]){
    int i;
    fgets(frase, TAM, stdin);
    for(i=0; i < TAM; i++){
        if (frase[i] == '\n'){
            frase[i] = '\0';
        }
    }
}