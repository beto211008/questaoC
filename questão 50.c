#include <stdio.h>
int main(void){
  float lado1,lado2,lado3,lado4;
  printf("---------------A imobiliária Central vende apenas terrenos retangulares.------------------------ \n");
  printf("\n Digite as 4 dimenções do terreno retangular: \n");
  scanf("%f" ,&lado1);
   scanf("%f" ,&lado2);
   scanf("%f" ,&lado3);
   scanf("%f" ,&lado4);
  printf("A área do terro é de : %1.1f", lado1*lado2*lado3*lado4);
  return 0;}
