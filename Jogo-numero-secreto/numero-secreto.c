#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, numeroSecreto;
    int tentativas = 1;
    srand(time(0));

    printf("====Bem-vindo ao jogo do número secreto====\n");
    printf("Sua missão neste jogo é acertar o número secreto em 4 tentativas\n");
    printf("Escolha um número de 1 a 10: ");
    scanf("%d", &escolhaJogador);

    numeroSecreto = rand() % 10 + 1;


    for (escolhaJogador; escolhaJogador != numeroSecreto; tentativas++) {

        if (escolhaJogador <= 0) {
        printf("Número inválido!");
        break;
        } else if (escolhaJogador > numeroSecreto) {
            printf("O número é menor! \n");
            scanf("%d", &escolhaJogador);
        } else if (escolhaJogador < numeroSecreto){
            printf("O número é maior! \n");
            scanf("%d", &escolhaJogador);
        } 

        if (escolhaJogador == numeroSecreto) {
            printf("Você acertou com %d tentativas! :)", tentativas);
        }

        if (tentativas == 3) {
            printf("Seu número de tentativas acabou :(");
            break;
        }
    }

    return 0;
}