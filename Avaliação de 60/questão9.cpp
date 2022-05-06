#include <stdio.h>

int main()
{
    float numero;
    
    printf("Insira o número: "); scanf("%f",&numero);
    printf("O dobro desse número é: %.1f",numero*2);
    printf("\nO triplo desse número é: %.1f",numero*3);
    return 0;
}
