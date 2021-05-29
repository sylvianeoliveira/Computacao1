#include <stdio.h>

int main(void){

    int i, quantidade, numero, anterior1, anterior2;

    scanf("%d", &quantidade);

    switch (quantidade)
    {
    case 1:
        printf("0\n");
        break;
    case 2:
        printf("0 1\n");
        break;
    default:
        printf("0 1");
        anterior2 = 0;
        anterior1 = 1;
        for (i=2 ; i < quantidade ; i++){
            numero = anterior2 + anterior1;
            anterior2 = anterior1;
            anterior1 = numero;
            printf(" %d", numero);
        }
        printf("\n");
        break;
    }

    return 0;
}