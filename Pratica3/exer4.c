#include <stdio.h>

int main(void) {
    double A, B, media;
    
    scanf("%lf", &A);
    scanf("%lf", &B);

    media = (A * 3.5 + B * 7.5) / 11;

    printf("MEDIA = %.5lf\n", media);
    return 0;
}