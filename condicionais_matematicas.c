#include <stdlib.h>
#include <stdio.h>

int main() {
    // definindo variaveis
    int a = 5, b = 10, c = 15;
    char d = 'x';

    // Maior
    if (a > 2) {
        printf("\n%d eh maior que 2", a);
    }

    // maior ou igual
    if (c >= b) {
        printf("\n%d eh maior ou igual a %d", c, b);
    }

    // menor
    if (a < 10) {
        printf("\n%d eh menor que 10", a);
    }

    // menor ou igual a
    if (c <= b) {
        printf("\n%d eh menor ou igual a %d", c, b);
    }

    // diferente
    if (c != 10) {
        printf("\n%d nao eh 10", c); // comparador de diferente
    }

    if (d != 'a') {
        printf("\n%c nao eh a", d);
    }

    // pausa o sistema
    printf("\nPressione Enter para continuar...");
    getchar(); // Pausa o programa até que o usuário pressione Enter

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}