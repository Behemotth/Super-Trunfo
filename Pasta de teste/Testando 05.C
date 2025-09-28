#include <stdio.h>

float temperatura, umidade;  
unsigned int estoque, estoqueminimo = 1000;  

int main() {
    int resultado; 
   printf("Entre com a temperatura: ");  
   scanf("%f", &temperatura);  
   printf("Entre com a umidade: ");  
   scanf("%f", &umidade);  
   printf("Entre com o estoque atual: ");  
   scanf("%u", &estoque);

   if (temperatura > 30.0) {
    printf("Temperatura alta! \n");
  } 
  else {
    printf("Temperatura normal! \n");
   }
  
    if (umidade > 50) {
    printf("Umidade elevada! \n");
    } 
    else {
    printf("Umidade normal! \n"); 
    }

    if (estoque < estoqueminimo) {
      printf("Estoque abaixo do nivel minimo \n");  
    }
    else {
    printf("Estoque Normal!\n");
    }
    
  return 0;

}