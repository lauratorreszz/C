#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	bool usuario_disponivel = true;
	int usuario_cpf = 22324;
	
	if(usuario_disponivel){
		
		printf("CPF - LIBERADO %lf",usuario_cpf);
	}
	else{
		
		printf("Usuário bloqueado %lf",usuario_cpf );
	}
	
	return 0;
}
