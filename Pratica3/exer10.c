#include <stdio.h>

int main(void) {
    int segundo, minuto, hora;

    scanf("%d", &segundo);

    minuto = segundo / 60;
    segundo %= 60;
    hora = minuto / 60;
    minuto %= 60;
    
    printf("%d:%d:%d\n", hora, minuto, segundo);
    return 0;
}