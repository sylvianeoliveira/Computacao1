#include <stdio.h>

int teste_mdc (int x, int y, int divisor);
int mdc (int x, int y);
int primo (int x);
int prox_primo (int x);

int main(void){
    int num_x, num_y, resultado;

    printf("Insira o valor de x: ");
    scanf("%d", &num_x);

    printf("Insira o valor de y: ");
    scanf("%d", &num_y);

    resultado = mdc(num_x, num_y);

    printf("O mdc entre %d e %d eh: %d.\n", num_x, num_y, resultado);

    return 0;
}

int teste_mdc (int x, int y, int divisor){
    if (x == 1 && y == 1){
        return 1;
    }
    else if ((x % divisor == 0) && (y % divisor == 0)){
        return divisor * teste_mdc(x/divisor, y/divisor, divisor);
    }
    else if ((x % divisor == 0) && (y % divisor != 0)){
        return teste_mdc(x/divisor, y, divisor);
    }
    else if ((x % divisor != 0) && (y % divisor == 0)){
        return teste_mdc(x, y/divisor, divisor);     
    }
    else if ((x % divisor != 0) && (y % divisor != 0)){
        return teste_mdc(x, y, prox_primo(divisor));
    }
    else{
        return 0;
    }
}
int mdc (int x, int y){
    return teste_mdc(x, y, 2);
}
int primo (int x){
    int i;
    if ( x <= 1) return 0;
    for(i=2; i < x; i++){
        if (x % i == 0) return 0;
    }
    return 1;
}
int prox_primo (int x){
    if (primo(x+1) == 1) return x+1;
    return prox_primo(x+1);
}