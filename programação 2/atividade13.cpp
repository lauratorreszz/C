#include <stdio.h>

int main()
{
float preco1, preco2, preco3, preco4, preco5, total, subtotal, imposto;
  
  printf("Digite o pre�o do primeiro produto: \n");
  scanf("%f",&preco1);
  
  printf("\n Digite o pre�o do segundo produto: \n");
  scanf("%f",&preco2);
  
  printf("\n Digite o pre�o do terceiro produto: \n");
  scanf("%f",&preco3);
  
  printf("\n Digite o pre�o do quarto produto: \n");
  scanf("%f",&preco4);
  
  printf("\n Digite o pre�o do quinto produto: \n");
  scanf("%f",&preco5);
  
  subtotal = preco1+preco2+preco3+preco4+preco5
  imposto =  subtotal*0.06
  total = subtotal + imposto
  
  printf("\n O subtotal � de R$ %f",subtotal);
  printf("\n O imposto � de R$ %f",imposto);
  printf("\n O total � de R$ %f",total);
  
	
}
