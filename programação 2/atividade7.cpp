#include <stdio.h>

int main()
{
	int idade, idadeMeses, idadeDias; 
	printf("Digite sua idade em anos: \n");
	scanf("%d",&idade);
	
	idadeMeses = idade*12;
	idadeDias = idade*365;
	
	printf("Sua idade em meses � equivalente a: \n %d",idadeMeses );
	printf("\n Sua idade em dias � equivalente a:\n %d",idadeDias);
	return 0;
}
