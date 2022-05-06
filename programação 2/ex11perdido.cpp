#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int contador;
	int num;
	
	printf("ENTRE COM UM NUMERO INTEIRO");
	scanf("%d",&num);
	
	for(contador=1; contador <= 10; contador++){
		
		
		if((num%2 == 0)	&& (num!=2) || (num%3 == 0) && (num!=3) || (num%5==0) && (num!=5) || (num%7==0) && (num!=7)){
			
			
			printf("Nao e  primo");
		}else
		
		{
			printf("primo");
		}
		}	
		// não  pode ser divisivel por 2 3 5 e 7
		
	return 0;	
	}
