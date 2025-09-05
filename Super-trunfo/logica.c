#include <stdio.h>
#include <string.h>


struct CartaSuperTrunfo {
    char estado[50];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};


void cadastrarCarta(struct CartaSuperTrunfo *carta, int numeroDaCarta) {
    printf("\n--- Cadastro da Carta %d ---\n", numeroDaCarta);

    printf("Digite o estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Digite o código da carta (ex: A1): ");
    scanf(" %[^\n]", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &carta->area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

int main() {
 
    struct CartaSuperTrunfo carta1, carta2;

    cadastrarCarta(&carta1, 1);
    cadastrarCarta(&carta2, 2);


    float densidade1 = (float)carta1.populacao / carta1.area;
    float pib_per_capita1 = (carta1.pib * 1000000000) / carta1.populacao; 

    float densidade2 = (float)carta2.populacao / carta2.area;
    float pib_per_capita2 = (carta2.pib * 1000000000) / carta2.populacao;

  
    printf("\n\n--- Cartas Cadastradas ---\n");
    printf("Carta 1: %s (%s)\n", carta1.nomeCidade, carta1.estado);
    printf("  - Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("  - PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("\nCarta 2: %s (%s)\n", carta2.nomeCidade, carta2.estado);
    printf("  - Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("  - PIB per capita: R$ %.2f\n", pib_per_capita2);


 
    printf("\n\n--- Resultado da Comparação ---\n");

    printf("Atributo de comparação: População\n");
    printf("Carta 1 (%s): %d habitantes\n", carta1.nomeCidade, carta1.populacao);
    printf("Carta 2 (%s): %d habitantes\n", carta2.nomeCidade, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("\nRESULTADO: A CARTA 1 (%s) VENCEU!\n", carta1.nomeCidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nRESULTADO: A CARTA 2 (%s) VENCEU!\n", carta2.nomeCidade);
    } else {
        printf("\nRESULTADO: HOUVE UM EMPATE!\n");
    }

    return 0;
}