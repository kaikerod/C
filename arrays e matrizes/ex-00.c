#include <stdio.h>

int main() {

    int idade[10];

    printf("Informe 10 idades: ");
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &idade[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d \n", idade[i]);
    }
}