#include <stdio.h>

int main() {
    int n, soma = 0;
    
    printf("Digite um número N: ");
    scanf("%d", &n);
    
    // Loop for: mais comum quando sabemos quantas iterações fazer
    for (int i = 1; i <= n; i++) {
        soma += i;  // Equivale a: soma = soma + i
    }
    
    printf("A soma dos números de 1 até %d é: %d\n", n, soma);
    
    return 0;
}