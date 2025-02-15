#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main (){
    //definindo variaveis
    int a = 6, b = 3;
    //soma
    printf("\n a soma de %d e %d é = %d ",a,b,a +b); //pega os valores de a e b e soma utilizando o %d.
    //subtração
    printf("\n a subtracao de %d e %d é = %d ",a,b, a-b); // \n pula uma linha
    //divisão
    printf("\n a divisao de %d e %d é =%d ",a,b,a/b);
    //multiplicação
    printf("\n a multiplicacao de %d e %d é = %d ",a,b,a*b);
    //resto da divisao
    printf("\n o resto da divisao entre %d e %d é = %d ",a,b,a%b);
    //valor absoluto
    printf("\n o valor absoluto de -3 = %d " , abs(-3));

//pausar o sistema
    system("pause");

}
