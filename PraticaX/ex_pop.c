#include <stdio.h>

int main(void){

    int qtd_teste, populacao_a, populacao_b, i, anos;
    double taxa_a, taxa_b;

    scanf("%d", &qtd_teste);

    for(i=0 ; i < qtd_teste; i++){
        scanf("%d %d %lf %lf", &populacao_a, &populacao_b, &taxa_a, &taxa_b);
        anos = 0;
        while (populacao_a <= populacao_b) {
            populacao_a = populacao_a * (taxa_a / 100 + 1);
            populacao_b = populacao_b * (taxa_b / 100 + 1);
            anos += 1;
            if (anos > 100){
                break;
            }
        }
        anos <= 100? printf("%d anos.\n", anos) : printf("Mais de 1 seculo.\n");
    }
    
    return 0;
}