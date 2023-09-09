#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  int i, jogar_moeda = 0, numero_de_coroas = 0, numero_de_caras = 0, mostrar_moedas;
  
  do
  {
  	  system("cls");
  	  printf("Jogando a moeda\n\n");
	  system("pause");
	  system("cls");
	  printf("RESULTADO: ");
	
	  srand(time(NULL));
	  
	  i = (rand() % 2);
	  if (i == 0)
	  {
	  	printf("Coroa");
	  	numero_de_coroas++;
	  }
	  else
	  {
	  	printf("Cara");
	  	numero_de_caras++;
	  }
	  
	  printf("\n\n");
	  
	  if(mostrar_moedas == 1)
	  {
	  	printf("Caras: %d", numero_de_caras);
	  	printf("\tCoroas: %d", numero_de_coroas);
	  	printf("\n\n");
	  }
	  
	  system("pause");
	  system("cls");
	  
	  printf("Deseja jogar outra moeda?\n0 - nao\t\t1 - sim\nResposta: ");
	  scanf("%d", &jogar_moeda);
	  if(jogar_moeda == 0)
	  {
	  	return 0;
	  }
	  
	  printf("\n\n");
	  
	  if(mostrar_moedas == 0)
	  {
	  	printf("Deseja mostrar o numero aparicao de cada moeda?\n0 - nao\t\t1 - sim\nResposta: ");
	  	scanf("%d", &mostrar_moedas);
	  }
	  	  
  }while(jogar_moeda == 1);
 
}
