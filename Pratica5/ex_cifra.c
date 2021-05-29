#include <stdio.h>
#include <string.h>

int main(void){

    int i, j, k, qtd_teste, chave_deslocamento, tamanho_mensagem;
    char mensagem[51],char_aux, char_aux2;

    scanf("%d", &qtd_teste);
    scanf("%c", &char_aux);
    for(i=0; i < qtd_teste; i++){
        fgets(mensagem, 51, stdin);
        for(k=0; k < 51; k++){
            if (mensagem[k] == '\n'){
                mensagem[k] = '\0';
            }
        }
        scanf("%d", &chave_deslocamento);
        scanf("%c", &char_aux2);

        tamanho_mensagem = strlen(mensagem);

        for (j=0; j < tamanho_mensagem; j++){
            mensagem[j] -= chave_deslocamento;
            if (mensagem[j] < 65){
                mensagem[j] += 26;
            }
        }
        mensagem[j] = '\0';
        printf(mensagem);
        printf("\n");
    }
    return 0;
}