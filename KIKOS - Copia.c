#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
	
	int escolha;
	
	printf("Lanches do Kiko, seja bem vindo!!\n");
	printf("Faca seu pedido:\n");
	printf("1 X-Bacon\n");
	printf("2 X-Salada\n");
	printf("3 Sair\n");
	printf("Escolha o numero do seu pedido ou tecle 3 para SAIR: \n");
	scanf("%d",&escolha);
	
	switch (escolha){
		case 1:
			printf("O valor do X-Bacon e: R$18,00\n");
			scanf("%d", &escolha);
			break;
		case 2:
			printf("O valor do X-Salada e: R$15,00\n");
			scanf("%d", &escolha);
			break;
		case 3:
			printf("Volte sempre!!");
			scanf("%d", &escolha);
			break;
		default:printf("ERRO: Numero digitado invalido");
			break;
	}	
	return 0;
}
