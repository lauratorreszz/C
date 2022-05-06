#include <stdio.h>
#include <math.h> 

int main()
{
	float volume, altura, raio;
	
	printf("Entre com o raio da lata: \n");
	scanf("%f",&raio); 
	
	printf("Entre com a altura da lata: \n");
	scanf("%f",&altura); 

    volume = M_PI*pow(raio, 2)*altura;
	
	printf("O volume da lata é: \n %f", volume); 
	return 0;
	
	
}

