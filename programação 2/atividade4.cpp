#include <stdio.h>

int main()
{
	float perimetro, lado1, lado2, lado3;
	
	printf("Entre com o primeiro lado");
	scanf("%f",&lado1); 
	
	printf("Entre com o segundo lado");
	scanf("%f",&lado2); 
	
	printf("Entre com o terceiro lado");
	scanf("%f",&lado3); 

    perimetro = lado1+lado2+lado3;
	
	printf("O perímetro é %f", perimetro); 
	
	return 0;
	
}
