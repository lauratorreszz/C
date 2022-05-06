#include <stdio.h>

int main()
{
	float resultado, base, altura;
	
	printf("Entre com o valor da base");
	scanf("%f",&base); 
	
	//%d inteiro, %f float, %lf double, %c char, %s palavra 
	//caracter tamanho menor, string tamanho maior 
	
	printf("Entre com o valor da altura");
	scanf("%f",&altura); 
	
	resultado = (base*altura)/2;
	
	printf("A área do triângulo é %f", resultado);
	
	//return 0 retorna uma função, mas agr n tá retornando nada
	return 0;
	
	
}
