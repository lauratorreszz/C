#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Informe um número: "); scanf("%d",&i);
    
    if(i<0){
        printf("\nO número é negativo");
    }
    else{
        printf("\nO número é positivo ou nulo");
    }
    
    return 0;
}

