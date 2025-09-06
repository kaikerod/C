#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("======Jogo de jokenpo======\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    //======ESCOLHA USUÁRIO======

    switch (escolhaJogador) {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    
    case 2:
        printf("Jogador: Papel - ");
        break;

    case 3:
        printf("Jogador: Tesoura - ");
        break;


    default:
        printf("Opção inválida! Por favor, escolha 1, 2 ou 3.\n");
        return 1; // Encerra o programa se a opção for inválida
    }

    //======ESCOLHA COMPUTADOR======

    switch (escolhaComputador) {
    case 1:
        printf("Computador: Pedra\n");
        break;
    
    case 2:
        printf("Computador: Papel\n");
        break;

    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (escolhaJogador == escolhaComputador) {
        printf("======Empate!======\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3) || (escolhaJogador == 2) && (escolhaComputador == 1) || (escolhaJogador == 3) && (escolhaComputador == 2)) {
        printf("======O Jogador venceu!======\n");
    } else {
        printf("======Você perdeu :( ======\n");
    }

    return 0;
}
