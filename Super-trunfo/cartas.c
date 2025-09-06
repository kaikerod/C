#include <stdio.h>

int main() {


    char nome_carta1[50] = "Brasil";
    int populacao_carta1 = 215000000;
    float area_carta1 = 8510000.0;
    float pib_carta1 = 1.8;


    char nome_carta2[50] = "Argentina";
    int populacao_carta2 = 45000000;
    float area_carta2 = 2780000.0;
    float pib_carta2 = 0.5;


    int escolhaDoJogador;


    printf("--- JOGO SUPER TRUNFO ---\n\n");
    printf("Carta 1: %s\n", nome_carta1);
    printf("Carta 2: %s\n\n", nome_carta2);

    printf("Qual atributo voce quer comparar?\n");
    printf("1 - Populacao\n");
    printf("2 - Area (em km2)\n");
    printf("3 - PIB (em trilhoes de USD)\n");
    printf("Digite o numero da sua escolha: ");

    scanf("%d", &escolhaDoJogador);
    printf("\n--------------------------------\n");



    if (escolhaDoJogador == 1) {
        printf("Comparando por: Populacao\n");
        printf("%s tem %d habitantes.\n", nome_carta1, populacao_carta1);
        printf("%s tem %d habitantes.\n\n", nome_carta2, populacao_carta2);


        if (populacao_carta1 > populacao_carta2) {
            printf("VENCEDOR: %s!\n", nome_carta1);
        } else if (populacao_carta2 > populacao_carta1) {
            printf("VENCEDOR: %s!\n", nome_carta2);
        } else {
            printf("RESULTADO: Empate!\n");
        }
    }
    else if (escolhaDoJogador == 2) {
        printf("Comparando por: Area\n");
        printf("%s tem %.2f km2.\n", nome_carta1, area_carta1);
        printf("%s tem %.2f km2.\n\n", nome_carta2, area_carta2);

        if (area_carta1 > area_carta2) {
            printf("VENCEDOR: %s!\n", nome_carta1);
        } else if (area_carta2 > area_carta1) {
            printf("VENCEDOR: %s!\n", nome_carta2);
        } else {
            printf("RESULTADO: Empate!\n");
        }
    }
    else if (escolhaDoJogador == 3) {
        printf("Comparando por: PIB\n");
        printf("%s tem PIB de %.2f trilhoes de USD.\n", nome_carta1, pib_carta1);
        printf("%s tem PIB de %.2f trilhoes de USD.\n\n", nome_carta2, pib_carta2);

        if (pib_carta1 > pib_carta2) {
            printf("VENCEDOR: %s!\n", nome_carta1);
        } else if (pib_carta2 > pib_carta1) {
            printf("VENCEDOR: %s!\n", nome_carta2);
        } else {
            printf("RESULTADO: Empate!\n");
        }
    }
    else {
        printf("Opcao invalida! Por favor, reinicie o programa e escolha uma opcao valida.\n");
    }

    printf("--------------------------------\n");

    return 0;
}