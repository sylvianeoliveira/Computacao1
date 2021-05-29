#include <stdio.h>
#include <string.h>
void decriptografa(char frase[]);

int main(void){
    char frase[81];

    gets(frase);
    decriptografa(frase);
    puts(frase);

    return 0;
}

void decriptografa(char frase[81]){
    int i;
    int tamanho = strlen(frase);
    for (i=0; i < tamanho; i++){
        if ((frase[i] > 65 && frase[i] <= 90) || (frase[i] > 97 && frase[i] <= 122)){
               frase[i] -= 1;
        }
        else if(frase[i] == 'A'){
            frase[i] = 'Z';
        }
        else if(frase[i] == 'A'){
            frase[i] = 'Z';
        }
    }
}
