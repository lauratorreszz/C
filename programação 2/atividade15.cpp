#include <stdio.h>

int main()
{
float valor, total, gorjeta, imposto;
  
  printf("\nDigite o valor de sua refei��o: ");
  scanf("%f",&valor);
  
  gorjeta = valor*0.15;
  imposto =  valor*0.07;
  total = valor+gorjeta+imposto;
  
  printf("\nO valor � de R$ %f",valor);
  printf("\nO imposto � de R$ %f",imposto);
  printf("\nA gorjeta � de R$ %f",gorjeta);
  printf("\nO total � de R$ %f",total);
  
	
}
