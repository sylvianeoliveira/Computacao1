#include <stdio.h>

typedef struct{
    int hora, minuto, segundo;
} TEMPO;

int maior_tempo(TEMPO t1, TEMPO t2);

int main(void){
    TEMPO t1, t2;

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
    
    if (maior_tempo(t1, t2) > 0){
        printf("O maior tempo eh t1. %02d:%02d:%02d\n", t1.hora, t1.minuto, t1.segundo);
    }
    else if (maior_tempo(t1, t2) < 0){
        printf("O maior tempo eh t2. %02d:%02d:%02d\n", t2.hora, t2.minuto, t2.segundo);
    }
    else if (maior_tempo(t1,t2) == 0){
        printf("Os tempos t1 e t2 sao iguais. %02d:%02d:%02d\n", t2.hora, t2.minuto, t2.segundo);
    }

    return 0;
}

int maior_tempo(TEMPO t1, TEMPO t2){
    if (t1.hora > t2.hora){
        return 1;
    }
    else if (t2.hora > t1.hora){
        return -1;
    }
    else if (t2.minuto > t1.minuto){
        return -1;
    }
    else if (t1.minuto > t2.minuto){
        return 1;
    }
    else if (t1.segundo > t2.segundo){
        return 1;
    }
    
    else if (t2.segundo > t1.segundo){
        return -1;
    }
    
    else{
        return 0;
    }
}