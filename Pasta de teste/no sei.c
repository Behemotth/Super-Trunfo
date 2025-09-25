#include <stdio.h>

int main() {
    char produtoA[30] = "Arroz", produtoB[30] = "Feijao"; // nome do produto,
    unsigned int quantidadeA = 1200, quantidadeB = 1200; // em estoque
    float precoA = 20.0, precoB = 8.0; // em R$
    unsigned int quantidademinimaA = 530, quantidademinimaB = 2300; //definindo a quantidade minima
    double valortotalA; 
    double valortotalB; 

    int resultadoA, resultadoB;
    
    //informaçoes dos produtos
    printf("Produto A: %s\n tem estoque de %d unidades\n preco unitario de R$ %.2f\n quantidade minima de estoque: %d unidades\n\n", 
        produtoA, quantidadeA, precoA, quantidademinimaA);
    
    printf("Produto B: %s\n tem estoque de %d unidades\n preco unitario de R$ %.2f\n quantidade minima de estoque: %d unidades\n\n", 
        produtoB, quantidadeB, precoB, quantidademinimaB);

resultadoA = quantidadeA > quantidademinimaA;
resultadoB = quantidadeB > quantidademinimaB;
    //comparando os produtos
    valortotalA = quantidadeA > quantidademinimaA;
     printf("O produto %s tem estoque acima do minimo? %d\n",produtoA,resultadoA);
    valortotalB = (quantidadeB > quantidademinimaB);
    printf("O produto %s tem estoque acima do minimo? %d\n",produtoB, resultadoB);
    
    //comparando o valor total do estoque  
 
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$%.2f)?%d",
         quantidadeA * precoA, quantidadeB * precoB, 
        (quantidadeA * precoA) > (quantidadeB * precoB));
  printf("\n\n");
    return 0;
}