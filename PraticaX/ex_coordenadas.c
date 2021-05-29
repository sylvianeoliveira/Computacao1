#include <stdio.h>

int main(void){

    float cord_x, cord_y;

    scanf("%f %f", &cord_x, &cord_y);

    if (cord_x > 0 && cord_y > 0){
        printf("Q1\n");
    }
    else if (cord_x < 0 && cord_y > 0){
        printf("Q2\n");
    }
    else if (cord_x < 0 && cord_y < 0){
        printf("Q3\n");
    }
    else if (cord_x > 0 && cord_y < 0){
        printf("Q4\n");
    }
    else if(cord_x == 0  && cord_y != 0){
        printf("Eixo Y\n");
    }
    else if(cord_x != 0 && cord_y == 0){
        printf("Eixo X\n");
    }
    else{
        printf("Origem\n");
    }

    return 0;
}