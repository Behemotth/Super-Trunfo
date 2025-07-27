#include <stdio.h> 
int main (){

    /*
    soma (+)
    subtraçao (-)
    multiplicaçao (*)
    Divisao (/)
    */

    int n1,n2;
    int soma, subtraçao,multiplicaçao,Divisao;

    
    printf("insira o primeiro numero: \n");
    scanf("%d",&n1);
 
    printf("insira o segundo numero:\n");
    scanf("%d",&n2);


  //operaão soma
    soma = n1 + n2;

    //operação subtraçao
    subtraçao = n1 - n2;  

    //operaçao multiplicaçao
    multiplicaçao = n1 * n2;

    //operacao divisao
    Divisao = n1 / n2;

 printf("a Soma e: %d:\n", soma);
  printf("a Subraçao e: %d:\n", subtraçao);
   printf("a Divisao e: %d:\n", Divisao);
    printf("a multiplicacao e: %d:\n", multiplicaçao);
}

  