#include <stdio.h>

int main() {
    char nome[20];
    int idade;
    int altura;
    char sexo;
    char estado;

    printf("Escreva seu nome: \n");
    scanf("%s", &nome);

    printf("Escreva sua idade: \n");
    scanf("%i", &idade);

    printf("Escreva sua altura: \n");
    scanf("%f", &altura);
    
    printf("Escreva seu sexo: \n");
    scanf("%s", &sexo);

    printf("Escreva o estado em que reside: \n");
    scanf("%s", &estado);
}

/* 

%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica. 
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.

*/