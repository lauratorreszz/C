#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int contador;
	int num;
	
	printf("ENTRE COM UM NUMERO INTEIRO");
	scanf("%d",&num);
	
	for(contador=1; contador <= num; contador++){
		
		printf("%d \n",contador);
	}
	for(contador=1; contador <= num; contador++){
		
		printf("%d",contador);
	}
	
	return 0;
}
