#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois números: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O numero 1 é maior");
    } else {
        printf("O numero 2 é maior");
    }
}