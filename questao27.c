#include <stdio.h>
int main(void) {
  float produto;
  printf("Digite o preço do produto: \n");
  scanf("%f", &produto);
  if (produto < 100){
  float precoProduto = 1.10 * produto;
     printf("\n O novo preço do produto é:%1.2f",precoProduto);
  }else{
     float NprecoProduto = 1.20 * produto ;
    printf("\n O novo preço do produto é:%1.2f",NprecoProduto);
  }
 return 0;}
