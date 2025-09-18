#include <stdio.h>

int main() {

    int nota;

    printf("Digite sua nota e direi sua classificação: ");
    scanf("%d", &nota);

    if (nota >= 90) {
        printf("Classificação A");
    } else if (nota > 80 && nota < 89) {
        printf("Classificação B");
    }
}