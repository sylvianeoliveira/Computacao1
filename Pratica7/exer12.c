#include <stdio.h>

void converter (int numero_base10, int numero_base2[32]);

int main(int argc, char *argv[]){
    int num_base10, num_base2[32], i, teste = 1;

    while(1){
        scanf("%d", &num_base10);
        if (num_base10 < 0) break;

        converter(num_base10, num_base2);

        printf("Teste %d\n", teste++);
        printf("%d\n", num_base10);

        for(i=0; i < 32; i++){
            printf("%d", num_base2[i]);
        }
        printf("\n\n");
}
return 0;
}

void converter (int numero_base10, int numero_base2[32]){
    int i;
    for (i=31; i >= 0; i--){
        numero_base2[i] = numero_base10 % 2;
        numero_base10 /= 2;
    }
}