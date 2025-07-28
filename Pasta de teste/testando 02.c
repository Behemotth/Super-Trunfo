#include <stdio.h> 
int main (){

    /*
    atribuiçao com soma (+=)
    atribuiçao com subtraçao (-=)
    atribuiçao com multiplicaçao (*=)
    atribuiçao com Divisao (/=)
    */

    int n1,n2, resultado;

    //leva-se em consideraçao que todo o cauculo sera feito sequencialmente, 10 + 20 - 5 * 2 / 3 e no fim mostrando o resultado final.
resultado = 10;
  printf("resultado numerico: %d \n", resultado);
  //resultado = resultado + 20;
resultado += 20;
  printf("resultado apos soma: %d \n", resultado);
  //resultado = resultado - 5;
resultado -= 5; 
  printf("resultado apos subtracao: %d \n", resultado);
  //resultado = resultado * 2;
resultado *= 2;
  printf("resultado apos multiplicacao: %d \n", resultado);
  //resultado = resultado / 3;
resultado /= 3;  
  printf("resultado apos divisao: %d \n", resultado);
}