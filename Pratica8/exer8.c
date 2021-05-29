#include <stdio.h>
#define TAM 50
typedef struct{
    int hora, minuto, segundo;
} TEMPO;

int maior_tempo(TEMPO t1, TEMPO t2);
void ordena_vetor(TEMPO vetor[], int tam);

int main(void){
    TEMPO temp[TAM];
    int i;

    for(i=0; i < TAM; i++){
        printf("Insira o tempo %d abaixo.\n", i+1);
        while(1){
            printf("horas: ");
            scanf("%d", &temp[i].hora);
            if (temp[i].hora >= 0) break;
            else{
                puts("Insira uma hora valida. Por favor!");
            }
        }
        while(1){
            printf("minutos: ");
            scanf("%d", &temp[i].minuto);
            if (temp[i].minuto >= 0 && temp[i].minuto < 60) break;
            else{
                puts("Insira um minuto valido. Por favor!");
            }
        }
        while(1){
            printf("segundos: ");
            scanf("%d", &temp[i].segundo);
            if (temp[i].segundo >= 0 && temp[i].segundo < 60) break;
            else{
                puts("Insira um segundo valido. Por favor!");
            }
        }
    }
    
    ordena_vetor(temp, TAM);

    puts("Os tempos inseridos em ordem crescente.");
    for (i=0; i < TAM; i++){
        printf("Tempo %d: %02d:%02d:%02d\n", i+1, temp[i].hora, temp[i].minuto, temp[i].segundo);
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

void ordena_vetor(TEMPO vetor[], int tam){
    int i, j;
    TEMPO temp;
    for(i=0; i < tam; i++){
        for(j= i + 1; j < tam; j++){
            if(maior_tempo(vetor[i], vetor[j]) == 1){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}