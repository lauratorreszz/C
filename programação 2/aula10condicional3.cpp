#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Informe um número: "); scanf("%d",&numero);
    
    if(numero%2==0){
        printf("\nO número é par");
    }
    else{
        printf("\nO número é ímpar");
    }
    
    return 0;
}

