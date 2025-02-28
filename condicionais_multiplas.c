#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
void main()
{

    // Definindo variaveis
    int a = 10;

    // conectivo lógico E(AND)
    // && e comercial duas vezes representa o operador logico E(AND)
    if (a > 5 && a < 15)
    {
        printf("\n A variavel 'a' esta entre 5 e 15", a);
    }

    //conectivo lógico ou (OR)
    if (a >5 || a>15){
        printf("\n a A variavel 'a' é maior que 5 ou 15");
    }


    // misturando conectivos
    if((a > 5 && a < 15)||a == 20){
        printf("\n a A variavel 'a' esta entre 5 e 15 ou ela vale 20");
    }
    // pausa o programa apos executar
    getchar();

    return 0;
}