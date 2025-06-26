#include <stdio.h>
#include <string.h>
#define MAX_NOME 64
#define MAX_REGRAS 300
#define MAX_DATA 11
#define MAX_CPF 15

typedef struct{
  char nome[MAX_NOME];
  int capacidade_total;
  int vagas_ocupadas;
  char Regras_internas[MAX_REGRAS];
} LocalSeguro;

//Dados das entidades de apoio
LocalSeguro locais[3] = {
    {"CUFA", 57, 33,"É proibido o consumo de bebidas alcoólicas e drogas ilícitas."},
    {"Somos todos muribeca", 42, 29,"Proibido pets"},
    {"GRIS", 121, 95,"Não é permitido guardar alimentos nos dormitórios por risco de contaminação."}
};

typedef struct{
  char nome[MAX_NOME];
  char cpf[MAX_CPF];
  char data_nasc[MAX_DATA];
} usuario;

//função para mostrar o percentual de vagar ocupadas nas entidades de apoio
void percentual_ocupado(LocalSeguro locais[],int tamanho){
  printf("\n================= TAXA DE OCUPAÇÃO DAS ENTIDADES =================\n\n");
  for(int i=0;i<tamanho;i++){
    float porcentagem=(float)locais[i].vagas_ocupadas / locais[i].capacidade_total * 100;
    printf("'%s'\n", locais[i].nome);
    printf("Taxa de ocupação: %.1f%%\n", porcentagem);
    printf("------------------------------------------------------------\n");
  }
}

//função para mostrar as entidades de apoio
void mostrarLocais(LocalSeguro locais[], int tamanho) {
  printf("\n================= LOCAIS SEGUROS DISPONÍVEIS =================\n\n");
  for (int i = 0; i < tamanho; i++) {
    int vagas_restantes = locais[i].capacidade_total - locais[i].vagas_ocupadas;
    printf("%d. %s\n", i + 1, locais[i].nome);
    printf("Vagas disponíveis: %d\n", vagas_restantes);
    printf("------------------------------------------------------------\n");
  }
}

//função para fazer uma reserva em uma entidade de apoio
void fazereserva(LocalSeguro locais[], int tamanho, usuario u){
    int opcao_reserva,total_pessoas;
     printf("\n================= FAZER RESERVA =================\n\n");
       printf("Digite o número do local que deseja reservar: ");
        scanf("%d", &opcao_reserva);
          opcao_reserva--;
    
  if (opcao_reserva >= 0 && opcao_reserva < tamanho) {
      int vagas_disponiveis = locais[opcao_reserva].capacidade_total - locais[opcao_reserva].vagas_ocupadas;
  
      if (vagas_disponiveis > 0) {
        printf("Quantas pessoas você quer cadastrar (incluindo você)? ");
         scanf("%d", &total_pessoas);
        
          if (total_pessoas <= vagas_disponiveis) {
              locais[opcao_reserva].vagas_ocupadas += total_pessoas;
                printf("\n✅ Reserva realizada com sucesso!\n");
                 printf("Responsável: %s\n", u.nome);
                  printf("Local: %s\n", locais[opcao_reserva].nome);
                    printf("Total de pessoas: %d\n", total_pessoas);
                 } else {
                       printf("\n⚠️ Não tem vagas o suficiente! Apenas %d disponíveis.\n", vagas_disponiveis);}
      } else {
        printf("\n❌ Este local está cheio. Escolha outro.\n");}
  } else {
      printf("\n❌ Opção inválida.\n");}
}

//função principal, ela cadastra o usuario e exibe um menu para executar as outras funções 
int main(void) {
  usuario u;int opcao;
  printf("\n================= SISTEMA DE CADASTRO DO AQUASAFE =================\n\n");

  printf("Digite seu nome: ");
  fgets(u.nome, MAX_NOME, stdin);  
  size_t linha = strlen(u.nome);
  if (u.nome[linha-1] == '\n'){
    u.nome[linha -1] = '\0';
  }
  printf("Digite seu CPF(FORMATO: 000.000.000-00): ");
  fgets(u.cpf, MAX_CPF, stdin); 
  getchar();
  printf("Digite sua data de nascimento (ex: DD/MM/AAAA): ");
  fgets(u.data_nasc, MAX_DATA, stdin); 

  printf("\n✅ Cadastro realizado com sucesso!\n");
  printf("------------------------------------------------------------\n");
  printf("Nome: %s\n", u.nome);
  printf("CPF: %s\n", u.cpf);
  printf("Data de nascimento: %s", u.data_nasc);
  printf("\n------------------------------------------------------------\n");

  do{
    printf("\n================= MENU PRINCIPAL =================\n\n");
    printf("1 - Visualizar OSCS (ONGs) disponíveis\n");
    printf("2 - Fazer reserva em uma entidade de apoio\n");
    printf("3 - Sair do sistema\n");
    printf("------------------------------------------------------------\n");
    printf("Digite aqui sua opção: ");
    scanf("%d",&opcao);

    switch(opcao){
      case 1 :
        mostrarLocais(locais, 3);
        break;

      case 2:
        percentual_ocupado(locais, 3);
        mostrarLocais(locais, 3);
        fazereserva(locais, 3, u);
        break;

      case 3:
        printf("\n✅ Encerrando... Até logo!\n");
        break;

      default:
        printf("\n❌ Opção inválida! Tente novamente.\n");
    }

  } while((opcao != 1) && (opcao !=2) && (opcao !=3)); 
  
  return 0;
}
