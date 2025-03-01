#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{

    // parte feita para alimentar o random,ou seja, o que gerara numeros aleatorios
    srand((unsigned)time(NULL));

    // variavel que recebe o resto da divisao do numero por 3
    int aleatorio = rand();

    //variavel que recebe numero da divisao do numero por 5
    int aleatorioSegundo = (rand()%5)+1;

    // imprime o valor
    printf("%d", aleatorioSegundo);

    getchar();

    return 0;
}