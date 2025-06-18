#include <stdio.h>
int main(void){
  int nota=0,tamanho=0;float media=0;
  while(nota >= 0){
    printf("Digite sua nota: ");
    scanf("%d",&nota);
    if(nota >=0){
      media += nota;
      tamanho++;
    } 
        } 
  float media_pedida=media / tamanho;
  printf("\nA media das notas digitadas é:%1.1f", media_pedida);
  return 0;}
