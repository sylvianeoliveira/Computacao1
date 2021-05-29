#include <stdio.h>

int main(void){

    int i, quantidade_vezes, num1, num2, soma_impares;

    scanf("%d", &quantidade_vezes);

    for (i=0 ; i < quantidade_vezes ; i++){
        soma_impares = 0;
        scanf("%d %d", &num1, &num2);

        if (num1 < num2){
            num2--;
            for (num2; num2 > num1 ; num2--){
                if (num2 % 2 == 1){
                    soma_impares = soma_impares + num2;
                }
            }
            printf("%d\n", soma_impares);
        }
        else{
             num1--;
            for (num1; num1 > num2 ; num1--){
                if (num1 % 2 == 1){
                    soma_impares = soma_impares + num1;
                }
            }
            printf("%d\n", soma_impares);
        }
    }

    return 0;
}