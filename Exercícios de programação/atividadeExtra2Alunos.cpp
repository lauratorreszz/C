#include <stdio.h>
#include <stdlib.h>

int main(){
	
float preco;

printf("Digite o pre�o:"); scanf("%f",&preco);

if(preco<100){
	preco = preco * 1.1;
}
if(preco>=100){
    preco = preco * 1.2;
}

printf("O valor total �: %f",preco);

return 0;
}
