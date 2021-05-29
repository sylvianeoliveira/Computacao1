#include <stdio.h>
#include <string.h>

int palindromo(char frase[]);
int teste_palindromo(char frase[], int posicao1, int posicao2);

int main(void){
    int i;
    char frase[1000];
    
    printf("Insira uma frase: ");
    fgets(frase, 1002, stdin);
    for(i=0; i < 1002; i++){
        if(frase[i] == '\n'){
            frase[i] = '\0';
        }
    }

    if (palindromo(frase) == 1){
        printf("Sua frase eh um palindromo.\n");
    }
    else{
        printf("Sua frase nao eh um palindromo\n");
    }

    return 0;
}

int palindromo(char frase[]){
    int tamanho = strlen(frase);
    return teste_palindromo(frase, 0, tamanho-1);
}
int teste_palindromo(char frase[], int posicao1, int posicao2){
    if ((frase[posicao1] == ' ') || (frase[posicao1] == '.') || (frase[posicao1] == ',')
    || (frase[posicao1] == '!') || (frase[posicao1] == '?') || (frase[posicao1] == ';') || (frase[posicao1] == ':')){
        return teste_palindromo(frase, posicao1 + 1, posicao2);
    }
    if ((frase[posicao2] == ' ') || (frase[posicao2] == '.')|| (frase[posicao2] == ',')
    || (frase[posicao2] == '!') || (frase[posicao2] == '?') || (frase[posicao2] == ';') || (frase[posicao2] == ':')){
        return teste_palindromo(frase, posicao1, posicao2 - 1);
    }

    if (posicao1 < posicao2){
        if (frase[posicao1] == frase[posicao2]){
            return teste_palindromo(frase, posicao1 + 1, posicao2 - 1);
        }
        else{
            return 0;
        }
    }
    return 1;
}