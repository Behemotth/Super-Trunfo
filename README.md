#include <stdio.h>
#include <string.h> // anexei o string.h por que alguns nomes compostos de estado foram usados e fgets necessita dele

int main (){

int populacao;
int turisticos;

float area;
float pib;

//char 
char capital [50];
char codigo [50];
char estado [50];

printf("Digite o Estado:");
fgets(estado, sizeof(estado), stdin); //fgets é melhor para usar com nomes compostos
estado[strcspn(estado, "\n")] = '\0';

printf("digite o numero de pessoas que habitam %s:", estado);
scanf("%d",&populacao);

printf("Digite o PIB:");
scanf ("%f", &pib);

printf("Qual a area de %s sem km²?:", estado);
scanf ("%f", &area);

printf("Possui quantos pontos turisticos?");
scanf("%d", &turisticos);

fgets(capital, sizeof(capital), stdin);
capital[strcspn(capital, "\n")] = '\0';

printf ("qual codigo representa %s ?", estado);
scanf("%s", codigo);

printf("Estado: %s \n Capital: %s \n Populacao:%d \n Com Aproximadamente %d pontos turisticos \n e uma area de %f km² e um PIB de %f, seu Codigo é %s.", estado,capital,populacao,turisticos,area,pib,codigo );  

return 0;

}

//tbm n sei como faço ou se da pra exacutar o codigo pelo github ent to usando o dev c++ se alguem puder me indicar um sistema melhor ou se da pra executar por aqui, eu ficaria agradecido.

// nao sei se estou no caminho certo, ainda me questiono sobre como colocar uma repetiçao pra inserir os dados da nova carta ou se isso é necessario.
