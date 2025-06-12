#include <stdio.h>
int main(void){
float num1,num2; char operador;
  do {
    printf("Digite dois números para ser feita uma operação: ");
      scanf("%f %f",&num1 ,&num2);
      printf("\nDigíte um símbolo de operação desejada(+, -, /,*): ");
    scanf("%s", &operador);
switch(operador){
  case '+':
    printf("\nA soma de %1.1f + %1.1f é:%1.1f ",num1,num2 ,num1 + num2 );
  break;
  case '-':
    printf("\nA Subtração de %1.1f - %1.1f é:%1.1f ",num1,num2 ,num1 - num2 );
  break;
  case '*':
  printf("\nA multiplicação de %1.1f X %1.1f é:%1.1f ",num1,num2 ,num1 * num2 );
  break;
  case '/':
  printf("\nA divisão de %1.1f / %1.1f é:%1.1f ",num1,num2 ,num1 / num2 );
  break;
  default:
  printf("\n Digite um símbolo válido.\n " );
  break;
};}while((operador!='+') && (operador!='-' && (operador!='*') && (operador!='/')));
return 0;}
