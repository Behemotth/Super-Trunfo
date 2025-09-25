#include <stdio.h>
#include <string.h> // preciso pra usar fgets com nomes compostos

// === aqui criamos a "carta", que é tipo uma caixinha que guarda tudo do país ===
typedef struct {
    char pais[50];                // nome do país
    char capital[50];             // capital
    char codigo[50];              // código da carta
    unsigned long int populacao;  // população
    int turisticos;               // pontos turísticos
    float area;                   // área em km²
    float pib;                    // PIB total
    float densidade;              // densidade populacional
    float pibPerCapita;           // PIB por pessoa
    float SUPERPODER;             // atributo especial 
} Carta;

int main() {
    Carta cartas[2]; // array de 2 cartas, assim não preciso repetir código igual idiota

    printf("Vamos começar o cadastro das Cartas.\n\n");

    // === loop para cadastrar todas as cartas ===
    for (int i = 0; i < 2; i++) {
        printf("Vamos ao cadastro da carta numero %d.\n", i + 1);

        getchar(); // limpa o buffer antes do fgets pra não pular o nome do país
        printf("Digite o nome do país %d: ", i + 1);
        fgets(cartas[i].pais, sizeof(cartas[i].pais), stdin);
        cartas[i].pais[strcspn(cartas[i].pais, "\n")] = '\0';

        printf("Digite o numero de pessoas que habitam %s: ", cartas[i].pais);
        scanf("%lu", &cartas[i].populacao);

        printf("Digite o PIB: ");
        scanf("%f", &cartas[i].pib);

        printf("Qual a area de %s sem km²?: ", cartas[i].pais);
        scanf("%f", &cartas[i].area);

        printf("Possui quantos pontos turisticos?: ");
        scanf("%d", &cartas[i].turisticos);

        getchar(); // limpa buffer pra não bagunçar o fgets da capital

        printf("Qual a capital desse país?: ");
        fgets(cartas[i].capital, sizeof(cartas[i].capital), stdin);
        cartas[i].capital[strcspn(cartas[i].capital, "\n")] = '\0';

        printf("Qual codigo representa %s ?: ", cartas[i].pais);
        scanf("%s", cartas[i].codigo);

        // cálculos automáticos
    cartas[i].densidade = cartas[i].populacao / cartas[i].area;
    cartas[i].pibPerCapita = cartas[i].pib / cartas[i].populacao;

    cartas[i].SUPERPODER = 
       (float)cartas[i].populacao 
    + cartas[i].pib 
    + cartas[i].area 
    + (float)cartas[i].turisticos 
    + cartas[i].pibPerCapita 
    + (1.0f/cartas[i].densidade); 
       
 printf("Carta %d cadastrada com sucesso!\n\n", i + 1);
    }

    // === mostrar os dados das cartas cadastradas ===
    printf("Vamos ver os dados das cartas cadastradas:\n\n");
    for (int i = 0; i < 2; i++) {
        printf("País: %s\n", cartas[i].pais);
        printf("Capital: %s\n", cartas[i].capital);
        printf("Populacao: %lu\n", cartas[i].populacao);
        printf("Aproximadamente %d pontos turisticos\n", cartas[i].turisticos);
        printf("Area: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Densidade populacional: %.2f hab/km²\n", cartas[i].densidade);
        printf("PIB per capita: %.2f\n\n", cartas[i].pibPerCapita);
        printf("SUPERPODER: %.2f\n\n", cartas[i].SUPERPODER);

    }

//compare os super poderes pontos das cartas
    printf("Comparando os pontos e SUPERPODERES das cartas...\n");
    
    int comp_pop = cartas[0].populacao > cartas[1].populacao;
    int comp_pib = cartas[0].pib > cartas[1].pib;
    int comp_area = cartas[0].area > cartas[1].area;
    int comp_tur = cartas[0].turisticos > cartas[1].turisticos;
    int comp_pibpc = cartas[0].pibPerCapita > cartas[1].pibPerCapita;
    int comp_den = cartas[0].densidade < cartas[1].densidade;
    int comp_sp = cartas[0].SUPERPODER > cartas[1].SUPERPODER;

printf("\n");
printf("Para 1 a vitoria é da CARTA 1 e para 0 a vitoria é da CARTA 2\n");
printf ("\n");
    printf("Comparando os atributos:\n");
    printf("Populacao: %d  \n", comp_pop);
    printf("PIB: %d  \n", comp_pib);
    printf("Area: %d  \n", comp_area);
    printf("Pontos turisticos: %d  \n", comp_tur);
    printf("PIB per capita: %d  \n", comp_pibpc);
    printf("Densidade populacional: %d\n", comp_den);
    printf("SUPERPODER: %d \n", comp_sp);
    
     return 0; // fim do programa
} 
