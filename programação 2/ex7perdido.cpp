#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a= 1, b =2;
	
	if(a == 0 and b ==0){
		printf("A e B são zero");
		
	}else if (a ==1 or b==1){
		printf("Pelo menos um dos valores é um ");
	}else if(a==2 && b==2){
		printf("A e B são iguais a dois");
	}

	return 0;
}
