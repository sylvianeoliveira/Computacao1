#include <stdio.h>

int main(void){
    float temperatura_celsius = 30, temperatura_fahrenheit;
    temperatura_fahrenheit = (9 * temperatura_celsius) / 5 + 32;
    printf("Temperatura: %f graus Fahrenheit", temperatura_fahrenheit);
    return 0;
}