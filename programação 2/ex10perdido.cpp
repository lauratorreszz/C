#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int contador;
	int num;
	
	printf("ENTRE COM UM NUMERO INTEIRO");
	scanf("%d",&num);
	
	for(contador=1; contador <= 10; contador++){
		
		
		if(contador%2 == 0){
		printf("%d \n",contador);	
			
		}	
		
	}
	
	return 0;
}
