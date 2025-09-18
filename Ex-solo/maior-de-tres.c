#include <stdio.h>

int main() {
    int numero1 = 0, numero2 = 0, numero3 = 0;

    printf("Digite 3 números inteiros e direi qual deles é o maior:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);

    // 1. Verifica corretamente se algum dos números é negativo.
    if (numero1 < 0 || numero2 < 0 || numero3 < 0) {
        printf("Valor inválido, apenas números positivos são aceitos. Tente novamente!\n");
    
    // 2. Lógica completa para encontrar o maior número
    } else if (numero1 >= numero2 && numero1 >= numero3) {
        // Se numero1 for maior ou igual aos outros dois, ele é o maior.
        printf("O maior número é: %d\n", numero1);
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        // Se não for o primeiro, verifica se o segundo é o maior.
        printf("O maior número é: %d\n", numero2);
    } else {
        // Se não for nem o primeiro nem o segundo, só pode ser o terceiro.
        printf("O maior número é: %d\n", numero3);
    }

    return 0;
}