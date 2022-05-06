#include <stdio.h>
#include <stdlib.h>

int main() {

int num [10], i, maior = 1 , menor;

printf("Entre com as 10 notas");
scanf ("%d",&num [0]);
scanf ("%d",&num [1]);
scanf ("%d",&num [2]);
scanf ("%d",&num [3]);
scanf ("%d",&num [4]);
scanf ("%d",&num [5]);
scanf ("%d",&num [6]);
scanf ("%d",&num [7]);
scanf ("%d",&num [8]);
scanf ("%d",&num [9]);


for (i=0;i<10;i++){
	
	if(num[i]> maior)
		maior = num[i];
         
    	else{
	if(num[i]< menor)
	    menor = num[i];	
    	}
}
printf("O maior numero é: %d\n",maior);

printf("O menor numero é: %d\n",menor);


	return 0;
}
