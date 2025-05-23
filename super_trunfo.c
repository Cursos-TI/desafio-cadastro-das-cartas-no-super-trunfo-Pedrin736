#include <stdio.h>

int main(){
    //carta1
char estado [10]; //A
char codigo [7]; //A01
char nomeCidade[50]; //Riodejaneiro
float numero_habitantes; //200.000 
float areaTotal, pib;
int pontos_turisticos1; //50 pontos_turisticos

printf("Digite o estado: \n");
scanf("%s", estado);

printf("Digite o codigo: \n");
scanf("%s", codigo);

printf("Digite o nomeCidade: \n");
scanf("%s", nomeCidade);

printf("Digite o numero_habitantes: \n");
scanf("%f", &numero_habitantes);

printf("Digite a areaTotal: \n");
scanf("%f", &areaTotal);

printf("Digite o pib: \n");
scanf("%f", &pib);

printf("Digite os pontos_turisticos1: \n");
scanf("%d", &pontos_turisticos1);

printf("estado: %s\n", estado);
printf("codigo: %s\n", codigo);
printf("cidade: %s\n", nomeCidade);
printf("numeros_habitantes: %f\n", numero_habitantes);
printf("areaTotal: %f\n", areaTotal);
printf("pib: %f\n", pib);
printf("pontos_turisticos1: %d\n", pontos_turisticos1);






}