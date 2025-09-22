#include <stdio.h>

int main() {

    float imc = 0, peso = 0, altura = 0;

    printf("Digite seu peso (kg) e altura (m) para calcular seu IMC: ");
    scanf("%f", &peso);
    scanf("%f", &altura);

    imc = peso / altura;

    
    return 0;
}