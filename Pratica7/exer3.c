#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i = 10, j = 20;
    int temp;
    int *p1, *p2;

    p1 = &i;
    p2 = &j; /*Aqui o ponteiro p2 recebe o endereço de j*/
    temp = *p1;
    *p1 = *p2;
    *p2 = temp; /*Aqui o endereço que o ponteiro p2 aponta recebe o valor da variável temp*/
        
    /*Aqui será impresso os valores das variáveis i, j trocadas, pois nas linhas acima os
    ponteiros p1 e p2 receberam seus endereços de memória e modificaram o conteúdo apontado por elas.*/
    printf("%d %d\n", i, j);
    return 0;
}