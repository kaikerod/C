#include <stdio.h>

int min() {
    int opcao;
    float nota1, nota2, media;

    printf("=====Menu de Gerenciamento de Estudantes=====\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma Opção");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: printf("Calcular a Média\n");
        break;
    case 2: printf("Determinar Status\n");
        break;
    case 3: printf("Sair\n");
        break;
    
    default: printf("Opção inválida!");
        break;
    }
    
    return 0;
}