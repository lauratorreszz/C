#include <stdio.h>

int main()
{ 
  float velocidade, distancia1, distancia2, distancia3;
  
  printf("Digite a velocidade que seu carro está: \n");
  scanf("%f",&velocidade); 

  distancia1 = velocidade*5;
  distancia2 = velocidade*8;
  distancia3 = velocidade*12;
  
  printf("Em 5 horas, seu carro percorrerá: \n %f",distancia1);
  printf("\n Em 8 horas, seu carro percorrerá: \n %f",distancia2);
  printf("\n Em 12 horas, seu carro percorrerá: \n %f",distancia3);
 
  return 0;
}
