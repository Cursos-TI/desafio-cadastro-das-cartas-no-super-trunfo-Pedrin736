#include <stdio.h>

int main(){
    //carta1
char estado[10]; //A
char codigo[20]; //A01
char cidade[20]; //Riodejaneiro
int populacao;   // 200.000 
float area;      // 2.000.000 km²
float PIB;       // 50.000.000 bilhões
int pontos_turisticos; // 50

printf("Digite o estado: \n");
scanf("%s", &estado);

printf("Digite o codigo: \n");
scanf("%s", &codigo);

printf("Digite a cidade: \n");
scanf("%s", &cidade);

printf("Digite a populaçao: \n");
scanf("%d", &populacao);

printf("Digite a area: \n");
scanf("%f", &area);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite os pontos_turisticos: \n");
scanf("%d", &pontos_turisticos);

printf("estado: %s\n", estado);
printf("codigo: %s\n", codigo);
printf("cidade: %s\n", cidade);
printf("populaçao: %d\n", populacao);
printf("area: %f\n", area);
printf("PIB: %f", PIB);
printf("pontos_turisticos: %d\n", pontos_turisticos);


return 0



}