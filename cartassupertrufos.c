#include <stdio.h>

//carta1

int main(){
char codigo[4];
char cidade[30];
int habitantes;
float area;
float PIB;
int pontos_turisticos;

printf("Digite o nome do estado: \n");
scanf("%s", &estado);

printf("Digite o codigo da carta: \n");
scanf("%s", &codigo);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade);

printf("Digite o tamanho da populacao: \n");
scanf("%d", &população);

printf("Digite a area da cidade: \n");
scanf("%f", &area);

printf("Digite o PIB da cidade: \n"); 
scanf("%f", &PIB);

printf("Digite os números dos pontos_turisticos: \n");
scanf("%d", &pontosturisticos);

printf("carta: 01\n, carta");
printf("estado: %S\n, estado");
printf("código: %s\n, código");
printf("nome da cidade: %s\n, cidade");
printf("população: %d\n, populacao");
printf("area: %.2f km²\n, area");
print("PIB: %f\n, PIB");
print("pontosturisticos: %d\n, pontos_turisticos");



}