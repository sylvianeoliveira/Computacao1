#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pvetor;
    unsigned long long int n;
    n = 100;
    while(1){
        pvetor = (int *) malloc(n * sizeof(char));
        if (!pvetor){
            free(pvetor);
            break;
        }
        else{
            free(pvetor);
            n+= 70000;
        }
    }
    while(1){
        pvetor = (int *) malloc(n * sizeof(char));
        if (!pvetor){
            free(pvetor);
            n -= 1;
        }
        else{
            free(pvetor);
            break;
        }
    }
    printf("O valor maximo de memoria deste computador eh: %llu bytes.", n*sizeof(char));
    return 0;
}
