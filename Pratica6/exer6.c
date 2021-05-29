#include <stdio.h>

#define ALTURA 10
#define LARGURA 10

int move_esquerda(int x);
int move_direita(int x);
int move_cima(int y);
int move_baixo(int y);

int main(void){
    int px=0, py=0;
    char ordem;
    int continua = 1;

    while (continua){
        ordem = getchar();
        getchar();
        switch (ordem){
            case 'a': case 'A':
                if(px == 0) puts("Opcao invalida");
                else px = move_esquerda(px);
                break;
            case 'd': case 'D':
                if(px == LARGURA) puts("Opcao invalida");
                else px = move_direita(px);
                break;
            case 'w': case 'W':
                if(py == 0) puts("Opcao invalida");
                else py = move_cima(py);
                break;
            case 'x': case 'X':
                if(py == ALTURA) puts("Opcao invalida");
                else py = move_baixo(py);
                break;
            case 'q': case 'Q':
                continua = 0;
                break;
            default:
            puts("Opcao invalida");
        }
        printf("Estou em %d %d\n", px, py);
    }

    return 0;
}

int move_esquerda(int x){
    if(x > 0) x--;
    return x;
}
int move_direita(int x){
    if(x < LARGURA) x++;
    return x;
}
int move_cima(int y){
    if(y > 0) y--;
    return y;
}
int move_baixo(int y){
    if(y < ALTURA) y++;
    return y;
}