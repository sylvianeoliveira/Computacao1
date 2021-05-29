#include <stdio.h>

double pi(int termos);

int main(void){
    int n_termos;
    scanf("%d", &n_termos);
    printf("O valor de pi aproximado pela serie com %d termos eh de: %.8lf.\n", n_termos, pi(n_termos));

    return 0;
}

double pi(int termos){
    int i;
    double x_impar = 1, soma=0;
    for(i=0; i < termos; i++){
        if (i % 2 == 0){
            soma += 1/x_impar;
        }
        else{
            soma -= 1/x_impar;
        }
        x_impar += 2;
    }
    
    return soma * 4.0;
}