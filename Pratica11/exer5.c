#include <stdio.h>
int main(void){

    FILE *arquivo;
    int resposta[3], i, novoValor = 5, posicao;

    puts("Insira a posicao que deseja alterar:"); /*Pega a posição*/
    scanf("%d", &posicao);

    /* abre arquivo para leitura e escrita */
    arquivo = fopen ( "myfile.bin ", "r+");
    if (!arquivo) return 1;

    /* le o que esta escrito */
    fread (resposta, sizeof(int), 3, arquivo);

    for (i = 0; i < 3; i ++){ /*Imrpime o que era antes*/
    printf ("%d ", resposta[i]);
    }
    printf("\n");

    /* pular 1 inteiro a partir do inicio
    ir para o segundo inteiro */
    fseek (arquivo , posicao* sizeof(int), SEEK_SET);
    /* escreve um novo valor na posicao do segundo inteiro */
    fwrite (&novoValor , sizeof(int), 1, arquivo);
    printf ("novo %d\n", novoValor);
    /* voltar para o inicio do arquivo */
    fseek (arquivo , 0, SEEK_SET); /* ou rewind tambem serve */
    /* le os novos valores */
    fread (resposta, sizeof(int), 3, arquivo);

    for (i=0; i < 3; i++){  /*Imprime o que ficou*/
        printf("%d ", resposta[i]);
    }
    printf ("\n");

    fclose (arquivo);

return 0;
}