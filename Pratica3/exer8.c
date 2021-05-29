#include <stdio.h>
#define DIM 40
int main(void) {
    char nome[DIM];
    double salario_fixo, total_vendas_mes_dinheiro, salario_total;
   
    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas_mes_dinheiro);
    
    salario_total = salario_fixo + total_vendas_mes_dinheiro * 0.15;
    
    printf("TOTAL = R$ %.2lf\n", salario_total);
    return 0;
}