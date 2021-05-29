#include <stdio.h>

int main(void){

    int codigo, quantidade;
    float total;

    scanf("%d %d", &codigo, &quantidade);

    switch (codigo)
    {
    case 1:
        total = quantidade * 4.00;
        printf("Total: R$ %.2f\n", total);
        break;
    case 2:
        total = quantidade * 4.50;
        printf("Total: R$ %.2f\n", total);
        break;
    case 3:
        total = quantidade * 5.00;
        printf("Total: R$ %.2f\n", total);
        break;
    case 4:
        total = quantidade * 2.00;
        printf("Total: R$ %.2f\n", total);
        break;
    case 5:
        total = quantidade * 1.50;
        printf("Total: R$ %.2f\n", total);
        break;    
    default:
        break;
    }

    return 0;
}