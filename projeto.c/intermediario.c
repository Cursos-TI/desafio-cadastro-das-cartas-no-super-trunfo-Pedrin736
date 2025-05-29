#include <stdio.h>

 int main(){
    /*
     Soma (+)
     Subtração (-)
     Multiplicação (*)
     Divisão (/)
    */
   
    int = numero1, numero2;
    int = soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);
    //operaçao soma
    soma = numero1 + numero2;
    
    //operaçao subtracao
    subtracao = numero1 - numero2;

    //operaçao multiplicao
    multiplicacao = numero1 * numero2;

    //operaçao divisao
    divisao = numero1 / numero2;


    printf("A soma e: %d\n", soma);
    printf("A subtracao e: %d\n", subtracao);
    printf("A multiplicacao e: %d\n", multiplicacao);
  printf("A divisao e: %d\n", divisao);
 }