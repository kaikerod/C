#include <stdio.h>

int main() {

    int ano;

    printf("Insira um ano e direi se ele é bissexto: ");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        printf("O ano é bissexto!");
    } else {
        printf("O ano é não bissexto!");
    }
}