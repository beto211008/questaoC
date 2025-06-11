#include <stdio.h>
int main(void){
float num1,num2,num3,maior=0,menor=0,intermediario=0;
  printf("Digite Três números: ");
  scanf("%f %f %f",&num1 ,&num2 , &num3);
  if((num1 >= num2) && (num1 >= num3)){
   maior += num1;
  }else if((num2 >= num1) && (num2 >= num3)){
        maior += num2;
    } else {
    maior += num3;
  };
  if((num1 <= num2) && (num1 <= num3)){
    menor += num1;
  }else if((num2 <= num1) && (num2 <= num3)){
    menor += num2;
    } else {
    menor += num3;
  };
intermediario = num1 + num2 + num3 - maior - menor;
  printf("\n<<<<<<<<Aqui estão as classificações dos números>>>>>>>>>>\n ");
  printf("%1.1f | maior\n",maior);
  printf("%1.1f | menor\n",menor);
  printf("%1.1f | intermediário\n",intermediario);
