#include <stdio.h>
#define pi 3.14159

int main(void){
    float volume_esfera, raio = 5;
    volume_esfera = (4 * pi * raio * raio * raio) / 3;
    printf("Volume da esfera: %f u.v.", volume_esfera);
    return 0;
}