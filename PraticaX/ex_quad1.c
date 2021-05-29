#include <stdio.h>

int main(void) {

    int ordem, auxiliar, inicio, camada, i, j;

    do{
        scanf("%d", &ordem);

        int matriz[ordem][ordem];
        auxiliar = ordem;
        ordem -= 1;
        for(i=0; i < auxiliar; i++){
            inicio = 0;
            camada = 1;
	        for(j=0; i < auxiliar; j++){
                matriz[inicio][ordem] = camada;
                matriz[i][inicio] = camada;
                matriz[ordem][ordem] = camada;
                matriz[i][ordem] = camada;
            }
            ordem -= 1;
            inicio += 1;
            camada += 1;
        }

        for(i=0; i < auxiliar; i++){
	        for(j=0; i < auxiliar; j++){
                printf("   %d", matriz[i][j]);
    }
    while (ordem != 0);
    
    
  x   x   x   x   x
  x   2   2   2   x
  x   2   3   2   x
  x   2   2   2   x
  x   x   x   x   x

inicio = 0
camada = x
x = 1
y = 1
ordem -= 1 
    primeira vez:

    matriz [inicio][j] = camada
    matriz [i][inicio] = camada
    matriz [ordem][j] = camada
    matriz [i][ordem] = camada

x + 2
    outras vezes:
    
    matriz [inicio + x][j + x] = camada + y
    matriz [i + x][inicio + x] = camada + y
    matriz [ordem + x][j + x] = camada + y
    matriz [i + x][ordem + x] = camada + y



    return 0;
}