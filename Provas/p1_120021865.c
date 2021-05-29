/*Sylviane Oliveira*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define VALOR_INGRESSO 20.0

int main(void){

    int i, j, k, m, n, sala, ingresso, n_meia_entrada, carteira_estudante, carteira_estudante_valida;
    int alg_estudante_1, alg_estudante_2, alg_estudante_3, alg_estudante_4, alg_estudante_5;
    int soma_alg_estudante, cartao, cartao_valido;
    int n_cartao_bradau, aux;
    float lista_ingressos[400], soma;
    int lista_carteira_usada[400], lista_cartao_usado[400];


    while(true){
        printf("Por favor! Insira o numero da sala do filme em cartaz que voce deseja asssistir ou 0 para sair: ");
        scanf("%d", &sala);
        printf("\n");
        if (sala == 0){
            exit (0);
        }
        else if(sala == 1 || sala == 2 || sala == 3){
            while(true){
               printf("Por favor! Digite a quantidade de ingressos que deseja comprar: ");
               scanf("%d", &ingresso);
               printf("\n");
               if (ingresso > 0 && ingresso <= 400){
                   for(n =0; n < ingresso; n++){
               lista_ingressos[n] = VALOR_INGRESSO;
                }
                   while(true){
                        printf("Quantos ingressos sao meia-entrada? ");
                        scanf("%d", &n_meia_entrada);
                        printf("\n");
                        if (n_meia_entrada >= 0 && n_meia_entrada <= ingresso){
                            for(i=1; i <= n_meia_entrada; i++){
                                carteira_estudante_valida = 0;
                                k = 0;
                                while(carteira_estudante_valida == 0){
                                    printf("Insira o numero da carteira de estudante %d: ", i);
                                    scanf("%d", &carteira_estudante);
                                    printf("\n");
                                    if(carteira_estudante == 0){
                                        n_meia_entrada -= 1;
                                        carteira_estudante_valida = 1;
                                    }
                                    
                                    alg_estudante_1 = carteira_estudante / 10000;
                                    alg_estudante_2 = (carteira_estudante / 1000) % 10;
                                    alg_estudante_3 = (carteira_estudante / 100) % 10;
                                    alg_estudante_4 = (carteira_estudante / 10) % 10;
                                    alg_estudante_5 = carteira_estudante % 10; 

                                    soma_alg_estudante = alg_estudante_1 + alg_estudante_2 + alg_estudante_3 + alg_estudante_4;
                                    
                                    if (soma_alg_estudante % 10 == alg_estudante_5){
                                        carteira_estudante_valida = 1;
                                        for (j=0; j < k; j++){
                                            if (carteira_estudante == lista_carteira_usada[j]){
                                                carteira_estudante_valida = 0;
                                            }
                                        }
                                            if(carteira_estudante_valida == 1){
                                                lista_ingressos[i-1] = VALOR_INGRESSO * 0.5;
                                                lista_carteira_usada[k] = carteira_estudante;
                                                k++;
                                            }
                                            else{
                                                printf("Esta carteira ja foi usada\n");
                                            }

                                    }
                                    else{
                                        printf("Insira um numero de carteira de estudante valido ou digite 0 para cancelar a meia deste ingresso.\n");
                                    }
                                }
                                
                            }

                            break;
                        }
                        else{
                            printf("O numero de ingressos meia-entrada inserido eh invalido.\n");
                        }
                   }

                   while(true){
                        printf("Quantos ingressos sao meia cartao Bradau? ");
                        scanf("%d", &n_cartao_bradau);
                        printf("\n");
                        if (n_cartao_bradau >= 0 && n_cartao_bradau <= ingresso){
                            aux = i;
                            for(; i <= n_cartao_bradau + aux; i++){
                                cartao_valido = 0;
                                k = 0;
                                while(cartao_valido == 0){
                                    printf("Insira o numero do cartao Bradau %d: ", i);
                                    scanf("%d", &cartao);
                                    printf("\n");
                                    if(cartao == 0){
                                        n_cartao_bradau -= 1;
                                        cartao_valido = 1;
                                    }
                                    else if((cartao % 237 == 0) && (cartao % 341 == 0)){
                                        cartao_valido = 1;
                                        for (j=0; j < k; j++){
                                            if (cartao == lista_cartao_usado[j]){
                                                cartao_valido = 0;
                                            }
                                        }
                                        if(cartao_valido == 1){
                                            lista_ingressos[i-1] = VALOR_INGRESSO * 0.3;
                                            lista_carteira_usada[k] = carteira_estudante;
                                            k++;
                                        }
                                        else{
                                            printf("Este cartao ja foi usado\n");
                                        }

                                    }
                                    else{
                                        printf("Insira um numero de cartao bradau valido ou digite 0 para cancelar o desconto deste ingresso.\n");
                                    }
                                }
                                
                            }

                            break;
                        }
                        else{
                            printf("O numero de ingressos meia-entrada inserido eh invalido.\n");
                        }
                   }
               }
               else{
                   printf("A quantidade digitada nao esta disponivel.\n");
               
               }
               break;
           } 

           soma = 0;
           for(m=0; m < ingresso; m++){
               soma += lista_ingressos[m];
           }
           printf("O valor total dos ingressos eh de %.2f reais.\n", soma);
        }
        else{
            printf("O numero de sala digitado e invalido.\n");
        }
            
    }
    return 0;
}