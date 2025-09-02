#include <stdio.h>

int main() {
    int idade;
    float altura;
    char nome[10] = "Kaike";

    printf("Digite a sua idade: \n");
    scanf("%d", &idade); //colocar & antes da variável, menos string
    
    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

}

/* 

%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica. 
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.

*/