#include <stdio.h>

int main(){
    //carta1
char estado [10]; //A
char codigo [7]; //A01
char nomeCidade[50]; //Riodejaneiro
int numero_habitantes; // 200.000 
float areaTotal; // 2.000.000 km²
float pib; // 50.000.000
int pontos_turisticos1; // 50

printf("Digite o estado: \n");
scanf("%s", estado);

printf("Digite o codigo: \n");
scanf("%s", codigo);

printf("Digite o nomeCidade: \n");
scanf("%s", nomeCidade);

printf("Digite o numero_habitantes: \n");
scanf("%d", &numero_habitantes);

printf("Digite a areaTotal: \n");
scanf("%f", &areaTotal);

printf("Digite o pib: \n");
scanf("%f", &pib);

printf("Digite os pontos_turisticos1: \n");
scanf("%d", &pontos_turisticos1);

printf("estado: %s\n", estado);
printf("codigo: %s\n", codigo);
printf("cidade: %s\n", nomeCidade);
printf("numeros_habitantes: %d\n", numero_habitantes);
printf("areaTotal: %f\n", areaTotal);
printf("pbi: %f\n", pib);
printf("pontos_turisticos1: %d\n", pontos_turisticos1);






}