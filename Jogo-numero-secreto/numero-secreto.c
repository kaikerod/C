#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, numeroSecreto;
    srand(time(0));

    printf("====Bem-vindo ao jogo do número secreto====\n");
    printf("Sua missão neste jogo é acertar o número secreto em 3 tentativas\n");
    printf("Escolha um número de 1 a 10: ");
    scanf("%d", &escolhaJogador);

    numeroSecreto = rand() % 10 + 1;

    //Verifica se o número é válido
    if (escolhaJogador < 0) {
        printf("Número inválido!\n");
    } else {
        while (escolhaJogador != numeroSecreto) {
            printf("Incorreto, tente novamente: ");
            scanf("%d", &escolhaJogador);
        }
        printf("Você acertou! :)");
    }
    return 0;
}