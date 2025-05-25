#include <stdio.h>

int main(){
    // variaveis carta1
char estado [10]; //Bahia
char codigo [7]; //A01
char nomeCidade[50]; //Salvador
int numero_habitantes; //200000 
float areaTotal, pib1;
int pontos_turisticos1;
int c; // variavel para limpar o buffer

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
printf("pib1: %2f\n", pib1);
printf("pontos_turisticos1: %d\n", pontos_turisticos1);

    // Variavel carta 2

 char estado2 [15]; //Riodejaneiro
 char codigo2 [7]; // B02
 char nomeCidade2; // Paracambi
 int numeros_habitantes2; // 40000
 float areaTotal2, pib2;
 int   pontos_turisticos2; // 23
 


printf("Digite o estado2: \n");
scanf("%s", &estado2);

printf("Digite o codigo2: \n");
scanf("%s", &codigo2);

printf("Digite o nomeCidade2: \n");
scanf("%s", &nomeCidade2);

printf("Digite o numero_habitantes2: \n");
scanf("%d", &numero_habitantes2);

printf("Digite a areaTotal2: \n");
scanf("%f", &areaTotal2);

printf("Digite o pib2: \n");
scanf("%f", &pib2);

printf("Digite os pontos_turisticos2 \n");
scanf("%d", &pontos_turisticos);


printf("estado2: %s\n", estado);
printf("codigo2: %s\n", codigo);
printf("nomeCidade2: %s\n", nomeCidade2);
printf("numero_habitantes2: %s\n", numero_habitantes2);
printf("areaTotal2: %f\n", areaTotal2);
printf("pib2: %f\n", pib2);
printf("pontos_turisticos2: %d\n", pontos_turisticos2);



    


}