#include <stdio.h>

int main() {

    int saldo = 1000;
    int escolhaUsuario, valorSaque, valorDeposito;

    printf("=====Seja bem-vindo(a) ao caixa eletrônico===== \n");
    printf("O que deseja fazer?: \n");
    printf("1. Saque \n");
    printf("2. Depósito \n");
    printf("3. Consultar saldo \n");
    printf("4. Sair \n");
    
    scanf("%d", &escolhaUsuario);

    switch (escolhaUsuario) {

    case 1:
        printf("=====Saque===== \n");
        printf("Digite o valor que deseja sacar: ");
        scanf("%d", &valorSaque);

        //Limita operações a 500 reais e verifica se o valor do saque é maior que o saldo.
        if (valorSaque > 500) { 
            printf("Erro! limite máximo por operações atingido!");
        } else if (saldo < valorSaque) { 
            printf("Erro! o seu saldo é insuficiente! %d", saldo);
        } else {
            saldo = saldo - valorSaque;
            printf("Você ainda tem %d disponíveis \n", saldo);
        }
        break;

    case 2:
        printf("=====Depósito===== \n");
        printf("Digite o valor que deseja depositar: ");
        scanf("%d", &valorDeposito);
        
        saldo = saldo + valorDeposito;

        printf("Seu saldo disponível é de: %d", saldo);
        break;

    case 3:
        printf("=====Consultar saldo===== \n");
        printf("Seu saldo atual é de: %d", saldo);
        break;

    case 4:
        printf("Saindo...");
        break;

    default:
        printf("\nOpção inválida! Por favor, tente novamente.\n"); 
        break;
    }

    return 0;
}