
#include <stdio.h>
#include <string.h> // anexei o string.h por que alguns nomes compostos de estado foram usados e fgets necessita dele

int main (){

    //carta1
int populacao1;
int turisticos1;

float area1;
float pib1;
 
char capital1 [50];
char codigo1 [50];
char estado1 [50];
    

//carta2 
    //demorei um pouco me lembrar que cada caso é um caso e uma minima alteraçao nos codigos ja transfoma em um responsavel por novos dados kk 
    //no caso populaçao1 e populacao 2 podem servir pra armazenar o mesmo tipo de dados com valores diferentes de estados diferentes
int populacao2;
int turisticos2;

float area2;
float pib2;


char capital2 [50];
char codigo2 [50];
char estado2 [50];

//cadastro carta1
printf("Vamos começar o cadastro das Cartas.\n");
printf("\n\n");
printf("Vamos ao cadastro da carta numero 1.");
printf("\n");
printf("Digite o nome do Estado 1:");
fgets(estado1, sizeof(estado1), stdin); //fgets é melhor para usar com nomes compostos
estado1[strcspn(estado1, "\n")] = '\0'; //fgets infelizmente capta um \n fantasma que atrapalha na maioria dos casos ate agora, essa linha de codigo transforma o \n captado em \0 anulando o problema.

printf("\n Digite o numero de pessoas que habitam %s:", estado1);
scanf("%d",&populacao1);

printf("\n Digite o PIB:");
scanf("%f", &pib1);

printf("\n Qual a area de %s sem km²?:", estado1);
scanf ("%f", &area1);

printf("\n Possui quantos pontos turisticos?:");
scanf("%d", &turisticos1);

getchar();//pelo que vi esse codigo serve pra limpar o que foi digitado na entrada anterior, achei bem util, eu tava quebrando a cabeça do devc++ pra descobrir o que tava me atrapalhando pois me sumia a entrada pra digitar o 2 estado.
printf("\n Qual a capital desse Estado?:");
fgets(capital1, sizeof(capital1), stdin); 
capital1[strcspn(capital1, "\n")] = '\0';

printf ("\n Qual codigo representa %s ?:", estado1);
scanf("%s", codigo1);

//cadastro carta 2
printf("\n\n");
printf("Vamos ao cadastro da carta numero 2.");

getchar();//Aqui tbm tive que repetir o codigo de limpeza pq tava tando conflito 
printf("\n Digite o nome do Estado 2:");
fgets(estado2, sizeof(estado2), stdin); //fgets é melhor para usar com nomes compostos
estado2[strcspn(estado2, "\n")] = '\0';

printf("\n Digite o numero de pessoas que habitam %s segundo o IBGE:", estado2);
scanf("%d",&populacao2);

printf("\n Digite o PIB:");
scanf ("%f", &pib2);

printf("\n Qual a area de %s sem km²?:", estado2);
scanf("%f", &area2);

printf("\n Possui quantos pontos turisticos?:");
scanf("%d", &turisticos2);

getchar();//Aqui tbm tive que repetir o codigo de limpeza pq tava tando conflito 
printf("\n Qual a capital desse Estado?:");
fgets(capital2, sizeof(capital2), stdin);
capital2[strcspn(capital2, "\n")] = '\0';

printf ("\n Qual codigo representa %s ?:", estado2);
scanf("%s", codigo2);

printf("\n \n Estado: %s \n Capital: %s \n Populacao:%d \n Com Aproximadamente %d pontos turisticos. \n e uma area de %3f km². \n um PIB de %3f. \n  seu Codigo é %s.\n\n ", estado1,capital1,populacao1,turisticos1,area1,pib1,codigo1);  

printf("Estado: %s. \n Capital: %s. \n Populacao:%d. \n Com Aproximadamente: %d pontos turisticos. \n e uma area de %3f km². \n um PIB de %3f. \n  seu Codigo é %s.", estado2,capital2,populacao2,turisticos2,area2,pib2,codigo2 );  

//nao estou conseguindo diminuir o numero de casas decimais que aparecem, eu li em um site que digitar o numero de casas que vc quer que apareça resolveria, mas n foi exatamente o caso infelizmente.
return 0;

}