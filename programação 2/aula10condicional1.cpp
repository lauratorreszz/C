#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    int valor; 
    printf("Converter: \n"); 
    printf("\n1: decimal pra hexadecimal");
    printf("\n2: hexadecimal pra decimal");
    printf("\nInforme uma op��o "); scanf("%d",&opcao);
    
    if(opcao==1){
        printf("Entre com um valor decimal "); scanf("%d",&valor);
        printf("%d em hexadecimal �: %x",valor, valor);
    }
    if(opcao==2){
        printf("Entre com um valor em hexadecimal "); scanf("%x",&valor);
        printf("%x em decimal �: %d",valor, valor);
    }
    
    return 0;
}
