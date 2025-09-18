#include <stdio.h>

int main() {

    int altura, largura;

    printf("Digite o valor da altura: ");
    scanf("%d", &altura);

    printf("Digite o valor da largura: ");
    scanf("%d", &altura);

    for (int i = 0; i <= altura; i++) {
        for (int j = 0; j <= largura; j++) {
            printf("* ");
        }
        printf(" \n");
    }
}