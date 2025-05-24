#include <stdio.h>

int main(){
    // variaveis carta1
char estado [10]; //Bahia
char codigo [7]; //A01
char nomeCidade[50]; //Salvador
int numero_habitantes; //200000 
float areaTotal, pib1;
int pontos_turisticos1; //50 pontos_turisticos

printf("Digite o estado: \n");
scanf("%s", estado);
while ((c = getchar()) != '\n' && c != EOF);


printf("Digite o codigo: \n");
scanf("%s", codigo);
while ((c = getchar()) != '\n' && c != EOF);

printf("Digite o nomeCidade: \n");
scanf("%s", nomeCidade);
 while ((c = getchar()) != '\n' && c != EOF);

printf("Digite o numero_habitantes: \n");
scanf("%d", &numero_habitantes);
 while ((c = getchar()) != '\n' && c != EOF);

printf("Digite a areaTotal: \n");
scanf("%f", &areaTotal);
 while ((c = getchar()) != '\n' && c != EOF); // LIMPA O BUFFER

printf("Digite o pib1: \n");
scanf("%f", &pib1);
while ((c = getchar()) != '\n' && c != EOF); // LIMPA O BUFFER


printf("Digite os pontos_turisticos1: \n");
scanf("%d", &pontos_turisticos1);
  while ((c = getchar()) != '\n' && c != EOF); // LIMPA O BUFFER


printf("estado: %s\n", estado);
printf("codigo: %s\n", codigo);
printf("cidade: %s\n", nomeCidade);
printf("numeros_habitantes: %d\n", numero_habitantes);
printf("areaTotal: %2f\n", areaTotal);
printf("pib: %2f\n", pib1);
printf("pontos_turisticos1: %d\n", pontos_turisticos1);


    


}