#include <stdio.h>
#include <math.h> 

int main()
{
	float perimetro, area, raio;
	
	printf("Entre com o raio da circunferência");
	scanf("%f",&raio); 

	area = M_PI*pow(raio,2);
	
	perimetro = 2*M_PI*raio;
	
	printf("O perímetro é %f", perimetro); 
	printf("A área é %f", area);
	
	return 0;
	
	
}

