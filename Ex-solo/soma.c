#include <stdio.h>

int main() {

    int userNum, i;

    printf("Insira um número inteiro: ");
    scanf("%d", &userNum);

    while (i < userNum) {
        i + 1;
        printf(".");
    }
}