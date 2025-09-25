#include <stdio.h>

int main() {
    float preco, pago, troco; // valores do produto e dinheiro do cliente
   

    printf("=== Calculadora de Troco ===\n\n");

    // passo 1: perguntar o preco do produto
    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    // passo 2: perguntar o valor que o cliente pagou
    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%f", &pago);

    // passo 3: calcular o troco
    troco = pago - preco;

    if(troco < 0) {
        // se o cliente nao deu dinheiro suficiente
        printf("\nDinheiro insuficiente! Faltam R$ %.2f\n", -troco);
    } else if(troco == 0) {
        // se o cliente pagou exatamente
        printf("\nPagamento exato, nao ha troco!\n");
    } else {
        // se houver troco
        printf("\nTroco a ser devolvido: R$ %.2f\n", troco);

        // converter para centavos pra facilitar as contas
        int trocoCentavos = (int)(troco * 100 + 0.5); // somando 0.5 pra arredondar



    return 0; // fim do programa
    //é um pouco mais complexo que no portugol mas é isso, deu pra fazer
}
525