#include <stdio.h>
#include <string.h>

int QuantasVezes (char frase[], char procurado);
int main(void){
    char c[6] = "aeiou", frase[80];
    int i;

    gets(frase);
    for (i=0; i < 5; i++){
        printf("O caracter %c apareceu %d vezes\n", c[i], QuantasVezes(frase, c[i]));
    }
    return 0;
}

int QuantasVezes (char frase[], char procurado){
    int vezes = 0, i;
    int tamanho = strlen(frase);
    for(i=0; i < tamanho; i++){
        if (frase[i] == procurado){
            vezes += 1;
        }
    }
    return vezes;
}