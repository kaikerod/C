#include <stdio.h>

int main() {
    char nome[20];
    int idade, matricula;
    int altura;
    char estado;

    printf("Escreva seu nome: \n");
    scanf("%s", nome);

    printf("Escreva sua idade: \n");
    scanf("%d", &idade);

    printf("Escreva sua altura: \n");
    scanf("%f", &altura);
    
    printf("Escreva sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Escreva o estado em que reside: \n");
    scanf("%s", estado);
}

/* 

%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica. 
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.

*/