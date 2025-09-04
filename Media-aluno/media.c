#include <stdio.h>

int main() {
    float nota1;
    float nota2;
    float media;

    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A média das suas notas é de: %f\n", media);
}