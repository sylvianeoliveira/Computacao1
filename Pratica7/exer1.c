#include <stdio.h>

int main(void){
    int var;
    int *varPtr;

    var = 7;
    varPtr = &var;

    printf("O endereco de var eh %p\n"
            "O valor de varPtr eh %p\n", &var, varPtr);
            /*Aqui foi impresso o endereço da variável var e o conteúdo do
            ponteiro varPtr, que por sua vez era o endereço de memória de var.*/

    printf("O valor de var eh %d\n"
            "O valor que varPtr aponta eh %d\n", var, *varPtr);
            /*Aqui foi impresso o valor da variável var e o valor do endereço
            que o ponteiro varPtr apontava.*/

    printf("Mostrando que * e & sao complementares\n"
            "&*varPtr = %p\n"
            "*&varPtr = %p\n", &*varPtr, *&varPtr);
            /*Aqui foi impresso o endereço de quem o varPtr apontava em ambas.*/

    return 0;

}