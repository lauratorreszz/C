#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome[20];
    char senha[20];
    
    do{
    printf("Insira seu nome: "); 
    scanf("%s",&nome); 
    printf("Insira sua senha: "); 
    scanf("%s",&senha); 
    }
    while(senha==nome);
    printf("Insira seu nome: "); 
    scanf("%s",&nome); 
    printf("Insira sua senha: "); 
    scanf("%s",&senha); 
    
    return 0;
}
