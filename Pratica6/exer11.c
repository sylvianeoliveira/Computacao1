#include <stdio.h>

void converter (int numero_base10, int numero_base2[32]);
void imprime_vetor(int vetor[32]);

int main(void){
    int numero_base10, numero_base2[32];
    scanf("%d", &numero_base10);
    converter(numero_base10, numero_base2);
    printf("O numero decimal %d na base 2 eh: ", numero_base10);
    imprime_vetor(numero_base2);
    return 0;
}

void converter (int numero_base10, int numero_base2[32]){
    int i;
    for (i=31; i >= 0; i--){
        numero_base2[i] = numero_base10 % 2;
        numero_base10 /= 2;
    }
}

void imprime_vetor(int vetor[32]){
    int i;
    for(i=0; i < 32; i++){
        printf("%d", vetor[i]);
    }
}