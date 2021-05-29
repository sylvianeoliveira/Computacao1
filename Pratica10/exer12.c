#include <stdio.h>
#include <string.h>

void limpa_string(char string[]);
void trata_linha(char string[], char nova_string[]);
void zera_string(char string[], char nova_string[]);
int main (void){
    FILE *arquivo, *arquivo2;
    char linha[200], nova_linha[200];
        
    arquivo = fopen("leitura-exer12.txt", "r");
    arquivo2 = fopen("imprime-exer12.txt", "w");
    if (arquivo == NULL || arquivo2 == NULL){
        return 1;
    }

    while (1){
        zera_string(linha, nova_linha);
        fgets(linha, 200 , arquivo);
        limpa_string(linha);
        trata_linha(linha, nova_linha);
        fprintf(arquivo2, "%s\n", nova_linha);
        if(feof(arquivo)) break;
    }

    fclose(arquivo);
    fclose(arquivo2);
    return 0;
}

void limpa_string(char string[]){
    int tam = strlen(string);
    int i;
    
    for(i = 0; i < tam; i++) { 
        if(string[i]=='\n') {
            string[i] = '\0';
        }
    }
}

void trata_linha(char string[], char nova_string[]){
    int tamanho = strlen(string);
    int i, contador=0;

    for (i=0; i < tamanho; i++){
        if (string[i] >= '0' && string[i] <= '9'){
            nova_string[contador] = string[i];
            contador++;
        }
    }
    string[tamanho - contador - 1] = '\0';
    strcat(nova_string, " ");
    strcat(nova_string, string);
}

void zera_string(char string[], char nova_string[]){
    int i;
    int tamanho= strlen(string);
    for(i=0; i < tamanho; i++){
        string[i] = '\0';
        nova_string[i] = '\0';
    }
}