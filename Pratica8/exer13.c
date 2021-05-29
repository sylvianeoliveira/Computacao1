#include <stdio.h>
#include <stdlib.h>

typedef struct  _FRACAO{
    int numerador, denominador;
} FRACAO;

int main(void){
    FRACAO frac1, frac2;

    puts("Insira sua fracao 1:");
    printf("Numerador: ");
    scanf("%d", &frac1.numerador);
    printf("Denominador: ");
    scanf("%d", &frac1.denominador);

    if(frac1.denominador == 0){
        puts("Voce inseriu 0 no denominador.");
        exit(0);
    }


    puts("Insira sua fracao 2:");
    printf("Numerador: ");
    scanf("%d", &frac2.numerador);
    printf("Denominador: ");
    scanf("%d", &frac2.denominador);

        if(frac2.denominador == 0){
        puts("Voce inseriu 0 no denominador.");
        exit(0);
    }
    
    /*Soma*/
    printf("Soma: %d / %d\n", ((frac1.numerador * frac2.denominador) + (frac1.denominador * frac2.numerador)), frac1.denominador * frac2.denominador);

    /*Subtração*/
    printf("Subtracao: %d / %d\n", ((frac1.numerador * frac2.denominador) - (frac1.denominador * frac2.numerador)), frac1.denominador * frac2.denominador);

    /*Multiplicação*/
    printf("Multiplicacao: %d / %d\n", (frac1.numerador * frac2.numerador), (frac1.denominador * frac2.denominador));

    /*Divisão*/
    printf("Divisao: %d / %d\n", (frac1.numerador * frac2.denominador), (frac1.denominador * frac2.numerador));
    
    return 0;
}