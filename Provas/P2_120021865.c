/*Sylviane Oliveira*/
#include <stdio.h>
#include <string.h>
#define VALIDADOR 7309
typedef struct{
    char poltrona[2];
    float valor;
    char tipo_ingresso[30];
    char codigo[20];
}INGRESSO;

void inverte_string(char string[]){
    int i;
    int tam = strlen(string);
    char aux[tam];
    for (i=0; i < tam; i++){
        aux[tam-i-1] = string[i];
    }
    for (i=0; i < tam; i++){
        string[i] = aux[i];
    }


}

void cria_eticket(int num_sala, int qtd_ingresso, INGRESSO *ingresso){ /*Questão 1*/
    FILE *arquivo;
    int codigo_validacao_int;
    char codigo_validacao[100];
    int auxiliar, i=0, j;
    
    for(j=0; j < qtd_ingresso; i++){

        codigo_validacao_int = (num_sala * (ingresso->poltrona[0] - '0') * ingresso->poltrona[1] * VALIDADOR) / ingresso->valor; /*Fórmula do e-ticket*/
    
        while (codigo_validacao_int != 0){ /*Transformar codigo_validacao em char*/
            auxiliar = codigo_validacao_int % 10;
            codigo_validacao[i] = auxiliar + '0';
            i++;
            codigo_validacao_int /= 10;
        }
    codigo_validacao[i] = '\0';
    inverte_string(codigo_validacao);
    strcat(codigo_validacao, ".etk");
    arquivo = fopen(codigo_validacao, "a");
    fprintf(arquivo, "Sala %d\n%s\nR$:%.2f\n%s\n%s\n", num_sala, ingresso->poltrona, ingresso->valor, ingresso->tipo_ingresso, codigo_validacao);
    
    fclose(arquivo);
    ingresso+=1;
    }
}

void limpa_string(char string[]){
    int i;
    int tam = strlen(string);
    for (i=0; i < tam; i++){
        if(string[i] == '\n'){
            string[i] = '\0';
        }
    }


}

INGRESSO leitura_ingresso(FILE *arquivo, int qtd_arquivos){ /*Questão 2*/
    INGRESSO *ingresso;
    int i, j;
    char linha_poltrona[4];
    char linha_preco[15];
    char linha_codigo[20];
    char linha_tipo[20];

    for (i=0; i < qtd_arquivos; i++){
        for(j=0; j < 5; j++){
            if (j == 1){
                fgets(linha_poltrona, 4, arquivo); /*Le a linha com \n para o printf*/  
                limpa_string(linha_poltrona);     
            }
            else if (j == 2){
                fgets(linha_preco, 15, arquivo); /*Le a linha com \n para o printf*/
                limpa_string(linha_preco);
            }
            else if (j == 3){
                fgets(linha_tipo, 20, arquivo); /*Le a linha com \n para o printf*/
                limpa_string(linha_tipo);
            }
            else if (j == 4){
                fgets(linha_codigo, 20, arquivo); /*Le a linha com \n para o printf*/ 
                limpa_string(linha_codigo);
            }
        }
        ingresso->poltrona = linha_poltrona;
        ingresso->tipo_ingresso = linha_tipo;
        ingresso->preco = linha_preco;
        ingresso->codigo = linha_codigo;
        
        arquivo+= 1;
        ingresso += 1;
    }
    return *ingresso;
}

int verifica_auxiliar(int num, int lista[], int i){ /*Questão 4*/
    if (num == lista[i]) return 1;
    else if (lista[i+1] == NULL) return 0;
    else verifica_auxiliar(num, lista, i+1);
}
int verifica_numero_lista(int num, int lista[]){ /*Questão 4*/
    return verifica_auxiliar(num, lista, 0);
}
