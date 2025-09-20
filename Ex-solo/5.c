#include <stdio.h>

int main() {
    int num;

    printf("Digite um número que farei uma piramide: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        
        // Loop para imprimir os NÚMEROS em cada linha
        for (int j = 1; j <= i; j++) {
            printf("%d ", j); // A mudança está aqui: imprimimos 'j' em vez de 'i'
        }
        
        // Pula para a próxima linha
        printf("\n");
    }

    return 0;
}