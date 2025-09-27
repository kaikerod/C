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

    // ** Navio 1 (Horizontal) **
    int navio1_linha = 2;
    int navio1_coluna = 3;


    if ((navio1_coluna + TAMANHO_NAVIO) <= TAMANHO_TABULEIRO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[navio1_linha][navio1_coluna + i] = NAVIO;
        }
    }


    // ** Navio 2 (Vertical) **
    int navio2_linha = 4;
    int navio2_coluna = 5;
    bool sobreposicao = false;

 
    if ((navio2_linha + TAMANHO_NAVIO) <= TAMANHO_TABULEIRO) {

        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[navio2_linha + i][navio2_coluna] == NAVIO) {
                sobreposicao = true;
            }
        }


        if (!sobreposicao) {

            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[navio2_linha + i][navio2_coluna] = NAVIO;
            }
        }
    }

    int inicio_diag_principal = 1;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int pos = inicio_diag_principal + i;
        // Verifica se a posição está dentro do tabuleiro
        if (pos < TAMANHO_TABULEIRO) {
            tabuleiro[pos][pos] = NAVIO;
        }
    }

    int inicio_linha_sec = 0;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int linha = inicio_linha_sec + i;

        int coluna = (TAMANHO_TABULEIRO - 1) - linha;
        
        if (linha < TAMANHO_TABULEIRO && coluna >= 0) {
            tabuleiro[linha][coluna] = NAVIO;
        }
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