#include <stdio.h>
#define PRECISAO 0.0000001

typedef struct{
    float x, y;
} PONTO;

double sqrt(double num);
double teste_sqrt(double num, double tentativa);
double potencia(double num, int expo);
double distancia(PONTO p1, PONTO p2);

int main(void){
    PONTO p1, p2;

    puts("Insira as coordenadas do ponto p1:");
    scanf("%f %f", &p1.x, &p1.y);
    puts("Insira as coordenadas do ponto p2:");
    scanf("%f %f", &p2.x, &p2.y);
    printf("A distancia entre os pontos p1 e p2 eh: %lf\n", distancia(p1, p2));

    return 0;
}

double sqrt(double num){
    return teste_sqrt(num,1);
}

double teste_sqrt(double num, double tentativa){
    if (-PRECISAO <= (num/tentativa - tentativa) && PRECISAO >= (num/tentativa - tentativa)){
        return tentativa;
    }
    else {
        return teste_sqrt(num, (tentativa + num/tentativa)/2);
    }
}

double potencia(double num, int expo){
    int i;
    for(i=1; i < expo; i++){
        num *= num;
    }
    return num;
}

double distancia(PONTO p1, PONTO p2){
    double dife_x, dife_y;

    dife_x = p2.x - p1.x;
    dife_y = p2.y - p1.y;

    return sqrt((potencia(dife_y, 2)) + (potencia(dife_x, 2)));
}