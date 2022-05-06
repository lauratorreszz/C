#include <stdio.h>

int main()
{
	float perimetro, area, lado;
	
	printf("Entre com o valor do lado");
	scanf("%f",&lado); 

	perimetro = lado * 4;
	
	area = lado*lado;
	
	printf("O perímetro é %f", perimetro); 
	printf("A área é %f", area);
	
	//return 0 retorna uma função, mas agr n tá retornando nada
	return 0;
	
	
}
