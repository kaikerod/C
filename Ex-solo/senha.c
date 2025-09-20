#include <stdio.h>

int main() {
    int senhaCorreta = 1234;
    int inputSenha;
    int tentativasRestantes = 3;
    int acertou = 0; // Usaremos uma "flag" para saber se o usuário acertou

    // O laço 'while' continuará enquanto houver tentativas
    while (tentativasRestantes > 0) {
        printf("Digite sua senha de 4 dígitos (%d tentativa(s) restante(s)): ", tentativasRestantes);
        scanf("%d", &inputSenha);

        // Verifica se a senha está correta
        if (inputSenha == senhaCorreta) {
            printf("\nSenha correta!\n");
            acertou = 1; // Marca que o usuário acertou
            break;       // Sai do laço imediatamente
        } else {
            printf("Senha incorreta.\n\n");
            tentativasRestantes--; // Decrementa as tentativas apenas se errar
        }
    }

    // Verifica o resultado final após o laço
    if (acertou) {
        printf("Acesso liberado!\n");
    } else {
        printf("Você excedeu o número de tentativas. Acesso bloqueado.\n");
    }

    return 0;
}