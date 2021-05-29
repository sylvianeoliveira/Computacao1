#include <stdio.h>

int main(void){
    int hora = 11, minuto = 50, segundo = 0, tempo_total_segundos;
    tempo_total_segundos = hora * 3600 + minuto * 60 + segundo;
    float distancia = 90000, velocidade_media;
    velocidade_media = distancia / tempo_total_segundos;
    printf("Velocidade media: %f m/s", velocidade_media);
    return 0;
}