#include <stdio.h>
#include <string.h>

int main(void){

    char codigo[52], mensagem[26], char_aux;
    int i, j, k, qtd_teste, tamanho_codigo;

    scanf("%d", &qtd_teste);
    scanf("%c", &char_aux);

    for (i=0; i < qtd_teste; i++){
        fgets(codigo, 52, stdin);
        for(j=0; j < 52; j++){
            if (codigo[j] == '\n'){
                codigo[j] = '\0';
            }
        }

        tamanho_codigo = strlen(codigo);
        k=0;
        if(codigo[0] != 32){
            mensagem[0] = codigo[0];
            k= 1;
        }
        for (j=1; j < tamanho_codigo; j++){
            if (codigo[j] != 32 && codigo[j-1] == 32){
                mensagem[k] = codigo[j];
                k++;
            }
        }
        codigo[j] = '\0';
        mensagem[k] = '\0';
        printf(mensagem);
        printf("\n");
        mensagem[0] = '\0';
    }

    return 0;
}