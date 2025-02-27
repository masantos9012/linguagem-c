
#include <stdio.h>
#include <stdlib.h>

int main() { // função principal do programa
    // printf("\n hello world!  ");

    // definindo variaveis
    int a = 4, opcao = 1; // um simbolo de  "="  significa atribuição
    float b = 2.5;
    char c = 'x';

    // condicional simples
    // dois simbolos de  " == " significa comparação
    if (a == 5) {
        printf("\n a variavel a = 5  ");
    }

    if (b == 2.5) {
        printf("\n a variavel b = 2.5 ");
    }

    if (c == 'x') {
        printf("\n a variavel c = letra x  ");
    }

    // identificar numero par ou impar
    if (a % 2 == 1) {
        printf("\n A variavel a eh impar  ");
    } else {
        printf("\n A variavel a eh par  ");
    }

    // condicional composta
    if (opcao == 1) {
        printf("\n A opcao == 1 ");
    } else if (opcao == 2) {
        printf("\n A opcao == 2 ");
    } else {
        printf("\n A opcao nao eh igual a 1 e nem 2... ");
    }

    // pausa o sistema apos a execução
    printf("\nPressione Enter para continuar...");
    getchar(); // Pausa o programa até que o usuário pressione Enter

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
