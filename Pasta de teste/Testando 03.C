  #include <stdio.h>
  
  int main (){
    int n1 = 2, resultado;
     
    // o ++ e o -- sao operadores de incremento e decremento, respectivamente.
    // eles podem ser usados antes ou depois da variavel.

    printf("antes do incremento: %d \n", n1);
    n1++;
    printf("depois do incremento: %d \n", n1);

    printf("antes do decremento: %d \n", n1);
    n1++;
    printf("depois do decremento: %d \n", --n1);
    resultado = n1 ++;
      printf("apos Pos incremento:%d - n1: %d - resultado:%d\n ",n1, resultado);
      
  }