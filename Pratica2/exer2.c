#include <stdio.h>

int main(void){
    int hora = 11, minuto = 50, segundo = 0, tempo_total_segundos;
    tempo_total_segundos = hora * 3600 + minuto * 60 + segundo;
    printf("Tempo total: %d s", tempo_total_segundos);
    return 0;
}