#include <stdio.h>

int main(void){
    int hora = 11, minuto = 50, segundo = 0, tempo_total_segundos;
    tempo_total_segundos = hora * 3600 + minuto * 60 + segundo;
    float distancia = 90000, velocidade_media, velocidade_media_mph;
    velocidade_media = distancia / tempo_total_segundos;
    velocidade_media_mph = velocidade_media * 2.23694;
    printf("Velocidade media: %f mph", velocidade_media_mph);
    return 0;
}