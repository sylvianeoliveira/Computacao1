#include <stdio.h>

void converter (int numero_base10, int numero_base2[]);
void teste_converter (int numero_base10, int numero_base2[], int posicao);
int main(void){
    int i, numero_base10, numero_base2[31];

    printf("Insira um numero na base decimal: ");
    scanf("%d", &numero_base10);

    converter(numero_base10, numero_base2);
    printf("O numero %d na base 2 eh: ");
    for(i=0; i < 32; i++){
        printf("%d", numero_base2[i]);
    }
    printf("\n");
    return 0;
}

void converter (int numero_base10, int numero_base2[]){
    teste_converter(numero_base10, numero_base2, 31);
}

void teste_converter (int numero_base10, int numero_base2[], int posicao){
    if (posicao >= 0){
        numero_base2[posicao] = numero_base10 % 2;
        numero_base10 /= 2;
        teste_converter(numero_base10, numero_base2, posicao - 1);
    }
}