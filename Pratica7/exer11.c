#include <stdio.h>

void misterio (char *n); /*Função mistério*/

int main(void){
    char nome[41];
    gets(nome);

    misterio(nome);

    return 0;
}

void misterio (char *n){ /*Função que lê cada elemento do vetor e compara a um espaço*/
    while (*n != ' ') n++; /*Se a posição 0 não for um espaço, ele aponta para o
                             próximo elemento do vetor com o comando n++*/
    n++; /*Aqui ele aponta novamente para o próximo elemento para que o vetor
           aponte para o vetor n a partir da posição seguinte ao espaço*/
    puts(n); /*Imprime o vetor a partir da última posição alterada.*/
}

/*
*   Diferentemente do programa 5, este codigo utilizada incremento de ponteiros para achar
o sobrenome, enquanto o programa 5 utiliza uma variável i para percorrer cada posição do vetor.
*   Neste codigo, basta que seja impresso o vetor n novamente porque sua posição inicial foi alterada 
para a posição onde inicia o sobrenome, já no programa 5, é necessário imprimir o ponteiro que aponta 
o endereço de memória a partir da posição inicial do sobrenome.
*/
