#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, numero;
	i =1;
	
	printf("Entre com o numero para a tabuada");
	scanf("%d", &numero);
	
	while(i <= 10){
		
		printf("\n %d X %d = %d",numero, i, i*numero);
		i++;
	}
	
	
	return 0;
}
