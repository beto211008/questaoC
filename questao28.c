#include <stdio.h>
int main(void) {
  float totalGast, precoAvista; int opcaoP, parcela;
  printf("Digite o seu gasto todal R$");
  scanf("%f", &totalGast);
    printf("Escolha as opções de pagamento:\n   <------------------------------------>\n 1- A vista com 10%% de desconto\n 2- Em duas vezes (preço da etiqueta)\n 3- De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$100,00).\n Digite aqui:");
      scanf("%d", &opcaoP);
    precoAvista=  totalGast - (0.1 * totalGast) ;
    switch (opcaoP) {
     case 1:
          printf("Você escolheu a opção 1!.\n <------------------------------------>\n O valor total da compra ficou R$%1.1f",precoAvista);
          break;
      case 2:
          printf("Você escolheu a opção 2!.\n <------------------------------------>\n O valor total da compra ficou R$%1.1f\n Em duas parcelas de %1.1f",totalGast,totalGast/2);
          break;
      case 3:
          printf("\nVocê escolheu a opção 3.Você gostaria de dividir em quantas vezes ( de 3 a 10 vezes) :");
          scanf("%d",&parcela);
          if (parcela == 3){
          float parcela3= (totalGast /3) * 1.03 ;
            printf("\n %d parcelas de R$:%1.1f\n O valor total a ser pago R$%1.1f",parcela,parcela3,parcela3*3);
          }else if (parcela == 4){
          float parcela4= (totalGast /4) * 1.04 ;
            printf("\n %d parcelas de R$:%1.1f\n O valor total a ser pago R$%1.1f",parcela,parcela4,parcela4*4);
          }else if (parcela == 5){
          float parcela5= (totalGast /5) * 1.05 ;
            printf("\n %d parcelas de R$:%1.1f\n O valor total a ser pago R$%1.1f",parcela,parcela5,parcela5*5);
          }else if (parcela == 6){
          float parcela6= (totalGast /6) * 1.06 ;
            printf("\n %d parcelas de R$:%1.1f\n O valor total a ser pago R$%1.1f",parcela,parcela6,parcela6*6);
          }else if (parcela == 7){
          float parcela7= (totalGast /7) * 1.07 ;
            printf("\n %d parcelas de R$:%1.1f\n O valor total a ser pago R$%1.1f",parcela,parcela7,parcela7*7);
          }else if (parcela == 8){
          float parcela8= (totalGast /8) * 1.08 ;
            printf("\n %d parcelas de R$:%1.1f\n O valor total a ser pago R$%1.1f",parcela,parcela8,parcela8*8);
          }else if (parcela == 9){
          float parcela9= (totalGast /9) * 1.09;
            printf("\n %d parcelas de R$:%1.1f\n O valor total a ser pago R$%1.1f",parcela,parcela9,parcela9*9);
          }else if (parcela == 10){
          float parcela10= (totalGast /10) * 1.10;
            printf("\n %d parcelas de R$:%1.1f\n O valor total a ser pago R$%1.1f",parcela,parcela10,parcela10*10);
          };
        break;
    default:
    printf("Opção inválida");
    };
 return 0;}
