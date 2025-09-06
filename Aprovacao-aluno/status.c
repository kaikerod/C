#include <stdio.h>

int main() {
    int opcao;
    float nota1, nota2, media;

    printf("=====Menu de Gerenciamento de Estudantes=====\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: 
        // PRIMEIRA NOTA
        printf("Calcular a Média\n");
        printf("Digite a primeira nota\n");
        scanf("%f", &nota1);

        // SEGUNDA NOTA
        printf("Digite a segunda nota\n");
        scanf("%f", &nota2);

        //Testa se a nota é válida
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
            media = (nota1 + nota2) / 2;
            printf("Sua média é de: %.2f", media);
        } else {
            printf("Valor inválido!");
        }
        break;

    case 2: 
        printf("Determinar Status\n");
        printf("Coloque o valor da sua média: \n");
        scanf("%f", &media);

        if (media >= 6) {
            printf("Aprovado!\n");
        } else {
            printf("Reprovado!\n");
        }
        break;

    case 3: 
        printf("Saindo do programa...\n");
        break;
    
    default: 
        printf("Opção inválida!");
        break;
    }
    
    return 0;
}