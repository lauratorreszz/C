#include <stdio.h>

int main()
{
    char nome[50];
    char endereco[50];
    int cep;
    int telefone;
    char profissao[50];
    
    printf("Insira seu nome: ");
	scanf("%s",&nome);
	
    printf("\nQual � o seu endere�o?: ");
	scanf("%s",&endereco);
	
    printf("\nQual � o seu CEP?: ");
	scanf("%d",&cep);
	
    printf("\nQual � o seu telefone?: ");
	scanf("%d",&telefone);
	
    printf("\nQual � a sua profiss�o?: ");
	scanf("%s",&profissao);
    
    printf("\nNome: %s",nome);
    printf("\nEndere�o: %s",endereco);
    printf("\nCEP: %d",cep);
    printf("\nTelefone: %d",telefone);
    printf("\nProfiss�o: %s",profissao);
    
    return 0;

}
