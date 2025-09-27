// O Desafio:

// Imagine que você tem o seguinte vetor já preenchido com alguns números:

// int numeros[] = {5, 10, 15, 20};

// O seu desafio é: escrever um pequeno trecho de código que calcule a soma de todos os números dentro desse vetor e, no final, imprima o resultado.

// (Para o vetor acima, o resultado correto a ser impresso seria 50).

// Dicas para te ajudar:

// Você vai precisar de uma variável extra para "acumular" a soma. Que tal começar ela com o valor zero? Ex: int soma = 0;

// Dentro de um laço for que percorre o vetor, a cada volta, você precisa pegar o elemento atual (numeros[i]) e adicioná-lo à sua variável soma.

#include <stdio.h>

int main() {

    // O vetor que já temos
    int numeros[] = {5, 10, 15, 20};

    // 1. Variável para guardar o resultado, começando em zero
    int soma = 0;
    int i;

    // 2. Laço para visitar cada posição (de 0 a 3)
    for (i = 0; i < 4; i++) {
        // 3. A cada volta, adiciona o número da posição atual à soma
        soma = soma + numeros[i];
    }

    // 4. DEPOIS que o laço terminar, mostra o resultado final
    printf("A soma total é: %d", soma);

return 0;
}