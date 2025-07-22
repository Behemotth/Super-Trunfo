#include <stdio.h>
#include <string.h> // anexei o string.h por que alguns nomes compostos de país foram usados e fgets necessita dele

int main (){

    //carta1
    //lembrei que da pra abreviar desta forma ao inves de encher o codigo de Char, char ,int, int...
int populacao1,turisticos1;
float area1,pib1;
char capital1 [50],codigo1 [50],pais1 [50];
//carta2 
    //demorei um pouco me lembrar que cada caso é um caso e uma minima alteraçao nos codigos ja transfoma em um responsavel por novos dados kk 
    //no caso populaçao1 e populacao 2 podem servir pra armazenar o mesmo tipo de dados com valores diferentes de paíss diferentes
int populacao2,turisticos2;
float area2,pib2;
char capital2 [50],codigo2 [50],pais2 [50];

//cadastro carta1
printf("Vamos começar o cadastro das Cartas.\n");
printf("\n\n");
printf("Vamos ao cadastro da carta numero 1.");
printf("\n");
printf("Digite o nome do país 1:");
fgets(pais1, sizeof(pais1), stdin); //fgets é melhor para usar com nomes compostos
pais1[strcspn(pais1, "\n")] = '\0'; //fgets infelizmente capta um \n fantasma que atrapalha na maioria dos casos ate agora, essa linha de codigo transforma o \n captado em \0 anulando o problema.

printf("\n Digite o numero de pessoas que habitam %s:", pais1);
scanf("%d",&populacao1);

printf("\n Digite o PIB:");
scanf("%f", &pib1);

printf("\n Qual a area de %s sem km²?:", pais1);
scanf ("%f", &area1);

printf("\n Possui quantos pontos turisticos?:");
scanf("%d", &turisticos1);

getchar();   //pelo que vi esse codigo serve pra limpar o que foi digitado na entrada anterior, achei bem util, eu tava quebrando a cabeça do devc++ pra descobrir o que tava me atrapalhando pois me sumia a entrada pra digitar o 2 país.
printf("\n Qual a capital desse país?:");
fgets(capital1, sizeof(capital1), stdin); 
capital1 [strcspn(capital1, "\n")] = '\0';

printf ("\n Qual codigo representa %s ?:", pais1);
scanf("%s", codigo1);

//cadastro carta 2
printf("\n\n");
printf("Vamos ao cadastro da carta numero 2.");

getchar();//Aqui tbm tive que repetir o codigo de limpeza pq tava tando conflito 
printf("\n Digite o nome do país 2:");
fgets(pais2, sizeof(pais2), stdin); //fgets é melhor para usar com nomes compostos
pais2 [strcspn(pais2, "\n")] = '\0';

printf("\n Digite o numero de pessoas que habitam %s segundo o IBGE:", pais2);
scanf("%d",&populacao2);

printf("\n Digite o PIB:");
scanf("%f", &pib2);

printf("\n Qual a area de %s sem km²?:", pais2);
scanf("%f", &area2);

printf("\n Possui quantos pontos turisticos?:");
scanf("%d", &turisticos2);

getchar();//Aqui tbm tive que repetir o codigo de limpeza pq tava tando conflito 
printf("\n Qual a capital desse país?:");
fgets(capital2, sizeof(capital2), stdin);   
capital2[strcspn(capital2, "\n")] = '\0';

printf ("\n Qual codigo representa %s ?:", pais2);
scanf("%s", codigo2);

printf("Certo!todas as cartas foram cadastradas com sucesso!\n\n");
printf("Vamos ver os dados das cartas cadastradas:\n\n");

printf("\n \n País: %s. \n Capital: %s. \n Populacao:%d. \n Aproximadamente %d. pontos turisticos. \n Area de %3f km². \n um PIB de %3f. \n  seu Codigo é %s.\n\n ", pais1,capital1,populacao1,turisticos1,area1,pib1,codigo1);  

printf("País: %s. \n Capital: %s. \n Populacao:%d. \n Aproximadamente: %d pontos turisticos. \n Area de %3f km². \n um PIB de %3f. \n  seu Codigo é %s.", pais2,capital2,populacao2,turisticos2,area2,pib2,codigo2 );  

//nao estou conseguindo diminuir o numero de casas decimais que aparecem, eu li em um site que digitar o numero de casas que vc quer que apareça resolveria, mas n foi exatamente o caso infelizmente.
return 0;

}