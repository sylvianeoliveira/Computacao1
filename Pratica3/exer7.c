#include <stdio.h>

int main(void) {
    int num_funcionario, horas_trabalhadas;
    float valor_hora_trabalhada, salario;
    
    scanf("%d", &num_funcionario);
    scanf("%d", &horas_trabalhadas);
    scanf("%f", &valor_hora_trabalhada);
    
    salario = valor_hora_trabalhada * horas_trabalhadas;

    printf("NUMBER = %d\n", num_funcionario);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}