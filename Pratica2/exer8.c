#include <stdio.h>

int main(void){
    float distancia1 = 15, distancia2 = 10, velocidade1 = 25, velocidade2 = 30;
    float tempo1, tempo2, tempo_total_segundos_f, tempo_espera = 15;
    int tempo_total_segundos, tempo_final_h, tempo_final_min, tempo_final_seg;

    tempo1 = distancia1 / velocidade1;
    tempo2 = distancia2 / velocidade2;
    tempo_total_segundos_f = tempo1 * 3600 + tempo2 * 3600 + tempo_espera * 60;
    
    tempo_total_segundos = tempo_total_segundos_f;

    tempo_final_h = (3600 * 8 - tempo_total_segundos) / 3600;
    tempo_final_min = ((3600 * 8 - tempo_total_segundos) % 3600) / 60;
    tempo_final_seg = ((3600 * 8 - tempo_total_segundos) % 3600) % 60;

    printf("Horario que precisa sair de casa: %d horas, %d minutos e %d segundos", tempo_final_h, tempo_final_min, tempo_final_seg);
    return 0;
}