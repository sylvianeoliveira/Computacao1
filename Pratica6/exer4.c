#include <stdio.h>
#include <string.h>
void criptografa(char frase[]);

int main(void){
    char frase[81];

    gets(frase);
    criptografa(frase);
    puts(frase);

    return 0;
}

void criptografa(char frase[]){
    int i;
    int tamanho = strlen(frase);
    for (i=0; i < tamanho; i++){
        if ((frase[i] >= 65 && frase[i] < 90) || (frase[i] >= 97 && frase[i] < 122)){
               frase[i] += 1;
        }
        else if(frase[i] == 'Z'){
            frase[i] = 'A';
        }
        else if(frase[i] == 'z'){
            frase[i] = 'a';
        }
    }
}
