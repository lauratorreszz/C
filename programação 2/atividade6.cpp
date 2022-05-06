#include <stdio.h>

int main()
{
	int dividendo, divisor, resultado, resto; 
	printf("Digite o dividendo: \n");
	scanf("%d",&dividendo);
	
	printf("Digite o divisor: \n");
	scanf("%d",&divisor);
	
	resultado = dividendo/divisor;
	resto = dividendo % divisor; 
	
	printf("O quociente da divisão é %d",resultado);
	printf("O resto da divisão é %d",resto);
	return 0;
}
