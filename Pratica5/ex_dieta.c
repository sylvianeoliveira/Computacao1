#include <stdio.h>
#include <string.h>

int main(void){

    char alimentos[28], almoco[28], janta[28], refeicoes[56], pseudo_resultado[27], char_aux;
    int i, j, k, m, qtd_teste, tamanho_alimentos, tamanho_refeicoes;

    scanf("%d", &qtd_teste);
    scanf("%c", &char_aux);

    for (i=0; i < qtd_teste; i++){
        fgets(alimentos, 28, stdin);
        fgets(almoco, 28, stdin);
        fgets(janta, 28, stdin);
        for(j=0; j < 28; j++){
            if (alimentos[j] == '\n'){
                alimentos[j] = '\0';
            }
            if (almoco[j] == '\n'){
                almoco[j] = '\0';
            }
            if (janta[j] == '\n'){
                janta[j] = '\0';
            }
        }
        tamanho_alimentos = strlen(alimentos);
        refeicoes[0] = '\0';
        strcat(refeicoes, almoco);
        strcat(refeicoes, janta);

        tamanho_refeicoes = strlen(refeicoes);
        pseudo_resultado[0] = '\0';

        for(k=0; k < tamanho_refeicoes; k++){
            for(j=0; j < tamanho_alimentos; j++){
                if (refeicoes[k] == alimentos[j]){
                    aux = 0
                    break
                }
                else{
                    aux = 1
                }
            }
            if (aux == 1){
                refeicao[k] n esta em alimentos
            }
        }
    printf(pseudo_resultado);
    printf("\n");
    }
    
    return 0;
}

