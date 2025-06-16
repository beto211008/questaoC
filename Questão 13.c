#include <stdio.h>
int main() {
 int i; float nota, peso, soma_pond = 0, soma_pesos = 0;
    for (i = 1; i <= 3; i++) {
 printf("\nDigite a nota %d°: ", i);
 scanf("%f", &nota);

 printf("Digite o peso da nota %d°: ", i);
 scanf("%f", &peso);
 soma_pond += nota * peso;
 soma_pesos += peso;
    }

 float media_ponderada = soma_pond / soma_pesos;    
  printf("\nMedia ponderada: %1.2f\n", media_ponderada);
    return 0;}
