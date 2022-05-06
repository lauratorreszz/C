#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int opcao;
	
	printf("Digite um numero de 0 a 4\n");
	scanf("%d",&opcao);
	
	switch(opcao)
	{
		
		case 0:
			system("cls || clear");
			printf("Sair");
			break;
		case 1: 
			system("cls || clear");
			printf("Bem vindo quanto vc quer sacar?");
			break;
		case 2:
			system("cls || clear");
			printf("Bem vindo quanto vc quer depositar");
			break;
		case 3:
			system("cls || clear");
			printf("Tranferencia");
			break;
		case 4: 
			printf("Faça um pix para o Felipe");
			break;
			
		default:
			printf("Opcao invalida");
			
	}
	while(opcao);
	
	return 0;
	}
