#include <stdio.h>

#define TAM 81

void converte_cadeia_para_maiusculas(char v[]);
int tamanho_cadeia(char v[]);
char converte_letra_para_maiuscula(char c);
int eh_letra_minuscula(char c);

int main(void){
    char frase[TAM];

    gets(frase);
    while (tamanho_cadeia(frase)){
        converte_cadeia_para_maiusculas(frase);
        puts(frase);
        gets(frase);
    }
    return 0;
}

void converte_cadeia_para_maiusculas(char v[]){
    int i;
    for (i=0; i< tamanho_cadeia(v); i++){
        v[i] = converte_letra_para_maiuscula(v[i]);
    }
}
char converte_letra_para_maiuscula(char c){
    if (eh_letra_minuscula(c)){
        c-= 32;
    }
    return c;
}
int tamanho_cadeia(char v[]){
    int tamanho = 0, i;
    for(i=0; i < TAM; i++){
        if (v[i] == '\0') break;
        tamanho +=1;
    }
    return tamanho;
}
int eh_letra_minuscula(char c){
    if(c >= 97 && c <= 122) return 1;
    else return 0;
}