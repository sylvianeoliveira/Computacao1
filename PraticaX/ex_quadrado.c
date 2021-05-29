#include <stdio.h>

int main(void){

    int valor, i, quadrado;

    scanf ("%d", &valor);

    for (i=1; i <= valor ; i++){
        if (i % 2 == 0){
              quadrado = i*i;
            printf("%d^2 = %d\n", i, quadrado);  
        }
    }
    return 0;
}