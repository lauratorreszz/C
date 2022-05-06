#include <stdio.h>

int main()
{
    int num[2], x, i; 
    
    printf("Insira o primeiro número: "); scanf("%d",&num[0]);
    printf("Insira o segundo número: "); scanf("%d",&num[1]);
    
    for(x=num[0]; x<=1; x--){
        printf("%d",x);
    }
    
    for(i=num[1]; i<=1; i--){
        printf("%d",i);
    }
    
    return 0;
}

//Não consegui :( 
