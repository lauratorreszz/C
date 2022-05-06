#include <stdio.h>
#include <math.h>
int main()
{
	float fahrenheit, celsius; 
	printf("Digite uma temperatura em Fahrenheit: \n");
	scanf("%f",&fahrenheit);
	
	celsius = 5/9*(fahrenheit-32);
	
	printf("A temperatura em Celsius é equivalente a: \n %f",celsius);
	return 0;
}

