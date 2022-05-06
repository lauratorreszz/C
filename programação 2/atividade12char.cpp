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
	
    printf("\nQual é o seu endereço?: ");
	scanf("%s",&endereco);
	
    printf("\nQual é o seu CEP?: ");
	scanf("%d",&cep);
	
    printf("\nQual é o seu telefone?: ");
	scanf("%d",&telefone);
	
    printf("\nQual é a sua profissão?: ");
	scanf("%s",&profissao);
    
    printf("\nNome: %s",nome);
    printf("\nEndereço: %s",endereco);
    printf("\nCEP: %d",cep);
    printf("\nTelefone: %d",telefone);
    printf("\nProfissão: %s",profissao);
    
    return 0;

}
