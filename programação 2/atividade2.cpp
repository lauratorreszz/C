#include <stdio.h>

int main()
{
	float perimetro, area, lado;
	
	printf("Entre com o valor do lado");
	scanf("%f",&lado); 

	perimetro = lado * 4;
	
	area = lado*lado;
	
	printf("O per�metro � %f", perimetro); 
	printf("A �rea � %f", area);
	
	//return 0 retorna uma fun��o, mas agr n t� retornando nada
	return 0;
	
	
}
