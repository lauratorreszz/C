#include <stdio.h>

int main()
{
float preco1, preco2, preco3, preco4, preco5, total, subtotal, imposto;
  
  printf("Digite o preço do primeiro produto: \n");
  scanf("%f",&preco1);
  
  printf("\n Digite o preço do segundo produto: \n");
  scanf("%f",&preco2);
  
  printf("\n Digite o preço do terceiro produto: \n");
  scanf("%f",&preco3);
  
  printf("\n Digite o preço do quarto produto: \n");
  scanf("%f",&preco4);
  
  printf("\n Digite o preço do quinto produto: \n");
  scanf("%f",&preco5);
  
  subtotal = preco1+preco2+preco3+preco4+preco5
  imposto =  subtotal*0.06
  total = subtotal + imposto
  
  printf("\n O subtotal é de R$ %f",subtotal);
  printf("\n O imposto é de R$ %f",imposto);
  printf("\n O total é de R$ %f",total);
  
	
}
