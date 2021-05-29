#include <stdio.h>
#include <stdlib.h>

typedef struct  _FRACAO{
    int numerador, denominador;
} FRACAO;

FRACAO soma (FRACAO a, FRACAO b);
FRACAO subtracao (FRACAO a, FRACAO b);
FRACAO multiplicacao (FRACAO a, FRACAO b);
FRACAO divisao (FRACAO a, FRACAO b);

int main(void){
    FRACAO frac1, frac2, resul;

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
    resul = soma(frac1, frac2);
    printf("Soma: %d / %d\n", resul.numerador, resul.denominador);

    resul = subtracao(frac1, frac2);
    printf("Subtracao: %d / %d\n", resul.numerador, resul.denominador);
    
    resul = multiplicacao(frac1, frac2);
    printf("Multiplicacao: %d / %d\n", resul.numerador, resul.denominador);
    
    resul = divisao(frac1, frac2);
    printf("Divisao: %d / %d\n", resul.numerador, resul.denominador);

    return 0;
}

FRACAO soma (FRACAO a, FRACAO b){
    FRACAO c;
    c.numerador = (a.numerador * b.denominador) + (a.denominador * b.numerador);
    c.denominador = a.denominador * b.denominador;

    return c;
}
FRACAO subtracao (FRACAO a, FRACAO b){
    FRACAO c;
    c.numerador = (a.numerador * b.denominador) - (a.denominador * b.numerador);
    c.denominador = a.denominador * b.denominador;

    return c;
}
FRACAO multiplicacao (FRACAO a, FRACAO b){
    FRACAO c;
    c.numerador = a.numerador * b.numerador;
    c.denominador = a.denominador * b.denominador;

    return c;
}
FRACAO divisao (FRACAO a, FRACAO b){
    FRACAO c;
    c.numerador = a.numerador * b.denominador;
    c.denominador = a.denominador * b.numerador;

    return c;
}