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

    switch (operador){
    case '+':
        conta = num1 + num2;
        printf("O resultado da operacao e: %.2f", conta);        
        break;
    case '-':
        conta = num1 - num2;
        printf("O resultado da operacao e: %.2f", conta);        
        break;
    case '*':
        conta = num1 * num2;
        printf("O resultado da operacao e: %.2f", conta);        
        break;
    case '/':
        conta = num1 / num2;
        printf("O resultado da operacao e: %.2f", conta);        
        break;
    default:
        break;
    }

    return 0;
}