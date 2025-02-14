#include <stdio.h>
#include <stdlib.h>

int main(){

    // int   a  = 50; // valor inteiro de a
    // int b = 6; // valor inteiro de b
    // printf(" %d", a+ b ); // porcentagem d imprime valores inteiros, soma dos valores a + b;
    // "\n contrabarra n pula linha "

    int a = 50;
    printf(" o valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("o valor de a mudou para %d", a);

    float b = 5.5;                       // float, valores flutuantes ou quebrados;
    printf("o valor de b é = %f \n", b); // %f é a função para ler numeros flutuantes ou quebrados;
    scanf("%f", &b);                     // serve para ler dados,porém,diferente do printf,não imprime na tela.
    printf("o  valor de b mudou para %f \n", b);
    
}
