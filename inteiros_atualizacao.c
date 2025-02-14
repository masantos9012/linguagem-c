#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 50;
    printf("a = %d\n", a); // %d função para numeros inteiros

    printf("Digite um novo valor para a: ");
    if (scanf("%d", &a) != 1) { // scanf le os dados,porem,não exibe na tela
        printf("Erro ao ler o valor de a.\n"); 
        return 1; // Retorna 1 para indicar erro
    }
    printf("O valor de a mudou para %d\n", a);

    float b = 5.5;
    printf("O valor de b é = %.2f\n", b); // %.2f imprime na tela  numeros com duas casas decimais

    printf("Digite um novo valor para b: ");
    if (scanf("%f", &b) != 1) { // %f função para numeros flutuantes
        printf("Erro ao ler o valor de b.\n");
        return 1; // Retorna 1 para indicar erro
    }
    printf("O valor de b mudou para %.2f\n", b);

    return 0; // Retorna 0 para indicar sucesso
}
