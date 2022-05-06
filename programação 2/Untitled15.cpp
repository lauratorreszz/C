//vetor é um lugar no código em que se armazena dados e informações 
//posso guardar por exemplo, idade, numeros etc 
//podem guardar dados de tipo igual ou tipo diferente 
//poupa tempo do usuário (por exemplo, armazenar 10 dados de uma vez só ao invés de fazer 10 perguntas)

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float notas[5] = {7, 8, 9.5, 9.9, 5.2};
	printf("Exibindo notas\n");
	printf("notas[0]= %.1f \n",notas[0]);
	printf("notas[1]= %.1f \n",notas[1]);
	printf("notas[2]= %.1f \n",notas[2]);
	printf("notas[3]= %.1f \n",notas[3]);
	printf("notas[4]= %.1f \n",notas[4]);
	printf("%.1f", notas[1]+notas[4]);
	
	
	// %.1 arredonda para mostrar apenas uma casa apos a virgula 
	
	return 0;
}

