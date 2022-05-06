#include <stdio.h>

int main()
{
    int idade, meses; 
    
    printf("Insira a sua idade em anos: "); scanf("%d",&idade);
    meses = idade*12; 
    printf("Sua idade em meses é: %d\n",meses);
    printf("Sendo assim, sua idade em dias é: %d\n",meses*30);
    return 0;
}

