#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Informe um n�mero: "); scanf("%d",&i);
    
    if(i<0){
        printf("\nO n�mero � negativo");
    }
    else{
        printf("\nO n�mero � positivo ou nulo");
    }
    
    return 0;
}

