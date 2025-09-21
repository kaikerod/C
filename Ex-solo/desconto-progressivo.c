#include <stdio.h>

int main() {

    int valorProduto = 50, quantidade = 0;

    printf("Seja bem vindo a nossa loja! \n");
    printf("Digite a quantidade de produtos que deseja levar e aplicaremos o desconto: ");
    scanf("%d", &quantidade);

    switch (quantidade) {
    case 1: 
    case 2:
    printf("Desconto não aplicável para esta quantidade!\n");
    break;
    
    case 3:
    case 4:
    case 5:
        valorProduto = valorProduto * 0.10;
        printf("Seu desconto foi de 10 porcento!");
        break;

    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        valorProduto = valorProduto * 0.15;
        printf("Seu desconto foi de 15 porcento!");  
        break;
    
    default:
        break;
    }

}