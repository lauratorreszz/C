#include <stdio.h>
#include <math.h> 

int main()
{
	float perimetro, area, raio;
	
	printf("Entre com o raio da circunfer�ncia");
	scanf("%f",&raio); 

	area = M_PI*pow(raio,2);
	
	perimetro = 2*M_PI*raio;
	
	printf("O per�metro � %f", perimetro); 
	printf("A �rea � %f", area);
	
	return 0;
	
	
}

