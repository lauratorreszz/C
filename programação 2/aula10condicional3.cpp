#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Informe um n�mero: "); scanf("%d",&numero);
    
    if(numero%2==0){
        printf("\nO n�mero � par");
    }
    else{
        printf("\nO n�mero � �mpar");
    }
    
    return 0;
}

