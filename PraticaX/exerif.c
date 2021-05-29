#include <stdio.h>

int main(void){

    char operador;
    float num1, num2, conta = 0;

    printf("Insira um numero: ");
    scanf("%f", &num1);
    fflush(stdin);

    printf("Insira um operador matematico(+ - * / ): ");
    operador = getchar();

    printf("Insira um numero: ");
    scanf("%f", &num2);

    if ( operador == '+'){
        conta = num1 + num2;
        printf("O resultado da operacao e: %f", conta);
    }
    else if ( operador == '-'){
        conta = num1 - num2;
        printf("O resultado da operacao e: %f", conta);
    }
    else if ( operador == '*'){
        conta = num1 * num2;
        printf("O resultado da operacao e: %f", conta);
    }
    else if ( operador == '/'){
        conta = num1 / num2;
        printf("O resultado da operacao e: %f", conta);
    }
    else{
        printf("O operador nao pertence ao grupo especificado.\n");
    }
    return 0;
}