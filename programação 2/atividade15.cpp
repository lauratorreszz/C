#include <stdio.h>

int main()
{
float valor, total, gorjeta, imposto;
  
  printf("\nDigite o valor de sua refeição: ");
  scanf("%f",&valor);
  
  gorjeta = valor*0.15;
  imposto =  valor*0.07;
  total = valor+gorjeta+imposto;
  
  printf("\nO valor é de R$ %f",valor);
  printf("\nO imposto é de R$ %f",imposto);
  printf("\nA gorjeta é de R$ %f",gorjeta);
  printf("\nO total é de R$ %f",total);
  
	
}
