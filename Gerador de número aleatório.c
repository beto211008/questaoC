#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int numeroMagico ,numero, contador=0;
    srand(time(NULL));
    numeroMagico = rand()%501;
    do {
    printf("Qual numero mágico?\n ");
  scanf("%d", &numero);
     contador++;
   if(numero > numeroMagico){
      printf("O numero que você digitou é maior que o numero mágico\n");
   }else if(numero < numeroMagico){
      printf("O numero que você digitou é menor que o numero mágico\n");
    } else {
     printf("Você é genio,acertou na mosca!em apenas %d tentativas\n",contador);
    if (contador >= 1 && contador <= 3) {
        printf("Classificação: Muito sortudo!\n");
    } else if (contador <= 6) {
        printf("Classificação: Sortudo!\n");
    } else if (contador <= 10) {
        printf("Classificação: Normal.\n");
    } else {
        printf("Classificação: Tente novamente.\n");}
    } } while(numero != numeroMagico);
 return 0;}
