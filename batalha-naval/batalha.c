#include <stdio.h>
#include <stdbool.h> // Preciso disso para usar true e false

// Usar #define é uma boa ideia para não ter que lembrar os números
// Assim eu posso só escrever TAMANHO_TABULEIRO em vez de 10 toda vez
#define TAMANHO_TABULEIRO 10
#define AGUA 0
#define NAVIO 3
#define TAMANHO_NAVIO 3

int main() {

    // --- Criando o Tabuleiro ---
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];


    // --- Preenchendo o Tabuleiro com Água ---
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            // Coloco 0 (AGUA) em cada posição.
            tabuleiro[i][j] = AGUA;
        }
    }


    // --- Posicionando os Navios ---

    // ** Navio em formato de Cruz **
    int cruz_linha_centro = 5;
    int cruz_coluna_centro = 5;

    if (cruz_linha_centro > 0 && cruz_linha_centro < TAMANHO_TABULEIRO - 1 &&
        cruz_coluna_centro > 0 && cruz_coluna_centro < TAMANHO_TABULEIRO - 1) {
        tabuleiro[cruz_linha_centro][cruz_coluna_centro] = NAVIO; // Centro
        tabuleiro[cruz_linha_centro - 1][cruz_coluna_centro] = NAVIO; // Cima
        tabuleiro[cruz_linha_centro + 1][cruz_coluna_centro] = NAVIO; // Baixo
        tabuleiro[cruz_linha_centro][cruz_coluna_centro - 1] = NAVIO; // Esquerda
        tabuleiro[cruz_linha_centro][cruz_coluna_centro + 1] = NAVIO; // Direita
    }

    // ** Navio em formato de Cone **
    int cone_linha_topo = 7;
    int cone_coluna_topo = 2;

    if (cone_linha_topo + 1 < TAMANHO_TABULEIRO &&
        cone_coluna_topo > 0 && cone_coluna_topo < TAMANHO_TABULEIRO - 1) {
        tabuleiro[cone_linha_topo][cone_coluna_topo] = NAVIO; // Topo do cone
        tabuleiro[cone_linha_topo + 1][cone_coluna_topo - 1] = NAVIO; // Base esquerda
        tabuleiro[cone_linha_topo + 1][cone_coluna_topo] = NAVIO; // Base centro
        tabuleiro[cone_linha_topo + 1][cone_coluna_topo + 1] = NAVIO; // Base direita
    }

    // ** Navio em formato de Octaedro (Losango) **
    int octa_linha_topo = 1;
    int octa_coluna_meio = 7;

    if (octa_linha_topo + 2 < TAMANHO_TABULEIRO &&
        octa_coluna_meio > 0 && octa_coluna_meio < TAMANHO_TABULEIRO - 1) {
        tabuleiro[octa_linha_topo][octa_coluna_meio] = NAVIO; // Ponto de cima
        tabuleiro[octa_linha_topo + 1][octa_coluna_meio - 1] = NAVIO; // Meio esquerda
        tabuleiro[octa_linha_topo + 1][octa_coluna_meio + 1] = NAVIO; // Meio direita
        tabuleiro[octa_linha_topo + 2][octa_coluna_meio] = NAVIO; // Ponto de baixo
    }


    
    printf("Tabuleiro do Batalha Naval:\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
 
        printf("\n");
    }

    return 0;
}
