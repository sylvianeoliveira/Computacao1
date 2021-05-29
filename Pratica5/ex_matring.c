#include <stdio.h>
#include <string.h>

int main(void){

    char matring[4][84], mensagem[80];
    int i, j, qtd_colu, coluna_f, coluna_l, coluna_m, temp;

    for (i=0; i < 4; i++){
        fgets(matring[i], 83, stdin);
    }
    
    qtd_colu = strlen(matring[0]) - 2;

    coluna_f = (matring[0][0] - '0') * 1000 + (matring[1][0] - '0') * 100 + (matring[2][0] - '0') * 10 + (matring[3][0] - '0');
    coluna_l = (matring[0][qtd_colu] - '0') * 1000 + (matring[1][qtd_colu] - '0') * 100 + (matring[2][qtd_colu] - '0') * 10 + (matring[3][qtd_colu] - '0');

    for (j=1; j < qtd_colu; j++){
            coluna_m = (matring[0][j] - '0') * 1000 + (matring[1][j] - '0') * 100 + (matring[2][j] - '0') * 10 + (matring[3][j] - '0');
            temp = (coluna_f * coluna_m + coluna_l) % 257;
            mensagem[j-1] = temp + 0;
    }
    mensagem[qtd_colu - 1] = '\0';
    
    printf(mensagem);
    printf("\n");

    return 0;
}