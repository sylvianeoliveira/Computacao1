#include <stdio.h>

int main(void){
    float temperatura_celsius = 30, temperatura_kelvin;
    temperatura_kelvin = temperatura_celsius + 273.15; 
    printf("Temperatura: %f K", temperatura_kelvin);
    return 0;
}