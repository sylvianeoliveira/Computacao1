#include <stdio.h>

char * ache_sobrenome(char nome[]){
    char *pnome;
    int i = 0;

    while (nome[i] != ' '){
        i++;
    }
    i++;
    pnome = &nome[i];
    return pnome;
}

int main(void){
    char nome_completo[80];
    char *p;

    puts("Entre com o seu nome e um sobrenome.");
    gets(nome_completo);
    
    p= ache_sobrenome(nome_completo);

    /*O programa imprime tudo o que vem após o primeiro espaço na string. Logo, ele não funciona
    para nome composto. Mas para os casos onde é informado 1 nome, ele imprime o sobrenome da pessoa.*/
    puts(p);

    return 0;
}