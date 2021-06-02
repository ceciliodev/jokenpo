#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pedra,papel,tesoura
    char player1[256];
    char player2[256];

    printf("\n Player 1 , sua vez...\n");
    scanf("%s",&player1);

    printf("\n Player 2 , sua vez...\n");
    scanf("%s",&player2);

                        printf("Estou calculando o resultado do jogo...\n");
                        if(strcmp(player1,"papel") == 0) {
                                if(strcmp(player2,"papel") == 0) {
                                        printf("empate...");
                                }else if (strcmp (player2,"tesoura") == 0){
                                        printf("player 2 ganhou , por que tesoura corta papel!...");
                                }else if(strcmp(player2,"pedra") == 0){
                                        printf("player 2 perdeu, por que papel embrulha a pedra...");
                                }else{
                                        printf("player 2 jogou uma informação invalida!");
                                }

                    }else if (strcmp(player1,"tesoura") == 0) {
                            if(strcmp(player2,"papel") == 0) {
                                printf("player 2 perdeu por que tesoura corta papel!");
                            }else if(strcmp(player2,"tesoura") == 0){
                                printf("empate");
                            }else if(strcmp(player2,"pedra") == 0){
                                printf("player 2 ganhou, por que pedra esmaga tesoura");
                            }else{
                                printf("o player 2 jogou uma informação invalida");
                            }
            }else if (strcmp(player1,"pedra") == 0)
                           if(strcmp(player2,"papel") == 0) {
                        printf("player 2 ganhou por que papel embrulha pedra!");
                    }else if(strcmp(player2,"pedra") == 0){
                        printf(" empate");
                    }else if(strcmp(player2,"tesoura") == 0){
                        printf("player 2 ganhou, por que pedra esmaga tesoura");
                    }else{
                        printf("o player 2 jogou uma informação invalida");
                    }


    if(strcmp (player1,"papel") == 0){
            printf("player 1 jogou papel...");
    }else if (strcmp (player1,"tesoura") == 0 ){
             printf("player 1 jogou tesoura...");
    }else if(strcmp(player1,"pedra") == 0){
            printf("player 1 jogou pedra...");
    }else{
        printf("voce jogou uma informação invalida");
    }
    return 0;
}
