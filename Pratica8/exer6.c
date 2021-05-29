#include <stdio.h>

typedef struct{
    int hora, minuto, segundo;
} TEMPO;

TEMPO soma_tempo(TEMPO t1, TEMPO t2);

int main(void){
    TEMPO t1, t2, t3;

    puts("Insira o tempo 1 abaixo.");
    while(1){
        printf("horas: ");
        scanf("%d", &t1.hora);
        if (t1.hora >= 0) break;
        else{
            puts("Insira uma hora valida. Por favor!");
        }
    }
    while(1){
        printf("minutos: ");
        scanf("%d", &t1.minuto);
        if (t1.minuto >= 0 && t1.minuto < 60) break;
        else{
            puts("Insira um minuto valido. Por favor!");
        }
    }
    while(1){
        printf("segundos: ");
        scanf("%d", &t1.segundo);
        if (t1.segundo >= 0 && t1.segundo < 60) break;
        else{
            puts("Insira um segundo valido. Por favor!");
        }
    }
    
    puts("Insira o tempo 2 abaixo.");
    while(1){
        printf("horas: ");
        scanf("%d", &t2.hora);
        if (t2.hora >= 0) break;
        else{
            puts("Insira uma hora valida. Por favor!");
        }
    }
    while(1){
        printf("minutos: ");
        scanf("%d", &t2.minuto);
        if (t2.minuto >= 0 && t2.minuto < 60) break;
        else{
            puts("Insira um minuto valido. Por favor!");
        }
    }    
    while(1){
        printf("segundos: ");
        scanf("%d", &t2.segundo);
        if (t2.segundo >= 0 && t2.segundo < 60) break;
        else{
            puts("Insira um segundo valido. Por favor!");
        }
    }
    
    t3 = soma_tempo(t1, t2);

    printf("A soma dos tempos t1 e t2 eh: %02d:%02d:%02d", t3.hora, t3.minuto, t3.segundo);
    return 0;
}

TEMPO soma_tempo(TEMPO t1, TEMPO t2){
    TEMPO t3;
    int aux_tempo;
    aux_tempo = t1.segundo + t2.segundo;
    aux_tempo += t1.minuto*60 + t2.minuto*60;
    aux_tempo += t1.hora*3600 + t2.hora*3600;

    t3.hora = aux_tempo / 3600;
    t3.minuto = (aux_tempo % 3600) / 60;
    t3.segundo = (aux_tempo % 3600) % 60;

    return t3; 
    
}