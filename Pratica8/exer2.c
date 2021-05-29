#include <stdio.h>

typedef struct _PONTO{
    float x, y;
} PONTO;

typedef struct _CIRCUNFERENCIA{
    float raio;
    PONTO centro;
} CIRCUNFERENCIA;

int main(void){
    CIRCUNFERENCIA c1;

    printf("Entre com o raio do circulo c1\n");
    scanf("%f", &c1.raio); /*Recebe com estruturas*/
    printf("Entre com as coordenadas do centro do circulo c1\n");
    scanf("%f %f", &c1.centro.x, &c1.centro.y); /*Recebe com estruturas dentro de estruturas*/
    printf("Dados lidos\n");
    printf("Circulo c1: raio = %f, x = %f, y = %f\n", c1.raio, c1.centro.x, c1.centro.y); /*Imprime estruturas*/

    return 0;
}